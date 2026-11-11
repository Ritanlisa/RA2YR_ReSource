#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""infer_qsort_replay.py -- run the DFS reconstruction, replay the found pivot
sequence as a deterministic qsort, and dump the pivot path for rule analysis.

Usage: python tools/data_match/w1/infer_qsort_replay.py [--self]
"""
import json
import os
import sys

W1 = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(W1))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))

import infer_qsort_dfs as D  # noqa: E402


def replay(keys, pivots):
    """Replay qsort with the given pivot sequence (depth, lo, hi, pi):
    process nodes in the same recursive order (left then right)."""
    cur = list(range(len(keys)))
    by_range = {(lo, hi): pi for _, lo, hi, pi in pivots}
    out = []

    def rec(lo, hi):
        if hi - lo + 1 <= 8:
            cc = cur[:]
            # shortsort on cur in place
            while hi > lo:
                mx = lo
                for p in range(lo + 1, hi + 1):
                    if keys[cc[p]] > keys[cc[mx]]:
                        mx = p
                cc[mx], cc[hi] = cc[hi], cc[mx]
                hi -= 1
            cur[:] = cc
            out.extend(range(lo, hi + 1))
            return
        pi = by_range.get((lo, hi))
        if pi is None:
            raise ValueError("no pivot for %d..%d" % (lo, hi))
        # partition
        cur[lo], cur[pi] = cur[pi], cur[lo]
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
        rec(lo, higuy - 1)
        rec(loguy, hi)

    rec(0, len(keys) - 1)
    return cur


def main():
    sd = json.load(open(os.path.join(D.DM, "slot_diff.json"), encoding="utf-8"))
    elems, keys = D.build_array(sd)
    P = D.build_output_perm(sd, elems)
    if "--self" in sys.argv:
        from ms_qsort_old import permute
        P = permute(keys)
        print("self-test")
    s = D.Solver(keys, P, 2000000)
    ok = s.solve(list(range(len(keys))), 0, len(keys) - 1, P, [])
    print("solved:", ok, "nodes:", s.nodes)
    if not ok:
        return
    print("pivot path:")
    for row in s.pivots:
        d, lo, hi, pi = row
        size = hi - lo + 1
        print("  depth=%-2d range=%3d..%-3d size=%-3d pivot=%-3d rel=%s" %
              (d, lo, hi, size, pi, pi - lo))
    cur = replay(keys, s.pivots)
    print("replay matches observed P:", cur == P)


if __name__ == "__main__":
    main()
