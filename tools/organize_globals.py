#!/usr/bin/env python3
"""
organize_globals.py — Route new engine globals to per-module buckets.

Inputs:
  tools/globals_extracted.json  — 1,383 engine globals from IDA
  tools/existing_defs.json      — 910 existing C++ declarations

Output:
  tools/globals_by_module.json  — dict of {module_name: {"globals": [entries]}}

Module routing:
  Address-based (primary):
    0xA8xxxx → core      (game state / command line)
    0x88xxxx → render    (DDraw / rendering)
    0xB0xxxx → object    (object pools)
    0x87xxxx → system    (system / map cells)
    0x81xxxx → core      (CRT init data)
    0x82-86xxxx → core   (large middle .data range)
  Name-prefix (fallback for unmatched address ranges):
    g_Audio / Voc / Vox   → misc
    g_House               → house
    g_Anim / g_Bullet / g_Particle → entity
    g_Network             → network
    g_DDraw / g_BitShift / g_Visible → render
    g_BuildingType / g_Infantry / g_Unit / g_Aircraft → structure
    g_Team / g_Trigger / g_Script → team
    Everything else → core

Combined output modules (6 files):
  core, render, object, structure, system_misc_network, entity_house_team
"""

import json
import sys
from pathlib import Path
from collections import OrderedDict

ROOT = Path(__file__).resolve().parent.parent


def load_json(path: Path):
    with open(path, "r", encoding="utf-8") as f:
        return json.load(f)


def addr_prefix(addr_str: str) -> str:
    """Extract 0xNNxxxx prefix from address string."""
    addr = int(addr_str, 16)
    hi = (addr >> 16) & 0xFF
    return f"0x{hi:02X}xxxx"


def classify_by_address(prefix: str) -> str | None:
    """Return module name if address range matches a known category, else None."""
    hi = int(prefix[2:4], 16)  # extract NN from 0xNNxxxx

    if hi == 0xA8:
        return "core"       # game state / command line
    if hi == 0x88:
        return "render"     # DDraw / rendering
    if hi == 0xB0:
        return "object"     # object pools
    if hi == 0x87:
        return "system"     # system / map cells
    if hi == 0x81:
        return "core"       # CRT init data
    if 0x82 <= hi <= 0x86:
        return "core"       # large middle .data range
    return None


def classify_by_name(name: str) -> str:
    """Infer module from global variable name prefix."""
    # Audio subsystem
    if name.startswith("g_Audio") or name.startswith("Voc") or name.startswith("Vox"):
        return "misc"

    # House subsystem
    if name.startswith("g_House"):
        return "house"

    # Entity subsystem
    if (name.startswith("g_Anim") or name.startswith("g_Bullet")
            or name.startswith("g_Particle")):
        return "entity"

    # Network
    if name.startswith("g_Network"):
        return "network"

    # Render fallback
    if (name.startswith("g_DDraw") or name.startswith("g_BitShift")
            or name.startswith("g_Visible")):
        return "render"

    # Structure subsystem
    if (name.startswith("g_BuildingType") or name.startswith("g_Infantry")
            or name.startswith("g_Unit") or name.startswith("g_Aircraft")):
        return "structure"

    # Team / Trigger / Script
    if (name.startswith("g_Team") or name.startswith("g_Trigger")
            or name.startswith("g_Script")):
        return "team"

    # Everything else → core
    return "core"


def combine_modules(fine_modules: dict[str, list]) -> dict[str, dict]:
    """Merge fine-grained modules into 6 output buckets."""
    output = OrderedDict()

    # Bucket definitions: output_name → [source_module_names]
    buckets = OrderedDict([
        ("core", ["core"]),
        ("render", ["render"]),
        ("object", ["object"]),
        ("structure", ["structure", "team"]),
        ("system_misc_network", ["system", "misc", "network"]),
        ("entity_house_team", ["entity", "house"]),
    ])

    for bucket_name, source_names in buckets.items():
        merged = []
        for src in source_names:
            merged.extend(fine_modules.get(src, []))
        output[bucket_name] = {"globals": merged}

    return output


def main():
    print("=" * 60)
    print("  organize_globals.py — Module Router")
    print("=" * 60)

    # 1. Load inputs
    extracted = load_json(ROOT / "tools" / "globals_extracted.json")
    existing = load_json(ROOT / "tools" / "existing_defs.json")
    print(f"\nLoaded: {len(extracted)} extracted + {len(existing)} existing")

    # 2. Build exclude set
    exclude = {e["name"] for e in existing}
    print(f"Exclude set: {len(exclude)} unique names")

    # 3. Filter new globals
    new_globals = [g for g in extracted if g["name"] not in exclude]
    print(f"New globals: {len(new_globals)}")

    # 4. Route to fine modules
    fine = OrderedDict()
    route_stats = OrderedDict()
    for g in new_globals:
        addr = g["addr"]
        pfx = addr_prefix(addr)
        module = classify_by_address(pfx)
        method = f"addr:{pfx}"

        if module is None:
            module = classify_by_name(g["name"])
            method = f"name:{g['name']}"

        fine.setdefault(module, []).append(g)
        route_stats.setdefault(method, 0)
        route_stats[method] += 1

    # 5. Print fine-grained routing stats
    print("\n--- Fine-grained modules ---")
    for mod_name in fine:
        print(f"  {mod_name:20s}: {len(fine[mod_name]):4d} globals")
    total_fine = sum(len(v) for v in fine.values())
    print(f"  {'TOTAL':20s}: {total_fine:4d} globals")

    # 6. Combine into 6 output modules
    combined = combine_modules(fine)
    output_path = ROOT / "tools" / "globals_by_module.json"

    print("\n--- Combined output modules (6 buckets) ---")
    for bucket_name, bucket_data in combined.items():
        n = len(bucket_data["globals"])
        print(f"  {bucket_name:25s}: {n:4d} globals")
    total_combined = sum(len(b["globals"]) for b in combined.values())
    print(f"  {'TOTAL':25s}: {total_combined:4d} globals")

    # 7. Verify
    if total_fine != total_combined:
        print(f"\nERROR: fine total ({total_fine}) != combined total ({total_combined})")
        sys.exit(1)

    if total_combined != len(new_globals):
        print(f"\nERROR: combined total ({total_combined}) != new globals ({len(new_globals)})")
        sys.exit(1)

    # Check no excluded names present
    combined_names = set()
    for bucket_data in combined.values():
        for g in bucket_data["globals"]:
            combined_names.add(g["name"])
    leaked = combined_names & exclude
    if leaked:
        print(f"\nERROR: {len(leaked)} excluded names leaked into output: {list(leaked)[:10]}")
        sys.exit(1)

    # 8. Write output
    with open(output_path, "w", encoding="utf-8") as f:
        json.dump(combined, f, indent=2, ensure_ascii=False)
    print(f"\n[OK] Written: {output_path}")

    # 9. Routing method stats
    print("\n--- Routing method breakdown ---")
    for method, count in sorted(route_stats.items(), key=lambda x: -x[1]):
        print(f"  {method:30s}: {count:4d}")

    print("\n[OK] Done.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
