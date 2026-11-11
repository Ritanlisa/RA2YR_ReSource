#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
predict_test2.py -- validate the cracked INT/IAT permutation mechanism on the
full 371-slot test2 dataset.

Mechanism: LINK 6.0 sorts the .idata$4 / .idata$5 section list by DLL name with
the *system MSVCRT.dll* qsort.  All sections of one DLL compare equal, so the
result is msvcrt's equal-key permutation (<=8: rot-left-1, >=9: identity/mixed).
Per DLL the list holds (n imports + 1 special terminator section).

Usage: python predict_test2.py [objs_dir]
Requires the compiled oracle qs_oracle2.exe next to this script.
"""
import json, os, subprocess, sys

W1 = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))
DM = os.path.join(ROOT, ".omo", "agents", "datamatch")
ORACLE = os.path.join(W1, "qs_oracle2.exe")

# library command-line order used for test2 (see build_variants.cmd)
LIB_ORDER = ["KERNEL32.dll", "USER32.dll", "GDI32.dll", "ADVAPI32.dll", "SHELL32.dll",
             "ole32.dll", "OLEAUT32.dll", "WINMM.dll", "WSOCK32.dll", "DDRAW.dll",
             "DSOUND.dll", "VERSION.dll", "COMCTL32.dll", "IMM32.dll", "binkw32.dll"]


def oracle(cases):
    inp = [str(len(cases))]
    for keys in cases:
        inp.append(str(len(keys)) + " " + " ".join(str(k) for k in keys))
    p = subprocess.run([ORACLE], input="\n".join(inp) + "\n", capture_output=True, text=True)
    out = []
    for line in p.stdout.strip().splitlines():
        n, rest = line.split(":")
        out.append([int(x) for x in rest.split(",")] if rest else [])
    return out


def main():
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    # sort keys: DLL name strings in C strcmp order (byte-wise)
    names = sorted(LIB_ORDER, key=lambda s: s.encode("latin1"))
    rank = {d: i for i, d in enumerate(names)}
    keys = []
    blocks = []
    base = 0
    for d in LIB_ORDER:
        n = sd[d]["n"]
        keys += [rank[d]] * (n + 1)   # n imports + 1 special terminator section
        blocks.append((d, n, base))
        base += n + 1
    perm = oracle([keys])[0]
    assert len(perm) == len(keys), (len(perm), len(keys))
    hit = tot = 0
    for d, n, b in blocks:
        ids = [i for i in perm if b <= i < b + n + 1]
        imp = [i - b for i in ids if i < b + n]
        obs = sd[d]["t2_int"]
        ok = sum(1 for a, x in zip(imp, obs) if a == x)
        hit += ok
        tot += n
        print("%-14s n=%-3d match %d/%d  pred[:8]=%s" % (d, n, ok, n, imp[:8]))
    print("TOTAL %d / %d = %.4f" % (hit, tot, hit / tot))
    return 0 if hit == tot else 1


if __name__ == "__main__":
    sys.exit(main())
