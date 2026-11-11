#!/usr/bin/env python3
import struct
from capstone import *
from capstone.x86 import *
b = open(r".vc6-8447\BIN\LINK.EXE", "rb").read()
md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True
def xrefs(target):
    pat = struct.pack("<I", target); hits = []
    off = 0x1000
    while True:
        i = b.find(pat, off, 0x68000)
        if i < 0: break
        for back in range(0, 8):
            start = i - back
            for ins in md.disasm(b[start:start+24], 0x400000+start):
                ok = False
                for op in ins.operands:
                    if op.type == X86_OP_IMM and op.imm == target:
                        hits.append((ins.address, ins.mnemonic, ins.op_str)); ok = True; break
                break
        off = i + 1
    return hits
for va, label in [(0x401F40, ".idata$2"), (0x402048, ".idata$3"), (0x402054, ".idata$4"),
                  (0x402060, ".idata$5"), (0x402074, ".idata$6"), (0x4020C8, ".idata$5b"),
                  (0x4020E0, ".idata$4b"), (0x4020F8, ".idata$6b")]:
    hs = xrefs(va)
    print(label, "->", ["0x%X %s %s" % h for h in hs[:6]])
