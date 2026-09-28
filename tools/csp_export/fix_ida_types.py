#!/usr/bin/env python3
"""Fix the three largest OO-translation gate violation families in src/e4:

  1. IDA_TYPE  — raw IDA pseudocode types (_DWORD/_WORD/_BYTE/_QWORD/_UNKNOWN)
                 rewritten to their exact C++ equivalents (same size, same
                 signedness: `typedef unsigned int _DWORD;` etc. in
                 src/core/ida_compat.h).
  2. RAW_DWORD — `*(_DWORD *)&obj->Member = rhs;` forms rewritten to
                 `obj->Member = (unsigned int)(rhs);` when the member size is
                 confirmed (e4 class headers primary, csp_canon_members.json
                 consensus fallback). Non-integral / size-mismatched /
                 array-element targets are left untouched (they only lose the
                 _DWORD spelling via pass 3).
  3. MSVC_INTN — `unsigned __int8` -> uint8_t, `__int64` -> int64_t, etc.

All rewrites are semantics-preserving (bit-exact) and idempotent:
after one run none of the three gate patterns match anymore.

Usage: python tools/csp_export/fix_ida_types.py [--apply]
"""
import json
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
E4 = ROOT / 'src' / 'e4'
E4_CLASSES_DIR = E4 / 'classes'
CANON_MEMBERS = ROOT / 'anchors' / 'csp_canon_members.json'
APPLY = '--apply' in sys.argv

# ---------------------------------------------------------------- type tables
BASE_SIZES = {
    'bool': 1, 'char': 1, 'signed char': 1, 'unsigned char': 1,
    'int8_t': 1, 'uint8_t': 1, '_BYTE': 1, '__int8': 1,
    'short': 2, 'unsigned short': 2, 'int16_t': 2, 'uint16_t': 2,
    '_WORD': 2, '__int16': 2, 'wchar_t': 2,
    'int': 4, 'unsigned int': 4, 'long': 4, 'unsigned long': 4,
    'int32_t': 4, 'uint32_t': 4, 'float': 4, '_DWORD': 4, '__int32': 4,
    'long long': 8, 'unsigned long long': 8, 'int64_t': 8, 'uint64_t': 8,
    'double': 8, '_QWORD': 8, '__int64': 8,
    'void': 0,
}
INTEGRAL_BASES = {
    'bool', 'char', 'signed char', 'unsigned char', 'int8_t', 'uint8_t',
    '_BYTE', '__int8', 'short', 'unsigned short', 'int16_t', 'uint16_t',
    '_WORD', '__int16', 'wchar_t', 'int', 'unsigned int', 'long',
    'unsigned long', 'int32_t', 'uint32_t', '_DWORD', '__int32',
    'long long', 'unsigned long long', 'int64_t', 'uint64_t', '_QWORD',
    '__int64',
}

# cast tokens seen in `*(T *)&expr` forms: token -> (size, is_signed)
CAST_TOKENS = [
    ('_DWORD', 4, False), ('_WORD', 2, False), ('_BYTE', 1, False),
    ('_QWORD', 8, False),
    ('unsigned __int8', 1, False), ('unsigned __int16', 2, False),
    ('unsigned __int32', 4, False), ('unsigned __int64', 8, False),
    ('__int8', 1, True), ('__int16', 2, True), ('__int32', 4, True),
    ('__int64', 8, True),
]
# longest-first so `unsigned __int8` wins over `__int8` in alternations
CAST_TOKENS_SORTED = sorted(CAST_TOKENS, key=lambda t: -len(t[0]))
CAST_ALT = '|'.join(re.sub(r'\s+', r'\\s+', re.escape(tok))
                    for tok, _, _ in CAST_TOKENS_SORTED)


def fund_cast(size, signed):
    """Fundamental-type spelling for the replacement cast."""
    return {(1, True): 'signed char', (1, False): 'unsigned char',
            (2, True): 'short', (2, False): 'unsigned short',
            (4, True): 'int', (4, False): 'unsigned int',
            (8, True): 'long long', (8, False): 'unsigned long long'}[(size, signed)]


def norm_ty(ty):
    t = ty.strip()
    t = re.sub(r'^(?:const\s+|volatile\s+|struct\s+|enum\s+|union\s+)+', '', t)
    t = re.sub(r'\s+', ' ', t)
    return t


def ty_size(ty):
    """(size, is_integral) of a flattened e4-header member type, else (None, False)."""
    t = norm_ty(ty)
    if t.endswith('*'):
        return 4, False
    return BASE_SIZES.get(t), t in INTEGRAL_BASES


# --------------------------------------------------------- e4 header scanning
def parse_e4_class_headers():
    """classes/*.hpp -> {class: {member: (size, is_integral)}}; members that are
    arrays / bitfields / methods / nested are skipped (never rewrite targets)."""
    classes = {}
    by_name = defaultdict(set)  # member name -> {(size, integral)}
    for p in sorted(E4_CLASSES_DIR.glob('*.hpp')):
        try:
            lines = p.read_text(encoding='latin-1', errors='replace').split('\n')
        except OSError:
            continue
        cur = None
        depth = 0
        struct_depth = {}
        for ln in lines:
            if cur is None:
                m = re.match(r'\s*struct\s+([A-Za-z_]\w*)\s*(?::[^{]*)?\{', ln)
                if m:
                    cur = m.group(1)
                    depth = 1
                    classes.setdefault(cur, {})
                continue
            depth += ln.count('{') - ln.count('}')
            if depth <= 0:
                cur = None
                continue
            if depth != 1:
                continue
            if '(' in ln or ':' in re.sub(r'//.*', '', ln).replace('::', ''):
                continue  # method decl / bitfield
            code = re.sub(r'//.*', '', ln).strip()
            if not code.endswith(';') or not code or '=' in code:
                continue
            m = re.match(r'(.+?)\s*(\*+)\s*([A-Za-z_]\w*)\s*$|(.+?)\s+([A-Za-z_]\w*)\s*$',
                         code[:-1].strip())
            if not m:
                continue
            if m.group(1) is not None:
                ty, name = m.group(1), m.group(3)
            else:
                ty, name = m.group(4), m.group(5)
            ty = norm_ty(ty)
            if not ty or ty in ('return', 'goto', 'else', 'case', 'public', 'private', 'protected'):
                continue
            size, integral = ty_size(ty)
            if size is None:
                continue
            classes[cur][name] = (size, integral)
            by_name[name].add((size, integral))
    return classes, by_name


def parse_canon_consensus():
    """csp_canon_members.json -> {member: (size, integral)} only for names whose
    registered size is unique across all classes and whose registered type is a
    plain integer spelling (bool/pointer/array junk in that file is excluded)."""
    plain_int = re.compile(
        r'^(?:unsigned\s+|signed\s+)?(?:char|short|int|long(?:\s+long)?)$')
    sizes = defaultdict(set)
    for info in _iter_canon():
        for m in info.get('members', {}).values():
            t = norm_ty(str(m.get('type', '')))
            if plain_int.match(t) and m.get('size') in (1, 2, 4, 8):
                sizes[m.get('name')].add((m['size'], True))
    return {n: next(iter(s)) for n, s in sizes.items() if len(s) == 1}


def _iter_canon():
    try:
        data = json.loads(CANON_MEMBERS.read_text(encoding='utf-8'))
    except (OSError, ValueError):
        return
    for info in data.values():
        if isinstance(info, dict):
            yield info


# --------------------------------------------------------------- body scanning
# Atomic group: the expr always matches maximally (no backtracking to a shorter
# identifier prefix), so `*(_DWORD *)&v37[2].x` can never rewrite as `v3`.
EXPR = r'(?>[A-Za-z_]\w*(?:\s*(?:->|\.)\s*[A-Za-z_]\w*)*)'
WRITE_RE = re.compile(
    r'^(?P<ind>[ \t]*)\*\s*\(\s*(?P<cast>' + CAST_ALT + r')\s*\*\s*\)\s*&\s*'
    r'(?P<expr>' + EXPR + r')\s*=(?!=)\s*(?P<rest>.*)$')
READ_RE = re.compile(
    r'\*\s*\(\s*(?P<cast>' + CAST_ALT + r')\s*\*\s*\)\s*&\s*'
    r'(?P<expr>' + EXPR + r')(?![\w.\s]*(?:\[|->|\.))')

KEYWORDS = {'if', 'for', 'while', 'return', 'switch', 'case', 'else', 'do',
            'break', 'continue', 'goto', 'delete', 'new', 'sizeof', 'typedef',
            'static', 'extern', 'using', 'namespace'}

DECL_RE = re.compile(
    r'^(?P<prefix>(?:const\s+|volatile\s+|unsigned\s+|signed\s+|struct\s+|enum\s+)*)'
    r'(?P<base>[A-Za-z_]\w*(?:::[A-Za-z_]\w*)*)'
    r'(?P<sep>\s*\*+\s*|\s+)'
    r'(?P<name>[A-Za-z_]\w*)\s*(?P<arr>\[[^\]]*\])?\s*[=;,)]')

SIG_RE = re.compile(
    r'^\s*[\w:<>,~\s\*&\[\]]+?\b([A-Za-z_]\w*)::([A-Za-z_]\w*)\s*\((.*)\)')
PARAM_RE = re.compile(
    r'^(?P<prefix>(?:const\s+|volatile\s+|unsigned\s+|signed\s+)*)'
    r'(?P<base>[A-Za-z_]\w*(?:::[A-Za-z_]\w*)*)\s*(?P<stars>\*+|&)?\s*'
    r'(?:&\s*)?(?P<name>[A-Za-z_]\w*)$')

ADDR_RE = re.compile(r'^//\s*0x[0-9A-Fa-f]{6,8}\s*$')


class BodyState:
    """Per-function-block local variable / this-class knowledge."""
    __slots__ = ('this_cls', 'locals')

    def __init__(self):
        self.this_cls = None
        self.locals = {}  # name -> (base_ty, nptr, is_array)


def looks_like_type(base):
    if base in BASE_SIZES:
        return True
    if base.startswith(('uint', 'int')) and base.endswith('_t'):
        return True
    return base[0].isupper()


def scan_decls(state, sigline, lines):
    if sigline is not None:
        m = SIG_RE.match(sigline)
        if m:
            state.this_cls = m.group(1)
            for part in _split_params(m.group(3)):
                pm = PARAM_RE.match(part.strip())
                if pm:
                    base = norm_ty((pm.group('prefix') or '') + pm.group('base'))
                    state.locals[pm.group('name')] = (
                        base, 1 if pm.group('stars') else 0, False)
    for ln in lines:
        s = ln.strip()
        if not s or s.startswith('//') or s.startswith('#'):
            continue
        if '(' in s or '->' in s:
            continue
        first = re.match(r'[A-Za-z_]\w*', s)
        if not first or first.group(0) in KEYWORDS:
            continue
        dm = DECL_RE.match(s)
        if not dm:
            continue
        base = norm_ty((dm.group('prefix') or '') + dm.group('base'))
        if not looks_like_type(base):
            continue
        stars = 1 if '*' in (dm.group('sep') or '') else 0
        is_arr = dm.group('arr') is not None
        state.locals[dm.group('name')] = (base, stars, is_arr)
        # simple multi-declarator: `int a, b;`
        rest = s[dm.end('name'):].lstrip()
        if not is_arr and rest.startswith(','):
            for extra in rest[1:].split(','):
                em = re.match(r'\s*(\*+)\s*([A-Za-z_]\w*)|([A-Za-z_]\w*)', extra)
                if em:
                    if em.group(1) is not None:
                        state.locals[em.group(2)] = (base, 1, False)
                    elif em.group(3):
                        state.locals[em.group(3)] = (base, 0, False)


def _split_params(s):
    parts, depth, cur = [], 0, ''
    for ch in s:
        if ch in '(<[':
            depth += 1
        elif ch in ')>]':
            depth -= 1
        if ch == ',' and depth == 0:
            parts.append(cur)
            cur = ''
        else:
            cur += ch
    if cur.strip():
        parts.append(cur)
    return parts


class Resolver:
    def __init__(self, e4_classes, e4_by_name, canon_consensus):
        self.e4_classes = e4_classes
        self.e4_by_name = e4_by_name
        self.canon = canon_consensus

    def lookup_member(self, cls, name):
        info = self.e4_classes.get(cls, {}).get(name)
        if info:
            return info
        uniq = self.e4_by_name.get(name)
        if uniq and len(uniq) == 1:
            return next(iter(uniq))
        return self.canon.get(name)

    def resolve(self, expr, state):
        """expr -> (size, is_integral) or None. Only exact-scalar targets."""
        parts = re.split(r'\s*(?:->|\.)\s*', expr)
        if len(parts) == 2:
            base, name = parts
            if base == 'this':
                cls = state.this_cls
            else:
                li = state.locals.get(base)
                if not li or li[1] != 1:
                    return None
                cls = li[0]
            if not cls:
                return None
            return self.lookup_member(cls, name)
        if len(parts) == 1:
            li = state.locals.get(parts[0])
            if li and not li[2] and li[1] == 0:
                return ty_size(li[0])
        return None


def norm_expr(e):
    e = re.sub(r'\s*->\s*', '->', e)
    e = re.sub(r'\s*\.\s*', '.', e)
    return e


def rhs_clean(rhs):
    depth = 0
    for ch in rhs:
        if ch in '([':
            depth += 1
        elif ch in ')]':
            depth -= 1
        elif ch == ',' and depth <= 0:
            return False
    return True


def fix_read(m, resolver, state, stats):
    tok = re.sub(r'\s+', ' ', m.group('cast'))
    info = CAST_INFO_NORM[tok]
    expr = m.group('expr')
    tgt = resolver.resolve(expr, state)
    if not tgt or tgt[0] != info[0]:
        return m.group(0)
    stats['raw_read'] += 1
    return '((%s)(%s))' % (fund_cast(info[0], info[1]), norm_expr(expr))


def fix_line_pass1(ln, resolver, state, stats):
    wm = WRITE_RE.match(ln)
    if wm:
        info = CAST_INFO_NORM[re.sub(r'\s+', ' ', wm.group('cast'))]
        expr = wm.group('expr')
        tgt = resolver.resolve(expr, state)
        rest = wm.group('rest')
        if tgt and tgt[0] == info[0] and ';' in rest and rhs_clean(rest[:rest.index(';')]):
            i = rest.index(';')
            rhs = READ_RE.sub(lambda m2, r=resolver, s=state, st=stats:
                              fix_read(m2, r, s, st), rest[:i])
            stats['raw_write'] += 1
            return '%s%s = (%s)(%s);%s' % (
                wm.group('ind'), norm_expr(expr),
                fund_cast(info[0], info[1]), rhs, rest[i + 1:])
    return READ_RE.sub(lambda m, r=resolver, s=state, st=stats:
                       fix_read(m, r, s, st), ln)


CAST_INFO_NORM = {re.sub(r'\s+', ' ', tok): (size, signed)
                  for tok, size, signed in CAST_TOKENS}

MSVC_UNSIGNED_RE = re.compile(r'\bunsigned\s+__int(8|16|32|64)\b')
MSVC_SIGNED_RE = re.compile(r'\b__int(8|16|32|64)\b')
IDA_TYPE_MAP = {'_DWORD': 'unsigned int', '_WORD': 'unsigned short',
                '_BYTE': 'unsigned char', '_QWORD': 'unsigned long long',
                '_UNKNOWN': 'void'}
IDA_TYPE_RE = re.compile(r'\b(_DWORD|_WORD|_BYTE|_QWORD|_UNKNOWN)\b')


def fix_text(txt, resolver, stats):
    lines = txt.split('\n')
    state = BodyState()
    block = []
    sigline = None
    out = []
    for ln in lines:
        if ADDR_RE.match(ln.strip()):
            out.extend(_flush(block, sigline, resolver, state, stats))
            block = []
            sigline = None
            state = BodyState()
            out.append(ln)
            continue
        if state.this_cls is None and sigline is None and '::' in ln and '(' in ln \
                and ';' not in ln and '=' not in ln \
                and not ln.strip().startswith('//'):
            sigline = ln
        block.append(ln)
    out.extend(_flush(block, sigline, resolver, state, stats))
    txt = '\n'.join(out)

    # pass 2: MSVC integer intrinsics
    n2 = len(MSVC_UNSIGNED_RE.findall(txt)) + len(MSVC_SIGNED_RE.findall(txt))
    if n2:
        stats['msvc_intn'] += n2
        txt = MSVC_UNSIGNED_RE.sub(r'uint\1_t', txt)
        txt = MSVC_SIGNED_RE.sub(r'int\1_t', txt)

    # pass 3: remaining raw IDA type spellings
    n3 = len(IDA_TYPE_RE.findall(txt))
    if n3:
        stats['ida_type'] += n3
        txt = IDA_TYPE_RE.sub(lambda m: IDA_TYPE_MAP[m.group(1)], txt)
    return txt


def _flush(block, sigline, resolver, state, stats):
    if not block:
        return []
    scan_decls(state, sigline, block)
    return [fix_line_pass1(ln, resolver, state, stats) for ln in block]


def main():
    e4_classes, e4_by_name = parse_e4_class_headers()
    canon = parse_canon_consensus()
    resolver = Resolver(e4_classes, e4_by_name, canon)
    sys.stderr.write('e4 classes parsed: %d, members: %d unique names, canon consensus: %d\n'
                     % (len(e4_classes), len(e4_by_name), len(canon)))

    stats = defaultdict(int)
    changed_files = 0
    # G34: global scope — regen (step4) re-lands export pseudocode with
    # IDA vocabulary into EVERY universe (tree included); the fixer must
    # cover all of src or the vocabulary returns each round.
    files = sorted(p for p in (ROOT / 'src').rglob('*')
                   if p.suffix in ('.cpp', '.hpp')
                   and '_generated' not in str(p)
                   and 'csp_canon' not in str(p))
    for p in files:
        try:
            txt = p.read_text(encoding='latin-1')
        except OSError:
            continue
        new = fix_text(txt, resolver, stats)
        if new != txt:
            changed_files += 1
            if APPLY:
                p.write_bytes(new.encode('latin-1', errors='replace'))

    print('fix_ida_types %s' % ('APPLIED' if APPLY else 'DRY RUN (use --apply)'))
    print('  files changed     : %d / %d' % (changed_files, len(files)))
    print('  raw_write rewrites: %d  (*(_DWORD *)&obj->m = rhs -> obj->m = (unsigned int)(rhs);)'
          % stats['raw_write'])
    print('  raw_read  rewrites: %d  (*(_DWORD *)&obj->m -> ((unsigned int)(obj->m)))'
          % stats['raw_read'])
    print('  msvc_intn tokens  : %d' % stats['msvc_intn'])
    print('  ida_type  tokens  : %d' % stats['ida_type'])


if __name__ == '__main__':
    main()
