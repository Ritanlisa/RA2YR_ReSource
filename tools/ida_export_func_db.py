#!/usr/bin/env python3
"""
IDA Python script: Export comprehensive function database for all named functions.
Runs inside IDA Pro via py_exec_file.
Outputs to D:/RA2YR_ReSource/tools/
"""
import json
import os
import sys
import time

import idaapi
import idautils
import ida_funcs
import ida_xref
import ida_segment
import ida_typeinf
import ida_nalt
import ida_name
import ida_idp
import ida_bytes

OUTPUT_DIR = r"D:\RA2YR_ReSource\tools"
MAX_CALLERS = 30
MAX_CALLEES = 30
BATCH_SIZE = 500  # Progress reporting interval

def get_tinfo(ea):
    """Get type info for a function, returns (tif, success)."""
    tif = ida_typeinf.tinfo_t()
    if ida_nalt.get_tinfo(tif, ea):
        return tif, True
    return None, False

def is_thiscall(ea, tif=None):
    """Detect if function uses __thiscall calling convention."""
    if tif is None:
        tif, ok = get_tinfo(ea)
        if not ok:
            return False
    
    # Check type string for __thiscall
    dstr = tif.dstr()
    if "__thiscall" in dstr:
        return True
    
    # Check if name contains '::' (member function, likely thiscall)
    name = ida_name.get_name(ea)
    if name and '::' in name:
        return True
    
    return False

def get_signature_info(ea, tif):
    """Extract full signature text, param count, return type from tinfo_t."""
    if tif is None:
        return "unknown", 0, "unknown", []
    
    sig = tif.dstr()
    
    # Extract return type
    rettype = "unknown"
    try:
        ret = tif.get_rettype()
        if ret:
            rettype = ret.dstr()
    except:
        pass
    
    # Count parameters
    param_count = 0
    param_types = []
    try:
        funcdata = ida_typeinf.func_type_data_t()
        if tif.get_func_details(funcdata):
            param_count = funcdata.size()
            for i in range(min(param_count, 20)):
                try:
                    pname = funcdata[i].name if funcdata[i].name else f"arg{i}"
                    ptype = funcdata[i].type.dstr() if funcdata[i].type else "unknown"
                    param_types.append(f"{ptype} {pname}")
                except:
                    param_types.append(f"arg{i}")
    except:
        pass
    
    return sig, param_count, rettype, param_types

def get_callees(func):
    """Get functions called by this function (limit MAX_CALLEES)."""
    callees = []
    seen = set()
    
    # Iterate through function body for call instructions
    ea = func.start_ea
    end = func.end_ea
    
    while ea < end:
        if ida_idp.is_call_insn(ea):
            for xref in idautils.XrefsFrom(ea, 0):
                # Filter: only call-type xrefs (not fall-through flow)
                if xref.type not in (ida_xref.fl_CN, ida_xref.fl_CF):
                    continue
                target = xref.to
                target_func = ida_funcs.get_func(target)
                if target_func and target_func.start_ea == target:
                    tgt_name = ida_name.get_name(target)
                    # Include all callees (even sub_*) for completeness
                    if tgt_name and target not in seen:
                        seen.add(target)
                        callees.append({
                            "addr": f"0x{target:X}",
                            "name": tgt_name
                        })
                        if len(callees) >= MAX_CALLEES:
                            return callees
        
        nxt = ida_bytes.next_head(ea, end)
        if nxt == idaapi.BADADDR or nxt <= ea:
            break
        ea = nxt
    
    return callees

def get_callers(func_ea):
    """Get functions that call this function (limit MAX_CALLERS)."""
    callers = []
    seen = set()
    
    for xref in idautils.CodeRefsTo(func_ea, 1):  # 1 = flow (code) refs
        caller_func = ida_funcs.get_func(xref)
        if caller_func:
            caller_ea = caller_func.start_ea
            if caller_ea not in seen:
                seen.add(caller_ea)
                caller_name = ida_name.get_name(caller_ea)
                if caller_name:
                    callers.append({
                        "addr": f"0x{caller_ea:X}",
                        "name": caller_name
                    })
                else:
                    callers.append({
                        "addr": f"0x{caller_ea:X}",
                        "name": f"sub_{caller_ea:X}"
                    })
        if len(callers) >= MAX_CALLERS:
            break
    
    return callers

def get_segment_name(ea):
    """Get segment name for an address."""
    seg = ida_segment.getseg(ea)
    if seg:
        return ida_segment.get_segm_name(seg)
    return "unknown"

def is_named_function(ea):
    """Check if function has a meaningful name (not sub_*)."""
    name = ida_name.get_name(ea)
    if not name:
        return False
    # Skip sub_* functions
    if name.startswith("sub_"):
        return False
    # Skip nullsub
    if name.startswith("nullsub_"):
        return False
    # Skip thunk functions (j_ prefix)
    if name.startswith("j_") and len(name) > 2:
        return False
    # Skip some import thunks
    if name.startswith("__imp_"):
        return False
    return True

def build_callee_index(func_db):
    """Build reverse index: callee_name -> [caller_addrs]."""
    callee_index = {}
    for func_addr, func_info in func_db.items():
        caller_addr = func_addr
        caller_name = func_info.get("name", "")
        for callee in func_info.get("callees", []):
            callee_name = callee["name"]
            if callee_name not in callee_index:
                callee_index[callee_name] = []
            # Only add if not at limit already
            if caller_addr not in callee_index[callee_name]:
                callee_index[callee_name].append(caller_addr)
    return callee_index

def build_name_index(func_db):
    """Build reverse index: name -> addr."""
    name_index = {}
    for func_addr, func_info in func_db.items():
        name = func_info.get("name", "")
        if name:
            # Handle duplicate names (overloaded?): keep first
            if name not in name_index:
                name_index[name] = func_addr
    return name_index

# ------------------------------------------------------------
def main():
    start_time = time.time()
    
    os.makedirs(OUTPUT_DIR, exist_ok=True)
    
    # Stage 1: Collect function metadata
    print("="*60)
    print("STAGE 1: Collecting function metadata...")
    print("="*60)
    
    func_db = {}
    total_funcs = 0
    named_funcs = 0
    skipped = 0
    no_type = 0
    
    all_funcs = list(idautils.Functions())
    total = len(all_funcs)
    print(f"Total functions in IDB: {total}")
    
    for idx, ea in enumerate(all_funcs):
        total_funcs += 1
        
        # Skip unnamed functions
        if not is_named_function(ea):
            skipped += 1
            continue
        
        named_funcs += 1
        
        # Get function object
        func = ida_funcs.get_func(ea)
        if not func:
            continue
        
        name = ida_name.get_name(ea)
        addr_str = f"0x{ea:X}"
        size = func.end_ea - func.start_ea
        
        # Type info
        tif, has_tinfo = get_tinfo(ea)
        if not has_tinfo:
            no_type += 1
        
        sig, param_count, rettype, param_types = get_signature_info(ea, tif)
        
        # Calling convention
        thiscall = is_thiscall(ea, tif)
        
        # Segment
        segment = get_segment_name(ea)
        
        func_db[addr_str] = {
            "name": name,
            "signature": sig if sig else "unknown",
            "param_count": param_count,
            "param_types": param_types,
            "return_type": rettype,
            "callees": [],  # Filled in stage 2
            "callers": [],  # Filled in stage 2
            "segment": segment,
            "size": size,
            "is_thiscall": thiscall,
        }
        
        # Progress
        if named_funcs % BATCH_SIZE == 0:
            elapsed = time.time() - start_time
            print(f"  Stage 1: {named_funcs} named functions processed ({elapsed:.1f}s)")
    
    elapsed = time.time() - start_time
    print(f"\nStage 1 complete:")
    print(f"  Total functions: {total_funcs}")
    print(f"  Named exported: {named_funcs}")
    print(f"  Skipped (sub_*/nullsub/j_/__imp_): {skipped}")
    print(f"  Without type info: {no_type}")
    print(f"  Elapsed: {elapsed:.1f}s")
    
    # Stage 2: Collect callees and callers
    print(f"\n{'='*60}")
    print("STAGE 2: Collecting call graphs (callees + callers)...")
    print("="*60)
    
    processed = 0
    for idx, (addr_str, func_info) in enumerate(func_db.items()):
        ea = int(addr_str, 16)
        func = ida_funcs.get_func(ea)
        if not func:
            continue
        
        # Callees (functions this calls)
        func_info["callees"] = get_callees(func)
        
        # Callers (functions that call this)
        func_info["callers"] = get_callers(ea)
        
        processed += 1
        if processed % BATCH_SIZE == 0:
            elapsed = time.time() - start_time
            print(f"  Stage 2: {processed}/{named_funcs} functions ({elapsed:.1f}s)")
    
    elapsed = time.time() - start_time
    print(f"\nStage 2 complete: {processed} functions, {elapsed:.1f}s")
    
    # Stage 3: Build indexes
    print(f"\n{'='*60}")
    print("STAGE 3: Building reverse indexes...")
    print("="*60)
    
    # Name index
    name_index = build_name_index(func_db)
    print(f"  name_index: {len(name_index)} entries")
    
    # Callee index
    callee_index = build_callee_index(func_db)
    
    # Count total references
    total_refs = sum(len(v) for v in callee_index.values())
    print(f"  callee_index: {len(callee_index)} unique callees, {total_refs} total references")
    
    # Stage 4: Write output files
    print(f"\n{'='*60}")
    print("STAGE 4: Writing output files...")
    print("="*60)
    
    # Main function DB
    db_path = os.path.join(OUTPUT_DIR, "ida_function_db.json")
    print(f"  Writing {db_path}...")
    with open(db_path, "w", encoding="utf-8") as f:
        json.dump(func_db, f, indent=2, ensure_ascii=False)
    
    # Name index
    name_path = os.path.join(OUTPUT_DIR, "ida_name_index.json")
    print(f"  Writing {name_path}...")
    with open(name_path, "w", encoding="utf-8") as f:
        json.dump(name_index, f, indent=2, ensure_ascii=False)
    
    # Callee index
    callee_path = os.path.join(OUTPUT_DIR, "ida_callee_index.json")
    print(f"  Writing {callee_path}...")
    with open(callee_path, "w", encoding="utf-8") as f:
        json.dump(callee_index, f, indent=2, ensure_ascii=False)
    
    # Statistics
    stats = {
        "total_functions_idb": total_funcs,
        "named_exported": named_funcs,
        "skipped_unnamed": skipped,
        "without_type_info": no_type,
        "with_thiscall": sum(1 for v in func_db.values() if v["is_thiscall"]),
        "name_index_entries": len(name_index),
        "callee_index_entries": len(callee_index),
        "callee_index_refs": total_refs,
        "segment_distribution": {},
        "has_callees": sum(1 for v in func_db.values() if v["callees"]),
        "has_callers": sum(1 for v in func_db.values() if v["callers"]),
        "avg_callees": 0,
        "avg_callers": 0,
        "max_callees": 0,
        "max_callers": 0,
        "elapsed_seconds": round(time.time() - start_time, 1),
    }
    
    # Segment distribution
    seg_counts = {}
    for v in func_db.values():
        seg = v["segment"]
        seg_counts[seg] = seg_counts.get(seg, 0) + 1
    stats["segment_distribution"] = seg_counts
    
    # Callee/caller stats
    if func_db:
        callee_counts = [len(v["callees"]) for v in func_db.values()]
        caller_counts = [len(v["callers"]) for v in func_db.values()]
        stats["avg_callees"] = round(sum(callee_counts) / len(callee_counts), 1)
        stats["avg_callers"] = round(sum(caller_counts) / len(caller_counts), 1)
        stats["max_callees"] = max(callee_counts)
        stats["max_callers"] = max(caller_counts)
    
    stats_path = os.path.join(OUTPUT_DIR, "ida_function_db_stats.json")
    print(f"  Writing {stats_path}...")
    with open(stats_path, "w", encoding="utf-8") as f:
        json.dump(stats, f, indent=2)
    
    # Final summary
    elapsed = time.time() - start_time
    print(f"\n{'='*60}")
    print(f"EXPORT COMPLETE")
    print(f"{'='*60}")
    print(json.dumps(stats, indent=2))
    print(f"\nOutput files:")
    print(f"  {db_path}")
    print(f"  {name_path}")
    print(f"  {callee_path}")
    print(f"  {stats_path}")
    
    return True

# Fallback callee detection using CodeRefsFrom (used if instruction iteration fails)
def get_callees_fallback(func):
    """Use idautils.CodeRefsFrom as fallback."""
    callees = []
    seen = set()
    count = 0
    for xref in idautils.CodeRefsFrom(func.start_ea, 0):
        target = xref
        target_func = ida_funcs.get_func(target)
        if target_func and target_func.start_ea == target:
            tgt_name = ida_name.get_name(target)
            if tgt_name:  # Include all callees, even sub_*
                if target not in seen:
                    seen.add(target)
                    callees.append({"addr": f"0x{target:X}", "name": tgt_name})
                    count += 1
                    if count >= MAX_CALLEES:
                        break
    return callees

if __name__ == "__main__":
    try:
        success = main()
        print(f"\nScript {'succeeded' if success else 'failed'}")
    except Exception as e:
        print(f"\nERROR: {e}")
        import traceback
        traceback.print_exc()
        raise
