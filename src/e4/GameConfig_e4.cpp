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
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/GenericList_e4.hpp"
#include "e4/classes/Hash_e4.hpp"
#include "e4/classes/GenericNode_e4.hpp"
#include "e4/classes/GameOptions_e4.hpp"

// 0x5E84D0
namespace gamemd {  // G42.18 ns repair
char * GameConfig::ComputeCRC()
{


  unsigned int v0 = 0; // ebx /*0x5e84e8*/
  unsigned char v11[256]; // [esp+14h] [ebp-100h] BYREF
  memcpy(v11, &unk_ABE050, sizeof(v11)); /*0x5e84ea*/
  int *v1; // ebp
  v1 = (int *)(&dword_ABE010); /*0x5e84ec*/
  int *v10; // [esp+10h] [ebp-104h]
  v10 = (int *)(&dword_ABE010); /*0x5e84fd*/
  int v2 = 320; // edx /*0x5e8501*/
  memset(&unk_ABE050, 0, 0x100u); /*0x5e8506*/
  do /*0x5e854a*/
  {
    unsigned int v3 = v0 >> 31; // edi /*0x5e850a*/
    if ( v2 < 4 ) /*0x5e8510*/
    {
      int v5 = 0; // eax /*0x5e8526*/
      int *v6 = v1; // esi /*0x5e8528*/
      int v7 = v2; // ebp /*0x5e852e*/
      v2 = 0; /*0x5e8530*/
      do /*0x5e853d*/
      {
        v5 = *(unsigned __int8 *)v6 | (v5 << 8); /*0x5e8539*/
        v6 = (int *)((char *)v6 + 1); /*0x5e853b*/
        --v7; /*0x5e853c*/
      }
      while ( v7 ); /*0x5e853d*/
      v1 = v10; /*0x5e853f*/
      v0 = v3 + v5 + 2 * v0; /*0x5e8546*/
    }
    else
    {
      int v4; // eax
      v4 = *v1++; /*0x5e8512*/
      v10 = v1; /*0x5e8518*/
      v0 = v3 + v4 + 2 * v0; /*0x5e851f*/
      v2 -= 4; /*0x5e8521*/
    }
  }
  while ( v2 > 0 ); /*0x5e854a*/
  char *v8; // ebp
  v8 = (char *)__2_YAPAXI_Z(0xCu); /*0x5e8553*/
  sprintf(v8, "%08X", v0); /*0x5e855c*/
  memcpy(&unk_ABE050, v11, 0x100u); /*0x5e8572*/
  return v8; /*0x5e8574*/

}
} // namespace gamemd

// 0x679D90
namespace gamemd {
int GameConfig::ComputeHash()
{

  int v0; // edi
  v0 = Hash::ComputeHashSHA1(dword_887048); /*0x679da5*/
  int v1; // ebp
  v1 = MultiplayerGameMode::ListGet(); /*0x679dac*/
  int i; // esi
  for ( i = 1; i <= v1; ++i ) /*0x679db7*/
  {
    int v3; // eax
    v3 = ((void *)i)->Find(); /*0x679dbb*/
    if ( v3 ) /*0x679dc2*/
    {
      int v4; // eax
      v4 = (int)(GameConfig::Constructor(v3)); /*0x679dc6*/
      v0 += Hash::ComputeHashSHA1(v4); /*0x679dd2*/
    }
  }
  if ( byte_B053B8 ) /*0x679ddf*/
    return dword_B053B4 + v0; /*0x679ea8*/
  void *v6[3]; // [esp+10h] [ebp-C4h] BYREF
  v6[1] = 0; /*0x679de9*/
  v6[2] = 0; /*0x679ded*/
  unsigned int v7[10]; // [esp+1Ch] [ebp-B8h] BYREF
  (v7)->Constructor(); /*0x679df1*/
  v7[0] = (unsigned int)(&vt_List); /*0x679dfa*/
  memset(&v7[7], 0, 12); /*0x679e07*/
  char v8; // [esp+44h] [ebp-90h]
  v8 = 0; /*0x679e13*/
  int v9; // [esp+48h] [ebp-8Ch]
  v9 = 0; /*0x679e17*/
  int v10; // [esp+4Ch] [ebp-88h]
  v10 = 0; /*0x679e1b*/
  char v11; // [esp+50h] [ebp-84h]
  v11 = 0; /*0x679e1f*/
  v6[0] = (void*)(&CCINIClass_Vtable); /*0x679e23*/
  unsigned int v12[22]; // [esp+68h] [ebp-6Ch] BYREF
  CCFileClass::Construct(v12, g_Str_File_CoopCampMD_ini); /*0x679e2b*/
  if ( CCINIClass::Load(v6, (int)v12, 0, 0) ) /*0x679e3b*/
    dword_B053B4 = Hash::ComputeHashSHA1((int)v6); /*0x679e4d*/
  byte_B053B8 = 1; /*0x679e59*/
  v12[0] = (unsigned int)(&vt_CCFileClass); /*0x679e60*/
  int v14; // [esp+CCh] [ebp-8h]
  v14 = 0; /*0x679e68*/
  unsigned char v13[12]; // [esp+C0h] [ebp-14h] BYREF
  Vector::Clear((int)v13); /*0x679e6f*/
  v12[0] = (unsigned int)&off_7E1668; /*0x679e78*/
  ((BufferIOFileClass *)(v12))->Dtor(); /*0x679e80*/
  (v6)->DestroyHashTableINIClass(); /*0x679e89*/
  return dword_B053B4 + v0; /*0x679e97*/
}
} // namespace gamemd

// 0x5D67B0
namespace gamemd {
void GameConfig::Constructor(void *a1, void *a2, void *a3, void *a4)
{

  CCFileClass v6; // [esp+Ch] [ebp-6Ch] BYREF

  GameConfig *v1 = this; // edi /*0x5d67b5*/
  if ( !*&this->q038 ) /*0x5d67bd*/
  {
    int v2; // eax
    v2 = (int)(__2_YAPAXI_Z(0x58u)); /*0x5d67c9*/
    int v3 = v2; // esi /*0x5d67ce*/
    if ( v2 ) /*0x5d67d5*/
    {
      *(unsigned int *)(v2 + 4) = 0; /*0x5d67de*/
      *(unsigned int *)(v2 + 8) = 0; /*0x5d67e1*/
      *(unsigned int *)(v2 + 20) = 0; /*0x5d67e6*/
      *(unsigned int *)(v2 + 24) = 0; /*0x5d67e9*/
      *(unsigned int *)(v2 + 16) = (unsigned int)(&vt_GenericNode); /*0x5d67ec*/
      ((GenericNode *)(v2 + 28))->Constructor(); /*0x5d67f2*/
      v3->u32_C = &vt_GenericList; /*0x5d67fa*/
      LinkedList::Prepend(&v3->sectionHead, v3 + 28); /*0x5d6801*/
      v1 = this; /*0x5d6806*/
      v3->u32_C = &vt_List; /*0x5d680a*/
      v3->needsSave_flag = 0; /*0x5d6811*/
      v3->INIClass_field_2C = 0; /*0x5d6814*/
      v3->unknown30 = 0; /*0x5d6817*/
      v3->needsSave_flag = 0; /*0x5d681a*/
      v3->unknown38 = 0; /*0x5d681d*/
      v3->INIClass_field_3C = 0; /*0x5d6820*/
      v3->ownsFile = 0; /*0x5d6823*/
      *(unsigned int *)v3 = (unsigned int)(&CCINIClass_Vtable); /*0x5d6826*/
    }
    else
    {
      v3 = 0; /*0x5d682f*/
    }
    *&v1->q038 = (gamemd::CCINIClass *)(v3); /*0x5d6839*/
    CCFileClass::Construct2(&v6, &v1->ObjectClass_2C); /*0x5d683c*/
    if ( (unsigned __int8)(&v6)->Open(0) ) /*0x5d6846*/
      CCINIClass::Load(*&v1->q038, (int)&v6, 0, 0); /*0x5d685a*/
    *(unsigned int *)v6.CDFileClass = &vt_CCFileClass; /*0x5d6863*/
    int v8; // [esp+70h] [ebp-8h]
    v8 = 0; /*0x5d686b*/
    char v7[12]; // [esp+64h] [ebp-14h] BYREF
    Vector::Clear((int)v7); /*0x5d686f*/
    *(unsigned int *)v6.CDFileClass = &off_7E1668; /*0x5d6878*/
    ((BufferIOFileClass *)&v6)->Dtor(); /*0x5d6880*/
  }
  return *&v1->q038; /*0x5d6888*/

}
}
// 0x77E7A0
namespace gamemd {  // G42.18c ns repair
int  GameConfig::BuildChecksum(char * Buffer)
{


  int v2 = dword_B76B1C; // ecx /*0x77e7a5*/
  if ( dword_B76B1C > 0 ) /*0x77e7ad*/
  {
    int *v3; // eax
    v3 = (int *)(dword_B76E58); /*0x77e7af*/
    do /*0x77e7c0*/
    {
      v3 += 37; /*0x77e7b6*/
      --v2; /*0x77e7bb*/
    }
    while ( v2 ); /*0x77e7c0*/
  }
  int v4 = CCINIClass_RulesHash ^ CCINIClass_AIHash ^ CCINIClass_ArtHash; // esi /*0x77e7db*/
  char v5; // al
  v5 = GameOption::CheckDuplicate(&byte_A8B8E0); /*0x77e7dd*/
  unsigned __int8 v6; // al
  v6 = Hash_Check_5E9580(v5 == 0); /*0x77e7e8*/
  int v9; // [esp-10h] [ebp-1Ch]
  v9 = Hash_Check_5E94D0(v6); /*0x77e7f8*/
  int Entry; // eax
  Entry = GameOptions::GetEntry(); /*0x77e7fa*/
  int v10; // [esp-Ch] [ebp-18h]
  int v11; // [esp-8h] [ebp-14h]
  const char *v12; // [esp-4h] [ebp-10h]
  return sprintf(Buffer, "%d,%d,%d,%d,%d,%s", Entry, v4, v9, v10, v11, v12); /*0x77e80e*/

}
}  // G42.18c ns repair
