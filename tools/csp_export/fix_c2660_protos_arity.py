#!/usr/bin/env python3
"""G41.30: extend e4_protos.h FREE-function declarations to max observed
call arity (sibling of fix_c2660_max_arity.py which covers class members).

`extern RET NAME(params);` with param count < max(C2660 K_i) gets
`, void *aN = 0` filler params (defaults keep lower-arity sites compiling).
Skips CRT/Win32 names and non-e4_protos decls. Idempotent.

Usage: python tools/csp_export/fix_c2660_protos_arity.py <log> [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
PROTO = ROOT / 'src' / 'e4' / 'e4_protos.h'
Q = chr(0x201C) + chr(0x201D)
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

SKIP = re.compile(r'^(operator|~|memcpy|strcpy|sprintf|printf|strncpy|qmemcpy'
                  r'|memmove|memset|abs|labs|atoi|atol|strcpy|strcat|strlen)$')

want = {}
for ln in Path(LOG).read_text(errors='replace').splitlines():
    m = re.search(r'error C2660: [' + Q + r']([^' + Q + r']+)[' + Q + r']: 函数不接受 (\d+) 个参数', ln)
    if not m:
        continue
    name = m.group(1).split('::')[-1]
    if SKIP.match(name):
        continue
    want[name] = max(want.get(name, 0), int(m.group(2)))
print('callees wanting arity:', len(want))

DECL = re.compile(r'^(extern\s+[A-Za-z_][\w:<>,\s\*&]*?[\s\*])([A-Za-z_]\w*)\(([^;()]*)\)\s*;')


def count_params(ps):
    ps = ps.strip()
    if not ps or ps == 'void':
        return 0
    return len(re.split(r',(?![^()]*\))', ps))


n = 0
lines = PROTO.read_text(encoding='utf-8', errors='replace').split('\n')
for i, l in enumerate(lines):
    dm = DECL.match(l)
    if not dm or dm.group(2) not in want:
        continue
    k = want[dm.group(2)]
    have = count_params(dm.group(3))
    if have >= k:
        continue
    ps = dm.group(3).rstrip()
    add = ', '.join('void *a%d = 0' % (j + 1)
                    for j in range(have, k))
    newps = (ps + ', ' if ps and ps != 'void' else '') + add
    lines[i] = l[:dm.start(3) - dm.start()] + newps + l[dm.end(3) - dm.start():]
    n += 1
print('free decls extended:', n, '(written)' if APPLY else '(DRY)')
if APPLY and n:
    PROTO.write_text('\n'.join(lines), encoding='utf-8')
