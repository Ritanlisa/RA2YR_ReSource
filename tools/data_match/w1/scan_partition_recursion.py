#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""scan_partition_recursion.py -- classic partition with *standard* recursion
(no untouched middle zone), plus other recursion-range variants, against the
original gamemd INT order.

The VC6 qsort leaves [higuy..loguy-1] untouched and recurses on [lo, higuy-1]
and [loguy, hi].  A plain textbook Hoare variant recurses on [lo, higuy-1] and
[higuy+1, hi].  Both are plausible; this script tests them.

Usage: python tools/data_match/w1/scan_partition_recursion.py
"""
import json
import os
import sys

W1 = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(W1))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))

DM = os.path.join(ROOT, ".omo", "agents", "datamatch")
DESC = ["KERNEL32.dll", "USER32.dll", "GDI32.dll", "ADVAPI32.dll", "SHELL32.dll",
        "ole32.dll", "OLEAUT32.dll", "WINMM.dll", "WSOCK32.dll", "DDRAW.dll",
        "DSOUND.dll", "VERSION.dll", "COMCTL32.dll", "IMM32.dll", "binkw32.dll"]
K_M = 103


def shortsort(arr, lo, hi):
    while hi > lo:
        mx = lo
        for p in range(lo + 1, hi + 1):
            if arr[p][0] > arr[mx][0]:
                mx = p
        arr[mx], arr[hi] = arr[hi], arr[mx]
        hi -= 1


def qsort_v(arr, mode, cutoff=8):
    stk = []
    lo, hi = 0, len(arr) - 1
    while True:
        size = hi - lo + 1
        if size <= cutoff:
            shortsort(arr, lo, hi)
            if not stk:
                return
            lo, hi = stk.pop()
            continue
        mid = lo + size // 2
        arr[lo], arr[mid] = arr[mid], arr[lo]
        pv = arr[lo][0]
        loguy = lo
        higuy = hi + 1
        while True:
            while True:
                loguy += 1
                if loguy > hi:
                    break
                if not (arr[loguy][0] <= pv):
                    break
            while True:
                higuy -= 1
                if higuy <= lo:
                    break
                if not (arr[higuy][0] >= pv):
                    break
            if higuy < loguy:
                break
            arr[loguy], arr[higuy] = arr[higuy], arr[loguy]
        arr[lo], arr[higuy] = arr[higuy], arr[lo]
        if mode == "vc6":
            left = (lo, higuy - 1)
            right = (loguy, hi)
        elif mode == "std":
            left = (lo, higuy - 1)
            right = (higuy + 1, hi)
        elif mode == "std_hi":
            left = (lo, higuy)
            right = (higuy + 1, hi)
        else:
            raise ValueError(mode)
        lsz = left[1] - left[0] + 1
        rsz = right[1] - right[0] + 1
        if lsz > rsz:
            if lsz > 1:
                stk.append(left)
            if rsz <= 1:
                if not stk:
                    return
                lo, hi = stk.pop()
                continue
            lo, hi = right
        else:
            if rsz > 1:
                stk.append(right)
            if lsz <= 1:
                if not stk:
                    return
                lo, hi = stk.pop()
                continue
            lo, hi = left


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
    for mode in ("vc6", "std", "std_hi"):
        arr = [(k, i) for i, k in enumerate(keys)]
        qsort_v(arr, mode)
        pred = {}
        for kk, pos in arr:
            d, k = elems[pos]
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
        print("%-7s %d/371 K=%d U=%d G=%d" % (mode, hit, per["KERNEL32.dll"],
                                               per["USER32.dll"], per["GDI32.dll"]))


if __name__ == "__main__":
    main()
