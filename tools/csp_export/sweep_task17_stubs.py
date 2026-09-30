#!/usr/bin/env python3
"""Sweep Task-17 dead stubs shadowing real materialized bodies.

src/core/subs_1..10.cpp hold the 2026-06-19 batch stubs: address-annotated
comment headers + (mostly empty) placeholder definitions, real pseudocode
kept in comments. The e4 materialization wave later wrote REAL bodies for
thousands of those addresses under src/e4/, but the stubs remained -- and
verify_execution_flow's find_cpp_function_by_addr resolves the stub first,
so 2,405 completed functions FAIL on an empty body.

Rule: delete a stub block IFF its `// IDA: 0xADDR` / `// 0xADDR` address
has a real definition annotated in ANY OTHER cpp file (// 0xADDR followed
by a brace-bearing definition). Stubs whose address has no other body stay
(they are the only body the verifier can find).

Block = the annotation comment lines + following comment lines + the
definition up to its matching closing brace.

Usage: python tools/csp_export/sweep_task17_stubs.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

# 1. addresses with real bodies elsewhere (any cpp except the stub files)
STUB_FILES = sorted((ROOT / 'src' / 'core').glob('subs_*.cpp'))
stub_names = {p.name for p in STUB_FILES}
ADDR = re.compile(r'^\s*//\s*(?:IDA:?\s*)?(0x[0-9A-Fa-f]{6,8})')
real_addrs = set()
for p in sorted((ROOT / 'src').rglob('*.cpp')):
    if p.name in stub_names:
        continue
    s = str(p)
    if '_generated' in s:
        continue
    try:
        for ln in p.read_text(encoding='utf-8', errors='replace').split('\n'):
            m = ADDR.match(ln)
            if m:
                real_addrs.add(int(m.group(1), 16))
    except OSError:
        continue
print('addresses with real bodies elsewhere:', len(real_addrs))

# 2. parse each stub file into blocks and drop shadowed ones
DEF_START = re.compile(r'^[A-Za-z_]')
total_dropped = 0
for p in STUB_FILES:
    lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    out = []
    i = 0
    n = len(lines)
    dropped = 0
    while i < n:
        line = lines[i]
        m = ADDR.match(line)
        if not m:
            out.append(line)
            i += 1
            continue
        # collect the block: addr-annotation + contiguous comment lines,
        # then the definition through its closing brace
        start = i
        addr = int(m.group(1), 16)
        j = i + 1
        while j < n and lines[j].lstrip().startswith('//'):
            j += 1
        # find definition start
        while j < n and not DEF_START.match(lines[j]) and not lines[j].strip():
            j += 1
        brace_open = None
        depth = 0
        k = j
        ended = False
        while k < n:
            if brace_open is None:
                if '{' in lines[k]:
                    brace_open = k
                    depth = lines[k].count('{') - lines[k].count('}')
                    if depth <= 0 and '}' in lines[k]:
                        ended = True
                        break
            else:
                depth += lines[k].count('{') - lines[k].count('}')
                if depth <= 0:
                    ended = True
                    break
            k += 1
        end = k if ended else j
        if addr in real_addrs and ended:
            dropped += 1
            i = end + 1
            # swallow one following blank line
            if i < n and not lines[i].strip():
                i += 1
            continue
        out.extend(lines[start:end + 1])
        i = end + 1
    total_dropped += dropped
    print(f'{p.name}: dropped {dropped} shadowed stubs')
    if dropped and APPLY:
        p.write_text('\n'.join(out), encoding='utf-8')

print('total shadowed stubs:', total_dropped)
if not APPLY:
    print('(dry run -- pass --apply)')
