// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Credits_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Multiplayer_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Screen_e4.hpp"

// 0x52CB90
namespace gamemd {
char Credits::Screen()
{

  int v0; // esi
  char *v1; // ebp
  unsigned int *v2; // eax
  unsigned int *v3; // esi
  unsigned int *v4; // edi
  char result; // al
  unsigned int *v6; // eax
  unsigned int *v7; // esi
  unsigned int *v8; // edi
  char v9; // [esp+Fh] [ebp-1B1h]
  int v10; // [esp+10h] [ebp-1B0h]
  unsigned int v11[22]; // [esp+14h] [ebp-1ACh] BYREF
  unsigned char v12[12]; // [esp+6Ch] [ebp-154h] BYREF
  int v13; // [esp+78h] [ebp-148h]
  unsigned short FindFileData[160]; // [esp+80h] [ebp-140h] BYREF

  v9 = 0; /*0x52cba5*/
  v0 = ((int (*)(char *, unsigned short *))FindFirstFileA)(aBattlemdIni, FindFileData); /*0x52cbaf*/
  v10 = v0; /*0x52cbb4*/
  if ( v0 == -1 ) /*0x52cbb8*/
    goto LABEL_15; /*0x52cbb8*/
  do /*0x52ccab*/
  {
    if ( (FindFileData[0] & 0x116) == 0 ) /*0x52cbca*/
    {
      v1 = (char *)&FindFileData[152]; /*0x52cbdc*/
      if ( !strlen((const char *)&FindFileData[152]) ) /*0x52cbe3*/
        v1 = (char *)&FindFileData[22]; /*0x52cbea*/
      CCFileClass::Construct(v11, v1); /*0x52cbf6*/
      v2 = (unsigned int *)__2_YAPAXI_Z(88); /*0x52cbfd*/
      v3 = v2; /*0x52cc02*/
      if ( v2 ) /*0x52cc09*/
      {
        v4 = v2 + 3; /*0x52cc0b*/
        v2[1] = 0; /*0x52cc0e*/
        v2[2] = 0; /*0x52cc13*/
        GenericList::Constructor(v2 + 3); /*0x52cc16*/
        *v4 = &List<INIClass::INISection *>::`vftable'; /*0x52cc1b*/
        v3[10] = 0; /*0x52cc21*/
        v3[11] = 0; /*0x52cc24*/
        v3[12] = 0; /*0x52cc27*/
        *((unsigned char *)v3 + 52) = 0; /*0x52cc2a*/
        v3[14] = 0; /*0x52cc2d*/
        v3[15] = 0; /*0x52cc30*/
        *((unsigned char *)v3 + 64) = 0; /*0x52cc33*/
        *v3 = &CCINIClass_Vtable; /*0x52cc36*/
      }
      else
      {
        v3 = 0; /*0x52cc3e*/
      }
      CCINIClass::Load((char *)v3, (int)v11, 0, 0); /*0x52cc49*/
      if ( !_strcmpi(v1, aBattlemdIni_0) ) /*0x52cc54*/
        v9 = 1; /*0x52cc60*/
      CampaignClass::LoadFromINIList((char *)v3); /*0x52cc67*/
      if ( v3 ) /*0x52cc6e*/
        (*(void (**)(unsigned int *, int))*v3)(v3, 1); /*0x52cc76*/
      v11[0] = &CCFileClass::`vftable'; /*0x52cc7c*/
      v13 = 0; /*0x52cc84*/
      Vector::Clear((int)v12); /*0x52cc88*/
      v11[0] = &off_7E1668; /*0x52cc91*/
      BufferIOFileClass::Dtor(v11); /*0x52cc99*/
      v0 = v10; /*0x52cc9e*/
    }
  }
  while ( ((int (*)(int, unsigned short *))FindNextFileA)(v0, FindFileData) ); /*0x52ccab*/
  ((void (*)(int))FindClose)(v0); /*0x52ccba*/
  result = v9; /*0x52ccc0*/
  if ( !v9 ) /*0x52ccc7*/
  {
LABEL_15:
    CCFileClass::Construct(v11, aBattlemdIni_0); /*0x52ccd6*/
    v6 = (unsigned int *)__2_YAPAXI_Z(88); /*0x52ccdd*/
    v7 = v6; /*0x52cce2*/
    if ( v6 ) /*0x52cce9*/
    {
      v8 = v6 + 3; /*0x52cceb*/
      v6[1] = 0; /*0x52ccee*/
      v6[2] = 0; /*0x52ccf3*/
      GenericList::Constructor(v6 + 3); /*0x52ccf6*/
      *v8 = &List<INIClass::INISection *>::`vftable'; /*0x52ccff*/
      v7[10] = 0; /*0x52cd08*/
      v7[11] = 0; /*0x52cd0b*/
      v7[12] = 0; /*0x52cd0e*/
      *((unsigned char *)v7 + 52) = 0; /*0x52cd11*/
      v7[14] = 0; /*0x52cd14*/
      v7[15] = 0; /*0x52cd19*/
      *((unsigned char *)v7 + 64) = 0; /*0x52cd1c*/
      *v7 = &CCINIClass_Vtable; /*0x52cd1f*/
      CCINIClass::Load((char *)v7, (int)v11, 0, 0); /*0x52cd25*/
      CampaignClass::LoadFromINIList((char *)v7); /*0x52cd2c*/
      (*(void (**)(unsigned int *, int))*v7)(v7, 1); /*0x52cd37*/
    }
    v11[0] = &CCFileClass::`vftable'; /*0x52cd3d*/
    v13 = 0; /*0x52cd45*/
    Vector::Clear((int)v12); /*0x52cd49*/
    v11[0] = &off_7E1668; /*0x52cd52*/
    return BufferIOFileClass::Dtor(v11); /*0x52cd5a*/
  }
  return result; /*0x52cd5f*/

}
} // namespace gamemd