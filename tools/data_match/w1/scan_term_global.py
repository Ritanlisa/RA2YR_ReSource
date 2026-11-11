#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""scan_term_global.py -- test global terminator placements: all terms at the
start, all at the end, per-DLL at end (baseline), and terms of a DLL moved to
the array end.

The terminator key equals its DLL key, so moving a term inside its own block is
invisible to qsort; moving it across other keys changes the key sequence.

Usage: python tools/data_match/w1/scan_term_global.py
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


def simulate(sd, sizes, mode):
    elems = []
    terms = []
    for d in DESC:
        n = K_M if d == "KERNEL32.dll" else sizes[d]
        for k in range(n):
            elems.append((d, k))
        if mode in ("end_block", "block_terms_end"):
            elems.append((d, None))
        else:
            terms.append((d, None))
    for k in range(K_M, sizes["KERNEL32.dll"]):
        elems.append(("KERNEL32.dll", k))
    if mode == "start_all":
        elems = terms + elems
    elif mode == "end_all":
        elems = elems + terms
    elif mode == "block_terms_end":
        elems = elems + terms
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
    for mode in ("end_block", "start_all", "end_all"):
        hit, per = simulate(sd, sizes, mode)
        print("%-12s hit=%-3d K=%d U=%d G=%d" % (mode, hit, per["KERNEL32.dll"],
                                                  per["USER32.dll"], per["GDI32.dll"]))


if __name__ == "__main__":
    main()
