#!/usr/bin/env python3
"""Rewrite IDA backtick vtable refs and emit legal symbols.

Bodies landed from Hex-Rays reference vtables as `Cls::`vftable'` — not C++.
This rewrites every occurrence to `Cls_vftable` (gamemd namespace) and
generates:
  src/core/ida_vtables.h  — extern declarations (pulled in by ida_compat.h)
  src/core/ida_vtables.cpp— zero-initialized definitions

INTERIM FIDELITY NOTE: the definitions are zero-filled placeholders; the
real .rdata vtable images are a later pipeline stage. Compile/link-correct,
not yet byte-faithful.

Idempotent: reruns re-mine the tree and rewrite the generated files.

Usage: python tools/csp_export/gen_vtable_symbols.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv

VT_RE = re.compile(r"\b([A-Za-z_][\w<>\s\\*,:,]*?)::`vftable'")


def flat_name(raw):
    """DynamicVectorClass<Cell> -> DynamicVectorClass_Cell"""
    n = raw.replace('::', '_')
    n = re.sub(r'<\s*', '_', n)
    n = re.sub(r'\s*>', '', n)
    n = re.sub(r'[^A-Za-z0-9_]', '_', n)
    return n


names = {}
for p in sorted(SRC.rglob('*.cpp')):
    if '_generated' in str(p):
        continue
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    found = set(VT_RE.findall(txt))
    if not found:
        continue
    for f in found:
        names.setdefault(flat_name(f), f)
    if APPLY:
        def _sub(m):
            return '(void*)&' + flat_name(m.group(1)) + '_vftable'
        txt = VT_RE.sub(_sub, txt)
        # collapse any doubled casts from earlier passes
        txt = txt.replace('(void*)&(void*)&', '(void*)&')
        p.write_bytes(txt.encode('latin-1', errors='replace'))

hdr = ['// GENERATED vtable symbol externs (gen_vtable_symbols.py).',
       '// Interim: zero-filled definitions, see ida_vtables.cpp.',
       '#pragma once', '', 'namespace gamemd {', '']
for n in sorted(names):
    hdr.append('extern void* %s_vftable[1];' % n)
hdr += ['', '} // namespace gamemd', '']
cpp = ['// GENERATED vtable symbol definitions (gen_vtable_symbols.py).',
       '// INTERIM FIDELITY GAP: zero images; real .rdata vtables are a',
       '// later pipeline stage. Referenced as opaque addresses only.',
       '#include "ida_vtables.h"', '', 'namespace gamemd {', '']
for n in sorted(names):
    cpp.append('void* %s_vftable[1] = { nullptr };' % n)
cpp += ['', '} // namespace gamemd', '']
if APPLY:
    (SRC / 'core' / 'ida_vtables.h').write_text('\n'.join(hdr), encoding='utf-8')
    (SRC / 'core' / 'ida_vtables.cpp').write_text('\n'.join(cpp),
                                                  encoding='utf-8')
print(f'vtable symbols: {len(names)}; files rewritten')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')




# ---- pass 2: cast-annotate plain vftable refs landed by earlier runs ----
n2 = 0
for p in sorted(SRC.rglob('*.cpp')):
    if '_generated' in str(p):
        continue
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    orig = txt
    txt = re.sub(
        r'[*]this(\s*)=(\s*)&(?:[(]void[*][*]&\s*)?([A-Za-z_]\w*_vftable)\b[)]?;?',
        r'((void**)this)[0] = (void*)&\3;', txt)
    txt = re.sub(
        r'&(?![(])(?=\s*[A-Za-z_]\w*_vftable)',
        '(void*)&', txt)
    txt = txt.replace('(void*)&(void*)&', '(void*)&')
    if txt != orig:
        n2 += 1
        if APPLY:
            p.write_bytes(txt.encode('latin-1', errors='replace'))
print(f'vftable ref casts: {n2} files')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
