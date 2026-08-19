#!/usr/bin/env python3
"""
IDA Python script: Auto-rename all VectorClass_ptr_* and VectorClass_* 
template instantiation sub_* methods.

Uses decompiled body pattern matching to classify each sub_* into the 
corresponding template method from VectorClass (vector.hpp).

v2: Dry-run first to verify classification accuracy before renaming.
"""

import idaapi
import ida_funcs
import ida_name
import ida_hexrays
import ida_bytes
import re
from collections import Counter, defaultdict

DRY_RUN = False  # Set to True for dry-run preview only

# =============================================================================
# Classification rules
# =============================================================================

def classify_function(addr, size):
    """
    Classify a VectorClass sub_* function by its decompiled body.
    Returns (method_name, reason).
    """
    try:
        cfunc = ida_hexrays.decompile(addr)
        if not cfunc:
            return None, "decompile_failed"
        body = str(cfunc)
    except:
        return None, "decompile_exception"

    # --- Rule 1: Scalar Deleting Destructor ---
    # Pattern: "this = &VectorClass<...>::`vftable'" + scalar delete
    if re.search(r'VectorClass.*::\'vftable\'', body):
        if re.search(r'\(a\d & 1\) != 0', body) or re.search(r'\(Block, \w\) & 1', body):
            return "ScalarDeletingDestructor", "vtable+scalar_del"

    # --- Rule 2: Destructor body (Destroy) ---
    # Frees Items if IsAllocated, zeroes fields. No vtable set, no scalar delete.
    if re.search(r'this \+ 13\)', body) and re.search(r'__3_YAXPAX_Z', body):
        if re.search(r'this \+ 4\) = 0', body) or re.search(r'this \+ 8\) = 0', body):
            if "vftable" not in body:
                return "Destroy", "dtor_body_free_items"

    # --- Rule 3: SetCapacity ---
    # Allocates (operator new[]), copies old items, frees old, sets capacity
    has_new = "__2_" in body
    has_copy_loop = bool(re.search(r'\bfor\b.*\b\+\+', body))
    
    if has_new and has_copy_loop:
        return "SetCapacity", "alloc+copy+free"

    # --- Rule 4: FindItemIndex ---
    # Linear search loop, returns index or -1
    has_for_loop = bool(re.search(r'\bfor\b', body))
    has_return_neg1 = "return -1" in body
    has_pointer_compare = bool(re.search(r'\*[iv]\w* != \*', body))

    if has_for_loop and has_return_neg1:
        return "FindItemIndex", "linear_search"

    # --- Rule 5: GetItemIndex ---
    # Pointer arithmetic: (a2 - Items) >> shift
    if re.search(r'>> [23]\)', body):
        if re.search(r'this \+ 4\)', body):
            return "GetItemIndex", "pointer_shift"

    if re.search(r'a\d - \*\(_DWORD \*\)\(this \+ 4\)', body):
        return "GetItemIndex", "pointer_subtract"

    # --- Rule 6: GetItem ---
    # Returns Items[index]. Very small.
    if re.search(r'this \+ 4\).*\* \d', body):
        if size <= 0x15 and "return" in body:
            return "GetItem", "simple_getter"

    # --- Rule 7: Clear ---
    # Sets Count (this+16) to 0, may also call destructor
    if re.search(r'this \+ 16\) = 0', body):
        if "vftable" not in body:
            return "Clear", "clear_count"

    # --- Fallback: size-based classification ---
    if size <= 0x10:
        return "GetItem", f"tiny_{size:#x}"
    elif size <= 0x1e:
        return "GetItemIndex", f"small_{size:#x}" 
    elif size <= 0x2c:
        return "Destroy", f"med_small_{size:#x}"
    elif size <= 0x4c:
        return "FindItemIndex", f"medium_{size:#x}"
    elif size <= 0x55:
        return "ScalarDeletingDestructor", f"med_large_{size:#x}"
    elif size <= 0x200:
        return "SetCapacity", f"large_{size:#x}"
    else:
        return "SetCapacity", f"xlarge_{size:#x}"


def main():
    print("=" * 70)
    print("VectorClass Template Sub_* Rename Tool v2")
    mode = "DRY RUN (preview only)" if DRY_RUN else "LIVE (will rename)"
    print(f"Mode: {mode}")
    print("=" * 70)

    if not ida_hexrays.init_hexrays_plugin():
        print("[ERROR] Hex-Rays unavailable!")
        return None

    pattern = re.compile(r'^(VectorClass(?:_ptr)?_.*?)::(sub_\w+)$')
    sub_funcs = []

    for i in range(ida_funcs.get_func_qty()):
        func = ida_funcs.getn_func(i)
        if not func:
            continue
        name = ida_funcs.get_func_name(func.start_ea)
        m = pattern.match(name)
        if m:
            sub_funcs.append({
                "addr": func.start_ea,
                "cls": m.group(1),
                "sub": m.group(2),
                "size": func.end_ea - func.start_ea,
                "name": name,
            })

    print(f"\nTotal VectorClass sub_* functions: {len(sub_funcs)}")
    classes = set(f["cls"] for f in sub_funcs)
    print(f"Across {len(classes)} unique classes")

    # Classify each
    renames = []
    skipped = []
    failed = []

    for i, f in enumerate(sub_funcs):
        if (i + 1) % 60 == 0 or i == 0:
            print(f"  [{i+1}/{len(sub_funcs)}] classifying...")

        method_name, reason = classify_function(f["addr"], f["size"])

        if method_name:
            cls = f["cls"]
            full = f"{cls}::{method_name}"
            existing = ida_name.get_name_ea(idaapi.BADADDR, full)
            if existing != idaapi.BADADDR and existing != f["addr"]:
                full = f"{cls}::{method_name}_{f['addr']:06X}"
            renames.append({
                "addr": f["addr"],
                "cls": cls,
                "old": f["sub"],
                "new": method_name,
                "full": full,
                "size": f["size"],
                "reason": reason,
            })
        elif reason in ("decompile_failed", "decompile_exception"):
            failed.append(f)
        else:
            skipped.append(f)

    print(f"\nClassification results:")
    print(f"  Rename candidates: {len(renames)}")
    print(f"  Skipped (no match): {len(skipped)}")
    print(f"  Failed decompile: {len(failed)}")

    # Method distribution
    name_counts = Counter(r["new"] for r in renames)
    print(f"\nBy method:")
    for name, count in name_counts.most_common():
        print(f"  {name}: {count}")

    # Top classes
    cls_counts = Counter(r["cls"] for r in renames)
    print(f"\nTop classes (rename count):")
    for cls, count in cls_counts.most_common(12):
        print(f"  {cls}: {count}")

    # Sample per method
    print(f"\nSample renames (first 3 per method):")
    shown = defaultdict(int)
    for r in renames:
        if shown[r["new"]] < 3:
            print(f"  0x{r['addr']:06X} {r['cls']}::{r['old']}")
            print(f"    → {r['new']} ({r['size']:#x}B, {r['reason']})")
            shown[r["new"]] += 1

    # Show skipped
    if skipped:
        print(f"\n--- Skipped ({len(skipped)}) ---")
        for s in skipped:
            print(f"  0x{s['addr']:06X} {s['cls']}::{s['sub']} ({s['size']:#x}B)")

    # Show failed
    if failed:
        print(f"\nFailed decompile ({len(failed)}):")
        for s in failed:
            print(f"  0x{s['addr']:06X} {s['cls']}::{s['sub']}")

    # Execute or dry-run
    if not DRY_RUN and renames:
        print(f"\n--- RENAMING {len(renames)} functions ---")
        ok = 0
        for i, r in enumerate(renames):
            if (i + 1) % 100 == 0:
                print(f"  [{i+1}/{len(renames)}] ...")
            if ida_name.set_name(r["addr"], r["full"], ida_name.SN_FORCE):
                ok += 1
            else:
                print(f"  [FAIL] 0x{r['addr']:06X}: {r['full']}")

        # Comment skipped
        for s in skipped:
            try:
                ida_bytes.set_cmt(s["addr"], 
                    f"VectorClass unclassified: size={s['size']:#x}", False)
            except:
                pass

        print(f"\nRenamed: {ok}/{len(renames)}")
    elif DRY_RUN and renames:
        print(f"\n[DRY RUN] Would rename {len(renames)} functions.")

    remaining = len(skipped) + len(failed)
    print(f"\n{'='*70}")
    print(f"FINAL: {len(sub_funcs)} total, {len(renames)} classified, {remaining} remaining")
    return {"total": len(sub_funcs), "classified": len(renames), "remaining": remaining}


result = main()
