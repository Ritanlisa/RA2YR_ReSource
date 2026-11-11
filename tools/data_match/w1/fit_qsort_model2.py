#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Fit the 'msvcrt qsort of sections grouped by DLL name' model using the real
system msvcrt qsort as oracle. Variants: special element per DLL or not."""
import json, os, subprocess

W1 = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))
DM = os.path.join(ROOT, ".omo", "agents", "datamatch")
ORACLE = os.path.join(W1, "qs_oracle2.exe")


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


def predict(keys, blocks, specials):
    """blocks: list of (key, import_count). specials: dict key->special_count
    placed at END of each block. Returns per-block import order."""
    perm = oracle([keys])[0]
    base = 0
    res = []
    for key, cnt in blocks:
        total = cnt + specials.get(key, 0)
        ids = [i for i in perm if base <= i < base + total]
        # drop the special ids (the last `special` positions of the block)
        imp_ids = [i for i in ids if i < base + cnt]
        res.append([i - base for i in imp_ids])
        base += total
    return res


def make_keys(blocks, specials):
    keys = []
    for key, cnt in blocks:
        keys += [key] * (cnt + specials.get(key, 0))
    return keys


def main():
    two = [r for r in json.load(open(os.path.join(DM, "exp_matrix3.json"), encoding="utf-8"))
           if r["u"] and r["w"] and r["n"] <= 8 and r["m"] <= 8]
    three = [r for r in json.load(open(os.path.join(DM, "exp_3dll_uvw.json"), encoding="utf-8"))
             if r[2] and r[3] and r[4]]
    for name, spec in (("no_special", {}), ("special_per_dll", {0: 1, 1: 1, 2: 1}),
                       ("special_first_dll", {0: 1})):
        hit = tot = 0
        samples = []
        for r in two:
            n, m = r["n"], r["m"]
            blocks = [(0, n), (1, m)]
            keys = make_keys(blocks, spec)
            pred = predict(keys, blocks, spec)
            obs = [r["u"], r["w"]]
            for p, o in zip(pred, obs):
                tot += 1
                if p == o:
                    hit += 1
            if len(samples) < 3:
                samples.append((n, m, pred, obs))
        print("2-DLL %-18s %3d/%3d = %.3f" % (name, hit, tot, hit / tot))
        for s in samples:
            print("    n=%d m=%d pred=%s obs=%s" % s)
        hit = tot = 0
        samples = []
        for r in three:
            n, m = r[0], r[1]
            blocks = [(0, n), (1, m), (2, 3)]
            keys = make_keys(blocks, spec)
            pred = predict(keys, blocks, spec)
            obs = [r[2], r[3], r[4]]
            for p, o in zip(pred, obs):
                tot += 1
                if p == o:
                    hit += 1
            if len(samples) < 2:
                samples.append((n, m, pred, obs))
        print("3-DLL %-18s %3d/%3d = %.3f" % (name, hit, tot, hit / tot))
        for s in samples:
            print("    n=%d m=%d pred=%s obs=%s" % s)


if __name__ == "__main__":
    main()
