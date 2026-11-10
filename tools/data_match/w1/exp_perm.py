#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
exp_perm.py -- INT order permutation experiments.

Builds tiny exes that import a small set of functions in a controlled insertion
order, then dumps the resulting INT order. Matrix:
  - VERSION.dll 3 names, several insertion orders, with/without other DLLs
  - WINMM.dll 5 names, a few orders
Goal: determine whether INT order is a function of (set, insertion order) and
whether some insertion order reproduces the original order.
"""
import os, subprocess, sys, json

W1 = os.path.abspath(os.path.join(os.path.dirname(__file__)))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))
VC = os.path.join(ROOT, ".vc6-8447", "BIN")
sys.path.insert(0, os.path.join(ROOT, "tools", "data_match"))
from compare_imports import parse  # noqa: E402

ENV = dict(os.environ)
ENV["PATH"] = VC + ";C:\\Windows\\SysWOW64;C:\\Windows;" + ENV["PATH"]
ENV["LIB"] = os.path.join(ROOT, ".vc6-8447", "LIB")

ORIG = parse(r"D:\RA2MD\gamemd.exe")

def build(name, dll_syms, extra_asm="", link_libs=None):
    lines = ["        .386", "        .model flat", ""]
    dd = []
    for dll, syms in dll_syms:
        for s, tag in syms:
            lines.append(f"        extrn {s}:proc   ; {dll} {tag}")
            dd.append(s)
    lines += ["", "        .data", "        public _refTable",
              "_refTable   label dword"]
    lines += [f"        dd  {s}" for s in dd]
    lines += ["", "        end"]
    asm = os.path.join(W1, f"exp_{name}.asm")
    open(asm, "w").write("\n".join(lines) + extra_asm)
    subprocess.run([os.path.join(VC, "ML.EXE"), "/coff", "/c", f"exp_{name}.asm"],
                   cwd=W1, env=ENV, check=True, capture_output=True)
    libs = link_libs or []
    cmd = [os.path.join(VC, "LINK.EXE"), "/nologo", "/subsystem:windows",
           "/machine:I386", "/fixed", "/filealign:0x1000", "/opt:ref", "/opt:icf",
           f"/out:exp_{name}.exe", f"exp_{name}.obj", "main.obj"] + libs + ["libcmt.lib"]
    r = subprocess.run(cmd, cwd=W1, env=ENV, capture_output=True, text=True)
    if r.returncode != 0:
        print(r.stdout, r.stderr)
        raise SystemExit(1)
    exe = os.path.join(W1, f"exp_{name}.exe")
    return [f["name"] for f in parse(exe)["descs"][0]["funcs"]] if parse(exe)["descs"] else []

def dll_int_orig(dll):
    d = next(x for x in ORIG["descs"] if x["dll"] == dll)
    return [f["name"] for f in d["funcs"] if f["mode"] == "NAME"]

# VERSION experiments (3 names) -- symbols from the era lib ground truth
import json as _j
LIBS = _j.load(open(os.path.join(ROOT, ".omo/agents/datamatch/lib_members.json")))
def lib_syms(libbase):
    key = [k for k in LIBS if k.replace("\\", "/").endswith(f"/{libbase}.lib")][0]
    return {m["import_name"]: m["sym"] for m in LIBS[key] if m["mode"] == "NAME"}
vsyms = lib_syms("version")
V = {"Q": (vsyms["VerQueryValueA"], "VerQueryValueA"),
     "S": (vsyms["GetFileVersionInfoSizeA"], "GetFileVersionInfoSizeA"),
     "I": (vsyms["GetFileVersionInfoA"], "GetFileVersionInfoA")}
import itertools
print("VERSION original INT:", dll_int_orig("VERSION.dll"))
for perm in itertools.permutations("QSI"):
    syms = [(V[c][0], V[c][1]) for c in perm]
    out = build("ver_" + "".join(perm), [("VERSION.dll", syms)],
                link_libs=["version.lib"])
    print(f"  insert {''.join(perm)} -> INT {out}")

# WINMM: original INT order
Wnames = dll_int_orig("WINMM.dll")
symmap = lib_syms("winmm")
print("WINMM original INT:", Wnames)
# insertion = original INT order itself
syms = [(symmap[n], n) for n in Wnames]
out = build("wmm_int", [("WINMM.dll", syms)], link_libs=["winmm.lib"])
print("  insert origINT -> INT", out)
# insertion = original pool order
d0 = next(x for x in ORIG["descs"] if x["dll"] == "WINMM.dll")
pool = [f["name"] for f in sorted(d0["funcs"], key=lambda f: f.get("hn_off", 0))]
syms = [(symmap[n], n) for n in pool]
out = build("wmm_pool", [("WINMM.dll", syms)], link_libs=["winmm.lib"])
print("  insert origPOOL -> INT", out)
