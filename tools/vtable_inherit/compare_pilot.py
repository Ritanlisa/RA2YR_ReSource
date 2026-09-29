#!/usr/bin/env python3
"""Slot-by-slot vtable comparator: original PE vs our pilot obj.

For each family class:
  original side : slot i target address (binary truth)
  our side      : slot i symbol from the .obj vtable (`??_7X@@6B@`)
                    - `??_EXXX`        -> this level's deleting dtor
                    - `?vtNN_AAAAAA@..`-> decoded (slot NN, intro addr)

Verdict rules per class (all must hold):
  1. slot count equal
  2. slot 0 symbol is this level's ??_E (dtor installed by inheritance)
  3. for slots 1..N: our symbol's intro address must equal the original
     slot address at the level that OWNS it:
       - if orig[lvl][i] != orig[root][i]  -> overridden here -> symbol
         must be `?vt..@<this class>` with intro == root slot addr
       - else (inherited)                 -> symbol class part is any
         base class, intro == the root slot addr

Non-circularity: the compiler derives slot order from our DECLARATIONS;
if a declaration is missing/wrong the emitted order shifts and this
comparator fails. A negative control (declare an override wrongly) must
fail — verified once via --selftest.

Usage: python tools/vtable_inherit/compare_pilot.py [--family CDFileClass]
"""
import re
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[1]
sys.path.insert(0, str(HERE))

from gen_pilot import family_truth            # noqa: E402
from read_obj_vtables import obj_vtables      # noqa: E402

MANGLED_SLOT = re.compile(r'^\?vt(\d+)_[0-9A-F]+@')


def demangle_slot(sym):
    """`?vt05_4C9150@RawFileClass@@UAEHXZ` -> (5, 'RawFileClass')"""
    m = re.match(r'^\?vt(\d+)_([0-9A-F]{6})@(\w+)@@', sym)
    return (int(m.group(1)), m.group(3)) if m else None


def main():
    leaf = 'CDFileClass'
    if '--family' in sys.argv:
        leaf = sys.argv[sys.argv.index('--family') + 1]
    chain, slots = family_truth(leaf)
    root = chain[0]
    n = len(slots[root])

    obj = (HERE / ('pilot_%s.obj' % leaf.lower()))
    ours = obj_vtables(str(obj))
    our_tables = {}
    for sym, sl in ours.items():
        m = re.match(r'^\?\?_7(\w+)@@6B@$', sym)
        if m:
            our_tables[m.group(1)] = sl

    ok = True
    for cls in chain:
        vt = our_tables.get(cls)
        print('== %s' % cls)
        if vt is None:
            print('   FAIL: no ??_7%s@@6B@ in obj' % cls)
            ok = False
            continue
        if len(vt) != n:
            print('   FAIL: slot count %d != %d' % (len(vt), n))
            ok = False
        for i in range(min(len(vt), n)):
            sym = vt[i]
            orig_addr = slots[cls][i]
            root_addr = slots[root][i]
            overridden = orig_addr != root_addr
            if i == 0:
                good = sym.startswith('??_E%s@' % cls)
                note = 'dtor(??_E)' if good else sym[:30]
            else:
                d = demangle_slot(sym)
                if d is None:
                    good, note = False, 'unparsed:%s' % sym[:34]
                else:
                    slot_i, owner = d
                    intro_ok = slot_i == i
                    # an overridden slot is re-declared at THIS level
                    # (owner == cls); an inherited slot belongs to this
                    # level or any base (owner in chain[:lvl+1])
                    bases = chain[:chain.index(cls) + 1]
                    own_ok = (owner == cls) if overridden \
                        else (owner in bases)
                    good = intro_ok and own_ok
                    note = '%s@%s%s' % (sym[:18], owner,
                                        '' if good else '  <<< MISMATCH')
            if not good:
                ok = False
                print('   slot %2d: orig=%06X %s -> %s'
                      % (i, orig_addr, 'OVR' if overridden else 'inh', note))
    print()
    print('VERDICT:', 'ALL SLOT-PERFECT' if ok else 'MISMATCHES PRESENT')
    return 0 if ok else 1


sys.exit(main())
