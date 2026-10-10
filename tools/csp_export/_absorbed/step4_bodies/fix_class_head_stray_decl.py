#!/usr/bin/env python3
"""Relocate stray declarations that landed between a class HEAD and its `{`.

Damage shape (one site found, vtable-slot supply fixer mis-insertion):
    class BSurface : public XSurface
        int GetWidth(int, ...); // vtable slot +124
    {
    public:
The decl between the head line and the opening brace is a hard syntax error
(C2143/C2144/C2146 + bogus-base C2504/C3770 cascade in every including TU).

Fix: move the stray line to just after the FIRST `public:` inside the class
body (vtable-slot decls are public virtuals). If no `public:` exists in the
body, insert `public:` after `{` and put the decl there.

Idempotent: after relocation there is no decl between any head and `{`.
Dry run by default; --apply writes.

Usage: python tools/csp_export/fix_class_head_stray_decl.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv

HEAD_RE = re.compile(r'^\s*(?:class|struct)\s+\w+[^;{]*$')
DECL_RE = re.compile(r'^\s*[A-Za-z_][\w:<>,\s\*&\.\(\)]*\(.*\)\s*;\s*(?://.*)?$')


def find_body_close(lines, open_idx):
    depth = 0
    for j in range(open_idx, len(lines)):
        depth += lines[j].count('{') - lines[j].count('}')
        if depth == 0 and j > open_idx:
            return j
        if depth <= 0 and '{' not in lines[open_idx]:
            return open_idx
    return -1


n = 0
for p in sorted(ROOT.glob('src/**/*.hpp')):
    if 'build' in p.parts or not p.is_file():
        continue
    try:
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    except OSError:
        continue
    changed = False
    i = 0
    while i < len(lines) - 2:
        if (HEAD_RE.match(lines[i]) and DECL_RE.match(lines[i + 1])
                and lines[i + 2].strip().startswith('{')):
            stray = lines[i + 1]
            del lines[i + 1]
            # insert after the first `public:` before the body closes
            close = find_body_close(lines, i + 1)
            ins = None
            for j in range(i + 1, max(i + 2, close if close > 0 else len(lines))):
                if lines[j].strip() == 'public:':
                    ins = j + 1
                    break
            if ins is None:
                lines.insert(i + 2, 'public:')
                ins = i + 3
            lines.insert(ins, stray.rstrip())
            changed = True
            n += 1
            print('  %s: relocated %r' % (p.relative_to(ROOT), stray.strip()[:50]))
            i = ins
        else:
            i += 1
    if changed and APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
print('%s: %d stray class-head decl(s) relocated' % ('APPLIED' if APPLY else 'DRYRUN', n))
