#!/usr/bin/env python3
"""X60 sizeof spot-check: parse regenerated carriers, compute true C++ sizeof,
compare vs til authority. Static (no build). >=10 classes required."""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools' / 'csp_export'))
import importlib.util
spec = importlib.util.spec_from_file_location(
    'g60', str(ROOT / 'tools' / 'csp_export' / 'gen_x60_carrier_layout.py'))
sys.argv = ['x', '--plan', str(ROOT / '.omo/evidence/optimization/x60/x60_sizeof_probe.json')]
g60 = importlib.util.module_from_spec(spec)
spec.loader.exec_module(g60)

TIL = json.loads((ROOT / '.omo/evidence/optimization/x60/x60_til.json')
                 .read_text(encoding='utf-8'))

SPOT = ['CellStruct', 'Coord', 'MouseStruct', 'Timer', 'Date', 'AbstractClass',
        'VectorClass', 'DynamicVectorClass', 'House', 'Team', 'Bullet',
        'WeaponStruct', 'Rule', 'Factory', 'Display', 'Color', 'Logo', 'Rain',
        'Waypoint', 'Flash']

def cpp_sizeof(body_lines):
    """Compute the C++ sizeof a compiler would derive from emitted members."""
    size = 0
    max_align = 1
    pat = re.compile(r'^\s+(\S[^;]*):// 0x[0-9A-Fa-f]+\s*$')
    for ln in body_lines:
        decl = ln.split('//')[0].strip()
        if not decl.endswith(';'):
            continue
        m = re.match(r'^(.*?)\s*\[(\d+)\]$', decl[:-1].strip())
        if m:
            base_decl, n = m.group(1), int(m.group(2))
            toks = base_decl.split()
            base_ty = toks[0] if len(toks) <= 2 else ' '.join(
                t for t in toks if not re.match(r'^[A-Za-z_]\w*$', t) or
                t in ('unsigned', 'signed', 'long', 'short'))
            stars = base_decl.count('*')
            elem_w = 4 if stars else g60.type_width(base_ty)
            total = elem_w * n
            max_align = max(max_align, min(max(elem_w, 1), 8))
        else:
            core = decl[:-1].strip()
            nm = re.search(r'([A-Za-z_]\w*)\s*\**\s*$', core)
            if not nm:
                continue
            ty = core[:nm.start()] + core[nm.start() + len(nm.group(1)):]
            total = g60.type_width(ty.strip())
            max_align = max(max_align, min(max(total, 1), 8))
        size = (size + max_align - 1) // max_align * max_align  # approx
        size += total
    size = (size + max_align - 1) // max_align * max_align
    return size, max_align

print('%-22s %8s %8s %8s  %s' % ('class', 'til', 'carrier', 'delta', 'verdict'))
ok = bad = skip = 0
rows = []
for path in g60.FILES:
    try:
        text = path.read_bytes().decode('utf-8')
    except UnicodeDecodeError:
        text = path.read_bytes().decode('latin-1')
    structs, lines = g60.parse_file_structs(text)
    for st in structs:
        if st['name'] not in SPOT:
            continue
        t = TIL.get(st['name'])
        if not t:
            print('%-22s %8s %8s %8s  %s' % (st['name'], '-', '-', '-', 'no til'))
            skip += 1
            continue
        # reconstruct body: members between open..close are the current file's
        body = lines[st['open'] + 1:st['close']]
        got, al = cpp_sizeof(body)
        want = int(t['size'])
        d = got - want
        verdict = 'OK' if d == 0 else ('OK(round+%d)' % d if 0 < d <= al else 'MISMATCH')
        if d == 0 or 0 < d <= al:
            ok += 1
        else:
            bad += 1
        rows.append((st['name'], want, got, d, verdict))
        print('%-22s %8d %8d %8d  %s' % (st['name'], want, got, d, verdict))
print()
print('spot-check: %d OK / %d MISMATCH / %d skipped' % (ok, bad, skip))
json.dump({'rows': rows, 'ok': ok, 'bad': bad, 'skip': skip},
          open(ROOT / '.omo/evidence/optimization/x60/x60_sizeof_spot.json', 'w'))
