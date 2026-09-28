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
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/Node_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/MSFont_18_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/MSEngine_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"

// 0x49B660
namespace gamemd {
int MPCooperative::processTurn(char * a2, char * a3)
{
  if ( a2 ) /*0x49b66e*/
    strcpy(ToWideStringChar(a2)); /*0x49b68b*/
  else
    *(unsigned char *)this = 0; /*0x49b696*/
  if ( a3 ) /*0x49b69f*/
    strcpy((char *)(&this->q0088), ToWideStringChar(a3)); /*0x49b6bf*/
  else
    this->u32_1C = 0; /*0x49b6ca*/
  this->q014 = -2; /*0x49b6d3*/
  this->q030 = -2; /*0x49b6d6*/
  this->u32_18 = -2; /*0x49b6d9*/
  this->q034 = -2; /*0x49b6dc*/
  this->u32_3C = 0; /*0x49b6e2*/
  this->q044 = -1; /*0x49b6e5*/
  this->q038 = -1; /*0x49b6e8*/
  this->q06C = 0; /*0x49b6eb*/
  this->q040 = 0; /*0x49b6ee*/
  this->q048 = 0; /*0x49b6f1*/
  this->q04C = 0; /*0x49b6f4*/
  this->ptr_50 = 0; /*0x49b6f7*/
  this->q054 = 0; /*0x49b6fa*/
  this->q058 = 0; /*0x49b6fd*/
  this->q05C = 0; /*0x49b700*/
  this->q068 = 0; /*0x49b703*/
  this->q060 = 0; /*0x49b706*/
  this->q064 = 0; /*0x49b709*/
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

  if ( !this->q06C ) /*0x49bce4*/
    return 0; /*0x49bceb*/
  while ( a2->q010 ) /*0x49bcf9*/
  {
    RA2_OPDEL(*a2->q004); /*0x49bd06*/
    v6 = a2->q010; /*0x49bd0b*/
    if ( v6 > 0 ) /*0x49bd13*/
    {
      v7 = v6 - 1; /*0x49bd15*/
      v8 = 0; /*0x49bd18*/
      for ( a2->q010 = v7; /*0x49bd1f*/
            v8 < a2->q010;
            *(unsigned int *)(a2->q004 + 4 * v8 - 4) = *(unsigned int *)(a2->q004 + 4 * v8) )
      {
        ++v8; /*0x49bd24*/
      }
    }
  }
  v9 = (wchar_t *)RA2_OPNEW(0x70u); /*0x49bd41*/
  v16 = v9; /*0x49bd4a*/
  FillScoreScreenStats(v9, 0); /*0x49bd4e*/
  v17 = (wchar_t *)RA2_OPNEW(0x70u); /*0x49bd61*/
  FillScoreScreenStats(v17, 1); /*0x49bd65*/
  if ( strcmp((const char *)this, ToWideStringChar((char *)v9)) ) /*0x49bd7b*/
  {
    v16 = v17; /*0x49bda8*/
    v17 = v9; /*0x49bdac*/
  }
  for ( i = 0; i < 2; ++i ) /*0x49bdb0*/
  {
    v11 = (wchar_t *)((unsigned int)(v16));
    if ( i ) /*0x49bdb8*/
      v11 = v17; /*0x49bdba*/
    *((unsigned int *)v11 + 16) = *(unsigned int *)(&this->q010 * i + 72); /*0x49bdc2*/
    *((unsigned int *)v11 + 20) = *(unsigned int *)(&this->q010 * i + 80); /*0x49bdc9*/
    *((unsigned int *)v11 + 12) = *(unsigned int *)(&this->q010 * i + 88); /*0x49bdd0*/
    *((unsigned int *)v11 + 11) = this->q038; /*0x49bdd6*/
    *((unsigned int *)v11 + 24) = *(unsigned int *)(&this->q010 * i + 96); /*0x49bddd*/
    v12 = a2->u32_8; /*0x49bde0*/
    if ( a2->q010 >= v12 ) /*0x49bde6*/
    {
      if ( !a2->u8_D && v12 ) /*0x49bdf1*/
        continue; /*0x49bdf1*/
      v13 = a2->q014; /*0x49bdf3*/
      if ( v13 <= 0 || !(*(uint8_t (__thiscall **)(int, int, unsigned int))(a2->u32_8)(a2, v12 + v13, 0) ) /*0x49be03*/
        continue; /*0x49be03*/
    }
    v14 = (unsigned int)(a2->q010);
    v15 = (unsigned int)(a2->q004);
    a2->q010 = (unsigned int)(v14 + 1);
    *(unsigned int *)(v15 + 4 * v14) = v11; /*0x49be16*/
  }
  *aP2 = this->q068; /*0x49be28*/
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
  CCINIClass v15; // [esp+Ch] [ebp-194h] BYREF
  CCFileClass v16; // [esp+64h] [ebp-13Ch] BYREF
  int v17[3]; // [esp+BCh] [ebp-E4h] BYREF
  int v18; // [esp+C8h] [ebp-D8h]
  CCFileClass v19; // [esp+D0h] [ebp-D0h] BYREF
  int v20[3]; // [esp+128h] [ebp-78h] BYREF
  int v21; // [esp+134h] [ebp-6Ch]
  char v22[100]; // [esp+13Ch] [ebp-64h] BYREF

  v1 = (char *)((unsigned int)((char *)this));
  if ( !IDA_LOBYTE(this->MPCooperative_field_0x0) ) /*0x49be4d*/
    return 1; /*0x49be4d*/
  v2 = &this->__pad_18[4]; /*0x49be58*/
  if ( !this->__pad_18[4] ) /*0x49be55*/
    return 1; /*0x49c0c5*/
  CCFileClass::Construct(&v19, g_Str_File_coopsave_ini); /*0x49be70*/
  v15.headNode[0] = 0; /*0x49be79*/
  v15.headNode[1] = 0; /*0x49be7d*/
  INISectionList::Constructor((INISectionList *)&v15.headNode[2]); /*0x49be81*/
  Node::Init((Node *)&v15.__pad_20[8]); /*0x49be8a*/
  v15.INIClass_field_3C = 0; /*0x49be9d*/
  v15.ownsFile = 0; /*0x49bea1*/
  *(unsigned int *)v15.__pad_0 = &CCINIClass_Vtable; /*0x49bea5*/
  CCINIClass::Load(&v15, (int)&v19, 0, 0); /*0x49bead*/
  CCFileClass::Reset(&v19); /*0x49beb9*/
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
  strcpy(v22, g_IsWindowed); /*0x49bf52*/
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
  g_IsWindowed[v9] = (unsigned int)(0);
  strcat(v22, g_IsWindowed); /*0x49bff9*/
  CCFileClass::Construct3((int)&v16); /*0x49c006*/
  (*(void (__thiscall **)(CCFileClass *, char *))(*(unsigned int *)v16.__pad_0 + 8))(&v16, g_Str_File_coopsave_ini); /*0x49c018*/
  (*(void (__thiscall **)(CCFileClass *, int))(*(unsigned int *)v16.__pad_0 + 28))(&v16, 2); /*0x49c025*/
  INIClass::ClearSection((int *)v15.__pad_0, (int)v22, 0); /*0x49c035*/
  INIClass::WriteDigest((INIClass *)&v15, (int)&v16, 0); /*0x49c044*/
  CCFileClass::Reset(&v16); /*0x49c04d*/
  *(unsigned int *)v16.__pad_0 = (void*)&CCFileClass_vftable; /*0x49c05e*/
  v18 = 0; /*0x49c062*/
  Vector::Clear((int)v17); /*0x49c069*/
  *(unsigned int *)v16.__pad_0 = &off_7E1668; /*0x49c077*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v16); /*0x49c07b*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v15); /*0x49c084*/
  *(unsigned int *)v19.__pad_0 = (void*)&CCFileClass_vftable; /*0x49c090*/
  v21 = 0; /*0x49c097*/
  Vector::Clear((int)v20); /*0x49c09e*/
  *(unsigned int *)v19.__pad_0 = &off_7E1668; /*0x49c0aa*/
  BufferIOFileClass::Dtor((BufferIOFileClass *, unsigned int a20, unsigned int a48, unsigned int a24, unsigned int a52, unsigned int a16, unsigned int a44, unsigned int a28, unsigned int a56)&v19); /*0x49c0b1*/
  return 1; /*0x49c0b7*/
}
}
// 0x49CC50
namespace gamemd {
void MPCooperative_validateMove(void * a1, void * a2, void * a3)
{
  char *MPCooperative_field_0x48; // esi

  if ( a2 < 0 || a2 >= (int)this->MPCooperative_field_0x40 ) /*0x49cc5f*/
    return 0; /*0x49ccde*/
  MPCooperative_field_0x48 = (char *)this->MPCooperative_field_0x48; /*0x49cc66*/
  this->MPCooperative_field_0x38 = (void *)a2; /*0x49cc69*/
  this->MPCooperative_field_0x48 = &MPCooperative_field_0x48[a20]; /*0x49cc75*/
  this->MPCooperative_field_0x4C = (char *)this->MPCooperative_field_0x4C + a48; /*0x49cc81*/
  this->MPCooperative_field_0x50 = (MultiplayerGameMode *)((char *)this->MPCooperative_field_0x50 + a24); /*0x49cc90*/
  this->MPCooperative_field_0x54 = (char *)this->MPCooperative_field_0x54 + a52; /*0x49cc9c*/
  this->MPCooperative_field_0x58 = (char *)this->MPCooperative_field_0x58 + a16; /*0x49ccab*/
  this->MPCooperative_field_0x5C = (char *)this->MPCooperative_field_0x5C + a44; /*0x49ccb7*/
  this->MPCooperative_field_0x60 = (char *)this->MPCooperative_field_0x60 + a28; /*0x49ccc6*/
  this->MPCooperative_field_0x64 = (char *)this->MPCooperative_field_0x64 + a56; /*0x49ccd2*/
  this->MPCooperative_field_0x68 = (void *)a3; /*0x49ccd5*/
  return 1; /*0x49ccdb*/
}
}
// 0x49D120
namespace gamemd {
int MPCooperative::ReadCoopSaveINI()
{
  char *v2; // ebx
  int v4; // esi
  int v5; // esi
  int v6; // eax
  char v7; // al
  char v8; // al
  int v10; // esi
  char i; // al
  int v12; // esi
  int v13; // eax
  char v14; // al
  bool v15; // bl
  unsigned int v16[22]; // [esp+Ch] [ebp-128h] BYREF
  unsigned char v17[12]; // [esp+64h] [ebp-D0h] BYREF
  int v18; // [esp+70h] [ebp-C4h]
  void *v19[3]; // [esp+78h] [ebp-BCh] BYREF
  unsigned int v20[7]; // [esp+84h] [ebp-B0h] BYREF
  unsigned int v21[6]; // [esp+A0h] [ebp-94h] BYREF
  char v22; // [esp+B8h] [ebp-7Ch]
  char v23[100]; // [esp+D0h] [ebp-64h] BYREF

  if ( !*this ) /*0x49d12b*/
    return 0; /*0x49d12b*/
  v2 = &this->u32_70; /*0x49d137*/
  if ( !*(&this->q0088) ) /*0x49d134*/
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
    v16[0] = (void*)&CCFileClass_vftable; /*0x49d1bc*/
    v18 = 0; /*0x49d1c4*/
    Vector::Clear((int)v17); /*0x49d1c8*/
    v16[0] = &off_7E1668; /*0x49d1d1*/
    BufferIOFileClass::Dtor(v16); /*0x49d1d9*/
    return 0; /*0x49d1e9*/
  }
  CCFileClass::Reset(v16); /*0x49d1ef*/
  v4 = 0; /*0x49d1f6*/
  if ( *this )
  {
    do
    {
      if ( v4 >= 1021 ) /*0x49d202*/
        break; /*0x49d202*/
      if ( isalnum(*this) )
      {
        g_IsWindowed[v4] = *this; /*0x49d253*/
      }
      else
      {
        g_IsWindowed[v4] = 61; /*0x49d214*/
        v5 = v4 + 1; /*0x49d21b*/
        v6 = *this >> 4; /*0x49d21f*/
        if ( (unsigned int)v6 >= 0x10 )
          v7 = 0; /*0x49d236*/
        else
          v7 = v6 >= 10 ? v6 + 55 : v6 + 48;
        g_IsWindowed[v5] = v7; /*0x49d238*/
        v4 = v5 + 1; /*0x49d243*/
        g_IsWindowed[v4] = EncodeDigitHex(*this & 0xF); /*0x49d249*/
      }
      v8 = this->q004; /*0x49d259*/
      ++v4; /*0x49d25c*/
      ++this; /*0x49d25d*/
    }
    while ( v8 );
  }
  g_IsWindowed[v4] = 0; /*0x49d26c*/
  strcpy(v23, g_IsWindowed); /*0x49d289*/
  v2 = v2; /*0x49d292*/
  v10 = 0; /*0x49d294*/
  for ( i = *v2; i; ++v2 )
  {
    if ( v10 >= 1021 ) /*0x49d2a2*/
      break; /*0x49d2a2*/
    if ( isalnum(i) )
    {
      g_IsWindowed[v10] = *v2; /*0x49d2f3*/
    }
    else
    {
      g_IsWindowed[v10] = 61; /*0x49d2b4*/
      v12 = v10 + 1; /*0x49d2bb*/
      v13 = *v2 >> 4; /*0x49d2bf*/
      if ( (unsigned int)v13 >= 0x10 )
        v14 = 0; /*0x49d2d6*/
      else
        v14 = v13 >= 10 ? v13 + 55 : v13 + 48;
      g_IsWindowed[v12] = v14; /*0x49d2d8*/
      v10 = v12 + 1; /*0x49d2e3*/
      g_IsWindowed[v10] = EncodeDigitHex(*v2 & 0xF); /*0x49d2e9*/
    }
    i = v2[1]; /*0x49d2f9*/
    ++v10; /*0x49d2fc*/
  }
  g_IsWindowed[v10] = 0; /*0x49d30c*/
  strcat(v23, g_IsWindowed); /*0x49d331*/
  v15 = INIClass::BinarySearchSection((int)v19, (uint8_t *)v23) != 0; /*0x49d354*/
  HashTable::DestroyHashTableINIClass(v19); /*0x49d357*/
  v16[0] = (void*)&CCFileClass_vftable; /*0x49d360*/
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
  IPXManagerClass **p_MPCooperative_field_0xC4; // esi
  int v9; // ebp
  VectorClass *MPCooperative_field_0x1A4; // esi
  int v11; // ebp
  VectorClass *p_MPCooperative_field_0x264; // esi
  int v13; // ebp
  int *p_MPCooperative_field_0x324; // esi
  int i; // ebp
  int v16; // edx
  void *v17; // ebx
  int v18; // ebp
  MissionClass *v19; // eax
  unsigned int *v20; // ebp
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // edx

  MultiplayerGameMode::Construct(aP1, aP2, aP3, aP4, 0, aP6); /*0x5c1494*/
  AbstractClass::updateAnimationState((AbstractClass *)&this->MPCooperative_field_0x58, 0, 0); /*0x5c14a0*/
  this->MPCooperative_field_0x58 = (void*)&DynamicVectorClass_NodeNameType___vftable; /*0x5c14a5*/
  this->MPCooperative_field_0x6C = (void *)10; /*0x5c14ab*/
  this->MPCooperative_field_0x68 = 0; /*0x5c14b2*/
  p_MPCooperative_field_0xC4 = &this->MPCooperative_field_0xC4; /*0x5c14b5*/
  v9 = 8; /*0x5c14bb*/
  do /*0x5c14cb*/
  {
    Waypoint::InitInvalid((Waypoint *)p_MPCooperative_field_0xC4); /*0x5c14c2*/
    p_MPCooperative_field_0xC4 += 3; /*0x5c14c7*/
    --v9; /*0x5c14ca*/
  }
  while ( v9 ); /*0x5c14cb*/
  MPCooperative_field_0x1A4 = (VectorClass *)this->MPCooperative_field_0x1A4; /*0x5c14cd*/
  v11 = 8; /*0x5c14d3*/
  do /*0x5c14f5*/
  {
    VectorClass::Construct(MPCooperative_field_0x1A4, 0, 0); /*0x5c14dc*/
    MPCooperative_field_0x1A4->vtable0 = (void*)&DynamicVectorClass_int_vftable; /*0x5c14e1*/
    MPCooperative_field_0x1A4[1].Items = (void *)10; /*0x5c14e7*/
    MPCooperative_field_0x1A4[1].vtable0 = 0; /*0x5c14ee*/
    MPCooperative_field_0x1A4 = (VectorClass *)((char *)MPCooperative_field_0x1A4 + 24); /*0x5c14f1*/
    --v11; /*0x5c14f4*/
  }
  while ( v11 ); /*0x5c14f5*/
  p_MPCooperative_field_0x264 = (VectorClass *)&this->MPCooperative_field_0x264; /*0x5c14f7*/
  v13 = 8; /*0x5c14fd*/
  do /*0x5c151f*/
  {
    VectorClass::Construct(p_MPCooperative_field_0x264, 0, 0); /*0x5c1506*/
    p_MPCooperative_field_0x264->vtable0 = (void*)&DynamicVectorClass_int_vftable; /*0x5c150b*/
    p_MPCooperative_field_0x264[1].Items = (void *)10; /*0x5c1511*/
    p_MPCooperative_field_0x264[1].vtable0 = 0; /*0x5c1518*/
    p_MPCooperative_field_0x264 = (VectorClass *)((char *)p_MPCooperative_field_0x264 + 24); /*0x5c151b*/
    --v13; /*0x5c151e*/
  }
  while ( v13 ); /*0x5c151f*/
  p_MPCooperative_field_0x324 = &this->MPCooperative_field_0x324; /*0x5c1521*/
  CoopCampaignVector::Construct((CoopCampaignVector *)&this->MPCooperative_field_0x324, 0, 0); /*0x5c152b*/
  this->MPCooperative_field_0x324 = (int)&DynamicVectorClass_CoopCampaignClass___vftable; /*0x5c1530*/
  *(unsigned int *)&this->__pad_328[16] = 10; /*0x5c1536*/
  *(unsigned int *)&this->__pad_328[12] = 0; /*0x5c153d*/
  this->MPCooperative_field_0x0 = (void*)&MPCooperative_vftable; /*0x5c1540*/
  this->MPCooperative_field_0x40 = 0; /*0x5c1546*/
  this->MPCooperative_field_0x44 = 0; /*0x5c1549*/
  this->MPCooperative_field_0x33C = 0; /*0x5c154c*/
  this->MPCooperative_field_0x50 = 0; /*0x5c1552*/
  IDA_LOBYTE(this->MPCooperative_field_0x4) = 0; /*0x5c1555*/
  IDA_LOBYTE(this->MPCooperative_field_0x48) = 0; /*0x5c1559*/
  IDA_BYTE1(this->MPCooperative_field_0x48) = 0; /*0x5c155d*/
  this->MPCooperative_field_0x4C = 0; /*0x5c1561*/
  IDA_LOBYTE(this->MPCooperative_field_0x340) = 1; /*0x5c1564*/
  for ( i = *(unsigned int *)&this->__pad_328[12] - 1; i >= 0; --i ) /*0x5c1572*/
  {
    v16 = *(unsigned int *)this->__pad_328; /*0x5c1574*/
    v17 = *(void **)(v16 + 4 * i); /*0x5c157a*/
    if ( v17 ) /*0x5c157f*/
    {
      Array::Cleanup(*(Array **)(v16 + 4 * i)); /*0x5c1583*/
      RA2_OPDEL(v17); /*0x5c1589*/
    }
  }
  v18 = *(unsigned int *)&this->__pad_328[4]; /*0x5c1598*/
  (*(void (__thiscall **)(int *))(*p_MPCooperative_field_0x324 + 12))(&this->MPCooperative_field_0x324); /*0x5c159d*/
  (*(void (__thiscall **)(int *, int, unsigned int))(*p_MPCooperative_field_0x324 + 8))( /*0x5c15a6*/
    &this->MPCooperative_field_0x324,
    v18,
    0);
  CampaignClass::GetValue((int *)&g_DDrawSurfaceManager, &aP4); /*0x5c15b3*/
  for ( aP6 = 0; aP6 < (int)aP4; ++aP6 ) /*0x5c15c2*/
  {
    v19 = (MissionClass *)RA2_OPNEW(0x70u); /*0x5c15c6*/
    if ( v19 ) /*0x5c15d0*/
      v20 = MissionClass::Init(v19); /*0x5c15d9*/
    else
      v20 = 0; /*0x5c15dd*/
    Movie::SetupScreen((int)v20, aP6); /*0x5c15e6*/
    v21 = *(unsigned int *)&this->__pad_328[4]; /*0x5c15eb*/
    if ( *(unsigned int *)&this->__pad_328[12] >= v21 ) /*0x5c15f3*/
    {
      if ( !this->__pad_328[9] && v21 ) /*0x5c15fe*/
        continue; /*0x5c15fe*/
      v22 = *(unsigned int *)&this->__pad_328[16]; /*0x5c1600*/
      if ( v22 <= 0 /*0x5c160f*/
        || !(*(uint8_t (__thiscall **)(int *, int, unsigned int))(*p_MPCooperative_field_0x324 + 8))(
              &this->MPCooperative_field_0x324,
              v21 + v22,
              0) )
      {
        continue; /*0x5c160f*/
      }
    }
    v23 = *(unsigned int *)&this->__pad_328[12]; /*0x5c1616*/
    v24 = *(unsigned int *)this->__pad_328; /*0x5c1619*/
    *(unsigned int *)&this->__pad_328[12] = v23 + 1; /*0x5c161f*/
    *(unsigned int *)(v24 + 4 * v23) = v20; /*0x5c1622*/
  }
  return &this->MPCooperative_field_0x0; /*0x5c1638*/
}
}
// 0x5C1640
namespace gamemd {
AbstractClass * * MPCooperative_Cleanup(MPCooperative * aP0, int a2)
{
  MultiplayerGameMode *v2; // ecx
  MultiplayerGameMode *v3; // edi
  Array *MultiplayerGameMode_field_0x08; // esi
  int i; // ebp
  int MultiplayerGameMode_field_0x18; // eax
  void *v7; // esi
  int j; // ebp
  void (__thiscall ***v9)(unsigned int, int); // ecx
  void *v10; // eax
  int *p_MultiplayerGameMode_field_0x14; // esi
  int v12; // ebp
  void *v13; // eax
  int *p_MultiplayerGameMode_field_0x18; // esi
  int v15; // ebp
  void *v16; // eax
  void *v17; // eax

  v3 = v2; /*0x5c1643*/
  MultiplayerGameMode_field_0x08 = (Array *)v2[2].MultiplayerGameMode_field_0x08; /*0x5c1647*/
  *(unsigned int *)v2->__pad_0 = (void*)&MPCooperative_vftable; /*0x5c164a*/
  if ( MultiplayerGameMode_field_0x08 ) /*0x5c1652*/
  {
    Array::Cleanup(MultiplayerGameMode_field_0x08); /*0x5c1656*/
    RA2_OPDEL(MultiplayerGameMode_field_0x08); /*0x5c165c*/
    v3[2].MultiplayerGameMode_field_0x08 = 0; /*0x5c1664*/
  }
  for ( i = v3[29].MultiplayerGameMode_field_0x08 - 1; i >= 0; --i ) /*0x5c166f*/
  {
    MultiplayerGameMode_field_0x18 = v3[28].MultiplayerGameMode_field_0x18; /*0x5c1671*/
    v7 = *(void **)(MultiplayerGameMode_field_0x18 + 4 * i); /*0x5c1677*/
    if ( v7 ) /*0x5c167c*/
    {
      Array::Cleanup(*(Array **)(MultiplayerGameMode_field_0x18 + 4 * i)); /*0x5c1680*/
      RA2_OPDEL(v7); /*0x5c1686*/
    }
  }
  (*(void (__thiscall **)(int *, int))(v3[28].MultiplayerGameMode_field_0x14 + 12))( /*0x5c169f*/
    &v3[28].MultiplayerGameMode_field_0x14,
    a2);
  for ( j = v3[3].MultiplayerGameMode_field_0x14 - 1; j >= 0; --j ) /*0x5c16a6*/
    RA2_OPDEL(*(void **)(v3[3].MultiplayerGameMode_field_0x08 + 4 * j)); /*0x5c16af*/
  (*(void (__thiscall **)(int *))(v3[3].MultiplayerGameMode_field_0x04 + 12))(&v3[3].MultiplayerGameMode_field_0x04); /*0x5c16c3*/
  (*(void (__thiscall **)(int *))(v3[3].MultiplayerGameMode_field_0x04 + 8))(&v3[3].MultiplayerGameMode_field_0x04); /*0x5c16ce*/
  v9 = (void (__thiscall ***)(unsigned int, int))v3[2].MultiplayerGameMode_field_0x18; /*0x5c16d1*/
  if ( v9 ) /*0x5c16d6*/
  {
    (**v9)(v9, 1); /*0x5c16dc*/
    v3[2].MultiplayerGameMode_field_0x18 = 0; /*0x5c16de*/
  }
  IDA_LOBYTE(v3->MultiplayerGameMode_field_0x04) = 0; /*0x5c16e1*/
  v10 = (void *)v3[28].MultiplayerGameMode_field_0x18; /*0x5c16e4*/
  v3[28].MultiplayerGameMode_field_0x14 = (int)&VectorClass_CoopCampaignClass___vftable; /*0x5c16e9*/
  if ( v10 && IDA_BYTE1(v3[29].MultiplayerGameMode_field_0x04) ) /*0x5c16f1*/
  {
    RA2_OPDEL(v10); /*0x5c16f7*/
    v3[28].MultiplayerGameMode_field_0x18 = 0; /*0x5c16ff*/
  }
  IDA_BYTE1(v3[29].MultiplayerGameMode_field_0x04) = 0; /*0x5c1702*/
  *(unsigned int *)v3[29].__pad_0 = 0; /*0x5c1705*/
  p_MultiplayerGameMode_field_0x14 = &v3[28].MultiplayerGameMode_field_0x14; /*0x5c1708*/
  v12 = 8; /*0x5c170e*/
  do /*0x5c173b*/
  {
    v13 = (void *)*(p_MultiplayerGameMode_field_0x14 - 5); /*0x5c1713*/
    p_MultiplayerGameMode_field_0x14 -= 6; /*0x5c1716*/
    *p_MultiplayerGameMode_field_0x14 = (int)&VectorClass_int_vftable; /*0x5c171b*/
    if ( v13 && *((unsigned char *)p_MultiplayerGameMode_field_0x14 + 13) ) /*0x5c1723*/
    {
      RA2_OPDEL(v13); /*0x5c1729*/
      p_MultiplayerGameMode_field_0x14[1] = 0; /*0x5c1731*/
    }
    --v12; /*0x5c1734*/
    *((unsigned char *)p_MultiplayerGameMode_field_0x14 + 13) = 0; /*0x5c1735*/
    p_MultiplayerGameMode_field_0x14[2] = 0; /*0x5c1738*/
  }
  while ( v12 ); /*0x5c173b*/
  p_MultiplayerGameMode_field_0x18 = &v3[21].MultiplayerGameMode_field_0x18; /*0x5c173d*/
  v15 = 8; /*0x5c1743*/
  do /*0x5c1770*/
  {
    v16 = (void *)*(p_MultiplayerGameMode_field_0x18 - 5); /*0x5c1748*/
    p_MultiplayerGameMode_field_0x18 -= 6; /*0x5c174b*/
    *p_MultiplayerGameMode_field_0x18 = (int)&VectorClass_int_vftable; /*0x5c1750*/
    if ( v16 && *((unsigned char *)p_MultiplayerGameMode_field_0x18 + 13) ) /*0x5c1758*/
    {
      RA2_OPDEL(v16); /*0x5c175e*/
      p_MultiplayerGameMode_field_0x18[1] = 0; /*0x5c1766*/
    }
    --v15; /*0x5c1769*/
    *((unsigned char *)p_MultiplayerGameMode_field_0x18 + 13) = 0; /*0x5c176a*/
    p_MultiplayerGameMode_field_0x18[2] = 0; /*0x5c176d*/
  }
  while ( v15 ); /*0x5c1770*/
  v17 = (void *)v3[3].MultiplayerGameMode_field_0x08; /*0x5c1772*/
  v3[3].MultiplayerGameMode_field_0x04 = (int)&VectorClass_NodeNameType___vftable; /*0x5c1775*/
  if ( v17 && IDA_BYTE1(v3[3].MultiplayerGameMode_field_0x10) ) /*0x5c1781*/
  {
    RA2_OPDEL(v17); /*0x5c1787*/
    v3[3].MultiplayerGameMode_field_0x08 = 0; /*0x5c178f*/
  }
  IDA_BYTE1(v3[3].MultiplayerGameMode_field_0x10) = 0; /*0x5c1794*/
  v3[3].MultiplayerGameMode_field_0x0C = 0; /*0x5c1797*/
  MultiplayerGameMode::Dtor(v3); /*0x5c179a*/
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
  unsigned int *v6; // esi
  int j; // ebx
  unsigned int *v8; // eax
  unsigned int *v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v15; // [esp+10h] [ebp-4h] BYREF

  for ( i = *(&this->ptr_505) - 1; i >= 0; --i ) /*0x5c18ad*/
  {
    v3 = *(&this->ptr_502); /*0x5c18af*/
    v4 = *(void **)(v3 + 4 * i); /*0x5c18b5*/
    if ( v4 ) /*0x5c18ba*/
    {
      Array::Cleanup(*(unsigned int *)(v3 + 4 * i)); /*0x5c18be*/
      RA2_OPDEL(v4); /*0x5c18c4*/
    }
  }
  v5 = *(&this->ptr_503); /*0x5c18d5*/
  v6 = &this->q324; /*0x5c18db*/
  (*(void (__thiscall **)(unsigned int *))(*(&this->ptr_501) + 12))(&this->ptr_501); /*0x5c18e3*/
  (*(void (__thiscall **)(unsigned int *, int, unsigned int))(*(&this->ptr_501) + 8))(&this->q324, v5, 0); /*0x5c18ed*/
  CampaignClass::GetValue((int)&g_DDrawSurfaceManager, &v15); /*0x5c18fa*/
  for ( j = 0; j < v15; ++j ) /*0x5c1907*/
  {
    v8 = operator new(0x70u); /*0x5c190b*/
    if ( v8 ) /*0x5c1915*/
      v9 = MissionClass::Init(v8); /*0x5c191e*/
    else
      v9 = 0; /*0x5c1922*/
    Movie::SetupScreen((int)v9, j); /*0x5c1927*/
    v10 = v6[2]; /*0x5c192c*/
    if ( v6[4] >= v10 ) /*0x5c1934*/
    {
      if ( !*((unsigned char *)v6 + 13) && v10 ) /*0x5c193f*/
        continue; /*0x5c193f*/
      v11 = v6[5]; /*0x5c1941*/
      if ( v11 <= 0 || !(*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(this->q344)(v6, v10 + v11, 0) ) /*0x5c1951*/
        continue; /*0x5c1951*/
    }
    v12 = v6[4]; /*0x5c1958*/
    v13 = v6[1]; /*0x5c195b*/
    v6[4] = v12 + 1; /*0x5c1961*/
    *(unsigned int *)(v13 + 4 * v12) = v9; /*0x5c1964*/
  }
  return 1; /*0x5c1970*/
}
}
// 0x5C1A10
namespace gamemd {
CampaignClass * * MPCooperative::CopyTo()
{
  int *MPCooperative_field_0x40; // ecx
  char *v3; // eax
  void *v4; // edi
  char *v5; // ecx
  MissionClass *v6; // eax
  int result; // eax
  CampaignClass *v8; // ebx
  int *v9; // ecx
  int v10; // ebx
  int *v11; // ecx
  HWND v12; // edi
  ObjectClass *v13; // [esp+0h] [ebp-1Ch]
  char *String2; // [esp+10h] [ebp-Ch] BYREF
  BOOL v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h] BYREF

  g_MPCooperativeState = (ObjectClass *)-1; /*0x5c1a13*/
  Debug::Log(); /*0x5c1a28*/
  Network::SendOptionsGame(aO8); /*0x5c1a35*/
  if ( Dialog::FindByHandle((Dialog *)0xC2) || Dialog::FindByHandle((Dialog *)0xBC) ) /*0x5c1a4d*/
  {
    MPCooperative_field_0x40 = (int *)this->MPCooperative_field_0x40; /*0x5c1a56*/
    if ( MPCooperative_field_0x40 ) /*0x5c1a5b*/
    {
      if ( (Movie::GetSectionID(MPCooperative_field_0x40, &String2), v3 = (char *)MPCooperative_Copy(v13), v3 != String2) /*0x5c1a86*/
        && Dialog::GetCurrentType() == 107
        || Dialog::GetCurrentType() != 107 )
      {
        v4 = this->MPCooperative_field_0x40; /*0x5c1a88*/
        if ( v4 ) /*0x5c1a8d*/
        {
          Array::Cleanup((Array *)this->MPCooperative_field_0x40); /*0x5c1a91*/
          RA2_OPDEL(v4); /*0x5c1a97*/
        }
        this->MPCooperative_field_0x40 = 0; /*0x5c1a9f*/
      }
    }
    v5 = (char *)this->MPCooperative_field_0x40; /*0x5c1aa6*/
    if ( v5 ) /*0x5c1aab*/
    {
      if ( dword_A8DA84 == 2 ) /*0x5c1ab4*/
        String::AssignWideToChar(v5, (char *)*dword_A8DA78, (char *)dword_A8DA78[1]); /*0x5c1ac2*/
      else
        String::AssignWideToChar(v5, (char *)&g_TypeClass_DefaultString, (char *)&g_TypeClass_DefaultString); /*0x5c1ace*/
    }
  }
  if ( this->MPCooperative_field_0x40 ) /*0x5c1ad3*/
  {
  LABEL_30:
    IDA_LOBYTE(this->MPCooperative_field_0x340) = 1; /*0x5c1c7b*/
    result = Dialog::FindGameUI(); /*0x5c1c82*/
    v12 = (HWND)result; /*0x5c1c87*/
    if ( result ) /*0x5c1c8b*/
    {
      Campaign::SetupMovie((HWND)result); /*0x5c1c90*/
      return CampaignCoop::Setup(v12, 1); /*0x5c1c9a*/
    }
    return result; /*0x5c1c9a*/
  }
  v6 = (MissionClass *)RA2_OPNEW(0x70u); /*0x5c1ae2*/
  if ( v6 ) /*0x5c1aec*/
    result = (int)MissionClass::Init(v6); /*0x5c1af0*/
  else
    result = 0; /*0x5c1af7*/
  this->MPCooperative_field_0x40 = (void *)result; /*0x5c1afb*/
  if ( result ) /*0x5c1afe*/
  {
    Movie::SetupScreen(result, 0); /*0x5c1b07*/
    v8 = (CampaignClass *)MPCooperative_Copy(v13); /*0x5c1b13*/
    if ( (int)v8 >= 0 ) /*0x5c1b17*/
    {
      this->MPCooperative_field_0x33C = v8; /*0x5c1bb1*/
      Movie::GetSection((int)&g_DDrawSurfaceManager, (int)v8, &v16); /*0x5c1bb7*/
      v11 = (int *)this->MPCooperative_field_0x40; /*0x5c1bc2*/
      String2 = 0; /*0x5c1bc5*/
      Array::GetElementAt(v11, &String2, 0); /*0x5c1bc9*/
      Debug::Log(); /*0x5c1be5*/
      if ( _strnicmp( /*0x5c1c0e*/
             (const char *)(*(unsigned int *)(unk_A8B8CC + 4 * *(unsigned int *)&stru_A8B250.__pad_0[4]) + 88),
             String2,
             strlen(String2)) )
      {
        v15 = v8 == 0; /*0x5c1c21*/
        do /*0x5c1c6f*/
        {
          Movie::SetupScreen((int)this->MPCooperative_field_0x40, v15); /*0x5c1c2d*/
          Movie::SetupScreen((int)this->MPCooperative_field_0x40, (int)v8); /*0x5c1c36*/
          Array::GetElementAt((int *)this->MPCooperative_field_0x40, &String2, 0); /*0x5c1c45*/
        }
        while ( _strnicmp( /*0x5c1c6f*/
                  (const char *)(*(unsigned int *)(unk_A8B8CC + 4 * *(unsigned int *)&stru_A8B250.__pad_0[4]) + 88),
                  String2,
                  strlen(String2)) );
      }
    }
    else
    {
      v9 = (int *)this->MPCooperative_field_0x40; /*0x5c1b23*/
      this->MPCooperative_field_0x33C = 0; /*0x5c1b26*/
      String2 = 0; /*0x5c1b2c*/
      Array::GetElementAt(v9, &String2, 0); /*0x5c1b30*/
      v10 = 0; /*0x5c1b3a*/
      if ( unk_A8B8D8 > 0 ) /*0x5c1b3e*/
      {
        while ( _strnicmp((const char *)(*(unsigned int *)(unk_A8B8CC + 4 * v10) + 88), String2, strlen(String2)) ) /*0x5c1b69*/
        {
          if ( ++v10 >= unk_A8B8D8 ) /*0x5c1b73*/
            goto LABEL_25; /*0x5c1b73*/
        }
        *(unsigned int *)&stru_A8B250.__pad_0[4] = v10; /*0x5c1b79*/
        LoadScenarioClassByIndex(v10); /*0x5c1b7f*/
      }
  LABEL_25:
      if ( v10 == unk_A8B8D8 ) /*0x5c1b8a*/
      {
        *(unsigned int *)&stru_A8B250.__pad_0[4] = 0; /*0x5c1b92*/
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
  IDA_LOBYTE(this->MPCooperative_field_0x340) = 1; /*0x5c1cb0*/
}
}
// 0x5C1CC0
namespace gamemd {
int MPCooperative::InitSession()
{
  int v2; // ebx
  MissionClass *v3; // eax
  unsigned int *v4; // eax
  int v6; // [esp+10h] [ebp-8h] BYREF
  char *String2; // [esp+14h] [ebp-4h] BYREF

  v2 = 0; /*0x5c1ccd*/
  v6 = 0; /*0x5c1cd5*/
  String2 = 0; /*0x5c1cd9*/
  CampaignClass::GetValue((int *)&g_DDrawSurfaceManager, &v6); /*0x5c1cdd*/
  if ( !v6 ) /*0x5c1ce6*/
    return -1; /*0x5c1ce6*/
  if ( !this->MPCooperative_field_0x40 ) /*0x5c1ce8*/
  {
    v3 = (MissionClass *)RA2_OPNEW(0x70u); /*0x5c1cef*/
    if ( v3 ) /*0x5c1cf9*/
      v4 = MissionClass::Init(v3); /*0x5c1cfd*/
    else
      v4 = 0; /*0x5c1d04*/
    this->MPCooperative_field_0x40 = v4; /*0x5c1d06*/
  }
  Movie::SetupScreen((int)this->MPCooperative_field_0x40, 0); /*0x5c1d0d*/
  Array::GetElementAt((int *)this->MPCooperative_field_0x40, &String2, 0); /*0x5c1d1b*/
  if ( unk_A8B8D8 <= 0 ) /*0x5c1d26*/
  {
  LABEL_10:
    (*((void (__thiscall **)(MPCooperative *))this->MPCooperative_field_0x0 + 4))(this); /*0x5c1d5d*/
    return -1; /*0x5c1d6f*/
  }
  while ( _strnicmp((const char *)(*(unsigned int *)(unk_A8B8CC + 4 * v2) + 88), String2, strlen(String2)) ) /*0x5c1d51*/
  {
    if ( ++v2 >= unk_A8B8D8 ) /*0x5c1d5b*/
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
  void *MPCooperative_field_0x40; // ebx
  MissionClass *v5; // eax
  unsigned int *v6; // eax
  int *v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  HWND GameUI; // eax
  int i; // edi
  uint8_t (__thiscall **MPCooperative_field_0x0)(MPCooperative *, int); // ebp
  int PlayerSide; // eax
  CampaignClass *MPCooperative_field_0x33C; // [esp-8h] [ebp-20h]
  int v16; // [esp-8h] [ebp-20h]
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h] BYREF
  LRESULT v19; // [esp+14h] [ebp-4h] BYREF

  if ( !this->MPCooperative_field_0x40 ) /*0x5c1dc8*/
    return 0; /*0x5c1dd7*/
  CampaignClass::GetValue((int *)&g_DDrawSurfaceManager, &v19); /*0x5c1de2*/
  v3 = MPCooperative_Helper(); /*0x5c1dec*/
  if ( v3 < v19 ) /*0x5c1df4*/
  {
    if ( Dialog::GetCurrentType() == 107 ) /*0x5c1e34*/
    {
      MPCooperative_field_0x40 = this->MPCooperative_field_0x40; /*0x5c1e36*/
      if ( MPCooperative_field_0x40 ) /*0x5c1e3b*/
      {
        Array::Cleanup((Array *)this->MPCooperative_field_0x40); /*0x5c1e3f*/
        RA2_OPDEL(MPCooperative_field_0x40); /*0x5c1e45*/
      }
      this->MPCooperative_field_0x40 = *(void **)(*(unsigned int *)this->__pad_328 + 4 * v3); /*0x5c1e58*/
      v5 = (MissionClass *)RA2_OPNEW(0x70u); /*0x5c1e5b*/
      if ( v5 ) /*0x5c1e65*/
        v6 = MissionClass::Init(v5); /*0x5c1e69*/
      else
        v6 = 0; /*0x5c1e70*/
      *(unsigned int *)(*(unsigned int *)this->__pad_328 + 4 * v3) = v6; /*0x5c1e79*/
      Movie::SetupScreen(*(unsigned int *)(*(unsigned int *)this->__pad_328 + 4 * v3), v3); /*0x5c1e85*/
      this->MPCooperative_field_0x4C = (void *)v3; /*0x5c1e8a*/
      if ( dword_A8DA84 == 2 ) /*0x5c1e95*/
        String::AssignWideToChar((char *)this->MPCooperative_field_0x40, (char *)*dword_A8DA78, (char *)dword_A8DA78[1]); /*0x5c1ea6*/
    }
    goto LABEL_16; /*0x5c1ea6*/
  }
  if ( dword_A8DA84 == 2 ) /*0x5c1dfd*/
    String::AssignWideToChar((char *)this->MPCooperative_field_0x40, (char *)*dword_A8DA78, (char *)dword_A8DA78[1]); /*0x5c1e0e*/
  result = LoadCampaignCoopSave((char *)this->MPCooperative_field_0x40); /*0x5c1e16*/
  if ( result ) /*0x5c1e1d*/
  {
    IDA_LOBYTE(this->MPCooperative_field_0x48) = 1; /*0x5c1e26*/
  LABEL_16:
    MPCooperative_field_0x33C = this->MPCooperative_field_0x33C; /*0x5c1eab*/
    v17 = 0; /*0x5c1ebc*/
    Movie::GetSection((int)&g_DDrawSurfaceManager, (int)MPCooperative_field_0x33C, &v18); /*0x5c1ec4*/
    if ( v18 ) /*0x5c1ecf*/
    {
      v7 = (int *)this->MPCooperative_field_0x40; /*0x5c1eda*/
      if ( v7 && (uint8_t)Movie::GetState(v7, &v17) ) /*0x5c1ee6*/
      {
        v8 = v17; /*0x5c1ef7*/
      }
      else
      {
        v8 = 0; /*0x5c1eef*/
        v17 = 0; /*0x5c1ef1*/
      }
      v9 = v18->NeedsSaveOrLink; /*0x5c1eff*/
      if ( v8 < v9 ) /*0x5c1f04*/
      {
        if ( v9 ) /*0x5c1f11*/
        {
          v10 = *(unsigned int *)(*(unsigned int *)(v18->abstractFlags + 4 * v8) + 16); /*0x5c1f22*/
          GameUI = (HWND)Dialog::FindGameUI(); /*0x5c1f25*/
          Campaign::SetupMovie(GameUI); /*0x5c1f2d*/
          for ( i = 0; i < dword_A8DA84; ++i ) /*0x5c1f3b*/
          {
            MPCooperative_field_0x0 = (uint8_t (__thiscall **)(MPCooperative *, int))this->MPCooperative_field_0x0; /*0x5c1f43*/
            PlayerSide = SessionClass::GetPlayerSide((int *)dword_A8DA78[i]); /*0x5c1f48*/
            if ( !MPCooperative_field_0x0[7](this, PlayerSide) ) /*0x5c1f50*/
            {
              if ( v10 <= 1 ) /*0x5c1f5a*/
              {
                v16 = SideClass::FindByName(**(SideClass ***)(*(unsigned int *)(v18->abstractFlags + 4 * v17) + 4)); /*0x5c1f78*/
                SessionClass::SetPlayerOption((int *)dword_A8DA78[i], v16); /*0x5c1f82*/
              }
              else
              {
                SessionClass::SetPlayerOption((int *)dword_A8DA78[i], -2); /*0x5c1f5e*/
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
  int *MPCooperative_field_0x40; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  v7 = 0; /*0x5c1faa*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, (int)this->MPCooperative_field_0x33C, &v8); /*0x5c1fbf*/
  if ( !v8 ) /*0x5c1fca*/
    return -2; /*0x5c1fcc*/
  MPCooperative_field_0x40 = (int *)this->MPCooperative_field_0x40; /*0x5c1fd6*/
  if ( MPCooperative_field_0x40 && (uint8_t)Movie::GetState(MPCooperative_field_0x40, &v7) ) /*0x5c1fe2*/
  {
    v4 = v7; /*0x5c1ff3*/
  }
  else
  {
    v4 = 0; /*0x5c1feb*/
    v7 = 0; /*0x5c1fed*/
  }
  if ( v4 >= *(unsigned int *)(v8 + 32) ) /*0x5c1ffe*/
    return -2; /*0x5c2000*/
  v5 = *(unsigned int *)(*(unsigned int *)(v8 + 20) + 4 * v4); /*0x5c200d*/
  v6 = *(unsigned int *)(v5 + 16); /*0x5c2010*/
  if ( !v6 ) /*0x5c2015*/
    return -2; /*0x5c2017*/
  if ( v6 <= 1 ) /*0x5c2024*/
    return SideClass::FindByName(**(SideClass ***)(v5 + 4)); /*0x5c2035*/
  return -2; /*0x5c1fd1*/
}
}
// 0x5C2040
namespace gamemd {
int MPCooperative::StartGame(int a2, void ** a3, void * Block, int a5, short a6, int a7, int a8, char * a9, char * a10)
{
  int *MPCooperative_field_0x40; // ecx
  void *v13; // eax
  DynamicVectorClass v14; // [esp-20h] [ebp-2Ch] BYREF
  char *v15; // [esp-8h] [ebp-14h]
  char *v16; // [esp-4h] [ebp-10h]
  int v17; // [esp+8h] [ebp-4h] BYREF

  if ( !this->MPCooperative_field_0x40 ) /*0x5c2045*/
  {
    MovieClass::Create(); /*0x5c204c*/
    IDA_LOBYTE(this->MPCooperative_field_0x340) = 1; /*0x5c2051*/
  }
  MPCooperative_field_0x40 = (int *)this->MPCooperative_field_0x40; /*0x5c2058*/
  if ( MPCooperative_field_0x40 ) /*0x5c205d*/
  {
    Movie::GetSectionID(MPCooperative_field_0x40, &v17); /*0x5c208d*/
    if ( v17 != a2 ) /*0x5c209c*/
      IDA_LOBYTE(this->MPCooperative_field_0x340) = 1; /*0x5c209e*/
    v16 = a10; /*0x5c20ad*/
    v15 = a9; /*0x5c20ae*/
    DynamicVectorClass::Copy(&v14, &a3); /*0x5c20b9*/
    DecodeCampaignPlayerName( /*0x5c20c2*/
      (int)this->MPCooperative_field_0x40,
      a2,
      *(int *)v14.__pad_0,
      *(void **)&v14.m_1[3],
      *(int *)&v14.m_5[3],
      v14.m_C,
      v14.Count,
      v14.CapacityIncrement,
      v15,
      v16);
    v13 = Block; /*0x5c20c7*/
    this->MPCooperative_field_0x33C = (CampaignClass *)a2; /*0x5c20cb*/
    a3 = (void*)&VectorClass_int_vftable; /*0x5c20d3*/
    if ( v13 && IDA_HIBYTE(a6) ) /*0x5c20e3*/
      RA2_OPDEL(v13); /*0x5c20e6*/
    return 1; /*0x5c20ef*/
  }
  else
  {
    a3 = (void*)&VectorClass_int_vftable; /*0x5c2063*/
    if ( Block ) /*0x5c206d*/
    {
      if ( IDA_HIBYTE(a6) ) /*0x5c2075*/
        RA2_OPDEL(Block); /*0x5c2078*/
    }
    return 0; /*0x5c2080*/
  }
}
}
// 0x5C2100
namespace gamemd {
int MPCooperative::EndGame(int a2, int a3, int a4)
{
  int *MPCooperative_field_0x40; // ecx
  char v7; // bl
  HWND GameUI; // eax
  int v9[28]; // [esp-E0h] [ebp-F4h] BYREF
  int v10[28]; // [esp-70h] [ebp-84h] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  MPCooperative_field_0x40 = (int *)this->MPCooperative_field_0x40; /*0x5c2107*/
  if ( !MPCooperative_field_0x40 ) /*0x5c210c*/
    return 0; /*0x5c210e*/
  Movie::GetState(MPCooperative_field_0x40, &v11); /*0x5c211d*/
  qmemcpy(v10, (const void *)(a4 + 112), sizeof(v10)); /*0x5c2136*/
  qmemcpy(v9, (const void *)a4, sizeof(v9)); /*0x5c2141*/
  v7 = MPCooperative::validateMove( /*0x5c215b*/
         (MPCooperative *)this->MPCooperative_field_0x40,
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
  if ( v11 != a2 || IDA_LOBYTE(this->MPCooperative_field_0x340) ) /*0x5c2165*/
  {
    GameUI = (HWND)Dialog::FindGameUI(); /*0x5c216f*/
    if ( GameUI ) /*0x5c2176*/
    {
      Campaign::SetupMovie(GameUI); /*0x5c217b*/
      IDA_LOBYTE(this->MPCooperative_field_0x340) = 0; /*0x5c2180*/
    }
  }
  return v7; /*0x5c2110*/
}
}
// 0x5C2680
namespace gamemd {
int MPCooperative::ProcessTurn()
{
  int *MPCooperative_field_0x40; // ecx
  HWND GameUI; // eax

  MPCooperative_field_0x40 = (int *)this->MPCooperative_field_0x40; /*0x5c2683*/
  if ( !MPCooperative_field_0x40 ) /*0x5c2688*/
    return 0; /*0x5c268a*/
  Movie::GetSectionID(MPCooperative_field_0x40, &this->MPCooperative_field_0x33C); /*0x5c2695*/
  GameUI = (HWND)Dialog::FindGameUI(); /*0x5c269a*/
  if ( GameUI ) /*0x5c26a1*/
  {
    if ( IDA_LOBYTE(this->MPCooperative_field_0x340) ) /*0x5c26a3*/
    {
      Campaign::SetupMovie(GameUI); /*0x5c26b0*/
      IDA_LOBYTE(this->MPCooperative_field_0x340) = 0; /*0x5c26b5*/
    }
  }
  return SerializeCampaignOptions((char *)this->MPCooperative_field_0x40); /*0x5c268c*/
}
}
// 0x5C2710
namespace gamemd {
int MPCooperative::SyncState()
{
  int *MPCooperative_field_0x1A4; // esi
  int v3; // ebp
  int v4; // edi
  int v5; // ebx
  int v6; // esi
  MPCooperative *v8; // ecx
  int *v9; // ebp
  char *v10; // ebx
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
  CampaignClass *MPCooperative_field_0x33C; // [esp+8h] [ebp-1CCh]
  int i; // [esp+20h] [ebp-1B4h]
  int v34; // [esp+24h] [ebp-1B0h]
  int v35; // [esp+28h] [ebp-1ACh] BYREF
  char v38[16]; // [esp+34h] [ebp-1A0h] BYREF
  char Buffer[400]; // [esp+44h] [ebp-190h] BYREF

  MPCooperative_field_0x33C = this->MPCooperative_field_0x33C; /*0x5c2727*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, (int)MPCooperative_field_0x33C, &v35); /*0x5c2731*/
  sprintf(Buffer, "C1,%d", v35->vtable3); /*0x5c2749*/
  MPCooperative_field_0x1A4 = this->MPCooperative_field_0x1A4; /*0x5c2751*/
  v3 = 8; /*0x5c2757*/
  do /*0x5c2795*/
  {
    v4 = MPCooperative_field_0x1A4[2]; /*0x5c275e*/
    (*(void (__thiscall **)(int *))(*MPCooperative_field_0x1A4 + 12))(MPCooperative_field_0x1A4); /*0x5c2763*/
    (*(void (__thiscall **)(int *, int, unsigned int))(*MPCooperative_field_0x1A4 + 8))(MPCooperative_field_0x1A4, v4, 0); /*0x5c276d*/
    v5 = MPCooperative_field_0x1A4[50]; /*0x5c2776*/
    (*(void (__thiscall **)(int *))(MPCooperative_field_0x1A4[48] + 12))(MPCooperative_field_0x1A4 + 48); /*0x5c2784*/
    (*(void (__thiscall **)(int *, int, unsigned int))(MPCooperative_field_0x1A4[48] + 8))( /*0x5c278e*/
      MPCooperative_field_0x1A4 + 48,
      v5,
      0);
    MPCooperative_field_0x1A4 += 6; /*0x5c2791*/
    --v3; /*0x5c2794*/
  }
  while ( v3 ); /*0x5c2795*/
  dword_A8DA84 = dword_A8DA84; /*0x5c27a1*/
  for ( i = 0; i < v35->vtable3; ++i ) /*0x5c27b2*/
  {
    v6 = 0; /*0x5c27c7*/
    memset32(&g_MissionQueueFrame.localVariables[631], -2, 8u); /*0x5c27c9*/
    dword_A8DA84 = dword_A8DA84; /*0x5c27cb*/
    if ( dword_A8DA84 > 0 ) /*0x5c27d3*/
    {
      do /*0x5c27ec*/
      {
        g_MissionQueueFrame.localVariables[v6 + 631] = MPCooperative::finalizeSession((MPCooperative *)dword_A8DA78[v6]); /*0x5c27e2*/
        ++v6; /*0x5c27e9*/
      }
      while ( v6 < dword_A8DA84 ); /*0x5c27ec*/
    }
    v8 = this; /*0x5c27ee*/
    v34 = 0; /*0x5c27f2*/
    v9 = &g_MissionQueueFrame.localVariables[631]; /*0x5c27fa*/
    v10 = &this->__pad_1A8[4]; /*0x5c27ff*/
    while ( 1 ) /*0x5c2815*/
    {
      if ( v34 >= dword_A8DA84 ) /*0x5c2815*/
      {
        v20 = (*((int (__thiscall **)(MPCooperative *))v8->MPCooperative_field_0x0 + 28))(v8); /*0x5c28d2*/
        v21 = *(unsigned int *)v10; /*0x5c28d4*/
        if ( *((unsigned int *)v10 + 2) < *(unsigned int *)v10 /*0x5c28f7*/
          || (v10[5] || !v21)
          && (v22 = *((unsigned int *)v10 + 3), v22 > 0)
          && (*(uint8_t (__thiscall **)(char *, int, unsigned int))(*((unsigned int *)v10 - 2) + 8))(v10 - 8, v21 + v22, 0) )
        {
          v23 = *((unsigned int *)v10 + 2); /*0x5c28fe*/
          v24 = *((unsigned int *)v10 - 1); /*0x5c2901*/
          *((unsigned int *)v10 + 2) = v23 + 1; /*0x5c2907*/
          *(unsigned int *)(v24 + 4 * v23) = v20; /*0x5c290a*/
        }
        while ( 1 ) /*0x5c2921*/
        {
          v25 = Random::Range((Random *)&unk_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x5c2921*/
          if ( v25 == -2 ) /*0x5c2926*/
            break; /*0x5c2926*/
          v26 = &g_MissionQueueFrame.localVariables[631]; /*0x5c2928*/
          while ( *v26 != v25 ) /*0x5c292f*/
          {
            if ( (int)++v26 >= (int)&g_MissionQueueFrame.localVariables[639] ) /*0x5c2939*/
              goto LABEL_31; /*0x5c2939*/
          }
        }
  LABEL_31:
        *v9 = v25; /*0x5c293b*/
        v27 = *((unsigned int *)v10 + 48); /*0x5c293e*/
        if ( *((unsigned int *)v10 + 50) < v27 /*0x5c2975*/
          || (v10[197] || !v27)
          && (v28 = *((unsigned int *)v10 + 51), v28 > 0)
          && (*(uint8_t (__thiscall **)(char *, int, unsigned int))(*((unsigned int *)v10 + 46) + 8))(
               v10 + 184,
               v27 + v28,
               0) )
        {
          v29 = *((unsigned int *)v10 + 50); /*0x5c297c*/
          v30 = *((unsigned int *)v10 + 47); /*0x5c2982*/
          *((unsigned int *)v10 + 50) = v29 + 1; /*0x5c298b*/
          *(unsigned int *)(v30 + 4 * v29) = v25; /*0x5c2991*/
        }
      }
      else
      {
        v11 = (*((int (__thiscall **)(MPCooperative *))v8->MPCooperative_field_0x0 + 27))(v8); /*0x5c2823*/
        v12 = *(unsigned int *)v10; /*0x5c2825*/
        if ( *((unsigned int *)v10 + 2) < *(unsigned int *)v10 /*0x5c2848*/
          || (v10[5] || !v12)
          && (v13 = *((unsigned int *)v10 + 3), v13 > 0)
          && (*(uint8_t (__thiscall **)(char *, int, unsigned int))(*((unsigned int *)v10 - 2) + 8))(v10 - 8, v12 + v13, 0) )
        {
          v14 = *((unsigned int *)v10 + 2); /*0x5c284f*/
          v15 = *((unsigned int *)v10 - 1); /*0x5c2852*/
          *((unsigned int *)v10 + 2) = v14 + 1; /*0x5c2858*/
          *(unsigned int *)(v15 + 4 * v14) = v11; /*0x5c285b*/
        }
        v16 = *((unsigned int *)v10 + 48); /*0x5c285e*/
        if ( *((unsigned int *)v10 + 50) < v16 /*0x5c289f*/
          || (v10[197] || !v16)
          && (v17 = *((unsigned int *)v10 + 51), v17 > 0)
          && (*(uint8_t (__thiscall **)(char *, int, unsigned int))(*((unsigned int *)v10 + 46) + 8))(
               v10 + 184,
               v16 + v17,
               0) )
        {
          v18 = *((unsigned int *)v10 + 50); /*0x5c28aa*/
          v19 = *((unsigned int *)v10 + 47); /*0x5c28b0*/
          *((unsigned int *)v10 + 50) = v18 + 1; /*0x5c28b9*/
          *(unsigned int *)(v19 + 4 * v18) = *v9; /*0x5c28c2*/
        }
      }
      sprintf(v38, ",%d,%d", *(unsigned int *)(*((unsigned int *)v10 - 1) + 4 * i), *(unsigned int *)(*((unsigned int *)v10 + 47) + 4 * i)); /*0x5c29b3*/
      strcat(Buffer, v38); /*0x5c29df*/
      ++v9; /*0x5c29e3*/
      v10 += 24; /*0x5c29e9*/
      ++v34; /*0x5c29f9*/
      if ( (int)v9 >= (int)&g_MissionQueueFrame.localVariables[639] ) /*0x5c29fd*/
        break; /*0x5c29fd*/
      v8 = this; /*0x5c2807*/
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
  unsigned int *v5; // esi
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

  result = a2; /*0x5c2a61*/
  if ( a2 == (const char *)1 ) /*0x5c2a72*/
  {
    result = strtok(String, Delimiter); /*0x5c2a82*/
    if ( result ) /*0x5c2a8c*/
    {
      result = (const char *)atol(result); /*0x5c2a93*/
      result = result; /*0x5c2a9e*/
      if ( (int)result >= 1 ) /*0x5c2aa2*/
      {
        v5 = &this->u32_1A4; /*0x5c2aa8*/
        v6 = 8; /*0x5c2aae*/
        do /*0x5c2aec*/
        {
          v7 = v5[2]; /*0x5c2ab5*/
          (*(void (__thiscall **)(unsigned int *))(this->q264)(v5); /*0x5c2aba*/
          (*(void (__thiscall **)(unsigned int *, int, unsigned int))(this->u32_71)(v5, v7, 0); /*0x5c2ac4*/
          v8 = v5[50]; /*0x5c2acd*/
          (*(void (__thiscall **)(unsigned int *))(v5[48] + 12))(v5 + 48); /*0x5c2adb*/
          (*(void (__thiscall **)(unsigned int *, int, unsigned int))(v5[48] + 8))(v5 + 48, v8, 0); /*0x5c2ae5*/
          v5 += 6; /*0x5c2ae8*/
          --v6; /*0x5c2aeb*/
        }
        while ( v6 ); /*0x5c2aec*/
        result = result; /*0x5c2aee*/
        if ( (int)result > 0 ) /*0x5c2af4*/
        {
          do /*0x5c2c98*/
          {
            v9 = 8; /*0x5c2b02*/
            v10 = (char *)(&this->u32_287); /*0x5c2b07*/
            do /*0x5c2c89*/
            {
              v11 = strtok(0, Delimiter); /*0x5c2b14*/
              if ( v11 ) /*0x5c2b1e*/
              {
                v12 = atol(v11); /*0x5c2b29*/
                v13 = *(unsigned int *)v10; /*0x5c2b2b*/
                if ( *((unsigned int *)v10 + 2) < *(unsigned int *)v10 /*0x5c2b51*/
                  || (v10[5] || !v13)
                  && (v14 = *((unsigned int *)v10 + 3), v14 > 0)
                  && (*(uint8_t (__thiscall **)(char *, int, unsigned int))(*((unsigned int *)v10 - 2) + 8))(
                       v10 - 8,
                       v13 + v14,
                       0) )
                {
                  v15 = *((unsigned int *)v10 + 2); /*0x5c2b58*/
                  v16 = *((unsigned int *)v10 - 1); /*0x5c2b5b*/
                  *((unsigned int *)v10 + 2) = v15 + 1; /*0x5c2b61*/
                  *(unsigned int *)(v16 + 4 * v15) = v12; /*0x5c2b64*/
                }
              }
              else
              {
                v17 = *(unsigned int *)v10; /*0x5c2b69*/
                if ( *((unsigned int *)v10 + 2) < *(unsigned int *)v10 /*0x5c2b8f*/
                  || (v10[5] || !v17)
                  && (v18 = *((unsigned int *)v10 + 3), v18 > 0)
                  && (*(uint8_t (__thiscall **)(char *, int, unsigned int))(*((unsigned int *)v10 - 2) + 8))(
                       v10 - 8,
                       v17 + v18,
                       0) )
                {
                  v19 = *((unsigned int *)v10 + 2); /*0x5c2b96*/
                  v20 = *((unsigned int *)v10 - 1); /*0x5c2b99*/
                  *((unsigned int *)v10 + 2) = v19 + 1; /*0x5c2b9f*/
                  *(unsigned int *)(v20 + 4 * v19) = -1; /*0x5c2ba2*/
                }
              }
              v21 = strtok(0, Delimiter); /*0x5c2bb0*/
              if ( v21 ) /*0x5c2bba*/
              {
                v22 = atol(v21); /*0x5c2bc8*/
                v23 = *((unsigned int *)v10 + 48); /*0x5c2bca*/
                if ( *((unsigned int *)v10 + 50) < v23 /*0x5c2c08*/
                  || (v10[197] || !v23)
                  && (v24 = *((unsigned int *)v10 + 51), v24 > 0)
                  && (*(uint8_t (__thiscall **)(char *, int, unsigned int))(*((unsigned int *)v10 + 46) + 8))(
                       v10 + 184,
                       v23 + v24,
                       0) )
                {
                  v25 = *((unsigned int *)v10 + 50); /*0x5c2c0f*/
                  v26 = *((unsigned int *)v10 + 47); /*0x5c2c15*/
                  *((unsigned int *)v10 + 50) = v25 + 1; /*0x5c2c1e*/
                  *(unsigned int *)(v26 + 4 * v25) = v22; /*0x5c2c24*/
                }
              }
              else
              {
                v27 = *((unsigned int *)v10 + 48); /*0x5c2c29*/
                if ( *((unsigned int *)v10 + 50) < v27 /*0x5c2c62*/
                  || (v10[197] || !v27)
                  && (v28 = *((unsigned int *)v10 + 51), v28 > 0)
                  && (*(uint8_t (__thiscall **)(char *, int, unsigned int))(*((unsigned int *)v10 + 46) + 8))(
                       v10 + 184,
                       v27 + v28,
                       0) )
                {
                  v29 = *((unsigned int *)v10 + 50); /*0x5c2c69*/
                  v30 = *((unsigned int *)v10 + 47); /*0x5c2c6f*/
                  *((unsigned int *)v10 + 50) = v29 + 1; /*0x5c2c78*/
                  *(unsigned int *)(v30 + 4 * v29) = -1; /*0x5c2c7e*/
                }
              }
              v10 += 24; /*0x5c2c85*/
              --v9; /*0x5c2c88*/
            }
            while ( v9 ); /*0x5c2c89*/
            result = --result; /*0x5c2c93*/
          }
          while ( result ); /*0x5c2c98*/
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
  void *v8; // ecx
  int result; // eax
  char v10; // dl

  v3 = *(unsigned int *)(a2 + 16); /*0x5c2d07*/
  v4 = 0; /*0x5c2d0a*/
  for ( i = 0; i < v3; ++i ) /*0x5c2d15*/
  {
    if ( *(unsigned char *)(i + a3) ) /*0x5c2d17*/
      ++v4; /*0x5c2d1d*/
  }
  v6 = 0; /*0x5c2d28*/
  for ( j = 0; j < HouseClass_Count; ++j ) /*0x5c2d2e*/
  {
    v8 = *(void **)&HouseClass_Array->vtable0[4 * j]; /*0x5c2d36*/
    if ( v8 && (uint8_t)House::IsCurrentPlayer(v8) ) /*0x5c2d3d*/
      ++v6; /*0x5c2d46*/
  }
  if ( v4 >= v6 ) /*0x5c2d53*/
  {
    result = *((unsigned int *)g_ScenarioClass_Instance + 1145); /*0x5c2d96*/
    if ( *(unsigned char *)(result + a3) ) /*0x5c2d9c*/
    {
      do /*0x5c2db4*/
      {
        if ( result >= *(unsigned int *)(a2 + 16) ) /*0x5c2dab*/
          break; /*0x5c2dab*/
        v10 = *(unsigned char *)(result + a3 + 1); /*0x5c2dad*/
        ++result; /*0x5c2db1*/
      }
      while ( v10 ); /*0x5c2db4*/
    }
  }
  else
  {
    for ( result = Random::Range( /*0x5c2d70*/
                     (unsigned int *)g_ScenarioClass_Instance + 134,
                     0,
                     *((unsigned int *)g_ScenarioClass_Instance + 1145) - 1);
          *(unsigned char *)(result + a3);
          result = (result + 1) % *((unsigned int *)g_ScenarioClass_Instance + 1145) )
    {
      ; /*0x5c2d86*/
    }
  }
  *(unsigned char *)(result + a3) = 1; /*0x5c2dba*/
  *((unsigned int *)g_ScenarioClass_Instance + result + 1120) = aP0; /*0x5c2dc7*/
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
  House *v10; // ecx
  int j; // eax
  void *v12; // edx
  int vtable2; // eax
  char v15; // bl
  void *v16; // ecx

  v4 = a3; /*0x5c2de0*/
  v5 = 0; /*0x5c2de6*/
  v6 = *(unsigned int *)(a3 + 16); /*0x5c2de8*/
  for ( i = 0; i < v6; ++i ) /*0x5c2df4*/
  {
    if ( *(unsigned char *)(i + a4) ) /*0x5c2df6*/
      ++v5; /*0x5c2dfc*/
  }
  v8 = 0; /*0x5c2e08*/
  v9 = 0; /*0x5c2e0a*/
  if ( stru_A80220.nextArrayIndex > 0 ) /*0x5c2e0e*/
  {
    do /*0x5c2e2e*/
    {
      v10 = (House *)*((unsigned int *)stru_A80220.vtable3 + v9); /*0x5c2e15*/
      if ( v10 && (uint8_t)House::IsCurrentPlayer(v10) ) /*0x5c2e1c*/
        ++v8; /*0x5c2e25*/
      ++v9; /*0x5c2e2b*/
    }
    while ( v9 < stru_A80220.nextArrayIndex ); /*0x5c2e2e*/
    v4 = a3; /*0x5c2e30*/
  }
  if ( v5 >= v8 ) /*0x5c2e37*/
  {
    vtable2 = (int)unk_A8B230[127].vtable2; /*0x5c2ea2*/
    if ( *(unsigned char *)(vtable2 + a4) ) /*0x5c2ea8*/
    {
      do /*0x5c2ebc*/
      {
        if ( vtable2 >= v4->q010 ) /*0x5c2eb3*/
          break; /*0x5c2eb3*/
        v15 = *(unsigned char *)(vtable2 + a4 + 1); /*0x5c2eb5*/
        ++vtable2; /*0x5c2eb9*/
      }
      while ( v15 ); /*0x5c2ebc*/
    }
    *(unsigned char *)(vtable2 + a4) = 1; /*0x5c2ec2*/
    *(&unk_A8B230[124].uniqueId + vtable2) = a2; /*0x5c2ecc*/
    v16 = *(void **)(v4->q004 + 4 * vtable2); /*0x5c2ed8*/
    a1->MPCooperative_field_0x0 = v16; /*0x5c2ee0*/
    return &a1->MPCooperative_field_0x0; /*0x5c2edb*/
  }
  else
  {
    for ( j = Random::Range((Random *)&unk_A8B230[14].NeedsSaveOrLink, 0, (int)unk_A8B230[127].vtable2 - 1); /*0x5c2e54*/
          *(unsigned char *)(j + a4);
          j = (j + 1) % (int)unk_A8B230[127].vtable2 )
    {
      ; /*0x5c2e6a*/
    }
    *(unsigned char *)(j + a4) = 1; /*0x5c2e76*/
    *(&unk_A8B230[124].uniqueId + j) = a2; /*0x5c2e83*/
    v12 = *(void **)(*(unsigned int *)(a3 + 4) + 4 * j); /*0x5c2e91*/
    a1->MPCooperative_field_0x0 = v12; /*0x5c2e98*/
    return &a1->MPCooperative_field_0x0; /*0x5c2e94*/
  }
}
}
// 0x5C2EF0
namespace gamemd {
AbstractClass * * MPCooperative::GetPlayerCount(int a1)
{
  int v1; // eax
  int *p_uniqueId; // ecx
  int i; // ebp
  char v4; // bl
  int v5; // edx
  HouseClass *v6; // edi
  int v7; // eax
  int *v8; // ecx
  int v9; // ebx
  int v10; // esi
  unsigned int *v11; // ecx
  int v12; // ecx
  char *j; // eax
  SessionClass **v14; // edi
  Multiplayer v16[16]; // [esp+4h] [ebp-28h] BYREF
  Multiplayer v17[4]; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  char v19; // [esp+21h] [ebp-Bh]
  HouseClass *thisa; // [esp+30h] [ebp+4h]

  Multiplayer::FindStartPositions(v17); /*0x5c2eff*/
  v1 = 0; /*0x5c2f0a*/
  p_uniqueId = &unk_A8B230[124].uniqueId; /*0x5c2f0c*/
  do /*0x5c2f2a*/
    v16[v1++] = (Multiplayer)(*p_uniqueId++ != -1); /*0x5c2f17*/
  while ( v1 < 16 ); /*0x5c2f2a*/
  for ( i = 0; i < stru_A80220.nextArrayIndex; ++i ) /*0x5c2f36*/
  {
    v4 = 0; /*0x5c2f44*/
    v5 = -1; /*0x5c2f46*/
    v6 = (HouseClass *)*((unsigned int *)stru_A80220.vtable3 + i); /*0x5c2f49*/
    thisa = v6; /*0x5c2f4c*/
    if ( !*(unsigned char *)(v6->relatedTagsCapacity + 422) ) /*0x5c2f53*/
    {
      v7 = 0; /*0x5c2f67*/
      v8 = &unk_A8B230[124].uniqueId; /*0x5c2f69*/
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
        HouseClass::SetMapSeed(v6, *((unsigned int *)Block + v5)); /*0x5c3073*/
      }
      else
      {
        Debug::Log(); /*0x5c2f92*/
        v9 = MPCooperative_Play(i, (int)v17, (int)v16); /*0x5c2fae*/
        v10 = 0; /*0x5c2fb5*/
        if ( dword_A8DA84 <= 0 ) /*0x5c2fb9*/
          goto LABEL_17; /*0x5c2fb9*/
        v11 = dword_A8DA78; /*0x5c2fc1*/
        while ( *(unsigned int *)(*v11 + 111) != i ) /*0x5c2fc8*/
        {
          ++v10; /*0x5c2fca*/
          ++v11; /*0x5c2fcb*/
          if ( v10 >= dword_A8DA84 ) /*0x5c2fd0*/
            goto LABEL_17; /*0x5c2fd0*/
        }
        if ( v10 == -1 ) /*0x5c2ff4*/
        {
  LABEL_17:
          v12 = 0; /*0x5c2fd2*/
          for ( j = &stru_A8B250.__pad_0[140]; /*0x5c2fd4*/
                (*((unsigned int *)j - 16) == -1 || *(unsigned int *)j != -2) && (int)j < (int)&stru_A8B250.__pad_0[172];
                j += 4 )
          {
            ++v12; /*0x5c2feb*/
          }
          *(unsigned int *)&stru_A8B250.__pad_0[4 * v12 + 140] = v9; /*0x5c3031*/
          *(unsigned int *)&stru_A8B250.__pad_0[4 * v12 + 172] = 1; /*0x5c3038*/
        }
        else
        {
          SessionClass::SetOption((int *)dword_A8DA78[v10], v9); /*0x5c2ffa*/
          SessionClass::SetOption2((int *)dword_A8DA78[v10], 0); /*0x5c300a*/
          v14 = (SessionClass **)&dword_A8DA78[v10]; /*0x5c3018*/
          SessionClass::GetOption2(*v14); /*0x5c301b*/
          SessionClass::GetOption((*v14)->GameMode); /*0x5c3023*/
        }
        Debug::Log(); /*0x5c3053*/
        HouseClass::SetMapSeed(thisa, *((unsigned int *)Block + v9)); /*0x5c3067*/
      }
    }
  }
  *(unsigned int *)v17 = (void*)&VectorClass_Cell_vftable; /*0x5c308d*/
  if ( Block && v19 ) /*0x5c30a0*/
    RA2_OPDEL(Block); /*0x5c30a3*/
  return 1; /*0x5c30ad*/
}
}
// 0x5C30C0
namespace gamemd {
ScenarioClass * * MPCooperative::BroadcastMessage()
{
  signed int v2; // ebp
  CampaignClass *MPCooperative_field_0x33C; // edx
  int *MPCooperative_field_0x40; // ecx
  int vtable2; // edi
  unsigned int *v7; // esi
  signed int v8; // eax
  int v9; // [esp+10h] [ebp-Ch] BYREF
  signed int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h] BYREF

  v2 = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]) - (unsigned int)unk_A8B230[127].vtable2; /*0x5c30db*/
  Debug::Log(); /*0x5c30e7*/
  if ( v2 <= 0 ) /*0x5c30f3*/
    return 0; /*0x5c30f8*/
  *(unsigned int *)&stru_A8B250.__pad_0[36] = v2; /*0x5c30ff*/
  MPCooperative_field_0x33C = this->MPCooperative_field_0x33C; /*0x5c3105*/
  v10 = 0; /*0x5c310f*/
  v9 = 0; /*0x5c311a*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, (int)MPCooperative_field_0x33C, &v11); /*0x5c311e*/
  if ( !v11 ) /*0x5c3129*/
    return 0; /*0x5c312e*/
  if ( !*(unsigned int *)(v11 + 56) ) /*0x5c3135*/
    return 0; /*0x5c313d*/
  MPCooperative_field_0x40 = (int *)this->MPCooperative_field_0x40; /*0x5c3144*/
  if ( !MPCooperative_field_0x40 || !(uint8_t)Movie::GetState(MPCooperative_field_0x40, &v9) ) /*0x5c3150*/
    v9 = 0; /*0x5c3159*/
  if ( v9 >= *(unsigned int *)(v11 + 56) ) /*0x5c3168*/
    return 0; /*0x5c316d*/
  vtable2 = (int)unk_A8B230[127].vtable2; /*0x5c3179*/
  if ( vtable2 < 8 ) /*0x5c3182*/
  {
    v7 = (unsigned int *)(4 * vtable2 + 11055740); /*0x5c3188*/
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
        if ( stru_A8EB00.parent_gap[26] ) /*0x5c31af*/
          *v7 = stru_A8EB00.parent_gap[26] == 1; /*0x5c31c1*/
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
      ++vtable2; /*0x5c3204*/
    }
    while ( (int)v7 < (int)&stru_A8B250.__pad_0[76] ); /*0x5c320b*/
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
      v1 = *(unsigned int *)&HouseClass_Array->gap0[v8]; /*0x5c325b*/
      ToWideStringChar((char *)(v1 + 90154)); /*0x5c3264*/
      Debug::Log(); /*0x5c3276*/
      if ( *(unsigned char *)(*(unsigned int *)(v1 + 52) + 422) || !*(unsigned char *)(v1 + 492) ) /*0x5c328f*/
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
            v3 = *(unsigned int *)&HouseClass_Array->gap0[4 * v0]; /*0x5c32b4*/
            ToWideStringChar((char *)(v3 + 90154)); /*0x5c32bf*/
            Debug::Log(); /*0x5c32ca*/
            if ( !*(unsigned char *)(*(unsigned int *)(v3 + 52) + 422) && *(unsigned char *)(v3 + 492) ) /*0x5c32df*/
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
        v5 = *(unsigned int *)&HouseClass_Array->gap0[v9]; /*0x5c33a8*/
        ToWideStringChar((char *)(v5 + 90154)); /*0x5c33b1*/
        Debug::Log(); /*0x5c33c3*/
        if ( !*(unsigned char *)(*(unsigned int *)(v5 + 52) + 422) && !*(unsigned char *)(v5 + 492) ) /*0x5c33dc*/
        {
          v13 = v4; /*0x5c33ef*/
          if ( v4 < HouseClass_Count ) /*0x5c33f5*/
          {
            do /*0x5c34ac*/
            {
              v6 = *(unsigned int *)&HouseClass_Array->gap0[4 * v4]; /*0x5c3400*/
              ToWideStringChar((char *)(v6 + 90154)); /*0x5c340b*/
              Debug::Log(); /*0x5c3416*/
              if ( !*(unsigned char *)(*(unsigned int *)(v6 + 52) + 422) && !*(unsigned char *)(v6 + 492) ) /*0x5c342b*/
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
  int *MPCooperative_field_0x40; // ecx
  int v3; // edi
  char v4; // bl
  int *v6; // ecx
  int v7; // ebp
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h] BYREF

  MPCooperative_field_0x40 = (int *)this->MPCooperative_field_0x40; /*0x5c34fd*/
  dword_A83CA8 = dword_A83CA8; /*0x5c3500*/
  v4 = 0; /*0x5c3509*/
  v13 = 0; /*0x5c350b*/
  Movie::GetSectionID(MPCooperative_field_0x40, &v13); /*0x5c350f*/
  v11 = 0; /*0x5c3523*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, v13, &v12); /*0x5c3527*/
  if ( !v12 ) /*0x5c3530*/
    return 0; /*0x5c3535*/
  v6 = (int *)this->MPCooperative_field_0x40; /*0x5c353c*/
  if ( !v6 || !(uint8_t)Movie::GetState(v6, &v11) ) /*0x5c3548*/
    v11 = 0; /*0x5c3551*/
  if ( v11 >= v12->NeedsSaveOrLink ) /*0x5c3560*/
    return 0; /*0x5c3565*/
  v7 = dword_A83CA8 - 1; /*0x5c356c*/
  do /*0x5c35c2*/
  {
    v8 = Random::Range((Random *)&unk_A8B230[14].NeedsSaveOrLink, 0, v7); /*0x5c3586*/
    v9 = 0; /*0x5c358c*/
    v10 = *(unsigned int *)(v12->abstractFlags + 4 * v11); /*0x5c3591*/
    if ( *(int *)(v10 + 16) > 0 ) /*0x5c3599*/
    {
      do /*0x5c35be*/
      {
        if ( v8 == SideClass::FindByName(*(SideClass **)(*(unsigned int *)(v10 + 4) + 4 * v9)) ) /*0x5c35a8*/
          v4 = 1; /*0x5c35aa*/
        ++v9; /*0x5c35b4*/
        v10 = *(unsigned int *)(v12->abstractFlags + 4 * v11); /*0x5c35b8*/
      }
      while ( v9 < *(unsigned int *)(v10 + 16) ); /*0x5c35be*/
    }
  }
  while ( !v4 ); /*0x5c35c2*/
  ToWideStringChar(*(char **)(*((unsigned int *)unk_A83C9C + v8) + 96)); /*0x5c35d0*/
  Debug::Log(); /*0x5c35dc*/
  return v8; /*0x5c3532*/
}
}
// 0x5C35F0
namespace gamemd {
int MPCooperative::HandleEvent()
{
  int *MPCooperative_field_0x40; // ecx
  char v4; // bl
  int *v6; // ecx
  int v7; // ebp
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h] BYREF

  MPCooperative_field_0x40 = (int *)this->MPCooperative_field_0x40; /*0x5c35fd*/
  dword_A83CA8 = dword_A83CA8; /*0x5c3600*/
  v4 = 0; /*0x5c3609*/
  v13 = 0; /*0x5c360b*/
  Movie::GetSectionID(MPCooperative_field_0x40, &v13); /*0x5c360f*/
  v11 = 0; /*0x5c3623*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, v13, &v12); /*0x5c3627*/
  if ( !v12 ) /*0x5c3630*/
    return 0; /*0x5c3635*/
  v6 = (int *)this->MPCooperative_field_0x40; /*0x5c363c*/
  if ( !v6 || !(uint8_t)Movie::GetState(v6, &v11) ) /*0x5c3648*/
    v11 = 0; /*0x5c3651*/
  if ( v11 >= v12->u32_38 ) /*0x5c3660*/
    return 0; /*0x5c3665*/
  v7 = dword_A83CA8 - 1; /*0x5c366c*/
  do /*0x5c36c2*/
  {
    v8 = Random::Range((Random *)&unk_A8B230[14].NeedsSaveOrLink, 0, v7); /*0x5c3686*/
    v9 = 0; /*0x5c368c*/
    v10 = *(unsigned int *)(v12->u32_2C + 4 * v11); /*0x5c3691*/
    if ( *(int *)(v10 + 16) > 0 ) /*0x5c3699*/
    {
      do /*0x5c36be*/
      {
        if ( v8 == SideClass::FindByName(*(SideClass **)(*(unsigned int *)(v10 + 4) + 4 * v9)) ) /*0x5c36a8*/
          v4 = 1; /*0x5c36aa*/
        ++v9; /*0x5c36b4*/
        v10 = *(unsigned int *)(v12->u32_2C + 4 * v11); /*0x5c36b8*/
      }
      while ( v9 < *(unsigned int *)(v10 + 16) ); /*0x5c36be*/
    }
  }
  while ( !v4 ); /*0x5c36c2*/
  ToWideStringChar(*(char **)(*((unsigned int *)unk_A83C9C + v8) + 96)); /*0x5c36d0*/
  Debug::Log(); /*0x5c36dc*/
  return v8; /*0x5c3632*/
}
}
// 0x5C3B10
namespace gamemd {
void MPCooperative::LoadSettings(HWND hWnd, int a3, int a4)
{
  MPCooperative *v4; // edi
  MultiplayerGameMode *MPCooperative_field_0x50; // eax
  MPCooperative *v6; // eax
  MultiplayerGameMode *inited; // eax
  char *MPCooperative_field_0x40; // ecx
  int v9; // eax
  int i; // ebp
  MissionClass *v11; // eax
  unsigned int *v12; // ebx
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
  int IsometricTileTypeClass_field_0x08; // [esp+14h] [ebp-330h]
  MPCooperative *v26; // [esp+18h] [ebp-32Ch]
  IsometricTileTypeClass v27; // [esp+1Ch] [ebp-328h] BYREF
  wchar_t v28[260]; // [esp+13Ch] [ebp-208h] BYREF

  v4 = this; /*0x5c3b1a*/
  v26 = this; /*0x5c3b1c*/
  MPCooperative_field_0x50 = this->MPCooperative_field_0x50; /*0x5c3b20*/
  IDA_LOBYTE(this->MPCooperative_field_0x4) = 1; /*0x5c3b23*/
  if ( !MPCooperative_field_0x50 ) /*0x5c3b29*/
  {
    v6 = (MPCooperative *)RA2_OPNEW(8u); /*0x5c3b2d*/
    if ( v6 ) /*0x5c3b37*/
      inited = (MultiplayerGameMode *)MPCooperative::initGame(v6); /*0x5c3b3b*/
    else
      inited = 0; /*0x5c3b42*/
    v4->MPCooperative_field_0x50 = inited; /*0x5c3b44*/
  }
  SendMessageA(hWnd, 0x184u, 0, 0); /*0x5c3b58*/
  MPCooperative_field_0x40 = (char *)v4->MPCooperative_field_0x40; /*0x5c3b5e*/
  IDA_BYTE1(v4->MPCooperative_field_0x48) = 0; /*0x5c3b61*/
  if ( MPCooperative_field_0x40 ) /*0x5c3b6c*/
  {
    if ( dword_A8DA84 != 2 ) /*0x5c3ba4*/
      String::AssignWideToChar( /*0x5c3bb0*/
        MPCooperative_field_0x40,
        (char *)&g_TypeClass_DefaultString,
        (char *)&g_TypeClass_DefaultString);
  }
  else if ( dword_A8DA84 == 2 ) /*0x5c3b71*/
  {
    v9 = RA2_OPNEW(0x70u); /*0x5c3b75*/
    if ( v9 ) /*0x5c3b7f*/
      v4->MPCooperative_field_0x40 = (void *)MPCooperative::processTurn( /*0x5c3b95*/
                                               v9,
                                               (char *)*dword_A8DA78,
                                               (char *)dword_A8DA78[1]);
    else
      v4->MPCooperative_field_0x40 = 0; /*0x5c3b9c*/
  }
  if ( !*(unsigned int *)&v4->__pad_328[12] ) /*0x5c3bb5*/
  {
    CampaignClass::GetValue((int *)&g_DDrawSurfaceManager, &v24); /*0x5c3bcd*/
    for ( i = 0; i < v24; ++i ) /*0x5c3bda*/
    {
      v11 = (MissionClass *)RA2_OPNEW(0x70u); /*0x5c3be4*/
      if ( v11 ) /*0x5c3bee*/
        v12 = MissionClass::Init(v11); /*0x5c3bf7*/
      else
        v12 = 0; /*0x5c3bfb*/
      Movie::SetupScreen((int)v12, i); /*0x5c3c00*/
      v13 = *(unsigned int *)&v4->__pad_328[4]; /*0x5c3c05*/
      if ( *(unsigned int *)&v4->__pad_328[12] >= v13 ) /*0x5c3c0d*/
      {
        if ( !v4->__pad_328[9] && v13 ) /*0x5c3c18*/
          continue; /*0x5c3c18*/
        v14 = *(unsigned int *)&v4->__pad_328[16]; /*0x5c3c1a*/
        if ( v14 <= 0 /*0x5c3c2a*/
          || !(*(uint8_t (__thiscall **)(int *, int, unsigned int))(v4->MPCooperative_field_0x324 + 8))(
                &v4->MPCooperative_field_0x324,
                v13 + v14,
                0) )
        {
          continue; /*0x5c3c2a*/
        }
      }
      v15 = *(unsigned int *)&v4->__pad_328[12]; /*0x5c3c31*/
      v16 = *(unsigned int *)v4->__pad_328; /*0x5c3c34*/
      *(unsigned int *)&v4->__pad_328[12] = v15 + 1; /*0x5c3c3a*/
      *(unsigned int *)(v16 + 4 * v15) = v12; /*0x5c3c3d*/
    }
  }
  v17 = 0; /*0x5c3c49*/
  IsometricTileTypeClass::Constructor_0(&v27, 0, 0); /*0x5c3c51*/
  *(unsigned int *)v27.__pad_0 = (void*)&DynamicVectorClass_unsigned_short___vftable; /*0x5c3c60*/
  v27.IsometricTileTypeClass_field_0x14 = 10; /*0x5c3c68*/
  v27.IsometricTileTypeClass_field_0x10 = 0; /*0x5c3c70*/
  SmallFunc_49E740((int)&g_DDrawSurfaceManager, &v27); /*0x5c3c74*/
  IsometricTileTypeClass_field_0x08 = v27.IsometricTileTypeClass_field_0x08; /*0x5c3c86*/
  if ( v27.IsometricTileTypeClass_field_0x08 > 0 ) /*0x5c3c8a*/
  {
    do /*0x5c3d96*/
    {
      if ( *(unsigned int *)(v27.IsometricTileTypeClass_field_0x04 + 4 * v17) ) /*0x5c3c94*/
      {
        Array::GetElementAt(*(int **)(*(unsigned int *)v4->__pad_328 + 4 * v17), &v27.IsometricTileTypeClass_field_0x18, -1); /*0x5c3cae*/
        v24 = *(unsigned int *)(a3 + 16); /*0x5c3cc5*/
        v18 = 0; /*0x5c3cc9*/
        sprintf( /*0x5c3ccb*/
          (char *const)&v27.IsometricTileTypeClass_field_0x1C,
          "%s.MAP",
          (const char *)v27.IsometricTileTypeClass_field_0x18);
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
            if ( !_strcmpi( /*0x5c3cf4*/
                    (char *)(*(unsigned int *)(*(unsigned int *)(a3 + 4) + 4 * v19) + 88),
                    (char *)&v27.IsometricTileTypeClass_field_0x1C) )
              v18 = *(unsigned int *)(*(unsigned int *)(a3 + 4) + 4 * v19); /*0x5c3d03*/
            if ( ++v19 >= v24 ) /*0x5c3d0d*/
            {
              if ( !v18 ) /*0x5c3d11*/
                goto LABEL_34; /*0x5c3d11*/
              break; /*0x5c3d11*/
            }
          }
          swprintf( /*0x5c3d13*/
            v28,
            (const size_t)aDS_0,
            (const wchar_t *const)(v17 + 1),
            *(unsigned int *)(v27.IsometricTileTypeClass_field_0x04 + 4 * v17));
          SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)v28); /*0x5c3d4b*/
          SendMessageA(hWnd, 0x19Au, v17, v18); /*0x5c3d59*/
        }
        RA2_OPDEL(*(void **)(v27.IsometricTileTypeClass_field_0x04 + 4 * v17)); /*0x5c3d83*/
        v4 = v26; /*0x5c3d88*/
      }
      ++v17; /*0x5c3d93*/
    }
    while ( v17 < IsometricTileTypeClass_field_0x08 ); /*0x5c3d96*/
  }
  v20 = (char *)v4->MPCooperative_field_0x40; /*0x5c3d9c*/
  if ( v20 ) /*0x5c3da1*/
  {
    if ( MPCooperative::ReadCoopSaveINI(v20) && !IDA_BYTE1(v4->MPCooperative_field_0x48) ) /*0x5c3db4*/
    {
      LoadCoopCampaignSave((char *)v4->MPCooperative_field_0x40, (char *)&v27.IsometricTileTypeClass_field_0x1C); /*0x5c3dc7*/
      strcat((char *)&v27.IsometricTileTypeClass_field_0x1C, g_Str_File__MAP); /*0x5c3df1*/
      IsometricTileTypeClass_field_0x08 = *(unsigned int *)(a3 + 16); /*0x5c3dfb*/
      v21 = 0; /*0x5c3e01*/
      v22 = 0; /*0x5c3e03*/
      if ( IsometricTileTypeClass_field_0x08 > 0 ) /*0x5c3e07*/
      {
        while ( !v21 ) /*0x5c3e0b*/
        {
          if ( !_strcmpi( /*0x5c3e1c*/
                  (char *)(*(unsigned int *)(*(unsigned int *)(a3 + 4) + 4 * v22) + 88),
                  (char *)&v27.IsometricTileTypeClass_field_0x1C) )
            v21 = *(unsigned int *)(*(unsigned int *)(a3 + 4) + 4 * v22); /*0x5c3e2b*/
          if ( ++v22 >= IsometricTileTypeClass_field_0x08 ) /*0x5c3e35*/
          {
            if ( !v21 ) /*0x5c3e39*/
              goto LABEL_47; /*0x5c3e39*/
            break; /*0x5c3e39*/
          }
        }
        StringCSF = GetStringCSF(aTxtCoopUseSave, 0, g_Str_File_MPCoop_cpp, 1726); /*0x5c3e3b*/
        SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)StringCSF); /*0x5c3e67*/
        SendMessageA(hWnd, 0x19Au, v17, v21); /*0x5c3e71*/
        IDA_BYTE1(v26->MPCooperative_field_0x48) = 1; /*0x5c3e77*/
      }
    }
  }
  LABEL_47:
  SendMessageA(hWnd, 0x186u, 0, 0); /*0x5c3e7b*/
  *(unsigned int *)v27.__pad_0 = (void*)&VectorClass_unsigned_short___vftable; /*0x5c3e9b*/
  if ( v27.IsometricTileTypeClass_field_0x04 ) /*0x5c3ea4*/
  {
    if ( IDA_BYTE1(v27.IsometricTileTypeClass_field_0x0C) ) /*0x5c3eac*/
      RA2_OPDEL((void *)v27.IsometricTileTypeClass_field_0x04); /*0x5c3eaf*/
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
  void *MPCooperative_field_0x40; // ecx
  int v7; // ebx
  int i; // edi
  HWND GameUI; // eax
  Dialog *v10; // edi
  const char *v11; // [esp+10h] [ebp-108h] BYREF
  char Buffer[260]; // [esp+14h] [ebp-104h] BYREF

  if ( Dialog::GetCurrentType() != 107 ) /*0x5c3f94*/
  {
    MPCooperative_field_0x40 = this->MPCooperative_field_0x40; /*0x5c4013*/
    if ( MPCooperative_field_0x40 && IDA_LOBYTE(this->MPCooperative_field_0x48) ) /*0x5c401e*/
    {
      if ( this->MPCooperative_field_0x4C ) /*0x5c4029*/
        Movie::SetupScreen((int)MPCooperative_field_0x40, 0); /*0x5c4032*/
      else
        Movie::SetupScreen((int)MPCooperative_field_0x40, 1); /*0x5c403f*/
      Movie::SetupScreen((int)this->MPCooperative_field_0x40, (int)this->MPCooperative_field_0x4C); /*0x5c403b*/
      Array::GetElementAt((int *)this->MPCooperative_field_0x40, &v11, -1); /*0x5c405a*/
      v7 = unk_A8B8D8; /*0x5c4063*/
      sprintf(Buffer, "%s.MAP", v11); /*0x5c4074*/
      for ( i = 0; i < v7; ++i ) /*0x5c4080*/
      {
        if ( !_strcmpi((char *)(*(unsigned int *)(unk_A8B8CC + 4 * i) + 88), Buffer) ) /*0x5c4094*/
          break; /*0x5c409e*/
      }
      *(unsigned int *)&stru_A8B250.__pad_0[4] = i; /*0x5c40ab*/
      unk_A8B230[130].vtable3 = (void *)i; /*0x5c40b3*/
      LoadScenarioClassByIndex(i); /*0x5c40b9*/
    }
    GameUI = (HWND)Dialog::FindGameUI(); /*0x5c40be*/
    v10 = (Dialog *)GameUI; /*0x5c40c3*/
    if ( GameUI ) /*0x5c40c7*/
    {
      SetDialogPlayerName(GameUI, (int)this); /*0x5c40cd*/
      Dialog::ShowPlayerName(v10); /*0x5c40d4*/
      Session::PrepareGame((Session *)v10); /*0x5c40db*/
    }
    CheckGameSettingsChanged(1, 1); /*0x5c40e4*/
  LABEL_21:
    v5 = (char *)this->MPCooperative_field_0x40; /*0x5c40e9*/
    if ( !v5 ) /*0x5c40ee*/
      return; /*0x5c40ee*/
    goto LABEL_22; /*0x5c40ee*/
  }
  if ( !IDA_BYTE1(this->MPCooperative_field_0x48) ) /*0x5c3f9b*/
    goto LABEL_21; /*0x5c3f9b*/
  Current = (HWND)Dialog::GetCurrent(); /*0x5c3fa6*/
  DlgItem = GetDlgItem(Current, 1363); /*0x5c3fba*/
  v4 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x5c3fc6*/
  if ( v4 != -1 ) /*0x5c3fcb*/
  {
    if ( SendMessageA(DlgItem, 0x188u, 0, 0) == v4 - 1 ) /*0x5c3fee*/
      SendMessageA(DlgItem, 0x186u, v4 - 2, 0); /*0x5c3ffc*/
    SendMessageA(DlgItem, 0x182u, v4 - 1, 0); /*0x5c4008*/
    IDA_BYTE1(this->MPCooperative_field_0x48) = 0; /*0x5c400a*/
    goto LABEL_21; /*0x5c400e*/
  }
  v5 = (char *)this->MPCooperative_field_0x40; /*0x5c3fcd*/
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
  unsigned int *MPCooperative_field_0x40; // eax
  MissionClass *v3; // eax
  unsigned int *v4; // eax
  char *v5; // ecx
  LPARAM v6; // ebp
  int v7; // edi
  int v8; // esi
  bool v9; // zf
  HWND Current; // eax
  HWND DlgItem; // esi
  WPARAM v12; // ebx
  wchar_t *StringCSF; // eax
  wchar_t *v14; // eax
  char Destination[260]; // [esp+14h] [ebp-104h] BYREF

  MPCooperative_field_0x40 = this->MPCooperative_field_0x40; /*0x5c4120*/
  if ( !MPCooperative_field_0x40 ) /*0x5c4125*/
  {
    v3 = (MissionClass *)RA2_OPNEW(0x70u); /*0x5c4129*/
    if ( v3 ) /*0x5c4133*/
      v4 = MissionClass::Init(v3); /*0x5c4137*/
    else
      v4 = 0; /*0x5c413e*/
    this->MPCooperative_field_0x40 = v4; /*0x5c4144*/
    IDA_LOBYTE(MPCooperative_field_0x40) = Movie::SetupScreen((int)v4, 0); /*0x5c4147*/
  }
  v5 = (char *)this->MPCooperative_field_0x40; /*0x5c414c*/
  if ( v5 ) /*0x5c4151*/
  {
    if ( dword_A8DA84 == 2 ) /*0x5c415e*/
      String::AssignWideToChar(v5, (char *)*dword_A8DA78, (char *)dword_A8DA78[1]); /*0x5c416c*/
    (*((void (__thiscall **)(MPCooperative *))this->MPCooperative_field_0x0 + 24))(this); /*0x5c4175*/
    IDA_LOBYTE(MPCooperative_field_0x40) = MPCooperative::ReadCoopSaveINI((char *)this->MPCooperative_field_0x40); /*0x5c417b*/
    if ( (unsigned char)MPCooperative_field_0x40 ) /*0x5c4182*/
    {
      if ( Dialog::GetCurrentType() == 107 ) /*0x5c4190*/
      {
        IDA_LOBYTE(MPCooperative_field_0x40) = IDA_BYTE1(this->MPCooperative_field_0x48); /*0x5c4196*/
        if ( !(unsigned char)MPCooperative_field_0x40 ) /*0x5c419b*/
        {
          LoadCoopCampaignSave((char *)this->MPCooperative_field_0x40, Destination); /*0x5c41a9*/
          IDA_LOBYTE(MPCooperative_field_0x40) = 0; /*0x5c41b6*/
          v6 = 0; /*0x5c41c2*/
          strcat(Destination, g_Str_File__MAP); /*0x5c41d5*/
          v7 = unk_A8B8D8; /*0x5c41de*/
          v8 = 0; /*0x5c41e4*/
          if ( unk_A8B8D8 > 0 ) /*0x5c41e8*/
          {
            MPCooperative_field_0x40 = (unsigned int *)unk_A8B8CC; /*0x5c41ee*/
            while ( !v6 ) /*0x5c41f5*/
            {
              v9 = _strcmpi((char *)(MPCooperative_field_0x40[v8] + 88), Destination) == 0; /*0x5c420b*/
              MPCooperative_field_0x40 = (unsigned int *)unk_A8B8CC; /*0x5c420d*/
              if ( v9 ) /*0x5c4212*/
                v6 = *(unsigned int *)(unk_A8B8CC + 4 * v8); /*0x5c4214*/
              if ( ++v8 >= v7 ) /*0x5c421a*/
              {
                if ( !v6 ) /*0x5c421e*/
                  return (char)MPCooperative_field_0x40; /*0x5c421e*/
                break; /*0x5c421e*/
              }
            }
            Current = (HWND)Dialog::GetCurrent(); /*0x5c4224*/
            DlgItem = GetDlgItem(Current, 1363); /*0x5c423d*/
            MPCooperative_field_0x40 = (unsigned int *)SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x5c4247*/
            v12 = (WPARAM)MPCooperative_field_0x40; /*0x5c4249*/
            if ( MPCooperative_field_0x40 != (unsigned int *)-1 ) /*0x5c424e*/
            {
              StringCSF = GetStringCSF(aTxtCoopUseSave, 0, g_Str_File_MPCoop_cpp, 1914); /*0x5c4261*/
              SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)StringCSF); /*0x5c426f*/
              IDA_LOBYTE(MPCooperative_field_0x40) = SendMessageA(DlgItem, 0x19Au, v12, v6); /*0x5c4279*/
              IDA_BYTE1(this->MPCooperative_field_0x48) = 1; /*0x5c4282*/
            }
          }
        }
      }
      else
      {
        v14 = GetStringCSF(aTxtSaveCampAva, 0, g_Str_File_MPCoop_cpp, 1920); /*0x5c429f*/
        IDA_LOBYTE(MPCooperative_field_0x40) = Dialog::ShowMessage(-1, (size_t)v14); /*0x5c42a7*/
      }
    }
  }
  return (char)MPCooperative_field_0x40; /*0x5c427f*/
}
}
// 0x5C42D0
namespace gamemd {
int MPCooperative::UpdateMovieScore()
{
  MPCooperative *v2; // eax
  MultiplayerGameMode *inited; // eax
  void *MPCooperative_field_0x40; // ecx
  int *v6; // ecx
  unsigned int v7; // eax
  int v8; // ebx
  int uniqueId; // ebp
  void **p_vtable2; // esi
  int v11; // esi
  void **v12; // esi
  MultiplayerGameMode *MPCooperative_field_0x50; // ecx
  int v14; // eax
  unsigned int *v15; // eax
  bool v16; // zf
  int v17; // eax
  char v18; // bl
  unsigned int v19[6]; // [esp-24h] [ebp-64h] BYREF
  int v20; // [esp-Ch] [ebp-4Ch]
  int v21; // [esp-8h] [ebp-48h]
  void ***v22; // [esp-4h] [ebp-44h]
  wchar_t *v23; // [esp+0h] [ebp-40h]
  unsigned int v24; // [esp+14h] [ebp-2Ch] BYREF
  int v25; // [esp+18h] [ebp-28h] BYREF
  int v26; // [esp+1Ch] [ebp-24h] BYREF
  int v27; // [esp+20h] [ebp-20h] BYREF
  int v28; // [esp+24h] [ebp-1Ch] BYREF
  void **v29; // [esp+28h] [ebp-18h] BYREF
  void *Block; // [esp+2Ch] [ebp-14h]
  char v31; // [esp+35h] [ebp-Bh]
  int v32; // [esp+38h] [ebp-8h]
  int v33; // [esp+3Ch] [ebp-4h]

  if ( !this->MPCooperative_field_0x50 ) /*0x5c42db*/
  {
    v2 = (MPCooperative *)RA2_OPNEW(8u); /*0x5c42e2*/
    if ( v2 ) /*0x5c42ec*/
      inited = (MultiplayerGameMode *)MPCooperative::initGame(v2); /*0x5c42f0*/
    else
      inited = 0; /*0x5c42f7*/
    this->MPCooperative_field_0x50 = inited; /*0x5c42f9*/
  }
  if ( !this->MPCooperative_field_0x40 ) /*0x5c42fc*/
    return 0; /*0x5c4301*/
  MPCooperative::applyVoteResult((MPCooperative *)&v29, 0, 0); /*0x5c4311*/
  v23 = (wchar_t *)&v28; /*0x5c431e*/
  v22 = &v29; /*0x5c431f*/
  MPCooperative_field_0x40 = this->MPCooperative_field_0x40; /*0x5c4320*/
  v29 = (void*)&DynamicVectorClass_MPlayerScoreType___vftable; /*0x5c4323*/
  v33 = 10; /*0x5c432b*/
  v32 = 0; /*0x5c4333*/
  MPCooperative::BuildScoreEntries((int)MPCooperative_field_0x40, (int)&v29, &v28); /*0x5c4337*/
  v6 = (int *)this->MPCooperative_field_0x40; /*0x5c433c*/
  v25 = 0; /*0x5c4344*/
  if ( (uint8_t)Movie::GetSectionID(v6, &v24) ) /*0x5c4348*/
  {
    Movie::GetSection((int)&g_DDrawSurfaceManager, v24, &v25); /*0x5c4369*/
    v7 = v24; /*0x5c436e*/
  }
  else
  {
    v7 = -1; /*0x5c4351*/
    v24 = -1; /*0x5c4354*/
  }
  v8 = -1; /*0x5c4372*/
  if ( v7 < 2 ) /*0x5c4377*/
  {
    v8 = 0; /*0x5c439b*/
  }
  else if ( v7 == 2 || v7 == 3 ) /*0x5c4386*/
  {
    v8 = 1; /*0x5c4394*/
  }
  else if ( v7 == 4 ) /*0x5c438b*/
  {
    v8 = 2; /*0x5c438d*/
  }
  MPCooperative::GetMovieScore((int *)this->MPCooperative_field_0x40, &v27); /*0x5c43a5*/
  Movie::GetState((int *)this->MPCooperative_field_0x40, &v26); /*0x5c43b2*/
  if ( v25 ) /*0x5c43bb*/
  {
    uniqueId = unk_A8B230[43].uniqueId; /*0x5c43c9*/
    if ( unk_A8B230[43].vtable2 != (void *)-1 ) /*0x5c43d8*/
    {
      p_vtable2 = &unk_A8B230[43].vtable2; /*0x5c43cf*/
      uniqueId += Timer::GetTicks() - (unsigned int)*p_vtable2; /*0x5c43e4*/
    }
    v11 = *(unsigned int *)this->MPCooperative_field_0x50; /*0x5c43f0*/
    v23 = *(wchar_t **)(v25 + 4); /*0x5c43f2*/
  }
  else
  {
    uniqueId = unk_A8B230[43].uniqueId; /*0x5c43fa*/
    if ( unk_A8B230[43].vtable2 != (void *)-1 ) /*0x5c440f*/
    {
      v12 = &unk_A8B230[43].vtable2; /*0x5c4400*/
      uniqueId += Timer::GetTicks() - (unsigned int)*v12; /*0x5c441b*/
    }
    MPCooperative_field_0x50 = this->MPCooperative_field_0x50; /*0x5c441d*/
    v23 = &g_TypeClass_DefaultString; /*0x5c4420*/
    v11 = *(unsigned int *)MPCooperative_field_0x50->__pad_0; /*0x5c4425*/
  }
  v14 = v27; /*0x5c442b*/
  v22 = (void ***)v8; /*0x5c4431*/
  IDA_LOBYTE(v14) = v26 < v27; /*0x5c4432*/
  v21 = v14; /*0x5c4435*/
  v20 = uniqueId; /*0x5c4436*/
  MPCooperative::processTurnEnd((MPCooperative *)v19, &v29); /*0x5c4441*/
  (*(void (__thiscall **)(MultiplayerGameMode *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, int, void ***, wchar_t *))(v11 + 4))( /*0x5c4449*/
    this->MPCooperative_field_0x50,
    v19[0],
    v19[1],
    v19[2],
    v19[3],
    v19[4],
    v19[5],
    v20,
    v21,
    v22,
    v23);
  if ( v32 ) /*0x5c4452*/
  {
    do /*0x5c449c*/
    {
      v15 = Block; /*0x5c4454*/
      if ( *(unsigned int *)Block ) /*0x5c4458*/
      {
        RA2_OPDEL(*(void **)Block); /*0x5c4461*/
        v15 = Block; /*0x5c4466*/
      }
      *v15 = 0; /*0x5c446d*/
      v16 = v32 == 0; /*0x5c4477*/
      if ( v32 > 0 ) /*0x5c4479*/
      {
        v17 = 0; /*0x5c447c*/
        v16 = v32-- == 1; /*0x5c447e*/
        if ( v32 > 0 ) /*0x5c4484*/
        {
          do /*0x5c4498*/
          {
            ++v17; /*0x5c448a*/
            *((unsigned int *)Block + v17 - 1) = *((unsigned int *)Block + v17); /*0x5c448e*/
          }
          while ( v17 < v32 ); /*0x5c4498*/
          v16 = v32 == 0; /*0x5c449a*/
        }
      }
    }
    while ( !v16 ); /*0x5c449c*/
  }
  v18 = byte_89E04C; /*0x5c44a2*/
  byte_89E04C = 0; /*0x5c44aa*/
  v29 = (void*)&VectorClass_MPlayerScoreType___vftable; /*0x5c44b1*/
  if ( Block ) /*0x5c44b9*/
  {
    if ( v31 ) /*0x5c44c1*/
      RA2_OPDEL(Block); /*0x5c44c4*/
  }
  return v18; /*0x5c4303*/
}
}
// 0x5C44E0
namespace gamemd {
void MPCooperative::ShowScoreScreen(int a2)
{
  int *MPCooperative_field_0x40; // ecx
  MPCooperative *v4; // eax
  unsigned int *started; // esi
  void *v6; // ecx
  int *v7; // ecx
  void (__thiscall **v8)(unsigned int *, int); // edi
  unsigned int *v9; // eax
  bool v10; // zf
  int v11; // eax
  unsigned int v12[6]; // [esp-14h] [ebp-58h] BYREF
  int v13; // [esp+4h] [ebp-40h]
  int v14; // [esp+8h] [ebp-3Ch]
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

  MPCooperative_field_0x40 = (int *)this->MPCooperative_field_0x40; /*0x5c44e7*/
  if ( MPCooperative_field_0x40 ) /*0x5c44ec*/
  {
    MPCooperative::GetMovieScore(MPCooperative_field_0x40, &v19); /*0x5c44f7*/
    Movie::GetState((int *)this->MPCooperative_field_0x40, &v18); /*0x5c4504*/
    if ( (unsigned char)a2 ) /*0x5c450f*/
    {
      if ( v18 >= v19 ) /*0x5c451f*/
      {
        v4 = (MPCooperative *)RA2_OPNEW(4u); /*0x5c4527*/
        if ( v4 ) /*0x5c4531*/
        {
          started = MPCooperative::startGame(v4); /*0x5c453e*/
          if ( started ) /*0x5c4542*/
          {
            MPCooperative::applyVoteResult((MPCooperative *)&v21, 0, 0); /*0x5c4550*/
            v16 = &v20; /*0x5c455d*/
            v15 = &v21; /*0x5c455e*/
            v6 = this->MPCooperative_field_0x40; /*0x5c455f*/
            v21 = (void*)&DynamicVectorClass_MPlayerScoreType___vftable; /*0x5c4562*/
            v25 = 10; /*0x5c456a*/
            v24 = 0; /*0x5c4572*/
            MPCooperative::BuildScoreEntries((int)v6, (int)&v21, &v20); /*0x5c457a*/
            v7 = (int *)this->MPCooperative_field_0x40; /*0x5c457f*/
            v17 = 0; /*0x5c4587*/
            if ( (uint8_t)Movie::GetSectionID(v7, &a2) ) /*0x5c458f*/
              Movie::GetSection((int)&g_DDrawSurfaceManager, a2, &v17); /*0x5c45b1*/
            else
              a2 = -1; /*0x5c4598*/
            v8 = (void (__thiscall **)(unsigned int *, int))*started; /*0x5c45bf*/
            v16 = *(int **)(v17 + 4); /*0x5c45ca*/
            v15 = (void ***)(a2 + 1); /*0x5c45cf*/
            v14 = stru_A8EB00.parent_gap[26]; /*0x5c45d0*/
            v13 = v20; /*0x5c45d1*/
            MPCooperative::processTurnEnd((MPCooperative *)v12, &v21); /*0x5c45dc*/
            ((void (__thiscall *)(unsigned int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, int, void ***, int *))v8[1])( /*0x5c45e3*/
              started,
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
            (*(void (__thiscall **)(unsigned int *, int))*started)(started, 1); /*0x5c45ec*/
            if ( v24 ) /*0x5c45f4*/
            {
              do /*0x5c463c*/
              {
                v9 = Block; /*0x5c45f6*/
                if ( *(unsigned int *)Block ) /*0x5c45fa*/
                {
                  RA2_OPDEL(*(void **)Block); /*0x5c4601*/
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
                      *((unsigned int *)Block + v11 - 1) = *((unsigned int *)Block + v11); /*0x5c462e*/
                    }
                    while ( v11 < v24 ); /*0x5c4638*/
                    v10 = v24 == 0; /*0x5c463a*/
                  }
                }
              }
              while ( !v10 ); /*0x5c463c*/
            }
            v21 = (void*)&VectorClass_MPlayerScoreType___vftable; /*0x5c4642*/
            if ( Block ) /*0x5c464c*/
            {
              if ( v23 ) /*0x5c4654*/
                RA2_OPDEL(Block); /*0x5c4657*/
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
  unsigned int *v8; // [esp+8h] [ebp-14h]
  int v9; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+10h] [ebp-Ch] BYREF
  unsigned char v11[8]; // [esp+14h] [ebp-8h] BYREF

  PtrVector::Destroy(&g_PlayerInfoCount); /*0x5c4cac*/
  v2 = 0; /*0x5c4cb1*/
  g_ScenarioLoadFlags = 0; /*0x5c4cb3*/
  result = this->q068; /*0x5c4cb9*/
  if ( result > 0 ) /*0x5c4cbe*/
  {
    do /*0x5c4e7b*/
    {
      v4 = 0; /*0x5c4ccb*/
      if ( HouseClass_Count > 0 ) /*0x5c4ccf*/
      {
        while ( _wcsicmp( /*0x5c4cf5*/
                  (const wchar_t *)(*(unsigned int *)&HouseClass_Array->gap0[4 * v4] + 90154),
                  *(const wchar_t **)(*(&this->q0083) + 4 * v2)) )
        {
          if ( ++v4 >= HouseClass_Count ) /*0x5c4cff*/
            goto LABEL_16; /*0x5c4cff*/
        }
        *(unsigned int *)(*(unsigned int *)(*(&this->q0083) + 4 * v2) + 111) = v4; /*0x5c4d11*/
        v5 = (char *)operator new(0x85u); /*0x5c4d14*/
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
        wcscpy((wchar_t *)v6, *(const wchar_t **)(*(&this->q0083) + 4 * v2)); /*0x5c4d44*/
        v6->q1EC = *(unsigned int *)(*(unsigned int *)(*(&this->q0083) + 4 * v2) + 123); /*0x5c4d55*/
        v6->q12C = *(unsigned int *)(*(unsigned int *)(*(&this->q0083) + 4 * v2) + 75); /*0x5c4d61*/
        *(unsigned int *)(v6 + 83) = *(unsigned int *)(*(unsigned int *)(*(&this->q0083) + 4 * v2) + 83); /*0x5c4d6f*/
        strcpy(v6 + 52, (const char *)(*(unsigned int *)(*(&this->q0083) + 4 * v2) + 52)); /*0x5c4d90*/
        *(unsigned int *)((char *)v8 + 79) = *(unsigned int *)(*(unsigned int *)(*(&this->q0083) + 4 * v2) + 79); /*0x5c4da6*/
        *(unsigned int *)((char *)v8 + 87) = *(unsigned int *)(*(unsigned int *)(*(&this->q0083) + 4 * v2) + 87); /*0x5c4db2*/
        *(unsigned int *)((char *)v8 + 107) = *(unsigned int *)(*(unsigned int *)(*(&this->q0083) + 4 * v2) + 107); /*0x5c4dbe*/
        *(unsigned int *)((char *)v8 + 115) = *(unsigned int *)(*(unsigned int *)(*(&this->q0083) + 4 * v2) + 115); /*0x5c4dca*/
        *(unsigned int *)((char *)v8 + 119) = *(unsigned int *)(*(unsigned int *)(*(&this->q0083) + 4 * v2) + 119); /*0x5c4dd6*/
        *(unsigned int *)((char *)v8 + 123) = *(unsigned int *)(*(unsigned int *)(*(&this->q0083) + 4 * v2) + 123); /*0x5c4deb*/
        Network::GetAddress((unsigned int *)(*(unsigned int *)(*(&this->q0083) + 4 * v2) + 40), &v10, (int)v11, &v9); /*0x5c4dfd*/
        NetworkID::Assign(v8 + 10, &v10, (int)v11, v9); /*0x5c4e14*/
        if ( Game_PlayerCount < dword_A8DA7C /*0x5c4e50*/
          || (byte_A8DA81 || !dword_A8DA7C)
          && dword_A8DA88 > 0
          && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_PlayerInfoCount + 8))(
               &g_PlayerInfoCount,
               dword_A8DA7C + dword_A8DA88,
               0) )
        {
          v7 = Game_PlayerCount++; /*0x5c4e5d*/
          *(unsigned int *)(Game_PlayerInfoArray + 4 * v7) = v8; /*0x5c4e6c*/
        }
        ++g_ScenarioLoadFlags; /*0x5c4e6f*/
      }
  LABEL_16:
      result = *(&this->q0086); /*0x5c4e75*/
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
  void *v3; // ecx
  void *v4; // esi
  MPCooperative *v6; // [esp+0h] [ebp-4h]

  v4 = v3; /*0x5c4f11*/
  MPCooperative_Cleanup(v6, a2); /*0x5c4f13*/
  if ( ((uint8_t)this & 1) != 0 ) /*0x5c4f1d*/
    RA2_OPDEL(v4); /*0x5c4f20*/
  return v4; /*0x5c4f2a*/
}
}
// 0x5C4F30
namespace gamemd {
unsigned int * MPCooperative::processTurnEnd(unsigned int * a2)
{
  void *v3; // eax
  void *v4; // eax
  void *MPCooperative_field_0x8; // ecx
  int v6; // eax

  this->MPCooperative_field_0x4 = 0; /*0x5c4f3d*/
  this->MPCooperative_field_0x8 = 0; /*0x5c4f40*/
  IDA_LOBYTE(this->MPCooperative_field_0xC) = 1; /*0x5c4f43*/
  IDA_BYTE1(this->MPCooperative_field_0xC) = 0; /*0x5c4f47*/
  this->MPCooperative_field_0x0 = (void*)&VectorClass_MPlayerScoreType___vftable; /*0x5c4f4a*/
  if ( this != (MPCooperative *)a2 ) /*0x5c4f50*/
  {
    MPCooperative::ddtor(); /*0x5c4f52*/
    v3 = (void *)a2[2]; /*0x5c4f58*/
    this->MPCooperative_field_0x8 = v3; /*0x5c4f5d*/
    if ( v3 ) /*0x5c4f60*/
    {
      v4 = (void *)RA2_OPNEW(4 * (unsigned int)v3); /*0x5c4f66*/
      this->MPCooperative_field_0x4 = v4; /*0x5c4f70*/
      if ( v4 ) /*0x5c4f73*/
      {
        MPCooperative_field_0x8 = this->MPCooperative_field_0x8; /*0x5c4f75*/
        v6 = 0; /*0x5c4f78*/
        IDA_BYTE1(this->MPCooperative_field_0xC) = 1; /*0x5c4f7c*/
        if ( (int)MPCooperative_field_0x8 > 0 ) /*0x5c4f80*/
        {
          do /*0x5c4f94*/
          {
            *((unsigned int *)this->MPCooperative_field_0x4 + v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x5c4f8b*/
            ++v6; /*0x5c4f91*/
          }
          while ( v6 < (int)this->MPCooperative_field_0x8 ); /*0x5c4f94*/
        }
      }
    }
    else
    {
      this->MPCooperative_field_0x4 = 0; /*0x5c4f98*/
      IDA_BYTE1(this->MPCooperative_field_0xC) = 0; /*0x5c4f9b*/
    }
  }
  this->MPCooperative_field_0x10 = (void *)a2[4]; /*0x5c4fa1*/
  this->MPCooperative_field_0x14 = a2[5]; /*0x5c4fa7*/
  this->MPCooperative_field_0x0 = (void*)&DynamicVectorClass_MPlayerScoreType___vftable; /*0x5c4faa*/
  return &this->MPCooperative_field_0x0; /*0x5c4fb2*/
}
}
// 0x696F30
namespace gamemd {
int MPCooperative::finalizeSession()
{
  int result; // eax

  result = -2; /*0x696f33*/
  if ( *(void **)((char *)&this->MPCooperative_field_0x54 + 3) != (void *)-2 /*0x696f40*/
    || *(MultiplayerGameMode **)((char *)&this->MPCooperative_field_0x50 + 3) != (MultiplayerGameMode *)-1 )
  {
    return *(int *)((char *)&this->MPCooperative_field_0x50 + 3); /*0x696f42*/
  }
  return result; /*0x696f45*/
}
}
// 0x46D330
namespace gamemd {
unsigned int * MPCooperative::initGame()
{
  this->MPCooperative_field_0x0 = (void*)&CampaignScoreClass_vftable; /*0x46d334*/
  this->MPCooperative_field_0x4 = 0; /*0x46d33a*/
  dword_89E050 = 0; /*0x46d33d*/
  stru_81AF8C.VoxelCaches[6] = -1; /*0x46d343*/
  return &this->MPCooperative_field_0x0; /*0x46d34d*/
}
} // namespace gamemd

// 0x470C00
namespace gamemd {
unsigned int * MPCooperative::startGame()
{
  this->MPCooperative_field_0x0 = (void*)&CampaignEndScoreClass_vftable; /*0x470c04*/
  dword_89E008 = -1; /*0x470c0a*/
  dword_89E020 = 0; /*0x470c14*/
  dword_89DFD4 = 0; /*0x470c1a*/
  return &this->MPCooperative_field_0x0; /*0x470c20*/
}
} // namespace gamemd

// 0x49BCA0
namespace gamemd {
char MPCooperative::GetMovieScore(CampaignEndScoreClass * aP1)
{
  if ( !this->q06C ) /*0x49bca0*/
    return 0; /*0x49bca7*/
  *aP1 = this->q100; /*0x49bcb3*/
  return 1; /*0x49bca9*/
}
} // namespace gamemd

// 0x5C1980
namespace gamemd {
int sub_5C1980()
{
  int result; // eax
  int v2; // ebp
  int i; // ebx
  int v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h] BYREF

  result = -1; /*0x5c198a*/
  v2 = 0; /*0x5c198d*/
  v4 = -1; /*0x5c1991*/
  if ( g_DDrawSurfaceManager.scenario[13] > 0 ) /*0x5c1995*/
  {
    do /*0x5c1a00*/
    {
      Movie::GetSection((int)&g_DDrawSurfaceManager, v2, &v5); /*0x5c19a5*/
      for ( i = 0; i < 780; i += 260 ) /*0x5c19aa*/
      {
        if ( *(unsigned int *)&stru_A8B250.__pad_0[4] ) /*0x5c19b3*/
        {
          if ( !_strnicmp( /*0x5c19da*/
                  (const char *)(*(unsigned int *)(unk_A8B8CC + 4 * *(unsigned int *)&stru_A8B250.__pad_0[4]) + 88),
                  (const char *)(*(unsigned int *)(v5 + 12) + i),
                  strlen((const char *)(*(unsigned int *)(v5 + 12) + i))) )
            v4 = v2; /*0x5c19e6*/
        }
      }
      ++v2; /*0x5c19fd*/
    }
    while ( v2 < g_DDrawSurfaceManager.scenario[13] ); /*0x5c1a00*/
    return v4; /*0x5c1a02*/
  }
  return result; /*0x5c1a09*/
}
} // namespace gamemd

// 0x5C1D80
namespace gamemd {
char MPCooperative::Write(int a2)
{
  char *MPCooperative_field_0x40; // ecx

  if ( dword_A8DA84 == 2 ) /*0x5c1d8b*/
  {
    MPCooperative_field_0x40 = (char *)this->MPCooperative_field_0x40; /*0x5c1d8d*/
    if ( MPCooperative_field_0x40 ) /*0x5c1d92*/
      String::AssignWideToChar(MPCooperative_field_0x40, (char *)*dword_A8DA78, (char *)dword_A8DA78[1]); /*0x5c1da0*/
  }
  return ScenarioClass::MissionStubReturnZero2((int *)a2); /*0x5c1db1*/
}
} // namespace gamemd

// 0x5C21A0
namespace gamemd {
HWND MPCooperative::CheckReady(HWND hDlg)
{
  int result; // eax

  result = (int)GetDlgItem((HWND)hDlg, 1842); /*0x5c21aa*/
  if ( result ) /*0x5c21b2*/
    return PostMessageA((HWND)result, 0x405u, 1u, stru_A8EB00.parent_gap[26]); /*0x5c21c3*/
  return result; /*0x5c21c9*/
}
} // namespace gamemd

// 0x5C2640
namespace gamemd {
void MPCooperative::Clone(HWND hDlg)
{
  int v3; // edi
  ObjectClass *i; // esi
  int ResourceID2CSF; // eax

  if ( hDlg ) /*0x5c264a*/
  {
    v3 = dword_A8DA84; /*0x5c264e*/
    for ( i = 0; (int)i < v3; i = (ObjectClass *)((char *)i + 1) ) /*0x5c2658*/
    {
      ResourceID2CSF = GetResourceID2CSF(i); /*0x5c265c*/
      MovieClass::ReadConfig(hDlg, ResourceID2CSF); /*0x5c2665*/
    }
    CampaignCoop::Setup(hDlg, 1); /*0x5c2674*/
  }
}
} // namespace gamemd

// 0x5C2CB0
namespace gamemd {
char MPCooperative::ValidateSettings()
{
  HWND GameUI; // eax

  GameUI = (HWND)Dialog::FindGameUI(); /*0x5c2cb3*/
  if ( GameUI || (GameUI = (HWND)Dialog::FindByHandle((Dialog *)0xBC6)) != 0 ) /*0x5c2cc8*/
    CampaignCoop::Setup(GameUI, 1); /*0x5c2ccf*/
  return 1; /*0x5c2cd6*/
}
} // namespace gamemd

// 0x5C2CE0
namespace gamemd {
int MPCooperative::SaveSettings(HWND hWnd, int a3)
{
  return ListBox::FillPlayers(hWnd, a3); /*0x5c2cef*/
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
  SkirmishDialog *v3; // esi
  int result; // eax

  GameUI = (HWND)Dialog::FindGameUI(); /*0x5c3f34*/
  v3 = (SkirmishDialog *)GameUI; /*0x5c3f39*/
  if ( GameUI ) /*0x5c3f3d*/
  {
    CampaignCoop::Setup(GameUI, 0); /*0x5c3f44*/
    SkirmishDialog::FillComboBoxes(v3); /*0x5c3f4b*/
  }
  for ( result = 0; result < dword_A8DA84; ++result ) /*0x5c3f5c*/
    *(unsigned int *)(dword_A8DA78[result] + 107) = result; /*0x5c3f67*/
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
  int *MPCooperative_field_0x40; // ecx
  int v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h] BYREF
  int v7; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x5c4677*/
  MPCooperative_field_0x40 = (int *)this->MPCooperative_field_0x40; /*0x5c4679*/
  if ( !MPCooperative_field_0x40 ) /*0x5c467e*/
    return 0; /*0x5c4681*/
  MPCooperative::GetMovieScore(MPCooperative_field_0x40, &v5); /*0x5c468d*/
  Movie::GetState((int *)this->MPCooperative_field_0x40, &v6); /*0x5c469a*/
  if ( v5 == v6 ) /*0x5c46a9*/
  {
    Movie::GetSectionID((int *)this->MPCooperative_field_0x40, &v7); /*0x5c46b3*/
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
  if ( this->MPCooperative_field_0x40 ) /*0x5c4e9a*/
  {
    if ( Block ) /*0x5c4ea7*/
    {
      if ( IDA_HIBYTE(a5) ) /*0x5c4eaf*/
        RA2_OPDEL(Block); /*0x5c4eb2*/
    }
    return 1; /*0x5c4eba*/
  }
  else
  {
    if ( Block && IDA_HIBYTE(a5) ) /*0x5c4ec9*/
      RA2_OPDEL(Block); /*0x5c4ecc*/
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

  v3 = (void *)this->q004; /*0x5c4fc3*/
  if ( v3 && this->IsAllocated ) /*0x5c4fd0*/
  {
    RA2_OPDEL(v3); /*0x5c4fd8*/
    this->q004 = 0; /*0x5c4fe0*/
  }
  this->IsAllocated = 0; /*0x5c4feb*/
  this->q008 = 0; /*0x5c4ff1*/
  if ( (a2 & 1) != 0 ) /*0x5c4ff8*/
    RA2_OPDEL(); /*0x5c4ffb*/
  return this; /*0x5c5005*/
}
} // namespace gamemd

// 0x5C5010
namespace gamemd {
void MPCooperative::loadGameState()
{
  void *v2; // eax

  v2 = this->Items; /*0x5c5016*/
  this->q010 = 0; /*0x5c5019*/
  if ( v2 && this->IsAllocated ) /*0x5c5020*/
  {
    RA2_OPDEL(v2); /*0x5c5026*/
    this->Items = 0; /*0x5c502e*/
  }
  this->IsAllocated = 0; /*0x5c5031*/
  this->q008 = 0; /*0x5c5034*/
}
} // namespace gamemd

// 0x5C5040
namespace gamemd {
unsigned int MPCooperative::syncPlayers(int a2)
{
  if ( this->IsInitialized ) /*0x5c5040*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x5c5055*/
  else
    return 0; /*0x5c5047*/
}
} // namespace gamemd

// 0x5C5060
namespace gamemd {
int MPCooperative::dispatchEvent(int a2)
{
  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5c506a*/
}
} // namespace gamemd

// 0x5C50D0
namespace gamemd {
void MPCooperative::processPlayerInput()
{
  void *v2; // eax

  v2 = this->Items; /*0x5c50d6*/
  this->q010 = 0; /*0x5c50d9*/
  if ( v2 && this->IsAllocated ) /*0x5c50e0*/
  {
    RA2_OPDEL(v2); /*0x5c50e6*/
    *(unsigned int *)&this->q010 = 0; /*0x5c50ee*/
  }
  this->IsAllocated = 0; /*0x5c50f1*/
  this->Capacity = 0; /*0x5c50f4*/
}
} // namespace gamemd

// 0x5C5100
namespace gamemd {
unsigned int MPCooperative::updateGameClock(int a2)
{
  if ( this->IsInitialized ) /*0x5c5100*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x5c5115*/
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
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = this->q008; /*0x5c5132*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x5c513d*/
  {
    v3 = 0; /*0x5c513f*/
    if ( v2 <= 0 ) /*0x5c5143*/
      return 1; /*0x5c5163*/
    v4 = (unsigned int *)this->Items; /*0x5c5145*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5c514b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5c5154*/
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
  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5c517c*/
  {
    this->IsInitialized = 0; /*0x5c5186*/
    if ( a3 ) /*0x5c518c*/
      v4 = a3; /*0x5c51a2*/
    else
      v4 = operator new(4 * a2); /*0x5c519e*/
    this->IsInitialized = 1; /*0x5c51a6*/
    if ( v4 ) /*0x5c51aa*/
    {
      if ( this->q004 ) /*0x5c51b5*/
      {
        v6 = this->Capacity; /*0x5c51bc*/
        if ( a2 < v6 ) /*0x5c51c1*/
          v6 = a2; /*0x5c51c3*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(this->Items + 4 * i - 4) ) /*0x5c51c9*/
          ++i; /*0x5c51ce*/
        if ( this->IsAllocated ) /*0x5c51db*/
        {
          RA2_OPDEL(this->q004); /*0x5c51e6*/
          this->Items = 0; /*0x5c51ee*/
        }
      }
      this->Items = v4; /*0x5c51f7*/
      this->Capacity = a2; /*0x5c51ff*/
      this->IsAllocated = a3 == 0; /*0x5c5202*/
      return 1; /*0x5c5208*/
    }
    else
    {
      return 0; /*0x5c51af*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(((unsigned int)(this->Items2))))(this); /*0x5c5212*/
    return 1; /*0x5c5218*/
  }
}
} // namespace gamemd

// 0x5C5220
namespace gamemd {
void MPCooperative::ddtor()
{
  if ( this->Items && this->IsAllocated ) /*0x5c522d*/
  {
    RA2_OPDEL(this->Items); /*0x5c5233*/
    this->Items = 0; /*0x5c523b*/
  }
  this->IsAllocated = 0; /*0x5c523e*/
  this->Capacity = 0; /*0x5c5241*/
}
} // namespace gamemd

// 0x5C5250
namespace gamemd {
int MPCooperative::checkTimeout(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !this->IsInitialized ) /*0x5c5250*/
    return 0; /*0x5c5258*/
  v3 = this->Capacity; /*0x5c525e*/
  result = 0; /*0x5c5261*/
  if ( v3 <= 0 ) /*0x5c5265*/
    return -1; /*0x5c527c*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x5c526b*/
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
  if ( this->IsInitialized ) /*0x5c5290*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x5c52a5*/
  else
    return 0; /*0x5c5297*/
}
} // namespace gamemd

// 0x5C52B0
namespace gamemd {
char MPCooperative::migrateHost(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5c52bc*/
  {
    this->IsInitialized = 0; /*0x5c52c2*/
    if ( a3 ) /*0x5c52c8*/
      v4 = a3; /*0x5c52de*/
    else
      v4 = operator new(4 * a2); /*0x5c52da*/
    this->IsInitialized = 1; /*0x5c52e2*/
    if ( !v4 ) /*0x5c52e6*/
      return 0; /*0x5c535a*/
    if ( this->q004 ) /*0x5c52e8*/
    {
      v5 = this->q008; /*0x5c52ef*/
      if ( a2 < v5 ) /*0x5c52f4*/
        v5 = a2; /*0x5c52f6*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(this->Items + 4 * i - 4) ) /*0x5c52fc*/
        ++i; /*0x5c5301*/
      if ( this->IsAllocated ) /*0x5c530e*/
      {
        RA2_OPDEL(this->q004); /*0x5c5319*/
        this->Items = 0; /*0x5c5321*/
      }
    }
    this->Items = v4; /*0x5c532a*/
    this->q008 = a2; /*0x5c5332*/
    this->IsAllocated = a3 == 0; /*0x5c5335*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(((unsigned int)(this->Items2))))(this); /*0x5c533e*/
  }
  v7 = this->q008; /*0x5c5341*/
  if ( v7 < this->q010 ) /*0x5c5349*/
    this->q010 = v7; /*0x5c534b*/
  return 1; /*0x5c534e*/
}
} // namespace gamemd

// 0x5C5360
namespace gamemd {
int MPCooperative::validatePlayerAction(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = this->q010; /*0x5c5360*/
  result = 0; /*0x5c5363*/
  if ( v2 <= 0 ) /*0x5c5368*/
    return -1; /*0x5c537f*/
  for ( i = (unsigned int *)this->Items; *i != *a2; ++i ) /*0x5c536e*/
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
  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5c53dc*/
  {
    this->IsInitialized = 0; /*0x5c53e6*/
    if ( a3 ) /*0x5c53ec*/
      v4 = a3; /*0x5c5402*/
    else
      v4 = operator new(4 * a2); /*0x5c53fe*/
    this->IsInitialized = 1; /*0x5c5406*/
    if ( v4 ) /*0x5c540a*/
    {
      if ( this->q004 ) /*0x5c5415*/
      {
        v6 = this->Capacity; /*0x5c541c*/
        if ( a2 < v6 ) /*0x5c5421*/
          v6 = a2; /*0x5c5423*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(this->Items + 4 * i - 4) ) /*0x5c5429*/
          ++i; /*0x5c542e*/
        if ( this->IsAllocated ) /*0x5c543b*/
        {
          RA2_OPDEL(this->q004); /*0x5c5446*/
          this->Items = 0; /*0x5c544e*/
        }
      }
      this->Items = v4; /*0x5c5457*/
      this->Capacity = a2; /*0x5c545f*/
      this->IsAllocated = a3 == 0; /*0x5c5462*/
      return 1; /*0x5c5468*/
    }
    else
    {
      return 0; /*0x5c540f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(((unsigned int)(this->Items2))))(this); /*0x5c5472*/
    return 1; /*0x5c5478*/
  }
}
} // namespace gamemd

// 0x5C5480
namespace gamemd {
void MPCooperative::updateScoreBoard()
{
  if ( this->Items && this->IsAllocated ) /*0x5c548d*/
  {
    RA2_OPDEL(this->Items); /*0x5c5493*/
    this->Items = 0; /*0x5c549b*/
  }
  this->IsAllocated = 0; /*0x5c549e*/
  this->Capacity = 0; /*0x5c54a1*/
}
} // namespace gamemd

// 0x5C54B0
namespace gamemd {
int MPCooperative::processAITurn(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !this->IsInitialized ) /*0x5c54b0*/
    return 0; /*0x5c54b8*/
  v3 = this->Capacity; /*0x5c54be*/
  result = 0; /*0x5c54c1*/
  if ( v3 <= 0 ) /*0x5c54c5*/
    return -1; /*0x5c54dc*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x5c54cb*/
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
  if ( this->IsInitialized ) /*0x5c54f0*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x5c5505*/
  else
    return 0; /*0x5c54f7*/
}
} // namespace gamemd

// 0x5C5770
namespace gamemd {
char MPCooperative::broadcastMessage(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5c577c*/
  {
    this->IsInitialized = 0; /*0x5c5782*/
    if ( a3 ) /*0x5c5788*/
      v4 = a3; /*0x5c579e*/
    else
      v4 = operator new(4 * a2); /*0x5c579a*/
    this->IsInitialized = 1; /*0x5c57a2*/
    if ( !v4 ) /*0x5c57a6*/
      return 0; /*0x5c581a*/
    if ( this->q004 ) /*0x5c57a8*/
    {
      v5 = this->q008; /*0x5c57af*/
      if ( a2 < v5 ) /*0x5c57b4*/
        v5 = a2; /*0x5c57b6*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(this->Items + 4 * i - 4) ) /*0x5c57bc*/
        ++i; /*0x5c57c1*/
      if ( this->IsAllocated ) /*0x5c57ce*/
      {
        RA2_OPDEL(this->q004); /*0x5c57d9*/
        this->Items = 0; /*0x5c57e1*/
      }
    }
    this->Items = v4; /*0x5c57ea*/
    this->q008 = a2; /*0x5c57f2*/
    this->IsAllocated = a3 == 0; /*0x5c57f5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(((unsigned int)(this->Items2))))(this); /*0x5c57fe*/
  }
  v7 = this->q008; /*0x5c5801*/
  if ( v7 < this->q010 ) /*0x5c5809*/
    this->q010 = v7; /*0x5c580b*/
  return 1; /*0x5c580e*/
}
} // namespace gamemd

// 0x5C5820
namespace gamemd {
int MPCooperative::handlePlayerReady(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = this->q010; /*0x5c5820*/
  result = 0; /*0x5c5823*/
  if ( v2 <= 0 ) /*0x5c5828*/
    return -1; /*0x5c583f*/
  for ( i = (unsigned int *)this->Items; *i != *a2; ++i ) /*0x5c582e*/
  {
    if ( ++result >= v2 ) /*0x5c583d*/
      return -1; /*0x5c583d*/
  }
  return result; /*0x5c5842*/
}
}
// 0x5C5850
namespace gamemd {
VectorClass_flat * MPCooperative::verifyGameIntegrity(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x5c5853*/
  if ( v3 && this->IsAllocated ) /*0x5c5860*/
  {
    RA2_OPDEL(v3); /*0x5c5868*/
    this->Items = 0; /*0x5c5870*/
  }
  this->IsAllocated = 0; /*0x5c587b*/
  this->q008 = 0; /*0x5c5881*/
  if ( (a2 & 1) != 0 ) /*0x5c5888*/
    RA2_OPDEL(); /*0x5c588b*/
  return this; /*0x5c5895*/
}
} // namespace gamemd

// 0x5C58A0
namespace gamemd {
VectorClass_flat * MPCooperative::processVote(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x5c58a3*/
  if ( v3 && this->IsAllocated ) /*0x5c58b0*/
  {
    RA2_OPDEL(v3); /*0x5c58b8*/
    this->Items = 0; /*0x5c58c0*/
  }
  this->IsAllocated = 0; /*0x5c58cb*/
  this->Capacity = 0; /*0x5c58d1*/
  if ( (a2 & 1) != 0 ) /*0x5c58d8*/
    RA2_OPDEL(); /*0x5c58db*/
  return this; /*0x5c58e5*/
}
} // namespace gamemd

// 0x5C5990
namespace gamemd {
DynamicVector * MPCooperative::tallyVotes(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x5c5993*/
  if ( v3 && this->IsAllocated ) /*0x5c59a0*/
  {
    RA2_OPDEL(v3); /*0x5c59a8*/
    this->Items = 0; /*0x5c59b0*/
  }
  this->IsAllocated = 0; /*0x5c59bb*/
  this->Capacity = 0; /*0x5c59c1*/
  if ( (a2 & 1) != 0 ) /*0x5c59c8*/
    RA2_OPDEL(); /*0x5c59cb*/
  return this; /*0x5c59d5*/
}
} // namespace gamemd

// 0x5C59E0
namespace gamemd {
unsigned int * MPCooperative::applyVoteResult(int a2, int a3)
{
  this->MPCooperative_field_0x4 = 0; /*0x5c59eb*/
  this->MPCooperative_field_0x8 = (void *)a2; /*0x5c59ee*/
  IDA_LOBYTE(this->MPCooperative_field_0xC) = 1; /*0x5c59f1*/
  IDA_BYTE1(this->MPCooperative_field_0xC) = 0; /*0x5c59f5*/
  this->MPCooperative_field_0x0 = (void*)&VectorClass_MPlayerScoreType___vftable; /*0x5c59f8*/
  if ( a2 ) /*0x5c59fe*/
  {
    if ( a3 ) /*0x5c5a06*/
    {
      this->MPCooperative_field_0x4 = (void *)a3; /*0x5c5a08*/
      return &this->MPCooperative_field_0x0; /*0x5c5a0e*/
    }
    this->MPCooperative_field_0x4 = (void *)RA2_OPNEW(4 * a2); /*0x5c5a1d*/
    IDA_BYTE1(this->MPCooperative_field_0xC) = 1; /*0x5c5a20*/
  }
  return &this->MPCooperative_field_0x0; /*0x5c5a0d*/
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
