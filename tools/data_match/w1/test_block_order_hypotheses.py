#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""test_block_order_hypotheses.py -- compare the recovered block internal order Q
(see solve_block_order.py) with candidate orders from the import libraries.

Candidates:
  lib_member : order of members in the .lib archive (lib_members.json)
  lib_rev    : reversed
  hint       : sorted by hint
  name       : sorted by import name (case-sensitive)
  name_ci    : sorted case-insensitively
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
K_M = 103
K_LATE = 59
LIBFILE = {"KERNEL32.dll": "kernel32", "USER32.dll": "user32", "GDI32.dll": "gdi32",
           "ADVAPI32.dll": "advapi32", "SHELL32.dll": "shell32", "ole32.dll": "ole32",
           "OLEAUT32.dll": "oleaut32", "WINMM.dll": "winmm", "WSOCK32.dll": "wsock32",
           "DDRAW.dll": "ddraw", "DSOUND.dll": "dsound", "VERSION.dll": "version",
           "COMCTL32.dll": "comctl32", "IMM32.dll": "imm32", "binkw32.dll": "binkw32"}


def main():
    sd = json.load(open(os.path.join(DM, "slot_diff.json"), encoding="utf-8"))
    libs = json.load(open(os.path.join(DM, "lib_members.json"), encoding="utf-8"))
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
    perm = permute([rank[e[0]] for e in elems])
    out_by_dll = {}
    for p in perm:
        d, k = elems[p]
        if k is not None:
            out_by_dll.setdefault(d, []).append(k)

    # lib member order per dll: list of import names (unique order)
    def lib_order(dll):
        base = LIBFILE[dll]
        for k, v in libs.items():
            if k.replace("\\", "/").endswith("/%s.lib" % base):
                order = []
                for x in v:
                    nm = x.get("import_name")
                    if nm and nm not in order:
                        order.append(nm)
                return order
        return []

    for d in ("USER32.dll", "KERNEL32.dll"):
        pred = out_by_dll[d]
        obs = sd[d]["orig_int"]
        n = len(obs)
        Q = [None] * n
        for j in range(n):
            Q[pred[j]] = obs[j]
        print("\n=== %s Q[:20] = %s" % (d, Q[:20]))
        # candidate orders expressed as pool-index sequences
        ins = sd[d]["ins"]
        idx = {t: i for i, t in enumerate(ins)}
        lo = lib_order(d)
        seq = [idx[t] for t in lo if t in idx]
        print(" lib_member n=%d  head=%s" % (len(seq), seq[:12]))
        print(" Q            n=%d  head=%s" % (len(Q), Q[:12]))


if __name__ == "__main__":
    main()
