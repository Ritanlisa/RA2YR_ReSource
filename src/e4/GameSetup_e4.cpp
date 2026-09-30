// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GameSetup_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/GameSettings_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"

// 0x60D320
namespace gamemd {
int GameSetup::LookupDialogHash()
{
  GameSetup **v1; // eax
  unsigned int *v3; // eax
  GameSetup *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x60d326*/
  if ( !*(unsigned int *)&g_DialogPool.__pad_208[60] ) /*0x60d32c*/
    return 0; /*0x60d32c*/
  v1 = *(GameSetup ***)(*(unsigned int *)&g_DialogPool.__pad_208[56] /*0x60d34d*/
                      + 4
                      * ((*(int (**)(GameSetup **))&g_DialogPool.__pad_208[80])(&v4)
                       & ((1 << g_DialogPool.__pad_208[68]) - 1)));
  if ( !v1 ) /*0x60d352*/
    return 0; /*0x60d352*/
  while ( *v1 != v4 ) /*0x60d35a*/
  {
    v1 = (gamemd::GameSetup **)((unsigned int *)((GameSetup **)v1[129]));
    if ( !v1 ) /*0x60d364*/
      return 0; /*0x60d364*/
  }
  v3 = (unsigned int *)(v1 + 1);
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

  INIClass::SetInt(aP1, Block, g_INI_Key_GameMode, *(unsigned int *)this, 0); /*0x698fae*/
    INIClass::SetInt(
    INIClass::SetInt(aP1->__pad_0, (INIClass *)Block, (INIClass *)&stru_830620.__pad_14B0[6168], *((unsigned int *)this + 32), 0);
    INIClass::SetInt(aP1->__pad_0, (INIClass *)Block, (INIClass *)aCredits, *((unsigned int *)this + 48), 0);
    INIClass::SetInt(
  INIClass::SetBool(aP1, Block, g_INI_Key_ShortGame, this->q014); /*0x69900b*/
    INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[29144], v5);
    INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[29128], v6);
    INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[37372], v7);
  INIClass::SetBool(aP1, Block, aCratesappear, this->q018); /*0x69904f*/
  v4 = 1; /*0x699054*/
    v10 = (char *)this + 176;
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