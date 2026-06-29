"""
verify_golden.py — Golden set verification for type inference engine.

Reads golden_set_results.md (known types) and type_map.json (engine output),
compares per-function, and outputs golden_set_verification.md with accuracy
broken down by confidence tier.

Usage:
    python tools/type_infer/verify_golden.py
    python tools/type_infer/verify_golden.py --output custom_path.md
"""

import json
import os
import re
import sys
from collections import defaultdict
from datetime import datetime


# ── paths ──
BASE = os.path.dirname(os.path.abspath(__file__))
PROJECT_ROOT = os.path.normpath(os.path.join(BASE, "..", ".."))
GOLDEN_PATH = os.path.join(PROJECT_ROOT, "golden_set_results.md")
TYPE_MAP_PATH = os.path.join(PROJECT_ROOT, "type_map.json")
DEFAULT_OUTPUT = os.path.join(PROJECT_ROOT, "golden_set_verification.md")

# ── regex patterns ──
_RE_TYPE = re.compile(r"(\w+Class)\*?")

# ── thiscall register mapping ──
# For thiscall: ECX = this pointer (on x86 MSVC)
THIS_REGISTER = "ecx"


def _normalize_addr(addr: str) -> str:
    """Normalize hex address to zero-padded 8-digit uppercase format.
    
    Examples: 0x447E90 → 0x00447E90, 0xA1B2 → 0x0000A1B2
    """
    addr = addr.strip()
    if addr.lower().startswith("0x"):
        hex_part = addr[2:]
    else:
        hex_part = addr
    return f"0x{int(hex_part, 16):08X}"


def parse_golden_set(path: str) -> list[dict]:
    """Parse golden_set_results.md and extract table entries.

    Table format:
        | # | Function | Addr | Expected `this` | Engine Slots | `this` Match |

    Uses positional column extraction (split by |) rather than regex
    because cells contain backtick-markup that breaks single-line regex.
    """
    entries = []
    in_table = False
    with open(path, "r", encoding="utf-8") as f:
        for line in f:
            stripped = line.strip()
            if not stripped.startswith("|"):
                continue

            # Skip header and separator rows
            if not in_table:
                if "#" in stripped and "Function" in stripped:
                    in_table = True
                continue

            # Split by pipe, trim each cell
            cells = [c.strip() for c in stripped.split("|")]
            # cells[0] = empty (leading pipe), cells[1] = #, cells[2] = Function, etc.
            if len(cells) < 8:
                continue

            idx_str = cells[1].strip()
            if not idx_str.isdigit():
                continue  # skip separator lines like |---|...

            func_name = cells[2].strip("`").strip()
            addr_raw = cells[3].strip()
            # Normalize to zero-padded 8-digit hex: 0x447E90 → 0x00447E90
            addr = _normalize_addr(addr_raw)
            expected_raw = cells[4].strip("`").strip()
            engine_slots = cells[5].strip("`").strip()
            match_status = cells[6].strip("`").strip()

            # Extract base class name from expected type
            expected_m = _RE_TYPE.search(expected_raw)
            expected_base = expected_m.group(1) if expected_m else expected_raw.replace("*", "").strip()

            entries.append({
                "index": int(idx_str),
                "function": func_name,
                "address": addr,
                "expected_type": expected_base,
                "expected_type_full": expected_raw,
                "engine_slots": engine_slots,
                "match_status_raw": match_status,
            })
    return entries


def lookup_type_map(type_map: dict, address: str, register: str = THIS_REGISTER) -> dict | None:
    """Look up a specific register entry in type_map."""
    key = f"{address}::{register}"
    return type_map.get(key)


def lookup_all_for_address(type_map: dict, address: str) -> list[dict]:
    """Get all register entries for a given function address."""
    prefix = f"{address}::"
    results = []
    for key, entry in type_map.items():
        if key.startswith(prefix) and entry.get("type") != "TOP":
            reg = key.split("::")[-1]
            results.append({
                "register": reg,
                "type": entry["type"],
                "confidence": entry["confidence"],
                "eq_root": entry["eq_root"],
            })
    return results


def normalize_type(type_str: str) -> str:
    """Strip pointer asterisk for comparison."""
    return type_str.rstrip("*").strip()


def check_match(expected_base: str, entries: list[dict]) -> dict:
    """
    Check if any register entry has the expected this-pointer type.

    Returns:
        {"status": "MATCH" | "MISMATCH" | "NOT_FOUND",
         "detail": str,
         "matched_register": str | None,
         "confidence": str | None,
         "all_entries": list}
    """
    # First, check ECX specifically (thiscall this pointer)
    ecx_entry = next((e for e in entries if e["register"] == THIS_REGISTER), None)
    if ecx_entry:
        if normalize_type(ecx_entry["type"]) == expected_base:
            return {
                "status": "MATCH",
                "detail": f"ecx={ecx_entry['type']}*",
                "matched_register": "ecx",
                "confidence": ecx_entry["confidence"],
                "all_entries": entries,
            }
        else:
            # ECX exists but wrong type
            return {
                "status": "MISMATCH",
                "detail": f"ecx={ecx_entry['type']}* (expected {expected_base}*)",
                "matched_register": "ecx",
                "confidence": ecx_entry["confidence"],
                "all_entries": entries,
            }

    # ECX not found — check if ANY register has the expected type
    for e in entries:
        if normalize_type(e["type"]) == expected_base:
            return {
                "status": "PARTIAL",
                "detail": f"{e['register']}={e['type']}* (correct type but not in ecx)",
                "matched_register": e["register"],
                "confidence": e["confidence"],
                "all_entries": entries,
            }

    # No entries at all for this address
    if not entries:
        return {
            "status": "NOT_FOUND",
            "detail": "function not in type_map.json",
            "matched_register": None,
            "confidence": None,
            "all_entries": [],
        }

    # Entries exist but none match
    best_entry = entries[0]
    return {
        "status": "MISMATCH",
        "detail": f"no register has {expected_base}*; found: {', '.join(e['register'] + '=' + e['type'] + '*' for e in entries)}",
        "matched_register": None,
        "confidence": best_entry["confidence"],
        "all_entries": entries,
    }


def generate_report(entries: list[dict], results: list[dict], output_path: str):
    """Generate golden_set_verification.md."""
    # Compute stats
    total = len(results)
    matches = sum(1 for r in results if r["check_result"]["status"] == "MATCH")
    mismatches = sum(1 for r in results if r["check_result"]["status"] == "MISMATCH")
    partials = sum(1 for r in results if r["check_result"]["status"] == "PARTIAL")
    not_found = sum(1 for r in results if r["check_result"]["status"] == "NOT_FOUND")

    # Per-tier stats
    tier_stats = defaultdict(lambda: {"total": 0, "matches": 0, "mismatches": 0, "partial": 0, "not_found": 0})
    for r in results:
        cr = r["check_result"]
        conf = cr.get("confidence") or "NOT_FOUND"
        tier_stats[conf]["total"] += 1
        if cr["status"] == "MATCH":
            tier_stats[conf]["matches"] += 1
        elif cr["status"] == "MISMATCH":
            tier_stats[conf]["mismatches"] += 1
        elif cr["status"] == "PARTIAL":
            tier_stats[conf]["partial"] += 1
        else:
            tier_stats[conf]["not_found"] += 1

    # Generate markdown
    now = datetime.now().strftime("%Y-%m-%d %H:%M")
    lines = []

    lines.append(f"# Golden Set Verification — Type Inference Engine")
    lines.append(f"")
    lines.append(f"**Generated**: {now}")
    lines.append(f"**Engine**: `type_map.json` ({_count_total_entries()} entries)")
    lines.append(f"**Golden set**: {total} functions from `golden_set_results.md`")
    lines.append(f"")
    lines.append(f"## Summary")
    lines.append(f"")
    lines.append(f"| Metric | Value |")
    lines.append(f"|--------|-------|")
    lines.append(f"| **Total tested** | {total} |")
    lines.append(f"| **`this` matches** | {matches} ({_pct(matches, total)}) |")
    lines.append(f"| **`this` mismatches (wrong type)** | {mismatches} ({_pct(mismatches, total)}) |")
    lines.append(f"| **`this` partial (right type, wrong register)** | {partials} ({_pct(partials, total)}) |")
    lines.append(f"| **Not in engine output** | {not_found} ({_pct(not_found, total)}) |")
    lines.append(f"")
    lines.append(f"### By Confidence Tier")
    lines.append(f"")
    lines.append(f"| Tier | Tested | Matches | Mismatches | Partial | Not Found | Rate |")
    lines.append(f"|------|--------|---------|------------|---------|-----------|------|")
    for tier in ["ANCHORED", "CHAIN_PROP", "DIRECT_PROP", "INFERRED", "NOT_FOUND"]:
        if tier not in tier_stats:
            continue
        ts = tier_stats[tier]
        effective = ts["matches"] + ts["partial"]
        lines.append(
            f"| {tier} | {ts['total']} | {ts['matches']} | {ts['mismatches']} | "
            f"{ts['partial']} | {ts['not_found']} | "
            f"{_pct(effective, ts['total'])} |"
        )
    lines.append(f"")

    lines.append(f"## Detailed Results")
    lines.append(f"")
    lines.append(f"| # | Function | Addr | Expected `this` | Engine Result | Status |")
    lines.append(f"|---|----------|------|-----------------|----------------|--------|")

    for i, (entry, result) in enumerate(zip(entries, results)):
        cr = result["check_result"]
        status_emoji = {
            "MATCH": "✅ MATCH",
            "MISMATCH": "❌ MISMATCH",
            "PARTIAL": "⚠️ PARTIAL",
            "NOT_FOUND": "❌ NOT FOUND",
        }.get(cr["status"], cr["status"])

        lines.append(
            f"| {entry['index']} | `{entry['function']}` | "
            f"{entry['address']} | `{entry['expected_type_full']}` | "
            f"`{cr['detail']}` | {status_emoji} |"
        )

    lines.append(f"")
    lines.append(f"## Per-Function Details")
    lines.append(f"")

    for i, (entry, result) in enumerate(zip(entries, results)):
        cr = result["check_result"]
        lines.append(f"### {entry['index']}. `{entry['function']}` ({entry['address']})")
        lines.append(f"")
        lines.append(f"- **Expected `this`**: `{entry['expected_type_full']}`")
        lines.append(f"- **Status**: {cr['status']}")
        lines.append(f"- **Detail**: {cr['detail']}")
        if cr["confidence"]:
            lines.append(f"- **Confidence tier**: {cr['confidence']}")

        all_e = cr["all_entries"]
        if all_e:
            lines.append(f"- **All engine entries for this address**:")
            for e in all_e:
                lines.append(f"  - `{e['register']}` = `{e['type']}*` (confidence: {e['confidence']}, eq_root: {e['eq_root']})")
        else:
            lines.append(f"- **All engine entries for this address**: *(none)*")
        lines.append(f"")

    lines.append(f"## Methodology")
    lines.append(f"")
    lines.append(f"1. For each golden-set function, look up `0xADDR::ecx` in `type_map.json` (ECX = `this` pointer in MSVC thiscall)")
    lines.append(f"2. Compare engine-inferred type against known ground-truth `this` type")
    lines.append(f"3. Classification:")
    lines.append(f"   - **MATCH**: `ecx` type equals expected `this` type")
    lines.append(f"   - **MISMATCH**: `ecx` exists but has wrong type, or other registers have wrong types")
    lines.append(f"   - **PARTIAL**: correct type found but in non-ecx register")
    lines.append(f"   - **NOT FOUND**: function address not present in `type_map.json`")
    lines.append(f"")

    with open(output_path, "w", encoding="utf-8") as f:
        f.write("\n".join(lines))

    print(f"Report written to: {output_path}")
    print(f"  Total: {total} | Match: {matches} | Mismatch: {mismatches} | Partial: {partials} | Not Found: {not_found}")


def _pct(part: int, total: int) -> str:
    if total == 0:
        return "0.0%"
    return f"{part / total * 100:.1f}%"


def _count_total_entries() -> int:
    with open(TYPE_MAP_PATH, "r", encoding="utf-8") as f:
        data = json.load(f)
    return data.get("_summary", {}).get("total_entries", len(data.get("type_map", {})))


def main():
    output_path = sys.argv[2] if len(sys.argv) >= 3 and sys.argv[1] == "--output" else DEFAULT_OUTPUT

    # Read inputs
    if not os.path.exists(GOLDEN_PATH):
        print(f"ERROR: golden_set_results.md not found at {GOLDEN_PATH}")
        sys.exit(1)
    if not os.path.exists(TYPE_MAP_PATH):
        print(f"ERROR: type_map.json not found at {TYPE_MAP_PATH}")
        sys.exit(1)

    with open(TYPE_MAP_PATH, "r", encoding="utf-8") as f:
        type_map_data = json.load(f)
    type_map = type_map_data.get("type_map", {})

    # Parse golden set
    entries = parse_golden_set(GOLDEN_PATH)
    print(f"Parsed {len(entries)} golden-set entries from {GOLDEN_PATH}")

    # Verify each entry
    results = []
    for entry in entries:
        addr = entry["address"]
        engine_entries = lookup_all_for_address(type_map, addr)
        check = check_match(entry["expected_type"], engine_entries)
        results.append({
            "entry": entry,
            "engine_entries": engine_entries,
            "check_result": check,
        })

    # Generate report
    generate_report(entries, results, output_path)


if __name__ == "__main__":
    main()
