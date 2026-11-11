#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""qs_array.py -- model LINK 6.00.8447's .idata$4/.idata$5 contribution sort.

Mechanism (R8 + this session's gdb probes):
  * LINK builds one pointer array of the output section's contributions
    (per imported symbol a 4-byte thunk section, plus one terminator section
    per DLL member pulled on first resolution: chars 0xc0300040);
  * the array order is the APPEND order: first scan round resolves, library by
    library (command-line order), all pending imports of a DLL -> block of
    (n imports + 1 terminator); later rounds append further per-DLL blocks
    WITHOUT a new terminator;
  * the array is sorted with the system MSVCRT.dll qsort keyed by DLL name
    (case-sensitive strcmp).  All entries of a DLL compare equal, so the
    within-DLL output order is msvcrt's equal-key permutation and depends on
    the whole key sequence.

API:
    elems = [("KERNEL32.dll", imp_index_or_None), ...]   # None = terminator
    pred  = predict(elems)   # -> {dll: [imp_index, ...]} in output order

The qsort oracle is the 32-bit helper qs_oracle2.exe (LoadLibrary("msvcrt.dll")
+ GetProcAddress("qsort")) -- the very runtime LINK uses; do NOT use the
static libcmt qsort (N=9 behaviour differs).
"""
import os
import subprocess

W1 = os.path.dirname(os.path.abspath(__file__))
# QS_ORACLE env var selects the oracle binary; default = system msvcrt qsort.
ORACLE = os.environ.get("QS_ORACLE") or os.path.join(W1, "qs_oracle2.exe")


def dll_rank_map(elems):
    names = sorted({e[0] for e in elems}, key=lambda s: s.encode("latin1"))
    return {d: i for i, d in enumerate(names)}, names


def oracle(keys_cases):
    """keys_cases: list of key lists -> list of permutations (out_pos -> in_pos)."""
    inp = [str(len(keys_cases))]
    for keys in keys_cases:
        inp.append(str(len(keys)) + " " + " ".join(str(k) for k in keys))
    p = subprocess.run([ORACLE], input="\n".join(inp) + "\n", capture_output=True, text=True)
    if p.returncode != 0:
        raise RuntimeError("oracle failed: %s" % p.stderr)
    out = []
    for line in p.stdout.strip().splitlines():
        n, rest = line.split(":")
        out.append([int(x) for x in rest.split(",")] if rest else [])
    return out


def perm_for(elems):
    rank, _ = dll_rank_map(elems)
    return oracle([[rank[e[0]] for e in elems]])[0]


def predict(elems, perm=None):
    if perm is None:
        perm = perm_for(elems)
    assert len(perm) == len(elems), (len(perm), len(elems))
    out = {}
    for p in perm:
        d, k = elems[p]
        if k is not None:
            out.setdefault(d, []).append(k)
    return out


def build_blocks(rounds):
    """rounds: list of rounds; each round = list of (dll, n_imports, with_term).

    Imports get sequential per-DLL indices across rounds (first round first).
    """
    base = {}
    elems = []
    for rnd in rounds:
        for dll, n, with_term in rnd:
            b = base.get(dll, 0)
            for k in range(n):
                elems.append((dll, b + k))
            base[dll] = b + n
            if with_term:
                elems.append((dll, None))
    return elems


if __name__ == "__main__":
    # quick self-test: single DLL n=4 (=> 5 elements, rot-left-1)
    e = build_blocks([[[("USER32.dll", 4, True)]]])
    print("single n=4:", predict(e))
    # two DLLs
    e = build_blocks([[[("KERNEL32.dll", 3, True), ("USER32.dll", 2, True)]]])
    print("K3+U2:", predict(e))
