#!/usr/bin/env python3
"""X26: unify scalar global declarations with the ida_globals.h truth
(C2371 "redefinition; different base types" / C2040 "different levels of
indirection" family: `extern int dword_X;` locally vs `extern unsigned int
dword_X;` in the generated ida_globals.h -- 374 names + a few const/char
variants).

Rule: an `extern <type> <name>;` line whose (name) is also declared in
src/core/ida_globals.h with a different scalar type is rewritten to the
ida_globals type.  Array forms, definitions (no `extern`) and names absent
from ida_globals.h are untouched.  Idempotent; dry-run by default.

Usage: python tools/csp_export/_absorbed/step2_decl/fix_gdecl_type_conflicts.py [--apply]
"""
import glob
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv

DECL = re.compile(r'(?m)^(\s*extern\s+)([A-Za-z_][\w\s]*?)\s+(\w+)\s*(;)\s*(//.*)?$')


def load_ida():
    ida = {}
    txt = (ROOT / 'src/core/ida_globals.h').read_text(
        encoding='utf-8', errors='replace')
    for m in DECL.finditer(txt):
        ida[m.group(3)] = re.sub(r'\s+', ' ', m.group(2)).strip()
    return ida


def main():
    ida = load_ida()
    n = files = 0
    for p in (sorted(glob.glob('src/**/*.cpp', recursive=True))
              + sorted(glob.glob('src/**/*.hpp', recursive=True))
              + sorted(glob.glob('src/**/*.h', recursive=True))):
        pp = p.replace('\\', '/')
        if 'ida_globals.h' in pp:
            continue
        path = Path(p)
        try:
            s = path.read_text(encoding='utf-8', errors='replace')
        except OSError:
            continue
        out = []
        changed = False
        last = 0
        for m in DECL.finditer(s):
            name = m.group(3)
            t = re.sub(r'\s+', ' ', m.group(2)).strip()
            if name in ida and t != ida[name]:
                out.append(s[last:m.start()])
                out.append(m.group(1) + ida[name] + ' ' + name + m.group(4)
                           + ((' ' + m.group(5)) if m.group(5) else ''))
                last = m.end()
                n += 1
                changed = True
        if changed:
            out.append(s[last:])
            files += 1
            if APPLY:
                path.write_text(''.join(out), encoding='utf-8')
    suffix = '(written)' if APPLY else '(DRY)'
    print(f'extern decls unified to ida_globals types: {n} in {files} files {suffix}')


if __name__ == '__main__':
    main()
