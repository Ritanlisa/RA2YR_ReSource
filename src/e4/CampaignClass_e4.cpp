// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/INISectionList_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/Campaign_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Node_flat_e4.hpp"
#include "e4/classes/CampaignProperties_WorldDominationTour_22_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Carryall_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/Campaign_WorldDominationTour_16_e4.hpp"
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"

// 0x46CB60
namespace gamemd {
CampaignClass::CampaignClass(ObjectClass * aP1)
{

  int v3; // eax

  ((AbstractTypeClass *)((int *)this))->Constructor((char *)(aP1)); /*0x46cb68*/
  this->vtable1 = &vt_CampaignClass; /*0x46cb70*/
  (&this->scenario)[28] = -1; /*0x46cb76*/
  this->description[28] = -1; /*0x46cb7c*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_CampaignClass); /*0x46cb82*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_CampaignClass); /*0x46cb89*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_CampaignClass); /*0x46cb90*/
  if ( dword_A83D08 < dword_A83D00 /*0x46cbcc*/
    || (byte_A83D05 || !dword_A83D00)
    && dword_A83D0C > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_A83CF8 + 8))(
         &dword_A83CF8,
         dword_A83D00 + dword_A83D0C,
         0) )
  {
    v3 = dword_A83D08++; /*0x46cbd9*/
    *((unsigned int *)dword_A83CFC + v3) = (unsigned int)(this); /*0x46cbe8*/
  }
  LOBYTE((&this->scenario)[29]) = 0; /*0x46cbf7*/
  wcscpy((wchar_t *)&this->description[29],(const wchar_t *)(&g_TypeClass_DefaultString)); /*0x46cbfe*/
  return (int)this; /*0x46cc08*/

}
}
// 0x46CE10
namespace gamemd {
int CampaignClass::LoadFromINIList()
{

  int result; // eax
  int v3; // ebp
  uint8_t *StringByIndex; // eax
  int v5; // esi
  int v6; // esi
  int v7; // eax
  int i; // [esp+8h] [ebp-24h]
  char Source[32]; // [esp+Ch] [ebp-20h] BYREF

  result = (int)(INIClass::GetKeyCount((gamemd::INIClass *)(this->__pad_0), (uint8_t *)(unsigned int *)((char *)&stru_81AF8C + 2))); /*0x46ce1c*/
  v3 = 0; /*0x46ce21*/
  for ( i = result; v3 < i; ++v3 ) /*0x46ce29*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex( /*0x46ce48*/
                                         this->__pad_0,
                                         (uint8_t *)(unsigned int *)((char *)&stru_81AF8C + 2),
                                         v3);
    ((INIClass*)(gamemd::INIClass *)(this))->GetString((uint8_t *)(unsigned int *)((char *)&stru_81AF8C + 2), (unsigned char *)(gamemd::INIClass *)(StringByIndex), (gamemd::INIClass *)(&g_INI_DefaultBuffer), Source, 32); /*0x46ce55*/
    v5 = 0; /*0x46ce5f*/
    if ( dword_A83D08 <= 0 ) /*0x46ce63*/
      goto LABEL_7; /*0x46ce63*/
    while ( _strcmpi((char *)(*((unsigned int *)dword_A83CFC + v5) + 36), Source) ) /*0x46ce81*/
    {
      if ( ++v5 >= dword_A83D08 ) /*0x46ce8b*/
        goto LABEL_7; /*0x46ce8b*/
    }
    if ( v5 == -1 ) /*0x46ce91*/
    {
LABEL_7:
      v6 = (int)(__2_YAPAXI_Z(0x3A0u)); /*0x46ce97*/
      if ( v6 ) /*0x46cea8*/
      {
        ((AbstractTypeClass *)((int *)v6))->Constructor(Source); /*0x46ceb5*/
        *(unsigned int *)(v6 + 152) = -1; /*0x46ceba*/
        *(unsigned int *)(v6 + 668) = -1; /*0x46cec0*/
        *(unsigned int *)v6 = (unsigned int)(&vt_CampaignClass); /*0x46cec6*/
        *(unsigned int *)(v6 + 4) = (unsigned int)(&vt_CampaignClass); /*0x46cecc*/
        *(unsigned int *)(v6 + 8) = (unsigned int)(&vt_CampaignClass); /*0x46ced3*/
        *(unsigned int *)(v6 + 12) = (unsigned int)(&vt_CampaignClass); /*0x46ceda*/
        if ( dword_A83D08 < dword_A83D00 /*0x46cf18*/
          || (byte_A83D05 || !dword_A83D00)
          && dword_A83D0C > 0
          && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_A83CF8 + 8))(
               &dword_A83CF8,
               dword_A83D00 + dword_A83D0C,
               0) )
        {
          v7 = dword_A83D08++; /*0x46cf25*/
          *((unsigned int *)dword_A83CFC + v7) = v6; /*0x46cf34*/
        }
        *(unsigned char *)(v6 + 156) = 0; /*0x46cf43*/
        wcscpy((wchar_t *)(v6 + 672),(const wchar_t *)(&g_TypeClass_DefaultString)); /*0x46cf4a*/
      }
      else
      {
        v6 = 0; /*0x46cf54*/
      }
    }
    else
    {
      v6 = *((unsigned int *)dword_A83CFC + v5); /*0x46cf5d*/
    }
    result = (*(int (**)(int, INIClass *))(*(unsigned int *)v6 + 100))(v6, (INIClass *)this); /*0x46cf65*/
  }
  return result; /*0x46cf75*/

}
}
// 0x49C5A0
namespace gamemd {
AbstractClass * * CampaignClass::SaveProgress()
{

  int *p_referenceCount; // ebx
  int v3; // esi
  int v5; // esi
  char *v6; // edi
  int v7; // esi
  int v8; // eax
  char v9; // al
  uint8_t v10; // al
  char v11; // al
  char v12; // al
  char *v13; // edi
  int v14; // esi
  char i; // al
  int v16; // esi
  int v17; // eax
  char v18; // al
  int j; // esi
  int v20; // ecx
  void *PlayerSide; // eax
  int PlayerColor; // eax
  int v23; // esi
  char *v24; // eax
  void *v25; // eax
  int v26; // eax
  int v27; // [esp+10h] [ebp-1B8h]
  CCINIClass v28; // [esp+14h] [ebp-1B4h] BYREF
  char Block[100]; // [esp+6Ch] [ebp-15Ch] BYREF
  CCFileClass v30; // [esp+D0h] [ebp-F8h] BYREF
  char v31[12]; // [esp+128h] [ebp-A0h] BYREF
  int v32; // [esp+134h] [ebp-94h]
  CCFileClass v33; // [esp+13Ch] [ebp-8Ch] BYREF
  char v34[12]; // [esp+194h] [ebp-34h] BYREF
  int v35; // [esp+1A0h] [ebp-28h]
  char Buffer[32]; // [esp+1A8h] [ebp-20h] BYREF

  if ( !LOBYTE((&this->scenario)[17]) ) /*0x49c5ac*/
    return 0; /*0x49c5ac*/
  if ( !LOBYTE(this->AbstractClass) ) /*0x49c5b7*/
    return 0; /*0x49c5b7*/
  p_referenceCount = (int *)(&((unsigned int *)this)[0]); /*0x49c5c4*/
  if ( !LOBYTE(((unsigned int *)this)[0]) ) /*0x49c5c1*/
    return 0; /*0x49c5c1*/
  v3 = (&this->scenario)[7]; /*0x49c5d4*/
  if ( !LOBYTE(g_DDrawSurfaceManager.scenario[14]) ) /*0x49c5d9*/
    ((CampaignClass*)&g_DDrawSurfaceManager)->LoadFromINI(); /*0x49c5e0*/
  if ( v3 < 0 || v3 >= g_DDrawSurfaceManager.scenario[13] ) /*0x49c5f5*/
    return 0; /*0x49cae5*/
  v27 = g_DDrawSurfaceManager.scenario[12] + 76 * v3; /*0x49c60d*/
  if ( (&this->scenario)[6] == (&this->scenario)[4] ) /*0x49c616*/
    return (gamemd::AbstractClass **)(1); /*0x49c61b*/
  ((CCFileClass*)&v33)->Construct((char *)(void *)(g_Str_File_coopsave_ini)); /*0x49c631*/
  *((unsigned int *)((char *)&v28 + 0)) = 0; /*0x49c63a*/
  *((unsigned int *)((char *)&v28 + 1)) = 0; /*0x49c63e*/
  ((INISectionList*)(INISectionList *)(unsigned int *)((char *)&v28 + 2))->Constructor(); /*0x49c642*/
  Node::Init((Node *)&(unsigned int *)((char *)&v28 + 8)); /*0x49c64b*/
  ((unsigned int *)&v28)[0] = 0; /*0x49c65e*/
  v28.ownsFile = 0; /*0x49c662*/
  *(unsigned int *)v28.INIClass = (unsigned int)(&CCINIClass_Vtable); /*0x49c667*/
  ((CCINIClass *)((int)(&v28)))->Load((int)&v33, 0, 0); /*0x49c66f*/
  CCFileClass::Reset(&v33); /*0x49c67b*/
  v5 = 0; /*0x49c683*/
  v6 = (char *)this; /*0x49c687*/
  if ( LOBYTE(this->AbstractClass) )
  {
    do
    {
      if ( v5 >= 1021 ) /*0x49c695*/
        break; /*0x49c695*/
      if ( isalnum(*v6) )
      {
        (&g_IsWindowed)[v5] = *v6; /*0x49c703*/
      }
      else
      {
        (&g_IsWindowed)[v5] = 61; /*0x49c6a7*/
        v7 = v5 + 1; /*0x49c6ae*/
        v8 = *v6 >> 4; /*0x49c6b2*/
        if ( (unsigned int)v8 >= 0x10 )
          v9 = 0; /*0x49c6c9*/
        else
          v9 = v8 >= 10 ? v8 + 55 : v8 + 48;
        (&g_IsWindowed)[v7] = v9; /*0x49c6cb*/
        v5 = v7 + 1; /*0x49c6d3*/
        v10 = *v6 & 0xF; /*0x49c6d4*/
        if ( v10 > 0xFu )
        {
          (&g_IsWindowed)[v5] = 0; /*0x49c6f9*/
        }
        else
        {
          v11 = (*v6 & 0xFu) >= 0xA ? v10 + 55 : v10 + 48;
          (&g_IsWindowed)[v5] = v11; /*0x49c6e5*/
        }
      }
      v12 = v6[1]; /*0x49c709*/
      ++v5; /*0x49c70c*/
      ++v6; /*0x49c70d*/
    }
    while ( v12 );
  }
  (&g_IsWindowed)[v5] = 0; /*0x49c720*/
  strcpy(Block,(const char *)(g_IsWindowed)); /*0x49c73a*/
  v13 = (char *)&((unsigned int *)this)[0]; /*0x49c743*/
  v14 = 0; /*0x49c745*/
  for ( i = *(unsigned char *)p_referenceCount; i; ++v13 )
  {
    if ( v14 >= 1021 ) /*0x49c753*/
      break; /*0x49c753*/
    if ( isalnum(i) )
    {
      (&g_IsWindowed)[v14] = *v13; /*0x49c7a4*/
    }
    else
    {
      (&g_IsWindowed)[v14] = 61; /*0x49c765*/
      v16 = v14 + 1; /*0x49c76c*/
      v17 = *v13 >> 4; /*0x49c770*/
      if ( (unsigned int)v17 >= 0x10 )
        v18 = 0; /*0x49c787*/
      else
        v18 = v17 >= 10 ? v17 + 55 : v17 + 48;
      (&g_IsWindowed)[v16] = v18; /*0x49c789*/
      v14 = v16 + 1; /*0x49c794*/
      (&g_IsWindowed)[v14] = EncodeDigitHex(*v13 & 0xF); /*0x49c79a*/
    }
    i = v13[1]; /*0x49c7aa*/
    ++v14; /*0x49c7ad*/
  }
  (&g_IsWindowed)[v14] = 0; /*0x49c7bd*/
  strcat(Block,(const char *)(g_IsWindowed)); /*0x49c7df*/
  CCFileClass::Construct3((int)&v30); /*0x49c7ef*/
  (*(void (**)(CCFileClass *, char *))(*(unsigned int *)v30.CDFileClass + 8))(&v30, (char *)g_Str_File_coopsave_ini); /*0x49c807*/
  (*(void (**)(CCFileClass *, int))(*(unsigned int *)v30.CDFileClass + 28))(&v30, 2); /*0x49c81a*/
  INIClass::ClearSection((int *)v28.INIClass, (int)Block, 0); /*0x49c828*/
  ((INIClass *)(v28.INIClass))->SetInt((uint8_t *)Block, g_INI_Key_CurrentMap, (&this->scenario)[4], 0); /*0x49c841*/
  ((INIClass *)(v28.INIClass))->SetInt((uint8_t *)Block, aCampaigntype, (&this->scenario)[7], 0); /*0x49c85a*/
  for ( j = 0; /*0x49c863*/
        j < *(char *)(v27 + 8);
        ((INIClass *)v28.INIClass)->SetString((uint8_t *)Block, Buffer, *(char **)((&this->scenario)[5] + 4 * j++)) )
  {
    sprintf(Buffer, "Map%d", j + 1); /*0x49c87d*/
  }
  v20 = dword_A8DA84; /*0x49c8ac*/
  if ( dword_A8DA84 ) /*0x49c8b4*/
  {
    PlayerSide = (void *)((SessionClass *)((int *)*dword_A8DA78))->GetPlayerSide(); /*0x49c8be*/
    INIClass::SetHouseName(v28.INIClass, (uint8_t *)Block, aHouse1, PlayerSide); /*0x49c8d2*/
    PlayerColor = ((SessionClass *)((SessionClass *)*dword_A8DA78))->GetPlayerColor(); /*0x49c8e1*/
    ((INIClass *)(v28.INIClass))->SetInt((uint8_t *)Block,(char *)(aColor1), PlayerColor, 0); /*0x49c8f5*/
    v20 = dword_A8DA84; /*0x49c8fa*/
  }
  v23 = 1; /*0x49c900*/
  if ( v20 > 1 ) /*0x49c907*/
  {
    v24 = &stru_A8B250.__pad_0[80]; /*0x49c909*/
    while ( *(unsigned int *)v24 != -1 ) /*0x49c911*/
    {
      ++v23; /*0x49c913*/
      v24 += 4; /*0x49c914*/
      if ( v23 >= v20 ) /*0x49c919*/
        goto LABEL_47; /*0x49c919*/
    }
    v25 = (void *)((SessionClass *)((int *)(&dword_A8DA78)[v23]))->GetPlayerSide(); /*0x49c925*/
    INIClass::SetHouseName(v28.INIClass, (uint8_t *)Block, aHouse2, v25); /*0x49c939*/
    v26 = ((SessionClass *)((SessionClass *)(&dword_A8DA78)[v23]))->GetPlayerColor(); /*0x49c949*/
    ((INIClass *)(v28.INIClass))->SetInt((uint8_t *)Block,(char *)(aColor2), v26, 0); /*0x49c95d*/
  }
LABEL_47:
  ((INIClass *)(v28.INIClass))->SetInt((uint8_t *)Block, g_INI_Key_Time, (&this->scenario)[16], 0); /*0x49c962*/
  ((INIClass *)(v28.INIClass))->SetInt((uint8_t *)Block, aKills1, (&this->scenario)[8], 0); /*0x49c98f*/
  ((INIClass *)(v28.INIClass))->SetInt((uint8_t *)Block, aKills2, (&this->scenario)[9], 0); /*0x49c9a8*/
  ((INIClass *)(v28.INIClass))->SetInt((uint8_t *)Block, aBuilt1, (&this->scenario)[10], 0); /*0x49c9c1*/
  ((INIClass *)(v28.INIClass))->SetInt((uint8_t *)Block, aBuilt2, (&this->scenario)[11], 0); /*0x49c9da*/
  ((INIClass *)(v28.INIClass))->SetInt((uint8_t *)Block, aLost1, (&this->scenario)[12], 0); /*0x49c9f3*/
  ((INIClass *)(v28.INIClass))->SetInt((uint8_t *)Block, aLost2, (&this->scenario)[13], 0); /*0x49ca0c*/
  ((INIClass *)(v28.INIClass))->SetInt((uint8_t *)Block, aScore1, (&this->scenario)[14], 0); /*0x49ca25*/
  ((INIClass *)(v28.INIClass))->SetInt((uint8_t *)Block, aScore2, (&this->scenario)[15], 0); /*0x49ca3e*/
  INIClass::WriteDigest((INIClass *)&v28, (int)&v30, 0); /*0x49ca51*/
  CCFileClass::Reset(&v30); /*0x49ca5d*/
  *(unsigned int *)v30.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x49ca67*/
  v32 = 0; /*0x49ca77*/
  ((Vector *)((int)v31))->Clear(); /*0x49ca7e*/
  *(unsigned int *)v30.CDFileClass = (unsigned int)(&off_7E1668); /*0x49ca8f*/
  ((BufferIOFileClass *)((BufferIOFileClass *)&v30))->Dtor(); /*0x49ca96*/
  ((HashTable *)((INIClass *)&v28))->DestroyHashTableINIClass(); /*0x49ca9f*/
  *(unsigned int *)v33.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x49caab*/
  v35 = 0; /*0x49cab2*/
  ((Vector *)((int)v34))->Clear(); /*0x49cab9*/
  *(unsigned int *)v33.CDFileClass = (unsigned int)(&off_7E1668); /*0x49cac5*/
  ((BufferIOFileClass *)((BufferIOFileClass *)&v33))->Dtor(); /*0x49cacc*/
  LOBYTE((&this->scenario)[17]) = (gamemd::AbstractClass **)(1); /*0x49cad2*/
  return (gamemd::AbstractClass **)(1); /*0x49c618*/

}
}
// 0x46CF80
namespace gamemd {
int CampaignClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x46cf86*/
    return -2147467261; /*0x46cf88*/
  *a2 = -2439096; /*0x46cf96*/
  a2[1] = 298980631; /*0x46cf9e*/
  a2[2] = 1610642817; /*0x46cfa7*/
  a2[3] = unk_7E990C; /*0x46cfb0*/
  return 0; /*0x46cf8d*/

}
} // namespace gamemd

// 0x46D000
namespace gamemd {
int CampaignClass::Write(AbstractTypeClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((gamemd::AbstractClass *)(aP0),(gamemd::AbstractClass *)(aP1)); /*0x46d00b*/
  if ( result >= 0 ) /*0x46d012*/
  {
    if ( aP0 ) /*0x46d016*/
    {
      ((AbstractTypeClass*)(int)aP0)->Init((int)&aP1); /*0x46d01f*/
      aP0->vtable1 = (void *)((unsigned int)(&vt_CampaignClass)); /*0x46d024*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d02a*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d031*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d038*/
    }
    return 0; /*0x46d03f*/
  }
  return result; /*0x46d041*/

}
} // namespace gamemd

// 0x46D050
namespace gamemd {
int CampaignClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1), (gamemd::ObjectTypeClass *)aP2); /*0x46d05f*/
  if ( result >= 0 ) /*0x46d066*/
    return 0; /*0x46d068*/
  return result; /*0x46d06a*/

}
} // namespace gamemd

// 0x46D070
namespace gamemd {
int CampaignClass::StubReturn928()
{

  return 928; /*0x46d075*/

}
} // namespace gamemd

// 0x46D080
namespace gamemd {
int CampaignClass::StubReturn10()
{

  return 10; /*0x46d085*/

}
} // namespace gamemd

// 0x46D090
namespace gamemd {
void ** CampaignClass::DTOR(char a2)
{

  int v3; // eax
  CampaignClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->vtable1 = &vt_CampaignClass; /*0x46d096*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d09c*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d0a3*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_CampaignClass); /*0x46d0aa*/
  AbstractClass::AnnounceExpiredPointer((gamemd::AbstractClass *)(this), 1); /*0x46d0b1*/
  v5 = (gamemd::CampaignClass *)(this); /*0x46d0c6*/
  v3 = (*(int (**)(unsigned int *, CampaignClass **))(dword_A83CF8 + 16))(&dword_A83CF8, &v5); /*0x46d0ca*/
  if ( v3 != -1 && v3 < dword_A83D08 && v3 < --dword_A83D08 ) /*0x46d0e5*/
  {
    do /*0x46d0fd*/
    {
      ++v3; /*0x46d0ed*/
      *((unsigned int *)dword_A83CFC + v3 - 1) = *((unsigned int *)dword_A83CFC + v3); /*0x46d0f1*/
    }
    while ( v3 < dword_A83D08 ); /*0x46d0fd*/
  }
  ((AbstractTypeClass *)((AbstractTypeClass *)this))->Dtor(); /*0x46d101*/
  if ( (a2 & 1) != 0 ) /*0x46d10b*/
    __3_YAXPAX_Z(this); /*0x46d10e*/
  return this; /*0x46d118*/

}
} // namespace gamemd
