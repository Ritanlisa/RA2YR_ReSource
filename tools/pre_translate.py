#!/usr/bin/env python3
"""
pre_translate.py — Mandatory pre-check before translating any function.

Auto-analyzes IDA pseudocode for:
  1. Member offsets (resolves to field names via member_lookup.json)
  2. Global variable addresses (resolves via globals_*.hpp)
  3. Callee functions (checks availability in functions.json)
  4. Vtable call indices (identifies virtual function slot)

Output: .omo/translation_maps/pre_translate_<FunctionName>.md
Exit code: 0 if all resolved, 1 if unknowns remain.

Usage:
    python tools/pre_translate.py UnitClass::Scatter
    python tools/pre_translate.py 0x743A50
    python tools/pre_translate.py --class UnitClass 0x743A50
"""

import json
import os
import re
import sys
from pathlib import Path
from collections import OrderedDict

# ── Paths ──
ROOT = Path(__file__).parent.parent
FUNCTIONS_JSON = ROOT / "injectFunctionTest" / "functions.json"
IDA_FUNC_DB = ROOT / "tools" / "ida_function_db.json"
MEMBER_LOOKUP = ROOT / "tools" / "member_lookup.json"
GLOBALS_DIR = ROOT / "src"
OUTPUT_DIR = ROOT / ".omo" / "translation_maps"

# ── Inheritance chain (same as lookup_member.py) ──
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

# ── Regex Patterns ──

# Simple member access: *(this + N) — most common pattern
SIMPLE_OFFSET_RE = re.compile(
    r'\*\(\s*(?P<var>\w+)\s*\+\s*(?P<off>\d+)\s*\)'
)

# Cast member access: *(_DWORD *)(this + N), *(int *)((char *)this + N), etc.
CAST_OFFSET_RE = re.compile(
    r'\*\(\s*(?P<cast>_DWORD|_BYTE|_WORD|int|char|uint8_t|uint16_t|uint32_t|float|double|void|BOOL)\s*\*\s*\)'
    r'\s*\(\s*(?:\(\s*(?P<inner_cast>char|uint8_t)\s*\*\s*\)\s*)?(?P<var>\w+)\s*\+\s*(?P<off>\d+)\s*\)'
)

# Byte-cast access: *((_BYTE *)this + N), *((_BYTE *)var + N)
BYTE_CAST_RE2 = re.compile(
    r'\*\(\s*\(\s*(?P<cast>_BYTE|_WORD|char|uint8_t|uint16_t)\s*\*\s*\)\s*(?P<var>\w+)\s*\+\s*(?P<off>\d+)\s*\)'
)

# Array-style: ((_DWORD*)this)[N], ((int*)var)[N]
ARRAY_ACCESS_RE2 = re.compile(
    r'\(\s*\(\s*(?P<cast>_DWORD|_BYTE|_WORD|int|uint32_t)\s*\*\s*\)\s*(?P<var>\w+)\s*\)\s*\[\s*(?P<off>\d+)\s*\]'
)

# Vtable/indirect call: (*this + N), (*(...)(*this + N))(args)
# Match the core dispatch pattern: (*this + N)
VTABLE_SIMPLE_RE = re.compile(
    r'\(\*(?P<var>\w+)\s*\+\s*(?P<off>\d+)\s*\)'
)

# Also match: (*(_DWORD *)vN + M) — indirect vtable through a pointer variable
VTABLE_INDIRECT_RE = re.compile(
    r'\(\*\(\s*(?:_DWORD|int)\s*\*\s*\)\s*(?P<var>\w+)\s*\+\s*(?P<off>\d+)\s*\)'
)

# MEMORY[0xADDR] global access
MEMORY_GLOBAL_RE = re.compile(r'MEMORY\s*\[\s*(?P<addr>0x[0-9A-Fa-f]+)\s*\]')

# dword_XXXXXX array access
DWORD_ARRAY_RE = re.compile(r'(?P<name>dword_[0-9A-Fa-f]{6,})\s*\[\s*(?P<idx>\d+)\s*\]')

# Named function calls: ClassName::Method( or PascalCase global Function(
# Must start with uppercase letter, followed by word chars or ::
FUNC_CALL_RE = re.compile(
    r'(?<![*\w])'
    r'(?P<name>[A-Z]\w+(?:::~?\w+)*(?:<[^>]+>)?)'
    r'\s*\('
)

# CRT/internal functions to skip
SKIP_FUNCTIONS = {
    'memcmp', 'memset', 'memcpy', 'memmove', 'strlen', 'strcpy', 'strcmp',
    'malloc', 'free', 'new', 'delete', 'operator',
    '__PAIR32__', 'LOWORD', 'HIWORD', 'LOBYTE', 'SHIWORD',
    '_EI', '_SI', '_DI', 'if', 'while', 'return', 'goto', 'switch', 'for',
    'sizeof', 'void', 'int', 'char', 'BOOL', 'unsigned',
}

# Names that are NOT functions (globals, labels, macros)
NOT_FUNCTIONS = {
    'g_CLSID_HoverLocomotion', 'dword_A8ED54',
    'LABEL_7', 'LABEL_56', 'LABEL_57', 'LABEL_60', 'LABEL_64', 'LABEL_65', 'LABEL_66',
}

# Partial names that should NOT match as callees
PARTIAL_MATCH_SKIP = {
    'Pathfinding_Find',  # actually LayerClass::Pathfinding_Find
    'GetValue',          # actually ProgressTimer::GetValue
    'Set2',              # actually StreamClass::Set2
    'Wrapper',           # actually WinAPI::Wrapper
    'Active',            # actually TimerClass::Active
    'Range',             # actually Random::Range
    'CalcAngle',         # actually Math::CalcAngle
    'RoundToInt',        # actually Math::RoundToInt
    'IsWithinUsableArea',  # actually LayerClass::IsWithinUsableArea
    'GetLandHeight',     # actually ObjectClass::GetLandHeight
    'ClimbCheck',        # actually Terrain::ClimbCheck
    'GetMissionControl', # actually MissionClass::GetMissionControl
    'Scatter',           # actually UnitClass::Scatter
    'To_CellObj',        # actually CellCoord::To_CellObj
}

# ── Data Loaders ──

def load_functions_json():
    """Load function entries from signals.json (canonical) and build lookup maps.

    functions.json was eliminated; functions_json_compat synthesizes the legacy
    {"functions": [...]} shape from signals.json so the maps below are unchanged."""
    import os as _os, sys as _sys
    _here = _os.path.dirname(_os.path.abspath(__file__))
    if _here not in _sys.path:
        _sys.path.insert(0, _here)
    import functions_json_compat
    data = functions_json_compat.load()

    name_to_addr = {}       # "ClassName::Method" → "0xADDR"
    addr_to_entry = {}      # "0xADDR" → entry dict
    name_to_completed = {}  # "ClassName::Method" → bool

    for entry in data.get('functions', []):
        addr = entry['address']
        name = entry['name']
        if name and name not in name_to_addr:
            name_to_addr[name] = addr
        addr_to_entry[addr] = entry
        completed = entry.get('hook', {}).get('completed', False)
        if name:
            name_to_completed[name] = completed

    return name_to_addr, addr_to_entry, name_to_completed


def load_ida_func_db():
    """Load ida_function_db.json for address→name fallback."""
    with open(IDA_FUNC_DB, 'r', encoding='utf-8') as f:
        return json.load(f)


def load_member_lookup():
    """Load member_lookup.json."""
    with open(MEMBER_LOOKUP, 'r', encoding='utf-8') as f:
        return json.load(f)


def load_global_addresses():
    """Parse all globals_*.hpp files to build address→name map.
    Also includes known globals from IDA that aren't in headers yet."""
    addr_to_name = {}
    for hpp in GLOBALS_DIR.rglob("globals_*.hpp"):
        with open(hpp, 'r', encoding='utf-8', errors='replace') as f:
            for line in f:
                # Match: extern Type name; // data: 0xADDR
                m = re.search(r'//\s*data:\s*(0x[0-9A-Fa-f]+)', line)
                if m:
                    addr = m.group(1).lower()
                    name_m = re.search(r'extern\s+(?:\w+(?:\s*\*)?)\s+(\w+)', line)
                    if name_m:
                        name = name_m.group(1)
                        if addr not in addr_to_name:
                            addr_to_name[addr] = name

    # Known globals from IDA that aren't yet in headers
    known_globals = {
        '0x87f7e8': 'MapClass_Instance',
        '0xa8ed54': 'g_Direction8',  # 8-direction lookup table
        '0x7e9a90': 'g_CLSID_HoverLocomotion',
    }
    for addr, name in known_globals.items():
        if addr not in addr_to_name:
            addr_to_name[addr] = name

    return addr_to_name


# ── Offset Resolution ──

def resolve_member(member_lookup, cls, byte_offset):
    """Resolve a byte offset to a member name using inheritance chain.
    Returns (found_class, member_name, member_type) or (None, None, None).
    """
    off_str = str(byte_offset)
    # Search target class first
    if cls in member_lookup and off_str in member_lookup[cls]:
        m = member_lookup[cls][off_str]
        return cls, m['name'], m.get('type', '?')

    # Walk parent chain
    chain = INHERITANCE_CHAIN.get(cls, [])
    for parent in chain:
        if parent in member_lookup and off_str in member_lookup[parent]:
            m = member_lookup[parent][off_str]
            return parent, m['name'], m.get('type', '?')

    return None, None, None


def find_nearest_members(member_lookup, cls, byte_offset):
    """Find nearest known members above and below the offset."""
    # Collect all offsets from cls and its inheritance chain
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
            result['prev'] = (prev, f"{found_cls}::{name}", ty)
    if nxt is not None and nxt != prev:
        found_cls, name, ty = resolve_member(member_lookup, cls, nxt)
        if found_cls:
            result['next'] = (nxt, f"{found_cls}::{name}", ty)
    return result


def detect_this_type(pseudocode):
    """Detect the type of the 'this' parameter from function signature."""
    # Look for patterns like: __thiscall ClassName::Method(_DWORD *this, ...)
    m = re.search(r'\((?P<type>_DWORD|_BYTE|_WORD|int|char)\s*\*\s*this[,\s)]', pseudocode)
    if m:
        return m.group('type')
    return '_DWORD'  # default


def parse_offsets(pseudocode, this_type):
    """
    Parse pseudocode for all member offset accesses.
    Returns list of (byte_offset, pattern_text, is_vtable, vtable_index).
    """
    results = []
    seen = set()

    # 1. Byte-cast accesses: *((_BYTE *)this + N) — always byte offset
    for m in BYTE_CAST_RE2.finditer(pseudocode):
        var = m.group('var')
        if var != 'this':
            continue
        off = int(m.group('off'))
        cast = m.group('cast')
        if cast in ('_BYTE', 'char', 'uint8_t'):
            byte_off = off
        elif cast in ('_WORD', 'uint16_t'):
            byte_off = off * 2
        else:
            byte_off = off
        key = f"byte:{byte_off}"
        if key not in seen:
            seen.add(key)
            results.append({
                'byte_offset': byte_off,
                'pattern': m.group(0).strip(),
                'is_vtable': False,
                'vtable_index': None
            })

    # 2. Cast accesses: *(_DWORD *)(this + N), *(int *)((char *)this + N)
    for m in CAST_OFFSET_RE.finditer(pseudocode):
        var = m.group('var')
        if var != 'this':
            continue
        off = int(m.group('off'))
        cast = m.group('cast')
        inner_cast = m.group('inner_cast')

        if inner_cast in ('char', 'uint8_t'):
            # Inner cast to byte — offset is in bytes
            byte_off = off
        elif cast in ('_BYTE', 'char', 'uint8_t'):
            byte_off = off
        elif cast in ('_WORD', 'uint16_t'):
            byte_off = off * 2
        else:
            # _DWORD, int, float, void, BOOL
            byte_off = off * 4

        key = f"cast:{byte_off}"
        if key not in seen:
            seen.add(key)
            results.append({
                'byte_offset': byte_off,
                'pattern': m.group(0).strip(),
                'is_vtable': False,
                'vtable_index': None
            })

    # 3. Simple accesses: *(this + N) — use this_type to determine multiplier
    for m in SIMPLE_OFFSET_RE.finditer(pseudocode):
        var = m.group('var')
        if var != 'this':
            continue
        off = int(m.group('off'))
        # Skip if this offset was already captured by cast patterns
        # Determine multiplier from function signature's this type
        if this_type in ('_DWORD', 'int', 'uint32_t'):
            byte_off = off * 4
        elif this_type in ('_BYTE', 'char', 'uint8_t'):
            byte_off = off
        elif this_type in ('_WORD', 'uint16_t'):
            byte_off = off * 2
        else:
            byte_off = off * 4  # default _DWORD

        key = f"simple:{byte_off}"
        if key not in seen:
            seen.add(key)
            results.append({
                'byte_offset': byte_off,
                'pattern': m.group(0).strip(),
                'is_vtable': False,
                'vtable_index': None
            })

    # 4. Array-style: ((_DWORD*)this)[N]
    for m in ARRAY_ACCESS_RE2.finditer(pseudocode):
        var = m.group('var')
        if var != 'this':
            continue
        off = int(m.group('off'))
        cast = m.group('cast')
        if cast in ('_DWORD', 'int', 'uint32_t'):
            byte_off = off * 4
        elif cast in ('_BYTE', 'uint8_t'):
            byte_off = off
        else:
            byte_off = off * 4

        key = f"array:{byte_off}"
        if key not in seen:
            seen.add(key)
            results.append({
                'byte_offset': byte_off,
                'pattern': m.group(0).strip(),
                'is_vtable': False,
                'vtable_index': None
            })

    # 5. Address-of-member: (int)(this + 226), this + 413 as function argument
    #    Match when offset is passed as address, not dereferenced
    ADDRESS_OFFSET_RE = re.compile(
        r'\(\s*(?:(?:int|void|char|_DWORD|_BYTE|_WORD|uint\d*_t)\s*\*?\s*)?\)'
        r'\s*\(\s*(?P<var>\w+)\s*\+\s*(?P<off>\d+)\s*\)'
    )
    for m in ADDRESS_OFFSET_RE.finditer(pseudocode):
        var = m.group('var')
        if var != 'this':
            continue
        off = int(m.group('off'))
        # Use this_type to determine multiplier
        if this_type in ('_DWORD', 'int', 'uint32_t'):
            byte_off = off * 4
        elif this_type in ('_BYTE', 'char', 'uint8_t'):
            byte_off = off
        else:
            byte_off = off * 4

        key = f"addr:{byte_off}"
        if key not in seen:
            seen.add(key)
            results.append({
                'byte_offset': byte_off,
                'pattern': m.group(0).strip(),
                'is_vtable': False,
                'vtable_index': None
            })

    # 6a. Vtable/indirect calls: (*this + N), (*(_DWORD *)vN + M)
    vtable_seen = set()
    for m in VTABLE_SIMPLE_RE.finditer(pseudocode):
        var = m.group('var')
        # Accept 'this' and common vtable-copy variables
        if var not in ('this', 'v12', 'v18', 'v29'):
            continue
        off = int(m.group('off'))
        key = f"vtable:{off}"
        if key not in vtable_seen:
            vtable_seen.add(key)
            frag = f"(*{var} + {off})"
            results.append({
                'byte_offset': off,
                'pattern': frag,
                'is_vtable': True,
                'vtable_index': off // 4
            })

    # 6b. Vtable calls through local copies: v12 = *this; ... (v12 + 1152)
    #     Match (vN + M) where vN is a known vtable copy
    VTBL_COPY_RE = re.compile(r'\(\s*(?P<var>v12|v18|v29)\s*\+\s*(?P<off>\d+)\s*\)')
    for m in VTBL_COPY_RE.finditer(pseudocode):
        var = m.group('var')
        off = int(m.group('off'))
        key = f"vtcopy:{var}:{off}"
        if key not in vtable_seen:
            vtable_seen.add(key)
            frag = f"({var} + {off})"
            results.append({
                'byte_offset': off,
                'pattern': frag,
                'is_vtable': True,
                'vtable_index': off // 4,
                'vtable_var': var
            })

    # 6b. Indirect vtable through pointer: (*(_DWORD *)v34 + 12)
    for m in VTABLE_INDIRECT_RE.finditer(pseudocode):
        var = m.group('var')
        off = int(m.group('off'))
        key = f"ivtable:{var}:{off}"
        if key not in vtable_seen:
            vtable_seen.add(key)
            frag = f"(*(_DWORD *){var} + {off})"
            results.append({
                'byte_offset': off,
                'pattern': frag,
                'is_vtable': True,
                'vtable_index': off // 4,
                'vtable_var': var
            })

    # Sort by byte offset
    results.sort(key=lambda x: (x['is_vtable'], x['byte_offset']))
    return results


def parse_globals(pseudocode):
    """Extract global variable references from pseudocode."""
    results = []
    seen = set()

    # MEMORY[0xADDR]
    for m in MEMORY_GLOBAL_RE.finditer(pseudocode):
        addr = m.group('addr').lower()
        key = f"memory:{addr}"
        if key not in seen:
            seen.add(key)
            results.append({
                'address': addr,
                'pattern': m.group(0).strip(),
                'name': None
            })

    # dword_XXXXXX[...]
    for m in DWORD_ARRAY_RE.finditer(pseudocode):
        name = m.group('name')
        # Try to convert dword_XXXXXX to address
        addr_match = re.search(r'([0-9A-Fa-f]{6,})', name)
        if addr_match:
            addr = '0x' + addr_match.group(1).lower()
        else:
            addr = None
        key = f"dword:{name}"
        if key not in seen:
            seen.add(key)
            results.append({
                'address': addr,
                'pattern': m.group(0).strip(),
                'name': name
            })

    return results


def parse_callees(pseudocode, refs, name_to_addr, name_to_completed, ida_func_db):
    """Extract function calls from pseudocode and cross-reference with refs.
    Returns list of (callee_name, address, available, note).
    """
    callees = OrderedDict()  # name → info dict

    # 1. Named refs from IDA decompiler (most reliable)
    for ref in (refs or []):
        name = ref.get('name', '')
        addr = ref.get('addr', '')
        if not name or name in SKIP_FUNCTIONS or name in NOT_FUNCTIONS:
            continue
        if 'sub_' in name:
            continue
        # Skip globals/dword addresses referenced as data
        if name.startswith('dword_') or name.startswith('g_CLSID_'):
            continue
        callees[name] = {
            'name': name,
            'address': addr,
            'available': name_to_completed.get(name, False),
            'source': 'IDA refs'
        }

    # 2. Function calls from pseudocode text
    for m in FUNC_CALL_RE.finditer(pseudocode):
        name = m.group('name')
        if name in SKIP_FUNCTIONS or name in NOT_FUNCTIONS:
            continue
        if name in PARTIAL_MATCH_SKIP:
            continue
        if name in callees:
            continue
        # Must be ClassName::Method, or PascalCase with address match
        if '::' not in name:
            # Check if it's a known function or PascalCase-like
            if name not in name_to_addr and not any(
                db_entry.get('name') == name for db_entry in ida_func_db.values()
            ):
                continue
        # Skip label-like names
        if ':' in name:
            continue
        # Look up in our databases
        addr = name_to_addr.get(name)
        available = name_to_completed.get(name, False)

        if addr:
            callees[name] = {
                'name': name,
                'address': addr,
                'available': available,
                'source': 'pseudocode (in functions.json)'
            }
        else:
            # Try ida_function_db
            found = False
            for db_addr, db_entry in ida_func_db.items():
                if db_entry.get('name') == name:
                    callees[name] = {
                        'name': name,
                        'address': db_addr,
                        'available': name_to_completed.get(name, False),
                        'source': 'pseudocode (in ida_function_db)'
                    }
                    found = True
                    break
            if not found:
                callees[name] = {
                    'name': name,
                    'address': None,
                    'available': False,
                    'source': 'pseudocode (NOT in functions.json)'
                }

    return list(callees.values())


def resolve_class_name(func_name, addr, ida_func_db):
    """Infer the class name from the function name or via IDA."""
    if '::' in func_name:
        return func_name.split('::')[0]

    # Try looking up in ida_function_db
    if addr and addr in ida_func_db:
        db_name = ida_func_db[addr].get('name', '')
        if '::' in db_name:
            return db_name.split('::')[0]

    return None


# ── Main ──

def main():
    if len(sys.argv) < 2:
        print(__doc__)
        sys.exit(1)

    # Parse arguments
    args = sys.argv[1:]
    specified_class = None
    func_spec = None

    i = 0
    while i < len(args):
        if args[i] == '--help' or args[i] == '-h':
            print(__doc__)
            sys.exit(0)
        elif args[i] == '--class' and i + 1 < len(args):
            specified_class = args[i + 1]
            i += 2
        else:
            func_spec = args[i]
            i += 1

    if not func_spec:
        print("ERROR: No function specified.", file=sys.stderr)
        sys.exit(1)

    # Load data
    print("Loading data...", file=sys.stderr)
    name_to_addr, addr_to_entry, name_to_completed = load_functions_json()
    ida_func_db = load_ida_func_db()
    member_lookup = load_member_lookup()
    global_addrs = load_global_addresses()

    # Resolve function spec to name + address
    addr = None
    func_name = None
    if func_spec.startswith('0x') or func_spec.startswith('0X'):
        addr = func_spec.lower()
        # Find name
        entry = addr_to_entry.get(addr)
        if entry:
            func_name = entry['name']
        elif addr in ida_func_db:
            func_name = ida_func_db[addr].get('name', addr)
        else:
            func_name = addr
    else:
        func_name = func_spec
        addr = name_to_addr.get(func_name)
        if not addr:
            # Try ida_function_db
            for db_addr, db_entry in ida_func_db.items():
                if db_entry.get('name') == func_name:
                    addr = db_addr
                    break

    if not addr:
        print(f"ERROR: Could not resolve '{func_spec}' to an address.", file=sys.stderr)
        print("Check functions.json or ida_function_db.json for the function name/address.", file=sys.stderr)
        sys.exit(1)

    # Infer class name
    cls_name = specified_class or resolve_class_name(func_name, addr, ida_func_db)

    print(f"Function: {func_name}", file=sys.stderr)
    print(f"Address:  {addr}", file=sys.stderr)
    if cls_name:
        print(f"Class:    {cls_name}", file=sys.stderr)
    print(file=sys.stderr)

    # Phase 1: IDA Decompile
    print("Phase 1: Decompiling with IDA...", file=sys.stderr)
    try:
        from ida_pro_mcp import decompile as ida_decompile
        # We'll use the MCP module - but since we're a script, we need to call it via the IDA MCP tool
        # For now, print instructions to get the decompilation
        pass
    except ImportError:
        pass

    # Since we can't directly call IDA MCP from Python (it uses the MCP protocol),
    # we need the user to provide the decompilation. For now, we'll output a
    # template and provide instructions. But actually, let me check...

    # Actually, looking at how other tools work (name_from_decompile.py reads from files),
    # let me check if there's a way to invoke MCP from Python.

    # The MCP tools are called via the AI agent, not directly from Python scripts.
    # So the script needs to:
    # 1. Accept the decompiled pseudocode as input (via file or stdin)
    # 2. Or use the MCP HTTP API if available

    # Let me check if we can use HTTP to call IDA MCP
    import urllib.request

    decompile_text = None
    refs = None

    # Priority: 1. .omo/mcp_input.txt (AI agent workflow), 2. stdin, 3. HTTP fallback
    input_file = ROOT / ".omo" / "mcp_input.txt"
    if input_file.exists():
        raw = input_file.read_text(encoding='utf-8', errors='replace')
        try:
            data = json.loads(raw)
            decompile_text = data.get('code', raw)
            refs = data.get('refs', [])
            print("  Got decompilation from .omo/mcp_input.txt", file=sys.stderr)
        except json.JSONDecodeError:
            decompile_text = raw
            print("  Got decompilation from .omo/mcp_input.txt (plain text)", file=sys.stderr)

    if not decompile_text:
        # Try stdin
        try:
            if not sys.stdin.isatty():
                raw_stdin = sys.stdin.read()
                if raw_stdin.strip():
                    try:
                        data = json.loads(raw_stdin)
                        decompile_text = data.get('code', raw_stdin)
                        refs = data.get('refs', [])
                        print("  Got decompilation from stdin (JSON)", file=sys.stderr)
                    except json.JSONDecodeError:
                        decompile_text = raw_stdin
                        print("  Got decompilation from stdin (plain text)", file=sys.stderr)
        except Exception:
            pass

    if not decompile_text:
        # Try MCP HTTP as last resort
        try:
            url = "http://127.0.0.1:13337/mcp"
            req = urllib.request.Request(url, 
                json.dumps({
                    "method": "tools/call",
                    "params": {"name": "decompile", "arguments": {"addr": addr}}
                }).encode(),
                {'Content-Type': 'application/json'})
            resp = urllib.request.urlopen(req, timeout=30)
            result = json.loads(resp.read())
            if 'code' in result:
                decompile_text = result['code']
                refs = result.get('refs', [])
            elif 'content' in result:
                # Try nested content structure
                inner = result['content']
                if isinstance(inner, list):
                    for item in inner:
                        if isinstance(item, dict) and 'text' in item:
                            try:
                                parsed = json.loads(item['text'])
                                if 'code' in parsed:
                                    decompile_text = parsed['code']
                                    refs = parsed.get('refs', [])
                                    break
                            except:
                                pass
            print("  Got decompilation from IDA MCP HTTP", file=sys.stderr)
        except Exception as mcp_err:
            print(f"  HTTP fallback: {mcp_err}", file=sys.stderr)

    if not decompile_text:
        print(file=sys.stderr)
        print("ERROR: No decompilation available.", file=sys.stderr)
        print("", file=sys.stderr)
        print("To use this tool, save IDA decompilation first:", file=sys.stderr)
        print("  Save to .omo/mcp_input.txt as JSON:", file=sys.stderr)
        print('  {"code": "<pseudocode>", "refs": [{"addr":"0x...","name":"..."}]}', file=sys.stderr)
        print("Or pipe via stdin:", file=sys.stderr)
        print('  echo \'{"code":"...","refs":[...]}\' | python tools/pre_translate.py FuncName', file=sys.stderr)
        sys.exit(1)

    if not decompile_text:
        print("ERROR: Empty decompilation.", file=sys.stderr)
        sys.exit(1)

    # Phase 2: Offset Normalization & Member Resolution
    print("Phase 2: Parsing offsets...", file=sys.stderr)
    this_type = detect_this_type(decompile_text)
    mult_map = {'_DWORD': '4', 'int': '4', 'uint32_t': '4', '_BYTE': '1', 'char': '1', 'uint8_t': '1',
                '_WORD': '2', 'uint16_t': '2'}
    mult = mult_map.get(this_type, '4 (default)')
    print(f"  this type: {this_type}* (DWORD multiplier: {mult})", file=sys.stderr)

    offsets = parse_offsets(decompile_text, this_type)
    globals_refs = parse_globals(decompile_text)

    # Resolve members
    member_entries = []
    unknown_members = []
    for off in offsets:
        if off['is_vtable']:
            # Vtable offset - just record it
            member_entries.append({
                'byte_offset': off['byte_offset'],
                'pattern': off['pattern'],
                'member_name': f"vtable[{off['vtable_index']}]",
                'member_class': cls_name or '?',
                'resolved': True,
                'is_vtable': True,
                'vtable_index': off['vtable_index'],
                'vtable_var': off.get('vtable_var', 'this')
            })
            continue

        byte_off = off['byte_offset']
        found_cls, name, ty = resolve_member(member_lookup, cls_name, byte_off)

        if found_cls:
            member_entries.append({
                'byte_offset': byte_off,
                'pattern': off['pattern'],
                'member_name': name,
                'member_class': found_cls,
                'member_type': ty,
                'resolved': True,
                'is_vtable': False
            })
        else:
            nearest = find_nearest_members(member_lookup, cls_name, byte_off)
            entry = {
                'byte_offset': byte_off,
                'pattern': off['pattern'],
                'member_name': f"UNKNOWN_{byte_off}",
                'member_class': None,
                'member_type': None,
                'resolved': False,
                'is_vtable': False,
                'nearest': nearest
            }
            member_entries.append(entry)
            unknown_members.append(entry)

    # Resolve globals
    global_entries = []
    for g in globals_refs:
        g_addr = g['address']
        name = g.get('name')
        if g_addr and g_addr in global_addrs:
            global_entries.append({
                'address': g_addr,
                'name': global_addrs[g_addr],
                'pattern': g['pattern'],
                'resolved': True
            })
        elif name:
            global_entries.append({
                'address': g_addr,
                'name': name,
                'pattern': g['pattern'],
                'resolved': False,
                'note': 'dword_ array — may need IDA lookup'
            })
        else:
            global_entries.append({
                'address': g_addr,
                'name': f"UNKNOWN_{g_addr}",
                'pattern': g['pattern'],
                'resolved': False
            })

    # Phase 3: Callee Availability Check
    print("Phase 3: Checking callee availability...", file=sys.stderr)
    callees = parse_callees(decompile_text, refs, name_to_addr, name_to_completed, ida_func_db)

    available_callees = [c for c in callees if c['available']]
    unavailable_callees = [c for c in callees if not c['available']]

    print(f"  Callees: {len(available_callees)}/{len(callees)} available", file=sys.stderr)
    for c in unavailable_callees:
        print(f"    WARNING: {c['name']} — not in functions.json or not completed", file=sys.stderr)

    # Phase 4: Generate Markdown
    print("Phase 4: Generating mapping table...", file=sys.stderr)
    safe_name = func_name.replace('::', '_').replace(' ', '_').replace('<', '_').replace('>', '_')
    OUTPUT_DIR.mkdir(parents=True, exist_ok=True)
    output_path = OUTPUT_DIR / f"pre_translate_{safe_name}.md"

    lines = []
    lines.append(f"# Translation Map: {func_name} ({addr})")
    lines.append("")
    lines.append(f"**Calling convention**: {detect_calling_convention(decompile_text, this_type)}")
    lines.append(f"**this type**: `{this_type}*`")
    if cls_name:
        chain = ' → '.join([cls_name] + INHERITANCE_CHAIN.get(cls_name, []))
        lines.append(f"**Inheritance chain**: {chain}")
    lines.append("")

    # Member Offsets table
    lines.append("## Member Offsets (byte offsets from `this`)")
    lines.append("")
    if member_entries:
        # Separate known and unknown
        known = [m for m in member_entries if m.get('resolved') and not m.get('is_vtable')]
        unknown = [m for m in member_entries if not m.get('resolved') and not m.get('is_vtable')]
        vtable = [m for m in member_entries if m.get('is_vtable')]

        if known:
            lines.append("| IDA Pattern | Byte Offset | Member Name | Class | Type |")
            lines.append("|-------------|-------------|-------------|-------|------|")
            for m in known:
                lines.append(f"| `{m['pattern'][:80]}` | {m['byte_offset']} (0x{m['byte_offset']:X}) | `{m['member_name']}` | {m['member_class']} | {m.get('member_type', '?')} |")
            lines.append("")

        if unknown:
            lines.append("### ⚠️ UNKNOWN Members")
            lines.append("")
            lines.append("| IDA Pattern | Byte Offset | Nearest Known | Suggested Action |")
            lines.append("|-------------|-------------|---------------|------------------|")
            for m in unknown:
                nearest_str = ""
                action = "Add to class header"
                if m.get('nearest'):
                    prev = m['nearest'].get('prev')
                    nxt = m['nearest'].get('next')
                    if prev:
                        nearest_str = f"prev: {prev[1]} ({prev[0]}, 0x{prev[0]:X})"
                    if nxt:
                        if nearest_str:
                            nearest_str += "; "
                        nearest_str += f"next: {nxt[1]} ({nxt[0]}, 0x{nxt[0]:X})"
                    if prev:
                        delta = m['byte_offset'] - prev[0]
                        if delta <= 32:
                            action = f"Check offset within '{prev[1].split('::')[-1]}' at +{delta} (0x{delta:X})"

                lines.append(f"| `{m['pattern'][:80]}` | {m['byte_offset']} (0x{m['byte_offset']:X}) | {nearest_str or 'none'} | {action} |")
            lines.append("")

        if vtable:
            lines.append("### Vtable Calls")
            lines.append("")
            lines.append("| IDA Pattern | Vtable Offset | Vtable Index | Via |")
            lines.append("|-------------|---------------|-------------|-----|")
            for m in vtable:
                via = m.get('vtable_var', 'this')
                lines.append(f"| `{m['pattern'][:80]}` | {m['byte_offset']} (0x{m['byte_offset']:X}) | {m['vtable_index']} | `{via}` |")
            lines.append("")
    else:
        lines.append("*No member offsets found in pseudocode.*")
        lines.append("")

    # Global Variables table
    lines.append("## Global Variables")
    lines.append("")
    if global_entries:
        known_g = [g for g in global_entries if g.get('resolved')]
        unknown_g = [g for g in global_entries if not g.get('resolved')]

        if known_g:
            lines.append("| IDA Pattern | Address | Name |")
            lines.append("|-------------|---------|------|")
            for g in known_g:
                lines.append(f"| `{g['pattern'][:60]}` | {g['address']} | `{g['name']}` |")
            lines.append("")

        if unknown_g:
            lines.append("### ⚠️ UNKNOWN Globals")
            lines.append("")
            lines.append("| IDA Pattern | Address | Suggested Action |")
            lines.append("|-------------|---------|------------------|")
            for g in unknown_g:
                note = g.get('note', 'Add to globals_*.hpp')
                lines.append(f"| `{g['pattern'][:60]}` | {g['address'] or '?'} | {note} |")
            lines.append("")
    else:
        lines.append("*No global variable references found.*")
        lines.append("")

    # Callee Functions table
    lines.append("## Callee Functions")
    lines.append("")
    if callees:
        lines.append("| Name | Address | Available | Source |")
        lines.append("|------|---------|-----------|--------|")
        for c in callees:
            status = "✅ YES" if c['available'] else "⚠️ NO"
            lines.append(f"| `{c['name']}` | {c['address'] or '?'} | {status} | {c['source']} |")
        lines.append("")
    else:
        lines.append("*No callees found.*")
        lines.append("")

    # Summary
    lines.append("## Summary")
    lines.append("")
    lines.append(f"- **Member offsets found**: {len(member_entries)} ({len([m for m in member_entries if m.get('resolved') and not m.get('is_vtable')])} resolved, {len(unknown_members)} unknown)")
    lines.append(f"- **Globals found**: {len(global_entries)} ({len([g for g in global_entries if g.get('resolved')])} resolved)")
    lines.append(f"- **Callees**: {len(available_callees)}/{len(callees)} available")
    lines.append(f"- **Vtable calls**: {len([m for m in member_entries if m.get('is_vtable')])}")
    lines.append("")

    # Write output
    with open(output_path, 'w', encoding='utf-8') as f:
        f.write('\n'.join(lines))

    print(f"\nOutput: {output_path}", file=sys.stderr)
    print(''.join(lines), file=sys.stderr)

    # Phase 5: Gate
    has_unknown = len(unknown_members) > 0 or any(not c['available'] for c in callees) or any(not g['resolved'] for g in global_entries)

    if has_unknown:
        reasons = []
        if unknown_members:
            reasons.append(f"{len(unknown_members)} member offsets are UNKNOWN")
        if any(not g['resolved'] for g in global_entries):
            reasons.append(f"{len([g for g in global_entries if not g['resolved']])} global variables are UNKNOWN")
        if any(not c['available'] for c in callees):
            reasons.append(f"{len(unavailable_callees)} callee functions are NOT available")

        msg = "Fix missing symbols before translation:\n  - " + "\n  - ".join(reasons)
        print(f"\nGATE FAILED:\n{msg}", file=sys.stderr)
        sys.exit(1)

    print("\nGATE PASSED: All symbols resolved.", file=sys.stderr)
    sys.exit(0)


def detect_calling_convention(pseudocode, this_type):
    """Detect calling convention from pseudocode signature."""
    if '__thiscall' in pseudocode:
        return 'thiscall'
    if '__fastcall' in pseudocode:
        return 'fastcall'
    if '__stdcall' in pseudocode:
        return 'stdcall'
    if '__cdecl' in pseudocode:
        return 'cdecl'
    if this_type and this_type != 'void':
        return 'thiscall (inferred from this parameter)'
    return 'unknown'


if __name__ == '__main__':
    main()
