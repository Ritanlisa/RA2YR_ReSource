"""
Fix __thiscall sub_* functions that lack ClassName:: prefix.
Strategy:
1. Check if function appears in any known vtable → use that vtable's class
2. If not in vtable, check callers for ClassName::Method patterns → majority vote
3. Rename to ClassName::sub_XXXXXX
"""
import idc, idaapi, ida_xref
from collections import Counter

# Build vtable→class mapping by checking named functions in each vtable
print("Building vtable → class mapping...")
vt_class = {}
QI = 0x410260
for ea in range(0x7E0000, 0x820000, 4):
    v = idc.get_wide_dword(ea)
    if v < 0x401000 or v > 0x7E0000: continue
    n = idc.get_name(v, idc.GN_VISIBLE) or idc.get_func_name(v) or ''
    if '::' not in n: continue
    cls = n.split('::')[0]
    if not cls: continue
    # Walk backward to find vtable start
    start = ea
    while start > 0x7E0000:
        prev = idc.get_wide_dword(start - 4)
        if prev < 0x401000 or prev > 0x7E1000: break
        start -= 4
    vt_class[start] = cls

print("Found %d vtables with class names" % len(vt_class))

# Find thiscall subs without ::
results = []
for ea in range(0x401000, 0x7E1000):
    fn = idaapi.get_func(ea)
    if not fn or fn.start_ea != ea: continue
    n = idc.get_func_name(ea) or ''
    if '::' in n: continue
    if not n.startswith('sub_'): continue
    tif = ida_typeinf.tinfo_t()
    if not ida_nalt.get_tinfo(tif, ea): continue
    if '__thiscall' not in tif.dstr(): continue
    sz = fn.end_ea - fn.start_ea
    results.append((ea, n, sz))

print("Total thiscall subs without :: : %d" % len(results))

# Sort by size, largest first
results.sort(key=lambda x: -x[2])

# Process
renamed = 0
failed = 0
for ea, n, sz in results:
    # Strategy 1: Check if this function appears in any vtable
    cls = None
    # Search for data references (vtable entries pointing to this function)
    xb = ida_xref.xrefblk_t()
    ok = xb.first_to(ea, ida_xref.XREF_DATA)
    while ok:
        ref_from = xb.frm
        if ref_from >= 0x7E0000 and ref_from <= 0x820000:
            # Walk to vtable start
            start = ref_from
            while start > 0x7E0000:
                prev = idc.get_wide_dword(start - 4)
                if prev < 0x401000 or prev > 0x7E1000: break
                start -= 4
            if start in vt_class:
                cls = vt_class[start]
                break
        ok = xb.next_to()
    
    # Strategy 2: If not in vtable, check callers
    if cls is None:
        caller_classes = Counter()
        xb2 = ida_xref.xrefblk_t()
        ok = xb2.first_to(ea, ida_xref.XREF_ALL)
        while ok:
            caller_ea = xb2.frm
            caller_fn = idaapi.get_func(caller_ea)
            if caller_fn:
                cn = idc.get_func_name(caller_fn.start_ea) or ''
                if '::' in cn:
                    ccls = cn.split('::')[0]
                    caller_classes[ccls] += 1
            ok = xb2.next_to()
        if caller_classes:
            cls = caller_classes.most_common(1)[0][0]
    
    if cls is None:
        continue
    
    new_name = '%s::%s' % (cls, n)
    if idc.set_name(ea, new_name, idc.SN_NOWARN):
        renamed += 1
    else:
        failed += 1
    
    if renamed % 200 == 0:
        print("Progress: %d renamed, %d failed" % (renamed, failed))

print("\nDone: %d renamed, %d failed" % (renamed, failed))
