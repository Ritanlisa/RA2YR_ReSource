#!/usr/bin/env python3
"""Fix IDA rename targets to use valid IDA naming (no ~ for dtors)."""

import json, os

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

match_data = json.load(open(os.path.join(ROOT, 'tools', 'ida_match_results.json'), 'r'))
results = match_data['results']

# IDA naming rules:
# - ctor: ClassName::ClassName
# - dtor: ClassName::Release (or ClassName::Destructor, keep existing suffix)
# - regular method: ClassName::MethodName
# - global: VerbNounPhrase

renames = {}
dtor_count = 0
ctor_count = 0
method_count = 0
skip_count = 0

for key, v in results.items():
    if v['final_confidence'] != 'HIGH':
        continue

    class_name = v['class_name']
    method_name = v['method_name']
    ida_addr = v['final_ida_addr']

    cg = v['evidence'].get('callgraph', {}) or {}
    current_ida_name = cg.get('ida_name', '')

    # Determine target IDA name
    if method_name.startswith('~'):
        # Destructor: use ClassName::Release or ClassName::Destructor
        # Check what suffix the current name uses
        if 'Release' in current_ida_name or current_ida_name == 'Release':
            target_name = f'{class_name}::Release'
        elif 'Destructor' in current_ida_name or current_ida_name == 'Destructor':
            target_name = f'{class_name}::Destructor'
        else:
            target_name = f'{class_name}::Release'  # Default
        dtor_count += 1
    elif method_name == class_name:
        # Constructor: ClassName::ClassName
        target_name = f'{class_name}::{class_name}'
        ctor_count += 1
    else:
        # Regular method: ClassName::MethodName
        target_name = f'{class_name}::{method_name}'
        method_count += 1

    # Only add if different from current
    if current_ida_name != target_name:
        if ida_addr in renames:
            if renames[ida_addr] != target_name:
                print(f"CONFLICT at {ida_addr}: {renames[ida_addr]} vs {target_name}")
                # Keep first one
        else:
            renames[ida_addr] = {
                'addr': ida_addr,
                'old': current_ida_name,
                'new': target_name,
                'file': v['hpp_file']
            }
    else:
        skip_count += 1

print(f"Total HIGH entries: {sum(1 for k,v in results.items() if v['final_confidence']=='HIGH')}")
print(f"Constructors: {ctor_count}, Destructors: {dtor_count}, Methods: {method_count}")
print(f"Unique renames: {len(renames)}")
print(f"Already named correctly: {skip_count}")

# Save deduped rename list
rename_list = sorted(renames.values(), key=lambda x: x['addr'])
json.dump(rename_list, open(os.path.join(ROOT, 'tools', '_high_renames_final.json'), 'w'), indent=2)

# Show first 15
print("\n=== First 15 IDA Renames (corrected) ===")
for r in rename_list[:15]:
    print(f"  {r['addr']}: {r['old']} -> {r['new']}")

print(f"\nSaved {len(rename_list)} renames to tools/_high_renames_final.json")
