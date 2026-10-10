#!/usr/bin/env python3
"""G42.30j: C2660 CALLER-SIDE receiver-arg drop (547-error bucket).

Calls `Cls::M(recv, rest...)` where truth arity is K and the call passes
K+1 args -> `((Cls*)recv)->M(rest...)` (same engine as 30f, driven by
the C2660 CALLER-SIDE groups in g140_c2660_final.json).

Usage: [--apply]
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
CEN = ROOT / '.omo/tu_errors_g140.json'
CACHE = ROOT / '.omo/ida_cache'

groups = json.load(open(ROOT / '.omo/g140_c2660_final.json'))
CALLER = {k.rsplit('|', 1)[0]: v for k, v in groups.items()
          if 'CALLER-SIDE' in str(v.get('cls'))}
sig = json.load(open(ROOT / 'signals.json', encoding='utf-8', errors='replace'))
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
                dec = json.load(open(p, encoding='utf-8', errors='replace')).get('decompiled', '')
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
                        d, n = 0, 1
                        for ch in inner:
                            if ch in '([':
                                d += 1
                            elif ch in ')]':
                                d -= 1
                            elif ch == ',' and d == 0:
                                n += 1
                        if not inner.strip() or inner.strip().endswith('*this'):
                            n -= 1
                        return max(n, 0)
    return None


Q1, Q2 = chr(0x201C), chr(0x201D)
QT = '[' + Q1 + Q2 + chr(34) + ']'
census = json.load(open(CEN, encoding='utf-8', errors='replace'))
sites = []
for tu, errs in census.items():
    for e in errs:
        if 'C2660' not in e:
            continue
        m = re.match(r'^(.+?)\((\d+)\):', e)
        qn = re.search(r'C2660: ' + QT + r'"?(?:gamemd::)?'
                       r'([A-Za-z_]\w*(?:::[~A-Za-z_]\w*)+)"?' + QT, e)
        if m and qn and qn.group(1) in CALLER:
            sites.append((m.group(1), int(m.group(2)), qn.group(1)))
print('C2660 caller sites (matched groups):', len(sites))

stats = Counter()
by_file = {}
for f, li, qn in sites:
    addr = NAME2ADDR.get(qn)
    k = truth_arity(addr) if addr else None
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
            stats['line-no-call'] += 1
            continue
        i = cm.end() - 1
        depth, args, cur, end = 0, [], '', None
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
        lines[li - 1] = ('%s((%s*)%s)->%s(%s)%s' %
                         (ln[:cm.start()], cls, args[0], meth,
                          ', '.join(args[1:]), ln[end + 1:]))
        stats['rewritten'] += 1

print('stats:', dict(stats.most_common()))
if APPLY:
    for path, lines in edits.items():
        Path(path).write_text('\n'.join(lines), encoding='utf-8', errors='replace')
    print('written:', len(edits), 'files')
else:
    print('(DRY)')
