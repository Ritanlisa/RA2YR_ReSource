#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""G42.51 preprocessor-gating audit: are any function bodies locked behind
#if/#ifdef/#ifndef (compile-out risk) instead of being unconditional?

Classification per conditional block:
  include_guard   #ifndef X / #pragma once-adjacent at file head  (legal)
  plat_include    #ifdef _WIN32 around #include/#undef only       (legal)
  body_gate       block containing function DEFINITIONS           (VIOLATION
                  unless the macro is project-wide-defined)
  dead_if0        #if 0                                            (VIOLATION)
"""
import io
import glob
import re
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
PP = re.compile(r'^\s*#\s*(if|ifdef|ifndef|elif|else|endif|if)\b\s*(.*)$')
DEFLIKE = re.compile(r'^\s*(?:[A-Za-z_][\w:<>,\s\*&\(\)]*?)\b'
                     r'([A-Za-z_~]\w*(?:::[A-Za-z_~]\w*)+)\s*\(')

KNOWN_DEFINED = set()   # macros defined project-wide (CMake/user)
for cm in glob.glob(str(ROOT / 'CMakeLists.txt')) + \
        glob.glob(str(ROOT / '**/CMakeLists.txt'), recursive=True):
    for m in re.finditer(r'add_compile_definitions\(([^)]*)\)',
                         io.open(cm, encoding='utf-8', errors='replace').read()):
        for tok in m.group(1).split():
            KNOWN_DEFINED.add(tok.split('=')[0].strip())

stats = Counter()
viol = []
for p in sorted(glob.glob(str(ROOT / 'src' / '**' / '*.cpp'), recursive=True) +
                sorted(glob.glob(str(ROOT / 'src' / '**' / '*.hpp'),
                                 recursive=True))):
    lines = io.open(p, encoding='utf-8', errors='replace').read().split('\n')
    stack = []      # (kind, macro, line, has_body_def, n_endif)
    for i, l in enumerate(lines):
        m = PP.match(l)
        if m:
            kw, rest = m.group(1), m.group(2).strip()
            if kw in ('if', 'ifdef', 'ifndef'):
                stack.append([kw, rest, i + 1, 0, False])
            elif kw == 'endif':
                if stack:
                    blk = stack.pop()
                    cond = blk[1]
                    kind = None
                    if blk[0] == 'if' and cond == '0':
                        kind = 'dead_if0'
                    elif blk[3] > 0:
                        macro = cond.split()[0] if cond else ''
                        defined = macro in KNOWN_DEFINED or \
                            macro.startswith('_WIN32|WIN32|_MSC_VER|__x86')
                        if macro in ('_WIN32', 'WIN32', '_MSC_VER', '__cplusplus'):
                            kind = 'body_gate_plat'
                        elif defined:
                            kind = 'body_gate_defined'
                        else:
                            kind = 'body_gate_UNDEF'
                    if kind:
                        stats[kind] += 1
                        if kind != 'body_gate_defined':
                            viol.append((p, blk[2], i + 1, kind, cond,
                                         blk[3]))
            elif kw == 'else' and stack:
                stack[-1][4] = True
            continue
        if stack and DEFLIKE.match(l) and not l.lstrip().startswith('//'):
            for blk in stack:
                # only count innermost active branch
                pass
            if stack:
                stack[-1][3] += 1

print('block kinds:', dict(stats))
print('VIOLATIONS (body gated):', len(viol))
for v in viol[:40]:
    print('  %-40s L%-6d-%-6d %-16s cond=%-24s defs=%d'
          % (Path(v[0]).name, v[1], v[2], v[3], v[4], v[5]))
