#!/usr/bin/env python3
"""Step-4 (part 6): move every temporary-variable declaration to its first
use, inside pending pseudocode blocks (user directive 2026-09-21).

Sound-by-construction rule: a declaration moves only when its first use sits
at the SAME brace depth as the declaration (top-level -> top-level), which
cannot change scoping semantics. Deeper first uses keep the top declaration
(counted as skipped). Assignments at the first-use line merge into the
declaration (`int v2 = ...;`); other first uses get the decl inserted above.
IDA line comments (`// eax`, `// [esp+Ch] [ebp-13Ch] BYREF`, `/*0xADDR*/`)
ride along unchanged. Blocks are processed back-to-front so line shifts stay
local. Idempotent: moved decls no longer match the top-of-body pattern.
"""
import re
from pathlib import Path
from collections import defaultdict

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
INSIDE = ("// [IDA decompile] original pseudocode - translation "
          "pending (final goal)")

DECL = re.compile(
    r'^(\s*)((?:(?:unsigned|signed|const|long)\s+)*(?:void|int|char|short|'
    r'long|float|double|bool|_DWORD|_BYTE|_WORD|_QWORD|__int64|unsigned __int64|'
    r'unsigned int|unsigned char|unsigned short|BOOL)\s*\*?\s*)'
    r'(v\d+|a\d+|aP\d+)(\[\d*\])?\s*;(\s*//.*)?\s*$')
ASSIGN = re.compile(
    r'^(\s*)(v\d+|a\d+|aP\d+)(\[\d*\])?\s*=\s*(.*?;)(\s*/\*.*\*/)?\s*$')


def lower_block(lines, lo, hi):
    """Move top-level decls to first use within lines[lo..hi] (block body).
    Returns (new_segment, merged, inserted, skipped)."""
    seg = lines[lo:hi + 1]
    dep = []
    d = 0
    for ln in seg:
        dep.append(d)
        d += ln.count('{') - ln.count('}')
    merged = inserted = skipped = 0
    moved = set()
    for j in range(len(seg)):
        if j in moved or dep[j] != 0:
            continue
        m = DECL.match(seg[j])
        if not m:
            continue
        var, arr, ctype = m.group(3), (m.group(4) or ''), m.group(2).strip()
        use_re = re.compile(r'\b%s\b' % re.escape(var))
        fu = next((t for t in range(j + 1, len(seg)) if use_re.search(seg[t])),
                  None)
        if fu is None:
            continue
        if dep[fu] != 0:
            skipped += 1
            continue
        am = ASSIGN.match(seg[fu])
        if am and not arr:
            seg[fu] = (am.group(1) + ctype + ' ' + var + ' = '
                       + am.group(4) + (am.group(5) or ''))
            merged += 1
        else:
            seg.insert(fu, seg[j])
            dep.insert(fu, dep[fu])
            fu += 1
            inserted += 1
        seg[j] = None
        moved.add(j)
    if moved:
        seg = [ln for ln in seg if ln is not None]
    return seg, merged, inserted, skipped


stats = defaultdict(int)
for p in sorted(SRC.rglob('*.cpp')):
    try:
        lines = p.read_text(encoding='latin-1').split('\n')
    except OSError:
        continue
    spans = []
    i = 0
    while i < len(lines):
        if lines[i].rstrip('\r') != INSIDE:
            i += 1
            continue
        depth, started, k = 0, False, i
        while k < len(lines):
            if '{' in lines[k]:
                started = True
            if started:
                depth += lines[k].count('{') - lines[k].count('}')
                if depth <= 0:
                    break
            k += 1
        if not started or depth > 0:
            i = k + 1
            continue
        spans.append((i + 1, k - 1))  # body without marker and closing brace
        i = k + 1
    if not spans:
        continue
    changed = False
    for (lo, hi) in reversed(spans):
        seg, merged, inserted, skipped = lower_block(lines, lo, hi)
        if merged + inserted:
            lines[lo:hi + 1] = seg
            stats['merged'] += merged
            stats['inserted'] += inserted
            stats['skipped_deeper_use'] += skipped
            changed = True
    if changed:
        p.write_bytes('\n'.join(lines).encode('latin-1'))
        stats['files'] += 1

print(dict(stats))
print('DONE')
