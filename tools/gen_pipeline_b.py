#!/usr/bin/env python3
"""Generate pipeline_b.json from audit output, excluding pipeline_a addresses."""
import json
import re

# Read pipeline_a addresses (normalize case)
with open('mismatch_pipeline_a.json', encoding='utf-8') as f:
    pipe_a = json.load(f)
pipe_a_addrs = set(e['addr'].upper() for e in pipe_a)
print(f"Pipeline A addresses: {len(pipe_a_addrs)}")

# Parse normalized mismatches from audit output
with open('.omo/audit_output_full.txt', 'r', encoding='utf-8') as f:
    content = f.read()

norm_start = content.find('--- Normalized Mismatches')
section = content[norm_start:]
lines = section.split('\n')

mismatches = []
current = {}
for line in lines:
    line = line.strip()
    # Stop at next section marker
    if line.startswith('---') and 'Normalized' not in line:
        if current and 'addr' in current:
            mismatches.append(current)
        break
    if line.startswith('0X'):
        if current and 'addr' in current:
            mismatches.append(current)
        addr_match = re.match(r'(0X[0-9A-F]+):', line)
        if addr_match:
            current = {'addr': addr_match.group(1)}
    elif 'ida_name:' in line:
        val = line.split('ida_name:', 1)[1].strip()
        current['ida_name'] = val if val else None
    elif 'json_name:' in line:
        val = line.split('json_name:', 1)[1].strip()
        current['json_name'] = val if val else None
    elif 'hpp_name:' in line:
        val = line.split('hpp_name:', 1)[1].strip()
        current['hpp_name'] = val if val else None
if current and 'addr' in current:
    mismatches.append(current)

print(f"Total normalized mismatches: {len(mismatches)}")

# Class alias map
CLASS_ALIASES = {
    'INIClass': 'CCINIClass', 'CCINIClass': 'INIClass',
    'Dialog': 'DialogClass', 'DialogClass': 'Dialog',
    'Connection': 'ConnectionClass', 'ConnectionClass': 'Connection',
    'Window': 'WindowClass',
    'House': 'HouseClass', 'HouseClass': 'House',
    'Cell': 'CellClass', 'CellClass': 'Cell',
    'Audio': 'AudioEventHandle', 'AudioEventHandle': 'Audio',
    'Mixer': 'AudioMixer', 'AudioMixer': 'Mixer',
    'Commands': 'CommandClass', 'CommandClass': 'Commands',
    'Entry': 'HashTable', 'HashTable': 'Entry',
    'Stream': 'StreamClass', 'StreamClass': 'Stream',
    'GUID': 'GUIDUtil', 'GUIDUtil': 'GUID',
    'Text': 'TextRenderer', 'TextRenderer': 'Text',
    'TacticalMap': 'TacticalClass',
    'Multiplayer': 'Skirmish',
    'State': 'RandomMap',
}

INHERITANCE = {
    'InfantryClass': ['FootClass', 'TechnoClass', 'RadioClass', 'MissionClass', 'ObjectClass', 'AbstractClass'],
    'BuildingClass': ['TechnoClass', 'RadioClass', 'MissionClass', 'ObjectClass', 'AbstractClass'],
    'UnitClass': ['FootClass', 'TechnoClass', 'RadioClass', 'MissionClass', 'ObjectClass', 'AbstractClass'],
    'AircraftClass': ['FootClass', 'TechnoClass', 'RadioClass', 'MissionClass', 'ObjectClass', 'AbstractClass'],
    'FootClass': ['TechnoClass', 'RadioClass', 'MissionClass', 'ObjectClass', 'AbstractClass'],
    'TechnoClass': ['RadioClass', 'MissionClass', 'ObjectClass', 'AbstractClass'],
    'MissionClass': ['ObjectClass', 'AbstractClass'],
    'ObjectClass': ['AbstractClass'],
    'InfantryTypeClass': ['FootTypeClass', 'TechnoTypeClass', 'ObjectTypeClass', 'AbstractTypeClass'],
    'BuildingTypeClass': ['TechnoTypeClass', 'ObjectTypeClass', 'AbstractTypeClass'],
    'UnitTypeClass': ['FootTypeClass', 'TechnoTypeClass', 'ObjectTypeClass', 'AbstractTypeClass'],
    'AircraftTypeClass': ['FootTypeClass', 'TechnoTypeClass', 'ObjectTypeClass', 'AbstractTypeClass'],
    'TechnoTypeClass': ['ObjectTypeClass', 'AbstractTypeClass'],
    'ObjectTypeClass': ['AbstractTypeClass'],
    'SidebarClass': ['ObjectClass'],
    'TacticalClass': ['DisplayClass'],
    'IPXConnClass': ['ConnectionClass'],
    'NullModemClass': ['ModemConnectionClass', 'ConnectionClass'],
    'WinModemClass': ['ModemConnectionClass', 'ConnectionClass'],
    'IPXManagerClass': ['ConnectionClass'],
    'MPBattleClass': ['MPGameModeClass'],
    'LayerClass': ['MapClass'],
    'TriggerClass': ['TagClass'],
    'TriggerTypeClass': ['TagTypeClass'],
    'ComStreamClass': ['StreamClass'],
    'AudioStream': ['StreamClass'],
    'StreamWrapper': ['StreamClass'],
    'AnimTypeClass': ['ObjectTypeClass'],
}

def extract_class(name):
    if not name or '::' not in name:
        return None
    return name.split('::')[0]

def extract_method(name):
    if not name:
        return name
    if '::' in name:
        return name.split('::', 1)[1]
    return name

def is_alias(cls_a, cls_b):
    return cls_a in CLASS_ALIASES and CLASS_ALIASES[cls_a] == cls_b

def in_inheritance(cls_a, cls_b):
    if cls_a == cls_b:
        return True
    if cls_a in INHERITANCE:
        anc = INHERITANCE[cls_a]
        flat = list(anc)
        for a in anc:
            if a in INHERITANCE:
                flat.extend(INHERITANCE[a])
        if cls_b in flat:
            return True
    if cls_b in INHERITANCE:
        anc = INHERITANCE[cls_b]
        flat = list(anc)
        for a in anc:
            if a in INHERITANCE:
                flat.extend(INHERITANCE[a])
        if cls_a in flat:
            return True
    return False

def classify_reason(m):
    ida = m.get('ida_name')
    hpp = m.get('hpp_name')
    ref = ida if ida else m.get('json_name')
    
    ida_cls = extract_class(ref)
    ida_m = extract_method(ref)
    hpp_cls = extract_class(hpp)
    hpp_m = extract_method(hpp)
    
    reasons = []
    
    # Constructor patterns
    if hpp_m and ref:
        if hpp_m == 'Find' and ida_m and ida_m == ida_cls:
            reasons.append("constructor_annotated_as_find")
        if hpp_cls and hpp_m == hpp_cls and ida_m in ('ctor','Constructor','Construct'):
            reasons.append("constructor_naming")
        if ida_m == 'Destruct' and hpp_m == hpp_cls:
            reasons.append("destructor_naming")
        if ida and '::~' in ida and hpp_m == hpp_cls:
            reasons.append("destructor_tilde")
    
    # Method synonyms (same or related class)
    if ida_cls and hpp_cls:
        if is_alias(ida_cls, hpp_cls):
            reasons.append(f"class_alias:{ida_cls}={hpp_cls}")
        elif in_inheritance(ida_cls, hpp_cls):
            reasons.append(f"inheritance:{ida_cls}<->{hpp_cls}")
        elif ida_cls == hpp_cls:
            reasons.append("same_class_different_method_name")
        else:
            # For B cases, same method name on related classes
            if ida_m and hpp_m and ida_m == hpp_m:
                reasons.append(f"same_method_different_class_class_may_be_related")
    
    # CRT imports
    crt = ['_memset','__FillZeroMan','__setmode_lk','closesocket','bind','sendto','start','_remove',
           'ReadFile','CloseWindow','SetFocus','SetCursor']
    if ida and ida in crt:
        reasons.append("crt_or_win32_import_wrapped_in_class")
    
    # Global vs member (convention)
    if ida and '::' not in ida and hpp and '::' in hpp:
        reasons.append("global_assigned_to_module_class_naming_convention")
    
    # gamemd namespace
    if hpp and hpp.startswith('gamemd::'):
        reasons.append("gamemd_namespace_prefix_normalization_handles")
    
    # vt entry naming
    if hpp_m and hpp_m.startswith('vt'):
        reasons.append("vtable_index_notation_descriptive_name")
    
    # Method synonym patterns where both are valid
    if ida_m and hpp_m and ida_m != hpp_m:
        if ida_cls == hpp_cls:
            # Check for substring relationship
            if hpp_m in ida_m or ida_m in hpp_m or ida_m.startswith(hpp_m):
                reasons.append("sub_method_longer_vs_shorter_naming")
            elif ida_m.lower() == hpp_m.lower():
                reasons.append("case_convention_difference")
            else:
                reasons.append("method_naming_convention_both_valid")
    
    # JSON disagrees but hpp and ida agree
    if ida and hpp == ida:
        reasons.append("json_has_inconsistent_name_hpp_matches_ida")
    
    if not reasons:
        reasons.append("unclassified_convention_difference_needs_manual_review")
    
    return '|'.join(reasons)

pipe_b = []
for m in mismatches:
    if m['addr'] in pipe_a_addrs:
        continue
    reason = classify_reason(m)
    pipe_b.append({
        'addr': m['addr'],
        'ida_name': m.get('ida_name'),
        'json_name': m.get('json_name'),
        'hpp_name': m.get('hpp_name'),
        'reason': reason
    })

with open('mismatch_pipeline_b.json', 'w') as f:
    json.dump(pipe_b, f, indent=2)

print(f"Pipeline B entries: {len(pipe_b)}")
print(f"Pipeline A entries: {len(pipe_a_addrs)}")
print(f"Total: {len(pipe_a_addrs) + len(pipe_b)}")
