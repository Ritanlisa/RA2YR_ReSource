// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"

// 0x49B660
namespace gamemd {
int MPCooperative::processTurn(char * a2, char * a3)
{
  if ( a2 ) /*0x49b66e*/
    strcpy((char *)this, ToWideStringChar(a2)); /*0x49b68b*/
  else
    *(_BYTE *)this = 0; /*0x49b696*/
  if ( a3 ) /*0x49b69f*/
    strcpy((char *)(this + 28), ToWideStringChar(a3)); /*0x49b6bf*/
  else
    *(_BYTE *)(this + 28) = 0; /*0x49b6ca*/
  *(_DWORD *)(this + 20) = -2; /*0x49b6d3*/
  *(_DWORD *)(this + 48) = -2; /*0x49b6d6*/
  *(_DWORD *)(this + 24) = -2; /*0x49b6d9*/
  *(_DWORD *)(this + 52) = -2; /*0x49b6dc*/
  *(_DWORD *)(this + 60) = 0; /*0x49b6e2*/
  *(_DWORD *)(this + 68) = -1; /*0x49b6e5*/
  *(_DWORD *)(this + 56) = -1; /*0x49b6e8*/
  *(_BYTE *)(this + 108) = 0; /*0x49b6eb*/
  *(_DWORD *)(this + 64) = 0; /*0x49b6ee*/
  *(_DWORD *)(this + 72) = 0; /*0x49b6f1*/
  *(_DWORD *)(this + 76) = 0; /*0x49b6f4*/
  *(_DWORD *)(this + 80) = 0; /*0x49b6f7*/
  *(_DWORD *)(this + 84) = 0; /*0x49b6fa*/
  *(_DWORD *)(this + 88) = 0; /*0x49b6fd*/
  *(_DWORD *)(this + 92) = 0; /*0x49b700*/
  *(_DWORD *)(this + 104) = 0; /*0x49b703*/
  *(_DWORD *)(this + 96) = 0; /*0x49b706*/
  *(_DWORD *)(this + 100) = 0; /*0x49b709*/
  return this; /*0x49b6d2*/
}
}
// 0x49BCE0
namespace gamemd {
int MPCooperative::BuildScoreEntries(int a2, CCINIClass * aP2)
{
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  wchar_t *v9; // ebx
  int i; // ebx
  wchar_t *v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  wchar_t *v16; // [esp+4h] [ebp-4h]
  wchar_t *v17; // [esp+Ch] [ebp+4h]

  if ( !*(_BYTE *)(this + 108) ) /*0x49bce4*/
    return 0; /*0x49bceb*/
  while ( *(_DWORD *)(a2 + 16) ) /*0x49bcf9*/
  {
    __3_YAXPAX_Z(**(void ***)(a2 + 4)); /*0x49bd06*/
    v6 = *(_DWORD *)(a2 + 16); /*0x49bd0b*/
    if ( v6 > 0 ) /*0x49bd13*/
    {
      v7 = v6 - 1; /*0x49bd15*/
      v8 = 0; /*0x49bd18*/
      for ( *(_DWORD *)(a2 + 16) = v7; /*0x49bd1f*/
            v8 < *(_DWORD *)(a2 + 16);
            *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v8 - 4) = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v8) )
      {
        ++v8; /*0x49bd24*/
      }
    }
  }
  v9 = (wchar_t *)__2_YAPAXI_Z(0x70u); /*0x49bd41*/
  v16 = v9; /*0x49bd4a*/
  FillScoreScreenStats(v9, 0); /*0x49bd4e*/
  v17 = (wchar_t *)__2_YAPAXI_Z(0x70u); /*0x49bd61*/
  FillScoreScreenStats(v17, 1); /*0x49bd65*/
  if ( strcmp((const char *)this, ToWideStringChar((char *)v9)) ) /*0x49bd7b*/
  {
    v16 = v17; /*0x49bda8*/
    v17 = v9; /*0x49bdac*/
  }
  for ( i = 0; i < 2; ++i ) /*0x49bdb0*/
  {
    v11 = v16; /*0x49bdb2*/
    if ( i ) /*0x49bdb8*/
      v11 = v17; /*0x49bdba*/
    *((_DWORD *)v11 + 16) = *(_DWORD *)(this + 4 * i + 72); /*0x49bdc2*/
    *((_DWORD *)v11 + 20) = *(_DWORD *)(this + 4 * i + 80); /*0x49bdc9*/
    *((_DWORD *)v11 + 12) = *(_DWORD *)(this + 4 * i + 88); /*0x49bdd0*/
    *((_DWORD *)v11 + 11) = *(_DWORD *)(this + 56); /*0x49bdd6*/
    *((_DWORD *)v11 + 24) = *(_DWORD *)(this + 4 * i + 96); /*0x49bddd*/
    v12 = *(_DWORD *)(a2 + 8); /*0x49bde0*/
    if ( *(_DWORD *)(a2 + 16) >= v12 ) /*0x49bde6*/
    {
      if ( !*(_BYTE *)(a2 + 13) && v12 ) /*0x49bdf1*/
        continue; /*0x49bdf1*/
      v13 = *(_DWORD *)(a2 + 20); /*0x49bdf3*/
      if ( v13 <= 0 || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, v12 + v13, 0) ) /*0x49be03*/
        continue; /*0x49be03*/
    }
    v14 = *(_DWORD *)(a2 + 16); /*0x49be0a*/
    v15 = *(_DWORD *)(a2 + 4); /*0x49be0d*/
    *(_DWORD *)(a2 + 16) = v14 + 1; /*0x49be13*/
    *(_DWORD *)(v15 + 4 * v14) = v11; /*0x49be16*/
  }
  *aP2 = *(_DWORD *)(this + 104); /*0x49be28*/
  return 1; /*0x49bced*/
}
}
// 0x49BE40
namespace gamemd {
int MPCooperative::WriteCoopSaveINI()
{
  char *v1; // edi
  char *v2; // ebp
  int v3; // esi
  int v4; // esi
  int v5; // eax
  char v6; // al
  char v7; // al
  char *v8; // edi
  int v9; // esi
  char i; // al
  int v11; // esi
  int v12; // eax
  char v13; // al
  void *v15[3]; // [esp+Ch] [ebp-194h] BYREF
  _DWORD v16[7]; // [esp+18h] [ebp-188h] BYREF
  _DWORD v17[6]; // [esp+34h] [ebp-16Ch] BYREF
  char v18; // [esp+4Ch] [ebp-154h]
  _DWORD v19[22]; // [esp+64h] [ebp-13Ch] BYREF
  _BYTE v20[12]; // [esp+BCh] [ebp-E4h] BYREF
  int v21; // [esp+C8h] [ebp-D8h]
  _DWORD v22[22]; // [esp+D0h] [ebp-D0h] BYREF
  _BYTE v23[12]; // [esp+128h] [ebp-78h] BYREF
  int v24; // [esp+134h] [ebp-6Ch]
  char v25[100]; // [esp+13Ch] [ebp-64h] BYREF

  v1 = this; /*0x49be49*/
  if ( !*this ) /*0x49be4d*/
    return 1; /*0x49be4d*/
  v2 = this + 28; /*0x49be58*/
  if ( !*(this + 28) ) /*0x49be55*/
    return 1; /*0x49c0c5*/
  CCFileClass::Construct(v22, g_Str_File_coopsave_ini); /*0x49be70*/
  v15[1] = 0; /*0x49be79*/
  v15[2] = 0; /*0x49be7d*/
  INISectionList::Constructor(v16); /*0x49be81*/
  Node::Init(v17); /*0x49be8a*/
  v17[5] = 0; /*0x49be9d*/
  v18 = 0; /*0x49bea1*/
  v15[0] = &CCINIClass_Vtable; /*0x49bea5*/
  CCINIClass::Load(v15, (int)v22, 0, 0); /*0x49bead*/
  CCFileClass::Reset(v22); /*0x49beb9*/
  v3 = 0; /*0x49bec0*/
  if ( *v1 )
  {
    do
    {
      if ( v3 >= 1021 ) /*0x49becc*/
        break; /*0x49becc*/
      if ( isalnum(*v1) )
      {
        g_IsWindowed[v3] = *v1; /*0x49bf1d*/
      }
      else
      {
        g_IsWindowed[v3] = 61; /*0x49bede*/
        v4 = v3 + 1; /*0x49bee5*/
        v5 = *v1 >> 4; /*0x49bee9*/
        if ( (unsigned int)v5 >= 0x10 )
          v6 = 0; /*0x49bf00*/
        else
          v6 = v5 >= 10 ? v5 + 55 : v5 + 48;
        g_IsWindowed[v4] = v6; /*0x49bf02*/
        v3 = v4 + 1; /*0x49bf0d*/
        g_IsWindowed[v3] = EncodeDigitHex(*v1 & 0xF); /*0x49bf13*/
      }
      v7 = v1[1]; /*0x49bf23*/
      ++v3; /*0x49bf26*/
      ++v1; /*0x49bf27*/
    }
    while ( v7 );
  }
  g_IsWindowed[v3] = 0; /*0x49bf36*/
  strcpy(v25, g_IsWindowed); /*0x49bf52*/
  v8 = v2; /*0x49bf5b*/
  v9 = 0; /*0x49bf5d*/
  for ( i = *v2; i; ++v8 )
  {
    if ( v9 >= 1021 ) /*0x49bf6b*/
      break; /*0x49bf6b*/
    if ( isalnum(i) )
    {
      g_IsWindowed[v9] = *v8; /*0x49bfbc*/
    }
    else
    {
      g_IsWindowed[v9] = 61; /*0x49bf7d*/
      v11 = v9 + 1; /*0x49bf84*/
      v12 = *v8 >> 4; /*0x49bf88*/
      if ( (unsigned int)v12 >= 0x10 )
        v13 = 0; /*0x49bf9f*/
      else
        v13 = v12 >= 10 ? v12 + 55 : v12 + 48;
      g_IsWindowed[v11] = v13; /*0x49bfa1*/
      v9 = v11 + 1; /*0x49bfac*/
      g_IsWindowed[v9] = EncodeDigitHex(*v8 & 0xF); /*0x49bfb2*/
    }
    i = v8[1]; /*0x49bfc2*/
    ++v9; /*0x49bfc5*/
  }
  g_IsWindowed[v9] = 0; /*0x49bfd5*/
  strcat(v25, g_IsWindowed); /*0x49bff9*/
  CCFileClass::Construct3((int)v19); /*0x49c006*/
  (*(void (__thiscall **)(_DWORD *, char *))(v19[0] + 8))(v19, g_Str_File_coopsave_ini); /*0x49c018*/
  (*(void (__thiscall **)(_DWORD *, int))(v19[0] + 28))(v19, 2); /*0x49c025*/
  INIClass::ClearSection((int)v15, (int)v25, 0); /*0x49c035*/
  INIClass::WriteDigest(v15, (int)v19, 0); /*0x49c044*/
  CCFileClass::Reset(v19); /*0x49c04d*/
  v19[0] = &CCFileClass::`vftable'; /*0x49c05e*/
  v21 = 0; /*0x49c062*/
  Vector::Clear((int)v20); /*0x49c069*/
  v19[0] = &off_7E1668; /*0x49c077*/
  BufferIOFileClass::Dtor(v19); /*0x49c07b*/
  HashTable::DestroyHashTableINIClass(v15); /*0x49c084*/
  v22[0] = &CCFileClass::`vftable'; /*0x49c090*/
  v24 = 0; /*0x49c097*/
  Vector::Clear((int)v23); /*0x49c09e*/
  v22[0] = &off_7E1668; /*0x49c0aa*/
  BufferIOFileClass::Dtor(v22); /*0x49c0b1*/
  return 1; /*0x49c0b7*/
}
}
// 0x49CC50
namespace gamemd {
void MPCooperative_validateMove()
{
  int v59; // esi

  if ( a2 < 0 || a2 >= *(this + 16) ) /*0x49cc5f*/
    return 0; /*0x49ccde*/
  v59 = *(this + 18); /*0x49cc66*/
  *(this + 14) = a2; /*0x49cc69*/
  *(this + 18) = a20 + v59; /*0x49cc75*/
  *(this + 19) += a48; /*0x49cc81*/
  *(this + 20) += a24; /*0x49cc90*/
  *(this + 21) += a52; /*0x49cc9c*/
  *(this + 22) += a16; /*0x49ccab*/
  *(this + 23) += a44; /*0x49ccb7*/
  *(this + 24) += a28; /*0x49ccc6*/
  *(this + 25) += a56; /*0x49ccd2*/
  *(this + 26) = a3; /*0x49ccd5*/
  return 1; /*0x49ccdb*/
}
}
// 0x49D120
namespace gamemd {
int MPCooperative::ReadCoopSaveINI()
{
  char *v1; // edi
  char *v2; // ebx
  int v4; // esi
  int v5; // esi
  int v6; // eax
  char v7; // al
  char v8; // al
  char *v9; // edi
  int v10; // esi
  char i; // al
  int v12; // esi
  int v13; // eax
  char v14; // al
  bool v15; // bl
  _DWORD v16[22]; // [esp+Ch] [ebp-128h] BYREF
  _BYTE v17[12]; // [esp+64h] [ebp-D0h] BYREF
  int v18; // [esp+70h] [ebp-C4h]
  void *v19[3]; // [esp+78h] [ebp-BCh] BYREF
  _DWORD v20[7]; // [esp+84h] [ebp-B0h] BYREF
  _DWORD v21[6]; // [esp+A0h] [ebp-94h] BYREF
  char v22; // [esp+B8h] [ebp-7Ch]
  char v23[100]; // [esp+D0h] [ebp-64h] BYREF

  v1 = this; /*0x49d129*/
  if ( !*this ) /*0x49d12b*/
    return 0; /*0x49d12b*/
  v2 = this + 28; /*0x49d137*/
  if ( !*(this + 28) ) /*0x49d134*/
    return 0; /*0x49d13c*/
  CCFileClass::Construct(v16, g_Str_File_coopsave_ini); /*0x49d14b*/
  v19[1] = 0; /*0x49d159*/
  v19[2] = 0; /*0x49d15d*/
  INISectionList::Constructor(v20); /*0x49d164*/
  Node::Init(v21); /*0x49d170*/
  v21[5] = 0; /*0x49d183*/
  v22 = 0; /*0x49d18a*/
  v19[0] = &CCINIClass_Vtable; /*0x49d192*/
  if ( !CCINIClass::Load(v19, (int)v16, 0, 0) ) /*0x49d19d*/
  {
    CCFileClass::Reset(v16); /*0x49d1aa*/
    HashTable::DestroyHashTableINIClass(v19); /*0x49d1b3*/
    v16[0] = &CCFileClass::`vftable'; /*0x49d1bc*/
    v18 = 0; /*0x49d1c4*/
    Vector::Clear((int)v17); /*0x49d1c8*/
    v16[0] = &off_7E1668; /*0x49d1d1*/
    BufferIOFileClass::Dtor(v16); /*0x49d1d9*/
    return 0; /*0x49d1e9*/
  }
  CCFileClass::Reset(v16); /*0x49d1ef*/
  v4 = 0; /*0x49d1f6*/
  if ( *v1 )
  {
    do
    {
      if ( v4 >= 1021 ) /*0x49d202*/
        break; /*0x49d202*/
      if ( isalnum(*v1) )
      {
        g_IsWindowed[v4] = *v1; /*0x49d253*/
      }
      else
      {
        g_IsWindowed[v4] = 61; /*0x49d214*/
        v5 = v4 + 1; /*0x49d21b*/
        v6 = *v1 >> 4; /*0x49d21f*/
        if ( (unsigned int)v6 >= 0x10 )
          v7 = 0; /*0x49d236*/
        else
          v7 = v6 >= 10 ? v6 + 55 : v6 + 48;
        g_IsWindowed[v5] = v7; /*0x49d238*/
        v4 = v5 + 1; /*0x49d243*/
        g_IsWindowed[v4] = EncodeDigitHex(*v1 & 0xF); /*0x49d249*/
      }
      v8 = v1[1]; /*0x49d259*/
      ++v4; /*0x49d25c*/
      ++v1; /*0x49d25d*/
    }
    while ( v8 );
  }
  g_IsWindowed[v4] = 0; /*0x49d26c*/
  strcpy(v23, g_IsWindowed); /*0x49d289*/
  v9 = v2; /*0x49d292*/
  v10 = 0; /*0x49d294*/
  for ( i = *v2; i; ++v9 )
  {
    if ( v10 >= 1021 ) /*0x49d2a2*/
      break; /*0x49d2a2*/
    if ( isalnum(i) )
    {
      g_IsWindowed[v10] = *v9; /*0x49d2f3*/
    }
    else
    {
      g_IsWindowed[v10] = 61; /*0x49d2b4*/
      v12 = v10 + 1; /*0x49d2bb*/
      v13 = *v9 >> 4; /*0x49d2bf*/
      if ( (unsigned int)v13 >= 0x10 )
        v14 = 0; /*0x49d2d6*/
      else
        v14 = v13 >= 10 ? v13 + 55 : v13 + 48;
      g_IsWindowed[v12] = v14; /*0x49d2d8*/
      v10 = v12 + 1; /*0x49d2e3*/
      g_IsWindowed[v10] = EncodeDigitHex(*v9 & 0xF); /*0x49d2e9*/
    }
    i = v9[1]; /*0x49d2f9*/
    ++v10; /*0x49d2fc*/
  }
  g_IsWindowed[v10] = 0; /*0x49d30c*/
  strcat(v23, g_IsWindowed); /*0x49d331*/
  v15 = INIClass::BinarySearchSection((int)v19, (unsigned __int8 *)v23) != 0; /*0x49d354*/
  HashTable::DestroyHashTableINIClass(v19); /*0x49d357*/
  v16[0] = &CCFileClass::`vftable'; /*0x49d360*/
  v18 = 0; /*0x49d368*/
  Vector::Clear((int)v17); /*0x49d36c*/
  v16[0] = &off_7E1668; /*0x49d375*/
  BufferIOFileClass::Dtor(v16); /*0x49d37d*/
  return v15; /*0x49d1de*/
}
}
// 0x5C1470
namespace gamemd {
unsigned int * MPCooperative::ctor(MultiplayerGameMode * aP1, MPCooperative * aP2, MultiplayerGameMode * aP3, MPCooperative * aP4, MultiplayerGameMode * aP5, MPCooperative * aP6)
{
  _BYTE *v8; // esi
  int v9; // ebp
  _DWORD *v10; // esi
  int v11; // ebp
  _DWORD *v12; // esi
  int v13; // ebp
  _DWORD *v14; // esi
  int i; // ebp
  int v16; // edx
  void *v17; // ebx
  int v18; // ebp
  _DWORD *v19; // eax
  _DWORD *inited; // ebp
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // edx

  MultiplayerGameMode::Construct(this, aP1, aP2, aP3, aP4, 0, aP6); /*0x5c1494*/
  AbstractClass::updateAnimationState(0, 0); /*0x5c14a0*/
  *(this + 22) = &DynamicVectorClass<NodeNameType *>::`vftable'; /*0x5c14a5*/
  *(this + 27) = 10; /*0x5c14ab*/
  *(this + 26) = 0; /*0x5c14b2*/
  v8 = this + 49; /*0x5c14b5*/
  v9 = 8; /*0x5c14bb*/
  do /*0x5c14cb*/
  {
    Waypoint::InitInvalid(v8); /*0x5c14c2*/
    v8 += 12; /*0x5c14c7*/
    --v9; /*0x5c14ca*/
  }
  while ( v9 ); /*0x5c14cb*/
  v10 = this + 105; /*0x5c14cd*/
  v11 = 8; /*0x5c14d3*/
  do /*0x5c14f5*/
  {
    VectorClass::Construct(v10, 0, 0); /*0x5c14dc*/
    *v10 = &DynamicVectorClass<int>::`vftable'; /*0x5c14e1*/
    v10[5] = 10; /*0x5c14e7*/
    v10[4] = 0; /*0x5c14ee*/
    v10 += 6; /*0x5c14f1*/
    --v11; /*0x5c14f4*/
  }
  while ( v11 ); /*0x5c14f5*/
  v12 = this + 153; /*0x5c14f7*/
  v13 = 8; /*0x5c14fd*/
  do /*0x5c151f*/
  {
    VectorClass::Construct(v12, 0, 0); /*0x5c1506*/
    *v12 = &DynamicVectorClass<int>::`vftable'; /*0x5c150b*/
    v12[5] = 10; /*0x5c1511*/
    v12[4] = 0; /*0x5c1518*/
    v12 += 6; /*0x5c151b*/
    --v13; /*0x5c151e*/
  }
  while ( v13 ); /*0x5c151f*/
  v14 = this + 201; /*0x5c1521*/
  CoopCampaignVector::Construct(this + 201, 0, 0); /*0x5c152b*/
  *(this + 201) = &DynamicVectorClass<CoopCampaignClass *>::`vftable'; /*0x5c1530*/
  *(this + 206) = 10; /*0x5c1536*/
  *(this + 205) = 0; /*0x5c153d*/
  *this = &MPCooperative::`vftable'; /*0x5c1540*/
  *(this + 16) = 0; /*0x5c1546*/
  *(this + 17) = 0; /*0x5c1549*/
  *(this + 207) = 0; /*0x5c154c*/
  *(this + 20) = 0; /*0x5c1552*/
  *((_BYTE *)this + 4) = 0; /*0x5c1555*/
  *((_BYTE *)this + 72) = 0; /*0x5c1559*/
  *((_BYTE *)this + 73) = 0; /*0x5c155d*/
  *(this + 19) = 0; /*0x5c1561*/
  *((_BYTE *)this + 832) = 1; /*0x5c1564*/
  for ( i = *(this + 205) - 1; i >= 0; --i ) /*0x5c1572*/
  {
    v16 = *(this + 202); /*0x5c1574*/
    v17 = *(void **)(v16 + 4 * i); /*0x5c157a*/
    if ( v17 ) /*0x5c157f*/
    {
      Array::Cleanup(*(_DWORD *)(v16 + 4 * i)); /*0x5c1583*/
      __3_YAXPAX_Z(v17); /*0x5c1589*/
    }
  }
  v18 = *(this + 203); /*0x5c1598*/
  (*(void (__thiscall **)(_DWORD *))(*v14 + 12))(this + 201); /*0x5c159d*/
  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v14 + 8))(this + 201, v18, 0); /*0x5c15a6*/
  CampaignClass::GetValue((int)&g_DDrawSurfaceManager, &aP4); /*0x5c15b3*/
  for ( aP6 = 0; aP6 < (int)aP4; ++aP6 ) /*0x5c15c2*/
  {
    v19 = __2_YAPAXI_Z(0x70u); /*0x5c15c6*/
    if ( v19 ) /*0x5c15d0*/
      inited = MissionClass::Init(v19); /*0x5c15d9*/
    else
      inited = 0; /*0x5c15dd*/
    Movie::SetupScreen((int)inited, aP6); /*0x5c15e6*/
    v21 = *(this + 203); /*0x5c15eb*/
    if ( *(this + 205) >= v21 ) /*0x5c15f3*/
    {
      if ( !*((_BYTE *)this + 817) && v21 ) /*0x5c15fe*/
        continue; /*0x5c15fe*/
      v22 = *(this + 206); /*0x5c1600*/
      if ( v22 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v14 + 8))(this + 201, v21 + v22, 0) ) /*0x5c160f*/
        continue; /*0x5c160f*/
    }
    v23 = *(this + 205); /*0x5c1616*/
    v24 = *(this + 202); /*0x5c1619*/
    *(this + 205) = v23 + 1; /*0x5c161f*/
    *(_DWORD *)(v24 + 4 * v23) = inited; /*0x5c1622*/
  }
  return this; /*0x5c1638*/
}
}
// 0x5C1640
namespace gamemd {
AbstractClass * * MPCooperative_Cleanup(MPCooperative * aP0, int a2)
{
  void *v3; // esi
  int i; // ebp
  int v5; // eax
  void *v6; // esi
  int j; // ebp
  void (__thiscall ***v8)(_DWORD, int); // ecx
  void *v9; // eax
  char *v10; // esi
  int v11; // ebp
  void *v12; // eax
  char *v13; // esi
  int v14; // ebp
  void *v15; // eax
  void *v16; // eax

  v3 = (void *)a1[16]; /*0x5c1647*/
  *a1 = &MPCooperative::`vftable'; /*0x5c164a*/
  if ( v3 ) /*0x5c1652*/
  {
    Array::Cleanup((int)v3); /*0x5c1656*/
    __3_YAXPAX_Z(v3); /*0x5c165c*/
    a1[16] = 0; /*0x5c1664*/
  }
  for ( i = a1[205] - 1; i >= 0; --i ) /*0x5c166f*/
  {
    v5 = a1[202]; /*0x5c1671*/
    v6 = *(void **)(v5 + 4 * i); /*0x5c1677*/
    if ( v6 ) /*0x5c167c*/
    {
      Array::Cleanup(*(_DWORD *)(v5 + 4 * i)); /*0x5c1680*/
      __3_YAXPAX_Z(v6); /*0x5c1686*/
    }
  }
  (*(void (__thiscall **)(_DWORD *, int))(a1[201] + 12))(a1 + 201, a2); /*0x5c169f*/
  for ( j = a1[26] - 1; j >= 0; --j ) /*0x5c16a6*/
    __3_YAXPAX_Z(*(void **)(a1[23] + 4 * j)); /*0x5c16af*/
  (*(void (__thiscall **)(_DWORD *))(a1[22] + 12))(a1 + 22); /*0x5c16c3*/
  (*(void (__thiscall **)(_DWORD *))(a1[22] + 8))(a1 + 22); /*0x5c16ce*/
  v8 = (void (__thiscall ***)(_DWORD, int))a1[20]; /*0x5c16d1*/
  if ( v8 ) /*0x5c16d6*/
  {
    (**v8)(v8, 1); /*0x5c16dc*/
    a1[20] = 0; /*0x5c16de*/
  }
  *((_BYTE *)a1 + 4) = 0; /*0x5c16e1*/
  v9 = (void *)a1[202]; /*0x5c16e4*/
  a1[201] = &VectorClass<CoopCampaignClass *>::`vftable'; /*0x5c16e9*/
  if ( v9 && *((_BYTE *)a1 + 817) ) /*0x5c16f1*/
  {
    __3_YAXPAX_Z(v9); /*0x5c16f7*/
    a1[202] = 0; /*0x5c16ff*/
  }
  *((_BYTE *)a1 + 817) = 0; /*0x5c1702*/
  a1[203] = 0; /*0x5c1705*/
  v10 = (char *)(a1 + 201); /*0x5c1708*/
  v11 = 8; /*0x5c170e*/
  do /*0x5c173b*/
  {
    v12 = (void *)*((_DWORD *)v10 - 5); /*0x5c1713*/
    v10 -= 24; /*0x5c1716*/
    *(_DWORD *)v10 = &VectorClass<int>::`vftable'; /*0x5c171b*/
    if ( v12 && v10[13] ) /*0x5c1723*/
    {
      __3_YAXPAX_Z(v12); /*0x5c1729*/
      *((_DWORD *)v10 + 1) = 0; /*0x5c1731*/
    }
    --v11; /*0x5c1734*/
    v10[13] = 0; /*0x5c1735*/
    *((_DWORD *)v10 + 2) = 0; /*0x5c1738*/
  }
  while ( v11 ); /*0x5c173b*/
  v13 = (char *)(a1 + 153); /*0x5c173d*/
  v14 = 8; /*0x5c1743*/
  do /*0x5c1770*/
  {
    v15 = (void *)*((_DWORD *)v13 - 5); /*0x5c1748*/
    v13 -= 24; /*0x5c174b*/
    *(_DWORD *)v13 = &VectorClass<int>::`vftable'; /*0x5c1750*/
    if ( v15 && v13[13] ) /*0x5c1758*/
    {
      __3_YAXPAX_Z(v15); /*0x5c175e*/
      *((_DWORD *)v13 + 1) = 0; /*0x5c1766*/
    }
    --v14; /*0x5c1769*/
    v13[13] = 0; /*0x5c176a*/
    *((_DWORD *)v13 + 2) = 0; /*0x5c176d*/
  }
  while ( v14 ); /*0x5c1770*/
  v16 = (void *)a1[23]; /*0x5c1772*/
  a1[22] = &VectorClass<NodeNameType *>::`vftable'; /*0x5c1775*/
  if ( v16 && *((_BYTE *)a1 + 101) ) /*0x5c1781*/
  {
    __3_YAXPAX_Z(v16); /*0x5c1787*/
    a1[23] = 0; /*0x5c178f*/
  }
  *((_BYTE *)a1 + 101) = 0; /*0x5c1794*/
  a1[24] = 0; /*0x5c1797*/
  MultiplayerGameMode::Dtor(a1); /*0x5c179a*/
}
}
// 0x5C18A0
namespace gamemd {
int MPCooperative::Read()
{
  int i; // edi
  int v3; // eax
  void *v4; // esi
  int v5; // edi
  _DWORD *v6; // esi
  int j; // ebx
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v15; // [esp+10h] [ebp-4h] BYREF

  for ( i = *(this + 205) - 1; i >= 0; --i ) /*0x5c18ad*/
  {
    v3 = *(this + 202); /*0x5c18af*/
    v4 = *(void **)(v3 + 4 * i); /*0x5c18b5*/
    if ( v4 ) /*0x5c18ba*/
    {
      Array::Cleanup(*(_DWORD *)(v3 + 4 * i)); /*0x5c18be*/
      __3_YAXPAX_Z(v4); /*0x5c18c4*/
    }
  }
  v5 = *(this + 203); /*0x5c18d5*/
  v6 = this + 201; /*0x5c18db*/
  (*(void (__thiscall **)(_DWORD *))(*(this + 201) + 12))(this + 201); /*0x5c18e3*/
  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*(this + 201) + 8))(this + 201, v5, 0); /*0x5c18ed*/
  CampaignClass::GetValue((int)&g_DDrawSurfaceManager, &v15); /*0x5c18fa*/
  for ( j = 0; j < v15; ++j ) /*0x5c1907*/
  {
    v8 = __2_YAPAXI_Z(0x70u); /*0x5c190b*/
    if ( v8 ) /*0x5c1915*/
      v9 = MissionClass::Init(v8); /*0x5c191e*/
    else
      v9 = 0; /*0x5c1922*/
    Movie::SetupScreen((int)v9, j); /*0x5c1927*/
    v10 = v6[2]; /*0x5c192c*/
    if ( v6[4] >= v10 ) /*0x5c1934*/
    {
      if ( !*((_BYTE *)v6 + 13) && v10 ) /*0x5c193f*/
        continue; /*0x5c193f*/
      v11 = v6[5]; /*0x5c1941*/
      if ( v11 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 8))(v6, v10 + v11, 0) ) /*0x5c1951*/
        continue; /*0x5c1951*/
    }
    v12 = v6[4]; /*0x5c1958*/
    v13 = v6[1]; /*0x5c195b*/
    v6[4] = v12 + 1; /*0x5c1961*/
    *(_DWORD *)(v13 + 4 * v12) = v9; /*0x5c1964*/
  }
  return 1; /*0x5c1970*/
}
}
// 0x5C1A10
namespace gamemd {
CampaignClass * * MPCooperative::CopyTo()
{
  int v2; // ecx
  char *v3; // eax
  void *v4; // edi
  char *v5; // ecx
  _DWORD *v6; // eax
  HWND result; // eax
  int v8; // ebx
  int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  HWND v12; // edi
  char *String2; // [esp+10h] [ebp-Ch] BYREF
  BOOL v14; // [esp+14h] [ebp-8h]
  int v15; // [esp+18h] [ebp-4h] BYREF

  g_MPCooperativeState = -1; /*0x5c1a13*/
  Debug::Log(); /*0x5c1a28*/
  Network::SendOptionsGame(aO8); /*0x5c1a35*/
  if ( Dialog::FindByHandle((void *)0xC2) || Dialog::FindByHandle((void *)0xBC) ) /*0x5c1a4d*/
  {
    v2 = *(_DWORD *)(this + 64); /*0x5c1a56*/
    if ( v2 ) /*0x5c1a5b*/
    {
      if ( (Movie::GetSectionID(v2, &String2), v3 = (char *)MPCooperative_Copy(this), v3 != String2) /*0x5c1a86*/
        && Dialog::GetCurrentType() == 107
        || Dialog::GetCurrentType() != 107 )
      {
        v4 = *(void **)(this + 64); /*0x5c1a88*/
        if ( v4 ) /*0x5c1a8d*/
        {
          Array::Cleanup(*(_DWORD *)(this + 64)); /*0x5c1a91*/
          __3_YAXPAX_Z(v4); /*0x5c1a97*/
        }
        *(_DWORD *)(this + 64) = 0; /*0x5c1a9f*/
      }
    }
    v5 = *(char **)(this + 64); /*0x5c1aa6*/
    if ( v5 ) /*0x5c1aab*/
    {
      if ( Game_PlayerCount == 2 ) /*0x5c1ab4*/
        String::AssignWideToChar(v5, *(char **)Game_PlayerInfoArray, *(char **)(Game_PlayerInfoArray + 4)); /*0x5c1ac2*/
      else
        String::AssignWideToChar(v5, (char *)&g_TypeClass_DefaultString, (char *)&g_TypeClass_DefaultString); /*0x5c1ace*/
    }
  }
  if ( *(_DWORD *)(this + 64) ) /*0x5c1ad3*/
  {
  LABEL_30:
    *(_BYTE *)(this + 832) = 1; /*0x5c1c7b*/
    result = (HWND)Dialog::FindGameUI(); /*0x5c1c82*/
    v12 = result; /*0x5c1c87*/
    if ( result ) /*0x5c1c8b*/
    {
      Campaign::SetupMovie((int *)this, result); /*0x5c1c90*/
      return CampaignCoop::Setup((int *)this, v12, 1); /*0x5c1c9a*/
    }
    return result; /*0x5c1c9a*/
  }
  v6 = __2_YAPAXI_Z(0x70u); /*0x5c1ae2*/
  if ( v6 ) /*0x5c1aec*/
    result = (HWND)MissionClass::Init(v6); /*0x5c1af0*/
  else
    result = 0; /*0x5c1af7*/
  *(_DWORD *)(this + 64) = result; /*0x5c1afb*/
  if ( result ) /*0x5c1afe*/
  {
    Movie::SetupScreen((int)result, 0); /*0x5c1b07*/
    v8 = MPCooperative_Copy(this); /*0x5c1b13*/
    if ( v8 >= 0 ) /*0x5c1b17*/
    {
      *(_DWORD *)(this + 828) = v8; /*0x5c1bb1*/
      Movie::GetSection((int)&g_DDrawSurfaceManager, v8, &v15); /*0x5c1bb7*/
      v11 = *(_DWORD *)(this + 64); /*0x5c1bc2*/
      String2 = 0; /*0x5c1bc5*/
      Array::GetElementAt(v11, &String2, 0); /*0x5c1bc9*/
      Debug::Log(); /*0x5c1be5*/
      if ( _strnicmp( /*0x5c1c0e*/
             (const char *)(*(_DWORD *)(g_MultiplayerGameState + 4 * g_GameRulesOptions) + 88),
             String2,
             strlen(String2)) )
      {
        v14 = v8 == 0; /*0x5c1c21*/
        do /*0x5c1c6f*/
        {
          Movie::SetupScreen(*(_DWORD *)(this + 64), v14); /*0x5c1c2d*/
          Movie::SetupScreen(*(_DWORD *)(this + 64), v8); /*0x5c1c36*/
          Array::GetElementAt(*(_DWORD *)(this + 64), &String2, 0); /*0x5c1c45*/
        }
        while ( _strnicmp( /*0x5c1c6f*/
                  (const char *)(*(_DWORD *)(g_MultiplayerGameState + 4 * g_GameRulesOptions) + 88),
                  String2,
                  strlen(String2)) );
      }
    }
    else
    {
      v9 = *(_DWORD *)(this + 64); /*0x5c1b23*/
      *(_DWORD *)(this + 828) = 0; /*0x5c1b26*/
      String2 = 0; /*0x5c1b2c*/
      Array::GetElementAt(v9, &String2, 0); /*0x5c1b30*/
      v10 = 0; /*0x5c1b3a*/
      if ( g_MultiplayerOptions > 0 ) /*0x5c1b3e*/
      {
        while ( _strnicmp((const char *)(*(_DWORD *)(g_MultiplayerGameState + 4 * v10) + 88), String2, strlen(String2)) ) /*0x5c1b69*/
        {
          if ( ++v10 >= g_MultiplayerOptions ) /*0x5c1b73*/
            goto LABEL_25; /*0x5c1b73*/
        }
        g_GameRulesOptions = v10; /*0x5c1b79*/
        LoadScenarioClassByIndex(v10); /*0x5c1b7f*/
      }
  LABEL_25:
      if ( v10 == g_MultiplayerOptions ) /*0x5c1b8a*/
      {
        g_GameRulesOptions = 0; /*0x5c1b92*/
        LoadScenarioClassByIndex(0); /*0x5c1b9c*/
      }
    }
    goto LABEL_30; /*0x5c1ba1*/
  }
  return result; /*0x5c1c9f*/
}
}
// 0x5C1CB0
namespace gamemd {
void MPCooperative::COMStub()
{
  *(this + 832) = 1; /*0x5c1cb0*/
}
}
// 0x5C1CC0
namespace gamemd {
int MPCooperative::InitSession()
{
  int v2; // ebx
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v6; // [esp+10h] [ebp-8h] BYREF
  char *String2; // [esp+14h] [ebp-4h] BYREF

  v2 = 0; /*0x5c1ccd*/
  v6 = 0; /*0x5c1cd5*/
  String2 = 0; /*0x5c1cd9*/
  CampaignClass::GetValue((int)&g_DDrawSurfaceManager, &v6); /*0x5c1cdd*/
  if ( !v6 ) /*0x5c1ce6*/
    return -1; /*0x5c1ce6*/
  if ( !*(this + 16) ) /*0x5c1ce8*/
  {
    v3 = __2_YAPAXI_Z(0x70u); /*0x5c1cef*/
    if ( v3 ) /*0x5c1cf9*/
      v4 = MissionClass::Init(v3); /*0x5c1cfd*/
    else
      v4 = 0; /*0x5c1d04*/
    *(this + 16) = (int)v4; /*0x5c1d06*/
  }
  Movie::SetupScreen(*(this + 16), 0); /*0x5c1d0d*/
  Array::GetElementAt(*(this + 16), &String2, 0); /*0x5c1d1b*/
  if ( g_MultiplayerOptions <= 0 ) /*0x5c1d26*/
  {
  LABEL_10:
    (*(void (__thiscall **)(int *))(*this + 16))(this); /*0x5c1d5d*/
    return -1; /*0x5c1d6f*/
  }
  while ( _strnicmp((const char *)(*(_DWORD *)(g_MultiplayerGameState + 4 * v2) + 88), String2, strlen(String2)) ) /*0x5c1d51*/
  {
    if ( ++v2 >= g_MultiplayerOptions ) /*0x5c1d5b*/
      goto LABEL_10; /*0x5c1d5b*/
  }
  return v2; /*0x5c1d65*/
}
}
// 0x5C1DC0
namespace gamemd {
CampaignClass * * MPCooperative::Seek()
{
  char result; // al
  LRESULT v3; // edi
  void *v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  HWND GameUI; // eax
  int i; // edi
  int v13; // ebp
  int PlayerSide; // eax
  int v15; // [esp-8h] [ebp-20h]
  int v16; // [esp-8h] [ebp-20h]
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h] BYREF
  LRESULT v19; // [esp+14h] [ebp-4h] BYREF

  if ( !*(_DWORD *)(this + 64) ) /*0x5c1dc8*/
    return 0; /*0x5c1dd7*/
  CampaignClass::GetValue((int)&g_DDrawSurfaceManager, &v19); /*0x5c1de2*/
  v3 = MPCooperative_Helper(); /*0x5c1dec*/
  if ( v3 < v19 ) /*0x5c1df4*/
  {
    if ( Dialog::GetCurrentType() == 107 ) /*0x5c1e34*/
    {
      v4 = *(void **)(this + 64); /*0x5c1e36*/
      if ( v4 ) /*0x5c1e3b*/
      {
        Array::Cleanup(*(_DWORD *)(this + 64)); /*0x5c1e3f*/
        __3_YAXPAX_Z(v4); /*0x5c1e45*/
      }
      *(_DWORD *)(this + 64) = *(_DWORD *)(*(_DWORD *)(this + 808) + 4 * v3); /*0x5c1e58*/
      v5 = __2_YAPAXI_Z(0x70u); /*0x5c1e5b*/
      if ( v5 ) /*0x5c1e65*/
        v6 = MissionClass::Init(v5); /*0x5c1e69*/
      else
        v6 = 0; /*0x5c1e70*/
      *(_DWORD *)(*(_DWORD *)(this + 808) + 4 * v3) = v6; /*0x5c1e79*/
      Movie::SetupScreen(*(_DWORD *)(*(_DWORD *)(this + 808) + 4 * v3), v3); /*0x5c1e85*/
      *(_DWORD *)(this + 76) = v3; /*0x5c1e8a*/
      if ( Game_PlayerCount == 2 ) /*0x5c1e95*/
        String::AssignWideToChar( /*0x5c1ea6*/
          *(char **)(this + 64),
          *(char **)Game_PlayerInfoArray,
          *(char **)(Game_PlayerInfoArray + 4));
    }
    goto LABEL_16; /*0x5c1ea6*/
  }
  if ( Game_PlayerCount == 2 ) /*0x5c1dfd*/
    String::AssignWideToChar( /*0x5c1e0e*/
      *(char **)(this + 64),
      *(char **)Game_PlayerInfoArray,
      *(char **)(Game_PlayerInfoArray + 4));
  result = LoadCampaignCoopSave(*(char **)(this + 64)); /*0x5c1e16*/
  if ( result ) /*0x5c1e1d*/
  {
    *(_BYTE *)(this + 72) = 1; /*0x5c1e26*/
  LABEL_16:
    v15 = *(_DWORD *)(this + 828); /*0x5c1eab*/
    v17 = 0; /*0x5c1ebc*/
    Movie::GetSection((int)&g_DDrawSurfaceManager, v15, &v18); /*0x5c1ec4*/
    if ( v18 ) /*0x5c1ecf*/
    {
      v7 = *(_DWORD *)(this + 64); /*0x5c1eda*/
      if ( v7 && Movie::GetState(v7, &v17) ) /*0x5c1ee6*/
      {
        v8 = v17; /*0x5c1ef7*/
      }
      else
      {
        v8 = 0; /*0x5c1eef*/
        v17 = 0; /*0x5c1ef1*/
      }
      v9 = *(_DWORD *)(v18 + 32); /*0x5c1eff*/
      if ( v8 < v9 ) /*0x5c1f04*/
      {
        if ( v9 ) /*0x5c1f11*/
        {
          v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v18 + 20) + 4 * v8) + 16); /*0x5c1f22*/
          GameUI = (HWND)Dialog::FindGameUI(); /*0x5c1f25*/
          Campaign::SetupMovie((int *)this, GameUI); /*0x5c1f2d*/
          for ( i = 0; i < Game_PlayerCount; ++i ) /*0x5c1f3b*/
          {
            v13 = *(_DWORD *)this; /*0x5c1f43*/
            PlayerSide = SessionClass::GetPlayerSide(*(_DWORD *)(Game_PlayerInfoArray + 4 * i)); /*0x5c1f48*/
            if ( !(*(unsigned __int8 (__thiscall **)(int, int))(v13 + 28))(this, PlayerSide) ) /*0x5c1f50*/
            {
              if ( v10 <= 1 ) /*0x5c1f5a*/
              {
                v16 = SideClass::FindByName(**(void ***)(*(_DWORD *)(*(_DWORD *)(v18 + 20) + 4 * v17) + 4)); /*0x5c1f78*/
                SessionClass::SetPlayerOption(*(_DWORD *)(Game_PlayerInfoArray + 4 * i), v16); /*0x5c1f82*/
              }
              else
              {
                SessionClass::SetPlayerOption(*(_DWORD *)(Game_PlayerInfoArray + 4 * i), -2); /*0x5c1f5e*/
              }
            }
          }
          return 1; /*0x5c1f94*/
        }
        else
        {
          return 0; /*0x5c1f15*/
        }
      }
      else
      {
        return 0; /*0x5c1f08*/
      }
    }
    else
    {
      return 0; /*0x5c1ed3*/
    }
  }
  return result; /*0x5c1dcf*/
}
}
// 0x5C1FA0
namespace gamemd {
int MPCooperative::Revert()
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  v7 = 0; /*0x5c1faa*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, *(this + 207), &v8); /*0x5c1fbf*/
  if ( !v8 ) /*0x5c1fca*/
    return -2; /*0x5c1fcc*/
  v3 = *(this + 16); /*0x5c1fd6*/
  if ( v3 && Movie::GetState(v3, &v7) ) /*0x5c1fe2*/
  {
    v4 = v7; /*0x5c1ff3*/
  }
  else
  {
    v4 = 0; /*0x5c1feb*/
    v7 = 0; /*0x5c1fed*/
  }
  if ( v4 >= *(_DWORD *)(v8 + 32) ) /*0x5c1ffe*/
    return -2; /*0x5c2000*/
  v5 = *(_DWORD *)(*(_DWORD *)(v8 + 20) + 4 * v4); /*0x5c200d*/
  v6 = *(_DWORD *)(v5 + 16); /*0x5c2010*/
  if ( !v6 ) /*0x5c2015*/
    return -2; /*0x5c2017*/
  if ( v6 <= 1 ) /*0x5c2024*/
    return SideClass::FindByName(**(void ***)(v5 + 4)); /*0x5c2035*/
  return -2; /*0x5c1fd1*/
}
}
// 0x5C2040
namespace gamemd {
int MPCooperative::StartGame(int a2, void ** a3, void * Block, int a5, short a6, int a7, int a8, char * a9, char * a10)
{
  int v11; // ecx
  void *v13; // eax
  int v14[3]; // [esp-20h] [ebp-2Ch] BYREF
  __int16 v15; // [esp-14h] [ebp-20h]
  int v16; // [esp-10h] [ebp-1Ch]
  int v17; // [esp-Ch] [ebp-18h]
  char *v18; // [esp-8h] [ebp-14h]
  char *v19; // [esp-4h] [ebp-10h]
  int v20; // [esp+8h] [ebp-4h] BYREF

  if ( !*(_DWORD *)(this + 64) ) /*0x5c2045*/
  {
    MovieClass::Create((int *)this); /*0x5c204c*/
    *(_BYTE *)(this + 832) = 1; /*0x5c2051*/
  }
  v11 = *(_DWORD *)(this + 64); /*0x5c2058*/
  if ( v11 ) /*0x5c205d*/
  {
    Movie::GetSectionID(v11, &v20); /*0x5c208d*/
    if ( v20 != a2 ) /*0x5c209c*/
      *(_BYTE *)(this + 832) = 1; /*0x5c209e*/
    v19 = a10; /*0x5c20ad*/
    v18 = a9; /*0x5c20ae*/
    DynamicVectorClass::Copy(v14, &a3); /*0x5c20b9*/
    DecodeCampaignPlayerName(*(_DWORD *)(this + 64), a2, v14[0], (void *)v14[1], v14[2], v15, v16, v17, v18, v19); /*0x5c20c2*/
    v13 = Block; /*0x5c20c7*/
    *(_DWORD *)(this + 828) = a2; /*0x5c20cb*/
    a3 = &VectorClass<int>::`vftable'; /*0x5c20d3*/
    if ( v13 && HIBYTE(a6) ) /*0x5c20e3*/
      __3_YAXPAX_Z(v13); /*0x5c20e6*/
    return 1; /*0x5c20ef*/
  }
  else
  {
    a3 = &VectorClass<int>::`vftable'; /*0x5c2063*/
    if ( Block ) /*0x5c206d*/
    {
      if ( HIBYTE(a6) ) /*0x5c2075*/
        __3_YAXPAX_Z(Block); /*0x5c2078*/
    }
    return 0; /*0x5c2080*/
  }
}
}
// 0x5C2100
namespace gamemd {
int MPCooperative::EndGame(int a2, int a3, int a4)
{
  int v5; // ecx
  char v7; // bl
  HWND GameUI; // eax
  int v9[28]; // [esp-E0h] [ebp-F4h] BYREF
  int v10[28]; // [esp-70h] [ebp-84h] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  v5 = *(_DWORD *)(this + 64); /*0x5c2107*/
  if ( !v5 ) /*0x5c210c*/
    return 0; /*0x5c210e*/
  Movie::GetState(v5, &v11); /*0x5c211d*/
  qmemcpy(v10, (const void *)(a4 + 112), sizeof(v10)); /*0x5c2136*/
  qmemcpy(v9, (const void *)a4, sizeof(v9)); /*0x5c2141*/
  v7 = MPCooperative::validateMove( /*0x5c215b*/
         *(_DWORD **)(this + 64),
         a2,
         a3,
         v9[0],
         v9[1],
         v9[2],
         v9[3],
         v9[4],
         v9[5],
         v9[6],
         v9[7],
         v9[8],
         v9[9],
         v9[10],
         v9[11],
         v9[12],
         v9[13],
         v9[14],
         v9[15],
         v9[16],
         v9[17],
         v9[18],
         v9[19],
         v9[20],
         v9[21],
         v9[22],
         v9[23],
         v9[24],
         v9[25],
         v9[26],
         v9[27],
         v10[0],
         v10[1],
         v10[2],
         v10[3],
         v10[4],
         v10[5],
         v10[6],
         v10[7],
         v10[8],
         v10[9],
         v10[10],
         v10[11],
         v10[12],
         v10[13],
         v10[14],
         v10[15],
         v10[16],
         v10[17],
         v10[18],
         v10[19],
         v10[20],
         v10[21],
         v10[22],
         v10[23],
         v10[24],
         v10[25],
         v10[26],
         v10[27]);
  if ( v11 != a2 || *(_BYTE *)(this + 832) ) /*0x5c2165*/
  {
    GameUI = (HWND)Dialog::FindGameUI(); /*0x5c216f*/
    if ( GameUI ) /*0x5c2176*/
    {
      Campaign::SetupMovie((int *)this, GameUI); /*0x5c217b*/
      *(_BYTE *)(this + 832) = 0; /*0x5c2180*/
    }
  }
  return v7; /*0x5c2110*/
}
}
// 0x5C2680
namespace gamemd {
int MPCooperative::ProcessTurn()
{
  int v2; // ecx
  HWND GameUI; // eax

  v2 = *(_DWORD *)(this + 64); /*0x5c2683*/
  if ( !v2 ) /*0x5c2688*/
    return 0; /*0x5c268a*/
  Movie::GetSectionID(v2, (_DWORD *)(this + 828)); /*0x5c2695*/
  GameUI = (HWND)Dialog::FindGameUI(); /*0x5c269a*/
  if ( GameUI ) /*0x5c26a1*/
  {
    if ( *(_BYTE *)(this + 832) ) /*0x5c26a3*/
    {
      Campaign::SetupMovie((int *)this, GameUI); /*0x5c26b0*/
      *(_BYTE *)(this + 832) = 0; /*0x5c26b5*/
    }
  }
  return SerializeCampaignOptions(*(char **)(this + 64)); /*0x5c268c*/
}
}
// 0x5C2710
namespace gamemd {
int MPCooperative::SyncState()
{
  _DWORD *v2; // esi
  int v3; // ebp
  int v4; // edi
  int v5; // ebx
  int v6; // esi
  int v7; // edi
  _DWORD *v8; // ecx
  int *v9; // ebp
  int *v10; // ebx
  int v11; // esi
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // esi
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // edx
  int v25; // esi
  int *v26; // eax
  int v27; // eax
  int v28; // edx
  int v29; // eax
  int v30; // edx
  int v32; // [esp+8h] [ebp-1CCh]
  int i; // [esp+20h] [ebp-1B4h]
  int v34; // [esp+24h] [ebp-1B0h]
  int v35; // [esp+28h] [ebp-1ACh] BYREF
  _DWORD *v36; // [esp+2Ch] [ebp-1A8h]
  int v37; // [esp+30h] [ebp-1A4h]
  char v38[16]; // [esp+34h] [ebp-1A0h] BYREF
  char Buffer[400]; // [esp+44h] [ebp-190h] BYREF

  v32 = *(this + 207); /*0x5c2727*/
  v36 = this; /*0x5c272d*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, v32, &v35); /*0x5c2731*/
  sprintf(Buffer, "C1,%d", *(char *)(v35 + 8)); /*0x5c2749*/
  v2 = this + 105; /*0x5c2751*/
  v3 = 8; /*0x5c2757*/
  do /*0x5c2795*/
  {
    v4 = v2[2]; /*0x5c275e*/
    (*(void (__thiscall **)(_DWORD *))(*v2 + 12))(v2); /*0x5c2763*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v4, 0); /*0x5c276d*/
    v5 = v2[50]; /*0x5c2776*/
    (*(void (__thiscall **)(_DWORD *))(v2[48] + 12))(v2 + 48); /*0x5c2784*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(v2[48] + 8))(v2 + 48, v5, 0); /*0x5c278e*/
    v2 += 6; /*0x5c2791*/
    --v3; /*0x5c2794*/
  }
  while ( v3 ); /*0x5c2795*/
  v37 = Game_PlayerCount; /*0x5c27a1*/
  for ( i = 0; i < *(char *)(v35 + 8); ++i ) /*0x5c27b2*/
  {
    v6 = 0; /*0x5c27c7*/
    memset32(dword_ABF460, -2, 8u); /*0x5c27c9*/
    v7 = Game_PlayerCount; /*0x5c27cb*/
    if ( Game_PlayerCount > 0 ) /*0x5c27d3*/
    {
      do /*0x5c27ec*/
      {
        dword_ABF460[v6] = MPCooperative::finalizeSession(*(_DWORD *)(Game_PlayerInfoArray + 4 * v6)); /*0x5c27e2*/
        ++v6; /*0x5c27e9*/
      }
      while ( v6 < v7 ); /*0x5c27ec*/
    }
    v8 = v36; /*0x5c27ee*/
    v34 = 0; /*0x5c27f2*/
    v9 = dword_ABF460; /*0x5c27fa*/
    v10 = v36 + 107; /*0x5c27ff*/
    while ( 1 ) /*0x5c2815*/
    {
      if ( v34 >= v37 ) /*0x5c2815*/
      {
        v20 = (*(int (__thiscall **)(_DWORD *))(*v8 + 112))(v8); /*0x5c28d2*/
        v21 = *v10; /*0x5c28d4*/
        if ( v10[2] < *v10 /*0x5c28f7*/
          || (*((_BYTE *)v10 + 5) || !v21)
          && (v22 = v10[3], v22 > 0)
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(v10 - 2) + 8))(v10 - 2, v21 + v22, 0) )
        {
          v23 = v10[2]; /*0x5c28fe*/
          v24 = *(v10 - 1); /*0x5c2901*/
          v10[2] = v23 + 1; /*0x5c2907*/
          *(_DWORD *)(v24 + 4 * v23) = v20; /*0x5c290a*/
        }
        while ( 1 ) /*0x5c2921*/
        {
          v25 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 7); /*0x5c2921*/
          if ( v25 == -2 ) /*0x5c2926*/
            break; /*0x5c2926*/
          v26 = dword_ABF460; /*0x5c2928*/
          while ( *v26 != v25 ) /*0x5c292f*/
          {
            if ( (int)++v26 >= (int)&dword_ABF480 ) /*0x5c2939*/
              goto LABEL_31; /*0x5c2939*/
          }
        }
  LABEL_31:
        *v9 = v25; /*0x5c293b*/
        v27 = v10[48]; /*0x5c293e*/
        if ( v10[50] < v27 /*0x5c2975*/
          || (*((_BYTE *)v10 + 197) || !v27)
          && (v28 = v10[51], v28 > 0)
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v10[46] + 8))(v10 + 46, v27 + v28, 0) )
        {
          v29 = v10[50]; /*0x5c297c*/
          v30 = v10[47]; /*0x5c2982*/
          v10[50] = v29 + 1; /*0x5c298b*/
          *(_DWORD *)(v30 + 4 * v29) = v25; /*0x5c2991*/
        }
      }
      else
      {
        v11 = (*(int (__thiscall **)(_DWORD *))(*v8 + 108))(v8); /*0x5c2823*/
        v12 = *v10; /*0x5c2825*/
        if ( v10[2] < *v10 /*0x5c2848*/
          || (*((_BYTE *)v10 + 5) || !v12)
          && (v13 = v10[3], v13 > 0)
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(v10 - 2) + 8))(v10 - 2, v12 + v13, 0) )
        {
          v14 = v10[2]; /*0x5c284f*/
          v15 = *(v10 - 1); /*0x5c2852*/
          v10[2] = v14 + 1; /*0x5c2858*/
          *(_DWORD *)(v15 + 4 * v14) = v11; /*0x5c285b*/
        }
        v16 = v10[48]; /*0x5c285e*/
        if ( v10[50] < v16 /*0x5c289f*/
          || (*((_BYTE *)v10 + 197) || !v16)
          && (v17 = v10[51], v17 > 0)
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v10[46] + 8))(v10 + 46, v16 + v17, 0) )
        {
          v18 = v10[50]; /*0x5c28aa*/
          v19 = v10[47]; /*0x5c28b0*/
          v10[50] = v18 + 1; /*0x5c28b9*/
          *(_DWORD *)(v19 + 4 * v18) = *v9; /*0x5c28c2*/
        }
      }
      sprintf(v38, ",%d,%d", *(_DWORD *)(*(v10 - 1) + 4 * i), *(_DWORD *)(v10[47] + 4 * i)); /*0x5c29b3*/
      strcat(Buffer, v38); /*0x5c29df*/
      ++v9; /*0x5c29e3*/
      v10 += 6; /*0x5c29e9*/
      ++v34; /*0x5c29f9*/
      if ( (int)v9 >= (int)&dword_ABF480 ) /*0x5c29fd*/
        break; /*0x5c29fd*/
      v8 = v36; /*0x5c2807*/
    }
  }
  Debug::Log(); /*0x5c2a26*/
  Network::SendOptionsGame(Buffer); /*0x5c2a32*/
  Debug::Log(); /*0x5c2a3c*/
  return 1; /*0x5c2a46*/
}
}
// 0x5C2A60
namespace gamemd {
const char * MPCooperative::UpdateLobby(const char * a2, char * String)
{
  const char *result; // eax
  _DWORD *v5; // esi
  int v6; // ebp
  int v7; // edi
  int v8; // ebx
  int v9; // ebx
  char *v10; // esi
  char *v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  char *v21; // eax
  int v22; // edi
  int v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // ecx
  const char *v32; // [esp+20h] [ebp+4h]

  result = a2; /*0x5c2a61*/
  if ( a2 == (const char *)1 ) /*0x5c2a72*/
  {
    result = strtok(String, Delimiter); /*0x5c2a82*/
    if ( result ) /*0x5c2a8c*/
    {
      result = (const char *)atol(result); /*0x5c2a93*/
      v32 = result; /*0x5c2a9e*/
      if ( (int)result >= 1 ) /*0x5c2aa2*/
      {
        v5 = this + 105; /*0x5c2aa8*/
        v6 = 8; /*0x5c2aae*/
        do /*0x5c2aec*/
        {
          v7 = v5[2]; /*0x5c2ab5*/
          (*(void (__thiscall **)(_DWORD *))(*v5 + 12))(v5); /*0x5c2aba*/
          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v5 + 8))(v5, v7, 0); /*0x5c2ac4*/
          v8 = v5[50]; /*0x5c2acd*/
          (*(void (__thiscall **)(_DWORD *))(v5[48] + 12))(v5 + 48); /*0x5c2adb*/
          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(v5[48] + 8))(v5 + 48, v8, 0); /*0x5c2ae5*/
          v5 += 6; /*0x5c2ae8*/
          --v6; /*0x5c2aeb*/
        }
        while ( v6 ); /*0x5c2aec*/
        result = v32; /*0x5c2aee*/
        if ( (int)v32 > 0 ) /*0x5c2af4*/
        {
          do /*0x5c2c98*/
          {
            v9 = 8; /*0x5c2b02*/
            v10 = (char *)(this + 107); /*0x5c2b07*/
            do /*0x5c2c89*/
            {
              v11 = strtok(0, Delimiter); /*0x5c2b14*/
              if ( v11 ) /*0x5c2b1e*/
              {
                v12 = atol(v11); /*0x5c2b29*/
                v13 = *(_DWORD *)v10; /*0x5c2b2b*/
                if ( *((_DWORD *)v10 + 2) < *(_DWORD *)v10 /*0x5c2b51*/
                  || (v10[5] || !v13)
                  && (v14 = *((_DWORD *)v10 + 3), v14 > 0)
                  && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)v10 - 2) + 8))(
                       v10 - 8,
                       v13 + v14,
                       0) )
                {
                  v15 = *((_DWORD *)v10 + 2); /*0x5c2b58*/
                  v16 = *((_DWORD *)v10 - 1); /*0x5c2b5b*/
                  *((_DWORD *)v10 + 2) = v15 + 1; /*0x5c2b61*/
                  *(_DWORD *)(v16 + 4 * v15) = v12; /*0x5c2b64*/
                }
              }
              else
              {
                v17 = *(_DWORD *)v10; /*0x5c2b69*/
                if ( *((_DWORD *)v10 + 2) < *(_DWORD *)v10 /*0x5c2b8f*/
                  || (v10[5] || !v17)
                  && (v18 = *((_DWORD *)v10 + 3), v18 > 0)
                  && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)v10 - 2) + 8))(
                       v10 - 8,
                       v17 + v18,
                       0) )
                {
                  v19 = *((_DWORD *)v10 + 2); /*0x5c2b96*/
                  v20 = *((_DWORD *)v10 - 1); /*0x5c2b99*/
                  *((_DWORD *)v10 + 2) = v19 + 1; /*0x5c2b9f*/
                  *(_DWORD *)(v20 + 4 * v19) = -1; /*0x5c2ba2*/
                }
              }
              v21 = strtok(0, Delimiter); /*0x5c2bb0*/
              if ( v21 ) /*0x5c2bba*/
              {
                v22 = atol(v21); /*0x5c2bc8*/
                v23 = *((_DWORD *)v10 + 48); /*0x5c2bca*/
                if ( *((_DWORD *)v10 + 50) < v23 /*0x5c2c08*/
                  || (v10[197] || !v23)
                  && (v24 = *((_DWORD *)v10 + 51), v24 > 0)
                  && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)v10 + 46) + 8))(
                       v10 + 184,
                       v23 + v24,
                       0) )
                {
                  v25 = *((_DWORD *)v10 + 50); /*0x5c2c0f*/
                  v26 = *((_DWORD *)v10 + 47); /*0x5c2c15*/
                  *((_DWORD *)v10 + 50) = v25 + 1; /*0x5c2c1e*/
                  *(_DWORD *)(v26 + 4 * v25) = v22; /*0x5c2c24*/
                }
              }
              else
              {
                v27 = *((_DWORD *)v10 + 48); /*0x5c2c29*/
                if ( *((_DWORD *)v10 + 50) < v27 /*0x5c2c62*/
                  || (v10[197] || !v27)
                  && (v28 = *((_DWORD *)v10 + 51), v28 > 0)
                  && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)v10 + 46) + 8))(
                       v10 + 184,
                       v27 + v28,
                       0) )
                {
                  v29 = *((_DWORD *)v10 + 50); /*0x5c2c69*/
                  v30 = *((_DWORD *)v10 + 47); /*0x5c2c6f*/
                  *((_DWORD *)v10 + 50) = v29 + 1; /*0x5c2c78*/
                  *(_DWORD *)(v30 + 4 * v29) = -1; /*0x5c2c7e*/
                }
              }
              v10 += 24; /*0x5c2c85*/
              --v9; /*0x5c2c88*/
            }
            while ( v9 ); /*0x5c2c89*/
            result = --v32; /*0x5c2c93*/
          }
          while ( v32 ); /*0x5c2c98*/
        }
      }
    }
  }
  return result; /*0x5c2c9e*/
}
}
// 0x5C2D00
namespace gamemd {
void MPCooperative_Play(AnimClass * aP0, int a2, int a3)
{
  int v3; // ecx
  int v4; // ebp
  int i; // eax
  int v6; // ebx
  int j; // esi
  #375 *v8; // ecx
  int result; // eax
  char v10; // dl

  v3 = *(_DWORD *)(a2 + 16); /*0x5c2d07*/
  v4 = 0; /*0x5c2d0a*/
  for ( i = 0; i < v3; ++i ) /*0x5c2d15*/
  {
    if ( *(_BYTE *)(i + a3) ) /*0x5c2d17*/
      ++v4; /*0x5c2d1d*/
  }
  v6 = 0; /*0x5c2d28*/
  for ( j = 0; j < HouseClass_Count; ++j ) /*0x5c2d2e*/
  {
    v8 = *(#375 **)&HouseClass_Array->gap0[4 * j]; /*0x5c2d36*/
    if ( v8 && (unsigned __int8)House::IsCurrentPlayer(v8) ) /*0x5c2d3d*/
      ++v6; /*0x5c2d46*/
  }
  if ( v4 >= v6 ) /*0x5c2d53*/
  {
    result = *((_DWORD *)g_ScenarioClass_Instance + 1145); /*0x5c2d96*/
    if ( *(_BYTE *)(result + a3) ) /*0x5c2d9c*/
    {
      do /*0x5c2db4*/
      {
        if ( result >= *(_DWORD *)(a2 + 16) ) /*0x5c2dab*/
          break; /*0x5c2dab*/
        v10 = *(_BYTE *)(result + a3 + 1); /*0x5c2dad*/
        ++result; /*0x5c2db1*/
      }
      while ( v10 ); /*0x5c2db4*/
    }
  }
  else
  {
    for ( result = Random::Range( /*0x5c2d70*/
                     (_DWORD *)g_ScenarioClass_Instance + 134,
                     0,
                     *((_DWORD *)g_ScenarioClass_Instance + 1145) - 1);
          *(_BYTE *)(result + a3);
          result = (result + 1) % *((_DWORD *)g_ScenarioClass_Instance + 1145) )
    {
      ; /*0x5c2d86*/
    }
  }
  *(_BYTE *)(result + a3) = 1; /*0x5c2dba*/
  *((_DWORD *)g_ScenarioClass_Instance + result + 1120) = aP0; /*0x5c2dc7*/
  return result; /*0x5c2dc4*/
}
}
// 0x5C2DE0
namespace gamemd {
unsigned int * MPCooperative::selectTeam(unsigned int * a1, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // ebp
  int v6; // ecx
  int i; // eax
  int v8; // ebx
  int v9; // edi
  #375 *v10; // ecx
  int j; // eax
  int v12; // edx
  int v14; // eax
  char v15; // bl
  int v16; // ecx

  v4 = a3; /*0x5c2de0*/
  v5 = 0; /*0x5c2de6*/
  v6 = *(_DWORD *)(a3 + 16); /*0x5c2de8*/
  for ( i = 0; i < v6; ++i ) /*0x5c2df4*/
  {
    if ( *(_BYTE *)(i + a4) ) /*0x5c2df6*/
      ++v5; /*0x5c2dfc*/
  }
  v8 = 0; /*0x5c2e08*/
  v9 = 0; /*0x5c2e0a*/
  if ( HouseClass_Count > 0 ) /*0x5c2e0e*/
  {
    do /*0x5c2e2e*/
    {
      v10 = *(#375 **)&HouseClass_Array->gap0[4 * v9]; /*0x5c2e15*/
      if ( v10 && (unsigned __int8)House::IsCurrentPlayer(v10) ) /*0x5c2e1c*/
        ++v8; /*0x5c2e25*/
      ++v9; /*0x5c2e2b*/
    }
    while ( v9 < HouseClass_Count ); /*0x5c2e2e*/
    v4 = a3; /*0x5c2e30*/
  }
  if ( v5 >= v8 ) /*0x5c2e37*/
  {
    v14 = *((_DWORD *)g_ScenarioClass_Instance + 1145); /*0x5c2ea2*/
    if ( *(_BYTE *)(v14 + a4) ) /*0x5c2ea8*/
    {
      do /*0x5c2ebc*/
      {
        if ( v14 >= *(_DWORD *)(v4 + 16) ) /*0x5c2eb3*/
          break; /*0x5c2eb3*/
        v15 = *(_BYTE *)(v14 + a4 + 1); /*0x5c2eb5*/
        ++v14; /*0x5c2eb9*/
      }
      while ( v15 ); /*0x5c2ebc*/
    }
    *(_BYTE *)(v14 + a4) = 1; /*0x5c2ec2*/
    *((_DWORD *)g_ScenarioClass_Instance + v14 + 1120) = a2; /*0x5c2ecc*/
    v16 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v14); /*0x5c2ed8*/
    *a1 = v16; /*0x5c2ee0*/
    return a1; /*0x5c2edb*/
  }
  else
  {
    for ( j = Random::Range( /*0x5c2e54*/
                (_DWORD *)g_ScenarioClass_Instance + 134,
                0,
                *((_DWORD *)g_ScenarioClass_Instance + 1145) - 1);
          *(_BYTE *)(j + a4);
          j = (j + 1) % *((_DWORD *)g_ScenarioClass_Instance + 1145) )
    {
      ; /*0x5c2e6a*/
    }
    *(_BYTE *)(j + a4) = 1; /*0x5c2e76*/
    *((_DWORD *)g_ScenarioClass_Instance + j + 1120) = a2; /*0x5c2e83*/
    v12 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * j); /*0x5c2e91*/
    *a1 = v12; /*0x5c2e98*/
    return a1; /*0x5c2e94*/
  }
}
}
// 0x5C2EF0
namespace gamemd {
AbstractClass * * MPCooperative::GetPlayerCount(int a1)
{
  int v1; // eax
  _DWORD *v2; // ecx
  int i; // ebp
  char v4; // bl
  int v5; // edx
  _DWORD *v6; // edi
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // ebx
  int v10; // esi
  int v11; // ecx
  int v12; // ecx
  int *j; // eax
  int *v14; // edi
  _BYTE v16[16]; // [esp+4h] [ebp-28h] BYREF
  void **v17; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  char v19; // [esp+21h] [ebp-Bh]
  _DWORD *v20; // [esp+30h] [ebp+4h]

  Multiplayer::FindStartPositions(&v17); /*0x5c2eff*/
  v1 = 0; /*0x5c2f0a*/
  v2 = (char *)g_ScenarioClass_Instance + 4480; /*0x5c2f0c*/
  do /*0x5c2f2a*/
    v16[v1++] = *v2++ != -1; /*0x5c2f17*/
  while ( v1 < 16 ); /*0x5c2f2a*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x5c2f36*/
  {
    v4 = 0; /*0x5c2f44*/
    v5 = -1; /*0x5c2f46*/
    v6 = *(_DWORD **)&HouseClass_Array->gap0[4 * i]; /*0x5c2f49*/
    v20 = v6; /*0x5c2f4c*/
    if ( !*(_BYTE *)(v6[13] + 422) ) /*0x5c2f53*/
    {
      v7 = 0; /*0x5c2f67*/
      v8 = (char *)g_ScenarioClass_Instance + 4480; /*0x5c2f69*/
      do /*0x5c2f7e*/
      {
        if ( *v8 == i ) /*0x5c2f71*/
        {
          v4 = 1; /*0x5c2f73*/
          v5 = v7; /*0x5c2f75*/
        }
        ++v7; /*0x5c2f77*/
        ++v8; /*0x5c2f78*/
      }
      while ( v7 < 16 ); /*0x5c2f7e*/
      if ( v4 ) /*0x5c2f82*/
      {
        HouseClass::SetMapSeed(v6, *((_DWORD *)Block + v5)); /*0x5c3073*/
      }
      else
      {
        Debug::Log(); /*0x5c2f92*/
        v9 = MPCooperative_Play(i, (int)&v17, (int)v16); /*0x5c2fae*/
        v10 = 0; /*0x5c2fb5*/
        if ( Game_PlayerCount <= 0 ) /*0x5c2fb9*/
          goto LABEL_17; /*0x5c2fb9*/
        v11 = Game_PlayerInfoArray; /*0x5c2fc1*/
        while ( *(_DWORD *)(*(_DWORD *)v11 + 111) != i ) /*0x5c2fc8*/
        {
          ++v10; /*0x5c2fca*/
          v11 += 4; /*0x5c2fcb*/
          if ( v10 >= Game_PlayerCount ) /*0x5c2fd0*/
            goto LABEL_17; /*0x5c2fd0*/
        }
        if ( v10 == -1 ) /*0x5c2ff4*/
        {
  LABEL_17:
          v12 = 0; /*0x5c2fd2*/
          for ( j = g_CampaignSideIndex; (*(j - 16) == -1 || *j != -2) && (int)j < (int)g_CampaignFactionSlot; ++j ) /*0x5c2fd4*/
            ++v12; /*0x5c2feb*/
          g_CampaignSideIndex[v12] = v9; /*0x5c3031*/
          g_CampaignFactionSlot[v12] = 1; /*0x5c3038*/
        }
        else
        {
          SessionClass::SetOption(*(_DWORD *)(Game_PlayerInfoArray + 4 * v10), v9); /*0x5c2ffa*/
          SessionClass::SetOption2(*(_DWORD *)(Game_PlayerInfoArray + 4 * v10), 0); /*0x5c300a*/
          v14 = (int *)(Game_PlayerInfoArray + 4 * v10); /*0x5c3018*/
          SessionClass::GetOption2(*v14); /*0x5c301b*/
          SessionClass::GetOption(*v14); /*0x5c3023*/
        }
        Debug::Log(); /*0x5c3053*/
        HouseClass::SetMapSeed(v20, *((_DWORD *)Block + v9)); /*0x5c3067*/
      }
    }
  }
  v17 = &VectorClass<Cell>::`vftable'; /*0x5c308d*/
  if ( Block && v19 ) /*0x5c30a0*/
    __3_YAXPAX_Z(Block); /*0x5c30a3*/
  return 1; /*0x5c30ad*/
}
}
// 0x5C30C0
namespace gamemd {
ScenarioClass * * MPCooperative::BroadcastMessage()
{
  int v2; // ebp
  int v4; // edx
  int v5; // ecx
  int v6; // edi
  int *v7; // esi
  int v8; // eax
  int v9; // [esp+10h] [ebp-Ch] BYREF
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h] BYREF

  v2 = ReadPlayerCountMap(g_GameRulesOptions) - *((_DWORD *)g_ScenarioClass_Instance + 1145); /*0x5c30db*/
  Debug::Log(); /*0x5c30e7*/
  if ( v2 <= 0 ) /*0x5c30f3*/
    return 0; /*0x5c30f8*/
  g_Rules_AlliesAllowed = v2; /*0x5c30ff*/
  v4 = *(this + 207); /*0x5c3105*/
  v10 = 0; /*0x5c310f*/
  v9 = 0; /*0x5c311a*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, v4, &v11); /*0x5c311e*/
  if ( !v11 ) /*0x5c3129*/
    return 0; /*0x5c312e*/
  if ( !*(_DWORD *)(v11 + 56) ) /*0x5c3135*/
    return 0; /*0x5c313d*/
  v5 = *(this + 16); /*0x5c3144*/
  if ( !v5 || !Movie::GetState(v5, &v9) ) /*0x5c3150*/
    v9 = 0; /*0x5c3159*/
  if ( v9 >= *(_DWORD *)(v11 + 56) ) /*0x5c3168*/
    return 0; /*0x5c316d*/
  v6 = *((_DWORD *)g_ScenarioClass_Instance + 1145); /*0x5c3179*/
  if ( v6 < 8 ) /*0x5c3182*/
  {
    v7 = (int *)(4 * v6 + 11055740); /*0x5c3188*/
    do /*0x5c320b*/
    {
      if ( v10 >= v2 ) /*0x5c3198*/
      {
        *v7 = -1; /*0x5c31f0*/
        v7[8] = -1; /*0x5c31f2*/
        v7[16] = -1; /*0x5c31f5*/
        v7[24] = -1; /*0x5c31f8*/
        v7[32] = -1; /*0x5c31fb*/
      }
      else
      {
        Debug::Log(); /*0x5c31a0*/
        if ( dword_A8EB68 ) /*0x5c31af*/
          *v7 = dword_A8EB68 == 1; /*0x5c31c1*/
        else
          *v7 = 2; /*0x5c31b1*/
        Debug::Log(); /*0x5c31cb*/
        v8 = v10; /*0x5c31d0*/
        v7[8] = -2; /*0x5c31d7*/
        v7[16] = -2; /*0x5c31da*/
        v7[24] = -2; /*0x5c31de*/
        v7[32] = -2; /*0x5c31e1*/
        v10 = v8 + 1; /*0x5c31e7*/
      }
      ++v7; /*0x5c3201*/
      ++v6; /*0x5c3204*/
    }
    while ( (int)v7 < (int)g_CampaignPlayerArray ); /*0x5c320b*/
  }
  return 1; /*0x5c30f5*/
}
}
// 0x5C3220
namespace gamemd {
AbstractClass * * MPCooperative::GetMapData()
{
  int v0; // ebp
  int v1; // edi
  int v2; // eax
  int v3; // esi
  int v4; // ebp
  int v5; // edi
  int v6; // esi
  int v8; // [esp+10h] [ebp-Ch]
  int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+14h] [ebp-8h]
  int v12; // [esp+18h] [ebp-4h]
  int v13; // [esp+18h] [ebp-4h]

  Debug::Log(); /*0x5c322c*/
  if ( HouseClass_Count > 0 ) /*0x5c323b*/
  {
    v0 = 1; /*0x5c3241*/
    v8 = 0; /*0x5c3246*/
    v12 = 1; /*0x5c324e*/
    do /*0x5c337f*/
    {
      v1 = *(_DWORD *)&HouseClass_Array->gap0[v8]; /*0x5c325b*/
      ToWideStringChar((char *)(v1 + 90154)); /*0x5c3264*/
      Debug::Log(); /*0x5c3276*/
      if ( *(_BYTE *)(*(_DWORD *)(v1 + 52) + 422) || !*(_BYTE *)(v1 + 492) ) /*0x5c328f*/
      {
        v2 = HouseClass_Count; /*0x5c34e1*/
      }
      else
      {
        v2 = HouseClass_Count; /*0x5c329d*/
        v10 = v0; /*0x5c32a2*/
        if ( v0 < HouseClass_Count ) /*0x5c32a8*/
        {
          do /*0x5c3360*/
          {
            v3 = *(_DWORD *)&HouseClass_Array->gap0[4 * v0]; /*0x5c32b4*/
            ToWideStringChar((char *)(v3 + 90154)); /*0x5c32bf*/
            Debug::Log(); /*0x5c32ca*/
            if ( !*(_BYTE *)(*(_DWORD *)(v3 + 52) + 422) && *(_BYTE *)(v3 + 492) ) /*0x5c32df*/
            {
              ToWideStringChar((char *)(v3 + 90154)); /*0x5c32eb*/
              ToWideStringChar((char *)(v1 + 90154)); /*0x5c32f8*/
              Debug::Log(); /*0x5c3334*/
              HouseClass::HandleAlliance(v1, v3, 0); /*0x5c3341*/
              HouseClass::HandleAlliance(v3, v1, 0); /*0x5c334b*/
              v0 = v10; /*0x5c3350*/
            }
            v2 = HouseClass_Count; /*0x5c3354*/
            v10 = ++v0; /*0x5c335c*/
          }
          while ( v0 < HouseClass_Count ); /*0x5c3360*/
          v0 = v12; /*0x5c3366*/
        }
      }
      ++v0; /*0x5c3371*/
      v8 += 4; /*0x5c3372*/
      v12 = v0; /*0x5c3376*/
    }
    while ( v0 - 1 < v2 ); /*0x5c337f*/
    if ( v2 > 0 ) /*0x5c3387*/
    {
      v4 = 1; /*0x5c338d*/
      v9 = 0; /*0x5c3392*/
      v11 = 1; /*0x5c339a*/
      do /*0x5c34d1*/
      {
        v5 = *(_DWORD *)&HouseClass_Array->gap0[v9]; /*0x5c33a8*/
        ToWideStringChar((char *)(v5 + 90154)); /*0x5c33b1*/
        Debug::Log(); /*0x5c33c3*/
        if ( !*(_BYTE *)(*(_DWORD *)(v5 + 52) + 422) && !*(_BYTE *)(v5 + 492) ) /*0x5c33dc*/
        {
          v13 = v4; /*0x5c33ef*/
          if ( v4 < HouseClass_Count ) /*0x5c33f5*/
          {
            do /*0x5c34ac*/
            {
              v6 = *(_DWORD *)&HouseClass_Array->gap0[4 * v4]; /*0x5c3400*/
              ToWideStringChar((char *)(v6 + 90154)); /*0x5c340b*/
              Debug::Log(); /*0x5c3416*/
              if ( !*(_BYTE *)(*(_DWORD *)(v6 + 52) + 422) && !*(_BYTE *)(v6 + 492) ) /*0x5c342b*/
              {
                ToWideStringChar((char *)(v6 + 90154)); /*0x5c3437*/
                ToWideStringChar((char *)(v5 + 90154)); /*0x5c3444*/
                Debug::Log(); /*0x5c3480*/
                HouseClass::HandleAlliance(v5, v6, 0); /*0x5c348d*/
                HouseClass::HandleAlliance(v6, v5, 0); /*0x5c3497*/
                v4 = v13; /*0x5c349c*/
              }
              v13 = ++v4; /*0x5c34a8*/
            }
            while ( v4 < HouseClass_Count ); /*0x5c34ac*/
            v4 = v11; /*0x5c34b2*/
          }
        }
        ++v4; /*0x5c34c3*/
        v9 += 4; /*0x5c34c4*/
        v11 = v4; /*0x5c34c8*/
      }
      while ( v4 - 1 < HouseClass_Count ); /*0x5c34d1*/
    }
  }
  return 1; /*0x5c34d7*/
}
}
// 0x5C34F0
namespace gamemd {
int MPCooperative::ReceiveMessage()
{
  int v2; // ecx
  int v3; // edi
  char v4; // bl
  int v6; // ecx
  int v7; // ebp
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h] BYREF

  v2 = *(this + 16); /*0x5c34fd*/
  v3 = g_SuperWeaponTypeArray; /*0x5c3500*/
  v4 = 0; /*0x5c3509*/
  v13 = 0; /*0x5c350b*/
  Movie::GetSectionID(v2, &v13); /*0x5c350f*/
  v11 = 0; /*0x5c3523*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, v13, &v12); /*0x5c3527*/
  if ( !v12 ) /*0x5c3530*/
    return 0; /*0x5c3535*/
  v6 = *(this + 16); /*0x5c353c*/
  if ( !v6 || !Movie::GetState(v6, &v11) ) /*0x5c3548*/
    v11 = 0; /*0x5c3551*/
  if ( v11 >= *(_DWORD *)(v12 + 32) ) /*0x5c3560*/
    return 0; /*0x5c3565*/
  v7 = v3 - 1; /*0x5c356c*/
  do /*0x5c35c2*/
  {
    v8 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v7); /*0x5c3586*/
    v9 = 0; /*0x5c358c*/
    v10 = *(_DWORD *)(*(_DWORD *)(v12 + 20) + 4 * v11); /*0x5c3591*/
    if ( *(int *)(v10 + 16) > 0 ) /*0x5c3599*/
    {
      do /*0x5c35be*/
      {
        if ( v8 == SideClass::FindByName(*(void **)(*(_DWORD *)(v10 + 4) + 4 * v9)) ) /*0x5c35a8*/
          v4 = 1; /*0x5c35aa*/
        ++v9; /*0x5c35b4*/
        v10 = *(_DWORD *)(*(_DWORD *)(v12 + 20) + 4 * v11); /*0x5c35b8*/
      }
      while ( v9 < *(_DWORD *)(v10 + 16) ); /*0x5c35be*/
    }
  }
  while ( !v4 ); /*0x5c35c2*/
  ToWideStringChar(*(char **)(*((_DWORD *)g_SuperWeaponTypeCount + v8) + 96)); /*0x5c35d0*/
  Debug::Log(); /*0x5c35dc*/
  return v8; /*0x5c3532*/
}
}
// 0x5C35F0
namespace gamemd {
int MPCooperative::HandleEvent()
{
  int v2; // ecx
  int v3; // edi
  char v4; // bl
  int v6; // ecx
  int v7; // ebp
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h] BYREF

  v2 = *(this + 16); /*0x5c35fd*/
  v3 = g_SuperWeaponTypeArray; /*0x5c3600*/
  v4 = 0; /*0x5c3609*/
  v13 = 0; /*0x5c360b*/
  Movie::GetSectionID(v2, &v13); /*0x5c360f*/
  v11 = 0; /*0x5c3623*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, v13, &v12); /*0x5c3627*/
  if ( !v12 ) /*0x5c3630*/
    return 0; /*0x5c3635*/
  v6 = *(this + 16); /*0x5c363c*/
  if ( !v6 || !Movie::GetState(v6, &v11) ) /*0x5c3648*/
    v11 = 0; /*0x5c3651*/
  if ( v11 >= *(_DWORD *)(v12 + 56) ) /*0x5c3660*/
    return 0; /*0x5c3665*/
  v7 = v3 - 1; /*0x5c366c*/
  do /*0x5c36c2*/
  {
    v8 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v7); /*0x5c3686*/
    v9 = 0; /*0x5c368c*/
    v10 = *(_DWORD *)(*(_DWORD *)(v12 + 44) + 4 * v11); /*0x5c3691*/
    if ( *(int *)(v10 + 16) > 0 ) /*0x5c3699*/
    {
      do /*0x5c36be*/
      {
        if ( v8 == SideClass::FindByName(*(void **)(*(_DWORD *)(v10 + 4) + 4 * v9)) ) /*0x5c36a8*/
          v4 = 1; /*0x5c36aa*/
        ++v9; /*0x5c36b4*/
        v10 = *(_DWORD *)(*(_DWORD *)(v12 + 44) + 4 * v11); /*0x5c36b8*/
      }
      while ( v9 < *(_DWORD *)(v10 + 16) ); /*0x5c36be*/
    }
  }
  while ( !v4 ); /*0x5c36c2*/
  ToWideStringChar(*(char **)(*((_DWORD *)g_SuperWeaponTypeCount + v8) + 96)); /*0x5c36d0*/
  Debug::Log(); /*0x5c36dc*/
  return v8; /*0x5c3632*/
}
}
// 0x5C3B10
namespace gamemd {
void MPCooperative::LoadSettings(HWND hWnd, int a3, int a4)
{
  int v4; // edi
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  char *v8; // ecx
  void *v9; // eax
  int i; // ebp
  _DWORD *v11; // eax
  _DWORD *v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  signed int v17; // ebp
  LPARAM v18; // edi
  int v19; // esi
  char *v20; // ecx
  LPARAM v21; // edi
  int v22; // esi
  wchar_t *StringCSF; // eax
  int v24; // [esp+10h] [ebp-334h] BYREF
  int v25; // [esp+14h] [ebp-330h]
  int v26; // [esp+18h] [ebp-32Ch]
  void **v27; // [esp+1Ch] [ebp-328h] BYREF
  void *Block; // [esp+20h] [ebp-324h]
  int v29; // [esp+24h] [ebp-320h]
  int v30; // [esp+28h] [ebp-31Ch]
  int v31; // [esp+2Ch] [ebp-318h]
  int v32; // [esp+30h] [ebp-314h]
  const char *v33; // [esp+34h] [ebp-310h] BYREF
  char Buffer[260]; // [esp+38h] [ebp-30Ch] BYREF
  wchar_t v35[260]; // [esp+13Ch] [ebp-208h] BYREF

  v4 = this; /*0x5c3b1a*/
  v26 = this; /*0x5c3b1c*/
  v5 = *(_DWORD *)(this + 80); /*0x5c3b20*/
  *(_BYTE *)(this + 4) = 1; /*0x5c3b23*/
  if ( !v5 ) /*0x5c3b29*/
  {
    v6 = __2_YAPAXI_Z(8u); /*0x5c3b2d*/
    if ( v6 ) /*0x5c3b37*/
      v7 = MPCooperative::initGame(v6); /*0x5c3b3b*/
    else
      v7 = 0; /*0x5c3b42*/
    *(_DWORD *)(v4 + 80) = v7; /*0x5c3b44*/
  }
  SendMessageA(hWnd, 0x184u, 0, 0); /*0x5c3b58*/
  v8 = *(char **)(v4 + 64); /*0x5c3b5e*/
  *(_BYTE *)(v4 + 73) = 0; /*0x5c3b61*/
  if ( v8 ) /*0x5c3b6c*/
  {
    if ( Game_PlayerCount != 2 ) /*0x5c3ba4*/
      String::AssignWideToChar(v8, (char *)&g_TypeClass_DefaultString, (char *)&g_TypeClass_DefaultString); /*0x5c3bb0*/
  }
  else if ( Game_PlayerCount == 2 ) /*0x5c3b71*/
  {
    v9 = __2_YAPAXI_Z(0x70u); /*0x5c3b75*/
    if ( v9 ) /*0x5c3b7f*/
      *(_DWORD *)(v4 + 64) = MPCooperative::processTurn( /*0x5c3b95*/
                               (int)v9,
                               *(char **)Game_PlayerInfoArray,
                               *(char **)(Game_PlayerInfoArray + 4));
    else
      *(_DWORD *)(v4 + 64) = 0; /*0x5c3b9c*/
  }
  if ( !*(_DWORD *)(v4 + 820) ) /*0x5c3bb5*/
  {
    CampaignClass::GetValue((int)&g_DDrawSurfaceManager, &v24); /*0x5c3bcd*/
    for ( i = 0; i < v24; ++i ) /*0x5c3bda*/
    {
      v11 = __2_YAPAXI_Z(0x70u); /*0x5c3be4*/
      if ( v11 ) /*0x5c3bee*/
        v12 = MissionClass::Init(v11); /*0x5c3bf7*/
      else
        v12 = 0; /*0x5c3bfb*/
      Movie::SetupScreen((int)v12, i); /*0x5c3c00*/
      v13 = *(_DWORD *)(v4 + 812); /*0x5c3c05*/
      if ( *(_DWORD *)(v4 + 820) >= v13 ) /*0x5c3c0d*/
      {
        if ( !*(_BYTE *)(v4 + 817) && v13 ) /*0x5c3c18*/
          continue; /*0x5c3c18*/
        v14 = *(_DWORD *)(v4 + 824); /*0x5c3c1a*/
        if ( v14 <= 0 /*0x5c3c2a*/
          || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v4 + 804) + 8))(v4 + 804, v13 + v14, 0) )
        {
          continue; /*0x5c3c2a*/
        }
      }
      v15 = *(_DWORD *)(v4 + 820); /*0x5c3c31*/
      v16 = *(_DWORD *)(v4 + 808); /*0x5c3c34*/
      *(_DWORD *)(v4 + 820) = v15 + 1; /*0x5c3c3a*/
      *(_DWORD *)(v16 + 4 * v15) = v12; /*0x5c3c3d*/
    }
  }
  v17 = 0; /*0x5c3c49*/
  IsometricTileTypeClass::Constructor_0(&v27, 0, 0); /*0x5c3c51*/
  v27 = &DynamicVectorClass<unsigned short *>::`vftable'; /*0x5c3c60*/
  v32 = 10; /*0x5c3c68*/
  v31 = 0; /*0x5c3c70*/
  SmallFunc_49E740((int)&g_DDrawSurfaceManager, &v27); /*0x5c3c74*/
  v25 = v29; /*0x5c3c86*/
  if ( v29 > 0 ) /*0x5c3c8a*/
  {
    do /*0x5c3d96*/
    {
      if ( *((_DWORD *)Block + v17) ) /*0x5c3c94*/
      {
        Array::GetElementAt(*(_DWORD *)(*(_DWORD *)(v4 + 808) + 4 * v17), &v33, -1); /*0x5c3cae*/
        v24 = *(_DWORD *)(a3 + 16); /*0x5c3cc5*/
        v18 = 0; /*0x5c3cc9*/
        sprintf(Buffer, "%s.MAP", v33); /*0x5c3ccb*/
        v19 = 0; /*0x5c3cd7*/
        if ( v24 <= 0 ) /*0x5c3cdb*/
        {
  LABEL_34:
          Debug::Log(); /*0x5c3d61*/
        }
        else
        {
          while ( !v18 ) /*0x5c3ce3*/
          {
            if ( !_strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v19) + 88), Buffer) ) /*0x5c3cf4*/
              v18 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v19); /*0x5c3d03*/
            if ( ++v19 >= v24 ) /*0x5c3d0d*/
            {
              if ( !v18 ) /*0x5c3d11*/
                goto LABEL_34; /*0x5c3d11*/
              break; /*0x5c3d11*/
            }
          }
          swprintf(v35, (const size_t)aDS_0, (const wchar_t *const)(v17 + 1), *((_DWORD *)Block + v17)); /*0x5c3d13*/
          SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)v35); /*0x5c3d4b*/
          SendMessageA(hWnd, 0x19Au, v17, v18); /*0x5c3d59*/
        }
        __3_YAXPAX_Z(*((void **)Block + v17)); /*0x5c3d83*/
        v4 = v26; /*0x5c3d88*/
      }
      ++v17; /*0x5c3d93*/
    }
    while ( v17 < v25 ); /*0x5c3d96*/
  }
  v20 = *(char **)(v4 + 64); /*0x5c3d9c*/
  if ( v20 ) /*0x5c3da1*/
  {
    if ( MPCooperative::ReadCoopSaveINI(v20) && !*(_BYTE *)(v4 + 73) ) /*0x5c3db4*/
    {
      LoadCoopCampaignSave(*(char **)(v4 + 64), Buffer); /*0x5c3dc7*/
      strcat(Buffer, g_Str_File__MAP); /*0x5c3df1*/
      v25 = *(_DWORD *)(a3 + 16); /*0x5c3dfb*/
      v21 = 0; /*0x5c3e01*/
      v22 = 0; /*0x5c3e03*/
      if ( v25 > 0 ) /*0x5c3e07*/
      {
        while ( !v21 ) /*0x5c3e0b*/
        {
          if ( !_strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v22) + 88), Buffer) ) /*0x5c3e1c*/
            v21 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v22); /*0x5c3e2b*/
          if ( ++v22 >= v25 ) /*0x5c3e35*/
          {
            if ( !v21 ) /*0x5c3e39*/
              goto LABEL_47; /*0x5c3e39*/
            break; /*0x5c3e39*/
          }
        }
        StringCSF = GetStringCSF(aTxtCoopUseSave, 0, g_Str_File_MPCoop_cpp, 1726); /*0x5c3e3b*/
        SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)StringCSF); /*0x5c3e67*/
        SendMessageA(hWnd, 0x19Au, v17, v21); /*0x5c3e71*/
        *(_BYTE *)(v26 + 73) = 1; /*0x5c3e77*/
      }
    }
  }
  LABEL_47:
  SendMessageA(hWnd, 0x186u, 0, 0); /*0x5c3e7b*/
  v27 = &VectorClass<unsigned short *>::`vftable'; /*0x5c3e9b*/
  if ( Block ) /*0x5c3ea4*/
  {
    if ( BYTE1(v30) ) /*0x5c3eac*/
      __3_YAXPAX_Z(Block); /*0x5c3eaf*/
  }
}
}
// 0x5C3F80
namespace gamemd {
void MPCooperative::SetGameMode()
{
  HWND Current; // eax
  HWND DlgItem; // edi
  LRESULT v4; // ebx
  char *v5; // esi
  int v6; // ecx
  int v7; // ebx
  int i; // edi
  HWND GameUI; // eax
  HWND v10; // edi
  const char *v11; // [esp+10h] [ebp-108h] BYREF
  char Buffer[260]; // [esp+14h] [ebp-104h] BYREF

  if ( Dialog::GetCurrentType() != 107 ) /*0x5c3f94*/
  {
    v6 = *(_DWORD *)(this + 64); /*0x5c4013*/
    if ( v6 && *(_BYTE *)(this + 72) ) /*0x5c401e*/
    {
      if ( *(_DWORD *)(this + 76) ) /*0x5c4029*/
        Movie::SetupScreen(v6, 0); /*0x5c4032*/
      else
        Movie::SetupScreen(v6, 1); /*0x5c403f*/
      Movie::SetupScreen(*(_DWORD *)(this + 64), *(_DWORD *)(this + 76)); /*0x5c403b*/
      Array::GetElementAt(*(_DWORD *)(this + 64), &v11, -1); /*0x5c405a*/
      v7 = g_MultiplayerOptions; /*0x5c4063*/
      sprintf(Buffer, "%s.MAP", v11); /*0x5c4074*/
      for ( i = 0; i < v7; ++i ) /*0x5c4080*/
      {
        if ( !_strcmpi((const void *)(*(_DWORD *)(g_MultiplayerGameState + 4 * i) + 88), Buffer) ) /*0x5c4094*/
          break; /*0x5c409e*/
      }
      g_GameRulesOptions = i; /*0x5c40ab*/
      *((_DWORD *)g_ScenarioClass_Instance + 1173) = i; /*0x5c40b3*/
      LoadScenarioClassByIndex(i); /*0x5c40b9*/
    }
    GameUI = (HWND)Dialog::FindGameUI(); /*0x5c40be*/
    v10 = GameUI; /*0x5c40c3*/
    if ( GameUI ) /*0x5c40c7*/
    {
      SetDialogPlayerName(GameUI, this); /*0x5c40cd*/
      Dialog::ShowPlayerName(v10); /*0x5c40d4*/
      Session::PrepareGame(v10); /*0x5c40db*/
    }
    CheckGameSettingsChanged(1, 1); /*0x5c40e4*/
  LABEL_21:
    v5 = *(char **)(this + 64); /*0x5c40e9*/
    if ( !v5 ) /*0x5c40ee*/
      return; /*0x5c40ee*/
    goto LABEL_22; /*0x5c40ee*/
  }
  if ( !*(_BYTE *)(this + 73) ) /*0x5c3f9b*/
    goto LABEL_21; /*0x5c3f9b*/
  Current = Dialog::GetCurrent(); /*0x5c3fa6*/
  DlgItem = GetDlgItem(Current, 1363); /*0x5c3fba*/
  v4 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x5c3fc6*/
  if ( v4 != -1 ) /*0x5c3fcb*/
  {
    if ( SendMessageA(DlgItem, 0x188u, 0, 0) == v4 - 1 ) /*0x5c3fee*/
      SendMessageA(DlgItem, 0x186u, v4 - 2, 0); /*0x5c3ffc*/
    SendMessageA(DlgItem, 0x182u, v4 - 1, 0); /*0x5c4008*/
    *(_BYTE *)(this + 73) = 0; /*0x5c400a*/
    goto LABEL_21; /*0x5c400e*/
  }
  v5 = *(char **)(this + 64); /*0x5c3fcd*/
  if ( !v5 ) /*0x5c3fd2*/
    return; /*0x5c3fd2*/
  LABEL_22:
  String::AssignWideToChar(v5, (char *)&g_TypeClass_DefaultString, (char *)&g_TypeClass_DefaultString); /*0x5c40f0*/
}
}
// 0x5C4110
namespace gamemd {
AbstractClass * * MPCooperative::ProcessChat()
{
  LRESULT v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  char *v5; // ecx
  LPARAM v6; // ebp
  int v7; // edi
  int v8; // esi
  bool v9; // zf
  HWND Current; // eax
  HWND DlgItem; // esi
  WPARAM v12; // ebx
  wchar_t *String; // eax
  wchar_t *v14; // eax
  char Destination[260]; // [esp+14h] [ebp-104h] BYREF

  v2 = *(this + 16); /*0x5c4120*/
  if ( !v2 ) /*0x5c4125*/
  {
    v3 = __2_YAPAXI_Z(0x70u); /*0x5c4129*/
    if ( v3 ) /*0x5c4133*/
      v4 = MissionClass::Init(v3); /*0x5c4137*/
    else
      v4 = 0; /*0x5c413e*/
    *(this + 16) = (LRESULT)v4; /*0x5c4144*/
    LOBYTE(v2) = Movie::SetupScreen((int)v4, 0); /*0x5c4147*/
  }
  v5 = (char *)*(this + 16); /*0x5c414c*/
  if ( v5 ) /*0x5c4151*/
  {
    if ( Game_PlayerCount == 2 ) /*0x5c415e*/
      String::AssignWideToChar(v5, *(char **)Game_PlayerInfoArray, *(char **)(Game_PlayerInfoArray + 4)); /*0x5c416c*/
    (*(void (__thiscall **)(LRESULT *))(*this + 96))(this); /*0x5c4175*/
    LOBYTE(v2) = MPCooperative::ReadCoopSaveINI(*(this + 16)); /*0x5c417b*/
    if ( (_BYTE)v2 ) /*0x5c4182*/
    {
      if ( Dialog::GetCurrentType() == 107 ) /*0x5c4190*/
      {
        LOBYTE(v2) = *((_BYTE *)this + 73); /*0x5c4196*/
        if ( !(_BYTE)v2 ) /*0x5c419b*/
        {
          LoadCoopCampaignSave(Destination); /*0x5c41a9*/
          LOBYTE(v2) = 0; /*0x5c41b6*/
          v6 = 0; /*0x5c41c2*/
          strcat(Destination, g_Str_File__MAP); /*0x5c41d5*/
          v7 = g_MultiplayerOptions; /*0x5c41de*/
          v8 = 0; /*0x5c41e4*/
          if ( g_MultiplayerOptions > 0 ) /*0x5c41e8*/
          {
            v2 = g_MultiplayerGameState; /*0x5c41ee*/
            while ( !v6 ) /*0x5c41f5*/
            {
              v9 = _strcmpi((const void *)(*(_DWORD *)(v2 + 4 * v8) + 88), Destination) == 0; /*0x5c420b*/
              v2 = g_MultiplayerGameState; /*0x5c420d*/
              if ( v9 ) /*0x5c4212*/
                v6 = *(_DWORD *)(g_MultiplayerGameState + 4 * v8); /*0x5c4214*/
              if ( ++v8 >= v7 ) /*0x5c421a*/
              {
                if ( !v6 ) /*0x5c421e*/
                  return v2; /*0x5c421e*/
                break; /*0x5c421e*/
              }
            }
            Current = Dialog::GetCurrent(); /*0x5c4224*/
            DlgItem = GetDlgItem(Current, 1363); /*0x5c423d*/
            v2 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x5c4247*/
            v12 = v2; /*0x5c4249*/
            if ( v2 != -1 ) /*0x5c424e*/
            {
              String = GetStringCSF(aTxtCoopUseSave, 0, g_Str_File_MPCoop_cpp, 1914); /*0x5c4261*/
              SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)String); /*0x5c426f*/
              LOBYTE(v2) = SendMessageA(DlgItem, 0x19Au, v12, v6); /*0x5c4279*/
              *((_BYTE *)this + 73) = 1; /*0x5c4282*/
            }
          }
        }
      }
      else
      {
        v14 = GetStringCSF(aTxtSaveCampAva, 0, g_Str_File_MPCoop_cpp, 1920); /*0x5c429f*/
        LOBYTE(v2) = (unsigned __int8)Dialog::ShowMessage(-1, (size_t)v14); /*0x5c42a7*/
      }
    }
  }
  return v2; /*0x5c427f*/
}
}
// 0x5C42D0
namespace gamemd {
int MPCooperative::UpdateMovieScore()
{
  void *v2; // eax
  int v3; // eax
  int v5; // ecx
  int v6; // esi
  _DWORD *v7; // eax
  bool v8; // zf
  int v9; // eax
  char v10; // bl
  int v11; // [esp+14h] [ebp-2Ch] BYREF
  int v12; // [esp+18h] [ebp-28h] BYREF
  int v13; // [esp+1Ch] [ebp-24h] BYREF
  int v14; // [esp+20h] [ebp-20h] BYREF
  _BYTE v15[4]; // [esp+24h] [ebp-1Ch] BYREF
  void **v16; // [esp+28h] [ebp-18h] BYREF
  void *Block; // [esp+2Ch] [ebp-14h]
  char v18; // [esp+35h] [ebp-Bh]
  int v19; // [esp+38h] [ebp-8h]
  int v20; // [esp+3Ch] [ebp-4h]

  if ( !*(this + 20) ) /*0x5c42db*/
  {
    v2 = __2_YAPAXI_Z(8u); /*0x5c42e2*/
    if ( v2 ) /*0x5c42ec*/
      v3 = MPCooperative::initGame(v2); /*0x5c42f0*/
    else
      v3 = 0; /*0x5c42f7*/
    *(this + 20) = v3; /*0x5c42f9*/
  }
  if ( !*(this + 16) ) /*0x5c42fc*/
    return 0; /*0x5c4301*/
  MPCooperative::applyVoteResult(0, 0); /*0x5c4311*/
  v16 = &DynamicVectorClass<MPlayerScoreType *>::`vftable'; /*0x5c4323*/
  v20 = 10; /*0x5c432b*/
  v19 = 0; /*0x5c4333*/
  MPCooperative::BuildScoreEntries(&v16, v15); /*0x5c4337*/
  v5 = *(this + 16); /*0x5c433c*/
  v12 = 0; /*0x5c4344*/
  if ( Movie::GetSectionID(v5, &v11) ) /*0x5c4348*/
    Movie::GetSection((int)&g_DDrawSurfaceManager, v11, &v12); /*0x5c4369*/
  else
    v11 = -1; /*0x5c4354*/
  MPCooperative::GetMovieScore(&v14); /*0x5c43a5*/
  Movie::GetState(*(this + 16), &v13); /*0x5c43b2*/
  if ( v12 ) /*0x5c43bb*/
  {
    if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x5c43d8*/
      Timer::GetTicks(); /*0x5c43dd*/
    v6 = *(_DWORD *)*(this + 20); /*0x5c43f0*/
  }
  else
  {
    if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x5c440f*/
      Timer::GetTicks(); /*0x5c4414*/
    v6 = *(_DWORD *)*(this + 20); /*0x5c4425*/
  }
  MPCooperative::processTurnEnd(&v16); /*0x5c4441*/
  (*(void (__thiscall **)(_DWORD))(v6 + 4))(*(this + 20)); /*0x5c4449*/
  if ( v19 ) /*0x5c4452*/
  {
    do /*0x5c449c*/
    {
      v7 = Block; /*0x5c4454*/
      if ( *(_DWORD *)Block ) /*0x5c4458*/
      {
        __3_YAXPAX_Z(*(void **)Block); /*0x5c4461*/
        v7 = Block; /*0x5c4466*/
      }
      *v7 = 0; /*0x5c446d*/
      v8 = v19 == 0; /*0x5c4477*/
      if ( v19 > 0 ) /*0x5c4479*/
      {
        v9 = 0; /*0x5c447c*/
        v8 = v19-- == 1; /*0x5c447e*/
        if ( v19 > 0 ) /*0x5c4484*/
        {
          do /*0x5c4498*/
          {
            ++v9; /*0x5c448a*/
            *((_DWORD *)Block + v9 - 1) = *((_DWORD *)Block + v9); /*0x5c448e*/
          }
          while ( v9 < v19 ); /*0x5c4498*/
          v8 = v19 == 0; /*0x5c449a*/
        }
      }
    }
    while ( !v8 ); /*0x5c449c*/
  }
  v10 = byte_89E04C; /*0x5c44a2*/
  byte_89E04C = 0; /*0x5c44aa*/
  v16 = &VectorClass<MPlayerScoreType *>::`vftable'; /*0x5c44b1*/
  if ( Block ) /*0x5c44b9*/
  {
    if ( v18 ) /*0x5c44c1*/
      __3_YAXPAX_Z(Block); /*0x5c44c4*/
  }
  return v10; /*0x5c4303*/
}
}
// 0x5C44E0
namespace gamemd {
void MPCooperative::ShowScoreScreen(int a2)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // ecx
  int v7; // ecx
  void (__thiscall **v8)(_DWORD *, int); // edi
  _DWORD *v9; // eax
  bool v10; // zf
  int v11; // eax
  _DWORD v12[6]; // [esp-14h] [ebp-58h] BYREF
  int v13; // [esp+4h] [ebp-40h]
  LPARAM v14; // [esp+8h] [ebp-3Ch]
  void ***v15; // [esp+Ch] [ebp-38h]
  int *v16; // [esp+10h] [ebp-34h]
  int v17; // [esp+1Ch] [ebp-28h] BYREF
  int v18; // [esp+20h] [ebp-24h] BYREF
  int v19; // [esp+24h] [ebp-20h] BYREF
  int v20; // [esp+28h] [ebp-1Ch] BYREF
  void **v21; // [esp+2Ch] [ebp-18h] BYREF
  void *Block; // [esp+30h] [ebp-14h]
  char v23; // [esp+39h] [ebp-Bh]
  int v24; // [esp+3Ch] [ebp-8h]
  int v25; // [esp+40h] [ebp-4h]

  v3 = *(this + 16); /*0x5c44e7*/
  if ( v3 ) /*0x5c44ec*/
  {
    MPCooperative::GetMovieScore(v3, &v19); /*0x5c44f7*/
    Movie::GetState(*(this + 16), &v18); /*0x5c4504*/
    if ( (_BYTE)a2 ) /*0x5c450f*/
    {
      if ( v18 >= v19 ) /*0x5c451f*/
      {
        v4 = __2_YAPAXI_Z(4u); /*0x5c4527*/
        if ( v4 ) /*0x5c4531*/
        {
          v5 = MPCooperative::startGame(v4); /*0x5c453e*/
          if ( v5 ) /*0x5c4542*/
          {
            MPCooperative::applyVoteResult(&v21, 0, 0); /*0x5c4550*/
            v16 = &v20; /*0x5c455d*/
            v15 = &v21; /*0x5c455e*/
            v6 = *(this + 16); /*0x5c455f*/
            v21 = &DynamicVectorClass<MPlayerScoreType *>::`vftable'; /*0x5c4562*/
            v25 = 10; /*0x5c456a*/
            v24 = 0; /*0x5c4572*/
            MPCooperative::BuildScoreEntries(v6, (int)&v21, &v20); /*0x5c457a*/
            v7 = *(this + 16); /*0x5c457f*/
            v17 = 0; /*0x5c4587*/
            if ( Movie::GetSectionID(v7, &a2) ) /*0x5c458f*/
              Movie::GetSection((int)&g_DDrawSurfaceManager, a2, &v17); /*0x5c45b1*/
            else
              a2 = -1; /*0x5c4598*/
            v8 = (void (__thiscall **)(_DWORD *, int))*v5; /*0x5c45bf*/
            v16 = *(int **)(v17 + 4); /*0x5c45ca*/
            v15 = (void ***)(a2 + 1); /*0x5c45cf*/
            v14 = dword_A8EB68; /*0x5c45d0*/
            v13 = v20; /*0x5c45d1*/
            MPCooperative::processTurnEnd(v12, &v21); /*0x5c45dc*/
            ((void (__thiscall *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, LPARAM, void ***, int *))v8[1])( /*0x5c45e3*/
              v5,
              v12[0],
              v12[1],
              v12[2],
              v12[3],
              v12[4],
              v12[5],
              v13,
              v14,
              v15,
              v16);
            (*(void (__thiscall **)(_DWORD *, int))*v5)(v5, 1); /*0x5c45ec*/
            if ( v24 ) /*0x5c45f4*/
            {
              do /*0x5c463c*/
              {
                v9 = Block; /*0x5c45f6*/
                if ( *(_DWORD *)Block ) /*0x5c45fa*/
                {
                  __3_YAXPAX_Z(*(void **)Block); /*0x5c4601*/
                  v9 = Block; /*0x5c4606*/
                }
                *v9 = 0; /*0x5c460d*/
                v10 = v24 == 0; /*0x5c4617*/
                if ( v24 > 0 ) /*0x5c4619*/
                {
                  v11 = 0; /*0x5c461c*/
                  v10 = v24-- == 1; /*0x5c461e*/
                  if ( v24 > 0 ) /*0x5c4624*/
                  {
                    do /*0x5c4638*/
                    {
                      ++v11; /*0x5c462a*/
                      *((_DWORD *)Block + v11 - 1) = *((_DWORD *)Block + v11); /*0x5c462e*/
                    }
                    while ( v11 < v24 ); /*0x5c4638*/
                    v10 = v24 == 0; /*0x5c463a*/
                  }
                }
              }
              while ( !v10 ); /*0x5c463c*/
            }
            v21 = &VectorClass<MPlayerScoreType *>::`vftable'; /*0x5c4642*/
            if ( Block ) /*0x5c464c*/
            {
              if ( v23 ) /*0x5c4654*/
                __3_YAXPAX_Z(Block); /*0x5c4657*/
            }
          }
        }
      }
    }
  }
}
}
// 0x5C4CA0
namespace gamemd {
IPXInterfaceClass * * MPCooperative::InitializePlayers()
{
  int v2; // ebx
  int result; // eax
  int v4; // esi
  char *v5; // eax
  char *v6; // esi
  int v7; // eax
  _DWORD *v8; // [esp+8h] [ebp-14h]
  int v9; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+10h] [ebp-Ch] BYREF
  _BYTE v11[8]; // [esp+14h] [ebp-8h] BYREF

  PtrVector::Destroy(&g_PlayerInfoCount); /*0x5c4cac*/
  v2 = 0; /*0x5c4cb1*/
  g_ScenarioLoadFlags = 0; /*0x5c4cb3*/
  result = *(this + 26); /*0x5c4cb9*/
  if ( result > 0 ) /*0x5c4cbe*/
  {
    do /*0x5c4e7b*/
    {
      v4 = 0; /*0x5c4ccb*/
      if ( HouseClass_Count > 0 ) /*0x5c4ccf*/
      {
        while ( _wcsicmp( /*0x5c4cf5*/
                  (const wchar_t *)(*(_DWORD *)&HouseClass_Array->gap0[4 * v4] + 90154),
                  *(const wchar_t **)(*(this + 23) + 4 * v2)) )
        {
          if ( ++v4 >= HouseClass_Count ) /*0x5c4cff*/
            goto LABEL_16; /*0x5c4cff*/
        }
        *(_DWORD *)(*(_DWORD *)(*(this + 23) + 4 * v2) + 111) = v4; /*0x5c4d11*/
        v5 = (char *)__2_YAPAXI_Z(0x85u); /*0x5c4d14*/
        v6 = v5; /*0x5c4d19*/
        if ( v5 ) /*0x5c4d20*/
        {
          Waypoint::InitInvalid(v5 + 40); /*0x5c4d25*/
          v8 = v6; /*0x5c4d2a*/
        }
        else
        {
          v8 = 0; /*0x5c4d30*/
          v6 = 0; /*0x5c4d38*/
        }
        wcscpy((wchar_t *)v6, *(const wchar_t **)(*(this + 23) + 4 * v2)); /*0x5c4d44*/
        *(_DWORD *)(v6 + 123) = *(_DWORD *)(*(_DWORD *)(*(this + 23) + 4 * v2) + 123); /*0x5c4d55*/
        *(_DWORD *)(v6 + 75) = *(_DWORD *)(*(_DWORD *)(*(this + 23) + 4 * v2) + 75); /*0x5c4d61*/
        *(_DWORD *)(v6 + 83) = *(_DWORD *)(*(_DWORD *)(*(this + 23) + 4 * v2) + 83); /*0x5c4d6f*/
        strcpy(v6 + 52, (const char *)(*(_DWORD *)(*(this + 23) + 4 * v2) + 52)); /*0x5c4d90*/
        *(_DWORD *)((char *)v8 + 79) = *(_DWORD *)(*(_DWORD *)(*(this + 23) + 4 * v2) + 79); /*0x5c4da6*/
        *(_DWORD *)((char *)v8 + 87) = *(_DWORD *)(*(_DWORD *)(*(this + 23) + 4 * v2) + 87); /*0x5c4db2*/
        *(_DWORD *)((char *)v8 + 107) = *(_DWORD *)(*(_DWORD *)(*(this + 23) + 4 * v2) + 107); /*0x5c4dbe*/
        *(_DWORD *)((char *)v8 + 115) = *(_DWORD *)(*(_DWORD *)(*(this + 23) + 4 * v2) + 115); /*0x5c4dca*/
        *(_DWORD *)((char *)v8 + 119) = *(_DWORD *)(*(_DWORD *)(*(this + 23) + 4 * v2) + 119); /*0x5c4dd6*/
        *(_DWORD *)((char *)v8 + 123) = *(_DWORD *)(*(_DWORD *)(*(this + 23) + 4 * v2) + 123); /*0x5c4deb*/
        Network::GetAddress((_DWORD *)(*(_DWORD *)(*(this + 23) + 4 * v2) + 40), &v10, (int)v11, &v9); /*0x5c4dfd*/
        NetworkID::Assign(v8 + 10, &v10, (int)v11, v9); /*0x5c4e14*/
        if ( Game_PlayerCount < dword_A8DA7C /*0x5c4e50*/
          || (byte_A8DA81 || !dword_A8DA7C)
          && dword_A8DA88 > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_PlayerInfoCount + 8))(
               &g_PlayerInfoCount,
               dword_A8DA7C + dword_A8DA88,
               0) )
        {
          v7 = Game_PlayerCount++; /*0x5c4e5d*/
          *(_DWORD *)(Game_PlayerInfoArray + 4 * v7) = v8; /*0x5c4e6c*/
        }
        ++g_ScenarioLoadFlags; /*0x5c4e6f*/
      }
  LABEL_16:
      result = *(this + 26); /*0x5c4e75*/
      ++v2; /*0x5c4e78*/
    }
    while ( v2 < result ); /*0x5c4e7b*/
  }
  return result; /*0x5c4e83*/
}
}
// 0x5C4F10
namespace gamemd {
void MPCooperative_QueryInterface()
{
  MPCooperative_Cleanup(Block, a2); /*0x5c4f13*/
  if ( (a3 & 1) != 0 ) /*0x5c4f1d*/
    __3_YAXPAX_Z(Block); /*0x5c4f20*/
  return Block; /*0x5c4f2a*/
}
}
// 0x5C4F30
namespace gamemd {
unsigned int * MPCooperative::processTurnEnd(unsigned int * a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  *(this + 1) = 0; /*0x5c4f3d*/
  *(this + 2) = 0; /*0x5c4f40*/
  *((_BYTE *)this + 12) = 1; /*0x5c4f43*/
  *((_BYTE *)this + 13) = 0; /*0x5c4f47*/
  *this = &VectorClass<MPlayerScoreType *>::`vftable'; /*0x5c4f4a*/
  if ( this != a2 ) /*0x5c4f50*/
  {
    MPCooperative::ddtor((int)this); /*0x5c4f52*/
    v3 = a2[2]; /*0x5c4f58*/
    *(this + 2) = v3; /*0x5c4f5d*/
    if ( v3 ) /*0x5c4f60*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x5c4f66*/
      *(this + 1) = v4; /*0x5c4f70*/
      if ( v4 ) /*0x5c4f73*/
      {
        v5 = *(this + 2); /*0x5c4f75*/
        v6 = 0; /*0x5c4f78*/
        *((_BYTE *)this + 13) = 1; /*0x5c4f7c*/
        if ( v5 > 0 ) /*0x5c4f80*/
        {
          do /*0x5c4f94*/
          {
            *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x5c4f8b*/
            ++v6; /*0x5c4f91*/
          }
          while ( v6 < *(this + 2) ); /*0x5c4f94*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x5c4f98*/
      *((_BYTE *)this + 13) = 0; /*0x5c4f9b*/
    }
  }
  *(this + 4) = a2[4]; /*0x5c4fa1*/
  *(this + 5) = a2[5]; /*0x5c4fa7*/
  *this = &DynamicVectorClass<MPlayerScoreType *>::`vftable'; /*0x5c4faa*/
  return this; /*0x5c4fb2*/
}
}
// 0x696F30
namespace gamemd {
int MPCooperative::finalizeSession()
{
  int result; // eax

  result = -2; /*0x696f33*/
  if ( *(_DWORD *)(this + 87) != -2 || *(_DWORD *)(this + 83) != -1 ) /*0x696f40*/
    return *(_DWORD *)(this + 83); /*0x696f42*/
  return result; /*0x696f45*/
}
}
// 0x46D330
namespace gamemd {
unsigned int * MPCooperative::initGame()
{
  *this = &CampaignScoreClass::`vftable'; /*0x46d334*/
  *(this + 1) = 0; /*0x46d33a*/
  dword_89E050 = 0; /*0x46d33d*/
  dword_81B1E8 = -1; /*0x46d343*/
  return this; /*0x46d34d*/
}
} // namespace gamemd

// 0x470C00
namespace gamemd {
unsigned int * MPCooperative::startGame()
{
  *this = &CampaignEndScoreClass::`vftable'; /*0x470c04*/
  dword_89E008 = -1; /*0x470c0a*/
  dword_89E020 = 0; /*0x470c14*/
  dword_89DFD4 = 0; /*0x470c1a*/
  return this; /*0x470c20*/
}
} // namespace gamemd

// 0x49BCA0
namespace gamemd {
char MPCooperative::GetMovieScore(CampaignEndScoreClass * aP1)
{
  if ( !*(_BYTE *)(this + 108) ) /*0x49bca0*/
    return 0; /*0x49bca7*/
  *aP1 = *(_DWORD *)(this + 64); /*0x49bcb3*/
  return 1; /*0x49bca9*/
}
} // namespace gamemd

// 0x5C1980
namespace gamemd {
int sub_5C1980()
{
  int result; // eax
  int v1; // ebp
  int i; // ebx
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+8h] [ebp-4h] BYREF

  result = -1; /*0x5c198a*/
  v1 = 0; /*0x5c198d*/
  v3 = -1; /*0x5c1991*/
  if ( dword_89F574 > 0 ) /*0x5c1995*/
  {
    do /*0x5c1a00*/
    {
      Movie::GetSection((int)&g_DDrawSurfaceManager, v1, &v4); /*0x5c19a5*/
      for ( i = 0; i < 780; i += 260 ) /*0x5c19aa*/
      {
        if ( g_GameRulesOptions ) /*0x5c19b3*/
        {
          if ( !_strnicmp( /*0x5c19da*/
                  (const char *)(*(_DWORD *)(g_MultiplayerGameState + 4 * g_GameRulesOptions) + 88),
                  (const char *)(*(_DWORD *)(v4 + 12) + i),
                  strlen((const char *)(*(_DWORD *)(v4 + 12) + i))) )
            v3 = v1; /*0x5c19e6*/
        }
      }
      ++v1; /*0x5c19fd*/
    }
    while ( v1 < dword_89F574 ); /*0x5c1a00*/
    return v3; /*0x5c1a02*/
  }
  return result; /*0x5c1a09*/
}
} // namespace gamemd

// 0x5C1D80
namespace gamemd {
char MPCooperative::Write(int a2)
{
  char *v2; // ecx

  if ( Game_PlayerCount == 2 ) /*0x5c1d8b*/
  {
    v2 = *(this + 16); /*0x5c1d8d*/
    if ( v2 ) /*0x5c1d92*/
      String::AssignWideToChar(v2, *(char **)Game_PlayerInfoArray, *(char **)(Game_PlayerInfoArray + 4)); /*0x5c1da0*/
  }
  return ScenarioClass::MissionStubReturnZero2(a2); /*0x5c1db1*/
}
} // namespace gamemd

// 0x5C21A0
namespace gamemd {
HWND MPCooperative::CheckReady(HWND hDlg)
{
  HWND result; // eax

  result = GetDlgItem(hDlg, 1842); /*0x5c21aa*/
  if ( result ) /*0x5c21b2*/
    return (HWND)PostMessageA(result, 0x405u, 1u, dword_A8EB68); /*0x5c21c3*/
  return result; /*0x5c21c9*/
}
} // namespace gamemd

// 0x5C2640
namespace gamemd {
void MPCooperative::Clone(HWND hDlg)
{
  int v3; // edi
  char *i; // esi
  int ResourceID2CSF; // eax

  if ( hDlg ) /*0x5c264a*/
  {
    v3 = Game_PlayerCount; /*0x5c264e*/
    for ( i = 0; (int)i < v3; ++i ) /*0x5c2658*/
    {
      ResourceID2CSF = GetResourceID2CSF(i); /*0x5c265c*/
      MovieClass::ReadConfig(this, hDlg, ResourceID2CSF); /*0x5c2665*/
    }
    CampaignCoop::Setup(this, hDlg, 1); /*0x5c2674*/
  }
}
} // namespace gamemd

// 0x5C2CB0
namespace gamemd {
char MPCooperative::ValidateSettings()
{
  HWND GameUI; // eax

  GameUI = (HWND)Dialog::FindGameUI(); /*0x5c2cb3*/
  if ( GameUI || (GameUI = (HWND)Dialog::FindByHandle((void *)0xBC6)) != 0 ) /*0x5c2cc8*/
    CampaignCoop::Setup(this, GameUI, 1); /*0x5c2ccf*/
  return 1; /*0x5c2cd6*/
}
} // namespace gamemd

// 0x5C2CE0
namespace gamemd {
int MPCooperative::SaveSettings(HWND hWnd, int a3)
{
  return ListBox::FillPlayers(this, hWnd, a3); /*0x5c2cef*/
}
} // namespace gamemd

// 0x5C3700
namespace gamemd {
char MPCooperative::StubReturnFalse()
{
  return 0; /*0x5c3702*/
}
} // namespace gamemd

// 0x5C3F30
namespace gamemd {
int MPCooperative::Cleanup()
{
  HWND GameUI; // eax
  HWND v3; // esi
  int result; // eax

  GameUI = (HWND)Dialog::FindGameUI(); /*0x5c3f34*/
  v3 = GameUI; /*0x5c3f39*/
  if ( GameUI ) /*0x5c3f3d*/
  {
    CampaignCoop::Setup(this, GameUI, 0); /*0x5c3f44*/
    SkirmishDialog::FillComboBoxes(v3); /*0x5c3f4b*/
  }
  for ( result = 0; result < Game_PlayerCount; ++result ) /*0x5c3f5c*/
    *(_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * result) + 107) = result; /*0x5c3f67*/
  return result; /*0x5c3f58*/
}
} // namespace gamemd

// 0x5C42C0
namespace gamemd {
int MPCooperative::COMStub_Ret2()
{
  return 2; /*0x5c42c5*/
}
} // namespace gamemd

// 0x5C4670
namespace gamemd {
int MPCooperative::checkVictory()
{
  int v2; // esi
  int v3; // ecx
  int v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h] BYREF
  int v7; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x5c4677*/
  v3 = *(this + 16); /*0x5c4679*/
  if ( !v3 ) /*0x5c467e*/
    return 0; /*0x5c4681*/
  MPCooperative::GetMovieScore(v3, &v5); /*0x5c468d*/
  Movie::GetState(*(this + 16), &v6); /*0x5c469a*/
  if ( v5 == v6 ) /*0x5c46a9*/
  {
    Movie::GetSectionID(*(this + 16), &v7); /*0x5c46b3*/
    v2 = 1 << v7; /*0x5c46c1*/
    Debug::Log(); /*0x5c46ca*/
  }
  return v2; /*0x5c4680*/
}
} // namespace gamemd

// 0x5C4E90
namespace gamemd {
char MPCooperative::spawnUnits(int a2, void * Block, int a4, short a5, int a6, int a7, unsigned int * a8)
{
  *a8 = 0; /*0x5c4e94*/
  if ( *(this + 16) ) /*0x5c4e9a*/
  {
    if ( Block ) /*0x5c4ea7*/
    {
      if ( HIBYTE(a5) ) /*0x5c4eaf*/
        __3_YAXPAX_Z(Block); /*0x5c4eb2*/
    }
    return 1; /*0x5c4eba*/
  }
  else
  {
    if ( Block && HIBYTE(a5) ) /*0x5c4ec9*/
      __3_YAXPAX_Z(Block); /*0x5c4ecc*/
    return 0; /*0x5c4ed4*/
  }
}
} // namespace gamemd

// 0x5C4EE0
namespace gamemd {
char MPCooperative::assignResources()
{
  return 1; /*0x5c4ee2*/
}
} // namespace gamemd

// 0x5C4EF0
namespace gamemd {
char MPCooperative::setUpAlliances()
{
  return 1; /*0x5c4ef2*/
}
} // namespace gamemd

// 0x5C4F00
namespace gamemd {
char MPCooperative::initTurnOrder()
{
  return 0; /*0x5c4f02*/
}
} // namespace gamemd

// 0x5C4FC0
namespace gamemd {
DynamicVector * MPCooperative::saveGameState(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x5c4fc3*/
  *this = &VectorClass<MPlayerScoreType *>::`vftable'; /*0x5c4fc6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x5c4fd0*/
  {
    __3_YAXPAX_Z(v3); /*0x5c4fd8*/
    *(this + 1) = 0; /*0x5c4fe0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x5c4feb*/
  *(this + 2) = 0; /*0x5c4ff1*/
  if ( (a2 & 1) != 0 ) /*0x5c4ff8*/
    __3_YAXPAX_Z(this); /*0x5c4ffb*/
  return this; /*0x5c5005*/
}
} // namespace gamemd

// 0x5C5010
namespace gamemd {
void MPCooperative::loadGameState()
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5c5016*/
  *(_DWORD *)(this + 16) = 0; /*0x5c5019*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5c5020*/
  {
    __3_YAXPAX_Z(v2); /*0x5c5026*/
    *(_DWORD *)(this + 4) = 0; /*0x5c502e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5c5031*/
  *(_DWORD *)(this + 8) = 0; /*0x5c5034*/
}
} // namespace gamemd

// 0x5C5040
namespace gamemd {
unsigned int MPCooperative::syncPlayers(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5c5040*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5c5055*/
  else
    return 0; /*0x5c5047*/
}
} // namespace gamemd

// 0x5C5060
namespace gamemd {
int MPCooperative::dispatchEvent(int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x5c506a*/
}
} // namespace gamemd

// 0x5C50D0
namespace gamemd {
void MPCooperative::processPlayerInput()
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5c50d6*/
  *(_DWORD *)(this + 16) = 0; /*0x5c50d9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5c50e0*/
  {
    __3_YAXPAX_Z(v2); /*0x5c50e6*/
    *(_DWORD *)(this + 4) = 0; /*0x5c50ee*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5c50f1*/
  *(_DWORD *)(this + 8) = 0; /*0x5c50f4*/
}
} // namespace gamemd

// 0x5C5100
namespace gamemd {
unsigned int MPCooperative::updateGameClock(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5c5100*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5c5115*/
  else
    return 0; /*0x5c5107*/
}
} // namespace gamemd

// 0x5C5130
namespace gamemd {
char MPCooperative::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x5c5132*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5c513d*/
  {
    v3 = 0; /*0x5c513f*/
    if ( v2 <= 0 ) /*0x5c5143*/
      return 1; /*0x5c5163*/
    v4 = (_DWORD *)*(this + 1); /*0x5c5145*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5c514b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5c5154*/
    {
      ++v3; /*0x5c5156*/
      ++v4; /*0x5c5157*/
      if ( v3 >= v2 ) /*0x5c515c*/
        return 1; /*0x5c515c*/
    }
  }
  return 0; /*0x5c515e*/
}
} // namespace gamemd

// 0x5C5170
namespace gamemd {
char MPCooperative::Release(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5c517c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5c5186*/
    if ( a3 ) /*0x5c518c*/
      v4 = a3; /*0x5c51a2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5c519e*/
    *((_BYTE *)this + 12) = 1; /*0x5c51a6*/
    if ( v4 ) /*0x5c51aa*/
    {
      if ( *((_DWORD *)this + 1) ) /*0x5c51b5*/
      {
        v6 = *((_DWORD *)this + 2); /*0x5c51bc*/
        if ( a2 < v6 ) /*0x5c51c1*/
          v6 = a2; /*0x5c51c3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x5c51c9*/
          ++i; /*0x5c51ce*/
        if ( *((_BYTE *)this + 13) ) /*0x5c51db*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5c51e6*/
          *((_DWORD *)this + 1) = 0; /*0x5c51ee*/
        }
      }
      *((_DWORD *)this + 1) = v4; /*0x5c51f7*/
      *((_DWORD *)this + 2) = a2; /*0x5c51ff*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5c5202*/
      return 1; /*0x5c5208*/
    }
    else
    {
      return 0; /*0x5c51af*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5c5212*/
    return 1; /*0x5c5218*/
  }
}
} // namespace gamemd

// 0x5C5220
namespace gamemd {
void MPCooperative::ddtor()
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5c522d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5c5233*/
    *(_DWORD *)(this + 4) = 0; /*0x5c523b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5c523e*/
  *(_DWORD *)(this + 8) = 0; /*0x5c5241*/
}
} // namespace gamemd

// 0x5C5250
namespace gamemd {
int MPCooperative::checkTimeout(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5c5250*/
    return 0; /*0x5c5258*/
  v3 = *(_DWORD *)(this + 8); /*0x5c525e*/
  result = 0; /*0x5c5261*/
  if ( v3 <= 0 ) /*0x5c5265*/
    return -1; /*0x5c527c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5c526b*/
  {
    if ( ++result >= v3 ) /*0x5c527a*/
      return -1; /*0x5c527a*/
  }
  return result; /*0x5c525a*/
}
} // namespace gamemd

// 0x5C5290
namespace gamemd {
unsigned int MPCooperative::handleDisconnect(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5c5290*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5c52a5*/
  else
    return 0; /*0x5c5297*/
}
} // namespace gamemd

// 0x5C52B0
namespace gamemd {
char MPCooperative::migrateHost(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5c52bc*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5c52c2*/
    if ( a3 ) /*0x5c52c8*/
      v4 = a3; /*0x5c52de*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5c52da*/
    *((_BYTE *)this + 12) = 1; /*0x5c52e2*/
    if ( !v4 ) /*0x5c52e6*/
      return 0; /*0x5c535a*/
    if ( *((_DWORD *)this + 1) ) /*0x5c52e8*/
    {
      v5 = *((_DWORD *)this + 2); /*0x5c52ef*/
      if ( a2 < v5 ) /*0x5c52f4*/
        v5 = a2; /*0x5c52f6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x5c52fc*/
        ++i; /*0x5c5301*/
      if ( *((_BYTE *)this + 13) ) /*0x5c530e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5c5319*/
        *((_DWORD *)this + 1) = 0; /*0x5c5321*/
      }
    }
    *((_DWORD *)this + 1) = v4; /*0x5c532a*/
    *((_DWORD *)this + 2) = a2; /*0x5c5332*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5c5335*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5c533e*/
  }
  v7 = *((_DWORD *)this + 2); /*0x5c5341*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x5c5349*/
    *((_DWORD *)this + 4) = v7; /*0x5c534b*/
  return 1; /*0x5c534e*/
}
} // namespace gamemd

// 0x5C5360
namespace gamemd {
int MPCooperative::validatePlayerAction(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x5c5360*/
  result = 0; /*0x5c5363*/
  if ( v2 <= 0 ) /*0x5c5368*/
    return -1; /*0x5c537f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x5c536e*/
  {
    if ( ++result >= v2 ) /*0x5c537d*/
      return -1; /*0x5c537d*/
  }
  return result; /*0x5c5382*/
}
}
// 0x5C53D0
namespace gamemd {
char MPCooperative::processTeamChat(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5c53dc*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5c53e6*/
    if ( a3 ) /*0x5c53ec*/
      v4 = a3; /*0x5c5402*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5c53fe*/
    *((_BYTE *)this + 12) = 1; /*0x5c5406*/
    if ( v4 ) /*0x5c540a*/
    {
      if ( *((_DWORD *)this + 1) ) /*0x5c5415*/
      {
        v6 = *((_DWORD *)this + 2); /*0x5c541c*/
        if ( a2 < v6 ) /*0x5c5421*/
          v6 = a2; /*0x5c5423*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x5c5429*/
          ++i; /*0x5c542e*/
        if ( *((_BYTE *)this + 13) ) /*0x5c543b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5c5446*/
          *((_DWORD *)this + 1) = 0; /*0x5c544e*/
        }
      }
      *((_DWORD *)this + 1) = v4; /*0x5c5457*/
      *((_DWORD *)this + 2) = a2; /*0x5c545f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5c5462*/
      return 1; /*0x5c5468*/
    }
    else
    {
      return 0; /*0x5c540f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5c5472*/
    return 1; /*0x5c5478*/
  }
}
} // namespace gamemd

// 0x5C5480
namespace gamemd {
void MPCooperative::updateScoreBoard()
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5c548d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5c5493*/
    *(_DWORD *)(this + 4) = 0; /*0x5c549b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5c549e*/
  *(_DWORD *)(this + 8) = 0; /*0x5c54a1*/
}
} // namespace gamemd

// 0x5C54B0
namespace gamemd {
int MPCooperative::processAITurn(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5c54b0*/
    return 0; /*0x5c54b8*/
  v3 = *(_DWORD *)(this + 8); /*0x5c54be*/
  result = 0; /*0x5c54c1*/
  if ( v3 <= 0 ) /*0x5c54c5*/
    return -1; /*0x5c54dc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5c54cb*/
  {
    if ( ++result >= v3 ) /*0x5c54da*/
      return -1; /*0x5c54da*/
  }
  return result; /*0x5c54ba*/
}
} // namespace gamemd

// 0x5C54F0
namespace gamemd {
unsigned int MPCooperative::evaluateAIStrategy(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5c54f0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5c5505*/
  else
    return 0; /*0x5c54f7*/
}
} // namespace gamemd

// 0x5C5770
namespace gamemd {
char MPCooperative::broadcastMessage(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5c577c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5c5782*/
    if ( a3 ) /*0x5c5788*/
      v4 = a3; /*0x5c579e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5c579a*/
    *((_BYTE *)this + 12) = 1; /*0x5c57a2*/
    if ( !v4 ) /*0x5c57a6*/
      return 0; /*0x5c581a*/
    if ( *((_DWORD *)this + 1) ) /*0x5c57a8*/
    {
      v5 = *((_DWORD *)this + 2); /*0x5c57af*/
      if ( a2 < v5 ) /*0x5c57b4*/
        v5 = a2; /*0x5c57b6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x5c57bc*/
        ++i; /*0x5c57c1*/
      if ( *((_BYTE *)this + 13) ) /*0x5c57ce*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5c57d9*/
        *((_DWORD *)this + 1) = 0; /*0x5c57e1*/
      }
    }
    *((_DWORD *)this + 1) = v4; /*0x5c57ea*/
    *((_DWORD *)this + 2) = a2; /*0x5c57f2*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5c57f5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5c57fe*/
  }
  v7 = *((_DWORD *)this + 2); /*0x5c5801*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x5c5809*/
    *((_DWORD *)this + 4) = v7; /*0x5c580b*/
  return 1; /*0x5c580e*/
}
} // namespace gamemd

// 0x5C5820
namespace gamemd {
int MPCooperative::handlePlayerReady(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x5c5820*/
  result = 0; /*0x5c5823*/
  if ( v2 <= 0 ) /*0x5c5828*/
    return -1; /*0x5c583f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x5c582e*/
  {
    if ( ++result >= v2 ) /*0x5c583d*/
      return -1; /*0x5c583d*/
  }
  return result; /*0x5c5842*/
}
}
// 0x5C5850
namespace gamemd {
VectorClass * MPCooperative::verifyGameIntegrity(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x5c5853*/
  *this = &VectorClass<MPlayerScoreType *>::`vftable'; /*0x5c5856*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x5c5860*/
  {
    __3_YAXPAX_Z(v3); /*0x5c5868*/
    *(this + 1) = 0; /*0x5c5870*/
  }
  *((_BYTE *)this + 13) = 0; /*0x5c587b*/
  *(this + 2) = 0; /*0x5c5881*/
  if ( (a2 & 1) != 0 ) /*0x5c5888*/
    __3_YAXPAX_Z(this); /*0x5c588b*/
  return this; /*0x5c5895*/
}
} // namespace gamemd

// 0x5C58A0
namespace gamemd {
VectorClass * MPCooperative::processVote(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x5c58a3*/
  *this = &VectorClass<NodeNameType *>::`vftable'; /*0x5c58a6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x5c58b0*/
  {
    __3_YAXPAX_Z(v3); /*0x5c58b8*/
    *(this + 1) = 0; /*0x5c58c0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x5c58cb*/
  *(this + 2) = 0; /*0x5c58d1*/
  if ( (a2 & 1) != 0 ) /*0x5c58d8*/
    __3_YAXPAX_Z(this); /*0x5c58db*/
  return this; /*0x5c58e5*/
}
} // namespace gamemd

// 0x5C5990
namespace gamemd {
DynamicVector * MPCooperative::tallyVotes(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x5c5993*/
  *this = &VectorClass<CoopCampaignClass *>::`vftable'; /*0x5c5996*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x5c59a0*/
  {
    __3_YAXPAX_Z(v3); /*0x5c59a8*/
    *(this + 1) = 0; /*0x5c59b0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x5c59bb*/
  *(this + 2) = 0; /*0x5c59c1*/
  if ( (a2 & 1) != 0 ) /*0x5c59c8*/
    __3_YAXPAX_Z(this); /*0x5c59cb*/
  return this; /*0x5c59d5*/
}
} // namespace gamemd

// 0x5C59E0
namespace gamemd {
unsigned int * MPCooperative::applyVoteResult(int a2, int a3)
{
  *(this + 1) = 0; /*0x5c59eb*/
  *(this + 2) = a2; /*0x5c59ee*/
  *((_BYTE *)this + 12) = 1; /*0x5c59f1*/
  *((_BYTE *)this + 13) = 0; /*0x5c59f5*/
  *this = &VectorClass<MPlayerScoreType *>::`vftable'; /*0x5c59f8*/
  if ( a2 ) /*0x5c59fe*/
  {
    if ( a3 ) /*0x5c5a06*/
    {
      *(this + 1) = a3; /*0x5c5a08*/
      return this; /*0x5c5a0e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x5c5a1d*/
    *((_BYTE *)this + 13) = 1; /*0x5c5a20*/
  }
  return this; /*0x5c5a0d*/
}
} // namespace gamemd

// 0x5D6360
namespace gamemd {
char MPCooperative::Stub()
{
  return 0; /*0x5d6362*/
}
} // namespace gamemd

// 0x5E66D0
namespace gamemd {
LRESULT sub_5E66D0()
{
  return SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e66ea*/
}
} // namespace gamemd
