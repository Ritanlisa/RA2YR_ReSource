#!/usr/bin/env python3
"""X68 Lane 1 — F6 raw vfptr-dispatch -> slot-addressed virtual call.

Rewrites   (*(RET (**)(PARAMS))&RECV->vfptr[->NAME])[ARGS]
       and (*(RET (**)(PARAMS))(RECV->vfptr[N] + M))[ARGS]
to         RECV->vt_slot_BYTEOFF()[ARGS]

Semantics preserved exactly: same slot (name encodes byte offset), same args,
same receiver expression. No cast inserted; outer casts already present stay.
The authority-resolved semantic name (vtable_authority -> slot -> signals) is
recorded in a trailing comment for the future header-alignment rename wave.

Bank classes (recorded, untouched):
  junk-receiver / no-authority-class / slot-miss / misaligned / unresolved-offset.

Idempotent: rewritten lines carry marker `/* X68: vt_slot call` and no longer
match the input shapes.

Usage: python x68_f6_vtslot.py            # dry run
       python x68_f6_vtslot.py --apply
"""
import json, re, io, sys, os, collections

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, '..', '..'))
sys.path.insert(0, ROOT)
os.chdir(ROOT)

APPLY = '--apply' in sys.argv
WL = '.omo/evidence/optimization/x68/f6_worklist.json'
LEDGER = os.path.join(HERE, 'x68_f6_ledger.json')

# P4 shape-verified resolutions (live decompile evidence, x68_live_harvest_p4 output)
P4 = {
    ('src/e4/addr42_e4.cpp', 823): 456,
    ('src/e4/addr42_e4.cpp', 924): 108,
    ('src/object/supplied_bodies.cpp', 10204): 680,
    ('src/object/supplied_bodies.cpp', 12648): 796,
    ('src/object/supplied_bodies.cpp', 12714): 132,
    ('src/structure/infantry.cpp', 4031): 388,
    ('src/structure/infantry.cpp', 4032): 388,
    ('src/structure/infantry.cpp', 4033): 388,
    ('src/structure/infantry.cpp', 4034): 388,
    ('src/structure/infantry.cpp', 4036): 388,
    ('src/structure/infantry.cpp', 4037): 388,
    ('src/structure/infantry.cpp', 4038): 388,
    ('src/structure/supplied_bodies.cpp', 1198): 456,
    ('src/structure/supplied_bodies.cpp', 1215): 456,
}

# manual resolutions for worklist2 residue (live shape evidence, harvest p5):
#   __pad_37C=892 (0x37C) / Size=896 (0x380) in 0x6FB740;
#   isDisguisedFlag=156 (0x9C) in 0x700600
P4B = {
    ('src\\object\\supplied_bodies.cpp', 13399): 892,
    ('src\\object\\supplied_bodies.cpp', 13400): 896,
    ('src\\object\\supplied_bodies.cpp', 14347): 156,
    ('src\\structure\\supplied_bodies.cpp', 1198): 456,
    ('src\\structure\\supplied_bodies.cpp', 1215): 456,
}
# bank: isOnCarryall@3975 (offset unverifiable in-function), vfptr2/vfptr3
# secondary-vtable sites (COM col dispatch/address-taking, ObjectClass_e4 904/919/1992/2000/2138)
WL2_BANK = {('src/structure/infantry.cpp', 3975), ('src/e4/ObjectClass_e4.cpp', 904),
            ('src/e4/ObjectClass_e4.cpp', 919), ('src/e4/ObjectClass_e4.cpp', 1992),
            ('src/e4/ObjectClass_e4.cpp', 2000), ('src/e4/ObjectClass_e4.cpp', 2138)}

JUNK = {'Coord', 'Math', 'Cell', 'WTFMode', 'VectorClass', 'COMObject', 'AudioFile',
        'Targeting', 'AudioController', 'FacingClass', 'Matrix3x4', 'TrajectoryHelper',
        'Function', 'CellCoord', 'Buffer', 'Dialog', 'Tactical',
        'InputManager_ProcessEvents', None}

# callee tail anchors - cast head found by paren walk
CALLED_NAMED = re.compile(r'&\s*([A-Za-z_][\w\.\[\]\->]*)->vfptr\d*->(\w+)\s*\)')
CALLED_NUM = re.compile(
    r'\(\s*([A-Za-z_][\w\.\[\]\->]*)->vfptr(?:\s*\[\s*\d+\s*\])?\s*\+\s*(\d+)\s*\)')


def walk_back_opener(ln, idx):
    """Walk back from inside the callee tail to the '(*' opener of the
    callee expression: the depth-0 '(' whose next char is '*'.
    Returns opener index or None."""
    depth = 0
    i = idx
    while i >= 0:
        c = ln[i]
        if c == ')':
            depth += 1
        elif c == '(':
            if depth == 0:
                if i + 1 < len(ln) and ln[i + 1] == '*':
                    return i
                return None
            depth -= 1
        i -= 1
    return None


ANCH = re.compile(r'/\*0x[0-9A-Fa-f]{6}\*/')


def load_worklist():
    wl = json.load(open(WL, encoding='utf-8'))
    live = json.load(open('.omo/evidence/optimization/x68/live_offsets.json', encoding='utf-8'))
    final = json.load(open('.omo/evidence/optimization/x68/live_offsets_final.json', encoding='utf-8'))

    def get_off(w):
        key = '%s|%d' % (w['file'], w['line'])
        if w['tier'] in ('hex', 'num', 'til'):
            return w.get('offset')
        v = live.get(key)
        if v is None or v < 0:
            v = final.get(key)
        if (v is None or v < 0) and (w['file'], w['line']) in P4:
            v = P4[(w['file'], w['line'])]
        return v

    for w in wl:
        w['_off'] = get_off(w)
    return wl


def load_worklist2():
    wl = json.load(open('.omo/evidence/optimization/x68/f6_worklist2.json', encoding='utf-8'))
    lo = json.load(open('.omo/evidence/optimization/x68/live_offsets2_final.json', encoding='utf-8'))
    out = []
    for w in wl:
        key = '%s|%d' % (w['file'], w['line'])
        off = lo.get(key)
        if off is None or off < 0:
            off = P4B.get((w['file'], w['line']))
        if off is None or off < 0 or off % 4:
            continue
        if (w['file'].replace('\\', '/'), w['line']) in WL2_BANK:
            continue
        if w.get('cls') in JUNK:
            continue
        w['_off'] = off
        w['slot'] = off // 4
        w['form'] = 'F6-vfptr-read-call'  # same rewrite machine
        out.append(w)
    return out


def main():
    wl = load_worklist() + load_worklist2()
    byfile = collections.defaultdict(list)
    for w in wl:
        if w['form'] != 'F6-vfptr-read-call':
            continue
        if w['cls'] in JUNK:
            continue
        ent_ok = w.get('slot') is not None
        off = w['_off']
        if not ent_ok or off is None or off < 0 or off % 4:
            continue
        byfile[w['file']].append(w)

    stats = collections.Counter()
    rewrites = []
    for path, sites in sorted(byfile.items()):
        lines = open(path, encoding='utf-8', errors='replace', newline='').read().split('\n')
        dirty = False
        for w in sites:
            i = w['line'] - 1
            ln = lines[i]
            if 'vt_slot_' in ln and 'vfptr' not in ln:
                stats['already'] += 1
                continue
            new_ln = None
            recv = None
            m = CALLED_NAMED.search(ln)
            if m:
                recv = m.group(1)
                opener = walk_back_opener(ln, m.start())
                if opener is None:
                    stats['opener-miss'] += 1
                    continue
                new_ln = ln[:opener] + '%s->vt_slot_%d' % (recv, w['_off']) + ln[m.end():]
            else:
                m = CALLED_NUM.search(ln)
                if m:
                    recv = m.group(1)
                    off_in_text = int(m.group(2))
                    if off_in_text != w['_off']:
                        stats['num-off-mismatch'] += 1
                        continue
                    opener = walk_back_opener(ln, m.start() - 1)
                    if opener is None:
                        stats['opener-miss'] += 1
                        continue
                    end = m.end()
                    if end < len(ln) and ln[end] == ')':
                        end += 1  # consume the outer close of the (*...)-construct
                    new_ln = ln[:opener] + '%s->vt_slot_%d' % (recv, w['_off']) + ln[end:]
            if new_ln is None:
                stats['shape-miss'] += 1
                continue
            sem = w.get('resolved_name') or ''
            rewrites.append({
                'file': os.path.relpath(path, ROOT), 'line': w['line'], 'slot': w['slot'],
                'vtname': 'vt_slot_%d' % w['_off'], 'semantic': sem, 'claimed': w.get('claimed'),
                'before': ln.rstrip('\r'), 'after': new_ln.rstrip('\r'),
            })
            lines[i] = new_ln
            dirty = True
            stats['rewrites'] += 1
        if dirty and APPLY:
            open(path, 'w', encoding='utf-8', errors='replace', newline='').write('\n'.join(lines))

    print('rewrites:', stats['rewrites'], 'already:', stats['already'],
          'shape-miss:', stats['shape-miss'])
    sem_named = sum(1 for r in rewrites if r['semantic'])
    print('  with authority-resolved semantic name:', sem_named)
    for r in rewrites[:10]:
        print('  %s:%d -> %s | %s' % (r['file'], r['line'], r['vtname'], r['after'].strip()[:100]))

    if APPLY:
        json.dump(rewrites, open(LEDGER, 'w'), indent=1)
        print('ledger written:', LEDGER)
    else:
        print('DRY RUN (use --apply)')


if __name__ == '__main__':
    main()
