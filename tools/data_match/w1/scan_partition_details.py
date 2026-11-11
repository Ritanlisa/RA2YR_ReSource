#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""scan_partition_details.py -- fine-grained scan of the classic Hoare-partition
details (bounds, scan order, polarity) with the VC6 shortsort and middle pivot.

Array structure fixed: K first block 103 + term, per-DLL blocks + term in
descriptor order, KERNEL32 CRT 59 appended at the end.

Usage: python tools/data_match/w1/scan_partition_details.py
"""
import itertools
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
        if mx != hi:
            arr[mx], arr[hi] = arr[hi], arr[mx]
        hi -= 1


def qsort2(arr, cutoff=8, le=True, ge=True, last_le=True, first_ge=True,
           scan_first="lo", swap_to="lo", pivot="mid"):
    n = len(arr)
    if n < 2:
        return
    stk = []
    lo, hi = 0, n - 1
    while True:
        size = hi - lo + 1
        if size <= cutoff:
            shortsort(arr, lo, hi)
            if not stk:
                return
            lo, hi = stk.pop()
            continue
        if pivot == "mid":
            pi = lo + size // 2
        elif pivot == "floor_hi":
            pi = lo + (size - 1) // 2
        else:
            pi = lo
        if swap_to == "lo":
            arr[lo], arr[pi] = arr[pi], arr[lo]
            pv = arr[lo][0]
            loguy = lo
            higuy = hi + 1

            def adv_lo(loguy):
                while True:
                    loguy += 1
                    lim = hi if last_le else hi - 1
                    if loguy > lim:
                        return loguy
                    c = arr[loguy][0] - pv
                    if not (c <= 0 if le else c < 0):
                        return loguy

            def adv_hi(higuy):
                while True:
                    higuy -= 1
                    lim = lo if first_ge else lo + 1
                    if higuy < lim:
                        return higuy
                    c = arr[higuy][0] - pv
                    if not (c >= 0 if ge else c > 0):
                        return higuy

            while True:
                if scan_first == "lo":
                    loguy = adv_lo(loguy)
                    higuy = adv_hi(higuy)
                else:
                    higuy = adv_hi(higuy)
                    loguy = adv_lo(loguy)
                if higuy < loguy:
                    break
                arr[loguy], arr[higuy] = arr[higuy], arr[loguy]
            if higuy > hi:
                higuy = hi
            if higuy < lo:
                higuy = lo
            arr[lo], arr[higuy] = arr[higuy], arr[lo]
            left_hi = higuy - 1
            right_lo = higuy + 1
            # NOTE: use the "middle zone" variant used by the VC6 code
            right_lo = loguy
        else:
            arr[hi], arr[pi] = arr[pi], arr[hi]
            pv = arr[hi][0]
            loguy = lo - 1
            higuy = hi

            def adv_lo2(loguy):
                while True:
                    loguy += 1
                    if loguy > hi:
                        return loguy
                    c = arr[loguy][0] - pv
                    if not (c <= 0 if le else c < 0):
                        return loguy

            def adv_hi2(higuy):
                while True:
                    higuy -= 1
                    if higuy <= lo:
                        return higuy
                    c = arr[higuy][0] - pv
                    if not (c >= 0 if ge else c > 0):
                        return higuy

            while True:
                if scan_first == "lo":
                    loguy = adv_lo2(loguy)
                    higuy = adv_hi2(higuy)
                else:
                    higuy = adv_hi2(higuy)
                    loguy = adv_lo2(loguy)
                if higuy < loguy:
                    break
                arr[loguy], arr[higuy] = arr[higuy], arr[loguy]
            if higuy < loguy:
                pass
            arr[hi], arr[higuy] = arr[higuy], arr[hi]
            left_hi = higuy - 1
            right_lo = loguy
        lsz = left_hi - lo + 1
        rsz = hi - right_lo + 1
        if lsz > rsz:
            if lsz > 1:
                stk.append((lo, left_hi))
            if rsz <= 1:
                if not stk:
                    return
                lo, hi = stk.pop()
                continue
            lo = right_lo
        else:
            if rsz > 1:
                stk.append((right_lo, hi))
            if lsz <= 1:
                if not stk:
                    return
                lo, hi = stk.pop()
                continue
            hi = left_hi


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

    res = []
    for combo in itertools.product((8,), (True, False), (True, False),
                                   (True, False), (True, False),
                                   ("lo", "hi"), ("lo", "hi"), ("mid", "floor_hi")):
        cutoff, le, ge, last_le, first_ge, scan_first, swap_to, pivot = combo
        arr = [(k, i) for i, k in enumerate(keys)]
        qsort2(arr, cutoff, le, ge, last_le, first_ge, scan_first, swap_to, pivot)
        pred = {}
        for kk, pos in arr:
            d, k = elems[pos]
            if k is not None:
                pred.setdefault(d, []).append(k)
        hit = 0
        for d in DESC:
            obs = sd[d]["orig_int"]
            pr = pred.get(d, [])
            hit += sum(1 for a, b in zip(pr, obs) if a == b)
        res.append((hit, combo))
    res.sort(key=lambda r: -r[0])
    for hit, combo in res[:12]:
        print("hit=%-3d %s" % (hit, combo))


if __name__ == "__main__":
    main()
