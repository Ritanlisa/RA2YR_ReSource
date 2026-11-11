#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""scan_qsort_variants.py -- try classic-MS-qsort parameter variants against the
original gamemd INT order with the validated array structure
(K first block 103+term, other DLLs full blocks+term in descriptor order,
KERNEL32 CRT block 59 appended at the end).

Usage: python tools/data_match/w1/scan_qsort_variants.py
"""
import itertools
import json
import os
import sys

W1 = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(W1))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))

from qsort_variants import qsort_variant  # noqa: E402

DM = os.path.join(ROOT, ".omo", "agents", "datamatch")
DESC = ["KERNEL32.dll", "USER32.dll", "GDI32.dll", "ADVAPI32.dll", "SHELL32.dll",
        "ole32.dll", "OLEAUT32.dll", "WINMM.dll", "WSOCK32.dll", "DDRAW.dll",
        "DSOUND.dll", "VERSION.dll", "COMCTL32.dll", "IMM32.dll", "binkw32.dll"]
K_M = 103
K_LATE = 59


def cmp_keys(a, b):
    ka, kb = a[0], b[0]
    return -1 if ka < kb else (1 if ka > kb else 0)


def main():
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    sizes = {d: sd[d]["n"] for d in DESC}
    elems = []
    for d in DESC:
        n = K_M if d == "KERNEL32.dll" else sizes[d]
        for k in range(n):
            elems.append((d, k))
        elems.append((d, None))
    for k in range(K_M, sizes["KERNEL32.dll"]):
        elems.append(("KERNEL32.dll", k))

    names = sorted({e[0] for e in elems}, key=lambda s: s.encode("latin1"))
    rank = {d: i for i, d in enumerate(names)}
    keys = [rank[e[0]] for e in elems]

    results = []
    for cutoff, le, ge, pivot, short, sw in itertools.product(
            (4, 6, 7, 8, 9, 12, 16), (True, False), (True, False),
            ("mid", "first", "last", "median3"), ("sel", "ins"), ("lo", "hi")):
        arr = [(k, i) for i, k in enumerate(keys)]
        try:
            qsort_variant(arr, cmp_keys, cutoff=cutoff, le=le, ge=ge, pivot=pivot,
                          short=short, swap_pivot_to=sw)
        except Exception:
            continue
        pred = {}
        for j, (kk, pos) in enumerate(arr):
            d, k = elems[pos]
            if k is not None:
                pred.setdefault(d, []).append(k)
        hit = 0
        for d in DESC:
            obs = sd[d]["orig_int"]
            pr = pred.get(d, [])
            hit += sum(1 for a, b in zip(pr, obs) if a == b)
        results.append((hit, cutoff, le, ge, pivot, short, sw))

    results.sort(key=lambda r: -r[0])
    print("top 15 variants (structure = K103+term, U..., K59):")
    for r in results[:15]:
        print("  hit=%-3d cutoff=%-2d le=%d ge=%d pivot=%-8s short=%-3s swap=%s" % r)


if __name__ == "__main__":
    main()
