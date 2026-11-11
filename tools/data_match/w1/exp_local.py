#!/usr/bin/env python3
"""
exp_local.py -- is the per-DLL transform a FIXED permutation of local positions?
(a) WINMM all 5 rotations x2 extra perms, fixed lib order -> compare
(b) same insertion, lib order changed (winmm first / version first)
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
def syms_of(base):
    key = [k for k in LIBS if k.replace("\\", "/").endswith(f"/{base}.lib")][0]
    return {m["import_name"]: m["sym"] for m in LIBS[key] if m["mode"] == "NAME"}
W = syms_of("winmm")
W5 = ["timeGetTime", "timeEndPeriod", "timeKillEvent", "timeSetEvent", "timeBeginPeriod"]

def build(tag, wseq, liborder):
    lines = ["        .386", "        .model flat", ""]
    for n in wseq:
        lines.append(f"        extrn {W[n]}:proc")
    lines += ["", "        .data", "        public _refTable", "_refTable   label dword"]
    for n in wseq:
        lines.append(f"        dd  {W[n]}")
    lines += ["", "        .code", "_start:", "        mov eax, dword ptr [_refTable]",
              "        ret", "", "        end _start"]
    open(os.path.join(W1, f"lo_{tag}.asm"), "w").write("\n".join(lines))
    subprocess.run([os.path.join(VC, "ML.EXE"), "/coff", "/c", f"lo_{tag}.asm"],
                   cwd=W1, env=ENV, check=True, capture_output=True)
    subprocess.run([os.path.join(VC, "LINK.EXE"), "/nologo", "/subsystem:windows",
                    "/machine:I386", "/fixed", "/filealign:0x1000", "/opt:ref", "/opt:icf",
                    f"/out:lo_{tag}.exe", f"lo_{tag}.obj", "side.obj", "main.obj"]
                   + liborder + ["libcmt.lib"],
                   cwd=W1, env=ENV, check=True, capture_output=True)
    P = parse(os.path.join(W1, f"lo_{tag}.exe"))
    d = next(x for x in P["descs"] if x["dll"] == "WINMM.dll")
    return [f["name"] for f in d["funcs"]]

LIBA = ["kernel32.lib", "user32.lib", "winmm.lib", "version.lib"]  # std order
print("== (a) local perms, lib order std ==")
for p in itertools.permutations(range(5)):
    seq = [W5[i] for i in p]
    INT = build("a" + "".join(map(str, p)), seq, LIBA)
    print(f"  ins {[W5[i][:5] for i in p]} -> INT {[x[:5] for x in INT]}")

print("== (b) insertion 01234, varying lib order ==")
for tag, lo in [("winfirst", ["winmm.lib", "kernel32.lib", "user32.lib", "version.lib"]),
                ("verfirst", ["version.lib", "kernel32.lib", "user32.lib", "winmm.lib"]),
                ("nowin", ["kernel32.lib", "user32.lib", "version.lib"])]:
    INT = build("b_" + tag, W5, lo)
    print(f"  {tag:10} -> {[x[:5] for x in INT]}")
