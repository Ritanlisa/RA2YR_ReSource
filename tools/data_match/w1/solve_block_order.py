#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""solve_block_order.py -- assuming the VC6-era qsort algorithm and the array
structure (K 103+term, per-DLL blocks, K CRT 59 tail), solve the *internal
order* Q of each DLL block that would explain the observed INT order.

If the algorithm is right, then for each DLL the observed output is
    O[j] = Q[ position_in_block of the j-th output element ]
so Q can be recovered directly.  Q == identity for a DLL means "pool order is
the block order" (our model assumption).

Usage: python tools/data_match/w1/solve_block_order.py
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
K_LATE = 59


def runs(seq):
    out = []
    i = 0
    while i < len(seq):
        j = i
        step = None
        while j + 1 < len(seq):
            d = seq[j + 1] - seq[j]
            if step is None:
                step = d
            if d != step:
                break
            j += 1
        if j == i:
            out.append("%d" % seq[i])
            i += 1
        else:
            out.append("%s(%d..%d)" % ("asc" if step > 0 else "desc", seq[i], seq[j]))
            i = j + 1
    return " ".join(out)


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
    perm = permute([rank[e[0]] for e in elems])

    # position of each (dll, import_index) in the array
    pos_of = {}
    block_index = {}
    for i, (d, k) in enumerate(elems):
        if k is not None:
            pos_of[(d, k)] = i
            block_index[i] = k  # index within the DLL's own numbering

    # per DLL: output order of array positions (imports only) and the block index
    by_dll = {}
    for p in perm:
        d, k = elems[p]
        if k is None:
            continue
        by_dll.setdefault(d, []).append(k)  # the block's element index at this output slot

    for d in DESC:
        pred = by_dll.get(d, [])
        obs = sd[d]["orig_int"]
        n = len(obs)
        # Q[i] = observed index for the output slot whose array element has block index i
        Q = [None] * n
        for j in range(n):
            Q[pred[j]] = obs[j]
        ident = Q == list(range(n))
        print("%-14s n=%-3d Q==identity: %s" % (d, n, ident))
        if not ident:
            print("   Q runs:", runs(Q))
            print("   Q[:16]:", Q[:16])


if __name__ == "__main__":
    main()
