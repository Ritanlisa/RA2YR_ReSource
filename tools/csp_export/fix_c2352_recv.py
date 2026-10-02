#!/usr/bin/env python3
"""G42.30f: C2352 thiscall receiver-rewrite (753-site bucket, agent-E spec).

`Cls::M(recv, rest...)` where cache truth says M is thiscall with arity
K and the call passes K+1 args -> `((Cls*)recv)->M(rest...)`.
Single-line calls only; arity-OK gate; data: g140 census + signals CC +
ida_cache truth arity.

Usage: [--apply]
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
CEN = ROOT / '.omo/tu_errors_g140.json'
CACHE = ROOT / '.omo/ida_cache'

sig = json.load(open(ROOT / 'signals.json', encoding='utf-8'))
NAME2ADDR = {}
for name, ent in sig['_by_name'].items():
    if isinstance(ent, dict):
        for a in ent.get('symbols', {}):
            NAME2ADDR[name] = a


def truth_arity(addr):
    for cand in ('func_0x%08X.json' % int(addr, 16),
                 'func_0x%X.json' % int(addr, 16)):
        p = CACHE / cand
        if p.exists():
            try:
                dec = json.load(open(p, encoding='utf-8')).get('decompiled', '')
            except Exception:
                return None
            zone = dec.split('{', 1)[0]
            start = zone.find('(')
            if start < 0:
                return None
            depth = 0
            for i in range(start, len(zone)):
                if zone[i] == '(':
                    depth += 1
                elif zone[i] == ')':
                    depth -= 1
                    if depth == 0:
                        inner = zone[start + 1:i]
                        # count top-level commas
                        d, n = 0, 1
                        for ch in inner:
                            if ch in '([':
                                d += 1
                            elif ch in ')]':
                                d -= 1
                            elif ch == ',' and d == 0:
                                n += 1
                        if not inner.strip() or inner.strip().endswith('*this'):
                            n -= 1 if inner.strip() else 1
                        return max(n, 0)
    return None


Q1, Q2 = chr(0x201C), chr(0x201D)
QT = '[' + Q1 + Q2 + chr(34) + ']'
census = json.load(open(CEN, encoding='utf-8'))
sites = []
for tu, errs in census.items():
    for e in errs:
        if 'C2352' not in e:
            continue
        m = re.match(r'^(.+?)\((\d+)\):', e)
        qn = re.search(r'C2352: ' + QT + r'(?:gamemd::)?'
                       r'([A-Za-z_]\w*::[~A-Za-z_]\w*)' + QT, e)
        if m and qn:
            sites.append((m.group(1), int(m.group(2)), qn.group(1)))
print('C2352 qualified sites:', len(sites))

stats = Counter()
by_file = {}
for f, li, qn in sites:
    addr = NAME2ADDR.get(qn)
    if not addr:
        stats['no-addr'] += 1
        continue
    k = truth_arity(addr)
    if k is None:
        stats['no-truth'] += 1
        continue
    by_file.setdefault(f, []).append((li, qn, k))

edits = {}
for f, items in by_file.items():
    p = Path(f)
    try:
        lines = edits.setdefault(str(p), p.read_text(
            encoding='utf-8', errors='replace').split('\n'))
    except OSError:
        continue
    for li, qn, k in items:
        if li - 1 >= len(lines):
            continue
        ln = lines[li - 1]
        cls, meth = qn.rsplit('::', 1)
        cm = re.search(re.escape(qn) + r'\s*\(', ln)
        if not cm:
            # skip-call already rewritten
            stats['line-no-call'] += 1
            continue
        # top-level split of the call args (balanced from the '(')
        i = cm.end() - 1
        depth, args, cur = 0, [], ''
        end = None
        while i < len(ln):
            ch = ln[i]
            if ch in '([':
                depth += 1
                if depth > 1:
                    cur += ch
            elif ch in ')]':
                depth -= 1
                if depth == 0:
                    args.append(cur)
                    end = i
                    break
                cur += ch
            elif ch == ',' and depth == 1:
                args.append(cur)
                cur = ''
            elif depth >= 1:
                cur += ch
            i += 1
        if end is None:
            stats['unbalanced'] += 1
            continue
        args = [a.strip() for a in args]
        if len(args) != k + 1 or not args[0]:
            stats['arity'] += 1
            continue
        head = ln[:cm.start()]
        new = ('%s((%s*)%s)->%s(%s)%s' %
               (head, cls, args[0], meth, ', '.join(args[1:]), ln[end + 1:]))
        lines[li - 1] = new
        stats['rewritten'] += 1

print('stats:', dict(stats.most_common()))
if APPLY:
    for path, lines in edits.items():
        Path(path).write_text('\n'.join(lines), encoding='utf-8')
    print('written:', len(edits), 'files')
else:
    print('(DRY)')
