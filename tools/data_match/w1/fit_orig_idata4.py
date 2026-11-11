#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""fit_orig_idata4.py -- stage-2 fit: allow per-DLL wave splits.

The .idata$4/.idata$5 sort array is built in resolution order: per scan round,
per library.  The hint/name pool does NOT reveal wave boundaries (it groups per
DLL descriptor), so a DLL can contribute several blocks to the sort array while
its pool run stays contiguous.  Only KERNEL32 shows a split pool group
(103 + 59) -- possibly a second descriptor.

This script scans split points for USER32/GDI32/... with the VC6-era qsort
model, keeping the K split at 103+59.

Usage: python tools/data_match/w1/fit_orig_idata4.py [--scan U|G|A|...] [--pos afterK|end|beforeK]
"""
import json
import os
import sys

W1 = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(W1))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))

from ms_qsort_old import permute  # noqa: E402

DM = os.path.join(ROOT, ".omo", "agents", "datamatch")
DESC = ["KERNEL32.dll", "USER32.dll", "GDI32.dll", "ADVAPI32.dll", "SHELL32.dll",
        "ole32.dll", "OLEAUT32.dll", "WINMM.dll", "WSOCK32.dll", "DDRAW.dll",
        "DSOUND.dll", "VERSION.dll", "COMCTL32.dll", "IMM32.dll", "binkw32.dll"]

SD = {}
SIZES = {}
K_M = 103
K_LATE = 59


def build(splits, late_order=("KERNEL32.dll",)):
    """splits: {dll: n_first}, late blocks appended in late_order (each gets
    the remaining imports of that dll).  Round-1 blocks in DESC order."""
    elems = []
    idx = {}
    for d in DESC:
        n1 = splits.get(d, SIZES[d] if d != "KERNEL32.dll" else K_M)
        for k in range(n1):
            elems.append((d, k))
        elems.append((d, None))  # terminator
        idx[d] = n1
    for d in late_order:
        n = SIZES[d]
        for k in range(idx.get(d, K_M), n):
            elems.append((d, k))
    return elems


def evaluate(elems):
    names = sorted({e[0] for e in elems}, key=lambda s: s.encode("latin1"))
    rank = {d: i for i, d in enumerate(names)}
    perm = permute([rank[e[0]] for e in elems])
    pred = {}
    for p in perm:
        d, k = elems[p]
        if k is not None:
            pred.setdefault(d, []).append(k)
    hit = 0
    per = {}
    for d in DESC:
        obs = SD[d]["orig_int"]
        pr = pred.get(d, [])
        ok = sum(1 for a, b in zip(pr, obs) if a == b)
        per[d] = (ok, len(obs))
        hit += ok
    return hit, per


def main():
    global SD, SIZES
    SD = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    SIZES = {d: SD[d]["n"] for d in DESC}

    # baselines
    base = {"KERNEL32.dll": K_M}
    hit, per = evaluate(build(base))
    print("baseline (K split 103+59): %d/371" % hit)
    for d in DESC:
        if per[d][0] != per[d][1]:
            print("   %-14s %d/%d" % (d, per[d][0], per[d][1]))

    print("\n=== USER32 split scan (U late block before K late) ===")
    res = []
    for u1 in range(0, 97):
        splits = {"KERNEL32.dll": K_M, "USER32.dll": u1}
        hit, per = evaluate(build(splits, late_order=("USER32.dll", "KERNEL32.dll")))
        res.append((hit, u1, per["USER32.dll"][0]))
    res.sort(reverse=True)
    for hit, u1, u in res[:8]:
        print("  u1=%-3d hit=%-3d U=%d/96" % (u1, hit, u))

    print("\n=== USER32 split scan (U late block after K late) ===")
    res = []
    for u1 in range(0, 97):
        splits = {"KERNEL32.dll": K_M, "USER32.dll": u1}
        hit, per = evaluate(build(splits, late_order=("KERNEL32.dll", "USER32.dll")))
        res.append((hit, u1, per["USER32.dll"][0]))
    res.sort(reverse=True)
    for hit, u1, u in res[:8]:
        print("  u1=%-3d hit=%-3d U=%d/96" % (u1, hit, u))


if __name__ == "__main__":
    main()
