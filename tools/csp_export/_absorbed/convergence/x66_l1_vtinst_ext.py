#!/usr/bin/env python3
"""X66 L1 — base-interface + legacy-slot vtable-install elision (X11/X38 channel ext).

Extends the X38 qmark vocabulary (slot `?`) to two measured named-slot families
(P0 tables: .omo/evidence/optimization/x66/X66_P0_TABLES.md):
  T1  RECV.AbstractClass = &vt_X;   — base-interface pseudo-member install
  T2  RECV.vfptrN/vtableN = &vt_X;  — X11 ruling #1 legacy spellings that the
      original mass-round receiver RX missed (local-var/array-elem receivers)

Guards (X38 G1-G4 kept verbatim, G5 added):
  G1 RHS = &vt_<Name> only (off_* NOT accepted — no binary verify here).
  G2 LHS = RECV.<slot> with slot in TIER1|TIER2; RECV is a single-line C
     expression; balanced (G5a) and contains NO '(' (G5 — rejects for-init /
     cast-receiver shapes, fail-loud bank instead of rewrite).
  G3 whole-line statement (store + optional /*0xADDR*/ anchor only).
  G4 anchor comment preserved verbatim in the marker.
  G6 for-init / control-context lines are NEVER rewritten (banked).

Rewrite: whole line -> lead + `/* X11: vtable install elided (<tier> slot, RHS vt_X) * /` + anchor.
Idempotent by construction (marker contains no `= &vt_` shape).

Usage: python x66_l1_vtinst_ext.py            # dry run
       python x66_l1_vtinst_ext.py --apply
"""
import re, sys, os, json
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(HERE))))
SRC = os.path.join(ROOT, 'src')
APPLY = '--apply' in sys.argv
LEDGER = os.path.join(HERE, 'x66_l1_ledger.json')

TIER1 = {'AbstractClass'}
TIER2_RX = re.compile(r'^(vfptr\d*|vtable\d+)$')

RX = re.compile(
    r'^(?P<lead>\s*)(?P<recv>[A-Za-z_][\w\[\]\.\->\s\*&\(\)]*?'
    r'(?:\.|->)(?P<slot>[A-Za-z_]\w*))\s*=\s*&?(?P<vt>vt_[A-Za-z_]\w*)\s*;'
    r'(?P<anchor>\s*/\*0x[0-9A-Fa-f]{6}\*/)?\s*$')


def tier_of(slot):
    if slot in TIER1:
        return 'base-interface'
    if TIER2_RX.match(slot):
        return 'legacy slot spelling'
    return None


def main():
    stats = Counter()
    per_file = {}
    banked = []
    for root, _d, fs in os.walk(SRC):
        for fn in fs:
            if not fn.endswith('.cpp'):
                continue
            p = os.path.join(root, fn)
            try:
                lines = open(p, encoding='utf-8', errors='replace').read().split('\n')
            except OSError:
                continue
            hits = []
            for i, ln in enumerate(lines):
                m = RX.match(ln)
                if not m:
                    continue
                slot = m.group('slot')
                tier = tier_of(slot)
                if not tier:
                    stats['other-slot'] += 1
                    continue
                recv = m.group('recv').strip()
                if recv.count('(') != recv.count(')'):
                    stats['unbalanced-recv'] += 1
                    banked.append([os.path.relpath(p, ROOT), i + 1, 'unbalanced', ln.strip()[:100]])
                    continue
                if '(' in recv:  # G5: cast receiver / for-init head — bank fail-loud
                    stats['paren-recv-banked'] += 1
                    banked.append([os.path.relpath(p, ROOT), i + 1, 'paren-recv', ln.strip()[:100]])
                    continue
                hits.append((i, m, tier))
            if hits:
                per_file[p] = hits
                stats['sites'] += len(hits)
                stats['tier1'] += sum(1 for _, _, t in hits if t == 'base-interface')
                stats['tier2'] += sum(1 for _, _, t in hits if t == 'legacy slot spelling')

    print('sites:', stats['sites'], '| tier1(AbstractClass):', stats['tier1'],
          '| tier2(legacy):', stats['tier2'])
    for k, v in stats.most_common():
        if k not in ('sites', 'tier1', 'tier2'):
            print(' ', k, v)
    if banked:
        print('banked (fail-loud):', len(banked))
        for b in banked[:10]:
            print('  BANK %s:%s %s %s' % tuple(b))
    n = 0
    for p, hits in sorted(per_file.items()):
        for i, m, tier in hits:
            if n < 14:
                print('  %s:%s: [%s] recv=%r vt=%s' % (
                    os.path.relpath(p, ROOT), i + 1, tier,
                    m.group('recv').strip()[:40], m.group('vt')))
            n += 1
    if n > 14:
        print('  ... and %d more' % (n - 14))

    if not APPLY:
        print('DRY RUN (use --apply)')
        json.dump({'stats': dict(stats), 'banked': banked}, open(LEDGER, 'w'), indent=1)
        return

    n_lines = 0
    ledger = []
    for p, hits in sorted(per_file.items()):
        lines = open(p, encoding='utf-8', errors='replace').read().split('\n')
        for i, m, tier in hits:
            anchor = (m.group('anchor') or '').strip()
            vt = m.group('vt')
            marker = ('/* X11: vtable install elided (%s slot, RHS %s) */' % (tier, vt)
                      + (('  ' + anchor) if anchor else ''))
            ledger.append({'file': os.path.relpath(p, ROOT), 'line': i + 1,
                           'tier': tier, 'vt': vt,
                           'before': lines[i].rstrip(), 'after': (m.group('lead') + marker).rstrip()})
            lines[i] = m.group('lead') + marker
            n_lines += 1
        open(p, 'w', encoding='utf-8', errors='replace', newline='').write('\n'.join(lines))
    print('APPLIED: %d lines in %d files' % (n_lines, len(per_file)))
    json.dump({'stats': dict(stats), 'banked': banked, 'applied': ledger},
              open(LEDGER, 'w'), indent=1)


if __name__ == '__main__':
    main()
