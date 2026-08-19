"""Find existing stubs for HIGH-tier target functions in src/."""
import json, os, re

with open('tools/priority_matrix.json', 'r', encoding='utf-8') as f:
    pm = json.load(f)

targets = ['object', 'system', 'entity', 'network', 'misc', 'team']
high_funcs = [e for e in pm['high'] if e['module'] in targets]

# For each HIGH function, search in src/ for its stub
# A stub typically looks like: int FuncName() { return 0; }
src_dir = 'src'

found = []
for func in high_funcs:
    name = func['name']
    addr = func['addr']
    mod = func['module']
    size = func['size']
    
    # Search for the function name in source files
    for root, dirs, files in os.walk(src_dir):
        for fname in files:
            if not fname.endswith(('.cpp', '.hpp')):
                continue
            fpath = os.path.join(root, fname)
            try:
                with open(fpath, 'r', encoding='utf-8', errors='replace') as f:
                    content = f.read()
                if name in content:
                    found.append((name, fpath, mod, size, addr))
                    break
            except:
                pass

print(f"Found {len(found)}/{len(high_funcs)} HIGH functions in src/")
print()

# Group by module
by_mod = {}
for name, path, mod, size, addr in found:
    if mod not in by_mod:
        by_mod[mod] = []
    by_mod[mod].append((name, path, size, addr))

for mod in targets:
    items = by_mod.get(mod, [])
    print(f"--- {mod}/ ({len(items)}/{sum(1 for e in high_funcs if e['module']==mod)}) ---")
    for name, path, size, addr in sorted(items):
        rel = os.path.relpath(path)
        print(f"  {name} ({size}B) -> {rel}")

# Also show missing ones
print("\n=== MISSING (no stub found) ===")
for func in high_funcs:
    if not any(f[0] == func['name'] for f in found):
        print(f"  {func['name']} ({func['size']}B) @ {func['addr']} [{func['module']}]")
