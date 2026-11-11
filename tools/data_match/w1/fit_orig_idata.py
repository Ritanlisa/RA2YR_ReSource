#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""fit_orig_idata.py -- fit the qsort-array composition of the ORIGINAL gamemd.exe.

Mechanism (R8, link_order_final.md + this session's gdb probes of LINK 6.00.8447):
  * LINK builds ONE pointer array of the output section's contributions
    (.idata$4 and .idata$5 sorted separately, same layout): one 4-byte thunk
    section per imported symbol, plus one terminator section (chars
    0xc0300040) per DLL member when its first import is resolved;
  * array order = append order = scan rounds x library scan order:
      round 1: library by library (command-line order), block = (all pending
               imports of that DLL) + terminator;
      later rounds: new per-DLL blocks appended at the END, no terminator;
  * the array is sorted by system MSVCRT.dll qsort on the DLL name string
    (case-sensitive strcmp).  Equal keys -> msvcrt's positional permutation.

This script searches the unknown structural parameters of the ORIGINAL link:
    * the size of the KERNEL32 first block (pool shows game wave 103 + CRT 59),
    * which DLLs get an extra later-round block and where it is appended,
    * the library order.
and evaluates each candidate against slot_diff.json's orig_int (371 slots).

Usage: python tools/data_match/w1/fit_orig_idata.py [--verbose] [--top N]
"""
import itertools
import json
import os
import sys

W1 = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(W1))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))

from qs_array import build_blocks, predict  # noqa: E402

DM = os.path.join(ROOT, ".omo", "agents", "datamatch")

DESC_ORDER = ["KERNEL32.dll", "USER32.dll", "GDI32.dll", "ADVAPI32.dll", "SHELL32.dll",
              "ole32.dll", "OLEAUT32.dll", "WINMM.dll", "WSOCK32.dll", "DDRAW.dll",
              "DSOUND.dll", "VERSION.dll", "COMCTL32.dll", "IMM32.dll", "binkw32.dll"]


def evaluate(pred, sd):
    hit = 0
    tot = 0
    per = {}
    for d in DESC_ORDER:
        obs = sd[d]["orig_int"]
        pr = pred.get(d, [])
        ok = sum(1 for a, x in zip(pr, obs) if a == x)
        per[d] = (ok, len(obs), pr, obs)
        hit += ok
        tot += len(obs)
    return hit, tot, per


def build_rounds(order, sizes, first_sizes=None, late=None):
    """first_sizes: dict dll->n imports in round 1 (default all).
    late: list of rounds; each round = list of (dll, n) appended, no terminators."""
    first_sizes = first_sizes or {}
    r1 = []
    for d in order:
        n1 = first_sizes.get(d, sizes[d])
        r1.append((d, n1, True))
    rounds = [r1]
    if late:
        for rnd in late:
            rounds.append([(d, n, False) for d, n in rnd])
    return build_blocks(rounds)


def main():
    verbose = "--verbose" in sys.argv
    topn = 5
    if "--top" in sys.argv:
        topn = int(sys.argv[sys.argv.index("--top") + 1])
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    sizes = {d: sd[d]["n"] for d in DESC_ORDER}

    results = []

    def run(tag, elems):
        pred = predict(elems)
        hit, tot, per = evaluate(pred, sd)
        results.append((hit, tot, tag, per))
        return hit, tot

    # --- 1. baseline: single round, blocks in descriptor order -------------
    run("single_round_desc", build_rounds(DESC_ORDER, sizes))

    # --- 2. K32 split at m, remainder appended as one late block ----------
    for m in range(0, sizes["KERNEL32.dll"] + 1):
        late = [[("KERNEL32.dll", sizes["KERNEL32.dll"] - m)]]
        elems = build_rounds(DESC_ORDER, sizes, {"KERNEL32.dll": m}, late)
        run("k32split_m%d" % m, elems)

    results.sort(key=lambda r: -r[0])
    print("=== top candidates ===")
    for hit, tot, tag, per in results[:topn]:
        print("%-24s %d/%d = %.4f" % (tag, hit, tot, hit / tot))
    if verbose:
        hit, tot, tag, per = results[0]
        print("\n=== detail for %s ===" % tag)
        for d in DESC_ORDER:
            ok, n, pr, obs = per[d]
            print("%-14s %d/%d pred[:8]=%s obs[:8]=%s" % (d, ok, n, pr[:8], obs[:8]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
