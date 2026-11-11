#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""scan_block_orders.py -- scan candidate block orders (and adjacent swaps) with
the VC6 qsort model, array sizes fixed (K first 103+term, K late 59).

Usage: python tools/data_match/w1/scan_block_orders.py
"""
import json
import os
import sys

W1 = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(W1))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))

from ms_qsort_old import permute  # noqa: E402

DM = os.path.join(ROOT, ".omo", "agents", "datamatch")
DESC = ["KERNEL32.dll", "USER32.dll", "GDI32.dll", "ADVAPI32.dll", "SHELL32.dll",
        "ole32.dll", "OLEAUT32.dll", "WINMM.dll", "WSOCK32.dll", "DDRAW.dll",
        "DSOUND.dll", "VERSION.dll", "COMCTL32.dll", "IMM32.dll", "binkw32.dll"]
K_M = 103


def simulate(sd, sizes, order, late_pos=None):
    elems = []
    for d in order:
        n = K_M if d == "KERNEL32.dll" else sizes[d]
        for k in range(n):
            elems.append((d, k))
        elems.append((d, None))
    for k in range(K_M, sizes["KERNEL32.dll"]):
        elems.append(("KERNEL32.dll", k))
    names = sorted({e[0] for e in elems}, key=lambda s: s.encode("latin1"))
    rank = {d: i for i, d in enumerate(names)}
    perm = permute([rank[e[0]] for e in elems])
    pred = {}
    for p in perm:
        d, k = elems[p]
        if k is not None:
            pred.setdefault(d, []).append(k)
    hit = 0
    for d in DESC:
        obs = sd[d]["orig_int"]
        pr = pred.get(d, [])
        hit += sum(1 for a, b in zip(pr, obs) if a == b)
    return hit


def main():
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    sizes = {d: sd[d]["n"] for d in DESC}
    cand = {
        "desc": DESC,
        "alpha": sorted(DESC, key=lambda s: s.encode("latin1")),
        "rev_desc": DESC[::-1],
        "rev_alpha": sorted(DESC, key=lambda s: s.encode("latin1"))[::-1],
        "desc_ku_swapped": [DESC[1], DESC[0]] + DESC[2:],
    }
    for name, order in cand.items():
        print("%-16s %d/371" % (name, simulate(sd, sizes, order)))
    print("\nadjacent swaps of descriptor order:")
    res = []
    for i in range(len(DESC) - 1):
        order = DESC[:]
        order[i], order[i + 1] = order[i + 1], order[i]
        hit = simulate(sd, sizes, order)
        res.append((hit, i, i + 1))
    res.sort(reverse=True)
    for hit, i, j in res[:8]:
        print("  swap %s<->%s : %d/371" % (DESC[i], DESC[j], hit))


if __name__ == "__main__":
    main()
