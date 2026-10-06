# -*- coding: utf-8 -*-
"""G41.46: C2065 type-name supply for the e4 face.

Cache-verbatim bodies reference class names the e4 TU closure never
declared (VectorClass, HashTable, RectangleStruct, ...). The vN C2065
mass is collateral: `VectorClass *v7;` fails on the TYPE, so every later
v7 use errors too. Supply = class forward declarations appended to
e4_protos.h (included by every e4 TU); `class X;` is idempotent with a
later full definition in the same TU.

G57a2 CAVEAT: the idempotence claim is FALSE when the later full
definition is a TEMPLATE (C2989 "class template already declared as
non-class template" -- the 2026-10-05 G42.55 tree-truth bridges pulled
core/vector.hpp into 21 bridged e4 TUs and this supply block poisoned
VectorClass/DynamicVectorClass there, ~1.9K-error cascade). Template-
family names are therefore emitted under
#ifndef GAMEMD_E4_VECTOR_TREE_TRUTH, which .omo/g57a2_vector_family_fix.py
defines at the top of every e4 TU whose closure contains both
core/vector.hpp and a flat vector decl site.

Input: .omo/g119_c2065_names.json (use-form classification).
Skips names already declared in e4_protos.h / e4_globals.hpp.
Dry-run default; --apply writes.
"""
import json, re, os, sys, collections

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
ROOT = os.path.abspath(ROOT)
APPLY = '--apply' in sys.argv
PROTOS = os.path.join(ROOT, 'src', 'e4', 'e4_protos.h')

CLS = json.load(open(os.path.join(ROOT, '.omo', 'g119_c2065_names.json')))

# e4 class heads -> tag kind (class vs struct) so forward decls match
tag_of = {}
for fn in os.listdir(os.path.join(ROOT, 'src', 'e4', 'classes')):
    if fn.endswith('.hpp'):
        try:
            for ln in open(os.path.join(ROOT, 'src', 'e4', 'classes', fn),
                           encoding='utf-8', errors='replace'):
                m = re.match(r'\s*(class|struct)\s+([A-Za-z_]\w*)', ln)
                if m:
                    tag_of[m.group(2)] = m.group(1)
        except OSError:
            pass

existing = set()
for src in (PROTOS, os.path.join(ROOT, 'src', 'e4', 'e4_globals.hpp'),
            os.path.join(ROOT, 'src', 'e4', 'e4_globals_decls.hpp')):
    if os.path.exists(src):
        for ln in open(src, encoding='utf-8', errors='replace'):
            for m in re.finditer(r'\b([A-Za-z_]\w*)\b', ln):
                existing.add(m.group(1))

fwd = []
skipped = collections.Counter()
for name in sorted(CLS, key=lambda n: -CLS[n]['count']):
    r = CLS[name]
    if r['kind'] != 'ptr':
        skipped['not-ptr-form'] += r['count']
        continue
    if not re.match(r'^[A-Z][A-Za-z0-9_]*$', name):
        skipped['not-class-shaped'] += r['count']
        continue
    if name in existing:
        skipped['already-declared'] += r['count']
        continue
    if name.startswith('IID_') or name.endswith('_vftable') or             name.startswith('vt_'):
        skipped['data-symbol-shaped'] += r['count']
        continue
    fwd.append(name)

print('class fwd decls to supply:', len(fwd))
print(' ', ', '.join(fwd[:40]))
for k, v in skipped.most_common():
    print(' ', v, k)

if not APPLY:
    print('\n(dry run; no files written)')
    sys.exit(0)

block = ['',
         '// G41.46 C2065 supply: class forward declarations for names the',
         '// cache-typed bodies reference but the TU closure never declared.',
         '// Idempotent with full definitions included later in any TU.']
# G57a2: tree template families must yield to core/vector.hpp templates
# in bridged TUs (see module docstring caveat).
VEC_TMPL = {'VectorClass', 'DynamicVectorClass', 'TypeList'}
for name in fwd:
    if name in VEC_TMPL:
        block.append('#ifndef GAMEMD_E4_VECTOR_TREE_TRUTH')
        block.append('%s %s;' % (tag_of.get(name, 'class'), name))
        block.append('#endif // G57a2 tree template truth')
    else:
        block.append('%s %s;' % (tag_of.get(name, 'class'), name))
txt = open(PROTOS, encoding='utf-8', errors='replace').read()
if 'G41.46 C2065 supply' not in txt:
    open(PROTOS, 'a', encoding='utf-8', newline='\n').write(
        '\n'.join(block) + '\n')
    print('appended %d forward decls to e4_protos.h' % len(fwd))
else:
    print('supply block already present; nothing appended')
