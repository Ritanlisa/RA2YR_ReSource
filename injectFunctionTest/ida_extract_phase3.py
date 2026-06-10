#!/usr/bin/env python3
"""
Phase 3: Extract vtable call resolution data.

For functions with indirect calls (ci=True), resolve each vtable call
to the set of possible target methods. Then annotate their purity effects.

Run inside IDA Pro. Appends phase3 data to purity_effects.json.

Time: ~2-5 min for 5,231 functions with indirect calls.
"""

import json
import sys
import time
from collections import defaultdict

import idautils
import ida_funcs
import ida_ua
import ida_xref
import ida_name
import ida_typeinf
import ida_nalt
import idaapi

PURITY_PATH = r"D:\RA2YR_ReSource\injectFunctionTest\purity_effects.json"
DRY_RUN = 500  # 0 = all, N = first N functions

# ============================================================
# Class vtable cache
# ============================================================

# Known class vtable addresses (from existing IDA analysis)
# Format: class_name → { vtable_offset → [method_addr, ...] }

vtable_cache: dict[str, dict[int, list[str]]] = {}

def build_vtable_cache():
    """Scan .rdata for vtables, build class → slot → method mapping."""
    # Find vtable regions in .rdata
    seg = idaapi.get_segm_by_name(".rdata")
    if not seg:
        print("ERROR: .rdata not found")
        return

    # Patterns: consecutive dword function pointers in .rdata
    # grouped into vtables. Use existing IDA naming to associate.
    # This is a simplified version — for production, use the full
    # vtable analysis from docs/coverage.md's approach.

    # For now, scan .rdata for dword-aligned addresses pointing to .text
    ea = seg.start_ea
    end = seg.end_ea

    current_table = []
    current_start = 0

    while ea < end:
        ptr = idaapi.get_dword(ea)
        if ida_funcs.get_func(ptr) and idaapi.get_segm_name(idaapi.getseg(ptr)) == ".text":
            if not current_table:
                current_start = ea
            current_table.append(ptr)
        else:
            if len(current_table) >= 2:
                # Try to associate with a class name
                store_vtable(current_start, current_table)
            current_table = []
            current_start = 0
        ea += 4

    if len(current_table) >= 2:
        store_vtable(current_start, current_table)

    print(f"  Cached {len(vtable_cache)} vtable entries")


def store_vtable(start, methods):
    """Store a vtable mapping. Try to find class name from method names."""
    # Get the first few method names to extract class
    names = []
    for m in methods[:5]:
        n = ida_name.get_ea_name(m)
        names.append(n)

    # Extract class name from the most common prefix
    class_name = None
    for n in names:
        if "::" in n:
            cn = n.split("::")[0]
            if not class_name:
                class_name = cn
            elif class_name != cn:
                class_name = None
                break
        elif class_name:
            # Mixed named/unnamed → not a clean vtable
            class_name = None
            break

    if class_name:
        entry = vtable_cache.setdefault(class_name, {})
        for i, m in enumerate(methods):
            entry[i * 4] = [f"0x{m:08X}"]  # offset → method address


# ============================================================
# Indirect call resolution
# ============================================================

def resolve_vtable_call(func_ea, insn):
    """Attempt to resolve a vtable call instruction.

    Returns: list of possible callee addresses (strings like "0x401000"),
             or empty list if unresolved.
    """
    op = insn.ops[0]

    # Only handle [reg+const] type indirect calls
    if op.type != ida_ua.o_displ:
        return []

    reg = op.reg
    offset = op.addr

    # Check if this is a vtable call (this pointer → reg)
    # For thiscall, ECX = this. But we need to track the register origin.
    # Simple heuristic: if the register loaded from parameter 0.
    # More sophisticated: do backward slice (Phase 3 full impl).

    # For now: just try to match by class name
    # Get the function's this type
    tif = ida_typeinf.tinfo_t()
    if not ida_nalt.get_tinfo(tif, func_ea):
        return []

    fd = ida_typeinf.func_type_data_t()
    if not tif.get_func_details(fd):
        return []

    # Check if thiscall (first param is this pointer)
    proto = tif.dstr()
    if "__thiscall" not in proto:
        return []

    # Get class name from vtable cache
    # Find which class has a vtable slot at this offset
    results = []
    for class_name, slots in vtable_cache.items():
        if offset in slots:
            results.extend(slots[offset])

    return list(set(results))  # deduplicate


# ============================================================
# Main extraction
# ============================================================

def extract_phase3():
    with open(PURITY_PATH, "r", encoding="utf-8") as f:
        purity = json.load(f)

    funcs = purity["funcs"]
    total = 0
    with_indirect = 0
    resolved = 0
    total_vtable_calls = 0

    t_start = time.time()

    for addr, entry in funcs.items():
        total += 1
        if DRY_RUN and total > DRY_RUN:
            break

        if not entry.get("ci"):
            continue

        with_indirect += 1
        ea = int(addr, 16)
        func = ida_funcs.get_func(ea)
        if not func:
            continue

        vtable_targets = {}
        scan_ea = func.start_ea
        while scan_ea < func.end_ea:
            insn = ida_ua.insn_t()
            sz = ida_ua.decode_insn(insn, scan_ea)
            if sz == 0:
                scan_ea += 1
                continue

            if insn.get_canon_mnem() == "call" and insn.ops[0].type == ida_ua.o_displ:
                call_ea = f"0x{scan_ea:08X}"
                targets = resolve_vtable_call(ea, insn)
                if targets:
                    vtable_targets[call_ea] = targets
                    resolved += 1
                total_vtable_calls += 1

            scan_ea += sz

        if vtable_targets:
            entry["phase3_vtable"] = vtable_targets
        else:
            entry["phase3_vtable"] = {}

        if with_indirect % 500 == 0:
            elapsed = time.time() - t_start
            print(f"  {with_indirect} indirect functions...",
                  f"({with_indirect/elapsed:.0f}/s)" if elapsed > 0 else "",
                  end="\r")

    elapsed = time.time() - t_start
    print(f"\nDone: {with_indirect} indirect functions in {elapsed:.1f}s")
    print(f"  Vtable calls: {total_vtable_calls}")
    print(f"  Resolved: {resolved} ({resolved*100/max(total_vtable_calls,1):.1f}%)")

    # Save
    purity.setdefault("meta", {})["phase3_date"] = time.strftime("%Y-%m-%d")
    with open(PURITY_PATH, "w", encoding="utf-8") as f:
        json.dump(purity, f, indent=2, ensure_ascii=False)

    print(f"Updated {PURITY_PATH}")


# ============================================================
# Entry point
# ============================================================

if __name__ == "__main__":
    build_vtable_cache()
    extract_phase3()
