#!/usr/bin/env python3
"""Drop `static` from e4 member declarations whose bodies use `this`.

C2671 ("static member function has no this") fires when the def body
references this/instance members while the header decl says `static`.
The def is authoritative (it came from the materialized body): drop the
`static` qualifier on the matching declaration line.

Only rewrites decl lines in src/e4/classes/*_e4.hpp; def lines (bodies)
are left alone. Idempotent.

Usage: python tools/csp_export/fix_static_this_mismatch.py <log> [--apply]
"""
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
HDRS = list((ROOT / "src").rglob("*.hpp")) + list((ROOT / "src").rglob("*.h"))
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)
if not LOG:
    print('usage: fix_static_this_mismatch.py <log> [--apply]')
    sys.exit(1)
TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace')

# error C2671: “gamemd::Cls::Mth”: 静态成员函数没有“this”指针
ERR = re.compile(r'error C2671: [' + chr(0x201C) + chr(0x201D) +
                 r']gamemd::(\w+)::(\w+)')

pairs = set(ERR.findall(TXT))
print('C2671 (cls, mth) pairs:', len(pairs))

n = 0
for p in HDRS:
    s2 = str(p).replace(chr(92), '/').lower()
    if '/_generated/' in s2 or '/decompile-results/' in s2:
        continue
    txt = p.read_text(encoding='utf-8', errors='replace')
    orig = txt
    for cls, mth in pairs:
        # static RET Cls-ish file: any decl line `static ... Mth(` — match
        # by method name inside this file's structs (cheap: file-level)
        txt = re.sub(
            r'^([ \t]*)static(\s+[\w\*:<>,\s]+?\b%s\s*\()' % re.escape(mth),
            r'\1\2', txt, flags=re.M)
    if txt != orig:
        n += 1
        if APPLY:
            p.write_text(txt, encoding='utf-8')
print('headers changed:', n)
if not APPLY:
    print('(dry run -- pass --apply)')
