#!/usr/bin/env python3
"""Vtable-call rewriting helpers for pending-block normalization.

IDA renders virtual calls as `(*(CC **)(RECV + SLOT))(...)`; with the canon
vtable slot tables these become `RECV->Method(...)` mechanically. Also hosts
the NAME_RET table (canon function return types by bare name) and the
paren-balanced argument splitter used by normalize_blocks.
"""
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
NL = chr(10)

try:
    cdb = json.loads((ROOT / 'anchors/class_db.json').read_text(encoding='utf-8'))['classes']
except Exception:
    cdb = {}

try:
    VTOFF = json.loads((ROOT / 'tools/vtable_offsets.json').read_text(encoding='utf-8'))
except Exception:
    VTOFF = {}

# slot fillers discovered from tree evidence: cls -> {byte: 'vt_slot_N'}
FILLERS_PATH = ROOT / 'anchors/vtable_slot_fillers.json'
try:
    FILLERS = json.loads(FILLERS_PATH.read_text(encoding='utf-8'))
except Exception:
    FILLERS = {}
_fillers_dirty = False


def save_fillers():
    global _fillers_dirty
    if _fillers_dirty:
        FILLERS_PATH.write_text(
            json.dumps(FILLERS, ensure_ascii=False, indent=1),
            encoding='utf-8')
        _fillers_dirty = False


_slot_cache = {}


def _class_slots(cls):
    if cls not in _slot_cache:
        table = {}
        chain = [cls] + list((cdb.get(cls) or {}).get('full_ancestors') or [])
        for c in chain:
            for arec in ((cdb.get(c) or {}).get('methods') or {}).values():
                vs = arec.get('vtable_slots') or []
                if vs:
                    table.setdefault(vs[0]['slot'] * 4,
                                     (arec.get('name') or '').split('::')[-1])
        _slot_cache[cls] = table
    return _slot_cache[cls]


def _alias_class(cls):
    """Interface-label -> implementation class (ILocomotion -> LocomotionClass),
    mechanical: strip the leading I, accept an optional Class suffix."""
    if cls in cdb and _class_slots(cls):
        return cls
    if cls.startswith('I') and len(cls) > 2:
        stem = cls[1:]
        for cand in (stem + 'Class', stem):
            if cand in cdb:
                return cand
    return cls


def slot_name(cls, slot_bytes):
    """vtable byte offset -> method name for cls (ancestors chain)."""
    if cls not in _slot_cache:
        table = {}
        chain = [cls] + list((cdb.get(cls) or {}).get('full_ancestors') or [])
        for c in chain:
            for arec in ((cdb.get(c) or {}).get('methods') or {}).values():
                vs = arec.get('vtable_slots') or []
                if vs:
                    table.setdefault(vs[0]['slot'] * 4,
                                     (arec.get('name') or '').split('::')[-1])
        _slot_cache[cls] = table
    name = _slot_cache[cls].get(slot_bytes)
    if name is None:
        # slot missing from the declared type's table: try the implementation
        # class behind an interface label (ILocomotion -> LocomotionClass)
        if cls.startswith('I') and len(cls) > 2:
            stem = cls[1:]
            for cand in (stem + 'Class', stem):
                if cand in cdb:
                    name = _class_slots(cand).get(slot_bytes)
                    if name:
                        return name
    if name is None and cls:
        # tree-evidence slot filler: the dispatch itself proves the slot
        # exists at this byte offset for this class (G29.13). The generated
        # name is declared on the canon class by gen_cpp_canon and resolved
        # by the verifier through vtable_offsets.
        name = 'vt_slot_%d' % slot_bytes
        entry = FILLERS.setdefault(cls, {})
        if entry.get(str(slot_bytes)) != name:
            entry[str(slot_bytes)] = name
            _fillers_dirty = True
        VTOFF.setdefault(cls, {})
        VTOFF[cls].setdefault(name, slot_bytes)
    return name


def load_name_ret():
    """bare function name -> canon return type (csp_canon headers)."""
    table = {}
    for hp in ('src/csp_canon/classes.hpp', 'src/csp_canon/functions.hpp'):
        fp = ROOT / hp
        if not fp.exists():
            continue
        for ln in fp.read_text(encoding='utf-8', errors='replace').split(NL):
            im = re.match(r'^\s*(?:[A-Za-z_][\w:<>]*\s+\*?\s*)?'
                          r'([A-Za-z_]\w*)\s*\(', ln.strip())
            rm = re.match(r'^\s*(.+?)\s*~?[A-Za-z_]\w*\s*\(', ln.strip())
            if im and rm and '// 0x' in ln:
                ret = rm.group(1).strip()
                if re.match(r'^[A-Za-z_]\w*$', ret):
                    table.setdefault(im.group(1), ret)
    return table


VT_OPEN = re.compile(
    r'\*\*\)\s*\([^()]*\)\s*\)\s*\(\s*(&?\*{0,2}this|[a-z]\w*)\s*\+\s*'
    r'(0x[0-9A-Fa-f]+|\d+)\s*\)\s*\)\s*\(')
# double-indirect receiver: (*(CC **)(*(int *)v + SLOT))(  -- one deref then slot
VT_OPEN2 = re.compile(
    r'\*\*\)\s*\([^()]*\)\s*\)\s*\(\s*\*\s*\(\s*(?:int|_DWORD|unsigned int|'
    r'unsigned|long)\s*\*\s*\)\s*([a-z]\w*)\s*\+\s*'
    r'(0x[0-9A-Fa-f]+|\d+)\s*\)\s*\)\s*\(')
# vtable function-pointer LOAD: vX = *(T *)(*(int *)R + SLOT);  (call split
# across two statements by the decompiler)
VT_LOAD = re.compile(
    r'^(\s*)(?:\w+\s*\*?\s*)?([a-z]\w+)\s*=\s*\*\(?\s*[^;=]*?'
    r'\(\s*\*\s*\(?\s*(?:int|_DWORD|unsigned int|unsigned|long)\s*\*\s*\)\s*'
    r'(this|[a-z]\w*)\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\s*\)\s*;\s*$')


def balance_paren(text, open_idx):
    """index of the `)` matching the `(` at open_idx, or -1."""
    d = 0
    for k in range(open_idx, len(text)):
        if text[k] == '(':
            d += 1
        elif text[k] == ')':
            d -= 1
            if d == 0:
                return k
    return -1


def split_args(argtext):
    """top-level comma split of an argument list"""
    args = []
    d = 0
    cur = []
    in_str = False
    q = ''
    for ch in argtext:
        if in_str:
            cur.append(ch)
            if ch == q:
                in_str = False
            continue
        if ch in ('"', "'"):
            in_str = True
            q = ch
            cur.append(ch)
            continue
        if ch in '(<[':
            d += 1
        elif ch in ')>]':
            d -= 1
        if ch == ',' and d == 0:
            args.append(''.join(cur).strip())
            cur = []
            continue
        cur.append(ch)
    tail = ''.join(cur).strip()
    if tail:
        args.append(tail)
    return args


def _resolve(recv, env, vt_of, cls):
    """receiver expression -> (object_text, class) or (None, None)"""
    if recv in ('this', '*this'):
        return 'this', cls
    if recv in vt_of:
        obj = vt_of[recv]
        return obj, env.get(obj) or cls
    base = recv.lstrip('*').strip()
    if base in env:
        return base, env[base]
    return None, None


# generalized receiver inside the slot expression:
#   this | *this | vN | *vN | this->M | *(_DWORD *)this->M | *(_DWORD *)vN
RECV_ALT = (
    r'(?:'
    r'\*\(\s*_DWORD\s*\*?\s*\)\s*this->\w+'
    r'|\*\(\s*(?:int|unsigned int)\s*\*?\s*\)\s*this->\w+'
    r'|\*(?:\(_DWORD\)|\(int\))?this'
    r'|this->\w+'
    r'|\*\(\s*_DWORD\s*\*?\s*\)\s*v\d+'
    r'|\*(?:\(_DWORD\)|\(int\))?v\d+'
    r'|\*this'
    r'|this'
    r'|[a-z]\w*'
    r')')
VT_OPEN_G = re.compile(
    r'\*\*\)\s*\([^()]*\)\s*\)\s*\(\s*(' + RECV_ALT + r')\s*\+\s*'
    r'(0x[0-9A-Fa-f]+|\d+)\s*\)\s*\)\s*\(')


def recv_class(recv, cls, env, mtab):
    """receiver expression -> (member-type class or None); also returns the
    receiver OBJECT text for `->` chaining."""
    obj = recv
    s = recv
    while True:
        m = re.match(r'^\*\(\s*(?:_DWORD|int|unsigned int)\s*\*?\s*\)\s*(.+)$', s)
        if not m:
            break
        s = m.group(1).strip()
    if s in ('this', '*this'):
        return 'this', cls
    mm = re.match(r'^this->(\w+)$', s)
    if mm:
        if not cls:
            return s, None
        for o, info in (mtab.get(cls) or {}).get('members', {}).items():
            if info.get('name') == mm.group(1):
                t = (info.get('type') or '').strip().rstrip('*').strip()
                if re.match(r'^[A-Za-z_]\w*$', t):
                    return obj, t
                break
        return obj, None
    base = s.lstrip('*').strip()
    if base in env:
        return base, env[base]
    return obj, None




def find_vt_start(text, star_pos):
    """Left edge of the `(*(CAST)(RECV + SLOT))` construct: walk left from the
    `**` with paren-depth accounting, then fold in the deref `*(` opener."""
    k = star_pos
    d = 0
    while k >= 0:
        ch = text[k]
        if ch == ')':
            d += 1
        elif ch == '(':
            if d == 0:
                break
            d -= 1
        k -= 1
    if k < 0:
        return star_pos
    while k >= 1 and (text[k - 1].isalnum() or text[k - 1] in '_ '):
        k -= 1
    if k >= 2 and text[k - 1] == '*' and text[k - 2] == '(':
        k -= 2
    return k

def rewrite_vt_text(text, cls, env=None, vt_of=None, mtab=None):
    """Segment-level virtual-call rewrite (multi-line safe, generalized
    receivers: this / *this / vars / vtable holders / this->M /
    *(_DWORD *)this->M). Returns (text, count)."""
    env = env or {}
    vt_of = vt_of or {}
    mtab = mtab or {}
    pos = 0
    n = 0
    while True:
        m = VT_OPEN_G.search(text, pos)
        if m:
            recv, slot = m.group(1), int(m.group(2), 0)
            obj, tgt = recv_class(recv, cls, env, mtab)
            if tgt is None and recv in vt_of:
                obj = vt_of[recv]
                tgt = env.get(obj) or cls
            if tgt is None and recv.lstrip('*').strip() in env:
                obj = recv.lstrip('*').strip()
                tgt = env[obj]
        else:
            m = VT_OPEN2.search(text, pos)
            if not m:
                break
            recv, slot = m.group(1), int(m.group(2), 0)
            obj, tgt = _resolve(recv, env, vt_of, cls)
            if tgt is None and recv in env:
                obj, tgt = recv, env[recv]
        name = slot_name(tgt, slot) if tgt else None
        if not name:
            pos = m.end()
            continue
        call_open = m.end() - 1
        call_close = balance_paren(text, call_open)
        if call_close < 0:
            pos = m.end()
            continue
        args = split_args(text[call_open + 1:call_close])
        first = (args[0] if args else '').strip()
        # drop an implicit-this first arg: the receiver itself, `this`, or a
        # sub-object adjust (`this + OFF`) when the receiver is this
        if first == obj or first == recv or first == 'this' or \
                re.fullmatch(r'this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)', first):
            args = args[1:]
        head = text.rfind('(*(', 0, m.start())
        start = head if (head >= 0 and
                         text[head:m.start()].count('(') >=
                         text[head:m.start()].count(')')) else m.start()
        new_call = '%s->%s(%s)' % (obj, name, ', '.join(args))
        text = text[:start] + new_call + text[call_close + 1:]
        pos = start + len(new_call)
        n += 1
    return text, n


def merge_load_call(text, cls, env=None):
    """Cross-statement merge: `vX = *(T *)(*(int *)R + SLOT);` + a single
    later use `vX(args)` -> `R->Method(args)` and the load line removed.
    Returns (text, count)."""
    env = env or {}
    lines = text.split(NL)
    used = {}
    for idx, ln in enumerate(lines):
        for m in re.finditer(r'\b(v\d+|a\d+)\s*\(', ln):
            used.setdefault(m.group(1), []).append(idx)
    removed = set()
    n = 0
    for idx, ln in enumerate(lines):
        if idx in removed:
            continue
        m = VT_LOAD.match(ln)
        if not m:
            continue
        var = m.group(2)
        recv = m.group(3)
        slot = int(m.group(4), 0)
        obj, tgt = _resolve(recv, env, {}, cls)
        name = slot_name(tgt, slot) if tgt else None
        if not name:
            continue
        call_sites = [t for t in used.get(var, []) if t != idx
                      and t not in removed
                      and re.search(r'\b%s\s*\(' % re.escape(var), lines[t])]
        if len(call_sites) != 1:
            continue
        ci = call_sites[0]
        cm = re.search(r'\b%s\s*\(' % re.escape(var), lines[ci])
        open_idx = cm.end() - 1
        close_idx = balance_paren(lines[ci], open_idx)
        if close_idx < 0:
            continue
        args = split_args(lines[ci][open_idx + 1:close_idx])
        first = (args[0] if args else '').strip()
        if first == obj:
            args = args[1:]
        new_call = '%s->%s(%s)' % (obj, name, ', '.join(args))
        pre = lines[ci][:cm.start()]
        post = lines[ci][close_idx + 1:]
        lines[ci] = pre + new_call + post
        removed.add(idx)
        n += 1
    out = [ln for t, ln in enumerate(lines) if t not in removed]
    return NL.join(out), n


# static-form sub-object call: FacingClass::Update((char *)this + 904, v21)
# tolerant of the parenthesized forms IDA emits:
#   (char *)this + 928   |   (char *)(this + 928)
STATIC_SUB = re.compile(
    r'\b([A-Za-z_]\w*)::([A-Za-z_]\w*)\(\s*(?:\(\s*char\s*\*\s*\)\s*)?'
    r'(?:\(\s*)?this\s*\+\s*(0x[0-9A-Fa-f]+|\d+)(?:\s*\))?\s*')


def rewrite_static_sub(text, cls, mtab):
    """Cls::Method(this + OFF, rest) -> ((Cls *)((char *)this + OFF)).Method(rest)
    when the canon member at OFF of this-class has type Cls. Sound: the
    sub-object's dynamic type is its declared member type."""
    mtab = mtab or {}
    n = 0
    pos = 0
    while True:
        m = STATIC_SUB.search(text, pos)
        if not m:
            break
        c1, meth, off = m.group(1), m.group(2), int(m.group(3), 0)
        info = (mtab.get(cls) or {}).get('members', {}).get(str(off))
        if info and (info.get('type') or '').strip() != c1:
            # member exists but carries a different declared type: trust the
            # call site (the adjusted this IS the callee's class)
            pass
        call_open = text.index('(', m.start())
        call_close = balance_paren(text, call_open)
        if call_close < 0:
            pos = m.end()
            continue
        args = split_args(text[call_open + 1:call_close])
        first = (args[0] if args else '').strip()
        if re.fullmatch(r'(?:\(\s*char\s*\*\s*\))?this\s*\+\s*(0x[0-9A-Fa-f]+|\d+|' + re.escape(m.group(3)) + ')', first):
            args = args[1:]
        new_call = ('((%s *)((char *)this + %s)).%s(%s)'
                    % (c1, m.group(3), meth, ', '.join(args)))
        text = text[:m.start()] + new_call + text[call_close + 1:]
        pos = m.start() + len(new_call)
        n += 1
    return text, n


VT_PARTIAL = re.compile(
    r'\*\(_DWORD\s*\*\)\s*(this->\w+->(\w+)\()\s*(this->\w+)\s*\)')


def rewrite_partial(text):
    """Repair half-rewritten forms left by earlier runs:
    `*(_DWORD *)R->Thunk(R)` -> `R->Thunk()` (the leading deref and the
    duplicated implicit-this arg were residue of a two-step virtual call)."""
    n = 0
    def s(m):
        nonlocal n
        n += 1
        return '%s)' % m.group(1)
    return VT_PARTIAL.sub(s, text), n


CAST_CALL = re.compile(
    r'\(\s*\(\s*[A-Za-z_][\w\s]*?\)\s*([A-Za-z_][\w:>]*)\s*\)\s*\(')


def rewrite_cast_call(text):
    """((CC *)FuncName)(args) -> FuncName(args): a function-name cast-call is
    a redundant typing wrapper (the target is already a plain function)."""
    n = 0
    def s(m):
        nonlocal n
        n += 1
        return m.group(1) + '('
    return CAST_CALL.sub(s, text), n
