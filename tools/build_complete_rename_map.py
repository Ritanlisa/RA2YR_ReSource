#!/usr/bin/env python3
"""
Comprehensive CSP class rename map builder v2.
Uses vtable slot matching, real_name chains, struct analysis, and method overlap.
"""

import json, os
import re
from collections import defaultdict

PROJ_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

print("Loading data...")

with open(os.path.join(PROJ_ROOT, 'tools/csp/full_report/csp_classes.json')) as f:
    classes_data = json.load(f)
cls = classes_data['classes']

with open(os.path.join(PROJ_ROOT, 'tools/csp/full_report/csp_functions.json')) as f:
    funcs_data = json.load(f)
funcs = funcs_data['functions']

with open(os.path.join(PROJ_ROOT, 'tools/csp/class_rename_map.json')) as f:
    existing_map = json.load(f)

with open(os.path.join(PROJ_ROOT, 'decompile-results/gamemd.exe.h'), encoding='utf-8', errors='ignore') as f:
    h_content = f.read()

existing_mapped_set = set(existing_map.keys())
all_classes_set = set(cls.keys())
unmapped_classes = sorted(all_classes_set - existing_mapped_set, key=lambda x: int(x.split('_')[1]))
print(f"Already mapped: {len(existing_map)}")
print(f"Unmapped: {len(unmapped_classes)}")

# Parse .h file
def parse_h_file(h_content):
    text = re.sub(r'//.*', '', h_content)
    text = re.sub(r'/\*.*?\*/', '', text, flags=re.DOTALL)
    structs = {}
    pattern = re.compile(r'struct\s+(\w+)\s*\n\{((?:[^{}]|\{(?:[^{}]|\{[^{}]*\})*\})*)\}\s*;', re.DOTALL)
    for m in pattern.finditer(text):
        name = m.group(1)
        body = m.group(2).strip()
        lines = [l.strip() for l in body.split('\n') if l.strip() and not l.strip().startswith('//')]
        clean_lines = []
        for line in lines:
            line = re.sub(r'//.*', '', line).strip()
            if line:
                clean_lines.append(line)
        size_match = re.search(r'//\s*size:\s*(\d+)', m.group(0))
        size = int(size_match.group(1)) if size_match else 0
        is_fwd = len(clean_lines) == 0 or all('gap_' in l for l in clean_lines)
        structs[name] = {
            'members': clean_lines, 'size': size,
            'num_members': len(clean_lines),
            'is_forward_decl': is_fwd and len(clean_lines) <= 2
        }
    return structs

h_structs = parse_h_file(h_content)
print(f"Parsed {len(h_structs)} structs from .h file")

named_h_structs = {n: s for n, s in h_structs.items() if not n.startswith('Class_')}

# Function name index
funcs_per_class = defaultdict(list)
for addr, fdata in funcs.items():
    funcs_per_class[fdata.get('inferred_real_class', '')].append(fdata)

# PHASE 1: REAL NAME CHAIN
print("\n=== Phase C: Real name chain analysis ===")
new_mappings = {}

for cid in unmapped_classes:
    rn = cls[cid].get('real_name', 'unknown')
    if rn not in ('unknown', cid):
        chain = [cid]
        cur = rn
        while cur in cls and cur != 'unknown' and cur not in chain:
            chain.append(cur)
            nrn = cls[cur].get('real_name', 'unknown')
            if nrn == cur or nrn == 'unknown':
                break
            cur = nrn
        for link in chain[1:]:
            if link in existing_map:
                new_mappings[cid] = existing_map[link]
                print(f"  {cid} -> {existing_map[link]} (real_name chain: {' -> '.join(chain)})")
                break

print(f"  Phase C results: {len(new_mappings)}")

# PHASE 2: VTABLE SLOT MATCHING
print("\n=== Vtable slot analysis ===")
slot_patterns = defaultdict(list)
for cid, cdata in cls.items():
    slots = tuple(cdata.get('slots', []))
    if slots:
        slot_patterns[slots].append(cid)

slot_matches = 0
for slots, class_list in slot_patterns.items():
    mapped_in_group = [c for c in class_list if c in existing_map]
    unmapped_in_group = [c for c in class_list if c not in existing_map and c not in new_mappings]
    if mapped_in_group and unmapped_in_group:
        name = existing_map[mapped_in_group[0]]
        for unmapped_c in unmapped_in_group:
            new_mappings[unmapped_c] = name
            slot_matches += 1
            print(f"  {unmapped_c} -> {name} (same vtable slots as {mapped_in_group[0]})")

print(f"  Phase 2 results: {slot_matches}")

# PHASE 3: INHERITANCE CHAIN ANALYSIS
print("\n=== Inheritance analysis ===")
parent_map = {}
for cid, cdata in cls.items():
    parents = cdata.get('inherited_from', [])
    if parents:
        parent_map[cid] = parents

for cid in unmapped_classes:
    if cid in new_mappings:
        continue
    parents = parent_map.get(cid, [])
    mapped_parents = [p for p in parents if p in existing_map]
    if len(mapped_parents) >= 2:
        parent_names = [existing_map[p] for p in mapped_parents]
        if len(set(parent_names)) == 1:
            new_mappings[cid] = parent_names[0]
            print(f"  {cid} -> {parent_names[0]} (inherits from all same-name ancestors)")

# PHASE 4: STRUCT SIZE MATCHING
print("\n=== Struct size matching ===")
size_to_named = defaultdict(list)
for name, sinfo in named_h_structs.items():
    if sinfo['size'] > 0 and not sinfo['is_forward_decl']:
        size_to_named[sinfo['size']].append(name)

for cid in unmapped_classes:
    if cid in new_mappings:
        continue
    if cid in h_structs:
        h_size = h_structs[cid]['size']
        if h_size > 0 and h_size in size_to_named:
            candidates = size_to_named[h_size]
            if len(candidates) == 1:
                cand = candidates[0]
                new_mappings[cid] = cand
                print(f"  {cid} -> {cand} (unique struct size: {h_size} bytes)")

# PHASE 5: METHOD OVERLAP ANALYSIS
print("\n=== Method overlap analysis ===")
gt_methods = defaultdict(set)
for cn in existing_map:
    for fn in funcs_per_class.get(cn, []):
        oname = fn.get('original_name', '')
        if '::' in oname:
            m = oname.split('::', 1)[1]
            gt_methods[cn].add(re.sub(r'_\d+(_\d+)?$', '', m))

unmapped_methods = {}
for cid in unmapped_classes:
    if cid in new_mappings:
        continue
    ms = set()
    for fn in funcs_per_class.get(cid, []):
        oname = fn.get('original_name', '')
        if '::' in oname:
            ms.add(re.sub(r'_\d+(_\d+)?$', '', oname.split('::', 1)[1]))
    if ms:
        unmapped_methods[cid] = ms

fn_matches = []
for cid, methods in unmapped_methods.items():
    scores = {}
    for mcn, gtm in gt_methods.items():
        if gtm and len(methods & gtm) >= 2:
            jaccard = len(methods & gtm) / max(len(methods | gtm), 1)
            scores[mcn] = (jaccard * len(methods & gtm), len(methods & gtm))
    if scores:
        best = max(scores, key=lambda x: scores[x])
        score_val, match_cnt = scores[best]
        if match_cnt >= 3 and score_val >= 1.0:
            fn_matches.append((cid, best, existing_map[best], match_cnt, score_val))

for cid, _, name, cnt, score in sorted(fn_matches, key=lambda x: -x[3]):
    if cid not in new_mappings:
        new_mappings[cid] = name
        print(f"  {cid} -> {name} ({cnt} methods overlap, score={score:.1f})")

print(f"  Phase 5 results: {len(fn_matches)}")

# BUILD FINAL MAP
print(f"\n=== Final Results ===")
final_map = dict(existing_map)
for cid, name in new_mappings.items():
    final_map[cid] = name

print(f"Total mapped: {len(final_map)} / {len(all_classes_set)}")
print(f"Newly named: {len(new_mappings)}")
print(f"Still unmapped: {len(all_classes_set) - len(final_map)}")

# ANALYSIS FOR REMAINING UNMAPPED
unmapped_final = sorted(all_classes_set - set(final_map.keys()), key=lambda x: int(x.split('_')[1]))

cat_no_h = [c for c in unmapped_final if c not in h_structs]
cat_fwd = [c for c in unmapped_final if c in h_structs and h_structs[c]['is_forward_decl']]
cat_methods = []
cat_small = []
cat_other = []

for cid in unmapped_final:
    if cid in cat_no_h or cid in cat_fwd:
        continue
    hs = h_structs[cid]
    ms = unmapped_methods.get(cid, set())
    if ms:
        sz_hints = []
        if hs['size'] > 0 and hs['size'] in size_to_named:
            sz_hints = size_to_named[hs['size']]
        cat_methods.append({
            'cid': cid, 'sz': hs['size'],
            'mc': len(ms), 'members': hs['num_members'],
            'methods': list(ms)[:5], 'hints': sz_hints
        })
    elif hs['size'] > 0:
        cat_small.append(cid)
    else:
        cat_other.append(cid)

lines = ["# Class Name Analysis\n\n"]
lines.append(f"Total CSP classes: {len(all_classes_set)}\n")
lines.append(f"Previously mapped: {len(existing_map)}\n")
lines.append(f"Newly mapped this run: {len(new_mappings)}\n")
lines.append(f"Currently mapped: {len(final_map)}\n")
lines.append(f"Still unmapped: {len(unmapped_final)}\n\n")
lines.append("## New Mappings\n\n")
for cid in sorted(new_mappings, key=lambda x: int(x.split('_')[1])):
    lines.append(f"- {cid} → {final_map[cid]}\n")
lines.append(f"\n## Unmapped: No .h struct ({len(cat_no_h)})\n")
lines.append("Not in IDA .h file. Template instantiations or compiler-generated.\n\n")
for c in cat_no_h[:10]:
    lines.append(f"- {c}\n")
lines.append(f"\n## Unmapped: Forward declarations ({len(cat_fwd)})\n")
lines.append("Forward declarations / opaque handles.\n\n")
for c in cat_fwd[:20]:
    lines.append(f"- {c}\n")
lines.append(f"\n## Unmapped: Has methods ({len(cat_methods)})\n")
for item in cat_methods:
    cid = item['cid']
    lines.append(f"**{cid}** (size={item['sz']}, methods={item['mc']}, members={item['members']})\n")
    lines.append(f"- Methods: {', '.join(item['methods'])}\n")
    if item['hints']:
        lines.append(f"- Size matches: {', '.join(item['hints'][:3])}\n")
    lines.append("\n")
lines.append(f"\n## Unmapped: Small structs ({len(cat_small)})\n")
for c in cat_small:
    lines.append(f"- {c}\n")
lines.append(f"\n## Unmapped: Other ({len(cat_other)})\n")
for c in cat_other:
    lines.append(f"- {c}\n")

# SAVE
with open(os.path.join(PROJ_ROOT, 'tools/csp/class_rename_map.json'), 'w') as f:
    json.dump(final_map, f, indent=2, sort_keys=True)
with open(os.path.join(PROJ_ROOT, 'tools/class_name_analysis.md'), 'w') as f:
    f.writelines(lines)
new_only = {k: v for k, v in final_map.items() if k not in existing_map}
with open(os.path.join(PROJ_ROOT, 'tools/csp/new_mappings.json'), 'w') as f:
    json.dump(new_only, f, indent=2, sort_keys=True)

print(f"\nSaved: class_rename_map.json ({len(final_map)}), new_mappings.json ({len(new_only)}), class_name_analysis.md")
