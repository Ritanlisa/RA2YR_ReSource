#!/usr/bin/env python3
"""wa_variants.py -- W-A constant-family source-form variants (2026-11-12).

Companion to cw4_variants.py for the census work order
`.omo/agents/decomp_batch/report_w_series.md` §1 W-A:

  D_CONST_FOLD (736)  x87 fold->imm store
  D_CONST_FP   (273)  fdiv|fmul reciprocal
  D_IMM        (322)  immediate spelling / encoding

The dominant mechanism measured from the census: Hex-Rays renders a *load of
a .rdata double* as its numeric value, so the emitted C++ multiplies/divides
by literals.  The era compiler then constant-folds the literal expression
(`dbl = 0.0174532925199433 * 45.0` -> two immediate stores) or strength-
reduces a division into a reciprocal multiply.  The original binary loads the
doubles from .rdata (`fld ds:dbl_7E1700; fmul ds:dbl_7E1720`).

So the variant families are:

  SYM       replace folded FP literals with the data symbol the function's
            OWN disassembly references at the same bit pattern
            (`0.0174532925199433` -> `dbl_7E1700`), and declare the extern.
  SYM_SWAP  same, and swap the operands of a two-symbol `*`/`+` -- VC6
            evaluates the RIGHT operand first, while Hex-Rays printed the
            pseudo in instruction order.
  SYM_ONE_i replace only the i-th matched literal (isolates multi-site bodies).
  FPBITS    respell matched literals with the exact 17-digit decimal of the
            binary value (bit-level round trip; no-op when already exact).
  BOOL      bool->int idiom respellings: `(E != 0)` <-> `(bool)E` <->
            `(E ? 1 : 0)` for `(X & M)` masks.
  IMM       integer immediate spellings: decimal<->hex, `/2^k` <-> `>>k`,
            `%2^k` <-> `&(2^k-1)`, `*2^k` <-> `<<k` (codegen-neutral or
            strength-reduction forms).

All variants are pure source text edits: checker-neutral by construction
(no new symbols beyond registry-style data externs, no pointer arithmetic).
"""
import os
import re
import struct

# ------------------------------------------------------------------ PE values

_GAME_EXE = os.environ.get("WA_GAMEMD", r"D:\RA2MD\gamemd.exe")

SYM_RE = re.compile(
    r"\b(dbl|flt|dword|word|byte|qword|off|stru|unk)_([0-9A-Fa-f]{6,8})\b")

_WIDTH = {"dbl": 8, "qword": 8, "flt": 4, "dword": 4, "off": 4,
          "word": 2, "byte": 1}
_TYPE = {"dbl": "double", "flt": "float", "qword": "__int64",
         "dword": "unsigned int", "off": "unsigned int",
         "word": "unsigned short", "byte": "unsigned char"}

FP_LIT_RE = re.compile(
    r"(?<![\w.])(\d+\.\d+(?:[eE][+-]?\d+)?|\.\d+(?:[eE][+-]?\d+)?)(?![\w.])")
INT_LIT_RE = re.compile(
    r"(?<![\w.])(0[xX][0-9A-Fa-f]+|\d+)(?![\w.])")

_pe_cache = {}


class PEImage(object):
    """Minimal read-only view over the linked game image sections."""

    def __init__(self, path=None):
        self.path = path or _GAME_EXE
        self._ok = False
        try:
            import sys
            here = os.path.dirname(os.path.abspath(__file__))
            root = os.path.abspath(os.path.join(here, "..", ".."))
            if root not in sys.path:
                sys.path.insert(0, root)
            from tools.codegen_match.extract import PE
            self._pe = PE(self.path)
            self._raw = open(self.path, "rb").read()
            self._ok = True
        except Exception:                                # noqa: BLE001
            self._ok = False

    def read(self, va, size):
        if not self._ok:
            return None
        for s in self._pe.sections:
            if s["va"] <= va < s["va"] + max(s["vsz"], s["rsz"]):
                off = s["ro"] + (va - s["va"])
                blob = self._raw[off:off + size]
                return blob if len(blob) == size else None
        return None


def pe_image(path=None):
    key = path or _GAME_EXE
    if key not in _pe_cache:
        _pe_cache[key] = PEImage(path)
    return _pe_cache[key]


# --------------------------------------------------------------- disasm parse

def disasm_symbols(disasm_lines):
    """[(name, prefix, va)] in instruction order, de-duplicated by name.

    Only the operand part of each disasm line is inspected (the `; -> name`
    annotation repeats the symbol; de-duplication handles it either way).
    """
    out, seen = [], set()
    for ln in disasm_lines or []:
        op = ln.split(";")[0]
        for m in SYM_RE.finditer(op):
            name = m.group(0)
            if name in seen:
                continue
            seen.add(name)
            out.append((name, m.group(1), int(m.group(2), 16)))
    return out


def symbol_values(disasm_lines, pe=None):
    """[(order, name, type, raw_bytes)] for width-known data symbols."""
    pe = pe or pe_image()
    vals = []
    for i, (name, prefix, va) in enumerate(disasm_symbols(disasm_lines)):
        w = _WIDTH.get(prefix)
        if not w:
            continue
        raw = pe.read(va, w)
        if not raw:
            continue
        vals.append((i, name, _TYPE.get(prefix, "unsigned int"), raw))
    return vals


# ------------------------------------------------------------ literal matching

def _fp_equal(txt, raw):
    """Literal text vs binary constant bytes, tolerant of Hex-Rays printing.

    Hex-Rays renders doubles with ~16 significant digits (e.g.
    `0.0174532925199433` for the pi/180 double 0.017453292519943295), so a
    bit-exact comparison of the printed text misses.  Accept:
      a. bit-exact round trip (printed literal -> same bytes), or
      b. the binary value printed at the literal's own precision, or
      c. relative agreement within 1e-12 (double) / 1e-6 (float).
    """
    try:
        v = float(txt)
    except ValueError:
        return False
    if len(raw) == 8:
        if struct.pack("<d", v) == raw:
            return True
        s = struct.unpack("<d", raw)[0]
        for fmt in (".16g", ".17g", ".15g"):
            if format(s, fmt) == txt:
                return True
        if s == 0.0:
            return v == 0.0
        return abs(v - s) <= 1e-12 * abs(s)
    if len(raw) == 4:
        try:
            if struct.pack("<f", v) == raw:
                return True
        except OverflowError:
            pass
        s = struct.unpack("<f", raw)[0]
        for fmt in (".8g", ".9g", ".7g"):
            if format(s, fmt) == txt:
                return True
        if s == 0.0:
            return v == 0.0
        return abs(v - s) <= 1e-6 * abs(s)
    return False


def fp_literal_matches(body_text, symbols):
    """[(start, end, text, name, type, raw)] FP literal -> data symbol matches.

    Greedy in literal order against instruction-order symbols: the first
    unused symbol whose value equals the literal wins.  Both operand widths
    are testable: an `fld ds:dbl_X` holds 8 bytes, an `fld ds:flt_X` holds 4.
    """
    out = []
    used = set()
    for m in FP_LIT_RE.finditer(body_text):
        txt = m.group(1)
        pick = None
        for (_i, name, typ, raw) in symbols:
            if name in used:
                continue
            # only genuine FP data symbols: a 4-byte integer whose bits
            # happen to equal float32(literal) must never be substituted
            # into a double expression (int->double conversion codegen).
            if typ == "double" and len(raw) == 8 and _fp_equal(txt, raw):
                pick = (name, typ, raw)
                break
            if typ == "float" and len(raw) == 4 and _fp_equal(txt, raw):
                pick = (name, typ, raw)
                break
        if pick:
            used.add(pick[0])
            out.append((m.start(1), m.end(1), txt, pick[0], pick[1], pick[2]))
    return out, used


def int_literal_matches(body_text, symbols, min_abs=0x100):
    """[(start, end, text, name, type)] integer literal -> data symbol.

    Conservative: only literals >= min_abs, exact width equality against a
    4/2/1-byte symbol the function itself references.  Kept as its own
    family so a wrong match can never spoil the FP variant.
    """
    out, used = [], set()
    for m in INT_LIT_RE.finditer(body_text):
        txt = m.group(1)
        try:
            v = int(txt, 0)
        except ValueError:
            continue
        if abs(v) < min_abs:
            continue
        for (_i, name, typ, raw) in symbols:
            if name in used or len(raw) > 4:
                continue
            if int.from_bytes(raw, "little") == v:
                used.add(name)
                out.append((m.start(1), m.end(1), txt, name, typ, raw))
                break
    return out, used


_TOK = r"(?:[A-Za-z_]\w*(?:\[[^\]]*\])?|-?\d+(?:\.\d+)?(?:[eE][+-]?\d+)?)"
_ASSIGN_BINOP = re.compile(r"(=\s*)(%s)\s*([*+])\s*(%s)(\s*;)" % (_TOK, _TOK))


def _swap_binop(text):
    """`lhs = A op B;` -> `lhs = B op A;` for single-token operands.

    VC6 evaluates the RIGHT operand of a commutative binary op first, while
    Hex-Rays renders the pseudo in instruction (load) order -- restoring the
    data symbols alone therefore emits the pair in reverse.  Confirmed on
    0x403D50 (D_CONST_FOLD): symbol restore without swap MISMATCH, with swap
    byte-identical MATCH.
    """
    def swo(m):
        a, op, b = m.group(2), m.group(3), m.group(4)
        if a == b:
            return m.group(0)
        return "%s%s %s %s%s" % (m.group(1), b, op, a, m.group(5))
    return _ASSIGN_BINOP.sub(swo, text)


def _apply_subs(text, subs, swap=False):
    """Apply (start,end,text -> name) spans, then optionally the binop swap."""
    out = []
    pos = 0
    for (s, e, _txt, name) in sorted(subs, key=lambda x: x[0]):
        if s < pos:
            continue
        out.append(text[pos:s])
        out.append(name)
        pos = e
    out.append(text[pos:])
    new = "".join(out)
    if swap:
        new = _swap_binop(new)
    return new


# ------------------------------------------------------------------ variants

class Variant(object):
    __slots__ = ("vid", "kind", "desc", "lines", "globals")

    def __init__(self, vid, kind, desc, text, globals_):
        self.vid = vid
        self.kind = kind
        self.desc = desc
        self.lines = text.split("\n")
        self.globals = globals_        # {name: type} declared extern

    def __repr__(self):
        return "<Variant %s %s>" % (self.vid, self.kind)


def _sym_family(body, symbols):
    """SYM / SYM_SWAP / SYM_ONE_i from the FP literal<->symbol matches."""
    subs, _used = fp_literal_matches(body, symbols)
    if not subs:
        return []
    gl = {name: typ for (_s, _e, _t, name, typ, _raw) in subs}
    out = []

    def mk(vid, kind, desc, swap, only=None):
        use = subs
        if only is not None:
            use = [subs[only]]
        txt = _apply_subs(body, [(s, e, t, n) for (s, e, t, n, _ty, _r) in use],
                          swap=swap)
        out.append(Variant(vid, kind, desc, txt,
                           {n: gl[n] for (_s, _e, _t, n, _ty, _r) in use}))

    mk("SYM", "data_const_symbol",
       "folded FP literals -> data symbols (%d site%s)"
       % (len(subs), "" if len(subs) == 1 else "s"), swap=False)
    mk("SYM_SWAP", "data_const_symbol",
       "data symbols + commutative operand swap (VC6 right-first)", swap=True)
    if len(subs) > 1:
        for i in range(min(len(subs), 4)):
            mk("SYM_ONE_%d" % i, "data_const_symbol",
               "only site %d -> data symbol" % i, swap=False, only=i)
            mk("SYM_ONE_%d_SWAP" % i, "data_const_symbol",
               "only site %d -> data symbol + swap" % i, swap=True, only=i)
    return out


def _fpb_family(body, symbols):
    """FPBITS: bit-exact decimal respelling of matched literals."""
    subs, _used = fp_literal_matches(body, symbols)
    out = []
    for (s, e, txt, _n, _typ, raw) in subs:
        if len(raw) == 8:
            v = struct.unpack("<d", raw)[0]
        else:
            v = struct.unpack("<f", raw)[0]
        exact = repr(float(v))
        if exact == txt:
            continue
        new = body[:s] + exact + body[e:]
        out.append(Variant("FPB_%s" % re.sub(r"\W", "_", txt)[:14],
                           "fp_literal_bits",
                           "bit-exact respell %s -> %s (%d bytes)"
                           % (txt, exact, len(raw)), new, {}))
    return out


def _bool_family(body):
    """BOOL: bool->int idiom respellings around `(X & M) != 0` masks."""
    out = []
    pat = re.compile(
        r"(\(\s*[A-Za-z_]\w*(?:\[[^\]]*\])?\s*&\s*(?:0x[0-9A-Fa-f]+|\d+)"
        r"\s*\))\s*!=\s*0")
    hits = list(pat.finditer(body))
    if not hits:
        return out

    def mk(vid, desc, fn):
        pieces, pos = [], 0
        for m in hits:
            pieces.append(body[pos:m.start()])
            pieces.append(fn(m.group(1)))
            pos = m.end()
        pieces.append(body[pos:])
        out.append(Variant(vid, "bool_idiom", desc, "".join(pieces), {}))

    mk("BOOL_CAST", "(E != 0) -> (bool)E", lambda e: "(bool)%s" % e)
    mk("BOOL_TERN", "(E != 0) -> (E ? 1 : 0)", lambda e: "(%s ? 1 : 0)" % e)
    mk("BOOL_UCH", "(E != 0) -> ((unsigned char)E != 0)",
       lambda e: "((unsigned char)%s != 0)" % e)
    # reverse direction: (bool)(E) -> (E != 0)
    pat2 = re.compile(r"\(\s*bool\s*\)\s*(\(\s*[A-Za-z_]\w*(?:\[[^\]]*\])?"
                      r"\s*&\s*(?:0x[0-9A-Fa-f]+|\d+)\s*\))")
    h2 = list(pat2.finditer(body))
    if h2:
        pieces, pos = [], 0
        for m in h2:
            pieces.append(body[pos:m.start()])
            pieces.append("%s != 0" % m.group(1))
            pos = m.end()
        pieces.append(body[pos:])
        out.append(Variant("BOOL_UNC", "bool_idiom", "(bool)E -> (E != 0)",
                           "".join(pieces), {}))
    return out


def _imm_family(body):
    """IMM: integer spellings + strength-reduction forms (all neutral or
    testable source forms; each is a separate variant)."""
    out = []
    # decimal -> hex for literals >= 16 (codegen-neutral; sanity family)
    def to_hex(text):
        def f(m):
            v = int(m.group(1), 0)
            if v < 16 or m.group(1).lower().startswith("0x"):
                return m.group(1)
            return "0x%X" % v
        return INT_LIT_RE.sub(f, text)

    # hex -> decimal (>= 16)
    def to_dec(text):
        def f(m):
            t = m.group(1)
            if not t.lower().startswith("0x"):
                return t
            return str(int(t, 16))
        return INT_LIT_RE.sub(f, text)

    # division/modulo by power of two <-> shift/mask (unsigned semantics)
    def div_to_shift(text):
        def f(m):
            v = int(m.group(2))
            if v > 1 and v & (v - 1) == 0:
                return "%s >> %d" % (m.group(1), v.bit_length() - 1)
            return m.group(0)
        return re.sub(r"([A-Za-z_]\w*(?:\[[^\]]*\])?)\s*/\s*(\d+)\b", f, text)

    def mod_to_mask(text):
        def f(m):
            v = int(m.group(2))
            if v > 1 and v & (v - 1) == 0:
                return "%s & %d" % (m.group(1), v - 1)
            return m.group(0)
        return re.sub(r"([A-Za-z_]\w*(?:\[[^\]]*\])?)\s*%\s*(\d+)\b", f, text)

    def mul_to_shift(text):
        def f(m):
            v = int(m.group(2))
            if v > 1 and v & (v - 1) == 0:
                return "%s << %d" % (m.group(1), v.bit_length() - 1)
            return m.group(0)
        return re.sub(r"([A-Za-z_]\w*(?:\[[^\]]*\])?)\s*\*\s*(\d+)\b", f, text)

    for vid, desc, fn in (
            ("IMM_HEX", "decimal literals -> hex", to_hex),
            ("IMM_DEC", "hex literals -> decimal", to_dec),
            ("IMM_SHR", "x / 2^k -> x >> k", div_to_shift),
            ("IMM_AND", "x % 2^k -> x & (2^k-1)", mod_to_mask),
            ("IMM_SHL", "x * 2^k -> x << k", mul_to_shift)):
        new = fn(body)
        if new != body:
            out.append(Variant(vid, "imm_form", desc, new, {}))
    return out


# ------------------------------------------------------------------- driver

def generate(lines, meta):
    """lines: emitted body lines; meta: {disasm: [...], family: str}."""
    body = "\n".join(lines)
    disasm = (meta or {}).get("disasm") or []
    symbols = symbol_values(disasm)
    out = []
    fam = (meta or {}).get("family") or ""
    # D_CONST_FOLD / D_CONST_FP: the load-symbol family is the mechanism.
    out.extend(_sym_family(body, symbols))
    out.extend(_fpb_family(body, symbols))
    out.extend(_bool_family(body))
    # IMM family only where the bucket is immediate-flavoured (or no symbols
    # matched at all -- gives the immediate hypotheses a fair test there).
    if fam == "D_IMM" or not out:
        out.extend(_imm_family(body))
    # integer-literal -> data symbol (conservative; separate family)
    if fam in ("D_IMM", "D_CONST_FOLD", "D_CONST_FP"):
        isubs, _u = int_literal_matches(body, symbols)
        if isubs:
            gl = {n: ty for (_s, _e, _t, n, ty, _r) in isubs}
            txt = _apply_subs(body, [(s, e, t, n) for (s, e, t, n, _ty, _r)
                                     in isubs])
            out.append(Variant("ISYM", "int_const_symbol",
                               "integer literals -> data symbols (%d)"
                               % len(isubs), txt, gl))
    # de-duplicate identical bodies, keep first id
    seen = set()
    uniq = []
    for v in out:
        key = "\n".join(v.lines)
        if key in seen:
            continue
        seen.add(key)
        uniq.append(v)
    return uniq
