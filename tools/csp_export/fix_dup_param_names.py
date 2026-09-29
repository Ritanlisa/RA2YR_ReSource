#!/usr/bin/env python3
"""Repair duplicate parameter names inside e4 header declarations.

The pre-fix max-arity pass emitted `int * a2, void *a2 = 0` (name
collision -> C2086 -> class-body parse derailment -> C2334 cascade).
Rename later duplicate occurrences to fresh unused aN names.

Idempotent. Usage: python tools/csp_export/fix_dup_param_names.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
E4C = ROOT / 'src' / 'e4' / 'classes'
APPLY = '--apply' in sys.argv

DECL = re.compile(
    r'^([ \t]*(?:static\s+|virtual\s+)*[\w\s\*:<>,&]+?\b\w+\s*)'
    r'\(([^()]*)\)\s*(?:const)?\s*;', re.M)

n = 0
for p in sorted(E4C.glob('*_e4.hpp')):
    if p.name.startswith('_'):
        continue
    txt = p.read_text(encoding='utf-8', errors='replace')
    orig = txt

    def _fix(mm):
        head, params = mm.group(1), mm.group(2)
        if not params.strip() or '=' not in params and ',' not in params:
            return mm.group(0)
        toks = [t for t in re.split(r'(\(|\)|,)', params)]
        # only rewrite when a duplicate name exists
        names = re.findall(r'(?<!\w)([A-Za-z]\w*)\s*(?:=|$|,|\))', params)
        seen = set()
        dups = {x for x in names if names.count(x) > 1}
        if not dups:
            return mm.group(0)
        used = set(names)
        out = []
        replaced = set()
        for tok in re.split(r',', params):
            m2 = re.search(r'\b([A-Za-z_]\w*)\s*(=)?\s*$', tok)
            if m2 and m2.group(1) in dups:
                name = m2.group(1)
                if name in replaced:
                    k = 1
                    while ('a%d' % k) in used:
                        k += 1
                    used.add('a%d' % k)
                    tok = tok[:m2.start(1)] + ('a%d' % k) + tok[m2.end(1):]
                else:
                    replaced.add(name)
            out.append(tok)
        return '%s(%s);' % (head.rstrip(), ', '.join(t.strip() for t in out))

    txt = DECL.sub(_fix, txt)
    if txt != orig:
        n += 1
        if APPLY:
            p.write_text(txt, encoding='utf-8')
print('headers repaired:', n)
if not APPLY:
    print('(dry run -- pass --apply)')
