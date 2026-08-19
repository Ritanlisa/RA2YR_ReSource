#!/usr/bin/env python3
"""
Generate C++ header with CRC32 hash -> filename mappings from XCC mix description.
Matches OpenRA's PackageEntry.HashFilename with TS-style padding.
"""
import binascii, os, sys

DB_PATH = "D:/RA2YR_ReSource/xcc/data/ra2 mix description.txt"
OUT_PATH = "D:/RA2YR_ReSource/include/gamemd/system/xcc_names.hpp"

def crc32_ts(name):
    """CRC32 with TS-style padding (matching OpenRA PackageEntry.HashFilename)"""
    name = name.upper()
    l = len(name)
    lr = (l // 4) * 4
    pad = 4 - l % 4 if l % 4 else 0
    data = bytearray(name.encode('ascii'))
    if l != lr:
        data.append(l - lr)
        for p in range(1, pad):
            data.append(ord(name[lr]))
    return binascii.crc32(bytes(data)) & 0xFFFFFFFF

# Read XCC database
entries = []
with open(DB_PATH, 'r', encoding='utf-8', errors='replace') as f:
    for line in f:
        name = line.strip()
        if name:
            entries.append(name)

print(f"Loaded {len(entries)} filenames from XCC database")

# Compute hashes
hash_map = {}
for name in entries:
    h = crc32_ts(name)
    if h not in hash_map:
        hash_map[h] = name

# Write C++ header
with open(OUT_PATH, 'w') as f:
    f.write("""#pragma once
// Auto-generated from XCC Mixer ra2 mix description.txt
// CRC32(TS-style padding) hash -> filename lookup for MIX file contents
#include <cstdint>

namespace gamemd {
namespace xcc {

struct HashName { uint32_t hash; const char* name; };

""")
    # Sort by hash for binary search
    sorted_entries = sorted(hash_map.items())
    f.write(f"static constexpr int kXccNameCount = {len(sorted_entries)};\n\n")
    f.write("static constexpr HashName kXccNames[] = {\n")
    for h, name in sorted_entries:
        f.write(f'    {{0x{h:08X}, "{name}"}},\n')
    f.write("};\n\n")
    
    # Binary search function
    f.write("""
inline const char* XccLookup(uint32_t hash) {
    int lo = 0, hi = kXccNameCount - 1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (kXccNames[mid].hash == hash) return kXccNames[mid].name;
        if (kXccNames[mid].hash < hash) lo = mid + 1;
        else hi = mid - 1;
    }
    return nullptr;
}

} // namespace xcc
} // namespace gamemd
""")

print(f"Generated {OUT_PATH} with {len(sorted_entries)} hash->name entries")
# Check a few known hashes
for name in ['Ra2ts_l.bik', 'Ra2ts_s.bik', 'button00.shp', 'temperat.mix', 'TEMPERAT.PAL']:
    h = crc32_ts(name)
    print(f"  {name:20s} -> 0x{h:08X}")
