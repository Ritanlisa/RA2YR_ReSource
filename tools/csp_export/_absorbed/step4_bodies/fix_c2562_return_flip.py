#!/usr/bin/env python3
"""G42.29e: flip void def-heads to cache-truth returns (C2562, 567 errs).

C2562 fires where a generated def declares `void` but its body returns a
value (callers already use it). Truth = ida_cache decompiled first-line
return type (agent-E artifact .omo/g139_c2562_truth.json, 244/248
covered). Actions:
  1. def head  `void Name(`   -> `TRUTH Name(`  (corpus cpps)
  2. hpp decl  `void Name(`   -> `TRUTH Name(`  (e4 hpps, verbatim-void
     decls only -- int/other-typed decls are left for signature align)
  3. ctor-family defs: strip bare `return this;` lines (ctor cannot
     return; pseudocode artifact).

Usage: [--apply]
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
TRUTH = json.load(open(ROOT / '.omo/g139_c2562_truth.json'))

# IDA spellings -> C++ (G42.29e); anything else that still fails VALID is
# skipped (e.g. 'unknown' -- keep void, the flip would not compile).
NORM = {
    '__int16': 'short', '__int8': 'char', 'unsigned __int8': 'unsigned char',
    'unsigned __int16': 'unsigned short', 'unsigned': 'unsigned int',
    'BOOL': 'int', 'HFONT': 'void *', 'HWND': 'void *',
}
VALID = re.compile(r'^(unsigned |signed |const )*'
                   r'(int|char|short|long|float|double|bool|void|__int64|'
                   r'wchar_t|size_t|FILE|uint8_t|uint16_t|uint32_t|'
                   r'int8_t|int16_t|int32_t)(\s*\*+)?$'
                   r'|^[A-Za-z_]\w*(::\w+)*\s*\*+$')


def norm_ret(t):
    if not t:
        return None
    t = NORM.get(t.strip(), t.strip())
    return t if VALID.match(t) else None

corpus = []
for sub in ('src/e4', 'src/_gap2', 'src/core', 'src/misc', 'src/system'):
    corpus.extend((ROOT / sub).rglob('*.cpp'))

stats = Counter()
DEF = {}   # name -> (path, idx, truth)
CTOR_RET = re.compile(r'^\s*return\s+this\s*;\s*(?://.*)?$')

# pass 1: def heads
for p in corpus:
    try:
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    except OSError:
        continue
    for i, ln in enumerate(lines):
        m = re.match(r'^\s*void\s+((?:[A-Za-z_]\w*::)*~?[A-Za-z_]\w*)\s*\(', ln)
        if not m:
            # ctor return-this strip
            continue
        qn = m.group(1)
        t = TRUTH.get(qn) or TRUTH.get(qn.split('::')[-1])
        ret = norm_ret(t[0]) if t else None
        if not ret or ret == 'void':
            stats['def-no-truth' if not (t and t[0]) else 'def-invalid-truth'] += 1
            continue
        DEF.setdefault(qn, []).append((p, i, ret))

print('void defs with truth:', sum(len(v) for v in DEF.values()),
      'names:', len(DEF))
edits = {}
for qn, lst in DEF.items():
    for p, i, ret in lst:
        lines = edits.setdefault(str(p), p.read_text(
            encoding='utf-8', errors='replace').split('\n'))
        old = lines[i]
        lines[i] = re.sub(r'^(\s*)void(\s+' + re.escape(qn) + r'\s*\()',
                          r'\g<1>' + ret + r'\g<2>', old, count=1)
        if lines[i] != old:
            stats['def-flipped'] += 1
        else:
            stats['def-flip-fail'] += 1

# pass 2: e4 hpp decls (verbatim void, same short name)
hpp = list((ROOT / 'src/e4/classes').glob('*.hpp')) + \
    [ROOT / 'src/e4/e4_protos.h']
for p in hpp:
    if not p.exists():
        continue
    lines = edits.setdefault(str(p), p.read_text(
        encoding='utf-8', errors='replace').split('\n'))
    changed = False
    for i, ln in enumerate(lines):
        m = re.match(r'^(\s*)(?:extern\s+)?void\s+(~?([A-Za-z_]\w*))\s*\(', ln)
        if not m:
            continue
        short = m.group(3)
        t = None
        for qn, lst in DEF.items():
            if qn.split('::')[-1] == short and lst:
                t = lst[0][2]
                break
        if t:
            lines[i] = re.sub(r'^(\s*)void(\s+~?' + re.escape(short) +
                              r'\s*\()', r'\g<1>' + t +
                              r'\g<2>', ln, count=1)
            stats['decl-flipped'] += 1
            changed = True

# pass 3: ctor-family return-this strip
for p in corpus:
    try:
        lines = edits.setdefault(str(p), p.read_text(
            encoding='utf-8', errors='replace').split('\n'))
    except OSError:
        continue
    # ctor def = `Cls::Cls(` or `Cls::~Cls(`; track brace depth crudely by
    # scanning only lines inside such defs (head match .. closing)
    for i, ln in enumerate(lines):
        if re.match(r'^\s*[A-Za-z_]\w*::~?[A-Za-z_]\w*\s*\(', ln):
            short = ln.split('::')[-1].split('(')[0].strip().lstrip('~')
            cls = ln.strip().split('::')[0].lstrip('~')
            if short != cls:
                continue
            j = i
            depth = 0
            started = False
            while j < len(lines) and j < i + 800:
                depth += lines[j].count('{') - lines[j].count('}')
                started = started or '{' in lines[j]
                if started and depth <= 0:
                    break
                if CTOR_RET.match(lines[j]):
                    lines[j] = ''  # strip bare return this;
                    stats['ctor-retthis-strip'] += 1
                j += 1

print('stats:', dict(stats.most_common()))
if APPLY:
    for path, lines in edits.items():
        Path(path).write_text('\n'.join(lines), encoding='utf-8', errors='replace')
    print('written:', len(edits), 'files')
else:
    print('(dry -- pass --apply)')
