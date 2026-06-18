"""Explore data for Task 17 - fixed address matching"""
import json
import os

# 1. Functions.json
with open('injectFunctionTest/functions.json', 'r') as f:
    data = json.load(f)
funcs = data['functions']

# Build lookup by normalized address (no 0x, uppercase, pad to 8 digits)
def norm_addr(addr_str):
    """Normalize address to uppercase hex without 0x prefix, 8 digits"""
    s = addr_str.replace('0x', '').replace('0X', '').upper()
    return s.zfill(8)

funcs_by_addr = {}
for f in funcs:
    funcs_by_addr[norm_addr(f['address'])] = f

# Filter sub_* with size < 50
small_subs = [f for f in funcs if f['name'].startswith('sub_') and f.get('size', 0) < 50]
print(f"=== sub_* <50 bytes: {len(small_subs)} ===")

# 2. Decompile files
decompile_dir = 'tools/sub_decompiles'
decompile_files = os.listdir(decompile_dir)
print(f"Decompile files in dir: {len(decompile_files)}")

# Build lookup by address
decompile_by_addr = {}
for fname in decompile_files:
    if fname.endswith('.json') and not fname.startswith('_'):
        addr = fname.replace('.json', '').upper()
        addr = addr.zfill(8)
        decompile_by_addr[addr] = fname

print(f"Decompile lookup entries: {len(decompile_by_addr)}")

# Check coverage
small_addrs = [norm_addr(f['address']) for f in small_subs]
covered = []
uncovered = []
for f in small_subs:
    na = norm_addr(f['address'])
    if na in decompile_by_addr:
        covered.append(f)
    else:
        uncovered.append(f)

print(f"\nSmall subs WITH decompile: {len(covered)}")
print(f"Small subs WITHOUT decompile: {len(uncovered)}")
if len(covered) > 0:
    print(f"  First 5 with decompile: {[norm_addr(f['address']) for f in covered[:5]]}")
if uncovered:
    print(f"  First 5 without decompile: {[norm_addr(f['address']) for f in uncovered[:5]]}")

# 3. Naming proposals
with open('tools/sub_naming_proposals.json', 'r') as f:
    proposals = json.load(f)['proposals']

# Build normalized proposal lookup
prop_by_addr = {}
for addr_str, name in proposals.items():
    prop_by_addr[norm_addr(addr_str)] = name

small_with_prop = [f for f in small_subs if norm_addr(f['address']) in prop_by_addr]
small_without_prop = [f for f in small_subs if norm_addr(f['address']) not in prop_by_addr]
print(f"\nSmall subs WITH naming proposals: {len(small_with_prop)}")
print(f"Small subs WITHOUT naming proposals: {len(small_without_prop)}")

# 4. Target: functions that have BOTH decompile AND proposal
golden = [f for f in small_subs 
          if norm_addr(f['address']) in decompile_by_addr 
          and norm_addr(f['address']) in prop_by_addr]
print(f"\n=== GOLDEN (decompile + proposal): {len(golden)} ===")

# 5. Functions with decompile ONLY
decomp_only = [f for f in small_subs 
               if norm_addr(f['address']) in decompile_by_addr 
               and norm_addr(f['address']) not in prop_by_addr]
print(f"Decompile only (no proposal): {len(decomp_only)}")

# 6. Functions with proposal ONLY
prop_only = [f for f in small_subs 
             if norm_addr(f['address']) not in decompile_by_addr 
             and norm_addr(f['address']) in prop_by_addr]
print(f"Proposal only (no decompile): {len(prop_only)}")

# 7. Neither
neither = [f for f in small_subs 
           if norm_addr(f['address']) not in decompile_by_addr 
           and norm_addr(f['address']) not in prop_by_addr]
print(f"Neither: {len(neither)}")

# Show some sample decompile content
print(f"\n=== Sample decompile content (from golden) ===")
for f in golden[:5]:
    na = norm_addr(f['address'])
    fpath = os.path.join(decompile_dir, decompile_by_addr[na])
    with open(fpath, 'r') as df:
        ddata = json.load(df)
    prop_name = prop_by_addr.get(na, '?')
    pseudo = ddata['pseudocode']
    # Remove color codes (ANSI escape sequences)
    import re
    cleaned = re.sub(r'\x1b\[[0-9;]*m', '', pseudo)
    cleaned = re.sub(r'[\x00-\x08\x0b\x0c\x0e-\x1f]', '', cleaned)
    print(f"\n--- {f['address']}: {f['name']} -> {prop_name} ({f['size']}B) ---")
    print(f"Pseudocode: {cleaned[:500]}")
    print(f"Callers: {ddata.get('callers', [])}")
    print(f"Callees: {ddata.get('callees', [])}")

# 8. Size distribution of golden
from collections import Counter
golden_sizes = Counter(f['size'] for f in golden)
print(f"\n=== Golden size distribution ===")
for s in sorted(golden_sizes):
    print(f"  {s}B: {golden_sizes[s]}")
