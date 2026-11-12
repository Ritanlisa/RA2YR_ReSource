#!/usr/bin/env python3
"""passes.py -- DECOMP-2 transform passes (rules 3/4/5 + era normalization).

Each pass mutates a FunctionCtx (statement tree + text) and records every
decision into ctx.sites / ctx.notes for the restoration-rate report.
No pass invents cpp-side symbols (rule 1): locals keep pseudocode names,
members come from the registry, extra views/unions are declared hpp-side.

Rule-4 policy carve-out (documented): a vtable dispatch whose table is not
in vtable_slot_authority is emitted as a registry-typed function-table
subscript `((Fn**)member)[slot](args)` -- that is array member access of
the function table, not data-pointer arithmetic.  It upgrades automatically
to `this->Method(...)` once the registry declares the vtable.
"""
import json
import os
import re

# ---------------------------------------------------------------- type tables

TYPE_MAP = {
    "_DWORD": "unsigned int", "_WORD": "unsigned short",
    "_BYTE": "unsigned char", "_QWORD": "__int64",
    "__int16": "short", "unsigned __int16": "unsigned short",
    "__int8": "char", "unsigned __int8": "unsigned char",
    "unsigned __int32": "unsigned int", "__int32": "int",
    "__int64": "__int64", "unsigned __int64": "unsigned __int64",
    "BOOL": "int", "bool": "bool", "int": "int", "unsigned int": "unsigned int",
    "short": "short", "unsigned short": "unsigned short",
    "char": "char", "unsigned char": "unsigned char", "signed char": "signed char",
    "long": "long", "unsigned long": "unsigned long", "float": "float",
    "double": "double", "void": "void",
    "int8_t": "signed char", "uint8_t": "unsigned char",
    "int16_t": "short", "uint16_t": "unsigned short",
    "int32_t": "int", "uint32_t": "unsigned int",
    "int64_t": "__int64", "uint64_t": "unsigned __int64",
    # R3 Win32 spelling aliases: the export prototypes/globals carry SDK
    # names; without them `LONG __stdcall M()` is C2143 (LONG undeclared in
    # a hpp that only includes string.h) and poisoned whole units.
    "LONG": "long", "ULONG": "unsigned long", "DWORD": "unsigned long",
    "UINT": "unsigned int", "USHORT": "unsigned short",
    "BYTE": "unsigned char", "WORD": "unsigned short",
    "HANDLE": "void *", "LPVOID": "void *", "LPCVOID": "const void *",
    # R4: remaining SDK spellings the registry globals/protos carry.  A
    # single unknown alias (`extern LPSTR lpMultiByteStr;`) is C2146 and
    # poisons the whole unit, so every import-surface alias gets mapped.
    "LPSTR": "char *", "LPCSTR": "const char *",
    "LPWSTR": "wchar_t *", "LPCWSTR": "const wchar_t *",
    "LPBYTE": "unsigned char *", "LPDWORD": "unsigned long *",
    "PSTR": "char *", "PCSTR": "const char *",
    "HRESULT": "long", "HMODULE": "void *", "HINSTANCE": "void *",
    "HWND": "void *", "HDC": "void *", "HGDIOBJ": "void *",
    "HBRUSH": "void *", "HPEN": "void *", "HFONT": "void *",
    "HBITMAP": "void *", "HRGN": "void *", "HMENU": "void *",
    "HICON": "void *", "HCURSOR": "void *", "HKL": "void *",
    "HMONITOR": "void *", "HIMAGELIST": "void *", "HKEY": "void *",
    "HPALETTE": "void *", "HGLOBAL": "void *",
    "LCID": "unsigned long", "COLORREF": "unsigned long",
    "WPARAM": "unsigned int", "LPARAM": "long", "LRESULT": "long",
    "ATOM": "unsigned short", "LANGID": "unsigned short",
    "FARPROC": "int", "PROC": "int", "VOID": "void",
    "LPLOGFONT": "void *", "LPLOGFONTA": "void *",
    "LPBITMAPINFO": "void *", "LPDDSURFACEDESC": "void *",
}
WIDTH_OF = {
    "unsigned short": 2, "short": 2, "unsigned int": 4, "int": 4,
    "unsigned char": 1, "signed char": 1, "char": 1, "bool": 1,
    "float": 4, "double": 8, "long": 4, "unsigned long": 4,
    "__int64": 8, "unsigned __int64": 8,
}
TYPE_OF_CAST = {
    "_DWORD": "unsigned int", "_WORD": "unsigned short",
    "_BYTE": "unsigned char", "int": "int", "char": "char",
    "unsigned __int8": "unsigned char", "__int16": "short",
    "unsigned int": "unsigned int", "short": "short",
    "unsigned short": "unsigned short", "unsigned char": "unsigned char",
    "__int64": "__int64",
}


def spell_type(ty):
    t = (ty or "").strip()
    # CW2: IDA register annotations (`double@<st0>`, `char@<cf>`) are not
    # C++ and poison every declaration they touch (C2018 '0x40').
    t = re.sub(r"@<[^>]*>", "", t).strip()
    if not t:
        return "int"
    if t in TYPE_MAP:
        return TYPE_MAP[t]
    # R5: function-pointer spellings from export protos (`int (__stdcall *)
    # (int)`) are illegal in declaration position -- 4-byte pointer for the
    # pilot stub (codegen-neutral for decl-only sites)
    if "(" in t:
        return "void *"
    # CW2: qualified / mangled type spellings (`std::locale::facet *`,
    # `struct Concurrency::ISchedulerProxy *`) are not declarable -- the
    # namespace or nested class is not declared in a pilot hpp (C2653).
    # Pointer width is the ABI truth; degrade the spelling, not the bits.
    base_core = re.sub(r"^(?:struct|class|union)\s+", "", t.rstrip("*").strip())
    if "::" in base_core or "?" in t or "`" in t:
        return "void *" if t.rstrip().endswith("*") else "int"
    m = re.match(r"^([^*]+?)\s*(\*+)$", t)
    if m:
        base = spell_type(m.group(1))
        return (base + " " if base else "") + m.group(2)
    return re.sub(r"\s+", " ", t)


# CW2: names provided by tools/decomp_sys/era_types.h.  hpp_pilot must never
# forward-declare these as classes (`class LONG;` made `volatile LONG *` a
# "volatile class LONG *" -> C2664 on InterlockedIncrement).
ERA_TYPE_NAMES = {
    "_UNKNOWN", "_DWORD", "_WORD", "_BYTE", "_QWORD",
    "DWORD", "WORD", "BYTE", "BOOL", "UINT", "USHORT", "UCHAR", "CHAR",
    "LONG", "ULONG", "COLORREF", "ATOM", "LCTYPE", "MMRESULT", "UINT_PTR",
    "ULONG_PTR", "LRESULT", "WPARAM", "LPARAM", "LPVOID", "LPCVOID",
    "LPSTR", "LPCSTR", "LPWSTR", "LPCWSTR", "BSTR", "LPCOLESTR", "PCNZWCH",
    "LPCCH", "LPBYTE", "LPDWORD", "LPLONG", "FARPROC",
    "HWND", "HINSTANCE", "HDC", "HGDIOBJ", "HGLOBAL", "HLOCAL", "HMODULE",
    "HANDLE", "HBRUSH", "HPEN", "HFONT", "HBITMAP", "HICON", "HCURSOR",
    "HMENU", "HKEY", "HRGN", "HRSRC", "HIMC", "HKL", "SOCKET",
    "GUID", "CLSID", "IID", "REFIID", "REFCLSID", "LPGUID", "LPUNKNOWN",
    "VARIANT", "SAFEARRAY",
    "POINT", "LPPOINT", "RECT", "LPRECT", "FILETIME", "SYSTEMTIME", "MSG",
    "LPMSG", "CRITICAL_SECTION", "LPCRITICAL_SECTION",
    "LPSECURITY_ATTRIBUTES", "TEXTMETRICA", "LPTEXTMETRICA", "DLGTEMPLATE",
    "_WIN32_FIND_DATAA", "LPSTREAM", "LPDIRECTDRAW", "LPDIRECTDRAWSURFACE",
    "LPDIRECTDRAWPALETTE", "LPDIRECTDRAWCLIPPER",
    "_EA", "_EBX", "_ECX", "_EDX", "_ESI", "_EDI", "_EBP", "_ESP",
    # header-owned typedefs: never forward-declare as a class
    "FILE", "size_t", "va_list", "wchar_t", "int8_t", "int16_t", "int32_t",
    "int64_t", "uint8_t", "uint16_t", "uint32_t", "uint64_t",
    "intptr_t", "uintptr_t", "DLGPROC", "PAINTSTRUCT", "LOGFONTA",
    "OSVERSIONINFOA", "_BY_HANDLE_FILE_INFORMATION", "TEXTMETRICA",
    "LPTEXTMETRICA", "tagTEXTMETRICA", "tagPAINTSTRUCT", "tagLOGFONTA",
}


def strip_line_comments(body_lines):
    out = []
    for ln in body_lines:
        ln = re.sub(r"\s*//(?!\s*0x)[^\n]*$", "", ln)
        ln = re.sub(r"\s*/\*0x[0-9A-Fa-f]+\*/\s*$", "", ln)
        out.append(ln.rstrip())
    return [ln for ln in out if ln.strip()]


# ---------------------------------------------------------------- ctx objects

class Site(object):
    def __init__(self, kind, detail, action, restored):
        self.kind = kind
        self.detail = detail
        self.action = action
        self.restored = bool(restored)

    def as_dict(self):
        return {"kind": self.kind, "detail": self.detail,
                "action": self.action, "restored": self.restored}


class ClassView(object):
    """Per-class member views needed by emitted code (drives hpp synthesis).

    scalars[cls][offset][role] = {name,type,width,src}
    arrays[cls][offset] = {name,elem,count,src}
    virtuals[cls][slot] = {name,proto}
    """

    def __init__(self):
        self.scalars = {}
        self.arrays = {}
        self.virtuals = {}

    def add_scalar(self, cls, off, role, name, era_type, width, src):
        self.scalars.setdefault(cls, {}).setdefault(off, {})[role] = {
            "name": name, "type": era_type, "width": width, "src": src or "-"}

    def add_array(self, cls, off, name, elem, count, src):
        cur = self.arrays.setdefault(cls, {}).get(off)
        if cur is not None:
            # CW3-2: one offset can be read through several value shapes
            # (`*(void **)&m[3]` read vs `*(_DWORD *)&m[3] = 0` store).
            # Keep the POINTER element spelling -- it satisfies both uses
            # (a scalar assignment of 0 into a pointer element is legal),
            # while the reverse would reject the pointer load (C2440).
            ce = cur.get("elem") or ""
            ne = elem or ""
            if ce.endswith("*") and not ne.endswith("*"):
                elem = ce
            if not name:
                name = cur.get("name")
            if not count:
                count = cur.get("count") or 0
            if not src:
                src = cur.get("src")
        self.arrays.setdefault(cls, {})[off] = {
            "name": name, "elem": elem, "count": count, "src": src or "-"}

    def add_virtual(self, cls, slot, name, proto):
        self.virtuals.setdefault(cls, {})[slot] = {
            "name": name, "proto": proto or ""}


class FunctionCtx(object):
    def __init__(self, ex, sig, reg, views):
        self.ex = ex
        self.sig = sig
        self.reg = reg
        self.views = views
        self.notes = []
        self.sites = []
        self.sightings = []     # narrow-macro witnesses (IG backflow)
        self.used_globals = {}  # registry name -> era extern type
        self.lines = strip_line_comments(ex.body_lines)
        self.stmts = None

    def note(self, kind, text):
        self.notes.append({"kind": kind, "text": text})


# ---------------------------------------------------------------- pass 0/1

def pass_param_rename(ctx):
    body = "\n".join(ctx.lines)
    # R7 FIX: IDA names call args a1..aN POSITIONALLY (a1 = this for
    # thiscall).  The old "sorted appearance order" mapping silently
    # MIS-ALIGNED bodies that reference only a subset (Blit functor:
    # a11 renamed to p6 because a8..a10 never appeared -- then `*p6`
    # dereferenced an int param, C2100).  Map by the aN NUMBER against
    # the signature arity instead.
    pnames = ctx.sig.get("param_names") or []
    if pnames or not ctx.sig.get("free"):
        n_par = len(pnames)
        # R7.1: a1 is `this` only when the binary actually carries a
        # receiver (thiscall ECX / proto names `this`).  A __stdcall
        # leaf with args on the stack has NO this at a1 -- starting the
        # map at 2 there shifted every param one slot
        # (MapClass::CheckCellsBuildable: a2(loop bound) -> p0 declared
        # `unsigned short *` -> C2446 '>=').
        base = 2 if ctx.sig.get("this_at_a1") else 1

        def _amap(m):
            k = int(m.group(1))
            idx = k - base
            if 0 <= idx < n_par:
                return pnames[idx]
            # R7: an unnamed thiscall/fastcall receiver renders as `a1`
            # in the raw body (`*(_DWORD *)(a1 + 68)` == this+0x44) --
            # map it to `this`, never leave it dangling (C2065).  A
            # WRITTEN a1 is a spilled ECX local, not this (this is
            # const) -- leave it (honest fail).
            if k == 1 and ctx.sig.get("this_at_a1") and \
                    not re.search(r"\ba1\s*=[^=]", body) and re.search(
                        r"\(\s*a1\s*\+|a1\s*->|\*\([^)]*\)\s*\(?\s*a1\b"
                        r"|\ba1\s*\)",
                        body):
                return "this"
            return m.group(0)
        body = re.sub(r"\ba(\d+)\b", _amap, body)
    # R5: the export proto can NAME its params (`void *Block`) while the
    # body references them by that name; alias positionally to our p names
    proto = ctx.ex.proto or ""
    pm = re.search(r"\(([^)]*)\)\s*$", proto)
    if pm:
        _TYPE_WORDS = {
            "int", "void", "char", "unsigned", "signed", "long", "short",
            "float", "double", "const", "this", "bool", "wchar_t",
            "__int8", "__int16", "__int32", "__int64",
            "_DWORD", "_WORD", "_BYTE", "_QWORD", "va_list",
        }
        pnames = []
        for part in pm.group(1).split(","):
            nm = re.search(r"[*\s](\w+)\s*$", part.strip())
            pnames.append(nm.group(1) if nm else None)
        pnames = [n for n in pnames
                  if n and n != "this" and n not in _TYPE_WORDS]
        for i, nm in enumerate(pnames):
            if i < len(ctx.sig["param_names"]) and \
                    nm != ctx.sig["param_names"][i] and \
                    not re.match(r"^[a-z]\d+$", nm or ""):
                body = re.sub(r"\b%s\b" % re.escape(nm),
                              ctx.sig["param_names"][i], body)
    ctx.lines = body.split("\n")


_GLOBAL_RE = re.compile(
    r"\b(dword|word|byte|qword|flt|dbl|unk|stru|off)_[0-9A-Fa-f]{6,}\b")

_GLOBAL_PREFIX_TYPE = {
    "dword": "unsigned int", "word": "unsigned short",
    "byte": "unsigned char", "qword": "__int64", "flt": "float",
    "dbl": "double", "unk": "unsigned char", "off": "void*",
}


# ---------------------------------------------------------------- global ty evid
# R8: the IDA-plate default for a dword global is `unsigned int`.  When the
# ORIGINAL function compares that value with a signed jcc, MSVC's usual
# arithmetic conversions prove the compared operands signed (int-vs-unsigned
# canonicalizes to an unsigned compare, which would have produced jb/jae).
# `anchors/global_type_evidence.json` records exactly those globals with the
# proving function; the spelling here is the signed twin of the same width.
_GLOBAL_TY_EVIDENCE = {}

# CW3-3: IDA's own global type table (anchors/ida_global_types.json, addr ->
# {name,type}).  The export bodies were rendered against THESE types, so for
# `.member` chains they name the exact owner class -- the registry
# `global_types` channel is binary-comparison evidence and often only says
# `uint32_t`/`void*`.
_IDA_GTYPES = {}


def _ida_global_type_index():
    if "idx" not in _IDA_GTYPES:
        path = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                            "..", "..", "anchors", "ida_global_types.json")
        idx = {}
        try:
            with open(path, encoding="utf-8") as f:
                raw = json.load(f) or {}
            for k, v in raw.items():
                try:
                    idx[int(k, 16)] = v
                except (TypeError, ValueError):
                    continue
        except (OSError, ValueError):
            pass
        _IDA_GTYPES["idx"] = idx
    return _IDA_GTYPES["idx"]


def _load_global_ty_evidence():
    if not _GLOBAL_TY_EVIDENCE:
        path = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                            "..", "..", "anchors",
                            "global_type_evidence.json")
        try:
            with open(path, encoding="utf-8") as f:
                _GLOBAL_TY_EVIDENCE.update(
                    (json.load(f) or {}).get("globals") or {})
        except (OSError, ValueError):
            pass
    return _GLOBAL_TY_EVIDENCE


def _global_ty_evidence(name, addr=None):
    ev = _load_global_ty_evidence()
    e = ev.get(name)
    if e is None and addr:
        try:
            a = int(addr, 16) & 0xFFFFFFFF
        except (TypeError, ValueError):
            return None
        for n2, e2 in ev.items():
            try:
                if int(e2.get("addr", ""), 16) & 0xFFFFFFFF == a:
                    return e2.get("type")
            except (TypeError, ValueError):
                continue
        return None
    return (e or {}).get("type")


def pass_globals(ctx):
    body = "\n".join(ctx.lines)
    seen = set()
    renamed = {}      # new name -> ida prefix (for cast-deref width match)
    for m in _GLOBAL_RE.finditer(body):
        if m.group(0) in seen:
            continue
        seen.add(m.group(0))
        g = ctx.reg.global_for_ida_name(m.group(0))
        if g and g.get("name"):
            body = re.sub(r"\b%s\b" % re.escape(m.group(0)), g["name"], body)
            renamed[g["name"]] = m.group(0).split("_")[0]
            ty = g.get("type") or _GLOBAL_PREFIX_TYPE.get(
                m.group(0).split("_")[0], "unsigned int")
            ty = spell_type(ty)
            ev = _global_ty_evidence(g["name"], g.get("addr"))
            if ev:
                ty = ev
                ctx.note("global_type_evidence",
                         "%s -> %s (binary comparison evidence)" %
                         (g["name"], ty))
            ctx.used_globals[g["name"]] = ty
            ctx.sites.append(Site(
                "global", m.group(0),
                "renamed -> %s (%s)" % (g["name"],
                                        g.get("type_src") or "signals"), True))
        else:
            ctx.sites.append(Site(
                "global", m.group(0), "NO registry entry; kept as-is", False))
    # cast-deref-of-global reduction: `*(_DWORD *)&g` with width-matched
    # global == IDA width-coercion artifact -> plain `g`
    prefix_w = {"dword": 4, "qword": 8, "flt": 4, "dbl": 8, "word": 2,
                "byte": 1, "unk": 1, "off": 4}

    def grepl(m):
        cast_ty, name = m.group(1), m.group(2)
        if name not in renamed:
            return m.group(0)
        cw = WIDTH_OF.get(TYPE_OF_CAST.get(cast_ty) or spell_type(cast_ty), 4)
        gw = prefix_w.get(renamed[name], 4)
        if cw == gw:
            ctx.sites.append(Site(
                "global", "*(%s *)&%s" % (cast_ty, name),
                "width-matched cast-deref of global -> plain %s" % name, True))
            return name
        ctx.sites.append(Site(
            "global", "*(%s *)&%s" % (cast_ty, name),
            "width mismatch (cast %dB vs global %dB) -- kept" % (cw, gw),
            False))
        return m.group(0)

    body = re.sub(r"\*\(\s*(_?\w+)\s*\*\s*\)\s*&\s*(\w+)\b", grepl, body)
    ctx.lines = body.split("\n")

    # named globals already present in the pseudocode (IDA had them typed):
    # identifiers that exist in the registry globals get extern declarations
    # so the emitted hpp compiles (g_CellPassabilityLUT C2065 family)
    have_names = getattr(ctx.reg, "reg", {}).get("globals") \
        if hasattr(ctx.reg, "reg") else None
    if have_names:
        for ident in set(re.findall(r"\b([A-Za-z_]\w{3,})\b", body)):
            if ident not in have_names:
                continue
            g = have_names[ident]
            if not isinstance(g, dict):
                continue
            # skip member accesses (`this->ident`, `x.ident`)
            if re.search(r"->\s*%s\b|\.\s*%s\b" % (re.escape(ident),
                                                   re.escape(ident)), body):
                continue
            if ident not in ctx.used_globals:
                ty = spell_type(g.get("type") or "int")
                ev = _global_ty_evidence(ident, g.get("addr"))
                if ev:
                    ty = ev
                    ctx.note("global_type_evidence",
                             "%s -> %s (binary comparison evidence)"
                             % (ident, ty))
                ctx.used_globals[ident] = ty
                ctx.sites.append(Site(
                    "global", ident,
                    "named registry global -> extern %s (registry)" % ty,
                    True))


# ---------------------------------------------------------------- pass: struct globals
#
# R5: the IDA export renders struct-global member access in forms that are
# NOT C++ and poisoned whole units (C2059 '?', C2228 `.__pad_58`, C2109):
#
#   stru_A8EB00.?[948]          unknown member at byte offset 948 (decimal)
#   stru_87F5F0.__pad_58[416]   pad member 0x58 (hex) indexed (byte elems)
#   G->__pad_140[4 * p0 + 208]  member access THROUGH a global pointer var
#
# -> char-pointer arithmetic; `stru_X` gets `extern char stru_X[];`
# (same symbol spelling, reloc key unchanged).

_STRU_QMARK_IDX = re.compile(r"\b(stru_[0-9A-Fa-f]{6,})\.\?\[(\d+)\]")
_STRU_PAD = re.compile(r"\b(stru_[0-9A-Fa-f]{6,})\.__pad_([0-9A-Fa-f]+)")
_ARROW_PAD = re.compile(r"\b([A-Za-z_]\w*)\->__pad_([0-9A-Fa-f]+)")


def _balanced_close(text, start):
    """text[start] is '[' or '(' -> index of the matching close, or -1."""
    open_c = text[start]
    close_c = {"(": ")", "[": "]"}[open_c]
    depth = 0
    for i in range(start, len(text)):
        if text[i] == open_c:
            depth += 1
        elif text[i] == close_c:
            depth -= 1
            if depth == 0:
                return i
    return -1


# ------------------------------------------------ CW5-F10: member resolution
#
# CW5-7 (B5): the member NAME of these residual accesses can not be looked
# up by exact class (the base global is a bare `DataGlobal_*` scalar) and
# `global_member_offset` honestly refuses ambiguous names (`uniqueId` lives
# on 110 classes, `spawnStatus` on 35).  Two extra tiers:
#   1. the offset is ENCODED in the name (`AudioStream_field_0xAC`,
#      `LoadGame_field_0x04`, `__pad_38`, `__tail_10`, `q004`, `m_3`);
#   2. the name is a class-hierarchy member: the SHALLOWEST declaring class
#      wins (`uniqueId`/`abstractFlags`/`referenceCount` -> AbstractClass,
#      `spawnStatus`/`nextObject`/`bombVisible` -> ObjectClass).  All
#      shallowest candidates must agree on ONE offset.

_CW5_INLINE_FIELD = re.compile(
    r"^(?P<cls>[A-Za-z_]\w*)_field_(?:0x)?(?P<off>[0-9A-Fa-f]+)$")
_CW5_OFF_NAME = re.compile(
    r"^(?:m|m_|__pad_?|__tail_?|field_?|alignmentPadding|q|u32_|u16_|u8_)"
    r"(?P<off>[0-9A-Fa-f]{1,6})$")


def _cw5_inline_member(reg, mem):
    """(offset, type) encoded in the member name, or None."""
    m = _CW5_INLINE_FIELD.match(mem or "")
    if m:
        off = int(m.group("off"), 16)
        typ = None
        ck = reg.class_key(m.group("cls"))
        if ck:
            rec = reg.member_at(ck, off)[0]
            if rec:
                typ = rec.get("type")
        return off, typ
    m = _CW5_OFF_NAME.match(mem or "")
    if m:
        return int(m.group("off"), 16), None
    v = re.match(r"^vfptr(\d*)$", mem or "")
    if v:
        return 4 * int(v.group(1) or 0), "void*"
    return None


def _cw5_member_cands(reg, mem):
    """[(class, offset, type)] for every table claiming member MEM."""
    try:
        reg.member_at("AbstractClass", 0)     # force lazy table loading
    except Exception:                          # noqa: BLE001
        pass
    cands = []
    for _cls, rec in (getattr(reg, "classes", {}) or {}).items():
        for o_s, mrec in (rec.get("members") or {}).items():
            if mrec.get("name") == mem:
                cands.append((_cls, int(o_s), mrec.get("type")))
    ml = getattr(reg, "_ml", None) or {}
    for _cls, grp in ml.items():
        for o_s, mrec in grp.items():
            if mrec.get("name") == mem:
                cands.append((_cls, int(o_s), mrec.get("type")))
    cl = getattr(reg, "_cl", None) or {}
    for _cls, lay in cl.items():
        for o_s, mrec in (lay.get("offsets") or {}).items():
            if mrec.get("ida_name") == mem:
                cands.append((_cls, int(o_s), mrec.get("type")))
    return cands


def _cw5_shallow_member(reg, mem):
    """(offset, type, shallowest_class) for a hierarchy member name."""
    if not mem:
        return None
    cands = _cw5_member_cands(reg, mem)
    cl = getattr(reg, "_cl", None) or {}
    if not cands:
        return None
    depth_cache = {}

    def depth(c):
        if c in depth_cache:
            return depth_cache[c]
        d = 0
        cur = c
        seen = set()
        while cur and cur not in seen:
            seen.add(cur)
            lay = cl.get(cur) or {}
            par = lay.get("parent")
            if not par:
                break
            d += 1
            cur = par
        depth_cache[c] = d
        return d

    best = min(depth(c) for c, _o, _t in cands)
    picks = [(o, t, c) for c, o, t in cands if depth(c) == best]
    offs = set(o for o, _t, _c in picks)
    if len(offs) != 1:
        return None
    typ = next((t for _o, t, _c in picks if t), None)
    return picks[0][0], typ, picks[0][2]


_CW5_DIS_DISP = re.compile(
    r"\[\s*\w+\s*\+\s*(?:0x([0-9A-Fa-f]+)|([0-9A-Fa-f]+)h)\s*\]")


def _cw5_disasm_offsets(ctx):
    """Every [reg+disp] displacement this function's disassembly touches."""
    if hasattr(ctx, "_cw5_dis_offs"):
        return ctx._cw5_dis_offs
    s = set()
    for dl in (getattr(ctx.ex, "disasm_lines", []) or []):
        for m in _CW5_DIS_DISP.finditer(dl):
            s.add(int(m.group(1) or m.group(2), 16))
    ctx._cw5_dis_offs = s
    return s


def _cw5_disasm_member(ctx, mem):
    """Offset proven by THIS function's disassembly among the candidates."""
    cands = _cw5_member_cands(ctx.reg, mem)
    if not cands:
        return None
    by_off = {}
    for _c, o, t in cands:
        if t and o not in by_off:
            by_off[o] = t
        else:
            by_off.setdefault(o, None)
    hits = [o for o in by_off if o in _cw5_disasm_offsets(ctx)]
    if len(hits) != 1:
        return None
    return hits[0], by_off[hits[0]]


_CW5_DIS_SYM = re.compile(r"\b[A-Za-z_]\w*_([0-9A-F]{5,8})\b")
_CW5_IDA_GLOBAL = re.compile(
    r"^(?:stru|dword|word|byte|qword|flt|dbl|unk|off)_([0-9A-Fa-f]{5,8})$")


def _cw5_global_addr(reg, base):
    """Address of a named global (registry record, else the IDA-plate name)."""
    rec = ((getattr(reg, "reg", {}) or {}).get("globals") or {}).get(base)
    if isinstance(rec, dict) and rec.get("addr"):
        try:
            return int(str(rec["addr"]), 16)
        except (TypeError, ValueError):
            return None
    m = _CW5_IDA_GLOBAL.match(base or "")
    if m:
        return int(m.group(1), 16)
    return None


def _cw5_disasm_addrs(ctx):
    """Every absolute address symbol/immediate the disassembly names."""
    if hasattr(ctx, "_cw5_dis_addrs"):
        return ctx._cw5_dis_addrs
    s = set()
    for dl in (getattr(ctx.ex, "disasm_lines", []) or []):
        for m in _CW5_DIS_SYM.finditer(dl):
            s.add(int(m.group(1), 16))
        for m in re.finditer(r"\b0x([0-9A-Fa-f]{6,8})\b", dl):
            s.add(int(m.group(1), 16))
    ctx._cw5_dis_addrs = s
    return s


def _cw5_abs_member(ctx, base_addr, mem):
    """Offset proven by `base + off` appearing as an absolute in disasm."""
    if not base_addr:
        return None
    cands = _cw5_member_cands(ctx.reg, mem)
    inline = _cw5_inline_member(ctx.reg, mem)
    offs = {}
    for _c, o, t in cands:
        offs.setdefault(o, t)
    if inline is not None:
        offs.setdefault(inline[0], inline[1])
    if not offs:
        return None
    addrs = _cw5_disasm_addrs(ctx)
    hits = [o for o in offs if (base_addr + o) in addrs]
    if len(hits) != 1:
        return None
    return hits[0], offs[hits[0]]


def _cw5_member_tiered(reg, mem, ctx=None):
    """Offset/type for a member name via the CW5 extra tiers.

    Order: name-encoded offset -> narrowest hierarchy class (all agreeing)
    -> `base+off` absolute in this function's disassembly -> unique
    candidate offset in a [reg+disp] operand.
    """
    r = _cw5_inline_member(reg, mem)
    if r is not None:
        return r
    s = _cw5_shallow_member(reg, mem)
    if s is not None:
        return (s[0], s[1])
    if ctx is not None:
        return _cw5_disasm_member(ctx, mem)
    return None


def _cw5_class_size(reg, cls):
    if not cls:
        return 0
    return (reg.classes.get(cls) or {}).get("size") or 0


def _cw5_elem_class(reg, base):
    """Element class of a global object-array from its NAME.

    `g_ScenarioClass_Instance` -> ScenarioClass / `HouseClass_Player` ->
    HouseClass / `X_Array` -> X.  Longest declarable prefix wins.
    """
    c = base
    for pre in ("g_", "s_"):
        if c.startswith(pre):
            c = c[len(pre):]
            break
    c = re.sub(r"_(?:Array|array|Player|Instance|List)$", "", c)
    c = re.sub(r"_\d+$", "", c)
    ck = reg.class_key(c)
    if ck:
        return ck
    for i in range(len(c), 3, -1):
        ck = reg.class_key(c[:i])
        if ck:
            return ck
    return None



def pass_struct_globals(ctx):
    text = "\n".join(ctx.lines)
    if not hasattr(ctx, "used_globals"):
        ctx.used_globals = {}
    changed = 0

    def sub_indexed(prefix_pat, base_group, off_group):
        """Generic: `BASE.__pad_H` (+ optional balanced [idx]) -> char* form."""
        nonlocal text, changed
        out = []
        pos = 0
        for m in prefix_pat.finditer(text):
            if m.start() < pos:
                continue
            idx_expr = None
            j = m.end()
            if j < len(text) and text[j] == "[":
                k = _balanced_close(text, j)
                if k > 0:
                    idx_expr = text[j + 1:k]
                    after = k + 1
                else:
                    continue        # unbalanced: leave
            else:
                after = m.end()
            base = m.group(base_group)
            off = int(m.group(off_group), 16)
            if idx_expr is not None and idx_expr.strip():
                rep = "((char *)%s)[0x%X + (%s)]" % (base, off, idx_expr)
            else:
                rep = "((char *)%s)[0x%X]" % (base, off)
            out.append(text[pos:m.start()])
            out.append(rep)
            pos = after
            changed += 1
        out.append(text[pos:])
        text = "".join(out)

    # 1. stru_X.?[N] -- unknown member, direct byte offset
    def qm(m):
        nonlocal changed
        changed += 1
        ctx.used_globals.setdefault(m.group(1), "char[]")
        return "((char *)%s)[%s]" % (m.group(1), m.group(2))
    text = _STRU_QMARK_IDX.sub(qm, text)

    # 1b. stru_X.vfptrN -- MI vtable slot member read as a VALUE
    #      (IPXManagerClass family); char* keeps the +N byte arithmetic
    def vf(m):
        nonlocal changed
        changed += 1
        ctx.used_globals.setdefault(m.group(1), "char[]")
        k = int(m.group(2) or 0)
        return "((char **)%s)[%d]" % (m.group(1), k)
    text = re.sub(r"\b(stru_[0-9A-Fa-f]{6,})\.vfptr(\d*)\b", vf, text)

    # 2. stru_X.__pad_H[M] -- register the extern for every stru_ pad name
    #    present (sub_indexed rewrites the text)
    stru_seen = set()
    for m in _STRU_PAD.finditer(text):
        stru_seen.add(m.group(1))
    sub_indexed(_STRU_PAD, 1, 2)
    for s in stru_seen:
        ctx.used_globals.setdefault(s, "char[]")

    # ---- shared receiver gating for the global member forms ----
    locals_ = set(ctx.sig.get("param_names") or [])
    for m in _LOCAL_DECL.finditer(text):
        locals_.add(m.group(1))
    reg_globs = getattr(ctx.reg, "reg", {}).get("globals") or {}

    def _named_global_ok(base):
        """True when base names a global OBJECT (not stru_, local, this)."""
        if base == "this" or base in locals_ or base.startswith("stru_"):
            return False
        if base in ctx.used_globals:
            return True
        return base in reg_globs

    # 2b. R7: the SAME member-view forms on non-stru_ receivers --
    #     registry-named globals (`DSurface_ViewBounds.__pad_FC[324]`,
    #     `g_BuildingLoadQueue_Array.UnitExitSound`), local/param struct
    #     objects (`v7.__pad_H[M]`), and this-member chains
    #     (`this->m9A1[0].__pad_190[4]`).  Offsets are derivable for
    #     ?[N] / __pad_H / vfptrN (offset IN the token) and for named
    #     members via the registry reverse index (unique-offset answers
    #     only).  Global arrays with element indexes stay untouched
    #     (element size is unknown at text level -- honest refuse).
    def _chain_ok(base_expr):
        """(kind, ok): 'this-chain' | 'local' | 'global' | None."""
        if base_expr.startswith("this->"):
            return "this-chain"
        if "[" in base_expr:
            # indexed base: only member-array chains (this->m..[i]);
            # indexed GLOBALS have unknown element size
            return None
        if base_expr == "this" or base_expr in locals_:
            return "local"
        if base_expr.startswith("stru_"):
            return None           # handled by the stru_ forms above
        if _named_global_ok(base_expr):
            return "global"
        return None

    def _obj_addr(base_expr, kind):
        # object address: `&obj` for value objects; a global declared as
        # a pointer type was rendered with `->` by IDA, so the dot form
        # on it never carries a real &-semantics -- keep & uniformly.
        return "((char *)&%s)" % base_expr

    def _sub_chain(pattern, render):
        nonlocal text, changed
        out = []
        pos = 0
        for m in pattern.finditer(text):
            if m.start() < pos:
                continue
            base_expr = m.group(1)
            kind = _chain_ok(base_expr)
            if kind is None:
                continue
            idx_expr = None
            j = m.end()
            if j < len(text) and text[j] == "[":
                k = _balanced_close(text, j)
                if k > 0:
                    idx_expr = text[j + 1:k]
                    after = k + 1
                else:
                    continue
            else:
                after = m.end()
            out.append(text[pos:m.start()])
            out.append(render(base_expr, kind, idx_expr, m))
            pos = after
            changed += 1
        out.append(text[pos:])
        text = "".join(out)

    # 2b-1. `G.?[N]` / `v.?[N]` -- unknown member, direct byte offset
    _sub_chain(
        re.compile(r"(?<![\w.>])([A-Za-z_]\w*)\.\?\[(\d+)\]"),
        lambda b, k, idx, m: "%s[%s]" % (_obj_addr(b, k), m.group(2)))

    # 2b-2. `.vfptrN` -- MI vtable slot read as a VALUE
    #       CW3: `.vfptr[K]` / `.vfptrN[K]` are indexed slots; the old
    #       render dropped the index (the arg degraded from `char*` to a
    #       scalar and the call stub took an int slot -> C2664).
    _sub_chain(
        re.compile(r"(?<![\w.>])([A-Za-z_]\w*)\.vfptr(\d*)\b(?!\s*\()"),
        lambda b, k, idx, m: (
            "((char **)&%s)[%d + (%s)]"
            % (b, int(m.group(2) or 0), idx)
            if idx is not None and idx.strip() else
            "((char **)&%s)[%d]" % (b, int(m.group(2) or 0))))

    # 2b-3. `.__pad_H[M]` chains (this->m..[i], locals, globals)
    _sub_chain(
        re.compile(r"(?<![\w.>])((?:this->)?[A-Za-z_]\w*(?:\[[^\]\[]*\])?)"
                   r"\.__pad_([0-9A-Fa-f]+)"),
        lambda b, k, idx, m: (
            "%s[0x%X + (%s)]" % (_obj_addr(b, k), int(m.group(2), 16), idx)
            if idx is not None and idx.strip() else
            "%s[0x%X]" % (_obj_addr(b, k), int(m.group(2), 16))))

    # 2b-4. NAMED member views on struct globals
    #       (`FootClass_Array.barrelFacing[0]`,
    #        `g_BuildingLoadQueue_Array.UnitExitSound`) -- offset from
    #       the registry reverse index; primitive-typed answers only
    #       (class-typed members use deeper chains this pass does not
    #       model).
    gmo = getattr(ctx.reg, "global_member_offset", None)

    def _global_addr(base):
        rec = (getattr(ctx.reg, "reg", {}) or {}).get("globals", {}).get(base)
        if isinstance(rec, dict) and rec.get("addr"):
            try:
                return int(str(rec["addr"]), 16)
            except (TypeError, ValueError):
                return None
        return None

    def _owner_from_ida_type(base):
        """IDA's declared global type -> a registry class owning its members.

        The export bodies were RENDERED against IDA's global type, so that
        type is the exact owner for `.member`/`[i].member` chains.  The
        registry global type (`global_types.json`, binary-comparison
        evidence) is often just `uint32_t`/`void*` and carries no owner.
        """
        a = _global_addr(base)
        if a is None:
            return None
        idx = _ida_global_type_index()
        e = idx.get(a)
        if not e:
            return None
        ty = (e.get("type") or "").strip()
        ty = re.sub(r"\[\]$", "", ty).strip()
        ty = ty.rstrip("*").strip()
        ty = re.sub(r"^(?:const|struct|class|union)\s+", "", ty).strip()
        if not ty or "(" in ty or " " in ty:
            return None
        k = ctx.reg.class_key(ty)
        return k

    def _owner_from_name(base):
        cand = base
        for pre in ("g_", "s_"):
            if cand.startswith(pre):
                cand = cand[len(pre):]
                break
        cand = re.sub(r"_(?:Array|array)$", "", cand)
        cand = re.sub(r"\[\]$", "", cand)
        cand = re.sub(r"_\d+$", "", cand)
        return ctx.reg.class_key(cand)

    def _member_hit(base, mem):
        """(offset, type) via reverse index, else via an owner class."""
        hit = gmo(mem) if gmo is not None else None
        if hit is not None:
            return hit
        for owner in (_owner_from_ida_type(base), _owner_from_name(base)):
            if not owner:
                continue
            r = ctx.reg.member_offset_by_ida_name(owner, mem)
            if r is not None and r[0] is not None:
                return (r[0], (r[1] or {}).get("type"))
            inh = getattr(ctx.reg, "member_offset_inherited", None)
            if inh is not None:
                r = inh(owner, mem)
                if r is not None and r[0] is not None:
                    return (r[0], (r[1] or {}).get("type"))
        # CW5-7: name-encoded offsets (`AudioStream_field_0xAC`,
        # `LoadGame_field_0x04`, `__tail_10`, `m_3`, `q004`), the
        # hierarchy shallowest-class tier (`spawnStatus`/`bombVisible` ->
        # ObjectClass), then `base + off` absolute evidence in the disasm
        # (`DataGlobal_B1D290.uniqueId` -> `dword_B1D2A0`).
        hit = _cw5_member_tiered(ctx.reg, mem, ctx)
        if hit is not None:
            return hit
        addr = _global_addr(base)
        if addr is None:
            addr = _cw5_global_addr(ctx.reg, base)
        return _cw5_abs_member(ctx, addr, mem)

    def _named_mem_sub(m):
        nonlocal changed
        base, mem = m.group(1), m.group(2)
        stru_base = base.startswith("stru_")
        if not stru_base and not _named_global_ok(base):
            return m.group(0)
        hit = _member_hit(base, mem)
        if hit is None:
            return m.group(0)
        if stru_base:
            # registry-less IDA-plate struct global: byte carrier
            ctx.used_globals.setdefault(base, "char[]")
        off, ty = hit
        sp = spell_type(ty) if ty else "int"
        if sp not in WIDTH_OF and not sp.endswith("*"):
            sp = "int"
        addr = "((char *)&%s)" % base
        # CW3-3: the index is part of the match now (the old manual scan
        # left the original `[i]` in place -> `(...)[i][i]`, C2109).
        idx_expr = (m.group("idx") or "")[1:-1] if m.group("idx") else None
        changed += 1
        if idx_expr is not None and idx_expr.strip():
            ctx.sites.append(Site(
                "global", "%s.%s[%s]" % (base, mem, idx_expr[:40]),
                "named member view -> ((%s *)(%s + 0x%X))[idx] (reverse "
                "index/owner class)" % (sp, addr, off), True))
            if ty is None:
                # CW5-7: an offset-encoded name with an index is a BYTE
                # carrier in the til (`__pad_38[24]`, `m_3[1]`) -- the
                # element scale is 1, not sizeof(int).
                return "((char *)(%s + 0x%X))[%s]" % (addr, off, idx_expr)
            return "((%s *)(%s + 0x%X))[%s]" % (sp, addr, off, idx_expr)
        ctx.sites.append(Site(
            "global", "%s.%s" % (base, mem),
            "named member view -> *(%s *)(%s + 0x%X) (reverse index/owner "
            "class)" % (sp, addr, off), True))
        return "(*(%s *)(%s + 0x%X))" % (sp, addr, off)

    text = re.sub(r"(?<![\w.>])([A-Za-z_]\w*)\.([A-Za-z_]\w*)"
                  r"(?P<idx>\[[^\[\]]*\])?"
                  r"(?![\w(])(?!\s*\()", _named_mem_sub, text)

    # 3. G->__pad_H[idx] -- member through a global POINTER variable
    #    (base is the global's name after registry rename; `this` and
    #    locals are excluded -- existing member paths own those)
    locals_ = set(ctx.sig.get("param_names") or [])
    for m in _LOCAL_DECL.finditer(text):
        locals_.add(m.group(1))

    def arrow_ok(base):
        if base == "this" or base in locals_:
            return False
        return True

    out = []
    pos = 0
    for m in _ARROW_PAD.finditer(text):
        if m.start() < pos:
            continue
        base = m.group(1)
        if not arrow_ok(base):
            continue
        idx_expr = None
        j = m.end()
        if j < len(text) and text[j] == "[":
            k = _balanced_close(text, j)
            if k > 0:
                idx_expr = text[j + 1:k]
                after = k + 1
            else:
                continue
        else:
            after = m.end()
        off = int(m.group(2), 16)
        if idx_expr is not None and idx_expr.strip():
            rep = "((char *)%s)[0x%X + (%s)]" % (base, off, idx_expr)
        else:
            rep = "((char *)%s)[0x%X]" % (base, off)
        out.append(text[pos:m.start()])
        out.append(rep)
        pos = after
        changed += 1
        ctx.sites.append(Site(
            "global", "%s->__pad_%s" % (base, m.group(2)),
            "global-ptr pad member -> char* arithmetic (0x%X)" % off, True))
    out.append(text[pos:])
    text = "".join(out)

    # CW3-3b: scalar-typed globals that this body only ever SUBSCRIPTS
    # (`g_VoxelOffsetTable[e]`, `Direction_X_Offsets[i]`) need an ARRAY
    # declaration; `extern unsigned int G;` + `G[i]` is C2109/C2036.  An
    # IDA `T[]` type supplies the element; otherwise the registry scalar
    # spelling is the element.  Bare value uses veto the upgrade (a real
    # scalar must not become a pointer).
    for gname in list((getattr(ctx, "used_globals", None) or {})):
        gty = ctx.used_globals[gname]
        if gty.endswith("[]") or gty.endswith("*"):
            continue
        occ = list(re.finditer(r"(?<![\w.>])%s\b" % re.escape(gname), text))
        if not occ:
            continue
        indexed = False
        veto = False
        for om in occ:
            tail = text[om.end():om.end() + 3]
            pre = text[max(0, om.start() - 1):om.start()]
            if re.match(r"\s*\[", tail):
                indexed = True
            elif pre == "&":
                pass          # &G: address-of is array-compatible
            else:
                veto = True
                break
        if not indexed or veto:
            continue
        elem = None
        a = _global_addr(gname)
        if a is not None:
            e = _ida_global_type_index().get(a)
            ety = ((e or {}).get("type") or "").strip()
            if ety.endswith("[]"):
                elem = spell_type(re.sub(r"\[\]$", "", ety).strip())
        if not elem:
            elem = spell_type(gty)
        if elem not in WIDTH_OF:
            continue
        ctx.used_globals[gname] = elem + "[]"
        ctx.note("global_array_view",
                 "%s: registry scalar %s only subscripted in this body -> "
                 "extern %s %s[]" % (gname, gty, elem, gname))

    if changed:
        ctx.sites.append(Site(
            "global", "%d sites" % changed,
            "struct-global member forms -> char* arithmetic", True))
        ctx.lines = text.split("\n")


# --------------------------------------------- CW5-F10: global object arrays
#
# CW5-5 (B1): `g_X_Instance[374].NeedsSaveOrLink` -- the global's registry
# type is `void *` (IDA's own type was lost), so `G[i].M` is C2036
# ('void *' : unknown size).  The access is rewritten to the offset-true
# form `(*(T *)((char *)G + i * SIZE + OFF))`, where OFF comes from the
# member tiers above and SIZE is the element stride.
#
# SIZE evidence: the shallowest declaring class's binary size.  Verified
# against the original disassembly:
#   g_ScenarioClass_Instance[374].NeedsSaveOrLink -> [edx+34B8h]
#     = 374*36 + 32     (AbstractClass size 36)
#   g_ScenarioClass_Instance[122].vfptr3 / uniqueId -> [eax+1134h] /
#     [eax+1138h] = 122*36 + 12 / 16
# (IDA typed the global `AbstractClass *`; the registry lost that.)

_CW5_GARR_MEM = re.compile(
    r"(?<![\w.>])(?P<base>[A-Za-z_]\w*)\s*\[(?P<idx>[^\[\]]{1,60})\]"
    r"\s*\.\s*(?P<mem>[A-Za-z_]\w*)(?P<idx2>\[[^\[\]]*\])?")


_CW5_LOCAL_FIELD = re.compile(
    r"(?<![\w.>])(?P<base>this|[A-Za-z_]\w*)\s*(?:\.|->)\s*"
    r"(?P<cls>[A-Za-z_]\w*)_field_0x(?P<off>[0-9A-Fa-f]+)\b"
    r"(?P<idx>\s*\[[^\[\]]*\])?")


def pass_local_field_members(ctx):
    """CW5-7b (B5-local): `v6.DeleteAndZero_field_0x04` -- the member NAME
    encodes its owner class and byte offset, but the base is a local/param
    (ClassView never sees it, `pass_struct_globals` only handles globals).
    Re-spell offset-true: the registry record for (class, offset) supplies
    the member type; an unknown type degrades to a 4-byte int carrier.
    """
    text = "\n".join(ctx.lines)
    if "_field_0x" not in text:
        return
    locals_ = set(ctx.sig.get("param_names") or [])
    for m in _LOCAL_DECL.finditer(text):
        locals_.add(m.group(1))
    syms = _cw5_sym_types(ctx, text)
    n = 0

    def repl(m):
        nonlocal n
        base = m.group("base")
        if base == "this":
            # `this->M` is owned by the this-member machinery (mNNN views);
            # rewriting it here would add R3 cast-deref-plus sites.
            return m.group(0)
        if base not in locals_ and \
                base not in (getattr(ctx, "used_globals", None) or {}):
            return m.group(0)
        cls = m.group("cls")
        off = int(m.group("off"), 16)
        rec = None
        try:
            rec = ctx.reg.member_at(cls, off)[0]
        except Exception:                  # noqa: BLE001
            rec = None
        ty = (rec or {}).get("type")
        sp = spell_type(ty) if ty else None
        if not sp or (sp not in WIDTH_OF and not sp.endswith("*")):
            sp = "int"
        if base == "this":
            addr = "((char *)this + 0x%X)" % off
        elif (syms.get(base) or "").strip().endswith("*"):
            addr = "((char *)(%s) + 0x%X)" % (base, off)
        else:
            addr = "((char *)&%s + 0x%X)" % (base, off)
        n += 1
        idx = m.group("idx")
        if idx and idx.strip():
            inner = idx.strip()[1:-1]
            return "((%s *)(%s))[%s]" % (sp, addr, inner)
        return "(*(%s *)(%s))" % (sp, addr)

    text2 = _CW5_LOCAL_FIELD.sub(repl, text)
    if n:
        ctx.lines = text2.split("\n")
        ctx.sites.append(Site(
            "member_read", "%d local field-member(s)" % n,
            "LOCAL.Class_field_0xNN -> offset-true read (name-encoded "
            "owner+offset, registry type)", True))


def pass_global_array_members(ctx):
    text = "\n".join(ctx.lines)
    if "." not in text:
        return
    locals_ = set(ctx.sig.get("param_names") or [])
    for m in _LOCAL_DECL.finditer(text):
        locals_.add(m.group(1))
    reg = ctx.reg
    abs_size = _cw5_class_size(reg, "AbstractClass") or 36
    changed = 0

    def repl(m):
        nonlocal changed
        base = m.group("base")
        idx = m.group("idx").strip()
        mem = m.group("mem")
        idx2 = m.group("idx2")
        if base == "this" or base in locals_ or base.startswith("stru_"):
            return m.group(0)
        gty = (getattr(ctx, "used_globals", None) or {}).get(base)
        if gty is None:
            return m.group(0)
        if gty.endswith("[]"):
            return m.group(0)          # already element-typed
        if gty.endswith("*"):
            core = _cw5_core(gty)
            if core and reg.class_key(core):
                return m.group(0)      # typed class pointer: shell owns it
        elem_cls = _cw5_elem_class(reg, base)
        sh = _cw5_shallow_member(reg, mem)
        if sh is not None:
            off, ty = sh[0], sh[1]
            size = _cw5_class_size(reg, sh[2]) or \
                _cw5_class_size(reg, elem_cls)
            # the global's element type IS the shallowest declaring class
            # (IDA typed `g_ScenarioClass_Instance` as `AbstractClass *`);
            # declaring it so also types the bare `v2 = G;` assignments.
            if sh[2]:
                ctx.used_globals[base] = "%s *" % sh[2]
        else:
            hit = _cw5_inline_member(reg, mem)
            if hit is None:
                hit = _cw5_abs_member(ctx, _cw5_global_addr(reg, base), mem)
            if hit is None:
                return m.group(0)
            off, ty = hit
            size = _cw5_class_size(reg, elem_cls)
            if not size and re.match(r"^vfptr\d*$", mem):
                size = abs_size
        if not size:
            return m.group(0)
        sp = spell_type(ty) if ty else None
        if sp is not None and sp not in WIDTH_OF and not sp.endswith("*"):
            sp = "int"
        addr = "((char *)%s + (%s) * %d)" % (base, idx, size)
        changed += 1
        ctx.sites.append(Site(
            "global", "%s[%s].%s" % (base, idx[:20], mem),
            "global object-array element -> offset-true access "
            "(stride %d, member +0x%X)" % (size, off), True))
        if idx2:
            inner = idx2[1:-1]
            if ty is None:
                return "((char *)(%s + 0x%X))[%s]" % (addr, off, inner)
            return "((%s *)(%s + 0x%X))[%s]" % (sp or "int", addr, off, inner)
        if ty is None:
            return "(*(int *)(%s + 0x%X))" % (addr, off)
        return "(*(%s *)(%s + 0x%X))" % (sp, addr, off)

    text2 = _CW5_GARR_MEM.sub(repl, text)
    if changed:
        ctx.lines = text2.split("\n")


# ------------------------------------------- CW5-F10: member chain / vfptr
#
# CW5-6 (B2+B3): `this->Owner->pathDirections` -- the registry says the
# member `Owner` is a scalar (`unsigned char`, type debt) while the body
# uses it as a pointer.  The member's OFFSET is sound, so the access is
# re-spelled offset-true:
#     BASE->M->X  ->  (*(TY *)((char *)(*(void **)((char *)BASE + OFF_M))
#                               + OFF_X))
# `*(void **)((char *)this + N)` loads the very dword `this->M` loads, and
# the second hop folds into one displacement -- same bytes as the typed
# original.  No shell member is required (this also covers derived classes
# whose shell drops an inherited member).
#
# CW5-6a (B2): `EXPR->vfptr` == the vtable pointer at offset 0:
#     EXPR->vfptr  ->  (*(void ***)(EXPR))

_CW5_CHAIN2 = re.compile(
    r"(?<![\w.>])(?P<base>this|[A-Za-z_]\w*)\s*->\s*(?P<mem>[A-Za-z_]\w*)"
    r"\s*->\s*(?P<mem2>[A-Za-z_]\w*)(?P<arr>\s*\[[^\[\]]*\])?")

_CW5_PSEUDO_ARROW = re.compile(
    r"(?<![\w.>])(?P<base>_E(?:AX|BX|CX|DX|SI|DI|BP|SP)|_EA)\s*->\s*"
    r"(?P<mem>[A-Za-z_]\w*)(?P<arr>\s*\[[^\[\]]*\])?")

_CW5_VFPTR_REF = re.compile(r"->vfptr\b(?!\d|_)")


def _cw5_class_of_base(ctx, base, syms):
    if base == "this":
        return ctx.sig.get("cls")
    ty = syms.get(base)
    if ty is None:
        ty = (getattr(ctx, "used_globals", None) or {}).get(base)
    if not ty:
        return None
    core = _cw5_core(ty)
    return ctx.reg.class_key(core) if core else None


def _cw5_member_load(reg, cls, mem):
    """(offset, type) of member MEM on CLS (registry + inherited + synth)."""
    if not cls:
        return None
    r = reg.member_offset_by_ida_name(cls, mem)
    if r is None or r[0] is None:
        inh = getattr(reg, "member_offset_inherited", None)
        if inh is not None:
            r = inh(cls, mem)
    if r is not None and r[0] is not None:
        return r[0], (r[1] or {}).get("type")
    # explicit parent-chain walk: the derived shells drop inherited members
    # and member_lookup parks only SOME of them with `inherited_from`
    # (ShipLocomotionClass::Owner -> LocomotionClass::Owner @0x8).
    cl = getattr(reg, "_cl", None) or {}
    cur = (cl.get(cls) or {}).get("parent")
    seen = set()
    while cur and cur not in seen:
        seen.add(cur)
        rr = reg.member_offset_by_ida_name(cur, mem)
        if rr is not None and rr[0] is not None:
            return rr[0], (rr[1] or {}).get("type")
        cur = (cl.get(cur) or {}).get("parent")
    return _cw5_inline_member(reg, mem)


def _cw5_value_read(ty, addr, arr):
    """Offset-true value/element read at `addr` for a member of type `ty`."""
    if arr:
        inner = arr.strip()[1:-1]
        if ty and ty.endswith("*"):
            return "((%s)(%s))[%s]" % (ty, addr, inner)
        if ty and re.search(r"\[\s*\d*\s*\]$", ty):
            elem = re.sub(r"\[\s*\d*\s*\]$", "", ty).strip() or "int"
            return "((%s *)(%s))[%s]" % (elem, addr, inner)
        return "((int *)(%s))[%s]" % (addr, inner)
    if ty and ty.endswith("*"):
        return "(*(%s *)(%s))" % (ty, addr)
    if ty and re.search(r"\[\s*\d*\s*\]$", ty):
        # array member read without an index: decays to its first element
        elem = re.sub(r"\[\s*\d*\s*\]$", "", ty).strip() or "int"
        return "((%s *)(%s))" % (elem, addr)
    if ty and (ty in WIDTH_OF or ty in _CW5_INT32_TYS or
               ty in _CW5_SMALL_INT_TYS):
        return "(*(%s *)(%s))" % (ty, addr)
    # unknown / foreign struct: first dword (the IDA cast pun semantics)
    return "(*(int *)(%s))" % addr


def pass_member_chain_reads(ctx):
    text = "\n".join(ctx.lines)
    if "->" not in text:
        return
    syms = _cw5_sym_types(ctx, text)
    reg = ctx.reg
    n = 0

    def repl(m):
        nonlocal n
        base, mem, mem2 = m.group("base"), m.group("mem"), m.group("mem2")
        arr = m.group("arr") or ""
        tail = text[m.end():m.end() + 3]
        if re.match(r"\s*(?:->|\.|\()", tail):
            return m.group(0)      # chained / called: not a value read
        cls = _cw5_class_of_base(ctx, base, syms)
        mo = _cw5_member_load(reg, cls, mem)
        if mo is None:
            return m.group(0)
        moff, mty = mo
        if mty:
            mk = _cw5_ty_kind(mty)
            core = _cw5_core(mty)
            if mk == "ptr" and core != "void" and reg.class_key(core):
                return m.group(0)  # already a typed class pointer
        inner = "(*(void **)((char *)(%s) + 0x%X))" % (base, moff)
        if mem2 == "vfptr":
            n += 1
            return "(*(void ***)%s)" % inner
        sh = _cw5_member_tiered(reg, mem2, ctx)
        if sh is None:
            return m.group(0)
        off, ty = sh
        n += 1
        ctx.sites.append(Site(
            "member_chain", "%s->%s->%s" % (base, mem, mem2),
            "offset-true chain read (M +0x%X, X +0x%X)" % (moff, off), True))
        return _cw5_value_read(ty, "(char *)%s + 0x%X" % (inner, off), arr)

    text2 = _CW5_CHAIN2.sub(repl, text)

    # single-hop pseudo-register receivers (`_ESI->isOnMap`)
    def repl2(m):
        nonlocal n
        base, mem = m.group("base"), m.group("mem")
        arr = m.group("arr") or ""
        tail = text2[m.end():m.end() + 3]
        if re.match(r"\s*(?:->|\.|\()", tail):
            return m.group(0)
        sh = _cw5_member_tiered(reg, mem, ctx)
        if sh is None:
            return m.group(0)
        off, ty = sh
        n += 1
        return _cw5_value_read(ty, "(char *)(%s) + 0x%X" % (base, off), arr)

    text2 = _CW5_PSEUDO_ARROW.sub(repl2, text2)

    if n:
        ctx.lines = text2.split("\n")
        ctx.sites.append(Site(
            "member_chain", "%d chain(s)" % n,
            "member chain re-spelled offset-true (scalar-typed member used "
            "as a pointer)", True))


def pass_arrow_vfptr(ctx):
    """B2: `EXPR->vfptr` -> `(*(void ***)(EXPR))` (vtable ptr at offset 0)."""
    text = "\n".join(ctx.lines)
    if "->vfptr" not in text:
        return
    out = []
    pos = 0
    i = 0
    n = 0
    while True:
        m = _CW5_VFPTR_REF.search(text, i)
        if not m:
            break
        j = m.start() - 1
        while j >= 0 and text[j] in " \t\r\n":
            j -= 1
        bs = -1
        if j >= 0 and text[j] == ")":
            gs = _balanced_open(text, j)
            if gs >= 0:
                bs = gs
        elif j >= 0 and (text[j].isalnum() or text[j] == "_"):
            k = j
            while k >= 0:
                ch = text[k]
                if ch.isalnum() or ch == "_":
                    k -= 1
                    continue
                if ch == ">" and k >= 1 and text[k - 1] == "-":
                    k -= 2
                    while k >= 0 and text[k] in " \t\r\n":
                        k -= 1
                    # a chain may start with a closing group `(...)`
                    if k >= 0 and text[k] == ")":
                        g2 = _balanced_open(text, k)
                        if g2 >= 0:
                            k = g2 - 1
                        continue
                    continue
                if ch == ".":
                    k -= 1
                    while k >= 0 and text[k] in " \t\r\n":
                        k -= 1
                    continue
                if ch == "]":
                    depth = 0
                    while k >= 0:
                        if text[k] == "]":
                            depth += 1
                        elif text[k] == "[":
                            depth -= 1
                            if depth == 0:
                                break
                        k -= 1
                    k -= 1
                    while k >= 0 and text[k] in " \t\r\n":
                        k -= 1
                    continue
                break
            bs = k + 1
        if bs < 0 or bs >= m.start():
            i = m.end()
            continue
        base = text[bs:m.start()].strip()
        if not base or base in ("this",):
            # `this->vfptr` is the object's own vtable slot: leave it (the
            # shell owns a vfptr view for it)
            i = m.end()
            continue
        out.append(text[pos:bs])
        out.append("(*(void ***)(%s))" % base)
        pos = m.end()
        i = m.end()
        n += 1
    out.append(text[pos:])
    if n:
        ctx.lines = "".join(out).split("\n")
        ctx.sites.append(Site(
            "member_chain", "%d vfptr ref(s)" % n,
            "EXPR->vfptr -> (*(void ***)(EXPR)) (vtable pointer at 0)", True))



# ---------------------------------------------------------------- pass: this-ptr math
#
# When the export proto types `this` as a PRIMITIVE pointer (`double *this`,
# `int *this`) the Hex-Rays body renders member access as pointer arithmetic:
#     *(this + N)                  (byte offset = N * sizeof(elem))
#     this[N]
#     *(T *)(*(this + K) + W * i)  (element read through a pointer member)
# Restored to registry member accesses here, BEFORE pass_member_shapes can
# slice the outer form and silently drop the index.

_PROTO_THIS_TY = re.compile(r"\(\s*([A-Za-z_]\w*)\s*\*\s*[_]?\bthis\b")

_THIS_IDX_FORM = re.compile(
    r"\*\(\s*(?P<ty>_?\w+)\s*\*\s*\)\s*\(\s*"     # *(T *)(
    r"\*\(\s*this\s*\+\s*(?P<base>\d+)\s*\)\s*"    # *(this + K)
    r"\+\s*(?:(?P<c1>\d+)\s*\*\s*(?P<v1>[A-Za-z_]\w*)"
    r"|(?P<v2>[A-Za-z_]\w*)\s*\*\s*(?P<c2>\d+))\s*\)")

_BARE_THIS_OFF = re.compile(
    r"\*\(\s*(?:"
    r"(?P<cast>_?\w+)\s*\*\s*\)\s*\(\s*this\s*\+\s*(?P<coff>\d+)\s*\)"
    r"|this\s*\+\s*(?P<off>\d+)\s*\)"
    r")")
_THIS_SUB = re.compile(r"\bthis\s*\[\s*(?P<off>\d+)\s*\]")

# Audit-rem ② (2026-11-12): the NESTED cast spellings Hex-Rays emits for a
# dword-indexed member access -- `*((_DWORD *)this + 22)` -- and its
# address-only sibling `(char *)this + 264` / bare `this + 264` (proto
# `char *this`).  _BARE_THIS_OFF only matched `*(T *)(this + N)`; the
# cast-inside-parenthesis form survived to emission as raw pointer
# arithmetic (checker R3 cast-deref-plus / R4: 42/424 OK-pool functions).
# Restored here to width-true member views (registry member first,
# offset-true placeholder otherwise); codegen is identical because the
# member lives at the same byte offset with the same access width.
_CAST_THIS_DEREF = re.compile(
    r"\*\s*\(\s*\(\s*(?P<ty>[A-Za-z_]\w*(?:\s+[A-Za-z_]\w+)*)"
    r"\s*\*\s*\)\s*this\s*\+\s*(?P<off>\d+)\s*\)")
_CAST_THIS_ADDR = re.compile(
    r"\(\s*(?P<ty>[A-Za-z_]\w*(?:\s+[A-Za-z_]\w+)*)\s*\*\s*\)"
    r"\s*this\s*\+\s*(?P<off>\d+)\b")
_BARE_THIS_ADDR = re.compile(r"\bthis\s*\+\s*(?P<off>\d+)\b")

_ROLE_OF_W = {1: "byte", 2: "word", 4: "dword", 8: "qword"}


def _this_scale(ctx):
    """Byte scale of `this + N` arithmetic in the body.

    `T *this` (typed pointer) -> N is scaled by sizeof(T);
    bare `int this` / no pointer -> N is raw int arithmetic, i.e. BYTES
    (0x40B2E0: proto `int this`, `this + 12` == disasm [ecx+0xC]).
    """
    m = _PROTO_THIS_TY.search(ctx.ex.proto or "")
    if not m:
        return 1
    return WIDTH_OF.get(spell_type(m.group(1)), 4) or 4


def pass_this_ptr_math(ctx):
    cls = ctx.sig["cls"]
    scale = _this_scale(ctx)
    text = "\n".join(ctx.lines)

    # outer form first: *(T*)(*(this + K) + W * var) -> this->M[var]
    def idx_repl(m):
        ty = m.group("ty")
        read_ty = TYPE_OF_CAST.get(ty) or spell_type(ty)
        read_w = WIDTH_OF.get(read_ty, 4)
        c = int(m.group("c1") or m.group("c2") or 0)
        var = m.group("v1") or m.group("v2")
        byte_off = int(m.group("base")) * scale
        if c != read_w or not var:
            ctx.sites.append(Site(
                "member_read", m.group(0),
                "this-ptr element scale %d != read width %d; kept residual"
                % (c, read_w), False))
            return m.group(0)
        rec, src = ctx.reg.member_at(cls, byte_off, min_span=1)
        name = (rec and rec.get("name")) or ("m%03X" % byte_off)
        ctx.views.add_array(cls, byte_off, name, read_ty, 0,
                            src or "registry-gap")
        ctx.sites.append(Site(
            "member_read", m.group(0),
            "this-ptr element read -> this->%s[%s] (member 0x%X, elem %s)"
            % (name, var, byte_off, read_ty), True))
        return "this->%s[%s]" % (name, var)

    text = _THIS_IDX_FORM.sub(idx_repl, text)

    # bare forms: *(this + N) / this[N] -> this->M at byte offset N*scale
    # (optionally cast: `*(_BYTE *)(this + 12)` -- the cast is the READ type,
    #  the offset is still N * sizeof(proto this-elem))
    def bare_repl(m):
        byte_off = int(m.group("coff") or m.group("off")) * scale
        cast = m.group("cast")
        read_w = 4
        read_ty = None
        if cast:
            read_ty = TYPE_OF_CAST.get(cast) or spell_type(cast)
            read_w = WIDTH_OF.get(read_ty, 4)
        rec, src = ctx.reg.member_at(cls, byte_off, min_span=1)
        if not rec:
            # pad-only offset (registry gap): synthesize an offset-true view
            # so the emitted hpp declares it; name is an honest placeholder
            w = read_w if read_ty else (scale if scale in (1, 2, 4, 8) else 4)
            name = "m%03X" % byte_off
            ctx.views.add_scalar(cls, byte_off, _ROLE_OF_W.get(w, "dword"),
                                 name,
                                 {1: "unsigned char", 2: "short", 4: "int",
                                  8: "double"}.get(w, "int"), w,
                                 "registry-gap")
            ctx.sites.append(Site(
                "member_read", m.group(0),
                "pad-only offset 0x%X: synthesized view this->%s "
                "(registry gap, placeholder name)" % (byte_off, name),
                False))
            return "this->" + name
        name = rec.get("name") or ("m%03X" % byte_off)
        w = int(rec.get("width") or 4)
        ty = None
        rt = rec.get("type")
        if rt:
            sp = spell_type(rt)
            if sp.endswith("*") and w == 4:
                ty = sp          # true pointer (4B storage; IG narrowing
                # is access granularity only)
            elif sp.endswith("*") and w in (1, 2):
                # WRONG ptr type string on a narrow member (template-family
                # member_types noise): the width evidence wins -- narrow
                # spelling (bool keeps the original `mov al` shapes)
                ty = "bool" if w == 1 else "short"
            elif WIDTH_OF.get(sp) == w:
                ty = sp
        if not ty:
            ty = {1: "unsigned char", 2: "short", 4: "int",
                  8: "double"}.get(w if w in (1, 2, 4, 8) else 4, "int")
        ctx.views.add_scalar(cls, byte_off, _ROLE_OF_W.get(w, "dword"),
                             name, ty, w, src)
        ctx.sites.append(Site(
            "member_read", m.group(0),
            "this-ptr arithmetic -> this->%s (0x%X = %d*%d, w=%d, %s)"
            % (name, byte_off, int(m.group("coff") or m.group("off")),
               scale, w, src), True))
        return "this->" + name

    text = _BARE_THIS_OFF.sub(bare_repl, text)
    text = _THIS_SUB.sub(bare_repl, text)

    # ---- audit-rem ②: `*((T *)this + N)` / `(T *)this + N` / `this + N`
    def _view_for_offset(byte_off, read_ty, read_w, raw):
        """Width-true member view at byte_off (registry evidence preferred)."""
        rec, src = ctx.reg.member_at(cls, byte_off, min_span=1)
        role = _ROLE_OF_W.get(read_w, "dword")
        existing = (ctx.views.scalars.get(cls) or {}).get(byte_off, {})
        if rec and int(rec.get("width") or read_w) == read_w:
            name = rec.get("name") or ("m%03X" % byte_off)
            w = read_w
            ty = None
            rt = rec.get("type")
            if rt:
                sp = spell_type(rt)
                if sp.endswith("*") and w == 4:
                    ty = sp
                elif sp.endswith("*") and w in (1, 2):
                    ty = "bool" if w == 1 else "short"
                elif WIDTH_OF.get(sp) == w:
                    ty = sp
            if not ty:
                ty = {1: "unsigned char", 2: "short", 4: "int",
                      8: "double"}.get(w, "int")
            ctx.views.add_scalar(cls, byte_off, role, name, ty, w, src)
            ctx.sites.append(Site(
                "member_read", raw,
                "cast-this arithmetic -> this->%s (0x%X, w=%d, %s)"
                % (name, byte_off, w, src), True))
            return "this->" + name
        # width mismatch or no registry record: offset-true placeholder
        # (same convention as the bare path; never silently re-width a
        # registry member -- a byte load must stay a byte load).
        if role in existing:
            name = existing[role]["name"]
        else:
            base = "m%03X" % byte_off
            used = {v.get("name") for v in existing.values()}
            arr = (ctx.views.arrays.get(cls) or {}).get(byte_off)
            if arr:
                used.add(arr.get("name"))
            name = base if base not in used else "%s_%s" % (base, role)
        ty = {1: "unsigned char", 2: "short", 4: "int",
              8: "double"}.get(read_w, "int")
        ctx.views.add_scalar(cls, byte_off, role, name, ty, read_w,
                             "registry-gap")
        ctx.sites.append(Site(
            "member_read", raw,
            "cast-this offset 0x%X (%s, w=%d): synthesized view this->%s "
            "(registry gap/mismatch)" % (byte_off, read_ty, read_w, name),
            False))
        return "this->" + name

    def cast_deref_repl(m):
        ty = TYPE_OF_CAST.get(m.group("ty")) or spell_type(m.group("ty"))
        read_w = WIDTH_OF.get(ty, 4) or 4
        byte_off = int(m.group("off")) * read_w
        return _view_for_offset(byte_off, ty, read_w, m.group(0))

    text = _CAST_THIS_DEREF.sub(cast_deref_repl, text)

    def _addr_view(byte_off, raw, note):
        arr = (ctx.views.arrays.get(cls) or {}).get(byte_off)
        if arr:
            name = arr["name"]
        else:
            name = "m%03X" % byte_off
            ctx.views.add_array(cls, byte_off, name, "char", 0,
                                "this-addr-view")
        ctx.sites.append(Site(
            "this_addr", raw,
            "%s -> this->%s (0x%X char-array view, address only)"
            % (note, name, byte_off), True))
        return "this->" + name

    def cast_addr_repl(m):
        ty = TYPE_OF_CAST.get(m.group("ty")) or spell_type(m.group("ty"))
        w = WIDTH_OF.get(ty, 4) or 4
        return _addr_view(int(m.group("off")) * w, m.group(0),
                          "this-offset address (%s)" % ty)

    text = _CAST_THIS_ADDR.sub(cast_addr_repl, text)

    # bare `this + N` (proto this is a pointer): N is scaled by the proto
    # element width.  A non-pointer proto (`int this`) is integer
    # arithmetic -- pass_receiver_arith owns that family.
    if _PROTO_THIS_TY.search(ctx.ex.proto or ""):
        def bare_addr_repl(m):
            return _addr_view(int(m.group("off")) * scale, m.group(0),
                              "bare this+N address")
        text = _BARE_THIS_ADDR.sub(bare_addr_repl, text)

    # R4: bare `*this` (a dword read at offset 0, emitted by IDA when the
    # proto types this as `int *this`) -- `*this` in C++ is the OBJECT, so
    # `(void *)*this` was C2440 (SortedArray::Find family).  Bind offset 0
    # through the same registry/view path.
    def star_this(m):
        rec, src = ctx.reg.member_at(cls, 0, min_span=1)
        # R8: `*this = 0` (IDA's rendering when the proto says `int *this`)
        # binds offset 0.  When EVERY access this function makes at offset
        # 0 is narrow (`mov byte ptr [ecx], 0` -- CreditsScreen::Init
        # 0x4A3C00), the widest view is a lie: narrow it, exactly like the
        # semantic-name path.
        dmin = _disasm_min_width(ctx, 0)
        dmax = _disasm_max_width(ctx, 0)
        w = 4
        if dmin and dmax and dmin == dmax and dmin in (1, 2):
            w = dmin
        if not rec:
            name = "m000"
            ctx.views.add_scalar(cls, 0, _ROLE_OF_W.get(w, "dword"), name,
                                 {1: "unsigned char",
                                  2: "unsigned short"}.get(w, "int"), w,
                                 "registry-gap")
            src = "registry-gap"
        else:
            name = rec.get("name") or "m000"
            if re.match(r"^(?:.*_field_0x|__pad|q[0-9A-F]{3}|unknown)",
                        name):
                name = "m000"
            ty = spell_type(rec.get("type") or "int")
            if w != 4:
                ty = {1: "unsigned char", 2: "unsigned short"}[w]
            ctx.views.add_scalar(cls, 0, _ROLE_OF_W.get(w, "dword"), name,
                                 ty, w, src)
        ctx.sites.append(Site(
            "member_read", "*this",
            "bare *this -> this->%s (offset 0, w=%d)" % (name, w), True))
        return "this->" + name

    text = re.sub(r"\*\s*this\b(?!\s*(?:->|[\+\[]))", star_this, text)
    ctx.lines = text.split("\n")


# ---------------------------------------------------------------- thislike param
#
# thiscall functions whose Hex-Rays body never says `this` but uses the
# FIRST PARAM as the receiver base (`*(_DWORD *)(a1 + 64) = a2;` -- IDA
# proto lost the this-typing).  When the computed member offsets validate
# against the disasm's [ecx+0xN] accesses, the first param IS this: bind it
# (rewrite to this->M) and drop it from the signature (it becomes the
# thiscall/fastcall receiver).

_THISLIKE_CAST = re.compile(
    # Multi-word cast spellings must match: pass_globals rewrites `_DWORD`
    # to `unsigned int` BEFORE this pass runs, so the old single-word type
    # class never matched real bodies (fastcall setter family 0x406540 /
    # 0x4065C0 / 0x4065D0 / 0x4065E0 / 0x406640 kept
    # `*(T *)(p0 + N) = p1` mis-signatures and produced cc_mismatch).
    r"\*\(\s*(?P<ty>[A-Za-z_]\w*(?:\s+[A-Za-z_]\w+)*)\s*\*\s*\)\s*\("
    r"\s*(?P<var>[A-Za-z_]\w*)\s*\+\s*(?P<off>\d+)\s*\)")


def pass_thislike_param(ctx):
    if ctx.sig.get("cc") not in ("thiscall", "__fastcall"):
        return
    text = "\n".join(ctx.lines)
    if re.search(r"\bthis\b", text):
        return
    if not ctx.sig["params"]:
        return
    p0 = ctx.sig["params"][0][1]
    cls = ctx.sig["cls"]
    dis_offsets = set(int(m, 16) for m in re.findall(
        r"\[ecx\+0?x?([0-9A-Fa-f]+)h?\]", "\n".join(ctx.ex.disasm_lines)))
    hits = [m for m in _THISLIKE_CAST.finditer(text)
            if m.group("var") == p0]
    if not hits:
        return
    # validation: every computed byte offset must exist in the disasm
    # [ecx+0xN] set (or the set is empty -- no evidence, skip)
    ok = bool(dis_offsets) and all(
        int(m.group("off")) in dis_offsets for m in hits)
    if not ok:
        ctx.note("thislike_skip",
                 "%s arithmetic offsets do not validate against disasm "
                 "[ecx+] accesses; left as param" % p0)
        return
    for m in hits:
        off = int(m.group("off"))
        ty = TYPE_OF_CAST.get(m.group("ty")) or spell_type(m.group("ty"))
        read_w = WIDTH_OF.get(ty, 4)
        rec, src = ctx.reg.member_at(cls, off, min_span=1)
        # Only bind a registry member that is a real scalar at THIS offset.
        # member_lookup aliasing reports a wide array (e.g. char[32]
        # UINameLabel) at several interior offsets; binding it produces
        # `this->UINameLabel = p1` (array assignment) and duplicate member
        # names in the stand-in hpp.  Array-alias / non-scalar records are
        # treated as gaps with an offset-true synthesized name.
        rec_w = int(rec.get("width") or 0) if rec else 0
        if not rec or rec_w not in (1, 2, 4, 8):
            rec, src = None, "thislike-gap"
        name = (rec and rec.get("name")) or ("m%03X" % off)
        rt = rec and rec.get("type")
        vw = 4
        vty = ty
        if rt:
            sp = spell_type(rt)
            if sp.endswith("*") and int(rec.get("width") or 4) == 4:
                vty, vw = sp, 4
            elif sp.endswith("*") and int(rec.get("width") or 4) in (1, 2):
                vty = "bool" if int(rec.get("width")) == 1 else "short"
                vw = int(rec.get("width"))
            elif WIDTH_OF.get(sp) == (rec.get("width") or 4):
                vty, vw = sp, int(rec.get("width"))
        ctx.views.add_scalar(cls, off, _ROLE_OF_W.get(vw, "dword"),
                             name, vty, vw, src or "thislike")
        ctx.sites.append(Site(
            "member_read", m.group(0),
            "thislike param %s -> this->%s (0x%X validates disasm, %s)"
            % (p0, name, off, src or "gap"), True))
        text = text.replace(m.group(0), "this->" + name, 1)
    # remaining bare p0 references become `this`
    text = re.sub(r"\b%s\b" % re.escape(p0), "this", text)
    ctx.lines = text.split("\n")
    ctx.sig["params"] = ctx.sig["params"][1:]
    # keep the hpp-facing spellings in sync (hpp_pilot declares methods from
    # params_spelled; a stale list caused C2511 declaration/definition drift)
    ctx.sig["params_spelled"] = list(ctx.sig["params"])
    ctx.sig["param_names"] = [n for _t, n in ctx.sig["params"]]
    ctx.sig["thislike_bound"] = p0
    ctx.note("thislike_bind",
             "first param %s was the receiver (this); bound + dropped from "
             "signature" % p0)


# ---------------------------------------------------------------- pass 2: intrinsics

_ABS_CALL = re.compile(r"\b(abs16|abs64|abs)\s*\(")


def _expand_abs(fn, arg):
    # R3: the Westwood house idiom is the BRANCHLESS algebraic abs
    # (`(x ^ (x >> 31)) - (x >> 31)`) -- verified against the binary
    # (FacingClass::Set_SyncLog 0x4C9300: `movsx; mov eax; cdq; xor;
    # sub`); the ternary form compiles to the branchy test/jge/neg shape
    # the original never emits (Abs16Cmp round-2 MISMATCH root cause).
    cast = {"abs16": "short", "abs64": "__int64", "abs": "int"}[fn]
    shift = 63 if fn == "abs64" else 31
    if re.search(r"[^=!<>]=[^=]", arg):
        return None
    if re.search(r"\+\+|--", arg):
        return None
    if re.search(r"\b\w+\s*\(", arg):
        return None
    c = "(%s)(%s)" % (cast, arg)
    return "((%s ^ (%s >> %d)) - (%s >> %d))" % (c, c, shift, c, shift)


def pass_intrinsics_abs(ctx):
    text = "\n".join(ctx.lines)
    out = []
    last = 0
    consumed = 0
    for m in _ABS_CALL.finditer(text):
        if m.start() < consumed:
            continue
        start = m.end()
        depth = 1          # abs16's own '('
        end = start
        for i in range(start, len(text)):
            c = text[i]
            if c == "(":
                depth += 1
            elif c == ")":
                depth -= 1
                if depth == 0:
                    end = i
                    break
        arg = text[start:end]
        exp = _expand_abs(m.group(1), arg)
        out.append(text[last:m.start()])
        if exp is None:
            ctx.sites.append(Site(
                "intrinsic", "%s(%s)" % (m.group(1), arg),
                "impure/unparsable arg -- NOT expanded", False))
            out.append(text[m.start():end + 1])
        else:
            ctx.sites.append(Site(
                "intrinsic", "%s(%s)" % (m.group(1), arg),
                "expanded -> %s ternary (Hex-Rays idiom)" % m.group(1), True))
            out.append(exp)
        last = end + 1
        consumed = last
    out.append(text[last:])
    ctx.lines = "".join(out).split("\n")


_LOBYTE_STORE = re.compile(r"^LOBYTE\(\s*(\w+)\s*\)\s*=\s*(.+)$")

# narrow-macro store forms: LOBYTE/HIBYTE/LOWORD/HIWORD(local | this->member)
# including compound assignments (+=, |=, ...) -- IDA emits e.g.
# `LOWORD(this->m) += a2` for word-pair CellStruct updates.
# R6: BYTE1-3/WORD1 stores joined the set -- they were falling through the
# read pass (whose store-skip missed the leading space) into the invalid
# `((x >> 8) & 0xFF) = v` lvalue (C2106 batch).
_NARROW_STORE = re.compile(
    r"^(?P<macro>LOBYTE|HIBYTE|LOWORD|HIWORD|BYTE1|BYTE2|BYTE3|WORD1)\(\s*"
    r"(?P<target>this->\w+|\w+)\s*\)\s*(?P<op>\+|-|\*|/|\||\^|&)?="
    r"(?P<expr>.+)$")

_MACRO_META = {          # (byte width, byte shift within the dword slot)
    "LOBYTE": (1, 0), "HIBYTE": (1, 1),
    "LOWORD": (2, 0), "HIWORD": (2, 2),
    "BYTE1": (1, 1), "BYTE2": (1, 2), "BYTE3": (1, 3),
    "WORD1": (2, 2),
}
_MACRO_TYPES = {
    1: ["char", "unsigned char"], 2: ["short", "unsigned short"],
}
_NARROW_SPELL = {
    1: "unsigned char", 2: "unsigned short",
}


def _member_narrow_state(ctx, mem_name):
    """Narrow-state of a member for macro branching.

    Returns (offset, is_narrow, width) or (None, False, None):
      is_narrow True when IG evidence, declared type, or THIS function's
      disasm byte/word access at the offset gives a width NARROWER than
      the macro's own width requirement context.
    """
    off, rec, _src = _member_record_for(ctx, mem_name)
    if off is None:
        return None, False, None
    real_off = int((rec or {}).get("offset", off))
    width = int((rec or {}).get("width") or 4)
    ig = ctx.reg.ig_granularity(ctx.sig["cls"], real_off)
    if ig and ig["width"] < width:
        width = ig["width"]
    # R3: the function's own disasm is narrow-access evidence (SetByte96
    # family: `mov byte ptr [ecx+off], 0` stores with no IG record at all)
    dmin = _disasm_min_width(ctx, real_off)
    if dmin is not None and dmin < width:
        width = dmin
    return real_off, width in (1, 2), width


def _record_sighting(ctx, macro, target, off, width, via):
    """Record a narrow-macro witness in IG-compatible format (backflow)."""
    fn = ctx.sig["addr"].lower().replace("0x", "")
    if off is not None:
        ent = "M:%s:this:0x%X" % (fn, off)
        types = list(_MACRO_TYPES[_MACRO_META[macro][0]])
    else:
        ent = "L:%s:%s" % (fn, target)
        types = ["macro-witness"]
    ctx.sightings.append({
        "ent": ent, "macro": macro,
        "member_width": width if width else "dword-unknown",
        "types": types, "via": "MACRO@%s" % via,
    })


def pass_intrinsics_lobyte(ctx):
    """LOBYTE/HIBYTE/LOWORD/HIWORD stores -- root-cause branching.

    A narrow macro on a slot means IDA modeled a narrow member as dword
    (placeholder).  When the registry (IG granularity > declared width)
    already knows the slot is byte/word -- or a packed sibling member
    covers the shifted half -- the store becomes a NATURAL assignment to
    that narrow member.  Otherwise the explicit bit-surgery fallback is
    kept (fail-honest: no evidence, no narrowing).

    Locals form (LOBYTE(v)): natural path when v's single def is a pure
    read of a narrow member; else previous bool/int rewrite.
    """
    lines = ctx.lines
    # CW3-4: pointer-declared locals need the byte/word store, not the
    # masked-dword merge -- `v1 = (v1 & ~0xFF) | ...` on `_DWORD *v1` is
    # C2296.  era_types.h spells the macro as an address-of lvalue, so the
    # ORIGINAL macro form is already the correct store for these.
    _ptr_locals = _ptr_names_in("\n".join(lines))
    out = []
    i = 0
    while i < len(lines):
        raw = lines[i]
        ln = raw.strip().rstrip(";").strip()
        m = _NARROW_STORE.match(ln)
        if not m:
            out.append(raw)
            i += 1
            continue
        macro, target, expr = m.group("macro"), m.group("target"), \
            m.group("expr").strip()
        op = m.group("op") or ""        # compound op ('+' for +=, '' for =)
        mwidth, shift = _MACRO_META[macro]
        via = "line%d" % (i + 1)

        # ---------- member target: this->M ----------
        if target.startswith("this->"):
            mem = target[6:]
            off, is_narrow, width = _member_narrow_state(ctx, mem)
            _record_sighting(ctx, macro, mem, off, width, via)
            mask = (0xFF if mwidth == 1 else 0xFFFF) << (8 * shift)
            if off is None:
                out.append("%s = (%s & ~0x%X) | ((%s) & 0x%X);"
                           % (target, target, mask, expr, mask >> (8 * shift) if shift else mask))
                ctx.sites.append(Site(
                    "intrinsic", "%s(%s) = %s" % (macro, target, expr),
                    "member not in registry -- masked merge fallback", False))
                i += 1
                continue
            sibling = None
            if shift:
                srec, _ssrc = ctx.reg.member_at(ctx.sig["cls"], off + shift,
                                                min_span=1, prefer="exact")
                if srec and srec.get("name") and \
                        int(srec.get("width") or 4) <= mwidth:
                    sibling = srec["name"]
                    ctx.views.add_scalar(
                        ctx.sig["cls"], off + shift, "byte", sibling,
                        "unsigned char", 1, "insn_granularity:sibling")
            if is_narrow and not shift:
                if op:
                    out.append("%s = %s %s (%s);" % (target, target, op, expr))
                else:
                    out.append("%s = %s;" % (target, expr))
                ctx.sites.append(Site(
                    "intrinsic", "%s(%s) %s= %s" % (macro, target, op, expr),
                    "GRANULARITY NATURAL: member 0x%X width=%d (IG/declared) "
                    "-> direct narrow assignment" % (off, width), True))
            elif sibling:
                if op:
                    out.append("this->%s = this->%s %s (%s);"
                               % (sibling, sibling, op, expr))
                else:
                    out.append("this->%s = %s;" % (sibling, expr))
                ctx.sites.append(Site(
                    "intrinsic", "%s(%s) %s= %s" % (macro, target, op, expr),
                    "GRANULARITY NATURAL (packed sibling): -> this->%s @0x%X"
                    % (sibling, off + shift), True))
            else:
                maskL = 0xFF if mwidth == 1 else 0xFFFF
                if op:
                    cur = ("(%s & 0x%X)" % (target, maskL)) if not shift \
                        else ("((%s >> %d) & 0x%X)"
                              % (target, 8 * shift, maskL))
                    expr = "%s %s (%s)" % (cur, op, expr)
                lo = "(%s)" % expr
                if shift:
                    lo = "((%s) & 0x%X) << %d" % (expr, maskL, 8 * shift)
                out.append("%s = (%s & ~0x%X) | %s;"
                           % (target, target, mask, lo))
                # the emitted bit-surgery does integer arithmetic on the
                # member -- the hpp view MUST be arithmetic-compatible
                # (registry void*/class-ptr spelling would be C2296)
                ctx.views.scalars.setdefault(ctx.sig["cls"], {})[off] = {
                    "dword": {"name": mem, "type": "unsigned int",
                              "width": 4, "src": "bit-surgery-view"}}
                ctx.note(
                    "bitsurgery_view_retype",
                    "%s@0x%X view retyped to unsigned int for bit-surgery "
                    "(registry spelling superseded here; no narrow evidence)"
                    % (mem, off))
                ctx.sites.append(Site(
                    "intrinsic", "%s(%s) = %s" % (macro, target, expr),
                    "NO narrow evidence at 0x%X -- bit-surgery fallback "
                    "kept (sighting recorded for solver backflow)" % off,
                    False))
            i += 1
            continue

        # ---------- local target: v ----------
        var = target
        if var in _ptr_locals:
            # pointer-typed local: keep the era macro (lvalue byte/word
            # store through &var; C2296 otherwise).  Sighting still recorded.
            _record_sighting(ctx, macro, var, None, None, via)
            out.append(raw)
            ctx.sites.append(Site(
                "intrinsic", "%s(%s) = %s" % (macro, var, expr),
                "pointer-declared local -- byte/word macro store kept "
                "(masked-dword merge would be C2296)", True))
            i += 1
            continue
        _record_sighting(ctx, macro, var, None, None, via)
        # local sourced from a narrow member?  single pure def `v = this->M`
        src_off = None
        src_narrow = False
        src_mem = None
        for prev in lines[:i] + out[:i]:
            pm = re.match(r"^\s*%s\s*=\s*this->([A-Za-z_]\w*)\s*;?\s*$"
                          % re.escape(var), prev.strip())
            if pm:
                src_mem = pm.group(1)
                src_off, src_narrow, _w = _member_narrow_state(ctx, src_mem)
                break
        if src_narrow and macro in ("LOBYTE", "LOWORD") and not shift:
            # natural: narrow local assignment, LOBYTE/LOWORD is a no-op
            out.append("%s = %s;" % (var, expr))
            ctx.sites.append(Site(
                "intrinsic", "%s(%s) = %s" % (macro, var, expr),
                "GRANULARITY NATURAL (local): %s sourced from narrow member "
                "this->%s @0x%X -> plain assignment" % (var, src_mem, src_off),
                True))
            if ctx.sightings:
                ctx.sightings[-1]["ent"] = "M:%s:this:0x%X" % (
                    ctx.sig["addr"].lower().replace("0x", ""), src_off)
            i += 1
            continue
        # no narrow evidence: previous bool/int rewrite (bit-surgery path)
        j = i + 1
        while j < len(lines) and not lines[j].strip():
            j += 1
        ret_next = (j < len(lines) and
                    re.match(r"^return\s+%s\s*;?\s*$" % var, lines[j].strip()))
        if ret_next:
            # comparison test must ignore the '>' of member arrows (->)
            probe = expr.replace("->", ".")
            is_cmp = bool(re.search(r"[<>]=?|==|!=|&&|\|\||!", probe))
            if ctx.sig["ret"] in ("bool", "char", "unsigned char") \
                    and not is_cmp:
                # byte-family return + byte-value expr: plain return
                # (R1/S1 verified: `mov al,[ecx+off]` / `mov al,1`)
                out.append("return (%s);" % expr)
                ctx.sites.append(Site(
                    "intrinsic", "%s(%s) = %s; return %s;" % (macro, var, expr, var),
                    "byte-return %s idiom -> direct return of expr "
                    "(no narrow evidence; fallback)" % macro, False))
            elif ctx.sig["ret"] in ("bool", "char", "unsigned char") and is_cmp:
                # comparison-valued expr: the `if (e) return 1; return 0;`
                # shape is the ONLY one VC6 compiles to the al-only
                # normalization (C5 probe: xor al,al/mov al,1 vs the
                # eax forms a plain `return e;` produces)
                out.append("if (%s)" % expr)
                out.append("    return 1;")
                out.append("return 0;")
                ctx.sites.append(Site(
                    "intrinsic", "%s(%s) = %s; return %s;" % (macro, var, expr, var),
                    "bool-return %s comparison idiom -> if/return-1-0 form"
                    % macro, False))
            else:
                out.append("return (%s & ~0xFF) | ((%s) & 0xFF);" % (var, expr))
                ctx.sites.append(Site(
                    "intrinsic", "%s(%s) = %s; return %s;" % (macro, var, expr, var),
                    "int-return LOBYTE idiom -> byte-merge return (fallback)",
                    False))
            i = j + 1
            continue
        out.append("%s = (%s & ~0xFF) | ((%s) & 0xFF);" % (var, var, expr))
        ctx.sites.append(Site(
            "intrinsic", "%s(%s) = %s" % (macro, var, expr),
            "mid-body %s store -> byte-merge assignment (fallback)" % macro,
            False))
        i += 1
    ctx.lines = out


def pass_narrow_macro_reads(ctx):
    """Read-form narrow macros -- the IDA dword-placeholder symptom.

    LOBYTE/LOWORD/HIBYTE/HIWORD/BYTE1-3/WORD1(this->M) with IG-narrow or
    declared-narrow member -> natural `this->M`; packed sibling at the
    shifted offset -> `this->sibling`; no evidence -> arithmetic fallback
    `(x >> s) & mask`.  Locals: member-sourced narrow local -> plain `v`,
    else arithmetic fallback.  Every witness recorded (IG backflow)."""
    text = "\n".join(ctx.lines)
    fn = ctx.sig["addr"].lower().replace("0x", "")

    def sight(macro, target, off, via):
        if off is not None:
            ent = "M:%s:this:0x%X" % (fn, off)
            types = list(_MACRO_TYPES.get(
                _MACRO_META.get(macro, (1, 0))[0], ["char", "unsigned char"]))
        else:
            ent = "L:%s:%s" % (fn, target)
            types = ["macro-witness"]
        ctx.sightings.append({
            "ent": ent, "macro": macro + "_READ",
            "member_width": off is not None and _member_width_text(ctx, target) or None,
            "types": types, "via": "MACRO@read+%d" % via,
        })

    def repl(m):
        macro = m.group("macro")
        target = m.group("target")
        # skip store forms (handled in the store pass), incl. compound
        # assignments (+=, -=, ...); '==' is a comparison, NOT a store
        # (R6: tolerate the space between `)` and the operator)
        if re.match(r"^\s*[+\-*/|&^%]?=(?!=)", text[m.end():m.end() + 4]):
            return m.group(0)
        shift = {"LOBYTE": (1, 0), "LOWORD": (2, 0), "HIBYTE": (1, 1),
                 "HIWORD": (2, 2), "BYTE1": (1, 1), "BYTE2": (1, 2),
                 "BYTE3": (1, 3), "WORD1": (2, 2)}.get(macro, (1, 0))
        width, sh = shift
        mask = (0xFF if width == 1 else 0xFFFF)
        sight(macro, target, None, m.start())
        if target.startswith("this->"):
            mem = target[6:]
            off, rec, _src = _member_record_for(ctx, mem)
            if off is not None and ctx.sightings:
                fn6 = fn.lstrip("0") or "0"
                ctx.sightings[-1]["ent"] = "M:%s:this:0x%X" % (fn6, off)
                ctx.sightings[-1]["member_width"] = int(
                    (rec or {}).get("width") or 4)
            if off is None:
                ctx.sites.append(Site(
                    "intrinsic", "%s(%s)" % (macro, target),
                    "member not in registry -- arithmetic fallback", False))
                return m.group(0)  # let era normalizer/fail-loud catch
            mwidth = int((rec or {}).get("width") or 4)
            # sibling lookup for shifted access
            sib = None
            if sh:
                srec, _ss = ctx.reg.member_at(ctx.sig["cls"], off + sh,
                                              min_span=1, prefer="exact")
                if srec and srec.get("name") and \
                        int(srec.get("width") or 4) <= width and \
                        srec.get("name") != (rec or {}).get("name"):
                    sib = srec["name"]
            natural = (not sh and mwidth == width) or sib
            if sib:
                ctx.sightings[-1]["ent"] = "M:%s:this:0x%X" % ((fn.lstrip("0") or "0"), off + sh)
                ctx.views.add_scalar(ctx.sig["cls"], off + sh, "byte", sib,
                                     "unsigned char", 1,
                                     "insn_granularity:sibling")
                ctx.sites.append(Site(
                    "intrinsic", "%s(%s)" % (macro, target),
                    "GRANULARITY NATURAL (packed sibling read): -> "
                    "this->%s @0x%X" % (sib, off + sh), True))
                return "this->" + sib
            if not sh and mwidth == width:
                ctx.sites.append(Site(
                    "intrinsic", "%s(%s)" % (macro, target),
                    "GRANULARITY NATURAL: member 0x%X width=%d -> plain "
                    "member read" % (off, mwidth), True))
                return target
            ctx.sites.append(Site(
                "intrinsic", "%s(%s)" % (macro, target),
                "NO narrow evidence at 0x%X (width %d) -- arithmetic "
                "fallback" % (off, mwidth), False))
            if sh:
                return "((%s >> %d) & 0x%X)" % (target, 8 * sh, mask)
            return "(%s & 0x%X)" % (target, mask)
        # local target
        src_off, src_narrow = _local_member_source_narrow(ctx, target)
        if src_narrow and not sh and src_off is not None:
            ctx.sightings[-1]["ent"] = "M:%s:this:0x%X" % ((fn.lstrip("0") or "0"), src_off)
            ctx.sites.append(Site(
                "intrinsic", "%s(%s)" % (macro, target),
                "GRANULARITY NATURAL (narrow local): %s sourced from narrow "
                "member @0x%X" % (target, src_off), True))
            return target
        ctx.sites.append(Site(
            "intrinsic", "%s(%s)" % (macro, target),
            "local without narrow evidence -- arithmetic fallback", False))
        if sh:
            return "((%s >> %d) & 0x%X)" % (target, 8 * sh, mask)
        return "(%s & 0x%X)" % (target, mask)

    text2 = re.sub(
        r"\b(?P<macro>LOBYTE|HIBYTE|LOWORD|HIWORD|BYTE1|BYTE2|BYTE3|WORD1)"
        r"\(\s*(?P<target>this->\w+|\w+)\s*\)", repl, text)
    ctx.lines = text2.split("\n")


def _member_width_text(ctx, target):
    """Registry width of the member a macro target refers to (for sightings)."""
    if not target.startswith("this->"):
        return None
    off, rec, _src = _member_record_for(ctx, target[6:])
    if off is None:
        return None
    return int((rec or {}).get("width") or 4)


def _local_member_source_narrow(ctx, var):
    """True when var's single pure def is `var = this->M` with M narrow."""
    for prev in ctx.lines:
        pm = re.match(r"^\s*%s\s*=\s*this->([A-Za-z_]\w*)\s*;?\s*$"
                      % re.escape(var), prev.strip())
        if pm:
            off, _rec_is_narrow, w = _member_narrow_state(ctx, pm.group(1))
            return off, w in (1, 2)
    return None, False


# ---------------------------------------------------------------- pass 3: members

_CAST_DEREF_MEM = re.compile(
    r"\*\(\s*(?P<ty>[A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*\s*\*+)\s*\)\s*"
    r"(?P<amp>&\s*)?this->(?P<mem>[A-Za-z_]\w*)"
    r"(?P<idx>\[[^\]\[]*\])?")

_MEM_DIRECT = re.compile(r"this->(?P<mem>[A-Za-z_]\w*)")

_OFFSET_NAME = re.compile(
    r"^(?:.*_field_0x[0-9A-Fa-f]+.*|__pad\w*|q[0-9A-F]{3}\w*|"
    r"unknown\w*|u\d+_\w+|tail\w*|m[0-9A-F]{3}(_ptr)?)$")

_VT_DISPATCH = re.compile(
    r"\(\*\((?P<fnty>.+?)\)"          # (*(FNTY)
    r"\(\*\(\s*(?P<cty>_?\w+)\s*\*\s*\)\s*this->(?P<mem>[A-Za-z_]\w*)"
    r"(?P<idx>\[[^\]\[]*\])?"
    r"\s*\+\s*(?P<off>\d+)\s*\)"      # (INNER)
    r"\s*\)\s*\((?P<args>[^;]*?)\)"
    r"(?=[;\s,)]|$)")


def _parse_index_expr(idx):
    if not idx:
        return None
    s = idx.strip()[1:-1].strip()
    m = re.match(
        r"^(?:(\d+)\s*\*\s*(\w+)|(\w+)\s*\*\s*(\d+))\s*\+\s*(-?\d+)$", s)
    if m:
        if m.group(1):
            scale, var = int(m.group(1)), m.group(2)
        else:
            scale, var = int(m.group(4)), m.group(3)
        return (scale, var, int(m.group(5)))
    m = re.match(r"^(\w+)\s*\+\s*(-?\d+)$", s)
    if m:
        return (1, m.group(1), int(m.group(2)))
    m = re.match(r"^(\d+)$", s)
    if m:
        return (None, None, int(m.group(1)))
    return None


def _array_elem_from_use(ctx, text, pos, base_off):
    """Element spelling for an indexed `NAME[...]` use at text[pos:].

    Byte-indexed til views (`__pad_D80[984]` -> +0xD80+984) carry BYTE
    offsets in the index while the registry record may say int[]; the
    element width is the scale whose absolute address this function's
    disasm touches AT EXACTLY that width.  Returns (elem, width) or None
    when there is no literal index or no matching width evidence.
    """
    while pos < len(text) and text[pos] in " \t":
        pos += 1
    if pos >= len(text) or text[pos] != "[":
        return None
    k = _balanced_close(text, pos)
    if k < 0:
        return None
    expr = text[pos + 1:k].strip()
    if not re.fullmatch(r"(?:0x[0-9A-Fa-f]+|\d+)", expr):
        return None
    i = int(expr, 0)
    if i <= 0:
        return None
    widths = _disasm_this_widths(ctx)
    alias = _disasm_alias_widths(ctx)
    for w, elem in ((1, "unsigned char"), (2, "unsigned short"),
                    (4, "int")):
        o = int(base_off) + w * i
        ev = set(widths.get(o) or ()) | set(alias.get(o) or ())
        if w in ev:
            return elem, w
    return None


def _member_record_for(ctx, mem_name):
    r = ctx.reg.member_offset_by_ida_name(ctx.sig["cls"], mem_name)
    if r is not None and r[0] is not None:
        return r
    # R5: cross-class inherited_from fallback (base table misses members
    # parked on derived classes -- planningPathIdx C2039 family)
    inh = getattr(ctx.reg, "member_offset_inherited", None)
    if inh is not None:
        r2 = inh(ctx.sig["cls"], mem_name)
        if r2 is not None and r2[0] is not None:
            return r2
    # R5: offset-encoding names (`m298` = 0x298, `m_C` = 0xC) -- the
    # offset is IN the name; synthesize the record (template-instance
    # classes like _VectorClass__N carry these in the export naming)
    mm = re.match(r"^m_?([0-9A-Fa-f]{1,6})$", mem_name or "")
    if mm:
        off = int(mm.group(1), 16)
        return off, {"offset": off, "name": mem_name, "type": None,
                     "width": 4}, "offset-name-synth"
    # CW3-2: hpp-convention pad names (`__pad_0`, `__pad_1C`) also encode
    # their byte offset.  Without this, `this->__pad_0` fell into the
    # offset-name path with an unresolvable offset and the pilot hpp emitted
    # a gap pad named `__pad_000` (body/hpp name split -> C2039), while the
    # template-instance classes only carry these til names at all.
    pm = re.match(r"^__pad_?([0-9A-Fa-f]{1,6})$", mem_name or "")
    if pm:
        off = int(pm.group(1), 16)
        return off, {"offset": off, "name": mem_name, "type": None,
                     "width": 4}, "pad-name-synth"
    return r


def _view_name(rec, off, suffix=""):
    base = (rec and rec.get("name")) or ("m%03X" % off)
    return base + suffix


def _signed_word_context(text, pos):
    tail = text[pos:pos + 120]
    return bool(re.search(r">\s*0\b", tail))


_ECX_WRITE_OP = re.compile(
    r"^(?:mov|lea|pop|add|sub|xor|or|and|inc|dec|shl|shr|sar|sal|"
    r"imul|mul|idiv|div|not|neg|movzx|movsx|xchg|adc|sbb|rol|ror|"
    r"set[a-z]+)\s+ecx\b")


def _this_ecx_lines(ctx):
    """Disassembly lines where ECX still holds the INCOMING receiver.

    `[ecx+N]` evidence is only `this`-relative until the function writes
    ECX (msvc6 thiscall bodies routinely `lea ecx, [eax+28h]` mid-body
    and then index a completely different object).  Attributing those
    later accesses to the receiver produced false width/offset evidence
    (R8: TabClass::updateTabProduction 0x6A80A0 -- `mov [ecx+4], esi`
    after `lea ecx,[eax+28h]` was read as member +4).  A call also
    clobbers ECX (caller-saved).
    """
    if hasattr(ctx, "_dis_ecx_lines"):
        return ctx._dis_ecx_lines
    out = []
    alive = True
    for dl in ctx.ex.disasm_lines:
        body = re.sub(r"^[0-9A-Fa-f]+:\s*", "", dl).strip()
        if not body:
            continue
        if alive:
            out.append(dl)
        mn = body.split()[0]
        if mn in ("call", "calln", "callf"):
            alive = False
            continue
        if _ECX_WRITE_OP.match(body) and not re.match(
                r"^mov\s+ecx\s*,\s*ecx\b", body):
            alive = False
    ctx._dis_ecx_lines = out
    return out


def _disasm_this_offsets(ctx):
    """[ecx+0xNN] offsets the binary actually touches for this function
    (thiscall this = ecx). Empty set = no evidence."""
    if not hasattr(ctx, "_dis_offs"):
        offs = set()
        for dl in _this_ecx_lines(ctx):
            for m in re.finditer(r"\[ecx(?:\+0?x?([0-9A-Fa-f]+)h?)?\]",
                                 dl):
                offs.add(int(m.group(1) or "0", 16))
        ctx._dis_offs = offs
    return ctx._dis_offs


# per-offset access widths the binary exhibits for THIS function
# (R3 disasm-width arbitration: a class-level IG-narrowed member may be
# read full-width here (ObjectClass 4B getters) or a w4 member may be
# byte/word-stored here (SetByte96 family) -- the function's own disasm
# outranks the class-level merge for the VIEW this function emits).
_W_PTR_PREFIX = [
    (re.compile(r"\bbyte\s+ptr\s+\[ecx(?:\+0?x?([0-9A-Fa-f]+)h?)?\]"), 1),
    (re.compile(r"\bword\s+ptr\s+\[ecx(?:\+0?x?([0-9A-Fa-f]+)h?)?\]"), 2),
    (re.compile(r"\bdword\s+ptr\s+\[ecx(?:\+0?x?([0-9A-Fa-f]+)h?)?\]"), 4),
]
# width-carrying register operands around a [ecx+N] memory operand:
# 8-bit -> byte, 16-bit -> word, 32-bit -> dword (either side of the op)
# R8: the displacement is OPTIONAL -- `mov byte ptr [ecx], 0` (offset 0,
# CreditsScreen::Init / Byte::Zero family) carried no width evidence
# because every pattern demanded `+N`, so the widest view always won.
_W_REG = [
    (re.compile(r"\b(?:al|ah|bl|bh|cl|ch|dl|dh)\b[^;\n]*"
                r"\[ecx(?:\+0?x?([0-9A-Fa-f]+)h?)?\]"), 1),
    (re.compile(r"\[ecx(?:\+0?x?([0-9A-Fa-f]+)h?)?\][^;\n]*"
                r"\b(?:al|ah|bl|bh|cl|ch|dl|dh)\b"), 1),
    (re.compile(r"\b(?:ax|bx|cx|dx|si|di|bp|sp)\b[^;\n]*"
                r"\[ecx(?:\+0?x?([0-9A-Fa-f]+)h?)?\]"), 2),
    (re.compile(r"\[ecx(?:\+0?x?([0-9A-Fa-f]+)h?)?\][^;\n]*"
                r"\b(?:ax|bx|cx|dx|si|di|bp|sp)\b"), 2),
    (re.compile(r"\b(?:eax|ebx|edx|esi|edi|ebp)\b[^;\n]*"
                r"\[ecx(?:\+0?x?([0-9A-Fa-f]+)h?)?\]"), 4),
    (re.compile(r"\[ecx(?:\+0?x?([0-9A-Fa-f]+)h?)?\][^;\n]*"
                r"\b(?:eax|ebx|edx|esi|edi|ebp)\b"), 4),
]


def _disasm_this_widths(ctx):
    """{offset: set(access widths)} for this function's [ecx+N] ops.

    Explicit `byte/word/dword ptr` prefixes and width-carrying register
    operands both contribute; an offset touched at several widths keeps
    them all (narrowing uses the min, widening the max).
    """
    if not hasattr(ctx, "_dis_widths"):
        w = {}
        for dl in _this_ecx_lines(ctx):
            for pat, width in _W_PTR_PREFIX + _W_REG:
                for m in pat.finditer(dl):
                    off = int(m.group(1) or "0", 16)
                    w.setdefault(off, set()).add(width)
        ctx._dis_widths = w
    return ctx._dis_widths


def _disasm_min_width(ctx, off):
    """Narrowest width THIS function touches [ecx+off] at, or None."""
    s = set(_disasm_this_widths(ctx).get(int(off)) or ())
    s |= _disasm_alias_widths(ctx).get(int(off), set())
    return min(s) if s else None


def _disasm_max_width(ctx, off):
    """Widest width THIS function touches [ecx+off] at, or None."""
    s = set(_disasm_this_widths(ctx).get(int(off)) or ())
    s |= _disasm_alias_widths(ctx).get(int(off), set())
    return max(s) if s else None


# R8: `this` aliasing (`mov eax, ecx; mov byte ptr [eax], 0` -- Byte::Zero
# family).  The [ecx+N] scans above miss every access made through a
# receiver copied into another register, so narrow-store evidence was
# invisible and the member stayed a dword view.
_ALIAS_CAND = ("eax", "ebx", "edx", "esi", "edi", "ebp")
_ALIAS_SRC = re.compile(
    r"^(?:[0-9A-Fa-f]+:\s*)?(?:mov|lea)\s+(e[a-d]x|e[sd]i|e[sb]p)\s*,"
    r"\s*\[?\s*ecx\s*\]?\s*$")
_REG_WRITE = re.compile(
    r"^(?:[0-9A-Fa-f]+:\s*)?(?P<mn>[a-z]+)\s+(?P<op1>[^,\s]+)")
_CALL_LINE = re.compile(r"^(?:[0-9A-Fa-f]+:\s*)?call\b")
_ALIAS_MEM = re.compile(r"\[(%s)(?:\s*\+\s*(0x[0-9A-Fa-f]+|\d+))?\]")


def _disasm_alias_widths(ctx):
    """{offset: set(widths)} for accesses through a receiver COPY.

    Program-order state machine: a register counts as `this` only between
    its `mov reg, ecx` and the next write to it (calls invalidate the
    caller-saved eax/ecx/edx).  Conservative: any other write clears the
    alias, so this never fabricates `this` evidence.
    """
    if hasattr(ctx, "_dis_alias_w"):
        return ctx._dis_alias_w
    state = dict.fromkeys(_ALIAS_CAND, False)
    ecx_ok = True
    out = {}
    for dl in ctx.ex.disasm_lines:
        body = re.sub(r"^[0-9A-Fa-f]+:\s*", "", dl).strip()
        # 1. accesses made while the register still holds `this`
        for reg, is_this in state.items():
            if not is_this:
                continue
            for m in re.finditer(
                    r"\[%s(?:\s*\+\s*(0x[0-9A-Fa-f]+|\d+))?\]" % reg, dl):
                off = int(m.group(1), 0) if m.group(1) else 0
                mm = re.search(r"\b(byte|word|dword)\s+ptr\b", dl)
                if mm:
                    w = {"byte": 1, "word": 2, "dword": 4}[mm.group(1)]
                elif re.search(r"\b(?:al|ah|bl|bh|cl|ch|dl|dh)\b", dl):
                    w = 1
                elif re.search(r"\b(?:ax|bx|cx|dx|si|di|bp|sp)\b", dl):
                    w = 2
                else:
                    w = 4
                out.setdefault(off, set()).add(w)
        # 2. update the alias state for the lines that follow
        if _CALL_LINE.match(dl):
            state["eax"] = False
            state["edx"] = False
            ecx_ok = False          # caller-saved: no longer the receiver
            continue
        sm = _ALIAS_SRC.match(dl)
        if sm:
            if ecx_ok:             # `mov reg, ecx` copies THIS only if
                state[sm.group(1)] = True   # ecx still holds it
            continue
        wm = _REG_WRITE.match(dl)
        if wm:
            op1 = wm.group("op1").strip()
            if op1 in state and wm.group("mn") not in ("cmp", "test",
                                                       "push", "call"):
                state[op1] = False
            if op1 == "ecx" and not re.match(r"^mov\s+ecx\s*,\s*ecx\b",
                                             body):
                ecx_ok = False
    ctx._dis_alias_w = out
    return out


def _disasm_arbitrate(ctx, cls, name, off, rec, src):
    """When the registry-resolved offset disagrees with EVERY [ecx+0xN] the
    binary touches, look for a same-name candidate that DOES validate
    (disasm = binary truth; registry merges can bind a name to a shifted
    record).  Returns possibly-corrected (off, rec, src)."""
    dis = _disasm_this_offsets(ctx)
    if not dis or off in dis:
        return off, rec, src
    for c_off, c_src, c_rec in ctx.reg.member_all_offsets(cls, name):
        if c_off in dis:
            ctx.note("offset_disasm_arbitration",
                     "%s: registry offset 0x%X not in disasm [ecx+] set; "
                     "rebound to 0x%X (%s)" % (name, off, c_off, c_src))
            return c_off, c_rec, c_src
    ctx.note("offset_disasm_mismatch",
             "%s: offset 0x%X absent from disasm [ecx+] set %s (no "
             "validating candidate; kept, expect codegen diff)"
             % (name, off, sorted(hex(x) for x in dis)[:8]))
    return off, rec, src


def pass_vt_dispatch(ctx):
    text = "\n".join(ctx.lines)
    marker = "\x01"

    def repl(m):
        fnty, cty, mem, idx, off, args = (m.group("fnty"), m.group("cty"),
                                          m.group("mem"), m.group("idx"),
                                          m.group("off"), m.group("args"))
        slot = int(off) // 4
        cls = ctx.sig["cls"]
        moff, rec, src = _member_record_for(ctx, mem)
        fpm = re.match(
            r"^(?P<ret>.+?)\s*\(\s*__thiscall\s*\*?\*?\s*\)\s*"
            r"\((?P<params>.*)\)\s*$", fnty.strip())
        fret_raw = fpm.group("ret").strip() if fpm else "int"
        fps = []
        if fpm:
            fps = [p.strip() for p in fpm.group("params").split(",") if p.strip()]
            # drop the this-param: '<Cls> *' first position
            if fps and re.match(r"^%s\s*\*?$" % re.escape(cls), fps[0]):
                fps = fps[1:]
            fps = [spell_type(p) for p in fps]
        arg_list = [a.strip() for a in args.split(",")] if args.strip() else []
        is_self = bool(arg_list) and arg_list[0] == "this"
        slot_name, slot_proto = ctx.reg.vtable_slot(cls, slot)
        base_off = moff if moff is not None else 0
        pre = text[max(0, m.start() - 24):m.start()]
        rm = re.search(r"\(\s*(\w+)\s*\*\s*\)\s*$", pre)
        if rm and rm.group(1) in ("int", "_DWORD", "long", "void"):
            fret = spell_type(rm.group(1)) + "*"
        else:
            fret = spell_type(fret_raw)
        pname = _view_name(rec, base_off, "_ptr")
        if not _OFFSET_NAME.match(pname):
            pass  # semantic names keep suffix _ptr to distinguish views
        ctx.views.add_scalar(cls, base_off, "ptr", pname, "void*", 4,
                             src or "registry-gap")
        if slot_name:
            short = re.sub(r"[^A-Za-z0-9_]", "_", slot_name.split("::")[-1])
            call_args = (", ".join(arg_list[1:]) if is_self else args)
            ctx.views.add_virtual(cls, slot, short, slot_proto)
            ctx.sites.append(Site(
                "vt_dispatch",
                "(*(FNTY))(*(CT*)this->%s + %s)(...)" % (mem, off),
                "authority hit: slot %d = %s -> this->%s(%s)"
                % (slot, slot_name, short, call_args), True))
            return marker + "this->%s(%s)" % (short, call_args)
        # fallback: registry table view subscript (rule-4 policy carve-out).
        # VC6 rejects __thiscall in free fn-ptr cast types (C4234), so the
        # dispatch renders as a member-function-pointer array call -- the
        # era-native shape of a vtable slot dispatch (ECX=this, callee
        # cleans stack).
        ret_ref = None
        fnptr = "%s (%s::**)(%s)" % (fret, cls, ", ".join(fps))
        if is_self:
            call_args = ", ".join(arg_list[1:])
            emit = "(this->*((%s)this->%s)[%d])(%s)" % (
                fnptr, pname, slot, call_args)
        else:
            call_args = args
            emit = "((%s (__stdcall**)(%s*%s%s))this->%s)[%d](%s)" % (
                fret, cls, ", " if fps else "", ", ".join(fps),
                pname, slot, call_args)
            ctx.note("vt_foreign_dispatch",
                     "non-self table dispatch rendered with __thiscall "
                     "free-ptr cast (era may reject; prefer registry vtable)")
        ctx.sites.append(Site(
            "vt_dispatch",
            "(*(FNTY))(*(CT*)this->%s + %s)(...)" % (mem, off),
            "authority UNRESOLVED for %s slot %d -> registry table view "
            "member-ptr dispatch (this->*(FnTbl*)%s)[%d]"
            % (cls, slot, pname, slot), True))
        ctx.note("vt_unresolved",
                 "%s slot %d: vtable not in authority; emitted registry "
                 "table-view dispatch (auto-upgrades to this->Method when "
                 "the registry declares the vtable)" % (cls, slot))
        return marker + emit

    text2 = _VT_DISPATCH.sub(repl, text)
    # drop a use-site cast '(int *)(<dispatch>' -> '<dispatch>'
    text2 = re.sub(r"\(\s*\w+\s*\*\s*\)\s*(?=%s)" % marker, "", text2)
    # drop redundant wrapping parens the consumed cast left behind:
    # '(DISPATCH)' stays valid; nothing else to do
    text2 = text2.replace(marker, "")
    ctx.lines = text2.split("\n")


def pass_member_shapes(ctx):
    text = "\n".join(ctx.lines)

    # R7: ancient-til NUMERIC member names (`this->0` in the raw export
    # -- C2059 'constant'): the number IS the offset.  Decimal/hex
    # ambiguity resolved against this function's own [ecx+N] disasm
    # evidence.
    def _num_member(m):
        s = m.group(1)
        cands = []
        try:
            cands.append(int(s, 10))
        except ValueError:
            cands = []
        if re.fullmatch(r"[0-9A-Fa-f]+", s):
            try:
                h = int(s, 16)
                if h not in cands:
                    cands.append(h)
            except ValueError:
                pass
        if not cands:
            return m.group(0)
        dis = _disasm_this_offsets(ctx)
        in_dis = [c for c in cands if c in dis]
        pick = in_dis[0] if in_dis else cands[0]
        ctx.sites.append(Site(
            "member_name", "this->" + s,
            "numeric til member name -> this->m%03X (disasm-validated=%s)"
            % (pick, bool(in_dis)), True))
        return "this->m%03X" % pick

    text = re.sub(r"this->(\d+)(?!\w)", _num_member, text)
    ctx.lines = text.split("\n")

    def repl(m):
        ty, amp, mem, idx = (m.group("ty"), m.group("amp"),
                             m.group("mem"), m.group("idx"))
        read_ty = TYPE_OF_CAST.get(ty) or spell_type(ty)
        # CW3-2: the regex now captures the FULL cast spelling including its
        # stars (`void **`, `unsigned __int8 *`).  The outer `*` dereferences
        # the result, so the VALUE type loses exactly one star
        # (`*(void **)&m` -> void *); this keeps the emitted view element
        # type value-compatible and is what the old bare-`_DWORD` capture
        # produced for the scalar families.
        if read_ty.rstrip().endswith("*"):
            read_ty = re.sub(r"\s*\*$", "", read_ty).strip()
        read_w = WIDTH_OF.get(read_ty, 4)
        cls = ctx.sig["cls"]
        moff, rec, src = _member_record_for(ctx, mem)
        detail = "*(%s *)%sthis->%s%s" % (ty, amp or "", mem, idx or "")
        if moff is None and idx is None:
            ctx.sites.append(Site(
                "member_read", detail,
                "member %s not in registry; kept as-is" % mem, False))
            return m.group(0)
        base_off = moff if moff is not None else 0
        if idx:
            pi = _parse_index_expr(idx)
            if not pi:
                ctx.sites.append(Site(
                    "member_read", detail,
                    "unparsable index expr; kept as-is", False))
                return m.group(0)
            scale, var, konst = pi
            abs_off = base_off + max(konst, 0)
            if scale not in (None, read_w):
                ctx.sites.append(Site(
                    "member_read", detail,
                    "index scale %s != read width %d; kept (split view needed)"
                    % (scale, read_w), False))
                return m.group(0)
            arec, asrc = ctx.reg.member_at(cls, abs_off, min_span=2,
                                           prefer="span")
            if arec and arec.get("name") and \
                    int(arec.get("width") or 0) >= read_w and not var:
                total = int(arec["width"])
                count = total // read_w
                elem = read_ty
                sub = (abs_off - arec["offset"]) // read_w
                ctx.views.add_array(cls, arec["offset"], arec["name"], elem,
                                    count, asrc)
                ctx.sites.append(Site(
                    "member_read", detail,
                    "array const-index restore -> this->%s[%d] (0x%X, %s)"
                    % (arec["name"], sub, abs_off, asrc), True))
                return "this->%s[%d]" % (arec["name"], sub)
            if arec and arec.get("name") and \
                    int(arec.get("width") or 0) >= read_w and var:
                total = int(arec["width"])
                count = total // read_w
                elem = read_ty
                if read_w == 2 and _signed_word_context(text, m.start()):
                    elem = "short"
                ctx.views.add_array(cls, arec["offset"], arec["name"], elem,
                                    count, asrc)
                if arec.get("type") and not _array_type_ok(arec["type"],
                                                           elem, count):
                    ctx.note(
                        "registry_width_refine",
                        "%s@0x%X registry type %r refined to %s[%d] "
                        "(scaled indexed access evidence)"
                        % (arec["name"], arec["offset"], arec["type"],
                           elem, count))
                ctx.sites.append(Site(
                    "member_read", detail,
                    "array restore -> this->%s[%s] (abs 0x%X, %s x%d, %s)"
                    % (arec["name"], var, abs_off, elem, count, asrc), True))
                return "this->%s[%s]" % (arec["name"], var)
            name = _view_name(arec, abs_off)
            ctx.views.add_array(cls, abs_off, name,
                                read_ty if read_w != 2 else "short",
                                0, asrc or "registry-gap")
            ctx.sites.append(Site(
                "member_read", detail,
                "pad-indexed view restore -> this->%s[%s] (abs 0x%X, %s)"
                % (name, var or "0", abs_off, asrc or "gap"), True))
            return "this->%s[%s]" % (name, var or "0")
        name = _view_name(rec, base_off)
        w = read_w
        role = {1: "byte", 2: "word", 4: "dword", 8: "qword"}[w]
        if _OFFSET_NAME.match(name):
            # R4: placeholder registry names ("__pad_000") must not leak into
            # the body -- the offset-name path spells the same slot "m%03X";
            # a body/hpp name split is C2039 (ComboBoxOwnerDraw family).
            name = "m%03X" % base_off
        if rec and not _OFFSET_NAME.match(name) and \
                int(rec.get("width") or 0) != w and w != 4:
            name = "%s_%s" % (name, role)
        ctx.views.add_scalar(cls, base_off, role, name, read_ty, w,
                             src or "registry-gap")
        if rec and int(rec.get("width") or 0) not in (0, w):
            ctx.note("registry_width_refine",
                     "%s@0x%X registry width %s refined to %d (%s access)"
                     % (name, base_off, rec.get("width"), w, read_ty))
        ctx.sites.append(Site(
            "member_read", detail,
            "scalar restore -> this->%s (0x%X, %s, w=%d)"
            % (name, base_off, src or "gap", w), True))
        return "this->" + name

    text = _CAST_DEREF_MEM.sub(repl, text)
    ctx.lines = text.split("\n")

    # Shape E: direct offset-named member renames
    text = "\n".join(ctx.lines)
    own_names = set()
    for off_roles in ctx.views.scalars.get(ctx.sig["cls"], {}).values():
        for v in off_roles.values():
            own_names.add(v["name"])
    for a in ctx.views.arrays.get(ctx.sig["cls"], {}).values():
        own_names.add(a["name"])

    def erpl(m):
        mem = m.group("mem")
        is_indexed = text[m.end():m.end() + 1] == "["
        if not _OFFSET_NAME.match(mem):
            # semantic name already in body: STILL record the view so the
            # emitted hpp declares the member the body references (hpp/body
            # divergence was a C2039 batch failure mode -- setTileIndex).
            # NEVER overwrite: earlier passes (bit-surgery retyping,
            # granularity views) own the spelling when they ran first.
            moff, rec, src = _member_record_for(ctx, mem)
            if moff is not None:
                moff, rec, src = _disasm_arbitrate(
                    ctx, ctx.sig["cls"], mem, moff, rec, src)
            if moff is None:
                # MI secondary-vtable slots (`vfptr`, `vfptr1..3` --
                # AbstractClass 4-vtable COM layout): binary-verified
                # vfptrN @ 4*N (0x633AA0 `this->vfptr2` == [ecx+8])
                vm = re.match(r"^vfptr(\d*)$", mem)
                if vm:
                    moff = 4 * int(vm.group(1) or 0)
                    ctx.views.add_scalar(ctx.sig["cls"], moff, "dword", mem,
                                         "void *", 4, "mi-vfptr-synth")
                    ctx.sites.append(Site(
                        "member_name", "this->" + mem,
                        "MI vtable slot synthesized at 0x%X (4-vtable "
                        "layout)" % moff, True))
                    return m.group(0)
                # hpp-convention pad names carry their own offset
                pm2 = re.match(r"^__pad_?([0-9A-Fa-f]+)$", mem)
                if pm2:
                    moff = int(pm2.group(1), 16)
                    ctx.views.add_scalar(ctx.sig["cls"], moff, "dword",
                                         mem, "int", 4, "padname-synth")
                    ctx.sites.append(Site(
                        "member_name", "this->" + mem,
                        "pad-name synthesized at 0x%X" % moff, True))
                    return m.group(0)
                # R7: era placeholder member names carry their own hex
                # offset (`AudioMixer_field_08` == +0x8; the registry
                # never carries these names, the til did).  Synthesize
                # the view so the hpp declares what the body reads.
                fm2 = re.match(r"^(?:\w+_)?field_([0-9A-Fa-f]+)$", mem)
                if fm2:
                    moff = int(fm2.group(1), 16)
                    if is_indexed:
                        ctx.views.add_array(ctx.sig["cls"], moff, mem,
                                            "int", 0, "fieldname-synth")
                    else:
                        ctx.views.add_scalar(ctx.sig["cls"], moff, "dword",
                                             mem, "int", 4, "fieldname-synth")
                    ctx.sites.append(Site(
                        "member_name", "this->" + mem,
                        "field-name synthesized at 0x%X" % moff, True))
                    return m.group(0)
                # R7: registry-class miss on a semantic member name
                # (fleet misattribution: VectorClass::GetItem emitted as
                # LogicClass, body reads `this->items[0]`).  When this
                # function's disasm touches exactly ONE [ecx+N] offset,
                # the binary tells us where the member lives -- bind it.
                dis1 = _disasm_this_offsets(ctx)
                if len(dis1) == 1:
                    off1 = next(iter(dis1))
                    if is_indexed:
                        ctx.views.add_array(ctx.sig["cls"], off1, mem,
                                            "int", 0, "disasm-singleton")
                    else:
                        w1 = _disasm_max_width(ctx, off1) or 4
                        ctx.views.add_scalar(
                            ctx.sig["cls"], off1,
                            _ROLE_OF_W.get(w1, "dword"), mem,
                            {1: "unsigned char", 2: "short", 4: "int",
                             8: "__int64"}.get(w1, "int"), w1,
                            "disasm-singleton")
                    ctx.sites.append(Site(
                        "member_name", "this->" + mem,
                        "registry miss; disasm singleton [ecx+0x%X] "
                        "binding" % off1, True))
                    return m.group(0)
                return m.group(0)
            if moff is not None:
                off_i = int((rec or {}).get("offset", moff))
                have = ctx.views.scalars.get(ctx.sig["cls"], {}).get(off_i, {})
                have_arr = ctx.views.arrays.get(ctx.sig["cls"], {}).get(off_i)
                if is_indexed and not have_arr:
                    ev = _array_elem_from_use(ctx, text, m.end(), off_i)
                    elem = ev[0] if ev else "int"
                    ctx.views.add_array(ctx.sig["cls"], off_i, mem, elem, 0,
                                        src or "registry-gap")
                    if ev and ev[1] != 4:
                        ctx.note(
                            "view_array_width",
                            "%s@0x%X element %s from literal-index scale "
                            "evidence (registry record was wider)"
                            % (mem, off_i, elem))
                elif not any(v.get("name") == mem for v in have.values()):
                    w = int((rec or {}).get("width") or 4)
                    ty = None
                    rt = (rec or {}).get("type")
                    if rt:
                        sp = spell_type(rt)
                        if sp.endswith("*") and w == 4:
                            ty = sp  # true pointer
                        elif sp.endswith("*") and w in (1, 2):
                            ty = "bool" if w == 1 else "short"
                            # wrong ptr spelling, width evidence wins
                        elif WIDTH_OF.get(sp) == w:
                            ty = sp
                    # R3 disasm-width arbitration (function-scoped): THIS
                    # function's own [ecx+off] access width outranks the
                    # class-level IG merge for the view emitted here --
                    # an IG-narrowed (bool) member read as a dword by
                    # this getter must stay a dword read
                    # (ObjectClass 4B getter family).
                    dmax = _disasm_max_width(ctx, off_i)
                    dmin = _disasm_min_width(ctx, off_i)
                    if dmin and dmax and dmin == dmax and dmin in (1, 2) \
                            and w > dmin:
                        # R8 (semantic-name branch): EVERY access of this
                        # function at the offset is narrow -- the registry
                        # width/pointer spelling is a class-level merge
                        # artifact (TActionClass@0x44 AbstractClass* vs
                        # `mov byte ptr [ecx+44h], 0`).
                        w = dmin
                        ty = {1: "unsigned char",
                              2: "unsigned short"}[dmin]
                        ctx.note(
                            "disasm_width_narrow",
                            "%s@0x%X registry width/type -> %d (%s): all "
                            "this fn's accesses there are narrow"
                            % (mem, off_i, dmin, ty))
                    elif dmax and dmax > w:
                        w = dmax if w in (1, 2) else w
                        if w in (1, 2, 4, 8):
                            ty = {1: "unsigned char", 2: "short",
                                  4: "int", 8: "__int64"}[w]
                            ctx.note(
                                "disasm_width_widen",
                                "%s@0x%X registry width %d -> %d (this "
                                "fn reads it wide; class-level IG merge "
                                "must not swallow the dword read)"
                                % (mem, off_i,
                                   int((rec or {}).get("width") or 4), w))
                    if ty is None:
                        w = w if w in (1, 2, 4, 8) else 4
                        ty = {1: "unsigned char", 2: "short", 4: "int",
                              8: "double"}[w]
                    ctx.views.add_scalar(ctx.sig["cls"], off_i,
                                         _ROLE_OF_W.get(w, "dword"), mem, ty,
                                         w, src)
            return m.group(0)
        if mem in own_names:
            return m.group(0)   # converter-managed view name -- final
        cls = ctx.sig["cls"]
        moff, rec, src = _member_record_for(ctx, mem)
        if moff is not None:
            moff, rec, src = _disasm_arbitrate(ctx, cls, mem, moff, rec, src)
        if moff is None:
            # MI secondary-vtable slots (`vfptr`, `vfptr1..3` -- AbstractClass
            # 4-vtable COM layout): binary-verified pattern vfptrN @ 4*N
            # (0x633AA0 `this->vfptr2` == [ecx+8]).  Synthesize the view so
            # the hpp declares the slot.
            vm = re.match(r"^vfptr(\d*)$", mem)
            if vm:
                moff = 4 * int(vm.group(1) or 0)
                view_off = moff
                # R7: the slot IS a vtable pointer -- `vtable0 =
                # v3->vfptr` into a void* local was C2440 int->void*
                ctx.views.add_scalar(cls, view_off, "dword", mem,
                                     "void *", 4, "mi-vfptr-synth")
                ctx.sites.append(Site(
                    "member_name", "this->" + mem,
                    "MI vtable slot synthesized at 0x%X (4-vtable layout)"
                    % view_off, True))
                return m.group(0)
            ctx.sites.append(Site(
                "member_name", "this->" + mem,
                "offset not resolvable; kept", False))
            return m.group(0)
        reg_name = (rec and rec.get("name")) or mem
        w = int((rec or {}).get("width") or 4)
        view_off = int((rec or {}).get("offset", moff))
        rt = (rec or {}).get("type")
        if rt:
            rsp = spell_type(rt)
            if rsp.endswith("*") and w == 4:
                pass   # true pointer, w stays 4
            elif rsp.endswith("*") and w in (1, 2):
                w = w  # wrong ptr spelling: width evidence already correct
        # R3 disasm-width arbitration (function-scoped, narrow direction):
        # a byte/word store in THIS function is real narrow evidence even
        # with no IG record (SetByte96 family: `mov byte ptr [ecx+off], 0`);
        # a dword read by this fn of an IG-narrowed member stays wide
        # (ObjectClass 4B getter family).  The NARROW direction also
        # overrides pointer spellings -- a byte store at the offset means
        # this function's view is a byte there, whatever the registry
        # merged in (TActionClass@0x44 AbstractClass* vs `mov byte
        # ptr [ecx+44h], 0`).
        dmax = _disasm_max_width(ctx, view_off)
        dmin = _disasm_min_width(ctx, view_off)
        is_ptr_ty = bool(rt and spell_type(rt).endswith("*"))
        if dmax and dmax > w and not is_ptr_ty:
            w = dmax
            ctx.note("disasm_width_widen",
                     "%s@0x%X registry width -> %d (dword read this fn)"
                     % (reg_name, view_off, w))
        elif dmin and dmin < w and dmin in (1, 2):
            w = dmin
            ctx.note("disasm_width_narrow",
                     "%s@0x%X registry width -> %d (narrow access this fn)"
                     % (reg_name, view_off, w))
        if _OFFSET_NAME.match(reg_name):
            reg_name = "m%03X" % view_off   # placeholder names must not
            # collide with hpp pad emission (__pad_0 C2039 family)
        if w >= 4:
            role, defty = "dword", "int"
        elif w == 2:
            role, defty = "word", "short"
        else:
            role, defty = "byte", "unsigned char"
        rt = (rec or {}).get("type")
        ty = defty
        if rt:
            sp = spell_type(rt)
            # R7: TRUE pointer spellings now flow into the view -- the
            # foreign-class shell supply makes `BuildingTypeClass *rubble`
            # declarable (`this->rubble->vfptr1` was unsigned->member)
            if sp.endswith("*") and w == 4:
                ty = sp
            elif not sp.endswith("*") and WIDTH_OF.get(sp) == w:
                ty = sp
        if is_indexed:
            # `this->__pad_XX[i]` renamed to a semantic member: the indexed
            # form needs an ARRAY view (scalar view + [i] was C2109)
            ev = _array_elem_from_use(ctx, text, m.end(), view_off)
            elem = ev[0] if ev else "int"
            ctx.views.add_array(cls, view_off, reg_name, elem, 0,
                                src or "registry-gap")
            if ev and ev[1] != 4:
                ctx.note(
                    "view_array_width",
                    "%s@0x%X element %s from literal-index scale evidence "
                    "(byte-indexed til view; registry record was wider)"
                    % (reg_name, view_off, elem))
        else:
            ctx.views.add_scalar(cls, view_off, role, reg_name, ty, w, src)
        if reg_name == mem:
            ctx.sites.append(Site(
                "member_name", "this->" + mem,
                "registry name identical (naming debt, kept)", True))
            return m.group(0)
        ctx.sites.append(Site(
            "member_name", "this->" + mem,
            "renamed -> this->%s (0x%X, %s)" % (reg_name, moff, src), True))
        return "this->" + reg_name

    text = _MEM_DIRECT.sub(erpl, text)

    # R5: through-pointer member views (`v4->nextObject` on a typed local
    # `BuildingClass *v4`): the pilot hpp of the POINTER'S class must
    # declare the member too (C2039-through-local family).  Record the
    # view; the body spelling never changes here.
    ptr_decls = {}
    for dm in re.finditer(
            r"\b([A-Z]\w*)\s*\*\s*([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;", text):
        ptr_decls[dm.group(2)] = dm.group(1)

    def _base_class_of(base):
        """cls behind a receiver base: local decl, or a POINTER-TYPED
        MEMBER of this class (`this->rubble->vfptr1` -- rubble is a
        BuildingTypeClass* member, R7)."""
        cls2 = ptr_decls.get(base)
        if cls2:
            return cls2
        moff_b, rec_b, _srcb = _member_record_for(ctx, base)
        rt = (rec_b or {}).get("type") or ""
        if rt.endswith("*"):
            b = spell_type(rt).replace("*", "").strip()
            if b in ctx.reg.classes:
                return b
        return None

    # R7: finditer is non-overlapping -- `this->rubble->vfptr1` was
    # consumed by the leading `this->rubble` match and the CHAINED
    # `rubble->vfptr1` never fired.  The lookbehind pattern below
    # matches chain links the head match swallows.
    _arrow_hits = list(re.finditer(
        r"\b([A-Za-z_]\w*)\s*->\s*([A-Za-z_]\w*)", text))
    _arrow_hits += re.finditer(
        r"(?<=\->)([A-Za-z_]\w*)\s*->\s*([A-Za-z_]\w*)", text)
    for am in _arrow_hits:
        base, mem = am.group(1), am.group(2)
        cls2 = _base_class_of(base)
        if not cls2 or base == "this":
            continue
        if text[am.end():am.end() + 1] == "(":
            continue        # method call through pointer: not a data view
        moff2 = None
        rec2 = None
        src2 = None
        r2 = ctx.reg.member_offset_by_ida_name(cls2, mem)
        if r2 is not None and r2[0] is not None:
            moff2, rec2, src2 = r2
        else:
            inh2 = getattr(ctx.reg, "member_offset_inherited", None)
            if inh2 is not None:
                r3 = inh2(cls2, mem)
                if r3 is not None and r3[0] is not None:
                    moff2, rec2, src2 = r3
        if moff2 is None:
            # R7: `v3->vfptr` / `v3->vfptr2` through a typed local
            # (HouseClass family C2039/C2227): MI vtable slots are
            # binary-verified at 4*N -- same synth the `this->` path
            # (Shape E) already does; hpp-convention pad names carry
            # their own hex offset; era field names carry theirs
            # (`v11->Stream_field_08` == +0x8).  Without this the
            # local-path member stays undeclared in the owner shell.
            vm2 = re.match(r"^vfptr(\d*)$", mem)
            if vm2:
                moff2 = 4 * int(vm2.group(1) or 0)
                src2 = "mi-vfptr-synth"
            else:
                pm3 = re.match(r"^__pad_?([0-9A-Fa-f]+)$", mem)
                if pm3:
                    moff2 = int(pm3.group(1), 16)
                    src2 = "padname-synth"
                else:
                    fm3 = re.match(r"^(?:\w+_)?field_([0-9A-Fa-f]+)$",
                                   mem)
                    if fm3:
                        moff2 = int(fm3.group(1), 16)
                        src2 = "fieldname-synth"
        if moff2 is None:
            continue
        have2 = ctx.views.scalars.get(cls2, {}).get(moff2, {})
        if any(v.get("name") == mem for v in have2.values()):
            continue
        w2 = int((rec2 or {}).get("width") or 4)
        ty2 = (rec2 or {}).get("type")
        sp2 = spell_type(ty2) if ty2 else None
        if src2 == "mi-vfptr-synth":
            sp2 = "void *"    # R7: vtable slot is a pointer
        elif sp2 and sp2.endswith("*") and w2 == 4:
            pass            # true pointer
        elif sp2 and WIDTH_OF.get(sp2) == w2:
            pass
        else:
            sp2 = {1: "unsigned char", 2: "short", 4: "int",
                   8: "__int64"}.get(w2, "int")
        ctx.views.add_scalar(cls2, moff2,
                             _ROLE_OF_W.get(w2, "dword"), mem,
                             sp2, w2, src2 or "ptr-local")
        ctx.sites.append(Site(
            "member_name", "%s->%s" % (base, mem),
            "through-pointer view recorded for %s@0x%X (%s)"
            % (cls2, moff2, src2), True))

    # R7: DOT-form member views through POINTER bases -- `v11[1].field_08`
    # on a class-typed local, `g_ZBufferDescriptor[1].Stream_field_08` on
    # a class-typed registry global.  Legal C++ once the class shell is
    # DEFINED (shell_augment emits it from these very views); here we
    # only RECORD the member so the shell declares it.
    ptr_typed = {}
    for dm in re.finditer(
            r"\b([A-Z]\w*)\s*\*\s*([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;", text):
        ptr_typed[dm.group(2)] = dm.group(1)
    # CW3-3: VALUE-declared class locals (`Rect v34;`) own their member
    # accesses too; without the shell members `v34.X` was C2039 on an empty
    # pad-only class block.  Same view recording as the pointer form.
    for dm in re.finditer(
            r"\b([A-Z]\w*)\s+([A-Za-z_]\w*)\s*(?:=[^;]*)?;", text):
        ck = ctx.reg.class_key(dm.group(1))
        if ck:
            ptr_typed.setdefault(dm.group(2), ck)
    for gname, gty in (getattr(ctx, "used_globals", None) or {}).items():
        if gty.endswith("*"):
            b = gty.replace("*", "").strip()
            if b and b in ctx.reg.classes:
                ptr_typed[gname] = b
    if ptr_typed:
        for am in re.finditer(
                r"\b([A-Za-z_]\w*)\s*(?:\[[^\]\[]*\])?\s*\.\s*"
                r"([A-Za-z_]\w*)", text):
            base, mem = am.group(1), am.group(2)
            cls2 = ptr_typed.get(base) or _base_class_of(base)
            if not cls2 or base == "this":
                continue
            if text[am.end():am.end() + 1] == "(":
                continue        # method call: not a data view
            moff2 = None
            rec2 = None
            src2 = None
            r2 = ctx.reg.member_offset_by_ida_name(cls2, mem)
            if r2 is not None and r2[0] is not None:
                moff2, rec2, src2 = r2
            else:
                inh2 = getattr(ctx.reg, "member_offset_inherited", None)
                if inh2 is not None:
                    r3 = inh2(cls2, mem)
                    if r3 is not None and r3[0] is not None:
                        moff2, rec2, src2 = r3
            if moff2 is None:
                vm3 = re.match(r"^vfptr(\d*)$", mem)
                if vm3:
                    moff2 = 4 * int(vm3.group(1) or 0)
                    src2 = "mi-vfptr-synth"
                else:
                    fm4 = re.match(r"^(?:\w+_)?field_([0-9A-Fa-f]+)$", mem)
                    if fm4:
                        moff2 = int(fm4.group(1), 16)
                        src2 = "fieldname-synth"
            if moff2 is None:
                continue
            have2 = ctx.views.scalars.get(cls2, {}).get(moff2, {})
            if any(v.get("name") == mem for v in have2.values()):
                continue
            w2 = int((rec2 or {}).get("width") or 4)
            sp2 = "void *" if src2 == "mi-vfptr-synth" else None
            ty2 = (rec2 or {}).get("type")
            if sp2 is None:
                sp2 = spell_type(ty2) if ty2 else None
            if sp2 and sp2.endswith("*") and w2 == 4:
                pass
            elif sp2 and WIDTH_OF.get(sp2) == w2:
                pass
            else:
                sp2 = {1: "unsigned char", 2: "short", 4: "int",
                       8: "__int64"}.get(w2, "int")
            if text[am.end():am.end() + 1] == "[":
                ctx.views.add_array(cls2, moff2, mem, "int", 0,
                                    src2 or "ptr-dot")
            else:
                ctx.views.add_scalar(cls2, moff2,
                                     _ROLE_OF_W.get(w2, "dword"), mem,
                                     sp2, w2, src2 or "ptr-dot")
            ctx.sites.append(Site(
                "member_name", "%s.%s" % (base, mem),
                "dot-form view recorded for %s@0x%X (%s)"
                % (cls2, moff2, src2 or "ptr-dot"), True))
    ctx.lines = text.split("\n")
def _array_type_ok(reg_ty, elem, count):
    if not reg_ty:
        return False
    if reg_ty == "%s[%d]" % (elem, count):
        return True
    m = re.match(r"^(\S+)\s*\[(\d+)\]$", reg_ty)
    if m:
        return False
    return reg_ty == elem


# ---------------------------------------------------------------- member addr
#
# Audit-rem ② (2026-11-12): `(T *)&this->m` / `(T *)(&this->m)` member-
# address puns are checker R3 violations ("&this->member puns").  They occur
# when a function returns or forwards the ADDRESS of a member (0x634800
# `lea eax,[ecx+0x38]`, 0x408520 `add ecx,8; jmp Queue::GetNext`).  Model the
# storage as an offset-true char-array view: `this->mXXX` decays to the same
# address (`lea`), so codegen is unchanged, while the hpp declares a real
# member at the real offset.  Registry offsets come from _member_record_for
# plus the name-encoded `__pad_XX` / `*_field_XX` fallbacks.

_MEMBER_PUN_CAST = re.compile(
    r"\(\s*(?:[A-Za-z_]\w*\s+)*[A-Za-z_]\w*\s*\*+\s*\)\s*"
    r"&\s*this->(?P<mem>[A-Za-z_]\w*)")
_MEMBER_PUN_PAREN = re.compile(
    r"\(\s*&\s*this->(?P<mem>[A-Za-z_]\w*)\s*\)")


def _member_view_offset_guess(mem):
    """Offset encoded in the name: `__pad_00C` / `Foo_field_08`."""
    m = re.match(r"^__pad_?([0-9A-Fa-f]+)$", mem)
    if m:
        return int(m.group(1), 16)
    m = re.match(r"^(?:\w+_)?field_([0-9A-Fa-f]+)$", mem)
    if m:
        return int(m.group(1), 16)
    return None


def pass_member_addr_view(ctx):
    cls = ctx.sig["cls"]
    text = "\n".join(ctx.lines)
    changed = 0

    def make_repl(wrap):
        def repl(m):
            nonlocal changed
            mem = m.group("mem")
            moff, rec, src = _member_record_for(ctx, mem)
            if moff is None:
                g = _member_view_offset_guess(mem)
                if g is not None:
                    moff, src = g, "name-offset"
            if moff is None:
                return m.group(0)
            arr = (ctx.views.arrays.get(cls) or {}).get(moff)
            if arr and (arr.get("elem") or "") in ("char", "unsigned char"):
                name = arr["name"]
            else:
                name = "m%03X" % moff
                if arr and arr.get("name") == name:
                    name = "%s_addr" % name
                ctx.views.add_array(cls, moff, name, "char", 0,
                                    src or "member-addr-view")
            changed += 1
            ctx.sites.append(Site(
                "member_addr", m.group(0),
                "member-address pun -> this->%s (0x%X char-array view)"
                % (name, moff), True))
            return ("(this->%s)" % name) if wrap else ("this->" + name)
        return repl

    text = _MEMBER_PUN_CAST.sub(make_repl(False), text)
    text = _MEMBER_PUN_PAREN.sub(make_repl(True), text)
    if changed:
        ctx.lines = text.split("\n")


# ---------------------------------------------------------------- unknown syms
#
# R4: identifiers the registry never covers.  Two families survive every
# earlier pass and are pure C2065 compile failures:
#   * unqualified CALL targets (IDA renders CRT/internal callees by their
#     literal symbol: `_qsort(...)`, `__2_YAPAXI_Z(...)`); declaring them as
#     `extern int name(...)` compiles AND keeps the reloc key equal to the
#     signals name the original side compares against.
#   * IDA-prefixed GLOBALS (`dword_XXXX`, `byte_XXXX`, ...) that are absent
#     from the registry globals table; declaring with the prefix-implied
#     type is the honest fallback (keeps the compile alive, records the
#     registry gap as a site).
# Names already declared by the pilot hpp (<string.h>/<stdlib.h>), by the
# function's own params/locals, or that name a registry class are skipped.

_CRT_NAMES = {
    "qsort", "abs", "labs", "atoi", "atol", "malloc", "free", "calloc",
    "realloc", "memcpy", "memmove", "memset", "memcmp", "strcpy", "strncpy",
    "strcat", "strncat", "strcmp", "strncmp", "strlen", "strchr", "strrchr",
    "strstr", "sprintf", "swprintf", "printf", "fopen", "fclose",
    "fread", "fwrite", "fseek", "ftell", "rand", "srand", "time", "sqrt",
    "pow", "sin", "cos", "tan", "atan", "atan2", "floor", "ceil", "fabs",
    "tolower", "toupper", "isalpha", "isdigit", "isspace", "getenv", "exit",
    "abort", "qmemcpy",
    # CW2: wide-char / underscore CRT family.  These ARE declared by the
    # CRT headers every pilot hpp includes; emitting our own `extern int
    # wcslen(int, ...)` made the compiler see TWO overloads (C2665 family)
    # or fight the header (C2371).  Let the header own the prototype and
    # let _crt_string_casts fix argument spellings.
    "wcslen", "wcscpy", "wcscmp", "wcscat", "wcsncpy", "wcsncmp",
    "wcsstr", "wcschr", "wcsrchr", "wcsrev", "wcsicmp", "_wcsicmp",
    "_wcsupr", "_wcslwr", "_wcstombs", "mbstowcs",
    "_strcmpi", "_stricmp", "_strnicmp", "strtok", "_strrev",
    "strupr", "strlwr", "atof", "strtod", "strtol", "strtoul",
    "atexit", "vsprintf", "vswprintf", "_snprintf", "snprintf",
}

# CW2: Win32 APIs whose real prototypes matter for compile (volatile /
# pointer slots).  Used only when the registry has no record; the emitted
# extern keeps IDA's symbol spelling (reloc key unchanged).
_KNOWN_API_SIGS = {
    "InterlockedIncrement": ("long", "__stdcall", ["volatile long *"]),
    "InterlockedDecrement": ("long", "__stdcall", ["volatile long *"]),
    "InterlockedExchange": ("long", "__stdcall",
                            ["volatile long *", "long"]),
    "InterlockedCompareExchange": ("long", "__stdcall",
                                   ["volatile long *", "long", "long"]),
    "SendMessageA": ("long", "__stdcall",
                     ["void *", "unsigned int", "unsigned int", "long"]),
    "GetDlgItem": ("void *", "__stdcall", ["void *", "int"]),
    "GetParent": ("void *", "__stdcall", ["void *"]),
    "GetClientRect": ("int", "__stdcall", ["void *", "tagRECT *"]),
    "GetWindowRect": ("int", "__stdcall", ["void *", "tagRECT *"]),
    # CW2: GDI object selection rejects a scalar slot for the object handle
    # (`SelectObject(void *, void *)` vs registry's int).
    "SelectObject": ("void *", "__stdcall", ["void *", "void *"]),
    "DeleteObject": ("int", "__stdcall", ["void *"]),
}


def _ptr_names_in(text):
    """Locals declared as pointers (initializer allowed: `void *p = f();`)."""
    out = set()
    for m in re.finditer(
            r"\b(?:const\s+)?\w[\w\s:]*?\*\s*([A-Za-z_]\w*)\s*(?:=|;|\[)",
            text):
        out.add(m.group(1))
    return out


def _ctx_ptr_names(ctx, text):
    """Pointer-typed names visible at a call site: params, locals, globals."""
    s = _ptr_names_in(text)
    for t, n in ctx.sig.get("params_spelled") or []:
        if t.endswith("*"):
            s.add(n)
        else:
            # CW2: era pointer typedefs (HRSRC/HWND/LPPOINT/LPMSG...) are
            # pointers even though the spelling has no '*'.
            core = re.sub(r"^(?:const\s+|struct\s+|class\s+)+", "", t).strip()
            if core in _PTR_TY_NAMES:
                s.add(n)
    for n, t in (getattr(ctx, "used_globals", None) or {}).items():
        if str(t).endswith("*"):
            s.add(n)
        else:
            core = re.sub(r"^(?:const\s+|struct\s+|class\s+)+", "",
                          str(t)).strip()
            if core in _PTR_TY_NAMES:
                s.add(n)
    return s

_CALL_KEYWORDS = {
    "if", "for", "while", "switch", "return", "sizeof", "do", "else",
    "case", "default", "defined", "catch", "throw", "new", "delete",
    "goto", "break", "continue", "this", "true", "false",
    "abs16", "abs64", "abs",
    "LOBYTE", "HIBYTE", "LOWORD", "HIWORD", "BYTE1", "BYTE2",
    "BYTE3", "BYTE4", "WORD1", "WORD2", "SLOWORD", "SHIWORD", "LODWORD",
    "HIDWORD",
    # calling-convention tokens appear inside fn-pointer casts
    "__thiscall", "__stdcall", "__cdecl", "__fastcall", "__userpurge",
    "__usercall", "__pascal",
}
# CW2: kept as an alias -- an earlier session redefined this set further
# down the module, and Python's late name lookup made pass_unknown_symbols
# use the SMALLER set (`extern int else(void *, ...);` -> C2143 'else'
# poisoned 13 census units).  One definition, one truth.

# bare type spellings must never become `extern int int(...);`
_TYPE_KEYWORDS = {
    "void", "char", "short", "int", "long", "float", "double",
    "signed", "unsigned", "bool", "const", "volatile", "struct",
    "union", "enum", "class", "wchar_t", "size_t", "__int8",
    "__int16", "__int32", "__int64",
}

_LOCAL_DECL = re.compile(
    r"^\s*(?:const\s+)?(?:unsigned\s+|signed\s+)*"
    r"(?:char|short|int|long|float|double|void|bool|wchar_t|"
    r"_BYTE|_WORD|_DWORD|_QWORD|size_t|__int64|__int16|__int8|"
    r"GUID|HWND|HDC|HANDLE|LCID|HKL|HBRUSH|HPEN|HFONT|HMENU|HRGN|"
    r"HICON|HCURSOR|HINSTANCE|HMODULE|LPSTR|LPCSTR|DWORD|UINT|WORD|BYTE|"
    r"[A-Z]\w*)\s*\**\s*([A-Za-z_]\w*)\s*(?:\[|=|;)", re.M)

_GLOBAL_PREFIX_TY = {
    "dword": "unsigned int", "word": "unsigned short",
    "byte": "unsigned char", "qword": "__int64", "flt": "float",
    "dbl": "double", "unk": "unsigned char", "stru": "unsigned char",
    "off": "unsigned int",
}

_UNKNOWN_GLOBAL = re.compile(
    r"\b(dword|word|byte|qword|flt|dbl|unk|stru|off)_[0-9A-Fa-f]{5,8}\b")

_UNQUAL_CALL = re.compile(r"(?<![\w:.>])([A-Za-z_]\w*)\s*\(")


def _registry_fn_names(reg):
    """Set of free-function names in the registry (cached on the registry)."""
    cached = getattr(reg, "_free_fn_names", None)
    if cached is None:
        cached = set()
        for _a, v in reg.functions.items():
            nm = v.get("name")
            if nm and "::" not in nm:
                cached.add(nm)
        reg._free_fn_names = cached
    return cached


# ------------------------------------------------- CW5-F7: call-site arg typing
#
# CW5-1/2/4/5: on x86-32 every argument travels in ONE 4-byte stack slot,
# so a pointer<->int32 argument cast is CODEGEN-NEUTRAL (no conversion
# instruction is emitted; the same dword is pushed).  The compile wall is
# purely a TYPE CHECK: the declaration (registry slot / CRT header / Win32
# prototype) rejects the observed argument spelling.  Fix at the CALL SITE
# against the declared type -- never by weakening the declaration (only
# pointer-shaped slots get the CW3-5 `void *` relaxation, which is also
# how const was lost: see CW5-4).
#
# Family gates (hard): float/double/__int64 slots are NEVER touched (a cast
# there emits a real conversion -> codegen change), and an argument whose
# family can not be established is left untouched (honest refuse).

_CW5_INT32_TYS = {
    "int", "unsigned int", "signed int", "long", "unsigned long",
    "signed long", "unsigned", "signed", "_DWORD", "UINT", "DWORD", "LONG",
    "ULONG", "BOOL", "int32_t", "uint32_t", "INT_PTR", "UINT_PTR",
    "ULONG_PTR", "LRESULT", "LSTATUS", "WPARAM", "LPARAM", "size_t",
    "SOCKET", "MMRESULT", "LCTYPE", "COLORREF", "ATOM", "u_long", "u_short",
}
# sub-dword integers: valid as a SOURCE of a pointer-slot cast (the compiler
# already extends the value), NEVER as a cast TARGET (`(char)ptr` truncates
# -> real codegen change).
_CW5_SMALL_INT_TYS = {
    "char", "unsigned char", "signed char", "short", "unsigned short",
    "_BYTE", "_WORD", "WORD", "BYTE", "SHORT", "USHORT", "UCHAR", "CHAR",
    "bool", "u_short",
}
_CW5_FLOAT_TYS = {
    "float", "double", "long double", "__int64", "unsigned __int64",
    "_QWORD", "__m64",
}

# CW5-2: real prototypes of the CRT/Win32 names that occur in the residual
# bodies.  Names owned by the SDK/CRT headers have no extern of ours, so the
# call site is the only lever; names that DO reach the unknown-callee
# fallback also take their declaration types from here.
_CRT_CALL_TYPES = {
    "atexit": ["void (__cdecl *)(void)"],
    "_strcmpi": ["const char *", "const char *"],
    "_stricmp": ["const char *", "const char *"],
    "_strnicmp": ["const char *", "const char *", "size_t"],
    "strncpy": ["char *", "const char *", "size_t"],
    "strncmp": ["const char *", "const char *", "size_t"],
    "strtok": ["char *", "const char *"],
    "strchr": ["const char *", "int"],
    "strrchr": ["const char *", "int"],
    "memcpy": ["void *", "const void *", "size_t"],
    "memmove": ["void *", "const void *", "size_t"],
    "memset": ["void *", "int", "size_t"],
    "free": ["void *"],
    "swprintf": ["wchar_t *", "const wchar_t *", "..."],
    "wcscpy": ["wchar_t *", "const wchar_t *"],
    "wcslen": ["const wchar_t *"],
    "wsprintfA": ["char *", "const char *", "..."],
    "InterlockedIncrement": ["volatile long *"],
    "InterlockedDecrement": ["volatile long *"],
    "InterlockedExchange": ["volatile long *", "long"],
    "MoveWindow": ["void *", "int", "int", "int", "int", "int"],
    "SetRect": ["void *", "int", "int", "int", "int"],
    "OffsetRect": ["void *", "int", "int"],
    "InflateRect": ["void *", "int", "int"],
    "SetWindowPos": ["void *", "void *", "int", "int", "int", "int", "int",
                     "unsigned int"],
    "CompareFileTime": ["const FILETIME *", "const FILETIME *"],
    "VerQueryValueA": ["const void *", "const char *", "void **",
                       "unsigned int *"],
    "RegQueryValueExA": ["void *", "const char *", "unsigned int *",
                         "unsigned int *", "unsigned char *",
                         "unsigned int *"],
}


def _cw5_core(ty):
    """Core spelling of a type: qualifiers / stars / [] stripped."""
    t = (ty or "").strip()
    t = re.sub(r"\[\s*\d*\s*\]\s*$", "", t).strip()
    t = t.rstrip("*").strip()
    prev = None
    while prev != t:
        prev = t
        t = re.sub(r"^(?:const|volatile|struct|class|union)\b\s*", "",
                   t).strip()
    return t


def _cw5_ty_kind(ty):
    t = (ty or "").strip()
    if not t or "..." in t:
        return None
    if "(" in t:
        return "fnptr"           # function-pointer slot
    if t.endswith("*") or re.search(r"\[\s*\d*\s*\]$", t):
        return "ptr"             # pointer or array (decays)
    core = _cw5_core(t)
    if core in _PTR_TY_NAMES:
        return "ptr"
    if core in _CW5_INT32_TYS:
        return "int"
    if core in _CW5_SMALL_INT_TYS:
        return "small"
    if core in _CW5_FLOAT_TYS:
        return "float"
    return None


def _cw5_member_ty(s, ctx):
    """Declared type of `this->NAME` from the view ledger, else registry."""
    if ctx is None:
        return None
    m = re.match(r"^this->([A-Za-z_]\w*)$", s)
    if not m:
        return None
    name = m.group(1)
    cls = ctx.sig.get("cls")
    if not cls:
        return None
    for roles in (ctx.views.scalars.get(cls) or {}).values():
        for v in roles.values():
            if v.get("name") == name:
                return v.get("type")
    for arr in (ctx.views.arrays.get(cls) or {}).values():
        if arr.get("name") == name:
            return (arr.get("elem") or "int") + "[]"
    r = ctx.reg.member_offset_by_ida_name(cls, name)
    if r is None or r[0] is None:
        inh = getattr(ctx.reg, "member_offset_inherited", None)
        if inh is not None:
            r = inh(cls, name)
    if r and r[0] is not None and (r[1] or {}).get("type"):
        return r[1]["type"]
    return None


_FNCast_ARG_HEAD = re.compile(
    r"^\([^()]*\(\s*__(?:stdcall|cdecl|fastcall|thiscall)\b[^()]*\*[^()]*\)[^()]*\)")


_CW5_CAST_HEAD = re.compile(
    r"^\(\s*((?:(?:const|volatile|struct|class|union|unsigned|signed|long|"
    r"short)\s+)*[A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*)\s*\)\s*(?=\S)")


def _cw5_arg_kind(s, syms, ctx=None):
    """Family of a call argument: 'ptr' | 'int' | 'float' | None (refuse)."""
    s = (s or "").strip()
    # IDA site comments inside expressions (`(/*#375*/int *)p0`) are not
    # part of the type spelling
    s = re.sub(r"/\*.*?\*/", " ", s).strip()
    if not s:
        return None
    s2 = _strip_outer_parens(s)
    if s2 != s:
        return _cw5_arg_kind(s2, syms, ctx)
    # deref of an explicit cast -> value kind of the pointee
    m = re.match(r"^\*\s*\(\s*([A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*)\s*\*+\s*\)",
                 s)
    if m:
        return _cw5_ty_kind(m.group(1))
    # `*(*(T **)X + n)` / `*((T **)X + n)`: one deref of a typed slot
    if re.match(r"^\*\s*\(\s*\(\s*[A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*"
                r"\s*\*+\s*\)", s):
        return "ptr"
    if s.startswith("*"):
        return None              # deref of unknown pointer: refuse
    # explicit pointer cast `(T *)`, `(const char *)`, `(T **)` ...
    if re.match(r"^\(\s*[A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*\s*\*+\s*\)", s):
        return "ptr"
    if _FNCast_ARG_HEAD.match(s):
        return "ptr"
    # multi-word C-style cast (`(const unsigned int)`, `(unsigned __int64)`)
    m = _CW5_CAST_HEAD.match(s)
    if m:
        tk = _cw5_ty_kind(m.group(1))
        if tk is not None:
            return tk
        return None
    if s.startswith("&") and not s.startswith("&&"):
        return "ptr"
    if s[0] == '"' or s.startswith('L"'):
        return "ptr"
    if re.match(r"^(?:0x[0-9A-Fa-f]+|\d+)[uUlL]*$", s):
        return "int"
    # `this->M`: the declared member type is authoritative -- the generic
    # text heuristic calls every `->` a pointer (a float member would then
    # be int-cast -> truncation codegen).
    if s.startswith("this->"):
        ty = _cw5_member_ty(s, ctx)
        return _cw5_ty_kind(ty) if ty is not None else None
    ptr_names = set(n for n, t in syms.items()
                    if _cw5_ty_kind(t) == "ptr")
    if _arg_is_pointerish(s, ptr_names):
        return "ptr"
    if re.match(r"^[A-Za-z_]\w*$", s):
        ty = syms.get(s)
        if ty is not None:
            return _cw5_ty_kind(ty)
        # a bare FUNCTION name decays to a function pointer (`atexit(sub_X)`)
        if ctx is not None:
            if s in (getattr(ctx, "_cw5_callee_names", ()) or ()):
                return "ptr"
            if s in _registry_fn_names(ctx.reg):
                return "ptr"
    return None


def _cw5_arg_base(s, syms):
    """Pointer base spelling of an argument, or None when unknown."""
    s = re.sub(r"/\*.*?\*/", " ", (s or "")).strip()
    s2 = _strip_outer_parens(s)
    if s2 != s:
        return _cw5_arg_base(s2, syms)
    m = re.match(r"^\(\s*([A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*)\s*\*+\s*\)", s)
    if m:
        return _cw5_core(m.group(1))
    if re.match(r"^[A-Za-z_]\w*$", s):
        ty = syms.get(s)
        if ty is not None:
            return _cw5_core(ty)
    return None


def _cw5_coerce_one(val, T, syms, ctx):
    """`(T)(val)` when the families mismatch, else None (no change)."""
    T = (T or "").strip()
    if not T or T == "...":
        return None
    tk = _cw5_ty_kind(T)
    if tk is None or tk == "float" or tk == "small":
        return None
    ak = _cw5_arg_kind(val, syms, ctx)
    if ak is None or ak == "float":
        return None
    if ak == "small":
        ak = "int"               # value already extended by the compiler
    if ak == "fnptr":
        ak = "ptr"               # function name / fn-ptr value is a pointer
    if tk == "fnptr":
        return "(%s)(%s)" % (T, val)
    if tk == "ptr" and ak == "ptr":
        tb = _cw5_core(T)
        ab = _cw5_arg_base(val, syms)
        if ab is not None and ab == tb:
            return None
        return "(%s)(%s)" % (T, val)
    if (tk == "ptr" and ak == "int") or (tk == "int" and ak == "ptr"):
        return "(%s)(%s)" % (T, val)
    return None


def _cw5_arg_spans(inner):
    """[(start, end)] of top-level comma-separated args (quote-aware)."""
    spans = []
    depth = 0
    q = ""
    start = 0
    i = 0
    while i < len(inner):
        ch = inner[i]
        if q:
            if ch == "\\":
                i += 2
                continue
            if ch == q:
                q = ""
        elif ch in "\"'":
            q = ch
        elif ch in "([":
            depth += 1
        elif ch in ")]":
            depth -= 1
        elif ch == "," and depth == 0:
            spans.append((start, i))
            start = i + 1
        i += 1
    spans.append((start, len(inner)))
    return spans


def _cw5_coerce_inner(inner, types, syms, ctx):
    spans = _cw5_arg_spans(inner)
    pieces = []
    n = 0
    for idx, (a, b) in enumerate(spans):
        seg = inner[a:b]
        val = seg.strip()
        if idx >= len(types) or not val:
            pieces.append(seg)
            continue
        new = _cw5_coerce_one(val, types[idx], syms, ctx)
        if new is None:
            pieces.append(seg)
        else:
            lead = seg[:len(seg) - len(seg.lstrip())]
            trail = seg[len(seg.rstrip()):]
            pieces.append(lead + new + trail)
            n += 1
    return ",".join(pieces), n


def _cw5_coerce_call_sites(text, name, types, syms, ctx=None):
    out = []
    pos = 0
    n = 0
    pat = re.compile(r"(?<![\w:.>])%s\s*\(" % re.escape(name))
    for m in pat.finditer(text):
        if m.start() < pos:
            continue
        op = m.end() - 1
        cl = _balanced_close(text, op)
        if cl < 0:
            continue
        inner = text[op + 1:cl]
        if not inner.strip():
            continue
        new_inner, cnt = _cw5_coerce_inner(inner, types, syms, ctx)
        if cnt:
            out.append(text[pos:op + 1])
            out.append(new_inner)
            pos = cl
            n += cnt
    if not n:
        return text, 0
    out.append(text[pos:])
    return "".join(out), n


def _cw5_sym_types(ctx, text):
    """Name -> declared type for params / locals / globals visible here."""
    out = {}
    for t, n in (ctx.sig.get("params_spelled") or []):
        out[n] = t
    for m in _LOCAL_DECL.finditer(text):
        name = m.group(1)
        head = m.group(0)
        i = head.rfind(name)
        if i > 0:
            ty = head[:i].strip()
            if ty:
                out.setdefault(name, ty)
    for n, t in (getattr(ctx, "used_globals", None) or {}).items():
        out.setdefault(n, t)
    # function-pointer locals (`int (__stdcall ***v6)(...)`) -- their value
    # is a pointer; the indirect-call pass also uses THIS table's per-slot
    # prototype list.
    for m in _FNPTR_DECL.finditer(text):
        out.setdefault(m.group("name"), "void (__cdecl *)()")
    return out


def _cw5_parse_decl(d):
    """`extern RET CC NAME(T a0, ...);` -> (NAME, [types])."""
    s = (d or "").strip()
    m = re.match(
        r"^extern\s+(?P<ret>.+?)\s+(?:__(?:stdcall|cdecl|fastcall)\s+)?"
        r"(?P<name>[A-Za-z_]\w*)\s*\((?P<args>.*)\)\s*;\s*$", s)
    if not m:
        return None, None
    name = m.group("name")
    inner = m.group("args").strip()
    if not inner:
        return name, []
    tys = []
    for a in _split_args(inner):
        a = a.strip()
        if not a:
            continue
        if a == "...":
            tys.append("...")
            continue
        a2 = re.sub(r"\s+[A-Za-z_]\w*$", "", a)
        tys.append(a2.strip())
    return name, tys


def pass_arg_harmonize(ctx):
    """CW5-1/2/4/5: type every resolvable call argument to its slot.

    Runs AFTER pass_unknown_symbols (declarations final) and covers:
      * free-function call sites declared by pass_unknown_symbols /
        pass_callees (`GetStringCSF`, `__3_YAXPAX_Z`, ...);
      * CRT/Win32 names owned by the SDK headers (`atexit`, `memset`, ...).
    Member calls with a pseudo-sig receiver are coerced inside pass_callees
    (their declarations never reach the extern block).
    """
    text = "\n".join(ctx.lines)
    syms = _cw5_sym_types(ctx, text)
    table = {}
    for name, tys in (getattr(ctx, "_callee_arg_types", {}) or {}).items():
        table[name] = list(tys)
    for d in (getattr(ctx, "used_callee_exts", []) or []):
        nm, tys = _cw5_parse_decl(d)
        if nm and tys is not None and nm not in table:
            table[nm] = tys
    for name, tys in _CRT_CALL_TYPES.items():
        if name in table:
            continue
        if re.search(r"(?<![\w:.>])%s\s*\(" % re.escape(name), text):
            table[name] = list(tys)
    total = 0
    ctx._cw5_callee_names = set(table)
    for name in sorted(table, key=len, reverse=True):
        text, n = _cw5_coerce_call_sites(text, name, table[name], syms, ctx)
        total += n
    if total:
        ctx.lines = text.split("\n")
        ctx.sites.append(Site(
            "call_args", "%d argument(s)" % total,
            "call-site arg typed to the declared slot "
            "(pointer<->int32 casts are codegen-neutral on x86-32)", True))


# --------------------------------------------- CW5-F7: indirect fn-ptr calls
#
# CW5-3 (A3): IDA renders vtable/interface calls as an explicit fn-pointer
# type cast plus a call, passing the receiver as the FIRST explicit
# argument: `(**v6)(v6, p2, v9)` / `(*(int (__stdcall **)(unsigned int *))
# &this->m010[8])(p0)`.  The cast's parameter list IS the callee prototype,
# so each argument is typed to its slot exactly like a named callee (the
# pointer<->int32 casts stay codegen-neutral).

_FNPTR_DECL = re.compile(
    r"^\s*(?P<ret>[A-Za-z_][\w\s\*]*?)\s*\(\s*__(?P<cc>stdcall|cdecl|fastcall|thiscall)"
    r"\s*(?P<stars>\*+)\s*(?P<name>[A-Za-z_]\w*)\s*\)\s*"
    r"\((?P<params>(?:[^()]|\([^()]*\))*)\)\s*;", re.M)

_FNPTR_CAST = re.compile(
    r"\(\s*(?:[A-Za-z_]\w*[\s\*]+)*\(\s*__(?:stdcall|cdecl|fastcall|thiscall)"
    r"\s*\*+[^()]*\)\s*"
    r"\((?P<params>(?:[^()]|\([^()]*\))*)\)\s*\)")


def _balanced_open(text, close_idx):
    """text[close_idx] == ')' -> index of the matching '(' or -1."""
    depth = 0
    for i in range(close_idx, -1, -1):
        if text[i] == ")":
            depth += 1
        elif text[i] == "(":
            depth -= 1
            if depth == 0:
                return i
    return -1


def _cw5_param_list(inner):
    out = []
    if not (inner or "").strip():
        return out
    for a in _split_args(inner):
        a = a.strip()
        if a:
            out.append(a)
    return out


def pass_indirect_call_args(ctx):
    text = "\n".join(ctx.lines)
    if ("(__stdcall" not in text and "(__cdecl" not in text and
            "(__fastcall" not in text and "(__thiscall" not in text):
        return
    syms = _cw5_sym_types(ctx, text)
    local_fns = {}
    for m in _FNPTR_DECL.finditer(text):
        local_fns[m.group("name")] = _cw5_param_list(m.group("params"))
    reps = []
    total = 0
    n = len(text)
    i = 0
    while i < n:
        if text[i] != "(":
            i += 1
            continue
        j = i - 1
        while j >= 0 and text[j] in " \t\r\n":
            j -= 1
        types = None
        if j >= 0 and text[j] == ")":
            gs = _balanced_open(text, j)
            if gs >= 0:
                grp = text[gs:j + 1]
                mm = re.match(r"^\(\s*\*+\s*(?:this->)?([A-Za-z_]\w*)\s*\)$",
                              grp)
                if mm and mm.group(1) in local_fns:
                    types = local_fns[mm.group(1)]
                if types is None:
                    cm = None
                    for cm in _FNPTR_CAST.finditer(grp):
                        pass
                    if cm is not None:
                        types = _cw5_param_list(cm.group("params"))
        elif j >= 0 and (text[j].isalnum() or text[j] == "_"):
            k = j
            while k >= 0 and (text[k].isalnum() or text[k] == "_"):
                k -= 1
            nm = text[k + 1:j + 1]
            if nm in local_fns:
                types = local_fns[nm]
        if types:
            cl = _balanced_close(text, i)
            if cl > 0:
                inner = text[i + 1:cl]
                if inner.strip():
                    new_inner, cnt = _cw5_coerce_inner(
                        inner, types, syms, ctx)
                    if cnt:
                        reps.append((i + 1, cl, new_inner))
                        total += cnt
                        i = cl + 1
                        continue
        i += 1
    if total:
        out = []
        pos = 0
        for a, b, s in reps:
            if a < pos:
                continue
            out.append(text[pos:a])
            out.append(s)
            pos = b
        out.append(text[pos:])
        ctx.lines = "".join(out).split("\n")
        ctx.sites.append(Site(
            "call_args", "%d indirect arg(s)" % total,
            "indirect fn-ptr call args typed to the cast prototype "
            "(codegen-neutral pointer<->int32 casts)", True))


def pass_unknown_symbols(ctx):
    text = "\n".join(ctx.lines)
    # IDA's qmemcpy builtin is memcpy (declared via <string.h>)
    text = re.sub(r"\bqmemcpy\s*\(", "memcpy(", text)

    if not hasattr(ctx, "used_callee_exts"):
        ctx.used_callee_exts = []
    if not hasattr(ctx, "used_globals"):
        ctx.used_globals = {}
    # CW5-1: declared slot types per free callee (pass_arg_harmonize input)
    ctx._callee_arg_types = {}

    locals_ = set(ctx.sig.get("param_names") or [])
    for m in _LOCAL_DECL.finditer(text):
        locals_.add(m.group(1))

    declared = set()
    for d in ctx.used_callee_exts:
        dm = re.search(r"\b([A-Za-z_]\w*)\s*\(", d)
        if dm:
            declared.add(dm.group(1))

    for m in _UNQUAL_CALL.finditer(text):
        name = m.group(1)
        if name in _TYPE_KEYWORDS:
            continue
        # R5: IDA local fn-ptr variables are named vN (`v7(x)` on a local
        # `int (__stdcall *)(int) v7`) -- declaring `extern int v7(...)`
        # collided with the local decl and poisoned the unit
        if re.match(r"^v\d+$", name):
            continue
        # R7: calling-convention keywords are never callee names (they
        # rode in on leaked proto text: `int __thiscall Cls::M(...)` ->
        # `extern int __thiscall(...)` C2059)
        if name in ("__thiscall", "__stdcall", "__cdecl", "__fastcall",
                    "__userpurge", "__usercall", "__pascal"):
            continue
        if name in _CALL_KEYWORDS or name in _CRT_NAMES or name in locals_:
            continue
        if name == ctx.sig.get("method"):
            continue
        if name in declared or name in ctx.used_globals:
            continue
        if name in ctx.reg.classes or (name + "Class") in ctx.reg.classes:
            # CW5-12: a PHANTOM registry class (no vtable, no slots, only
            # placeholder members) that the body CALLS is a helper pseudo-
            # class, not a real type -- declare the free function.  The
            # shell (if any) is renamed to `Name_Helper` at emission.
            _ck = name if name in ctx.reg.classes else name + "Class"
            _crec = ctx.reg.classes.get(_ck) or {}
            _synth = re.compile(r"^(?:ptr_|m_?|u\d+_|q[0-9A-Fa-f]+|pad_|__pad)")
            _phantom = (not _crec.get("vtable")
                        and not _crec.get("slot_count")
                        and all(ctx.reg._is_placeholder((m or {}).get("name"))
                                or _synth.match(((m or {}).get("name") or ""))
                                for m in (_crec.get("members") or {}).values()))
            if not _phantom:
                continue
        # R7: va_* are stdarg MACROS (the #include <stdarg.h> in every
        # pilot hpp provides them); declaring an extern with the same
        # name fights the macro expansion
        if name in ("va_start", "va_end", "va_arg", "va_copy"):
            continue
        # R6: CRT operator spellings first (registry only carries ??2 new
        # under its mangled key; delete is absent entirely).  The literal
        # name stays -- the reloc key depends on it.
        if name in _CRT_OPERATOR_TY:
            ret = _CRT_OPERATOR_TY[name]
            params = {"__2_YAPAXI_Z": "unsigned int",
                      "__3_YAXPAX_Z": "void *"}.get(name, "...")
            ctx.used_callee_exts.append(
                "extern %s %s(%s);" % (ret, name, params))
            declared.add(name)
            if params != "...":
                ctx._callee_arg_types[name] = [params]
            ctx.sites.append(Site(
                "callee", name + "(...)",
                "CRT operator -> extern %s %s(%s) (known signature)"
                % (ret, name, params), True))
            continue
        # CW2: known Win32 APIs whose real prototype is compile-critical
        # (`InterlockedIncrement(volatile LONG *)` cannot take a plain
        # `void *` slot without dropping volatile -> C2664).  Must run
        # BEFORE the registry lookup: the registry sometimes carries a
        # loose record for these imports and would re-flatten the slot.
        api = _KNOWN_API_SIGS.get(name)
        if api is not None:
            ret, cc, ptypes = api
            plist = ", ".join("%s a%d" % (t, i)
                              for i, t in enumerate(ptypes))
            ctx.used_callee_exts.append(
                "extern %s %s %s(%s);" % (ret, cc, name, plist))
            declared.add(name)
            ctx._callee_arg_types[name] = list(ptypes)
            ctx.sites.append(Site(
                "callee", name + "(...)",
                "known Win32 API -> extern %s %s %s(%s)"
                % (ret, cc, name, plist), True))
            continue
        # CW2: IAT import thunks (`__imp_LoadResource`) mirror the imported
        # function's prototype.  The fabricated call-shape extern
        # (`extern int __imp_X(void *, int, ...)`) rejected the very
        # arguments the real prototype accepts (C2664 HRSRC->int).
        if name.startswith("__imp_"):
            _ia, _irec = ctx.reg.function_by_name(name[len("__imp_"):])
            if _irec is not None:
                _iret = spell_type(_irec.get("ret") or "int")
                if _iret in ("unknown", ""):
                    _iret = "int"
                _icc = {"stdcall": " __stdcall",
                        "fastcall": " __fastcall"}.get(
                            _irec.get("cc") or "", "")
                _iparts = []
                for _i, _p in enumerate(_irec.get("params") or []):
                    _ty = spell_type(_p.get("type") or "int")
                    if "(" in _ty:
                        _ty = "void *"
                    _iparts.append(_ty)
                # arity guard (same policy as the registry path): the import
                # record may omit parameters -- never emit a prototype
                # narrower than the observed call site (C2660).
                _obs = []
                for _cm in re.finditer(r"\b%s\s*\(" % re.escape(name),
                                       text):
                    _cl = _balanced_close(text, _cm.end() - 1)
                    if _cl < 0:
                        continue
                    _inner = text[_cm.end():_cl].strip()
                    if _inner:
                        _a = _split_args(_inner)
                        if len(_a) > len(_obs):
                            _obs = _a
                _ptrn = _ctx_ptr_names(ctx, text)
                for _i, _a0 in enumerate(_obs):
                    if _i < len(_iparts):
                        continue
                    # CW2: `const void *` accepts both const and non-const
                    # pointer arguments; a plain `void *` slot rejects the
                    # very common `const char *` argument (C2664).
                    _iparts.append("const void *" if _arg_is_pointerish(
                        _a0.strip(), _ptrn) else "int")
                _plist = ", ".join("%s a%d" % (t, i)
                                   for i, t in enumerate(_iparts))
                if len(_iparts) < len(_obs):
                    _plist = _plist + ", ..." if _plist else "..."
                ctx.used_callee_exts.append(
                    "extern %s%s %s(%s);" % (_iret, _icc, name, _plist))
                declared.add(name)
                ctx._callee_arg_types[name] = list(_iparts)
                ctx.sites.append(Site(
                    "callee", name + "(...)",
                    "IAT thunk -> prototype of %s (registry)"
                    % name[len("__imp_"):], True))
                continue
        # R6: registry retry under the ??-mangled spelling.  The export
        # collapses `??2_YAPAXI_Z` to `__2_YAPAXI_Z`; a plain lookup misses
        # and the callee fell back to `extern int`, which broke every
        # `void *v = operator_new(size)` site (C2440 family, 126 decls).
        rec = None
        if name.startswith("__"):
            _a, rec = ctx.reg.function_by_name("??" + name[2:])
        if rec is None:
            # R8: plain (unmangled) free functions ARE in the registry --
            # without this lookup every unqualified callee was declared
            # with the default cdecl convention.  A __fastcall callee then
            # cost a full argument-setup frame + call + ret instead of the
            # bare tail jmp (`xor edx, edx; jmp RequestBufferMixer` --
            # Audio::GetFlag 0x407070) and a __stdcall callee left the
            # caller to clean a stack the original's callee pops.
            _a, rec = ctx.reg.function_by_name(name)
        if rec is not None:
            ret = spell_type(rec.get("ret") or "int")
            # `unknown` is IDA's "no type", not a C type spelling (C2146).
            if ret in ("unknown", ""):
                ret = "int"
            # arity guard: the registry record may be missing parameters
            # (IDA leaves some out) or the call may be variadic -- never
            # emit a prototype narrower than the observed call sites.
            obs_args = []
            for cm in re.finditer(r"\b%s\s*\(" % re.escape(name), text):
                op = cm.end() - 1
                cl = _balanced_close(text, op)
                if cl < 0:
                    continue
                inner = text[op + 1:cl].strip()
                if inner:
                    a_list = _split_args(inner)
                    if len(a_list) > len(obs_args):
                        obs_args = a_list
            rparams = list(rec.get("params") or [])
            if obs_args and len(rparams) != len(obs_args):
                rparams = [{"type": "int"} for _ in range(len(obs_args))]
            # CW5-2: a known CRT/Win32 prototype outranks the registry
            # import record (whose slots are arg-form relaxed below --
            # MoveWindow's int height became void* that way).
            _crt = _CRT_CALL_TYPES.get(name)
            if _crt and len(_crt) == len(rparams):
                rparams = [({"type": t} if t != "..." else p)
                           for p, t in zip(rparams, _crt)]
            # arg-driven relaxation (R7 policy, extended to registry
            # hits): the registry type may be a class/pointer spelling
            # that rejects the observed argument (C2664 ObjectClass* ->
            # int, char[128] -> unsigned char*), while floats/doubles
            # and 64-bit slots carry ABI meaning and must be kept.
            # CW2: pointer-typed names visible here: params, pointer locals
            # (initializer allowed), and pointer-typed registry globals.
            ptr_names_ = _ctx_ptr_names(ctx, text)
            for m2 in re.finditer(
                    r"\b([A-Za-z_]\w*)\s*\[\s*\d+\s*\]\s*;", text):
                ptr_names_.add(m2.group(1))
            plist_parts = []
            plist_types = []
            for i, p in enumerate(rparams):
                ty_ = spell_type(p.get("type") or "int")
                if ty_ in ("float", "double", "__int64",
                           "unsigned __int64"):
                    plist_parts.append("%s a%d" % (ty_, i))
                    plist_types.append(ty_)
                    continue
                if "(" in ty_:
                    ty_ = "void *"
                if i < len(obs_args) and _arg_is_pointerish(
                        obs_args[i].strip(), ptr_names_):
                    if ty_.endswith("*") and ty_ != "void *":
                        # CW5-4: preserve const through the relaxation --
                        # a plain `void *` slot rejects the very common
                        # `const char *` argument (C2664 Copy /
                        # LookupFileInfoCache / queueSendPacket).
                        ty_ = ("const void *" if "const" in obs_args[i]
                               else "void *")
                    elif not ty_.endswith("*"):
                        ty_ = "void *"
                plist_parts.append("%s a%d" % (ty_, i))
                plist_types.append(ty_)
            plist = ", ".join(plist_parts)
            rcc = {"stdcall": " __stdcall",
                   "fastcall": " __fastcall"}.get(
                       (rec or {}).get("cc") or "", "")
            ctx.used_callee_exts.append(
                "extern %s%s %s(%s);" % (ret, rcc, name, plist))
            declared.add(name)
            ctx._callee_arg_types[name] = plist_types
            ctx.sites.append(Site(
                "callee", name + "(...)",
                "registry callee -> extern %s%s %s(%s)"
                % (ret, rcc, name, plist), True))
            continue
        # CW2: known Win32 APIs whose real prototype is compile-critical
        # (`InterlockedIncrement(volatile LONG *)` cannot take a plain
        # `void *` slot without dropping volatile -> C2664).
        api = _KNOWN_API_SIGS.get(name)
        if api is not None:
            ret, cc, ptypes = api
            plist = ", ".join("%s a%d" % (t, i)
                              for i, t in enumerate(ptypes))
            ctx.used_callee_exts.append(
                "extern %s %s %s(%s);" % (ret, cc, name, plist))
            declared.add(name)
            ctx._callee_arg_types[name] = list(ptypes)
            ctx.sites.append(Site(
                "callee", name + "(...)",
                "known Win32 API -> extern %s %s %s(%s)"
                % (ret, cc, name, plist), True))
            continue
        # CW5-2: Win32/CRT names the registry does not carry but whose real
        # prototype is known (`MoveWindow`'s 5th slot is an int, not a
        # pointer -- the observed-arg fallback below flipped it to void*).
        _crt = _CRT_CALL_TYPES.get(name)
        if _crt is not None:
            _ctys = [t for t in _crt]
            _cplist = ", ".join("%s a%d" % (t, i)
                                for i, t in enumerate(_ctys) if t != "...")
            if "..." in _ctys:
                _cplist = (_cplist + ", ...") if _cplist else "..."
            ctx.used_callee_exts.append(
                "extern int __stdcall %s(%s);" % (name, _cplist))
            declared.add(name)
            ctx._callee_arg_types[name] = _ctys
            ctx.sites.append(Site(
                "callee", name + "(...)",
                "known CRT/Win32 prototype -> extern int %s(%s)"
                % (name, _cplist), True))
            continue
        # R7: `extern int f(...)` is a C2059 ('...') hard error in VC6
        # (an ellipsis needs a named first parameter) and `extern int
        # f();` is C++ ZERO-arg (C2660 on 2-arg calls).  Spell the
        # OBSERVED call shape: per-arg form typing (pointer-ish args get
        # `void *` slots -- ClipRectIntersection(int[4]) family), a
        # trailing `...` only after a first named param.  The extern
        # name/reloc key is unchanged.
        max_args = 0
        plist = None
        for cm in re.finditer(r"\b%s\s*\(" % re.escape(name), text):
            op = cm.end() - 1
            cl = _balanced_close(text, op)
            if cl < 0:
                continue
            inner = text[op + 1:cl].strip()
            if not inner:
                continue
            args = _split_args(inner)
            max_args = max(max_args, len(args))
            if plist is None:
                plist = []
                arr_locals_ = set(m2.group(1) for m2 in re.finditer(
                    r"\b([A-Za-z_]\w*)\s*\[\s*\d+\s*\]\s*;", text))
                # CW2: pointer locals/params/globals (initializer allowed)
                ptr_locals_ = _ctx_ptr_names(ctx, text)
            for i, a0 in enumerate(args):
                s0 = a0.strip()
                while len(plist) <= i:
                    plist.append("int")
                if _arg_is_pointerish(
                        s0, arr_locals_ | ptr_locals_):
                    plist[i] = "void *"
        if not max_args:
            proto = "()"
        else:
            proto = "(%s, ...)" % ", ".join(plist)
        ctx.used_callee_exts.append("extern int %s%s;" % (name, proto))
        declared.add(name)
        ctx._callee_arg_types[name] = list(plist or [])
        ctx.sites.append(Site(
            "callee", name + "(...)",
            "unqualified callee not in registry -> extern int %s%s "
            "(literal IDA symbol spelling keeps the reloc key)"
            % (name, proto), False))

    # bare function-name VALUES (qsort callback family): IDA renders the
    # address as the bare symbol (`qsort(..., CompareFunc3Int)`) -- declare
    # it so the argument decays to a function pointer.
    fn_names = _registry_fn_names(ctx.reg)
    used_bare = set()
    for m in re.finditer(r"(?<![\w:.>])([A-Za-z_]\w*)(?!\s*\()", text):
        name = m.group(1)
        if name in locals_ or name in declared or name in used_bare:
            continue
        if name in ctx.used_globals:
            continue          # already declared as a global (C2373 family)
        if name not in fn_names:
            continue
        used_bare.add(name)
        ctx.used_callee_exts.append(
            "extern int __cdecl %s(const void *, const void *);" % name)
        declared.add(name)
        ctx.sites.append(Site(
            "callee", name,
            "bare function-name value -> extern int %s() (callback arg)"
            % name, False))

    # IDA-prefixed globals with no registry record
    for m in _UNKNOWN_GLOBAL.finditer(text):
        name = m.group(0)
        if name in ctx.used_globals:
            continue
        ty = _GLOBAL_PREFIX_TY.get(m.group(1), "unsigned int")
        ctx.used_globals[name] = ty
        ctx.sites.append(Site(
            "global", name,
            "unresolved IDA global -> extern %s %s (registry gap)"
            % (ty, name), False))

    # R7: IDA string labels (`aStructuretab` -- the a-Prefix convention
    # over an uppercase-initial stem).  These are .rdata string constants
    # the registry never carries as such; `return aStructuretab;` was
    # C2065.  Declared as char arrays they decay to char* everywhere a
    # string literal address is legal, and the extern keeps the exact
    # IDA symbol spelling (reloc key).
    for m in re.finditer(r"(?<![\w.>:])a[A-Z]\w{2,}\b", text):
        name = m.group(0)
        if name in ctx.used_globals or name in declared or name in locals_:
            continue
        if name in ctx.reg.classes or (name + "Class") in ctx.reg.classes:
            continue
        if name in _CALL_KEYWORDS or name in _CRT_NAMES or \
                name in _TYPE_KEYWORDS:
            continue
        if re.search(r"\b%s\s*\(" % re.escape(name), text):
            continue          # used as a callee: not a string label
        ctx.used_globals[name] = "char[]"
        ctx.sites.append(Site(
            "global", name,
            "IDA string label -> extern char %s[]" % name, False))

    ctx.lines = text.split("\n")


def pass_prune_type_only_globals(ctx):
    """R7: registry globals whose NAME equals a CLASS name (e.g. the
    global variable `Stream` @0xAA0468 vs the class `Stream`) poison
    class-typed local declarations: hpp_pilot's collision handling
    degrades the global to void* AND drops the `class Stream;` forward
    declaration, so the body's `Stream * v15;` dies C2065/C2027.

    When the name occurs ONLY in type positions (`NAME *x`) inside this
    body, the "global" was a registry token-scan phantom -- nothing
    reads it as a value.  Dropping it lets the class fwd decl survive;
    a real value-use keeps the current degrade behaviour.
    """
    text = "\n".join(ctx.lines)
    for name in list(ctx.used_globals):
        if name not in ctx.reg.classes:
            continue
        occs = list(re.finditer(r"\b%s\b" % re.escape(name), text))
        if not occs:
            continue
        type_pos = all(
            re.match(r"\s*\*", text[m.end():m.end() + 3]) is not None
            for m in occs)
        if not type_pos:
            continue
        del ctx.used_globals[name]
        ctx.sites.append(Site(
            "global", name,
            "class-name collision; only type-position occurrences here "
            "-> phantom global dropped so `class %s;` fwd survives" % name,
            True))


# ---------------------------------------------------------------- fn-cast calls
#
# R7: function-pointer CAST calls whose cast param list rejects the arg
# forms: `(*(void (__stdcall **)(char *, int, unsigned int))(this->m[0]
# + 8))(&this->m2[4], 0x40000, 0)` -- the cast's `char *` slot vs an
# `&member` arg (C2664 'void (char *,int,unsigned int)' family).  The
# cast only shapes the INDIRECT call: every arg slot is a 4-byte push,
# so relaxing a mismatched param spelling to `void *` is codegen-neutral.

_FNCastCore = re.compile(
    r"\*\s*\(\s*(?P<ret>[A-Za-z_]\w*)\s*\(\s*(?P<cc>__\w+)?\s*\*?\s*\*?\s*\)"
    r"\s*\((?P<ptys>[^()]*)\)\s*\)")


def pass_fncast_harmonize(ctx):
    text = "\n".join(ctx.lines)
    ptr_globals = {n for n, t in (getattr(ctx, "used_globals", None)
                                  or {}).items() if t.endswith("*")}
    locals_ = set(ctx.sig.get("param_names") or [])
    for m in _LOCAL_DECL.finditer(text):
        locals_.add(m.group(1))

    def _arg_ptrish(s):
        # R7.1: scalar results (`*(unsigned int *)(...)` deref, arithmetic)
        # must not force a void* slot -- C2664 TechnoClass::Process.
        return _arg_is_pointerish(s, ptr_globals)

    out = []
    pos = 0
    for m in _FNCastCore.finditer(text):
        if m.start() < pos:
            continue
        # expect: ( EXPR ) ) ( ARGS )
        j = m.end()
        if j >= len(text) or text[j] != "(":
            continue
        ke = _balanced_close(text, j)
        if ke < 0 or ke + 1 >= len(text) or text[ke + 1] != ")":
            continue
        ka = ke + 2
        while ka < len(text) and text[ka].isspace():
            ka += 1
        if ka >= len(text) or text[ka] != "(":
            continue
        ka_open = ka
        ka_close = _balanced_close(text, ka_open)
        if ka_close < 0:
            continue
        args = _split_args(text[ka_open + 1:ka_close])
        ptys = _split_args(m.group("ptys"))
        if len(ptys) != len(args) or not args:
            continue
        new_ptys = []
        hit = False
        for t, a in zip(ptys, args):
            t = t.strip()
            if _arg_ptrish(a) and (
                    t in ("int", "unsigned int", "long", "unsigned long",
                          "short", "unsigned short", "_DWORD", "char",
                          "unsigned char")
                    or (t.endswith("*") and t != "void *")):
                t = "void *"
                hit = True
            new_ptys.append(t)
        if not hit:
            continue
        core = "*(%s (%s**)(%s))" % (m.group("ret"), m.group("cc") or "",
                                     ", ".join(new_ptys))
        out.append(text[pos:m.start()])
        out.append(core)
        pos = m.end()
        ctx.sites.append(Site(
            "callee", m.group(0)[:50],
            "fn-ptr cast params relaxed (ptr-ish args): %s" %
            ", ".join(new_ptys), True))
    out.append(text[pos:])
    if pos:
        ctx.lines = "".join(out).split("\n")


# ---------------------------------------------------------------- local retype
#
# R4: IDA's local declarations are dword-typed (`int v5; // edi`), but the
# body assigns a pointer through an explicit cast (`v5 = (void *)malloc(...)`).
# C++ rejects the assignment (C2440).  When a local receives a `(T *)` cast
# and is declared as int/dword, retype the declaration to `T *`.
_CAST_ASSIGN = re.compile(
    r"\b([A-Za-z_]\w*)\s*=\s*\(\s*"
    r"((?:const\s+)?(?:void|char|unsigned\s+char|signed\s+char|_BYTE|"
    r"unsigned\s+int|int|unsigned\s+long|long|short|unsigned\s+short|"
    r"__int16|__int32|_DWORD|_WORD|float|double|[A-Z]\w*))\s*\*\s*\)")


def pass_local_retype(ctx):
    text = "\n".join(ctx.lines)
    want = {}
    for m in _CAST_ASSIGN.finditer(text):
        var, ty = m.group(1), m.group(2)
        ty = spell_type(ty)
        # R7 shift guard: a value that is EVER shifted (>>/<<) is scalar
        # -- retyping it to a pointer made later shifts illegal
        # (C2296 '>>' on unsigned int*, CaptureManager family)
        if re.search(r"\b%s\s*(?:>>|<<)" % re.escape(var), text):
            continue
        want.setdefault(var, ty + " *")
    # R7 pointer-HEAD assignments: `result = p4 - *p6;` with p4 a
    # ptr-typed param -- the pseudo decls the local as plain int but the
    # RHS IS a pointer expression and later `*result` reads need the
    # pointer type (C2100 illegal indirection, Blit functor family).
    ptr_vars = {}
    for t, n in ctx.sig.get("params_spelled") or []:
        if t.endswith("*"):
            ptr_vars[n] = t
    for dm in re.finditer(
            r"\b([A-Z]\w*)\s*\*\s*([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;", text):
        ptr_vars.setdefault(dm.group(2), dm.group(1) + " *")
    for m in re.finditer(
            r"\b([A-Za-z_]\w*)\s*=\s*([A-Za-z_]\w*)\s*(?:[-+])", text):
        var, head = m.group(1), m.group(2)
        if head not in ptr_vars or var == head or var in ptr_vars:
            continue
        if var in want:
            continue
        # scalar evidence guard: a shifted var is a scalar
        if re.search(r"\b%s\s*(?:>>|<<)" % re.escape(var), text):
            continue
        # pointer-usage evidence: deref or subscript somewhere
        if not (re.search(r"\*\s*%s\b" % re.escape(var), text) or
                re.search(r"\b%s\s*\[" % re.escape(var), text)):
            continue
        pat = re.compile(
            r"\b(?:unsigned\s+)?(?:int|long|__int32|_DWORD)\s+%s\b"
            % re.escape(var))
        if pat.search(text):
            want.setdefault(var, ptr_vars[head])
            ctx.note("local_retype",
                     "%s: dword local -> %s (assigned a pointer-head "
                     "expression; body dereferences it)" % (var,
                                                            ptr_vars[head]))
    if not want:
        return
    changed = 0
    for var, ty in want.items():
        pat = re.compile(
            r"\b(?:unsigned\s+)?(?:int|long|__int32|_DWORD)\s+%s\b"
            % re.escape(var))
        if pat.search(text):
            text = pat.sub("%s %s" % (ty, var), text, count=1)
            ctx.note("local_retype",
                     "%s: dword local -> %s (receives a %s cast)"
                     % (var, ty, ty))
            changed += 1
    if changed:
        ctx.sites.append(Site(
            "local_retype", "%d locals" % changed,
            "declaration retyped to match the cast-assigned pointer", True))
        ctx.lines = text.split("\n")

    # member side: `this->M = <void* local>;` -- the registry record for M
    # says int/dword, the binary stores a pointer there (ctor zeroing of a
    # pointer array: `this->m000 = v5` with v5 from operator new).
    ptr_locals = {v for v, ty in want.items() if ty.endswith("*")}
    if not ptr_locals:
        return
    cls = ctx.sig["cls"]
    for m in re.finditer(r"this->(\w+)\s*=\s*(\w+)\s*;", text):
        mem, var = m.group(1), m.group(2)
        if var not in ptr_locals:
            continue
        off, rec, _src = _member_record_for(ctx, mem)
        if off is None:
            # the body spelling may already be a synthesized view name
            # (`m000`): resolve it by scanning the class's view offsets
            for _o, _roles in ctx.views.scalars.get(cls, {}).items():
                if any(v.get("name") == mem for v in _roles.values()):
                    off = _o
                    break
        if off is None:
            continue
        roles = ctx.views.scalars.get(cls, {}).get(off, {})
        for _role, v in roles.items():
            if v.get("name") == mem and not (v.get("type") or "").endswith("*"):
                # `unsigned char *` (not void *): the body also does byte
                # arithmetic on the slot (`this->M + 4 * i`), which VC6
                # rejects on void* (C2036).  The store gets an explicit
                # cast so the assignment direction stays legal.
                v["type"] = "unsigned char *"
                v["width"] = 4
                v["src"] = "member-ptr-store"
                text = re.sub(
                    r"this->%s\s*=\s*%s\s*;" % (re.escape(mem),
                                                re.escape(var)),
                    "this->%s = (unsigned char *)%s;" % (mem, var),
                    text)
                ctx.sites.append(Site(
                    "member_retype", "this->%s" % mem,
                    "%s@0x%X: dword member <- pointer store -> "
                    "unsigned char *" % (mem, off), True))
                break
    ctx.lines = text.split("\n")


# ---------------------------------------------------------------- assign harmonize
#
# R5: VC6 rejects implicit pointer-spelling conversions that the pseudocode
# implies (all are 4-byte moves; C-style casts are codegen-neutral):
#   ptr-local = global;            (registry typed the global scalar)
#   ptr-local = other-ptr-local [±k];   (different pointee spellings)
#   this->M = expr;                (member view is ptr-typed)

_PTR_LOCAL_DECL = re.compile(
    r"^\s*((?:const\s+)?[A-Za-z_][\w\s]*?)\s*(\*+)\s*([A-Za-z_]\w*)\s*[;\[]",
    re.M)


def pass_assign_harmonize(ctx):
    text = "\n".join(ctx.lines)
    ptr_ty = {}
    for m in _PTR_LOCAL_DECL.finditer(text):
        ty = re.sub(r"\s+", " ", m.group(1)).strip()
        if not ty or ty in ("return", "else"):
            continue
        ptr_ty[m.group(3)] = (ty + " " + m.group(2)).strip()
    changed = 0
    out = []
    for ln in text.split("\n"):
        st = ln.strip()
        # 1/2: ptr-local = RHS;   (scalar-typed global or differing pointee)
        m = re.match(r"^([A-Za-z_]\w*)\s*=\s*(.+?);\s*$", st)
        if m and m.group(1) in ptr_ty and \
                not m.group(2).lstrip().startswith("("):
            rhs = m.group(2).strip()
            rm = re.match(r"^([A-Za-z_]\w*)\s*(?:([+-])\s*(\d+))?$", rhs)
            need = False
            if rm:
                src = rm.group(1)
                gty = ctx.used_globals.get(src)
                if src in ctx.used_globals and not (gty or "").endswith("*"):
                    need = True       # registry typed the global scalar
                elif src in ptr_ty and ptr_ty[src] != ptr_ty[m.group(1)]:
                    need = True       # differing pointee spelling
            if need:
                ty = ptr_ty[m.group(1)]
                ln = ln.replace(st, "%s = (%s)(%s);"
                                % (m.group(1), ty, rhs))
                changed += 1
        # 3: this->M = expr; with ptr-typed view
        m2 = re.match(r"^this->([A-Za-z_]\w*)\s*=\s*(.+?);\s*$", st)
        if m2:
            cls = ctx.sig["cls"]
            mem = m2.group(1)
            rhs = m2.group(2).strip()
            if not rhs.startswith("("):
                for off_roles in ctx.views.scalars.get(cls, {}).values():
                    hit = None
                    for v in off_roles.values():
                        if v.get("name") == mem and \
                                (v.get("type") or "").endswith("*"):
                            hit = v
                            break
                    if hit:
                        ln = ln.replace(
                            st, "this->%s = (%s)(%s);"
                            % (mem, hit["type"], rhs))
                        changed += 1
                        break
            elif re.match(r"^\(\s*(?:void|unsigned char|char|int|long|short)"
                          r"\s*\*?\s*\)", rhs):
                # R5: int-typed view receiving a POINTER-cast store
                # (`this->m0AC = (void *)-1`) -- flip the view to a
                # pointer (4-byte store either way; pilot shell type)
                for off_roles in ctx.views.scalars.get(cls, {}).values():
                    for v in off_roles.values():
                        if v.get("name") == mem and \
                                not (v.get("type") or "").endswith("*"):
                            v["type"] = "void *"
                            v["src"] = "ptr-cast-store"
                            changed += 1
                            break
        out.append(ln)
    if changed:
        ctx.sites.append(Site(
            "assign_harmonize", "%d sites" % changed,
            "pointer-spelling casts inserted at assignments (C2440 family)",
            True))
        ctx.lines = out


# ---------------------------------------------------------------- receiver arith
#
# R6: the registry re-types the receiver as the CLASS, but IDA's pseudocode
# computed `this + K` with its OWN proto typing -- every bare-this+-K export
# examined spells this as `char *this` (scale 1), so the displayed offset is
# in BYTES.  Re-spelled with the class receiver the same text means
# +K*sizeof(cls) -- a semantic corruption AND (usually) a C2440 against the
# char*/uchar*/ushort* local it feeds.  Fix: make the arithmetic explicitly
# byte-based.  Guard: cast-preceded `((T *)this + K)` (IDA's dword-index
# member style, present in byte-exact MATCH functions) is left untouched.

def pass_receiver_arith(ctx):
    text = "\n".join(ctx.lines)
    scale = _this_scale(ctx)
    n = 0
    if scale == 1:
        # R6c: the lookahead `(?:[+-]\s*\S)` matched the ARROW of
        # `this->member` (`-` then `>` = \S) -> every member access in a
        # scale-1 function became `(char *)this ->m`, i.e. a cast on the
        # MEMBER READ (C2440 on int-family members; Movie::SelectNext-
        # BuildableType regression).  Exclude `>` (arrow) and `=`/`+`/`-`
        # (compound ops / sign flips) after the sign.
        pat = re.compile(r"(?<![\)\w\]])this\s*(?=[+-]\s*(?![>=+-])\S)")

        def repl(m):
            nonlocal n
            n += 1
            return "(char *)this "

        out = pat.sub(repl, text)
    else:
        # proto typed this wider than a byte: `this + K` addressed K
        # elements -- re-spell with the byte-true constant.
        def sub_scaled(txt, op):
            pat = re.compile(
                r"(?<![\)\w\]])this\s*([+-])\s*(\d+)")

            def repl(m):
                nonlocal n
                k = int(m.group(2)) * scale
                n += 1
                return "(char *)this %s %d" % (m.group(1), k)

            return pat.sub(repl, txt)
        out = sub_scaled(text, "+")

    if n:
        ctx.sites.append(Site(
            "receiver_arith", "%d sites" % n,
            "bare `this +- K` re-spelled `(char *)this +- K` (IDA proto "
            "this-elem scale %d applied -- class-typed this would scale "
            "by sizeof(cls) and mis-compile)" % scale, True))
        ctx.lines = out.split("\n")


# ---------------------------------------------------------------- assign harmonize 2
#
# R6: C2440 completion.  The pseudocode mixes type spellings freely at
# assignment sites (member dword view <- pointer local, int local <-
# pointer-typed member, `result = this`, split-macro stores, ...).  All are
# 4-byte moves -- an explicit C-style cast to the LHS spelling is what the
# compiler generated implicitly when the spellings happened to agree.  The
# pass builds a light type environment (locals/params/members/globals/
# callees) and wraps ONLY provably-mismatched assignments.

_INT_FAMILY = {
    "int", "unsigned int", "long", "unsigned long", "short",
    "unsigned short", "char", "unsigned char", "signed char", "bool",
    "__int8", "__int16", "__int32", "_DWORD", "_WORD", "_BYTE",
}

# known CRT operator spellings (the body keeps IDA's collapsed form; the
# registry only carries the ??2 new under its mangled key)
_CRT_OPERATOR_TY = {
    "__2_YAPAXI_Z": "void *",     # ??2@YAPAXI@Z operator new(unsigned)
    "__3_YAXPAX_Z": "void",       # ??3@YAXPAX@Z operator delete(void *)
}

_SPLIT_MACROS = ("HIDWORD", "LODWORD", "HIBYTE", "LOBYTE", "BYTE1",
                 "BYTE2", "BYTE3", "BYTE4", "WORD1", "WORD2", "SLOWORD",
                 "SHIWORD")


def _is_ptr_spelling(ty):
    return bool(ty) and ty.endswith("*")


def _ptr_base(ty):
    return ty[:-1].strip() if _is_ptr_spelling(ty) else None


def _compatible_ptr(lbase, rbase):
    """VC6-legal implicit pointer conversions (after which no cast fires)."""
    if lbase == rbase:
        return True
    for b in (lbase, rbase):
        if b in ("void", ""):
            return True
    # char family interconverts with itself in IDA's spellings; C++ needs
    # the cast, so do NOT treat char*/unsigned char* as compatible
    return False


class _TypeEnv(object):
    """name -> era type spelling, gathered from the emitted body + ctx."""

    def __init__(self, ctx, text):
        self.ctx = ctx
        self.map = {}
        # params
        for t, n in (ctx.sig.get("params_spelled") or ctx.sig.get("params")
                     or []):
            self.map[n] = t
        # local decls (star-accurate):  TYPE *name / TYPE name[N] / etc.
        for m in re.finditer(
                r"^\s*(?:const\s+)?([A-Za-z_][\w ]*?)\s*(\**)\s*"
                r"([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*(?:=|;)",
                text, re.M):
            ty = re.sub(r"\s+", " ", m.group(1)).strip()
            stars = m.group(2)
            nm = m.group(3)
            if not ty or ty in ("return", "else", "if", "for", "while",
                                "do", "switch", "case"):
                continue
            self.map[nm] = (ty + " " + stars).strip() if stars else ty
        # globals (registry extern spellings)
        for nm, ty in (getattr(ctx, "used_globals", None) or {}).items():
            self.map.setdefault(nm, ty)
        # member views of the owning class (this->M)
        self.members = {}
        cls = ctx.sig.get("cls")
        for off, roles in (ctx.views.scalars.get(cls) or {}).items():
            for v in roles.values():
                self.members[v["name"]] = v.get("type") or "int"
        for off, arr in (ctx.views.arrays.get(cls) or {}).items():
            self.members[arr["name"]] = (arr.get("elem") or "int") + " *"
        # callee returns: pseudo-sigs (member calls) + extern decls
        self.calls = {}
        for owner, sigs in (getattr(ctx, "used_callees", None) or {}).items():
            for cs in sigs:
                self.calls.setdefault(cs.get("method"), cs.get("ret"))
        for d in getattr(ctx, "used_callee_exts", None) or []:
            m = re.match(r"extern\s+([A-Za-z_][\w \*]*?)\s*"
                         r"(__cdecl\s+|__stdcall\s+|__fastcall\s+)?"
                         r"([A-Za-z_]\w*)\s*\(", d)
            if m:
                self.calls[m.group(3)] = re.sub(r"\s+", " ",
                                                m.group(1)).strip()

    def of(self, name):
        return self.map.get(name)

    def member(self, name):
        return self.members.get(name)

    def call_ret(self, name):
        return self.calls.get(name)


def _rhs_ptr_head(rhs, env):
    """(kind, spelling) head-type of an RHS expression for the mismatch
    rules.  kind: 'ptr' (spelling = full pointer type), 'int', 'float',
    'cls' (class-object cast), None (unknown -- never fires)."""
    s = rhs.strip()
    if not s:
        return None, None
    # string literal -> char*
    if s[0] == '"':
        return "ptr", "char *"
    # cast head
    m = re.match(r"^\(\s*([A-Za-z_][\w]*(?:\s+\w+)?)\s*(\**)\s*\)\s*(.+)$",
                 s, re.S)
    if m:
        base, stars = m.group(1), m.group(2)
        rest = m.group(3).strip()
        if stars:
            return "ptr", re.sub(r"\s+", " ", base) + " " + stars
        # non-pointer cast: (unsigned int)x, (char)x, (Cls)v7 ...
        if base in _INT_FAMILY:
            return "int", base
        if base in ("float", "double", "long double"):
            return "float", base
        if base.startswith("_"):
            return "int", base
        # class-object cast on a value (TabCameoListClass family)
        return "cls", base
    m = re.match(r"^(char|unsigned char|void|int|unsigned int|short|"
                 r"unsigned short|long|float|double|_DWORD|_WORD|_BYTE|"
                 r"_QWORD)\s*\*", s)
    if m:
        return "ptr", s[:s.index("*") + 1].strip()
    # this identity / (char *)this +- ...
    if s == "this":
        return "ptr", (re.sub(r"[^A-Za-z0-9_]", "_",
                              env.ctx.sig.get("cls") or "C") + " *")
    if s.startswith("(char *)this") or s.startswith("this +") or \
            s.startswith("this -"):
        return "ptr", "char *"
    # &expr -> pointer, typed precisely when we know the operand:
    #   &this->m[i]  -> member view elem type (array views are elem-ptr)
    #   &this->m     -> scalar member T  -> T *
    #   &g           -> global/local T   -> T *
    # (was blanket `void *` which silently passed every `char *v =
    # &this->m08[136]` decl-init -- the int-array elem spelling vs the
    # char* LHS never fired; C2440 family.  The wrap is codegen-neutral:
    # both spellings compile to the same `lea`/`mov` of an address.)
    if s.startswith("&"):
        am = re.match(
            r"^&\s*(this->)?([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*$", s)
        if am:
            nm = am.group(2)
            if am.group(1):
                mty = env.member(nm)
                if not mty:
                    return "ptr", "void *"
                if am.group(3):        # &this->m[idx]
                    if _is_ptr_spelling(mty):
                        return "ptr", mty
                    return "ptr", "void *"
                if _is_ptr_spelling(mty):   # &this->m where m is ptr: T **
                    return "ptr", mty + "*"
                return "ptr", mty + " *"
            ty = env.of(nm)
            if ty and not _is_ptr_spelling(ty):
                return "ptr", ty + " *"
        return "ptr", "void *"
    # *expr deref -> int-family head (member-slot read)
    if s.startswith("*"):
        inner = s[1:].strip()
        dm = re.match(r"^\(\s*([A-Za-z_][\w \*]*?)\s*\)", inner)
        if dm and dm.group(1).strip().endswith("*"):
            return "int", "int"     # *(T *)x slot write/read, dword-ish
        return None, None
    # split macros -> int slot
    m = re.match(r"^(%s)\s*\(" % "|".join(_SPLIT_MACROS), s)
    if m:
        return "int", "int"
    # bare identifier head (with optional callee args / arithmetic tail)
    m = re.match(r"^([A-Za-z_]\w*)\s*(?:\([^()]*\))?\s*(?:[+\-][^=].*)?$",
                 s)
    if m:
        nm = m.group(1)
        if nm == "this":
            return "ptr", "char *"
        # callee?
        if re.match(r"^%s\s*\(" % re.escape(nm), s):
            if nm in _CRT_OPERATOR_TY:
                return ("ptr" if _CRT_OPERATOR_TY[nm].endswith("*")
                        else "int"), _CRT_OPERATOR_TY[nm]
            cr = env.call_ret(nm)
            if cr:
                if _is_ptr_spelling(cr):
                    return "ptr", cr
                if cr in _INT_FAMILY or cr in ("void",):
                    return "int", cr
            return None, None
        ty = env.of(nm)
        if ty is None:
            ty = env.member(nm)
        if ty is None:
            return None, None
        if _is_ptr_spelling(ty):
            return "ptr", ty
        if ty in _INT_FAMILY:
            return "int", ty
        if ty in ("float", "double"):
            return "float", ty
        return None, None
    # method-call receivers ->M(...)
    m = re.match(r"^\(?\s*\(.*\)\s*\)?->\s*([A-Za-z_]\w*)\s*\(", s)
    if m:
        cr = env.call_ret(m.group(1))
        if cr:
            if _is_ptr_spelling(cr):
                return "ptr", cr
            if cr in _INT_FAMILY:
                return "int", cr
        return None, None
    # numeric literal
    if re.match(r"^-?\d", s):
        return "int", "int"
    return None, None


_ASSIGN_SITE = re.compile(
    r"(?P<lhs>\*[A-Za-z_]\w*|"
    r"[A-Za-z_][\w]*(?:->[A-Za-z_]\w*(?:\[[^\]]*\])?)?"
    r"(?:\[[^\]]*\])?|"
    r"\*\(.*?\)(?:\s*[A-Za-z_]\w*)?(?:\s*\+\s*\d+)?|"
    r"(?:HIDWORD|LODWORD|HIBYTE|LOBYTE|BYTE[1-4]|WORD[12]|SLOWORD|SHIWORD)"
    r"\s*\([^()]*\))"
    r"\s*(?<![=!<>+\-*/%&|^])=(?!=)\s*"
    r"(?P<rhs>[^;\n]+);")


def pass_assign_harmonize2(ctx):
    text = "\n".join(ctx.lines)
    env = _TypeEnv(ctx, text)
    changed = []

    # R6b: IDA types some register locals as CLASS-OBJECT decls whose
    # every use is scalar (`AudioFileClass v2; // esi` with
    # `*(_DWORD *)&v2 + 36`, `v2 = *this`).  The object decl makes those
    # 4-byte moves ill-typed (C2679/C2440).  When the usage set is
    # provably scalar -- decl / &v / `v =` / `v ==` / `= v` and NOTHING
    # else (no member access, no call args) -- re-spell the decl as
    # `unsigned int` (identical 4-byte storage).
    param_names = set(n for _t, n in (ctx.sig.get("params_spelled")
                                      or ctx.sig.get("params") or []))
    for dm in re.finditer(r"^[ \t]*([A-Za-z_]\w*)\s+([A-Za-z_]\w*)\s*;\s*$",
                          text, re.M):
        ty, nm = dm.group(1), dm.group(2)
        if ty in _INT_FAMILY or ty in ("float", "double", "bool", "void",
                                       "struct", "class", "union", "enum",
                                       "const", "static", "unsigned",
                                       "signed", "register", "volatile",
                                       "return", "else", "if", "for",
                                       "while", "do", "switch", "case"):
            continue
        if nm in param_names or env.of(nm) != ty:
            continue        # shadowed / not a plain local decl
        pn = re.escape(nm)
        probe = text
        probe = re.sub(r"^[ \t]*[A-Za-z_]\w*\s+%s\s*;" % pn, "", probe,
                       flags=re.M)                       # the decl itself
        probe = re.sub(r"(?<![A-Za-z0-9_])&\s*%s\b" % pn, "", probe)
        probe = re.sub(r"(?<![A-Za-z0-9_])%s\s*(?:==|=)" % pn, "", probe)
        probe = re.sub(r"=\s*%s\b" % pn, "", probe)
        if re.search(r"(?<![A-Za-z0-9_])%s\b" % pn, probe):
            continue        # some use is member/call/index shaped: skip
        text = text.replace("%s %s;" % (ty, nm), "unsigned int %s;" % nm, 1)
        env.map[nm] = "unsigned int"
        changed.append("cls-local-descalar@%s(%s)" % (nm, ty))

    def lhs_type(lhs):
        s = lhs.strip()
        # split macro / deref store: int slot
        m = re.match(r"^(?:%s)\s*\(" % "|".join(_SPLIT_MACROS), s)
        if m:
            return "int"
        # `*ident` deref store: one star LESS than the identifier's type
        if re.match(r"^\*[A-Za-z_]\w*$", s):
            base = s[1:].strip()
            ty = env.of(base)
            if ty and _is_ptr_spelling(ty):
                return _ptr_base(ty)
            return None
        if s.startswith("*("):
            cm = re.match(r"^\*\(\s*([A-Za-z_][\w \*]*?)\s*\)", s)
            if cm:
                t = cm.group(1).strip()
                # `*(T *)expr` deref-store: the stored-into type is T
                # (the cast's star is consumed by the deref)
                if t.endswith("*"):
                    t = t[:-1].strip()
                return t
            return "int"
        if s.startswith("this->"):
            mem = s[6:].split("[")[0].strip()
            ty = env.member(mem)
            if "[" in s and ty and _is_ptr_spelling(ty):
                # element access of an array view: the ELEMENT type
                # (`m004[0]` on a `unsigned int *` view is `unsigned int`)
                return _ptr_base(ty)
            return ty
        if "[" in s:
            base = s.split("[")[0].strip()
            ty = env.of(base)
            if ty and _is_ptr_spelling(ty):
                return _ptr_base(ty)
            if ty and not ty.endswith("*"):
                return ty      # int array elem
            return None
        return env.of(s) or env.member(s)

    def wrap_site(m):
        lhs, rhs = m.group("lhs"), m.group("rhs").strip()
        lty = lhs_type(lhs)
        if not lty:
            return m.group(0)
        knd, rsp = _rhs_ptr_head(rhs, env)
        if knd is None:
            return m.group(0)
        # ptr-cast of a numeric literal into an int-family LHS: the cast
        # is decoration on an immediate store (`= (MapClass *)140` family)
        # -- the bare literal is the same mov and needs no fwd decl
        if knd == "ptr" and lty in _INT_FAMILY:
            lm = re.match(r"^\(\s*[A-Za-z_][\w]*\s*\*+\s*\)\s*"
                          r"(\d+|0[xX][0-9A-Fa-f]+)\s*$", rhs)
            if lm:
                changed.append("litcast-strip@%s" % lhs)
                return "%s = %s;" % (lhs, lm.group(1))
        # class-object cast into anything int-ish: re-spell the cast
        # (`v12[23] = (TabCameoListClass)v7` -> `(unsigned int)v7`)
        if knd == "cls" and lty in _INT_FAMILY:
            new_rhs = re.sub(r"^\(\s*[A-Za-z_]\w*\s*\)\s*",
                             "(unsigned int)", rhs)
            changed.append("cls-cast@%s" % lhs)
            return "%s = %s;" % (lhs, new_rhs)
        if knd == "float":
            return m.group(0)
        lptr = _is_ptr_spelling(lty)
        rptr = knd == "ptr"
        if lptr and rptr:
            lb, rb = _ptr_base(lty), _ptr_base(rsp)
            if _compatible_ptr(lb, rb):
                return m.group(0)
            cast = lty
        elif lptr and not rptr:
            cast = lty
        elif not lptr and rptr and lty in _INT_FAMILY:
            cast = "unsigned int"
        else:
            # class-object / float / unknown LHS: never blanket-cast
            return m.group(0)
        # idempotence: RHS already carries exactly this cast
        if rhs.startswith("(%s)" % cast) or rhs.startswith("(%s )" % cast):
            return m.group(0)
        if rhs.startswith("("):
            # a different cast head: only safe rewrites are
            #   (void *)x -> (LHS *)x        [identity for pointers]
            #   (Cls *)const -> wrapped      [handled by generic wrap]
            vm = re.match(r"^\(\s*void\s*\*\s*\)(.+)$", rhs, re.S)
            if vm and lptr and lty != "void *":
                changed.append("voidcast-rebind@%s" % lhs)
                return "%s = (%s)(%s);" % (lhs, lty, vm.group(1).strip())
            # wrap the cast expression wholesale (4-byte value move)
        changed.append("%s<-%s" % (lhs, knd))
        return "%s = (%s)(%s);" % (lhs, cast, rhs)

    out = _ASSIGN_SITE.sub(wrap_site, text)
    if changed:
        ctx.sites.append(Site(
            "assign_harmonize2", "%d sites" % len(changed),
            "type-spelling casts at provably-mismatched assignments "
            "(C2440 completion): %s" % ", ".join(changed[:6]), True))
        ctx.lines = out.split("\n")

    # R6b: pointer COMPARISONS (== / !=).  `*(T **)x + K == &g` compares a
    # T* against a G* (g's global spelling) -- C2446/C2440 family the
    # assignment matcher never sees.  Wrap the &g side with the deref-cast
    # base (codegen-neutral: both sides are `offset`/register compares of
    # the same 4-byte address value).
    cmp_hits = []

    def cmp_wrap(m):
        cast_ty = re.sub(r"\s+", " ", m.group("cast")).strip()
        if not cast_ty.endswith("*"):
            return m.group(0)
        deref = cast_ty[:-1].strip()          # *(T **)x -> T *
        if not deref.endswith("*"):
            return m.group(0)                 # *(T *)x -> T: int cmp, skip
        g = m.group("g")
        gty = env.of(g)
        if not gty or _is_ptr_spelling(gty):
            return m.group(0)
        if _compatible_ptr(deref[:-1].strip(), gty):
            return m.group(0)
        cmp_hits.append("%s cmp&%s" % (g, deref))
        return "%s%s%s (%s)&%s" % (m.group("pre"), m.group("tail"),
                                   m.group("op"), deref, g)

    out2 = _CMP_PTR.sub(cmp_wrap, out)
    if cmp_hits:
        ctx.sites.append(Site(
            "assign_harmonize2_cmp", "%d sites" % len(cmp_hits),
            "pointer-compare re-spell `==/!= &g` with the deref-cast "
            "base (C2446 family): %s" % ", ".join(cmp_hits[:4]), True))
        ctx.lines = out2.split("\n")


_CMP_PTR = re.compile(
    r"(?P<pre>\*\s*\(?\(\s*(?P<cast>[A-Za-z_][\w ]*\*+)\s*\))"
    r"(?P<tail>[\w\.\[\]\(\)\s+\-]*?)"
    r"(?P<op>==|!=)\s*&\s*(?P<g>[A-Za-z_]\w*)")


# ---------------------------------------------------------------- pass 4: scope

def pass_scope_shrink(ctx):
    """Rule 5: decls move to first-def point; decl+init merged; dead decls /
    dead pure stores elided.  Works on the statement tree (flat bodies are
    the common case; nested uses are handled at the top block level)."""
    from pseudo import parse_body, Stmt
    stmts = parse_body(ctx.lines)

    decls = {}
    flow = []
    for st in stmts:
        if st.kind == "decl" and st.decl:
            decls[st.decl["name"]] = st.decl
        else:
            flow.append(st)
    if not decls:
        ctx.stmts = stmts
        return

    def txt_of(st):
        if st.kind == "decl" and st.decl:
            d = st.decl
            s = "%s %s%s" % (d["type"], d["name"], d["array"])
            if d.get("init"):
                s += " = " + d["init"]
            return s
        return st.text or ""

    flow_text = "\n".join(txt_of(st) for st in flow)
    # R4: nested-use guard.  `flow` holds TOP-LEVEL statements only; a body
    # wrapped in one `if`/loop makes every variable look unused here (the
    # header text carries no bodies), which dropped live declarations
    # (Dialog::GrowBuffer `v2 undeclared` family).  Count occurrences in the
    # WHOLE body as the liveness backstop.
    full_text = "\n".join(ctx.lines)
    full_count = {v: len(re.findall(r"\b%s\b" % re.escape(v), full_text))
                  for v in decls}

    # classify each var: first touching flow stmt, def stmts, read count
    # R5: nested-aware.  The first mention may live INSIDE an if/else body
    # (`v4 = ...` in both branches) while the first TOP-LEVEL mention comes
    # after the compound -- the old placement emitted `int v4;` after the
    # uses (C2065 `v4` undeclared, 24-fn family).  Placement now uses the
    # earliest enclosing top-level stmt over the FULL nested text.
    def full_txt_of(st):
        parts = [txt_of(st)]
        stack = list(reversed(st.children or []))
        while stack:
            c = stack.pop()
            parts.append(txt_of(c))
            stack.extend(reversed(c.children or []))
        return "\n".join(parts)

    flow_full = [(st, full_txt_of(st)) for st in flow]
    all_full_text = "\n".join(ft for _st, ft in flow_full)

    info = {}
    for var in decls:
        vpat = re.compile(r"\b%s\b" % re.escape(var))
        vdef = re.compile(r"^%s\s*=[^=]" % re.escape(var))
        first = None
        defs = []
        for st, ft in flow_full:
            t = txt_of(st)
            is_tl_def = bool(vdef.match(t.strip()))
            if first is None and (is_tl_def or vpat.search(t)
                                  or vpat.search(ft)):
                first = st       # earliest mention at ANY depth wins
            if is_tl_def:
                defs.append(st)
        reads = len(vpat.findall(all_full_text))
        for line in all_full_text.split("\n"):
            if vdef.match(line.strip()):
                reads -= 1
        info[var] = {"first": first, "defs": defs, "reads": reads}

    absorbed = set()      # id(stmt) of defs merged into decls
    drop_decls = set()    # var names dropped entirely
    merge_at = {}         # var -> init text absorbed from its def stmt
    # R5: VC6 C2362 -- a `goto` that jumps over a declaration WITH an
    # initializer is illegal.  When the body carries goto labels, keep
    # decls initializer-free (the assignment stays a separate statement;
    # identical codegen).
    has_goto = "goto " in flow_text or "goto" in full_text
    for var in decls:
        if has_goto:
            break
        defs = info[var]["defs"]
        if defs and defs[0].kind == "expr":
            t = txt_of(defs[0]).strip().rstrip(";")
            mm = re.match(r"^%s\s*=\s*(.+)$" % re.escape(var), t)
            if mm:
                merge_at[var] = mm.group(1).strip()

    new_flow = []
    emitted = set()

    def decl_stmt(var):
        nd = Stmt("decl", "")
        nd.decl = dict(decls[var])
        nd.decl["type"] = spell_type(nd.decl["type"])
        nd.decl["init"] = None
        return nd

    for st in flow:
        pending_plain = []
        pending_merged = []
        for var in decls:
            if var in emitted or var in drop_decls:
                continue
            if info[var]["first"] is st:
                # dead store elision: single def, zero reads, pure RHS
                if merge_at.get(var) and info[var]["reads"] == 0 and \
                        len(info[var]["defs"]) == 1:
                    rhs = merge_at[var]
                    if not re.search(r"[^=!<>]=[^=]|\+\+|--|\(", rhs):
                        ctx.note(
                            "dead_store",
                            "%s = %s: assigned never read (pure RHS) -- "
                            "decl+store elided" % (var, rhs))
                        drop_decls.add(var)
                        absorbed.add(id(info[var]["defs"][0]))
                        continue
                nd = decl_stmt(var)
                if merge_at.get(var) and info[var]["defs"][0] is st:
                    nd.decl["init"] = merge_at[var]
                    absorbed.add(id(st))
                    ctx.note("scope_merge",
                             "%s: decl moved to first def + init merged" % var)
                    pending_merged.append(nd)
                else:
                    pending_plain.append(nd)
                emitted.add(var)
        # plain decls first (e.g. BYREF buffers), then merged decl+init
        new_flow.extend(pending_plain)
        new_flow.extend(pending_merged)
        if id(st) not in absorbed:
            new_flow.append(st)

    # vars never touched at all / nested first-use
    for var, d in decls.items():
        if var not in emitted and var not in drop_decls:
            if info[var]["first"] is None:
                if full_count.get(var, 0) > 1:
                    new_flow.insert(0, decl_stmt(var))
                    ctx.note(
                        "scope_hoist",
                        "%s: first use nested (not top level) -- decl "
                        "hoisted to body top" % var)
                else:
                    ctx.note("dead_decl",
                             "%s: never used -- decl dropped" % var)
            else:
                new_flow.insert(0, decl_stmt(var))
                ctx.note("scope_hoist",
                         "%s: first use nested -- decl hoisted to body top"
                         % var)

    ctx.stmts = [st for st in new_flow if id(st) not in absorbed]


def _mk_decl(d):
    from pseudo import Stmt
    nd = Stmt("decl", "")
    nd.decl = dict(d)
    return nd


# ---------------------------------------------------------------- pass 5: era

# residual IDA macros that MUST NOT reach the emitted text (zero-tolerance
# mandate): the narrow passes restore what registry evidence supports; any
# macro still left gets the semantics-preserving arithmetic fallback here.
_RESIDUAL_MACROS = {
    # macro: (width, shift, signed_extract)
    "LOBYTE": (1, 0, False), "HIBYTE": (1, 1, False),
    "BYTE1": (1, 1, False), "BYTE2": (1, 2, False), "BYTE3": (1, 3, False),
    "LOWORD": (2, 0, False), "HIWORD": (2, 2, False), "WORD1": (2, 2, False),
    # CW3-4: 64-bit slice spellings (WORD2 = third word / BYTE4 = fifth
    # byte).  Left unconsumed they became `extern int WORD2(...)` calls
    # -> `WORD2(x) = v` C2106.  Same arithmetic fallback, byte offsets.
    "WORD2": (2, 4, False), "BYTE4": (1, 4, False),
    "SLOWORD": (2, 0, True), "SHIWORD": (2, 2, True),
}

_RESIDUAL_MACRO_CALL = re.compile(
    r"\b(LOBYTE|HIBYTE|BYTE1|BYTE2|BYTE3|BYTE4|LOWORD|HIWORD|WORD1|WORD2|"
    r"SLOWORD|SHIWORD)\(")

_IDA_TYPE_WORDS = [
    (r"\b_QWORD\b", "__int64"), (r"\b_DWORD\b", "unsigned int"),
    (r"\b_WORD\b", "unsigned short"), (r"\b_BYTE\b", "unsigned char"),
    (r"\bunsigned __int16\b", "unsigned short"),
    (r"\bunsigned __int8\b", "unsigned char"),
    (r"\bunsigned __int32\b", "unsigned int"),
    (r"\b__int16\b", "short"), (r"\b__int8\b", "signed char"),
]


def pass_macro_residual_sweep(ctx):
    """Zero-tolerance final sweep for narrow macros the evidence paths did
    not consume: rewrite to arithmetic fallback (S* variants sign-extend)."""
    text = "\n".join(ctx.lines)

    # R7: ancient-til `#NNN` enum-member tokens (`(#375 **)` casts in the
    # raw export -- C2014/C2059).  No preprocessor lines exist in bodies,
    # so a `#digit` token is always this artifact -> neutral `int`.
    text = re.sub(r"#(\d+)(?!\w)", r"/*#\1*/int", text)

    # R7: `va_start(ap, this)` -- the VC6 macro takes the address of its
    # second argument; `this` is a keyword and not addressable
    # (C2102).  The last named parameter is the first stack param.
    if re.search(r"\bva_start\s*\(\s*\w+\s*,\s*this\s*\)", text):
        if "p0" in (ctx.sig.get("param_names") or []):
            text = re.sub(r"\bva_start\s*\(\s*(\w+)\s*,\s*this\s*\)",
                          r"va_start(\1, p0)", text)
        else:
            text = re.sub(r"\bva_start\s*\(\s*(\w+)\s*,\s*this\s*\)",
                          r"((void)(\1))", text)

    # R7: shift of a POINTER-declared local (the raw decl is `_DWORD *vN`
    # but the pseudo shifts the value -- C2296).  Cast the operand for
    # the shift only; the pointer's other uses are untouched.
    _ptr_decl = set()
    for _dm in re.finditer(
            r"\b\w[\w\s]*?\*\s*([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;", text):
        _ptr_decl.add(_dm.group(1))
    if _ptr_decl:
        def _shwrap(m):
            v = m.group(1)
            if v not in _ptr_decl:
                return m.group(0)
            return "(unsigned int)(%s) %s" % (v, m.group(2))
        text = re.sub(r"(?<![\w.>])\b([A-Za-z_]\w*)\s*(<<|>>)",
                      _shwrap, text)

    def splice_macros(text):
        # R5: the OLD re.sub replaced only the matched `MACRO(` span and
        # LEFT THE ARGUMENT TEXT IN PLACE (`LOWORD(x)` -> `((x) & 0xFFFF)x)`)
        # -- unbalanced parens shredded every later statement parse
        # (C2143/C2059 batch family).  Consume the FULL `MACRO(arg)` span.
        out = []
        pos = 0
        for m in _RESIDUAL_MACRO_CALL.finditer(text):
            if m.start() < pos:
                continue
            macro = m.group(1)
            w, sh, sgn = _RESIDUAL_MACROS[macro]
            start = m.end()
            depth = 1
            end = -1
            for i in range(start, len(text)):
                if text[i] == "(":
                    depth += 1
                elif text[i] == ")":
                    depth -= 1
                    if depth == 0:
                        end = i
                        break
            if end < 0:
                continue        # unbalanced: leave untouched
            # CW3-4: store forms are handled upstream and era_types.h spells
            # the macro as an lvalue -- the operator lives AFTER the closing
            # paren (`LOBYTE(v5) = ...`), so the old check (taken right after
            # the '(' ) never skipped a store and rewrote it into the
            # non-lvalue `((v5) & 0xFF) = ...` (C2106 batch family).
            if re.match(r"^\s*[+\-*/|&^%]?=(?!=)",
                        text[end + 1:end + 5]):
                continue
            arg = text[start:end]
            mask = "0xFF" if w == 1 else "0xFFFF"
            rep = "((%s) & %s)" % (arg, mask) if not sh else \
                "((%s >> %d) & %s)" % (arg, 8 * sh, mask)
            if sgn:
                rep = "(short)(%s)" % rep
            ctx.sites.append(Site(
                "intrinsic", "%s(%s)" % (macro, arg[:60]),
                "RESIDUAL SWEEP: no evidence path consumed it -> arithmetic "
                "fallback (zero-tolerance)", False))
            out.append(text[pos:m.start()])
            out.append(rep)
            pos = end + 1
        out.append(text[pos:])
        return "".join(out)

    text = splice_macros(text)
    ctx.lines = text.split("\n")


def _cbrace_close(text, open_idx, ch_open="{", ch_close="}"):
    """Index of the matching close for text[open_idx], -1 when unbalanced."""
    depth = 0
    for k in range(open_idx, len(text)):
        c = text[k]
        if c == ch_open:
            depth += 1
        elif c == ch_close:
            depth -= 1
            if depth == 0:
                return k
    return -1


def _tail_ifelse_parts(lines):
    """Split `PREFIX; if (C) { A } else { B }` into its pieces.

    Returns (prefix_lines, indent, cond, then_body, else_body) or None.
    The if/else must be the LAST top-level construct and both arms must
    terminate with `return` (semantic equivalence of the guard rewrite).
    """
    text = "\n".join(lines)
    starts = [k for k, ln in enumerate(lines) if re.match(r"^\s*if\s*\(", ln)]
    for k in reversed(starts):
        sub = "\n".join(lines[k:])
        m = re.match(r"(\s*)if\s*\(", sub)
        if not m:
            continue
        ind = m.group(1)
        p_open = m.end() - 1
        p_close = _cbrace_close(sub, p_open, "(", ")")
        if p_close < 0:
            continue
        cond = sub[p_open + 1:p_close].strip()
        rest = sub[p_close + 1:]
        b_open = rest.find("{")
        if b_open < 0 or rest[:b_open].strip():
            continue
        b_close = _cbrace_close(rest, b_open)
        if b_close < 0:
            continue
        then_body = rest[b_open + 1:b_close]
        after = rest[b_close + 1:]
        if not re.match(r"\s*else\s*\{", after):
            continue
        e_open = after.find("{")
        e_close = _cbrace_close(after, e_open)
        if e_close < 0 or after[e_close + 1:].strip():
            continue
        else_body = after[e_open + 1:e_close]

        def _ret_tail(t):
            ls = [x for x in t.split("\n") if x.strip()]
            return bool(ls) and ls[-1].strip().startswith("return")

        if not (_ret_tail(then_body) and _ret_tail(else_body)):
            continue
        return (lines[:k], ind, cond, then_body.strip("\n"),
                else_body.strip("\n"))
    return None


_JCC_ALIAS = {
    "jz": "je", "jnz": "jne", "jnae": "jb", "jc": "jb",
    "jnb": "jae", "jnc": "jae", "jnbe": "ja", "jna": "jbe",
    "jnge": "jl", "jnl": "jge", "jnle": "jg", "jng": "jle",
    "jpe": "jp", "jpo": "jnp",
}


def _first_jcc(disasm_lines):
    """First conditional jump of the original binary, canonical spelling."""
    for ln in disasm_lines:
        m = re.match(r"^\w+:\s+(j\w+)", ln.strip())
        if not m:
            continue
        mn = m.group(1)
        if mn == "jmp":
            continue
        return _JCC_ALIAS.get(mn, mn)
    return None


# jcc lowered by `if (C) {A} else {B}` for each top-level C form.
# Both signedness spellings are accepted; the guard form's jcc is the
# complement within the SAME family (see CW4 evidence, report_cw4.md).
_IFELSE_JCC = {
    ">":  ("jle", "jbe"),
    ">=": ("jl", "jb"),
    "<":  ("jge", "jae"),
    "<=": ("jg", "ja"),
    "==": ("jne",),
    "!=": ("je",),
}
_GUARD_JCC = {
    ">":  ("jg", "ja"),
    ">=": ("jge", "jae"),
    "<":  ("jl", "jb"),
    "<=": ("jle", "jbe"),
    "==": ("je",),
    "!=": ("jne",),
}


def _top_cmp_op(cond):
    """Top-level comparison operator of cond (None when not a comparison)."""
    depth = 0
    i = 0
    while i < len(cond):
        c = cond[i]
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
        elif cond.startswith("->", i):
            i += 2
            continue
        elif depth == 0:
            for op in ("==", "!=", "<=", ">="):
                if cond.startswith(op, i):
                    return op
            if c in "<>":
                return c
        i += 1
    return None


def pass_branch_polarity(ctx):
    """if/else -> negated-guard form when the ORIGINAL binary's first jcc
    is the guard polarity.

    CW4 correction (2026-11-12): the old transform emitted
    `if (c) { A } B`, which compiles to the SAME `je`-family layout as the
    if/else it replaced -- a codegen no-op (A-layer census: all 313
    JCC_INVERT functions still emitted the if/else polarity).  The
    original source form for the opposite polarity is the NEGATED guard:

        if (C) { return A; } else { return B; }
            ->  if (!(C)) { return B; } return A;

    Verified by CW4 auto-trial on the A layer: 313/342 JCC_INVERT+PLUS
    byte MATCH with exactly this body (report_cw4.md).

    Polarity model (deterministic, no trial): compute the jcc that the
    current if/else form lowers to for condition C, and the jcc of the
    negated guard form.  Apply only when the ORIGINAL's first jcc is the
    guard polarity (both signed and unsigned spellings accepted).
    Semantic-equivalence precondition: both arms end with `return`."""
    parts = _tail_ifelse_parts(ctx.lines)
    if not parts:
        return
    prefix, ind, cond, then_body, else_body = parts
    jcc = _first_jcc(ctx.ex.disasm_lines)
    if not jcc:
        return
    op = _top_cmp_op(cond)
    if op in _GUARD_JCC:
        want = _GUARD_JCC[op]
    elif cond.startswith("!") and not cond.startswith("!="):
        want = ("je",)                  # if (!x) A else B -> guard if (x) B A
    else:
        want = ("jne",)                 # zero test -> guard jne
    if jcc not in want:
        return                          # keep the if/else form
    new = [ln for ln in prefix]
    pad = ind or "    "
    new.append("%sif ( !(%s) )" % (pad, cond))
    new.append("%s{" % pad)
    new.extend(else_body.split("\n"))
    new.append("%s}" % pad)
    new.extend(then_body.split("\n"))
    ctx.lines = new
    ctx.note("branch_polarity",
             "if/else -> negated guard form (orig first jcc is %s)" % jcc)

def pass_ret_view_align(ctx):
    """`return this->M;` where the registry says int-family return but the
    recorded member view is pointer-typed: the FUNCTION's return type is
    signature-authoritative -- retype the view (C2440 family).

    Extended: pointer-typed views used in INTEGER arithmetic contexts
    (`int - this->Items`, `this->Capacity >> 3`, `int v = this->M`) --
    the registry ptr spelling loses to the body's int usage (C2113/C2440
    batch families)."""
    cls = ctx.sig["cls"]
    text = "\n".join(ctx.lines)
    views_for = ctx.views.scalars.get(cls, {})
    for off_roles in views_for.values():
        for role, v in list(off_roles.items()):
            if not (v["type"] or "").endswith("*"):
                continue
            if v.get("src") == "member-ptr-store":
                # R4: this view was retyped from a pointer STORE; the
                # arithmetic use is pointer arithmetic on that pointer
                # (the assignment carries its own cast)
                continue
            mem = v["name"]
            pat = r"this->%s\b" % re.escape(mem)
            # R7: `&this->member` (address-of, incl. `(T *)&pat` cast
            # forms) is POINTER evidence; only a real bitwise `x & pat`
            # (bare ident on the left) is int evidence.  Right-side minus
            # guards the arrow `->`.
            arith = re.search(
                r"([\w]\s*&\s*%s)|([\-+*/%%|^]\s*%s)"
                r"|(%s\s*(?:[-+*/%%&|^](?!>)))|(%s\s*(?:<<|>>))"
                r"|(int \w+ = %s)"
                % (pat, pat, pat, pat, pat), text)
            ret_int = (ctx.sig.get("ret") or "")
            ret_use = re.search(r"return\s+%s\s*;" % pat, text) \
                and not ret_int.endswith("*") and ret_int not in ("void",)
            if arith or ret_use:
                v["type"] = "unsigned int"
                v["width"] = 4
                v["src"] = "view-type-align"
                ctx.note("view_type_align",
                         "%s view retyped void*->unsigned int (int usage "
                         "context)" % mem)


def pass_era_normalize(ctx):
    """Final textual cleanup for era C++ (VC6-safe, C-style casts only)."""
    from pseudo import render
    text = "\n".join(render(ctx.stmts)) if ctx.stmts is not None \
        else "\n".join(ctx.lines)
    # R4: VC6 rejects `__thiscall` in a fn-pointer CAST TYPE (C4234); the
    # pseudo's dispatch casts spell it.  The call shape is what matters for
    # compilation -- the keyword inside a cast does not change codegen here,
    # __stdcall compiles.
    text = text.replace("__thiscall", "__stdcall")
    # CW2: IDA register annotations (`double@<st0>`, `char@<cf>`) anywhere
    # in the body/decls are not C++ (C2018 unknown character '0x40').
    text = re.sub(r"@<[^>]*>", "", text)
    # CW2: namespace-qualified class spellings (`struct Concurrency::
    # ISchedulerProxy *`) name types no pilot hpp declares (C2653).  The
    # pointer width is the ABI truth, so degrade the cast spelling.
    text = re.sub(
        r"\(\s*(?:struct|class)\s+[A-Za-z_]\w*::[A-Za-z_]\w*\s*\*+\s*\)",
        "(void *)", text)
    # CW3-4: VC6 has no `LL`/`ULL` literal suffixes (C2059 bad suffix on
    # number).  IDA's 64-bit magic-constant divisions carry them; spell the
    # same value with a C-style cast instead (codegen-identical constant).
    text = re.sub(r"\b(\d+)ULL\b", r"(unsigned __int64)\1", text)
    text = re.sub(r"\b(\d+)LL\b", r"(__int64)\1", text)
    # CW2: IDA renders a vtable install as `&Class::`vftable'` -- the
    # backtick spelling is not C++ (C2018).  Pilot shells carry no vtable
    # object, so the install value degrades to 0 (address constant only).
    # CW3-2: template instantiations spell their arguments
    # (`VectorClass<int>::`vftable'`, `VectorClass<TechnoClass *>::...`) --
    # the old identifier-only pattern stopped at `<` (C2065/C2275/C2018
    # family, 102 functions).  Allow balanced `<...>` groups per segment.
    text = re.sub(
        r"&\s*[A-Za-z_]\w*(?:\s*<[^<>]*>)?"
        r"(?:::[A-Za-z_]\w*(?:\s*<[^<>]*>)?)*::`vftable'",
        "0", text)
    # CW3-3: `(int)((x))` double-paren cleanup -- but NEVER when the inner
    # expression starts with a POINTER cast: `(int)((char **)&G)[1]` is an
    # int context around a pointer element and dropping the cast turned it
    # into `char * < int` (C2446 BuildingClass family).
    text = re.sub(
        r"\(int\)\s*\(\((?!\s*(?:const\s+)?(?:struct\s+|class\s+)?"
        r"(?:char|unsigned|signed|void|int|long|short|float|double)\s*\*+)",
        "((", text)
    text = text.replace("(unsigned __int8 *)", "(unsigned char*)")
    text = text.replace("(__int8 *)", "(char*)")
    text = re.sub(r"(\W)!\s*(\w+)(\s*[;&|)]|$)", r"\1\2 == 0\3", text)
    # IDA type spellings must not survive into era C++ (C2065 family):
    # pure alias-level rewrite, no semantics change
    for pat, sp in _IDA_TYPE_WORDS:
        text = re.sub(pat, sp, text)
    # whole-object zero init (ctor pattern): `*this = 0;` -> memset
    text = text.replace("*this = 0;", "memset(this, 0, sizeof(*this));")
    # R5: parser double-else corruption leaves dead `else { }` blocks that
    # are illegal without a matching if (C2181) -- scrub empty else arms
    text = re.sub(r"else\s*\{\s*\}", "", text)
    # R5: blanket return cast to the signature's return type -- pointer /
    # int return-value disagreements between proto spellings were C2440
    # batch families (`return p0;` int* vs unsigned int* ret).  The cast
    # is the same conversion the compiler applied implicitly when legal.
    ret_ty = ctx.sig.get("ret") or "int"
    if ret_ty != "void":
        def _ret_wrap(m):
            expr = m.group(2).strip().rstrip(";").rstrip()
            if not expr:
                return m.group(0)
            return "%sreturn (%s)(%s);" % (m.group(1), ret_ty, expr)
        text = re.sub(r"^(\s*)return\s+(.+?);\s*$", _ret_wrap, text,
                      flags=re.M)
    # R5: CRT string family rejects unsigned char* args (C2664 strcpy
    # family).  Wrap every top-level arg in an explicit (char *) cast --
    # identity on char*, legal coercion on unsigned char* / void*.
    text = _crt_string_casts(text)
    ctx.lines = text.split("\n")
    ctx.stmts = None   # lines are authoritative post-normalization


_CRT_STR_FNS = ("strcpy", "strcat", "strcmp", "strlen", "strncpy",
                "strncmp", "strchr", "strrchr", "strstr", "strupr",
                "strlwr", "strdup")

# CW5-2: which argument positions of the char* family actually take a
# char*.  The old blanket cast also wrapped the `size_t n` slot of
# strncpy/strncmp and the `int c` slot of strchr/strrchr -- `(char *)(4u)`
# then failed the real prototype (C2664 'char *' -> 'unsigned int').
_CRT_STR_CHAR_POS = {
    "strcpy": (0, 1), "strcat": (0, 1), "strcmp": (0, 1),
    "strlen": (0,), "strncpy": (0, 1), "strncmp": (0, 1),
    "strchr": (0,), "strrchr": (0,), "strstr": (0, 1),
    "strupr": (0,), "strlwr": (0,), "strdup": (0,),
}


def _crt_string_casts(text):
    """Fixed-arity char* CRT family only (sprintf's variadic tail would be
    corrupted by blanket casts)."""
    for fn in _CRT_STR_FNS:
        _pos_ok = _CRT_STR_CHAR_POS.get(fn)
        pat = re.compile(r"\b%s\s*\(" % fn)
        out = []
        pos = 0
        for m in pat.finditer(text):
            if m.start() < pos:
                continue
            op = m.end() - 1
            cl = _balanced_close(text, op)
            if cl < 0:
                continue
            inner = text[op + 1:cl]
            if not inner.strip():
                continue
            # split top-level commas
            args = []
            depth = 0
            cur = []
            for ch in inner:
                if ch in "([":
                    depth += 1
                elif ch in ")]":
                    depth -= 1
                if ch == "," and depth == 0:
                    args.append("".join(cur))
                    cur = []
                else:
                    cur.append(ch)
            args.append("".join(cur))
            new_args = []
            for _ai, a in enumerate(args):
                a2 = a.strip()
                if (not a2 or a2.startswith("(") or
                        (_pos_ok is not None and _ai not in _pos_ok)):
                    new_args.append(a)
                    continue
                new_args.append("(char *)(%s)" % a2)
            out.append(text[pos:m.start()])
            out.append("%s(%s)" % (fn, ", ".join(new_args)))
            pos = cl + 1
        out.append(text[pos:])
        text = "".join(out)
    return text


# ---------------------------------------------------------------- pass: callees
#
# R3 non-leaf expansion: qualified call sites in the pseudocode
# (`return SidebarClass::InitButtons((TabClass *)this);` -- the tail-jmp
# thunk family) need declarations the unit hpp does not carry.  For each
# call the registry supplies the callee signature; thiscall members are
# re-rendered as receiver calls (`((Owner *)arg0)->Method(rest)`) and a
# pseudo-sig is recorded so the hpp declares the method on a stub class.

_QUAL_CALL = re.compile(
    r"\b(?P<qual>[A-Za-z_]\w*(?:::[A-Za-z_]\w*)+)\s*\((?P<args>[^;]*?)\)"
    r"(?=[;\s,)]|$])")


def _proto_ret_void(proto):
    """True when the export prototype's return type spells `void`."""
    p = (proto or "").strip()
    for c in ("__thiscall", "__stdcall", "__cdecl", "__fastcall",
              "__userpurge"):
        p = p.replace(c, " ")
    m = re.match(r"^(.*?)\s*\(", p)
    return bool(m) and m.group(1).strip() == "void"

# CW2: _CALL_KEYWORDS is defined once near pass_unknown_symbols -- the old
# duplicate here shadowed it at import time and lost else/do/new/delete.


def _split_args(argstr):
    if not argstr.strip():
        return []
    out, depth, cur = [], 0, []
    for ch in argstr:
        if ch in "([":
            depth += 1
        elif ch in ")]":
            depth -= 1
        if ch == "," and depth == 0:
            out.append("".join(cur).strip())
            cur = []
        else:
            cur.append(ch)
    out.append("".join(cur).strip())
    return out


def _strip_outer_parens(s):
    """`((a + b))` -> `a + b` (only balanced outermost pairs)."""
    s = s.strip()
    while len(s) > 2 and s.startswith("(") and s.endswith(")"):
        depth = 0
        closed_early = False
        for i, ch in enumerate(s):
            if ch == "(":
                depth += 1
            elif ch == ")":
                depth -= 1
                if depth == 0 and i != len(s) - 1:
                    closed_early = True
                    break
        if closed_early or depth != 0:
            break
        s = s[1:-1].strip()
    return s


_SCALAR_CAST = re.compile(
    r"^\(\s*(?:unsigned\s+|signed\s+)?"
    r"(?:int|long|short|char|_DWORD|_WORD|_BYTE|float|double|bool|"
    r"__int(?:8|16|32|64))\s*\)")

_SCALAR_TYS = {
    "int", "unsigned", "unsigned int", "signed int", "char",
    "unsigned char", "signed char", "short", "unsigned short",
    "long", "unsigned long", "float", "double", "bool",
    "_DWORD", "_WORD", "_BYTE", "__int8", "__int16", "__int32",
    "__int64", "unsigned __int8", "unsigned __int16",
    "unsigned __int32", "unsigned __int64",
}

# CW2: era_types.h names whose typedef IS a pointer (`typedef void *HWND`).
# A cast to one of these yields a pointer value even when the expression
# has no other pointer evidence: `(HWND)this` / `(LPPOINT)&Rect` used to
# stay in an `int` extern slot -> C2664 on MoveWindow/ClientToScreen.
_PTR_TY_NAMES = {
    "LPVOID", "LPCVOID", "LPSTR", "LPCSTR", "LPWSTR", "LPCWSTR", "BSTR",
    "LPCOLESTR", "PCNZWCH", "LPCCH", "LPBYTE", "LPDWORD", "LPLONG",
    "LPGUID", "LPUNKNOWN", "LPPOINT", "LPRECT", "LPMSG",
    "LPCRITICAL_SECTION", "LPSECURITY_ATTRIBUTES", "LPTEXTMETRICA",
    "LPSTREAM", "LPDIRECTDRAW", "LPDIRECTDRAWSURFACE",
    "LPDIRECTDRAWPALETTE", "LPDIRECTDRAWCLIPPER", "LPCDLGTEMPLATEA",
    "LPLOGFONTA", "PHKEY", "LPCLSID", "LPWORD", "FARPROC", "DLGPROC",
    "HWND", "HINSTANCE", "HDC", "HGDIOBJ", "HGLOBAL", "HLOCAL", "HMODULE",
    "HANDLE", "HBRUSH", "HPEN", "HFONT", "HBITMAP", "HICON", "HCURSOR",
    "HMENU", "HKEY", "HRGN", "HRSRC", "HIMC", "HKL",
}


def _arg_is_pointerish(s, ptr_names=None):
    """R7.1: does this call ARGUMENT carry a pointer form?

    The R7 relax marked every `->`/`&`-containing expression as pointer
    and flipped the callee param slot to `void *` -- but `this->m - 1`,
    `(int)this->m` and `(x >> 16) & 0xFF` are SCALARS, and the slot then
    rejects them (C2664 'cannot convert from int/unsigned int to
    void *': MPCooperative::Revert / Movie::SelectNextBuildableType /
    TacticalClass::DrawCellTerrainOverlay).  Rules:
      * explicit scalar cast head is authoritative -- scalar;
      * top-level arithmetic (`+ - * / % & | ^ << >>`) yields a scalar
        unless its left operand is a known pointer name (`p + 1`);
      * a leading deref of a scalar-typed pointer (`*(unsigned int *)x`)
        yields that scalar; a class-typed pointee stays a pointer.
    """
    s = (s or "").strip()
    names = ptr_names or set()
    if not s:
        return False
    if s in names or s == "this":
        return True
    s2 = _strip_outer_parens(s)
    if s2 != s:
        return _arg_is_pointerish(s2, names)
    if _SCALAR_CAST.match(s):
        return False
    # CW2: an explicit cast to a POINTER spelling yields a pointer value
    # (`(HWND)this`, `(LPPOINT)&Rect`, `(char *)&buf`).  The cast head is
    # authoritative for pointer-ness just as _SCALAR_CAST is for scalars.
    m = re.match(r"^\(\s*(?:const\s+)?(?:struct\s+|class\s+)?"
                 r"([A-Za-z_]\w*)\s*(\*+)?\s*\)", s)
    if m:
        if m.group(2):
            return True
        if m.group(1) in _PTR_TY_NAMES:
            return True
    # address-of is pointer evidence even when its operand ends with a
    # subscript (`&this->m134[4]` -- MapClass::FreeAllCells fncast slot)
    if s.startswith("&") and not s.startswith("&&"):
        return True
    m = re.match(r"^\*\s*\(\s*((?:unsigned\s+|signed\s+)?[A-Za-z_]\w*)"
                 r"\s*\*\s*\)", s)
    if m:
        return m.group(1).strip() not in _SCALAR_TYS
    # R7.1: a top-level SUBSCRIPT yields an ELEMENT, not array decay
    # (`SHIBYTE(this->visibleCells[13])` -- the member is an int array;
    # marking it void* made the macro-ish callee reject an int arg,
    # C2664 TacticalClass::DrawCellTerrainOverlay).  The element's own
    # pointer-ness is unknowable at text level -- do not claim pointer.
    # CW3: EXCEPT when the subscripted expression is a pointer-to-pointer
    # cast: `((char **)&G)[i]` is a `char *` element (the `.vfptr[K]`
    # array-slot spelling) and an int slot rejects it (C2664).
    m = re.match(r"^\(\s*\(\s*(?:const\s+)?(?:struct\s+|class\s+)?"
                 r"[A-Za-z_]\w*\s*(\*{2,})\s*\)[^()]*\)\s*\[", s)
    if m:
        return True
    if s.endswith("]"):
        return False
    depth = 0
    i = 0
    while i < len(s):
        c = s[i]
        if c in "([":
            depth += 1
        elif c in ")]":
            depth -= 1
        elif depth == 0:
            two = s[i:i + 2]
            if two in ("<<", ">>"):
                return False          # shift result is scalar
            if two == "->":
                i += 2
                continue              # member arrow: not subtraction
            if c in "+-*/%&|^":
                if c in "+-" and i > 0:
                    lm = re.search(r"([A-Za-z_]\w*)\s*$", s[:i])
                    if lm and lm.group(1) in names:
                        return True   # known pointer arithmetic stays ptr
                if c in "&*" and i == 0:
                    pass              # address-of / deref head
                else:
                    return False      # top-level arithmetic: scalar
        i += 1
    if "->" in s or "&" in s:
        return True
    if re.match(r"^\(\s*[\w\s]+\s*\*\s*\)", s):
        return True                   # cast-form receiver `(T *)...`
    return False


def pass_callees(ctx):
    """Declare + rewrite qualified call sites (R3 non-leaf support).

    Emits are collected, not applied here:
      ctx.used_callees     -- {owner_cls: [pseudo_sig,...]} (member calls;
                              batch_run/decompile.main inject these into
                              the unit's by_cls so hpp_pilot declares them)
      ctx.used_callee_exts -- [extern declaration lines] (global/static)
    """
    if not hasattr(ctx, "used_callees"):
        ctx.used_callees = {}
        ctx.used_callee_exts = []
    text = "\n".join(ctx.lines)

    # R7.1: registry-backed member classification for `this->NAME` args.
    # A bare member chain is NOT pointer evidence by itself: HouseClass::
    # Find's `this->preferredTargetType` is an int32_t member and the
    # R7 relax flipped FindSWTarget's int slot to void* (C2664).
    _this_cls = ctx.sig.get("cls")

    def _this_member_scalar(mem):
        """True/False when the registry knows this->MEM's pointer-ness;
        None when unknown (then the generic text heuristic decides)."""
        if not _this_cls:
            return None
        r = ctx.reg.member_offset_by_ida_name(_this_cls, mem)
        if r is None or r[0] is None:
            inh = getattr(ctx.reg, "member_offset_inherited", None)
            if inh is not None:
                r = inh(_this_cls, mem)
        if r is None or r[0] is None:
            return None
        ty = (r[1] or {}).get("type")
        if not ty:
            return None
        return not spell_type(ty).endswith("*")

    def _arg_ptrish_ctx(a, names):
        s = (a or "").strip()
        m = re.match(r"^this->([A-Za-z_]\w*)$", s)
        if m:
            sc = _this_member_scalar(m.group(1))
            if sc is not None:
                return not sc
        return _arg_is_pointerish(s, names)
    # R5: the old lazy-regex args capture stopped at the FIRST `)` --
    # nested-paren arguments were truncated and the replacement left the
    # stray closer glued after the call (`(T *)(recv)->M()` mis-parse
    # family, C2440 AudioController*->int).  Balanced scan instead.
    pos = 0
    segs = []
    for m in re.finditer(
            r"\b(?P<qual>[A-Za-z_]\w*(?:::[A-Za-z_]\w*)+)\s*\(", text):
        if m.start() < pos:
            continue
        qual = m.group("qual")
        head = qual.split("::")[0]
        if head in _CALL_KEYWORDS:
            continue
        if qual == "%s::%s" % (ctx.sig.get("cls"), ctx.sig.get("method")):
            continue
        op = m.end() - 1
        cl = _balanced_close(text, op)
        if cl < 0:
            continue
        args = _split_args(text[op + 1:cl])
        full_span = (m.start(), cl + 1)
        pos = cl + 1
        segs.append((full_span, qual, args))
    for (s, e), qual, args in reversed(segs):
        addr, rec = ctx.reg.function_by_name(qual)
        owner = qual.rsplit("::", 1)[0] if "::" in qual else None
        method = qual.rsplit("::", 1)[-1]
        # CW3-5 (F3): `Class::Method(args)` was ALWAYS rendered as a member
        # call whenever the registry had a cls -- including helper
        # pseudo-classes that only name a family of free functions.  Math is
        # the canonical case: size=0/no vtable, cc=unknown, one double
        # param, called `Math::RoundToInt(expr)`.  The old member path
        # treated `expr` as the RECEIVER -> `((Math *)(double))->RoundToInt()`
        # (C2440, 61 first-errors).  Receiver evidence is required now:
        # a size-0/no-vtable class whose registry convention is `unknown`
        # never owns a receiver; emit the free `Owner__Method(args)` form.
        _rec_cls = (rec or {}).get("cls")
        _clsrec = (ctx.reg.classes.get(_rec_cls) or {}) if _rec_cls else {}
        _helper_cls = not (_clsrec.get("size") or _clsrec.get("vtable"))
        _force_free = (_helper_cls and
                       str((rec or {}).get("cc") or "").lower() in
                       ("unknown", ""))
        if rec is not None and rec.get("cls") and not _force_free and \
                str(rec.get("cc") or "thiscall") in (
                    "thiscall", "__fastcall", "__stdcall", "unknown", None,
                    "__thiscall"):
            cc = {"fastcall": "__fastcall", "stdcall": "__stdcall"}.get(
                rec.get("cc") or "thiscall",
                rec.get("cc") or "thiscall")
            if cc in ("unknown", "__thiscall"):
                cc = ""      # member: default convention IS thiscall
            owner_cls = owner
            rret = spell_type(rec.get("ret") or "int")
            rparams = [(spell_type(p.get("type") or "int"),
                        p.get("name") or "p%d" % i)
                       for i, p in enumerate(rec.get("params") or [])]
            if len(rparams) != len(args) - 1:
                rparams = [("int", "p%d" % i)
                           for i in range(max(0, len(args) - 1))]
            else:
                # R5: decl-only stub params accept ANY pointer arg
                # (unsigned char* local -> char* param was C2664)
                rparams = [("void *" if t.endswith("*") and
                            t != "void *" else t, n)
                           for t, n in rparams]
            # R7 supply-side (BOTH the registry-hit and the arity-reset
            # path -- Building__GetFoundationSize(int[4]) hits the reset
            # path): (a) fn-type param spellings from the registry
            # (`int (int)`) are not declarable in a VC6 prototype -- a
            # void* slot accepts any fn-ptr arg; (b) arg-driven relax:
            # a POINTER-ISH argument (cast / arrow / address-of / array
            # decay / our own ptr params) can never land in an int-family
            # slot (C2664 AnimClass* -> int family) nor in an unrelated
            # base (int* -> char* family).  The stub is decl-only, so a
            # void* slot is codegen-neutral at this probe stage.
            sig_ptys_ = {}
            # CW5-1: global pointer names are pointer-shaped arguments too
            # (`g_DSurface_Primary` fell to an int slot -> C2664).
            ptr_params_ = set(_ctx_ptr_names(ctx, text))
            for t, n in ctx.sig.get("params_spelled") or []:
                sig_ptys_[n] = t
                if t.endswith("*"):
                    ptr_params_.add(n)

            def _arg_ptrish(a):
                # R7.1: scalar-form expressions (`(int)x`, `x - 1`,
                # `(x >> 16) & 0xFF`) never force a void* slot --
                # see _arg_is_pointerish; bare `this->NAME` consults the
                # registry member table first.
                return _arg_ptrish_ctx(a, ptr_params_)

            def _relax(t, a):
                """Pointer/arity relaxation of a decl-only stub slot."""
                if "(" in t:
                    return "void *"
                if not _arg_ptrish(a):
                    return t
                if t.endswith("*") and t != "void *":
                    # CW5-4: keep const through the relaxation (`Copy`
                    # takes a `const char *`; a plain void* slot lost it)
                    return ("const void *" if "const" in a else "void *")
                if t in ("int", "unsigned int", "long", "unsigned long",
                         "short", "unsigned short", "_DWORD"):
                    return "void *"
                return t

            rparams = [(_relax(t, args[i + 1]), n)
                       for i, (t, n) in enumerate(rparams)]
            # CW5-1: type the call-site arguments to the stub slots --
            # pointer<->int32 casts are codegen-neutral on x86-32.
            _syms = _cw5_sym_types(ctx, text)
            _rest_args, _nco = _cw5_coerce_inner(
                ", ".join(args[1:]), [t for t, _ in rparams], _syms, ctx)
            recv = args[0] if args else "this"
            rcm = re.match(r"^\(\s*\w+\s*\*\s*\)\s*(.+)$", recv)
            if rcm:
                recv = rcm.group(1)
            rest = _rest_args
            _own = re.sub(r"[^A-Za-z0-9_]", "_", str(owner_cls))
            # CW5-12: a helper pseudo-class whose name is ALSO a free
            # function (`DeleteAndZero`) is hidden by that declaration --
            # the elaborated specifier keeps the cast legal (verified on
            # the era compiler: `(class X *)` compiles, `(X *)` C2059).
            _collide = ((_own in _registry_fn_names(ctx.reg)) or
                        (_own in (getattr(ctx, "used_globals", None) or {})))
            emit = "((%s%s *)(%s))->%s(%s)" % (
                "class " if _collide else "", _own, recv, method, rest)
            text = text[:s] + emit + text[e:]
            pseudo_sig = {
                "addr": addr or "0x0", "ret": rret, "cc": cc,
                "method": method,
                "params_spelled": rparams, "params": rparams,
                "_callee": True,
            }
            ctx.used_callees.setdefault(str(owner_cls), []).append(
                pseudo_sig)
            ctx.sites.append(Site(
                "callee", ("%s(...)" % qual)[:60],
                "member call -> %s (registry %s; stub decl recorded)"
                % (emit[:60], addr), True))
        else:
            rret = spell_type(rec.get("ret")) if rec else "int"
            # R7: a callee whose return is ASSIGNED to a pointer local
            # (`int *FoundationSize = Callee(v14, ...)`) must return a
            # pointer spelling the caller already uses -- int rets become
            # void* (C2440 int->int*), mismatched pointer bases align to
            # the lhs spelling.
            if rret in ("int", "unsigned int", "long", "unsigned long",
                        "_DWORD") or rret.endswith("*"):
                lhs_tys = {}
                for dm in re.finditer(
                        r"\b\w[\w\s]*?\*\s*([A-Za-z_]\w*)\s*;", text):
                    lhs_tys[dm.group(1)] = \
                        dm.group(0).split("*")[0].strip() + " *"
                fname_chk = re.escape(
                    re.sub(r"[^A-Za-z0-9_]", "_", qual.rsplit("::", 1)[-1]))
                hit = None
                for var, ty in lhs_tys.items():
                    if re.search(r"\b%s\s*=\s*(?:\w+::)*%s\s*\("
                                 % (re.escape(var), fname_chk), text):
                        hit = ty
                        break
                if hit is not None:
                    if rret in ("int", "unsigned int", "long",
                                "unsigned long", "_DWORD"):
                        rret = hit if hit.endswith("*") else "void *"
                    elif rret != hit:
                        rret = hit
            rcc = {"stdcall": " __stdcall", "fastcall": " __fastcall"}.get(
                (rec or {}).get("cc") or "", "")
            # R5: param types follow the ARG form -- `this` / cast /
            # arrow-receivers are pointers (`void *` accepts any), bare
            # expressions stay int (C2664 TechnoClass* -> int family);
            # args that are OUR OWN params inherit their declared type.
            # R7: address-of / array-decay args are pointer-ish too
            # (Building__GetFoundationSize `int [4]` -> int family);
            # fn-type spellings (`int (int)`) are not declarable in a
            # VC6 prototype -- void* slot instead.
            sig_ptys = {}
            for t, n in ctx.sig.get("params_spelled") or []:
                sig_ptys[n] = t
            # R7: array-declared locals decay to pointers at call sites
            # (`int v14[4]; ... GetFoundationSize(v14, ...)` -- the bare
            # ident carries no ptr shape)
            arr_locals = set(m.group(1) for m in re.finditer(
                r"\b([A-Za-z_]\w*)\s*\[\s*\d+\s*\]\s*;", text))
            plist = []
            # CW2: pointer locals (initializer allowed) + pointer globals
            ptr_names_ = set(arr_locals) | _ctx_ptr_names(ctx, text)
            # CW3-5: when the registry arity matches the call, NON-int-family
            # NON-POINTER registry types (double / short / float) are the
            # authoritative scalar spellings -- `Math__RoundToInt(double)`
            # must not degrade to an int slot (default-argument conversion
            # would silently change the codegen).  Pointer/array slots stay
            # arg-form-driven: a decl-only stub must accept the argument the
            # body actually passes (a registry `int *`/`unsigned int *` over
            # a `X *const` / `char[1]` argument is C2664 -- the
            # AbstractClass__SaveLoad_Prefix_0 / SHA1__Transform family).
            _reg_params = (rec or {}).get("params") or []
            _reg_ty_ok = (rec is not None and
                          len(_reg_params) == len(args))
            for i, a0 in enumerate(args):
                a0s = a0.strip()
                if a0s in sig_ptys:
                    pt = sig_ptys[a0s]
                elif a0s in arr_locals:
                    pt = "void *"
                elif _arg_ptrish_ctx(a0s, ptr_names_):
                    # CW5-4: preserve const through the relaxation
                    if "const" in a0s:
                        pt = ("const volatile void *" if "volatile" in a0s
                              else "const void *")
                    else:
                        pt = "void *"
                    # R7: a `volatile T *` argument needs a
                    # qualification-compatible slot (plain void* drops
                    # volatile -> C2664 DriveLocomotionClass__Release
                    # family)
                    if "volatile" in a0s and "const" not in a0s:
                        pt = "volatile void *"
                elif _reg_ty_ok:
                    _rt = spell_type(_reg_params[i].get("type") or "int")
                    if _rt.endswith("*") or "(" in _rt or _rt in (
                            "int", "unsigned int", "long", "unsigned long",
                            "_DWORD", "short", "unsigned short"):
                        pt = "int"
                    else:
                        pt = _rt
                else:
                    pt = "int"
                if "(" in pt:
                    pt = "void *"
                plist.append("%s a%d" % (pt, i))
            fname = re.sub(r"[^A-Za-z0-9_]", "_", qual)
            decl = "extern %s%s %s(%s);" % (rret, rcc, fname, ", ".join(plist))
            if decl not in ctx.used_callee_exts:
                ctx.used_callee_exts.append(decl)
            # CW5-1: type the rendered call's arguments to the stub slots
            _syms = _cw5_sym_types(ctx, text)
            _args2, _nco = _cw5_coerce_inner(
                ", ".join(args), [p.rsplit(" ", 1)[0] for p in plist],
                _syms, ctx)
            if "::" in qual:
                text = text[:s] + "%s(%s)" % (fname, _args2) + text[e:]
            ctx.sites.append(Site(
                "callee", ("%s(...)" % qual)[:60],
                "global/static call -> extern prototype (site arity %d)"
                % len(args), True))
    ctx.lines = text.split("\n")

    # whole-body forward: align OUR return type with the callee's so the
    # compiler can emit the bare tail jmp (5B thunk family).  Covers both
    # `return ((C *)x)->M(...);` and the void statement form
    # `((C *)x)->M(...);` (FileFind::Close family).
    whole = [ln.strip().rstrip(";").strip() for ln in ctx.lines if ln.strip()]
    if len(whole) == 1 and ctx.used_callees:
        m = re.match(
            r"^(?:return\s+)?\(\(\w+\s*\*.*\)->\w+\([^;]*\)$", whole[0])
        if m:
            for sigs in ctx.used_callees.values():
                for cs in sigs:
                    if cs["method"] and ("->%s(" % cs["method"]) in whole[0]:
                        cret = cs["ret"]
                        starts_return = whole[0].startswith("return")
                        if starts_return and cret == "void":
                            cret = "int"   # `return callee();` needs a value
                        # R3: no-return statement form -- our own export
                        # proto outranks a placeholder callee ret.  The
                        # binary is a bare tail jmp whose body returns
                        # nothing (PowerClass::Stub -> RadarClass::
                        # Destru_vt05: callee registry ret 'int' is a
                        # default, our proto says void); aligning to the
                        # callee here re-types the thunk and the unit dies
                        # on C4716 must-return.
                        if not starts_return and _proto_ret_void(ctx.ex.proto):
                            cret = "void"
                        if ctx.sig["ret"] != cret:
                            ctx.sig["ret"] = cret
                            ctx.note("tail_forward_ret_align",
                                     "whole-body forward: ret aligned to "
                                     "callee %s (%s) for bare tail jmp"
                                     % (cs["method"], cret))


# ---------------------------------------------------------------- R8 symbol canon
#
# The verdict normalizes data references to `DATA:<signals name>` on the
# original side and to the OBJ reloc key on ours.  An IDA-plate extern
# (`stru_87E790`, `aStructuretab`, `dword_AA0E18`) therefore never
# compares equal even when the ADDRESS is right -- the bytes are already
# identical (absolute [addr32] on both sides), only the symbol spelling
# differs.  R8 spells such externs with the registry's canonical global
# name and folds constant `((char *)BASE)[A + (B)]` forms whose final
# address is a named global into a direct reference to that global.
# Codegen-neutral: same absolute addressing, same widths, reloc key only.

_IDA_EXTERN = re.compile(
    r"^(?:stru|dword|word|byte|qword|flt|dbl|unk|off)_([0-9A-Fa-f]{6,})$")
_STR_LIT_CACHE = {}


def _string_literal_addrs():
    if "m" not in _STR_LIT_CACHE:
        path = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                            "..", "..", "anchors", "string_literals.json")
        try:
            with open(os.path.normpath(path), encoding="utf-8") as f:
                _STR_LIT_CACHE["m"] = json.load(f)
        except (OSError, ValueError):
            _STR_LIT_CACHE["m"] = {}
    return _STR_LIT_CACHE["m"]


def _extern_data_addr(name):
    """Address of an IDA-plate extern name, or None."""
    m = _IDA_EXTERN.match(name)
    if m:
        return int(m.group(1), 16)
    e = _string_literal_addrs().get(name)
    if isinstance(e, dict):
        try:
            return int(e.get("addr", ""), 16)
        except (TypeError, ValueError):
            return None
    return None


def _signals_globals_by_addr():
    """{addr:int -> name} straight from signals.json (cache-independent).

    The registry snapshot (.omo/decomp_sys/decomp_registry.json) is a
    build product; R8 symbol-canon answers must also see globals added to
    signals.json after the last registry build.
    """
    if "g" not in _STR_LIT_CACHE:
        path = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                            "..", "..", "signals.json")
        try:
            with open(os.path.normpath(path), encoding="utf-8") as f:
                sig = json.load(f)
            m = {}
            for n, v in (sig.get("globals") or {}).items():
                try:
                    m[int(v, 16) if isinstance(v, str) else int(v)] = n
                except (TypeError, ValueError):
                    continue
            _STR_LIT_CACHE["g"] = m
        except (OSError, ValueError):
            _STR_LIT_CACHE["g"] = {}
    return _STR_LIT_CACHE["g"]


def _canon_global_name(ctx, name):
    addr = _extern_data_addr(name)
    if addr is None:
        return None
    rec = (getattr(ctx.reg, "globals_by_addr", None) or {}).get(
        "0x%x" % addr)
    if rec and rec.get("name") and rec["name"] != name:
        return rec["name"]
    nm = _signals_globals_by_addr().get(addr)
    if nm and nm != name:
        return nm
    return None


_CHAR_BASE_OFF = re.compile(
    r"\(\(\s*char\s*\*\s*\)\s*(?P<base>[A-Za-z_]\w*)\s*\)"
    r"\[\s*(?P<a>0x[0-9A-Fa-f]+|\d+)\s*"
    r"(?:\+\s*\(?\s*(?P<b>0x[0-9A-Fa-f]+|\d+)\s*\)?\s*)?\]")


def pass_global_canon(ctx):
    """R8: spell data externs with the registry's canonical global name."""
    if not getattr(ctx, "used_globals", None):
        return
    text = "\n".join(ctx.lines)
    globs = getattr(ctx.reg, "globals_by_addr", None) or {}

    # A. address-level fold: ((char *)BASE)[A + (B)] -> ((char *)GLOBAL)[0]
    def fold(m):
        base, a, b = m.group("base"), m.group("a"), m.group("b")
        if base not in ctx.used_globals:
            return m.group(0)
        baddr = _extern_data_addr(base)
        if baddr is None:
            return m.group(0)
        addr = baddr + int(a, 0) + (int(b, 0) if b else 0)
        rec = globs.get("0x%x" % addr)
        if not rec or not rec.get("name"):
            return m.group(0)
        name = rec["name"]
        if name == base:
            return m.group(0)
        ctx.used_globals.setdefault(name, "char[]")
        ctx.sites.append(Site(
            "global", m.group(0),
            "data address 0x%X folds to canonical global %s"
            % (addr, name), True))
        return "((char *)%s)[0]" % name

    text = _CHAR_BASE_OFF.sub(fold, text)

    # B. plain extern rename (IDA label/plate name -> registry name)
    ren = {}
    for name in list(ctx.used_globals):
        c = _canon_global_name(ctx, name)
        if c and c not in ctx.used_globals:
            ren[name] = c
    for old, new in ren.items():
        text = re.sub(r"\b%s\b" % re.escape(old), new, text)
        ctx.used_globals[new] = ctx.used_globals.pop(old)
        ctx.sites.append(Site(
            "global", old,
            "ida extern %s -> canonical global %s (reloc key)" % (old, new),
            True))
    ctx.lines = text.split("\n")


# ---------------------------------------------------------------- R8 pair64# Hex-Rays renders a 64-bit value assembled from two 32-bit halves as
# `__PAIR64__(high, low)` -- an IDA macro that does not exist in the era
# compiler (the call site fell through to an extern declaration and
# became C2664 AudioMixer::PlaySample 0x4071C0).  Expand it to the exact
# arithmetic it denotes; `unsigned __int64` locals already carry the
# binary's 64-bit ops, so the emitted code is unchanged.
_PAIR64_CALL = re.compile(r"\b__PAIR64__\s*\(")


def pass_pair64(ctx):
    text = "\n".join(ctx.lines)
    if "__PAIR64__" not in text:
        return
    out = []
    pos = 0
    n = 0
    for m in _PAIR64_CALL.finditer(text):
        if m.start() < pos:
            continue
        op = m.end() - 1
        cl = _balanced_close(text, op)
        if cl < 0:
            continue
        args = _split_args(text[op + 1:cl])
        if len(args) != 2:
            continue
        hi, lo = args[0].strip(), args[1].strip()
        rep = ("((((unsigned __int64)(unsigned int)(%s)) << 32) | "
               "((unsigned int)(%s)))" % (hi, lo))
        out.append(text[pos:m.start()])
        out.append(rep)
        pos = cl + 1
        n += 1
    if not n:
        return
    out.append(text[pos:])
    ctx.lines = "".join(out).split("\n")
    ctx.note("pair64", "__PAIR64__(hi,lo) -> 64-bit shift/or (%d site%s)"
             % (n, "" if n == 1 else "s"))


# ---------------------------------------------------------------- R8 signed
# A global carried as a char[] byte-arithmetic vehicle gets its dword READS
# through `*(unsigned int *)&((char *)G)[...]`.  When the binary proves the
# value is signed (global_type_evidence), that read cast is the only thing
# keeping the comparison unsigned (usual arithmetic conversions promote the
# signed lhs to unsigned): rewrite the read to `*(int *)`.
_SIGNED_G_READ = re.compile(
    r"\*\(\s*unsigned int\s*\*\s*\)\s*&\s*\(\s*\(\s*char\s*\*\s*\)\s*"
    r"(?P<g>[A-Za-z_]\w*)\s*\)")


def pass_signed_globals(ctx):
    ev = _load_global_ty_evidence()
    if not ev:
        return
    text = "\n".join(ctx.lines)
    n = 0

    def repl(m):
        nonlocal n
        g = m.group("g")
        e = ev.get(g)
        if not e or e.get("type") not in ("int", "short", "long",
                                          "signed char"):
            return m.group(0)
        n += 1
        return m.group(0).replace("unsigned int", "int", 1)

    text = _SIGNED_G_READ.sub(repl, text)
    if n:
        ctx.lines = text.split("\n")
        ctx.note("signed_global_read",
                 "%d unsigned dword read%s of evidence-signed global "
                 "spelling(s) -> int" % (n, "" if n == 1 else "s"))

# ------------------------------------------- CW5-F8: residual identifier forms
#
# CW5-10 (F8 C2065/C2059): mechanical spellings the residual bodies still carry
# from the export:
#   * `MEMORY[0xADDR]`                -> byte read at the absolute address
#   * `IID_X` / `CLSID_X` / `g_CLSID_X` constants -> `extern GUID X;`
#   * IDA data names (`asc_`/`loc_`/`dword_`...) the registry cannot name ->
#     extern declarations with the prefix's width
#   * `&Template<...>::`vftable'`      -> 0 (the templated vftable is not
#     declarable; the address value is not recoverable at this stage)
#   * `__usercall` / `__userpurge`     -> `__cdecl` (IDA-only CC token)
#   * undeclared `g_*`/`s_*`/`p_*`/`hWnd` globals -> `extern unsigned int`
# All rewrites are compile-level; none is claimed byte-faithful.
_CW5_MEMORY_READ = re.compile(r"\bMEMORY\s*\[\s*(0x[0-9A-Fa-f]+|\d+)\s*\]")
_CW5_GUID_CONST = re.compile(
    r"(?<![\w.])((?:IID|CLSID|LIBID)_[A-Za-z0-9_]+|g_CLSID_[A-Za-z0-9_]+)\b")
_CW5_IDA_DATA = re.compile(
    r"(?<![\w.])((?:asc|loc|algn|byte|word|dword|qword|flt|dbl|unk|off|stru)_"
    r"[0-9A-Fa-f]{4,8})\b")
_CW5_VFTABLE_TMPL = re.compile(
    r"&\s*[A-Za-z_]\w*\s*<[^;{}\n]*?>\s*::\s*`vftable[^\x27\n]*\x27")
_CW5_USERCALL = re.compile(r"\b__(?:usercall|userpurge)\b")
_CW5_VTABLE_SYM = re.compile(r"(?<![\w.])([A-Za-z_]\w*_Vtable)\b")
_CW5_UNKNOWN_GNAME = re.compile(
    r"(?<![\w.])((?:g_|s_|p_)[A-Za-z]\w*|hWnd|hDC|hInstance)\b")

# CW5-10b: IDA's `__m64` is a plain 64-bit value in the original (MMX); the
# `union _m64_era` spelling cannot take an int cast (`(__m64)x`).  The export
# bodies only use the member VIEWS as value slicings, so re-spell them.
_CW5_M64_VIEW = re.compile(
    r"(?P<base>[A-Za-z_]\w*)\s*\.\s*(?P<mem>m64_(?:u64|i64|f64|u32|i32|"
    r"u16|i16|u8|i8))\b\s*(?P<idx>\[[^\[\]]*\])?")
_CW5_M64_TY = {
    "m64_u32": "unsigned long", "m64_i32": "long",
    "m64_u16": "unsigned short", "m64_i16": "short",
    "m64_u8": "unsigned char", "m64_i8": "signed char",
    "m64_f64": "double",
}

_CW5_IDA_PREFIX_TY = {
    "asc": "wchar_t *", "loc": "char *", "algn": "char *",
    "byte": "unsigned char",
    "word": "unsigned short", "dword": "unsigned int", "qword": "__int64",
    "flt": "float", "dbl": "double", "unk": "unsigned char",
    "off": "void *", "stru": "unsigned char",
}


def pass_residual_idents(ctx):
    text = "\n".join(ctx.lines)
    n = 0
    changed = False

    def mem_repl(m):
        nonlocal n
        n += 1
        return "(*(unsigned char *)%s)" % m.group(1)

    text2 = _CW5_MEMORY_READ.sub(mem_repl, text)
    if text2 != text:
        changed = True
        text = text2

    # templated vftable address: not declarable at this stage
    text2 = _CW5_VFTABLE_TMPL.sub("0", text)
    if text2 != text:
        changed = True
        text = text2

    # IDA-only calling-convention tokens in cast types
    text2 = _CW5_USERCALL.sub("__cdecl", text)
    if text2 != text:
        changed = True
        text = text2

    # __m64 member views -> value slicings on the 64-bit scalar
    def m64_repl(m):
        nonlocal n
        base = m.group("base")
        mem = m.group("mem")
        if mem in ("m64_u64", "m64_i64"):
            n += 1
            return base
        ty = _CW5_M64_TY.get(mem)
        if not ty:
            return m.group(0)
        idx = m.group("idx")
        n += 1
        if idx and idx.strip():
            return "((%s *)&%s)%s" % (ty, base, idx)
        return "(*(%s *)&%s)" % (ty, base)

    text2 = _CW5_M64_VIEW.sub(m64_repl, text)
    if text2 != text:
        changed = True
        text = text2

    # names already declared in this function/unit
    declared = set(ctx.sig.get("param_names") or [])
    for m in _LOCAL_DECL.finditer(text):
        declared.add(m.group(1))
    declared |= set((getattr(ctx, "used_globals", None) or {}))

    def _is_declared(name):
        return name in declared

    def guid_repl(m):
        nonlocal n
        name = m.group(1)
        if _is_declared(name):
            return m.group(0)
        ctx.used_globals[name] = "GUID"
        declared.add(name)
        n += 1
        return m.group(0)

    text2 = _CW5_GUID_CONST.sub(guid_repl, text)
    if text2 != text:
        changed = True
        text = text2

    def ida_repl(m):
        nonlocal n
        name = m.group(1)
        if _is_declared(name):
            return m.group(0)
        ty = _CW5_IDA_PREFIX_TY.get(name.split("_")[0], "unsigned int")
        ctx.used_globals[name] = ty
        declared.add(name)
        n += 1
        return m.group(0)

    text2 = _CW5_IDA_DATA.sub(ida_repl, text)
    if text2 != text:
        changed = True
        text = text2

    def gname_repl(m):
        nonlocal n
        name = m.group(1)
        if _is_declared(name):
            return m.group(0)
        # never declare a callee (`g_Foo(`) or a known class spelling
        if re.search(r"\b%s\s*\(" % re.escape(name), text):
            return m.group(0)
        if ctx.reg.class_key(name) is not None:
            return m.group(0)
        ctx.used_globals[name] = "unsigned int"
        declared.add(name)
        n += 1
        return m.group(0)

    text2 = _CW5_UNKNOWN_GNAME.sub(gname_repl, text)
    if text2 != text:
        changed = True
        text = text2

    def vtable_repl(m):
        nonlocal n
        name = m.group(1)
        if name in declared:
            return m.group(0)
        ctx.used_globals[name] = "void *"
        declared.add(name)
        n += 1
        return m.group(0)

    text2 = _CW5_VTABLE_SYM.sub(vtable_repl, text)
    if text2 != text:
        changed = True
        text = text2

    # pointer mask-merge repair: IDA's `LOBYTE(ptr)`/`LOWORD(this)` spills
    # became `p = (p & ~0xFF) | (...)` -- a bit-and on a pointer (C2296).
    syms2 = _cw5_sym_types(ctx, text)

    def mask_repl(m):
        nonlocal n
        var = m.group("var")
        expr = m.group("expr")
        if var == "this":
            ty = "class %s *" % (ctx.sig.get("cls") or "void")
        else:
            decl = (syms2.get(var) or "").strip()
            if not decl.endswith("*"):
                return m.group(0)
            ty = decl
        n += 1
        return ("%s%s = (%s)(((unsigned int)%s & ~0xFF) | "
                "((unsigned int)(%s)));" % (m.group("ind"), var, ty, var, expr))

    text = re.sub(
        r"^(?P<ind>\s*)(?P<var>this|[A-Za-z_]\w*)\s*=\s*\(\s*(?P=var)\s*&"
        r"\s*~\s*0xFF\s*\)\s*\|\s*\((?P<expr>.*)\);\s*$",
        mask_repl, text, flags=re.M)

    if changed:
        ctx.lines = text.split("\n")
        ctx.sites.append(Site(
            "residual_ident", "%d residual identifier form(s)" % n,
            "F8 residual spellings normalized (MEMORY/GUID/IDA-data/"
            "templated-vftable/usercall/undeclared global)", True))

