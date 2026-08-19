#!/usr/bin/env python3
"""
organize_functions.py — Group 8,285 scoped functions into module buckets.

Reads:  tools/functions_in_scope.json
Writes: tools/functions_by_module.json

Each function is assigned to exactly one output module based on its category
field and (for global/member categories) naming convention prefix rules.

Output modules (7 combined buckets per the _funcs.hpp plan):
  core, entity, object, system, render+ui, structure+house+team, misc+network
"""

import json
import os
import sys
from collections import defaultdict

# ── Paths ──────────────────────────────────────────────────────────────────
SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_ROOT = os.path.dirname(SCRIPT_DIR)
INPUT_FILE = os.path.join(SCRIPT_DIR, "functions_in_scope.json")
OUTPUT_FILE = os.path.join(SCRIPT_DIR, "functions_by_module.json")
EVIDENCE_FILE = os.path.join(PROJECT_ROOT, ".omo", "evidence", "task-5-organize.txt")

# ── Namespace map per combined output module ───────────────────────────────
# Determined by checking existing headers in src/<dir>/
#   object/ → ra2::game (verified: src/object/*.hpp use "namespace ra2")
#   all others → gamemd
MODULE_NAMESPACE = {
    "core":                  "gamemd",
    "entity":                "gamemd",
    "object":                "ra2::game",
    "system":                "gamemd",
    "render+ui":             "gamemd",
    "structure+house+team":  "gamemd",
    "misc+network":          "gamemd",
}

# ── Category → individual module mapping (direct routing) ───────────────────
# These categories bypass name-prefix routing entirely.
CATEGORY_TO_MODULE = {
    "rendering":  "render",
    "com":        "core",
    "locomotor":  "misc",
    "menu":       "ui",
    "yrpp_io":    "system",
}

# ── Name prefix → individual module rules (for "global" and "member" cats) ──
# Ordered list: first match wins.  Each entry = (prefix_tuple..., module).
# The function name (for global) or class-name portion before "::" (for member)
# is tested against each prefix.
NAME_PREFIX_RULES = [
    # render
    (("DDraw", "DirectDraw", "g_DDraw"),                                "render"),
    # misc
    (("Audio", "g_Audio", "Voc", "Vox", "Theme"),                       "misc"),
    # house
    (("House", "g_House"),                                               "house"),
    # team
    (("Team", "Trigger", "Tag", "Script", "Campaign"),                   "team"),
    # entity
    (("Anim", "Bullet", "Particle", "Smudge", "Overlay",
      "Tiberium", "Wave", "Terrain", "Voxel", "Tube"),                  "entity"),
    # structure
    (("Building", "Infantry", "Unit", "Aircraft"),                       "structure"),
    # object
    (("Object", "Techno", "Foot", "Mission", "Radio"),                   "object"),
    # system
    (("Map", "Cell", "Coord", "File", "Mix", "INI", "Convert",
      "Scen", "Factory", "Radar", "Tactical", "CRC", "Hash"),           "system"),
    # ui
    (("Gadget", "Dialog", "Label", "Menu", "Sidebar", "Mouse",
      "Command", "Message", "ToolTip", "Screen", "Tab", "Power"),       "ui"),
    # network
    (("Network", "Winsock", "Connection", "Session", "Multiplayer",
      "g_Net"),                                                          "network"),
    # misc (second pass for specific rules after broad prefixes)
    (("SuperWeapon", "Rules", "Locomotor", "Warhead"),                   "misc"),
]

# ── Combine individual modules into output buckets ─────────────────────────
INDIVIDUAL_TO_COMBINED = {
    "core":      "core",
    "entity":    "entity",
    "object":    "object",
    "system":    "system",
    "render":    "render+ui",
    "ui":        "render+ui",
    "structure": "structure+house+team",
    "house":     "structure+house+team",
    "team":      "structure+house+team",
    "misc":      "misc+network",
    "network":   "misc+network",
}


def extract_class_name(name: str) -> str:
    """For member-category functions, extract the class portion before '::'.
    Returns the full name if no '::' is present."""
    idx = name.find("::")
    if idx != -1:
        return name[:idx]
    return name


def match_prefix(name: str) -> str:
    """Return individual module name for a function based on its name prefix.
    Falls back to 'core' if no prefix matches."""
    for prefixes, module in NAME_PREFIX_RULES:
        for pfx in prefixes:
            if name.startswith(pfx):
                return module
    return "core"


def classify_function(entry: dict) -> str:
    """Return the individual module name for a single function entry."""
    cat = entry["category"]
    name = entry["name"]

    # Direct category routing (non-global, non-member)
    if cat in CATEGORY_TO_MODULE:
        return CATEGORY_TO_MODULE[cat]

    # For "global" and "member": use name-prefix routing
    if cat == "member":
        # Use class-name portion for prefix matching
        search_name = extract_class_name(name)
    else:
        search_name = name

    return match_prefix(search_name)


def main():
    # ── Load input ──────────────────────────────────────────────────────
    print(f"Reading {INPUT_FILE} …")
    with open(INPUT_FILE, "r", encoding="utf-8") as f:
        functions = json.load(f)

    total_input = len(functions)
    print(f"  Loaded {total_input} functions")

    # ── Classify each function to individual module ─────────────────────
    individual_buckets = defaultdict(list)
    for entry in functions:
        mod = classify_function(entry)
        individual_buckets[mod].append(entry)

    # ── Verify no double-counting ───────────────────────────────────────
    total_assigned = sum(len(v) for v in individual_buckets.values())
    assert total_assigned == total_input, \
        f"ASSERTION FAILED: assigned {total_assigned} != input {total_input}"

    # ── Combine individual buckets into output modules ──────────────────
    combined_buckets = defaultdict(list)
    for ind_mod, entries in individual_buckets.items():
        out_mod = INDIVIDUAL_TO_COMBINED[ind_mod]
        combined_buckets[out_mod].extend(entries)

    # Verify combined total
    total_combined = sum(len(v) for v in combined_buckets.values())
    assert total_combined == total_input, \
        f"ASSERTION FAILED: combined {total_combined} != input {total_input}"

    # ── Build output structure ──────────────────────────────────────────
    output = {}
    # Preserve a deterministic order for the 7 modules
    MODULE_ORDER = [
        "core",
        "entity",
        "object",
        "system",
        "render+ui",
        "structure+house+team",
        "misc+network",
    ]
    for mod in MODULE_ORDER:
        entries = combined_buckets.get(mod, [])
        output[mod] = {
            "namespace": MODULE_NAMESPACE[mod],
            "count": len(entries),
            "functions": entries,
        }

    # ── Write output JSON ───────────────────────────────────────────────
    print(f"\nWriting {OUTPUT_FILE} …")
    with open(OUTPUT_FILE, "w", encoding="utf-8") as f:
        json.dump(output, f, indent=2, ensure_ascii=False)
    print(f"  Done.")

    # ── Print summary ───────────────────────────────────────────────────
    print(f"\n{'─' * 60}")
    print(f"  Distribution summary ({total_input} total):")
    for mod in MODULE_ORDER:
        info = output[mod]
        print(f"    {mod:30s}  {info['count']:>5d}  ({info['namespace']})")
    print(f"{'─' * 60}")

    # ── Print per-individual-module detail ──────────────────────────────
    print(f"\n  Individual module detail:")
    for ind_mod in sorted(individual_buckets.keys()):
        count = len(individual_buckets[ind_mod])
        combined = INDIVIDUAL_TO_COMBINED[ind_mod]
        print(f"    {ind_mod:15s} → {combined:25s}  {count:>5d}")

    # ── Evidence file ───────────────────────────────────────────────────
    os.makedirs(os.path.dirname(EVIDENCE_FILE), exist_ok=True)
    with open(EVIDENCE_FILE, "w", encoding="utf-8") as f:
        f.write(f"organize_functions.py — execution evidence\n")
        f.write(f"========================================\n")
        f.write(f"Input:  {INPUT_FILE}\n")
        f.write(f"Output: {OUTPUT_FILE}\n")
        f.write(f"Total functions in scope: {total_input}\n")
        f.write(f"Total assigned:          {total_assigned}\n")
        f.write(f"Integrity: PASS (input == assigned == combined)\n\n")
        f.write(f"Distribution:\n")
        for mod in MODULE_ORDER:
            info = output[mod]
            f.write(f"  {mod:30s}  {info['count']:>5d}  ({info['namespace']})\n")
        f.write(f"\nIndividual module detail:\n")
        for ind_mod in sorted(individual_buckets.keys()):
            count = len(individual_buckets[ind_mod])
            combined = INDIVIDUAL_TO_COMBINED[ind_mod]
            f.write(f"  {ind_mod:15s} → {combined:25s}  {count:>5d}\n")
        f.write(f"\nRules applied:\n")
        f.write(f"  Category direct routing: {list(CATEGORY_TO_MODULE.keys())}\n")
        f.write(f"  Name prefix routing: global + member categories\n")
        f.write(f"  Prefix rules: {len(NAME_PREFIX_RULES)} rule groups\n")
    print(f"\nEvidence saved: {EVIDENCE_FILE}")

    return 0


if __name__ == "__main__":
    sys.exit(main())
