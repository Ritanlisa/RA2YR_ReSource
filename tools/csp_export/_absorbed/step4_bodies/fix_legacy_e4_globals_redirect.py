#!/usr/bin/env python3
"""Redirect legacy (non-e4) TUs from e4_globals.hpp to e4_globals_decls.hpp.

Legacy TUs must not ingest the e4 class universe (C2011 collision with
tree headers). e4 TUs keep the full header.

Idempotent. Usage: python tools/csp_export/fix_legacy_e4_globals_redirect.py
"""
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
SRC = ROOT / 'src'

n_files = 0
for p in sorted(SRC.rglob('*.cpp')):
    s = str(p)
    if 'e4' in s or '_gap2' in s and 'e4' in s:
        pass
    if re.search(r'src[/\\]e4[/\\]', s):
        continue  # e4 TUs keep the full header
    try:
        txt = p.read_text(encoding='utf-8', errors='replace')
    except OSError:
        continue
    if 'e4/e4_globals.hpp' not in txt:
        continue
    new = txt.replace('#include "e4/e4_globals.hpp"',
                      '#include "e4/e4_globals_decls.hpp"')
    if new != txt:
        p.write_text(new, encoding='utf-8', errors='replace')
        n_files += 1
        print('redirected', p.relative_to(ROOT))
print('files:', n_files)
