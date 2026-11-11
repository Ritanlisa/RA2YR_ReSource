#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""msvcrt_export.py -- locate an export in a PE (default: qsort in SysWOW64 msvcrt)."""
import struct
import sys


def load(path):
    f = open(path, "rb").read()
    e = struct.unpack_from("<I", f, 0x3C)[0]
    nsec = struct.unpack_from("<H", f, e + 6)[0]
    opt = e + 24
    so = opt + struct.unpack_from("<H", f, e + 20)[0]
    secs = []
    for i in range(nsec):
        o = so + i * 40
        name = f[o:o + 8].rstrip(b"\0").decode("latin1")
        vs, va, rs, ro = struct.unpack_from("<IIII", f, o + 8)
        secs.append((name, va, vs, ro, rs))
    return f, opt, secs


def rva2off(secs, rva):
    for name, va, vs, ro, rs in secs:
        if va <= rva < va + max(vs, rs):
            d = rva - va
            if d < rs:
                return ro + d
    return None


def exports(path):
    f, opt, secs = load(path)
    ed_rva, ed_sz = struct.unpack_from("<II", f, opt + 96)
    eo = rva2off(secs, ed_rva)
    nfun, nname = struct.unpack_from("<II", f, eo + 0x14)
    afun, aname, aord = struct.unpack_from("<III", f, eo + 0x1C)
    out = {}
    for i in range(nname):
        no = rva2off(secs, struct.unpack_from("<I", f, rva2off(secs, aname) + 4 * i)[0])
        end = f.index(b"\0", no)
        nm = f[no:end].decode("latin1")
        ordi = struct.unpack_from("<H", f, rva2off(secs, aord) + 2 * i)[0]
        fn = rva2off(secs, afun) + 4 * ordi
        rva = struct.unpack_from("<I", f, fn)[0]
        out[nm] = rva
    return out, rva2off


def main():
    path = sys.argv[1] if len(sys.argv) > 1 else r"C:\Windows\SysWOW64\msvcrt.dll"
    names = sys.argv[2:] or ["qsort", "bsearch", "_qsort"]
    exp, r2o = exports(path)
    for n in names:
        if n in exp:
            print("%-12s rva=%08x fileoff=%08x" % (n, exp[n], r2o and r2o.__self__ if False else 0))
        else:
            print("%-12s not exported" % n)


if __name__ == "__main__":
    main()
