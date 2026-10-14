#!/usr/bin/env python3
"""X26: duplicate-member cleanup in e4 class headers (C2086/C2040/C2371
member family).

Scans e4 class headers for same-name + same-offset members declared twice.
Direction rule (X26, supersedes G42.17b keep-first):
  - identical declaration text -> drop the LATER line (pure duplicate);
  - different declaration text -> the later line is a deliberate correction
    (til supply / blob->scalar / canon-mt tags in this corpus), so drop the
    EARLIER line and keep the correction.
Guard context is compared: members under different #if branches are never
touched.  Idempotent; dry-run by default.

Usage: python tools/csp_export/_absorbed/step2_decl/fix_dup_members.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv

MEMBER = re.compile(r'^\s*[\w:\s\*&\[]+\b([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;'
                    r'\s*(?://\s*(0x[0-9A-Fa-f]+).*)?\r?\n?$')
GUARD_OPEN = re.compile(r'^\s*#\s*(if|ifdef|ifndef)\b(.*)$')
GUARD_ELSE = re.compile(r'^\s*#\s*else\b')
GUARD_END = re.compile(r'^\s*#\s*endif\b')


def decl_text(line):
    s = line.split('//')[0].strip()
    return re.sub(r'\s+', ' ', s)


def main():
    n_drop = n_files = 0
    actions = []
    for p in sorted((ROOT / 'src/e4/classes').glob('*_e4.hpp')):
        with open(p, 'r', encoding='utf-8', errors='replace', newline='') as f:
            lines = f.read().splitlines(keepends=True)
        # guard context per line
        stack = []
        ctx_of = []
        for ln in lines:
            if GUARD_OPEN.match(ln):
                stack.append(ln.strip())
                ctx_of.append(tuple(stack))
                continue
            if GUARD_ELSE.match(ln):
                if stack:
                    stack[-1] = stack[-1] + '|ELSE'
                ctx_of.append(tuple(stack))
                continue
            if GUARD_END.match(ln):
                ctx_of.append(tuple(stack))
                if stack:
                    stack.pop()
                continue
            ctx_of.append(tuple(stack))

        seen = {}   # (name, off, ctx) -> (idx, decl)
        drop = set()
        for i, ln in enumerate(lines):
            m = MEMBER.match(ln.rstrip('\r\n'))
            if not m or not m.group(3):
                continue
            name, off = m.group(1), m.group(3)
            key = (name, off, ctx_of[i])
            cur = decl_text(ln)
            if key in seen:
                j, prev = seen[key]
                if j in drop:
                    seen[key] = (i, cur)
                    continue
                if prev == cur:
                    drop.add(i)
                    actions.append(f'  drop-later {p.name}:{i + 1} {name} {off}')
                else:
                    drop.add(j)
                    actions.append(
                        f'  drop-earlier {p.name}:{j + 1} ({prev[:60]}) '
                        f'-> keep {i + 1} ({cur[:60]})')
                    seen[key] = (i, cur)
            else:
                seen[key] = (i, cur)
        if drop:
            n_files += 1
            n_drop += len(drop)
            if APPLY:
                kept = [l for k, l in enumerate(lines) if k not in drop]
                p.write_text(''.join(kept), encoding='utf-8', newline='')
    for a in actions:
        print(a)
    suffix = '(written)' if APPLY else '(DRY)'
    print(f'duplicate members dropped: {n_drop} in {n_files} files {suffix}')


if __name__ == '__main__':
    main()
