#!/usr/bin/env python3
"""G41.34: drop duplicate defs -- same file carries two def heads with the
same `Class::Method` qual AND the same IDA anchor (hand-translated def +
later corpus-materialized def for one address). The SECOND block is
commented out wholesale (head through matching brace).

Overloads with DIFFERENT anchors are left alone.

Usage: python tools/csp_export/fix_dup_anchor_defs.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv

DEF = re.compile(r'^.*?\b([A-Za-z_]\w*(?:::[A-Za-z_]\w*)+)\s*\([^;{}]*\)\s*(?:\{)?\s*(?://.*|(?:/\*.*\*/)?)\s*$')


def main():
    n = 0
    for p in sorted(ROOT.glob('src/**/*.cpp')):
        if 'build' in p.parts or not p.is_file():
            continue
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        # collect (qual, anchor) occurrences at def-head positions
        seen = {}
        drops = []  # (start, end) inclusive ranges to comment
        i = 0
        while i < len(lines):
            s = lines[i].strip()
            if '::' in s and s and s[0].isalpha() and '(' in s and ';' not in s:
                dm = DEF.match(s)
                if dm:
                    qual = dm.group(1)
                    am = re.search(r'0[xX]([0-9A-Fa-f]{5,8})', s)
                    key = (qual, am.group(1).lower() if am else None)
                    if am and key in seen:
                        # duplicate: find block extent
                        depth = 0
                        started = False
                        j = i
                        while j < len(lines) and j < i + 4000:
                            depth += lines[j].count('{') - lines[j].count('}')
                            if '{' in lines[j]:
                                started = True
                            if started and depth <= 0:
                                break
                            j += 1
                        drops.append((i, j))
                    elif am:
                        seen[key] = i
            i += 1
        if drops:
            for a, b in reversed(drops):
                for k in range(a, b + 1):
                    if lines[k].lstrip().startswith('//'):
                        continue
                    lines[k] = '//DUPDEF ' + lines[k]
                n += 1
            if APPLY:
                p.write_text('\n'.join(lines), encoding='utf-8')
    print('duplicate def blocks commented: %d %s'
          % (n, '(written)' if APPLY else '(DRY)'))


if __name__ == '__main__':
    main()
