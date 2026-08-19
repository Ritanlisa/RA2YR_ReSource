"""
T7: Set-difference approach to upgrade MEDIUM→HIGH and resolve UNMATCHABLE.
For each class: IDA functions - claimed (via hpp // 0xADDR) = unclaimed pool.
Match by:
  1. sub_XXXXXX → lookup real IDA name at 0xXXXXXX, match to class pool
  2. Direct method name match between missing hpp and unclaimed IDA pool
"""
import json
import os
import re
from collections import defaultdict

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(SCRIPT_DIR)

def load_json(path):
    with open(path, 'r', encoding='utf-8') as f:
        return json.load(f)

def save_json(path, data):
    with open(path, 'w', encoding='utf-8') as f:
        json.dump(data, f, indent=2, ensure_ascii=False)

def normalize_name(name):
    return re.sub(r'[\s_]+', '', name.lower())

def extract_class(name):
    return name.split('::', 1)[0] if '::' in name else None

def extract_method(name):
    return name.split('::', 1)[1] if '::' in name else name

def method_similarity(ida_m, hpp_m):
    if ida_m == hpp_m:
        return 1.0
    ni = normalize_name(ida_m)
    nh = normalize_name(hpp_m)
    if ni == nh:
        return 0.95
    if ni.startswith(nh) or nh.startswith(ni):
        return 0.7
    if ni and nh and (ni in nh or nh in ni):
        return 0.5
    return 0.0

T_SUB = re.compile(r'^sub_([0-9A-Fa-f]+)$')
CONF_RANK = {'UNMATCHABLE': 0, 'LOW': 1, 'MEDIUM': 2, 'CONFLICT': 2, 'HIGH': 3}

# ─── Load data ──────────────────────────────────────────────────────────

print("Loading data files...")
matched = load_json(os.path.join(ROOT, 'tools', 'matched_functions.json'))
ida_db = load_json(os.path.join(ROOT, 'tools', 'ida_function_db.json'))
missing = load_json(os.path.join(ROOT, 'tools', 'missing_functions.json'))
results = load_json(os.path.join(ROOT, 'tools', 'ida_match_results.json'))

print(f"  matched_functions: {len(matched)}")
print(f"  ida_function_db: {len(ida_db)}")
print(f"  missing_functions: {len(missing)}")
print(f"  ida_match_results: {len(results['results'])}")

# ─── Step 1: Extract claimed IDA addresses ──────────────────────────────

print("\n[Step 1] Extracting claimed IDA addresses...")
claimed_by_class = defaultdict(set)  # class → {addr_int}
claimed_addrs = set()

for item in matched:
    m = re.search(r'//\s*0x([0-9A-Fa-f]+)', item.get('full_signature', ''))
    if m:
        addr = int(m.group(1), 16)
        cls = item.get('class_name', '')
        claimed_by_class[cls].add(addr)
        claimed_addrs.add(addr)

print(f"  Claimed addresses: {len(claimed_addrs)} from {len(claimed_by_class)} classes")

# ─── Step 2: Build IDA function pool by class ───────────────────────────

print("\n[Step 2] Building IDA function pools...")
ida_by_class = defaultdict(dict)  # class → {method → addr_str}
ida_method_to_class = {}  # method → class_name (for partial lookup)

for addr_str, info in ida_db.items():
    name = info['name']
    addr_int = int(addr_str, 16)
    cls = extract_class(name)
    if cls:
        method = extract_method(name)
        ida_by_class[cls][method] = addr_str
        ida_method_to_class[method] = ida_method_to_class.get(method, set()) | {cls}

print(f"  Classes: {len(ida_by_class)}, Methods: {sum(len(v) for v in ida_by_class.values())}")

# ─── Step 3: Group missing by class ─────────────────────────────────────

print("\n[Step 3] Grouping missing functions...")
missing_by_class = defaultdict(list)
missing_global = []

for item in missing:
    cls = item.get('class_name', '')
    if cls:
        missing_by_class[cls].append(item)
    else:
        missing_global.append(item)

print(f"  Classes with missing: {len(missing_by_class)}, Global: {len(missing_global)}")

# Build results lookup
results_by_cm = {}
for key, entry in results['results'].items():
    cm = f"{entry.get('class_name','')}::{entry.get('method_name','')}"
    results_by_cm[cm] = key

# ─── Step 4: Match ──────────────────────────────────────────────────────

print("\n[Step 4] Matching...")

upgrades = []
stats = defaultdict(int)

for cls in sorted(ida_by_class.keys()):
    ida_methods = ida_by_class[cls]
    missing_items = missing_by_class.get(cls, [])
    claimed_here = claimed_by_class.get(cls, set())
    
    if not missing_items:
        continue
    
    # Compute unclaimed pool
    unclaimed = {}
    for method, addr_str in ida_methods.items():
        if int(addr_str, 16) not in claimed_here:
            unclaimed[method] = addr_str
    
    if not unclaimed:
        continue
    
    # Track consumed unclaimed methods to prevent double-assignment
    consumed_unclaimed = set()  # method names already assigned
    
    for hpp_item in missing_items:
        method_name = hpp_item['method_name']
        cm_key = f"{cls}::{method_name}"
        result_key = results_by_cm.get(cm_key)
        
        if not result_key:
            continue
        
        result_entry = results['results'][result_key]
        old_conf = result_entry.get('final_confidence', 'UNMATCHABLE')
        
        if old_conf == 'HIGH':
            continue
        
        ida_method = None
        ida_addr_str = None
        new_conf = None
        match_type = None
        score = 0.0
        
        # Strategy A: sub_XXXXXX → resolve via IDA DB
        sub_m = T_SUB.match(method_name)
        if sub_m:
            sub_addr_int = int(sub_m.group(1), 16)
            sub_addr_str = f"0x{sub_addr_int:X}"
            
            if sub_addr_str not in ida_db:
                continue
            
            real_info = ida_db[sub_addr_str]
            real_name = real_info['name']
            real_cls = extract_class(real_name)
            real_method = extract_method(real_name)
            
            # Check if this address belongs to the same class in IDA
            if real_cls == cls:
                if sub_addr_str in ida_methods.values():
                    if sub_addr_str in unclaimed.values():
                        # The exact address is in the unclaimed pool → unambiguous match
                        new_conf = 'HIGH'
                        match_type = 'sub_addr_exact_unclaimed'
                        ida_method = real_method
                        ida_addr_str = sub_addr_str
                        score = 1.0
                    else:
                        # Address exists but already claimed → resolved at least
                        new_conf = 'MEDIUM'
                        match_type = 'sub_addr_claimed_elsewhere'
                        ida_method = real_method
                        ida_addr_str = sub_addr_str
                        score = 0.9
                else:
                    # Real class matches ours, but address not in our IDA pool
                    # This means the function might exist under a different name
                    # Try to find real_method in unclaimed pool
                    if real_method in unclaimed:
                        new_conf = 'MEDIUM'
                        match_type = 'sub_realname_in_unclaimed'
                        ida_method = real_method
                        ida_addr_str = unclaimed[real_method]
                        score = 0.85
                    else:
                        # Real name exists but claimed → still useful
                        new_conf = 'MEDIUM'
                        match_type = 'sub_realname_claimed'
                        ida_method = real_method
                        ida_addr_str = sub_addr_str
                        score = 0.8
            elif real_cls and real_cls != cls:
                # sub_ resolves to parent/sibling class
                new_conf = 'MEDIUM'
                match_type = 'sub_resolved_to_other_class'
                ida_method = f"{real_cls}::{real_method}"
                ida_addr_str = sub_addr_str
                score = 0.6
            else:
                # Global function?
                new_conf = 'LOW'
                match_type = 'sub_resolved_to_global'
                ida_method = real_name
                ida_addr_str = sub_addr_str
                score = 0.4
        
        # Strategy B: Direct method name match against unclaimed pool
        if new_conf is None:
            best_score = 0.0
            best_method = None
            best_addr = None
            
            for uma_method, uma_addr in unclaimed.items():
                if uma_method in consumed_unclaimed:
                    continue  # Already assigned
                s = method_similarity(uma_method, method_name)
                if s > best_score:
                    best_score = s
                    best_method = uma_method
                    best_addr = uma_addr
            
            if best_score >= 1.0:
                new_conf = 'HIGH'
                match_type = 'exact_name_unclaimed'
                ida_method = best_method
                ida_addr_str = best_addr
                score = best_score
            else:
                continue  # No confident match - don't force partial matches
        
        # Only upgrade
        if CONF_RANK.get(new_conf, 0) <= CONF_RANK.get(old_conf, 0):
            continue
        
        # Apply & consume
        if ida_method:
            consumed_unclaimed.add(ida_method)
        
        result_entry['final_confidence'] = new_conf
        result_entry['final_ida_addr'] = ida_addr_str
        result_entry['setdiff_match'] = {
            'ida_method': ida_method,
            'score': score,
            'match_type': match_type,
            'class_unclaimed': len(unclaimed),
            'class_missing': len(missing_items)
        }
        
        upgrades.append((result_key, old_conf, new_conf, ida_addr_str, match_type))
        stats[match_type] += 1
        stats[f'from_{old_conf}'] += 1

# ─── Report ────────────────────────────────────────────────────────────

print("\n" + "="*70)
print("T7 SET-DIFFERENCE UPGRADE REPORT")
print("="*70)

print(f"\nTotal upgrades: {len(upgrades)}")

print(f"\nBy match type:")
for t, c in sorted(stats.items(), key=lambda x: -x[1]):
    if not t.startswith('from_'):
        print(f"  {t}: {c}")

print(f"\nBy old confidence:")
for t, c in sorted(stats.items(), key=lambda x: -x[1]):
    if t.startswith('from_'):
        print(f"  {t[5:]}: {c}")

# New distribution
new_dist = defaultdict(int)
for entry in results['results'].values():
    new_dist[entry.get('final_confidence', 'UNMATCHABLE')] += 1

old_dist = results['metadata'].get('confidence_distribution', {})
print(f"\nConfidence distribution:")
for conf in ['UNMATCHABLE', 'LOW', 'MEDIUM', 'HIGH', 'CONFLICT']:
    o = old_dist.get(conf, 0)
    n = new_dist.get(conf, 0)
    d = n - o
    sign = '+' if d > 0 else ''
    print(f"  {conf}: {o:>5} → {n:>5} ({sign}{d})")

print(f"\nSample upgrades (first 25):")
for i, (key, old, new, addr, mtype) in enumerate(upgrades[:25]):
    print(f"  [{i+1}] {key}")
    print(f"       {old} → {new} @ {addr} ({mtype})")

# ─── Save ──────────────────────────────────────────────────────────────

results['metadata']['setdiff_upgrade'] = {
    'total_upgrades': len(upgrades),
    'match_types': {k: v for k, v in stats.items() if not k.startswith('from_')},
    'description': 'T7: sub_XXXXXX resolved via IDA DB + direct name matching in unclaimed class pool'
}
results['metadata']['confidence_distribution'] = new_dist

save_json(os.path.join(ROOT, 'tools', 'ida_match_results.json'), results)
print(f"\nSaved: ida_match_results.json")

save_json(os.path.join(ROOT, 'tools', 't7_upgrades.json'), {
    'total': len(upgrades),
    'stats': dict(stats),
    'upgrades': [{'key': k, 'old': o, 'new': n, 'addr': a, 'type': t} for k, o, n, a, t in upgrades]
})
print(f"Saved: t7_upgrades.json")
print("\nDone!")
