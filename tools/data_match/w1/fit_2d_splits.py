#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""fit_2d_splits.py -- joint scan of KERNEL32 and USER32 first-batch sizes with
the VC6 qsort model (late batches appended at the end in library order).

Usage: python tools/data_match/w1/fit_2d_splits.py [--quick]
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


def main():
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    sizes = {d: sd[d]["n"] for d in DESC}
    rank_names = sorted(DESC, key=lambda s: s.encode("latin1"))
    rank = {d: i for i, d in enumerate(rank_names)}
    best = []
    for m in range(0, 163):
        for u1 in range(0, 97):
            elems = []
            for d in DESC:
                n = m if d == "KERNEL32.dll" else (u1 if d == "USER32.dll" else sizes[d])
                for k in range(n):
                    elems.append((d, k))
                elems.append((d, None))
            for k in range(m, sizes["KERNEL32.dll"]):
                elems.append(("KERNEL32.dll", k))
            for k in range(u1, sizes["USER32.dll"]):
                elems.append(("USER32.dll", k))
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
            best.append((hit, m, u1))
    best.sort(reverse=True)
    for row in best[:15]:
        print("hit=%d  K_first=%d  U_first=%d" % row)


if __name__ == "__main__":
    main()
