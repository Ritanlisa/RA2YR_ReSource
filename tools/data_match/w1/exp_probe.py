#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
exp_probe.py -- targeted probes for the INT-order mechanism.
Builds controlled single/multi-DLL links and records per-DLL INT order as
insertion indices. Output: JSON to stdout or --out file.

Usage:
  python exp_probe.py --single          # user32 n=1..12
  python exp_probe.py --two             # user32 n x winmm m matrix
  python exp_probe.py --perm            # all perms of 4 user32 names
  python exp_probe.py --three           # U/W/V combos
  python exp_probe.py --out x.json --single ...
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


def syms_of(base):
    for k in LIBS:
        kk = k.replace("\\", "/")
        if kk.endswith("/%s.lib" % base):
            return {m["import_name"]: m["sym"] for m in LIBS[k] if m["mode"] == "NAME"}
    raise KeyError(base)


def build(tag, seq, libs, crt=True):
    """seq: list of (dllbase, import_name). libs: command-line library list."""
    lines = ["        .386", "        .model flat", ""]
    symtab = {"user32": syms_of("user32"), "winmm": syms_of("winmm"),
              "version": syms_of("version"), "gdi32": syms_of("gdi32"),
              "kernel32": syms_of("kernel32")}
    for b, n in seq:
        lines.append("        extrn %s:proc" % symtab[b][n])
    lines += ["", "        .data", "        public _refTable", "_refTable   label dword"]
    for b, n in seq:
        lines.append("        dd  %s" % symtab[b][n])
    lines += ["", "        .code", "_start:", "        mov eax, dword ptr [_refTable]",
              "        ret", "", "        end _start"]
    fn = os.path.join(W1, "p_%s.asm" % tag)
    open(fn, "w").write("\n".join(lines))
    subprocess.run([os.path.join(VC, "ML.EXE"), "/coff", "/c", "p_%s.asm" % tag],
                   cwd=W1, env=ENV, check=True, capture_output=True)
    exe = os.path.join(W1, "p_%s.exe" % tag)
    cmd = [os.path.join(VC, "LINK.EXE"), "/nologo", "/subsystem:windows",
           "/machine:I386", "/fixed", "/filealign:0x1000", "/opt:ref", "/opt:icf",
           "/out:p_%s.exe" % tag, "p_%s.obj" % tag]
    if crt:
        cmd += ["side.obj", "main.obj"]
    cmd += libs
    if crt:
        cmd += ["libcmt.lib"]
    subprocess.run(cmd, cwd=W1, env=ENV, check=True, capture_output=True)
    P = parse(exe)
    out = {}
    for d in P["descs"]:
        if d["dll"].upper() not in ("KERNEL32.DLL", "USER32.DLL", "WINMM.DLL",
                                    "VERSION.DLL", "GDI32.DLL", "ADVAPI32.DLL",
                                    "SHELL32.DLL", "OLE32.DLL", "OLEAUT32.DLL",
                                    "WSOCK32.DLL", "DDRAW.DLL", "DSOUND.DLL",
                                    "COMCTL32.DLL", "IMM32.DLL", "BINKW32.DLL"):
            continue
        out[d["dll"]] = [f["name"] for f in d["funcs"]]
    st = [u2n_lookup(s) for s in obj_externs(os.path.join(W1, "p_%s.obj" % tag))]
    return {"INT": out, "symtab": st}


def u2n_lookup(sym):
    for base in ("user32", "winmm", "version", "gdi32", "kernel32"):
        m = syms_of(base)
        for n, s in m.items():
            if s == sym:
                return "%s:%s" % (base, n)
    return sym


U8 = ["GetKeyState", "GetFocus", "SendMessageA", "GetDC", "MessageBoxA",
      "GetWindowRect", "InvalidateRect", "SetCursor", "ShowCursor", "GetCursorPos",
      "SetForegroundWindow", "FindWindowA"]
W5 = ["timeGetTime", "timeEndPeriod", "timeKillEvent", "timeSetEvent", "timeBeginPeriod"]
V3 = ["VerQueryValueA", "GetFileVersionInfoA", "GetFileVersionInfoSizeA"]
G6 = ["ModifyWorldTransform", "SetViewportOrgEx", "SetWindowOrgEx", "DPtoLP",
      "RestoreDC", "SaveDC"]

STD_LIBS = ["user32.lib", "winmm.lib", "version.lib", "gdi32.lib"]


def idx_perm(ins, out):
    """out (names) as indices into ins (unique names)."""
    return [ins.index(x) for x in out]


def run_single(crt=True):
    res = []
    for n in range(1, len(U8) + 1):
        seq = [("user32", x) for x in U8[:n]]
        r = build("s%02d%s" % (n, "" if crt else "n"), seq,
                  ["user32.lib"] + STD_LIBS[1:], crt)
        ins = [x.split(":", 1)[1] for x in r["symtab"]]
        INT = r["INT"]["USER32.dll"]
        res.append({"n": n, "ins": ins, "INT": INT, "perm": idx_perm(ins, INT)})
        print("single n=%2d perm=%s" % (n, res[-1]["perm"]))
    return res


def run_two():
    res = []
    for n in range(1, 8):
        for m in (1, 3, 5, 7):
            seq = [("user32", x) for x in U8[:n]] + [("winmm", x) for x in W5[:m]]
            r = build("t%d_%d" % (n, m), seq, ["user32.lib", "winmm.lib"])
            uins = [x.split(":", 1)[1] for x in r["symtab"] if x.startswith("user32:")]
            wins = [x.split(":", 1)[1] for x in r["symtab"] if x.startswith("winmm:")]
            up = idx_perm(uins, r["INT"]["USER32.dll"])
            wp = idx_perm(wins, r["INT"]["WINMM.dll"])
            res.append({"un": n, "wm": m, "u_perm": up, "w_perm": wp})
            print("two U%d W%d  U_perm=%s W_perm=%s" % (n, m, up, wp))
    return res


def run_three():
    cases = {
        "U8W5": [("user32", x) for x in U8[:8]] + [("winmm", x) for x in W5],
        "U8W5V3": [("user32", x) for x in U8[:8]] + [("winmm", x) for x in W5] + [("version", x) for x in V3],
        "U5W5V3": [("user32", x) for x in U8[:5]] + [("winmm", x) for x in W5] + [("version", x) for x in V3],
        "U3W5V3": [("user32", x) for x in U8[:3]] + [("winmm", x) for x in W5] + [("version", x) for x in V3],
        "W5V3": [("winmm", x) for x in W5] + [("version", x) for x in V3],
        "G6W5V3": [("gdi32", x) for x in G6] + [("winmm", x) for x in W5] + [("version", x) for x in V3],
        "G6W5": [("gdi32", x) for x in G6] + [("winmm", x) for x in W5],
        "G6U8W5V3": [("gdi32", x) for x in G6] + [("user32", x) for x in U8[:8]] + [("winmm", x) for x in W5] + [("version", x) for x in V3],
    }
    res = {}
    for tag, seq in cases.items():
        r = build(tag, seq, ["kernel32.lib", "user32.lib", "winmm.lib", "version.lib", "gdi32.lib"])
        per = {}
        for dll in r["INT"]:
            if dll in ("KERNEL32.dll",):
                continue
            base = {"USER32.dll": "user32", "WINMM.dll": "winmm", "VERSION.dll": "version",
                    "GDI32.dll": "gdi32"}.get(dll)
            if not base:
                continue
            ins = [x.split(":", 1)[1] for x in r["symtab"] if x.startswith(base + ":")]
            per[dll] = idx_perm(ins, r["INT"][dll])
        res[tag] = per
        print(tag, per)
    return res


if __name__ == "__main__":
    out = {}
    if "--single" in sys.argv:
        out["single"] = run_single()
    if "--single-nocrt" in sys.argv:
        out["single_nocrt"] = run_single(crt=False)
    if "--two" in sys.argv:
        out["two"] = run_two()
    if "--three" in sys.argv:
        out["three"] = run_three()
    if "--out" in sys.argv:
        fn = sys.argv[sys.argv.index("--out") + 1]
        json.dump(out, open(os.path.join(ROOT, ".omo/agents/datamatch", fn), "w"), indent=1)
        print("wrote", fn)
