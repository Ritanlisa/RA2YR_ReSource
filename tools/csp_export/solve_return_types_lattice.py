#!/usr/bin/env python3
"""X14+X15: resolve raw function return types into class pointers (usage
evidence). Binary evidence + lattice only (2026-09-03 ruling: NO voting /
majority / statistics channels).

X16 extension (same tool, not a parallel one):
  - binary ctor-installer channel for the `return this` guard: when the
    def-line class and the X11 elided-install marker both fail (this-synthetic)
    or the def-line class conflicts with signals cls (this-conflict), the class
    whose vtable the function installs (anchors/ctor_types.json, binary scan)
    decides — canonicalized through class_name_align and gated to REAL classes;
    a conflicting signals cls still fails loud.

X15 extensions (same tool, not a parallel one):
  - site-scanner hardening: comment-internal matches and declaration-shaped
    lines are no longer sites; `namespace X { ... }`-prefixed defs are defs;
    scalar-cast assignment heads (`v = (int)F(...)`) count as assignments.
  - site kinds are classified (assign / inline-arg / ctrl / return / stmt /
    expr); call-argument positions become sites:
      chain: callee .return -RETURN_TO-> caller eax_v{site} -CALL_ARG-> G::paramN
      (constraint-graph vocabulary; the tree renders the same binding
      syntactically as the nested call `G(F(...), ...)`); evidence = G's
      parameter declared type (upper bound) + G's parameter usage in G's
      mechanical body (offsets / slots / chains / names / passes).
  - the callee-body guard now runs for any call site (not only assigned ones);
    `return this->M` VALUE reads are split from `&this->M`: placeholder
    offset-0 names stay `this` (IDA render of `mov eax,ecx; ...; mov [eax],vt`
    ctors), a real class-typed member resolves as the member's pointee class.
  - no-class-evidence channels: receiver copy-alias (1 hop, reassignment-cut),
    `return recv;` -> enclosing function's declared return (only when that
    function is not itself a target of this run: keeps apply idempotent),
    member-assignment receiver (`this->m = F(...)` -> member declared type),
    all-argument cross-function passing (was first-arg only).
  - per-target sub-cause attribution for the fail-loud buckets; the
    unresolved ledger is no longer truncated.

Sources of evidence, per call site of the callee:

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
EVID = ROOT / '.omo' / 'evidence' / 'optimization' / 'x15'
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

# X17 (I165 ③, 2026-10-14): ubound 伪类门——标量 typedef 名不允许做类上界。
# 证据（X16 §4 / x16_probe8_ubound_gate.log）: 107 处 ubound 是标量 typedef
# （char 27 / int16_t 15 / wchar_t 13 / uint8_t 8 / __int16 7 / const char 7 /
# const wchar_t 6 / uint16_t 3 / float 2 …），经 cast/成员事件进入 ubounds 后
# check_class 要求 `derived_or_eq(cls, u)` → 无真实类能满足 → 候选集杀空 →
# 假阴性 no-candidate。集合 = SCALAR_W 键 + fail 占位符 `unknown`（X16 §2）
# + 实测出现的单字异体（int16_t 等）。**刻意不是 REAL_CLASSES 全门**（X16 §4:
# 会 demote 上界在 class_db∪layouts 之外的既有解析，如 `Timer`）——本门只移除
# "可证明非类"的标量名。
UBOUND_PSEUDO = (frozenset(SCALAR_W)
                 | {'unknown', 'void', 'signed char',
                    'int8_t', 'int16_t', 'int32_t', 'int64_t', 'size_t',
                    'LPVOID', 'long'})


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
# X15: "real" classes = present in class_db / class_layouts (engine classes).
# MTAB alone also carries scalar typedef pseudo-classes (uint8_t/int32_t/...)
# that must never be written as a resolved return class.
REAL_CLASSES = set(CDB) | set(LAYOUTS)

# X16: binary ctor-installer channel. `anchors/ctor_types.json` maps
# function addr -> class whose vtable the function installs (X11-era binary
# scan). Canonicalized via the same align namespace; REAL classes only.
CTOR_CANON = {}
try:
    _ct = J(ROOT / 'anchors' / 'ctor_types.json')
    try:
        _r2c = (J(ROOT / 'anchors' / 'class_name_align.json')
                .get('rtti_to_canon') or {})
    except Exception:
        _r2c = {}
    for _k, _v in _ct.items():
        try:
            _a = int(_k, 16)
        except (TypeError, ValueError):
            continue
        _c = _v if _v in CLASSES else CLASSES_L.get((_v or '').lower())
        if not _c:
            _r = _r2c.get(_v)
            if isinstance(_r, dict) and _r.get('canon'):
                _c = CLASSES_L.get(_r['canon'].lower(), _r['canon'])
        if _c and _c in REAL_CLASSES:
            CTOR_CANON[_a] = _c
except Exception:
    CTOR_CANON = {}

# global variable names (signals kind=global) — attribution only
GLOBALS = set()
for _k, _v in SIG['symbols'].items():
    if _v.get('kind') == 'global':
        _nm = _v.get('name') or ''
        if _nm:
            GLOBALS.add(_nm)

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


def _conflicts(a, b):
    """True iff b is a known class incompatible with a (not equal/related)."""
    return bool(b) and b in CLASSES and not (
        a == b or derived_or_eq(a, b) or derived_or_eq(b, a))


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
# `name =` possibly followed by a cast `(Type)` / `(Type *)` — X15: scalar
# casts (`(int)`, `(unsigned int)`) now yield the receiver too (previously the
# whole line fell into no-assigned-site). Group 2 = cast base, group 3 = stars.
ASSIGN_HEAD = re.compile(
    r'([A-Za-z_]\w*)\s*=\s*(?:\(\s*([A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*)\s*(\*+)\s*\))?'
    r'\s*$')
ASSIGN_HEAD_SCALAR = re.compile(
    r'([A-Za-z_]\w*)\s*=\s*\(\s*([A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*)\s*\)\s*$')
CTRL_LINE = re.compile(r'^\s*(?:if|while|for|switch|return|else|do|case)\b')
# signature/definition tail: `(...)` optionally followed by `{`
DEF_TAIL = re.compile(r'^\([^;{}]*\)\s*\{?\s*$')
# type-ish text before a name (return type / qualifiers)
TYPE_HEAD = re.compile(r'^[A-Za-z_][\w:<>\*&,\s]*$')
# X15: leading `namespace X {` fragment on a joined line
NS_PREFIX = re.compile(r'^\s*namespace\s+\w+\s*\{\s*')
# X15: a preceding cast fed into the call `G((Cls *)F(...))`
CAST_PRE = re.compile(r'\(\s*([A-Za-z_]\w*)\s*\*+\s*\)\s*$')
# X15: enclosing call with a control keyword is a test, not an argument
CTRL_CALLS = {'if', 'while', 'for', 'switch'}
# direct post-use of the call result
POST_NAME = re.compile(r'^\s*->\s*([A-Za-z_]\w*)')
POST_IDX = re.compile(r'^\s*\[\s*(\d+)\s*\]')


def comment_spans(ln):
    """[(a,b)] comment spans of the line (string-literal aware)."""
    spans = []
    i, n = 0, len(ln)
    instr = None
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
        if c == '"' or c == "'":
            instr = c
            i += 1
            continue
        if c == '/' and i + 1 < n and ln[i + 1] == '/':
            spans.append((i, n))
            break
        if c == '/' and i + 1 < n and ln[i + 1] == '*':
            j = ln.find('*/', i + 2)
            j = n if j < 0 else j + 2
            spans.append((i, j))
            i = j
            continue
        i += 1
    return spans


def paren_close(txt, i):
    """index of the ')' matching the '(' at i, or -1."""
    d = 0
    for j in range(i, len(txt)):
        c = txt[j]
        if c == '(':
            d += 1
        elif c == ')':
            d -= 1
            if d == 0:
                return j
    return -1


def _code_core(ln):
    """Line with comment spans blanked to spaces (offsets preserved)."""
    spans = comment_spans(ln)
    if not spans:
        return ln
    out = list(ln)
    for a, b in spans:
        for k in range(a, min(b, len(out))):
            out[k] = ' '
    return ''.join(out)


def _is_def_line(ln, m):
    """True when the call-shaped match is really a function signature."""
    core = _code_core(ln)
    ns = 0
    mm = NS_PREFIX.match(core)
    if mm:
        ns = mm.end()
    s, e = m.start() - ns, m.end() - ns
    if s < 0 or e > len(core):
        return False
    body = core[ns:]
    if CTRL_LINE.match(body):
        return False
    pre = body[:s].rstrip()
    tail = body[e - 1:]
    if not DEF_TAIL.match(tail):
        return False
    if not pre:
        return False
    if any(ch in pre for ch in '=;,()'):
        return False
    return bool(TYPE_HEAD.match(pre))


def _is_decl_line(ln, m):
    """True when the match is a declaration (`Ret Name(...);`) — not a call."""
    core = _code_core(ln)
    ns = 0
    mm = NS_PREFIX.match(core)
    if mm:
        ns = mm.end()
    s, e = m.start() - ns, m.end() - ns
    if s < 0 or e > len(core):
        return False
    body = core[ns:]
    pre = body[:s].rstrip()
    if not pre or not TYPE_HEAD.match(pre):
        return False
    if any(ch in pre for ch in '=;()'):
        return False
    pc = paren_close(body, e - 1)
    if pc < 0:
        return False
    after = body[pc + 1:].strip()
    return after in (';', '; }', '}')


def norm_qual(name):
    return re.sub(r'\s+', '', name)


class Site:
    __slots__ = ('file', 'line', 'col', 'anchor', 'recv', 'cast', 'callee_addr',
                 'callee_name', 'kind', 'enc', 'argi', 'precast', 'post',
                 'recv_kind')

    def __init__(self, file, line, col, anchor, recv, cast, callee_addr,
                 callee_name, kind='assign', enc=None, argi=None, precast=None,
                 post=None, recv_kind=None):
        self.file = file
        self.line = line
        self.col = col
        self.anchor = anchor
        self.recv = recv
        self.cast = cast
        self.callee_addr = callee_addr
        self.callee_name = callee_name
        self.kind = kind          # assign|inline|ctrl|return|stmt|expr
        self.enc = enc            # enclosing call name (inline only)
        self.argi = argi          # argument index (inline only)
        self.precast = precast    # cast right before the call `(Cls *)F(...)`
        self.post = post          # direct post-use text (`->M`, `[N]`, ...)
        self.recv_kind = recv_kind  # local|member|global (attribution only)


def _count_args(ln, o2, s):
    """top-level comma count between '(' at o2 and index s."""
    d, n = 0, 0
    for ch in ln[o2 + 1:s]:
        if ch in '([':
            d += 1
        elif ch in ')]':
            d -= 1
        elif ch == ',' and d == 0:
            n += 1
    return n


def scan_sites(target_addrs, targets_short, files, verbose=False):
    """file scan -> ({callee_addr: [Site]}, {callee_addr: (file, def_line)},
    {any_addr: (file, def_line)})."""
    sites = defaultdict(list)
    defs = {}
    defs_all = {}
    anchor_re = re.compile(r'/\*(0x[0-9A-Fa-f]{6,8})\*/')
    RET_TAIL = re.compile(r'\breturn\s*$')
    for fi, p in enumerate(files):
        rel = str(p.relative_to(ROOT)).replace('\\', '/')
        try:
            lines = p.read_text(encoding='latin-1').split('\n')
        except OSError:
            continue
        for li, ln in enumerate(lines):
            if '(' not in ln:
                continue
            cspans = comment_spans(ln) if '/' in ln else []
            core = None
            matches = list(CALL_RE.finditer(ln))
            for mi, m in enumerate(matches):
                if cspans and any(a <= m.start() < b for (a, b) in cspans):
                    continue
                q = norm_qual(m.group(1))
                addr = NAME2ADDR.get(q) if q in NAME2ADDR else None
                if addr is None:
                    sh = q.split('::')[-1]
                    if q not in NAME_DUP and sh in targets_short \
                            and sh not in SHORT_DUP:
                        addr = SHORT2ADDR.get(sh)
                if addr is not None and _is_def_line(ln, m):
                    defs_all.setdefault(addr, (rel, li))
                    if addr in target_addrs:
                        defs.setdefault(addr, (rel, li))
                    continue
                if addr is None or addr not in target_addrs:
                    continue
                if _is_decl_line(ln, m):
                    continue
                if core is None:
                    core = _code_core(ln)
                head = core[:m.start()]
                hm = ASSIGN_HEAD.search(head.rstrip())
                recv = cast = recv_kind = None
                if hm:
                    recv = hm.group(1)
                    if hm.group(3) is not None:
                        cast = hm.group(2)
                else:
                    hm2 = ASSIGN_HEAD_SCALAR.search(head.rstrip())
                    if hm2:
                        recv = hm2.group(1)
                if recv:
                    rr = head.rstrip()
                    ix = rr.rfind(recv)
                    prech = rr[:ix].rstrip() if ix >= 0 else ''
                    if recv in GLOBALS:
                        recv_kind = 'global'
                    elif prech.endswith('->') or prech.endswith('.'):
                        recv_kind = 'member'
                    else:
                        recv_kind = 'local'
                # enclosing call (innermost) / argument index
                enc = None
                for j, m2 in enumerate(matches):
                    if j == mi:
                        continue
                    o2 = m2.end() - 1
                    if o2 >= m.start():
                        continue
                    c2 = paren_close(ln, o2)
                    if c2 == -1 or c2 > m.start():
                        if enc is None or o2 > enc[0]:
                            enc = (o2, norm_qual(m2.group(1)))
                kind, enc_name, argi = None, None, None
                if enc is not None:
                    if enc[1] in CTRL_CALLS:
                        kind = 'ctrl'
                    else:
                        kind = 'inline'
                        enc_name = enc[1]
                        argi = _count_args(ln, enc[0], m.start())
                elif recv:
                    kind = 'assign'
                else:
                    pre = head.rstrip()
                    if RET_TAIL.search(pre):
                        kind = 'return'
                    elif not pre or pre.endswith((';', '{', '}')):
                        kind = 'stmt'
                    else:
                        kind = 'expr'
                # direct post-use (`F(...)->M` / `F(...)[N]`)
                post = None
                pc = paren_close(core, m.end() - 1)
                if pc >= 0:
                    post = core[pc + 1:].strip()
                pre_cast = None
                cp = CAST_PRE.search(head)
                if cp:
                    pre_cast = cp.group(1)
                am = anchor_re.search(ln)
                anchor = int(am.group(1), 16) if am else None
                sites[addr].append(Site(rel, li, m.start(), anchor, recv, cast,
                                        addr, q, kind, enc_name, argi, pre_cast,
                                        post, recv_kind))
        if verbose and fi % 200 == 0:
            print('  ...scanned %d/%d files' % (fi, len(files)), flush=True)
    return sites, defs, defs_all


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

# X15: per-call audit trail of the body-guard verdict inputs (evidence only)
RET_INFO = {}


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
        mm = re.match(r'^(&?)\s*this\s*->\s*(\w+)$', ee)
        if mm:
            cats.append(('this_mem', (mm.group(1), mm.group(2))))
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
    RET_INFO[addr] = {
        'kinds': sorted(kinds),
        'cats': [k if k != 'this_mem' else 'this_mem(%s%s)' % (v[0], v[1])
                 for k, v in cats],
    }
    if kinds and kinds <= {'this', 'this_mem'}:
        # `&this->M` = object (sub)pointer: M must be at offset 0.
        # `this->M` (no `&`):
        #   placeholder offset-0 names  -> IDA artifact for `return this`
        #     (X15 disasm-verified: 0x40E320, 0x46B640, 0x42DC50, 0x4101C0)
        #   real name at offset 0       -> same artifact (0x5D39D0 saveSettings
        #     disasm: `mov eax, edx` -> returns this), so also `this`
        #   real name at offset > 0     -> genuine member value read; the
        #     member must be a POINTER-typed real class -> its pointee class
        val_cls = None
        for kind, val in cats:
            if kind != 'this_mem':
                continue
            amp, mname = val
            bm = members_by_name(cls) if cls else {}
            ent = bm.get(mname)
            moff = ent[0] if ent else None
            if THIS_MEM_PH.match(mname or ''):
                continue
            if amp:
                if moff != 0:
                    return None
                continue
            if ent is not None and moff == 0:
                # X15: real-name offset-0 `return this->M` is AMBIGUOUS —
                # disasm-verified both ways: SessionClass::saveSettings
                # (0x5D39D0, `mov eax,edx` -> this) and ScenarioClass::
                # ProcessAmbientEffects (0x55BB40, `mov eax,esi` -> this) vs
                # ThemeClass::Play (0x720BB0, `mov eax,[esi]` -> member value).
                # The IDA render is textually identical -> fail loud.
                return None
            tcls = None
            if ent is not None:
                _off, tys, _sz = ent
                for _t in (tys or []):
                    if '*' not in (_t or ''):
                        continue
                    _c = class_of_type(_t, _sz)
                    if _c and _c in REAL_CLASSES:
                        tcls = _c
                        break
            if tcls is None:
                return None
            if val_cls is None:
                val_cls = tcls
            elif not (val_cls == tcls or derived_or_eq(tcls, val_cls)
                      or derived_or_eq(val_cls, tcls)):
                return None
        has_thisish = any(
            k == 'this' or (k == 'this_mem' and THIS_MEM_PH.match(v[1] or ''))
            for k, v in cats)
        if val_cls is not None:
            if has_thisish:
                return None            # mixed shapes -> inconsistent
            return ('member_value', val_cls)
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
        sc = (FUNCS.get(addr) or {}).get('cls') or ''
        if not cls2:
            # X16: binary ctor-installer adjudication for this-synthetic.
            # The function installs `bc`'s vtable (binary truth, anchors/
            # ctor_types.json) and the body returns `this` -> the object is
            # `bc`. A known signals cls that conflicts still fails loud.
            bc = CTOR_CANON.get(addr)
            if bc:
                if _conflicts(bc, sc):
                    return ('this-conflict', None)
                RET_INFO.setdefault(addr, {})['ctor_channel'] = bc
                return ('this', bc)
            return ('this-synthetic', None)
        if _conflicts(cls2, sc):
            # X16: conflict adjudication — the binary installer class decides
            # only when it is compatible with at least one of the two text
            # claims (def-line class / signals cls); else fail loud.
            bc = CTOR_CANON.get(addr)
            if bc and (not _conflicts(bc, sc) or not _conflicts(bc, cls2)):
                RET_INFO.setdefault(addr, {})['ctor_channel'] = bc
                return ('this', bc)
            return ('this-conflict', None)
        return ('this', cls2)
    if kinds == {'param'} and len(typed_classes) == 1:
        c = typed_classes.pop()
        # X15: real-classes only (MTAB carries scalar typedef pseudo-classes)
        if c not in REAL_CLASSES:
            return None
        # X15: cross-check the tree def's param type against the signals
        # signature (X4/X13 authority). A pure-scalar signals type cannot be
        # the source of a class-pointer return -> fail loud (0x4071A0
        # SetRateMixerSample: tree said `ObjectClass *aP3`, signals/IDA/export
        # snapshot all say `int a4`).
        pname_r = None
        for kk2, vv2 in cats:
            if kk2 == 'param':
                pname_r = vv2
                break
        idx = None
        for i2, (pn2, _pt2) in enumerate(params):
            if pn2 == pname_r:
                idx = i2
                break
        sigs = (FUNCS.get(addr) or {}).get('params') or []
        if idx is not None and len(sigs) == len(params) and idx < len(sigs):
            st = (sigs[idx].get('type') or '').strip()
            if st and '*' not in st:
                return ('param-conflict', None)
            sc = class_of_type(st)
            if sc and sc in REAL_CLASSES and not (
                    sc == c or derived_or_eq(sc, c) or derived_or_eq(c, sc)):
                return ('param-conflict', None)
        return ('typed_passthrough', c)
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

    # cross-function passing: split calls (X15: all arguments, not just #0)
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
        if not argt.strip():
            continue
        for piece_idx, piece in enumerate(_split_top(argt)):
            mm = re.match(r'^(?:\(\s*([A-Za-z_]\w*)\s*\*+\s*\)\s*)?' +
                          re.escape(var) + r'\s*$', piece.strip())
            if mm:
                # X17 (I165 ①): 记录实参位置——thiscall-pass 的类上界只在
                # 位置 0（flat 限定名调用的隐式 this）有效，见 _merge_usage。
                out['passes'].append((norm_qual(m.group(1)), mm.group(1),
                                      piece_idx))
    return out


def _merge_usage(ev, usage, w, wptr, rec, tag):
    """Merge a collect_usage() result into ev; returns the number of evidence
    items collected (offsets/slots/chains/names/passes/casts)."""
    n = 0
    for N in usage['offsets'].get('idx', []):
        if w is None or not wptr:
            rec.setdefault('skipped', []).append(
                       {'t': tag, 'r': 'idx-no-width'})
            continue
        off = N * w
        ev['offsets'].add(off)
        rec.setdefault('offsets', []).append(
            {'kind': 'idx', 'n': N, 'off': '0x%X' % off})
        n += 1
    for K in usage['offsets'].get('plus', []):
        if wptr is None:
            rec.setdefault('skipped', []).append(
                       {'t': tag, 'r': 'plus-no-decl'})
            continue
        off = K if not wptr else (K * w if w else None)
        if off is None:
            rec.setdefault('skipped', []).append(
                       {'t': tag, 'r': 'plus-no-width'})
            continue
        ev['offsets'].add(off)
        rec.setdefault('offsets', []).append(
            {'kind': 'plus', 'off': '0x%X' % off})
        n += 1
    for S in usage['slots']:
        ev['slots'].add(S)
        rec.setdefault('slots', []).append('0x%X' % S)
        n += 1
    for kind, a, b in usage['chains']:
        if kind == 'idx+imm' and (w is None or not wptr):
            rec.setdefault('skipped', []).append(
                       {'t': tag, 'r': 'chain-no-width'})
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
        n += 1
    for nm in usage['names']:
        if PLACEHOLDER_NAME.match(nm):
            rec.setdefault('skipped', []).append(
                       {'t': tag, 'r': 'ph-name', 'v': nm})
            continue
        ev['names'].add(nm)
        n += 1
    for callee2, cast2, pass_idx in usage['passes']:
        ev['passes'].append((callee2, cast2))
        if cast2 and class_of_type(cast2):
            ev['ubounds'].add(cast2)
        a2 = NAME2ADDR.get(callee2)
        if a2 is None:
            sh = callee2.split('::')[-1]
            if sh not in SHORT_DUP:
                a2 = SHORT2ADDR.get(sh)
        if a2 is not None:
            v2 = FUNCS.get(a2) or {}
            # X17 (I165 ①): thiscall-pass ubound 原实现是 argument-index-
            # blind 的——接收者变量出现在被调 thiscall 方法的**任一**文本
            # 实参位置都加类上界。但只有 flat 限定名（`Class::Method(recv,
            # …)`，`::` 在名内）的实参 0 是隐式 this；其它位置是值参数、
            # arrow-form（`obj->Method(x)`，接收者在实参文本之外）无类蕴含。
            # 实测样本: Power::FlagProcess((Power *)a2, v6) 的第二实参 v6
            # 曾得 ubound 'Power'（x16_partA_probe6.log）。
            if (pass_idx == 0 and '::' in callee2
                    and v2.get('call_convention') == 'thiscall'
                    and v2.get('cls')):
                ev['ubounds'].add(v2['cls'])
        n += 1
    for c in usage['casts']:
        ev['casts'].append(c)
        if class_of_type(c):
            ev['ubounds'].add(c)
        n += 1
    return n


def _nce_label(ev):
    """Compact sub-cause label for a no-class-evidence target."""
    c = Counter()
    for r in ev['sites']:
        if r.get('note') == 'no-span':
            c['no-span'] += 1
            continue
        for sk in (r.get('skipped') or []):
            c['skip-' + sk.get('r', '?')] += 1
        got = bool(r.get('offsets') or r.get('slots') or r.get('chains'))
        if not got:
            rk = r.get('recv_kind')
            if rk == 'member':
                c['recv-member'] += 1
            elif rk == 'global':
                c['recv-global'] += 1
            elif r.get('ptr_decl') is False:
                c['recv-scalar'] += 1
            elif r.get('ptr_decl') is None:
                c['recv-undeclared'] += 1
            else:
                c['recv-ptr-noused'] += 1
    for r in ev.get('inline', []):
        if r.get('skip'):
            c['inline-' + r['skip']] += 1
    if not c:
        c['no-consumers'] += 1
    return '+'.join('%s%d' % (k, n) for k, n in c.most_common(3))


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
    sites, defs, defs_all = scan_sites(set(targets), targets_short, files,
                                      args.verbose)
    print('callees with sites:', len(sites), '| total sites:',
          sum(len(v) for v in sites.values()), '| defs:', len(defs_all),
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
    nas_sub = Counter()
    nce_sub = Counter()
    inline_stat = Counter()
    for callee_addr, slist in sorted(sites.items()):
        v = FUNCS.get(callee_addr) or {}
        name = v.get('name') or ('0x%X' % callee_addr)
        rt = v.get('return_type') or ''
        assigned = [s for s in slist if s.recv]
        inline_sites = [s for s in slist if s.kind == 'inline' and s.enc]
        site_kinds = Counter(s.kind for s in slist)
        ev = {'sites': [], 'inline': [], 'offsets': set(), 'slots': set(),
              'chains': [], 'names': set(), 'ubounds': set(), 'casts': [],
              'passes': []}
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
                   'recv_kind': s.recv_kind,
                   'window': [s.line + 1, end],
                   'anchor': ('0x%08X' % s.anchor) if s.anchor else None}
            if s.cast and class_of_type(s.cast):
                ev['casts'].append(s.cast)
                ev['ubounds'].add(s.cast)
                rec['cast'] = s.cast
            _merge_usage(ev, usage, w, wptr, rec, 'win')
            # X15: receiver copy-alias (1 hop, reassignment-cut; X5b L158)
            alias_rx = re.compile(
                r'^\s*([A-Za-z_]\w*)\s*=\s*'
                r'(?:\(\s*[A-Za-z_]\w*\s*\*+\s*\)\s*)?' +
                re.escape(s.recv) + r'\s*;')
            na = 0
            for k in range(s.line + 1, end):
                am2 = alias_rx.match(lines[k])
                if not am2:
                    continue
                av = am2.group(1)
                if av == s.recv or av in GLOBALS or na >= 3:
                    continue
                na += 1
                arx = re.compile(r'^\s*' + re.escape(av) + r'\s*=(?!=)')
                kend = end
                for k2 in range(k + 1, end):
                    if arx.match(lines[k2]):
                        kend = k2
                        break
                ausage = collect_usage('\n'.join(lines[k + 1:kend]), av)
                aw, awp = decl_width(lines[s0:s1 + 1], av)
                if _merge_usage(ev, ausage, aw, awp, rec, 'alias:' + av):
                    rec.setdefault('alias', []).append(av)
            # X15: `return recv;` -> enclosing function's declared return type
            # (skipped when that function is itself a target of this run —
            # keeps apply idempotent: its signals may change during the run)
            # X17 (I165 ②): 只接受**指针**返回类型——值类型（如标量 typedef
            # `Char`，x16_resolver_dry1_census.json 实证）经 class_of_type 剥
            # `*` 后混入类表，产生伪类上界。
            if re.search(r'\breturn\s+' + re.escape(s.recv) + r'\s*;',
                         span_text):
                if sp[0] and sp[0] not in targets:
                    hrt = (FUNCS.get(sp[0]) or {}).get('return_type') or ''
                    if '*' in hrt:
                        hc = class_of_type(hrt)
                        if hc:
                            ev['ubounds'].add(hc)
                            rec['return_passthrough'] = hc
            ev['sites'].append(rec)

        # ---- X15: call-argument sites (inline args) ----
        # chain: callee .return -RETURN_TO-> caller reg -CALL_ARG-> G::paramN
        # tree form: `G(F(...), ...)`. Evidence = G's parameter declared type
        # (upper bound) + G's parameter usage inside G's mechanical body.
        for s in inline_sites:
            gaddr = NAME2ADDR.get(s.enc)
            if gaddr is None:
                sh = s.enc.split('::')[-1]
                if sh not in SHORT_DUP:
                    gaddr = SHORT2ADDR.get(sh)
            rec = {'file': s.file, 'line': s.line + 1,
                   'inline_into': s.enc, 'arg': s.argi,
                   'anchor': ('0x%08X' % s.anchor) if s.anchor else None}
            if gaddr is None:
                rec['skip'] = 'inline-callee-unknown'
                inline_stat['callee-unknown'] += 1
                ev['inline'].append(rec)
                continue
            gdef = defs_all.get(gaddr)
            if not gdef:
                rec['skip'] = 'inline-callee-no-def'
                inline_stat['callee-no-def'] += 1
                ev['inline'].append(rec)
                continue
            gv = FUNCS.get(gaddr) or {}
            gcls = gv.get('cls') or ''
            is_member = bool(gcls) and gcls != 'unknown'
            rel2, li2 = gdef
            lines2, spans2 = load_lines(rel2)
            sp2 = span_for(spans2, li2)
            s1b = sp2[2] if sp2 else li2
            params = _parse_def_params(lines2, li2, s1b)
            if is_member and gcls in CLASSES:
                # the value is used as G's receiver -> upper bound
                ev['ubounds'].add(gcls)
                rec['receiver_class'] = gcls
            pidx = (s.argi - 1) if is_member else s.argi
            if pidx is None or pidx < 0:
                rec['note'] = 'receiver-arg'
                inline_stat['receiver-arg'] += 1
                ev['inline'].append(rec)
                continue
            if pidx >= len(params):
                rec['skip'] = 'inline-param-index'
                inline_stat['param-index'] += 1
                ev['inline'].append(rec)
                continue
            pname, ptype = params[pidx]
            rec['param'] = pname
            rec['param_type'] = ptype
            pc_cls = class_of_type(ptype)
            if pc_cls:
                ev['ubounds'].add(pc_cls)
                rec['param_class'] = pc_cls
            body = lines2[li2:s1b + 1]
            rass = re.compile(r'^\s*' + re.escape(pname) + r'\s*=(?!=)')
            end2 = len(body)
            for k2 in range(1, len(body)):
                if rass.match(body[k2]):
                    end2 = k2
                    break
            usage2 = collect_usage('\n'.join(body[:end2]), pname)
            w2, wptr2 = decl_width(body, pname)
            rec['window'] = [li2 + 1, li2 + end2]
            got = _merge_usage(ev, usage2, w2, wptr2, rec, 'inline')
            if got:
                inline_stat['evidence'] += 1
            else:
                rec['skip'] = 'inline-param-no-evidence'
                inline_stat['param-no-evidence'] += 1
            ev['inline'].append(rec)

        # ---- X15: direct site-expression evidence (all sites) ----
        for s in slist:
            if s.precast and not s.cast and class_of_type(s.precast):
                ev['casts'].append(s.precast)
                ev['ubounds'].add(s.precast)
            if s.post:
                pm = POST_NAME.match(s.post)
                if pm and not PLACEHOLDER_NAME.match(pm.group(1)):
                    ev['names'].add(pm.group(1))
                # bare `F(...)[N]` has no element width -> fail loud (skip)

        # ---- adjudicate ----
        offs = set(ev['offsets'])
        slots = set(ev['slots'])
        chains = list(ev['chains'])
        names = set(ev['names'])
        # X17 (I165 ③): 单点消费的 ubound 伪类门（标量 typedef 名不得做类
        # 上界——见 UBOUND_PSEUDO 注释；只移除可证明非类的名字）。
        ubounds = {u for u in ev['ubounds'] if u not in UBOUND_PSEUDO}
        out = {'name': name, 'return_type': rt,
               'sites': ev['sites'],
               'inline': ev['inline'],
               'offsets': sorted('0x%X' % o for o in offs),
               'slots': sorted('0x%X' % s for s in slots),
               'chains': [('idx+imm' if k == 'idx+imm' else 'idx+name', '0x%X' % a, b)
                          for (k, a, b) in chains],
               'names': sorted(names),
               'ubounds': sorted(ubounds)}
        # callee-body guard (X15: runs for every site population).
        ret_an = analyze_callee_returns(callee_addr, defs_all, load_lines)
        out['ret_info'] = RET_INFO.get(callee_addr)
        if ret_an is not None:
            kind, cls2 = ret_an
            if kind in ('passthrough', 'this-synthetic', 'this-conflict'):
                out['reason'] = kind
                unresolved['0x%08X' % callee_addr] = out
                continue
            if kind in ('this', 'typed_passthrough', 'member_value'):
                # cross-check: a known upper bound must be compatible with the
                # body-derived class (sites' casts are independent evidence).
                if kind != 'this' and ubounds:
                    if not any(cls2 == u or derived_or_eq(cls2, u)
                               or derived_or_eq(u, cls2) for u in ubounds):
                        out['reason'] = ('arg-passthrough'
                                         if kind == 'typed_passthrough'
                                         else 'member-conflict')
                        unresolved['0x%08X' % callee_addr] = out
                        continue
                out['resolved'] = cls2
                out['how'] = kind
                resolved['0x%08X' % callee_addr] = out
                continue
        if not assigned and not inline_sites:
            kk = '+'.join('%s%d' % (k, n)
                          for k, n in sorted(site_kinds.items()))
            nas_sub[kk] += 1
            out['reason'] = 'no-assigned-site'
            out['subcause'] = kk
            out['site_kinds'] = dict(site_kinds)
            out['sites'] = [{'file': s.file, 'line': s.line + 1,
                             'kind': s.kind,
                             'anchor': ('0x%08X' % s.anchor) if s.anchor else None}
                            for s in slist[:48]]
            unresolved['0x%08X' % callee_addr] = out
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
            if assigned:
                lbl = _nce_label(ev)
                nce_sub[lbl] += 1
                out['reason'] = 'no-class-evidence'
                out['subcause'] = lbl
            else:
                kk = '+'.join('%s%d' % (k, n)
                              for k, n in sorted(site_kinds.items()))
                nas_sub[kk] += 1
                out['reason'] = 'no-assigned-site'
                out['subcause'] = kk
                out['site_kinds'] = dict(site_kinds)
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
    print('=== X15 census ===')
    print('targets:', len(targets), '| with sites:', len(sites))
    print('resolved:', len(resolved), '| unresolved:', len(unresolved))
    rc = Counter(v.get('reason') for v in unresolved.values())
    print('unresolved reasons:', dict(rc))
    print('resolved how:', dict(Counter(v.get('how') for v in resolved.values())))
    print('inline-link stats:', dict(inline_stat))
    print('no-assigned-site subcauses:', dict(nas_sub.most_common(20)))
    print('no-class-evidence subcauses:', dict(nce_sub.most_common(20)))
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

    # evidence files (X15: full fail-loud ledger, no truncation)
    ts = time.strftime('%Y%m%d_%H%M%S')
    ev_path = EVID / ('x15_resolve_%s%s.json' % (ts, '_dry' if not args.apply else ''))
    ev_path.write_text(json.dumps({
        'targets': len(targets), 'with_sites': len(sites),
        'resolved_count': len(resolved), 'unresolved_count': len(unresolved),
        'unresolved_reasons': dict(rc),
        'nas_subcauses': dict(nas_sub),
        'nce_subcauses': dict(nce_sub),
        'inline_link_stats': dict(inline_stat),
        'resolved_how': dict(Counter(v.get('how') for v in resolved.values())),
        'resolved': resolved,
        'unresolved': unresolved,
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
        evid_txt = ('usage-evidence lattice (X15 solve_return_types_lattice; '
                    'how=%s sites=%d inline=%d)' % (
                        rec.get('how'),
                        len([s for s in rec['sites'] if s.get('recv')]),
                        len(rec.get('inline') or [])))
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
        tmp = SIGNALS_PATH.with_suffix('.json.x15tmp')
        tmp.write_text(json.dumps(SIG, ensure_ascii=False, indent=2),
                       encoding='utf-8')
        os.replace(tmp, SIGNALS_PATH)
    (EVID / ('x15_apply_%s.json' % ts)).write_text(json.dumps({
        'csp_updated': n_csp, 'signals_updated': n_sig,
        'signals_changes': changed_sig[:2000],
    }, ensure_ascii=False, indent=1), encoding='utf-8')
    print('applied.')


if __name__ == '__main__':
    main()
