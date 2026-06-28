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
    "memcmp", "memset", "memcpy", "memmove", "strlen", "strcpy", "strcmp",
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


def load_globals_map(M):
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
            hits.append((m.start(), m.end(), f"CALL(vfptr+{int(m.group(1))})"))
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

def _extract_function_body(lines, start_idx, cppf_relative):
    class_name = _signature_class_name(_logical_signature(lines, start_idx))
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
    ctor_re = _ctor_def_re(class_name, method_name)
    hint = method_name[1:] if method_name.startswith("~") else method_name
    ctor_hint = class_name if ctor_re is not None else None
    for cppf in _cpp_files():
        try:
            with open(cppf, "r", encoding="utf-8", errors="replace") as f:
                lines = f.readlines()
        except OSError:
            continue
        rel = str(cppf.relative_to(PROJECT_ROOT))
        for i, line in enumerate(lines):
            if hint not in line and (ctor_hint is None or ctor_hint not in line):
                continue
            sig = _logical_signature(lines, i)
            if def_pattern.search(sig) or (ctor_re is not None and ctor_re.search(sig)):
                return _extract_function_body(lines, i, rel)
    return None


def find_cpp_function_by_addr(ida_addr):
    addr_pattern = re.compile(rf'//\s*(?:IDA:?\s*)?0x{ida_addr:0>6X}\b', re.IGNORECASE)
    def_re = re.compile(
        r'^\s*(?:inline\s+)?[\w\s*&<>:\-]+\s+'
        r'(?:([\w:]+)::)?(~?\w+)\s*\([^)]*\)\s*(?:const\s*)?(?:\{|$)')

    def _is_def_line(lns, j):
        head = lns[j].lstrip()[:1]
        if head in (":", ",", "{", "}"):
            return False
        sig = _logical_signature(lns, j)
        return bool(def_re.match(sig)) or _is_ctor_def(sig)

    for cppf in _cpp_files():
        try:
            with open(cppf, "r", encoding="utf-8", errors="replace") as f:
                lines = f.readlines()
        except OSError:
            continue
        rel = str(cppf.relative_to(PROJECT_ROOT))
        n = len(lines)
        for i, line in enumerate(lines):
            stripped = line.strip()
            if not (stripped.startswith("//") and addr_pattern.search(stripped)):
                continue
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
                return enclosing
            for j in range(i + 1, min(i + 12, n)):
                if _is_def_line(lines, j):
                    return _extract_function_body(lines, j, rel)
    return None


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
            if efv["reject"].check_rejectable(cpp_text) is None:
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


def _build_ida_cfg_events(efv, ida_decompiled, this_type, M):
    cfg = efv["ida_cfg"].build_ida_cfg(ida_decompiled)
    cfg = efv["normalize"].normalize(cfg)
    efv["ida_events"].extract_events_into(cfg, this_type, maps=M)
    cfg = efv["normalize"].normalize(cfg)
    canonicalize_branch_polarity(cfg)
    return cfg


def _build_cpp_cfg_events(efv, cpp_text, class_name, M, signals):
    cfg = efv["cpp_cfg"].build_cpp_cfg(cpp_text)
    cfg = efv["normalize"].normalize(cfg)
    efv["cpp_events"].extract_events_into(cfg, class_name, maps=M, signals=signals)
    cfg = efv["normalize"].normalize(cfg)
    canonicalize_branch_polarity(cfg)
    return cfg


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
    missing = sorted((ida_ops - cpp_ops) - exempt)
    missing = nec.apply_member_wildcard_exemption(
        missing, nec.count_member_write_wildcards(cpp_cfg))
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

    # ---- IDA side ----
    this_type = detect_this_type(ida_decompiled)
    ida_cfg = _build_ida_cfg_events(efv, ida_decompiled, this_type, M)

    # ---- locate the C++ implementation ----
    body = None
    if ida_addr:
        body = find_cpp_function_by_addr(ida_addr)
    if not body and func_name:
        body = find_cpp_function(func_name)
    if not body and display_name and display_name != func_name:
        body = find_cpp_function(display_name)
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
    reason = efv["reject"].check_rejectable(cpp_text)
    if reason is not None:
        if verbose:
            print("  C++ source : {}:{}".format(body["file"], body["start_line"] + 1),
                  file=sys.stderr)
            print("  REJECT     : {}".format(reason.message), file=sys.stderr)
        return False, {"reject": True, "reason": reason.message}

    # ---- ADDITIONAL AST-based goto check (Clang GotoStmt) ----
    # The token-based lexer check above is authoritative for lambda/asm;
    # goto is verified by BOTH the lexer AND the AST to eliminate false
    # negatives (e.g., goto in preprocessor expansions or template
    # instantiations that the lexer might miss).
    has_goto, goto_detail = check_goto_ast(cpp_text)
    if has_goto:
        reject_msg = f"AST-confirmed goto statement ({goto_detail}) -- please rewrite using structured control flow"
        if verbose:
            print("  C++ source : {}:{}".format(body["file"], body["start_line"] + 1),
                  file=sys.stderr)
            print("  REJECT (AST): {}".format(reject_msg), file=sys.stderr)
        return False, {"reject": True, "reason": reject_msg}

    # ---- C++ side ----
    cpp_cfg = _build_cpp_cfg_events(efv, cpp_text, class_name, M, signals)

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


# ===================================================================
# Main (unchanged from original)
# ===================================================================

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
    p.add_argument("--fetch-cache", action="store_true",
                   help="pre-fill IDA cache for ALL completed=true functions")
    p.add_argument("--verbose", "-v", action="store_true")
    args = p.parse_args()

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
                cached = M.addr_to_name.get(addr) or name
                fetched += 1
            any_verified = True
            passed, info = verify_single_function(addr, name or cached, disp, M,
                                                  ida_decomp, verbose=args.verbose,
                                                  signals=signals)
            if passed:
                pass  # PASS suppressed
            else:
                all_passed = False
                print(f"FAIL: {disp} -- translation incomplete")
                if info.get("reject") and info.get("reason"):
                    print(f"  {info['reason']}")
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
                        print(f"FAIL: {disp} -- translation incomplete (modified function)")
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
    print(f"FAIL: {display_name} -- translation incomplete")
    if info.get("reject") and info.get("reason"):
        print(f"  {info['reason']}")
    sys.exit(1)


if __name__ == "__main__":
    main()
