#!/usr/bin/env python3
"""pilot_diff.py -- codegen 对拍 for DECOMP-2 pilots (bonus linkage).

For each pilot function: extract the original gamemd.exe bytes
(tools/codegen_match/extract.py), compile the generated pilot cpp with the
era channel (build_era.compile_and_extract), and byte/disasm-compare
(diffasm).  MATCH = the converter's output reproduces the original machine
code under VC6/SP3 /O2.

Usage:  python tools/decomp_sys/pilot_diff.py [--out .omo/decomp_pilot]
"""
import argparse
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, ROOT)
sys.path.insert(0, os.path.join(ROOT, "tools", "codegen_match"))

from tools.codegen_match import extract as exmod      # noqa: E402
from tools.codegen_match import build_era as bemod    # noqa: E402
from tools.codegen_match import diffasm as dmod       # noqa: E402
from tools.codegen_match import ledger as lmod        # noqa: E402

PILOTS = [
    ("0x5B2990", "Math.cpp", "Abs16Cmp", False),
    ("0x5F6560", "Math.cpp", "DistSq2D", False),   # mismatch expected (vt)
    ("0x401940", "ObjectClass.cpp", "GetMember06", True),
    ("0x486380", "Cell.cpp", "IsEmpty", None),
    ("0x4870D0", "Cell.cpp", "IsPassableOffset", None),
    ("0x50B6F0", "House.cpp", "IsHumanPlayer", None),
]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", default=os.path.join(ROOT, ".omo", "decomp_pilot"))
    args = ap.parse_args()
    out = os.path.abspath(args.out)
    results = []
    for addr, cpp, sym, expect in PILOTS:
        print("=" * 72)
        print("DIFF %s  %s" % (addr, sym))
        try:
            art = exmod.extract_function(addr)
        except SystemExit as e:
            print("  orig extract failed:", e)
            continue
        orig_path = os.path.join(out, "orig_%s.json" % addr[2:])
        with open(orig_path, "w", encoding="utf-8") as f:
            json.dump(art, f, indent=1)
        cpp_path = os.path.join(out, cpp)
        inc = os.path.join(out, "include")
        try:
            ours, ours_path = bemod.compile_and_extract(
                cpp_path, out_dir=out, sym_filter=sym, tag=addr[2:],
                cflags=("/nologo", "/O2", "/Gy", "/c", "/I" + inc))
        except SystemExit as e:
            print("  era compile/extract failed:", e)
            results.append({"addr": addr, "sym": sym, "verdict": "ERA_FAIL",
                            "detail": str(e)})
            continue
        sa, _ = dmod.load_orig_side(orig_path)
        sb, _ = dmod.load_obj_side(ours_path)
        ok, first = dmod.compare(sa, sb, verbose=True)
        entry = {"addr": addr, "sym": sym, "orig_size": art["size"],
                 "ours_size": ours["size"],
                 "verdict": "MATCH" if ok else "MISMATCH"}
        if not ok and first and first[0] and first[1]:
            entry["first_diff"] = {
                "orig": "+%d %s" % (first[0]["off"], first[0]["disasm"]),
                "ours": "+%d %s" % (first[1]["off"], first[1]["disasm"]),
            }
            print("  first diff: ORIG %s | OURS %s" % (
                entry["first_diff"]["orig"], entry["first_diff"]["ours"]))
        print("  verdict: %s (orig %dB, ours %dB)"
              % (entry["verdict"], art["size"], ours["size"]))
        results.append(entry)
        lmod.record(addr, name=art.get("name") or sym,
                    status="OK" if ok else "NG",
                    first_diff=(entry.get("first_diff") or {}).get("orig"),
                    note="decomp_pilot")

    with open(os.path.join(out, "codegen_match.json"), "w",
              encoding="utf-8") as f:
        json.dump(results, f, indent=1)
    n_match = sum(1 for r in results if r["verdict"] == "MATCH")
    print("=" * 72)
    print("CODEGEN MATCH: %d/%d" % (n_match, len(results)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
