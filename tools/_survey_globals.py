import json

with open('injectFunctionTest/functions.json', 'r') as f:
    raw = json.load(f)

funcs = raw['functions']

def is_named(f):
    n = f.get('name', '')
    return n and not n.startswith('sub_') and not n.startswith('nullsub_')

def is_global(f):
    call = f.get('call', {})
    if 'is_member' in call:
        return not call['is_member']
    name = f.get('name', '')
    return '::' not in name

menu_named = [f for f in funcs if f.get('category') == 'menu' and is_named(f)]
menu_globals = [f for f in menu_named if is_global(f)]
menu_members = [f for f in menu_named if not is_global(f)]

render_named = [f for f in funcs if f.get('category') == 'rendering' and is_named(f)]
render_globals = [f for f in render_named if is_global(f)]
render_members = [f for f in render_named if not is_global(f)]

print("MENU named total:", len(menu_named))
print("  Global (non-member):", len(menu_globals))
print("  Members:", len(menu_members))
print()
print("RENDERING named total:", len(render_named))
print("  Global (non-member):", len(render_globals))
print("  Members:", len(render_members))

print()
print("--- ALL MENU GLOBALS ---")
for f in menu_globals:
    addr = f["address"]
    name = f["name"]
    size = f["size"]
    print(f"  {addr}: {name} (size={size})")

print()
print("--- ALL RENDERING GLOBALS ---")
for f in render_globals:
    addr = f["address"]
    name = f["name"]
    size = f["size"]
    print(f"  {addr}: {name} (size={size})")
