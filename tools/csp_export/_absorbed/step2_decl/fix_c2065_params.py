#!/usr/bin/env python3
"""Fix C2065 "aN" undeclared-identifier errors by adding the missing
parameters to the enclosing function definition.

Root cause: the fresh typed export rendered some signatures without the
implicit leading argument(s) the body still references (`a1`..`a6`). The
def line loses them; every use in the body is C2065.

For each file with such errors, each enclosing definition gets the missing
`void *aN` parameters appended (types deliberately vague — pointer-ish
uses compile after the C2440 cast pass; scalar uses compile as-is).
Declarations in headers are varargs `(...)` stubs or real params — the
align/supply battery reconciles mismatches next round.

Usage: python tools/csp_export/fix_c2065_params.py <error-log> [--apply]
"""
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

LQ, RQ = chr(0x201C), chr(0x201D)
TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace') if LOG else ''

ERR = re.compile(
    re.escape('D:\\RA2YR_ReSource\\src\\') +
    r'([^\(\n]+)\((\d+),\d+\): error C2065: [' + LQ + RQ + r'](a[1-9])[' + RQ + r']')

sites = defaultdict(set)   # file -> {(line, name)}
for m in ERR.finditer(TXT):
    sites[m.group(1).replace('/', '\\')].add((int(m.group(2)), m.group(3)))

DEF_RE = re.compile(
    r'^([A-Za-z_][\w\s\*<>,:&\*]*?)?\s*'
    r'(?:(?:[A-Za-z_]\w*)::)*~?[A-Za-z_]\w*\s*\(([^)]*)\)\s*(?:const\s*)?$')

CTRL = re.compile(r'^(if|else|for|while|switch|do|case|default|return)\b')

PNAME = re.compile(r'\ba([1-9])\b')


def enclosing_def(lines, idx):
    """Walk back from an error line to the def line (name(...) at depth 0,
    preceded by fewer opens than closes). Returns its index or None."""
    i = idx
    guard = 0
    while i >= 0 and guard < 400:
        s = lines[i].strip()
        if s and not s.startswith('//') and not s.startswith('#') \
                and not CTRL.match(s):
            if s.endswith(')') or s.endswith(') const') or \
                    re.match(r'^[\w\s\*:&<>]+ \w+\(.*\)\s*$', s) or \
                    '(' in s and s.endswith(')'):
                return i
        i -= 1
        guard += 1
    return None


total_files = fixed = 0
for f, lst in sorted(sites.items()):
    p = SRC / f
    if not p.exists():
        continue
    try:
        lines = p.read_text(encoding='latin-1', errors='replace').split('\n')
    except OSError:
        continue
    # group error lines by enclosing def
    need = {}   # def_idx -> set of param indices
    used = {}   # def_idx -> max aN referenced anywhere in the body
    for (ln, name) in lst:
        di = enclosing_def(lines, ln - 1)
        if di is None:
            continue
        need.setdefault(di, set()).add(int(name[1]))
    if not need:
        continue
    changed = False
    for di, missing in sorted(need.items(), reverse=True):
        # scan the whole body (def line .. matching close) for max aN use
        depth = 0
        body_end = di
        started = False
        k = di
        while k < len(lines):
            for ch in lines[k]:
                if ch == '{':
                    depth += 1
                    started = True
                elif ch == '}':
                    depth -= 1
            if started and depth <= 0:
                body_end = k
                break
            k += 1
        seg = '\n'.join(lines[di:body_end + 1])
        all_idx = {int(x) for x in PNAME.findall(seg)}
        mx = max(all_idx) if all_idx else max(missing)
        def_line = lines[di]
        m = re.search(r'\(([^)]*)\)', def_line)
        if not m:
            continue
        params = m.group(1).strip()
        have = set()
        if params:
            for tok in params.split(','):
                pm = PNAME.search(tok)
                if pm:
                    have.add(int(pm.group(1)))
        add = []
        for i in range(1, mx + 1):
            if i not in have:
                add.append('void * a%d' % i)
        if not add:
            continue
        new_params = params
        if new_params:
            new_params = new_params + ', ' + ', '.join(add)
        else:
            new_params = ', '.join(add)
        new_line = def_line[:m.start(1)] + new_params + def_line[m.end(1):]
        lines[di] = new_line
        changed = True
        fixed += 1
    if changed and APPLY:
        p.write_text('\n'.join(lines), encoding='latin-1', errors='replace')
    total_files += 1

print('files with aN errors: %d, def lines patched: %d'
      % (total_files, fixed))
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
