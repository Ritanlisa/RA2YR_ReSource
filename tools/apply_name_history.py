"""Apply git name history to functions.json - resolve stale names"""
import json, re
from pathlib import Path

ROOT = Path(__file__).parent.parent

# Load name history
with open(ROOT / 'tools' / 'git_name_history.json', 'r', encoding='utf-8') as f:
    history = json.load(f)

old_to_new = history['old_to_new']
new_to_old = history['new_to_old']

print(f'Loaded {len(old_to_new)} name history entries')

# Load functions.json
with open(ROOT / 'injectFunctionTest' / 'functions.json', 'r', encoding='utf-8') as f:
    funcs_data = json.load(f)

funcs = funcs_data['functions']
print(f'Loaded {len(funcs)} functions from functions.json')

# 1. Resolve stale names: sub_* names that have a known new name
resolved = []
for func in funcs:
    name = func.get('name', '')
    if 'sub_' in name or name.startswith('AudioSample::sub_') or name.endswith('::sub_'):
        if name in old_to_new:
            resolved.append({
                'address': func['address'],
                'old_name': name,
                'new_name': old_to_new[name],
                'size': func.get('size', 0),
            })

print(f'\n=== Resolved stale names: {len(resolved)} ===')
for r in resolved[:30]:
    print(f"  {r['address']}: {r['old_name']} -> {r['new_name']}")

# 2. Reverse lookup: for functions with meaningful names, find what old names they had
# This helps find hpp implementations that match old IDA names
reverse_matches = []
for func in funcs:
    name = func.get('name', '')
    if 'sub_' not in name and name in new_to_old:
        reverse_matches.append({
            'address': func['address'],
            'current_name': name,
            'old_names': new_to_old[name],
            'size': func.get('size', 0),
        })

print(f'\n=== Reverse matches (current name has old aliases): {len(reverse_matches)} ===')
for rm in reverse_matches[:20]:
    print(f"  {rm['address']}: {rm['current_name']} <- {rm['old_names'][:3]}")

# 3. Find functions.json names that are sub_* but NOT in history
unresolved_sub = []
for func in funcs:
    name = func.get('name', '')
    if 'sub_' in name and name not in old_to_new:
        unresolved_sub.append({
            'address': func['address'],
            'name': name,
            'size': func.get('size', 0),
        })

print(f'\n=== Unresolved sub_* (not in git history): {len(unresolved_sub)} ===')

# 4. Build lookup table for hpp files
# Check if there are .hpp files with matching function names
hpp_dir = ROOT / 'src'
hpp_functions = set()
if hpp_dir.exists():
    for hpp_file in hpp_dir.rglob('*.hpp'):
        try:
            content = hpp_file.read_text(encoding='utf-8', errors='ignore')
            # Extract function declarations: ClassName::methodName or returnType functionName
            for match in re.finditer(r'(?:static\s+)?(?:\w+(?:::[\w:~<>*& ]+)?\s+)?(\w+::\w+)\s*\(', content):
                hpp_functions.add(match.group(1))
            # Also match standalone function names (PascalCase)
            for match in re.finditer(r'(?:extern\s+)?(?:\w+\s+)?(\w+)\s*\([^)]*\)\s*;', content):
                name = match.group(1)
                if name[0].isupper() and '_' not in name and len(name) > 5:
                    hpp_functions.add(name)
        except:
            pass

print(f'\n=== Found {len(hpp_functions)} function names in .hpp files ===')

# 5. Cross-reference: which hpp names match old IDA names?
hpp_to_ida = {}
for hpp_name in hpp_functions:
    # Check if hpp_name appears as a new_name in the history
    if hpp_name in new_to_old:
        hpp_to_ida[hpp_name] = new_to_old[hpp_name]
    # Also check if hpp_name appears as an old_name
    elif hpp_name in old_to_new:
        hpp_to_ida[hpp_name] = [hpp_name]

print(f'\n=== HPP names with IDA history: {len(hpp_to_ida)} ===')
for hpp_name, old_names in list(hpp_to_ida.items())[:30]:
    print(f"  {hpp_name} <- {old_names[:3]}")

# Save results
results = {
    'resolved_stale': resolved,
    'reverse_matches': reverse_matches,
    'unresolved_sub_count': len(unresolved_sub),
    'hpp_to_ida_count': len(hpp_to_ida),
    'hpp_to_ida': {k: v for k, v in list(hpp_to_ida.items())[:500]},  # Top 500
}

out_path = ROOT / 'tools' / 'name_history_applied.json'
with open(out_path, 'w', encoding='utf-8') as f:
    json.dump(results, f, indent=2, ensure_ascii=False)

print(f'\nResults saved to {out_path}')
print(f'  Resolved stale: {len(resolved)}')
print(f'  Reverse matches: {len(reverse_matches)}')
print(f'  Unresolved sub_: {len(unresolved_sub)}')
print(f'  HPP-to-IDA matches: {len(hpp_to_ida)}')
