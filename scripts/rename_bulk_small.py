#!/usr/bin/env python3
"""
IDA Python script: Bulk rename sub_* functions for medium classes (5-20 sub_*)
and small classes (1-4 sub_*) using decompiled body pattern matching.

After waves 2-3, ~413 sub_* remain across 156 classes.
Target: <100 remaining total sub_*.
"""

import idaapi
import ida_funcs
import ida_name
import ida_hexrays
import ida_bytes
import re
import sys
from collections import defaultdict

# =============================================================================
# Classification rules for standard Vector-like container patterns
# =============================================================================

def classify_function(addr, class_name, short_name):
    """Classify a sub_* function by decompiled body pattern."""
    try:
        cfunc = ida_hexrays.decompile(addr)
        if not cfunc:
            return None, "decompile_failed"
        body = str(cfunc)
    except:
        return None, "decompile_exception"

    func = ida_funcs.get_func(addr)
    size = func.size() if func else 0

    # --- Pattern 1: Clear/Purge buffer ---
    # Pattern: frees *(this+4) with __3_YAXPAX_Z, clears fields at this+8/12/13/16
    # "v2 = *(void **)(this + 4); *(_DWORD *)(this + 16) = 0; if ( v2 && *(_BYTE *)(this + 13) ) { __3_YAXPAX_Z(v2); *(_DWORD *)(this + 4) = 0; } ..."
    if re.search(r'this \+ 4\).*\n.*this \+ 16\) = 0', body) and '__3_YAXPAX_Z' in body:
        if 'this + 13' in body and 'this + 8' in body:
            return "ClearBuffer", "clear_buffer_pattern"

    # --- Pattern 2: Pointer-to-index ---
    # Pattern: "(unsigned int)(a2 - *(_DWORD *)(this + 4)) >> N"
    # OR: "(unsigned int)(a2 - *(this + 4)) >> N"
    if '>>' in body and 'this + 4' in body and 'this + 12' in body:
        m = re.search(r'>>\s*(\d)', body)
        if m:
            return "PointerToIndex", "ptr_to_index_shift"

    # --- Pattern 3: Copy/Clone buffer (SetCapacity) ---
    # Pattern: allocates __2_YAPAXI_Z, copies items, frees old
    if '__2_YAPAXI_Z' in body and '__3_YAXPAX_Z' in body:
        if 'this + 12' in body and 'this + 4' in body:
            if size > 140:
                return "SetCapacity", "copy_alloc_free"

    # --- Pattern 4: FindItem (single dword) ---
    # Pattern: "v2 = *(this + 4); result = 0; if (v2 <= 0) return -1; for (i = *(this+1); *i != *a2; ++i) { if (++result >= v2) return -1; }"
    if re.search(r'this \+ 4\);\s*\w+ = 0', body) and 'return -1' in body:
        if re.search(r'\*i != \*a2', body) or re.search(r'\*\w+ != \*a\d', body):
            if 'this + 1' in body:
                return "FindItem", "linear_search_single"

    # --- Pattern 5: FindPair (two dwords) ---
    # Pattern: "*i != *a2 || i[1] != a2[1]"
    if re.search(r'\*i != \*a2 \|\| i\[1\] != a2\[1\]', body):
        return "FindPair", "linear_search_pair"

    # --- Pattern 6: Deleting Destructor (scalar delete) ---
    if re.search(r'vftable', body):
        if re.search(r'\(a\d & 1\) != 0', body) or re.search(r'\(Block, \w\) & 1', body):
            if '__3_YAXPAX_Z' in body and size < 50:
                return "ScalarDeletingDestructor", "scalar_delete"

    # --- Pattern 7: Destructor body ---
    if '__3_YAXPAX_Z' in body and size < 30:
        if not re.search(r'vftable', body):
            if 'DeleteAndZero' in body or ('this + 2' in body and 'this + 1' in body):
                return "Destroy", "dtor_body"

    # --- Pattern 8: GetIndex (pointer arithmetic) ---
    if re.search(r'>>\s*[23]\)', body) and 'this + 4' in body:
        return "GetItemIndex", "pointer_arithmetic"

    # --- Pattern 9: Contains/Is item ---
    if re.search(r'return -1', body) and 'this + 4' in body:
        if 'for' in body and '++result' in body:
            return "IndexOf", "find_return_index"

    # --- Pattern 10: ClearAll (zeroing members) ---
    if 'memset' in body and size < 60:
        return "Reset", "memset_clear"

    return None, "no_pattern_match"


def classify_specific(class_name, addr, short_name, body, size):
    """Class-specific heuristics for known classes."""
    
    # === SaveGame ===
    if class_name == 'SaveGame':
        if 'AudioQueue::GetNext' in body:
            return "SaveAudioQueueItems"
        if '1450145875' in body:  # Magic header
            return "WriteMagicHeader"
        if 'g_TriggerEventState' in body and 'g_TriggerPool' in body:
            return "SaveTriggerEvents"
        if '300' in body and '*(v2+16)' in body:
            return "SaveBlock300"
        if '68' in body and size < 25:  # 68-byte block
            return "SaveBlock68"
        if '*(this+4)+4*i' in body and '8, 0' in body:
            return "SavePointerArray"
        if 'for ( result = 0;' in body and size < 20:
            return "CountLinkedList"
        if '(this+4' in body and 'this+8' in body and size < 50:
            return "SaveDwordPair"
        if 'i += 6' in body or '*(_DWORD *)v2' in body:
            return "SaveIteratedData"
        if '*(this+10)' in body:
            return "SaveFieldData"

    # === LoadGame ===
    if class_name == 'LoadGame':
        if '1450145875' in body:  # Magic header
            return "LoadMagicAndAudio"
        if 'g_TriggerEventState' in body:
            return "LoadTriggerEvents"
        if '300' in body and size < 100:
            return "LoadBlock300"
        if '68' in body and size < 25:
            return "LoadBlock68"
        if 'v2 += 6' in body and '400' in body:
            return "ClearAllSlots"
        if 'i -= 6' in body or 'i += 24' in body:
            return "LoadIteratedData"
        if '*(this+4) + 4*i' in body and '__3_YAXPAX_Z' in body:
            return "CleanupLoadedArray"
        if '__2_YAPAXI_Z' in body and '8, 0' in body:
            return "LoadPointArray"
        if 'v4 = v2 - 1' in body and '4*v3' in body:
            return "RemoveArrayItem"
        if '2400' in body and size > 60:
            return "ClearAllSlots"

    # === CStreamClass ===
    if class_name == 'CStreamClass':
        if 'IStream::Read' in body:
            return "StreamRead"
        if 'WinAPI::Wrapper' in body and '*this == 0' in body:
            return "IsEmpty"
        if 'QueryInterface' in body and size < 15:
            return "IStreamQueryInterface"
        if 'AddRef' in body and size < 15:
            return "IStreamAddRef"
        if 'Release' in body and size < 15:
            return "IStreamRelease"
        if 'this + 13' in body and 'this + 8' in body and '__3_YAXPAX_Z' in body:
            return "ClearBuffer"
        if '>> 2' in body and 'this + 12' in body:
            return "PointerToIndex"
        if '__2_YAPAXI_Z' in body and size > 150:
            return "CopyItems"
        if '*i != *a2' in body and 'return -1' in body:
            return "FindItem"

    # === Scenario ===
    if class_name == 'Scenario':
        if 'INIClass::GetString' in body and 'StringList' in body:
            return "FindBuildingTypeByName"
        if 'g_SidebarState' in body:
            return "ProcessSidebarUnits"
        if 'g_DisplayWidth' in body and size > 100:
            return "ComputeDisplayPosition"
        if 'GameMode_Current' in body and 'Copy8Bytes' in body:
            return "ComputeDialogPosition"
        if 'LoadOptions::Run' in body:
            return "LoadOrReloadOptions"
        if 'dword_ABF9F4' in body:
            return "ResetDisplayArrays"
        if '2050' in body:
            return "CopyLocalScenarioData"

    # === Options ===
    if class_name == 'Options':
        if 'DeleteAndZero::Alt' in body and size < 30:
            return "ClearComboBoxes"
        if '3 * v2 > v3' in body and size > 100:
            return "EnsureCapacity"
        if '__3_YAXPAX_Z' in body and 'this + 11' in body:
            return "FreeImageData"
        if 'GetDlgItem' in body:
            return "InitDialogControls"

    # === LoadOptions ===
    if class_name == 'LoadOptions':
        if 'this + 264' in body and size < 15:
            return "GetData"
        if 'this + 98' in body:
            return "GetFlag98"
        if 'this + 99' in body:
            return "GetFlag99"  
        if 'this + 252' in body:
            return "GetFlag252"
        if '__2_YAPAXI_Z' in body and size > 150:
            return "CopyItems"
        if 'this + 13' in body and 'this + 8' in body and '__3_YAXPAX_Z' in body:
            return "ClearBuffer"
        if '>> 2' in body and 'this + 12' in body:
            return "PointerToIndex"
        if '*i != *a2' in body and 'return -1' in body and size > 40:
            return "FindItem"

    # === ScriptAction ===
    if class_name == 'ScriptAction':
        if 'GetScenarioClassActionCoords' in body:
            return "GetActionCoordinates"
        if 'g_Str_none' in body:
            return "GetArgumentString"
        if 'switch' in body and size > 200:
            return "GetActionTypeInfo"

    # === NetworkLobby ===
    if class_name == 'NetworkLobby':
        if 'g_NetworkPlayerName' in body:
            if 'Network::IsMultiplayerActive' not in body:
                return "CheckPlayerNameValid" if 'WideS' not in body else "ValidatePlayerNames"
        if 'GetResourceID4CSF' in body:
            return "InitLobbyDropdowns"
        if 'GetResourceID3CSF' in body:
            return "UpdatePlayerLabels"
        if 'Network::IsMultiplayerActive' in body:
            return "CheckLobbyConditions"

    # === NetworkGameSetup ===
    if class_name == 'NetworkGameSetup':
        if 'g_RulesInitConfig' in body:
            return "ReadRulesInitConfig"
        if 'g_Rules_Bases' in body:
            return "ReadRulesBases"
        if 'g_Rules_AlliesAllowed' in body:
            return "ReadRulesAlliesAllowed"
        if 'g_Rules_EngineerCount' in body:
            return "ReadRulesEngineerCount"
        if 'dword_A8B278' in body:
            return "ReadRulesUnknown"
        if 'ComPtr::Dtor' in body:
            return "DeleteComPtr"

    # === Delegate ===
    if class_name == 'Delegate':
        if 'Vector::Clear' in body:
            return "ClearVectorAndStraw"
        if 'Straw::Dtor' in body and 'Vector' not in body:
            return "DestroyStraw"
        if 'Pipe::Dtor' in body:
            return "DestroyPipe"

    # === AudioStream ===
    if class_name == 'AudioStream':
        if 'LinkedList::Init' in body:
            return "InitListAndCounters"
        if 'ReadAudioStream' in body and 'Audio::Callback' in body:
            return "ReadAndSetCallback"
        if 'Audio::Callback' in body and size < 50:
            return "SetPlaybackCallback"
        if 'DListNode::Init' in body:
            return "InitNodeFields"
        if 'ReadAudioStream' in body and size < 20:
            return "ReadStreamAndReturn"

    # === CChatEventSink ===
    if class_name == 'CChatEventSink':
        if 'DeleteAndZero' in body and size < 35:
            return "DeleteAndZero"
        if '3 * v2 > v3' in body:
            return "GrowBuffer"
        if '<<' in body and 'this + 12' in body:
            return "ComputeBucketMask"
        if '*(a2 + 2)' in body and '4 * a3' in body and size < 40:
            return "GetItem"

    # === ComboBoxOwnerDraw ===
    if class_name == 'ComboBoxOwnerDraw':
        if '*(this + 1)' in body and '*this' in body and size < 40:
            return "GetWidthHeight" if '*this *' in body else "MatchDimensions"
        if '<<' in body and 'this + 12' in body:
            return "ComputeMask"

    # === PlayerClass ===
    if class_name == 'PlayerClass':
        if 'House::IsHumanPlayer' in body:
            return "CheckHumanPlayer"
        if 'Debug::Log' in body:
            return "SetTargetOrClear"
        if 'TeamClass::AddMember' in body:
            return "AddTeamMember"

    # === IsometricTileTypeClass ===
    if class_name == 'IsometricTileTypeClass':
        if 'MapClass::LoadFileData' in body:
            return "LoadTileFileData"

    # === MSEngine ===
    if class_name == 'MSEngine':
        if 'free' in body and size < 20:
            return "DestroyData"

    # === LoadingScreen ===
    if class_name == 'LoadingScreen':
        if 'FindBuildingAnimByName' in body:
            return "FindLoadScreenAnim"
        if 'off_844C34' in body:
            return "GetBackgroundImage" if '640' in body else "GetForegroundImage"
        if 'off_844C3C' in body:
            return "GetOverlayImage" if '640' in body else "GetOverlayImage2"

    # === MoveFeedback ===
    if class_name == 'MoveFeedback':
        # These have the standard vector patterns already handled above
        pass

    return None


def rename_batch(renames, dry_run=False):
    """Execute batch rename operations."""
    success = 0
    skipped = 0
    errors = 0
    
    for old_name, new_name_full in renames:
        # Find the address of old_name
        addr = idc.get_name_ea_simple(old_name)
        if addr == idc.BADADDR:
            print(f"  ERROR: cannot find {old_name}")
            errors += 1
            continue
        
        # Check if new name already exists
        existing = idc.get_name_ea_simple(new_name_full)
        if existing != idc.BADADDR:
            print(f"  SKIP: {new_name_full} already exists at 0x{existing:X}")
            skipped += 1
            continue
        
        if dry_run:
            print(f"  DRY-RUN: {old_name} -> {new_name_full}")
            success += 1
        else:
            if ida_name.set_name(addr, new_name_full, ida_name.SN_NOWARN):
                success += 1
            else:
                print(f"  FAILED: {old_name} -> {new_name_full}")
                errors += 1
    
    return success, skipped, errors


def main():
    import idc
    import idautils
    
    DRY_RUN = False  # Set True for preview only
    
    # Collect all sub_* functions by class
    sub_funcs = defaultdict(list)
    for ea in idautils.Functions():
        name = idc.get_func_name(ea)
        if '::sub_' in name:
            parts = name.split('::')
            cls = parts[0]
            sub_funcs[cls].append((ea, name, parts[-1]))
    
    print(f"Total: {sum(len(v) for v in sub_funcs.values())} sub_* in {len(sub_funcs)} classes")
    
    renames = []
    unclassified = []
    
    for cls, funcs in sorted(sub_funcs.items()):
        for ea, full_name, short_name in funcs:
            # Skip template classes with bracket notation (already handled or template)
            if '[' in cls:
                # Still try to classify via generic patterns
                name, reason = classify_function(ea, cls, short_name)
                if name:
                    new_name = f"{cls}::{name}"
                    renames.append((full_name, new_name))
                    print(f"  {full_name} -> {name} ({reason})")
                    continue
                else:
                    unclassified.append((cls, full_name, ea))
                    continue
            
            # Try class-specific classification first
            try:
                cfunc = ida_hexrays.decompile(ea)
                body = str(cfunc) if cfunc else ""
            except:
                body = ""
            
            func = ida_funcs.get_func(ea)
            size = func.size() if func else 0
            
            name = classify_specific(cls, ea, short_name, body, size)
            if name:
                new_name = f"{cls}::{name}"
                renames.append((full_name, new_name))
                print(f"  {full_name} -> {name} (classify_specific, size={size})")
                continue
            
            # Try generic pattern classification
            name, reason = classify_function(ea, cls, short_name)
            if name:
                new_name = f"{cls}::{name}"
                renames.append((full_name, new_name))
                print(f"  {full_name} -> {name} ({reason})")
                continue
            
            unclassified.append((cls, full_name, ea))
    
    print(f"\n=== Summary ===")
    print(f"Classified: {len(renames)}")
    print(f"Unclassified: {len(unclassified)}")
    
    if unclassified:
        print(f"\n=== Unclassified functions ===")
        for cls, name, ea in unclassified:
            try:
                cfunc = ida_hexrays.decompile(ea)
                body = str(cfunc)[:150]
            except:
                body = "FAILED"
            print(f"  {name} ({cls}): {body}")
    
    # Execute renames
    if DRY_RUN:
        print(f"\n=== DRY RUN: {len(renames)} renames proposed ===")
        ok, sk, er = rename_batch(renames, dry_run=True)
        print(f"  Would rename: {ok}, would skip: {sk}, errors: {er}")
    else:
        print(f"\n=== Executing {len(renames)} renames ===")
        ok, sk, er = rename_batch(renames, dry_run=False)
        print(f"  Renamed: {ok}, skipped: {sk}, errors: {er}")
    
    print(f"\nRemaining unclassified count: {len(unclassified)}")
    return len(renames), len(unclassified)


if __name__ == '__main__':
    main()
