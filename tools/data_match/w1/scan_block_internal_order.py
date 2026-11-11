#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""scan_block_internal_order.py -- test candidate *internal orders* for each
DLL's sort-array block (keys all equal, so the internal order does not change
the qsort permutation but does change which import lands in which output slot).

Candidates per DLL: pool order (baseline), lib member order, hint order,
import-name order (case-sensitive / insensitive), reversed pool order.

Usage: python tools/data_match/w1/scan_block_internal_order.py
"""
import itertools
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

    # candidate order sequences (as pool indices) per DLL
    def lib_orders(dll):
        base = LIBFILE[dll]
        for k, v in libs.items():
            if k.replace("\\", "/").endswith("/%s.lib" % base):
                seq = []
                for x in v:
                    nm = x.get("import_name")
                    if nm and nm not in seq:
                        seq.append(nm)
                return seq
        return []

    def order_candidates(dll):
        ins = sd[dll]["ins"]
        n = len(ins)
        cands = {"pool": list(range(n)), "rev_pool": list(range(n - 1, -1, -1))}
        # hint / name orders derived from orig pool ordering data
        cands["name"] = sorted(range(n), key=lambda i: ins[i].encode("latin1"))
        cands["name_ci"] = sorted(range(n), key=lambda i: ins[i].lower().encode("latin1"))
        lo = lib_orders(dll)
        idx = {t: i for i, t in enumerate(ins)}
        libseq = [idx[t] for t in lo if t in idx]
        if len(libseq) == n and len(set(libseq)) == n:
            cands["lib"] = libseq
            cands["lib_rev"] = libseq[::-1]
        return cands

    # baseline simulation
    def simulate(block_orders):
        """block_orders: {dll: [pool index per array slot]}
        K's first block uses the first K_M entries, the late block the rest."""
        elems = []
        for d in DESC:
            n = K_M if d == "KERNEL32.dll" else sizes[d]
            order = block_orders[d]
            for i in range(n):
                elems.append((d, order[i]))
            elems.append((d, None))
        for i in range(K_M, sizes["KERNEL32.dll"]):
            elems.append(("KERNEL32.dll", block_orders["KERNEL32.dll"][i]))
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
            obs = sd[d]["orig_int"]
            pr = pred.get(d, [])
            ok = sum(1 for a, b in zip(pr, obs) if a == b)
            per[d] = ok
            hit += ok
        return hit, per

    base_orders = {d: list(range(sizes[d])) for d in DESC}
    hit, per = simulate(base_orders)
    print("baseline pool order: %d/371" % hit)

    # per-DLL: test each candidate independently
    for d in ("USER32.dll", "KERNEL32.dll"):
        cands = order_candidates(d)
        print("\n%s candidates:" % d)
        for name, seq in cands.items():
            orders = {x: list(range(sizes[x])) for x in DESC}
            orders[d] = seq
            hit, per = simulate(orders)
            print("   %-10s hit=%-3d  %s=%d/%d" % (name, hit, d, per[d], sizes[d]))


if __name__ == "__main__":
    main()
