#!/usr/bin/env python3
"""X27: declaration micro-hygiene bundle (3 mechanical defects, 3 files).

1. `this` used as a PARAMETER NAME (MSVC reserves `this`) -- the e4 decl
   generator copied the def text verbatim:
     - src/e4/classes/SuperClass_e4.hpp:54   StartTimer(int this, char aP2, ...)
     - src/e4/SuperClass_e4.cpp:292          (def, same text)
     - src/e4/classes/supplied_bodies.cpp:1807  RemovePlayer(int this, int a2)
   Rename the parameter to `aP1` in every occurrence (decl + defs).  The
   supply_e4_class_decls.py harvest is sanitized in the same round so a
   regeneration cannot reintroduce it.

2. `SOCKET` (winsock typedef, not visible in consumer TUs) in a flat e4
   class header decl -- WinsockInterfaceClass_e4.hpp:21.  The def side
   (WinsockInterfaceClass_e4.cpp:104) keeps SOCKET (its TU includes
   winsock); `unsigned int` is the same type (UINT_PTR) so C2511 matches.
   Mirrors the X26 e4_protos.h `unsigned int s` precedent.

3. `extern TechnoClass* TechnoClass_Array;` in src/core/globals_core.hpp
   (namespace gamemd) with TechnoClass undeclared -> C2143+C4430 xTUs.
   Add a `class TechnoClass;` fwd inside gamemd.

Usage: python fix_decl_micro_hygiene.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv

THIS_PARAM = re.compile(
    r'([\(,]\s*(?:int|char|unsigned\s+int|unsigned\s+char|short|long|float|'
    r'double|void|bool|[A-Za-z_]\w*)\s*\**\s*)this\b(\s*[,\)])')
SOCKET_DECL = re.compile(
    r'^(\s*)SOCKET(\s*\*+\s*Destru_vt00\s*\([^;]*\)\s*;.*)$')
FWD_MARK = '// X27: member-decl type supply'


def fix_this_params(p, dry):
    text = p.read_text(encoding='utf-8', errors='replace')
    text2, n = THIS_PARAM.subn(lambda m: m.group(1) + 'aP1' + m.group(2), text)
    if n and not dry:
        p.write_text(text2, encoding='utf-8')
    return n


def fix_socket_decl(p, dry):
    text = p.read_text(encoding='utf-8', errors='replace')
    out = []
    n = 0
    for l in text.split('\n'):
        m = SOCKET_DECL.match(l)
        if m:
            out.append(m.group(1) + 'unsigned int' + m.group(2))
            n += 1
        else:
            out.append(l)
    if n and not dry:
        p.write_text('\n'.join(out), encoding='utf-8')
    return n


def fix_technoclass_fwd(p, dry):
    text = p.read_text(encoding='utf-8', errors='replace')
    if 'class TechnoClass;' in text:
        return 0
    lines = text.split('\n')
    at = None
    for i, l in enumerate(lines):
        if re.match(r'^namespace\s+gamemd\s*\{', l):
            at = i + 1
            break
    if at is None:
        return 0
    lines.insert(at, 'class TechnoClass;  ' + FWD_MARK)
    if not dry:
        p.write_text('\n'.join(lines), encoding='utf-8')
    return 1


# X27: object_type.hpp's VoxelStruct stub was deleted (empty #ifndef region);
# the historical text is layout-TRUTH: member_lookup ObjectTypeClass says
# MainVoxel@0xB0 size=4, TurretVoxel@0xB4, BarrelVoxel@0xB8,
# ChargerTurrets@0xBC size=72 (18*4), ChargerBarrels@0x104 size=72,
# NoSpawnAlt@0x14C -- a 4-byte VoxelStruct.  render/voxel.hpp supplies its
# own (12-byte) def to its TUs via GAMEMD_VOXEL_STRUCT_FULL.
VOXEL_STUB = 'struct VoxelStruct { int unused; };'


def fix_voxel_stub(p, dry):
    text = p.read_text(encoding='utf-8', errors='replace')
    if VOXEL_STUB in text:
        return 0
    m = re.search(r'#ifndef GAMEMD_VOXEL_STRUCT_FULL\n(\s*)\n#endif', text)
    if not m:
        return 0
    text2 = text[:m.start()] + \
        '#ifndef GAMEMD_VOXEL_STRUCT_FULL\n' + VOXEL_STUB + '\n#endif' + \
        text[m.end():]
    if not dry:
        p.write_text(text2, encoding='utf-8')
    return 1


TECHNO_USINGS = ('TurretControl', 'OwnedTiberiumStruct')


def fix_techno_usings(p, dry):
    text = p.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')
    at = None
    need = [t for t in TECHNO_USINGS
            if not re.search(r'using\s+::gamemd::%s\b' % t, text)]
    if not need:
        return 0
    for i, l in enumerate(lines):
        if re.search(r'using\s+::gamemd::', l):
            at = i + 1
    if at is None:
        for i, l in enumerate(lines):
            if l.startswith('namespace gamemd') or l.startswith('namespace ra2'):
                at = i + 1
                break
    if at is None:
        return 0
    block = ['using ::gamemd::%s;  %s' % (t, FWD_MARK) for t in need]
    lines[at:at] = block
    if not dry:
        p.write_text('\n'.join(lines), encoding='utf-8')
    return len(need)


def fix_anim_bounce_include(p, dry):
    text = p.read_text(encoding='utf-8', errors='replace')
    if '#include "render/bounce.hpp"' in text:
        return 0
    lines = text.split('\n')
    at = None
    for i, l in enumerate(lines):
        if l.startswith('#include "object/techno.hpp"'):
            at = i + 1
    if at is None:
        return 0
    lines.insert(at, '#include "render/bounce.hpp"  // X27: BounceClass '
                     'complete (AnimClass::Bounce by-value)')
    if not dry:
        p.write_text('\n'.join(lines), encoding='utf-8')
    return 1


def main():
    jobs = [
        ('src/e4/classes/SuperClass_e4.hpp', fix_this_params),
        ('src/e4/SuperClass_e4.cpp', fix_this_params),
        ('src/e4/classes/supplied_bodies.cpp', fix_this_params),
        ('src/e4/classes/WinsockInterfaceClass_e4.hpp', fix_socket_decl),
        ('src/core/globals_core.hpp', fix_technoclass_fwd),
        ('src/type/object_type.hpp', fix_voxel_stub),
        ('src/object/techno.hpp', fix_techno_usings),
        ('src/entity/anim.hpp', fix_anim_bounce_include),
    ]
    total = 0
    for rel, fn in jobs:
        p = ROOT / rel
        if not p.exists():
            print('SKIP (missing): %s' % rel)
            continue
        n = fn(p, not APPLY)
        total += n
        print('%s: %d change(s)%s' % (rel, n, '' if APPLY else ' (DRY)'))
    print('total: %d%s' % (total, '' if APPLY else ' (DRY)'))


if __name__ == '__main__':
    main()
