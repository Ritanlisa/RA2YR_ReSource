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
    v1 = (GameSetup **)v1[129]; /*0x60d35c*/
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

  ((INIClass *)(aP1))->SetInt(Block,(char *)(g_INI_Key_GameMode), *(unsigned int *)this, 0); /*0x698fae*/
  ((INIClass *)(aP1))->SetInt(Block,(char *)(aScenindex), *((unsigned int *)this + 1), 0); /*0x698fc1*/
  ((INIClass *)(aP1))->SetInt(Block,(char *)(g_INI_Key_GameSpeed), *((unsigned int *)this + 2), 0); /*0x698fd4*/
  ((INIClass *)(aP1))->SetInt(Block,(char *)(g_INI_Key_Credits), *((unsigned int *)this + 3), 0); /*0x698fe7*/
  ((INIClass *)(aP1))->SetInt(Block,(char *)(g_INI_Key_UnitCount), *((unsigned int *)this + 4), 0); /*0x698ffa*/
  INIClass::SetBool(aP1, Block, g_INI_Key_ShortGame, *((unsigned char *)this + 20)); /*0x69900b*/
  INIClass::SetBool(aP1, Block, g_INI_Key_SuperWeaponsAllowed, *((unsigned char *)this + 21)); /*0x69901c*/
  INIClass::SetBool(aP1, Block, g_INI_Key_BuildOffAlly, *((unsigned char *)this + 22)); /*0x69902d*/
  INIClass::SetBool(aP1, Block, aMcvrepacks, *((unsigned char *)this + 23)); /*0x69903e*/
  INIClass::SetBool(aP1, Block, aCratesappear, *((unsigned char *)this + 24)); /*0x69904f*/
  v4 = 1; /*0x699054*/
  v5 = (int *)((char *)this + 44); /*0x699059*/
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