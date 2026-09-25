#!/usr/bin/env python3
"""Fix `Cls::Mth(args)` member-called-as-static sites (C2597).

Root cause: csp_canon_members registered METHOD-CALL names as data members
(`unsigned int RoundToInt;` at a call-site offset), so qualified calls
`Math::RoundToInt(x)` reference a non-static member that is not a function.

Per (cls, mth) group mined from C2597 errors:
  a) if the e4 header carries a same-name DATA MEMBER line -> delete it
     (CSP noise; the real member at that offset stays in mtab for the
     verifier, only the poisoned decl goes)
  b) if an e4 def `RET Cls::Mth(...)` exists -> declare the member with the
     def signature; pointer-ish-first-arg sites are rewritten to
     `(FIRST)->Mth(REST)` (done in a later pass driven by fresh errors)
  c) if NO def exists -> `static double Mth(...);` decl + varargs stub def
     in src/e4/e4_static_stubs.cpp (interim fidelity: returns 0; the tree
     universe carried the same return-0 stubs for these)

Usage: python tools/csp_export/fix_member_static_calls.py <log> [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
E4C = SRC / 'e4' / 'classes'
STUBS = SRC / 'e4' / 'e4_static_stubs.cpp'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace') if LOG else ''
ERR = re.compile(
    r'error C2597: .{0,60}?gamemd::(\w+)::(\w+)')

groups = {}
for m in ERR.finditer(TXT):
    groups.setdefault((m.group(1), m.group(2)), 0)
    groups[(m.group(1), m.group(2))] += 1


def find_def(cls, mth):
    """Return 'RET params' from the e4 def line, or None."""
    pat = re.compile(
        r'^[ \t]*([A-Za-z_][\w\s\*<>,:&:]*?)\s+%s::%s\s*\(([^;{]*)\)'
        % (re.escape(cls), re.escape(mth)), re.M)
    for p in sorted((SRC / 'e4').glob('*.cpp')):
        try:
            txt = p.read_text(encoding='latin-1', errors='replace')
        except OSError:
            continue
        m = pat.search(txt)
        if m:
            return ' '.join(m.group(1).split()), ' '.join(
                m.group(2).split()).replace('gamemd::', '')
    return None


MEMBER_LINE = re.compile(
    r'^[ \t]*(?:static\s+)?[A-Za-z_][\w\s\*<>,:&:]*?\b%s\s*;\s*$')

n_member_removed = n_static = n_member_decl = 0
stubs = []
for (cls, mth) in sorted(groups):
    hp = E4C / ('%s_e4.hpp' % cls)
    if not hp.exists():
        continue
    txt = hp.read_text(encoding='utf-8', errors='replace')
    # a) drop the poisoned data-member decl
    txt2, n = MEMBER_LINE.subn('', txt, count=1) \
        if re.search(MEMBER_LINE.pattern % re.escape(mth), txt, re.M) \
        else (txt, 0)
    txt = txt2
    n_member_removed += n
    d = find_def(cls, mth)
    if d is None:
        # c) static varargs stub
        if ('static double %s(' % mth) not in txt:
            anchor = txt.rfind('};')
            if anchor < 0:
                continue
            txt = (txt[:anchor] + '    static double %s(...);  // C2597 '
                   'interim stub\n' % mth + txt[anchor:])
            stubs.append((cls, mth))
            n_static += 1
    else:
        ret, params = d
        if not re.match(r'^[A-Za-z_][\w\s\*<>,:&]*$', ret):
            ret = 'int'
        if ('%s(%s)' % (mth, params)) not in txt.replace('static ', ''):
            anchor = txt.rfind('};')
            if anchor >= 0:
                txt = (txt[:anchor] + '    %s %s(%s);  // def-aligned\n'
                       % (ret, mth, params) + txt[anchor:])
                n_member_decl += 1
    if APPLY and txt:
        hp.write_text(txt, encoding='utf-8')

# emit stub defs (idempotent by name scan)
stub_txt = ''
if APPLY:
    existing = STUBS.read_text(encoding='utf-8', errors='replace') \
        if STUBS.exists() else ''
    body = ['// GENERATED static-varargs stubs for C2597 no-def methods',
            '// (fix_member_static_calls.py). INTERIM: return 0 — same',
            '// fidelity as the tree-era return-0 stubs these replace.',
            '#include <cstdint>',
            '#include "e4/e4_globals.hpp"',
            '#include "e4/e4_protos.h"',
            '', 'namespace gamemd {', '']
    added = 0
    for (cls, mth) in stubs:
        if ('%s::%s(' % (cls, mth)) in existing:
            continue
        body.append('double %s::%s(...) { return 0; }' % (cls, mth))
        added += 1
    body += ['', '} // namespace gamemd', '']
    if added:
        STUBS.write_text(existing + '\n'.join(body) + '\n', encoding='utf-8')
    stub_txt = '%d stub defs' % added

print(f'C2597 groups: {len(groups)} | member lines removed: '
      f'{n_member_removed} | static stubs: {n_static} ({stub_txt}) | '
      f'def-aligned decls: {n_member_decl}')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
