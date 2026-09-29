#!/usr/bin/env python3
"""Generate an inheritance-based vtable pilot for one class family.

Input : binary ground truth (original PE slot sequences per family level)
Output: pilot.hpp / pilot.cpp — the family re-declared with virtual slots
        in exactly the original slot order; ctor bodies install NOTHING
        (the compiler installs vtables via inheritance).

Naming: every slot's function is named after the address that FIRST
introduced it (the root class slot target): `vt<i>_<hexaddr>`. A derived
class re-declares that SAME name iff its slot target differs (override);
identical targets mean inheritance (no declaration). Slot 0 is the virtual
destructor (MSVC `??_E` deleting dtor), declared per level.

This makes the compiler emit vtables whose slot order is a pure function
of the declarations — verified against the original slot-by-slot by
compare_pilot.py.

Usage: python tools/vtable_inherit/gen_pilot.py [--family CDFileClass]
"""
import subprocess
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[1]


def family_truth(leaf):
    """run extract_vtables --family and parse slot sequences per class"""
    out = subprocess.run(
        [sys.executable, str(HERE / 'extract_vtables.py'),
         '--family', leaf],
        capture_output=True, text=True, encoding='utf-8',
        errors='replace', cwd=str(ROOT)).stdout
    classes = []
    slots = {}
    for ln in out.split('\n'):
        if ln.startswith('family chain'):
            chain = ln.split(':', 1)[1].strip().split(' -> ')
        elif ln.startswith('== '):
            parts = ln.split()
            cls = parts[1]
            classes.append(cls)
            slots.setdefault(cls, [])
        elif classes and ln.strip() and ln.strip()[0].isdigit():
            i, addr, _nm = ln.split()[:3]
            slots[classes[-1]].append(int(addr, 16))
    return chain, slots


def gen(leaf='CDFileClass'):
    chain, slots = family_truth(leaf)
    print('chain:', ' -> '.join(chain))
    for c in chain:
        print('  %-20s %d slots' % (c, len(slots[c])))

    n_slots = len(slots[chain[0]])
    for c in chain:
        assert len(slots[c]) == n_slots, \
            '%s has %d slots != %d (family not uniform — MI or error)' \
            % (c, len(slots[c]), n_slots)

    # slot identity names from the ROOT table
    root = chain[0]
    slot_names = ['vt%02d_%06X' % (i, a) for i, a in enumerate(slots[root])]

    hpp = ['// GENERATED vtable-inheritance pilot (slot truth: original PE)',
           '#pragma once', '']
    cpp = ['// GENERATED vtable-inheritance pilot bodies', '',
           '#include "pilot_%s.hpp"' % leaf.lower(), '']

    for lvl, cls in enumerate(chain):
        hpp.append('class %s%s {' % (cls, '' if lvl == 0
                                     else ' : public ' + chain[lvl - 1]))
        hpp.append('public:')
        cpp.append('// ---- %s ----' % cls)
        # slot 0: virtual dtor at root; re-declared (overrides) per level
        if lvl == 0:
            hpp.append('    virtual ~%s();' % cls)
        else:
            hpp.append('    ~%s();' % cls)
        cpp.append('%s::~%s() {}' % (cls, cls))
        # slots 1..N-1
        for i in range(1, n_slots):
            a_root = slots[root][i]
            a_here = slots[cls][i]
            nm = slot_names[i]
            if lvl == 0 or a_here != a_root:
                kw = 'virtual ' if lvl == 0 else ''
                ov = '' if lvl == 0 else ' override'
                hpp.append('    %sint %s()%s;' % (kw, nm, ov))
                cpp.append('int %s::%s() { return 0; }' % (cls, nm))
        hpp.append('};')
        hpp.append('')

    cpp.append('void force_%s_links() { %s* p = 0; (void)p; }'
               % (leaf.lower(), chain[-1]))

    hp = HERE / ('pilot_%s.hpp' % leaf.lower())
    cp = HERE / ('pilot_%s.cpp' % leaf.lower())
    hp.write_text('\n'.join(hpp), encoding='utf-8')
    cp.write_text('\n'.join(cpp), encoding='utf-8')
    print('wrote', hp.name, cp.name)
    return chain, slots, slot_names


if __name__ == '__main__':
    leaf = 'CDFileClass'
    if '--family' in sys.argv:
        leaf = sys.argv[sys.argv.index('--family') + 1]
    gen(leaf)
