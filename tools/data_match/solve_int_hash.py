#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
solve_int_hash.py -- identify link 6.00.8447's internal ordering of IAT/INT
slots. Model: INT = stable bucket sort over insertion order, buckets ascending,
within-bucket LIFO (most recently inserted first). Bucket = hash(symname) % M.

Data: test2 build (insertion per DLL == its emitted pool order, both known) and
the resulting INT order per DLL. Search a battery of candidate hash functions
and moduli for (hash, M) consistent with ALL DLLs simultaneously.
"""
import sys, json, itertools
sys.path.insert(0, 'tools/data_match')
from compare_imports import parse

def rol(x, n, bits=32):
    n %= bits
    return ((x << n) | (x >> (bits - n))) & 0xFFFFFFFF

def ror(x, n, bits=32):
    return rol(x, bits - (n % bits), bits)

HASHES = {
    "elf": lambda s: _elf(s),
    "djb2": lambda s: _djb2(s),
    "djb2xor": lambda s: _djb2xor(s),
    "sdbm": lambda s: _sdbm(s),
    "add": lambda s: sum(s.encode()),
    "xor4rol": lambda s: _xor4rol(s),
    "xor4ror": lambda s: _xor4ror(s),
    "rol4add": lambda s: _rol4add(s),
    "msvcrt": lambda s: _msvcrt(s),
    "crc32": lambda s: _crc32(s),
    "lose": lambda s: _lose(s),
    "fnv": lambda s: _fnv(s),
    "rot1xor": lambda s: _rot1xor(s),
    "kr": lambda s: _kr(s),
}

def _elf(s):
    h = 0
    for c in s.encode():
        h = (h << 4) + c
        g = h & 0xF0000000
        if g:
            h ^= g >> 24
        h &= ~g & 0xFFFFFFFF
    return h

def _djb2(s):
    h = 5381
    for c in s.encode():
        h = ((h << 5) + h + c) & 0xFFFFFFFF
    return h

def _djb2xor(s):
    h = 5381
    for c in s.encode():
        h = (((h << 5) + h) ^ c) & 0xFFFFFFFF
    return h

def _sdbm(s):
    h = 0
    for c in s.encode():
        h = (c + (h << 6) + (h << 16) - h) & 0xFFFFFFFF
    return h

def _xor4rol(s):
    h = 0
    for c in s.encode():
        h = rol(h ^ c, 4)
    return h

def _xor4ror(s):
    h = 0
    for c in s.encode():
        h = ror(h ^ c, 4)
    return h

def _rol4add(s):
    h = 0
    for c in s.encode():
        h = (rol(h, 4) + c) & 0xFFFFFFFF
    return h

def _msvcrt(s):
    h = 0
    for c in s.encode():
        h = ((h << 5) - h + c) & 0xFFFFFFFF  # same as sdbm actually
    return h

def _crc32(s):
    import zlib
    return zlib.crc32(s.encode())

def _lose(s):
    h = 0
    for c in s.encode():
        h += c
    return h

def _fnv(s):
    h = 2166136261
    for c in s.encode():
        h = ((h ^ c) * 16777619) & 0xFFFFFFFF
    return h

def _rot1xor(s):
    h = 0
    for c in s.encode():
        h = rol(h ^ c, 1)
    return h

def _kr(s):
    h = 0
    for c in s.encode():
        h = ((h << 3) ^ (h >> 5) ^ c) & 0xFFFFFFFF
    return h

def simulate(insertion, buckets):
    """buckets: name->bucket index. Iterate buckets ascending; within bucket,
    LIFO of insertion. Returns INT order."""
    out = []
    order = {}
    for name in insertion:
        b = buckets[name]
        order.setdefault(b, []).append(name)  # append; LIFO => iterate reversed
    for b in sorted(order):
        out.extend(reversed(order[b]))
    return out

def main():
    B = parse("tools/data_match/w1/test2.exe")
    data = []
    for d in B["descs"]:
        named = [f for f in d["funcs"] if f["mode"] == "NAME"]
        ins = [f["name"] for f in sorted(named, key=lambda f: f.get("hn_off", 0))]
        INT = [f["name"] for f in named]
        if len(ins) >= 4:
            data.append((d["dll"], ins, INT))
    print(f"{len(data)} DLLs with >=4 imports as constraint sets")
    Ms = [2**k for k in range(3, 15)] + [251, 503, 997, 2003]
    hits = []
    for hname, hf in HASHES.items():
        # precompute hashes for all names
        allnames = set()
        for _, ins, _ in data:
            allnames.update(ins)
        H = {n: hf(n) for n in allnames}
        for M in Ms:
            bk = {n: H[n] % M for n in allnames}
            ok = True
            for dll, ins, INT in data:
                if simulate(ins, {n: bk[n] for n in ins}) != INT:
                    ok = False
                    break
            if ok:
                print(f"*** MATCH: hash={hname} M={M}")
                hits.append((hname, M))
    if not hits:
        print("no (hash, M) combo explains all DLLs; trying per-dll...")
        for hname, hf in HASHES.items():
            allnames = set()
            for _, ins, _ in data:
                allnames.update(ins)
            H = {n: hf(n) for n in allnames}
            for M in Ms:
                bk = {n: H[n] % M for n in allnames}
                okc = 0
                for dll, ins, INT in data:
                    if simulate(ins, {n: bk[n] for n in ins}) == INT:
                        okc += 1
                if okc >= len(data) - 3:
                    print(f"partial: hash={hname} M={M} explains {okc}/{len(data)}")
    return hits

if __name__ == "__main__":
    main()
