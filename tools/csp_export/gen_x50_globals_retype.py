#!/usr/bin/env python3
"""X50 P1/P2 -- named-global + global-atom retype at the decl generators.

Pool: the 6 convertible-now atoms from x50_p0_audit.json (Form A, same-width
scalar unification to `unsigned int`), each with >=2-source binary-true
agreement (demand + anchors/global_types + csp_canon/globals.hpp) and a
clean break gate (0 scalar assigns).

Mechanism: uniform retype across ALL decl universes (x34-L5 precedent --
same atom = same type everywhere prevents cross-universe C2371) + def-file
sync. Fall mechanism: `(unsigned int*)&g_X` becomes an identity (allowed)
once the visible decl is `unsigned int` (checker: identity non-void casts
are allowed, clang_ast_checker._is_upcast).

Usage: python tools/csp_export/gen_x50_globals_retype.py [--apply]
Idempotent: second run = 0 writes.
"""
import json, re, sys, io
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
EV = ROOT / '.omo' / 'evidence' / 'optimization' / 'x50'

# audited pool: atom -> new elem type (all Form A pointee unifications)
ATOM_TYPES = {
    'g_VisibleSurfaceDescriptor': 'unsigned int',
    'g_ScriptActionPool': 'unsigned int',
    'g_MultiplayerPool': 'unsigned int',
    'g_RadarBlipPool': 'unsigned int',
    'g_CellDirectionOffsets': 'unsigned int',
    'g_UnitTooltipState': 'unsigned int',
}

# decl universes (x34 DECL_FILES superset). Render universe EXCLUDED:
# surface.cpp:46 def is a stub-bridge (`= g_VisibleSurfaceDescStub`) --
# retyping decl (shp_blitter.hpp void*) without breaking the stub bridge is
# not possible in this pass; render TUs keep their void* view (documented).
DECL_FILES = [
    'src/core/globals_core.hpp',
    'src/csp_canon/globals.hpp',
    'src/e4/e4_globals.hpp',
    'src/e4/e4_globals_decls.hpp',
    'src/system/globals_system.hpp',
    'src/object/globals_object.hpp',
    'src/structure/globals_structure.hpp',
]
DEF_FILES = [
    'src/core/ida_globals.cpp',
]

RE_DECL = {a: re.compile(r'^(\s*extern\s+)([\w:][\w\s:]*?\b)' + re.escape(a) +
                         r'\s*(;.*)$') for a in ATOM_TYPES}
RE_DEF = {a: re.compile(r'^((?:unsigned int|int|unsigned char|char|void\*|'
                        r'unsigned short|unsigned long long|double|float|'
                        r'uint32_t|uint8_t)\s+)(' + re.escape(a) + r')\s*(=.*)?;\s*(//.*)?$')
          for a in ATOM_TYPES}

ops = []
for rel in DECL_FILES:
    p = ROOT / rel
    if not p.exists():
        continue
    txt = p.read_text(encoding='latin-1')
    lines = txt.split('\n')
    changed = False
    for i, ln in enumerate(lines):
        for a, ty in ATOM_TYPES.items():
            m = RE_DECL[a].match(ln)
            if not m:
                continue
            cur = m.group(2).strip()
            if cur == ty:
                continue  # already correct (idempotence)
            newln = '%s%s %s%s' % (m.group(1), ty, a, m.group(3))
            ops.append({'file': rel, 'line': i + 1, 'atom': a,
                        'before': ln.strip()[:90], 'after': newln.strip()[:90]})
            lines[i] = newln
            changed = True
    if changed and APPLY:
        p.write_bytes('\n'.join(lines).encode('latin-1'))

for rel in DEF_FILES:
    p = ROOT / rel
    if not p.exists():
        continue
    txt = p.read_text(encoding='latin-1')
    lines = txt.split('\n')
    changed = False
    for i, ln in enumerate(lines):
        for a, ty in ATOM_TYPES.items():
            m = RE_DEF[a].match(ln)
            if not m:
                continue
            cur = m.group(1).strip()
            if cur == ty:
                continue
            init = m.group(3) or ''
            if ty == 'unsigned int':
                init = ' = 0'
            newln = '%s %s%s;%s' % (ty, a, init, ('  ' + m.group(4)) if m.group(4) else '')
            ops.append({'file': rel, 'line': i + 1, 'atom': a,
                        'before': ln.strip()[:90], 'after': newln.strip()[:90]})
            lines[i] = newln
            changed = True
    if changed and APPLY:
        p.write_bytes('\n'.join(lines).encode('latin-1'))

mode = 'APPLY' if APPLY else 'DRY'
print('%s: %d ops across %d files' % (
    mode, len(ops), len({o['file'] for o in ops})))
for o in ops:
    print('  %s:%d [%s]\n    - %s\n    + %s' % (o['file'], o['line'], o['atom'],
                                                o['before'], o['after']))
with open(EV / ('x50_p12_ledger%s.json' % ('_apply' if APPLY else '_dry')), 'w',
          encoding='utf-8') as f:
    json.dump({'mode': mode, 'n_ops': len(ops), 'ops': ops}, f, indent=1)
