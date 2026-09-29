#!/usr/bin/env python3
"""Fix C2440 return statements in e4 bodies.

`return this->__pad_0;` — til-rendered dtors/QueryInterfaces whose asm is
`mov eax, esi` (return the object). Rewrite to `return this;` when the
enclosing def's return type is a pointer, else cast.

Also two small assignment forms:
  - `v47[0] = &off_7E1668;` (array of int <- address)  -> (unsigned int) cast
  - `dword_X = aP1;` (int global <- pointer param)     -> (unsigned int) cast

Usage: python tools/csp_export/fix_e4_returns.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

SEC_HEAD = re.compile(r'^//\s*0x([0-9A-Fa-f]+)\s*$')
DEF_LINE = re.compile(
    r'^\s*(?P<ret>[\w:<>,\s\*&]+?)\s*[A-Za-z_]\w*(?:::[A-Za-z_]\w*)*\s*\(')
RETURN_PAD0 = re.compile(r'^(\s*)return\s+this->__pad_0\s*;\s*(/\*0x[0-9A-Fa-f]+\*/)?\s*$')
ARR_ADDR = re.compile(
    r'^(\s*)([A-Za-z_]\w*\[\d+\]|dword_[A-Za-z0-9_]+|unk_[A-Za-z0-9_]+)'
    r'\s*=\s*(&[A-Za-z_]\w*(?:\[\d+\])?)'
    r'\s*;\s*(/\*0x[0-9A-Fa-f]+\*/)?\s*$')

stats = {}


def bump(k, n=1):
    stats[k] = stats.get(k, 0) + n


tot = 0
for p in sorted((ROOT / 'src' / 'e4').glob('*.cpp')):
    txt = p.read_text(encoding='latin-1', errors='replace')
    lines = txt.split('\n')
    out = list(lines)
    heads = [(i, int(SEC_HEAD.match(l).group(1), 16))
             for i, l in enumerate(lines) if SEC_HEAD.match(l)]
    changed = False
    for si, (hl, addr) in enumerate(heads):
        end = heads[si + 1][0] if si + 1 < len(heads) else len(lines)
        ret = None
        for l in lines[hl + 1:hl + 8]:
            md = DEF_LINE.match(l)
            if md:
                ret = md.group('ret').strip()
                break
        ret_is_ptr = bool(ret) and (ret.endswith('*') or ret.startswith('void'))
        for j in range(hl + 1, end):
            m = RETURN_PAD0.match(out[j])
            if m:
                tail = (' ' + m.group(2)) if m.group(2) else ''
                if ret_is_ptr:
                    out[j] = m.group(1) + 'return this;' + tail
                    bump('pad0->this')
                else:
                    out[j] = (m.group(1) + 'return (unsigned int)this;'
                              + tail)
                    bump('pad0->cast')
                changed = True
                continue
            m2 = ARR_ADDR.match(out[j])
            if m2:
                out[j] = ('%s%s = (unsigned int)%s;%s'
                          % (m2.group(1), m2.group(2), m2.group(3),
                             (' ' + m2.group(4)) if m2.group(4) else ''))
                bump('arr-addr-cast')
                changed = True
    if changed:
        tot += 1
        if APPLY:
            p.write_bytes('\n'.join(out).encode('latin-1', errors='replace'))

print('files changed: %d' % tot)
for k, v in sorted(stats.items(), key=lambda x: -x[1]):
    print('%6d  %s' % (v, k))
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
