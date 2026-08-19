"""Get sizes for AbstractClass/ObjectClass/MissionClass functions."""
import json

data = json.load(open('injectFunctionTest/functions.json', encoding='utf-8'))
funcs = data['functions']

for label, class_name in [("AbstractClass", "AbstractClass"), ("ObjectClass", "ObjectClass"), ("MissionClass", "MissionClass")]:
    entries = [f for f in funcs if f.get('call', {}).get('class_name') == class_name]
    # Sort by size
    entries.sort(key=lambda f: f.get('size', 0))
    
    # Size distribution
    tiny = [f for f in entries if f.get('size', 0) <= 10]
    small = [f for f in entries if 10 < f.get('size', 0) <= 50]
    medium = [f for f in entries if 50 < f.get('size', 0) <= 200]
    large = [f for f in entries if 200 < f.get('size', 0) <= 500]
    huge = [f for f in entries if f.get('size', 0) > 500]
    no_size = [f for f in entries if not f.get('size')]
    
    print(f"\n=== {label} ({len(entries)} entries) ===")
    print(f"  Tiny (<=10B):    {len(tiny)}")
    print(f"  Small (11-50B):  {len(small)}")
    print(f"  Medium (51-200B):{len(medium)}")
    print(f"  Large (201-500B):{len(large)}")
    print(f"  Huge (>500B):    {len(huge)}")
    print(f"  No size:         {len(no_size)}")
    
    # Show tiny function names
    if tiny:
        print(f"  Tiny functions (<=10B):")
        for f in tiny[:10]:
            print(f"    [{f['address']}] size={f.get('size')} {f.get('name')}")

# Also get list of already-completed ones with their names
print("\n=== Already completed ObjectClass ===")
for f in entries if 'entries' in dir() else []:
    pass

obj_entries = [f for f in funcs if f.get('call', {}).get('class_name') == 'ObjectClass']
completed = [f for f in obj_entries if f.get('completed')]
for f in completed:
    print(f"  [{f['address']}] vt={f.get('call',{}).get('vtable_index','?')} {f.get('name')}")

# Get all completed functions across all classes
all_completed = [f for f in funcs if f.get('completed')]
print(f"\nTotal completed functions in functions.json: {len(all_completed)}")
