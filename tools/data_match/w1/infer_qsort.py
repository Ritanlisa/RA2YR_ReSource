#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""infer_qsort.py -- reverse-engineer the qsort variant used to build the
ORIGINAL gamemd.exe by reconstructing the partition tree from the observed
permutation.

Inputs (both fully known):
  A : the 386-element sort array (pool resolution order + per-DLL first-batch
      terminators; structure validated on LINK 6.00.8447 experiments)
  P : the output permutation (original INT arrays + IAT null slots)

For a given partition template the script walks the tree: at each level it
tries every pivot index, performs the real partition on element identities and
checks whether the resulting left set / pivot / right set match the observed
output slice.  A consistent pivot at every level validates the template and
reveals the pivot-selection rule.

Usage: python tools/data_match/w1/infer_qsort.py [--self]
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


def partition_ident(keys, lo, hi, pi, le=True, ge=True):
    """Classic MS partition on identity list (`keys` is the key list).
    Returns (higuy, ids) where ids[j] = original position of the element now at j."""
    ids = list(range(len(keys)))
    ids[lo], ids[pi] = ids[pi], ids[lo]
    pv = keys[pi]
    loguy = lo
    higuy = hi + 1
    while True:
        while True:
            loguy += 1
            if loguy > hi:
                break
            c = keys[ids[loguy]] - pv
            if not (c <= 0 if le else c < 0):
                break
        while True:
            higuy -= 1
            if higuy <= lo:
                break
            c = keys[ids[higuy]] - pv
            if not (c >= 0 if ge else c > 0):
                break
        if higuy < loguy:
            break
        ids[loguy], ids[higuy] = ids[higuy], ids[loguy]
    ids[lo], ids[higuy] = ids[higuy], ids[lo]
    return higuy, ids


def shortsort_ident(keys, lo, hi):
    ids = list(range(lo, hi + 1))
    while hi > lo:
        mx = 0
        for p in range(1, len(ids)):
            if keys[ids[p]] > keys[ids[mx]]:
                mx = p
        ids[mx], ids[-1] = ids[-1], ids[mx]
        ids.pop()
        hi -= 1
    return ids


def reconstruct(keys, lo, hi, out_slice, le=True, ge=True, level=0):
    size = hi - lo + 1
    if size <= 8:
        expect = shortsort_ident(keys, lo, hi)
        if out_slice == expect:
            return []
        raise ValueError("shortsort mismatch at %d..%d" % (lo, hi))
    cands = []
    for pi in range(lo, hi + 1):
        # compute the partition AND the post-partition scan pointers
        ids = list(range(len(keys)))
        ids[lo], ids[pi] = ids[pi], ids[lo]
        pv = keys[pi]
        loguy = lo
        higuy = hi + 1
        while True:
            while True:
                loguy += 1
                if loguy > hi:
                    break
                c = keys[ids[loguy]] - pv
                if not (c <= 0 if le else c < 0):
                    break
            while True:
                higuy -= 1
                if higuy <= lo:
                    break
                c = keys[ids[higuy]] - pv
                if not (c >= 0 if ge else c > 0):
                    break
            if higuy < loguy:
                break
            ids[loguy], ids[higuy] = ids[higuy], ids[loguy]
        ids[lo], ids[higuy] = ids[higuy], ids[lo]
        # middle zone [higuy..loguy-1] is final; pivot sits at higuy
        if pi in ids[higuy:loguy]:
            k = None
            m = loguy - higuy
            for kk in range(len(out_slice) - m + 1):
                if out_slice[kk:kk + m] == ids[higuy:loguy]:
                    k = kk
                    break
            if k is None:
                continue
            left = set(ids[lo:higuy])
            right = set(ids[loguy:hi + 1])
            if set(out_slice[:k]) == left and set(out_slice[k + m:]) == right:
                cands.append((pi, higuy, loguy, k))
    if not cands:
        raise ValueError("no consistent pivot at %d..%d (level %d)" % (lo, hi, level))
    res = []
    for pi, higuy, loguy, k in cands:
        m = loguy - higuy
        try:
            lseq = reconstruct(keys, lo, higuy - 1, out_slice[:k], le, ge, level + 1)
            rseq = reconstruct(keys, loguy, hi, out_slice[k + m:], le, ge, level + 1)
        except ValueError:
            continue
        res.append((pi, lseq, rseq))
    if not res:
        raise ValueError("recursion failed at %d..%d (cands=%d)" % (lo, hi, len(cands)))
    return res


def collect_pivots(tree, out):
    if not tree:
        return
    pi, l, r = tree[0]
    out.append(pi)
    collect_pivots(l, out)
    collect_pivots(r, out)


def main():
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    elems, keys = build_array(sd)
    P = build_output_perm(sd, elems)
    print("array length", len(elems), "perm length", len(P), "unique", len(set(P)))
    assert len(elems) == 386 and len(set(P)) == 386

    if "--self" in sys.argv:
        from ms_qsort_old import permute
        P = permute(keys)
        print("self-test with VC6 model permutation")

    for le in (True, False):
        for ge in (True, False):
            try:
                tree = reconstruct(keys, 0, 385, P, le, ge)
                piv = []
                collect_pivots(tree, piv)
                print("CONSISTENT: le=%s ge=%s pivots=%d top_cands=%d" % (le, ge, len(piv), len(tree)))
                print("  first pivots:", piv[:12])
                return
            except ValueError as e:
                print("le=%s ge=%s -> %s" % (le, ge, e))
    print("classic template NOT consistent")


if __name__ == "__main__":
    main()
