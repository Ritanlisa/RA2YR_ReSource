import idaapi, idc, idautils, ida_hexrays, json

def get_class_from_decompiled(ea):
    """More robust class detection"""
    try:
        cfunc = ida_hexrays.decompile(ea)
        code = str(cfunc)
    except:
        return None
    
    # Look for member access patterns: this+OFFSET
    import re
    # Look for vtable references
    vtable_patterns = [
        ('??_7BuildingClass@@6B@', 'BuildingClass'),
        ('DSurface_Vtable', 'DSurface'),
        ('??_7RulesClass@@6B@', 'RulesClass'),
        ('??_7HouseClass@@6B@', 'HouseClass'),
        ('??_7TechnoClass@@6B@', 'TechnoClass'),
        ('??_7CCINIClass@@6B@', 'CCINIClass'),
        ('??_7ScenarioClass@@6B@', 'ScenarioClass'),
        ('??_7CCFileClass@@6B@', 'CCFileClass'),
        ('??_7ObjectClass@@6B@', 'ObjectClass'),
        ('??_7AbstractClass@@6B@', 'AbstractClass'),
        ('??_7CellClass@@6B@', 'CellClass'),
        ('??_7MapClass@@6B@', 'MapClass'),
        ('??_7TeamClass@@6B@', 'TeamClass'),
        ('??_7BulletClass@@6B@', 'BulletClass'),
        ('??_7InfantryClass@@6B@', 'InfantryClass'),
        ('??_7UnitClass@@6B@', 'UnitClass'),
        ('??_7AnimClass@@6B@', 'AnimClass'),
        ('??_7ParticleClass@@6B@', 'ParticleClass'),
        ('??_7SidebarClass@@6B@', 'SidebarClass'),
        ('??_7RadarClass@@6B@', 'RadarClass'),
        ('??_7TriggerClass@@6B@', 'TriggerClass'),
        ('??_7FootClass@@6B@', 'FootClass'),
        ('??_7AircraftClass@@6B@', 'AircraftClass'),
        ('??_7LocomotionClass@@6B@', 'LocomotionClass'),
        ('??_7VoxelAnimClass@@6B@', 'VoxelAnimClass'),
        ('??_7DisplayClass@@6B@', 'DisplayClass'),
        ('??_7WeaponTypeClass@@6B@', 'WeaponTypeClass'),
        ('??_7WarheadTypeClass@@6B@', 'WarheadTypeClass'),
        ('??_7SuperWeaponTypeClass@@6B@', 'SuperClass'),
        ('??_7MissionClass@@6B@', 'MissionClass'),
        ('??_7TagClass@@6B@', 'TagClass'),
        ('??_7FactoryClass@@6B@', 'FactoryClass'),
        ('??_7ToggleClass@@6B@', 'ToggleClass'),
        ('??_7ShapeButtonClass@@6B@', 'ShapeButtonClass'),
        ('??_7SliderClass@@6B@', 'SliderClass'),
        ('??_7ListClass@@6B@', 'ListClass'),
    ]
    
    for vtable, cls_name in vtable_patterns:
        if vtable in code:
            return cls_name
    
    # Check callee names for class hints
    for head in idautils.Heads(ea, idaapi.get_func(ea).end_ea):
        if idc.print_insn_mnem(head) == 'call':
            target = idc.get_operand_value(head, 0)
            if target == idaapi.BADADDR: continue
            cn = idc.get_name(target) or ''
            for vtable, cls_name in vtable_patterns:
                if cls_name in cn:
                    return cls_name
    
    return None

def get_action(ea):
    """Get action from callee names"""
    callees = set()
    for head in idautils.Heads(ea, idaapi.get_func(ea).end_ea):
        if idc.print_insn_mnem(head) == 'call':
            target = idc.get_operand_value(head, 0)
            if target == idaapi.BADADDR: continue
            callees.add((idc.get_name(target) or '').lower())
    
    callee_str = ' '.join(callees)
    
    if 'findorcreate' in callee_str: return 'LoadType'
    if 'readini' in callee_str or 'getstring' in callee_str: return 'ReadINI'
    if 'getkeycount' in callee_str: return 'ReadINIList'
    if 'construct' in callee_str: return 'Construct'
    if 'destroy' in callee_str or 'cleanup' in callee_str: return 'Cleanup'
    if 'reset' in callee_str: return 'Reset'
    if 'update' in callee_str: return 'Update'
    if 'draw' in callee_str or 'render' in callee_str: return 'Render'
    if 'blit' in callee_str: return 'Blit'
    if 'lock' in callee_str: return 'LockSurface'
    if 'create' in callee_str: return 'Create'
    if 'init' in callee_str: return 'Initialize'
    if 'process' in callee_str: return 'Process'
    if 'mark' in callee_str: return 'MarkUpdate'
    if 'copy' in callee_str: return 'Copy'
    if 'save' in callee_str: return 'Save'
    if 'load' in callee_str: return 'Load'
    if 'check' in callee_str or 'validate' in callee_str: return 'Validate'
    if 'set' in callee_str: return 'Set'
    if 'get' in callee_str: return 'Get'
    if 'remove' in callee_str: return 'Remove'
    if 'add' in callee_str: return 'Add'
    if 'convert' in callee_str: return 'Convert'
    if 'seek' in callee_str: return 'Seek'
    if 'open' in callee_str: return 'Open'
    if 'close' in callee_str: return 'Close'
    return 'Process'

# Main
renames = []
for ea in range(0x401000, 0x7E1000):
    fn = idaapi.get_func(ea)
    if not fn or fn.start_ea != ea: continue
    n = idc.get_func_name(ea) or ''
    if not n.startswith('callsYRpp_'): continue
    sz = fn.end_ea - ea
    if sz < 60: continue  # Skip tiny stubs
    
    cls = get_class_from_decompiled(ea)
    if not cls: continue
    
    action = get_action(ea)
    renames.append({'addr': f'0x{ea:08X}', 'old': n, 'new': f'{cls}::{action}', 'size': sz})

renames.sort(key=lambda x: -x['size'])
print(f"Found {len(renames)} renames")

# Apply in batches of 50
for i in range(0, len(renames), 50):
    batch = renames[i:i+50]
    ok = 0
    for r in batch:
        try:
            addr = int(r['addr'], 16)
            old = idc.get_name(addr)
            if old and old.startswith('callsYRpp_'):
                idc.set_name(addr, r['new'], idc.SN_NOWARN)
                ok += 1
        except: pass
    print(f"Batch {i//50+1}: {ok}/{len(batch)} renamed")

print(f"\nFinal check: callsYRpp_ remaining = ...")
