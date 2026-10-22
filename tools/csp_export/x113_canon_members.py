#!/usr/bin/env python3
"""X113 -- libclang-based canonical member rewriter.

Resolves every member ACCESS to (receiver class, member byte offset) from the
clang AST and rewrites it to the SAME canonical name in the carrier
declaration and in every body access -- by byte offsets, never by text
substitution.

Why the token stream is involved: for an ill-formed access such as
`voidptr->vtable2` clang destroys the AST node (error recovery turns
`&p->vtable2` into `operator&(p, <error>)` with no name node at all), so the
sites cannot be recovered by walking MemberExpr alone.  Sites are therefore
enumerated from the preprocessor token stream while every DECISION comes from
the AST: record layouts (FieldDecl byte offsets / widths), per-function
parameter and local types (VarDecl/ParmDecl), class-field types (chains such as
`this->Owner->Power`) and per-class method-name sets.

Authority chain for canonical(cls, off):
  1. tools/member_lookup.json[cls][off].name      (naming authority)
  2. the carrier's own declared field at off      (the tree's compiled truth)
  3. anchors/class_layouts_rebuilt.json member    (X112 rebuilt sidecar)
Gate-hygiene tie-break: a candidate carrying an `field_`/`dword_`/`unk_`/`sub_`
token loses to a candidate that does not (ida-naming shall never grow).
Banned as canonical: `vtableN`/`vtblN` (success criterion: 0 identifiers),
non-identifier junk (`UINameLabel[0x20]`), C++ keywords, padding names.

Safety: a rename (cls, old -> new) is applied only if every textual member
access of `old` outside comments/strings is accounted for by an AST-known
access site (rewritten or already canonical).  Any residual occurrence aborts
that rename and is reported -- this covers `#if 0` regions, files outside the
compile set and second class universes that clang cannot see.

Usage:
    python tools/csp_export/x113_canon_members.py --scan [--jobs 8] [--limit N]
    python tools/csp_export/x113_canon_members.py --report [--class A,B]
    python tools/csp_export/x113_canon_members.py --apply  [--class A,B] [--dry-run]
"""
import argparse
import bisect
import concurrent.futures as cf
import json
import os
import re
import sys
import time
import xml.etree.ElementTree as ET
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
CACHE = ROOT / ".omo" / "x113"


def _norm_path(p):
    """Canonical filesystem path for declaration identity.

    The same header is reached through different include spellings
    (`src/core/math.hpp` vs `src\\core/math.hpp`); storing the raw spelling
    made one FieldDecl look like two declarations, which X113 then flagged as
    a name collision and skipped (5,358 duplicate field rows / 1,458 false
    collision pairs).  Identity is path-normalized; edits still use the
    canonical path (same file).
    """
    return os.path.normcase(os.path.normpath(os.path.abspath(str(p))))

SCAN_PATH = CACHE / "scan.json"
ML_PATH = ROOT / "tools" / "member_lookup.json"
SIDECAR_PATH = ROOT / "anchors" / "class_layouts_rebuilt.json"
VCXPROJ = ROOT / "build_win" / "gamemd.vcxproj"

# ---------------------------------------------------------------- name forms
IDENT = re.compile(r"^[A-Za-z_]\w*$")
BANNED_CANON = re.compile(r"^(?:vtable|vtbl)\d+$", re.I)
GATE_DIRTY = re.compile(r"(?:^|_)(?:field|dword|unk|sub)_", re.I)
CPP_KEYWORDS = {
    "alignas", "alignof", "and", "asm", "auto", "bool", "break", "case",
    "catch", "char", "class", "const", "constexpr", "continue", "decltype",
    "default", "delete", "do", "double", "else", "enum", "explicit", "export",
    "extern", "false", "float", "for", "friend", "goto", "if", "inline", "int",
    "long", "mutable", "namespace", "new", "noexcept", "not", "nullptr",
    "operator", "or", "private", "protected", "public", "register", "return",
    "short", "signed", "sizeof", "static", "struct", "switch", "template",
    "this", "throw", "true", "try", "typedef", "typeid", "typename", "union",
    "unsigned", "using", "virtual", "void", "volatile", "while",
}

OFF_PATTERNS = [
    (re.compile(r"^(?:\w+_)?field_0x([0-9A-Fa-f]+)$"), 16),
    (re.compile(r"^u(?:8|16|32|64)_([0-9A-Fa-f]+)$"), 16),
    (re.compile(r"^ptr_([0-9A-Fa-f]+)$"), 16),
    (re.compile(r"^m_([0-9A-Fa-f]+)$"), 16),
    (re.compile(r"^q([0-9A-Fa-f]{2,6})$"), 16),
    (re.compile(r"^[A-Z]\w*_([0-9A-Fa-f]{2,6})$"), 16),
    (re.compile(r"^(?:vtable|vtbl)(\d+)$", re.I), "vtab"),
]


def form_of(name):
    """Form classification. Every generated pattern is anchored AND requires a
    hex offset suffix -- a bare prefix test would misclassify semantic members
    such as `m_bmp`, `m_height`, `m_frame_count` as generated placeholders."""
    if re.match(r"^(?:vtable|vtbl)\d+$", name, re.I):
        return "vtableN"
    if re.match(r"^u(?:8|16|32|64)_[0-9A-Fa-f]+$", name):
        return "u32_"
    if re.match(r"^(?:\w+_)?field_0x[0-9A-Fa-f]+$", name):
        return "Class_field_0x"
    if re.match(r"^q[0-9A-Fa-f]{2,6}$", name):
        return "qNNN"
    if re.match(r"^ptr_[0-9A-Fa-f]+$", name):
        return "ptr_NN"
    if re.match(r"^m_[0-9A-Fa-f]+$", name):
        return "m_NN"
    if re.match(r"^(?:__?pad|__?gap|alignmentPadding|unused|zero)", name):
        return "pad"
    if re.match(r"^[A-Z]\w*_[0-9A-Fa-f]{2,6}$", name):
        return "Type_NN"
    return "other"


def offset_from_name(name):
    for pat, kind in OFF_PATTERNS:
        m = pat.match(name)
        if not m:
            continue
        if kind == "vtab":
            return (int(m.group(1)) - 1) * 4   # til 4-dword prefix
        return int(m.group(1), 16)
    return None


def valid_canon(name):
    return bool(name) and bool(IDENT.match(name)) and not BANNED_CANON.match(name) \
        and name not in CPP_KEYWORDS and not is_pad(name)


def unqual(q):
    """Class display name from a `qname@file` class key."""
    return q.split("::")[-1] if q else q


def cls_of(ckey):
    """`gamemd::X@src/x.hpp` -> `gamemd::X`."""
    return ckey.split("@")[0] if ckey else ckey


def unqual_ck(ckey):
    return unqual(cls_of(ckey))


def name_matches_offset(name, off):
    """A generated name that encodes a *different* offset is stale; refuse it."""
    o = offset_from_name(name)
    return o is None or o == off


PAD_RE = re.compile(r"^(?:__?pad|__?gap|alignmentPadding|unused|zero)", re.I)


def is_pad(name):
    return bool(PAD_RE.match(name))


WORD4 = {"int", "unsigned", "unsigned int", "uint32_t", "int32_t", "DWORD",
         "UINT", "ULONG", "LONG", "unsigned long", "long"}


def scalar_indexable(raw):
    """Pointer to a 4-byte scalar: `p->vtableN` == `p[N-1]` (no cast, no type change)."""
    r = (raw or "").replace("const", "").replace("volatile", "").strip()
    if not r.endswith("*"):
        return False
    base = r[:-1].strip().rstrip("*").strip()
    return base in WORD4


# ------------------------------------------------------------------ TU list
def tu_list():
    ns = "{http://schemas.microsoft.com/developer/msbuild/2003}"
    r = ET.parse(str(VCXPROJ)).getroot()
    out = []
    for ig in r.findall(ns + "ItemGroup"):
        for c in ig.findall(ns + "ClCompile"):
            p = c.get("Include") or ""
            if p.lower().endswith(".cpp"):
                out.append(str(Path(p)))
    return out


# --------------------------------------------------------------- clang walk
def _qname(cur):
    parts = []
    while cur is not None and cur.kind is not None:
        if cur.kind.name == "TRANSLATION_UNIT":
            break
        if cur.kind.name in ("STRUCT_DECL", "CLASS_DECL", "UNION_DECL",
                             "NAMESPACE", "ENUM_DECL"):
            if cur.spelling:
                parts.append(cur.spelling)
        cur = cur.semantic_parent
    return "::".join(reversed(parts))


def _class_of_type(ty):
    """(class key `qname@relfile` or None, raw spelling)."""
    raw = ty.spelling if ty is not None else ""
    if ty is None:
        return None, raw
    try:
        ty = ty.get_canonical()
    except Exception:  # noqa: BLE001
        return None, raw
    guard = 0
    while ty.kind.name in ("POINTER", "LVALUEREFERENCE", "RVALUEREFERENCE") and guard < 8:
        ty = ty.get_pointee()
        guard += 1
    guard = 0
    while ty.kind.name in ("CONSTANTARRAY", "INCOMPLETEARRAY", "VARIABLEARRAY") and guard < 8:
        try:
            ty = ty.get_array_element_type()
        except Exception:  # noqa: BLE001
            break
        guard += 1
    if ty.kind.name not in ("RECORD", "UNEXPOSED"):
        return None, raw
    d = ty.get_declaration()
    if d is None or d.kind.name not in ("STRUCT_DECL", "CLASS_DECL", "UNION_DECL"):
        return None, raw
    return _ckey(d), raw


def _relfile(f):
    try:
        p = str(f.name).replace("\\", "/")
        low = p.lower()
        root = str(ROOT).replace("\\", "/").lower()
        if low.startswith(root + "/"):
            return p[len(root) + 1:].lower()
        return low
    except Exception:  # noqa: BLE001
        return "?"


def _ckey(decl):
    """Class identity = qualified name + defining file (two universes differ)."""
    return "%s@%s" % (_qname(decl), _relfile(decl.location.file))


def scan_tu(tu_path):
    import clang.cindex as ci
    sys.path.insert(0, str(ROOT / "tools"))
    from clang_ast_checker import _find_libclang, _get_default_compile_args

    try:
        _find_libclang()
    except Exception:  # noqa: BLE001 -- already configured in this process
        pass
    rec = {"tu": tu_path, "ok": False, "err": None, "diags": 0, "fields": [],
           "accesses": [], "fns": 0, "tokens": 0, "wall": 0}
    index = ci.Index.create()
    t0 = time.time()
    # X114: parse through an ABSOLUTE path.  With a relative TU path clang
    # reports the main file relatively, `is_proj()` rejected it, recursion
    # stopped at the namespace and no function/parameter/local cursor was
    # ever visited (fns == 0 for all 850 TUs) -- which is why 42k access
    # sites had no receiver type and 9.6k `this` sites resolved to nothing.
    tu_abs = str(Path(tu_path).resolve()) if not os.path.isabs(tu_path) else tu_path
    try:
        tu = index.parse(tu_abs, args=_get_default_compile_args(),
                         options=ci.TranslationUnit.PARSE_INCOMPLETE)
    except Exception as e:  # noqa: BLE001
        rec["err"] = "parse-exc: %s" % e
        return rec
    if tu is None:
        rec["err"] = "parse-none"
        return rec
    try:
        rec["diags"] = sum(1 for d in tu.diagnostics
                           if d.severity >= ci.Diagnostic.Error)
    except Exception:  # noqa: BLE001
        pass

    main = str(Path(tu_abs)).replace("\\", "/").lower()
    proj_src = str(ROOT / "src").replace("\\", "/").lower()
    proj_app = str(ROOT / "app").replace("\\", "/").lower()

    def is_proj(f):
        if f is None:
            return True
        p = f.name.replace("\\", "/").lower()
        return p.startswith(proj_src) or p.startswith(proj_app)

    fields = rec["fields"]
    methods = {}
    field_types = {}
    globals_ = {}
    fns = []

    def walk(cur, depth=0):
        try:
            locf = cur.location.file
        except Exception:  # noqa: BLE001
            locf = None
        if locf is not None and not is_proj(locf):
            return
        kname = cur.kind.name
        if kname in ("STRUCT_DECL", "CLASS_DECL", "UNION_DECL"):
            _scan_record(cur, fields, methods, field_types)
        elif kname in ("CXX_METHOD", "FUNCTION_DECL", "CONSTRUCTOR",
                       "DESTRUCTOR"):
            if locf is not None and locf.name.replace("\\", "/").lower() == main:
                _scan_function(cur, fns)
        elif kname == "VAR_DECL" and depth <= 4:
            p = cur.semantic_parent
            if p is not None and p.kind.name in ("NAMESPACE", "TRANSLATION_UNIT"):
                c, raw = _class_of_type(cur.type)
                if c:
                    globals_[cur.spelling] = (c, raw)
        for ch in cur.get_children():
            walk(ch, depth + 1)

    try:
        walk(tu.cursor)
        rec["ok"] = True
    except Exception as e:  # noqa: BLE001
        rec["err"] = "walk-exc: %s" % e

    rec["fns"] = len(fns)
    fns.sort(key=lambda f: (f[0], -f[1]))
    try:
        _scan_tokens(tu, tu_abs, fields, methods, field_types, globals_, fns,
                     rec, ci)
    except Exception as e:  # noqa: BLE001
        rec["err"] = (rec["err"] or "") + " token-exc: %s" % e
    rec["wall"] = round(time.time() - t0, 2)
    return rec


def _scan_record(cur, fields, methods, field_types):
    try:
        if not cur.is_definition():
            return
    except Exception:  # noqa: BLE001
        return
    f = cur.location.file
    if f is None:
        return
    qn = _ckey(cur)
    if not qn or qn.startswith("@"):
        return
    for ch in cur.get_children():
        if ch.kind.name == "CXX_METHOD":
            methods.setdefault(qn, set()).add(ch.spelling)
            continue
        if ch.kind.name != "FIELD_DECL":
            continue
        name = ch.spelling
        if not name:
            continue
        try:
            if ch.semantic_parent is None or _ckey(ch.semantic_parent) != qn:
                continue
            offb = ch.get_field_offsetof()
        except Exception:  # noqa: BLE001
            continue
        if offb < 0:
            continue
        try:
            width = ch.type.get_size()
        except Exception:  # noqa: BLE001
            width = -1
        st = ch.extent.start
        en = ch.extent.end
        fields.append([qn, name, offb // 8, width, _norm_path(f.name),
                       st.offset, en.offset, ch.type.spelling])
        c, raw = _class_of_type(ch.type)
        field_types.setdefault(qn, {})[name] = (c, raw)


def _scan_function(cur, fns):
    try:
        ext = cur.extent
        if ext.start.offset is None or ext.end.offset is None:
            return
        parent = cur.semantic_parent
        cls = _ckey(parent) if parent is not None and \
            parent.kind.name in ("STRUCT_DECL", "CLASS_DECL", "UNION_DECL") else None
        loc = {}
        for ch in cur.get_children():
            if ch.kind.name == "PARM_DECL":
                c, raw = _class_of_type(ch.type)
                loc[ch.spelling] = (c, raw)
        stack = [(ch, 0) for ch in cur.get_children()
                 if ch.kind.name in ("COMPOUND_STMT", "CXX_TRY_STMT")]
        while stack:
            node, d = stack.pop()
            if d > 40:
                continue
            if node.kind.name == "VAR_DECL":
                c, raw = _class_of_type(node.type)
                loc[node.spelling] = (c, raw)
            for ch in node.get_children():
                stack.append((ch, d + 1))
        fns.append([ext.start.offset, ext.end.offset, cls, loc, cur.spelling])
    except Exception:  # noqa: BLE001
        return


def _scan_tokens(tu, tu_path, fields, methods, field_types, globals_, fns, rec, ci):
    path = Path(tu_path)
    try:
        text = path.read_bytes()
    except OSError:
        return
    fobj = tu.get_file(str(path))
    if not fobj:
        return
    try:
        start = ci.SourceLocation.from_offset(tu, fobj, 0)
        end = ci.SourceLocation.from_offset(tu, fobj, len(text))
        rng = ci.SourceRange.from_locations(start, end)
        toks = [t for t in tu.get_tokens(extent=rng) if t.kind.name != "COMMENT"]
    except Exception:  # noqa: BLE001
        return
    rec["tokens"] = len(toks)

    # bracket matcher (O(n)) for cast / deref / subscript receiver recovery
    match = {}
    stack = []
    pairs = {")": "(", "]": "["}
    for bi, bt in enumerate(toks):
        sp = bt.spelling
        if sp in ("(", "["):
            stack.append((sp, bi))
        elif sp in pairs:
            want = pairs[sp]
            for si in range(len(stack) - 1, -1, -1):
                if stack[si][0] == want:
                    _, oi = stack.pop(si)
                    match[bi] = oi
                    break

    by_cls = {}
    for (qn, name, off, width, file, st, en, tspell) in fields:
        d = by_cls.setdefault(qn, {})
        if name in d and d[name][0] != off:
            d[name] = (-1, -1, None, None)   # duplicate name at different offsets
        else:
            d[name] = (off, width, file, st)

    types_by_name = {}
    for qn in by_cls:
        types_by_name.setdefault(unqual_ck(qn), []).append(qn)

    BUILTIN = {"char", "short", "int", "long", "float", "double", "void",
               "signed", "unsigned", "bool", "wchar_t", "__int8", "__int16",
               "__int32", "__int64", "size_t", "DWORD", "BYTE", "WORD", "UINT",
               "ULONG", "LONG", "BOOL", "HWND", "LPSTR", "LPVOID", "HANDLE"}

    def lookup_type(tn, fn):
        cands = types_by_name.get(tn) or []
        if len(cands) == 1:
            return cands[0]
        cls = fn[2] if fn else None
        if cls:
            ns = cls_of(cls).rsplit("::", 1)[0] if "::" in cls_of(cls) else ""
            same = [c for c in cands
                    if (cls_of(c).rsplit("::", 1)[0] if "::" in cls_of(c) else "") == ns]
            if len(same) == 1:
                return same[0]
            cands = same or cands
        for c in cands:
            if cls_of(c).startswith("gamemd::"):
                return c
        return cands[0] if cands else None

    def cast_class(close_idx, fn):
        """`((Type *)expr)->m` : class named by the inner C-style cast."""
        open_idx = match.get(close_idx)
        if open_idx is None or open_idx + 1 >= close_idx:
            return None
        if toks[open_idx + 1].spelling != "(":
            # `(*ptr).member` -- deref of a pointer variable
            if toks[open_idx + 1].spelling == "*" and open_idx + 2 == close_idx - 1:
                return resolve(open_idx + 2, fn)
            return None
        depth = 0
        inner_close = None
        for j in range(open_idx + 1, close_idx):
            sp = toks[j].spelling
            if sp == "(":
                depth += 1
            elif sp == ")":
                depth -= 1
                if depth == 0:
                    inner_close = j
                    break
        if inner_close is None:
            inner_close = match.get(close_idx - 1)
        if inner_close is None or toks[inner_close - 1].spelling != "*":
            return None
        names = [t.spelling for t in toks[open_idx + 2:inner_close - 1]
                 if IDENT.match(t.spelling) or t.spelling == "::"]
        names = [n for n in names if n != "::"]
        if not names:
            return None
        tn = names[-1]
        if tn in BUILTIN:
            return None
        return lookup_type(tn, fn)

    def subscript_class(close_idx, fn):
        """`ptr[i].member` / `ptr[i]->member` -- class of the indexed element."""
        open_idx = match.get(close_idx)
        if open_idx is None or open_idx == 0:
            return None
        left = open_idx - 1
        if not IDENT.match(toks[left].spelling):
            return None
        return resolve(left, fn)

    fstarts = [f[0] for f in fns]

    def fn_at(off):
        """Innermost main-file function containing `off` (ranges can nest)."""
        i = bisect.bisect_right(fstarts, off) - 1
        steps = 0
        while i >= 0 and steps < 64:
            f = fns[i]
            if f[0] <= off <= f[1]:
                return f
            i -= 1
            steps += 1
        return None

    def fieldclass(cls, name):
        ft = (field_types.get(cls) or {}).get(name)
        return ft[0] if ft else None

    def resolve(idx, fn, depth=0):
        if depth > 6 or idx < 0 or idx >= len(toks):
            return None
        sp = toks[idx].spelling
        if sp == "this":
            return fn[2] if fn else None
        if not IDENT.match(sp):
            return None
        if fn is not None and sp in fn[3]:
            return fn[3][sp][0]
        if idx >= 2 and toks[idx - 1].spelling in ("->", ".") and \
                IDENT.match(toks[idx - 2].spelling):
            base = resolve(idx - 2, fn, depth + 1)
            if base:
                c = fieldclass(base, sp)
                if c:
                    return c
        if sp in globals_:
            return globals_[sp][0]
        if fn is not None and fn[2]:
            c = fieldclass(fn[2], sp)
            if c:
                return c
        return None

    acc = rec["accesses"]
    for i in range(1, len(toks) - 1):
        op = toks[i].spelling
        if op not in ("->", "."):
            continue
        left = toks[i - 1]
        right = toks[i + 1]
        name = right.spelling
        if not IDENT.match(name):
            continue
        lsp = left.spelling
        if not (IDENT.match(lsp) or lsp in ("this", "]", ")")):
            continue
        off = right.extent.start.offset
        fn = fn_at(off)
        recv = None
        raw = lsp
        if lsp == "this":
            recv = fn[2] if fn else None
        elif IDENT.match(lsp):
            if fn is not None and lsp in fn[3]:
                recv, raw = fn[3][lsp][0], fn[3][lsp][1]
            elif lsp in globals_:
                recv, raw = globals_[lsp][0], globals_[lsp][1]
            elif fn is not None and fn[2]:
                recv = fieldclass(fn[2], lsp)
        if recv is None and op == "->" and IDENT.match(lsp):
            recv = resolve(i - 1, fn)
        if recv is None and op == "->" and lsp == ")":
            recv = cast_class(i - 1, fn)
        if recv is None and op == "." and lsp == ")":
            recv = cast_class(i - 1, fn)
        if recv is None and lsp == "]":
            recv = subscript_class(i - 1, fn)
        kind = "noclass"
        moff = None
        dfile = dstart = None
        if recv:
            if name in (methods.get(recv) or ()):
                kind = "nonfield"
            elif name in (by_cls.get(recv) or {}):
                moff, _w, dfile, dstart = by_cls[recv][name]
                if moff < 0:
                    kind = "ambig"
                    moff = None
                    dfile = dstart = None
                else:
                    kind = "field"
            else:
                kind = "unres"
        if moff is None and kind != "nonfield":
            moff = offset_from_name(name)
        acc.append([_norm_path(path), left.extent.start.offset,
                    right.extent.start.offset, right.extent.end.offset,
                    name, recv, raw, kind, moff, right.location.line,
                    dfile, dstart])

    # ---- bare member references inside member functions
    # (`MPCooperative_field_0x33C = this->q33C;` -- the LHS has no -> or .)
    for i, tok in enumerate(toks):
        name = tok.spelling
        if not IDENT.match(name):
            continue
        if form_of(name) not in GENERATED_FORMS:
            continue
        prev = toks[i - 1].spelling if i > 0 else ""
        nxt = toks[i + 1].spelling if i + 1 < len(toks) else ""
        if prev in ("->", ".", "::", "~") or nxt == "::":
            continue
        off = tok.extent.start.offset
        fn = fn_at(off)
        if fn is None or not fn[2]:
            continue
        if name in fn[3]:
            continue                      # shadowed by a local/parameter
        ent = (by_cls.get(fn[2]) or {}).get(name)
        if nxt == "(":
            # `Field(...)` in a constructor initializer list is a member
            # reference, not a call.  A class cannot have a data member and a
            # method with one name, so a field-name hit here is unambiguous.
            # X114: convert_class.cpp's initializer kept the old name after
            # the declaration rename and clang gained one error.
            if ent and ent[0] >= 0:
                moff, _w, dfile, dstart = ent
                acc.append([_norm_path(path), off, off, tok.extent.end.offset,
                            name, fn[2], "bare-init", "field_bare", moff,
                            tok.location.line, dfile, dstart])
            continue
        if not ent or ent[0] < 0:
            continue
        moff, _w, dfile, dstart = ent
        acc.append([_norm_path(path), off, off, tok.extent.end.offset, name, fn[2],
                    "bare", "field_bare", moff, tok.location.line, dfile, dstart])


# ------------------------------------------------------------------- scan
def cmd_scan(args):
    CACHE.mkdir(parents=True, exist_ok=True)
    tus = tu_list()
    prev = None
    if args.scan_missing and SCAN_PATH.exists():
        prev = json.loads(SCAN_PATH.read_text(encoding="utf-8"))
        done = set(prev.get("tus_done") or [])
        todo = [t for t in tus if t not in done]
        print("missing TUs: %d of %d" % (len(todo), len(tus)), flush=True)
        tus = todo
        if not tus:
            print("nothing to do")
            return
    if args.limit:
        tus = tus[:args.limit]
    print("TUs: %d | jobs=%d" % (len(tus), args.jobs), flush=True)
    t0 = time.time()
    results = []
    done = 0
    if args.jobs <= 1:
        for tu in tus:
            results.append(scan_tu(tu))
            done += 1
            if done % 25 == 0:
                print("  %d/%d %.0fs" % (done, len(tus), time.time() - t0), flush=True)
    else:
        with cf.ProcessPoolExecutor(max_workers=args.jobs) as ex:
            futs = [ex.submit(scan_tu, tu) for tu in tus]
            for fu in cf.as_completed(futs):
                try:
                    results.append(fu.result())
                except Exception as e:  # noqa: BLE001
                    results.append({"tu": "?", "ok": False, "err": repr(e),
                                    "fields": [], "accesses": []})
                done += 1
                if done % 25 == 0:
                    print("  %d/%d %.0fs" % (done, len(tus), time.time() - t0), flush=True)

    bad = [r for r in results if not r["ok"]]
    fields, acc = [], []
    seen = set()
    ok_list = []
    for r in results:
        if not r["ok"]:
            continue
        ok_list.append(r["tu"])
        for fl in r["fields"]:
            key = (fl[0], fl[1], fl[2], fl[4], fl[5])
            if key in seen:
                continue
            seen.add(key)
            fields.append(fl)
        acc.extend(r["accesses"])
    if prev:
        done = set(prev.get("tus_done") or [])
        for fl in prev["fields"]:
            key = (fl[0], fl[1], fl[2], fl[4], fl[5])
            if key in seen:
                continue
            seen.add(key)
            fields.append(fl)
        acc = prev["accesses"] + acc
        ok_list = sorted(done | set(ok_list))
        bad = []
        tus_total = prev.get("tus_total", len(tus))
    else:
        tus_total = len(tus)

    # final sweep: TUs lost to worker crashes are parsed serially in-process
    missing = [t for t in tu_list() if t not in set(ok_list)]
    if missing and not args.limit:
        print("sweep: %d TU(s) not covered; serial retry" % len(missing), flush=True)
        for tu in missing:
            try:
                r = scan_tu(tu)
            except Exception as e:  # noqa: BLE001
                bad.append({"tu": tu, "err": "serial-exc: %r" % e})
                continue
            if not r["ok"]:
                bad.append({"tu": tu, "err": r["err"]})
                continue
            ok_list.append(tu)
            for fl in r["fields"]:
                key = (fl[0], fl[1], fl[2], fl[4], fl[5])
                if key in seen:
                    continue
                seen.add(key)
                fields.append(fl)
            acc.extend(r["accesses"])
            print("  recovered %s (acc %d)" % (Path(tu).name, len(r["accesses"])),
                  flush=True)
    payload = {
        "generated": time.strftime("%Y-%m-%dT%H:%M:%S"),
        "tus_total": tus_total, "tus_ok": len(ok_list), "tus_done": ok_list,
        "tus_skip": [{"tu": r["tu"], "err": r["err"]} for r in bad],
        "diag_errors": sum(r.get("diags", 0) for r in results),
        "wall_s": round(time.time() - t0, 1),
        "fields": fields, "accesses": acc,
    }
    SCAN_PATH.write_text(json.dumps(payload, ensure_ascii=False), encoding="utf-8")
    print("scan: TUs ok %d / skip %d | fields %d | accesses %d | %.0fs -> %s"
          % (payload["tus_ok"], len(bad), len(fields), len(acc),
             payload["wall_s"], SCAN_PATH), flush=True)
    for b in bad[:30]:
        print("  SKIP %s : %s" % (b["tu"], b["err"]), flush=True)


# ------------------------------------------------------------------ authority
def load_scan():
    if not SCAN_PATH.exists():
        sys.exit("no scan cache; run --scan first")
    return json.loads(SCAN_PATH.read_text(encoding="utf-8"))


def load_ml():
    d = json.loads(ML_PATH.read_text(encoding="utf-8"))
    out = {}
    for cls, m in d.items():
        o = {}
        for k, v in m.items():
            try:
                off = int(k)
            except (TypeError, ValueError):
                continue
            o[off] = v
        out[cls] = o
    return out


def load_sidecar():
    d = json.loads(SIDECAR_PATH.read_text(encoding="utf-8"))
    out = {}
    for cls, e in (d.get("classes") or {}).items():
        o = {}
        for m in e.get("members") or []:
            o[int(m["off"])] = m
        out[cls] = o
    return out


def choose_canon(cls_unq, off, carrier_names, ml, side):
    """One name per (class, offset); stale/offset-mismatched names are refused."""
    notes = []
    cands = []
    ent = (ml.get(cls_unq) or {}).get(off)
    if ent:
        n = ent.get("name")
        if valid_canon(n) and name_matches_offset(n, off):
            cands.append((n, "member_lookup"))
        elif n and valid_canon(n):
            notes.append("ml-offset-mismatch:%s" % n)
    for n in carrier_names:
        if valid_canon(n) and not is_pad(n):
            cands.append((n, "carrier"))
    sc = (side.get(cls_unq) or {}).get(off)
    if sc:
        n = sc.get("name")
        if valid_canon(n) and name_matches_offset(n, off):
            cands.append((n, "sidecar"))
    if not cands:
        return None, None, notes + ["no-candidate"]
    clean = [c for c in cands if not GATE_DIRTY.search(c[0])]
    pool = clean or cands
    seen, ordered = set(), []
    for n, s in pool:
        if n in seen:
            continue
        seen.add(n)
        ordered.append((n, s))
    if len({n for n, _ in ordered}) > 1:
        notes.append("multi:" + ",".join("%s/%s" % (n, s) for n, s in ordered))
    if clean and len(clean) != len(cands):
        notes.append("gate-hygiene-pick")
    return ordered[0][0], ordered[0][1], notes


GENERATED_FORMS = ("u32_", "qNNN", "ptr_NN", "m_NN", "Class_field_0x",
                   "Type_NN", "vtableN")

ARRAY_TYPE_RE = re.compile(r"^(.*)\[(\d+)\]$")


def array_member(field, off):
    """(member name, element index) when `off` lies inside an array member.

    `field` is a fields_by_cls tuple (off, name, width, file, st, en, tspell).
    Element width comes from the declared total width / element count, so this
    works for `int[3]` and `T *[N]` alike (both are 4-byte elements here).
    """
    off0, name, width, _file, _st, _en, tspell = field
    m = ARRAY_TYPE_RE.match((tspell or "").strip())
    if not m or width <= 0:
        return None
    try:
        count = int(m.group(2))
    except (TypeError, ValueError):
        return None
    if count <= 1 or width % count:
        return None
    elem = width // count
    if elem <= 0 or off < off0 or off >= off0 + width:
        return None
    if (off - off0) % elem:
        return None
    return name, (off - off0) // elem


def build_plan(scan, ml, side, only=None):
    """Declaration-identity canonicalization.

    A member is identified by its FieldDecl (class + defining file + byte span),
    never by a bare offset: several carriers in this tree are shifted relative to
    their own name suffixes, so offsets alone cannot identify a slot.  The
    *binary* offset of a declaration is the offset encoded in its generated name
    when there is one (that is the author's intent and the key member_lookup uses),
    otherwise its real layout offset.
    """
    fields_by_cls = defaultdict(list)      # ckey -> [(off,name,width,file,st,en,tspell)]
    seen_field = set()
    for (qn, name, off, width, file, st, en, tspell) in scan["fields"]:
        # X114: the same FieldDecl can be reached through two include
        # spellings; path-normalized identity keeps it one declaration.
        fkey = (qn, name, off, file, st)
        if fkey in seen_field:
            continue
        seen_field.add(fkey)
        fields_by_cls[qn].append((off, name, width, file, st, en, tspell))

    decl_canon = {}                            # (file, decl_st) -> (name, src, notes)
    decl_cls = {}                              # (file, decl_st) -> ckey
    names_by_cls = defaultdict(lambda: defaultdict(set))   # ckey -> name -> {real off}
    bin_index = {}                             # ckey -> {bin_off: [(file, decl_st, name)]}
    for qn, fs in fields_by_cls.items():
        idx = defaultdict(list)
        for (off, name, width, file, st, en, tspell) in fs:
            names_by_cls[qn][name].add(off)
            decl_cls[(file, st)] = qn
            if is_pad(name):
                decl_canon[(file, st)] = (name, "pad", [])
                continue
            enc = offset_from_name(name)
            bin_off = enc if enc is not None else off
            idx[bin_off].append((file, st, name))
            if form_of(name) in GENERATED_FORMS:
                # generated placeholders converge on one canonical name
                cname, csrc, notes = choose_canon(unqual_ck(qn), bin_off, [name], ml, side)
                decl_canon[(file, st)] = (cname or name, csrc or "self", notes)
            else:
                # semantic names are never downgraded to a generated name
                decl_canon[(file, st)] = (name, "semantic", [])
        bin_index[qn] = idx

    # collision: two declarations of one class must not end up with one name
    # (duplicate/overlapping members supplied by different waves are common).
    bad_coll = set()
    rename_coll = 0
    for qn, fs in fields_by_cls.items():
        finals = {}
        for (off, name, width, file, st, en, tspell) in fs:
            cname = decl_canon.get((file, st), (name, "", []))[0]
            if cname in finals:
                other = finals[cname]
                bad_coll.add((file, st))
                bad_coll.add((other[0], other[1]))
                if cname != name or cname != other[2]:
                    rename_coll += 1
                continue
            finals[cname] = (file, st, name)
    for key in bad_coll:
        cname, src, notes = decl_canon.get(key, ("?", "", []))
        decl_canon[key] = (cname, src, notes + ["name-collision"])
    stats_rename_coll = rename_coll

    rew, unresolved_rows = [], []
    unresolved = Counter()
    stats = Counter()
    stats["rename-collision-pairs"] = stats_rename_coll
    form_stat = defaultdict(Counter)
    covered = set()

    for row in scan["accesses"]:
        (file, recv_st, st, en, name, recv, raw, kind, off, line,
         dfile, dstart) = row
        covered.add((file.replace("\\", "/").lower(), st))
        form = form_of(name)
        form_stat[form]["sites"] += 1
        if kind == "nonfield":
            stats["nonfield"] += 1
            form_stat[form]["nonfield"] += 1
            continue
        if kind == "ambig":
            stats["ambiguous"] += 1
            unresolved["ambiguous-field-name"] += 1
            unresolved_rows.append([file, line, name, recv, "ambiguous-field-name"])
            continue
        if kind in ("field", "field_bare"):
            stats["resolved"] += 1
            form_stat[form]["resolved"] += 1
            key = (dfile, dstart)
            if key not in decl_canon:
                unresolved["decl-not-indexed"] += 1
                unresolved_rows.append([file, line, name, recv, "decl-not-indexed"])
                continue
            cname, csrc, _n = decl_canon[key]
            if name == cname:
                stats["already-canonical"] += 1
                form_stat[form]["already"] += 1
                continue
            if key in bad_coll:
                unresolved["collision"] += 1
                unresolved_rows.append([file, line, name, "%s+0x%X" % (recv, off),
                                        "collision:" + cname])
                continue
            rew.append([file, recv_st, st, en, cname, recv, off, name, csrc, form,
                        line, "body"])
            stats["body-rewrite"] += 1
            stats["rw-resolved"] += 1
            form_stat[form]["rewritten"] += 1
            continue

        # unresolved name: find the declaration it must denote
        stats["unres"] += 1
        form_stat[form]["unresolved"] += 1
        if off is not None:
            form_stat[form]["offset-known"] += 1
        if recv is None:
            if form == "vtableN" and scalar_indexable(raw):
                idx = int(re.search(r"(\d+)$", name).group(1)) - 1
                rew.append([file, recv_st, st, en, "@@PTRIDX@@%d" % idx, None, off,
                            name, "rawptr-index", form, line, "body"])
                stats["body-rewrite"] += 1
                stats["rawptr-rewrite"] += 1
                form_stat[form]["rewritten"] += 1
                continue
            stats["skip-nonclass"] += 1
            unresolved["receiver-not-class"] += 1
            unresolved_rows.append([file, line, name, raw or "?", "receiver-not-class"])
            continue
        if recv not in fields_by_cls:
            stats["skip-unknown-class"] += 1
            unresolved["class-not-in-build"] += 1
            unresolved_rows.append([file, line, name, cls_of(recv), "class-not-in-build"])
            continue
        if off is None:
            unresolved["offset-unknown"] += 1
            unresolved_rows.append([file, line, name, cls_of(recv), "offset-unknown"])
            continue
        hit = bin_index[recv].get(off) or []
        hit = [h for h in hit if not is_pad(h[2])]
        if len(hit) > 1:
            unresolved["ambiguous-bin-offset"] += 1
            unresolved_rows.append([file, line, name, "%s+0x%X" % (cls_of(recv), off),
                                    "ambiguous-bin-offset"])
            continue
        if not hit:
            # X114: an encoded generated name can point inside an array-typed
            # member (`CCINIClass::headNode[3]` at 0x4 covers `vtable3/4` at
            # 0x8/0xC).  The canonical expression is `member[index]`.
            if form == "vtableN":
                arr = None
                for fld in fields_by_cls[recv]:
                    arr = array_member(fld, off)
                    if arr:
                        break
                if arr:
                    cname = "%s[%d]" % arr
                    rew.append([file, recv_st, st, en, cname, recv, off, name,
                                "array", form, line, "body"])
                    stats["body-rewrite"] += 1
                    stats["array-rewrite"] += 1
                    form_stat[form]["rewritten"] += 1
                    continue
            has = any(o == off for (o, _n, _w, _f, _s, _e, _t)
                      in fields_by_cls[recv])
            reason = "pad-only-at-offset" if has else "no-declared-field-at-offset"
            unresolved[reason] += 1
            unresolved_rows.append([file, line, name,
                                    "%s+0x%X" % (cls_of(recv), off), reason])
            continue
        dfile2, dstart2, dname = hit[0]
        cname, csrc, _n = decl_canon.get((dfile2, dstart2), (dname, "self", []))
        if name == cname:
            stats["already-canonical"] += 1
            form_stat[form]["already"] += 1
            continue
        if (dfile2, dstart2) in bad_coll:
            unresolved["collision"] += 1
            unresolved_rows.append([file, line, name, "%s+0x%X" % (cls_of(recv), off),
                                    "collision:" + cname])
            continue
        rew.append([file, recv_st, st, en, cname, recv, off, name, csrc, form,
                    line, "body"])
        stats["body-rewrite"] += 1
        stats["rw-unresolved"] += 1
        form_stat[form]["rewritten"] += 1

    decl_rew = []
    for (file, st), (cname, csrc, notes) in decl_canon.items():
        qn = decl_cls.get((file, st))
        if qn is None or (file, st) in bad_coll:
            continue
        old = None
        en = None
        doff = None
        for (off, nm, width, f2, s2, e2, _t) in fields_by_cls[qn]:
            if f2 == file and s2 == st:
                old, en, doff = nm, e2, off
                break
        if old is None or old == cname or is_pad(old):
            continue
        if form_of(old) not in GENERATED_FORMS:
            continue
        decl_rew.append([file, st, st, en, cname, qn, doff, old, csrc, "decl", 0, "decl"])
        stats["decl-rename"] += 1

    if only:
        sel = set(only)
        rew = [r for r in rew if r[5] is None or unqual_ck(r[5]) in sel
               or cls_of(r[5]) in sel or r[5] in sel]
        decl_rew = [r for r in decl_rew if unqual_ck(r[4]) in sel
                    or cls_of(r[4]) in sel or r[4] in sel]

    return {
        "canon": {"%s|%s" % k: v for k, v in decl_canon.items()},
        "rewrites": rew, "decl_rewrites": decl_rew, "stats": dict(stats),
        "unresolved": dict(unresolved), "unresolved_rows": unresolved_rows,
        "form_stat": {k: dict(v) for k, v in form_stat.items()},
        "covered": len(covered), "classes": len(fields_by_cls),
        "offsets": len(decl_canon),
        "collisions": ["%s@%s" % (cls_of(decl_cls.get(k, "?")), Path(k[0]).name)
                       for k in sorted(bad_coll)][:500],
    }


# ------------------------------------------------------- text mask (verify)
def mask_code(text):
    n = len(text)
    mask = bytearray(b"\x01") * n
    i = 0
    while i < n:
        c = text[i]
        if c == 0x2F and i + 1 < n:
            d = text[i + 1]
            if d == 0x2F:
                j = text.find(b"\n", i)
                j = n if j < 0 else j
                mask[i:j] = b"\x00" * (j - i)
                i = j
                continue
            if d == 0x2A:
                j = text.find(b"*/", i + 2)
                j = n if j < 0 else j + 2
                mask[i:j] = b"\x00" * (j - i)
                i = j
                continue
        if c in (0x22, 0x27):
            q = c
            j = i + 1
            while j < n:
                if text[j] == 0x5C:
                    j += 2
                    continue
                if text[j] == q:
                    j += 1
                    break
                if text[j] == 0x0A:
                    break
                j += 1
            mask[i:j] = b"\x00" * (j - i)
            i = j
            continue
        i += 1
    return mask


def residual_scan(words, tu_files=None):
    """Textual member accesses of `words` in files that the compiler sees.

    Only translation-unit main files and project headers are considered: `.inc`
    bodies under csp_canon/bodies and files excluded from the build are not
    compiled, so a stale name there cannot break the build.
    """
    pats = {w: re.compile((r"(?:->|\.)\s*(%s)\b" % re.escape(w)).encode())
            for w in words}
    hits = defaultdict(set)
    files = []
    for e in ("*.cpp", "*.hpp", "*.h"):
        files.extend((ROOT / "src").rglob(e))
        files.extend((ROOT / "app").rglob(e))
    expected = {f.lower().replace("\\", "/") for f in (tu_files or [])}
    root_low = str(ROOT).replace("\\", "/").lower().rstrip("/")
    for p in files:
        if not p.is_file():
            continue
        low = str(p).replace("\\", "/").lower()
        if p.suffix.lower() == ".cpp" and expected:
            # X114 fix: `expected` holds repo-relative TU names, `low` is
            # absolute -- the old comparison never matched and silently
            # skipped every .cpp, hiding stale refs behind `#if 0`.
            rel = low[len(root_low) + 1:] if low.startswith(root_low + "/") else low
            if rel not in expected:
                continue
        if "/csp_canon/bodies/" in low or "/raw_decomp/" in low:
            continue
        try:
            text = p.read_bytes()
        except OSError:
            continue
        mask = None
        for w, pat in pats.items():
            if w.encode() not in text:
                continue
            if mask is None:
                mask = mask_code(text)
            for m in pat.finditer(text):
                pos = m.start(1)
                if mask[pos]:
                    hits[w].add((low, pos))
    return hits


# ------------------------------------------------------------------ report
def cmd_report(args, apply=False, dry=False):
    scan = load_scan()
    plan = build_plan(scan, load_ml(), load_sidecar(),
                      args.classes.split(",") if args.classes else None)
    (CACHE / ("plan.json" if not apply else "plan_apply.json")).write_text(
        json.dumps(plan, ensure_ascii=False), encoding="utf-8")
    (CACHE / "unresolved.json").write_text(
        json.dumps(plan["unresolved_rows"], ensure_ascii=False), encoding="utf-8")

    print("== X113 canonical member report ==")
    print("scan: TUs %d/%d ok | fields %d | accesses %d | classes %d | (class,off) %d"
          % (scan["tus_ok"], scan["tus_total"], len(scan["fields"]),
             len(scan["accesses"]), plan["classes"], plan["offsets"]))
    if scan["tus_skip"]:
        print("clang-unparseable TUs: %d" % len(scan["tus_skip"]))
        for s in scan["tus_skip"][:20]:
            print("   SKIP %s : %s" % (s["tu"], s["err"]))
    print("\n-- access resolution --")
    for k in ("resolved", "unres", "nonfield", "ambiguous", "already-canonical",
              "rw-resolved", "rw-unresolved", "rawptr-rewrite", "body-rewrite",
              "decl-rename", "skip-nonclass", "skip-unknown-class"):
        print("  %-22s %d" % (k, plan["stats"].get(k, 0)))
    print("\n-- attribution --")
    fmt = "  %-17s %8s %8s %9s %8s %8s"
    print(fmt % ("form", "sites", "resolved", "unresolved", "rewritten", "already"))
    for form in sorted(plan["form_stat"], key=lambda f: -plan["form_stat"][f].get("sites", 0)):
        s = plan["form_stat"][form]
        print(fmt % (form, s.get("sites", 0), s.get("resolved", 0),
                     s.get("unresolved", 0), s.get("rewritten", 0), s.get("already", 0)))
    print("\n-- unresolved reasons --")
    for k, v in sorted(plan["unresolved"].items(), key=lambda kv: -kv[1]):
        print("  %-34s %d" % (k, v))
    print("\n-- collisions (skipped) -- %d" % len(plan["collisions"]))
    for c in plan["collisions"][:20]:
        print("   ", c)

    per = Counter()
    for r in plan["rewrites"]:
        per[unqual_ck(r[5]) if r[5] else "<non-class rawptr>"] += 1
    print("\n-- top-20 classes by body rewrites --")
    for c, n in per.most_common(20):
        print("  %-44s %5d" % (c, n))

    src = Counter(r[8] for r in plan["rewrites"])
    print("\n-- canonical source of body rewrites --")
    for c, n in src.most_common():
        print("  %-20s %d" % (c, n))

    print("\n-- samples (form: old -> new) --")
    seen = Counter()
    for r in plan["rewrites"]:
        f = r[9]
        if seen[f] >= 4:
            continue
        seen[f] += 1
        print("  [%s] %s:%s  `%s` -> `%s`  (%s)"
              % (f, Path(r[0]).name, r[10], r[7], r[4],
                 unqual_ck(r[5]) if r[5] else "rawptr-index"))
    print("\n-- declaration renames (sample) --")
    for r in sorted(plan["decl_rewrites"], key=lambda r: (r[7], r[0]))[:15]:
        print("  %s  %s::%s -> %s" % (Path(r[0]).name, unqual_ck(r[5]), r[7], r[4]))
    badform = Counter(r[9] for r in plan["decl_rewrites"]
                      if form_of(r[7]) not in GENERATED_FORMS)
    print("\n-- rename form histogram -- %s"
          % dict(Counter(form_of(r[7]) for r in plan["decl_rewrites"])))
    if badform:
        print("ABORT: %d declaration renames of non-generated names: %s"
              % (sum(badform.values()), dict(badform)))

    if not apply:
        return plan
    ast_sites = {(r[0].replace("\\", "/").lower(), r[2]) for r in scan["accesses"]}
    return apply_plan(plan, dry, ast_sites, scan.get("tus_done"))


def apply_plan(plan, dry, ast_sites=None, tu_files=None):
    """Apply byte-offset edits.

    Row layout (body + decl): [file, recv_st, name_st, name_en, new, ckey, off,
                              old, src, form, line, tag]
    """
    print("\n== safety: residual scan ==", flush=True)
    words = {r[7] for r in plan["rewrites"] + plan["decl_rewrites"]}
    hits = residual_scan(words, tu_files)
    covered = defaultdict(set)
    if ast_sites:
        for f, p in ast_sites:
            covered[f].add(p)
    for r in plan["rewrites"] + plan["decl_rewrites"]:
        covered[str(r[0]).replace("\\", "/").lower()].add(r[2])
    unsafe = {}
    for w, hs in hits.items():
        miss = [(f, p) for (f, p) in hs if p not in covered.get(f, set())]
        if miss:
            unsafe[w] = miss
    print("  old names: %d | unsafe (residual occurrences): %d"
          % (len(words), len(unsafe)))
    for w, miss in list(unsafe.items())[:25]:
        print("    %-30s %4d e.g. %s" % (w, len(miss), miss[0]))
    n0 = len(plan["rewrites"]) + len(plan["decl_rewrites"])
    plan["rewrites"] = [r for r in plan["rewrites"] if r[7] not in unsafe]
    plan["decl_rewrites"] = [r for r in plan["decl_rewrites"] if r[7] not in unsafe]
    n1 = len(plan["rewrites"]) + len(plan["decl_rewrites"])
    print("  dropped %d of %d edits (unsafe old name)" % (n0 - n1, n0))

    per_file = defaultdict(dict)
    drops = Counter()
    for r in plan["rewrites"] + plan["decl_rewrites"]:
        if r[4].startswith("@@PTRIDX@@"):
            st, en = r[1], r[3]
        else:
            st, en = r[2], r[3]
        if st is None or en is None or en <= st:
            drops["bad-span"] += 1
            continue
        per_file[r[0]][(st, en)] = (r[4], r)

    files = sorted(per_file)
    print("  files to edit: %d | edits: %d"
          % (len(files), sum(len(v) for v in per_file.values())), flush=True)
    changed = repl_total = 0
    applied_rows = []
    for file in files:
        p = Path(file)
        try:
            text = p.read_bytes()
        except OSError as e:
            drops["read-fail"] += 1
            print("   READ FAIL %s: %s" % (file, e))
            continue
        spans = sorted(per_file[file].items(), key=lambda kv: kv[0][0])
        last, ok = -1, True
        for (st, en), (new, r) in spans:
            if st < last:
                drops["overlap"] += 1
                ok = False
                break
            last = en
        if not ok:
            print("   OVERLAP skip %s" % file)
            continue
        out = bytearray()
        pos = 0
        for (st, en), (new, r) in spans:
            old = text[st:en].decode("utf-8", "replace")
            oldname = r[7]
            if new.startswith("@@PTRIDX@@"):
                m = re.match(r"^([A-Za-z_]\w*)\s*->\s*(\w+)$", old)
                if not m:
                    drops["ptr-recv-not-simple"] += 1
                    continue
                idx = new.split("@@")[-1]
                out += text[pos:st]
                out += ("%s[%s]" % (m.group(1), idx)).encode()
                pos = en
                repl_total += 1
                applied_rows.append([file, st, old, "%s[%s]" % (m.group(1), idx),
                                     r[5], r[6]])
                continue
            if old != oldname:
                # FieldDecl extent may start at the type specifier; locate the
                # identifier inside the recorded span and edit exactly that.
                m = re.search((r"\b%s\b" % re.escape(oldname)).encode(),
                              text[st:en] if en <= len(text) else b"")
                if m:
                    shift = m.start()
                    out += text[pos:st + shift]
                    out += new.encode()
                    pos = st + shift + len(oldname)
                    repl_total += 1
                    applied_rows.append([file, st + shift, oldname, new, r[5], r[6]])
                    continue
                drops["slice-mismatch"] += 1
                print("   SLICE MISMATCH %s @%d: %r != %r" % (file, st, old, oldname))
                continue
            out += text[pos:st]
            out += new.encode()
            pos = en
            repl_total += 1
            applied_rows.append([file, st, oldname, new, r[5], r[6]])
        out += text[pos:]
        if out != text:
            if not dry:
                p.write_bytes(out)
            changed += 1
    print("\n== apply %s ==" % ("(DRY)" if dry else ""))
    print("  files changed: %d | replacements: %d | drops: %s"
          % (changed, repl_total, dict(drops)))
    (CACHE / "applied.json").write_text(json.dumps(
        {"dry": dry, "files": changed, "replacements": repl_total,
         "drops": dict(drops), "rows": applied_rows,
         "unsafe": {k: v[:5] for k, v in unsafe.items()}}, ensure_ascii=False),
        encoding="utf-8")
    return plan


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--scan", action="store_true")
    ap.add_argument("--scan-missing", action="store_true")
    ap.add_argument("--report", action="store_true")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--class", dest="classes", default=None)
    ap.add_argument("--jobs", type=int, default=8)
    ap.add_argument("--limit", type=int, default=None)
    args = ap.parse_args()
    if args.scan or args.scan_missing:
        cmd_scan(args)
    elif args.report:
        cmd_report(args, apply=False)
    elif args.apply:
        cmd_report(args, apply=True, dry=args.dry_run)
    else:
        ap.print_help()


if __name__ == "__main__":
    main()
