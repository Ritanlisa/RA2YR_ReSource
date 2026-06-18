"""
Analyze named global functions (non-member, non-sub_) across target modules
for translation prioritization.
"""
import json
import os

# Load functions.json
with open('injectFunctionTest/functions.json', 'r', encoding='utf-8') as f:
    data = json.load(f)

funcs = data['functions']

# Load priority_matrix
with open('tools/priority_matrix.json', 'r', encoding='utf-8') as f:
    pm = json.load(f)

# Build lookup: addr -> priority entry
pm_lookup = {}
for entry in pm['high']:
    pm_lookup[entry['name']] = {'tier': 'HIGH', 'entry': entry}
for entry in pm['medium']:
    if entry['name'] not in pm_lookup:
        pm_lookup[entry['name']] = {'tier': 'MEDIUM', 'entry': entry}
for entry in pm['low']:
    if entry['name'] not in pm_lookup:
        pm_lookup[entry['name']] = {'tier': 'LOW', 'entry': entry}

# Target modules (matching directory names)
target_modules = ['object', 'system', 'entity', 'network', 'misc', 'team']
# 'combat/AI' doesn't exist as module; entity/ and team/ are closest for combat/AI

# Filter: global functions, named (not sub_), in target modules
results = {m: {'HIGH': [], 'MEDIUM': []} for m in target_modules}

for func in funcs:
    name = func.get('name', '')
    addr = func.get('address', '')
    
    # Must be named (not sub_)
    if not name or name.startswith('sub_') or name.startswith('nullsub'):
        continue
    
    # Must not be a member function
    if '::' in name:
        continue
    
    # Check if in priority matrix and get module
    if name not in pm_lookup:
        continue
    
    info = pm_lookup[name]
    module = info['entry'].get('module', 'N/A')
    
    if module in target_modules:
        tier = info['tier']
        if tier in ('HIGH', 'MEDIUM'):
            results[module][tier].append({
                'name': name,
                'addr': addr,
                'size': func.get('size', 0),
                'state': info['entry'].get('state', ''),
                'call': func.get('call', {})
            })

# Summary
print("=" * 70)
print("Named Global Functions by Module and Priority")
print("=" * 70)

total_high = 0
total_medium = 0

for mod in target_modules:
    h = len(results[mod]['HIGH'])
    m = len(results[mod]['MEDIUM'])
    total_high += h
    total_medium += m
    print(f"\n--- {mod}/: HIGH={h}, MEDIUM={m} ---")
    
    # Show HIGH first
    if h > 0:
        print(f"  HIGH ({h}):")
        for f in sorted(results[mod]['HIGH'], key=lambda x: x['size']):
            conv = f['call'].get('convention', '?')
            print(f"    {f['name']} @ {f['addr']} ({f['size']}B, {conv})")
    
    if m > 0 and m <= 50:
        print(f"  MEDIUM ({m}):")
        for f in sorted(results[mod]['MEDIUM'], key=lambda x: x['size']):
            conv = f['call'].get('convention', '?')
            print(f"    {f['name']} @ {f['addr']} ({f['size']}B, {conv})")

print(f"\n{'=' * 70}")
print(f"TOTAL: {total_high} HIGH + {total_medium} MEDIUM = {total_high + total_medium}")
print(f"{'=' * 70}")
