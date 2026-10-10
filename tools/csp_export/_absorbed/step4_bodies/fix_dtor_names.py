#!/usr/bin/env python3
"""Fix illegal destructor names: `virtual ~ddtor() = default;` inside class X.

MSVC C2523: destructor marker mismatch -- a destructor must be named after
its own class. The generated headers copied the vtable slot name (`ddtor`)
after the `~`, which is legal as a normal member name but never as a dtor.

Rewrite pattern: scan `class NAME ... { ... }` bodies; every
`~ddtor` / `~Destructor` / `~<anything-not-NAME>` destructor token inside
the body becomes `~NAME`. Only destructor tokens (`~IDENT(`) are touched --
normal method names are left alone.

Idempotent: after the rewrite every dtor IS `~NAME`, so re-runs match
nothing. Dry run by default; --apply to write.

Usage: python tools/csp_export/fix_dtor_names.py [--apply] [files...]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv

# Files known to carry the pattern (probe-verified); extra args are scanned
# as well so the tool is reusable.
DEFAULT_TARGETS = [
    'src/core/utility_ext.hpp',
    'src/render/render_ext.hpp',
    'src/system/convert_class.hpp',
]

CLASS_RE = re.compile(
    r'\b(class|struct)\s+([A-Za-z_]\w*)\s*(?::[^{;]+)?\{', re.S)
DTOR_RE = re.compile(r'~([A-Za-z_]\w*)\s*\(')


def find_body_end(text: str, open_idx: int) -> int:
    """Index just past the matching `}` for the `{` at open_idx.
    Brace-in-string/comment aware enough for generated headers (no tricky
    literals there), string-literal skip included for safety."""
    depth = 0
    i = open_idx
    n = len(text)
    in_str = in_chr = in_lc = in_bc = False
    while i < n:
        c = text[i]
        if in_lc:
            if c == '\n':
                in_lc = False
        elif in_bc:
            if c == '*' and i + 1 < n and text[i + 1] == '/':
                in_bc = False
                i += 1
        elif in_str:
            if c == '\\':
                i += 1
            elif c == '"':
                in_str = False
        elif in_chr:
            if c == '\\':
                i += 1
            elif c == "'":
                in_chr = False
        else:
            if c == '/' and i + 1 < n and text[i + 1] == '/':
                in_lc = True
            elif c == '/' and i + 1 < n and text[i + 1] == '*':
                in_bc = True
            elif c == '"':
                in_str = True
            elif c == "'":
                in_chr = True
            elif c == '{':
                depth += 1
            elif c == '}':
                depth -= 1
                if depth == 0:
                    return i + 1
        i += 1
    return -1


def fix_text(text: str, path: str):
    out = []
    last = 0
    total = 0
    for m in CLASS_RE.finditer(text):
        cls = m.group(2)
        start = m.end() - 1
        end = find_body_end(text, start)
        if end < 0:
            continue
        body = text[start:end]
        # Only rewrite when the dtor name is genuinely wrong (C2523 face).
        # `~ddtor`, `~Destructor`, or any name != class name.
        def repl(dm):
            name = dm.group(1)
            if name != cls:
                return '~' + cls + '('
            return dm.group(0)
        newbody, k = DTOR_RE.subn(repl, body)
        # Count only real changes.
        changed = sum(1 for dm in DTOR_RE.finditer(body)
                      if dm.group(1) != cls)
        if changed:
            out.append(text[last:start])
            out.append(newbody)
            last = end
            total += changed
            print('  %-50s %s: %d dtor(s) -> ~%s' % (path, cls, changed, cls))
    out.append(text[last:])
    return ''.join(out), total


def main():
    files = [a for a in sys.argv[1:] if not a.startswith('--')]
    if not files:
        files = DEFAULT_TARGETS
    grand = 0
    for rel in files:
        p = ROOT / rel
        if not p.exists():
            print('MISSING', rel)
            continue
        text = p.read_text(encoding='utf-8', errors='replace')
        new, n = fix_text(text, rel)
        grand += n
        if n and APPLY:
            p.write_text(new, encoding='utf-8', errors='replace')
    tag = 'APPLIED' if APPLY else 'DRYRUN'
    print('%s: %d destructor names fixed' % (tag, grand))
    return 0


if __name__ == '__main__':
    sys.exit(main())
