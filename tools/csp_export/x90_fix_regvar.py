#!/usr/bin/env python3
"""X90 W4: lower `_ESI->member` register pseudo-variable access to `this->`.

IdaRegVar is a 4-byte register slot; `_ESI = this;` (or `_ESI = <entry ecx
local>;`) makes the register an alias of the member `this`.  The typed body
still spells member access through the pseudo-variable, which has no
`operator->` (C2819).  Rewriting the alias to `this->` is semantically
exact (same object, same member, no cast) and adds no symbols.

Only the functions whose `_ESI` is assigned `this` (or the entry-ecx local
`v2`) are touched; every other `_ESI` use is left alone (banked).

Usage:
    python tools/csp_export/x90_fix_regvar.py            # dry
    python tools/csp_export/x90_fix_regvar.py --apply
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
EVID = ROOT / '.omo' / 'evidence' / 'optimization' / 'x90'

TARGETS = [
    'src/e4/ParticleSystemTypeClass_e4.cpp',
    'src/e4/ParasiteClass_e4.cpp',
    'src/e4/Vector_e4.cpp',
]
# The flat e4 carrier spells some members differently from the typed body.
# Each entry is (flat carrier name, exact member in the e4 header at the same
# offset).  q2DC/q2E0 have no exact carrier member (0x2DC/0x2E0 fall inside
# __pad_2DA[10]); they stay as _ESI-> (banked) rather than become C2039.
MEMBER_MAP = {
    'src/e4/ParticleSystemTypeClass_e4.cpp': [
        ('ParticleSystemTypeClass_field_0x294', 'q294'),
        ('ParticleSystemTypeClass_field_0x29C', 'q29C'),
        ('ParticleSystemTypeClass_field_0x2A8', 'q2A8'),
        ('ParticleSystemTypeClass_field_0x2B4', '__pad_2B4'),
        ('ParticleTypeClass_2B8', 'ParticleSystemTypeClass_field_0x2B8'),
    ],
    'src/e4/Vector_e4.cpp': [
        ('uniqueId', 'Vector_field_0x10'),
    ],
}
BANK = {
    'src/e4/ParticleSystemTypeClass_e4.cpp': ['q2DC', 'q2E0'],
}
ALIAS = re.compile(r'^\s*_ESI\s*=\s*(this|v2)\s*;\s*(?:/\*.*)?$')
DEF = re.compile(r'^[^\n;]*\b[A-Za-z_]\w*::\s*~?[A-Za-z_]\w*\s*\(')


def brace_span(lines, opener):
    depth = 0
    started = False
    for i in range(opener, len(lines)):
        s = re.sub(r'//.*', '', lines[i])
        for ch in s:
            if ch == '{':
                depth += 1
                started = True
            elif ch == '}':
                depth -= 1
                if started and depth == 0:
                    return opener, i
    return opener, len(lines) - 1


def function_start(lines, line_idx):
    i = line_idx
    while i >= 0:
        if DEF.match(lines[i].strip()):
            # body opener within the next few lines
            j = i
            while j < len(lines) and j <= i + 8:
                if '{' in lines[j]:
                    return i, j
                j += 1
        i -= 1
    return None, None


def main():
    EVID.mkdir(parents=True, exist_ok=True)
    ledger = []
    writes = []
    for rel in TARGETS:
        p = ROOT / rel
        txt = p.read_bytes().decode('utf-8')
        lines = txt.split('\n')
        spans = []
        for i, ln in enumerate(lines):
            if ALIAS.match(ln):
                fs, opener = function_start(lines, i)
                if fs is None:
                    continue
                s, e = brace_span(lines, opener)
                spans.append((fs, e, i, ln.strip()))
        # merge overlapping spans
        spans.sort()
        merged = []
        for fs, e, i, ln in spans:
            if merged and fs <= merged[-1][1]:
                merged[-1] = (merged[-1][0], max(merged[-1][1], e),
                              merged[-1][2] + [i])
            else:
                merged.append((fs, e, [i]))
        nfile = 0
        for fs, e, aliases in merged:
            chunk = '\n'.join(lines[fs:e + 1])
            before = chunk
            chunk = chunk.replace('_ESI->', 'this->')
            # ParasiteClass flat carrier spells the 0x28 pad __pad_028
            chunk = chunk.replace('this->__pad_28', 'this->__pad_028')
            for old, new in MEMBER_MAP.get(rel, ()):
                chunk = re.sub(r'\bthis->' + re.escape(old) + r'\b',
                               'this->' + new, chunk)
            for nm in BANK.get(rel, ()):
                chunk = re.sub(r'\bthis->' + re.escape(nm) + r'\b',
                               '_ESI->' + nm, chunk)
            if chunk != before:
                nfile += before.count('_ESI->')
                lines[fs:e + 1] = chunk.split('\n')
                ledger.append({'file': rel, 'function_line': fs + 1,
                               'span': [fs + 1, e + 1],
                               'alias_lines': [x + 1 for x in aliases],
                               'sites': before.count('_ESI->')})
        if nfile:
            writes.append((p, '\n'.join(lines)))
    print('functions=%d sites=%d files=%d apply=%s' %
          (len(ledger), sum(x['sites'] for x in ledger), len(writes), APPLY))
    for x in ledger:
        print('  %-56s lines %s sites %d' %
              (x['file'], x['span'], x['sites']))
    if APPLY:
        for p, txt in writes:
            p.write_bytes(txt.encode('utf-8'))
    (EVID / ('x90_w4_regvar_%s.json' % ('apply' if APPLY else 'dry'))).write_text(
        json.dumps(ledger, ensure_ascii=False, indent=1), encoding='utf-8')
    if not APPLY:
        print('DRY -- pass --apply to write')


if __name__ == '__main__':
    main()
