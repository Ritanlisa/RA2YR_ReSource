#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""fit_401.py -- test array structures with 15 extra elements (array length 401,
so the VC6 middle-pivot lands on array position 200 -- the pivot position the
observed permutation demands).

Variants:
  double_term   : each DLL block gets 2 terminators (n + 2)
  term_split    : one terminator at the block end + one in a second term group
  term_end_desc : 15 extra terms appended at the array end (descriptor order)
  extra_imports : 15 extra dropped import-keyed elements appended at the end

The extra elements are dropped from the predicted output (each DLL contributes
one null slot at the end of its group).

Usage: python tools/data_match/w1/fit_401.py
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


def evaluate(elems, sd, drop=lambda d, k: k is None):
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

    def make(mode):
        elems = []
        for d in DESC:
            n = K_M if d == "KERNEL32.dll" else sizes[d]
            for k in range(n):
                elems.append((d, k))
            elems.append((d, None))
            if mode == "double_term":
                elems.append((d, None))
        for k in range(K_M, sizes["KERNEL32.dll"]):
            elems.append(("KERNEL32.dll", k))
        if mode == "term_end_desc":
            for d in DESC:
                elems.append((d, None))
        elif mode == "term_end_late":
            # second terms for K only (CRT wave), then desc others?  try desc
            for d in DESC:
                elems.append((d, None))
        return elems

    for mode in ("double_term", "term_end_desc"):
        elems = make(mode)
        hit, per = evaluate(elems, sd)
        print("%-14s len=%d -> %d/371 K=%d U=%d G=%d" %
              (mode, len(elems), hit, per["KERNEL32.dll"], per["USER32.dll"], per["GDI32.dll"]))

    # second-term group placed at different positions among blocks
    print("\nterm_end_desc with second group inserted after block p:")
    base = []
    for d in DESC:
        n = K_M if d == "KERNEL32.dll" else sizes[d]
        for k in range(n):
            base.append((d, k))
        base.append((d, None))
    late = [("KERNEL32.dll", k) for k in range(K_M, sizes["KERNEL32.dll"])]
    for p in range(0, 16):
        elems = []
        idx = 0
        for i, d in enumerate(DESC):
            n = K_M if d == "KERNEL32.dll" else sizes[d]
            for k in range(n):
                elems.append((d, k))
            elems.append((d, None))
            if i == p:
                elems += late
        elems += [(d, None) for d in DESC]
        hit, per = evaluate(elems, sd)
        print("  p=%-2d len=%d -> %d" % (p, len(elems), hit))


if __name__ == "__main__":
    main()
