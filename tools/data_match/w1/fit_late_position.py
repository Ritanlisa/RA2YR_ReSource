#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""fit_late_position.py -- scan the insertion position of the KERNEL32 late
(CRT) block among the round-1 DLL blocks, together with the first-block size m.

Array: [block0..block14 in descriptor order][term each], with the K late block
inserted after block index p (p=15 means at the very end).

Usage: python tools/data_match/w1/fit_late_position.py
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
    for m in list(range(95, 115)) + [162, 103]:
        for n2 in (59, 65, 53):
            for pos in range(0, 16):
                elems = []
                for i, d in enumerate(DESC):
                    n = m if d == "KERNEL32.dll" else sizes[d]
                    for k in range(n):
                        elems.append((d, k))
                    elems.append((d, None))
                    if i == pos:
                        for k in range(m, m + n2):
                            elems.append(("KERNEL32.dll", k))
                if pos == 15:
                    for k in range(m, m + n2):
                        elems.append(("KERNEL32.dll", k))
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
                results.append((hit, m, n2, pos))
                if hit == 371:
                    print("PERFECT:", results[-1])
                    return
    results.sort(reverse=True)
    for r in results[:15]:
        print("hit=%d  m=%d  late=%d  pos=%d" % r)


if __name__ == "__main__":
    main()
