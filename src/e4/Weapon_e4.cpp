// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_659E30_e4.hpp"
#include "e4/classes/E4Recv_659EE0_e4.hpp"
#include "e4/classes/E4Recv_659FF0_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Weapon_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectVector_e4.hpp"
#include "e4/classes/WeaponTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/WebBrowser_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/MessageListClass_e4.hpp"

// 0x53AE00
namespace gamemd {
int sub_53AE00()
{
  wchar_t *StringCSF; // eax
  int v1; // ecx

  StringCSF = (wchar_t *)(GetStringCSF((wchar_t *)(unk_82809C), 0,(const char *)(g_Str_File_Ion_cpp), 1123));
  v1 = 3; /*0x53ae1c*/
  if ( dword_A83D4C ) /*0x53ae23*/
    v1 = *((unsigned int *)dword_A83D4C + 22549); /*0x53ae25*/
// 0x5d3ba0
  return MessageListClass::AddMessage(unk_A8BC60, 0, 0, StringCSF, v1, 16454, 150, 0); /*0x53ae47*/
}
}
// 0x659CA0
namespace gamemd {
bool Weapon_Update(void * a1, void * a2)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x659CA0)
}
}
// 0x70C690
namespace gamemd {  // G42.18c ns repair
AbstractClass * * Weapon::DestroyTerrain(int * a1, IUnknown * aP2, InfantryClass * aP3, IUnknown * aP4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x70C690)
}
}  // G42.18c ns repair
// 0x53B410
namespace gamemd {
int sub_53B410()
{
  wchar_t *StringCSF; // eax
  int v1; // ecx

  StringCSF = (wchar_t *)(GetStringCSF((wchar_t *)(aMsgDominatorac), 0,(const char *)(g_Str_File_Ion_cpp), 1339));
  v1 = 3; /*0x53b42c*/
  if ( dword_A83D4C ) /*0x53b433*/
    v1 = *((unsigned int *)dword_A83D4C + 22549); /*0x53b435*/
// 0x5d3ba0
  return MessageListClass::AddMessage(unk_A8BC60, 0, 0, StringCSF, v1, 16454, 150, 0); /*0x53b457*/
}
}
// 0x53A0E0
namespace gamemd {
bool sub_53A0E0()
{
  return LightningStorm_Active || LightningStorm_Deferment > 0; /*0x53a0f4*/
}
} // namespace gamemd
