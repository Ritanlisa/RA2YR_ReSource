#!/usr/bin/env python3
"""extract.py -- original gamemd.exe function byte extractor (Phase A harness).

Given a function address (or name), slice its machine-code bytes out of the
original gamemd.exe and collect the relocation-sensitive points (PE .reloc
entries falling inside the function range).

Sources of truth:
  - signals.json (repo root)           : name <-> address mapping (authoritative)
  - tools/backup_20260619_144929/functions.json : address -> end/size (19,067 entries)

Usage:
  python tools/codegen_match/extract.py 0x5f6560
  python tools/codegen_match/extract.py Math::DistSq2D
  python tools/codegen_match/extract.py 0x4072c0 --out .omo/agents/phasea

Output artifact (JSON), also printed:
  {
    "addr": "0x5f6560", "name": "Math::DistSq2D", "size": 62,
    "base_va": "0x5f6560",
    "bytes_hex": "...",
    "relocs": [ {"va": "0x...", "off": N, "type": "HIGHLOW"} ]   # within function
  }

Note: gamemd.exe (fixed image base 0x400000, era linker) ships with a zero
.reloc directory -- the reloc list is expected empty, but the code path is
implemented generally.
"""
import argparse
import json
import os
import re
import struct
import sys

REPO = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
DEFAULT_EXE = r"D:\RA2MD\gamemd.exe"
SIGNALS = os.path.join(REPO, "signals.json")
FUNC_SIZES = os.path.join(REPO, "tools", "backup_20260619_144929", "functions.json")

# ---------------------------------------------------------------- PE parsing


class PE:
    """Minimal PE32 reader: sections (VA<->file offset) + .reloc directory."""

    def __init__(self, path):
        self.path = path
        with open(path, "rb") as f:
            self.data = f.read()
        d = self.data
        if d[:2] != b"MZ":
            raise ValueError("not an MZ file: %s" % path)
        e_lfanew = struct.unpack_from("<I", d, 0x3C)[0]
        if d[e_lfanew:e_lfanew + 4] != b"PE\x00\x00":
            raise ValueError("bad PE signature")
        self.machine = struct.unpack_from("<H", d, e_lfanew + 4)[0]
        self.nsec = struct.unpack_from("<H", d, e_lfanew + 6)[0]
        self.size_opt = struct.unpack_from("<H", d, e_lfanew + 20)[0]
        opt = e_lfanew + 24
        self.magic = struct.unpack_from("<H", d, opt)[0]
        if self.magic != 0x10B:
            raise ValueError("not PE32 (magic=%x)" % self.magic)
        self.imagebase = struct.unpack_from("<I", d, opt + 28)[0]
        self.ndd = struct.unpack_from("<I", d, opt + 92)[0]
        dd = opt + 96
        self.datadirs = [struct.unpack_from("<II", d, dd + i * 8) for i in range(self.ndd)]
        # section table: e_lfanew + 24 + SizeOfOptionalHeader
        st = e_lfanew + 24 + self.size_opt
        self.sections = []
        for i in range(self.nsec):
            o = st + i * 40
            name = d[o:o + 8].split(b"\x00")[0].decode("latin1")
            vsz, va, rsz, ro = struct.unpack_from("<IIII", d, o + 8)
            self.sections.append({
                "name": name,
                "va": va + self.imagebase, "vsz": vsz,
                "ro": ro, "rsz": rsz,
            })

    def section_of(self, va):
        for s in self.sections:
            if s["va"] <= va < s["va"] + max(s["vsz"], s["rsz"]):
                return s
        return None

    def file_offset(self, va):
        s = self.section_of(va)
        if s is None or s["rsz"] == 0:
            return None
        off = s["ro"] + (va - s["va"])
        if off >= s["ro"] + s["rsz"]:
            return None
        return off

    def read(self, va, size):
        fo = self.file_offset(va)
        if fo is None:
            raise ValueError("VA 0x%x not backed by raw data" % va)
        return self.data[fo:fo + size]

    def reloc_vas(self):
        """All relocation-fixup VAs from the .reloc directory (BASERELOC, dir 5)."""
        out = []
        if self.ndd <= 5:
            return out
        rva, size = self.datadirs[5]
        if rva == 0 or size == 0:
            return out
        fo = self.file_offset(rva + self.imagebase)
        if fo is None:
            return out
        end = fo + size
        d = self.data
        while fo + 8 <= end:
            page_rva, blk_sz = struct.unpack_from("<II", d, fo)
            if blk_sz == 0:
                break
            n = (blk_sz - 8) // 2
            for i in range(n):
                e = struct.unpack_from("<H", d, fo + 8 + i * 2)[0]
                etype, offs = e >> 12, e & 0xFFF
                if etype == 0:  # IMAGE_REL_BASED_ABSOLUTE (pad, skip)
                    continue
                out.append((self.imagebase + page_rva + offs, etype))
            fo += blk_sz
        return out


RELOC_TYPE_NAMES = {1: "HIGH", 2: "LOW", 3: "HIGHLOW", 4: "HIGHADJ"}

# ------------------------------------------------------------- size sources


def load_size_map():
    """address(int) -> size from the historical functions.json (has end/size)."""
    global _SIZE_MAP_CACHE
    if _SIZE_MAP_CACHE is not None:
        return _SIZE_MAP_CACHE
    if not os.path.exists(FUNC_SIZES):
        _SIZE_MAP_CACHE = {}
        return _SIZE_MAP_CACHE
    with open(FUNC_SIZES, encoding="utf-8") as f:
        d = json.load(f)
    m = {}
    for fn in d.get("functions", []):
        try:
            m[int(fn["address"], 16)] = int(fn["size"])
        except (KeyError, ValueError):
            continue
    _SIZE_MAP_CACHE = m
    return m


def guess_size_by_disasm(pe, va, max_size=4096):
    """Fallback size: disassemble until a ret/retf/iret past every branch target."""
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32, CS_GRP_JUMP, CS_OP_IMM
    blob = pe.read(va, max_size)
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = True
    max_target = 0
    off = 0
    for ins in md.disasm(blob, va):
        nxt = off + ins.size
        if ins.group(CS_GRP_JUMP):
            for op in ins.operands:
                if op.type == CS_OP_IMM and op.imm != 0:
                    t = op.imm - va
                    if t > max_target:
                        max_target = t
        if ins.mnemonic in ("ret", "iret", "retf", "iretd") or ins.mnemonic.startswith("ret "):
            if nxt >= max_target:
                return nxt
        off = nxt
    return None


# ------------------------------------------------------------------- core

# Process-level caches: a 100-function batch used to re-read signals.json
# (~10MB), functions.json and the 7.6MB exe for EVERY function (13-26 s per
# diff).  These loads are immutable for a run, so cache them.
_SIGNALS_CACHE = None
_SIZE_MAP_CACHE = None
_PE_CACHE = {}


def _load_signals():
    global _SIGNALS_CACHE
    if _SIGNALS_CACHE is None:
        with open(SIGNALS, encoding="utf-8") as f:
            _SIGNALS_CACHE = json.load(f)
    return _SIGNALS_CACHE


def _get_pe(path):
    pe = _PE_CACHE.get(path)
    if pe is None:
        pe = PE(path)
        _PE_CACHE[path] = pe
    return pe


def resolve_target(ident, symbols_by_addr, symbols_by_name):
    """ident = hex address string or function name -> (va:int, name)."""
    s = ident.strip()
    if re.fullmatch(r"0x[0-9a-fA-F]+", s) or re.fullmatch(r"[0-9a-fA-F]{6,8}", s):
        va = int(s, 16)
        return va, symbols_by_addr.get(va, {}).get("name", "sub_%X" % va)
    if s in symbols_by_name:
        entries = symbols_by_name[s]["symbols"]
        va = int(list(entries.keys())[0], 16)
        return va, s
    # try last-resort: case-sensitive substring
    cands = [k for k in symbols_by_name if s.lower() == k.lower()]
    if len(cands) == 1:
        entries = symbols_by_name[cands[0]]["symbols"]
        va = int(list(entries.keys())[0], 16)
        return va, cands[0]
    raise SystemExit("ERROR: cannot resolve %r in signals.json" % ident)


def extract_function(ident, exe_path=DEFAULT_EXE, size_override=None, verbose=True):
    sig = _load_signals()
    symbols_by_addr = {}
    for a, v in sig["symbols"].items():
        try:
            symbols_by_addr[int(a, 16)] = v
        except ValueError:
            continue
    symbols_by_name = sig.get("_by_name", {})
    va, name = resolve_target(ident, symbols_by_addr, symbols_by_name)

    pe = _get_pe(exe_path)
    sec = pe.section_of(va)
    if sec is None or sec["name"] not in (".text",):
        raise SystemExit("ERROR: 0x%x not inside .text (section=%s)" % (va, sec and sec["name"]))

    size = size_override
    size_src = "override"
    if size is None:
        sm = load_size_map()
        size = sm.get(va)
        size_src = "functions.json"
    if size is None:
        size = guess_size_by_disasm(pe, va)
        size_src = "disasm-until-ret"
    if not size:
        raise SystemExit("ERROR: no size available for 0x%x" % va)

    code = pe.read(va, size)
    relocs_all = pe.reloc_vas()
    in_range = [(rva, et) for (rva, et) in relocs_all if va <= rva < va + size]
    relocs = [{
        "va": "0x%X" % rva,
        "off": rva - va,
        "type": RELOC_TYPE_NAMES.get(et, str(et)),
    } for (rva, et) in in_range]

    art = {
        "addr": "0x%X" % va,
        "name": name,
        "size": size,
        "size_source": size_src,
        "section": sec["name"],
        "base_va": "0x%X" % va,
        "bytes_hex": code.hex(),
        "relocs": relocs,
        "exe": exe_path,
    }
    if verbose:
        print("[extract] %-40s %s  size=%d (%s)  section=%s  relocs_in_range=%d"
              % (name, art["addr"], size, size_src, sec["name"], len(relocs)))
        if relocs:
            for r in relocs:
                print("           reloc @ +%d (va %s, %s)" % (r["off"], r["va"], r["type"]))
    return art


def main():
    ap = argparse.ArgumentParser(description="gamemd.exe function byte extractor")
    ap.add_argument("ident", help="function address (0x...) or name (Class::Method)")
    ap.add_argument("--exe", default=DEFAULT_EXE)
    ap.add_argument("--out", default=os.path.join(REPO, ".omo", "agents", "phasea"),
                    help="artifact directory (default .omo/agents/phasea)")
    ap.add_argument("--size", type=lambda x: int(x, 0), default=None,
                    help="size override")
    args = ap.parse_args()

    art = extract_function(args.ident, args.exe, args.size)
    os.makedirs(args.out, exist_ok=True)
    out_path = os.path.join(args.out, "orig_%s.json" % art["addr"][2:])
    with open(out_path, "w", encoding="utf-8") as f:
        json.dump(art, f, indent=1)
    print("[extract] artifact -> %s" % out_path)
    # disassembly preview
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    for ins in md.disasm(bytes.fromhex(art["bytes_hex"]), int(art["addr"], 16)):
        print("  %08X  %-20s %s %s" % (ins.address, ins.bytes.hex(), ins.mnemonic, ins.op_str))
    return 0


if __name__ == "__main__":
    sys.exit(main())
