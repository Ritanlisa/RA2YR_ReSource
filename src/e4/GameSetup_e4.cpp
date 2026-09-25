// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GameSetup_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/e4_protos.h"

// 0x60D320
namespace gamemd {
int GameSetup::LookupDialogHash()
{
  _DWORD *v1; // eax
  _DWORD *v3; // eax
  void *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x60d326*/
  if ( !g_DialogHashMap_Count ) /*0x60d32c*/
    return 0; /*0x60d32c*/
  v1 = (_DWORD *)*((_DWORD *)g_DialogHashMap_Base + (g_DialogHashMap_Hasher(&v4) & ((1 << g_DialogHashMap_Buckets) - 1))); /*0x60d34d*/
  if ( !v1 ) /*0x60d352*/
    return 0; /*0x60d352*/
  while ( (void *)*v1 != v4 ) /*0x60d35a*/
  {
    v1 = (_DWORD *)v1[129]; /*0x60d35c*/
    if ( !v1 ) /*0x60d364*/
      return 0; /*0x60d364*/
  }
  v3 = v1 + 1; /*0x60d36e*/
  if ( v3 ) /*0x60d373*/
    return v3[27]; /*0x60d375*/
  else
    return 0; /*0x60d366*/
}
} // namespace gamemd
// 0x698F90
namespace gamemd {
AbstractClass * * GameSetup::WriteINI(CCINIClass * aP1, unsigned char * Block)
{
  int v4; // ebp
  int *v5; // ebx
  int result; // eax
  char Buffer[16]; // [esp+10h] [ebp-10h] BYREF

  INIClass::SetInt(aP1, Block, g_INI_Key_GameMode, *(_DWORD *)this, 0); /*0x698fae*/
  INIClass::SetInt(aP1, Block, aScenindex, this->q004, 0); /*0x698fc1*/
  INIClass::SetInt(aP1, Block, g_INI_Key_GameSpeed, this->ptr_8, 0); /*0x698fd4*/
  INIClass::SetInt(aP1, Block, g_INI_Key_Credits, this->q00C, 0); /*0x698fe7*/
  INIClass::SetInt(aP1, Block, g_INI_Key_UnitCount, this->q010, 0); /*0x698ffa*/
  INIClass::SetBool(aP1, Block, g_INI_Key_ShortGame, this->q014); /*0x69900b*/
  INIClass::SetBool(aP1, Block, g_INI_Key_SuperWeaponsAllowed, this->u8_15); /*0x69901c*/
  INIClass::SetBool(aP1, Block, g_INI_Key_BuildOffAlly, this->u8_16); /*0x69902d*/
  INIClass::SetBool(aP1, Block, aMcvrepacks, this->u8_17); /*0x69903e*/
  INIClass::SetBool(aP1, Block, aCratesappear, this->q018); /*0x69904f*/
  v4 = 1; /*0x699054*/
  v5 = (int *)(&this->q0104); /*0x699059*/
  do /*0x69908e*/
  {
    sprintf(Buffer, "Slot%02d", v4); /*0x699067*/
    result = GameSetup::FormatToString(Block, Buffer, *(v5 - 1), *v5, v5[1]); /*0x699082*/
    ++v4; /*0x699087*/
    v5 += 3; /*0x699088*/
  }
  while ( v4 < 8 ); /*0x69908e*/
  return result; /*0x699090*/
}
} // namespace gamemd