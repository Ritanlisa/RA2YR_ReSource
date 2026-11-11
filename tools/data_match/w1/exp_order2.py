#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
exp_order2.py -- probe *which* input order drives the INT permutation:
symtab (extrn declaration) order vs relocation (.data dd) order vs extra
non-import externals interspersed.

Case naming: t_<tag>.asm built with side.obj/main.obj/user32.lib(+libcmt).
"""
import os, subprocess, sys, json

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
        if k.replace("\\", "/").endswith("/%s.lib" % base):
            return {m["import_name"]: m["sym"] for m in LIBS[k] if m["mode"] == "NAME"}
    raise KeyError(base)


U = syms_of("user32")
NAMES = ["GetKeyState", "GetFocus", "SendMessageA", "GetDC", "MessageBoxA",
         "GetWindowRect", "InvalidateRect", "SetCursor"]


def gen(tag, extrn_entries, data_entries, crt=True):
    """extrn_entries: list of raw symbols/import names in extrn order.
    data_entries: list of raw entries for the dd table."""
    def raw(e):
        if e.startswith("@"):  # non-import symbol
            return e[1:]
        return U[e]
    lines = ["        .386", "        .model flat", ""]
    for e in extrn_entries:
        lines.append("        extrn %s:dword" % raw(e) if e.startswith("@")
                     else "        extrn %s:proc" % raw(e))
    lines += ["", "        .data", "        public _refTable", "_refTable   label dword"]
    for e in data_entries:
        lines.append("        dd  %s" % raw(e))
    lines += ["", "        .code", "_start:", "        mov eax, dword ptr [_refTable]",
              "        ret", "", "        end _start"]
    open(os.path.join(W1, "o_%s.asm" % tag), "w").write("\n".join(lines))
    subprocess.run([os.path.join(VC, "ML.EXE"), "/coff", "/c", "o_%s.asm" % tag],
                   cwd=W1, env=ENV, check=True, capture_output=True)
    cmd = [os.path.join(VC, "LINK.EXE"), "/nologo", "/subsystem:windows",
           "/machine:I386", "/fixed", "/filealign:0x1000", "/opt:ref", "/opt:icf",
           "/out:o_%s.exe" % tag, "o_%s.obj" % tag]
    if crt:
        cmd += ["side.obj", "main.obj"]
    cmd += ["user32.lib"]
    if crt:
        cmd += ["libcmt.lib"]
    subprocess.run(cmd, cwd=W1, env=ENV, check=True, capture_output=True)
    P = parse(os.path.join(W1, "o_%s.exe" % tag))
    d = next((x for x in P["descs"] if x["dll"] == "USER32.dll"), None)
    INT = [f["name"] for f in d["funcs"]] if d else []
    st = obj_externs(os.path.join(W1, "o_%s.obj" % tag))
    return INT, [s.lstrip("@") for s in st]


def idx(ins, out):
    r = []
    for x in out:
        try:
            r.append(ins.index(x))
        except ValueError:
            r.append(-1)
    return r


def main():
    out = {}
    A, B, C, D = NAMES[:4]
    cases = []
    # 1) symtab order == dd order
    cases.append(("base4", [A, B, C, D], [A, B, C, D]))
    # 2) symtab ABCD, dd permuted CADB
    cases.append(("dd_CADB", [A, B, C, D], [C, A, D, B]))
    # 3) symtab permuted, dd base
    cases.append(("st_CABD", [C, A, B, D], [A, B, C, D]))
    # 4) non-import extern interspersed in extrn order
    cases.append(("mix_x1", [A, "@_refTable2", B, C, D], [A, "@_refTable2", B, C, D]))
    cases.append(("mix_x0", ["@_refTable2", A, B, C, D], ["@_refTable2", A, B, C, D]))
    cases.append(("mix_x4", [A, B, C, D, "@_refTable2"], [A, B, C, D, "@_refTable2"]))
    # 5) 8 imports with dd permuted
    cases.append(("base8", NAMES, NAMES))
    cases.append(("dd8_perm", NAMES, [NAMES[i] for i in [7, 0, 6, 1, 5, 2, 4, 3]]))
    # 6) only 4 imports but a dummy unused extrn (not referenced anywhere)
    cases.append(("unused_x", [A, "@_refTable2", B, C, D], [A, B, C, D]))
    for tag, ex, de in cases:
        INT, st = gen(tag, ex, de)
        ins = [NAMEDICT.get(x, x) for x in st]
        p = idx(ins, INT)
        out[tag] = {"extrn": ex, "dd": de, "symtab": st, "INT": INT, "perm": p}
        print("%-10s symtab=%s dd=%s" % (tag, [x[:6] for x in st], [x[:6] for x in de]))
        print("           INT=%s perm=%s" % ([x[:6] for x in INT], p))


NAMEDICT = {}
for n in NAMES:
    NAMEDICT[U[n]] = n

if __name__ == "__main__":
    main()
    json.dump({}, open(os.path.join(W1, "dummy.json"), "w"))
