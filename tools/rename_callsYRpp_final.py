import idaapi, idc, idautils, ida_hexrays, json

def is_thiscall(ea):
    """Check assembly for ECX save pattern"""
    fn = idaapi.get_func(ea)
    addr = ea
    for _ in range(20):
        if addr >= fn.end_ea: break
        d = idc.GetDisasm(addr).lower()
        for reg in ['esi', 'edi', 'ebp', 'ebx']:
            if d.startswith('mov') and f'{reg}, ecx' in d:
                return True, reg
        # mov ecx, global → loading new value, not saving this
        addr = idc.next_head(addr)
    return False, None

def get_class_and_action(ea):
    """Comprehensive class/action detection"""
    fn = idaapi.get_func(ea)
    
    try:
        cfunc = ida_hexrays.decompile(ea)
        code = str(cfunc)
    except:
        code = ''
    
    # Get callees
    callees = set()
    strings = set()
    for head in idautils.Heads(ea, fn.end_ea):
        if idc.print_insn_mnem(head) == 'call':
            target = idc.get_operand_value(head, 0)
            if target != idaapi.BADADDR:
                callees.add(idc.get_name(target) or '')
        s = idc.get_strlit_contents(head)
        if s:
            try:
                decoded = s.decode('ascii', errors='replace')
                decoded = ''.join(c for c in decoded if c.isprintable()).strip()
                if len(decoded) >= 4:
                    strings.add(decoded)
            except: pass
    
    callee_str = ' '.join(callees)
    string_str = ' '.join(strings)
    
    # Class detection from callee names
    class_patterns = {
        'BuildingTypeClass': ['BuildingTypeClass::', 'BuildingTypeClass_'],
        'BuildingClass': ['BuildingClass::', 'Building_'],
        'HouseClass': ['HouseClass::', 'HouseTypeClass::', 'House::'],
        'TeamClass': ['TeamClass::', 'TeamTypeClass::'],
        'TriggerClass': ['TriggerClass::', 'TriggerTypeClass::'],
        'InfantryClass': ['InfantryClass::', 'InfantryTypeClass::'],
        'UnitClass': ['UnitClass::', 'UnitTypeClass::'],
        'AircraftClass': ['AircraftClass::', 'AircraftTypeClass::'],
        'TechnoClass': ['TechnoClass::', 'TechnoTypeClass::'],
        'FootClass': ['FootClass::'],
        'BulletClass': ['BulletClass::', 'BulletTypeClass::'],
        'AnimClass': ['AnimClass::', 'AnimTypeClass::'],
        'ParticleClass': ['ParticleClass::', 'ParticleSystemClass::'],
        'VoxelAnimClass': ['VoxelAnimClass::', 'VoxelAnim::'],
        'CellClass': ['CellClass::', 'Cell::'],
        'MapClass': ['MapClass::'],
        'TacticalClass': ['TacticalClass::', 'TacticalMapClass::'],
        'SidebarClass': ['SidebarClass::'],
        'RadarClass': ['RadarClass::'],
        'ObjectClass': ['ObjectClass::', 'ObjectTypeClass::'],
        'FactoryClass': ['FactoryClass::'],
        'LocomotionClass': ['LocomotionClass::', 'JumpjetLocomotionClass::'],
        'CCINIClass': ['CCINIClass::', 'INIClass::'],
        'CCFileClass': ['CCFileClass::', 'RawFileClass::', 'FileClass::'],
        'AbstractClass': ['AbstractClass::'],
        'RulesClass': ['RulesClass::'],
        'ScenarioClass': ['ScenarioClass::'],
        'SessionClass': ['SessionClass::'],
        'SuperWeaponTypeClass': ['SuperWeaponTypeClass::', 'SuperClass::'],
        'WeaponTypeClass': ['WeaponTypeClass::'],
        'WarheadTypeClass': ['WarheadTypeClass::'],
        'MissionClass': ['MissionClass::'],
        'TagClass': ['TagClass::'],
        'AirstrikeClass': ['AirstrikeClass::'],
        'Network': ['Network::', 'IPXManagerClass::', 'WinsockInterface::'],
        'EventClass': ['EventClass::'],
        'MouseClass': ['MouseClass::', 'WWMouseClass_Instance'],
    }
    
    best_class = None
    best_score = 0
    for cls, patterns in class_patterns.items():
        score = sum(1 for p in patterns if p in callee_str or p in code)
        if score > best_score:
            best_score = score
            best_class = cls
    
    # Action detection from callee names
    actions = [
        ('ReadBuildingTypes', ['FindOrCreate', 'BuildingType']),
        ('ReadInfantryTypes', ['FindOrCreate', 'InfantryType']),
        ('ReadUnitTypes', ['FindOrCreate', 'UnitType']),
        ('ReadAnimTypes', ['FindOrCreate', 'AnimType']),
        ('ReadTriggerTypes', ['FindOrCreate', 'TriggerType']),
        ('ReadTeamTypes', ['FindOrCreate', 'TeamType']),
        ('ReadSuperWeaponTypes', ['FindOrCreate', 'SuperWeapon']),
        ('LoadTypeFromINI', ['FindOrCreate']),
        ('ReadINI', ['ReadINI', 'GetString', 'GetKeyCount', 'GetInt']),
        ('WriteINI', ['SetBool', 'WriteDigest']),
        ('Construct', ['Construct', 'ctor']),
        ('Destruct', ['Destruct', 'Dtor', 'Cleanup']),
        ('Render', ['Draw', 'Blit', 'Redraw', 'Render']),
        ('Process', ['Process', 'Update']),
        ('Remove', ['Remove', 'Delete', 'Destroy']),
        ('Find', ['Find', 'Search', 'Lookup']),
        ('Initialize', ['Init', 'Initialize']),
        ('Reset', ['Reset', 'Clear']),
        ('Create', ['Create', 'Spawn']),
        ('Validate', ['Check', 'Validate', 'Verify']),
        ('Get', ['Get', 'Retrieve']),
        ('Set', ['Set', 'Assign']),
        ('Copy', ['Copy', 'Clone']),
        ('Add', ['Add', 'Append', 'Insert']),
        ('Save', ['Save', 'Write']),
        ('Load', ['Load', 'ReadFile', 'ReadEntire']),
        ('Convert', ['Convert', 'Transform']),
        ('Mark', ['Mark', 'Flag']),
        ('Lock', ['Lock']),
        ('Unlock', ['Unlock']),
        ('Open', ['Open']),
        ('Close', ['Close']),
    ]
    
    best_action = 'ProcessData'
    for action_name, keywords in actions:
        if all(kw.lower() in callee_str.lower() for kw in keywords):
            best_action = action_name
            break
    
    return best_class, best_action

# Main processing
results = []
for ea in range(0x401000, 0x7E1000):
    fn = idaapi.get_func(ea)
    if not fn or fn.start_ea != ea: continue
    n = idc.get_func_name(ea) or ''
    if not n.startswith('callsYRpp_'): continue
    sz = fn.end_ea - ea
    if sz < 80: continue  # Skip tiny COM stubs
    
    is_tc, this_reg = is_thiscall(ea)
    cls, action = get_class_and_action(ea)
    
    if not cls:
        cls = 'Helper'
    
    if is_tc:
        new_name = f"{cls}::{action}"
    else:
        new_name = f"{action}{cls}"
    
    results.append({'addr': f'0x{ea:08X}', 'old': n, 'new': new_name, 'thiscall': is_tc, 'size': sz})

# Apply
ok = 0
for r in results:
    try:
        addr = int(r['addr'], 16)
        old = idc.get_name(addr)
        if old and old.startswith('callsYRpp_'):
            idc.set_name(addr, r['new'], idc.SN_NOWARN)
            ok += 1
    except: pass

print(f"Applied: {ok}/{len(results)}")
print(f"Sample renames:")
for r in results[::max(1, len(results)//20)][:20]:
    tc = "thiscall" if r['thiscall'] else "global"
    print(f"  {r['addr']} {r['old']:25s} → {r['new']:40s} [{tc}]")
