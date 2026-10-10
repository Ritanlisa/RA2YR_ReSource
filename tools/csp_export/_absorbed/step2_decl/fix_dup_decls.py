#!/usr/bin/env python3
"""Collapse EXACT-duplicate member decl lines in e4 flat headers.

Several log-driven fixers rewrite decls independently; when two of them
touch the same method, identical `Ret Name(params);  // marker` lines
pile up (C2535). A run of >=2 byte-identical decl lines inside a
class/struct body keeps the FIRST and comments out the rest.

Scope: src/e4/classes/*.hpp. Idempotent.

Usage: python tools/csp_export/fix_dup_decls.py [--apply]
"""
import glob
import re
import sys

APPLY = '--apply' in sys.argv
DECL = re.compile(r'^(\s*)(.+;\s*(?://.*)?)$')
total = 0
files = 0
for hp in sorted(glob.glob('src/e4/classes/*.hpp')):
    lines = open(hp, encoding='utf-8', errors='replace').read().split('\n')
    out = list(lines)
    changed = False
    seen = {}
    for i, ln in enumerate(lines):
        m = DECL.match(ln)
        if not m:
            continue
        s = ln.strip()
        code = s.split('//')[0].rstrip()
        if not code.endswith(';') or s.startswith('//') or \
                s.startswith('#') or '{' in code or '}' in code \
                or '(' not in code:
            continue
        key = code
        if key in seen:
            out[i] = m.group(1) + '// dup-decl: ' + s
            changed = True
            total += 1
        else:
            seen[key] = i
    if changed:
        files += 1
        if APPLY:
            open(hp, 'w', encoding='utf-8', newline='').write('\n'.join(out))
print('files:', files, 'dup collapsed:', total)
if not APPLY:
    print('(dry run -- pass --apply)')
