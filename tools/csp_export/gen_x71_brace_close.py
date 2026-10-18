#!/usr/bin/env python3
"""X71 wave-1 fixer: whole-TU structure breakers.

Families (see x71/X71_P0_REPORT.md):
  APPEND  - mid-file namespace re-open (or split-name/W5-orphan bare `{`)
            with no closer -> append matching `} // namespace X` at EOF.
            W5 orphans (connection/mix_file/sidebar) get a `namespace gamemd`
            line re-inserted before the bare `{` (pre-d05ca92b git evidence).
  ADDR53  - one over-close `}` at line 641 (underflow-verified) -> delete.
  PAREN   - `#375` til-ordinal casts -> `HouseClass` (export self-consistency
            BuildingClass.cpp:38397 + house.hpp:151 signature), `this->?` ->
            `this->owner` (export L4652), addr53:1503 missing `)` in vt-call.

NOT touched: utility_ext.hpp (X25 pp-conditional false positive),
addr72_e4.cpp backtick RTTI descriptors (BLOCKED: needs IDA-online descriptor
addresses + new-symbol pipeline approval), building/infantry/structure-
gap2_defs surgical files (wave 2).

Dry by default; --apply writes. Byte-preserving latin-1 I/O; EOL profile
and trailing-newline state preserved. Idempotent: second run = 0 ops.
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

# ---- APPEND family: file -> expected census delta (sanity gate) ----
APPEND_FILES = {
    'src/core/checksummer.cpp': 1,
    'src/core/game_loop.cpp': 1,
    'src/core/globals.cpp': 1,
    'src/core/hash_table.cpp': 1,
    'src/core/load_options.cpp': 1,
    'src/core/stream_ext.cpp': 1,
    'src/core/utility_ext_bodies.cpp': 1,
    'src/e4/IsometricTileClass_e4.cpp': 1,
    'src/e4/TeleportLocomotionClass_e4.cpp': 1,
    'src/entity/rad_site.cpp': 1,
    'src/misc/audio.cpp': 1,
    'src/misc/audio_ext.cpp': 1,
    'src/misc/locomotion_bodies.cpp': 1,
    'src/misc/misc_ext.cpp': 1,
    'src/misc/movement_ext.cpp': 1,
    'src/network/connection.cpp': 1,
    'src/network/winsock.cpp': 1,
    'src/object/abstract.cpp': 2,
    'src/object/foot.cpp': 2,
    'src/object/gap2_defs.cpp': 2,
    'src/object/object.cpp': 2,
    'src/object/techno.cpp': 1,
    'src/render/display.cpp': 1,
    'src/render/render_ext.cpp': 1,
    'src/render/surface.cpp': 1,
    'src/structure/aircraft.cpp': 1,
    'src/structure/building_bodies.cpp': 1,
    'src/structure/unit.cpp': 1,
    'src/system/cc_file.cpp': 1,
    'src/system/cell.cpp': 1,
    'src/system/convert_class.cpp': 1,
    'src/system/factory.cpp': 1,
    'src/system/game_systems_bodies.cpp': 1,
    'src/system/map.cpp': 1,
    'src/system/mix_file.cpp': 1,
    'src/system/scenario.cpp': 1,
    'src/system/tactical.cpp': 1,
    'src/team/tag.cpp': 1,
    'src/team/trigger.cpp': 1,
    'src/type/bullet_type.cpp': 1,
    'src/ui/command_ext_bodies.cpp': 1,
    'src/ui/dialog_win32.cpp': 2,
    'src/ui/gadget.cpp': 1,
    'src/ui/sidebar.cpp': 1,
    'src/wdt/gap2_defs.cpp': 2,
    'src/wdt/wdt.cpp': 2,
}
W5_ORPHANS = {'src/network/connection.cpp', 'src/system/mix_file.cpp',
              'src/ui/sidebar.cpp'}

ADDR53_OVERCLOSE_LINE = 641  # 1-based

# ---- PAREN family: (file, line_1based, old, new, count) ----
PAREN_EDITS = [
    ('src/e4/AircraftClass_e4.cpp', 372, '(#375 **)', '(HouseClass **)', 1),
    ('src/e4/AircraftClass_e4.cpp', 372, '(#375 *)', '(HouseClass *)', 1),
    ('src/e4/AircraftClass_e4.cpp', 372, 'this->?', 'this->owner', 1),
    ('src/e4/Diplomacy_e4.cpp', 103, '(#375 *)', '(HouseClass *)', 1),
    ('src/e4/Diplomacy_e4.cpp', 106, '(#375 *)', '(HouseClass *)', 1),
    ('src/e4/LightningStorm_e4.cpp', 73, '(#375 **)', '(HouseClass **)', 1),
    ('src/e4/SuperWeaponTypeClass_e4.cpp', 598, '(#375 **)', '(HouseClass **)', 1),
    ('src/e4/SuperWeaponTypeClass_e4.cpp', 598, '(#375 *)', '(HouseClass *)', 1),
    ('src/e4/TabClass_e4.cpp', 76, '(#375 *)', '(HouseClass *)', 1),
    ('src/e4/TabClass_e4.cpp', 100, '(#375 *)', '(HouseClass *)', 1),
    ('src/e4/addr53_e4.cpp', 1503,
     ')(v5->vtable2)(v5, DSurface_Composite, 0, 1);',
     ')(v5->vtable2))(v5, DSurface_Composite, 0, 1);', 1),
]

NS_NAME_RE = re.compile(r'^\s*namespace\s+([A-Za-z_]\w*)\s*$')


def walk_stack(lines):
    """Brace stack over code tokens; returns final stack items
    (line, text) and underflow lines."""
    stack = []
    under = []
    inblk = False
    inpp = False
    for i, ln in enumerate(lines):
        is_pp = inpp or ln.lstrip().startswith('#')
        if inpp:
            inpp = ln.rstrip('\r\n').endswith('\\')
        j = 0
        n = len(ln)
        instr = None
        while j < n:
            c = ln[j]
            if inblk:
                if ln.startswith('*/', j):
                    inblk = False
                    j += 2
                    continue
                j += 1
                continue
            if instr:
                if c == '\\':
                    j += 2
                    continue
                if c == instr:
                    instr = None
                j += 1
                continue
            if c == '"':
                instr = '"'
                j += 1
                continue
            if c == "'":
                instr = "'"
                j += 1
                continue
            if ln.startswith('/*', j):
                inblk = True
                j += 2
                continue
            if c == '/' and j + 1 < n and ln[j + 1] == '/':
                break
            if not is_pp:
                if c == '{':
                    stack.append((i + 1, ln.strip()[:70]))
                elif c == '}':
                    if stack:
                        stack.pop()
                    else:
                        under.append(i + 1)
            j += 1
    return stack, under


def ns_closers_for(path, lines, stack):
    """Map unmatched openers -> ordered closer lines (innermost first).

    Stack entries sharing one opener line (e.g. `namespace ra2 { namespace
    game {`) are grouped: entry k from the end of the line takes names[k],
    so a +2 line yields exactly 2 closers (game, ra2) - never 4.
    """
    closers = []
    i = 0
    n = len(stack)
    while i < n:
        lineno, text = stack[i]
        # group all stack entries opened on this same line
        j = i
        while j < n and stack[j][0] == lineno:
            j += 1
        group = stack[i:j]          # in open order (left brace first)
        names = re.findall(r'namespace\s+([A-Za-z_][\w:]*)\s*\{', text)
        if len(names) >= len(group) and len(group) >= 1 and names:
            # braces closed from the innermost end; the still-open ones are
            # the FIRST len(group) names of the line (e.g. techno.cpp: tail
            # `}` closed `game`, leaving outer `ra2` -> closer = ra2 only).
            open_names = names[:len(group)]
            for nm in reversed(open_names):
                closers.append('} // namespace %s' % nm.split('::')[-1])
        elif len(group) == 1:
            entry_line, entry_text = group[0]
            if entry_text.strip() == '{':
                # split-name or W5-orphan: name-only ns line within 3 lines
                nm = None
                for k in range(entry_line - 2, max(-1, entry_line - 5), -1):
                    m = NS_NAME_RE.match(lines[k])
                    if m:
                        nm = m.group(1)
                        break
                if nm is None:
                    nm = 'gamemd'  # W5-orphan (pre-d05ca92b evidence)
                closers.append('} // namespace %s' % nm)
            else:
                raise SystemExit('FAIL %s: unexpected unmatched opener L%d: %r'
                                 % (path, entry_line, entry_text))
        else:
            raise SystemExit('FAIL %s: %d stack entries vs %d ns names at L%d'
                             % (path, len(group), len(names), lineno))
        i = j
    return closers


def detect_eol(lines):
    for ln in reversed(lines):
        if ln.strip():
            return '\r' if ln.endswith('\r') else ''
    return ''


def main():
    ledger = {'append': {}, 'w5_orphan': {}, 'addr53': None, 'paren': [],
              'skipped': []}
    n_ops = 0

    # ---- APPEND family ----
    for rel, expect in sorted(APPEND_FILES.items()):
        p = ROOT / rel
        raw = p.read_bytes()
        lines = raw.decode('latin-1').split('\n')
        stack, under = walk_stack(lines)
        if under or not stack:
            ledger['skipped'].append((rel, 'stack=%d under=%s'
                                      % (len(stack), under[:3])))
            continue
        delta = sum(1 for _ in stack)
        # total code delta must equal unmatched count (no hidden underflow)
        if delta != expect:
            ledger['skipped'].append((rel, 'unmatched=%d != expected %d'
                                      % (delta, expect)))
            continue
        closers = ns_closers_for(rel, lines, stack)
        eol = detect_eol(lines)
        ins = len(lines)
        if lines and lines[-1].strip() == '':
            ins -= 1  # keep trailing-newline state
        new_lines = lines[:ins] + [c + eol for c in closers] + lines[ins:]
        ledger['append'][rel] = {'closers': closers, 'at_eof_line': ins + 1}
        n_ops += len(closers)
        if rel in W5_ORPHANS:
            # insert `namespace gamemd` before the bare `{` opener line
            opener_line = stack[0][0]
            idx = opener_line - 1
            if lines[idx].strip() != '{':
                ledger['skipped'].append((rel, 'orphan opener mismatch'))
                continue
            new_lines.insert(idx, 'namespace gamemd' + eol)
            ledger['w5_orphan'][rel] = {'inserted_at': opener_line}
        if new_lines != lines:
            if APPLY:
                p.write_bytes('\n'.join(new_lines).encode('latin-1'))

    # ---- addr53 over-close ----
    p = ROOT / 'src/e4/addr53_e4.cpp'
    lines = p.read_bytes().decode('latin-1').split('\n')
    tgt = lines[ADDR53_OVERCLOSE_LINE - 1]
    if tgt.strip() == '}' and lines[ADDR53_OVERCLOSE_LINE - 2].strip() == '}' \
            and lines[ADDR53_OVERCLOSE_LINE - 3].strip() == 'return 1; /*0x534438*/':
        # wave-1 deletes the paren-site line shift: delete AFTER paren edits
        # to keep PAREN line numbers valid -> handled below in paren phase.
        ledger['addr53'] = {'delete_line': ADDR53_OVERCLOSE_LINE,
                            'text': tgt.strip()}
    else:
        ledger['skipped'].append(('src/e4/addr53_e4.cpp',
                                  'overclose site drifted: %r' % tgt[:40]))

    # ---- PAREN family (line numbers valid BEFORE addr53 deletion) ----
    per_file = {}
    for rel, lineno, old, new, cnt in PAREN_EDITS:
        p = ROOT / rel
        lines = p.read_bytes().decode('latin-1').split('\n')
        ln = lines[lineno - 1]
        c = ln.count(old)
        if c != cnt:
            ledger['skipped'].append(('%s:%d' % (rel, lineno),
                                      'pattern x%d != x%d: %r'
                                      % (c, cnt, old)))
            continue
        lines[lineno - 1] = ln.replace(old, new)
        per_file.setdefault(rel, lines)
        ledger['paren'].append({'file': rel, 'line': lineno,
                                'old': old, 'new': new})
        n_ops += 1
        if APPLY:
            p.write_bytes('\n'.join(lines).encode('latin-1'))

    # ---- addr53: paren edit first, then over-close delete (drift-safe) ----
    if ledger['addr53']:
        p = ROOT / 'src/e4/addr53_e4.cpp'
        lines = p.read_bytes().decode('latin-1').split('\n')
        if lines[ADDR53_OVERCLOSE_LINE - 1].strip() == '}':
            del lines[ADDR53_OVERCLOSE_LINE - 1]
            n_ops += 1
            if APPLY:
                p.write_bytes('\n'.join(lines).encode('latin-1'))
            ledger['addr53']['deleted'] = True

    print('ops:', n_ops)
    print('append files:', len(ledger['append']),
          ' closers:', sum(len(v['closers']) for v in ledger['append'].values()))
    print('w5 orphans:', len(ledger['w5_orphan']))
    print('addr53 deleted:', bool(ledger['addr53'] and ledger['addr53'].get('deleted')))
    print('paren edits:', len(ledger['paren']))
    if ledger['skipped']:
        print('SKIPPED:')
        for s in ledger['skipped']:
            print('  ', s)
    out = Path(__file__).with_name('x71_wave1_ledger.json')
    out.write_text(json.dumps(ledger, indent=1), encoding='utf-8')
    print('wrote', out)
    print('APPLIED' if APPLY else 'DRY RUN (use --apply)')


if __name__ == '__main__':
    main()
