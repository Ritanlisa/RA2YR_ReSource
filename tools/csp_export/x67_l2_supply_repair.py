#!/usr/bin/env python3
"""X67 L2 — Lane A corpus-repair + include-supply (CSP production layer).

Families (all measured in X67 P0 diagnosis, .omo/evidence/optimization/x67/):
  R1  double-qualified def heads  `Cls::Cls::Method(` -> `Cls::Method(`
      (invalid C++ qualification, parse-chaos root; hpp decls already single)
  R2  IDA pseudo-callconv strip: `__usercall `/`__userpurge ` tokens +
      `@<eax>`/`@<cf>` register annotations -> real C++ function-pointer syntax
  R3  glue-call repair: a pass ate the `(` after a callee name leaving
      `Calleeethis->x, y);` -> re-insert `(`. WHITELIST of verified callees
      only (42 sites, existence checked vs tree in X67 P0):
      libc/tree: wcsncpy/strcpy/wcscpy/_strupr/memset/DeleteAndZero
      audio: SetupSampleAudioMixer/SetRateMixerSample  gfx: EncodeBitmapRGB
      method: WideString::Assign/WideString::AssignFromPtr/
              TerritorySelectWDT_Delete
      Shape B: `Tactical::GetCellDatav44->m` -> `Tactical::GetCellData(v44)->m`
  R4  include supply (decl exists in a CSP-produced pool header; TU lacks
      visibility or the include sits after the first use):
      tag.cpp        move e4_globals_decls.hpp include above first use (L380->top)
      init_game.cpp  += core/cmdline.hpp        (byte_A8B8B4 @ cmdline.hpp:60)
      load_options.cpp += core/globals_core.hpp (MultiByteStr @ globals_core.hpp:169)
      menu_globals_gen.cpp += csp_canon/classes.hpp (C2653 Network/IsRandMap/...)
      waypoint_bodies.cpp  += csp_canon/classes.hpp (C2653 Array)

Usage: python x67_l2_supply_repair.py            # dry run
       python x67_l2_supply_repair.py --apply
"""
import re, sys, os, json
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
APPLY = '--apply' in sys.argv
LEDGER = os.path.join(HERE, 'x67_l2_ledger.json')

stats = Counter()
ledger = []
banked = []


def edit(path, lineno, before, after, family):
    ledger.append({'file': os.path.relpath(path, ROOT), 'line': lineno,
                   'family': family, 'before': before.rstrip('\r'), 'after': after.rstrip('\r')})


def process():
    # ---- R4 include supply -------------------------------------------------
    INC = [
        ('src/team/tag.cpp', None, 'MOVE'),  # move :380 include to top block
        ('src/core/init_game.cpp', 'core/cmdline.hpp', 'ADD'),
        ('src/core/load_options.cpp', 'core/globals_core.hpp', 'ADD'),
        ('src/core/menu_globals_gen.cpp', 'csp_canon/classes.hpp', 'ADD'),
        ('src/system/waypoint_bodies.cpp', 'csp_canon/classes.hpp', 'ADD'),
    ]
    for rel, inc, mode in INC:
        p = os.path.join(ROOT, rel)
        text = open(p, encoding='utf-8', errors='replace', newline='').read()
        lines = text.split('\n')
        crlf = '\r\n' in text
        if mode == 'ADD':
            if any(f'#include "{inc}"' in l for l in lines):
                stats['r4-already'] += 1
                continue
            if not APPLY:
                stats['r4-include-added'] += 1
                continue
            # anchor at tail of the leading include block (X65 discipline)
            last_inc = max(i for i, l in enumerate(lines) if l.startswith('#include '))
            eol = '\r\n' if crlf else '\n'
            lines.insert(last_inc + 1, f'#include "{inc}"  // X67 L2-R4 visibility supply' + eol.rstrip())
            edit(p, last_inc + 2, '<inserted>', f'#include "{inc}"', 'R4-include')
            open(p, 'w', encoding='utf-8', errors='replace', newline='').write('\n'.join(lines))
            stats['r4-include-added'] += 1
        else:  # MOVE
            idx = [i for i, l in enumerate(lines) if 'e4_globals_decls.hpp' in l and l.strip().startswith('#include')]
            if not idx:
                stats['r4-move-miss'] += 1
                continue
            move_idx = idx[0]
            if move_idx < 100:
                stats['r4-move-ok-already'] += 1
                continue
            if not APPLY:
                stats['r4-include-moved'] += 1
                continue
            inc_line = lines.pop(move_idx)
            # anchor after the last top-of-file include before line 100
            last_inc = max(i for i, l in enumerate(lines[:100]) if l.startswith('#include '))
            lines.insert(last_inc + 1, inc_line)
            edit(p, move_idx + 1, inc_line, f'{inc_line}  <!-- moved to {last_inc + 2} -->', 'R4-include-move')
            open(p, 'w', encoding='utf-8', errors='replace', newline='').write('\n'.join(lines))
            stats['r4-include-moved'] += 1

    # ---- R1/R2/R3 line repairs ---------------------------------------------
    DP_RE = re.compile(r'^(\s*(?:[A-Za-z_][\w:]*\s+)*)([A-Za-z_]\w*)::\2::')
    USERCC_RE = re.compile(r'__user(?:call|purge)\s*')
    REGANN_RE = re.compile(r'@<[A-Za-z0-9_:,\s]+>')
    GLUE_CALLEES = [
        'WideString::AssignFromPtr', 'WideString::Assign', 'TerritorySelectWDT_Delete',
        'SetupSampleAudioMixer', 'SetRateMixerSample', 'EncodeBitmapRGB',
        'DeleteAndZero', '_strupr', 'wcsncpy', 'wcscpy', 'strcpy', 'memset',
    ]
    GLUE_RX = re.compile(
        r'^(?P<pre>[^();]*?)'
        r'(?P<callee>' + '|'.join(re.escape(c) for c in sorted(GLUE_CALLEES, key=len, reverse=True)) + r')'
        r'this->(?P<rest>[^()]*?)\);(?P<tail>\s*/\*0x[0-9A-Fa-f]{6}\*/)?[ \t]*\r?$')
    GLUEB_RX = re.compile(
        r'^(?P<pre>[^();]*?)(?P<qual>[A-Za-z_]\w*::)(?P<callee>GetCellData)(?P<var>v\d+)(?P<rest>->.*)[ \t]*\r?$')

    for dirpath, _dirs, files in os.walk(os.path.join(ROOT, 'src')):
        for fn in sorted(files):
            if not fn.endswith('.cpp'):
                continue
            p = os.path.join(dirpath, fn)
            text = open(p, encoding='utf-8', errors='replace', newline='').read()
            lines = text.split('\n')
            changed = False
            for i, ln in enumerate(lines):
                if '/* X11: vtable install elided' in ln:
                    continue
                # R1
                m = DP_RE.match(ln)
                if m:
                    fixed = DP_RE.sub(lambda mm: mm.group(1) + mm.group(2) + '::', ln, count=1)
                    edit(p, i + 1, ln, fixed, 'R1-double-prefix')
                    lines[i] = fixed
                    changed = True
                    stats['r1'] += 1
                    continue
                # R2
                if '__usercall' in ln or '__userpurge' in ln:
                    fixed = USERCC_RE.sub('', ln)
                    fixed2 = REGANN_RE.sub('', fixed)
                    if '@<' in fixed2:
                        banked.append([os.path.relpath(p, ROOT), i + 1, 'r2-ann-leftover', ln.strip()[:110]])
                        continue
                    if fixed2 != ln:
                        edit(p, i + 1, ln, fixed2, 'R2-usercall-strip')
                        lines[i] = fixed2
                        changed = True
                        stats['r2'] += 1
                    continue
                # R3 shape B first (GetCellData(v44)->m)
                m = GLUEB_RX.match(ln)
                if m:
                    fixed = (m.group('pre') + m.group('qual') + m.group('callee')
                             + '(' + m.group('var') + ')' + m.group('rest'))
                    edit(p, i + 1, ln, fixed, 'R3-glue-shapeB')
                    lines[i] = fixed
                    changed = True
                    stats['r3b'] += 1
                    continue
                # R3 shape A (whitelisted callee, orphan `);` line)
                m = GLUE_RX.match(ln)
                if m:
                    fixed = (m.group('pre') + m.group('callee')
                             + '(this->' + m.group('rest') + ');' + (m.group('tail') or ''))
                    edit(p, i + 1, ln, fixed, 'R3-glue-shapeA')
                    lines[i] = fixed
                    changed = True
                    stats['r3a'] += 1
                    continue
            if changed and APPLY:
                open(p, 'w', encoding='utf-8', errors='replace', newline='').write('\n'.join(lines))


def main():
    process()
    print('stats:')
    for k, v in sorted(stats.items()):
        print(f'  {k:24s} {v}')
    print(f'edits: {len(ledger)}  banked: {len(banked)}')
    print('\nsamples:')
    for e in ledger[:20]:
        print(f"  [{e['family']}] {e['file']}:{e['line']}")
        print(f'    - {e["before"][:130]}')
        print(f'    + {e["after"][:130]}')
    for b in banked[:8]:
        print('  BANK %s:%s %s %s' % tuple(b))
    if not APPLY:
        print('\nDRY RUN (use --apply)')
    json.dump({'stats': dict(stats), 'edits': ledger, 'banked': banked, 'applied': APPLY},
              open(LEDGER, 'w'), indent=1)
    if APPLY:
        print(f'APPLIED: {len(ledger)} edits')


if __name__ == '__main__':
    main()
