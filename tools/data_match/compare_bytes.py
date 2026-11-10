#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
compare_bytes.py -- locate a byte signature (from the original exe) in our
build and byte-diff the span. Usage:
  python compare_bytes.py <ours.exe> <orig_sig_offset> <sig_len> <label>
"""
import sys

def find_all(hay, needle, start=0):
    out = []
    i = hay.find(needle, start)
    while i >= 0:
        out.append(i)
        i = hay.find(needle, i + 1)
    return out

def main():
    ours_p, sig_off, sig_len, label = sys.argv[1], int(sys.argv[2], 0), int(sys.argv[3], 0), sys.argv[4]
    orig = open(r"D:\RA2MD\gamemd.exe", "rb").read()
    ours = open(ours_p, "rb").read()
    sig = orig[sig_off:sig_off+sig_len]
    hits = find_all(ours, sig)
    print(f"{label}: signature {len(sig)}B from orig 0x{sig_off:X} -> {len(hits)} hit(s) in ours: {[hex(h) for h in hits]}")
    for h in hits:
        # compare a wider window (extend to full table length if known)
        print(f"  at ours 0x{h:X}")
    return hits

if __name__ == "__main__":
    main()
