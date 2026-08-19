#!/usr/bin/env python3
"""
IDA Python: Pass 3 - precise per-function rename for remaining JumpjetLocomotionClass::sub_*
Based on manual decompilation analysis of all 28 remaining functions.
"""

import idaapi
import ida_funcs
import ida_name
import ida_hexrays
import ida_bytes
import re

CLASS = "JumpjetLocomotionClass"

# Precise rename map: addr → new_name
PRECISE_MAP = {
    # === Coordinate extractors (a1[12-14] → a2) ===
    0x4AFC90: "GetCoordinate",       # *a2=a1[12]; a2[1]=a1[13]; a2[2]=a1[14]
    0x69F3A0: "GetCoordinate",       # same body as 4AFC90 (template dup)
    0x661FB0: "GetCoordinate",       # same body (template dup)
    
    # === Speed coordinate extractor (a1[7-9] → a2) ===
    0x4B5B40: "GetSpeedCoordinate",  # *a2=a1[7]; a2[1]=a1[8]; a2[2]=a1[9]
    
    # === Render coordinate (DDraw clip-rect aware, a1[15-17] or linked obj coords) ===
    0x4AFCC0: "GetRenderCoordinate", # if clip_rect match → linked+156; else a1[15-17]
    0x69F3D0: "GetRenderCoordinate", # template dup
    0x5AFFE0: "GetRenderCoordinate", # template dup
    0x75AC00: "GetRenderCoordinate", # template dup
    
    # === MoveTo with coordinate validation ===
    0x4B48D0: "MoveToChecked",       # JumpjetLocomotion::MoveTo with clip-rect check
    0x6A3F00: "MoveToChecked",       # template dup
    
    # === Movement coordinate (if moving: self coords, else globals) ===
    0x4CCAE0: "GetMovementCoordinate", # if vfunc16 → a1[6-8]; else dword_8B3C7x
    0x54AE60: "GetMovementCoordinate", # if vfunc16 → a1[15-17]; else dword_ABC5Ax
    0x5AFF80: "GetMovementCoordinate", # if vfunc16 → a1[5-7]; else g_MatrixTransformState
    0x75ABA0: "GetMovementCoordinate", # template dup of 5AFF80
    
    # === Position threshold comparator ===
    0x517210: "IsPositionWithinThreshold", # vfunc24 coords vs params with abs32 check
    0x5B1AA0: "IsPositionWithinThreshold", # template dup
    0x75CA80: "IsPositionWithinThreshold", # template dup
    
    # === Conditional coordinate (field[19] check) ===
    0x54D9B0: "GetConditionedCoordinate", # if a1[19] → a1[15-17]; else linked+156
    
    # === Matrix transform state sync ===
    0x5B0120: "SyncMatrixTransformState", # set a1+20..28 from globals, check 32-40, clear 44
    
    # === Global coordinate reader ===
    0x55AC70: "GetGlobalCoordinate",  # *a2 = dword_ABCC78; a2[1]=dword_ABCC7C; a2[2]=dword_ABCC80
    
    # === Field state comparator ===
    0x661F50: "HasFieldStateChanged",  # a1[5]!=dword_B04E38 || a1[6]!=dword_B04E3C || a1[7]!=dword_B04E40
    
    # === Conditional coordinate (if moving: self, else linked obj) ===
    0x7180A0: "GetCoordinateConditional", # if vfunc16 → a1[6-8]; else linked+156 coord
    0x728A90: "GetCoordinateConditional", # template dup
    
    # === Movement state reset from globals ===
    0x718230: "ResetMovementState",    # a1+24..32 from globals, clear +48,+50
    
    # === Locomotor constructor ===
    0x71A130: "ConstructLocomotor",    # Release old, LocomotionClass::Construct, optional delete
    
    # === State check with numeric override ===
    0x72A020: "CheckStateWithOverride", # if state in {2,3,5,6,7} return 2; else CheckState
    
    # === State range check ===
    0x72A060: "IsStateInRange",       # state<2 || state==2 || state==6 || state==7
    
    # === Voxel animation draw wrapper ===
    0x75AC80: "DrawVoxelAnimation",   # set a1[49]=1, VoxelAnim::Draw, clear, return vfunc16
}


def get_remaining_sub():
    result = []
    for i in range(ida_funcs.get_func_qty()):
        func = ida_funcs.getn_func(i)
        if not func:
            continue
        name = ida_funcs.get_func_name(func.start_ea)
        if name.startswith(f"{CLASS}::sub_"):
            result.append({
                "addr": func.start_ea,
                "short": name.split("::")[1],
            })
    return result


def main():
    print("=" * 70)
    print("JumpjetLocomotionClass Pass 3 - Precise Renames")
    print("=" * 70)
    
    remaining = get_remaining_sub()
    print(f"Remaining sub_*: {len(remaining)}")
    
    renames = []
    not_found = []
    
    for f in remaining:
        addr = f["addr"]
        short = f["short"]
        
        if addr in PRECISE_MAP:
            name = PRECISE_MAP[addr]
            full = f"{CLASS}::{name}"
            existing = ida_name.get_name_ea(idaapi.BADADDR, full)
            if existing != idaapi.BADADDR and existing != addr:
                full = f"{CLASS}::{name}_{addr:06X}"
            renames.append({"addr": addr, "old": short, "new": name, "full": full})
        else:
            not_found.append(f)
    
    print(f"\nRename candidates: {len(renames)}")
    print(f"Not in map: {len(not_found)}")
    
    for r in renames:
        print(f"  0x{r['addr']:06X}: {r['old']} -> {r['new']}")
    
    for n in not_found:
        print(f"  [NOT FOUND] 0x{n['addr']:06X}: {n['short']}")
    
    # Execute
    ok = 0
    for r in renames:
        if ida_name.set_name(r["addr"], r["full"], ida_name.SN_FORCE):
            ok += 1
        else:
            print(f"  [FAIL] {r['old']} -> {r['full']}")
    
    print(f"\nRenamed: {ok}/{len(renames)}")
    
    # Final stats
    final_remaining = get_remaining_sub()
    all_jj = []
    for i in range(ida_funcs.get_func_qty()):
        func = ida_funcs.getn_func(i)
        if not func:
            continue
        name = ida_funcs.get_func_name(func.start_ea)
        if name.startswith(f"{CLASS}::"):
            all_jj.append(name)
    
    named = len(all_jj) - len(final_remaining)
    pct = named / len(all_jj) * 100
    
    print(f"\n{'='*70}")
    print(f"AFTER PASS 3")
    print(f"Named: {named}/{len(all_jj)} ({pct:.1f}%)")
    print(f"Remaining sub_*: {len(final_remaining)}")
    
    for r in final_remaining:
        print(f"  REMAINING: {r['short']}")
    
    return {"named": named, "total": len(all_jj), "pct": pct, "remaining": len(final_remaining)}

result = main()
