"""
Phase 3: Apply YRpp vt_entry renames to IDA.
Formula: vt_entry_XXX hex offset -> vtable[0] + offset -> read function pointer -> rename

Key discovery: All MI game classes (BuildingClass, TechnoClass, FootClass,
ObjectClass, MissionClass, InfantryClass, UnitClass) share the SAME complete
vtable[0] at 0x7E3EBC. MSVC creates one cumulative vtable for the hierarchy.
"""
import json, idc, idaapi

with open(r'D:\RA2YR_ReSource\tools\yrpp_full.json') as f:
    data = json.load(f)

# All game MI classes share the same vtable[0] (cumulative MSVC hierarchy)
GAME_MI_VTABLE = 0x7E3EBC
GAME_MI_CLASSES = [
    'BuildingClass', 'TechnoClass', 'FootClass', 'ObjectClass',
    'MissionClass', 'InfantryClass', 'UnitClass', 'AnimClass',
    'ParticleClass', 'RadioClass',
]

# Simple inheritance vtable addresses
SIMPLE_VTABLES = {
    'XSurface': 0x7E2104,
    'Surface': 0x7E2198,
    'DisplayClass': 0x7E6114,
    'ObjectTypeClass': 0x7E2868,
    'TechnoTypeClass': 0x7E2868,
    'MPBattleClass': 0x813F60,
}

total_renamed = 0
skipped = 0
failed = 0

for cls_name in data:
    cls = data[cls_name]
    vt_entries = cls.get('vt_entries', [])
    if not vt_entries:
        continue
    
    if cls_name in GAME_MI_CLASSES:
        vt_addr = GAME_MI_VTABLE
    elif cls_name in SIMPLE_VTABLES:
        vt_addr = SIMPLE_VTABLES[cls_name]
    else:
        print("SKIP %s: no vtable address (%d vt_entries)" % (cls_name, len(vt_entries)))
        skipped += len(vt_entries)
        continue
    
    for ve in vt_entries:
        offset = ve['offset']
        addr = vt_addr + offset
        func_ptr = idc.get_wide_dword(addr)
        
        if func_ptr < 0x401000 or func_ptr > 0x7E0000:
            print("FAIL %s vt_entry_%03X idx=%d: invalid ptr 0x%X" % (cls_name, offset, offset//4, func_ptr))
            failed += 1
            continue
        
        old_name = idc.get_name(func_ptr, idc.GN_VISIBLE) or idc.get_func_name(func_ptr) or ''
        
        # Extract clean method name
        method = old_name
        for sep in ['__', '::']:
            if sep in old_name:
                method = old_name.split(sep)[-1]
                break
        
        new_name = '%s::%s' % (cls_name, method)
        
        if old_name == new_name:
            continue
        
        if idc.set_name(func_ptr, new_name, idc.SN_NOWARN):
            total_renamed += 1
        else:
            print("FAIL %s -> %s" % (old_name, new_name))
            failed += 1

print("\n=== Summary ===")
print("Renamed: %d" % total_renamed)
print("Skipped: %d" % skipped)
print("Failed: %d" % failed)
