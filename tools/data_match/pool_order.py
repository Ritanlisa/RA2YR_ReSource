#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
pool_order.py -- reconstruct the linker's emission sequence inside the original
gamemd.exe import region: INT arrays, hint/name entries, DLL name strings,
all sorted by file offset. Prints per-DLL INT order vs pool order.
"""
import json, struct, sys

def u16(b, o): return struct.unpack_from("<H", b, o)[0]
def u32(b, o): return struct.unpack_from("<I", b, o)[0]

def sections(b):
    e = u32(b, 0x3C); n = u16(b, e + 6)
    so = e + 24 + u16(b, e + 20)
    return [{"name": b[o:o+8].rstrip(b"\x00").decode("latin1"),
             "vsize": u32(b,o+8), "va": u32(b,o+12),
             "rawsize": u32(b,o+16), "ptr": u32(b,o+20)}
            for o in (so + i*40 for i in range(n))]

def rva2off(secs, rva):
    for s in secs:
        if s["va"] <= rva < s["va"] + max(s["vsize"], s["rawsize"]):
            d = rva - s["va"]
            return s["ptr"] + d if d < s["rawsize"] else None
    return None

def main():
    path = sys.argv[1] if len(sys.argv) > 1 else r"D:\RA2MD\gamemd.exe"
    b = open(path, "rb").read()
    secs = sections(b)
    J = json.load(open(r".omo\agents\datamatch\orig_imports.json", encoding="utf-8"))
    descs = J["descs"]

    events = []  # (offset, kind, dll, payload)
    for d in descs:
        events.append((d["name_off"], "DLLNAME", d["dll"], d["dll"]))
        for f in d["funcs"]:
            if "name" in f:
                events.append((f["hn_off"], "HN", d["dll"], f"{f['hint']}\t{f['name']}"))
            else:
                events.append((None, "ORD", d["dll"], f["ordinal"]))
    ev = sorted([e for e in events if e[0] is not None])
    print("=== pool emission sequence (by file offset) ===")
    prev_dll = None
    seq = []
    for off, kind, dll, payload in ev:
        seq.append((off, kind, dll, payload))
    # compress: show dll transitions
    cur = None
    counts = {}
    for off, kind, dll, payload in seq:
        key = (kind, dll)
        if key != cur:
            if cur: print(f"  0x{cur_start:06X}..0x{off:06X}  {cur[0]} {cur[1]}  x{counts[cur]}")
            cur, cur_start = key, off
            counts[key] = 0
        counts[key] += 1
    if cur: print(f"  0x{cur_start:06X}..          {cur[0]} {cur[1]}  x{counts[cur]}")

    print("\n=== per-DLL: INT order vs pool order ===")
    for d in descs:
        int_names = [f["name"] if "name" in f else f"@{f['ordinal']}" for f in d["funcs"]]
        pool_names = [p for (o,k,dl,p) in seq if dl == d["dll"] and k == "HN"]
        # pool payload is "hint\tname"
        pool_pure = [p.split("\t")[1] for p in pool_names]
        same = int_names == pool_pure
        print(f"{d['dll']:16} INT==pool:{same}")
        if not same and len(pool_pure) <= 30:
            print(f"  INT : {int_names}")
            print(f"  pool: {pool_pure}")

if __name__ == "__main__":
    main()
