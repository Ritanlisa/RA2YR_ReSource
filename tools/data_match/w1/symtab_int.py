#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
symtab_int.py -- re-express test2's INT permutation in the REAL insertion
space: LINK inserts undefined externs in OBJ SYMBOL TABLE order (MASM's own
emission order), not extrn-directive order. Parse ref.obj symtab, map to
(dll, pool idx), and compare INT orders per DLL.
"""
import struct, json, os, re, sys
W1 = os.path.abspath(os.path.dirname(__file__))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "data_match"))
from compare_imports import parse

def obj_externs(path):
    b = open(path, "rb").read()
    symptr = struct.unpack_from("<I", b, 8)[0]
    nsym = struct.unpack_from("<I", b, 12)[0]
    strtab = symptr + 18*nsym
    def nm(o):
        z = struct.unpack_from("<I", b, o)[0]
        off = struct.unpack_from("<I", b, o+4)[0]
        if z == 0 and off != 0:
            s = strtab + off
            e = b.find(b"\x00", s)
            return b[s:e].decode("latin1")
        return b[o+8:o+16].rstrip(b"\x00").decode("latin1")
    q = symptr; i = 0; out = []
    while i < nsym:
        sec = struct.unpack_from("<h", b, q+12)[0]; sc = b[q+16]; naux = b[q+17]
        if sec == 0 and sc == 2: out.append(nm(q))
        i += 1+naux; q += 18*(1+naux)
    return out

def main():
    symtab = obj_externs(os.path.join(W1, "ref.obj"))
    print("ref.obj externs:", len(symtab))
    # map sym -> (dll, tag) using lib_members + orig
    LIBS = json.load(open(os.path.join(ROOT, ".omo/agents/datamatch/lib_members.json")))
    sym2imp = {}
    for k, members in LIBS.items():
        base = k.replace("\\", "/").split("/")[-1][:-4]
        for m in members:
            if m["sym"] not in sym2imp:
                if m["mode"] == "NAME":
                    sym2imp[m["sym"]] = (m["dll"], m["import_name"])
                else:
                    sym2imp[m["sym"]] = (m["dll"], "@%d" % m["ordinal"])
    # slot_diff gives pool index per (dll, tag)
    sd = json.load(open(os.path.join(ROOT, ".omo/agents/datamatch/slot_diff.json")))
    tag2pool = {}
    for dll, r in sd.items():
        for i, t in enumerate(r["ins"]):
            tag2pool[(dll, t)] = i

    seq = []  # (sym, dll, pool_idx) global insertion order
    misses = []
    for s in symtab:
        if s not in sym2imp:
            misses.append(s); continue
        dll, tag = sym2imp[s]
        pi = tag2pool.get((dll, tag))
        seq.append((s, dll, pi))
    print("mapped:", len(seq), "unmapped:", misses[:10])
    json.dump(seq, open(os.path.join(ROOT, ".omo/agents/datamatch/insertion_seq.json"), "w"))

    # per DLL: insertion sequence (pool idx in symtab order) vs INT (pool idx)
    t2 = parse(os.path.join(W1, "test2.exe"))
    print(f"\n{'DLL':16} {'n':>4}  ins(symtab) -> INT(pool idx)")
    for d in t2["descs"]:
        dll = d["dll"]
        ins_pool = [pi for s, dd, pi in seq if dd == dll]
        INT_pool = []
        r = sd[dll]
        idx = {t: i for i, t in enumerate(r["ins"])}
        for f in d["funcs"]:
            t = f["name"] if f["mode"] == "NAME" else "@" + str(f["ordinal"])
            INT_pool.append(idx[t])
        # INT as positions in ins_pool order
        pos = {p: i for i, p in enumerate(ins_pool)}
        INT_pos = [pos[p] for p in INT_pool]
        n = len(ins_pool)
        rev = INT_pos == list(range(n-1, -1, -1))
        print(f"{dll:16} {n:>4}  {'REV' if rev else INT_pos[:28]}")

if __name__ == "__main__":
    main()
