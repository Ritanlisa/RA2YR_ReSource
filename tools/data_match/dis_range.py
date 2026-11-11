#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""dis_range.py -- disassemble a byte range of a file at a given file offset."""
import sys

from capstone import Cs, CS_ARCH_X86, CS_MODE_32


def main():
    path = sys.argv[1]
    off = int(sys.argv[2], 0)
    n = int(sys.argv[3], 0) if len(sys.argv) > 3 else 256
    base = int(sys.argv[4], 0) if len(sys.argv) > 4 else 0
    f = open(path, "rb").read()
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    for ins in md.disasm(f[off:off + n], base):
        print("%08x  %-24s %s %s" % (ins.address, ins.bytes.hex(), ins.mnemonic, ins.op_str))


if __name__ == "__main__":
    main()
