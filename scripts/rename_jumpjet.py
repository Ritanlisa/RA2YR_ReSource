#!/usr/bin/env python3
"""
IDA Python script: Rename JumpjetLocomotionClass::sub_* functions
based on decompiled body analysis (callees, size, common patterns).

v3: Callee-based classification + duplicate template instance detection.
"""

import idaapi
import ida_funcs
import ida_name
import ida_hexrays
import ida_bytes
import re

CLASS = "JumpjetLocomotionClass"

# =============================================================================
# Already-named functions (don't touch)
# =============================================================================
ALREADY_NAMED_SHORT = {
    "Update2", "AdjustClimbFacing", "ComputeVoxelTransform", "SetWaypointTarget",
    "IsAtDestination", "UpdateMovementPosition", "Thunk_VtableDispatch4",
    "ProcessLocomotionStep", "UpdateFootLocomotion", "ComputeMoveToPosition",
    "ProcessRotation", "ComputeRotationMatrix", "CalculateBobOffset",
    "ComputeVoxelMatrix", "GetInterface", "GetInterface2", "SetMovementTarget",
    "IsBridgeBlocking", "TryMoveToAdjacentCell", "InitMovementParams",
    "DispatchLocomotion", "SmoothObjectPlacement", "MoveToDestination",
    "GetClassIdentifier", "InitClass", "LoadFromStream", "ProcessLanding",
    "GetFloorZSetContext", "QueryInterface", "ComputeMovementTransform",
    "AddRef", "Release", "CheckAttachStatus", "ProcessAttach",
    "ClampToCellBounds", "ComputePitchYaw", "ComputeVoxelTransform2",
    "CheckState", "CheckState2", "CheckState3", "CheckState4", "CheckState5",
    "ProcessFactoryExit", "UpdateAltitude", "IUnknownAddRef", "IUnknownRelease",
    "SyncMovementPosition", "ComputeTurretTransform", "ComputeBounceHeight",
    "Stub2", "Stub3", "Stub4", "Stub5", "Stub6", "Stub7", "Stub8", "Stub9",
    "Stub10", "Stub11", "Stub12", "Stub13", "Stub14", "Stub15", "Stub16",
    "StubReturnFalse",
    "MissionStub", "MissionStub2", "MissionStub3", "MissionStub4", "MissionStub5",
    "MissionStub6", "MissionStub7", "MissionStub8", "MissionStub9",
    "MissionStub10", "MissionStub11",
    "ComputeVoxelTransform2",
}

# =============================================================================
# Callee → name mapping (substring match on decompiled text)
# =============================================================================
CALLEE_TO_NAME = [
    # Facing subsystem
    ("FacingClass::Update", "UpdateFacingDirection"),
    ("FacingClass::Set_SyncLog", "SynchronizeFacingDirection"),
    ("FacingClass::Set_Current", "SetCurrentFacing"),
    ("FacingClass::SetDesired", "SetDesiredFacing"),
    ("FacingClass::SetStart", "SetStartFacing"),
    
    # Audio
    ("Audio3D::ComputeRotation", "ComputeAudio3DRotation"),
    
    # Stream persistence
    ("StreamClass::ClearDirty", "ClearLocomotionDirty"),
    ("StreamClass::Set2", "LoadLocomotionFromStream"),
    
    # Math
    ("Math::Sqrt", "ComputeVectorLengthMetric"),
    
    # Random
    ("Random::Range", "RandomizeLocomotionParam"),
    
    # Map/Cell
    ("Cell::GetGroundHeight", "ComputeGroundHeight"),
    ("Coord::To_Cell", "ConvertCoordToCell"),
    ("IsCoordVisibleMap", "IsMapCoordVisible"),
    ("Object::FindClosestObjectCell", "FindClosestOccupiableCell"),
    ("Isometric::InitTables", "InitializeIsometricContext"),
    
    # Removal/LinkedList
    ("LinkedList::Pop", "ProcessPendingObjectRemoval"),
    
    # COM helpers
    ("ComPtr::Release_Alt", "ReleaseComInterfacePtr"),
    ("WinAPI::Wrapper", "CheckWindowsErrorWrapper"),
]

# =============================================================================
# Body text → name patterns (for functions without distinctive callees)
# =============================================================================
BODY_PATTERNS = [
    # Single-line stubs
    (r"^\s*return 0;\s*$", "StubReturnZero"),
    (r"^\s*return 1;\s*$", "StubReturnTrue"),
    (r"^\s*return -2147467261;\s*$", "StubReturnNullPointer"),
    (r"^\s*return -2147467259;\s*$", "StubReturnFail"),
    (r"^\s*return S_OK;\s*$", "StubReturnOk"),
    
    # Field access (offset 0x50 = 80 decimal = piggyback/linked unit pointer)
    (r"\*\(_DWORD \*\)\(a1 \+ 80\) = a2", "SetLinkedLocomotorPointer"),
    (r"return \*\(_DWORD \*\)\(a1 \+ 80\)", "GetLinkedLocomotorPointer"),
    (r"\*\(_DWORD \*\)\(a1 \+ 80\) = 0", "ClearLinkedLocomotorPointer"),
    
    # Score state comparison (fields 5-10 match global score states)
    (r"a1\[5\] != g_ScoreDisplay", "HasScoreDisplayChanged"),
    
    # Byte-table lookups (direction/state lookup)
    (r"byte_7E7B2[89]|algn_7E7B29|dword_7E7A2C", "CheckFacingStateTransition"),
    
    # Multiple-return simple bool check
    (r"!\*\(_DWORD \*\)\(a1 \+ 80\).*\n.*!\*\(_BYTE \*\)\(a1 \+ 77\)", "CanLocomotorOperate"),
]


def get_sub_funcs():
    """Return all CLASS::sub_* functions."""
    result = []
    for i in range(ida_funcs.get_func_qty()):
        func = ida_funcs.getn_func(i)
        if not func:
            continue
        name = ida_funcs.get_func_name(func.start_ea)
        if name.startswith(f"{CLASS}::sub_"):
            result.append({
                "addr": func.start_ea,
                "name": name,
                "short": name.split("::")[1],
                "size": func.end_ea - func.start_ea,
            })
    return result


def get_all_jumpjet():
    """Return all CLASS::* functions for stats."""
    result = []
    for i in range(ida_funcs.get_func_qty()):
        func = ida_funcs.getn_func(i)
        if not func:
            continue
        name = ida_funcs.get_func_name(func.start_ea)
        if name.startswith(f"{CLASS}::"):
            result.append({
                "addr": func.start_ea,
                "name": name,
                "size": func.end_ea - func.start_ea,
            })
    return result


def decompile_text(addr):
    """Decompile and return text, or None."""
    try:
        cfunc = ida_hexrays.decompile(addr)
        return str(cfunc) if cfunc else None
    except:
        return None


def get_body(decomp_text):
    """Strip function signature line, return body text only."""
    if not decomp_text:
        return ""
    lines = decomp_text.strip().split('\n')
    return '\n'.join(lines[1:]).strip() if len(lines) > 1 else ""


def classify_by_callees(body):
    """Match callee names in body text, return (name, callee_hit)."""
    for callee_sub, name in CALLEE_TO_NAME:
        if callee_sub in body:
            return name, callee_sub
    return None, None


def classify_by_patterns(body):
    """Match body text patterns."""
    for pattern, name in BODY_PATTERNS:
        if re.search(pattern, body, re.MULTILINE | re.DOTALL):
            return name, pattern
    return None, None


def classify_generic(body, size, addr):
    """Heuristic classification for remaining unnamed functions."""
    # Tiny stubs
    if size <= 5:
        if "return 0" in body:
            return "StubReturnZero"
        if "return 1" in body:
            return "StubReturnTrue"
        return None
    
    # Small field accessors  
    if size <= 0x10:
        m = re.search(r'return a1\[(\d+)\];', body)
        if m:
            off = int(m.group(1)) * 4
            return f"GetField_{off:#06x}"
        m = re.search(r'a1\[(\d+)\] = (\w+);\s*return', body)
        if m:
            off = int(m.group(1)) * 4
            return f"SetField_{off:#06x}"
    
    # Float operations
    if "*(float *)" in body or "*(double *)" in body:
        if " + " in body or " * " in body:
            return "ComputeFloatExpression"
        return "AccessFloatField"
    
    # vtable dispatch
    if re.search(r'\(\*\(int \(__thiscall \*\*\)', body):
        return "DispatchVirtualCall"
    
    # Bit operations
    if " & 0x" in body or " | 0x" in body:
        return "ComputeBitmaskOperation"
    
    # Coordinate patterns
    if "Coord::" in body:
        return "OperateOnCoordinate"
    if "Cell::" in body:
        return "QueryCellData"
    
    return None


def main():
    print("=" * 70)
    print("JumpjetLocomotionClass Sub_* Rename Tool v3")
    print("=" * 70)
    
    if not ida_hexrays.init_hexrays_plugin():
        print("[ERROR] Hex-Rays unavailable!")
        return None
    
    sub_funcs = get_sub_funcs()
    all_funcs = get_all_jumpjet()
    named_before = len(all_funcs) - len(sub_funcs)
    
    print(f"\nTotal JumpjetLocomotionClass: {len(all_funcs)}")
    print(f"  Named before: {named_before}")
    print(f"  sub_* to process: {len(sub_funcs)}")
    
    renames = []
    skipped = []
    failed = []
    
    for i, f in enumerate(sub_funcs):
        addr = f["addr"]
        short = f["short"]
        size = f["size"]
        
        if (i + 1) % 30 == 0 or i == 0:
            print(f"  [{i+1}/{len(sub_funcs)}] ...")
        
        text = decompile_text(addr)
        if not text:
            failed.append(f)
            continue
        
        body = get_body(text)
        if not body:
            failed.append(f)
            continue
        
        # Try callee match first (most specific)
        name, hit = classify_by_callees(body)
        
        # Then body text patterns
        if not name:
            name, hit = classify_by_patterns(body)
        
        # Then generic heuristics
        if not name:
            name = classify_generic(body, size, addr)
        
        if name:
            full = f"{CLASS}::{name}"
            existing = ida_name.get_name_ea(idaapi.BADADDR, full)
            if existing != idaapi.BADADDR and existing != addr:
                full = f"{CLASS}::{name}_{addr:06X}"
            renames.append({"addr": addr, "old": short, "new": name, "full": full, "size": size})
        else:
            skipped.append(f)
    
    print(f"\nAnalysis results:")
    print(f"  Rename candidates: {len(renames)}")
    print(f"  Skipped (unclassified): {len(skipped)}")  
    print(f"  Failed decompile: {len(failed)}")
    
    # Show plan
    if renames:
        print(f"\n--- Renaming {len(renames)} functions ---")
        for i, r in enumerate(renames):
            print(f"  {i+1:3d}. 0x{r['addr']:06X} ({r['size']:#x}B): {r['old']} -> {r['new']}")
    
    # Execute
    ok_count = 0
    for r in renames:
        if ida_name.set_name(r["addr"], r["full"], ida_name.SN_FORCE):
            ok_count += 1
        else:
            print(f"  [FAIL] 0x{r['addr']:06X}: {r['old']} -> {r['full']}")
    
    print(f"\nRenamed: {ok_count}/{len(renames)}")
    
    # Comment skipped functions
    for s in skipped:
        try:
            ida_bytes.set_cmt(s["addr"], f"sub_* unclassified: size={s['size']:#x}", False)
        except:
            pass
    
    # Final stats
    remaining = len(skipped) + len(failed)
    final_named = named_before + ok_count
    
    print(f"\n{'='*70}")
    print("FINAL RESULTS")
    print(f"{'='*70}")
    print(f"Before: {named_before}/{len(all_funcs)} named ({named_before/len(all_funcs)*100:.1f}%)")
    print(f"After:  {final_named}/{len(all_funcs)} named ({final_named/len(all_funcs)*100:.1f}%)")
    print(f"Renamed this run: {ok_count}")
    print(f"Remaining sub_*:  {remaining} "
          f"(unclassified={len(skipped)}, decompile_failed={len(failed)})")
    
    return {
        "total": len(all_funcs),
        "before_named": named_before,
        "renamed": ok_count,
        "after_named": final_named,
        "pct": final_named / len(all_funcs) * 100,
        "remaining": remaining,
        "skipped": len(skipped),
        "failed": len(failed),
    }


result = main()
