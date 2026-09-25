#!/usr/bin/env python3
"""Drop illegal `this` receiver parameters from member-form signatures.

The redo's param alignment renames the export's receiver param to `this`,
valid for free functions but ILLEGAL in member form (`Cls::M(Type this, ..)`
— C2059/C2143). In member form the receiver is implicit; the param is
dropped from both def lines (src/e4/*.cpp) and decls (e4/classes/*.hpp).

Usage: python tools/csp_export/fix_this_param.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

TARGETS = list((ROOT / 'src' / 'e4').glob('*.cpp')) + \
          list((ROOT / 'src' / 'e4' / 'classes').glob('*_e4.hpp'))

SIG = re.compile(r'^(\s*(?:[A-Za-z_][\w\s\*<>,:&]*?)?\b\w+\s*\()'
                 r'(.+?)(\)\s*(?:;.*)?)$')


def strip_this(params):
    """params string without outer parens; drop leading `Type this[, ]`."""
    parts = split_top(params)
    if parts and re.search(r'\bthis\s*$', parts[0].strip()):
        parts = parts[1:]
        return ', '.join(p.strip() for p in parts), True
    return params, False


def split_top(s):
    out, buf, depth = [], [], 0
    for ch in s:
        if ch in '<(':
            depth += 1
        elif ch in '>)':
            depth -= 1
        if ch == ',' and depth == 0:
            out.append(''.join(buf))
            buf = []
            continue
        buf.append(ch)
    out.append(''.join(buf))
    return out


tot = tot_files = 0
for p in TARGETS:
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    changed = False
    out = []
    for ln in txt.split('\n'):
        m = SIG.match(ln)
        if m and re.search(r'\bthis\b', m.group(2)):
            newp, hit = strip_this(m.group(2))
            if hit:
                ln = m.group(1) + newp + m.group(3)
                tot += 1
                changed = True
        out.append(ln)
    if changed:
        tot_files += 1
        if APPLY:
            p.write_bytes('\n'.join(out).encode('latin-1',
                                                errors='replace'))
print(f'this-params dropped: {tot} in {tot_files} files')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
