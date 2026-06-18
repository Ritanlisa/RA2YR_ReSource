import json, idc, idaapi

# Cross-reference YRpp member names with IDA struct names
with open('D:/RA2YR_ReSource/tools/yrpp_full.json') as f:
    yrpp = json.load(f)

# Check key classes
classes_to_check = ['BuildingTypeClass', 'TechnoTypeClass', 'WarheadTypeClass', 'WeaponTypeClass']

total_checks = 0
mismatches = 0
for cls_name in classes_to_check:
    if cls_name not in yrpp:
        continue
    
    yrpp_members = yrpp[cls_name].get('members', [])
    
    # Get IDA struct
    sid = idc.get_struc_id(cls_name)
    if sid == idaapi.BADADDR:
        print(f"{cls_name}: NOT IN IDA")
        continue
    
    for m in yrpp_members:
        offset = m['offset']
        yrpp_name = m['name']
        total_checks += 1
        
        # Get IDA member at this offset
        mid = idc.get_member_id(sid, offset)
        if mid == idaapi.BADADDR:
            # Member might be inside gap0 padding
            continue
        
        ida_name = idc.get_member_name(sid, offset)
        if ida_name and ida_name != yrpp_name:
            # Special case: gap0 covers inheritance
            if ida_name == 'gap0':
                continue
            if ida_name.startswith('field_') or ida_name.startswith('align_'):
                print(f"  {cls_name} +{offset:4d}: YRpp={yrpp_name:30s} IDA={ida_name}")
                mismatches += 1

print(f"\nTotal checks: {total_checks}")
print(f"Mismatches (unnamed/gap fields): {mismatches}")
