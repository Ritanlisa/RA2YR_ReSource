#!/usr/bin/env python3
"""build_era.py -- era (VC6/SP3, fingerprint-aligned) compilation channel.

Environment is assembled from the logic of .vc6\\vc6vars.ps1 (PATH/INCLUDE/LIB
pointing at .vc6-8447 + DXSDK). A given .cpp containing the target function is
compiled with `cl /nologo /O2 /Gy /c`; the function's machine code is extracted
from the resulting COFF .obj by parsing section table + symbol table + relocation
table (COMDAT .text sections), locating the function symbol and its true end
(ret past all branch targets, trailing nop/int3 padding stripped).

Usage:
  python tools/codegen_match/build_era.py harness.cpp [--sym Init] [--out DIR] [--dumpbin]

Output artifact ours_<tag>.json:
  {
    "source": "...", "obj": "...", "symbol": "?Init@...", "sym_key": "DListNode::Init",
    "size": N, "link_base": 0, "bytes_hex": "...",
    "relocs": [ {"off": N, "type": "REL32|DIR32", "sym": "?...", "sym_key": "..."} ]
  }
"""
import argparse
import json
import os
import re
import subprocess
import sys

REPO = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
VC6VARS = os.path.join(REPO, ".vc6", "vc6vars.ps1")
DEFAULT_OUT = os.path.join(REPO, ".omo", "agents", "phasea")

from capstone import (Cs, CS_ARCH_X86, CS_MODE_32, CS_GRP_JUMP, CS_OP_IMM)


# ------------------------------------------------------------- env assembly


def era_env(rtm=False):
    """Replicate .vc6/vc6vars.ps1 (default SP3 = .vc6-8447) into a dict."""
    with open(VC6VARS, encoding="utf-8") as f:
        text = f.read()
    # $vc = if ($Rtm) { "$root\.vc6" } else { "$root\.vc6-8447" }
    m = re.search(r'\$vc = if \(\$Rtm\) \{ "\$root\\(.+?)" \} else \{ "\$root\\(.+?)" \}', text)
    if not m:
        raise SystemExit("ERROR: cannot parse $vc selection from vc6vars.ps1")
    vc_dir = os.path.join(REPO, m.group(1) if rtm else m.group(2))
    # era_shim: C++11 headers VC6 lacks (<cstdint>/<cinttypes>). Appended
    # LAST on INCLUDE so genuine VC6 headers always take precedence; the
    # shim only fills gaps (see .vc6/era_shim/README.md).
    shim_dir = os.path.join(REPO, ".vc6", "era_shim")
    paths = {
        "PATH": (r"%s\BIN;C:\Windows\SysWOW64;C:\Windows;" % vc_dir) + os.environ.get("PATH", ""),
        "INCLUDE": r"%s\INCLUDE;%s;%s" % (vc_dir, r"D:\RA2YR_ReSource\.vc6\DXSDK\Include", shim_dir),
        "LIB": r"%s\LIB;%s" % (vc_dir, r"D:\RA2YR_ReSource\.vc6\DXSDK\Lib"),
    }
    # honour DXSDK paths declared in the ps1 itself if present
    m2 = re.search(r'\$env:INCLUDE = "(.*)"', text)
    if m2:
        inc = m2.group(1).replace("$vc", vc_dir).replace("$root", REPO)
        paths["INCLUDE"] = inc + ";" + shim_dir
    m3 = re.search(r'\$env:LIB = "(.*)"', text)
    if m3:
        paths["LIB"] = m3.group(1).replace("$vc", vc_dir).replace("$root", REPO)
    return vc_dir, paths


# ------------------------------------------------------------- COFF parsing


class Coff:
    def __init__(self, path):
        with open(path, "rb") as f:
            self.data = f.read()
        d = self.data
        self.machine, self.nsec = struct2("<HH", d, 0)
        self.psym, self.nsym = struct2("<II", d, 8)
        self.strtab_off = self.psym + self.nsym * 18
        self.sections = []
        for i in range(self.nsec):
            o = 20 + i * 40
            name = d[o:o + 8].split(b"\x00")[0].decode("latin1")
            vsz, va, rsz, ro = struct2("<IIII", d, o + 8)
            relpo, lnpo = struct2("<II", d, o + 24)
            self.sections.append({
                "idx": i + 1, "name": name, "vsz": vsz, "va": va,
                "rsz": rsz, "ro": ro, "relpo": relpo,
            })
        self.symbols = []       # [(sym_idx, name, value, secno, type, cls, naux)]
        i = 0
        while i < self.nsym:
            so = self.psym + i * 18
            name = self._sname(so)
            val, secno, typ, cls, naux = struct2("<IHHBB", d, so + 8)
            self.symbols.append((i, name, val, secno, typ, cls, naux))
            i += 1 + naux
        self.by_index = {s[0]: s for s in self.symbols}

    def _sname(self, so):
        d = self.data
        nm = d[so:so + 8]
        if nm[:4] != b"\x00\x00\x00\x00":
            return nm.split(b"\x00")[0].decode("latin1")
        off = int.from_bytes(nm[4:8], "little")
        end = d.index(b"\x00", self.strtab_off + off)
        return d[self.strtab_off + off:end].decode("latin1")

    def section_by_idx(self, idx):
        for s in self.sections:
            if s["idx"] == idx:
                return s
        return None

    def relocs_of(self, sec):
        out = []
        d = self.data
        n = self._nrel(sec)
        for r in range(n):
            o = sec["relpo"] + r * 10
            rva, rsym, rtype = struct2("<IIH", d, o)
            sym = self.by_index.get(rsym)
            nm = sym[1] if sym else "?sym%d" % rsym
            out.append({"rva": rva, "type": rtype, "sym": nm})
        return out

    def _nrel(self, sec):
        # NumberOfRelocations may saturate at 0xFFFF -> fall back to walking
        d = self.data
        o = 20 + (sec["idx"] - 1) * 40
        n = struct2("<H", d, o + 32)[0]
        if n != 0xFFFF or sec["relpo"] == 0:
            return n
        cnt = 0
        while True:
            ro = sec["relpo"] + cnt * 10
            if ro + 10 > len(d):
                break
            rva, rsym, rtype = struct2("<IIH", d, ro)
            if rva == 0 and rtype == 0 and rsym == 0:
                break
            cnt += 1
        return cnt


def struct2(fmt, buf, off):
    import struct as _s
    return _s.unpack_from(fmt, buf, off)


REL_NAMES = {0x06: "DIR32", 0x07: "DIR32NB", 0x14: "REL32", 0x0A: "SECTION", 0x0B: "SECREL"}


def function_end(blob, base=0, reloc_offs=None):
    """Offset just past the terminal instruction of the function.

    Terminal = a ret/retf/iret, or an unconditional jmp (reloc'd direct tail
    call / indirect tail jmp), provided it lies beyond every branch target
    seen so far. reloc_offs = set of section-relative relocation offsets:
    a direct jmp whose rel32 field carries a relocation is an unlinked
    external tail call (rel32 == 0 placeholder) -- terminal.
    """
    reloc_offs = reloc_offs or frozenset()
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    max_target = 0
    off = 0
    for ins in md.disasm(blob, base):
        nxt = off + ins.size
        if ins.group(CS_GRP_JUMP):
            ops_imm = [op for op in ins.operands if op.type == CS_OP_IMM]
            reloced = ops_imm and (off + 1) in reloc_offs
            if ins.mnemonic == "jmp":
                if reloced:
                    # unlinked external tail call: rel32 is a placeholder;
                    # nothing follows but padding -- terminal
                    return nxt
                if not ops_imm:
                    # indirect tail jmp (jmp reg / jmp [mem]); terminal only
                    # when strictly beyond every branch target
                    if nxt > max_target:
                        return nxt
                else:
                    t = ops_imm[0].imm - base
                    if t < 0 or t >= len(blob):
                        # direct tail call out of this blob -- terminal
                        if nxt > max_target:
                            return nxt
                    # else: intra forward/backward jump -- keep scanning
            elif not reloced and ops_imm:
                # conditional jcc/loop: intra target extends the live range
                t = ops_imm[0].imm - base
                if t > max_target:
                    max_target = t
        if ins.mnemonic in ("ret", "iret", "retf", "iretd") or ins.mnemonic.startswith("ret "):
            # terminal only when STRICTLY past every branch target: a branch
            # targeting exactly ret_end means execution continues afterwards
            # (early-return "je X; mov eax,1; ret; X: ..." shape)
            if nxt > max_target:
                return nxt
        off = nxt
    return None


# ------------------------------------------------------------------- core


def find_functions(coff):
    """Candidate code symbols: EXTERNAL/STATIC, type&0x20 (function), in .text*."""
    out = []
    for (i, name, val, secno, typ, cls, naux) in coff.symbols:
        if secno <= 0 or typ & 0x20 == 0 or cls not in (2, 3):
            continue
        sec = coff.section_by_idx(secno)
        if not sec or not sec["name"].startswith(".text"):
            continue
        out.append((name, val, sec))
    return out


def undecorate_key(sym):
    try:
        from tools.codegen_match.diffasm import undecorate
    except ImportError:
        sys.path.insert(0, REPO)
        from tools.codegen_match.diffasm import undecorate
    return undecorate(sym)


def compile_and_extract(cpp_path, out_dir=DEFAULT_OUT, sym_filter=None,
                        cflags=("/nologo", "/O2", "/Gy", "/c"), dumpbin=False,
                        tag=None, keep=False):
    cpp_path = os.path.abspath(cpp_path)
    vc_dir, env = era_env()
    os.makedirs(out_dir, exist_ok=True)
    base = os.path.splitext(os.path.basename(cpp_path))[0]
    tag = tag or base
    obj = os.path.join(out_dir, "era_%s.obj" % tag)

    cmd = [os.path.join(vc_dir, "BIN", "cl.exe")] + list(cflags) + ["/Fo" + obj, cpp_path]
    print("[build_era] $ cl %s" % " ".join(list(cflags) + [os.path.basename(cpp_path)]))
    r = subprocess.run(cmd, env=env, capture_output=True, text=True, cwd=out_dir)
    sys.stdout.write(r.stdout or "")
    sys.stderr.write(r.stderr or "")
    if r.returncode != 0:
        raise SystemExit("ERROR: cl.exe failed (exit=%d)" % r.returncode)
    if not os.path.exists(obj):
        raise SystemExit("ERROR: cl.exe produced no .obj")

    coff = Coff(obj)
    cands = find_functions(coff)
    if sym_filter:
        cands = [c for c in cands if sym_filter.lower() in c[0].lower()]
    if not cands:
        for (i, name, val, secno, typ, cls, naux) in coff.symbols:
            if secno > 0:
                sec = coff.section_by_idx(secno)
                print("  cand? %-44s sec=%s typ=%x cls=%d"
                      % (name, sec and sec["name"], typ, cls))
        raise SystemExit("ERROR: no function symbols matched filter %r" % sym_filter)
    if len(cands) > 1:
        print("[build_era] multiple candidates:")
        for c in cands:
            print("   %-44s (val=%d sec=%s)" % (c[0], c[1], c[2]["name"]))
        raise SystemExit("ERROR: ambiguous; pass --sym to disambiguate")

    fname, fval, fsec = cands[0]
    sec_raw = coff.data[fsec["ro"]:fsec["ro"] + fsec["rsz"]]
    func_blob_all = sec_raw[fval:]
    relocs_raw = coff.relocs_of(fsec)
    reloc_rvas = frozenset(r["rva"] for r in relocs_raw)
    end = function_end(func_blob_all, base=fval, reloc_offs=reloc_rvas)
    if end is None:
        raise SystemExit("ERROR: cannot locate function end (no terminal insn)")
    func_bytes = func_blob_all[:end]
    rest = func_blob_all[end:]
    if rest.strip(b"\x90\xcc\x00") != b"":
        print("[build_era] WARNING: non-pad bytes after ret: %s" % rest[:16].hex())

    relocs = []
    for r in relocs_raw:
        roff = r["rva"] - fval
        if 0 <= roff < end:
            relocs.append({
                "off": roff,
                "type": REL_NAMES.get(r["type"], "0x%X" % r["type"]),
                "sym": r["sym"],
                "sym_key": undecorate_key(r["sym"]),
            })
    relocs.sort(key=lambda x: x["off"])

    art = {
        "source": os.path.abspath(cpp_path),
        "obj": os.path.abspath(obj),
        "symbol": fname,
        "sym_key": undecorate_key(fname),
        "section": fsec["name"],
        "size": end,
        "link_base": 0,
        "bytes_hex": func_bytes.hex(),
        "relocs": relocs,
        "cl": " ".join(list(cflags)),
    }
    print("[build_era] symbol %s -> key %r" % (fname, art["sym_key"]))
    print("[build_era] size=%d relocs=%d" % (end, len(relocs)))
    for rl in relocs:
        print("           reloc @ +%-3d %-6s %s (key %s)"
              % (rl["off"], rl["type"], rl["sym"], rl["sym_key"]))
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    for ins in md.disasm(func_bytes, 0):
        print("   %04x  %-18s %s %s" % (ins.address, ins.bytes.hex(), ins.mnemonic, ins.op_str))

    art_path = os.path.join(out_dir, "ours_%s.json" % tag)
    with open(art_path, "w", encoding="utf-8") as f:
        json.dump(art, f, indent=1)
    print("[build_era] artifact -> %s" % art_path)

    if dumpbin:
        dumpbin_exe = os.path.join(vc_dir, "BIN", "DUMPBIN.EXE")
        if os.path.exists(dumpbin_exe):
            rr = subprocess.run([dumpbin_exe, "/disasm", "/out:" + obj + ".dumpbin.txt", obj],
                                env=env, capture_output=True, text=True)
            out_txt = obj + ".dumpbin.txt"
            # dumpbin /out: writes to that file; fall back to stdout capture
            if not os.path.exists(out_txt):
                with open(out_txt, "w", encoding="utf-8", errors="replace") as f:
                    f.write(rr.stdout or "")
            print("[build_era] dumpbin cross-check -> %s" % out_txt)
        else:
            print("[build_era] dumpbin not found (skip)")
    if not keep and os.path.exists(obj):
        try:
            os.remove(obj)
        except OSError:
            pass
    return art, art_path


def main():
    ap = argparse.ArgumentParser(description="era (VC6) compile + COFF extract channel")
    ap.add_argument("cpp")
    ap.add_argument("--sym", default=None, help="substring filter on the function symbol")
    ap.add_argument("--out", default=DEFAULT_OUT)
    ap.add_argument("--dumpbin", action="store_true", help="DUMPBIN /disasm cross-check")
    ap.add_argument("--keep", action="store_true", help="keep the .obj file")
    ap.add_argument("--tag", default=None, help="artifact tag (default: cpp basename)")
    ap.add_argument("--cflags", default=None, help="comma-separated cl flags override")
    args = ap.parse_args()
    cflags = tuple(args.cflags.split(",")) if args.cflags else ("/nologo", "/O2", "/Gy", "/c")
    compile_and_extract(args.cpp, args.out, args.sym, cflags, args.dumpbin, args.tag, args.keep)
    return 0


if __name__ == "__main__":
    sys.exit(main())
