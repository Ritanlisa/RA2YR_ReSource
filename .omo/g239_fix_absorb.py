#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""G42.53b absorption repair: for each alias emitted by g238, ensure the
tree hpp is included and the class is truly inside namespace ra2::game;
otherwise revert the alias to the original struct (from git HEAD)."""
import io
import glob
import re
import os
import subprocess
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
APPLY = '--apply' in sys.argv
ALIAS = re.compile(r'// G42\.53 absorbed: e4 flat struct removed -- '
                   r'single truth is ::ra2::game::(\w+)\n'
                   r'namespace gamemd \{ using \1 = ::ra2::game::\1; \}')


def tree_site(cls):
    for tp in glob.glob(str(ROOT / 'src/**/*.hpp'), recursive=True):
        if '/e4/' in tp or 'csp_canon' in tp or '_generated' in tp:
            continue
        tt = io.open(tp, encoding='utf-8', errors='replace').read()
        bm = re.search(r'\b(?:class|struct)\s+' + cls + r'\b[^;{]*\{', tt)
        if bm:
            # namespace context: nearest preceding namespace open
            pre = tt[:bm.start()]
            ns = re.findall(r'namespace\s+([\w:]+)\s*\{', pre)
            return tp, ns[-1] if ns else ''
    return None, None


stats = Counter()
for p in sorted(glob.glob(str(ROOT / 'src/e4/classes/*_e4.hpp'))):
    cls = os.path.basename(p)[:-7]
    t = io.open(p, encoding='utf-8', errors='replace').read()
    m = ALIAS.search(t)
    if not m:
        continue
    tp, ns = tree_site(cls)
    ok = False
    inc = None
    if tp and ns == 'ra2::game':
        rel = tp.replace(str(ROOT / 'src') + os.sep, '').replace(os.sep, '/')
        inc = rel
        if ('#include "%s"' % rel) in t:
            ok = True
        else:
            ok = True if APPLY else True
    if ok and APPLY and inc and ('#include "%s"' % inc) not in t:
        # insert include at the top include region
        lines = t.split('\n')
        idx = 0
        for i, l in enumerate(lines[:60]):
            if l.startswith('#include'):
                idx = i + 1
        lines.insert(idx, '#include "%s"  // G42.53b tree truth' % inc)
        t = '\n'.join(lines)
        io.open(p, 'w', encoding='utf-8', errors='surrogateescape',
                newline='').write(t)
        stats['include-added'] += 1
    elif not ok:
        # revert from git
        if APPLY:
            r = subprocess.run(['git', 'show',
                                'HEAD:src/e4/classes/%s_e4.hpp' % cls],
                               capture_output=True)
            if r.returncode == 0:
                io.open(p, 'wb').write(r.stdout)
                stats['reverted'] += 1
            else:
                stats['revert-fail'] += 1
        else:
            stats['would-revert'] += 1
print(dict(stats), '(APPLY)' if APPLY else '(DRYRUN)')
