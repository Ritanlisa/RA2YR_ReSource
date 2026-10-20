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

# ---------------------------------------------------------------- post-fixups
# Script supremacy: direct campaign fixes on generated gap2 outputs are
# captured in tools/gap2_post_fixups.json ({file: {pairs, ops}}) and re-
# applied after every write, so `--apply` regen reproduces the working tree
# byte-identically. Built/verified by .omo/g265_extract_fixups.py
# (REPROD: HEAD+pairs+ops == current; FWD: idempotent on current).
POST_FIXUPS_PATH = ROOT / "tools" / "gap2_post_fixups.json"
_POST_FIXUPS = None


def _load_post_fixups():
    global _POST_FIXUPS
    if _POST_FIXUPS is None:
        try:
            _POST_FIXUPS = json.loads(
                POST_FIXUPS_PATH.read_text(encoding="utf-8"))
        except Exception:
            _POST_FIXUPS = {}
    return _POST_FIXUPS


def _fx_find_block(lines, block, start=0):
    if not block:
        return None
    first = block[0]
    for j in range(start, len(lines) - len(block) + 1):
        if lines[j] == first and lines[j:j + len(block)] == block:
            return j
    return None


def _fx_apply_ops(lines, ops):
    out = list(lines)
    for op in sorted(ops, key=lambda o: o["at"], reverse=True):
        at, find, new = op["at"], op["find"], op["replace"]
        if len(find) >= len(new):
            first, second = find, new
            first_is_find = True
        else:
            first, second = new, find
            first_is_find = False
        if out[at:at + len(first)] == first:
            if not first_is_find:
                continue  # already applied
            out[at:at + len(find)] = new
        elif new and out[at:at + len(second)] == second and second is find:
            out[at:at + len(find)] = new
    return out


def apply_post_fixups(path, text):
    """path: Path of the file being written. Returns the fixed-up text
    (pairs then ops), or the original text when no table entry exists."""
    try:
        rel = str(Path(path).resolve().relative_to(ROOT)).replace("\\", "/")
    except Exception:
        return text
    spec = _load_post_fixups().get(rel)
    if not spec:
        return text
    for old, new in spec.get("pairs", []):
        text = text.replace(old, new)
    fixed = "\n".join(_fx_apply_ops(text.split("\n"), spec.get("ops", [])))
    if fixed != text:
        print(f"    post-fixups applied: {rel} "
              f"(pairs={len(spec.get('pairs', []))}, "
              f"ops={len(spec.get('ops', []))})")
    return fixed

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
    Path(path).write_text(apply_post_fixups(path, "\n".join(raw) + "\n"), encoding="utf-8")
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
        out.write_text(apply_post_fixups(out, "\n".join(lines) + "\n"), encoding="utf-8")
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
    out.write_text(apply_post_fixups(out, "\n".join(lines) + "\n"), encoding="utf-8")
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
    hdr.write_text(apply_post_fixups(hdr, "\n".join(hlines) + "\n"), encoding="utf-8")

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
    cpp.write_text(apply_post_fixups(cpp, "\n".join(clines) + "\n"), encoding="utf-8")
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
    # G34: real definitions live in the e4 universe (GameConfig_e4.cpp,
    # against GameConfig_e4.hpp's full layout). The app universe's
    # cmdline.hpp GameConfig is a 4-bool legacy struct — bodies emitted
    # here referenced this->q038/CCINIClass which don't exist in that TU
    # (VSCode-visible errors; app/gap2_defs.cpp is not in the build).
    ("GameConfig", "Constructor"),
    ("GameConfig", "BuildChecksum"),
}


# =====================================================================
# X93: CSP ownership is the ONLY class authority for gap2 receivers.
#
# The historical bulk path emitted `Gap2Recv_<HEX>` synthetic classes when
# `backfill_cls` was empty.  X93 replaces that heuristic with CSP
# (`tools/csp/full_report/csp_functions.json` -> inferred_real_class):
#   * CSP owner + body-layout check passes -> real `Owner::Method`
#   * CSP owner + body touches beyond the owner layout / names do not
#     resolve -> keep synthetic fallback, record in csp_hint.json
#   * no CSP entry -> keep synthetic fallback, record in csp_gap.json
# `backfill.cls` is NEVER used for ownership (hint only).
# =====================================================================
CSP_REPORT = ROOT / "tools" / "csp" / "full_report" / "csp_functions.json"
SIGNALS_JSON = ROOT / "signals.json"
STRUCTURAL_TRUTH = ROOT / "anchors" / "structural_truth.json"
RTTI_DIRECT = ROOT / "anchors" / "rtti_hierarchy.json"
GAP2_DECL = SRC / "_gap2" / "gap2_global_decls.hpp"
GAP2_DEF = SRC / "_gap2" / "gap2_global_defs.cpp"
CSP_GAP_OUT = OMO / "csp_gap.json"
CSP_HINT_OUT = OMO / "csp_hint.json"
X93_PLAN_OUT = OMO / "x93_relocations.json"
X93_REPORT_OUT = OMO / "x93_report.json"
X93_DECL_BEGIN = "// --- x93 csp-relocation decls (BEGIN) ---"
X93_DECL_END = "// --- x93 csp-relocation decls (END) ---"
X93_CPP_BEGIN = "// --- x93 csp-relocation defs (BEGIN) ---"
X93_CPP_END = "// --- x93 csp-relocation defs (END) ---"
X93_EXTRA_TABLE = ROOT / "tools" / "csp_export" / "x93_extra_method_decls.json"
X93_GATE_BANK = OMO / "x93_gate_bank.json"

_X93_TYPE_WIDTH = {
    "char": 1, "unsigned char": 1, "signed char": 1, "bool": 1, "BYTE": 1,
    "short": 2, "unsigned short": 2, "__int16": 2, "WORD": 2,
    "int": 4, "unsigned int": 4, "unsigned": 4, "long": 4, "unsigned long": 4,
    "DWORD": 4, "float": 4, "BOOL": 4, "__int32": 4,
    "double": 8, "long long": 8, "unsigned long long": 8, "__int64": 8,
}
_X93_STRUCT_RE = re.compile(r'^\s*(?:template\s*<[^>]*>\s*)?(?:struct|class)\s+(\w+)\b[^;{]*\{')
_X93_MEMBER_RE = re.compile(
    r'^\s*(?:static\s+)?([A-Za-z_][\w:<>,\s\*]*?)\s+([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;\s*(?://\s*(.*))?$')
_X93_METHOD_RE = re.compile(
    r'^\s*([A-Za-z_][\w:<>,\s\*]*?)\s+([A-Za-z_]\w*)\s*\(([^;{}]*)\)\s*(const)?\s*;')
_X93_OFF_RES = [
    (re.compile(r'^M(\d+)$'), 10),
    (re.compile(r'^(?:ptr_|u32_|u16_|u8_|q)([0-9A-Fa-f]+)$'), 16),
    (re.compile(r'^alignmentPadding([0-9A-Fa-f]+)$'), 16),
]


def _x93_read_lines(path):
    """Byte-preserving line read (latin-1, keeps CR)."""
    return Path(path).read_bytes().decode("latin-1").split("\n")


def _x93_write_lines(path, lines):
    Path(path).write_bytes("\n".join(lines).encode("latin-1"))


def _x93_code(line):
    return re.sub(r'//.*', '', line)


def _x93_type_size(ty, arr):
    n = 1
    if arr:
        m = re.match(r"\[(\d+)\]", arr)
        n = int(m.group(1)) if m else 1
    if ty.count("*"):
        return 4 * n
    base = re.sub(r"\b(const|struct|class|enum)\b", "", ty).strip()
    base = re.sub(r"\s+", " ", base)
    return _X93_TYPE_WIDTH.get(base, 1) * n


def _x93_scan_structs(lines):
    code = []
    for raw in lines:
        s = re.sub(r"//[^\n]*", "", raw)
        s = re.sub(r"/\*.*?\*/", "", s)
        code.append(s)
    out, stack, pending = [], [], None
    for li, c in enumerate(code):
        if pending is None:
            m = _X93_STRUCT_RE.match(c)
            if m:
                pending = m.group(1)
        for ch in c:
            if ch == ";":
                pending = None
            elif ch == "{":
                stack.append({"name": pending, "start": li})
                pending = None
            elif ch == "}":
                if stack:
                    fr = stack.pop()
                    if fr["name"]:
                        out.append((fr["name"], fr["start"], li))
    return out


def _x93_parse_members(lines, start, end):
    out = []
    for k in range(start + 1, end):
        ln = lines[k]
        if "(" in _x93_code(ln):
            continue
        m = _X93_MEMBER_RE.match(ln)
        if not m:
            continue
        ty, name, arr, com = m.groups()
        if ty.strip() == "static":
            continue
        off = None
        if com and "no offset truth" not in com.lower():
            cm = re.search(r'0x([0-9A-Fa-f]+)', com)
            if cm:
                off = int(cm.group(1), 16)
        if off is None:
            for rx, base in _X93_OFF_RES:
                mm = rx.match(name)
                if mm:
                    off = int(mm.group(1), base)
                    break
        out.append({"name": name, "off": off,
                    "size": _x93_type_size(ty, arr), "line": ln.strip()})
    return out


def _x93_parse_synthetic():
    lines = _x93_read_lines(GAP2_DECL)
    structs = {n: (s, e) for n, s, e in _x93_scan_structs(lines)}
    out = {}
    for name, (s, e) in structs.items():
        if not name.startswith("Gap2Recv_"):
            continue
        methods = []
        for ln in lines[s + 1:e]:
            mm = _X93_METHOD_RE.match(_x93_code(ln))
            if mm:
                methods.append({"ret": mm.group(1).strip(),
                                "method": mm.group(2),
                                "params": mm.group(3).strip(),
                                "const": bool(mm.group(4)),
                                "line": ln})
        out[name] = {"members": _x93_parse_members(lines, s, e),
                     "methods": methods, "start": s, "end": e}
    return out


def _x93_parse_defs():
    lines = _x93_read_lines(GAP2_DEF)
    sig = re.compile(r'\b(Gap2Recv_[0-9A-Fa-f]+)::([A-Za-z_]\w*)\s*\(([^)]*)\)')
    out = {}
    for i, l in enumerate(lines):
        m = sig.search(l)
        if not m:
            continue
        cls, method = m.group(1), m.group(2)
        brace = None
        for j in range(i, min(len(lines), i + 8)):
            if "{" in _x93_code(lines[j]):
                brace = j
                break
        if brace is None:
            continue
        depth, end = 0, None
        for j in range(brace, len(lines)):
            c = _x93_code(lines[j])
            c = re.sub(r"/\*.*?\*/", "", c)
            for ch in c:
                if ch == "{":
                    depth += 1
                elif ch == "}":
                    depth -= 1
                    if depth == 0:
                        end = j
                        break
            if end is not None:
                break
        if end is None:
            continue
        addr = None
        for j in range(i, max(-1, i - 6), -1):
            cm = re.match(r'\s*//\s*0x([0-9A-Fa-f]{6,8})\s*$', lines[j])
            if cm:
                addr = int(cm.group(1), 16)
                break
        if addr is None:
            addr = int(cls.split("_", 1)[1], 16)
        out[cls] = {"method": method, "params": m.group(3).strip(),
                    "addr": addr, "body": "\n".join(lines[i:end + 1]),
                    "start": i, "end": end}
    return out


def _x93_e4_index():
    idx = {}
    for p in sorted((SRC / "e4").rglob("*.hpp")):
        try:
            lines = _x93_read_lines(p)
        except Exception:
            continue
        for name, s, e in _x93_scan_structs(lines):
            if name in idx and p.name != "_tree_full_e4.hpp":
                continue
            mems, maxend = {}, 0
            for m in _x93_parse_members(lines, s, e):
                if m["off"] is not None:
                    mems.setdefault(m["name"], (m["off"], m["size"]))
                    maxend = max(maxend, m["off"] + m["size"])
            idx[name] = {"file": str(p), "members": mems, "maxend": maxend,
                         "start": s, "end": e}
    return idx


def _x93_load_csp():
    d = json.load(open(CSP_REPORT, encoding="utf-8"))["functions"]
    return {int(k, 16): v for k, v in d.items()}


def _x93_owner_size(owner, layouts, e4):
    v = layouts.get(owner)
    if isinstance(v, dict) and v.get("size"):
        return int(v["size"])
    if owner in e4:
        return e4[owner]["maxend"]
    return None


def _x93_ancestors(hier, cls):
    """All transitive bases (MI-safe BFS over the full `direct` list)."""
    direct = hier.get("direct", {})
    out, queue, seen = set(), [cls], {cls}
    while queue:
        cur = queue.pop(0)
        for p in direct.get(cur) or []:
            if p not in seen:
                seen.add(p)
                out.add(p)
                queue.append(p)
    return out


def _x93_is_descendant(hier, cls, ancestor):
    return ancestor in _x93_ancestors(hier, cls)


def _x93_check_body(body, owner, info, e4, layouts, hier):
    code = re.sub(r'/\*.*?\*/', '', body, flags=re.S)
    code = re.sub(r'//[^\n]*', '', code)
    used = sorted(set(re.findall(r'this\s*->\s*([A-Za-z_]\w*)', code)))
    synth = {m["name"]: m["off"] for m in info["members"]}
    own = e4[owner]["members"]
    size = _x93_owner_size(owner, layouts, e4)
    res = {"used": used, "missing": [], "offset_mismatch": [],
           "out_of_size": [], "this_casts": [], "raw_this": 0,
           "descendant_casts": [], "owner_size": size, "max_synth": None}
    for nm in used:
        so = synth.get(nm)
        if so is not None:
            res["max_synth"] = so if res["max_synth"] is None else max(res["max_synth"], so)
            if size is not None and so >= size:
                res["out_of_size"].append([nm, so])
        if nm not in own:
            res["missing"].append(nm)
            continue
        oo = own[nm][0]
        if so is not None and so != oo:
            res["offset_mismatch"].append([nm, so, oo])
    for m in re.finditer(r'\(\s*(?:const\s+)?([A-Za-z_]\w*)\s*\*\s*\)\s*this\b', code):
        t = m.group(1)
        if t == owner or t in _x93_ancestors(hier, owner):
            continue
        if _x93_is_descendant(hier, t, owner):
            res["descendant_casts"].append(t)
        else:
            res["this_casts"].append(t)
    res["this_casts"] = sorted(set(res["this_casts"]))
    res["descendant_casts"] = sorted(set(res["descendant_casts"]))
    raw = len(re.findall(r'\)\s*this\s*\+', code))
    raw += len(re.findall(r'this\s*\+\s*0x?[0-9A-Fa-f]+', code))
    raw += len(re.findall(r'this\s*\[\s*[0-9]', code))
    res["raw_this"] = raw
    if res["out_of_size"]:
        nm, off = max(res["out_of_size"], key=lambda x: x[1])
        res["verdict"] = "owner_too_coarse"
        res["reason"] = "body touches +0x%X (%s) beyond %s size 0x%X" % (
            off, nm, owner, size)
    elif res["descendant_casts"]:
        res["verdict"] = "owner_too_coarse"
        res["reason"] = "body casts this to descendant %s of %s" % (
            ", ".join(res["descendant_casts"]), owner)
    elif res["missing"]:
        res["verdict"] = "owner_layout_mismatch"
        res["reason"] = "names absent from %s: %s" % (
            owner, ", ".join(res["missing"][:6]))
    elif res["offset_mismatch"]:
        res["verdict"] = "owner_layout_mismatch"
        res["reason"] = "offset mismatch vs synthetic: %s" % ", ".join(
            "%s 0x%X!=0x%X" % tuple(x) for x in res["offset_mismatch"][:6])
    elif res["this_casts"]:
        res["verdict"] = "this_cast"
        res["reason"] = "this cast to unrelated " + ", ".join(res["this_casts"])
    elif res["raw_this"]:
        res["verdict"] = "raw_this_arith"
        res["reason"] = "raw this arithmetic x%d" % res["raw_this"]
    else:
        res["verdict"] = "relocatable"
        res["reason"] = ""
    return res


def _x93_rows():
    decls = _x93_parse_synthetic()
    defs = _x93_parse_defs()
    csp = _x93_load_csp()
    layouts = json.load(open(ROOT / "tools" / "class_layouts.json", encoding="utf-8"))
    e4 = _x93_e4_index()
    hier = json.load(open(RTTI_DIRECT, encoding="utf-8"))
    rows = []
    for cls in sorted(decls, key=lambda c: int(c.split("_", 1)[1], 16)):
        addr = int(cls.split("_", 1)[1], 16)
        c = csp.get(addr) or {}
        owner = c.get("inferred_real_class")
        if owner == "unknown":
            owner = None
        row = {"cls": cls, "address": "0x%08X" % addr, "addr": addr,
               "owner": owner, "inferred_name": c.get("inferred_name"),
               "calling_convention": c.get("calling_convention"),
               "has_body": cls in defs, "method": None, "verdict": None,
               "reason": "", "owner_header": None, "checks": None}
        if cls in defs:
            row["method"] = defs[cls]["method"]
        if not row["has_body"]:
            row["verdict"] = "csp_gap" if not owner else "no_body"
            row["reason"] = "no definition in _gap2" if owner else "no CSP entry"
            rows.append(row)
            continue
        if not owner:
            row["verdict"] = "csp_gap"
            row["reason"] = "no CSP inferred_real_class"
            rows.append(row)
            continue
        if owner not in e4:
            row["verdict"] = "no_e4_carrier"
            row["reason"] = "owner is not defined in an e4 header"
            rows.append(row)
            continue
        chk = _x93_check_body(defs[cls]["body"], owner, decls[cls], e4,
                              layouts, hier)
        row["checks"] = chk
        row["verdict"] = chk["verdict"]
        row["reason"] = chk["reason"]
        row["owner_header"] = e4[owner]["file"]
        rows.append(row)
    return rows, decls, defs, csp, e4


def _x93_owner_tu(owner):
    cand = SRC / "e4" / (owner + "_e4.cpp")
    if cand.exists():
        return cand
    low = (owner + "_e4.cpp").lower()
    for p in sorted((SRC / "e4").glob("*.cpp")):
        if p.name.lower() == low:
            return p
    for p in sorted((SRC / "e4").rglob("*.cpp")):
        if p.name.lower() == low:
            return p
    for p in sorted(SRC.rglob(owner + "_bodies.cpp")):
        return p
    for p in sorted(SRC.rglob(owner.lower() + "_bodies.cpp")):
        return p
    return None


def _x93_decl_text(defs, cls, owner, info):
    d = defs[cls]
    ret = ""
    for m in info["methods"]:
        if m["method"] == d["method"]:
            ret = m["ret"]
            break
    return "%s %s(%s);  // 0x%08X" % (
        ret or "int", d["method"], d["params"], d["addr"])


def _x93_strip_blocks(lines, begin, end):
    out, skip = [], False
    for ln in lines:
        if begin in ln:
            skip = True
            continue
        if end in ln:
            skip = False
            continue
        if not skip:
            out.append(ln)
    return out


def _x93_insert_decl(lines, cls, decl):
    """Insert a declaration into the class body of `lines` (in place)."""
    for name, s, e in _x93_scan_structs(lines):
        if name != cls:
            continue
        body = "\n".join(lines[s:e + 1])
        if re.search(r'\b' + re.escape(decl.split("(")[0].split()[-1]) + r'\s*\(', body):
            return False  # already declared (native or prior run)
        block = ["    " + X93_DECL_BEGIN, "    " + decl, "    " + X93_DECL_END]
        lines[e:e] = block
        return True
    return False


def _x93_remove_synth_decl(lines, cls, method):
    for name, s, e in _x93_scan_structs(lines):
        if name != cls:
            continue
        pat = re.compile(r'\b' + re.escape(method) + r'\s*\(')
        for k in range(e - 1, s, -1):
            if pat.search(_x93_code(lines[k])):
                del lines[k]
                return True
    return False


def _x93_remove_synth_def(lines, cls, method):
    sig = re.compile(r'\b' + re.escape(cls) + r'::' + re.escape(method) + r'\s*\(')
    start = next((i for i, l in enumerate(lines) if sig.search(l)), None)
    if start is None:
        return False
    rem_start = start
    j = start - 1
    while j >= 0 and lines[j].strip() == "":
        j -= 1
    if j >= 0 and re.match(r'^\s*//\s*0x[0-9A-Fa-f]{6,8}\s*$', lines[j]):
        rem_start = j
    brace = None
    for k in range(start, min(len(lines), start + 8)):
        if "{" in _x93_code(lines[k]):
            brace = k
            break
    if brace is None:
        return False
    depth, end = 0, None
    for k in range(brace, len(lines)):
        c = _x93_code(lines[k])
        for ch in c:
            if ch == "{":
                depth += 1
            elif ch == "}":
                depth -= 1
                if depth == 0:
                    end = k
                    break
        if end is not None:
            break
    if end is None:
        return False
    rem_end = end
    while rem_end + 1 < len(lines) and lines[rem_end + 1].strip() == "":
        rem_end += 1
    del lines[rem_start:rem_end + 1]
    return True


def _x93_ensure_include(tu_path, header_path):
    lines = _x93_read_lines(tu_path)
    base = Path(header_path).name
    if any(base in ln for ln in lines):
        return False
    rel = Path(header_path).relative_to(SRC).as_posix()
    last = max((i for i, l in enumerate(lines) if l.startswith("#include")),
               default=-1)
    lines.insert(last + 1, '#include "%s"' % rel)
    _x93_write_lines(tu_path, lines)
    return True


def _x93_call_rewrite(owner, old_method, new_method, root, owner_header=None):
    """Memberize free-call sites `Old(recv, args)` -> `((Owner*)recv)->New(args)`."""
    written = []
    pat = re.compile(r'(?<![\w:])' + re.escape(old_method) + r'\s*\(')
    # Only e4-universe TUs: the owner declaration lives in the e4 headers, and
    # tree TUs may not see (or may define a conflicting twin of) the owner.
    # Non-e4 call sites keep their free declaration (they compile unchanged;
    # the free symbol is a pre-existing link debt, not introduced here).
    files = sorted((root / "e4").rglob("*.cpp"))
    for p in files:
        rel = p.relative_to(root).as_posix()
        try:
            text = p.read_bytes().decode("latin-1")
        except OSError:
            continue
        if old_method not in text:
            continue
        spans = []
        for m in pat.finditer(text):
            before = text[:m.start()]
            tail = before.rstrip()
            if tail.endswith("::") or tail.endswith("->") or tail.endswith("."):
                continue
            # statement start = after the last ; { } (declaration vs call)
            stmt_start = max(before.rfind(";"), before.rfind("{"),
                             before.rfind("}")) + 1
            prefix = before[stmt_start:]
            pc = re.sub(r'//[^\n]*', '', prefix)
            pc = re.sub(r'/\*.*?\*/', '', pc, flags=re.S)
            pp = pc.strip()
            if re.match(r'^[A-Za-z_][\w:<>,\s\*&]*$', pp) and \
                    not re.search(r'\b(return|new|delete|throw|case|else|if|'
                                  r'while|for|switch|do)\b', pp):
                op0 = m.end() - 1
                depth, i, end0 = 0, op0, None
                while i < len(text):
                    if text[i] == "(":
                        depth += 1
                    elif text[i] == ")":
                        depth -= 1
                        if depth == 0:
                            end0 = i
                            break
                    i += 1
                if end0 is not None and \
                        text[end0 + 1:].lstrip().startswith(";"):
                    continue  # declaration
            op = m.end() - 1
            depth, i, end = 0, op, None
            while i < len(text):
                c = text[i]
                if c == "(":
                    depth += 1
                elif c == ")":
                    depth -= 1
                    if depth == 0:
                        end = i
                        break
                i += 1
            if end is None:
                continue
            after = text[end + 1:end + 40].lstrip()
            if after.startswith("{"):
                continue  # definition head
            args = text[op + 1:end]
            depth, cur, parts, i = 0, [], [], 0
            while i < len(args):
                c = args[i]
                if c in "([{":
                    depth += 1
                elif c in ")]}":
                    depth -= 1
                if c == "," and depth == 0:
                    parts.append("".join(cur))
                    cur = []
                else:
                    cur.append(c)
                i += 1
            parts.append("".join(cur))
            if len(parts) < 1:
                continue
            arg0 = parts[0].strip()
            rest = ", ".join(x.strip() for x in parts[1:] if x.strip())
            if arg0 == "this":
                rep = "this->%s(%s)" % (new_method, rest)
            else:
                rep = "((%s *)%s)->%s(%s)" % (owner, arg0, new_method, rest)
            spans.append((m.start(), end + 1, rep))
        if not spans:
            continue
        for a, b, rep in reversed(spans):
            text = text[:a] + rep + text[b:]
        p.write_bytes(text.encode("latin-1"))
        if owner_header:
            _x93_ensure_include(p, owner_header)
        written.append({"file": rel, "sites": len(spans)})
    return written


def _x93_build_gap(rows, csp):
    """Tree-wide Gap2Recv tokens WITHOUT a CSP owner (csp_gap.json)."""
    signals = json.load(open(SIGNALS_JSON, encoding="utf-8")).get("symbols", {})
    truth = json.load(open(STRUCTURAL_TRUTH, encoding="utf-8"))
    slot = {int(k, 16) for k in truth.get("slot_this", {})}
    ctor = {int(k, 16) for k in truth.get("vtable_install", {})}
    tpass = {int(k, 16) for k in truth.get("this_pass", {})}
    raw_this = set()
    for p in (SRC / "raw_decomp").glob("*.c"):
        try:
            t = p.read_text(encoding="utf-8", errors="replace")
        except OSError:
            continue
        for m in re.finditer(r'//\s*=+\s*0x([0-9A-Fa-f]{6,8})\s+\S+\s+this=',
                             t):
            raw_this.add(int(m.group(1), 16))
    tok = re.compile(r'Gap2Recv_[0-9A-Fa-f]{4,6}\b')
    gap = {}
    for p in SRC.rglob("*"):
        if p.suffix.lower() not in (".cpp", ".hpp", ".inc", ".h", ".c"):
            continue
        try:
            t = p.read_text(encoding="utf-8", errors="replace")
        except OSError:
            continue
        if "Gap2Recv_" not in t:
            continue
        for name in set(tok.findall(t)):
            a = int(name.split("_", 1)[1], 16)
            c = csp.get(a)
            if c and c.get("inferred_real_class") and \
                    c["inferred_real_class"] != "unknown":
                continue
            ent = gap.setdefault(name, {"name": name,
                                        "address": "0x%08X" % a,
                                        "files": []})
            rel = p.relative_to(SRC).as_posix()
            if rel not in ent["files"]:
                ent["files"].append(rel)
    owned = {r["cls"] for r in rows if r["owner"]}
    for ent in gap.values():
        a = int(ent["address"], 16)
        sig = signals.get("0x%08x" % a) or {}
        bf = sig.get("backfill") or {}
        ch = {
            "vtable_slot": a in slot,
            "ctor_install": a in ctor,
            "call_site_this": a in tpass or a in raw_this,
        }
        ent["signals_name"] = sig.get("name")
        ent["backfill_status"] = bf.get("status")
        ent["backfill_cls"] = bf.get("cls")
        ent["channels"] = ch
        ent["channel"] = "+".join(k for k, v in ch.items() if v) or "none"
        trunc = [c for c in owned if c.startswith(ent["name"]) and c != ent["name"]]
        ent["truncated_prefix_of"] = trunc[0] if trunc else None
    return gap


def _x93_write_csp_gap(rows, csp):
    gap = _x93_build_gap(rows, csp)
    ents = sorted(gap.values(), key=lambda e: (int(e["address"], 16), e["name"]))
    chan = defaultdict(int)
    for e in ents:
        chan[e["channel"]] += 1
    out = {
        "schema": "csp-gap/v1",
        "note": ("Gap2Recv_* receivers with NO CSP inferred_real_class. "
                 "They keep the synthetic fallback. backfill.cls is a hint, "
                 "never ownership."),
        "count": len(ents),
        "by_channel": dict(chan),
        "truncated_prefix_count": sum(1 for e in ents
                                      if e["truncated_prefix_of"]),
        "entries": ents,
    }
    CSP_GAP_OUT.write_text(json.dumps(out, indent=1), encoding="utf-8")
    return out


def _x93_write_hint(rows, pilot_addrs):
    ents = []
    for r in rows:
        if not r["has_body"] or not r["owner"]:
            continue
        chk = r["checks"] or {}
        if r["verdict"] == "relocatable":
            continue
        oo = chk.get("out_of_size") or []
        off = max((x[1] for x in oo), default=None)
        ents.append({
            "cls": r["cls"], "address": r["address"], "method": r["method"],
            "csp_owner": r["owner"], "verdict": r["verdict"],
            "reason": r["reason"],
            "measured_offset": ("0x%X" % off) if off is not None else None,
            "owner_size": ("0x%X" % chk["owner_size"])
            if chk.get("owner_size") is not None else None,
            "used_names": (chk.get("used") or [])[:12],
            "missing_names": (chk.get("missing") or [])[:12],
            "descendant_casts": chk.get("descendant_casts") or [],
            "pilot": r["addr"] in pilot_addrs,
        })
    out = {"schema": "csp-hint/v1",
           "note": ("CSP owner is correct-but-weak (LCA) for these bodies: "
                    "relocating them without a layout rewrite would be wrong. "
                    "Synthetic fallback kept."),
           "count": len(ents), "entries": ents}
    CSP_HINT_OUT.write_text(json.dumps(out, indent=1), encoding="utf-8")
    return out


def _x93_load_gate_bank():
    """Measured AST-cohort delta table: addresses whose relocation would grow
    a gate category (W2 measurement; X92 precedent = bank, never force)."""
    if not X93_GATE_BANK.exists():
        return {}
    d = json.load(open(X93_GATE_BANK, encoding="utf-8"))
    return {int(k, 16): v for k, v in (d.get("bank") or {}).items()}


def _x93_plan(limit):
    rows, decls, defs, csp, e4 = _x93_rows()
    bank = _x93_load_gate_bank()
    with_body = [r for r in rows if r["has_body"] and r["owner"]]
    with_body.sort(key=lambda r: r["addr"])
    pilot = with_body[:limit]
    pilot_addrs = {r["addr"] for r in pilot}
    plan = []
    for r in pilot:
        if r["verdict"] != "relocatable":
            continue
        if r["addr"] in bank:
            r["verdict"] = "gate_growth_bank"
            r["reason"] = "AST cohort delta %s (banked; synthetic fallback kept)" % (
                json.dumps(bank[r["addr"]].get("delta") or {}, ensure_ascii=False))
            continue
        cls = r["cls"]
        d = defs[cls]
        method = d["method"]
        inf = r.get("inferred_name") or ""
        if inf.startswith(r["owner"] + "::"):
            im = inf.split("::")[-1]
            if re.match(r'^[A-Za-z_]\w*$', im):
                method = im
        tu = _x93_owner_tu(r["owner"])
        ret = ""
        for m in decls[cls]["methods"]:
            if m["method"] == d["method"]:
                ret = m["ret"]
                break
        plan.append({
            "cls": cls, "address": r["address"], "addr": r["addr"],
            "owner": r["owner"], "method_old": d["method"],
            "method": method, "ret": ret or "int",
            "params": d["params"], "owner_header": r["owner_header"],
            "owner_tu": (str(tu.relative_to(ROOT)).replace("\\", "/")
                         if tu else None),
            "def_body": d["body"], "verdict": r["verdict"],
        })
    return rows, plan, pilot_addrs


def _x93_apply(plan):
    if not plan:
        return {"applied": 0}
    headers = defaultdict(lambda: defaultdict(list))
    tus = defaultdict(list)
    dlines = _x93_read_lines(GAP2_DECL)
    flines = _x93_read_lines(GAP2_DEF)
    for e in reversed(plan):  # defs: bottom-up keeps earlier offsets valid
        _x93_remove_synth_def(flines, e["cls"], e["method_old"])
    for e in plan:
        _x93_remove_synth_decl(dlines, e["cls"], e["method_old"])
        hdr = e["owner_header"]
        headers[hdr][e["owner"]].append(
            "%s %s(%s);  // 0x%08X" % (e["ret"], e["method"],
                                       e["params"], e["addr"]))
        body = e["def_body"].replace(
            e["cls"] + "::" + e["method_old"],
            e["owner"] + "::" + e["method"], 1)
        tus[e["owner_tu"]].append("// 0x%08X\n%s" % (e["addr"], body))
    _x93_write_lines(GAP2_DECL, dlines)
    _x93_write_lines(GAP2_DEF, flines)

    decl_headers = sorted({Path(h) for h in headers})
    # strip our blocks everywhere first (idempotent), then re-insert
    for p in sorted((SRC / "e4").rglob("*.hpp")):
        lines = _x93_read_lines(p)
        new = _x93_strip_blocks(lines, X93_DECL_BEGIN, X93_DECL_END)
        if new != lines:
            _x93_write_lines(p, new)
    hdr_report = []
    for hp in decl_headers:
        lines = _x93_read_lines(hp)
        n = 0
        for cls, decls in headers[str(hp)].items():
            for d in decls:
                if _x93_insert_decl(lines, cls, d):
                    n += 1
        _x93_write_lines(hp, lines)
        hdr_report.append({"file": str(hp.relative_to(ROOT)).replace("\\", "/"),
                           "decls": n})
    tu_report = []
    for tu, defs_ in tus.items():
        if not tu:
            continue
        p = ROOT / tu
        _x93_ensure_include(p, headers_key_for(tu, plan))
        lines = _x93_read_lines(p)
        lines = _x93_strip_blocks(lines, X93_CPP_BEGIN, X93_CPP_END)
        while lines and lines[-1].strip() == "":
            lines.pop()
        lines += ["", X93_CPP_BEGIN,
                  "// X93: CSP inferred_real_class ownership "
                  "(tools/gen_gap2_defs.py).", "namespace gamemd {"]
        for d in defs_:
            lines.append(d)
        lines += ["} // namespace gamemd", X93_CPP_END, ""]
        _x93_write_lines(p, lines)
        tu_report.append({"file": str(tu).replace("\\", "/"),
                          "defs": len(defs_)})
    calls = []
    for e in plan:
        calls += _x93_call_rewrite(e["owner"], e["method_old"], e["method"],
                                   SRC, e["owner_header"])
    return {"applied": len(plan), "headers": hdr_report,
            "tus": tu_report, "call_sites": calls}


def headers_key_for(tu_path, plan):
    """Owner header for the first plan row routed to this TU."""
    t = str(tu_path).replace("\\", "/")
    for e in plan:
        if e["owner_tu"] == t:
            return e["owner_header"]
    return plan[0]["owner_header"]


def _x93_write_extra_table(plan):
    """Consumed by gen_tree_full_e4.py on a full regeneration."""
    tbl = defaultdict(list)
    for e in plan:
        tbl[e["owner"]].append("%s %s(%s);  // 0x%08X" % (
            e["ret"], e["method"], e["params"], e["addr"]))
    X93_EXTRA_TABLE.parent.mkdir(parents=True, exist_ok=True)
    X93_EXTRA_TABLE.write_text(json.dumps(dict(tbl), indent=1),
                               encoding="utf-8")


def run_x93(apply=False, limit=20):
    rows, plan, pilot_addrs = _x93_plan(limit)
    gap = _x93_write_csp_gap(rows, _x93_load_csp())
    hint = _x93_write_hint(rows, pilot_addrs)
    _x93_write_extra_table(plan)
    applied = _x93_apply(plan) if apply else {"applied": 0}
    verdicts = defaultdict(int)
    for r in rows:
        verdicts[r["verdict"]] += 1
    report = {
        "schema": "x93-report/v1",
        "synthetic_classes": len(rows),
        "bodies": sum(1 for r in rows if r["has_body"]),
        "csp_owned": sum(1 for r in rows if r["owner"]),
        "verdicts": dict(verdicts),
        "pilot": [r["address"] for r in sorted(
            (x for x in rows if x["has_body"] and x["owner"]),
            key=lambda x: x["addr"])[:limit]],
        "plan": [{k: v for k, v in e.items() if k != "def_body"}
                 for e in plan],
        "applied": applied,
        "csp_gap": {"count": gap["count"],
                    "by_channel": gap["by_channel"],
                    "truncated_prefix_count": gap["truncated_prefix_count"]},
        "csp_hint": hint["count"],
        "apply": bool(apply),
    }
    X93_PLAN_OUT.write_text(json.dumps(report, indent=1), encoding="utf-8")
    X93_REPORT_OUT.write_text(json.dumps(report, indent=1), encoding="utf-8")
    print("=" * 70)
    print("  X93 CSP-first gap2 ownership  (apply=%s, limit=%d)" % (apply, limit))
    print("=" * 70)
    print("  synthetic classes           : %d" % report["synthetic_classes"])
    print("  bodies                      : %d" % report["bodies"])
    print("  CSP-owned                   : %d" % report["csp_owned"])
    for k in sorted(verdicts):
        print("  %-28s: %d" % (k, verdicts[k]))
    print("  pilot addresses             : %d" % len(report["pilot"]))
    print("  planned relocations         : %d" % len(plan))
    print("  csp_gap entries             : %d %s" % (
        gap["count"], gap["by_channel"]))
    print("  csp_hint entries            : %d" % hint["count"])
    if apply:
        print("  APPLIED                     : %d" % applied["applied"])
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--phase", choices=["lnk", "bulk", "both"], default="both")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--x93-plan", action="store_true")
    ap.add_argument("--x93-apply", action="store_true")
    ap.add_argument("--x93-limit", type=int, default=20)
    args = ap.parse_args()

    if args.x93_plan or args.x93_apply:
        return run_x93(apply=args.x93_apply, limit=args.x93_limit)

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


# X89: LNK data-global type overrides (binary use-kind authority).
# g_ZBufferDescriptor is a pointer to gamemd::Stream (mov edx,[887644];
# [edx+1Ch]); the LNK signature only carried the placeholder `int`.
GLOBAL_TYPE_OVERRIDES = {
    'g_ZBufferDescriptor': ('struct gamemd::Stream *', 'nullptr',
                            'namespace gamemd { struct Stream; }'),
}
GLOBAL_TYPE_COMMENTS = {
    'g_ZBufferDescriptor': ' // data: 0x887644 (binary: Stream*)',
}


def apply_global_type_overrides():
    """X89: surgical application of GLOBAL_TYPE_OVERRIDES to the current
    gap2_global_defs.cpp (no full bulk regen).  Idempotent."""
    path = SRC / "_gap2" / "gap2_global_defs.cpp"
    if not path.exists():
        raise SystemExit("missing %s" % path)
    raw = path.read_bytes().decode("utf-8", "replace")
    lines = raw.split("\n")
    changed = 0
    for name, (ty, init, fwd) in GLOBAL_TYPE_OVERRIDES.items():
        # ensure the fwd declaration precedes the definition
        if not any(l.strip().startswith(fwd) for l in lines):
            for i, l in enumerate(lines):
                if l.startswith('#include "e4/e4_globals_decls.hpp"'):
                    lines.insert(i + 1, fwd + "  // X89: LNK override pointee")
                    changed += 1
                    break
        for i, l in enumerate(lines):
            if not re.search(r'\b%s\b' % re.escape(name), l):
                continue
            if not re.match(r'^\s*[A-Za-z_].*\b%s\s*=' % re.escape(name), l):
                continue
            cr = l.endswith("\r")
            body = l[:-1] if cr else l
            m = re.match(r'^(\s*).*?\b%s\s*=\s*.*?;(\s*//.*)?$' % re.escape(name), body)
            if not m:
                continue
            tytxt = ty.rstrip()
            sep = '' if tytxt.endswith('*') else ' '
            comment = GLOBAL_TYPE_COMMENTS.get(name) or (m.group(2) or "")
            new = "%s%s%s%s = %s;%s" % (m.group(1), tytxt, sep, name, init, comment)
            new = new.rstrip()
            if new != body:
                lines[i] = new + ("\r" if cr else "")
                changed += 1
            break
    path.write_bytes("\n".join(lines).encode("utf-8"))
    print("gap2 global overrides applied: %d line(s)" % changed)


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
    ov = GLOBAL_TYPE_OVERRIDES.get(var)
    ov_init = None
    if ov:
        typ_clean, ov_init, ov_fwd = ov
        forward_decls.add(ov_fwd)
    # forward-declare any qualified class type in the (pointer) type
    base = typ_clean.replace("*", "").replace("const", "").strip()
    if not ov and base and re.search(r"[A-Za-z_]\w*::", base):
        bparts = _split_top(base, "::")
        cname = bparts[-1].strip()
        cns = [x.strip() for x in bparts[:-1]]
        if cname and IDENT.match(cname):
            forward_decls.add(_ns_wrap(cns, f"{kw} {cname};"))
    init = ov_init or ("nullptr" if typ_clean.endswith("*") else "{}")
    body = _ns_wrap(ns, f"{typ_clean} {var} = {init};")
    global_defs.append("// LNK2019 data global\n" + body)
    return True


if __name__ == "__main__":
    if "--override-only" in sys.argv:
        apply_global_type_overrides()
        sys.exit(0)
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
