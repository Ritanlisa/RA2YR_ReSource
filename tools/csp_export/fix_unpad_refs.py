#!/usr/bin/env python3
"""Expand self-named pad references into raw byte arithmetic (legacy TUs).

`X->__pad_N` / `X->qXXX` / `X->Y_field_0xN` are byte-offset aliases an old
fixer invented. Legacy class headers cannot declare them (real layouts),
so rewrite the REFERENCE: `((unsigned char *)(X) + 0xN)` — a byte pointer
that composes with surrounding derefs/subscripts and events as a member
access at byte offset N on both extractor sides.

Scope: legacy corpus dirs (never e4/_gap2 — those have flat headers).
Idempotent (the output contains no pad names).
Usage: python tools/csp_export/fix_unpad_refs.py [--apply]
"""
import glob
import re
import sys

APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

# undeclared pad names = C2039 names minus anything ANY legacy header
# declares (declared pads may be typed arrays — rewriting those would
# change index semantics)
import os
UND = set()
if LOG and os.path.exists(LOG):
    for ln in open(LOG, encoding='utf-8', errors='replace'):
        if 'C2039' not in ln:
            continue
        m = re.search(r'C2039: "(\w+)": ', ln)
        if m:
            UND.add(m.group(1))
declared = set()
for root, dirs, fns in os.walk('src'):
    if 'e4' in root or 'csp_canon' in root or 'build' in root:
        continue
    for fn in fns:
        if not (fn.endswith('.hpp') or fn.endswith('.h')):
            continue
        try:
            t = open(os.path.join(root, fn), encoding='utf-8',
                     errors='replace').read()
        except OSError:
            continue
        for nm in UND:
            if re.search(r'\b%s\b' % re.escape(nm), t):
                declared.add(nm)
UND -= declared
print('undeclared pad names:', len(UND))

PAD = re.compile(
    r'\b([A-Za-z_]\w*)'
    r'->\s*'
    r'(' + '|'.join(re.escape(n) for n in sorted(UND)) + r')'
    r'\b') if UND else None


def _rep(m):
    recv, padname = m.group(1), m.group(2)
    mm = re.search(r'(?:__pad_|_field_0x|q)([0-9A-Fa-f]+)$', padname)
    if not mm:
        return m.group(0)
    return '((unsigned char *)(%s) + 0x%s)' % (recv, mm.group(1))


stats = {'expanded': 0}
files_changed = 0
DIRS = ['src/core', 'src/structure', 'src/object', 'src/ui', 'src/misc',
        'src/entity', 'src/house', 'src/network', 'src/team', 'src/render',
        'src/type', 'src/app', 'src/system']
files = []
for d in DIRS:
    files += glob.glob(d + '/**/*.cpp', recursive=True)
for p in sorted(set(files)):
    if 'gap2' in p:
        continue
    raw = open(p, encoding='utf-8', errors='replace').read()
    new = PAD.sub(_rep, raw)
    n = len(PAD.findall(raw))
    if new != raw:
        files_changed += 1
        stats['expanded'] += n
        if APPLY:
            open(p, 'w', encoding='utf-8', newline='').write(new)
print('files:', files_changed)
print(stats)
if not APPLY:
    print('(dry run -- pass --apply)')
