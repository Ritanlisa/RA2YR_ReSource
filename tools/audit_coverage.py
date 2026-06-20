#!/usr/bin/env python3
"""
audit_coverage.py — Verify all non-CRT game functions have // 0xADDR annotations in hpp files.

Cross-references:
  - functions.json (19,067 entries) — ground truth of all game functions
  - tools/fr_crt_exclusions.json (1,874 addresses) — CRT/import functions to exclude
  - src/**/*.hpp, app/**/*.hpp — annotation sources

Output:
  - stdout: coverage statistics
  - tools/coverage_gaps.json: list of missing functions
"""

import json
import os
import re
import sys
from pathlib import Path
from collections import defaultdict

ROOT = Path(__file__).resolve().parent.parent

FUNCTIONS_JSON = ROOT / "injectFunctionTest" / "functions.json"
CRT_EXCLUSIONS = ROOT / "tools" / "fr_crt_exclusions.json"
OUTPUT_GAPS = ROOT / "tools" / "coverage_gaps.json"

# Directories to scan for hpp annotations
SCAN_DIRS = ["src", "app"]


def normalize_addr(addr_str: str) -> str:
    """Normalize address to lowercase hex string like '0x401000'."""
    addr_str = addr_str.strip().lower()
    if addr_str.startswith("0x"):
        try:
            val = int(addr_str, 16)
            return f"0x{val:x}"
        except ValueError:
            return addr_str
    return addr_str


def extract_hpp_annotations() -> set:
    """Extract all // 0xADDR annotations from hpp files in src/ and app/."""
    pattern = re.compile(r"// 0x([0-9A-Fa-f]{5,8})")
    addrs = set()

    hpp_count = 0
    for scan_dir in SCAN_DIRS:
        dir_path = ROOT / scan_dir
        if not dir_path.exists():
            print(f"  WARNING: {dir_path} does not exist, skipping")
            continue
        for fp in dir_path.rglob("*.hpp"):
            hpp_count += 1
            try:
                content = fp.read_text(encoding="utf-8", errors="ignore")
            except Exception as e:
                print(f"  WARNING: Cannot read {fp}: {e}")
                continue
            for m in pattern.finditer(content):
                addr_hex = m.group(1).lower()
                # Only accept text section addresses (0x4xxxxx-0x7FFFFF)
                try:
                    val = int(addr_hex, 16)
                except ValueError:
                    continue
                if 0x400000 <= val <= 0x7FFFFF:
                    addrs.add(f"0x{val:x}")

    print(f"  Scanned {hpp_count} hpp files")
    print(f"  Found {len(addrs)} unique text-section address annotations")
    return addrs


def load_functions_json() -> list:
    """Load all function entries from functions.json."""
    with open(FUNCTIONS_JSON) as f:
        data = json.load(f)
    funcs = data.get("functions", data if isinstance(data, list) else [])
    print(f"  Loaded {len(funcs)} functions from functions.json")
    return funcs


def load_crt_exclusions() -> set:
    """Load CRT/import exclusion addresses."""
    with open(CRT_EXCLUSIONS) as f:
        data = json.load(f)
    excluded = data.get("excluded_addresses", [])
    normalized = {normalize_addr(a) for a in excluded}
    print(f"  Loaded {len(normalized)} CRT exclusion addresses")
    return normalized


def classify_functions(funcs: list, crt_set: set) -> tuple:
    """Split functions into game (non-CRT) and CRT categories."""
    game_funcs = []
    crt_funcs = []
    data_addrs = []

    for f in funcs:
        addr = normalize_addr(f.get("address", ""))
        if addr in crt_set:
            crt_funcs.append(f)
            continue
        # Check if it's in text section range
        try:
            val = int(addr, 16)
        except ValueError:
            crt_funcs.append(f)
            continue

        if 0x400000 <= val <= 0x7FFFFF:
            game_funcs.append(f)
        elif val < 0x400000 or val >= 0x800000:
            # Data section; count separately
            data_addrs.append(f)
        else:
            game_funcs.append(f)

    return game_funcs, crt_funcs, data_addrs


def run_audit() -> dict:
    """Main audit logic."""
    print("=" * 60)
    print("RA2YR Coverage Audit: // 0xADDR hpp annotations")
    print("=" * 60)

    # Step 1: Extract hpp annotations
    print("\n[1] Extracting hpp annotations...")
    hpp_addrs = extract_hpp_annotations()

    # Step 2: Load functions.json
    print("\n[2] Loading functions.json...")
    funcs = load_functions_json()

    # Step 3: Load CRT exclusions
    print("\n[3] Loading CRT exclusions...")
    crt_set = load_crt_exclusions()

    # Step 4: Classify
    print("\n[4] Classifying functions...")
    game_funcs, crt_funcs, data_addrs = classify_functions(funcs, crt_set)
    total_game = len(game_funcs)
    print(f"  Game functions (text section, non-CRT): {total_game}")
    print(f"  CRT functions (excluded): {len(crt_funcs)}")
    print(f"  Data-section addresses: {len(data_addrs)}")

    # Step 5: Cross-reference
    print("\n[5] Cross-referencing game functions vs hpp annotations...")
    missing = []
    covered = 0

    # Build lookup by name for better reporting
    for f in game_funcs:
        addr = normalize_addr(f.get("address", ""))
        if addr in hpp_addrs:
            covered += 1
        else:
            missing.append(f)

    coverage_pct = (covered / total_game * 100) if total_game > 0 else 0.0

    print(f"\n  RESULTS")
    print(f"  {'─' * 40}")
    print(f"  Total game functions:     {total_game}")
    print(f"  Covered (addr in hpp):    {covered}")
    print(f"  Missing (no annotation):  {len(missing)}")
    print(f"  Coverage rate:            {coverage_pct:.2f}%")

    # Step 6: Analyze missing by module
    missing_by_module = defaultdict(list)
    missing_by_size = defaultdict(int)
    for f in missing:
        name = f.get("name", "unknown")
        # Extract module from name or category
        cat = f.get("category", "unknown")
        missing_by_module[cat].append(f)
        size = f.get("size", 0)
        if size == 0:
            missing_by_size["0 (nullsub)"] += 1
        elif size < 10:
            missing_by_size["1-9 bytes"] += 1
        elif size < 50:
            missing_by_size["10-49 bytes"] += 1
        elif size < 200:
            missing_by_size["50-199 bytes"] += 1
        else:
            missing_by_size["200+ bytes"] += 1

    print(f"\n  Missing by size range:")
    for cat in ["0 (nullsub)", "1-9 bytes", "10-49 bytes", "50-199 bytes", "200+ bytes"]:
        count = missing_by_size.get(cat, 0)
        if count > 0:
            print(f"    {cat:20s}: {count:5d}")

    print(f"\n  Missing by category (top 15):")
    sorted_cats = sorted(missing_by_module.items(), key=lambda x: len(x[1]), reverse=True)
    for cat, func_list in sorted_cats[:15]:
        print(f"    {cat:30s}: {len(func_list):5d}")

    # Step 7: Build detailed gaps report
    gaps_report = {
        "metadata": {
            "total_game_functions": total_game,
            "covered": covered,
            "missing": len(missing),
            "coverage_pct": round(coverage_pct, 2),
            "crt_excluded": len(crt_funcs),
            "data_section": len(data_addrs),
            "hpp_annotations_found": len(hpp_addrs),
            "functions_json_total": len(funcs),
        },
        "missing_functions": [
            {
                "address": f.get("address", ""),
                "name": f.get("name", "unknown"),
                "size": f.get("size", 0),
                "category": f.get("category", "unknown"),
                "call": {
                    "convention": f.get("call", {}).get("convention", "unknown"),
                    "is_member": f.get("call", {}).get("is_member", False),
                    "is_virtual": f.get("call", {}).get("is_virtual", False),
                },
                "reason_hint": _guess_missing_reason(f),
            }
            for f in missing
        ],
        "missing_by_category": {
            cat: len(func_list)
            for cat, func_list in sorted_cats
        },
        "missing_by_size_range": dict(missing_by_size),
    }

    return gaps_report


def _guess_missing_reason(func: dict) -> str:
    """Provide a hint about why this function might lack annotation."""
    size = func.get("size", 0)
    name = func.get("name", "unknown")
    addr = func.get("address", "")

    if size == 0:
        return "nullsub (zero-size placeholder)"
    if name.startswith("sub_"):
        return "unnamed function (sub_ prefix)"
    if name.startswith("??"):
        return "C++ mangled name (likely CRT/STL import)"
    if "Adjustor" in name or "Thunk" in name:
        return "vtable thunk/adjustor"
    if name.startswith("_") and not name.startswith("_"):
        pass  # Not a CRT name pattern
    return "missing from hpp declarations"


def main():
    gaps_report = run_audit()

    # Write gaps to file
    with open(OUTPUT_GAPS, "w", encoding="utf-8") as f:
        json.dump(gaps_report, f, indent=2, ensure_ascii=False)

    print(f"\n  Gaps report written to: {OUTPUT_GAPS}")

    # Exit code: 0 if 100% coverage, 1 otherwise
    if gaps_report["metadata"]["missing"] == 0:
        print("\n  PASS: All game functions have // 0xADDR annotations.")
        return 0
    else:
        print(f"\n  NOTE: {gaps_report['metadata']['missing']} functions lack annotations.")
        return 1


if __name__ == "__main__":
    sys.exit(main())
