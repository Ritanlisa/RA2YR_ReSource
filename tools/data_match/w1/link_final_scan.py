#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
link_final_scan.py -- full .text linear disasm of LINK.EXE 6.00.8447.
Builds function map + xref index for suspect globals. Writes link_fns.json.
"""
import struct, json, os, sys
from capstone import *
from capstone.x86 import *

PATH = r"D:\RA2YR_ReSource\.vc6-8447\BIN\LINK.EXE"
b = open(PATH, "rb").read()
e = struct.unpack_from("<I", b, 0x3C)[0]
opt = e + 24
imagebase = struct.unpack_from("<I", b, opt+28)[0]
so = opt + struct.unpack_from("<H", b, e+20)[0]
nsec = struct.unpack_from("<H", b, e+6)[0]
secs = []
for i in range(nsec):
    o = so + i*40
    name = b[o:o+8].rstrip(b"\x00").decode("latin1")
    vs, va, rs, ptr = struct.unpack_from("<IIII", b, o+8)
    secs.append((name, va, vs, ptr, rs))

TNAME, TVA, TVS, TPTR, TRS = next(s for s in secs if s[0] == ".text")
TEXT = b[TPTR:TPTR+TRS]

md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True

# ---- linear sweep with gap skipping ----
insns = []
off = 0
base = imagebase + TVA
while off < len(TEXT):
    got = False
    for ins in md.disasm(TEXT[off:], base + off):
        insns.append(ins)
        off = ins.address - base + ins.size
        got = True
    if not got:
        off += 1  # skip bad byte
print("insn count:", len(insns))

addr2idx = {ins.address: i for i, ins in enumerate(insns)}

# ---- function boundaries: prologue or after ret/jmp padding ----
# MSVC: push ebp; mov ebp,esp  OR  push ebx/esi/edi + sub esp
fn_starts = set()
prev_was_term = True
for i, ins in enumerate(insns):
    if prev_was_term and ins.mnemonic in ("push", "mov", "sub", "cmp", "lea", "call", "xor", "or"):
        # candidate start after terminator
        fn_starts.add(i)
        prev_was_term = False
    # update terminator status
    if ins.mnemonic in ("ret", "retn", "jmp", "iret", "int3") or ins.mnemonic.startswith("ret"):
        # jmp is terminator only if outside operand range... keep simple
        prev_was_term = True
    elif ins.mnemonic == "call":
        prev_was_term = False
    elif ins.mnemonic == "nop":
        pass  # nop doesn't clear term
    else:
        prev_was_term = False

# better: also explicit calls create function starts
call_targets = set()
for ins in insns:
    if ins.mnemonic in ("call", "jmp"):
        for op in ins.operands:
            if op.type == X86_OP_IMM:
                call_targets.add(op.imm)

# a function start = any call target, plus prologue scans
starts = []
for i, ins in enumerate(insns):
    va = ins.address
    if va in call_targets:
        starts.append(i)
starts = sorted(set(starts))
print("call-target fn starts:", len(starts))

# map addr -> fn start index
idx2fn = {}
fnid = -1
startset = set(starts)
fnlist = []  # (start_addr, end_addr)
cur_start = None
for i, ins in enumerate(insns):
    if i in startset:
        if cur_start is not None:
            fnlist.append((insns[cur_start].address, ins.address))
        cur_start = i
if cur_start is not None:
    fnlist.append((insns[cur_start].address, insns[-1].address + insns[-1].size))
print("functions:", len(fnlist))

i2fn = {}
for fid, (fa, fb) in enumerate(fnlist):
    for i, ins in enumerate(insns):
        if fa <= ins.address < fb:
            i2fn[i] = fid

# ---- xref scan for target VAs ----
TARGETS = {
    0x478258: "map_c2_to_c1",
    0x47CA58: "counter1",
    0x47CA5A: "counter2",
    0x474258: "serialArray",
    0x46E240: "bucketHeads",
    0x46E234: "segArray",
    0x4695E8: "dllSegFifo",
    0x46ADF0: "recBufA",
    0x46ADF4: "recBufB",
    0x46E1F8: "recCount",
}
xrefs = {}  # target -> [(insn_addr, fn_addr, mnemonic, op_str)]
for i, ins in enumerate(insns):
    refs = set()
    for op in ins.operands:
        if op.type == X86_OP_IMM and op.imm in TARGETS:
            refs.add(op.imm)
        elif op.type == X86_OP_MEM:
            d = op.mem.disp & 0xFFFFFFFF
            # exact disp or disp+index*4 covering array
            if d in TARGETS:
                refs.add(d)
            # inside 0x1000*4 array windows
            for t in (0x478258, 0x474258):
                if t <= d < t + 0x4000:
                    refs.add(t)
            if 0x4695E8 <= d < 0x4695E8 + 0x100:
                refs.add(0x4695E8)
    for t in refs:
        xrefs.setdefault(t, []).append((ins.address, ins.address, ins.mnemonic, ins.op_str))

# merge to function level
fnx = {}
for t, lst in xrefs.items():
    fset = {}
    for ia, _, mn, ops in lst:
        fid = None
        # find fn containing
        lo, hi = 0, len(fnlist)-1
        for f, (fa, fb) in enumerate(fnlist):
            if fa <= ia < fb:
                fid = f
                break
        fset.setdefault(fid, []).append((ia, mn, ops))
    fnx[TARGETS[t]] = {hex(fnlist[f][0]): v for f, v in sorted(fset.items(), key=lambda kv: kv[0]) if f is not None}

out = {"fns": [(hex(a), hex(bb)) for a, bb in fnlist],
       "xrefs": fnx}
json.dump(out, open(r"D:\RA2YR_ReSource\.omo\agents\datamatch\link_fns.json", "w"))
print("\n== xref summary ==")
for name, d in fnx.items():
    print(f"{name}: {len(d)} functions")
    for fa, lst in d.items():
        print(f"   fn@{fa}: {len(lst)} refs  first=0x{lst[0][0]:X} {lst[0][1]} {lst[0][2]}")
