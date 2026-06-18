"""Explore data for Task 17: small sub_* functions <50 bytes"""
import json
import os

# 1. Functions.json: sub_* size distribution
with open('injectFunctionTest/functions.json', 'r') as f:
    data = json.load(f)
funcs = data['functions']

# Build lookup by address
funcs_by_addr = {}
for f in funcs:
    funcs_by_addr[f['address']] = f

# Filter sub_* with size < 50
small_subs = [f for f in funcs if f['name'].startswith('sub_') and f.get('size', 0) < 50]
print(f"=== sub_* <50 bytes: {len(small_subs)} ===")

# Size bins
from collections import Counter
size_dist = Counter(f['size'] for f in small_subs)
for s in sorted(size_dist):
    print(f"  {s}B: {size_dist[s]}")

# Calling convention distribution
conv_dist = Counter((f.get('call') or {}).get('convention', 'unknown') for f in small_subs)
print(f"\nCalling conventions:")
for c, n in conv_dist.most_common():
    print(f"  {c}: {n}")

# Category distribution
cat_dist = Counter(f.get('category', 'unknown') for f in small_subs)
print(f"\nCategories:")
for c, n in cat_dist.most_common(20):
    print(f"  {c}: {n}")

# Samples: show a few with details
print(f"\n=== Sample entries ===")
for f in small_subs[:10]:
    addr = f['address']
    name = f['name']
    size = f['size']
    call = f.get('call', {})
    conv = call.get('convention', '?')
    is_member = call.get('is_member', False)
    class_name = call.get('class_name', '')
    print(f"  {addr}: {name} ({size}B) conv={conv} member={is_member} class={class_name}")

# 2. Naming proposals coverage
with open('tools/sub_naming_proposals.json', 'r') as f:
    proposals = json.load(f)['proposals']
print(f"\n=== Naming proposals: {len(proposals)} entries ===")

# Check coverage for small subs
small_addrs = set(f['address'] for f in small_subs)
prop_addrs = set(proposals.keys())
covered = small_addrs & prop_addrs
uncovered = small_addrs - prop_addrs
print(f"Small subs with proposals: {len(covered)}")
print(f"Small subs without proposals: {len(uncovered)}")
if uncovered:
    print(f"  Missing: {list(uncovered)[:10]}")

# 3. Check decompile files
decompile_dir = 'tools/sub_decompiles'
decompile_files = set(os.listdir(decompile_dir))
print(f"\n=== Decompile files: {len(decompile_files)} total ===")

# Map: address -> decompile file exists
decompile_addrs = set()
for fname in decompile_files:
    if fname.endswith('.json') and not fname.startswith('_'):
        addr = '0x' + fname.replace('.json', '').upper()
        decompile_addrs.add(addr)

covered_decomp = small_addrs & decompile_addrs
uncovered_decomp = small_addrs - decompile_addrs
print(f"Small subs with decompile: {len(covered_decomp)}")
print(f"Small subs without decompile: {len(uncovered_decomp)}")
if uncovered_decomp:
    print(f"  Missing first 10: {list(uncovered_decomp)[:10]}")

# 4. What does a decompile look like (cleanly)?
print(f"\n=== Sample decompile content ===")
for f in small_subs[:3]:
    addr = f['address']
    fname = f"{addr[2:]}.json"
    fpath = os.path.join(decompile_dir, fname)
    if os.path.exists(fpath):
        with open(fpath, 'r') as df:
            ddata = json.load(df)
        pseudo = ddata['pseudocode']
        # Clean control characters
        cleaned = pseudo.encode('ascii', errors='ignore').decode('ascii')
        print(f"\n--- {addr} ({f['name']}) ---")
        print(f"Pseudocode (trimmed): {cleaned[:400]}")
        print(f"Callers: {ddata.get('callers', [])}")
        print(f"Callees: {ddata.get('callees', [])}")

# 5. Determine which modules to group into
print(f"\n=== Module grouping analysis ===")
# Check if there's a modules mapping
if os.path.exists('tools/functions_by_module.json'):
    with open('tools/functions_by_module.json', 'r') as f:
        mod_data = json.load(f)
    print(f"functions_by_module.json: {type(mod_data).__name__}, keys: {list(mod_data.keys())[:5] if isinstance(mod_data, dict) else 'list'}")
