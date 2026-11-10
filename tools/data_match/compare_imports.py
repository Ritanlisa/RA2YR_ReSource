#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
compare_imports.py -- structural + normalized byte comparison of two PEs'
import regions (original gamemd.exe vs our test build).

Compares:
  1. descriptor order + dll name strings
  2. per-DLL INT token sequence (mode, hint, name, ordinal, pad)
  3. pool event sequence (HN/ORD/DLLNAME by file offset)
  4. normalized byte blobs (RVA-relative) -> % byte equality
Usage: python compare_imports.py <orig.exe> <ours.exe>
"""
import sys, struct

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

def parse(path):
    b = open(path, "rb").read()
    secs = sections(b)
    e = u32(b, 0x3C); opt = e + 24
    imp_rva = u32(b, opt + 96 + 8); iat_rva = u32(b, opt + 96 + 96 + 8)
    off = rva2off(secs, imp_rva)
    D = []
    i = 0
    while True:
        o = off + i*20
        oft, tds, fwd, name_rva, ft = struct.unpack_from("<IIIII", b, o)
        if oft == 0 and name_rva == 0 and ft == 0:
            break
        name_off = rva2off(secs, name_rva)
        dll = b[name_off:b.index(b"\x00", name_off)].decode("latin1")
        int_rva = oft or ft
        int_off = rva2off(secs, int_rva)
        funcs = []
        j = 0
        while True:
            v = u32(b, int_off + j*4)
            if v == 0: break
            if v & 0x80000000:
                funcs.append({"mode": "ORD", "ordinal": v & 0xFFFF})
            else:
                hn_off = rva2off(secs, v)
                hint = u16(b, hn_off)
                nm_end = b.index(b"\x00", hn_off + 2)
                nm = b[hn_off+2:nm_end].decode("latin1")
                pad = (-(nm_end + 1 - hn_off)) % 4
                funcs.append({"mode": "NAME", "hint": hint, "name": nm,
                              "hn_off": hn_off, "pad": pad,
                              "hn_rva": v})
            j += 1
        D.append({"dll": dll, "name_off": name_off, "ft_rva": ft,
                  "int_rva": int_rva, "funcs": funcs})
        i += 1
    return {"bytes": b, "imp_rva": imp_rva, "iat_rva": iat_rva, "descs": D}

def pool_events(P):
    ev = []
    for d in P["descs"]:
        ev.append((d["name_off"], ("DLLNAME", d["dll"])))
        for f in d["funcs"]:
            if f["mode"] == "NAME":
                ev.append((f["hn_off"], ("HN", d["dll"], f["name"])))
    ev.sort(key=lambda t: t[0])
    return [e[1] for e in ev]

def main():
    A = parse(sys.argv[1])  # original
    B = parse(sys.argv[2])  # ours
    da, db = A["descs"], B["descs"]
    print(f"original: {len(da)} descriptors; ours: {len(db)} descriptors")

    # 1. descriptor order
    ordA = [d["dll"] for d in da]; ordB = [d["dll"] for d in db]
    print(f"\n[1] descriptor order match: {ordA == ordB}")
    if ordA != ordB:
        print("  orig:", ordA)
        print("  ours:", ordB)

    # 2. per-DLL INT token seq
    print("\n[2] per-DLL INT sequence:")
    for dll in ordA:
        try:
            x = [f["name"] if f["mode"] == "NAME" else f"@{f['ordinal']}" for f in next(d for d in da if d["dll"] == dll)["funcs"]]
            y = [f["name"] if f["mode"] == "NAME" else f"@{f['ordinal']}" for f in next(d for d in db if d["dll"] == dll)["funcs"]]
        except StopIteration:
            print(f"  {dll:16} MISSING in ours")
            continue
        same = x == y
        tag = "OK" if same else f"DIFF ({len(x)} vs {len(y)})"
        print(f"  {dll:16} {tag}")
        if not same:
            onlya = [t for t in x if t not in y]
            onlyb = [t for t in y if t not in x]
            if onlya: print(f"     only-orig ({len(onlya)}): {onlya[:12]}{'...' if len(onlya)>12 else ''}")
            if onlyb: print(f"     only-ours ({len(onlyb)}): {onlyb[:12]}{'...' if len(onlyb)>12 else ''}")
            # order diff on common set
            ca = [t for t in x if t in set(y)]
            cb = [t for t in y if t in set(x)]
            if ca != cb:
                print(f"     common-set order differs ({sum(1 for p,q in zip(ca,cb) if p!=q)}/{len(ca)} positions)")

    # 3. pool events
    peA, peB = pool_events(A), pool_events(B)
    print(f"\n[3] pool event sequence: orig {len(peA)} events, ours {len(peB)}; equal={peA == peB}")
    if peA != peB:
        n = 0
        for i, (x, y) in enumerate(zip(peA, peB)):
            if x != y:
                print(f"     first diff at event {i}: orig={x} ours={y}")
                n += 1
                if n >= 3: break
        if n == 0:
            print(f"     common prefix; length differs ({len(peA)} vs {len(peB)})")

    # 4. hints for common names
    hint_diff = 0; hint_common = 0
    hintsA = {}; hintsB = {}
    for d in da:
        for f in d["funcs"]:
            if f["mode"] == "NAME": hintsA[f["name"]] = f["hint"]
    for d in db:
        for f in d["funcs"]:
            if f["mode"] == "NAME": hintsB[f["name"]] = f["hint"]
    for k, v in hintsA.items():
        if k in hintsB:
            hint_common += 1
            if hintsB[k] != v:
                hint_diff += 1
                if hint_diff <= 10:
                    print(f"     hint diff {k}: orig={v} ours={hintsB[k]}")
    print(f"\n[4] hints: {hint_common} common names, {hint_diff} differing")

    # 5. normalized byte equality over INT arrays + descriptors + pool bytes
    def norm_int(descs, base_rva=None):
        out = bytearray()
        for d in descs:
            for f in d["funcs"]:
                if f["mode"] == "NAME":
                    out += struct.pack("<HH", f["hint"], len(f["name"]))
                    out += f["name"].encode("latin1")
                    out += b"\x00" * (1 + f["pad"])
                else:
                    out += struct.pack("<HH", 0xFFFF, f["ordinal"])
            out += b"\x00\x00\x00\x00"
        return bytes(out)
    niA, niB = norm_int(da), norm_int(db)
    m = sum(1 for x, y in zip(niA, niB) if x == y)
    print(f"\n[5] normalized INT+hn bytes: orig {len(niA)}B ours {len(niB)}B, positionwise equal {m} bytes ({100*m/max(len(niA),len(niB)):.1f}%)")

if __name__ == "__main__":
    main()
