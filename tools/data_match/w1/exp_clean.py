#!/usr/bin/env python3
"""
exp_clean.py -- clean single-config INT-transform dataset.
Config: MASM obj (extrn + .data dd table + _start code), LINK with CRT.
For every build: record (extrn_order, symtab_order, INT_order).
Fits: INT = f(symtab_order) across 24 perms + n-scan 1..12.
"""
import os, subprocess, sys, json, itertools
W1 = os.path.abspath(os.path.dirname(__file__))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))
VC = os.path.join(ROOT, ".vc6-8447", "BIN")
sys.path.insert(0, os.path.join(ROOT, "tools", "data_match"))
from compare_imports import parse
from symtab_int2 import obj_externs

ENV = dict(os.environ)
ENV["PATH"] = VC + ";C:\\Windows\\SysWOW64;C:\\Windows;" + ENV["PATH"]
ENV["LIB"] = os.path.join(ROOT, ".vc6-8447", "LIB")
LIBS = json.load(open(os.path.join(ROOT, ".omo/agents/datamatch/lib_members.json")))
key = [k for k in LIBS if k.replace("\\", "/").endswith("/user32.lib")][0]
usyms = {m["import_name"]: m["sym"] for m in LIBS[key] if m["mode"] == "NAME"}
u2n = {v: k for k, v in usyms.items()}

def build(tag, names):
    lines = ["        .386", "        .model flat", ""]
    for n in names:
        lines.append(f"        extrn {usyms[n]}:proc")
    lines += ["", "        .data", "        public _refTable", "_refTable   label dword"]
    lines += [f"        dd  {usyms[n]}" for n in names]
    lines += ["", "        .code", "_start:", "        mov eax, dword ptr [_refTable]",
              "        ret", "", "        end _start"]
    open(os.path.join(W1, f"cl_{tag}.asm"), "w").write("\n".join(lines))
    subprocess.run([os.path.join(VC, "ML.EXE"), "/coff", "/c", f"cl_{tag}.asm"],
                   cwd=W1, env=ENV, check=True, capture_output=True)
    subprocess.run([os.path.join(VC, "LINK.EXE"), "/nologo", "/subsystem:windows",
                    "/machine:I386", "/fixed", "/filealign:0x1000", "/opt:ref", "/opt:icf",
                    f"/out:cl_{tag}.exe", f"cl_{tag}.obj", "side.obj", "main.obj",
                    "user32.lib", "libcmt.lib"],
                   cwd=W1, env=ENV, check=True, capture_output=True)
    st = [u2n[s] for s in obj_externs(os.path.join(W1, f"cl_{tag}.obj")) if s in u2n]
    P = parse(os.path.join(W1, f"cl_{tag}.exe"))
    d = next(x for x in P["descs"] if x["dll"] == "USER32.dll")
    INT = [f["name"] for f in d["funcs"]]
    return st, INT

data = {"perm": [], "nscan": []}
NAMES = ["GetFocus", "GetDC", "SendMessageA", "GetKeyState"]
for perm in itertools.permutations(NAMES):
    tag = "".join(n[3] for n in perm)
    st, INT = build("P" + tag, list(perm))
    data["perm"].append({"extrn": list(perm), "symtab": st, "INT": INT})

BIG = ["GetKeyState", "GetFocus", "SendMessageA", "GetDC", "MessageBoxA",
       "GetWindowRect", "InvalidateRect", "SetCursor", "ShowCursor", "GetCursorPos",
       "SetForegroundWindow", "FindWindowA"]
for n in range(1, len(BIG) + 1):
    st, INT = build(f"N{n:02d}", BIG[:n])
    data["nscan"].append({"n": n, "symtab": st, "INT": INT})
    print(f"n={n:2d} symtab={st}")
    print(f"      INT   ={INT}")

json.dump(data, open(os.path.join(ROOT, ".omo/agents/datamatch/exp_clean.json"), "w"), indent=1)
print()
print("== perms: symtab -> INT ==")
for e in data["perm"]:
    st, INT = e["symtab"], e["INT"]
    kind = ("IDENT" if st == INT else "REV" if st == list(reversed(st)) else "?")
    print(f"  {[x[3] for x in st]} -> {[x[3] for x in INT]}  {kind}")
