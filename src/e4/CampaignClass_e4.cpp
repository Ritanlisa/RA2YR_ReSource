// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x46CB60
namespace gamemd {
int CampaignClass::CampaignClass(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CampaignClass::CampaignClass(int this, ObjectClass *aP1)
{
  int v3; // eax

  AbstractTypeClass::Constructor(this, (AbstractClass *)aP1); /*0x46cb68*/
  *(_DWORD *)this = &CampaignClass::`vftable'; /*0x46cb70*/
  this->q098 = -1; /*0x46cb76*/
  this->q29C = -1; /*0x46cb7c*/
  this->vtable1 = &CampaignClass::`vftable'; /*0x46cb82*/
  this->vtable2 = &CampaignClass::`vftable'; /*0x46cb89*/
  this->vtable3 = &vt_CampaignClass; /*0x46cb90*/
  if ( g_UnitTypeInitState < dword_A83D00 /*0x46cbcc*/
    || (byte_A83D05 || !dword_A83D00)
    && dword_A83D0C > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_A83CF8->field_8)(
         &dword_A83CF8,
         dword_A83D00 + dword_A83D0C,
         0) )
  {
    v3 = g_UnitTypeInitState++; /*0x46cbd9*/
    *(_DWORD *)&g_CampaignTypeArray->__pad_0[4 * v3] = this; /*0x46cbe8*/
  }
  this->q09C = 0; /*0x46cbf7*/
  wcscpy((wchar_t *)(this + 672), (const wchar_t *)&DataGlobal_87F8E4[32336]); /*0x46cbfe*/
  return this; /*0x46cc08*/
}
}
} // namespace gamemd

// 0x46CE10
namespace gamemd {
int CampaignClass::LoadFromINIList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CampaignClass::LoadFromINIList(char *this)
{
  int result; // eax
  CCINIClass *v3; // ebp
  unsigned __int8 *StringByIndex; // eax
  int v5; // esi
  INIClass *v6; // esi
  int v7; // eax
  int i; // [esp+8h] [ebp-24h]
  _BYTE Source[32]; // [esp+Ch] [ebp-20h] BYREF

  result = INIClass::GetKeyCount(this, (INIClass *)&stru_81B1A4.needsSave_flag); /*0x46ce1c*/
  v3 = 0; /*0x46ce21*/
  for ( i = result; (int)v3 < i; v3 = (CCINIClass *)((char *)v3 + 1) ) /*0x46ce29*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this, (CCINIClass *)&stru_81B1A4.needsSave_flag, v3); /*0x46ce48*/
    INIClass::GetString( /*0x46ce55*/
      (unsigned __int8 ***)this,
      (INIClass *)&stru_81B1A4.needsSave_flag,
      StringByIndex,
      (INIClass *)&DataGlobal_87F8E4[42624],
      (INIClass *)Source,
      32);
    v5 = 0; /*0x46ce5f*/
    if ( g_UnitTypeInitState <= 0 ) /*0x46ce63*/
      goto LABEL_7; /*0x46ce63*/
    while ( _strcmpi((char *)(*(_DWORD *)&g_CampaignTypeArray->__pad_0[4 * v5] + 36), Source) ) /*0x46ce81*/
    {
      if ( ++v5 >= g_UnitTypeInitState ) /*0x46ce8b*/
        goto LABEL_7; /*0x46ce8b*/
    }
    if ( v5 == -1 ) /*0x46ce91*/
    {
LABEL_7:
      v6 = (INIClass *)__2_YAPAXI_Z(0x3A0u); /*0x46ce97*/
      if ( v6 ) /*0x46cea8*/
      {
        AbstractTypeClass::Constructor((int)v6, (AbstractClass *)Source); /*0x46ceb5*/
        v6[2].sectionHead[2] = -1; /*0x46ceba*/
        v6[10].sectionCount = -1; /*0x46cec0*/
        *(_DWORD *)v6->__pad_0 = &CampaignClass::`vftable'; /*0x46cec6*/
        v6->headNode[0] = (int)&CampaignClass::`vftable'; /*0x46cecc*/
        v6->headNode[1] = (int)&CampaignClass::`vftable'; /*0x46ced3*/
        v6->headNode[2] = (int)&vt_CampaignClass; /*0x46ceda*/
        if ( g_UnitTypeInitState < dword_A83D00 /*0x46cf18*/
          || (byte_A83D05 || !dword_A83D00)
          && dword_A83D0C > 0
          && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_A83CF8->field_8)(
               &dword_A83CF8,
               dword_A83D00 + dword_A83D0C,
               0) )
        {
          v7 = g_UnitTypeInitState++; /*0x46cf25*/
          *(_DWORD *)&g_CampaignTypeArray->__pad_0[4 * v7] = v6; /*0x46cf34*/
        }
        LOBYTE(v6[2].sectionCount) = 0; /*0x46cf43*/
        wcscpy((wchar_t *)v6[10].__pad_20, (const wchar_t *)&DataGlobal_87F8E4[32336]); /*0x46cf4a*/
      }
      else
      {
        v6 = 0; /*0x46cf54*/
      }
    }
    else
    {
      v6 = *(INIClass **)&g_CampaignTypeArray->__pad_0[4 * v5]; /*0x46cf5d*/
    }
    result = (*(int (__thiscall **)(INIClass *, char *))(*(_DWORD *)v6->__pad_0 + 100))(v6, this); /*0x46cf65*/
  }
  return result; /*0x46cf75*/
}
}
} // namespace gamemd

// 0x49C5A0
namespace gamemd {
char CampaignClass::SaveProgress()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall CampaignClass_SaveProgress(char *this)
{
  char *v2; // ebx
  int v3; // esi
  int v5; // esi
  char *v6; // edi
  int v7; // esi
  int v8; // eax
  char v9; // al
  unsigned __int8 v10; // al
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

  if ( !this->q06C ) /*0x49c5ac*/
    return 0; /*0x49c5ac*/
  if ( !*this ) /*0x49c5b7*/
    return 0; /*0x49c5b7*/
  v2 = this + 28; /*0x49c5c4*/
  if ( !this->referenceCount ) /*0x49c5c1*/
    return 0; /*0x49c5c1*/
  v3 = this->alignmentPadding_3; /*0x49c5d4*/
  if ( !DataGlobal_89F578 ) /*0x49c5d9*/
    CampaignClass::LoadFromINI((int)&g_DDrawSurfaceManager); /*0x49c5e0*/
  if ( v3 < 0 || v3 >= DataGlobal_89F574 ) /*0x49c5f5*/
    return 0; /*0x49cae5*/
  v27 = DataGlobal_89F570 + 76 * v3; /*0x49c60d*/
  if ( this->uniqueId == this->q038 ) /*0x49c616*/
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
  v6 = this; /*0x49c687*/
  if ( *this )
  {
    do
    {
      if ( v5 >= 1021 ) /*0x49c695*/
        break; /*0x49c695*/
      if ( isalnum(*v6) )
      {
        g_IsWindowed[v5] = *v6; /*0x49c703*/
      }
      else
      {
        g_IsWindowed[v5] = 61; /*0x49c6a7*/
        v7 = v5 + 1; /*0x49c6ae*/
        v8 = *v6 >> 4; /*0x49c6b2*/
        if ( (unsigned int)v8 >= 0x10 )
          v9 = 0; /*0x49c6c9*/
        else
          v9 = v8 >= 10 ? v8 + 55 : v8 + 48;
        g_IsWindowed[v7] = v9; /*0x49c6cb*/
        v5 = v7 + 1; /*0x49c6d3*/
        v10 = *v6 & 0xF; /*0x49c6d4*/
        if ( v10 > 0xFu )
        {
          g_IsWindowed[v5] = 0; /*0x49c6f9*/
        }
        else
        {
          v11 = (*v6 & 0xFu) >= 0xA ? v10 + 55 : v10 + 48;
          g_IsWindowed[v5] = v11; /*0x49c6e5*/
        }
      }
      v12 = v6[1]; /*0x49c709*/
      ++v5; /*0x49c70c*/
      ++v6; /*0x49c70d*/
    }
    while ( v12 );
  }
  g_IsWindowed[v5] = 0; /*0x49c720*/
  strcpy(Block, g_IsWindowed); /*0x49c73a*/
  v13 = this + 28; /*0x49c743*/
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
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, unk_81F19C, this->q038, 0); /*0x49c841*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, unk_81F184, this->alignmentPadding_3, 0); /*0x49c85a*/
  for ( j = 0; /*0x49c863*/
        j < *(char *)(v27 + 8);
        INIClass::SetString((char *)v28, (unsigned __int8 *)Block, Buffer, *(char **)(this->q03C + 4 * j++)) )
  {
    sprintf(Buffer, g_Str_Trace_Map_d, j + 1); /*0x49c87d*/
  }
  v20 = Game_PlayerCount; /*0x49c8ac*/
  if ( Game_PlayerCount ) /*0x49c8b4*/
  {
    PlayerSide = (void *)SessionClass::GetPlayerSide(*(_DWORD *)Game_PlayerInfoArray); /*0x49c8be*/
    INIClass::SetHouseName((char *)v28, (unsigned __int8 *)Block, unk_81F17C, PlayerSide); /*0x49c8d2*/
    PlayerColor = SessionClass::GetPlayerColor(*(_DWORD *)Game_PlayerInfoArray); /*0x49c8e1*/
    INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, unk_81F174, PlayerColor, 0); /*0x49c8f5*/
    v20 = Game_PlayerCount; /*0x49c8fa*/
  }
  v23 = 1; /*0x49c900*/
  if ( v20 > 1 ) /*0x49c907*/
  {
    v24 = &DataGlobal_A8B2A0; /*0x49c909*/
    while ( *v24 != -1 ) /*0x49c911*/
    {
      ++v23; /*0x49c913*/
      ++v24; /*0x49c914*/
      if ( v23 >= v20 ) /*0x49c919*/
        goto LABEL_47; /*0x49c919*/
    }
    v25 = (void *)SessionClass::GetPlayerSide(*(_DWORD *)(Game_PlayerInfoArray + 4 * v23)); /*0x49c925*/
    INIClass::SetHouseName((char *)v28, (unsigned __int8 *)Block, unk_81F16C, v25); /*0x49c939*/
    v26 = SessionClass::GetPlayerColor(*(_DWORD *)(Game_PlayerInfoArray + 4 * v23)); /*0x49c949*/
    INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, unk_81F164, v26, 0); /*0x49c95d*/
  }
LABEL_47:
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, g_INI_Key_Time, this->q01A, 0); /*0x49c962*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, unk_81F15C, this->q012, 0); /*0x49c98f*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, unk_81F154, this->q04C, 0); /*0x49c9a8*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, DataGlobal_81F14C, this->abstractFlags, 0); /*0x49c9c1*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, DataGlobal_81F144, this->q054, 0); /*0x49c9da*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, DataGlobal_81F13C, this->q058, 0); /*0x49c9f3*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, DataGlobal_81F134, this->q017, 0); /*0x49ca0c*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, DataGlobal_81F12C, this->nextArrayIndex, 0); /*0x49ca25*/
  INIClass::SetInt((char *)v28, (unsigned __int8 *)Block, DataGlobal_81F124, this->Name, 0); /*0x49ca3e*/
  INIClass::WriteDigest(v28, (int)v33, 0); /*0x49ca51*/
  CCFileClass::Reset(v33); /*0x49ca5d*/
  v33[0] = &vt_CCFileClass; /*0x49ca67*/
  v35 = 0; /*0x49ca77*/
  Vector::Clear((int)v34); /*0x49ca7e*/
  v33[0] = &off_7E1668; /*0x49ca8f*/
  BufferIOFileClass::Dtor(v33); /*0x49ca96*/
  HashTable::DestroyHashTableINIClass(v28); /*0x49ca9f*/
  v36[0] = &vt_CCFileClass; /*0x49caab*/
  v38 = 0; /*0x49cab2*/
  Vector::Clear((int)v37); /*0x49cab9*/
  v36[0] = &off_7E1668; /*0x49cac5*/
  BufferIOFileClass::Dtor(v36); /*0x49cacc*/
  this->q06C = 1; /*0x49cad2*/
  return 1; /*0x49c618*/
}
}
} // namespace gamemd

// 0x46CF80
namespace gamemd {
int CampaignClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -2439096;
  a2[1] = 298980631;
  a2[2] = 1610642817;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x46D000
namespace gamemd {
int CampaignClass::Write(AbstractTypeClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_CampaignClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_CampaignClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_CampaignClass;
    *(int *)&aP0->__pad_0[12] = &vt_CampaignClass;
    }
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x46D050
namespace gamemd {
int CampaignClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}
} // namespace gamemd

// 0x46D070
namespace gamemd {
int CampaignClass::StubReturn928()
{
return 928;
}
} // namespace gamemd

// 0x46D080
namespace gamemd {
int CampaignClass::StubReturn10()
{
return 10;
}
} // namespace gamemd

// 0x46D090
namespace gamemd {
CampaignClass * CampaignClass::DTOR(char a2)
{
{
    int v3;
    void **v5;
    *(void**)this = vt_CampaignClass;
    *(this + 1) = (unsigned int)vt_CampaignClass;
    *(this + 2) = (unsigned int)vt_CampaignClass;
    *(this + 3) = &vt_CampaignClass;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v5 = this;
    v3 = (*(int (__thiscall **)(int *, void ***))(DataGlobal_A83CF8 + 16))(&DataGlobal_A83CF8, &v5);
    if ( v3 != -1 && v3 < g_UnitTypeInitState && v3 < --g_UnitTypeInitState )
  {
    do
    {
    ++v3;
    *((int *)(g_CampaignTypeArray) + v3 - 1) = *((int *)(g_CampaignTypeArray) + v3);
    }
    while ( v3 < g_UnitTypeInitState );
  }
    AbstractTypeClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (CampaignClass *)this;
}
}
} // namespace gamemd
