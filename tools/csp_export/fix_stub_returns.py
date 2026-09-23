#!/usr/bin/env python3
"""Delete dead stub returns that precede the real decompiled body.

The gap2/e4 synthesis generated `Ret Fn() {` + naked `{` wrapper(s) + a
stub `return ...;` (often referencing variables that do not exist in this
function) + the REAL pseudocode after it -- dead code behind an early
return (user directive x3: the raw decompiled code IS the implementation,
no stub plasters).

Per function span:
  1. first `return ...;` within the first statements, when real statements
     follow it -> delete the return line (stub is first, so nothing can
     goto past it: the rest only reaches itself)
  2. delete the naked `{`-only wrapper lines above it (K of them) and the
     (K+1)-th `}` token from the span tail (its matching wrapper close)
  3. per-file balance guard: block_walker final depth must stay in {0,1,2},
     else the whole file is reverted

Usage: python tools/csp_export/fix_stub_returns.py [--apply]
"""
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from _blockspan import block_walker

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
ADDR = re.compile(r'^//\s*(?:IDA[:\s]\s*)?0x[0-9A-Fa-f]{6,8}(?:\s*:|\s*\(|\s*$)')
APPLY = '--apply' in sys.argv

tot_f = tot_del_ret = tot_del_brace = 0
for p in sorted(SRC.rglob('*.cpp')):
    if '_generated' in str(p):
        continue
    try:
        lines = p.read_text(encoding='latin-1').split('\n')
    except OSError:
        continue
    orig = list(lines)
    bs = [i for i, ln in enumerate(lines) if ADDR.match(ln.strip())]
    if not bs:
        continue
    marks = []  # (span_end, del_idx_list)
    for bi, b in enumerate(bs):
        nxt = bs[bi + 1] if bi + 1 < len(bs) else len(lines)
        j = b + 1
        while j < nxt and '(' not in lines[j]:
            j += 1
        if j >= nxt:
            continue
        # first statements window
        stmts = []
        m2 = j
        while m2 < min(nxt, j + 10) and len(stmts) < 8:
            s = lines[m2].strip()
            if s:
                stmts.append((m2, s))
            m2 += 1
        stub = None
        for idx, (li, s) in enumerate(stmts):
            if s.startswith('return') and s.rstrip().endswith(';'):
                rest = stmts[idx + 1:]
                if any(not t[1].startswith('}') for t in rest):
                    stub = li
                break
            if not s.startswith('{'):
                break  # a real statement precedes any stub: not this disease
        if stub is None:
            continue
        # naked `{`-only lines between def and stub
        wrappers = [x for x in range(j, stub)
                    if lines[x].strip() == '{']
        dels = wrappers + [stub]
        marks.append((nxt, dels))
    if not marks:
        continue
    # apply bottom-up so indices stay valid
    for nxt, dels in sorted(marks, key=lambda x: -x[1][0]):
        K = len(dels) - 1
        stub = dels[-1]
        # locate (K+1)-th `}` token from span end
        tok_pos = []  # (line_idx, char_idx) of '}' tokens, tail-first
        for x in range(nxt - 1, b, -1):
            ln = lines[x]
            if ln.strip() == '}':
                tok_pos.append((x, ln.index('}')))
            elif ln.strip().endswith('}'):
                # mixed line like `} }`: tokens right-to-left
                for ci in range(len(ln) - 1, -1, -1):
                    if ln[ci] == '}':
                        tok_pos.append((x, ci))
            if len(tok_pos) > K + 2:
                break
        if len(tok_pos) < K + 1:
            continue  # malformed tail; leave untouched
        victim = tok_pos[K]  # (K+1)-th from end
        # delete tail token first (higher indices), then wrapper opens,
        # then stub; compact the whole touched region
        x, ci = victim
        ln = lines[x]
        lines[x] = (ln[:ci] + ln[ci + 1:]).rstrip()
        for li in sorted(dels, reverse=True):
            lines[li] = None
        lo = min(x, stub)
        hi = max(x, stub) + 1
        lines[lo:hi] = [l for l in lines[lo:hi] if l is not None]
    if lines != orig:
        d = sum(block_walker(lines))
        if d not in (0, 1, 2):
            continue  # balance guard: revert file
        tot_f += 1
        tot_del_ret += len(marks)
        if APPLY:
            p.write_bytes('\n'.join(lines).encode('latin-1'))

print('files changed:', tot_f)
print('stub returns deleted:', tot_del_ret)
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
