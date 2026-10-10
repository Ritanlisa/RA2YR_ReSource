#!/usr/bin/env python3
"""Error-driven conversion-noise repair for the e4 universe.

Consumes an MSBuild error log and repairs the C2440/C2664/C2679 "conversion
noise" family mechanically. Scope is strictly src/e4/ (cpp bodies + classes
headers + e4_protos.h); nothing else is touched.

Sub-families (rule ids as reported in the stats):

  R0  vftable-wrapper normalization (ALL e4 lines, error-independent):
      the mechanical translation emitted `&(void*)(void*)&X_vftable` — a
      void** rvalue that is also &-of-rvalue (C2102). Rewrite to compiling
      forms:
        `(int)&(void*)(void*)&X_vftable` -> `(int)&X_vftable`
        `&(void*)(void*)&X_vftable`      -> `(void*)&X_vftable`
        `(void*)(void*)&X_vftable`       -> `(void*)&X_vftable`

  R1  vftable-assignment store typing (error lines containing `_vftable`):
      C2440 `void ** => T` / C2679 rhs `void **`: make the store target a
      void* lvalue: `*this =` / `*X =` / `*(_DWORD *)X =` become
      `*(void **)X =`; `vN[i] =` retypes local vN to `void **`; `vN =`
      retypes vN to `void *`; `this->M =` retypes member M to `void*`.
      C2679 rhs int-like (the `(int)&X_vftable` form): `*X =` becomes
      `*(_DWORD *)X =`.

  R2  member retype (C2440 `=` with lhs `this->M`, member in Cls_e4.hpp):
      int->ptr with plain rhs (number / plain local) -> member := unsigned int
      ptr->int with pointer-producing rhs (new/->/&/call) -> member := void*
      C2679 `this->M = <int>` also lands here (member := unsigned int).
      Only same-size swaps are applied (layout-neutral); arrays refused.

  R3  local retype (C2440 `=` with a plain-local lhs): same direction logic;
      the local's declaration line inside the enclosing function is retyped.
      Globals and parameters are never touched (decl search is bounded by
      the enclosing function definition).

  R4  C2664 argument retype: when the offending Nth argument is a plain
      local or `this->member`, retype it to the callee's parameter type.

  R5  C2679 non-vftable `*X = <int-expr>` -> `*(_DWORD *)X = <int-expr>`.

  R6  C2440 initializing declaration `TYPE v = <incompatible>;` -> retype.

  D   C2664 callee decl alignment: gamemd callees named in the log that have
      an e4 def line get their e4-universe declarations (class header method
      decl / e4_protos.h extern) rewritten to the def signature
      (align_tree_decls --force semantics, scoped to error-named functions).

Every rewrite is guarded so a second run over the SAME log is a no-op, and
per-target conflicts (a member/local demanded to be both int and pointer by
different error sites) are skipped and reported.

Usage: python tools/csp_export/fix_conversion_noise.py <log> [--apply]
"""
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
E4 = ROOT / 'src' / 'e4'
E4C = E4 / 'classes'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

# ---------------------------------------------------------------- log parse
Q = '[\u201c"]'
QC = '[\u201d"]'
P2440 = re.compile(r'error C2440: ' + Q + r'([^\u201d"]+)' + QC +
                   r'.{0,40}?' + Q + r'([^\u201d"]+)' + QC +
                   r'.{0,40}?' + Q + r'([^\u201d"]+)' + QC)
P2664 = re.compile(r'error C2664: ' + Q + r'([^\u201d"]+)' + QC +
                   r'.{0,40}?(\d+).{0,30}?' + Q + r'([^\u201d"]+)' + QC +
                   r'.{0,40}?' + Q + r'([^\u201d"]+)' + QC)
P2679 = re.compile(r'error C2679: [^\u201d"]*?' + Q + r'([^\u201d"]+)' + QC +
                   r'.{0,80}?' + Q + r'([^\u201d"]+)' + QC)
ERRHEAD = re.compile(r'^(.+?)\((\d+),(\d+)\): error (C\d{4}):')
INIT_OP = '\u521d\u59cb\u5316'          # "initializing" (localized MSVC)

INT_LIKE = {'int', 'unsigned int', '_DWORD', '_WORD', '_BYTE', 'short',
            'unsigned short', 'char', 'signed char', 'unsigned char', 'long',
            'unsigned long', 'bool', 'DWORD', 'WORD', 'BYTE', 'BOOL',
            'Boolean'}
SIZE4 = {'int', 'unsigned int', '_DWORD', 'long', 'unsigned long', 'DWORD',
         'float', 'HWND', 'LPVOID', 'HANDLE', 'LONG', 'LPARAM', 'WPARAM',
         'UINT', 'BOOL'}
SIZE1 = {'char', 'signed char', 'unsigned char', '_BYTE', 'bool', 'BOOLEAN'}
SIZE2 = {'short', 'unsigned short', '_WORD', 'WORD'}


def norm_ty(t):
    t = ' '.join(t.replace('gamemd::', '').split())
    while '* *' in t:
        t = t.replace('* *', '**')
    return t


def is_ptr_ty(t):
    return '*' in t


def int_like(t):
    return not is_ptr_ty(t)


def ty_size(t):
    t = norm_ty(t)
    if is_ptr_ty(t):
        return 4
    parts = t.replace('const ', '').replace('unsigned ', '').split()
    if not parts:
        return 0
    base = parts[-1]
    if base in SIZE1:
        return 1
    if base in SIZE2:
        return 2
    if base in SIZE4:
        return 4
    return 0


records = []            # (code, file, line, col, detail-tuple)
callees_named = set()
if LOG:
    txt = Path(LOG).read_bytes().decode('utf-8', errors='replace')
    for ln in txt.split('\n'):
        hm = ERRHEAD.match(ln)
        if not hm:
            continue
        f = hm.group(1).replace('/', '\\')
        if '\\src\\e4\\' not in f:
            continue
        f = str(Path(f).relative_to(ROOT)).replace('\\', '/')
        code = hm.group(4)
        if code == 'C2440':
            pm = P2440.search(ln)
            if pm:
                records.append((code, f, int(hm.group(2)), int(hm.group(3)),
                                (pm.group(1), norm_ty(pm.group(2)),
                                 norm_ty(pm.group(3)))))
        elif code == 'C2664':
            pm = P2664.search(ln)
            if pm:
                records.append((code, f, int(hm.group(2)), int(hm.group(3)),
                                (pm.group(1).strip(), int(pm.group(2)),
                                 norm_ty(pm.group(3)), norm_ty(pm.group(4)))))
                callees_named.add(pm.group(1).strip())
        elif code == 'C2679':
            pm = P2679.search(ln)
            if pm:
                records.append((code, f, int(hm.group(2)), int(hm.group(3)),
                                (pm.group(1), norm_ty(pm.group(2)))))

# ------------------------------------------------------------ source access
texts = {}      # rel path -> list of lines (latin-1; \r retained on lines)


def load(rel):
    if rel not in texts:
        try:
            texts[rel] = (ROOT / rel).read_text(
                encoding='latin-1', errors='replace').split('\n')
        except OSError:
            texts[rel] = None
    return texts[rel]


e4_tus = sorted(str(p.relative_to(ROOT)).replace('\\', '/')
                for p in E4.glob('*.cpp'))
e4_hpps = sorted(str(p.relative_to(ROOT)).replace('\\', '/')
                 for p in list(E4.glob('*.hpp')) + list(E4C.glob('*.hpp')))

# ------------------------------------------------- enclosing-class scanning
CTRL_KW = ('if', 'for', 'while', 'switch', 'return', 'else', 'do', 'case',
           'default', 'sizeof', 'delete', 'new', 'goto')
# e4 definition lines end exactly with `)` (Allman brace on the next line);
# end-anchoring plus the control-keyword filter rejects `if ( v4 )` junk
# (which would otherwise parse as `i f(v4)`).
DEFLINE = re.compile(
    r'^([A-Za-z_][\w\s\*<>,:&]*?)\s*(?:([A-Za-z_]\w*)::)?'
    r'([A-Za-z_~]\w*)\s*\(([^)]*)\)\s*$')
cls_at = {}    # file -> sorted [(def line no, cls)]
for f in e4_tus:
    lines = load(f)
    if not lines:
        continue
    spans = []
    for i, l in enumerate(lines, 1):
        m = DEFLINE.match(l.rstrip('\r \t'))
        if not m:
            continue
        if re.match(r'^[ \t]*(?:%s)\b' % '|'.join(CTRL_KW), l):
            continue
        ret = ' '.join(m.group(1).split())
        if ret in CTRL_KW or ret in ('}', '{'):
            continue
        spans.append((i, m.group(2) or ''))
    spans.sort()
    cls_at[f] = spans


def enclosing(f, line):
    spans = cls_at.get(f) or []
    lo, hi, ans = 0, len(spans) - 1, ''
    while lo <= hi:
        mid = (lo + hi) // 2
        if spans[mid][0] <= line:
            ans = spans[mid][1]
            lo = mid + 1
        else:
            hi = mid - 1
    return ans


LOCAL_DECL = re.compile(r'^(\s*)(const\s+)?([A-Za-z_][\w:<> ,\*]*?[\s\*]+)'
                        r'(%s)(\s*(?:\[[^\]]*\])?\s*(?:=[^;].*)?;)(.*)$')
BAD_DECL_TY = ('return', 'else', 'case', 'new', 'delete', 'sizeof', 'goto',
               'while', 'if', 'switch')


def find_local_decl(f, err_line, name):
    """Search upward inside the enclosing function for `TYPE name[ = ...];`.

    Returns (decl_line_no, match) or None.  The search never crosses the
    enclosing function definition line, so parameters and globals cannot
    match.
    """
    lines = load(f)
    if not lines:
        return None
    start = 1
    for i, _c in (cls_at.get(f) or []):
        if i <= err_line:
            start = i + 1
        else:
            break
    pat = re.compile(LOCAL_DECL.pattern % re.escape(name))
    for i in range(err_line - 1, start - 1, -1):
        m = pat.match(lines[i - 1])
        if m and ' '.join(norm_ty(m.group(3)).split()) not in BAD_DECL_TY:
            return (i, m)
    return None


# ------------------------------------------------------------------ targets
member_demands = defaultdict(set)      # (cls, member) -> {newtype}
member_sites = defaultdict(int)        # (cls, member) -> site count
local_demands = defaultdict(set)       # (file, decl line, name) -> {newtype}
r6_demands = defaultdict(set)          # (file, line) -> {newtype}
skip_conflicts = Counter()
missed_locals = Counter()
missed_examples = []
stats = Counter()


def demand_member(cls, name, ty, rule):
    if not cls or not name:
        return False
    key = (cls, name)
    member_demands[key].add(ty)
    member_sites[key] += 1
    stats['demand-' + rule] += 1
    return True


def demand_local(f, err_line, name, ty):
    if not name:
        return False
    got = find_local_decl(f, err_line, name)
    if not got:
        stats['local-decl-not-found'] += 1
        missed_locals[name] += 1
        if len(missed_examples) < 12:
            missed_examples.append((name, f, err_line))
        return False
    i, _m = got
    local_demands[(f, i, name)].add(ty)
    return True


# ------------------------------------------------------- LHS line analysis
ASSIGN = re.compile(r'^(\s*)(.+?)\s*=(?!=)(.*)$')


def lhs_kind(lhs):
    """Classify an assignment lhs expression."""
    lhs = lhs.strip()
    m = re.match(r'^this->([A-Za-z_]\w*)(\s*\[)?$', lhs)
    if m:
        return ('member', m.group(1))
    m = re.match(r'^\*\s*\(?\s*&?\s*this->([A-Za-z_]\w*)\s*\)?\)?$', lhs)
    if m:
        return ('member', m.group(1))
    m = re.match(r'^\*\s*\(\s*_DWORD\s*\*\s*\)\s*this$', lhs)
    if m:
        return ('deref', 'this')
    m = re.match(r'^\*\s*\(\s*[\w:]+[\w\s:<>\*&]*\)\s*(this|[A-Za-z_]\w*)$',
                 lhs)
    if m:
        return ('deref', m.group(1))
    m = re.match(r'^\*([A-Za-z_]\w*)$', lhs)
    if m:
        return ('deref', m.group(1))
    m = re.match(r'^([A-Za-z_]\w*)\s*\[', lhs)
    if m:
        return ('idx', m.group(1))
    m = re.match(r'^([A-Za-z_]\w*)$', lhs)
    if m:
        return ('local', m.group(1))
    return ('skip', None)


MEMBER_PAT = (r'^([ \t]*)(.+?)[ \t]+(%s)'
              r'(\s*(?:\[[^\]]*\])?[ \t]*;)(.*)$')


def rewrite_member(hpp, name, newty):
    """Apply member type rewrite in an e4 class header.

    Returns 'done' (changed), 'ok' (already the wanted type) or None.
    Layout-changing swaps and array members are refused.
    """
    lines = load(hpp)
    if not lines:
        return None
    pat = re.compile(MEMBER_PAT % re.escape(name))
    hits = [(i, pat.match(l)) for i, l in enumerate(lines, 1)
            if pat.match(l) and '//' in l]
    if len(hits) != 1:
        return None
    i, m = hits[0]
    old_ty = norm_ty(m.group(2))
    if old_ty == newty:
        return 'ok'
    so, sn = ty_size(old_ty), ty_size(newty)
    if not so or not sn or so != sn:
        return None                          # layout-changing swap: refuse
    if '[' in m.group(5):
        return None
    lines[i - 1] = '%s%s %s%s' % (m.group(1), newty, m.group(4), m.group(5))
    return 'done'


# ============================================ phase A+B: plan and resolve ===
def split_call_args(line, col):
    """Top-level argument strings of the call whose span contains col."""
    depth = 0
    start = None
    spans = []
    for i, ch in enumerate(line):
        if ch == '(':
            if depth == 0:
                start = i + 1
            depth += 1
        elif ch == ')':
            depth -= 1
            if depth == 0 and start is not None:
                spans.append((start, i))
                start = None
        elif ch == ',' and depth == 1 and start is not None:
            spans.append((start, i))
            start = i + 1
    for a, b in spans:
        if a - 1 <= col <= b + 1:
            inner = line[a:b]
            if not inner.strip():
                return []
            parts, d, cur = [], 0, ''
            for ch in inner:
                if ch in '([{':
                    d += 1
                elif ch in ')]}':
                    d -= 1
                if ch == ',' and d == 0:
                    parts.append(cur)
                    cur = ''
                else:
                    cur += ch
            parts.append(cur)
            return parts
    return []


def plan_c2440(f, lno, col, det, line):
    op, x, y = det
    if op not in ('=', INIT_OP):
        return
    am = ASSIGN.match(line)
    if not am:
        return
    lhs, rhs = am.group(2), am.group(3)
    if op == INIT_OP:
        m = re.match(r'^(\s*)([A-Za-z_][\w:]*)((?:[ \t]*\*)*)[ \t]+'
                     r'([A-Za-z_]\w*)(\s*=)(?!=)', line)
        if m and ',' not in y and len(y) < 40:
            want = 'unsigned int' if (int_like(x) and is_ptr_ty(y)) else \
                   (x if (is_ptr_ty(x) and int_like(y)) else None)
            if want:
                r6_demands[(f, lno)].add(want)
        return
    kind, nm = lhs_kind(lhs)
    core = re.sub(r';.*$', '', rhs).strip()
    rhs_plain = bool(re.match(
        r'^-?\s?(?:0x[0-9a-fA-F]+|\d+|[A-Za-z_]\w*)$', core))
    rhs_ptrish = any(h in core for h in ('new ', '->', '_vftable', '&')) or \
        '(' in core
    cls = enclosing(f, lno)
    if kind == 'member':
        if int_like(x) and is_ptr_ty(y) and rhs_plain:
            demand_member(cls, nm, 'unsigned int', 'R2-int')
        elif is_ptr_ty(x) and int_like(y) and rhs_ptrish:
            demand_member(cls, nm, 'void*', 'R2-ptr')
    elif kind == 'local':
        if int_like(x) and is_ptr_ty(y) and rhs_plain:
            demand_local(f, lno, nm, 'unsigned int')
        elif is_ptr_ty(x) and int_like(y):
            demand_local(f, lno, nm, x)
    # idx/deref handled by R1 (vftable) or skipped


def plan_c2679(f, lno, det, line):
    """Returns the rewritten line (R5) or None."""
    op, x = det
    if op != '=':
        return None
    am = ASSIGN.match(line)
    if not am:
        return None
    lhs = am.group(2).strip()
    m = re.match(r'^\*\s*(?:\(\s*(?:_DWORD|void\s*\*?\*?)\s*\*\s*\)\s*)?'
                 r'(this|[A-Za-z_]\w*)$', lhs)
    if m:
        if is_ptr_ty(x):
            return None                 # pointer rhs on object: not int-cast
        new = re.sub(r'\*+\s*(?:\(\s*(?:_DWORD|void\s*\*?\*?)\s*\*\s*\)\s*)?'
                     r'%s\s*=' % re.escape(m.group(1)),
                     lambda _: '*(_DWORD *)%s =' % m.group(1),
                     line, count=1)
        if new != line:
            stats['R5-deref-cast'] += 1
            return new
        return None
    m = re.match(r'^this->([A-Za-z_]\w*)$', lhs)
    if m and int_like(x):
        demand_member(enclosing(f, lno), m.group(1), 'unsigned int',
                      'R2-c2679')
    return None


def plan_c2664(f, lno, col, det):
    _callee, argn, _x, y = det
    line = (load(f) or [])[lno - 1] if load(f) else ''
    args = split_call_args(line, col)
    if not (args and 1 <= argn <= len(args)):
        return
    arg = args[argn - 1].strip()
    if any(ch in y for ch in ',[()') or len(y) > 40:
        return
    m = re.match(r'^this->([A-Za-z_]\w*)$', arg)
    if m:
        demand_member(enclosing(f, lno), m.group(1), y, 'R4-member')
        return
    m = re.match(r'^([A-Za-z_]\w*)$', arg)
    if m and m.group(1) not in ('NULL', 'nullptr', 'true', 'false',
                                'this', '0'):
        demand_local(f, lno, m.group(1), y)


DEREF_EQ = re.compile(
    r'^(\s*)\*+\s*(?:\(\s*(?:_DWORD|void\s*\*?\*?)\s*\*\s*\)\s*)?'
    r'(this|[A-Za-z_]\w*)\s*=(?!=)(.*)$')
IDX_EQ = re.compile(r'^(\s*)([A-Za-z_]\w*)\s*\[')


def resolve_line_errors():
    """R1/R5 line transforms + demand planning for every logged error."""
    per_tu = defaultdict(list)
    for (code, f, lno, col, det) in records:
        per_tu[f].append((lno, col, code, det))
    for f, es in per_tu.items():
        lines = load(f)
        if not lines:
            continue
        by_line = defaultdict(list)
        for lno, col, code, det in es:
            by_line[lno].append((col, code, det))
        for lno, items in by_line.items():
            line = lines[lno - 1]
            for col, code, det in items:
                is_vft = '_vftable' in line
                if code == 'C2440' and is_vft and det[0] == '=':
                    x = det[1]
                    kind, nm = lhs_kind(ASSIGN.match(line).group(2)) \
                        if ASSIGN.match(line) else ('skip', None)
                    if is_ptr_ty(x):            # rhs `&(void*)(void*)&X`
                        m = DEREF_EQ.match(line)
                        if kind == 'deref' and m:
                            new = '%s*(void **)%s =%s' % (m.group(1),
                                                          m.group(2),
                                                          m.group(3))
                            if new != line:
                                line = new
                                stats['R1-vft-deref-void**'] += 1
                        elif kind == 'member':
                            demand_member(enclosing(f, lno), nm, 'void*',
                                          'R1-member')
                        elif kind == 'idx':
                            demand_local(f, lno, nm, 'void**')
                        elif kind == 'local':
                            demand_local(f, lno, nm, 'void*')
                    elif det[2] in INT_LIKE or det[2] == 'unsigned char':
                        m = DEREF_EQ.match(line)
                        if m and det[2] in ('int', 'unsigned int', '_DWORD'):
                            new = '%s*(_DWORD *)%s =%s' % (m.group(1),
                                                           m.group(2),
                                                           m.group(3))
                            if new != line:
                                line = new
                                stats['R1-vft-c2440-int'] += 1
                elif code == 'C2679' and is_vft:
                    x = det[1]
                    m = DEREF_EQ.match(line)
                    if m:
                        cast = 'void **' if is_ptr_ty(x) else '_DWORD'
                        new = '%s*(%s *)%s =%s' % (m.group(1), cast,
                                                   m.group(2), m.group(3))
                        if new != line:
                            line = new
                            stats['R1-vft-c2679'] += 1
                elif code == 'C2440':
                    plan_c2440(f, lno, col, det, line)
                elif code == 'C2679':
                    nl = plan_c2679(f, lno, det, line)
                    if nl:
                        line = nl
                elif code == 'C2664':
                    plan_c2664(f, lno, col, det)
            # R0 wrapper normalization on error lines too
            new = VFT_INT.sub(r'(int)&\1', line)
            new = VFT_AMP.sub(r'(void*)&\1', new)
            new = VFT_BARE.sub(r'(void*)&\1', new)
            if new != line:
                line = new
                stats['R0-vftable-wrapper'] += 1
            if line != lines[lno - 1]:
                lines[lno - 1] = line
    # R6 initializing-decl resolves (only when single unambiguous demand)
    for (f, lno), tys in sorted(r6_demands.items()):
        lines = load(f)
        if not lines or len(tys) != 1:
            continue
        ty = next(iter(tys))
        m = re.match(r'^(\s*)([A-Za-z_][\w:]*)((?:[ \t]*\*)*)[ \t]+'
                     r'([A-Za-z_]\w*)((?:[ \t]*\*)*\s*=)(?!=)', lines[lno - 1])
        if not m:
            continue
        lines[lno - 1] = '%s%s %s%s' % (m.group(1), ty, m.group(4),
                                        m.group(5))
        stats['R6-init-decl'] += 1


# ---------------------------------------------- R0 on ALL e4 source lines ===
VFT_INT = re.compile(r'\(int\)&\(void\s?\*\)\(void\s?\*\)&(\w+_vftable)')
VFT_AMP = re.compile(r'&\(void\s?\*\)\(void\s?\*\)&(\w+_vftable)')
VFT_BARE = re.compile(r'(?<![\w&])\(void\s?\*\)\(void\s?\*\)&(\w+_vftable)')


def normalize_vftable_wrappers():
    for f in e4_tus + e4_hpps:
        lines = load(f)
        if not lines:
            continue
        n = 0
        for i, line in enumerate(lines):
            if '_vftable' not in line:
                continue
            new = VFT_INT.sub(r'(int)&\1', line)
            new = VFT_AMP.sub(r'(void*)&\1', new)
            new = VFT_BARE.sub(r'(void*)&\1', new)
            if new != line:
                lines[i] = new
                n += 1
        stats['R0-vftable-wrapper'] += n


# --------------------------------------------------- member/local resolve ===
def resolve_members():
    for (cls, name), tys in sorted(member_demands.items()):
        if len(tys) > 1:
            skip_conflicts['member %s::%s' % (cls, name)] = \
                member_sites[(cls, name)]
            continue
        hp = 'src/e4/classes/%s_e4.hpp' % cls
        res = rewrite_member(hp, name, next(iter(tys)))
        if res == 'done':
            stats['R2/R4-member-retype'] += 1
        elif res is None:
            stats['member-skip(no-decl/size/array)'] += \
                member_sites[(cls, name)]


def resolve_locals():
    for (f, i, name), tys in sorted(local_demands.items()):
        if len(tys) > 1:
            skip_conflicts['local %s:%s' % (f, name)] += 1
            continue
        lines = load(f)
        if not lines:
            continue
        m = re.compile(LOCAL_DECL.pattern % re.escape(name)) \
              .match(lines[i - 1])
        if not m:
            continue
        old_ty = norm_ty(m.group(3))
        ty = next(iter(tys))
        if old_ty == ty:
            continue
        if '[' in m.group(5):
            continue                       # array local: element retype unsafe
        lines[i - 1] = '%s%s%s %s%s' % (m.group(1), m.group(2) or '',
                                        ty, m.group(4), m.group(5))
        stats['R3/R4-local-retype'] += 1


# ------------------------------------------------- D-rule: decl alignment ===
DEF_FULL = re.compile(
    r'^([A-Za-z_][\w\s\*<>,:&]*?)\s*(?:([A-Za-z_]\w*)::)?'
    r'([A-Za-z_]\w*)\s*\(([^)]*)\)\s*(?:const\s*)?$')
CRT_CALLEES = {'strtok', 'strlen', 'strcmp', 'sprintf', 'wcscmp', 'wcslen',
               '_makepath', 'memcpy', 'strcpy', 'GetDlgItem', 'GetClientRect',
               'SendMessageA', 'SendDlgItemMessageA', 'ClientToScreen',
               'WaitForSingleObject', 'ReleaseMutex', '_strcmpi', 'Destroy',
               'calloc', 'malloc', 'free'}


def callee_parts(callee):
    m = re.match(r'(?:[\w]+ +)?(?:gamemd::)?(?:([A-Za-z_]\w*)::)?'
                 r'([A-Za-z_]\w*)\(', callee)
    return (m.group(1), m.group(2)) if m else (None, None)


def plan_decl_align():
    for callee in sorted(callees_named):
        cls, fn = callee_parts(callee)
        if not fn or fn in CRT_CALLEES:
            continue
        ds = defs.get(fn) or []
        if cls:
            ds = [d for d in ds if d[0] == cls]
        if not ds:
            continue
        dcls, dret, dparams = ds[0]
        if len(ds) > 1 and any(d[:3] != ds[0][:3] for d in ds):
            continue                       # ambiguous overloads: skip
        if '(' in dparams or '{' in dparams:
            continue
        dret = ' '.join(dret.split())
        dparams = ' '.join(dparams.split())
        if dcls:
            hp = 'src/e4/classes/%s_e4.hpp' % dcls
            lines = load(hp)
            if not lines:
                continue
            in_cls = False
            pat = re.compile(r'^([ \t]*)([\w:][\w\s\*<>,:&]*?)[ \t]*'
                             r'(~?%s)[ \t]*\(([^)]*)\)[ \t]*(const[ \t]*)?;'
                             r'(.*)$' % re.escape(fn))
            for i, l in enumerate(lines):
                if re.match(r'struct\s+%s\b' % re.escape(dcls), l):
                    in_cls = True
                elif re.match(r'^\}', l):
                    in_cls = False
                if not in_cls:
                    continue
                dm = pat.match(l)
                if not dm:
                    continue
                if norm_ty(dm.group(4)) == norm_ty(dparams) and \
                        norm_ty(dm.group(2)) == norm_ty(dret):
                    continue
                lines[i] = '%s%s %s(%s)%s;%s' % (
                    dm.group(1), dret, dm.group(3), dparams,
                    ' const' if dm.group(5) else '', dm.group(6))
                stats['D-method-decl'] += 1
        else:
            hp = 'src/e4/e4_protos.h'
            lines = load(hp)
            if not lines:
                continue
            pat = re.compile(r'^([ \t]*(?:extern\s+)?)([\w:][\w\s\*<>,:&]*?)'
                             r'[ \t]*(%s)[ \t]*\(([^)]*)\)[ \t]*;(.*)$'
                             % re.escape(fn))
            for i, l in enumerate(lines):
                dm = pat.match(l)
                if not dm:
                    continue
                if norm_ty(dm.group(4)) == norm_ty(dparams) and \
                        norm_ty(dm.group(2)) == norm_ty(dret):
                    continue
                lines[i] = '%s%s %s(%s);%s' % (dm.group(1), dret, dm.group(3),
                                               dparams, dm.group(5))
                stats['D-free-decl'] += 1


# build defs map (e4 universe definition lines)
defs = {}
for f in e4_tus:
    lines = load(f)
    if not lines:
        continue
    for i, l in enumerate(lines):
        m = DEF_FULL.match(l.rstrip('\r \t'))
        if not m:
            continue
        if re.match(r'^[ \t]*(?:%s)\b' % '|'.join(CTRL_KW), l):
            continue
        ret = ' '.join(m.group(1).split())
        if ret in CTRL_KW or ret in ('}', '{'):
            continue
        defs.setdefault(m.group(3), []).append(
            (m.group(2) or '', ret, ' '.join(m.group(4).split())))


# ---------------------------------------------------------------- driver ===
def run():
    normalize_vftable_wrappers()
    resolve_line_errors()
    resolve_members()
    resolve_locals()
    plan_decl_align()

    changed = 0
    for rel, lines in sorted(texts.items()):
        if lines is None:
            continue
        p = ROOT / rel
        new = '\n'.join(lines)
        old = p.read_text(encoding='latin-1', errors='replace')
        if new != old:
            changed += 1
            if APPLY:
                p.write_bytes(new.encode('latin-1', errors='replace'))
    print('files changed: %d' % changed)
    for k in sorted(stats):
        print('%-36s %d' % (k, stats[k]))
    print('conflicting member targets skipped: %d' %
          sum(v for k, v in skip_conflicts.items() if k.startswith('member')))
    print('conflicting local targets skipped: %d' %
          sum(v for k, v in skip_conflicts.items() if k.startswith('local')))
    for nm, n in missed_locals.most_common(10):
        print('  missed local %-24s %d' % (nm, n))
    for nm, f, ln in missed_examples[:12]:
        print('  missed-example %s %s:%s' % (nm, f, ln))
    print('APPLIED' if APPLY else 'DRY RUN (use --apply)')


if __name__ == '__main__':
    run()
