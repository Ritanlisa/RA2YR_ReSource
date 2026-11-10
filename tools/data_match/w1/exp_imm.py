#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
exp_imm.py -- IMM32 standalone ordering experiments.
insertions to test:
  P1 = original pool order
  P2 = reverse(original INT)
  P3 = original INT order
also WINMM reverse(origINT) control.
"""
import os, sys, subprocess, json
W1 = os.path.abspath(os.path.dirname(__file__))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))
VC = os.path.join(ROOT, ".vc6-8447", "BIN")
sys.path.insert(0, os.path.join(ROOT, "tools", "data_match"))
from compare_imports import parse

ENV = dict(os.environ)
ENV["PATH"] = VC + ";C:\\Windows\\SysWOW64;C:\\Windows;" + ENV["PATH"]
ENV["LIB"] = os.path.join(ROOT, ".vc6-8447", "LIB")
ORIG = parse(r"D:\RA2MD\gamemd.exe")
LIBS = json.load(open(os.path.join(ROOT, ".omo/agents/datamatch/lib_members.json")))
def lib_syms(base):
    key = [k for k in LIBS if k.replace("\\", "/").endswith(f"/{base}.lib")][0]
    return {m["import_name"]: m["sym"] for m in LIBS[key] if m["mode"] == "NAME"}

def build(name, refs, lib):
    lines = ["        .386", "        .model flat", ""]
    for s, tag in refs:
        lines.append(f"        extrn {s}:proc")
    lines += ["", "        .data", "        public _refTable", "_refTable   label dword"]
    lines += [f"        dd  {s}" for s, _ in refs]
    lines += ["", "        end"]
    open(os.path.join(W1, f"exp_{name}.asm"), "w").write("\n".join(lines))
    subprocess.run([os.path.join(VC, "ML.EXE"), "/coff", "/c", f"exp_{name}.asm"],
                   cwd=W1, env=ENV, check=True, capture_output=True)
    subprocess.run([os.path.join(VC, "LINK.EXE"), "/nologo", "/subsystem:windows",
                    "/machine:I386", "/fixed", "/filealign:0x1000", "/opt:ref", "/opt:icf",
                    f"/out:exp_{name}.exe", f"exp_{name}.obj", "main.obj", lib, "libcmt.lib"],
                   cwd=W1, env=ENV, check=True, capture_output=True)
    P = parse(os.path.join(W1, f"exp_{name}.exe"))
    d = P["descs"][0]
    return [f["name"] for f in d["funcs"]], [f["name"] for f in sorted(d["funcs"], key=lambda f: f.get("hn_off", 0))]

def orig_orders(dll):
    d = next(x for x in ORIG["descs"] if x["dll"] == dll)
    ints = [f["name"] for f in d["funcs"]]
    pool = [f["name"] for f in sorted(d["funcs"], key=lambda f: f.get("hn_off", 0))]
    return ints, pool

immsym = lib_syms("imm32")
oINT, oPOOL = orig_orders("IMM32.dll")
print("IMM32 origINT :", oINT)
print("IMM32 origPOOL:", oPOOL)
for label, order in [("P1_pool", oPOOL), ("P2_revINT", list(reversed(oINT))), ("P3_INT", oINT)]:
    refs = [(immsym[n], n) for n in order]
    INT, POOL = build("imm_" + label, refs, "imm32.lib")
    print(f"  insert {label}: INT={INT}")
    print(f"                POOL={POOL}")

wsym = lib_syms("winmm")
oINT, oPOOL = orig_orders("WINMM.dll")
print("WINMM origINT :", oINT)
refs = [(wsym[n], n) for n in reversed(oINT)]
INT, POOL = build("wmm_revINT", refs, "winmm.lib")
print(f"  insert revINT: INT={INT}")
print(f"                 POOL={POOL}")
