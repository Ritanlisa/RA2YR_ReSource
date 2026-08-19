"""
Apply YRpp member variable names to IDA structs - V2.
Deletes all existing members first, then adds fresh members with correct offsets.
Also finds and renames vtable function entries.
"""
import json, idc, idaapi, ida_bytes

JSON_PATH = r"D:\RA2YR_ReSource\tools\yrpp_data.json"

def rebuild_struct(cls_name, cls_data):
    """Delete all members and rebuild with YRpp offsets."""
    tid = idc.get_struc_id(cls_name)
    if tid == idc.BADADDR:
        return 0, 0, 0
    
    target_size = cls_data.get('total_size', 0)
    if target_size == 0:
        return 0, 0, 0
    
    # Delete all existing members (walk backwards)
    off = idc.get_struc_size(tid) - 1
    while off >= 0:
        name = idc.get_member_name(tid, off)
        if name:
            idc.del_struc_member(tid, off)
        off -= 1
    
    # Resize struct
    cur = idc.get_struc_size(tid)
    if target_size > cur:
        idc.expand_struc(tid, 0, target_size - cur)
    
    # Add members
    added = 0
    errors = 0
    for off, vname, vtype, vsize in cls_data.get('members', []):
        if vsize == 0: continue
        flag = ida_bytes.byte_flag() if vsize == 1 else \
               ida_bytes.word_flag() if vsize == 2 else \
               ida_bytes.dword_flag()
        ret = idc.add_struc_member(tid, vname, off, flag, -1, vsize)
        if ret == 0:
            added += 1
        else:
            errors += 1
    
    return target_size, added, errors


def find_class_vtable(cls_name):
    """Find the vtable address for a class by scanning .rdata."""
    best_vt = None
    best_count = 0
    
    for ea in range(0x7E1600, 0x812000, 4):
        d = idaapi.get_dword(ea)
        if not (0x401000 <= d < 0x7E1000): continue
        fn = idc.get_func_name(d) or ''
        if not fn.startswith(cls_name + '::'): continue
        
        # Count consecutive matching entries downward
        count = 0
        for n in range(0, -10, -1):
            nd = idaapi.get_dword(ea + n*4)
            nfn = idc.get_func_name(nd) or ''
            if '::' in nfn and not nfn.startswith(('sub_','nullsub')):
                count += 1
        
        # Count matching entries upward
        for n in range(1, 10):
            nd = idaapi.get_dword(ea + n*4)
            nfn = idc.get_func_name(nd) or ''
            if '::' in nfn and not nfn.startswith(('sub_','nullsub')):
                count += 1
        
        if count > best_count:
            # Find the start of this vtable
            vt_start = ea
            for n in range(1, 200):
                pd = idaapi.get_dword(ea - n*4)
                pfn = idc.get_func_name(pd) or ''
                if not (0x401000 <= pd < 0x7E1000): break
                if '::' in pfn and not pfn.startswith(('sub_','nullsub')):
                    vt_start = ea - n*4
                else:
                    break
            best_vt = vt_start
            best_count = count
    
    return best_vt


def rename_vt_functions(cls_name, cls_data, vt_addr):
    """Rename vt_entry functions at vtable address."""
    stats = {'renamed': 0, 'skipped': 0}
    
    vt_entries = cls_data.get('vt_entries', [])
    if not vt_entries:
        return stats
    
    for entry_name, vt_index in vt_entries:
        func_addr = idaapi.get_dword(vt_addr + vt_index * 4)
        if not (0x401000 <= func_addr < 0x7E1000): continue
        
        cur_name = idc.get_func_name(func_addr) or idc.get_name(func_addr) or ''
        new_name = '%s::%s' % (cls_name, entry_name)
        
        if cur_name == new_name:
            continue
        
        if cur_name.startswith('sub_') or cur_name.startswith('nullsub') or '_vt' in cur_name or cur_name == '':
            idc.set_name(func_addr, new_name, idc.SN_NOWARN)
            stats['renamed'] += 1
        elif '::' not in cur_name:
            idc.set_name(func_addr, new_name, idc.SN_NOWARN)
            stats['renamed'] += 1
    
    return stats


def main():
    with open(JSON_PATH, 'r') as f:
        data = json.load(f)
    
    print("Loaded %d classes" % len(data))
    
    total_added = 0
    total_errors = 0
    rebuilt = 0
    
    for cls_name in sorted(data.keys()):
        cls_data = data[cls_name]
        if not cls_data.get('members'):
            continue
        
        sz, added, errors = rebuild_struct(cls_name, cls_data)
        if sz > 0:
            rebuilt += 1
            total_added += added
            total_errors += errors
    
    print("\n=== Phase 1: Struct rebuild ===")
    print("Rebuilt: %d classes, %d members added, %d errors" % (rebuilt, total_added, total_errors))
    
    # Phase 2: Vtable functions
    print("\n=== Phase 2: Vtable functions ===")
    vt_renamed = 0
    for cls_name in sorted(data.keys()):
        cls_data = data[cls_name]
        if not cls_data.get('vt_entries'):
            continue
        
        vt_addr = find_class_vtable(cls_name)
        if not vt_addr:
            continue
        
        s = rename_vt_functions(cls_name, cls_data, vt_addr)
        vt_renamed += s['renamed']
        if s['renamed'] > 0:
            print("  %s: %d renamed (vt=0x%X)" % (cls_name, s['renamed'], vt_addr))
    
    print("Total vtable functions renamed: %d" % vt_renamed)

main()
