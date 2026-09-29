#!/usr/bin/env python3
"""Free functions in e4 bodies that use `this` -> add this-like param.

Materialized vtable-thunk bodies were emitted as free functions but keep
`this->` references (C2065: this undeclared). The snapshot name line gives
the owning class (`CaptureManagerClass::vt[03]`). If the function symbol is
not referenced by name anywhere in the tree (vtable targets are only
address-taken), arity can change safely: insert a leading `Cls *aP0`
parameter and rewrite `this` -> `aP0` in the body.

Usage: python tools/csp_export/fix_free_this.py [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
SNAP = ROOT / 'decompile-results' / 'full_export'

SEC = re.compile(r'^//\s*0x([0-9A-Fa-f]+)\s*$')
DEF = re.compile(r'^\s*(?P<ret>[\w:<>,\s\*&]+?)\s*\b(?P<name>[A-Za-z_]\w*)\s*\((?P<params>[^)]*)\)\s*$')
SNAP_NAME = re.compile(r'^//\s*([A-Za-z_]\w*)::([A-Za-z_]\w*)')

idx = json.loads((SNAP / 'index.json').read_text(encoding='utf-8'))
snap_by_addr = {}
for k, v in idx.items():
    try:
        snap_by_addr.setdefault(int(k, 16), v['file'])
    except ValueError:
        pass

# global symbol reference census (excluding definitions in e4 cpps is not
# needed: definitions don't count as callers, but address-taken refs are
# inside e4 files too -- count ALL textual refs, then subtract the def line)
all_text = {}
for p in sorted((ROOT / 'src').rglob('*.cpp')):
    try:
        all_text[str(p)] = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        pass


def symbol_refs(name):
    n = 0
    pat = re.compile(r'\b%s\b' % re.escape(name))
    for f, t in all_text.items():
        n += len(pat.findall(t))
    return n


tot = 0
for p in sorted((ROOT / 'src' / 'e4').glob('*.cpp')):
    lines = p.read_text(encoding='latin-1', errors='replace').split('\n')
    heads = [(i, int(SEC.match(l).group(1), 16)) for i, l in enumerate(lines)
             if SEC.match(l)]
    changed = False
    for si, (hl, addr) in enumerate(heads):
        end = heads[si + 1][0] if si + 1 < len(heads) else len(lines)
        if not any(re.search(r'\bthis->', x) for x in lines[hl:end]):
            continue
        # member def? -> fine already
        is_member = any(DEF.match(l) and '::' in l for l in lines[hl + 1:hl + 8])
        if is_member:
            continue
        # class from snapshot name line
        f = snap_by_addr.get(addr)
        cls = None
        if f:
            sp = SNAP / f
            if sp.exists():
                for ln in sp.read_text(encoding='latin-1', errors='replace').split('\n'):
                    if ln.startswith('// ---- IDA disasm'):
                        break
                    m = SNAP_NAME.match(ln)
                    if m:
                        cls = m.group(1)
                        break
        if not cls:
            print('  no-class %s@%x' % (p.name, addr))
            continue
        # def line
        dl = None
        for i in range(hl + 1, hl + 8):
            md = DEF.match(lines[i])
            if md and md.group('name') and not md.group('name').endswith('::'):
                if '(' in lines[i] and '::' not in lines[i].split('(')[0]:
                    dl = (i, md)
                    break
        if dl is None:
            print('  no-def %s@%x' % (p.name, addr))
            continue
        i, md = dl
        fname = md.group('name')
        refs = symbol_refs(fname)
        if refs > 1:  # the definition itself is 1 occurrence
            print('  referenced(%d) %s %s@%x -- skip' % (refs, fname, p.name, addr))
            continue
        params = md.group('params').strip()
        new_params = ('%s *aP0, %s' % (cls, params)) if params else ('%s *aP0' % cls)
        newline = re.sub(r'\(%s\)' % re.escape(params) if params else r'\(\s*\)',
                         '(%s)' % new_params, lines[i], count=1)
        if newline == lines[i]:
            print('  no-sub %s@%x' % (p.name, addr))
            continue
        lines[i] = newline
        for j in range(i + 1, end):
            lines[j] = re.sub(r'\bthis\s*->\s*', 'aP0->', lines[j])
            lines[j] = re.sub(r'\(this\)', '(aP0)', lines[j])
            lines[j] = re.sub(r'\bthis\b', 'aP0', lines[j])
        changed = True
        tot += 1
        print('  fixed %s %s@%x cls=%s' % (p.name, fname, addr, cls))
    if changed and APPLY:
        p.write_bytes('\n'.join(lines).encode('latin-1', errors='replace'))

print('sections fixed:', tot)
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
