#!/usr/bin/env python3
"""Supply class declarations for e4-universe member definitions.

Every out-of-line member definition `Cls::Mth(...)` in src/e4/*.cpp needs
Cls to be a COMPLETE type in its TU. This tool:

  a) harvests the member-def inventory (class -> [(ret, method, params)])
     from all e4 cpps,
  b) for classes without e4/classes/<Cls>_e4.hpp: emits a FLAT header
     (vfptr + csp_canon_members layout + harvested method decls),
  c) for every cpp defining members of Cls: ensures
     `#include "e4/classes/<Cls>_e4.hpp"` is present.

Existing headers keep their content (upgrade_e4_flat_classes.py enriches
them with members); includes are added idempotently.

Usage: python tools/csp_export/supply_e4_class_decls.py [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
E4 = ROOT / 'src' / 'e4'
E4C = E4 / 'classes'
APPLY = '--apply' in sys.argv

mtab = json.loads((ROOT / 'anchors' / 'csp_canon_members.json')
                  .read_text(encoding='utf-8'))

PRIM = {'unsigned int', 'int', 'unsigned short', 'short', 'unsigned char',
        'signed char', 'char', 'bool', 'float', 'double', 'unsigned long',
        'long', 'unsigned long long', 'long long', 'void'}

DEF_RE = re.compile(
    r'^(?P<ret>[A-Za-z_][\w\s\*<>,:&]*?)\s+'
    r'(?P<cls>[A-Za-z_]\w*)::(?P<rest>~?[A-Za-z_]\w*\s*\(.*\))\s*$',
    re.M)

# ---- harvest def inventory ----
defs = {}          # cls -> set(decl lines)
def_files = {}     # cls -> set(cpp paths)
for p in sorted(E4.glob('*.cpp')):
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    for m in DEF_RE.finditer(txt):
        cls = m.group('cls')
        defs.setdefault(cls, set()).add(
            '    %s %s;' % (m.group('ret').strip(), m.group('rest').strip()))
        def_files.setdefault(cls, set()).add(p)

print(f'member-def classes: {len(defs)}')


def cpptype(t, size):
    t = (t or '').strip()
    if not t:
        return 'unsigned int' if size >= 4 else 'unsigned char'
    m = re.match(r'^(.*?)\s*\*+$', t)
    if m:
        base = m.group(1).strip()
        if base in PRIM or base in mtab:
            return t
        return 'void' + t[len(m.group(1)):]
    if t in PRIM:
        return t
    return 'ARRAY:%d' % max(1, size or 1)


created = included = 0
for cls in sorted(defs):
    hp = E4C / ('%s_e4.hpp' % cls)
    if not hp.exists():
        ent = mtab.get(cls) or {}
        taken = set()
        body = ['    void* vfptr;']
        used = {'vfptr'}
        for off in sorted(ent.get('members', {}), key=int):
            mm = ent['members'][off]
            nm = mm.get('name') or ('q%03X' % int(off))
            if nm in used or nm.startswith('__pad'):
                continue
            used.add(nm)
            ty = cpptype(mm.get('type'), mm.get('size') or 4)
            if ty.startswith('ARRAY:'):
                body.append('    char %s[%s];  // 0x%X'
                            % (nm, ty[6:], int(off)))
            else:
                body.append('    %s %s;  // 0x%X' % (ty, nm, int(off)))
        for d in sorted(defs[cls]):
            nm = re.search(r'\s(~?\w+)\s*\(', d)
            if nm and nm.group(1) not in used:
                body.append(d)
                used.add(nm.group(1))
        txt = ('// GENERATED flat e4 class (mechanical, supply_e4_class_decls)\n'
               '#pragma once\n\n#include "e4/classes/_fwd_e4.hpp"\n\n'
               'namespace gamemd {\n\nstruct %s {\n%s\n};\n\n'
               '} // namespace gamemd\n' % (cls, '\n'.join(body)))
        created += 1
        if APPLY:
            E4C.mkdir(exist_ok=True)
            hp.write_text(txt, encoding='utf-8')
    inc = '#include "e4/classes/%s_e4.hpp"' % cls
    for p in def_files[cls]:
        try:
            txt = p.read_text(encoding='latin-1', errors='replace')
        except OSError:
            continue
        if inc in txt:
            continue
        lines = txt.split('\n')
        at = 0
        for i, ln in enumerate(lines):
            if ln.startswith('#include'):
                at = i + 1
        lines.insert(at, inc)
        included += 1
        if APPLY:
            p.write_bytes('\n'.join(lines).encode('latin-1',
                                                  errors='replace'))

print(f'headers created: {created}, includes added: {included}')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
