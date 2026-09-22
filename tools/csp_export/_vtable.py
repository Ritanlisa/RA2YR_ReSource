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

_slot_cache = {}


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
    return _slot_cache[cls].get(slot_bytes)


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


def rewrite_vt_text(text, cls, env=None, vt_of=None):
    """Segment-level virtual-call rewrite (multi-line safe).

    Handles: (*(CC **)(RECV + SLOT))(args)          -- direct
             (*(CC **)(*(int *)v + SLOT))(args)     -- double-indirect
    Receiver class facts come from `cls` (this), env (typed vars) and
    vt_of (vtable holders). Unresolvable occurrences stay untouched.
    Returns (text, count)."""
    env = env or {}
    vt_of = vt_of or {}
    pos = 0
    n = 0
    while True:
        m = VT_OPEN.search(text, pos) or VT_OPEN2.search(text, pos)
        if not m:
            break
        recv = m.group(1)
        slot = int(m.group(2), 0)
        obj, tgt = _resolve(recv, env, vt_of, cls)
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
        if first == obj or first == recv:
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
