#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
exp_min.py -- minimal no-CRT user32 build for dynamic probing.
8 user32 externs, custom entry, /NODEFAULTLIB: symbol universe fully known.
"""
import os, subprocess, sys, json
W1 = os.path.abspath(os.path.dirname(__file__))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))
VC = os.path.join(ROOT, ".vc6-8447", "BIN")
ENV = dict(os.environ)
ENV["PATH"] = VC + ";C:\\Windows\\SysWOW64;C:\\Windows;" + ENV["PATH"]
ENV["LIB"] = os.path.join(ROOT, ".vc6-8447", "LIB")

# 8 user32 names in a chosen non-alphabetical order
NAMES = ["GetKeyState", "GetFocus", "SendMessageA", "GetDC",
         "MessageBoxA", "GetWindowRect", "InvalidateRect", "SetCursor"]
# MASM decorated stdcall syms
SYMS = {"GetKeyState": "_GetKeyState@4", "GetFocus": "_GetFocus@0",
        "SendMessageA": "_SendMessageA@16", "GetDC": "_GetDC@4",
        "MessageBoxA": "_MessageBoxA@16", "GetWindowRect": "_GetWindowRect@8",
        "InvalidateRect": "_InvalidateRect@12", "SetCursor": "_SetCursor@4"}

lines = ["; exp_min", "        .386", "        .model flat", ""]
for n in NAMES:
    lines.append(f"        extrn {SYMS[n]}:proc")
lines += ["", "        .data", "        public _refTable", "_refTable   label dword"]
lines += [f"        dd  {SYMS[n]}" for n in NAMES]
lines += ["", "        .code", "_start:", "        mov eax, dword ptr [_refTable]",
          "        ret", "", "        end _start"]
open(os.path.join(W1, "exp_min.asm"), "w").write("\n".join(lines))

subprocess.run([os.path.join(VC, "ML.EXE"), "/coff", "/c", "exp_min.asm"],
               cwd=W1, env=ENV, check=True, capture_output=True)
r = subprocess.run([os.path.join(VC, "LINK.EXE"), "/nologo", "/subsystem:windows",
                    "/machine:I386", "/fixed", "/filealign:0x1000", "/entry:_start",
                    "/nodefaultlib", f"/out:exp_min.exe", "exp_min.obj", "user32.lib",
                    "kernel32.lib"],
                   cwd=W1, env=ENV, check=True, capture_output=True, text=True)
print(r.stdout, r.stderr)

sys.path.insert(0, os.path.join(ROOT, "tools", "data_match"))
from compare_imports import parse
P = parse(os.path.join(W1, "exp_min.exe"))
for d in P["descs"]:
    syms = [f["name"] if f["mode"] == "NAME" else "@" + str(f["ordinal"]) for f in d["funcs"]]
    pool = [f["name"] for f in sorted(d["funcs"], key=lambda f: f.get("hn_off", 0))]
    print(d["dll"], "INT:", syms)
    print(d["dll"], "pool:", pool)
