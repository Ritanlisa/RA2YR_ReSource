#!/usr/bin/env python3
"""G41.31: legalize def heads whose FIRST PARAM is named `this` (the CSP
thiscall rendering wrote the receiver as an explicit param).

`int __thiscall UnitClass::CheckForNearbyEnemies(int *this)` -- `this` is
reserved; the def body's `this` references mean that param. Rename the
param to `a1` and rewrite the body's `this` tokens in the same def span.

Param-type normalizations:
  `T this`            -> `T a1`
  `T *this`           -> `T *a1`
  `T *(void**)this`   -> `void *a1`   (nested garbage form)

Usage: python tools/csp_export/fix_this_param_defs.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

HEAD = re.compile(
    r'^(?P<ret>[A-Za-z_][\w:<>,\s\*&]*?[\s\*])(?P<qual>(?:[A-Za-z_]\w*::)+~?[A-Za-z_]\w*)'
    r'\((?P<params>[^;{}]*?)\)\s*(?P<tail>\{?.*)$')
THIS_PARAM = re.compile(
    r'^(?:[A-Za-z_][\w:<>,\s\*&]*?)?\s*\*?\s*(?:\(void\s*\*\*\))?\s*this$')


def main():
    n = 0
    for p in sorted(ROOT.glob('src/**/*.cpp')):
        if 'build' in p.parts or not p.is_file():
            continue
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        changed = False
        for i, l in enumerate(lines):
            s = l.strip()
            if 'this' not in s or '(' not in s:
                continue
            hm = HEAD.match(s)
            if not hm:
                continue
            params = hm.group('params').strip()
            if not params:
                continue
            first = params.split(',')[0].strip()
            if not re.search(r'\bthis\b', first):
                continue
            # normalize the first param's type
            if '(void' in first:
                newfirst = 'void *a1'
            elif '*' in first:
                ty = first[:first.index('*', first.rindex('*')) + 1].strip()
                newfirst = ty + 'a1'
            else:
                m2 = re.match(r'^(.*?)\bthis$', first)
                if not m2:
                    continue  # `this` mid-expression: not a param name
                ty = (m2.group(1) or 'int ').strip()
                newfirst = '%s a1' % ty
            rest = params.split(',')[1:]
            newparams = ','.join([newfirst] + [x.strip() for x in rest])
            newhead = '%s %s(%s) %s' % (hm.group('ret').strip(), hm.group('qual'),
                                        newparams, hm.group('tail').strip())
            lines[i] = l[:len(l) - len(s)] + newhead
            n += 1
            changed = True
            # rewrite this -> a1 until the def's matching close brace
            depth = 0
            started = False
            j = i
            while j < len(lines) and j < i + 3000:
                for ch in lines[j]:
                    if ch == '{':
                        depth += 1
                        started = True
                    elif ch == '}':
                        depth -= 1
                if j > i and started and depth <= 0:
                    break
                if j > i:
                    seg = re.sub(r'\bthis\b', 'a1', lines[j])
                    if seg != lines[j]:
                        lines[j] = seg
                j += 1
        if changed and APPLY:
            p.write_text('\n'.join(lines), encoding='utf-8')
    print('this-param defs legalized: %d %s' % (n, '(written)' if APPLY else '(DRY)'))


if __name__ == '__main__':
    main()
