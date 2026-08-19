import json, os, re

YRPP_DIR = r"D:\RA2YR_ReSource\YRpp"

# Computed from YRpp declaration order + known parent sizes
PARENT_OFFSETS = {
    'AbstractClass': 0x00,  # IPersistStream base, 4 vtable ptrs = 0x10 base, but class starts at offset 0 in our structs
    'AbstractTypeClass': 0x18,
    'ObjectClass': 0x18,
    'ObjectTypeClass': 0x7C,
    'MissionClass': 0xA8,
    'RadioClass': 0xC0,
    'TechnoClass': 0xC4,
    'TechnoTypeClass': 0x7C,
    'FootClass': 0x4B8,
    'BuildingClass': 0x4B8,
    'InfantryClass': 0x6C0,
    'UnitClass': 0x6C0,
    'AircraftClass': 0x6C0,
    'BuildingTypeClass': 0xCBC,
    'InfantryTypeClass': 0xCBC,
    'UnitTypeClass': 0xCBC,
    'AircraftTypeClass': 0xCBC,
    'HouseClass': 0x18,
    'HouseTypeClass': 0x7C,
    'WarheadTypeClass': 0x7C,
    'WeaponTypeClass': 0x7C,
    'AnimTypeClass': 0x7C,
    'AnimClass': 0xA8,
    'BulletClass': 0xA8,
    'BulletTypeClass': 0x7C,
    'ParticleClass': 0xA8,
    'ParticleTypeClass': 0x7C,
    'ParticleSystemClass': 0xA8,
    'ParticleSystemTypeClass': 0x7C,
    'OverlayClass': 0xA8,
    'OverlayTypeClass': 0x7C,
    'SmudgeClass': 0xA8,
    'SmudgeTypeClass': 0x7C,
    'TerrainClass': 0xA8,
    'TerrainTypeClass': 0x7C,
    'TiberiumClass': 0xA8,
    'WaveClass': 0x18,
    'TagClass': 0xA8,
    'TagTypeClass': 0x7C,
    'TeamClass': 0x18,
    'TeamTypeClass': 0x7C,
    'TriggerClass': 0xA8,
    'TriggerTypeClass': 0x7C,
    'ScriptClass': 0x18,
    'ScriptTypeClass': 0x7C,
    'TaskForceClass': 0x18,
    'SuperClass': 0xA8,
    'SuperWeaponTypeClass': 0x7C,
    'TemporalClass': 0x18,
    'AirstrikeClass': 0x18,
    'SpawnManagerClass': 0x18,
    'CaptureManagerClass': 0x18,
    'SlaveManagerClass': 0x18,
    'ParasiteClass': 0x18,
    'FactoryClass': 0x18,
    'CellClass': 0x18,
    'MapClass': 0x18,
    'RadarClass': 0x18,
    'SidebarClass': 0x18,
    'TacticalClass': 0x18,
    'DisplayClass': 0x18,
    'GScreenClass': 0x18,
    'LocomotionClass': 0x0C,
    'FlyLocomotionClass': 0x0C,
    'RocketLocomotionClass': 0x0C,
    'JumpjetLocomotionClass': 0x0C,
    'WalkLocomotionClass': 0x0C,
    'ShipLocomotionClass': 0x0C,
    'TunnelLocomotionClass': 0x0C,
    'MechLocomotionClass': 0x0C,
    'DriveLocomotionClass': 0x0C,
    'HoverLocomotionClass': 0x0C,
    'TeleportLocomotionClass': 0x0C,
    'LightConvertClass': 0x0C,
    'ConvertClass': 0x0C,
    'AlphaShapeClass': 0x18,
    'BombClass': 0x18,
    'DiskLaserClass': 0x18,
    'EMPulseClass': 0x18,
    'LightSourceClass': 0x18,
    'RadSiteClass': 0x18,
    'SideClass': 0x7C,
    'BuildingLightClass': 0xA8,
    'NeuronClass': 0x18,
    'VoxelAnimClass': 0x18,
}

def typename_size(t):
    """Compute size of type."""
    t = t.strip()
    ptrs = t.count('*') + t.count('&')
    if ptrs: return 4 * ptrs
    
    m = re.search(r'\[(\d+)\]', t)
    if m:
        inner = t[:t.index('[')].strip()
        return typename_size(inner) * int(m.group(1))
    
    if 'YRComPtr<' in t or 'DynamicVectorClass<' in t or 'IndexBitfield<' in t:
        return 4
    
    basic = {'bool':1,'BYTE':1,'char':1,'WORD':2,'short':2,'wchar_t':2,
             'DWORD':4,'int':4,'long':4,'float':4,'unsigned':4,'unsigned int':4,
             'double':8,'__int64':8,'HRESULT':4,'VARIANT_BOOL':2,'LONG':4,'ULONG':4}
    
    # Clean type string
    for kw in ['const','static','unsigned']:
        t = t.replace(kw+' ','').replace(kw,'')
    t = t.strip()
    
    # Known structs
    structs = {'CoordStruct':0xC,'CellStruct':0x4,'Point2D':0x8,'RectangleStruct':0x10,
               'Matrix3DStruct':0x30,'Layer':4,'Rank':4,'CloakState':4,
               'AudioController':0x20,'TimerStruct':0x10,'ProgressTimer':0xC,
               'TransitionTimer':0x18,'FacingStruct':2,'RecoilData':0x10,
               'PassengersClass':0xC,'VeterancyStruct':8,'FlashData':0x14,
               'OwnedTiberiumStruct':8,'ParasiteClass':8,'PlanningTokenClass':8,
               'RadBeam':8,'LaserDrawClass':8,'CaptureManagerClass':8,'SlaveManagerClass':8}
    
    for k,v in structs.items():
        if k in t: return v
    
    return basic.get(t, 4)


def parse_members(content, start_marker='Properties ====='):
    """Parse member variables from content after marker."""
    idx = content.find(start_marker)
    if idx < 0: return []
    end = content.find('};', idx)
    if end < 0: end = len(content)
    text = content[idx:end]
    
    members = []
    for line in text.split('\n'):
        line = line.strip()
        if not line or line.startswith('//') or line.startswith('/*') or line.startswith('*'):
            continue
        if any(line.startswith(x) for x in ['virtual','static','constexpr','explicit','operator','~','}','#']):
            continue
        
        # PROTECTED_PROPERTY(Type, name);
        m = re.match(r'PROTECTED_PROPERTY\s*\(\s*([^,]+)\s*,\s*([^)]+)\s*\)\s*;', line)
        if m:
            members.append((m.group(2).strip(), m.group(1).strip()))
            continue
        
        # Array: Type name[N];
        m = re.match(r'([\w\s*&<>:,-]+?)\s+(\w+)\s*\[([^\]]+)\]\s*;', line)
        if m:
            t = m.group(1).strip()
            n = m.group(2).strip()
            sz = m.group(3).strip()
            if n not in ('noinit_t',):
                members.append((n, t + '[' + sz + ']'))
            continue
        
        # Regular: Type name; or Type name = value;
        m = re.match(r'([\w\s*&<>:,-]+?)\s+(\w+)\s*(?:=\s*[^;]+)?\s*;', line)
        if m:
            t = m.group(1).strip()
            n = m.group(2).strip()
            if n not in ('noinit_t','AbsDerivateID','Array','Tile','Instance','CurrentObjects',
                         'Reference','CurrentTimer','Waypoint','Empty'):
                members.append((n, t))
    
    return members


def parse_vtable(content):
    """Parse virtual function signatures."""
    entries = []
    named = []
    for line in content.split('\n'):
        line = line.strip()
        m = re.match(r'virtual\s+[\w\s*&<>:,\[\]]+\s+vt_entry_([0-9A-Fa-f]+)\s*\(', line)
        if m:
            entries.append(('vt_entry_%X' % int(m.group(1),16), int(m.group(1),16) // 4))
            continue
        m = re.match(r'virtual\s+[\w\s*&<>:,\[\]]+\s+(\w+)\s*\(([^)]*)\)\s*(?:const\s*)?\s*(?:R0|RX|RT\()', line)
        if m:
            fname = m.group(1)
            if not fname.startswith('vt_entry_') and not fname.startswith('~') and fname != '':
                named.append(fname)
    return entries, named


def main():
    all_data = {}
    for h_file in sorted(os.listdir(YRPP_DIR)):
        if not h_file.endswith('.h'): continue
        path = os.path.join(YRPP_DIR, h_file)
        try:
            with open(path, 'r', encoding='utf-8', errors='replace') as f:
                content = f.read()
        except: continue
        
        m = re.search(r'class\s+(?:NOVTABLE\s+)?(\w+)\s*:\s*public\s+(\w+)', content)
        if not m: continue
        
        cls = m.group(1)
        parent = m.group(2)
        members = parse_members(content)
        vt_entries, named_vts = parse_vtable(content)
        
        # Compute offsets
        base = PARENT_OFFSETS.get(cls, PARENT_OFFSETS.get(parent, 0))
        off = base
        members_off = []
        for vname, vtype in members:
            sz = typename_size(vtype)
            members_off.append((off, vname, vtype, sz))
            off += sz
        
        all_data[cls] = {
            'parent': parent,
            'file': h_file,
            'base_offset': base,
            'total_size': off,
            'members': members_off,
            'vt_entries': vt_entries,
            'named_vts': named_vts,
        }
    
    with open(r'D:\RA2YR_ReSource\tools\yrpp_data.json', 'w') as f:
        json.dump(all_data, f, indent=2)
    
    print("Wrote %d classes to yrpp_data.json" % len(all_data))
    for cls in sorted(all_data.keys()):
        d = all_data[cls]
        print("%-30s %-20s base=0x%03X size=0x%03X %3d members %2d vt_entry" % (
            cls, d['parent'], d['base_offset'], d['total_size'], len(d['members']), len(d['vt_entries'])))

main()
