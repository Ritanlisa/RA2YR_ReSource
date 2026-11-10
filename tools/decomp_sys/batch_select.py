#!/usr/bin/env python3
"""batch_select.py -- DECOMP-2 family batch selector.

Round 2 expansion batch: simple methods of the CellClass / ObjectClass /
VectorClass / Math families, filtered from signals via the registry fn->cls
alignment (leaf + <100B + translated||completed), excluding the round-1
pilot batch (50 fns in .omo/agents/phasea/pilot_batch.json).

Output: .omo/decomp_batch/family_batch.json (same shape as pilot_batch.json)

Usage:  python tools/decomp_sys/batch_select.py [--n 50]
"""
import argparse
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, os.path.join(ROOT, ".omo", "agents", "phasea"))

import pilot_select  # noqa: E402  (reuses parse_exports / score_one)

FAMILIES = {"CellClass", "Cell", "ObjectClass", "VectorClass", "Math",
            "DynamicVectorClass"}     # VectorClass template family

OUT_DIR = os.path.join(ROOT, ".omo", "decomp_batch")
PILOT_BATCH = os.path.join(ROOT, ".omo", "agents", "phasea", "pilot_batch.json")
REGISTRY = os.path.join(ROOT, ".omo", "decomp_sys", "decomp_registry.json")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=50)
    args = ap.parse_args()

    reg = json.load(open(REGISTRY, encoding="utf-8"))
    # addr_low -> aligned registry fn record
    byaddr = {}
    for a, f in reg["functions"].items():
        if isinstance(f, dict):
            byaddr.setdefault(a.lower().replace("0x", ""), f)

    exclude = set()
    if os.path.exists(PILOT_BATCH):
        for e in json.load(open(PILOT_BATCH, encoding="utf-8")):
            exclude.add(e["addr"].lower().replace("0x", ""))

    exports = pilot_select.parse_exports()
    cands = []
    for a_low, f in byaddr.items():
        cls = f.get("cls")
        if cls not in FAMILIES:
            continue
        if f.get("cls_fold_suspect"):
            continue                      # ICF-fold / CRT thunks: no class
        if not (f.get("translated") or f.get("completed")):
            continue
        name = f.get("name") or ""
        if name.startswith(("nullsub_", "j_", "_", "?")):
            continue
        addr = int(a_low, 16)
        ev = exports.get(addr)
        if ev is None or ev["size"] < 4 or ev["size"] >= 100:
            continue
        # leaf: no calls, no ds: refs (score_one computes the features)
        sc, feats = pilot_select.score_one(name, ev, None)
        if not feats["leaf"]:
            continue
        if a_low in exclude:
            continue
        cands.append({
            "addr": "0x%X" % addr,
            "name": name,
            "cls": cls,
            "size": ev["size"],
            "src_file": None,
            "score": sc,
            "features": feats,
            "name_placeholder": bool(f.get("name_placeholder")),
        })

    # semantic-name-first within each family (fold garbage excluded above;
    # placeholder names kept only when a family runs dry), smallest-first
    def sort_key(c):
        fam = 0 if c["cls"] in ("VectorClass", "Math", "CellClass", "Cell",
                                "DynamicVectorClass") else 1
        return (fam, c["name_placeholder"], c["size"], -c["score"], c["addr"])

    cands.sort(key=sort_key)
    quota = {}
    caps = {"ObjectClass": 20}
    out = []
    for c in cands:
        if len(out) >= args.n:
            break
        fam = c["cls"]
        if quota.get(fam, 0) >= caps.get(fam, 10 ** 9):
            continue
        quota[fam] = quota.get(fam, 0) + 1
        out.append(c)

    os.makedirs(OUT_DIR, exist_ok=True)
    with open(os.path.join(OUT_DIR, "family_batch.json"), "w",
              encoding="utf-8") as fh:
        json.dump(out, fh, ensure_ascii=False, indent=1)

    fam_count = {}
    for c in out:
        fam_count[c["cls"]] = fam_count.get(c["cls"], 0) + 1
    print("family pool (leaf+<100B+translated, excl pilot) = %d" % len(cands))
    print("selected %d: %s" % (len(out), fam_count))
    ph = sum(1 for c in out if c["name_placeholder"])
    print("placeholder-named among selected: %d" % ph)
    for c in out[:10]:
        print("  %-9s %4dB  %-44s %s" % (c["addr"], c["size"], c["name"],
                                          c["cls"]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
