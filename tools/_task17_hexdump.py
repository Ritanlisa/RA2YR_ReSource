"""Hex dump pseudocode with annotations to understand format"""
import json, os

decompile_dir = 'tools/sub_decompiles'

# Pick the simplest function: sub_4011B0 (9 bytes, return *(a1 + 36 * a2))
fpath = os.path.join(decompile_dir, '004011B0.json')
with open(fpath, 'r') as f:
    d = json.load(f)

pseudo = d['pseudocode']
raw = pseudo.encode('utf-8', errors='replace')

print(f"Total length: {len(raw)} bytes")
print()

# Hex dump with ASCII
for offset in range(0, min(len(raw), 400), 16):
    chunk = raw[offset:offset+16]
    hex_str = ' '.join(f'{b:02x}' for b in chunk)
    ascii_str = ''.join(chr(b) if 32 <= b < 127 else '.' for b in chunk)
    print(f'{offset:04x}: {hex_str:<48s} {ascii_str}')

print()
print("--- Now also sub_401FB0 (simplest: 4 bytes, return *(this+3)) ---")
fpath2 = os.path.join(decompile_dir, '00401FB0.json')
with open(fpath2, 'r') as f:
    d2 = json.load(f)
raw2 = d2['pseudocode'].encode('utf-8', errors='replace')
for offset in range(0, min(len(raw2), 300), 16):
    chunk = raw2[offset:offset+16]
    hex_str = ' '.join(f'{b:02x}' for b in chunk)
    ascii_str = ''.join(chr(b) if 32 <= b < 127 else '.' for b in chunk)
    print(f'{offset:04x}: {hex_str:<48s} {ascii_str}')
