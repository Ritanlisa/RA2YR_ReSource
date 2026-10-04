// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/InfantryTypeVector_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Input_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/E4Recv_524EC0_e4.hpp"
#include "e4/classes/AnimTypeVector_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"

// 0x5236A0
namespace gamemd {
InfantryTypeClass * InfantryTypeClass::Constructor(char *aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005236A0.json)
}
} // namespace gamemd
// 0x523980
namespace gamemd {
unsigned int * InfantryTypeClass::Constructor_523980(ObjectTypeClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00523980.json)
}
} // namespace gamemd
// 0x523B40
namespace gamemd {
int InfantryTypeClass::CreateInfantry(short * a2, AbstractClass * ppv)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00523B40.json)
}
} // namespace gamemd
// 0x5240A0
namespace gamemd {
int InfantryTypeClass::LoadFromINI(uint8_t *** a2, void *a2_2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005240A0.json)
}
} // namespace gamemd
// 0x524960
namespace gamemd {
ObjectTypeClass * * InfantryTypeClass_LoadTypeData(InfantryTypeClass *aP0, void * a2, void * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x524960)
}
}
// 0x524B60
namespace gamemd {
TechnoTypeClass * * InfantryTypeClass_SaveLoad_Prefix(InfantryTypeClass *aP0)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x524B60)
}
}
// 0x524D70
namespace gamemd {  // G42.18c ns repair
InfantryTypeClass * InfantryTypeClass::ddtor(int Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00524D70.json)
}
}  // G42.18c ns repair
// 0x524F20
namespace gamemd {  // G42.18c ns repair
unsigned int * InfantryTypeClass::CopyDataArray(unsigned int *aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00524F20.json)
}
}  // G42.18c ns repair
// 0x772FA0
namespace gamemd {  // G42.18c ns repair
WeaponTypeClass * * InfantryTypeClass::Find(char *Source)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00772FA0.json)
}
}  // G42.18c ns repair
// 0x523B10
namespace gamemd {  // G42.18c ns repair
InfantryClass *  InfantryTypeClass::ConstructInfantry(AbstractClass * ppv)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00523B10.json)
}
}  // G42.18c ns repair
// 0x523C20
namespace gamemd {  // G42.18c ns repair
int * InfantryTypeClass::GetDimensions(int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00523C20.json)
}
}  // G42.18c ns repair
// 0x524760
namespace gamemd {  // G42.18c ns repair
unsigned int * InfantryTypeClass::GetDefaultDimensions(unsigned int * a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00524760.json)
}
}  // G42.18c ns repair
// 0x524790
namespace gamemd {  // G42.18c ns repair
int InfantryTypeClass::GetGameplayValue()
{

  return *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5848); /*0x52479b*/

}
}  // G42.18c ns repair
// 0x5247A0
namespace gamemd {  // G42.18c ns repair
int InfantryTypeClass::StubReturnFalse()
{

  return 0; /*0x5247a2*/

}
}  // G42.18c ns repair
// 0x5247D0
namespace gamemd {  // G42.18c ns repair
unsigned int * InfantryTypeClass::ClampToGroundHeight(unsigned int * a1, int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005247D0.json)
}
}  // G42.18c ns repair
// 0x524840
namespace gamemd {  // G42.18c ns repair
int InfantryTypeClass::PowerDrainUpdate(int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00524840.json)
}
}  // G42.18c ns repair
// 0x524C70
namespace gamemd {  // G42.18c ns repair
int InfantryTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00524C70.json)
}
}  // G42.18c ns repair
// 0x524D40
namespace gamemd {  // G42.18c ns repair
int InfantryTypeClass::GetTypeIdentifier()
{

  return 16; /*0x524d45*/

}
}  // G42.18c ns repair
// 0x524D50
namespace gamemd {  // G42.18c ns repair
int InfantryTypeClass::GetObjectSize()
{

  return 3792; /*0x524d55*/

}
}  // G42.18c ns repair
// 0x524D60
namespace gamemd {
int InfantryTypeClass::GetAuxField()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x524D60)
}
}
