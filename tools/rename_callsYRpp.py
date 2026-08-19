"""
Auto-rename all callsYRpp_* functions based on decompilation analysis.
Writes rename batch to rename_batch.json for review before applying.
"""
import idaapi, idc, idautils, ida_hexrays, json, re

# === Pattern detection ===

def get_decompiled_text(ea):
    """Get decompiled C code as string"""
    try:
        cfunc = ida_hexrays.decompile(ea)
        return str(cfunc) if cfunc else ''
    except:
        return ''

def get_callees(ea):
    """Get named callee functions"""
    fn = idaapi.get_func(ea)
    callees = []
    for head in idautils.Heads(fn.start_ea, fn.end_ea):
        if idc.print_insn_mnem(head) == 'call':
            target = idc.get_operand_value(head, 0)
            if target == idaapi.BADADDR: continue
            name = idc.get_name(target) or ''
            if name and not name.startswith(('sub_', 'callsYRpp_', 'nullsub_', 'j_', '__imp_')):
                callees.append(name)
    return list(set(callees))

def get_string_refs(ea):
    """Get meaningful string references"""
    fn = idaapi.get_func(ea)
    strings = set()
    for head in idautils.Heads(fn.start_ea, fn.end_ea):
        s = idc.get_strlit_contents(head)
        if s:
            try:
                decoded = s.decode('ascii', errors='replace')
                decoded = ''.join(c for c in decoded if c.isprintable()).strip()
                if len(decoded) >= 3 and not decoded.startswith('%'):
                    strings.add(decoded)
            except:
                pass
    return strings

def get_class_from_code(code, callees):
    """Heuristically determine class name from code patterns"""
    cls = None
    
    # Check for known vtable string patterns in decompiled code
    vtable_candidates = [
        ('BuildingClass', ['BuildingClass::', 'BuildingTypeClass::']),
        ('TechnoClass', ['TechnoClass::', 'TechnoTypeClass::']),
        ('FootClass', ['FootClass::']),
        ('UnitClass', ['UnitClass::', 'UnitTypeClass::']),
        ('InfantryClass', ['InfantryClass::', 'InfantryTypeClass::']),
        ('AircraftClass', ['AircraftClass::', 'AircraftTypeClass::']),
        ('HouseClass', ['HouseClass::', 'HouseTypeClass::']),
        ('RulesClass', ['RulesClass::', 'RulesClass_Instance']),
        ('ScenarioClass', ['ScenarioClass::', 'ScenarioClass_Instance']),
        ('TeamClass', ['TeamClass::', 'TeamTypeClass::']),
        ('TriggerClass', ['TriggerClass::', 'TriggerTypeClass::']),
        ('BulletClass', ['BulletClass::', 'BulletTypeClass::']),
        ('AnimClass', ['AnimClass::', 'AnimTypeClass::']),
        ('ParticleClass', ['ParticleClass::', 'ParticleSystemClass::']),
        ('CellClass', ['CellClass::']),
        ('MapClass', ['MapClass::', 'MapClass_Instance']),
        ('TacticalClass', ['TacticalClass::', 'TacticalMapClass::']),
        ('SidebarClass', ['SidebarClass::']),
        ('WeaponTypeClass', ['WeaponTypeClass::']),
        ('WarheadTypeClass', ['WarheadTypeClass::']),
        ('SuperWeaponTypeClass', ['SuperClass::', 'SuperWeaponTypeClass::']),
        ('MouseClass', ['MouseClass::', 'WWMouseClass_Instance']),
        ('DisplayClass', ['DisplayClass::']),
        ('LocomotionClass', ['LocomotionClass::', 'JumpjetLocomotionClass::']),
        ('DSurface', ['DSurface::', 'DSurface_Vtable']),
        ('CCFileClass', ['CCFileClass::', 'RawFileClass::']),
        ('CCINIClass', ['CCINIClass::', 'INIClass::']),
        ('MissionClass', ['MissionClass::']),
        ('TagClass', ['TagClass::']),
        ('FactoryClass', ['FactoryClass::']),
        ('ObjectClass', ['ObjectClass::']),
        ('AbstractClass', ['AbstractClass::']),
        ('SessionClass', ['SessionClass::']),
        ('AirstrikeClass', ['AirstrikeClass::']),
        ('MPBattleClass', ['MPBattleClass::']),
        ('MovieClass', ['MovieClass::', 'Movie::']),
        ('MessageListClass', ['MessageListClass::']),
        ('RadarClass', ['RadarClass::']),
        ('TooltipClass', ['TooltipClass::', 'Tooltip::']),
        ('EventClass', ['EventClass::']),
        ('AudioController', ['AudioController::']),
        ('VoxelAnimClass', ['VoxelAnimClass::']),
    ]
    
    matches = []
    for cls_name, patterns in vtable_candidates:
        score = 0
        for p in patterns:
            if p in code:
                score += 1
        # Also check callees
        for c in callees:
            for p in patterns:
                if p in c:
                    score += 2
        if score > 0:
            matches.append((cls_name, score))
    
    matches.sort(key=lambda x: -x[1])
    if matches:
        return matches[0][0]
    return None

def determine_action(code, callees, strings):
    """Guess the function's action/purpose"""
    code_lower = code.lower()
    all_callees = ' '.join(callees).lower()
    all_strings = ' '.join(strings).lower()
    
    actions = {
        'ReadINI': ['ini', 'getstring', 'getkey', 'readbool', 'findvalue', 'getint', 'read_int'],
        'WriteINI': ['write', 'setbool', 'setint'],
        'Load': ['load', 'construct', 'open', 'fromfile'],
        'Save': ['save', 'write', 'dump'],
        'Update': ['update', 'process', 'tick', 'frame'],
        'Draw': ['draw', 'render', 'blit', 'redraw'],
        'Create': ['create', 'spawn', 'new'],
        'Destroy': ['destroy', 'remove', 'delete', 'cleanup'],
        'Find': ['find', 'search', 'lookup', 'get'],
        'Init': ['initialize', 'init', 'setup'],
        'Check': ['check', 'validate', 'verify', 'is'],
        'Calculate': ['compute', 'calculate', 'calc'],
        'Convert': ['convert', 'transform', 'translate'],
        'Copy': ['copy', 'duplicate', 'clone', 'assign'],
        'Compare': ['compare', 'equals', 'match'],
        'Sort': ['sort', 'order', 'arrange'],
        'Queue': ['queue', 'enqueue', 'push'],
        'Notify': ['notify', 'announce', 'broadcast'],
        'Register': ['register', 'subscribe', 'add'],
    }
    
    for action_name, keywords in actions.items():
        for kw in keywords:
            if kw in all_callees or kw in code_lower[:500]:
                return action_name
    return None


# === Main processing ===
def main():
    results = []
    
    for ea in range(0x401000, 0x7E1000):
        fn = idaapi.get_func(ea)
        if not fn or fn.start_ea != ea: continue
        name = idc.get_func_name(ea) or ''
        if not name.startswith('callsYRpp_'): continue
        
        sz = fn.end_ea - ea
        if sz < 80:  # Skip COM stubs and tiny helpers
            continue
        
        code = get_decompiled_text(ea)
        if not code:
            continue
        
        callees = get_callees(ea)
        strings = get_string_refs(ea)
        cls = get_class_from_code(code, callees)
        action = determine_action(code, callees, strings)
        
        # Build new name
        new_name = None
        if cls and action:
            new_name = f"{cls}::{action}"
        elif cls:
            new_name = f"{cls}::sub_{ea:X}"
        
        results.append({
            'addr': f"0x{ea:08X}",
            'old': name,
            'new': new_name,
            'size': sz,
            'class': cls,
            'action': action,
            'strings': list(strings)[:5],
            'callees': callees[:8],
        })
    
    return results

results = main()
print(f"Total analyzed: {len(results)}")
print(f"Files saved to rename_batch.json")

# Count by confidence
with_class = [r for r in results if r['class']]
no_class = [r for r in results if not r['class']]
print(f"With class: {len(with_class)}")
print(f"No class: {len(no_class)}")

# Show top with_class results
print("\n=== Top 30 with class+action ===")
with_class.sort(key=lambda x: -x['size'])
for r in with_class[:30]:
    print(f"{r['addr']} {r['old']:25s} {r['size']:4d}B → {r['new'] or 'none'} | {r['class']}")

# Save to JSON
with open('D:/RA2YR_ReSource/tools/rename_batch.json', 'w') as f:
    json.dump(results, f, indent=2)
print(f"\nSaved {len(results)} entries to rename_batch.json")
