#!/usr/bin/env python3
"""
lookup_member.py — Offset → member name lookup with inheritance chain search.

Parses member_lookup.json to map byte offsets (from class base) to named members.
Automatically walks parent classes when offset not found in target class.

Usage:
    # Single offset lookup
    python tools/lookup_member.py UnitClass 1732
    python tools/lookup_member.py UnitClass 0x6C4

    # Multiple offsets
    python tools/lookup_member.py UnitClass 692 764 1732

    # IDA pseudocode batch mode (parse offsets from stdin/text)
    python tools/lookup_member.py --from-ida UnitClass "$(cat ida_output.txt)"
    python tools/lookup_member.py --from-ida UnitClass - < ida_output.txt
"""

import json
import re
import sys
from pathlib import Path

LOOKUP = Path(__file__).parent / "member_lookup.json"

# ── Inheritance chains (child → parent) ──
# Built from src/**/*.hpp class declarations.
INHERITANCE_CHAIN = {
    # Instance (game object) classes
    "UnitClass":       ["FootClass", "TechnoClass", "RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    "InfantryClass":   ["FootClass", "TechnoClass", "RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    "AircraftClass":   ["FootClass", "TechnoClass", "RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    "BuildingClass":   ["TechnoClass", "RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    "BulletClass":     ["ObjectClass", "AbstractClass"],
    "AnimClass":       ["ObjectClass", "AbstractClass"],
    "ParticleClass":   ["ObjectClass", "AbstractClass"],
    "ParticleSystemClass": ["ObjectClass", "AbstractClass"],
    "VoxelAnimClass":  ["ObjectClass", "AbstractClass"],
    "OverlayClass":    ["ObjectClass", "AbstractClass"],
    "SmudgeClass":     ["ObjectClass", "AbstractClass"],
    "TerrainClass":    ["ObjectClass", "AbstractClass"],
    "TiberiumClass":   ["ObjectClass", "AbstractClass"],
    "WaveClass":       ["ObjectClass", "AbstractClass"],
    "TubeClass":       ["ObjectClass", "AbstractClass"],
    # Type (prototype) classes
    "UnitTypeClass":            ["TechnoTypeClass", "ObjectTypeClass", "AbstractTypeClass"],
    "BuildingTypeClass":        ["TechnoTypeClass", "ObjectTypeClass", "AbstractTypeClass"],
    "InfantryTypeClass":        ["TechnoTypeClass", "ObjectTypeClass", "AbstractTypeClass"],
    "AircraftTypeClass":        ["TechnoTypeClass", "ObjectTypeClass", "AbstractTypeClass"],
    "AnimTypeClass":            ["ObjectTypeClass", "AbstractTypeClass"],
    "BulletTypeClass":          ["ObjectTypeClass", "AbstractTypeClass"],
    "ParticleTypeClass":        ["ObjectTypeClass", "AbstractTypeClass"],
    "ParticleSystemTypeClass":  ["ObjectTypeClass", "AbstractTypeClass"],
    "VoxelAnimTypeClass":       ["ObjectTypeClass", "AbstractTypeClass"],
    "OverlayTypeClass":         ["ObjectTypeClass", "AbstractTypeClass"],
    "SmudgeTypeClass":          ["ObjectTypeClass", "AbstractTypeClass"],
    "TerrainTypeClass":         ["ObjectTypeClass", "AbstractTypeClass"],
    "SuperWeaponTypeClass":     ["AbstractTypeClass"],
    "WarheadTypeClass":         ["AbstractTypeClass"],
    "WeaponTypeClass":          ["AbstractTypeClass"],
    # Other classes
    "CampaignClass":  ["AbstractClass"],
    "HouseTypeClass": ["AbstractClass"],
    "SideClass":      ["AbstractClass"],
}


def _load_data():
    with open(LOOKUP) as f:
        return json.load(f)


def _search_chain(data, cls, offset):
    """Search cls and its inheritance chain for a member at offset.
    Returns (found_class, member_dict) or (None, None).
    """
    off_str = str(offset)
    # Search the target class first
    if cls in data and off_str in data[cls]:
        return cls, data[cls][off_str]
    # Walk parent chain
    chain = INHERITANCE_CHAIN.get(cls, [])
    for parent in chain:
        if parent in data and off_str in data[parent]:
            return parent, data[parent][off_str]
    return None, None


def lookup(cls, offsets):
    """Look up offsets for a class. Returns list of (offset, found_class, member_dict, nearest)."""
    data = _load_data()
    if cls not in data:
        print(f"Error: class '{cls}' not in member_lookup.json", file=sys.stderr)
        return []

    results = []
    for offset in offsets:
        found_cls, member = _search_chain(data, cls, offset)
        if member:
            results.append((offset, found_cls, member, None))
        else:
            # Find nearest neighbors in the target class
            members = data[cls]
            keys = sorted(int(k) for k in members.keys())
            prev = max((k for k in keys if k <= offset), default=None)
            nxt = min((k for k in keys if k >= offset), default=None)
            nearest = {}
            if prev is not None:
                nearest["prev"] = (prev, members[str(prev)])
            if nxt is not None and nxt != prev:
                nearest["next"] = (nxt, members[str(nxt)])
            results.append((offset, None, None, nearest))
    return results


def _format_result(offset, found_cls, member, nearest):
    """Format a lookup result for display."""
    off_hex = f"0x{offset:X}"
    if member:
        name = member["name"]
        ty = member["type"]
        inh = member.get("inherited_from", "")
        if inh and inh != found_cls:
            origin = f"{inh}::" if inh else f"{found_cls}::"
        else:
            origin = f"{found_cls}::"
        line = f"  offset {offset} ({off_hex}) = {origin}{name} ({ty})"
        if inh and inh != found_cls:
            line += f" [inherited from {inh}]"
        return line
    else:
        parts = [f"  offset {offset} ({off_hex}) = NOT FOUND in member_lookup.json"]
        if nearest:
            if "prev" in nearest:
                p_off, p_m = nearest["prev"]
                sub_off = offset - p_off
                sub_hint = f" (this + {p_off} + {sub_off})" if sub_off > 0 else ""
                parts.append(f"    prev: {p_off} (0x{p_off:X}) = {p_m['name']} ({p_m['type']}){sub_hint}")
            if "next" in nearest:
                n_off, n_m = nearest["next"]
                parts.append(f"    next: {n_off} (0x{n_off:X}) = {n_m['name']} ({n_m['type']})")
        # Suggest common struct sub-fields
        if nearest and "prev" in nearest:
            p_off, p_m = nearest["prev"]
            sub_off = offset - p_off
            if sub_off > 0:
                parts.append(f"    hint: offset within '{p_m['name']}' ({p_m['type']}) at +{sub_off} (0x{sub_off:X})")
        return "\n".join(parts)


# ── IDA pseudocode parser ──
# Patterns we extract:
#   *(int *)(this + 692)
#   *(_DWORD *)(this + 1732)
#   *(_BYTE *)(this + 105)
#   *(_WORD *)((char *)this + 20)
#   ((_BYTE *)this + 105)
#   *(int *)((char *)v3 + 692)      — ignores non-this
#   *(_DWORD *)(v2 + 692)           — ignores non-this
_IDA_OFFSET_RE = re.compile(
    r'\(\s*(?:_DWORD|_BYTE|_WORD|int|char|uint8_t|uint16_t|uint32_t|float|double|void|BOOL)\s*\*\s*\)'
    r'\s*\(\s*(?:\(\s*(?:char|uint8_t)\s*\*\s*\)\s*)?(\w+)\s*\+\s*(\d+)\s*\)'
)


def parse_ida_pseudocode(text, this_var="this"):
    """Extract all (variable + offset) pairs from IDA pseudocode.
    Returns dict: {offset: [(var_name, full_match_text), ...]}
    """
    offsets = {}
    for m in _IDA_OFFSET_RE.finditer(text):
        var = m.group(1)
        off = int(m.group(2))
        match_text = m.group(0).strip()
        if off not in offsets:
            offsets[off] = []
        offsets[off].append((var, match_text))
    return offsets


def main():
    args = sys.argv[1:]

    if not args:
        print(__doc__)
        sys.exit(1)

    # ── IDA mode ──
    if args[0] == "--from-ida":
        if len(args) < 2:
            print("Usage: lookup_member.py --from-ida ClassName [text_or_file_or_-]", file=sys.stderr)
            sys.exit(1)
        cls = args[1]
        if len(args) >= 3:
            if args[2] == "-":
                text = sys.stdin.read()
            elif Path(args[2]).exists():
                text = Path(args[2]).read_text(encoding="utf-8", errors="replace")
            else:
                text = args[2]
        else:
            text = sys.stdin.read()

        offsets = parse_ida_pseudocode(text)
        if not offsets:
            print("No offset patterns found in input.", file=sys.stderr)
            sys.exit(1)

        print(f"Class: {cls}")
        chain = [cls] + INHERITANCE_CHAIN.get(cls, [])
        print(f"Chain: {' → '.join(chain)}")
        print()
        results = lookup(cls, sorted(offsets.keys()))
        for offset, found_cls, member, nearest in results:
            line = _format_result(offset, found_cls, member, nearest)
            print(line)
            # Show source pattern(s)
            if offset in offsets:
                for var, match in offsets[offset]:
                    print(f"    from: {match}  (var={var})")
        sys.exit(0)

    # ── Single/multi offset mode ──
    if len(args) < 2:
        print("Usage: python lookup_member.py ClassName offset [offset...]", file=sys.stderr)
        sys.exit(1)

    cls = args[0]
    offsets = []
    for a in args[1:]:
        offsets.append(int(a, 16) if a.startswith("0x") or a.startswith("0X") else int(a))

    chain = [cls] + INHERITANCE_CHAIN.get(cls, [])
    print(f"Class: {cls}")
    print(f"Chain: {' → '.join(chain)}")
    print()
    results = lookup(cls, offsets)
    for offset, found_cls, member, nearest in results:
        print(_format_result(offset, found_cls, member, nearest))


if __name__ == "__main__":
    main()
