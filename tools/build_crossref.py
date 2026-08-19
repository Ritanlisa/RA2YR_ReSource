"""Build cross-reference: hpp function name -> functions.json entry (with history evidence)"""
import json, re
from pathlib import Path

ROOT = Path(__file__).parent.parent

# Load data
with open(ROOT / 'tools' / 'git_name_history.json', 'r', encoding='utf-8') as f:
    history = json.load(f)
with open(ROOT / 'injectFunctionTest' / 'functions.json', 'r', encoding='utf-8') as f:
    funcs_data = json.load(f)

old_to_new = history['old_to_new']
new_to_old = history['new_to_old']
funcs = funcs_data['functions']

# Build address-indexed lookup for functions.json
addr_to_func = {}
name_to_func = {}
for func in funcs:
    addr_to_func[func['address']] = func
    name = func.get('name', '')
    if name:
        name_to_func[name] = func

# Scan hpp files for function declarations
hpp_dir = ROOT / 'src'
matches = []

for hpp_file in sorted(hpp_dir.rglob('*.hpp')):
    try:
        content = hpp_file.read_text(encoding='utf-8', errors='ignore')
        rel_path = hpp_file.relative_to(ROOT)
        
        # Find ClassName::MethodName declarations
        for match in re.finditer(r'(\w+::\w+)\s*\(', content):
            func_name = match.group(1)
            
            # Check direct match in functions.json
            if func_name in name_to_func:
                f = name_to_func[func_name]
                matches.append({
                    'hpp_name': func_name,
                    'file': str(rel_path),
                    'address': f['address'],
                    'size': f.get('size', 0),
                    'match_type': 'direct',
                    'old_names': new_to_old.get(func_name, []),
                })
                continue
            
            # Check if this name appears as old_name in history -> resolved to new_name -> in functions.json
            if func_name in old_to_new:
                new_name = old_to_new[func_name]
                if new_name in name_to_func:
                    f = name_to_func[new_name]
                    matches.append({
                        'hpp_name': func_name,
                        'file': str(rel_path),
                        'address': f['address'],
                        'size': f.get('size', 0),
                        'match_type': 'via_history',
                        'resolved_to': new_name,
                        'old_names': new_to_old.get(new_name, []),
                    })
    except:
        pass

print(f'Total hpp->functions.json matches: {len(matches)}')
print(f'  Direct: {sum(1 for m in matches if m["match_type"] == "direct")}')
print(f'  Via history: {sum(1 for m in matches if m["match_type"] == "via_history")}')

# Also find 'orphan' hpp names: names in hpp that don't match functions.json at all
hpp_names = set(m['hpp_name'] for m in matches)
partial_matches = []

# For sub_* names in hpp, try to find functions.json entries by address
for hpp_file in sorted(hpp_dir.rglob('*.hpp')):
    try:
        content = hpp_file.read_text(encoding='utf-8', errors='ignore')
        rel_path = hpp_file.relative_to(ROOT)
        
        for match in re.finditer(r'::sub_([0-9A-Fa-f]+)\s*\(', content):
            sub_addr = match.group(1).upper()
            full_addr = f'0x{sub_addr}'
            
            if full_addr in addr_to_func:
                f = addr_to_func[full_addr]
                hpp_name = match.group(0).rstrip('(').strip()
                partial_matches.append({
                    'hpp_name': hpp_name,
                    'file': str(rel_path),
                    'address': full_addr,
                    'json_name': f.get('name', ''),
                    'size': f.get('size', 0),
                    'match_type': 'address',
                })
    except:
        pass

print(f'\nAddress-based sub_* matches: {len(partial_matches)}')

# Save combined results
output = {
    'description': 'Cross-reference: hpp function names -> functions.json entries',
    'total_direct_matches': sum(1 for m in matches if m['match_type'] == 'direct'),
    'total_history_matches': sum(1 for m in matches if m['match_type'] == 'via_history'),
    'total_address_matches': len(partial_matches),
    'matches': matches[:500],  # Top 500
    'address_matches': partial_matches[:500],
    'sample_direct': [m for m in matches if m['match_type'] == 'direct'][:20],
    'sample_history': [m for m in matches if m['match_type'] == 'via_history'][:20],
}

out_path = ROOT / 'tools' / 'hpp_to_functions_crossref.json'
with open(out_path, 'w', encoding='utf-8') as f:
    json.dump(output, f, indent=2, ensure_ascii=False)

print(f'\nSaved to {out_path}')

# Show samples
print('\n=== Direct matches (sample) ===')
for m in matches[:15]:
    if m['match_type'] == 'direct':
        print(f"  {m['hpp_name']} @ {m['address']} ({m['file']})")

print('\n=== History matches (sample) ===')
for m in matches:
    if m['match_type'] == 'via_history':
        print(f"  {m['hpp_name']} -> {m.get('resolved_to', '?')} @ {m['address']}")
        if len([x for x in matches if x['match_type'] == 'via_history']) > 15:
            break
