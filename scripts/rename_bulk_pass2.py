#!/usr/bin/env python3
"""
IDA Python script: Pass 2 - more patterns for remaining sub_* functions.
Handles: ScriptAction, Options, NetworkLobby, and many small classes.
"""

import idaapi, ida_funcs, ida_name, ida_hexrays, ida_bytes
import re
from collections import defaultdict

DRY_RUN = False

def classify_extra(class_name, body, size, addr):
    """Extra classification rules for pass 2."""
    
    # === ScriptAction ===
    if class_name == 'ScriptAction':
        if 'GetScenarioClassActionCoords' in body:
            return "GetActionCoords"
        if 'g_Str_none' in body:
            return "GetArgString"
        if 'switch' in body and size > 180:
            return "GetTypeInfo"
        if 'WaypointCoords' in body:
            return "GetWaypointCoords"
        if '*(this+35)' in body and '*(this+5)' in body:
            return "HasValidDelay"
        if size > 100 and '*(this+4)' in body and '*i !=' in body:
            return "FindItemByValue"

    # === Options ===
    if class_name == 'Options':
        if 'DeleteAndZero::Alt' in body:
            return "ClearComboBoxes"
        if '__3_YAXPAX_Z' in body and 'this+11' in body:
            return "FreeImageData"
        if '3*v' in body and size > 100:
            return "EnsureCapacity"
        if '2*v' in body and size > 100:
            return "GrowBuffer"
        if 'GetDlgItem' in body:
            return "InitControls"

    # === NetworkLobby ===
    if class_name == 'NetworkLobby':
        if 'GetResourceID4CSF' in body:
            return "InitDropdowns"
        if 'GetResourceID3CSF' in body:
            return "UpdateLabels"
        if 'g_NetworkPlayerName' in body:
            return "CheckPlayerNames"
        if 'Network::IsMultiplayerActive' in body:
            return "CheckConditions"
        if 'GameMode_Current' in body and size > 250:
            return "SetupControls"

    # === LoadingScreen ===
    if class_name == 'LoadingScreen':
        if 'FindBuildingAnimByName' in body:
            return "GetScreenAnim"
        if 'off_844C34' in body:
            return "GetScreenImage"
        if 'off_844C3C' in body:
            return "GetOverlayImage"
        if 'dword_B0FB88' in body:
            return "ReleaseAnimObjects"
        if 'g_DisplayWidth' in body:
            return "AdjustForResolution"

    # === Scenario ===
    if class_name == 'Scenario':
        if 'GameMode_Current' in body and 'Copy8Bytes' in body:
            return "ComputeDialogPos"
        if size < 10 and 'this + 96' in body:
            return "SetByte96"
        if size < 15 and 'this + 32' in body:
            return "SetDword32"
        if size < 15 and 'this + 30' in body:
            return "SetDword30"

    # === SaveGame ===
    if class_name == 'SaveGame':
        if '300' in body and size > 60:
            return "SaveAudioData"
        if '*(this+10)' in body and '*(this+4)' in body:
            return "SaveArray"
        if 'this+4' in body and 'this+8' in body and size < 50:
            return "SaveDwordPair"

    # === AnimTypeClass ===
    if class_name == 'AnimTypeClass':
        if 'const' in body and size < 20:
            return "GetFlag"

    # === COMObject ===
    if class_name == 'COMObject':
        if 'IUnknown' in body or 'QueryInterface' in body:
            return "QueryInterface"
        if 'AddRef' in body and size < 15:
            return "AddRef"
        if 'Release' in body and size < 15:
            return "Release"

    # === AudioStream ===
    if class_name == 'AudioStream':
        if 'ReadAudioStream' in body and 'Audio::Callback' in body:
            return "ReadAndSetCallback"

    # === GameSetup ===
    if class_name == 'GameSetup':
        if 'GetDlgItem' in body and 'SendMessage' in body:
            return "ReadControl"

    # === MovementAI ===
    if class_name == 'MovementAI':
        if 'MoveTo' in body:
            return "ProcessMove"
        if 'Pathfind' in body:
            return "FindPath"

    # === File ===
    if class_name == 'File':
        if 'fopen' in body or 'fclose' in body:
            return "FileOperation"
        if 'CreateFile' in body:
            return "OpenFile"

    # === SlaveManagerClass === / other classes with address-prefixed names (like sub_5522D00)
    # These are template instantiation duplicates. Leave as-is.
    if class_name in ('SlaveManagerClass', 'AnimTypeClass', 'TechnoTypeClass'):
        return None  # Template duplication, leave

    # === CChatEventSink ===
    if class_name == 'CChatEventSink':
        if '2*v' in body and size > 100:
            return "GrowBuffer2"
        if 'const char' in body and size > 100:
            return "EncodeString"
        if '*(a2+2)' in body and '4*a3' in body:
            return "GetItem"
        if '*(this+2)' in body and size > 150:
            return "CopyData"

    # === ComboBoxOwnerDraw ===
    if class_name == 'ComboBoxOwnerDraw':
        if 'unsigned int' in body and size > 130:
            return "SortItems" if 'Sort' not in body else "ShuffleItems"
        if '2*v' in body and size > 100:
            return "GrowBuffer"

    # === PlayerClass ===
    if class_name == 'PlayerClass':
        if 'TacticalMap' in body:
            return "RenderTactical"
        if 'House::' in body:
            return "CheckHouse"
        if '*v2' in body and size > 200:
            return "ProcessUnits"

    # === CapturerManagerClass ===
    if class_name == 'CaptureManagerClass':
        if 'TeamClass::AddMember' in body:
            return "AddMember"

    # === MSFont[18] === - second set of dups
    if class_name == 'MSFont[18]':
        if '>> 3' in body and size < 30:
            return "PointerToIndex8"
        if '*(this+13)' in body and '__3_YAXPAX_Z' in body:
            return "Clear8Buffer"
        if 'i[1]' in body and 'return -1' in body:
            return "FindPair8"
        if '__2_YAPAXI_Z' in body and size > 150 and '8' in body:
            return "SetCapacity8"

    # === MoveFeedback === 
    if class_name == 'MoveFeedback':
        if '*(this+13)' in body and '__3_YAXPAX_Z' in body:
            return "ClearMoveBuffer"
        if '>> 2' in body and 'this+12' in body:
            return "MovePointerToIndex"
        if '*i != *a2' in body and 'return -1' in body:
            return "FindMoveItem"

    # === ParticleSystemClass[32] === second set of dups
    if class_name == 'ParticleSystemClass[32]':
        if '*(this+13)' in body and '__3_YAXPAX_Z' in body:
            return "ClearParticleBuffer2"
        if '>> 2' in body and 'this+12' in body:
            return "PtrToIndex2"
        if '*i != *a2' in body and 'return -1' in body:
            return "FindParticle2"
        if '>> 3' in body and size < 30:
            return "PtrToIndex3"
        if '__2_YAPAXI_Z' in body and size > 150:
            return "CopyParticles2"

    # === TClassFactory_CampaignClass ===
    if class_name == 'TClassFactory_CampaignClass':
        if 'vftable' in body:
            return "Destructor"

    # === Generic patterns for small classes ===
    
    # Simple setter: size < 10, sets a member
    if size < 10 and '=' in body and 'return' in body:
        return "SetFlag" if size < 8 else "SetValue"
    
    # Simple getter: size < 10, returns a member
    if size < 10 and 'return' in body and 'this' in body:
        if '*(this' in body:
            return "GetValue"
        if 'this +' in body:
            return "GetOffset"

    # Initialize/zero fields
    if size < 30 and '= 0' in body and 'this' in body:
        return "Init"

    # DListNode/List init
    if 'DListNode::Init' in body:
        return "InitListNode"

    # LinkedList init  
    if 'LinkedList::Init' in body:
        return "InitLinkedList"

    # Thunk detection
    if size < 15 and ('thunk' in body.lower() or ('j_' in body)):
        return None  # Already a thunk

    # Matrix/vector operations
    if 'Matrix' in body or ('float' in body and size < 60):
        return "ComputeTransform"

    return None


def main():
    import idc, idautils
    
    sub_funcs = defaultdict(list)
    for ea in idautils.Functions():
        name = idc.get_func_name(ea)
        if '::sub_' in name:
            parts = name.split('::')
            cls = parts[0]
            sub_funcs[cls].append((ea, name))
    
    renames = []
    unclassified = []
    
    for cls, funcs in sorted(sub_funcs.items()):
        for ea, full_name in funcs:
            try:
                cfunc = ida_hexrays.decompile(ea)
                body = str(cfunc) if cfunc else ""
            except:
                body = ""
            
            func = ida_funcs.get_func(ea)
            size = func.size() if func else 0
            
            name = classify_extra(cls, body, size, ea)
            if name:
                new_name = f"{cls}::{name}"
                renames.append((full_name, new_name))
                print(f"  {full_name} -> {name} (sz={size})")
                continue
            
            unclassified.append((cls, full_name, ea, body[:150], size))
    
    print(f"\n=== Summary ===")
    print(f"Classified: {len(renames)}")
    print(f"Unclassified: {len(unclassified)}")
    
    if DRY_RUN:
        print(f"\nDRY RUN - would rename {len(renames)}")
    else:
        success = 0
        skipped = 0
        errors = 0
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
                print(f"  FAILED: {old_name} -> {new_name_full}")
                errors += 1
        print(f"Renamed: {success}, skipped: {skipped}, errors: {errors}")
    
    if unclassified and len(unclassified) < 80:
        print(f"\n=== Unclassified ({len(unclassified)}) ===")
        for cls, name, ea, body, size in unclassified[:40]:
            print(f"  {name} sz={size}: {body[:120]}")

if __name__ == '__main__':
    main()
