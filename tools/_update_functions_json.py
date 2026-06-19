#!/usr/bin/env python3
"""Update functions.json based on HIGH matches from ida_match_results.json."""

import json, os, copy

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# Load match data and functions.json
match_data = json.load(open(os.path.join(ROOT, 'tools', 'ida_match_results.json'), 'r', encoding='utf-8'))
func_data = json.load(open(os.path.join(ROOT, 'injectFunctionTest', 'functions.json'), 'r', encoding='utf-8'))
funcs = func_data['functions']

# Build address index
func_by_addr = {f['address']: f for f in funcs}

updates_applied = 0
updates_skipped = 0

for key, v in match_data['results'].items():
    if v['final_confidence'] != 'HIGH':
        continue

    class_name = v['class_name']
    method_name = v['method_name']
    ida_addr = v['final_ida_addr']

    # Target IDA name
    if method_name.startswith('~'):
        target_name = f'{class_name}::Release'
    elif method_name == class_name:
        target_name = f'{class_name}::{class_name}'
    else:
        target_name = f'{class_name}::{method_name}'

    fentry = func_by_addr.get(ida_addr)
    if not fentry:
        updates_skipped += 1
        continue

    changed = False

    # Update translated flag
    if not fentry['hook'].get('translated'):
        fentry['hook']['translated'] = True
        changed = True

    # Update name
    if fentry['name'] != target_name:
        fentry['name'] = target_name
        changed = True

    # Update call.method_name
    if fentry.get('call') and fentry['call'].get('method_name') != method_name:
        fentry['call']['method_name'] = method_name
        changed = True

    # Update call.class_name
    if fentry.get('call') and fentry['call'].get('class_name') != class_name:
        fentry['call']['class_name'] = class_name
        changed = True

    if changed:
        updates_applied += 1

# Write back
func_data['functions'] = funcs
func_data['metadata']['last_updated'] = 'T6-HIGH-apply-20260619'

with open(os.path.join(ROOT, 'injectFunctionTest', 'functions.json'), 'w', encoding='utf-8', newline='\n') as f:
    json.dump(func_data, f, indent=2, ensure_ascii=False)
    f.write('\n')

print(f"Functions.json updated:")
print(f"  Entries updated: {updates_applied}")
print(f"  Skipped (not in functions.json): {updates_skipped}")
print(f"  Total functions: {len(funcs)}")
