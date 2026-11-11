#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""infer_qsort_dfs.py -- bounded DFS reconstruction of the partition tree from
the observed permutation P, using the classic MS partition template.

If a full path exists, the classic template (with *some* pivot sequence) can
explain the observed INT order, and the pivot sequence reveals the rule.
If the DFS fails early, the template's partition behaviour differs.

Usage: python tools/data_match/w1/infer_qsort_dfs.py [--self] [--budget N]
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


def shortsort(cur, keys, lo, hi):
    while hi > lo:
        mx = lo
        for p in range(lo + 1, hi + 1):
            if keys[cur[p]] > keys[cur[mx]]:
                mx = p
        cur[mx], cur[hi] = cur[hi], cur[mx]
        hi -= 1


class Solver:
    def __init__(self, keys, P, budget=200000):
        self.keys = keys
        self.P = P
        self.nodes = 0
        self.budget = budget
        self.deepest = 0
        self.pivots = []
        self.found = False

    def partition(self, cur, lo, hi, pi):
        cur[lo], cur[pi] = cur[pi], cur[lo]
        pv = self.keys[cur[lo]]
        loguy = lo
        higuy = hi + 1
        while True:
            while True:
                loguy += 1
                if loguy > hi:
                    break
                if not (self.keys[cur[loguy]] - pv <= 0):
                    break
            while True:
                higuy -= 1
                if higuy <= lo:
                    break
                if not (self.keys[cur[higuy]] - pv >= 0):
                    break
            if higuy < loguy:
                break
            cur[loguy], cur[higuy] = cur[higuy], cur[loguy]
        cur[lo], cur[higuy] = cur[higuy], cur[lo]
        return higuy, loguy

    def solve(self, cur, lo, hi, out, path, depth=0):
        if self.found:
            return True
        self.nodes += 1
        if self.nodes > self.budget:
            return False
        if depth > self.deepest:
            self.deepest = depth
        size = hi - lo + 1
        if size <= 8:
            cc = cur[:]
            shortsort(cc, self.keys, lo, hi)
            if cc[lo:hi + 1] == out:
                self.found = True
                self.pivots = path[:]
                return True
            return False
        cands = []
        mid = lo + size // 2
        order = [mid] + [p for p in range(lo, hi + 1) if p != mid]
        for pi in order:
            cc = cur[:]
            higuy, loguy = self.partition(cc, lo, hi, pi)
            m = loguy - higuy
            if m <= 0 or m > len(out):
                continue
            midseq = cc[higuy:loguy]
            k = None
            for kk in range(len(out) - m + 1):
                if out[kk:kk + m] == midseq:
                    k = kk
                    break
            if k is None:
                continue
            if set(out[:k]) == set(cc[lo:higuy]) and set(out[k + m:]) == set(cc[loguy:hi + 1]):
                cands.append((pi, higuy, loguy, k, cc))
        # prefer the mid-pivot candidate first
        for pi, higuy, loguy, k, cc in cands:
            m = loguy - higuy
            path.append((depth, lo, hi, pi))
            if self.solve(cc, lo, higuy - 1, out[:k], path, depth + 1):
                return True
            if self.solve(cc, loguy, hi, out[k + m:], path, depth + 1):
                return True
            path.pop()
        return False


def main():
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    elems, keys = build_array(sd)
    P = build_output_perm(sd, elems)
    if "--self" in sys.argv:
        from ms_qsort_old import permute
        P = permute(keys)
        print("self-test with VC6 model permutation")
    budget = 200000
    if "--budget" in sys.argv:
        budget = int(sys.argv[sys.argv.index("--budget") + 1])
    s = Solver(keys, P, budget)
    ok = s.solve(list(range(len(keys))), 0, len(keys) - 1, P, [])
    print("result:", ok, "nodes:", s.nodes, "deepest level:", s.deepest)
    if ok:
        print("pivot path (depth, lo, hi, pivot):")
        for row in s.pivots[:40]:
            print("  ", row)


if __name__ == "__main__":
    main()
