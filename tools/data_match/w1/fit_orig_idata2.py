#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""fit_orig_idata2.py -- second-generation fitter for the ORIGINAL gamemd .idata
INT order, using the faithful VC6-era qsort model (ms_qsort_old) and allowing
"extra" contributions that /OPT:REF drops from the final IAT/INT but which are
still present in the sort array (proven on e2.exe: array 57 elements vs output
52 slots; without /OPT:REF the output has 57).

Array model:
  round 1: per-DLL block in library order (= descriptor order), n imports + term
  round 2: KERNEL32 CRT imports appended at the end
  plus optional extra (dropped) contributions appended to a block.

Usage: python tools/data_match/w1/fit_orig_idata2.py [--scan]
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


def build(k_m, u_n, k_late, extras=(), order=DESC, sizes=None):
    """elems: list of (dll, imp_index or None) ; None = terminator or dropped extra.
    extras: iterable of (dll, count, 'first'|'late') - dropped contributions."""
    sizes = sizes or {}
    ex_first = {}
    ex_late = {}
    for d, c, where in extras:
        if where == "first":
            ex_first[d] = ex_first.get(d, 0) + c
        else:
            ex_late[d] = ex_late.get(d, 0) + c
    elems = []
    idx = {}
    for d in order:
        n = sizes[d]
        n1 = k_m if d == "KERNEL32.dll" else n
        for k in range(n1):
            elems.append((d, k))
        for _ in range(ex_first.get(d, 0)):
            elems.append((d, None))
        elems.append((d, None))  # terminator
    # later round: K32 remaining + extras
    base = k_m
    for k in range(base, base + k_late):
        elems.append(("KERNEL32.dll", k))
    for _ in range(ex_late.get("KERNEL32.dll", 0)):
        elems.append(("KERNEL32.dll", None))
    return elems


def evaluate(elems, sd):
    keys = []
    rank_names = sorted({e[0] for e in elems}, key=lambda s: s.encode("latin1"))
    rank = {d: i for i, d in enumerate(rank_names)}
    keys = [rank[e[0]] for e in elems]
    perm = permute(keys)
    pred = {}
    for p in perm:
        d, k = elems[p]
        if k is not None:
            pred.setdefault(d, []).append(k)
    hit = 0
    tot = 0
    per = {}
    for d in DESC:
        obs = sd[d]["orig_int"]
        pr = pred.get(d, [])
        ok = sum(1 for a, b in zip(pr, obs) if a == b)
        per[d] = (ok, len(obs), pr)
        hit += ok
        tot += len(obs)
    return hit, tot, per


def main():
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    sizes = {d: sd[d]["n"] for d in DESC}
    best = []
    for e in range(0, 80):
        elems = build(103, 96, 59, extras=[("KERNEL32.dll", e, "late")], sizes=sizes)
        hit, tot, per = evaluate(elems, sd)
        best.append((hit, e))
    best.sort(reverse=True)
    print("K-late extras scan (m=103):")
    for hit, e in best[:10]:
        print("  e=%-3d %d/371 = %.4f" % (e, hit, hit / 371))


if __name__ == "__main__":
    main()
