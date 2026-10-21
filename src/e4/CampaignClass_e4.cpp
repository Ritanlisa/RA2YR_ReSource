// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/INISectionList_e4.hpp"
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
#include "e4/classes/NetworkLobby_e4.hpp"

// 0x46CB60
namespace gamemd {  // G42.18 ns repair
CampaignClass::CampaignClass(ObjectClass * aP1)
{


  this->AbstractTypeClass::Constructor(aP1); /*0x46cb68*/
  /* X11: ptr_0 install elided (base-interface slot, RHS g_ptr_7E49FC) */  /*0x46cb70*/
  this->scenario[28] = -1; /*0x46cb76*/
  this->description[28] = -1; /*0x46cb7c*/
  /* X11: ptr_0 install elided (implicit via CampaignClass virtuals 0x46cb82) */
  /* X11: ptr_0 install elided (implicit via CampaignClass virtuals 0x46cb89) */
  /* X11: ptr_0 install elided (implicit via CampaignClass virtuals 0x46cb90) */
  if ( dword_A83D08 < dword_A83D00 /*0x46cbcc*/
    || (byte_A83D05 || !dword_A83D00)
    && dword_A83D0C > 0
    && (*(unsigned __int8 (**)(unsigned int *, int, unsigned int))(dword_A83CF8 + 8))(
         &dword_A83CF8,
         dword_A83D00 + dword_A83D0C,
         0) )
  {
    int v3; // eax
    v3 = dword_A83D08++; /*0x46cbd9*/
    *((unsigned int *)dword_A83CFC + v3) = (unsigned int)(this); /*0x46cbe8*/
  }
  LOBYTE(this->scenario[29]) = 0; /*0x46cbf7*/
  wcscpy(this->u32_1F2C, &g_TypeClass_DefaultString); /*0x46cbfe*/
  return (int)this; /*0x46cc08*/

}
}  // G42.18 ns repair
// 0x46CE10
namespace gamemd {
int CampaignClass::LoadFromINIList(void *a1)
{

  int result; // eax
  int v3; // ebp
  unsigned __int8 *StringByIndex; // eax
  int v5; // esi
  int v6; // esi
  int v7; // eax
  int i; // [esp+8h] [ebp-24h]
  char Source[32]; // [esp+Ch] [ebp-20h] BYREF

  result = INIClass::GetKeyCount(this->ptr_0, (unsigned __int8 *)&DataGlobal_81AF8C[588]); /*0x46ce1c*/
  v3 = 0; /*0x46ce21*/
  for ( i = result; v3 < i; ++v3 ) /*0x46ce29*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x46ce48*/
                                         this->ptr_0,
                                         (unsigned __int8 *)&DataGlobal_81AF8C[588],
                                         v3);
    (this)->GetString((unsigned __int8 *)&DataGlobal_81AF8C[588], StringByIndex, &g_INI_DefaultBuffer, Source, 32); /*0x46ce55*/
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
        ((AbstractTypeClass *)v6)->Constructor(Source); /*0x46ceb5*/
        *(unsigned int *)(v6 + 152) = -1; /*0x46ceba*/
        *(unsigned int *)(v6 + 668) = -1; /*0x46cec0*/
        /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E49FC) */  /*0x46cec6*/
        *(unsigned int *)(v6 + 4) = (unsigned int)(&g_ptr_7E49FC); /*0x46cecc*/
        *(unsigned int *)(v6 + 8) = (unsigned int)(&g_ptr_7E49FC); /*0x46ced3*/
        *(unsigned int *)(v6 + 12) = (unsigned int)(&g_ptr_7E49FC); /*0x46ceda*/
        if ( dword_A83D08 < dword_A83D00 /*0x46cf18*/
          || (byte_A83D05 || !dword_A83D00)
          && dword_A83D0C > 0
          && (*(unsigned __int8 (**)(unsigned int *, int, unsigned int))(dword_A83CF8 + 8))(
               &dword_A83CF8,
               dword_A83D00 + dword_A83D0C,
               0) )
        {
          v7 = dword_A83D08++; /*0x46cf25*/
          *((unsigned int *)dword_A83CFC + v7) = v6; /*0x46cf34*/
        }
        *(unsigned char *)(v6 + 156) = 0; /*0x46cf43*/
        wcscpy((wchar_t *)(v6 + 672), &g_TypeClass_DefaultString); /*0x46cf4a*/
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
    result = (*(int (**)(int, INIClass *))(*(unsigned int *)v6 + 100))(v6, this); /*0x46cf65*/
  }
  return result; /*0x46cf75*/

}
}
// 0x49C5A0
namespace gamemd {
char CampaignClass::SaveProgress()
{

  int *p_referenceCount; // ebx
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
  char *v24; // eax
  void *v25; // eax
  int v26; // eax
  char *v27; // [esp+10h] [ebp-1B8h]
  CCINIClass v28; // [esp+14h] [ebp-1B4h] BYREF
  char Block[100]; // [esp+6Ch] [ebp-15Ch] BYREF
  CCFileClass v30; // [esp+D0h] [ebp-F8h] BYREF
  char v31[12]; // [esp+128h] [ebp-A0h] BYREF
  int v32; // [esp+134h] [ebp-94h]
  CCFileClass v33; // [esp+13Ch] [ebp-8Ch] BYREF
  char v34[12]; // [esp+194h] [ebp-34h] BYREF
  int v35; // [esp+1A0h] [ebp-28h]
  char Buffer[32]; // [esp+1A8h] [ebp-20h] BYREF

  if ( !this->scenario[68] ) /*0x49c5ac*/
    return 0; /*0x49c5ac*/
  if ( !LOBYTE(this->ptr_0) ) /*0x49c5b7*/
    return 0; /*0x49c5b7*/
  p_referenceCount = &this->referenceCount; /*0x49c5c4*/
  if ( !((this->referenceCount) & 0xFF) ) /*0x49c5c1*/
    return 0; /*0x49c5c1*/
  v3 = *&this->u32_3828; /*0x49c5d4*/
  if ( !byte_89F578 ) /*0x49c5d9*/
    CampaignClass::LoadFromINI(&g_DDrawSurfaceManager); /*0x49c5e0*/
  if ( v3 < 0 || v3 >= dword_89F574 ) /*0x49c5f5*/
    return 0; /*0x49cae5*/
  v27 = (char *)(dword_89F570 + 76 * v3); /*0x49c60d*/
  if ( *&this->u32_3028 == *&this->u32_2028 ) /*0x49c616*/
    return 1; /*0x49c61b*/
  (&v33)->Construct(g_Str_File_coopsave_ini); /*0x49c631*/
  v28.headNode[0] = 0; /*0x49c63a*/
  v28.headNode[1] = 0; /*0x49c63e*/
  INISectionList::Constructor((INISectionList *)&v28.headNode[2]); /*0x49c642*/
  Node::Init((MixFileClass *)&v28.needsSave_flag); /*0x49c64b*/
  v28.INIClass_field_3C = 0; /*0x49c65e*/
  v28.ownsFile[0] = 0; /*0x49c662*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS CCINIClass_Vtable) */  /*0x49c667*/
  (&v28)->Load((int)&v33, 0, 0); /*0x49c66f*/
  CCFileClass::Reset(&v33); /*0x49c67b*/
  v5 = 0; /*0x49c683*/
  v6 = (char *)this; /*0x49c687*/
  if ( LOBYTE(this->ptr_0) )
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
      v12 = v6->AbstractClass_1; /*0x49c709*/
      ++v5; /*0x49c70c*/
      ++v6; /*0x49c70d*/
    }
    while ( v12 );
  }
  g_IsWindowed[v5] = 0; /*0x49c720*/
  strcpy(Block, g_IsWindowed); /*0x49c73a*/
  v13 = &this->referenceCount; /*0x49c743*/
  v14 = 0; /*0x49c745*/
  for ( i = *(unsigned char *)p_referenceCount; i; ++v13 )
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
  CCFileClass::Construct3((int)&v30); /*0x49c7ef*/
  (*(void (**)(CCFileClass *, char *))(*(unsigned int *)v30.__tail_0 + 8))(&v30, g_Str_File_coopsave_ini); /*0x49c807*/
  (*(void (**)(CCFileClass *, int))(*(unsigned int *)v30.__tail_0 + 28))(&v30, 2); /*0x49c81a*/
  INIClass::ClearSection((int *)v28.__pad_0, (int)Block, 0); /*0x49c828*/
  INIClass::SetInt(v28.__pad_0, (unsigned __int8 *)Block, g_INI_Key_CurrentMap, *&this->u32_2028, 0); /*0x49c841*/
  INIClass::SetInt(v28.__pad_0, (unsigned __int8 *)Block, aCampaigntype, *&this->u32_3828, 0); /*0x49c85a*/
  for ( j = 0; /*0x49c863*/
        j < v27[8];
        INIClass::SetString(
          v28.__pad_0,
          (unsigned __int8 *)Block,
          Buffer,
          *(char **)(*&this->u32_2828 + 4 * j++)) )
  {
    sprintf(Buffer, "Map%d", j + 1); /*0x49c87d*/
  }
  v20 = *(unsigned int *)&stru_A8D804.__pad_3D[579]; /*0x49c8ac*/
  if ( *(unsigned int *)&stru_A8D804.__pad_3D[579] ) /*0x49c8b4*/
  {
    PlayerSide = (void *)SessionClass::GetPlayerSide(**(int ***)&stru_A8D804.__pad_3D[567]); /*0x49c8be*/
    INIClass::SetHouseName(v28.__pad_0, (unsigned __int8 *)Block, aHouse1, PlayerSide); /*0x49c8d2*/
    PlayerColor = SessionClass::GetPlayerColor(**(SessionClass ***)&stru_A8D804.__pad_3D[567]); /*0x49c8e1*/
    INIClass::SetInt(v28.__pad_0, (unsigned __int8 *)Block, aColor1, PlayerColor, 0); /*0x49c8f5*/
    v20 = *(unsigned int *)&stru_A8D804.__pad_3D[579]; /*0x49c8fa*/
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
    v25 = (void *)SessionClass::GetPlayerSide(*(int **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v23)); /*0x49c925*/
    INIClass::SetHouseName(v28.__pad_0, (unsigned __int8 *)Block, aHouse2, v25); /*0x49c939*/
    v26 = SessionClass::GetPlayerColor(*(SessionClass **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * v23)); /*0x49c949*/
    INIClass::SetInt(v28.__pad_0, (unsigned __int8 *)Block, aColor2, v26, 0); /*0x49c95d*/
  }
LABEL_47:
  INIClass::SetInt(v28.__pad_0, (unsigned __int8 *)Block, g_INI_Key_Time, *&this->u32_8028, 0); /*0x49c962*/
  INIClass::SetInt(v28.__pad_0, (unsigned __int8 *)Block, aKills1, *&this->u32_4028, 0); /*0x49c98f*/
  INIClass::SetInt(v28.__pad_0, (unsigned __int8 *)Block, aKills2, *&this->u32_4828, 0); /*0x49c9a8*/
  INIClass::SetInt(v28.__pad_0, (unsigned __int8 *)Block, aBuilt1, *&this->u32_5028, 0); /*0x49c9c1*/
  INIClass::SetInt(v28.__pad_0, (unsigned __int8 *)Block, aBuilt2, *&this->u32_5828, 0); /*0x49c9da*/
  INIClass::SetInt(v28.__pad_0, (unsigned __int8 *)Block, aLost1, *&this->q6028, 0); /*0x49c9f3*/
  INIClass::SetInt(v28.__pad_0, (unsigned __int8 *)Block, aLost2, *&this->u32_6828, 0); /*0x49ca0c*/
  INIClass::SetInt(v28.__pad_0, (unsigned __int8 *)Block, aScore1, *&this->u32_7028, 0); /*0x49ca25*/
  INIClass::SetInt(v28.__pad_0, (unsigned __int8 *)Block, aScore2, *&this->u32_7828, 0); /*0x49ca3e*/
  INIClass::WriteDigest(&v28, (int)&v30, 0); /*0x49ca51*/
  CCFileClass::Reset(&v30); /*0x49ca5d*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x49ca67*/
  v32 = 0; /*0x49ca77*/
  ((Vector *)v31)->Clear(); /*0x49ca7e*/
  *(unsigned int *)v30.__tail_0 = &off_7E1668; /*0x49ca8f*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v30); /*0x49ca96*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v28); /*0x49ca9f*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x49caab*/
  v35 = 0; /*0x49cab2*/
  ((Vector *)v34)->Clear(); /*0x49cab9*/
  *(unsigned int *)v33.__tail_0 = &off_7E1668; /*0x49cac5*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v33); /*0x49cacc*/
  this->scenario[68] = 1; /*0x49cad2*/
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
  a2[3] = unk_7E990C; /*0x46cfb0*/
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
      /* X11: ptr_0 install elided (implicit via CampaignClass virtuals 0x46d024) */
      /* X11: ptr_0 install elided (implicit via CampaignClass virtuals 0x46d02a) */
      /* X11: ptr_0 install elided (implicit via CampaignClass virtuals 0x46d031) */
      /* X11: ptr_0 install elided (implicit via CampaignClass virtuals 0x46d038) */
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
  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x46d05f*/
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


  /* X11: ptr_0 install elided (base-interface slot, RHS g_ptr_7E49FC) */  /*0x46d096*/
  /* X11: ptr_0 install elided (implicit via CampaignClass virtuals 0x46d09c) */
  /* X11: ptr_0 install elided (implicit via CampaignClass virtuals 0x46d0a3) */
  /* X11: ptr_0 install elided (implicit via CampaignClass virtuals 0x46d0aa) */
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x46d0b1*/
  CampaignClass *v5; // [esp+4h] [ebp-4h] BYREF
  v5 = this; /*0x46d0c6*/
  int v3; // eax
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
  ((AbstractTypeClass *)this)->Dtor(); /*0x46d101*/
  if ( (a2 & 1) != 0 ) /*0x46d10b*/
    __3_YAXPAX_Z(this); /*0x46d10e*/
  return &this->AbstractClass; /*0x46d118*/

}
} // namespace gamemd
