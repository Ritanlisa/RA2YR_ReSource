#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
verify_model.py -- validate the cracked LINK symbol table model against
test2's INT order:
    hash(name) = (h*3 + c) mod 2^32, bucket = hash % 211   [0x411DF0]
    table: 211 buckets, HEAD-INSERT chains  [0x411E80]
    walk: bucket ascending, chain head->tail (LIFO)
Test key sets: plain extern names vs __imp__ names.
"""
import json, os, sys
W1 = os.path.abspath(os.path.dirname(__file__))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "data_match"))
from compare_imports import parse

def h3(name):
    h = 0
    for ch in name.encode("latin1"):
        # movsx: signed char
        if ch > 127: ch -= 256
        h = (h * 3 + ch) & 0xFFFFFFFF
    return h

def bucket_of(name, M=211):
    # div ecx is UNSIGNED div of the accumulated (wrapped) eax
    return h3(name) % M

def simulate_walk(insertion, M=211):
    """insertion: list of names in order. Returns walk order (indices)."""
    buckets = {}
    for i, n in enumerate(insertion):
        b = bucket_of(n, M)
        buckets.setdefault(b, []).insert(0, i)   # head insert
    out = []
    for b in sorted(buckets):
        out.extend(buckets[b])
    return out

def main():
    seq = json.load(open(os.path.join(ROOT, ".omo/agents/datamatch/insertion_seq.json")))
    sd = json.load(open(os.path.join(ROOT, ".omo/agents/datamatch/slot_diff.json")))
    t2 = parse(os.path.join(W1, "test2.exe"))

    # build global insertion name lists
    plain_names = [s for s, d, p in seq]
    # __imp_ names: sym _X@N -> __imp__X@N (double underscore for stdcall),
    # for cdecl (_X) -> __imp__X? VC6 convention: __imp_ + decorated name
    # _FindClose@4 -> __imp__FindClose@4  (strip leading underscore, add __imp__ + _)
    def imp_name(sym):
        assert sym.startswith("_")
        return "__imp_" + sym
    imp_names = [imp_name(s) for s in plain_names]

    for label, names in [("plain", plain_names), ("__imp_", imp_names)]:
        print(f"\n=== key = {label} names ===")
        walk = simulate_walk(names)
        pos_in_walk = {i: k for k, i in enumerate(walk)}  # insertion idx -> walk rank
        total = hit = 0
        for d in t2["descs"]:
            dll = d["dll"]
            r = sd[dll]
            idx2pool = {t: i for i, t in enumerate(r["ins"])}
            # actual INT (pool idx)
            INT_pool = []
            for f in d["funcs"]:
                t = f["name"] if f["mode"] == "NAME" else "@" + str(f["ordinal"])
                INT_pool.append(idx2pool[t])
            # predicted: walk order filtered to this DLL
            ins_of_dll = [i for i, (s, dd, p) in enumerate(seq) if dd == dll]
            pred_pool = []
            for i in sorted(ins_of_dll, key=lambda i: pos_in_walk[i]):
                pred_pool.append(seq[i][2])
            n = len(INT_pool)
            eq = INT_pool == pred_pool
            hit += sum(1 for a, b in zip(INT_pool, pred_pool) if a == b)
            total += n
            print(f"  {dll:16} {'MATCH' if eq else 'diff %d/%d' % (sum(1 for a,b in zip(INT_pool,pred_pool) if a==b), n)}")
        print(f"  TOTAL positional: {hit}/{total} = {100*hit/total:.1f}%")

if __name__ == "__main__":
    main()
