"""
YRpp to IDA Struct Generator
Parses YRpp headers, computes member offsets, generates C struct declarations
for IDA type library.
"""
import os, re

YRPP_DIR = r"D:\RA2YR_ReSource\YRpp"

# Known class sizes from IDA-verified measurements (bytes, hex)
KNOWN_CLASS_SIZES = {
    'AbstractClass':       0x18,
    'AbstractTypeClass':   0x7C,
    'ObjectClass':         0xA8,
    'MissionClass':        0xC0,
    'RadioClass':          0xC4,
    'TechnoClass':         0x4B8,
    'FootClass':           0x6C0,
    'BuildingClass':       0x720,
    'InfantryClass':       0x6F4,
    'UnitClass':           0x6F0,
    'AircraftClass':       0x6BC,
    'BuildingTypeClass':   0xDD0,
    'TechnoTypeClass':     0xCBC,
    'InfantryTypeClass':   0xD3C,
    'UnitTypeClass':       0xD40,
    'AircraftTypeClass':   0xD0C,
    'ObjectTypeClass':     0x7C,
    'WarheadTypeClass':    0xDD8,  # approximate
    'WeaponTypeClass':     0xD98,  # approximate
    'AnimTypeClass':       0xDDC,
    'HouseClass':          0xD49C,
    'HouseTypeClass':      0xDC8,
}

PTR_SIZE = 4

# Known struct sizes (non-pointer embedded objects)
STRUCT_SIZES = {
    'CoordStruct': 0xC, 'CellStruct': 0x4, 'Point2D': 0x8,
    'RectangleStruct': 0x10, 'Matrix3DStruct': 0x30,
    'Layer': 0x4, 'Rank': 0x4, 'CloakState': 0x4,
}

# Known class sizes for embedded objects (from YRpp analysis)
EMBEDDED_SIZES = {
    'AudioController': 0x20,
    'TimerStruct': 0x10, 'RepeatableTimerStruct': 0x10,
    'ProgressTimer': 0xC, 'TransitionTimer': 0x18,
    'FacingStruct': 0x2, 'RecoilData': 0x10,
    'PassengersClass': 0xC,
    'VeterancyStruct': 0x8,
    'FlashData': 0x14,
    'OwnedTiberiumStruct': 0x8,
    'ParasiteClass': 0x8,
    'PlanningTokenClass': 0x8,
    'RadBeam': 0x8,
    'LaserDrawClass': 0x8,
    'CaptureManagerClass': 0x8,
    'SlaveManagerClass': 0x8,
}

BASIC_SIZES = {
    'bool': 1, 'BOOL': 4, 'BYTE': 1, 'WORD': 2, 'DWORD': 4,
    'int': 4, 'unsigned': 4, 'unsigned int': 4,
    'short': 2, 'unsigned short': 2, '__int16': 2,
    'long': 4, 'unsigned long': 4,
    'float': 4, 'double': 8,
    'char': 1, 'signed char': 1, 'unsigned char': 1, 'uint8_t': 1,
    'wchar_t': 2, '__int64': 8, 'unsigned __int64': 8,
    'HRESULT': 4, 'VARIANT_BOOL': 2,
    'LONG': 4, 'ULONG': 4, 'UINT': 4,
}

def typename_to_c(typename):
    """Convert YRpp typename to C-compatible type for IDA."""
    t = typename.strip()
    # Remove access specifiers
    if t.startswith('public:'): t = t[7:].strip()
    if t.startswith('private:'): t = t[8:].strip()
    if t.startswith('protected:'): t = t[10:].strip()
    t = t.strip()
    if not t: return 'int'
    
    # Strip leading/trailing junk
    t = re.sub(r'\s+', ' ', t)
    
    # Fix known type naming issues
    if t in ['IndexBitfield', 'IndexBitfield<HouseClass *>']:
        t = 'int'
    
    # YRComPtr -> void* or ILocomotion*
    if 'YRComPtr<' in t:
        m = re.search(r'YRComPtr<([^>]+)>', t)
        if m:
            t = m.group(1).strip() + '*'
        else:
            t = 'void*'
    
    # DynamicVectorClass<T> -> T* (pointer to first element, vtable ptr elsewhere)
    if 'DynamicVectorClass<' in t:
        m = re.search(r'DynamicVectorClass<([^>]+)>', t)
        if m:
            inner = m.group(1).strip()
            if inner.endswith('*'): t = 'int'  # pointer array = int for tracking
            else: t = 'int'
        else:
            t = 'int'
    
    # Handle pointer types
    while t.endswith('*') or t.endswith('&'):
        t = t[:-1].strip()
    
    # Map C++ types to C
    type_map = {
        'bool': 'bool', 'BOOL': 'int', 'BYTE': 'unsigned char',
        'WORD': 'unsigned short', 'DWORD': 'int',
        'int': 'int', 'unsigned': 'unsigned int',
        'unsigned int': 'unsigned int', 'short': 'short',
        'unsigned short': 'unsigned short',
        'long': 'int', 'unsigned long': 'unsigned int',
        'float': 'float', 'double': 'double',
        'char': 'char', 'signed char': 'char',
        'unsigned char': 'unsigned char',
        'wchar_t': 'wchar_t', '__int64': 'long long',
        'HRESULT': 'int', 'VARIANT_BOOL': 'short',
        'LONG': 'int', 'ULONG': 'unsigned int',
        'UINT': 'unsigned int',
    }
    
    if t in type_map:
        return type_map[t]
    
    # Check BASIC_SIZES
    if t in BASIC_SIZES:
        return t
    
    # Check STRUCT_SIZES
    if t in STRUCT_SIZES:
        return t
    
    # Check EMBEDDED_SIZES
    if t in EMBEDDED_SIZES:
        return t  # use the struct name as-is
    
    # Pointer to known class -> int (we treat pointers as void*)
    return 'int'


def compute_member_size(type_str):
    """Compute size of a member from its C++ type string."""
    t = type_str.strip()
    
    # Strip leading junk
    while t.startswith('public:') or t.startswith('private:') or t.startswith('protected:'):
        t = t.split(':', 1)[1].strip()
    t = t.strip()
    if not t: return 4
    
    # Pointers/references: always 4 bytes
    if '*' in t or '&' in t.split('[')[0].split('(')[0]:
        # Count pointer levels
        ptr_count = t.split('[')[0].split('(')[0].count('*')
        ptr_count += t.split('[')[0].split('(')[0].count('&')
        if ptr_count > 0:
            return 4 * ptr_count
    
    # Arrays: Type name[N] or Type name[expression]
    m = re.search(r'\[([^\]]+)\]', t)
    if m:
        inner = t[:m.start()].strip()
        count_str = m.group(1).strip()
        try:
            count = int(count_str)
        except ValueError:
            count = int(count_str, 16) if count_str.startswith('0x') else 1
        return compute_member_size(inner) * count
    
    # YRComPtr -> 4 bytes
    if 'YRComPtr<' in t:
        return 4
    
    # DynamicVectorClass -> 4 bytes (pointer to data)
    if 'DynamicVectorClass<' in t:
        return 4 * 6  # 6 DWORDs for vector header
    
    # IndexBitfield -> 4 bytes
    if 'IndexBitfield<' in t:
        return 4
    
    # Remove keywords
    base = t
    for kw in ['const ', 'static ', 'constexpr ', 'virtual ', 'explicit ']:
        base = base.replace(kw, '')
    base = base.strip()
    
    # Check known sizes
    for name, sz in sorted(BASIC_SIZES.items(), key=lambda x: -len(x[0])):
        if base == name or base.startswith(name + ' '):
            return sz
    
    for name, sz in sorted(STRUCT_SIZES.items(), key=lambda x: -len(x[0])):
        if base == name or base.startswith(name + ' '):
            return sz
    
    for name, sz in sorted(EMBEDDED_SIZES.items(), key=lambda x: -len(x[0])):
        if base == name or base.startswith(name + ' '):
            return sz
    
    # Assume pointer or known class type -> 4 bytes
    return 4


def parse_yrpp_headers():
    """Parse YRpp headers for class definitions with members."""
    classes = {}
    h_files = sorted([f for f in os.listdir(YRPP_DIR) if f.endswith('.h')])
    
    for h_file in h_files:
        path = os.path.join(YRPP_DIR, h_file)
        try:
            with open(path, 'r', encoding='utf-8', errors='replace') as f:
                content = f.read()
        except:
            continue
        
        # Find class declarations
        m = re.search(r'class\s+(?:NOVTABLE\s+)?(\w+)\s*:\s*public\s+(\w+)', content)
        if not m:
            continue
        
        class_name = m.group(1)
        parent_name = m.group(2)
        
        # Find Properties section
        props_marker = 'Properties ====='
        props_idx = content.find(props_marker)
        if props_idx < 0:
            continue
        
        # Find end of class
        end_idx = content.find('};', props_idx)
        if end_idx < 0:
            end_idx = len(content)
        
        props_content = content[props_idx:end_idx]
        
        # Parse member variable lines
        members = []
        lines = props_content.split('\n')
        
        skip_until_semicolon = False
        current_type = ''
        current_name = ''
        
        for line in lines:
            line = line.strip()
            if not line or line.startswith('//') or line.startswith('/*') or line.startswith('*'):
                continue
            
            # Skip function-like patterns
            if line.startswith('virtual ') or line.startswith('static ') or line.startswith('constexpr ') or line.startswith('explicit '):
                continue
            if line.startswith('operator ') or line.startswith('~') or line.startswith('}'):
                continue
            
            # PROTECTED_PROPERTY macro
            m = re.match(r'PROTECTED_PROPERTY\s*\(\s*([^,]+)\s*,\s*([^)]+)\s*\)\s*;', line)
            if m:
                type_str = m.group(1).strip()
                var_name = m.group(2).strip()
                size = compute_member_size(type_str)
                members.append((var_name, type_str, size))
                continue
            
            # Regular member: Type name; or Type name = value;
            m = re.match(r'([\w\s*&<>:,-]+?)\s+(\w+)\s*(?:=\s*[^;]+)?\s*;', line)
            if m:
                type_str = m.group(1).strip()
                var_name = m.group(2).strip()
                
                # Skip common non-members
                if var_name in ['noinit_t', 'AbsDerivateID', 'Array', 'Tile', 'SidebarBounds',
                                'ViewportBounds', 'Instance', 'CurrentObjects']:
                    continue
                
                size = compute_member_size(type_str)
                members.append((var_name, type_str, size))
                continue
            
            # Array member: Type name[N];
            m = re.match(r'([\w\s*&<>:,-]+?)\s+(\w+)\s*\[([^\]]+)\]\s*;', line)
            if m:
                type_str = m.group(1).strip()
                var_name = m.group(2).strip()
                array_size = m.group(3).strip()
                size = compute_member_size(type_str + '[' + array_size + ']')
                members.append((var_name, type_str, size))
                continue
        
        # Extract virtual function info
        vt_entries = []
        # Find vt_entry_XXX patterns
        for vm in re.finditer(r'virtual\s+[\w\s*&<>:,\[\]]+\s+vt_entry_([0-9A-Fa-f]+)\s*\(', content):
            offset = int(vm.group(1), 16)
            vt_entries.append(('vt_entry_%X' % offset, offset))
        
        # Named virtual functions
        named_vts = []
        for vm in re.finditer(r'virtual\s+[\w\s*&<>:,\[\]]+\s+(\w+)\s*\(([^)]*)\)\s*(?:const\s*)?\s*(?:R0|RX|RT\()', content):
            fname = vm.group(1)
            if fname.startswith('vt_entry_') or fname.startswith('~') or fname == class_name:
                continue
            named_vts.append(fname)
        
        classes[class_name] = {
            'parent': parent_name,
            'file': h_file,
            'members': members,
            'vt_entries': vt_entries,
            'named_vts': named_vts,
        }
    
    return classes


def compute_offsets(classes):
    """Compute absolute byte offsets from parent class sizes."""
    for cls_name, cls_data in classes.items():
        parent = cls_data['parent']
        base_offset = KNOWN_CLASS_SIZES.get(parent, 0)
        
        offset = base_offset
        members_off = []
        for var_name, type_str, size in cls_data['members']:
            members_off.append((offset, var_name, type_str, size))
            offset += size
        
        cls_data['base_offset'] = base_offset
        cls_data['members_offset'] = members_off
        cls_data['total_size'] = offset
    
    return classes


def generate_struct_decl(cls_name, cls_data):
    """Generate a C struct declaration from parsed data."""
    lines = ['struct %s {' % cls_name]
    
    current_offset = 0
    prev_end = 0
    
    for off, vname, vtype, vsize in cls_data.get('members_offset', []):
        # Add padding if needed
        if off > current_offset:
            pad = off - current_offset
            # Use char array for alignment padding
            ctype = typename_to_c(vtype)
            # Actually for padding use unsigned char gap
            if pad > 0:
                lines.append('  unsigned char gap_%X[%d];' % (current_offset, pad))
        
        ctype = typename_to_c(vtype)
        lines.append('  %s %s;  // +0x%03X' % (ctype, vname, off))
        current_offset = off + vsize
    
    # Add final padding to reach total size
    total = cls_data.get('total_size', 0)
    if total > current_offset:
        lines.append('  unsigned char gap_%X[%d];' % (current_offset, total - current_offset))
    
    lines.append('};')
    return '\n'.join(lines)


def main():
    classes = parse_yrpp_headers()
    classes = compute_offsets(classes)
    
    # Print summary
    for cls_name in sorted(classes.keys()):
        c = classes[cls_name]
        sz = c.get('total_size', 0)
        nc = len(c['members'])
        nv = len(c['vt_entries'])
        nn = len(c['named_vts'])
        print("%-30s : %-20s %5d B %3d members %2d vt_entry %2d named_vt" % (
            cls_name, c['parent'], sz, nc, nv, nn))
    
    print("\n=== Generated struct declarations ===")
    for cls_name in sorted(classes.keys()):
        c = classes[cls_name]
        if len(c['members']) < 5:
            continue
        decl = generate_struct_decl(cls_name, c)
        print('\n// %s (parent=%s, file=%s)' % (cls_name, c['parent'], c['file']))
        print(decl)

if __name__ == '__main__':
    main()
