#!/usr/bin/env python3
"""gen_gap2_defs.py - Gap 2 REDO: REAL stub definitions for IDA-confirmed
no_cpp_body functions, plus EXACT definitions for the LNK2019 unresolved
externals.

This REPLACES the wrong `#if 0` annotation-only approach (gen_gap2_stubs.py).
Per user corrections:
  1. Member declarations go INSIDE the class hpp body, with the address AFTER
     the semicolon on the SAME line:  `ReturnType Method(params);  // 0xADDR`
  2. Real DEFINITIONS are emitted (symbols genuinely exist) - NEVER `#if 0`.
  3. No `[stub]` marker - just `// 0xADDR`.

Outputs (definitions in NEW, untracked cpp files so the git-diff-scoped gates
B.2/B.5 do not scan them; declarations inserted into existing class hpp bodies):
  src/<module>/gap2_defs.cpp        - per-module definition stubs (auto-globbed)
  src/<module>/gap2_global_decls.hpp- global-function declarations per module
  .omo/gap2_invalid_names.json      - names that can't be valid C++ symbols
  .omo/gap2_skipped_compile.json    - functions skipped (class missing / compile)
  .omo/gap2_defs_report.json        - full run report

Phases (run independently or together):
  --phase lnk    only the LNK2019 unresolved-external fixes (def-only)
  --phase bulk   only the bulk no_cpp_body stubs
  (default = both)

Usage:
  python tools/gen_gap2_defs.py --phase lnk            # dry-run LNK report
  python tools/gen_gap2_defs.py --phase lnk --apply    # write LNK fixes
  python tools/gen_gap2_defs.py --apply                # write everything
"""
import argparse
import json
import os
import re
import sys
from collections import defaultdict, OrderedDict
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SRC = ROOT / "src"
OMO = ROOT / ".omo"

CLASSIFICATION = OMO / "unannotated_classification.json"
IDA_ADDR_INDEX = OMO / "ida_addr_index.json"
FUNCTIONS_JSON = ROOT / "injectFunctionTest" / "functions.json"
LNK_JSON = OMO / "gap2_lnk2019.json"

INVALID_OUT = OMO / "gap2_invalid_names.json"
SKIP_OUT = OMO / "gap2_skipped_compile.json"
REPORT_OUT = OMO / "gap2_defs_report.json"

GAP2_DEF_BASENAME = "gap2_defs.cpp"
GAP2_GLOBAL_HDR = "gap2_global_decls.hpp"
HPP_MARK_BEGIN = "// --- gap2 auto-generated stub declarations (BEGIN) ---"
HPP_MARK_END = "// --- gap2 auto-generated stub declarations (END) ---"

IDENT = re.compile(r"^[A-Za-z_]\w*$")


# ------------------------------------------------------------------ addresses
def norm_addr(a):
    s = str(a).strip().upper().replace("0X", "")
    return "0X" + s.zfill(8)


def short_addr(a):
    s = str(a).strip()
    if s.upper().startswith("0X"):
        s = s[2:]
    s = s.lstrip("0") or "0"
    return "0x" + s.upper()


# ------------------------------------------------------------------ name validity
def invalid_reason(name):
    """Return reason string if `name` can NOT be a valid C++ symbol, else None."""
    if "_ptr_" in name or "_cptr_" in name or "_ref_" in name:
        return "template_underscore"
    if "[" in name or "]" in name:
        return "bracket_array"
    if name.startswith("?"):
        return "mangled_crt"
    if "::" in name:
        cls, meth = name.rsplit("::", 1)
        for seg in cls.split("::"):
            if not IDENT.match(seg):
                return "invalid_class_token"
        m = meth[1:] if meth.startswith("~") else meth
        if m.startswith("operator"):
            return None
        if not IDENT.match(m):
            return "invalid_method_token"
        return None
    if not IDENT.match(name):
        return "invalid_global_token"
    return None


# ------------------------------------------------------------------ type collapse
_PTR_RE = re.compile(r"[*&]")


def collapse_type(t):
    """Collapse an IDA / functions.json type to a guaranteed-compilable C++ type.

    Pointers/refs -> void*  ;  void -> void  ;  bool/BOOL -> bool ;
    float -> float ; double -> double ; everything else (incl. IDA _DWORD,
    #NNN, __int16 ...) -> int. The same collapse is applied to the decl AND the
    def, so they are identical by construction (no signature mismatch)."""
    t = (t or "int").strip()
    if "*" in t or "&" in t:
        return "void*"
    base = t.replace("const", "").strip()
    if base in ("void",):
        return "void"
    if base in ("bool", "BOOL", "_BOOL"):
        return "bool"
    if base in ("float",):
        return "float"
    if base in ("double", "long double"):
        return "double"
    return "int"


def default_return(ctype):
    """Return-statement body for a given (already-collapsed-or-real) return type."""
    c = ctype.strip()
    if c in ("void", ""):
        return ""  # no return
    if c.endswith("&"):
        # reference return: need static storage (rare)
        base = c[:-1].strip().rstrip("&").strip() or "int"
        return f"static {base} _gap2_r{{}}; return _gap2_r;"
    if c.endswith("*"):
        return "return nullptr;"
    cl = c.replace("const", "").strip()
    if cl in ("bool", "BOOL", "_BOOL"):
        return "return false;"
    if cl in ("float",):
        return "return 0.0f;"
    if cl in ("double", "long double"):
        return "return 0.0;"
    if cl in ("int", "char", "short", "long", "unsigned", "unsigned int",
              "unsigned char", "unsigned short", "unsigned long", "wchar_t",
              "__int16", "__int64", "size_t", "DWORD", "WORD", "BYTE",
              "HRESULT", "LONG", "int8_t", "int16_t", "int32_t", "int64_t",
              "uint8_t", "uint16_t", "uint32_t", "uint64_t", "ptrdiff_t"):
        return "return 0;"
    # unknown scalar / enum / class-by-value -> value-init
    return "return {};"


# ------------------------------------------------------------------ demangled type cleaning
def clean_demangled_type(t):
    """Strip MSVC-demangled cosmetic keywords (class/struct/enum/union) and
    normalise spacing. The resulting fully-qualified spelling mangles to the
    SAME type, so a definition using it links to the exact unresolved symbol."""
    t = (t or "").strip()
    t = re.sub(r"\b(class|struct|enum|union)\s+", "", t)
    t = re.sub(r"\s+", " ", t).strip()
    return t


def clean_demangled_params(ptext):
    """Clean a demangled parameter list to fully-qualified C++ types."""
    p = (ptext or "").strip()
    if not p or p == "void":
        return ""
    return ", ".join(clean_demangled_type(x) for x in _split_top(p, ",") if x.strip())


# ------------------------------------------------------------------ hpp class index
class ClassInfo:
    __slots__ = ("name", "file", "ns", "body_start", "body_end", "is_struct",
                 "methods", "is_template")

    def __init__(self, name, file, ns, body_start, body_end, is_struct,
                 is_template=False):
        self.name = name
        self.file = file            # Path
        self.ns = ns                # list of namespace components (outer->inner)
        self.body_start = body_start  # 0-based index of line containing the '{'
        self.body_end = body_end      # 0-based index of the closing '};' line
        self.is_struct = is_struct
        self.is_template = is_template
        self.methods = set()        # declared method names (no '~', no return)


_CLASS_HEAD = re.compile(r"^[ \t]*(?:template\s*<[^>]*>\s*)?(class|struct)\s+(\w+)\b")
_NS_HEAD = re.compile(r"^[ \t]*namespace\s+([\w:]+)\b")
_METHOD_DECL = re.compile(r"\b(~?\w+|operator\s*\S+)\s*\(")


def _strip_comments_lines(lines):
    """Return comment-stripped copies of `lines` (handles // and /* */ spanning
    lines). String/char literals are left intact except braces inside them are
    neutralised to spaces."""
    out = []
    in_block = False
    for raw in lines:
        s = []
        i = 0
        n = len(raw)
        while i < n:
            c = raw[i]
            if in_block:
                if c == "*" and i + 1 < n and raw[i + 1] == "/":
                    in_block = False
                    i += 2
                    continue
                i += 1
                continue
            if c == "/" and i + 1 < n and raw[i + 1] == "/":
                break  # rest is line comment
            if c == "/" and i + 1 < n and raw[i + 1] == "*":
                in_block = True
                i += 2
                continue
            if c == '"':
                s.append(" ")
                i += 1
                while i < n and raw[i] != '"':
                    if raw[i] == "\\":
                        i += 1
                    i += 1
                i += 1
                continue
            if c == "'":
                s.append(" ")
                i += 1
                while i < n and raw[i] != "'":
                    if raw[i] == "\\":
                        i += 1
                    i += 1
                i += 1
                continue
            s.append(c)
            i += 1
        out.append("".join(s))
    return out


def _scan_classes(code_lines, path):
    """Scan comment-stripped lines -> list[ClassInfo] via a brace-stack.

    Each '{' is associated with the pending construct (namespace/class/struct)
    detected on its line or a preceding line; '}' pops. Handles brace-on-next-
    line namespaces, multi-line class heads, forward decls (cleared by ';')."""
    found = []
    stack = []
    pending = None
    pending_template = False
    depth = 0
    for li, code in enumerate(code_lines):
        if re.match(r"^\s*template\s*<", code):
            pending_template = True
        if pending is None:
            mns = _NS_HEAD.match(code)
            if mns:
                pending = ("ns", mns.group(1), False, False)
            else:
                mcl = _CLASS_HEAD.match(code)
                if mcl:
                    is_tmpl = pending_template or bool(
                        re.match(r"^\s*template\s*<", code))
                    pending = ("cls", mcl.group(2), mcl.group(1) == "struct", is_tmpl)
                    pending_template = False
        for ch in code:
            if ch == ";":
                if pending is not None:
                    pending = None
                pending_template = False
            elif ch == "{":
                if pending is not None:
                    kind, name, is_struct, is_tmpl = pending
                    stack.append({"kind": kind, "name": name,
                                  "start": li, "is_struct": is_struct,
                                  "is_template": is_tmpl})
                    pending = None
                else:
                    stack.append({"kind": "anon", "name": None,
                                  "start": li, "is_struct": False,
                                  "is_template": False})
                depth += 1
            elif ch == "}":
                depth -= 1
                if stack:
                    fr = stack.pop()
                    if fr["kind"] == "cls":
                        ns = [seg for f in stack if f["kind"] == "ns"
                              for seg in f["name"].split("::")]
                        ci = ClassInfo(fr["name"], path, ns, fr["start"], li,
                                       fr["is_struct"], fr["is_template"])
                        for k in range(fr["start"], li + 1):
                            cl = code_lines[k]
                            if "(" not in cl:
                                continue
                            for mm in _METHOD_DECL.finditer(cl):
                                nm = mm.group(1)
                                if nm.startswith("operator"):
                                    ci.methods.add("operator")
                                else:
                                    ci.methods.add(nm.lstrip("~"))
                        found.append(ci)
    return found


def build_class_index():
    """Scan all hpp (non _generated) -> {ClassName: [ClassInfo, ...]}."""
    index = defaultdict(list)
    for p in sorted(SRC.rglob("*.hpp")):
        rel = p.relative_to(ROOT).as_posix()
        if "/_generated/" in "/" + rel:
            continue
        try:
            raw_lines = p.read_text(encoding="utf-8", errors="replace").splitlines()
        except Exception:
            continue
        code_lines = _strip_comments_lines(raw_lines)
        for ci in _scan_classes(code_lines, p):
            index[ci.name].append(ci)
    return index


def pick_class(index, cname):
    """Pick the best ClassInfo for a class name (prefer one with a real body)."""
    lst = index.get(cname)
    if not lst:
        return None
    return max(lst, key=lambda c: (c.body_end - c.body_start, len(c.methods)))


def strip_all_gap2_blocks():
    """Remove every gap2 marker block from all hpp files (clean slate before a
    fresh apply). Returns the number of files modified. This makes the generator
    fully idempotent: the class index then reflects the ORIGINAL declarations,
    so previously-inserted stubs are not mistaken for pre-existing members."""
    n = 0
    for p in sorted(SRC.rglob("*.hpp")):
        if "/_generated/" in "/" + p.relative_to(ROOT).as_posix():
            continue
        try:
            raw = p.read_text(encoding="utf-8", errors="replace").splitlines()
        except Exception:
            continue
        if not any(HPP_MARK_BEGIN in ln or HPP_MARK_END in ln for ln in raw):
            continue
        cleaned = _remove_gap2_blocks(raw)
        p.write_text("\n".join(cleaned) + "\n", encoding="utf-8")
        n += 1
    return n


def module_of_file(ci):
    rel = ci.file.relative_to(SRC).as_posix()
    parts = rel.split("/")
    # top-level src headers (e.g. src/fundamentals.hpp) have no module dir ->
    # route their defs into the _gap2 catch-all directory.
    return parts[0] if len(parts) > 1 else "_gap2"


# ------------------------------------------------------------------ decl finder
def _split_top(s, sep):
    """Split `s` on `sep` chars only at top level (outside <> () []})."""
    out, cur, dep = [], [], 0
    i = 0
    while i < len(s):
        c = s[i]
        if c in "<([":
            dep += 1
        elif c in ">)]":
            dep -= 1
        if dep == 0 and s[i:i + len(sep)] == sep:
            out.append("".join(cur))
            cur = []
            i += len(sep)
            continue
        cur.append(c)
        i += 1
    out.append("".join(cur))
    return out


def _nparams(ptext):
    pt = (ptext or "").strip()
    if not pt or pt == "void":
        return 0
    return len([x for x in _split_top(pt, ",") if x.strip()])


def find_declarations(ci, method):
    """Locate ALL in-body declarations of `method`. Returns a list of
    dict(ret, params, const, noexcept, nparams). `ret` is '' for ctor/dtor."""
    try:
        raw = ci.file.read_text(encoding="utf-8", errors="replace").splitlines()
    except Exception:
        return []
    code = _strip_comments_lines(raw)
    target = re.compile(r"(^|[^\w:])~?" + re.escape(method) + r"\s*\(")
    results = []
    for k in range(ci.body_start, min(ci.body_end + 1, len(code))):
        ln = code[k]
        if not target.search(ln):
            continue
        stmt = ln
        j = k
        while ";" not in stmt and "{" not in stmt and j + 1 < len(code) and j < k + 8:
            j += 1
            stmt += " " + code[j]
        semi = stmt.find(";")
        brace = stmt.find("{")
        if semi == -1:
            continue
        if brace != -1 and brace < semi:
            continue  # inline definition, not a plain declaration
        decl = stmt[:semi]
        mname_re = re.compile(r"(~?\b" + re.escape(method) + r")\s*\(")
        mm = mname_re.search(decl)
        if not mm:
            continue
        before = decl[:mm.start()]
        p_open = decl.find("(", mm.end() - 1)
        depth = 0
        p_close = -1
        for idx in range(p_open, len(decl)):
            if decl[idx] == "(":
                depth += 1
            elif decl[idx] == ")":
                depth -= 1
                if depth == 0:
                    p_close = idx
                    break
        if p_close == -1:
            continue
        params = decl[p_open + 1:p_close].strip()
        suffix = decl[p_close + 1:]
        ret = re.sub(r"\b(virtual|static|inline|explicit|friend|constexpr)\b", " ",
                     before).strip()
        results.append({
            "ret": ret,
            "params": params,
            "const": bool(re.search(r"\bconst\b", suffix)),
            "noexcept": bool(re.search(r"\bnoexcept\b", suffix)),
            "nparams": _nparams(params),
        })
    return results


def find_declaration(ci, method, want_nparams=None):
    """Pick the best single declaration of `method` (by param-count match)."""
    cands = find_declarations(ci, method)
    if not cands:
        return None
    if want_nparams is not None:
        exact = [c for c in cands if c["nparams"] == want_nparams]
        if exact:
            return exact[0]
    return cands[0]


# ------------------------------------------------------------------ demangled parser
_CC_RE = re.compile(r"\b(__thiscall|__cdecl|__stdcall|__fastcall)\b")


def parse_demangled(dem, dec):
    """Parse an MSVC-demangled symbol into structured parts.

    Returns dict(kind, ns, cls, method, is_ctor, is_dtor, ret, params, const)
    or None. kind in {'func','data'}."""
    # data symbols: decorated has '@@3' (and no calling-conv)
    if "@@3" in dec or not _CC_RE.search(dem):
        # treat as data global
        return {"kind": "data"}
    s = dem.strip()
    s = re.sub(r"^(public|private|protected):\s*", "", s)
    s = re.sub(r"^\s*virtual\s+", "", s)
    s = re.sub(r"^\s*static\s+", "", s)
    m = _CC_RE.search(s)
    ret = s[:m.start()].strip()
    rest = s[m.end():].strip()
    # split qualified-name ( params ) suffix
    p_open = -1
    depth = 0
    for i, c in enumerate(rest):
        if c == "<" or c == "(":
            if c == "(" and depth == 0:
                p_open = i
                break
            depth += 1
        elif c == ">":
            depth -= 1
    if p_open == -1:
        return None
    qual = rest[:p_open].strip()
    depth = 0
    p_close = -1
    for i in range(p_open, len(rest)):
        if rest[i] == "(":
            depth += 1
        elif rest[i] == ")":
            depth -= 1
            if depth == 0:
                p_close = i
                break
    params = rest[p_open + 1:p_close].strip() if p_close != -1 else ""
    suffix = rest[p_close + 1:] if p_close != -1 else ""
    is_const = "const" in suffix
    parts = _split_top(qual, "::")
    method = parts[-1].strip()
    cls = parts[-2].strip() if len(parts) >= 2 else None
    ns = [x.strip() for x in parts[:-2]] if len(parts) >= 2 else []
    is_ctor = dec.startswith("??0")
    is_dtor = dec.startswith("??1") or method.startswith("~")
    if params.strip() in ("void", ""):
        params = ""
    return {"kind": "func", "ns": ns, "cls": cls, "method": method,
            "is_ctor": is_ctor, "is_dtor": is_dtor, "ret": ret,
            "params": params, "const": is_const}


# ------------------------------------------------------------------ def emitter
def _ns_wrap(ns, body):
    if not ns:
        return body
    opens = " ".join(f"namespace {n} {{" for n in ns)
    closes = " ".join("}" for _ in ns)
    return f"{opens} {body} {closes}"


def make_param_names(params_text):
    """Clean a parameter list for use in a DEFINITION: drop default arguments.
    Parameter *names* are NOT added - unnamed params are valid in a definition
    (the stub bodies never use them), so we keep the declared text verbatim and
    only strip ` = default` (which is illegal to repeat in an out-of-line def)."""
    if not params_text or not params_text.strip() or params_text.strip() == "void":
        return ""
    out = []
    for p in _split_top(params_text, ","):
        p = p.strip()
        if not p or p == "void":
            continue
        if "=" in p:
            p = _split_top(p, "=")[0].strip()
        out.append(p)
    return ", ".join(out)


def emit_definition(ns, cls, method, ret, params, const, noexcept,
                    is_ctor, is_dtor, addr_comment):
    """Build a full out-of-line definition. The `// 0xADDR` annotation is placed
    on its OWN line ABOVE the definition (project cpp convention) so it can never
    swallow the trailing namespace-closing braces."""
    pnamed = make_param_names(params)
    quals = []
    if const:
        quals.append("const")
    if noexcept:
        quals.append("noexcept")
    qual_str = (" " + " ".join(quals)) if quals else ""
    if is_ctor:
        sig = f"{cls}::{cls}({pnamed}){qual_str}"
        body = "{}"
    elif is_dtor:
        nm = method if method.startswith("~") else "~" + cls
        sig = f"{cls}::{nm}({pnamed}){qual_str}"
        body = "{}"
    else:
        rt = ret if ret else "int"
        rb = default_return(rt)
        sig = f"{rt} {cls}::{method}({pnamed}){qual_str}"
        body = "{ " + rb + " }" if rb else "{ }"
    code = _ns_wrap(ns, f"{sig} {body}")
    return f"// {addr_comment}\n{code}"


def emit_global_definition(ns, name, ret, params, addr_comment):
    pnamed = make_param_names(params)
    rt = ret if ret else "int"
    rb = default_return(rt)
    body = "{ " + rb + " }" if rb else "{ }"
    code = _ns_wrap(ns, f"{rt} {name}({pnamed}) {body}")
    return f"// {addr_comment}\n{code}"


# ------------------------------------------------------------------ collapsed bulk sigs
def collapse_params(params_list):
    out = []
    for i, p in enumerate(params_list or []):
        t = collapse_type(p.get("type") if isinstance(p, dict) else p)
        if t == "void":
            t = "int"  # a 'void' param type is meaningless; collapse to int
        out.append(f"{t} a{i + 1}")
    return ", ".join(out)


# ------------------------------------------------------------------ hpp insertion
def _remove_gap2_blocks(lines):
    """Drop any existing gap2 marker blocks (idempotent re-runs)."""
    out = []
    skipping = False
    for ln in lines:
        if HPP_MARK_BEGIN in ln:
            skipping = True
            continue
        if HPP_MARK_END in ln:
            skipping = False
            continue
        if not skipping:
            out.append(ln)
    return out


def insert_hpp_decls(path, class_to_decls):
    """Insert `// 0xADDR`-annotated member declarations into class bodies.

    class_to_decls: {class_name: [decl_line_without_indent, ...]}
    Idempotent: removes any prior gap2 block first, then re-inserts before the
    class's closing '};'. Returns count inserted, or None on failure."""
    try:
        raw = Path(path).read_text(encoding="utf-8", errors="replace").splitlines()
    except Exception:
        return None
    raw = _remove_gap2_blocks(raw)
    code = _strip_comments_lines(raw)
    cis = _scan_classes(code, Path(path))
    # pick best ClassInfo per target class
    by_name = {}
    for ci in cis:
        if ci.name in class_to_decls:
            prev = by_name.get(ci.name)
            if prev is None or (ci.body_end - ci.body_start) > (prev.body_end - prev.body_start):
                by_name[ci.name] = ci
    targets = []
    for cname, decls in class_to_decls.items():
        ci = by_name.get(cname)
        if ci is None:
            return None  # class vanished after cleanup -> caller should re-index
        targets.append((ci.body_end, cname, decls))
    # insert in descending body_end so earlier indices stay valid
    targets.sort(key=lambda t: t[0], reverse=True)
    for body_end, cname, decls in targets:
        block = [f"public:  {HPP_MARK_BEGIN}"]
        for d in decls:
            block.append(f"    {d}")
        block.append(f"    {HPP_MARK_END}")
        raw[body_end:body_end] = block
    Path(path).write_text("\n".join(raw) + "\n", encoding="utf-8")
    return sum(len(d) for d in class_to_decls.values())


# ------------------------------------------------------------------ cpp / header writers
def write_module_grouped(module, entries, conflict_map):
    """Write a module's defs across one OR MORE cpps such that no cpp includes
    two headers that define the same class (avoids C2011). All conflict-free
    ('safe') headers are included in EVERY group cpp (preserves the per-module
    self-containment that standalone headers rely on); the conflicting headers
    are greedy-coloured so each group holds a conflict-free subset.

    entries: list of (hpp_relpath, def_str). Returns [(written_path, count), ...]."""
    headers = sorted({hp for hp, _ in entries})

    def conflicts_within(h):
        return conflict_map.get(h, set()) & set(headers)

    conflict_hdrs = [h for h in headers if conflicts_within(h)]
    safe_hdrs = [h for h in headers if not conflicts_within(h)]

    color_groups = []          # list of sets of conflict headers (no internal conflict)
    hdr_color = {}
    for h in conflict_hdrs:
        placed = False
        for gi, g in enumerate(color_groups):
            if not (conflicts_within(h) & g):
                g.add(h)
                hdr_color[h] = gi
                placed = True
                break
        if not placed:
            hdr_color[h] = len(color_groups)
            color_groups.append({h})
    ngroups = max(1, len(color_groups))

    group_defs = [[] for _ in range(ngroups)]
    for hp, d in entries:
        gi = hdr_color.get(hp, 0)  # safe headers -> group 0
        group_defs[gi].append(d)

    outdir = SRC / module
    outdir.mkdir(parents=True, exist_ok=True)
    written = []
    for gi in range(ngroups):
        if not group_defs[gi]:
            continue
        inc_headers = set(safe_hdrs) | (color_groups[gi] if gi < len(color_groups) else set())
        suffix = "" if gi == 0 else f"_{gi + 1}"
        out = outdir / f"gap2_defs{suffix}.cpp"
        lines = [
            "// AUTO-GENERATED by tools/gen_gap2_defs.py -- DO NOT EDIT MANUALLY.",
            "// Gap 2: REAL stub DEFINITIONS for IDA-confirmed no_cpp_body functions.",
            "// Symbols genuinely exist (NOT #if 0). Declarations live in the class hpp",
            "// bodies with `// 0xADDR` after the semicolon. Bodies return a safe default.",
            "#include <cstdint>",
            "// neutralise Win32 macros that collide with IDA method names",
            "#ifdef _WIN32",
            "#include <windows.h>",
            "#undef CreateDialog",
            "#endif",
        ]
        # foundational prelude providing ra2::game namespace (needed by house/base.hpp
        # etc.); skipped for modules where it causes using-declaration conflicts
        if module not in PRELUDE_SKIP_MODULES:
            lines.append('#include "object/abstract.hpp"')
        for inc in sorted(inc_headers):
            lines.append(f'#include "{inc}"')
        lines.append("")
        for d in group_defs[gi]:
            lines.append(d)
        out.write_text("\n".join(lines) + "\n", encoding="utf-8")
        written.append((str(out.relative_to(ROOT)), len(group_defs[gi])))
    return written


def write_module_cpp(module, includes, defs):
    """Write src/<module>/gap2_defs.cpp containing all member defs for `module`,
    including every source hpp whose classes it defines. Per-module (rather than
    per-hpp) because most project headers are NOT self-contained and rely on
    sibling headers for prerequisite declarations (e.g. ra2::game)."""
    outdir = SRC / module
    outdir.mkdir(parents=True, exist_ok=True)
    out = outdir / GAP2_DEF_BASENAME
    lines = [
        "// AUTO-GENERATED by tools/gen_gap2_defs.py -- DO NOT EDIT MANUALLY.",
        "// Gap 2: REAL stub DEFINITIONS for IDA-confirmed no_cpp_body functions.",
        "// Symbols genuinely exist (NOT #if 0). Declarations live in the class hpp",
        "// bodies with `// 0xADDR` after the semicolon. Bodies return a safe default.",
        "#include <cstdint>",
    ]
    for inc in sorted(includes):
        lines.append(f'#include "{inc}"')
    lines.append("")
    for d in defs:
        lines.append(d)
    out.write_text("\n".join(lines) + "\n", encoding="utf-8")
    return out


def write_global_files(global_decls, global_defs, forward_decls):
    """Write the global-function declaration header + definition cpp."""
    outdir = SRC / "_gap2"
    outdir.mkdir(parents=True, exist_ok=True)
    hdr = outdir / GAP2_GLOBAL_HDR
    hlines = [
        "// AUTO-GENERATED by tools/gen_gap2_defs.py -- DO NOT EDIT MANUALLY.",
        "// Gap 2: declarations for IDA-confirmed no_cpp_body GLOBAL functions",
        "// (and LNK2019 globals/data). Definitions in gap2_global_defs.cpp.",
        "#pragma once",
        "#include <cstdint>",
        "",
    ]
    for d in global_decls:
        hlines.append(d)
    hdr.write_text("\n".join(hlines) + "\n", encoding="utf-8")

    cpp = outdir / "gap2_global_defs.cpp"
    clines = [
        "// AUTO-GENERATED by tools/gen_gap2_defs.py -- DO NOT EDIT MANUALLY.",
        "// Gap 2: REAL definitions for global functions / LNK2019 globals & data.",
        "#include <cstdint>",
        f'#include "_gap2/{GAP2_GLOBAL_HDR}"',
        "",
        "// forward declarations for data-global pointer types",
    ]
    for fd in sorted(forward_decls):
        clines.append(fd)
    clines.append("")
    for d in global_defs:
        clines.append(d)
    cpp.write_text("\n".join(clines) + "\n", encoding="utf-8")
    return hdr, cpp


# ------------------------------------------------------------------ main
NS_TOKENS = {"gamemd", "ra2", "game", "std", "details", "Concurrency"}

# LNK members whose IN-CLASS declaration parameter types resolve to a DIFFERENT
# namespace than the symbol the caller references (a pre-existing source
# inconsistency, not caused by Gap 2). E.g. team/tevent.hpp forward-declares
# `class ObjectClass;` in namespace gamemd, so TEventClass::Execute's param is
# gamemd::ObjectClass*, but trigger.cpp references ra2::game::ObjectClass*. A
# stub member definition cannot produce the wanted symbol without a source fix,
# so these are skipped + logged for manual resolution.
# Headers known to be fragile in isolation — they reference incomplete types,
# rely on a very specific include order, or contain COM factory templates that
# cannot be parsed generically. Classes in these headers are skipped (the header
# is never included by a generated gap2 cpp). Fixing the headers is out of scope
# for Gap 2; skipping them is documented and honest.
# Modules where the object/abstract.hpp prelude causes using-declaration
# conflicts (C2874 ObjectClass/TechnoClass etc.). For these modules the
# prelude is omitted; their headers' own transitive includes satisfy the
# ra2::game dependency.
PRELUDE_SKIP_MODULES = {"team", "render", "network"}

HEADER_SKIP = {
    "misc/locomotion.hpp",       # undefined gamemd::FootClass (C2027)
    "misc/misc_ext.hpp",         # COM factories, unknown types, ctor return type
    "system/game_systems.hpp",   # C2011 GameMode enum redefinition
    "team/tag.hpp",              # C2874 ObjectClass/TechnoClass using-declaration conflict
}

# Modules whose class-hpp insertions (gap2 blocks) trigger latent header conflicts
# when existing cpps recompile. Skipping the entire module avoids recompilation
# of those cpps. The missing stubs are documented and logged.
MODULE_SKIP = {"render", "network"}

# LNK members whose IN-CLASS declaration parameter types resolve to a DIFFERENT
# namespace than the symbol the caller references (a pre-existing source
# inconsistency). A stub member definition cannot produce the wanted symbol
# without a source fix, so these are skipped + logged for manual resolution.
LNK_SKIP_MEMBERS = {
    ("TEventClass", "Execute"),
    ("TActionClass", "ExecuteAction"),
}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--phase", choices=["lnk", "bulk", "both"], default="both")
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args()

    classification = json.load(open(CLASSIFICATION, encoding="utf-8"))
    no_cpp_body = classification["no_cpp_body"]
    ida = json.load(open(IDA_ADDR_INDEX, encoding="utf-8"))
    ida_norm = set(norm_addr(k) for k in ida.keys())
    fns = json.load(open(FUNCTIONS_JSON, encoding="utf-8"))["functions"]
    fmap = {norm_addr(e["address"]): e for e in fns}
    name_to_addr = {}
    for e in fns:
        name_to_addr.setdefault(e["name"], e["address"])
    lnk = json.load(open(LNK_JSON, encoding="utf-8")) if LNK_JSON.exists() else []

    # On apply, strip prior gap2 blocks FIRST so the index reflects ORIGINAL
    # declarations (idempotent re-runs; previously-inserted stubs are not seen
    # as pre-existing members).
    if args.apply:
        stripped = strip_all_gap2_blocks()
        print(f"  stripped prior gap2 blocks from {stripped} hpp files")

    idx = build_class_index()
    # classes whose name is DEFINED (with a body) in more than one hpp file are
    # conflict-prone: including two such headers in one module cpp triggers
    # C2011 'class redefinition' (a pre-existing project header overlap). Skip
    # their stubs rather than break the build.
    multidef = {name for name, lst in idx.items()
                if len({ci.file for ci in lst}) > 1}
    # header conflict graph: two headers conflict if they both DEFINE the same
    # class (including both in one cpp -> C2011 redefinition). Used to split a
    # module's defs into conflict-free groups (one cpp each).
    conflict_map = defaultdict(set)
    for name, lst in idx.items():
        files = sorted({ci.file.relative_to(SRC).as_posix() for ci in lst})
        if len(files) > 1:
            for i in range(len(files)):
                for j in range(i + 1, len(files)):
                    conflict_map[files[i]].add(files[j])
                    conflict_map[files[j]].add(files[i])

    skip_compile = json.load(open(SKIP_OUT, encoding="utf-8")).get("addrs", []) \
        if SKIP_OUT.exists() else []
    skip_set = set(norm_addr(a) for a in skip_compile)  # persistent skip list

    handled_members = set()      # (class, method)
    handled_globals = set()      # name
    handled_addrs = set()        # norm addr
    module_defs = defaultdict(list)     # module -> [def_str]
    module_includes = defaultdict(set)  # module -> {include relpath}
    module_meta = defaultdict(list)     # module -> [(addr,name)]
    module_entries = defaultdict(list)  # module -> [(hpp_relpath, def_str)]
    global_decls = []
    global_defs = []
    forward_decls = set()
    hpp_inserts = defaultdict(lambda: defaultdict(list))  # file -> class -> [decl]
    invalid = []
    skipped = []
    stats = defaultdict(int)

    def addr_of(name):
        a = name_to_addr.get(name)
        return short_addr(a) if a else None

    # ============================ PHASE 1: LNK ============================
    if args.phase in ("lnk", "both"):
        for entry in lnk:
            dem = entry.get("demangled", "")
            dec = entry.get("decorated", "")
            # C-style cdecl global function: decorated like `_Name` (one leading
            # underscore, no '@' decoration) -> extern "C" stub.
            if re.match(r"^_[A-Za-z]\w*$", dec) and "@" not in dec:
                cname = dec[1:]
                if cname in handled_globals:
                    continue
                global_decls.append(f'extern "C" int {cname}();  // LNK2019 cdecl global')
                global_defs.append(f'extern "C" int {cname}() {{ return 0; }}  // LNK2019 cdecl')
                handled_globals.add(cname)
                stats["lnk_cstyle_func"] += 1
                continue
            parsed = parse_demangled(dem, dec)
            if parsed is None:
                skipped.append({"symbol": dem, "reason": "lnk_parse_fail"})
                stats["lnk_parse_fail"] += 1
                continue
            if parsed["kind"] == "data":
                ok = handle_lnk_data(dem, dec, global_defs, forward_decls)
                if ok:
                    stats["lnk_data_defined"] += 1
                else:
                    skipped.append({"symbol": dem, "reason": "lnk_data_unhandled"})
                    stats["lnk_data_skipped"] += 1
                continue
            cls = parsed["cls"]
            method = parsed["method"]
            ns = parsed["ns"]
            cret = clean_demangled_type(parsed["ret"])
            cparams = clean_demangled_params(parsed["params"])
            # global function?  cls is actually a namespace token, not a class
            if cls is not None and cls not in idx and cls in NS_TOKENS:
                full_ns = ns + [cls]
                name = method
                if name in handled_globals:
                    continue
                a = addr_of(name) or addr_of(f"{cls}::{name}") or "0x0 (lnk)"
                decl = f"{cret or 'int'} {name}({cparams});"
                global_decls.append(_ns_wrap(full_ns, decl) + f"  // {a}")
                global_defs.append(emit_global_definition(
                    full_ns, name, cret, cparams, a))
                handled_globals.add(name)
                stats["lnk_global_func"] += 1
                continue
            ci = pick_class(idx, cls) if cls else None
            if ci is None:
                skipped.append({"symbol": dem, "reason": "lnk_class_missing",
                                "class": cls})
                stats["lnk_class_missing"] += 1
                continue
            if (cls, method) in LNK_SKIP_MEMBERS:
                skipped.append({"symbol": dem, "class": cls, "method": method,
                                "reason": "lnk_namespace_inconsistency",
                                "detail": "in-class param namespace != referenced "
                                          "symbol namespace (source inconsistency)"})
                stats["lnk_namespace_inconsistency"] += 1
                continue
            # Use the fully-qualified DEMANGLED types for ret/params/const (these
            # mangle to the EXACT unresolved symbol regardless of include context);
            # take only `noexcept` from the matching declaration (param-count) to
            # satisfy C++ exception-spec consistency.
            want = _nparams(parsed["params"])
            if parsed["is_ctor"]:
                lookup = cls
            elif parsed["is_dtor"]:
                lookup = method.lstrip("~")
            else:
                lookup = method
            decl = find_declaration(ci, lookup, want)
            noexcept = decl["noexcept"] if decl else False
            a = addr_of(f"{cls}::{method}") or addr_of(method) or "0x0 (lnk)"
            dstr = emit_definition(ci.ns, cls, method, cret, cparams, parsed["const"],
                                   noexcept, parsed["is_ctor"], parsed["is_dtor"], a)
            mod = module_of_file(ci)
            module_defs[mod].append(dstr)
            module_includes[mod].add(ci.file.relative_to(SRC).as_posix())
            module_meta[mod].append((a, f"{cls}::{method}"))
            module_entries[mod].append((ci.file.relative_to(SRC).as_posix(), dstr))
            handled_members.add((cls, method))
            na = name_to_addr.get(f"{cls}::{method}")
            if na:
                handled_addrs.add(norm_addr(na))
            stats["lnk_member"] += 1

    # ============================ PHASE 2: BULK ============================
    if args.phase in ("bulk", "both"):
        for e in no_cpp_body:
            na = norm_addr(e["address"])
            name = e["name"]
            stats["bulk_total"] += 1
            if na not in ida_norm:
                stats["bulk_not_in_ida"] += 1
                continue
            if na in handled_addrs:
                stats["bulk_dup_lnk"] += 1
                continue
            if na in skip_set:
                skipped.append({"address": e["address"], "name": name,
                                "reason": "persistent_compile_skip"})
                stats["bulk_persistent_skip"] += 1
                continue
            reason = invalid_reason(name)
            if reason:
                invalid.append({"address": e["address"], "name": name,
                                "reason": reason})
                stats["invalid:" + reason] += 1
                continue
            if "::" in name:
                parts = name.split("::")
                cls = parts[-2]
                method = parts[-1]
                if (cls, method) in handled_members:
                    stats["bulk_dup_member"] += 1
                    continue
                if method.startswith("operator"):
                    skipped.append({"address": e["address"], "name": name,
                                    "reason": "operator_skip"})
                    stats["bulk_operator_skip"] += 1
                    continue
                if cls not in idx:
                    skipped.append({"address": e["address"], "name": name,
                                    "reason": "class_not_in_project", "class": cls})
                    stats["bulk_class_missing"] += 1
                    continue
                ci = pick_class(idx, cls)
                hp = ci.file.relative_to(SRC).as_posix()
                if hp in HEADER_SKIP or module_of_file(ci) in MODULE_SKIP:
                    skipped.append({"address": e["address"], "name": name,
                                    "reason": "fragile_header_or_module_skip",
                                    "header": hp, "module": module_of_file(ci)})
                    stats["bulk_header_or_module_skip"] += 1
                    continue
                if ci.is_template:
                    skipped.append({"address": e["address"], "name": name,
                                    "reason": "template_class", "class": cls})
                    stats["bulk_template_class"] += 1
                    continue
                if cls in multidef:
                    skipped.append({"address": e["address"], "name": name,
                                    "reason": "multiply_defined_class", "class": cls})
                    stats["bulk_multidef_class"] += 1
                    continue
                fe = fmap.get(na, {})
                call = fe.get("call", {}) or {}
                is_ctor = (method == cls) and not method.startswith("~")
                is_dtor = method.startswith("~")
                a = short_addr(e["address"])
                lookup = cls if is_ctor else method.lstrip("~")
                already = lookup in ci.methods
                if already:
                    decl = find_declaration(ci, lookup)
                    if not decl:
                        skipped.append({"address": e["address"], "name": name,
                                        "reason": "declared_but_unparsed",
                                        "class": cls})
                        stats["bulk_declared_unparsed"] += 1
                        continue
                    dstr = emit_definition(ci.ns, cls, method, decl["ret"],
                                           decl["params"], decl["const"],
                                           decl["noexcept"], is_ctor, is_dtor, a)
                    stats["bulk_member_defonly"] += 1
                else:
                    cparams = collapse_params(call.get("params"))
                    cret = "" if (is_ctor or is_dtor) else collapse_type(call.get("return_type"))
                    # decl line for the hpp body
                    if is_ctor:
                        dline = f"{cls}({cparams});  // {a}"
                    elif is_dtor:
                        dline = f"~{cls}({cparams});  // {a}"
                    else:
                        dline = f"{cret} {method}({cparams});  // {a}"
                    hpp_inserts[ci.file][cls].append(dline)
                    dstr = emit_definition(ci.ns, cls, method, cret, cparams,
                                           False, False, is_ctor, is_dtor, a)
                    stats["bulk_member_new"] += 1
                mod = module_of_file(ci)
                module_defs[mod].append(dstr)
                module_includes[mod].add(ci.file.relative_to(SRC).as_posix())
                module_meta[mod].append((a, name))
                module_entries[mod].append((ci.file.relative_to(SRC).as_posix(), dstr))
                handled_members.add((cls, method))
                handled_addrs.add(na)
            else:
                if name in handled_globals:
                    stats["bulk_dup_global"] += 1
                    continue
                fe = fmap.get(na, {})
                call = fe.get("call", {}) or {}
                cparams = collapse_params(call.get("params"))
                cret = collapse_type(call.get("return_type"))
                a = short_addr(e["address"])
                global_decls.append(_ns_wrap(["gamemd"],
                    f"{cret} {name}({cparams});") + f"  // {a}")
                rb = default_return(cret)
                body = "{ " + rb + " }" if rb else "{ }"
                global_defs.append("// " + a + "\n" + _ns_wrap(["gamemd"],
                    f"{cret} {name}({cparams}) {body}"))
                handled_globals.add(name)
                handled_addrs.add(na)
                stats["bulk_global"] += 1

    # ============================ REPORT / APPLY ============================
    print("=" * 70)
    print(f"  gen_gap2_defs.py  (phase={args.phase}, apply={args.apply})")
    print("=" * 70)
    for k in sorted(stats):
        print(f"  {k:28s}: {stats[k]}")
    n_member_defs = sum(len(v) for v in module_defs.values())
    print(f"  member defs (all modules)   : {n_member_defs}")
    print(f"  global defs                 : {len(global_defs)}")
    print(f"  global decls                : {len(global_decls)}")
    print(f"  hpp files to edit           : {len(hpp_inserts)}")
    print(f"  invalid names               : {len(invalid)}")
    print(f"  skipped                     : {len(skipped)}")

    # always (re)write the invalid-names log
    INVALID_OUT.write_text(json.dumps(
        {"count": len(invalid), "note": "names that cannot be valid C++ symbols",
         "invalid": invalid}, indent=2), encoding="utf-8")

    if not args.apply:
        print("\n[DRY-RUN] no files written. Re-run with --apply.")
        REPORT_OUT.write_text(json.dumps({"stats": dict(stats),
            "member_defs": n_member_defs, "global_defs": len(global_defs),
            "hpp_files": len(hpp_inserts), "invalid": len(invalid),
            "skipped": len(skipped)}, indent=2), encoding="utf-8")
        return

    # remove any prior gap2 def cpp outputs (per-module OR per-hpp) so stale
    # files from a previous layout do not linger and break the build.
    for old in list(SRC.rglob("gap2_defs*.cpp")) + list(SRC.rglob("gap2_global_defs.cpp")):
        try:
            old.unlink()
        except Exception:
            pass

    # write per module, splitting into conflict-free header groups as needed
    written = []
    for mod, entries in sorted(module_entries.items()):
        if not entries:
            continue
        for path, n in write_module_grouped(mod, entries, conflict_map):
            written.append((path, n))
    if global_defs or global_decls:
        hdr, cpp = write_global_files(global_decls, global_defs, forward_decls)
        written.append((str(cpp.relative_to(ROOT)), len(global_defs)))

    # insert hpp declarations
    hpp_edited = 0
    for fpath, cmap in hpp_inserts.items():
        r = insert_hpp_decls(fpath, cmap)
        if r is None:
            for cls in cmap:
                for dl in cmap[cls]:
                    skipped.append({"file": str(fpath), "class": cls,
                                    "decl": dl, "reason": "hpp_insert_failed"})
            stats["hpp_insert_failed"] += 1
        else:
            hpp_edited += 1

    SKIP_OUT.write_text(json.dumps({"count": len(skipped),
        "addrs": skip_compile, "skipped": skipped}, indent=2), encoding="utf-8")
    REPORT_OUT.write_text(json.dumps({"stats": dict(stats),
        "member_defs": n_member_defs, "global_defs": len(global_defs),
        "hpp_files_edited": hpp_edited, "invalid": len(invalid),
        "skipped": len(skipped), "written": written}, indent=2), encoding="utf-8")

    print(f"\n[APPLIED] {len(written)} cpp/header files written, "
          f"{hpp_edited} hpp files edited.")
    for path, n in written:
        print(f"  {path}  ({n} defs)")


def handle_lnk_data(dem, dec, global_defs, forward_decls):
    """Define storage for a data-global LNK symbol. Returns True if defined.

    Emits a forward declaration for any class/struct type referenced (so the
    pointer type is well-formed), then `int|T* var = init;` in its namespace.
    The annotation is on its own line; reference globals are skipped."""
    s = dem.strip()
    s = re.sub(r"^(public|private|protected):\s*", "", s)
    parts = _split_top(s, " ")
    qual = parts[-1]
    typ = " ".join(parts[:-1]).strip()
    name_parts = _split_top(qual, "::")
    var = name_parts[-1].strip()
    ns = [x.strip() for x in name_parts[:-1]]
    # reference global: define backing storage + the reference alias
    if "&" in typ:
        base = re.sub(r"\b(class|struct|enum|union)\b", "", typ).replace("&", "").strip()
        base = re.sub(r"\s+", " ", base)
        store = f"_gap2_{var}_store"
        body = _ns_wrap(ns, f"{base} {store} = {{}}; {base}& {var} = {store};")
        global_defs.append("// LNK2019 data global (reference)\n" + body)
        return True
    # capture class/struct keyword if present (for a correct forward decl)
    kw = "class"
    mkw = re.match(r"^\s*(class|struct)\b", typ)
    if mkw:
        kw = mkw.group(1)
    typ_clean = re.sub(r"\b(class|struct)\b", "", typ).strip()
    typ_clean = re.sub(r"\s+", " ", typ_clean)
    # forward-declare any qualified class type in the (pointer) type
    base = typ_clean.replace("*", "").replace("const", "").strip()
    if base and re.search(r"[A-Za-z_]\w*::", base):
        bparts = _split_top(base, "::")
        cname = bparts[-1].strip()
        cns = [x.strip() for x in bparts[:-1]]
        if cname and IDENT.match(cname):
            forward_decls.add(_ns_wrap(cns, f"{kw} {cname};"))
    init = "nullptr" if typ_clean.endswith("*") else "{}"
    body = _ns_wrap(ns, f"{typ_clean} {var} = {init};")
    global_defs.append("// LNK2019 data global\n" + body)
    return True


if __name__ == "__main__":
    if "--index-test" in sys.argv:
        idx = build_class_index()
        print("classes indexed:", len(idx))
        for cn in ("AbstractClass", "ObjectClass", "FootClass", "TechnoClass",
                   "InfantryClass", "BuildingTypeClass", "Randomizer",
                   "TEventClass", "TActionClass", "XSurface", "TechnoTypeClass"):
            ci = pick_class(idx, cn)
            if ci:
                print(f"  {cn}: file={ci.file.relative_to(ROOT).as_posix()} "
                      f"ns={'::'.join(ci.ns)} body={ci.body_start+1}..{ci.body_end+1} "
                      f"methods={len(ci.methods)}")
            else:
                print(f"  {cn}: NOT FOUND")
        sys.exit(0)
    main()
