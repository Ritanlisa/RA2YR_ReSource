import idaapi, idc, idautils, ida_hexrays

# Final robust pass - v3
# Handles functions that don't have vtable patterns
# by checking callee names and global variable access

def get_best_class(ea, code, callees):
    # Known global variable to class mappings
    global_class_map = {
        'WWMouseClass_Instance': 'MouseClass',
        'TacticalClass_Instance': 'TacticalClass',
        'RulesClass_Instance': 'RulesClass',
        'ScenarioClass_Instance': 'ScenarioClass',
        'MapClass_Instance': 'MapClass',
        'HouseClass_Player': 'HouseClass',
        'DSurface_Primary': 'DSurface',
        'DSurface_Hidden': 'DSurface',
        'g_NetworkInterface': 'Network',
        'g_EventManager': 'EventClass',
        'g_NetworkManager': 'Network',
        'g_BinkMoviePlayer': 'BinkMovieClass',
        'g_hWnd': 'Window',
        'g_MixerState': 'Audio',
        'g_lpDirectDraw7': 'DDraw',
    }
    
    # Check for known __thiscall patterns from callee names
    callee_str = ' '.join(callees)
    
    patterns = [
        ('BulletClass::', 'BulletClass'), ('AnimClass::', 'AnimClass'),
        ('InfantryClass::', 'InfantryClass'), ('UnitClass::', 'UnitClass'),
        ('AircraftClass::', 'AircraftClass'), ('FootClass::', 'FootClass'),
        ('TechnoClass::', 'TechnoClass'), ('BuildingClass::', 'BuildingClass'),
        ('BuildingTypeClass::', 'BuildingClass'), ('ObjectClass::', 'ObjectClass'),
        ('ScenarioClass::', 'ScenarioClass'), ('HouseClass::', 'HouseClass'),
        ('TeamClass::', 'TeamClass'), ('TriggerClass::', 'TriggerClass'),
        ('TacticalClass::', 'TacticalClass'), ('MapClass::', 'MapClass'),
        ('CellClass::', 'CellClass'), ('SidebarClass::', 'SidebarClass'),
        ('RadarClass::', 'RadarClass'), ('FactoryClass::', 'FactoryClass'),
        ('MissionClass::', 'MissionClass'), ('WarheadTypeClass::', 'WarheadTypeClass'),
        ('WeaponTypeClass::', 'WeaponTypeClass'), ('RulesClass::', 'RulesClass'),
        ('SessionClass::', 'SessionClass'), ('LocomotionClass::', 'LocomotionClass'),
        ('VoxelAnimClass::', 'VoxelAnimClass'), ('ParticleClass::', 'ParticleClass'),
        ('AirstrikeClass::', 'AirstrikeClass'), ('MouseClass::', 'MouseClass'),
        ('DisplayClass::', 'DisplayClass'), ('Tooltip::', 'TooltipClass'),
        ('MessageListClass::', 'MessageListClass'), ('AudioController::', 'AudioController'),
        ('ScoreScreen::', 'ScoreScreenClass'), ('CreditsPower::', 'CreditsPowerClass'),
        ('TagClass::', 'TagClass'), ('ScriptClass::', 'ScriptClass'),
        ('PlanningNodeClass::', 'PlanningNodeClass'), ('Movie::', 'MovieClass'),
        ('LoadingScreen::', 'LoadingScreenClass'), ('Options::', 'OptionsClass'),
        ('MainMenu::', 'MainMenuClass'), ('Campaign::', 'CampaignClass'),
        ('Multiplayer::', 'MultiplayerClass'), ('Skirmish::', 'SkirmishClass'),
    ]
    
    for pattern, cls in patterns:
        if pattern in callee_str or pattern in code:
            return cls
    
    # Check global variables
    for gvar, cls in global_class_map.items():
        if gvar in callee_str or gvar in code:
            return cls
    
    return None


renames = []
for ea in range(0x401000, 0x7E1000):
    fn = idaapi.get_func(ea)
    if not fn or fn.start_ea != ea: continue
    n = idc.get_func_name(ea) or ''
    if not n.startswith('callsYRpp_'): continue
    sz = fn.end_ea - ea
    if sz < 50: continue
    
    try:
        cfunc = ida_hexrays.decompile(ea)
        code = str(cfunc)
    except:
        continue
    
    callees = set()
    for head in idautils.Heads(ea, fn.end_ea):
        if idc.print_insn_mnem(head) == 'call':
            target = idc.get_operand_value(head, 0)
            if target != idaapi.BADADDR:
                callees.add(idc.get_name(target) or '')
    
    cls = get_best_class(ea, code, callees)
    if not cls: continue
    
    # Simple action name from callees
    callee_str = ' '.join(callees).lower()
    if 'readini' in callee_str or 'getstring' in callee_str: action = 'ReadINI'
    elif 'findorcreate' in callee_str: action = 'LoadType'
    elif 'getkeycount' in callee_str: action = 'ReadList'
    elif 'construct' in callee_str: action = 'Construct'
    elif 'cleanup' in callee_str or 'destroy' in callee_str: action = 'Cleanup'
    elif 'reset' in callee_str: action = 'Reset'
    elif 'update' in callee_str: action = 'Update'
    elif 'draw' in callee_str or 'render' in callee_str: action = 'Render'
    elif 'create' in callee_str: action = 'Create'
    elif 'init' in callee_str: action = 'Initialize'
    elif 'load' in callee_str: action = 'Load'
    elif 'save' in callee_str: action = 'Save'
    elif 'copy' in callee_str: action = 'Copy'
    elif 'mark' in callee_str: action = 'Mark'
    elif 'process' in callee_str: action = 'Process'
    elif 'check' in callee_str or 'validate' in callee_str: action = 'Validate'
    elif 'set' in callee_str: action = 'Set'
    elif 'get' in callee_str: action = 'Get'
    elif 'find' in callee_str: action = 'Find'
    elif 'remove' in callee_str: action = 'Remove'
    elif 'add' in callee_str: action = 'Add'
    elif 'open' in callee_str: action = 'Open'
    elif 'close' in callee_str: action = 'Close'
    elif 'lock' in callee_str: action = 'Lock'
    elif 'blit' in callee_str: action = 'Blit'
    elif 'convert' in callee_str: action = 'Convert'
    else: action = 'Process'
    
    renames.append({'addr': f'0x{ea:08X}', 'old': n, 'new': f'{cls}::{action}', 'size': sz})

renames.sort(key=lambda x: -x['size'])
print(f"Found {len(renames)} renames")

batch_size = 60
for i in range(0, len(renames), batch_size):
    batch = renames[i:i+batch_size]
    ok = 0
    for r in batch:
        try:
            addr = int(r['addr'], 16)
            old = idc.get_name(addr)
            if old and old.startswith('callsYRpp_'):
                idc.set_name(addr, r['new'], idc.SN_NOWARN)
                ok += 1
        except: pass
    print(f"Batch {i//batch_size+1}: {ok}/{len(batch)} renamed")
