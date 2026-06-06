// COM class registration â€ IDA 0x6BB390 (RegisterClassesCOM)
// Registers 30+ game classes with Windows registry for COM interop.
// Simplified: registry writes are logged but not executed since
// our standalone EXE doesn't need external COM access.
#include "gamemd/core/com_defs.hpp"
#include "gamemd/core/logging.hpp"

#include <string>

namespace gamemd {

// IDA 0x6BB390 â€ registers a single COM class with registry keys
void RegisterClassCOM(const GUID& clsid)
{
    char guid_str[40];
    snprintf(guid_str, sizeof(guid_str),
        "{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
        clsid.Data1, clsid.Data2, clsid.Data3,
        clsid.Data4[0], clsid.Data4[1], clsid.Data4[2], clsid.Data4[3],
        clsid.Data4[4], clsid.Data4[5], clsid.Data4[6], clsid.Data4[7]);

    LOG_TRACE("RegisterClassCOM: CLSID=%s", guid_str);
}

// ============================================================
// Register ALL COM classes (matching WinMain's factory table)
// ============================================================
void RegisterAllClasses()
{
    LOG_INFO("RegisterAllClasses: registering 30+ COM game classes");

    // Locomotor CLSIDs (8 movement types)
    RegisterClassCOM(CLSID_WalkLocomotion);
    RegisterClassCOM(CLSID_DriveLocomotion);
    RegisterClassCOM(CLSID_FlyLocomotion);
    RegisterClassCOM(CLSID_HoverLocomotion);
    RegisterClassCOM(CLSID_TunnelLocomotion);
    RegisterClassCOM(CLSID_DriveLocomotion2);
    RegisterClassCOM(CLSID_JumpjetLocomotion);
    RegisterClassCOM(CLSID_ShipLocomotion);

    // Core object classes
    RegisterClassCOM(CLSID_AbstractClass);
    RegisterClassCOM(CLSID_ObjectClass);
    RegisterClassCOM(CLSID_MissionClass);
    RegisterClassCOM(CLSID_RadioClass);
    RegisterClassCOM(CLSID_ScriptClass);
    RegisterClassCOM(CLSID_TechnoClass);
    RegisterClassCOM(CLSID_FootClass);
    RegisterClassCOM(CLSID_BuildingClass);
    RegisterClassCOM(CLSID_InfantryClass);
    RegisterClassCOM(CLSID_UnitClass);
    RegisterClassCOM(CLSID_AircraftClass);
    RegisterClassCOM(CLSID_HouseClass);

    // Entity classes
    RegisterClassCOM(CLSID_AnimClass);
    RegisterClassCOM(CLSID_BulletClass);
    RegisterClassCOM(CLSID_ParticleClass);
    RegisterClassCOM(CLSID_ParticleSystemClass);
    RegisterClassCOM(CLSID_SmudgeClass);
    RegisterClassCOM(CLSID_OverlayClass);
    RegisterClassCOM(CLSID_TerrainClass);
    RegisterClassCOM(CLSID_TiberiumClass);

    // Map / system classes
    RegisterClassCOM(CLSID_CellClass);
    RegisterClassCOM(CLSID_TacticalClass);
    RegisterClassCOM(CLSID_SidebarClass);
    RegisterClassCOM(CLSID_SuperWeaponClass);

    LOG_INFO("RegisterAllClasses: done (%d classes registered)", 30);
}

} // namespace gamemd
