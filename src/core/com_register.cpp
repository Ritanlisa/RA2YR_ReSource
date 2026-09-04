// COM class registration - IDA 0x6BB390 (RegisterClassesCOM)
// Registers 30+ game classes with Windows registry for COM interop.
// Simplified: registry writes are logged but not executed since
// our standalone EXE doesn't need external COM access.
#include "core/com_defs.hpp"
#include "core/logging.hpp"

#include <string>

namespace gamemd {

// IDA 0x6BB390 - registers a single COM class with registry keys
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

    // Locomotor CLSIDs (11 movement types), in WinMain's own registration
    // order -- WinMain builds one TClassFactory per locomotor and passes it
    // the CLSID at 0x7E9A30..0x7E9AD0.
    RegisterClassCOM(CLSID_DriveLocomotion);     // WinMain+0x17BC
    RegisterClassCOM(CLSID_JumpjetLocomotion);   // WinMain+0x17F9
    RegisterClassCOM(CLSID_HoverLocomotion);     // WinMain+0x1836
    RegisterClassCOM(CLSID_RocketLocomotion);    // WinMain+0x1873
    RegisterClassCOM(CLSID_TunnelLocomotion);    // WinMain+0x18B0
    RegisterClassCOM(CLSID_WalkLocomotion);      // WinMain+0x18ED
    RegisterClassCOM(CLSID_DropPodLocomotion);   // WinMain+0x192A
    RegisterClassCOM(CLSID_FlyLocomotion);       // WinMain+0x1967
    RegisterClassCOM(CLSID_TeleportLocomotion);  // WinMain+0x19A4
    RegisterClassCOM(CLSID_MechLocomotion);      // WinMain+0x19E1
    RegisterClassCOM(CLSID_ShipLocomotion);      // WinMain+0x1A1E

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
