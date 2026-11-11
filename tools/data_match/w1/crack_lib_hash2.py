#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
crack_lib_hash2.py -- algebraic crack of the lib.exe dictionary hash.

2nd linker member REAL format (decoded empirically, kernel32.lib):
    u32 nbuckets
    u32 member_offset[nbuckets]     # bucket table -> member offsets
    u32 nnames
    u16  bucket_index[nnames]       # PER-NAME bucket index  <-- hash observation
    char names[nnames] (nul-term)   # in archive/member order

=> (name, bucket) pairs let us solve hash(name) % nbuckets == bucket directly.
Cross-validated on 14 era import libs.
"""
import struct, os, json, sys

ROOT = r"D:\RA2YR_ReSource"
LIBDIR = os.path.join(ROOT, ".vc6-8447", "LIB")

def parse_dict(path):
    b = open(path, "rb").read()
    off = 8; slashes = []
    while off + 60 <= len(b):
        hdr = b[off:off+60]; name = hdr[0:16].decode("latin1").rstrip()
        size = int(hdr[48:58].decode().strip())
        if name == "/": slashes.append((off+60, size))
        off += 60 + size + (size & 1)
    if len(slashes) < 2: return None
    do, sz = slashes[1]; d = b[do:do+sz]
    nb = struct.unpack_from("<I", d, 0)[0]
    if nb == 0 or nb > 100000: return None
    offs = struct.unpack_from("<%dI" % nb, d, 4)
    p = 4 + 4*nb
    nn = struct.unpack_from("<I", d, p)[0]
    if nn == 0 or nn > 200000: return None
    u16s = struct.unpack_from("<%dH" % nn, d, p+4)
    q = p + 4 + 2*nn
    names = []
    while q < len(d):
        e = d.index(b"\x00", q); names.append(d[q:e].decode("latin1")); q = e+1
    if len(names) != nn: return None
    return nb, list(zip(names, u16s)), offs

def rol(x, n): return ((x << n) | (x >> (32 - n))) & 0xFFFFFFFF
def ror(x, n): return rol(x, 32 - (n % 32))

def mk(name, fn): return (name, fn)

CANDS = []
# generic families
CANDS += [
    mk("elf", lambda s: _h_elf(s)),
    mk("djb2", lambda s: _h(5381, lambda c,h: ((h<<5)+h+c), s)),
    mk("djb2xor", lambda s: _h(5381, lambda c,h: (((h<<5)+h)^c), s)),
    mk("sdbm", lambda s: _h(0, lambda c,h: (c + (h<<6) + (h<<16) - h), s)),
    mk("bkdr131", lambda s: _h(0, lambda c,h: (h*131+c), s)),
    mk("bkdr31", lambda s: _h(0, lambda c,h: (h*31+c), s)),
    mk("bkdr37", lambda s: _h(0, lambda c,h: (h*37+c), s)),
    mk("bkdr39", lambda s: _h(0, lambda c,h: (h*39+c), s)),
    mk("bkdr41", lambda s: _h(0, lambda c,h: (h*41+c), s)),
    mk("ms65599", lambda s: _h(0, lambda c,h: (h*65599+c), s)),
    mk("ms378551", lambda s: _h(0, lambda c,h: (h*378551+c), s)),
    mk("add", lambda s: sum(s.encode())),
    mk("xor4rol", lambda s: _h2(0, lambda c,h: rol(h^c,4), s)),
    mk("xor4ror", lambda s: _h2(0, lambda c,h: ror(h^c,4), s)),
    mk("rol4add", lambda s: _h2(0, lambda c,h: (rol(h,4)+c), s)),
    mk("rot1xor", lambda s: _h2(0, lambda c,h: rol(h^c,1), s)),
    mk("fnv", lambda s: _h2(2166136261, lambda c,h: ((h^c)*16777619), s)),
    mk("dek", lambda s: _h2(len(s), lambda c,h: ((h<<5)^(h>>27)^c), s)),
    mk("js", lambda s: _h2(1315423911, lambda c,h: (h^((h<<5)+c+(h>>2))), s)),
    mk("ntsum", lambda s: sum((c << (i&7)) for i,c in enumerate(s.encode()))),
]
import zlib
CANDS.append(mk("crc32", lambda s: zlib.crc32(s.encode())))
for r in (2,3,4,5,6,7):
    CANDS.append(mk("xor%drol" % r, (lambda r: lambda s: _h2(0, lambda c,h: rol(h^c,r), s))(r)))
for sh in (1,2,3,4,5,6,7):
    CANDS.append(mk("sh%dadd" % sh, (lambda sh: lambda s: _h2(0, lambda c,h: ((h<<sh)+c), s))(sh)))

def _h(seed, function, s):
    h = seed
    for c in s.encode(): h = function(c, h) & 0xFFFFFFFF
    return h
def _h2(seed, function, s):
    h = seed
    for c in s.encode(): h = function(c, h) & 0xFFFFFFFF
    return h
def _h_elf(s):
    h = 0
    for c in s.encode():
        h = (h << 4) + c
        g = h & 0xF0000000
        if g: h ^= g >> 24
        h &= ~g & 0xFFFFFFFF
    return h

def main():
    data = {}
    for base in ["kernel32", "user32", "gdi32", "advapi32", "shell32", "ole32",
                 "oleaut32", "winmm", "wsock32", "ddraw", "dsound", "version",
                 "comctl32", "imm32"]:
        p = os.path.join(LIBDIR, base + ".lib")
        if not os.path.exists(p): continue
        r = parse_dict(p)
        if not r: print(f"!! {base}: parse fail"); continue
        nb, pairs, offs = r
        mx = max(v for _, v in pairs)
        print(f"{base}: nbuckets={nb} nnames={len(pairs)} maxbucket={mx} ok={mx<nb}")
        data[base] = {"nb": nb, "pairs": pairs}

    # try candidates: h(name) % nb == bucket for ALL names in ALL libs
    print("\n--- algebraic test ---")
    total_eq = sum(len(v["pairs"]) for v in data.values())
    print(f"total equations: {total_eq}")
    results = []
    for hname, hf in CANDS:
        hit = 0
        for base, v in data.items():
            nb = v["nb"]
            for name, bk in v["pairs"]:
                if hf(name) % nb == bk: hit += 1
        results.append((hit, hname))
        if hit > total_eq * 0.01:
            print(f"  {hname}: {hit}/{total_eq}")
    results.sort(reverse=True)
    print("top:", results[:5])
    json.dump({k: {"nb": v["nb"], "pairs": v["pairs"]} for k, v in data.items()},
              open(os.path.join(ROOT, ".omo/agents/datamatch/dict_pairs.json"), "w"))

if __name__ == "__main__":
    main()
