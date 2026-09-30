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

  unsigned int *v1; // eax
  unsigned int *v3; // eax
  void *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x60d326*/
  if ( !g_abs_AC1B04 ) /*0x60d32c*/
    return 0; /*0x60d32c*/
  v1 = (unsigned int *)*((unsigned int *)g_abs_AC1B00 + (g_abs_AC1B18(&v4) & ((1 << g_abs_AC1B0C) - 1))); /*0x60d34d*/
  if ( !v1 ) /*0x60d352*/
    return 0; /*0x60d352*/
  while ( (void *)*v1 != v4 ) /*0x60d35a*/
  {
    v1 = (unsigned int *)v1[129]; /*0x60d35c*/
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

  INIClass *v4; // edx
  INIClass *v5; // eax
  INIClass *v6; // ecx
  INIClass *v7; // edx
  INIClass *v8; // eax
  int v9; // ebp
  char * v10;
  int result; // eax
  char Buffer[16]; // [esp+10h] [ebp-10h] BYREF

  INIClass::SetInt(aP1->__pad_0, (INIClass *)Block, (INIClass *)&stru_830620.__pad_579C[37396], *(unsigned int *)this, 0); /*0x698fae*/
  INIClass::SetInt( /*0x698fc1*/
    aP1->__pad_0,
    (INIClass *)Block,
    (INIClass *)&stru_830620.__pad_579C[37384],
    *((unsigned int *)this + 1),
    0);
  INIClass::SetInt(aP1->__pad_0, (INIClass *)Block, (INIClass *)&stru_830620.__pad_14B0[6168], *((unsigned int *)this + 2), 0); /*0x698fd4*/
  INIClass::SetInt(aP1->__pad_0, (INIClass *)Block, (INIClass *)aCredits, *((unsigned int *)this + 3), 0); /*0x698fe7*/
  INIClass::SetInt( /*0x698ffa*/
    aP1->__pad_0,
    (INIClass *)Block,
    (INIClass *)&stru_830620.__pad_579C[29360],
    *((unsigned int *)this + 4),
    0);
  IDA_LOBYTE(v4) = *((unsigned char *)this + 20); /*0x698fff*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[29164], v4); /*0x69900b*/
  IDA_LOBYTE(v5) = *((unsigned char *)this + 21); /*0x699010*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[29144], v5); /*0x69901c*/
  IDA_LOBYTE(v6) = *((unsigned char *)this + 22); /*0x699021*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[29128], v6); /*0x69902d*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 23); /*0x699032*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[37372], v7); /*0x69903e*/
  IDA_LOBYTE(v8) = *((unsigned char *)this + 24); /*0x699043*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[37356], v8); /*0x69904f*/
  v9 = 1; /*0x699054*/
  v10 = (char *)this + 44; /*0x699059*/
  do /*0x69908e*/
  {
    sprintf(Buffer, &stru_830620.__pad_579C[37344], v9); /*0x699067*/
    IDA_LOBYTE(result) = GameSetup::FormatToString( /*0x699082*/
                       aP1->__pad_0,
                       Block,
                       Buffer,
                       *(CCINIClass **)(v10 - 4),
                       *(CCINIClass **)v10,
                       *(unsigned int *)(v10 + 4));
    ++v9; /*0x699087*/
    v10 += 12; /*0x699088*/
  }
  while ( v9 < 8 ); /*0x69908e*/
  return result; /*0x699090*/

}
} // namespace gamemd