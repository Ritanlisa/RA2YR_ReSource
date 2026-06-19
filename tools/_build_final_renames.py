#!/usr/bin/env python3
"""Build final rename list from IDA lookups + match data."""
import json, os

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# Load IDA lookup results (manually copied from the 3 batch queries)
# Each: (query_addr, resolved_fn_name, resolved_fn_addr)
lookup_results = {}

# Batch 1 results
batch1 = [
    ("0x4052F0", "VocClass::Cleanup", "0x4052f0"),
    ("0x40D270", "SidebarClass::initButtons2", "0x40d270"),
    ("0x411510", "Surface::GetRect", "0x411510"),
    ("0x411540", "Surface::GetWidth", "0x411540"),
    ("0x411550", "Surface::GetHeight", "0x411550"),
    ("0x411560", "XSurface::Lock", "0x411560"),
    ("0x411570", "XSurface::Unlock", "0x411570"),
    ("0x4115F0", "BSurface::Lock", "0x4115f0"),
    ("0x411630", "BSurface::GetBytesPerPixel", "0x411630"),
    ("0x411640", "BSurface::GetPitch", "0x411640"),
    ("0x41C110", "FootClass::StubReturnVoid", "0x41c110"),
    ("0x420270", "FractalNoise::Release", "0x420270"),
    ("0x423AC0", "TechnoClass::CreateUnit", "0x423ac0"),
    ("0x438210", "BlowStraw::Release", "0x438210"),
    ("0x438720", "TechnoClass::ApplyDamageEffects", "0x438720"),
    ("0x439560", "sub_439550", "0x439550"),
    ("0x466380", "BulletClass::BulletClass", "0x466380"),
    ("0x467CC0", "BulletClass::ProcessNukeExplosion", "0x4666e0"),
    ("0x467CE0", "BulletClass::ProcessNukeExplosion", "0x4666e0"),
    ("0x468020", "BulletClass::GetAnimFrame", "0x468000"),
    ("0x468100", "BulletClass::SetupVoxelTransform", "0x468090"),
    ("0x4681B0", "BulletClass::SetupVoxelTransform", "0x468090"),
    ("0x468490", "BulletClass::LoseTarget", "0x468430"),
    ("0x468510", "BulletClass::ProcessImpact", "0x4684e0"),
    ("0x468530", "BulletClass::ProcessImpact", "0x4684e0"),
    ("0x468550", "BulletClass::ProcessImpact", "0x4684e0"),
    ("0x468590", "BulletClass::ProcessImpact", "0x4684e0"),
    ("0x4686B0", "BulletClass::ProcessObstacle", "0x468670"),
    ("0x468810", "BulletClass::ProcessObstacle", "0x468670"),
    ("0x468820", "BulletClass::ProcessObstacle", "0x468670"),
    ("0x4688B0", "BulletClass::ProcessObstacle", "0x468670"),
    ("0x468C80", "BulletClass::CheckBulletCollision", "0x468bb0"),
    ("0x468DC0", "BulletClass::Fire", "0x468d80"),
    ("0x469100", "Warhead::ApplyDamage", "0x4690b0"),
    ("0x469420", "Warhead::ApplyDamage", "0x4690b0"),
    ("0x469430", "Warhead::ApplyDamage", "0x4690b0"),
    ("0x469440", "Warhead::ApplyDamage", "0x4690b0"),
    ("0x469450", "Warhead::ApplyDamage", "0x4690b0"),
    ("0x469460", "Warhead::ApplyDamage", "0x4690b0"),
    ("0x469470", "Warhead::ApplyDamage", "0x4690b0"),
    ("0x469480", "Warhead::ApplyDamage", "0x4690b0"),
    ("0x469490", "Warhead::ApplyDamage", "0x4690b0"),
    ("0x469A60", "Warhead::ApplyDamage", "0x4690b0"),
    ("0x469D70", "Warhead::ApplyDamage", "0x4690b0"),
    ("0x46A310", "Warhead::ApplyPostDamageEffects", "0x46a310"),
    ("0x46A4B0", "Warhead::ApplyPostDamageEffects", "0x46a310"),
    ("0x46A600", "Warhead::ApplyPostDamageEffects", "0x46a310"),
    ("0x46A640", "Warhead::ApplyPostDamageEffects", "0x46a310"),
    ("0x46A690", "Warhead::ApplyPostDamageEffects", "0x46a310"),
    ("0x46A800", "Warhead::ApplyPostDamageEffects", "0x46a310"),
]
batch2 = [
    ("0x46A990", "Warhead::ApplyPostDamageEffects", "0x46a310"),
    ("0x46BA90", "sub_46BA80", "0x46ba80"),
    ("0x46D480", "sub_46D480", "0x46d480"),
    ("0x46D490", "sub_46D490", "0x46d490"),
    ("0x46D5A0", "Game::SendCampaignOptions", "0x46d4a0"),
    ("0x4703C0", "CampaignScore::ProcessScreen", "0x46fc00"),
    ("0x4709F0", "CampaignScore::ProcessScreen", "0x46fc00"),
    ("0x471A90", "CaptureManagerClass::HandleOverload", "0x471a50"),
    ("0x471E20", "CaptureManagerClass::CaptureUnit", "0x471d40"),
    ("0x472140", "CaptureManager::FreeAll", "0x472140"),
    ("0x472610", "CaptureManagerClass::DecideUnitFate", "0x4723b0"),
    ("0x475420", "ArmorType::FindIndex", "0x4753f0"),
    ("0x478A90", "sub_478A80", "0x478a80"),
    ("0x479A90", "sub_479A40", "0x479a40"),
    ("0x47ACB0", "Game::FindGameDirectoryCD", "0x47ab10"),
    ("0x4E8780", "ParticleSystemClass::ParticleSystemClass", "0x4e8780"),
    ("0x4F3090", "GraphicMenuAnimItem::Release", "0x4f3090"),
    ("0x4F3A70", "GraphicMenuItem::Destructor", "0x4f3a70"),
    ("0x4FE740", "HouseClass::AutoBuild", "0x4fe3e0"),
    ("0x4FE8A0", "HouseClass::AutoBuild", "0x4fe3e0"),
    ("0x556C30", "Render_Render_556C00", "0x556c00"),
    ("0x558740", "LoadOptions::LoadOptions", "0x558740"),
    ("0x587AD0", "CellClass::CheckConnectivity", "0x587410"),
    ("0x5F6040", "ObjectClass::SetZ", "0x5f5fa0"),
    ("0x5F81C0", "VoxelAnimType::LoadAnim", "0x5f8110"),
    ("0x5F8AD0", "VoxelAnimType::LoadAnim", "0x5f8110"),
    ("0x5F99B0", None, None),  # Not a function
    ("0x5FB1A0", "AudioOptionsClass::ApplySettings", "0x5fb160"),
    ("0x5FBAD0", "HotkeyOptions::DlgProc", "0x5fb320"),
    ("0x5FE840", "OverlayTypeClass::LoadFromINI", "0x5fe770"),
    ("0x65A750", "RadioClass::RadioClass", "0x65a750"),
    ("0x65B1E0", "RadSiteClass::Construct", "0x65b1e0"),
    ("0x688F50", "FindInfantryDeployPosition", "0x688ed0"),
    ("0x688F60", "FindInfantryDeployPosition", "0x688ed0"),
    ("0x6F3330", "TechnoClass::SelectWeapon", "0x6f3330"),
    ("0x6F3A70", "TechnoClass::GetValue", "0x6f3970"),
    ("0x6F55D0", "TechnoClass::DrawHealthBar", "0x6f5190"),
    ("0x6FE0A0", "TechnoClass::FireWeapon", "0x6fdd50"),
    ("0x703040", "TechnoClass::RegisterKill", "0x702d40"),
    ("0x709BC0", "TechnoClass::DrawPips", "0x709a90"),
    ("0x70B370", "TechnoClass::ComputeAimVector", "0x70b280"),
    ("0x70FA00", "BuildingClass::FindBridgeCell", "0x70f8f0"),
    ("0x70FB60", "TechnoClass::CanSelfRepair", "0x70fb50"),
    ("0x718000", "TeleportLocomotionClass::TeleportLocomotionClass", "0x718000"),
    ("0x718DC0", "Factory::CalculateExitCell", "0x718b70"),
    ("0x719670", "UnitClass::Deploy", "0x7192f0"),
    ("0x71C080", "TerrainClass::ClearCellFlags", "0x71c070"),
    ("0x71C9C0", "TerrainClass::ApplyCellModifications", "0x71c930"),
    ("0x71CC60", "TerrainClass::CheckSpawnConditions", "0x71cc50"),
    ("0x71D310", "TerrainClass::MissionStubReturnZero3", "0x71d310"),
]
batch3 = [
    ("0x71D820", "InitializeCellSpreadTables", "0x71d580"),
    ("0x71DA50", "InitializeCellSpreadTables", "0x71d580"),
    ("0x71DC70", None, None),
    ("0x71DF50", "TerrainTypeClass::LoadFromINI", "0x71dea0"),
    ("0x71E350", "TerrainTypeClass::GetAuxField", "0x71e350"),
    ("0x71EBB0", "TEventClass::Execute", "0x71e940"),
    ("0x71EC70", "TEventClass::Execute", "0x71e940"),
    ("0x71ED10", "TEventClass::Execute", "0x71e940"),
    ("0x71F660", None, None),
    ("0x71F780", None, None),
    ("0x71F960", "TEventClass::GetStateA", "0x71f950"),
    ("0x71FDE0", "VectorClass_ptr_TEventClass::SetCapacity", "0x71fd80"),
    ("0x7200A0", "AbstractClass::selectWeapon", "0x720070"),
    ("0x7206C0", "ThemeClass::InitializeThemes", "0x720590"),
    ("0x7212F0", "VectorClass_ptr_ThemeControl::GetItemIndex", "0x7212e0"),
    ("0x7216C0", "TiberiumClass::TiberiumClass", "0x7216c0"),
    ("0x721F10", "TiberiumClass::SaveLoad_Prefix", "0x721e80"),
    ("0x721F40", "TiberiumClass::SaveLoad_Prefix", "0x721e80"),
    ("0x722030", "TiberiumClass::SaveLoad_Prefix", "0x721e80"),
    ("0x7220C0", "TiberiumClass::SpreadGrowth", "0x7220a0"),
    ("0x722210", "ProcessSpeechEvents", "0x7221b0"),
    ("0x7223C0", "BuildingClass::FreeUpgradeQueue", "0x722390"),
    ("0x722570", "PropagateCellOccupancy", "0x722440"),
    ("0x722620", "PropagateCellOccupancy", "0x722440"),
    ("0x734780", "CSFClass::LoadFile", "0x7346a0"),
    ("0x74C3C0", "sub_74C3C0", "0x74c3c0"),
    ("0x74C3D0", "sub_74C3C0", "0x74c3c0"),
    ("0x74C9D0", "VeinholeMonsterClass::Constructor", "0x74c5b0"),
    ("0x752780", "UpdateThemes", "0x752760"),
    ("0x758520", "ProcessVoxelScanSamples", "0x758430"),
    ("0x765610", "Campaign_WorldDominationTour::QueryInterface", "0x765600"),
    ("0x765EC0", "sub_765EB0", "0x765eb0"),
    ("0x766950", None, None),
    ("0x7713A0", "ScoreScreen::RemoveItem", "0x7712c0"),
    ("0x773070", "TechnoClass::GetWeaponRange", "0x773070"),
    ("0x773B10", "WebBrowser::Write", "0x773b10"),
    ("0x774000", "WebBrowser::ShowDialog", "0x773e90"),
    ("0x7748D0", "WinModemClass::GetClassIdentifier", "0x7748b0"),
    ("0x774F70", "WinModemClass::SaveToINI", "0x774f50"),
    ("0x775050", "WinModemClass::SaveToINI", "0x774f50"),
    ("0x779CB0", "ReadSettingsWOL", "0x779c90"),
    ("0x79B5E0", "FillBuddyListWOL", "0x79af10"),
    ("0x7B1AB0", "WinsockInterfaceClass::Destructor", "0x7b1ab0"),
]

all_lookups = batch1 + batch2 + batch3

# Build lookup dict
lookup = {}
for qaddr, name, faddr in all_lookups:
    if faddr:
        lookup[qaddr] = {'name': name, 'addr': faddr}
    else:
        lookup[qaddr] = None  # Not a function

# Load target renames
target_renames = {}
match_data = json.load(open(os.path.join(ROOT, 'tools', 'ida_match_results.json'), 'r'))
for key, v in match_data['results'].items():
    if v['final_confidence'] != 'HIGH':
        continue
    ida_addr = v['final_ida_addr']
    class_name = v['class_name']
    method_name = v['method_name']
    
    # Target name (IDA-safe)
    if method_name.startswith('~'):
        target_name = f'{class_name}::Release'
    elif method_name == class_name:
        target_name = f'{class_name}::{class_name}'
    else:
        target_name = f'{class_name}::{method_name}'
    
    if ida_addr not in target_renames:
        target_renames[ida_addr] = target_name

# Build final rename list
final_renames = []
skipped_not_fn = 0
skipped_already = 0
skipped_not_looked = 0

for qaddr, target in sorted(target_renames.items()):
    l = lookup.get(qaddr)
    if l is None:
        if qaddr not in lookup:
            skipped_not_looked += 1
            continue
        skipped_not_fn += 1
        continue
    
    current_name = l['name']
    if current_name == target:
        skipped_already += 1
        continue
    
    final_renames.append({
        'addr': l['addr'],  # Use actual resolved address
        'old': current_name,
        'new': target
    })

print(f"Final renames to apply: {len(final_renames)}")
print(f"Skipped (not a function): {skipped_not_fn}")
print(f"Skipped (already correct): {skipped_already}")
print(f"Skipped (not in lookup): {skipped_not_looked}")

json.dump(final_renames, open(os.path.join(ROOT, 'tools', '_ida_renames_final.json'), 'w'), indent=2)

# Show first 20
print("\n=== First 20 final renames ===")
for r in final_renames[:20]:
    print(f"  {r['addr']}: {r['old']} -> {r['new']}")
