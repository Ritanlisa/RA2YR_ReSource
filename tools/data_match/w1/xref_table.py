#!/usr/bin/env python3
"""
xref_table.py -- find all code xrefs to the LINK.EXE global bucket-array
pointer 0x46E240, plus callers of insert(0x411E80) / lookup(0x411E20).
"""
import struct, sys
from capstone import *
from capstone.x86 import *

b = open(r"D:\RA2YR_ReSource\.vc6-8447\BIN\LINK.EXE", "rb").read()
md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True

def va2off(va):
    rva = va - 0x400000
    return rva if 0x1000 <= rva < 0x68000 else None

def scan_imm(target):
    """scan whole .text for 4-byte LE imm == target, disasm-verify."""
    hits = []
    pat = struct.pack("<I", target)
    off = 0x1000
    while True:
        i = b.find(pat, off, 0x68000)
        if i < 0: break
        va = 0x400000 + i
        # find instruction start: try back 0..6
        for back in range(0, 7):
            ok = False
            for ins in md.disasm(b[i-back:i-back+20], va-back):
                for op in ins.operands:
                    if op.type == X86_OP_MEM and op.mem.disp == target and ins.address <= va < ins.address + ins.size:
                        hits.append((ins.address, ins.mnemonic, ins.op_str)); ok = True; break
                    if op.type == X86_OP_IMM and op.imm == target and ins.address <= va < ins.address + ins.size:
                        hits.append((ins.address, ins.mnemonic, ins.op_str)); ok = True; break
                break
            if ok: break
        off = i + 1
    return hits

for t, label in [(0x46E240, "bucketArrayPtr"), (0x411E80, "insert_fn"), (0x411E20, "lookup_fn"), (0x411DF0, "hash_fn")]:
    hs = scan_imm(t)
    print(f"== {label} 0x{t:X}: {len(hs)} xrefs")
    for a, m, o in hs[:40]:
        print(f"   0x{a:08X} {m} {o}")
