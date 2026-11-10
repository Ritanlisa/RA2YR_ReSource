#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
patch_bink_hints.py -- patch the fabricated binkw32.lib short-import members so
their Hint field equals the true hint from BINKW32.DLL's export table (the way
RAD's original import lib was built). Short member layout: 20-byte header where
offset 16 = WORD OrdinalHint (the Hint for name imports), then string data.
"""
import struct, sys, os

TRUE_HINTS = {   # from original gamemd hn entries == BINKW32.DLL export hints
    "__BinkSetSoundSystem@8": 48,
    "__BinkOpenDirectSound@4": 34,
    "__BinkGetError@0": 20,
    "__BinkOpen@8": 33,
    "__BinkSetVolume@8": 51,
    "__BinkClose@4": 15,
    "__BinkDDSurfaceType@4": 18,
    "__BinkGoto@12": 29,
    "__BinkPause@8": 38,
    "__BinkNextFrame@4": 32,
    "__BinkCopyToBuffer@28": 17,
    "__BinkDoFrame@4": 19,
    "__BinkWait@4": 52,
}

def main():
    src = sys.argv[1] if len(sys.argv) > 1 else "binkw32.lib"
    dst = sys.argv[2] if len(sys.argv) > 2 else "binkw32_h.lib"
    b = bytearray(open(src, "rb").read())
    off = 8
    patched = 0
    while off + 60 <= len(b):
        hdr = off
        size = int(bytes(b[hdr+48:hdr+58]).decode())
        do = off + 60
        d = bytes(b[do:do+size])
        if len(d) >= 20:
            sig1, sig2 = struct.unpack_from("<HH", d, 0)
            if sig1 == 0 and sig2 == 0xFFFF:
                szdata, = struct.unpack_from("<I", d, 12)
                sym = d[20:20+szdata].split(b"\x00")[0].decode("latin1")
                if sym in TRUE_HINTS:
                    pos = do + 16
                    old = struct.unpack_from("<H", b, pos)[0]
                    struct.pack_into("<H", b, pos, TRUE_HINTS[sym])
                    patched += 1
                    print(f"  {sym:32} hint {old} -> {TRUE_HINTS[sym]}")
        off = do + size + (size & 1)
    open(dst, "wb").write(bytes(b))
    print(f"patched {patched} hints -> {dst}")

if __name__ == "__main__":
    main()
