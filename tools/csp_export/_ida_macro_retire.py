"""X56 shared rules: retire IDA decompiler macro vocabulary with REAL constructs.

User requirement (2026-10-17, X56): "诸如LODWORD、HIDWORD、IDA_*等反编译产生的宏也要
使用正确的方式移除掉" -- macros must be replaced with the real typed/arithmetic
construct, never deleted bare, never kept as a shim.

Truth basis (Q1): little-endian x86. The byte/word/dword at offset n of a scalar
object IS bits [8n, 8n+w) of that object's value. Therefore:

  reads   MACRO(x)  ->  mask/shift arithmetic on x   (value-exact, no pointers)
  writes  MACRO(x)=e->  read-modify-write mask form  (memory-exact, no pointers)

Forms that need operand-width knowledge the tree cannot resolve deterministically
are BANKED (kept + recorded), never guessed.

This module is the single source of rules. gen_x56_retire_macros.py (tree pass)
and _ida_vocab.py (regen emitter) both consume it, so future regeneration cannot
reintroduce the macro vocabulary (X55 fix_vftable_refs precedent).
"""
from __future__ import annotations

import json
import re
from pathlib import Path

from dataclasses import dataclass, field as dc_field

_ROOT = Path(__file__).resolve().parents[2]

# ---------------------------------------------------------------------------
# member type authority #1: corpus headers (class blocks in src/**/*.hpp|hpp-like)
# member type authority #2: tools/member_lookup.json  (fallback)
# ---------------------------------------------------------------------------
_HEADER_MEMBERS: dict[tuple[str, str], list[str]] = {}


def _load_header_members():
    """Scan corpus headers for `class|struct X { ... TYPE member; }` decl pairs.
    Ambiguity-safe: keeps ALL observed types per (class, member); the resolver
    picks only when unanimous (or pointer-conservative)."""
    if _HEADER_MEMBERS:
        return
    import os
    for dirpath, dirnames, filenames in os.walk(str(_ROOT / 'src')):
        for fn in filenames:
            if not fn.endswith(('.hpp', '.h', '.inc')):
                continue
            p = os.path.join(dirpath, fn)
            try:
                txt = open(p, encoding='utf-8', errors='replace').read()
            except OSError:
                continue
            lines = txt.split('\n')
            cls = None
            depth = 0
            in_class = False
            for l in lines:
                code = l.split('//')[0]
                if not in_class:
                    m = re.search(r'\b(?:class|struct)\s+([A-Z][A-Za-z_]\w*)[^;{]*\{', code)
                    if m:
                        cls = m.group(1)
                        in_class = True
                        depth = code.count('{') - code.count('}')
                        continue
                else:
                    depth += code.count('{') - code.count('}')
                    if depth <= 0:
                        in_class = False
                        cls = None
                        continue
                    pd = _parse_decl(l)
                    if pd:
                        _HEADER_MEMBERS.setdefault((cls, pd[1]), []).append(pd[0])


_MEMBER_TYPES_BY_NAME: dict[str, set[str]] = {}
_MEMBER_TYPES_BY_CLASS: dict[str, dict[str, str]] = {}


def _load_members():
    if _MEMBER_TYPES_BY_CLASS:
        return
    _load_header_members()
    p = _ROOT / 'tools' / 'member_lookup.json'
    if not p.exists():
        return
    data = json.loads(p.read_text(encoding='utf-8'))
    for cls, entries in data.items():
        by_name = _MEMBER_TYPES_BY_CLASS.setdefault(cls, {})
        for off, meta in entries.items():
            nm, ty = meta.get('name'), meta.get('type', '')
            if not nm:
                continue
            by_name[nm] = ty
            _MEMBER_TYPES_BY_NAME.setdefault(nm, set()).add(ty)


def classify_member_type(ty: str) -> str:
    """member type text -> width class; WUNK when not provably integer-scalar"""
    if not ty:
        return WUNK
    if '*' in ty:
        return WPTR
    m = re.match(r'\s*([A-Za-z_][\w :<>]*)\s*(\[[^\]]*\])?\s*$', ty)
    if not m:
        return WUNK
    base = m.group(1).strip()
    if m.group(2) is not None:  # array member: element type decides
        return classify_type(base)
    return classify_type(base)

# ---------------------------------------------------------------------------
# Family table: name -> (bit_shift, field_width_bits, signed)
# Offsets are IDA-canonical FIXED offsets (pro.h) -- only HIBYTE is
# sizeof-dependent and therefore needs an explicit operand width.
# ---------------------------------------------------------------------------
FAMILY: dict[str, tuple[int, int, bool]] = {
    # byte views
    'LOBYTE':    (0, 8, False),
    'SLOBYTE':   (0, 8, True),
    'BYTE1':     (8, 8, False),
    'SBYTE1':    (8, 8, True),
    'BYTE2':     (16, 8, False),
    'SBYTE2':    (16, 8, True),
    'BYTE3':     (24, 8, False),
    'BYTE4':     (32, 8, False),
    # word views
    'LOWORD':    (0, 16, False),
    'SLOWORD':   (0, 16, True),
    'HIWORD':    (16, 16, False),
    'SHIWORD':   (16, 16, True),
    'WORD1':     (16, 16, False),
    'SWORD1':    (16, 16, True),
    'WORD2':     (32, 16, False),
    'SWORD2':    (32, 16, True),
    'SWORD3':    (48, 16, True),
    # dword views
    'LODWORD':   (0, 32, False),
    'SLODWORD':  (0, 32, True),
    'HIDWORD':   (32, 32, False),
    'SHIDWORD':  (32, 32, True),
    'DWORD1':    (32, 32, False),
    'DWORD2':    (64, 32, False),
    'HIBYTE':    (-1, 8, False),   # sizeof-dependent: (sizeof(x)-1)*8
    'SHIBYTE':   (-1, 8, True),
}

# width classes for operands
W64, W32, W16, W8, WPTR, WUNK = 'W64', 'W32', 'W16', 'W8', 'WPTR', 'WUNK'
WDBL, WFLT = 'WDBL', 'WFLT'

_TYPE_WIDTH = [
    (re.compile(r'\bdouble\b'), WDBL),
    (re.compile(r'\bfloat\b'), WFLT),
    (re.compile(r'\b(?:unsigned\s+|signed\s+)?__int64\b|\b(?:unsigned\s+)?long\s+long\b|\b_QWORD\b|u?int64_t'), W64),
    (re.compile(r'\b(?:u?int32_t)\b'), W32),
    (re.compile(r'\b(?:u?int16_t)\b'), W16),
    (re.compile(r'\b(?:u?int8_t)\b'), W8),
    (re.compile(r'\bunsigned\s+__int16\b|\b(?:unsigned\s+|signed\s+)?short\b|\b_WORD\b'), W16),
    (re.compile(r'\b(?:unsigned\s+|signed\s+)?char\b|\bbool\b|\b_BYTE\b|\bU?[A-Za-z]*CHAR\b'), W8),
    (re.compile(r'\b(?:unsigned\s+|signed\s+)?(?:int|long)\b|\b_DWORD\b'), W32),
]
_PTR_RE = re.compile(r'\*')

_IDA_PREFIX = r'(?:IDA_)?'

# IDA global name prefixes encode width (reliable naming-convention evidence)
_GLOBAL_NAME_WIDTH = [
    (re.compile(r'^qword_'), W64),
    (re.compile(r'^(?:dword_|stru_|off_)'), W32),
    (re.compile(r'^(?:word_)'), W16),
    (re.compile(r'^(?:byte_|unk_)'), W8),
]

# operand forms we refuse to touch
_UNSIMPLE_RE = re.compile(r'(?:\+\+|--|\boperator\b)')


# ---------------------------------------------------------------------------
# Comment/string-aware scanner utilities
# ---------------------------------------------------------------------------
class Scan:
    """Character scanner over one file's text tracking comments/strings/asm."""

    def __init__(self, text: str):
        self.t = text
        self.n = len(text)
        # per-char code: True if this char is real code (not comment/string/asm)
        self.code = bytearray(b'\x01') * self.n
        self._mark()

    def _mark(self):
        t, n, code = self.t, self.n, self.code
        i = 0
        state = None  # None | 'line' | 'block' | 'str' | 'chr'
        # __asm { ... } blocks: everything until matching '}' is asm text
        asm_depth = 0
        asm_start = -1
        while i < n:
            c = t[i]
            nxt = t[i + 1] if i + 1 < n else ''
            if state is None:
                if c == '/' and nxt == '/':
                    state = 'line'
                    code[i] = 0
                    code[i + 1] = 0
                    i += 2
                    continue
                if c == '/' and nxt == '*':
                    state = 'block'
                    code[i] = 0
                    code[i + 1] = 0
                    i += 2
                    continue
                if c == '"':
                    state = 'str'
                    code[i] = 0
                    i += 1
                    continue
                if c == "'":
                    state = 'chr'
                    code[i] = 0
                    i += 1
                    continue
                if asm_depth == 0 and t.startswith('__asm', i) and (i == 0 or not (t[i - 1].isalnum() or t[i - 1] == '_')):
                    # enter asm mode at '{'
                    j = t.find('{', i)
                    if j != -1 and j - i < 40:
                        for k in range(i, j):
                            code[k] = 2  # marker: asm header (keep visible)
                        asm_depth = 1
                        asm_start = j
                        i = j + 1
                        continue
                if c == '{' and asm_depth:
                    asm_depth += 1
                elif c == '}' and asm_depth:
                    asm_depth -= 1
                    if asm_depth == 0:
                        code[i] = 2
                        i += 1
                        continue
                if asm_depth and asm_start != -1 and i > asm_start:
                    code[i] = 0  # inside asm block: not C code
                i += 1
                continue
            if state == 'line':
                if c == '\n':
                    state = None
                else:
                    code[i] = 0
                i += 1
            elif state == 'block':
                code[i] = 0
                if c == '*' and nxt == '/':
                    code[i + 1] = 0
                    state = None
                    i += 2
                else:
                    i += 1
            elif state in ('str', 'chr'):
                code[i] = 0
                if c == '\\':
                    if i + 1 < n:
                        code[i + 1] = 0
                    i += 2
                    continue
                if (state == 'str' and c == '"') or (state == 'chr' and c == "'"):
                    state = None
                i += 1
        # any unclosed asm block at EOF: leave as marked


def balanced_paren(text: str, open_idx: int):
    """Return index of the ')' matching the '(' at open_idx, or -1."""
    depth = 0
    for i in range(open_idx, len(text)):
        c = text[i]
        if c == '(':
            depth += 1
        elif c == ')':
            depth -= 1
            if depth == 0:
                return i
    return -1


# ---------------------------------------------------------------------------
# Operand classification
# ---------------------------------------------------------------------------
_DECL_RE = re.compile(
    r'^\s*((?:const\s+|unsigned\s+|signed\s+|static\s+)*)'
    r'([A-Za-z_][\w: ]*?[\w])\s*(\*+|&)?\s*([\w$]+|operator[^ (]*)\s*(;|=|\[|,)')
_PARAM_RE = re.compile(
    r'(?:^|[(,])\s*((?:const\s+|unsigned\s+|signed\s+)*)'
    r'([A-Za-z_][\w ]*?[\w]?)\s*(\*+|&)?\s*([\w$]+)\s*(?=[,)]?)')


def _parse_decl(line: str):
    """decl line -> (type_text_with_star, name) or None (pointer star kept)"""
    dm = _DECL_RE.match(line)
    if not dm:
        return None
    ty = dm.group(2).strip()
    if dm.group(3):
        ty += ' ' + dm.group(3)
    return ty, dm.group(4)


def classify_type(typestr: str) -> str:
    if not typestr:
        return WUNK
    if '*' in typestr or '&' in typestr:
        return WPTR
    for rx, w in _TYPE_WIDTH:
        if rx.search(typestr):
            return w
    return WUNK


@dataclass
class Operand:
    kind: str            # 'local' | 'param' | 'global' | 'member' | 'complex'
    width: str           # W64/W32/W16/W8/WPTR/WUNK
    expr: str            # operand source text (trimmed)


def _function_span(lines: list[str], line_idx: int):
    """Return (start_line, end_line) of the enclosing function (col-0 braces)."""
    start = 0
    for i in range(line_idx, -1, -1):
        if lines[i].startswith('}'):
            start = i + 1
            break
    end = len(lines)
    for i in range(line_idx + 1, len(lines)):
        if lines[i].startswith('}'):
            end = i
            break
    return start, end


def _decl_type_text(name: str, lines: list[str], fstart: int, fend: int):
    """first decl of `name` inside the function span -> type text or None"""
    for i in range(fstart, min(fend, len(lines))):
        pd = _parse_decl(lines[i])
        if pd and pd[1] == name:
            return pd[0]
    return None


def _enclosing_class(lines: list[str], fstart: int, line_idx: int):
    """Class::Method signature inside the function span -> class name or None"""
    for i in range(min(line_idx, len(lines) - 1), fstart - 1, -1):
        m = re.search(r'\b([A-Z][A-Za-z_]\w*)::~?[A-Za-z_]\w*\s*\(', lines[i])
        if m:
            return m.group(1)
    return None


def _conservative_type(types) -> str:
    """list of candidate decl types -> the width class only when unambiguous
    (pointer-conservative: any '*' candidate wins as WPTR; mixed integer
    widths = WUNK)"""
    types = [t for t in types if t]
    if not types:
        return WUNK
    if any('*' in t or '&' in t for t in types):
        return WPTR
    widths = {classify_type(t) for t in types}
    if len(widths) == 1 and widths != {WUNK}:
        return widths.pop()
    return WUNK


def _member_types(cls: str, member: str):
    """(class, member) -> all candidate declared type texts (headers + json)"""
    _load_members()
    tys = list(_HEADER_MEMBERS.get((cls, member), []))
    jt = _MEMBER_TYPES_BY_CLASS.get(cls, {}).get(member)
    if jt:
        tys.append(jt)
    return tys


def _resolve_member(expr: str, lines: list[str], line_idx: int) -> Operand:
    """BASE->member / BASE.member / BASE->member[i] via corpus headers + json"""
    m = re.match(r'^([\w\[\]()>.\s:*&+\-]+?)\s*(?:->|(\.))\s*([A-Za-z_]\w*)\s*(\[[^\]]*\])?$', expr.strip())
    if not m:
        return Operand('complex', WUNK, expr)
    base, member, idx = m.group(1).strip(), m.group(3), m.group(4)
    cls = None
    if re.fullmatch(r'this', base):
        fstart, fend = _function_span(lines, line_idx)
        cls = _enclosing_class(lines, fstart, line_idx)
    elif re.fullmatch(r'[A-Za-z_]\w*', base):
        fstart, fend = _function_span(lines, line_idx)
        ty = _decl_type_text(base, lines, fstart, fend)
        if ty and '*' in ty:
            cand = re.findall(r'[A-Za-z_]\w*', ty.replace('unsigned', '').replace('signed', ''))
            cand = [c for c in cand if c not in ('int', 'long', 'short', 'char')]
            if cand:
                cls = cand[-1]
    elif re.fullmatch(r'[A-Za-z_]\w*\s*\[[^\]]*\]', base):
        # array-of-struct element: v56[0] -> element type from decl
        arr = re.match(r'([A-Za-z_]\w*)\s*\[', base).group(1)
        fstart, fend = _function_span(lines, line_idx)
        ty = _decl_type_text(arr, lines, fstart, fend)
        if ty:
            mm = re.match(r'\s*([A-Za-z_][\w :<>]*)\s*(\[[^\]]*\])?\s*\*?\s*$', ty)
            if mm and '*' not in ty:
                cand = re.findall(r'[A-Za-z_]\w*', mm.group(1))
                cand = [c for c in cand if c not in ('int', 'long', 'short', 'char',
                                                     'unsigned', 'signed', 'const')]
                if cand:
                    cls = cand[-1]
    if cls:
        tys = _member_types(cls, member)
        if not tys:
            return Operand('member', WUNK, expr)
        if idx is not None:
            # element access: every candidate must declare an array of one type
            arr_tys = []
            for t in tys:
                mm = re.match(r'\s*([A-Za-z_][\w :<>]*)\s*\[', t)
                if not mm:
                    return Operand('member', WUNK, expr)  # scalar subscript would C2109
                arr_tys.append(mm.group(1))
            if any('*' in t for t in arr_tys):
                return Operand('member', WPTR, expr)
            widths = {classify_type(t) for t in arr_tys}
            if len(widths) == 1 and widths != {WUNK}:
                return Operand('member', widths.pop(), expr)
            return Operand('member', WUNK, expr)
        return Operand('member', _conservative_type(tys), expr)
    # vfptr/vtable/ptr_-prefixed members are pointers by construction
    if re.match(r'(?:vfptr|vtable|ptr_)[A-Za-z_]*$', member):
        return Operand('member', WPTR, expr)
    return Operand('member', WUNK, expr)


def resolve_operand_width(expr: str, lines: list[str], line_idx: int) -> Operand:
    e = expr.strip()
    if _UNSIMPLE_RE.search(e):
        return Operand('complex', WUNK, e)
    if '->' in e or re.search(r'\w\.\s*[A-Za-z_]', e):
        return _resolve_member(e, lines, line_idx)
    # indexed local: v56[0] with `T v56[N]` decl -> element width
    ma = re.fullmatch(r'([A-Za-z_]\w*)\s*\[[^\]]+\]', e)
    if ma:
        fstart, fend = _function_span(lines, line_idx)
        ty = _decl_type_text(ma.group(1), lines, fstart, fend)
        if ty and '[' in ty and '*' not in ty:
            mm = re.match(r'\s*([A-Za-z_][\w :<>]*)\s*\[', ty)
            if mm:
                return Operand('local', classify_type(mm.group(1)), e)
        return Operand('complex', WUNK, e)
    m = re.fullmatch(r'[A-Za-z_]\w*', e)
    if m:
        name = e
        fstart, fend = _function_span(lines, line_idx)
        # 1) local/param decl inside the function
        ty = _decl_type_text(name, lines, fstart, fend)
        if ty is not None:
            w = classify_type(ty)
            if w != WUNK:
                return Operand('local', w, e)
        # 2) params of the signature
        sig_idx = None
        for i in range(fstart, min(line_idx + 1, len(lines))):
            if '(' in lines[i] and ('__thiscall' in lines[i] or '__stdcall' in lines[i]
                                    or '__cdecl' in lines[i] or re.search(r'\)\s*$', lines[i].strip())):
                sig_idx = i
                break
        if sig_idx is not None:
            for pm in _PARAM_RE.finditer(lines[sig_idx]):
                if pm.group(3) == name:
                    w = classify_type(pm.group(2))
                    if w != WUNK:
                        return Operand('param', w, e)
                    break
        # 3) IDA-named global (width evidence from the name itself)
        for rx, w in _GLOBAL_NAME_WIDTH:
            if rx.match(name):
                return Operand('global', w, e)
        # 4) extern decl somewhere in this file
        for i, l in enumerate(lines):
            if name in l and ('extern ' in l or l.strip().startswith('extern')):
                pd = _parse_decl(l.strip().replace('extern ', '', 1)) if 'extern' in l else None
                if pd:
                    w = classify_type(pd[0])
                    if w != WUNK:
                        return Operand('global', w, e)
        return Operand('local', WUNK, e)
    return Operand('complex', WUNK, e)


# ---------------------------------------------------------------------------
# Rewrite forms
# ---------------------------------------------------------------------------
def _lit(bits: int, shift: int) -> str:
    one = {8: '0xFF', 16: '0xFFFF', 32: '0xFFFFFFFF'}[bits]
    return one if shift < 32 else f'{one}ull'


def _mask(shift: int, bits: int) -> str:
    """Full-width clear mask text for the field (works at any operand width)."""
    one = _lit(bits, shift)
    if shift == 0:
        return f'~{one}'
    return f'~({one} << {shift})'


def read_form(name: str, expr: str, op: Operand):
    """Return replacement text or None (= BANK). Strict: only provably-integer operands."""
    if op.width not in (W8, W16, W32, W64):
        return None
    shift, bits, signed = FAMILY[name]
    if name in ('HIBYTE', 'SHIBYTE'):
        # sizeof-dependent: only width-2 operands are unambiguous (byte 1)
        if op.width in (W16,):
            shift = 8
        else:
            return None
    if name in ('HIDWORD', 'SHIDWORD', 'DWORD1') and op.width not in (W64,):
        return None
    if name == 'DWORD2' and op.width != W64:
        return None
    fe = f'({expr})'
    if op.width in (WDBL, WFLT):
        return None  # float-bit reinterpret: no legal in-gate construct
    if bits == 8:
        core = f'{fe} & 0xFF' if shift == 0 else f'({fe} >> {shift}) & 0xFF'
    elif bits == 16:
        core = f'{fe} & 0xFFFF' if shift == 0 else f'({fe} >> {shift}) & 0xFFFF'
    else:
        core = f'{fe} & 0xFFFFFFFFu' if shift == 0 else f'({fe} >> {shift}) & 0xFFFFFFFFu'
    if signed:
        t = {8: 'char', 16: 'short', 32: 'int'}[bits]
        return f'({t})({core})'
    return f'({core})'


def write_form(name: str, expr: str, rhs: str, op: Operand):
    """MACRO(expr) = rhs;  ->  real form. Returns text or None. Strict: integer operands only."""
    if op.width not in (W8, W16, W32, W64):
        return None
    shift, bits, signed = FAMILY[name]
    if name in ('HIBYTE', 'SHIBYTE'):
        if op.width in (W16,):
            shift = 8
        else:
            return None
    fe = f'({expr})'
    fr = f'({rhs.strip()})'
    if bits == 32:
        # dword0 write on a 32-bit operand = whole-object overwrite (identity)
        if shift == 0 and op.width in (W32, W8, W16):
            return f'{fe} = {fr}'
        if op.width not in (W64,):
            return None  # dword1 / unknown-width dword writes
        if shift == 0:
            return f'{fe} = ({fe} & 0xFFFFFFFF00000000ull) | ({fr} & 0xFFFFFFFFull)'
        return f'{fe} = ({fe} & 0xFFFFFFFFull) | ((unsigned long long)({fr} & 0xFFFFFFFFull) << 32)'
    if bits == 8:
        one = _lit(bits, shift)
    else:
        one = _lit(bits, shift)
    if shift == 0:
        return f'{fe} = ({fe} & {_mask(0, bits)}) | ({fr} & {one})'
    return f'{fe} = ({fe} & {_mask(shift, bits)}) | (({fr} & {one}) << {shift})'


def pair_form(name: str, h: str, l: str):
    if name == '__PAIR64__':
        return f'((({h} & 0xFFFFFFFFull)) << 32 | ({l} & 0xFFFFFFFFull))'
    if name == '__PAIR32__':
        return f'(({h} & 0xFFFFu) << 16 | ({l} & 0xFFFFu))'
    if name == '__SPAIR64__':
        return f'((long long)((({h} & 0xFFFFFFFFull)) << 32 | ({l} & 0xFFFFFFFFull)))'
    return None


# ---------------------------------------------------------------------------
# Text-level retirement driver (shared by the X56 tree pass AND the regen
# emitter _ida_vocab.truthify -- the fix-at-generator contract).
# ---------------------------------------------------------------------------
_TOKEN_RX_CACHE: dict[str, re.Pattern] = {}


def retire_in_text(text: str, macros):
    """Convert all `macros` vocabulary in `text` to real constructs.
    Returns (new_text, n_converted, ledger_entries). No file I/O."""
    from gen_x56_retire_macros import convert_site  # noqa: E402  (late: no cycle)
    key = '|'.join(sorted(macros))
    rx = _TOKEN_RX_CACHE.get(key)
    if rx is None:
        rx = re.compile(
            r'\b(IDA_)?(' + '|'.join(sorted(macros, key=len, reverse=True)) + r')\s*\(')
        _TOKEN_RX_CACHE[key] = rx
    lines = text.split('\n')
    offs = [0]
    for l in lines:
        offs.append(offs[-1] + len(l) + 1)

    def line_of(idx):
        lo, hi = 0, len(offs) - 1
        while lo < hi:
            mid = (lo + hi + 1) // 2
            if offs[mid] <= idx:
                lo = mid
            else:
                hi = mid - 1
        return lo

    total_conv = 0
    ledger = []
    wanted = set(macros)
    for _round in range(8):
        scan = Scan(text)
        edits = []
        for m in rx.finditer(text):
            if m.group(2) not in wanted:
                continue
            if not scan.code[m.start()]:
                continue
            li = line_of(m.start())
            res, info = convert_site(text, m, scan, lines, li)
            info = dict(info)
            info['family'] = m.group(2)
            info['line'] = li + 1
            if isinstance(res, tuple) and res and res[0] == 'REPLACE':
                _, s, e, newt = res
                edits.append((s, e, newt))
                info['after'] = newt[:160]
            elif isinstance(res, str):
                open_idx = m.end() - 1
                close_idx = balanced_paren(text, open_idx)
                edits.append((m.start(), close_idx + 1, res))
                info['after'] = res[:160]
            else:
                if _round == 0:
                    ledger.append(info)
                continue
            total_conv += 1
            if _round == 0 or True:
                ledger.append(info)
        if not edits:
            break
        edits.sort(key=lambda t: (t[0], -t[1]))
        kept = []
        last_end = -1
        for s, e, newt in edits:
            if s < last_end:
                continue
            kept.append((s, e, newt))
            last_end = e
        out = text
        for s, e, newt in sorted(kept, key=lambda t: -t[0]):
            out = out[:s] + newt + out[e:]
        text = out
        lines = text.split('\n')
    return text, total_conv, ledger
