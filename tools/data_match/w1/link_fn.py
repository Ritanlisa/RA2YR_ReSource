#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
link_fn.py -- robust function window disassembler for LINK.EXE: find function
start (nop-pad/ret boundary) then linear disasm with skip-on-error.
Usage: python link_fn.py 0xVA [bytes]
"""
import struct, sys
from capstone import *

path = r"D:\RA2YR_ReSource\.vc6-8447\BIN\LINK.EXE"
b = open(path, "rb").read()

def va2off(va):
    rva = va - 0x400000
    return rva if 0x1000 <= rva < 0x68000 else None

def find_func_start(va):
    """scan back to a ret/int3/nop-pad boundary."""
    off = va2off(va)
    i = off
    while i > 0x1000:
        # look for C3 ret followed by >=3 CC/90 padding
        if b[i-1] == 0xCC and b[i-2] == 0xCC and b[i-3] == 0xCC:
            return 0x400000 + i
        if b[i-1] == 0x90 and b[i-2] == 0x90 and b[i-3] == 0x90:
            return 0x400000 + i
        i -= 1
    return 0x400000 + 0x1000

def disasm(va_start, length):
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    off = va2off(va_start)
    out = []
    for ins in md.disasm(b[off:off+length], va_start):
        out.append((ins.address, ins.mnemonic, ins.op_str))
    return out

if __name__ == "__main__":
    va = int(sys.argv[1], 16)
    ln = int(sys.argv[2], 16) if len(sys.argv) > 2 else 0x200
    fs = find_func_start(va)
    print(f"; function start ~0x{fs:X}")
    for a, m, o in disasm(fs, max(ln, va - fs + 0x40)):
        mark = " <==" if a <= va < a + 16 else ""
        print("0x%08X  %-8s %s%s" % (a, m, o, mark))
