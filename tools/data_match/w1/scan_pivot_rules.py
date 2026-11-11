#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""scan_pivot_rules.py -- test classic-MS-qsort pivot selection variants against
the original gamemd INT order (array structure fixed: K 103+term, other DLLs
full+term, K CRT 59 appended).

Pivot formulas tested (all with the VC6 shortsort / Hoare partition):
  floor   : lo + size//2               (VC6 libcmt)
  ceil    : lo + (size+1)//2
  dec     : lo + (size-1)//2
  last    : hi
  first   : lo
  med3    : median of (lo, mid, hi)
  med3_t  : median of 3 only when size >= threshold else mid
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
K_LATE = 59


def cmp_keys(a, b):
    ka, kb = a[0], b[0]
    return -1 if ka < kb else (1 if ka > kb else 0)


def shortsort(arr, lo, hi):
    while hi > lo:
        mx = lo
        for p in range(lo + 1, hi + 1):
            if arr[p][0] > arr[mx][0]:
                mx = p
        if mx != hi:
            arr[mx], arr[hi] = arr[hi], arr[mx]
        hi -= 1


def qsort_with_pivot_rule(arr, rule, cutoff=8):
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
        mid = lo + size // 2
        if rule == "floor":
            pi = mid
        elif rule == "ceil":
            pi = lo + (size + 1) // 2
        elif rule == "dec":
            pi = lo + (size - 1) // 2
        elif rule == "last":
            pi = hi
        elif rule == "first":
            pi = lo
        elif rule == "med3":
            a, b, c = lo, mid, hi
            if arr[a][0] > arr[b][0]:
                a, b = b, a
            if arr[b][0] > arr[c][0]:
                b, c = c, b
            if arr[a][0] > arr[b][0]:
                a, b = b, a
            pi = b
        elif rule.startswith("med3_"):
            t = int(rule.split("_")[1])
            if size < t:
                pi = mid
            else:
                a, b, c = lo, mid, hi
                if arr[a][0] > arr[b][0]:
                    a, b = b, a
                if arr[b][0] > arr[c][0]:
                    b, c = c, b
                if arr[a][0] > arr[b][0]:
                    a, b = b, a
                pi = b
        else:
            raise ValueError(rule)
        arr[lo], arr[pi] = arr[pi], arr[lo]
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
        lsz = higuy - lo
        rsz = hi - loguy + 1
        if lsz >= rsz:
            if lsz > 1:
                stk.append((lo, higuy - 1))
            if loguy >= hi:
                if not stk:
                    return
                lo, hi = stk.pop()
                continue
            lo = loguy
        else:
            if rsz > 1:
                stk.append((loguy, hi))
            if higuy <= lo + 1:
                if not stk:
                    return
                lo, hi = stk.pop()
                continue
            hi = higuy - 1


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

    rules = ["floor", "ceil", "dec", "last", "first", "med3"] + \
            ["med3_%d" % t for t in (10, 12, 16, 20, 24, 32, 40, 50, 64, 100, 128, 200)]
    res = []
    for rule in rules:
        arr = [(k, i) for i, k in enumerate(keys)]
        qsort_with_pivot_rule(arr, rule)
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
        res.append((hit, rule))
    res.sort(reverse=True)
    for hit, rule in res:
        print("%-10s %d/371 = %.4f" % (rule, hit, hit / 371))


if __name__ == "__main__":
    main()
