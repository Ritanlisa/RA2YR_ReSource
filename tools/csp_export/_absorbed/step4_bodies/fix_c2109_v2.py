#!/usr/bin/env python3
"""G42.29i: C2109 site-deref v2 -- member-sub + g138 re-run + float.

Wave-25 only rewrote bare `NAME[N]` subscripts of scalar GLOBALS. The g138
population splits (agent-F):
  member-sub 461  `this->Name[48]`, `aP0->Damage[0]` -- member declared
                  scalar in its e4 hpp; the C2109 itself proves scalar-in-
                  receiver-class, so wrapping is safe without class
                  resolution:  `recv->X[N]` -> `(&recv->X)[N]`
                  (stride = declared member type; value-identical)
  global re-run 166  (wave-25 ran on g133; corpus has since regenerated)
  float global 1     widen scalar family to float/double

Usage: [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
# MUST run on the FRESHEST census: wave-29d supplied some members as arrays
# (wrapping those would break the new array stride) and later waves shifted
# cpp line numbers -- stale-census line addressing is unsafe here.
CEN = ROOT / '.omo/tu_errors_g139.json'
if not CEN.exists():
    CEN = ROOT / '.omo/tu_errors_g138.json'
    print('WARNING: g139 census absent, falling back to g138 -- line'
          ' addresses may be stale')
HOMES = [ROOT / 'src/e4/e4_globals.hpp',
         ROOT / 'src/e4/e4_globals_decls.hpp',
         ROOT / 'src/core/ida_globals.h']

INT_TYPE = re.compile(r'^extern\s+(?:unsigned\s+)?'
                      r'(?:int|long|short|char|float|double|__int64)\s+'
                      r'([A-Za-z_]\w*)\s*;')
scal = set()
for home in HOMES:
    if not home.exists():
        continue
    for ln in home.read_text(encoding='utf-8', errors='replace').split('\n'):
        m = INT_TYPE.match(ln.strip())
        if m:
            scal.add(m.group(1))
print('scalar int/fp-family globals indexed:', len(scal))

census = json.load(open(CEN, encoding='utf-8', errors='replace'))
sites = {}
for tu, el in census.items():
    for e in el:
        if 'error C2109' not in e:
            continue
        sm = re.match(r'^(.+?)\((\d+)\):', e)
        if not sm:
            continue
        p, li = sm.group(1), int(sm.group(2)) - 1
        sites.setdefault((p, li), 0)
        sites[(p, li)] += 1
print('C2109 site-lines:', len(sites), 'errors:', sum(sites.values()))

# member forms: `recv->NAME[` and `this.NAME[` -- any member name; the
# error line itself proves the member is scalar in the receiver's class.
MEMB_SUB = re.compile(r'([A-Za-z_]\w*(?:\([^()]*\))?)'
                      r'((?:->|\.)[A-Za-z_]\w*)\s*\[')
GLOB_SUB = re.compile(r'\b([A-Za-z_]\w*)\s*\[')

n_memb = n_glob = 0
by_file = {}
for (p, li) in sites:
    by_file.setdefault(p, []).append(li)

for p, lis in by_file.items():
    try:
        with open(p, 'r', encoding='utf-8', errors='replace', newline='') as f:
            lines = f.read().splitlines(keepends=True)
    except OSError:
        continue
    touched = False
    for li in lis:
        if li >= len(lines):
            continue
        line = lines[li]
        # member subscript wrap: recv->X[ -> (&recv->X)[
        def wrap_m(m):
            global n_memb
            n_memb += 1
            return '(&%s%s)[' % (m.group(1), m.group(2))
        line = MEMB_SUB.sub(wrap_m, line, count=0)
        # bare global subscript (scalar globals only)
        def wrap_g(m):
            global n_glob
            if m.group(1) in scal:
                n_glob += 1
                return '(&%s)[' % m.group(1)
            return m.group(0)
        line = GLOB_SUB.sub(wrap_g, line, count=0)
        if line != lines[li]:
            lines[li] = line
            touched = True
    if touched and APPLY:
        with open(p, 'w', encoding='utf-8', errors='replace', newline='') as f:
            f.write(''.join(lines))

print('member-subscripts wrapped: %d, global-subscripts wrapped: %d %s'
      % (n_memb, n_glob, '(written)' if APPLY else '(DRY)'))
