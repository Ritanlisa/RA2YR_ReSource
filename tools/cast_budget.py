#!/usr/bin/env python3
"""Cast-budget guard (X32 Phase D, permanent invariant).

The user's standing requirement is "minimize forced casts": the R1 cast
population must NOT grow round-over-round. This instrument makes that
auditable: it measures the cast population with a text census hardened
against the L317 blind spots, appends the measurement to a round ledger
(tools/cast_budget_ledger.json), and fails if any metric grew vs the
previous round.

L317 hardening (vs the naive census that reported +368 for zero casts):
  1. line comments stripped before matching;
  2. `->` immediately after the cast's closing paren excluded
     (the `(T)-x` arrow misread);
  3. bare `(identifier)` with no star/&/::/scalar keyword excluded
     (receiver-wrap false positive).
X50 correction (instrument accuracy, not a threshold change):
  4. preprocessor CONDITIONAL lines (`#if/#ifdef/#ifndef/#elif`) are skipped
     -- the dual-universe guard lines `#if !defined(A) && !defined(B)` were
     misread as `(GAMEMD_DEF_X)` casts (+140 cast_class artifact, I366);
     an equal 55 older guard artifacts of the same shape were silently in
     the baseline. `#define` lines are KEPT: they can carry real cast text
     (8 macro casts verified in-tree). All budget checks remain intact.
Metrics per run:
  cast_ptr      (T)( where T carries * or &  -- the R1-relevant family
  cast_scalar   (T)( where T is a scalar keyword / known scalar typedef
  cast_class    (T)( where T has :: or looks like a class type (multi-cap)
  artifact_cast X26-era damage shapes: `((T)(**))` fn-ptr injection or a
                cast inside a definition parameter list -- must stay 0
  x26_site_list sites from the X26-era insertion list still carrying their
                inserted cast text (independent per-site measure)

Usage:
  python tools/cast_budget.py --record X32   # measure + append ledger + check
  python tools/cast_budget.py --check        # measure + check only, no write
Exit codes: 0 = budget respected, 1 = population grew, 2 = environment error.
"""
import io
import json
import re
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
LEDGER = ROOT / 'tools/cast_budget_ledger.json'
INV = ROOT / '.omo/evidence/optimization/x32/cast_inventory.json'

TYPE_CORE = (r'(?:const\s+)?(?:unsigned\s+|signed\s+|struct\s+|enum\s+)?'
             r'[A-Za-z_][\w:]*'
             r'(?:\s*::\s*[A-Za-z_]\w*)*'
             r'(?:\s*(?:<[^<>]*>)|\s*const)*'
             r'(?:\s*\*+|\s*&+|\s*\bconst\b)*')
SCALAR_WORDS = {'int', 'unsigned', 'signed', 'char', 'short', 'long', 'float',
                'double', 'void', 'bool', 'size_t', 'wchar_t', '__int8',
                '__int16', '__int32', '__int64', 'uint8_t', 'uint16_t',
                'uint32_t', 'uint64_t', 'int8_t', 'int16_t', 'int32_t',
                'int64_t', 'HWND', 'HANDLE', 'DWORD', 'LPVOID', 'BOOL'}

CAST = re.compile(r'\((' + TYPE_CORE + r')\)\s*([^;(){}]?(?:[^;(){}])*?)(?=[;,)\n{}]|\Z)')
ARROW_BAD = re.compile(r'\)\s*->')
ARTIFACT_FNPTR = re.compile(r'\(\([A-Za-z_][\w:<>,\s*&]*?\)\(\*+\)\)')
ARTIFACT_DEFPARAM = re.compile(r'\([A-Za-z_]\w*\)\(\s*[A-Za-z_][\w:<>,\s*&]*\*\s*[A-Za-z_]\w*\s*\)')


def strip_line_comment(ln):
    out = []
    i = 0
    in_str = None
    while i < len(ln):
        c = ln[i]
        if in_str:
            out.append(c)
            if c == in_str:
                in_str = None
            i += 1
            continue
        if c in ('"', "'"):
            in_str = c
            out.append(c)
            i += 1
            continue
        if c == '/' and i + 1 < len(ln) and ln[i + 1] == '/':
            break
        out.append(c)
        i += 1
    return ''.join(out)


def categorize(type_text):
    t = type_text.strip()
    if '*' in t or '&' in t:
        return 'cast_ptr'
    words = set(re.findall(r'[A-Za-z_]\w*', t))
    if words & SCALAR_WORDS:
        return 'cast_scalar'
    if '::' in t or re.search(r'[A-Z].*[A-Z]', t.split('::')[-1]):
        return 'cast_class'
    return None  # bare identifier -> L317 mechanism 3, excluded


def measure():
    cast_ptr = cast_scalar = cast_class = artifact = 0
    files = 0
    for p in list(ROOT.glob('src/**/*.cpp')) + list(ROOT.glob('src/**/*.hpp')) + \
            list(ROOT.glob('src/**/*.h')):
        try:
            txt = p.read_text(encoding='utf-8', errors='replace')
        except OSError:
            continue
        files += 1
        for raw in txt.split('\n'):
            ln = strip_line_comment(raw)
            # X50: conditional directives are not casts (guard-line artifact,
            # I366). #define lines kept -- real macro casts live there.
            if re.match(r'\s*#\s*(?:if|ifdef|ifndef|elif)\b', ln):
                continue
            if ARTIFACT_FNPTR.search(ln):
                artifact += 1
            if ARTIFACT_DEFPARAM.search(ln) and re.match(
                    r'^\s*[A-Za-z_][\w:<>,\s*&]*\s*[\w:]+::', ln):
                artifact += 1
            for m in CAST.finditer(ln):
                # closing must not start an arrow (L317-2)
                tail = ln[m.end():m.end() + 2]
                if tail.startswith('->'):
                    continue
                cat = categorize(m.group(1))
                if cat == 'cast_ptr':
                    cast_ptr += 1
                elif cat == 'cast_scalar':
                    cast_scalar += 1
                elif cat == 'cast_class':
                    cast_class += 1
    x26_still = x26_total = 0
    try:
        inv = json.load(io.open(INV, encoding='utf-8'))
        for s in inv:
            if not s.get('line_now'):
                continue
            x26_total += 1
            try:
                ln = strip_line_comment(
                    (ROOT / s['file']).read_text(encoding='utf-8',
                                                 errors='replace').split('\n')[s['line_now'] - 1])
            except (OSError, IndexError):
                continue
            if re.sub(r'\s+', '', s['cast_type']) + ')(' + re.sub(r'\s+', '', s['expr']) + ')' \
                    in re.sub(r'\s+', '', ln):
                x26_still += 1
    except OSError:
        pass
    return {'files': files, 'cast_ptr': cast_ptr, 'cast_scalar': cast_scalar,
            'cast_class': cast_class, 'artifact_cast': artifact,
            'x26_sites_total': x26_total, 'x26_sites_still': x26_still}


def main():
    mode = sys.argv[1] if len(sys.argv) > 1 else '--check'
    label = sys.argv[2] if len(sys.argv) > 2 else 'run'
    m = measure()
    print(json.dumps(m, indent=1))
    prev = None
    if LEDGER.exists():
        try:
            led = json.load(io.open(LEDGER, encoding='utf-8'))
            if led:
                prev = led[-1]
        except (OSError, ValueError):
            prev = None
    ok = True
    if prev:
        for k in ('cast_ptr', 'cast_scalar', 'cast_class', 'artifact_cast',
                  'x26_sites_still'):
            d = m[k] - prev['metrics'][k]
            print('  %-16s %8d -> %8d  (%+d)' % (k, prev['metrics'][k], m[k], d))
            if d > 0:
                print('  BUDGET VIOLATION: %s grew' % k)
                ok = False
    else:
        print('  (bootstrap: no previous ledger entry)')
    if mode == '--record':
        led = []
        if LEDGER.exists():
            try:
                led = json.load(io.open(LEDGER, encoding='utf-8'))
            except (OSError, ValueError):
                led = []
        led.append({'round': label, 'ts': time.strftime('%Y-%m-%d %H:%M:%S'),
                    'metrics': m})
        json.dump(led, io.open(LEDGER, 'w', encoding='utf-8'), indent=1)
        print('ledger updated: %s (%d entries)' % (LEDGER, len(led)))
    sys.exit(0 if ok else 1)


if __name__ == '__main__':
    main()
