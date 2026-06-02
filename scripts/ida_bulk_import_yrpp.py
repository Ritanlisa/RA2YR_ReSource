"""Bulk import all major YRpp class structs into IDA."""
import re
import idc

YRPP_DIR = r"D:\RA2YR_ReSource\YRpp"

# Base class sizes (measured from IDA / known from compiled binary)
# These are the sizes of full base class instances (including vtable ptrs)
BASE_SIZES = {
    "AbstractClass": 0x24,        # 36 bytes (4 vtable ptrs + members)
    "AbstractTypeClass": 0x60,    # 96 bytes
    "ObjectClass": 0xE4,          # 228 bytes (AbstractClass + Object members)
    "ObjectTypeClass": 0x150,     # 336 bytes (AbstractTypeClass + ObjectType members)
    "TechnoClass": 0x568,         # ~1384 bytes  
    "TechnoTypeClass": 0x1E0,     # 480 bytes
    "FootClass": 0x618,           # ~1560 bytes
    "RadioClass": 0x10,           # 16 bytes
    "MissionClass": 0x38,         # 56 bytes
}

KNOWN_SIZES = {
    "DifficultyStruct": 0x50,
    "RocketStruct": 0x38,
    "Powerup": 0x1C,
    "ColorStruct": 0x0C,
    "SHPStruct": 4,
    "BuildingAnimStruct": 0x30,
    "BuildingAnimFrameStruct": 0x0C,
    "Point2D": 0x08,
}
TYPE_LIST_SIZE = 0x10

# Classes to import: (filename, class_name, instance_addr, instance_name) or None if no instance
TARGETS = [
    # Core hierarchy
    ("ObjectClass.h", "ObjectClass", 0xA8ECB8, "ObjectClass_CurrentObjects"),
    ("TechnoClass.h", "TechnoClass", 0xA8EC78, "TechnoClass_Array"),
    # Type hierarchy  
    ("BuildingTypeClass.h", "BuildingTypeClass", 0xA83D84, "BuildingTypeClass_Array"),
    ("TechnoTypeClass.h", "TechnoTypeClass", None, None),
    ("WarheadTypeClass.h", "WarheadTypeClass", 0x8874C0, "WarheadTypeClass_Array"),
    ("WeaponTypeClass.h", "WeaponTypeClass", 0x887568, "WeaponTypeClass_Array"),
    ("HouseClass.h", "HouseClass", 0xA8022C, "HouseClass_Array"),
    ("HouseTypeClass.h", "HouseTypeClass", None, None),
    ("BulletTypeClass.h", "BulletTypeClass", None, None),
    ("AnimTypeClass.h", "AnimTypeClass", None, None),
    ("VoxelAnimTypeClass.h", "VoxelAnimTypeClass", None, None),
    ("SuperWeaponTypeClass.h", "SuperWeaponTypeClass", None, None),
    ("TeamClass.h", "TeamClass", None, None),
    ("TeamTypeClass.h", "TeamTypeClass", None, None),
    ("MissionClass.h", "MissionClass", None, None),
    ("FactoryClass.h", "FactoryClass", None, None),
    ("CellClass.h", "CellClass", None, None),
    ("InfantryTypeClass.h", "InfantryTypeClass", None, None),
    ("UnitTypeClass.h", "UnitTypeClass", None, None),
]

def parse_header(path):
    """Parse YRpp header to extract class name, base class, and members."""
    with open(path, 'r', encoding='utf-8') as f:
        content = f.read()
    content = re.sub(r'//.*', '', content)
    content = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)
    
    # Find class declaration
    cm = re.search(r'class\s+(?:\w+\s+)?(\w+)\s*(?::\s*public\s+(\w+))?\s*\{', content)
    if not cm:
        return None, None, []
    
    class_name = cm.group(1)
    base_name = cm.group(2)
    
    # Find class body
    # Count braces
    start = cm.end()
    depth = 1
    pos = start
    while depth > 0 and pos < len(content):
        if content[pos] == '{':
            depth += 1
        elif content[pos] == '}':
            depth -= 1
        pos += 1
    body = content[start:pos-1]
    
    members = parse_members(body)
    return class_name, base_name, members

def parse_members(body):
    """Extract member list from class body."""
    members = []
    offset = 0
    
    for line in body.split('\n'):
        line = line.strip()
        if not line or line.startswith('//'):
            continue
        if line in ('public:', 'protected:', 'private:'):
            continue
        if '(' in line or '~' in line or 'operator' in line:
            continue
        if 'JMP_' in line or 'PROTECTED_PROPERTY' in line:
            continue
        if 'static' in line and ('constexpr' in line or 'Instance' in line):
            continue
        if line == '};':
            continue
        
        cp = line.find('//')
        if cp >= 0:
            line = line[:cp].strip()
        
        # Alignment
        am = re.match(r'DWORD\s+(align_\w+)\s*;', line)
        if am:
            offset = ((offset + 3) // 4) * 4
            offset += 4
            continue
        
        # TypeList<...>
        tm = re.match(r'TypeList<[^>]+>\s+(\w+)\s*;', line)
        if tm:
            offset = ((offset + 3) // 4) * 4
            offset += TYPE_LIST_SIZE
            continue
        
        # byte
        bm = re.match(r'byte\s+(\w+)\s*;', line)
        if bm:
            offset += 1
            continue
        
        # Regular member
        mm = re.match(r'([\w:<>,\s\*]+?)\s+(\w+)\s*;', line)
        if mm:
            raw_type = mm.group(1).strip()
            sz = get_size(raw_type)
            if sz == 0:
                continue
            if sz == 8:
                offset = ((offset + 7) // 8) * 8
            elif sz == 4:
                offset = ((offset + 3) // 4) * 4
            members.append((offset, mm.group(2), raw_type, sz))
            offset += sz
    
    return members

def get_size(typename):
    typename = typename.replace('const ', '').replace('volatile ', '').strip()
    if typename.endswith('*'):
        return 4
    basic = {'int':4,'DWORD':4,'bool':1,'byte':1,'double':8,'float':4,
             'short':2,'unsigned':4,'long':4,'BYTE':1,'WORD':2,'BOOL':4,
             'HRESULT':4,'HANDLE':4,'HWND':4,'HINSTANCE':4,'LPARAM':4,'WPARAM':4}
    if typename in basic:
        return basic[typename]
    if typename in KNOWN_SIZES:
        return KNOWN_SIZES[typename]
    if typename in BASE_SIZES:
        return BASE_SIZES[typename]
    if typename[0].isupper():
        return 4
    return 0

def create_struct(class_name, base_name, members, base_offset=0):
    """Create IDA struct from parsed members."""
    sid = idc.get_struc_id(class_name)
    if sid != idc.BADADDR:
        idc.del_struc(sid)
    
    sid = idc.add_struc(-1, class_name, 0)
    if sid == idc.BADADDR:
        return None
    
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
    
    return (sid, added, base_offset + members[-1][0] + members[-1][3] if members else 0)

def main():
    print("=== YRpp Bulk Struct Import ===\n")
    
    # Track base class sizes we learn
    learned_sizes = {}
    
    for header, class_name, inst_addr, inst_name in TARGETS:
        path = f"{YRPP_DIR}\\{header}"
        try:
            cname, base, members = parse_header(path)
            if cname is None:
                print(f"SKIP {header}: could not parse class")
                continue
            
            print(f"\n--- {class_name} (from {header}) ---")
            if base:
                print(f"  Base: {base}")
                base_sz = BASE_SIZES.get(base, 0)
                if base_sz == 0 and base in learned_sizes:
                    base_sz = learned_sizes[base]
                print(f"  Base size: 0x{base_sz:x}")
            else:
                base_sz = 0
                print(f"  No base class")
            
            result = create_struct(class_name, base, members, base_sz)
            if result:
                sid, added, total_sz = result
                learned_sizes[class_name] = total_sz
                print(f"  Created struct, {added} members, size ~0x{total_sz:x}")
                
                # Apply type to instance if available
                if inst_addr and inst_name:
                    ok = idc.SetType(inst_addr, f"{class_name} *")
                    print(f"  SetType({inst_name}) -> {'OK' if ok else 'FAIL'}")
        except Exception as e:
            print(f"  ERROR: {e}")

if __name__ == "__main__":
    main()
