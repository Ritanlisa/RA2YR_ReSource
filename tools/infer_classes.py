import json
from collections import defaultdict

def jaccard(a, b):
    if not a or not b:
        return 0.0
    intersection = len(a & b)
    union = len(a | b)
    return intersection / union if union > 0 else 0.0

def load_json(path):
    with open(path) as f:
        return json.load(f)

def save_json(path, data):
    with open(path, 'w') as f:
        json.dump(data, f, indent=2)

def infer_classes():
    print("Loading function profiles...")
    profiles = load_json('tools/type_infer/function_profiles.json')
    print(f"Loaded {len(profiles)} function profiles")

    funcs_with_data = {
        name: data for name, data in profiles.items()
        if data['members'] or data['vtable_slots']
    }
    print(f"Functions with members or vtable slots: {len(funcs_with_data)}")

    # Phase 1: Group by identical member sets
    member_set_to_funcs = defaultdict(list)
    for func_name, data in funcs_with_data.items():
        key = tuple(sorted(data['members']))
        member_set_to_funcs[key].append(func_name)

    classes = {}
    func_to_class = {}
    next_class_id = 0

    for mset_tuple, func_list in member_set_to_funcs.items():
        mset = set(mset_tuple)
        cid = next_class_id
        next_class_id += 1
        vtable_slots = set()
        calls = set()
        for fn in func_list:
            vtable_slots.update(funcs_with_data[fn]['vtable_slots'])
            calls.update(funcs_with_data[fn]['calls'])
        classes[cid] = {
            "funcs": set(func_list),
            "members": mset,
            "vtable_slots": vtable_slots,
            "calls": calls,
        }
        for fn in func_list:
            func_to_class[fn] = cid

    print(f"After grouping by identical member sets: {len(classes)} classes")

    # Build offset->classes index
    offset_to_classes = defaultdict(set)
    for cid, cdata in classes.items():
        for off in cdata['members']:
            offset_to_classes[off].add(cid)

    # Phase 2a: Merge >=80% Jaccard on member offsets
    print("Phase 2a: Merging classes with >=80% member overlap...")
    changed = True
    merge_round = 0
    max_rounds = 500
    while changed and merge_round < max_rounds:
        changed = False
        merge_round += 1
        class_ids = list(classes.keys())
        
        for cid in class_ids:
            if cid not in classes:
                continue
            ci = classes[cid]
            if not ci['members']:
                continue
            
            candidates = set()
            for off in ci['members']:
                candidates.update(offset_to_classes.get(off, set()))
            candidates.discard(cid)
            
            for cid_j in sorted(candidates):
                if cid_j not in classes:
                    continue
                cj = classes[cid_j]
                if not cj['members']:
                    continue
                
                sim = jaccard(ci['members'], cj['members'])
                if sim >= 0.80:
                    ci['funcs'].update(cj['funcs'])
                    for fn in cj['funcs']:
                        func_to_class[fn] = cid
                    ci['members'].update(cj['members'])
                    ci['vtable_slots'].update(cj['vtable_slots'])
                    ci['calls'].update(cj['calls'])
                    for off in cj['members']:
                        offset_to_classes[off].discard(cid_j)
                        offset_to_classes[off].add(cid)
                    del classes[cid_j]
                    changed = True
                    break
            if changed:
                break

    print(f"After Phase 2a: {len(classes)} classes ({merge_round} rounds)")

    # Phase 2b: Merge by rare offsets (<=5 classes per offset)
    print("Phase 2b: Rare offset merging...")
    offset_class_count = defaultdict(int)
    for cid, cdata in classes.items():
        for off in cdata['members']:
            offset_class_count[off] += 1

    rare_offsets = {off for off, cnt in offset_class_count.items() if 1 <= cnt <= 5}
    print(f"  Rare offsets (<=5 classes): {len(rare_offsets)}")

    rare_offset_to_classes = defaultdict(set)
    for cid, cdata in classes.items():
        rare_ci = cdata['members'] & rare_offsets
        for off in rare_ci:
            rare_offset_to_classes[off].add(cid)

    changed = True
    merge_round = 0
    while changed and merge_round < 200:
        changed = False
        merge_round += 1
        class_ids = list(classes.keys())
        
        for cid in class_ids:
            if cid not in classes:
                continue
            ci = classes[cid]
            rare_ci = ci['members'] & rare_offsets
            if len(rare_ci) < 3:
                continue
            
            candidates = set()
            for off in rare_ci:
                candidates.update(rare_offset_to_classes.get(off, set()))
            candidates.discard(cid)
            
            for cid_j in sorted(candidates):
                if cid_j not in classes:
                    continue
                cj = classes[cid_j]
                rare_cj = cj['members'] & rare_offsets
                shared_rare = rare_ci & rare_cj
                
                if len(shared_rare) >= 3:
                    ci['funcs'].update(cj['funcs'])
                    for fn in cj['funcs']:
                        func_to_class[fn] = cid
                    ci['members'].update(cj['members'])
                    ci['vtable_slots'].update(cj['vtable_slots'])
                    ci['calls'].update(cj['calls'])
                    for off in cj['members'] & rare_offsets:
                        rare_offset_to_classes[off].discard(cid_j)
                        rare_offset_to_classes[off].add(cid)
                    del classes[cid_j]
                    changed = True
                    break
            if changed:
                break

    print(f"After Phase 2b: {len(classes)} classes ({merge_round} rounds)")

    # Phase 2c: Merge by >=70% vtable slot overlap
    print("Phase 2c: Vtable slot overlap merging...")
    vtable_index = defaultdict(set)
    for cid, cdata in classes.items():
        for slot in cdata['vtable_slots']:
            vtable_index[slot].add(cid)

    changed = True
    merge_round = 0
    while changed and merge_round < 100:
        changed = False
        merge_round += 1
        class_ids = list(classes.keys())
        
        for cid in class_ids:
            if cid not in classes:
                continue
            ci = classes[cid]
            if len(ci['vtable_slots']) < 3:
                continue
            
            candidates = set()
            for slot in ci['vtable_slots']:
                candidates.update(vtable_index.get(slot, set()))
            candidates.discard(cid)
            
            for cid_j in sorted(candidates):
                if cid_j not in classes:
                    continue
                cj = classes[cid_j]
                if len(cj['vtable_slots']) < 3:
                    continue
                
                sim = jaccard(ci['vtable_slots'], cj['vtable_slots'])
                if sim >= 0.70:
                    ci['funcs'].update(cj['funcs'])
                    for fn in cj['funcs']:
                        func_to_class[fn] = cid
                    ci['members'].update(cj['members'])
                    ci['vtable_slots'].update(cj['vtable_slots'])
                    ci['calls'].update(cj['calls'])
                    for slot in cj['vtable_slots']:
                        vtable_index[slot].discard(cid_j)
                        vtable_index[slot].add(cid)
                    del classes[cid_j]
                    changed = True
                    break
            if changed:
                break

    print(f"After Phase 2c: {len(classes)} classes ({merge_round} rounds)")

    # Build output
    output = {}
    for cid, cdata in sorted(classes.items()):
        output[f"class_{cid}"] = {
            "members": sorted(cdata['members']),
            "vtable_slots": sorted(cdata['vtable_slots']),
            "calls": sorted(cdata['calls']),
            "funcs": sorted(cdata['funcs'])
        }

    save_json('tools/type_infer/candidate_classes.json', output)

    func_counts = [len(c['funcs']) for c in output.values()]
    print(f"\nOutput: tools/type_infer/candidate_classes.json")
    print(f"Candidate classes: {len(output)}")
    print(f"  Single-function classes: {sum(1 for c in output.values() if len(c['funcs']) == 1)}")
    print(f"  Multi-function classes: {sum(1 for c in output.values() if len(c['funcs']) > 1)}")
    print(f"  Max functions in one class: {max(func_counts) if func_counts else 0}")
    
    return output, profiles


def verify_patterns(output, profiles):
    print("\n=== Known Pattern Verification ===\n")
    
    # 1. WalkLocomotion / JumpjetLocomotion
    print("1. WalkLocomotion / JumpjetLocomotion:")
    loco_map = {}
    for cls_name, cdata in output.items():
        for f in cdata['funcs']:
            if 'WalkLocomotion' in f:
                loco_map['WalkLocomotion'] = cls_name
            if 'JumpjetLocomotion' in f:
                loco_map['JumpjetLocomotion'] = cls_name
    
    if 'WalkLocomotion' in loco_map and 'JumpjetLocomotion' in loco_map:
        cw, cj = loco_map['WalkLocomotion'], loco_map['JumpjetLocomotion']
        if cw == cj:
            print(f"   [MERGED] in {cw}")
        else:
            print(f"   [SEPARATE] {cw} vs {cj}")
            msim = jaccard(set(output[cw]['members']), set(output[cj]['members']))
            vsim = jaccard(set(output[cw]['vtable_slots']), set(output[cj]['vtable_slots']))
            print(f"      member J={msim:.3f}  vtable J={vsim:.3f}")
    else:
        print("   Not found in classes, searching profiles:")
        for f in sorted(profiles):
            if 'Locomotion' in f:
                p = profiles[f]
                print(f"   {f:45s} members={p['members']}")

    # 2. Voxel chain
    print("\n2. Voxel chain:")
    for cls_name, cdata in sorted(output.items()):
        voxel_funcs = [f for f in cdata['funcs'] if 'Voxel' in f]
        if voxel_funcs:
            print(f"   {cls_name}: {voxel_funcs}")
            print(f"      members={len(cdata['members'])} vtbl={len(cdata['vtable_slots'])}")

    # 3. COM interface slots 129-156
    print("\n3. COM interface (slots 129-156):")
    for cls_name, cdata in sorted(output.items()):
        in_range = [s for s in cdata['vtable_slots'] if 129 <= s <= 156]
        if len(in_range) >= 10:
            print(f"   {cls_name}: {len(in_range)} slots ({min(in_range)}-{max(in_range)})")
    
    # Show overall vtable slot range
    all_slots = set()
    for cdata in output.values():
        all_slots.update(cdata['vtable_slots'])
    in_range = sorted([s for s in all_slots if 129 <= s <= 156])
    print(f"   Global slots in 129-156: {len(in_range)} = {in_range}")


if __name__ == '__main__':
    output, profiles = infer_classes()
    verify_patterns(output, profiles)
