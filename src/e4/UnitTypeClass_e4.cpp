// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/VoxelAnimTypeClass_e4.hpp"  // G42.35f: C2027 supply
#include "e4/classes/BuildingTypeClass_e4.hpp"  // G42.35f: C2027 supply
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/UnitTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/UnitTypeVector_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Value_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/OverlayTypeClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"

// 0x6B4DD0
namespace gamemd {
INIClass * * UnitTypeClass::ReadINIEntry()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006B4DD0.json)
}
} // namespace gamemd
// 0x7470D0
namespace gamemd {  // G42.18c ns repair
UnitTypeClass::UnitTypeClass(char *Source, int aP1, int a2, int a1, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007470D0.json)
}
}  // G42.18c ns repair
// 0x7474B0
namespace gamemd {
char UnitTypeClass::CreateUnit(short *a2, void *ppv)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007474B0.json)
}
}
// 0x747560
namespace gamemd {
int UnitTypeClass::ConstructUnit(void *ppv)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000747560.json)
}
}
// 0x747620
namespace gamemd {
char UnitTypeClass_LoadFromINI()
{
    return 0; // TODO stub - quarantined G42 T9 (raw 35-param INI reader; truth = .omo/ida_cache/func_0x747620.json)
}
}
// 0x74B960
namespace gamemd {  // G42.18c ns repair
VoxelAnimTypeClass * * UnitTypeClass::FindOrCreate(ObjectClass * Source)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00074B960.json)
}
}  // G42.18c ns repair
// 0x747590
namespace gamemd {  // G42.18c ns repair
int *  UnitTypeClass::GetDimensions(int * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000747590.json)
}
}  // G42.18c ns repair
// 0x7475D0
namespace gamemd {  // G42.18c ns repair
unsigned int *  UnitTypeClass::GetDefaultDimensions(unsigned int * a1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007475D0.json)
}
}  // G42.18c ns repair
// 0x747EB0
namespace gamemd {  // G42.18c ns repair
unsigned int * UnitTypeClass::ClampToGroundHeight(unsigned int * a1, int * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000747EB0.json)
}
}  // G42.18c ns repair
// 0x747F20
namespace gamemd {  // G42.18c ns repair
int UnitTypeClass::GetGameplayValue()
{

  return *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5836); /*0x747f2b*/

}
}  // G42.18c ns repair
// 0x747F30
namespace gamemd {  // G42.18c ns repair
int UnitTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000747F30.json)
}
}  // G42.18c ns repair
// 0x747F70
namespace gamemd {  // G42.18c ns repair
int UnitTypeClass::PowerDrainUpdate(int * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000747F70.json)
}
}  // G42.18c ns repair
// 0x748010
namespace gamemd {  // G42.18c ns repair
int UnitTypeClass::LoadFromINI2(int a1, int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000748010.json)
}
}  // G42.18c ns repair
// 0x7480B0
namespace gamemd {  // G42.18c ns repair
int UnitTypeClass::SaveToINI(void * a0, TechnoTypeClass * aP1, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007480B0.json)
}
}  // G42.18c ns repair

// 0x748160
namespace gamemd {  // G42.18c ns repair
int UnitTypeClass::GetObjectSize()
{

  return 3704; /*0x748165*/

}
}  // G42.18c ns repair
// 0x748170
namespace gamemd {  // G42.18c ns repair
int UnitTypeClass::GetTypeIdentifier()
{

  return 40; /*0x748175*/

}
}  // G42.18c ns repair
// 0x748180
namespace gamemd {  // G42.18c ns repair
int UnitTypeClass::GetAuxField()
{

return (int)this->ArrayIndex; /*0x748186*/

}
}  // G42.18c ns repair
// 0x748190
namespace gamemd {  // G42.35f: def was outside namespace (pre-existing damage)
UnitTypeClass * UnitTypeClass::ddtor(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw body; truth = .omo/ida_cache/func_0x748190.json)
}
} // namespace gamemd
