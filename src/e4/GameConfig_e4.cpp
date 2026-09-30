// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/GameConfig_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/GameOption_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"

// 0x5E84D0
namespace gamemd {
char * GameConfig::ComputeCRC()
{

  int * v0;
  int *v1; // ebp
  int v2; // edx
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  int *v6; // esi
  int v7; // ebp
  char *v8; // ebp
  int *v10; // [esp+10h] [ebp-104h]
  unsigned char v11[256]; // [esp+14h] [ebp-100h] BYREF

  v0 = (unsigned int)((int *)(0));
  qmemcpy(v11, &word_ABE050, sizeof(v11)); /*0x5e84ea*/
  v1 = &dword_ABE010; /*0x5e84ec*/
  v10 = &dword_ABE010; /*0x5e84fd*/
  v2 = 320; /*0x5e8501*/
  memset(&word_ABE050, 0, 0x100u); /*0x5e8506*/
  do /*0x5e854a*/
  {
    v3 = v0 >> 31; /*0x5e850a*/
    if ( v2 < 4 ) /*0x5e8510*/
    {
      v5 = 0; /*0x5e8526*/
      v6 = v1; /*0x5e8528*/
      v7 = v2; /*0x5e852e*/
      v2 = 0; /*0x5e8530*/
      do /*0x5e853d*/
      {
        v5 = *(uint8_t *)v6 | (v5 << 8); /*0x5e8539*/
        v6 = (int *)((char *)v6 + 1); /*0x5e853b*/
        --v7; /*0x5e853c*/
      }
      while ( v7 ); /*0x5e853d*/
      v1 = v10; /*0x5e853f*/
      v0 = v3 + v5 + 2 * v0; /*0x5e8546*/
    }
    else
    {
      v4 = *v1++; /*0x5e8512*/
      v10 = v1; /*0x5e8518*/
      v0 = v3 + v4 + 2 * v0; /*0x5e851f*/
      v2 -= 4; /*0x5e8521*/
    }
  }
  while ( v2 > 0 ); /*0x5e854a*/
  v8 = (char *)RA2_OPNEW(0xCu); /*0x5e8553*/
  sprintf(v8, stru_817828, v0); /*0x5e855c*/
  qmemcpy(&word_ABE050, v11, 0x100u); /*0x5e8572*/
  return v8; /*0x5e8574*/

}
} // namespace gamemd

// 0x679D90
namespace gamemd {
int GameConfig::ComputeHash()
{

  int v0; // edi
  int v1; // ebp
  int i; // esi
  int v3; // eax
  int v4; // eax
  void *v6[3]; // [esp+10h] [ebp-C4h] BYREF
  unsigned int v7[10]; // [esp+1Ch] [ebp-B8h] BYREF
  char v8; // [esp+44h] [ebp-90h]
  int v9; // [esp+48h] [ebp-8Ch]
  int v10; // [esp+4Ch] [ebp-88h]
  char v11; // [esp+50h] [ebp-84h]
  unsigned int v12[22]; // [esp+68h] [ebp-6Ch] BYREF
  unsigned char v13[12]; // [esp+C0h] [ebp-14h] BYREF
  int v14; // [esp+CCh] [ebp-8h]

  v0 = Hash::ComputeHashSHA1(g_abs_887048); /*0x679da5*/
  v1 = MultiplayerGameMode::ListGet(); /*0x679dac*/
  for ( i = 1; i <= v1; ++i ) /*0x679db7*/
  {
    v3 = MultiplayerGameMode::Find((void *)i); /*0x679dbb*/
    if ( v3 ) /*0x679dc2*/
    {
      v4 = (int)(GameConfig::Constructor(v3));
      v0 += Hash::ComputeHashSHA1(v4); /*0x679dd2*/
    }
  }
  if ( byte_B053B8 ) /*0x679ddf*/
    return dword_B053B4 + v0; /*0x679ea8*/
  v6[1] = 0; /*0x679de9*/
  v6[2] = 0; /*0x679ded*/
  GenericList::Constructor(v7); /*0x679df1*/
  v7[0] = &vt_List_INIClass_INISection; /*0x679dfa*/
  memset(&v7[7], 0, 12); /*0x679e07*/
  v8 = 0; /*0x679e13*/
  v9 = 0; /*0x679e17*/
  v10 = 0; /*0x679e1b*/
  v11 = 0; /*0x679e1f*/
  v6[0] = &CCINIClass_Vtable; /*0x679e23*/
  CCFileClass::Construct(v12, aCoopcampmdIni); /*0x679e2b*/
  if ( CCINIClass::Load(v6, (int)v12, 0, 0) ) /*0x679e3b*/
    dword_B053B4 = Hash::ComputeHashSHA1((int)v6); /*0x679e4d*/
  byte_B053B8 = 1; /*0x679e59*/
  v12[0] = &vt_CCFileClass; /*0x679e60*/
  v14 = 0; /*0x679e68*/
  Vector::Clear((int)v13); /*0x679e6f*/
  v12[0] = &off_7E1668; /*0x679e78*/
  ((BufferIOFileClass *)(v12))->Dtor(); /*0x679e80*/
  HashTable::DestroyHashTableINIClass(v6); /*0x679e89*/
  return dword_B053B4 + v0; /*0x679e97*/

}
} // namespace gamemd

// 0x5D67B0
namespace gamemd {
void GameConfig::Constructor()
{

  char **v1; // edi
  unsigned int *v2; // eax
  unsigned int *v3; // esi
  unsigned int v6[22]; // [esp+Ch] [ebp-6Ch] BYREF
  char v7[12]; // [esp+64h] [ebp-14h] BYREF
  int v8; // [esp+70h] [ebp-8h]

  v1 = this; /*0x5d67b5*/
  if ( !*((unsigned int *)this + 14) ) /*0x5d67bd*/
  {
    v2 = (unsigned int *)(RA2_OPNEW(0x58u));
    v3 = v2; /*0x5d67ce*/
    if ( v2 ) /*0x5d67d5*/
    {
      v2[1] = (unsigned int)(0);
      v2[2] = (unsigned int)(0);
      v2[5] = 0; /*0x5d67e6*/
      v2[6] = 0; /*0x5d67e9*/
      v2[4] = &vt_GenericNode; /*0x5d67ec*/
      GenericNode::Constructor(v2 + 7); /*0x5d67f2*/
      v3[3] = &vt_GenericList; /*0x5d67fa*/
      LinkedList::Prepend(v3 + 4, (int)(v3 + 7)); /*0x5d6801*/
      v1 = this; /*0x5d6806*/
      v3[3] = &vt_List_INIClass_INISection; /*0x5d680a*/
      v3[10] = 0; /*0x5d6811*/
      v3[11] = 0; /*0x5d6814*/
      v3[12] = 0; /*0x5d6817*/
      *((unsigned char *)v3 + 52) = 0; /*0x5d681a*/
      v3[14] = 0; /*0x5d681d*/
      v3[15] = 0; /*0x5d6820*/
      *((unsigned char *)v3 + 64) = 0; /*0x5d6823*/
      *v3 = &CCINIClass_Vtable; /*0x5d6826*/
    }
    else
    {
      v3 = 0; /*0x5d682f*/
    }
    v1[14] = (char *)((unsigned int)((char *)v3));
    CCFileClass::Construct2(v6, v1 + 11); /*0x5d683c*/
    if ( CCFileClass::Open(v6, 0) ) /*0x5d6846*/
      CCINIClass::Load(v1[14], (int)v6, 0, 0); /*0x5d685a*/
    v6[0] = &vt_CCFileClass; /*0x5d6863*/
    v8 = 0; /*0x5d686b*/
    Vector::Clear((int)v7); /*0x5d686f*/
    v6[0] = &off_7E1668; /*0x5d6878*/
    ((BufferIOFileClass *)(v6))->Dtor(); /*0x5d6880*/
  }
  return v1[14]; /*0x5d6888*/

}
}
// 0x77E7A0
int  GameConfig::BuildChecksum(char * Buffer)
{

  int v2; // ecx
  void **p_attachedTag; // eax
  INIClass *Entry; // eax

  v2 = dword_B76B1C; /*0x77e7a5*/
  if ( dword_B76B1C > 0 ) /*0x77e7ad*/
  {
    p_attachedTag = &g_WOL_LoginObject.attachedTag; /*0x77e7af*/
    do /*0x77e7c0*/
    {
      p_attachedTag += 37; /*0x77e7b6*/
      --v2; /*0x77e7bb*/
    }
    while ( v2 ); /*0x77e7c0*/
  }
  GameOption::CheckDuplicate(); /*0x77e7dd*/
  Hash_Check_5E9580(); /*0x77e7e8*/
  Hash_Check_5E94D0(); /*0x77e7f3*/
  Entry = GameOptions::GetEntry(); /*0x77e7fa*/
  return (INIClass *)sprintf(Buffer, (ObjectClass *)&stru_84A52C.sectionHead[1], Entry); /*0x77e80e*/

}

} // namespace gamemd
