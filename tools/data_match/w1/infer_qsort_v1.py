#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""infer_qsort.py -- reverse-engineer the qsort variant used to build the
ORIGINAL gamemd.exe by reconstructing the partition tree from the observed
permutation.

We know the exact sort-array composition A (386 elements, from the pool order +
per-DLL first-batch terminators; validated on small LINK experiments) and the
exact output permutation P (from the original PE's INT arrays + IAT null slots).

For the classic MS qsort template this script checks, level by level, which
pivot index could have produced the observed split; if a consistent pivot exists
at every level, the template is validated and the pivot sequence reveals the
pivot-selection rule.

Usage: python tools/data_match/w1/infer_qsort.py
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
    """-> (elems, keys) where elems[i]=(dll, imp_index or None)."""
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
    """P[out_pos] = input position, built from the observed per-DLL INT orders
    plus the IAT null slot as the last element of each DLL's output group."""
    # map (dll, imp_index) -> input position
    pos = {}
    for i, (d, k) in enumerate(elems):
        if k is not None:
            pos[(d, k)] = i
        else:
            pos.setdefault((d, None), []).append(i)
    # alphabetical output group order
    names = sorted({e[0] for e in elems}, key=lambda s: s.encode("latin1"))
    P = []
    for d in names:
        for k in sd[d]["orig_int"]:
            P.append(pos[(d, k)])
        # terminator(s): for KERNEL32 there are two TERM entries? no - one per
        # DLL in the array; K's term is the first-batch terminator
        terms = pos[(d, None)]
        P.append(terms[0])
    return P


def classic_partition(keys, lo, hi, pi, le=True, ge=True):
    """Returns (higuy, arr) after swap(lo,pi) + Hoare partition (classic MS)."""
    arr = keys[:]
    arr[lo], arr[pi] = arr[pi], arr[lo]
    pv = arr[lo]
    loguy = lo
    higuy = hi + 1
    while True:
        while True:
            loguy += 1
            if loguy > hi:
                break
            c = arr[loguy] - pv
            if not (c <= 0 if le else c < 0):
                break
        while True:
            higuy -= 1
            if higuy <= lo:
                break
            c = arr[higuy] - pv
            if not (c >= 0 if ge else c > 0):
                break
        if higuy < loguy:
            break
        arr[loguy], arr[higuy] = arr[higuy], arr[loguy]
    arr[lo], arr[higuy] = arr[higuy], arr[lo]
    return higuy, arr


def shortsort(keys, lo, hi):
    """classic shortsort on keys; returns the output position order."""
    idx = list(range(lo, hi + 1))
    vals = [keys[i] for i in idx]
    while hi - lo > 0:
        mx = 0
        for p in range(1, len(vals)):
            if vals[p] > vals[mx]:
                mx = p
        vals[mx], vals[-1] = vals[-1], vals[mx]
        idx[mx], idx[-1] = idx[-1], idx[mx]
        vals.pop()
        idx.pop()
        lo += 1
    return idx


def reconstruct(keys, P, lo, hi, out_slice, le=True, ge=True, depth=0):
    """Yield the pivot choice sequence if consistent; raise on failure."""
    size = hi - lo + 1
    if size <= 8:
        expect = shortsort(keys, lo, hi)
        if out_slice == expect:
            return []
        raise ValueError("shortsort mismatch at %d..%d: %s vs %s" % (lo, hi, out_slice, expect))
    cands = []
    for pi in range(lo, hi + 1):
        higuy, _ = classic_partition(keys, lo, hi, pi, le, ge)
        left = set(range(lo, higuy))
        right = set(range(higuy + 1, hi + 1))
        # pivot element = original position pi (after swap it travels with the
        # value but the SC pointer moves, so the pivot's identity is pi)
        try:
            k = out_slice.index(pi)
        except ValueError:
            continue
        if set(out_slice[:k]) == left and set(out_slice[k + 1:]) == right:
            cands.append((pi, higuy, k))
    if not cands:
        raise ValueError("no consistent pivot at %d..%d" % (lo, hi))
    res = []
    for pi, higuy, k in cands:
        try:
            lseq = reconstruct(keys, P, lo, higuy - 1, out_slice[:k], le, ge, depth + 1)
            rseq = reconstruct(keys, P, higuy + 1, hi, out_slice[k + 1:], le, ge, depth + 1)
        except ValueError:
            continue
        res.append(((pi, higuy), lseq, rseq))
    if not res:
        raise ValueError("recursion failed at %d..%d (cands=%d)" % (lo, hi, len(cands)))
    return res


def main():
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    elems, keys = build_array(sd)
    P = build_output_perm(sd, elems)
    print("array length", len(elems), "perm length", len(P), "unique", len(set(P)))
    assert len(elems) == 386 and len(set(P)) == 386, (len(elems), len(set(P)))
    for le in (True, False):
        for ge in (True, False):
            try:
                tree = reconstruct(keys, P, 0, 385, P, le, ge)
                print("classic template consistent: le=%s ge=%s" % (le, ge))
                # count candidates at top level
                print("  top-level candidates:", len(tree))
                return
            except ValueError as e:
                print("le=%s ge=%s -> %s" % (le, ge, e))
    print("classic template NOT consistent with the observed permutation")


if __name__ == "__main__":
    main()
