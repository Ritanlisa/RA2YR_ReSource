#!/usr/bin/env python3
"""Generate full e4-universe definitions for tree-owned classes (C2027 fix).

Bodies reference tree classes (CellCoord/Random/WinAPI/...) whose e4
headers are fwd-only. Tree-header includes are NOT an option (r40: misc_ext
.hpp alone caused 126K redefinitions). Instead: emit full flat definitions
from anchors/csp_canon_members.json into e4/classes/_tree_full_e4.hpp —
namespace-isolated, zero tree dependencies.

Usage: python tools/csp_export/gen_tree_full_e4.py <error-log> [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
E4C = SRC / 'e4' / 'classes'
OUT = E4C / '_tree_full_e4.hpp'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

mtab = json.loads((ROOT / 'anchors' / 'csp_canon_members.json')
                  .read_text(encoding='utf-8'))

TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace') if LOG else ''

# C2027 names mine
need = set()
if TXT:
    for m in re.finditer(
            r'([A-Za-z0-9_]+\.cpp)\(\d+,\d*\): error C2027: '
            r'.{0,30}?gamemd::(\w+)', TXT):
        need.add(m.group(2))
    for m in re.finditer(
            r'error C2039: ["\u201c](\w+)["\u201d]: .{0,40}?gamemd::(\w+)',
            TXT):
        need.add(m.group(2))   # member-of class also needs full def

# e4-classes already fully defined
have = set()
for p in sorted(E4C.glob('*_e4.hpp')):
    if p.name.startswith('_'):
        continue
    txt = p.read_text(encoding='utf-8', errors='replace')
    have |= set(re.findall(r'^[ \t]*struct\s+(\w+)\s*[^;]', txt, re.M))

# tree-only universe classes csp_canon knows (flat members available)
tree_names = set()
CLS_RE = re.compile(r'^[ 	]*(?:class|struct)\s+([A-Za-z_]\w*)', re.M)
tree_classes = set()
for p in sorted(SRC.rglob('*.hpp')):
    s = str(p)
    if 'e4' in s or 'csp_canon' in s or '_generated' in s:
        continue
    try:
        t2 = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    if 'namespace ra2' in t2 or 'namespace gamemd' not in t2:
        continue
    tree_names |= set(re.findall(
        r'^[ \t]*(?:class|struct)\s+([A-Za-z_]\w*)', t2, re.M))
    tree_classes |= set(CLS_RE.findall(t2))

PRIM = {'unsigned int', 'int', 'unsigned short', 'short', 'unsigned char',
        'signed char', 'char', 'bool', 'float', 'double', 'unsigned long',
        'long', 'unsigned long long', 'long long', 'void'}

# tree templates/enums/aliases: pointer bases of these spellings must
# degrade to void* (a `VectorClass*` member is not compilable in the
# e4 universe — VectorClass is a tree template)
ENUM_RE = re.compile(r'^[ 	]*enum(?:\s+class)?\s+([A-Za-z_]\w*)', re.M)
ALIAS_RE = re.compile(r'^[ 	]*using\s+([A-Za-z_]\w*)\s*=', re.M)
TMPL_RE = re.compile(
    r'^template[^\n]*\n[ \t]*(?:class|struct)\s+([A-Za-z_]\w*)',
    re.M)
tree_special = set()
for p in sorted(SRC.rglob('*.hpp')):
    s = str(p)
    if 'e4' in s or 'csp_canon' in s or '_generated' in s:
        continue
    try:
        t2 = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    if 'namespace ra2' in t2 or 'namespace gamemd' not in t2:
        continue
    tree_special |= set(ENUM_RE.findall(t2))
    tree_special |= set(ALIAS_RE.findall(t2))
    tree_special |= set(TMPL_RE.findall(t2))
# e4 flat carriers exist and are declared
carriers = {p.stem[:-7] for p in E4C.glob('*_flat_e4.hpp')}


# exclusion: tree templates/enums/aliases (C2990 clash) + math/enum header
# names (C2011) — these names are NEVER safe to define in the e4 universe
MATHNAMES = set()
for _h in ('src/core/math.hpp', 'src/core/enums.hpp'):
    try:
        for _ln in (ROOT / _h).read_text(encoding='utf-8',
                                         errors='replace').splitlines():
            _m = re.match(r'\s*(?:struct|class|using|enum(?:\s+class)?)\s+'
                          r'([A-Za-z_]\w*)', _ln)
            if _m:
                MATHNAMES.add(_m.group(1))
    except OSError:
        pass
EXCLUDE = tree_special | MATHNAMES | {'CellCoord'}  # CellCoord owned by
# _tree_alias_e4.hpp; MATHNAMES (math/enums plain structs like Matrix3D)
# were computed but NOT excluded at r57 -- every TU seeing both math.hpp and
# _tree_full got C2011 redefinitions (607 hits in r73).
# G42.4: corpus flattens these tree *template* names into concrete flat
# classes (static-call form `VectorClass::Remove(...)`); e4 universe is
# include-isolated from core headers (0 non-e4 TUs see _tree_full), so flat
# defs cannot C2011-clash.  Pointer members still degrade via tree_special.
FLAT_OK = {'VectorClass', 'HashTable', 'DynamicVectorClass'}
# G57a2: the G42.4 include-isolation premise was BROKEN by the G42.55
# tree-truth bridges (e4 hpps now #include main-tree headers whose closure
# reaches core/vector.hpp). Where both meet in one TU, the flat non-template
# decl and the tree template collide (C2989/C2990, ~1.9K-error cascade).
# Guard the flat decls so they yield whenever the TU opted into tree
# template truth (GAMEMD_E4_VECTOR_TREE_TRUTH, inserted by
# .omo/g57a2_vector_family_fix.py into every e4 TU whose closure contains
# both core/vector.hpp and this header / e4_protos.h).
VEC_TMPL = {'VectorClass', 'DynamicVectorClass'}
VEC_GUARD = ('#if !defined(GAMEMD_TREE_UNIVERSE) && '
             '!defined(GAMEMD_E4_VECTOR_TREE_TRUTH)')
# G42.9: static-method decls injected into generated flat structs. WinAPI::
# Wrapper is the COM error trampoline -- 350+ corpus sites, all uniform
# 1-arg (`WinAPI::Wrapper(-2147467261)` = 0x80004005), no ida_cache entry.
# X93: CSP-ownership relocations (tools/gen_gap2_defs.py --x93-apply writes
# this table). Declarations are additive/idempotent; the gap2 generator inserts
# them into the live header, and a full regeneration reproduces them here.
X93_TABLE = ROOT / 'tools' / 'csp_export' / 'x93_extra_method_decls.json'
X93_DECLS = {}
if X93_TABLE.exists():
    try:
        X93_DECLS = json.loads(X93_TABLE.read_text(encoding='utf-8'))
    except Exception:
        X93_DECLS = {}
STATIC_DECLS = {
    'WinAPI': ['static int Wrapper(int a2);  // consensus: 350+ uniform 1-arg sites'],
    # G57a1: HashTable corpus call vocabulary -- utility_ext.hpp's gap2 twin
    # is suppressed in e4 TUs (GAMEMD_E4_HashTable battery), so the flat
    # carrier must carry every static form the bodies use. The three former
    # vocab FIELDS (CleanupAndResize/RebuildEx/FindString) are methods now.
    'HashTable': [
        'static int Lookup(void *aP0, const char **aP1, unsigned int *aP2);',
        'static int Grow(void *aP0);',
        'static int Rebuild2(void *aP0);',
        'static int Clear(int aP0);',
        'static int RemoveHashTableEntry(void *aP0, int aP2);',
        'static int FindWOLHashTableEntry(void *aP0, const char **aP1, unsigned int *aP2);',
        'static int CleanupAndResize(void *aP0);',
        'static int RebuildEx(void *aP0);',
        'static int FindString(void *aP0, const char *aP1, unsigned int *aP2);',
    ],
}
def cpptype(t, size, own):
    t = (t or '').strip()
    if not t:
        return 'unsigned int' if size >= 4 else 'unsigned char'
    m = re.match(r'^(.*?)\s*\*+$', t)
    if m:
        base = m.group(1).strip()
        if base in PRIM:
            return t
        if base in tree_special or base in EXCLUDE:
            return 'void' + t[len(m.group(1)):]
        if base in carriers or base in mtab and not base.isupper()                 and base not in tree_special:
            return t
        return 'void' + t[len(m.group(1)):]
    if t in PRIM:
        return t
    return 'ARRAY:%d' % max(1, size or 1)


targets = sorted(n for n in need
                 if n in mtab and n not in have and not n.isupper()
                 and n not in (EXCLUDE - FLAT_OK))
# always include the persistent top offenders
PERSIST = ('CellCoord', 'Random', 'DeleteAndZero', 'WinAPI', 'INIClass',
           'CCFileClass', 'HouseClass', 'BuildingClass', 'TechnoClass',
           'ObjectClass', 'AnimClass', 'UnitClass', 'LoadOptions',
           'LightConvertClass', 'FileClass', 'TacticalMap', 'FactoryClass',
           'ConnectionClass', 'InfantryClass', 'AircraftClass',
           # G42.4 C-bucket: g131 C2027 heavyweights not caught by need-mining
           'HashTable', 'VectorClass', 'State', 'ShapeButtonClass',
           'DynamicVectorClass')
for n in PERSIST:
    if n == 'CellCoord':
        continue
    if (n in mtab and n not in have and n not in targets
            and n not in (EXCLUDE - FLAT_OK)):
        targets.append(n)
targets = sorted(set(targets))

lines = ['// GENERATED full flat definitions for tree-owned classes',
         '// (gen_tree_full_e4.py) — namespace-isolated C2027 fix,',
         '// zero tree dependencies. Bodies access these via e4 TUs only.',
         '#pragma once', '', '#include "e4/classes/_fwd_e4.hpp"', '',
         'namespace gamemd {', '']
# fwd-decl all targets first: members may point at classes defined later
all_targets = sorted(set(targets))
for n in all_targets:
    if n in VEC_TMPL:
        lines.append(VEC_GUARD)
        lines.append('struct %s;' % n)
        lines.append('#endif')
    else:
        lines.append('struct %s;' % n)
lines.append('')

n_cls = n_mem = 0
for cls in targets:
    ent = mtab.get(cls) or {}
    mems = ent.get('members') or {}
    # data-quality bound (defense in depth): never emit a member at/beyond
    # the class layout size — CSP call-site pollution if it ever reappears
    # in the table (r71 91K-error incident root enabler).
    lim = ent.get('size') or 0
    own = {(mm.get('name') or '') for mm in mems.values()}
    body = ['    void* vfptr;']
    used = {'vfptr'}
    for off in sorted(mems, key=int):
        o0 = int(off, 0)
        if lim and o0 >= lim:
            continue
        mm = mems[off]
        nm = mm.get('name') or ('q%03X' % o0)
        if nm in used or nm.startswith('__pad'):
            continue
        used.add(nm)
        ty = cpptype(mm.get('type'), mm.get('size') or 4, own)
        o = o0
        if ty.startswith('ARRAY:'):
            body.append('    char %s[%s];  // 0x%X' % (nm, ty[6:], o))
        else:
            body.append('    %s %s;  // 0x%X' % (ty, nm, o))
        n_mem += 1
    if cls in VEC_TMPL:
        lines.append(VEC_GUARD)
    lines.append('struct %s {' % cls)
    lines += body
    # G42.9: corpus-consensus static-method decls (call-site-uniform anchors;
    # no ida_cache for these -- flagged with // consensus)
    for extra in STATIC_DECLS.get(cls, ()):
        lines.append('    ' + extra)
    for extra in X93_DECLS.get(cls, ()):
        lines.append('    ' + extra)
    lines.append('};')
    if cls in VEC_TMPL:
        lines.append('#endif')
    lines.append('')
    n_cls += 1

lines += ['', '} // namespace gamemd', '']
if APPLY:
    OUT.write_text('\n'.join(lines), encoding='utf-8')
    # explicit includes in e4 cpps -- NEVER via e4_globals/ida_compat:
    # gap2 TUs include e4_globals AND math.hpp; a struct CellCoord here
    # would clash with math.hpp's using-alias (C2989, 60K-error incident)
    n_inc = 0
    for p in sorted((SRC / 'e4').glob('*.cpp')):
        txt = p.read_text(encoding='latin-1', errors='replace')
        if '_tree_full_e4.hpp' in txt:
            continue
        lns = txt.split('\n')
        at = max(i for i, l in enumerate(lns) if l.startswith('#include'))
        lns.insert(at, '#include "e4/classes/_tree_full_e4.hpp"')
        p.write_bytes('\n'.join(lns).encode('latin-1', errors='replace'))
        n_inc += 1
    print(f'_tree_full includes added: {n_inc}')

print(f'tree full defs: {n_cls} classes, {n_mem} members '
      f'({len(need)} C2027 names mined)')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
