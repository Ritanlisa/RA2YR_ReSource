#!/usr/bin/env python3
"""Fix mangled virtual calls — LINE-SCOPED (corruption-safe).

The G29 vtable-rewrite half-turned `(*T(**)(*(_DWORD *)this + N))(recv)`
(IDA: CALL(vfptr+N)) into a this->Member read of the slot address.

Repair per LINE (mangled calls are single-line; a failed in-line paren
match means "not a call site" and the line is left untouched):
  1. locate `(*` + fn-ptr cast with `**`
  2. locate the trailing `((unsigned int)(this->M))` read
  3. restore the original statement from the ida_cache text at the line's
     /*0xADDR*/ anchor (token-mapped: _DWORD->unsigned int, no __thiscall)

Usage: python tools/csp_export/fix_mangled_vcalls.py [--apply]
"""
import glob
import json
import os
import re
import sys
from collections import Counter

APPLY = '--apply' in sys.argv
ANCHOR = re.compile(r'/\*0x([0-9a-fA-F]+)\*/')
INNER_THIS_M = re.compile(r'\(\s*\(?\s*unsigned\s+int\s*\)?\s*\(\s*this->(\w+)\s*\)\s*\)')
HAS_CAST = re.compile(r'\*\*')

_FUNC_STARTS = None


def func_starts():
    global _FUNC_STARTS
    if _FUNC_STARTS is None:
        import bisect
        s = json.load(open('signals.json', encoding='utf-8'))
        _FUNC_STARTS = sorted(int(a, 16) for a, sym in s['symbols'].items()
                              if isinstance(sym, dict)
                              and sym.get('kind') == 'function')
    return _FUNC_STARTS


def load_cache_line(addr_int):
    import bisect
    starts = func_starts()
    i = bisect.bisect_right(starts, addr_int) - 1
    start = starts[i] if i >= 0 else addr_int
    try:
        return json.load(open('.omo/ida_cache/func_0x%X.json' % start,
                              encoding='utf-8')).get('decompiled', '')
    except OSError:
        return ''


TOKEN_MAP = [
    (re.compile(r'\b__thiscall\s+'), ''),
    (re.compile(r'\b_DWORD\b'), 'unsigned int'),
    (re.compile(r'\b_BYTE\b'), 'unsigned char'),
    (re.compile(r'\b_WORD\b'), 'unsigned short'),
    (re.compile(r'\b_QWORD\b'), 'unsigned long long'),
]


def restore_original_stmt(pseudo, anchor_hex):
    if not pseudo:
        return None
    i = pseudo.lower().find('/*0x' + anchor_hex.lower() + '*/')
    if i <= 0:
        return None
    stmt_start = max(pseudo.rfind(';', 0, i), pseudo.rfind('{', 0, i),
                     pseudo.rfind('}', 0, i))
    stmt = pseudo[stmt_start + 1:i].strip()
    if not stmt.rstrip(';').strip():
        j = stmt_start
        stmt_start = max(pseudo.rfind(';', 0, j), pseudo.rfind('{', 0, j),
                         pseudo.rfind('}', 0, j))
        stmt = pseudo[stmt_start + 1:i].strip()
    if not stmt.endswith(';'):
        stmt += ';'
    if not re.search(r'\*\*\)', stmt):   # must be a fn-ptr call
        return None
    for pat, rep in TOKEN_MAP:
        stmt = pat.sub(rep, stmt)
    return stmt


def fix_line(line, stats):
    if '(*' not in line or 'this->' not in line or '**' not in line:
        return line
    if not INNER_THIS_M.search(line):
        return line
    am = ANCHOR.search(line)
    if not am:
        stats['no-anchor'] += 1
        return line
    stmt = restore_original_stmt(load_cache_line(int(am.group(1), 16)),
                                 am.group(1))
    if not stmt:
        stats['no-orig'] += 1
        return line
    indent = line[:len(line) - len(line.lstrip())]
    tail = ''
    ti = line.find('//', am.end())
    if ti >= 0:
        tail = ' ' + line[ti:].strip()
    stats['fixed-this' if ('this +' in stmt or 'this+' in stmt)
          else 'fixed-other-recv'] += 1
    return indent + stmt + tail


stats = Counter()
files_changed = 0
for p in glob.glob('src/e4/*.cpp') + glob.glob('src/_gap2/*.cpp'):
    lines = open(p, encoding='utf-8', errors='replace').read().split('\n')
    out = []
    changed = False
    for ln in lines:
        new = fix_line(ln, stats)
        if new != ln:
            changed = True
        out.append(new)
    if changed:
        files_changed += 1
        if APPLY:
            open(p, 'w', encoding='utf-8', newline='').write('\n'.join(out))
print('files changed:', files_changed)
print(dict(stats))
if not APPLY:
    print('(dry run -- pass --apply)')
