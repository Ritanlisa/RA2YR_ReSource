#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""validate_qs_model.py -- end-to-end validation of the qsort-array model.

Rebuilds e2.exe (wave-1 K ref + libcmt CRT wave + late w2.lib wave, mixed U),
reads the real INT order from the PE, and checks that the model (array layout
taken from the gdb dump: K block [imp,TERM] + appended K imports + U block
[imp,imp,TERM]) predicts the observed per-DLL INT order exactly.
"""
import os
import sys

W1 = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(W1))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))

from compare_imports import parse  # noqa: E402
from qs_array import predict  # noqa: E402


def observed(exe):
    """-> {dll: (ins_order_tags, int_indices_into_ins)}"""
    d = parse(exe)
    out = {}
    for desc in d["descs"]:
        tags = []
        for f in desc["funcs"]:
            tags.append(f["name"] if f.get("mode", "NAME") == "NAME" else "@%s" % f.get("ordinal"))
        # pool (= reference) order: by hn_off, ordinals keep INT order
        order = sorted(range(len(tags)), key=lambda i: desc["funcs"][i].get("hn_off", 1 << 30))
        ins = [tags[i] for i in order]
        idx = {t: i for i, t in enumerate(ins)}
        obs = [idx[t] for t in tags]
        out[desc["dll"]] = (ins, obs)
    return out


def main():
    exe = sys.argv[1] if len(sys.argv) > 1 else os.path.join(W1, "e2.exe")
    o = observed(exe)
    for dll, (ins, obs) in o.items():
        print(dll, "n=", len(ins), "ins[:6]=", ins[:6], "obs[:10]=", obs[:10])

    # e2 array layout observed by gdb (qs_e2.log): K:1 imp + TERM, then 52 K
    # imports appended (libcmt CRT + w2.lib), then U:2 imports + TERM.
    nk = len(o["KERNEL32.dll"][0])
    nu = len(o["USER32.dll"][0])
    elems = [("KERNEL32.dll", 0), ("KERNEL32.dll", None)]
    elems += [("KERNEL32.dll", k) for k in range(1, nk)]
    elems += [("USER32.dll", k) for k in range(nu)]
    elems += [("USER32.dll", None)]
    pred = predict(elems)
    ok = True
    for dll in ("KERNEL32.dll", "USER32.dll"):
        p = pred.get(dll, [])
        ob = o[dll][1]
        same = p == ob
        ok = ok and same
        print("%-14s pred==obs: %s" % (dll, same))
        if not same:
            for i, (a, b) in enumerate(zip(p, ob)):
                if a != b:
                    print("   first diff at %d: pred=%s obs=%s" % (i, a, b))
                    break
    print("RESULT:", "PASS" if ok else "FAIL")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
