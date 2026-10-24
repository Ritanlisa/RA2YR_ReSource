#!/usr/bin/env python3
"""X118 -- AST-driven type-aware expression rewriter (CSP pipeline step 2.6).

Why this exists
---------------
X117 recovered the class of 78.6% of the generic locals (`int v5` is really a
`TiberiumClass *`).  Applying that type was rejected 98.7% of the time: the
*expression* still assumed an untyped pointer, so `(unsigned __int8 *)(v5 + 36)`
turned from an int-add-plus-cast into pointer arithmetic the gate forbids -- and
worse, once `v5` is `TiberiumClass *`, `v5 + 36` means a 36-element stride, so
the retype itself would silently change behaviour.

This tool rewrites the expression first.  For every constant-offset pointer
arithmetic / subscript whose base is a known class pointer it resolves the byte
offset to the member (or array element) declared at exactly that offset and
emits `&p->Member` / `p->Member` / `p->Arr[i]`.  Among those forms it picks ONE:
the one whose canonical type is *identical* to the type of the span it replaces.
That single rule gives every property the task requires:

  * no cast is introduced -- the emitted form is type-exact;
  * the pointer arithmetic is gone (the five-category count falls, it is not
    moved into `illegal-ptr-cast`);
  * `&p->Member` == `(char *)p + N` **by construction** under the compiler that
    builds the program, because the layout authority is clang itself parsing
    the real headers for the real 32-bit MSVC ABI (`-m32`).  No binary sidecar
    is consulted for the offset -> member decision (a sidecar that disagrees
    with the headers would move the address, not preserve it); the sidecars are
    only cross-checked and the disagreement rate is reported.

Offset model
------------
The byte offset is taken from the *declared* type of the base, which is exactly
what the C++ front end does today:

    (char *)E + N            -> N            (1-byte pointee)
    (unsigned int *)E + N    -> N * 4        (pointee size)
    E + N   (E : int, CSP says T *)  -> N    (integer arithmetic == byte offset)
    E + N   (E : T *)        -> N * sizeof(T) (real pointer stride)
    E[i]    (E : T *)        -> i * sizeof(T)
    ((T *)E)[i]              -> i * sizeof(T)

The `int` + CSP case is the one X117B needed: 36 is a byte offset there, and
rewriting it to `&p->memberAt36` is address-preserving *before* the retype,
which is what makes the retype safe afterwards.

Usage
-----
    python tools/csp_export/x118_expr_rewrite.py --scan [--jobs 8] [--limit N]
    python tools/csp_export/x118_expr_rewrite.py --report [--class A,B] [--top 30]
    python tools/csp_export/x118_expr_rewrite.py --plan [--cap 200]
    python tools/csp_export/x118_expr_rewrite.py --apply --batch B01 [--dry-run]
    python tools/csp_export/x118_expr_rewrite.py --rollback B01
    python tools/csp_export/x118_expr_rewrite.py --ledger
    python tools/csp_export/x118_expr_rewrite.py --verify-idempotent
"""
import argparse
import json
import os
import re
import shutil
import sys
import time
import xml.etree.ElementTree as ET
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
CACHE = ROOT / ".omo" / "x118"
SCAN_PATH = CACHE / "scan.json"
JOIN_PATH = ROOT / "anchors" / "x117_locals_join.json"
JOINMAP_PATH = CACHE / "joinmap.json"
JOINMAP_OWN_PATH = CACHE / "joinmap_own.json"
PLAN_PATH = CACHE / "plan.json"
STATE_PATH = CACHE / "state.json"
KEEP = CACHE / "keep"
LAYOUT_CSP = ROOT / "anchors" / "class_layouts_csp.json"
ML_PATH = ROOT / "tools" / "member_lookup.json"
VCXPROJ = ROOT / "build_win" / "gamemd.vcxproj"

# The 32-bit MSVC ABI is the target the project builds for.  clang's default
# host triple on Windows is x86_64, and under that triple every record layout is
# wrong (8-byte pointers), which would make every offset -> member decision
# wrong too.  `-m32` is not optional here.
#
# `-D_DWORD`/`-D_WORD`/`-D_BYTE` restore the three winnt.h spellings that the
# generated declaration header uses directly and that the SDK's 32-bit path does
# not expose to clang (they are MSVC-internal typedefs, not SDK ones).  They are
# only ever used in function prototypes, so they cannot influence a layout.
EXTRA_ARGS = [
    "-m32",
    "-D_DWORD=unsigned int",
    "-D_WORD=unsigned short",
    "-D_BYTE=unsigned char",
    "-ferror-limit=0",
]

# Form labels used in the report / ledger.
FORM_CAST_ARITH = "cast-arith"      # (CT *)E + N
FORM_PTR_ARITH = "ptr-arith"        # E + N            (E already T *)
FORM_INT_ARITH = "int-arith"        # E + N            (E is int, CSP says T *)
FORM_CAST_SUB = "cast-subscript"    # ((CT *)E)[i]
FORM_PTR_SUB = "ptr-subscript"      # E[i]             (E already T *)
FORM_INT_SUB = "int-subscript"      # E[i]             (E is int, CSP says T *)

BANK = {
    "no-class": "base class unknown (no AST record, no CSP join)",
    "array-step": "plain class-pointer stride (intent is array walking, address-preserving only)",
    "no-member": "no member / array element at that byte offset",
    "ambig-member": "two distinct members share the byte offset",
    "type-mismatch": "member type differs from the replaced expression's type (a cast would be needed)",
    "nested-arith": "operand of further pointer arithmetic",
    "in-address-of": "operand of unary & (would become a pointer-to-pointer)",
    "in-sizeof": "operand of sizeof / alignof / decltype",
    "compound": "compound assignment or ++/-- (the pointer itself is modified)",
    "bad-span": "source slice does not match the token stream (macro expansion)",
    "no-layout": "record layout unavailable (incomplete/erroneous class)",
    "span-clash": "edit span overlaps another edit in the same file",
}


# --------------------------------------------------------------------- utils
def norm_path(p):
    return os.path.normcase(os.path.normpath(os.path.abspath(str(p))))


def rel_file(p):
    try:
        s = str(p).replace("\\", "/")
        root = str(ROOT).replace("\\", "/")
        if s.lower().startswith(root.lower() + "/"):
            return s[len(root) + 1:]
        return s
    except Exception:  # noqa: BLE001
        return "?"


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


_QUAL = re.compile(r"\b(?:struct|class|union|enum)\s+")
_WS = re.compile(r"\s+")


def ty_key(ty):
    """Canonical spelling key used for the type-exactness test.

    Both operands of every comparison come from the same translation unit, so
    namespace prefixes always agree; only whitespace/star placement differs
    (`unsigned char *` vs `unsigned char*`).  Nothing else is normalized --
    `char` and `unsigned char` must stay distinct, because conflating them is
    exactly how a cast would sneak back in.
    """
    if ty is None:
        return "?"
    try:
        t = ty.get_canonical()
    except Exception:  # noqa: BLE001
        t = ty
    s = _QUAL.sub("", t.spelling or "")
    s = _WS.sub(" ", s).strip()
    s = re.sub(r"\s*\*\s*", "*", s)
    s = re.sub(r"\s*\[\s*(\d*)\s*\]", lambda m: "[%s]" % m.group(1), s)
    s = re.sub(r"\s*([(),])\s*", r"\1", s)
    return s


_ARRAY_KINDS = {"CONSTANTARRAY", "INCOMPLETEARRAY", "VARIABLEARRAY",
                "DEPENDENTSIZEDARRAY"}


def arr_info(ty):
    """(elem_type, count, elem_size) for an array type, else None."""
    if ty is None or ty.kind.name not in _ARRAY_KINDS:
        return None
    try:
        et = ty.get_array_element_type()
    except Exception:  # noqa: BLE001
        return None
    try:
        n = ty.get_array_size()
    except Exception:  # noqa: BLE001
        n = -1
    try:
        esz = et.get_size()
    except Exception:  # noqa: BLE001
        esz = -1
    return (et, n, esz)


def pointee_of(ty):
    try:
        t = ty.get_canonical()
    except Exception:  # noqa: BLE001
        t = ty
    guard = 0
    while t is not None and t.kind.name == "POINTER" and guard < 8:
        t = t.get_pointee()
        guard += 1
    return t


def record_decl(ty):
    """RecordDecl behind a pointer-to-record / record type, or None."""
    try:
        t = ty.get_canonical()
    except Exception:  # noqa: BLE001
        return None
    guard = 0
    while t is not None and t.kind.name == "POINTER" and guard < 8:
        t = t.get_pointee()
        guard += 1
    if t is None or t.kind.name != "RECORD":
        return None
    d = t.get_declaration()
    if d is None or d.kind.name not in ("STRUCT_DECL", "CLASS_DECL", "UNION_DECL"):
        return None
    try:
        if not d.is_definition():
            return None
    except Exception:  # noqa: BLE001
        return None
    return d


def is_pointer_ty(ty):
    try:
        return ty.get_canonical().kind.name == "POINTER"
    except Exception:  # noqa: BLE001
        return False


INT_LIKE = {"int", "unsigned int", "long", "unsigned long", "int32_t",
            "uint32_t", "DWORD", "UINT", "ULONG", "LONG", "__int32",
            "unsigned __int32", "size_t", "intptr_t", "uintptr_t", "INT",
            "UINT32", "LONG32", "ULONG32"}


def is_int_like(ty):
    return ty_key(ty) in INT_LIKE


def lit_value(node):
    """Integer value of a literal / unary-signed literal operand, else None."""
    k = node.kind.name
    if k == "UNARY_OPERATOR":
        ch = list(node.get_children())
        if len(ch) != 1:
            return None
        toks = [t.spelling for t in node.get_tokens()]
        if not toks or toks[0] not in ("-", "+"):
            return None
        v = lit_value(ch[0])
        if v is None:
            return None
        return -v if toks[0] == "-" else v
    if k != "INTEGER_LITERAL":
        return None
    txt = "".join(t.spelling for t in node.get_tokens())
    txt = txt.replace("'", "").strip()
    txt = re.sub(r"[uUlL]+$", "", txt)
    try:
        return int(txt, 0)
    except ValueError:
        return None


def transparent_parent(node, chain):
    """Parent that does not change the expression's identity (paren / implicit)."""
    if not chain:
        return None
    p = chain[-1]
    k = p.kind.name
    if k in ("PAREN_EXPR", "UNEXPOSED_EXPR", "IMPLICIT_CAST_EXPR"):
        try:
            if (p.extent.start.offset == node.extent.start.offset
                    and p.extent.end.offset == node.extent.end.offset):
                return ("transparent", p)
        except Exception:  # noqa: BLE001
            pass
    return ("opaque", p)


def last_child(node):
    ch = list(node.get_children())
    return ch[-1] if ch else None


# ---------------------------------------------------------------- join map
def build_joinmap():
    """(file, decl-line, var) -> `Class *` from the X117 CSP join artifact.

    Also builds the OWN-verdict map: (file, decl-line, var) -> entry for every
    joined lvar, including noop/skip verdicts.  A var whose own entry is not a
    retype must NOT be typed from another function's same-name var (W2 fix:
    the name-unique fallback used to hijack cross-function classes).
    """
    CACHE.mkdir(parents=True, exist_ok=True)
    own = {}
    if JOINMAP_OWN_PATH.exists():
        try:
            own = json.loads(JOINMAP_OWN_PATH.read_text(encoding="utf-8"))
        except Exception:  # noqa: BLE001
            own = {}
    if JOINMAP_PATH.exists() and own:
        try:
            return json.loads(JOINMAP_PATH.read_text(encoding="utf-8")), own
        except Exception:  # noqa: BLE001
            pass
    art = json.loads(JOIN_PATH.read_text(encoding="utf-8"))
    out = {}
    for _fa, fn in art["functions"].items():
        f = fn.get("file") or ""
        for name, info in (fn.get("lvars") or {}).items():
            nt = info.get("new_type") or ""
            key = "%s|%s|%s" % (f, info.get("line"), name)
            own[key] = {
                "action": info.get("action"),
                "reason": info.get("reason"),
            }
            if info.get("action") != "retype":
                continue
            if not nt.endswith("*"):
                continue
            out[key] = nt
    JOINMAP_PATH.write_text(json.dumps(out, ensure_ascii=False), encoding="utf-8")
    JOINMAP_OWN_PATH.write_text(json.dumps(own, ensure_ascii=False),
                                encoding="utf-8")
    return out, own


_JOINMAP = None
_JOINMAP_OWN = None


def joinmap():
    global _JOINMAP, _JOINMAP_OWN
    if _JOINMAP is None:
        _JOINMAP, _JOINMAP_OWN = build_joinmap()
    return _JOINMAP


def joinmap_own():
    global _JOINMAP, _JOINMAP_OWN
    if _JOINMAP_OWN is None:
        _JOINMAP, _JOINMAP_OWN = build_joinmap()
    return _JOINMAP_OWN


# ------------------------------------------------------------------- scanner
def scan_tu(tu_path):
    import clang.cindex as ci
    sys.path.insert(0, str(ROOT / "tools"))
    from clang_ast_checker import (_find_libclang, _get_default_compile_args,
                                   _top_level_binary_op)

    try:
        _find_libclang()
    except Exception:  # noqa: BLE001 -- already configured in this process
        pass

    rec = {"tu": tu_path, "ok": False, "err": None, "diags": 0, "sites": [],
           "banked": [], "stats": {}, "wall": 0}
    stats = Counter()
    join = joinmap()
    join_own = joinmap_own()
    t0 = time.time()
    tu_abs = str(Path(tu_path).resolve()) if not os.path.isabs(tu_path) else tu_path
    index = ci.Index.create()
    try:
        tu = index.parse(tu_abs, args=_get_default_compile_args() + EXTRA_ARGS,
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

    main_abs = norm_path(tu_abs)
    tu_rel = rel_file(tu_abs).replace("\\", "/")

    def in_main(f):
        if f is None:
            return False
        try:
            return norm_path(f.name) == main_abs
        except Exception:  # noqa: BLE001
            return False

    lay_cache = {}

    def layout_of(decl):
        """{byte_offset: [member...]} for a record, 32-bit MSVC ABI."""
        key = (_qname(decl), norm_path(decl.location.file.name)
               if decl.location.file else "?")
        if key in lay_cache:
            return lay_cache[key]
        lay = None
        try:
            ty = decl.type
            if ty.get_size() > 0:
                lay = {}
                for fld in ty.get_fields():
                    nm = fld.spelling
                    if not nm:
                        continue
                    try:
                        if fld.is_bitfield():
                            continue
                    except Exception:  # noqa: BLE001
                        pass
                    try:
                        offb = ty.get_offset(nm)
                    except Exception:  # noqa: BLE001
                        continue
                    if offb is None or offb < 0:
                        continue
                    try:
                        w = fld.type.get_size()
                    except Exception:  # noqa: BLE001
                        w = -1
                    if w is None or w <= 0:
                        continue
                    ai = arr_info(fld.type)
                    lay.setdefault(offb // 8, []).append({
                        "name": nm,
                        "ty": fld.type.spelling,
                        "key": ty_key(fld.type),
                        "w": w,
                        "arr": ai is not None,
                        "ekey": ty_key(ai[0]) if ai else None,
                        "esz": ai[2] if ai else None,
                        "cnt": ai[1] if ai else None,
                        "line": fld.location.line,
                    })
        except Exception:  # noqa: BLE001
            lay = None
        lay_cache[key] = lay
        return lay

    def resolve_member(decl, off):
        lay = layout_of(decl) if decl is not None else None
        if not lay:
            return ("no-layout", None, None)
        hits = lay.get(off)
        if hits:
            if len({h["name"] for h in hits}) > 1:
                return ("ambig-member", None, None)
            return ("member", hits[0], None)
        for base_off, entries in lay.items():
            for e in entries:
                if not e["arr"] or not e["esz"] or e["esz"] <= 0:
                    continue
                if base_off <= off < base_off + e["w"]:
                    d = off - base_off
                    if d % e["esz"] == 0:
                        return ("array", e, d // e["esz"])
        return ("no-member", None, None)

    # ------------------------------------------------------------ function map
    # local / parameter declarations of the main file, keyed by declaration
    # line so that the CSP join (which is keyed by (file, line, var)) applies.
    locals_at = {}      # (line, name) -> ty
    fns = []            # (start, end, class decl)

    def collect_fn(cur):
        try:
            ext = cur.extent
            if ext.start.offset is None or ext.end.offset is None:
                return
        except Exception:  # noqa: BLE001
            return
        parent = cur.semantic_parent
        cls = None
        if (parent is not None
                and parent.kind.name in ("STRUCT_DECL", "CLASS_DECL", "UNION_DECL")):
            cls = parent
        fns.append((ext.start.offset, ext.end.offset, cls))
        for ch in cur.get_children():
            if ch.kind.name == "PARM_DECL":
                locals_at[(ch.location.line, ch.spelling)] = ch.type
        stack = [ch for ch in cur.get_children()
                 if ch.kind.name in ("COMPOUND_STMT", "CXX_TRY_STMT")]
        depth = 0
        while stack and depth < 200000:
            node = stack.pop()
            depth += 1
            if node.kind.name == "VAR_DECL":
                locals_at[(node.location.line, node.spelling)] = node.type
            for ch in node.get_children():
                stack.append(ch)

    fstarts = []

    def fn_at(off):
        i = _bisect(fstarts, off) - 1
        steps = 0
        while i >= 0 and steps < 64:
            f = fns[i]
            if f[0] <= off <= f[1]:
                return f
            i -= 1
            steps += 1
        return None

    # per-TU join slice for the by-name fallback (linear scan of the whole
    # corpus join per site was the other hot path).  Values are full keys so
    # the decl line survives for function-scoped disambiguation.
    join_by_name = defaultdict(set)
    for _k in join:
        if _k.startswith(tu_rel + "|"):
            join_by_name[_k.rsplit("|", 1)[1]].add(_k)

    _line_offs = None

    def line_off(ln):
        """Byte offset of the start of 1-based line `ln`, or None."""
        nonlocal _line_offs
        if _line_offs is None:
            offs = [0]
            b = text
            i = b.find(b"\n")
            while i != -1:
                offs.append(i + 1)
                i = b.find(b"\n", i + 1)
            _line_offs = offs
        if 1 <= ln <= len(_line_offs):
            return _line_offs[ln - 1]
        return None

    def csp_class(node):
        """Class declared by the X117 join for an int-typed base expression."""
        fn = fn_at(node.extent.start.offset)
        cls = fn[2] if fn is not None else None
        # W1b: pierce transparent wrappers (PAREN / UNEXPOSED / IMPLICIT_CAST)
        # down to the named expression -- spelling on the wrapper is empty,
        # which silently disabled the whole CSP join path (88% no-class).
        target = node
        seen = 0
        while seen < 8:
            if target.kind.name in ("DECL_REF_EXPR", "MEMBER_REF_EXPR"):
                break
            ch = list(target.get_children())
            if len(ch) != 1 or target.kind.name not in (
                    "PAREN_EXPR", "UNEXPOSED_EXPR", "IMPLICIT_CAST_EXPR"):
                stats["noc:pierce-" + target.kind.name] += 1
                return None
            target = ch[0]
            seen += 1
        name = target.spelling
        if not name:
            stats["noc:no-name"] += 1
            return None
        if cls is not None:
            # member of the enclosing class: `this->x`, resolved via the type
            pass
        d = target.referenced
        line = d.location.line if d is not None and d.location.line else None
        if line:
            key = "%s|%s|%s" % (tu_rel, line, name)
            t = join.get(key)
            if t:
                _last_join_key[0] = key
                r = _decl_by_name(t[:-1].strip(), node)
                if r is None:
                    stats["noc:decl-notfound"] += 1
                return r
            # own verdict: this exact var was joined and CSP did NOT make it a
            # class pointer (noop/skip) -- never hijack another function's
            # same-name var (W2 fix: the old fallback did exactly that).
            if key in join_own:
                stats["noc:own-notclass"] += 1
                return None
            stats["noc:join-miss"] += 1
        else:
            stats["noc:no-referenced"] += 1
        # fallback: same-name var elsewhere in this file -- only valid when the
        # candidate's declaration sits inside THIS use site's function.
        hits = join_by_name.get(name)
        if hits:
            use_fn = None
            try:
                use_fn = fn_at(node.extent.start.offset)
            except Exception:  # noqa: BLE001
                use_fn = None
            cands = set()
            for k in hits:
                try:
                    ln = int(k.split("|")[1])
                except ValueError:
                    continue
                off = line_off(ln)
                if off is None:
                    continue
                f = fn_at(off) if use_fn is not None else None
                if use_fn is not None and f is not None and f[0] == use_fn[0]:
                    cands.add(k)
            if len(cands) == 1:
                k = next(iter(cands))
                r = _decl_by_name(join[k][:-1].strip(), node)
                if r is not None:
                    _last_join_key[0] = k
                    stats["noc:fb-fnscope-ok"] += 1
                    return r
                stats["noc:decl-notfound"] += 1
                return None
            if cands:
                stats["noc:fb-ambiguous"] += 1
            elif use_fn is None:
                stats["noc:fb-no-fn"] += 1
            else:
                stats["noc:fb-fnscope-miss"] += 1
        else:
            stats["noc:fb-absent"] += 1
        return None

    def _decl_by_name(clsname, node):
        """Resolve a class *name* to a RecordDecl using the expression's scope.

        A name that is not declared in this translation unit cannot be used: the
        emitted `p->Member` must compile where it is written.
        """
        short = clsname.split("::")[-1]
        if short in _decl_cache:
            return _decl_cache[short]
        cand = []
        root = node.translation_unit.cursor if hasattr(node, "translation_unit") else None
        if root is None:
            _decl_cache[short] = None
            return None
        stack = [root]
        while stack:
            c = stack.pop()
            if (c.kind.name in ("STRUCT_DECL", "CLASS_DECL", "UNION_DECL")
                    and c.spelling == short):
                try:
                    if c.is_definition() and c.type.get_size() > 0:
                        cand.append(c)
                except Exception:  # noqa: BLE001
                    pass
                continue
            stack.extend(c.get_children())
        if not cand:
            _decl_cache[short] = None
            return None
        if len(cand) == 1:
            r = cand[0]
        else:
            # same namespace as the using expression's own class, else gamemd::
            pref = [c for c in cand
                    if _qname(c).startswith("gamemd::")]
            r = (pref or cand)[0]
        _decl_cache[short] = r
        return r

    def _pierce(node, max_depth=8):
        """Step through transparent single-child wrappers (paren/unexposed/
        implicit-cast) and stop at the first meaningful expression (an explicit
        cast, a named decl ref, a call, a literal).  Without this, `(char*)(v5)
        + 36` and `v5 + 36` where the declref sits under an UNEXPOSED_EXPR both
        fell through to no-class."""
        seen = 0
        while seen < max_depth:
            k = node.kind.name
            if k in ("CSTYLE_CAST_EXPR", "DECL_REF_EXPR", "MEMBER_REF_EXPR",
                     "CALL_EXPR", "INTEGER_LITERAL", "UNARY_OPERATOR"):
                return node
            ch = list(node.get_children())
            if len(ch) != 1 or k not in ("PAREN_EXPR", "UNEXPOSED_EXPR",
                                         "IMPLICIT_CAST_EXPR"):
                return node
            node = ch[0]
            seen += 1
        return node

    def base_spec(node):
        """Analyse a `+`/`-` operand: (class decl, byte offset) or (None, reason)."""
        b = _pierce(node)
        cast = None
        while True:
            # transparent_parent returns None when no ancestor chain is known
            # (W1 fix: the unpack of that None was the TypeError that killed
            # every site -- 51,190 in the aborted scan).  None = stop climbing.
            tp = transparent_parent(b, _chain_of.get(id(b), []))
            if tp is None:
                break
            kind, p = tp
            if kind != "transparent":
                break
            b = p
        if b.kind.name == "CSTYLE_CAST_EXPR" and is_pointer_ty(b.type):
            cast = b
            inner = _pierce(last_child(b))
            if inner is None:
                return None, "no-class", None
            poi = pointee_of(b.type)
            if poi is None:
                return None, "no-class", None
            try:
                sz = poi.get_size()
            except Exception:  # noqa: BLE001
                sz = -1
            if sz is None or sz <= 0:
                return None, "no-class", None
            tgt = inner
            d = record_decl(tgt.type)
            if d is not None:
                return d, "cast-class", sz
            if is_int_like(tgt.type):
                d2 = csp_class(tgt)
                if d2 is not None:
                    return d2, "cast-int-csp", sz
                return None, "no-class", sz
            stats["noc:cast-inner-nonint"] += 1
            return None, "no-class", sz
        d = record_decl(b.type)
        if d is not None:
            return d, "plain-class", None
        if is_int_like(b.type):
            d2 = csp_class(b)
            if d2 is not None:
                return d2, "plain-int-csp", None
            return None, "no-class", None
        stats["noc:plain-nonint"] += 1
        return None, "no-class", None

    _chain_of = {}     # id(node) -> [..] filled lazily by walk (see below)
    _decl_cache = {}   # short class name -> RecordDecl | None (per-TU memo)

    def emit_candidates(entry, kind, idx, base_txt):
        """[(text, type_key)] ordered by preference, all cast-free."""
        n = entry["name"]
        if entry["arr"]:
            ek = entry["ekey"]
            out = []
            if idx == 0:
                out.append(("%s->%s" % (base_txt, n), ek + "*"))
            out.append(("&%s->%s[%d]" % (base_txt, n, idx), ek + "*"))
            out.append(("%s->%s[%d]" % (base_txt, n, idx), ek))
            return out
        return [("&%s->%s" % (base_txt, n), entry["key"] + "*"),
                ("%s->%s" % (base_txt, n), entry["key"])]

    def src_text(node, text):
        try:
            st = node.extent.start.offset
            en = node.extent.end.offset
        except Exception:  # noqa: BLE001
            return None
        if st is None or en is None or en <= st or en > len(text):
            return None
        return text[st:en].decode("utf-8", "replace")

    def slice_clean(node, text):
        """The span must be exactly the token stream (no macro expansion gaps)."""
        try:
            st = node.extent.start.offset
            en = node.extent.end.offset
        except Exception:  # noqa: BLE001
            return False
        if st is None or en is None or en <= st or en > len(text):
            return False
        raw = text[st:en].decode("utf-8", "replace")
        toks = "".join(t.spelling for t in node.get_tokens())
        if not toks:
            return False
        if re.sub(r"\s+", "", raw) != re.sub(r"\s+", "", toks):
            return False
        return True

    def add_site(node, base_node, off, form, chain, text, how=None):
        """Resolve + classify one arithmetic site; append if it is applicable."""
        # ---- climb to the largest expression that a single member access can
        # replace (deref / cast / subscript keep the same address family).
        span = node
        cur = node
        seen = 0
        while chain and seen < 8:
            parent = chain[-1]
            kind, up = transparent_parent(cur, chain)
            if kind == "transparent" or (
                    up is not None and up.kind.name == "PAREN_EXPR"):
                # W2 fix: a PAREN_EXPR extent includes the parentheses, so the
                # extent-equality transparency test never fired and every
                # `(cast)(v + N)` site stayed stuck at the bare binop span.
                # A paren is grouping, not identity -- climb through it.
                cur = up
                span = up
                chain = chain[:-1]
                seen += 1
                continue
            pk = parent.kind.name
            if pk == "UNARY_OPERATOR":
                # W2 fix: cursor.spelling is empty for operators in libclang;
                # the deref test must read the tokens (the old spelling test
                # never matched, so `*(T *)(v + N)` never lifted to the deref).
                toks = [t.spelling for t in parent.get_tokens()]
                if toks and toks[0] == "*" and len(list(parent.get_children())) == 1:
                    cur = parent
                    span = parent
                    chain = chain[:-1]
                    seen += 1
                    continue
            if pk == "CSTYLE_CAST_EXPR" and last_child(parent) is not None \
                    and last_child(parent).hash == cur.hash and is_pointer_ty(parent.type):
                cur = parent
                span = parent
                chain = chain[:-1]
                seen += 1
                continue
            if pk == "ARRAY_SUBSCRIPT_EXPR":
                ch = list(parent.get_children())
                if len(ch) == 2 and ch[0].hash == cur.hash:
                    iv = lit_value(ch[1])
                    poi = pointee_of(parent.type)
                    esz = -1
                    if poi is not None:
                        try:
                            esz = poi.get_size()
                        except Exception:  # noqa: BLE001
                            esz = -1
                    if iv is None or esz is None or esz <= 0:
                        return "nested-arith"
                    off += iv * esz
                    cur, span = parent, parent
                    chain = chain[:-1]
                    seen += 1
                    continue
            break

        # ---- guards that make the replacement unsound / undesirable
        p = chain[-1] if chain else None
        if p is not None:
            pk = p.kind.name
            if pk in ("BINARY_OPERATOR", "COMPOUND_ASSIGNMENT_OPERATOR",
                      "UNARY_OPERATOR"):
                tsp = [t.spelling for t in p.get_tokens()]
                if pk == "COMPOUND_ASSIGNMENT_OPERATOR":
                    return "compound"
                if pk == "BINARY_OPERATOR":
                    op = _top_level_binary_op(p, *list(p.get_children())[:2])
                    if op in ("+", "-"):
                        return "nested-arith"
                if pk == "UNARY_OPERATOR":
                    if tsp and tsp[0] in ("&",):
                        return "in-address-of"
                    if tsp and tsp[0] in ("sizeof", "alignof", "decltype",
                                          "__alignof", "++", "--"):
                        return "in-sizeof" if tsp[0] != "++" else "compound"

        # ---- soundness: the replaced span must be an ADDRESSING form.
        # A bare `v + N` int expression may be an address carried as a value
        # (argument, stored pointer, vtable slot); rewriting it to a loaded
        # member would change semantics.  Only deref / cast-to-pointer /
        # subscript spans prove the base is being dereferenced here.
        sk = span.kind.name
        if sk == "UNARY_OPERATOR":
            stoks = [t.spelling for t in span.get_tokens()]
            if not stoks or stoks[0] != "*":
                stats["bank:bare-arith"] += 1
                return "bare-arith"
        elif sk in ("CSTYLE_CAST_EXPR", "CXX_FUNCTIONAL_CAST_EXPR",
                    "ARRAY_SUBSCRIPT_EXPR"):
            if sk == "CSTYLE_CAST_EXPR" and not is_pointer_ty(span.type):
                stats["bank:bare-arith"] += 1
                return "bare-arith"
        elif sk == "PAREN_EXPR":
            # paren around a lifted deref/cast: look one level down
            inner = last_child(span)
            if inner is None or inner.kind.name not in (
                    "UNARY_OPERATOR", "CSTYLE_CAST_EXPR"):
                stats["bank:bare-arith"] += 1
                return "bare-arith"
            itoks = [t.spelling for t in inner.get_tokens()]
            if inner.kind.name == "UNARY_OPERATOR" and (
                    not itoks or itoks[0] != "*"):
                stats["bank:bare-arith"] += 1
                return "bare-arith"
            if inner.kind.name == "CSTYLE_CAST_EXPR" and not is_pointer_ty(inner.type):
                stats["bank:bare-arith"] += 1
                return "bare-arith"
        else:
            stats["bank:bare-arith"] += 1
            return "bare-arith"

        status, entry, idx = resolve_member(*_resolve_args(off, base_node))
        if status != "member" and status != "array":
            stats["bank:" + status] += 1
            if len(rec["banked"]) < 4000:
                rec["banked"].append({
                    "file": tu_rel, "line": node.location.line,
                    "form": form, "cls": _qname(_cls_of_site[0]), "off": off,
                    "why": status, "old": (src_text(node, text) or "")[:60],
                })
            return status

        try:
            rt = ty_key(span.type)
        except Exception:  # noqa: BLE001
            return "no-class"

        btxt = src_text(base_node, text)
        if not btxt:
            return "bad-span"
        btxt = btxt.strip()
        if not re.match(r"^[A-Za-z_]\w*(?:\s*(?:->|\.)\s*[A-Za-z_]\w*)*$", btxt) \
                and not re.match(r"^\(\s*\*\s*[A-Za-z_]\w*\s*\)$", btxt):
            # Never splice an arbitrary expression twice (side effects); the
            # resolved bases are `this`, locals, parameters and member chains.
            status = "type-mismatch"
            stats["bank:base-expr"] += 1
            return status

        kind = "array" if status == "array" else "member"
        chosen = None
        for txt, key in emit_candidates(entry, kind, idx or 0, btxt):
            if key == rt:
                chosen = (txt, key)
                break
        if chosen is None:
            stats["bank:type-mismatch"] += 1
            return "type-mismatch"

        if not slice_clean(span, text):
            stats["bank:bad-span"] += 1
            return "bad-span"
        old = text[span.extent.start.offset:span.extent.end.offset].decode(
            "utf-8", "replace")
        rec["sites"].append({
            "file": tu_rel,
            "line": span.location.line,
            "col": span.location.column,
            "start": span.extent.start.offset,
            "end": span.extent.end.offset,
            "form": form,
            "base": btxt,
            "cls": _qname(base_node_ref[0]) if False else _qname(_cls_of_site[0]),
            "off": off,
            "hit": status,
            "member": entry["name"],
            "mtype": entry["ty"],
            "mkey": entry["key"],
            "idx": idx,
            "rtype": rt,
            "old": old,
            "new": chosen[0],
            "cls": _qname(_cls_of_site[0]),
            "how": how,
            "joinkey": _last_join_key[0],
        })
        stats["clean"] += 1
        stats["clean:" + form] += 1
        return None

    # `add_site` needs the resolved class decl for the record row; thread it
    # through a one-slot list (kept explicit rather than global state).
    _cls_of_site = [None]
    base_node_ref = [None]
    _last_join_key = [None]

    def _resolve_args(off, base_node):
        return (_cls_of_site[0], off)

    # --------------------------------------------------------------- walk
    text = Path(tu_abs).read_bytes()

    _tb_budget = [20]   # W1 instrumentation: log traceback for first N excs
    _tb_log = open(CACHE / "w1_traceback.log", "w", encoding="utf-8")

    def walk(node, chain):
        k = node.kind.name
        try:
            is_main = in_main(node.location.file)
        except Exception:  # noqa: BLE001
            is_main = False
        if is_main:
            try:
                if k == "BINARY_OPERATOR":
                    _handle_binop(node, chain, text)
                elif k == "ARRAY_SUBSCRIPT_EXPR":
                    _handle_subscript(node, chain, text)
            except Exception as e:  # noqa: BLE001
                stats["exc:" + type(e).__name__] += 1
                if _tb_budget[0] > 0:
                    _tb_budget[0] -= 1
                    import traceback
                    _tb_log.write("=== %s (line %d) ===\n%s\n"
                                  % (type(e).__name__, getattr(node.location, "line", -1),
                                     traceback.format_exc()))
                    _tb_log.flush()
        chain.append(node)
        for ch in node.get_children():
            walk(ch, chain)
        chain.pop()

    def _class_of(expr):
        d = record_decl(expr.type)
        if d is not None:
            return d, "plain-class", None
        if is_int_like(expr.type):
            d2 = csp_class(expr)
            if d2 is not None:
                return d2, "plain-int-csp", None
        return None, "no-class", None

    def _handle_binop(node, chain, text):
        if node.kind.name != "BINARY_OPERATOR":
            return
        ch = list(node.get_children())
        if len(ch) < 2:
            return
        op = _top_level_binary_op(node, ch[0], ch[1])
        if op not in ("+", "-"):
            return
        lhs, rhs = ch[0], ch[1]
        n = lit_value(rhs)
        base = lhs
        if n is None:
            n = lit_value(lhs)
            base = rhs
        if n is None:
            return
        if op == "-" and base is rhs:
            return
        if op == "-":
            n = -n
        stats["site:arith"] += 1
        _last_join_key[0] = None
        d, how, castsz = base_spec(base)
        if d is None:
            stats["bank:no-class"] += 1
            return
        if how in ("plain-class",):
            stats["bank:array-step"] += 1
            return
        if how == "cast-class" and castsz is not None and castsz > 1:
            # typed stride over an address computed from a class pointer: the
            # stride is real, so N * sizeof(T) is the byte offset.  Kept.
            off = n * castsz
        elif how == "cast-int-csp" and castsz is not None:
            off = n * castsz
        elif how in ("cast-class",):
            off = n
        else:
            off = n
        form = FORM_CAST_ARITH if how.startswith("cast") else (
            FORM_INT_ARITH if how.endswith("int-csp") else FORM_PTR_ARITH)
        _cls_of_site[0] = d
        add_site(node, base, off, form, list(chain), text, how)

    def _handle_subscript(node, chain, text):
        ch = list(node.get_children())
        if len(ch) != 2:
            return
        base, idx = ch
        i = lit_value(idx)
        if i is None:
            return
        stats["site:subscript"] += 1
        _last_join_key[0] = None
        d, how, castsz = base_spec(base)
        if d is None:
            stats["bank:no-class"] += 1
            return
        poi = pointee_of(node.type)
        esz = -1
        if poi is not None:
            try:
                esz = poi.get_size()
            except Exception:  # noqa: BLE001
                esz = -1
        if esz is None or esz <= 0:
            stats["bank:no-class"] += 1
            return
        off = i * esz
        _cls_of_site[0] = d
        form = FORM_CAST_SUB if how.startswith("cast") else (
            FORM_INT_SUB if how.endswith("int-csp") else FORM_PTR_SUB)
        add_site(node, base, off, form, list(chain), text, how)

    # function decls first (needed by fn_at before any site is inspected)
    def collect(node):
        k = node.kind.name
        if k in ("CXX_METHOD", "FUNCTION_DECL", "CONSTRUCTOR", "DESTRUCTOR"):
            try:
                if in_main(node.location.file):
                    collect_fn(node)
            except Exception:  # noqa: BLE001
                pass
        for c in node.get_children():
            collect(c)

    collect(tu.cursor)
    fns.sort(key=lambda f: (f[0], -f[1]))
    fstarts[:] = [f[0] for f in fns]

    def remap_locals():
        """locals_at is keyed by (line,name); fn lookup needs the type only."""
        return locals_at

    try:
        walk(tu.cursor, [])
        rec["ok"] = True
    except Exception as e:  # noqa: BLE001
        rec["err"] = "walk-exc: %s" % e

    rec["stats"] = dict(stats)
    rec["wall"] = round(time.time() - t0, 2)
    return rec


def _qname(decl):
    parts = []
    cur = decl
    while cur is not None and cur.kind is not None:
        if cur.kind.name == "TRANSLATION_UNIT":
            break
        if cur.kind.name in ("STRUCT_DECL", "CLASS_DECL", "UNION_DECL",
                             "NAMESPACE", "ENUM_DECL"):
            if cur.spelling:
                parts.append(cur.spelling)
        cur = cur.semantic_parent
    return "::".join(reversed(parts))


def _bisect(seq, x):
    lo, hi = 0, len(seq)
    while lo < hi:
        mid = (lo + hi) // 2
        if seq[mid] <= x:
            lo = mid + 1
        else:
            hi = mid
    return lo


# --------------------------------------------------------------------- scan
def cmd_scan(args):
    CACHE.mkdir(parents=True, exist_ok=True)
    tu_all = tu_list()
    tus = tu_all
    if args.tu:
        want = {t.strip().replace("\\", "/") for t in args.tu.split(",")}
        tus = [t for t in tus if t.replace("\\", "/") in want]
    if args.limit:
        tus = tus[:args.limit]
    if not tus:
        sys.exit("no TU selected")
    print("TUs: %d | jobs=%d | extra=%s" % (len(tus), args.jobs, " ".join(EXTRA_ARGS)),
          flush=True)
    t0 = time.time()
    results = []
    done = 0
    if args.jobs <= 1:
        for tu in tus:
            results.append(scan_tu(tu))
            done += 1
            print("  %d/%d %.0fs sites=%d" % (done, len(tus), time.time() - t0,
                                              len(results[-1]["sites"])), flush=True)
    else:
        import concurrent.futures as cf
        with cf.ProcessPoolExecutor(max_workers=args.jobs) as ex:
            futs = {ex.submit(scan_tu, tu): tu for tu in tus}
            for fu in cf.as_completed(futs):
                tu = futs[fu]
                try:
                    results.append(fu.result())
                except Exception as e:  # noqa: BLE001
                    results.append({"tu": tu, "ok": False, "err": repr(e),
                                    "sites": [], "stats": {}})
                done += 1
                if done % 10 == 0 or done == len(tus):
                    print("  %d/%d %.0fs sites=%d" % (
                        done, len(tus), time.time() - t0,
                        sum(len(r["sites"]) for r in results)), flush=True)

    bad = [r for r in results if not r["ok"]]
    sites, stats = [], Counter()
    banked = []
    ok_list = []
    for r in results:
        if r["ok"]:
            ok_list.append(r["tu"])
            sites.extend(r["sites"])
            banked.extend(r.get("banked") or [])
        for k, v in (r.get("stats") or {}).items():
            stats[k] += v
    sites.sort(key=lambda s: (s["file"], s["start"]))
    banked.sort(key=lambda s: (s["file"], s["line"]))
    payload = {
        "generated": time.strftime("%Y-%m-%dT%H:%M:%S"),
        "extra_args": EXTRA_ARGS,
        "tus_total": len(tu_all), "tus_ok": len(ok_list),
        "tus_done": ok_list,
        "tus_skip": [{"tu": r["tu"], "err": r.get("err")} for r in bad],
        "diag_errors": sum(r.get("diags", 0) for r in results),
        "wall_s": round(time.time() - t0, 1),
        "stats": dict(stats),
        "sites": sites,
        "banked": banked,
    }
    SCAN_PATH.write_text(json.dumps(payload, ensure_ascii=False), encoding="utf-8")
    print("\nscan: TUs ok %d / skip %d | diag errors %d | clean sites %d | %.0fs -> %s"
          % (payload["tus_ok"], len(bad), payload["diag_errors"], len(sites),
             payload["wall_s"], SCAN_PATH), flush=True)
    for b in bad[:20]:
        print("  SKIP %s : %s" % (b["tu"], b["err"]))
    print("\n-- counters --")
    for k, v in sorted(stats.items(), key=lambda kv: -kv[1]):
        print("  %-28s %6d" % (k, v))


def load_scan():
    if not SCAN_PATH.exists():
        sys.exit("no scan at %s -- run --scan first" % SCAN_PATH)
    return json.loads(SCAN_PATH.read_text(encoding="utf-8"))


# ------------------------------------------------------------------- report
def cross_check(sites):
    """How often the header (32-bit) layout agrees with the X112/X116 sidecars."""
    lay = {}
    try:
        art = json.loads(LAYOUT_CSP.read_text(encoding="utf-8"))
        for cls, rec in (art.get("classes") or {}).items():
            d = lay.setdefault(cls, {})
            for m in rec.get("members") or []:
                off = m.get("off")
                if off is None:
                    continue
                d[int(off)] = m.get("name")
    except Exception:  # noqa: BLE001
        pass
    ml = {}
    try:
        ml = json.loads(ML_PATH.read_text(encoding="utf-8"))
    except Exception:  # noqa: BLE001
        pass
    agree = disagree = nokey = 0
    dis = []
    for s in sites:
        cls = s["cls"].split("::")[-1]
        off = s["off"]
        nm = s["member"]
        ref = None
        if cls in lay and off in lay[cls]:
            ref = lay[cls][off]
        elif cls in ml and str(off) in ml[cls]:
            ref = ml[cls][str(off)].get("name")
        if ref is None:
            nokey += 1
            continue
        if ref == nm:
            agree += 1
        else:
            disagree += 1
            if len(dis) < 15:
                dis.append((s["file"], s["line"], cls, off, nm, ref))
    return {"agree": agree, "disagree": disagree, "no-sidecar": nokey,
            "samples": dis}


def cmd_report(args):
    scan = load_scan()
    sites = scan["sites"]
    if args.classes:
        want = {c.strip() for c in args.classes.split(",")}
        sites = [s for s in sites
                 if s["cls"].split("::")[-1] in want or s["cls"] in want]

    print("== X118 expression rewrite report ==")
    print("scan: TUs %d/%d ok, %d skipped | diag errors %d | wall %.0fs"
          % (scan["tus_ok"], scan["tus_total"], len(scan["tus_skip"]),
             scan["diag_errors"], scan["wall_s"]))
    print("candidate sites: %d" % len(sites))

    by_form = Counter(s["form"] for s in sites)
    by_hit = Counter(s["hit"] for s in sites)
    print("\n-- sites by form --")
    for f, n in by_form.most_common():
        print("  %-18s %6d" % (f, n))
    print("\n-- resolution --")
    for h, n in by_hit.most_common():
        print("  %-18s %6d" % (h, n))

    print("\n-- scan counters (all TUs) --")
    for k, v in sorted(scan["stats"].items(), key=lambda kv: -kv[1]):
        if v:
            print("  %-28s %6d" % (k, v))

    # per-class top
    per = Counter(s["cls"].split("::")[-1] for s in sites)
    print("\n-- top %d classes --" % args.top)
    fmt = "  %-34s %6d %6d %6d"
    print("  %-34s %6s %6s %6s" % ("class", "sites", "member", "array"))
    for c, n in per.most_common(args.top):
        m = sum(1 for s in sites if s["cls"].split("::")[-1] == c and s["hit"] == "member")
        a = sum(1 for s in sites if s["cls"].split("::")[-1] == c and s["hit"] == "array")
        print(fmt % (c, n, m, a))

    perfile = Counter(s["file"] for s in sites)
    print("\n-- top 20 files --")
    for f, n in perfile.most_common(20):
        print("  %-52s %5d" % (f, n))

    print("\n-- samples (old -> new) --")
    seen = Counter()
    for s in sites:
        f = s["form"]
        if seen[f] >= 8:
            continue
        seen[f] += 1
        print("  [%s] %s:%d  %s  ==>  %s   (%s@%d %s)"
              % (f, s["file"], s["line"], s["old"], s["new"],
                 s["cls"].split("::")[-1], s["off"], s["mtype"]))

    xs = cross_check(sites)
    print("\n-- cross-check against X112/X116 binary sidecar --")
    print("  agree %d | disagree %d | offset not in sidecar %d"
          % (xs["agree"], xs["disagree"], xs["no-sidecar"]))
    for r in xs["samples"]:
        print("   %s:%d  %s@%d  header=%s  sidecar=%s" % r)

    # address identity check: every rewrite must name a member at the exact
    # offset, so `&p->M` is the same address by construction.
    bad = [s for s in sites if s["hit"] == "member"
           and s["new"].endswith("->" + s["member"]) and s["new"].startswith("&")]
    print("\n  address-identity: %d sites emit `&p->Member` at the exact offset"
          % len(bad))


# --------------------------------------------------------------------- plan
def cmd_plan(args):
    scan = load_scan()
    sites = scan["sites"]
    by_file = defaultdict(list)
    for s in sites:
        by_file[s["file"]].append(s)
    batches, cur, n = [], [], 0
    for f in sorted(by_file):
        grp = by_file[f]
        if cur and n + len(grp) > args.cap:
            batches.append(cur)
            cur, n = [], 0
        if len(grp) > args.cap:
            if cur:
                batches.append(cur)
                cur, n = [], 0
            for i in range(0, len(grp), args.cap):
                batches.append(grp[i:i + args.cap])
            continue
        cur.extend(grp)
        n += len(grp)
    if cur:
        batches.append(cur)
    plan = {"generated": time.strftime("%Y-%m-%dT%H:%M:%S"), "cap": args.cap,
            "total": len(sites), "batches": []}
    for i, b in enumerate(batches, 1):
        plan["batches"].append({
            "id": "B%02d" % i,
            "n": len(b),
            "files": sorted({s["file"] for s in b}),
            "sites": b,
        })
    PLAN_PATH.write_text(json.dumps(plan, ensure_ascii=False), encoding="utf-8")
    print("plan: %d sites in %d batches -> %s" % (len(sites), len(batches), PLAN_PATH))
    for b in plan["batches"]:
        print("  %-5s %5d sites %3d files  %s"
              % (b["id"], b["n"], len(b["files"]),
                 ",".join(Path(f).name for f in b["files"][:4])))


# -------------------------------------------------------------------- apply
def load_state():
    if STATE_PATH.exists():
        return json.loads(STATE_PATH.read_text(encoding="utf-8"))
    return {"batches": {}}


def save_state(st):
    STATE_PATH.write_text(json.dumps(st, indent=1, ensure_ascii=False),
                          encoding="utf-8")


def cmd_apply(bid, dry=False, verify=True):
    plan = json.loads(PLAN_PATH.read_text(encoding="utf-8"))
    batch = None
    for b in plan["batches"]:
        if b["id"] == bid:
            batch = b
            break
    if batch is None:
        sys.exit("unknown batch %r" % bid)
    st = load_state()
    if bid in st["batches"] and st["batches"][bid].get("status") == "applied":
        sys.exit("batch %s already applied -- rollback first" % bid)

    per_file = defaultdict(list)
    for s in batch["sites"]:
        per_file[s["file"]].append(s)

    # ---- overlap / span sanity (per file, in one pass before touching disk)
    final = defaultdict(list)
    drops = Counter()
    for f, rows in per_file.items():
        rows.sort(key=lambda r: (r["start"], r["end"]))
        last = -1
        for r in rows:
            if r["start"] < last:
                drops["span-clash"] += 1
                continue
            # the recorded span must still be the recorded text
            final[f].append(r)
            last = r["end"]

    keep_dir = KEEP / bid
    keep_dir.mkdir(parents=True, exist_ok=True)
    changed = repl = 0
    applied_rows = []
    for f in sorted(final):
        p = ROOT / f
        try:
            text = p.read_bytes()
        except OSError as e:
            print("  READ FAIL %s: %s" % (f, e))
            continue
        out = bytearray()
        pos = 0
        ok = True
        n_repl = 0
        for r in final[f]:
            cur = text[r["start"]:r["end"]].decode("utf-8", "replace")
            if cur != r["old"]:
                drops["slice-mismatch"] += 1
                ok = False
                continue
            out += text[pos:r["start"]]
            out += r["new"].encode("utf-8")
            pos = r["end"]
            n_repl += 1
            applied_rows.append({"file": f, "line": r["line"], "old": r["old"],
                                 "new": r["new"], "cls": r["cls"],
                                 "off": r["off"], "member": r["member"],
                                 "form": r["form"]})
        out += text[pos:]
        if n_repl == 0:
            continue
        bak = keep_dir / f
        bak.parent.mkdir(parents=True, exist_ok=True)
        if not bak.exists():
            shutil.copy2(p, bak)
        if not dry:
            p.write_bytes(bytes(out))
        changed += 1
        repl += n_repl
    if not dry:
        st["batches"][bid] = {
            "status": "applied",
            "n_sites": batch["n"],
            "files": changed,
            "replacements": repl,
            "drops": dict(drops),
            "ts": time.strftime("%Y-%m-%dT%H:%M:%S"),
        }
        save_state(st)
        (CACHE / ("applied_%s.json" % bid)).write_text(
            json.dumps({"batch": bid, "dry": dry, "files": changed,
                        "replacements": repl, "drops": dict(drops),
                        "rows": applied_rows}, ensure_ascii=False, indent=0),
            encoding="utf-8")
    print("apply %s%s: files %d | replacements %d | sites %d | drops %s"
          % (bid, " (DRY)" if dry else "", changed, repl, batch["n"], dict(drops)))
    if dry:
        for r in applied_rows[:20]:
            print("   %s:%d  %s -> %s" % (r["file"], r["line"], r["old"], r["new"]))
    return applied_rows


def cmd_rollback(bid):
    st = load_state()
    keep_dir = KEEP / bid
    if not keep_dir.exists():
        sys.exit("no backup for batch %s" % bid)
    n = 0
    for p in sorted(keep_dir.rglob("*")):
        if not p.is_file():
            continue
        rel = os.path.relpath(str(p), str(keep_dir))
        dst = ROOT / rel
        dst.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(p, dst)
        n += 1
    st["batches"].setdefault(bid, {})["status"] = "rolled-back"
    save_state(st)
    print("rollback %s: restored %d files" % (bid, n))


# ------------------------------------------------------------------- ledger
def cmd_ledger():
    st = load_state()
    print("== X118 batch ledger ==")
    if not st["batches"]:
        print("  (empty)")
        return
    for bid in sorted(st["batches"]):
        b = st["batches"][bid]
        print("  %-5s %-12s sites=%-5s files=%-4s repl=%-5s %s"
              % (bid, b.get("status"), b.get("n_sites"), b.get("files"),
                 b.get("replacements"), b.get("drops") or ""))


# --------------------------------------------------------- idempotence proof
def cmd_verify_idempotent(args):
    """Re-scan the files touched by applied batches: zero sites must remain."""
    st = load_state()
    files = set()
    for bid, b in st["batches"].items():
        if b.get("status") != "applied":
            continue
        ap = CACHE / ("applied_%s.json" % bid)
        if not ap.exists():
            continue
        art = json.loads(ap.read_text(encoding="utf-8"))
        for r in art["rows"]:
            files.add(r["file"])
    if not files:
        sys.exit("no applied batch to verify")
    print("verifying %d files touched by applied batches" % len(files))
    import concurrent.futures as cf
    res = []
    with cf.ProcessPoolExecutor(max_workers=args.jobs) as ex:
        futs = {ex.submit(scan_tu, f): f for f in sorted(files)}
        for fu in cf.as_completed(futs):
            res.append(fu.result())
    left = []
    for r in res:
        for s in r["sites"]:
            left.append(s)
    print("residual clean sites in those files: %d" % len(left))
    for s in left[:20]:
        print("   %s:%d %s" % (s["file"], s["line"], s["old"]))
    if left:
        sys.exit(1)


# --------------------------------------------------------------------- main
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--scan", action="store_true")
    ap.add_argument("--report", action="store_true")
    ap.add_argument("--plan", action="store_true")
    ap.add_argument("--apply", default=None, metavar="BATCH")
    ap.add_argument("--rollback", default=None, metavar="BATCH")
    ap.add_argument("--ledger", action="store_true")
    ap.add_argument("--verify-idempotent", action="store_true")
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--class", dest="classes", default=None)
    ap.add_argument("--tu", default=None)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--jobs", type=int, default=8)
    ap.add_argument("--cap", type=int, default=200)
    ap.add_argument("--top", type=int, default=25)
    a = ap.parse_args()
    if a.scan:
        cmd_scan(a)
    elif a.report:
        cmd_report(a)
    elif a.plan:
        cmd_plan(a)
    elif a.apply:
        cmd_apply(a.apply, a.dry_run)
    elif a.rollback:
        cmd_rollback(a.rollback)
    elif a.ledger:
        cmd_ledger()
    elif a.verify_idempotent:
        cmd_verify_idempotent(a)
    else:
        ap.print_help()


if __name__ == "__main__":
    main()
