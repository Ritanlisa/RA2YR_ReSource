#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""ms_qsort_old.py -- faithful Python port of the VC6 era CRT qsort
(libcmt.lib build\\intel\\mt_obj\\qsort.obj, LINK 6.00.8447 era).

Reconstructed from the disassembly of qsort.obj:
  * middle element pivot: swap(lo, lo + size/2)
  * classic Hoare partition with the pivot at lo:
        do loguy += 1 while (loguy <= hi && comp(loguy, lo) <= 0)
        do higuy -= 1 while (higuy > lo && comp(higuy, lo) >= 0)
        if higuy < loguy: break; swap(loguy, higuy)
    then swap(lo, higuy)
  * iterate the smaller partition, push the larger:
        if (higuy - lo - 1) >= (hi - loguy): push [lo, higuy-1]; lo = loguy
        else: push [loguy, hi]; hi = higuy - 1
  * partitions of size <= 8 use shortsort (selection sort, max -> end)

This reproduces the equal-key fingerprint of the old CRT (N<=8 rot-left-1,
N>=9 pivot-to-front), unlike the modern msvcrt.dll introsort.
"""
CUTOFF = 8


def _shortsort(arr, lo, hi, comp):
    while hi > lo:
        mx = lo
        for p in range(lo + 1, hi + 1):
            if comp(arr[p], arr[mx]) > 0:
                mx = p
        if mx != hi:
            arr[mx], arr[hi] = arr[hi], arr[mx]
        hi -= 1


def qsort_old(arr, comp):
    n = len(arr)
    if n < 2:
        return arr
    stk = []
    lo, hi = 0, n - 1
    while True:
        size = hi - lo + 1
        if size <= CUTOFF:
            _shortsort(arr, lo, hi, comp)
            if not stk:
                return arr
            lo, hi = stk.pop()
            continue
        mid = lo + size // 2
        if mid != lo:
            arr[lo], arr[mid] = arr[mid], arr[lo]
        loguy = lo
        higuy = hi + 1
        while True:
            while True:
                loguy += 1
                if not (loguy <= hi and comp(arr[loguy], arr[lo]) <= 0):
                    break
            while True:
                higuy -= 1
                if not (higuy > lo and comp(arr[higuy], arr[lo]) >= 0):
                    break
            if higuy < loguy:
                break
            arr[loguy], arr[higuy] = arr[higuy], arr[loguy]
        if higuy != lo:
            arr[lo], arr[higuy] = arr[higuy], arr[lo]
        if (higuy - lo - 1) >= (hi - loguy):
            if lo + 1 < higuy:
                stk.append((lo, higuy - 1))
            if loguy >= hi:
                if not stk:
                    return arr
                lo, hi = stk.pop()
                continue
            lo = loguy
        else:
            if loguy < hi:
                stk.append((loguy, hi))
            if lo + 1 >= higuy:
                if not stk:
                    return arr
                lo, hi = stk.pop()
                continue
            hi = higuy - 1


def cmp_key(a, b):
    ka = a[0]
    kb = b[0]
    if ka < kb:
        return -1
    if ka > kb:
        return 1
    return 0


def permute(keys):
    """Return out_pos -> in_pos permutation produced by the old qsort."""
    arr = [(k, i) for i, k in enumerate(keys)]
    qsort_old(arr, cmp_key)
    return [e[1] for e in arr]


if __name__ == "__main__":
    # self-check against qs_perm.txt / qs_sys_perm.txt fingerprints
    for n in range(1, 21):
        p = permute([0] * n)
        print(n, p)
