"""Extract all YRpp data: JMP_THIS, members, vt_entries with multi-line support."""
import re, os, json

YRPP = r"D:\RA2YR_ReSource\YRpp"

def typename_size(t):
    t = t.strip()
    ptrs = t.count('*') + t.count('&')
    if ptrs: return 4 * ptrs
    m = re.search(r'\[(\d+)\]', t)
    if m:
        inner = t[:t.index('[')].strip()
        return typename_size(inner) * int(m.group(1))
    basic = {
        'bool':1,'BYTE':1,'char':1,'WORD':2,'short':2,'wchar_t':2,'unsigned char':1,'uint8_t':1,
        'DWORD':4,'int':4,'long':4,'float':4,'unsigned':4,'unsigned int':4,
        'double':8,'__int64':8,'HRESULT':4,'VARIANT_BOOL':2,'LONG':4,'ULONG':4,'UINT':4,
    }
    for kw in ['const','static','unsigned']: t = t.replace(kw+' ','').replace(kw,'')
    t = t.strip()
    structs = {
        'CoordStruct':0xC,'CellStruct':0x4,'Point2D':0x8,'RectangleStruct':0x10,
        'Matrix3DStruct':0x30,'Layer':4,'Rank':4,'CloakState':4,
        'AudioController':0x20,'TimerStruct':0x10,'ProgressTimer':0xC,
        'TransitionTimer':0x18,'FacingStruct':2,'RecoilData':0x10,
        'PassengersClass':0xC,'VeterancyStruct':8,'FlashData':0x14,
        'OwnedTiberiumStruct':8,'ParasiteClass':8,'PlanningTokenClass':8,
        'RadBeam':8,'LaserDrawClass':8,'CaptureManagerClass':8,'SlaveManagerClass':8,
        'DynamicVectorClass':0x18,  # vector header (vtable+capacity+size+data ptr)
        'YRComPtr':4,'IndexBitfield':4,
    }
    for k,v in structs.items():
        if k in t: return v
    return basic.get(t, 4)

def main():
    data = {}
    for h_file in sorted(os.listdir(YRPP)):
        if not h_file.endswith('.h'): continue
        path = os.path.join(YRPP, h_file)
        with open(path, encoding='utf-8', errors='replace') as f:
            content = f.read()
            lines = content.split('\n')
        
        m = re.search(r'class\s+(?:NOVTABLE\s+)?(\w+)\s*:\s*public\s+(\w+)', content)
        if not m: continue
        cls = m.group(1)
        parent = m.group(2)
        
        # Extract JMP_THIS with multi-line function name lookup
        jmps = []
        for i, line in enumerate(lines):
            jm = re.search(r'JMP_THIS\(0x([0-9A-Fa-f]+)\)', line)
            if not jm: continue
            addr = int(jm.group(1), 16)
            # Look backwards for function name
            fname = None
            for j in range(i-1, max(i-5, -1), -1):
                prev = lines[j].strip()
                if prev.startswith('//') or prev.startswith('/*'): continue
                fn = re.match(r'(?:[\w\s*&<>:,-]+?)\s+(\w+)\s*\(', prev)
                if fn:
                    fname = fn.group(1)
                    break
            if fname:
                jmps.append({'name': fname, 'addr': addr, 'class': cls})
        
        # Extract members
        members = []
        idx = content.find('Properties =====')
        if idx >= 0:
            end = content.find('};', idx)
            if end < 0: end = len(content)
            text = content[idx:end]
            for line in text.split('\n'):
                line = line.strip()
                if not line or line.startswith('//'): continue
                if any(line.startswith(x) for x in ['virtual','static','constexpr','explicit',
                    'operator','~','}','#','class ','struct ','enum ','union ',
                    'public:','private:','protected:']):
                    continue
                
                m2 = re.match(r'PROTECTED_PROPERTY\s*\(\s*([^,]+)\s*,\s*([^)]+)\s*\)\s*;', line)
                if m2:
                    members.append({'name': m2.group(2).strip(), 'type': m2.group(1).strip()})
                    continue
                m2 = re.match(r'([\w\s*&<>:,-]+?)\s+(\w+)\s*\[([^\]]+)\]\s*;', line)
                if m2:
                    n = m2.group(2).strip()
                    if n != 'noinit_t':
                        members.append({'name': n, 'type': m2.group(1).strip() + '[' + m2.group(3).strip() + ']'})
                    continue
                m2 = re.match(r'([\w\s*&<>:,-]+?)\s+(\w+)\s*(?:=\s*[^;]+)?\s*;', line)
                if m2:
                    n = m2.group(2).strip()
                    if n not in ('noinit_t','AbsDerivateID','Array','Tile','Instance',
                                 'CurrentObjects','Reference','CurrentTimer','Waypoint',
                                 'Empty','Objects','Padding'):
                        members.append({'name': n, 'type': m2.group(1).strip()})
        
        # Extract vt_entries
        vt_entries = []
        for m3 in re.finditer(r'virtual\s+[\w\s*&<>:,\[\]]+\s+vt_entry_([0-9A-Fa-f]+)\s*\(([^)]*)\)', content):
            vt_entries.append({'offset': int(m3.group(1), 16), 'params': m3.group(2).strip()})
        
        # Compute member offsets
        # Known parent class sizes
        parent_sizes = {
            'AbstractClass': 0x18, 'AbstractTypeClass': 0x7C,
            'ObjectClass': 0xA8, 'ObjectTypeClass': 0x7C,
            'MissionClass': 0xC0, 'RadioClass': 0xC4,
            'TechnoClass': 0x4B8, 'TechnoTypeClass': 0xCBC,
            'FootClass': 0x6C0,
            'BuildingClass': 0x4B8,  # starts after TechnoClass
            'BuildingTypeClass': 0xCBC,
            'InfantryClass': 0x6C0, 'UnitClass': 0x6C0, 'AircraftClass': 0x6C0,
            'InfantryTypeClass': 0xCBC, 'UnitTypeClass': 0xCBC, 'AircraftTypeClass': 0xCBC,
            'HouseClass': 0x18, 'HouseTypeClass': 0x7C,
        }
        base = parent_sizes.get(cls, parent_sizes.get(parent, 0))
        off = base
        members_off = []
        for mem in members:
            sz = typename_size(mem['type'])
            members_off.append({'offset': off, 'name': mem['name'], 'type': mem['type'], 'size': sz})
            off += sz
        
        data[cls] = {
            'parent': parent, 'file': h_file,
            'jmp_this': jmps, 'members': members_off, 'vt_entries': vt_entries,
            'total_size': off,
        }
    
    with open(r"D:\RA2YR_ReSource\tools\yrpp_full.json", 'w') as f:
        json.dump(data, f, indent=2)
    
    total_jmp = sum(len(d['jmp_this']) for d in data.values())
    total_mem = sum(len(d['members']) for d in data.values())
    print(f"{len(data)} classes: {total_jmp} JMP_THIS, {total_mem} members")

main()
