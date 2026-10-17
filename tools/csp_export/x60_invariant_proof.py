#!/usr/bin/env python3
"""X60 layout invariant proof (static, exact).

For every normalized carrier struct: emitted members must be contiguous
(next offset == prev end) and naturally aligned (offset % align == 0).
If both hold for the whole body, the C++ compiled layout equals the comment
offsets exactly, and C++ sizeof == til size (modulo tail rounding to the
struct alignment)."""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.argv = ['x', '--plan', str(ROOT / '.omo/evidence/optimization/x60/x60_inv.json')]
import importlib.util
spec = importlib.util.spec_from_file_location(
    'g60', str(ROOT / 'tools' / 'csp_export' / 'gen_x60_carrier_layout.py'))
g60 = importlib.util.module_from_spec(spec)
spec.loader.exec_module(g60)
TIL = json.loads((ROOT / '.omo/evidence/optimization/x60/x60_til.json')
                 .read_text(encoding='utf-8'))

MEMBER_RE = re.compile(r'^\s+(.+?);\s*//\s*0x([0-9A-Fa-f]+)\s*$')
NAME_RE = re.compile(r'([A-Za-z_]\w*)\s*\**\s*$')


def member_info(decl):
    """(end_size, align) from a member declaration line."""
    m = re.match(r'^(.*?)\s*\[(\d+)\]$', decl)
    if m:
        base_decl, n = m.group(1), int(m.group(2))
        stars = base_decl.count('*')
        toks = [t for t in base_decl.split() if t != '*']
        base = ' '.join(t for t in toks if t in
                        ('unsigned', 'signed', 'long', 'short', 'int', 'char',
                         'double', 'float', 'bool'))
        elem = 4 if stars else g60.type_width(base)
        return elem * n, min(max(elem, 1), 8)
    nm = NAME_RE.search(decl)
    if not nm:
        return None, None
    ty = decl[:nm.start()] + decl[nm.start() + len(nm.group(1)):]
    total = g60.type_width(ty.strip())
    return total, min(max(total, 1), 8)


stats = {'structs': 0, 'contig_ok': 0, 'contig_bad': 0, 'align_bad': 0,
         'sizeof_ok': 0, 'sizeof_round': 0, 'sizeof_bad': 0}
bad_rows = []
for path in g60.FILES:
    try:
        text = path.read_bytes().decode('utf-8')
    except UnicodeDecodeError:
        text = path.read_bytes().decode('latin-1')
    structs, lines = g60.parse_file_structs(text)
    for st in structs:
        t = TIL.get(st['name'])
        if not t:
            continue
        stats['structs'] += 1
        want = int(t['size'])
        # detect #pragma pack(push, P) wrapper emitted by the generator
        pack_p = None
        for ln in lines[st['open'] + 1:st['close']]:
            mp = re.match(r'\s*#pragma pack\(push,\s*(\d)\)', ln)
            if mp:
                pack_p = int(mp.group(1))
                break
        prev_end = 0
        max_align = 1
        ok_contig = True
        ok_align = True
        for ln in lines[st['open'] + 1:st['close']]:
            m = MEMBER_RE.match(ln)
            if not m:
                continue  # method/pragma/other line
            decl = m.group(1)
            total, align = member_info(decl)
            if total is None:
                continue
            off = int(m.group(2), 16)
            eff_align = min(align, pack_p) if pack_p else align
            max_align = max(max_align, eff_align)
            if off != prev_end:
                ok_contig = False
                if len(bad_rows) < 25:
                    bad_rows.append((path.name, st['name'], 'gap',
                                     hex(prev_end), hex(off), ln.strip()[:60]))
            if off % eff_align != 0:
                ok_align = False
                if len(bad_rows) < 25:
                    bad_rows.append((path.name, st['name'], 'align',
                                     eff_align, hex(off), ln.strip()[:60]))
            prev_end = off + total
        if prev_end != want:
            ok_contig = False
            if len(bad_rows) < 25:
                bad_rows.append((path.name, st['name'], 'tail',
                                 want, prev_end, ''))
        if ok_contig and ok_align:
            stats['contig_ok'] += 1
            rounded = (want + max_align - 1) // max_align * max_align
            if rounded == want:
                stats['sizeof_ok'] += 1
            elif rounded - want <= max_align:
                stats['sizeof_round'] += 1
            else:
                stats['sizeof_bad'] += 1
        else:
            stats['contig_bad'] += 1

print(json.dumps(stats))
print('bad rows (first 25):')
for r in bad_rows:
    print('  ', r)
json.dump({'stats': stats, 'bad_rows': bad_rows},
          open(ROOT / '.omo/evidence/optimization/x60/x60_invariant_proof.json', 'w'))
