#!/usr/bin/env python3
"""X45 subtask C step 2: classify the 19 bare forwards in gap2_global_decls.hpp.

For each fwd name: is it used in a TYPE position inside this header
(return type, param type, member type) or only as a PARAMETER NAME
(g22 emitter false positive: it fwd'ed any capitalized token in the
signature text, including param names)?
Read-only; prints the classification table.
"""
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
HDR = ROOT / 'src' / '_gap2' / 'gap2_global_decls.hpp'
NAMES = ['CampaignClass', 'LineTrail', 'AudioController', 'Coord', 'rc_ptr_base',
         'VectorClass', 'RandomStruct', 'ILocomotion', 'DynamicVectorClass_uint',
         'Block', 'Destination', 'ExceptionInfo', 'FileName', 'IUnknown',
         'Source', 'Src', 'String', 'String1', 'exception']

# strip comments to avoid noise
raw = HDR.read_bytes().decode('latin-1')
raw = re.sub(r'//[^\n]*', '', raw)
raw = re.sub(r'/\*.*?\*/', ' ', raw, flags=re.S)

# remove the fwd lines themselves
body = '\n'.join(l for l in raw.split('\n')
                 if not re.match(r'^\s*(class|struct)\s+\w+\s*;\s*$', l))

for name in NAMES:
    uses = []
    for m in re.finditer(r'\b' + re.escape(name) + r'\b', body):
        a = max(0, m.start() - 40)
        ctx = ' '.join(body[a:m.end() + 40].split())
        uses.append(ctx)
    # type-position heuristic: followed by '*' or '&' (pointer/ref type use),
    # or preceded by '(' / ',' / '*' with following name being lowercase
    type_uses = []
    name_uses = []
    for u in uses:
        tail = u.split(name, 1)[1].strip()
        head = u.rsplit(name, 1)[0].strip()
        if tail.startswith(('*', '&')):
            nxt = tail[1:].strip().split(' ')[0] if tail[1:].strip() else ''
            if nxt and nxt[0].islower():
                type_uses.append(u)      # T *param
            elif nxt.startswith((')', ',', ';', '=')) or nxt == '':
                type_uses.append(u)      # T* / T& alone
            else:
                type_uses.append(u)
        elif tail.startswith(('>', ';', ',', ')', '=', '(', '[')):
            type_uses.append(u)          # T>  T;  T, etc.
        elif tail and tail.split(' ')[0][0:1].islower():
            name_uses.append(u)          # T paramname  (param name position: T was a TYPE?
            # ambiguous: if head ends with ','/'(' and tail is lowercase word -> T is type + name
            if head.endswith((',', '(', '*')):
                type_uses.append(u)
                name_uses.pop()
        else:
            type_uses.append(u)
    print(f'{name}: type-pos={len(type_uses)} name-pos={len(name_uses)}')
    for u in type_uses[:2]:
        print('    T:', u[:80])
    for u in name_uses[:2]:
        print('    N:', u[:80])
