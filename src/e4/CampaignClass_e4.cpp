// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
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

// 0x46CB60
namespace gamemd {
CampaignClass::CampaignClass(ObjectClass * aP1)
{
  CampaignClass * v3;

  AbstractTypeClass::Constructor(aP1); /*0x46cb68*/
  *(void **)this = (void*)&CampaignClass_vftable; /*0x46cb70*/
  this->q098 = -1; /*0x46cb76*/
  this->q29C = -1; /*0x46cb7c*/
  this->vtable2 = (void*)&CampaignClass_vftable; /*0x46cb82*/
  this->vtable3 = (void*)&CampaignClass_vftable; /*0x46cb89*/
  this->vtable4 = (void*)&CampaignClass_vftable; /*0x46cb90*/
  if ( g_UnitTypeInitState < dword_A83D00 /*0x46cbcc*/
    || (byte_A83D05 || !dword_A83D00)
    && dword_A83D0C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83CF8 + 8))(
         &dword_A83CF8,
         dword_A83D00 + dword_A83D0C,
         0) )
  {
    v3 = g_UnitTypeInitState++; /*0x46cbd9*/
    *((_DWORD *)g_CampaignTypeArray + v3) = this; /*0x46cbe8*/
  }
  this->u32_9C = 0; /*0x46cbf7*/
  wcscpy((wchar_t *)(&this->u32_10C2), &g_TypeClass_DefaultString); /*0x46cbfe*/
  return this; /*0x46cc08*/
}
}
// 0x46CE10
namespace gamemd {
int CampaignClass::LoadFromINIList()
{
  int result; // eax
  int v3; // ebp
  unsigned __int8 *StringByIndex; // eax
  int v5; // esi
  void *v6; // esi
  void * v7;
  int i; // [esp+8h] [ebp-24h]
  char Source[32]; // [esp+Ch] [ebp-20h] BYREF

  result = INIClass::GetKeyCount(this, (unsigned __int8 *)g_INI_Key_Battles); /*0x46ce1c*/
  v3 = 0; /*0x46ce21*/
  for ( i = result; v3 < i; ++v3 ) /*0x46ce29*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this, (unsigned __int8 *)g_INI_Key_Battles, v3); /*0x46ce48*/
    INIClass::GetString( /*0x46ce55*/
      (unsigned __int8 ***)this,
      (unsigned __int8 *)g_INI_Key_Battles,
      StringByIndex,
      &g_INI_DefaultBuffer,
      Source,
      32);
    v5 = 0; /*0x46ce5f*/
    if ( g_UnitTypeInitState <= 0 ) /*0x46ce63*/
      goto LABEL_7; /*0x46ce63*/
    while ( _strcmpi((const void *)(*((_DWORD *)g_CampaignTypeArray + v5) + 36), Source) ) /*0x46ce81*/
    {
      if ( ++v5 >= g_UnitTypeInitState ) /*0x46ce8b*/
        goto LABEL_7; /*0x46ce8b*/
    }
    if ( v5 == -1 ) /*0x46ce91*/
    {
  LABEL_7:
      v6 = RA2_OPNEW(0x3A0u); /*0x46ce97*/
      if ( v6 ) /*0x46cea8*/
      {
        AbstractTypeClass::Constructor((int)v6, Source); /*0x46ceb5*/
        *((_DWORD *)v6 + 38) = -1; /*0x46ceba*/
        *((_DWORD *)v6 + 167) = -1; /*0x46cec0*/
        *(void **)v6 = (void*)&CampaignClass_vftable; /*0x46cec6*/
        *((_DWORD *)v6 + 1) = (void*)&CampaignClass_vftable; /*0x46cecc*/
        *((_DWORD *)v6 + 2) = (void*)&CampaignClass_vftable; /*0x46ced3*/
        *((_DWORD *)v6 + 3) = (void*)&CampaignClass_vftable; /*0x46ceda*/
        if ( g_UnitTypeInitState < dword_A83D00 /*0x46cf18*/
          || (byte_A83D05 || !dword_A83D00)
          && dword_A83D0C > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83CF8 + 8))(
               &dword_A83CF8,
               dword_A83D00 + dword_A83D0C,
               0) )
        {
          v7 = g_UnitTypeInitState++; /*0x46cf25*/
          *((_DWORD *)g_CampaignTypeArray + v7) = v6; /*0x46cf34*/
        }
        *((_BYTE *)v6 + 156) = 0; /*0x46cf43*/
        wcscpy((wchar_t *)v6 + 336, &g_TypeClass_DefaultString); /*0x46cf4a*/
      }
      else
      {
        v6 = 0; /*0x46cf54*/
      }
    }
    else
    {
      v6 = (void *)*((_DWORD *)g_CampaignTypeArray + v5); /*0x46cf5d*/
    }
    result = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)v6 + 100))(v6, this); /*0x46cf65*/
  }
  return result; /*0x46cf75*/
}
}
// 0x49C5A0
namespace gamemd {
AbstractClass * * CampaignClass::SaveProgress()
{
  char *v2; // ebx
  int v3; // esi
  int v5; // esi
  int v7; // esi
  int v8; // eax
  char v9; // al
  unsigned __int8 v10; // al
  char v11; // al
  void * v12;
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
  _DWORD *v24; // eax
  void *v25; // eax
  int v26; // eax
  int v27; // [esp+10h] [ebp-1B8h]
  void *v28[3]; // [esp+14h] [ebp-1B4h] BYREF
  int v29[7]; // [esp+20h] [ebp-1A8h] BYREF
  _DWORD v30[6]; // [esp+3Ch] [ebp-18Ch] BYREF
  char v31; // [esp+54h] [ebp-174h]
  char Block[100]; // [esp+6Ch] [ebp-15Ch] BYREF
  _DWORD v33[22]; // [esp+D0h] [ebp-F8h] BYREF
  char v34[12]; // [esp+128h] [ebp-A0h] BYREF
  int v35; // [esp+134h] [ebp-94h]
  _DWORD v36[22]; // [esp+13Ch] [ebp-8Ch] BYREF
  char v37[12]; // [esp+194h] [ebp-34h] BYREF
  int v38; // [esp+1A0h] [ebp-28h]
  char Buffer[32]; // [esp+1A8h] [ebp-20h] BYREF

  if ( !*(&this->scenario8) ) /*0x49c5ac*/
    return 0; /*0x49c5ac*/
  if ( !*this ) /*0x49c5b7*/
    return 0; /*0x49c5b7*/
  v2 = &this->q070; /*0x49c5c4*/
  if ( !*(&this->vtable38) ) /*0x49c5c1*/
    return 0; /*0x49c5c1*/
  v3 = this->q044; /*0x49c5d4*/
  if ( !byte_89F578 ) /*0x49c5d9*/
    CampaignClass::LoadFromINI((int)&g_DDrawSurfaceManager); /*0x49c5e0*/
  if ( v3 < 0 || v3 >= dword_89F574 ) /*0x49c5f5*/
    return 0; /*0x49cae5*/
  v27 = dword_89F570 + 76 * v3; /*0x49c60d*/
  if ( this->q040 == this->u32_38 ) /*0x49c616*/
    return 1; /*0x49c61b*/
  CCFileClass::Construct(v36, g_Str_File_coopsave_ini); /*0x49c631*/
  v28[1] = 0; /*0x49c63a*/
  v28[2] = 0; /*0x49c63e*/
  INISectionList::Constructor(v29); /*0x49c642*/
  Node::Init(v30); /*0x49c64b*/
  v30[5] = 0; /*0x49c65e*/
  v31 = 0; /*0x49c662*/
  v28[0] = &CCINIClass_Vtable; /*0x49c667*/
  CCINIClass::Load(v28, (int)v36, 0, 0); /*0x49c66f*/
  CCFileClass::Reset(v36); /*0x49c67b*/
  v5 = 0; /*0x49c683*/
  if ()
  {
    do
    {
      if ( v5 >= 1021 ) /*0x49c695*/
        break; /*0x49c695*/
      if ( isalnum(*this) )
      {
        g_IsWindowed[v5] = *this; /*0x49c703*/
      }
      else
      {
        g_IsWindowed[v5] = 61; /*0x49c6a7*/
        v7 = v5 + 1; /*0x49c6ae*/
        v8 = *this >> 4; /*0x49c6b2*/
        if ( (unsigned int)v8 >= 0x10 )
          v9 = 0; /*0x49c6c9*/
        else
          v9 = v8 >= 10 ? v8 + 55 : v8 + 48;
        g_IsWindowed[v7] = v9; /*0x49c6cb*/
        v5 = v7 + 1; /*0x49c6d3*/
        v10 = *this & 0xF; /*0x49c6d4*/
        if ( v10 > 0xFu )
        {
          g_IsWindowed[v5] = 0; /*0x49c6f9*/
        }
        else
        {
          v11 = (*this & 0xFu) >= 0xA ? v10 + 55 : v10 + 48;
          g_IsWindowed[v5] = v11; /*0x49c6e5*/
        }
      }
      v12 = this->vtable2; /*0x49c709*/
      ++v5; /*0x49c70c*/
      ++this; /*0x49c70d*/
    }
    while ( v12 );
  }
  g_IsWindowed[v5] = 0; /*0x49c720*/
  strcpy(Block, g_IsWindowed); /*0x49c73a*/
  v13 = &this->q070; /*0x49c743*/
  v14 = 0; /*0x49c745*/
  for ( i = *v2; i; ++v13 )
  {
    if ( v14 >= 1021 ) /*0x49c753*/
      break; /*0x49c753*/
    if ( isalnum(i) )
    {
      g_IsWindowed[v14] = *v13; /*0x49c7a4*/
    }
    else
    {
      g_IsWindowed[v14] = 61; /*0x49c765*/
      v16 = v14 + 1; /*0x49c76c*/
      v17 = *v13 >> 4; /*0x49c770*/
      if ( (unsigned int)v17 >= 0x10 )
        v18 = 0; /*0x49c787*/
      else
        v18 = v17 >= 10 ? v17 + 55 : v17 + 48;
      g_IsWindowed[v16] = v18; /*0x49c789*/
      v14 = v16 + 1; /*0x49c794*/
      g_IsWindowed[v14] = EncodeDigitHex(*v13 & 0xF); /*0x49c79a*/
    }
    i = v13[1]; /*0x49c7aa*/
    ++v14; /*0x49c7ad*/
  }
  g_IsWindowed[v14] = 0; /*0x49c7bd*/
  strcat(Block, g_IsWindowed); /*0x49c7df*/
  CCFileClass::Construct3((int)v33); /*0x49c7ef*/
  (*(void (__thiscall **)(_DWORD *, char *))(v33[0] + 8))(v33, g_Str_File_coopsave_ini); /*0x49c807*/
  (*(void (__thiscall **)(_DWORD *, int))(v33[0] + 28))(v33, 2); /*0x49c81a*/
  INIClass::ClearSection((int)v28, (int)Block, 0); /*0x49c828*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, g_INI_Key_CurrentMap, this->u32_38, 0); /*0x49c841*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, aCampaigntype, this->q044, 0); /*0x49c85a*/
  for ( j = 0; /*0x49c863*/
        j < *(char *)(v27 + 8);
        INIClass::SetString((char *)v28, (unsigned __int8 *)Block, Buffer, *(char **)(this->u32_3C + 4 * j++)) )
  {
    sprintf(Buffer, "Map%d", j + 1); /*0x49c87d*/
  }
  v20 = Game_PlayerCount; /*0x49c8ac*/
  if ( Game_PlayerCount ) /*0x49c8b4*/
  {
    PlayerSide = (void *)SessionClass::GetPlayerSide(*(_DWORD *)Game_PlayerInfoArray); /*0x49c8be*/
    INIClass::SetHouseName((char *)v28, (unsigned __int8 *)Block, aHouse1, PlayerSide); /*0x49c8d2*/
    PlayerColor = SessionClass::GetPlayerColor(*(_DWORD *)Game_PlayerInfoArray); /*0x49c8e1*/
    INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, aColor1, PlayerColor, 0); /*0x49c8f5*/
    v20 = Game_PlayerCount; /*0x49c8fa*/
  }
  v23 = 1; /*0x49c900*/
  if ( v20 > 1 ) /*0x49c907*/
  {
    v24 = &unk_A8B2A0; /*0x49c909*/
    while ( *v24 != -1 ) /*0x49c911*/
    {
      ++v23; /*0x49c913*/
      ++v24; /*0x49c914*/
      if ( v23 >= v20 ) /*0x49c919*/
        goto LABEL_47; /*0x49c919*/
    }
    v25 = (void *)SessionClass::GetPlayerSide(*(_DWORD *)(Game_PlayerInfoArray + 4 * v23)); /*0x49c925*/
    INIClass::SetHouseName((char *)v28, (unsigned __int8 *)Block, aHouse2, v25); /*0x49c939*/
    v26 = SessionClass::GetPlayerColor(*(_DWORD *)(Game_PlayerInfoArray + 4 * v23)); /*0x49c949*/
    INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, aColor2, v26, 0); /*0x49c95d*/
  }
  LABEL_47:
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, g_INI_Key_Time, this->q068, 0); /*0x49c962*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, aKills1, this->q048, 0); /*0x49c98f*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, aKills2, this->q04C, 0); /*0x49c9a8*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, aBuilt1, this->u32_50, 0); /*0x49c9c1*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, aBuilt2, this->q054, 0); /*0x49c9da*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, aLost1, this->q058, 0); /*0x49c9f3*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, aLost2, this->q05C, 0); /*0x49ca0c*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, aScore1, this->q060, 0); /*0x49ca25*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, aScore2, this->u32_64, 0); /*0x49ca3e*/
  INIClass::WriteDigest(v28, (int)v33, 0); /*0x49ca51*/
  CCFileClass::Reset(v33); /*0x49ca5d*/
  v33[0] = (void*)&CCFileClass_vftable; /*0x49ca67*/
  v35 = 0; /*0x49ca77*/
  Vector::Clear((int)v34); /*0x49ca7e*/
  v33[0] = &off_7E1668; /*0x49ca8f*/
  BufferIOFileClass::Dtor(v33); /*0x49ca96*/
  HashTable::DestroyHashTableINIClass(v28); /*0x49ca9f*/
  v36[0] = (void*)&CCFileClass_vftable; /*0x49caab*/
  v38 = 0; /*0x49cab2*/
  Vector::Clear((int)v37); /*0x49cab9*/
  v36[0] = &off_7E1668; /*0x49cac5*/
  BufferIOFileClass::Dtor(v36); /*0x49cacc*/
  *(&this->scenario8) = 1; /*0x49cad2*/
  return 1; /*0x49c618*/
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
  a2[3] = -1252326136; /*0x46cfb0*/
  return 0; /*0x46cf8d*/
}
} // namespace gamemd

// 0x46D000
namespace gamemd {
int CampaignClass::Write(AbstractTypeClass * aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x46d00b*/
  if ( result >= 0 ) /*0x46d012*/
  {
    if ( aP0 ) /*0x46d016*/
    {
      AbstractTypeClass::Init((int)aP0, (int)&aP1); /*0x46d01f*/
      *aP0 = (void*)&CampaignClass_vftable; /*0x46d024*/
      aP0[1] = (void*)&CampaignClass_vftable; /*0x46d02a*/
      aP0[2] = (void*)&CampaignClass_vftable; /*0x46d031*/
      aP0[3] = (void*)&CampaignClass_vftable; /*0x46d038*/
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

  result = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x46d05f*/
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
CampaignClass * CampaignClass::DTOR(char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *this = (void*)&CampaignClass_vftable; /*0x46d096*/
  *(this + 1) = (void*)&CampaignClass_vftable; /*0x46d09c*/
  *(this + 2) = (void*)&CampaignClass_vftable; /*0x46d0a3*/
  *(this + 3) = (void*)&CampaignClass_vftable; /*0x46d0aa*/
  AbstractClass::AnnounceExpiredPointer(1); /*0x46d0b1*/
  v5 = this; /*0x46d0c6*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_A83CF8 + 16))(&dword_A83CF8, &v5); /*0x46d0ca*/
  if ( v3 != -1 && v3 < g_UnitTypeInitState && v3 < --g_UnitTypeInitState ) /*0x46d0e5*/
  {
    do /*0x46d0fd*/
    {
      ++v3; /*0x46d0ed*/
      *((_DWORD *)g_CampaignTypeArray + v3 - 1) = *((_DWORD *)g_CampaignTypeArray + v3); /*0x46d0f1*/
    }
    while ( v3 < g_UnitTypeInitState ); /*0x46d0fd*/
  }
  AbstractTypeClass::Dtor(); /*0x46d101*/
  if ( (a2 & 1) != 0 ) /*0x46d10b*/
    RA2_OPDEL(); /*0x46d10e*/
  return this; /*0x46d118*/
}
} // namespace gamemd
