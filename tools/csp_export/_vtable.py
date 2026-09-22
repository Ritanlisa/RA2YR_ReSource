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
