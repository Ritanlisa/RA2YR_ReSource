#!/usr/bin/env python3
"""
Pass 4: Handle remaining clear patterns: removeFromArray, LookupByName, etc.
"""
import idaapi, ida_funcs, ida_name, ida_hexrays, re

DRY_RUN = False

def classify(body, size):
    """Pattern-based classification."""
    
    # RemoveItem from array: v2=*(this+4); if(a2>=v2) return 0; v4=v2-1; *(this+4)=v4
    if re.search(r'this \+ 4\);\s*\w+ = a\d;\s*if\s*\(\s*\w+\s*>=\s*\w+\s*\)\s*return 0', body):
        if re.search(r'-\s*1;\s*\*\s*\(.*this \+ 4\)\s*=\s*\w+', body):
            return "RemoveItem"
    
    # LookupByName: _strcmpi loop against global array
    if '_strcmpi' in body and ('off_' in body or 'while' in body) and size < 100:
        return "LookupByName"
    
    # Component initialized pattern: seeks offset, sets vtable
    if 'vftable' in body and size > 100:
        return None  # Too ambiguous
    
    # PointerToIndex: (unsigned int)(a2 - *(this+4)) >> N
    if re.search(r'>>\s*[23]\)', body) and 'this + 4' in body and 'this + 12' in body:
        shift = re.search(r'>>\s*(\d)', body)
        s = shift.group(1) if shift else 'X'
        return f"GetIndex{s}"
    
    # ClearBuffer: free this+4, zero this+8/13/16
    if '__3_YAXPAX_Z' in body and 'this + 4' in body and 'this + 13' in body:
        return "ReleaseBuffer"
    
    # FindItem: linear search with *i != *a2
    if re.search(r'\*i != \*a', body) and 'return -1' in body and size < 55:
        return "FindItem"
    
    # Scalar deleting destructor
    if '& 1' in body and '__3_YAXPAX_Z' in body and size < 35:
        return "ScalarDtor"
    
    # SetFlag: single member assignment  
    if 'Debug::Log()' in body and re.search(r'\*\(this \+ \d+\) = a', body) and size < 55:
        m = re.search(r'this \+ (\d+)', body)
        off = m.group(1) if m else 'X'
        return f"SetFlag{off}"
    
    # ComboBox GrowBuffer: allocates 2x, copies
    if '2 *' in body and '__2_YAPAXI_Z' in body and size > 50:
        return "GrowBuffer"
    
    # Init via MessageListClass
    if 'MessageListClass::Init' in body:
        return "InitMessageList"
    
    # RemoveItem variant with shift loop
    if 'v4 = v2 - 1' in body and '4 * v3' in body and size < 55:
        return "RemoveItem"
    
    # Stream read
    if '*(v5+16)' in body and size < 90 and 'return' in body:
        return "WriteViaStream"
        
    # Get array item by index
    if re.search(r'4\s*\*\s*a\d', body) and 'return 0' in body and size < 55:
        return "GetItem"
    
    # Cleanup array (free loop)
    if '__3_YAXPAX_Z' in body and 'for' in body and 'this + 4' in body and size < 90:
        return "CleanupArray"
    
    # Destroy composite (multiple dtors)
    if '__3_YAXPAX_Z' in body and 'DeleteAndZero' in body:
        return "DestroyComposite"
    
    # GetKeyState wrapper
    if 'GetAsyncKeyState' in body:
        return "GetKeyState"
    
    # SetFields helper
    if re.match(r'.*return\s+\w+;\s*\}\s*$', body.replace('\n','')) and size < 60:
        if re.search(r'\*\(this \+ \d+\) = ', body):
            return "SetField"
    
    return None

def main():
    import idc, idautils
    
    renames = []
    unclassified = []
    
    for ea in idautils.Functions():
        name = idc.get_func_name(ea)
        if '::sub_' not in name:
            continue
        
        cls = name.split('::')[0]
        func = ida_funcs.get_func(ea)
        size = func.size() if func else 0
        
        try:
            cfunc = ida_hexrays.decompile(ea)
            body = str(cfunc) if cfunc else ""
        except:
            body = ""
        
        result = classify(body, size)
        if result:
            new_name = f"{cls}::{result}"
            renames.append((name, new_name))
        else:
            unclassified.append((name, size))
    
    print(f"Classified: {len(renames)}, Unclassified: {len(unclassified)}")
    
    if DRY_RUN:
        for old, new in renames[:20]:
            print(f"  {old} -> {new}")
        return
    
    success = skipped = errors = 0
    for old_name, new_name_full in renames:
        addr = idc.get_name_ea_simple(old_name)
        if addr == idc.BADADDR:
            errors += 1
            continue
        existing = idc.get_name_ea_simple(new_name_full)
        if existing != idc.BADADDR:
            skipped += 1
            continue
        if ida_name.set_name(addr, new_name_full, ida_name.SN_NOWARN):
            success += 1
        else:
            errors += 1
    
    print(f"Renamed: {success}, skipped: {skipped}, errors: {errors}")

if __name__ == '__main__':
    main()
