#!/usr/bin/env python3
"""G42.30c: C2660 DECL-SIDE arity/type re-sync (486 errors / 87 groups).

The C2511 aligner synced member decls; statics and free-function protos
were skipped -- e.g. Power::TimerProcess decl carries (int,int) while
cache truth is (int): every caller fires C2660 (164 errors from this one
decl). Rewrite the DECL param list := ida_cache truth.

Usage: [--apply]
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
E4C = ROOT / 'src/e4/classes'
CACHE = ROOT / '.omo/ida_cache'

sig = json.load(open(ROOT / 'signals.json', encoding='utf-8', errors='replace'))
NAME2ADDR = {}
for name, ent in sig['_by_name'].items():
    if isinstance(ent, dict):
        for a in ent.get('symbols', {}):
            NAME2ADDR[name] = a

NORM = (('_DWORD', 'unsigned int'), ('_QWORD', 'unsigned long long'),
        ('_WORD', 'unsigned short'), ('_BYTE', 'unsigned char'),
        ('__int64', 'long long'), ('_BOOL4', 'int'))


def cache_params(addr):
    for cand in ('func_0x%08X.json' % int(addr, 16),
                 'func_0x%X.json' % int(addr, 16)):
        p = CACHE / cand
        if p.exists():
            try:
                dec = json.load(open(p, encoding='utf-8', errors='replace')).get('decompiled', '')
            except Exception:
                return None
            if not dec:
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
                        inner = ' '.join(zone[start + 1:i].split())
                        parts, d, cur = [], 0, ''
                        for ch in inner:
                            if ch in '([':
                                d += 1
                            elif ch in ')]':
                                d -= 1
                            if ch == ',' and d == 0:
                                parts.append(cur.strip())
                                cur = ''
                            else:
                                cur += ch
                        if cur.strip():
                            parts.append(cur.strip())
                        out = []
                        for x in parts:
                            if re.search(r'\bthis\s*$', x):
                                continue
                            for a, b in NORM:
                                x = re.sub(r'\b%s\b' % a, b, x)
                            x = re.sub(r'@<[^>]*>', '', x).strip()
                            if not x or not re.fullmatch(
                                    r'[\w:*\s]+', x):
                                return None  # artifact-bearing: skip site
                            out.append(x)
                        return out
    return None


groups = json.load(open(ROOT / '.omo/g140_c2660_final.json'))
stats = Counter()
for key, g in sorted(groups.items(),
                     key=lambda kv: -kv[1].get('n', 0)):
    if 'DECL-SIDE' not in str(g.get('cls')):
        continue
    qname = key.rsplit('|', 1)[0]
    addr = NAME2ADDR.get(qname)
    truth = cache_params(addr) if addr else None
    if not truth:
        stats['no-truth'] += g['n']
        continue
    want = ', '.join(truth)
    if '::' in qname:
        cls, meth = qname.rsplit('::', 1)
        hp = E4C / ('%s_e4.hpp' % cls)
        if not hp.exists():
            stats['no-hpp'] += g['n']
            continue
        lines = hp.read_text(encoding='utf-8', errors='replace').split('\n')
        hit = False
        for j, ln in enumerate(lines):
            dm = re.match(r'^(\s*.*?\b~?' + re.escape(meth) +
                          r')\((.*)\)\s*;', ln)
            if dm and not ln.lstrip().startswith('//'):
                if dm.group(2).strip() == want:
                    stats['already'] += g['n']
                    hit = True
                    break
                lines[j] = dm.group(1) + '(' + want + ');'
                stats['decl-fixed'] += g['n']
                hit = True
                if APPLY:
                    hp.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
                break
        if not hit:
            stats['decl-not-found'] += g['n']
    else:
        stats['free-fn-deferred'] += g['n']

print('stats:', dict(stats.most_common()))
