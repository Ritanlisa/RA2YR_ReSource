#!/usr/bin/env python3
"""
T21: auto_name.py — Auto local variable naming from type inference results.

Reads type_map.json (or suggested_types.json) for function type annotations,
scans source .cpp files for poorly-named parameters and local variables
(vNN, aNN, var_X patterns), and generates human-readable rename suggestions.

Output: renaming_suggestions.json — map of function_addr: {old_name: suggested_name}

Does NOT modify source files. Suggestions only.

Usage:
    python tools/type_infer/auto_name.py [--output PATH] [--verbose]

Naming rules:
    - Class pointer types: strip "Class" suffix, lowercase → pBuilding, pHouse
    - Struct types: use type name → cell, tint, matrix
    - GenericNode* → pNode
    - int/unsigned int → n, count, value
    - BOOL → bFlag, bOk, bResult
    - Iterator context → i, it, idx
"""

import json
import os
import re
import sys
from collections import defaultdict
from pathlib import Path
from typing import Dict, List, Optional, Set, Tuple


# ── Paths ──
ROOT = Path(__file__).resolve().parent.parent.parent
SUGGESTED_TYPES = ROOT / "suggested_types.json"
TYPE_MAP = ROOT / "type_map.json"
SIGNALS_JSON = ROOT / "signals.json"
SRC_DIR = ROOT / "src"
OUTPUT_DEFAULT = ROOT / "renaming_suggestions.json"

# ── Naming patterns to match ──
RE_PARAM_A = re.compile(r'\ba(\d+)\b')           # a1, a2, a3...
RE_LOCAL_V = re.compile(r'\bv(\d+)\b')           # v4, v5, v6...
RE_VAR_X = re.compile(r'\bvar_\w+\b')            # var_XX
RE_RESULT = re.compile(r'\bresult\d*\b')          # result, result1...
RE_FUNC_DEF = re.compile(
    r'(?:[\w:*&\s]+\s+)?'                         # return type (optional)
    r'([\w:]+)::([\w~]+)'                        # ClassName::MethodName
    r'\s*\([^)]*\)'                               # parameters
)

# ── Type → suggested name ──
def type_to_name(typ: str, role: str = "param") -> Optional[str]:
    """Convert a type name to a suggested variable name.
    
    Args:
        typ: Type string (e.g., 'BuildingClass*', 'CellClass*', 'int')
        role: 'param' (function parameter) or 'local' (local variable)
    
    Returns suggested name or None if no rule matches.
    """
    # Strip pointer markers for comparison
    base = typ.replace("*", "").strip()
    is_ptr = "*" in typ
    
    # Known class mapping: strip "Class" suffix, lowercase, prefix p
    # Also handle TypeClass → prefix pType for clarity
    class_renames = {
        "BuildingClass":         "pBuilding",
        "BuildingTypeClass":     "pBuildingType",
        "HouseClass":            "pHouse",
        "HouseTypeClass":        "pHouseType",
        "CellClass":             "pCell",
        "UnitClass":             "pUnit",
        "UnitTypeClass":         "pUnitType",
        "InfantryClass":         "pInfantry",
        "InfantryTypeClass":     "pInfantryType",
        "AircraftClass":         "pAircraft",
        "AircraftTypeClass":     "pAircraftType",
        "BulletClass":           "pBullet",
        "BulletTypeClass":       "pBulletType",
        "AnimClass":             "pAnim",
        "AnimTypeClass":         "pAnimType",
        "TechnoClass":           "pTechno",
        "TechnoTypeClass":       "pTechnoType",
        "FootClass":             "pFoot",
        "ObjectClass":           "pObject",
        "ObjectTypeClass":       "pObjectType",
        "AbstractClass":         "pAbstract",
        "AbstractTypeClass":     "pAbstractType",
        "MissionClass":          "pMission",
        "RadioClass":            "pRadio",
        "OverlayClass":          "pOverlay",
        "OverlayTypeClass":      "pOverlayType",
        "TerrainClass":          "pTerrain",
        "TerrainTypeClass":      "pTerrainType",
        "SmudgeClass":           "pSmudge",
        "SmudgeTypeClass":       "pSmudgeType",
        "ParticleClass":         "pParticle",
        "ParticleTypeClass":     "pParticleType",
        "ParticleSystemClass":   "pParticleSys",
        "ParticleSystemTypeClass": "pParticleSysType",
        "VoxelAnimClass":        "pVoxelAnim",
        "VoxelAnimTypeClass":    "pVoxelAnimType",
        "TiberiumClass":         "pTiberium",
        "WaveClass":             "pWave",
        "TagClass":              "pTag",
        "TagTypeClass":          "pTagType",
        "TriggerClass":          "pTrigger",
        "TriggerTypeClass":      "pTriggerType",
        "TeamClass":             "pTeam",
        "TeamTypeClass":         "pTeamType",
        "ScriptClass":           "pScript",
        "ScriptTypeClass":       "pScriptType",
        "FactoryClass":          "pFactory",
        "FactoryTypeClass":      "pFactoryType",
        "SideClass":             "pSide",
        "CampaignClass":         "pCampaign",
        "HouseClass":            "pHouse",
        "SuperWeaponTypeClass":  "pSuperType",
        "WarheadTypeClass":      "pWarheadType",
        "WeaponTypeClass":       "pWeaponType",
        "ActionClass":           "pAction",
        "EventClass":            "pEvent",
        "LightSourceClass":      "pLight",
        "RadSiteClass":          "pRadSite",
        "SpawnManagerClass":     "pSpawnMgr",
    }
    
    if base in class_renames:
        return class_renames[base]
    
    # Generic "Class" suffix rename pattern
    if base.endswith("Class"):
        stripped = base[:-5]  # remove "Class"
        if stripped:
            name = "p" + stripped
            return name
    
    # "TypeClass" suffix
    if base.endswith("TypeClass") and len(base) > 9:
        stripped = base[:-9]  # remove "TypeClass"
        if stripped:
            name = "p" + stripped + "Type"
            return name
    
    # Struct types (non-Class, non-TypeClass)
    struct_renames = {
        "CellStruct":      "cell",
        "TintStruct":      "tint",
        "SHPStruct":       "shp",
        "ScoreStruct":     "score",
        "INILinkNode":     "pIniNode",
        "GenericNode":     "pNode",
        "CDTimerClass":    "pTimer",
    }
    if base in struct_renames:
        return struct_renames[base]
    
    # Generic node/link types
    if "Node" in base:
        return "pNode"
    if "Struct" in base:
        name = base.replace("Struct", "").lower()
        return name if name else "data"
    
    # State type (from type_map, may not have * suffix)
    if base == "State":
        return "state"
    
    return None


def load_json(path: Path) -> dict:
    """Load a JSON file."""
    with open(path, "r", encoding="utf-8") as f:
        return json.load(f)


def load_suggested_types() -> Dict[str, dict]:
    """Load suggested_types.json, filtering for ANCHORED confidence."""
    if not SUGGESTED_TYPES.exists():
        print(f"[WARN] suggested_types.json not found at {SUGGESTED_TYPES}", file=sys.stderr)
        return {}
    
    data = load_json(SUGGESTED_TYPES)
    suggestions = data.get("suggestions", {})
    
    filtered = {}
    skipped = 0
    for key, val in suggestions.items():
        conf = val.get("confidence", "?")
        if conf != "ANCHORED":
            skipped += 1
            continue
        filtered[key] = val
    
    if skipped:
        print(f"[INFO] Filtered {skipped} non-ANCHORED suggestions ({len(filtered)} remaining)", file=sys.stderr)
    
    return filtered


def load_signals() -> Dict[str, dict]:
    """Load signals.json → normalized_addr: entry map."""
    data = load_json(SIGNALS_JSON)
    symbols = data.get("symbols", {})
    return symbols


def normalize_addr(addr: str) -> str:
    """Normalize address: '0x004071C0' → '0x4071c0'"""
    if addr.startswith("0x") or addr.startswith("0X"):
        return "0x" + addr[2:].lstrip("0").lower() or "0x0"
    try:
        return "0x" + hex(int(addr, 16))[2:].lower()
    except ValueError:
        return addr.lower()


def build_func_type_map(
    suggestions: dict,
    signals: dict,
) -> Dict[str, dict]:
    """Build function address → type annotation map.
    
    Returns:
        {normalized_addr: {
            "name": str | None,
            "this_type": str | None,
            "arg_types": {index: type_str},
            "ret_type": str | None,
            "call_conv": str | None,
            "params": list,
        }}
    """
    func_map = defaultdict(lambda: {
        "name": None,
        "this_type": None,
        "arg_types": {},
        "ret_type": None,
        "call_conv": None,
        "params": [],
        "num_source_params": 0,
    })
    
    for key, val in suggestions.items():
        source_key = val.get("source_key", "")
        typ = val.get("type", "")
        
        # Extract function address from source_key
        # source_key: "0x004071C0::eax" → addr = "0x004071C0"
        parts = source_key.split("::")
        if len(parts) < 2:
            continue
        
        addr_raw = parts[0]
        addr_norm = normalize_addr(addr_raw)
        
        # Get signal info
        if func_map[addr_norm]["name"] is None:
            sig = signals.get(addr_norm, {})
            func_map[addr_norm]["name"] = sig.get("name")
            func_map[addr_norm]["call_conv"] = sig.get("call_convention")
            func_map[addr_norm]["params"] = sig.get("params", [])
        
        # Parse the suggested key to determine role: this/arg/ret
        # Key format: "0xADDR.this", "0xADDR.arg0", "0xADDR.ret"
        key_parts = key.split(".")
        if len(key_parts) < 2:
            continue
        
        role = key_parts[-1]
        
        if role == "this":
            func_map[addr_norm]["this_type"] = typ
        elif role.startswith("arg") and role[3:].isdigit():
            idx = int(role[3:])
            func_map[addr_norm]["arg_types"][idx] = typ
        elif role == "ret":
            func_map[addr_norm]["ret_type"] = typ
    
    return dict(func_map)


def map_source_param_to_type(
    call_conv: str | None,
    source_param_index: int,  # 0-based: a1→0, a2→1, ...
    arg_types: Dict[int, str],
    params: list,
) -> Optional[str]:
    """Map a source parameter index to the corresponding type annotation.
    
    Calling convention mapping:
      thiscall: param0 = this (skip), param1 = arg0, param2 = arg1, ...
      fastcall: param0 = arg0, param1 = arg1, param2 = arg2, ...
      stdcall/cdecl: param0 = arg0, param1 = arg1, ...
    """
    if not call_conv:
        return None
    
    cc = call_conv.lower()
    
    if cc == "thiscall":
        # First parameter is 'this', skip
        if source_param_index == 0:
            return None  # 'this' already properly named
        type_idx = source_param_index - 1
    
    elif cc == "fastcall":
        # arg0 = ECX, arg1 = EDX, arg2+ = stack
        type_idx = source_param_index
    
    else:
        # stdcall, cdecl: all on stack
        type_idx = source_param_index
    
    return arg_types.get(type_idx)


def parse_function_signature(content: str, func_name: str) -> List[Tuple[str, int, str]]:
    """Parse a function's signature to find parameters.
    
    Returns list of (param_name, line_num, param_type) tuples.
    """
    results = []
    
    # Find the function signature line
    # Pattern: ClassName::MethodName(
    class_name, method_name = "", ""
    if "::" in func_name:
        parts = func_name.rsplit("::", 1)
        class_name, method_name = parts
    
    lines = content.split("\n")
    for i, line in enumerate(lines):
        # Look for function signature
        if method_name and (method_name + "(" in line or method_name + " (" in line):
            # Extract parameters from the signature
            # Find the opening paren
            paren_start = line.find("(")
            if paren_start >= 0:
                # Find matching closing paren — might span multiple lines
                combined = line
                j = i
                brace_level = 0
                while j < len(lines):
                    if j > i:
                        combined += " " + lines[j]
                    for ch in combined:
                        if ch == "(":
                            brace_level += 1
                        elif ch == ")":
                            brace_level -= 1
                            if brace_level == 0:
                                break
                    if brace_level == 0:
                        break
                    j += 1
                
                # Extract text between parens
                paren_end = combined.rfind(")")
                if paren_end > paren_start:
                    params_text = combined[paren_start + 1:paren_end].strip()
                    
                    # Parse comma-separated params
                    if params_text:
                        raw_params = parse_param_list(params_text)
                        for pname, ptype in raw_params:
                            results.append((pname, i + 1, ptype))
                        return results
    
    return results


def parse_param_list(params_text: str) -> List[Tuple[str, str]]:
    """Parse a comma-separated parameter list.
    
    Returns list of (param_name, param_type) tuples.
    Handles nested angle brackets (templates) and pointer types.
    """
    if not params_text:
        return []
    
    result = []
    # Split by comma, but respect angle brackets
    depth = 0
    current = ""
    for ch in params_text:
        if ch in "<(":
            depth += 1
            current += ch
        elif ch in ">)":
            depth -= 1
            current += ch
        elif ch == "," and depth == 0:
            result.append(parse_single_param(current.strip()))
            current = ""
        else:
            current += ch
    
    if current.strip():
        result.append(parse_single_param(current.strip()))
    
    return result


def parse_single_param(param_text: str) -> Tuple[str, str]:
    """Parse a single parameter declaration to extract name and type.
    
    Examples:
        "void *this" → ("this", "void")
        "int a2" → ("a2", "int")
        "const char *filename" → ("filename", "const char")
        "_DWORD *this" → ("this", "_DWORD")
        "unsigned int a3" → ("a3", "unsigned int")
    """
    # Remove default values
    eq_pos = param_text.rfind("=")
    if eq_pos > 0:
        param_text = param_text[:eq_pos].strip()
    
    # Split into tokens
    tokens = param_text.split()
    if not tokens:
        return ("unknown", "unknown")
    
    # Last token is the parameter name
    pname = tokens[-1].strip()
    # Strip trailing * that might be attached to name
    pname = pname.rstrip("*")
    
    # Everything before the name is the type
    ptype = " ".join(tokens[:-1]).strip()
    
    # If the last token contains * at start, it's a pointer part of type
    if tokens[-1].startswith("*"):
        ptype = ptype + "*"
        pname = tokens[-2] if len(tokens) >= 2 else tokens[-1]
    
    # Also check for array suffix
    if pname.endswith("[]"):
        pname = pname[:-2]
    
    return (pname, ptype if ptype else "unknown")


def find_local_variables(content: str, start_line: int, end_line: int) -> List[Tuple[str, int, str]]:
    """Find local variable declarations in a function body.
    
    Returns list of (var_name, line_num, var_type) tuples.
    """
    results = []
    lines = content.split("\n")
    
    for i in range(start_line - 1, min(end_line, len(lines))):
        line = lines[i].strip()
        
        # Skip empty lines, comments, preprocessor
        if not line or line.startswith("//") or line.startswith("/*") or line.startswith("#"):
            continue
        
        # Skip function call patterns, class methods, etc.
        if line.startswith("}") or line.startswith("{") or "(" in line:
            continue
        
        # Skip return statements, if/while/for headers
        if line.startswith("return ") or line.startswith("if ") or \
           line.startswith("while ") or line.startswith("for "):
            continue
        
        # Match typical local variable declarations
        # Pattern: type name; or type name = ...; or type name, name2;
        # Types we care about: int, unsigned, _DWORD, _BYTE, _WORD, char, BOOL, bool, float, double
        type_pattern = re.compile(
            r'^(int|unsigned\s+int|unsigned\s+__int\d+|_DWORD|_BYTE|_WORD|'
            r'char|BOOL|bool|float|double|unsigned\s+char|unsigned\s+short|'
            r'__int\d+|uint\d+_t|int\d+_t)\s+'
            r'([a-zA-Z_]\w*(?:\s*,\s*[a-zA-Z_]\w*)*)\s*'
            r'(?:=|;)'
        )
        
        m = type_pattern.match(line)
        if not m:
            continue
        
        typ = m.group(1)
        names_str = m.group(2)
        
        # Split multiple declarations (comma-separated)
        names = [n.strip() for n in names_str.split(",")]
        
        for vname in names:
            # Only flag poorly-named variables
            if is_poorly_named(vname):
                results.append((vname, i + 1, typ))
    
    return results


def is_poorly_named(name: str) -> bool:
    """Check if a variable name matches poorly-named patterns (vNN, aNN, var_X)."""
    if name == "this":
        return False
    if RE_PARAM_A.match(name):
        return True  # a1, a2, ...
    if RE_LOCAL_V.match(name):
        return True  # v4, v5, ...
    if RE_VAR_X.match(name):
        return True  # var_XX
    # result without meaningful suffix
    if name == "result":
        return True
    if name.startswith("res") and len(name) <= 5:
        return True
    
    return False


def suggest_variable_name(
    var_name: str,
    var_type: str,
    func_context: dict,
) -> Optional[str]:
    """Suggest a better name for a variable based on its type and context.
    
    Args:
        var_name: Current variable name (e.g., 'a2', 'v4', 'result')
        var_type: Declared type (e.g., 'int', '_DWORD', 'unsigned int')
        func_context: Function type info (this_type, arg_types, ret_type)
    
    Returns suggested name or None.
    """
    # ── Check if this is a parameter a1, a2, ... ──
    m = RE_PARAM_A.match(var_name)
    if m:
        param_idx = int(m.group(1)) - 1  # 0-based
        call_conv = func_context.get("call_conv")
        arg_types = func_context.get("arg_types", {})
        params = func_context.get("params", [])
        
        mapped_type = map_source_param_to_type(call_conv, param_idx, arg_types, params)
        if mapped_type:
            suggestion = type_to_name(mapped_type, role="param")
            if suggestion:
                return suggestion
        
        # No type info — try heuristics based on declared type
        return suggest_by_declared_type(var_name, var_type)
    
    # ── Check if this is a local variable vNN, result, etc. ──
    if RE_LOCAL_V.match(var_name) or var_name in ("result",) or RE_VAR_X.match(var_name):
        # For local variables, try:
        # 1. Derive from the function's return type (if it's a result variable)
        if var_name == "result" or var_name.startswith("res"):
            ret_type = func_context.get("ret_type")
            if ret_type and ret_type not in ("VOID_PTR", "TOP", "BOTTOM"):
                suggestion = type_to_name(ret_type, role="local")
                if suggestion:
                    return "p" + suggestion if "*" in ret_type else suggestion
        
        # 2. Use declared type heuristic
        return suggest_by_declared_type(var_name, var_type)
    
    return None


def suggest_by_declared_type(var_name: str, var_type: str) -> Optional[str]:
    """Suggest a name based purely on declared C type."""
    typ = var_type.lower().strip()
    
    # Integer types → n, count, index, value
    if typ in ("int", "unsigned int", "_dword", "dword", "int32_t", "uint32_t"):
        if "index" in var_name or "idx" in var_name:
            return "idx"
        if "count" in var_name:
            return "count"
        if "size" in var_name:
            return "size"
        return "n"
    
    # Boolean types
    if typ in ("bool", "_bool", "bool", "boolean"):
        return "bFlag"
    
    # Char/byte types
    if typ in ("char", "unsigned char", "_byte", "uint8_t", "int8_t"):
        return "byteVal"
    
    # Short/word types
    if typ in ("short", "unsigned short", "_word", "uint16_t", "int16_t"):
        return "shortVal"
    
    # Float types
    if typ in ("float", "double"):
        return "fVal"
    
    return None


def find_function_boundaries(lines: List[str], start_idx: int) -> Tuple[int, int]:
    """Find the start and end of a function body given the signature line index.
    
    Returns (start_line, end_line) where start_line is the brace-open line (1-based),
    and end_line is the closing brace line (1-based).
    """
    n = len(lines)
    
    # Find opening brace
    brace_line = start_idx
    while brace_line < n:
        if "{" in lines[brace_line]:
            break
        brace_line += 1
    
    if brace_line >= n:
        return (start_idx + 1, start_idx + 1)
    
    # Count braces from the opening brace line
    depth = 0
    in_func = False
    end_line = brace_line
    
    for k in range(brace_line, n):
        for ch in lines[k]:
            if ch == "{":
                depth += 1
                in_func = True
            elif ch == "}":
                depth -= 1
                if in_func and depth == 0:
                    end_line = k
                    break
        if in_func and depth == 0:
            break
    
    return (brace_line + 1, end_line + 1)


def scan_source_file(
    filepath: Path,
    func_map: Dict[str, dict],
    suggestions: Dict[str, Dict[str, str]],  # func_addr → {old: new}
) -> int:
    """Scan a single source file for functions with type info.
    
    Returns number of suggestions generated.
    """
    try:
        with open(filepath, "r", encoding="utf-8", errors="replace") as f:
            content = f.read()
    except Exception:
        return 0
    
    lines = content.split("\n")
    n_suggestions = 0
    
    for addr_norm, finfo in func_map.items():
        func_name = finfo.get("name")
        if not func_name or "::" not in func_name:
            continue
        
        class_name, method_name = func_name.rsplit("::", 1)
        
        # Find function definition in file
        func_sig_pattern = re.compile(
            re.escape(class_name) + r'::' + re.escape(method_name) + r'\s*\('
        )
        
        found = False
        for i, line in enumerate(lines):
            if func_sig_pattern.search(line):
                # Found a candidate — verify it's a definition
                # Scan forward for opening brace
                start_line, end_line = find_function_boundaries(lines, i)
                
                if end_line <= start_line:
                    continue  # Couldn't find body braces
                
                # ── Now parse the function ──
                func_text = "\n".join(lines[i:end_line])
                
                # 1. Rename parameters (a1, a2, ...)
                params = parse_function_signature(func_text, func_name)
                for pname, pline, ptype in params:
                    if is_poorly_named(pname):
                        suggested = suggest_variable_name(pname, ptype, finfo)
                        if suggested and suggested != pname:
                            if addr_norm not in suggestions:
                                suggestions[addr_norm] = {}
                            suggestions[addr_norm][pname] = suggested
                            n_suggestions += 1
                
                # 2. Rename local variables (vNN, result, ...)
                # Only scan variables that have meaningful type annotations
                locals_found = find_local_variables(func_text, start_line, end_line)
                for vname, vline, vtype in locals_found:
                    if is_poorly_named(vname):
                        suggested = suggest_variable_name(vname, vtype, finfo)
                        if suggested and suggested != vname:
                            if addr_norm not in suggestions:
                                suggestions[addr_norm] = {}
                            suggestions[addr_norm][vname] = suggested
                            n_suggestions += 1
                
                found = True
                break  # Found the function definition
        
        if not found and "::" not in func_name:
            # Try with simple function name (no ::)
            for i, line in enumerate(lines):
                if (method_name + "(" in line or method_name + " (" in line):
                    start_line, end_line = find_function_boundaries(lines, i)
                    if end_line <= start_line:
                        continue
                    func_text = "\n".join(lines[i:end_line])
                    
                    params = parse_function_signature(func_text, func_name)
                    for pname, pline, ptype in params:
                        if is_poorly_named(pname):
                            suggested = suggest_variable_name(pname, ptype, finfo)
                            if suggested and suggested != pname:
                                if addr_norm not in suggestions:
                                    suggestions[addr_norm] = {}
                                suggestions[addr_norm][pname] = suggested
                                n_suggestions += 1
                    
                    locals_found = find_local_variables(func_text, start_line, end_line)
                    for vname, vline, vtype in locals_found:
                        if is_poorly_named(vname):
                            suggested = suggest_variable_name(vname, vtype, finfo)
                            if suggested and suggested != vname:
                                if addr_norm not in suggestions:
                                    suggestions[addr_norm] = {}
                                suggestions[addr_norm][vname] = suggested
                                n_suggestions += 1
                    
                    found = True
                    break
    
    return n_suggestions


def main():
    import argparse
    parser = argparse.ArgumentParser(
        description="T21: Auto local variable naming from type inference (T21)"
    )
    parser.add_argument(
        "--output", default=str(OUTPUT_DEFAULT),
        help="Output JSON file path"
    )
    parser.add_argument(
        "--verbose", "-v", action="store_true",
        help="Verbose output"
    )
    parser.add_argument(
        "--type-map", default=None,
        help="Path to type_map.json (default: project root type_map.json)"
    )
    args = parser.parse_args()
    
    output_path = Path(args.output)
    verbose = args.verbose
    
    # ── 1. Load data ──
    print("[1/5] Loading type annotations...", file=sys.stderr)
    suggestions = load_suggested_types()
    if not suggestions:
        print("[ERROR] No ANCHORED suggestions found. Run python tools/type_infer/generate_suggested.py first.",
              file=sys.stderr)
        return 1
    
    print(f"      Loaded {len(suggestions)} ANCHORED type suggestions", file=sys.stderr)
    
    print("[2/5] Loading signals...", file=sys.stderr)
    signals = load_signals()
    print(f"      Loaded {len(signals)} symbols", file=sys.stderr)
    
    # ── 2. Build function type map ──
    print("[3/5] Building function → type map...", file=sys.stderr)
    func_map = build_func_type_map(suggestions, signals)
    
    # Filter to functions with useful type info
    typed_funcs = {
        addr: info for addr, info in func_map.items()
        if info["this_type"] or info["arg_types"] or info["ret_type"]
    }
    print(f"      Functions with type info: {len(typed_funcs)}", file=sys.stderr)
    
    # ── 3. Scan source files ──
    print("[4/5] Scanning source files...", file=sys.stderr)
    
    renaming: Dict[str, Dict[str, str]] = {}  # func_addr → {old: new}
    total_suggestions = 0
    files_scanned = 0
    
    for cpp_file in sorted(SRC_DIR.rglob("*.cpp")):
        n = scan_source_file(cpp_file, typed_funcs, renaming)
        if n > 0:
            files_scanned += 1
            total_suggestions += n
            if verbose:
                print(f"      {cpp_file.name}: {n} suggestions", file=sys.stderr)
    
    print(f"      Scanned {files_scanned} files with matches, {total_suggestions} total suggestions",
          file=sys.stderr)
    
    # ── 4. Build output with function context ──
    print("[5/5] Generating renaming_suggestions.json...", file=sys.stderr)
    
    output_entries = {}
    for addr_norm, renames in sorted(renaming.items()):
        finfo = func_map.get(addr_norm, {})
        func_name = finfo.get("name", "?")
        call_conv = finfo.get("call_conv", "?")
        this_type = finfo.get("this_type")
        arg_types = finfo.get("arg_types", {})
        ret_type = finfo.get("ret_type")
        
        # Build per-function entry with context
        entry = {
            "function_name": func_name,
            "call_convention": call_conv,
            "renames": dict(sorted(renames.items())),
        }
        
        if this_type:
            entry["this_type"] = this_type
        if arg_types:
            entry["arg_types"] = {str(k): v for k, v in sorted(arg_types.items())}
        if ret_type:
            entry["ret_type"] = ret_type
        
        output_entries[addr_norm] = entry
    
    # ── Build final output ──
    from collections import Counter
    type_counts = Counter()
    for entry in output_entries.values():
        for old_n, new_n in entry["renames"].items():
            type_counts[new_n] += 1
    
    output = {
        "_summary": {
            "total_functions": len(output_entries),
            "total_renames": total_suggestions,
            "top_suggestions": dict(type_counts.most_common(20)),
            "generated_by": "tools/type_infer/auto_name.py (T21)",
        },
        "suggestions": output_entries,
    }
    
    # ── Write ──
    with open(output_path, "w", encoding="utf-8") as f:
        json.dump(output, f, indent=2, sort_keys=True)
    
    print(f"      Written {len(output_entries)} functions, {total_suggestions} renames to {output_path}",
          file=sys.stderr)
    
    # ── Brief report ──
    print(file=sys.stderr)
    if total_suggestions > 0:
        print("Top suggested names:", file=sys.stderr)
        for name, count in type_counts.most_common(10):
            print(f"  {name}: {count}", file=sys.stderr)
    
    return 0


if __name__ == "__main__":
    sys.exit(main())
