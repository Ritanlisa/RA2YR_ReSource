#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""pe_sections.py -- print PE section table (name/va/vs/ro/rs) for a binary.

Usage: python tools/data_match/pe_sections.py <exe>
"""
import struct
import sys


def sections(path):
    f = open(path, "rb").read()
    e_lfanew = struct.unpack_from("<I", f, 0x3C)[0]
    assert f[e_lfanew:e_lfanew + 4] == b"PE\0\0", "not PE"
    nsec = struct.unpack_from("<H", f, e_lfanew + 6)[0]
    opt = e_lfanew + 24
    magic = struct.unpack_from("<H", f, opt)[0]
    base = struct.unpack_from("<I", f, opt + 28)[0] if magic == 0x10B else struct.unpack_from("<Q", f, opt + 24)[0]
    so = opt + struct.unpack_from("<H", f, e_lfanew + 20)[0]
    out = []
    for i in range(nsec):
        off = so + i * 40
        name = f[off:off + 8].rstrip(b"\0").decode("latin1")
        vs, va, rs, ro = struct.unpack_from("<IIII", f, off + 8)
        out.append(dict(name=name, va=va, vs=vs, ro=ro, rs=rs))
    return dict(imagebase=base, sections=out)


def main():
    path = sys.argv[1] if len(sys.argv) > 1 else r"D:\RA2MD\gamemd.exe"
    info = sections(path)
    print("imagebase", hex(info["imagebase"]))
    for s in info["sections"]:
        print("%-10s va=%08x vs=%08x ro=%08x rs=%08x" % (s["name"], s["va"], s["vs"], s["ro"], s["rs"]))


if __name__ == "__main__":
    main()
