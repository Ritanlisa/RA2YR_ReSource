#!/usr/bin/env python3
"""
T20: rewrite_offsets.py — Batch offset-to-member rewrite using type inference.

Reads suggested_types.json for ANCHORED-confidence type annotations,
finds raw pointer offset accesses in source .cpp files, and replaces them
with named member access (this->MemberName).

Output: a .patch file for Agent review (NOT auto-applied).

Usage:
    python tools/type_infer/rewrite_offsets.py [--output PATH] [--verbose]

Mechanism:
    1. Load suggested_types.json → function-address → {this_type, arg_types}
    2. Map addresses → function names via signals.json
    3. Locate function definitions in src/**/*.cpp
    4. Parse function bodies for raw offset patterns
    5. Resolve offset → member name via member_lookup.json + inheritance chain
    6. Generate unified diff .patch file

Confidence filter:
    - Process: ANCHORED (tier 0)
    - Skip: INFERRED (tier 3)
    - DIRECT_PROP (tier 1) and CHAIN_PROP (tier 2) are also processed if present
"""

import json
import os
import re
import sys
import difflib
from collections import defaultdict, OrderedDict
from pathlib import Path
from typing import Dict, List, Optional, Set, Tuple

# ── Paths ──
ROOT = Path(__file__).resolve().parent.parent.parent
SUGGESTED_TYPES = ROOT / "suggested_types.json"
SIGNALS_JSON = ROOT / "signals.json"
MEMBER_LOOKUP = ROOT / "tools" / "member_lookup.json"
SRC_DIR = ROOT / "src"
OUTPUT_DEFAULT = ROOT / ".omo" / "rewrite_offsets.patch"

# ── Confidence tiers (from generate_suggested.py) ──
CONF_ORDER = {"ANCHORED": 0, "DIRECT_PROP": 1, "CHAIN_PROP": 2, "INFERRED": 3}
PROCESS_CONFIDENCES = {"ANCHORED", "DIRECT_PROP", "CHAIN_PROP"}
SKIP_CONFIDENCES = {"INFERRED"}

# ── Inheritance chain (same as pre_translate.py) ──
INHERITANCE_CHAIN = {
    "UnitClass": ["FootClass", "TechnoClass", "RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    "InfantryClass": ["FootClass", "TechnoClass", "RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    "AircraftClass": ["FootClass", "TechnoClass", "RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    "BuildingClass": ["TechnoClass", "RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    "BulletClass": ["ObjectClass", "AbstractClass"],
    "AnimClass": ["ObjectClass", "AbstractClass"],
    "ParticleClass": ["ObjectClass", "AbstractClass"],
    "ParticleSystemClass": ["ObjectClass", "AbstractClass"],
    "VoxelAnimClass": ["ObjectClass", "AbstractClass"],
    "OverlayClass": ["ObjectClass", "AbstractClass"],
    "SmudgeClass": ["ObjectClass", "AbstractClass"],
    "TerrainClass": ["ObjectClass", "AbstractClass"],
    "TiberiumClass": ["ObjectClass", "AbstractClass"],
    "WaveClass": ["ObjectClass", "AbstractClass"],
    "TubeClass": ["ObjectClass", "AbstractClass"],
    "UnitTypeClass": ["TechnoTypeClass", "ObjectTypeClass", "AbstractTypeClass"],
    "BuildingTypeClass": ["TechnoTypeClass", "ObjectTypeClass", "AbstractTypeClass"],
    "InfantryTypeClass": ["TechnoTypeClass", "ObjectTypeClass", "AbstractTypeClass"],
    "AircraftTypeClass": ["TechnoTypeClass", "ObjectTypeClass", "AbstractTypeClass"],
    "AnimTypeClass": ["ObjectTypeClass", "AbstractTypeClass"],
    "BulletTypeClass": ["ObjectTypeClass", "AbstractTypeClass"],
    "ParticleTypeClass": ["ObjectTypeClass", "AbstractTypeClass"],
    "ParticleSystemTypeClass": ["ObjectTypeClass", "AbstractTypeClass"],
    "VoxelAnimTypeClass": ["ObjectTypeClass", "AbstractTypeClass"],
    "OverlayTypeClass": ["ObjectTypeClass", "AbstractTypeClass"],
    "SmudgeTypeClass": ["ObjectTypeClass", "AbstractTypeClass"],
    "TerrainTypeClass": ["ObjectTypeClass", "AbstractTypeClass"],
    "SuperWeaponTypeClass": ["AbstractTypeClass"],
    "WarheadTypeClass": ["AbstractTypeClass"],
    "WeaponTypeClass": ["AbstractTypeClass"],
    "CampaignClass": ["AbstractClass"],
    "HouseTypeClass": ["AbstractClass"],
    "SideClass": ["AbstractClass"],
    "TechnoClass": ["RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    "FootClass": ["TechnoClass", "RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    "RadioClass": ["MissionClass", "ObjectClass", "AbstractClass"],
    "MissionClass": ["ObjectClass", "AbstractClass"],
    "ObjectClass": ["AbstractClass"],
    "TechnoTypeClass": ["ObjectTypeClass", "AbstractTypeClass"],
    "ObjectTypeClass": ["AbstractTypeClass"],
}


def normalize_addr(addr: str) -> str:
    """Normalize address: '0x004071C0' → '0x4071c0'"""
    if addr.startswith("0x") or addr.startswith("0X"):
        return "0x" + addr[2:].lstrip("0").lower() or "0x0"
    try:
        return "0x" + hex(int(addr, 16))[2:].lower()
    except ValueError:
        return addr.lower()


# ── Offset regex patterns for C++ source files ──
# These match patterns commonly found in translated .cpp files.
#
# C++ patterns differ from IDA pseudocode patterns:
#   IDA: *(this + 176)          → C++: *((_DWORD *)this + 44)
#   IDA: *(_BYTE *)(this + 404) → C++: *((_BYTE *)this + 404)
#   IDA: (int *)(this + 156)    → C++: (int *)((char *)this + 156)

# Pattern 1: *((_DWORD *)this + N) or *((int *)this + N) — most common pattern
# Cast this to dword/int pointer, add N dwords, dereference → byte_offset = N*4
RE_DWORD_PTR_THIS = re.compile(
    r'(?P<prefix>[!~])?\*\(\s*\(\s*(?P<cast>_DWORD|int|uint32_t|unsigned\s+int|float|double)\s*\*\s*\)\s*'
    r'(?P<var>this)\s*\+\s*(?P<off>\d+)\s*\)'
)

# Pattern 2: *((_BYTE *)this + N) or *((char *)this + N) — byte-cast deref
RE_BYTE_PTR_THIS = re.compile(
    r'(?P<prefix>[!~])?\*\(\s*\(\s*(?P<cast>_BYTE|char|uint8_t|unsigned\s+__int8)\s*\*\s*\)\s*'
    r'(?P<var>this)\s*\+\s*(?P<off>\d+)\s*\)'
)

# Pattern 3: *((_WORD *)this + N) or *((uint16_t *)this + N) — word-cast deref
RE_WORD_PTR_THIS = re.compile(
    r'(?P<prefix>[!~])?\*\(\s*\(\s*(?P<cast>_WORD|uint16_t|unsigned\s+__int16)\s*\*\s*\)\s*'
    r'(?P<var>this)\s*\+\s*(?P<off>\d+)\s*\)'
)

# Pattern 4: *(Type *)((uint8_t/char *)this + N) — nested cast byte-offset deref
RE_NESTED_CAST_THIS = re.compile(
    r'(?P<prefix>[!~])?\*\(\s*(?P<cast>_DWORD|_BYTE|_WORD|int|char|uint8_t|uint16_t|uint32_t|float|double|BOOL)\s*\*\s*\)'
    r'\s*\(\s*(?:\(\s*(?P<inner>char|uint8_t)\s*\*\s*\)\s*)?'
    r'(?P<var>this)\s*\+\s*(?P<off>\d+)\s*\)'
)

# Pattern 5: ((Type *)ptr)[N] — array-style member access on this
RE_ARRAY_THIS = re.compile(
    r'\(\s*\(\s*(?P<cast>_DWORD|_BYTE|_WORD|int|uint32_t)\s*\*\s*\)\s*'
    r'(?P<var>this)\s*\)\s*\[\s*(?P<off>\d+)\s*\]'
)

# Pattern 6: (Type *)((char *)this + N) — address-of member (pointer cast, byte offset)
RE_ADDR_PTR_THIS = re.compile(
    r'\(\s*(?P<cast>int|char|_DWORD|_BYTE|_WORD|uint8_t|uint16_t|uint32_t)\s*\*\s*\)'
    r'\s*\(\s*(?:\(\s*(?P<inner>char|uint8_t)\s*\*\s*\)\s*)?'
    r'(?P<var>this)\s*\+\s*(?P<off>\d+)\s*\)'
)

# Pattern 7: (int)(this + N) — address-of member (value cast, dword offset)
RE_INT_ADDR_THIS = re.compile(
    r'\(\s*(?P<cast>int|char|_DWORD|_BYTE|_WORD|uint8_t|uint16_t|uint32_t)\s*\)'
    r'\s*\(\s*(?P<var>this)\s*\+\s*(?P<off>\d+)\s*\)'
)

# Pattern 8: *((_DWORD *)typedPtr + N) — typed pointer dword deref (for arg-typed vars)
RE_DWORD_PTR_VAR = re.compile(
    r'(?P<prefix>[!~])?\*\(\s*\(\s*(?P<cast>_DWORD|int|uint32_t|unsigned\s+int|float|double)\s*\*\s*\)\s*'
    r'(?P<var>[a-zA-Z_]\w*)\s*\+\s*(?P<off>\d+)\s*\)'
)

# Pattern 9: *((_BYTE *)typedPtr + N) — typed pointer byte deref
RE_BYTE_PTR_VAR = re.compile(
    r'(?P<prefix>[!~])?\*\(\s*\(\s*(?P<cast>_BYTE|char|uint8_t|unsigned\s+__int8)\s*\*\s*\)\s*'
    r'(?P<var>[a-zA-Z_]\w*)\s*\+\s*(?P<off>\d+)\s*\)'
)

# Pattern 10: ((Type *)typedPtr)[N] — array-style on typed pointer
RE_ARRAY_TYPED = re.compile(
    r'\(\s*\(\s*(?P<cast>_DWORD|_BYTE|_WORD|int|uint32_t)\s*\*\s*\)\s*'
    r'(?P<var>[a-zA-Z_]\w*)\s*\)\s*\[\s*(?P<off>\d+)\s*\]'
)


def load_json(path: Path) -> dict:
    """Load a JSON file."""
    with open(path, "r", encoding="utf-8") as f:
        return json.load(f)


def load_signals() -> Dict[str, dict]:
    """Load signals.json and return addr→entry map."""
    data = load_json(SIGNALS_JSON)
    return data.get("symbols", {})


def load_suggestions() -> Dict[str, dict]:
    """Load suggested_types.json, filtered to process-able confidence levels."""
    data = load_json(SUGGESTED_TYPES)
    suggestions = data.get("suggestions", {})
    filtered = {}
    skipped = 0
    for key, val in suggestions.items():
        conf = val.get("confidence", "?")
        if conf in SKIP_CONFIDENCES:
            skipped += 1
            continue
        filtered[key] = val
    if skipped:
        print(f"[INFO] Skipped {skipped} INFERRED-confidence suggestions")
    return filtered


def load_member_lookup() -> dict:
    """Load member_lookup.json."""
    return load_json(MEMBER_LOOKUP)


def resolve_member(member_lookup: dict, cls: str, byte_offset: int) -> Tuple[Optional[str], Optional[str], Optional[str]]:
    """Resolve a byte offset to a member name using inheritance chain.
    
    Returns (found_class, member_name, member_type) or (None, None, None).
    """
    off_str = str(byte_offset)
    
    # Search target class first
    if cls in member_lookup and off_str in member_lookup[cls]:
        m = member_lookup[cls][off_str]
        return cls, m["name"], m.get("type", "?")
    
    # Walk parent chain
    chain = INHERITANCE_CHAIN.get(cls, [])
    for parent in chain:
        if parent in member_lookup and off_str in member_lookup[parent]:
            m = member_lookup[parent][off_str]
            return parent, m["name"], m.get("type", "?")
    
    return None, None, None


def find_nearest_members(member_lookup: dict, cls: str, byte_offset: int) -> dict:
    """Find nearest known members above and below the offset."""
    all_offsets = set()
    chain = [cls] + INHERITANCE_CHAIN.get(cls, [])
    for c in chain:
        if c in member_lookup:
            all_offsets.update(int(k) for k in member_lookup[c].keys())
    
    sorted_offs = sorted(all_offsets)
    prev = max((k for k in sorted_offs if k <= byte_offset), default=None)
    nxt = min((k for k in sorted_offs if k >= byte_offset), default=None)
    
    result = {}
    if prev is not None:
        found_cls, name, ty = resolve_member(member_lookup, cls, prev)
        if found_cls:
            result["prev"] = (prev, f"{found_cls}::{name}", ty)
    if nxt is not None and nxt != prev:
        found_cls, name, ty = resolve_member(member_lookup, cls, nxt)
        if found_cls:
            result["next"] = (nxt, f"{found_cls}::{name}", ty)
    return result


def build_func_type_map(suggestions: dict, signals: dict) -> dict:
    """Build a map: function_address → {this_type, arg_types}.
    
    Returns: {normalized_addr: {"name": str, "this_type": str|None, 
              "arg_types": {index: type_str}, "confidence": str}}
    """
    func_map = defaultdict(lambda: {
        "name": None, "this_type": None, "arg_types": {}, "confidence": "ANCHORED"
    })
    
    for key, val in suggestions.items():
        source_key = val.get("source_key", "")
        confidence = val.get("confidence", "ANCHORED")
        typ = val.get("type", "")
        
        # Parse the suggestion key to determine what it applies to
        # Keys: 0xADDR.this, 0xADDR.arg0, 0xADDR.ret, etc.
        parts = key.split(".")
        if len(parts) < 2:
            continue
        
        # Normalize function address from source_key
        if "::" in source_key:
            addr_raw = source_key.split("::")[0]
        else:
            addr_raw = parts[0]
        
        addr_norm = normalize_addr(addr_raw)
        
        # Get function name
        if func_map[addr_norm]["name"] is None:
            func_map[addr_norm]["name"] = signals.get(addr_norm, {}).get("name")
        
        # Update confidence (keep highest tier = lowest number)
        cur_conf = func_map[addr_norm]["confidence"]
        if CONF_ORDER.get(confidence, 99) < CONF_ORDER.get(cur_conf, 99):
            func_map[addr_norm]["confidence"] = confidence
        
        # Assign type based on position
        pos = parts[-1]
        if pos == "this":
            func_map[addr_norm]["this_type"] = typ
        elif pos.startswith("arg") and pos[3:].isdigit():
            idx = int(pos[3:])
            func_map[addr_norm]["arg_types"][idx] = typ
    
    return dict(func_map)


def find_function_in_source(func_name: str, src_dir: Path) -> List[Tuple[Path, int, int]]:
    """Find function definitions in .cpp files.
    
    Returns list of (file_path, start_line, end_line).
    start_line and end_line are 1-based.
    """
    if not func_name or "::" not in func_name:
        return []
    
    results = []
    class_name, method_name = func_name.rsplit("::", 1)
    
    # Build regex for function definition: ReturnType ClassName::MethodName(
    # Handle various return types and whitespace
    pattern = re.compile(
        r'^\s*(?:(?:static|virtual|inline|const|unsigned|signed)\s+)*'
        r'(?:[\w:<>*&\s]+)\s+'  # return type
        + re.escape(class_name) + r'::' + re.escape(method_name) +
        r'\s*\([^)]*\)\s*(?:const)?\s*'
    )
    
    for cpp_file in src_dir.rglob("*.cpp"):
        try:
            with open(cpp_file, "r", encoding="utf-8", errors="replace") as f:
                lines = f.readlines()
        except Exception:
            continue
        
        for i, line in enumerate(lines):
            if re.search(re.escape(class_name) + r'::' + re.escape(method_name) + r'\s*\(', line):
                # Found a candidate - verify it's a definition (has { not just ;)
                # Scan forward for opening brace
                j = i
                while j < len(lines):
                    combined = " ".join(lines[i:j+1])
                    if "{" in combined:
                        # Find matching closing brace to get function bounds
                        start_line = i + 1
                        brace_count = 0
                        in_func = False
                        end_line = start_line
                        for k in range(i, len(lines)):
                            for ch in lines[k]:
                                if ch == "{":
                                    brace_count += 1
                                    in_func = True
                                elif ch == "}":
                                    brace_count -= 1
                                    if in_func and brace_count == 0:
                                        end_line = k + 1
                                        break
                            if in_func and brace_count == 0:
                                break
                        results.append((cpp_file, start_line, end_line))
                        break
                    elif ";" in combined and "{" not in combined:
                        # Declaration only, skip
                        break
                    j += 1
                break  # Found match for this file
    
    return results


def parse_offsets_in_text(text: str, this_type: Optional[str], 
                          arg_types: Dict[int, str]) -> List[dict]:
    """Parse text for raw offset patterns in C++ source files.
    
    Returns list of offset entries:
        {line_num, pattern, byte_offset, access_type, var_name, replacement}
    
    Deduplication is per-line (same offset on different lines = separate entries).
    """
    results = []
    
    lines = text.split("\n")
    
    for line_num, line in enumerate(lines):
        # Skip comment-only lines
        stripped = line.strip()
        if stripped.startswith("//") or stripped.startswith("/*"):
            continue
        
        # Per-line dedup: same byte offset on same line → skip
        line_seen = set()
        
        # ──── this-pointer patterns (most common) ────
        
        # Pattern 1: *((_DWORD *)this + N) / *((int *)this + N) — dword ptr deref
        for m in RE_DWORD_PTR_THIS.finditer(line):
            off = int(m.group("off"))
            byte_off = off * 4  # _DWORD pointer arithmetic: N dwords
            key = f"dptr:{byte_off}"
            if key in line_seen:
                continue
            line_seen.add(key)
            results.append({
                "line_num": line_num,
                "pattern": m.group(0),
                "byte_offset": byte_off,
                "access_type": "dword_deref",
                "var_type": this_type,
                "var_name": "this",
                "original": m.group(0),
                "has_prefix": bool(m.group("prefix")),
            })
        
        # Pattern 2: *((_BYTE *)this + N) / *((char *)this + N) — byte ptr deref
        for m in RE_BYTE_PTR_THIS.finditer(line):
            off = int(m.group("off"))
            byte_off = off  # byte pointer arithmetic: offset = N bytes
            key = f"bptr:{byte_off}"
            if key in line_seen:
                continue
            line_seen.add(key)
            results.append({
                "line_num": line_num,
                "pattern": m.group(0),
                "byte_offset": byte_off,
                "access_type": "byte_deref",
                "var_type": this_type,
                "var_name": "this",
                "original": m.group(0),
                "has_prefix": bool(m.group("prefix")),
            })
        
        # Pattern 3: *((_WORD *)this + N) — word ptr deref
        for m in RE_WORD_PTR_THIS.finditer(line):
            off = int(m.group("off"))
            byte_off = off * 2  # word pointer arithmetic
            key = f"wptr:{byte_off}"
            if key in line_seen:
                continue
            line_seen.add(key)
            results.append({
                "line_num": line_num,
                "pattern": m.group(0),
                "byte_offset": byte_off,
                "access_type": "word_deref",
                "var_type": this_type,
                "var_name": "this",
                "original": m.group(0),
                "has_prefix": bool(m.group("prefix")),
            })
        
        # Pattern 4: *(Type *)((char *)this + N) — nested cast byte-offset deref
        for m in RE_NESTED_CAST_THIS.finditer(line):
            off = int(m.group("off"))
            cast = m.group("cast")
            inner = m.group("inner")
            
            if inner in ("char", "uint8_t"):
                byte_off = off
            elif cast in ("_BYTE", "char", "uint8_t"):
                byte_off = off
            elif cast in ("_WORD", "uint16_t"):
                byte_off = off * 2
            else:
                byte_off = off * 4  # _DWORD, int, etc.
            
            key = f"ncast:{byte_off}"
            if key in line_seen:
                continue
            line_seen.add(key)
            results.append({
                "line_num": line_num,
                "pattern": m.group(0),
                "byte_offset": byte_off,
                "access_type": "nested_cast_deref",
                "var_type": this_type,
                "var_name": "this",
                "original": m.group(0),
                "has_prefix": bool(m.group("prefix")),
            })
        
        # Pattern 5: ((Type *)this)[N] — array-style this access
        for m in RE_ARRAY_THIS.finditer(line):
            off = int(m.group("off"))
            cast = m.group("cast")
            if cast in ("_DWORD", "int", "uint32_t"):
                byte_off = off * 4
            elif cast in ("_BYTE", "uint8_t"):
                byte_off = off
            else:
                byte_off = off * 4
            key = f"arr:{byte_off}"
            if key in line_seen:
                continue
            line_seen.add(key)
            results.append({
                "line_num": line_num,
                "pattern": m.group(0),
                "byte_offset": byte_off,
                "access_type": "array_access",
                "var_type": this_type,
                "var_name": "this",
                "original": m.group(0),
            })
        
        # Pattern 6: (Type *)((char *)this + N) — address-of member pointer cast
        for m in RE_ADDR_PTR_THIS.finditer(line):
            off = int(m.group("off"))
            inner = m.group("inner")
            if inner in ("char", "uint8_t"):
                byte_off = off  # byte offset
            else:
                byte_off = off * 4  # dword offset
            key = f"aoff:{byte_off}"
            if key in line_seen:
                continue
            line_seen.add(key)
            results.append({
                "line_num": line_num,
                "pattern": m.group(0),
                "byte_offset": byte_off,
                "access_type": "address_of",
                "var_type": this_type,
                "var_name": "this",
                "original": m.group(0),
            })
        
        # Pattern 7: (int)(this + N) — address-of value cast (dword offset)
        for m in RE_INT_ADDR_THIS.finditer(line):
            off = int(m.group("off"))
            byte_off = off * 4
            key = f"iaoff:{byte_off}"
            if key in line_seen:
                continue
            line_seen.add(key)
            results.append({
                "line_num": line_num,
                "pattern": m.group(0),
                "byte_offset": byte_off,
                "access_type": "int_addr_of",
                "var_type": this_type,
                "var_name": "this",
                "original": m.group(0),
            })
        
        # ──── typed-variable patterns (for arg-typed variables) ────
        
        # Pattern 8: *((_DWORD *)var + N) — dword ptr var deref
        for m in RE_DWORD_PTR_VAR.finditer(line):
            var = m.group("var")
            if var == "this":
                continue  # already handled above
            off = int(m.group("off"))
            byte_off = off * 4
            key = f"dvar:{var}:{byte_off}"
            if key in line_seen:
                continue
            line_seen.add(key)
            # Only include if we have type info for this var
            if arg_types:
                results.append({
                    "line_num": line_num,
                    "pattern": m.group(0),
                    "byte_offset": byte_off,
                    "access_type": "var_dword_deref",
                    "var_type": this_type,
                    "var_name": var,
                    "original": m.group(0),
                    "has_prefix": bool(m.group("prefix")),
                })
        
        # Pattern 9: *((_BYTE *)var + N) — byte ptr var deref
        for m in RE_BYTE_PTR_VAR.finditer(line):
            var = m.group("var")
            if var == "this":
                continue
            off = int(m.group("off"))
            byte_off = off
            key = f"bvar:{var}:{byte_off}"
            if key in line_seen:
                continue
            line_seen.add(key)
            if arg_types:
                results.append({
                    "line_num": line_num,
                    "pattern": m.group(0),
                    "byte_offset": byte_off,
                    "access_type": "var_byte_deref",
                    "var_type": this_type,
                    "var_name": var,
                    "original": m.group(0),
                    "has_prefix": bool(m.group("prefix")),
                })
        
        # Pattern 10: ((Type *)var)[N] — array-style var access
        for m in RE_ARRAY_TYPED.finditer(line):
            var = m.group("var")
            if var == "this":
                continue
            off = int(m.group("off"))
            cast = m.group("cast")
            if cast in ("_DWORD", "int", "uint32_t"):
                byte_off = off * 4
            else:
                byte_off = off
            key = f"av:{var}:{byte_off}"
            if key in line_seen:
                continue
            line_seen.add(key)
            if arg_types:
                results.append({
                    "line_num": line_num,
                    "pattern": m.group(0),
                    "byte_offset": byte_off,
                    "access_type": "var_array_access",
                    "var_type": this_type,
                    "var_name": var,
                    "original": m.group(0),
                })
    
    return results


def generate_replacements(offsets: List[dict], member_lookup: dict) -> Tuple[List[dict], List[dict]]:
    """Generate replacement text for each offset.
    
    Returns (resolved, unresolved) where each entry has 'replacement' or 'nearest' field.
    """
    resolved = []
    unresolved = []
    
    for entry in offsets:
        cls = entry["var_type"].replace("*", "").strip() if entry["var_type"] else None
        byte_off = entry["byte_offset"]
        access_type = entry["access_type"]
        var_name = entry["var_name"]
        
        if not cls:
            entry["unresolved"] = True
            entry["reason"] = "no class type info"
            unresolved.append(entry)
            continue
        
        found_cls, member_name, member_type = resolve_member(member_lookup, cls, byte_off)
        
        if found_cls and member_name:
            # Generate replacement text
            deref_types = ("dword_deref", "byte_deref", "word_deref", "cast_deref", "nested_cast_deref",
                          "array_access", "var_dword_deref", "var_byte_deref", "var_array_access")
            if access_type in deref_types:
                replacement = f"{var_name}->{member_name}"
            elif access_type == "address_of":
                replacement = f"&{var_name}->{member_name}"
            elif access_type == "int_addr_of":
                replacement = f"(int)&{var_name}->{member_name}"
            else:
                replacement = f"{var_name}->{member_name}"
            
            # Preserve boolean prefix (! or ~) if present
            prefix = entry.get("has_prefix")
            if prefix:
                original = entry.get("original", "")
                # Extract the actual prefix character
                prefix_char = original[0] if original and original[0] in "!~" else "!"
                replacement = f"{prefix_char}{replacement}"
            
            entry_copy = dict(entry)
            entry_copy["resolved"] = True
            entry_copy["replacement"] = replacement
            entry_copy["found_class"] = found_cls
            entry_copy["member_name"] = member_name
            entry_copy["member_type"] = member_type
            resolved.append(entry_copy)
        else:
            # Try to find nearest members
            nearest = find_nearest_members(member_lookup, cls, byte_off)
            entry_copy = dict(entry)
            entry_copy["unresolved"] = True
            entry_copy["reason"] = f"offset {byte_off} (0x{byte_off:x}) not found in {cls}"
            entry_copy["nearest"] = nearest
            unresolved.append(entry_copy)
    
    return resolved, unresolved


def apply_replacements(lines: List[str], resolved: List[dict]) -> List[str]:
    """Apply replacements to source lines. Returns modified lines."""
    modified = list(lines)
    
    # Sort by line_num descending so later replacements don't shift earlier line numbers
    for entry in sorted(resolved, key=lambda x: x["line_num"], reverse=True):
        line_idx = entry["line_num"]
        original = entry["original"]
        replacement = entry["replacement"]
        
        # Replace only the first occurrence on this line
        if original in modified[line_idx]:
            modified[line_idx] = modified[line_idx].replace(original, replacement, 1)
    
    return modified


def generate_patch(original_text: str, modified_text: str, filepath: str) -> str:
    """Generate unified diff patch."""
    orig_lines = original_text.splitlines(keepends=True)
    mod_lines = modified_text.splitlines(keepends=True)
    
    diff = difflib.unified_diff(
        orig_lines, mod_lines,
        fromfile=f"a/{filepath}",
        tofile=f"b/{filepath}",
        lineterm=""
    )
    return "\n".join(diff)


def main():
    import argparse
    parser = argparse.ArgumentParser(description="T20: Batch offset-to-member rewrite")
    parser.add_argument("--output", default=str(OUTPUT_DEFAULT), help="Output .patch file path")
    parser.add_argument("--verbose", "-v", action="store_true", help="Verbose output")
    parser.add_argument("--dry-run", action="store_true", help="Report only, don't write patch")
    args = parser.parse_args()
    
    output_path = Path(args.output)
    verbose = args.verbose
    
    # ── Load data ──
    print("[1/6] Loading data sources...")
    suggestions = load_suggestions()
    signals = load_signals()
    member_lookup = load_member_lookup()
    
    print(f"      suggestions: {len(suggestions)} ANCHORED+ entries")
    print(f"      signals: {len(signals)} symbols")
    print(f"      member_lookup: {len(member_lookup)} classes")
    
    # ── Build function type map ──
    print("[2/6] Building function type map...")
    func_type_map = build_func_type_map(suggestions, signals)
    # Filter to only functions with this_type or arg_types
    typed_funcs = {
        addr: info for addr, info in func_type_map.items()
        if info["this_type"] or info["arg_types"]
    }
    print(f"      functions with known types: {len(typed_funcs)}")
    
    # ── Locate functions in source files ──
    print("[3/6] Locating function definitions in source files...")
    func_sources: Dict[str, List[Tuple[Path, int, int]]] = {}
    for addr, info in typed_funcs.items():
        name = info["name"]
        if not name:
            continue
        locations = find_function_in_source(name, SRC_DIR)
        if locations:
            func_sources[addr] = locations
    
    print(f"      functions found in source: {len(func_sources)}")
    if verbose:
        for addr, locs in func_sources.items():
            name = typed_funcs[addr]["name"]
            print(f"        {addr} {name}: {len(locs)} location(s)")
    
    # ── Parse offsets and resolve members ──
    print("[4/6] Parsing offset patterns and resolving members...")
    total_resolved = 0
    total_unresolved = 0
    per_func_stats: Dict[str, dict] = {}  # keyed by (addr, filepath) → stats dict
    modified_files: Dict[str, Tuple[List[str], str]] = {}  # filepath → (modified_lines, original_text)
    all_unresolved_details: List[dict] = []  # detailed unresolved offset info
    
    for addr, locs in func_sources.items():
        info = typed_funcs[addr]
        name = info["name"]
        this_type = info["this_type"]
        arg_types = info["arg_types"]
        
        for filepath, start_line, end_line in locs:
            # Read the file
            with open(filepath, "r", encoding="utf-8", errors="replace") as f:
                all_lines = f.readlines()
            
            # Extract function body lines (approximate)
            func_text = "".join(all_lines[start_line - 1:end_line])
            
            # Parse offsets
            offsets = parse_offsets_in_text(func_text, this_type, arg_types)
            
            if not offsets:
                continue
            
            # Resolve
            resolved, unresolved = generate_replacements(offsets, member_lookup)
            
            stat_key = f"{addr}::{filepath}"
            if stat_key not in per_func_stats:
                per_func_stats[stat_key] = {
                    "function": name,
                    "address": addr,
                    "file": str(filepath),
                    "resolved": 0,
                    "unresolved": 0,
                    "resolved_list": [],
                    "unresolved_list": [],
                }
            
            if resolved:
                # Apply replacements
                rel_start = start_line - 1
                # Adjust line numbers to be absolute in file
                for r in resolved:
                    r["line_num"] = r["line_num"] + rel_start
                
                # Cache original file content
                file_key = str(filepath)
                if file_key not in modified_files:
                    modified_files[file_key] = (list(all_lines), "".join(all_lines))
                
                # Apply replacements
                cur_lines = modified_files[file_key][0]
                cur_lines = apply_replacements(cur_lines, resolved)
                modified_files[file_key] = (cur_lines, modified_files[file_key][1])
                
                total_resolved += len(resolved)
                per_func_stats[stat_key]["resolved"] += len(resolved)
                for r in resolved:
                    per_func_stats[stat_key]["resolved_list"].append({
                        "offset": r["byte_offset"],
                        "pattern": r["pattern"],
                        "member": r.get("member_name", "?"),
                        "line": r["line_num"] + 1,
                    })
            
            if unresolved:
                total_unresolved += len(unresolved)
                per_func_stats[stat_key]["unresolved"] += len(unresolved)
                for u in unresolved:
                    detail = {
                        "function": name,
                        "file": str(filepath),
                        "offset": u["byte_offset"],
                        "pattern": u["pattern"],
                        "reason": u.get("reason", "?"),
                        "nearest": u.get("nearest", {}),
                        "line": u["line_num"] + rel_start + 1,
                    }
                    per_func_stats[stat_key]["unresolved_list"].append(detail)
                    all_unresolved_details.append(detail)
    
    print(f"      total resolved: {total_resolved}")
    print(f"      total unresolved: {total_unresolved}")
    
    # ── Generate patch file ──
    print("[5/6] Generating patch file...")
    full_patch = []
    patch_header = f"""# T20: Offset-to-member rewrite patch
# Generated by tools/type_infer/rewrite_offsets.py
# 
# Total replacements: {total_resolved}
# Total unresolved offsets: {total_unresolved}
# Functions processed: {len(func_sources)}
#
# Review each change carefully before applying.
# Apply with: git apply {output_path.name}
# Or: patch -p1 < {output_path.name}

"""
    full_patch.append(patch_header)
    
    for file_key, (mod_lines, orig_text) in sorted(modified_files.items()):
        mod_text = "".join(mod_lines)
        if mod_text != orig_text:
            # Get relative path
            try:
                rel_path = str(Path(file_key).relative_to(ROOT))
            except ValueError:
                rel_path = file_key
            
            patch_text = generate_patch(orig_text, mod_text, rel_path)
            full_patch.append(patch_text)
            full_patch.append("")
    
    patch_content = "\n".join(full_patch)
    
    # ── Write output ──
    print("[6/6] Writing output...")
    if not args.dry_run:
        output_path.parent.mkdir(parents=True, exist_ok=True)
        with open(output_path, "w", encoding="utf-8") as f:
            f.write(patch_content)
        print(f"      Patch written to: {output_path}")
    else:
        print(f"      [DRY RUN] Would write {len(patch_content)} bytes to {output_path}")
    
    # ── Report ──
    print()
    print("=" * 60)
    print("REWRITE OFFSETS — SUMMARY REPORT")
    print("=" * 60)
    print(f"Total replacements: {total_resolved}")
    print(f"Total unresolved:   {total_unresolved}")
    print(f"Functions processed: {len(per_func_stats)}")
    print(f"Files modified:      {len(modified_files)}")
    print()
    
    if per_func_stats:
        print("Per-function breakdown:")
        print(f"  {'Function':<50} {'File':<30} {'R':>4} {'U':>4}")
        print(f"  {'-'*50} {'-'*30} {'-'*4} {'-'*4}")
        for stat in sorted(per_func_stats.values(), key=lambda x: (-x["resolved"], x["function"])):
            fname = stat["function"] or "?"
            short_file = Path(stat["file"]).name if stat["file"] else "?"
            print(f"  {fname:<50} {short_file:<30} {stat['resolved']:>4} {stat['unresolved']:>4}")
            
            # Show resolved offsets for verbose
            if verbose and stat["resolved_list"]:
                for r in stat["resolved_list"]:
                    print(f"    [OK] +0x{r['offset']:x} -> {r['member']} (line {r['line']})")
    
    # ── UNKNOWN offsets report ──
    if total_unresolved > 0:
        print()
        print("UNKNOWN OFFSETS (unresolved — needs manual review):")
        print("-" * 60)
        for stat in per_func_stats.values():
            if stat["unresolved"] > 0:
                print(f"\n  Function: {stat['function']} ({stat['address']})")
                print(f"  File: {stat['file']}")
                for u in stat["unresolved_list"]:
                    offset_hex = f"0x{u['offset']:x}"
                    nearest_str = ""
                    if u.get("nearest"):
                        n = u["nearest"]
                        parts = []
                        if "prev" in n:
                            parts.append(f"prev={n['prev'][1]}@+0x{n['prev'][0]:x}")
                        if "next" in n:
                            parts.append(f"next={n['next'][1]}@+0x{n['next'][0]:x}")
                        if parts:
                            nearest_str = f" [{', '.join(parts)}]"
                    print(f"    +{offset_hex}: {u['pattern'][:60]}{nearest_str} (line {u['line']})")
    
    print(f"\nPatch file: {output_path}")
    print("Apply with: git apply .omo/rewrite_offsets.patch")
    
    return 0 if total_unresolved == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
