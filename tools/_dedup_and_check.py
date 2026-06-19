#!/usr/bin/env python3
"""Deduplicate renames and check functions.json coverage."""
import json, os

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

renames = json.load(open(os.path.join(ROOT, 'tools', '_high_renames.json'), 'r'))
deduped = {}
conflicts = []
for r in renames:
    a = r['addr']
    if a in deduped:
        if deduped[a] != r['new']:
            conflicts.append(f"{a}: {deduped[a]} vs {r['new']}")
    else:
        deduped[a] = {
            'addr': a,
            'old': r['old'],
            'new': r['new'],
            'file': r['file']
        }
print(f"Total entries: {len(renames)}")
print(f"Unique addresses: {len(deduped)}")
print(f"Conflicts: {len(conflicts)}")
for c in conflicts[:10]:
    print(f"  {c}")

# Save deduped
dedup_list = list(deduped.values())
json.dump(dedup_list, open(os.path.join(ROOT, 'tools', '_high_renames_dedup.json'), 'w'), indent=2)

# Check functions.json coverage
func_data = json.load(open(os.path.join(ROOT, 'injectFunctionTest', 'functions.json'), 'r'))
func_addrs = set(f['address'] for f in func_data['functions'])

match_data = json.load(open(os.path.join(ROOT, 'tools', 'ida_match_results.json'), 'r'))
high_results = {k: v for k, v in match_data['results'].items() if v['final_confidence'] == 'HIGH'}
high_addrs = set(v['final_ida_addr'] for v in high_results.values())

missing = high_addrs - func_addrs
found = high_addrs & func_addrs
print(f"\nHIGH addresses in functions.json: {len(found)}")
print(f"HIGH addresses NOT in functions.json: {len(missing)}")

# Sample missing
for ma in sorted(missing)[:5]:
    print(f"  Missing: {ma}")
    # Check what's near it
    nearby = [f for f in func_data['functions'] if f['address'][:6] == ma[:6]]
    if nearby:
        print(f"    Nearby in functions.json: {nearby[0]['address']} -> {nearby[0]['name']}")
    else:
        print(f"    No nearby match")

# Also check hpp annotation dedup
hpp_anns = json.load(open(os.path.join(ROOT, 'tools', '_high_hpp_annotations.json'), 'r'))
hpp_by_file = {}
for ann in hpp_anns:
    f = ann['file']
    hpp_by_file.setdefault(f, []).append(ann)
print(f"\nUnique hpp files for HIGH: {len(hpp_by_file)}")
for f, items in sorted(hpp_by_file.items()):
    print(f"  {f}: {len(items)} annotations")
