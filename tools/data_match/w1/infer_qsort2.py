#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""infer_qsort.py -- reverse-engineer the qsort variant used to build the
ORIGINAL gamemd.exe by reconstructing the partition tree from the observed
permutation.

The reconstruction carries the *current array arrangement* through the
recursion (the classic MS qsort partitions the current subarray; the elements
of the middle zone [higuy..loguy-1] are already final).

Usage: python tools/data_match/w1/infer_qsort.py [--self] [--all]
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


def build_array(sd):
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
    return elems, keys


def build_output_perm(sd, elems):
    pos = {}
    terms = {}
    for i, (d, k) in enumerate(elems):
        if k is not None:
            pos[(d, k)] = i
        else:
            terms.setdefault(d, []).append(i)
    names = sorted({e[0] for e in elems}, key=lambda s: s.encode("latin1"))
    P = []
    for d in names:
        for k in sd[d]["orig_int"]:
            P.append(pos[(d, k)])
        P.append(terms[d][0])
    return P


def partition(cur, keys, lo, hi, pi, le=True, ge=True):
    """Classic MS partition in place on cur[lo..hi]; pivot referenced at pi.
    Returns (higuy, loguy)."""
    cur[lo], cur[pi] = cur[pi], cur[lo]
    pv = keys[cur[lo]]
    loguy = lo
    higuy = hi + 1
    while True:
        while True:
            loguy += 1
            if loguy > hi:
                break
            c = keys[cur[loguy]] - pv
            if not (c <= 0 if le else c < 0):
                break
        while True:
            higuy -= 1
            if higuy <= lo:
                break
            c = keys[cur[higuy]] - pv
            if not (c >= 0 if ge else c > 0):
                break
        if higuy < loguy:
            break
        cur[loguy], cur[higuy] = cur[higuy], cur[loguy]
    cur[lo], cur[higuy] = cur[higuy], cur[lo]
    return higuy, loguy


def shortsort(cur, keys, lo, hi):
    while hi > lo:
        mx = lo
        for p in range(lo + 1, hi + 1):
            if keys[cur[p]] > keys[cur[mx]]:
                mx = p
        cur[mx], cur[hi] = cur[hi], cur[mx]
        hi -= 1


def reconstruct(cur, keys, lo, hi, out_slice, le=True, ge=True, level=0, first_only=True):
    size = hi - lo + 1
    if size <= 8:
        cc = cur[:]
        shortsort(cc, keys, lo, hi)
        if cc[lo:hi + 1] == out_slice:
            return [(None, None, cur[:])]
        raise ValueError("shortsort mismatch at %d..%d" % (lo, hi))
    cands = []
    for pi in range(lo, hi + 1):
        cc = cur[:]
        higuy, loguy = partition(cc, keys, lo, hi, pi, le, ge)
        m = loguy - higuy
        if m <= 0 or m > len(out_slice):
            continue
        mid = cc[higuy:loguy]
        k = None
        for kk in range(len(out_slice) - m + 1):
            if out_slice[kk:kk + m] == mid:
                k = kk
                break
        if k is None:
            continue
        if set(out_slice[:k]) == set(cc[lo:higuy]) and set(out_slice[k + m:]) == set(cc[loguy:hi + 1]):
            cands.append((pi, higuy, loguy, k, cc))
            if first_only:
                break
    if not cands:
        raise ValueError("no consistent pivot at %d..%d (level %d)" % (lo, hi, level))
    res = []
    for pi, higuy, loguy, k, cc in cands:
        m = loguy - higuy
        try:
            lseq = reconstruct(cc, keys, lo, higuy - 1, out_slice[:k], le, ge, level + 1, first_only)
            rseq = reconstruct(cc, keys, loguy, hi, out_slice[k + m:], le, ge, level + 1, first_only)
        except ValueError:
            continue
        res.append((pi, higuy, loguy, k, lseq, rseq))
    if not res:
        raise ValueError("recursion failed at %d..%d (cands=%d)" % (lo, hi, len(cands)))
    return res


def collect(tree, out, level=0):
    if not tree:
        return
    pi, higuy, loguy, k, l, r = tree[0]
    out.append((level, pi))
    collect(l, out, level + 1)
    collect(r, out, level + 1)


def main():
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    elems, keys = build_array(sd)
    P = build_output_perm(sd, elems)
    print("array length", len(elems), "perm length", len(P), "unique", len(set(P)))
    assert len(elems) == 386 and len(set(P)) == 386

    if "--self" in sys.argv:
        from ms_qsort_old import permute
        P = permute(keys)
        print("self-test: using VC6 model permutation")

    for le in (True, False):
        for ge in (True, False):
            try:
                tree = reconstruct(list(range(386)), keys, 0, 385, P, le, ge)
                piv = []
                collect(tree, piv)
                print("CONSISTENT le=%s ge=%s  pivots=%d" % (le, ge, len(piv)))
                # print the pivot index rule samples
                shown = [(lvl, pi) for lvl, pi in piv if pi is not None][:16]
                print("  first pivots (level,index):", shown)
                return
            except ValueError as e:
                print("le=%s ge=%s -> %s" % (le, ge, e))
    print("classic template NOT consistent")


if __name__ == "__main__":
    main()
