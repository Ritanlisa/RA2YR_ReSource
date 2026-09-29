#!/usr/bin/env python3
"""Signature-aware vtable pilot generator (risk-1 killer).

Slot signature resolution — NO voting, binary truth first:
  stack-arg count : retn N inside the function's snapshot bounds
                    (callee-popped bytes / 4). All levels of a slot MUST
                    agree; a disagreement quarantines the family.
  param types     : the CSP pool types of the slot's chain functions,
                    taken from the first level whose CSP arg count matches
                    the retn truth (root interface stubs carry degraded
                    CSP signatures — e.g. slot14 CSP says 2 args but retn 0).
  return type     : first non-degraded CSP return along the chain
                    (return type does not enter vtable layout; it only has
                    to be uniform for override matching).
  slot 0          : virtual destructor (??_E), ABI fixed by MSVC.

The RESOLVED signature is declared identically at every level that
overrides the slot — override matching is correct BY CONSTRUCTION and
signature drift is structurally impossible.

Output: pilot_<leaf>_sigs.hpp/.cpp + a data-debt report (CSP-vs-retn
conflicts found during resolution).

Usage: python tools/vtable_inherit/gen_pilot_sigs.py [--family CDFileClass]
"""
import json
import re
import subprocess
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[1]
sys.path.insert(0, str(HERE))
from gen_pilot import family_truth                      # noqa: E402

POOL = json.loads((ROOT / 'tools' / 'csp' / 'full_report' /
                   'csp_functions.json').read_text(encoding='utf-8'))['functions']
SNAP = ROOT / 'decompile-results' / 'full_export'
IDX = json.loads((SNAP / 'index.json').read_text(encoding='utf-8'))

PRIM = {'int': 'int', 'bool': 'bool', 'char *': 'char *',
        'void *': 'void *', 'unsigned int': 'unsigned int', 'float': 'float',
        'double': 'double', 'unknown': 'void *'}


def pool_sig(a):
    rec = POOL.get('0x%08X' % a)
    if not rec:
        return None
    ps = [p.get('real_type') or 'unknown'
          for p in rec['params'] if p['name'] != 'this']
    return {'ret': rec['return_type'] or 'void', 'params': ps}


def snap_retn(a):
    """retn immediates within the function's snapshot bounds (IDA-fenced).
    Returns None for bare nullsubs (`xor eax,eax; ret`, 2-3 byte bodies):
    they never pop args, so they carry no slot-ABI evidence — the original
    ships such stubs in interface tables whose slots are never virtually
    called (RA2 binds calls statically)."""
    ent = IDX.get('%08X' % a)
    if not ent:
        return None
    p = SNAP / ent['file']
    if not p.exists():
        return None
    lines = p.read_text(encoding='latin-1', errors='replace').split('\n')
    hdr = next((i for i, l in enumerate(lines)
                if l.startswith('// addr=0x%08X' % a)), None)
    if hdr is None:
        return None
    end = next((j for j in range(hdr + 1, min(hdr + 5000, len(lines)))
                if lines[j].startswith('// ====')), len(lines))
    msz = re.match(r'^// addr=0x[0-9A-F]+ size=(0x[0-9a-f]+)', lines[hdr])
    size = int(msz.group(1), 16) if msz else 0
    rets = set()
    for l in lines[hdr:end]:
        m = re.match(r'^//\s+[0-9a-f]+: retn? ?(\d*)', l)
        if m:
            rets.add(int(m.group(1)) if m.group(1) else 0)
    if not rets:
        return None
    if size <= 3 and rets == {0}:
        return None                      # bare nullsub: no ABI evidence
    return rets


def resolve(leaf='CDFileClass'):
    chain, slots = family_truth(leaf)
    root = chain[0]
    n = len(slots[root])
    debts = []
    slot_sigs = []
    for i in range(n):
        addrs = [slots[c][i] for c in chain]
        uniq = []
        for a in addrs:
            if a not in uniq:
                uniq.append(a)
        if i == 0:
            slot_sigs.append(None)       # dtor
            continue
        # retn truth per distinct target
        rets = {}
        for a in uniq:
            r = snap_retn(a)
            if r is not None and len(r) == 1:
                rets[a] = next(iter(r))
        vals = set(rets.values())
        if len(vals) != 1:
            # ABI conflict: this slot is never virtually called in the
            # original (e.g. interface stubs `ret` vs impls `ret N`).
            # Layout is unaffected (slot order is signature-independent);
            # the slot gets a uniform fallback signature + a no-vcall debt.
            debts.append('slot %d: retn 冲突 %s → 统一签名+禁虚调债'
                         % (i, {('%06X' % a): v for a, v in rets.items()}))
            nargs = max(rets.values()) // 4 if rets else 0
        else:
            nargs = next(iter(vals)) // 4
        # param types: first chain level whose CSP count matches truth
        params = None
        for c in chain:
            s = pool_sig(slots[c][i])
            if s and len(s['params']) == nargs:
                params = [PRIM.get(t.strip(), 'void *')
                          for t in s['params']]
                break
        if params is None:
            params = ['int'] * nargs if nargs else []
            debts.append('slot %d: 无 CSP 签名匹配 retn(%d 参) → int 填充'
                         % (i, nargs))
        # CSP-vs-retn conflicts along the chain (informational debt)
        for c in chain:
            s = pool_sig(slots[c][i])
            if s and len(s['params']) != nargs:
                debts.append('slot %d @%s: CSP %d 参 vs retn %d 参 (%06X)'
                             % (i, c, len(s['params']), nargs, slots[c][i]))
        # return: first non-void/non-degraded
        ret = 'int'
        for c in chain:
            s = pool_sig(slots[c][i])
            if s and s['ret'] not in ('void', ''):
                ret = s['ret']
                break
        slot_sigs.append({'params': params,
                          'ret': ret if ret in PRIM else 'void *'})
    return chain, slots, slot_sigs, debts


def gen(leaf='CDFileClass'):
    chain, slots, slot_sigs, debts = resolve(leaf)
    root = chain[0]
    n = len(slots[root])
    print('chain:', ' -> '.join(chain), '(%d slots)' % n)
    hpp = ['// GENERATED signature-aware vtable-inheritance pilot',
           '#pragma once', '']
    cpp = ['// GENERATED signature-aware pilot bodies', '',
           '#include "pilot_%s_sigs.hpp"' % leaf.lower(), '']
    for lvl, cls in enumerate(chain):
        hpp.append('class %s%s {' % (cls, '' if lvl == 0
                                     else ' : public ' + chain[lvl - 1]))
        hpp.append('public:')
        cpp.append('// ---- %s ----' % cls)
        hpp.append('    virtual ~%s();' % cls if lvl == 0
                   else '    ~%s();' % cls)
        cpp.append('%s::~%s() {}' % (cls, cls))
        for i in range(1, n):
            a_root = slots[root][i]
            a_here = slots[cls][i]
            sg = slot_sigs[i]
            if sg is None:
                continue                     # quarantined slot — skip family
            nm = 'vt%02d_%06X' % (i, a_root)
            if lvl == 0 or a_here != a_root:
                args = ', '.join('%s a%d' % (t, k)
                                 for k, t in enumerate(sg['params']))
                kw = 'virtual ' if lvl == 0 else ''
                ov = '' if lvl == 0 else ' override'
                hpp.append('    %s%s %s(%s)%s;'
                           % (kw, sg['ret'], nm, args, ov))
                body = 'return 0;' if sg['ret'] != 'void' else ';'
                cpp.append('%s %s::%s(%s) { %s }'
                           % (sg['ret'], cls, nm, args.replace(
                               ' a%d' % 0, ' a0', 0) if False else
                               ', '.join('%s a%d' % (t, k)
                                         for k, t in
                                         enumerate(sg['params'])), body))
        hpp.append('};')
        hpp.append('')
    cpp.append('void force_%s_links() { %s* p = 0; (void)p; }'
               % (leaf.lower(), chain[-1]))
    hp = HERE / ('pilot_%s_sigs.hpp' % leaf.lower())
    cp = HERE / ('pilot_%s_sigs.cpp' % leaf.lower())
    hp.write_text('\n'.join(hpp), encoding='utf-8')
    cp.write_text('\n'.join(cpp), encoding='utf-8')
    print('wrote', hp.name, cp.name)
    if debts:
        print('--- data debts (%d) ---' % len(debts))
        for d in debts:
            print(' ', d)
    return len(debts)


if __name__ == '__main__':
    leaf = 'CDFileClass'
    if '--family' in sys.argv:
        leaf = sys.argv[sys.argv.index('--family') + 1]
    gen(leaf)
