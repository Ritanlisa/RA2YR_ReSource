#!/usr/bin/env python3
"""Vtable ground-truth extractor (binary side).

Reads the ORIGINAL gamemd.exe .rdata and produces, per class vtable:
  - authoritative slot count (adjacency-bound: next known table VA;
    cross-checked by COL pointer at vt[-1] for table starts)
  - slot target addresses resolved to tree names via signals.json
  - per-family override analysis (base vs derived slot diff)

Data sources (all offline):
  D:/RA2MD/gamemd.exe                    original PE
  anchors/rtti_vtable_class.json         table VA -> class (+col_offset)
  signals.json                           address -> function name

Usage:
  python tools/vtable_inherit/extract_vtables.py <Class> [<Class>...]
  python tools/vtable_inherit/extract_vtables.py --family CDFileClass
"""
import json
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
EXE = ROOT.parent / 'RA2MD' / 'gamemd.exe'
if not EXE.exists():
    EXE = Path('D:/RA2MD/gamemd.exe')

CODE_LO, CODE_HI = 0x401000, 0x7E0390   # .text VA range (section-truth)


def load_sections(data):
    pe_off = struct.unpack_from('<I', data, 0x3C)[0]
    nsec = struct.unpack_from('<H', data, pe_off + 6)[0]
    opt_size = struct.unpack_from('<H', data, pe_off + 20)[0]
    secs = []
    for i in range(nsec):
        off = pe_off + 24 + opt_size + 40 * i
        name = data[off:off + 8].rstrip(b'\0').decode('latin-1')
        vsize, va, rsize, raw = struct.unpack_from('<IIII', data, off + 8)
        secs.append((name, va, vsize, raw))   # va here is the RVA
    return secs


class Exe:
    def __init__(self):
        self.data = EXE.read_bytes()
        self.secs = load_sections(self.data)

    def read_u32(self, va):
        rva = va - 0x400000
        for name, sva, vsize, raw in self.secs:
            if sva <= rva < sva + vsize:
                off = raw + (rva - sva)
                if off + 4 > len(self.data):
                    return None
                return struct.unpack_from('<I', self.data, off)[0]
        return None
    def is_code_ptr(self, v):
        return v is not None and CODE_LO <= v < CODE_HI

    def is_rdata_ptr(self, v):
        return v is not None and 0x7D0000 <= v < 0x8C0000 and not self.is_code_ptr(v)


def main():
    exe = Exe()
    rvc = json.loads((ROOT / 'anchors' / 'rtti_vtable_class.json')
                     .read_text(encoding='utf-8'))['vtables']
    sig = json.loads((ROOT / 'signals.json').read_text(encoding='utf-8'))['symbols']
    name_of = {}
    for k, v in sig.items():
        if isinstance(v, dict) and v.get('name'):
            try:
                name_of[int(k, 16)] = v['name']
            except ValueError:
                continue

    # all known table VAs sorted -> adjacency bounds
    all_vts = sorted((int(k, 16), v['class'], v['col_offset'])
                     for k, v in rvc.items())

    def table_slots(vt_va, next_va):
        slots = []
        a = vt_va
        while a + 4 <= next_va:
            p = exe.read_u32(a)
            if not exe.is_code_ptr(p):
                break
            slots.append(p)
            a += 4
        return slots

    def next_table_va(vt_va):
        for i, (va, cls, col) in enumerate(all_vts):
            if va == vt_va:
                return all_vts[i + 1][0] if i + 1 < len(all_vts) else 0x8C0000
        return 0x8C0000

    # COL header check: vt[-1] points into rdata (complete object locator)
    def col_check(vt_va):
        return exe.is_rdata_ptr(exe.read_u32(vt_va - 4))

    args = [a for a in sys.argv[1:] if not a.startswith('--')]
    family_mode = '--family' in sys.argv

    if family_mode and args:
        lay = json.loads((ROOT / 'tools' / 'class_layouts.json')
                         .read_text(encoding='utf-8'))
        # walk up the parent chain
        chain = []
        c = args[0]
        while c:
            chain.append(c)
            c = (lay.get(c) or {}).get('parent')
        chain.reverse()
        print('family chain (root->leaf):', ' -> '.join(chain))
        tables = {}
        for cls in chain:
            ent = [(int(k, 16), v['col_offset'])
                   for k, v in rvc.items() if v['class'] == cls]
            for va, col in sorted(ent, key=lambda x: x[1]):
                nxt = next_table_va(va)
                slots = table_slots(va, nxt)
                tables.setdefault(cls, []).append((va, col, slots))
        # print per-class tables
        for cls in chain:
            for va, col, slots in tables.get(cls, []):
                print()
                print('== %s vt=%X col_off=%d slots=%d COL@-4=%s'
                      % (cls, va, col, len(slots), col_check(va)))
                for i, p in enumerate(slots):
                    print('  %2d %08X %s' % (i, p, name_of.get(p, '?')))
        # override diff between consecutive chain levels (col 0 tables)
        prev_cls = prev_slots = None
        print()
        for cls in chain:
            t = [t for t in tables.get(cls, []) if t[1] == 0]
            if not t:
                continue
            slots = t[0][2]
            if prev_slots is not None:
                same = diff = new = 0
                details = []
                for i in range(max(len(slots), len(prev_slots))):
                    a = prev_slots[i] if i < len(prev_slots) else None
                    b = slots[i] if i < len(slots) else None
                    if a is None and b is not None:
                        new += 1
                        details.append('  +%d NEW %s' % (i, name_of.get(b, '?')))
                    elif a != b:
                        diff += 1
                        details.append('  ~%d %s -> %s'
                                       % (i, name_of.get(a, hex(a or 0)),
                                          name_of.get(b, '?')))
                    else:
                        same += 1
                print('%s -> %s: same=%d override=%d new=%d'
                      % (prev_cls, cls, same, diff, new))
                for d in details:
                    print(d)
            prev_cls, prev_slots = cls, slots
    else:
        for cls in args or ['CDFileClass']:
            for k, v in rvc.items():
                if v['class'] == cls:
                    va = int(k, 16)
                    slots = table_slots(va, next_table_va(va))
                    print('== %s vt=%X col_off=%d slots=%d COL@-4=%s'
                          % (cls, va, v['col_offset'], len(slots),
                             col_check(va)))
                    for i, p in enumerate(slots):
                        print('  %2d %08X %s' % (i, p, name_of.get(p, '?')))


main()
