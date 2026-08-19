"""Import RulesClass members from YRpp header into IDA struct type using idc API."""
import re
import idc
import idaapi

YRPP_HEADER = r"D:\RA2YR_ReSource\YRpp\RulesClass.h"
STRUCT_NAME = "RulesClass"
INSTANCE_ADDR = 0x8871E0

KNOWN_SIZES = {
    "DifficultyStruct": 0x50,
    "RocketStruct": 0x38,
    "Powerup": 0x1C,
    "ColorStruct": 0x0C,
    "SHPStruct": 4,
}
TYPE_LIST_SIZE = 0x10

def parse_yrpp_header(path):
    members = []
    with open(path, 'r', encoding='utf-8') as f:
        content = f.read()
    content = re.sub(r'//.*', '', content)
    content = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)

    class_match = re.search(r'class\s+RulesClass\s*\{(.+)\};\s*$', content, re.DOTALL)
    if not class_match:
        print("ERROR: Could not find RulesClass body")
        return []
    
    body = class_match.group(1)
    offset = 0
    
    for line in body.split('\n'):
        line = line.strip()
        if not line or line.startswith('//'):
            continue
        if line in ('public:', 'protected:', 'private:'):
            continue
        if '(' in line or 'operator' in line or '~RulesClass' in line or 'RulesClass()' in line:
            continue
        if 'static' in line and 'constexpr' in line:
            continue
        if 'JMP_THIS' in line or 'JMP_STD' in line:
            continue
        if line == '};':
            continue
        
        # Strip comments
        cp = line.find('//')
        if cp >= 0:
            line = line[:cp].strip()
        
        # Align pattern: DWORD align_XX;
        am = re.match(r'DWORD\s+(align_\w+)\s*;', line)
        if am:
            offset = ((offset + 3) // 4) * 4
            members.append((offset, am.group(1), 'int', 4, True))
            offset += 4
            continue
        
        # TypeList<...> pattern
        tm = re.match(r'TypeList<([^>]+)>\s+(\w+)\s*;', line)
        if tm:
            offset = ((offset + 3) // 4) * 4
            members.append((offset, tm.group(2), 'TypeList', TYPE_LIST_SIZE, False))
            offset += TYPE_LIST_SIZE
            continue
        
        # byte pattern (lowercase)
        bm = re.match(r'byte\s+(\w+)\s*;', line)
        if bm:
            members.append((offset, bm.group(1), 'byte', 1, False))
            offset += 1
            continue
        
        # Regular member
        mm = re.match(r'([\w:<>,\s\*]+?)\s+(\w+)\s*;', line)
        if mm:
            raw_type = mm.group(1).strip()
            name = mm.group(2)
            sz = get_type_size(raw_type)
            if sz == 0:
                continue
            if sz == 8:
                offset = ((offset + 7) // 8) * 8
            elif sz == 4:
                offset = ((offset + 3) // 4) * 4
            members.append((offset, name, raw_type, sz, False))
            offset += sz
    
    return members

def get_type_size(typename):
    typename = typename.replace('const ', '').replace('volatile ', '').strip()
    if typename.endswith('*'):
        return 4
    basic = {'int': 4, 'DWORD': 4, 'bool': 1, 'byte': 1, 'double': 8, 'float': 4,
             'short': 2, 'unsigned': 4, 'long': 4, 'BYTE': 1, 'WORD': 2, 'BOOL': 4}
    if typename in basic:
        return basic[typename]
    if typename in KNOWN_SIZES:
        return KNOWN_SIZES[typename]
    if typename[0].isupper():
        return 4
    return 0

def main():
    print(f"Parsing {YRPP_HEADER}...")
    members = parse_yrpp_header(YRPP_HEADER)
    print(f"Found {len(members)} members")
    
    # Show some for verification
    for i, (off, name, ty, sz, is_align) in enumerate(members[:20]):
        tag = "(align)" if is_align else ""
        print(f"  0x{off:04x}: {ty} {name} ({sz}B) {tag}")
    print("  ...")
    
    # Delete existing struct if present
    sid = idc.get_struc_id(STRUCT_NAME)
    if sid != idc.BADADDR:
        print(f"Deleting existing struct {STRUCT_NAME}...")
        idc.del_struc(sid)
    
    # Create new struct
    sid = idc.add_struc(-1, STRUCT_NAME, 0)
    if sid == idc.BADADDR:
        print("ERROR: Could not create struct")
        return
    print(f"Created struct {STRUCT_NAME} (id={sid})")
    
    # Add members
    added = 0
    skipped = 0
    for off, name, ty, sz, is_align in members:
        if is_align:
            skipped += 1
            continue
        
        if ty == 'byte' or ty == 'bool' or sz == 1:
            flag = idc.FF_BYTE | idc.FF_DATA
        elif sz == 2:
            flag = idc.FF_WORD | idc.FF_DATA
        elif sz == 8:
            flag = idc.FF_QWORD | idc.FF_DATA
        elif ty == 'float':
            flag = idc.FF_FLOAT | idc.FF_DATA
        else:
            flag = idc.FF_DWORD | idc.FF_DATA
        
        err = idc.add_struc_member(sid, name, off, flag, -1, sz)
        if err != 0:
            print(f"  FAIL 0x{off:04x}: {ty} {name} (err={err})")
        else:
            added += 1
    
    print(f"Added {added} members, skipped {skipped} alignment fields")
    
    # Apply type to instance
    print(f"\nApplying type to RulesClass_Instance...")
    ok = idc.SetType(INSTANCE_ADDR, f"{STRUCT_NAME} *")
    if ok:
        print("  SetType OK - decompiler should now show named members")
    else:
        print("  SetType FAILED")

if __name__ == "__main__":
    main()
