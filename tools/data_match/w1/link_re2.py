#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
link_re2.py -- capstone-based static analysis harness for LINK.EXE 6.00.8447.
Finds code xrefs to string VAs, disassembles windows around them.
"""
import struct, sys
from capstone import *
from capstone.x86 import *

path = r"D:\RA2YR_ReSource\.vc6-8447\BIN\LINK.EXE"
b = open(path, "rb").read()
e = struct.unpack_from("<I", b, 0x3C)[0]
opt = e + 24
imagebase = struct.unpack_from("<I", b, opt+28)[0]
so = opt + struct.unpack_from("<H", b, e+20)[0]
nsec = struct.unpack_from("<H", b, e+6)[0]
secs = []
for i in range(nsec):
    o = so + i*40
    name = b[o:o+8].rstrip(b"\x00").decode("latin1")
    vs, va, rs, ptr = struct.unpack_from("<IIII", b, o+8)
    secs.append((name, va, vs, ptr, rs))

TEXT = next(s for s in secs if s[0] == ".text")
TNAME, TVA, TVS, TPTR, TRS = TEXT
TEXTBytes = b[TPTR:TPTR+TRS]

md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True

def va2off(va):
    rva = va - imagebase
    for name, sva, vs, ptr, rs in secs:
        if sva <= rva < sva + max(vs, rs):
            d = rva - sva
            return ptr + d if d < rs else None
    return None

def find_imm_xrefs(target_va):
    """scan .text for instructions referencing target_va as immediate."""
    hits = []
    # quick scan: search 4-byte LE pattern first, then verify by disasm
    pat = struct.pack("<I", target_va)
    off = 0
    while True:
        i = TEXTBytes.find(pat, off)
        if i < 0: break
        va = imagebase + TVA + i
        # disasm a few bytes before to find the instruction start
        for back in range(0, 7):
            try:
                insns = list(md.disasm(TEXTBytes[i-back:i-back+16], va-back))
            except Exception:
                continue
            if insns and insns[0].address <= va and va < insns[0].address + insns[0].size:
                # check any operand == target
                for ins in insns[:1]:
                    for op in ins.operands:
                        if op.type == X86_OP_IMM and op.imm == target_va:
                            hits.append((ins.address, ins.mnemonic, ins.op_str))
                break
        off = i + 1
    return hits

def disasm_window(va, before=0x60, after=0x120):
    o = va2off(va)
    if o is None: return []
    lo = max(TPTR, o - before)
    lo_va = imagebase + TVA + (lo - TPTR)
    out = []
    for ins in md.disasm(b[lo:o+after], lo_va):
        out.append((ins.address, ins.mnemonic, ins.op_str, ins.bytes.hex()))
        if ins.address > va + after: break
    return out

if __name__ == "__main__":
    targets = {
        "Too many externals": 0x401920,
        "__imp_@0x4018D8": 0x4018D8,
        "__imp_@0x40202C": 0x40202C,
        "CsymCreateThunkSymbols": 0x4028B8,
        "hashSlotTable": 0x403CC2,
    }
    for label, va in targets.items():
        hits = find_imm_xrefs(va)
        print(f"== {label} @0x{va:X}: {len(hits)} xrefs")
        for ha, mn, ops in hits[:12]:
            print(f"   0x{ha:08X} {mn} {ops}")
