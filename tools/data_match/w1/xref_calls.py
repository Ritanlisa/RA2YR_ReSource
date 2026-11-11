#!/usr/bin/env python3
"""
xref_calls.py -- scan LINK.EXE .text for E8/E9 rel32 calls/jmps to given
targets (handles direct relative calls which never appear as imms).
"""
import struct
from capstone import *
from capstone.x86 import *

b = open(r"D:\RA2YR_ReSource\.vc6-8447\BIN\LINK.EXE", "rb").read()
md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True

def callers(target):
    hits = []
    off = 0x1000
    while off < 0x68000:
        if b[off] in (0xE8, 0xE9):
            rel = struct.unpack_from("<i", b, off + 1)[0]
            va = 0x400000 + off
            if va + 5 + rel == target:
                # disasm to confirm
                for ins in md.disasm(b[off:off+16], va):
                    hits.append((va, ins.mnemonic, ins.op_str)); break
        off += 1
    return hits

for t, label in [(0x411E80, "insert_0x18node"), (0x411E20, "lookup_walk"),
                 (0x411DF0, "hash_mod211"), (0x411EE0, "fn_411EE0")]:
    hs = callers(t)
    print(f"== {label} 0x{t:X}: {len(hs)} callers")
    for a, m, o in hs[:40]:
        print(f"   0x{a:08X} {m} {o}")
