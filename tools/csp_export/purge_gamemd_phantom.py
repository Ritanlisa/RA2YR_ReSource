#!/usr/bin/env python3
"""Purge the phantom `gamemd` class from canon data (G42.57ax, 2026-10-09).

Root cause: step-4 offset-access supply registered receiver offset
observations under class key 'gamemd' when the receiver class name was
unknown (bare namespace bucket). A class named `gamemd` inside
`namespace gamemd` NAME-HIDES the namespace itself, so every `gamemd::X`
qualified reference inside the corpus resolves against the phantom class:
  - src/csp_canon/classes.hpp: `class gamemd;` + full `class gamemd {}` def
  - src/e4/classes/_fwd_e4.hpp: `struct gamemd;`
  -> ~588 e4 TUs x ~9 errors of C2027 "gamemd::gamemd undefined" +
     C2327 "gamemd::ObjectClass::AbstractClass not a type" cascades.

Fix: drop the key from both data files. Generator-level guards
(gen_cpp_canon.py / gen_e4_fwd.py) prevent reintroduction.

Usage: python tools/csp_export/purge_gamemd_phantom.py [--apply]
"""
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
TARGETS = [ROOT / 'anchors' / 'csp_canon_members.json',
           ROOT / 'tools' / 'member_lookup.json']
# member_types.json keys are composite `Class+0xOFF`; the phantom leaked
# there too and `k.rsplit('+',1)[0]` re-seeds the class into every regen
MTYPES = ROOT / 'anchors' / 'member_types.json'
# signals.json carries the reverse member-name index; the phantom class
# leaked a 'gamemd' entry there too (gen_cpp_canon absorbs _member_by_name
# keys into the class universe, so this alone re-poisons classes.hpp)
SIGNALS = ROOT / 'signals.json'


def main():
    changed = False
    for p in TARGETS:
        d = json.loads(p.read_text(encoding='utf-8'))
        if 'gamemd' in d:
            print(f"{p.name}: removing phantom key 'gamemd' "
                  f"({len(d['gamemd'])} entries)")
            del d['gamemd']
            changed = True
            if APPLY:
                tmp = str(p) + '.tmp'
                with open(tmp, 'w', encoding='utf-8') as f:
                    json.dump(d, f, ensure_ascii=False)
                Path(tmp).replace(p)
        else:
            print(f"{p.name}: clean")
    md = json.loads(MTYPES.read_text(encoding='utf-8'))
    ghost = [k for k in md if k.split('+', 1)[0] in ('gamemd', 'ra2')]
    if ghost:
        print(f"member_types.json: removing {len(ghost)} composite "
              f"phantom keys (gamemd+0x...)")
        for k in ghost:
            del md[k]
        changed = True
        if APPLY:
            tmp = str(MTYPES) + '.tmp'
            with open(tmp, 'w', encoding='utf-8') as f:
                json.dump(md, f, ensure_ascii=False)
            Path(tmp).replace(MTYPES)
    else:
        print('member_types.json: composite keys clean')
    sd = json.loads(SIGNALS.read_text(encoding='utf-8'))
    mbn = sd.get('_member_by_name') or {}
    if 'gamemd' in mbn:
        print(f"signals.json: removing orphan _member_by_name['gamemd'] "
              f"({len(mbn['gamemd'])} offsets)")
        del mbn['gamemd']
        changed = True
        if APPLY:
            tmp = str(SIGNALS) + '.tmp'
            with open(tmp, 'w', encoding='utf-8') as f:
                json.dump(sd, f, ensure_ascii=False)
            Path(tmp).replace(SIGNALS)
    else:
        print('signals.json: _member_by_name clean')
    print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
    return 0 if (changed or APPLY) else 1


if __name__ == '__main__':
    sys.exit(main())
