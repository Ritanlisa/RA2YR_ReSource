#!/usr/bin/env python3
"""X66 L2-C/D/E/F — supply tiers (one lane = C2065, one build cycle).

C: init_game.cpp += 5 e4 command-class headers (tail-anchored; g57c5 W5d
   scope-supply precedent).
D: e4_globals.hpp += blob externs (X55-W2 rules; label-kind sizing; address
   = name suffix = IDA label address). byte_B04880 redecl'd with the SAME
   type as app/cmdline.hpp (bool) — C2369-safe.
   After edit: regen e4_globals_decls.hpp via gen_e4_globals_decls.py.
E: vt_* spelling normalization: 6 ununderscored emitter spellings -> the
   existing e4_globals.hpp pool entries (evidence = pool entry + its
   // data: address). Token replacement, word-boundary.
F: include supply: menu_globals_gen.cpp += e4/e4_globals_decls.hpp +
   core/globals_core.hpp; init_game.cpp += e4/e4_abs_decls.hpp;
   network/winsock.cpp += e4/e4_globals_decls.hpp (vt_VectorClass).

Banks (recorded, with reasons): stru_AC4B30 (member-access shape needs struct
type = W3 lane), stru_82BA00/A8D600 (member-access on uint after visibility —
code-move expected), q00C/q014 (member-shaped pads), dword_AC1B0C/AC1B48/
AC1B4C/AC1B54 (declared nowhere as defs — supplied as uint blobs, address
from name; if ida_globals.cpp later defines them differently = follow-up).

Usage: python x66_l2_supply.py           # dry run
       python x66_l2_supply.py --apply
"""
import re, os, sys, subprocess, json
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, '..', '..', '..', '..'))
APPLY = '--apply' in sys.argv
LEDGER = {}

def read(p):
    return open(os.path.join(ROOT, p), encoding='utf-8', errors='replace').read()

def write(p, txt):
    open(os.path.join(ROOT, p), 'w', encoding='utf-8', errors='replace', newline='').write(txt)

stats = Counter()

# ---------- C: command-class includes ----------
INIT_GAME = r'src\core\init_game.cpp'
CMD_HDRS = [
    'e4/classes/CreateTeamCommand_e4.hpp',
    'e4/classes/SelectTeamCommand_e4.hpp',
    'e4/classes/AddTeamCommand_e4.hpp',
    'e4/classes/CenterTeamCommand_e4.hpp',
    'e4/classes/TauntCommandClass_e4.hpp',
]
txt = read(INIT_GAME)
lines = txt.split('\n')
last_inc = max(i for i, ln in enumerate(lines) if ln.startswith('#include '))
add = [('#include "%s"  // X66 L2-C command-class supply' % h) for h in CMD_HDRS
       if h not in txt]
if add:
    lines[last_inc + 1:last_inc + 1] = add
    LEDGER['C-includes'] = {'file': INIT_GAME, 'added': add, 'after_line': last_inc + 1}
    stats['C-includes'] = len(add)
    txt = '\n'.join(lines)
    if APPLY:
        write(INIT_GAME, txt)
print('C: +%d includes -> init_game.cpp' % stats['C-includes'])

# ---------- F: include supply ----------
F_ADDS = [
    (r'src\core\menu_globals_gen.cpp', ['e4/e4_globals_decls.hpp', 'core/globals_core.hpp']),
    (r'src\core\init_game.cpp', ['e4/e4_abs_decls.hpp']),
    (r'src\network\winsock.cpp', ['e4/e4_globals_decls.hpp']),
]
for f, hdrs in F_ADDS:
    txt = read(f)
    lines = txt.split('\n')
    idxs = [i for i, ln in enumerate(lines) if ln.startswith('#include ')]
    if not idxs:
        stats['F-no-include-block'] += 1
        continue
    last_inc = idxs[-1]
    add = ['#include "%s"  // X66 L2-F visibility supply' % h for h in hdrs if '"%s"' % h not in txt]
    if add:
        lines[last_inc + 1:last_inc + 1] = add
        LEDGER.setdefault('F-includes', []).append({'file': f, 'added': add})
        stats['F-includes'] += len(add)
        if APPLY:
            write(f, '\n'.join(lines))
print('F: +%d includes' % stats['F-includes'])

# ---------- E: vt spelling normalization ----------
VT_MAP = {
    'vt_VectorCursorGraphicMenuItemDynamicVectorClass': 'vt_VectorCursor_GraphicMenuItem_DynamicVectorClass_GraphicMenuItem',
    'vt_rc_ptrWorldDominationTourValueGameOption': 'vt_rc_ptr_WorldDominationTour_ValueGameOption_unsigned_char',
    'vt_WorldDominationTourVoicesAnim': 'vt_WorldDominationTour_Voices_Anim',
    'vt_WorldDominationTourState': 'vt_WorldDominationTour_State',
    'vt_WorldDominationTourConflict': 'vt_WorldDominationTour_Conflict',
    'vt_WorldDominationTourHistory': 'vt_WorldDominationTour_History',
}
e4g = read(r'src\e4\e4_globals.hpp')
for old, new in VT_MAP.items():
    if ('extern unsigned char %s[4]' % new) not in e4g and ('extern void* %s;' % new) not in e4g:
        print('E: pool entry MISSING for %s -> BANK' % new)
        stats['E-pool-miss'] += 1
        continue
for root, _d, fs in os.walk(os.path.join(ROOT, 'src')):
    for fn in fs:
        if not fn.endswith('.cpp'):
            continue
        p = os.path.relpath(os.path.join(root, fn), ROOT)
        t = read(p)
        if not any(o in t for o in VT_MAP):
            continue
        lines = t.split('\n')
        n = 0
        for i, ln in enumerate(lines):
            code = re.sub(r'//.*$', '', ln)
            new_ln = ln
            for old, new in VT_MAP.items():
                if re.search(r'\b%s\b' % old, code):
                    new_ln = re.sub(r'\b%s\b' % old, new, new_ln)
            if new_ln != ln:
                LEDGER.setdefault('E-rename', []).append(
                    {'file': p, 'line': i + 1, 'before': ln.rstrip(), 'after': new_ln.rstrip()})
                lines[i] = new_ln
                n += 1
        if n:
            stats['E-renamed'] += n
            if APPLY:
                write(p, '\n'.join(lines))
print('E: renamed %d lines' % stats['E-renamed'])

# ---------- D: blob extern supply ----------
D_LABELS = [
    # (name, ctype)
    ('dword_AC6658', 'unsigned int'),
    ('dword_A8D5FC', 'unsigned int'),
    ('dword_87E294', 'unsigned int'),
    ('dword_AC18A4', 'unsigned int'),
    ('dword_AC1B00', 'unsigned int'),
    ('dword_AC1B04', 'unsigned int'),
    ('dword_AC1B0C', 'unsigned int'),
    ('dword_AC1B48', 'unsigned int'),
    ('dword_AC1B4C', 'unsigned int'),
    ('dword_AC1B54', 'unsigned int'),
    ('off_827970', 'void*'),
    ('byte_885781', 'unsigned char'),
    ('byte_A8EB96', 'unsigned char'),
    ('byte_B04880', 'bool'),   # same type as app/cmdline.hpp decl (C2369-safe)
]
m = re.match(r'^[a-z]+_([0-9A-Fa-f]{6})$', '')
def addr_of(name):
    mm = re.match(r'^[a-z]+_([0-9A-Fa-f]{6})$', name)
    return mm.group(1).upper() if mm else None
# byte_841F53 family (17 labels seen in errors) — derive from addr6C usage census
BYTE_FAMILY = ['byte_841F53', 'byte_841F5B', 'byte_841F63', 'byte_841F6B', 'byte_841F73',
               'byte_841F7B', 'byte_841F83', 'byte_841F8B', 'byte_841F93', 'byte_841F9B',
               'byte_841FA3', 'byte_841FAB', 'byte_841FB3', 'byte_841FBB', 'byte_841FC3',
               'byte_841FCB', 'byte_841FEB', 'byte_842003']
MARK = '// X66 L2-D supply (ida-label blobs; addr = label suffix; X55-W2 rules)\n'
gl = read(r'src\e4\e4_globals.hpp')
if MARK not in gl:
    decls = [MARK]
    for name, ty in D_LABELS + [(n, 'unsigned char') for n in BYTE_FAMILY]:
        a = addr_of(name)
        if re.search(r'\b%s\b' % re.escape(name), gl.split(MARK)[0] if MARK in gl else gl):
            stats['D-already'] += 1
            continue
        decls.append('extern %s %s;  // data: 0x%s [X66 L2-D]' % (ty, name, a))
        stats['D-supply'] += 1
    block = '\n'.join(decls) + '\n'
    LEDGER['D-block'] = block
    if APPLY:
        write(r'src\e4\e4_globals.hpp', gl.rstrip('\n') + '\n\n' + block)
print('D: +%d externs (already-present skipped: %d)' % (stats['D-supply'], stats['D-already']))

print()
for k, v in stats.most_common():
    print(' ', k, v)
json.dump(LEDGER, open(os.path.join(HERE, 'x66_l2_supply_ledger.json'), 'w'), indent=1)
if not APPLY:
    print('DRY RUN (use --apply)')
else:
    print('APPLY: done (remember to regen e4_globals_decls twin)')
