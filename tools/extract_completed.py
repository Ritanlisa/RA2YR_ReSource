"""Extract completed=true functions from functions.json and map to cpp definitions."""
import json
import re
import os
import glob

# Load functions.json
with open('injectFunctionTest/functions.json', 'r') as f:
    data = json.load(f)

funcs_list = data['functions']

# Filter completed=true
completed = {}
for entry in funcs_list:
    if entry.get('hook', {}).get('completed', False):
        name = entry['name']
        addr = entry['address']
        completed[name] = {
            'addr': addr,
            'name': name,
        }

print(f"Completed functions in functions.json: {len(completed)}")

# Extract just the function base name (last part after ::)
def get_base_name(full_name):
    """Get the method name (last :: segment)"""
    return full_name.split('::')[-1]

# Build lookup: base method name → list of (full_name, addr)
method_map = {}
for name, info in completed.items():
    base = get_base_name(name)
    if base not in method_map:
        method_map[base] = []
    method_map[base].append((name, info['addr']))

# Scan cpp files for definitions
cpp_files = glob.glob('src/**/*.cpp', recursive=True)
# Filter out _generated/ and subs*
cpp_files = [f for f in cpp_files if '_generated' not in f and 'subs' not in os.path.basename(f)]

print(f"CPP files to scan: {len(cpp_files)}")

# Scan each cpp file for function definitions
results = {}  # full_name -> (file, line, existing_annotation)

for cpp_file in sorted(cpp_files):
    with open(cpp_file, 'r', encoding='utf-8', errors='replace') as f:
        lines = f.readlines()
    
    for i, line in enumerate(lines):
        # Look for function definition pattern: ClassName::Method(
        # Must be at start of line (after whitespace) and not in comment
        stripped = line.strip()
        if stripped.startswith('//') or stripped.startswith('/*'):
            continue
        
        # Match: return_type ClassName::Method(params) or ClassName::Method(params)
        m = re.match(r'^(?:\w+(?:<[^>]*>)?\s+)?(\w+)::(\w+)\s*\(', stripped)
        if m:
            class_name = m.group(1)
            method_name = m.group(2)
            full_name = f"{class_name}::{method_name}"
            
            # Check if previous line has // 0xADDR annotation
            existing_addr = None
            if i > 0:
                prev = lines[i-1].strip()
                addr_match = re.match(r'^//\s*(0x[0-9A-Fa-f]{5,8})', prev)
                if addr_match:
                    existing_addr = addr_match.group(1)
            
            # Key: just method name for lookup
            # We also try full name and class+method
            results[full_name] = {
                'file': cpp_file,
                'line': i + 1,  # 1-indexed
                'existing_addr': existing_addr,
            }

# Cross-reference with completed functions
matched = 0
unmatched = []
to_annotate = []

for name, info in completed.items():
    if name in results:
        r = results[name]
        if r['existing_addr'] is None:
            to_annotate.append({
                'name': name,
                'addr': info['addr'],
                'file': r['file'],
                'line': r['line'],
                'action': 'add',
            })
        elif r['existing_addr'].upper() != info['addr'].upper().replace('0X', '0x'):
            to_annotate.append({
                'name': name,
                'addr': info['addr'],
                'file': r['file'],
                'line': r['line'],
                'existing': r['existing_addr'],
                'action': 'fix',
            })
        else:
            # Already correct
            pass
        matched += 1
    else:
        unmatched.append(f"{name} (addr={info['addr']})")

print(f"\nMatched in cpp files: {matched}/{len(completed)}")
print(f"To annotate (add): {len([x for x in to_annotate if x['action']=='add'])}")
print(f"To annotate (fix): {len([x for x in to_annotate if x['action']=='fix'])}")
print(f"Unmatched: {len(unmatched)}")

# Write matched to json for the annotator script
with open('.omo/completed_cpp_map.json', 'w') as f:
    json.dump({
        'total_completed': len(completed),
        'matched': matched,
        'to_annotate': to_annotate,
        'unmatched': unmatched,
    }, f, indent=2)

print("\nUnmatched functions (first 30):")
for u in unmatched[:30]:
    print(f"  {u}")

# Also write unmatched list
with open('.omo/completed_unmatched.txt', 'w') as f:
    for u in unmatched:
        f.write(u + '\n')
