"""
T12: Generate suggested_types.json from type_map.json.

Reads type_map.json (engine output), cross-references anchor data for evidence,
transforms to machine-readable suggested_types.json sorted by confidence.

Output format:
{
  "0x4A5B60.param0": {
    "type": "BuildingClass*",
    "confidence": "DIRECT_PROP",
    "evidence": ["0x4A5B62: thiscall ECX"]
  }
}

Usage:
  python tools/type_infer/generate_suggested.py [--output PATH]
"""

import json
import os
import sys
import re
from collections import defaultdict

# ── paths ──
BASE = os.path.dirname(os.path.abspath(__file__))
PROJECT_ROOT = os.path.normpath(os.path.join(BASE, "..", ".."))
TYPE_MAP_PATH = os.path.join(PROJECT_ROOT, "type_map.json")
MEMBER_TYPES_PATH = os.path.join(PROJECT_ROOT, "anchors", "member_types.json")
GLOBAL_TYPES_PATH = os.path.join(PROJECT_ROOT, "anchors", "global_types.json")
OUTPUT_DEFAULT = os.path.join(PROJECT_ROOT, "suggested_types.json")

# ── patterns ──
_RE_FUNC_REG = re.compile(
    r"^(0x[0-9a-fA-F]{8})::(esi|edi|e[abcd]x|[abcd][lhx]|[es]p|[abcd]x)$"
)
_RE_MEMBER = re.compile(r"^(.+?)\.this\.member\((0x[0-9a-fA-F]+)\)$")
_RE_PREFIX_ADDR = re.compile(r"^0x[0-9a-fA-F]{8}\.\.")


def _parse_variable_name(name: str) -> dict:
    """Parse a variable name into its components."""
    result = {"raw": name, "kind": "unknown"}

    # Register-scoped: 0xADDR::reg
    m = _RE_FUNC_REG.match(name)
    if m:
        result.update({
            "kind": "register",
            "func_addr": m.group(1),
            "register": m.group(2).lower(),
        })
        return result

    # Member variable: ClassName::methodName.this.member(0xOFF)
    m = _RE_MEMBER.match(name)
    if m:
        result.update({
            "kind": "member",
            "class_name": m.group(1),
            "offset": int(m.group(2), 16),
        })
        return result

    # Global variable: 0xADDR or 0xADDR_RET etc.
    if name.startswith("0x"):
        result["kind"] = "global"
        result["addr"] = name
        return result

    # Function return: FuncName.return
    if name.endswith(".return"):
        result["kind"] = "return"
        result["func_name"] = name[:-7]
        return result

    return result


def _lookup_member_anchor(key: str) -> list[dict]:
    """Look up a member variable in member_types.json for evidence."""
    evidence = []
    try:
        with open(MEMBER_TYPES_PATH, "r", encoding="utf-8") as f:
            member_types = json.load(f)
    except (FileNotFoundError, json.JSONDecodeError):
        return evidence

    # Match member variable name patterns in member_types
    for mk, mv in member_types.items():
        if key in mk or mk in key:
            evidence.append({
                "source": "member_types",
                "key": mk,
                "type": mv.get("type", "unknown"),
                "name": mv.get("name", ""),
                "confidence": mv.get("confidence", "unknown"),
            })
    return evidence


def _lookup_global_anchor(key: str) -> list[dict]:
    """Look up a global variable in global_types.json for evidence."""
    evidence = []
    try:
        with open(GLOBAL_TYPES_PATH, "r", encoding="utf-8") as f:
            global_types = json.load(f)
    except (FileNotFoundError, json.JSONDecodeError):
        return evidence

    # Direct lookup
    if key in global_types:
        gv = global_types[key]
        evidence.append({
            "source": "global_types",
            "key": key,
            "type": gv.get("type", "unknown"),
            "name": gv.get("name", ""),
            "confidence": gv.get("confidence", "unknown"),
        })
    else:
        # Try with _RET suffix stripped
        base = key.replace("_RET", "")
        if base in global_types:
            gv = global_types[base]
            evidence.append({
                "source": "global_types",
                "key": base,
                "type": gv.get("type", "unknown"),
                "name": gv.get("name", ""),
                "confidence": gv.get("confidence", "unknown"),
            })
    return evidence


def _build_evidence_string(parsed: dict, anchor_evidence: list[dict]) -> list[str]:
    """Build human-readable evidence strings."""
    evidence = []

    if parsed["kind"] == "register":
        func_addr = parsed["func_addr"]
        reg = parsed["register"]
        if reg == "ecx":
            evidence.append(f"{func_addr}: thiscall {reg.upper()} (this pointer)")
        elif reg == "edx":
            evidence.append(f"{func_addr}: fastcall arg via {reg.upper()}")
        elif reg == "eax":
            evidence.append(f"{func_addr}: return/assignment via {reg.upper()}")
        else:
            evidence.append(f"{func_addr}: propagation via {reg.upper()}")

    elif parsed["kind"] == "member":
        evidence.append(
            f"{parsed['class_name']}: member at +{parsed['offset']:#x}"
        )

    elif parsed["kind"] == "global":
        evidence.append(f"{parsed['addr']}: global variable")

    elif parsed["kind"] == "return":
        evidence.append(f"{parsed['func_name']}: function return type")

    # Add anchor evidence if available
    for ae in anchor_evidence[:3]:
        src = ae["source"]
        name = ae.get("name", ae.get("key", ""))
        typ = ae.get("type", "")
        evidence.append(f"{src}: {name} -> {typ}")

    return evidence


def _get_entry_key(parsed: dict, entry_key: str) -> str:
    """Transform the entry key to the suggested_types format.

    Register entries get .paramN notation when possible.
    Others keep their original format.
    """
    if parsed["kind"] == "register":
        func_addr = parsed["func_addr"]
        reg = parsed["register"]
        # Map registers to parameter-like notation
        reg_map = {
            "ecx": "this",  # thiscall: this pointer
            "edx": "arg0",  # fastcall: first arg
            "eax": "ret",   # return value
            "ebx": "ebx",
            "esi": "esi",
            "edi": "edi",
            "ebp": "ebp",
            "esp": "esp",
        }
        label = reg_map.get(reg, reg)
        return f"{func_addr}.{label}"

    # Keep original format for member/global/return entries
    return entry_key


def generate_suggested_types(
    type_map_path: str = TYPE_MAP_PATH,
    output_path: str = OUTPUT_DEFAULT,
) -> dict:
    """Generate suggested_types.json from type_map.json.

    Returns the generated data dict.
    """
    # ── Load type_map ──
    with open(type_map_path, "r", encoding="utf-8") as f:
        type_map = json.load(f)

    entries = type_map.get("type_map", {})

    # ── Group entries by eq_root for cross-referencing ──
    root_groups: dict[int, list[tuple[str, dict]]] = defaultdict(list)
    for key, val in entries.items():
        root_groups[val.get("eq_root", -1)].append((key, val))

    # ── Build suggested entries ──
    suggested: dict[str, dict] = {}

    for key, val in entries.items():
        # Skip TOP (contradiction) entries
        if val.get("type") == "TOP":
            continue

        parsed = _parse_variable_name(key)
        typ = val["type"]
        confidence = val["confidence"]
        eq_root = val.get("eq_root", -1)

        # ── Find evidence from same-eq_root entries ──
        anchor_evidence: list[dict] = []
        if eq_root >= 0 and eq_root in root_groups:
            for peer_key, peer_val in root_groups[eq_root]:
                if peer_key == key:
                    continue
                peer_parsed = _parse_variable_name(peer_key)
                if peer_parsed["kind"] == "member":
                    ev = _lookup_member_anchor(peer_key)
                    anchor_evidence.extend(ev)
                elif peer_parsed["kind"] == "global":
                    ev = _lookup_global_anchor(peer_key)
                    anchor_evidence.extend(ev)

        # Deduplicate anchor evidence
        seen = set()
        unique_ae = []
        for ae in anchor_evidence:
            ae_key = (ae.get("source", ""), ae.get("key", ""))
            if ae_key not in seen:
                seen.add(ae_key)
                unique_ae.append(ae)

        # ── Build evidence strings ──
        evidence_strings = _build_evidence_string(parsed, unique_ae)

        # ── Generate entry key in target format ──
        suggested_key = _get_entry_key(parsed, key)

        # ── Add pointer asterisk to class types ──
        typ_str = typ
        if typ not in ("TOP", "BOTTOM", "VOID_PTR") and not typ.endswith("*"):
            typ_str = typ + "*"

        suggested[suggested_key] = {
            "type": typ_str,
            "confidence": confidence,
            "evidence": evidence_strings if evidence_strings else [],
            "source_key": key,
            "eq_root": eq_root,
        }

    # ── Sort by confidence tier ──
    CONF_ORDER = {"ANCHORED": 0, "DIRECT_PROP": 1, "CHAIN_PROP": 2, "INFERRED": 3}

    sorted_entries = sorted(
        suggested.items(),
        key=lambda x: (CONF_ORDER.get(x[1]["confidence"], 99), x[0]),
    )

    # ── Build output ──
    from collections import Counter
    conf_counts = Counter(v["confidence"] for _, v in sorted_entries)
    type_counts = Counter(v["type"] for _, v in sorted_entries)

    output = {
        "_summary": {
            "total_suggestions": len(sorted_entries),
            "confidence_distribution": dict(conf_counts),
            "type_distribution": dict(type_counts.most_common(30)),
            "source_file": os.path.basename(type_map_path),
            "generated_by": "tools/type_infer/generate_suggested.py (T12)",
        },
        "suggestions": dict(sorted_entries),
    }

    # ── Write ──
    with open(output_path, "w", encoding="utf-8") as f:
        json.dump(output, f, indent=2, sort_keys=True)

    return output


def main() -> None:
    output_path = OUTPUT_DEFAULT
    if len(sys.argv) > 1 and sys.argv[1] == "--output":
        if len(sys.argv) > 2:
            output_path = sys.argv[2]

    print(f"Reading type_map from: {TYPE_MAP_PATH}", file=sys.stderr)
    result = generate_suggested_types(output_path=output_path)
    summary = result["_summary"]
    print(f"Generated suggested_types.json: {summary['total_suggestions']} suggestions", file=sys.stderr)
    print(f"  by confidence: {summary['confidence_distribution']}", file=sys.stderr)
    print(f"  output: {output_path}", file=sys.stderr)


if __name__ == "__main__":
    main()
