#!/usr/bin/env python3
"""Repair the systematic leaked brace -- two diseased shapes:

    Ret Cls::Name(args) {        |   Ret Cls::Name(args)
    {                            |   {
      body                       |   {        <- TWO naked opens, ONE close
    }                            |     body
                                 |   }
Both leave depth +1 per function, accumulating through the file and breaking
compile AND every depth-based function-span scanner.

Scan from the def line, depth = number of consecutive opens (def-line brace +
naked braces). Balanced when depth returns to 0. Leak point = first return to
depth 1 (naked block closed, def-line brace still open) -> insert one `}`.

Usage: python tools/csp_export/fix_double_brace.py [--apply]
"""
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[2]))
from _blockspan import brace_delta

ROOT = Path(__file__).resolve().parents[4]
SRC = ROOT / 'src'

DEF_OPEN = re.compile(r'\)\s*\{$')
DEF_PLAIN = re.compile(r'\)\s*$')
NEXT_FN = re.compile(r'//\s*0x[0-9A-Fa-f]{6,8}|//\s*IDA\s+0x[0-9A-Fa-f]{6,8}'
                     r'|^/\*\s*ASM:')
APPLY = '--apply' in sys.argv

tot_files = tot_fixed = 0
for p in sorted(SRC.rglob('*.cpp')):
    try:
        lines = p.read_text(encoding='latin-1').split('\n')
    except OSError:
        continue
    orig = list(lines)
    i = 0
    while i < len(lines) - 1:
        s = lines[i].strip()
        if not (DEF_OPEN.search(s) or
                (DEF_PLAIN.search(s) and '(' in s and '::' in s)):
            i += 1
            continue
        j = i + 1
        if DEF_OPEN.search(s):
            depth = 1
        else:
            depth = 0
        # swallow consecutive naked open braces
        j2 = j
        while j2 < len(lines) and lines[j2].strip() == '{':
            depth += 1
            j2 += 1
        if depth < 2 or j2 == j:
            i += 1
            continue
        # scan for balance / leak
        leak_at = -1
        balanced = False
        k = j2
        hi = min(len(lines), i + 4000)
        while k < hi:
            if NEXT_FN.search(lines[k]):
                break
            d = brace_delta(lines[k])
            ndepth = depth + d
            # leak point: depth falls to 1 from 2 (def brace still open)
            if ndepth <= 1 < depth:
                # already balanced: another `}` follows the naked close
                m2 = k + 1
                while m2 < len(lines) and not lines[m2].strip():
                    m2 += 1
                if m2 < len(lines) and lines[m2].strip().startswith('}'):
                    balanced = True
                else:
                    leak_at = k
                break
            if ndepth <= 0:
                balanced = True
                break
            depth = ndepth
            k += 1
        if leak_at > 0:
            indent = re.match(r'\s*', lines[leak_at]).group(0)
            lines.insert(leak_at + 1, indent + '}')
            tot_fixed += 1
            i = leak_at + 2
        else:
            i = max(k, i + 1)
    if lines != orig:
        tot_files += 1
        if APPLY:
            p.write_bytes('\n'.join(lines).encode('latin-1'))

print('functions repaired:', tot_fixed)
print('files changed:', tot_files)
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
