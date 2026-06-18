import json

with open('injectFunctionTest/functions.json', 'r') as f:
    raw = json.load(f)

funcs = raw['functions']

with open('tools/priority_matrix.json', 'r', encoding='utf-8') as f:
    pm = json.load(f)

# Build lookup from name to priority entry
high_names = set()
medium_names = set()
for entry in pm['high']:
    high_names.add(entry['name'])
for entry in pm['medium']:
    medium_names.add(entry['name'])

def is_named(f):
    n = f.get('name', '')
    return n and not n.startswith('sub_') and not n.startswith('nullsub_')

def is_truly_global(f):
    """True global: no ::, not CRT, size > 10"""
    name = f.get('name', '')
    if '::' in name:
        return False
    # Exclude CRT imports
    crt_prefixes = ['__', '_', 'Interlocked', 'DirectDraw', 'Bink', 'ImageList', 'LockResource', 'RedrawWindow']
    for p in crt_prefixes:
        if name.startswith(p):
            return False
    # Exclude tiny wrappers
    if f.get('size', 0) <= 10:
        return False
    return True

# Filter menu globals
menu_named = [f for f in funcs if f.get('category') == 'menu' and is_named(f)]
menu_truly_global = [f for f in menu_named if is_truly_global(f)]

render_named = [f for f in funcs if f.get('category') == 'rendering' and is_named(f)]
render_truly_global = [f for f in render_named if is_truly_global(f)]

# Cross with priority
menu_high = [f for f in menu_truly_global if f['name'] in high_names]
menu_medium = [f for f in menu_truly_global if f['name'] in medium_names]
menu_other = [f for f in menu_truly_global if f['name'] not in high_names and f['name'] not in medium_names]

render_high = [f for f in render_truly_global if f['name'] in high_names]
render_medium = [f for f in render_truly_global if f['name'] in medium_names]
render_other = [f for f in render_truly_global if f['name'] not in high_names and f['name'] not in medium_names]

print("=== MENU TRULY GLOBAL ===")
print(f"Total: {len(menu_truly_global)}")
print(f"  HIGH (stub_exists): {len(menu_high)}")
print(f"  MEDIUM (named_no_impl): {len(menu_medium)}")
print(f"  Other: {len(menu_other)}")

print("\n=== RENDERING TRULY GLOBAL ===")
print(f"Total: {len(render_truly_global)}")
print(f"  HIGH (stub_exists): {len(render_high)}")
print(f"  MEDIUM (named_no_impl): {len(render_medium)}")
print(f"  Other: {len(render_other)}")

print("\n--- MENU HIGH ---")
for f in menu_high:
    print(f"  {f['name']} ({f['address']}, {f['size']}B)")

print("\n--- MENU MEDIUM ---")
for f in menu_medium:
    print(f"  {f['name']} ({f['address']}, {f['size']}B)")

print("\n--- RENDERING HIGH ---")
for f in render_high:
    print(f"  {f['name']} ({f['address']}, {f['size']}B)")

print("\n--- RENDERING MEDIUM ---")
for f in render_medium:
    print(f"  {f['name']} ({f['address']}, {f['size']}B)")
