"""Generate comprehensive list of AbstractClass functions for batch processing."""
import json

data = json.load(open('injectFunctionTest/functions.json', encoding='utf-8'))
funcs = data['functions']

for label, class_name in [("AbstractClass", "AbstractClass"), ("ObjectClass", "ObjectClass"), ("MissionClass", "MissionClass")]:
    entries = [f for f in funcs if f.get('call', {}).get('class_name') == class_name]
    entries.sort(key=lambda f: f.get('size', 0))
    
    print(f"\n=== {label}: {len(entries)} total ===")
    
    # Group by size category
    tiny = [(f['address'], f['name'], f.get('size', 0)) for f in entries if f.get('size', 0) <= 10]
    small = [(f['address'], f['name'], f.get('size', 0)) for f in entries if 10 < f.get('size', 0) <= 50]
    medium = [(f['address'], f['name'], f.get('size', 0)) for f in entries if 50 < f.get('size', 0) <= 200]
    large = [(f['address'], f['name'], f.get('size', 0)) for f in entries if 200 < f.get('size', 0) <= 500]
    huge = [(f['address'], f['name'], f.get('size', 0)) for f in entries if f.get('size', 0) > 500]
    
    if tiny:
        print(f"\n  TINY (<=10B): {len(tiny)}")
        for addr, name, sz in tiny:
            print(f"    {addr} ({sz}B) {name}")
    
    if small:
        print(f"\n  SMALL (11-50B): {len(small)}")
        for addr, name, sz in small:
            print(f"    {addr} ({sz}B) {name}")
    
    if medium:
        print(f"\n  MEDIUM (51-200B): {len(medium)}")
        for addr, name, sz in medium:
            print(f"    {addr} ({sz}B) {name}")
    
    if large:
        print(f"\n  LARGE (201-500B): {len(large)}")
        for addr, name, sz in large:
            print(f"    {addr} ({sz}B) {name}")
    
    if huge:
        print(f"\n  HUGE (>500B): {len(huge)}")
        for addr, name, sz in huge:
            print(f"    {addr} ({sz}B) {name}")

# Also dump just the addresses for IDA batch decompilation
print("\n\n=== ABSTRACT CLASS ADDRESSES FOR IDA ===")
abstract = [f for f in funcs if f.get('call', {}).get('class_name') == 'AbstractClass']
print(" ".join([f['address'] for f in abstract]))
