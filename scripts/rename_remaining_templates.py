#!/usr/bin/env python3
"""
IDA Python script: Rename remaining template class sub_* methods.
Handles FilePipe[30], DynamicVectorClass_*, BlowPipe[23], BlowStraw[29],
RadarHashVector, and other template instantiations not covered by Tasks 7-8.

Classification: decompile body → pattern match → rename with standard names.
"""

import idaapi
import ida_funcs
import ida_name
import ida_hexrays
import ida_bytes
import re
from collections import defaultdict

# =============================================================================
# Target classes with sub_* methods to rename
# =============================================================================
TARGET_CLASSES = [
    "FilePipe[30]",
    "DynamicVectorClass_uint",
    "DynamicVectorClass_PAD",
    "DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode",
    "BlowPipe[23]",
    "BlowStraw[29]",
    "RadarHashVector",
]

# =============================================================================
# Classification: body pattern → method name
# =============================================================================

def classify_clear(body):
    """Frees buffer, resets flags. No vtable set, no delete-this param."""
    has_free_buffer = '__3_YAXPAX_Z' in body
    has_vtable = 'vftable' in body or 'off_' in body
    has_delete_self = '(a2 & 1)' in body
    has_reset = re.search(r'\*\(_DWORD \*\)\(this \+ 16\) = 0', body) or \
                re.search(r'\*\(_DWORD \*\)\(this \+ 16\) = 0', body)
    if has_free_buffer and has_reset and not has_vtable and not has_delete_self:
        return "Clear"
    return None

def classify_destructor(body):
    """Frees buffer, sets vtable, optionally deletes self."""
    has_vtable = 'vftable' in body or ('off_' in body and 'Block' in body)
    has_delete_self = '(a2 & 1)' in body
    has_free_buffer = '__3_YAXPAX_Z' in body
    if has_vtable and has_free_buffer:
        if has_delete_self:
            return "Destructor"
        else:
            return "Release"
    return None

def classify_getcount(body):
    """Returns element count from buffer pointer arithmetic."""
    m = re.search(r'return \(unsigned int\)\(a2 - \*\(_DWORD \*\)\(this \+ 4\)\) >> (\d)', body)
    if m:
        shift = int(m.group(1))
        if shift == 2:
            return "GetCount"  # 4-byte elements
        elif shift == 4:
            return "GetCount"  # 16-byte elements
    return None

def classify_setcapacity(body):
    """Allocates new buffer, copies old data, frees old buffer."""
    has_new = '__2_YAPAXI_Z' in body
    has_copy_loop = '++i' in body and 'v4[i' in body
    has_old_free = '__3_YAXPAX_Z' in body
    has_capacity_set = re.search(r'\*\(_DWORD \*\)\(this \+ 2\) = a2', body) or \
                       re.search(r'\*\(_DWORD \*\)\(this \+ 2\) = a2', body)
    if has_new and has_copy_loop and has_old_free:
        return "SetCapacity"
    return None

def classify_finditemindex(body):
    """Linear search through Items for matching value."""
    has_linear_search = re.search(r'for \(.*\*i != \*a2;', body)
    has_return_neg1 = 'return -1' in body
    if has_linear_search and has_return_neg1:
        return "FindItemIndex"
    return None

def classify_additem(body):
    """DynamicVectorClass: Add at end, grow if needed."""
    has_capacity_check = re.search(r'if \(.*>=.*\[2\]\)', body) or \
                         '>= *(_DWORD *)(this + 8)' in body
    has_grow = '__2_YAPAXI_Z' in body
    has_append = re.search(r'\[.*\+ 2.*\] = a2', body) or \
                 re.search(r'\+\+.*\(.*this', body)
    if has_capacity_check and (has_append or has_grow):
        return "AddItem"
    return None

def classify_removeitem(body):
    """DynamicVectorClass: shift elements left after removal."""
    has_shift = re.search(r'for.*=.*index.*<.*\-\-', body) or \
                re.search(r'\[i\] = .*\[i \+ 1\]', body)
    has_bounds = 'ValidIndex' in body or re.search(r'>=.*\(unsigned', body)
    if has_shift and has_bounds:
        return "RemoveItem"
    return None

def classify_getitem(body):
    """Simple array access: return Items[index]."""
    has_array_access = re.search(r'return \*\(.*\)\(.*this \+ 4.*\+ 4 \* a2', body) or \
                       re.search(r'return \*\(_DWORD \*\)\(.*\[this\+1\].*\+ 4 \* a2', body)
    if has_array_access:
        return "GetItem"
    return None

def classify_getitemindex(body):
    """Pointer arithmetic: return (itemPtr - Items)."""
    has_ptr_diff = re.search(r'return.*a2 - .*\(_DWORD \*\)\(this \+ 4\)', body)
    if has_ptr_diff:
        return "GetItemIndex"
    return None

def classify_validindex(body):
    """Bounds check: return (unsigned)index < (unsigned)Count."""
    has_unsigned_cmp = '(unsigned)' in body and '<' in body and 'return' in body
    is_small = body.count('\n') <= 10
    if has_unsigned_cmp and is_small:
        return "ValidIndex"
    return None

def classify_pipeflush(body):
    """Pipe: calls vtable[this+12] method (vtable dispatch to Clear)."""
    has_vcall = re.search(r'\(\*\(.*\)\)\(\(this\)', body) or \
                re.search(r'\(this \+ 12\)\)\(this\)', body)
    if has_vcall and '__3_YAXPAX_Z' not in body:
        return "Flush"
    return None

def classify_stub(body):
    """Simple stub: return 0, return 1, or tiny function."""
    stripped = body.strip()
    if stripped == 'return 0;':
        return "StubReturnZero"
    if stripped == 'return 1;':
        return "StubReturnTrue"
    if stripped == 'return -1;':
        return "StubReturnNegOne"
    return None

def classify_generic(body, func_size):
    """Fallback heuristics for unclassified functions."""
    # Small functions that set a field
    m = re.search(r'\*\(_DWORD \*\)\(this \+ (\d+)\) =', body)
    if m and func_size <= 0x15:
        offset = int(m.group(1))
        return f"SetField_{offset:#06x}"
    
    m = re.search(r'return \*\(_DWORD \*\)\(this \+ (\d+)\)', body)
    if m and func_size <= 0x10:
        offset = int(m.group(1))
        return f"GetField_{offset:#06x}"
    
    # Bitmask operations
    if '& 0x' in body or '| 0x' in body:
        return "ComputeBitmask"
    
    # Float operations
    if '*(float *)' in body:
        return "ComputeFloat"
    
    return None


# =============================================================================
# Main classification pipeline
# =============================================================================

CLASSIFIERS = [
    classify_stub,
    classify_clear,
    classify_destructor,
    classify_getcount,
    classify_setcapacity,
    classify_finditemindex,
    classify_additem,
    classify_removeitem,
    classify_getitem,
    classify_getitemindex,
    classify_validindex,
    classify_pipeflush,
    classify_generic,
]


def decompile_text(addr):
    """Decompile and return text, or None."""
    try:
        cfunc = ida_hexrays.decompile(addr)
        return str(cfunc) if cfunc else None
    except:
        return None


def classify(addr, func_size):
    """Run all classifiers, return first match."""
    text = decompile_text(addr)
    if not text:
        return None, "decompile_failed"
    
    for classifier in CLASSIFIERS:
        try:
            name = classifier(text, func_size)
        except TypeError:
            name = classifier(text)
        if name:
            return name, classifier.__name__
    
    # If generic classifier returned None, try size-based fallback
    if func_size <= 5:
        body = text[text.find('\n')+1:].strip() if '\n' in text else text
        if 'return 0' in body:
            return "StubReturnZero", "size_fallback"
        if 'return 1' in body:
            return "StubReturnTrue", "size_fallback"
    
    return None, "unclassified"


def main():
    print("=" * 70)
    print("Remaining Template Class Sub_* Rename Tool")
    print("=" * 70)
    
    if not ida_hexrays.init_hexrays_plugin():
        print("[ERROR] Hex-Rays unavailable!")
        return None
    
    stats = defaultdict(lambda: {"subs": 0, "renamed": 0, "unclassified": 0, "decomp_fail": 0})
    
    all_renames = []
    
    for class_name in TARGET_CLASSES:
        print(f"\n--- {class_name} ---")
        
        sub_funcs = []
        for i in range(ida_funcs.get_func_qty()):
            func = ida_funcs.getn_func(i)
            if not func:
                continue
            name = ida_funcs.get_func_name(func.start_ea)
            if name.startswith(f"{class_name}::sub_"):
                sub_funcs.append({
                    "addr": func.start_ea,
                    "name": name,
                    "short": name.split("::")[1],
                    "size": func.end_ea - func.start_ea,
                })
        
        print(f"  sub_* to process: {len(sub_funcs)}")
        stats[class_name]["subs"] = len(sub_funcs)
        
        for func in sub_funcs:
            addr = func["addr"]
            size = func["size"]
            
            name, method = classify(addr, size)
            
            if name:
                full = f"{class_name}::{name}"
                # Check for collision
                existing = ida_name.get_name_ea(idaapi.BADADDR, full)
                if existing != idaapi.BADADDR and existing != addr:
                    full = f"{class_name}::{name}_{addr:06X}"
                
                stats[class_name]["renamed"] += 1
                all_renames.append({
                    "addr": addr,
                    "old": func["short"],
                    "new": name,
                    "full": full,
                    "size": size,
                    "method": method,
                })
                print(f"    {func['short']:20s} -> {name:25s} ({method}, {size:#x}B)")
            else:
                stats[class_name]["unclassified"] += 1
                print(f"    {func['short']:20s} -> [UNCLASSIFIED] ({size:#x}B)")
    
    # Show summary before executing
    print(f"\n{'='*70}")
    print("RENAME PLAN SUMMARY")
    print(f"{'='*70}")
    for cls in TARGET_CLASSES:
        s = stats[cls]
        if s["subs"] > 0:
            print(f"  {cls}: {s['renamed']}/{s['subs']} renamed, {s['unclassified']} unclassified")
    
    total_subs = sum(s["subs"] for s in stats.values())
    total_renamed = sum(s["renamed"] for s in stats.values())
    total_unclassified = sum(s["unclassified"] for s in stats.values())
    total_decomp_fail = sum(s["decomp_fail"] for s in stats.values())
    
    print(f"\n  TOTAL: {total_renamed}/{total_subs} renamed, "
          f"{total_unclassified} unclassified, {total_decomp_fail} decompile failed")
    
    # Execute renames
    print(f"\n{'='*70}")
    print("EXECUTING RENAMES")
    print(f"{'='*70}")
    
    ok_count = 0
    fail_count = 0
    for r in all_renames:
        if ida_name.set_name(r["addr"], r["full"], ida_name.SN_FORCE):
            ok_count += 1
        else:
            print(f"  [FAIL] {r['old']} -> {r['full']}")
            fail_count += 1
    
    print(f"\n  Renamed: {ok_count}/{len(all_renames)}")
    if fail_count:
        print(f"  Failed: {fail_count}")
    
    # Count remaining sub_*
    remaining_subs = 0
    for i in range(ida_funcs.get_func_qty()):
        func = ida_funcs.getn_func(i)
        if not func:
            continue
        name = ida_funcs.get_func_name(func.start_ea)
        if '::sub_' in name:
            remaining_subs += 1
    
    print(f"\n{'='*70}")
    print("FINAL RESULTS")
    print(f"{'='*70}")
    print(f"  Renamed this run: {ok_count}")
    print(f"  Remaining ::sub_* total: {remaining_subs}")
    print(f"  Unclassified: {total_unclassified}")
    
    return {
        "renamed": ok_count,
        "remaining_subs": remaining_subs,
        "unclassified": total_unclassified,
    }


result = main()
