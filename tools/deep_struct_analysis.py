#!/usr/bin/env python3
"""
Deep structural analysis: compare Class_N structs with named structs.
Uses member pattern matching, size comparison, and inheritance.
"""
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

print(f"Named structs: {len(named_structs)}, Class_N structs: {len(class_n_structs)}")

# Method index
funcs_per_class = defaultdict(list)
for addr, fdata in funcs.items():
    funcs_per_class[fdata.get('inferred_real_class', '')].append(fdata)

unmapped = sorted(set(cls.keys()) - set(existing_map.keys()), key=lambda x: int(x.split('_')[1]))
print(f"Unmapped: {len(unmapped)}")

new_map = dict(existing_map)

# --- METHOD 1: DIRECT STRUCT COMPARISON ---
# Compare member patterns between Class_N and named structs
# Two structs are "the same" if they have identical member count and type patterns
print("\n=== Direct struct comparison ===")

def normalize_member_type(m):
    """Normalize member type for comparison"""
    parts = m.split()
    if not parts:
        return ''
    typ = parts[0]
    # Normalize integer types
    if typ.startswith('_DWORD'):
        return 'int'
    if typ.startswith('_WORD'):
        return 'short'
    if typ.startswith('_BYTE'):
        return 'char'
    if typ.startswith('__int'):
        return typ.replace('__int', 'int')
    return typ

def struct_pattern(members):
    """Create a simplified member type pattern"""
    return [normalize_member_type(m) for m in members]

# Build pattern index for named structs
named_patterns = {}
for name, sinfo in named_structs.items():
    if sinfo['members']:
        named_patterns[name] = {
            'size': sinfo['size'],
            'pattern': struct_pattern(sinfo['members']),
            'member_count': len(sinfo['members'])
        }

# For each processed named struct, build a pattern signature
# Group named structs by (size, member_count, pattern[:5]) 
pattern_groups = defaultdict(list)
for name, pinfo in named_patterns.items():
    key = (pinfo['size'], pinfo['member_count'], tuple(pinfo['pattern'][:5]))
    pattern_groups[key].append(name)

# For each unmapped Class_N, find exact pattern matches
struct_matches = 0
for cid in unmapped:
    if cid not in class_n_structs:
        continue
    hs = class_n_structs[cid]
    if hs['is_fwd'] or not hs['members']:
        continue
    
    size = hs['size']
    pat = struct_pattern(hs['members'])
    key = (size, len(hs['members']), tuple(pat[:5]))
    
    if key in pattern_groups:
        candidates = pattern_groups[key]
        # Filter to exact pattern match
        exact = [c for c in candidates if named_patterns[c]['pattern'] == pat]
        if len(exact) == 1:
            name = exact[0]
            new_map[cid] = name
            struct_matches += 1
            print(f"  {cid} -> {name} (exact struct match: size={size}, {len(hs['members'])} members)")

print(f"  Matches from exact struct comparison: {struct_matches}")

# --- METHOD 2: LOWERED METHOD OVERLAP ---
print("\n=== Method overlap (lowered threshold) ===")

gt_methods = defaultdict(set)
for cn in existing_map:
    for fn in funcs_per_class.get(cn, []):
        oname = fn.get('original_name', '')
        if '::' in oname:
            gt_methods[cn].add(re.sub(r'_\d+(_\d+)?$', '', oname.split('::', 1)[1]))

# Also build class name -> method set mapping
name_methods = defaultdict(set)
for cn, methods in gt_methods.items():
    name_methods[existing_map.get(cn, cn)].update(methods)

unmapped_methods = {}
for cid in [c for c in unmapped if c not in new_map]:
    ms = set()
    for fn in funcs_per_class.get(cid, []):
        oname = fn.get('original_name', '')
        if '::' in oname:
            ms.add(re.sub(r'_\d+(_\d+)?$', '', oname.split('::', 1)[1]))
    if ms:
        unmapped_methods[cid] = ms

method_matches = []
for cid, methods in unmapped_methods.items():
    for cls_name, cls_methods in name_methods.items():
        if cls_methods and len(methods & cls_methods) >= 2:
            jaccard = len(methods & cls_methods) / max(len(methods | cls_methods), 1)
            score = jaccard * len(methods & cls_methods)
            method_matches.append((cid, cls_name, score, len(methods & cls_methods), list(methods & cls_methods)[:5]))

method_matches.sort(key=lambda x: -x[2])

already = set(new_map.keys())
for cid, cls_name, score, cnt, matched_m in method_matches:
    if cid not in already and cid not in new_map:
        if score >= 0.5 and cnt >= 2:
            new_map[cid] = cls_name
            already.add(cid)
            print(f"  {cid} -> {cls_name} ({cnt} methods overlap, score={score:.2f})")
            print(f"    matched: {', '.join(matched_m)}")

# --- METHOD 3: SIZE-ONLY MATCHING (WEAK) ---
# For classes that only match size but not pattern, we list the possibilities
print("\n=== Size-based matching (documentation only) ===")
size_only = defaultdict(list)
for name, sinfo in named_structs.items():
    if sinfo['size'] > 0 and not sinfo['is_fwd']:
        size_only[sinfo['size']].append(name)

# --- FINAL ---
print(f"\n=== Results ===")
print(f"Previously mapped: {len(existing_map)}")
print(f"Newly mapped: {len(new_map) - len(existing_map)}")
print(f"Total: {len(new_map)} / {len(cls)}")

# Save
with open(r'H:\RA2YR_ReSource\tools\csp\class_rename_map.json', 'w') as f:
    json.dump(new_map, f, indent=2, sort_keys=True)

new_only = {k: v for k, v in new_map.items() if k not in existing_map}
with open(r'H:\RA2YR_ReSource\tools\csp\new_mappings.json', 'w') as f:
    json.dump(new_only, f, indent=2, sort_keys=True)

# Build comprehensive analysis for remaining unmapped
remaining = sorted(set(cls.keys()) - set(new_map.keys()), key=lambda x: int(x.split('_')[1]))
print(f"Still unmapped: {len(remaining)}")

# Generate analysis
lines = ["# Class Name Analysis\n\n"]
lines.append(f"Total: {len(cls)}, Mapped: {len(new_map)}, Unmapped: {len(remaining)}\n\n")
lines.append("## New Mappings\n\n")
for cid in sorted(new_only, key=lambda x: int(x.split('_')[1])):
    lines.append(f"- {cid} → {new_only[cid]}\n")

lines.append(f"\n## Unmapped Classes\n\n")

# Categorize remaining
for cid in remaining:
    lines.append(f"### {cid}\n")
    hs = class_n_structs.get(cid)
    if hs:
        lines.append(f"- Struct size: {hs['size']} bytes\n")
        lines.append(f"- Members: {len(hs['members'])}\n")
        if hs['is_fwd']:
            lines.append(f"- Forward declaration or gap-only\n")
        elif hs['members']:
            # Check size-only matches
            sz = hs['size']
            sz_matches = size_only.get(sz, [])
            if sz_matches:
                lines.append(f"- Same size structs: {', '.join(sz_matches[:5])}\n")
            lines.append(f"- Members: {hs['members'][:3]}...\n")
    
    ms = []
    for fn in funcs_per_class.get(cid, []):
        oname = fn.get('original_name', '')
        if '::' in oname:
            ms.append(oname.split('::', 1)[1])
    
    if ms:
        lines.append(f"- Functions ({len(ms)}): {', '.join(ms[:8])}\n")
    
    # Check inheritance
    parents = cls[cid].get('inherited_from', [])
    if parents:
        mapped_parents = [existing_map.get(p, '?') for p in parents]
        lines.append(f"- Inherits from: {', '.join(mapped_parents)}\n")
    
    lines.append("\n")

with open(r'H:\RA2YR_ReSource\tools\class_name_analysis.md', 'w') as f:
    f.writelines(lines)

print(f"\nUpdated: class_rename_map.json, class_name_analysis.md, new_mappings.json")
