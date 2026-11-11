#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
crack_lib_hash.py -- crack the lib.exe dictionary hash from 2nd linker member
orders of the era import libs, using the LIFO-chain decomposition method.

Method:
  - dict order S = concatenation of bucket chains (bucket index ascending),
    each chain in REVERSE insertion order (head-insert singly-linked list).
  - insertion order = archive member order == hint order (from lib_members.json
    cross-check, or 1st linker member order).
  - parse S into segments: new segment starts whenever insertion index rises.
  - constraint: bucket(seg_i) strictly increasing across segments.
  - search hash families x M for full consistency on ALL libs.
Outputs .omo/agents/datamatch/dict_hash_solution.json
"""
import json, os, struct, sys, itertools

ROOT = r"D:\RA2YR_ReSource"
LIBDIR = os.path.join(ROOT, ".vc6-8447", "LIB")

def archive_members(b):
    """yield (name, data_off, size) for all members of a COFF archive."""
    off = 8
    while off + 60 <= len(b):
        hdr = b[off:off+60]
        name = hdr[0:16].decode("latin1").rstrip()
        try:
            size = int(hdr[48:58].decode().strip())
        except ValueError:
            break
        yield name, off + 60, size
        off = off + 60 + size + (size & 1)

def dict_order(path):
    b = open(path, "rb").read()
    slashes = [(n, o, s) for n, o, s in archive_members(b) if n == "/"]
    if len(slashes) < 2:
        return None
    _, data_off, size = slashes[1]
    d = b[data_off:data_off+size]
    # VC6: u32 LE count, count x u32 LE member offsets, then names
    nsyms = struct.unpack_from("<I", d, 0)[0]
    offs = struct.unpack_from("<%dI" % nsyms, d, 4)
    p = 4 + 4 * nsyms
    names = []
    for _ in range(nsyms):
        e = d.index(b"\x00", p)
        names.append(d[p:e].decode("latin1"))
        p = e + 1
    return names, offs

def first_member_order(path):
    """symbol order in 1st linker member (index) == archive build order.
    Per COFF spec the 1st member uses BIG-ENDIAN counts/offsets."""
    b = open(path, "rb").read()
    slashes = [(n, o, s) for n, o, s in archive_members(b) if n == "/"]
    if not slashes:
        return None
    _, data_off, size = slashes[0]
    d = b[data_off:data_off+size]
    nsyms = struct.unpack_from(">I", d, 0)[0]
    p = 4 + 4 * nsyms
    names = []
    for _ in range(nsyms):
        e = d.index(b"\x00", p)
        names.append(d[p:e].decode("latin1"))
        p = e + 1
    return names

# ---------------- hash families ----------------
def rol(x, n): return ((x << n) | (x >> (32 - n))) & 0xFFFFFFFF
def ror(x, n): return rol(x, 32 - (n % 32))

def h_elf(s):
    h = 0
    for c in s.encode():
        h = (h << 4) + c
        g = h & 0xF0000000
        if g: h ^= g >> 24
        h &= ~g & 0xFFFFFFFF
    return h
def h_djb2(s):
    h = 5381
    for c in s.encode(): h = ((h << 5) + h + c) & 0xFFFFFFFF
    return h
def h_djb2xor(s):
    h = 5381
    for c in s.encode(): h = (((h << 5) + h) ^ c) & 0xFFFFFFFF
    return h
def h_sdbm(s):
    h = 0
    for c in s.encode(): h = (c + (h << 6) + (h << 16) - h) & 0xFFFFFFFF
    return h
def h_bkdr(s):
    h = 0
    for c in s.encode(): h = (h * 131 + c) & 0xFFFFFFFF
    return h
def h_add(s): return sum(s.encode()) & 0xFFFFFFFF
def h_xor4rol(s):
    h = 0
    for c in s.encode(): h = rol(h ^ c, 4)
    return h
def h_xor4ror(s):
    h = 0
    for c in s.encode(): h = ror(h ^ c, 4)
    return h
def h_rol4add(s):
    h = 0
    for c in s.encode(): h = (rol(h, 4) + c) & 0xFFFFFFFF
    return h
def h_lose2(s):
    h = 0
    for c in s.encode(): h = (h + c) & 0xFFFFFFFF
    return h
def h_fnv(s):
    h = 2166136261
    for c in s.encode(): h = ((h ^ c) * 16777619) & 0xFFFFFFFF
    return h
def h_rot1xor(s):
    h = 0
    for c in s.encode(): h = rol(h ^ c, 1)
    return h
def h_ntsum(s):  # NT Rtl "hash by adding with position weighting"
    h = 0
    for i, c in enumerate(s.encode()): h = (h + (c << (i & 7))) & 0xFFFFFFFF
    return h
def h_crc32(s):
    import zlib
    return zlib.crc32(s.encode())
def h_ms65599(s):  # classic Kernighan/Pike MP321 hash: h*65599 + c
    h = 0
    for c in s.encode(): h = (h * 65599 + c) & 0xFFFFFFFF
    return h
def h_dek(s):
    h = len(s)
    for c in s.encode(): h = ((h << 5) ^ (h >> 27) ^ c) & 0xFFFFFFFF
    return h
def h_js(s):
    h = 1315423911
    for c in s.encode(): h ^= ((h << 5) + c + (h >> 2)) & 0xFFFFFFFF
    return h
def h_ru(s):  # Rust java-ish
    h = 0
    for c in s.encode(): h = (c + (h << 6) + (h << 16) - h) & 0xFFFFFFFF
    return h
def h_ap(s):
    h = 0xAAAAAAAA  # not serious
    return h
def h_pjw(s):  # PJW = elf variant
    return h_elf(s)

HASHES = {
    "elf": h_elf, "djb2": h_djb2, "djb2xor": h_djb2xor, "sdbm": h_sdbm,
    "bkdr131": h_bkdr, "add": h_add, "xor4rol": h_xor4rol, "xor4ror": h_xor4ror,
    "rol4add": h_rol4add, "fnv": h_fnv, "rot1xor": h_rot1xor,
    "ntsum": h_ntsum, "crc32": h_crc32, "ms65599": h_ms65599,
    "dek": h_dek, "js": h_js,
}

def parse_segments(dict_names, ins_index):
    """dict_names: symbols in dict order; ins_index: symbol->insertion index.
    A chain = maximal run of strictly decreasing insertion indices."""
    segs = []
    cur = []
    prev = None
    for n in dict_names:
        i = ins_index[n]
        if prev is not None and i >= prev:
            segs.append(cur)
            cur = []
        cur.append(n)
        prev = i
    if cur: segs.append(cur)
    return segs

def main():
    libs = {}
    for base in ["kernel32", "user32", "gdi32", "advapi32", "shell32", "ole32",
                 "oleaut32", "winmm", "wsock32", "ddraw", "dsound", "version",
                 "comctl32", "imm32"]:
        p = os.path.join(LIBDIR, base + ".lib")
        if not os.path.exists(p): continue
        d = dict_order(p)
        f = first_member_order(p)
        if not d or not f: continue
        libs[base] = {"dict": d[0], "first": f}
        print(f"{base}: dict {len(d[0])} syms, first-member {len(f)} syms")

    # insertion index: use 1st member order (archive build order)
    datasets = []
    for base, v in libs.items():
        names1 = v["first"]; namesd = v["dict"]
        if set(names1) != set(namesd):
            print(f"!! {base}: sym sets differ {len(names1)} vs {len(namesd)}")
            continue
        idx = {n: i for i, n in enumerate(names1)}
        segs = parse_segments(namesd, idx)
        datasets.append((base, names1, namesd, segs))
        # sanity: segs must reconstruct dict order
        rec = [n for seg in segs for n in seg]
        assert rec == namesd, base
        print(f"   {base}: {len(segs)} segments (avg {len(namesd)/len(segs):.1f} syms/seg)")

    allnames = set()
    for _, n1, _, _ in datasets: allnames.update(n1)
    print(f"\ntotal unique symbols across libs: {len(allnames)}")

    Ms = sorted(set([2**k for k in range(5, 16)] + [37, 53, 97, 127, 199, 211, 251, 257, 389, 503, 521, 997, 1021, 1039, 1801, 2003, 2039, 4093, 8191, 12289]))
    solutions = []
    for hname, hf in HASHES.items():
        H = {n: hf(n) for n in allnames}
        for M in Ms:
            ok = True
            for base, n1, nd, segs in datasets:
                # constraint: across segments in dict order, bucket strictly increasing
                pb = -1
                for seg in segs:
                    b = H[seg[0]] % M
                    # also all syms in seg share bucket
                    if any(H[x] % M != b for x in seg): ok = False; break
                    if b <= pb: ok = False; break
                    pb = b
                if not ok: break
            if ok:
                print(f"*** MATCH hash={hname} M={M}")
                solutions.append((hname, M))
    if not solutions:
        print("no (hash, M) consistent with LIFO-chain + ascending-bucket model on all libs")
        # relax: per-lib diagnostics on smallest lib
        for hname, hf in HASHES.items():
            best = []
            for M in Ms:
                okc = 0
                for base, n1, nd, segs in datasets:
                    pb = -1; ok = True
                    for seg in segs:
                        b = hf(seg[0]) % M
                        if any(hf(x) % M != b for x in seg): ok = False; break
                        if b <= pb: ok = False; break
                        pb = b
                    if ok: okc += 1
                best.append((okc, M))
            best.sort(reverse=True)
            print(f"  {hname}: best {best[:3]}")
    json.dump({"libs": {k: v for k, v in libs.items()}, "solutions": solutions},
              open(os.path.join(ROOT, ".omo/agents/datamatch/dict_hash_solution.json"), "w"), indent=1)

if __name__ == "__main__":
    main()
