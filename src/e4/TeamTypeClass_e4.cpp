// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/INIClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/TeamTypeClass_28_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/TaskForceClass_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/E4Recv_634B20_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_PlanningMemberClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/RadioClass_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/TagTypeClass_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"

// 0x4C98B0
namespace gamemd {
int TeamTypeClass::Construct()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C98B0)
}
}
// 0x691C00
namespace gamemd {
unsigned int * TeamTypeClass::CreateScriptType(char *Source)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x691C00)
}
}
// 0x6E85F0
namespace gamemd {
unsigned int * TeamTypeClass::FindOrCreateTaskForce(char *Source)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E85F0)
}
}
// 0x6EF5F0
namespace gamemd {
int TeamTypeClass::Check(int a2, void *a2_2, void *a3)
{

  int result; // eax

  for ( result = *(unsigned int *)&this->__pad_4C[8]; result; result = *(unsigned int *)(result + 1496) ) /*0x6ef5f5*/
    *(unsigned int *)(result + 240) = a2; /*0x6ef5fb*/
  return result; /*0x6ef60b*/

}
}
// 0x6F0A70
namespace gamemd {
int TeamTypeClass::DestroyAllInstances()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F0A70)
}
}
// 0x6F1030
namespace gamemd {
int TeamTypeClass::GetTeam(int a2, int a3)
{

  int result; // eax
  int v4; // ecx

  result = a2; /*0x6f1030*/
  if ( *((unsigned int *)this + 52) == a2 ) /*0x6f103f*/
    *((unsigned int *)this + 52) = 0; /*0x6f1041*/
  if ( *((unsigned int *)this + 49) == a2 ) /*0x6f104d*/
    *((unsigned int *)this + 49) = 0; /*0x6f104f*/
  if ( *((unsigned int *)this + 57) == a2 ) /*0x6f105b*/
    *((unsigned int *)this + 57) = 0; /*0x6f105d*/
  if ( *((unsigned int *)this + 56) == a2 ) /*0x6f1069*/
    *((unsigned int *)this + 56) = 0; /*0x6f106b*/
  v4 = *((unsigned int *)this + 56); /*0x6f1071*/
  if ( v4 ) /*0x6f1079*/
    return (*(int (**)(int, int, int))(*(unsigned int *)v4 + 40))(v4, a2, a3); /*0x6f1083*/
  return result; /*0x6f1086*/

}
}
// 0x6F1090
namespace gamemd {
char TeamTypeClass::LoadFromINI(unsigned char *** aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F1090)
}
}
// 0x6F1550
namespace gamemd {
AbstractClass * * TeamTypeClass::GetMaxCount(CCINIClass * aP1)
{
    return nullptr; (void)aP1; return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F1550)
}
} // namespace gamemd

// 0x6F22F0
namespace gamemd {
AbstractClass * * TeamTypeClass_28::Release(int a2, int * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F22F0)
}
}
// 0x6F24B0
namespace gamemd {
AbstractClass * * TeamTypeClass_28::SetCapacity(int a2, int * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F24B0)
}
}
// 0x6F0FC0
namespace gamemd {
int TeamTypeClass::FindByName()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F0FC0)
}
} // namespace gamemd

// 0x6F1AB0
namespace gamemd {
TeamTypeClass * TeamTypeClass::ReadScriptData(char * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F1AB0)
}
} // namespace gamemd

// 0x6F1B90
namespace gamemd {
int TeamTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F1B90)
}
} // namespace gamemd

// 0x6F1BB0
namespace gamemd {
int TeamTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F1BB0)
}
} // namespace gamemd

// 0x6F1C40
namespace gamemd {
int TeamTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6f1c46*/
    return -2147467261; /*0x6f1c48*/
  *a2 = -774134194; /*0x6f1c56*/
  a2[1] = 298977144; /*0x6f1c5e*/
  a2[2] = 1610655148; /*0x6f1c67*/
  a2[3] = unk_7E978C; /*0x6f1c70*/
  return 0; /*0x6f1c4d*/

}
} // namespace gamemd

// 0x6F1F30
namespace gamemd {
int TeamTypeClass::FlashAllInstances(AnimClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F1F30)
}
} // namespace gamemd

// 0x6F1F70
namespace gamemd {
int TeamTypeClass::FindFirstInstance()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F1F70)
}
} // namespace gamemd

// 0x6F20A0
namespace gamemd {
int TeamTypeClass::GetTypeIdentifier()
{

  return 35; /*0x6f20a5*/

}
} // namespace gamemd

// 0x6F20B0
namespace gamemd {
int TeamTypeClass::GetObjectSize()
{

  return 248; /*0x6f20b5*/

}
} // namespace gamemd

// 0x6F21B0
namespace gamemd {
void TeamTypeClass_28::ClearBuffer(void *a1_1)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F21B0)
}
} // namespace gamemd

// 0x6F21F0
namespace gamemd {
unsigned int TeamTypeClass_28::PointerToIndex(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F21F0)
}
} // namespace gamemd

// 0x6F2210
namespace gamemd {
unsigned int * TeamTypeClass_28::Seek(unsigned int * a2, int a3, void *a3_2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F2210)
}
} // namespace gamemd

// 0x6F2290
namespace gamemd {
char TeamTypeClass_28::AddRef(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F2290)
}
} // namespace gamemd

// 0x6F2400
namespace gamemd {
wchar_t * TeamTypeClass_28::ddtor(void *a1_1, void *a2_1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F2400)
}
} // namespace gamemd

// 0x6F2440
namespace gamemd {
int TeamTypeClass_28::Read(unsigned int * a2, void *a2_2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F2440)
}
} // namespace gamemd

// 0x6F2490
namespace gamemd {
unsigned int TeamTypeClass_28::Write(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F2490)
}
} // namespace gamemd

// 0x6F2640
namespace gamemd {
int TeamTypeClass_28::FindItem(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6F2640)
}
}
// 0x6F2680
namespace gamemd {
VectorClass_flat * TeamTypeClass_28::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw body; truth = .omo/ida_cache/func_0x6F2680.json)
}
} // namespace gamemd

// 0x6F2720
namespace gamemd {
DynamicVector * TeamTypeClass_28::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    return nullptr; (void)Block; (void)a2; (void)a3_1; return nullptr; // TODO stub - quarantined G42 T9 (raw body; truth = .omo/ida_cache/func_0x6F2720.json)
}
} // namespace gamemd
