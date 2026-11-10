#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
extract_imports.py -- byte-level import table dumper for the original gamemd.exe.

Dumps the complete import layout: descriptors, INT (OriginalFirstThunk) arrays,
IAT (FirstThunk) arrays, Hint/Name entries, DLL name strings -- each with file
offset + RVA + raw bytes, so we can do byte-exact comparison against our build.

Usage: python extract_imports.py <exe> [--json out.json]
"""
import sys, os, json, struct

def u16(b, o): return struct.unpack_from("<H", b, o)[0]
def u32(b, o): return struct.unpack_from("<I", b, o)[0]

def sections(b):
    e = u32(b, 0x3C)
    n = u16(b, e + 6)
    opt = e + 24
    so = opt + u16(b, e + 20)
    out = []
    for i in range(n):
        o = so + i * 40
        out.append({
            "name": b[o:o+8].rstrip(b"\x00").decode("latin1"),
            "vsize": u32(b, o+8), "va": u32(b, o+12),
            "rawsize": u32(b, o+16), "ptr": u32(b, o+20)})
    return out

def rva2off(secs, rva):
    for s in secs:
        if s["va"] <= rva < s["va"] + max(s["vsize"], s["rawsize"]):
            d = rva - s["va"]
            if d < s["rawsize"]:
                return s["ptr"] + d
            return None
    return None

def cstr(b, o):
    e = b.index(b"\x00", o)
    return b[o:e], e + 1  # bytes, end offset (after NUL)

def main():
    path = sys.argv[1]
    b = open(path, "rb").read()
    secs = sections(b)
    e = u32(b, 0x3C)
    opt = e + 24
    imp_rva = u32(b, opt + 96 + 1*8)   # IMPORT dir
    iat_rva = u32(b, opt + 96 + 12*8)  # IAT dir
    imp_sz  = u32(b, opt + 96 + 1*8 + 4)
    iat_sz  = u32(b, opt + 96 + 12*8 + 4)
    print(f"IMPORT dir rva=0x{imp_rva:X} size=0x{imp_sz:X}  fileoff=0x{rva2off(secs, imp_rva):X}")
    print(f"IAT    dir rva=0x{iat_rva:X} size=0x{iat_sz:X}  fileoff=0x{rva2off(secs, iat_rva):X}")

    # walk descriptors
    off = rva2off(secs, imp_rva)
    descs = []
    i = 0
    while True:
        o = off + i*20
        oft, tds, fwd, name_rva, ft = struct.unpack_from("<IIIII", b, o)
        if oft == 0 and name_rva == 0 and ft == 0:
            break
        name_off = rva2off(secs, name_rva)
        name, name_end = cstr(b, name_off)
        descs.append({"i": i, "desc_off": o, "desc_rva": imp_rva + i*20,
                      "oft_rva": oft, "name_rva": name_rva, "ft_rva": ft,
                      "dll": name.decode("latin1"), "name_off": name_off,
                      "name_bytes": name.hex(), "name_end_off": name_end})
        i += 1

    print(f"\n{len(descs)} descriptors (table 0x{imp_rva:X}..0x{imp_rva + (len(descs)+1)*20:X})")
    # walk INT + hint/name for each
    hn_all = []   # (file_off, rva, hint, name, padlen)
    for d in descs:
        int_rva = d["oft_rva"] or d["ft_rva"]
        int_off = rva2off(secs, int_rva)
        funcs = []
        j = 0
        while True:
            v = u32(b, int_off + j*4)
            if v == 0: break
            if v & 0x80000000:
                funcs.append({"ordinal": v & 0xFFFF})
            else:
                hn_off = rva2off(secs, v)
                hint = u16(b, hn_off)
                nm, nm_end = cstr(b, hn_off + 2)
                pad = (-(nm_end - hn_off)) % 4  # pad to 4-byte boundary of entry start
                funcs.append({"hn_rva": v, "hn_off": hn_off, "hint": hint,
                              "name": nm.decode("latin1"), "name_len": len(nm),
                              "pad": pad})
                hn_all.append((hn_off, v, hint, nm.decode("latin1"), pad))
            j += 1
        d["funcs"] = funcs
        d["int_rva"] = int_rva
        d["int_off"] = int_off
        d["int_count"] = j

    # ---- human summary ----
    print(f"\n{'#':>2} {'DLL':16} {'INT_rva':>9} {'INT_off':>8} {'nINT':>4} {'IAT_rva':>9} {'name_rva':>9} {'name_off':>8}")
    for d in descs:
        print(f"{d['i']:>2} {d['dll']:16} 0x{d['int_rva']:07X} 0x{d['int_off']:07X} {d['int_count']:>4} 0x{d['ft_rva']:07X} 0x{d['name_rva']:07X} 0x{d['name_off']:07X}")
    # hint/name table span
    hn_sorted = sorted(hn_all)
    lo, hi = hn_sorted[0][0], hn_sorted[-1][0]
    last = hn_sorted[-1]
    hi_end = last[0] + 2 + last[3].__len__() + 1 + last[4]
    print(f"\nhint/name entries: {len(hn_all)}, file span 0x{lo:X}..0x{hi_end:X}")
    print(f"  first: hint={hn_sorted[0][2]} {hn_sorted[0][3]!r}")
    print(f"  last : hint={last[2]} {last[3]!r} pad={last[4]}")
    # dll name span
    nl = sorted((d['name_off'], d) for d in descs)
    print(f"\ndll names in file order:")
    for _, d in nl:
        print(f"  0x{d['name_off']:07X} {d['dll']}")

    if "--json" in sys.argv:
        out = sys.argv[sys.argv.index("--json")+1]
        with open(out, "w", encoding="utf-8") as f:
            json.dump({"imp_rva": imp_rva, "imp_sz": imp_sz, "iat_rva": iat_rva,
                       "iat_sz": iat_sz, "descs": descs, "sections": secs}, f, indent=1)
        print(f"\nwrote {out}")

if __name__ == "__main__":
    main()
