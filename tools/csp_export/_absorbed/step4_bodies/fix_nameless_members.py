#!/usr/bin/env python3
"""G41.32: repair nameless member declarations `void* ;  // 0xADDR` --
a retype pass consumed the member name. Name is regenerated from the
offset comment: `void* p1B5;`.

Also appends log-driven missing generated-name members to classes
(C2039: m_1/m_C on LoadOptions) at class end.

Usage:
  python tools/csp_export/fix_nameless_members.py [--repair-nameless]
                                                  [--supply <log>] [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
REPAIR = '--repair-nameless' in sys.argv
SUPPLY = '--supply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

n1 = 0
if REPAIR:
    PAT = re.compile(r'^(\s*[A-Za-z_][\w\s\*]*?\*)\s*;\s*(?://.*0x([0-9A-Fa-f]+).*)?$')
    for p in sorted(ROOT.glob('src/**/*.hp*')):
        if 'build' in p.parts or not p.is_file():
            continue
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        changed = False
        for i, l in enumerate(lines):
            m = PAT.match(l)
            if not m:
                continue
            off = m.group(2)
            nm = 'p%s' % off if off else 'unnamed_%d' % i
            lines[i] = '%s %s;  // regen name' % (m.group(1), nm)
            n1 += 1
            changed = True
        if changed and APPLY:
            p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
    print('nameless members repaired:', n1)

n2 = 0
if SUPPLY and LOG:
    Q = chr(0x201C) + chr(0x201D)
    QT = '["' + Q + ']'
    MEM = re.compile(r'error C2039: ' + QT + r'([^"' + Q + r']+)' + QT +
                     r': 不是 ' + QT + r'?([^"' + Q + r']*)' + QT + r'?' +
                     r'\s*的成员')
    GEN = re.compile(r'^(m_[0-9A-Fa-f]+|__pad_[0-9A-Fa-f]+|[A-Za-z]\w*_field_0x[0-9A-Fa-f]+|q[0-9A-F]{3}|u8?_[0-9A-F]+|u32_[0-9A-F]+|p[0-9A-F]{2,})$')
    want = {}
    LN = re.compile(r'D:[^:]*RA2YR_ReSource[\\/](src[\\/][^(]+)[\\/]?[(](\d+),')
    for ln in Path(LOG).read_text(encoding='utf-8', errors='replace').splitlines():
        m = MEM.search(ln)
        if m and GEN.match(m.group(1)):
            want.setdefault(m.group(2).split('::')[-1], set()).add(m.group(1))
    print('classes wanting members:', {k: sorted(v)[:4] for k, v in list(want.items())[:4]})
    for p in sorted(ROOT.glob('src/**/*.hp*')):
        if 'build' in p.parts or not p.is_file():
            continue
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        cls = None
        changed = False
        for i, l in enumerate(lines):
            sm = re.match(r'\s*struct\s+(\w+)\s*\{', l)
            cm = re.match(r'\s*class\s+(\w+)', l)
            if sm:
                cls = sm.group(1)
            elif cm:
                cls = cm.group(1)
            elif l.strip() == '};' and cls in want:
                for nm in sorted(want[cls]):
                    lines.insert(i, '    unsigned int *%s;  // supplied (C2039)' % nm)
                    i += 1
                    n2 += 1
                changed = True
                cls = None
        if changed and APPLY:
            p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
    print('members supplied:', n2)
