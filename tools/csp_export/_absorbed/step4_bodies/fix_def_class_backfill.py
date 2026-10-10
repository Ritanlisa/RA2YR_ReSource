#!/usr/bin/env python3
"""A1/#50: backfill owner-class qualifiers onto corpus def lines.

Root cause: gap2/e4 def-line emitters dropped the `Cls::` qualifier of
thiscall members (issue #50), leaving bodies that reference `this` inside
free functions (C2355). CSP manifest HAS the owner class (13,970 entries).

For every def line `RET Name(params...)` at namespace scope with no `::`
in the function name:
  1. disambiguate by the `// 0xADDR` anchor comment within 4 lines above
     (corpus convention); fall back to unique short-name match
  2. verify manifest says cls and the function is thiscall (signals)
  3. rewrite to `RET Cls::Name(params...)` dropping the leading this-ish
     param (first param of pointer/void* type named a1/this/p0 when the
     signals param count == def param count), and rewrite that param name
     to `this` inside the function body span

Usage: python tools/csp_export/fix_def_class_backfill.py [--apply]
"""
import json
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv

manifest = json.load(open(ROOT / 'anchors' / 'csp_canon_manifest.json'))
cls_by_addr = {}
for addr, v in manifest.items():
    if v.get('cls'):
        try:
            cls_by_addr[int(addr, 16)] = (v['cls'], v.get('name'))
        except ValueError:
            pass

signals = json.load(open(ROOT / 'signals.json'))
cc_by_addr = {}
for addr, sym in signals['symbols'].items():
    if isinstance(sym, dict) and sym.get('kind') == 'function':
        try:
            cc_by_addr[int(addr, 16)] = (sym.get('call_convention'),
                                         sym.get('params'))
        except ValueError:
            pass

# short-name -> [(addr, cls)] for unique-name fallback
by_short = defaultdict(list)
for a, (cls, name) in cls_by_addr.items():
    if name and '::' in name:
        by_short[name.split('::')[-1]].append((a, cls))

ANCHOR = re.compile(r'//\s*(0x[0-9A-Fa-f]+)')
DEF = re.compile(
    r'^([A-Za-z_][\w\s\*:<>,&]*?)\b([A-Za-z_]\w*)\s*\(([^;{]*)\)\s*\{?\s*$')

n_fix = 0
n_skip = 0
n_amb = 0
files = 0
for p in sorted((ROOT / 'src').rglob('*.cpp')):
    s = str(p).replace('\\', '/').lower()
    if not ('src/e4/' in s or 'src/_gap2/' in s or
            re.search(r'(gap2_defs|subs_\d|_bodies)', s)):
        continue
    lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    changed = False
    for i, line in enumerate(lines):
        m = DEF.match(line.rstrip('\r\n'))
        if not m:
            continue
        ret_t, fname, params = m.group(1).strip(), m.group(2), m.group(3)
        if '::' in fname or not ret_t:
            continue
        # GUARD (r13/r14 lesson): any `IDENT::IDENT(` on the line means the
        # def is ALREADY member-qualified (qualifier sits in the type head,
        # e.g. `void _DVC::ClearBuffer(`) -- re-qualifying produces the
        # `Cls1:: Cls2::Name` double-qualification corruption
        if re.search(r'\b\w+::\s*\w+\s*\(', line):
            continue
        # resolve address anchor above
        addr = None
        for j in range(i - 1, max(0, i - 5), -1):
            am = ANCHOR.search(lines[j])
            if am:
                addr = int(am.group(1), 16)
                break
        entry = None
        if addr is not None and addr in cls_by_addr:
            entry = cls_by_addr[addr]
        elif len(by_short.get(fname, ())) == 1:
            a, cls = by_short[fname][0]
            entry = (cls, None)
        elif len(by_short.get(fname, ())) > 1:
            n_amb += 1
            continue
        else:
            n_skip += 1
            continue
        cls, mname = entry
        # thiscall check (signals cc) when address known
        if addr is not None:
            cc = cc_by_addr.get(addr, (None, None))[0]
            if cc not in (None, 'thiscall'):
                n_skip += 1
                continue
        # params: drop leading this-ish param
        pl = [t.strip() for t in params.split(',')] if params.strip() else []
        this_name = None
        if pl:
            p0 = pl[0]
            pm = re.match(r'^(void\s*\*|[A-Za-z_]\w*\s*\*+)\s*'
                          r'([A-Za-z_]\w*)$', p0)
            if pm and re.match(r'^(a1|this|p0|aP0|aP1)$', pm.group(2)):
                this_name = pm.group(2)
                pl = pl[1:]
        new_def = '%s %s::%s(%s)' % (ret_t, cls, fname,
                                     ', '.join(pl))
        if line.rstrip('\r\n').endswith('{'):
            new_def += ' {'
        lines[i] = new_def
        # rewrite residual this-param references inside the body span
        if this_name:
            depth = 0
            started = False
            for j in range(i, min(len(lines), i + 4000)):
                ln = lines[j]
                for ch in ln:
                    if ch == '{':
                        depth += 1
                        started = True
                    elif ch == '}':
                        depth -= 1
                if j > i and started and depth <= 0:
                    break
                if j == i:
                    continue
                lines[j] = re.sub(r'\b%s\b' % re.escape(this_name), 'this',
                                  lines[j])
        n_fix += 1
        changed = True
    if changed:
        files += 1
        if APPLY:
            p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')

print(f'defs qualified: {n_fix} in {files} files '
      f'(skipped-no-anchor/name: {n_skip}, ambiguous: {n_amb})')
if not APPLY:
    print('(dry run -- pass --apply)')
