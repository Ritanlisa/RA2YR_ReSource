#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
probe_units.py -- finalize extents of pointer-free table units + coverage math.

* verifies each candidate unit is pointer-free (no .text/.data/.rdata VAs)
* computes the game static data area denominator:
    game area = 0x3E1608..0x3F9590 (CRT boundary) minus TXTP-grade runs (>=8
    consecutive .text pointers = vtable/RTTI structures)
* emits w2/units.json for gen_tables.py
"""
import struct, json
import numpy as np

ORIG = r"D:\RA2MD\gamemd.exe"
BASE = 0x400000
TEXT = (0x1000, 0x3E0F3D)
GAME_LO, GAME_HI = 0x3E1608, 0x3F9590     # CRT boundary: "Access violation - no RTTI data!"

CANDIDATES = [
    # name, lo, hi (provisional; verified/trimmed below)
    ("theater",      0x3E1B78, 0x3E1E18),
    ("pi_hdr_2b0c",  0x3E2B0C, 0x3E2B20),
    ("maskA",        0x3E2B20, 0x3E3228),
    ("fc26_dbl",     0x3E3544, 0x3E3584),
    ("fc_37b0",      0x3E37AC, 0x3E37C0),
    ("intfam_622c",  0x3E622C, 0x3E6E58),
    ("fc_8848",      0x3E8848, 0x3E8880),
    ("fc_pi_8974",   0x3E8974, 0x3E8994),
    ("guidA",        0x3E94F0, 0x3E9B50),
    ("guidC",        0x3EB788, 0x3EB7F8),
    ("triB",         0x3EC450, 0x3EC4C8),
    ("maskB",        0x3EC4C8, 0x3ECBD0),
    ("p95_3ed7d8",   0x3ED7D8, 0x3ED7F8),
    ("p95_3ef70c",   0x3EF70C, 0x3EF71C),
    ("fc_3f4e4c",    0x3F4E4C, 0x3F4E68),
    ("fc_3f6bac",    0x3F6BAC, 0x3F6BC4),
    ("guidD",        0x3F7520, 0x3F7620),
    ("dshowfarm",    0x3F7CB0, 0x3F9590),
]

def main():
    b = open(ORIG, 'rb').read()
    N = (GAME_HI - GAME_LO) // 4
    dwords = np.frombuffer(b, dtype='<u4', count=N, offset=GAME_LO)
    TXTP_LO, TXTP_HI = TEXT[0] + BASE, TEXT[1] + BASE
    is_txtp = (dwords >= TXTP_LO) & (dwords < TXTP_HI)
    runlen = np.zeros(N, dtype=np.int32)
    c = 0
    for i in range(N - 1, -1, -1):
        c = c + 1 if is_txtp[i] else 0
        runlen[i] = c
    vt = np.zeros(N, dtype=bool)
    i = 0
    while i < N:
        if runlen[i] >= 8:
            vt[i:i + runlen[i]] = True
            i += runlen[i]
        else:
            i += 1
    vt_bytes = int(vt.sum()) * 4
    area = GAME_HI - GAME_LO
    print(f'game area 0x{GAME_LO:X}..0x{GAME_HI:X} = {area}B; TXTP-grade(vtable/RTTI) = {vt_bytes}B; '
          f'denominator = {area - vt_bytes}B')

    def ptr_count(lo, hi):
        n = 0
        for off in range(lo, hi, 4):
            d = struct.unpack_from('<I', b, off)[0]
            if TXTP_LO <= d < TXTP_HI or 0x812000 <= d < 0xB79BE4 or 0x7E1000 <= d < 0x811074:
                # exclude self-referential zeros trick: report
                n += 1
        return n

    units = []
    for name, lo, hi in CANDIDATES:
        pc = ptr_count(lo, hi)
        ok = 'OK ' if pc == 0 else f'PTR({pc})'
        print(f'{name:14} 0x{lo:06X}..0x{hi:06X} len={hi-lo:5} {ok}')
        units.append({'name': name, 'lo': lo, 'hi': hi, 'ptrs': pc, 'len': hi - lo})
    json.dump({'denominator': area - vt_bytes, 'area': area, 'vtable_bytes': vt_bytes,
               'units': units},
              open(r'D:\RA2YR_ReSource\tools\data_match\w2\units.json', 'w'), indent=1)

if __name__ == '__main__':
    main()
