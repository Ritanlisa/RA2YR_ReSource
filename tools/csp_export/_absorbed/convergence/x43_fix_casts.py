#!/usr/bin/env python3
"""X43 batch-1 fixer: cast SPELLING retype to binary-true types.

Pool: x43_cast_pool2.json rows with form A (ptr-expr) or B-ptr (void*-local).
Mechanism (L362, X39-L1 precedent): the failing arg already carries a cast;
its spelling disagrees with the binary-true callee param type.  Retype the
spelling IN PLACE.  Zero casts inserted (count-preserving), zero deletions.

Gates per row:
  - old cast found exactly once on the line; callee token still on line
  - the replacement is the canon spelling of the x40 param type
  - single pass per file, lines DESCENDING (L305)
Byte-preserving I/O (L357).  Idempotent: 2nd run = 0 writes (the line's cast
already == want).

Usage: python x43_fix_casts.py [--apply]  (default dry-run)
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
OUT = ROOT / '.omo/evidence/optimization/x43'
ROWS = json.load(open(OUT / 'x43_cast_pool2.json'))
APPLY = '--apply' in sys.argv

_ns = {}
exec(open(ROOT / '.omo/evidence/optimization/x42/x42_census2.py').read().split('def main()')[0], _ns)
canon_ty = _ns['canon_ty']


def want_spelling(bt):
    """'CellClass *' -> 'CellClass *'  (canonical, single-spaced)"""
    t = ' '.join((bt or '').split())
    return t


by_file = {}
for p in ROWS:
    if p.get('form') not in ('A', 'B-ptr'):
        continue
    by_file.setdefault(p['file'], []).append(p)

plan = []
skipped = Counter()
total_casts_before = 0
for fp, rows in by_file.items():
    path = ROOT / fp
    text = path.read_text(encoding='latin-1', errors='replace')
    lines = text.split('\n')
    edits = []
    for p in sorted(rows, key=lambda x: -x['line']):
        ln = lines[p['line'] - 1]
        old = p['cast']
        new = want_spelling(p['bt'])
        if old == new:
            skipped['already-true'] += 1
            continue
        if p['callee'].split('::')[-1] not in ln:
            skipped['no-callee-token'] += 1
            continue
        # replace ONLY the cast that immediately precedes the arg expr
        pat = re.compile(r'\(\s*%s\s*\)' % re.escape(old))
        hits = list(pat.finditer(ln))
        if len(hits) != 1:
            skipped['cast-count-%d' % len(hits)] += 1
            continue
        m = hits[0]
        newln = ln[:m.start()] + '(%s)' % new + ln[m.end():]
        # guard: cast token count on the line must be unchanged
        if newln.count('(') != ln.count('(') or newln.count(')') != ln.count(')'):
            skipped['paren-delta'] += 1
            continue
        edits.append((p['line'], ln, newln))
    if edits:
        plan.append((fp, edits))

n_edits = sum(len(e) for _, e in plan)
print('plan: %d edits across %d files (skipped: %s)' %
      (n_edits, len(plan), dict(skipped.most_common())))

if APPLY:
    for fp, edits in plan:
        path = ROOT / fp
        lines = path.read_text(encoding='latin-1', errors='replace').split('\n')
        for lineno, old, new in edits:  # descending order already
            lines[lineno - 1] = new
        path.write_bytes('\n'.join(lines).encode('latin-1'))
        print('applied %s: %d lines' % (fp, len(edits)))
    # idempotence check: re-run plan construction -> 0 edits
    plan2 = []
    for fp, rows in by_file.items():
        path = ROOT / fp
        lines = path.read_text(encoding='latin-1', errors='replace').split('\n')
        for p in rows:
            if p.get('form') not in ('A', 'B-ptr'):
                continue
            ln = lines[p['line'] - 1]
            if p['cast'] in ln and ('(%s)' % want_spelling(p['bt'])) not in ln:
                plan2.append((fp, p['line']))
    print('idempotence: %d residual (expect 0)' % len(plan2))
else:
    for fp, edits in plan[:6]:
        print('== %s' % fp)
        for lineno, old, new in edits[:4]:
            print('  %5d| %s' % (lineno, old.strip()[:110]))
            print('      %s' % new.strip()[:110])
