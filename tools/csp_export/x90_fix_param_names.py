#!/usr/bin/env python3
"""X90 W2: restore lost parameter names in generated e4 definitions.

Root cause: the e4 signature synthesis keeps the IDB/annotated parameter
names (`aP1`, `aDestroyablebri`, ...) while the body is rendered from the
same Hex-Rays pseudocode with positional names (`a2`, `a3`, ...).  For the
functions below the positional name is the one the body uses, so the
definition parameter is renamed to it.  Names only: arity, types, offsets
and the header declarations are untouched (parameter names are not part of
the function type/symbol).

Plan entries are (file, qualified-function, {param_index: target_name}).
`param_index` is 0-based over the explicit parameter list on the definition
line.  A function-pointer parameter (no trailing identifier) is named by
inserting the identifier after its `***` declarator.

Usage:
    python tools/csp_export/x90_fix_param_names.py            # dry
    python tools/csp_export/x90_fix_param_names.py --apply
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
EVID = ROOT / '.omo' / 'evidence' / 'optimization' / 'x90'

PLAN = [
    # W2 direct: body uses aN, definition parameter lost/shifted that name
    ('src/e4/Terrain_e4.cpp', 'Terrain::FloodFillConnectivity', {1: 'a2', 2: 'a3'}),
    ('src/e4/GameMode_e4.cpp', 'GameMode_e4::ReadFlagsFromINI', {0: 'a2'}),
    ('src/e4/FoggedObjectClass_e4.cpp', 'FoggedObjectClass::Constructor', {0: 'a2'}),
    ('src/e4/ObjectClass_e4.cpp', 'ObjectClass::FindPlacementCell', {2: 'a3'}),
    ('src/e4/TextRenderer_e4.cpp', 'TextRenderer::MeasureBuilding',
     {1: 'a3', 2: 'a4', 3: 'a5'}),
    ('src/e4/Dialog_e4.cpp', 'Dialog::ShowMessageBox', {2: 'a3', 3: 'a4'}),
    ('src/e4/ConnectionPointClass_e4.cpp', 'ConnectionPointClass::Unadvise',
     {1: 'a2'}),
    ('src/e4/CoordStruct_e4.cpp', 'CoordStruct::Set2',
     {0: 'a2', 1: 'a3', 2: 'a4', 3: 'a5', 4: 'a6'}),
    ('src/e4/DynamicVector_e4.cpp', 'DynamicVector::Add', {1: 'a2'}),
    ('src/e4/SlaveManagerClass_e4.cpp', 'SlaveManagerClass::ctor', {0: 'a2'}),
]


def split_params(s):
    out, depth, cur = [], 0, ''
    for ch in s:
        if ch in '(<[':
            depth += 1
        elif ch in ')>]':
            depth -= 1
        if ch == ',' and depth == 0:
            out.append(cur)
            cur = ''
        else:
            cur += ch
    if cur.strip():
        out.append(cur)
    return out


def find_param_list(text, qualified):
    """(open_idx, close_idx) of the definition's parameter list.

    Match the DEFINITION, not an in-body call: the text from the line start
    to the qualified name must be a plain return-type prefix (no `=`,
    `return`, call parenthesis or member access), and the parameter list
    must be followed by `{` (allowing whitespace/newlines).
    """
    pat = re.compile(r'^([^\n;]*?)\b' + re.escape(qualified) + r'\s*\(', re.M)
    for m in pat.finditer(text):
        prefix = m.group(1)
        if re.search(r'[=()]|\breturn\b|\.', prefix):
            continue
        op = text.index('(', m.start())
        depth = 0
        i = op
        while i < len(text):
            c = text[i]
            if c == '(':
                depth += 1
            elif c == ')':
                depth -= 1
                if depth == 0:
                    break
            i += 1
        else:
            continue
        tail = text[i + 1:i + 80]
        if not re.match(r'^\s*\{', tail):
            continue
        return op, i
    return None


def rename_segment(seg, target):
    """Return seg with its parameter identifier renamed to target."""
    # function-pointer declarator: int (__stdcall ***)(args)
    fp = re.search(r'(\*+\s*)\)\s*\(', seg)
    if fp and not re.search(r'[A-Za-z_]\w*\s*$', seg):
        return seg[:fp.end(1)] + target + seg[fp.end(1):]
    m = re.match(r'^(.*?)([A-Za-z_]\w*)(\s*)$', seg)
    if not m:
        return seg
    return m.group(1) + target + m.group(3)


def main():
    EVID.mkdir(parents=True, exist_ok=True)
    ledger = []
    writes = []
    for rel, qual, mapping in PLAN:
        p = ROOT / rel
        raw = p.read_bytes()
        text = raw.decode('utf-8')
        loc = find_param_list(text, qual)
        if not loc:
            ledger.append({'file': rel, 'function': qual, 'status': 'no-def'})
            continue
        op, cl = loc
        inner = text[op + 1:cl]
        segs = split_params(inner)
        before = [s.strip() for s in segs]
        ok = True
        for idx, target in mapping.items():
            if idx >= len(segs):
                ok = False
                ledger.append({'file': rel, 'function': qual, 'status':
                               'arity-short', 'index': idx})
                break
            segs[idx] = rename_segment(segs[idx], target)
        if not ok:
            continue
        new_inner = ','.join(segs)
        new_text = text[:op + 1] + new_inner + text[cl:]
        after = [s.strip() for s in split_params(new_inner)]
        ledger.append({'file': rel, 'function': qual, 'status':
                       'apply' if APPLY else 'dry',
                       'before': before, 'after': after})
        if new_text != text:
            writes.append((rel, new_text))
    print('functions=%d changed=%d apply=%s' % (len(PLAN), len(writes), APPLY))
    for w in ledger:
        if w['status'] in ('apply', 'dry'):
            print('  %-48s %s' % (w['function'], w['status']))
            print('     BEFORE: ' + ' | '.join(w['before']))
            print('     AFTER : ' + ' | '.join(w['after']))
    if APPLY:
        for rel, new_text in writes:
            (ROOT / rel).write_bytes(new_text.encode('utf-8'))
    (EVID / ('x90_w2_params_%s.json' % ('apply' if APPLY else 'dry'))).write_text(
        json.dumps(ledger, ensure_ascii=False, indent=1), encoding='utf-8')
    if not APPLY:
        print('DRY -- pass --apply to write')


if __name__ == '__main__':
    main()
