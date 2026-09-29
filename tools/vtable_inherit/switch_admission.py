#!/usr/bin/env python3
"""Per-class e4 switchover admission gate (risk-2 killer).

For one family chain the driver:
  1. STAGE  — generate the signature-aware hierarchy declarations into a
              staging header, compile standalone, run the slot comparator.
  2. GATE   — ALL SLOT-PERFECT required. Any mismatch -> family untouched,
              appended to the quarantine ledger (.omo/vtable_quarantine.md).
  3. APPLY  — only on pass, produce the tree work order for the family:
                - flat-header `vtableN` data-member lines removed
                - hand-written vftable install lines removed from e4 bodies
              Each file is backed up (.bak) and the work order is logged;
              --apply writes, default is dry-run.

The gate is fail-closed: staging failures, comparator mismatches, or
missing prerequisites leave the tree byte-identical.

Usage:
  python tools/vtable_inherit/switch_admission.py --family CDFileClass [--apply]
"""
import re
import shutil
import subprocess
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[1]
sys.path.insert(0, str(HERE))

from gen_pilot import family_truth                                # noqa: E402

CL = (r'C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools'
      r'\VC\Tools\MSVC\14.44.35207\bin\Hostx64\x86\cl.exe')
QUAR = ROOT / '.omo' / 'vtable_quarantine.md'
ORDER = ROOT / '.omo' / 'vtable_workorder_%s.md'
APPLY = '--apply' in sys.argv

INSTALL_LINE = re.compile(
    r'^.*&\w+_vftable\s*;.*$|'
    r'^.*= ?\(unsigned int\)\(\(void ?\*\)&\w+_vftable\).*$')


def run(cmd, cwd=ROOT):
    return subprocess.run(cmd, capture_output=True, text=True,
                          encoding='utf-8', errors='replace', cwd=str(cwd))


def gate(leaf, regen=True):
    """STAGE + GATE. Returns (ok, detail)."""
    if regen:
        r = run([sys.executable, str(HERE / 'gen_pilot_sigs.py'),
                 '--family', leaf])
        if r.returncode != 0:
            return False, 'stage-gen failed: %s' % r.stderr[:200]
    rc = run([CL, '/c', '/nologo', '/Zl',
              'pilot_%s_sigs.cpp' % leaf.lower(),
              '/Fo:pilot_%s_sigs.obj' % leaf.lower()], cwd=str(HERE))
    if rc.returncode != 0:
        return False, 'stage-compile failed: %s' % (rc.stdout + rc.stderr)[-300:]
    cmp_r = run([sys.executable, str(HERE / 'compare_pilot.py'),
                 '--family', leaf, '--sigs'])
    ok = 'ALL SLOT-PERFECT' in cmp_r.stdout
    return ok, cmp_r.stdout.strip().split('\n')[-1]


def workorder(leaf):
    """tree-side switch work order for the family (list of edits)"""
    chain, slots = family_truth(leaf)
    edits = []          # (path, kind, line_no, content)
    for cls in chain:
        hp = ROOT / 'src' / 'e4' / 'classes' / ('%s_e4.hpp' % cls)
        if not hp.exists():
            continue
        lines = hp.read_text(encoding='latin-1',
                             errors='replace').split('\n')
        for i, l in enumerate(lines):
            if re.match(r'^\s*(?:void\*|unsigned int)\s+vtable\d+\s*;', l):
                edits.append((hp, 'del-member', i + 1, l.strip()))
    # install lines in every e4 cpp that mentions the family's vftables
    vf = re.compile(r'\b(%s)_vftable\b' % '|'.join(chain))
    for p in sorted((ROOT / 'src' / 'e4').glob('*.cpp')):
        txt = p.read_text(encoding='latin-1', errors='replace')
        if not vf.search(txt):
            continue
        for i, l in enumerate(txt.split('\n')):
            if vf.search(l) and INSTALL_LINE.match(l):
                edits.append((p, 'del-install', i + 1, l.strip()[:90]))
    return edits


def main():
    leaf = 'CDFileClass'
    if '--family' in sys.argv:
        leaf = sys.argv[sys.argv.index('--family') + 1]
    ok, detail = gate(leaf, regen='--no-regen' not in sys.argv)
    print('[GATE] %s: %s' % (leaf, detail))
    if not ok:
        with open(QUAR, 'a', encoding='utf-8') as f:
            f.write('- %s: %s\n' % (leaf, detail))
        print('[QUARANTINE] %s 记入 %s，树零改动' % (leaf, QUAR.name))
        return 1
    edits = workorder(leaf)
    rep = ['# vtable switchover work order: %s' % leaf,
           'gate: PASS (%s)' % detail, '']
    for p, kind, ln, content in edits:
        rep.append('- %s:%d [%s] %s' % (p.relative_to(ROOT), ln, kind,
                                        content))
    (ROOT / '.omo' / ('vtable_workorder_%s.md' % leaf)).write_text(
        '\n'.join(rep), encoding='utf-8')
    print('[WORKORDER] %d edits -> .omo/vtable_workorder_%s.md'
          % (len(edits), leaf))
    if APPLY:
        # fail-closed: writing the tree requires the hierarchy header to be
        # LANDED for the family (e4 flat headers replaced by inheritance
        # declarations). Deleting members/installs without that landing
        # leaves a half-switched, uncompilable tree.
        landed = ROOT / 'src' / 'csp_canon' / 'vtable_classes' / \
            ('%s.hpp' % leaf)
        if not landed.exists():
            print('[REFUSE] 继承头未落地 (%s)——拒绝写盘。'
                  '工单已留存，生产切换需先落地继承头。' % landed.name)
            return 2
        by_file = {}
        for p, kind, ln, _ in edits:
            by_file.setdefault(p, set()).add(ln)
        for p, lns in by_file.items():
            bak = p.with_suffix(p.suffix + '.bak')
            shutil.copy(p, bak)
            lines = p.read_text(encoding='latin-1',
                                errors='replace').split('\n')
            out = [l for i, l in enumerate(lines, 1) if i not in lns]
            p.write_bytes('\n'.join(out).encode('latin-1',
                                                errors='replace'))
            print('  applied %s (-%d lines, backup %s)'
                  % (p.relative_to(ROOT), len(lns), bak.name))
    else:
        print('DRY RUN (use --apply to write)')
    return 0


sys.exit(main())
