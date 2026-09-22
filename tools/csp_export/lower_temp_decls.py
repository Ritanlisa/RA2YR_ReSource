#!/usr/bin/env python3
"""Step-4 (part 6): move every temporary-variable declaration to its first
use, inside pending pseudocode blocks (user directive 2026-09-21).

Any-depth placement (scoping-sound): the decl relocates to just before its
first use when every use lives in the same block; otherwise to the first line
of the innermost block that contains ALL uses (the common ancestor scope).
Assignments at the relocation point merge into `T vN = expr;`. IDA line
comments (`// eax`, `// [esp+Ch] ... BYREF`, `/*0xADDR*/`) ride along.
Blocks are processed back-to-front so line shifts stay local. Idempotent.
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
WB = chr(92) + 'b'


def _scope_paths(seg):
    """Brace-depth PATH per line: tuple of open-brace markers; lines in the
    same block share a path prefix (the path IS the block identity)."""
    paths = []
    stack = []
    run = 0
    for ln in seg:
        paths.append(tuple(stack))
        for ch in ln:
            if ch == '{':
                stack.append(run)
                run = 0
            elif ch == '}':
                if stack:
                    stack.pop()
            else:
                run += 1
    return paths


def lower_block(lines, lo, hi):
    """Move decls to their innermost common block (any depth)."""
    seg = lines[lo:hi + 1]
    paths = _scope_paths(seg)
    merged = inserted = skipped = 0
    moved = set()
    for j in range(len(seg)):
        if j in moved:
            continue
        m = DECL.match(seg[j])
        if not m:
            continue
        var = m.group(3)
        arr = m.group(4) or ''
        ctype = m.group(2).strip()
        use_re = re.compile(WB + re.escape(var) + WB)
        uses = [t for t in range(j + 1, len(seg)) if use_re.search(seg[t])]
        if not uses:
            continue
        cp = list(paths[uses[0]])
        for t in uses[1:]:
            k = 0
            while k < min(len(cp), len(paths[t])) and cp[k] == paths[t][k]:
                k += 1
            cp = cp[:k]
        cp = tuple(cp)
        if paths[uses[0]] == cp:
            target = uses[0]
        else:
            target = next((t for t in range(j + 1, len(seg))
                           if paths[t] == cp), None)
            if target is None or target < j + 1:
                skipped += 1
                continue
        am = ASSIGN.match(seg[target])
        if am and not arr and target == uses[0]:
            seg[target] = (am.group(1) + ctype + ' ' + var + ' = '
                           + am.group(4) + (am.group(5) or ''))
            merged += 1
        else:
            seg.insert(target, seg[j])
            paths.insert(target, paths[target])
            inserted += 1
        seg[j] = None
        moved.add(j)
    if moved:
        seg = [ln for ln in seg if ln is not None]
    return seg, merged, inserted, skipped


def main():
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
            spans.append((i + 1, k - 1))
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
                stats['skipped_no_common'] += skipped
                changed = True
        if changed:
            p.write_bytes('\n'.join(lines).encode('latin-1'))
            stats['files'] += 1
    print(dict(stats))
    print('DONE')


if __name__ == '__main__':
    main()
