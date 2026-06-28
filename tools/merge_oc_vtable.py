import json, re, sys

# Step 1: Parse annotation code-name -> address mappings from object.hpp
ann_map = {}
with open('src/object/object.hpp', encoding='utf-8', errors='replace') as f:
    lines = f.readlines()
for i, line in enumerate(lines):
    m = re.search(r'//\s*\[(\d+)\]\s*(0x[0-9A-Fa-f]+)\s+(.+)', line)
    if not m:
        continue
    addr = int(m.group(2), 16)
    for j in range(i, min(i + 5, len(lines))):
        if 'virtual' in lines[j] and '(' in lines[j]:
            vn = re.search(r'(?:~?\w[\w:<>,*\s]*)\s+([~\w]+)\s*\(', lines[j])
            if vn:
                ann_map[addr] = vn.group(1)
                break

print(f"Annotations: {len(ann_map)} code-name mappings")

# Step 2: Load IDA dump
oc = json.load(open('tools/_ida_objectclass_full.json'))

# Step 3: Cross-reference — for each annotation address, find binary offset in IDA dump
merged = {}
for addr, code_name in ann_map.items():
    key = str(addr)
    if key in oc:
        merged[code_name] = oc[key]['byte_offset']

# Also add any remaining IDA entries (using IDA short name as fallback)
for addr_str, info in oc.items():
    addr = int(addr_str)
    short = info['ida_name'].split('::')[-1].split('<')[0]
    if 'COMStub' not in short and 'SD_vt' not in short:
        if short not in merged:
            merged[short] = info['byte_offset']

# Step 4: Save merged ObjectClass data
e = json.load(open('tools/vtable_offsets.json'))
e['ObjectClass'] = merged
json.dump(e, open('tools/vtable_offsets.json', 'w'), indent=2)

print(f"ObjectClass merged: {len(merged)} methods")
print(f"Disappear: {merged.get('Disappear')}")
print(f"GetCellCoords_Alt: {merged.get('GetCellCoords_Alt')}")
print(f"UnInit: {merged.get('UnInit')}")
print(f"IsActive: {merged.get('IsActive')}")
print(f"Destroy2: {merged.get('Destroy2')}")

# Step 5: Verify via get_vtable_byte_offset
sys.path.insert(0, 'tools')
from verify_execution_flow import load_all_maps, get_vtable_byte_offset
M = load_all_maps()
print("\nVerification:")
for m, c, e in [
    ('Disappear', 'ObjectClass', 440),
    ('GetCellCoords_Alt', 'ObjectClass', 660),
    ('GetCellCoords_Alt', 'UnitClass', 440),
    ('UnInit', 'ObjectClass', 468),
    ('IsActive', 'ObjectClass', 288),
]:
    r = get_vtable_byte_offset(m, c, M)
    ok = 'OK' if r == e else f'MISMATCH (got {r})'
    print(f"  {m:30s} @ {c:15s} = {r:4d}  expected {e:4d}  {ok}")
