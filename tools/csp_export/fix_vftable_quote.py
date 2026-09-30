#!/usr/bin/env python3
"""Collapse MSVC-mangled vftable literals to declared symbols.

Cache decompilation renders the vftable as `` Cls::`vftable' `` (backtick
quoted) — C2018 (0x60)/C2001/C2015. Rewrite to `vt_Cls` and emit
`extern unsigned char vt_Cls[4];` for any not-yet-declared name into
src/e4/e4_globals_decls.hpp. The address is taken from
anchors/rtti_vtable_class.json (binary truth) when the class is present,
so the emitted extern carries the `// data:` comment the resolver reads.

Usage: python tools/csp_export/fix_vftable_quote.py [--apply]
"""
import glob
import json
import os
import re
import sys

APPLY = '--apply' in sys.argv
SITE = re.compile(r'([A-Za-z_][\w:<>,\s\*&]*)::`vftable\'')

decls_h = 'src/e4/e4_globals_decls.hpp'

# existing declarations
have = set()
if os.path.exists(decls_h):
    have = set(re.findall(r'\bvt_(\w+)\s*\[', open(decls_h, encoding='utf-8',
                                                  errors='replace').read()))

# vtable address truth (rtti_vtable_class: addr -> class rtti name)
vt_addr = {}
try:
    rvc = json.load(open('anchors/rtti_vtable_class.json', encoding='utf-8'))
    for addr, ent in rvc.get('vtables', {}).items():
        nm = ent.get('class') if isinstance(ent, dict) else None
        if isinstance(nm, str):
            vt_addr.setdefault(nm, int(addr, 16))
except Exception:
    pass

stats = {'sites': 0, 'externs': 0, 'with-addr': 0}
files_changed = 0
needed = {}
for p in (glob.glob('src/e4/*.cpp') + glob.glob('src/_gap2/*.cpp')
          + glob.glob('src/system/gap2*.cpp')):
    raw = open(p, encoding='utf-8', errors='replace').read()
    def _rep(m):
        stats['sites'] += 1
        cls = m.group(1)
        # template instances (`VectorClass<int>`) collapse to the sanitized
        # base name: vt_VectorClass_int
        cls = re.sub(r'<[^<>]*>', '', cls)
        cls = re.sub(r'[^A-Za-z0-9_]', '', cls)
        needed.setdefault(cls, None)
        return 'vt_' + cls
    new = SITE.sub(_rep, raw)
    if new != raw:
        files_changed += 1
        if APPLY:
            open(p, 'w', encoding='utf-8', newline='').write(new)

missing = sorted(c for c in needed if c not in have)
if missing:
    txt = open(decls_h, encoding='utf-8', errors='replace').read() if \
        os.path.exists(decls_h) else \
        '// generated externs (fix_vftable_quote)\n#pragma once\n'
    add = []
    for c in missing:
        a = vt_addr.get(c)
        if a is not None:
            add.append('extern unsigned char vt_%s[4];  // data: 0x%X' % (c, a))
            stats['with-addr'] += 1
        else:
            add.append('extern unsigned char vt_%s[4];' % c)
        stats['externs'] += 1
    txt = txt.rstrip('\n') + '\n' + '\n'.join(add) + '\n'
    if APPLY:
        open(decls_h, 'w', encoding='utf-8', newline='').write(txt)
print('files changed:', files_changed)
print(stats)
if not APPLY:
    print('(dry run -- pass --apply)')
