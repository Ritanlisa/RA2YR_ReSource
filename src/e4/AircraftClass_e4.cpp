// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/AircraftClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/AirstrikeClass_e4.hpp"
#include "e4/classes/AircraftTypeClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
struct Type;  // fix_tu_missing_types
#include "e4/classes/AlphaShapeClass_e4.hpp"
#include "e4/classes/FacingClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"
#include "e4/classes/MissionClass_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"

// 0x413F80
namespace gamemd {
AircraftTypeClass * AircraftClass::Update(void * a1, void * a2, void *a3, void *a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00413F80.json)
}
}
// 0x415B10
namespace gamemd {
int AircraftClass::FindLandingCell(int * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00415B10.json)
}
}
// 0x4165C0
namespace gamemd {
int AircraftClass_DeployWithAnim(AircraftClass *aP0, void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7, void * a8, void * a9)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004165C0.json)
}
}
// 0x417CC0
namespace gamemd {
AircraftTypeClass * AircraftClass::GetCursorOverObject(IUnknown * aP1, IUnknown * a3, void *a3_2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00417CC0.json)
}
}
// 0x4196B0
namespace gamemd {
int AircraftClass::ValidateLandingCell(unsigned int * a2, int a3, int a4, int a5, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004196B0.json)
}
}
// 0x41A940
namespace gamemd {
int AircraftClass::EvaluateTargetingState()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041A940.json)
}
}
// 0x41AA80
namespace gamemd {
void* AircraftClass_AssignDestination_SyncLog(void * a1, void * a2, void * a3, void * a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41AA80)
}
// 0x41ADF0
int AircraftClass::RevealSight(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041ADF0.json)
}
// 0x41B430
void* AircraftClass::LoadFromStream(unsigned int * a0, FootClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041B430.json)
}
// 0x41B9F0
int AircraftClass::UpdateDocking(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041B9F0.json)
}
// 0x41BB30
int AircraftClass::OverrideMission_SyncLog(int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041BB30.json)
}
// 0x417BD0
char AircraftClass::ValidateMovement(int a2, int * a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00417BD0.json)
}

// 0x417F80
int AircraftClass::CanEnterCell(short * a1, IUnknown * aP2, InfantryClass * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00417F80.json)
}

// 0x41A590
char * AircraftClass::CheckLandingClearance(int a2, int a3, int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041A590.json)
}

// 0x41ADC0
int AircraftClass::ProcessDockCheck()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041ADC0.json)
}

// 0x41B5C0
HRESULT AircraftClass::CheckPassengerCount(int a1, int pPStm, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41B5C0)
}

// 0x41B980
int AircraftClass::IsBelowScreen()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041B980.json)
}

// 0x41BE60
int AircraftClass::LandingCheckStub()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41BE60)
}

// 0x41BE80
int AircraftClass::CheckStateFlag()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041BE80.json)
}

// 0x41BE90
int AircraftClass::CheckStateFlag2()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041BE90.json)
}

// 0x41C020
int AircraftClass::CheckReloadTimer()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041C020.json)
}

// 0x41C070
char AircraftClass::CheckDockState()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41C070)
}

// 0x41C190
int AircraftClass::PowerDrainProcess(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041C190.json)
}

// 0x41C1D0
int AircraftClass::CheckMissionAbort()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41C1D0)
}

// 0x41C200
int AircraftClass::CheckMissionFail()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41C200)
}

// 0x41C210
AircraftClass * AircraftClass::CheckActionStatus(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041C210.json)
}

// 0x5B2E90
int AircraftClass::CheckMissionStatus()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5B2E90)
}

// 0x5B2F30
int AircraftClass::CheckMissionStatus2()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5B2F30)
}
}  // L-fix: close namespace tail 1
