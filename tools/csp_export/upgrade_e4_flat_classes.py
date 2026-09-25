#!/usr/bin/env python3
"""Upgrade e4/classes/*_e4.hpp minimal classes to FLAT member-complete forms.

Bodies landed by the redo pipeline reference members via the csp_canon
naming universe (Items/Capacity/q010/u32_4/vtableN...), but the E2 minimal
headers only carried `void* vfptr` + method decls -> C2039 en masse.

For every e4 class header this injects the members from
anchors/csp_canon_members.json (flat absolute-offset table) while KEEPING
the existing method decls verbatim. Non-pointer class-typed members degrade
to void*/unsigned when the type name is not a known class (e4 universe is
include-isolated; opaque is compile-correct).

Idempotent: members are injected between BEGIN/END markers; rerun replaces
the marked block.

Usage: python tools/csp_export/upgrade_e4_flat_classes.py [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
E4C = ROOT / 'src' / 'e4' / 'classes'
APPLY = '--apply' in sys.argv

BEGIN = '// --- flat members (BEGIN) ---'
END = '// --- flat members (END) ---'

mtab = json.loads((ROOT / 'anchors' / 'csp_canon_members.json')
                  .read_text(encoding='utf-8'))

PRIM = {'unsigned int', 'int', 'unsigned short', 'short', 'unsigned char',
        'signed char', 'char', 'bool', 'float', 'double',
        'unsigned long', 'long', 'unsigned long long', 'long long', 'void'}

# known class names in the isolated e4 universe: existing header classes +
# members-table keys + fwd declarations. UPPERCASE-only names are Windows
# typedefs (DWORD/LPVOID...) that a `struct X;` would poison.
# fwd_set = exactly what _fwd_e4.hpp declares (single source of truth).
# mtab keys are NOT here: CSP carries template spellings (VectorClass...)
# that are tree-owned and never fwd-declarable in the e4 universe.
fwd_txt = (E4C / '_fwd_e4.hpp').read_text(encoding='utf-8', errors='replace')
fwd_set = {n for n in re.findall(r'struct\s+(\w+)\s*;', fwd_txt)
           if not n.isupper()}
TREE_SPECIAL_FILE = E4C / '_fwd_tree_e4.hpp'


def cpptype(t, size, own_members=()):
    t = (t or '').strip()
    if not t:
        return 'unsigned int' if size >= 4 else 'unsigned char'
    m = re.match(r'^(.*?)\s*\*+$', t)
    if m:
        base = m.group(1).strip()
        if base in own_members and re.match(
                r'^(q[0-9A-F]{3}|u8_|u16_|u32_|u64_|ptr_)', base):
            return 'void' + t[len(m.group(1)):]   # member-name noise (C2327)
        if base in PRIM:
            return t
        if base in fwd_set:
            return t                    # fwd-declared: pointer decl is fine
        return 'void' + t[len(m.group(1)):]
    if t in PRIM:
        return t
    if t in own_members:
        return 'ARRAY:%d' % max(1, size or 1)
    # value member of a class type: completeness can't be guaranteed in the
    # isolated TU graph -> size-faithful char array (name/offset preserved)
    return 'ARRAY:%d' % max(1, size or 1)


tot_cls = tot_mem = tot_skip = 0
for p in sorted(E4C.glob('*_e4.hpp')):
    if p.name.startswith('_'):
        continue
    txt = p.read_text(encoding='utf-8', errors='replace')
    m = re.search(r'struct\s+(\w+)\s*[^;{]*\{', txt)
    if not m:
        continue
    cls = m.group(1)
    ent = mtab.get(cls)
    if not ent or not ent.get('members'):
        continue
    own_members = {(mm.get('name') or '')
                   for mm in ent['members'].values()}
    # ---- struct body region (first `{` at the struct opener .. matching close)
    open_at = m.end() - 1
    depth = 0
    i = open_at
    close_at = None
    while i < len(txt):
        if txt[i] == '{':
            depth += 1
        elif txt[i] == '}':
            depth -= 1
            if depth == 0:
                close_at = i
                break
        i += 1
    if close_at is None:
        continue
    body = txt[open_at + 1:close_at]
    # keep ONLY method-ish lines (contain '(' + ';' comment-anchor); drop old
    # flat-member lines — they are re-derived from the table below
    method_lines = [ln for ln in body.split('\n')
                    if '(' in ln and re.search(r';\s*(//.*)?$', ln)]
    # tree alias pointer spellings in method decls -> void*
    for a in ('CellStruct', 'Point2D', 'CoordStruct', 'RGBClass'):
        method_lines = [re.sub(r'%s\s*([*&])' % a, 'void\1', ln)
                        for ln in method_lines]
    # ---- members from the canon table (sole authority) ----
    used = set(re.findall(r'\b(\w+)\s*\(', '\n'.join(method_lines)))
    lines = []
    seen = set()
    for off in sorted(ent['members'],
                      key=lambda x: int(x, 0)):
        mm = ent['members'][off]
        nm = mm.get('name') or ('q%03X' % int(off))
        if nm in used or nm.startswith('__pad') or nm in seen:
            tot_skip += 1
            continue
        seen.add(nm)
        o = int(off, 0)
        ty = cpptype(mm.get('type'), mm.get('size') or 4, own_members)
        if ty.startswith('ARRAY:'):
            lines.append('    char %s[%s];  // 0x%X' % (nm, ty[6:], o))
        else:
            lines.append('    %s %s;  // 0x%X' % (ty, nm, o))
        tot_mem += 1
    newbody = (BEGIN + '\n' + '\n'.join(lines) + '\n' + END + '\n'
               + '\n'.join(method_lines))
    txt = txt[:open_at + 1] + '\n' + newbody + '\n' + txt[close_at:]
    # fwd declarations for every universe class: pointer members only need
    # incomplete types, so one include makes the member block TU-safe
    if '_fwd_e4.hpp' not in txt:
        txt = txt.replace('#pragma once',
                          '#pragma once\n\n#include "e4/classes/_fwd_e4.hpp"',
                          1)
    tot_cls += 1
    if APPLY:
        p.write_text(txt, encoding='utf-8')

print(f'flat upgrade: {tot_cls} classes, {tot_mem} members, {tot_skip} skipped')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
