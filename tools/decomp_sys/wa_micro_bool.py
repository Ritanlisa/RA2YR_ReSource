#!/usr/bin/env python3
"""Micro-test: which C++ bool->int source form reproduces VC6's
`and dl,1; neg dl; sbb edx,edx; neg edx; inc edx` idiom?"""
import os, shutil, sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)
sys.path.insert(0, ROOT)
import decompile

SRC = r"""
typedef int BOOL;
extern unsigned int *v3;
extern int *p2;
void f0(){ p2[3] = ((v3[7] & 1) != 0) + 1; }
void f1(){ p2[3] = (bool)(v3[7] & 1) + 1; }
void f2(){ p2[3] = ((v3[7] & 1) ? 1 : 0) + 1; }
void f3(){ p2[3] = (v3[7] & 1) + 1; }
void f4(){ bool b = (v3[7] & 1) != 0; p2[3] = b + 1; }
void f5(){ p2[3] = ((unsigned char)(v3[7] & 1) != 0) + 1; }
void f6(){ p2[3] = (unsigned char)((v3[7] & 1) != 0) + 1; }
void f7(){ bool b = (v3[7] & 1) != 0; p2[3] = (int)b + 1; }
void f8(){ p2[3] = ((v3[7] & 1) == 1) + 1; }
void f9(){ p2[3] = !!((v3[7] & 1)) + 1; }
void g0(){ p2[3] = (v3[7] & 1) + true; }
void g1(){ p2[3] = true + (v3[7] & 1); }
void g2(){ bool b = v3[7] & 1; p2[3] = b + 1; }
void g3(){ p2[3] = (int)(bool)(v3[7] & 1) + 1; }
void g4(){ p2[3] = (v3[7] & 1) + (bool)1; }
void g5(){ BOOL b = (v3[7] & 1) != 0; p2[3] = b + 1; }
"""

TMP = os.path.join(ROOT, ".omo", "agents", "decomp_batch", "wa_probe", "micro_bool")
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
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
coff = bemod.Coff(os.path.join(TMP, "m.obj"))
md = Cs(CS_ARCH_X86, CS_MODE_32)
want = ["f%d" % i for i in range(10)] + ["g%d" % i for i in range(6)]
for name, fval, fsec in bemod.find_functions(coff):
    key = bemod.undecorate_key(name)
    if key not in want:
        continue
    sec = coff.data[fsec["ro"]:fsec["ro"] + fsec["rsz"]]
    blob = sec[fval:]
    end = bemod.function_end(blob, base=fval,
                             reloc_offs=frozenset(r["rva"] for r in
                                                  coff.relocs_of(fsec)))
    ins = ["%s %s" % (i.mnemonic, i.op_str) for i in md.disasm(blob[:end], 0)]
    print("%-4s %s" % (key, " ; ".join(ins)))
