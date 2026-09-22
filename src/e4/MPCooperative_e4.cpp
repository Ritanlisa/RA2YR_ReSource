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
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  if ( a2 ) /*0x49b66e*/
    strcpy((char *)this, ToWideStringChar(a2)); /*0x49b68b*/
  else
    *(_BYTE *)this = 0; /*0x49b696*/
  if ( a3 ) /*0x49b69f*/
    strcpy((char *)(this + 28), ToWideStringChar(a3)); /*0x49b6bf*/
  else
    this->q070 = 0; /*0x49b6ca*/
  this->MPCooperative_field_0x14 = -2; /*0x49b6d3*/
  this->q030 = -2; /*0x49b6d6*/
  this->q018 = -2; /*0x49b6d9*/
  this->q034 = -2; /*0x49b6dc*/
  this->q03C = 0; /*0x49b6e2*/
  this->MPCooperative_field_0x44 = -1; /*0x49b6e5*/
  this->MPCooperative_field_0x38 = -1; /*0x49b6e8*/
  this->q06C = 0; /*0x49b6eb*/
  this->MPCooperative_field_0x40 = 0; /*0x49b6ee*/
  this->MPCooperative_field_0x48 = 0; /*0x49b6f1*/
  this->MPCooperative_field_0x4C = 0; /*0x49b6f4*/
  this->MPCooperative_field_0x50 = 0; /*0x49b6f7*/
  this->MPCooperative_field_0x54 = 0; /*0x49b6fa*/
  this->MPCooperative_field_0x58 = 0; /*0x49b6fd*/
  this->MPCooperative_field_0x5C = 0; /*0x49b700*/
  this->MPCooperative_field_0x68 = 0; /*0x49b703*/
  this->MPCooperative_field_0x60 = 0; /*0x49b706*/
  this->MPCooperative_field_0x64 = 0; /*0x49b709*/
  return this; /*0x49b6d2*/
}
}
} // namespace gamemd

// 0x49BCE0
namespace gamemd {
int MPCooperative::BuildScoreEntries(int a2, CCINIClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *v9; // ebx
  int i; // ebx
  wchar_t *v11; // edi
  wchar_t *v16; // [esp+4h] [ebp-4h]
  wchar_t *v17; // [esp+Ch] [ebp+4h]
  if ( !(unsigned char)this->MPCooperative_field_0x6C ) /*0x49bce4*/
    return 0; /*0x49bceb*/
  while ( *(_DWORD *)(a2 + 16) ) /*0x49bcf9*/
  {
    __3_YAXPAX_Z(**(void ***)(a2 + 4)); /*0x49bd06*/
    int v6 = *(_DWORD *)(a2 + 16); /*0x49bd0b*/
    if ( v6 > 0 ) /*0x49bd13*/
    {
      int v7 = v6 - 1; /*0x49bd15*/
      int v8 = 0; /*0x49bd18*/
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
    *((_DWORD *)v11 + 11) = this->MPCooperative_field_0x38; /*0x49bdd6*/
    *((_DWORD *)v11 + 24) = *(_DWORD *)(this + 4 * i + 96); /*0x49bddd*/
    int v12 = *(_DWORD *)(a2 + 8); /*0x49bde0*/
    if ( *(_DWORD *)(a2 + 16) >= v12 ) /*0x49bde6*/
    {
      if ( !*(_BYTE *)(a2 + 13) && v12 ) /*0x49bdf1*/
        continue; /*0x49bdf1*/
      int v13 = *(_DWORD *)(a2 + 20); /*0x49bdf3*/
      if ( v13 <= 0 || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, v12 + v13, 0) ) /*0x49be03*/
        continue; /*0x49be03*/
    }
    int v14 = *(_DWORD *)(a2 + 16); /*0x49be0a*/
    int v15 = *(_DWORD *)(a2 + 4); /*0x49be0d*/
    *(_DWORD *)(a2 + 16) = v14 + 1; /*0x49be13*/
    *(_DWORD *)(v15 + 4 * v14) = v11; /*0x49be16*/
  }
  *(_DWORD *)aP2->__pad_0 = this->MPCooperative_field_0x68; /*0x49be28*/
  return 1; /*0x49bced*/
}
}
} // namespace gamemd

// 0x49BE40
namespace gamemd {
int MPCooperative::WriteCoopSaveINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char i; // al

  MPCooperative *v1 = this; /*0x49be49*/
  if ( !*this ) /*0x49be4d*/
    return 1; /*0x49be4d*/
  char * v2 = this + 28; /*0x49be58*/
  if ( !this->q070 ) /*0x49be55*/
    return 1; /*0x49c0c5*/
  _DWORD v22[22]; // [esp+D0h] [ebp-D0h] BYREF
  CCFileClass::Construct(v22, g_Str_File_coopsave_ini); /*0x49be70*/
  void *v15[3]; // [esp+Ch] [ebp-194h] BYREF
  v15[1] = 0; /*0x49be79*/
  v15[2] = 0; /*0x49be7d*/
  _DWORD v16[7]; // [esp+18h] [ebp-188h] BYREF
  INISectionList::Constructor(v16); /*0x49be81*/
  _DWORD v17[6]; // [esp+34h] [ebp-16Ch] BYREF
  Node::Init(v17); /*0x49be8a*/
  v17[5] = 0; /*0x49be9d*/
  char v18 = 0; /*0x49bea1*/
  v15[0] = &CCINIClass_Vtable; /*0x49bea5*/
  CCINIClass::Load(v15, (int)v22, 0, 0); /*0x49bead*/
  CCFileClass::Reset(v22); /*0x49beb9*/
  int v3 = 0; /*0x49bec0*/
  if ( *v1 )
  {
  char v7; // al
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
        int v4 = v3 + 1; /*0x49bee5*/
        int v5 = *v1 >> 4; /*0x49bee9*/
        if ( (unsigned int)v5 >= 0x10 )
          char v6 = 0; /*0x49bf00*/
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
  char v25[100]; // [esp+13Ch] [ebp-64h] BYREF
  strcpy(v25, g_IsWindowed); /*0x49bf52*/
  char * v8 = v2; /*0x49bf5b*/
  int v9 = 0; /*0x49bf5d*/
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
      int v11 = v9 + 1; /*0x49bf84*/
      int v12 = *v8 >> 4; /*0x49bf88*/
      if ( (unsigned int)v12 >= 0x10 )
        char v13 = 0; /*0x49bf9f*/
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
  _DWORD v19[22]; // [esp+64h] [ebp-13Ch] BYREF
  CCFileClass::Construct3((int)v19); /*0x49c006*/
  (*(void (__thiscall **)(_DWORD *, char *))(v19[0] + 8))(v19, g_Str_File_coopsave_ini); /*0x49c018*/
  (*(void (__thiscall **)(_DWORD *, int))(v19[0] + 28))(v19, 2); /*0x49c025*/
  INIClass::ClearSection((int)v15, (int)v25, 0); /*0x49c035*/
  INIClass::WriteDigest(v15, (int)v19, 0); /*0x49c044*/
  CCFileClass::Reset(v19); /*0x49c04d*/
  v19[0] = &vt_CCFileClass; /*0x49c05e*/
  int v21 = 0; /*0x49c062*/
  _BYTE v20[12]; // [esp+BCh] [ebp-E4h] BYREF
  Vector::Clear((int)v20); /*0x49c069*/
  v19[0] = &off_7E1668; /*0x49c077*/
  BufferIOFileClass::Dtor(v19); /*0x49c07b*/
  HashTable::DestroyHashTableINIClass(v15); /*0x49c084*/
  v22[0] = &vt_CCFileClass; /*0x49c090*/
  int v24 = 0; /*0x49c097*/
  _BYTE v23[12]; // [esp+128h] [ebp-78h] BYREF
  Vector::Clear((int)v23); /*0x49c09e*/
  v22[0] = &off_7E1668; /*0x49c0aa*/
  BufferIOFileClass::Dtor(v22); /*0x49c0b1*/
  return 1; /*0x49c0b7*/
}
}
} // namespace gamemd

// 0x49CC50
namespace gamemd {
void MPCooperative_validateMove()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59)
{

  if ( a2 < 0 || a2 >= this->q040 ) /*0x49cc5f*/
    return 0; /*0x49ccde*/
  int v59 = this->q048; /*0x49cc66*/
  this->q038 = a2; /*0x49cc69*/
  this->q048 = a20 + v59; /*0x49cc75*/
  this->q04C += a48; /*0x49cc81*/
  this->q050 += a24; /*0x49cc90*/
  this->q054 += a52; /*0x49cc9c*/
  this->q058 += a16; /*0x49ccab*/
  this->q05C += a44; /*0x49ccb7*/
  this->q060 += a28; /*0x49ccc6*/
  this->q064 += a56; /*0x49ccd2*/
  this->q068 = a3; /*0x49ccd5*/
  return 1; /*0x49ccdb*/
}
}
} // namespace gamemd

// 0x49D120
namespace gamemd {
int MPCooperative::ReadCoopSaveINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char i; // al
  _BYTE v17[12]; // [esp+64h] [ebp-D0h] BYREF
  int v18; // [esp+70h] [ebp-C4h]
  void *v19[3]; // [esp+78h] [ebp-BCh] BYREF
  _DWORD v20[7]; // [esp+84h] [ebp-B0h] BYREF
  _DWORD v21[6]; // [esp+A0h] [ebp-94h] BYREF
  char v22; // [esp+B8h] [ebp-7Ch]
  char v23[100]; // [esp+D0h] [ebp-64h] BYREF

  MPCooperative *v1 = this; /*0x49d129*/
  if ( !*this ) /*0x49d12b*/
    return 0; /*0x49d12b*/
  char * v2 = this + 28; /*0x49d137*/
  if ( !this->q070 ) /*0x49d134*/
    return 0; /*0x49d13c*/
  _DWORD v16[22]; // [esp+Ch] [ebp-128h] BYREF
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
    v16[0] = &vt_CCFileClass; /*0x49d1bc*/
    v18 = 0; /*0x49d1c4*/
    Vector::Clear((int)v17); /*0x49d1c8*/
    v16[0] = &off_7E1668; /*0x49d1d1*/
    BufferIOFileClass::Dtor(v16); /*0x49d1d9*/
    return 0; /*0x49d1e9*/
  }
  CCFileClass::Reset(v16); /*0x49d1ef*/
  int v4 = 0; /*0x49d1f6*/
  if ( *v1 )
  {
  char v8; // al
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
        int v5 = v4 + 1; /*0x49d21b*/
        int v6 = *v1 >> 4; /*0x49d21f*/
        if ( (unsigned int)v6 >= 0x10 )
          char v7 = 0; /*0x49d236*/
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
  char * v9 = v2; /*0x49d292*/
  int v10 = 0; /*0x49d294*/
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
      int v12 = v10 + 1; /*0x49d2bb*/
      int v13 = *v9 >> 4; /*0x49d2bf*/
      if ( (unsigned int)v13 >= 0x10 )
        char v14 = 0; /*0x49d2d6*/
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
  bool v15 = INIClass::BinarySearchSection((int)v19, (unsigned __int8 *)v23) != 0; /*0x49d354*/
  HashTable::DestroyHashTableINIClass(v19); /*0x49d357*/
  v16[0] = &vt_CCFileClass; /*0x49d360*/
  v18 = 0; /*0x49d368*/
  Vector::Clear((int)v17); /*0x49d36c*/
  v16[0] = &off_7E1668; /*0x49d375*/
  BufferIOFileClass::Dtor(v16); /*0x49d37d*/
  return v15; /*0x49d1de*/
}
}
} // namespace gamemd

// 0x5C1470
namespace gamemd {
unsigned int * MPCooperative::ctor(MultiplayerGameMode * aP1, MPCooperative * aP2, MultiplayerGameMode * aP3, MPCooperative * aP4, MultiplayerGameMode * aP5, MPCooperative * aP6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IPXManagerClass *v8; // esi
  VectorClass *v10; // esi
  VectorClass *v12; // esi
  VectorClass *v14; // esi
  int i; // ebp
  Array *v17; // ebx
  MultiplayerGameMode::Construct( /*0x5c1494*/
    this,
    aP1,
    (MultiplayerGameMode *)aP2,
    aP3,
    (MultiplayerGameMode *)aP4,
    0,
    (MultiplayerGameMode *)aP6);
  AbstractClass::updateAnimationState(this + 22, 0, 0); /*0x5c14a0*/
  this->q058 = &vt_DynamicVectorClass_NodeNameType; /*0x5c14a5*/
  this->q06C = 10; /*0x5c14ab*/
  this->q068 = 0; /*0x5c14b2*/
  v8 = (IPXManagerClass *)(this + 49); /*0x5c14b5*/
  int v9 = 8; /*0x5c14bb*/
  do /*0x5c14cb*/
  {
    Waypoint::InitInvalid(v8); /*0x5c14c2*/
    v8 = (IPXManagerClass *)((char *)v8 + 12); /*0x5c14c7*/
    --v9; /*0x5c14ca*/
  }
  while ( v9 ); /*0x5c14cb*/
  v10 = (VectorClass *)(this + 105); /*0x5c14cd*/
  int v11 = 8; /*0x5c14d3*/
  do /*0x5c14f5*/
  {
    VectorClass::Construct(v10, 0, 0); /*0x5c14dc*/
    v10->vtable0 = &vt_DynamicVectorClass_int; /*0x5c14e1*/
    v10[1].Items = (void *)10; /*0x5c14e7*/
    v10[1].vtable0 = 0; /*0x5c14ee*/
    v10 = (VectorClass *)((char *)v10 + 24); /*0x5c14f1*/
    --v11; /*0x5c14f4*/
  }
  while ( v11 ); /*0x5c14f5*/
  v12 = (VectorClass *)(this + 153); /*0x5c14f7*/
  int v13 = 8; /*0x5c14fd*/
  do /*0x5c151f*/
  {
    VectorClass::Construct(v12, 0, 0); /*0x5c1506*/
    v12->vtable0 = &vt_DynamicVectorClass_int; /*0x5c150b*/
    v12[1].Items = (void *)10; /*0x5c1511*/
    v12[1].vtable0 = 0; /*0x5c1518*/
    v12 = (VectorClass *)((char *)v12 + 24); /*0x5c151b*/
    --v13; /*0x5c151e*/
  }
  while ( v13 ); /*0x5c151f*/
  v14 = (VectorClass *)(this + 201); /*0x5c1521*/
  CoopCampaignVector::Construct(this + 201, 0, 0); /*0x5c152b*/
  this->q324 = &vt_DynamicVectorClass_CoopCampaignClass; /*0x5c1530*/
  this->q0CE = 10; /*0x5c1536*/
  this->q0CD = 0; /*0x5c153d*/
  *this = &vt_MPCooperative; /*0x5c1540*/
  this->q040 = 0; /*0x5c1546*/
  this->q044 = 0; /*0x5c1549*/
  this->q33C = 0; /*0x5c154c*/
  this->q050 = 0; /*0x5c1552*/
  this->q010 = 0; /*0x5c1555*/
  this->q048 = 0; /*0x5c1559*/
  *((_BYTE *)this + 73) = 0; /*0x5c155d*/
  this->q04C = 0; /*0x5c1561*/
  this->q340 = 1; /*0x5c1564*/
  for ( i = this->q0CD - 1; i >= 0; --i ) /*0x5c1572*/
  {
    int v16 = this->q328; /*0x5c1574*/
    v17 = *(Array **)(v16 + 4 * i); /*0x5c157a*/
    if ( v17 ) /*0x5c157f*/
    {
      Array::Cleanup(*(_DWORD *)(v16 + 4 * i)); /*0x5c1583*/
      __3_YAXPAX_Z(v17); /*0x5c1589*/
    }
  }
  int v18 = this->q0CB; /*0x5c1598*/
  (*((void (__thiscall **)(_DWORD *))v14->vtable0 + 3))(this + 201); /*0x5c159d*/
  (*((void (__thiscall **)(_DWORD *, int, _DWORD))v14->vtable0 + 2))(this + 201, v18, 0); /*0x5c15a6*/
  CampaignClass::GetValue((int)&stru_89E138[5088], (CCINIClass *)&aP4); /*0x5c15b3*/
  for ( aP6 = 0; (int)aP6 < (int)aP4; aP6 = (MPCooperative *)((char *)aP6 + 1) ) /*0x5c15c2*/
  {
    _DWORD * v19 = (_DWORD *)__2_YAPAXI_Z(0x70u); /*0x5c15c6*/
    if ( v19 ) /*0x5c15d0*/
      _DWORD * v20 = MissionClass::Init(v19); /*0x5c15d9*/
    else
      v20 = 0; /*0x5c15dd*/
    Movie::SetupScreen((int)v20, (CCINIClass *)aP6); /*0x5c15e6*/
    int v21 = this->q0CB; /*0x5c15eb*/
    if ( this->q0CD >= v21 ) /*0x5c15f3*/
    {
      if ( !*((_BYTE *)this + 817) && v21 ) /*0x5c15fe*/
        continue; /*0x5c15fe*/
      bool v22 = this->q0CE; /*0x5c1600*/
      if ( v22 <= 0 /*0x5c160f*/
        || !(*((unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))v14->vtable0 + 2))(this + 201, v21 + v22, 0) )
      {
        continue; /*0x5c160f*/
      }
    }
    bool v23 = this->q0CD; /*0x5c1616*/
    int v24 = this->q328; /*0x5c1619*/
    this->q0CD = v23 + 1; /*0x5c161f*/
    *(_DWORD *)(v24 + 4 * v23) = v20; /*0x5c1622*/
  }
  return this; /*0x5c1638*/
}
}
} // namespace gamemd

// 0x5C1640
namespace gamemd {
void MPCooperative_Cleanup(MPCooperative * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  MPCooperative *ebp0; // ebp
  MPCooperative *v4; // edi
  Array *v3; // esi
  int i; // ebp
  Array *v6; // esi
  char *j; // ebp
  void (__thiscall ***ecx9)(void *, int); // ecx
  VectorClass *v10; // esi
  int ebp14; // ebp
  VectorClass *v13; // esi
  int ebp19; // ebp
  CCINIClass *v16; // eax
  MPCooperative *v19; // [esp-4h] [ebp-10h]
  MPCooperative *v2 = (MPCooperative *)v2; /*0x5c1643*/
  v3 = v2->q040; /*0x5c1647*/
  *(_DWORD *)v2 = &vt_MPCooperative; /*0x5c164a*/
  if ( v3 ) /*0x5c1652*/
  {
    Array::Cleanup((int)v3); /*0x5c1656*/
    __3_YAXPAX_Z(v3); /*0x5c165c*/
    v4->field_40 = 0; /*0x5c1664*/
  }
  v19 = ebp0; /*0x5c1667*/
  for ( i = *(_DWORD *)&v4->__pad_328[12] - 1; i >= 0; --i ) /*0x5c166f*/
  {
    int v7 = *(_DWORD *)v4->__pad_328; /*0x5c1671*/
    v6 = *(Array **)(v7 + 4 * i); /*0x5c1677*/
    if ( v6 ) /*0x5c167c*/
    {
      Array::Cleanup(*(_DWORD *)(v7 + 4 * i)); /*0x5c1680*/
      __3_YAXPAX_Z(v6); /*0x5c1686*/
    }
  }
  (*(void (__thiscall **)(int *, MPCooperative *))(v4->field_324 + 12))(&v4->field_324, v19); /*0x5c169f*/
  for ( j = (char *)v4->field_68 - 1; (int)j >= 0; --j ) /*0x5c16a6*/
    __3_YAXPAX_Z(*((void **)v4->field_5C + (_DWORD)j)); /*0x5c16af*/
  (*((void (__thiscall **)(void **))v4->field_58 + 3))(&v4->field_58); /*0x5c16c3*/
  (*((void (__thiscall **)(void **))v4->field_58 + 2))(&v4->field_58); /*0x5c16ce*/
  ecx9 = (void (__thiscall ***)(void *, int))v4->field_50; /*0x5c16d1*/
  if ( ecx9 ) /*0x5c16d6*/
  {
    (**ecx9)(ecx9, 1); /*0x5c16dc*/
    v4->field_50 = 0; /*0x5c16de*/
  }
  LOBYTE(v4->field_4) = 0; /*0x5c16e1*/
  void * v11 = *(void **)v4->__pad_328; /*0x5c16e4*/
  v4->field_324 = (int)&vt_VectorClass_CoopCampaignClass; /*0x5c16e9*/
  if ( v11 && v4->__pad_328[9] ) /*0x5c16f1*/
  {
    __3_YAXPAX_Z(v11); /*0x5c16f7*/
    *(_DWORD *)v4->__pad_328 = 0; /*0x5c16ff*/
  }
  v4->__pad_328[9] = 0; /*0x5c1702*/
  *(_DWORD *)&v4->__pad_328[4] = 0; /*0x5c1705*/
  v10 = (VectorClass *)&v4->field_324; /*0x5c1708*/
  ebp14 = 8; /*0x5c170e*/
  do /*0x5c173b*/
  {
    void * v14 = *(void **)&v10[-2].IsInitialized; /*0x5c1713*/
    v10 = (VectorClass *)((char *)v10 - 24); /*0x5c1716*/
    v10->vtable0 = &vt_VectorClass_int; /*0x5c171b*/
    if ( v14 && v10->IsAllocated ) /*0x5c1723*/
    {
      __3_YAXPAX_Z(v14); /*0x5c1729*/
      v10->Items = 0; /*0x5c1731*/
    }
    --ebp14; /*0x5c1734*/
    v10->IsAllocated = 0; /*0x5c1735*/
    v10->Capacity = 0; /*0x5c1738*/
  }
  while ( ebp14 ); /*0x5c173b*/
  v13 = (VectorClass *)&v4->field_264; /*0x5c173d*/
  ebp19 = 8; /*0x5c1743*/
  do /*0x5c1770*/
  {
    void * v17 = *(void **)&v13[-2].IsInitialized; /*0x5c1748*/
    v13 = (VectorClass *)((char *)v13 - 24); /*0x5c174b*/
    v13->vtable0 = &vt_VectorClass_int; /*0x5c1750*/
    if ( v17 && v13->IsAllocated ) /*0x5c1758*/
    {
      __3_YAXPAX_Z(v17); /*0x5c175e*/
      v13->Items = 0; /*0x5c1766*/
    }
    --ebp19; /*0x5c1769*/
    v13->IsAllocated = 0; /*0x5c176a*/
    v13->Capacity = 0; /*0x5c176d*/
  }
  while ( ebp19 ); /*0x5c1770*/
  v16 = (CCINIClass *)v4->field_5C; /*0x5c1772*/
  v4->field_58 = &vt_VectorClass_NodeNameType; /*0x5c1775*/
  if ( v16 && BYTE1(v4->field_64) ) /*0x5c1781*/
  {
    __3_YAXPAX_Z(v16); /*0x5c1787*/
    v4->field_5C = 0; /*0x5c178f*/
  }
  BYTE1(v4->field_64) = 0; /*0x5c1794*/
  v4->field_60 = 0; /*0x5c1797*/
  MultiplayerGameMode::Dtor(v4); /*0x5c179a*/
}
}
} // namespace gamemd

// 0x5C18A0
namespace gamemd {
int MPCooperative::Read()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // edi
  int j; // ebx

  for ( i = this->q0CD - 1; i >= 0; --i ) /*0x5c18ad*/
  {
    int v3 = this->q328; /*0x5c18af*/
    void * v4 = *(void **)(v3 + 4 * i); /*0x5c18b5*/
    if ( v4 ) /*0x5c18ba*/
    {
      Array::Cleanup(*(_DWORD *)(v3 + 4 * i)); /*0x5c18be*/
      __3_YAXPAX_Z(v4); /*0x5c18c4*/
    }
  }
  int v5 = this->q0CB; /*0x5c18d5*/
  _DWORD * v6 = this + 201; /*0x5c18db*/
  this->q324->Cleanup5(); /*0x5c18e3*/
  this->q324->Release(v5, 0); /*0x5c18ed*/
  int v15; // [esp+10h] [ebp-4h] BYREF
  CampaignClass::GetValue((int)&g_DDrawSurfaceManager, &v15); /*0x5c18fa*/
  for ( j = 0; j < v15; ++j ) /*0x5c1907*/
  {
    _DWORD * v8 = __2_YAPAXI_Z(0x70u); /*0x5c190b*/
    if ( v8 ) /*0x5c1915*/
      _DWORD * v9 = MissionClass::Init(v8); /*0x5c191e*/
    else
      v9 = 0; /*0x5c1922*/
    Movie::SetupScreen((int)v9, j); /*0x5c1927*/
    int v10 = v6[2]; /*0x5c192c*/
    if ( v6[4] >= v10 ) /*0x5c1934*/
    {
      if ( !*((_BYTE *)v6 + 13) && v10 ) /*0x5c193f*/
        continue; /*0x5c193f*/
      int v11 = v6[5]; /*0x5c1941*/
      if ( v11 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 8))(v6, v10 + v11, 0) ) /*0x5c1951*/
        continue; /*0x5c1951*/
    }
    int v12 = v6[4]; /*0x5c1958*/
    int v13 = v6[1]; /*0x5c195b*/
    v6[4] = v12 + 1; /*0x5c1961*/
    *(_DWORD *)(v13 + 4 * v12) = v9; /*0x5c1964*/
  }
  return 1; /*0x5c1970*/
}
}
} // namespace gamemd

// 0x5C1A10
namespace gamemd {
int MPCooperative::CopyTo()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND result; // eax
  HWND v12; // edi
  char *String2; // [esp+10h] [ebp-Ch] BYREF

  g_MPCooperativeState = -1; /*0x5c1a13*/
  Debug::Log(); /*0x5c1a28*/
  Network::SendOptionsGame(aO8); /*0x5c1a35*/
  if ( Dialog::FindByHandle((void *)0xC2) || Dialog::FindByHandle((void *)0xBC) ) /*0x5c1a4d*/
  {
    int v2 = this->MPCooperative_field_0x40; /*0x5c1a56*/
    if ( v2 ) /*0x5c1a5b*/
    {
  char *v3; // eax
      if ( (Movie::GetSectionID(v2, &String2), v3 = (char *)MPCooperative_Copy(this), v3 != String2) /*0x5c1a86*/
        && Dialog::GetCurrentType() == 107
        || Dialog::GetCurrentType() != 107 )
      {
        void * v4 = this->q040; /*0x5c1a88*/
        if ( v4 ) /*0x5c1a8d*/
        {
          Array::Cleanup(this->MPCooperative_field_0x40); /*0x5c1a91*/
          __3_YAXPAX_Z(v4); /*0x5c1a97*/
        }
        this->MPCooperative_field_0x40 = 0; /*0x5c1a9f*/
      }
    }
    char * v5 = this->q040; /*0x5c1aa6*/
    if ( v5 ) /*0x5c1aab*/
    {
      if ( Game_PlayerCount == 2 ) /*0x5c1ab4*/
        String::AssignWideToChar(v5, *(char **)Game_PlayerInfoArray, *(char **)(Game_PlayerInfoArray + 4)); /*0x5c1ac2*/
      else
        String::AssignWideToChar(v5, (char *)&g_TypeClass_DefaultString, (char *)&g_TypeClass_DefaultString); /*0x5c1ace*/
    }
  }
  if ( this->MPCooperative_field_0x40 ) /*0x5c1ad3*/
  {
LABEL_30:
    this->q340 = 1; /*0x5c1c7b*/
    result = (HWND)Dialog::FindGameUI(); /*0x5c1c82*/
    v12 = result; /*0x5c1c87*/
    if ( result ) /*0x5c1c8b*/
    {
      Campaign::SetupMovie((int *)this, result); /*0x5c1c90*/
      return CampaignCoop::Setup((int *)this, v12, 1); /*0x5c1c9a*/
    }
    return result; /*0x5c1c9a*/
  }
  _DWORD * v6 = __2_YAPAXI_Z(0x70u); /*0x5c1ae2*/
  if ( v6 ) /*0x5c1aec*/
    result = (HWND)MissionClass::Init(v6); /*0x5c1af0*/
  else
    result = 0; /*0x5c1af7*/
  this->MPCooperative_field_0x40 = result; /*0x5c1afb*/
  if ( result ) /*0x5c1afe*/
  {
    Movie::SetupScreen((int)result, 0); /*0x5c1b07*/
    int v8 = MPCooperative_Copy(this); /*0x5c1b13*/
    if ( v8 >= 0 ) /*0x5c1b17*/
    {
      this->MPCooperative_field_0x33C = v8; /*0x5c1bb1*/
  int v15; // [esp+18h] [ebp-4h] BYREF
      Movie::GetSection((int)&g_DDrawSurfaceManager, v8, &v15); /*0x5c1bb7*/
      int v11 = this->MPCooperative_field_0x40; /*0x5c1bc2*/
      String2 = 0; /*0x5c1bc5*/
      Array::GetElementAt(v11, &String2, 0); /*0x5c1bc9*/
      Debug::Log(); /*0x5c1be5*/
      if ( _strnicmp( /*0x5c1c0e*/
             (const char *)(*(_DWORD *)(g_MultiplayerGameState + 4 * g_GameRulesOptions) + 88),
             String2,
             strlen(String2)) )
      {
        BOOL v14 = v8 == 0; /*0x5c1c21*/
        do /*0x5c1c6f*/
        {
          Movie::SetupScreen(this->MPCooperative_field_0x40, v14); /*0x5c1c2d*/
          Movie::SetupScreen(this->MPCooperative_field_0x40, v8); /*0x5c1c36*/
          Array::GetElementAt(this->MPCooperative_field_0x40, &String2, 0); /*0x5c1c45*/
        }
        while ( _strnicmp( /*0x5c1c6f*/
                  (const char *)(*(_DWORD *)(g_MultiplayerGameState + 4 * g_GameRulesOptions) + 88),
                  String2,
                  strlen(String2)) );
      }
    }
    else
    {
      int v9 = this->MPCooperative_field_0x40; /*0x5c1b23*/
      this->MPCooperative_field_0x33C = 0; /*0x5c1b26*/
      String2 = 0; /*0x5c1b2c*/
      Array::GetElementAt(v9, &String2, 0); /*0x5c1b30*/
      int v10 = 0; /*0x5c1b3a*/
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
} // namespace gamemd

// 0x5C1CB0
namespace gamemd {
void MPCooperative::COMStub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->q340 = 1; /*0x5c1cb0*/
}
}
} // namespace gamemd

// 0x5C1CC0
namespace gamemd {
int MPCooperative::InitSession()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char *String2; // [esp+14h] [ebp-4h] BYREF

  int v2 = 0; /*0x5c1ccd*/
  int v6 = 0; /*0x5c1cd5*/
  String2 = 0; /*0x5c1cd9*/
  CampaignClass::GetValue((int)&g_DDrawSurfaceManager, &v6); /*0x5c1cdd*/
  if ( !v6 ) /*0x5c1ce6*/
    return -1; /*0x5c1ce6*/
  if ( !this->q010 ) /*0x5c1ce8*/
  {
    _DWORD * v3 = __2_YAPAXI_Z(0x70u); /*0x5c1cef*/
    if ( v3 ) /*0x5c1cf9*/
      _DWORD * v4 = MissionClass::Init(v3); /*0x5c1cfd*/
    else
      v4 = 0; /*0x5c1d04*/
    this->q010 = (int)v4; /*0x5c1d06*/
  }
  Movie::SetupScreen(this->q010, 0); /*0x5c1d0d*/
  Array::GetElementAt(this->q010, &String2, 0); /*0x5c1d1b*/
  if ( g_MultiplayerOptions <= 0 ) /*0x5c1d26*/
  {
LABEL_10:
    this->Read_8(); /*0x5c1d5d*/
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
} // namespace gamemd

// 0x5C1DC0
namespace gamemd {
int MPCooperative::Seek()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  LRESULT v3; // edi
  HWND GameUI; // eax
  int i; // edi
  int PlayerSide; // eax
  LRESULT v19; // [esp+14h] [ebp-4h] BYREF
  if ( !this->MPCooperative_field_0x40 ) /*0x5c1dc8*/
    return 0; /*0x5c1dd7*/
  CampaignClass::GetValue((int)&g_DDrawSurfaceManager, &v19); /*0x5c1de2*/
  v3 = MPCooperative_Helper(); /*0x5c1dec*/
  if ( v3 < v19 ) /*0x5c1df4*/
  {
    if ( Dialog::GetCurrentType() == 107 ) /*0x5c1e34*/
    {
      void * v4 = this->q040; /*0x5c1e36*/
      if ( v4 ) /*0x5c1e3b*/
      {
        Array::Cleanup(this->MPCooperative_field_0x40); /*0x5c1e3f*/
        __3_YAXPAX_Z(v4); /*0x5c1e45*/
      }
      this->MPCooperative_field_0x40 = *(_DWORD *)(this->q328 + 4 * v3); /*0x5c1e58*/
      _DWORD * v5 = __2_YAPAXI_Z(0x70u); /*0x5c1e5b*/
      if ( v5 ) /*0x5c1e65*/
        _DWORD * v6 = MissionClass::Init(v5); /*0x5c1e69*/
      else
        v6 = 0; /*0x5c1e70*/
      *(_DWORD *)(this->q328 + 4 * v3) = v6; /*0x5c1e79*/
      Movie::SetupScreen(*(_DWORD *)(this->q328 + 4 * v3), v3); /*0x5c1e85*/
      this->MPCooperative_field_0x4C = v3; /*0x5c1e8a*/
      if ( Game_PlayerCount == 2 ) /*0x5c1e95*/
        String::AssignWideToChar(this->q040, *(char **)Game_PlayerInfoArray, *(char **)(Game_PlayerInfoArray + 4)); /*0x5c1ea6*/
    }
    goto LABEL_16; /*0x5c1ea6*/
  }
  if ( Game_PlayerCount == 2 ) /*0x5c1dfd*/
    String::AssignWideToChar(this->q040, *(char **)Game_PlayerInfoArray, *(char **)(Game_PlayerInfoArray + 4)); /*0x5c1e0e*/
  result = LoadCampaignCoopSave(this->q040); /*0x5c1e16*/
  if ( result ) /*0x5c1e1d*/
  {
    this->q048 = 1; /*0x5c1e26*/
LABEL_16:
    int v15 = this->MPCooperative_field_0x33C; /*0x5c1eab*/
    int v17 = 0; /*0x5c1ebc*/
  int v18; // [esp+10h] [ebp-8h] BYREF
    Movie::GetSection((int)&g_DDrawSurfaceManager, v15, &v18); /*0x5c1ec4*/
    if ( v18 ) /*0x5c1ecf*/
    {
  int v8; // eax
      int v7 = this->MPCooperative_field_0x40; /*0x5c1eda*/
      if ( v7 && Movie::GetState(v7, &v17) ) /*0x5c1ee6*/
      {
        v8 = v17; /*0x5c1ef7*/
      }
      else
      {
        v8 = 0; /*0x5c1eef*/
        v17 = 0; /*0x5c1ef1*/
      }
      int v9 = *(_DWORD *)(v18 + 32); /*0x5c1eff*/
      if ( v8 < v9 ) /*0x5c1f04*/
      {
        if ( v9 ) /*0x5c1f11*/
        {
          int v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v18 + 20) + 4 * v8) + 16); /*0x5c1f22*/
          GameUI = (HWND)Dialog::FindGameUI(); /*0x5c1f25*/
          Campaign::SetupMovie((int *)this, GameUI); /*0x5c1f2d*/
          for ( i = 0; i < Game_PlayerCount; ++i ) /*0x5c1f3b*/
          {
            int v13 = *(_DWORD *)this; /*0x5c1f43*/
            PlayerSide = SessionClass::GetPlayerSide(*(_DWORD *)(Game_PlayerInfoArray + 4 * i)); /*0x5c1f48*/
            if ( !(*(unsigned __int8 (__thiscall **)(int, int))(v13 + 28))(this, PlayerSide) ) /*0x5c1f50*/
            {
              if ( v10 <= 1 ) /*0x5c1f5a*/
              {
                int v16 = SideClass::FindByName(**(void ***)(*(_DWORD *)(*(_DWORD *)(v18 + 20) + 4 * v17) + 4)); /*0x5c1f78*/
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
} // namespace gamemd

// 0x5C1FA0
namespace gamemd {
int MPCooperative::Revert()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF
  v7 = 0; /*0x5c1faa*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, this->q33C, &v8); /*0x5c1fbf*/
  if ( !v8 ) /*0x5c1fca*/
    return -2; /*0x5c1fcc*/
  int v3 = this->q010; /*0x5c1fd6*/
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
} // namespace gamemd

// 0x5C2040
namespace gamemd {
int MPCooperative::StartGame(int a2, void ** a3, void * Block, int a5, short a6, int a7, int a8, char * a9, char * a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v15; // [esp-14h] [ebp-20h]
  if ( !this->MPCooperative_field_0x40 ) /*0x5c2045*/
  {
    MovieClass::Create((int *)this); /*0x5c204c*/
    this->q340 = 1; /*0x5c2051*/
  }
  int v11 = this->MPCooperative_field_0x40; /*0x5c2058*/
  if ( v11 ) /*0x5c205d*/
  {
  int v20; // [esp+8h] [ebp-4h] BYREF
    Movie::GetSectionID(v11, &v20); /*0x5c208d*/
    if ( v20 != a2 ) /*0x5c209c*/
      this->q340 = 1; /*0x5c209e*/
    char * v19 = a10; /*0x5c20ad*/
    char * v18 = a9; /*0x5c20ae*/
  int v14[3]; // [esp-20h] [ebp-2Ch] BYREF
    DynamicVectorClass::Copy(v14, &a3); /*0x5c20b9*/
  int v17; // [esp-Ch] [ebp-18h]
  int v16; // [esp-10h] [ebp-1Ch]
    DecodeCampaignPlayerName(this->MPCooperative_field_0x40, a2, v14[0], (void *)v14[1], v14[2], v15, v16, v17, v18, v19); /*0x5c20c2*/
    void * v13 = Block; /*0x5c20c7*/
    this->MPCooperative_field_0x33C = a2; /*0x5c20cb*/
    a3 = &vt_VectorClass_int; /*0x5c20d3*/
    if ( v13 && HIBYTE(a6) ) /*0x5c20e3*/
      __3_YAXPAX_Z(v13); /*0x5c20e6*/
    return 1; /*0x5c20ef*/
  }
  else
  {
    a3 = &vt_VectorClass_int; /*0x5c2063*/
    if ( Block ) /*0x5c206d*/
    {
      if ( HIBYTE(a6) ) /*0x5c2075*/
        __3_YAXPAX_Z(Block); /*0x5c2078*/
    }
    return 0; /*0x5c2080*/
  }
}
}
} // namespace gamemd

// 0x5C2100
namespace gamemd {
int MPCooperative::EndGame(int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND GameUI; // eax

  int v5 = this->MPCooperative_field_0x40; /*0x5c2107*/
  if ( !v5 ) /*0x5c210c*/
    return 0; /*0x5c210e*/
  int v11; // [esp+10h] [ebp-4h] BYREF
  Movie::GetState(v5, &v11); /*0x5c211d*/
  int v10[28]; // [esp-70h] [ebp-84h] BYREF
  qmemcpy(v10, (const void *)(a4 + 112), sizeof(v10)); /*0x5c2136*/
  int v9[28]; // [esp-E0h] [ebp-F4h] BYREF
  qmemcpy(v9, (const void *)a4, sizeof(v9)); /*0x5c2141*/
  char v7; // bl
  v7 = MPCooperative::validateMove( /*0x5c215b*/
         this->q040,
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
  if ( v11 != a2 || (unsigned char)this->MPCooperative_field_0x340 ) /*0x5c2165*/
  {
    GameUI = (HWND)Dialog::FindGameUI(); /*0x5c216f*/
    if ( GameUI ) /*0x5c2176*/
    {
      Campaign::SetupMovie((int *)this, GameUI); /*0x5c217b*/
      this->q340 = 0; /*0x5c2180*/
    }
  }
  return v7; /*0x5c2110*/
}
}
} // namespace gamemd

// 0x5C2680
namespace gamemd {
int MPCooperative::ProcessTurn()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND GameUI; // eax

  int v2 = this->MPCooperative_field_0x40; /*0x5c2683*/
  if ( !v2 ) /*0x5c2688*/
    return 0; /*0x5c268a*/
  Movie::GetSectionID(v2, (_DWORD *)(this + 828)); /*0x5c2695*/
  GameUI = (HWND)Dialog::FindGameUI(); /*0x5c269a*/
  if ( GameUI ) /*0x5c26a1*/
  {
    if ( (unsigned char)this->MPCooperative_field_0x340 ) /*0x5c26a3*/
    {
      Campaign::SetupMovie((int *)this, GameUI); /*0x5c26b0*/
      this->q340 = 0; /*0x5c26b5*/
    }
  }
  return SerializeCampaignOptions(this->q040); /*0x5c268c*/
}
}
} // namespace gamemd

// 0x5C2710
namespace gamemd {
int MPCooperative::SyncState()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // [esp+20h] [ebp-1B4h]
  char Buffer[400]; // [esp+44h] [ebp-190h] BYREF

  int v32 = this->q33C; /*0x5c2727*/
  MPCooperative *v36 = this; /*0x5c272d*/
  int v35; // [esp+28h] [ebp-1ACh] BYREF
  Movie::GetSection((int)&g_DDrawSurfaceManager, v32, &v35); /*0x5c2731*/
  sprintf(Buffer, DataGlobal_82DCB8, *(char *)(v35 + 8)); /*0x5c2749*/
  _DWORD * v2 = this + 105; /*0x5c2751*/
  int v3 = 8; /*0x5c2757*/
  do /*0x5c2795*/
  {
    int v4 = v2[2]; /*0x5c275e*/
    (*(void (__thiscall **)(_DWORD *))(*v2 + 12))(v2); /*0x5c2763*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v4, 0); /*0x5c276d*/
    int v5 = v2[50]; /*0x5c2776*/
    (*(void (__thiscall **)(_DWORD *))(v2[48] + 12))(v2 + 48); /*0x5c2784*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(v2[48] + 8))(v2 + 48, v5, 0); /*0x5c278e*/
    v2 += 6; /*0x5c2791*/
    --v3; /*0x5c2794*/
  }
  while ( v3 ); /*0x5c2795*/
  int v37 = Game_PlayerCount; /*0x5c27a1*/
  for ( i = 0; i < *(char *)(v35 + 8); ++i ) /*0x5c27b2*/
  {
    int v6 = 0; /*0x5c27c7*/
    memset32(DataGlobal_ABF460, -2, 8u); /*0x5c27c9*/
    int v7 = Game_PlayerCount; /*0x5c27cb*/
    if ( Game_PlayerCount > 0 ) /*0x5c27d3*/
    {
      do /*0x5c27ec*/
      {
        DataGlobal_ABF460[v6] = MPCooperative::finalizeSession(*(_DWORD *)(Game_PlayerInfoArray + 4 * v6)); /*0x5c27e2*/
        ++v6; /*0x5c27e9*/
      }
      while ( v6 < v7 ); /*0x5c27ec*/
    }
    MPCooperative *v8 = v36; /*0x5c27ee*/
    int v34 = 0; /*0x5c27f2*/
    int * v9 = DataGlobal_ABF460; /*0x5c27fa*/
    int * v10 = v36 + 107; /*0x5c27ff*/
    while ( 1 ) /*0x5c2815*/
    {
      if ( v34 >= v37 ) /*0x5c2815*/
      {
  int v25; // esi
        int v20 = v8->HandleEvent(); /*0x5c28d2*/
        int v21 = *v10; /*0x5c28d4*/
        if ( v10[2] < *v10 /*0x5c28f7*/
          || (*((_BYTE *)v10 + 5) || !v21)
  int v22; // edx
          && (v22 = v10[3], v22 > 0)
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(v10 - 2) + 8))(v10 - 2, v21 + v22, 0) )
        {
          int v23 = v10[2]; /*0x5c28fe*/
          int v24 = *(v10 - 1); /*0x5c2901*/
          v10[2] = v23 + 1; /*0x5c2907*/
          *(_DWORD *)(v24 + 4 * v23) = v20; /*0x5c290a*/
        }
        while ( 1 ) /*0x5c2921*/
        {
          v25 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 7); /*0x5c2921*/
          if ( v25 == -2 ) /*0x5c2926*/
            break; /*0x5c2926*/
          int * v26 = DataGlobal_ABF460; /*0x5c2928*/
          while ( *v26 != v25 ) /*0x5c292f*/
          {
            if ( (int)++v26 >= (int)&DataGlobal_ABF480 ) /*0x5c2939*/
              goto LABEL_31; /*0x5c2939*/
          }
        }
LABEL_31:
        *v9 = v25; /*0x5c293b*/
        int v27 = v10[48]; /*0x5c293e*/
        if ( v10[50] < v27 /*0x5c2975*/
          || (*((_BYTE *)v10 + 197) || !v27)
  int v28; // edx
          && (v28 = v10[51], v28 > 0)
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v10[46] + 8))(v10 + 46, v27 + v28, 0) )
        {
          int v29 = v10[50]; /*0x5c297c*/
          int v30 = v10[47]; /*0x5c2982*/
          v10[50] = v29 + 1; /*0x5c298b*/
          *(_DWORD *)(v30 + 4 * v29) = v25; /*0x5c2991*/
        }
      }
      else
      {
        int v11 = v8->ReceiveMessage(); /*0x5c2823*/
        int v12 = *v10; /*0x5c2825*/
        if ( v10[2] < *v10 /*0x5c2848*/
          || (*((_BYTE *)v10 + 5) || !v12)
  int v13; // edx
          && (v13 = v10[3], v13 > 0)
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(v10 - 2) + 8))(v10 - 2, v12 + v13, 0) )
        {
          int v14 = v10[2]; /*0x5c284f*/
          int v15 = *(v10 - 1); /*0x5c2852*/
          v10[2] = v14 + 1; /*0x5c2858*/
          *(_DWORD *)(v15 + 4 * v14) = v11; /*0x5c285b*/
        }
        int v16 = v10[48]; /*0x5c285e*/
        if ( v10[50] < v16 /*0x5c289f*/
          || (*((_BYTE *)v10 + 197) || !v16)
  int v17; // eax
          && (v17 = v10[51], v17 > 0)
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v10[46] + 8))(v10 + 46, v16 + v17, 0) )
        {
          int v18 = v10[50]; /*0x5c28aa*/
          int v19 = v10[47]; /*0x5c28b0*/
          v10[50] = v18 + 1; /*0x5c28b9*/
          *(_DWORD *)(v19 + 4 * v18) = *v9; /*0x5c28c2*/
        }
      }
  char v38[16]; // [esp+34h] [ebp-1A0h] BYREF
      sprintf(v38, DataGlobal_82DCB0, *(_DWORD *)(*(v10 - 1) + 4 * i), *(_DWORD *)(v10[47] + 4 * i)); /*0x5c29b3*/
      strcat(Buffer, v38); /*0x5c29df*/
      ++v9; /*0x5c29e3*/
      v10 += 6; /*0x5c29e9*/
      ++v34; /*0x5c29f9*/
      if ( (int)v9 >= (int)&DataGlobal_ABF480 ) /*0x5c29fd*/
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
} // namespace gamemd

// 0x5C2A60
namespace gamemd {
const char * MPCooperative::UpdateLobby(const char * a2, char * String)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  const char *result; // eax

  result = a2; /*0x5c2a61*/
  if ( a2 == (const char *)1 ) /*0x5c2a72*/
  {
    result = strtok(String, Delimiter); /*0x5c2a82*/
    if ( result ) /*0x5c2a8c*/
    {
      result = (const char *)atol(result); /*0x5c2a93*/
      const char * v32 = result; /*0x5c2a9e*/
      if ( (int)result >= 1 ) /*0x5c2aa2*/
      {
        _DWORD * v5 = this + 105; /*0x5c2aa8*/
        int v6 = 8; /*0x5c2aae*/
        do /*0x5c2aec*/
        {
          int v7 = v5[2]; /*0x5c2ab5*/
          (*(void (__thiscall **)(_DWORD *))(*v5 + 12))(v5); /*0x5c2aba*/
          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v5 + 8))(v5, v7, 0); /*0x5c2ac4*/
          int v8 = v5[50]; /*0x5c2acd*/
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
            int v9 = 8; /*0x5c2b02*/
            char * v10 = (char *)(this + 107); /*0x5c2b07*/
            do /*0x5c2c89*/
            {
              char * v11 = strtok(0, Delimiter); /*0x5c2b14*/
              if ( v11 ) /*0x5c2b1e*/
              {
                int v12 = atol(v11); /*0x5c2b29*/
                int v13 = *(_DWORD *)v10; /*0x5c2b2b*/
                if ( *((_DWORD *)v10 + 2) < *(_DWORD *)v10 /*0x5c2b51*/
                  || (v10[5] || !v13)
  int v14; // edx
                  && (v14 = *((_DWORD *)v10 + 3), v14 > 0)
                  && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)v10 - 2) + 8))(
                       v10 - 8,
                       v13 + v14,
                       0) )
                {
                  int v15 = *((_DWORD *)v10 + 2); /*0x5c2b58*/
                  int v16 = *((_DWORD *)v10 - 1); /*0x5c2b5b*/
                  *((_DWORD *)v10 + 2) = v15 + 1; /*0x5c2b61*/
                  *(_DWORD *)(v16 + 4 * v15) = v12; /*0x5c2b64*/
                }
              }
              else
              {
                int v17 = *(_DWORD *)v10; /*0x5c2b69*/
                if ( *((_DWORD *)v10 + 2) < *(_DWORD *)v10 /*0x5c2b8f*/
                  || (v10[5] || !v17)
  int v18; // eax
                  && (v18 = *((_DWORD *)v10 + 3), v18 > 0)
                  && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)v10 - 2) + 8))(
                       v10 - 8,
                       v17 + v18,
                       0) )
                {
                  int v19 = *((_DWORD *)v10 + 2); /*0x5c2b96*/
                  int v20 = *((_DWORD *)v10 - 1); /*0x5c2b99*/
                  *((_DWORD *)v10 + 2) = v19 + 1; /*0x5c2b9f*/
                  *(_DWORD *)(v20 + 4 * v19) = -1; /*0x5c2ba2*/
                }
              }
              char * v21 = strtok(0, Delimiter); /*0x5c2bb0*/
              if ( v21 ) /*0x5c2bba*/
              {
                int v22 = atol(v21); /*0x5c2bc8*/
                int v23 = *((_DWORD *)v10 + 48); /*0x5c2bca*/
                if ( *((_DWORD *)v10 + 50) < v23 /*0x5c2c08*/
                  || (v10[197] || !v23)
  int v24; // edx
                  && (v24 = *((_DWORD *)v10 + 51), v24 > 0)
                  && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)v10 + 46) + 8))(
                       v10 + 184,
                       v23 + v24,
                       0) )
                {
                  int v25 = *((_DWORD *)v10 + 50); /*0x5c2c0f*/
                  int v26 = *((_DWORD *)v10 + 47); /*0x5c2c15*/
                  *((_DWORD *)v10 + 50) = v25 + 1; /*0x5c2c1e*/
                  *(_DWORD *)(v26 + 4 * v25) = v22; /*0x5c2c24*/
                }
              }
              else
              {
                int v27 = *((_DWORD *)v10 + 48); /*0x5c2c29*/
                if ( *((_DWORD *)v10 + 50) < v27 /*0x5c2c62*/
                  || (v10[197] || !v27)
  int v28; // eax
                  && (v28 = *((_DWORD *)v10 + 51), v28 > 0)
                  && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)v10 + 46) + 8))(
                       v10 + 184,
                       v27 + v28,
                       0) )
                {
                  int v29 = *((_DWORD *)v10 + 50); /*0x5c2c69*/
                  int v30 = *((_DWORD *)v10 + 47); /*0x5c2c6f*/
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
} // namespace gamemd

// 0x5C2D00
namespace gamemd {
void MPCooperative_Play(AnimClass * aP0, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax
  int j; // esi
  #375 *v8; // ecx
  int result; // eax

  int v3 = *(_DWORD *)(a2 + 16); /*0x5c2d07*/
  int v4 = 0; /*0x5c2d0a*/
  for ( i = 0; i < v3; ++i ) /*0x5c2d15*/
  {
    if ( *(_BYTE *)(i + a3) ) /*0x5c2d17*/
      ++v4; /*0x5c2d1d*/
  }
  int v6 = 0; /*0x5c2d28*/
  for ( j = 0; j < (int)HouseClass_Count; ++j ) /*0x5c2d2e*/
  {
    v8 = *(#375 **)&HouseClass_Array->__pad_0[4 * j]; /*0x5c2d36*/
    if ( v8 && (unsigned __int8)House::IsCurrentPlayer(v8) ) /*0x5c2d3d*/
      ++v6; /*0x5c2d46*/
  }
  if ( v4 >= v6 ) /*0x5c2d53*/
  {
    result = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 4580); /*0x5c2d96*/
    if ( *(_BYTE *)(result + a3) ) /*0x5c2d9c*/
    {
  char v10; // dl
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
                     (_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536),
                     0,
                     (IUnknown *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 4580) - 1));
          *(_BYTE *)(result + a3);
          result = (result + 1) % *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 4580) )
    {
      ; /*0x5c2d86*/
    }
  }
  *(_BYTE *)(result + a3) = 1; /*0x5c2dba*/
  *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 4 * result + 4480) = aP0; /*0x5c2dc7*/
  return result; /*0x5c2dc4*/
}
}
} // namespace gamemd

// 0x5C2DE0
namespace gamemd {
unsigned int * MPCooperative::selectTeam(unsigned int * a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax
  #375 *v10; // ecx
  int j; // eax

  int v4 = a3; /*0x5c2de0*/
  int v5 = 0; /*0x5c2de6*/
  int v6 = *(_DWORD *)(a3 + 16); /*0x5c2de8*/
  for ( i = 0; i < v6; ++i ) /*0x5c2df4*/
  {
    if ( *(_BYTE *)(i + a4) ) /*0x5c2df6*/
      ++v5; /*0x5c2dfc*/
  }
  int v8 = 0; /*0x5c2e08*/
  int v9 = 0; /*0x5c2e0a*/
  if ( HouseClass_Count > 0 ) /*0x5c2e0e*/
  {
    do /*0x5c2e2e*/
    {
      v10 = *(#375 **)&HouseClass_Array->__pad_0[4 * v9]; /*0x5c2e15*/
      if ( v10 && (unsigned __int8)House::IsCurrentPlayer(v10) ) /*0x5c2e1c*/
        ++v8; /*0x5c2e25*/
      ++v9; /*0x5c2e2b*/
    }
    while ( v9 < HouseClass_Count ); /*0x5c2e2e*/
    v4 = a3; /*0x5c2e30*/
  }
  if ( v5 >= v8 ) /*0x5c2e37*/
  {
    int v14 = *((_DWORD *)g_ScenarioClass_Instance + 1145); /*0x5c2ea2*/
    if ( *(_BYTE *)(v14 + a4) ) /*0x5c2ea8*/
    {
  char v15; // bl
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
    int v16 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v14); /*0x5c2ed8*/
    *a1 = v16; /*0x5c2ee0*/
    return a1; /*0x5c2edb*/
  }
  else
  {
    for ( j = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, *((_DWORD *)g_ScenarioClass_Instance + 1145) - 1); /*0x5c2e54*/
          *(_BYTE *)(j + a4);
          j = (j + 1) % *((_DWORD *)g_ScenarioClass_Instance + 1145) )
    {
      ; /*0x5c2e6a*/
    }
    *(_BYTE *)(j + a4) = 1; /*0x5c2e76*/
    *((_DWORD *)g_ScenarioClass_Instance + j + 1120) = a2; /*0x5c2e83*/
    int v12 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * j); /*0x5c2e91*/
    *a1 = v12; /*0x5c2e98*/
    return a1; /*0x5c2e94*/
  }
}
}
} // namespace gamemd

// 0x5C2EF0
namespace gamemd {
int MPCooperative::GetPlayerCount(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // ebp
  int *j; // eax
  void **v17; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]

  Multiplayer::FindStartPositions(&v17); /*0x5c2eff*/
  int v1 = 0; /*0x5c2f0a*/
  _DWORD * v2 = (char *)g_ScenarioClass_Instance + 4480; /*0x5c2f0c*/
  do /*0x5c2f2a*/
  _BYTE v16[16]; // [esp+4h] [ebp-28h] BYREF
    v16[v1++] = *v2++ != -1; /*0x5c2f17*/
  while ( v1 < 16 ); /*0x5c2f2a*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x5c2f36*/
  {
    char v4 = 0; /*0x5c2f44*/
    int v5 = -1; /*0x5c2f46*/
    _DWORD * v6 = *(_DWORD **)&HouseClass_Array->__pad_0[4 * i]; /*0x5c2f49*/
    _DWORD * v20 = v6; /*0x5c2f4c*/
    if ( !*(_BYTE *)(v6[13] + 422) ) /*0x5c2f53*/
    {
      int v7 = 0; /*0x5c2f67*/
      _DWORD * v8 = (char *)g_ScenarioClass_Instance + 4480; /*0x5c2f69*/
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
        int v9 = MPCooperative_Play(i, (int)&v17, (int)v16); /*0x5c2fae*/
        int v10 = 0; /*0x5c2fb5*/
        if ( Game_PlayerCount <= 0 ) /*0x5c2fb9*/
          goto LABEL_17; /*0x5c2fb9*/
        int v11 = Game_PlayerInfoArray; /*0x5c2fc1*/
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
          int v12 = 0; /*0x5c2fd2*/
          for ( j = g_CampaignSideIndex; (*(j - 16) == -1 || *j != -2) && (int)j < (int)g_CampaignFactionSlot; ++j ) /*0x5c2fd4*/
            ++v12; /*0x5c2feb*/
          g_CampaignSideIndex[v12] = v9; /*0x5c3031*/
          g_CampaignFactionSlot[v12] = 1; /*0x5c3038*/
        }
        else
        {
          SessionClass::SetOption(*(_DWORD *)(Game_PlayerInfoArray + 4 * v10), v9); /*0x5c2ffa*/
          SessionClass::SetOption2(*(_DWORD *)(Game_PlayerInfoArray + 4 * v10), 0); /*0x5c300a*/
          int * v14 = (int *)(Game_PlayerInfoArray + 4 * v10); /*0x5c3018*/
          SessionClass::GetOption2(*v14); /*0x5c301b*/
          SessionClass::GetOption(*v14); /*0x5c3023*/
        }
        Debug::Log(); /*0x5c3053*/
        HouseClass::SetMapSeed(v20, *((_DWORD *)Block + v9)); /*0x5c3067*/
      }
    }
  }
  v17 = &vt_VectorClass_Cell; /*0x5c308d*/
  char v19; // [esp+21h] [ebp-Bh]
  if ( Block && v19 ) /*0x5c30a0*/
    __3_YAXPAX_Z(Block); /*0x5c30a3*/
  return 1; /*0x5c30ad*/
}
}
} // namespace gamemd

// 0x5C30C0
namespace gamemd {
int MPCooperative::BroadcastMessage()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v2 = ReadPlayerCountMap(g_GameRulesOptions) - *((_DWORD *)g_ScenarioClass_Instance + 1145); /*0x5c30db*/
  Debug::Log(); /*0x5c30e7*/
  if ( v2 <= 0 ) /*0x5c30f3*/
    return 0; /*0x5c30f8*/
  g_Rules_AlliesAllowed = v2; /*0x5c30ff*/
  int v4 = this->q33C; /*0x5c3105*/
  int v10 = 0; /*0x5c310f*/
  int v9 = 0; /*0x5c311a*/
  int v11; // [esp+18h] [ebp-4h] BYREF
  Movie::GetSection((int)&g_DDrawSurfaceManager, v4, &v11); /*0x5c311e*/
  if ( !v11 ) /*0x5c3129*/
    return 0; /*0x5c312e*/
  if ( !*(_DWORD *)(v11 + 56) ) /*0x5c3135*/
    return 0; /*0x5c313d*/
  int v5 = this->q010; /*0x5c3144*/
  if ( !v5 || !Movie::GetState(v5, &v9) ) /*0x5c3150*/
    v9 = 0; /*0x5c3159*/
  if ( v9 >= *(_DWORD *)(v11 + 56) ) /*0x5c3168*/
    return 0; /*0x5c316d*/
  int v6 = *((_DWORD *)g_ScenarioClass_Instance + 1145); /*0x5c3179*/
  if ( v6 < 8 ) /*0x5c3182*/
  {
    int * v7 = (int *)(4 * v6 + 11055740); /*0x5c3188*/
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
        if ( DataGlobal_A8EB68 ) /*0x5c31af*/
          *v7 = DataGlobal_A8EB68 == 1; /*0x5c31c1*/
        else
          *v7 = 2; /*0x5c31b1*/
        Debug::Log(); /*0x5c31cb*/
        int v8 = v10; /*0x5c31d0*/
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
} // namespace gamemd

// 0x5C3220
namespace gamemd {
int MPCooperative::GetMapData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  Debug::Log(); /*0x5c322c*/
  if ( HouseClass_Count > 0 ) /*0x5c323b*/
  {
  int v2; // eax
    int v0 = 1; /*0x5c3241*/
    int v8 = 0; /*0x5c3246*/
    int v12 = 1; /*0x5c324e*/
    do /*0x5c337f*/
    {
      int v1 = *(_DWORD *)&HouseClass_Array->__pad_0[v8]; /*0x5c325b*/
      ToWideStringChar((char *)(v1 + 90154)); /*0x5c3264*/
      Debug::Log(); /*0x5c3276*/
      if ( *(_BYTE *)(*(_DWORD *)(v1 + 52) + 422) || !*(_BYTE *)(v1 + 492) ) /*0x5c328f*/
      {
        v2 = HouseClass_Count; /*0x5c34e1*/
      }
      else
      {
        v2 = HouseClass_Count; /*0x5c329d*/
        int v10 = v0; /*0x5c32a2*/
        if ( v0 < HouseClass_Count ) /*0x5c32a8*/
        {
          do /*0x5c3360*/
          {
            int v3 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v0]; /*0x5c32b4*/
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
      int v4 = 1; /*0x5c338d*/
      int v9 = 0; /*0x5c3392*/
      int v11 = 1; /*0x5c339a*/
      do /*0x5c34d1*/
      {
        int v5 = *(_DWORD *)&HouseClass_Array->__pad_0[v9]; /*0x5c33a8*/
        ToWideStringChar((char *)(v5 + 90154)); /*0x5c33b1*/
        Debug::Log(); /*0x5c33c3*/
        if ( !*(_BYTE *)(*(_DWORD *)(v5 + 52) + 422) && !*(_BYTE *)(v5 + 492) ) /*0x5c33dc*/
        {
          int v13 = v4; /*0x5c33ef*/
          if ( v4 < HouseClass_Count ) /*0x5c33f5*/
          {
            do /*0x5c34ac*/
            {
              int v6 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v4]; /*0x5c3400*/
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
} // namespace gamemd

// 0x5C34F0
namespace gamemd {
int MPCooperative::ReceiveMessage()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v8; // edi
  int v11; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h] BYREF
  int v2 = this->q010; /*0x5c34fd*/
  int v3 = g_SuperWeaponTypeArray; /*0x5c3500*/
  char v4 = 0; /*0x5c3509*/
  v13 = 0; /*0x5c350b*/
  Movie::GetSectionID(v2, &v13); /*0x5c350f*/
  v11 = 0; /*0x5c3523*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, v13, &v12); /*0x5c3527*/
  if ( !v12 ) /*0x5c3530*/
    return 0; /*0x5c3535*/
  int v6 = this->q010; /*0x5c353c*/
  if ( !v6 || !Movie::GetState(v6, &v11) ) /*0x5c3548*/
    v11 = 0; /*0x5c3551*/
  if ( v11 >= *(_DWORD *)(v12 + 32) ) /*0x5c3560*/
    return 0; /*0x5c3565*/
  int v7 = v3 - 1; /*0x5c356c*/
  do /*0x5c35c2*/
  {
    v8 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v7); /*0x5c3586*/
    int v9 = 0; /*0x5c358c*/
    int v10 = *(_DWORD *)(*(_DWORD *)(v12 + 20) + 4 * v11); /*0x5c3591*/
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
} // namespace gamemd

// 0x5C35F0
namespace gamemd {
int MPCooperative::HandleEvent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v8; // edi
  int v11; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h] BYREF
  int v2 = this->q010; /*0x5c35fd*/
  int v3 = g_SuperWeaponTypeArray; /*0x5c3600*/
  char v4 = 0; /*0x5c3609*/
  v13 = 0; /*0x5c360b*/
  Movie::GetSectionID(v2, &v13); /*0x5c360f*/
  v11 = 0; /*0x5c3623*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, v13, &v12); /*0x5c3627*/
  if ( !v12 ) /*0x5c3630*/
    return 0; /*0x5c3635*/
  int v6 = this->q010; /*0x5c363c*/
  if ( !v6 || !Movie::GetState(v6, &v11) ) /*0x5c3648*/
    v11 = 0; /*0x5c3651*/
  if ( v11 >= *(_DWORD *)(v12 + 56) ) /*0x5c3660*/
    return 0; /*0x5c3665*/
  int v7 = v3 - 1; /*0x5c366c*/
  do /*0x5c36c2*/
  {
    v8 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v7); /*0x5c3686*/
    int v9 = 0; /*0x5c368c*/
    int v10 = *(_DWORD *)(*(_DWORD *)(v12 + 44) + 4 * v11); /*0x5c3691*/
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
} // namespace gamemd

// 0x5C3B10
namespace gamemd {
void MPCooperative::LoadSettings(HWND hWnd, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  MPCooperative *v4; // edi
  int i; // ebp
  LPARAM v18; // edi
  LPARAM v21; // edi
  wchar_t *StringCSF; // eax
  int v24; // [esp+10h] [ebp-334h] BYREF
  int v25; // [esp+14h] [ebp-330h]
  MPCooperative *v26; // [esp+18h] [ebp-32Ch]
  void **v27; // [esp+1Ch] [ebp-328h] BYREF
  void *Block; // [esp+20h] [ebp-324h]
  int v29; // [esp+24h] [ebp-320h]
  int v31; // [esp+2Ch] [ebp-318h]
  int v32; // [esp+30h] [ebp-314h]
  char Buffer[260]; // [esp+38h] [ebp-30Ch] BYREF
  wchar_t v35[260]; // [esp+13Ch] [ebp-208h] BYREF

  v4 = this; /*0x5c3b1a*/
  v26 = this; /*0x5c3b1c*/
  int v5 = this->MPCooperative_field_0x50; /*0x5c3b20*/
  this->q004 = 1; /*0x5c3b23*/
  if ( !v5 ) /*0x5c3b29*/
  {
    _DWORD * v6 = __2_YAPAXI_Z(8u); /*0x5c3b2d*/
    if ( v6 ) /*0x5c3b37*/
      _DWORD * v7 = MPCooperative::initGame(v6); /*0x5c3b3b*/
    else
      v7 = 0; /*0x5c3b42*/
    v4->q050 = v7; /*0x5c3b44*/
  }
  SendMessageA(hWnd, 0x184u, 0, 0); /*0x5c3b58*/
  char * v8 = v4->q040; /*0x5c3b5e*/
  *(_BYTE *)(v4 + 73) = 0; /*0x5c3b61*/
  if ( v8 ) /*0x5c3b6c*/
  {
    if ( Game_PlayerCount != 2 ) /*0x5c3ba4*/
      String::AssignWideToChar(v8, (char *)&g_TypeClass_DefaultString, (char *)&g_TypeClass_DefaultString); /*0x5c3bb0*/
  }
  else if ( Game_PlayerCount == 2 ) /*0x5c3b71*/
  {
    void * v9 = __2_YAPAXI_Z(0x70u); /*0x5c3b75*/
    if ( v9 ) /*0x5c3b7f*/
      v4->q040 = MPCooperative::processTurn( /*0x5c3b95*/
                               (int)v9,
                               *(char **)Game_PlayerInfoArray,
                               *(char **)(Game_PlayerInfoArray + 4));
    else
      v4->q040 = 0; /*0x5c3b9c*/
  }
  if ( !v4->q0CD ) /*0x5c3bb5*/
  {
    CampaignClass::GetValue((int)&g_DDrawSurfaceManager, &v24); /*0x5c3bcd*/
    for ( i = 0; i < v24; ++i ) /*0x5c3bda*/
    {
      _DWORD * v11 = __2_YAPAXI_Z(0x70u); /*0x5c3be4*/
      if ( v11 ) /*0x5c3bee*/
        _DWORD * v12 = MissionClass::Init(v11); /*0x5c3bf7*/
      else
        v12 = 0; /*0x5c3bfb*/
      Movie::SetupScreen((int)v12, i); /*0x5c3c00*/
      int v13 = v4->q0CB; /*0x5c3c05*/
      if ( v4->q0CD >= v13 ) /*0x5c3c0d*/
      {
        if ( !*(_BYTE *)(v4 + 817) && v13 ) /*0x5c3c18*/
          continue; /*0x5c3c18*/
        bool v14 = v4->q0CE; /*0x5c3c1a*/
        if ( v14 <= 0 /*0x5c3c2a*/
          || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(v4->q324 + 8))(v4 + 804, v13 + v14, 0) )
        {
          continue; /*0x5c3c2a*/
        }
      }
      bool v15 = v4->q0CD; /*0x5c3c31*/
      int v16 = v4->q328; /*0x5c3c34*/
      v4->q0CD = v15 + 1; /*0x5c3c3a*/
      *(_DWORD *)(v16 + 4 * v15) = v12; /*0x5c3c3d*/
    }
  }
  signed int v17 = 0; /*0x5c3c49*/
  IsometricTileTypeClass::Constructor_0(&v27, 0, 0); /*0x5c3c51*/
  v27 = &vt_DynamicVectorClass_unsigned_short; /*0x5c3c60*/
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
  const char *v33; // [esp+34h] [ebp-310h] BYREF
        Array::GetElementAt(*(_DWORD *)(v4->q328 + 4 * v17), &v33, -1); /*0x5c3cae*/
        v24 = *(_DWORD *)(a3 + 16); /*0x5c3cc5*/
        v18 = 0; /*0x5c3cc9*/
        sprintf(Buffer, g_Str_File__s_MAP, v33); /*0x5c3ccb*/
        int v19 = 0; /*0x5c3cd7*/
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
          swprintf(v35, (const size_t)DataGlobal_82DF40, (const wchar_t *const)(v17 + 1), *((_DWORD *)Block + v17)); /*0x5c3d13*/
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
  char * v20 = v4->q040; /*0x5c3d9c*/
  if ( v20 ) /*0x5c3da1*/
  {
    if ( MPCooperative::ReadCoopSaveINI(v20) && !*(_BYTE *)(v4 + 73) ) /*0x5c3db4*/
    {
      LoadCoopCampaignSave(v4->q040, Buffer); /*0x5c3dc7*/
      strcat(Buffer, g_Str_File__MAP); /*0x5c3df1*/
      v25 = *(_DWORD *)(a3 + 16); /*0x5c3dfb*/
      v21 = 0; /*0x5c3e01*/
      int v22 = 0; /*0x5c3e03*/
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
        StringCSF = GetStringCSF(DataGlobal_82DF04, 0, g_Str_File_MPCoop_cpp, 1726); /*0x5c3e3b*/
        SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)StringCSF); /*0x5c3e67*/
        SendMessageA(hWnd, 0x19Au, v17, v21); /*0x5c3e71*/
        *(_BYTE *)(v26 + 73) = 1; /*0x5c3e77*/
      }
    }
  }
LABEL_47:
  SendMessageA(hWnd, 0x186u, 0, 0); /*0x5c3e7b*/
  v27 = &vt_VectorClass_unsigned_short; /*0x5c3e9b*/
  if ( Block ) /*0x5c3ea4*/
  {
  int v30; // [esp+28h] [ebp-31Ch]
    if ( BYTE1(v30) ) /*0x5c3eac*/
      __3_YAXPAX_Z(Block); /*0x5c3eaf*/
  }
}
}
} // namespace gamemd

// 0x5C3F80
namespace gamemd {
void MPCooperative::SetGameMode()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND Current; // eax
  HWND DlgItem; // edi
  LRESULT v4; // ebx
  char *v5; // esi
  int i; // edi
  HWND GameUI; // eax
  HWND v10; // edi
  char Buffer[260]; // [esp+14h] [ebp-104h] BYREF

  if ( Dialog::GetCurrentType() != 107 ) /*0x5c3f94*/
  {
    int v6 = this->MPCooperative_field_0x40; /*0x5c4013*/
    if ( v6 && (unsigned char)this->MPCooperative_field_0x48 ) /*0x5c401e*/
    {
      if ( this->MPCooperative_field_0x4C ) /*0x5c4029*/
        Movie::SetupScreen(v6, 0); /*0x5c4032*/
      else
        Movie::SetupScreen(v6, 1); /*0x5c403f*/
      Movie::SetupScreen(this->MPCooperative_field_0x40, this->MPCooperative_field_0x4C); /*0x5c403b*/
  const char *v11; // [esp+10h] [ebp-108h] BYREF
      Array::GetElementAt(this->MPCooperative_field_0x40, &v11, -1); /*0x5c405a*/
      int v7 = g_MultiplayerOptions; /*0x5c4063*/
      sprintf(Buffer, g_Str_File__s_MAP, v11); /*0x5c4074*/
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
    v5 = this->q040; /*0x5c40e9*/
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
  v5 = this->q040; /*0x5c3fcd*/
  if ( !v5 ) /*0x5c3fd2*/
    return; /*0x5c3fd2*/
LABEL_22:
  String::AssignWideToChar(v5, (char *)&g_TypeClass_DefaultString, (char *)&g_TypeClass_DefaultString); /*0x5c40f0*/
}
}
} // namespace gamemd

// 0x5C4110
namespace gamemd {
int MPCooperative::ProcessChat()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  LRESULT v2; // eax
  LPARAM v6; // ebp
  HWND Current; // eax
  HWND DlgItem; // esi
  WPARAM v12; // ebx
  wchar_t *String; // eax
  wchar_t *v14; // eax
  char Destination[260]; // [esp+14h] [ebp-104h] BYREF

  v2 = this->q010; /*0x5c4120*/
  if ( !v2 ) /*0x5c4125*/
  {
    _DWORD * v3 = __2_YAPAXI_Z(0x70u); /*0x5c4129*/
    if ( v3 ) /*0x5c4133*/
      _DWORD * v4 = MissionClass::Init(v3); /*0x5c4137*/
    else
      v4 = 0; /*0x5c413e*/
    this->q010 = (LRESULT)v4; /*0x5c4144*/
    LOBYTE(v2) = Movie::SetupScreen((int)v4, 0); /*0x5c4147*/
  }
  char * v5 = (char *)this->q010; /*0x5c414c*/
  if ( v5 ) /*0x5c4151*/
  {
    if ( Game_PlayerCount == 2 ) /*0x5c415e*/
      String::AssignWideToChar(v5, *(char **)Game_PlayerInfoArray, *(char **)(Game_PlayerInfoArray + 4)); /*0x5c416c*/
    this->ProcessTurn_0(); /*0x5c4175*/
    LOBYTE(v2) = MPCooperative::ReadCoopSaveINI(this->q010); /*0x5c417b*/
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
          int v7 = g_MultiplayerOptions; /*0x5c41de*/
          int v8 = 0; /*0x5c41e4*/
          if ( g_MultiplayerOptions > 0 ) /*0x5c41e8*/
          {
            v2 = g_MultiplayerGameState; /*0x5c41ee*/
            while ( !v6 ) /*0x5c41f5*/
            {
              bool v9 = _strcmpi((const void *)(*(_DWORD *)(v2 + 4 * v8) + 88), Destination) == 0; /*0x5c420b*/
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
              String = GetStringCSF(DataGlobal_82DF04, 0, g_Str_File_MPCoop_cpp, 1914); /*0x5c4261*/
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
} // namespace gamemd

// 0x5C42D0
namespace gamemd {
int MPCooperative::UpdateMovieScore()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v6; // esi
  char v10; // bl
  int v11; // [esp+14h] [ebp-2Ch] BYREF
  int v12; // [esp+18h] [ebp-28h] BYREF
  int v13; // [esp+1Ch] [ebp-24h] BYREF
  int v14; // [esp+20h] [ebp-20h] BYREF
  _BYTE v15[4]; // [esp+24h] [ebp-1Ch] BYREF
  void **v16; // [esp+28h] [ebp-18h] BYREF
  void *Block; // [esp+2Ch] [ebp-14h]
  int v19; // [esp+38h] [ebp-8h]
  int v20; // [esp+3Ch] [ebp-4h]
  if ( !this->q014 ) /*0x5c42db*/
  {
    void * v2 = __2_YAPAXI_Z(8u); /*0x5c42e2*/
    if ( v2 ) /*0x5c42ec*/
      int v3 = MPCooperative::initGame(v2); /*0x5c42f0*/
    else
      v3 = 0; /*0x5c42f7*/
    this->q014 = v3; /*0x5c42f9*/
  }
  if ( !this->q010 ) /*0x5c42fc*/
    return 0; /*0x5c4301*/
  MPCooperative::applyVoteResult(0, 0); /*0x5c4311*/
  v16 = &vt_DynamicVectorClass_MPlayerScoreType; /*0x5c4323*/
  v20 = 10; /*0x5c432b*/
  v19 = 0; /*0x5c4333*/
  MPCooperative::BuildScoreEntries(&v16, v15); /*0x5c4337*/
  int v5 = this->q010; /*0x5c433c*/
  v12 = 0; /*0x5c4344*/
  if ( Movie::GetSectionID(v5, &v11) ) /*0x5c4348*/
    Movie::GetSection((int)&g_DDrawSurfaceManager, v11, &v12); /*0x5c4369*/
  else
    v11 = -1; /*0x5c4354*/
  MPCooperative::GetMovieScore(&v14); /*0x5c43a5*/
  Movie::GetState(this->q010, &v13); /*0x5c43b2*/
  if ( v12 ) /*0x5c43bb*/
  {
    if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x5c43d8*/
      Timer::GetTicks(); /*0x5c43dd*/
    v6 = *(_DWORD *)this->q014; /*0x5c43f0*/
  }
  else
  {
    if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x5c440f*/
      Timer::GetTicks(); /*0x5c4414*/
    v6 = *(_DWORD *)this->q014; /*0x5c4425*/
  }
  MPCooperative::processTurnEnd(&v16); /*0x5c4441*/
  (*(void (__thiscall **)(_DWORD))(v6 + 4))(this->q014); /*0x5c4449*/
  if ( v19 ) /*0x5c4452*/
  {
  bool v8; // zf
    do /*0x5c449c*/
    {
      _DWORD * v7 = Block; /*0x5c4454*/
      if ( *(_DWORD *)Block ) /*0x5c4458*/
      {
        __3_YAXPAX_Z(*(void **)Block); /*0x5c4461*/
        v7 = Block; /*0x5c4466*/
      }
      *v7 = 0; /*0x5c446d*/
      v8 = v19 == 0; /*0x5c4477*/
      if ( v19 > 0 ) /*0x5c4479*/
      {
        int v9 = 0; /*0x5c447c*/
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
  v10 = unk_89E04C; /*0x5c44a2*/
  unk_89E04C = 0; /*0x5c44aa*/
  v16 = &vt_VectorClass_MPlayerScoreType; /*0x5c44b1*/
  if ( Block ) /*0x5c44b9*/
  {
  char v18; // [esp+35h] [ebp-Bh]
    if ( v18 ) /*0x5c44c1*/
      __3_YAXPAX_Z(Block); /*0x5c44c4*/
  }
  return v10; /*0x5c4303*/
}
}
} // namespace gamemd

// 0x5C44E0
namespace gamemd {
void MPCooperative::ShowScoreScreen(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void (__thiscall **v8)(_DWORD *, int); // edi
  LPARAM v14; // [esp+8h] [ebp-3Ch]
  void ***v15; // [esp+Ch] [ebp-38h]
  void **v21; // [esp+2Ch] [ebp-18h] BYREF
  void *Block; // [esp+30h] [ebp-14h]

  int v3 = this->q010; /*0x5c44e7*/
  if ( v3 ) /*0x5c44ec*/
  {
  int v19; // [esp+24h] [ebp-20h] BYREF
    MPCooperative::GetMovieScore(v3, &v19); /*0x5c44f7*/
  int v18; // [esp+20h] [ebp-24h] BYREF
    Movie::GetState(this->q010, &v18); /*0x5c4504*/
    if ( (_BYTE)a2 ) /*0x5c450f*/
    {
      if ( v18 >= v19 ) /*0x5c451f*/
      {
        _DWORD * v4 = __2_YAPAXI_Z(4u); /*0x5c4527*/
        if ( v4 ) /*0x5c4531*/
        {
          _DWORD * v5 = MPCooperative::startGame(v4); /*0x5c453e*/
          if ( v5 ) /*0x5c4542*/
          {
            MPCooperative::applyVoteResult(&v21, 0, 0); /*0x5c4550*/
  int v20; // [esp+28h] [ebp-1Ch] BYREF
            int * v16 = &v20; /*0x5c455d*/
            v15 = &v21; /*0x5c455e*/
            int v6 = this->q010; /*0x5c455f*/
            v21 = &vt_DynamicVectorClass_MPlayerScoreType; /*0x5c4562*/
            int v25 = 10; /*0x5c456a*/
            int v24 = 0; /*0x5c4572*/
            MPCooperative::BuildScoreEntries(v6, (int)&v21, &v20); /*0x5c457a*/
            int v7 = this->q010; /*0x5c457f*/
            int v17 = 0; /*0x5c4587*/
            if ( Movie::GetSectionID(v7, &a2) ) /*0x5c458f*/
              Movie::GetSection((int)&g_DDrawSurfaceManager, a2, &v17); /*0x5c45b1*/
            else
              a2 = -1; /*0x5c4598*/
            v8 = (void (__thiscall **)(_DWORD *, int))*v5; /*0x5c45bf*/
            v16 = *(int **)(v17 + 4); /*0x5c45ca*/
            v15 = (void ***)(a2 + 1); /*0x5c45cf*/
            v14 = DataGlobal_A8EB68; /*0x5c45d0*/
            int v13 = v20; /*0x5c45d1*/
  _DWORD v12[6]; // [esp-14h] [ebp-58h] BYREF
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
  bool v10; // zf
              do /*0x5c463c*/
              {
                _DWORD * v9 = Block; /*0x5c45f6*/
                if ( *(_DWORD *)Block ) /*0x5c45fa*/
                {
                  __3_YAXPAX_Z(*(void **)Block); /*0x5c4601*/
                  v9 = Block; /*0x5c4606*/
                }
                *v9 = 0; /*0x5c460d*/
                v10 = v24 == 0; /*0x5c4617*/
                if ( v24 > 0 ) /*0x5c4619*/
                {
                  int v11 = 0; /*0x5c461c*/
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
            v21 = &vt_VectorClass_MPlayerScoreType; /*0x5c4642*/
            if ( Block ) /*0x5c464c*/
            {
  char v23; // [esp+39h] [ebp-Bh]
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
} // namespace gamemd

// 0x5C4CA0
namespace gamemd {
int MPCooperative::InitializePlayers()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  PtrVector::Destroy(&g_PlayerInfoCount); /*0x5c4cac*/
  int v2 = 0; /*0x5c4cb1*/
  g_ScenarioLoadFlags = 0; /*0x5c4cb3*/
  result = this->q068; /*0x5c4cb9*/
  if ( result > 0 ) /*0x5c4cbe*/
  {
    do /*0x5c4e7b*/
    {
      int v4 = 0; /*0x5c4ccb*/
      if ( HouseClass_Count > 0 ) /*0x5c4ccf*/
      {
  _DWORD *v8; // [esp+8h] [ebp-14h]
        while ( _wcsicmp( /*0x5c4cf5*/
                  (const wchar_t *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v4] + 90154),
                  *(const wchar_t **)(this->q05C + 4 * v2)) )
        {
          if ( ++v4 >= HouseClass_Count ) /*0x5c4cff*/
            goto LABEL_16; /*0x5c4cff*/
        }
        *(_DWORD *)(*(_DWORD *)(this->q05C + 4 * v2) + 111) = v4; /*0x5c4d11*/
        char * v5 = (char *)__2_YAPAXI_Z(0x85u); /*0x5c4d14*/
        char * v6 = v5; /*0x5c4d19*/
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
        wcscpy((wchar_t *)v6, *(const wchar_t **)(this->q05C + 4 * v2)); /*0x5c4d44*/
        *(_DWORD *)(v6 + 123) = *(_DWORD *)(*(_DWORD *)(this->q05C + 4 * v2) + 123); /*0x5c4d55*/
        *(_DWORD *)(v6 + 75) = *(_DWORD *)(*(_DWORD *)(this->q05C + 4 * v2) + 75); /*0x5c4d61*/
        *(_DWORD *)(v6 + 83) = *(_DWORD *)(*(_DWORD *)(this->q05C + 4 * v2) + 83); /*0x5c4d6f*/
        strcpy(v6 + 52, (const char *)(*(_DWORD *)(this->q05C + 4 * v2) + 52)); /*0x5c4d90*/
        *(_DWORD *)((char *)v8 + 79) = *(_DWORD *)(*(_DWORD *)(this->q05C + 4 * v2) + 79); /*0x5c4da6*/
        *(_DWORD *)((char *)v8 + 87) = *(_DWORD *)(*(_DWORD *)(this->q05C + 4 * v2) + 87); /*0x5c4db2*/
        *(_DWORD *)((char *)v8 + 107) = *(_DWORD *)(*(_DWORD *)(this->q05C + 4 * v2) + 107); /*0x5c4dbe*/
        *(_DWORD *)((char *)v8 + 115) = *(_DWORD *)(*(_DWORD *)(this->q05C + 4 * v2) + 115); /*0x5c4dca*/
        *(_DWORD *)((char *)v8 + 119) = *(_DWORD *)(*(_DWORD *)(this->q05C + 4 * v2) + 119); /*0x5c4dd6*/
        *(_DWORD *)((char *)v8 + 123) = *(_DWORD *)(*(_DWORD *)(this->q05C + 4 * v2) + 123); /*0x5c4deb*/
  int v9; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+10h] [ebp-Ch] BYREF
  _BYTE v11[8]; // [esp+14h] [ebp-8h] BYREF
        Network::GetAddress((_DWORD *)(*(_DWORD *)(this->q05C + 4 * v2) + 40), &v10, (int)v11, &v9); /*0x5c4dfd*/
        NetworkID::Assign(v8 + 10, &v10, (int)v11, v9); /*0x5c4e14*/
        if ( Game_PlayerCount < DataGlobal_A8DA7C /*0x5c4e50*/
          || (DataGlobal_A8DA81 || !DataGlobal_A8DA7C)
          && DataGlobal_A8DA88 > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_PlayerInfoCount + 8))(
               &g_PlayerInfoCount,
               DataGlobal_A8DA7C + DataGlobal_A8DA88,
               0) )
        {
          int v7 = Game_PlayerCount++; /*0x5c4e5d*/
          *(_DWORD *)(Game_PlayerInfoArray + 4 * v7) = v8; /*0x5c4e6c*/
        }
        ++g_ScenarioLoadFlags; /*0x5c4e6f*/
      }
LABEL_16:
      result = this->q068; /*0x5c4e75*/
      ++v2; /*0x5c4e78*/
    }
    while ( v2 < result ); /*0x5c4e7b*/
  }
  return result; /*0x5c4e83*/
}
}
} // namespace gamemd

// 0x5C4F10
namespace gamemd {
void MPCooperative_QueryInterface()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x5C4F30
namespace gamemd {
unsigned int * MPCooperative::processTurnEnd(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  this->q004 = 0; /*0x5c4f3d*/
  this->q008 = 0; /*0x5c4f40*/
  this->q00C = 1; /*0x5c4f43*/
  this->IsAllocated = 0; /*0x5c4f47*/
  *this = &vt_VectorClass_MPlayerScoreType; /*0x5c4f4a*/
  if ( this != a2 ) /*0x5c4f50*/
  {
    MPCooperative::ddtor((int)this); /*0x5c4f52*/
    int v3 = a2[2]; /*0x5c4f58*/
    this->q008 = v3; /*0x5c4f5d*/
    if ( v3 ) /*0x5c4f60*/
    {
      void * v4 = __2_YAPAXI_Z(4 * v3); /*0x5c4f66*/
      this->q004 = v4; /*0x5c4f70*/
      if ( v4 ) /*0x5c4f73*/
      {
        int v5 = this->q008; /*0x5c4f75*/
        int v6 = 0; /*0x5c4f78*/
        this->IsAllocated = 1; /*0x5c4f7c*/
        if ( v5 > 0 ) /*0x5c4f80*/
        {
          do /*0x5c4f94*/
          {
            *(_DWORD *)(this->q004 + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x5c4f8b*/
            ++v6; /*0x5c4f91*/
          }
          while ( v6 < this->q008 ); /*0x5c4f94*/
        }
      }
    }
    else
    {
      this->q004 = 0; /*0x5c4f98*/
      this->IsAllocated = 0; /*0x5c4f9b*/
    }
  }
  this->q004 = a2[4]; /*0x5c4fa1*/
  this->q014 = a2[5]; /*0x5c4fa7*/
  *this = &vt_DynamicVectorClass_MPlayerScoreType; /*0x5c4faa*/
  return this; /*0x5c4fb2*/
}
}
} // namespace gamemd

// 0x696F30
namespace gamemd {
int MPCooperative::finalizeSession()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = -2; /*0x696f33*/
  if ( *(_DWORD *)(this + 87) != -2 || *(_DWORD *)(this + 83) != -1 ) /*0x696f40*/
    return *(_DWORD *)(this + 83); /*0x696f42*/
  return result; /*0x696f45*/
}
}
} // namespace gamemd

// 0x46D330
namespace gamemd {
unsigned int * MPCooperative::initGame()
{
{
    *(void**)this = &vt_CampaignScoreClass;
    this->Items = 0;
    DataGlobal_89E050 = 0;
    DataGlobal_81B1E8 = -1;
    return this;
}
}
} // namespace gamemd

// 0x470C00
namespace gamemd {
unsigned int * MPCooperative::startGame()
{
{
    this->vfptr = &vt_CampaignEndScoreClass;
    DataGlobal_89E008 = -1;
    DataGlobal_89E020 = 0;
    DataGlobal_89DFD4 = 0;
    return &this->vfptr;
}
}
} // namespace gamemd

// 0x49BCA0
namespace gamemd {
char MPCooperative::GetMovieScore(CampaignEndScoreClass * aP1)
{
{
    if ( !(unsigned char)this->MPCooperative_field_0x6C )
    return 0;
    aP1->vfptr = *(void **)(this + 64);
    return 1;
}
}
} // namespace gamemd

// 0x5C1980
namespace gamemd {
int sub_5C1980()
{
{
    int result;
    int v1;
    int i;
    int v3;
    int v4;
    result = -1;
    v1 = 0;
    v3 = -1;
    if ( DataGlobal_89F574 > 0 )
  {
    do
    {
    Movie::GetSection((int)&g_DDrawSurfaceManager, v1, &v4);
    for ( i = 0; i < 780; i += 260 )
      {
    if ( g_GameRulesOptions )
        {
    if ( !_strnicmp( (const char *)(*(int *)(g_MultiplayerGameState + 4 * g_GameRulesOptions) + 88), (const char *)(*(int *)(v4 + 12) + i), strlen((const char *)(*(int *)(v4 + 12) + i))) )
    v3 = v1;
        }
      }
    ++v1;
    }
    while ( v1 < DataGlobal_89F574 );
    return v3;
  }
    return result;
}
}
} // namespace gamemd

// 0x5C1D80
namespace gamemd {
char MPCooperative::Write(int a2)
{
{
    char *v2;
    if ( Game_PlayerCount == 2 )
  {
    v2 = this->coopSaveFileName;
    if ( v2 )
    String::AssignWideToChar(v2, *(char **)Game_PlayerInfoArray, *(char **)(Game_PlayerInfoArray + 4));
  }
    return ScenarioClass::MissionStubReturnZero2(a2);
}
}
} // namespace gamemd

// 0x5C21A0
namespace gamemd {
HWND MPCooperative::CheckReady(HWND hDlg)
{
{
    HWND result;
    result = GetDlgItem(hDlg, 1842);
    if ( result )
    return (HWND)PostMessageA(result, 0x405u, 1u, DataGlobal_A8EB68);
    return result;
}
}
} // namespace gamemd

// 0x5C2640
namespace gamemd {
void MPCooperative::Clone(HWND hDlg)
{
{
    int v3;
    char *i;
    int ResourceID2CSF;
    if ( hDlg )
  {
    v3 = *(int *)&g_NetworkPlayerBuffer[1096];
    for ( i = 0; (int)i < v3; ++i )
    {
    ResourceID2CSF = GetResourceID2CSF(i);
    MovieClass::ReadConfig(this, (IUnknown *)hDlg, ResourceID2CSF);
    }
    CampaignCoop::Setup(this, hDlg, 1);
  }
}
}
} // namespace gamemd

// 0x5C2CB0
namespace gamemd {
char MPCooperative::ValidateSettings()
{
{
    HWND GameUI;
    GameUI = (HWND)Dialog::FindGameUI();
    if ( GameUI || (GameUI = (HWND)Dialog::FindByHandle((void *)0xBC6)) != 0 )
    CampaignCoop::Setup(this, GameUI, 1);
    return 1;
}
}
} // namespace gamemd

// 0x5C2CE0
namespace gamemd {
int MPCooperative::SaveSettings(HWND hWnd, int a3)
{
{
    return ListBox::FillPlayers(this, hWnd, a3);
}
}
} // namespace gamemd

// 0x5C3700
namespace gamemd {
char MPCooperative::StubReturnFalse()
{
return 0;
}
} // namespace gamemd

// 0x5C3F30
namespace gamemd {
int MPCooperative::Cleanup()
{
{
    HWND GameUI;
    HWND v3;
    int result;
    GameUI = (HWND)Dialog::FindGameUI();
    v3 = GameUI;
    if ( GameUI )
  {
    CampaignCoop::Setup(this, GameUI, 0);
    SkirmishDialog::FillComboBoxes(v3);
  }
    for ( result = 0; result < Game_PlayerCount; ++result )
    *(int *)(*(int *)(Game_PlayerInfoArray + 4 * result) + 107) = result;
    return result;
}
}
} // namespace gamemd

// 0x5C42C0
namespace gamemd {
int MPCooperative::COMStub_Ret2()
{
return 2;
}
} // namespace gamemd

// 0x5C4670
namespace gamemd {
int MPCooperative::checkVictory()
{
{
    int v2;
    int v3;
    int v5;
    int v6;
    int v7;
    v2 = 0;
    v3 = this->coopSaveFileName;
    if ( !v3 )
    return 0;
    MPCooperative::GetMovieScore(v3, &v5);
    Movie::GetState(this->coopSaveFileName, &v6);
    if ( v5 == v6 )
  {
    Movie::GetSectionID(this->coopSaveFileName, &v7);
    v2 = 1 << v7;
    Debug::Log();
  }
    return v2;
}
}
} // namespace gamemd

// 0x5C4E90
namespace gamemd {
char MPCooperative::spawnUnits(int a2, void * Block, int a4, short a5, int a6, int a7, unsigned int * a8)
{
{
    *a8 = 0;
    if ( this->coopSaveFileName )
  {
    if ( Block )
    {
    if ( HIBYTE(a5) )
    __3_YAXPAX_Z(Block);
    }
    return 1;
  }
    else
  {
    if ( Block && HIBYTE(a5) )
    __3_YAXPAX_Z(Block);
    return 0;
  }
}
}
} // namespace gamemd

// 0x5C4EE0
namespace gamemd {
char MPCooperative::assignResources()
{
return 1;
}
} // namespace gamemd

// 0x5C4EF0
namespace gamemd {
char MPCooperative::setUpAlliances()
{
return 1;
}
} // namespace gamemd

// 0x5C4F00
namespace gamemd {
char MPCooperative::initTurnOrder()
{
return 0;
}
} // namespace gamemd

// 0x5C4FC0
namespace gamemd {
DynamicVector * MPCooperative::saveGameState(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_MPlayerScoreType;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x5C5010
namespace gamemd {
void MPCooperative::loadGameState()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MPCooperative_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MPCooperative_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MPCooperative_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5C5040
namespace gamemd {
unsigned int MPCooperative::syncPlayers(int a2)
{
{
    if ( (unsigned char)this->MPCooperative_field_0xC )
    return (unsigned int)(a2 - this->MPCooperative_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5C5060
namespace gamemd {
int MPCooperative::dispatchEvent(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x5C50D0
namespace gamemd {
void MPCooperative::processPlayerInput()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MPCooperative_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MPCooperative_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MPCooperative_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5C5100
namespace gamemd {
unsigned int MPCooperative::updateGameClock(int a2)
{
{
    if ( (unsigned char)this->MPCooperative_field_0xC )
    return (unsigned int)(a2 - this->MPCooperative_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5C5130
namespace gamemd {
char MPCooperative::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x5C5170
namespace gamemd {
char MPCooperative::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->MPCooperative_field_0x4 )
      {
    v6 = this->MPCooperative_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->MPCooperative_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MPCooperative_field_0x4 = 0;
        }
      }
    this->MPCooperative_field_0x4 = v4;
    this->MPCooperative_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->StubReturnFalse3();
    return 1;
  }
}
}
} // namespace gamemd

// 0x5C5220
namespace gamemd {
void MPCooperative::ddtor()
{
{
    if ( this->MPCooperative_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->MPCooperative_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MPCooperative_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5C5250
namespace gamemd {
int MPCooperative::checkTimeout(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->MPCooperative_field_0xC )
    return 0;
    v3 = this->MPCooperative_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5C5290
namespace gamemd {
unsigned int MPCooperative::handleDisconnect(int a2)
{
{
    if ( (unsigned char)this->MPCooperative_field_0xC )
    return (unsigned int)(a2 - this->MPCooperative_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5C52B0
namespace gamemd {
char MPCooperative::migrateHost(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->MPCooperative_field_0x4 )
    {
    v5 = this->MPCooperative_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->MPCooperative_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MPCooperative_field_0x4 = 0;
      }
    }
    this->MPCooperative_field_0x4 = v4;
    this->MPCooperative_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->StubReturnFalse3();
  }
    v7 = this->MPCooperative_field_0x8;
    if ( v7 < this->MPCooperative_field_0x10 )
    this->MPCooperative_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x5C5360
namespace gamemd {
int MPCooperative::validatePlayerAction(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

}
// 0x5C53D0
namespace gamemd {
char MPCooperative::processTeamChat(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->MPCooperative_field_0x4 )
      {
    v6 = this->MPCooperative_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->MPCooperative_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MPCooperative_field_0x4 = 0;
        }
      }
    this->MPCooperative_field_0x4 = v4;
    this->MPCooperative_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->StubReturnFalse3();
    return 1;
  }
}
}
} // namespace gamemd

// 0x5C5480
namespace gamemd {
void MPCooperative::updateScoreBoard()
{
{
    if ( this->MPCooperative_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->MPCooperative_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MPCooperative_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5C54B0
namespace gamemd {
int MPCooperative::processAITurn(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->MPCooperative_field_0xC )
    return 0;
    v3 = this->MPCooperative_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5C54F0
namespace gamemd {
unsigned int MPCooperative::evaluateAIStrategy(int a2)
{
{
    if ( (unsigned char)this->MPCooperative_field_0xC )
    return (unsigned int)(a2 - this->MPCooperative_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5C5770
namespace gamemd {
char MPCooperative::broadcastMessage(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->MPCooperative_field_0x4 )
    {
    v5 = this->MPCooperative_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->MPCooperative_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MPCooperative_field_0x4 = 0;
      }
    }
    this->MPCooperative_field_0x4 = v4;
    this->MPCooperative_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->StubReturnFalse3();
  }
    v7 = this->MPCooperative_field_0x8;
    if ( v7 < this->MPCooperative_field_0x10 )
    this->MPCooperative_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x5C5820
namespace gamemd {
int MPCooperative::handlePlayerReady(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd
}

// 0x5C5850
namespace gamemd {
VectorClass * MPCooperative::verifyGameIntegrity(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_MPlayerScoreType;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x5C58A0
namespace gamemd {
VectorClass * MPCooperative::processVote(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_NodeNameType;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x5C5990
namespace gamemd {
DynamicVector * MPCooperative::tallyVotes(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_CoopCampaignClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x5C59E0
namespace gamemd {
unsigned int * MPCooperative::applyVoteResult(int a2, int a3)
{
{
    this->Items = 0;
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_MPlayerScoreType;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = a3;
    return this;
    }
    this->Items = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
  }
    return this;
}
}
} // namespace gamemd

// 0x5D6360
namespace gamemd {
char MPCooperative::Stub()
{
return 0;
}
} // namespace gamemd

// 0x5E66D0
namespace gamemd {
LRESULT sub_5E66D0()
{
{
    return SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0);
}
}
} // namespace gamemd
