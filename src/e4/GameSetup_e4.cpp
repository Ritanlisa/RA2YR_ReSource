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
namespace gamemd {
int GameSetup::LookupDialogHash()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x60D320)
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

  ((INIClass *)(aP1))->SetInt(Block,(char *)(g_INI_Key_GameMode), *(unsigned int *)this, 0); /*0x698fae*/
  ((INIClass *)(aP1))->SetInt(Block,(char *)(aScenindex), this->q004, 0); /*0x698fc1*/
  ((INIClass *)(aP1))->SetInt(Block,(char *)(g_INI_Key_GameSpeed), this->ptr_8, 0); /*0x698fd4*/
  ((INIClass *)(aP1))->SetInt(Block,(char *)(g_INI_Key_Credits), this->q00C, 0); /*0x698fe7*/
  ((INIClass *)(aP1))->SetInt(Block,(char *)(g_INI_Key_UnitCount), this->q010, 0); /*0x698ffa*/
  INIClass::SetBool(aP1, Block, g_INI_Key_ShortGame, this->q014); /*0x69900b*/
  INIClass::SetBool(aP1, Block, g_INI_Key_SuperWeaponsAllowed, this->u8_15); /*0x69901c*/
  INIClass::SetBool(aP1, Block, g_INI_Key_BuildOffAlly, this->u8_16); /*0x69902d*/
  INIClass::SetBool(aP1, Block, aMcvrepacks, this->u8_17); /*0x69903e*/
  INIClass::SetBool(aP1, Block, aCratesappear, this->q018); /*0x69904f*/
  v4 = 1; /*0x699054*/
  v5 = (int *)((char *)&this->q0104); /*0x699059*/
  do /*0x69908e*/
  {
    sprintf(Buffer, "Slot%02d", v4); /*0x699067*/
    result = GameSetup::FormatToString(Block, Buffer, *(v5 - 1), *v5, v5[1]); /*0x699082*/
    ++v4; /*0x699087*/
    v5 += 3; /*0x699088*/
  }
  while ( v4 < 8 ); /*0x69908e*/
  return (gamemd::AbstractClass **)(result); /*0x699090*/

}
} // namespace gamemd