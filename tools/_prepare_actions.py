#!/usr/bin/env python3
"""Prepare action lists from ida_match_results.json for T6 application."""

import json
import os

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

match_data = json.load(open(os.path.join(ROOT, 'tools', 'ida_match_results.json'), 'r', encoding='utf-8'))
func_data = json.load(open(os.path.join(ROOT, 'injectFunctionTest', 'functions.json'), 'r', encoding='utf-8'))
funcs = func_data['functions']

# Build address->entry index from functions.json
func_by_addr = {}
for f in funcs:
    func_by_addr[f['address']] = f

high_renames = []  # (old_name, new_name, addr) for IDA
high_hpp = []      # (hpp_file, hpp_line, ida_addr) for hpp
high_funcjson = [] # (address, updates) for functions.json
high_skipped_same = 0
high_already_ok = 0
high_not_in_funcjson = 0

results = match_data['results']

for key, v in results.items():
    if v['final_confidence'] != 'HIGH':
        continue

    class_name = v['class_name']
    method_name = v['method_name']
    ida_addr = v['final_ida_addr']

    # Determine target IDA name
    if method_name.startswith('~'):
        target_name = f'{class_name}::{method_name}'
    elif method_name == class_name:
        target_name = f'{class_name}::{class_name}'
    else:
        target_name = f'{class_name}::{method_name}'

    # Get current IDA name from callgraph evidence
    cg = v['evidence'].get('callgraph', {}) or {}
    current_name = cg.get('ida_name', '')

    # Check if rename needed
    if current_name and current_name != target_name:
        high_renames.append({
            'addr': ida_addr,
            'old': current_name,
            'new': target_name,
            'file': v['hpp_file']
        })
    elif current_name == target_name:
        high_skipped_same += 1

    # Check functions.json
    fentry = func_by_addr.get(ida_addr)
    if fentry:
        name_changed = fentry['name'] != target_name
        method_changed = fentry['call'].get('method_name', '') != method_name
        if not fentry['hook'].get('translated') or name_changed or method_changed:
            high_funcjson.append({
                'address': ida_addr,
                'old_name': fentry['name'],
                'new_name': target_name,
                'old_method': fentry['call'].get('method_name', ''),
                'new_method': method_name,
                'old_class': fentry['call'].get('class_name', ''),
                'new_class': class_name if class_name != fentry['call'].get('class_name', '') else '',
                'was_translated': fentry['hook'].get('translated', False),
                'name_changed': name_changed,
                'method_changed': method_changed
            })
        else:
            high_already_ok += 1
    else:
        high_not_in_funcjson += 1

    # hpp annotation
    high_hpp.append({
        'file': v['hpp_file'],
        'line': v['hpp_line'],
        'addr': ida_addr,
        'signature': v.get('full_signature', ''),
        'annotation': f'// {ida_addr}'
    })

print('=== HIGH MATCHES (152 total) ===')
print(f'IDA renames needed: {len(high_renames)}')
print(f'Already correct name: {high_skipped_same}')
print(f'hpp annotations to add: {len(high_hpp)}')
print(f'functions.json updates: {len(high_funcjson)}')
print(f'Already translated+congruent: {high_already_ok}')
print(f'Not in functions.json: {high_not_in_funcjson}')

# Save action lists
json.dump(high_renames, open(os.path.join(ROOT, 'tools', '_high_renames.json'), 'w'), indent=2)
json.dump(high_hpp, open(os.path.join(ROOT, 'tools', '_high_hpp_annotations.json'), 'w'), indent=2)
json.dump(high_funcjson, open(os.path.join(ROOT, 'tools', '_high_funcjson_updates.json'), 'w'), indent=2)

# Show first 10 renames
print('\n=== First 10 IDA Renames ===')
for r in high_renames[:10]:
    print(f"  {r['addr']}: {r['old']} -> {r['new']}")

print('\n=== functions.json name-sync updates (first 5) ===')
for u in high_funcjson[:5]:
    changes = []
    if u['name_changed']:
        changes.append(f"name: {u['old_name']} -> {u['new_name']}")
    if u['method_changed']:
        changes.append(f"method: {u['old_method']} -> {u['new_method']}")
    if not u['was_translated']:
        changes.append("translated: false -> true")
    print(f"  {u['address']}: {', '.join(changes)}")

# Now process UNMATCHABLE for hpp
unmatchable_hpp = []
for key, v in results.items():
    if v['final_confidence'] != 'UNMATCHABLE':
        continue
    reasons = v.get('unmatchable_reasons', [])
    reason_str = ', '.join(reasons[:3])  # Top 3 reasons
    unmatchable_hpp.append({
        'file': v['hpp_file'],
        'line': v['hpp_line'],
        'signature': v.get('full_signature', ''),
        'annotation': f'// IDA: UNMATCHED \u2014 {reason_str}'
    })

json.dump(unmatchable_hpp, open(os.path.join(ROOT, 'tools', '_unmatchable_hpp_annotations.json'), 'w'), indent=2)
print(f'\n=== UNMATCHABLE hpp annotations: {len(unmatchable_hpp)} ===')
# Count unique files
um_files = set(u['file'] for u in unmatchable_hpp)
print(f'Unique files: {len(um_files)}')

# Process MEDIUM for review list
medium_review = []
for key, v in results.items():
    if v['final_confidence'] != 'MEDIUM':
        continue
    cg = v['evidence'].get('callgraph', {}) or {}
    medium_review.append({
        'key': key,
        'hpp_file': v['hpp_file'],
        'hpp_line': v['hpp_line'],
        'class_name': v['class_name'],
        'method_name': v['method_name'],
        'ida_addr': v['final_ida_addr'],
        'ida_name': cg.get('ida_name', ''),
        'match_details': cg.get('match_details', ''),
        'match_type': cg.get('match_type', ''),
    })

json.dump(medium_review, open(os.path.join(ROOT, 'tools', 'needs_review.json'), 'w'), indent=2)
print(f'\n=== MEDIUM review list: {len(medium_review)} entries -> tools/needs_review.json ===')

print('\nDone. All action lists generated.')
