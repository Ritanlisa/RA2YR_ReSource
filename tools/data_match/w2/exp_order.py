#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
exp_order.py -- layout-rule analyzer for the w2 layout experiments.
Locates each probe table inside a built exe's .rdata and reports:
  * emission order of tables (same-obj and cross-obj)
  * byte gaps between consecutive tables (padding rule)
"""
import struct, sys

def sections(pe_bytes):
    pe = struct.unpack_from('<I', pe_bytes, 0x3C)[0]
    nsec = struct.unpack_from('<H', pe_bytes, pe + 6)[0]
    opt = struct.unpack_from('<H', pe_bytes, pe + 20)[0]
    out = []
    for i in range(nsec):
        o = pe + 24 + opt + i * 40
        name = pe_bytes[o:o+8].rstrip(b'\x00').decode()
        vsz, va, rsz, ra = struct.unpack_from('<IIII', pe_bytes, o + 8)
        out.append((name, va, rsz, ra))
    return out

def rdata(exe):
    for name, va, rsz, ra in sections(exe):
        if name == '.rdata':
            return va, exe[ra:ra+rsz]
    return None, b''

SIGS = {
    'tbl_a': struct.pack('<4i', 1001, 1002, 1003, 1004),
    'tbl_b': bytes([201,201,201,201, 32,32,32,32, 202,202,202,202]),
    'tbl_c': struct.pack('<d', 1.03125),
    'tbl_d': struct.pack('<if', 301, 1.25),
    'tbl_e': struct.pack('<f', 9.51),
    'tbl_x': struct.pack('<4i', 4001, 4002, 4003, 4004),
    'tbl_y': bytes([111]*4 + [32]*4 + [112]*4),
    'tbl_z': struct.pack('<d', 11.03125),
    'tbl_w': struct.pack('<f', 7.51),
}

def main(path, names):
    exe = open(path, 'rb').read()
    va, rd = rdata(exe)
    print(f'{path}: .rdata VA=0x{va:X} size=0x{len(rd):X}')
    found = []
    for n in names:
        sig = SIGS[n]
        i = rd.find(sig)
        while i >= 0:  # take first occurrence; content is unique
            break
        print(f'  {n}: {"0x%X" % (va + i) if i >= 0 else "NOT FOUND"} (rdata+0x%X)' % (i if i >= 0 else 0))
        if i >= 0: found.append((n, va + i, i))
    found.sort(key=lambda t: t[2])
    print('  order:', ' -> '.join(n for n, _, _ in found))
    for k in range(1, len(found)):
        n0, _, o0 = found[k-1]
        n1, _, o1 = found[k]
        print(f'  gap {n0} -> {n1}: {o1 - o0}B')

if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2].split(','))
