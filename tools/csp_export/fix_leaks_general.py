#!/usr/bin/env python3
"""General leaked-brace repair, shape-free. THE single brace-repair pass.

Walks every function span (annotation `// 0xADDR` -> next annotation / EOF)
with a block-comment-aware brace walker and measures the depth at each
boundary. A function must return the depth to its base level; whatever it
leaks is closed by inserting `}` lines right before the next boundary.

Usage: python tools/csp_export/fix_leaks_general.py [--apply]
"""
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from _blockspan import block_walker

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
ADDR = re.compile(r'^//\s*(?:IDA[:\s]\s*)?0x[0-9A-Fa-f]{6,8}(?:\s*:|\s*\(|\s*$)')
DEF_NEXT = re.compile(r'(?:namespace\s+)?[A-Za-z_][\w\s\*:<>,&\*{}]*?[\s\*:]\w+\s*\(')
APPLY = '--apply' in sys.argv

tot_files = tot_ins = 0
for p in sorted(SRC.rglob('*.cpp')):
    if '_generated' in str(p):
        continue
    try:
        lines = p.read_text(encoding='latin-1').split('\n')
    except OSError:
        continue
    bs = []
    for i, ln in enumerate(lines):
        if not ADDR.match(ln.strip()):
            continue
        # function boundary only when a def follows before any code
        j = i + 1
        while j < len(lines) and not lines[j].strip():
            j += 1
        if j < len(lines) and re.match(r'^namespace\s+[\w:]*\s*\{\s*$', lines[j].strip()):
            j += 1
            while j < len(lines) and not lines[j].strip():
                j += 1
        # def test: `){` appears before any `;` in the next few lines
        # (a call statement hits `;` first; a multi-line call has no `){`)
        ok = False
        if j < len(lines):
            first = lines[j].strip()
            joined = '\n'.join(lines[j:j + 6])
            m = re.search(r'\)\s*\{', joined)
            s = joined.find(';')
            ok = bool(m) and (s < 0 or m.start() < s) \
                and not re.match(r'^(?:if|for|while|switch|return|else|do|'
                                 r'\}|/\*|//)', first)
        if ok:
            bs.append(i)
    if not bs:
        continue
    orig = list(lines)
    deltas = list(block_walker(lines))
    base = sum(deltas[:bs[0]])
    ins = []
    depth = base
    for bi, b in enumerate(bs):
        start = b + 1
        nxt = bs[bi + 1] if bi + 1 < len(bs) else len(lines)
        end = nxt
        while end > start and not lines[end - 1].strip():
            end -= 1
        depth = base + sum(deltas[b + 1:end])
        leak = depth - base
        if leak > 0:
            ins.append((end, leak))
        elif leak < 0:
            ins.append((end, leak))  # negative: remove |leak| extra closes
    if not ins:
        continue
    for at, leak in sorted(ins, reverse=True):
        if leak < 0:
            # over-closed: remove |leak| trailing '}' tokens just above the
            # boundary (the sanitizer's own earlier over-inserts)
            need = -leak
            x = at
            while need > 0 and x > 0:
                x -= 1
                ln = lines[x]
                if ln.strip() == '}':
                    lines[x] = None
                    need -= 1
                elif ln.strip().endswith('}'):
                    ci = ln.rfind('}')
                    lines[x] = ln[:ci] + ln[ci+1:]
                    need -= 1
            lo = max(0, x)
            lines[lo:at] = [l for l in lines[lo:at] if l is not None]
            tot_ins -= (-leak)
            continue
        indent = ''
        for l in range(at - 1, -1, -1):
            if lines[l].strip():
                indent = re.match(r'\s*', lines[l]).group(0)
                break
        lines[at:at] = [indent + '}'] * leak
        tot_ins += leak
    if lines != orig:
        tot_files += 1
        if APPLY:
            p.write_bytes('\n'.join(lines).encode('latin-1'))

print('close-braces inserted:', tot_ins)
print('files changed:', tot_files)
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
