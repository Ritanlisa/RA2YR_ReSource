#!/usr/bin/env python3
"""
exp_multi.py -- multi-DLL INT order experiments.
user32 (8 names) + winmm (5 names) + version (3 names) in different global
interleavings; observe per-DLL INT orders. Mirrors test2 structure small.
"""
import os, subprocess, sys, json
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
U = syms_of("user32"); W = syms_of("winmm"); V = syms_of("version")

U8 = ["GetKeyState", "GetFocus", "SendMessageA", "GetDC", "MessageBoxA",
      "GetWindowRect", "InvalidateRect", "SetCursor"]
W5 = ["timeGetTime", "timeEndPeriod", "timeKillEvent", "timeSetEvent", "timeBeginPeriod"]
V3 = ["VerQueryValueA", "GetFileVersionInfoA", "GetFileVersionInfoSizeA"]

def build(tag, seq):
    """seq: list of (dllbase, name) in GLOBAL insertion order."""
    lines = ["        .386", "        .model flat", ""]
    for b, n in seq:
        s = {"user32": U, "winmm": W, "version": V}[b][n]
        lines.append(f"        extrn {s}:proc")
    lines += ["", "        .data", "        public _refTable", "_refTable   label dword"]
    for b, n in seq:
        s = {"user32": U, "winmm": W, "version": V}[b][n]
        lines.append(f"        dd  {s}")
    lines += ["", "        .code", "_start:", "        mov eax, dword ptr [_refTable]",
              "        ret", "", "        end _start"]
    open(os.path.join(W1, f"mu_{tag}.asm"), "w").write("\n".join(lines))
    subprocess.run([os.path.join(VC, "ML.EXE"), "/coff", "/c", f"mu_{tag}.asm"],
                   cwd=W1, env=ENV, check=True, capture_output=True)
    subprocess.run([os.path.join(VC, "LINK.EXE"), "/nologo", "/subsystem:windows",
                    "/machine:I386", "/fixed", "/filealign:0x1000", "/opt:ref", "/opt:icf",
                    f"/out:mu_{tag}.exe", f"mu_{tag}.obj", "side.obj", "main.obj",
                    "kernel32.lib", "user32.lib", "winmm.lib", "version.lib", "libcmt.lib"],
                   cwd=W1, env=ENV, check=True, capture_output=True)
    P = parse(os.path.join(W1, f"mu_{tag}.exe"))
    out = {}
    for d in P["descs"]:
        if d["dll"] in ("USER32.dll", "WINMM.dll", "VERSION.dll"):
            out[d["dll"]] = [f["name"] for f in d["funcs"]]
    return out

cases = {
    "blk_UWV": [("user32", n) for n in U8] + [("winmm", n) for n in W5] + [("version", n) for n in V3],
    "blk_WVU": [("winmm", n) for n in W5] + [("version", n) for n in V3] + [("user32", n) for n in U8],
    "int1": None,
}
# interleave: U,W,V round-robin in lists
seq = []
ui, wi, vi = 0, 0, 0
while ui < len(U8) or wi < len(W5) or vi < len(V3):
    if ui < len(U8): seq.append(("user32", U8[ui])); ui += 1
    if wi < len(W5): seq.append(("winmm", W5[wi])); wi += 1
    if vi < len(V3): seq.append(("version", V3[vi])); vi += 1
cases["int1"] = seq

res = {}
for tag, seq in cases.items():
    r = build(tag, seq)
    res[tag] = r
    print(f"== {tag} ==")
    for dll, INT in r.items():
        print(f"   {dll:12} {INT}")

json.dump(res, open(os.path.join(ROOT, ".omo/agents/datamatch/exp_multi.json"), "w"), indent=1)
