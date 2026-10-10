#!/usr/bin/env python3
"""G42.29h: namespace-own the 5 bridge-colliding class fwds (C2874 + C3668).

gamemd-native `class ObjectClass;` fwds in non-e4 headers collide with the
`using ra2::game::ObjectClass;` bridge those TUs later pull (C2874 x212);
the native fwd then wins lookup as an incomplete base -> every override
fires C3668 (x508 cascade). Fix per audio.hpp precedent: re-own the fwd
into ra2::game and emit the guarded using ourselves, so downstream
macro-guarded usings no-op:

    class X;    ->
    namespace ra2::game { class X; }
    #ifndef GAMEMD_USING_X
    #define GAMEMD_USING_X
    using ra2::game::X;
    #endif

Usage: [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
TARGETS = {
    'ObjectClass', 'AbstractClass', 'TechnoClass', 'AudioController',
    'FootClass',
}

# non-e4, non-canon headers carrying gamemd-native fwds (agent-F inventory)
HEADERS = [
    'src/core/utility_ext.hpp', 'src/misc/misc_ext.hpp',
    'src/misc/rules.hpp', 'src/misc/audio_ext.hpp',
    'src/misc/movement_ext.hpp', 'src/render/render_ext.hpp',
    'src/house/house.hpp', 'src/object/bomb.hpp', 'src/object/temporal.hpp',
    'src/object/parasite.hpp', 'src/object/capture_manager.hpp',
    'src/system/map.hpp', 'src/system/cell.hpp', 'src/system/factory.hpp',
    'src/team/team.hpp',
]

# Correct form: the ra2::game fwd must be the GLOBAL entity (same one all
# other headers bind to). Emitting `namespace ra2::game { class X; }` while
# inside namespace gamemd would declare gamemd::ra2::game::X -- a distinct
# type splitting identity (C2873/C2504 storm, G42.29h second incident).
# So: close gamemd, declare globally, reopen, then the guarded using with
# a ::-anchored target.
REPL = ('} // namespace gamemd (bridge re-own, G42.29h)\n'
        '%(ind)snamespace ra2 { namespace game { class %(n)s; } }\n'
        '%(ind)snamespace gamemd {\n'
        '%(ind)s#ifndef GAMEMD_USING_%(n)s\n'
        '%(ind)s#define GAMEMD_USING_%(n)s\n'
        '%(ind)susing ::ra2::game::%(n)s;\n'
        '%(ind)s#endif')

n = 0
for rel in HEADERS:
    p = ROOT / rel
    if not p.exists():
        continue
    lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    ch = False
    # namespace context tracking: only gamemd-scope (or global) fwds are the
    # colliding native ones; ra2::game-scope fwds are the bridge SOURCE and
    # must stay untouched (G42.29h parasite.hpp incident).
    ns_stack = []
    for i, ln in enumerate(lines):
        m = re.match(r'\s*namespace\s+([\w:]+)', ln)
        if m:
            ns_stack.append(m.group(1))
            continue
        if re.match(r'\s*\}\s*(?://.*)?$', ln) and ns_stack:
            ns_stack.pop()
            continue
        mm = re.match(r'^(\s*)class (\w+);\s*$', ln)
        if not mm or mm.group(2) not in TARGETS:
            continue
        if ns_stack and ns_stack[-1] != 'gamemd':
            continue  # ra2::game or other scope: not a native fwd
        if not ns_stack:
            continue  # global scope: REPL's close/reopen assumes gamemd
        # skip if the ra2::game re-own already present nearby (idempotence)
        ctx = '\n'.join(lines[max(0, i - 1):i + 6])
        if 'ra2::game { class %s' % mm.group(2) in ctx:
            continue
        indent = mm.group(1)
        block = REPL % {'ind': indent, 'n': mm.group(2)}
        lines[i] = block
        ch = True
        n += 1
    if ch and APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
    if ch:
        print('re-owned fwd in', rel)

print('fwds re-owned:', n, '' if APPLY else '(dry -- pass --apply)')
