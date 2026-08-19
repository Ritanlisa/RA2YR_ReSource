#!/usr/bin/env python3
"""Deep investigation of unmapped classes to find ALL possible evidence."""
import json, re
from collections import defaultdict

with open(r'H:\RA2YR_ReSource\tools\csp\class_rename_map.json') as f:
    existing_map = json.load(f)
with open(r'H:\RA2YR_ReSource\tools\csp\full_report\csp_classes.json') as f:
    classes_data = json.load(f)
cls = classes_data['classes']
with open(r'H:\RA2YR_ReSource\tools\csp\full_report\csp_functions.json') as f:
    funcs_data = json.load(f)
funcs = funcs_data['functions']
with open(r'H:\RA2YR_ReSource\decompile-results\gamemd.exe.h', encoding='utf-8', errors='ignore') as f:
    h_content = f.read()

# Parse .h
text = re.sub(r'//.*', '', h_content)
text = re.sub(r'/\*.*?\*/', '', text, flags=re.DOTALL)
h_structs = {}
pattern = re.compile(r'struct\s+(\w+)\s*\n\{((?:[^{}]|\{(?:[^{}]|\{[^{}]*\})*\})*)\}\s*;', re.DOTALL)
for m in pattern.finditer(text):
    name = m.group(1)
    body = m.group(2).strip()
    lines = [re.sub(r'//.*', '', l).strip() for l in body.split('\n') if l.strip() and not l.strip().startswith('//')]
    lines = [l for l in lines if l]
    size_match = re.search(r'//\s*size:\s*(\d+)', m.group(0))
    size = int(size_match.group(1)) if size_match else 0
    is_fwd = not lines or all('gap_' in l for l in lines)
    h_structs[name] = {'members': lines, 'size': size, 'is_fwd': is_fwd and len(lines) <= 2}

named_structs = {n: s for n, s in h_structs.items() if not n.startswith('Class_')}
class_n_structs = {n: s for n, s in h_structs.items() if n.startswith('Class_')}

# Function index
funcs_per_class = defaultdict(list)
for addr, fdata in funcs.items():
    funcs_per_class[fdata.get('inferred_real_class', '')].append(fdata)

unmapped = sorted(set(cls.keys()) - set(existing_map.keys()), key=lambda x: int(x.split('_')[1]))

# 1. Check how many unmapped classes have methods
print("=== Unmapped class statistics ===")
cnt_with_methods = 0
cnt_without_methods = 0
cnt_no_parents = 0
cnt_fwd = 0

for cid in unmapped:
    fns = funcs_per_class.get(cid, [])
    if fns:
        cnt_with_methods += 1
    else:
        cnt_without_methods += 1
    
    if not cls[cid].get('inherited_from', []):
        cnt_no_parents += 1
    
    if cid in h_structs and h_structs[cid]['is_fwd']:
        cnt_fwd += 1

print(f"With methods: {cnt_with_methods}")
print(f"Without methods: {cnt_without_methods}")
print(f"No inheritance: {cnt_no_parents}")
print(f"Forward declarations: {cnt_fwd}")

# 2. Look at method names more carefully
print("\n=== Classes WITH methods ===")
for cid in unmapped:
    fns = funcs_per_class.get(cid, [])
    if fns:
        methods = []
        for fn in fns:
            oname = fn.get('original_name', '')
            if '::' in oname:
                methods.append(oname.split('::', 1)[1])
        if methods:
            # Print first 5 methods
            print(f"\n{cid}: {len(methods)} methods")
            print(f"  Methods: {', '.join(methods[:8])}")
            
            # Get struct info
            if cid in h_structs:
                hs = h_structs[cid]
                print(f"  Struct: size={hs['size']}, members={len(hs['members'])}, fwd={hs['is_fwd']}")
            
            # Get inheritance
            parents = cls[cid].get('inherited_from', [])
            if parents:
                mapped_parents = [existing_map.get(p, p) for p in parents]
                print(f"  Parents: {', '.join(mapped_parents)}")

# 3. Broader method matching
print("\n\n=== BROAD METHOD MATCHING ===")

# Build name -> methods map (WITHOUT requiring specific class mapping)
# Collect all method names associated with each class name
name_methods = defaultdict(set)
for cn, cdata in cls.items():
    mapped_name = existing_map.get(cn, cn)
    for fn in funcs_per_class.get(cn, []):
        oname = fn.get('original_name', '')
        if '::' in oname:
            m = re.sub(r'_\d+(_\d+)?$', '', oname.split('::', 1)[1])
            name_methods[mapped_name].add(m)

# For each unmapped class, check method overlaps with ALL names
# Use threshold of ANY 1 unique method match
print("\nClasses with unique method evidence:")
for cid in unmapped:
    fns = funcs_per_class.get(cid, [])
    methods = set()
    for fn in fns:
        oname = fn.get('original_name', '')
        if '::' in oname:
            m = re.sub(r'_\d+(_\d+)?$', '', oname.split('::', 1)[1])
            methods.add(m)
    
    if not methods:
        continue
    
    # For each potential class name, check overlap
    best_name = None
    best_score = 0
    best_overlap = []
    for cls_name, cls_methods in name_methods.items():
        if cls_name.startswith('Class_'):
            continue  # Skip mapped classes with Class_N names
        overlap = methods & cls_methods
        if overlap and len(overlap) >= 2:
            jaccard = len(overlap) / max(len(methods | cls_methods), 1)
            score = jaccard * len(overlap)
            if score > best_score:
                best_score = score
                best_name = cls_name
                best_overlap = list(overlap)
    
    if best_name and best_score >= 0.3:
        print(f"  {cid} -> {best_name} (overlap={best_overlap}, score={best_score:.2f})")
