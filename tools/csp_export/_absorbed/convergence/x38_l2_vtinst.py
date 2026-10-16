#!/usr/bin/env python3
"""X38 L2 — qmark-vtable-install elision (X11 channel extension).

User ruling 2026-10-13 (decisions.md X11): explicit vtable-pointer stores are
illegal; elide with an identity-preserving marker comment. The X11 mass
round covered `vfptr =` / `vtableN =` / `*(T*)this = vt` spellings; the
qmark spellings (`RECV.? = &vt_X;` — unnamed member slot 0 rendered by the
emitter without a name) were outside its LHS vocabulary. This fixer extends
the same ruling to the qmark spelling.

Guards:
  G1 RHS = &vt_<Name> / vt_<Name> / &off_<HEX> where off-symbol resolves to
     a known vtable (reuse _vtelide VAL vocabulary conservatively: only
     &vt_* accepted here — off_* NOT accepted without binary verify).
  G2 LHS = RECV.? with RECV a single-line C expression; `?` is the last
     member token (the unnamed slot-0).
  G3 whole-line statement (only `RECV.? = RHS;` plus a trailing /*0xADDR*/
     anchor comment); multi-statement lines are NOT touched (fail-loud).
  G4 the /*0xADDR*/ anchor comment is preserved verbatim in the marker
     (L236: anchors are load-bearing for reconciliation).

Rewrite: whole line -> `/* X11: vtable install elided (qmark slot, RHS vt_X) * /  /*0xADDR* /`
Idempotence by construction (marker contains no `.? =` shape).

Usage: python x38_l2_vtinst.py            # dry run
       python x38_l2_vtinst.py --apply
"""
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv

RX = re.compile(
    r'^(?P<lead>\s*)(?P<recv>[A-Za-z_][\w\[\]\.\->\s\*&\(\)]*?'
    r'(?:\.|->)\?)\s*=\s*&?(?P<vt>vt_[A-Za-z_]\w*)\s*;'
    r'(?P<anchor>\s*/\*0x[0-9A-Fa-f]{6}\*/)?\s*$')


def main():
    stats = Counter()
    per_file = {}
    for p in sorted(SRC.rglob('*.cpp')):
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        hits = []
        for i, ln in enumerate(lines):
            m = RX.match(ln)
            if not m:
                continue
            recv = m.group('recv').strip()
            # G2: recv must not end with an operator (dangling), and must be
            # a single token chain (no unbalanced parens)
            if recv.count('(') != recv.count(')'):
                stats['unbalanced-recv'] += 1
                continue
            hits.append((i, m))
        if hits:
            per_file[p] = hits
            stats['sites'] += len(hits)

    print('qmark-vtable-install sites:', stats['sites'])
    for k, v in stats.most_common():
        print(' ', k, v)
    n = 0
    for p, hits in sorted(per_file.items()):
        for i, m in hits:
            if n < 14:
                print(f'  {p.relative_to(ROOT)}:{i+1}: recv={m.group("recv").strip()[:44]!r} vt={m.group("vt")}')
            n += 1
    if n > 14:
        print(f'  ... and {n-14} more')

    if not APPLY:
        print('DRY RUN (use --apply)')
        return

    n_lines = 0
    for p, hits in sorted(per_file.items()):
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        for i, m in hits:
            anchor = (m.group('anchor') or '').strip()
            vt = m.group('vt')
            marker = (f'/* X11: vtable install elided (qmark slot, RHS {vt}) */'
                      + (('  ' + anchor) if anchor else ''))
            lines[i] = m.group('lead') + marker
            n_lines += 1
        p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
    print(f'APPLIED: {n_lines} lines in {len(per_file)} files')


if __name__ == '__main__':
    main()
