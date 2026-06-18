"""
select_top_globals.py — Aggregate purity_effects.json refs per global address,
cross-reference with globals_extracted.json names, output top-200 most-referenced engine globals.

Inputs:
  injectFunctionTest/purity_effects.json   — per-function {r:[...], w:[...]} arrays
  tools/globals_extracted.json             — [{name, addr, size, segment, ida_type, has_type}]

Output:
  tools/top200_globals.json                — [{name, addr, ref_count, reads, writes, confidence_from_type_db}]
  .omo/evidence/task-21-top200.txt         — evidence log
"""

import json
import os
import sys
from collections import defaultdict

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_ROOT = os.path.dirname(SCRIPT_DIR)

PURITY_PATH = os.path.join(PROJECT_ROOT, "injectFunctionTest", "purity_effects.json")
GLOBALS_PATH = os.path.join(SCRIPT_DIR, "globals_extracted.json")
OUTPUT_PATH = os.path.join(SCRIPT_DIR, "top200_globals.json")
EVIDENCE_DIR = os.path.join(PROJECT_ROOT, ".omo", "evidence")
EVIDENCE_PATH = os.path.join(EVIDENCE_DIR, "task-21-top200.txt")

def norm_addr(addr_str: str) -> str:
    """Normalize address to lowercase 0x-prefixed 8-digit hex (e.g. 0x00815e98)."""
    s = addr_str.strip().lower()
    if s.startswith("0x"):
        s = s[2:]
    # Pad to 8 hex digits
    s = s.zfill(8)
    return "0x" + s

def build_name_map(globals_path: str) -> dict[str, dict]:
    """Build addr -> {name, size, ida_type, has_type} from globals_extracted.json."""
    with open(globals_path, "r", encoding="utf-8") as f:
        globals_data = json.load(f)

    name_map: dict[str, dict] = {}
    for entry in globals_data:
        addr = norm_addr(entry["addr"])
        name_map[addr] = {
            "name": entry["name"],
            "size": entry.get("size"),
            "ida_type": entry.get("ida_type"),
            "has_type": entry.get("has_type", False),
        }
    return name_map

def aggregate_refs(purity_path: str) -> dict[str, dict]:
    """Aggregate total reads/writes per data address across all functions."""
    with open(purity_path, "r", encoding="utf-8") as f:
        purity_data = json.load(f)

    ref_counts: dict[str, dict] = defaultdict(lambda: {"reads": 0, "writes": 0, "ref_count": 0, "funcs": set()})

    funcs = purity_data.get("funcs", {})
    for func_addr, func_info in funcs.items():
        func_name = func_info.get("n", func_addr)

        for category in ("r", "w"):
            addrs = func_info.get(category, [])
            if not addrs:
                continue
            field = "reads" if category == "r" else "writes"
            for addr_str in addrs:
                addr = norm_addr(addr_str)
                ref_counts[addr][field] += 1
                ref_counts[addr]["ref_count"] += 1
                ref_counts[addr]["funcs"].add(func_name)

    # Convert sets to counts for evidence
    for addr in ref_counts:
        ref_counts[addr]["func_count"] = len(ref_counts[addr]["funcs"])
        # Remove large set for clean JSON serialization
        ref_counts[addr]["sample_funcs"] = sorted(list(ref_counts[addr]["funcs"]))[:5]

    return dict(ref_counts)

def main():
    print("=== select_top_globals.py ===")
    print(f"  purity_effects:  {PURITY_PATH}")
    print(f"  globals_extracted: {GLOBALS_PATH}")

    # 1. Build name map
    print("\n[1/4] Loading globals_extracted.json ...")
    name_map = build_name_map(GLOBALS_PATH)
    print(f"  {len(name_map)} named globals loaded")

    # 2. Aggregate refs
    print("[2/4] Aggregating purity_effects.json refs ...")
    ref_counts = aggregate_refs(PURITY_PATH)
    total_addrs = len(ref_counts)
    named_addrs = [a for a in ref_counts if a in name_map]
    print(f"  {total_addrs} total addresses referenced")
    print(f"  {len(named_addrs)} match named globals")

    # 3. Build result list for named globals only, filter min ref >= 10
    print("[3/4] Building top-200 list (min ref >= 10) ...")
    results = []
    for addr, counts in ref_counts.items():
        if addr not in name_map:
            continue
        if counts["ref_count"] < 10:
            continue
        info = name_map[addr]
        results.append({
            "name": info["name"],
            "addr": addr,
            "ref_count": counts["ref_count"],
            "reads": counts["reads"],
            "writes": counts["writes"],
            "confidence_from_type_db": info.get("has_type", False),
        })

    # Sort by ref_count descending
    results.sort(key=lambda x: x["ref_count"], reverse=True)

    # Take top 200
    top200 = results[:200]

    print(f"  Top {len(top200)} entries (min ref_count={top200[-1]['ref_count'] if top200 else 'N/A'})")

    # 4. Write outputs
    print("[4/4] Writing outputs ...")

    # JSON output
    with open(OUTPUT_PATH, "w", encoding="utf-8") as f:
        json.dump(top200, f, indent=2, ensure_ascii=False)
    print(f"  -> {OUTPUT_PATH} ({len(top200)} entries)")

    # Evidence file
    os.makedirs(EVIDENCE_DIR, exist_ok=True)
    with open(EVIDENCE_PATH, "w", encoding="utf-8") as f:
        f.write("=== task-21-top200 Evidence ===\n\n")
        f.write(f"Date: {__import__('datetime').datetime.now().isoformat()}\n")
        f.write(f"Script: tools/select_top_globals.py\n\n")
        f.write(f"source_purity:  {PURITY_PATH}\n")
        f.write(f"source_globals: {GLOBALS_PATH}\n")
        f.write(f"total_referenced_addrs: {total_addrs}\n")
        f.write(f"named_globals_in_refs:  {len(named_addrs)}\n")
        f.write(f"top200_min_ref_count:   {top200[-1]['ref_count'] if top200 else 'N/A'}\n")
        f.write(f"top200_max_ref_count:   {top200[0]['ref_count'] if top200 else 'N/A'}\n\n")

        # Top 30 detail
        f.write("=== Top 30 Globals ===\n")
        for i, g in enumerate(top200[:30]):
            f.write(f"{i+1:3d}. {g['name']:<50s} {g['addr']}  ref={g['ref_count']:>5d}  r={g['reads']:>5d}  w={g['writes']:>5d}\n")

        f.write("\n=== Last 5 Globals (bottom of top200) ===\n")
        for i, g in enumerate(top200[-5:]):
            f.write(f"{195+i:3d}. {g['name']:<50s} {g['addr']}  ref={g['ref_count']:>5d}  r={g['reads']:>5d}  w={g['writes']:>5d}\n")

    print(f"  -> {EVIDENCE_PATH}")

    # Quick verification
    print("\n=== VERIFICATION ===")
    print(f"  len(top200) = {len(top200)}")
    if top200:
        print(f"  min ref_count = {top200[-1]['ref_count']}")
        print(f"  max ref_count = {top200[0]['ref_count']}")
        all_named = all(g["name"] and g["addr"] for g in top200)
        print(f"  all have name+addr = {all_named}")
        print(f"  all ref_count >= 10 = {all(g['ref_count'] >= 10 for g in top200)}")
    print("Done.")


if __name__ == "__main__":
    main()
