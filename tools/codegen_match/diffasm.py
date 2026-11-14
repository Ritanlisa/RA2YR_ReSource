#!/usr/bin/env python3
"""diffasm.py -- normalized disassembly differ (Phase A harness).

Disassembles two byte blobs (original gamemd.exe function vs our era-compiled
object-code function) with capstone and compares them under normalization:

  a. intra-function relative jumps (jmp/jcc short & near, loop family)
       -> compare the target OFFSET relative to each side's function base
  b. call rel32
       -> resolve the target on each side to a symbol key "FUNC:<name>"
          (orig side: signals.json address->name; obj side: COFF relocation
          symbol, undecorated). Same key on both sides == equivalent.
  c. absolute address references (imm32 / mem disp32 hitting .rdata/.data
     on the orig side; DIR32 relocations on the obj side)
       -> replace with "DATA:<name-or-addr>" symbol key
  d. everything else -> raw byte comparison (wildcarding only the 4 bytes
       occupied by a normalized field)

Usage:
  python tools/codegen_match/diffasm.py orig_5F6560.json ours_5F6560.json
Exit: 0 MATCH / 1 MISMATCH / 2 error.
"""
import argparse
import json
import os
import re
import sys

from capstone import (Cs, CS_ARCH_X86, CS_MODE_32, CS_GRP_JUMP, CS_GRP_CALL,
                      CS_OP_IMM, CS_OP_MEM)

try:
    from .signals_maps import maps
except ImportError:                     # bare-script execution
    from signals_maps import maps

REPO = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
SIGNALS = os.path.join(REPO, "signals.json")

_func_map_cache = None
_glob_map_cache = None
_glob_name_map_cache = None
_func_name_map_cache = None
_ext_alias_cache = None


def _load_maps():
    global _func_map_cache, _glob_map_cache, _glob_name_map_cache
    global _func_name_map_cache, _ext_alias_cache
    if _func_map_cache is None:
        # signals.json (265MB) is parsed ONCE per process by signals_maps
        # (disk-cached derived maps); this module used to parse its own
        # private copy (~4.7s) in addition to passes/extract doing the same.
        fm = maps()["func_by_addr"]
        nf = maps()["func_by_name"]
        gm = maps()["glob_by_addr_strict"]
        nm = maps()["glob_by_name"]
        # external/CRT alias map: the IDA spelling and the COFF C spelling of
        # the same routine differ by decoration (`__CIpow` vs `_CIpow`,
        # `??2_YAPAXI_Z` vs `__2_YAPAXI_Z`).  Normalising BOTH to the stripped
        # spelling resolves them to the SAME signals address (identity, not a
        # name guess).  Ambiguous stripped names are dropped (never guessed).
        alias = {}
        seen = {}
        for iname, ia in nf.items():
            if "::" in iname:
                continue
            k = _external_name(iname)
            if k in seen and seen[k] != ia:
                alias.pop(k, None)
                seen[k] = None
            elif k not in seen:
                seen[k] = ia
                alias[k] = ia
        _func_map_cache, _glob_map_cache = fm, gm
        _glob_name_map_cache = nm
        _func_name_map_cache = nf
        _ext_alias_cache = alias
    return _func_map_cache, _glob_map_cache


# R8: data references compare by IDENTITY (address), not spelling.  The
# original side names an address via signals.globals; when the registry has
# no name the key stays a raw address, while our side's COFF reloc key is
# the IDA plate spelling (`dword_8205D0`) or a string label (`aInfantrytab`).
# Same location, different spelling -> false extern_reloc/const_fold
# mismatch.  Canonicalize every resolvable DATA key to its address; keys
# that do not resolve (local statics, float-constant pools) keep their
# spelling, so a genuinely different location still mismatches.
_IDA_PLATE_KEY = re.compile(
    r"^(?:stru|dword|word|byte|qword|flt|dbl|unk|off)_([0-9A-Fa-f]{6,8})$")
# `DataGlobal_<VA>` is the registry's by-address identity convention: the
# trailing hex IS the address.  Parse it so a generator-supplied identity
# symbol compares equal to the original absolute address.
_DATA_GLOBAL_KEY = re.compile(r"^DataGlobal_([0-9A-Fa-f]{6,8})$")


def data_key_canon(name):
    if _glob_name_map_cache is None:
        _load_maps()
    m = _IDA_PLATE_KEY.match(name)
    if m:
        return "0x%X" % int(m.group(1), 16)
    m = _DATA_GLOBAL_KEY.match(name)
    if m:
        return "0x%X" % int(m.group(1), 16)
    nm = _glob_name_map_cache or {}
    if name in nm:
        return "0x%X" % nm[name]
    und = undecorate(name)
    if und in nm:
        return "0x%X" % nm[und]
    return name


def data_key_addr(name):
    """Resolve a data key to a VA, or None when the spelling is not
    identity-resolvable (local static / constant pool)."""
    c = data_key_canon(name)
    if c.startswith("0x"):
        try:
            return int(c, 16)
        except ValueError:
            return None
    return None


def data_ref_canon(name, addend=0):
    """DATA canonical key for `symbol + addend` (link-time value).

    Resolved symbols compare by ADDRESS (identity); unresolvable ones keep
    the spelling plus a visible addend so a genuinely different location
    still mismatches.
    """
    addr = data_key_addr(name)
    if addr is not None:
        return "DATA:0x%X" % ((addr + (addend or 0)) & 0xFFFFFFFF)
    if addend:
        return "DATA:%s+0x%X" % (data_key_canon(name), addend)
    return "DATA:%s" % data_key_canon(name)


def _external_name(key):
    """Normalise a C/CRT symbol spelling to its bare identity."""
    s = key.replace("?", "_")
    if s.startswith("__imp_"):
        s = s[6:]
    return s.lstrip("_")


def resolve_func_name(key):
    """Resolve a COFF reloc symbol key to a signals function address.

    Direct hit, then `Class__Method` -> `Class::Method` (the generator's
    identifier sanitisation), then the decoration-stripped external alias
    (identity map built from signals; ambiguous spellings excluded).
    """
    if _func_name_map_cache is None:
        _load_maps()
    nf = _func_name_map_cache or {}
    if key in nf:
        return nf[key]
    if "__" in key:
        a, b = key.split("__", 1)
        alt = a + "::" + b
        if alt in nf:
            return nf[alt]
    if key.startswith("_") and key != "_" and key[1:] in nf:
        return nf[key[1:]]
    return (_ext_alias_cache or {}).get(_external_name(key))


def func_ref_canon(kind, target=None, key=None):
    """Canonical FUNC: key.

    - orig side: the call target address is absolute -> address identity.
    - obj side: the COFF reloc symbol -> resolve to a signals address when
      possible (identity); otherwise compare by decoration-stripped name.
    """
    if kind == "orig":
        nm = (_func_map_cache or {}).get(target)
        if nm is None:
            return "FUNC:0x%X" % target
        return "FUNC:@0x%X" % target
    addr = resolve_func_name(key)
    if addr is not None:
        return "FUNC:@0x%X" % addr
    return "FUNC:EXT:%s" % _external_name(key)


def undecorate(sym):
    """Minimal MSVC6 name demangling -> logical key (Class::Method / name)."""
    s = sym
    m = re.match(r"^\?\?(\d|_)(\w+)@@", s)
    if m:  # ??0Ctor / ??1Dtor / __ctor/dtor variants
        tag, cls = m.group(1), m.group(2)
        if tag == "0":
            return "%s::%s" % (cls, cls)
        if tag == "1":
            return "%s::~%s" % (cls, cls)
        return "%s::scalar_dtor" % cls
    m = re.match(r"^\?(\w+)@(\w+)@@", s)
    if m:  # ?Method@Class@@...
        return "%s::%s" % (m.group(2), m.group(1))
    m = re.match(r"^\?(\w+)@@3", s)
    if m:  # global data object ?name@@3<type>... (e.g. ?DataGlobal_ABAD28@@3IA)
        return m.group(1)
    m = re.match(r"^\?(\w+)@@Y[A-Z]", s)
    if m:  # free function ?name@@YA/YG/YI... (cdecl/stdcall/fastcall)
        return m.group(1)
    m = re.match(r"^_?([A-Za-z_]\w*)@\d+$", s)
    if m:  # __stdcall/fastcall C decoration _name@N
        return m.group(1)
    if s.startswith("__imp_"):
        s = s[6:]
    if s.startswith("_"):
        return s[1:]
    return s


_DATA_RANGE_CACHE = {}


def _data_ranges_from_exe(exe_path):
    """(start, end, name) for non-.text sections (data/rdata/rsrc/bss)."""
    cached = _DATA_RANGE_CACHE.get(exe_path)
    if cached is not None:
        return cached
    try:
        from tools.codegen_match.extract import PE
    except ImportError:  # running as a bare script from tools/codegen_match/
        sys.path.insert(0, os.path.dirname(__file__))
        from extract import PE
    pe = PE(exe_path)
    out = []
    for s in pe.sections:
        if s["name"] != ".text":
            out.append((s["va"], s["va"] + max(s["vsz"], s["rsz"]), s["name"]))
    _DATA_RANGE_CACHE[exe_path] = out
    return out


def _find_field(blob, off, size, value):
    """Locate the 4-byte window inside insn bytes equal to `value` (LSB-first).

    Prefers the trailing window (imm32/disp32 are the last field in most x86
    encodings that carry exactly one 32-bit field).
    """
    for pos in range(off + size - 4, off - 1, -1):
        if int.from_bytes(blob[pos:pos + 4], "little") == (value & 0xFFFFFFFF):
            return pos - off
    return None


# relocation types that carry a 32-bit symbol/addend field
_RELOC_KINDS = ("DIR32", "DIR32NB", "SECTION", "SECREL", "REL32", "REL32_1",
                "REL32_2", "REL32_3", "REL32_4", "REL32_5")


def _split_ops(op_str):
    """Split `ins.op_str` on top-level commas (never inside `[...]`)."""
    out = []
    depth = 0
    cur = ""
    for ch in op_str:
        if ch == "[":
            depth += 1
        elif ch == "]":
            depth = max(0, depth - 1)
        if ch == "," and depth == 0:
            out.append(cur)
            cur = ""
        else:
            cur += ch
    if cur:
        out.append(cur)
    return out


class Side:
    """One disassembled function side with normalization context."""

    def __init__(self, name, blob, base, size, mode, relocs=None,
                 func_map=None, glob_map=None, data_ranges=None):
        self.name = name
        self.blob = blob
        self.base = base          # numeric address of insn index 0
        self.size = size
        self.mode = mode          # 'orig' | 'obj'
        self.relocs = relocs or {}  # {off_in_func: {"type":..., "key":...}}
        self.func_map = func_map or {}
        self.glob_map = glob_map or {}
        self.data_ranges = data_ranges or []
        self.md = Cs(CS_ARCH_X86, CS_MODE_32)
        self.md.detail = True

    def _in_data(self, va):
        for (s, e, _n) in self.data_ranges:
            if s <= va < e:
                return True
        return False

    def _reloc_field(self, ins, off):
        """(kind, field_off) of the 4-byte field a reloc at `off` covers.

        W1R-a (CW8): relocations belong to ONE operand field.  The old code
        let the IMM branch and the MEM branch both consume the same DIR32
        (double patch) and patched the first matching text token (which can
        be the disp of `[ecx + 0xc]`, not the immediate).  Ownership is read
        from the x86 encoding, never guessed from the rendered text.
        """
        fo = off - (ins.address - self.base)
        enc = getattr(ins, "encoding", None)
        if enc is not None:
            if getattr(enc, "imm_size", 0) == 4 and enc.imm_offset == fo:
                return "imm", fo
            if getattr(enc, "disp_size", 0) == 4 and enc.disp_offset == fo:
                return "disp", fo
        return None, fo

    @staticmethod
    def _field_pos(ins, kind):
        enc = getattr(ins, "encoding", None)
        if enc is None:
            return None
        if kind == "imm" and getattr(enc, "imm_size", 0) == 4:
            return enc.imm_offset
        if kind == "disp" and getattr(enc, "disp_size", 0) == 4:
            return enc.disp_offset
        return None

    @staticmethod
    def _replace_last_num(txt, new):
        ms = list(re.finditer(r"0x[0-9a-fA-F]+|\b\d+\b", txt))
        if not ms:
            return txt
        m = ms[-1]
        return txt[:m.start()] + new + txt[m.end():]

    def normalize(self):
        """-> list of dicts: {off,size,hex,disasm,canon,mask:[positions]}"""
        out = []
        for ins in self.md.disasm(self.blob, self.base):
            off = ins.address - self.base
            hexs = ins.bytes.hex()
            dis = "%s %s" % (ins.mnemonic, ins.op_str)
            canon = dis
            masks = []
            rel_here = [(o, r) for o, r in self.relocs.items()
                        if off <= o < off + ins.size]
            is_jump = ins.group(CS_GRP_JUMP)
            is_call = ins.group(CS_GRP_CALL)

            if (is_jump or is_call) and ins.operands and \
                    ins.operands[0].type == CS_OP_IMM:
                op = ins.operands[0]
                target = op.imm
                toff = target - self.base
                if 0 <= toff < self.size and not rel_here:
                    canon = "%s INTRA:+0x%X" % (ins.mnemonic, toff)
                else:
                    if self.mode == "orig":
                        key = func_ref_canon("orig", target=target)
                    else:
                        rk = None
                        for _o, r in rel_here:
                            if r.get("type") in _RELOC_KINDS:
                                rk = r
                                break
                        if rk is not None:
                            key = func_ref_canon("obj", key=rk["key"])
                        else:
                            key = "FUNC:0x%X" % target
                    canon = "%s %s" % (ins.mnemonic, key)
                pos = self._field_pos(ins, "imm")
                if pos is None:
                    pos = _find_field(self.blob, off, ins.size,
                                      target - (ins.address + ins.size))
                if pos is not None:
                    masks.append(pos)
            else:
                ops_txt = _split_ops(ins.op_str)
                changed = list(ops_txt)
                any_change = False
                for idx, op in enumerate(ins.operands):
                    if idx >= len(changed):
                        break
                    txt = changed[idx]
                    if op.type == CS_OP_IMM:
                        val = op.imm & 0xFFFFFFFF
                        key = None
                        fpos = None
                        for _o, r in rel_here:
                            kind, fo = self._reloc_field(ins, _o)
                            if kind == "imm" and r.get("type") in _RELOC_KINDS:
                                key = data_ref_canon(r["key"], op.imm)
                                fpos = fo
                                break
                        if key is None and self.mode == "orig" and \
                                self._in_data(val):
                            nm = self.glob_map.get(val)
                            key = data_ref_canon(nm if nm else "0x%X" % val)
                            fpos = self._field_pos(ins, "imm")
                        if key is not None:
                            changed[idx] = key
                            any_change = True
                            if fpos is not None and fpos not in masks:
                                masks.append(fpos)
                    elif op.type == CS_OP_MEM:
                        disp = op.mem.disp & 0xFFFFFFFF
                        key = None
                        fpos = None
                        for _o, r in rel_here:
                            kind, fo = self._reloc_field(ins, _o)
                            if kind == "disp" and r.get("type") in _RELOC_KINDS:
                                key = data_ref_canon(r["key"], op.mem.disp)
                                fpos = fo
                                break
                        if key is None and self.mode == "orig" and \
                                self._in_data(disp):
                            nm = self.glob_map.get(disp)
                            key = data_ref_canon(nm if nm else "0x%X" % disp)
                            fpos = self._field_pos(ins, "disp")
                        if key is not None:
                            if not re.search(r"0x[0-9a-fA-F]+|\b\d+\b", txt):
                                changed[idx] = (txt.rstrip("]") + " + " +
                                                key + "]")
                            else:
                                changed[idx] = self._replace_last_num(txt, key)
                            any_change = True
                            if fpos is not None and fpos not in masks:
                                masks.append(fpos)
                if any_change:
                    canon = "%s %s" % (ins.mnemonic, ", ".join(changed))
            out.append({"off": off, "size": ins.size, "hex": hexs,
                        "disasm": dis, "canon": canon, "mask": sorted(set(masks))})
        return out

    @staticmethod
    def _patch_imm(canon, val, key):
        cands = []
        v = val & 0xFFFFFFFF
        cands.append("0x%x" % v)
        cands.append("0x%X" % v)
        cands.append("%d" % (val if -(1 << 31) <= val < (1 << 31) else v))
        if val < 0:
            cands.append("-0x%x" % (-val))
        for s in cands:
            if s and s in canon:
                return canon.replace(s, key, 1)
        return canon + " <" + key + ">"

    @staticmethod
    def masked_equal(a, b):
        if a["canon"] != b["canon"]:
            return False
        ba, bb = bytearray.fromhex(a["hex"]), bytearray.fromhex(b["hex"])
        if len(ba) != len(bb):
            return False
        for m in a["mask"]:
            for i in (m, m + 1, m + 2, m + 3):
                if 0 <= i < len(ba):
                    ba[i] = 0x2A
        for m in b["mask"]:
            for i in (m, m + 1, m + 2, m + 3):
                if 0 <= i < len(bb):
                    bb[i] = 0x2A
        return bytes(ba) == bytes(bb)


def compare(orig_side, obj_side, verbose=True):
    a = orig_side.normalize()
    b = obj_side.normalize()
    n = min(len(a), len(b))
    for i in range(n):
        if not Side.masked_equal(a[i], b[i]):
            if verbose:
                print("[diffasm] MISMATCH at instruction #%d (func off +0x%X / +0x%X)"
                      % (i, a[i]["off"], b[i]["off"]))
                print("  ORIG: %s   %s   (%s)" % (a[i]["hex"], a[i]["disasm"], a[i]["canon"]))
                print("  OURS: %s   %s   (%s)" % (b[i]["hex"], b[i]["disasm"], b[i]["canon"]))
            return False, (a[i], b[i])
    if len(a) != len(b):
        longer, tag = (a, "ORIG") if len(a) > len(b) else (b, "OURS")
        i = n
        if verbose:
            print("[diffasm] MISMATCH: instruction count differs (orig=%d, ours=%d)"
                  % (len(a), len(b)))
            print("  first extra %s @ +0x%X: %s   %s"
                  % (tag, longer[i]["off"], longer[i]["hex"], longer[i]["disasm"]))
        return False, (a[i - 1] if i else None, longer[i])
    return True, None


# ---------------------------------------------------------------- CLI sides


def load_orig_side(art_path):
    with open(art_path, encoding="utf-8") as f:
        art = json.load(f)
    fm, gm = _load_maps()
    exe = art.get("exe") or r"D:\RA2MD\gamemd.exe"
    try:
        ranges = _data_ranges_from_exe(exe)
    except Exception:
        ranges = []
    base = int(art["base_va"], 16)
    return Side("orig", bytes.fromhex(art["bytes_hex"]), base, art["size"],
                "orig", func_map=fm, glob_map=gm, data_ranges=ranges), art


def load_obj_side(art_path):
    with open(art_path, encoding="utf-8") as f:
        art = json.load(f)
    relocs = {r["off"]: {"type": r["type"], "key": r.get("sym_key") or r["sym"]}
              for r in art.get("relocs", [])}
    base = art.get("link_base", 0)
    return Side("ours", bytes.fromhex(art["bytes_hex"]), base, art["size"],
                "obj", relocs=relocs), art


def main():
    ap = argparse.ArgumentParser(description="normalized disassembly differ")
    ap.add_argument("orig", help="orig_*.json artifact from extract.py")
    ap.add_argument("ours", help="ours_*.json artifact from build_era.py")
    ap.add_argument("--quiet", action="store_true")
    args = ap.parse_args()

    sa, art_a = load_orig_side(args.orig)
    sb, art_b = load_obj_side(args.ours)
    ok, first = compare(sa, sb, verbose=not args.quiet)
    label = "%s vs %s" % (art_a.get("name", art_a["addr"]), art_b.get("symbol", "?"))
    if ok:
        print("[diffasm] MATCH   %s  (%d instructions, %d bytes)"
              % (label, len(sa.normalize()), sa.size))
        return 0
    print("[diffasm] MISMATCH %s" % label)
    return 1


if __name__ == "__main__":
    sys.exit(main())
