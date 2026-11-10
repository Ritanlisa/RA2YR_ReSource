#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
extract_rdata_strings.py -- extract NUL-terminated printable ASCII strings from
a PE's .rdata (or any named section), with file offset / RVA / length.
Also reports runs of adjacent strings (dense string blocks).

Usage: python extract_rdata_strings.py <exe> [--section .rdata] [--minlen 4]
       [--json out.json] [--runs]
"""
import sys, struct, json

def u16(b, o): return struct.unpack_from("<H", b, o)[0]
def u32(b, o): return struct.unpack_from("<I", b, o)[0]

def sections(b):
    e = u32(b, 0x3C); n = u16(b, e + 6)
    so = e + 24 + u16(b, e + 20)
    return [{"name": b[o:o+8].rstrip(b"\x00").decode("latin1"),
             "vsize": u32(b,o+8), "va": u32(b,o+12),
             "rawsize": u32(b,o+16), "ptr": u32(b,o+20)}
            for o in (so + i*40 for i in range(n))]

def is_printable_run(bs):
    return all(0x20 <= c < 0x7F for c in bs)

def main():
    path = sys.argv[1]
    secname = ".rdata"
    minlen = 4
    if "--section" in sys.argv:
        secname = sys.argv[sys.argv.index("--section")+1]
    if "--minlen" in sys.argv:
        minlen = int(sys.argv[sys.argv.index("--minlen")+1])
    b = open(path, "rb").read()
    secs = sections(b)
    s = next(x for x in secs if x["name"] == secname)
    lo, hi = s["ptr"], s["ptr"] + s["rawsize"]
    data = b[lo:hi]
    strings = []
    i = 0
    while i < len(data):
        j = i
        while j < len(data) and 0x20 <= data[j] < 0x7F:
            j += 1
        if j < len(data) and data[j] == 0 and (j - i) >= minlen:
            strings.append({"off": lo + i, "rva": s["va"] + i,
                            "len": j - i,
                            "s": data[i:j].decode("latin1")})
        i = j + 1
    print(f"{secname}: va=0x{s['va']:X} raw=0x{s['rawsize']:X} @0x{s['ptr']:X}")
    print(f"{len(strings)} strings >= {minlen} chars, total {sum(x['len']+1 for x in strings)} bytes")
    # dense runs: adjacent strings (gap == 0 or 1..3 pad bytes)
    if "--runs" in sys.argv:
        runs = []
        cur = [strings[0]]
        for a, nxt in zip(strings, strings[1:]):
            gap = nxt["off"] - (a["off"] + a["len"] + 1)
            if gap <= 3:
                cur.append(nxt)
            else:
                runs.append(cur)
                cur = [nxt]
        runs.append(cur)
        runs.sort(key=lambda r: -(r[-1]["off"] + r[-1]["len"] - r[0]["off"]))
        print(f"{len(runs)} runs; top 12 dense blocks:")
        for r in runs[:12]:
            span = r[-1]["off"] + r[-1]["len"] + 1 - r[0]["off"]
            print(f"  0x{r[0]['off']:X}..0x{r[-1]['off']+r[-1]['len']+1:X} span={span:5} count={len(r):3} first={r[0]['s'][:28]!r}")
    if "--json" in sys.argv:
        out = sys.argv[sys.argv.index("--json")+1]
        json.dump({"section": s, "strings": strings}, open(out, "w"), indent=1)
        print("wrote", out)

if __name__ == "__main__":
    main()
