#!/usr/bin/env python3
"""Pending-block v1 -> v2 format migration (one-shot; idempotent).

v1 (old materializer):
    RetType Cls::Name(args)
    {                      <- outer open
    // [IDA decompile] ... marker
    // 0xADDR
    {                      <- inner open (nested IDA def's brace, def removed)
    body
    }                      <- inner close
    [blank/comment]*
    }                      <- outer close

v2 (target): the inner brace pair is deleted; the marker stays inside the
function body, so every span consumer counts braces starting at depth 1.

Detection is structural and blank-tolerant: first non-comment line after the
marker is `{`; its balanced close is followed (after blanks/comments) by the
outer `}`.  Anything else is left untouched.
"""
import re
from pathlib import Path
from collections import defaultdict

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
INSIDE = ("// [IDA decompile] original pseudocode - translation "
          "pending (final goal)")


def skip_blank(lines, j):
    while j < len(lines) and (lines[j].strip() == ''
                              or lines[j].strip().startswith('//')):
        j += 1
    return j


COMMENTISH = ('//', '/*', '*', '#')


def only_comments(lines, lo, hi):
    """True when lines[lo:hi] contain nothing but blanks and comment text."""
    for k in range(lo, min(hi, len(lines))):
        s = lines[k].strip()
        if s and not s.startswith(COMMENTISH):
            return False
    return True


def balanced_close(lines, j0):
    d = 0
    k = j0
    while k < len(lines):
        d += lines[k].count('{') - lines[k].count('}')
        if d <= 0 and k > j0:
            return k
        k += 1
    return -1


stats = defaultdict(int)
for p in sorted(SRC.rglob('*.cpp')):
    try:
        lines = p.read_text(encoding='latin-1').split('\n')
    except OSError:
        continue
    if INSIDE not in [ln.rstrip('\r') for ln in lines]:
        continue
    changed = False
    i = 0
    while i < len(lines):
        if lines[i].rstrip('\r') != INSIDE:
            i += 1
            continue
        j0 = skip_blank(lines, i + 1)
        if j0 < len(lines) and lines[j0].strip() == '{':
            k = balanced_close(lines, j0)
            if k > 0:
                # walk from the inner close to the outer close: only blanks
                # and comments (line or block form) may intervene
                nxt2 = k + 1
                ok = False
                while nxt2 < len(lines):
                    s = lines[nxt2].strip()
                    if s == '}':
                        ok = True
                        break
                    if s == '' or s.startswith('//'):
                        nxt2 += 1
                        continue
                    if '/*' in s:
                        while nxt2 < len(lines) and '*/' not in lines[nxt2]:
                            nxt2 += 1
                        nxt2 += 1
                        continue
                    break
                if ok:
                    del lines[k]   # inner close (higher index first)
                    del lines[j0]  # inner open
                    stats['migrated'] += 1
                    changed = True
                    i = i + 1
                    continue
        # v2 span: advance past this block (depth starts at 1)
        depth, k = 1, i
        while k < len(lines):
            depth += lines[k].count('{') - lines[k].count('}')
            if depth <= 0 and k > i:
                break
            k += 1
        i = k + 1
    if changed:
        p.write_bytes('\n'.join(lines).encode('latin-1'))
        stats['files'] += 1

print(dict(stats))
print('DONE')
