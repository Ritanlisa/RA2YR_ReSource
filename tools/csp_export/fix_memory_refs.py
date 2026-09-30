#!/usr/bin/env python3
"""Collapse IDA flat-memory pseudo-refs into addressable externs.

`MEMORY[0x87F8E4].__pad_5568[20508]` is IDA's flat-memory rendering; the
byte offset INSIDE the cell is part of the site's own arithmetic, and the
verifier's IDA side events it as a plain global access at the bracket
address. Rewrite each site to a generated extern:

    MEMORY[0xA](.member([i])?)*   ->   g_abs_A

and emit `extern unsigned char g_abs_A[1];  // data: 0xA` into
src/e4/e4_globals_decls.hpp (resolver reads the data comment, so the C++
side events READ/WRITE(global,0xA) symmetric with IDA).

Usage: python tools/csp_export/fix_memory_refs.py [--apply]
"""
import glob
import os
import re
import sys

APPLY = '--apply' in sys.argv
SITE = re.compile(
    r'MEMORY\s*\[\s*0x([0-9A-Fa-f]+)\s*\]'
    r'(?:\.\w+(?:\[[^\]\[]*\])?)*')

stats = {}
files_changed = 0
addrs = set()
files = (glob.glob('src/e4/*.cpp') + glob.glob('src/_gap2/*.cpp')
         + glob.glob('src/system/gap2*.cpp'))
for p in files:
    raw = open(p, encoding='utf-8', errors='replace').read()
    # already-collapsed g_abs_X references count too (their externs may
    # have been wiped by a battery regen of e4_globals_decls.hpp)
    for rm in re.finditer(r'\bg_abs_([0-9A-Fa-f]+)\b', raw):
        addrs.add(int(rm.group(1), 16))
    def _rep(m):
        a = int(m.group(1), 16)
        addrs.add(a)
        return 'g_abs_%X' % a
    new = SITE.sub(_rep, raw)
    if new != raw:
        files_changed += 1
        stats['sites'] = stats.get('sites', 0) + len(SITE.findall(raw))
        if APPLY:
            open(p, 'w', encoding='utf-8', newline='').write(new)

# supply externs (idempotent block) — OWN header: gen_e4_globals_decls.py
# regenerates e4_globals_decls.hpp every battery round and would wipe
# foreign blocks; e4_abs_decls.hpp is ours alone.
DECL_H = 'src/e4/e4_abs_decls.hpp'
GH = 'src/e4/e4_globals.hpp'
if addrs:
    txt = open(DECL_H, encoding='utf-8', errors='replace').read() if \
        os.path.exists(DECL_H) else \
        '// generated: flat-memory externs (fix_memory_refs)\n#pragma once\n'
    have = set(re.findall(r'g_abs_([0-9A-Fa-f]+)', txt))
    add = [a for a in addrs if '%X' % a not in have]
    if add:
        block = ''.join(
            'extern unsigned char g_abs_%X[1];  // data: 0x%X\n' % (a, a)
            for a in sorted(add))
        txt = txt.rstrip('\n') + '\n' + block
        if APPLY:
            open(DECL_H, 'w', encoding='utf-8', newline='').write(txt)
        stats['externs'] = len(add)
    # ensure the TU-visible chain includes our header
    gtxt = open(GH, encoding='utf-8', errors='replace').read() if \
        os.path.exists(GH) else ''
    if APPLY and gtxt and 'e4_abs_decls.hpp' not in gtxt:
        gtxt = gtxt.replace('#include <cstdint>',
                            '#include <cstdint>\n#include "e4/e4_abs_decls.hpp"',
                            1)
        open(GH, 'w', encoding='utf-8', newline='').write(gtxt)
print('files changed:', files_changed)
print(stats)
if not APPLY:
    print('(dry run -- pass --apply)')
