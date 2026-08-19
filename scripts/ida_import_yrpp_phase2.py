"""Parse YRpp class with NOVTABLE, multiple inheritance, and mixed func/data."""
import re, idc

YRPP_DIR = r"D:\RA2YR_ReSource\YRpp"

BASE_SIZES = {
    "AbstractClass": 0x24, "AbstractTypeClass": 0x60,
    "ObjectClass": 0xE4, "ObjectTypeClass": 0x150,
    "TechnoClass": 0x568, "TechnoTypeClass": 0x1E0,
    "FootClass": 0x618,
    "RadioClass": 0x10, "MissionClass": 0x38,
}

KNOWN_SIZES = {
    "CounterClass": 0xC0, "BaseClass": 0xD0, "BaseNodeClass": 0x28,
    "FactoryClass": 0x60, "PassengersClass": 0x20, "TemporalClass": 0x10,
    "BuildingLightClass": 0x80, "CaptureManagerClass": 0x14,
    "SlaveManagerClass": 0x14, "SpawnManagerClass": 0x14,
    "TagClass": 0x10, "TriggerClass": 0x10,
    "AlphaShapeClass": 0x10, "LaserDrawClass": 0x10,
    "WaveClass": 0x10, "RadBeam": 0x10,
    "IndexBitfield": 0x04, "AttachedAffectClass": 0x04,
    "BuildingAnimStruct": 0x30, "Powerup": 0x1C,
    "ColorStruct": 0x0C, "SHPStruct": 4,
    "DifficultyStruct": 0x50, "RocketStruct": 0x38,
    "Point2D": 8, "RectStruct": 0x10,
    "AITriggerTypeClass": 4,
    "CDTimerClass": 0x10, "TimerStruct": 0x0C,
}
TYPE_LIST_SIZE = 0x10

def robust_parse_header(path):
    with open(path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # Strip C++ comments (but be careful with // inside strings - we don't care)
    content = re.sub(r'//[^\n]*', '', content)
    content = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)
    
    # Find class declaration - handle NOVTABLE, multiple inheritance, etc.
    # Pattern: class [NOVTABLE] ClassName [: public Base1 [, public Base2 ...]] {
    cm = re.search(
        r'class\s+(?:\w+\s+)?(\w+)\s*'         # class + optional macro + name
        r'(?::\s*(?:public|private|protected)\s+(?:[\w:]+\s*,?\s*)*)?'  # optional bases
        r'\{',
        content
    )
    if not cm:
        return None, None, []
    
    class_name = cm.group(1)
    
    # Find class body by counting braces
    start = cm.end()
    depth = 1
    pos = start
    while depth > 0 and pos < len(content):
        if content[pos] == '{':
            depth += 1
        elif content[pos] == '}':
            depth -= 1
        pos += 1
    body = content[start - 1:pos]  # Include opening brace
    
    # Parse data members only - skip function declarations
    members = []
    offset = 0
    
    for line in body.split('\n'):
        line = line.strip()
        
        # Skip empty, comments, access specifiers
        if not line or line in ('public:', 'protected:', 'private:'):
            continue
        # Skip function declarations
        if '(' in line or '~' in line or 'operator' in line or 'JMP_' in line:
            continue
        # Skip static/constexpr
        if 'static' in line and ('constexpr' in line or 'Instance' in line):
            continue
        # Skip enum/union/struct/class definitions
        if line.startswith(('enum ', 'union ', 'struct ', 'class ')):
            continue
        # Skip macro-only lines
        if 'PROTECTED_PROPERTY' in line or 'OPTIONAL_PROPERTY' in line:
            continue
        
        cp = line.find('//')
        if cp >= 0:
            line = line[:cp].strip()
        
        if not line:
            continue
        
        # Alignment
        am = re.match(r'DWORD\s+(align_\w+)\s*;', line)
        if am:
            offset = ((offset + 3) // 4) * 4
            offset += 4
            continue
        
        # TypeList<...> name;
        tm = re.match(r'TypeList<[^>]+>\s+(\w+)\s*;', line)
        if tm:
            offset = ((offset + 3) // 4) * 4
            offset += TYPE_LIST_SIZE
            continue
        
        # byte name;
        bm = re.match(r'byte\s+(\w+)\s*;', line)
        if bm:
            offset += 1
            continue
        
        # GenericVector<...> name;
        gvm = re.match(r'(?:Generic|Dynamic)Vector(?:Class)?\s*<[^>]+>\s+(\w+)\s*;', line)
        if gvm:
            offset = ((offset + 3) // 4) * 4
            offset += TYPE_LIST_SIZE  # Similar size
            continue
        
        # Regular data member: type name; or type name[const];
        mm = re.match(r'([\w:<>,\s\*&]+?)\s+(\w+)\s*(?:\[[^\]]*\])?\s*;', line)
        if mm:
            raw_type = mm.group(1).strip()
            name = mm.group(2)
            sz = get_size(raw_type)
            if sz == 0:
                continue
            if sz == 8:
                offset = ((offset + 7) // 8) * 8
            elif sz == 4:
                offset = ((offset + 3) // 4) * 4
            members.append((offset, name, raw_type, sz))
            offset += sz
    
    return class_name, None, members  # base_name not extracted from complex declarations

def get_size(typename):
    typename = typename.replace('const ', '').replace('volatile ', '').strip()
    if typename.endswith('*') or typename.endswith('&'):
        return 4
    basic = {'int':4,'DWORD':4,'bool':1,'byte':1,'double':8,'float':4,
             'short':2,'unsigned':4,'long':4,'BYTE':1,'WORD':2,'BOOL':4,
             'HRESULT':4,'HANDLE':4,'HWND':4,'HINSTANCE':4,'LPARAM':4,
             'WPARAM':4,'LRESULT':4,'ULONG':4,'UINT':4,'LONG':4,
             'size_t':4,'CHAR':1,'wchar_t':2,'__int64':8}
    if typename in basic:
        return basic[typename]
    if typename in KNOWN_SIZES:
        return KNOWN_SIZES[typename]
    if typename in BASE_SIZES:
        return BASE_SIZES[typename]
    # Known class names -> pointer (4)
    if typename[0].isupper():
        return 4
    return 0

def create_ida_struct(class_name, members, base_offset=0):
    sid = idc.get_struc_id(class_name)
    if sid != idc.BADADDR:
        idc.del_struc(sid)
    
    sid = idc.add_struc(-1, class_name, 0)
    if sid == idc.BADADDR:
        return None, 0, 0
    
    added = 0
    for off, name, ty, sz in members:
        real_off = base_offset + off
        if sz == 1:
            flag = idc.FF_BYTE | idc.FF_DATA
        elif sz == 2:
            flag = idc.FF_WORD | idc.FF_DATA
        elif sz == 8:
            flag = idc.FF_QWORD | idc.FF_DATA
        elif ty == 'float':
            flag = idc.FF_FLOAT | idc.FF_DATA
        else:
            flag = idc.FF_DWORD | idc.FF_DATA
        
        err = idc.add_struc_member(sid, name, real_off, flag, -1, sz)
        if err == 0:
            added += 1
    
    total_sz = base_offset + members[-1][0] + members[-1][3] if members else base_offset
    return sid, added, total_sz

# Classes that need re-import: (header, class_name, base_size, instance_addr, instance_name)
FIX_TARGETS = [
    ("TechnoClass.h", "TechnoClass", 0x3B0, 0xA8EC78, "TechnoClass_Array"),  # ObjectClass(0xE4) + Radio(0x10) + Mission(0x38) + vtable ptrs = ~0x3B0
    ("HouseClass.h", "HouseClass", 0x24, 0xA8022C, "HouseClass_Array"),  # AbstractClass base
    ("FootClass.h", "FootClass", 0x568, None, None),  # TechnoClass base
    ("BuildingClass.h", "BuildingClass", 0x618, 0xB0F4EC, "BuildingClass_InstanceArray"),
    ("BulletClass.h", "BulletClass", 0xE4, None, None),  # ObjectClass base
    ("InfantryClass.h", "InfantryClass", 0x618, None, None),  # FootClass base
    ("UnitClass.h", "UnitClass", 0x618, None, None),
    ("AircraftClass.h", "AircraftClass", 0x618, None, None),
]

print("=== Phase 2: Import remaining core classes ===\n")
for header, class_name, base_off, inst_addr, inst_name in FIX_TARGETS:
    path = f"{YRPP_DIR}\\{header}"
    try:
        cname, _, members = robust_parse_header(path)
        if not cname:
            print(f"SKIP {header}: parse failed")
            continue
        
        sid, added, total = create_ida_struct(class_name, members, base_off)
        print(f"{class_name}: {added} members, base=0x{base_off:x}, total=0x{total:x}")
        
        if inst_addr and inst_name:
            ok = idc.SetType(inst_addr, f"{class_name} *")
            print(f"  SetType({inst_name}) -> {'OK' if ok else 'FAIL'}")
    except Exception as e:
        print(f"  ERROR: {e}")
