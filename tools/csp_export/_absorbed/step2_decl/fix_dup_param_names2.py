#!/usr/bin/env python3
"""G41.33: dedupe parameter names within a single signature
(`(int a2, void *a2)` from first-pass unifier fillers) -- later
duplicates get a `_2`/`_3` suffix.

Usage: python tools/csp_export/fix_dup_param_names2.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv

PNAME = re.compile(r'(\b)([a-z]\w*)(\s*(?:\[[^\]]*\])?\s*[,)])')


TYK = {'void', 'int', 'char', 'bool', 'short', 'long', 'float', 'double',
       'unsigned', 'signed', 'const', 'struct', 'class', 'enum', 'static',
       'wchar_t', '__int64', 'int8_t', 'int16_t', 'int32_t', 'int64_t',
       'uint8_t', 'uint16_t', 'uint32_t', 'uint64_t', 'size_t', 'BOOL',
       'DWORD', 'WORD', 'BYTE', 'LONG', 'UINT', 'HRESULT', 'HANDLE'}


def dedupe_params(seg):
    """seg = text between the outer parens of a param list, no nested fun."""
    parts = re.split(r',(?![^()]*\))', seg)
    seen = {}
    out = []
    n = 0
    for p in parts:
        stripped = re.sub(r'\s*=\s*[^,]*$', '', p.strip())
        m = re.search(r'([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*$', stripped)
        if m and m.group(1) not in TYK:
            nm = m.group(1)
            if nm in seen:
                k = seen[nm] + 1
                seen[nm] = k
                p = p[:p.rindex(nm)] + '%s_%d' % (nm, k) + p[p.rindex(nm) + len(nm):]
                n += 1
            else:
                seen[nm] = 1
        out.append(p)
    return ','.join(out), n


n = 0
for p in sorted(ROOT.glob('src/**/*.c*')):
    if 'build' in p.parts or not p.is_file():
        continue
    try:
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    except OSError:
        continue
    changed = False
    for i, l in enumerate(lines):
        s = l.strip()
        if not s or '(' not in s or ' operator' in s:
            continue
        if '::' not in s.split('(')[0]:
            continue  # cpp: only def heads carry Class:: qual
        if s.endswith(';') or '=' in s.split('(')[0]:
            continue  # statements/calls end in ; — only def heads pass
        if not (s.endswith('{') or s.endswith(')')
                or (i + 1 < len(lines) and lines[i + 1].strip().startswith('{'))):
            continue
        o = s.index('(')
        depth = 0
        close = -1
        for j in range(o, len(s)):
            if s[j] == '(':
                depth += 1
            elif s[j] == ')':
                depth -= 1
                if depth == 0:
                    close = j
                    break
        if close < 0:
            continue
        seg = s[o + 1:close]
        if '(' in seg or '=' in seg and 'default' in seg:
            pass
        new, k = dedupe_params(seg)
        if k:
            lines[i] = l.replace('(' + seg + ')', '(' + new + ')', 1)
            n += k
            changed = True
    if changed and APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8')
print('dup param names fixed:', n, '(written)' if APPLY else '(DRY)')
