#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""diff_tree.py -- find the first partition node where the observed output is
inconsistent with the VC6-model qsort tree.

Walks the VC6 model's partition tree; for each node (range [lo,hi], pivot pi,
partition result higuy/loguy) checks whether the observed output slice is
consistent with that split (left set = prefix, middle zone verbatim, right set =
suffix).  The first inconsistent node marks where the original's qsort diverged
from the VC6 implementation.

Usage: python tools/data_match/w1/diff_tree.py
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
    return elems, [rank[e[0]] for e in elems]


def build_output_perm(sd, elems):
    pos, terms = {}, {}
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


def qsort_trace(cur, keys, lo, hi, out, trace, depth=0):
    """VC6 qsort; at each node verify the observed output slice is consistent."""
    size = hi - lo + 1
    if size <= 8:
        # shortsort leaf
        cc = cur[:]
        while hi > lo:
            mx = lo
            for p in range(lo + 1, hi + 1):
                if keys[cc[p]] > keys[cc[mx]]:
                    mx = p
            cc[mx], cc[hi] = cc[hi], cc[mx]
            hi -= 1
        ok = cc == out
        trace.append(dict(kind="leaf", lo=lo, hi=hi, depth=depth, ok=ok,
                          cur=cur[:], out=out[:], sorted=cc))
        return ok
    mid = lo + size // 2
    cur[lo], cur[mid] = cur[mid], cur[lo]
    pv = keys[cur[lo]]
    loguy = lo
    higuy = hi + 1
    while True:
        while True:
            loguy += 1
            if loguy > hi:
                break
            if not (keys[cur[loguy]] - pv <= 0):
                break
        while True:
            higuy -= 1
            if higuy <= lo:
                break
            if not (keys[cur[higuy]] - pv >= 0):
                break
        if higuy < loguy:
            break
        cur[loguy], cur[higuy] = cur[higuy], cur[loguy]
    cur[lo], cur[higuy] = cur[higuy], cur[lo]
    m = loguy - higuy
    midseq = cur[higuy:loguy]
    k = None
    for kk in range(len(out) - m + 1):
        if out[kk:kk + m] == midseq:
            k = kk
            break
    ok_mid = k is not None
    ok_left = ok_mid and set(out[:k]) == set(cur[lo:higuy])
    ok_right = ok_mid and set(out[k + m:]) == set(cur[loguy:hi + 1])
    node_ok = ok_mid and ok_left and ok_right
    trace.append(dict(kind="node", lo=lo, hi=hi, size=size, depth=depth, pivot=mid,
                      higuy=higuy, loguy=loguy, mzone=m,
                      ok=node_ok, ok_mid=ok_mid, ok_left=ok_left, ok_right=ok_right,
                      key=pv))
    if not node_ok:
        return False
    lres = qsort_trace(cur, keys, lo, higuy - 1, out[:k], trace, depth + 1)
    rres = qsort_trace(cur, keys, loguy, hi, out[k + m:], trace, depth + 1)
    return lres and rres


def main():
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    elems, keys = build_array(sd)
    P = build_output_perm(sd, elems)
    cur = list(range(len(keys)))
    trace = []
    ok = qsort_trace(cur, keys, 0, len(keys) - 1, P, trace)
    print("model tree consistent with observed output:", ok)
    bad = [t for t in trace if not t["ok"]]
    if bad:
        t = bad[0]
        print("first inconsistent node:")
        for kk, vv in t.items():
            if kk in ("cur", "out"):
                continue
            print("   %s = %s" % (kk, vv))
        # show which elements differ
        print("   node ok flags:", {kk: t[kk] for kk in ("ok_mid", "ok_left", "ok_right")})
    else:
        leaves = [t for t in trace if t["kind"] == "leaf"]
        print("all nodes consistent; leaves:", len(leaves))


if __name__ == "__main__":
    main()
