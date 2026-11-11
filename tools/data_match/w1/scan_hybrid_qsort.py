#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""scan_hybrid_qsort.py -- hybrid variants between the VC6 middle-pivot qsort and
the VC7 median-of-3 + three-way-partition qsort, tested against the original
gamemd INT order with the established array structure.

Variants:
  vc6            : middle pivot, VC6 Hoare partition, selection shortsort
  vc6_eqphase    : middle pivot, VC6 partition + VC7 "equals" consolidation
  vc7_mid        : VC7 three-way partition but pivot = middle (no median-of-3)
  vc7_last       : VC7 three-way partition with pivot = hi
  vc7_mid_eq     : VC7 partition, middle pivot, equals phase to lo side
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
CUTOFF = 8


def shortsort(arr, lo, hi):
    while hi > lo:
        mx = lo
        for p in range(lo + 1, hi + 1):
            if arr[p][0] > arr[mx][0]:
                mx = p
        arr[mx], arr[hi] = arr[hi], arr[mx]
        hi -= 1


def qsort_hybrid(arr, variant):
    n = len(arr)
    if n < 2:
        return
    stk = []
    lo, hi = 0, n - 1
    while True:
        size = hi - lo + 1
        if size <= CUTOFF:
            shortsort(arr, lo, hi)
            if not stk:
                return
            lo, hi = stk.pop()
            continue
        mid = lo + size // 2
        if variant == "vc6" or variant == "vc6_eqphase":
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
            left = (lo, higuy - 1)
            right = (loguy, hi)
            if variant == "vc6_eqphase":
                # move elements equal to the pivot next to it
                p = loguy
                q = higuy + 1
                # consolidate equals from the left side: scan [lo+1..higuy-1]
                # toward the pivot (simplified VC7-style, from the pivot out)
                pass
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
        else:
            # VC7-style three-way partition
            if variant == "vc7_last":
                # sort lo/mid/hi then pivot = hi
                if arr[lo][0] > arr[mid][0]:
                    arr[lo], arr[mid] = arr[mid], arr[lo]
                if arr[lo][0] > arr[hi][0]:
                    arr[lo], arr[hi] = arr[hi], arr[lo]
                if arr[mid][0] > arr[hi][0]:
                    arr[mid], arr[hi] = arr[hi], arr[mid]
                piv = hi
            else:
                piv = mid
            pv = arr[piv][0]
            loguy = lo
            higuy = hi
            while True:
                if piv > loguy:
                    while True:
                        loguy += 1
                        if not (loguy < piv and arr[loguy][0] <= pv):
                            break
                if piv <= loguy:
                    while True:
                        loguy += 1
                        if not (loguy <= hi and arr[loguy][0] <= pv):
                            break
                while True:
                    higuy -= 1
                    if not (higuy > piv and arr[higuy][0] > pv):
                        break
                if higuy < loguy:
                    break
                arr[loguy], arr[higuy] = arr[higuy], arr[loguy]
                if piv == higuy:
                    piv = loguy
            higuy += 1
            if piv < higuy:
                while True:
                    higuy -= 1
                    if not (higuy > piv and arr[higuy][0] == pv):
                        break
            if piv >= higuy:
                while True:
                    higuy -= 1
                    if not (higuy > lo and arr[higuy][0] == pv):
                        break
            left = (lo, higuy)
            right = (loguy, hi)
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

    for variant in ("vc6", "vc7_mid", "vc7_last"):
        arr = [(k, i) for i, k in enumerate(keys)]
        qsort_hybrid(arr, variant)
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
        print("%-10s %d/371  K=%d U=%d G=%d" % (variant, hit, per["KERNEL32.dll"],
                                                per["USER32.dll"], per["GDI32.dll"]))


if __name__ == "__main__":
    main()
