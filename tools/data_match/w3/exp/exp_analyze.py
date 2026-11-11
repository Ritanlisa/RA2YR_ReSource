#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""exp_analyze.py -- analyze era-toolchain experiment EXEs (.data / .CRT / globals).

Usage: python exp_analyze.py exp1.exe exp1.map
"""
import struct, sys, re


def sections(path):
    f = open(path, "rb").read()
    e = struct.unpack_from("<I", f, 0x3C)[0]
    nsec = struct.unpack_from("<H", f, e + 6)[0]
    opt = e + 24
    base = struct.unpack_from("<I", f, opt + 28)[0]
    so = opt + struct.unpack_from("<H", f, e + 20)[0]
    out = []
    for i in range(nsec):
        off = so + i * 40
        name = f[off:off + 8].rstrip(b"\0").decode("latin1")
        vs, va, rs, ro = struct.unpack_from("<IIII", f, off + 8)
        out.append(dict(name=name, va=va + base, vs=vs, ro=ro, rs=rs))
    return f, out


def va2off(secs, va):
    for s in secs:
        if s["va"] <= va < s["va"] + max(s["vs"], s["rs"]):
            return s["ro"] + (va - s["va"])
    raise KeyError(hex(va))


def parse_map(path):
    syms = {}
    for line in open(path, encoding="latin1"):
        m = re.match(r"\s+([0-9a-f]{4}):([0-9a-f]{8})\s+(\S+)\s+([0-9a-f]{8})", line)
        if m:
            syms[m.group(3)] = int(m.group(4), 16)
    return syms


def find(syms, needle):
    for k, v in syms.items():
        if needle in k:
            return v
    return None


def main(exe, mapfile):
    f, secs = sections(exe)
    syms = parse_map(mapfile)
    print("== sections ==")
    for s in secs:
        print("  %-8s va=%08x vs=%08x rs=%08x" % (s["name"], s["va"], s["vs"], s["rs"]))
    ds = [s for s in secs if s["name"] == ".data"][0]
    print("== .data va=%08x vsize=%08x rawsize=%08x ==" % (ds["va"], ds["vs"], ds["rs"]))

    def rd(va):
        off = va2off(secs, va)
        return struct.unpack_from("<I", f, off)[0] if off + 4 <= len(f) else None

    def bytesat(va, n):
        off = va2off(secs, va)
        return f[off:off + n]

    for key in ["xc_a", "xc_z", "xi_a", "xi_z", "xp_a", "xt_a", "xt_z"]:
        v = find(syms, "__" + key)
        print("sym __%s = %s" % (key, hex(v) if v is not None else "-"))

    xca = find(syms, "__xc_a")
    xcz = find(syms, "__xc_z")
    if xca and xcz:
        print("C++ init table [%08x,%08x):" % (xca, xcz))
        for va in range(xca, xcz, 4):
            print("  %08x -> %08x" % (va, rd(va)))
    xia = find(syms, "__xi_a")
    xiz = find(syms, "__xi_z")
    if xia and xiz:
        print("C init table [%08x,%08x):" % (xia, xiz))
        for va in range(xia, xiz, 4):
            print("  %08x -> %08x" % (va, rd(va)))
    xta = find(syms, "__xt_a")
    xtz = find(syms, "__xt_z")
    if xta and xtz:
        print("T table [%08x,%08x):" % (xta, xtz))
        for va in range(xta, xtz, 4):
            print("  %08x -> %08x" % (va, rd(va)))

    print("== globals: symbol address and file bytes (32B) ==")
    for name in ["g_a1", "g_a2", "g_b", "g_c", "g_pod", "g_int"]:
        # mangled name contains ?g_a1@
        va = find(syms, "?%s@" % name)
        if va is None:
            print("  %-6s -" % name)
            continue
        print("  %-6s %08x: %s" % (name, va, bytesat(va, 32).hex(" ")))

    print("== ctor symbols ==")
    for name in ["??0A@", "??0B@", "??0C@"]:
        va = find(syms, name)
        print("  %-8s %s" % (name, hex(va) if va else "-"))


if __name__ == "__main__":
    main(sys.argv[1], sys.argv[2])
