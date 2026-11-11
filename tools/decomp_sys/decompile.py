#!/usr/bin/env python3
"""decompile.py -- DECOMP-2 driver: IDA pseudocode -> six-rule compliant C++.

Pipeline per function address:
  1. fetch      full_export block (pseudocode + disasm + proto)
  2. signature  DECOMP-1 registry JSON (signals-authoritative) with export
                proto fallback; era type spelling
  3. passes     param rename -> globals -> intrinsics (abs/LOBYTE) ->
                vtable dispatch -> member shapes (rules 3/4) ->
                BYREF widen -> scope shrink (rule 5) -> era normalize
  4. emit       `RET Cls::Method(args) { ... }` into <Name>.cpp grouped by the
                full_export hpp name (rule 2)
  5. hpp        pilot stand-in registry (hpp_pilot.py) from the same ledger
  6. self-check checker.py rule 3/4 scan on the emitted body
  7. compile    era cl (VC6/SP3 via .vc6-8447 + era_shim) -- rule 6
  8. report     restoration ledger (sites N -> restored M), notes, defects

Usage:
  python tools/decomp_sys/decompile.py --pilot            # the 5 pilot fns
  python tools/decomp_sys/decompile.py 0x5B2990 [...]     # ad-hoc
  python tools/decomp_sys/decompile.py --out .omo/decomp_pilot
"""
import argparse
import json
import os
import re
import sys
from collections import OrderedDict

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)
sys.path.insert(0, ROOT)

import pseudo  # noqa: E402
import passes  # noqa: E402
import checker  # noqa: E402
import hpp_pilot  # noqa: E402
from registry_ext import Registry  # noqa: E402
from passes import ClassView, FunctionCtx, spell_type, WIDTH_OF as WIDTH_TY  # noqa: E402

DEFAULT_OUT = os.path.join(ROOT, ".omo", "decomp_pilot")

PILOT = [
    ("0x5B2990", "math"),     # Math::Abs16Cmp   -- word member view + abs16
    ("0x5F6560", "math"),     # Math::DistSq2D   -- vt slot-18 dispatch + coords
    ("0x401940", "getter"),   # ObjectClass::GetMember06 -> RawFileClass dword
    ("0x486380", "getter"),   # Cell::IsEmpty    -- dword member + LOBYTE bool
    ("0x4870D0", "cell"),     # Cell::IsPassableOffset -- pad-array restore
    ("0x50B6F0", "gran"),     # House::IsHumanPlayer -- IG narrow reads demo
]


# ---------------------------------------------------------------- signature

# return-value channel writers: mnemonic + first operand register spelling
_RET_WRITERS = re.compile(
    r"^\s*[0-9A-Fa-f]+:\s*"
    r"(?P<mn>mov|xor|and|or|setn?l|setn?le|setn?g|setn?ge|setn?e|setn?z|"
    r"setn?ne|setn?nz|setn?b|setn?be|setn?a|setn?ae|setn?s|setn?ns)\s+"
    r"(?P<dst>e?ax|al|ah)\b",
    re.I)


def _disasm_ret_width(disasm_lines):
    """Narrowest register width the return paths write (R3 ret_norm fix).

    Walks each instruction run ending in a `retn`; the LAST writer of the
    eax/al/ax channel in the run decides that path's width.  Returns the
    minimum across paths: 1 (al), 2 (ax), 4 (eax), or None.
    """
    widths = []
    run = []
    retn_re = re.compile(r"^\s*[0-9A-Fa-f]+:\s*retn?\b")
    for dl in list(disasm_lines) + ["xxxxxx: retn"]:
        if retn_re.match(dl):
            w = None
            for ins in run:
                wm = _RET_WRITERS.match(ins)
                if not wm:
                    continue
                dst = wm.group("dst").lower()
                w = 1 if dst in ("al", "ah") else (2 if dst == "ax" else 4)
            if w is not None:
                widths.append(w)
            run = []
            continue
        run.append(dl)
    if not widths:
        return None
    return min(widths)


def _proto_ret(proto):
    """Return-type spelling of an export prototype (`void __thiscall(...)`)."""
    p = (proto or "").strip()
    for c in ("__thiscall", "__stdcall", "__cdecl", "__fastcall",
              "__userpurge"):
        p = p.replace(c, " ")
    m = re.match(r"^(.*?)\s*\(", p)
    return m.group(1).strip() if m else ""


def sanitize_ident(name):
    """CW2: IDA/mangled names are not C++ identifiers.

    `?GetSchedulerProxy_SchedulerBase_details_Concurrency__QBEPA...` (a
    mangled fragment the registry kept as a function name) and any name
    carrying `@`/`?`/`<`/`>` cannot be declared (C2018/C2653 families).
    The mapping is the same one the object extractor uses for the class
    half; the emitted symbol spelling stays deterministic.
    """
    n = (name or "").strip()
    tilde = n.startswith("~")
    n = n.lstrip("?~")
    n = re.sub(r"[^A-Za-z0-9_]", "_", n)
    if not n:
        n = "unnamed"
    if n[0].isdigit():
        n = "_" + n
    return ("~" if tilde else "") + n


# ---------------------------------------------------------------- cc evidence
#
# R4: calling-convention arbitration needs the binary, not the registry.
# The export disasm is IDA's rendering of the real entry; these helpers read
# it directly (no guessing).

_ECX_FAMILY = re.compile(r"\b(?:ecx|cx|cl|ch)\b")


def _insn_text(dl):
    """'5b2990: mov cx, [ecx]' -> 'mov cx, [ecx]'."""
    return re.sub(r"^\s*[0-9A-Fa-f]+:\s*", "", dl)


def _uses_ecx(disasm_lines, n=20):
    """True when the entry (first n instructions) reads/writes ECX family."""
    for dl in disasm_lines[:n]:
        if _ECX_FAMILY.search(_insn_text(dl)):
            return True
    return False


def _reads_stack_arg(disasm_lines):
    """True when the body reads a stack ARGUMENT (not just a local frame)."""
    for dl in disasm_lines:
        ins = _insn_text(dl)
        if re.search(r"\[(?:esp|ebp)\s*\+\s*arg_\w+", ins):
            return True
        if "arg_" not in ins and \
                re.search(r"\[esp\s*\+\s*(?:0x)?0*[4-9A-Fa-f]\b", ins):
            return True
    return False


def _retn_width(disasm_lines):
    """(cleanup_bytes|None, is_bare_retn) of the epilogue."""
    for dl in reversed(disasm_lines[-4:]):
        ins = _insn_text(dl)
        m = re.match(r"^retn\s+(?:0x)?([0-9A-Fa-f]+)$", ins)
        if m:
            return int(m.group(1), 16), False
        if re.match(r"^retn$", ins):
            return 0, True
    return None, None


# ---------------------------------------------------------------- this-as-id
#
# Audit-rem ① (2026-11-12): 0x602AE0 `Dialog::IsSpecialTemplate` is the
# canonical overfit -- the 161B body only compares ECX against 18 small
# dialog IDs (no memory access at all), but IDA typed ECX as `Dialog *this`;
# the generator faithfully rendered `this == (Dialog *)293 || ...`, which
# compiles to the same `cmp ecx, imm32` chain and byte-MATCHes.  The binary
# evidence for "this is an integer ID" is: no `[ecx...]` operand anywhere +
# a chain of `cmp ecx, <small imm>` compares + bare `retn` + no declared
# parameters.  Emit that receiver as an integer __fastcall parameter
# (static member) -- the honest signature; codegen is identical.

_ECX_MEM = re.compile(r"\[\s*ecx\b")
_ECX_CMP_HEX = re.compile(r"^\s*cmp\s+ecx\s*,\s*(?:0x)?([0-9A-Fa-f]+)h\s*$")
_ECX_CMP_DEC = re.compile(r"^\s*cmp\s+ecx\s*,\s*(\d+)\s*$")
_THIS_AS_ID_MAX = 0x10000


def _ecx_small_cmps(disasm_lines):
    vals = []
    for dl in disasm_lines:
        ins = _insn_text(dl)
        m = _ECX_CMP_HEX.match(ins)
        if m:
            vals.append(int(m.group(1), 16))
            continue
        m = _ECX_CMP_DEC.match(ins)
        if m:
            vals.append(int(m.group(1), 10))
    return [v for v in vals if 0 < v < _THIS_AS_ID_MAX]


def _this_as_id_evidence(ex):
    """Small-ID compare chain on an un-dereferenced ECX, else None."""
    dis = ex.disasm_lines or []
    for dl in dis:
        if _ECX_MEM.search(_insn_text(dl)):
            return None
    vals = _ecx_small_cmps(dis)
    return vals if len(vals) >= 2 else None


# ---------------------------------------------------------------- class hierarchy
#
# Audit-rem ③: class identity arbitration uses the binary RTTI base arrays
# (anchors/rtti_base_arrays.json, 954 classes) first, then the registry's
# class_layouts parent chain.  A proto `T *this` may only NARROW the
# registry class (T derives from it); a widening or unrelated proto
# (BulletClass::Fire typed ObjectClass*, CampaignClass::LoadFromINIList
# typed INIClass*) is IDA's caller-side guess and must not re-home the unit.

_RTTI_BASES = None


def _rtti_bases():
    global _RTTI_BASES
    if _RTTI_BASES is None:
        path = os.path.join(ROOT, "anchors", "rtti_base_arrays.json")
        try:
            with open(path, encoding="utf-8") as f:
                _RTTI_BASES = json.load(f)
        except (OSError, ValueError):
            _RTTI_BASES = {}
    return _RTTI_BASES


def _class_ancestors(reg, cls):
    """All ancestors of cls (RTTI base array + class_layouts parent chain)."""
    out = []
    seen = set()
    cur = cls
    guard = 0
    while cur and cur not in seen and guard < 64:
        seen.add(cur)
        out.append(cur)
        rec = reg.classes.get(cur) or {}
        cur = rec.get("parent")
        guard += 1
    for b in (_rtti_bases().get(cls) or []):
        b = str(b)
        m = re.match(r"^\d+(.+)$", b)      # MI marker ("1IUnknown")
        if m:
            b = m.group(1)
        if b and b not in seen:
            seen.add(b)
            out.append(b)
    return out



def _proto_params(proto, keep_this=False):
    """Parameter list from the export proto, as [(spelled_type, name)].

    keep_this=True keeps a leading `T *this` (needed by the cdecl
    arbitration: in __cdecl it is a normal first STACK argument).
    """
    p = proto or ""
    for c in ("__thiscall", "__stdcall", "__cdecl", "__fastcall",
              "__userpurge"):
        p = p.replace(c, " ")
    m = re.search(r"\((.*)\)\s*$", p)
    out = []
    if not m:
        return out
    inner = m.group(1).strip()
    if not inner or inner == "void":
        return out
    for i, part in enumerate(inner.split(",")):
        part = part.strip()
        if not part:
            continue
        is_this = part.endswith("this") or part == "this"
        if is_this and not keep_this:
            continue
        # strip the IDA parameter name when it IS the declared name
        # (`ObjectClass *this` -> `ObjectClass *`); unnamed protos are the
        # norm, so only this one spelling needs it.
        if is_this:
            part = re.sub(r"\s*\bthis$", "", part).strip() or part
        out.append((spell_type(part), "p%d" % i))
    return out


# ---------------------------------------------------------------- solver domain
#
# R6: proto + solver-domain dual source.  anchors/minclass_assignments.json
# carries per-entity resolved types (P:FN:N params, RET:FN returns) with
# confidence tiers (forced/narrow/wide).  Empirically (88-function C2440
# sample) the param domains are mostly forced-int (matching the current
# spelling) or wide catch-alls -- so the supplement fires NARROWLY:
#   * unique class candidate over a currently-int-family spelling
#   * body evidence of pointer use (arrow / ptr-assign / cast)
#   * never changes arity, never touches fastcall register params
#   * signed pairs resolve through the signed_default_ledger policy

_DOMAIN_CACHE = {}


def _load_solver_domains():
    if "asg" not in _DOMAIN_CACHE:
        path = os.path.join(ROOT, "anchors", "minclass_assignments.json")
        ledger_path = os.path.join(ROOT, "anchors",
                                   "signed_default_ledger.json")
        try:
            with open(path, encoding="utf-8") as f:
                asg = json.load(f)
        except (OSError, ValueError):
            asg = {}
        try:
            with open(ledger_path, encoding="utf-8") as f:
                led = json.load(f)
        except (OSError, ValueError):
            led = {}
        _DOMAIN_CACHE["asg"] = asg
        _DOMAIN_CACHE["ledger"] = {
            e.get("ent"): e for e in (led.get("entities") or [])}
    return _DOMAIN_CACHE["asg"], _DOMAIN_CACHE["ledger"]


_PRIM_DOMAIN = {
    "int", "unsigned int", "long", "unsigned long", "short",
    "unsigned short", "char", "unsigned char", "signed char", "bool",
    "float", "double", "void", "void *", "void*", "__int8", "__int16",
    "__int32", "_DWORD", "_WORD", "_BYTE",
}


def _domain_answer(cands, ledger, ent):
    """(spelling, confidence) of a unique domain answer, else None."""
    if not cands:
        return None
    uniq = sorted(set(cands))
    if len(uniq) == 1:
        c = uniq[0]
        if c in _PRIM_DOMAIN:
            return (c, None)
        # class candidate: pointer to it
        ident = re.sub(r"[^A-Za-z0-9_]", "_", c)
        return ("%s *" % ident, None)
    # signed pair: ledger policy (signed default)
    if len(uniq) == 2 and all(c in _PRIM_DOMAIN and "*" not in c
                              for c in uniq):
        le = ledger.get(ent)
        if le and le.get("chosen") in uniq:
            return (le["chosen"], "ledger")
        for c in uniq:
            if c in ("int", "short", "long", "char"):
                return (c, "signed-default")
    return None


_PTR_USE = re.compile(r"%s\s*->|%s\s*\[|=\s*%s\s*;|\(%s\)|\*\s*%s\b"
                      r"|\(%s\s*\*\)|%s\s*[-+]\s*\d")


def _solver_domain_params(addr, params, body_lines, dropped):
    notes = []
    if dropped:
        return params, notes    # arity arbitration won: alignment unsure
    if not params:
        return params, notes
    a6 = addr.lower().replace("0x", "").upper()
    asg, ledger = _load_solver_domains()
    body = "\n".join(body_lines or [])
    out = list(params)
    for i, (ty, nm) in enumerate(out):
        ent = "P:%s:%d" % (a6, i)
        rec = asg.get(ent)
        if not rec or rec.get("confidence") not in ("forced", "narrow"):
            continue
        # int-family current spelling only (ptr spellings keep proto)
        if ty not in ("int", "unsigned int", "long", "unsigned long",
                      "_DWORD", "short", "unsigned short"):
            continue
        ans = _domain_answer(rec.get("candidates", []), ledger, ent)
        if not ans or not ans[0].endswith("*"):
            continue
        spelled = ans[0]
        # body evidence: the parameter is USED as a pointer somewhere
        if not _PTR_USE.findall(nm):
            continue
        out[i] = (spelled, nm)
        notes.append(("solver_domain_param",
                      "%s domain %s (%s) -> %s (was %s)"
                      % (ent, rec.get("candidates"), rec.get("confidence"),
                         spelled, ty)))
    return out, notes


def derive_signature(reg, ex):
    fn = reg.function(ex.addr) or {}
    name = fn.get("name") or ex.name
    cls = fn.get("cls")
    cls_src = fn.get("cls_src")
    # proto this-type cross-check (D-fix 1 extension): the export proto is
    # IDA's live typing of THIS function; a class-typed `T *this` carries
    # its own layout (e.g. VectorClass::GetCount is really
    # DynamicVectorClass -- Count@0x10) and overrides the fleet cls.
    # Audit-rem ③: applied below as a NARROWING only (see _class_ancestors).
    pm = re.search(r"\(\s*([A-Za-z_]\w*)\s*\*\s*_?this\b", ex.proto or "")
    pty = pm.group(1) if pm else None
    # NO_CLS recovery: a signals-cls-less function may still carry hard
    # class evidence (vtable-slot ownership / class-typed proto this /
    # qualified name).  The resolver canonicalizes aliases and namespaces,
    # so a class the registry knows under another spelling binds too.
    if cls is None:
        att = reg.resolve_function_class(ex.addr, ex.proto, name)
        if att["cls"]:
            cls, cls_src = att["cls"], "resolve:%s" % att["src"]
    method = fn.get("method") or (name.split("::")[-1] if "::" in name else name)
    method = sanitize_ident(method)
    ret = spell_type(fn.get("ret") or "int")
    ret_notes = []
    # Audit-rem ③: proto `T *this` is accepted only when T derives from the
    # registry class (narrowing) or the registry has no class.  Widening /
    # unrelated proto types are IDA's caller-side guesses and must not
    # re-home the function (BulletClass::Fire typed ObjectClass*,
    # CampaignClass::LoadFromINIList typed INIClass* -> C2039 families).
    if pm and pty and pty != cls and pty in reg.classes:
        if cls is None or cls in _class_ancestors(reg, pty):
            cls, cls_src = pty, "proto_this"
        else:
            ret_notes.append(("proto_this_rejected",
                              "proto this type %s is not a descendant of "
                              "registry class %s -- registry class kept"
                              % (pty, cls)))
    # R3: a registry `unknown` return is not a type -- the export proto is
    # the only ret evidence.  Without this a tail-jmp thunk whose callee
    # ret was never resolved emitted `int Stub(){ Callee(); }` -> C4716
    # must-return (PowerClass::Stub 0x63F7B0 family).
    # R4: extended from the void-only case to the whole proto type -- an
    # `unknown` ret rendered literally as the type name `unknown` is C2146.
    if fn.get("ret") in (None, "", "unknown"):
        pr = _proto_ret(ex.proto)
        if pr:
            ret = spell_type(pr)
            ret_notes.append(("ret_proto",
                              "registry ret unknown -> proto ret %s" % ret))
        else:
            ret = "int"
    # registry spells conventions without the leading underscores
    # ("fastcall"/"stdcall"/"cdecl"); the emitter and every downstream
    # pass key on the C++ spelling with underscores.  Without this
    # normalization a fastcall member was emitted as a default-convention
    # member (0x406540 family: `mov [ecx+off], edx; retn` bodies came out
    # as `(int p0, int p1)` thiscall signatures -> cc_mismatch).
    cc_raw = fn.get("cc") or "thiscall"
    cc = {"fastcall": "__fastcall", "stdcall": "__stdcall",
          "cdecl": "__cdecl"}.get(cc_raw, cc_raw)
    params = []
    # R5: proto params can carry IDA's own NAME annotations
    # (`size_t BufferCount`) and varargs ellipsis -- strip the annotation
    # word (never a type keyword) and drop bare `...` parts
    _TY_WORDS = {
        "int", "char", "void", "unsigned", "signed", "long", "short",
        "float", "double", "const", "bool", "wchar_t", "size_t",
        "__int8", "__int16", "__int32", "__int64",
        "_DWORD", "_WORD", "_BYTE", "_QWORD", "va_list",
    }

    def _scrub_param(part):
        part = part.strip()
        # CW2: IDA register annotations ride INSIDE the type spelling
        # (`double@<st0>`, `char@<cf>` -> C2018 unknown character '0x40').
        part = re.sub(r"@<[^>]*>", "", part).strip()
        while True:
            m = re.match(r"^(.*\S)\s+([A-Za-z_]\w*)$", part)
            if m and m.group(2) not in _TY_WORDS and \
                    not m.group(1).endswith("*"):
                part = m.group(1)
            else:
                break
        # CW2: IDA also writes the parameter NAME glued after the star
        # (`char *Destination`, `const wchar_t *Str`) -- the loop above
        # needs whitespace before the name and never fires there, so the
        # emitted prototype read `char *Destination p0` (C2146 missing ','
        # before identifier 'p0').  Strip one trailing identifier after a
        # star when it is not a type word.
        m = re.match(r"^(.*\*)\s*([A-Za-z_]\w*)$", part)
        if m and m.group(2) not in _TY_WORDS and \
                not m.group(2).startswith("__"):
            part = m.group(1).strip()
        return part
    if fn.get("params"):
        for p in fn["params"]:
            params.append((spell_type(p.get("type") or "int"), p.get("name") or "p0"))
    else:
        # export proto fallback: strip cc + this
        proto = ex.proto
        for c in ("__thiscall", "__stdcall", "__cdecl", "__fastcall"):
            proto = proto.replace(c, " ")
        m = re.search(r"\((.*)\)\s*$", proto)
        if m:
            inner = m.group(1).strip()
            if inner:
                for i, part in enumerate(inner.split(",")):
                    part = part.strip()
                    if not part or part.endswith("this") or part == "this":
                        continue
                    if part == "..." or part.rstrip("*").strip() == "...":
                        continue      # varargs: not a nameable parameter
                    params.append((spell_type(_scrub_param(part)),
                                   "p%d" % i))
    # NO_CLS-recovered members: signals carried an untyped all-`int` param
    # list (the very loss the vtable-slot attribution had to recover from),
    # while the export proto -- the same live-typing authority used for the
    # return type above -- spells the real pointer widths.  Re-spell ONLY
    # this recovered population; registry-typed signatures are never
    # touched (no blast radius on the 109 already byte-matching NO_CLS
    # free functions or on the historical MATCH pool).
    if cls_src and str(cls_src).startswith("resolve:") and params and \
            all(t == "int" for t, _ in params):
        pp = _proto_params(ex.proto)
        if pp:
            params = pp
            ret_notes.append(
                ("proto_param_spell",
                 "NO_CLS-recovered member: all-int registry params -> "
                 "proto types (%d params)" % len(pp)))
    # arity cross-check vs the binary epilogue (D-fix: `ret` vs `ret 4`
    # cluster): the disasm's `retn N` is the callee's own stack cleanup --
    # for thiscall, N == sum(param widths). Excess signature params produce
    # `ret 4` shapes the original never had.
    dropped = []
    # ---- R4 cdecl / free-function arbitration ---------------------------
    # Criterion is the BINARY, not the registry (the registry's thiscall
    # attribution is binary-consistent: all 9,597 thiscall functions in
    # full_export read ECX).  A class-attributed function whose entry never
    # touches the ECX family, whose parameters are all read from the stack,
    # and whose epilogue is a bare `retn` (no callee cleanup) is a __cdecl
    # free function: emitting it as a thiscall member adds `ret 4n` cleanup
    # the original never had (and any this-typed pseudo param shifts the
    # argument slots).
    #   NOT this family: Math::Abs16Cmp 0x5B2990 -- it reads ECX
    #   (`mov cx,[ecx]`) and pops 8 bytes: a genuine thiscall member whose
    #   remaining diff is evaluation order / register allocation.
    free_fn = False
    retn_bytes, retn_bare = _retn_width(ex.disasm_lines)
    if retn_bare and not _uses_ecx(ex.disasm_lines) and \
            _reads_stack_arg(ex.disasm_lines):
        proto_cc = ""
        for c in ("__cdecl", "__stdcall", "__fastcall", "__thiscall"):
            if c in (ex.proto or ""):
                proto_cc = c
                break
        pp = _proto_params(ex.proto, keep_this=True)
        if pp and len(pp) > len(params):
            params = pp
        cc = "__cdecl"
        free_fn = True
        ret_notes.append(
            ("cc_cdecl_arbitration",
             "binary: no ECX use in first 20 insns + stack args + bare "
             "retn -> __cdecl free function (registry cc was %s, proto %s)"
             % (cc_raw, proto_cc or "none")))
    if cc == "thiscall":
        retn_bytes = 0
        dis = ex.disasm_lines
        for dl in reversed(dis[-4:]):
            m2 = re.match(r"^\s*[0-9A-Fa-f]+:\s*retn\s+(?:0x)?([0-9A-Fa-f]+)",
                          dl)
            if m2:
                retn_bytes = int(m2.group(1), 16)
                break
            if re.match(r"^\s*[0-9A-Fa-f]+:\s*retn\b", dl):
                break
        # fastcall detection (binary-authoritative): tiny setters whose
        # data movement stores EDX through ECX (`mov [ecx+off], edx`)
        # with a bare `retn` take the value in EDX, not on the stack --
        # a thiscall+param signature is a mis-typing for them.
        head = [re.sub(r"^\s*[0-9A-Fa-f]+:\s*", "", d) for d in dis[:3]]
        edx_store = any(
            re.match(r"mov\s+(?:(?:dword|word|byte|qword)\s+)?(?:ptr\s+)?"
                     r"\[ecx[^\]]*\],\s*edx$", h) for h in head)
        no_stack_read = not any("[esp" in d for d in dis)
        if retn_bytes == 0 and params and edx_store and no_stack_read \
                and len(dis) <= 6:
            cc = "__fastcall"
        elif not no_stack_read:
            pass   # body reads stack args: signature arity is real (static
            # member / mislabelled calling convention -- pathology, not fix)
        elif retn_bytes > 4 * len(params):
            # R3 stdcall arbitration (COM-stub family 0x773B40..0x773BB0):
            # thiscall pops ONLY its params (this travels in ECX), so
            # `retn N` with N > 4*nparams is impossible for thiscall.
            # The binary truth: __stdcall member (this = first STACK arg,
            # callee pops 4*(1 + nparams)).  Pad unused int params to the
            # arity the epilogue declares.
            want_n = retn_bytes // 4 - 1
            if want_n >= 0 and retn_bytes % 4 == 0:
                cc = "__stdcall"
                pad = want_n - len(params)
                for k in range(pad):
                    params.append(("int", "p%d" % (len(params))))
                if pad > 0:
                    ret_notes.append(
                        ("cc_stdcall_arbitration",
                         "thiscall retn 0x%X > 4*%d params -> __stdcall "
                         "member, padded %d unused int param(s) (COM-stub "
                         "family; body never reads [esp+])"
                         % (retn_bytes, len(params) - pad, pad)))
        else:
            while params and sum(
                    (WIDTH_TY.get(t, 4) or 4) for t, _ in params) > retn_bytes:
                dropped.append(params.pop())
    elif cc == "__stdcall":
        # R3 stdcall-member arity (Game::Stub3 / MissionStubReturnZero2
        # family): callee pops 4*(1 + nparams) INCLUDING this.  A retn
        # that small means IDA counted the this as a param -- drop the
        # phantom params (body never reads the stack).
        retn_bytes = 0
        dis = ex.disasm_lines
        for dl in reversed(dis[-4:]):
            m2 = re.match(r"^\s*[0-9A-Fa-f]+:\s*retn\s+(?:0x)?([0-9A-Fa-f]+)",
                          dl)
            if m2:
                retn_bytes = int(m2.group(1), 16)
                break
            if re.match(r"^\s*[0-9A-Fa-f]+:\s*retn\b", dl):
                break
        no_stack_read = not any("[esp" in d for d in dis)
        if retn_bytes and no_stack_read and retn_bytes % 4 == 0:
            have = sum((WIDTH_TY.get(t, 4) or 4) for t, _ in params)
            # Audit-rem ③: a FREE __stdcall function has no implicit
            # `this` slot -- the whole retn cleanup belongs to explicit
            # params (0x48ACE0 Return::HRESULT_Fail: retn 0Ch = 3 params,
            # not 2 + a phantom receiver).
            want = max(0, retn_bytes // 4 - (1 if cls else 0))
            while len(params) > want:
                dropped.append(params.pop())
            if len(params) < want:
                pad = want - len(params)
                for k in range(pad):
                    params.append(("int", "p%d" % len(params)))
                if pad:
                    ret_notes.append(
                        ("cc_stdcall_arity",
                         "stdcall %s retn 0x%X -> arity %d padded"
                         % ("member" if cls else "free", retn_bytes, want)))
    # Audit-rem ①: this-as-id arbitration (see _this_as_id_evidence).
    # Only the pure-ECX compare family: no declared params, bare retn,
    # thiscall.  The receiver becomes an integer __fastcall parameter
    # (static member) -- the honest API; codegen is identical.
    this_as_id = False
    if not free_fn and cc in ("thiscall", "__thiscall") and not params:
        rb, bare = _retn_width(ex.disasm_lines)
        vals = _this_as_id_evidence(ex)
        if bare and vals:
            this_as_id = True
            cc = "__fastcall"
            params = [("int", "p0")]
            ret_notes.append(
                ("this_as_id",
                 "receiver is an integer ID: no [ecx] memory operand, "
                 "%d small cmp-ecx immediates (0x%X..0x%X), bare retn "
                 "-> static __fastcall int parameter"
                 % (len(vals), min(vals), max(vals))))
    # R3 ret-width narrowing from the binary's return paths: when EVERY
    # value-producing ret writes only AL (mov al / xor al / setcc al) the
    # real return type is char-width; AX-only -> short.  Only narrows an
    # int-family registry ret (bool/char/ptr spellings are left alone).
    if ret in ("int", "unsigned int", "long", "unsigned long"):
        rw = _disasm_ret_width(ex.disasm_lines)
        if rw == 1:
            ret_notes.append(("ret_width_narrow",
                              "all ret paths write AL only -> ret int "
                              "narrowed to unsigned char"))
            ret = "unsigned char"
        elif rw == 2:
            ret_notes.append(("ret_width_narrow",
                              "all ret paths write AX only -> ret int "
                              "narrowed to short"))
            ret = "short"
    # R6: solver-domain supplement (proto + domain dual source).  The
    # minclass assignments carry per-entity resolved types; a UNIQUE
    # forced/narrow domain overrides the proto/registry guess, with the
    # signed-default ledger policy for sign pairs.  Applied narrowly:
    # only pointer/class answers over int-family spellings, only when
    # the body shows pointer use of the parameter (blanket re-typing of
    # currently-compiling signatures was the regression vector).
    params, dom_notes = _solver_domain_params(
        ex.addr, params, ex.body_lines, dropped)
    ret_notes.extend(dom_notes)
    return {
        "addr": ex.addr,
        "cls": cls,
        "method": method,
        "orig_name": name,
        "name_placeholder": bool(fn.get("name_placeholder")),
        "cls_src": cls_src,
        "cls_proto_override": bool(pm and pm.group(1) == cls
                                   and fn.get("cls") != cls),
        "ret": ret,
        "cc": cc,
        "free": free_fn,
        # Audit-rem ①: receiver is an integer ID (see _this_as_id_evidence);
        # emitted as a STATIC __fastcall member with int p0.
        "this_as_id": this_as_id,
        # R7.1: whether IDA's a1 is the RECEIVER.  True only for real
        # receiver-carrying conventions (thiscall ECX / proto names a
        # `this` parameter).  A __stdcall leaf whose args live on the
        # stack has NO this at a1 -- the positional aN->pN map must
        # start at 1 there (MapClass::CheckCellsBuildable was shifted a
        # slot -> C2446).  A __fastcall FREE function (BinkMovieClass::
        # OpenFile: register args, no receiver) is the same story -- its
        # a1 is the first explicit argument, never this.
        "this_at_a1": (not free_fn) and (not this_as_id) and (
            cc in ("thiscall", "__thiscall") or
            bool(re.search(r"\bthis\b", ex.proto or ""))),
        "params": params,                      # [(era_type, name)]
        "arity_dropped": ["%s %s" % (t, n) for t, n in dropped],
        "sig_notes": ret_notes,
        "param_names": [n for _, n in params],
        "params_spelled": params,
    }


# ---------------------------------------------------------------- byref widen

def widen_byref_for_dispatch(ctx):
    """Widen BYREF byte arrays that feed a dispatch whose returned pointer is
    indexed (callee writes through the buffer beyond the declared size)."""
    text = "\n".join(ctx.lines)
    decl = re.search(r"^\s*(unsigned char|_BYTE|char)\s+(\w+)\[(\d+)\]",
                     text, re.M)
    if not decl:
        return
    ty, arr, n = decl.group(1), decl.group(2), int(decl.group(3))
    # member-ptr dispatch form: V = (this->*(...)m[K])(..., ARR)
    dm = re.search(r"(\w+)\s*=\s*\(this->\*.*?\[\d+\]\)\([^)]*\b%s\b"
                   r"[^)]*\)" % re.escape(arr), text)
    if not dm:
        return
    var = dm.group(1)
    idxs = [int(i) for i in
            re.findall(r"\b%s\s*\[\s*(\d+)\s*\]" % re.escape(var), text)]
    if not idxs:
        return
    need = (max(idxs) + 1) * 4
    if need > n:
        text = text.replace("%s[%d]" % (arr, n), "%s[%d]" % (arr, need), 1)
        ctx.lines = text.split("\n")
        ctx.note("array_widen",
                 "%s[%d] -> %s[%d]: dispatch callee writes %d bytes through "
                 "the buffer (indexed-return evidence %s[0..%d])"
                 % (arr, n, arr, need, need, var, max(idxs)))


# ---------------------------------------------------------------- shell supply

def shell_augment(by_cls, views, reg, depth=2):
    """R7 member-type supply: foreign classes whose members the bodies
    ACCESS (through-pointer views, `v11[1].field_08` records) must get a
    real shell block in the unit hpp, not a bare `class C;` forward --
    `v3->vfptr` (C2227/C2039) and `v11[1].Stream_field_08` / `Stream*`
    arithmetic (C2036 on an incomplete type) all resolve once the class
    is DEFINED (members from views + tail pad to the registry size).

    Recurses into pointer-typed member views (depth-capped at 2 to
    prevent chain explosions).  Returns {cls: []} shell buckets to merge
    into by_cls (own sigs always win -- a class with methods here is
    never downgraded to a shell).
    """
    out = {}
    frontier = set(views.scalars.keys()) | set(views.arrays.keys())
    d = 0
    while frontier and d < depth:
        nxt = set()
        for c in frontier:
            if not c or c in by_cls or c in out:
                continue        # None == NO_CLS free function view bucket
            size = (reg.classes.get(c) or {}).get("size") or 0
            has_views = bool(views.scalars.get(c) or views.arrays.get(c))
            if not size and not has_views:
                continue
            out[c] = []
            for roles in (views.scalars.get(c) or {}).values():
                for v in roles.values():
                    ty = v.get("type") or ""
                    if ty.endswith("*"):
                        b = ty.replace("*", "").strip()
                        if b and b not in by_cls and b not in out:
                            nxt.add(b)
        frontier = nxt
        d += 1
    return out


# ---------------------------------------------------------------- pipeline

def run_function(addr, reg, views, idx):
    ex = pseudo.fetch(addr)
    sig = derive_signature(reg, ex)
    if sig["cls"] is None:
        # NO_CLS contract (2026-11-12): a function with no class evidence
        # is a GLOBAL function -- the emitter's file-level free channel is
        # the honest shape.  Previously this hard-failed ("no registry
        # class") and burned 26.8% of the census sample.
        #
        # Calling convention is preserved from the binary/registry:
        #   cdecl/unknown -> __cdecl, stdcall -> __stdcall,
        #   fastcall      -> __fastcall,
        #   thiscall      -> __fastcall with an explicit `this_` first
        #                    parameter (ECX == arg1; member-NESS without a
        #                    class identity cannot be spelled as a member).
        sig["free"] = True
        cc = sig.get("cc")
        if cc in ("thiscall", "__thiscall"):
            sig["cc"] = "__fastcall"
            sig["params"].insert(0, ("int", "this_"))
            sig["param_names"].insert(0, "this_")
            sig["free_this"] = True
        elif cc not in ("__cdecl", "__stdcall", "__fastcall"):
            sig["cc"] = "__cdecl"
        sig["this_at_a1"] = False
        sig["sig_notes"].append(
            ("free_no_cls",
             "no class evidence (vsa_slot/proto_this/name_prefix) -> global "
             "free function, cc %s%s" % (sig["cc"],
                                         " + explicit this_" if
                                         sig.get("free_this") else "")))
    ctx = FunctionCtx(ex, sig, reg, views)
    if sig.get("free_this"):
        # the raw pseudo-code receiver keyword is C++-reserved; the free
        # shell spells it as the explicit first parameter
        ctx.lines = [re.sub(r"\bthis\b", "this_", ln) for ln in ctx.lines]
    if sig.get("this_as_id"):
        # audit-rem ①: the receiver is an integer ID -- the honest body
        # compares the explicit parameter, never the object pointer.  The
        # pseudo-code's pointer cast around the id literal is meaningless
        # for an int parameter (strip it; the codegen is unchanged).
        pname = sig["param_names"][0]
        out = []
        for ln in ctx.lines:
            ln = re.sub(r"\bthis\b", pname, ln)
            ln = re.sub(
                r"\(\s*(?:[A-Za-z_]\w*(?:\s+[A-Za-z_]\w+)*)\s*\*\s*\)\s*"
                r"(?=(?:0x[0-9A-Fa-f]+|\d+)\b)", "", ln)
            out.append(ln)
        ctx.lines = out
    passes.pass_param_rename(ctx)
    passes.pass_globals(ctx)
    passes.pass_struct_globals(ctx)
    passes.pass_thislike_param(ctx)
    passes.pass_this_ptr_math(ctx)
    passes.pass_intrinsics_abs(ctx)
    passes.pass_intrinsics_lobyte(ctx)
    passes.pass_narrow_macro_reads(ctx)
    passes.pass_macro_residual_sweep(ctx)
    passes.pass_pair64(ctx)
    passes.pass_vt_dispatch(ctx)
    passes.pass_member_shapes(ctx)
    widen_byref_for_dispatch(ctx)
    # audit-rem ②: `(T*)&this->m` member-address puns -> offset-true
    # char-array view (checker R3 contract; codegen-neutral `lea`)
    passes.pass_member_addr_view(ctx)
    # R6: bare receiver arithmetic re-spelled AFTER member restoration
    # (this_ptr_math/member_shapes consume the `*(T *)(this + K)` deref
    # shapes first; only value-level residuals reach this pass)
    passes.pass_receiver_arith(ctx)
    passes.pass_callees(ctx)
    passes.pass_fncast_harmonize(ctx)
    passes.pass_unknown_symbols(ctx)
    passes.pass_local_retype(ctx)
    passes.pass_assign_harmonize(ctx)
    passes.pass_scope_shrink(ctx)
    passes.pass_branch_polarity(ctx)
    passes.pass_ret_view_align(ctx)
    passes.pass_era_normalize(ctx)
    # R6: C2440 completion -- LAST text authority.  Runs after
    # era_normalize (final re-render) because pass_ret_view_align flips
    # pointer-typed views to `unsigned int` AFTER earlier passes; a
    # harmonize that ran before it would key on the stale view spelling
    # (the R5 `(void *)(0)` wrap vs `unsigned int` hpp decl family).
    passes.pass_assign_harmonize2(ctx)
    # R7: class-name==global-name phantoms (Stream family) must go before
    # emission so hpp_pilot's fwd-decl logic sees a clean globals table
    passes.pass_prune_type_only_globals(ctx)
    # R8: canonical data-symbol spellings LAST (text authority after
    # era_normalize re-render); codegen-neutral reloc-key fix.
    passes.pass_global_canon(ctx)
    # R8: signed-evidence global reads (byte-carrier cast form)
    passes.pass_signed_globals(ctx)

    # unit selection (rule 2: cpp <-> hpp same name):
    # D-fix 1 -- the OWNING CLASS names the unit so a corrected fn->cls
    # attribution (e.g. RawFileClass::GetMember06, backfill-corrected out of
    # an ICF-folded ObjectClass name) lands in RawFileClass.cpp/hpp instead
    # of the stale export-file class. Global functions keep the export stem.
    key = addr.lower().replace("0x", "").zfill(8).upper()
    entry = idx.get(key) or {}
    if sig["cls"]:
        unit = re.sub(r"[^A-Za-z0-9_]", "_", sig["cls"])
    else:
        unit = os.path.splitext(os.path.basename(entry.get("file", "misc.cpp")))[0]
    return ctx, unit


# ---------------------------------------------------------------- emission

def _cc_token(sig, default="__cdecl"):
    """Emission calling-convention token for a free function."""
    return {"__fastcall": " __fastcall",
            "__stdcall": " __stdcall",
            "__cdecl": " __cdecl"}.get(sig.get("cc"), " " + default)


def free_decl(sig):
    """`extern RET __cdecl Name(args);` for a cdecl-arbitrated free fn."""
    args = ", ".join("%s %s" % (t, n) for t, n in sig["params_spelled"])
    return "extern %s %s %s(%s);" % (sig["ret"], _cc_token(sig).strip(),
                                     sig["method"], args)


def emit_cpp(ctx, unit, hpp_name=None):
    from pseudo import render
    sig = ctx.sig
    args = ", ".join("%s %s" % (t, n) for t, n in sig["params"])
    cls_ident = re.sub(r"[^A-Za-z0-9_]", "_", sig["cls"] or "Unnamed")
    if sig.get("free"):
        # R4 cdecl arbitration / NO_CLS global path: the binary has no
        # class identity (or no receiver register), so the function is
        # emitted at global scope with its registry calling convention
        # (a thiscall member would pop its arguments).
        head = "%s%s %s(%s)" % (sig["ret"], _cc_token(sig), sig["method"],
                                args)
    else:
        cc_tok = {"__fastcall": " __fastcall",
                  "__stdcall": " __stdcall"}.get(sig.get("cc"), "")
        head = "%s%s %s::%s(%s)" % (sig["ret"], cc_tok, cls_ident,
                                    sig["method"], args)
    if ctx.stmts is not None:
        body = render(ctx.stmts, indent=1)
    else:
        body = ["    " + ln for ln in ctx.lines]
    lines = ["// GENERATED by tools/decomp_sys/decompile.py -- DO NOT EDIT.",
             "// source: decompile-results/full_export  fn 0x%s (%s)"
             % (ctx.sig["addr"][2:].upper().lstrip("0").zfill(6),
                ctx.sig["orig_name"]),
             '#include "%s.hpp"' % (hpp_name or unit),
             "",
             head]
    lines.append("{")
    nonempty = [ln for ln in body if ln.strip()]
    if nonempty:
        lines.extend(nonempty)
    lines.append("}")
    return "\n".join(lines) + "\n"


# ---------------------------------------------------------------- era compile

ERA_TYPES_SRC = os.path.join(HERE, "era_types.h")


def write_era_types(inc_dir):
    """CW2: drop the shared types-only preamble into the unit include dir.

    Every generated hpp starts with `#include "era_types.h"`; the driver
    compiles with `/I <out>/include`, so the file lives next to the hpps.
    """
    os.makedirs(inc_dir, exist_ok=True)
    with open(ERA_TYPES_SRC, encoding="utf-8") as f:
        data = f.read()
    dst = os.path.join(inc_dir, "era_types.h")
    try:
        with open(dst, encoding="utf-8") as f:
            if f.read() == data:
                return dst
    except OSError:
        pass
    with open(dst, "w", encoding="utf-8", newline="\n") as f:
        f.write(data)
    return dst


def era_compile(cpp_path, outdir):
    sys.path.insert(0, os.path.join(ROOT, "tools", "codegen_match"))
    from build_era import era_env
    import subprocess
    vc_dir, env = era_env()
    cl = os.path.join(vc_dir, "BIN", "cl.exe")
    cpp_path = os.path.abspath(cpp_path)
    outdir = os.path.abspath(outdir)
    inc = os.path.join(os.path.dirname(cpp_path), "include")
    r = subprocess.run(
        [cl, "/nologo", "/O2", "/Gy", "/c", "/I" + inc,
         "/Fo" + os.path.join(outdir, os.path.splitext(
             os.path.basename(cpp_path))[0] + ".obj"), cpp_path],
        env=env, capture_output=True, text=True, cwd=outdir)
    return r


# ---------------------------------------------------------------- driver

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("addrs", nargs="*")
    ap.add_argument("--pilot", action="store_true")
    ap.add_argument("--out", default=DEFAULT_OUT)
    ap.add_argument("--no-compile", action="store_true")
    ap.add_argument("--codegen-match", action="store_true",
                    help="bonus: byte-compare era output vs original exe")
    args = ap.parse_args()

    addrs = list(args.addrs)
    if args.pilot:
        addrs = [a for a, _ in PILOT]
    if not addrs:
        ap.error("give addresses or --pilot")

    reg = Registry.get()
    views = ClassView()
    idx = pseudo.load_index()

    os.makedirs(args.out, exist_ok=True)
    inc_dir = os.path.join(args.out, "include")
    os.makedirs(inc_dir, exist_ok=True)
    write_era_types(inc_dir)

    contexts = []
    for addr in addrs:
        ctx, unit = run_function(addr, reg, views, idx)
        contexts.append((ctx, unit))
        print("[decomp] %s %s::%s -> unit %s" % (
            ctx.sig["addr"], ctx.sig["cls"], ctx.sig["method"], unit))

    # ---- group by unit (rule 2: one cpp per hpp name)
    units = OrderedDict()
    for ctx, unit in contexts:
        units.setdefault(unit, []).append(ctx)

    report = {"functions": [], "units": {}, "stats": {}}
    for unit, ctxs in units.items():
        cpp_parts = []
        for ctx in ctxs:
            cpp_parts.append("")
            cpp_parts.append(emit_cpp(ctx, unit).rstrip())
        cpp_path = os.path.join(args.out, unit + ".cpp")
        with open(cpp_path, "w", encoding="utf-8", newline="\n") as f:
            f.write("\n".join(cpp_parts) + "\n")
        print("[emit] %s" % cpp_path)

        # pilot hpp: all classes touched by this unit
        by_cls = OrderedDict()
        for ctx in ctxs:
            if ctx.sig["cls"] is None:
                continue        # NO_CLS global: extern-only unit hpp
            bucket = by_cls.setdefault(ctx.sig["cls"], [])
            if not ctx.sig.get("free"):
                bucket.append(ctx.sig)
        for ctx in ctxs:
            for owner, csigs in getattr(ctx, "used_callees", {}).items():
                bucket = by_cls.setdefault(owner, [])
                for cs in csigs:
                    if not any(s.get("method") == cs.get("method")
                               for s in bucket):
                        bucket.append(cs)
        # R7: foreign-class shells (member-type supply)
        for cls, bucket in shell_augment(by_cls, views, reg).items():
            by_cls.setdefault(cls, bucket)
        members_by_cls = {}
        unit_globals = {}
        unit_externs = []
        for ctx in ctxs:
            unit_globals.update(getattr(ctx, "used_globals", {}))
            for d in getattr(ctx, "used_callee_exts", []):
                if d not in unit_externs:
                    unit_externs.append(d)
            if ctx.sig.get("free"):
                d = free_decl(ctx.sig)
                if d not in unit_externs:
                    unit_externs.append(d)
        for cls, sigs in by_cls.items():
            size = (reg.classes.get(cls) or {}).get("size") or 0
            hpp_text, members = hpp_pilot.gen_class_hpp(
                cls, views, sigs, size, used_globals=unit_globals,
                extra_externs=unit_externs)
            hpp_path = os.path.join(inc_dir, unit + ".hpp")
            with open(hpp_path, "a", encoding="utf-8", newline="\n") as f:
                f.write(hpp_text)
            members_by_cls[cls] = members
        if not by_cls:
            # class-less unit (NO_CLS free functions only): the cpp still
            # includes <unit>.hpp, so it must exist with the extern block
            hpp_path = os.path.join(inc_dir, unit + ".hpp")
            with open(hpp_path, "a", encoding="utf-8", newline="\n") as f:
                f.write(hpp_pilot.gen_free_hpp(
                    unit, used_globals=unit_globals,
                    extra_externs=unit_externs))
        unit_sigs = []
        for cls, sigs in by_cls.items():
            unit_sigs.extend(sigs)
        report["units"][unit] = {
            "cpp": cpp_path,
            "hpp": os.path.join(inc_dir, unit + ".hpp"),
            "classes": list(by_cls.keys()),
            "members": {c: sorted(m) for c, m in members_by_cls.items()},
        }

    # ---- self-check per function
    all_ok = True
    for ctx, unit in contexts:
        body = "\n".join(ctx.lines)
        # class-typed identifiers: this + registry-class params
        ct = {"this"}
        for t, n in ctx.sig["params"]:
            base = t.replace("*", "").strip()
            if base in reg.classes:
                ct.add(n)
        members = set()
        for cl in report["units"][unit]["classes"]:
            members.update(report["units"][unit]["members"].get(cl, []))
        rep = checker.check_function(ctx.sig["cls"], body, ct, members)
        entry = {
            "addr": ctx.sig["addr"],
            "orig_name": ctx.sig["orig_name"],
            "emitted": ("%s::%s" % (ctx.sig["cls"], ctx.sig["method"])
                        if ctx.sig["cls"] else ctx.sig["method"]),
            "name_placeholder": ctx.sig.get("name_placeholder", False),
            "cls_src": ctx.sig.get("cls_src"),
            "ret": ctx.sig["ret"],
            "params": ["%s %s" % (t, n) for t, n in ctx.sig["params"]],
            "sites": [s.as_dict() for s in ctx.sites],
            "sites_total": len(ctx.sites),
            "sites_restored": sum(1 for s in ctx.sites if s.restored),
            "notes": ctx.notes,
            "rule_violations": rep.violations,
            "rule_patterns_checked": rep.checked_patterns,
        }
        report["functions"].append(entry)
        status = "PASS" if rep.ok() else "FAIL"
        if not rep.ok():
            all_ok = False
        print("[check] %s %s %s/%s restored; %d violations"
              % (status, ctx.sig["addr"],
                 entry["sites_restored"], entry["sites_total"],
                 len(rep.violations)))

    # ---- era compile
    compile_results = {}
    if not args.no_compile:
        for unit in units:
            cpp_path = os.path.join(args.out, unit + ".cpp")
            r = era_compile(cpp_path, args.out)
            compile_results[unit] = {
                "rc": r.returncode, "stdout": r.stdout, "stderr": r.stderr}
            print("[era] %s rc=%d" % (unit, r.returncode))
            if r.stdout.strip():
                print(r.stdout.rstrip())
            if r.stderr.strip():
                print(r.stderr.rstrip())
            if r.returncode != 0:
                all_ok = False
    report["compile"] = {k: {"rc": v["rc"]} for k, v in compile_results.items()}

    # ---- narrow-macro witness backflow (IG-aligned, solver-feedable)
    all_sightings = []
    for ctx, _unit in contexts:
        all_sightings.extend(getattr(ctx, "sightings", []))
    sight_path = os.path.join(args.out, "granularity_sightings.json")
    with open(sight_path, "w", encoding="utf-8") as f:
        json.dump({
            "meta": {
                "generated": None,
                "generator": "tools/decomp_sys/decompile.py "
                             "(narrow-macro witness backflow)",
                "method": {
                    "MACRO": "LOBYTE/HIBYTE/LOWORD/HIWORD store/read on "
                             "member or member-sourced local == IDA "
                             "dword-placeholder symptom; witness offset/"
                             "width recorded in IG entity format "
                             "(M:FN:this:0xOFF) for solver consumption",
                },
                "note": "format aligned with "
                        "anchors/insn_granularity_types.json",
            },
            "evidence": all_sightings,
        }, f, indent=1, ensure_ascii=False)
    print("[gran] %d narrow-macro sightings -> %s" % (
        len(all_sightings), sight_path))

    # ---- stats
    tot = sum(f["sites_total"] for f in report["functions"])
    res = sum(f["sites_restored"] for f in report["functions"])
    gran_nat = sum(1 for c, _u in contexts for s in c.sites
                   if s.action.startswith("GRANULARITY NATURAL"))
    gran_fbk = sum(1 for c, _u in contexts for s in c.sites
                   if "fallback" in s.action and s.kind == "intrinsic")
    report["stats"] = {
        "functions": len(report["functions"]),
        "offset_sites_identified": tot,
        "offset_sites_restored": res,
        "restoration_rate": (round(100.0 * res / tot, 1) if tot else None),
        "all_rule_checks_pass": all_ok,
        "granularity_natural_assignments": gran_nat,
        "granularity_bitsurgery_fallbacks": gran_fbk,
        "narrow_macro_sightings": len(all_sightings),
    }
    with open(os.path.join(args.out, "report.json"), "w", encoding="utf-8") as f:
        json.dump(report, f, indent=1, ensure_ascii=False)
    print("[stats] sites %d/%d restored (%.1f%%)" % (
        res, tot, (100.0 * res / tot if tot else 0.0)))
    return 0 if all_ok else 1


if __name__ == "__main__":
    sys.exit(main())
