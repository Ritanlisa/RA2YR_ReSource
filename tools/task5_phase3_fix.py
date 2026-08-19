#!/usr/bin/env python3
"""Task 5 Phase 3: Fix 131 code-section orphan annotations.
Strategy:
- For each orphan, look up containing function from IDA
- If containing function exists: change annotation to function start address
- If "not a function": remove the // 0xADDR annotation from the line
"""

import json
import re
import os
import sys
from pathlib import Path
from collections import defaultdict

PROJECT_ROOT = Path(r'D:\RA2YR_ReSource')

# Full IDA results: orphan_addr → (containing_func_addr, name) or None (not a function)
IDA_RESULTS = {
    "0X00405B70": ("0x405b50", "sub_405B50"),
    "0X00405B90": ("0x405b50", "sub_405B50"),
    "0X00405C80": ("0x405c00", "AudioFileClass::Release"),
    "0X00405CA0": ("0x405c00", "AudioFileClass::Release"),
    "0X00450C90": ("0x4509d0", "BuildingClass::UpdateAnimFrames"),
    "0X00450CD0": ("0x4509d0", "BuildingClass::UpdateAnimFrames"),
    "0X00451060": ("0x4509d0", "BuildingClass::UpdateAnimFrames"),
    "0X004523F0": ("0x452360", "BuildingClass::PowerOff"),
    "0X00452570": ("0x452540", "BuildingClass::MakeTraversable"),
    "0X00452F60": ("0x452dc0", "BuildingClass::DemolishBridge"),
    "0X004AEFD0": ("0x4aed70", "DrawToSurfaceSHP"),
    "0X004AF020": ("0x4aed70", "DrawToSurfaceSHP"),
    "0X004AF310": ("0x4af2a0", "BlitterDrawSHP"),
    "0X004AF390": ("0x4af380", "sub_4AF380"),
    "0X004AF5E0": None,
    "0X004AF600": None,
    "0X004AF630": ("0x4af610", "JumpjetLocomotionClass::LoadLocomotionFromStream"),
    "0X004B5B00": None,
    "0X004B5B20": None,
    "0X004B5BC0": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process"),
    "0X004B5BD0": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process"),
    "0X004B5BE0": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process"),
    "0X004B5BF0": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process"),
    "0X004B5C60": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process"),
    "0X004B5E10": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process"),
    "0X004B5E40": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process"),
    "0X004B5E50": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process"),
    "0X004B5E80": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process"),
    "0X004C1E50": None,
    "0X004CC8B0": ("0x4cc8a0", "sub_4CC8A0"),
    "0X004CC950": ("0x4cc940", "sub_4CC940"),
    "0X004CC9B0": ("0x4cc9a0", "FlyLocomotionClass::LocomotionClass"),
    "0X004CC9D0": ("0x4cc9a0", "FlyLocomotionClass::LocomotionClass"),
    "0X004CC9E0": ("0x4cc9a0", "FlyLocomotionClass::LocomotionClass"),
    "0X004CCAD0": ("0x4ccac0", "JumpjetLocomotionClass::ComputeFloatExpression_0"),
    "0X004CD3A0": ("0x4cd2a0", "FootClass::ProcessDeployMission"),
    "0X004CD3B0": ("0x4cd2a0", "FootClass::ProcessDeployMission"),
    "0X004CD400": ("0x4cd2a0", "FootClass::ProcessDeployMission"),
    "0X004CD520": ("0x4cd510", "JumpjetLocomotionClass::IsMapCoordVisible"),
    "0X00513C30": ("0x513c20", "LocomotionClass::ProcessData"),
    "0X00513C40": ("0x513c20", "LocomotionClass::ProcessData"),
    "0X00513C50": ("0x513c20", "LocomotionClass::ProcessData"),
    "0X00513C80": ("0x513c20", "LocomotionClass::ProcessData"),
    "0X00513E10": ("0x513d20", "BuildingLightClass::UpdateOscillation"),
    "0X005140B0": ("0x513f40", "ObjectClass::BuildTransform"),
    "0X005140E0": ("0x513f40", "ObjectClass::BuildTransform"),
    "0X00514120": ("0x513f40", "ObjectClass::BuildTransform"),
    "0X00514160": ("0x513f40", "ObjectClass::BuildTransform"),
    "0X00536F90": ("0x536f80", "CreateTeamCommand::performAction_113"),
    "0X0054A520": ("0x54a4f0", "VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Release"),
    "0X0054A5E0": ("0x54a5d0", "VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::GetSize"),
    "0X0054A650": ("0x54a630", "VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::SetCapacity"),
    "0X0054A670": ("0x54a630", "VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::SetCapacity"),
    "0X0054A690": ("0x54a630", "VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::SetCapacity"),
    "0X0054A8E0": None,
    "0X0054AC60": ("0x54ac40", "LocomotionClass::Update"),
    "0X0054AC80": ("0x54ac40", "LocomotionClass::Update"),
    "0X0054ACA0": ("0x54ac40", "LocomotionClass::Update"),
    "0X0054AD90": ("0x54ad30", "JumpjetLocomotionClass::InitMovementParams"),
    "0X0054B8F0": ("0x54b8d0", "JumpjetLocomotionClass::ConvertCoordToCell_0"),
    "0X0054B950": ("0x54b8d0", "JumpjetLocomotionClass::ConvertCoordToCell_0"),
    "0X0054B9C0": ("0x54b980", "HouseClass::Set"),
    "0X0054BAD0": ("0x54ba30", "UpdateFootMovement"),
    "0X005B0960": ("0x5b01c0", "BuildingClass::ProcessMission"),
    "0X005B1A00": ("0x5b19e0", "JumpjetLocomotionClass::StubReturnTrue_4"),
    "0X005B1B30": ("0x5b1aa0", "JumpjetLocomotionClass::IsPositionWithinThreshold_0"),
    "0X005F5CF0": ("0x5f5cd0", "BuildingClass::IsHealthLow"),
    "0X00661ED0": ("0x661ec0", "RocketLocomotionClass::RocketLocomotionClass"),
    "0X00661EF0": ("0x661ec0", "RocketLocomotionClass::RocketLocomotionClass"),
    "0X00661F00": ("0x661ec0", "RocketLocomotionClass::RocketLocomotionClass"),
    "0X00661FF0": None,
    "0X006624B0": ("0x6622c0", "UpdateBullets"),
    "0X006624C0": ("0x6622c0", "UpdateBullets"),
    "0X00662510": ("0x6622c0", "UpdateBullets"),
    "0X00662650": ("0x6622c0", "UpdateBullets"),
    "0X0069EC60": ("0x69ec50", "LocomotionClass::Process"),
    "0X0069EC80": ("0x69ec50", "LocomotionClass::Process"),
    "0X0069ECD0": ("0x69ec50", "LocomotionClass::Process"),
    "0X0069ED70": ("0x69ed20", "JumpjetLocomotionClass::LoadLocomotionFromStream_2"),
    "0X0069EDF0": ("0x69ed20", "JumpjetLocomotionClass::LoadLocomotionFromStream_2"),
    "0X0069EE60": ("0x69ee30", "ShipLocomotionClass::QueryInterface"),
    "0X0069EF20": ("0x69ef10", "ShipLocomotionClass::LoadFromStream"),
    "0X0069EF60": ("0x69ef10", "ShipLocomotionClass::LoadFromStream"),
    "0X0069EFD0": ("0x69ef10", "ShipLocomotionClass::LoadFromStream"),
    "0X0069EFE0": ("0x69ef10", "ShipLocomotionClass::LoadFromStream"),
    "0X0069F060": ("0x69f040", "JumpjetLocomotionClass::StubReturnZero_13"),
    "0X0069F0A0": ("0x69f080", "JumpjetLocomotionClass::CheckPiggybackState_0"),
    "0X0069F0B0": ("0x69f080", "JumpjetLocomotionClass::CheckPiggybackState_0"),
    "0X0069F0D0": ("0x69f0c0", "sub_69F0C0"),
    "0X0069F0F0": ("0x69f0c0", "sub_69F0C0"),
    "0X00718010": ("0x718000", "TeleportLocomotionClass::Release"),
    "0X00718060": ("0x718000", "TeleportLocomotionClass::Release"),
    "0X00718070": ("0x718000", "TeleportLocomotionClass::Release"),
    "0X007180B0": ("0x7180a0", "JumpjetLocomotionClass::GetCoordinateConditional"),
    "0X007180E0": ("0x7180a0", "JumpjetLocomotionClass::GetCoordinateConditional"),
    "0X00718170": ("0x718100", "JumpjetLocomotionClass::ProcessFactoryExit"),
    "0X007181E0": ("0x718100", "JumpjetLocomotionClass::ProcessFactoryExit"),
    "0X00718200": ("0x718100", "JumpjetLocomotionClass::ProcessFactoryExit"),
    "0X00718220": ("0x718100", "JumpjetLocomotionClass::ProcessFactoryExit"),
    "0X00718240": ("0x718230", "JumpjetLocomotionClass::ResetMovementState"),
    "0X007186E0": ("0x718260", "ObjectClass::FindPlacementPosition"),
    "0X00718720": ("0x718260", "ObjectClass::FindPlacementPosition"),
    "0X007187C0": ("0x7187a0", "ProcessUnitDeploymentAtCell"),
    "0X0071E4F0": ("0x71e4e0", "sub_71E4E0"),
    "0X0071E610": ("0x71e600", "sub_71E600"),
    "0X0071E640": ("0x71e620", "sub_71E620"),
    "0X0071E670": ("0x71e660", "sub_71E660"),
    "0X00724BE0": None,
    "0X00728A10": ("0x728a00", "SmallFunc_728A00"),
    "0X00728A30": ("0x728a00", "SmallFunc_728A00"),
    "0X00728B40": ("0x728af0", "JumpjetLocomotionClass::SyncMovementPosition"),
    "0X00728BC0": ("0x728af0", "JumpjetLocomotionClass::SyncMovementPosition"),
    "0X00728CF0": ("0x728c00", "TunnelLocomotionClass::ProcessFormationPosition"),
    "0X007291A0": ("0x728e30", "InfantryClass::IdleStateMachine"),
    "0X007291C0": None,
    "0X007291E0": ("0x7291d0", "JumpjetLocomotionClass::StubReturnZero_21"),
    "0X00729C30": ("0x729b40", "JumpjetLocomotionClass::ComputeTurretTransform"),
    "0X007579A0": ("0x757980", "ProcessVoxelColorScanline"),
    "0X00758F20": ("0x758ea0", "VoxelRenderer::ProjectVertex"),
    "0X007593B0": ("0x759260", "Stream::InitializeBinkAudio"),
    "0X007593C0": ("0x759260", "Stream::InitializeBinkAudio"),
    "0X0075AB80": ("0x75ab40", "JumpjetLocomotionClass::ComputeFloatExpression_4"),
    "0X0075AC40": ("0x75ac00", "JumpjetLocomotionClass::GetRenderCoordinate_2"),
    "0X0075AC50": ("0x75ac00", "JumpjetLocomotionClass::GetRenderCoordinate_2"),
    "0X0075AC70": ("0x75ac00", "JumpjetLocomotionClass::GetRenderCoordinate_2"),
    "0X0075AE80": ("0x75ae30", "JumpjetLocomotionClass::DispatchVirtualCall_9"),
    "0X0075C170": ("0x75aec0", "VoxelAnim::Draw"),
    "0X0075C1F0": ("0x75aec0", "VoxelAnim::Draw"),
    "0X0075C200": ("0x75aec0", "VoxelAnim::Draw"),
    "0X0075C300": ("0x75c240", "Voxel::DrawHelper"),
    "0X0075C310": ("0x75c240", "Voxel::DrawHelper"),
}

def addr_to_hex(addr):
    """Normalize to 0X00XXXXXX format"""
    s = addr.lower().replace('0x', '').replace('0X', '')
    return '0X' + s.zfill(8)

def addr_short(addr):
    """Get short hex format: 0xXXXXXX"""
    s = addr.lower().replace('0x', '').replace('0X', '')
    return '0x' + s.lstrip('0') or '0x0'

def load_functions_json():
    """Load functions.json to check which funcs are already there"""
    jpath = PROJECT_ROOT / 'injectFunctionTest' / 'functions.json'
    with open(jpath) as f:
        data = json.load(f)
    # Build set of addresses
    addrs = set()
    for fn in data.get('functions', data if isinstance(data, list) else []):
        if isinstance(fn, dict) and 'address' in fn:
            addrs.add(fn['address'].upper())
    return addrs, data

def main():
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument('--dry-run', action='store_true')
    parser.add_argument('--apply', action='store_true')
    args = parser.parse_args()
    
    json_addrs, json_data = load_functions_json()
    print(f"Loaded {len(json_addrs)} entries from functions.json")
    
    # Categorize fixes
    fix_to_containing = {}   # orphan → containing_func_addr (already in json)
    need_add_to_json = {}    # containing_func_addr → name (not in json, need to add)
    remove_annotation = set()  # orphan addrs to remove from hpp
    
    # Distinct containing functions not in json
    missing_funcs = set()
    
    for orphan_addr, result in sorted(IDA_RESULTS.items()):
        orphan = orphan_addr.upper()
        
        if result is None:
            remove_annotation.add(orphan)
            continue
        
        func_addr, func_name = result
        func_addr_std = addr_to_hex(func_addr)
        
        if func_addr_std in json_addrs:
            fix_to_containing[orphan] = func_addr_std
        else:
            missing_funcs.add((func_addr_std, func_name))
            fix_to_containing[orphan] = func_addr_std
    
    print(f"\nFix to containing func: {len(fix_to_containing)}")
    print(f"Remove annotation: {len(remove_annotation)} (not a function)")
    print(f"Missing functions to add to json: {len(missing_funcs)}")
    
    if missing_funcs:
        print("\nMissing functions:")
        for addr, name in sorted(missing_funcs):
            print(f"  {addr}: {name}")
    
    # Add missing functions to functions.json
    json_data_list = json_data.get('functions', json_data if isinstance(json_data, list) else [])
    for func_addr, func_name in sorted(missing_funcs):
        new_entry = {
            "address": func_addr,
            "name": func_name,
            "call": {
                "convention": "thiscall" if "::" in func_name else "cdecl",
                "return_type": "int",
                "params": []
            },
            "hook": {
                "completed": False,
                "translated": False
            }
        }
        json_data_list.append(new_entry)
        print(f"  Added: {func_addr} -> {func_name}")
    
    if args.apply and missing_funcs:
        if isinstance(json_data, dict) and 'functions' in json_data:
            json_data['functions'] = json_data_list
            with open(PROJECT_ROOT / 'injectFunctionTest' / 'functions.json', 'w') as f:
                json.dump(json_data, f, indent=2)
            print(f"  Updated functions.json with {len(missing_funcs)} new entries")
    
    # Now fix hpp annotations
    # First, find all matching lines
    orphan_to_lines = defaultdict(list)
    addr_pattern = re.compile(r'//\s*(0x[0-9A-Fa-f]{5,8})')
    
    hpp_files = list((PROJECT_ROOT / 'src').rglob('*.hpp'))
    print(f"\nScanning {len(hpp_files)} hpp files for fix locations...")
    
    for hpp_file in hpp_files:
        try:
            content = hpp_file.read_text(encoding='utf-8', errors='ignore')
            lines = content.split('\n')
            rel_path = str(hpp_file.relative_to(PROJECT_ROOT))
            for i, line in enumerate(lines, 1):
                m = addr_pattern.search(line)
                if m:
                    raw_addr = m.group(1)
                    hex_part = raw_addr[2:].zfill(8)
                    addr = '0X' + hex_part.upper()
                    if addr in IDA_RESULTS:
                        orphan_to_lines[addr].append((rel_path, i, line))
        except Exception as e:
            pass
    
    # Build per-file changes
    file_changes = defaultdict(list)  # file → [(line_num, old_line, new_line)]
    
    for orphan, locs in orphan_to_lines.items():
        if orphan in remove_annotation:
            # Remove the // 0xADDR from the line
            for filepath, lineno, line in locs:
                new_line = re.sub(r'\s*//\s*0x[0-9A-Fa-f]{5,8}\b.*$', '', line)
                if new_line != line:
                    file_changes[filepath].append((lineno, line, new_line))
        elif orphan in fix_to_containing:
            new_addr = fix_to_containing[orphan]
            new_addr_short = addr_short(new_addr)
            for filepath, lineno, line in locs:
                # Replace the address in the annotation
                # Use a function-based replacement to avoid backreference issues
                def make_replacement(m):
                    prefix = m.group(1)  # "// " or "//"
                    return prefix + new_addr_short
                new_line = re.sub(r'(//\s*)0x[0-9A-Fa-f]{5,8}', make_replacement, line)
                # Also handle "area" suffix
                if 'area' in line.lower() and new_line == line:
                    def make_replacement_area(m):
                        prefix = m.group(1)
                        suffix = m.group(2) if m.lastindex >= 2 else ''
                        return prefix + new_addr_short + suffix
                    new_line = re.sub(r'(//\s*)0x[0-9A-Fa-f]{5,8}(\s*area)', 
                                      make_replacement_area, line, flags=re.IGNORECASE)
                if new_line != line:
                    file_changes[filepath].append((lineno, line, new_line))
    
    print(f"\nFixes by file:")
    for filepath in sorted(file_changes):
        print(f"  {filepath}: {len(file_changes[filepath])} lines")
    
    if args.dry_run:
        for filepath in sorted(file_changes)[:5]:
            print(f"\n  === {filepath} ===")
            for lineno, old, new in file_changes[filepath][:3]:
                print(f"    L{lineno}: {old.strip()}")
                print(f"         → {new.strip()}")
            if len(file_changes[filepath]) > 3:
                print(f"    ... and {len(file_changes[filepath])-3} more")
    
    if args.apply:
        for filepath, changes in file_changes.items():
            abs_path = PROJECT_ROOT / filepath
            content = abs_path.read_text(encoding='utf-8', errors='ignore')
            lines = content.split('\n')
            # Sort by line descending
            changes.sort(key=lambda x: x[0], reverse=True)
            for lineno, old_line, new_line in changes:
                idx = lineno - 1
                if idx < len(lines):
                    # Verify the line matches
                    if old_line.strip() == lines[idx].strip():
                        lines[idx] = new_line
                    else:
                        # Try substring match
                        old_stripped = old_line.strip()
                        curr_stripped = lines[idx].strip()
                        if old_stripped in curr_stripped:
                            lines[idx] = lines[idx].replace(old_stripped, new_line.strip(), 1)
                        else:
                            print(f"  WARNING: L{lineno} in {filepath}: mismatch")
                            print(f"    Expected: {old_line.strip()}")
                            print(f"    Current:  {curr_stripped}")
            abs_path.write_text('\n'.join(lines), encoding='utf-8')
            print(f"  Fixed {len(changes)} lines in {filepath}")
        
        # Save evidence
        evidence = {
            'fix_to_containing': len(fix_to_containing),
            'remove_annotation': len(remove_annotation),
            'missing_funcs_added': len(missing_funcs),
            'total_lines_changed': sum(len(v) for v in file_changes.values()),
            'files_changed': len(file_changes),
            'removed_addrs': sorted(remove_annotation),
            'missing_funcs': sorted(f'{a}: {n}' for a, n in missing_funcs),
        }
        os.makedirs(PROJECT_ROOT / '.omo' / 'evidence', exist_ok=True)
        with open(PROJECT_ROOT / '.omo' / 'evidence' / 'task5-orphans-fixed.txt', 'w') as f:
            f.write("Task 5: Orphan Annotation Fix Report\n")
            f.write("=" * 60 + "\n\n")
            f.write(f"Fixed to containing function: {len(fix_to_containing)}\n")
            f.write(f"Removed (not a function): {len(remove_annotation)}\n")
            f.write(f"Missing functions added to json: {len(missing_funcs)}\n")
            f.write(f"Total lines changed: {sum(len(v) for v in file_changes.values())}\n\n")
            
            if remove_annotation:
                f.write("\nRemoved annotations:\n")
                for addr in sorted(remove_annotation):
                    f.write(f"  {addr}\n")
            
            if missing_funcs:
                f.write("\nAdded to functions.json:\n")
                for addr, name in sorted(missing_funcs):
                    f.write(f"  {addr}: {name}\n")
            
            f.write("\n\nChanges by file:\n")
            for filepath in sorted(file_changes):
                f.write(f"  {filepath}: {len(file_changes[filepath])} lines\n")
                for lineno, old, new in file_changes[filepath][:10]:
                    f.write(f"    L{lineno}: {old.strip()} → {new.strip()}\n")
        
        print(f"\nEvidence saved to .omo/evidence/task5-orphans-fixed.txt")
    
    return 0

if __name__ == '__main__':
    sys.exit(main())
