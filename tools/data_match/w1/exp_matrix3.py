#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
exp_matrix3.py -- full n x m layout-transform matrix (U=user32 first, W=winmm second).
Records per-DLL permutation as insertion indices; saves JSON.
"""
import os, sys, json, subprocess

W1 = os.path.abspath(os.path.dirname(__file__))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "data_match"))
from compare_imports import parse
from symtab_int2 import obj_externs
import exp_probe as E

U = E.syms_of("user32")
W = E.syms_of("winmm")
# pick names that exist (mode NAME) by reading lib_members via E
LIBS = E.LIBS


def names_of(base, count):
    names = []
    for k in LIBS:
        if k.replace("\\", "/").endswith("/%s.lib" % base):
            names = [m["import_name"] for m in LIBS[k] if m["mode"] == "NAME"]
            break
    return names[:count]


UN = names_of("user32", 12)
WN = names_of("winmm", 12)
VN = names_of("version", 12)


def run(n, m, dll1="user32", dll2="winmm"):
    n1 = UN if dll1 == "user32" else WN
    n2 = WN if dll2 == "winmm" else VN
    seq = [(dll1, x) for x in n1[:n]] + [(dll2, x) for x in n2[:m]]
    tag = "x%s%d_%s%d" % (dll1[0], n, dll2[0], m)
    r = E.build(tag, seq, [dll1 + ".lib", dll2 + ".lib"])
    out = {}
    for dll, base in ((dll1 + ".dll", dll1), (dll2 + ".dll", dll2)):
        base2 = {"user32": "user32", "winmm": "winmm", "version": "version"}[base]
        dname = {"user32": "USER32.dll", "winmm": "WINMM.dll", "version": "VERSION.dll"}[base]
        if dname not in r["INT"]:
            out[base] = None
            continue
        ins = [x.split(":", 1)[1] for x in r["symtab"] if x.startswith(base2 + ":")]
        out[base] = E.idx_perm(ins, r["INT"][dname])
    return out


def main():
    res = []
    for n in range(1, 11):
        for m in range(1, 11):
            p = run(n, m)
            res.append({"n": n, "m": m, "u": p["user32"], "w": p["winmm"]})
            print("U%-2d W%-2d  U=%s W=%s" % (n, m, p["user32"], p["winmm"]))
    json.dump(res, open(os.path.join(ROOT, ".omo/agents/datamatch/exp_matrix3.json"), "w"))


if __name__ == "__main__":
    main()
