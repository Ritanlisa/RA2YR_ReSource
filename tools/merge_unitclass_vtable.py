#!/usr/bin/env python3
"""Merge UnitClass vtable data into vtable_offsets.json."""
import json, re, sys
sys.path.insert(0, 'tools')

# Load UnitClass IDA vtable dump
with open('tools/_ida_unitclass.json') as f:
    uc = json.load(f)

# Build UnitClass offsets: {code_name: byte_offset}
uc_offsets = {}
for addr_str, info in uc.items():
    ida_name = info['ida_name']
    short = ida_name.split('::')[-1]
    short = short.split('<')[0].split('(')[0]
    if 'COMStub' in short or 'StubReturn' in short or 'SD_vt' in short or short.startswith('sub_'):
        continue
    uc_offsets[short] = info['byte_offset']

# Merge into existing vtable_offsets.json
with open('tools/vtable_offsets.json') as f:
    existing = json.load(f)

existing['UnitClass'] = uc_offsets

with open('tools/vtable_offsets.json', 'w') as f:
    json.dump(existing, f, indent=2)

# Test
from verify_execution_flow import load_all_maps, get_vtable_byte_offset
M = load_all_maps()
print(f"UnitClass methods: {len(uc_offsets)}")
print(f"GetCellCoords_Alt on UnitClass: {get_vtable_byte_offset('GetCellCoords_Alt', 'UnitClass', M)}")
print(f"GetCellCoords on UnitClass: {get_vtable_byte_offset('GetCellCoords', 'UnitClass', M)}")
print(f"Disappear on UnitClass: {get_vtable_byte_offset('Disappear', 'UnitClass', M)}")
