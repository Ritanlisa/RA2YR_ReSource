#!/usr/bin/env python3
"""Rewrite explicit-this static-form calls: `Cls::Mth(recv, args...)`
-> `((Cls *)recv)->Mth(args...)` (C2352 pass).

Materialized bodies carry the MSVC inline-expansion form
`Base::Method(this, ...)` / `Cls::Method(v5, ...)`. For every C2352
("non-static member call needs an object") site, locate the qualified call
on that line, split the argument list, and if the first argument is
pointer-ish (identifier, this, cast expr), rewrite to member-call form.

Skips cascade lines (co-located C2065/C2039/C2027/C2653) -- those errors
mean the receiver/name is unresolved and rewriting would corrupt.

Usage: python tools/csp_export/fix_static_call_rewrite.py <log> [--apply]
"""
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
LQ, RQ = chr(0x201C), chr(0x201D)
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)
if not LOG:
    print('usage: fix_static_call_rewrite.py <log> [--apply]')
    sys.exit(1)
TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace')

ERR = re.compile(
    r'^(?:\d+>)?(?:[A-Za-z]:[\\/](?:RA2YR_ReSource[\\/])?)?'
    r'([^\s(]+?)\((\d+),(\d+)\): error (C\d+): (.*)$', re.M)
C2352 = re.compile(r'error C2352: [' + LQ + RQ + r']gamemd::(\w+)::(\w+)')

cascade = set()
sites = defaultdict(set)
c2355 = defaultdict(set)
for f, ln, col, code, msg in ERR.findall(TXT):
    f2 = f.replace('\\', '/')
    mm = re.search(r'src/(.*)$', f2)
    if not mm:
        continue
    rel = 'src/' + mm.group(1)
    if code in ('C2065', 'C2039', 'C2027', 'C2653'):
        cascade.add((rel, ln))
    if code == 'C2355':
        # `this` used in a free/static context -- our own rewritten-this
        # sites; repair maps them to null-receiver member calls
        c2355[rel].add(int(ln))
for f, ln, col, code, msg in ERR.findall(TXT):
    if code != 'C2352':
        continue
    mm = re.search(r'src/(.*)$', f.replace('\\', '/'))
    if not mm:
        continue
    rel = 'src/' + mm.group(1)
    m = C2352.search('error C2352: ' + msg if 'C2352' not in msg else msg)
    if not m:
        m = re.search(r'gamemd::(\w+)::(\w+)', msg)
    if m:
        sites[rel].add((int(ln), m.group(1), m.group(2)))

STATS = defaultdict(int)


def split_args(s):
    """top-level comma split of the parenthesized arg text"""
    out, depth, cur = [], 0, ''
    for ch in s:
        if ch in '([':
            depth += 1
        elif ch in ')]':
            depth -= 1
        if ch == ',' and depth == 0:
            out.append(cur)
            cur = ''
        else:
            cur += ch
    if cur.strip():
        out.append(cur)
    return out


def find_call(code, cls, mth):
    """Return (start_of_recv, recv_end, args_start, args_end) for the first
    `cls::mth(...)` occurrence with a non-empty arg list."""
    for m in re.finditer(re.escape(cls) + r'::' + re.escape(mth) + r'\s*\(',
                         code):
        i = m.end()
        depth = 1
        j = i
        while j < len(code) and depth:
            if code[j] == '(':
                depth += 1
            elif code[j] == ')':
                depth -= 1
            j += 1
        if depth == 0 and j > i:
            return m.start(), i, j
    return None


n_files = 0
for rel, lst in sorted(sites.items()):
    p = ROOT / rel
    if not p.exists() or p.suffix != '.cpp':
        continue
    try:
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    except OSError:
        continue
    changed = False
    # --- C2355 repair: `this->Cls::Mth(` in free/static context ---
    for ln in sorted(c2355.get(rel, ())):
        if ln - 1 >= len(lines):
            continue
        raw = lines[ln - 1].rstrip('\r\n')
        m = re.search(r'this->(\w+)::(\w+)\s*\(', raw)
        if not m:
            continue
        new = (raw[:m.start()] + '((%s *)0)->%s(' % (m.group(1), m.group(2))
               + raw[m.end():])
        lines[ln - 1] = new
        STATS['c2355-repair'] += 1
        changed = True
    # --- C2352 rewrite passes ---
    for ln, cls, mth in sorted(lst):
        if ln - 1 >= len(lines) or (rel, str(ln)) in cascade:
            STATS['skip-cascade'] += 1
            continue
        raw = lines[ln - 1].rstrip('\r\n')
        code, comment = raw, ''
        ci = raw.find('//')
        if ci >= 0:
            code, comment = raw[:ci], raw[ci:]
        loc = find_call(code, cls, mth)
        if not loc:
            STATS['no-call'] += 1
            continue
        s, i, j = loc
        inner = code[i:j - 1]
        if not inner.strip():
            # zero-arg explicit-base call: Cls::Mth() -> this->Cls::Mth()
            new = (code[:s] + 'this->' + cls + '::' + mth + '()'
                   + code[j:] + comment)
            lines[ln - 1] = new
            STATS['rewritten-this'] += 1
            changed = True
            continue
        args = split_args(inner)
        recv = args[0].strip()
        if not recv:
            STATS['no-args'] += 1
            continue
        rest = ', '.join(a.strip() for a in args[1:])
        head = code[:s]
        new = ('%s((%s *)(%s))->%s(%s)%s' % (head, cls, recv, mth, rest,
                                              code[j:])
               + comment)
        lines[ln - 1] = new
        STATS['rewritten'] += 1
        changed = True
    if changed:
        n_files += 1
        if APPLY:
            p.write_text('\n'.join(lines), encoding='utf-8')

print('files changed:', n_files)
for k, v in sorted(STATS.items()):
    print('  %-12s %d' % (k, v))
if not APPLY:
    print('(dry run -- pass --apply)')
