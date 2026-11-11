#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""ms_qsort_vc7.py -- faithful port of the Visual Studio .NET 2003 / uCRT qsort
(median-of-three pivot + three-way partition), for comparison with the original
gamemd INT order.

This is the implementation described by the MS CRT qsort.c that replaced the
VC6 middle-pivot version; Windows XP era msvcrt.dll may already carry it.
"""
CUTOFF = 8


def shortsort(arr, lo, hi):
    """selection sort, max -> hi (same as VC6)"""
    while hi > lo:
        mx = lo
        for p in range(lo + 1, hi + 1):
            if arr[p][0] > arr[mx][0]:
                mx = p
        arr[mx], arr[hi] = arr[hi], arr[mx]
        hi -= 1


def qsort_vc7(arr):
    n = len(arr)
    if n < 2:
        return arr
    stk = []
    lo, hi = 0, n - 1
    while True:
        size = hi - lo + 1
        if size <= CUTOFF:
            shortsort(arr, lo, hi)
            if not stk:
                return arr
            lo, hi = stk.pop()
            continue
        mid = lo + size // 2
        if arr[lo][0] > arr[mid][0]:
            arr[lo], arr[mid] = arr[mid], arr[lo]
        if arr[lo][0] > arr[hi][0]:
            arr[lo], arr[hi] = arr[hi], arr[lo]
        if arr[mid][0] > arr[hi][0]:
            arr[mid], arr[hi] = arr[hi], arr[mid]
        loguy = lo
        higuy = hi
        while True:
            if mid > loguy:
                while True:
                    loguy += 1
                    if not (loguy < mid and arr[loguy][0] <= arr[mid][0]):
                        break
            if mid <= loguy:
                while True:
                    loguy += 1
                    if not (loguy <= hi and arr[loguy][0] <= arr[mid][0]):
                        break
            while True:
                higuy -= 1
                if not (higuy > mid and arr[higuy][0] > arr[mid][0]):
                    break
            if higuy < loguy:
                break
            arr[loguy], arr[higuy] = arr[higuy], arr[loguy]
            if mid == higuy:
                mid = loguy
        higuy += 1
        if mid < higuy:
            while True:
                higuy -= 1
                if not (higuy > mid and arr[higuy][0] == arr[mid][0]):
                    break
        if mid >= higuy:
            while True:
                higuy -= 1
                if not (higuy > lo and arr[higuy][0] == arr[mid][0]):
                    break
        # now sort [lo, higuy] and [loguy, hi]
        if higuy - lo >= hi - loguy:
            if lo < higuy:
                stk.append((lo, higuy))
            if loguy < hi:
                lo = loguy
            else:
                if not stk:
                    return arr
                lo, hi = stk.pop()
        else:
            if loguy < hi:
                stk.append((loguy, hi))
            if lo < higuy:
                hi = higuy
            else:
                if not stk:
                    return arr
                lo, hi = stk.pop()


if __name__ == "__main__":
    for n in range(1, 21):
        a = [(0, i) for i in range(n)]
        qsort_vc7(a)
        print(n, [x[1] for x in a])
