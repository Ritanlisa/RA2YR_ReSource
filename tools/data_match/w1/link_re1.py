#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
link_re1.py -- recon on LINK.EXE 6.00.8447: strings, imports, sections.
"""
import struct, sys

path = r"D:\RA2YR_ReSource\.vc6-8447\BIN\LINK.EXE"
b = open(path, "rb").read()
print("size:", len(b))
e = struct.unpack_from("<I", b, 0x3C)[0]
print("PE @0x%X sig=%r" % (e, b[e:e+4]))
machine = struct.unpack_from("<H", b, e+4)[0]
nsec = struct.unpack_from("<H", b, e+6)[0]
opt = e + 24
magic = struct.unpack_from("<H", b, opt)[0]
print("machine=0x%X nsec=%d optmagic=0x%X" % (machine, nsec, magic))
so = opt + struct.unpack_from("<H", b, e+20)[0]
secs = []
for i in range(nsec):
    o = so + i*40
    name = b[o:o+8].rstrip(b"\x00").decode("latin1")
    vs, va, rs, ptr = struct.unpack_from("<IIII", b, o+8)
    secs.append((name, va, vs, ptr, rs))
    print("  %-8s va=0x%X vsize=0x%X raw=0x%X rawsize=0x%X" % (name, va, vs, ptr, rs))

imagebase = struct.unpack_from("<I", b, opt+28)[0]
print("imagebase=0x%X" % imagebase)

def va2off(va):
    rva = va - imagebase
    for name, sva, vs, ptr, rs in secs:
        if sva <= rva < sva + max(vs, rs):
            d = rva - sva
            return ptr + d if d < rs else None
    return None

def off2va(off):
    for name, sva, vs, ptr, rs in secs:
        if ptr <= off < ptr + rs:
            return imagebase + sva + (off - ptr)
    return None

# strings >= 5 chars, with VAs
import re
strs = []
for m in re.finditer(rb"[\x20-\x7e]{5,}", b):
    va = off2va(m.start())
    if va: strs.append((va, m.group().decode("latin1")))
print("strings:", len(strs))
keywords = ["unresolved", "symbol", "LNK", "idata", "imp_", "thunk", "import",
            "hash", "bucket", "dict", "order", "COMDAT", "external", "duplicate",
            "ordinal", "FirstThunk", "Hint", "descriptor", "trap"]
hits = [(va, s) for va, s in strs if any(k.lower() in s.lower() for k in keywords)]
print(f"keyword hits: {len(hits)}")
for va, s in hits[:120]:
    print("  0x%08X %r" % (va, s[:100]))
json_out = {"secs": secs, "strings": [(hex(va), s) for va, s in strs]}
import json
json.dump(json_out, open(r"D:\RA2YR_ReSource\.omo\agents\datamatch\link_strings.json", "w"))
