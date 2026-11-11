#!/usr/bin/env python3
"""
xref_globals.py -- scan LINK.EXE for xrefs to key globals via disp immediates.
"""
import struct, sys
from capstone import *
from capstone.x86 import *

b = open(r"D:\RA2YR_ReSource\.vc6-8447\BIN\LINK.EXE", "rb").read()
md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True

def va2off(va):
    return va - 0x400000

def scan_imm(target, lo=0x1000, hi=0x68000):
    hits = []
    pat = struct.pack("<I", target)
    off = lo
    while True:
        i = b.find(pat, off, hi)
        if i < 0: break
        va = 0x400000 + i
        for back in range(0, 7):
            found = False
            for ins in md.disasm(b[i-back:i-back+20], va-back):
                for op in ins.operands:
                    match = False
                    if op.type == X86_OP_MEM and (op.mem.disp + (op.mem.base == 0 and 0 or 0)) == target and op.mem.base == X86_REG_INVALID and op.mem.index == X86_REG_INVALID:
                        match = True
                    elif op.type == X86_OP_MEM and op.mem.disp == target:
                        match = True
                    elif op.type == X86_OP_IMM and op.imm == target:
                        match = True
                    if match and ins.address <= va < ins.address + ins.size:
                        hits.append((ins.address, ins.mnemonic, ins.op_str)); found = True; break
                break
            if found: break
        off = i + 1
    return hits

for t, label in [(0x478258, "mapArray_478258"), (0x47CA5A, "counter2_47ca5a"),
                 (0x47CA58, "counter1_47ca58"), (0x47EE6C, "tbl_47ee6c"),
                 (0x47CE6C, "tbl_47ce6c")]:
    hs = scan_imm(t)
    print(f"== {label} 0x{t:X}: {len(hs)}")
    for a, m, o in hs[:24]:
        print(f"   0x{a:08X} {m} {o}")
