#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
link_dis.py -- disassemble LINK.EXE 6.00.8447 address ranges with raw bytes.

Usage:
  python link_dis.py 0x412220 0x412310            # range
  python link_dis.py --fn 0x412220                 # function via link_fns.json
  python link_dis.py --write out.txt 0x412220 0x412310
Each instruction: address | bytes | mnemonic operands
Calls/jumps to absolute targets are annotated with the target address.
"""
import sys, os, json, struct
from capstone import *
from capstone.x86 import *

PATH = r"D:\RA2YR_ReSource\.vc6-8447\BIN\LINK.EXE"
ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
FNS = os.path.join(ROOT, ".omo", "agents", "datamatch", "link_fns.json")

b = open(PATH, "rb").read()
e = struct.unpack_from("<I", b, 0x3C)[0]
opt = e + 24
imagebase = struct.unpack_from("<I", b, opt + 28)[0]
so = opt + struct.unpack_from("<H", b, e + 20)[0]
nsec = struct.unpack_from("<H", b, e + 6)[0]
secs = []
for i in range(nsec):
    o = so + i * 40
    name = b[o:o + 8].rstrip(b"\x00").decode("latin1")
    vs, va, rs, ptr = struct.unpack_from("<IIII", b, o + 8)
    secs.append((name, va, vs, ptr, rs))

md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True


def va2off(va):
    rva = va - imagebase
    for name, sva, svs, ptr, rs in secs:
        if sva <= rva < sva + max(svs, rs):
            return ptr + (rva - sva)
    raise ValueError(hex(va))


def disasm_range(start, end, out):
    off = va2off(start)
    code = b[off:va2off(end)]
    lines = []
    for ins in md.disasm(code, start):
        bs = " ".join(f"{x:02X}" for x in ins.bytes)
        note = ""
        if ins.mnemonic in ("call", "jmp", "jz", "jnz", "je", "jne", "jb", "jbe",
                            "ja", "jae", "jl", "jle", "jg", "jge", "js", "jns",
                            "jo", "jno", "jp", "jnp", "loop", "jecxz"):
            for op in ins.operands:
                if op.type == X86_OP_IMM:
                    note = f"    ; -> 0x{op.imm & 0xFFFFFFFF:X}"
        lines.append(f"{ins.address:08X}  {bs:<32} {ins.mnemonic:<8} {ins.op_str}{note}")
    out.append(f"===== {start:#x} - {end:#x} ({len(lines)} insns) =====")
    out.extend(lines)
    out.append("")


def main():
    args = sys.argv[1:]
    outfile = None
    if "--write" in args:
        i = args.index("--write")
        outfile = args[i + 1]
        del args[i:i + 2]
    ranges = []
    if args and args[0] == "--fn":
        fns = json.load(open(FNS))["fns"]
        want = int(args[1], 16)
        fmap = [(int(a, 16), int(bb, 16)) for a, bb in fns]
        fmap.sort()
        for a, bb in fmap:
            if a == want:
                ranges.append((a, bb))
        if not ranges:
            raise SystemExit(f"no fn at {hex(want)}")
    else:
        for i in range(0, len(args) - 1, 2):
            ranges.append((int(args[i], 16), int(args[i + 1], 16)))
    out = []
    for a, bb in ranges:
        disasm_range(a, bb, out)
    text = "\n".join(out)
    if outfile:
        open(outfile, "w", encoding="utf-8").write(text)
        print(f"wrote {outfile} ({len(text)} bytes)")
    else:
        print(text)


if __name__ == "__main__":
    main()
