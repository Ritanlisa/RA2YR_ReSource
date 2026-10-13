#!/usr/bin/env python3
"""X14: resolve raw function return types into class pointers (usage evidence).

Binary evidence + lattice only (2026-09-03 ruling: NO voting / majority /
statistics channels). Sources of evidence, per call site of the callee:

  1. call-site cast / typed assignment in the mechanical tree
     (`x = (Cls *)F(...)`)            -> upper bound (the value IS a Cls or
     a class derived from it) — IDA's own render, binary-derived.
  2. cross-function passing           -> `x` passed as the implicit `this` of a
     known class method (signals `cls`) or first arg cast to a class
     -> upper bound.
  3. class-member access offset sets on the returned value:
       `x[N]` (bare index; width from x's declared pointer type),
       `*(T *)(x + K)`, `(T *)(x + K)` -> member offsets.
  4. vtable-slot calls                -> `(*x + S)(...)` -> slot byte S.
  5. member-value chains             -> `x[N] + K` / `x[N]->M`: the member at
     the first offset must be a class D whose layout carries K / M.
  6. post-conversion member names    -> `x->M` must exist in the candidate's
     declaration chain.

A class C is consistent iff every observed offset exists in C's chain
(declared members + member authority), every observed slot exists in C's
vtable chain, every chain check holds for C, every member-name use resolves
in C, and C is within (equal to / derived from) every upper bound.

Adjudication:
  - no candidates            -> fail loud (contradiction; addresses listed)
  - unique most-derived      -> resolved
  - several minimal siblings -> lattice JOIN; used only if the join itself is
    consistent (covers every observed offset); else fail loud (ambiguous)
  - weak evidence only       -> fail loud (no-class-evidence)

Writes (--apply, idempotent):
  - tools/csp/full_report/csp_functions.json : return_type + return_evidence
    (the CSP manifest — engine's csp_return anchor channel consumes it)
  - signals.json                            : return_type (X4/X13-era single
    truth consumed by the lowering/other tools)

Usage:
  python tools/csp_export/solve_return_types_lattice.py            # dry census
  python tools/csp_export/solve_return_types_lattice.py --limit 40
  python tools/csp_export/solve_return_types_lattice.py --apply
  python tools/csp_export/solve_return_types_lattice.py --func 0x47C4D0 -v
"""
import argparse
import json
import os
import re
import sys
import time
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
EVID = ROOT / '.omo' / 'evidence' / 'optimization' / 'x14'
EVID.mkdir(parents=True, exist_ok=True)
CSP_PATH = ROOT / 'tools' / 'csp' / 'full_report' / 'csp_functions.json'
SIGNALS_PATH = ROOT / 'signals.json'

# compiled-tree skip set (same as canon_member_lowering.SKIP_PARTS)
SKIP_PARTS = ('raw_decomp', 'csp_canon', '_generated')

SCALAR_W = {
    'unsigned int': 4, 'int': 4, '_DWORD': 4, 'uint32_t': 4, 'long': 4,
    'unsigned long': 4, 'float': 4, 'BOOL': 4, 'DWORD': 4,
    'unsigned char': 1, 'char': 1, '_BYTE': 1, 'uint8_t': 1, 'bool': 1,
    'unsigned short': 2, 'short': 2, '_WORD': 2, 'uint16_t': 2, 'wchar_t': 2,
    '__int16': 2, '__int64': 8, 'double': 8, 'unsigned __int64': 8,
}


def J(p):
    return json.loads(Path(p).read_text(encoding='utf-8'))


# ------------------------------------------------------------------ tables
print('loading tables...', flush=True)
SIG = J(SIGNALS_PATH)
FUNCS = {}        # addr_int -> signals record
NAME2ADDR = {}
NAME_DUP = set()
SHORT2ADDR = {}
SHORT_DUP = set()
for _k, _v in SIG['symbols'].items():
    if _v.get('kind') != 'function':
        continue
    try:
        _a = int(_v['address'], 16)
    except (KeyError, ValueError, TypeError):
        continue
    FUNCS[_a] = _v
    _nm = _v.get('name') or ''
    if _nm:
        if _nm in NAME2ADDR:
            NAME_DUP.add(_nm)
        NAME2ADDR.setdefault(_nm, _a)
        _sh = _nm.split('::')[-1]
        if _sh in SHORT2ADDR:
            SHORT_DUP.add(_sh)
        SHORT2ADDR.setdefault(_sh, _a)

AUTH = J(ROOT / 'anchors' / 'member_authority.json')['members']
MTAB = J(ROOT / 'anchors' / 'csp_canon_members.json')
CDB = J(ROOT / 'anchors' / 'class_db.json')['classes']
try:
    LAYOUTS = J(ROOT / 'tools' / 'class_layouts.json')
except Exception:
    LAYOUTS = {}

CLASSES = set()
for _c in MTAB:
    CLASSES.add(_c)
for _c in CDB:
    CLASSES.add(_c)
for _c in LAYOUTS:
    CLASSES.add(_c)
for _k, _v in AUTH.items():
    if isinstance(_v, dict) and _v.get('class'):
        CLASSES.add(_v['class'])
CLASSES_L = {c.lower(): c for c in CLASSES}

# per-class members: off -> [name, [type candidates], size]
MEMB = {}
for _c, _e in MTAB.items():
    _d = MEMB.setdefault(_c.lower(), {})
    for _o, _m in ((_e or {}).get('members') or {}).items():
        try:
            _oi = int(_o)
        except (TypeError, ValueError):
            continue
        _d[_oi] = [(_m.get('name') or ''), [(_m.get('type') or '')],
                   (_m.get('size') or 0)]
for _k, _v in AUTH.items():
    if not isinstance(_v, dict):
        continue
    _c = _v.get('class')
    _o = _v.get('offset')
    if _c is None or _o is None:
        continue
    _d = MEMB.setdefault(str(_c).lower(), {})
    _e = _d.get(int(_o))
    _ty = _v.get('type') or ''
    _sz = _v.get('size') or 0
    if _e is None:
        _d[int(_o)] = ['', [ty for ty in [_ty] if ty], _sz]
    else:
        if _ty and _ty not in _e[1]:
            _e[1].append(_ty)
        if not _e[2] and _sz:
            _e[2] = _sz

# hierarchy
PARENT = {}
for _c, _v in CDB.items():
    _fa = [a for a in ((_v or {}).get('full_ancestors') or [])
           if isinstance(a, str) and a != _c]
    if _fa:
        PARENT[_c] = _fa
for _c, _v in LAYOUTS.items():
    _p = (_v or {}).get('parent') if isinstance(_v, dict) else None
    if isinstance(_p, str) and _p:
        lst = PARENT.setdefault(_c, [])
        if _p not in lst:
            lst.append(_p)

_ANC_CACHE = {}


def ancestors(cls):
    key = cls
    if key in _ANC_CACHE:
        return _ANC_CACHE[key]
    out, stack, seen = [], [cls], {cls}
    while stack:
        c = stack.pop()
        for p in PARENT.get(c, ()):
            if p not in seen:
                seen.add(p)
                out.append(p)
                stack.append(p)
    _ANC_CACHE[key] = out
    return out


def derived_or_eq(c, p):
    if c == p:
        return True
    return p in ancestors(c)


def class_of_type(ty, size=None):
    """type string -> class name when it denotes a class pointer/value."""
    if not ty or not isinstance(ty, str):
        return None
    t = ty.strip().rstrip('*& ').strip()
    t = re.sub(r'^(?:const\s+|struct\s+|class\s+|union\s+)', '', t).strip()
    if not re.match(r'^[A-Za-z_]\w*$', t):
        return None
    if size is not None and size not in (0, 4):
        return None
    if t in CLASSES:
        return t
    return CLASSES_L.get(t.lower())


# vtable slot tables (same construction as tools/csp_export/_vtable.py)
SLOTS = {}


def slots_of(cls):
    if cls in SLOTS:
        return SLOTS[cls]
    table = {}
    for c in [cls] + ancestors(cls):
        for _mid, arec in (((CDB.get(c) or {}).get('methods')) or {}).items():
            vs = arec.get('vtable_slots') or []
            if vs:
                try:
                    byte = int(vs[0]['slot']) * 4
                except (KeyError, TypeError, ValueError):
                    continue
                table.setdefault(byte, (arec.get('name') or '').split('::')[-1])
    SLOTS[cls] = table
    return table


_members_chain_cache = {}


def chain_members(cls):
    """{off: (name, [types], size, owner_cls)} walking the ancestry."""
    key = cls
    if key in _members_chain_cache:
        return _members_chain_cache[key]
    out = {}
    for c in [cls] + ancestors(cls):
        d = MEMB.get(c.lower())
        if not d:
            continue
        for off, (nm, ty, sz) in d.items():
            if off not in out:
                out[off] = (nm, ty, sz, c)
    _members_chain_cache[key] = out
    return out


def members_by_name(cls):
    key = ('N', cls)
    if key in _members_chain_cache:
        return _members_chain_cache[key]
    out = {}
    for off, (nm, ty, sz, c) in chain_members(cls).items():
        if nm and nm not in out:
            out[nm] = (off, ty, sz)
    _members_chain_cache[key] = out
    return out


# --------------------------------------------------------- source scanning
ADDR_LINE = re.compile(
    r'^//\s*(?:IDA[:\s]\s*)?0x([0-9A-Fa-f]{6,8})(?:\s*:|\s*\(|\s*$)')
DEF_Q = re.compile(r'\b([A-Za-z_]\w*)::\s*~?[A-Za-z_]\w*\s*\(')
INSIDE = ("// [IDA decompile] original pseudocode - translation "
          "pending (final goal)")


def brace_delta(ln):
    d = 0
    i = 0
    instr = None
    n = len(ln)
    while i < n:
        c = ln[i]
        if instr:
            if c == '\\':
                i += 2
                continue
            if c == instr:
                instr = None
            i += 1
            continue
        if c in '"':
            instr = c
            i += 1
            continue
        if c == '/' and i + 1 < n and ln[i + 1] == '/':
            break
        if c == '/' and i + 1 < n and ln[i + 1] == '*':
            j = ln.find('*/', i + 2)
            if j < 0:
                break
            i = j + 2
            continue
        if c == '{':
            d += 1
        elif c == '}':
            d -= 1
        i += 1
    return d


def file_spans(lines):
    """[(addr_or_0, start_line, end_line)] — proven X5 scanner (copied)."""
    spans = []
    i = 0
    n = len(lines)
    while i < n:
        if lines[i].rstrip('\r') == INSIDE:
            depth, started, k = 0, False, i
            while k < n:
                dd = brace_delta(lines[k])
                if dd:
                    started = True
                if started:
                    depth += dd
                    if depth <= 0:
                        break
                k += 1
            i = k + 1
            continue
        a = ADDR_LINE.match(lines[i].strip())
        if a:
            j = i + 1
            while j < n and '(' not in lines[j]:
                j += 1
            if j < n:
                depth, started, k = 0, False, j
                while k < n:
                    dd = brace_delta(lines[k])
                    if dd:
                        started = True
                    if started:
                        depth += dd
                        if depth <= 0:
                            break
                    k += 1
                spans.append((int(a.group(1), 16), i, min(k, n - 1)))
        i += 1
    # unannotated defs (same fallback as canon_member_lowering.scan_spans)
    covered = [(s, e) for (_a, s, e) in spans]
    for j, ln in enumerate(lines):
        if ln.strip().startswith('//') or '(' not in ln or '::' not in ln:
            continue
        if ln.rstrip().endswith(';') or not DEF_Q.search(ln):
            continue
        if any(s <= j <= e for (s, e) in covered):
            continue
        nb2 = j + 1
        while nb2 < n:
            s2 = lines[nb2].strip()
            if s2.startswith('//') and re.match(
                    r'^//\s*(?:IDA[:\s]\s*)?0x[0-9A-Fa-f]{6,8}', s2):
                break
            nb2 += 1
        depth, started, k = 0, False, j
        while k < nb2:
            dd = brace_delta(lines[k])
            if dd:
                started = True
            if started:
                depth += dd
                if depth <= 0:
                    break
            k += 1
        if started:
            end = min(k, nb2 - 1)
            spans.append((0, j, end))
            covered.append((j, end))
    return spans


def span_for(spans, line_idx):
    best = None
    for addr, s, e in spans:
        if s <= line_idx <= e:
            if best is None or (e - s) < (best[2] - best[1]):
                best = (addr, s, e)
    return best


CALL_RE = re.compile(r'([A-Za-z_]\w*(?:\s*::\s*~?[A-Za-z_]\w*)*)\s*\(')
ASSIGN_HEAD = re.compile(
    r'([A-Za-z_]\w*)\s*=\s*(?:\(\s*([A-Za-z_]\w*)\s*\*+\s*\)\s*)?$')
CTRL_LINE = re.compile(r'^\s*(?:if|while|for|switch|return|else|do|case)\b')
# signature/definition tail: `(...)` optionally followed by `{`
DEF_TAIL = re.compile(r'^\([^;{}]*\)\s*\{?\s*$')
# type-ish text before a name (return type / qualifiers)
TYPE_HEAD = re.compile(r'^[A-Za-z_][\w:<>\*&,\s]*$')


def _is_def_line(ln, m):
    """True when the call-shaped match is really a function signature."""
    core = re.sub(r'/\*.*?\*/', '', ln)
    core = core.split('//')[0].rstrip()
    if CTRL_LINE.match(core):
        return False
    pre = core[:m.start()].rstrip()
    tail = core[m.end() - 1:]
    if not DEF_TAIL.match(tail):
        return False
    if not pre:
        return False
    if any(ch in pre for ch in '=;,()'):
        return False
    return bool(TYPE_HEAD.match(pre))


def norm_qual(name):
    return re.sub(r'\s+', '', name)


class Site:
    __slots__ = ('file', 'line', 'col', 'anchor', 'recv', 'cast', 'callee_addr',
                 'callee_name')

    def __init__(self, file, line, col, anchor, recv, cast, callee_addr,
                 callee_name):
        self.file = file
        self.line = line
        self.col = col
        self.anchor = anchor
        self.recv = recv
        self.cast = cast
        self.callee_addr = callee_addr
        self.callee_name = callee_name


def scan_sites(target_addrs, targets_short, files, verbose=False):
    """file scan -> ({callee_addr: [Site]}, {callee_addr: (file, def_line)})."""
    sites = defaultdict(list)
    defs = {}
    anchor_re = re.compile(r'/\*(0x[0-9A-Fa-f]{6,8})\*/')
    for fi, p in enumerate(files):
        rel = str(p.relative_to(ROOT)).replace('\\', '/')
        try:
            lines = p.read_text(encoding='latin-1').split('\n')
        except OSError:
            continue
        for li, ln in enumerate(lines):
            if '(' not in ln:
                continue
            for m in CALL_RE.finditer(ln):
                q = norm_qual(m.group(1))
                addr = NAME2ADDR.get(q) if q in NAME2ADDR else None
                if addr is None:
                    sh = q.split('::')[-1]
                    if q not in NAME_DUP and sh in targets_short \
                            and sh not in SHORT_DUP:
                        addr = SHORT2ADDR.get(sh)
                if addr is None or addr not in target_addrs:
                    continue
                if _is_def_line(ln, m):
                    if addr not in defs:
                        defs[addr] = (rel, li)
                    continue
                head = ln[:m.start()]
                hm = ASSIGN_HEAD.search(head.rstrip())
                recv = hm.group(1) if hm else None
                cast = hm.group(2) if hm else None
                am = anchor_re.search(ln)
                anchor = int(am.group(1), 16) if am else None
                sites[addr].append(Site(rel, li, m.start(), anchor, recv, cast,
                                        addr, q))
        if verbose and fi % 200 == 0:
            print('  ...scanned %d/%d files' % (fi, len(files)), flush=True)
    return sites, defs


def _split_top(txt):
    out, d, cur = [], 0, []
    for ch in txt:
        if ch in '(<[':
            d += 1
        elif ch in ')>]':
            d -= 1
        if ch == ',' and d == 0:
            out.append(''.join(cur))
            cur = []
            continue
        cur.append(ch)
    out.append(''.join(cur))
    return out


def _parse_def_params(lines, start, end):
    head = []
    for k in range(start, min(end + 1, start + 6)):
        head.append(lines[k])
        if '{' in lines[k]:
            break
    txt = '\n'.join(head)
    i = txt.find('(')
    if i < 0:
        return []
    d, j = 0, i
    while j < len(txt):
        if txt[j] == '(':
            d += 1
        elif txt[j] == ')':
            d -= 1
            if d == 0:
                break
        j += 1
    ptxt = txt[i + 1:j]
    if not ptxt.strip() or ptxt.strip() == 'void':
        return []
    out = []
    for piece in _split_top(ptxt):
        m = re.search(r'([A-Za-z_]\w*)\s*$', piece.strip())
        if not m:
            continue
        out.append((m.group(1), piece[:m.start()].strip()))
    return out


THIS_MEM_PH = re.compile(r'^(?:vfptr\d*|vtable\d+|__pad_\w*|q0+)$')
SYNTH_RECV = re.compile(r'^(?:Gap2Recv_|E4Recv)')


def analyze_callee_returns(addr, defs, load_lines):
    """Return ('this', cls) / ('typed_passthrough', cls) / ('passthrough', None)
    / None, from the callee's mechanical body."""
    info = defs.get(addr)
    if not info:
        return None
    rel, li = info
    lines, spans = load_lines(rel)
    sp = span_for(spans, li)
    if sp is None:
        return None
    _, s0, s1 = sp
    body = '\n'.join(lines[li:s1 + 1])
    params = _parse_def_params(lines, li, s1)
    ptypes = {n: t for n, t in params}
    cls = (FUNCS.get(addr) or {}).get('cls') or ''
    cats = []
    for m in re.finditer(r'\breturn\s+([^;]+);', body):
        e = re.sub(r'/\*.*?\*/', '', m.group(1)).strip()
        ee = e
        for _ in range(3):
            mm = re.match(r'^\(\s*[A-Za-z_]\w*\s*\*+\s*\)\s*(.+)$', ee)
            if mm:
                ee = mm.group(1).strip()
                continue
            break
        ee = ee.strip('() ')
        if ee == 'this':
            cats.append(('this', None))
            continue
        mm = re.match(r'^&?\s*this\s*->\s*(\w+)$', ee)
        if mm:
            cats.append(('this_mem', mm.group(1)))
            continue
        if ee in ptypes:
            cats.append(('param', ee))
            continue
        cats.append(('?', None))
    if not cats:
        return None
    # untyped param passthrough => the pointee type is caller-provided
    untyped_pt = False
    typed_classes = set()
    for kind, val in cats:
        if kind == 'param':
            ty = ptypes.get(val, '')
            if '*' in ty:
                c = class_of_type(ty)
                if c:
                    typed_classes.add(c)
                    continue
            untyped_pt = True
    if untyped_pt:
        return ('passthrough', None)
    kinds = {k for k, _ in cats}
    if kinds == {'this', 'this_mem'} or kinds == {'this'} or kinds == {'this_mem'}:
        for kind, val in cats:
            if kind != 'this_mem':
                continue
            ok = False
            if THIS_MEM_PH.match(val or ''):
                ok = True
            else:
                bm = members_by_name(cls) if cls else {}
                if val in bm and bm[val][0] == 0:
                    ok = True
            if not ok:
                return None
        # class of the returned `this`: prefer the def-line class when it is a
        # real (non synthetic-receiver) class; else the X11 vtable-install
        # marker class (binary ctor-install truth); else fail loud.
        defc = ''
        dm = DEF_Q.search(' '.join(lines[li:min(s1, li + 3) + 1]))
        if dm:
            defc = dm.group(1)
        cls2 = None
        if defc and defc in CLASSES and not SYNTH_RECV.match(defc):
            cls2 = defc
        else:
            marks = {m for m in re.findall(
                r'X11: vtable install elided \(implicit via (\w+) virtuals',
                body) if m in CLASSES}
            if len(marks) == 1:
                cls2 = marks.pop()
        if not cls2:
            return ('this-synthetic', None)
        sc = (FUNCS.get(addr) or {}).get('cls') or ''
        if sc and sc in CLASSES and not (
                cls2 == sc or derived_or_eq(cls2, sc) or derived_or_eq(sc, cls2)):
            return ('this-conflict', None)
        return ('this', cls2)
    if kinds == {'param'} and len(typed_classes) == 1:
        return ('typed_passthrough', typed_classes.pop())
    if kinds == {'param'}:
        return ('passthrough', None)
    return None


# -------------------------------------------------------------- usage scan
def decl_width(span_lines, var):
    """(width, is_pointer) of var's declaration, or (None, None)."""
    rx = re.compile(
        r'^\s*(?:struct\s+|union\s+|const\s+)*'
        r'(unsigned\s+(?:int|char|short|long)|int|_DWORD|_BYTE|_WORD|'
        r'uint\w+_t|char|short|long|float|double|bool|BOOL|DWORD)\s*'
        r'(\*+)\s*' + re.escape(var) + r'\b')
    for ln in span_lines:
        m = rx.match(ln)
        if m:
            base = re.sub(r'\s+', ' ', m.group(1)).strip()
            return SCALAR_W.get(base), True
    rx2 = re.compile(
        r'^\s*(?:struct\s+|union\s+|const\s+)*'
        r'(unsigned\s+(?:int|char|short|long)|int|_DWORD|_BYTE|_WORD|'
        r'uint\w+_t|char|short|long|float|double|bool|BOOL|DWORD)\s+'
        + re.escape(var) + r'\b')
    for ln in span_lines:
        m = rx2.match(ln)
        if m:
            base = re.sub(r'\s+', ' ', m.group(1)).strip()
            return SCALAR_W.get(base), False
    size_t = re.compile(r'^\s*size_t\s*\*+\s*' + re.escape(var) + r'\b')
    for ln in span_lines:
        if size_t.match(ln):
            return 4, True
    return None, None


# placeholder / offset-encoded member names — non-discriminative as evidence
PLACEHOLDER_NAME = re.compile(
    r'^(?:vtable\d*|vfptr\d*|vt_slot_\d+|__pad_[0-9A-Fa-f]*|'
    r'q[0-9A-Fa-f]+|u(?:8|16|32|64)_[0-9A-Fa-f]+|m_[0-9A-Fa-f]+|'
    r'ptr_[0-9A-Fa-f]+|tail_[0-9A-Fa-f]+|\w+_field_0x[0-9A-Fa-f]+|'
    r'[A-Za-z_]\w*_field_\d+)$', re.I)


def collect_usage(span_text, var):
    """-> dict with offsets{}, slots{}, chains[], names[], passes[], casts[]."""
    out = {'offsets': defaultdict(list), 'slots': defaultdict(list),
           'chains': [], 'names': [], 'passes': [], 'casts': []}
    vb = r'(?<![\w>.\-])' + re.escape(var) + r'\b'

    # casts of x: (Cls *)x / (Cls **)x
    for m in re.finditer(r'\(\s*([A-Za-z_]\w*)\s*\*+\s*\)\s*' + vb, span_text):
        out['casts'].append(m.group(1))

    # vtable slot: *x + S
    for m in re.finditer(r'\*\s*' + vb + r'\s*\+\s*(\d+)', span_text):
        out['slots'][int(m.group(1))].append('vptr+slot')

    # member name use: x->M
    for m in re.finditer(vb + r'\s*->\s*([A-Za-z_]\w*)', span_text):
        out['names'].append(m.group(1))

    # chains: x[N1] + K  /  x[N1] -> M
    for m in re.finditer(vb + r'\s*\[\s*(\d+)\s*\]\s*\+\s*(\d+)', span_text):
        out['chains'].append(('idx+imm', int(m.group(1)), int(m.group(2))))
    for m in re.finditer(vb + r'\s*\[\s*(\d+)\s*\]\s*->\s*([A-Za-z_]\w*)',
                         span_text):
        out['chains'].append(('idx+name', int(m.group(1)), m.group(2)))

    # bare index: x[N]
    for m in re.finditer(vb + r'\s*\[\s*(\d+)\s*\]', span_text):
        out['offsets']['idx'].append(int(m.group(1)))

    # byte arithmetic deref: *(T *)(x + K)
    for m in re.finditer(r'\*\s*\(\s*[A-Za-z_]\w*(?:\s*\*+)?\s*\*\s*\)\s*'
                         r'\(\s*' + vb + r'\s*\+\s*(\d+)\s*\)', span_text):
        out['offsets']['plus'].append(int(m.group(1)))

    # cross-function passing: split calls
    for m in CALL_RE.finditer(span_text):
        args_off = m.end() - 1
        depth, k = 0, args_off
        while k < len(span_text):
            ch = span_text[k]
            if ch == '(':
                depth += 1
            elif ch == ')':
                depth -= 1
                if depth == 0:
                    break
            k += 1
        if k >= len(span_text):
            continue
        argt = span_text[args_off + 1:k]
        first = argt.split(',')[0].strip() if argt.strip() else ''
        if not first:
            continue
        mm = re.match(r'^(?:\(\s*([A-Za-z_]\w*)\s*\*+\s*\)\s*)?' +
                      re.escape(var) + r'\s*$', first)
        if mm:
            out['passes'].append((norm_qual(m.group(1)), mm.group(1)))
    return out


# ------------------------------------------------------------------ checks
def check_class(cls, offs, slots, chains, names, ubounds, explain=None):
    """True iff cls is consistent with the evidence."""
    def bad(why):
        if explain is not None:
            explain.append(why)
        return False

    cm = None
    for o in offs:
        cm = cm if cm is not None else chain_members(cls)
        if o not in cm:
            return bad('no member at 0x%X' % o)
    for s in slots:
        if s not in slots_of(cls):
            return bad('no vtable slot at byte 0x%X' % s)
    for kind, a, b in chains:
        cm = cm if cm is not None else chain_members(cls)
        # chain source offset: index forms -> a * width handled by caller;
        # here a is already a byte offset
        rec = cm.get(a)
        if rec is None:
            return bad('chain base offset 0x%X missing' % a)
        types, sz = rec[1], rec[2]
        ds = [class_of_type(t, sz) for t in types]
        ds = [d for d in ds if d]
        if not ds:
            return bad('chain base 0x%X not a class member (%s)' % (a, types))
        ok = False
        why = []
        for d in ds:
            dm = chain_members(d)
            if kind == 'idx+imm':
                if b in dm:
                    ok = True
                    break
                why.append('%s lacks +%d' % (d, b))
            else:
                if b in members_by_name(d):
                    ok = True
                    break
                why.append('%s lacks member %s' % (d, b))
        if not ok:
            return bad('chain target: ' + '; '.join(why))
    bn = None
    for nm in names:
        bn = bn if bn is not None else members_by_name(cls)
        if nm not in bn:
            return bad('no member named %s' % nm)
    for u in ubounds:
        if not derived_or_eq(cls, u):
            return bad('not derived from %s' % u)
    return True


def join_classes(cl):
    """least common ancestor (lattice join) of a class list."""
    if not cl:
        return None
    if len(cl) == 1:
        return cl[0]
    common = None
    for c in cl:
        s = {c} | set(ancestors(c))
        common = s if common is None else (common & s)
    if not common:
        return None
    # most-derived common ancestor
    best = None
    for c in common:
        if best is None or derived_or_eq(c, best):
            best = c
    return best


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--apply', action='store_true')
    ap.add_argument('--limit', type=int, default=0)
    ap.add_argument('--func', default='')
    ap.add_argument('-v', '--verbose', action='store_true')
    args = ap.parse_args()

    t0 = time.time()
    # targets: raw (non-class, non-void) return types
    targets = {}
    fam = Counter()
    for a, v in FUNCS.items():
        rt = (v.get('return_type') or '').strip()
        base = re.sub(r'^(?:const\s+)?', '', rt).rstrip('*& ').strip()
        base = re.sub(r'^(?:struct\s+|class\s+)', '', base).strip()
        if base in ('void', ''):
            continue
        if base in CLASSES or CLASSES_L.get(base.lower()):
            continue
        targets[a] = rt
        fam[rt] += 1
    print('target callees (raw non-void return):', len(targets))
    if args.func:
        fa = int(args.func, 16)
        # --func may target an already-resolved function (re-audit mode)
        if fa in FUNCS:
            targets = {fa: (FUNCS[fa].get('return_type') or '')}
    elif args.limit:
        targets = dict(list(sorted(targets.items()))[:args.limit])

    files = []
    for p in sorted((ROOT / 'src').rglob('*.cpp')):
        s = str(p).replace('\\', '/')
        if any(x in s for x in SKIP_PARTS):
            continue
        files.append(p)
    print('compiled files:', len(files))
    targets_short = {FUNCS[a]['name'].split('::')[-1] for a in targets
                     if FUNCS.get(a, {}).get('name')}
    print('scanning call sites...', flush=True)
    sites, defs = scan_sites(set(targets), targets_short, files, args.verbose)
    print('callees with sites:', len(sites), '| total sites:',
          sum(len(v) for v in sites.values()), '| defs:', len(defs),
          flush=True)

    # per-file span caches for usage scanning
    span_cache = {}
    lines_cache = {}

    def load_lines(rel):
        if rel not in lines_cache:
            try:
                lines_cache[rel] = (ROOT / rel).read_text(
                    encoding='latin-1').split('\n')
                span_cache[rel] = file_spans(lines_cache[rel])
            except OSError:
                lines_cache[rel] = []
                span_cache[rel] = []
        return lines_cache[rel], span_cache[rel]

    resolved = {}
    unresolved = {}
    for callee_addr, slist in sorted(sites.items()):
        v = FUNCS.get(callee_addr) or {}
        name = v.get('name') or ('0x%X' % callee_addr)
        rt = v.get('return_type') or ''
        assigned = [s for s in slist if s.recv]
        ev = {'sites': [], 'offsets': set(), 'slots': set(), 'chains': [],
              'names': set(), 'ubounds': set(), 'casts': [], 'passes': []}
        if not assigned:
            unresolved['0x%08X' % callee_addr] = {
                'name': name, 'return_type': rt, 'reason': 'no-assigned-site',
                'sites': [{'file': s.file, 'line': s.line + 1,
                           'anchor': hex(s.anchor) if s.anchor else None}
                          for s in slist[:8]]}
            continue
        for s in assigned:
            lines, spans = load_lines(s.file)
            sp = span_for(spans, s.line)
            if sp is None:
                ev['sites'].append({'file': s.file, 'line': s.line + 1,
                                    'note': 'no-span'})
                continue
            _, s0, s1 = sp
            # dominance window (X5b L158): uses are only valid until the next
            # reassignment of the same local — reused locals are the norm.
            rc_rx = re.compile(r'^\s*' + re.escape(s.recv) + r'\s*=(?!=)')
            mech_re = re.compile(
                r'\(\s*\*\s*\(\s*\(\s*(?:unsigned\s+int|int|_DWORD|uint32_t)'
                r'\s*\*+\s*\)\s*&\s*\(\s*' + re.escape(s.recv) +
                r'\s*\)\s*\)\s*\)\s*=')
            end = s1 + 1
            for k in range(s.line + 1, s1 + 1):
                if rc_rx.match(lines[k]) or mech_re.search(lines[k]):
                    end = k
                    break
            span_text = '\n'.join(lines[s.line:end])
            w, wptr = decl_width(lines[s0:s1 + 1], s.recv)
            usage = collect_usage(span_text, s.recv)
            rec = {'file': s.file, 'line': s.line + 1,
                   'recv': s.recv, 'width': w, 'ptr_decl': wptr,
                   'window': [s.line + 1, end],
                   'anchor': ('0x%08X' % s.anchor) if s.anchor else None}
            if s.cast:
                ev['casts'].append(s.cast)
                ev['ubounds'].add(s.cast)
                rec['cast'] = s.cast
            # offsets
            for N in usage['offsets'].get('idx', []):
                if w is None or not wptr:
                    rec.setdefault('skipped', []).append('idx-no-width')
                    continue
                off = N * w
                ev['offsets'].add(off)
                rec.setdefault('offsets', []).append(
                    {'kind': 'idx', 'n': N, 'off': '0x%X' % off})
            for K in usage['offsets'].get('plus', []):
                if wptr is None:
                    rec.setdefault('skipped', []).append('plus-no-decl')
                    continue
                off = K if not wptr else (K * w if w else None)
                if off is None:
                    rec.setdefault('skipped', []).append('plus-no-width')
                    continue
                ev['offsets'].add(off)
                rec.setdefault('offsets', []).append(
                    {'kind': 'plus', 'off': '0x%X' % off})
            # slots
            for S in usage['slots']:
                ev['slots'].add(S)
                rec.setdefault('slots', []).append('0x%X' % S)
            # chains (idx width applied)
            for kind, a, b in usage['chains']:
                if kind == 'idx+imm' and (w is None or not wptr):
                    rec.setdefault('skipped', []).append('chain-no-width')
                    continue
                base_off = a * w if (kind == 'idx+imm' and w) else a
                if kind == 'idx+imm':
                    ev['chains'].append(('idx+imm', base_off, b))
                    rec.setdefault('chains', []).append(
                        {'kind': kind, 'off': '0x%X' % base_off, 'k': b})
                else:
                    ev['chains'].append(('idx+name', base_off, b))
                    rec.setdefault('chains', []).append(
                        {'kind': kind, 'off': '0x%X' % base_off, 'm': b})
            # member names (placeholder names are non-discriminative)
            for nm in usage['names']:
                if PLACEHOLDER_NAME.match(nm):
                    rec.setdefault('skipped', []).append('ph-name:%s' % nm)
                    continue
                ev['names'].add(nm)
            # passing
            for callee2, cast2 in usage['passes']:
                ev['passes'].append((callee2, cast2))
                if cast2:
                    ev['ubounds'].add(cast2)
                a2 = NAME2ADDR.get(callee2)
                if a2 is None:
                    sh = callee2.split('::')[-1]
                    if sh not in SHORT_DUP:
                        a2 = SHORT2ADDR.get(sh)
                if a2 is not None:
                    v2 = FUNCS.get(a2) or {}
                    cc2 = v2.get('call_convention')
                    if cc2 == 'thiscall' and v2.get('cls'):
                        ev['ubounds'].add(v2['cls'])
            ev['sites'].append(rec)

        # ---- adjudicate ----
        offs = set(ev['offsets'])
        slots = set(ev['slots'])
        chains = list(ev['chains'])
        names = set(ev['names'])
        ubounds = set(ev['ubounds'])
        out = {'name': name, 'return_type': rt,
               'sites': ev['sites'],
               'offsets': sorted('0x%X' % o for o in offs),
               'slots': sorted('0x%X' % s for s in slots),
               'chains': [('idx+imm' if k == 'idx+imm' else 'idx+name', '0x%X' % a, b)
                          for (k, a, b) in chains],
               'names': sorted(names),
               'ubounds': sorted(ubounds)}
        # callee-body guard: buffer/arg passthrough and `return this` shapes.
        ret_an = analyze_callee_returns(callee_addr, defs, load_lines)
        if ret_an is not None:
            kind, cls2 = ret_an
            if kind in ('passthrough', 'this-synthetic', 'this-conflict'):
                out['reason'] = kind
                unresolved['0x%08X' % callee_addr] = out
                continue
            if kind in ('this', 'typed_passthrough'):
                # cross-check: a known upper bound must be compatible with the
                # body-derived class (sites' casts are independent evidence).
                if kind == 'typed_passthrough' and ubounds:
                    if not any(cls2 == u or derived_or_eq(cls2, u)
                               or derived_or_eq(u, cls2) for u in ubounds):
                        out['reason'] = 'arg-passthrough'
                        unresolved['0x%08X' % callee_addr] = out
                        continue
                out['resolved'] = cls2
                out['how'] = kind
                resolved['0x%08X' % callee_addr] = out
                continue
        tier1 = bool(slots or chains or ev['passes'])
        tier2 = bool(ev['casts'])
        tier3 = set()
        if offs:
            tier3.add('off')
        if names:
            tier3.add('name')
        have_checks = bool(offs or slots or chains or names)
        # acceptance policy: an identification (unique most-derived) needs a
        # slot/chain/pass piece or an IDA call-site cast; a shallow lattice
        # join (<=4 incomparable candidates, join itself consistent) needs a
        # tier-1 piece. Pure offset/name evidence never resolves.
        accept_unique = (tier1 or tier2)
        if not have_checks:
            out['reason'] = 'no-class-evidence'
            unresolved['0x%08X' % callee_addr] = out
            continue
        if not accept_unique:
            out['reason'] = 'weak-evidence'
            unresolved['0x%08X' % callee_addr] = out
            continue
        cands = []
        for c in sorted(CLASSES):
            ex = []
            if check_class(c, offs, slots, chains, names, ubounds, ex):
                cands.append(c)
        if not cands:
            out['reason'] = 'no-candidate'
            if args.verbose:
                dbg = {}
                for u in sorted(ubounds):
                    ex = []
                    check_class(u, offs, slots, chains, names, ubounds, ex)
                    dbg[u] = ex
                out['explain'] = dbg
            unresolved['0x%08X' % callee_addr] = out
            continue
        minimal = [c for c in cands
                   if not any(c != d and derived_or_eq(d, c) for d in cands)]
        chosen = None
        how = None
        if len(minimal) == 1:
            chosen, how = minimal[0], 'unique-most-derived'
        elif len(minimal) <= 4 and tier1:
            j = join_classes(minimal)
            if j is not None and j in cands:
                chosen, how = j, 'lattice-join'
            else:
                out['reason'] = 'ambiguous'
                out['candidates'] = minimal[:16]
                unresolved['0x%08X' % callee_addr] = out
                continue
        else:
            out['reason'] = 'ambiguous'
            out['candidates'] = minimal[:16]
            unresolved['0x%08X' % callee_addr] = out
            continue
        out['resolved'] = chosen
        out['how'] = how
        out['candidates'] = minimal[:16]
        resolved['0x%08X' % callee_addr] = out

    print()
    print('=== X14 census ===')
    print('targets:', len(targets), '| with sites:', len(sites))
    print('resolved:', len(resolved), '| unresolved:', len(unresolved))
    rc = Counter(v.get('reason') for v in unresolved.values())
    print('unresolved reasons:', dict(rc))
    top_fam = Counter()
    for k, v in resolved.items():
        top_fam[v['return_type']] += 1
    print('resolved by original return_type:', top_fam.most_common(12))
    top_class = Counter(v['resolved'] for v in resolved.values())
    print('resolved classes:', top_class.most_common(15))

    if args.verbose or args.func:
        for k in list(resolved)[:12] + list(unresolved)[:6]:
            rec = resolved.get(k) or unresolved.get(k)
            print('\n--', k, rec['name'], '::', rec['return_type'], '=>',
                  rec.get('resolved') or rec.get('reason'))
            print('   offs:', rec.get('offsets'), 'slots:', rec.get('slots'))
            print('   chains:', rec.get('chains'), 'names:', rec.get('names'))
            print('   ubounds:', rec.get('ubounds'))
            if rec.get('explain'):
                print('   explain:', json.dumps(rec['explain'])[:400])

    # evidence files
    ts = time.strftime('%Y%m%d_%H%M%S')
    ev_path = EVID / ('x14_resolve_%s%s.json' % (ts, '_dry' if not args.apply else ''))
    ev_path.write_text(json.dumps({
        'targets': len(targets), 'with_sites': len(sites),
        'resolved_count': len(resolved), 'unresolved_count': len(unresolved),
        'unresolved_reasons': dict(rc),
        'resolved': resolved,
        'unresolved': {k: v for k, v in list(unresolved.items())[:4000]},
        'wall_sec': round(time.time() - t0, 1),
    }, ensure_ascii=False, indent=1), encoding='utf-8')
    print('evidence:', ev_path)

    if not args.apply:
        print('DRY RUN (use --apply)')
        return

    # ---- apply: write csp_functions.json + signals.json (idempotent) ----
    import hashlib

    def sha(p):
        return hashlib.sha256(Path(p).read_bytes()).hexdigest()

    csp = J(CSP_PATH)
    csp_fn = csp['functions']
    csp_by_addr = {}
    for k in csp_fn:
        try:
            csp_by_addr[int(k, 16)] = k
        except ValueError:
            continue
    sig_by_addr = {}
    for k, v in SIG['symbols'].items():
        try:
            sig_by_addr[int(v.get('address', ''), 16)] = k
        except (ValueError, TypeError):
            continue
    n_csp = n_sig = 0
    changed_sig = []
    for k, rec in resolved.items():
        a = int(k, 16)
        ty = rec['resolved'] + ' *'
        evid_txt = ('usage-evidence lattice (X14 solve_return_types_lattice; '
                    'how=%s sites=%d)' % (
                        rec.get('how'),
                        len([s for s in rec['sites'] if s.get('recv')])))
        ck = csp_by_addr.get(a)
        if ck is not None:
            e = csp_fn[ck]
            if e.get('return_type') != ty or e.get('return_evidence') != evid_txt:
                e['return_type'] = ty
                e['return_evidence'] = evid_txt
                n_csp += 1
        sk = sig_by_addr.get(a)
        if sk is not None:
            e = SIG['symbols'][sk]
            if e.get('return_type') != ty:
                changed_sig.append((sk, e.get('return_type'), ty))
                e['return_type'] = ty
                n_sig += 1
    print('apply: csp_functions updated %d, signals updated %d' % (n_csp, n_sig))
    if n_csp:
        tmp = CSP_PATH.with_suffix('.json.x14tmp')
        tmp.write_text(json.dumps(csp, indent=1, ensure_ascii=False),
                       encoding='utf-8')
        os.replace(tmp, CSP_PATH)
    if n_sig:
        tmp = SIGNALS_PATH.with_suffix('.json.x14tmp')
        tmp.write_text(json.dumps(SIG, ensure_ascii=False, indent=2),
                       encoding='utf-8')
        os.replace(tmp, SIGNALS_PATH)
    (EVID / ('x14_apply_%s.json' % ts)).write_text(json.dumps({
        'csp_updated': n_csp, 'signals_updated': n_sig,
        'signals_changes': changed_sig[:800],
    }, ensure_ascii=False, indent=1), encoding='utf-8')
    print('applied.')


if __name__ == '__main__':
    main()
