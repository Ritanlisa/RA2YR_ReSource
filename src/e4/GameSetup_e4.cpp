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
#include "e4/classes/INIClass_e4.hpp"

// 0x60D320
namespace gamemd {  // G42.18 ns repair
int GameSetup::LookupDialogHash()
{


  GameSetup *v4; // [esp+0h] [ebp-4h] BYREF
  v4 = this; /*0x60d326*/
  if ( !*(unsigned int *)&g_DialogHashMap_Count ) /*0x60d32c*/
    return 0; /*0x60d32c*/
  GameSetup **v1; // eax
  v1 = *(GameSetup ***)(*(unsigned int *)&g_DialogHashMap_Base /*0x60d34d*/
                      + 4
                      * ((*(int (**)(GameSetup **))&g_DialogHashMap_Hasher)(&v4)
                       & ((1 << g_DialogHashMap_Buckets) - 1)));
  if ( !v1 ) /*0x60d352*/
    return 0; /*0x60d352*/
  while ( *v1 != v4 ) /*0x60d35a*/
  {
    v1 = v1->GameSetup_204; /*0x60d35c*/
    if ( !v1 ) /*0x60d364*/
      return 0; /*0x60d364*/
  }
  unsigned int *v3; // eax
  v3 = (unsigned int *)(v1 + 1); /*0x60d36e*/
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
  int result; // eax

  INIClass::SetInt(aP1, Block, g_INI_Key_GameMode, *(unsigned int *)this, 0); /*0x698fae*/
  INIClass::SetInt(aP1, Block, aScenindex, this->u32_4, 0); /*0x698fc1*/
  INIClass::SetInt(aP1, Block, g_INI_Key_GameSpeed, this->ptr_8, 0); /*0x698fd4*/
  INIClass::SetInt(aP1, Block, g_INI_Key_Credits, this->__pad_00C, 0); /*0x698fe7*/
  INIClass::SetInt(aP1, Block, g_INI_Key_UnitCount, this->u32_10, 0); /*0x698ffa*/
  INIClass::SetBool(aP1, Block, g_INI_Key_ShortGame, this->u32_14); /*0x69900b*/
  INIClass::SetBool(aP1, Block, g_INI_Key_SuperWeaponsAllowed, this->u32_15); /*0x69901c*/
  INIClass::SetBool(aP1, Block, g_INI_Key_BuildOffAlly, this->u32_16); /*0x69902d*/
  INIClass::SetBool(aP1, Block, aMcvrepacks, this->u32_17); /*0x69903e*/
  INIClass::SetBool(aP1, Block, aCratesappear, this->u32_18); /*0x69904f*/
  int v4; // ebp
  v4 = 1; /*0x699054*/
  int *v5; // ebx
  v5 = (int *)this->q095 + 27); /*0x699059*/
  do /*0x69908e*/
  {
  char Buffer[16]; // [esp+10h] [ebp-10h] BYREF
    sprintf(Buffer, "Slot%02d", v4); /*0x699067*/
    result = (Block)->FormatToString(Buffer, *(v5 - 1), *v5, v5[1]); /*0x699082*/
    ++v4; /*0x699087*/
    v5 += 3; /*0x699088*/
  }
  while ( v4 < 8 ); /*0x69908e*/
  return (gamemd::AbstractClass **)(result); /*0x699090*/
}
} // namespace gamemd