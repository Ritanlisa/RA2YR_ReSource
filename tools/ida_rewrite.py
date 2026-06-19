#!/usr/bin/env python3
"""
ida_rewrite.py — Generate optimized hpp declarations from IDA data.

Modes:
  --analyze   Compare IDA class members vs current hpp declarations → diff report
  --generate  Produce optimized hpp declaration text from IDA data
  --apply     Replace non-HIGH declarations in hpp files
  --dry-run   Preview changes without writing (with --apply)

Rules:
  - Type optimization: void*→class*, int→bool, _DWORD→int, _BYTE→unsigned char, etc.
  - thiscall→member function: remove __thiscall, no explicit this param
  - Naming: sub_*→ClassName::MethodName (members) or PascalCase (globals)
  - Address annotation: // 0xADDR uppercase hex
  - Never modify 226 HIGH declarations
  - Never modify member offset comments /* 0xA4 */
  - Never change function body implementations in .cpp

Data sources:
  - tools/ida_class_members.json  (IDA member + global function signatures)
  - tools/ida_match_results.json  (T6: 2831 missing hpp functions, 226 HIGH)
  - tools/sub_naming_proposals.json (sub_* → PascalCase naming)
  - tools/hpp_to_functions_crossref.json  (hpp→IDA cross-reference)
"""

import argparse
import json
import os
import re
import sys
from collections import defaultdict
from pathlib import Path
from typing import Dict, List, Optional, Set, Tuple, Any

# ==============================================================================
# Configuration
# ==============================================================================
TOOLS_DIR = Path(__file__).parent
SRC_DIR = Path(r"D:\RA2YR_ReSource\src")
IDA_CLASS_MEMBERS_PATH = TOOLS_DIR / "ida_class_members.json"
IDA_MATCH_RESULTS_PATH = TOOLS_DIR / "ida_match_results.json"
SUB_NAMING_PATH = TOOLS_DIR / "sub_naming_proposals.json"
HPP_CROSSREF_PATH = TOOLS_DIR / "hpp_to_functions_crossref.json"
TYPE_DB_PATH = TOOLS_DIR / "type_db.json"

SKIP_FILES = {"menu_globals_gen.cpp"}
SKIP_DIRS = {"_generated", "gen"}

# ==============================================================================
# Type Optimization
# ==============================================================================

# IDA type → C++ type mapping
IDA_TYPE_MAP = {
    '_DWORD': 'int32_t',
    '_BYTE': 'unsigned char',
    '_WORD': 'uint16_t',
    'int': 'int32_t',
    'unsigned int': 'uint32_t',
    'unsigned __int8': 'uint8_t',
    'unsigned __int16': 'uint16_t',
    'unsigned __int32': 'uint32_t',
    '__int8': 'int8_t',
    '__int16': 'int16_t',
    '__int32': 'int32_t',
    '__int64': 'int64_t',
    'unsigned __int64': 'uint64_t',
    'char': 'char',
    'unsigned char': 'uint8_t',
    'short': 'int16_t',
    'unsigned short': 'uint16_t',
    'long': 'int32_t',
    'unsigned long': 'uint32_t',
    'float': 'float',
    'double': 'double',
    'bool': 'bool',
    'BOOL': 'bool',
    'void': 'void',
    'LPVOID': 'void*',
    'LPCVOID': 'const void*',
    'HANDLE': 'void*',
    'HWND': 'void*',
    'HINSTANCE': 'void*',
    'HMODULE': 'void*',
    'DWORD': 'uint32_t',
    'WORD': 'uint16_t',
    'BYTE': 'uint8_t',
    'UINT': 'uint32_t',
    'ULONG': 'uint32_t',
    'HRESULT': 'int32_t',
    'LPARAM': 'int32_t',
    'WPARAM': 'uint32_t',
    'LRESULT': 'int32_t',
    'SIZE_T': 'uint32_t',
    'LONG': 'int32_t',
    'COLORREF': 'uint32_t',
    'INT_PTR': 'int32_t',
    'UINT_PTR': 'uint32_t',
}

# Keywords that suggest bool usage
BOOL_SUGGESTIVE_NAMES = {
    'is_', 'has_', 'can_', 'should_', 'will_', 'was_', 'did_',
    'Is', 'Has', 'Can', 'Should', 'Will', 'Was', 'Did',
    'flag', 'Flag', 'enable', 'Enable', 'disable', 'Disable',
    'active', 'Active', 'visible', 'Visible', 'valid', 'Valid',
    'ok', 'Ok', 'OK', 'done', 'Done', 'ready', 'Ready',
    'draw', 'Draw', 'show', 'Show', 'hide', 'Hide',
    'playing', 'Playing', 'loading', 'Loading',
}

# Known class hierarchy (built from IDA data at load time)
CLASS_HIERARCHY: Dict[str, List[str]] = {}  # parent → [children]
CLASS_PARENTS: Dict[str, str] = {}  # child → parent
KNOWN_CLASS_NAMES: Set[str] = set()


def normalize_ida_type(ida_type: str) -> str:
    """Convert IDA decompiler type to C++ type."""
    t = ida_type.strip()
    # Handle 'void' as type → void* (pointer to unknown)
    if t == 'void':
        return 'void*'
    # Handle _UNKNOWN → int32_t
    if t == '_UNKNOWN':
        return 'int32_t'
    t = t.replace('*', '').replace('const ', '').strip()
    if not t:
        return 'void'
    # Strip struct/class/enum prefix
    for prefix in ('struct ', 'class ', 'enum '):
        if t.startswith(prefix):
            t = t[len(prefix):].strip()
    # Check known mapping
    if t in IDA_TYPE_MAP:
        return IDA_TYPE_MAP[t]
    # Check if it's a known class name
    if t in KNOWN_CLASS_NAMES:
        return t
    # IDA generated names like #123
    if t.startswith('#'):
        return 'int32_t'  # fallback for opaque IDA types
    # Unknown but looks like a type
    if re.match(r'^[A-Za-z_]\w*$', t):
        return t
    return 'int32_t'  # last resort fallback


def is_bool_suggestive(param_name: str) -> bool:
    """Check if param name suggests boolean usage."""
    for hint in BOOL_SUGGESTIVE_NAMES:
        if hint in param_name:
            return True
    return False


def is_pointer_type(ida_type: str) -> bool:
    """Check if IDA type is a pointer type."""
    t = ida_type.strip()
    return '*' in t or 'void' in t.lower()


def resolve_class_pointer_type(ida_type: str, class_context: str) -> str:
    """Try to resolve void* to actual class pointer.

    Strategy:
    - If type is 'void*' and there's 1 clear class in context → that class*
    - If type is a specific *_DWORD → int32_t
    - If type matches known class → keep it
    """
    t = ida_type.strip()
    base_type = t.replace('*', '').replace('const ', '').strip()

    # Already a known class pointer
    if base_type in KNOWN_CLASS_NAMES:
        return t

    # Generic pointer that could be resolved
    if 'void' in t.lower() or t in ('int', '_DWORD', 'int *', '_DWORD *'):
        # In class context, void* often means this class or parent
        if class_context:
            return f"{class_context}*"
        return 'void*'

    return normalize_ida_type(t)


def build_class_hierarchy(ida_class_members: dict) -> None:
    """Build class hierarchy from IDA data by inferring parent-child from
    virtual function overlap and naming patterns."""
    global CLASS_HIERARCHY, CLASS_PARENTS, KNOWN_CLASS_NAMES

    classes = set(ida_class_members.get('classes', {}).keys())
    KNOWN_CLASS_NAMES = classes

    # Known hierarchy from RA2/YR reverse engineering
    KNOWN_HIERARCHY = {
        'AbstractClass': [],
        'ObjectClass': ['AbstractClass'],
        'MissionClass': ['ObjectClass'],
        'RadioClass': ['MissionClass'],
        'TechnoClass': ['RadioClass'],
        'FootClass': ['TechnoClass'],
        'InfantryClass': ['FootClass'],
        'UnitClass': ['FootClass'],
        'AircraftClass': ['UnitClass'],
        'BuildingClass': ['TechnoClass'],
        'AnimClass': ['ObjectClass'],
        'BulletClass': ['ObjectClass'],
        'OverlayClass': ['ObjectClass'],
        'SmudgeClass': ['ObjectClass'],
        'ParticleClass': ['ObjectClass'],
        'ParticleSystemClass': ['ObjectClass'],
        'TiberiumClass': ['ObjectClass'],
        'TerrainClass': ['ObjectClass'],
        'WaveClass': ['ObjectClass'],
        'TagClass': ['ObjectClass'],
        'CellClass': ['AbstractClass'],
        'TacticalClass': ['AbstractClass'],
        'SidebarClass': ['AbstractClass'],
        'SuperWeaponTypeClass': ['AbstractClass'],
        'WarheadTypeClass': ['AbstractClass'],
        'HouseClass': ['AbstractClass'],
        'HouseTypeClass': ['AbstractClass'],
        'TeamClass': ['AbstractClass'],
        'TeamTypeClass': ['AbstractClass'],
        'TriggerClass': ['AbstractClass'],
        'TriggerTypeClass': ['AbstractClass'],
        'ScriptClass': ['AbstractClass'],
        'ScriptTypeClass': ['AbstractClass'],
        'TaskForceClass': ['AbstractClass'],
        'AITriggerClass': ['AbstractClass'],
        'AITriggerTypeClass': ['AbstractClass'],
        'CampaignClass': ['AbstractClass'],
        'ScenarioClass': ['AbstractClass'],
        'MapClass': ['AbstractClass'],
        'FactoryClass': ['AbstractClass'],
        'BaseClass': ['AbstractClass'],
        'EmpireClass': ['AbstractClass'],
        'VocClass': ['AbstractClass'],
        'ThemeClass': ['AbstractClass'],
        'AudioController': ['AbstractClass'],
        'AudioMixer': ['AbstractClass'],
        'MixFileClass': ['AbstractClass'],
        'CCINIClass': ['AbstractClass'],
        'FileClass': ['AbstractClass'],
        'StreamClass': ['AbstractClass'],
        'Surface': ['AbstractClass'],
        'DSurface': ['Surface'],
        'XSurface': ['Surface'],
        'BSurface': ['Surface'],
        'ZSurface': ['Surface'],
        'DisplayClass': ['AbstractClass'],
        'MouseClass': ['AbstractClass'],
        'KeyboardClass': ['AbstractClass'],
        'GadgetClass': ['AbstractClass'],
        'EventClass': ['AbstractClass'],
        'MessageListClass': ['AbstractClass'],
        'SideClass': ['AbstractClass'],
        'SessionClass': ['AbstractClass'],
        'WinsockInterfaceClass': ['AbstractClass'],
        'IPXInterfaceClass': ['AbstractClass'],
        'ModemInterfaceClass': ['AbstractClass'],
        'TcpIpInterfaceClass': ['AbstractClass'],
        'SerialInterfaceClass': ['AbstractClass'],
        'RulesClass': ['AbstractClass'],
        'AudioSettings': ['AbstractClass'],
        'GraphicMenuAnimItem': ['AbstractClass'],
        'GraphicMenuItem': ['AbstractClass'],
        'LoadOptions': ['AbstractClass'],
        'WDTClass': ['AbstractClass'],
    }

    # Build hierarchy from known data
    for child, parents in KNOWN_HIERARCHY.items():
        if child in classes:
            CLASS_PARENTS[child] = parents[0] if parents else ''
            for p in parents:
                if p not in CLASS_HIERARCHY:
                    CLASS_HIERARCHY[p] = []
                CLASS_HIERARCHY[p].append(child)

    # Also add locomotion classes
    loco_bases = {
        'LocomotionClass': 'AbstractClass',
        'DriveLocomotionClass': 'LocomotionClass',
        'WalkLocomotionClass': 'LocomotionClass',
        'ShipLocomotionClass': 'LocomotionClass',
        'JumpjetLocomotionClass': 'LocomotionClass',
        'TeleportLocomotionClass': 'LocomotionClass',
        'DropPodLocomotionClass': 'LocomotionClass',
        'HoverLocomotionClass': 'LocomotionClass',
        'TunnelLocomotionClass': 'LocomotionClass',
        'RocketLocomotionClass': 'LocomotionClass',
        'MechLocomotionClass': 'LocomotionClass',
    }
    for child, parent in loco_bases.items():
        if child in classes or True:  # add anyway
            CLASS_PARENTS[child] = parent
            if parent not in CLASS_HIERARCHY:
                CLASS_HIERARCHY[parent] = []
            if child not in CLASS_HIERARCHY[parent]:
                CLASS_HIERARCHY[parent].append(child)


# ==============================================================================
# Data Loading
# ==============================================================================

def load_ida_class_members() -> dict:
    """Load IDA class members data."""
    print(f"[*] Loading {IDA_CLASS_MEMBERS_PATH.name}...")
    with open(IDA_CLASS_MEMBERS_PATH, 'r', encoding='utf-8') as f:
        return json.load(f)


def load_ida_match_results() -> dict:
    """Load T6 match results (HIGH declarations)."""
    print(f"[*] Loading {IDA_MATCH_RESULTS_PATH.name}...")
    with open(IDA_MATCH_RESULTS_PATH, 'r', encoding='utf-8') as f:
        return json.load(f)


def load_sub_naming() -> dict:
    """Load sub_* naming proposals."""
    print(f"[*] Loading {SUB_NAMING_PATH.name}...")
    with open(SUB_NAMING_PATH, 'r', encoding='utf-8') as f:
        return json.load(f)


def load_hpp_crossref() -> list:
    """Load hpp→IDA cross-reference."""
    if not HPP_CROSSREF_PATH.exists():
        return []
    with open(HPP_CROSSREF_PATH, 'r', encoding='utf-8') as f:
        data = json.load(f)
    return data.get('matches', [])


def build_high_index(match_results: dict) -> Dict[str, dict]:
    """Build index of HIGH-confidence declarations by hpp_file:line."""
    index = {}
    for key, entry in match_results.get('results', {}).items():
        if entry.get('final_confidence') == 'HIGH' and entry.get('final_ida_addr'):
            # Key format: "hpp_file:line_num:class::method"
            parts = key.split(':')
            if len(parts) >= 2:
                file_key = f"{parts[0]}:{parts[1]}"
                index[file_key] = entry
            index[key] = entry
    return index


def build_class_ida_map(ida_class_members: dict) -> Dict[str, List[dict]]:
    """Build class_name → [methods] mapping from IDA data."""
    return ida_class_members.get('classes', {})


# ==============================================================================
# Naming Engine
# ==============================================================================

def resolve_method_name(method: dict, class_name: str,
                         sub_naming: dict) -> str:
    """Resolve method name from IDA data.

    Priority:
    1. Use method['name'] if not sub_*
    2. Use sub_naming proposal
    3. Use vtable index naming (vt_XX)
    """
    name = method.get('name', '')
    addr = method.get('addr', '')

    if not name.startswith('sub_'):
        return name

    # Try sub_naming proposal
    proposals = sub_naming.get('proposals', {})
    if addr in proposals:
        proposed = proposals[addr]
        # If already has :: it's a member name
        if '::' in proposed:
            return proposed.split('::')[-1]
        return proposed

    # Fallback: vtable index naming
    vtable_idx = method.get('vtable_idx')
    if vtable_idx is not None:
        return f"vt_{vtable_idx}"

    # Absolute fallback
    return name  # keep sub_XXXXXX


def resolve_global_name(addr: str, sub_naming: dict, ida_globals: dict) -> str:
    """Resolve a global function name."""
    proposals = sub_naming.get('proposals', {})

    # Check ida_globals for existing name
    for g in ida_globals.get('functions', []):
        if g.get('addr') == addr:
            name = g.get('name', '')
            if not name.startswith('sub_'):
                return name
            break

    # Try sub_naming proposal
    if addr in proposals:
        proposed = proposals[addr]
        if '::' not in proposed:  # global name, not member
            return proposed

    return f"sub_{addr[2:]}"  # fallback to sub_XXXXXX


# ==============================================================================
# Declaration Generator
# ==============================================================================

def generate_method_declaration(method: dict, class_name: str,
                                 sub_naming: dict,
                                 existing_params: str = '') -> str:
    """Generate an optimized C++ method declaration from IDA data.

    Args:
        method: IDA method dict with params, return_type, etc.
        class_name: Name of the containing class
        sub_naming: sub_* naming proposals
        existing_params: If available, preserve existing parameter names/types
                         from the hpp file (IDA decompiler often fails to name params)

    Returns declaration string suitable for placement inside class body.
    """
    is_virtual = method.get('is_virtual', False)
    cc = method.get('cc', 'unknown')
    is_thiscall_candidate = cc in ('thiscall',) or method.get('is_thiscall', False)
    addr = method.get('addr', '')
    params = method.get('params', [])
    return_type = method.get('return_type', 'void')

    # Resolve method name
    method_name = resolve_method_name(method, class_name, sub_naming)

    # Determine if virtual:
    # - If is_virtual=True in IDA data → virtual
    # - BUT only if it's a member function (thiscall) or has vtable_idx
    # - Static methods and non-virtual members shouldn't be virtual
    virt = 'virtual ' if is_virtual else ''

    # Determine C++ return type (strip __usercall@<reg> annotations)
    clean_ret = return_type.strip()
    clean_ret = re.sub(r'\s*__usercall@<\w+>\s*', '', clean_ret).strip()
    cpp_ret = normalize_ida_type(clean_ret)

    # If we have existing params from hpp, prefer those (IDA decompiler
    # often loses param names). Otherwise, build from IDA data.
    if existing_params:
        params_str = existing_params
    else:
        # Build parameter list (skip 'this' parameter for thiscall)
        param_strs = []
        for p in params:
            pname = p.get('name', '')
            # Strip @<register> annotations from parameter names
            pname = re.sub(r'@<\w+>', '', pname).strip()
            ptype = p.get('type', 'int')

            # Skip explicit 'this' parameter for thiscall
            if pname in ('this', 'This') and is_thiscall_candidate:
                continue

            # Normalize this pointer type
            if pname in ('this', 'This') and not is_thiscall_candidate:
                # Non-thiscall functions shouldn't have 'this'
                continue

            # Optimize type
            cpp_type = normalize_ida_type(ptype)

            # void*/int* that represents 'this' → ClassName*
            if pname in ('this', 'This'):
                cpp_type = f'{class_name}*'
            # Generic a1/a2 params with int/_DWORD type → potentially meaningful types
            elif pname in ('a1', 'a2', 'a3', 'a4', 'a5', 'a6') and cpp_type == 'int32_t':
                # Keep int32_t for now, user can refine
                pass

            # bool heuristic
            if cpp_type == 'int32_t' and is_bool_suggestive(pname):
                cpp_type = 'bool'

            if pname:
                param_strs.append(f"{cpp_type} {pname}")
            else:
                param_strs.append(cpp_type)

        params_str = ', '.join(param_strs) if param_strs else ''
        # If params_str is empty and method is inside a class (not global),
        # use 'void' for no-arg methods (IDA sometimes doesn't list params)
        if not params_str:
            params_str = ''

    # Build declaration
    decl = f"{virt}{cpp_ret} {method_name}({params_str})"

    # Add const for getter methods (heuristic)
    if method_name.startswith('Get') and 'Get' != method_name[:4] == 'Get':
        decl += ' const'

    # Add address annotation
    addr_str = f"0x{int(addr, 16):X}" if addr else ''
    if addr_str:
        decl += f";  // {addr_str}"
    else:
        decl += ';'

    return decl


def generate_class_declarations(class_name: str, methods: List[dict],
                                 sub_naming: dict) -> List[str]:
    """Generate all method declarations for a class."""
    decls = []
    virtuals = []
    non_virtuals = []

    for method in methods:
        decl = generate_method_declaration(method, class_name, sub_naming)
        if method.get('is_virtual'):
            virtuals.append((method.get('vtable_idx', 999), decl))
        else:
            non_virtuals.append(decl)

    # Sort virtuals by vtable index
    virtuals.sort(key=lambda x: x[0])
    # Add virtuals first, then non-virtuals
    for _, decl in virtuals:
        decls.append(f"    {decl}")
    for decl in non_virtuals:
        decls.append(f"    {decl}")

    return decls


# ==============================================================================
# HPP Parser
# ==============================================================================

class HppClass:
    """Represents a class found in an hpp file."""
    def __init__(self, name: str, start_line: int, end_line: int,
                 base_classes: List[str] = None):
        self.name = name
        self.start_line = start_line  # 0-based line index
        self.end_line = end_line
        self.base_classes = base_classes or []
        self.method_lines: List[Tuple[int, str]] = []  # (line_idx, full_line)
        self.member_lines: List[Tuple[int, str]] = []  # member variable lines
        self.other_lines: List[Tuple[int, str]] = []
        self.ctor_line: Optional[int] = None
        self.dtor_line: Optional[int] = None

    @property
    def line_count(self) -> int:
        return self.end_line - self.start_line + 1


class HppFile:
    """Represents a parsed hpp file."""
    def __init__(self, path: Path):
        self.path = path
        self.lines: List[str] = []
        self.classes: List[HppClass] = []
        self.namespace_start: int = -1
        self.namespace_end: int = -1
        self.namespace_name: str = ''

    def parse(self) -> None:
        """Parse the hpp file into structured representation."""
        if not self.path.exists():
            return

        with open(self.path, 'r', encoding='utf-8', errors='replace') as f:
            self.lines = f.readlines()

        # Find namespace
        for i, line in enumerate(self.lines):
            m = re.match(r'^\s*namespace\s+(\w+)\s*\{?\s*$', line)
            if m and self.namespace_start < 0:
                self.namespace_start = i
                self.namespace_name = m.group(1)
            if re.match(r'^\s*\}\s*//\s*namespace', line):
                self.namespace_end = i

        # Find classes
        self._find_classes()

    def _find_classes(self) -> None:
        """Extract class boundaries and categorize lines."""
        i = 0
        while i < len(self.lines):
            line = self.lines[i]
            # Match class/struct declaration (not inside a comment)
            if line.strip().startswith('//'):
                i += 1
                continue
            m = re.match(
                r'^\s*(?:class|struct)\s+(\w+)'
                r'(?:\s*:\s*(?:public|private|protected)\s+(.+?))?'
                r'\s*\{?\s*$',
                line
            )
            if m:
                class_name = m.group(1)
                bases_str = m.group(2) or ''
                bases = [b.strip() for b in bases_str.split(',')] if bases_str else []

                # Find matching closing brace
                start = i
                depth = 0
                found_open = False
                end = -1
                for j in range(i, len(self.lines)):
                    # Simple char counting (ignore comments for now)
                    clean = re.sub(r'//.*$', '', self.lines[j])
                    clean = re.sub(r'"[^"]*"', '', clean)
                    for ch in clean:
                        if ch == '{':
                            depth += 1
                            found_open = True
                        elif ch == '}':
                            depth -= 1
                            if found_open and depth == 0:
                                end = j
                                break
                    if end >= 0:
                        break

                if end >= 0:
                    hpp_cls = HppClass(class_name, start, end, bases)
                    self._categorize_class_lines(hpp_cls)
                    self.classes.append(hpp_cls)
                    i = end + 1
                    continue
            i += 1

    def _categorize_class_lines(self, cls: HppClass) -> None:
        """Categorize lines inside a class into methods, members, etc."""
        METHOD_RE = re.compile(
            r'^\s*(?:(?:virtual|static|inline|explicit|constexpr)\s+)*'
            r'(?:[\w:<>,\s*&\[\]]+?)\s+'
            r'([~\w]+)\s*\([^)]*\)\s*(?:const\s*)?'
            r'(?:noexcept\s*)?(?:override\s*)?(?:=\s*(?:0|default|delete)\s*)?'
            r'\s*(?:;|\{)'
        )
        MEMBER_RE = re.compile(
            r'^\s*(?:static\s+)?(?:const\s+)?(?:volatile\s+)?'
            r'(?:[\w:<>,\s*&\[\]]+?)\s+'
            r'm_\w+\s*;'
        )
        MEMBER_OFFSET_RE = re.compile(r'/\*\s*0x[0-9A-Fa-f]+\s*\*/')
        CTOR_RE = re.compile(r'^\s*(?:explicit\s+)?(\w+)\s*\([^)]*\)')
        DTOR_RE = re.compile(r'^\s*~\s*(\w+)\s*\([^)]*\)')

        for i in range(cls.start_line + 1, cls.end_line):
            line = self.lines[i]
            stripped = line.strip()

            # Skip comments and blank lines
            if not stripped or stripped.startswith('//') or stripped.startswith('/*'):
                cls.other_lines.append((i, line))
                continue

            # Skip access specifiers and labels
            if re.match(r'^\s*(public|private|protected)\s*:', line):
                cls.other_lines.append((i, line))
                continue

            # Check for destructor
            dm = DTOR_RE.search(line)
            if dm:
                cls.dtor_line = i

            # Check for constructor
            cm = CTOR_RE.search(line)
            if cm and cm.group(1) == cls.name:
                cls.ctor_line = i

            # Check for member variable with offset comment
            if MEMBER_OFFSET_RE.search(line):
                cls.member_lines.append((i, line))
                continue

            # Check for regular member variable
            if MEMBER_RE.search(line):
                cls.member_lines.append((i, line))
                continue

            # Check for method declaration
            if METHOD_RE.search(line):
                cls.method_lines.append((i, line))
                continue

            cls.other_lines.append((i, line))


def extract_method_name_from_line(line: str) -> Optional[str]:
    """Extract method name from a declaration line."""
    # Skip comments and annotations
    clean = re.sub(r'//.*$', '', line).strip()
    # Match method signature
    m = re.search(r'(?:[\w:<>,\s*&\[\]]+)\s+([~\w]+)\s*\(', clean)
    if m:
        return m.group(1)
    # Operator overload
    m = re.search(r'\boperator\s*([^\s(]+)\s*\(', clean)
    if m:
        return f"operator{m.group(1)}"
    return None


def extract_addr_from_line(line: str) -> Optional[str]:
    """Extract IDA address annotation from a line. Returns uppercase normalized."""
    m = re.search(r'//\s*(?:IDA[\s:]*)?(0x[0-9A-Fa-f]{4,})', line)
    if m:
        return m.group(1).upper()
    return None


def normalize_addr(addr: str) -> str:
    """Normalize address string to lowercase hex with 0x prefix."""
    if not addr:
        return ''
    s = addr.strip().upper()
    if not s.startswith('0X'):
        s = '0X' + s
    # Ensure lowercase x
    return s.replace('0X', '0x')


def is_high_declaration(line: str, high_index: Dict[str, dict],
                         hpp_rel_path: str) -> bool:
    """Check if a declaration line is in the HIGH set."""
    # Method to get line number - need to track this
    return False  # Will be checked by file_path:line_number key


# ==============================================================================
# Analysis Mode
# ==============================================================================

def analyze_hpp_vs_ida(hpp_path: Path, ida_class_members: dict,
                        high_index: dict, sub_naming: dict) -> dict:
    """Compare hpp declarations to IDA data for a single file.

    Uses BOTH name-based AND address-based matching to find correspondences.
    """
    hpp = HppFile(hpp_path)
    hpp.parse()

    if not hpp.classes:
        return {'file': str(hpp_path), 'classes': 0, 'analysis': []}

    ida_classes = ida_class_members.get('classes', {})
    results = []

    for cls in hpp.classes:
        cls_analysis = {
            'class': cls.name,
            '_start_line': cls.start_line,
            'hpp_methods': 0,
            'ida_methods': 0,
            'matched': 0,
            'matched_by_addr_only': 0,
            'in_ida_not_hpp': 0,
            'in_hpp_not_ida': 0,
            'type_diffs': [],
            'missing_methods': [],
            'extra_methods': [],
        }

        # Build hpp methods: {name: (line_idx, line, addr)}
        hpp_methods: Dict[str, Tuple[int, str, Optional[str]]] = {}
        for line_idx, line in cls.method_lines:
            name = extract_method_name_from_line(line)
            addr = extract_addr_from_line(line)
            if name:
                hpp_methods[name] = (line_idx, line, addr)

        # Get IDA methods for this class
        ida_methods = ida_classes.get(cls.name, [])

        # Build IDA method maps: by name and by address
        ida_by_name: Dict[str, dict] = {}
        ida_by_addr: Dict[str, dict] = {}
        for m in ida_methods:
            name = resolve_method_name(m, cls.name, sub_naming)
            ida_by_name[name] = m
            addr = normalize_addr(m.get('addr', ''))
            if addr:
                ida_by_addr[addr] = m

        cls_analysis['hpp_methods'] = len(hpp_methods)
        cls_analysis['ida_methods'] = len(ida_by_name)

        # --- Phase 1: Name-based matching ---
        matched_hpp: Set[str] = set()  # hpp names matched
        matched_ida: Set[str] = set()  # IDA addresses matched

        for hpp_name, (line_idx, line, hpp_addr) in hpp_methods.items():
            if hpp_name in ida_by_name:
                matched_hpp.add(hpp_name)
                ida_m = ida_by_name[hpp_name]
                matched_ida.add(ida_m.get('addr', ''))
                cls_analysis['matched'] += 1
                # Check address consistency
                if hpp_addr:
                    ida_addr = ida_m.get('addr', '')
                    if hpp_addr.upper() != ida_addr.upper():
                        cls_analysis['type_diffs'].append({
                            'method': hpp_name,
                            'hpp_addr': hpp_addr,
                            'ida_addr': ida_addr,
                            'issue': 'address_mismatch',
                        })

        # --- Phase 2: Address-based matching (different names, same address) ---
        for hpp_name, (line_idx, line, hpp_addr) in hpp_methods.items():
            if hpp_name in matched_hpp:
                continue
            norm_addr = normalize_addr(hpp_addr or '')
            if norm_addr and norm_addr in ida_by_addr:
                ida_addr_key = norm_addr
                if ida_addr_key not in matched_ida:
                    ida_m = ida_by_addr[ida_addr_key]
                    ida_name = resolve_method_name(ida_m, cls.name, sub_naming)
                    matched_hpp.add(hpp_name)
                    matched_ida.add(ida_addr_key)
                    cls_analysis['matched'] += 1
                    cls_analysis['matched_by_addr_only'] += 1
                    cls_analysis['type_diffs'].append({
                        'method': hpp_name,
                        'hpp_addr': hpp_addr,
                        'ida_addr': ida_addr_key,
                        'ida_name': ida_name,
                        'issue': 'name_mismatch_same_address',
                    })

        # --- Missing from hpp (in IDA but not matched) ---
        for ida_name, ida_m in ida_by_name.items():
            ida_addr = ida_m.get('addr', '')
            if ida_addr not in matched_ida:
                cls_analysis['missing_methods'].append({
                    'name': ida_name,
                    'ida_addr': ida_addr,
                    'ida_sig': ida_m.get('signature', ''),
                })
                cls_analysis['in_ida_not_hpp'] += 1

        # --- Extra in hpp (not matched to any IDA method) ---
        for hpp_name, (line_idx, line, hpp_addr) in hpp_methods.items():
            if hpp_name not in matched_hpp:
                cls_analysis['extra_methods'].append({
                    'name': hpp_name,
                    'hpp_addr': hpp_addr,
                })
                cls_analysis['in_hpp_not_ida'] += 1

        results.append(cls_analysis)

    return {'file': str(hpp_path), 'classes': len(hpp.classes), 'analysis': results}


def run_analyze(args):
    """Run --analyze mode: diff IDA members vs hpp declarations."""
    ida_data = load_ida_class_members()
    match_data = load_ida_match_results()
    sub_naming = load_sub_naming()
    high_index = build_high_index(match_data)

    # Analyze target files
    if args.files:
        hpp_files = [SRC_DIR / f for f in args.files]
    elif args.module:
        hpp_files = list(SRC_DIR.glob(f"{args.module}/**/*.hpp"))
    else:
        hpp_files = list(SRC_DIR.glob("**/*.hpp"))

    # Filter
    hpp_files = [f for f in hpp_files
                 if f.name not in SKIP_FILES
                 and not any(d in str(f.parent) for d in SKIP_DIRS)]

    # Filter to specific class if requested
    results = []
    for hpp_path in sorted(hpp_files)[:args.limit or 9999]:
        rel = str(hpp_path.relative_to(SRC_DIR)).replace('\\', '/')
        analysis = analyze_hpp_vs_ida(hpp_path, ida_data, high_index, sub_naming)
        if args.cls:
            analysis['analysis'] = [a for a in analysis['analysis']
                                     if a['class'] == args.cls]
        # Deduplicate: keep only first occurrence of each class
        seen_classes = set()
        seen_classes = set()
        deduped = []
        for a in analysis['analysis']:
            key = (a['class'], a.get('_start_line', 0))
            if key not in seen_classes:
                seen_classes.add(key)
                deduped.append(a)
        analysis['analysis'] = deduped
        if analysis['analysis']:
            results.append(analysis)

    # Print report
    print(f"\n{'='*70}")
    print(f"  IDA Rewrite — Analysis Report")
    print(f"{'='*70}")
    total_missing = 0
    total_extra = 0
    total_matched = 0
    total_classes = 0

    for r in results:
        print(f"\n--- {r['file']} ({r['classes']} classes) ---")
        for a in r['analysis']:
            total_classes += 1
            total_missing += a['in_ida_not_hpp']
            total_extra += a['in_hpp_not_ida']
            total_matched += a['matched']
            status = 'OK' if a['in_ida_not_hpp'] == 0 and a['in_hpp_not_ida'] == 0 else 'NEEDS UPDATE'
            addr_match = f" (addr-matched={a.get('matched_by_addr_only', 0)})" if a.get('matched_by_addr_only', 0) > 0 else ""
            print(f"  {a['class']}: hpp={a['hpp_methods']} ida={a['ida_methods']} "
                  f"matched={a['matched']}{addr_match} missing={a['in_ida_not_hpp']} "
                  f"extra={a['in_hpp_not_ida']} [{status}]")

            if args.verbose:
                for m in a['missing_methods'][:5]:
                    print(f"    + missing: {m['name']} ({m['ida_addr']})")
                for m in a['extra_methods'][:5]:
                    print(f"    - extra: {m['name']} (hpp_addr={m['hpp_addr']})")
                for d in a['type_diffs'][:3]:
                    print(f"    ! diff: {d['method']} hpp={d['hpp_addr']} vs ida={d['ida_addr']}")

    print(f"\n{'='*70}")
    print(f"  Summary: {total_classes} classes, {total_matched} matched, "
          f"{total_missing} missing, {total_extra} extra")
    print(f"{'='*70}")

    if args.json_out:
        with open(args.json_out, 'w') as f:
            json.dump(results, f, indent=2, default=str)
        print(f"[*] Report saved to {args.json_out}")


# ==============================================================================
# Generate Mode
# ==============================================================================

def run_generate(args):
    """Run --generate mode: produce optimized declaration text."""
    ida_data = load_ida_class_members()
    sub_naming = load_sub_naming()
    build_class_hierarchy(ida_data)

    ida_classes = ida_data.get('classes', {})

    # Filter by class name if specified
    target_classes = {}
    if args.cls:
        if args.cls in ida_classes:
            target_classes[args.cls] = ida_classes[args.cls]
        else:
            print(f"[!] Class '{args.cls}' not found in IDA data")
            print(f"    Available classes: {', '.join(sorted(ida_classes.keys())[:30])}...")
            return
    else:
        # Sort by class name
        target_classes = dict(sorted(ida_classes.items()))

    # Limit output
    count = 0
    output_lines = []
    for cls_name, methods in target_classes.items():
        if args.limit and count >= args.limit:
            break
        count += 1

        output_lines.append(f"// ============================================================================")
        output_lines.append(f"// {cls_name} — {len(methods)} methods")
        output_lines.append(f"// ============================================================================")
        output_lines.append(f"class {cls_name}")
        parent = CLASS_PARENTS.get(cls_name, '')
        if parent:
            output_lines[-1] += f" : public {parent}"
        output_lines[-1] += " {"
        output_lines.append("public:")

        decls = generate_class_declarations(cls_name, methods, sub_naming)
        output_lines.extend(decls)

        output_lines.append("};")
        output_lines.append("")

    result = '\n'.join(output_lines)
    if args.output:
        with open(args.output, 'w', encoding='utf-8') as f:
            f.write(result)
        print(f"[*] Generated {count} classes → {args.output}")
    else:
        print(result[:10000])
        if len(result) > 10000:
            print(f"\n... (truncated, {len(result)} total chars)")


# ==============================================================================
# Apply Mode
# ==============================================================================

def find_class_scope(lines: List[str], start: int) -> Tuple[int, int]:
    """Find the scope of a class body (brace matching)."""
    depth = 0
    found_open = False
    for i in range(start, len(lines)):
        for ch in lines[i]:
            if ch == '{':
                depth += 1
                found_open = True
            elif ch == '}':
                depth -= 1
                if found_open and depth == 0:
                    return start, i
    return start, len(lines) - 1


def is_method_line(line: str) -> bool:
    """Check if a line contains a method/function declaration."""
    stripped = line.strip()
    if not stripped or stripped.startswith('//') or stripped.startswith('/*'):
        return False
    if stripped in ('public:', 'private:', 'protected:'):
        return False
    # Skip C++ keywords that look like method signatures
    if re.match(r'^\s*(?:if|else|for|while|do|switch|case|return|break|continue|goto|try|catch|throw)\b', line):
        return False
    # Skip common patterns that aren't methods
    if re.match(r'^\s*(?:enum|struct|class|union|namespace|using|typedef|static_assert|#|template|extern)', line):
        return False
    # Check for function signature
    if re.search(r'[\w:<>,\s*&\[\]]+\s+[~\w]+\s*\([^)]*\)\s*(?:const\s*)?(?:noexcept\s*)?(?:override\s*)?(?:=\s*(?:0|default|delete)\s*)?\s*(?:;|\{)', line):
        return True
    return False


def is_member_line(line: str) -> bool:
    """Check if a line is a member variable declaration."""
    if re.search(r'/\*\s*0x[0-9A-Fa-f]+\s*\*/', line):
        return True
    return bool(re.match(r'^\s*(?:static\s+)?(?:const\s+)?[\w:<>,\s*&\[\]]+?\s+m_\w+\s*;', line))


def extract_method_signature(line: str) -> Optional[Dict[str, str]]:
    """Extract method name and key info from a declaration line."""
    clean = re.sub(r'//.*$', '', line).strip()
    clean = re.sub(r'/\*.*?\*/', '', clean).strip()
    clean = ' '.join(clean.split())  # normalize whitespace

    # Extract method name
    m = re.search(r'(?:[\w:<>,\s*&\[\]]+)\s+([~\w]+)\s*\(', clean)
    if m:
        return {
            'name': m.group(1),
            'signature': clean.rstrip(';{').strip(),
        }
    # Operator
    m = re.search(r'\boperator\s*([^\s(]+)\s*\(', clean)
    if m:
        return {
            'name': f"operator{m.group(1)}",
            'signature': clean.rstrip(';{').strip(),
        }
    return None


def extract_params_from_line(line: str) -> str:
    """Extract parameter string from a method declaration line."""
    clean = re.sub(r'//.*$', '', line).strip()
    clean = re.sub(r'/\*.*?\*/', '', clean).strip()
    m = re.search(r'\(([^)]*)\)', clean)
    if m:
        return m.group(1).strip()
    return ''


def apply_to_file(hpp_path: Path, ida_classes: dict, high_index: dict,
                   sub_naming: dict, dry_run: bool = True) -> bool:
    """Apply IDA declarations to a single hpp file.

    Uses both name-based and address-based matching.
    Preserves existing parameter names/types from hpp when IDA has less info.
    Never touches HIGH declarations, member variables, or non-method lines.
    """
    rel_path = str(hpp_path.relative_to(SRC_DIR)).replace('\\', '/')

    with open(hpp_path, 'r', encoding='utf-8', errors='replace') as f:
        original_lines = f.readlines()

    hpp = HppFile(hpp_path)
    hpp.parse()

    if not hpp.classes:
        return False

    new_lines = list(original_lines)
    changes = False

    for cls in hpp.classes:
        if cls.name not in ida_classes:
            continue

        ida_methods = ida_classes[cls.name]

        # --- Build IDA method maps (by name and by address) ---
        ida_by_name: Dict[str, dict] = {}
        ida_by_addr: Dict[str, dict] = {}
        for m in ida_methods:
            name = resolve_method_name(m, cls.name, sub_naming)
            ida_by_name[name] = m
            addr = normalize_addr(m.get('addr', ''))
            if addr:
                ida_by_addr[addr] = m

        # --- Identify HIGH declarations to protect ---
        protected_lines: Set[int] = set()
        for key, entry in high_index.items():
            parts = key.split(':')
            if len(parts) >= 2:
                file_part = parts[0].replace('\\', '/')
                class_part = entry.get('class_name', '')
                if file_part == rel_path and class_part == cls.name:
                    try:
                        line_num = int(parts[1])
                        if cls.start_line <= line_num - 1 <= cls.end_line:
                            protected_lines.add(line_num - 1)
                    except ValueError:
                        pass
            if key.startswith(rel_path.replace('/', '\\')):
                try:
                    line_num = int(parts[1])
                    if cls.start_line <= line_num - 1 <= cls.end_line:
                        protected_lines.add(line_num - 1)
                except ValueError:
                    pass

        # --- Process lines: match, replace, annotate ---
        lines_to_replace: Dict[int, str] = {}
        lines_to_add: List[Tuple[int, str]] = []
        matched_ida_addrs: Set[str] = set()  # track which IDA methods are matched
        matched_hpp_names: Set[str] = set()
        replaced_ida_names: Set[str] = set()  # prevent duplicate replacements for overloads

        for line_idx in range(cls.start_line + 1, cls.end_line):
            line = original_lines[line_idx]

            # Skip protected HIGH declarations
            if line_idx in protected_lines:
                sig = extract_method_signature(line)
                if sig:
                    matched_hpp_names.add(sig['name'])
                    hpp_addr = extract_addr_from_line(line)
                    if hpp_addr:
                        norm = normalize_addr(hpp_addr)
                        if norm in ida_by_addr:
                            matched_ida_addrs.add(norm)
                continue

            # Skip member variable lines (keep offset comments)
            if is_member_line(line):
                continue

            # Skip non-method lines
            if not is_method_line(line):
                continue

            sig = extract_method_signature(line)
            if not sig:
                continue

            hpp_name = sig['name']
            hpp_addr = extract_addr_from_line(line)
            matched_hpp_names.add(hpp_name)

            # --- Try to match with IDA ---
            ida_m = None
            match_type = None

            norm_hpp_addr = normalize_addr(hpp_addr or '')

            # Name-based match
            if hpp_name in ida_by_name:
                ida_m = ida_by_name[hpp_name]
                match_type = 'name'
            # Address-based match (same address, different name)
            elif norm_hpp_addr and norm_hpp_addr in ida_by_addr:
                ida_m = ida_by_addr[norm_hpp_addr]
                match_type = 'address'

            if ida_m:
                ida_addr = normalize_addr(ida_m.get('addr', ''))
                matched_ida_addrs.add(ida_addr)

                # Only ADD address annotation if missing (don't change signatures)
                hpp_addr_val = extract_addr_from_line(line)
                if not hpp_addr_val:
                    # Add IDA address annotation
                    addr_str = f"0x{int(ida_m.get('addr', '0'), 16):X}"
                    stripped = line.rstrip()
                    if '//' in stripped:
                        # Replace existing comment with address
                        body = stripped[:stripped.index('//')].rstrip()
                        new_line = f"{body};  // {addr_str}\n"
                    else:
                        if stripped.rstrip().endswith(';'):
                            new_line = f"{stripped[:-1]};  // {addr_str}\n"
                        else:
                            new_line = f"{stripped} // {addr_str}\n"
                    lines_to_replace[line_idx] = new_line
            else:
                # Method in hpp but not in IDA — mark as NOT_FOUND
                stripped = line.rstrip()
                if '// IDA:' not in stripped and '// 0x' not in stripped:
                    if stripped.rstrip().endswith(';'):
                        new_line = f"{stripped[:-1]}; // IDA: NOT_FOUND\n"
                    else:
                        new_line = f"{stripped} // IDA: NOT_FOUND\n"
                    lines_to_replace[line_idx] = new_line

        # --- Add IDA methods not found in hpp ---
        # DISABLED: Adding new methods from IDA creates too many conflicts
        # with existing declarations. Future: re-enable with better conflict detection.
        if False:
            for ida_name, ida_m in ida_by_name.items():
                ida_addr = normalize_addr(ida_m.get('addr', ''))
                if ida_addr in matched_ida_addrs:
                    continue
                # Skip if method name already exists in hpp (prevents duplicates)
                if ida_name in matched_hpp_names:
                    continue
                decl = generate_method_declaration(ida_m, cls.name, sub_naming)
                new_line = f"    {decl}\n"
                insert_pos = cls.end_line
                lines_to_add.append((insert_pos, new_line))

        # --- Apply changes ---
        if lines_to_replace or lines_to_add:
            changes = True
            if dry_run:
                print(f"  [{cls.name}] would annotate {len(lines_to_replace)} lines")
                for idx, new_line in sorted(lines_to_replace.items()):
                    old = original_lines[idx].rstrip()
                    print(f"    L{idx+1}: {old[:80]}")
                    print(f"         → {new_line.rstrip()[:80]}")
            else:
                for idx, new_line in sorted(lines_to_replace.items()):
                    new_lines[idx] = new_line
                print(f"  [{cls.name}] annotated {len(lines_to_replace)} lines")

    if changes and not dry_run:
        with open(hpp_path, 'w', encoding='utf-8') as f:
            f.writelines(new_lines)
        print(f"[*] Updated {rel_path}")

    return changes


def run_apply(args):
    """Run --apply mode: modify hpp files."""
    ida_data = load_ida_class_members()
    match_data = load_ida_match_results()
    sub_naming = load_sub_naming()
    build_class_hierarchy(ida_data)
    high_index = build_high_index(match_data)

    ida_classes = ida_data.get('classes', {})

    # Determine target files
    if args.files:
        hpp_files = [SRC_DIR / f for f in args.files]
    elif args.module:
        hpp_files = list(SRC_DIR.glob(f"{args.module}/**/*.hpp"))
    elif args.cls:
        # Find which hpp file contains this class
        hpp_files = list(SRC_DIR.glob("**/*.hpp"))
        matching = []
        for fp in hpp_files:
            if fp.name in SKIP_FILES:
                continue
            try:
                with open(fp, 'r', encoding='utf-8', errors='replace') as f:
                    content = f.read()
                if f'class {args.cls}' in content:
                    matching.append(fp)
            except Exception:
                pass
        hpp_files = matching
    else:
        hpp_files = list(SRC_DIR.glob("**/*.hpp"))

    # Filter
    hpp_files = [f for f in hpp_files
                 if f.name not in SKIP_FILES
                 and not any(d in str(f.parent) for d in SKIP_DIRS)]

    total_changes = 0
    for hpp_path in sorted(hpp_files):
        changed = apply_to_file(hpp_path, ida_classes, high_index, sub_naming,
                                 dry_run=args.dry_run)
        if changed:
            total_changes += 1

    if not total_changes:
        print("[*] No changes needed.")
    elif args.dry_run:
        print(f"\n[*] Dry run complete. {total_changes} files would be modified.")
        print("    Run with --apply (without --dry-run) to apply changes.")
    else:
        print(f"\n[*] Applied changes to {total_changes} files.")


# ==============================================================================
# Main
# ==============================================================================

def main():
    parser = argparse.ArgumentParser(
        description='ida_rewrite.py — Generate optimized hpp declarations from IDA data'
    )
    parser.add_argument('--analyze', action='store_true',
                        help='Compare IDA members vs hpp declarations')
    parser.add_argument('--generate', action='store_true',
                        help='Generate optimized hpp declaration text from IDA data')
    parser.add_argument('--apply', action='store_true',
                        help='Apply IDA declarations to hpp files')
    parser.add_argument('--dry-run', action='store_true', default=True,
                        help='Preview changes without writing (default with --apply)')
    parser.add_argument('--write', action='store_true',
                        help='Actually write changes (overrides --dry-run)')
    parser.add_argument('--files', nargs='+',
                        help='Specific hpp files to process (relative to src/)')
    parser.add_argument('--module', type=str,
                        help='Process all hpp files in a module directory')
    parser.add_argument('--cls', type=str,
                        help='Process only a specific class')
    parser.add_argument('--output', '-o', type=str,
                        help='Output file for --generate mode')
    parser.add_argument('--json-out', type=str,
                        help='JSON output file for --analyze mode')
    parser.add_argument('--limit', type=int, default=0,
                        help='Limit number of files/classes to process')
    parser.add_argument('--verbose', '-v', action='store_true',
                        help='Verbose output')

    args = parser.parse_args()

    if args.write:
        args.dry_run = False

    if args.generate:
        run_generate(args)
    elif args.analyze:
        run_analyze(args)
    elif args.apply:
        run_apply(args)
    else:
        print("[*] No mode specified. Use --analyze, --generate, or --apply")
        print("    Defaulting to --analyze...")
        args.analyze = True
        run_analyze(args)


if __name__ == '__main__':
    main()
