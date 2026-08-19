#!/usr/bin/env python3
"""
IDA Python script: Pass 3 - aggressive final pass for all remaining sub_*.
Handles: trivial getters/setters, simple patterns, destructors.
Anything truly ambiguous stays as sub_*.
"""
import idaapi, ida_funcs, ida_name, ida_hexrays, re
from collections import defaultdict

DRY_RUN = False

def classify(cls, body, size, addr):
    """Aggressive classification for remaining functions."""
    
    # Trivial getters (size < 12, returns this+offset)
    if size < 12 and 'return' in body:
        if '*(this' in body:
            m = re.search(r'this\s*\+\s*(\d+)', body)
            off = m.group(1) if m else 'X'
            return f"GetField{off}"
        if 'return' in body and 'this' in body:
            return "GetValue"
    
    # Trivial setters (size < 15, sets this+offset)
    if size < 15 and 'return' in body and '=' in body and 'this' in body:
        m = re.search(r'this\s*\+\s*(\d+)', body)
        off = m.group(1) if m else 'X'
        return f"SetField{off}"
    
    # Scalar destructors  
    if size < 35 and '__3_YAXPAX_Z' in body and '& 1' in body:
        return "ScalarDtor"
    
    # DeleteAndZero pattern
    if 'DeleteAndZero' in body and size < 40:
        return "DeleteAndZero"
    
    # ComPtr destruction
    if 'ComPtr::Dtor' in body:
        return "ReleaseComPtr"
    
    # Destructor body
    if '__3_YAXPAX_Z' in body and size < 50:
        if 'this +' in body:
            return "Destroy"
    
    # j_ thunks
    if size < 15 and '::' in body:
        m = re.search(r'(\w+)::(\w+)\(', body)
        if m:
            return f"Thunk_{m.group(1)}_{m.group(2)}"
    
    # Switch-based dispatchers
    if 'switch' in body and size > 25:
        return "Dispatch"
    
    # Init/Reset (zeroing fields)
    if size < 35 and body.count('= 0') >= 2 and 'this' in body:
        return "Init"
    
    # Vector/Pipe/Straw destruction
    if 'Vector::Clear' in body and 'Straw::Dtor' in body:
        return "DestroyContainer"
    if 'Straw::Dtor' in body and size < 35:
        return "DestroyStraw"
    if 'Pipe::Dtor' in body and size < 35:
        return "DestroyPipe"
    
    # LinkedList/DListNode init
    if 'LinkedList::Init' in body:
        return "InitLinkedList"
    if 'DListNode::Init' in body:
        return "InitListNode"
    
    # ClearBuffer variant (free this+4, zero fields)
    if '__3_YAXPAX_Z' in body and 'this + 4' in body and 'this + 8' in body:
        return "ReleaseBuffer"
    
    # GetIndex/PointerToIndex variant
    if '>>' in body and 'this + 4' in body and 'this + 12' in body and size < 35:
        shift = re.search(r'>>\s*(\d)', body)
        s = shift.group(1) if shift else 'X'
        return f"GetIndex{s}"
    
    # FindItem variant
    if '*i' in body and 'return -1' in body and size < 50:
        return "FindItem"
    
    # Contains/IsEmpty check
    if 'return -1' not in body and 'return' in body:
        if 'this +' in body and size < 40:
            return "Check"
    
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
        
        result = classify(cls, body, size, ea)
        if result:
            new_name = f"{cls}::{result}"
            renames.append((name, new_name))
        else:
            unclassified.append((name, size))
    
    print(f"Classified: {len(renames)}, Unclassified: {len(unclassified)}")
    
    if DRY_RUN:
        for old, new in renames[:30]:
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
    
    print(f"Renamed: {success}, skipped (name exists): {skipped}, errors: {errors}")
    
    # Show what's unclassified
    if unclassified:
        print(f"\nUnclassified ({len(unclassified)}):")
        for name, size in sorted(unclassified, key=lambda x: -x[1])[:30]:
            print(f"  {name} sz={size}")

if __name__ == '__main__':
    main()
