#!/usr/bin/env python3
"""X26: re-scope the G57a2 GAMEMD_E4_VECTOR_TREE_TRUTH marker to the TUs
that actually pull core/vector.hpp.

The G57a2 fixer (2026-10-05) marked every e4 TU whose quoted-include closure
contained BOTH core/vector.hpp and a flat vector-family declaration site.
Since then include chains drifted: 5 TUs (HouseClass_e4, CounterClass_e4,
BlowStraw_e4, ComStreamClass_e4, CommandClass_e4) still carry the marker but
their closure no longer pulls core/vector.hpp.  With the marker defined the
flat VectorClass/DynamicVectorClass definitions in _tree_full_e4.hpp yield
(GAMEMD_E4_VECTOR_TREE_TRUTH guard) and the bodies' bare flat uses degrade
to incomplete-type C2027.  Conversely a TU that pulls vector.hpp without the
marker re-triggers the C2989 template-vs-flat collision.

This fixer recomputes the closure per e4 TU and syncs the marker:
  - vector.hpp in closure  -> marker must be present
  - vector.hpp absent      -> marker must be absent
Idempotent; dry-run by default.

Usage: python tools/csp_export/_absorbed/step2_decl/fix_g57a2_macro_scope.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
E4 = ROOT / 'src' / 'e4'
INC_DIRS = [ROOT / 'src', ROOT / 'app']
APPLY = '--apply' in sys.argv
MACRO = 'GAMEMD_E4_VECTOR_TREE_TRUTH'
DEFINE_RE = re.compile(
    r'^#define\s+' + MACRO + r'\s+1[^\n]*\n', re.M)
MARKER = ('#define %s 1  // G57a2: G42.55 tree-truth bridge pulls '
          'core/vector.hpp templates\n' % MACRO)

_inc_re = re.compile(r'^\s*#\s*include\s*"([^"]+)"', re.M)


def resolve(name, includer):
    for c in [includer.parent / name] + [d / name for d in INC_DIRS]:
        if c.is_file():
            return c.resolve()
    return None


def closure(entry):
    seen, stack = set(), [entry.resolve()]
    while stack:
        p = stack.pop()
        if p in seen:
            continue
        seen.add(p)
        try:
            txt = p.read_text(encoding='latin-1', errors='replace')
        except OSError:
            continue
        for m in _inc_re.finditer(txt):
            q = resolve(m.group(1), p)
            if q and (str(q).startswith(str(ROOT / 'src'))
                      or str(q).startswith(str(ROOT / 'app'))):
                stack.append(q)
    return seen


def main():
    vec = (ROOT / 'src' / 'core' / 'vector.hpp').resolve()
    added = removed = 0
    for cpp in sorted(E4.glob('*.cpp')):
        s = cpp.read_text(encoding='utf-8', errors='replace')
        has_marker = bool(re.search(r'^#define\s+' + MACRO, s, re.M))
        has_vec = vec in closure(cpp)
        if has_vec and not has_marker:
            # insert before the first #include
            m = re.search(r'^#\s*include', s, re.M)
            if not m:
                continue
            s2 = s[:m.start()] + MARKER + s[m.start():]
            added += 1
            if APPLY:
                cpp.write_text(s2, encoding='utf-8')
        elif not has_vec and has_marker:
            s2 = DEFINE_RE.sub('', s, count=1)
            removed += 1
            if APPLY:
                cpp.write_text(s2, encoding='utf-8')
    print('marker added: %d, marker removed: %d %s'
          % (added, removed, '(written)' if APPLY else '(DRY)'))


if __name__ == '__main__':
    main()
