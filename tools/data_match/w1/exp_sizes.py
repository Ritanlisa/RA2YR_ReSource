#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
exp_sizes.py -- does the INT transform depend on symbol count or on the DLL?
user32 subsets of size 5, 6, 7 with fixed insertion order + IMM32 re-run.
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
LIBS = json.load(open(os.path.join(ROOT, ".omo/agents/datamatch/lib_members.json")))
def syms_of(base):
    key = [k for k in LIBS if k.replace("\\", "/").endswith(f"/{base}.lib")][0]
    return {m["import_name"]: m["sym"] for m in LIBS[key] if m["mode"] == "NAME"}

def build(tag, names, symmap, lib):
    lines = ["        .386", "        .model flat", ""]
    for n in names:
        lines.append(f"        extrn {symmap[n]}:proc")
    lines += ["", "        .data", "        public _refTable", "_refTable   label dword"]
    lines += [f"        dd  {symmap[n]}" for n in names]
    lines += ["", "        end"]
    open(os.path.join(W1, f"exp_sz_{tag}.asm"), "w").write("\n".join(lines))
    subprocess.run([os.path.join(VC, "ML.EXE"), "/coff", "/c", f"exp_sz_{tag}.asm"],
                   cwd=W1, env=ENV, check=True, capture_output=True)
    subprocess.run([os.path.join(VC, "LINK.EXE"), "/nologo", "/subsystem:windows",
                    "/machine:I386", "/fixed", "/filealign:0x1000", "/opt:ref", "/opt:icf",
                    f"/out:exp_sz_{tag}.exe", f"exp_sz_{tag}.obj", "main.obj",
                    lib, "libcmt.lib"],
                   cwd=W1, env=ENV, check=True, capture_output=True)
    d = parse(os.path.join(W1, f"exp_sz_{tag}.exe"))["descs"][0]
    INT = [f["name"] for f in d["funcs"]]
    POOL = [f["name"] for f in sorted(d["funcs"], key=lambda f: f.get("hn_off", 0))]
    rev = list(reversed(names))
    print(f"{tag} ({len(names)} syms): INT==reverse(insert)? {INT == rev}   POOL==insert? {POOL == names}")
    if INT != rev:
        print("   insert:", [n[:14] for n in names])
        print("   INT   :", [n[:14] for n in INT])
        print("   reverse:", [n[:14] for n in rev])

us = syms_of("user32")
U = ["GetFocus", "GetDC", "SendMessageA", "GetKeyState", "ReleaseDC", "GetCapture", "SetFocus", "GetFocus"]
# sizes 5..8 (drop dup)
for k in (5, 6, 7):
    build(f"u{k}", U[:k], us, "user32.lib")
im = syms_of("imm32")
IMM = ["ImmAssociateContext", "ImmGetContext", "ImmNotifyIME",
       "ImmGetCandidateListA", "ImmGetCompositionStringA", "ImmSetOpenStatus"]
build("imm6_rerun", IMM, im, "imm32.lib")
