"""
T16: Masking test — accuracy evaluation by removing anchors and re-running inference.

1. Select 100 ANCHORED entries from type_map.json
2. Identify their anchor sources (member_types.json, global_types.json)
3. Mask (remove) those anchors from input data
4. Re-run the type inference engine
5. Compare masked output vs original output
6. Report accuracy by confidence tier

Usage:
  python tools/type_infer/masking_test.py [--sample-size N] [--output REPORT.md]
"""

import json
import os
import re
import sys
import copy
from collections import defaultdict

# ── paths ──
BASE = os.path.dirname(os.path.abspath(__file__))
PROJECT_ROOT = os.path.normpath(os.path.join(BASE, "..", ".."))
TYPE_MAP_PATH = os.path.join(PROJECT_ROOT, "type_map.json")
MEMBER_TYPES_PATH = os.path.join(PROJECT_ROOT, "anchors", "member_types.json")
GLOBAL_TYPES_PATH = os.path.join(PROJECT_ROOT, "anchors", "global_types.json")

# ── patterns ──
_RE_MEMBER = re.compile(
    r"^(.+?)(?:::.*?)\.this\.member\((0x[0-9a-fA-F]+)\)$"
)


def _parse_member_var(name: str) -> tuple[str, int] | None:
    """Extract (class_name, offset) from member variable name.
    
    Uses engine-exact regex: group 1 = class name, group 2 = hex offset.
    """
    m = _RE_MEMBER.match(name)
    if m:
        return (m.group(1), int(m.group(2), 16))
    return None


def _find_anchor_sources_for_var(var_name: str) -> list[str]:
    """Check if a single variable matches any anchor data entry.
    Returns list of anchor source strings (e.g., 'member_types::ClassName+0xOFF').
    """
    sources = []

    # Load and build lookup tables (cached)
    if not hasattr(_find_anchor_sources_for_var, "_member_lookup"):
        _find_anchor_sources_for_var._member_lookup = {}
        if os.path.exists(MEMBER_TYPES_PATH):
            with open(MEMBER_TYPES_PATH, "r", encoding="utf-8") as f:
                raw = json.load(f)
            alt_re = re.compile(r"^([A-Za-z_]\w*(?:Class)?)\+0x([0-9a-fA-F]+)$")
            for mk, mv in raw.items():
                m = alt_re.match(mk)
                if m:
                    cls = m.group(1)
                    off = int(m.group(2), 16)
                    _find_anchor_sources_for_var._member_lookup[(cls, off)] = mk

        _find_anchor_sources_for_var._global_types = {}
        if os.path.exists(GLOBAL_TYPES_PATH):
            with open(GLOBAL_TYPES_PATH, "r", encoding="utf-8") as f:
                _find_anchor_sources_for_var._global_types = json.load(f)

    member_lookup = _find_anchor_sources_for_var._member_lookup
    global_types = _find_anchor_sources_for_var._global_types

    # Check member_types — use (class, offset) tuple lookup (engine-exact matching)
    parsed = _parse_member_var(var_name)
    if parsed:
        class_name, offset = parsed
        # Extract short class name (what the engine does: strip method name after ::)
        short = class_name.split("::")[-1] if "::" in class_name else class_name
        orig_key = member_lookup.get((short, offset))
        if orig_key:
            sources.append(f"member_types::{orig_key}")

    # Check global_types
    if var_name in global_types:
        sources.append(f"global_types::{var_name}")

    base = var_name.replace("_RET", "")
    if base != var_name and base in global_types:
        sources.append(f"global_types::{base}")

    return sources


def _to_member_types_key(class_name: str, offset: int) -> str:
    """Convert to member_types.json key format."""
    # Extract the short class name (last part after ::)
    short = class_name.split("::")[-1] if "::" in class_name else class_name
    return f"{short}+{offset:#x}"


def _find_anchor_sources(entries: list[tuple[str, dict]]) -> dict[str, list[str]]:
    """Given ANCHORED entries, find which anchor file entries provide their types.

    Returns: {variable_name: [anchor_key_in_file]} mapping.
    """
    # Load member_types and global_types
    member_types = {}
    if os.path.exists(MEMBER_TYPES_PATH):
        with open(MEMBER_TYPES_PATH, "r", encoding="utf-8") as f:
            member_types = json.load(f)

    global_types = {}
    if os.path.exists(GLOBAL_TYPES_PATH):
        with open(GLOBAL_TYPES_PATH, "r", encoding="utf-8") as f:
            global_types = json.load(f)

    anchor_map: dict[str, list[str]] = {}

    for var_name, val in entries:
        sources = []

        # Try member_types lookup
        parsed = _parse_member_var(var_name)
        if parsed:
            class_name, offset = parsed
            mk = _to_member_types_key(class_name, offset)
            if mk in member_types:
                sources.append(f"member_types::{mk}")

            # Also try with full class name
            short = class_name.split("::")[-1] if "::" in class_name else class_name
            alt_key = f"{short}+{offset:#x}"
            if alt_key in member_types:
                if f"member_types::{alt_key}" not in sources:
                    sources.append(f"member_types::{alt_key}")

        # Try global_types lookup
        if var_name in global_types:
            sources.append(f"global_types::{var_name}")

        # Try without _RET suffix
        base = var_name.replace("_RET", "")
        if base != var_name and base in global_types:
            sources.append(f"global_types::{base}")

        # Try register-scoped entries — look for function addresses
        if "::" in var_name and var_name.startswith("0x"):
            # Register-scoped — no direct anchor, try by function address
            addr = var_name.split("::")[0]
            if addr in global_types:
                sources.append(f"global_types::{addr}")

        if sources:
            anchor_map[var_name] = sources

    return anchor_map


def select_sample(entries: list[tuple[str, dict]], sample_size: int = 100) -> list[tuple[str, dict]]:
    """Select a diverse sample of ANCHORED entries for masking.

    Strategy: stratified sampling across types.
    """
    by_type = defaultdict(list)
    for k, v in entries:
        by_type[v["type"]].append((k, v))

    # Calculate how many per type (proportional, min 1)
    total = len(entries)
    selected = []
    type_counts = {t: len(items) for t, items in by_type.items()}

    # First, take 1 from each type
    for t, items in sorted(by_type.items()):
        if items:
            selected.append(items[0])
            if len(selected) >= sample_size:
                break

    # Then fill remaining proportionally
    remaining = sample_size - len(selected)
    if remaining > 0:
        # Calculate weights
        total_weight = sum(type_counts.values())
        allocations = {}
        for t, count in type_counts.items():
            allocations[t] = max(0, int(remaining * count / total_weight))

        # Distribute remainder
        remainder = remaining - sum(allocations.values())
        for t in sorted(type_counts.keys()):
            if remainder <= 0:
                break
            if len(by_type[t]) > allocations[t] + 1:  # +1 for the one already taken
                allocations[t] += 1
                remainder -= 1

        for t, alloc in allocations.items():
            items = by_type[t]
            # Skip the first one already selected
            start = 1 if any(s[0] == items[0][0] for s in selected) else 0
            for i in range(start, min(start + alloc, len(items))):
                selected.append(items[i])
                if len(selected) >= sample_size:
                    break
            if len(selected) >= sample_size:
                break

    return selected[:sample_size]


def create_masked_anchor_files(
    anchor_map: dict[str, list[str]],
    member_path: str,
    global_path: str,
    output_dir: str,
) -> tuple[str, str]:
    """Create masked copies of anchor data files.

    Returns: (masked_member_path, masked_global_path)
    """
    os.makedirs(output_dir, exist_ok=True)

    # Collect all anchor keys to remove
    remove_member: set[str] = set()
    remove_global: set[str] = set()

    for var_name, sources in anchor_map.items():
        for src in sources:
            if src.startswith("member_types::"):
                remove_member.add(src.split("::", 1)[1])
            elif src.startswith("global_types::"):
                remove_global.add(src.split("::", 1)[1])

    # Load and filter member_types
    member_types = {}
    if os.path.exists(member_path):
        with open(member_path, "r", encoding="utf-8") as f:
            member_types = json.load(f)
    member_filtered = {k: v for k, v in member_types.items() if k not in remove_member}
    member_masked_path = os.path.join(output_dir, "member_types_masked.json")
    with open(member_masked_path, "w", encoding="utf-8") as f:
        json.dump(member_filtered, f, indent=2)
    print(f"  member_types: {len(member_types)} -> {len(member_filtered)} "
          f"(removed {len(remove_member)})", file=sys.stderr)

    # Load and filter global_types
    global_types = {}
    if os.path.exists(global_path):
        with open(global_path, "r", encoding="utf-8") as f:
            global_types = json.load(f)
    global_filtered = {k: v for k, v in global_types.items() if k not in remove_global}
    global_masked_path = os.path.join(output_dir, "global_types_masked.json")
    with open(global_masked_path, "w", encoding="utf-8") as f:
        json.dump(global_filtered, f, indent=2)
    print(f"  global_types: {len(global_types)} -> {len(global_filtered)} "
          f"(removed {len(remove_global)})", file=sys.stderr)

    return member_masked_path, global_masked_path


def run_engine_with_masked_data(
    member_masked_path: str,
    global_masked_path: str,
) -> dict:
    """Run the type inference engine with masked anchor data.

    Returns the generated type_map dict.
    """
    # Ensure project root is in path
    project_root = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", ".."))
    if project_root not in sys.path:
        sys.path.insert(0, project_root)

    # Import engine module and monkey-patch paths
    import tools.type_infer.engine as engine_mod

    # Save original paths
    orig_member = engine_mod.MEMBER_TYPES_PATH
    orig_global = engine_mod.GLOBAL_TYPES_PATH

    # Override paths
    engine_mod.MEMBER_TYPES_PATH = member_masked_path
    engine_mod.GLOBAL_TYPES_PATH = global_masked_path

    try:
        # Run engine
        engine = engine_mod.TypeInferenceEngine()

        print("  Loading data...", file=sys.stderr)
        engine.load_all()
        print(f"    variables: {len(engine.var_to_id)}", file=sys.stderr)
        print(f"    anchors: {len(engine.anchors)}", file=sys.stderr)

        print("  Running Steensgaard...", file=sys.stderr)
        engine.step_steensgaard()

        print("  Running propagation...", file=sys.stderr)
        engine.step_propagate()

        print("  Running confidence...", file=sys.stderr)
        engine.step_confidence()

        print("  Running contradictions...", file=sys.stderr)
        engine.step_contradictions()

        # Build type map in memory (don't write to disk)
        output: dict[str, dict] = {}
        processed_roots: set[int] = set()

        for var_id in range(len(engine.id_to_var)):
            root = engine.uf.find(var_id)
            if root in processed_roots:
                continue
            processed_roots.add(root)

            var_name = engine.id_to_var[var_id]
            typ = engine.eq_types.get(root, 0)  # 0 = BOTTOM
            conf_tier = engine.confidences.get(root, -1)

            if conf_tier >= 0:
                from tools.type_infer.lattice import _name as lattice_name
                from tools.type_infer.engine import Confidence

                output[var_name] = {
                    "type": lattice_name(typ),
                    "confidence": Confidence.name(conf_tier),
                    "eq_root": root,
                }

        # Also add entries for vars sharing same eq_root
        for var_id in range(len(engine.id_to_var)):
            root = engine.uf.find(var_id)
            var_name = engine.id_to_var[var_id]
            if var_name in output:
                continue
            if root in processed_roots and root in engine.eq_types:
                typ = engine.eq_types.get(root, 0)
                conf_tier = engine.confidences.get(root, -1)
                if conf_tier >= 0:
                    from tools.type_infer.lattice import _name as lattice_name
                    from tools.type_infer.engine import Confidence
                    output[var_name] = {
                        "type": lattice_name(typ),
                        "confidence": Confidence.name(conf_tier),
                        "eq_root": root,
                    }

        from collections import Counter
        conf_counts = Counter(v["confidence"] for v in output.values())
        type_counts = Counter(v["type"] for v in output.values())

        result = {
            "_summary": {
                "total_entries": len(output),
                "type_distribution": dict(type_counts.most_common()),
                "confidence_distribution": dict(conf_counts),
            },
            "type_map": output,
        }

        return result

    finally:
        # Restore original paths
        engine_mod.MEMBER_TYPES_PATH = orig_member
        engine_mod.GLOBAL_TYPES_PATH = orig_global


def compare_results(
    original: dict,
    masked: dict,
    sample_vars: set[str],
) -> dict:
    """Compare original and masked type maps for sampled variables.

    Returns comparison statistics.
    """
    orig_map = original.get("type_map", {})
    masked_map = masked.get("type_map", {})

    results = {
        "total_sampled": len(sample_vars),
        "matched": 0,
        "mismatched": 0,
        "not_found": 0,
        "confidence_changed": 0,
        "by_tier": defaultdict(lambda: {"total": 0, "matched": 0, "mismatched": 0, "not_found": 0}),
        "details": [],
    }

    for var_name in sample_vars:
        orig_entry = orig_map.get(var_name, {})
        masked_entry = masked_map.get(var_name, {})

        orig_type = orig_entry.get("type", "NOT_FOUND")
        orig_conf = orig_entry.get("confidence", "NOT_FOUND")
        masked_type = masked_entry.get("type", "NOT_FOUND")
        masked_conf = masked_entry.get("confidence", "NOT_FOUND")

        tier = orig_conf

        results["by_tier"][tier]["total"] += 1

        if masked_type == "NOT_FOUND" or masked_conf == "NOT_FOUND":
            results["not_found"] += 1
            results["by_tier"][tier]["not_found"] += 1
            results["details"].append({
                "var": var_name,
                "original": {"type": orig_type, "confidence": orig_conf},
                "masked": {"type": masked_type, "confidence": masked_conf},
                "status": "NOT_FOUND",
            })
        elif masked_type == orig_type:
            results["matched"] += 1
            results["by_tier"][tier]["matched"] += 1
            if masked_conf != orig_conf:
                results["confidence_changed"] += 1
            results["details"].append({
                "var": var_name,
                "original": {"type": orig_type, "confidence": orig_conf},
                "masked": {"type": masked_type, "confidence": masked_conf},
                "status": "MATCH",
            })
        else:
            results["mismatched"] += 1
            results["by_tier"][tier]["mismatched"] += 1
            results["details"].append({
                "var": var_name,
                "original": {"type": orig_type, "confidence": orig_conf},
                "masked": {"type": masked_type, "confidence": masked_conf},
                "status": "MISMATCH",
            })

    return results


def generate_report(
    results: dict,
    sample_size: int,
    anchor_map: dict[str, list[str]],
    masked_summary: dict,
) -> str:
    """Generate masking_test_results.md report."""
    lines = []
    lines.append("# Type Inference Masking Test Results\n\n")
    lines.append(f"**Date**: auto-generated  |  **Sample size**: {sample_size}\n\n")

    # Overview
    total = results["total_sampled"]
    matched = results["matched"]
    mismatched = results["mismatched"]
    not_found = results["not_found"]
    conf_changed = results["confidence_changed"]
    accuracy = (matched / total * 100) if total > 0 else 0

    lines.append("## Overview\n\n")
    lines.append(f"| Metric | Value |\n")
    lines.append(f"|---|---|\n")
    lines.append(f"| Total sampled | {total} |\n")
    lines.append(f"| Matched (correct) | {matched} ({matched/total*100:.1f}%) |\n")
    lines.append(f"| Mismatched (wrong type) | {mismatched} ({mismatched/total*100:.1f}%) |\n")
    lines.append(f"| Not found (type lost) | {not_found} ({not_found/total*100:.1f}%) |\n")
    lines.append(f"| Confidence changed (correct type, different tier) | {conf_changed} |\n")
    lines.append(f"| **Overall accuracy** | **{accuracy:.1f}%** |\n")
    lines.append(f"\n")

    # Accuracy by confidence tier
    lines.append("## Accuracy by Confidence Tier\n\n")
    lines.append(f"| Tier | Total | Matched | Mismatched | Not Found | Accuracy |\n")
    lines.append(f"|---|---|---|---|---|---|\n")

    tier_order = ["ANCHORED", "DIRECT_PROP", "CHAIN_PROP", "INFERRED"]
    for tier in tier_order:
        t = results["by_tier"].get(tier, {"total": 0, "matched": 0, "mismatched": 0, "not_found": 0})
        if t["total"] > 0:
            acc = t["matched"] / t["total"] * 100
            lines.append(f"| {tier} | {t['total']} | {t['matched']} | {t['mismatched']} | "
                         f"{t['not_found']} | {acc:.1f}% |\n")

    lines.append(f"\n")

    # Masked engine summary
    lines.append("## Masked Engine Output Summary\n\n")
    ms = masked_summary.get("_summary", {})
    lines.append(f"- Total entries: {ms.get('total_entries', '?')}\n")
    lines.append(f"- Confidence distribution: {ms.get('confidence_distribution', {})}\n")
    lines.append(f"\n")

    # Anchor removal stats
    lines.append("## Anchor Removal Statistics\n\n")
    total_removed = sum(len(v) for v in anchor_map.values())
    member_removed = sum(1 for v in anchor_map.values() for s in v if "member_types" in s)
    global_removed = sum(1 for v in anchor_map.values() for s in v if "global_types" in s)
    lines.append(f"- Total anchor entries removed: {total_removed}\n")
    lines.append(f"- From member_types.json: {member_removed}\n")
    lines.append(f"- From global_types.json: {global_removed}\n")
    lines.append(f"- Variables affected: {len(anchor_map)}\n")
    lines.append(f"\n")

    # Mismatch details (show up to 20)
    mismatches = [d for d in results["details"] if d["status"] != "MATCH"]
    if mismatches:
        lines.append(f"## Mismatch/Not-Found Details ({len(mismatches)})\n\n")
        for d in mismatches[:20]:
            lines.append(f"- **{d['var']}**\n")
            lines.append(f"  - Original: `{d['original']['type']}` ({d['original']['confidence']})\n")
            lines.append(f"  - Masked:   `{d['masked']['type']}` ({d['masked']['confidence']})\n")
            lines.append(f"  - Status: **{d['status']}**\n")
        if len(mismatches) > 20:
            lines.append(f"\n... and {len(mismatches) - 20} more\n")
        lines.append(f"\n")

    # Conclusion
    lines.append("## Conclusion\n\n")
    if accuracy >= 95:
        lines.append(f"✅ **PASS**: Overall accuracy {accuracy:.1f}% exceeds the 95% threshold. ")
        lines.append("The type inference engine successfully recovers types even when anchors are removed, ")
        lines.append("demonstrating robust propagation through the constraint graph.\n")
    elif accuracy >= 85:
        lines.append(f"⚠️ **MARGINAL**: Overall accuracy {accuracy:.1f}% is below 95% but above 85%. ")
        lines.append("Consider strengthening the propagation algorithm or adding more anchor data.\n")
    else:
        lines.append(f"❌ **FAIL**: Overall accuracy {accuracy:.1f}% is below 85%. ")
        lines.append("The propagation is not recovering types reliably after anchor removal.\n")

    return "".join(lines)


def main() -> None:
    sample_size = 100
    output_path = None

    # Parse args
    args = sys.argv[1:]
    i = 0
    while i < len(args):
        if args[i] == "--sample-size" and i + 1 < len(args):
            sample_size = int(args[i + 1])
            i += 2
        elif args[i] == "--output" and i + 1 < len(args):
            output_path = args[i + 1]
            i += 2
        else:
            i += 1

    if output_path is None:
        output_path = os.path.join(PROJECT_ROOT, "masking_test_results.md")

    print("=" * 60, file=sys.stderr)
    print(f"T16: Masking Test — sample_size={sample_size}", file=sys.stderr)
    print("=" * 60, file=sys.stderr)

    # ── Step 1: Load original type_map ──
    print("\n[1/5] Loading original type_map...", file=sys.stderr)
    with open(TYPE_MAP_PATH, "r", encoding="utf-8") as f:
        original = json.load(f)

    orig_entries = [(k, v) for k, v in original["type_map"].items()
                    if v["confidence"] == "ANCHORED" and v["type"] != "TOP"]
    print(f"  ANCHORED non-TOP entries: {len(orig_entries)}", file=sys.stderr)

    # ── Step 2: Select sample ──
    print(f"\n[2/5] Selecting {sample_size} entries for masking...", file=sys.stderr)
    sample = select_sample(orig_entries, sample_size)
    sample_vars = {k for k, v in sample}
    print(f"  Selected: {len(sample)}", file=sys.stderr)
    type_dist = defaultdict(int)
    for _, v in sample:
        type_dist[v["type"]] += 1
    print(f"  Type distribution: {dict(type_dist)}", file=sys.stderr)

    # ── Step 3: Find anchor sources ──
    print("\n[3/5] Finding anchor sources...", file=sys.stderr)
    anchor_map = _find_anchor_sources(sample)
    print(f"  Direct anchors found: {len(anchor_map)}/{len(sample)} entries", file=sys.stderr)

    # Also trace through eq_roots for entries without direct anchors
    unmatched_in_sample = [(k, v) for k, v in sample if k not in anchor_map]
    if unmatched_in_sample:
        print(f"  Tracing eq_roots for {len(unmatched_in_sample)} unmatched entries...",
              file=sys.stderr)

        # Load the full type_map to find eq_root peers
        with open(TYPE_MAP_PATH, "r", encoding="utf-8") as f:
            full_map = json.load(f)

        by_root: dict[int, list[str]] = defaultdict(list)
        for k, v in full_map["type_map"].items():
            by_root[v.get("eq_root", -1)].append(k)

        # For each unmatched sampled var, find its eq_root and collect member/global peers
        for var_name, val in unmatched_in_sample:
            root = val.get("eq_root", -1)
            peers = by_root.get(root, [])
            found_peer = False
            for peer in peers:
                if peer == var_name:
                    continue
                sources = _find_anchor_sources_for_var(peer)
                if sources:
                    anchor_map[var_name] = sources
                    found_peer = True
                    break
            if not found_peer:
                # Try matching in original engine data
                print(f"    No peer anchor found for {var_name} (root={root})", file=sys.stderr)

        print(f"  Total anchors after eq_root tracing: {len(anchor_map)}/{len(sample)} entries",
              file=sys.stderr)

    if len(anchor_map) == 0:
        print("  WARNING: Still no anchor sources found.", file=sys.stderr)
        print("  Generating minimal report.", file=sys.stderr)
        lines = []
        lines.append("# Type Inference Masking Test Results\n\n")
        lines.append(f"**Sample size**: {sample_size}  |  **Status**: NO_MAPPABLE_ANCHORS\n\n")
        lines.append("## Reason\n\n")
        lines.append("The eq_root tracing could not map register-scoped variables to their ")
        lines.append("underlying anchor data entries. A deeper instrumentation of the engine's ")
        lines.append("Steensgaard step is needed to record anchor→eq_root mappings.\n\n")
        lines.append(f"**Total ANCHORED entries**: {len(orig_entries)}\n")
        lines.append(f"**Sampled**: {len(sample)}\n")
        lines.append(f"**Anchors found via eq_root tracing**: {len(anchor_map)}\n")

        if output_path:
            with open(output_path, "w", encoding="utf-8") as f:
                f.write("".join(lines))
            print(f"\nReport written to {output_path}", file=sys.stderr)
        else:
            print("".join(lines))
        return

    # ── Step 4: Create masked data and re-run engine ──
    print("\n[4/5] Creating masked anchor files...", file=sys.stderr)
    temp_dir = os.path.join(PROJECT_ROOT, "tools", "type_infer", ".masking_test")
    member_masked, global_masked = create_masked_anchor_files(
        anchor_map, MEMBER_TYPES_PATH, GLOBAL_TYPES_PATH, temp_dir
    )

    print("\n[4/5] Re-running engine with masked data...", file=sys.stderr)
    try:
        masked_result = run_engine_with_masked_data(member_masked, global_masked)
        print(f"  Masked output: {masked_result['_summary']['total_entries']} entries", file=sys.stderr)
        print(f"  Confidence: {masked_result['_summary']['confidence_distribution']}", file=sys.stderr)
    except Exception as e:
        print(f"  ERROR running engine: {e}", file=sys.stderr)
        import traceback
        traceback.print_exc()
        masked_result = {"_summary": {"total_entries": 0}, "type_map": {}}

    # ── Step 5: Compare and report ──
    print("\n[5/5] Comparing results...", file=sys.stderr)
    results = compare_results(original, masked_result, sample_vars)

    # Generate report
    report = generate_report(results, sample_size, anchor_map, masked_result)

    if output_path:
        with open(output_path, "w", encoding="utf-8") as f:
            f.write(report)
        print(f"Report written to {output_path}", file=sys.stderr)

    # Print summary
    print(f"\n{'='*60}", file=sys.stderr)
    print(f"RESULTS: {results['matched']}/{results['total_sampled']} matched "
          f"({results['matched']/results['total_sampled']*100:.1f}%)", file=sys.stderr)
    print(f"  Mismatched: {results['mismatched']}  |  Not found: {results['not_found']}", file=sys.stderr)
    print(f"{'='*60}", file=sys.stderr)


if __name__ == "__main__":
    main()
