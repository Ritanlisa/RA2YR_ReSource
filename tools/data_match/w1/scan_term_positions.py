#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""scan_term_positions.py -- the terminator section has the same key as its DLL,
so moving it inside the block does NOT change the qsort permutation P -- but it
DOES change which array position holds which import.  Test terminator placement
variants: end (VC6 experiments), start, after-first, after-k.

Usage: python tools/data_match/w1/scan_term_positions.py
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


def simulate(sd, sizes, term_pos):
    """term_pos(dll, n) -> index in [0..n] where the terminator sits."""
    elems = []
    for d in DESC:
        n = K_M if d == "KERNEL32.dll" else sizes[d]
        t = term_pos(d, n)
        for k in range(n):
            if k == t:
                elems.append((d, None))
            elems.append((d, k))
        if t == n:
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
    per = {}
    for d in DESC:
        obs = sd[d]["orig_int"]
        pr = pred.get(d, [])
        ok = sum(1 for a, b in zip(pr, obs) if a == b)
        per[d] = ok
        hit += ok
    return hit, per


def main():
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    sizes = {d: sd[d]["n"] for d in DESC}
    variants = {
        "end": lambda d, n: n,
        "start": lambda d, n: 0,
        "after_first": lambda d, n: 1 if n > 1 else n,
        "after_half": lambda d, n: n // 2,
    }
    for name, fn in variants.items():
        hit, per = simulate(sd, sizes, fn)
        print("%-12s hit=%-3d  K=%d U=%d G=%d" % (name, hit, per["KERNEL32.dll"],
                                                  per["USER32.dll"], per["GDI32.dll"]))
    # per-DLL term position scan for K and U
    base = {d: (lambda n: n) for d in DESC}
    print("\nU term position scan (all other DLLs term at end):")
    for t in range(0, 97):
        hit, per = simulate(sd, sizes, lambda d, n, t=t: (t if d == "USER32.dll" else n))
        if hit > 250:
            print("  U term at %-3d hit=%d U=%d" % (t, hit, per["USER32.dll"]))
    print("\nK term position scan:")
    for t in list(range(0, 105)) + [50, 60, 70, 80, 90, 100]:
        hit, per = simulate(sd, sizes, lambda d, n, t=t: (t if d == "KERNEL32.dll" else n))
        if hit > 250:
            print("  K term at %-3d hit=%d K=%d" % (t, hit, per["KERNEL32.dll"]))


if __name__ == "__main__":
    main()
