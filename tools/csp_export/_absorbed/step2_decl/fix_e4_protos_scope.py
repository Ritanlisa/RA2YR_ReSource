#!/usr/bin/env python3
"""X27: re-scope stray global-scope prototypes in src/e4/e4_protos.h.

e4_protos.h is a cumulative artifact: several generations of proto-supply
passes appended declarations AFTER the final `} // namespace gamemd` line,
leaving them at GLOBAL scope.  Any such line that references a gamemd-only
type (e.g. `int Event_Process_746D90(TechnoClass *p_this);` -- TechnoClass
is declared inside namespace gamemd) then fails C2065 in every consumer TU
(x2 raw per TU: the type + the derived param).

Fix: for every top-level declaration line outside the namespace that
references an identifier known to be a gamemd-namespace class (from
_fwd_e4.hpp / classes defs), wrap the contiguous stray block in its own
`namespace gamemd { ... }` block.  Idempotent: lines already inside any
namespace block are skipped.

Usage: python fix_e4_protos_scope.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
PROTOS = ROOT / 'src' / 'e4' / 'e4_protos.h'
FWD = ROOT / 'src' / 'e4' / 'classes' / '_fwd_e4.hpp'
APPLY = '--apply' in sys.argv

# gamemd-scope class names (fwd decls in _fwd_e4.hpp)
gamemd_types = set(re.findall(
    r'^\s*struct\s+([A-Za-z_]\w*)\s*;',
    FWD.read_text(encoding='utf-8', errors='replace'), re.M))
# the four vector names are emitted under a guard; still gamemd types
gamemd_types |= {'VectorClass', 'DynamicVectorClass', 'TypeList', 'LinkedList'}

DECL_RE = re.compile(
    r'^\s*(?:extern\s+)?[A-Za-z_][\w\s\*&<>:,]*?\s+'
    r'(?P<name>[A-Za-z_]\w*)\s*\([^;]*\)\s*;\s*(?://.*)?$')
IDENT_RE = re.compile(r'\b([A-Za-z_]\w*)\b')


def ns_depth_track(lines):
    """Return per-line flag: True if the line starts inside a namespace block."""
    depth = 0
    flags = []
    for l in lines:
        flags.append(depth > 0)
        depth += l.count('{') - l.count('}')
        if depth < 0:
            depth = 0
    return flags


def main():
    text = PROTOS.read_text(encoding='utf-8', errors='replace')
    lines = text.split('\n')
    flags = ns_depth_track(lines)

    # find stray top-level decl lines referencing gamemd types
    stray = []
    for i, l in enumerate(lines):
        if flags[i]:
            continue
        m = DECL_RE.match(l)
        if not m:
            continue
        if m.group('name') in ('namespace', 'struct', 'class'):
            continue
        toks = set(IDENT_RE.findall(l.split('//')[0]))
        if toks & gamemd_types:
            stray.append(i)
    if not stray:
        print('e4_protos.h: 0 stray decls (idempotent no-op)')
        return

    # wrap contiguous runs (allow blank/comment gaps <= 3 lines)
    runs = []
    cur = [stray[0]]
    for i in stray[1:]:
        if i - cur[-1] <= 4:
            cur.append(i)
        else:
            runs.append(cur)
            cur = [i]
    runs.append(cur)

    for run in reversed(runs):
        lo, hi = run[0], run[-1]
        lines.insert(hi + 1, '} // namespace gamemd  // X27: stray proto re-scope')
        lines.insert(lo, 'namespace gamemd {  // X27: stray proto re-scope '
                         '(was global scope)')
    if APPLY:
        PROTOS.write_text('\n'.join(lines), encoding='utf-8')
    print('e4_protos.h: %d stray decl line(s) in %d run(s) re-scoped%s'
          % (len(stray), len(runs), '' if APPLY else ' (DRY)'))
    for run in runs:
        print('   lines %d..%d: %s' % (run[0] + 1, run[-1] + 1,
                                       lines[run[0] + 1][:80].strip()))


if __name__ == '__main__':
    main()
