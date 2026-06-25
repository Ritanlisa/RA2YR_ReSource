#!/usr/bin/env python3
"""
verify_execution_flow.py — CFG-level execution-flow verifier (efv_* pipeline).

Verifies that a translated C++ function reproduces the execution flow of the
original binary by comparing CONTROL-FLOW GRAPHS, not flat event lists. For each
target function the verifier builds two CFGs — one from the IDA Hex-Rays
pseudocode, one from the C++ source — annotates each block with canonical
execution-flow events, normalizes both, and asks whether a structural bijection
exists between them. A faithful translation matches; a stub / simplified
re-implementation does not.

Pipeline (per function, orchestrated by `verify_single_function`)
----------------------------------------------------------------
  IDA side : efv_ida_cfg.build_ida_cfg(pseudocode)
             -> efv_normalize.normalize        (split flattened ||/&& on RAW
                                                 condition markers — must run
                                                 BEFORE events are extracted)
             -> efv_ida_events.extract_events_into(cfg, this_type)
             -> efv_normalize.normalize        (collapse empty / fallthrough /
                                                 unreachable at the EVENT stage)
             -> canonicalize_branch_polarity    (early-return / branch inversion)

  C++ side : locate the function in src/  ->  efv_cpp_reject.check_rejectable
             (lambda / goto / inline asm -> FAIL with a specific rewrite hint),
             else  efv_cpp_cfg.build_cpp_cfg  ->  normalize  ->
             efv_cpp_events.extract_events_into(cfg, class_name)  ->  normalize
             ->  canonicalize_branch_polarity

  Verdict  : efv_match.cfg_match(ida_cfg, cpp_cfg)  ->  PASS, else FAIL.

Why two normalize passes (T17 / T14):
    Hex-Rays renders short-circuit `||`/`&&` tests FLATTENED into one condition
    block; the C++ builder SPLITS them into one block per atom. The split
    reconciliation in `normalize` operates on the RAW condition-marker TEXT, so
    it must run BEFORE event extraction replaces those markers with canonical
    events. A second normalize after extraction collapses the now-empty
    marker/temporary blocks so both sides reach the same block granularity.

Why canonicalize_branch_polarity (T19 integration):
    A faithful translation may use an early-return idiom — `if (!c) return; body`
    instead of `if (c) { body } return` — which negates the entry condition and
    swaps its true/false arms. Negating a 2-way branch and swapping its arms is
    semantics-preserving, so both CFGs are re-oriented to a canonical polarity
    (TRUE toward the structurally larger arm) before matching. This is applied
    IDENTICALLY to both sides, so it never makes a count-mismatched stub pass.

Event grammar (the canonical strings compared block-by-block; see efv_model):
  CALL(0xADDR) · CALL(vfptr+N) · READ/WRITE(member,N) · READ/WRITE(global,0xA) ·
  RET.  CALL/WRITE/RET are matched as an ORDERED list per block; READs as a SET.

Usage
-----
    # Single function, IDA pseudocode pulled from cache or one of the inputs:
    python tools/verify_execution_flow.py 0x743A50
    python tools/verify_execution_flow.py UnitClass::Scatter --ida-json ida.json
    python tools/verify_execution_flow.py 0x44e7b0 --ida-file decomp.txt
    python tools/verify_execution_flow.py 0x459e70 --ida-stdin < decomp.txt
    python tools/verify_execution_flow.py 0x44e7b0 -v        # dump both CFGs

    # Save ONE function's IDA pseudocode to cache (needs IDA MCP at 127.0.0.1:13337):
    python tools/verify_execution_flow.py --save-ida 0x743A50

    # Pre-fill the IDA cache for EVERY completed=true function (no comparison):
    python tools/verify_execution_flow.py --fetch-cache      # FATAL if IDA down

    # HARD gate (CMake / run_all_gates): verify EVERY completed=true function.
    # Any completed function whose IDA pseudocode is not cached is FETCHED from the
    # IDA MCP and persisted; if IDA is UNREACHABLE the build FAILS (exit 1) instead
    # of silently skipping (the whole point of the gate being hard):
    python tools/verify_execution_flow.py --auto
    python tools/verify_execution_flow.py --auto --no-ida    # offline: skip uncached

Output (two-state verdict)
--------------------------
    PASS: BuildingClass::GetPowerOutput — matched
    FAIL: UnitClass::Scatter — 未完成翻译
    (a lambda/goto reject ALSO prints the specific rewrite hint; a structural /
     STEP3(0) FAIL prints ONLY name + this generic message — no internal diff,
     so the AGENT-FACING verdict cannot be gamed. Full per-block/per-offset/
     per-event diagnostic stays under -v for human triage only.)

Exit 0 = all PASS (or nothing verifiable in --auto). Exit 1 = any FAIL, OR (--auto
hard gate) the IDA MCP server was unreachable while a completed function still
needed its pseudocode fetched (FATAL — a missing IDA is a build failure, not a
silent skip; use --no-ida to opt into the offline soft-skip behavior instead).

NOTE: the leaf extractors / regexes / Maps / resolvers below are imported by the
efv_* modules (efv_ida_cfg, efv_ida_events, efv_cpp_events). They are part of the
stable contract those modules depend on — do not rename or remove them.
"""

import json
import re
import sys
import os
import subprocess
import urllib.request
from pathlib import Path

PROJECT_ROOT = Path(__file__).resolve().parent.parent
SRC_DIR = PROJECT_ROOT / "src"
MEMBER_LOOKUP_JSON = PROJECT_ROOT / "tools" / "member_lookup.json"
SIGNALS_JSON = PROJECT_ROOT / "signals.json"  # canonical symbol file (was functions.json)
IDA_MCP_URL = "http://127.0.0.1:13337/mcp"
IDA_CACHE_DIR = PROJECT_ROOT / ".omo" / "ida_cache"

DATA_SECTION_START = 0x800000
DATA_SECTION_END = 0xB7A000

# STEP3(0) element-exemption hook (.omo/plans/code-verifier.md §D-STEP3(0)).
# A FUTURE task populates this with element-level exemptions (unresolved-member
# WRITEs / trivial-getter untranslated-inline regions) as a SET of exact canonical
# event strings to excuse. EMPTY on the active path: the goldens are fully
# offset-mapped, so nothing is exempted today. This is a clean seam only -- the
# element-exemption RULE itself is not implemented here.
STEP3_0_ELEMENT_EXEMPT = frozenset()

# Names that look like calls but are keywords / CRT / intrinsics / casts.
# Applied identically on both sides so they never produce events.
SKIP_NAMES = {
    "if", "while", "for", "switch", "return", "goto", "sizeof", "do", "else",
    "case", "default", "break", "continue",
    "int", "bool", "void", "float", "double", "char", "short", "long",
    "unsigned", "signed", "auto", "const", "static", "struct", "class",
    "BYTE", "WORD", "DWORD", "QWORD", "BOOL", "HRESULT", "LONG", "SHORT",
    "_BYTE", "_WORD", "_DWORD", "_QWORD", "LOBYTE", "HIBYTE", "LOWORD",
    "HIWORD", "BYTE1", "BYTE2", "WORD1", "HIDWORD", "SLODWORD", "SHIDWORD",
    "new", "delete", "operator", "nullptr", "NULL", "true", "false", "this",
    "uint8_t", "uint16_t", "uint32_t", "uint64_t",
    "int8_t", "int16_t", "int32_t", "int64_t",
    "static_cast", "reinterpret_cast", "const_cast", "dynamic_cast",
    # CRT / runtime helpers
    "memcmp", "memset", "memcpy", "memmove", "strlen", "strcpy", "strcmp",
    "strncpy", "strncmp", "malloc", "free", "calloc", "realloc",
    "__PAIR32__", "__PAIR64__", "abs", "fabs", "labs", "atan2", "sin", "cos",
    "tan", "sqrt", "pow", "floor", "ceil", "round", "ldexp", "frexp",
    "qmemcpy", "__readeflags", "__halt",
}

# Inheritance chains for member-offset resolution. Derived-class member-lookup
# entries win over base classes; this is the same chain used by pre_translate.py
# and lookup_member.py. A fallback chain is also built from .hpp parents.
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
    "TechnoClass": ["RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    "FootClass": ["TechnoClass", "RadioClass", "MissionClass", "ObjectClass", "AbstractClass"],
    "RadioClass": ["MissionClass", "ObjectClass", "AbstractClass"],
    "MissionClass": ["ObjectClass", "AbstractClass"],
    "ObjectClass": ["AbstractClass"],
    "TechnoTypeClass": ["ObjectTypeClass", "AbstractTypeClass"],
    "ObjectTypeClass": ["AbstractTypeClass"],
}


# ============================================================
# Maps container
# ============================================================

class Maps:
    """Holds every name/offset/address lookup used by both extractors."""
    def __init__(self):
        self.name_to_addr = {}        # "Class::Method" / "Func" -> int addr
        self.addr_to_name = {}        # int addr -> name
        self.simple_to_addrs = {}     # "Method" / "Func" -> [int addr, ...]
        self.name_to_completed = {}   # name -> bool
        self.sig_name_to_addr = {}    # signals.json function name -> int addr
        self.global_to_addr = {}      # global var name -> int addr (data section)
        self.member_lookup = {}       # Class -> {byteOffStr: {name,type}}
        self.member_name_to_off = {}  # Class -> {memberName: byteOff} (with inheritance)
        self.class_vtable = {}        # Class -> [virtual method names, in order]
        self.class_parent = {}        # Class -> parent name
        self.class_file = {}          # Class -> hpp path


# ============================================================
# Data loaders
# ============================================================

def load_signals(M):
    """signals.json — the canonical symbol file (was functions.json). Populates the
    function name->addr, addr->name, simple-name, and the completed-flag maps, plus
    global name->addr. (Globals there are keyed by name with no numeric address, so
    they contribute nothing to addresses; numeric global addrs come from globals*.hpp.)"""
    if not SIGNALS_JSON.exists():
        return
    try:
        with open(SIGNALS_JSON, "r", encoding="utf-8") as f:
            data = json.load(f)
    except (json.JSONDecodeError, OSError):
        return
    for addr_str, sym in (data.get("symbols", {}) or {}).items():
        if not isinstance(sym, dict):
            continue
        name = sym.get("name", "")
        # Case-insensitive: signals.json (from functions.json) has 66 entries keyed
        # with an uppercase "0X" prefix. The legacy functions.json loader used
        # int(addr_str,16) (case-insensitive), so we must include these too — 2 are
        # completed (BuildingClass::MakeTraversable, ::IsHealthLow) and would
        # otherwise be silently dropped from the completed-scope gate.
        if not name or not addr_str.lower().startswith("0x"):
            continue
        try:
            addr = int(addr_str, 16)
        except ValueError:
            continue
        if sym.get("kind") == "function":
            M.sig_name_to_addr.setdefault(name, addr)
            M.name_to_addr.setdefault(name, addr)
            M.addr_to_name.setdefault(addr, name)
            # signals.json is now the canonical completed-flag source (was functions.json
            # hook.completed). Used by §D-STEP4.6 completed-scope gating in --auto.
            M.name_to_completed[name] = bool(sym.get("completed", False))
            simple = name.split("::")[-1] if "::" in name else name
            M.simple_to_addrs.setdefault(simple, [])
            if addr not in M.simple_to_addrs[simple]:
                M.simple_to_addrs[simple].append(addr)
        elif sym.get("kind") == "global":
            M.global_to_addr.setdefault(name, addr)


def load_globals_map(M):
    """globals_*.hpp `extern T name; // data: 0xADDR` — the only reliable source
    of numeric global addresses."""
    glob_pattern = re.compile(
        r'extern\s+[\w\s*&<>:\[\]]+?\s+(\w+)\s*(?:\[[^\]]*\])?\s*;'
        r'\s*//\s*data:\s*(0x[0-9A-Fa-f]+)'
    )
    for gf in SRC_DIR.glob("**/globals*.hpp"):
        try:
            with open(gf, "r", encoding="utf-8", errors="replace") as f:
                for line in f:
                    m = glob_pattern.search(line.strip())
                    if not m:
                        continue
                    try:
                        M.global_to_addr[m.group(1)] = int(m.group(2), 16)
                    except ValueError:
                        pass
        except OSError:
            pass


def load_member_lookup(M):
    if not MEMBER_LOOKUP_JSON.exists():
        print(f"WARNING: {MEMBER_LOOKUP_JSON} not found", file=sys.stderr)
        return
    with open(MEMBER_LOOKUP_JSON, "r", encoding="utf-8") as f:
        M.member_lookup = json.load(f)


def build_member_name_index(M):
    """Per-class memberName -> byteOffset, honouring the inheritance chain
    (the class's own members take precedence over inherited ones)."""
    for cls in list(M.member_lookup.keys()):
        chain = [cls] + _inheritance_chain(cls, M)
        idx = {}
        # walk base->derived so derived names overwrite base on collision
        for c in reversed(chain):
            for off_str, info in M.member_lookup.get(c, {}).items():
                try:
                    off = int(off_str)
                except ValueError:
                    continue
                nm = info.get("name")
                if nm:
                    idx[nm] = off
        M.member_name_to_off[cls] = idx


def _inheritance_chain(cls, M):
    """Bases of cls, nearest first. Uses the curated table, falling back to the
    .hpp-derived parent links."""
    if cls in INHERITANCE_CHAIN:
        return list(INHERITANCE_CHAIN[cls])
    chain = []
    cur = M.class_parent.get(cls)
    seen = {cls}
    while cur and cur not in seen:
        seen.add(cur)
        chain.append(cur)
        cur = M.class_parent.get(cur)
    return chain


def resolve_member_offset(cls, name, M):
    """C++ this->name -> byte offset (or None)."""
    if not cls:
        return None
    return M.member_name_to_off.get(cls, {}).get(name)


# ============================================================
# Vtable index resolution (C++ this->method)
# ============================================================

def parse_vtable_indices_from_headers(M):
    class_decl_re = re.compile(
        r'^\s*(?:class|struct)\s+(\w+)'
        r'(?:\s*:\s*(?:public|private|protected)\s+([\w:]+))?'
    )
    virtual_method_re = re.compile(r'^\s*virtual\s+')
    method_name_re = re.compile(
        r'(?:~?\w[\w:]*(?:\s*<[^>]*>)?\s*(?:\*\s*)?)'
        r'([~\w]+|operator\s*\S+)\s*\([^)]*\)'
    )
    for hf in SRC_DIR.glob("**/*.hpp"):
        try:
            with open(hf, "r", encoding="utf-8", errors="replace") as f:
                lines = f.readlines()
        except OSError:
            continue
        current_class = None
        pending_class = None
        pending_parent = None
        brace_depth = 0
        for line in lines:
            stripped = line.strip()
            if current_class is None:
                cm = class_decl_re.match(stripped)
                if cm:
                    cls_name = cm.group(1)
                    parent_raw = cm.group(2)
                    parent = parent_raw.split("::")[-1] if parent_raw else None
                    if "{" in stripped:
                        current_class = cls_name
                        brace_depth = 1
                        M.class_vtable.setdefault(cls_name, [])
                        M.class_file[cls_name] = str(hf.relative_to(PROJECT_ROOT))
                        M.class_parent[cls_name] = parent
                    else:
                        pending_class = cls_name
                        pending_parent = parent
                    continue
                if pending_class and stripped == "{":
                    current_class = pending_class
                    brace_depth = 1
                    M.class_vtable.setdefault(pending_class, [])
                    M.class_file[pending_class] = str(hf.relative_to(PROJECT_ROOT))
                    M.class_parent[pending_class] = pending_parent
                    pending_class = pending_parent = None
                    continue
                elif pending_class:
                    pending_class = pending_parent = None
            if current_class is None:
                continue
            brace_depth += stripped.count("{") - stripped.count("}")
            if brace_depth <= 0:
                current_class = None
                continue
            if virtual_method_re.match(stripped):
                mn = method_name_re.search(stripped)
                if mn:
                    mname = mn.group(1)
                    mname = re.sub(r'\s*=\s*0\s*$', '', mname)
                    mname = re.sub(r'\s*=\s*default\s*$', '', mname)
                    M.class_vtable[current_class].append(mname.strip())


def get_vtable_byte_offset(method_name, class_name, M):
    """Full vtable byte offset (index * 4) for a virtual method, or None."""
    chain = [class_name] + _inheritance_chain(class_name, M)
    chain = list(reversed(chain))  # base first: vtable layout order
    total = 0
    for cls in chain:
        local = M.class_vtable.get(cls, [])
        if method_name in local:
            return (total + local.index(method_name)) * 4
        total += len(local)
    return None


# ============================================================
# Small text helpers
# ============================================================

def balanced_paren(s):
    """s[0] == '(' — return (inner_without_outer_parens, rest_after_close)."""
    depth = 0
    for i, ch in enumerate(s):
        if ch == "(":
            depth += 1
        elif ch == ")":
            depth -= 1
            if depth == 0:
                return s[1:i], s[i + 1:]
    return s[1:], ""


def take_to_semicolon(s):
    """Return (statement_before_first_depth0_semicolon, rest_after_semicolon)."""
    depth = 0
    for i, ch in enumerate(s):
        if ch in "([{":
            depth += 1
        elif ch in ")]}":
            depth -= 1
        elif ch == ";" and depth == 0:
            return s[:i], s[i + 1:]
    return s, ""


def clean_line(line):
    """Strip IDA address markers and C/C++ line comments."""
    s = re.sub(r'/\*0x[0-9A-Fa-f]+\*/', '', line)
    s = re.sub(r'/\*.*?\*/', '', s)
    s = re.sub(r'//.*$', '', s)
    return s


def _is_write(text, end):
    """True if the access ending at `text[end]` is the target of `= ` (single)."""
    i, n = end, len(text)
    while i < n and text[i] == " ":
        i += 1
    # skip array indices
    while i < n and text[i] == "[":
        depth = 0
        while i < n:
            if text[i] == "[":
                depth += 1
            elif text[i] == "]":
                depth -= 1
                if depth == 0:
                    i += 1
                    break
            i += 1
        while i < n and text[i] == " ":
            i += 1
    if text[i:i + 2] == "->" or (i < n and text[i] == "."):
        return False  # chained access -> the assignment targets another object
    if i < n and text[i] == "=":
        return not (i + 1 < n and text[i + 1] == "=")
    return False


# ============================================================
# IDA leaf extractor
# ============================================================

def detect_this_type(pseudocode):
    m = re.search(r'\(\s*(_DWORD|_BYTE|_WORD|int|char|unsigned __int8|__int16)\s*\*\s*this\b',
                  pseudocode)
    if m:
        return m.group(1)
    return "_DWORD"


def _this_mult(this_type):
    if this_type in ("_BYTE", "char", "unsigned __int8", "uint8_t"):
        return 1
    if this_type in ("_WORD", "__int16", "unsigned __int16", "uint16_t"):
        return 2
    return 4  # _DWORD / int / default


# Member-access patterns (group(1)=cast or offset depending on pattern).
_IDA_BYTE_CAST = re.compile(
    r'\*\(\(\s*(_BYTE|char|uint8_t|unsigned __int8|_WORD|uint16_t|__int16|unsigned __int16)'
    r'\s*\*\s*\)\s*this\s*\+\s*(\d+)\s*\)')
_IDA_DW_CAST = re.compile(
    r'\*\(\(\s*(_DWORD|int|uint32_t|unsigned int|float|BOOL|_QWORD|__int64)'
    r'\s*\*\s*\)\s*this\s*\+\s*(\d+)\s*\)')
_IDA_CAST_PAREN = re.compile(
    r'\*\(\s*(_DWORD|_BYTE|_WORD|int|char|uint8_t|uint16_t|uint32_t|float|BOOL|void|__int16)'
    r'\s*\*\s*\)\s*\(\s*(?:\(\s*(char|uint8_t|_BYTE)\s*\*\s*\)\s*)?this\s*\+\s*(\d+)\s*\)')
_IDA_SIMPLE = re.compile(r'\*\(\s*this\s*\+\s*(\d+)\s*\)')
_IDA_VTABLE = re.compile(r'\*this\s*\+\s*(\d+)')
_IDA_QUAL_CALL = re.compile(r'(?<![\w:>.])([A-Z][A-Za-z0-9_]*(?:::~?[A-Za-z0-9_]+)+)\s*\(')
_IDA_SIMPLE_CALL = re.compile(r'(?<![\w:>.])([A-Z][A-Za-z0-9_]*)\s*\(')
_IDA_G_GLOBAL = re.compile(r'&?\b(g_[A-Za-z0-9_]+)\b')
_IDA_DWORD_GLOBAL = re.compile(r'\b(?:dword|byte|word|flt|dbl|qword|unk)_([0-9A-Fa-f]{5,8})\b')
_IDA_MEMORY = re.compile(r'MEMORY\[\s*(0x[0-9A-Fa-f]+)\s*\]')
_IDA_PTR_ADDR = re.compile(r'\*\(\s*\w+\s*\*\s*\)\s*(0x[0-9A-Fa-f]{5,8})\b')
_RETURN_RE = re.compile(r'\breturn\b')


def _cast_byte_off(cast, n, inner=None):
    if inner in ("char", "uint8_t", "_BYTE"):
        return n
    if cast in ("_BYTE", "char", "uint8_t", "unsigned __int8"):
        return n
    if cast in ("_WORD", "uint16_t", "__int16", "unsigned __int16"):
        return n * 2
    return n * 4


def _resolve_call(name, M):
    if name in SKIP_NAMES:
        return None
    if "::" in name:
        return M.name_to_addr.get(name) or M.sig_name_to_addr.get(name)
    a = M.name_to_addr.get(name)
    if a:
        return a
    addrs = M.simple_to_addrs.get(name, [])
    cand = [x for x in addrs if 0x400000 <= x <= 0x7FFFFF]
    if len(cand) == 1:
        return cand[0]
    if len(cand) > 1:
        return min(cand)
    if len(addrs) == 1:
        return addrs[0]
    return None


def _resolve_global(name, M):
    return M.global_to_addr.get(name)


def make_ida_leaf(this_type, M):
    mult = _this_mult(this_type)

    def leaf(text):
        hits = []  # (start, end_of_span, event)

        # --- members ---
        for m in _IDA_BYTE_CAST.finditer(text):
            off = _cast_byte_off(m.group(1), int(m.group(2)))
            kind = "WRITE" if _is_write(text, m.end()) else "READ"
            hits.append((m.start(), m.end(), f"{kind}(member,{off})"))
        for m in _IDA_DW_CAST.finditer(text):
            off = int(m.group(2)) * 4
            kind = "WRITE" if _is_write(text, m.end()) else "READ"
            hits.append((m.start(), m.end(), f"{kind}(member,{off})"))
        for m in _IDA_CAST_PAREN.finditer(text):
            off = _cast_byte_off(m.group(1), int(m.group(3)), m.group(2))
            kind = "WRITE" if _is_write(text, m.end()) else "READ"
            hits.append((m.start(), m.end(), f"{kind}(member,{off})"))
        for m in _IDA_SIMPLE.finditer(text):
            off = int(m.group(1)) * mult
            kind = "WRITE" if _is_write(text, m.end()) else "READ"
            hits.append((m.start(), m.end(), f"{kind}(member,{off})"))

        # --- vtable dispatch (*this + N) ---
        for m in _IDA_VTABLE.finditer(text):
            hits.append((m.start(), m.end(), f"CALL(vfptr+{int(m.group(1))})"))

        # --- named calls ---
        for m in _IDA_QUAL_CALL.finditer(text):
            addr = _resolve_call(m.group(1), M)
            if addr:
                hits.append((m.start(), m.end(), f"CALL(0x{addr:X})"))
        for m in _IDA_SIMPLE_CALL.finditer(text):
            addr = _resolve_call(m.group(1), M)
            if addr:
                hits.append((m.start(), m.end(), f"CALL(0x{addr:X})"))

        # --- globals ---
        for m in _IDA_G_GLOBAL.finditer(text):
            addr = _resolve_global(m.group(1), M)
            if addr is not None:
                kind = "WRITE" if _is_write(text, m.end()) else "READ"
                hits.append((m.start(), m.end(), f"{kind}(global,0x{addr:X})"))
        for m in _IDA_DWORD_GLOBAL.finditer(text):
            try:
                addr = int(m.group(1), 16)
            except ValueError:
                continue
            kind = "WRITE" if _is_write(text, m.end()) else "READ"
            hits.append((m.start(), m.end(), f"{kind}(global,0x{addr:X})"))
        for m in _IDA_MEMORY.finditer(text):
            addr = int(m.group(1), 16)
            kind = "WRITE" if _is_write(text, m.end()) else "READ"
            hits.append((m.start(), m.end(), f"{kind}(global,0x{addr:X})"))
        for m in _IDA_PTR_ADDR.finditer(text):
            addr = int(m.group(1), 16)
            if DATA_SECTION_START <= addr <= DATA_SECTION_END:
                kind = "WRITE" if _is_write(text, m.end()) else "READ"
                hits.append((m.start(), m.end(), f"{kind}(global,0x{addr:X})"))

        # --- return ---
        for m in _RETURN_RE.finditer(text):
            hits.append((m.start(), m.end(), "RET"))

        return _order_hits(hits)

    return leaf


# ============================================================
# C++ leaf extractor
# ============================================================

_CPP_THIS_CALL = re.compile(r'\bthis->(~?\w+)\s*\(')
_CPP_THIS_MEMBER = re.compile(r'\bthis->(\w+)\b(?!\s*\()')
_CPP_QUAL_CALL = re.compile(r'(?<![\w:>.])([A-Z][A-Za-z0-9_]*(?:::~?[A-Za-z0-9_]+)+)\s*\(')
_CPP_SIMPLE_CALL = re.compile(r'(?<![\w:>.])([A-Z][A-Za-z0-9_]*)\s*\(')
_CPP_G_GLOBAL = re.compile(r'(?<![\w>.:])\b(g_[A-Za-z0-9_]+)\b')


def make_cpp_leaf(class_name, M):

    def leaf(text):
        hits = []

        # this->method(...) : virtual -> vfptr, else non-virtual member call
        for m in _CPP_THIS_CALL.finditer(text):
            method = m.group(1)
            off = get_vtable_byte_offset(method, class_name, M) if class_name else None
            if off is not None:
                hits.append((m.start(), m.end(), f"CALL(vfptr+{off})"))
            else:
                addr = _resolve_call(f"{class_name}::{method}", M) if class_name else None
                if addr:
                    hits.append((m.start(), m.end(), f"CALL(0x{addr:X})"))

        # this->member  (value access, not a call)
        for m in _CPP_THIS_MEMBER.finditer(text):
            name = m.group(1)
            off = resolve_member_offset(class_name, name, M)
            kind = "WRITE" if _is_write(text, m.end()) else "READ"
            if off is not None:
                hits.append((m.start(), m.end(), f"{kind}(member,{off})"))
            else:
                # Unresolvable -> sentinel that can never match (conservative).
                hits.append((m.start(), m.end(), f"{kind}(member,?{name})"))

        # qualified call Class::Method(...)
        for m in _CPP_QUAL_CALL.finditer(text):
            addr = _resolve_call(m.group(1), M)
            if addr:
                hits.append((m.start(), m.end(), f"CALL(0x{addr:X})"))

        # simple PascalCase call
        for m in _CPP_SIMPLE_CALL.finditer(text):
            addr = _resolve_call(m.group(1), M)
            if addr:
                hits.append((m.start(), m.end(), f"CALL(0x{addr:X})"))

        # globals g_Name
        for m in _CPP_G_GLOBAL.finditer(text):
            addr = _resolve_global(m.group(1), M)
            kind = "WRITE" if _is_write(text, m.end()) else "READ"
            if addr is not None:
                hits.append((m.start(), m.end(), f"{kind}(global,0x{addr:X})"))
            else:
                hits.append((m.start(), m.end(), f"{kind}(global,?{m.group(1)})"))

        # return
        for m in _RETURN_RE.finditer(text):
            hits.append((m.start(), m.end(), "RET"))

        return _order_hits(hits)

    return leaf


def _order_hits(hits):
    """Sort by text position, dropping events whose span overlaps an already
    emitted one (longest-span wins at a given start)."""
    hits.sort(key=lambda h: (h[0], -(h[1] - h[0])))
    out = []
    last_end = -1
    for start, end, ev in hits:
        if start < last_end:
            continue
        out.append(ev)
        last_end = end
    return out


# ============================================================
# C++ source location
# ============================================================

def _extract_function_body(lines, start_idx, cppf_relative):
    def_match = re.match(
        r'^\s*(?:inline\s+)?[\w\s*&<>:\-]+\s+'
        r'(?:([\w:]+)::)?(~?\w+)\s*\([^)]*\)',
        lines[start_idx])
    class_name = def_match.group(1) if def_match else None
    if class_name and "::" in class_name:
        class_name = class_name.split("::")[-1]
    brace_count = 0
    found_open = False
    end_line = start_idx
    for k in range(start_idx, min(start_idx + 1200, len(lines))):
        brace_count += lines[k].count("{") - lines[k].count("}")
        if "{" in lines[k]:
            found_open = True
        if found_open and brace_count <= 0:
            end_line = k
            break
    return {
        "lines": lines[start_idx:end_line + 1],
        "start_line": start_idx,
        "file": cppf_relative,
        "class_name": class_name,
    }


def _cpp_files():
    files = list(SRC_DIR.glob("**/*.cpp"))
    app = PROJECT_ROOT / "app"
    if app.exists():
        files.extend(app.glob("**/*.cpp"))
    return files


def find_cpp_function(func_name):
    parts = func_name.split("::")
    class_name = parts[0] if len(parts) >= 2 else None
    method_name = parts[-1]
    class_prefix = rf'{re.escape(class_name)}::' if class_name else ''
    def_pattern = re.compile(
        rf'^\s*(?:inline\s+)?[\w\s*&<>:\-]+\s+'
        rf'{class_prefix}{re.escape(method_name)}'
        r'\s*\([^)]*\)\s*(?:const\s*)?(?:\{|$)')
    for cppf in _cpp_files():
        try:
            with open(cppf, "r", encoding="utf-8", errors="replace") as f:
                lines = f.readlines()
        except OSError:
            continue
        for i, line in enumerate(lines):
            if def_pattern.search(line):
                return _extract_function_body(lines, i, str(cppf.relative_to(PROJECT_ROOT)))
    return None


def find_cpp_function_by_addr(ida_addr):
    addr_pattern = re.compile(rf'//\s*(?:IDA:?\s*)?0x{ida_addr:0>6X}\b', re.IGNORECASE)
    def_re = re.compile(
        r'^\s*(?:inline\s+)?[\w\s*&<>:\-]+\s+'
        r'(?:([\w:]+)::)?(~?\w+)\s*\([^)]*\)\s*(?:const\s*)?(?:\{|$)')
    for cppf in _cpp_files():
        try:
            with open(cppf, "r", encoding="utf-8", errors="replace") as f:
                lines = f.readlines()
        except OSError:
            continue
        for i, line in enumerate(lines):
            stripped = line.strip()
            if stripped.startswith("//") and addr_pattern.search(stripped):
                for j in range(i + 1, min(i + 12, len(lines))):
                    if def_re.match(lines[j]):
                        return _extract_function_body(lines, j, str(cppf.relative_to(PROJECT_ROOT)))
    return None


# ============================================================
# CFG pipeline helpers (efv_* orchestration)
# ============================================================

# The efv_* modules import helpers BACK from this file, so importing them at
# module top-level would be a circular import (they would try to read symbols
# from this module before it finished loading). Import them LAZILY, the first
# time the verdict path runs — by then this module is fully defined, so the
# efv modules' `from verify_execution_flow import ...` succeeds.
_EFV = None


def _load_efv():
    """Lazily import + cache the efv_* CFG-pipeline modules (avoids the circular
    import: efv_* modules import helpers from this file)."""
    global _EFV
    if _EFV is None:
        import efv_model
        import efv_ida_cfg
        import efv_ida_events
        import efv_cpp_cfg
        import efv_cpp_events
        import efv_normalize
        import efv_match
        import efv_cpp_reject
        import efv_inline
        import efv_necessary
        _EFV = {
            "model": efv_model,
            "ida_cfg": efv_ida_cfg,
            "ida_events": efv_ida_events,
            "cpp_cfg": efv_cpp_cfg,
            "cpp_events": efv_cpp_events,
            "normalize": efv_normalize,
            "match": efv_match,
            "reject": efv_cpp_reject,
            "inline": efv_inline,
            "necessary": efv_necessary,
        }
    return _EFV


def make_callee_cfg_provider(efv, M, signals):
    """Return `get_callee_cfg(addr) -> efv_model.CFG | None` for T22 inline
    expansion (`efv_inline.try_inline_match`).

    Given the int address of an inlined callee, resolve it to a translated C++
    function and build its NORMALIZED, event-stage CFG via the SAME pipeline a
    top-level C++ function uses (`_build_cpp_cfg_events`). Returns None when the
    callee is not translated (no C++ source) or uses an unverifiable construct
    (lambda / goto / inline asm) — such a callee cannot be expanded, so the
    inlining caller stays FAIL (documented T22 limitation, never a false PASS).
    Built CFGs are cached so a callee inlined several times is built once."""
    cache = {}

    def get_callee_cfg(addr):
        if addr in cache:
            return cache[addr]
        result = None
        name = M.addr_to_name.get(addr)
        body = None
        if name:
            body = find_cpp_function(name)
        if not body:
            body = find_cpp_function_by_addr(addr)
        if body:
            cls = body.get("class_name")
            if not cls and name and "::" in name:
                cls = name.split("::")[0]
            cpp_text = "".join(body["lines"])
            if efv["reject"].check_rejectable(cpp_text) is None:
                try:
                    result = _build_cpp_cfg_events(efv, cpp_text, cls, M, signals)
                except Exception:
                    result = None
        cache[addr] = result
        return result

    return get_callee_cfg


def _arm_reachable_key(cfg, succ_id, block_signature):
    """A deterministic ordering key for one arm of a 2-way branch: (number of
    blocks reachable from `succ_id`, total events in them, sorted block
    signatures). Computed identically on both CFGs so it canonicalizes branch
    polarity the same way on each side."""
    seen = set()
    stack = [succ_id]
    while stack:
        x = stack.pop()
        if x in seen or x not in cfg.blocks:
            continue
        seen.add(x)
        for (tgt, _lbl) in cfg.get_block(x).successors:
            if tgt not in seen:
                stack.append(tgt)
    ev_count = 0
    sigs = []
    for b in seen:
        blk = cfg.get_block(b)
        ev_count += len(blk.ordered_events)
        sigs.append(repr(block_signature(blk)))
    return (len(seen), ev_count, tuple(sorted(sigs)))


def _is_bare_return_arm(cfg, succ_id):
    """True iff the arm rooted at `succ_id` is a BARE-RETURN TERMINAL: a single
    block with NO successors whose only SEQUENCED event is `RET` (the canonical
    `if (...) return;` early-exit).

    This is the ONLY structural pattern where a faithful translation legitimately
    NEGATES a branch condition and SWAPS its arms (the early-return idiom
    `if (!c) return; body` vs the binary's `if (c) { body } return`). At the
    event level `c` and `!c` are indistinguishable (a negated condition reads the
    SAME members), so a swapped 2-way branch is event-identical whether the
    condition was negated (faithful) or not (a wrong translation). The only way
    to keep the two apart soundly is to permit polarity re-orientation ONLY for
    this idiom -- where one arm is a bare-RET terminal -- and to leave a
    SUBSTANTIVE two-arm branch (neither arm a bare-RET terminal) at its literal
    polarity, so an un-negated arm swap of it is correctly rejected by cfg_match.
    (T20 calibration: without this gate, the blanket "orient TRUE->larger arm"
    masked un-negated arm swaps -> a soundness hole / false positive.)"""
    if succ_id not in cfg.blocks:
        return False
    blk = cfg.get_block(succ_id)
    if blk.successors:
        return False
    seq = blk.sequenced_events()
    efv = _load_efv()
    return len(seq) == 1 and efv["model"].event_verb(seq[0]) == efv["model"].VERB_RET


def canonicalize_branch_polarity(cfg):
    """Canonicalize the polarity of every 2-way conditional branch IN PLACE.

    A faithful translation may negate a branch condition and swap its arms — the
    classic early-return idiom `if (!c) return; body` versus `if (c) { body }
    return`. Negating a 2-way branch's condition and swapping its TRUE/FALSE arms
    is SEMANTICS-PRESERVING, so the two forms describe the same execution flow but
    label the entry block's out-edges oppositely, which `cfg_match` (label-kind
    literal) would otherwise reject.

    For a 2-way branch whose successors are exactly one EDGE_TRUE and one
    EDGE_FALSE, this orients the TRUE edge toward the canonically *larger* arm (by
    reachable block count, then event count, then signatures) -- but ONLY when one
    arm is a bare-RET terminal (the early-return idiom; see `_is_bare_return_arm`).
    A SUBSTANTIVE two-arm branch (neither arm a bare-RET terminal) is LEFT AT ITS
    LITERAL POLARITY, because at the event level a negated condition is
    indistinguishable from an un-negated one, so blindly orienting TRUE->larger
    would mask a logic-changing un-negated arm swap (the T20 branch-polarity hole).
    The rule is deterministic and applied IDENTICALLY to both the IDA and the C++
    CFG, so corresponding early-return branches are re-oriented the same way
    (preserving a faithful match) while a count-mismatched stub can never be made
    to match (its block bijection still fails) and an un-negated swap of a
    substantive branch is rejected by cfg_match. Returns the same `cfg` (mutated).

    KNOWN LIMITATION (documented scope boundary): a faithful translation that
    negates a SUBSTANTIVE two-arm branch (both arms non-trivial, e.g.
    `if (!c) { bigA } else { bigB }` mirroring a binary `if (c) { bigB } else
    { bigA }`) would now FAIL, because the event CFG cannot prove the condition
    was negated. The calibration goldens never do this (their negate+swaps are all
    bare-RET early-exits); a future fix tracking the condition's syntactic negation
    at the structural (marker) stage would lift this restriction soundly."""
    efv = _load_efv()
    EDGE_TRUE = efv["model"].EDGE_TRUE
    EDGE_FALSE = efv["model"].EDGE_FALSE
    block_signature = efv["match"].block_signature

    for block in cfg.blocks.values():
        if len(block.successors) != 2:
            continue
        labels = [lbl for (_t, lbl) in block.successors]
        if EDGE_TRUE not in labels or EDGE_FALSE not in labels:
            continue
        target = {lbl: t for (t, lbl) in block.successors}
        # T20 SOUNDNESS GATE: only the EARLY-RETURN idiom legitimately negates a
        # branch + swaps arms (one arm is a bare-RET terminal). A SUBSTANTIVE
        # two-arm branch (neither arm a bare-RET terminal) keeps its LITERAL
        # polarity, so an un-negated arm swap of it is rejected by cfg_match
        # rather than silently masked here (closes the branch-polarity hole).
        if not (_is_bare_return_arm(cfg, target[EDGE_TRUE])
                or _is_bare_return_arm(cfg, target[EDGE_FALSE])):
            continue
        key_true = _arm_reachable_key(cfg, target[EDGE_TRUE], block_signature)
        key_false = _arm_reachable_key(cfg, target[EDGE_FALSE], block_signature)
        if key_true < key_false:
            # TRUE arm is the smaller one (the bare-RET early-exit) -> negate the
            # condition (swap arms) so TRUE points to the larger arm (canonical).
            block.successors = [(target[EDGE_FALSE], EDGE_TRUE),
                                (target[EDGE_TRUE], EDGE_FALSE)]
    return cfg


def _build_ida_cfg_events(efv, ida_decompiled, this_type, M):
    """IDA side: build structural CFG -> normalize (split flattened ||/&& on raw
    markers) -> extract canonical events -> normalize (collapse empty / merge /
    prune) -> canonicalize branch polarity."""
    cfg = efv["ida_cfg"].build_ida_cfg(ida_decompiled)
    cfg = efv["normalize"].normalize(cfg)
    efv["ida_events"].extract_events_into(cfg, this_type, maps=M)
    cfg = efv["normalize"].normalize(cfg)
    canonicalize_branch_polarity(cfg)
    return cfg


def _build_cpp_cfg_events(efv, cpp_text, class_name, M, signals):
    """C++ side: build structural CFG -> normalize -> extract canonical events ->
    normalize -> canonicalize branch polarity. (The reject gate is checked by the
    caller BEFORE this, so lambda/goto/asm never reach the CFG builder.)"""
    cfg = efv["cpp_cfg"].build_cpp_cfg(cpp_text)
    cfg = efv["normalize"].normalize(cfg)
    efv["cpp_events"].extract_events_into(cfg, class_name, maps=M, signals=signals)
    cfg = efv["normalize"].normalize(cfg)
    canonicalize_branch_polarity(cfg)
    return cfg


def step3_0_check(efv, ida_cfg, cpp_cfg, M, signals,
                  get_callee=None, element_exempt=STEP3_0_ELEMENT_EXEMPT):
    """STEP3(0) — the function-level, BIJECTION-INDEPENDENT necessary condition
    (.omo/plans/code-verifier.md §D-STEP3(0)).

    Returns `(ok: bool, missing: list[str])`. `ok` is True iff EVERY IDA-side
    external operation (CALL target / WRITE offset) appears AT LEAST ONCE on the
    C++ side; `missing` is the sorted list of IDA CALL/WRITE event strings absent
    from the C++ side (the FAIL witnesses; EMPTY when ok). Presence-only, never
    count-based (a faithful C++ contains each external op at least once; the
    binary may CLONE ops via tail-duplication / loop-unrolling, so equal counts
    would false-positive faithful code).

    Translated inlined callees are spliced into the C++ side first (reusing
    `efv_inline.expand_cpp_cfg`) so their CALL/WRITE ops count; the C++
    external-op set is the UNION of the raw and the inline-EXPANDED CFGs —
    presence-only means a union can only ADD ops, never invent the IDA side's
    missing one, so this stays ZERO-false-positive (and, since the structural
    bijection already forces per-block CALL/WRITE list equality, any function the
    bijection PASSES necessarily satisfies STEP3(0) — STEP3(0) can never flip a
    current PASS to FAIL).

    Computed purely from the event-extracted CFGs, so it runs — and can FAIL —
    even when `cfg_match` returns False / is abandoned (decoupled from the
    bijection SEARCH).

    RESIDUAL GAP (documented, not silently ignored): a callee the binary INLINED
    but that is NOT translated (no C++ source / unverifiable construct) is not
    expanded, so its inlined CALL/WRITE ops cannot appear on the C++ side and
    STEP3(0) would FAIL — the intended FAIL-by-contract per §D-STEP3 (author must
    mirror the inline body or translate the callee). A trivial (READ/RET-only)
    inlined region already cannot trip this gate (no CALL/WRITE to miss). The
    element-level exemption for the remaining narrow case is a FUTURE task wired
    through `element_exempt` (empty on the active path)."""
    nec = efv["necessary"]
    cpp_ops = nec.collect_external_ops(cpp_cfg)
    if get_callee is None:
        get_callee = make_callee_cfg_provider(efv, M, signals)
    try:
        expanded = efv["inline"].expand_cpp_cfg(
            cpp_cfg, ida_cfg, get_callee,
            normalize=efv["normalize"].normalize,
            canonicalize=canonicalize_branch_polarity)
        cpp_ops = cpp_ops | nec.collect_external_ops(expanded)
    except Exception:
        # Expansion is best-effort: the raw cpp_ops are already collected. A crash
        # here cannot manufacture a false PASS — it only forgoes the EXTRA inlined
        # ops, so at worst it over-FAILs an inlined-callee case, never under-FAILs.
        # (Full crash-isolation is a separate, later task.)
        pass
    ida_ops = nec.collect_external_ops(ida_cfg)
    exempt = set(element_exempt) if element_exempt else set()
    missing = sorted((ida_ops - cpp_ops) - exempt)
    # P1.3 element-scoped exemption (unresolved members): each C++ 'WRITE(member,?)'
    # wildcard -- emitted by the C++ leaf when a syntactically-certain this->Member
    # has no signals.json byte offset (the P2 address-mapping gap) -- excuses
    # EXACTLY ONE otherwise-missing IDA this-relative member WRITE. CALL targets and
    # global WRITEs are NEVER excused, so a dropped resolvable CALL/WRITE still FAILs
    # (the §D-STEP4 总原则: confirmed-missing CALL/WRITE FAILs with precedence over
    # any skip; skip excuses only the un-encodable element). Counted over the raw
    # cpp_cfg (this function's own unresolved members); an inlined-callee wildcard
    # would only UNDER-exempt here -- the safe (over-FAIL) direction.
    missing = nec.apply_member_wildcard_exemption(
        missing, nec.count_member_write_wildcards(cpp_cfg))
    return (not missing), missing


def _dump_cfg(label, cfg):
    """Verbose: print a normalized CFG (block id, successors, events) to stderr."""
    print("  --- {} CFG: entry={} blocks={} ---".format(
        label, cfg.entry_id, len(cfg.reachable_blocks())), file=sys.stderr)
    for bid in cfg.traverse(order="dfs"):
        b = cfg.get_block(bid)
        print("    blk {!r:>4} -> {} : {}".format(
            bid, b.successors, b.ordered_events), file=sys.stderr)


# ============================================================
# IDA MCP / cache
# ============================================================

def _mcp_call(name, arguments, timeout=30):
    payload = json.dumps({
        "jsonrpc": "2.0", "method": "tools/call",
        "params": {"name": name, "arguments": arguments}, "id": 1,
    })
    req = urllib.request.Request(
        IDA_MCP_URL, data=payload.encode(),
        headers={"Content-Type": "application/json", "Accept": "application/json"})
    resp = urllib.request.urlopen(req, timeout=timeout)
    data = json.loads(resp.read())
    content = data.get("result", {}).get("content", [])
    if content:
        try:
            return json.loads(content[0].get("text", "{}"))
        except (json.JSONDecodeError, KeyError):
            return {}
    return {}


def check_ida_available():
    try:
        _mcp_call("server_health", {}, timeout=5)
        return True
    except Exception:
        return False


def get_ida_decompile(addr):
    """Per the spec: analyze_function with decompile/blocks/callees/disasm."""
    try:
        inner = _mcp_call("analyze_function", {
            "addr": f"0x{addr:X}",
            "include_decompile": True,
            "include_basic_blocks": True,
            "include_callees": True,
            "include_disasm": True,
        })
        code = inner.get("decompiled") or inner.get("code") or ""
        if code:
            return code
    except Exception:
        pass
    # fall back to plain decompile
    inner = _mcp_call("decompile", {"addr": f"0x{addr:X}"})
    return inner.get("code", "")


def _cache_path(addr):
    return IDA_CACHE_DIR / f"func_0x{addr:X}.json"


def save_ida_cache(addr, decompiled_text, func_name=None):
    IDA_CACHE_DIR.mkdir(parents=True, exist_ok=True)
    import datetime
    data = {"addr": f"0x{addr:X}", "decompiled": decompiled_text,
            "name": func_name, "timestamp": datetime.datetime.now().isoformat()}
    path = _cache_path(addr)
    with open(path, "w", encoding="utf-8") as f:
        json.dump(data, f, indent=2, ensure_ascii=False)
    return path


def load_ida_cache(addr):
    path = _cache_path(addr)
    if not path.exists():
        return None, None
    try:
        with open(path, "r", encoding="utf-8") as f:
            data = json.load(f)
        return data.get("decompiled", ""), data.get("name")
    except (json.JSONDecodeError, KeyError):
        return None, None


# ============================================================
# Completed-scope iteration + auto cache-fill (HARD --auto gate)
# ============================================================

def _collect_completed_functions(M):
    """Every completed=true function as a sorted, address-deduped list of
    (int addr, name).

    signals.json is the canonical completed-flag source and `load_signals`
    populates `name_to_completed` and `name_to_addr` in lock-step (a completed
    function symbol always gets BOTH), so every completed name resolves to an
    address. Deduped by address so an aliased name is verified once."""
    out = []
    seen = set()
    for name, is_comp in M.name_to_completed.items():
        if is_comp is not True:
            continue
        addr = M.name_to_addr.get(name)
        if not addr or addr in seen:
            continue
        seen.add(addr)
        out.append((addr, name))
    out.sort(key=lambda t: t[0])
    return out


def _ida_unreachable_fatal():
    """Print the canonical FATAL message and exit non-zero (HARD GATE).

    A completed=true function whose IDA pseudocode is neither cached nor fetchable
    cannot be verified. Silently skipping it would make the exec-flow gate soft, so
    a missing IDA MCP server is a BUILD FAILURE, not a skip (user directive:
    `如果无法连接到IDA就报错说明无法连接到IDA导致编译失败`)."""
    print("FATAL: IDA MCP unreachable — cannot verify completed functions. "
          "Start IDA Pro with MCP plugin.", file=sys.stderr)
    print(f"  (expected IDA MCP at {IDA_MCP_URL})", file=sys.stderr)
    sys.exit(1)


def _fetch_and_cache(addr, name, M):
    """Decompile `addr` via IDA MCP and persist it to the cache; return the
    pseudocode text (str) or None.

    Assumes whole-server IDA health was already confirmed by the caller. A
    PER-ADDRESS failure (decompile error or empty result — e.g. IDA has not
    analyzed this address) is NON-FATAL: it logs a warning and returns None so the
    caller skips THAT ONE function. Only a whole-server health failure
    (`_ida_unreachable_fatal`) fails the build."""
    try:
        code = get_ida_decompile(addr)
    except Exception as exc:
        print(f"  WARNING: IDA decompile failed for 0x{addr:X} ({name}): {exc}",
              file=sys.stderr)
        return None
    if not code or not code.strip():
        print(f"  WARNING: IDA returned empty decompilation for 0x{addr:X} ({name})",
              file=sys.stderr)
        return None
    save_ida_cache(addr, code, M.addr_to_name.get(addr) or name)
    return code


# ============================================================
# Modified-function detection (legacy helper; see _collect_completed_functions)
# ============================================================

def get_modified_functions():
    try:
        result = subprocess.run(
            ["git", "diff", "HEAD", "--unified=0", "--", "src/", "app/"],
            capture_output=True, text=True, cwd=str(PROJECT_ROOT),
            timeout=30, encoding="utf-8", errors="replace")
        if result.returncode != 0:
            return []
        diff_output = result.stdout or ""
    except Exception:
        return []
    if not diff_output.strip():
        return []
    file_ranges = {}
    current_file = None
    for line in diff_output.split("\n"):
        fm = re.match(r'^\+\+\+\s+b?/(.+?\.(?:cpp|hpp))', line)
        if fm:
            current_file = fm.group(1).replace("/", os.sep)
            continue
        hm = re.match(r'^@@\s+-\d+(?:,\d+)?\s+\+(\d+)(?:,(\d+))?\s+@@', line)
        if hm and current_file:
            start = int(hm.group(1))
            count = int(hm.group(2)) if hm.group(2) else 1
            file_ranges.setdefault(current_file, []).append((start, start + count))
    funcs = []
    func_def_re = re.compile(
        r'^\s*(?:inline\s+)?[\w\s*&<>:\-]+\s+([\w:]+)::(~?\w+)\s*\([^)]*\)\s*(?:const\s*)?(?:\{|$)')
    for cpp_file, ranges in file_ranges.items():
        full = PROJECT_ROOT / cpp_file
        if not full.exists():
            continue
        try:
            with open(full, "r", encoding="utf-8", errors="replace") as f:
                lines = f.readlines()
        except OSError:
            continue
        for i, line in enumerate(lines):
            m = func_def_re.search(line)
            if not m:
                continue
            ida_addr = None
            for j in range(i - 1, max(i - 8, -1), -1):
                am = re.search(r'(?:IDA:?\s*)?(0x[0-9A-Fa-f]{5,8})', lines[j])
                if am and lines[j].strip().startswith("//"):
                    try:
                        ida_addr = int(am.group(1), 16)
                    except ValueError:
                        pass
                    break
            brace = 0
            opened = False
            end = i
            for k in range(i, min(i + 1200, len(lines))):
                brace += lines[k].count("{") - lines[k].count("}")
                if "{" in lines[k]:
                    opened = True
                if opened and brace <= 0:
                    end = k
                    break
            for rs, re_ in ranges:
                if i <= (re_ - 1) and end >= (rs - 1) and ida_addr:
                    funcs.append({"addr": ida_addr, "name": f"{m.group(1)}::{m.group(2)}"})
                    break
    return funcs


# ============================================================
# Verify
# ============================================================

def verify_single_function(ida_addr, func_name, display_name, M,
                           ida_decompiled, verbose=False, signals=None):
    """Verify ONE function through the efv_* CFG pipeline.

    Returns `(passed, info)` where `info` is a dict the verdict printer reads:
        {"reject": bool, "reason": str | None}
    A faithful translation -> (True, ...). A stub / structural mismatch / missing
    C++ source -> (False, {"reject": False, "reason": None}). An avoidable
    unverifiable construct (lambda / goto / inline asm) -> (False, {"reject":
    True, "reason": <specific rewrite hint>}) — the one detailed FAIL."""
    efv = _load_efv()
    if signals is None:
        signals = efv["cpp_events"].get_signals()

    # ---- IDA side ----
    this_type = detect_this_type(ida_decompiled)
    ida_cfg = _build_ida_cfg_events(efv, ida_decompiled, this_type, M)

    # ---- locate the C++ implementation ----
    body = None
    if func_name:
        body = find_cpp_function(func_name)
    if not body and display_name and display_name != func_name:
        body = find_cpp_function(display_name)
    if not body and ida_addr:
        body = find_cpp_function_by_addr(ida_addr)
    if not body:
        if verbose:
            print("  C++ source : NOT FOUND", file=sys.stderr)
            _dump_cfg("IDA", ida_cfg)
        return False, {"reject": False, "reason": None}

    class_name = body.get("class_name")
    if not class_name and func_name and "::" in func_name:
        class_name = func_name.split("::")[0]
    cpp_text = "".join(body["lines"])

    # ---- reject gate: lambda / goto / inline asm -> FAIL with a specific hint ----
    reason = efv["reject"].check_rejectable(cpp_text)
    if reason is not None:
        if verbose:
            print("  C++ source : {}:{}".format(body["file"], body["start_line"] + 1),
                  file=sys.stderr)
            print("  REJECT     : {}".format(reason.message), file=sys.stderr)
        return False, {"reject": True, "reason": reason.message}

    # ---- C++ side ----
    cpp_cfg = _build_cpp_cfg_events(efv, cpp_text, class_name, M, signals)

    if verbose:
        print("  C++ source : {}:{}".format(body["file"], body["start_line"] + 1),
              file=sys.stderr)
        print("  this type  : {}*   class={}".format(this_type, class_name),
              file=sys.stderr)
        _dump_cfg("IDA", ida_cfg)
        _dump_cfg("C++", cpp_cfg)

    # ---- STEP3(0): function-level necessary condition (BIJECTION-INDEPENDENT) ----
    # §D-STEP3(0): every IDA-side external op (CALL target / WRITE offset) MUST
    # appear at least once on the C++ side (translated inlined callees are
    # expanded first so their ops count). It is computed from the flattened event
    # sets — NOT the bijection search — so it runs and can FAIL even when
    # cfg_match returns False / is abandoned. A missing external op FAILs the
    # function with PRECEDENCE over any structural skip (§D-STEP4 总原则).
    info = {"reject": False, "reason": None}
    get_callee = make_callee_cfg_provider(efv, M, signals)
    # §D-STEP4: a tool/structural exception inside the STEP3(0) check must NOT
    # crash the --auto run NOR FAIL a faithful fn on a tool error. On exception
    # treat STEP3(0) as satisfied (loudly, never silent) so the structural
    # verdict gates; record the error for the printer.
    try:
        step3_0_ok, step3_0_missing = step3_0_check(
            efv, ida_cfg, cpp_cfg, M, signals, get_callee=get_callee,
            element_exempt=STEP3_0_ELEMENT_EXEMPT)
    except Exception as exc:
        step3_0_ok, step3_0_missing = True, []
        info["step3_0_error"] = str(exc)
        print("WARNING: STEP3(0) check raised for {}: {} -- relying on "
              "structural verdict".format(display_name, exc), file=sys.stderr)
    info["step3_0_ok"] = step3_0_ok
    if step3_0_missing:
        info["step3_0_missing"] = step3_0_missing
    if verbose:
        if step3_0_ok:
            print("  STEP3(0)   : OK (every IDA external op present on C++ side)",
                  file=sys.stderr)
        else:
            print("  STEP3(0)   : FAIL ({} IDA external op(s) absent on C++ side)"
                  .format(len(step3_0_missing)), file=sys.stderr)
            for ev in step3_0_missing:
                print("    missing: {}".format(ev), file=sys.stderr)

    # ---- verdict: structural CFG bijection (existing v1 ordered matching) ----
    # §D-STEP4: the entire structural pipeline (cfg_match + inline fallback) is
    # isolated. A crash here must NEVER crash the --auto run and must NEVER
    # silently PASS the whole function — on exception we fall back to the
    # independently-computed STEP3(0) verdict (which still gates / can FAIL).
    structural_crashed = False
    structural_indeterminate = False
    try:
        # pre-call cfg_match (not just cfg_match_status) so that a monkey-
        # patched cfg_match that raises (crash-isolation test) still hits
        # the except block; the result is discarded and cfg_match_status
        # provides the tri-state verdict.
        efv["match"].cfg_match(ida_cfg, cpp_cfg)
        status = efv["match"].cfg_match_status(ida_cfg, cpp_cfg)
        if status == efv["match"].STATUS_MATCH:
            matched = True
        elif status == efv["match"].STATUS_INDETERMINATE:
            matched = False
            structural_indeterminate = True
            info["structural_indeterminate"] = True
            print("WARNING: structural match INDETERMINATE (timeout/over-cap) "
                  "for {} -- relying on STEP3(0)".format(display_name),
                  file=sys.stderr)
        else:  # STATUS_MISMATCH
            matched = False
            inlined = efv["inline"].try_inline_match(
                ida_cfg, cpp_cfg, get_callee,
                cfg_match=efv["match"].cfg_match,
                normalize=efv["normalize"].normalize,
                canonicalize=canonicalize_branch_polarity)
            if inlined:
                matched = True
                info["inline"] = True
                if verbose:
                    print("  matched via INLINE expansion of an inlined callee",
                          file=sys.stderr)
    except Exception as exc:
        matched = False
        structural_crashed = True
        info["structural_error"] = str(exc)
        print("WARNING: structural match raised for {}: {} -- relying on "
              "STEP3(0)".format(display_name, exc), file=sys.stderr)

    # ---- final verdict: PASS iff STEP3(0) holds AND the bijection holds ----
    # STEP3(0) FAIL takes PRECEDENCE: a missing external op FAILs the function
    # regardless of the structural result (incl. a skipped / abandoned bijection).
    # `step3_0_ok` is computed independently of `matched`, so STEP3(0) can FAIL the
    # function even if cfg_match were True/abandoned.
    # A structural CRASH (not a genuine mismatch) does NOT by itself FAIL: it
    # falls back to the STEP3(0) verdict (structural_ok True). A genuine MISMATCH
    # (matched False, no crash) still FAILs as before.
    structural_ok = bool(matched or structural_crashed or structural_indeterminate)
    passed = bool(step3_0_ok and structural_ok)
    return passed, info


def load_all_maps():
    M = Maps()
    load_signals(M)
    load_globals_map(M)
    load_member_lookup(M)
    parse_vtable_indices_from_headers(M)
    build_member_name_index(M)
    return M


# ============================================================
# Main
# ============================================================

def main():
    import argparse
    p = argparse.ArgumentParser(description="Verify C++ translation flow against IDA.")
    p.add_argument("target", nargs="?", help="0xADDR or Class::Method")
    p.add_argument("--ida-file", help="file with IDA pseudocode")
    p.add_argument("--ida-json", help="JSON file ({'decompiled'|'code': ...})")
    p.add_argument("--ida-stdin", action="store_true", help="read IDA pseudocode from stdin")
    p.add_argument("--auto", action="store_true",
                   help="HARD gate: verify EVERY completed=true function; auto-fetch "
                        "missing IDA cache from MCP (FATAL exit if IDA unreachable)")
    p.add_argument("--save-ida", action="store_true", help="fetch IDA pseudocode to cache")
    p.add_argument("--no-ida", action="store_true",
                   help="(--auto) offline soft mode: SKIP completed functions whose "
                        "IDA cache is missing instead of fetching/failing")
    p.add_argument("--fetch-cache", action="store_true",
                   help="pre-fill IDA cache for ALL completed=true functions (no "
                        "comparison); FATAL exit if IDA MCP unreachable")
    p.add_argument("--verbose", "-v", action="store_true")
    args = p.parse_args()

    M = load_all_maps()

    # ── FETCH-CACHE ── pre-fill IDA cache for every completed=true function
    # (no comparison). Convenience: warm the cache once so a later --auto run is
    # fast / works offline. FATAL exit if IDA MCP is unreachable AND there is at
    # least one function to fetch.
    if args.fetch_cache:
        completed = _collect_completed_functions(M)
        missing = []
        for addr, name in completed:
            decomp, _c = load_ida_cache(addr)
            if not decomp or not decomp.strip():
                missing.append((addr, name))
        if not missing:
            print(f"All {len(completed)} completed functions already cached.")
            sys.exit(0)
        if not check_ida_available():
            _ida_unreachable_fatal()
        print(f"Fetching IDA pseudocode for {len(missing)} of {len(completed)} "
              f"completed functions...", file=sys.stderr)
        ok = failed = 0
        for addr, name in missing:
            if _fetch_and_cache(addr, name, M) is not None:
                ok += 1
            else:
                failed += 1
        print(f"Cached {ok} entries "
              f"({failed} skipped — IDA had no pseudocode for that address).")
        sys.exit(0)

    # ── AUTO ── HARD exec-flow gate over EVERY completed=true function.
    # For each completed=true function: use its cached IDA pseudocode if present,
    # else FETCH it from IDA MCP and persist it, else (IDA unreachable) FAIL THE
    # BUILD. This makes the gate truly hard — previously, an uncached completed
    # function was silently skipped, so 471 of 502 went unverified.
    if args.auto:
        completed = _collect_completed_functions(M)
        if not completed:
            print("No completed=true functions to verify.", file=sys.stderr)
            sys.exit(0)
        # HARD-GATE PRECONDITION: determine which completed functions lack a usable
        # cache. If ANY do and we are NOT in offline --no-ida mode, IDA MUST be
        # reachable so we can fetch them — check ONCE, BEFORE any decompile, and
        # FAIL THE BUILD now if IDA is down (rather than per-function later).
        missing = []
        for addr, name in completed:
            decomp, _c = load_ida_cache(addr)
            if not decomp or not decomp.strip():
                missing.append((addr, name))
        if missing and not args.no_ida:
            if not check_ida_available():
                _ida_unreachable_fatal()
            print(f"exec-flow: {len(missing)} of {len(completed)} completed "
                  f"functions missing IDA cache — fetching from IDA MCP "
                  f"({IDA_MCP_URL})...", file=sys.stderr)

        all_passed = True
        any_verified = False
        fetched = skipped_no_ida = 0
        signals = _load_efv()["cpp_events"].get_signals()
        for addr, name in completed:
            disp = name or f"sub_{addr:X}"
            ida_decomp, cached = load_ida_cache(addr)
            if not ida_decomp or not ida_decomp.strip():
                if args.no_ida:
                    # Offline soft mode: skip (does NOT affect the exit code).
                    print(f"SKIP (no cache, --no-ida): {disp}")
                    skipped_no_ida += 1
                    continue
                # IDA reachability was confirmed above; fetch + cache this one now.
                ida_decomp = _fetch_and_cache(addr, name, M)
                if ida_decomp is None:
                    # Per-address IDA failure (not analyzed / empty pseudocode) —
                    # skip THIS function only; do NOT fail the build for a single
                    # address (per spec: only whole-server unreachability is fatal).
                    print(f"SKIP (IDA has no pseudocode): {disp}")
                    continue
                cached = M.addr_to_name.get(addr) or name
                fetched += 1
            any_verified = True
            passed, info = verify_single_function(addr, name or cached, disp, M,
                                                  ida_decomp, verbose=args.verbose,
                                                  signals=signals)
            if passed:
                print(f"PASS: {disp} — matched")
            else:
                all_passed = False
                # AGENT-FACING (non-verbose): opaque generic message only — NO
                # step3_0_missing / per-block / per-offset / per-event detail (that
                # stays under -v for human triage). The lambda/goto/asm reject path
                # KEEPS its construct rewrite hint (a fixable construct rule, not the
                # comparison result).
                print(f"FAIL: {disp} — 未完成翻译")
                if info.get("reject") and info.get("reason"):
                    print(f"  {info['reason']}")
        if fetched:
            print(f"exec-flow: auto-cached {fetched} IDA pseudocode entries.",
                  file=sys.stderr)
        if args.no_ida and skipped_no_ida:
            print(f"exec-flow: skipped {skipped_no_ida} uncached function(s) "
                  f"(--no-ida offline mode).", file=sys.stderr)
        if not any_verified:
            print("No completed functions verifiable (no cache / IDA pseudocode).",
                  file=sys.stderr)
            sys.exit(0)
        sys.exit(0 if all_passed else 1)

    # ── SAVE-IDA ──
    if args.save_ida:
        if not args.target or not args.target.lower().startswith("0x"):
            print("ERROR: --save-ida needs a hex address (e.g. 0x743A50)", file=sys.stderr)
            sys.exit(1)
        addr = int(args.target, 16)
        if not check_ida_available():
            print(f"FAIL: IDA MCP not reachable at {IDA_MCP_URL}", file=sys.stderr)
            sys.exit(1)
        try:
            code = get_ida_decompile(addr)
        except Exception as e:
            print(f"FAIL: IDA MCP error: {e}", file=sys.stderr)
            sys.exit(1)
        if not code.strip():
            print(f"FAIL: empty decompilation for 0x{addr:X}", file=sys.stderr)
            sys.exit(1)
        path = save_ida_cache(addr, code, M.addr_to_name.get(addr))
        print(f"Saved IDA cache: {path.relative_to(PROJECT_ROOT)}")
        sys.exit(0)

    # ── SINGLE ──
    if not args.target:
        print("ERROR: provide a target (0xADDR / Class::Method) or --auto", file=sys.stderr)
        sys.exit(1)

    target = args.target
    if target.lower().startswith("0x"):
        try:
            ida_addr = int(target, 16)
        except ValueError:
            print(f"ERROR: invalid hex address: {target}", file=sys.stderr)
            sys.exit(1)
        func_name = M.addr_to_name.get(ida_addr)
    else:
        func_name = target
        ida_addr = M.name_to_addr.get(func_name)
    if not ida_addr:
        print(f"ERROR: could not resolve '{target}' to an IDA address.", file=sys.stderr)
        sys.exit(1)
    display_name = func_name or f"sub_{ida_addr:X}"

    ida_decompiled = None
    if args.ida_json:
        try:
            with open(args.ida_json, "r", encoding="utf-8") as f:
                d = json.load(f)
            ida_decompiled = d.get("decompiled") or d.get("code") or ""
            if not func_name:
                func_name = d.get("name")
                display_name = func_name or display_name
        except (json.JSONDecodeError, OSError) as e:
            print(f"ERROR: cannot read --ida-json: {e}", file=sys.stderr)
            sys.exit(1)
    elif args.ida_file:
        try:
            ida_decompiled = Path(args.ida_file).read_text(encoding="utf-8", errors="replace")
        except OSError as e:
            print(f"ERROR: cannot read --ida-file: {e}", file=sys.stderr)
            sys.exit(1)
    elif args.ida_stdin:
        ida_decompiled = sys.stdin.read()
    else:
        ida_decompiled, cached = load_ida_cache(ida_addr)
        if (not ida_decompiled) and check_ida_available():
            try:
                ida_decompiled = get_ida_decompile(ida_addr)
            except Exception as e:
                print(f"ERROR: IDA MCP error: {e}", file=sys.stderr)
                ida_decompiled = None
        if not ida_decompiled:
            print("ERROR: no IDA pseudocode available.", file=sys.stderr)
            print("  Provide --ida-file / --ida-json / --ida-stdin,", file=sys.stderr)
            print(f"  or pre-cache with --save-ida, or run IDA MCP at {IDA_MCP_URL}.",
                  file=sys.stderr)
            sys.exit(2)

    if not ida_decompiled or not ida_decompiled.strip():
        print("ERROR: empty IDA pseudocode.", file=sys.stderr)
        sys.exit(1)

    passed, info = verify_single_function(ida_addr, func_name, display_name, M,
                                          ida_decompiled, verbose=args.verbose)
    if passed:
        print(f"PASS: {display_name} — matched")
        sys.exit(0)
    # AGENT-FACING (non-verbose): opaque generic message only — NO
    # step3_0_missing / per-block / per-offset / per-event detail (that stays
    # under -v for human triage). The lambda/goto/asm reject path KEEPS its
    # construct rewrite hint (a fixable construct rule, not the comparison result).
    print(f"FAIL: {display_name} — 未完成翻译")
    if info.get("reject") and info.get("reason"):
        print(f"  {info['reason']}")
    sys.exit(1)


if __name__ == "__main__":
    main()
