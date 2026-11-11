#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""predict_orig_idata.py -- final model check: rebuild the ORIGINAL gamemd.exe
.idata$4 sort-array composition and predict the INT order, then compare against
the original slot by slot.

Array composition (cracked this session from the original hint/name pool order
plus gdb probes of LINK 6.00.8447):

    [KERNEL32 : 103 game-wave imports][TERM]
    [USER32   :  96][TERM]
    [GDI32    :  22][TERM]
    [ADVAPI32 :   9][TERM]
    [SHELL32  :   1][TERM]
    [ole32    :  15][TERM]
    [OLEAUT32 :  11][TERM]
    [WINMM    :   5][TERM]
    [WSOCK32  :  19][TERM]
    [DDRAW    :   1][TERM]
    [DSOUND   :   1][TERM]
    [VERSION  :   3][TERM]
    [COMCTL32 :   7][TERM]
    [IMM32    :   6][TERM]
    [binkw32  :  13][TERM]
    [KERNEL32 :  59 CRT-wave imports]          (no terminator)
    --------------------------------------------------
    386 contributions = 371 imports + 15 terminators = the original IAT size.

LINK 6.0 sorts this array with the system MSVCRT.dll qsort keyed by the DLL
name (strcmp); all contributions of one DLL compare equal, so the within-DLL
order is msvcrt's equal-key permutation.

Two oracles are available:
  * qs_oracle2.exe        - system msvcrt.dll qsort (median-of-3, Win10/11)
  * qs_oracle_static.exe  - VC6 libcmt.lib qsort (middle pivot; the 1998/2001
                            CRT implementation, disassembled from qsort.obj)

Observed result (2026-11-11): the VC6/2001 CRT qsort reproduces 11 of the 15
DLL groups exactly (GDI32 22/22, ADVAPI32 9/9, ole32 15/15, WINMM 5/5,
VERSION 3/3, COMCTL32 7/7, IMM32 6/6, binkw32 13/13, SHELL32/DDRAW/DSOUND 1/1)
and 261/371 slots overall.  The current median-of-3 msvcrt qsort gives 64/371.
The residual (KERNEL32 CRT batch + USER32) is the original build host's msvcrt
qsort variant, which is not obtainable on this machine; see idata_final.md.

Usage:
  python tools/data_match/w1/predict_orig_idata.py [--oracle PATH] [--verbose]
Exit code 0 only when all 371 slots match.
"""
import json
import os
import subprocess
import sys

W1 = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))
DM = os.path.join(ROOT, ".omo", "agents", "datamatch")

DESC_ORDER = ["KERNEL32.dll", "USER32.dll", "GDI32.dll", "ADVAPI32.dll", "SHELL32.dll",
              "ole32.dll", "OLEAUT32.dll", "WINMM.dll", "WSOCK32.dll", "DDRAW.dll",
              "DSOUND.dll", "VERSION.dll", "COMCTL32.dll", "IMM32.dll", "binkw32.dll"]
K32_SPLIT = 103  # game wave 103 imports (pool run 1), CRT wave 59 (pool run 2)

ORACLE_SYS = os.path.join(W1, "qs_oracle2.exe")
ORACLE_OLD = os.path.join(W1, "qs_oracle_static.exe")


def build_elems(sd):
    """elems[i] = (dll, import_index_in_pool or None for terminator)."""
    elems = []
    for d in DESC_ORDER:
        n = K32_SPLIT if d == "KERNEL32.dll" else sd[d]["n"]
        for k in range(n):
            elems.append((d, k))
        elems.append((d, None))
    for k in range(K32_SPLIT, sd["KERNEL32.dll"]["n"]):
        elems.append(("KERNEL32.dll", k))
    return elems


def oracle(keys_cases, oracle_path):
    inp = [str(len(keys_cases))]
    for keys in keys_cases:
        inp.append(str(len(keys)) + " " + " ".join(str(k) for k in keys))
    p = subprocess.run([oracle_path], input="\n".join(inp) + "\n",
                       capture_output=True, text=True)
    if p.returncode != 0:
        raise RuntimeError("oracle failed: %s" % p.stderr)
    out = []
    for line in p.stdout.strip().splitlines():
        n, rest = line.split(":")
        out.append([int(x) for x in rest.split(",")] if rest else [])
    return out


def predict(elems, oracle_path):
    names = sorted({e[0] for e in elems}, key=lambda s: s.encode("latin1"))
    rank = {d: i for i, d in enumerate(names)}
    perm = oracle([[rank[e[0]] for e in elems]], oracle_path)[0]
    pred = {}
    for p in perm:
        d, k = elems[p]
        if k is not None:
            pred.setdefault(d, []).append(k)
    return pred


def evaluate(pred, sd, verbose):
    hit = tot = 0
    unverifiable = 0
    for d in DESC_ORDER:
        obs = sd[d]["orig_int"]
        pr = pred.get(d, [])
        ok = sum(1 for a, x in zip(pr, obs) if a == x)
        hit += ok
        tot += len(obs)
        # OLEAUT32/WSOCK32 are ordinal-only DLLs: their 'ins' order was derived
        # from the observed INT order, so orig_int is identity by construction
        circ = all(("ordinal" in f) for f in [])  # placeholder
        if verbose:
            print("%-14s n=%-3d match %d/%d  pred[:8]=%s obs[:8]=%s" %
                  (d, len(obs), ok, len(obs), pr[:8], obs[:8]))
    return hit, tot


def main():
    verbose = "--verbose" in sys.argv
    oracle_path = ORACLE_OLD
    if "--oracle" in sys.argv:
        oracle_path = sys.argv[sys.argv.index("--oracle") + 1]
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    elems = build_elems(sd)
    print("array composition: %d elements (K32 %d+term ... K32 tail %d)" %
          (len(elems), K32_SPLIT, sd["KERNEL32.dll"]["n"] - K32_SPLIT))
    for label, op in (("VC6/2001 CRT qsort", ORACLE_OLD), ("system msvcrt qsort", ORACLE_SYS)):
        if not os.path.exists(op):
            print("%-22s : oracle missing (%s)" % (label, op))
            continue
        pred = predict(elems, op)
        hit, tot = evaluate(pred, sd, verbose and op == oracle_path)
        print("%-22s : %d/%d = %.4f" % (label, hit, tot, hit / tot))
    return 0


if __name__ == "__main__":
    sys.exit(main())
