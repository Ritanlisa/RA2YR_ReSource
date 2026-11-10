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

REPO = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
SIGNALS = os.path.join(REPO, "signals.json")

_func_map_cache = None
_glob_map_cache = None


def _load_maps():
    global _func_map_cache, _glob_map_cache
    if _func_map_cache is None:
        with open(SIGNALS, encoding="utf-8") as f:
            sig = json.load(f)
        fm = {}
        for a, v in sig["symbols"].items():
            try:
                fm[int(a, 16)] = v.get("name", "sub_%X" % int(a, 16))
            except (ValueError, AttributeError):
                continue
        gm = {}
        for name, addr in sig.get("globals", {}).items():
            try:
                gm[int(addr, 16)] = name
            except (ValueError, TypeError):
                continue
        _func_map_cache, _glob_map_cache = fm, gm
    return _func_map_cache, _glob_map_cache


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
    m = re.match(r"^\?(\w+)@@YA", s)
    if m:  # free function ?name@@YA...
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

            if (is_jump or is_call) and ins.operands and ins.operands[0].type == CS_OP_IMM:
                op = ins.operands[0]
                target = op.imm
                toff = target - self.base
                if 0 <= toff < self.size and not rel_here:
                    canon = "%s INTRA:+0x%X" % (ins.mnemonic, toff)
                else:
                    key = None
                    if self.mode == "orig":
                        nm = self.func_map.get(target)
                        key = "FUNC:%s" % (nm if nm else "0x%X" % target)
                    else:
                        for _o, r in rel_here:
                            if r.get("type") == "REL32":
                                key = "FUNC:%s" % r["key"]
                                break
                        if key is None:
                            key = "FUNC:EXT:+0x%X" % toff if toff >= 0 else "FUNC:0x%X" % target
                    canon = "%s %s" % (ins.mnemonic, key)
                pos = _find_field(self.blob, off, ins.size,
                                  target - (ins.address + ins.size))
                if pos is not None:
                    masks.append(pos)
            else:
                # non-branch immediates & memory displacements
                for op in ins.operands:
                    if op.type == CS_OP_IMM:
                        val = op.imm & 0xFFFFFFFF
                        key = None
                        for _o, r in rel_here:
                            if r.get("type") in ("DIR32", "DIR32NB", "SECTION", "SECREL"):
                                key = "DATA:%s" % r["key"]
                                masks.append(_o - off)
                                break
                        if key is None and self.mode == "orig" and self._in_data(val):
                            nm = self.glob_map.get(val)
                            key = "DATA:%s" % (nm if nm else "0x%X" % val)
                        if key is not None:
                            canon = self._patch_imm(canon, op.imm, key)
                            pos = _find_field(self.blob, off, ins.size, val)
                            if pos is not None and pos not in masks:
                                masks.append(pos)
                    elif op.type == CS_OP_MEM:
                        disp = op.mem.disp & 0xFFFFFFFF
                        if op.mem.base == 0 and op.mem.index == 0:  # absolute [addr]
                            key = None
                            for _o, r in rel_here:
                                if r.get("type") in ("DIR32", "DIR32NB", "SECTION", "SECREL"):
                                    key = "DATA:%s" % r["key"]
                                    masks.append(_o - off)
                                    break
                            if key is None and self.mode == "orig" and self._in_data(disp):
                                nm = self.glob_map.get(disp)
                                key = "DATA:%s" % (nm if nm else "0x%X" % disp)
                            if key is not None:
                                for s in ("0x%x" % disp, "0x%X" % disp, "%d" % disp):
                                    if s and s in canon:
                                        canon = canon.replace(s, key, 1)
                                        break
                                else:
                                    canon = canon + " <" + key + ">"
                                pos = _find_field(self.blob, off, ins.size, disp)
                                if pos is not None and pos not in masks:
                                    masks.append(pos)
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
