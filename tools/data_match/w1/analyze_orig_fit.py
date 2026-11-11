#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""analyze_orig_fit.py -- show per-slot diff of the best structural candidate
against the original gamemd INT order, using the selected oracle.

Usage:
  set QS_ORACLE=...qs_oracle_static.exe
  python tools/data_match/w1/analyze_orig_fit.py [--m 103]
"""
import json
import os
import sys

W1 = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(W1))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))

from qs_array import build_blocks, predict  # noqa: E402

DM = os.path.join(ROOT, ".omo", "agents", "datamatch")
DESC = ["KERNEL32.dll", "USER32.dll", "GDI32.dll", "ADVAPI32.dll", "SHELL32.dll",
        "ole32.dll", "OLEAUT32.dll", "WINMM.dll", "WSOCK32.dll", "DDRAW.dll",
        "DSOUND.dll", "VERSION.dll", "COMCTL32.dll", "IMM32.dll", "binkw32.dll"]


def runs(seq):
    """compress a sequence into +/-1 monotone runs, e.g. desc(3..0)"""
    out = []
    i = 0
    while i < len(seq):
        j = i
        step = None
        while j + 1 < len(seq):
            d = seq[j + 1] - seq[j]
            if step is None:
                step = d
            if d != step:
                break
            j += 1
        if j == i:
            out.append("%d" % seq[i])
            i += 1
        else:
            kind = "asc" if step > 0 else "desc"
            out.append("%s(%d..%d)" % (kind, seq[i], seq[j]))
            i = j + 1
    return " ".join(out)


def main():
    m = 103
    if "--m" in sys.argv:
        m = int(sys.argv[sys.argv.index("--m") + 1])
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    sizes = {d: sd[d]["n"] for d in DESC}
    r1 = [(d, (m if d == "KERNEL32.dll" else sizes[d]), True) for d in DESC]
    late = [[("KERNEL32.dll", sizes["KERNEL32.dll"] - m, False)]]
    elems = build_blocks([r1] + late)
    pred = predict(elems)
    print("structure: K first block %d (+term), other DLLs full block (+term), K tail %d" %
          (m, sizes["KERNEL32.dll"] - m))
    for d in DESC:
        obs = sd[d]["orig_int"]
        pr = pred[d]
        diffs = [i for i, (a, b) in enumerate(zip(pr, obs)) if a != b]
        print("\n%-14s match %d/%d  diff_at=%s" % (d, len(obs) - len(diffs), len(obs), diffs[:40]))
        if diffs:
            print("  pred: " + runs(pr))
            print("  obs : " + runs(obs))


if __name__ == "__main__":
    main()
