#!/usr/bin/env python3
"""One-shot universe migration for the redo pipeline.

Three mechanical repairs:

1. STRIP  — remove `// --- e4 declarations (BEGIN/END) ---` blocks from all
   NON-e4 headers. Those injections targeted ra2::game / template classes in
   the tree universe, but their function bodies live in the isolated
   namespace-gamemd e4 universe (src/e4/*.cpp) — the decls are unreachable
   from there and poison every TU that includes the tree header
   (vector.hpp alone: 4,277 errors — decls inside `template class VectorClass`).

2. NSFIX  — e4 bucket cpps: `namespace ra2 { namespace game {` def wrappers
   -> `namespace gamemd {` (their classes are e4-universe classes now).

3. FLAT   — defs whose class name collides with a TREE TEMPLATE
   (VectorClass/DynamicVectorClass/TypeList/HashTable/LinkedList/Node)
   cannot resolve in namespace gamemd (C2955). Rename class refs to
   <Name>_flat in e4 cpps + emit e4/classes/<Name>_flat_e4.hpp carriers
   (methods harvested from the def lines, members from csp_canon_members).

Usage: python tools/csp_export/migrate_e4_universe.py [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
E4 = SRC / 'e4'
APPLY = '--apply' in sys.argv

BLOCK = re.compile(r'^// --- e4 declarations \(BEGIN\) ---\n.*?'
                   r'^// --- e4 declarations \(END\) ---\n', re.S | re.M)

FLAT_CLASSES = {'VectorClass': 'VectorClass_flat',
                'DynamicVectorClass': 'DynamicVectorClass_flat',
                'TypeList': 'TypeList_flat',
                'HashTable': 'HashTable_flat',
                'LinkedList': 'LinkedList_flat',
                'Node': 'Node_flat'}

# ---------------------------------------------------------------- 1. STRIP
strip_files = strip_blocks = 0
for p in sorted(SRC.rglob('*.hpp')):
    s = str(p)
    if (E4 in p.parents) or '_generated' in s or 'csp_canon' in s:
        continue
    try:
        txt = p.read_text(encoding='latin-1')
    except OSError:
        continue
    new, n = BLOCK.subn('', txt)
    if n:
        strip_files += 1
        strip_blocks += n
        if APPLY:
            p.write_bytes(new.encode('latin-1'))

print(f'strip: {strip_blocks} injected blocks from {strip_files} headers')

# ---------------------------------------------------------------- 2+3. E4 CPPs
DEF_RE = re.compile(
    r'^(?P<ret>[A-Za-z_][\w\s\*<>,:&]*?)\s+'
    r'(?P<cls>[A-Za-z_]\w*)::(?P<rest>~?[A-Za-z_]\w*\s*\(.*\))\s*$',
    re.M)

ns_files = 0
flat_defs = {}
for p in sorted(E4.glob('*.cpp')):
    try:
        txt = p.read_text(encoding='latin-1')
    except OSError:
        continue
    orig = txt
    # 2. ra2::game wrappers -> gamemd
    txt = txt.replace('namespace ra2 {\nnamespace game {\n',
                      'namespace gamemd {\n')
    txt = txt.replace('} // namespace game\n} // namespace ra2\n',
                      '} // namespace gamemd\n')
    # 3. template-colliding class refs
    for old, new in FLAT_CLASSES.items():
        txt = re.sub(r'\b%s::' % old, new + '::', txt)
        txt = re.sub(r'\b%s\s*&' % old, new + ' &', txt)   # `Cls &ref` params
        txt = re.sub(r'\b%s\s*\*' % old, new + ' *', txt)
        txt = re.sub(r'\bnew\s+%s\b' % old, 'new ' + new, txt)
    if txt != orig:
        ns_files += 1
        # harvest flat def lines for carrier emission (single-line defs only)
        for m in DEF_RE.finditer(txt):
            cls = m.group('cls')
            if cls.endswith('_flat'):
                flat_defs.setdefault(cls, set()).add(
                    '%s %s;' % (m.group('ret').strip(), m.group('rest').strip()))
        if APPLY:
            p.write_bytes(txt.encode('latin-1', errors='replace'))

print(f'e4 cpp universe fix: {ns_files} files touched')

# ---------------------------------------------------------------- 3b. carriers
mtab = json.loads((ROOT / 'anchors' / 'csp_canon_members.json')
                  .read_text(encoding='utf-8'))
PRIM = {'unsigned int', 'int', 'unsigned short', 'short', 'unsigned char',
        'signed char', 'char', 'bool', 'float', 'double', 'unsigned long',
        'long', 'unsigned long long', 'long long', 'void'}

carriers = 0
for cls, defs in sorted(flat_defs.items()):
    ent = mtab.get(cls[:-len('_flat')]) or {}
    mem = []
    used = set()
    for off in sorted(ent.get('members', {}), key=int):
        mm = ent['members'][off]
        nm = mm.get('name') or ('q%03X' % int(off))
        if nm in used:
            continue
        used.add(nm)
        t = (mm.get('type') or '').strip()
        sz = mm.get('size') or 4
        mm2 = re.match(r'^(.*?)\s*\*+$', t)
        if mm2:
            ty = t if (mm2.group(1).strip() in PRIM or mm2.group(1).strip()
                       in mtab) else 'void*'
        elif t in PRIM:
            ty = t
        else:
            ty = 'unsigned int' if sz >= 4 else 'unsigned char'
        mem.append('    %s %s;  // 0x%X' % (ty, nm, int(off)))
    lines = ['// GENERATED template-collision flat carrier (mechanical).',
             '#pragma once', '', 'namespace gamemd {', '',
             'struct %s {' % cls, '    void* vfptr;']
    lines += mem
    lines += sorted(defs)
    lines += ['};', '', '} // namespace gamemd', '']
    out = E4 / 'classes' / ('%s_e4.hpp' % cls)
    carriers += 1
    if APPLY:
        out.write_text('\n'.join(lines), encoding='utf-8')

print(f'flat carriers emitted: {carriers}')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
