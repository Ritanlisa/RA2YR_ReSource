#!/usr/bin/env python3
"""Undo fn-ptr parameter name duplication: `int (* a4)(int) a4` -> `int (* a4)(int)`.

A param-dedupe/arity fixer treated the function-pointer form `(*NAME)(...)`
as a nameless param and appended a second name token after the declarator,
producing `(*a3)(void) a3` -- a syntax error (C2146/C2059).

Fix: for every fn-ptr declarator `(* X)(params)` followed by the SAME
identifier X, drop the duplicate. Idempotent (post-fix there is no
declarator-name pair left). Dry run by default; --apply writes.

Usage: python tools/csp_export/fix_fnptr_param_dupe.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

PAT = re.compile(r'(\(\s*\*\s*(\w+)\s*\)\s*\([^()]*\))\s+\2\b')

n = 0
files = 0
for p in sorted(ROOT.glob('src/**/*.[ch]pp')):
    if 'build' in p.parts or not p.is_file():
        continue
    try:
        text = p.read_text(encoding='utf-8', errors='replace')
    except OSError:
        continue
    new, k = PAT.subn(r'\1', text)
    if k:
        n += k
        files += 1
        print('  %-52s %d site(s)' % (p.relative_to(ROOT), k))
        if APPLY:
            p.write_text(new, encoding='utf-8')
print('%s: %d duplicated fn-ptr name(s) fixed across %d file(s)'
      % ('APPLIED' if APPLY else 'DRYRUN', n, files))
