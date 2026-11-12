#!/usr/bin/env python3
"""wa_const.py -- W-A generator pass: restore folded .rdata constants (2026-11-12).

Evidence chain (probe = .omo/agents/decomp_batch/report_wa.md):

  D_CONST_FOLD (736 functions, 19.6% of NG): the emitted body is
      DataGlobal_87E260 = 0.0174532925199433 * 45.0;
  and the era compiler constant-folds it into two immediate stores.  The
  ORIGINAL binary loads both doubles from .rdata:
      fld ds:dbl_7E1700 ; fmul ds:dbl_7E1720 ; fstp dbl_87E260
  Hex-Rays folded the loads into numeric literals; the disassembly block of
  the same export still carries the symbol operands.

  D_CONST_FP (247 functions): `X = A / 60.0` -- MSVC 6 strength-reduces a
  division by a literal into a reciprocal multiply; the original divides by
  a .rdata double (`fdiv ds:dbl_7E16F8`).  Same fix.

The pass therefore replaces an FP literal with the data symbol the function's
own disassembly loads at the same bit pattern, and registers the extern
(`extern double dbl_7E1700;` -- pass_residual_idents would also declare it).

Safety rules (measured, not guessed):
  * only LOAD operands are candidates -- the destination of `fstp`/`mov [X],`
    is never a constant the pseudo could have folded (it would otherwise
    match zero-initialised .data for a literal `0.0`);
  * statement spans: every Hex-Rays statement carries a `/*0xADDR*/` marker
    (address of its LAST instruction); a literal may only map to a symbol
    loaded inside its own statement span.  This prevents a genuine literal
    `0.5` from being rewritten just because the function loads dbl_7E1738
    (0.5) elsewhere;
  * value match tolerates Hex-Rays' ~16-digit printing of doubles
    (`0.0174532925199433` == 0x7E1700 bytes) -- see wa_variants._fp_equal;
  * operand swap: VC6 evaluates the RIGHT operand of x87 `*`/`+` first
    (micro-test: `c = a * b` -> fld b; fmul a), while Hex-Rays prints the
    pseudo in instruction order.  Swap applies only when BOTH operands were
    substituted and both are FP (integer add is left-first -- no swap).
"""
import os
import re

import wa_variants as WV

MARKER_RE = re.compile(r"/\*0x([0-9A-Fa-f]+)\*/\s*$")
_ADDR_LINE = re.compile(r"^([0-9A-Fa-f]+):\s*(.*)$")
_MNEM = re.compile(r"^([a-z][a-z0-9]*)\s*(.*)$")

_STORE_MNEMS = {
    "fst", "fstp", "fist", "fistp", "fisttp", "fbstp",
    "mov", "movzx", "movsx", "movsxd", "lea", "xchg",
}
# memory-write first-operand mnemonics where the READ side is still a load
_RMW_OK = {"add", "sub", "or", "and", "xor", "inc", "dec", "neg", "not",
           "shl", "shr", "sar", "sal", "rol", "ror", "imul"}


def _instr_addr(line):
    m = _ADDR_LINE.match(line.strip())
    if not m:
        return None
    return int(m.group(1), 16), m.group(2)


def load_symbols(disasm_lines):
    """[(instr_addr, name, type, raw)] -- LOAD operands only, in order.

    A symbol is a load unless it sits in the destination slot of a store
    mnemonic (`fstp dbl_X`, `mov dword ptr [dbl_X], eax`, `lea`).  For
    read-modify-write mnemonics the memory operand is a load as well.
    """
    pe = WV.pe_image()
    out = []
    for ln in disasm_lines or []:
        ia = _instr_addr(ln)
        if not ia:
            continue
        addr, body = ia
        body = body.split(";")[0]
        m = _MNEM.match(body)
        if not m:
            continue
        mn, operands = m.group(1), m.group(2)
        parts = [p.strip() for p in operands.split(",")]
        first_is_dest = mn in _STORE_MNEMS and parts and \
            WV.SYM_RE.search(parts[0] or "")
        if mn in _RMW_OK and parts and WV.SYM_RE.search(parts[0] or ""):
            # `add [X], eax` reads X before writing it -- still a load.
            first_is_dest = False
        for pi, part in enumerate(parts):
            if first_is_dest and pi == 0:
                continue
            for sm in WV.SYM_RE.finditer(part):
                name, prefix, va = sm.group(0), sm.group(1), \
                    int(sm.group(2), 16)
                w = WV._WIDTH.get(prefix)
                if not w:
                    continue
                raw = pe.read(va, w)
                if not raw:
                    continue
                out.append((addr, name, WV._TYPE.get(prefix, "unsigned int"),
                            raw))
    return out


def statement_spans(ex_body_lines):
    """[(line_index, start_addr_or_None, end_addr_or_None)] for ctx.lines.

    Built from the RAW export body (the `/*0xADDR*/` markers are removed by
    FunctionCtx's strip_line_comments, so this runs on ex.body_lines and
    aligns by non-blank line order).  The first statement's window starts at
    0 (every image address is above it).
    """
    rows = []
    prev_end = 0
    for ln in ex_body_lines or []:
        m = MARKER_RE.search(ln)
        marker = int(m.group(1), 16) if m else None
        # strip the trailing marker space, then apply the same // stripping
        bare = MARKER_RE.sub("", ln)
        bare = re.sub(r"\s*//(?!\s*0x)[^\n]*$", "", bare).rstrip()
        if not bare.strip():
            continue
        if marker is not None:
            rows.append((len(rows), prev_end, marker))
            prev_end = marker
        else:
            rows.append((len(rows), None, None))
    return rows


def _fp_symbols_by_span(symbols, spans, n_lines):
    """{line_index: [(name, type, raw)]} restricted to that statement's span."""
    out = {}
    if not spans or len(spans) != n_lines:
        return None                      # alignment failed -> no span mode
    for (idx, start, end) in spans:
        if start is None or end is None:
            continue
        cands = []
        for (addr, name, typ, raw) in symbols:
            if start < addr <= end:
                cands.append((len(cands), name, typ, raw))
        if cands:
            out[idx] = cands
    return out


def restore_data_constants(ctx):
    """Replace folded FP literals with the data symbols they came from."""
    if os.environ.get("DECOMP_NO_DATA_CONST"):
        return 0
    dis = getattr(getattr(ctx, "ex", None), "disasm_lines", None) or []
    if not dis:
        return 0
    symbols = load_symbols(dis)
    if not symbols:
        return 0
    n_lines = len(ctx.lines)
    spans = statement_spans(getattr(ctx.ex, "body_lines", None) or [])
    by_line = _fp_symbols_by_span(symbols, spans, n_lines)
    changed = 0
    out = []
    for i, line in enumerate(ctx.lines):
        cands = (by_line or {}).get(i) if by_line is not None else None
        if not cands:
            # no span evidence for this statement -> conservative no-op
            out.append(line)
            continue
        subs, used = WV.fp_literal_matches(line, cands)
        if not subs:
            out.append(line)
            continue
        new = line
        # how many of the matched literals are integer-flavoured? (none:
        # fp_literal_matches only returns literals with a decimal point)
        names = {n for (_s, _e, _t, n, _ty, _r) in subs}
        types = {n: ty for (_s, _e, _t, n, ty, _r) in subs}
        new = _apply_spans(new, [(s, e, n) for (s, e, _t, n, _ty, _r) in subs])
        # both operands FP-symbol substituted + commutative op -> swap
        new = _maybe_swap(new, names, types)
        if new != line:
            changed += 1
            out.append(new)
            for name, ty in types.items():
                ctx.used_globals[name] = ty
            site = _site(line, new)
            if site is not None:
                ctx.sites.append(site)
        else:
            out.append(line)
    if changed:
        ctx.lines = out
        ctx.note("data_const_symbols",
                 "%d statement(s): folded .rdata FP constant(s) restored to "
                 "symbol loads (D_CONST_FOLD/D_CONST_FP mechanism)" % changed)
    return changed


def _site(old, new):
    try:
        from passes import Site
        return Site("global", old.strip(),
                    "folded FP literal -> data symbol: %s" % new.strip(),
                    False)
    except Exception:                                    # noqa: BLE001
        return None


def _apply_spans(line, subs):
    out, pos = [], 0
    for (s, e, name) in sorted(subs, key=lambda x: x[0]):
        if s < pos:
            continue
        out.append(line[pos:s])
        out.append(name)
        pos = e
    out.append(line[pos:])
    return "".join(out)


_ASSIGN_BINOP = re.compile(
    r"(=\s*)([A-Za-z_]\w*)\s*([*+])\s*([A-Za-z_]\w*)(\s*;)")


def _maybe_swap(line, names, types):
    """Swap `lhs = A * B;` when both operands are FP symbols we introduced."""
    def swo(m):
        a, op, b = m.group(2), m.group(3), m.group(4)
        if a in names and b in names and a != b:
            if types.get(a) in ("double", "float") and \
                    types.get(b) in ("double", "float"):
                return "%s%s %s %s%s" % (m.group(1), b, op, a, m.group(5))
        return m.group(0)
    return _ASSIGN_BINOP.sub(swo, line)
