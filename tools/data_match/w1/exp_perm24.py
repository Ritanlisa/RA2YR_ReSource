#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
exp_perm24.py -- full 24-permutation battery on a 4-name USER32 subset.
For each insertion order, record resulting INT order and POOL order.
Goal: characterize the linker's internal import-order transform
(bucket structure / chain direction / stability).
"""
import os, sys, subprocess, json, itertools
W1 = os.path.abspath(os.path.dirname(__file__))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))
VC = os.path.join(ROOT, ".vc6-8447", "BIN")
sys.path.insert(0, os.path.join(ROOT, "tools", "data_match"))
from compare_imports import parse

ENV = dict(os.environ)
ENV["PATH"] = VC + ";C:\\Windows\\SysWOW64;C:\\Windows;" + ENV["PATH"]
ENV["LIB"] = os.path.join(ROOT, ".vc6-8447", "LIB")
LIBS = json.load(open(os.path.join(ROOT, ".omo/agents/datamatch/lib_members.json")))
key = [k for k in LIBS if k.replace("\\", "/").endswith("/user32.lib")][0]
usyms = {m["import_name"]: m["sym"] for m in LIBS[key] if m["mode"] == "NAME"}

# 4 short user32 names
NAMES = ["GetDC@4?", ]
NAMES = ["GetFocus", "GetDC", "SendMessageA", "GetKeyState"]
# verify symbols
for n in NAMES:
    assert n in usyms, n

results = []
for perm in itertools.permutations(NAMES):
    lines = ["        .386", "        .model flat", ""]
    for n in perm:
        lines.append(f"        extrn {usyms[n]}:proc")
    lines += ["", "        .data", "        public _refTable", "_refTable   label dword"]
    lines += [f"        dd  {usyms[n]}" for n in perm]
    lines += ["", "        end"]
    tag = "".join(n[3] for n in perm)
    open(os.path.join(W1, f"exp_p4_{tag}.asm"), "w").write("\n".join(lines))
    subprocess.run([os.path.join(VC, "ML.EXE"), "/coff", "/c", f"exp_p4_{tag}.asm"],
                   cwd=W1, env=ENV, check=True, capture_output=True)
    subprocess.run([os.path.join(VC, "LINK.EXE"), "/nologo", "/subsystem:windows",
                    "/machine:I386", "/fixed", "/filealign:0x1000", "/opt:ref", "/opt:icf",
                    f"/out:exp_p4_{tag}.exe", f"exp_p4_{tag}.obj", "main.obj",
                    "user32.lib", "libcmt.lib"],
                   cwd=W1, env=ENV, check=True, capture_output=True)
    P = parse(os.path.join(W1, f"exp_p4_{tag}.exe"))
    d = P["descs"][0]
    INT = [f["name"] for f in d["funcs"]]
    POOL = [f["name"] for f in sorted(d["funcs"], key=lambda f: f.get("hn_off", 0))]
    results.append((perm, INT, POOL))
    print(f"insert {[n[3] for n in perm]} -> INT {[n[3] for n in INT]}  POOL {[n[3] for n in POOL]}")

json.dump([[list(p), i, q] for p, i, q in results],
          open(os.path.join(W1, "perm24.json"), "w"), indent=1)
print("wrote perm24.json")
