#!/usr/bin/env python3
"""
exp_matrix.py -- systematic INT-order matrix:
  A) 24 perms of 4 user32 names, full CRT context (obj+side+main+u32+libcmt)
  B) 24 perms, no CRT (obj only + u32, /entry:start /nodefaultlib)
  C) n-scan: first n of 16-name set, insertion = pool order, both contexts
Goal: characterize T(set, insertion, context) -> INT order.
"""
import os, subprocess, sys, json, itertools
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

def build(tag, names, mode):
    lines = ["        .386", "        .model flat", ""]
    for n in names:
        lines.append(f"        extrn {usyms[n]}:proc")
    lines += ["", "        .data", "        public _refTable", "_refTable   label dword"]
    lines += [f"        dd  {usyms[n]}" for n in names]
    lines += ["", "        .code", "_start:", "        mov eax, dword ptr [_refTable]",
              "        ret", "", "        end _start"]
    open(os.path.join(W1, f"mx_{tag}.asm"), "w").write("\n".join(lines))
    r = subprocess.run([os.path.join(VC, "ML.EXE"), "/coff", "/c", f"mx_{tag}.asm"],
                       cwd=W1, env=ENV, check=True, capture_output=True)
    if mode == "crt":
        cmd = [os.path.join(VC, "LINK.EXE"), "/nologo", "/subsystem:windows",
               "/machine:I386", "/fixed", "/filealign:0x1000", "/opt:ref", "/opt:icf",
               f"/out:mx_{tag}.exe", f"mx_{tag}.obj", "side.obj", "main.obj",
               "user32.lib", "libcmt.lib"]
    else:
        cmd = [os.path.join(VC, "LINK.EXE"), "/nologo", "/subsystem:windows",
               "/machine:I386", "/fixed", "/filealign:0x1000", "/entry:start", "/nodefaultlib",
               f"/out:mx_{tag}.exe", f"mx_{tag}.obj", "user32.lib"]
    r = subprocess.run(cmd, cwd=W1, env=ENV, capture_output=True, text=True)
    if r.returncode:
        print("ERR", tag, r.stdout[:200]); return None
    P = parse(os.path.join(W1, f"mx_{tag}.exe"))
    d = next(x for x in P["descs"] if x["dll"] == "USER32.dll")
    return [f["name"] for f in d["funcs"]]

out = {"A": [], "B": [], "C": []}
NAMES = ["GetFocus", "GetDC", "SendMessageA", "GetKeyState"]
for perm in itertools.permutations(NAMES):
    tag = "A_" + "".join(n[3] for n in perm)
    i1 = build(tag, list(perm), "crt")
    out["A"].append((list(perm), i1))
    tag = "B_" + "".join(n[3] for n in perm)
    i2 = build(tag, list(perm), "plain")
    out["B"].append((list(perm), i2))

BIG = ["GetKeyState", "GetFocus", "SendMessageA", "GetDC", "MessageBoxA",
       "GetWindowRect", "InvalidateRect", "SetCursor", "ShowCursor", "GetCursorPos",
       "SetForegroundWindow", "FindWindowA"]
for n in range(1, len(BIG) + 1):
    names = BIG[:n]
    i1 = build(f"C{n}_crt", names, "crt")
    i2 = build(f"C{n}_plain", names, "plain")
    out["C"].append((n, names, i1, i2))
    print(f"n={n:2d} crt INT={i1}")
    print(f"      plain INT={i2}")

json.dump(out, open(os.path.join(ROOT, ".omo/agents/datamatch/exp_matrix.json"), "w"), indent=1)
print("== A (crt):")
for p, i in out["A"]:
    print("  ins", [x[3] for x in p], "-> INT", [x[3] for x in i])
print("== B (plain):")
for p, i in out["B"]:
    print("  ins", [x[3] for x in p], "-> INT", [x[3] for x in i])
