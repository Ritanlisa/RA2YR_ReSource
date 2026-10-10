#!/usr/bin/env python3
"""G42.29b: hoist late/duplicated global-header includes to the top block.

Earlier include-supply waves inserted `#include "e4/e4_globals_decls.hpp"`
at (or duplicated at) the file tail -- after the defs that reference the
globals (tag.cpp:372/373 while users sit at lines 109-184). Hoist ONE copy
into the top include block, drop the duplicates.

Only targets legacy-TU-safe headers (e4_globals_decls / e4_globals /
ida_globals): hoisting those cannot trigger cross-universe C2011 by
design (externs only).

Usage: [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
TUS = [
    'src/core/load_options.cpp',
    'src/e4/e4_static_stubs.cpp',
    'src/misc/audio.cpp',
    'src/system/convert_class.cpp',
    'src/system/factory.cpp',
    'src/team/tag.cpp',
]
INC = re.compile(r'^(\s*)#include\s+"([^"]*(?:e4_globals|ida_globals)[^"]*)"\s*$')
TOPINC = re.compile(r'^\s*#include')

for rel in TUS:
    p = ROOT / rel
    lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    hits = [(i, m.group(2)) for i, ln in enumerate(lines)
            for m in [INC.match(ln)] if m]
    if not hits:
        print('%-40s no late/dup global include' % rel)
        continue
    keep = hits[0][1]
    # last top-block include line (before any code)
    top_end = 0
    for i, ln in enumerate(lines[:60]):
        if TOPINC.match(ln):
            top_end = i + 1
    # remove ALL hits, insert single copy after top include block
    for i, _ in reversed(hits):
        del lines[i]
    # top_end may shift if hits were inside first 60 lines
    shift = sum(1 for i, _ in hits if i < top_end)
    lines.insert(top_end - shift, '#include "%s"' % keep)
    if APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8')
    print('%-40s hoisted %s (was %d copies)' % (rel, keep, len(hits)))
print('APPLIED' if APPLY else '(dry -- pass --apply)')
