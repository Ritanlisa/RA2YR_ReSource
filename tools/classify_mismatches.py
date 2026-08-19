#!/usr/bin/env python3
"""Classify audit_consistency.py name mismatches into Pipeline A (real bugs) vs Pipeline B (conventions)."""

import json
import re
import sys

# Known class aliases (same class, different naming conventions)
CLASS_ALIASES = {
    'INIClass': 'CCINIClass', 'CCINIClass': 'INIClass',
    'Dialog': 'DialogClass', 'DialogClass': 'Dialog',
    'Gadget': 'GadgetClass',
    'Connection': 'ConnectionClass', 'ConnectionClass': 'Connection',
    'Window': 'WindowClass',
    'House': 'HouseClass', 'HouseClass': 'House',
    'Cell': 'CellClass', 'CellClass': 'Cell',
    'Audio': 'AudioEventHandle', 'AudioEventHandle': 'Audio',
    'Mixer': 'AudioMixer', 'AudioMixer': 'Mixer',
    'Commands': 'CommandClass', 'CommandClass': 'Commands',
    'Entry': 'HashTable',  # HashTable::Entry inner class
    'HashTable': 'Entry',
    'Rect': 'RectClass',
    'Stream': 'StreamClass', 'StreamClass': 'Stream',
    'GUID': 'GUIDUtil', 'GUIDUtil': 'GUID',
    'State': 'RandomMap',  # RandomMap::State?
    'TacticalMap': 'TacticalClass',
    'Multiplayer': 'Skirmish',
    'Text': 'TextRenderer', 'TextRenderer': 'Text',
}

# Known method name synonyms (same function, different naming convention)
METHOD_SYNONYMS = {
    # Constructor patterns
    'ctor': 'Constructor',
    'Construct': 'Constructor',
    'Destruct': 'Constructor',
    'AbstractClass': 'Constructor',  # BombClass::AbstractClass = BombClass constructor
    
    # Factory/stat methods
    'Stat': 'GetProgress',
    'Revert': 'AbandonProduction',
    'CountType': 'CountTotal',
    
    # Start/stop variants
    'End': 'RequestStop',
    'DecrementCounter': 'Start',
    
    # Naming variants  
    'GiveTiberium_Storage': 'GiveTiberium',
    'UpdateAITryFireSW': 'AITryFireSW',
    'updateSightRange': 'UpdateSight',
    'GetZAboveGround': 'GetZ',
    'DistanceTo': 'DistanceFrom',
    'GetRadLevelAt': 'GetRadLevel',
    'ProcessTurn': 'Process',
    'FinishProduction': 'CompletedProduction',
    'Projection_Setup': 'ProjectionSetup',
    'startPanic': 'Panic',
    'readGeneralSection': 'ReadGeneral',
    'ReadSidesList': 'ReadSides',
    'ReadPowerupsSection': 'ReadPowerups',
    'ReadMultiplayerDialogSettings': 'ReadMultiplayerDialogSettings',
    'LiberateMember_Start': 'LiberateMember',
    'queueMission': 'queueMission',
    'Mission_RepairDispatch': 'Mission_Repair',
    'IsCloseEnoughToBuilding': 'IsCloseEnough',
    'CanAttackMove_IgnoreWeapon': 'CanAttackMove',
    'FindAndPlay': 'Play',
    'ProcessSpawnAnim': 'processSpawn',
    
    # Release/Close
    'release': 'CloseSession',
    'Flush': 'FlushCom',
    'EnsureFileLoaded': 'Loaded',
    'InitINIChain': 'Init',
    'SetTargetIfAllowed': 'SetTarget',
    'IsDeadOrInactive': 'isDead',
    'ScanAdjacentCells': 'ScanAdjacentCells2',
    'GetDeployWeaponIndex': 'GetDeployWeapon',
    'SlaveGiveMoney_RecordBalanceBefore': 'GiveMoney',
    'GetCameoTypeIndex': 'GetCameo',
    'CanCrushTarget': 'canCrush',
    'Set2': 'various',  # Set2 in multiple contexts
    'GetSizeMax': 'GetSize',
    'send': 'Send',
    'receive': 'Receive',
    'sendAck': 'Release',  # or just naming
    'StubReturnFalse': 'Open',  # or naming
    'MapDialogResource': 'HandleLauncherMessage',
    'SetViewDimensions': 'SetViewDimensions',  # same
    'HandleSuspend': 'Suspend',
    'SaveGame': 'saveGame',
    'LoadGame': 'loadGame',
    'saveGame': 'SaveGame',
    'loadGame': 'LoadGame',
    'CountDisconnectedHouses': 'IsConnected',
    'removeTrigger': 'RemoveTriggerRef',
    'CellIteratorNext': 'CellIteratorNext',
    'CellIteratorReset': 'CellIteratorReset',
    'IsWithinUsableArea': 'IsWithinUsableArea',
    'DestroyCliff': 'DestroyCliff',
    'Reveal': 'Reveal',
    'CheckStatus': 'IsIPXAvailable',
    'PointerGotInvalid': 'PointerGotInvalid',
    'IsActive': 'Active',
    'AnnounceReady': 'HasChargeProgressed',
    'StartTimer': 'Grant',
    'BuildBar': 'BuildBar',
    'AddAction': 'AddAction',
    'NotifyGlobalChanged': 'NotifyGlobalChanged',
    'NotifyLocalChanged': 'NotifyLocalChanged',
    'GetFlags': 'GetFlags',
    'IsVisible': 'IsVisible',
    'SetDisplayMode': 'SetDisplayMode',
    'CreateBackBuffer': 'CreateBackBuffer',
    'DrawActionLines': 'DrawActionLines',
    'SelectRLEBlitter': 'SelectRLEBlitter',
    'validateHouse': 'ValidateHouse',
    'validateOwner': 'ValidateOwner',
    'randomAICountryIndex': 'RandomAICountryIndex',
    'startingPositionsToHouseBaseCells': 'StartingPositionsToHouseBaseCells',
    'closeStream': 'Close',
    'flushStream': 'Flush',
    'SelectAutoTarget': 'SelectAutoTarget',
    'PlayIdleAnim': 'PlayIdleAnim',
    'UpdateCloak': 'UpdateCloak',
    'ProcessSuperWeaponEffects': 'processSuperWeapon',
    'ApplyFoundationDamage': 'onDamage',
    'vt_entry_94': 'vt_entry_94',
    'SetPalette': 'SetPalette',
    'renderOverlay': 'RenderOverlay',
    'DrawText': 'DrawText',
    'DrawBackground': 'DrawBackground',
    'ProcessCmd': 'vt53',
    'ExecuteAction': 'vt10',
    'PowerDrainUpdate': 'vt13',
    'SD_vt16': 'MouseOverObject',
    'select': 'Select',
    'deselect': 'Deselect',
    'GetPosition': 'GetPosition',
    'LookupString': 'LookupString',
    'FindAndMark': 'FindAndMark',
    'UpdateControlState': 'sub_624930',
    'GrowBuffer': 'sub_624BE0',
    'DecrementRefCount': 'DecrementRefCount',
    'IsHealthLow': 'GetHealthPercentage',
    'IsPowered': 'IsPowered',
    'LoadFromINIList': 'LoadFromINIList',
    'GetTechnoType': 'GetTechnoType',
    'Size': 'Size',
    'getWeaponRange': 'getWeaponRange',
    'setMapCoords': 'SetMapCoords',
    'IsCellOccupied': 'IsCellOccupied',
    'CanBeSold': 'CanBeSold',
    'GetRepairStepAmount': 'GetRepairStep',
    'CanTogglePower': 'CanTogglePower',
    'WriteIntArray': 'WriteInt',
    'ReadFile': 'ReadFile',
    'CloseWindow': 'CloseWindow',
    'SetFocus': 'SetFocus',
    'SetCursor': 'SetCursor',
    'closesocket': 'CloseSocket',
    'bind': 'Bind',
    'sendto': 'SendTo',
    '_memset': 'MemSet',
    '__FillZeroMan': 'FillZero',
    '__setmode_lk': 'SetMode',
    'Scatter': 'Scatter',
    'start': 'Start',
    'Mission_Unload': 'Mission_Harvest',
    'Mission_Enter': 'Mission_Enter',
    'Mission_Attack': 'Mission_Attack',
    'Mission_Guard': 'Mission_Guard',
    'Mission_Construction': 'Mission_Construction',
    'ReturnToBaseAndReload': 'Reload',
    'Lose': 'Lose',
    'Load2DArt': 'Load2DArt',
    'OverlayTypeClass': 'Find',  # Constructor name vs Find
    'AircraftTypeClass': 'Find',
    'UnitTypeClass': 'Find',
    'TerrainTypeClass': 'Find',
    'SmudgeTypeClass': 'Find',
    'TeleportLocomotionClass': 'TeleportLocomotionClass',
    'SetOwner': 'SetOwner',
    'GetTarget': 'GetTarget',
    'onSelect': 'onSelect',
    'updateThreat': 'UpdateThreat',
    'GetWeaponRange': 'GetWeaponRange',
    'ReadBytes': 'ReadBytes',
    'IsMultiplayerActive': 'IsMultiplayer',
    'ToggleNetworkSession': 'ToggleNetworkSession',
    'RestartNetworkSession': 'RestartNetworkSession',
    'GetStringCSF': 'GetCSFString',
    'IntersectSurfaceRects': 'Intersects',
    'ClipRectIntersection': 'Clip',
    'FindPathWithRetry': 'FindPathWithRetry',
    'SetupGame': 'SetupGame',
    'LoadConfig': 'LoadConfig',
    'isAreaClear': 'isAreaClear',
    'ScalarDtor': 'ScalarDtor',
    'InitArray': 'InitArray',
    'DamageArea': 'DamageArea',
    'Enable': 'Enable',
    'Setup': 'Setup',
    'Seek': 'Seek',
    'Compare': 'Compare',
    'Init': 'Init',
    'Close': 'Close',
    'GetAddress': 'GetAddress',
    'GetFrameCount': 'GetFrameCount',
    'IsPlaying': 'IsPlaying',
    'IsAlliedWith': 'IsAlliedWith',
    'SetHouse': 'SetHouse',
    'FlushCom': 'FlushCom',
    'SendPacket': 'SendPacket',
    'DetectModem': 'DetectModem',
    'Negotiate': 'Negotiate',
    'CoordStruct': 'CoordStruct',
    'IsCellOccupied': 'IsCellOccupied',
    'CCINIClass': 'CCINIClass',
    'ctor': 'SlaveManagerClass',
    'SlaveManagerClass': 'SlaveManagerClass',
    'CCINIClass': 'Constructor',
    'Constructor': 'Constructor',
    'Construct': 'Construct',
}

# Classes that are in the same inheritance hierarchy (derived implements base virtual)
INHERITANCE_CHAINS = {
    # InfantryClass inherits FootClass inherits TechnoClass inherits ...
    'InfantryClass': ['FootClass', 'TechnoClass', 'RadioClass', 'MissionClass', 'ObjectClass', 'AbstractClass'],
    'BuildingClass': ['TechnoClass', 'RadioClass', 'MissionClass', 'ObjectClass', 'AbstractClass'],
    'UnitClass': ['FootClass', 'TechnoClass', 'RadioClass', 'MissionClass', 'ObjectClass', 'AbstractClass'],
    'AircraftClass': ['FootClass', 'TechnoClass', 'RadioClass', 'MissionClass', 'ObjectClass', 'AbstractClass'],
    'FootClass': ['TechnoClass', 'RadioClass', 'MissionClass', 'ObjectClass', 'AbstractClass'],
    'TechnoClass': ['RadioClass', 'MissionClass', 'ObjectClass', 'AbstractClass'],
    'MissionClass': ['ObjectClass', 'AbstractClass'],
    'ObjectClass': ['AbstractClass'],
    
    # Type hierarchies
    'InfantryTypeClass': ['FootTypeClass', 'TechnoTypeClass', 'ObjectTypeClass', 'AbstractTypeClass'],
    'BuildingTypeClass': ['TechnoTypeClass', 'ObjectTypeClass', 'AbstractTypeClass'],
    'UnitTypeClass': ['FootTypeClass', 'TechnoTypeClass', 'ObjectTypeClass', 'AbstractTypeClass'],
    'AircraftTypeClass': ['FootTypeClass', 'TechnoTypeClass', 'ObjectTypeClass', 'AbstractTypeClass'],
    'FootTypeClass': ['TechnoTypeClass', 'ObjectTypeClass', 'AbstractTypeClass'],
    'TechnoTypeClass': ['ObjectTypeClass', 'AbstractTypeClass'],
    'ObjectTypeClass': ['AbstractTypeClass'],
    
    # UI
    'SidebarClass': ['ObjectClass'],
    'TacticalClass': ['DisplayClass'],
    'DisplayClass': ['GScreenClass'],
    
    # COM/Network
    'IPXConnClass': ['ConnectionClass'],
    'NullModemClass': ['ModemConnectionClass', 'ConnectionClass'],
    'WinModemClass': ['ModemConnectionClass', 'ConnectionClass'],
    'ComStreamClass': ['StreamClass'],
    'AudioStream': ['StreamClass'],
    'StreamWrapper': ['StreamClass'],
    'IPXManagerClass': ['ConnectionClass'],
    'MPBattleClass': ['MPGameModeClass'],
    
    # Misc
    'LayerClass': ['MapClass'],
    'TriggerClass': ['TagClass'],
    'TriggerTypeClass': ['TagTypeClass'],
    'RulesClass': ['Dialog'],
    'GScreenClass': ['DisplayClass'],
    
    # Special cases
    'VoxelAnimTypeClass': ['BuildingTypeClass'],
}

def parse_audit_output(filepath):
    """Parse audit_consistency.py text output into structured list."""
    mismatches = []
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # Find the "Normalized Mismatches" section
    norm_start = content.find('--- Normalized Mismatches')
    if norm_start == -1:
        print("ERROR: No Normalized Mismatches section found")
        return mismatches
    
    # Get everything after "--- Normalized Mismatches (196) ---"
    section = content[norm_start:]
    lines = section.split('\n')
    
    current = {}
    in_section = False
    for line in lines:
        line = line.strip()
        if line.startswith('0X'):
            if current and 'addr' in current:
                mismatches.append(current)
            addr_match = re.match(r'(0X[0-9A-F]+):', line)
            if addr_match:
                current = {'addr': addr_match.group(1)}
                in_section = True
        elif in_section and 'ida_name:' in line:
            val = line.split('ida_name:', 1)[1].strip()
            current['ida_name'] = val if val else None
        elif in_section and 'json_name:' in line:
            val = line.split('json_name:', 1)[1].strip()
            current['json_name'] = val if val else None
        elif in_section and 'hpp_name:' in line:
            val = line.split('hpp_name:', 1)[1].strip()
            current['hpp_name'] = val if val else None
    
    if current and 'addr' in current:
        mismatches.append(current)
    
    return mismatches

def extract_class(name):
    """Extract class name from ClassName::Method or ClassName."""
    if not name:
        return None
    if '::' in name:
        return name.split('::')[0]
    return None

def extract_method(name):
    """Extract method name from ClassName::Method."""
    if not name:
        return name
    if '::' in name:
        return name.split('::', 1)[1]
    return name

def is_global(name):
    """Check if name appears to be a global function (no :: separator)."""
    if not name:
        return False
    return '::' not in name

def is_in_inheritance_chain(cls_a, cls_b):
    """Check if cls_a and cls_b are in the same inheritance hierarchy."""
    if cls_a == cls_b:
        return True
    # Check if cls_b is ancestor of cls_a
    if cls_a in INHERITANCE_CHAINS:
        ancestors = INHERITANCE_CHAINS[cls_a]
        flat = []
        for a in ancestors:
            flat.append(a)
            if a in INHERITANCE_CHAINS:
                flat.extend(INHERITANCE_CHAINS[a])
        if cls_b in flat:
            return True
    # Check if cls_a is ancestor of cls_b
    if cls_b in INHERITANCE_CHAINS:
        ancestors = INHERITANCE_CHAINS[cls_b]
        flat = []
        for a in ancestors:
            flat.append(a)
            if a in INHERITANCE_CHAINS:
                flat.extend(INHERITANCE_CHAINS[a])
        if cls_a in flat:
            return True
    return False

def are_class_aliases(cls_a, cls_b):
    """Check if two class names are known aliases."""
    return cls_a in CLASS_ALIASES and CLASS_ALIASES[cls_a] == cls_b

def classify_mismatch(m):
    """Classify a single mismatch as Pipeline A or B."""
    addr = m['addr']
    ida_name = m.get('ida_name')
    json_name = m.get('json_name')
    hpp_name = m.get('hpp_name')
    
    # Use ida_name as primary, fall back to json_name
    ref_name = ida_name if ida_name else json_name
    
    ida_cls = extract_class(ref_name)
    ida_method = extract_method(ref_name)
    hpp_cls = extract_class(hpp_name)
    hpp_method = extract_method(hpp_name)
    
    ida_is_global = is_global(ref_name) if ref_name else False
    hpp_is_global = is_global(hpp_name) if hpp_name else False
    
    # ====== PIPELINE B RULES ======
    reasons = []
    
    # B1: Same method name, same or alias class
    if ida_method and hpp_method and ida_method == hpp_method:
        if ida_cls and hpp_cls:
            if are_class_aliases(ida_cls, hpp_cls):
                reasons.append(f"class_alias: {ida_cls}↔{hpp_cls}")
            elif is_in_inheritance_chain(ida_cls, hpp_cls):
                reasons.append(f"inheritance: {ida_cls}↔{hpp_cls} in same hierarchy")
    
    # B2: Constructor patterns
    if hpp_method and ref_name:
        # hpp says Find but address points to constructor
        if hpp_method == 'Find' and ida_method and ida_method == ida_cls:
            reasons.append(f"constructor_as_find: {ida_cls} ctor annotated as Find")
        # hpp says ClassName (constructor) and ida says Constructor/ctor/Construct
        if hpp_cls and hpp_method == hpp_cls:
            if ida_method in ('ctor', 'Constructor', 'Construct'):
                reasons.append(f"constructor_ctor: hpp={hpp_cls}::{hpp_cls} vs ida=ctor/Constructor")
            elif ida_method == 'AbstractClass':
                reasons.append(f"constructor_baseclass: {ida_cls}::AbstractClass = {hpp_cls} ctor")
        # Destruction
        if ida_method == 'Destruct' and hpp_method == hpp_cls:
            reasons.append(f"destructor: ida=Destruct vs hpp=ClassName")
        # ~Constructor
        if ida_name and '::~' in ida_name and hpp_method == hpp_cls:
            reasons.append(f"destructor_tilde: ida has ~, hpp uses ClassName")
    
    # B3: CRT/import wrapper (ida has low-level name, hpp has wrapper class)
    crt_imports = {
        '_memset': 'MemSet', '__FillZeroMan': 'FillZero', '__setmode_lk': 'SetMode',
        'closesocket': 'CloseSocket', 'bind': 'Bind', 'sendto': 'SendTo',
        'start': 'Start', '_remove': '_remove',
        'ReadFile': 'ReadFile', 'CloseWindow': 'CloseWindow',
        'SetFocus': 'SetFocus', 'SetCursor': 'SetCursor',
    }
    if ida_name and ida_name in crt_imports:
        reasons.append(f"crt_import: {ida_name} wrapped in hpp class")
    
    # B4: Global function assigned to module/class in hpp (convention)
    if ida_is_global and not hpp_is_global:
        # Global function like CreateMovie → MoviePlayer::CreateMovie is convention
        reasons.append("global_to_member: ida=global, hpp=class_member (naming convention)")
    
    # B5: vt entry naming (hpp uses vtable index, ida uses descriptive name)
    if hpp_method and hpp_method.startswith('vt'):
        reasons.append(f"vt_entry: hpp uses vtable index notation")
    
    # B6: Method synonyms (both are valid names for the function)
    # If classes are same or related AND methods are synonymous
    if hpp_method and ida_method and hpp_method != ida_method:
        same_or_related_cls = (
            (not ida_cls and not hpp_cls) or  # both global
            (ida_cls == hpp_cls) or
            are_class_aliases(ida_cls, hpp_cls) or
            is_in_inheritance_chain(ida_cls, hpp_cls)
        )
        if same_or_related_cls:
            reasons.append(f"method_synonym: ida={ida_method}, hpp={hpp_method} (same/similar function)")

    # B7: gamemd:: namespace (already handled by T2, but some edge cases)
    if hpp_name and hpp_name.startswith('gamemd::'):
        reasons.append("gamemd_namespace: hpp prefixes with gamemd:: (normalization handles)")

    # B8: JSON/IDA disagreement but hpp matches IDA
    # (not a hpp bug, it's a json bug)
    if ida_name and hpp_name == ida_name:
        reasons.append("json_disagrees: hpp matches ida, json has different name")
    
    # B9: Same class, different method (sub-function naming)
    if ida_cls == hpp_cls and ida_method != hpp_method:
        # Check for known patterns like _Start suffix
        if ida_method and hpp_method:
            # Shorter version
            if hpp_method in ida_method or ida_method.startswith(hpp_method):
                reasons.append(f"sub_method: hpp shorter name variant of ida longer name")
            else:
                reasons.append(f"same_class_diff_method: same class ({ida_cls}), different descriptive names")
    
    # ====== PIPELINE A DETECTION ======
    # A rule: Completely unrelated classes (not aliases, not in inheritance chain)
    is_pipeline_a = False
    a_reason = ""
    
    if ida_cls and hpp_cls and ida_cls != hpp_cls:
        if not are_class_aliases(ida_cls, hpp_cls) and not is_in_inheritance_chain(ida_cls, hpp_cls):
            # STRONG signal for Pipeline A
            is_pipeline_a = True
            a_reason = f"wrong_class: ida={ida_cls}, hpp={hpp_cls} — unrelated classes, ida correct"
    
    # A rule: Method names that are clearly wrong (not synonyms)
    if ida_method and hpp_method and ida_method != hpp_method:
        if ida_cls == hpp_cls:
            # Same class, but method mismatch — could be either A or B
            # If the methods have NO substring relationship and the function at that
            # address does something specific, it's likely A
            if not any(r.startswith('method_synonym') or r.startswith('sub_method') or r.startswith('same_class_diff_method') for r in reasons):
                # Check for known bad patterns
                bad_patterns = [
                    # ScenarioClass::StubReturnFalse != MPGameModeClass::AddRef — completely different
                ]
                # For same-class diff method without recognized pattern, mark as A
                # if the methods are very different (no substring overlap)
                if hpp_method not in ida_method and ida_method not in hpp_method:
                    # Check Levenshtein-ish: if no common prefix of >= 3 chars
                    common_len = 0
                    for i in range(min(len(ida_method), len(hpp_method))):
                        if ida_method[i] == hpp_method[i]:
                            common_len += 1
                        else:
                            break
                    if common_len < 3:
                        is_pipeline_a = True
                        a_reason = f"wrong_method: same class ({ida_cls}) but ida={ida_method}, hpp={hpp_method} — different functions"
    
    # A rule: hpp_name matches JSON but JSON matches IDA — need check
    # Actually, the audit compares ida_name (from IDA) vs hpp_name (from hpp annotation)
    # If ida_name and json_name agree but hpp_name disagrees, and the classes are unrelated, it's A
    
    # A rule: Completely wrong function at this address
    # (These would be the "real bug" cases)
    known_a_cases = {
        # Audio subsystem functions assigned to wrong class
        '0X004033C0': ('wrong_class', 'AudioStream::DestroyAll at 0x4033C0, hpp says HouseClass::DestroyAll'),
        '0X00403730': ('wrong_class', 'AudioQueue::StopAllVoices at 0x403730, hpp says AudioMixer::StopAll'),
        '0X00405B50': ('wrong_class', 'sub_405B50 (no ida name), hpp says AudioController::Stop — need IDA verify'),
        '0X00406060': ('wrong_class', 'Mixer::ReleaseChannel at 0x406060, hpp says AudioMixer::ReleaseChannel — likely same'),
        '0X00406D40': ('wrong_class', 'Audio::Shutdown vs AudioEventHandle::AudioShutdown — class alias'),
        '0X00407000': ('wrong_class', 'Audio::IsSoundEnabled vs AudioEventHandle::AudioIsSoundEnabled — class alias'),
        '0X004083D0': ('wrong_class', 'Mixer::RequestAllBuffers vs AudioMixer::RequestAllBuffers — likely alias'),
        
        # Unrelated class assignments (strong Pipeline A)
        '0X0041C8B0': ('wrong_class', 'AircraftTypeClass::AircraftTypeClass (ctor) vs AircraftTypeClass::Find'),
        '0X004385D0': ('wrong_class', 'BombClass::AbstractClass vs BombClass::BombClass — ida says AbstractClass which is wrong naming, actually ctor'),
        '0X00454190': ('wrong_class', 'BuildingClass::Size vs VoxelAnimTypeClass::Size — completely different classes'),
        '0X004A7900': ('wrong_class', 'DiskLaserClass::PointerGotInvalid vs RulesClass::PointerGotInvalid'),
        '0X0053A100': ('wrong_class', 'LightningStorm::IsActive vs LightningStorm::HasDeferment'),
        '0X0053A110': ('wrong_class', 'NukeFlash::IsActive vs NukeFlash::FadeIn'),
        '0X0053A120': ('wrong_class', 'NukeFlash::ProcessEffect vs NukeFlash::FadeOut'),
        
        # Completely wrong class assignments
        '0X00476EB0': ('wrong_class', 'INIEntry::GetTechnoType vs ObjectTypeClass::GetTechnoType'),
        '0X0048BF40': ('wrong_class', 'ConnectionClass::sendAck vs ConnectionClass::Release'),
        '0X0048C590': ('wrong_class', 'ConnectionClass::StubReturnFalse vs ConnectionClass::Open'),
        '0X0050C0E30': ('wrong_class', 'ScenarioClass::StubReturnFalse vs MPGameModeClass::AddRef'),
        '0X005C0E40': ('wrong_class', 'ScenarioClass::StubReturnFalse2 vs MPGameModeClass::Release'),
        '0X005C21D0': ('wrong_class', 'CampaignCoop::Setup vs CellClass::Setup'),
        '0X005D2530': ('wrong_class', 'DDraw::HandleSuspend vs FactoryClass::Suspend'),
        '0X005D8CB0': ('wrong_class', 'PlayerClass::SetHouse vs TriggerClass::SetHouse'),
        '0X005E2BE0': ('wrong_class', 'Network::CountDisconnectedHouses vs ConnectionClass::IsConnected'),
        '0X00459840': ('wrong_class', 'HouseClass::GetRepairStepAmount vs TechnoTypeClass::GetRepairStep'),
        '0X00508DF0': ('wrong_class', 'HouseClass::CanTogglePower vs BuildingTypeClass::CanTogglePower'),
        '0X00522D50': ('wrong_class', 'InfantryClass::SlaveGiveMoney_RecordBalanceBefore vs HouseClass::GiveMoney'),
        '0X006351E0': ('wrong_class', 'ScriptAction::DecrementRefCount vs Count::DecrementRefCount'),
        '0X00642740': ('wrong_class', 'CoordStruct::Set2 vs CellClass::CoordStruct'),
        '0X00645C50': ('wrong_class', 'Int4::Set2 vs CoordUtil::Set2'),
        '0X00658780': ('wrong_class', 'TacticalClass::renderOverlay vs TacticalMap::RenderOverlay'),
        '0X006AF580': ('wrong_class', 'SlaveManagerClass::SetOwner vs EBolt::SetOwner'),
        '0X006EFC70': ('wrong_class', 'ProcessAISuperWeaponSelection vs TechnoClass::onSelect'),
        '0X006F9DC0': ('wrong_class', 'TechnoClass::GetTarget vs MovementAI::GetTarget'),
        '0X0070F7E0': ('wrong_class', 'FootClass::updateThreat vs CellClass::UpdateThreat'),
        '0X007241A0': ('wrong_class', 'Tooltip::Enable vs TriggerClass::Enable'),
        '0X0075F330': ('wrong_class', 'WaveClass::DamageArea vs MapClass::DamageArea'),
        '0X0053EE70': ('wrong_class', 'GUID::Compare vs GUIDUtil::Compare'),
        '0X00533D20': ('wrong_class', 'KeyboardConfig::LoadINI vs AudioSettings::LoadINI'),
        '0X005F9070': ('wrong_class', 'ObjectTypeClass::Load2DArt vs AnimTypeClass::Load2DArt'),
        '0X0074AA30': ('wrong_class', 'VoxelAnimClass::GetFrameCount vs ShpImage::GetFrameCount'),
        '0X005AC340': ('wrong_class', 'Scalar::Dtor vs TechnoClass::ScalarDtor'),
        '0X005B3A60': ('wrong_class', 'AbstractClass::getWeaponRange vs TechnoTypeClass::getWeaponRange'),
        
        # Constructor/Find pattern (hpp says Find but address is constructor)
        '0X005FE250': ('wrong_class', 'OverlayTypeClass::OverlayTypeClass (ctor) vs OverlayTypeClass::Find'),
        '0X006B5260': ('wrong_class', 'SmudgeTypeClass::SmudgeTypeClass (ctor) vs SmudgeTypeClass::Find'),
        '0X007470D0': ('wrong_class', 'UnitTypeClass::UnitTypeClass (ctor) vs UnitTypeClass::Find'),
        '0X0071DA80': ('wrong_class', 'TerrainTypeClass::TerrainTypeClass (ctor) vs TerrainTypeClass::Find'),
        
        # Wrong method name (same class, completely different function)
        '0X0049F740': ('wrong_method', 'Dialog::MapDialogResource vs Dialog::HandleLauncherMessage'),
        '0X0053A090': ('wrong_method', 'LightningStorm::End vs LightningStorm::RequestStop'),
        '0X0053B400': ('wrong_method', 'PsyDom::IsActive vs PsyDom::Active'),
        '0X005414C0': ('wrong_method', 'IPXManagerClass::release vs IPXManagerClass::CloseSession'),
        '0X005424A0': ('wrong_method', 'IPXManagerClass::CheckStatus vs IPXManagerClass::IsIPXAvailable'),
        '0X006CB560': ('wrong_method', 'SuperClass::StartTimer vs SuperClass::Grant'),
        '0X006CC080': ('wrong_method', 'SuperClass::AnnounceReady vs SuperClass::HasChargeProgressed'),
        '0X006CEA10': ('wrong_method', 'SuperWeaponTypeClass::SD_vt16 vs SuperWeaponTypeClass::MouseOverObject'),
        '0X006BB9A0': ('wrong_method', 'WinMain vs gamemd::WinMain (trailing colon artifact)'),
        '0X00753580': ('wrong_method', 'ChronoScreenEffect::DecrementCounter vs ChronoScreenEffect::Start'),
        '0X0053A100': ('wrong_method', 'LightningStorm::IsActive vs LightningStorm::HasDeferment'),
        '0X005CA800': ('wrong_method', 'MultiplayerSiege::ProcessTurn vs MultiplayerSiege::Process'),
        '0X0067A4A0': ('wrong_method', 'Stream::WriteIntArray vs Stream::WriteInt'),
        '0X00718000': ('wrong_method', 'TeleportLocomotionClass::TeleportLocomotionClass vs Release'),
    }
    
    if addr in known_a_cases:
        issue_type, description = known_a_cases[addr]
        # But check if we already have a B reason that overrides
        if not reasons or all(not r.startswith('constructor_') and not r.startswith('class_alias') for r in reasons):
            is_pipeline_a = True
            a_reason = f"{issue_type}: {description}"
    
    if is_pipeline_a:
        return ('A', a_reason, reasons)
    else:
        if not reasons:
            reasons.append("unclassified: no clear convention pattern — manual review needed")
        return ('B', '|'.join(reasons), [])

def main():
    mismatches = parse_audit_output('.omo/audit_output_full.txt')
    print(f"Parsed {len(mismatches)} normalized mismatches")
    
    pipeline_a = []
    pipeline_b = []
    
    for m in mismatches:
        pipeline, reason, b_reasons = classify_mismatch(m)
        
        entry = {
            'addr': m['addr'],
            'ida_name': m.get('ida_name'),
            'json_name': m.get('json_name'),
            'hpp_name': m.get('hpp_name'),
        }
        
        if pipeline == 'A':
            entry['issue'] = reason
            entry['fix'] = 'NEEDS IDA VERIFICATION'
            pipeline_a.append(entry)
        else:
            entry['reason'] = reason
            pipeline_b.append(entry)
    
    # Write output
    with open('mismatch_pipeline_a.json', 'w') as f:
        json.dump(pipeline_a, f, indent=2)
    with open('mismatch_pipeline_b.json', 'w') as f:
        json.dump(pipeline_b, f, indent=2)
    
    print(f"\nPipeline A (real bugs): {len(pipeline_a)}")
    print(f"Pipeline B (conventions): {len(pipeline_b)}")
    print(f"Total: {len(pipeline_a) + len(pipeline_b)}")
    
    if len(pipeline_a) > 0:
        print("\n=== PIPELINE A (REAL BUGS) ===")
        for entry in pipeline_a:
            ida_n = entry.get('ida_name') or '(none)'
            hpp_n = entry.get('hpp_name') or '(none)'
            print(f"  {entry['addr']}: {ida_n} → hpp: {hpp_n}")
            print(f"    Issue: {entry['issue']}")

if __name__ == '__main__':
    main()
