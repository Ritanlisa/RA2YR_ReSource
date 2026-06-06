#!/usr/bin/env python3
"""Add REVERSE(false, ...) markers to all completed functions in source files.
Reads functions.json for completed=true + re_file info.
Inserts REVERSE line before each function definition.
"""
import json, os, re

ROOT = r"D:\RA2YR_ReSource"

with open(os.path.join(ROOT, "injectFunctionTest", "functions.json")) as f:
    data = json.load(f)

completed = []
for fn in data['functions']:
    if fn['hook'].get('completed') and fn['hook'].get('re_file'):
        addr = fn['address']
        name = fn['name']
        fpath = os.path.join(ROOT, fn['hook']['re_file'])
        if os.path.exists(fpath):
            completed.append((addr, name, fpath))

print(f"Found {len(completed)} completed functions with source files")

# Group by file
from collections import defaultdict
by_file = defaultdict(list)
for addr, name, fpath in completed:
    by_file[fpath].append((addr, name))

added = 0
for fpath, items in by_file.items():
    with open(fpath, 'r', errors='ignore') as f:
        content = f.read()
    
    # Find function definitions matching our names
    for addr, name in items:
        # Search for the function definition line
        # Pattern: return_type function_name(
        simple_name = name.split('::')[-1] if '::' in name else name
        fn_def = re.compile(
            rf'(?:\b\w+\s+)+{re.escape(simple_name)}\s*\(',
            re.MULTILINE)
        m = fn_def.search(content)
        if not m:
            # Try full name
            full_name = name.replace('::', r'::')
            fn_def2 = re.compile(
                rf'(?:\b\w+[\s*&]+)+{re.escape(full_name)}\s*\(',
                re.MULTILINE)
            m = fn_def2.search(content)
        if not m:
            print(f"  SKIP {addr} {name} — not found in {fpath}")
            continue
        
        # Check if already has REVERSE marker
        line_start = content.rfind('\n', 0, m.start()) + 1
        prev_line = content[line_start:m.start()]
        if 'REVERSE(' in prev_line:
            print(f"  SKIP {addr} {name} — already has REVERSE")
            continue
        
        # Get the comment/annotation line before the function
        # Insert REVERSE before the function
        insert_pos = m.start()
        # Find start of the declaration line
        decl_start = content.rfind('\n', 0, insert_pos) + 1
        
        # Check if first 5 bytes are safe from JSON
        fn_info = next((x for x in data['functions'] if x['address'] == addr), None)
        min_safe = fn_info.get('hook', {}).get('min_safe_size', 5) if fn_info else 5
        
        comment = f'{name}: IDA verified'
        marker = f'REVERSE({addr}, "{comment}", false) // auto-marked completed\n'
        
        # Insert before the function
        content = content[:decl_start] + marker + content[decl_start:]
        added += 1
        print(f"  ADD {addr} {name} @ {os.path.basename(fpath)}")
    
    # Write back
    with open(fpath, 'w', newline='\n') as f:
        f.write(content)

print(f"\nAdded {added} REVERSE markers to {len(by_file)} files")
print("All markers are false (disabled). Flip to true to enable hooks.")
