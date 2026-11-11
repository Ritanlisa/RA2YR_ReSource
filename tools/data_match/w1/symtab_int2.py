#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
symtab_int2.py -- insertion sequence from ref.obj symbol table order (true
LINK insertion), crosswalked via ref.asm extrn comments. Compare with INT.
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
    out = []
    q = symptr; i = 0
    while i < nsym:
        z, off = struct.unpack_from("<II", b, q)
        sec = struct.unpack_from("<h", b, q+12)[0]; sc = b[q+16]; naux = b[q+17]
        if sec == 0 and sc == 2:
            if z == 0 and off != 0:
                s = strtab + off
                e = b.find(b"\x00", s)
                out.append(b[s:e].decode("latin1"))
            else:
                out.append(b[q:q+8].rstrip(b"\x00").decode("latin1"))
        i += 1+naux; q += 18*(1+naux)
    return out

def refasm_map():
    txt = open(os.path.join(W1, "ref.asm"), encoding="latin1").read().splitlines()
    m = {}
    for ln in txt:
        mm = re.match(r"\s*extrn\s+(\S+):proc\s*;\s+(\S+)\s+(\S+)", ln)
        if mm:
            m[mm.group(1)] = (mm.group(2), mm.group(3))
    return m

def main():
    symtab = obj_externs(os.path.join(W1, "ref.obj"))
    xw = refasm_map()
    sd = json.load(open(os.path.join(ROOT, ".omo/agents/datamatch/slot_diff.json")))
    tag2pool = {}
    for dll, r in sd.items():
        for i, t in enumerate(r["ins"]):
            tag2pool[(dll, t)] = i

    seq = []
    bad = []
    seen = set()
    for s in symtab:
        if s not in xw:
            bad.append(s); continue
        dll, tag = xw[s]
        seen.add(s)
        seq.append((s, dll, tag2pool[(dll, tag)]))
    print("symtab:", len(symtab), "mapped:", len(seq), "bad:", bad)
    print("ref.asm syms not in symtab:", [s for s in xw if s not in seen][:10])
    json.dump(seq, open(os.path.join(ROOT, ".omo/agents/datamatch/insertion_seq.json"), "w"))

    t2 = parse(os.path.join(W1, "test2.exe"))
    print(f"\n{'DLL':16} {'n':>4}  INT as positions of insertion(symtab) seq")
    summary = {}
    for d in t2["descs"]:
        dll = d["dll"]
        ins_pool = [pi for s, dd, pi in seq if dd == dll]
        r = sd[dll]
        idx = {t: i for i, t in enumerate(r["ins"])}
        INT_pool = []
        for f in d["funcs"]:
            t = f["name"] if f["mode"] == "NAME" else "@" + str(f["ordinal"])
            INT_pool.append(idx[t])
        pos = {p: i for i, p in enumerate(ins_pool)}
        INT_pos = [pos[p] for p in INT_pool]
        n = len(ins_pool)
        rev = INT_pos == list(range(n-1, -1, -1))
        asc = INT_pos == list(range(n))
        summary[dll] = {"ins_pool": ins_pool, "INT_pos": INT_pos}
        tag = "REV" if rev else ("ASC" if asc else "")
        print(f"{dll:16} {n:>4}  {tag or INT_pos[:26]}")
    json.dump(summary, open(os.path.join(ROOT, ".omo/agents/datamatch/int_in_symtab_space.json"), "w"))

if __name__ == "__main__":
    main()
