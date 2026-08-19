#!/usr/bin/env python3
"""Phase A+B+C: Comprehensive CSP class rename analysis"""

import json
import re
import sys
from collections import defaultdict, Counter

# ─── Load data ───────────────────────────────────────────────────────────────

print("Loading data...")

with open(r'H:\RA2YR_ReSource\tools\csp\full_report\csp_classes.json') as f:
    classes_data = json.load(f)
cls = classes_data['classes']

with open(r'H:\RA2YR_ReSource\tools\csp\full_report\csp_functions.json') as f:
    funcs_data = json.load(f)
funcs = funcs_data['functions']

with open(r'H:\RA2YR_ReSource\tools\csp\class_rename_map.json') as f:
    existing_map = json.load(f)

# ─── Build reverse maps ──────────────────────────────────────────────────────

existing_mapped = set(existing_map.keys())
existing_names = set(existing_map.values())
all_classes = set(cls.keys())

print(f"Existing mappings: {len(existing_map)}")
print(f"Total classes: {len(all_classes)}")
print(f"Unmapped: {len(all_classes - existing_mapped)}")

# Build reverse lookup: name -> list of Class_N
name_to_classes = defaultdict(list)
for cn, name in existing_map.items():
    name_to_classes[name].append(cn)

# ─── Phase A: Extract prefix patterns from vars ──────────────────────────────
# Vars are like "Class_50::ProcessAnimation.this.member(0xNNN)"
# For unnamed classes, check what named classes they are accessed by
# This doesn't directly give us a name, but helps with relationships

var_prefix_counts = defaultdict(lambda: defaultdict(int))
for cid, cdata in cls.items():
    for v in cdata.get('vars', []):
        if '::' in v:
            prefix = v.split('::')[0]
            var_prefix_counts[cid][prefix] += 1

# ─── Phase B: Function name analysis ────────────────────────────────────────
# Functions named like Class_N::MethodName or Class_N_MethodName
# If multiple functions share same Class_N and have same ClassName_ prefix → evidence

print("\n=== Phase B: Function name analysis ===")

# Collect all function names per class
func_names_per_class = defaultdict(list)
for addr, fdata in funcs.items():
    inferred_class = fdata.get('inferred_real_class', '')
    inferred_name = fdata.get('inferred_name', '')
    original_name = fdata.get('original_name', '')
    func_names_per_class[inferred_class].append({
        'inferred_name': inferred_name,
        'original_name': original_name,
        'address': addr
    })

# For each unmapped class, check if any of its functions use prefix patterns
# that match known class names
unmapped_classes = sorted(all_classes - existing_mapped, key=lambda x: int(x.split('_')[1]))

# Check for function name patterns that reveal class identity
# Known class naming patterns from the binary
known_patterns = {
    'AbstractClass': ['AbstractClass'],
    'AircraftClass': ['AircraftClass', 'Aircraft'],
    'AircraftTypeClass': ['AircraftTypeClass', 'AircraftType'],
    'AnimClass': ['AnimClass', 'Anim'],
    'AnimTypeClass': ['AnimTypeClass', 'AnimType'],
    'BuildingClass': ['BuildingClass', 'Building'],
    'BuildingTypeClass': ['BuildingTypeClass', 'BuildingType'],
    'BulletClass': ['BulletClass', 'Bullet'],
    'BulletTypeClass': ['BulletTypeClass', 'BulletType'],
    'CellClass': ['CellClass', 'Cell'],
    'FootClass': ['FootClass', 'Foot'],
    'HouseClass': ['HouseClass', 'House'],
    'InfantryClass': ['InfantryClass', 'Infantry'],
    'JumpjetLocomotionClass': ['JumpjetLocomotionClass', 'JumpjetLocomotion'],
    'MissionClass': ['MissionClass', 'Mission'],
    'ObjectClass': ['ObjectClass', 'Object'],
    'ObjectTypeClass': ['ObjectTypeClass', 'ObjectType'],
    'ParticleTypeClass': ['ParticleTypeClass', 'ParticleType'],
    'SidebarClass': ['SidebarClass', 'Sidebar'],
    'SuperClass': ['SuperClass', 'Super'],
    'SuperWeapon': ['SuperWeapon', 'SuperWeapon'],
    'TacticalClass': ['TacticalClass', 'Tactical'],
    'TacticalMap': ['TacticalMap'],
    'TagTypeClass': ['TagTypeClass', 'TagType'],
    'TechnoClass': ['TechnoClass', 'Techno'],
    'TechnoTypeClass': ['TechnoTypeClass', 'TechnoType'],
    'TerrainClass': ['TerrainClass', 'Terrain'],
    'TeamTypeClass': ['TeamTypeClass', 'TeamType'],
    'UnitClass': ['UnitClass', 'Unit'],
    'VoxelAnimTypeClass': ['VoxelAnimTypeClass', 'VoxelAnimType'],
    'TActionClass': ['TActionClass'],
    'MouseClass': ['MouseClass', 'Mouse'],
    'DisplayClass': ['DisplayClass', 'Display'],
    'MapClass': ['MapClass', 'Map'],
    'RadarClass': ['RadarClass', 'Radar'],
    'LayerClass': ['LayerClass', 'Layer'],
}

# For each class, find function evidence
class_function_evidence = defaultdict(list)
class_original_names = defaultdict(set)

for cid in unmapped_classes:
    fnames = func_names_per_class.get(cid, [])
    orig_names = set()
    for fn in fnames:
        on = fn['original_name']
        # original_name is like "Class_171::Update_1"
        if '::' in on:
            orig_names.add(on)
    class_original_names[cid] = orig_names
    
    # Check if function names follow ClassName_Method pattern
    all_orig = [fn['original_name'] for fn in fnames]
    for on in all_orig[:20]:  # limit
        pass

# ─── Phase B Extended: Try to match via known function patterns ──────────────
# Functions might reference already-named classes through their names
# E.g., if Class_170 has a function called "ProcessAttack" and Class_484 (already mapped
# to BuildingTypeClass) calls it, then Class_170 might relate to BuildingTypeClass

# Actually, let me focus on valuable patterns
# Check if the class has functions that follow common naming conventions

# Analyze each unmapped class
results = {}
for cid in unmapped_classes:
    cdata = cls[cid]
    name_votes = Counter()
    
    # 1. Check real_name field
    real_name = cdata.get('real_name', 'unknown')
    if real_name != 'unknown' and real_name != cid:
        if real_name in existing_map:
            mapped_name = existing_map[real_name]
            results[cid] = {
                'method': 'real_name_chain',
                'name': mapped_name,
                'confidence': 'high',
                'reason': f"real_name={real_name} -> {mapped_name}"
            }
            continue
    
    # 2. Check if var_prefixes reference a class that's mapped to a specific name
    # This doesn't give us the class's OWN name, but helps with relationships
    prefixes = var_prefix_counts.get(cid, {})
    
    # Look for patterns where this class has vars with a specific prefix
    # that correlates with function names
    
    # 3. Check for *Class suffix in function names
    fnames = func_names_per_class.get(cid, [])
    inferred_names = [fn['inferred_name'] for fn in fnames]
    original_names = [fn['original_name'] for fn in fnames]
    
    # Check if the function names suggest this class is equivalent to a named class
    # If functions of this class call methods on already-named classes, that's weak evidence
    
    # 4. Function name analysis
    # For csp_functions, inferred_name is like "Class_170::SomeMethod"
    # If we see many functions matching patterns like "Class_170::GetCoords" and
    # "Class_2::GetCoords" is mapped to "HouseClass::GetCoords", that's evidence
    # Class_170 might be a HouseClass variant
    
    # Let me specifically look at the function names
    if not results.get(cid):
        # Collect all the methods this class has
        methods = set()
        for fn in fnames:
            iname = fn['inferred_name']
            if '::' in iname:
                method = iname.split('::', 1)[1]
                methods.add(method)
        
        # Check if there are interesting function names
        has_interesting_funcs = bool(methods)
        
        # Check method name patterns for clues
        class_methods = list(methods)
        
        # Check what this class inherits from
        inherited = cdata.get('inherited_from', [])
        inherited_mapped = [existing_map.get(p, p) for p in inherited if p in existing_map]
        
        results[cid] = {
            'method': 'pending',
            'name': None,
            'confidence': None,
            'methods': class_methods[:5],
            'inherited_from': inherited,
            'inherited_mapped': inherited_mapped,
            'var_prefixes': list(prefixes.keys())[:5],
        }

# ─── Phase C: RTTI real_name analysis ───────────────────────────────────────
print("\n=== Phase C: Real_name chain analysis ===")

real_name_chains = {}
for cid, cdata in cls.items():
    rn = cdata.get('real_name', 'unknown')
    if rn != 'unknown' and rn != cid:
        # Follow the chain
        chain = [cid]
        cur = rn
        while cur in cls and cur != 'unknown':
            chain.append(cur)
            next_rn = cls[cur].get('real_name', 'unknown')
            if next_rn == cur or next_rn == 'unknown':
                break
            cur = next_rn
        real_name_chains[cid] = chain
        
        # Check if any in chain is mapped
        mapped_links = [existing_map.get(c, None) for c in chain]
        non_none = [m for m in mapped_links if m]
        
        print(f"  {cid}: real_name chain {' -> '.join(chain)}")
        if non_none:
            print(f"    -> mapped: {non_none[0]}")

# ─── Summary ─────────────────────────────────────────────────────────────────
print(f"\n=== Summary ===")
print(f"Total unmapped classes: {len(unmapped_classes)}")

# Count pending that could be named
pending_count = 0
named_count = 0
for cid in unmapped_classes:
    r = results.get(cid, {})
    if r.get('name'):
        named_count += 1
    else:
        pending_count += 1

print(f"Newly named: {named_count}")
print(f"Still pending: {pending_count}")

# Save phase A+B+C results
output = {}
for cid in unmapped_classes:
    r = results.get(cid, {})
    if r.get('name'):
        output[cid] = {
            'name': r['name'],
            'confidence': r['confidence'],
            'reason': r.get('reason', '')
        }
    else:
        output[cid] = {
            'name': None,
            'methods_count': len(class_original_names.get(cid, [])),
            'has_inherited': bool(cls[cid].get('inherited_from', [])),
            'inherited_mapped': r.get('inherited_mapped', []),
            'sample_methods': r.get('methods', [])[:3],
            'var_prefixes': r.get('var_prefixes', []),
        }

with open(r'H:\RA2YR_ReSource\tools\phase_abc_results.json', 'w') as f:
    json.dump(output, f, indent=2)

print(f"\nPhase A+B+C results saved to tools/phase_abc_results.json")
