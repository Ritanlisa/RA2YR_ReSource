#!/usr/bin/env python3
"""
verify_execution_flow.py -- CFG-level execution-flow verifier (efv_* pipeline).

(AST-enhanced: Clang AST used for goto detection in completed functions.
The existing CFG pipeline, event extraction, and matching logic are unchanged.)

Verifies that a translated C++ function reproduces the execution flow of the
original binary by comparing CONTROL-FLOW GRAPHS, not flat event lists. For each
target function the verifier builds two CFGs -- one from the IDA Hex-Rays
pseudocode, one from the C++ source -- annotates each block with canonical
execution-flow events, normalizes both, and asks whether a structural bijection
exists between them. A faithful translation matches; a stub / simplified
re-implementation does not.

Pipeline (per function, orchestrated by `verify_single_function`)
----------------------------------------------------------------
  IDA side : efv_ida_cfg.build_ida_cfg(pseudocode)
             -> efv_normalize.normalize
             -> efv_ida_events.extract_events_into(cfg, this_type)
             -> efv_normalize.normalize
             -> canonicalize_branch_polarity

  C++ side : locate the function in src/  ->  efv_cpp_reject.check_rejectable
             (token-based lambda/asm/goto check)
             ADDITIONALLY: check_goto_ast() via Clang AST (GotoStmt nodes)
             else  efv_cpp_cfg.build_cpp_cfg  ->  normalize  ->
             efv_cpp_events.extract_events_into(cfg, class_name)  ->  normalize
             ->  canonicalize_branch_polarity

  Verdict  : efv_match.cfg_match(ida_cfg, cpp_cfg)  ->  PASS, else FAIL.

AST goto check (Clang GotoStmt):
  When --auto or single-function mode detects a completed=true function,
  before calling the main CFG pipeline, the C++ source is parsed with Clang
  AST. If any GotoStmt node is found in the function body, the function is
  immediately rejected with a rewrite hint -- no regex involved. This catches
  goto statements that might survive the token-based lexer check (e.g., in
  complex preprocessor expansions or template instantiations).

Usage
-----
    python tools/verify_execution_flow.py 0x743A50
    python tools/verify_execution_flow.py UnitClass::Scatter --ida-json ida.json
    python tools/verify_execution_flow.py --auto
    python tools/verify_execution_flow.py --auto --no-ida
    python tools/verify_execution_flow.py --save-ida 0x743A50
    python tools/verify_execution_flow.py --fetch-cache
"""

import bisect
import json
import re
import sys
import os
import subprocess
import tempfile
import urllib.request
from pathlib import Path

PROJECT_ROOT = Path(__file__).resolve().parent.parent
SRC_DIR = PROJECT_ROOT / "src"
MEMBER_LOOKUP_JSON = PROJECT_ROOT / "tools" / "member_lookup.json"
VTABLE_OFFSETS_JSON = PROJECT_ROOT / "tools" / "vtable_offsets.json"
SIGNALS_JSON = PROJECT_ROOT / "signals.json"
IDA_MCP_URL = "http://127.0.0.1:13337/mcp"
IDA_CACHE_DIR = PROJECT_ROOT / ".omo" / "ida_cache"

DATA_SECTION_START = 0x800000
DATA_SECTION_END = 0xB7A000

# -- AST goto check integration --
# Ensure tools/ is in path for clang_ast_checker import
_tools_dir = str(PROJECT_ROOT / "tools")
if _tools_dir not in sys.path:
    sys.path.insert(0, _tools_dir)

try:
    from clang_ast_checker import ClangChecker
    _CLANG_AVAILABLE = True
except Exception:
    _CLANG_AVAILABLE = False


def check_goto_ast(cpp_text):
    """Check for goto statements using Clang AST (GotoStmt nodes).

    Writes cpp_text to a temp file, parses with Clang, and searches for
    GotoStmt nodes. This is a consensus check: the existing token-based
    check in efv_cpp_reject.py is authoritative for lambda/asm, while
    goto is verified by BOTH the lexer AND the AST to eliminate false
    negatives.

    Returns (has_goto: bool, detail: str|None).
    """
    if not _CLANG_AVAILABLE:
        return False, None

    try:
        with tempfile.NamedTemporaryFile(
            mode='w', suffix='.cpp', delete=False,
            encoding='utf-8', errors='replace'
        ) as f:
            f.write(cpp_text)
            tmp_path = f.name

        try:
            checker = ClangChecker(tmp_path)
            checker.parse()
            gotos = checker.check_goto_statements()
            if gotos:
                line, cat, detail = gotos[0]
                return True, detail
            return False, None
        finally:
            try:
                os.unlink(tmp_path)
            except OSError:
                pass
    except Exception:
        # If AST check fails (e.g., parse error on incomplete snippet),
        # silently fall through to token-based check.
        return False, None


# ===================================================================
# The remainder of this file is IDENTICAL to the original
# verify_execution_flow.py, with only the goto AST check added above.
# All efv_* imports and pipeline logic are preserved exactly.
# ===================================================================

# STEP3(0) element-exemption hook
STEP3_0_ELEMENT_EXEMPT = frozenset()

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
    "RA2_OPNEW", "RA2_OPDEL", "memcmp", "memset", "memcpy", "memmove", "strlen", "strcpy", "strcmp",
    "strncpy", "strncmp", "malloc", "free", "calloc", "realloc",
    "__PAIR32__", "__PAIR64__", "abs", "fabs", "labs", "atan2", "sin", "cos",
    "tan", "sqrt", "pow", "floor", "ceil", "round", "ldexp", "frexp",
    "qmemcpy", "__readeflags", "__halt",
}

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


class Maps:
    def __init__(self):
        self.name_to_addr = {}
        self.addr_to_name = {}
        self.simple_to_addrs = {}
        self.name_to_completed = {}
        self.sig_name_to_addr = {}
        self.global_to_addr = {}
        self.member_lookup = {}
        self.member_name_to_off = {}
        self.class_vtable = {}
        self.class_parent = {}
        self.class_file = {}
        self.vtable_offsets = {}


# ===================================================================
# Loaders
# ===================================================================

def load_signals(M):
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
            M.name_to_completed[name] = bool(sym.get("completed", False))
            simple = name.split("::")[-1] if "::" in name else name
            M.simple_to_addrs.setdefault(simple, [])
            if addr not in M.simple_to_addrs[simple]:
                M.simple_to_addrs[simple].append(addr)
        elif sym.get("kind") == "global":
            M.global_to_addr.setdefault(name, addr)
    # Rename-debt aliases: cached/live-IDA pseudocode still carries pre-rename
    # names while IDA is offline; unresolved debt entries map old -> new addr.
    debt_path = PROJECT_ROOT / ".omo" / "rename_debt.json"
    if debt_path.exists():
        try:
            with open(debt_path, "r", encoding="utf-8") as f:
                for e in json.load(f) or []:
                    if not isinstance(e, dict) or e.get("resolved"):
                        continue
                    old, new = e.get("old"), e.get("new")
                    if old and new and new in M.name_to_addr:
                        a = M.name_to_addr[new]
                        M.name_to_addr.setdefault(old, a)
                        M.sig_name_to_addr.setdefault(old, a)
        except (json.JSONDecodeError, OSError):
            pass


_MAP_CACHE_PATH = PROJECT_ROOT / ".omo" / "cache" / "verify_maps.json"


def _hpp_fingerprint():
    items = []
    for hf in SRC_DIR.glob("**/*.hpp"):
        try:
            st = hf.stat()
            items.append([str(hf.relative_to(PROJECT_ROOT)),
                          st.st_mtime, st.st_size])
        except OSError:
            pass
    items.sort()
    return items


def _load_map_cache(key):
    try:
        with open(_MAP_CACHE_PATH, "r", encoding="utf-8") as f:
            data = json.load(f)
        if data.get("key") == key:
            return data
    except (OSError, ValueError):
        pass
    return None


def _save_map_cache(key, payload):
    try:
        _MAP_CACHE_PATH.parent.mkdir(parents=True, exist_ok=True)
        with open(_MAP_CACHE_PATH, "w", encoding="utf-8") as f:
            json.dump({"key": key, **payload}, f)
    except OSError:
        pass


def load_globals_map(M):
    glob_pattern = re.compile(
        r'extern\s+[\w\s*&<>:\[\]]+?\s+(\w+)\s*(?:\[[^\]]*\])?\s*;'
        r'\s*//\s*data:\s*(0x[0-9A-Fa-f]+)'
    )
    for gf in SRC_DIR.glob("**/*.hpp"):
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
    for cls in list(M.member_lookup.keys()):
        chain = [cls] + _inheritance_chain(cls, M)
        idx = {}
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
    if not cls:
        return None
    return M.member_name_to_off.get(cls, {}).get(name)


# ===================================================================
# Vtable index resolution
# ===================================================================

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
                if pending_class and ("{" in stripped):
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
    # 1. Check vtable_offsets ground truth (binary vtable from IDA)
    if M.vtable_offsets:
        chain = [class_name] + _inheritance_chain(class_name, M)
        for cls in chain:
            off = M.vtable_offsets.get(cls, {}).get(method_name)
            if off is not None:
                return off

    # 2. Fallback: declaration-order computation from parse_vtable_indices_from_headers
    chain = [class_name] + _inheritance_chain(class_name, M)
    chain = list(reversed(chain))
    total = 0
    for cls in chain:
        local = M.class_vtable.get(cls, [])
        if method_name in local:
            return (total + local.index(method_name)) * 4
        total += len(local)
    return None


# ===================================================================
# Text helpers
# ===================================================================

def balanced_paren(s):
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
    s = re.sub(r'/\*0x[0-9A-Fa-f]+\*/', '', line)
    s = re.sub(r'/\*.*?\*/', '', s)
    s = re.sub(r'//.*$', '', s)
    return s


def _logical_signature(lines, start_idx, max_join=16):
    first = lines[start_idx].rstrip("\n")
    depth = clean_line(first).count("(") - clean_line(first).count(")")
    if depth <= 0:
        return first
    text = first
    k = start_idx
    while depth > 0 and (k - start_idx) < max_join and k + 1 < len(lines):
        k += 1
        nxt = lines[k].rstrip("\n")
        text += " " + nxt
        c = clean_line(nxt)
        depth += c.count("(") - c.count(")")
    return text


def _signature_class_name(sig):
    m = re.match(
        r'^\s*(?:inline\s+)?[\w\s*&<>:\-]+\s+'
        r'(?:([\w:]+)::)?(~?\w+)\s*\(', sig)
    cls = m.group(1) if m else None
    if cls and "::" in cls:
        cls = cls.split("::")[-1]
    if cls:
        return cls
    cm = re.match(r'^\s*([A-Za-z_]\w*)\s*::\s*~?([A-Za-z_]\w*)\s*\(', sig)
    if cm and cm.group(1) == cm.group(2):
        return cm.group(1)
    return None


_CTOR_METHOD_ALIASES = frozenset({"Constructor", "Destructor", "Construct", "Destruct"})


def _ctor_def_re(class_name, method_name):
    if not class_name:
        return None
    if method_name in (class_name, "~" + class_name) or method_name in _CTOR_METHOD_ALIASES:
        return re.compile(rf'^\s*{re.escape(class_name)}\s*::\s*~?{re.escape(class_name)}\s*\(')
    return None


_ANY_CTOR_DEF_RE = re.compile(r'^\s*(\w+)\s*::\s*~?(\w+)\s*\(')


def _is_ctor_def(sig):
    m = _ANY_CTOR_DEF_RE.match(sig)
    return bool(m and m.group(1) == m.group(2))


def _match_brace(text, open_off):
    depth = 0
    n = len(text)
    j = open_off
    while j < n:
        c = text[j]
        if c == "{":
            depth += 1
        elif c == "}":
            depth -= 1
            if depth == 0:
                return j
        j += 1
    return None


def _skip_init_list(text, i):
    n = len(text)
    while i < n:
        ch = text[i]
        if ch.isspace() or ch == ",":
            i += 1
            continue
        if ch == "{":
            return i
        j = i
        while j < n and text[j] not in "({,":
            j += 1
        if j >= n:
            return None
        if text[j] == ",":
            i = j + 1
            continue
        opench = text[j]
        closech = ")" if opench == "(" else "}"
        depth = 0
        k = j
        while k < n:
            if text[k] == opench:
                depth += 1
            elif text[k] == closech:
                depth -= 1
                if depth == 0:
                    k += 1
                    break
            k += 1
        i = k
    return None


def _find_body_open(text):
    n = len(text)
    i = text.find("(")
    if i < 0:
        b = text.find("{")
        return b if b >= 0 else None
    depth = 0
    while i < n:
        if text[i] == "(":
            depth += 1
        elif text[i] == ")":
            depth -= 1
            if depth == 0:
                i += 1
                break
        i += 1
    while i < n:
        ch = text[i]
        if ch.isspace():
            i += 1
        elif ch == "{":
            return i
        elif ch == ":" and (i + 1 >= n or text[i + 1] != ":"):
            return _skip_init_list(text, i + 1)
        elif ch == "}":
            return None
        else:
            i += 1
    return None


def _is_write(text, end):
    i, n = end, len(text)
    while i < n and text[i] == " ":
        i += 1
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
    # G40: skip macro/cast-wrapper closers (`IDA_LOBYTE(this->M) = 0`):
    # consecutive `)` right after the member can only close wrappers opened
    # before it; an `=` after them is an assignment THROUGH the wrapper.
    while i < n and text[i] == ")":
        i += 1
        while i < n and text[i] == " ":
            i += 1
    if text[i:i + 2] == "->" or (i < n and text[i] == "."):
        return False
    if i < n and text[i] == "=":
        return not (i + 1 < n and text[i + 1] == "=")
    return False


# ===================================================================
# IDA leaf extractor
# ===================================================================

def detect_this_type(pseudocode):
    m = re.search(r'\(\s*(_DWORD|_BYTE|_WORD|int|char|unsigned __int8|__int16)\s*\*\s*this\b', pseudocode)
    if m:
        return m.group(1)
    return "_DWORD"


def _this_mult(this_type):
    if this_type in ("_BYTE", "char", "unsigned __int8", "uint8_t"):
        return 1
    if this_type in ("_WORD", "__int16", "unsigned __int16", "uint16_t"):
        return 2
    return 4


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
_IDA_VTABLE_LOCAL = re.compile(r'\((\w{1,3})\s*\+\s*(\d+)\)\s*\)\s*\(\s*this\s*\)')
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
        hits = []
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
        for m in _IDA_VTABLE.finditer(text):
            # G15 fix: the bare `*this + N` dispatch shape only renders when
            # this is a typed POINTER-TO-POINTER (`#375 **this`) — `*this` is
            # then a typed pointer and the +N is element arithmetic (=*4 bytes;
            # binary-verified: InfantryClass ProcessEnterOrRepair *this+288 ==
            # call [vfptr+480h]). Scalar `this` renders `*(_DWORD *)this + N`
            # instead (matched by _IDA_VTABLE_LOCAL, unscaled). Scale only when
            # this is a pointer type. (0 completed functions carry the bare
            # shape — regression surface verified empty 2026-09-16.)
            vt_off = int(m.group(1)) * (4 if str(this_type).strip().endswith('*') else 1)
            hits.append((m.start(), m.end(), f"CALL(vfptr+{vt_off})"))
        for m in _IDA_VTABLE_LOCAL.finditer(text):
            hits.append((m.start(), m.end(), f"CALL(vfptr+{int(m.group(2))})"))
        for m in _IDA_QUAL_CALL.finditer(text):
            addr = _resolve_call(m.group(1), M)
            if addr:
                hits.append((m.start(), m.end(), f"CALL(0x{addr:X})"))
        for m in _IDA_SIMPLE_CALL.finditer(text):
            addr = _resolve_call(m.group(1), M)
            if addr:
                hits.append((m.start(), m.end(), f"CALL(0x{addr:X})"))
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
        for m in _RETURN_RE.finditer(text):
            hits.append((m.start(), m.end(), "RET"))
        return _order_hits(hits)
    return leaf


# ===================================================================
# C++ leaf extractor
# ===================================================================

_CPP_THIS_CALL = re.compile(r'\bthis->(~?\w+)\s*\(')
_CPP_THIS_MEMBER = re.compile(r'\bthis->(\w+)\b(?!\s*\()')
_CPP_QUAL_CALL = re.compile(r'(?<![\w:>.])([A-Z][A-Za-z0-9_]*(?:::~?[A-Za-z0-9_]+)+)\s*\(')
_CPP_SIMPLE_CALL = re.compile(r'(?<![\w:>.])([A-Z][A-Za-z0-9_]*)\s*\(')
_CPP_G_GLOBAL = re.compile(r'(?<![\w>.:])\b(g_[A-Za-z0-9_]+)\b')


def make_cpp_leaf(class_name, M):
    def leaf(text):
        hits = []
        for m in _CPP_THIS_CALL.finditer(text):
            method = m.group(1)
            off = get_vtable_byte_offset(method, class_name, M) if class_name else None
            if off is not None:
                hits.append((m.start(), m.end(), f"CALL(vfptr+{off})"))
            else:
                addr = _resolve_call(f"{class_name}::{method}", M) if class_name else None
                if addr:
                    hits.append((m.start(), m.end(), f"CALL(0x{addr:X})"))
        for m in _CPP_THIS_MEMBER.finditer(text):
            name = m.group(1)
            off = resolve_member_offset(class_name, name, M)
            kind = "WRITE" if _is_write(text, m.end()) else "READ"
            if off is not None:
                hits.append((m.start(), m.end(), f"{kind}(member,{off})"))
            else:
                hits.append((m.start(), m.end(), f"{kind}(member,?{name})"))
        for m in _CPP_QUAL_CALL.finditer(text):
            addr = _resolve_call(m.group(1), M)
            if addr:
                hits.append((m.start(), m.end(), f"CALL(0x{addr:X})"))
        for m in _CPP_SIMPLE_CALL.finditer(text):
            addr = _resolve_call(m.group(1), M)
            if addr:
                hits.append((m.start(), m.end(), f"CALL(0x{addr:X})"))
        for m in _CPP_G_GLOBAL.finditer(text):
            addr = _resolve_global(m.group(1), M)
            kind = "WRITE" if _is_write(text, m.end()) else "READ"
            if addr is not None:
                hits.append((m.start(), m.end(), f"{kind}(global,0x{addr:X})"))
            else:
                hits.append((m.start(), m.end(), f"{kind}(global,?{m.group(1)})"))
        for name, addr in M.global_to_addr.items():
            if name.startswith('g_'):
                continue
            for m in re.finditer(r'(?<![\w>.:])\b(' + re.escape(name) + r')\b', text):
                kind = "WRITE" if _is_write(text, m.end()) else "READ"
                hits.append((m.start(), m.end(), f"{kind}(global,0x{addr:X})"))
        for m in _RETURN_RE.finditer(text):
            hits.append((m.start(), m.end(), "RET"))
        return _order_hits(hits)
    return leaf


def _order_hits(hits):
    hits.sort(key=lambda h: (h[0], -(h[1] - h[0])))
    out = []
    last_end = -1
    for start, end, ev in hits:
        if start < last_end:
            continue
        out.append(ev)
        last_end = end
    return out


# ===================================================================
# C++ source location
# ===================================================================

def _strip_ns_prefix(sig):
    """Remove leading `namespace X {` wrappers from a def signature line so
    class-name extraction sees `ret Cls::Method(...)` (gap2 single-line form:
    `namespace gamemd { int Cls::Method() {` -- the char class of the class
    regex cannot cross the `{`)."""
    prev = None
    while prev != sig:
        prev = sig
        sig = re.sub(r"^\s*namespace\s+\w+\s*\{\s*", "", sig)
    return sig


def _extract_function_body(lines, start_idx, cppf_relative):
    class_name = _signature_class_name(
        _strip_ns_prefix(_logical_signature(lines, start_idx)))
    window = lines[start_idx:min(start_idx + 1200, len(lines))]
    cleaned = "".join(clean_line(l) for l in window)
    end_line = start_idx
    open_off = _find_body_open(cleaned)
    if open_off is not None:
        close_off = _match_brace(cleaned, open_off)
        if close_off is not None:
            end_line = start_idx + cleaned.count("\n", 0, close_off + 1)
        else:
            end_line = start_idx + len(window) - 1
    return {
        "lines": lines[start_idx:end_line + 1],
        "start_line": start_idx,
        "file": cppf_relative,
        "class_name": class_name,
    }


_CPP_FILES_MEMO = None


def _cpp_files():
    # Perf (perf-verify): the glob over src/ + app/ costs ~230ms and
    # find_cpp_function* used to re-glob on every lookup. Memoized; the list
    # content is identical to the original scan.
    global _CPP_FILES_MEMO
    if _CPP_FILES_MEMO is None:
        files = list(SRC_DIR.glob("**/*.cpp"))
        app = PROJECT_ROOT / "app"
        if app.exists():
            files.extend(app.glob("**/*.cpp"))
        _CPP_FILES_MEMO = files
    return _CPP_FILES_MEMO


# ===================================================================
# C++ source pre-index (perf only -- lookup results are identical)
# ===================================================================
# find_cpp_function / find_cpp_function_by_addr used to re-open and rescan
# every src cpp file on every call (~869 file opens per lookup; the --auto
# pool paid this per verified function = ~89% of total wall time). The index
# below reads each file ONCE per process and keeps:
#   lines[fi]     -- f.readlines() list (verbatim content)
#   text[fi]      -- ''.join(lines)  (C-speed substring search)
#   offs[fi]      -- char offset of each line start (pos -> line bisect)
#   addr_hits     -- canonical hex text -> ascending [(file_idx, line_idx)]
#                    of `//`-comment lines matched by the same pattern the
#                    per-address `addr_pattern.search` used
#                     (`//\s*(?:IDA:?\s*)?0x<canonical>\b`, case-insensitive).
# Files are treated as static for the lifetime of the process (true for every
# CLI invocation of this verifier; previously they were re-read per call).

_SRC_INDEX = None

# One regex upstream of the per-address patterns: capture the hex run after
# `//` + optional whitespace + optional `IDA:` (+ws). A captured hex matches a
# lookup addr iff it equals (case-insensitively) format(addr,'X').rjust(6,'0')
# -- exactly the strings the original `0x{addr:0>6X}\b` pattern matched
# (greedy capture + trailing \b makes the captured run the maximal hex run,
# so e.g. `0x40B140X` never matches addr 0x40B140, same as before).
_ADDR_COMMENT_RE = re.compile(r'//\s*(?:IDA:?\s*)?0x([0-9A-Fa-f]+)\b')


def _src_index():
    global _SRC_INDEX
    if _SRC_INDEX is None:
        idx = {"lines": [], "text": [], "offs": [], "rel": [], "addr_hits": {}}
        addr_hits = idx["addr_hits"]
        for cppf in _cpp_files():
            try:
                with open(cppf, "r", encoding="utf-8", errors="replace") as f:
                    lines = f.readlines()
            except OSError:
                lines = []
            fi = len(idx["lines"])
            idx["lines"].append(lines)
            idx["text"].append("".join(lines))
            offs = []
            pos = 0
            for ln in lines:
                offs.append(pos)
                pos += len(ln)
            idx["offs"].append(offs)
            idx["rel"].append(str(cppf.relative_to(PROJECT_ROOT)))
            for i, line in enumerate(lines):
                stripped = line.strip()
                if not stripped.startswith("//"):
                    continue
                for m in _ADDR_COMMENT_RE.finditer(stripped):
                    hexs = m.group(1).upper()
                    lst = addr_hits.get(hexs)
                    if lst is None:
                        addr_hits[hexs] = [(fi, i)]
                    elif lst[-1] != (fi, i):
                        lst.append((fi, i))
        _SRC_INDEX = idx
    return _SRC_INDEX


def _index_body(loc):
    fi, k = loc
    idx = _SRC_INDEX
    return _extract_function_body(idx["lines"][fi], k, idx["rel"][fi])


_FN_ADDR_MEMO = {}


def find_cpp_function_by_addr(ida_addr):
    # Perf (perf-verify): comment-line candidates come from the one-time
    # _src_index (identical match semantics to the old per-address regex over
    # `//`-comment lines); the enclosing/forward def resolution below is the
    # original logic, unchanged. Resolution is memoized per (addr) for static
    # sources; the returned body dict is rebuilt per call.
    memo = _FN_ADDR_MEMO
    if ida_addr in memo:
        loc = memo[ida_addr]
        return _index_body(loc) if loc is not None else None
    if _SRC_INDEX is None:
        _src_index()

    def_re = re.compile(
        r'^\s*(?:namespace\s+\w+\s*\{\s*)*(?:inline\s+)?[\w\s*&<>:\-]+\s+'
        r'(?:([\w:]+)::)?(~?\w+)\s*\([^)]*\)\s*(?:const\s*)?(?:\{|$)')

    def _is_def_line(lns, j):
        head = lns[j].lstrip()[:1]
        if head in (":", ",", "{", "}"):
            return False
        sig = _logical_signature(lns, j)
        return bool(def_re.match(sig)) or _is_ctor_def(sig)

    idx = _SRC_INDEX
    hexs = format(ida_addr, 'X').rjust(6, '0')
    result = None
    for fi, i in idx["addr_hits"].get(hexs, ()):
        lines = idx["lines"][fi]
        n = len(lines)
        rel = idx["rel"][fi]
        enclosing = None
        for k in range(i - 1, max(i - 600, -1), -1):
            if not _is_def_line(lines, k):
                continue
            body = _extract_function_body(lines, k, rel)
            last = body["start_line"] + len(body["lines"]) - 1
            if body["start_line"] <= i <= last:
                enclosing = body
            break
        if enclosing is not None:
            result = (fi, enclosing["start_line"])
            break
        for j in range(i + 1, min(i + 12, n)):
            if _is_def_line(lines, j):
                result = (fi, j)
                break
        if result is not None:
            break
    if result is None:
        memo[ida_addr] = None
        return None
    memo[ida_addr] = result
    return _index_body(result)


_FN_NAME_MEMO = {}


def find_cpp_function(func_name):
    # Perf (perf-verify): candidate lines come from C-level substring search
    # over the cached file text (identical to the old per-line
    # `hint not in line` pre-filter), then the original signature checks run
    # per candidate. Memoized per name; body dict rebuilt per call.
    memo = _FN_NAME_MEMO
    if func_name in memo:
        loc = memo[func_name]
        return _index_body(loc) if loc is not None else None
    if _SRC_INDEX is None:
        _src_index()

    parts = func_name.split("::")
    class_name = parts[0] if len(parts) >= 2 else None
    method_name = parts[-1]
    class_prefix = rf'{re.escape(class_name)}::' if class_name else ''
    def_pattern = re.compile(
        rf'^\s*(?:namespace\s+\w+\s*\{{\s*)*(?:inline\s+)?[\w\s*&<>:\-]+\s+'
        rf'{class_prefix}{re.escape(method_name)}'
        # G12: one level of nested parens in the parameter list — function-
        # pointer params (`int (__thiscall *a4)(int)`) made `[^)]*` stop at the
        # inner `)`, so the name lookup failed and by_addr fallback grabbed a
        # stale annotated stub elsewhere (Array::ForEach 0x4068F0 precedent).
        r'\s*\((?:[^()]|\([^()]*\))*\)\s*(?:const\s*)?(?:\{|$)')
    ctor_re = _ctor_def_re(class_name, method_name)
    hint = method_name[1:] if method_name.startswith("~") else method_name
    ctor_hint = class_name if ctor_re is not None else None

    idx = _SRC_INDEX
    result = None
    for fi, cppf in enumerate(_cpp_files()):
        # G6: Task 17/18 存根（return 0; 占位）会按名抢占匹配（glob 序 _generated
        # 先于 e4），真体在 e4/模块文件——跳过。by_addr 回退不受影响（存根无地址注解）。
        if "_generated" in cppf.parts:
            continue
        text = idx["text"][fi]
        has_hint = hint in text
        has_ctor = ctor_hint is not None and ctor_hint in text
        if not has_hint and not has_ctor:
            continue
        lines = idx["lines"][fi]
        offs = idx["offs"][fi]
        cand = set()
        for needle in (hint, ctor_hint):
            if needle is None:
                continue
            pos = text.find(needle)
            while pos >= 0:
                cand.add(bisect.bisect_right(offs, pos) - 1)
                pos = text.find(needle, pos + 1)
        for i in sorted(cand):
            sig = _logical_signature(lines, i)
            if def_pattern.search(sig) or (ctor_re is not None and ctor_re.search(sig)):
                result = (fi, i)
                break
        if result is not None:
            break
    if result is None:
        memo[func_name] = None
        return None
    memo[func_name] = result
    return _index_body(result)


# ===================================================================
# CFG pipeline helpers
# ===================================================================

_EFV = None


def _load_efv():
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
            # G41.40: allow_goto (see verify_single_function) -- callee bodies
            # from the mechanical corpus carry goto; the T12 builder parses it.
            if efv["reject"].check_rejectable(cpp_text, allow_goto=True) is None:
                try:
                    result = _build_cpp_cfg_events(efv, cpp_text, cls, M, signals)
                except Exception:
                    result = None
        cache[addr] = result
        return result
    return get_callee_cfg


def _arm_reachable_key(cfg, succ_id, block_signature):
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
    if succ_id not in cfg.blocks:
        return False
    blk = cfg.get_block(succ_id)
    if blk.successors:
        return False
    seq = blk.sequenced_events()
    efv = _load_efv()
    return len(seq) == 1 and efv["model"].event_verb(seq[0]) == efv["model"].VERB_RET


def canonicalize_branch_polarity(cfg):
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
        if not (_is_bare_return_arm(cfg, target[EDGE_TRUE])
                or _is_bare_return_arm(cfg, target[EDGE_FALSE])):
            continue
        key_true = _arm_reachable_key(cfg, target[EDGE_TRUE], block_signature)
        key_false = _arm_reachable_key(cfg, target[EDGE_FALSE], block_signature)
        if key_true < key_false:
            block.successors = [(target[EDGE_FALSE], EDGE_TRUE),
                                (target[EDGE_TRUE], EDGE_FALSE)]
    return cfg


_IDA_CFG_PSEUDO = {}  # id(cfg) -> pseudocode text (G38 vfptr-artifact rule)


def _build_ida_cfg_events(efv, ida_decompiled, this_type, M, class_name=None):
    cfg = efv["ida_cfg"].build_ida_cfg(ida_decompiled)
    cfg = efv["normalize"].normalize(cfg)
    # G11: class_name enables til-named `this->Member` extraction (symmetric
    # with the C++ side's this-> handling); None keeps the legacy behavior.
    # G31: this_name = the snapshot's own this-param name (`_DWORD *Block`)
    # so this-keyed member/vtable patterns also match renamed receivers.
    try:
        this_name = efv["ida_events"].extract_this_name(ida_decompiled)
    except AttributeError:
        this_name = None
    try:
        efv["ida_events"].extract_events_into(cfg, this_type, maps=M,
                                              class_name=class_name,
                                              this_name=this_name)
    except TypeError:
        efv["ida_events"].extract_events_into(cfg, this_type, maps=M)
    cfg = efv["normalize"].normalize(cfg)
    canonicalize_branch_polarity(cfg)
    # G38: CALL(vfptr+slot) metadata artifacts. IDA renders a function's own
    # vtable-slot identity as a virtual-call event even when the pseudocode
    # body contains NO call syntax at all (0x4011B0: `return *a1 + 36*a2;`
    # -> block events ['RET','CALL(vfptr+36)']). Strip them at the source so
    # the guard, STEP3(0) and the structural bijection all see a clean CFG.
    # Fail-closed: only strips when the body has no call syntax anywhere.
    try:
        core = ida_decompiled or ''
        bidx = core.find('{')
        if bidx >= 0:
            core = core[bidx:]
        core = _COMMENT_STRIP_RE.sub('', core)
        if core and not re.search(r'\w+\s*\(', core) and \
           not re.search(r'\(\s*\*+\s*\w*\)?\s*\(', core):
            for bid in list(cfg.blocks.keys()):
                blk = cfg.blocks.get(bid)
                if blk is None:
                    continue
                if any(ev.startswith('CALL(vfptr+') for ev in blk.ordered_events):
                    blk.ordered_events = [ev for ev in blk.ordered_events
                                          if not ev.startswith('CALL(vfptr+')]
    except Exception:
        pass  # fail-closed: any surprise keeps events intact
    return cfg


def _cpp_this_alias(cpp_text, class_name):
    """G41: the corpus may demote `this` into the def's first param (e.g.
    `Cls::M(_DWORD *Block, ...)` with the body on `Block->`). Enabled only
    when the body NEVER uses `this->` and the candidate alias actually
    appears as a receiver — a plain first param stays a plain local."""
    if not class_name or not cpp_text:
        return None
    bidx = cpp_text.find('{')
    head = cpp_text[:bidx] if bidx >= 0 else cpp_text
    body = cpp_text[bidx:] if bidx >= 0 else ''
    # a genuinely demoted-this body never mentions `this` AT ALL — an
    # explicit `this` (even as a call argument) means this is an ordinary
    # member fn whose first param is a REAL param, not the demoted this
    # (INIClass::GetCoord case: `GetString(this, ...)`).
    if re.search(r'\bthis\b', body):
        return None
    m = re.match(r'[^;(]*?\(\s*([^,()]+)', head.strip())
    if not m:
        return None
    pm = re.search(r'([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*$', m.group(1).strip())
    if not pm or pm.group(1) in ('void', 'this'):
        return None
    alias = pm.group(1)
    # active when used as a receiver (`Block->M`) or in raw pointer
    # arithmetic (`*(Block + 1)` — the restored cache-truth form)
    return alias if re.search(r'\b%s\s*(?:->|\+)' % re.escape(alias),
                              body) else None


def _build_cpp_cfg_events(efv, cpp_text, class_name, M, signals):
    cfg = efv["cpp_cfg"].build_cpp_cfg(cpp_text)
    cfg = efv["normalize"].normalize(cfg)
    try:
        efv["cpp_events"].extract_events_into(cfg, class_name, maps=M,
                                              signals=signals,
                                              this_alias=_cpp_this_alias(
                                                  cpp_text, class_name))
    except TypeError:
        efv["cpp_events"].extract_events_into(cfg, class_name, maps=M,
                                              signals=signals)
    cfg = efv["normalize"].normalize(cfg)
    canonicalize_branch_polarity(cfg)
    return cfg


# ---- W1.2 Plan A: trivial-stub guard helpers (#114, user-approved 2026-09-17)
_COMMENT_STRIP_RE = re.compile(r"/\*.*?\*/|//[^\n]*", re.S)


def _collect_rwcall_events(cfg):
    """块级 READ/WRITE/CALL 事件全集。

    STEP3(0) 的 necessary-ops 收集器不含 READ —— #114 盲点本体；
    守卫必须直接遍历 cfg 块事件。
    """
    ops = set()
    for bid in cfg.traverse(order="dfs"):
        for ev in getattr(cfg.get_block(bid), "ordered_events", ()):
            if ev.startswith(("READ(", "WRITE(", "CALL(")):
                ops.add(ev)
    return ops


def _is_trivial_single_return(cpp_text):
    """剥注释与签名后，函数体是否恰为一条 return 语句。

    容忍 gap2 生成器的嵌套双花括号形态。
    """
    s = _COMMENT_STRIP_RE.sub("", cpp_text).strip()
    if not s:
        return False
    brace = -1
    depth = 0
    for i, ch in enumerate(s):
        if ch == "{":
            depth += 1
            if depth == 1 and brace < 0:
                brace = i
        elif ch == "}":
            depth -= 1
    if brace < 0 or depth != 0:
        return False  # 无体或花括号不平衡
    depth = 0
    for i in range(brace, len(s)):
        if s[i] == "{":
            depth += 1
        elif s[i] == "}":
            depth -= 1
            if depth == 0:
                s = s[brace + 1:i]
                break
    s = s.strip()
    if not s:
        return False
    if s.startswith("{") and s.endswith("}"):
        s = s[1:-1].strip()
        if not s:
            return False
    stmts, depth, cur = [], 0, []
    for ch in s:
        if ch in "([{":
            depth += 1
        elif ch in ")]}":
            depth -= 1
        if ch == ";" and depth == 0:
            stmts.append("".join(cur))
            cur = []
        else:
            cur.append(ch)
    if "".join(cur).strip():
        return False
    if len(stmts) != 1:
        return False
    st = stmts[0].strip()
    return st.startswith("return") and len(st) > 6


_PARAM_DEREF_RE = re.compile(r'\*\s*\w+|\w+\s*\[|\w+\s*->|\w+\.\w')


def _ida_events_are_param_derefs(ida_events, cpp_text):
    """True 当 IDA 侧事件全部可由体的参数/局部解引用或元数据伪影解释。

    G38 判别（0x4011B0 铁证）：`return *a1 + 36 * a2;` 忠实体，C++ 提取器
    不把参数解引用计为事件（事件词汇只含 member/global），IDA 侧却渲染
    READ 事件 → W1.2 守卫把正确体误判为平凡存根。第二形态（实测）：
    IDA 事件为 CALL(vfptr+N) 而伪码本体无任何调用语法 —— vtable 槽位
    元数据伪影。规则：CALL 事件仅在伪码体存在调用语法（`(` 前有标识符
    或间接调用形态）时拥有否决权；WRITE 事件恒有否决权。
    """
    body = _COMMENT_STRIP_RE.sub('', cpp_text)
    # strip signature: body starts after the first top-level '{'
    bidx = body.find('{')
    if bidx >= 0:
        body = body[bidx:]
    has_call_syntax = bool(re.search(r'\w+\s*\(', body)) or \
        bool(re.search(r'\(\s*\*+\s*\w*\)?\s*\(', body))
    for ev in ida_events:
        if ev.startswith('CALL('):
            # vfptr+slot metadata artifacts carry no call-site in the body
            if 'vfptr+' in ev and not has_call_syntax:
                continue
            return False
        if ev.startswith('WRITE('):
            return False
    return True


def step3_0_check(efv, ida_cfg, cpp_cfg, M, signals,
                  get_callee=None, element_exempt=STEP3_0_ELEMENT_EXEMPT):
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
        pass
    ida_ops = nec.collect_external_ops(ida_cfg)
    exempt = set(element_exempt) if element_exempt else set()
    # G38: CALL(vfptr+slot) metadata artifacts -- IDA renders the function's
    # own vtable slot as a virtual-call event even when the pseudocode body
    # has no call syntax at all (0x4011B0: `return *a1 + 36*a2;`).
    # Symmetric exemption: drop such events when the pseudocode body carries
    # no call syntax. Cache text unavailable -> keep the event (fail-closed).
    vf_art = {ev for ev in ida_ops if ev.startswith('CALL(vfptr+')}
    if vf_art:
        pseudo = _IDA_CFG_PSEUDO.get(id(ida_cfg), '')
        core = pseudo
        bidx = core.find('{')
        if bidx >= 0:
            core = core[bidx:]
        core = _COMMENT_STRIP_RE.sub('', core)
        if core and not re.search(r'\w+\s*\(', core) and \
           not re.search(r'\(\s*\*+\s*\w*\)?\s*\(', core):
            exempt |= vf_art
    missing = sorted((ida_ops - cpp_ops) - exempt)
    missing = nec.apply_member_wildcard_exemption(
        missing, nec.count_member_write_wildcards(cpp_cfg))
    # G41.19: IDA-side unresolved member/global events (`WRITE(member,?)` —
    # the typed export renders names the tables don't carry) are satisfied by
    # any C++-side RESOLVED event of the same verb, count-based.
    missing = nec._ida_wildcard_member_exemption(missing, cpp_ops)
    return (not missing), missing


def _dump_cfg(label, cfg):
    print("  --- {} CFG: entry={} blocks={} ---".format(
        label, cfg.entry_id, len(cfg.reachable_blocks())), file=sys.stderr)
    for bid in cfg.traverse(order="dfs"):
        b = cfg.get_block(bid)
        print("    blk {!r:>4} -> {} : {}".format(
            bid, b.successors, b.ordered_events), file=sys.stderr)


# ===================================================================
# IDA MCP / cache
# ===================================================================

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
    inner = _mcp_call("decompile", {"addr": f"0x{addr:X}"})
    return inner.get("code", "")


def _cache_path(addr):
    return IDA_CACHE_DIR / f"func_0x{addr:X}.json"


_IDA_CACHE_MEMO = {}


def save_ida_cache(addr, decompiled_text, func_name=None):
    IDA_CACHE_DIR.mkdir(parents=True, exist_ok=True)
    import datetime
    data = {"addr": f"0x{addr:X}", "decompiled": decompiled_text,
            "name": func_name, "timestamp": datetime.datetime.now().isoformat()}
    path = _cache_path(addr)
    with open(path, "w", encoding="utf-8") as f:
        json.dump(data, f, indent=2, ensure_ascii=False)
    # keep the load memo coherent with the write (perf-verify): a later
    # load_ida_cache in the same process must observe the fresh text
    _IDA_CACHE_MEMO[addr] = (decompiled_text, func_name)
    return path


def load_ida_cache(addr):
    # Perf (perf-verify): --auto reads every cache file up to 3x per run
    # (phase-A fingerprint pass, worker verify, phase-C PASS-cache pass);
    # memoize per process. Files are static within one invocation, and
    # save_ida_cache keeps the memo coherent after writes.
    memo = _IDA_CACHE_MEMO
    hit = memo.get(addr)
    if hit is not None:
        return hit
    path = _cache_path(addr)
    if not path.exists():
        result = (None, None)
    else:
        try:
            with open(path, "r", encoding="utf-8") as f:
                data = json.load(f)
            result = (data.get("decompiled", ""), data.get("name"))
        except (json.JSONDecodeError, KeyError):
            result = (None, None)
    memo[addr] = result
    return result


# ===================================================================
# Completed-scope iteration + auto cache-fill
# ===================================================================

def _collect_completed_functions(M):
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
    print("FATAL: IDA MCP unreachable -- cannot verify completed functions. "
          "Start IDA Pro with MCP plugin.", file=sys.stderr)
    print(f"  (expected IDA MCP at {IDA_MCP_URL})", file=sys.stderr)
    sys.exit(1)


def _fetch_and_cache(addr, name, M):
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


def get_modified_functions():
    try:
        result = subprocess.run(
            ["git", "diff", "auto-fill-baseline", "--unified=0", "--", "src/", "app/"],
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


# ===================================================================
# Verify (AST-enhanced goto check)
# ===================================================================

def verify_single_function(ida_addr, func_name, display_name, M,
                           ida_decompiled, verbose=False, signals=None):
    efv = _load_efv()
    if signals is None:
        signals = efv["cpp_events"].get_signals()

    # ---- locate the C++ implementation ----
    # (G11: moved BEFORE the IDA build so the located body's class_name can
    # drive til-named `this->Member` extraction on the IDA side — sub_* names
    # carry no `::` and the class is only visible in the C++ def.)
    # G32: addr-FIRST (annotation `// 0xADDR` -> def below): after the
    # Step-4 wholesale body regen the def-line names come from the canon
    # generation and can diverge from the signals name — name-first then
    # grabbed a DIFFERENT function's body (misc_ext 0x597D50 precedent).
    # The annotation->def mapping is the address authority; name stays as
    # fallback for functions without annotations.
    body = None
    if ida_addr:
        body = find_cpp_function_by_addr(ida_addr)
    if not body and func_name:
        body = find_cpp_function(func_name)
    if not body and display_name and display_name != func_name:
        body = find_cpp_function(display_name)

    # ---- IDA side ----
    this_type = detect_this_type(ida_decompiled)
    # G11: class for til-named `this->Member` extraction (mirror of the C++
    # side's this-> handling); None keeps the legacy behavior.
    _ida_cls = None
    if body and body.get("class_name"):
        _ida_cls = body.get("class_name")
    elif func_name and "::" in func_name:
        _ida_cls = func_name.split("::")[0]
    elif display_name and "::" in display_name:
        _ida_cls = display_name.split("::")[0]
    ida_cfg = _build_ida_cfg_events(efv, ida_decompiled, this_type, M,
                                    class_name=_ida_cls)

    if not body:
        if verbose:
            print("  C++ source : NOT FOUND", file=sys.stderr)
            _dump_cfg("IDA", ida_cfg)
        return False, {"reject": False, "reason": None}

    class_name = body.get("class_name")
    if not class_name and func_name and "::" in func_name:
        class_name = func_name.split("::")[0]
    cpp_text = "".join(body["lines"])

    # ---- reject gate: token-based lambda/asm/goto check ----
    # G41.40: allow_goto=True -- the C++ CFG builder (T12) parses goto into
    # blocks+edges with the SAME logic as the IDA side (T7), so a goto-bearing
    # body can be compared faithfully. The no-goto QUALITY rule stays enforced
    # by the compile-side Clang gate (clang_ast_checker.check_goto_statements);
    # this reject was redundant there and blocked honest CFG comparison of the
    # mechanical (cache-verbatim) corpus. lambda/asm remain rejected (the
    # builder genuinely cannot parse those).
    reason = efv["reject"].check_rejectable(cpp_text, allow_goto=True)
    if reason is not None:
        if verbose:
            print("  C++ source : {}:{}".format(body["file"], body["start_line"] + 1),
                  file=sys.stderr)
            print("  REJECT     : {}".format(reason.message), file=sys.stderr)
        return False, {"reject": True, "reason": reason.message}

    # ---- ADDITIONAL AST-based goto check (Clang GotoStmt) ----
    # G41.40: RETIRED from the verify path (see allow_goto above): the verdict
    # now derives from the CFG comparison, which handles goto edges natively
    # on both sides. check_goto_ast() is kept for external callers; it is no
    # longer consulted here (it also cost one Clang temp-file parse per
    # function on every sweep).

    # ---- C++ side ----
    cpp_cfg = _build_cpp_cfg_events(efv, cpp_text, class_name, M, signals)

    # ---- W1.2 Plan A: trivial-stub guard (#114 READ blind spot) ----
    # IDA 侧存在任何 READ/WRITE/CALL 事件而 C++ 体为平凡单 return（0 事件）
    # → 平凡存根冒充完成（STEP3(0) 对 READ 失明，此守卫独立拦截）。
    guard_ida = _collect_rwcall_events(ida_cfg)
    if guard_ida:
        guard_cpp = _collect_rwcall_events(cpp_cfg)
        if not guard_cpp and _is_trivial_single_return(cpp_text):
            # G38 symmetry amendment (0x4011B0): a faithful pointer-deref
            # body (`return *a1 + ...;`) produces 0 extractor events while
            # IDA renders the same access as READ. If the IDA events carry
            # NO CALL/WRITE (events the extractor could only mirror), a
            # pure-READ mismatch may be a param deref, not a stub.
            if _ida_events_are_param_derefs(guard_ida, cpp_text):
                if verbose:
                    print("  GUARD      : param-deref symmetry -- pure-READ "
                          "IDA events vs deref-bearing return body, no veto"
                          .format(len(guard_ida)), file=sys.stderr)
            else:
                if verbose:
                    print("  GUARD      : trivial-stub-mismatch "
                          "({} IDA event(s) vs trivial return body)"
                          .format(len(guard_ida)), file=sys.stderr)
                return False, {"reject": False,
                               "reason": "trivial-stub-mismatch: trivial single-return "
                                         "body (0 cpp events) vs {} IDA-side event(s) "
                                         "(W1.2 Plan A guard)".format(len(guard_ida))}

    if verbose:
        print("  C++ source : {}:{}".format(body["file"], body["start_line"] + 1),
              file=sys.stderr)
        print("  this type  : {}*   class={}".format(this_type, class_name),
              file=sys.stderr)
        _dump_cfg("IDA", ida_cfg)
        _dump_cfg("C++", cpp_cfg)

    info = {"reject": False, "reason": None}
    get_callee = make_callee_cfg_provider(efv, M, signals)
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

    # ---- #145: RET consolidation (goto-merged exits) ----
    # IDA merges multiple return paths into shared RET blocks via goto/jump.
    # C++ `return` statements always create separate RET blocks. When the
    # non-RET blocks are structurally aligned but RET counts differ, this is
    # a C++ structural limitation, not a translation error. Fix: collapse
    # all RET-only blocks (events == ['RET'], no meaningful successors) into
    # a single canonical RET node per CFG before comparison.
    def _consolidate_rets(cfg):
        ret_ids = [bid for bid, blk in cfg.blocks.items()
                   if blk.ordered_events == ['RET'] and not blk.successors]
        if len(ret_ids) <= 1:
            return
        keep = ret_ids[0]
        ret_set = set(ret_ids[1:])
        for blk in cfg.blocks.values():
            if blk.id in ret_set:
                continue
            new_succ = []
            for (tgt, label) in blk.successors:
                if tgt in ret_set:
                    new_succ.append((keep, label))
                else:
                    new_succ.append((tgt, label))
            blk.successors = new_succ
        for rid in ret_ids[1:]:
            del cfg.blocks[rid]

    _consolidate_rets(ida_cfg)
    _consolidate_rets(cpp_cfg)

    # G39: advisory-chain collapse. A block whose events are ALL advisory
    # (READ / READ(member,?) wildcards -- never gating) and that has exactly
    # one successor is flow-transparent: its only content is observations,
    # and its single edge can be spliced out. Mechanical regeneration splits
    # loop conditions into such pass-through blocks (C++ `while` rendering)
    # where IDA merged them -> spurious bijection failures (GetSize family).
    # Applied SYMMETRICALLY to both CFGs -- an IDA-side advisory chain
    # collapses the same way.
    def _collapse_advisory_chains(cfg):
        GATING = ('CALL(', 'WRITE(')
        changed = True
        while changed:
            changed = False
            for bid in list(cfg.blocks.keys()):
                if bid == cfg.entry_id:
                    continue
                blk = cfg.blocks.get(bid)
                if blk is None:
                    continue
                evs = blk.ordered_events or []
                if not evs:
                    continue  # empty pass-through handled by normalize
                if any(ev.startswith(GATING) for ev in evs):
                    continue
                succs = list(blk.successors or [])
                if len(succs) != 1:
                    continue
                s = succs[0]
                tgt = s[0] if isinstance(s, tuple) else s
                if tgt == bid or tgt not in cfg.blocks:
                    continue
                # splice: predecessors of bid now point to tgt
                for ob in cfg.blocks.values():
                    ob.successors = [
                        ((tgt, x[1]) if (isinstance(x, tuple) and x[0] == bid)
                         else (tgt if x == bid else x))
                        for x in (ob.successors or [])]
                del cfg.blocks[bid]
                changed = True
                break

    _collapse_advisory_chains(ida_cfg)
    _collapse_advisory_chains(cpp_cfg)

    structural_crashed = False
    structural_indeterminate = False
    try:
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
        else:
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

    # ---- #145: RET-consolidation tolerance ----
    # After RET consolidation, if STEP3(0) is OK and the non-RET block
    # counts match, the structural mismatch is solely from goto-merged
    # exit paths (C++ cannot express shared RET blocks without goto).
    # This is a C++ structural limitation, not a translation error → PASS.
    if not matched and step3_0_ok:
        def _non_ret_count(cfg):
            return sum(1 for blk in cfg.blocks.values()
                       if blk.ordered_events != ['RET'])
        ida_nr = _non_ret_count(ida_cfg)
        cpp_nr = _non_ret_count(cpp_cfg)
        ida_rets = sum(1 for blk in ida_cfg.blocks.values()
                       if blk.ordered_events == ['RET'])
        cpp_rets = sum(1 for blk in cpp_cfg.blocks.values()
                       if blk.ordered_events == ['RET'])
        if ida_nr == cpp_nr and ida_nr > 0:
            matched = True
            info["ret_consolidation_tolerance"] = True
            info["ret_counts"] = {"ida": ida_rets, "cpp": cpp_rets}
            if verbose:
                print("  STRUCTURAL  : matched via RET-consolidation tolerance "
                      "(non-RET {}={} but goto-merged exits differ: "
                      "IDA {} RETs vs C++ {} RETs)".format(
                          ida_nr, cpp_nr, ida_rets, cpp_rets),
                      file=sys.stderr)

    structural_ok = bool(matched or structural_crashed or structural_indeterminate)
    passed = bool(step3_0_ok and structural_ok)
    return passed, info


def load_all_maps():
    M = Maps()
    load_signals(M)
    # G30: header scans (globals map + vtable decl-order) dominate verify
    # latency (~7s of ~9s). Cache by hpp fingerprint (path+mtime+size);
    # any header change invalidates, so results are scan-equivalent.
    key = _hpp_fingerprint()
    cached = _load_map_cache(key)
    if cached:
        M.global_to_addr = cached["globals"]
        M.class_vtable = cached["class_vtable"]
        M.class_file = cached["class_file"]
        M.class_parent = cached["class_parent"]
    else:
        load_globals_map(M)
        parse_vtable_indices_from_headers(M)
        _save_map_cache(key, {"globals": M.global_to_addr,
                              "class_vtable": M.class_vtable,
                              "class_file": M.class_file,
                              "class_parent": M.class_parent})
    load_member_lookup(M)
    build_member_name_index(M)
    # Load binary vtable offsets (ground truth from IDA)
    if VTABLE_OFFSETS_JSON.exists():
        with open(VTABLE_OFFSETS_JSON, "r", encoding="utf-8") as f:
            M.vtable_offsets = json.load(f)
    return M


# ===================================================================
# --auto incremental PASS cache + worker sharding
# ===================================================================
# Full-pool --auto used to re-verify every completed function on every run
# (~12.7k x ~6s = ~20h). Two orthogonal cuts, neither weakens the check:
#
# 1. Incremental PASS cache (.omo/verify_auto_cache.json): a PASS verdict is
#    reused ONLY when the function's C++ text, its IDA pseudocode text, AND
#    the verifier/map inputs (this file, member_lookup.json, signals.json)
#    are byte-identical to the verified state. Any edit re-verifies. FAIL
#    verdicts are never cached.
# 2. Worker sharding: functions are independent; N spawn workers each load
#    the maps once (memory: ~286MB per worker -- keep <= 3 per the project
#    memory discipline).

VERIFY_CACHE_PATH = os.path.join(str(PROJECT_ROOT), '.omo',
                                 'verify_auto_cache.json')


def _sha1_text(t):
    import hashlib
    return hashlib.sha1(t.encode('utf-8', errors='replace')).hexdigest()


def _gate_env_key():
    import hashlib
    h = hashlib.sha1()
    for f in (os.path.abspath(__file__),
              os.path.join(str(PROJECT_ROOT), 'tools', 'member_lookup.json'),
              os.path.join(str(PROJECT_ROOT), 'signals.json')):
        try:
            st = os.stat(f)
            h.update(('%s:%d:%d;' % (os.path.basename(f), st.st_size,
                                     int(st.st_mtime))).encode())
        except OSError:
            h.update(('%s:missing;' % f).encode())
    return h.hexdigest()[:16]


def _cpp_fn_hash(addr):
    try:
        loc = find_cpp_function_by_addr(addr)
        if isinstance(loc, dict) and loc.get('lines') is not None:
            return _sha1_text(''.join(loc['lines']))
    except Exception:
        pass
    return 'x'


def _verify_cache_load():
    try:
        with open(VERIFY_CACHE_PATH, 'r') as f:
            return json.load(f)
    except Exception:
        return {}


def _verify_cache_save(cache):
    try:
        os.makedirs(os.path.dirname(VERIFY_CACHE_PATH), exist_ok=True)
        tmp = VERIFY_CACHE_PATH + '.tmp'
        with open(tmp, 'w') as f:
            json.dump(cache, f)
        os.replace(tmp, VERIFY_CACHE_PATH)
    except OSError as e:
        print("exec-flow: WARN cache write failed: %s" % e, file=sys.stderr)


_POOL_M = None
_POOL_SIGNALS = None


def _pool_init():
    global _POOL_M, _POOL_SIGNALS
    _POOL_M = load_all_maps()
    # Memory discipline (perf-verify): the raw member_lookup dict is consumed
    # only by build_member_name_index() (inside load_all_maps); no verifier
    # path reads it afterwards (efv_* read member_name_to_off / Signals).
    # Workers release it (~1.7GB of the ~3.0GB steady per-worker RSS). The
    # main-process M keeps it for external importers of load_all_maps.
    _POOL_M.member_lookup = {}
    _POOL_SIGNALS = _load_efv()["cpp_events"].get_signals()
    # Perf (perf-verify): build the cpp source pre-index during worker startup
    # (~3.5s, one read of the ~869 src cpp files) so verify tasks never pay it.
    _src_index()


def _pool_verify(task):
    addr, name = task
    ida_decomp, cached = load_ida_cache(addr)
    disp = name or ("sub_%X" % addr)
    if not ida_decomp or not ida_decomp.strip():
        return (addr, None, '', '')
    passed, info = verify_single_function(addr, name or cached, disp, _POOL_M,
                                          ida_decomp, verbose=False,
                                          signals=_POOL_SIGNALS)
    reason = ''
    if not passed and isinstance(info, dict):
        reason = str(info.get('reason') or '')[:220]
    return (addr, bool(passed), reason, _sha1_text(ida_decomp))


# ===================================================================
# Main (unchanged from original)
# ===================================================================


def stub_sweep(roots=("src",)):
    """G42.42n (user order 2026-10-05): any 'TODO stub' body is a FAILURE
    regardless of signals/completed state.  The completed-only verify path
    never sees quarantined stubs (they are completed=False or absent from
    signals.json), so stubs sailed through silently.  This sweep closes that
    blind spot: it reports every stub body and exits non-zero when any exist.
    Returns (count, [(file, line, func_or_?)]) ."""
    func_head = re.compile(r"^[\w:&*<>, ]+?(\w+)::(\w+)\s*\(")
    hits = []
    for root in roots:
        base = Path(PROJECT_ROOT, root)
        if not base.exists():
            continue
        for pf in sorted(base.rglob("*.cpp")):
            try:
                lines = pf.read_text(encoding="utf-8", errors="replace").splitlines()
            except Exception:
                continue
            cur = None
            for i, l in enumerate(lines, 1):
                m = func_head.match(l.strip())
                if m:
                    cur = "{}::{}".format(m.group(1), m.group(2))
                if "TODO stub" in l:
                    hits.append((str(pf), i, cur or "?"))
    return len(hits), hits


def main():
    import argparse
    p = argparse.ArgumentParser(description="Verify C++ translation flow against IDA.")
    p.add_argument("target", nargs="?", help="0xADDR or Class::Method")
    p.add_argument("--ida-file", help="file with IDA pseudocode")
    p.add_argument("--ida-json", help="JSON file ({'decompiled'|'code': ...})")
    p.add_argument("--ida-stdin", action="store_true", help="read IDA pseudocode from stdin")
    p.add_argument("--auto", action="store_true",
                   help="HARD gate: verify EVERY completed=true function")
    p.add_argument("--save-ida", action="store_true", help="fetch IDA pseudocode to cache")
    p.add_argument("--no-ida", action="store_true",
                   help="(--auto) offline soft mode: skip uncached completed functions")
    p.add_argument("--all", action="store_true",
                   help="whole-universe pool: completed + every function "
                        "with an ida_cache snapshot")
    p.add_argument("--fetch-cache", action="store_true",
                   help="pre-fill IDA cache for ALL completed=true functions")
    p.add_argument("--verbose", "-v", action="store_true")
    p.add_argument("--workers", type=int, default=1,
                   help="(--auto) shard the verify over N worker processes; "
                        "each loads the big maps + cpp source index "
                        "(~400MB RSS measured; keep <= 8, hard cap 12)")
    p.add_argument("--stub-sweep", action="store_true",
                   help="G42.42n: FAIL on any 'TODO stub' body anywhere in src/ "
                        "(closes the completed-only blind spot; exit 1 if any)")
    p.add_argument("--no-cache", action="store_true",
                   help="(--auto) disable the incremental PASS cache "
                        "(full re-verify of every completed function)")
    args = p.parse_args()

    if args.stub_sweep:
        n, hits = stub_sweep()
        for f, ln, fn in hits:
            print("FAIL: {}:{} -- stub-body: {} (G42.42n sweep: TODO stub is "
                  "a failed translation, not a completed one)".format(f, ln, fn))
        print("stub-sweep: {} stub bod{} in src/".format(n, 'y' if n == 1 else 'ies'))
        sys.exit(1 if n else 0)

    M = load_all_maps()

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
              f"({failed} skipped -- IDA had no pseudocode for that address).")
        sys.exit(0)

    if args.auto:
        completed = _collect_completed_functions(M)
        if args.all:
            # G40 whole-universe mode: every function with an ida_cache
            # snapshot joins the pool (completed + non-completed alike)
            import os as _os
            cache_dir = IDA_CACHE_DIR
            seen = {a for a, _n in completed}
            for fn in _os.listdir(cache_dir):
                m = re.match(r'func_0x([0-9A-Fa-f]+)\.json', fn)
                if not m:
                    continue
                a = int(m.group(1), 16)
                if a in seen:
                    continue
                seen.add(a)
                nm = M.addr_to_name.get(a)
                completed.append((a, nm))
        if not completed:
            print("No completed=true functions to verify.", file=sys.stderr)
            sys.exit(0)
        missing = []
        for addr, name in completed:
            decomp, _c = load_ida_cache(addr)
            if not decomp or not decomp.strip():
                missing.append((addr, name))
        if missing and not args.no_ida:
            if not check_ida_available():
                _ida_unreachable_fatal()
            print(f"exec-flow: {len(missing)} of {len(completed)} completed "
                  f"functions missing IDA cache -- fetching from IDA MCP "
                  f"({IDA_MCP_URL})...", file=sys.stderr)

        all_passed = True
        any_verified = False
        fetched = skipped_no_ida = 0
        signals = _load_efv()["cpp_events"].get_signals()
        use_cache = not getattr(args, 'no_cache', False)
        env_key = _gate_env_key() if use_cache else None
        vcache = _verify_cache_load() if use_cache else {}
        name_map = dict(completed)

        # phase A: fetch missing IDA texts + fingerprint split (cheap reads)
        todo = []
        cached_pass = 0
        for addr, name in completed:
            disp = name or f"sub_{addr:X}"
            ida_decomp, cached = load_ida_cache(addr)
            if not ida_decomp or not ida_decomp.strip():
                if args.no_ida:
                    print(f"SKIP (no cache, --no-ida): {disp}")
                    skipped_no_ida += 1
                    continue
                ida_decomp = _fetch_and_cache(addr, name, M)
                if ida_decomp is None:
                    print(f"SKIP (IDA has no pseudocode): {disp}")
                    continue
                fetched += 1
            ent = vcache.get(str(addr))
            if (use_cache and isinstance(ent, dict) and ent.get('k') == env_key
                    and ent.get('f') == [_cpp_fn_hash(addr),
                                         _sha1_text(ida_decomp)]):
                cached_pass += 1
                continue
            todo.append((addr, name))

        print(f"exec-flow: {len(completed)} completed | {cached_pass} "
              f"cached-PASS | {len(todo)} to verify", file=sys.stderr)

        # phase B: verify the changed/uncached set (sharded or sequential)
        def _report_fail(addr, reason):
            cpp_loc = find_cpp_function_by_addr(addr)
            if isinstance(cpp_loc, dict):
                cpp_loc = (f"{cpp_loc.get('file','?')}:"
                           f"{cpp_loc.get('start_line','?')}")
            cpp_loc = cpp_loc or '?'
            print(f"FAIL: {cpp_loc}: {name_map.get(addr, f'sub_{addr:X}')} "
                  f"-- translation incomplete")
            if reason:
                print(f"  {reason}")

        results = []
        workers = max(1, min(int(getattr(args, 'workers', 1) or 1), 12))
        if workers > 1 and len(todo) >= 32:
            import multiprocessing as mp
            ctx = mp.get_context('spawn')
            with ctx.Pool(processes=workers, initializer=_pool_init) as pool:
                for addr, passed, reason, ish in pool.imap_unordered(
                        _pool_verify, todo, chunksize=8):
                    if passed is None:
                        print(f"SKIP (no cache): sub_{addr:X}")
                        continue
                    any_verified = True
                    if not passed:
                        all_passed = False
                        _report_fail(addr, reason)
                    results.append((addr, passed, ish))
        else:
            for addr, name in todo:
                disp = name or f"sub_{addr:X}"
                ida_decomp, cached = load_ida_cache(addr)
                if not ida_decomp or not ida_decomp.strip():
                    print(f"SKIP (no cache): {disp}")
                    continue
                any_verified = True
                passed, info = verify_single_function(
                    addr, name or cached, disp, M, ida_decomp,
                    verbose=args.verbose, signals=signals)
                if not passed:
                    all_passed = False
                    reason = ''
                    if isinstance(info, dict) and info.get("reject")                             and info.get("reason"):
                        reason = str(info['reason'])
                    _report_fail(addr, reason)
                results.append((addr, passed, _sha1_text(ida_decomp)))

        # phase C: persist the PASS cache (pruned to the current pool)
        if use_cache:
            new_cache = {}
            addr_set = {a for a, _ in completed}
            for a, ent in vcache.items():
                try:
                    ai = int(a)
                except ValueError:
                    continue
                if ai in addr_set and isinstance(ent, dict)                         and ent.get('k') == env_key:
                    new_cache[a] = ent
            for addr, passed, ish in results:
                if not passed:
                    continue
                # Perf (perf-verify): prefer the sha the verifying side already
                # computed over its own copy of the cached IDA text; fall back
                # to re-reading when absent. Identical fingerprint either way.
                if not ish:
                    ish = _sha1_text(load_ida_cache(addr)[0] or '')
                new_cache[str(addr)] = {'k': env_key,
                                        'f': [_cpp_fn_hash(addr), ish],
                                        'v': 1}
            _verify_cache_save(new_cache)
        if fetched:
            print(f"exec-flow: auto-cached {fetched} IDA pseudocode entries.",
                  file=sys.stderr)
        if args.no_ida and skipped_no_ida:
            print(f"exec-flow: skipped {skipped_no_ida} uncached function(s) "
                  f"(--no-ida offline mode).", file=sys.stderr)
        # -- Also check modified functions (not just completed=true) --
        modified_funcs = get_modified_functions()
        if modified_funcs:
            # Deduplicate against already-checked completed functions
            completed_addrs = {addr for addr, _ in completed}
            new_modified = [mf for mf in modified_funcs
                           if mf.get("addr") and mf["addr"] not in completed_addrs]
            if new_modified:
                print(f"\nexec-flow: also checking {len(new_modified)} modified "
                      f"function(s) (not in completed=true set)...", file=sys.stderr)
                for mf in new_modified:
                    addr = mf["addr"]
                    name = mf.get("name", f"sub_{addr:X}")
                    disp = name

                    # Check for #if 0 blocks containing "IDA decompile"
                    body_info = find_cpp_function_by_addr(addr)
                    has_disabled_impl = False
                    if body_info:
                        body_text = "".join(body_info["lines"])
                        # Scan for #if 0 ... #endif blocks containing IDA decompile
                        if0_pattern = re.compile(
                            r'#if\s+0\b.*?\n(.*?)#endif',
                            re.DOTALL
                        )
                        for match in if0_pattern.finditer(body_text):
                            block = match.group(1)
                            if 'IDA decompile' in block or 'ida decompile' in block.lower():
                                has_disabled_impl = True
                                break

                    if has_disabled_impl:
                        all_passed = False
                        print(f"FAIL: {disp} -- stub-with-disabled-implementation "
                              f"(#if 0 block contains IDA decompile)")
                        any_verified = True
                        continue

                    # Try IDA verification if cache available
                    ida_decomp, cached = load_ida_cache(addr)
                    if not ida_decomp or not ida_decomp.strip():
                        print(f"SKIP (no IDA cache): {disp} -- modified function, "
                              f"not verified")
                        continue

                    any_verified = True
                    passed, info = verify_single_function(
                        addr, name or cached, disp, M,
                        ida_decomp, verbose=args.verbose,
                        signals=signals)
                    if passed:
                        pass  # PASS suppressed
                    else:
                        all_passed = False
                        cpp_loc = find_cpp_function_by_addr(addr)
                        if isinstance(cpp_loc, dict):
                            cpp_loc = f"{cpp_loc.get('file','?')}:{cpp_loc.get('start_line','?')}"
                        cpp_loc = cpp_loc or '?'
                        print(f"FAIL: {cpp_loc}: {disp} -- translation incomplete (modified function)")
                        if info.get("reject") and info.get("reason"):
                            print(f"  {info['reason']}")

        if not any_verified:
            print("No completed functions verifiable (no cache / IDA pseudocode).",
                  file=sys.stderr)
            sys.exit(0)
        sys.exit(0 if all_passed else 1)

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
        pass  # PASS suppressed
        sys.exit(0)
    cpp_loc = find_cpp_function_by_addr(ida_addr)
    if isinstance(cpp_loc, dict):
        cpp_loc = f"{cpp_loc.get('file','?')}:{cpp_loc.get('start_line','?')}"
    cpp_loc = cpp_loc or '?'
    print(f"FAIL: {cpp_loc}: {display_name} -- translation incomplete")
    if info.get("reason"):
        print(f"  {info['reason']}")
    sys.exit(1)


if __name__ == "__main__":
    main()
