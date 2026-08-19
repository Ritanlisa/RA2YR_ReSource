#!/usr/bin/env python3
"""Task 5 Phase 3: Fix 131 code-section orphan annotations.
Uses IDA lookup results to determine correct function addresses.
"""

import json
import re
import os
import sys
from pathlib import Path
from collections import defaultdict

PROJECT_ROOT = Path(r'D:\RA2YR_ReSource')

# IDA lookup results for all 131 code-section orphan addresses
# Format: annotation_addr → (containing_func_addr, containing_func_name, is_exact)
# is_exact means the annotation address matches the function start
IDA_RESULTS = {
    # object.hpp
    "0X00405B70": ("0x405b50", "sub_405B50", False),
    "0X00405B90": ("0x405b50", "sub_405B50", False),
    "0X00405C80": ("0x405c00", "AudioFileClass::Release", False),
    "0X00405CA0": ("0x405c00", "AudioFileClass::Release", False),
    "0X005F5CF0": ("0x5f5cd0", "BuildingClass::IsHealthLow", False),
    
    # building_type.hpp - area markers
    "0X00450C90": ("0x4509d0", "BuildingClass::UpdateAnimFrames", False),
    "0X00450CD0": ("0x4509d0", "BuildingClass::UpdateAnimFrames", False),
    "0X00451060": ("0x4509d0", "BuildingClass::UpdateAnimFrames", False),
    "0X004523F0": ("0x452360", "BuildingClass::PowerOff", False),
    "0X00452570": ("0x452540", "BuildingClass::MakeTraversable", False),
    "0X00452F60": ("0x452dc0", "BuildingClass::DemolishBridge", False),
    
    # locomotion.hpp
    "0X004AEFD0": ("0x4aed70", "DrawToSurfaceSHP", False),
    "0X004AF020": ("0x4aed70", "DrawToSurfaceSHP", False),
    "0X004AF310": ("0x4af2a0", "BlitterDrawSHP", False),
    "0X004AF390": ("0x4af380", "sub_4AF380", False),
    "0X004AF5E0": None,  # Not a function
    "0X004AF600": None,
    "0X004AF630": ("0x4af610", "JumpjetLocomotionClass::LoadLocomotionFromStream", False),
    "0X004B5B00": None,
    "0X004B5B20": None,
    "0X004B5BC0": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process", False),
    "0X004B5BD0": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process", False),
    "0X004B5BE0": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process", False),
    "0X004B5BF0": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process", False),
    "0X004B5C60": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process", False),
    "0X004B5E10": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process", False),
    "0X004B5E40": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process", False),
    "0X004B5E50": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process", False),
    "0X004B5E80": ("0x4b5b70", "DroppodLocomotionClass::ILoco_Process", False),
    "0X004C1E50": None,  # Not a function (ebolt.hpp)
    "0X004CC8B0": ("0x4cc8a0", "sub_4CC8A0", False),
    "0X004CC950": ("0x4cc940", "sub_4CC940", False),
    "0X004CC9B0": ("0x4cc9a0", "FlyLocomotionClass::LocomotionClass", False),
    "0X004CC9D0": ("0x4cc9a0", "FlyLocomotionClass::LocomotionClass", False),
    "0X004CC9E0": ("0x4cc9a0", "FlyLocomotionClass::LocomotionClass", False),
    "0X004CCAD0": ("0x4ccac0", "JumpjetLocomotionClass::ComputeFloatExpression_0", False),
    "0X004CD3A0": ("0x4cd2a0", "FootClass::ProcessDeployMission", False),
    "0X004CD3B0": ("0x4cd2a0", "FootClass::ProcessDeployMission", False),
    "0X004CD400": ("0x4cd2a0", "FootClass::ProcessDeployMission", False),
    "0X004CD520": ("0x4cd510", "JumpjetLocomotionClass::IsMapCoordVisible", False),
    "0X00513C30": ("0x513c20", "LocomotionClass::ProcessData", False),
    "0X00513C40": ("0x513c20", "LocomotionClass::ProcessData", False),
    "0X00513C50": ("0x513c20", "LocomotionClass::ProcessData", False),
    "0X00513C80": ("0x513c20", "LocomotionClass::ProcessData", False),
    "0X00513E10": ("0x513d20", "BuildingLightClass::UpdateOscillation", False),
    "0X005140B0": ("0x513f40", "ObjectClass::BuildTransform", False),
    "0X005140E0": ("0x513f40", "ObjectClass::BuildTransform", False),
    "0X00514120": ("0x513f40", "ObjectClass::BuildTransform", False),
    "0X00514160": ("0x513f40", "ObjectClass::BuildTransform", False),
    "0X00536F90": ("0x536f80", "CreateTeamCommand::performAction_113", False),
    "0X0054A520": ("0x54a4f0", "VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Release", False),
    "0X0054A5E0": ("0x54a5d0", "VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::GetSize", False),
    "0X0054A650": ("0x54a630", "VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::SetCapacity", False),
    "0X0054A670": ("0x54a630", "VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::SetCapacity", False),
    "0X0054A690": ("0x54a630", "VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::SetCapacity", False),
    "0X0054A8E0": None,
    "0X0054AC60": ("0x54ac40", "LocomotionClass::Update", False),
    "0X0054AC80": ("0x54ac40", "LocomotionClass::Update", False),
    "0X0054ACA0": ("0x54ac40", "LocomotionClass::Update", False),
    "0X0054AD90": ("0x54ad30", "JumpjetLocomotionClass::InitMovementParams", False),
    "0X0054B8F0": ("0x54b8d0", "JumpjetLocomotionClass::ConvertCoordToCell_0", False),
    "0X0054B950": ("0x54b8d0", "JumpjetLocomotionClass::ConvertCoordToCell_0", False),
    "0X0054B9C0": ("0x54b980", "HouseClass::Set", False),
    "0X0054BAD0": ("0x54ba30", "UpdateFootMovement", False),
    "0X005B0960": ("0x5b01c0", "BuildingClass::ProcessMission", False),
    "0X005B1A00": ("0x5b19e0", "JumpjetLocomotionClass::StubReturnTrue_4", False),
    "0X005B1B30": ("0x5b1aa0", "JumpjetLocomotionClass::IsPositionWithinThreshold_0", False),
    "0X00661ED0": ("0x661ec0", "RocketLocomotionClass::RocketLocomotionClass", False),
    "0X00661EF0": ("0x661ec0", "RocketLocomotionClass::RocketLocomotionClass", False),
    "0X00661F00": ("0x661ec0", "RocketLocomotionClass::RocketLocomotionClass", False),
    "0X00661FF0": None,
    "0X006624B0": ("0x6622c0", "UpdateBullets", False),
    "0X006624C0": ("0x6622c0", "UpdateBullets", False),
    "0X00662510": ("0x6622c0", "UpdateBullets", False),
    "0X00662650": ("0x6622c0", "UpdateBullets", False),
    "0X0069EC60": ("0x69ec50", "LocomotionClass::Process", False),
    "0X0069EC80": ("0x69ec50", "LocomotionClass::Process", False),
    "0X0069ECD0": ("0x69ec50", "LocomotionClass::Process", False),
    "0X0069ED70": ("0x69ed20", "JumpjetLocomotionClass::LoadLocomotionFromStream_2", False),
    "0X0069EDF0": ("0x69ed20", "JumpjetLocomotionClass::LoadLocomotionFromStream_2", False),
    "0X0069EE60": ("0x69ee30", "ShipLocomotionClass::QueryInterface", False),
    "0X0069EF20": ("0x69ef10", "ShipLocomotionClass::LoadFromStream", False),
    "0X0069EF60": ("0x69ef10", "ShipLocomotionClass::LoadFromStream", False),
    "0X0069EFD0": ("0x69ef10", "ShipLocomotionClass::LoadFromStream", False),
    "0X0069EFE0": ("0x69ef10", "ShipLocomotionClass::LoadFromStream", False),
    "0X0069F060": ("0x69f040", "JumpjetLocomotionClass::StubReturnZero_13", False),
    "0X0069F0A0": ("0x69f080", "JumpjetLocomotionClass::CheckPiggybackState_0", False),
    "0X0069F0B0": ("0x69f080", "JumpjetLocomotionClass::CheckPiggybackState_0", False),
    "0X0069F0D0": ("0x69f0c0", "sub_69F0C0", False),
    "0X0069F0F0": ("0x69f0c0", "sub_69F0C0", False),
    "0X00718010": ("0x718000", "TeleportLocomotionClass::Release", False),
    "0X00718060": ("0x718000", "TeleportLocomotionClass::Release", False),
    "0X00718070": ("0x718000", "TeleportLocomotionClass::Release", False),
    "0X007180B0": ("0x7180a0", "JumpjetLocomotionClass::GetCoordinateConditional", False),
    "0X007180E0": ("0x7180a0", "JumpjetLocomotionClass::GetCoordinateConditional", False),
    "0X00718170": ("0x718100", "JumpjetLocomotionClass::ProcessFactoryExit", False),
    "0X007181E0": ("0x718100", "JumpjetLocomotionClass::ProcessFactoryExit", False),
    "0X00718200": ("0x718100", "JumpjetLocomotionClass::ProcessFactoryExit", False),
    "0X00718220": ("0x718100", "JumpjetLocomotionClass::ProcessFactoryExit", False),
    "0X00718240": ("0x718230", "JumpjetLocomotionClass::ResetMovementState", False),
    "0X007186E0": ("0x718260", "ObjectClass::FindPlacementPosition", False),
    "0X00718720": ("0x718260", "ObjectClass::FindPlacementPosition", False),
    "0X007187C0": ("0x7187a0", "ProcessUnitDeploymentAtCell", False),
    "0X0071E4F0": ("0x71e4e0", "sub_71E4E0", False),
    "0X0071E610": ("0x71e600", "sub_71E600", False),
    "0X0071E640": ("0x71e620", "sub_71E620", False),
    "0X0071E670": ("0x71e660", "sub_71E660", False),
    "0X00724BE0": None,  # Not a function (tool_tip.hpp)
    "0X00728A10": ("0x728a00", "SmallFunc_728A00", False),
    "0X00728A30": ("0x728a00", "SmallFunc_728A00", False),
    "0X00728B40": ("0x728af0", "JumpjetLocomotionClass::SyncMovementPosition", False),
    "0X00728BC0": ("0x728af0", "JumpjetLocomotionClass::SyncMovementPosition", False),
    "0X00728CF0": ("0x728c00", "TunnelLocomotionClass::ProcessFormationPosition", False),
    "0X007291A0": ("0x728e30", "InfantryClass::IdleStateMachine", False),
    "0X007291C0": None,
    "0X007291E0": ("0x7291d0", "JumpjetLocomotionClass::StubReturnZero_21", False),
    "0X00729C30": ("0x729b40", "JumpjetLocomotionClass::ComputeTurretTransform", False),
    "0X007579A0": ("0x757980", "ProcessVoxelColorScanline", False),
    "0X00758F20": ("0x758ea0", "VoxelRenderer::ProjectVertex", False),
    "0X007593B0": ("0x759260", "Stream::InitializeBinkAudio", False),
    "0X007593C0": ("0x759260", "Stream::InitializeBinkAudio", False),
    "0X0075AB80": ("0x75ab40", "JumpjetLocomotionClass::ComputeFloatExpression_4", False),
    "0X0075AC40": ("0x75ac00", "JumpjetLocomotionClass::GetRenderCoordinate_2", False),
    "0X0075AC50": ("0x75ac00", "JumpjetLocomotionClass::GetRenderCoordinate_2", False),
    "0X0075AC70": ("0x75ac00", "JumpjetLocomotionClass::GetRenderCoordinate_2", False),
    "0X0075AE80": ("0x75ae30", "JumpjetLocomotionClass::DispatchVirtualCall_9", False),
    "0X0075C170": ("0x75aec0", "VoxelAnim::Draw", False),
    "0X0075C1F0": ("0x75aec0", "VoxelAnim::Draw", False),
    "0X0075C200": ("0x75aec0", "VoxelAnim::Draw", False),
    "0X0075C300": ("0x75c240", "Voxel::DrawHelper", False),
    "0X0075C310": ("0x75c240", "Voxel::DrawHelper", False),
}

# Cached IDA function names
IDA_FUNC_NAMES = {}
for addr, data in IDA_RESULTS.items():
    if data and data[1]:
        func_addr = data[0].upper().replace('0X', '0x')
        IDA_FUNC_NAMES[func_addr] = data[1]

print(f"Loaded {len(IDA_RESULTS)} orphan IDA results")
print(f"Functions not in functions.json: {len(IDA_FUNC_NAMES)}")

# Save for reference
with open(PROJECT_ROOT / '.omo' / 'evidence' / 'task5-ida-lookup.json', 'w') as f:
    json.dump({"results": {k: list(v) if v else None for k, v in IDA_RESULTS.items()},
               "functions": IDA_FUNC_NAMES}, f, indent=2)

print("IDA lookup data saved to .omo/evidence/task5-ida-lookup.json")
