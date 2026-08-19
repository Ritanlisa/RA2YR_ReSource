"""Query functions.json for AbstractClass/ObjectClass/MissionClass entries."""
import json

data = json.load(open('injectFunctionTest/functions.json', encoding='utf-8'))
funcs = data['functions']

# Filter by class_name in call dict
abstract = [f for f in funcs if f.get('call', {}).get('class_name') == 'AbstractClass']
obj = [f for f in funcs if f.get('call', {}).get('class_name') == 'ObjectClass']
mission = [f for f in funcs if f.get('call', {}).get('class_name') == 'MissionClass']

print(f"AbstractClass: {len(abstract)} entries")
print(f"ObjectClass:   {len(obj)} entries")
print(f"MissionClass:  {len(mission)} entries")
print(f"Total:         {len(abstract) + len(obj) + len(mission)}")

# Count completed vs not
for label, lst in [("AbstractClass", abstract), ("ObjectClass", obj), ("MissionClass", mission)]:
    comp = sum(1 for f in lst if f.get('completed'))
    not_comp = len(lst) - comp
    stub = sum(1 for f in lst if f.get('hook', {}).get('mode') in ('Capture', 'Replace', 'Inject'))
    print(f"  {label}: completed={comp}, not_completed={not_comp}, hooked={stub}")

print()
print("=== AbstractClass sample (first 10) ===")
for f in abstract[:10]:
    addr = f.get('address', '?')
    name = f.get('name', '?')
    comp = f.get('completed')
    hook_mode = f.get('hook', {}).get('mode', '-')
    vtable = f.get('call', {}).get('vtable_index', '?')
    print(f"  [{addr}] vt{vtable} {name} completed={comp} hook={hook_mode}")

print()
print("=== ObjectClass sample (first 10) ===")
for f in obj[:10]:
    addr = f.get('address', '?')
    name = f.get('name', '?')
    comp = f.get('completed')
    hook_mode = f.get('hook', {}).get('mode', '-')
    vtable = f.get('call', {}).get('vtable_index', '?')
    print(f"  [{addr}] vt{vtable} {name} completed={comp} hook={hook_mode}")

print()
print("=== MissionClass sample (all) ===")
for f in mission[:20]:
    addr = f.get('address', '?')
    name = f.get('name', '?')
    comp = f.get('completed')
    hook_mode = f.get('hook', {}).get('mode', '-')
    vtable = f.get('call', {}).get('vtable_index', '?')
    print(f"  [{addr}] vt{vtable} {name} completed={comp} hook={hook_mode}")
