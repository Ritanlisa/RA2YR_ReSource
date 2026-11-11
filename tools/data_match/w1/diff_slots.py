#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
diff_slots.py -- build the (insertion -> INT) differential dataset for test2
and the orig INT order, per DLL, as index permutations.

Outputs .omo/agents/datamatch/slot_diff.json:
  for each dll: ins (names in stub reference order), t2_int (indices into ins),
  orig_int (indices into ins), pool (indices into ins by hn_off).
"""
import json, os, re, sys
W1 = os.path.abspath(os.path.dirname(__file__))
ROOT = os.path.abspath(os.path.join(W1, "..", "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "data_match"))
from compare_imports import parse

def ref_order():
    """Parse ref.asm: list of (dll, tag) in extrn order."""
    txt = open(os.path.join(W1, "ref.asm"), encoding="latin1").read().splitlines()
    out = []
    for ln in txt:
        m = re.match(r"\s*extrn\s+\S+:proc\s*;\s+(\S+)\s+(\S+)", ln)
        if m:
            out.append((m.group(1), m.group(2)))
    return out

def main():
    refs = ref_order()
    print(f"ref.asm: {len(refs)} extrn refs")
    t2 = parse(os.path.join(W1, "test2.exe"))
    orig = json.load(open(os.path.join(ROOT, ".omo/agents/datamatch/orig_imports.json")))

    # insertion index per (dll, tag); tags unique per dll (name or @ord)
    ins = {}
    for dll, tag in refs:
        ins.setdefault(dll, []).append(tag)

    res = {}
    for d in t2["descs"]:
        dll = d["dll"]
        if dll not in ins:
            print(f"!! {dll} not in ref.asm (CRT extras)")
            continue
        tags = ins[dll]
        idx = {t: i for i, t in enumerate(tags)}
        t2_int = []
        pool = []
        for f in d["funcs"]:
            t = f["name"] if f["mode"] == "NAME" else "@" + str(f["ordinal"])
            t2_int.append(idx[t])
            pool.append((f.get("hn_off", 1 << 30), idx[t]))
        pool.sort()
        pool = [i for _, i in pool]
        res[dll] = {"ins": tags, "n": len(tags), "t2_int": t2_int, "pool": pool}

    # orig INT order, mapped to ins indices
    for d in orig["descs"]:
        dll = d["dll"]
        if dll not in res:
            continue
        idx = {t: i for i, t in enumerate(res[dll]["ins"])}
        oi = []
        for f in d["funcs"]:
            t = f["name"] if "name" in f else "@" + str(f["ordinal"])
            oi.append(idx.get(t, -1))
        res[dll]["orig_int"] = oi

    out = os.path.join(ROOT, ".omo/agents/datamatch/slot_diff.json")
    json.dump(res, open(out, "w"), indent=1)
    print(f"wrote {out}")

    # human view
    print(f"\n{'DLL':16} {'n':>4}  ins->t2INT perm (first 24)   [R=exact-reverse hits]")
    rev_t2 = rev_o = 0
    for dll, r in res.items():
        n = r["n"]
        t2i = r["t2_int"]
        oi = r.get("orig_int", [])
        is_rev = t2i == list(range(n - 1, -1, -1))
        o_rev = oi == list(range(n - 1, -1, -1))
        rev_t2 += is_rev; rev_o += o_rev
        print(f"{dll:16} {n:>4}  t2={'REV' if is_rev else t2i[:20]}")
        if oi:
            print(f"{'':16} {'':>4}  og={'REV' if o_rev else oi[:20]}  eq_t2={oi==t2i}")
    print(f"\nexact-reverse DLLs: t2 {rev_t2}/{len(res)}, orig {rev_o}/{len(res)}")

if __name__ == "__main__":
    main()
