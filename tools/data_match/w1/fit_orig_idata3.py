#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""fit_orig_idata3.py -- scan extra (/OPT:REF-dropped) contributions per block.

The sort array carries contributions for import symbols referenced by code that
/OPT:REF later eliminates; those are dropped from the final IAT/INT but still
participate in the msvcrt qsort.  This script scans how many extras sit in each
per-DLL block (they increase the block size, keeping the same key).

Usage: python tools/data_match/w1/fit_orig_idata3.py
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

K_M = 103          # KERNEL32 imports in the first wave (pool run 1)
K_LATE = 59        # KERNEL32 imports in the CRT wave (pool run 2)
SIZES = {}


def build(e_first, e_late):
    """e_first/e_late: dict dll->extra count (dropped contributions).
    Layout: [blocks in library order: n imports + extras + TERM] + [K late + extras]."""
    elems = []
    for d in DESC:
        n = K_M if d == "KERNEL32.dll" else SIZES[d]
        for k in range(n):
            elems.append((d, k))
        for _ in range(e_first.get(d, 0)):
            elems.append((d, None))
        elems.append((d, None))
    for k in range(K_M, K_M + K_LATE):
        elems.append(("KERNEL32.dll", k))
    for _ in range(e_late.get("KERNEL32.dll", 0)):
        elems.append(("KERNEL32.dll", None))
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
        per[d] = (ok, len(obs))
        hit += ok
    return hit, per


def main():
    global SIZES
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    SIZES = {d: sd[d]["n"] for d in DESC}

    # single-block extras scan
    print("=== extras in one block at a time ===")
    for target in ("KERNEL32.dll", "USER32.dll", "GDI32.dll", "ADVAPI32.dll", "ole32.dll"):
        res = []
        for e in range(0, 25):
            hit, per = evaluate(build({target: e}, {}), sd)
            res.append((hit, e, per[target][0]))
        res.sort(reverse=True)
        print("%-14s top: %s" % (target, res[:4]))

    # GDI extras are interesting: 22 might hide some
    print("\n=== extras in GDI32 with detail ===")
    for e in range(0, 12):
        hit, per = evaluate(build({"GDI32.dll": e}, {}), sd)
        print("  e=%d hit=%d gdi=%d/%d" % (e, hit, per["GDI32.dll"][0], per["GDI32.dll"][1]))


if __name__ == "__main__":
    main()
