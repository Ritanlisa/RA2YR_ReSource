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
    if not t:
        return "int"
    if t in TYPE_MAP:
        return TYPE_MAP[t]
    m = re.match(r"^([^*]+?)\s*(\*+)$", t)
    if m:
        base = spell_type(m.group(1))
        return (base + " " if base else "") + m.group(2)
    return re.sub(r"\s+", " ", t)


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
    avars = sorted(set(re.findall(r"\b(a\d+)\b", body)), key=lambda x: int(x[1:]))
    for i, an in enumerate(avars):
        if i < len(ctx.sig["param_names"]):
            body = re.sub(r"\b%s\b" % an, ctx.sig["param_names"][i], body)
    ctx.lines = body.split("\n")


_GLOBAL_RE = re.compile(r"\b(dword|word|byte|qword|flt|dbl|unk)_[0-9A-Fa-f]{6,}\b")

_GLOBAL_PREFIX_TYPE = {
    "dword": "unsigned int", "word": "unsigned short",
    "byte": "unsigned char", "qword": "__int64", "flt": "float",
    "dbl": "double", "unk": "unsigned char", "off": "void*",
}


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
                ctx.used_globals[ident] = ty
                ctx.sites.append(Site(
                    "global", ident,
                    "named registry global -> extern %s (registry)" % ty,
                    True))


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
    cast = {"abs16": "short", "abs64": "__int64", "abs": "int"}[fn]
    if re.search(r"[^=!<>]=[^=]", arg):
        return None
    if re.search(r"\+\+|--", arg):
        return None
    if re.search(r"\b\w+\s*\(", arg):
        return None
    c = "(%s)(%s)" % (cast, arg)
    return "((%s < 0) ? -%s : %s)" % (c, c, c)


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
# `LOWORD(this->m) += a2` for word-pair CellStruct updates
_NARROW_STORE = re.compile(
    r"^(?P<macro>LOBYTE|HIBYTE|LOWORD|HIWORD)\(\s*"
    r"(?P<target>this->\w+|\w+)\s*\)\s*(?P<op>\+|-|\*|/|\||\^|&)?="
    r"(?P<expr>.+)$")

_MACRO_META = {          # (byte width, byte shift within the dword slot)
    "LOBYTE": (1, 0), "HIBYTE": (1, 1),
    "LOWORD": (2, 0), "HIWORD": (2, 2),
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
      is_narrow True when IG evidence or declared type gives byte/word width
      that is NARROWER than the macro's own width requirement context.
    """
    off, rec, _src = _member_record_for(ctx, mem_name)
    if off is None:
        return None, False, None
    real_off = int((rec or {}).get("offset", off))
    width = int((rec or {}).get("width") or 4)
    ig = ctx.reg.ig_granularity(ctx.sig["cls"], real_off)
    if ig and ig["width"] < width:
        width = ig["width"]
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
            if ctx.sig["ret"] == "bool":
                out.append("return (%s);" % expr)
                ctx.sites.append(Site(
                    "intrinsic", "%s(%s) = %s; return %s;" % (macro, var, expr, var),
                    "bool-return %s idiom -> direct return of expr "
                    "(no narrow evidence; fallback)" % macro, False))
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
        if re.match(r"^[+\-*/|&^%]?=(?!=)", text[m.end():m.end() + 3]):
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
    r"\*\(\s*(?P<ty>_?\w+)\s*\*\s*\)\s*"
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


def _member_record_for(ctx, mem_name):
    return ctx.reg.member_offset_by_ida_name(ctx.sig["cls"], mem_name)


def _view_name(rec, off, suffix=""):
    base = (rec and rec.get("name")) or ("m%03X" % off)
    return base + suffix


def _signed_word_context(text, pos):
    tail = text[pos:pos + 120]
    return bool(re.search(r">\s*0\b", tail))


def _disasm_this_offsets(ctx):
    """[ecx+0xNN] offsets the binary actually touches for this function
    (thiscall this = ecx). Empty set = no evidence."""
    if not hasattr(ctx, "_dis_offs"):
        offs = set()
        for dl in ctx.ex.disasm_lines:
            for m in re.finditer(r"\[ecx(?:\+0?x?([0-9A-Fa-f]+)h?)?\]",
                                 dl):
                offs.add(int(m.group(1) or "0", 16))
        ctx._dis_offs = offs
    return ctx._dis_offs


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
            emit = "((%s (__thiscall**)(%s*%s%s))this->%s)[%d](%s)" % (
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

    def repl(m):
        ty, amp, mem, idx = (m.group("ty"), m.group("amp"),
                             m.group("mem"), m.group("idx"))
        read_ty = TYPE_OF_CAST.get(ty) or spell_type(ty)
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
                                         "int", 4, "mi-vfptr-synth")
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
                return m.group(0)
            if moff is not None:
                off_i = int((rec or {}).get("offset", moff))
                have = ctx.views.scalars.get(ctx.sig["cls"], {}).get(off_i, {})
                have_arr = ctx.views.arrays.get(ctx.sig["cls"], {}).get(off_i)
                if is_indexed and not have_arr:
                    ctx.views.add_array(ctx.sig["cls"], off_i, mem, "int", 0,
                                        src or "registry-gap")
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
                ctx.views.add_scalar(cls, view_off, "dword", mem, "int", 4,
                                     "mi-vfptr-synth")
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
            if not sp.endswith("*") and WIDTH_OF.get(sp) == w:
                ty = sp
        if is_indexed:
            # `this->__pad_XX[i]` renamed to a semantic member: the indexed
            # form needs an ARRAY view (scalar view + [i] was C2109)
            ctx.views.add_array(cls, view_off, reg_name, "int", 0,
                                src or "registry-gap")
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

    # classify each var: first touching flow stmt, def stmts, read count
    info = {}
    for var in decls:
        first = None
        defs = []
        for st in flow:
            t = txt_of(st)
            if re.match(r"^%s\s*=[^=]" % re.escape(var), t.strip()):
                if first is None:
                    first = st
                defs.append(st)
            elif re.search(r"\b%s\b" % re.escape(var), t):
                if first is None:
                    first = st
        reads = len(re.findall(r"\b%s\b" % re.escape(var), flow_text))
        for st in defs:
            reads -= 1
        info[var] = {"first": first, "defs": defs, "reads": reads}

    absorbed = set()      # id(stmt) of defs merged into decls
    drop_decls = set()    # var names dropped entirely
    merge_at = {}         # var -> init text absorbed from its def stmt
    for var in decls:
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
                ctx.note("dead_decl", "%s: never used -- decl dropped" % var)
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
    "SLOWORD": (2, 0, True), "SHIWORD": (2, 2, True),
}

_RESIDUAL_MACRO_CALL = re.compile(
    r"\b(LOBYTE|HIBYTE|BYTE1|BYTE2|BYTE3|LOWORD|HIWORD|WORD1|SLOWORD|SHIWORD)"
    r"\(")

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

    def repl(m):
        macro = m.group(1)
        w, sh, sgn = _RESIDUAL_MACROS[macro]
        # capture the balanced argument
        start = m.end()
        depth = 1
        end = start
        for i in range(start, len(text)):
            if text[i] == "(":
                depth += 1
            elif text[i] == ")":
                depth -= 1
                if depth == 0:
                    end = i
                    break
        arg = text[start:end]
        mask = "0xFF" if w == 1 else "0xFFFF"
        out = "((%s) & %s)" % (arg, mask) if not sh else \
            "((%s >> %d) & %s)" % (arg, 8 * sh, mask)
        if sgn:
            out = "(short)(%s)" % out
        ctx.sites.append(Site(
            "intrinsic", "%s(%s)" % (macro, arg[:60]),
            "RESIDUAL SWEEP: no evidence path consumed it -> arithmetic "
            "fallback (zero-tolerance)", False))
        return out

    # skip store forms (tail '='); those were handled or are broken anyway
    def guarded(m):
        if re.match(r"^[+\-*/|&^%]?=(?!=)", text[m.end():m.end() + 3]):
            return m.group(0)
        return repl(m)

    text = _RESIDUAL_MACRO_CALL.sub(guarded, text)
    ctx.lines = text.split("\n")


def pass_branch_polarity(ctx):
    """if/else -> early-return form when the ORIGINAL's first conditional
    jump is true-polarity (`jne`/`jnz` to the out-of-line then-block).

    `if (c) { return A; } else { return B; }` compiles je (else laid
    out-of-line); the ORIGINAL source form `if (c) return A; return B;`
    compiles jne (then out-of-line).  Same semantics, different bytes --
    align with the binary when the whole body is this shape."""
    dis = "\n".join(ctx.ex.disasm_lines)
    jm = re.search(r"\bj(n?e|n?z)\b", dis)
    if not jm or jm.group(1) in ("e", "z"):
        return                       # je/jz or no jcc: keep if/else form
    text = "\n".join(ctx.lines)
    pat = re.compile(
        r"^[ ]*if \((?P<c>.+)\)\n[ ]*\{\n(?P<a>(?:[ ]+.*\n)+?)[ ]*\}\n"
        r"[ ]*else\n[ ]*\{\n(?P<b>[ ]*return .+)\n[ ]*\}\n?$")
    m = pat.match(text)
    if not m:
        return
    new = "if (%s)\n{\n%s}\n%s\n" % (m.group("c"), m.group("a"),
                                     m.group("b"))
    ctx.lines = new.split("\n")
    ctx.note("branch_polarity",
             "if/else -> early-return form (orig first jcc is %s)"
             % jm.group(0))


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
            mem = v["name"]
            pat = r"this->%s\b" % re.escape(mem)
            arith = re.search(
                r"([\-+*/%%&|^]\s*%s)|(%s\s*[-+*/%%&|^])|(%s\s*(<<|>>))"
                r"|(int \w+ = %s)" % (pat, pat, pat, pat), text)
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
    text = re.sub(r"\(int\)\s*\(\(", "((", text)
    text = text.replace("(unsigned __int8 *)", "(unsigned char*)")
    text = text.replace("(__int8 *)", "(char*)")
    text = re.sub(r"(\W)!\s*(\w+)(\s*[;&|)]|$)", r"\1\2 == 0\3", text)
    # IDA type spellings must not survive into era C++ (C2065 family):
    # pure alias-level rewrite, no semantics change
    for pat, sp in _IDA_TYPE_WORDS:
        text = re.sub(pat, sp, text)
    # whole-object zero init (ctor pattern): `*this = 0;` -> memset
    text = text.replace("*this = 0;", "memset(this, 0, sizeof(*this));")
    ctx.lines = text.split("\n")
    ctx.stmts = None   # lines are authoritative post-normalization
