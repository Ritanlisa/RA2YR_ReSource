#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""fit_extra_terms.py -- test the "extra terminators" hypothesis.

The DFS reconstruction of the observed permutation demands a top-level pivot at
array position 200 (the USER32 terminator), not at position 193 (the middle of
the 386-element array).  If the LINK sort array actually contains 15 extra
dropped elements (one per DLL), the array length becomes 401 and floor(401/2)
== 200 -- exactly the position of the USER32 terminator in the base layout.

This script scans: array = 386 base elements (K103+term ... K59) + 15 extra
dropped elements (terminator-keyed) at the end (or start / interleaved), with
several orderings, and reports the VC6-qsort match against the original INT
order.

Usage: python tools/data_match/w1/fit_extra_terms.py
"""
import itertools
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


def base_elems(sd):
    sizes = {d: sd[d]["n"] for d in DESC}
    elems = []
    for d in DESC:
        n = K_M if d == "KERNEL32.dll" else sizes[d]
        for k in range(n):
            elems.append((d, k))
        elems.append((d, None))
    for k in range(K_M, sizes["KERNEL32.dll"]):
        elems.append(("KERNEL32.dll", k))
    return elems


def evaluate(elems, sd):
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
    base = base_elems(sd)
    print("base length", len(base))

    orders = {
        "desc": DESC,
        "alpha": sorted(DESC, key=lambda s: s.encode("latin1")),
        "rev_desc": DESC[::-1],
    }
    for name, order in orders.items():
        extras = [(d, None) for d in order]
        for where in ("end", "start"):
            arr = base + extras if where == "end" else extras + base
            hit, per = evaluate(arr, sd)
            print("extras=%s %s len=%d -> %d/371 K=%d U=%d G=%d" %
                  (name, where, len(arr), hit, per["KERNEL32.dll"],
                   per["USER32.dll"], per["GDI32.dll"]))

    # also try a second full set of 15 terms from a second qsort list order:
    # [K103][U96]...[B13][K59] + [terms in the *array append* order]
    print("\nscan extra count N=0..20 (desc order, at end):")
    for n in range(0, 21):
        extras = [(DESC[i % 15], None) for i in range(n)]
        arr = base + extras
        hit, per = evaluate(arr, sd)
        print("  n=%-3d len=%-3d %d/371 K=%d U=%d" % (n, len(arr), hit,
                                                      per["KERNEL32.dll"], per["USER32.dll"]))


if __name__ == "__main__":
    main()
