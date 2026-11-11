#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""fit_extras_joint.py -- joint scan of KERNEL32 first/late block sizes and
/OPT:REF-dropped extras.

Model: array = [K block1: n1 survivors + e1 dropped extras + TERM] + [other DLL
blocks] + [K block2: n2 survivors + e2 dropped extras at the end], with
n1 + n2 = 162 (surviving imports, in pool/resolution order).

Only the block sizes (m = n1+e1, l = n2+e2) affect the qsort permutation; the
survivor mapping uses n1 for block1 and n2 for block2.

Usage: python tools/data_match/w1/fit_extras_joint.py
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
    results = []
    for n1 in range(60, 163):
        n2 = 162 - n1
        for e1 in range(0, 9):
            for e2 in range(0, 9):
                m = n1 + e1
                l = n2 + e2
                elems = []
                # K block 1: survivors pool[0..n1-1] + extras
                for k in range(n1):
                    elems.append(("KERNEL32.dll", k))
                for _ in range(e1):
                    elems.append(("KERNEL32.dll", None))
                elems.append(("KERNEL32.dll", None))  # terminator
                for d in DESC[1:]:
                    for k in range(sizes[d]):
                        elems.append((d, k))
                    elems.append((d, None))
                for k in range(n1, 162):
                    elems.append(("KERNEL32.dll", k))
                for _ in range(e2):
                    elems.append(("KERNEL32.dll", None))
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
                results.append((hit, n1, e1, e2, m, l))
                if hit == 371:
                    print("PERFECT:", results[-1])
                    return
    results.sort(reverse=True)
    for r in results[:15]:
        print("hit=%d n1=%d e1=%d e2=%d (m=%d,l=%d)" % r)


if __name__ == "__main__":
    main()
