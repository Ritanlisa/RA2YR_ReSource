#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
lib_dict_order.py -- extract the 2nd linker member (dictionary) symbol order
from a COFF archive. The 2nd member ("") is: u32 BE symcount, u32 BE memcount,
memcount x u32 BE offsets, then symcount NUL-terminated names in DICTIONARY
order (lib.exe's hash order, not alphabetical).
"""
import struct, sys

def dict_order(path):
    b = open(path, "rb").read()
    off = 8
    members = []
    idx2 = None
    while off + 60 <= len(b):
        hdr = b[off:off+60]
        name = hdr[0:16].decode("latin1").rstrip()
        size = int(hdr[48:58].decode().strip())
        do = off + 60
        if name == "/":
            if idx2 is None:
                idx2 = do  # first "/" is the 1st linker member; second is dict
                if not members or True:
                    pass
            else:
                pass
        members.append((name, do, size))
        off = do + size + (size & 1)
    # find all "/" members
    slashes = [m for m in members if m[0] == "/"]
    if len(slashes) < 2:
        return []
    name_off, data_off, size = slashes[1]
    d = b[data_off:data_off+size]
    # VC6-era 2nd linker member (dictionary): u32 LE symcount, symcount x u32 LE
    # member offsets, then NUL-terminated names in dictionary (lib hash) order
    nsyms = struct.unpack_from("<I", d, 0)[0]
    p = 8 + 4 * nsyms if False else 4 + 4 * nsyms
    names = []
    for _ in range(nsyms):
        e = d.index(b"\x00", p)
        names.append(d[p:e].decode("latin1"))
        p = e + 1
    return names

if __name__ == "__main__":
    for path in sys.argv[1:]:
        names = dict_order(path)
        print(f"{path}: {len(names)} dict symbols; first 12:")
        for n in names[:12]:
            print("   ", n)
