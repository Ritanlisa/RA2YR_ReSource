#!/usr/bin/env python3
"""
fix_member_access.py — Replace IDA decompiler raw pointer offsets with ->memberName.

Transforms:
  *(int*)((uint8_t*)this + 188)            → this->locationX
  *(int*)((uint8_t*)this + 248) = 0;       → this->memberName = 0;
  (int*)((uint8_t*)this + 20)              → &this->MemberAt20
  *((uint8_t*)(*targetType) + 704)         → (*targetType)->UNKNOWN_704
  ((int*)this)[191] = 1;                   → this->UNKNOWN_764 = 1;
  typeData[2048/4]                         → *(int*)((uint8_t*)typeData + 2048)

NON-DESTRUCTIVE: replaces only the pointer pattern, preserving ALL surrounding code
and ALL comments. Idempotent: running twice produces same output.

Usage:
  python tools/fix_member_access.py src/structure/unit.cpp
  python tools/fix_member_access.py src/structure/unit.cpp --dry-run
  python tools/fix_member_access.py src/structure/unit.cpp --class UnitClass
"""

import re
import json
import sys
import os
import argparse
from typing import Dict, List, Optional, Tuple

# ──────────────────────────────────────────────────────────
# Class hierarchy — which classes to search for member offsets
# parent chain: most-derived → ... → root
# ──────────────────────────────────────────────────────────

CLASS_PARENTS: Dict[str, List[str]] = {
    # FootClass-derived
    "UnitClass":       ["FootClass", "TechnoClass", "RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    "InfantryClass":   ["FootClass", "TechnoClass", "RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    "AircraftClass":   ["FootClass", "TechnoClass", "RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    # TechnoClass-derived (no FootClass)
    "BuildingClass":   ["TechnoClass", "RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    # ObjectClass-derived
    "AnimClass":       ["ObjectClass", "AbstractClass"],
    "BulletClass":     ["ObjectClass", "AbstractClass"],
    "SmudgeClass":     ["ObjectClass", "AbstractClass"],
    "OverlayClass":    ["ObjectClass", "AbstractClass"],
    "ParticleClass":   ["ObjectClass", "AbstractClass"],
    "TiberiumClass":   ["ObjectClass", "AbstractClass"],
    # Intermediate classes
    "FootClass":       ["TechnoClass", "RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    "TechnoClass":     ["RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    "RadioClass":      ["MissionClass", "ObjectClass", "AbstractClass"],
    "MissionClass":    ["ObjectClass", "AbstractClass"],
    "ObjectClass":     ["AbstractClass"],
    "AbstractClass":   [],
}

TYPE_CLASS_PARENTS: Dict[str, List[str]] = {
    "UnitTypeClass":          ["TechnoTypeClass", "ObjectTypeClass", "AbstractTypeClass"],
    "BuildingTypeClass":      ["TechnoTypeClass", "ObjectTypeClass", "AbstractTypeClass"],
    "InfantryTypeClass":     ["TechnoTypeClass", "ObjectTypeClass", "AbstractTypeClass"],
    "AircraftTypeClass":     ["TechnoTypeClass", "ObjectTypeClass", "AbstractTypeClass"],
    "AnimTypeClass":         ["ObjectTypeClass", "AbstractTypeClass"],
    "BulletTypeClass":       ["ObjectTypeClass", "AbstractTypeClass"],
    "SmudgeTypeClass":       ["ObjectTypeClass", "AbstractTypeClass"],
    "OverlayTypeClass":      ["ObjectTypeClass", "AbstractTypeClass"],
    "ParticleTypeClass":     ["ObjectTypeClass", "AbstractTypeClass"],
    "HouseTypeClass":        ["AbstractTypeClass"],
    "SuperWeaponTypeClass":  ["AbstractTypeClass"],
    "WarheadTypeClass":      ["AbstractTypeClass"],
    "ScriptTypeClass":       ["AbstractTypeClass"],
    "TechnoTypeClass":       ["ObjectTypeClass", "AbstractTypeClass"],
    "ObjectTypeClass":       ["AbstractTypeClass"],
    "AbstractTypeClass":     [],
}

# Filename (stem) → (PrimaryClass, TypeClass)
FILE_TO_CLASS: Dict[str, Tuple[str, Optional[str]]] = {
    "unit":         ("UnitClass",         "UnitTypeClass"),
    "building":     ("BuildingClass",     "BuildingTypeClass"),
    "infantry":     ("InfantryClass",     "InfantryTypeClass"),
    "aircraft":     ("AircraftClass",     "AircraftTypeClass"),
    "anim":         ("AnimClass",         "AnimTypeClass"),
    "bullet":       ("BulletClass",       "BulletTypeClass"),
    "smudge":       ("SmudgeClass",       "SmudgeTypeClass"),
    "overlay":      ("OverlayClass",      "OverlayTypeClass"),
    "particle":     ("ParticleClass",     "ParticleTypeClass"),
    "tiberium":     ("TiberiumClass",     None),
    "temporal":     ("TemporalClass",     None),
    "techno":       ("TechnoClass",       "TechnoTypeClass"),
    "object":       ("ObjectClass",       "ObjectTypeClass"),
    "abstract":     ("AbstractClass",     "AbstractTypeClass"),
    "foot":         ("FootClass",         None),
    "radio":        ("RadioClass",        None),
    "mission":      ("MissionClass",      None),
    "wave":         ("WaveClass",         None),
    "tag":          ("TagClass",          None),
    "script":       ("ScriptClass",       "ScriptTypeClass"),
}

# ──────────────────────────────────────────────────────────
# Type → sizeof mapping (for Pattern 5 array index → offset)
# ──────────────────────────────────────────────────────────

SIZEOF: Dict[str, int] = {
    "int": 4, "int32_t": 4, "uint32_t": 4, "uint": 4, "unsigned int": 4,
    "float": 4, "bool": 1,
    "short": 2, "int16_t": 2, "uint16_t": 2,
    "int8_t": 1, "uint8_t": 1, "char": 1, "byte": 1,
    "double": 8, "int64_t": 8, "uint64_t": 8,
    "LONG": 4, "DWORD": 4, "WORD": 2, "BYTE": 1,
    "HRESULT": 4, "wchar_t": 2,
    "size_t": 4,  # 32-bit build
    "void*": 4, "void**": 4,
}


def get_type_size(type_str: str) -> int:
    """Get sizeof for a C type string, e.g. 'int*' → 4, 'float' → 4."""
    t = type_str.strip()
    # Strip pointer asterisks (pointer is always 4 bytes on 32-bit)
    ptr_count = t.count("*")
    if ptr_count > 0:
        return 4
    # Strip qualifiers
    t = t.replace("const ", "").replace("volatile ", "").strip()
    if t in SIZEOF:
        return SIZEOF[t]
    # Unknown types default to 4 (32-bit)
    return 4


# ──────────────────────────────────────────────────────────
# Member lookup
# ──────────────────────────────────────────────────────────

def load_db(path: str) -> dict:
    with open(path, "r", encoding="utf-8") as f:
        return json.load(f)


def build_lookup_chain(db: dict, class_name: str, parents_map: Dict[str, List[str]]) -> List[str]:
    """Build ordered class chain to search. Most-derived first."""
    chain = [class_name]
    for p in parents_map.get(class_name, []):
        chain.append(p)
    return [c for c in chain if c in db]


def lookup_member(db: dict, chain: List[str], offset: int) -> Optional[Dict]:
    """Look up absolute offset in class chain. Returns {name, type} or None."""
    offset_str = str(offset)
    for cls_name in chain:
        entry = db.get(cls_name, {}).get(offset_str)
        if entry is not None:
            return entry
    return None


def get_member_name(db: dict, chain: List[str], offset: int) -> str:
    """Resolve offset → member name, or UNKNOWN_OFFSET_NNN."""
    m = lookup_member(db, chain, offset)
    if m:
        return m["name"]
    return f"UNKNOWN_OFFSET_{offset}"


# ──────────────────────────────────────────────────────────
# Variable → class resolution
# ──────────────────────────────────────────────────────────

def resolve_var_chain(db: dict, var: str, this_chain: List[str], type_chain: List[str]) -> List[str]:
    """Which class chain should this variable be looked up in?"""
    if var == "this":
        return this_chain if this_chain else []
    if var in ("Type", "type"):
        return type_chain if type_chain else []
    # Variables ending in 'Type' or 'type' → type chain
    if var.endswith("Type") or var.endswith("type"):
        return type_chain if type_chain else []
    # Try to match var name to a class in the database
    # E.g. 'house' → HouseClass, 'target' → try ObjectClass
    for candidate in [var.title() + "Class", var.capitalize() + "Class"]:
        if candidate in db:
            chain = build_lookup_chain(db, candidate, CLASS_PARENTS)
            if chain:
                return chain
    # Generic fallback: merge all known class members (last resort)
    # Search all CLASS_PARENTS keys for the offset
    return ["__all__"]


def _search_all_classes(db: dict, offset: int) -> Optional[Dict]:
    """Fallback: search all classes in the db for this offset."""
    offset_str = str(offset)
    for cls_name in db:
        cls_data = db.get(cls_name)
        if isinstance(cls_data, dict) and offset_str in cls_data:
            return cls_data[offset_str]
    return None


def get_member_name_generic(db: dict, chain: List[str], offset: int,
                             this_chain: List[str], type_chain: List[str]) -> str:
    """Resolve with fallback to all-class search."""
    # First try the specified chain
    if chain and "__all__" not in chain:
        m = lookup_member(db, chain, offset)
        if m:
            return m["name"]

    # Try this chain as fallback
    if this_chain:
        m = lookup_member(db, this_chain, offset)
        if m:
            return m["name"]

    # Try type chain as fallback
    if type_chain:
        m = lookup_member(db, type_chain, offset)
        if m:
            return m["name"]

    # All-class search as last resort
    m = _search_all_classes(db, offset)
    if m:
        return m["name"]

    return f"UNKNOWN_OFFSET_{offset}"


# ──────────────────────────────────────────────────────────
# Regex patterns
# ──────────────────────────────────────────────────────────

# Pattern 5a: ((int*)this)[191]  — array index via pointer cast
RE_ARRAY_CAST = re.compile(
    r'\(\s*\(\s*([\w\s]+\*)\s*\)\s*(\w+)\s*\)\s*\[(\d+)\]'
)

# Pattern 5b: typeData[2048/4]  — array index with integer division
# Matches when the denominator is 1, 2, 4, or 8 (sizeofs we recognize)
RE_ARRAY_DIV = re.compile(
    r'(\w+)\s*\[\s*(\d+)\s*/\s*([1248])\s*\]'
)

# Pattern 4: *((uint8_t*)(*targetType) + 704)  — nested deref
RE_NESTED_DEREF = re.compile(
    r'\*\s*\(\s*\(\s*uint8_t\s*\*\s*\)\s*\(\s*\*\s*(\w+)\s*\)\s*\+\s*(\d+)\s*\)'
)

# Pattern 2: *(int*)((uint8_t*)var + OFF) = value;
# Must be applied BEFORE Pattern 1 (read). Captures the assignment value.
RE_UINT8_ASSIGN = re.compile(
    r'\*\s*\(\s*([\w]+\s*\*?)\s*\)\s*\(\s*\(\s*uint8_t\s*\*\s*\)\s*(\w+)\s*\+\s*(\d+)\s*\)'
    r'\s*=\s*([^;]+)\s*;'
)

# Pattern 1: *(int*)((uint8_t*)var + OFF)  — deref with uint8_t cast (read, no = after)
RE_UINT8_DEREF = re.compile(
    r'\*\s*\(\s*([\w]+\s*\*?)\s*\)\s*\(\s*\(\s*uint8_t\s*\*\s*\)\s*(\w+)\s*\+\s*(\d+)\s*\)'
)

# Pattern 3: (int*)((uint8_t*)var + OFF)  — address-of, NOT preceded by *
# Applied LAST (after P1/P2 consume *-prefixed patterns)
RE_UINT8_ADDR = re.compile(
    r'\(\s*([\w]+\s*\*?)\s*\)\s*\(\s*\(\s*uint8_t\s*\*\s*\)\s*(\w+)\s*\+\s*(\d+)\s*\)'
)


# ──────────────────────────────────────────────────────────
# Core processing
# ──────────────────────────────────────────────────────────

def process_line(line: str, db: dict, this_chain: List[str], type_chain: List[str],
                 verbose: bool = False) -> Tuple[str, int]:
    """
    Process one line: apply all 5 patterns in order.
    Returns (modified_line, replacement_count).
    """
    original = line
    count = 0

    # Skip pure comment lines (don't touch comments)
    stripped = line.lstrip()
    if stripped.startswith("//") or stripped.startswith("/*"):
        return line, 0

    result = line  # mutable copy

    # ── Pattern 5a: ((Type*)var)[N] → *(Type*)((uint8_t*)var + N*sizeof) ──
    def _repl_p5a(m):
        nonlocal count
        type_str = m.group(1).strip()
        var = m.group(2)
        idx = int(m.group(3))
        size = get_type_size(type_str)
        offset = idx * size
        count += 1
        return f"*({type_str})((uint8_t*){var} + {offset})"

    result = RE_ARRAY_CAST.sub(_repl_p5a, result)

    # ── Pattern 5b: var[N/D] → *(type*)((uint8_t*)var + N)  where D=sizeof ──
    def _repl_p5b(m):
        nonlocal count
        var = m.group(1)
        numer = int(m.group(2))
        denom = int(m.group(3))
        type_map = {1: "uint8_t", 2: "int16_t", 4: "int", 8: "int64_t"}
        type_str = type_map.get(denom, "int")
        count += 1
        return f"*({type_str}*)((uint8_t*){var} + {numer})"

    result = RE_ARRAY_DIV.sub(_repl_p5b, result)

    # ── Pattern 4: *((uint8_t*)(*var) + OFF) → (*var)->Member ──
    def _repl_p4(m):
        nonlocal count
        var = m.group(1)
        offset = int(m.group(2))
        # Use type chain first, fall back to this chain
        chain = type_chain if type_chain else this_chain
        name = get_member_name_generic(db, chain, offset, this_chain, type_chain)
        count += 1
        return f"(*{var})->{name}"

    result = RE_NESTED_DEREF.sub(_repl_p4, result)

    # ── Pattern 2: *(type*)((uint8_t*)var + OFF) = value; → var->Member = value; ──
    def _repl_p2(m):
        nonlocal count
        type_str = m.group(1).strip()
        var = m.group(2)
        offset = int(m.group(3))
        value = m.group(4).strip()
        chain = resolve_var_chain(db, var, this_chain, type_chain)
        name = get_member_name_generic(db, chain, offset, this_chain, type_chain)
        count += 1
        return f"{var}->{name} = {value};"

    result = RE_UINT8_ASSIGN.sub(_repl_p2, result)

    # ── Pattern 1: *(type*)((uint8_t*)var + OFF) → var->Member ──
    def _repl_p1(m):
        nonlocal count
        type_str = m.group(1).strip()
        var = m.group(2)
        offset = int(m.group(3))
        chain = resolve_var_chain(db, var, this_chain, type_chain)
        name = get_member_name_generic(db, chain, offset, this_chain, type_chain)
        count += 1
        return f"{var}->{name}"

    result = RE_UINT8_DEREF.sub(_repl_p1, result)

    # ── Pattern 3: (type*)((uint8_t*)var + OFF) → &var->Member ──
    def _repl_p3(m):
        nonlocal count
        type_str = m.group(1).strip()
        var = m.group(2).strip()
        offset = int(m.group(3))
        chain = resolve_var_chain(db, var, this_chain, type_chain)
        name = get_member_name_generic(db, chain, offset, this_chain, type_chain)
        count += 1
        return f"&{var}->{name}"

    result = RE_UINT8_ADDR.sub(_repl_p3, result)

    if verbose and result != original:
        print(f"  - {original.rstrip()}")
        print(f"  + {result.rstrip()}")

    return result, count


# ──────────────────────────────────────────────────────────
# Check mode: violation detection
# ──────────────────────────────────────────────────────────

# Compiled patterns for detecting violations
_RE_RAW_PTR_THIS = re.compile(r'\(uint8_t\s*\*\s*\)\s*\bthis\b')
_RE_RAW_PTR_TYPE = re.compile(r'\(uint8_t\s*\*\s*\)\s*\bType\b')
_RE_CAST_THIS = re.compile(r'\(int\s*\*\s*\)\s*\bthis\b')
_RE_ARRAY_DIV_ACCESS = re.compile(r'\[(\d+)\s*/\s*([1248])\]')
_RE_DOUBLE_CAST = re.compile(r'\(int\s*\*\s*\)\s*\(\s*\(uint8_t\s*\*\s*\)\s*\(')
_RE_CPP_CAST = re.compile(r'\b(static_cast|reinterpret_cast|dynamic_cast)\b')


def _check_violations(file_path: str) -> List[Tuple[str, int, str]]:
    """Scan a file for raw pointer access violations.
    Returns list of (file_path, line_number, description) tuples.
    """
    violations = []
    with open(file_path, "r", encoding="utf-8") as f:
        lines = f.readlines()

    for i, line in enumerate(lines, 1):
        stripped = line.lstrip()
        # Skip comment-only lines
        if stripped.startswith("//") or stripped.startswith("/*"):
            continue
        # Skip preprocessor / strings
        if stripped.startswith("#include") or stripped.startswith('"'):
            continue

        # Strip inline // comment so we only check code
        code_only = line.split("//")[0]

        # Check 1: (uint8_t*)this or (uint8_t*)Type
        if _RE_RAW_PTR_THIS.search(code_only):
            violations.append((file_path, i,
                f"(uint8_t*)this — raw byte-pointer cast on 'this'"))
        elif _RE_RAW_PTR_TYPE.search(code_only):
            violations.append((file_path, i,
                f"(uint8_t*)Type — raw byte-pointer cast on 'Type'"))

        # Check 2: (int*)(this) — casting this to int*
        if _RE_CAST_THIS.search(code_only):
            violations.append((file_path, i,
                f"(int*)this — casting 'this' to int*"))

        # Check 3: array[N/4] — array division access
        ad_match = _RE_ARRAY_DIV_ACCESS.search(code_only)
        if ad_match:
            violations.append((file_path, i,
                f"[{ad_match.group(1)}/{ad_match.group(2)}] — array division access"))

        # Check 4: double cast patterns
        if _RE_DOUBLE_CAST.search(code_only):
            violations.append((file_path, i,
                f"double-cast pattern — (int*)((uint8_t*)(...)"))

        # Check 5: C++ casts embedded in raw-pointer patterns
        cpp_cast = _RE_CPP_CAST.search(code_only)
        raw_ptr_in_line = _RE_RAW_PTR_THIS.search(code_only) or _RE_RAW_PTR_TYPE.search(code_only) or _RE_DOUBLE_CAST.search(code_only)
        if cpp_cast and raw_ptr_in_line:
            violations.append((file_path, i,
                f"{cpp_cast.group(1)} alongside raw pointer access"))

    return violations

def main():
    parser = argparse.ArgumentParser(
        description="Replace IDA decompiler raw pointer offsets with ->memberName access"
    )
    parser.add_argument("file", help="C++ source file to process")
    parser.add_argument("--db", default=None,
                        help="Member database JSON (default: tools/member_lookup.json)")
    parser.add_argument("--class", dest="class_name",
                        help="Primary class name (auto-detected from filename)")
    parser.add_argument("--type-class", dest="type_class_name",
                        help="Corresponding Type class name")
    parser.add_argument("--dry-run", action="store_true",
                        help="Print changes without writing")
    parser.add_argument("--verbose", "-v", action="store_true",
                        help="Show each replacement")
    parser.add_argument("--check", action="store_true",
                        help="Check-only mode: scan for violations, exit 1 if any found")
    args = parser.parse_args()

    # Resolve paths
    script_dir = os.path.dirname(os.path.abspath(__file__))
    project_dir = os.path.dirname(script_dir)

    db_path = args.db or os.path.join(project_dir, "tools", "member_lookup.json")
    src_path = args.file if os.path.isabs(args.file) else os.path.join(os.getcwd(), args.file)

    if not os.path.exists(db_path):
        print(f"ERROR: member database not found: {db_path}", file=sys.stderr)
        sys.exit(1)
    if not os.path.exists(src_path):
        print(f"ERROR: source file not found: {src_path}", file=sys.stderr)
        sys.exit(1)

    db = load_db(db_path)

    # Determine class
    filename = os.path.basename(src_path)
    stem, _ = os.path.splitext(filename)

    primary_class = args.class_name
    type_class = args.type_class_name

    if not primary_class:
        info = FILE_TO_CLASS.get(stem)
        if info:
            primary_class, auto_type = info
            if not type_class:
                type_class = auto_type
        else:
            print(f"WARNING: cannot determine class from '{filename}'.", file=sys.stderr)
            print(f"  Use --class CLASS_NAME --type-class TYPE_NAME.", file=sys.stderr)
            # Still try to process with generic fallback
            primary_class = None
            type_class = None

    if primary_class and primary_class not in db:
        print(f"WARNING: class '{primary_class}' not found in member database.", file=sys.stderr)
    if type_class and type_class not in db:
        type_class = None

    # Build lookup chains
    this_chain = build_lookup_chain(db, primary_class, CLASS_PARENTS) if primary_class else []
    type_chain = build_lookup_chain(db, type_class, TYPE_CLASS_PARENTS) if type_class else []

    # ── Check mode: scan for violations, exit without writing ──
    if args.check:
        violations = _check_violations(src_path)
        if violations:
            for file_path, line_num, pattern_text in violations:
                print(f"  {file_path}:{line_num}: {pattern_text}")
            print(f"\nERROR: {len(violations)} raw pointer violation(s) found in {src_path}")
            sys.exit(1)
        else:
            print(f"OK: {src_path}")
            sys.exit(0)

    if args.verbose:
        print(f"File:  {src_path}")
        print(f"Chain: {' → '.join(this_chain) if this_chain else 'N/A'}")
        print(f"Type:  {' → '.join(type_chain) if type_chain else 'N/A'}")
        print()

    # Read file (preserve line endings)
    with open(src_path, "r", encoding="utf-8") as f:
        content = f.read()

    lines = content.splitlines(keepends=True)

    # Process
    modified_lines = []
    total_count = 0

    for i, line in enumerate(lines):
        new_line, count = process_line(line, db, this_chain, type_chain, args.verbose)
        modified_lines.append(new_line)
        total_count += count

    # Report
    print(f"\n{'[DRY RUN] ' if args.dry_run else ''}Total replacements: {total_count}")

    if not args.dry_run and total_count > 0:
        with open(src_path, "w", encoding="utf-8") as f:
            f.writelines(modified_lines)
        print(f"Written: {src_path}")

    # Post-check counts
    if total_count > 0:
        remaining = sum(1 for ln in modified_lines if "(uint8_t*)" in ln and
                       ("this" in ln or "Type" in ln))
        print(f"Remaining (uint8_t*) lines: {remaining}")

    return 0


if __name__ == "__main__":
    sys.exit(main())
