#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""qsort_variants.py -- parameterized classic Microsoft qsort family, to identify
which variant produced the original gamemd.exe .idata permutation.

The classic MS qsort (VC6 libcmt, verified via qsort.obj disassembly) is:
    if size <= CUTOFF: shortsort (selection sort, max -> hi)
    else: swap(lo, lo+size/2); Hoare partition around arr[lo] with
          do loguy++ while (loguy <= hi && comp(loguy, lo) <= 0)
          do higuy-- while (higuy > lo && comp(higuy, lo) >= 0)
          swap(lo, higuy); recurse smaller / iterate larger.
Variants explore: CUTOFF, comparison strictness, pivot selection/placement,
shortsort algorithm.
"""
CUTOFF = 8


def shortsort_sel(arr, lo, hi, comp):
    while hi > lo:
        mx = lo
        for p in range(lo + 1, hi + 1):
            if comp(arr[p], arr[mx]) > 0:
                mx = p
        if mx != hi:
            arr[mx], arr[hi] = arr[hi], arr[mx]
        hi -= 1


def shortsort_ins(arr, lo, hi, comp):
    for i in range(lo + 1, hi + 1):
        x = arr[i]
        j = i - 1
        while j >= lo and comp(arr[j], x) > 0:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = x


def qsort_variant(arr, comp, cutoff=8, le=True, ge=True, pivot="mid",
                  short="sel", swap_pivot_to="lo"):
    n = len(arr)
    if n < 2:
        return arr
    stk = []
    lo, hi = 0, n - 1
    shortsort = shortsort_sel if short == "sel" else shortsort_ins
    while True:
        size = hi - lo + 1
        if size <= cutoff:
            shortsort(arr, lo, hi, comp)
            if not stk:
                return arr
            lo, hi = stk.pop()
            continue
        if pivot == "mid":
            pi = lo + size // 2
        elif pivot == "first":
            pi = lo
        elif pivot == "last":
            pi = hi
        else:  # median of three
            a, b, c = lo, lo + size // 2, hi
            # sort a,b,c by comp, pick median
            if comp(arr[a], arr[b]) > 0:
                a, b = b, a
            if comp(arr[b], arr[c]) > 0:
                b, c = c, b
            if comp(arr[a], arr[b]) > 0:
                a, b = b, a
            pi = b
        target = lo if swap_pivot_to == "lo" else hi
        if pi != target:
            arr[pi], arr[target] = arr[target], arr[pi]
        if swap_pivot_to == "lo":
            loguy = lo
            higuy = hi + 1
            while True:
                while True:
                    loguy += 1
                    if not (loguy <= hi and (comp(arr[loguy], arr[lo]) <= 0 if le else comp(arr[loguy], arr[lo]) < 0)):
                        break
                while True:
                    higuy -= 1
                    if not (higuy > lo and (comp(arr[higuy], arr[lo]) >= 0 if ge else comp(arr[higuy], arr[lo]) > 0)):
                        break
                if higuy < loguy:
                    break
                arr[loguy], arr[higuy] = arr[higuy], arr[loguy]
            if higuy != lo:
                arr[lo], arr[higuy] = arr[higuy], arr[lo]
            left_hi = higuy - 1
            right_lo = loguy
        else:
            loguy = lo - 1
            higuy = hi
            while True:
                while True:
                    loguy += 1
                    if not (loguy < hi and (comp(arr[loguy], arr[hi]) <= 0 if le else comp(arr[loguy], arr[hi]) < 0)):
                        break
                while True:
                    higuy -= 1
                    if not (higuy > lo and (comp(arr[higuy], arr[hi]) >= 0 if ge else comp(arr[higuy], arr[hi]) > 0)):
                        break
                if higuy < loguy:
                    break
                arr[loguy], arr[higuy] = arr[higuy], arr[loguy]
            if higuy != hi:
                arr[hi], arr[higuy] = arr[higuy], arr[hi]
            left_hi = higuy
            right_lo = loguy + 1
        # iterate larger or smaller: the tree is the same, but stack order
        # (pivot-left/right) does not change the final permutation
        lsz = left_hi - lo + 1
        rsz = hi - right_lo + 1
        if lsz > rsz:
            if lsz > 1:
                stk.append((lo, left_hi))
            if rsz <= 1:
                if not stk:
                    return arr
                lo, hi = stk.pop()
                continue
            lo = right_lo
        else:
            if rsz > 1:
                stk.append((right_lo, hi))
            if lsz <= 1:
                if not stk:
                    return arr
                lo, hi = stk.pop()
                continue
            hi = left_hi
