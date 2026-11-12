#!/usr/bin/env python3
"""Micro-test: VC6 operand evaluation order for commutative binary ops on
two memory operands / memory+literal, to pin the generator's swap rule."""
import os, shutil, sys, subprocess

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)
sys.path.insert(0, ROOT)
import decompile

SRC = r"""
extern double a, b, c;
extern int ia, ib, ic;
extern float fa, fb, fc;
void f_mul(){ c = a * b; }
void f_add(){ c = a + b; }
void f_div(){ c = a / b; }
void f_mullit(){ c = a * 45.0; }
void f_litmul(){ c = 45.0 * a; }
void f_litlit(){ c = 0.0174532925199433 * 45.0; }
void f_imul(){ ic = ia * ib; }
void f_iadd(){ ic = ia + ib; }
void f_fmul(){ fc = fa * fb; }
"""

TMP = os.path.join(ROOT, ".omo", "agents", "decomp_batch", "wa_probe", "micro_src")
shutil.rmtree(TMP, ignore_errors=True)
os.makedirs(os.path.join(TMP, "include"))
open(os.path.join(TMP, "m.cpp"), "w", encoding="utf-8", newline="\n").write(SRC)
cr = decompile.era_compile(os.path.join(TMP, "m.cpp"), TMP)
print("rc", cr.returncode)
if cr.returncode:
    print(cr.stdout, cr.stderr)
    sys.exit(1)

sys.path.insert(0, os.path.join(ROOT, "tools", "codegen_match"))
import build_era as bemod
coff = bemod.Coff(os.path.join(TMP, "m.obj"))
fns = bemod.find_functions(coff)
want = ("f_mul", "f_add", "f_div", "f_mullit", "f_litmul", "f_litlit",
        "f_imul", "f_iadd", "f_fmul")
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
md = Cs(CS_ARCH_X86, CS_MODE_32)
for name, fval, fsec in fns:
    key = bemod.undecorate_key(name)
    if key not in want:
        continue
    sec = coff.data[fsec["ro"]:fsec["ro"] + fsec["rsz"]]
    blob = sec[fval:]
    end = bemod.function_end(blob, base=fval,
                             reloc_offs=frozenset(r["rva"] for r in
                                                  coff.relocs_of(fsec)))
    print("==", key, blob[:end].hex())
    for ins in md.disasm(blob[:end], 0):
        print("   %-8s %s" % (ins.mnemonic, ins.op_str))
