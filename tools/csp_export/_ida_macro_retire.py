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
                        # X77: preserve the ARRAY suffix -- `bool IsInitialized[1];`
                        # must not be recorded as scalar `bool` (mask on an array
                        # = C2296; X77 fresh-error family).
                        arr = re.match(
                            r'^\s*.*?\b' + re.escape(pd[1]) + r'\s*(\[[^\]]*\])', l)
                        ty = pd[0] + (arr.group(1) if arr else '')
                        _HEADER_MEMBERS.setdefault((cls, pd[1]), []).append(
                            (ty, p.replace('\\', '/')))


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
    (re.compile(r'\b(?:unsigned\s+|signed\s+)?(?:__int64)\b|\b(?:unsigned\s+)?long\s+long\b|\b_QWORD\b|u?int64_t'), W64),
    (re.compile(r'\b(?:unsigned\s+|signed\s+)?__int32\b'), W32),
    (re.compile(r'\b(?:unsigned\s+|signed\s+)?__int16\b'), W16),
    (re.compile(r'\b(?:unsigned\s+|signed\s+)?__int8\b'), W8),
    (re.compile(r'\b(?:u?int32_t)\b'), W32),
    (re.compile(r'\b(?:u?int16_t)\b'), W16),
    (re.compile(r'\b(?:u?int8_t)\b'), W8),
    # X77: scalar typedef / SDK width vocabulary (additive: only names that
    # previously fell through to WUNK are matched; existing rules run first).
    (re.compile(r'\b(?:u?int64|u64|i64|LONGLONG|ULONGLONG|DWORD64|QWORD)\b'), W64),
    (re.compile(r'\b(?:u?int32|u32|i32|DWORD|ULONG|UINT|BOOL|LONG|DWORD32|UINT32|LONG32|INT32'
                r'|UINT_PTR|DWORD_PTR|INT_PTR|LONG_PTR|ULONG_PTR|size_t|intptr_t|uintptr_t'
                r'|HRESULT|WPARAM|LPARAM|LRESULT)\b'), W32),
    (re.compile(r'\b(?:u?int16|u16|i16|WORD|USHORT|SHORT|UINT16|INT16|WCHAR|OLECHAR|ATOM)\b'), W16),
    (re.compile(r'\b(?:u?int8|u8|i8|BYTE|UCHAR|UINT8|INT8|byte|CHAR|TCHAR)\b'), W8),
    (re.compile(r'\b(?:unsigned\s+__int16\b|\b(?:unsigned\s+|signed\s+)?short\b|\b_WORD\b)'), W16),
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
        # X77: code-aware paren-depth prefix (depth[i] = depth BEFORE char i)
        dep = [0] * (self.n + 1)
        d = 0
        code = self.code
        t = self.t
        for i in range(self.n):
            c = t[i]
            if code[i]:
                if c == '(':
                    d += 1
                elif c == ')' and d > 0:
                    d -= 1
            dep[i + 1] = d
        self.depth = dep

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


_CTRL_KW = ('if', 'else', 'for', 'while', 'do', 'switch', 'catch', 'try')


_SPAN_SCAN_CACHE: dict[int, tuple] = {}


def _file_scan(lines: list[str]):
    """X77: cached (Scan, line_offsets) for a split('\n') line list."""
    key = id(lines)
    ent = _SPAN_SCAN_CACHE.get(key)
    if ent is not None and ent[0] is lines:
        return ent[1], ent[2]
    txt = '\n'.join(lines)
    sc = Scan(txt)
    offs = [0]
    for l in lines:
        offs.append(offs[-1] + len(l) + 1)
    if len(_SPAN_SCAN_CACHE) > 6:
        _SPAN_SCAN_CACHE.clear()
    _SPAN_SCAN_CACHE[key] = (lines, sc, offs)
    return sc, offs


def _function_span(lines: list[str], line_idx: int):
    """X77: brace-depth walk upward to the enclosing FUNCTION (works for the
    indented e4/gap2 files; braces inside comments/strings are ignored)."""
    sc, offs = _file_scan(lines)
    depth = 0
    i = line_idx
    guard = 0
    while i >= 0 and guard < 400000:
        guard += 1
        lo, hi = offs[i], offs[i + 1] - 1
        k = hi - 1
        while k >= lo:
            if sc.code[k]:
                c = sc.t[k]
                if c == '}':
                    depth += 1
                elif c == '{':
                    if depth == 0:
                        head = sc.t[lo:k].strip()
                        hdr_line = i
                        if not head:
                            j = i - 1
                            while j >= 0:
                                l2 = lines[j].strip()
                                if l2 and not l2.startswith('//'):
                                    break
                                j -= 1
                                guard += 1
                            head = lines[j].strip() if j >= 0 else ''
                            hdr_line = j
                        if re.match(r'^(if|for|while|switch|do|else|try|catch)\b', head):
                            pass           # control block: skip, keep walking up
                        elif '(' in head:
                            # X77: close must be measured FROM THE BODY OPENER
                            # (starting at a mid-function site mis-counts inner
                            # closers and truncates the span).
                            return max(0, hdr_line), _find_close(lines, i)
                        else:
                            pass           # namespace/class/extern block: skip
                    else:
                        depth -= 1
            k -= 1
        i -= 1
    return 0, len(lines)


def _find_close(lines: list[str], line_idx: int):
    sc, offs = _file_scan(lines)
    depth = 0
    for i in range(line_idx, len(lines)):
        lo, hi = offs[i], offs[i + 1] - 1
        for k in range(lo, hi):
            if not sc.code[k]:
                continue
            c = sc.t[k]
            if c == '{':
                depth += 1
            elif c == '}':
                if depth == 0:
                    return i
                depth -= 1
    return len(lines)


def _decl_type_text(name: str, lines: list[str], fstart: int, fend: int):
    """first decl of `name` inside the function span -> type text or None"""
    for i in range(fstart, min(fend, len(lines))):
        pd = _parse_decl(lines[i])
        if not pd:
            continue
        ty, first = pd
        if first == name:
            return ty
        # X77: multi-declarator continuation (`unsigned int v5, v8;` -> v8)
        base_ty = ty.rstrip(' *&').strip()
        if not base_ty:
            continue
        for mm in re.finditer(r'[,]\s*(\*+|&)?\s*([A-Za-z_]\w*)\s*(?=[,;=\[\]]|$)',
                              lines[i]):
            if mm.group(2) == name:
                stars = mm.group(1) or ''
                return (base_ty + ' ' + stars).strip() if stars else base_ty
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
    (pointer-conservative: any '*' candidate wins as WPTR; any ARRAY candidate
    -> WUNK because mask/shift on an array is illegal; mixed integer widths =
    WUNK)"""
    types = [t for t in types if t]
    if not types:
        return WUNK
    if any('*' in t or '&' in t for t in types):
        return WPTR
    if any('[' in t for t in types):
        return WUNK
    widths = {classify_type(t) for t in types}
    if len(widths) == 1 and widths != {WUNK}:
        return widths.pop()
    return WUNK


def _member_types(cls: str, member: str):
    """(class, member) -> candidate declared type texts (headers + json).

    X77 note: deliberately NOT universe-filtered -- a pointer candidate in
    either twin makes the conservative verdict WPTR, which BANKS the site
    (the safe direction) instead of masking a pointer."""
    _load_members()
    raw = _HEADER_MEMBERS.get((cls, member), [])
    tys = [ent[0] if isinstance(ent, tuple) else ent for ent in raw]
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
    # X77: simple deref `*v` -> pointee width of v's pointer decl
    md = re.fullmatch(r'\*\s*([A-Za-z_]\w*)', e)
    if md:
        fstart, fend = _function_span(lines, line_idx)
        ty = _decl_type_text(md.group(1), lines, fstart, fend)
        if ty and '*' in ty:
            pointee = ty.replace('*', ' ', 1).strip()
            w = classify_type(pointee)
            if w != WUNK:
                return Operand('local', w, e)
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
        # X77: pointer decl `T *p` -> p[i] has pointee width
        if ty and '*' in ty:
            pointee = ty.replace('*', ' ', 1).strip()
            w = classify_type(pointee)
            if w != WUNK:
                return Operand('local', w, e)
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
        # 2) params of the signature (X77: scan a few lines for wrapped sigs)
        sig_idx = None
        for i in range(fstart, min(line_idx + 1, len(lines))):
            if '(' in lines[i] and ('__thiscall' in lines[i] or '__stdcall' in lines[i]
                                    or '__cdecl' in lines[i] or re.search(r'\)\s*$', lines[i].strip())):
                sig_idx = i
                break
        if sig_idx is not None:
            sig_span = ' '.join(lines[j] for j in range(sig_idx, min(sig_idx + 6, len(lines))))
            for pm in _PARAM_RE.finditer(sig_span):
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
# X77: member BYTE-OFFSET authority for the packed-field split.
#   header `TYPE name;  // 0xNN` annotations  +  member_lookup.json (fallback)
# A macro over a member slot addresses byte offset base_off + field_shift/8;
# when a typed scalar/array member exists at that byte offset, the whole access
# is replaced by the typed member (X56/X57 packed-pair split).  Never invented:
# only names/types that already exist in the corpus are used.
# ---------------------------------------------------------------------------
_HDR_BY_OFF: dict[tuple[str, int], list[tuple[str, str, str]]] = {}
_HDR_BY_NAME: dict[tuple[str, str], list[tuple[int, str, str]]] = {}
_ML_BY_OFF: dict[tuple[str, int], list[tuple[str, str, str]]] = {}
_ML_BY_NAME: dict[tuple[str, str], list[tuple[int, str, str]]] = {}
_OFF_LOADED = False
CURRENT_FILE: str = ''      # set by the tree drivers (dual-universe filter)
_CLS_DECL_RE = re.compile(r'\b(?:class|struct)\s+([A-Z][A-Za-z_]\w*)[^;{]*\{')
# X77: trailing annotation text after the hex offset is common
#      (`// 0x11D0 [X55 W3 supply (render vocab)]`) -> no `$` anchor
_MEMBER_DECL_OFF_RE = re.compile(r'^\s+(.+?);\s*//\s*0x([0-9A-Fa-f]+)\b')


def _file_universe(path: str) -> str:
    """'e4' | 'tree' | 'neutral' -- which include-universe a declaration lives in."""
    p = path.replace('\\', '/')
    if '/csp_canon/' in p or p.endswith('classes.hpp'):
        return 'neutral'
    if '/e4/' in p or 'gap2' in p or '_e4' in p:
        return 'e4'
    return 'tree'


def _load_member_offsets():
    global _OFF_LOADED
    if _OFF_LOADED:
        return
    _OFF_LOADED = True
    import os
    for dirpath, _dn, fns in os.walk(str(_ROOT / 'src')):
        for fn in fns:
            if not fn.endswith(('.hpp', '.h', '.inc')):
                continue
            try:
                txt = open(os.path.join(dirpath, fn), encoding='utf-8',
                           errors='replace').read()
            except OSError:
                continue
            fpath = os.path.join(dirpath, fn).replace('\\', '/')
            cls, depth, in_class = None, 0, False
            for l in txt.split('\n'):
                code = l.split('//')[0]
                if not in_class:
                    cm = _CLS_DECL_RE.search(code)
                    if cm:
                        cls = cm.group(1)
                        in_class = True
                        depth = code.count('{') - code.count('}')
                        continue
                else:
                    depth += code.count('{') - code.count('}')
                    if depth <= 0:
                        in_class, cls = False, None
                        continue
                    dm = _MEMBER_DECL_OFF_RE.match(l)
                    if dm:
                        decl, off = dm.group(1).strip(), int(dm.group(2), 16)
                        nm = re.search(r'([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*$', decl)
                        if nm:
                            name = nm.group(1)
                            ty = decl[:nm.start()].strip()
                            if nm.group(2):
                                ty += nm.group(2)
                            _HDR_BY_OFF.setdefault((cls, off), []).append((ty, name, fpath))
                            _HDR_BY_NAME.setdefault((cls, name), []).append((off, ty, fpath))
    p = _ROOT / 'tools' / 'member_lookup.json'
    if p.exists():
        try:
            data = json.loads(p.read_text(encoding='utf-8'))
        except (OSError, ValueError):
            data = {}
        for cls, entries in data.items():
            for off_s, meta in entries.items():
                nm, ty = meta.get('name'), meta.get('type', '')
                if not nm:
                    continue
                try:
                    off = int(off_s)
                except ValueError:
                    continue
                _ML_BY_OFF.setdefault((cls, off), []).append((ty, nm, 'member_lookup'))
                _ML_BY_NAME.setdefault((cls, nm), []).append((off, ty, 'member_lookup'))


def _filter_universe(entries, site_file: str):
    """X77 dual-universe filter: keep the site-universe declarations when the
    universe is known ('e4'/'tree'); 'neutral' declarations always count.
    entries: [(a, b, file)] -> same shape."""
    u = _file_universe(site_file)
    if u == 'neutral' or not site_file:
        return list(entries)
    keep = [e for e in entries if _file_universe(e[-1]) in (u, 'neutral')]
    return keep


def member_offset_candidates(cls: str, member: str, site_file: str = '',
                            allow_global: bool = True):
    """[(offset, type, file)] for `cls::member` from headers then member_lookup.

    X77 fallback: when the class-scoped lookup misses (member declared on a
    base class / different universe), search the name across all classes and
    accept ONLY when every candidate agrees on (offset, type-size)."""
    _load_member_offsets()
    got = list(_HDR_BY_NAME.get((cls, member), []))
    if got:
        return _filter_universe(got, site_file or CURRENT_FILE)
    if not allow_global:
        return []
    _build_global_name_index()
    g = _GLOBAL_NAME_INDEX.get(member, [])
    if g:
        return list(g)
    return list(_ML_BY_NAME.get((cls, member), []))


_GLOBAL_NAME_INDEX: dict[str, list[tuple[int, str]]] = {}
_GLOBAL_IDX_BUILT = False


def _build_global_name_index():
    global _GLOBAL_IDX_BUILT
    if _GLOBAL_IDX_BUILT:
        return
    _GLOBAL_IDX_BUILT = True
    _load_member_offsets()
    agg: dict[str, dict[tuple[int, int], tuple[int, str]]] = {}
    for (_cls, name), lst in _HDR_BY_NAME.items():
        for off, ty, _f in lst:
            sz, _n = type_size(ty)
            d = agg.setdefault(name, {})
            k = (off, sz)
            if k in d:
                cnt, prev = d[k]
                d[k] = (cnt + 1, prev or ty)
            else:
                d[k] = (1, ty)
    for name, pairs in agg.items():
        if len(pairs) == 1:
            (off, _sz), (_cnt, ty) = next(iter(pairs.items()))
            _GLOBAL_NAME_INDEX[name] = [(off, ty, 'member_lookup')]


def member_at_offset(cls: str, off: int, site_file: str = ''):
    """[(type, name, file)] for the member at byte `off` of `cls`.
    Header declarations first (universe-filtered); member_lookup (til) only as
    a marked fallback -- til has repeatedly disagreed with corpus headers
    (X77: LoadOptions IsAllocated void*@header vs bool@til)."""
    _load_member_offsets()
    got = _filter_universe(list(_HDR_BY_OFF.get((cls, off), [])),
                           site_file or CURRENT_FILE)
    if got:
        return got
    return list(_ML_BY_OFF.get((cls, off), []))


def type_size(t: str):
    """type text -> (total_bytes, count) for scalar or array; (None,None) unknown."""
    m = re.match(r'^(.*?)\s*\[(\d+)\]\s*$', t.strip())
    base, n = (m.group(1).strip(), int(m.group(2))) if m else (t.strip(), 1)
    w = classify_type(base)
    sz = {W8: 1, W16: 2, W32: 4, W64: 8}.get(w)
    if sz is None:
        return None, None
    return sz * n, n


def _member_base_class(operand: str, lines, line_idx):
    """(cls, member, idx, base_text, sep) for BASE(->|.)member[idx] else None."""
    m = re.match(r'^([\w\[\]()>.\s:*&+\-]+?)\s*(->|\.)\s*([A-Za-z_]\w*)\s*(\[[^\]]*\])?$',
                 operand.strip())
    if not m:
        return None
    base, sep, member, idx = m.group(1).strip(), m.group(2), m.group(3), m.group(4)
    cls = None
    if re.fullmatch(r'this', base):
        fstart, fend = _function_span(lines, line_idx)
        cls = _enclosing_class(lines, fstart, line_idx)
    elif re.fullmatch(r'[A-Za-z_]\w*', base):
        fstart, fend = _function_span(lines, line_idx)
        ty = _decl_type_text(base, lines, fstart, fend)
        if ty:
            # X77: value-struct locals carry the class too (`ColorStruct v39;`)
            cand = [c for c in re.findall(r'[A-Za-z_]\w*', ty.replace('unsigned', '')
                                          .replace('signed', '').replace('const', ''))
                    if c not in ('int', 'long', 'short', 'char', 'float', 'double',
                                 'bool', 'void', 'struct', 'class')]
            if cand:
                cls = cand[-1]
    elif re.fullmatch(r'[A-Za-z_]\w*\s*\[[^\]]*\]', base):
        arr = re.match(r'([A-Za-z_]\w*)\s*\[', base).group(1)
        fstart, fend = _function_span(lines, line_idx)
        ty = _decl_type_text(arr, lines, fstart, fend)
        if ty:
            if '*' in ty:   # pointer-to-struct: pointee class name = last ident
                cand = [c for c in re.findall(r'[A-Za-z_]\w*', ty.replace('unsigned', '')
                                              .replace('signed', '').replace('const', ''))
                        if c not in ('int', 'long', 'short', 'char', 'float', 'double',
                                     'bool', 'void', 'struct', 'class')]
                if cand:
                    cls = cand[-1]
            else:
                mm = re.match(r'\s*([A-Za-z_][\w :<>]*)\s*(\[[^\]]*\])?\s*$', ty)
                if mm:
                    cand = [c for c in re.findall(r'[A-Za-z_]\w*', mm.group(1)) if c not in
                            ('int', 'long', 'short', 'char', 'unsigned', 'signed', 'const')]
                    if cand:
                        cls = cand[-1]
    elif re.fullmatch(r'[A-Za-z_]\w*\s*(\[[^\]]*\])?\s*\.\s*[A-Za-z_]\w*', base):
        # X77: chained element access `arr[2].member` -> element class of arr
        root = re.match(r'([A-Za-z_]\w*)', base).group(1)
        fstart, fend = _function_span(lines, line_idx)
        ty = _decl_type_text(root, lines, fstart, fend)
        if ty and '*' not in ty:
            mm = re.match(r'\s*([A-Za-z_][\w :<>]*)\s*(\[[^\]]*\])?\s*$', ty)
            if mm:
                cand = [c for c in re.findall(r'[A-Za-z_]\w*', mm.group(1)) if c not in
                        ('int', 'long', 'short', 'char', 'unsigned', 'signed', 'const')]
                if cand:
                    cls = cand[-1]
    if not cls:
        # X77: global object member (`GLOBAL_Struct.field`) via extern decl
        if re.fullmatch(r'[A-Za-z_]\w*', base):
            for l in lines:
                if 'extern' not in l or base not in l:
                    continue
                dm = re.match(r'^\s*extern\s+(.+?)\s+([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;', l)
                if dm and dm.group(2) == base and '*' not in dm.group(1):
                    cand = [c for c in re.findall(r'[A-Za-z_]\w*', dm.group(1)) if c not in
                            ('int', 'long', 'short', 'char', 'unsigned', 'signed', 'const',
                             'static', 'extern')]
                    if cand:
                        cls = cand[-1]
                break
    if not cls:
        # X77: allow class-unknown flow for the global-name-agreement fallback
        if re.fullmatch(r'[A-Za-z_]\w*|this', base):
            return None, member, idx, base, sep
        return None
    return cls, member, idx, base, sep


_ARRAY_NAME_CACHE: set = set()
_ARRAY_NAME_BUILT = False


def _array_member_names() -> set:
    """X77: member names that are declared as ARRAYS in SOME class of the
    corpus.  A mask/shift form on such a name is never provable (the TU may see
    the array declaration) -> veto (dynamicvector `IsInitialized[1]` family)."""
    global _ARRAY_NAME_BUILT
    if not _ARRAY_NAME_BUILT:
        _ARRAY_NAME_BUILT = True
        _load_header_members()
        for (_c, nm), lst in _HEADER_MEMBERS.items():
            for ent in lst:
                ty = ent[0] if isinstance(ent, tuple) else ent
                if '[' in ty:
                    _ARRAY_NAME_CACHE.add(nm)
                    break
    return _ARRAY_NAME_CACHE


def _all_integral_scalar(tys, member: str = '') -> bool:
    """X77: True when every candidate member type is an integral SCALAR
    (mixed widths are acceptable for mask/shift value forms -- masking a
    narrower integral is harmless; a pointer/array candidate is not)."""
    if not tys:
        return False
    if member and member in _array_member_names():
        return False
    for t in tys:
        if not t or '*' in t or '&' in t or '[' in t:
            return False
        if classify_type(t) not in (W8, W16, W32, W64):
            return False
    return True


def member_split_form(family: str, operand: str, lines, line_idx):
    """X77 packed-field split.  Returns (kind, payload, meta) or None.

    kind='target' -> payload=(read_text, target_text): the access IS a typed
                     member / array element (packed-pair split)
    kind='width'  -> payload=Operand: the member's own declared type is
                     integral; the standard mask/shift form applies.
    """
    if family not in FAMILY or family in ('HIBYTE', 'SHIBYTE'):
        return None
    res = _member_base_class(operand, lines, line_idx)
    if not res:
        return None
    cls, member, idx, base, sep = res
    shift, bits, _signed = FAMILY[family]
    # X77: NEW member names (M2/M3) require class-scoped corpus evidence only
    # (the global-name agreement fallback guessed members that do not exist in
    # the TU -> C2039).  The width-only path (M4) emits no new name, so it may
    # use the agreement fallback.
    offs = member_offset_candidates(cls, member, CURRENT_FILE, allow_global=False)
    offs_w = offs or member_offset_candidates(cls, member, CURRENT_FILE, allow_global=True)
    if not offs_w:
        return None
    # X77 dual-universe guard: all declarations of the NAME must agree on
    # (offset, type size) -- otherwise the split target may not exist in the
    # TU's universe (tree hpp vs e4 hpp divergence -> C2039).
    shapes = {(off, type_size(ty)[0]) for off, ty, _f in offs_w}
    if len(shapes) != 1:
        return None
    byte_in = shift // 8
    # --- M2: exact-width typed member at base_off + byte_in ---
    for off, _ty, _f in offs:
        if not cls:
            break          # offset probe needs the class
        cands = member_at_offset(cls, off + byte_in, CURRENT_FILE)
        hdr = [(ct, nm) for (ct, nm, f) in cands if f != 'member_lookup']
        allnames = {nm for (_ct, nm) in hdr}
        names = {nm for (ct, nm) in hdr
                 if type_size(ct)[0] == bits // 8 and '[' not in ct}
        if len(allnames) == 1 and len(names) == 1:
            nm2 = names.pop()
            target = f'{base}{sep}{nm2}'
            return 'target', (target, target), {'split': 'member', 'cls': cls,
                                                'member': nm2, 'off': off + byte_in,
                                                'ev': 'hdr'}
    # --- M3: array member exact element index (element MUST equal macro width:
    #         an 8-bit macro view of a 16-bit element is not the element) ---
    for off, ty, _f in offs:
        total, n = type_size(ty)
        if total is None or n is None or n < 1:
            continue
        elem_bits = (total // n) * 8
        if elem_bits != bits or shift % elem_bits:
            continue
        k = shift // elem_bits
        extra = 0
        if idx is not None:
            im = re.match(r'\[\s*(\d+)\s*\]', idx)
            if not im:
                continue
            extra = int(im.group(1))
        if n >= 2 and 0 <= k and (k + extra) < n:
            target = f'{base}{sep}{member}[{k + extra}]'
            return 'target', (target, target), {'split': 'array', 'cls': cls,
                                                'member': member, 'index': k + extra,
                                                'off': off}
    # --- M4: member's own declared type is an integral scalar -> mask form.
    #         X77 gate: must agree with the operand's own type resolution --
    #         when the TU's header says pointer (e.g. tree `unsigned int *m_C`
    #         vs e4 `unsigned int m_C`) the mask form C2296s. ---
    if resolve_operand_width(operand, lines, line_idx).width == WPTR:
        return None
    # X77: M4 needs CORPUS-HEADER evidence for the member's own type (the
    # offset index alone is not enough -- member_lookup/til disagreed with the
    # TU in terrain_e4 (_VectorClass_VCell::m_C) and dynamicvector
    # (IsInitialized[]), producing masks on pointers/arrays).
    if not cls:
        return None
    tys_m = _member_types(cls, member)
    if not _all_integral_scalar(tys_m, member):
        return None
    for off, ty, _f in offs_w:
        if '[' in ty:
            continue
        if idx is not None:
            total, n = type_size(ty)
            if total is None or n is None or n < 2:
                continue
            elem = total // n
            if (shift // 8) % elem:
                continue
            w = {1: W8, 2: W16, 4: W32, 8: W64}.get(elem)
            if w is None:
                continue
        else:
            w = classify_type(ty)
            if w not in (W8, W16, W32, W64):
                w = W32          # offset-index type unknown: operand is a
                                 # verified integral scalar, width is mask-safe
        if w in (W8, W16, W32, W64):
            return 'width', Operand('member', w, operand), {'split': 'width',
                                                            'cls': cls, 'member': member,
                                                            'w': w}
    return None

# ---------------------------------------------------------------------------
# X77: callee return-type index (headers + cpp definitions) for RHS integrality
# ---------------------------------------------------------------------------
_RETURN_TYPES: dict[str, set] = {}
_RET_LOADED = False
_RET_DECL_RE = re.compile(
    r'^\s*(?:template\s*<[^>]*>\s*)?(?:static\s+|virtual\s+|inline\s+|constexpr\s+|explicit\s+'
    r'|extern\s+|__cdecl\s+|__stdcall\s+|__fastcall\s+|__thiscall\s+)*'
    r'([A-Za-z_][\w:<>,\s\*&]*?)\s+([A-Za-z_]\w*(?:::\w+)?)\s*\(')


def _load_return_types():
    global _RET_LOADED
    if _RET_LOADED:
        return
    _RET_LOADED = True
    import os
    for dirpath, _dn, fns in os.walk(str(_ROOT / 'src')):
        for fn in fns:
            if not fn.endswith(('.hpp', '.h', '.inc', '.cpp')):
                continue
            try:
                txt = open(os.path.join(dirpath, fn), encoding='utf-8',
                           errors='replace').read()
            except OSError:
                continue
            fpath = os.path.join(dirpath, fn).replace('\\', '/')
            for l in txt.split('\n'):
                if l.lstrip().startswith(('//', '#', '*')):
                    continue
                m = _RET_DECL_RE.match(l)
                if not m:
                    continue
                ret = m.group(1).strip()
                if ret in ('return', 'else', 'case', 'if', 'while', 'switch',
                           'typedef', 'using', 'namespace', 'impl', 'else if'):
                    continue
                name = m.group(2)
                _RETURN_TYPES.setdefault(name, set()).add((ret, fpath))
                if '::' in name:
                    _RETURN_TYPES.setdefault(name.split('::')[-1], set()).add((ret, fpath))


def call_return_is_integral(callee: str):
    """Conservative: True only when every observed decl return type (in the
    site's include universe) is integral."""
    _load_return_types()
    tys = _RETURN_TYPES.get(callee)
    if not tys and '::' in callee:
        # X77: qualified call `Math::RoundToInt(...)` -> bare-name index
        tys = _RETURN_TYPES.get(callee.split('::')[-1])
    if not tys:
        return False
    u = _file_universe(CURRENT_FILE) if CURRENT_FILE else 'neutral'
    usable = [(t, f) for (t, f) in tys
              if u == 'neutral' or _file_universe(f) in (u, 'neutral')]
    if not usable:
        return False
    for t, _f in usable:
        if classify_type(t) not in (W8, W16, W32, W64):
            return False
    return True


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
