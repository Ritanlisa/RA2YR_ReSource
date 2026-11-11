#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
grid_walk.py -- grid search over walk direction / chain order / key form /
char signedness for the 211-bucket table against test2 INT order.
"""
import json, os, sys, itertools
W1 = os.path.abspath(os.path.dirname(__file__))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "data_match"))
from compare_imports import parse

def mkh(signed):
    def h(name):
        v = 0
        for ch in name.encode("latin1"):
            if signed and ch > 127: ch -= 256
            v = (v * 3 + ch) & 0xFFFFFFFF
        return v
    return h

def simulate(insertion, M, h, buckets_desc, chain_fifo):
    buckets = {}
    for i, n in enumerate(insertion):
        buckets.setdefault(h(n) % M, []).append(i)   # append; head = front
    bs = sorted(buckets, reverse=buckets_desc)
    out = []
    for b in bs:
        chain = buckets[b]
        out.extend(chain if chain_fifo else reversed(chain))
    return out

def main():
    seq = json.load(open(os.path.join(ROOT, ".omo/agents/datamatch/insertion_seq.json")))
    sd = json.load(open(os.path.join(ROOT, ".omo/agents/datamatch/slot_diff.json")))
    t2 = parse(os.path.join(W1, "test2.exe"))

    # actual INT pool sequences
    INT = {}
    for d in t2["descs"]:
        dll = d["dll"]; r = sd[dll]
        idx = {t: i for i, t in enumerate(r["ins"])}
        INT[dll] = [idx[f["name"] if f["mode"] == "NAME" else "@" + str(f["ordinal"])] for f in d["funcs"]]

    def undec(sym):
        s = sym[1:] if sym.startswith("_") else sym
        return s
    keyforms = {
        "plain": lambda s: s,
        "imp": lambda s: "__imp_" + s,
        "undec": lambda s: undec(s),
        "imp_undec": lambda s: "__imp_" + undec(s),
    }
    best = []
    for kname, kf in keyforms.items():
        for signed in (True, False):
            h = mkh(signed)
            names = [kf(s) for s, d, p in seq]
            for bdesc in (False, True):
                for fifo in (False, True):
                    walk = simulate(names, 211, h, bdesc, fifo)
                    rank = {i: k for k, i in enumerate(walk)}
                    hit = tot = 0
                    for dll, int_pool in INT.items():
                        ins = [i for i, (s, dd, p) in enumerate(seq) if dd == dll]
                        pred = [seq[i][2] for i in sorted(ins, key=lambda i: rank[i])]
                        hit += sum(1 for a, b in zip(int_pool, pred) if a == b)
                        tot += len(int_pool)
                    best.append((hit, kname, signed, bdesc, fifo))
    best.sort(reverse=True)
    for hit, kname, signed, bdesc, fifo in best[:12]:
        print(f"{hit:3d}/371  key={kname:9s} signed={signed} buckets_desc={bdesc} chain_fifo={fifo}")

if __name__ == "__main__":
    main()
