#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
scan_tables2.py -- .rdata static-table inventory v2.

Improvements over scan_tables.py:
  * unaligned absolute-VA xref census over .text (numpy, all 4 phase offsets)
  * GUID run detection at 16-byte record granularity
  * block segmentation: contiguous non-TXTP regions bounded by text-pointer
    runs (vtables/RTTI), each block tagged with byte-class mix + xref count
  * stride-structure probe: for each block, test strides 4..64 for
    equal-stride record repetition (helps pick per-table C structs)

Output: w2/inventory.json (blocks) + w2/inventory.md (human table)
"""
import struct, json, sys
import numpy as np

ORIG = r"D:\RA2MD\gamemd.exe"
BASE = 0x400000
TEXT = (0x1000, 0x3E0F3D)
RDATA = (0x3E1000, 0x411074)
SCAN_LO, SCAN_HI = 0x3E1608, 0x40F0E0

def va_text(v):  return TEXT[0] + BASE <= v < TEXT[1] + BASE

def is_guid(b, off):
    d1, d2, d3 = struct.unpack_from('<IHH', b, off)
    if not (0x1100 <= d3 <= 0x11FF): return False
    if d2 == 0 or d3 == 0: return False
    if b[off+8:off+16] == b'\x00'*8: return False
    return True

def main():
    b = open(ORIG, 'rb').read()

    # ---- unaligned dword census over .text: every 4-byte window that equals
    #      a VA into the scan region
    arr = np.frombuffer(b, dtype=np.uint8)
    text = arr[TEXT[0]:TEXT[1]]
    xref = np.zeros(SCAN_HI - SCAN_LO + 4, dtype=np.int32)
    for phase in range(4):
        n = (len(text) - phase) // 4
        dv = text[phase:phase + n*4].view('<u4')
        idx = dv - (SCAN_LO + BASE)
        sel = (idx >= 0) & (idx < xref.size)
        np.add.at(xref, idx[sel], 1)
    xr = {SCAN_LO + i: int(xref[i]) for i in range(0, SCAN_HI - SCAN_LO, 4) if xref[i]}

    # ---- dword class line
    N = (SCAN_HI - SCAN_LO) // 4
    dwords = np.frombuffer(b, dtype='<u4', count=N, offset=SCAN_LO)
    TXTP_LO, TXTP_HI = TEXT[0] + BASE, TEXT[1] + BASE
    cls = np.where((dwords >= TXTP_LO) & (dwords < TXTP_HI), 1,   # text ptr
          np.where((dwords >= 0x812000) & (dwords < 0xB79BE4), 2, # .data ptr (VA)
          np.where((dwords >= 0x7E1000) & (dwords < 0x811074), 3, # .rdata ptr (VA)
          np.where(dwords == 0, 4, 0))))                          # zero

    # ---- GUID record runs (16B granularity) override
    guid_mark = bytearray(N * 4)
    off = SCAN_LO
    while off + 16 <= SCAN_HI:
        if is_guid(b, off):
            for k in range(off, off + 16): guid_mark[k - SCAN_LO] = 1
            off += 16
        else:
            off += 4

    # ---- blocks: split where cls==TXTP runs >= 8 dwords (vtable-grade)
    #      smaller TXTP runs (<=6 dwords) may be pointer fields inside tables
    is_txtp = (cls == 1)
    # find vtable-grade runs: >= 8 consecutive text pointers
    runlen = np.zeros(N, dtype=np.int32)
    c = 0
    for i in range(N - 1, -1, -1):
        if is_txtp[i]: c += 1
        else: c = 0
        runlen[i] = c
    vt_grade = np.zeros(N, dtype=bool)
    i = 0
    while i < N:
        if runlen[i] >= 8:
            vt_grade[i:i + runlen[i]] = True
            i += runlen[i]
        else:
            i += 1

    blocks = []
    i = 0
    while i < N:
        if vt_grade[i]:
            i += 1
            continue
        j = i
        while j < N and not vt_grade[j]:
            j += 1
        lo = SCAN_LO + i * 4
        hi = SCAN_LO + j * 4
        blk = b[lo:hi]
        nd = j - i
        mix = {
            'txtp': int(((cls[i:j] == 1)).sum()),
            'datap': int(((cls[i:j] == 2)).sum()),
            'rdatap': int(((cls[i:j] == 3)).sum()),
            'zero': int(((cls[i:j] == 4)).sum()),
            'other': int(((cls[i:j] == 0)).sum()),
        }
        # guid bytes inside
        gcount = sum(guid_mark[lo - SCAN_LO + k] for k in range(0, (hi - lo) & ~3, 4))
        xr_sum = sum(xr.get(a, 0) for a in range(lo, hi, 4))
        # stride probe: stride s fits if len % s == 0 and >=2 records
        best = None
        for s in range(4, min(65, max(4, (hi - lo)))):
            if (hi - lo) % s: continue
            recs = (hi - lo) // s
            if recs < 2: continue
            sig0 = blk[:s]
            same = all(blk[k*s:(k+1)*s] == sig0 for k in range(1, recs))
            if same:
                best = s  # keep largest equal-stride
        blocks.append({'lo': hex(lo), 'hi': hex(hi), 'len': hi - lo,
                       'mix': mix, 'guid16': gcount, 'xref': xr_sum,
                       'eq_stride': best})
        i = j

    blocks.sort(key=lambda r: -r['len'])
    json.dump(blocks, open(r'D:\RA2YR_ReSource\tools\data_match\w2\inventory.json', 'w'), indent=1)

    # human summary: pointer-free blocks (game-table grade) sorted by size
    clean = [r for r in blocks if r['len'] >= 48
             and (r['mix']['txtp'] + r['mix']['datap'] + r['mix']['rdatap']) * 4 <= r['len'] // 8]
    clean.sort(key=lambda r: -r['len'])
    print(f'{len(blocks)} blocks total; {len(clean)} pointer-free (<=12.5% ptr) blocks >=48B:')
    print(f"{'lo':>10} {'len':>7} {'xref':>4} {'guid':>4} {'stride':>6}  mix(tx/dat/rd/z/ot)")
    for r in clean[:60]:
        m = r['mix']
        print(f"{r['lo']:>10} {r['len']:>7} {r['xref']:>4} {r['guid16']:>4} "
              f"{str(r['eq_stride'] or '-'):>6}  {m['txtp']}/{m['datap']}/{m['rdatap']}/{m['zero']}/{m['other']}")

if __name__ == '__main__':
    main()
