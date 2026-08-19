"""
YRpp to IDA Full Sync - V3
1. Delete & rebuild all struct members with correct offsets
2. Rename JMP_THIS functions at their binary addresses
3. Apply vt_entry renames
"""
import json, idc, idaapi, ida_bytes

JSON_PATH = r"D:\RA2YR_ReSource\tools\yrpp_full.json"

# Known parent class sizes for gap0
PARENT_SIZES = {
    'AbstractClass': 0x18, 'AbstractTypeClass': 0x7C,
    'ObjectClass': 0xA8, 'ObjectTypeClass': 0x7C,
    'MissionClass': 0xC0, 'RadioClass': 0xC4,
    'TechnoClass': 0x4B8, 'TechnoTypeClass': 0xCBC,
    'FootClass': 0x6C0, 'BuildingClass': 0x4B8,
    'BuildingTypeClass': 0xCBC,
    'InfantryClass': 0x6C0, 'UnitClass': 0x6C0, 'AircraftClass': 0x6C0,
    'InfantryTypeClass': 0xCBC, 'UnitTypeClass': 0xCBC, 'AircraftTypeClass': 0xCBC,
    'HouseClass': 0x18, 'HouseTypeClass': 0x7C,
    'WarheadTypeClass': 0x7C, 'WeaponTypeClass': 0x7C,
    'AnimTypeClass': 0x7C, 'AnimClass': 0xA8,
    'BulletTypeClass': 0x7C, 'BulletClass': 0xA8,
    'ParticleTypeClass': 0x7C, 'ParticleClass': 0xA8,
    'ParticleSystemTypeClass': 0x7C, 'ParticleSystemClass': 0xA8,
    'OverlayTypeClass': 0x7C, 'OverlayClass': 0xA8,
    'SmudgeTypeClass': 0x7C, 'SmudgeClass': 0xA8,
    'TerrainTypeClass': 0x7C, 'TerrainClass': 0xA8,
    'TiberiumClass': 0xA8,
    'SuperWeaponTypeClass': 0x7C, 'SuperClass': 0xA8,
    'TagTypeClass': 0x7C, 'TagClass': 0xA8,
    'TeamTypeClass': 0x7C, 'TeamClass': 0x18,
    'TriggerTypeClass': 0x7C, 'TriggerClass': 0xA8,
    'ScriptTypeClass': 0x7C, 'ScriptClass': 0x18,
    'TaskForceClass': 0x18,
    'TemporalClass': 0x18, 'WaveClass': 0x18,
    'AirstrikeClass': 0x18, 'SpawnManagerClass': 0x18,
    'CaptureManagerClass': 0x18, 'SlaveManagerClass': 0x18,
    'ParasiteClass': 0x18, 'FactoryClass': 0x18,
    'CellClass': 0x18, 'MapClass': 0x18,
    'RadarClass': 0x18, 'SidebarClass': 0x18,
    'TacticalClass': 0x18, 'DisplayClass': 0x18,
    'GScreenClass': 0x18, 'LocomotionClass': 0x0C,
    'FlyLocomotionClass': 0x0C, 'RocketLocomotionClass': 0x0C,
    'JumpjetLocomotionClass': 0x0C, 'WalkLocomotionClass': 0x0C,
    'ShipLocomotionClass': 0x0C, 'TunnelLocomotionClass': 0x0C,
    'MechLocomotionClass': 0x0C, 'DriveLocomotionClass': 0x0C,
    'HoverLocomotionClass': 0x0C, 'TeleportLocomotionClass': 0x0C,
    'LightConvertClass': 0x0C, 'ConvertClass': 0x0C,
    'AlphaShapeClass': 0x18, 'BombClass': 0x18,
    'DiskLaserClass': 0x18, 'EMPulseClass': 0x18,
    'LightSourceClass': 0x18, 'RadSiteClass': 0x18,
    'SideClass': 0x7C, 'BuildingLightClass': 0xA8,
    'NeuronClass': 0x18, 'VoxelAnimClass': 0x18,
    'Pipe': 0x18, 'SliderClass': 0x18, 'GadgetClass': 0x18,
    'LayerClass': 0x18, 'IsometricTileClass': 0xA8,
    'IsometricTileTypeClass': 0x7C,
    'GraphicMenuAnimItem': 0x18, 'GraphicMenuItem': 0x18,
    'CampaignClass': 0x7C, 'PowerClass': 0x18,
    'StageClass': 0x0C, 'FlasherClass': 0x0C,
    'MPBattleClass': 0x18, 'MPCombatTeam': 0x18,
    'MPCooperative': 0x18, 'MultiplayerSiege': 0x18,
    'MSOverlayAnim': 0x18, 'MSVQAnim': 0x18, 'MSPrintAnim': 0x18,
    'MSShapeAnim': 0x18, 'MSSfxEntry': 0x18,
    'AITriggerTypeClass': 0x7C, 'MapSeedClass': 0x18,
    'LoadOptionsClass': 0x18, 'LoadProgressMgr': 0x18,
    'SessionClass': 0x18, 'IPXManagerClass': 0x18,
    'IPXGlobalConnClass': 0x18, 'IPXInterfaceClass': 0x0C,
    'WinsockInterfaceClass': 0x18, 'UDPInterfaceClass': 0x18,
    'NullModemClass': 0x18, 'ModemGame': 0x18,
    'ModemGuest': 0x18, 'ModemHost': 0x18,
    'NetworkLobby': 0x18, 'NetworkManager': 0x18,
    'MouseClass': 0x18, 'KeyboardClass': 0x18,
    'ChatChannel': 0x18, 'ChatMessage': 0x18,
    'WOLobby': 0x18, 'WOLGameList': 0x18,
    'WinModemClass': 0x18, 'FilePipe': 0x0C,
}

def phase1_rebuild_structs(data):
    stats = {'ok': 0, 'skip': 0, 'err': 0}
    
    for cls_name, cls_data in data.items():
        members = cls_data.get('members', [])
        if not members: continue
        
        tid = idc.get_struc_id(cls_name)
        if tid == idc.BADADDR:
            tid = idc.add_struc(idc.BADADDR, cls_name, 0)
            if tid == idc.BADADDR:
                stats['skip'] += 1
                continue
        
        # Delete all existing members
        sz = idc.get_struc_size(tid)
        off = sz - 1
        while off >= 0:
            nm = idc.get_member_name(tid, off)
            if nm:
                idc.del_struc_member(tid, off)
            off -= 1
        
        # Set correct size
        target = cls_data.get('total_size', 0)
        cur = idc.get_struc_size(tid)
        if target > cur:
            idc.expand_struc(tid, 0, target - cur)
        
        # Add base gap for parent class
        base = PARENT_SIZES.get(cls_name, PARENT_SIZES.get(cls_data.get('parent',''), 0))
        if base > 0:
            idc.add_struc_member(tid, "parent_gap", 0, ida_bytes.dword_flag(), -1, base)
        
        # Add members
        for mem in members:
            off = mem['offset']
            vname = mem['name']
            vsize = mem['size']
            if vsize <= 0: continue
            
            flag = ida_bytes.byte_flag() if vsize == 1 else \
                   ida_bytes.word_flag() if vsize == 2 else \
                   ida_bytes.dword_flag()
            
            ret = idc.add_struc_member(tid, vname, off, flag, -1, vsize)
            if ret == 0:
                stats['ok'] += 1
            else:
                stats['err'] += 1
    
    return stats


def phase2_rename_jmp_this(data):
    stats = {'renamed': 0, 'skip': 0, 'err': 0}
    seen = set()
    
    for cls_name, cls_data in data.items():
        for jmp in cls_data.get('jmp_this', []):
            addr = jmp['addr']
            fname = jmp['name']
            
            if not (0x401000 <= addr < 0x7E1000): continue
            
            # Check if this address is a function
            fn = idaapi.get_func(addr)
            if not fn:
                continue  # Not code
            
            cur = idc.get_func_name(addr) or idc.get_name(addr) or ''
            new = '%s::%s' % (cls_name, fname)
            
            if cur == new:
                continue
            
            # Only rename if current name is generic
            if cur.startswith('sub_') or cur.startswith('nullsub') or 'j_' in cur or cur == '':
                if new not in seen:
                    seen.add(new)
                    if idc.set_name(addr, new, idc.SN_NOWARN):
                        stats['renamed'] += 1
                    else:
                        stats['err'] += 1
            elif '::' not in cur:
                if new not in seen:
                    seen.add(new)
                    if idc.set_name(addr, new, idc.SN_NOWARN):
                        stats['renamed'] += 1
                    else:
                        stats['err'] += 1
    
    return stats


def main():
    with open(JSON_PATH, 'r') as f:
        data = json.load(f)
    
    print("Loaded %d classes" % len(data))
    
    s1 = phase1_rebuild_structs(data)
    print("Phase 1 (structs): %d members, %d skip, %d err" % (s1['ok'], s1['skip'], s1['err']))
    
    s2 = phase2_rename_jmp_this(data)
    print("Phase 2 (JMP_THIS): %d renamed, %d skip, %d err" % (s2['renamed'], s2['skip'], s2['err']))
    
    print("Done!")

main()
