// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CoopCampaignVector_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
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
#include "e4/classes/MSFrameAnim_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/GameLoop_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/MSVQAnim_e4.hpp"
#include "e4/classes/INISectionList_e4.hpp"
#include "e4/classes/MissionClass_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/SideClass_e4.hpp"
#include "e4/classes/Campaign_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/MovieClass_e4.hpp"
#include "e4/classes/Multiplayer_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { char sub_49E740(int *a2); }  // w18j2 raw 0x0049E740
namespace gamemd { char LoadCoopCampaignSave(char *Destination); }  // w18j2 raw 0x0049D390
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int DecodeCampaignPlayerName(int p0, int p1, void* p2, int p3, int16_t p4, int p5, int p6, char* p7, char* p8);  // x4:signals@0x49ccf0
int LoadCampaignCoopSave(char *p_this);  // x4:ida@0x49c0d0
int SerializeCampaignOptions(char *p_this);  // x4:ida@0x49d680
} // namespace gamemd

// 0x49B660
namespace gamemd {  // G42.18 ns repair
int MPCooperative::processTurn(char * a2, char * a3)
{
  if ( a2 ) /*0x49b66e*/
    strcpy(ToWideStringChar((IUnknown *)(a2))); /*0x49b68b*/
  else
    *(unsigned char *)this = 0; /*0x49b696*/
  if ( a3 ) /*0x49b69f*/
    strcpythis->u32_70, ToWideStringChar((IUnknown *)(a3))); /*0x49b6bf*/
  else
    this->u32_1C = 0; /*0x49b6ca*/
  this->ptr_50 = (gamemd::MultiplayerGameMode *)(-2); /*0x49b6d3*/
  this->u32_30 = -2; /*0x49b6d6*/
  this->q018 = -2; /*0x49b6d9*/
  this->IsAllocated = -2; /*0x49b6dc*/
  this->u32_3C = 0; /*0x49b6e2*/
  this->__pad_011 = -1; /*0x49b6e5*/
  this->u32_38 = -1; /*0x49b6e8*/
  this->u32_6C = 0; /*0x49b6eb*/
  this->u32_40 = 0; /*0x49b6ee*/
  this->IsInitialized = 0; /*0x49b6f1*/
  this->u32_4C = 0; /*0x49b6f4*/
  this->ptr_50 = 0; /*0x49b6f7*/
  this->__pad_054 = 0; /*0x49b6fa*/
  this->Count = 0; /*0x49b6fd*/
  this->u32_5C = 0; /*0x49b700*/
  this->__pad_01A = 0; /*0x49b703*/
  this->u32_60 = 0; /*0x49b706*/
  this->u32_64 = 0; /*0x49b709*/
  return (int)(this); /*0x49b6d2*/
}
}  // G42.18 ns repair
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
  unsigned int *v15; // edx
  wchar_t *v16; // [esp+4h] [ebp-4h]
  wchar_t *v17; // [esp+Ch] [ebp+4h]

  if ( !this->u32_6C ) /*0x49bce4*/
    return 0; /*0x49bceb*/
  while ( *(unsigned int *)(a2 + 16) ) /*0x49bcf9*/
  {
    __3_YAXPAX_Z(**(void ***)(a2 + 4)); /*0x49bd06*/
    v6 = *(unsigned int *)(a2 + 16); /*0x49bd0b*/
    if ( v6 > 0 ) /*0x49bd13*/
    {
      v7 = v6 - 1; /*0x49bd15*/
      v8 = 0; /*0x49bd18*/
      for ( *(unsigned int *)(a2 + 16) = v7; /*0x49bd1f*/
            v8 < *(unsigned int *)(a2 + 16);
            *(unsigned int *)(*(unsigned int *)(a2 + 4) + 4 * v8 - 4) = *(unsigned int *)(*(unsigned int *)(a2 + 4) + 4 * v8) )
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
    v11->u32_40 = *(unsigned int *)((char *)this + 4 * i + 72); /*0x49bdc2*/
    v11->u32_50 = *(unsigned int *)((char *)this + 4 * i + 80); /*0x49bdc9*/
    v11->u32_30 = *(unsigned int *)((char *)this + 4 * i + 88); /*0x49bdd0*/
    v11->u32_2C = this->u32_38; /*0x49bdd6*/
    v11->u32_60 = *(unsigned int *)((char *)this + 4 * i + 96); /*0x49bddd*/
    v12 = *(unsigned int *)(a2 + 8); /*0x49bde0*/
    if ( *(unsigned int *)(a2 + 16) >= v12 ) /*0x49bde6*/
    {
      if ( !*(unsigned char *)(a2 + 13) && v12 ) /*0x49bdf1*/
        continue; /*0x49bdf1*/
      v13 = *(unsigned int *)(a2 + 20); /*0x49bdf3*/
      if ( v13 <= 0 || !(*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)a2 + 8))(a2, v12 + v13, 0) ) /*0x49be03*/
        continue; /*0x49be03*/
    }
    v14 = *(unsigned int *)(a2 + 16); /*0x49be0a*/
    v15 = *(unsigned int **)(a2 + 4); /*0x49be0d*/
    *(unsigned int *)(a2 + 16) = v14 + 1; /*0x49be13*/
    v15[v14] = (unsigned int)v11; /*0x49be16*/
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

  v1 = (char *)this; /*0x49be49*/
  if ( !((this->MPCooperative_field_0x0) & 0xFF) ) /*0x49be4d*/
    return 1; /*0x49be4d*/
  v2 = &this->u32_1C; /*0x49be58*/
  if ( !this->u32_1C ) /*0x49be55*/
    return 1; /*0x49c0c5*/
  CCFileClass::Construct(&v19, g_Str_File_coopsave_ini); /*0x49be70*/
  v15.headNode[0] = 0; /*0x49be79*/
  v15.headNode[1] = 0; /*0x49be7d*/
  INISectionList::Constructor((INISectionList *)&v15.headNode[2]); /*0x49be81*/
  Node::Init((Node *)&v15.needsSave_flag); /*0x49be8a*/
  v15.INIClass_field_3C = 0; /*0x49be9d*/
  v15.ownsFile = 0; /*0x49bea1*/
  /* X11: vtable install elided (X67 star-deref, RHS CCINIClass_Vtable) */  /*0x49bea5*/
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
      v7 = v1->MultiplayerGameMode_1; /*0x49bf23*/
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
  g_IsWindowed[v9] = 0; /*0x49bfd5*/
  strcat(v22, g_IsWindowed); /*0x49bff9*/
  CCFileClass::Construct3((int)&v16); /*0x49c006*/
  (*(void (**)(CCFileClass *, char *))(*(unsigned int *)v16.__tail_0 + 8))(&v16, g_Str_File_coopsave_ini); /*0x49c018*/
  (*(void (**)(CCFileClass *, int))(*(unsigned int *)v16.__tail_0 + 28))(&v16, 2); /*0x49c025*/
  INIClass::ClearSection((int *)v15.__pad_0, (int)v22, 0); /*0x49c035*/
  INIClass::WriteDigest((INIClass *)&v15, (int)&v16, 0); /*0x49c044*/
  CCFileClass::Reset(&v16); /*0x49c04d*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x49c05e*/
  v18 = 0; /*0x49c062*/
  Vector::Clear((int)v17); /*0x49c069*/
  *(unsigned int *)v16.__tail_0 = &off_7E1668; /*0x49c077*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v16); /*0x49c07b*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v15); /*0x49c084*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x49c090*/
  v21 = 0; /*0x49c097*/
  Vector::Clear((int)v20); /*0x49c09e*/
  *(unsigned int *)v19.__tail_0 = &off_7E1668; /*0x49c0aa*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v19); /*0x49c0b1*/
  return 1; /*0x49c0b7*/

}
}
// 0x49CC50
namespace gamemd {
void MPCooperative::MPCooperative_validateMove( int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59)
{


  if ( a2 < 0 || a2 >= (int)this->u32_40 ) /*0x49cc5f*/
    return 0; /*0x49ccde*/
  char *MPCooperative_field_0x48; // esi
  MPCooperative_field_0x48 = (char *)this->q048; /*0x49cc66*/
  this->u32_38 = (unsigned int)((void *)a2); /*0x49cc69*/
  this->q048 = (int)(&MPCooperative_field_0x48[a20]); /*0x49cc75*/
  this->u32_4C = (unsigned int)((char *)this->u32_4C + a48); /*0x49cc81*/
  this->ptr_50 = (MultiplayerGameMode *)((char *)this->ptr_50 + a24); /*0x49cc90*/
  this->__pad_054 = (unsigned char)((char *)this->__pad_054 + a52); /*0x49cc9c*/
  this->q058 = (char *)this->q058 + a16; /*0x49ccab*/
  this->u32_5C = (unsigned int)((char *)this->u32_5C + a44); /*0x49ccb7*/
  this->u32_60 = (unsigned int)((char *)this->u32_60 + a28); /*0x49ccc6*/
  this->u32_64 = (unsigned int)((char *)this->u32_64 + a56); /*0x49ccd2*/
  this->q068 = (int)((void *)a3); /*0x49ccd5*/
  return 1; /*0x49ccdb*/

}
}
// 0x49D120
namespace gamemd {
int MPCooperative::ReadCoopSaveINI()
{

  char v8; // al
  unsigned char v17[12]; // [esp+64h] [ebp-D0h] BYREF
  int v18; // [esp+70h] [ebp-C4h]

  char *v1; // edi
  v1 = (char *)(this); /*0x49d129*/
  if ( !*this ) /*0x49d12b*/
    return 0; /*0x49d12b*/
  char *v2 = &this->u32_1C; // ebx /*0x49d137*/
  if ( !this->u32_1C ) /*0x49d134*/
    return 0; /*0x49d13c*/
  unsigned int v16[22]; // [esp+Ch] [ebp-128h] BYREF
  CCFileClass::Construct(v16, g_Str_File_coopsave_ini); /*0x49d14b*/
  void *v19[3]; // [esp+78h] [ebp-BCh] BYREF
  v19[1] = 0; /*0x49d159*/
  v19[2] = 0; /*0x49d15d*/
  unsigned int v20[7]; // [esp+84h] [ebp-B0h] BYREF
  (v20)->Constructor(); /*0x49d164*/
  unsigned int v21[6]; // [esp+A0h] [ebp-94h] BYREF
  Node::Init(v21); /*0x49d170*/
  v21[5] = 0; /*0x49d183*/
  char v22; // [esp+B8h] [ebp-7Ch]
  v22 = 0; /*0x49d18a*/
  v19[0] = &CCINIClass_Vtable; /*0x49d192*/
  if ( !CCINIClass::Load(v19, (int)v16, 0, 0) ) /*0x49d19d*/
  {
    CCFileClass::Reset(v16); /*0x49d1aa*/
    (v19)->DestroyHashTableINIClass(); /*0x49d1b3*/
    v16[0] = (unsigned int)(&vt_CCFileClass); /*0x49d1bc*/
    v18 = 0; /*0x49d1c4*/
    Vector::Clear((int)v17); /*0x49d1c8*/
    v16[0] = (unsigned int)(&off_7E1668); /*0x49d1d1*/
    (v16)->Dtor(); /*0x49d1d9*/
    return 0; /*0x49d1e9*/
  }
  CCFileClass::Reset(v16); /*0x49d1ef*/
  int v4 = 0; // esi /*0x49d1f6*/
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
        int v5 = v4 + 1; // esi /*0x49d21b*/
        int v6 = *v1 >> 4; // eax /*0x49d21f*/
        char v7; // al
        if ( (unsigned int)v6 >= 0x10 )
          v7 = 0; /*0x49d236*/
        else
          v7 = v6 >= 10 ? v6 + 55 : v6 + 48;
        g_IsWindowed[v5] = v7; /*0x49d238*/
        v4 = v5 + 1; /*0x49d243*/
        g_IsWindowed[v4] = EncodeDigitHex(*v1 & 0xF); /*0x49d249*/
      }
      v8 = v1->u32_1; /*0x49d259*/
      ++v4; /*0x49d25c*/
      ++v1; /*0x49d25d*/
    }
    while ( v8 );
  }
  g_IsWindowed[v4] = 0; /*0x49d26c*/
  char v23[100]; // [esp+D0h] [ebp-64h] BYREF
  strcpy(v23, g_IsWindowed); /*0x49d289*/
  char *v9 = v2; // edi /*0x49d292*/
  int v10 = 0; // esi /*0x49d294*/
  char i; // al
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
      int v12 = v10 + 1; // esi /*0x49d2bb*/
      int v13 = *v9 >> 4; // eax /*0x49d2bf*/
      char v14; // al
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
  bool v15; // bl
  v15 = INIClass::BinarySearchSection((int)v19, (unsigned __int8 *)v23) != 0; /*0x49d354*/
  (v19)->DestroyHashTableINIClass(); /*0x49d357*/
  v16[0] = (unsigned int)(&vt_CCFileClass); /*0x49d360*/
  v18 = 0; /*0x49d368*/
  Vector::Clear((int)v17); /*0x49d36c*/
  v16[0] = (unsigned int)(&off_7E1668); /*0x49d375*/
  (v16)->Dtor(); /*0x49d37d*/
  return v15; /*0x49d1de*/

}
namespace gamemd {
unsigned int * MPCooperative::ctor(MultiplayerGameMode * aP1, MPCooperative * aP2, MultiplayerGameMode * aP3, MPCooperative * aP4, MultiplayerGameMode * aP5, MPCooperative * aP6, void *a7, void *a8)
{

  int v23; // eax
  int v24; // edx

  ((MultiplayerGameMode *)this)->Construct( aP1, aP2, aP3, aP4, 0, aP6); /*0x5c1494*/
  (&this->q058)->updateAnimationState(0, 0); /*0x5c14a0*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_DynamicVectorClass) */  /*0x5c14a5*/
  this->u32_6C = (void *)10; /*0x5c14ab*/
  this->q068 = 0; /*0x5c14b2*/
  IPXManagerClass **p_MPCooperative_field_0xC4 = &this->q0C4; // esi
  int v9 = 8; // ebp /*0x5c14bb*/
  do /*0x5c14cb*/
  {
    ((Waypoint*)(Waypoint *)p_MPCooperative_field_0xC4)->InitInvalid(); /*0x5c14c2*/
    p_MPCooperative_field_0xC4 += 3; /*0x5c14c7*/
    --v9; /*0x5c14ca*/
  }
  while ( v9 ); /*0x5c14cb*/
  MPCooperative_field_0x1A4 = (VectorClass *)this->u32_1A4;
  int v11 = 8; // ebp /*0x5c14d3*/
  do /*0x5c14f5*/
  {
    VectorClass *u32_1A4; // esi
    ((VectorClass *)(u32_1A4))->Construct(0, 0); /*0x5c14dc*/
    /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x5c14e1) */
    u32_1A4[1].Items = (void *)10; /*0x5c14e7*/
    u32_1A4[1].ptr_0 = 0; /*0x5c14ee*/
    u32_1A4 = &u32_1A4->VectorClass_18; /*0x5c14f1*/
    --v11; /*0x5c14f4*/
  }
  while ( v11 ); /*0x5c14f5*/
  VectorClass *p_MPCooperative_field_0x264 = &this->q264; // esi /*0x5c14f7*/
  int v13 = 8; // ebp /*0x5c14fd*/
  do /*0x5c151f*/
  {
    ((VectorClass *)(p_MPCooperative_field_0x264))->Construct(0, 0); /*0x5c1506*/
    /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x5c150b) */
    p_MPCooperative_field_0x264[1].Items = (void *)10; /*0x5c1511*/
    p_MPCooperative_field_0x264[1].ptr_0 = 0; /*0x5c1518*/
    p_MPCooperative_field_0x264 = &p_MPCooperative_field_0x264->VectorClass_18; /*0x5c151b*/
    --v13; /*0x5c151e*/
  }
  while ( v13 ); /*0x5c151f*/
  int *p_MPCooperative_field_0x324 = &this->q324; // esi /*0x5c1521*/
  this->q324)->Construct(0, 0); /*0x5c152b*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_DynamicVectorClass) */  /*0x5c1530*/
  *&this->q014 = (unsigned int)(10); /*0x5c1536*/
  *&this->q334 = 0; /*0x5c153d*/
  /* X11: vtable install elided (implicit via MPCooperative virtuals) */
  this->u32_40 = 0;
  this->q044 = 0;
  this->q33C = 0;
  this->ptr_50 = 0;
  this->__pad_004)[0] = 0; /*0x5c1555*/
  (this->q048) = 0; /*0x5c1559*/
  (this->u8_49) = 0; /*0x5c155d*/
  this->u32_4C = 0; /*0x5c1561*/
  (this->q340) = 1;
  int i; // ebp
  for ( i = *&this->q334 - 1; i >= 0; --i ) /*0x5c1572*/
  {
    int v16; // edx
    v16 = *(unsigned int *)this->q328; /*0x5c1574*/
    void *v17; // ebx
    v17 = *(void **)(v16 + 4 * i); /*0x5c157a*/
    if ( v17 ) /*0x5c157f*/
    {
      ((Array*)*(Array **)(v16 + 4 * i))->Cleanup(); /*0x5c1583*/
      RA2_OPDEL(v17); /*0x5c1589*/
    }
  }
  int v18 = *&this->q32C; // ebp /*0x5c1598*/
  p_MPCooperative_field_0x324->Cleanup5(&this->q324);
  p_MPCooperative_field_0x324->Release(&this->q324, v18, 0);
  ((CampaignClass *)((int *)&g_DDrawSurfaceManager))->GetValue((unsigned int *)(&aP4)); /*0x5c15b3*/
  for ( aP6 = 0; (int)aP6 < (int)aP4; ++aP6 ) /*0x5c15c2*/
  {
    MissionClass *v19; // eax
    v19 = (gamemd::Init)((int *)operator new(0x70u)); /*0x5c15c6*/
    unsigned int *v20; // ebp
    if ( v19 ) /*0x5c15d0*/
      v20 = ((MissionClass *)(v19))->Init(); /*0x5c15d9*/
    else
      v20 = 0; /*0x5c15dd*/
    ((Movie*)(int)v20)->SetupScreen((int)(aP6)); /*0x5c15e6*/
    int v21 = *&this->q32C; // eax /*0x5c15eb*/
    if ( *&this->q334 >= v21 ) /*0x5c15f3*/
    {
      if ( !this->q328[9] && v21 ) /*0x5c15fe*/
        continue; /*0x5c15fe*/
      int v22 = *&this->q014; // ecx /*0x5c1600*/
      if ( v22 <= 0 /*0x5c160f*/
        || !(*(uint8_t (**)(int *, int, unsigned int))(this->q32C)(
              &this->q324,
              v21 + v22,
              0) )
      {
        continue; /*0x5c160f*/
      }
    }
    v23 = *&this->q010; /*0x5c1616*/
    v24 = (unsigned int)((int *)(*(unsigned int *)this->q328)); /*0x5c1619*/
    *&this->q334 = v23 + 1; /*0x5c161f*/
    *(unsigned int *)(v24 + 4 * v23) = (unsigned int)(v20); /*0x5c1622*/
  }
  return &this->ptr_0;

  }
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
  void (***v9)(unsigned int, int); // ecx
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
  /* X11: vtable install elided (X67 star-deref, RHS vt_MPCooperative) */  /*0x5c164a*/
  if ( MultiplayerGameMode_field_0x08 ) /*0x5c1652*/
  {
    Array::Cleanup(MultiplayerGameMode_field_0x08); /*0x5c1656*/
    operator delete((MultiplayerGameMode_field_0x08)); /*0x5c165c*/
    v3[2].MultiplayerGameMode_field_0x08 = 0; /*0x5c1664*/
  }
  for ( i = v3[29].MultiplayerGameMode_field_0x08 - 1; i >= 0; --i ) /*0x5c166f*/
  {
    MultiplayerGameMode_field_0x18 = v3[28].MultiplayerGameMode_field_0x18; /*0x5c1671*/
    v7 = *(void **)(MultiplayerGameMode_field_0x18 + 4 * i); /*0x5c1677*/
    if ( v7 ) /*0x5c167c*/
    {
      Array::Cleanup(*(Array **)(MultiplayerGameMode_field_0x18 + 4 * i)); /*0x5c1680*/
      operator delete((v7)); /*0x5c1686*/
    }
  }
  (*(void (**)(int *, int))(v3[28].MultiplayerGameMode_field_0x14 + 12))( /*0x5c169f*/
    &v3[28].MultiplayerGameMode_field_0x14,
    a2);
  for ( j = v3[3].MultiplayerGameMode_field_0x14 - 1; j >= 0; --j ) /*0x5c16a6*/
    operator delete((*(void **)(v3[3].MultiplayerGameMode_field_0x08 + 4 * j))); /*0x5c16af*/
  (*(void (**)(int *))(v3[3].MultiplayerGameMode_field_0x04 + 12))(&v3[3].MultiplayerGameMode_field_0x04); /*0x5c16c3*/
  (*(void (**)(int *))(v3[3].MultiplayerGameMode_field_0x04 + 8))(&v3[3].MultiplayerGameMode_field_0x04); /*0x5c16ce*/
  v9 = (void (***)(unsigned int, int))v3[2].MultiplayerGameMode_field_0x18; /*0x5c16d1*/
  if ( v9 ) /*0x5c16d6*/
  {
    (**v9)(v9, 1); /*0x5c16dc*/
    v3[2].MultiplayerGameMode_field_0x18 = 0; /*0x5c16de*/
  }
  (v3->__pad_004) = 0; /*0x5c16e1*/
  v10 = v3->u32_70.MultiplayerGameMode_field_0x18; /*0x5c16e4*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_VectorClass) */  /*0x5c16e9*/
  if ( v10 && (((unsigned char *)&(v3[29].MultiplayerGameMode_field_0x04))[1]) ) /*0x5c16f1*/
  {
    operator delete((v10)); /*0x5c16f7*/
    v3[28].MultiplayerGameMode_field_0x18 = 0; /*0x5c16ff*/
  }
  (((unsigned char *)&(v3[29].MultiplayerGameMode_field_0x04))[1]) = 0; /*0x5c1702*/
  *v3->q074.__pad_0 = 0; /*0x5c1705*/
  p_MultiplayerGameMode_field_0x14 = &v3[28].MultiplayerGameMode_field_0x14; /*0x5c1708*/
  v12 = 8; /*0x5c170e*/
  do /*0x5c173b*/
  {
    v13 = (void *)*(p_MultiplayerGameMode_field_0x14 - 5); /*0x5c1713*/
    p_MultiplayerGameMode_field_0x14 -= 6; /*0x5c1716*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x5c171b*/
    if ( v13 && p_MultiplayerGameMode_field_0x14->IsAllocated ) /*0x5c1723*/
    {
      operator delete((v13)); /*0x5c1729*/
      p_MultiplayerGameMode_field_0x14->Items = 0; /*0x5c1731*/
    }
    --v12; /*0x5c1734*/
    p_MultiplayerGameMode_field_0x14->IsAllocated = 0; /*0x5c1735*/
    p_MultiplayerGameMode_field_0x14->Capacity = 0; /*0x5c1738*/
  }
  while ( v12 ); /*0x5c173b*/
  p_MultiplayerGameMode_field_0x18 = &v3[21].MultiplayerGameMode_field_0x18; /*0x5c173d*/
  v15 = 8; /*0x5c1743*/
  do /*0x5c1770*/
  {
    v16 = (void *)*(p_MultiplayerGameMode_field_0x18 - 5); /*0x5c1748*/
    p_MultiplayerGameMode_field_0x18 -= 6; /*0x5c174b*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x5c1750*/
    if ( v16 && p_MultiplayerGameMode_field_0x18->IsAllocated ) /*0x5c1758*/
    {
      operator delete((v16)); /*0x5c175e*/
      p_MultiplayerGameMode_field_0x18->Items = 0; /*0x5c1766*/
    }
    --v15; /*0x5c1769*/
    p_MultiplayerGameMode_field_0x18->IsAllocated = 0; /*0x5c176a*/
    p_MultiplayerGameMode_field_0x18->Capacity = 0; /*0x5c176d*/
  }
  while ( v15 ); /*0x5c1770*/
  v17 = v3->u32_C.MultiplayerGameMode_field_0x08; /*0x5c1772*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_VectorClass) */  /*0x5c1775*/
  if ( v17 && (((unsigned char *)&(v3[3].MultiplayerGameMode_field_0x10))[1]) ) /*0x5c1781*/
  {
    operator delete((v17)); /*0x5c1787*/
    v3[3].MultiplayerGameMode_field_0x08 = 0; /*0x5c178f*/
  }
  (((unsigned char *)&(v3[3].MultiplayerGameMode_field_0x10))[1]) = 0; /*0x5c1794*/
  v3[3].MultiplayerGameMode_field_0x0C = 0; /*0x5c1797*/
  MultiplayerGameMode::Dtor(v3); /*0x5c179a*/
}
}
// 0x5C18A0
namespace gamemd {
int MPCooperative::Read(void *a1_1, void *a2_1, void *a3)
{

  int i; // edi
  Array **v3; // eax
  Array *v4; // esi
  int v5; // edi
  int *p_MPCooperative_field_0x324; // esi
  int j; // ebx
  MissionClass *v8; // eax
  unsigned int *v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v15; // [esp+10h] [ebp-4h] BYREF

  for ( i = *&this->q334 - 1; i >= 0; --i ) /*0x5c18ad*/
  {
    v3 = *(Array ***)this->__pad_328; /*0x5c18af*/
    v4 = v3[i]; /*0x5c18b5*/
    if ( v4 ) /*0x5c18ba*/
    {
      Array::Cleanup(v3[i]); /*0x5c18be*/
      __3_YAXPAX_Z(v4); /*0x5c18c4*/
    }
  }
  v5 = *&this->q32C; /*0x5c18d5*/
  p_MPCooperative_field_0x324 = &this->MPCooperative_field_0x324; /*0x5c18db*/
  (*(void (**)(int *))(this->MPCooperative_field_0x324 + 12))(&this->MPCooperative_field_0x324); /*0x5c18e3*/
  (*(void (**)(int *, int, unsigned int))(this->MPCooperative_field_0x324 + 8))( /*0x5c18ed*/
    &this->MPCooperative_field_0x324,
    v5,
    0);
  CampaignClass::GetValue(&g_DDrawSurfaceManager.ptr_0, &v15); /*0x5c18fa*/
  for ( j = 0; j < v15; ++j ) /*0x5c1907*/
  {
    v8 = (MissionClass *)__2_YAPAXI_Z(0x70u); /*0x5c190b*/
    if ( v8 ) /*0x5c1915*/
      v9 = MissionClass::Init(v8); /*0x5c191e*/
    else
      v9 = 0; /*0x5c1922*/
    Movie::SetupScreen((int)v9, j); /*0x5c1927*/
    v10 = p_MPCooperative_field_0x324->Capacity; /*0x5c192c*/
    if ( p_MPCooperative_field_0x324->q010 >= v10 ) /*0x5c1934*/
    {
      if ( !*(&p_MPCooperative_field_0x324->IsAllocated) && v10 ) /*0x5c193f*/
        continue; /*0x5c193f*/
      v11 = p_MPCooperative_field_0x324->u32_14; /*0x5c1941*/
      if ( v11 <= 0 /*0x5c1951*/
        || !p_MPCooperative_field_0x324->Release(v10 + v11, 0) )
      {
        continue; /*0x5c1951*/
      }
    }
    v12 = p_MPCooperative_field_0x324->q010; /*0x5c1958*/
    v13 = p_MPCooperative_field_0x324->Items; /*0x5c195b*/
    p_MPCooperative_field_0x324->q010 = v12 + 1; /*0x5c1961*/
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
  if ( ((Dialog *)0xC2)->FindByHandle() || ((Dialog *)0xBC)->FindByHandle() ) /*0x5c1a4d*/
  {
    MPCooperative_field_0x40 = (int *)this->u32_40; /*0x5c1a56*/
    if ( MPCooperative_field_0x40 ) /*0x5c1a5b*/
    {
      if ( ((MPCooperative_field_0x40)->GetSectionID(&String2), v3 = (char *)MPCooperative_Copy(v13), v3 != String2) /*0x5c1a86*/
        && Dialog::GetCurrentType() == 107
        || Dialog::GetCurrentType() != 107 )
      {
        v4 = this->u32_40; /*0x5c1a88*/
        if ( v4 ) /*0x5c1a8d*/
        {
          ((Array *)this->u32_40)->Cleanup(); /*0x5c1a91*/
          __3_YAXPAX_Z(v4); /*0x5c1a97*/
        }
        this->u32_40 = 0; /*0x5c1a9f*/
      }
    }
    v5 = (char *)this->u32_40; /*0x5c1aa6*/
    if ( v5 ) /*0x5c1aab*/
    {
      if ( dword_A8DA84 == 2 ) /*0x5c1ab4*/
        String::AssignWideToChar(v5, (char *)*dword_A8DA78, (char *)dword_A8DA78[1]); /*0x5c1ac2*/
      else
        (v5)->AssignWideToChar((char *)&g_TypeClass_DefaultString, (char *)&g_TypeClass_DefaultString); /*0x5c1ace*/
    }
  }
  if ( this->u32_40 ) /*0x5c1ad3*/
  {
LABEL_30:
    LOBYTE(this->q340) = 1; /*0x5c1c7b*/
  result = Dialog::FindGameUI(); /*0x5c1c82*/
  v12 = (HWND)result; /*0x5c1c87*/
  if ( result ) /*0x5c1c8b*/
{
      Campaign::SetupMovie((Campaign *)this, (HWND)result); /*0x5c1c90*/
      return CampaignCoop::Setup((CampaignCoop *)this, v12, 1); /*0x5c1c9a*/
}
  return result; /*0x5c1c9a*/
  }
  v6 = (MissionClass *)__2_YAPAXI_Z(0x70u); /*0x5c1ae2*/
  if ( v6 ) /*0x5c1aec*/
    result = (int)(v6)->Init(); /*0x5c1af0*/
  else
    result = 0; /*0x5c1af7*/
  this->u32_40 = (void *)result; /*0x5c1afb*/
  if ( result ) /*0x5c1afe*/
  {
    (result)->SetupScreen(0); /*0x5c1b07*/
    v8 = (CampaignClass *)MPCooperative_Copy(v13); /*0x5c1b13*/
    if ( (int)v8 >= 0 ) /*0x5c1b17*/
    {
      this->q33C = v8; /*0x5c1bb1*/
      Movie::GetSection((int)&g_DDrawSurfaceManager, (int)v8, &v16); /*0x5c1bb7*/
      v11 = (int *)this->u32_40; /*0x5c1bc2*/
      String2 = 0; /*0x5c1bc5*/
      (v11)->GetElementAt(&String2, 0); /*0x5c1bc9*/
      Debug::Log(); /*0x5c1be5*/
      if ( _strnicmp( /*0x5c1c0e*/
             (const char *)(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&g_GameRulesOptions) + 88),
             String2,
             strlen(String2)) )
      {
        v15 = v8 == 0; /*0x5c1c21*/
        do /*0x5c1c6f*/
        {
          ((int)this->u32_40)->SetupScreen(v15); /*0x5c1c2d*/
          ((int)this->u32_40)->SetupScreen((int)v8); /*0x5c1c36*/
          ((int *)this->u32_40)->GetElementAt(&String2, 0); /*0x5c1c45*/
        }
        while ( _strnicmp( /*0x5c1c6f*/
                  (const char *)(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&g_GameRulesOptions) + 88),
                  String2,
                  strlen(String2)) );
      }
    }
      else
    {
      v9 = (int *)this->u32_40; /*0x5c1b23*/
      this->q33C = 0; /*0x5c1b26*/
      String2 = 0; /*0x5c1b2c*/
      (v9)->GetElementAt(&String2, 0); /*0x5c1b30*/
      v10 = 0; /*0x5c1b3a*/
      if ( dword_A8B8D8 > 0 ) /*0x5c1b3e*/
      {
        while ( _strnicmp((const char *)(*(unsigned int *)(dword_A8B8CC + 4 * v10) + 88), String2, strlen(String2)) ) /*0x5c1b69*/
        {
          if ( ++v10 >= dword_A8B8D8 ) /*0x5c1b73*/
            goto LABEL_25; /*0x5c1b73*/
        }
        *(unsigned int *)&g_GameRulesOptions = v10; /*0x5c1b79*/
        LoadScenarioClassByIndex(v10); /*0x5c1b7f*/
      }
      LABEL_25:
      if ( v10 == dword_A8B8D8 ) /*0x5c1b8a*/
      {
        *(unsigned int *)&g_GameRulesOptions = 0; /*0x5c1b92*/
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

  (this->q340) = ((this->q340) & ~0xFF) | ((1) & 0xFF); /*0x5c1cb0*/

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
  if ( !this->u32_40 ) /*0x5c1ce8*/
  {
    v3 = (MissionClass *)__2_YAPAXI_Z(0x70u); /*0x5c1cef*/
    if ( v3 ) /*0x5c1cf9*/
      v4 = (v3)->Init(); /*0x5c1cfd*/
    else
      v4 = 0; /*0x5c1d04*/
    this->u32_40 = v4; /*0x5c1d06*/
  }
  ((int)this->u32_40)->SetupScreen(0); /*0x5c1d0d*/
  ((int *)this->u32_40)->GetElementAt(&String2, 0); /*0x5c1d1b*/
  if ( dword_A8B8D8 <= 0 ) /*0x5c1d26*/
  {
LABEL_10:
    (*((void (**)(MPCooperative *))this->ptr_0 + 4))(this); /*0x5c1d5d*/
  return -1; /*0x5c1d6f*/
  }
  while ( _strnicmp((const char *)(*(unsigned int *)(dword_A8B8CC + 4 * v2) + 88), String2, strlen(String2)) ) /*0x5c1d51*/
  {
    if ( ++v2 >= dword_A8B8D8 ) /*0x5c1d5b*/
      goto LABEL_10; /*0x5c1d5b*/
  }
  return v2; /*0x5c1d65*/

}
}
// 0x5C1DC0
namespace gamemd {
CampaignClass * * MPCooperative::Seek(void *a1_1, void *a2_1, void *a3_1)
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
  int MPCooperative_field_0x0; // ebp
  int PlayerSide; // eax
  int MPCooperative_field_0x33C; // [esp-8h] [ebp-20h]
  int v16; // [esp-8h] [ebp-20h]
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h] BYREF
  LRESULT v19; // [esp+14h] [ebp-4h] BYREF

  if ( !this->MPCooperative_field_0x40 ) /*0x5c1dc8*/
    return 0; /*0x5c1dd7*/
  CampaignClass::GetValue(&g_DDrawSurfaceManager.ptr_0, &v19); /*0x5c1de2*/
  v3 = MPCooperative_Helper(); /*0x5c1dec*/
  if ( v3 < v19 ) /*0x5c1df4*/
  {
    if ( Dialog::GetCurrentType() == 107 ) /*0x5c1e34*/
    {
      MPCooperative_field_0x40 = (void *)this->MPCooperative_field_0x40; /*0x5c1e36*/
      if ( MPCooperative_field_0x40 ) /*0x5c1e3b*/
      {
        Array::Cleanup((Array *)this->MPCooperative_field_0x40); /*0x5c1e3f*/
        __3_YAXPAX_Z(MPCooperative_field_0x40); /*0x5c1e45*/
      }
      this->MPCooperative_field_0x40 = *(unsigned int *)(*(unsigned int *)this->__pad_328 + 4 * v3); /*0x5c1e58*/
      v5 = (MissionClass *)__2_YAPAXI_Z(0x70u); /*0x5c1e5b*/
      if ( v5 ) /*0x5c1e65*/
        v6 = MissionClass::Init(v5); /*0x5c1e69*/
      else
        v6 = 0; /*0x5c1e70*/
      *(unsigned int *)(*(unsigned int *)this->__pad_328 + 4 * v3) = v6; /*0x5c1e79*/
      Movie::SetupScreen(*(unsigned int *)(*(unsigned int *)this->__pad_328 + 4 * v3), v3); /*0x5c1e85*/
      this->MPCooperative_field_0x4C = v3; /*0x5c1e8a*/
      if ( *(unsigned int *)&stru_A8D804.__pad_3D[579] == 2 ) /*0x5c1e95*/
        String::AssignWideToChar( /*0x5c1ea6*/
          (char *)this->MPCooperative_field_0x40,
          **(char ***)&stru_A8D804.__pad_3D[567],
          *(char **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4));
    }
    goto LABEL_16; /*0x5c1ea6*/
  }
  if ( *(unsigned int *)&stru_A8D804.__pad_3D[579] == 2 ) /*0x5c1dfd*/
    String::AssignWideToChar( /*0x5c1e0e*/
      (char *)this->MPCooperative_field_0x40,
      **(char ***)&stru_A8D804.__pad_3D[567],
      *(char **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4));
  result = LoadCampaignCoopSave((char *)this->MPCooperative_field_0x40); /*0x5c1e16*/
  if ( result ) /*0x5c1e1d*/
  {
    LOBYTE(this->MPCooperative_field_0x48) = 1; /*0x5c1e26*/
LABEL_16:
    MPCooperative_field_0x33C = this->MPCooperative_field_0x33C; /*0x5c1eab*/
    v17 = 0; /*0x5c1ebc*/
    Movie::GetSection((int)&g_DDrawSurfaceManager, MPCooperative_field_0x33C, &v18); /*0x5c1ec4*/
    if ( v18 ) /*0x5c1ecf*/
    {
      v7 = (int *)this->MPCooperative_field_0x40; /*0x5c1eda*/
      if ( v7 && (unsigned __int8)Movie::GetState(v7, &v17) ) /*0x5c1ee6*/
      {
        v8 = v17; /*0x5c1ef7*/
      }
      else
      {
        v8 = 0; /*0x5c1eef*/
        v17 = 0; /*0x5c1ef1*/
      }
      v9 = *(unsigned int *)(v18 + 32); /*0x5c1eff*/
      if ( v8 < v9 ) /*0x5c1f04*/
      {
        if ( v9 ) /*0x5c1f11*/
        {
          v10 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)(v18 + 20) + 4 * v8) + 16); /*0x5c1f22*/
          GameUI = (HWND)Dialog::FindGameUI(); /*0x5c1f25*/
          Campaign::SetupMovie((Campaign *)this, GameUI); /*0x5c1f2d*/
          for ( i = 0; i < *(int *)&stru_A8D804.__pad_3D[579]; ++i ) /*0x5c1f3b*/
          {
            MPCooperative_field_0x0 = this->MPCooperative_field_0x0; /*0x5c1f43*/
            PlayerSide = SessionClass::GetPlayerSide(*(int **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * i)); /*0x5c1f48*/
            if ( !(*(unsigned __int8 (**)(MPCooperative *, int))(MPCooperative_field_0x0 + 28))( /*0x5c1f50*/
                    this,
                    PlayerSide) )
            {
              if ( v10 <= 1 ) /*0x5c1f5a*/
              {
                v16 = SideClass::FindByName(**(SideClass ***)(*(unsigned int *)(*(unsigned int *)(v18 + 20) + 4 * v17) + 4)); /*0x5c1f78*/
                SessionClass::SetPlayerOption(*(int **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * i), v16); /*0x5c1f82*/
              }
              else
              {
                SessionClass::SetPlayerOption(*(int **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4 * i), -2); /*0x5c1f5e*/
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
  unsigned int *v5; // eax
  int v6; // ecx
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  v7 = 0; /*0x5c1faa*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, this->MPCooperative_field_0x33C, &v8); /*0x5c1fbf*/
  if ( !v8 ) /*0x5c1fca*/
    return -2; /*0x5c1fcc*/
  MPCooperative_field_0x40 = (int *)this->MPCooperative_field_0x40; /*0x5c1fd6*/
  if ( MPCooperative_field_0x40 && (unsigned __int8)Movie::GetState(MPCooperative_field_0x40, &v7) ) /*0x5c1fe2*/
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
  v5 = *(unsigned int **)(*(unsigned int *)(v8 + 20) + 4 * v4); /*0x5c200d*/
  v6 = v5[4]; /*0x5c2010*/
  if ( !v6 ) /*0x5c2015*/
    return -2; /*0x5c2017*/
  if ( v6 <= 1 ) /*0x5c2024*/
    return SideClass::FindByName(*(SideClass **)v5[1]); /*0x5c2035*/
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

  if ( !this->u32_40 ) /*0x5c2045*/
  {
    MovieClass::Create((MovieClass *)this); /*0x5c204c*/
    (this->q340) = ((this->q340) & ~0xFF) | ((1) & 0xFF); /*0x5c2051*/
  }
  MPCooperative_field_0x40 = (int *)this->u32_40; /*0x5c2058*/
  if ( MPCooperative_field_0x40 ) /*0x5c205d*/
  {
    Movie::GetSectionID(MPCooperative_field_0x40, &v17); /*0x5c208d*/
    if ( v17 != a2 ) /*0x5c209c*/
      LOBYTE(this->q340) = 1; /*0x5c209e*/
    v16 = a10; /*0x5c20ad*/
    v15 = a9; /*0x5c20ae*/
    DynamicVectorClass::Copy(&v14, &a3); /*0x5c20b9*/
    DecodeCampaignPlayerName( /*0x5c20c2*/
      (int)this->u32_40,
      a2,
      *(int *)v14.VectorClass,
      *(void **)&v14.?[3],
      *(int *)&v14.?[3],
      v14.?,
      v14.Count,
      v14.CapacityIncrement,
      v15,
      v16);
    v13 = Block; /*0x5c20c7*/
    this->q33C = (CampaignClass *)a2; /*0x5c20cb*/
    a3 = &vt_VectorClass; /*0x5c20d3*/
    if ( v13 && HIBYTE(a6) ) /*0x5c20e3*/
      __3_YAXPAX_Z(v13); /*0x5c20e6*/
    return 1; /*0x5c20ef*/
  }
  else
  {
    a3 = &vt_VectorClass; /*0x5c2063*/
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

  int *MPCooperative_field_0x40; // ecx
  char v7; // bl
  HWND GameUI; // eax
  int v9[28]; // [esp-E0h] [ebp-F4h] BYREF
  int v10[28]; // [esp-70h] [ebp-84h] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  MPCooperative_field_0x40 = (int *)this->u32_40; /*0x5c2107*/
  if ( !MPCooperative_field_0x40 ) /*0x5c210c*/
    return 0; /*0x5c210e*/
  Movie::GetState(MPCooperative_field_0x40, &v11); /*0x5c211d*/
  memcpy(v10, (const void *)(a4 + 112), sizeof(v10)); /*0x5c2136*/
  memcpy(v9, (const void *)a4, sizeof(v9)); /*0x5c2141*/
  v7 = MPCooperative::validateMove( /*0x5c215b*/
         (MPCooperative *)this->u32_40,
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
  if ( v11 != a2 || ((this->q340) & 0xFF) ) /*0x5c2165*/
  {
    GameUI = (HWND)Dialog::FindGameUI(); /*0x5c216f*/
    if ( GameUI ) /*0x5c2176*/
    {
      Campaign::SetupMovie((Campaign *)this, GameUI); /*0x5c217b*/
      LOBYTE(this->q340) = 0; /*0x5c2180*/
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

  MPCooperative_field_0x40 = (int *)this->u32_40; /*0x5c2683*/
  if ( !MPCooperative_field_0x40 ) /*0x5c2688*/
    return 0; /*0x5c268a*/
  Movie::GetSectionID(MPCooperative_field_0x40, &this->q33C); /*0x5c2695*/
  GameUI = (HWND)Dialog::FindGameUI(); /*0x5c269a*/
  if ( GameUI ) /*0x5c26a1*/
  {
    if ( LOBYTE(this->q340) ) /*0x5c26a3*/
    {
      Campaign::SetupMovie((Campaign *)this, GameUI); /*0x5c26b0*/
      LOBYTE(this->q340) = 0; /*0x5c26b5*/
    }
  }
  return SerializeCampaignOptions((char *)this->u32_40); /*0x5c268c*/

}
}
// 0x5C2710
namespace gamemd {
int MPCooperative::SyncState()
{

  int *p_MPCooperative_field_0x1A4; // esi
  int v3; // ebp
  int v4; // edi
  int v5; // ebx
  int v6; // esi
  int v7; // edi
  MPCooperative *v8; // ecx
  int *v9; // ebp
  char *v10; // ebx
  int v11; // esi
  int v12; // eax
  int v13; // edx
  int v14; // eax
  unsigned int *v15; // edx
  int v16; // edx
  int v17; // eax
  int v18; // eax
  unsigned int *v19; // edx
  int v20; // esi
  int v21; // eax
  int v22; // edx
  int v23; // eax
  unsigned int *v24; // edx
  int v25; // esi
  int *v26; // eax
  int v27; // eax
  int v28; // edx
  int v29; // eax
  unsigned int *v30; // edx
  int MPCooperative_field_0x33C; // [esp+8h] [ebp-1CCh]
  int i; // [esp+20h] [ebp-1B4h]
  int v34; // [esp+24h] [ebp-1B0h]
  int v35; // [esp+28h] [ebp-1ACh] BYREF
  MPCooperative *v36; // [esp+2Ch] [ebp-1A8h]
  int v37; // [esp+30h] [ebp-1A4h]
  char v38[16]; // [esp+34h] [ebp-1A0h] BYREF
  char Buffer[400]; // [esp+44h] [ebp-190h] BYREF

  MPCooperative_field_0x33C = this->MPCooperative_field_0x33C; /*0x5c2727*/
  v36 = this; /*0x5c272d*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, MPCooperative_field_0x33C, &v35); /*0x5c2731*/
  sprintf(Buffer, "C1,%d", *(char *)(v35 + 8)); /*0x5c2749*/
  p_MPCooperative_field_0x1A4 = &this->MPCooperative_field_0x1A4; /*0x5c2751*/
  v3 = 8; /*0x5c2757*/
  do /*0x5c2795*/
  {
    v4 = p_MPCooperative_field_0x1A4[2]; /*0x5c275e*/
    (*(void (**)(int *))(*p_MPCooperative_field_0x1A4 + 12))(p_MPCooperative_field_0x1A4); /*0x5c2763*/
    (*(void (**)(int *, int, unsigned int))(*p_MPCooperative_field_0x1A4 + 8))(p_MPCooperative_field_0x1A4, v4, 0); /*0x5c276d*/
    v5 = p_MPCooperative_field_0x1A4[50]; /*0x5c2776*/
    (*(void (**)(int *))(p_MPCooperative_field_0x1A4[48] + 12))(p_MPCooperative_field_0x1A4 + 48); /*0x5c2784*/
    (*(void (**)(int *, int, unsigned int))(p_MPCooperative_field_0x1A4[48] + 8))( /*0x5c278e*/
      p_MPCooperative_field_0x1A4 + 48,
      v5,
      0);
    p_MPCooperative_field_0x1A4 += 6; /*0x5c2791*/
    --v3; /*0x5c2794*/
  }
  while ( v3 ); /*0x5c2795*/
  v37 = *(unsigned int *)&stru_A8D804.__pad_3D[579]; /*0x5c27a1*/
  for ( i = 0; i < *(char *)(v35 + 8); ++i ) /*0x5c27b2*/
  {
    v6 = 0; /*0x5c27c7*/
    memset32(dword_ABF460, -2, 8u); /*0x5c27c9*/
    v7 = *(unsigned int *)&stru_A8D804.__pad_3D[579]; /*0x5c27cb*/
    if ( *(int *)&stru_A8D804.__pad_3D[579] > 0 ) /*0x5c27d3*/
    {
      do /*0x5c27ec*/
      {
        dword_ABF460[v6] = MPCooperative::finalizeSession(*(MPCooperative **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] /*0x5c27e2*/
                                                                            + 4 * v6));
        ++v6; /*0x5c27e9*/
      }
      while ( v6 < v7 ); /*0x5c27ec*/
    }
    v8 = v36; /*0x5c27ee*/
    v34 = 0; /*0x5c27f2*/
    v9 = dword_ABF460; /*0x5c27fa*/
    v10 = &v36->u32_1AC; /*0x5c27ff*/
    while ( 1 ) /*0x5c2815*/
    {
      if ( v34 >= v37 ) /*0x5c2815*/
      {
        v20 = (*(int (**)(MPCooperative *))(v8->MPCooperative_field_0x0 + 112))(v8); /*0x5c28d2*/
        v21 = *(unsigned int *)v10; /*0x5c28d4*/
        if ( *((unsigned int *)v10 + 2) < *(unsigned int *)v10 /*0x5c28f7*/
          || (v10[5] || !v21)
          && (v22 = *((unsigned int *)v10 + 3), v22 > 0)
          && (*(unsigned __int8 (**)(char *, int, unsigned int))(*((unsigned int *)v10 - 2) + 8))(v10 - 8, v21 + v22, 0) )
        {
          v23 = *((unsigned int *)v10 + 2); /*0x5c28fe*/
          v24 = (unsigned int *)*((unsigned int *)v10 - 1); /*0x5c2901*/
          *((unsigned int *)v10 + 2) = v23 + 1; /*0x5c2907*/
          v24[v23] = v20; /*0x5c290a*/
        }
        while ( 1 ) /*0x5c2921*/
        {
          v25 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x5c2921*/
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
        v27 = *((unsigned int *)v10 + 48); /*0x5c293e*/
        if ( *((unsigned int *)v10 + 50) < v27 /*0x5c2975*/
          || (v10[197] || !v27)
          && (v28 = *((unsigned int *)v10 + 51), v28 > 0)
          && (*(unsigned __int8 (**)(char *, int, unsigned int))(*((unsigned int *)v10 + 46) + 8))(
               v10 + 184,
               v27 + v28,
               0) )
        {
          v29 = *((unsigned int *)v10 + 50); /*0x5c297c*/
          v30 = (unsigned int *)*((unsigned int *)v10 + 47); /*0x5c2982*/
          *((unsigned int *)v10 + 50) = v29 + 1; /*0x5c298b*/
          v30[v29] = v25; /*0x5c2991*/
        }
      }
      else
      {
        v11 = (*(int (**)(MPCooperative *))(v8->MPCooperative_field_0x0 + 108))(v8); /*0x5c2823*/
        v12 = *(unsigned int *)v10; /*0x5c2825*/
        if ( *((unsigned int *)v10 + 2) < *(unsigned int *)v10 /*0x5c2848*/
          || (v10[5] || !v12)
          && (v13 = *((unsigned int *)v10 + 3), v13 > 0)
          && (*(unsigned __int8 (**)(char *, int, unsigned int))(*((unsigned int *)v10 - 2) + 8))(v10 - 8, v12 + v13, 0) )
        {
          v14 = *((unsigned int *)v10 + 2); /*0x5c284f*/
          v15 = (unsigned int *)*((unsigned int *)v10 - 1); /*0x5c2852*/
          *((unsigned int *)v10 + 2) = v14 + 1; /*0x5c2858*/
          v15[v14] = v11; /*0x5c285b*/
        }
        v16 = *((unsigned int *)v10 + 48); /*0x5c285e*/
        if ( *((unsigned int *)v10 + 50) < v16 /*0x5c289f*/
          || (v10[197] || !v16)
          && (v17 = *((unsigned int *)v10 + 51), v17 > 0)
          && (*(unsigned __int8 (**)(char *, int, unsigned int))(*((unsigned int *)v10 + 46) + 8))(
               v10 + 184,
               v16 + v17,
               0) )
        {
          v18 = *((unsigned int *)v10 + 50); /*0x5c28aa*/
          v19 = (unsigned int *)*((unsigned int *)v10 + 47); /*0x5c28b0*/
          *((unsigned int *)v10 + 50) = v18 + 1; /*0x5c28b9*/
          v19[v18] = *v9; /*0x5c28c2*/
        }
      }
      sprintf(v38, ",%d,%d", *(unsigned int *)(*((unsigned int *)v10 - 1) + 4 * i), *(unsigned int *)(*((unsigned int *)v10 + 47) + 4 * i)); /*0x5c29b3*/
      strcat(Buffer, v38); /*0x5c29df*/
      ++v9; /*0x5c29e3*/
      v10 += 24; /*0x5c29e9*/
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
  int *p_MPCooperative_field_0x1A4; // esi
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
  unsigned int *v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // eax
  unsigned int *v20; // ecx
  char *v21; // eax
  int v22; // edi
  int v23; // eax
  int v24; // edx
  int v25; // eax
  unsigned int *v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  unsigned int *v30; // ecx
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
        p_MPCooperative_field_0x1A4 = &this->MPCooperative_field_0x1A4; /*0x5c2aa8*/
        v6 = 8; /*0x5c2aae*/
        do /*0x5c2aec*/
        {
          v7 = p_MPCooperative_field_0x1A4[2]; /*0x5c2ab5*/
          (*(void (**)(int *))(*p_MPCooperative_field_0x1A4 + 12))(p_MPCooperative_field_0x1A4); /*0x5c2aba*/
          (*(void (**)(int *, int, unsigned int))(*p_MPCooperative_field_0x1A4 + 8))( /*0x5c2ac4*/
            p_MPCooperative_field_0x1A4,
            v7,
            0);
          v8 = p_MPCooperative_field_0x1A4[50]; /*0x5c2acd*/
          (*(void (**)(int *))(p_MPCooperative_field_0x1A4[48] + 12))(p_MPCooperative_field_0x1A4 + 48); /*0x5c2adb*/
          (*(void (**)(int *, int, unsigned int))(p_MPCooperative_field_0x1A4[48] + 8))( /*0x5c2ae5*/
            p_MPCooperative_field_0x1A4 + 48,
            v8,
            0);
          p_MPCooperative_field_0x1A4 += 6; /*0x5c2ae8*/
          --v6; /*0x5c2aeb*/
        }
        while ( v6 ); /*0x5c2aec*/
        result = v32; /*0x5c2aee*/
        if ( (int)v32 > 0 ) /*0x5c2af4*/
        {
          do /*0x5c2c98*/
          {
            v9 = 8; /*0x5c2b02*/
            v10 = &this->u32_1AC; /*0x5c2b07*/
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
                  && (*(unsigned __int8 (**)(char *, int, unsigned int))(*((unsigned int *)v10 - 2) + 8))(
                       v10 - 8,
                       v13 + v14,
                       0) )
                {
                  v15 = *((unsigned int *)v10 + 2); /*0x5c2b58*/
                  v16 = (unsigned int *)*((unsigned int *)v10 - 1); /*0x5c2b5b*/
                  *((unsigned int *)v10 + 2) = v15 + 1; /*0x5c2b61*/
                  v16[v15] = v12; /*0x5c2b64*/
                }
              }
              else
              {
                v17 = *(unsigned int *)v10; /*0x5c2b69*/
                if ( *((unsigned int *)v10 + 2) < *(unsigned int *)v10 /*0x5c2b8f*/
                  || (v10[5] || !v17)
                  && (v18 = *((unsigned int *)v10 + 3), v18 > 0)
                  && (*(unsigned __int8 (**)(char *, int, unsigned int))(*((unsigned int *)v10 - 2) + 8))(
                       v10 - 8,
                       v17 + v18,
                       0) )
                {
                  v19 = *((unsigned int *)v10 + 2); /*0x5c2b96*/
                  v20 = (unsigned int *)*((unsigned int *)v10 - 1); /*0x5c2b99*/
                  *((unsigned int *)v10 + 2) = v19 + 1; /*0x5c2b9f*/
                  v20[v19] = -1; /*0x5c2ba2*/
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
                  && (*(unsigned __int8 (**)(char *, int, unsigned int))(*((unsigned int *)v10 + 46) + 8))(
                       v10 + 184,
                       v23 + v24,
                       0) )
                {
                  v25 = *((unsigned int *)v10 + 50); /*0x5c2c0f*/
                  v26 = (unsigned int *)*((unsigned int *)v10 + 47); /*0x5c2c15*/
                  *((unsigned int *)v10 + 50) = v25 + 1; /*0x5c2c1e*/
                  v26[v25] = v22; /*0x5c2c24*/
                }
              }
              else
              {
                v27 = *((unsigned int *)v10 + 48); /*0x5c2c29*/
                if ( *((unsigned int *)v10 + 50) < v27 /*0x5c2c62*/
                  || (v10[197] || !v27)
                  && (v28 = *((unsigned int *)v10 + 51), v28 > 0)
                  && (*(unsigned __int8 (**)(char *, int, unsigned int))(*((unsigned int *)v10 + 46) + 8))(
                       v10 + 184,
                       v27 + v28,
                       0) )
                {
                  v29 = *((unsigned int *)v10 + 50); /*0x5c2c69*/
                  v30 = (unsigned int *)*((unsigned int *)v10 + 47); /*0x5c2c6f*/
                  *((unsigned int *)v10 + 50) = v29 + 1; /*0x5c2c78*/
                  v30[v29] = -1; /*0x5c2c7e*/
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
  for ( j = 0; j < dword_A80238; ++j ) /*0x5c2d2e*/
  {
    v8 = *&dword_A8022C->vtable1; /*0x5c2d36*/
    if ( v8 && (uint8_t)((House *)(v8))->IsCurrentPlayer() ) /*0x5c2d3d*/
      ++v6; /*0x5c2d46*/
  }
  if ( v4 >= v6 ) /*0x5c2d53*/
  {
    result = dword_A8B230[127].ptr_8; /*0x5c2d96*/
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
    for ( result = Random::Range((unsigned int *)dword_A8B230 + 134, 0, dword_A8B230[127].ptr_8 - 1); /*0x5c2d70*/
    *(unsigned char *)(result + a3);
    result = (result + 1) % dword_A8B230[127].ptr_8 )
    {
      ; /*0x5c2d86*/
    }
  }
  *(unsigned char *)(result + a3) = 1; /*0x5c2dba*/
  *((unsigned int *)dword_A8B230 + result + 1120) = aP0; /*0x5c2dc7*/
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
  int ptr_4; // eax
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
      v10 = (House *)*((unsigned int *)stru_A80220.ptr_C + v9); /*0x5c2e15*/
      if ( v10 && (uint8_t)((House *)(v10))->IsCurrentPlayer() ) /*0x5c2e1c*/
        ++v8; /*0x5c2e25*/
      ++v9; /*0x5c2e2b*/
    }
    while ( v9 < stru_A80220.nextArrayIndex ); /*0x5c2e2e*/
    v4 = a3; /*0x5c2e30*/
  }
  if ( v5 >= v8 ) /*0x5c2e37*/
  {
    ptr_4 = (int)dword_A8B230[127].ptr_8; /*0x5c2ea2*/
    if ( *(unsigned char *)(ptr_4 + a4) ) /*0x5c2ea8*/
    {
      do /*0x5c2ebc*/
      {
        if ( ptr_4 >= v4->__pad_004 ) /*0x5c2eb3*/
          break; /*0x5c2eb3*/
        v15 = *(unsigned char *)(ptr_4 + a4 + 1); /*0x5c2eb5*/
        ++ptr_4; /*0x5c2eb9*/
      }
      while ( v15 ); /*0x5c2ebc*/
    }
    *(unsigned char *)(ptr_4 + a4) = 1; /*0x5c2ec2*/
    *(&dword_A8B230[124].uniqueId + ptr_4) = a2; /*0x5c2ecc*/
    v16 = *(void **)(v4->__pad_004 + 4 * ptr_4); /*0x5c2ed8*/
    a1->MPCooperative_field_0x0 = v16; /*0x5c2ee0*/
    return &a1->MPCooperative_field_0x0; /*0x5c2edb*/
  }
  else
  {
    for ( j = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, (int)dword_A8B230[127].ptr_8 - 1); /*0x5c2e54*/
    *(unsigned char *)(j + a4);
    j = (j + 1) % (int)dword_A8B230[127].ptr_8 )
    {
      ; /*0x5c2e6a*/
    }
    *(unsigned char *)(j + a4) = 1; /*0x5c2e76*/
    *(&dword_A8B230[124].uniqueId + j) = a2; /*0x5c2e83*/
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
  p_uniqueId = &dword_A8B230[124].uniqueId; /*0x5c2f0c*/
  do /*0x5c2f2a*/
  v16[v1++] = (Multiplayer)(*p_uniqueId++ != -1); /*0x5c2f17*/
  while ( v1 < 16 ); /*0x5c2f2a*/
  for ( i = 0; i < stru_A80220.nextArrayIndex; ++i ) /*0x5c2f36*/
  {
    v4 = 0; /*0x5c2f44*/
    v5 = -1; /*0x5c2f46*/
    v6 = (HouseClass *)*((unsigned int *)stru_A80220.ptr_C + i); /*0x5c2f49*/
    thisa = v6; /*0x5c2f4c*/
    if ( !*(unsigned char *)(v6->relatedTagsCapacity + 422) ) /*0x5c2f53*/
    {
      v7 = 0; /*0x5c2f67*/
      v8 = &dword_A8B230[124].uniqueId; /*0x5c2f69*/
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
    for ( j = &g_CampaignSideIndex; /*0x5c2fd4*/
    (*((unsigned int *)j - 16) == -1 || *(unsigned int *)j != -2) && (int)j < (int)&g_CampaignFactionSlot;
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
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x5c308d*/
  if ( Block && v19 ) /*0x5c30a0*/
    operator delete((Block)); /*0x5c30a3*/
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
  int ptr_4; // edi
  unsigned int *v7; // esi
  signed int v8; // eax
  int v9; // [esp+10h] [ebp-Ch] BYREF
  signed int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h] BYREF

  v2 = ReadPlayerCountMap(*(int *)&g_GameRulesOptions) - (unsigned int)dword_A8B230[127].ptr_4; /*0x5c30db*/
  Debug::Log(); /*0x5c30e7*/
  if ( v2 <= 0 ) /*0x5c30f3*/
    return 0; /*0x5c30f8*/
  *(unsigned int *)&g_Rules_AlliesAllowed = v2; /*0x5c30ff*/
  MPCooperative_field_0x33C = this->q33C; /*0x5c3105*/
  v10 = 0; /*0x5c310f*/
  v9 = 0; /*0x5c311a*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, (int)MPCooperative_field_0x33C, &v11); /*0x5c311e*/
  if ( !v11 ) /*0x5c3129*/
    return 0; /*0x5c312e*/
  if ( !*(unsigned int *)(v11 + 56) ) /*0x5c3135*/
    return 0; /*0x5c313d*/
  MPCooperative_field_0x40 = (int *)this->u32_40; /*0x5c3144*/
  if ( !MPCooperative_field_0x40 || !(unsigned __int8)Movie::GetState(MPCooperative_field_0x40, &v9) ) /*0x5c3150*/
    v9 = 0; /*0x5c3159*/
  if ( v9 >= *(unsigned int *)(v11 + 56) ) /*0x5c3168*/
    return 0; /*0x5c316d*/
  ptr_4 = (int)dword_A8B230[127].ptr_4; /*0x5c3179*/
  if ( ptr_4 < 8 ) /*0x5c3182*/
  {
    v7 = (unsigned int *)(4 * ptr_4 + 11055740); /*0x5c3188*/
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
        if ( stru_A8EB00.ObjectTypeClass[26] ) /*0x5c31af*/
          *v7 = stru_A8EB00.ObjectTypeClass[26] == 1; /*0x5c31c1*/
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
      ++ptr_4; /*0x5c3204*/
    }
    while ( (int)v7 < (int)&g_CampaignPlayerArray ); /*0x5c320b*/
  }
  return 1; /*0x5c30f5*/

}
}
// 0x5C3220
namespace gamemd {
AbstractClass * * MPCooperative::GetMapData()
{
  int v1; // ebp
  int v2; // edi
  int nextArrayIndex; // eax
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int v7; // esi
  int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+10h] [ebp-Ch]
  int v11; // [esp+14h] [ebp-8h]
  int v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+18h] [ebp-4h]
  int v14; // [esp+18h] [ebp-4h]

  Debug::Log(); /*0x5c322c*/
  if ( stru_A80220.nextArrayIndex > 0 ) /*0x5c323b*/
  {
    v1 = 1; /*0x5c3241*/
    v9 = 0; /*0x5c3246*/
    v13 = 1; /*0x5c324e*/
    do /*0x5c337f*/
    {
      v2 = *(unsigned int *)((char *)stru_A80220.ptr_C + v9); /*0x5c325b*/
      ToWideStringChar(&v2->ObjectClass_1602A); /*0x5c3264*/
      Debug::Log(); /*0x5c3276*/
      if ( *(unsigned char *)(v2->ptr_34 + 422) || !v2->u32_1EC ) /*0x5c328f*/
      {
        nextArrayIndex = stru_A80220.nextArrayIndex; /*0x5c34e1*/
      }
      else
      {
        nextArrayIndex = stru_A80220.nextArrayIndex; /*0x5c329d*/
        v11 = v1; /*0x5c32a2*/
        if ( v1 < stru_A80220.nextArrayIndex ) /*0x5c32a8*/
        {
          do /*0x5c3360*/
          {
            v4 = *((unsigned int *)stru_A80220.ptr_C + v1); /*0x5c32b4*/
            ToWideStringChar(&v4->ObjectClass_1602A); /*0x5c32bf*/
            Debug::Log(); /*0x5c32ca*/
            if ( !*(unsigned char *)(v4->ptr_34 + 422) && v4->u32_1EC ) /*0x5c32df*/
            {
              ToWideStringChar(&v4->ObjectClass_1602A); /*0x5c32eb*/
              ToWideStringChar(&v2->ObjectClass_1602A); /*0x5c32f8*/
              Debug::Log(); /*0x5c3334*/
              HouseClass::HandleAlliance((int *)v2, v4, 0); /*0x5c3341*/
              HouseClass::HandleAlliance((int *)v4, v2, 0); /*0x5c334b*/
              v1 = v11; /*0x5c3350*/
            }
            nextArrayIndex = stru_A80220.nextArrayIndex; /*0x5c3354*/
            v11 = ++v1; /*0x5c335c*/
          }
          while ( v1 < stru_A80220.nextArrayIndex ); /*0x5c3360*/
          v1 = v13; /*0x5c3366*/
        }
      }
      ++v1; /*0x5c3371*/
      v9 += 4; /*0x5c3372*/
      v13 = v1; /*0x5c3376*/
    }
    while ( v1 - 1 < nextArrayIndex ); /*0x5c337f*/
    if ( nextArrayIndex > 0 ) /*0x5c3387*/
    {
      v5 = 1; /*0x5c338d*/
      v10 = 0; /*0x5c3392*/
      v12 = 1; /*0x5c339a*/
      do /*0x5c34d1*/
      {
        v6 = *(unsigned int *)((char *)stru_A80220.ptr_C + v10); /*0x5c33a8*/
        ToWideStringChar(&v6->ObjectClass_1602A); /*0x5c33b1*/
        Debug::Log(); /*0x5c33c3*/
        if ( !*(unsigned char *)(v6->ptr_34 + 422) && !v6->u32_1EC ) /*0x5c33dc*/
        {
          v14 = v5; /*0x5c33ef*/
          if ( v5 < stru_A80220.nextArrayIndex ) /*0x5c33f5*/
          {
            do /*0x5c34ac*/
            {
              v7 = *((unsigned int *)stru_A80220.ptr_C + v5); /*0x5c3400*/
              ToWideStringChar(&v7->ObjectClass_1602A); /*0x5c340b*/
              Debug::Log(); /*0x5c3416*/
              if ( !*(unsigned char *)(v7->ptr_34 + 422) && !v7->u32_1EC ) /*0x5c342b*/
              {
                ToWideStringChar(&v7->ObjectClass_1602A); /*0x5c3437*/
                ToWideStringChar(&v6->ObjectClass_1602A); /*0x5c3444*/
                Debug::Log(); /*0x5c3480*/
                HouseClass::HandleAlliance((int *)v6, v7, 0); /*0x5c348d*/
                HouseClass::HandleAlliance((int *)v7, v6, 0); /*0x5c3497*/
                v5 = v14; /*0x5c349c*/
              }
              v14 = ++v5; /*0x5c34a8*/
            }
            while ( v5 < stru_A80220.nextArrayIndex ); /*0x5c34ac*/
            v5 = v12; /*0x5c34b2*/
          }
        }
        ++v5; /*0x5c34c3*/
        v10 += 4; /*0x5c34c4*/
        v12 = v5; /*0x5c34c8*/
      }
      while ( v5 - 1 < stru_A80220.nextArrayIndex ); /*0x5c34d1*/
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

  MPCooperative_field_0x40 = (int *)this->u32_40; /*0x5c34fd*/
  v3 = dword_A83CA8; /*0x5c3500*/
  v4 = 0; /*0x5c3509*/
  v13 = 0; /*0x5c350b*/
  Movie::GetSectionID(MPCooperative_field_0x40, &v13); /*0x5c350f*/
  v11 = 0; /*0x5c3523*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, v13, &v12); /*0x5c3527*/
  if ( !v12 ) /*0x5c3530*/
    return 0; /*0x5c3535*/
  v6 = (int *)this->u32_40; /*0x5c353c*/
  if ( !v6 || !(unsigned __int8)Movie::GetState(v6, &v11) ) /*0x5c3548*/
    v11 = 0; /*0x5c3551*/
  if ( v11 >= v12->NeedsSaveOrLink ) /*0x5c3560*/
    return 0; /*0x5c3565*/
  v7 = v3 - 1; /*0x5c356c*/
  do /*0x5c35c2*/
  {
    v8 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v7); /*0x5c3586*/
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
  ToWideStringChar(*(char **)(*((unsigned int *)dword_A83C9C + v8) + 96)); /*0x5c35d0*/
  Debug::Log(); /*0x5c35dc*/
  return v8; /*0x5c3532*/

}
}
// 0x5C35F0
namespace gamemd {
int MPCooperative::HandleEvent()
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

  MPCooperative_field_0x40 = (int *)this->u32_40; /*0x5c35fd*/
  v3 = dword_A83CA8; /*0x5c3600*/
  v4 = 0; /*0x5c3609*/
  v13 = 0; /*0x5c360b*/
  Movie::GetSectionID(MPCooperative_field_0x40, &v13); /*0x5c360f*/
  v11 = 0; /*0x5c3623*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, v13, &v12); /*0x5c3627*/
  if ( !v12 ) /*0x5c3630*/
    return 0; /*0x5c3635*/
  v6 = (int *)this->u32_40; /*0x5c363c*/
  if ( !v6 || !(unsigned __int8)Movie::GetState(v6, &v11) ) /*0x5c3648*/
    v11 = 0; /*0x5c3651*/
  if ( v11 >= v12->u32_38 ) /*0x5c3660*/
    return 0; /*0x5c3665*/
  v7 = v3 - 1; /*0x5c366c*/
  do /*0x5c36c2*/
  {
    v8 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v7); /*0x5c3686*/
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
  ToWideStringChar(*(char **)(*((unsigned int *)dword_A83C9C + v8) + 96)); /*0x5c36d0*/
  Debug::Log(); /*0x5c36dc*/
  return v8; /*0x5c3632*/

}
}
// 0x5C3B10
namespace gamemd {
void MPCooperative::LoadSettings(HWND hWnd, int a3, int a4)
{

  MPCooperative *v4; // edi
  int MPCooperative_field_0x50; // eax
  MPCooperative *v6; // eax
  unsigned int *inited; // eax
  char *MPCooperative_field_0x40; // ecx
  int v9; // eax
  int i; // ebp
  MissionClass *v11; // eax
  unsigned int *v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  unsigned int *v16; // edx
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
  wchar_t Buffer[260]; // [esp+13Ch] [ebp-208h] BYREF

  v4 = this; /*0x5c3b1a*/
  v26 = this; /*0x5c3b1c*/
  MPCooperative_field_0x50 = this->MPCooperative_field_0x50; /*0x5c3b20*/
  LOBYTE(this->MPCooperative_field_0x4) = 1; /*0x5c3b23*/
  if ( !MPCooperative_field_0x50 ) /*0x5c3b29*/
  {
    v6 = (MPCooperative *)__2_YAPAXI_Z(8u); /*0x5c3b2d*/
    if ( v6 ) /*0x5c3b37*/
      inited = MPCooperative::initGame(v6); /*0x5c3b3b*/
    else
      inited = 0; /*0x5c3b42*/
    v4->MPCooperative_field_0x50 = (int)inited; /*0x5c3b44*/
  }
  SendMessageA(hWnd, 0x184u, 0, 0); /*0x5c3b58*/
  MPCooperative_field_0x40 = (char *)v4->MPCooperative_field_0x40; /*0x5c3b5e*/
  BYTE1(v4->MPCooperative_field_0x48) = 0; /*0x5c3b61*/
  if ( MPCooperative_field_0x40 ) /*0x5c3b6c*/
  {
    if ( *(unsigned int *)&stru_A8D804.__pad_3D[579] != 2 ) /*0x5c3ba4*/
      String::AssignWideToChar( /*0x5c3bb0*/
        MPCooperative_field_0x40,
        (char *)&g_TypeClass_DefaultString,
        (char *)&g_TypeClass_DefaultString);
  }
  else if ( *(unsigned int *)&stru_A8D804.__pad_3D[579] == 2 ) /*0x5c3b71*/
  {
    v9 = __2_YAPAXI_Z(0x70u); /*0x5c3b75*/
    if ( v9 ) /*0x5c3b7f*/
      v4->MPCooperative_field_0x40 = MPCooperative::processTurn( /*0x5c3b95*/
                                       v9,
                                       **(char ***)&stru_A8D804.__pad_3D[567],
                                       *(char **)(*(unsigned int *)&stru_A8D804.__pad_3D[567] + 4));
    else
      v4->MPCooperative_field_0x40 = 0; /*0x5c3b9c*/
  }
  if ( !*&v4->q334 ) /*0x5c3bb5*/
  {
    CampaignClass::GetValue(&g_DDrawSurfaceManager.ptr_0, &v24); /*0x5c3bcd*/
    for ( i = 0; i < v24; ++i ) /*0x5c3bda*/
    {
      v11 = (MissionClass *)__2_YAPAXI_Z(0x70u); /*0x5c3be4*/
      if ( v11 ) /*0x5c3bee*/
        v12 = MissionClass::Init(v11); /*0x5c3bf7*/
      else
        v12 = 0; /*0x5c3bfb*/
      Movie::SetupScreen((int)v12, i); /*0x5c3c00*/
      v13 = *&v4->q32C; /*0x5c3c05*/
      if ( *&v4->q334 >= v13 ) /*0x5c3c0d*/
      {
        if ( !v4->__pad_328[9] && v13 ) /*0x5c3c18*/
          continue; /*0x5c3c18*/
        v14 = *&v4->u32_338; /*0x5c3c1a*/
        if ( v14 <= 0 /*0x5c3c2a*/
          || !(*(unsigned __int8 (**)(int *, int, unsigned int))(v4->MPCooperative_field_0x324 + 8))(
                &v4->MPCooperative_field_0x324,
                v13 + v14,
                0) )
        {
          continue; /*0x5c3c2a*/
        }
      }
      v15 = *&v4->q334; /*0x5c3c31*/
      v16 = *(unsigned int **)v4->__pad_328; /*0x5c3c34*/
      *&v4->q334 = v15 + 1; /*0x5c3c3a*/
      v16[v15] = (unsigned int)v12; /*0x5c3c3d*/
    }
  }
  v17 = 0; /*0x5c3c49*/
  IsometricTileTypeClass::Constructor_0(&v27, 0, 0); /*0x5c3c51*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_DynamicVectorClass_unsigned_short) */  /*0x5c3c60*/
  v27.abstractFlags = 10; /*0x5c3c68*/
  v27.uniqueId = 0; /*0x5c3c70*/
  SmallFunc_49E740((int)&g_DDrawSurfaceManager, &v27); /*0x5c3c74*/
  IsometricTileTypeClass_field_0x08 = v27.IsometricTileTypeClass_field_0x08; /*0x5c3c86*/
  if ( v27.IsometricTileTypeClass_field_0x08 > 0 ) /*0x5c3c8a*/
  {
    do /*0x5c3d96*/
    {
      if ( *(unsigned int *)(v27.IsometricTileTypeClass_field_0x04 + 4 * v17) ) /*0x5c3c94*/
      {
        Array::GetElementAt(*(int **)(*(unsigned int *)v4->__pad_328 + 4 * v17), &v27.nextArrayIndex, -1); /*0x5c3cae*/
        v24 = *(unsigned int *)(a3 + 16); /*0x5c3cc5*/
        v18 = 0; /*0x5c3cc9*/
        sprintf( /*0x5c3ccb*/
          (char *const)&v27.referenceCount,
          "%s.MAP",
          (const char *)v27.nextArrayIndex);
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
                    (char *)&v27.referenceCount) )
              v18 = *(unsigned int *)(*(unsigned int *)(a3 + 4) + 4 * v19); /*0x5c3d03*/
            if ( ++v19 >= v24 ) /*0x5c3d0d*/
            {
              if ( !v18 ) /*0x5c3d11*/
                goto LABEL_34; /*0x5c3d11*/
              break; /*0x5c3d11*/
            }
          }
          swprintf( /*0x5c3d13*/
            Buffer,
            (const size_t)aDS_0,
            (const wchar_t *const)(v17 + 1),
            *(unsigned int *)(v27.IsometricTileTypeClass_field_0x04 + 4 * v17));
          SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)Buffer); /*0x5c3d4b*/
          SendMessageA(hWnd, 0x19Au, v17, v18); /*0x5c3d59*/
        }
        __3_YAXPAX_Z(*(void **)(v27.IsometricTileTypeClass_field_0x04 + 4 * v17)); /*0x5c3d83*/
        v4 = v26; /*0x5c3d88*/
      }
      ++v17; /*0x5c3d93*/
    }
    while ( v17 < IsometricTileTypeClass_field_0x08 ); /*0x5c3d96*/
  }
  v20 = (char *)v4->MPCooperative_field_0x40; /*0x5c3d9c*/
  if ( v20 ) /*0x5c3da1*/
  {
    if ( MPCooperative::ReadCoopSaveINI(v20) && !BYTE1(v4->MPCooperative_field_0x48) ) /*0x5c3db4*/
    {
      LoadCoopCampaignSave((char *)v4->MPCooperative_field_0x40, (char *)&v27.referenceCount); /*0x5c3dc7*/
      strcat((char *)&v27.referenceCount, g_Str_File__MAP); /*0x5c3df1*/
      IsometricTileTypeClass_field_0x08 = *(unsigned int *)(a3 + 16); /*0x5c3dfb*/
      v21 = 0; /*0x5c3e01*/
      v22 = 0; /*0x5c3e03*/
      if ( IsometricTileTypeClass_field_0x08 > 0 ) /*0x5c3e07*/
      {
        while ( !v21 ) /*0x5c3e0b*/
        {
          if ( !_strcmpi( /*0x5c3e1c*/
                  (char *)(*(unsigned int *)(*(unsigned int *)(a3 + 4) + 4 * v22) + 88),
                  (char *)&v27.referenceCount) )
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
        BYTE1(v26->MPCooperative_field_0x48) = 1; /*0x5c3e77*/
      }
    }
  }
LABEL_47:
  SendMessageA(hWnd, 0x186u, 0, 0); /*0x5c3e7b*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass_unsigned_short) */  /*0x5c3e9b*/
  if ( v27.IsometricTileTypeClass_field_0x04 ) /*0x5c3ea4*/
  {
    if ( BYTE1(v27.IsometricTileTypeClass_field_0x0C) ) /*0x5c3eac*/
      __3_YAXPAX_Z((void *)v27.IsometricTileTypeClass_field_0x04); /*0x5c3eaf*/
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
    MPCooperative_field_0x40 = this->u32_40; /*0x5c4013*/
    if ( MPCooperative_field_0x40 && ((this->q048) & 0xFF) ) /*0x5c401e*/
    {
      if ( this->u32_4C ) /*0x5c4029*/
        Movie::SetupScreen((int)MPCooperative_field_0x40, 0); /*0x5c4032*/
      else
        Movie::SetupScreen((int)MPCooperative_field_0x40, 1); /*0x5c403f*/
      Movie::SetupScreen((int)this->u32_40, (int)this->u32_4C); /*0x5c403b*/
      Array::GetElementAt((int *)this->u32_40, &v11, -1); /*0x5c405a*/
      v7 = dword_A8B8D8; /*0x5c4063*/
      sprintf(Buffer, "%s.MAP", v11); /*0x5c4074*/
      for ( i = 0; i < v7; ++i ) /*0x5c4080*/
      {
        if ( !_strcmpi((char *)(*(unsigned int *)(dword_A8B8CC + 4 * i) + 88), Buffer) ) /*0x5c4094*/
          break; /*0x5c409e*/
      }
      *(unsigned int *)&g_GameRulesOptions = i; /*0x5c40ab*/
      dword_A8B230[130].ptr_8 = (void *)i; /*0x5c40b3*/
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
    v5 = (char *)this->u32_40; /*0x5c40e9*/
      if ( !v5 ) /*0x5c40ee*/
        return; /*0x5c40ee*/
      goto LABEL_22; /*0x5c40ee*/
  }
  if ( !BYTE1(this->q048) ) /*0x5c3f9b*/
    goto LABEL_21; /*0x5c3f9b*/
  Current = (HWND)Dialog::GetCurrent(); /*0x5c3fa6*/
  DlgItem = GetDlgItem(Current, 1363); /*0x5c3fba*/
  v4 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x5c3fc6*/
  if ( v4 != -1 ) /*0x5c3fcb*/
  {
    if ( SendMessageA(DlgItem, 0x188u, 0, 0) == v4 - 1 ) /*0x5c3fee*/
      SendMessageA(DlgItem, 0x186u, v4 - 2, 0); /*0x5c3ffc*/
    SendMessageA(DlgItem, 0x182u, v4 - 1, 0); /*0x5c4008*/
    (this->q048) = ((this->q048) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x5c400a*/
    goto LABEL_21; /*0x5c400e*/
  }
  v5 = (char *)this->u32_40; /*0x5c3fcd*/
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

  MPCooperative_field_0x40 = this->u32_40; /*0x5c4120*/
  if ( !MPCooperative_field_0x40 ) /*0x5c4125*/
  {
    v3 = (MissionClass *)__2_YAPAXI_Z(0x70u); /*0x5c4129*/
    if ( v3 ) /*0x5c4133*/
      v4 = MissionClass::Init(v3); /*0x5c4137*/
    else
      v4 = 0; /*0x5c413e*/
    this->u32_40 = v4; /*0x5c4144*/
    LOBYTE(MPCooperative_field_0x40) = Movie::SetupScreen((int)v4, 0); /*0x5c4147*/
  }
  v5 = (char *)this->u32_40; /*0x5c414c*/
  if ( v5 ) /*0x5c4151*/
  {
    if ( dword_A8DA84 == 2 ) /*0x5c415e*/
      String::AssignWideToChar(v5, (char *)*dword_A8DA78, (char *)dword_A8DA78[1]); /*0x5c416c*/
    (*((void (**)(MPCooperative *))this->ptr_0 + 24))(this); /*0x5c4175*/
    LOBYTE(MPCooperative_field_0x40) = MPCooperative::ReadCoopSaveINI((char *)this->u32_40); /*0x5c417b*/
    if ( (unsigned char)MPCooperative_field_0x40 ) /*0x5c4182*/
    {
      if ( Dialog::GetCurrentType() == 107 ) /*0x5c4190*/
      {
        LOBYTE(MPCooperative_field_0x40) = (((this->q048) >> 8) & 0xFF); /*0x5c4196*/
        if ( !(unsigned char)MPCooperative_field_0x40 ) /*0x5c419b*/
        {
          LoadCoopCampaignSave((char *)this->u32_40, Destination); /*0x5c41a9*/
          LOBYTE(MPCooperative_field_0x40) = 0; /*0x5c41b6*/
          v6 = 0; /*0x5c41c2*/
          strcat(Destination, g_Str_File__MAP); /*0x5c41d5*/
          v7 = dword_A8B8D8; /*0x5c41de*/
          v8 = 0; /*0x5c41e4*/
          if ( dword_A8B8D8 > 0 ) /*0x5c41e8*/
          {
            MPCooperative_field_0x40 = (unsigned int *)dword_A8B8CC; /*0x5c41ee*/
            while ( !v6 ) /*0x5c41f5*/
            {
              v9 = _strcmpi((char *)(MPCooperative_field_0x40[v8] + 88), Destination) == 0; /*0x5c420b*/
              MPCooperative_field_0x40 = (unsigned int *)dword_A8B8CC; /*0x5c420d*/
              if ( v9 ) /*0x5c4212*/
                v6 = *(unsigned int *)(dword_A8B8CC + 4 * v8); /*0x5c4214*/
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
              LOBYTE(MPCooperative_field_0x40) = SendMessageA(DlgItem, 0x19Au, v12, v6); /*0x5c4279*/
              (this->q048) = ((this->q048) & ~(0xFF << 8)) | (((1) & 0xFF) << 8); /*0x5c4282*/
            }
          }
        }
      }
      else
      {
        v14 = GetStringCSF(aTxtSaveCampAva, 0, g_Str_File_MPCoop_cpp, 1920); /*0x5c429f*/
        LOBYTE(MPCooperative_field_0x40) = Dialog::ShowMessage(-1, (size_t)v14); /*0x5c42a7*/
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
  void **pList; // esi
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
    v2 = (MPCooperative *)__2_YAPAXI_Z(8u); /*0x5c42e2*/
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
  v29 = &vt_DynamicVectorClass_MPlayerScoreType; /*0x5c4323*/
  v33 = 10; /*0x5c432b*/
  v32 = 0; /*0x5c4333*/
  MPCooperative::BuildScoreEntries((int)MPCooperative_field_0x40, (int)&v29, &v28); /*0x5c4337*/
  v6 = (int *)this->MPCooperative_field_0x40; /*0x5c433c*/
  v25 = 0; /*0x5c4344*/
  if ( (unsigned __int8)Movie::GetSectionID(v6, &v24) ) /*0x5c4348*/
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
    uniqueId = dword_A8B230[43].uniqueId; /*0x5c43c9*/
    if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x5c43d8*/
    {
      pList = &dword_A8B230[43].ptr_2; /*0x5c43cf*/
      uniqueId += Timer::GetTicks() - (unsigned int)*pList; /*0x5c43e4*/
    }
    v11 = *(unsigned int *)this->MPCooperative_field_0x50; /*0x5c43f0*/
    v23 = *(wchar_t **)(v25 + 4); /*0x5c43f2*/
  }
  else
  {
    uniqueId = dword_A8B230[43].uniqueId; /*0x5c43fa*/
    if ( dword_A8B230[43].ptr_8 != (void *)-1 ) /*0x5c440f*/
    {
      v12 = &dword_A8B230[43].ptr_8; /*0x5c4400*/
      uniqueId += Timer::GetTicks() - (unsigned int)*v12; /*0x5c441b*/
    }
    MPCooperative_field_0x50 = this->MPCooperative_field_0x50; /*0x5c441d*/
    v23 = &g_TypeClass_DefaultString; /*0x5c4420*/
    v11 = *(unsigned int *)MPCooperative_field_0x50->__pad_0; /*0x5c4425*/
  }
  v14 = v27; /*0x5c442b*/
  v22 = (void ***)v8; /*0x5c4431*/
  (v14) = ((v14) & ~0xFF) | ((v26 < v27) & 0xFF); /*0x5c4432*/
  v21 = v14; /*0x5c4435*/
  v20 = uniqueId; /*0x5c4436*/
  MPCooperative::processTurnEnd((MPCooperative *)v19, &v29); /*0x5c4441*/
  (*(void (**)(MultiplayerGameMode *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, int, void ***, wchar_t *))(v11 + 4))( /*0x5c4449*/
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
        __3_YAXPAX_Z(*(void **)Block); /*0x5c4461*/
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
  v29 = &vt_VectorClass_MPlayerScoreType; /*0x5c44b1*/
  if ( Block ) /*0x5c44b9*/
  {
    if ( v31 ) /*0x5c44c1*/
      __3_YAXPAX_Z(Block); /*0x5c44c4*/
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
  void (**v8)(unsigned int *, int); // edi
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
        v4 = (MPCooperative *)__2_YAPAXI_Z(4u); /*0x5c4527*/
        if ( v4 ) /*0x5c4531*/
        {
          started = MPCooperative::startGame(v4); /*0x5c453e*/
          if ( started ) /*0x5c4542*/
          {
            MPCooperative::applyVoteResult((MPCooperative *)&v21, 0, 0); /*0x5c4550*/
            v16 = &v20; /*0x5c455d*/
            v15 = &v21; /*0x5c455e*/
            v6 = this->MPCooperative_field_0x40; /*0x5c455f*/
            v21 = &vt_DynamicVectorClass_MPlayerScoreType; /*0x5c4562*/
            v25 = 10; /*0x5c456a*/
            v24 = 0; /*0x5c4572*/
            MPCooperative::BuildScoreEntries((int)v6, (int)&v21, &v20); /*0x5c457a*/
            v7 = (int *)this->MPCooperative_field_0x40; /*0x5c457f*/
            v17 = 0; /*0x5c4587*/
            if ( (unsigned __int8)Movie::GetSectionID(v7, &a2) ) /*0x5c458f*/
              Movie::GetSection((int)&g_DDrawSurfaceManager, a2, &v17); /*0x5c45b1*/
            else
              a2 = -1; /*0x5c4598*/
            v8 = (void (**)(unsigned int *, int))*started; /*0x5c45bf*/
            v16 = *(int **)(v17 + 4); /*0x5c45ca*/
            v15 = (void ***)(a2 + 1); /*0x5c45cf*/
            v14 = MEMORY[0xA8EB00].ptr_0[26]; /*0x5c45d0*/
            v13 = v20; /*0x5c45d1*/
            MPCooperative::processTurnEnd((MPCooperative *)v12, &v21); /*0x5c45dc*/
            ((void (*)(unsigned int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, int, void ***, int *))v8[1])( /*0x5c45e3*/
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
            (*(void (**)(unsigned int *, int))*started)(started, 1); /*0x5c45ec*/
            if ( v24 ) /*0x5c45f4*/
            {
              do /*0x5c463c*/
              {
                v9 = Block; /*0x5c45f6*/
                if ( *(unsigned int *)Block ) /*0x5c45fa*/
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
                      *((unsigned int *)Block + v11 - 1) = *((unsigned int *)Block + v11); /*0x5c462e*/
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
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // [esp+8h] [ebp-14h]
  __int16 v9[2]; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+10h] [ebp-Ch] BYREF
  int v11[2]; // [esp+14h] [ebp-8h] BYREF

  PtrVector::Destroy(&stru_A8DA74); /*0x5c4cac*/
  v2 = 0; /*0x5c4cb1*/
  dword_A8B54C = 0; /*0x5c4cb3*/
  result = (int)this->q068; /*0x5c4cb9*/
  if ( result > 0 ) /*0x5c4cbe*/
  {
    do /*0x5c4e7b*/
    {
      v4 = 0; /*0x5c4ccb*/
      if ( dword_A80238 > 0 ) /*0x5c4ccf*/
      {
        while ( _wcsicmp( /*0x5c4cf5*/
                  (const wchar_t *)(*((unsigned int *)stru_A80220.? + v4) + 90154),
                  *((const wchar_t **)this->u32_5C + v2)) )
        {
          if ( ++v4 >= dword_A80238 ) /*0x5c4cff*/
            goto LABEL_16; /*0x5c4cff*/
        }
        *(unsigned int *)(*((unsigned int *)this->u32_5C + v2) + 111) = v4; /*0x5c4d11*/
        v5 = __2_YAPAXI_Z(0x85u); /*0x5c4d14*/
        v6 = v5; /*0x5c4d19*/
        if ( v5 ) /*0x5c4d20*/
        {
          Waypoint::InitInvalid((Waypoint *)(v5 + 40)); /*0x5c4d25*/
          v8 = v6; /*0x5c4d2a*/
        }
        else
        {
          v8 = 0; /*0x5c4d30*/
          v6 = 0; /*0x5c4d38*/
        }
        wcscpy((wchar_t *)v6, *((const wchar_t **)this->u32_5C + v2)); /*0x5c4d44*/
        v6->u32_7B = *(unsigned int *)(*((unsigned int *)this->u32_5C + v2) + 123); /*0x5c4d55*/
        v6->q_4B = *(unsigned int *)(*((unsigned int *)this->u32_5C + v2) + 75); /*0x5c4d61*/
        v6->u32_53 = *(unsigned int *)(*((unsigned int *)this->u32_5C + v2) + 83); /*0x5c4d6f*/
        strcpy(&v6->relatedTagsCapacity, (const char *)(*((unsigned int *)this->u32_5C + v2) + 52)); /*0x5c4d90*/
        v8->q04F = *(unsigned int *)(*((unsigned int *)this->u32_5C + v2) + 79); /*0x5c4da6*/
        v8->u32_57 = *(unsigned int *)(*((unsigned int *)this->u32_5C + v2) + 87); /*0x5c4db2*/
        v8->u32_6B = *(unsigned int *)(*((unsigned int *)this->u32_5C + v2) + 107); /*0x5c4dbe*/
        v8->u32_73 = *(unsigned int *)(*((unsigned int *)this->u32_5C + v2) + 115); /*0x5c4dca*/
        v8->u32_77 = *(unsigned int *)(*((unsigned int *)this->u32_5C + v2) + 119); /*0x5c4dd6*/
        v8->u32_7B = *(unsigned int *)(*((unsigned int *)this->u32_5C + v2) + 123); /*0x5c4deb*/
        Network::GetAddress((Network *)(*((unsigned int *)this->u32_5C + v2) + 40), &v10, (int)v11, v9); /*0x5c4dfd*/
        NetworkID::Assign(&v8->ptr_6, &v10, (int)v11, v9[0]); /*0x5c4e14*/
        if ( dword_A8DA84 < dword_A8DA7C /*0x5c4e50*/
          || (byte_A8DA81 || !dword_A8DA7C)
          && dword_A8DA88 > 0
          && (*(unsigned __int8 (**)(PtrVector *, int, unsigned int))(*(unsigned int *)&stru_A8DA74 + 8))(
               &stru_A8DA74,
               dword_A8DA7C + dword_A8DA88,
               0) )
        {
          v7 = dword_A8DA84++; /*0x5c4e5d*/
          dword_A8DA78[v7] = v8; /*0x5c4e6c*/
        }
        ++dword_A8B54C; /*0x5c4e6f*/
      }
      LABEL_16:
      result = (int)this->q068; /*0x5c4e75*/
        ++v2; /*0x5c4e78*/
    }
    while ( v2 < result ); /*0x5c4e7b*/
  }
  return result; /*0x5c4e83*/

}
}
// 0x5C4F10
namespace gamemd {
int MPCooperative_QueryInterface(int a2, char a3)
{
  void *v3; // ecx
  void *v4; // esi
  MPCooperative *v6; // [esp+0h] [ebp-4h]

  v4 = v3; /*0x5c4f11*/
  MPCooperative_Cleanup(v6, a2); /*0x5c4f13*/
  if ( ((uint8_t)a2 & 1) != 0 ) /*0x5c4f1d*/
    operator delete((v4)); /*0x5c4f20*/
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

  this->Items = 0; /*0x5c4f3d*/
  this->Capacity = 0; /*0x5c4f40*/
  (this->IsInitialized) = ((this->IsInitialized) & ~0xFF) | ((1) & 0xFF); /*0x5c4f43*/
  (this->IsInitialized) = ((this->IsInitialized) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x5c4f47*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x5c4f4a) */
  if ( this != (MPCooperative *)a2 ) /*0x5c4f50*/
  {
    MPCooperative::ddtor((int)this); /*0x5c4f52*/
    v3 = a2->u32_8; /*0x5c4f58*/
    this->Capacity = v3; /*0x5c4f5d*/
    if ( v3 ) /*0x5c4f60*/
    {
      v4 = __2_YAPAXI_Z(4 * (unsigned int)v3); /*0x5c4f66*/
      this->Items = v4; /*0x5c4f70*/
      if ( v4 ) /*0x5c4f73*/
      {
        MPCooperative_field_0x8 = this->Capacity; /*0x5c4f75*/
        v6 = 0; /*0x5c4f78*/
        (this->IsInitialized) = ((this->IsInitialized) & ~(0xFF << 8)) | (((1) & 0xFF) << 8); /*0x5c4f7c*/
        if ( (int)MPCooperative_field_0x8 > 0 ) /*0x5c4f80*/
        {
          do /*0x5c4f94*/
          {
            *((unsigned int *)this->Items + v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x5c4f8b*/
            ++v6; /*0x5c4f91*/
          }
          while ( v6 < (int)this->Capacity ); /*0x5c4f94*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x5c4f98*/
      (this->IsInitialized) = ((this->IsInitialized) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x5c4f9b*/
    }
  }
  this->MPCooperative_field_0x10 = a2->q010; /*0x5c4fa1*/
  this->MPCooperative_field_0x14 = a2->q014; /*0x5c4fa7*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_DynamicVectorClass) */  /*0x5c4faa*/
  return &this->ptr_0; /*0x5c4fb2*/

}
}
// 0x696F30
namespace gamemd {
int MPCooperative::finalizeSession()
{

  int result = -2; // eax /*0x696f33*/
  if ( *(void **)this->__pad_054 + 3) != (void *)-2 /*0x696f40*/
    || *(MultiplayerGameMode **)this->ptr_50 + 3) != (MultiplayerGameMode *)-1 )
  {
    return *(int *)this->ptr_50 + 3); /*0x696f42*/
  }
  return result; /*0x696f45*/

}
}
// 0x46D330
namespace gamemd {
unsigned int * MPCooperative::initGame()
{

  /* X11: vtable install elided (implicit via CampaignScoreClass virtuals 0x46d334) */
  this->MPCooperative_field_0x4 = 0; /*0x46d33a*/
  dword_89E050 = 0; /*0x46d33d*/
  stru_81AF8C.?[6] = -1; /*0x46d343*/
  return &this->onBridge; /*0x46d34d*/

}
} // namespace gamemd

// 0x470C00
namespace gamemd {
unsigned int * MPCooperative::startGame()
{

  /* X11: vtable install elided (implicit via CampaignEndScoreClass virtuals 0x470c04) */
  dword_89E008 = -1; /*0x470c0a*/
  dword_89E020 = 0; /*0x470c14*/
  dword_89DFD4 = 0; /*0x470c1a*/
  return &this->MPCooperative_field_0x0; /*0x470c20*/

}
} // namespace gamemd

// 0x49BCA0
namespace gamemd {
char MPCooperative::GetMovieScore(CampaignEndScoreClass * result)
{
  int result; // eax

  if ( this->u32_6C ) /*0x49bca0*/
  {
    result = *(&this->u32_40); /*0x49bcac*/
    *result = result; /*0x49bcb3*/
    (*((unsigned char *)&(result))) = 1; /*0x49bcb5*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x49bca7*/
  }
  return result; /*0x49bca9*/
}
} // namespace gamemd

// 0x5C1980
namespace gamemd {
int sub_5C1980()
{

  int result = -1; // eax /*0x5c198a*/
  int v2 = 0; // ebp /*0x5c198d*/
  int v4; // [esp+4h] [ebp-8h]
  v4 = -1; /*0x5c1991*/
  if ( g_DDrawSurfaceManager.scenario[13] > 0 ) /*0x5c1995*/
  {
    do /*0x5c1a00*/
    {
      int v5; // [esp+8h] [ebp-4h] BYREF
      Movie::GetSection((int)&g_DDrawSurfaceManager, v2, &v5); /*0x5c19a5*/
      int i; // ebx
      for ( i = 0; i < 780; i += 260 ) /*0x5c19aa*/
      {
        if ( *(unsigned int *)&g_GameRulesOptions ) /*0x5c19b3*/
        {
          if ( !_strnicmp( /*0x5c19da*/
                  (const char *)(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&g_GameRulesOptions) + 88),
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


  if ( dword_A8DA84 == 2 ) /*0x5c1d8b*/
  {
    char *MPCooperative_field_0x40; // ecx
    MPCooperative_field_0x40 = (char *)this->u32_40; /*0x5c1d8d*/
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
    return PostMessageA((HWND)result, 0x405u, 1u, stru_A8EB00.ptr_0[26]); /*0x5c21c3*/
  return result; /*0x5c21c9*/
}
} // namespace gamemd

// 0x5C2640
namespace gamemd {
void MPCooperative::Clone(HWND hDlg)
{

  if ( hDlg ) /*0x5c264a*/
  {
    int v3 = dword_A8DA84; // edi /*0x5c264e*/
    ObjectClass *i; // esi
    for ( i = 0; (int)i < v3; i = &i->AbstractClass_1 ) /*0x5c2658*/
    {
      int ResourceID2CSF; // eax
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
int MPCooperative::Cleanup(void *a1_1, void *a2)
{

  HWND GameUI; // eax
  GameUI = (HWND)Dialog::FindGameUI(); /*0x5c3f34*/
  SkirmishDialog *v3; // esi
  v3 = (SkirmishDialog *)GameUI; /*0x5c3f39*/
  if ( GameUI ) /*0x5c3f3d*/
  {
    CampaignCoop::Setup((CampaignCoop *)a1_1, GameUI, 0); /*0x5c3f44*/
    SkirmishDialog::FillComboBoxes(v3); /*0x5c3f4b*/
  }
  int result; // eax
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


  int v2 = 0; // esi /*0x5c4677*/
  int *MPCooperative_field_0x40; // ecx
  MPCooperative_field_0x40 = (int *)this->u32_40; /*0x5c4679*/
  if ( !MPCooperative_field_0x40 ) /*0x5c467e*/
    return 0; /*0x5c4681*/
  int v5; // [esp+8h] [ebp-Ch] BYREF
  MPCooperative::GetMovieScore(MPCooperative_field_0x40, &v5); /*0x5c468d*/
  int v6; // [esp+Ch] [ebp-8h] BYREF
  Movie::GetState((int *)this->u32_40, &v6); /*0x5c469a*/
  if ( v5 == v6 ) /*0x5c46a9*/
  {
    int v7; // [esp+10h] [ebp-4h] BYREF
    Movie::GetSectionID((int *)this->u32_40, &v7); /*0x5c46b3*/
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
  if ( this->u32_40 ) /*0x5c4e9a*/
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
DynamicVector * MPCooperative::saveGameState(unsigned int * Block, char a2)
{

  void *v3; // eax
  v3 = (void *)*(Block + 1); /*0x5c4fc3*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x5c4fc6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5c4fd0*/
  {
    operator delete((v3)); /*0x5c4fd8*/
    *(Block + 1) = 0; /*0x5c4fe0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5c4feb*/
  *(Block + 2) = 0; /*0x5c4ff1*/
  if ( (a2 & 1) != 0 ) /*0x5c4ff8*/
    operator delete((Block)); /*0x5c4ffb*/
  return Block; /*0x5c5005*/
}
} // namespace gamemd

// 0x5C5010
namespace gamemd {
void MPCooperative::loadGameState()
{

  void *v2 = this->Items; // eax /*0x5c5016*/
  this->Items = 0; /*0x5c5019*/
  if ( v2 && this->IsAllocated ) /*0x5c5020*/
  {
    operator delete((v2)); /*0x5c5026*/
    this->Items = 0; /*0x5c502e*/
  }
  this->IsAllocated = 0; /*0x5c5031*/
  this->Capacity = 0; /*0x5c5034*/
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

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x5c506a*/

}
} // namespace gamemd

// 0x5C50D0
namespace gamemd {
void MPCooperative::processPlayerInput()
{

  void *v2 = this->Items; // eax /*0x5c50d6*/
  this->Items = 0; /*0x5c50d9*/
  if ( v2 && this->IsAllocated ) /*0x5c50e0*/
  {
    operator delete((v2)); /*0x5c50e6*/
    this->Items = 0; /*0x5c50ee*/
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


  int v2 = this->Capacity; // esi /*0x5c5132*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x5c513d*/
  {
    int v3 = 0; // edx /*0x5c513f*/
    if ( v2 <= 0 ) /*0x5c5143*/
      return 1; /*0x5c5163*/
    unsigned int *v4 = *&this->Items; // eax /*0x5c5145*/
    int v5; // ecx
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

  if ( a2 ) /*0x5c517c*/
  {
    this->IsInitialized = 0; /*0x5c5186*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x5c518c*/
      v4 = a3; /*0x5c51a2*/
    else
      v4 = operator new(4 * a2); /*0x5c519e*/
    this->IsInitialized = 1; /*0x5c51a6*/
    if ( v4 ) /*0x5c51aa*/
    {
      if ( this->Items ) /*0x5c51b5*/
      {
        int v6 = this->Capacity; // ecx /*0x5c51bc*/
        if ( a2 < v6 ) /*0x5c51c1*/
          v6 = a2; /*0x5c51c3*/
        int i; // eax
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(this->Items + 4 * i - 4) ) /*0x5c51c9*/
          ++i; /*0x5c51ce*/
        if ( this->IsAllocated ) /*0x5c51db*/
        {
          operator delete((void *)(this->Items)); /*0x5c51e6*/
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
    (*(void (**)(void *))(*&this->q010))(this); /*0x5c5212*/
    return 1; /*0x5c5218*/
  }
}
} // namespace gamemd

// 0x5C5220
namespace gamemd {
void MPCooperative::ddtor(void *a1)
{
  if ( this->Items && this->IsAllocated ) /*0x5c522d*/
  {
    operator delete((void *)(this->Items)); /*0x5c5233*/
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

  if ( !this->IsInitialized ) /*0x5c5250*/
    return 0; /*0x5c5258*/
  int v3 = this->Capacity; // edx /*0x5c525e*/
  int result = 0; // eax /*0x5c5261*/
  if ( v3 <= 0 ) /*0x5c5265*/
    return -1; /*0x5c527c*/
  unsigned int *i; // ecx
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

  if ( a2 ) /*0x5c52bc*/
  {
    this->IsInitialized = 0; /*0x5c52c2*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x5c52c8*/
      v4 = a3; /*0x5c52de*/
    else
      v4 = operator new(4 * a2); /*0x5c52da*/
    this->IsInitialized = 1; /*0x5c52e2*/
    if ( !v4 ) /*0x5c52e6*/
      return 0; /*0x5c535a*/
    if ( this->Items ) /*0x5c52e8*/
    {
      int v5 = this->Capacity; // ecx /*0x5c52ef*/
      if ( a2 < v5 ) /*0x5c52f4*/
        v5 = a2; /*0x5c52f6*/
      int i; // eax
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(this->Items + 4 * i - 4) ) /*0x5c52fc*/
        ++i; /*0x5c5301*/
      if ( this->IsAllocated ) /*0x5c530e*/
      {
        operator delete((void *)(this->Items)); /*0x5c5319*/
        this->Items = 0; /*0x5c5321*/
      }
    }
    this->Items = v4; /*0x5c532a*/
    this->Capacity = a2; /*0x5c5332*/
    this->IsAllocated = a3 == 0; /*0x5c5335*/
  }
  else
  {
    (*(void (**)(void *))(*&this->Count))(this); /*0x5c533e*/
  }
  int v7 = this->Capacity; // eax /*0x5c5341*/
  if ( v7 < this->Items ) /*0x5c5349*/
    this->Items = v7; /*0x5c534b*/
  return 1; /*0x5c534e*/
}
} // namespace gamemd

// 0x5C5360
namespace gamemd {
int MPCooperative::validatePlayerAction(unsigned int * a2)
{

  int v2 = this->Items; // edx /*0x5c5360*/
  int result = 0; // eax /*0x5c5363*/
  if ( v2 <= 0 ) /*0x5c5368*/
    return -1; /*0x5c537f*/
  unsigned int *i; // ecx
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

  if ( a2 ) /*0x5c53dc*/
  {
    this->IsInitialized = 0; /*0x5c53e6*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x5c53ec*/
      v4 = a3; /*0x5c5402*/
    else
      v4 = operator new(4 * a2); /*0x5c53fe*/
    this->IsInitialized = 1; /*0x5c5406*/
    if ( v4 ) /*0x5c540a*/
    {
      if ( this->Items ) /*0x5c5415*/
      {
        int v6 = this->Capacity; // ecx /*0x5c541c*/
        if ( a2 < v6 ) /*0x5c5421*/
          v6 = a2; /*0x5c5423*/
        int i; // eax
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(this->Items + 4 * i - 4) ) /*0x5c5429*/
          ++i; /*0x5c542e*/
        if ( this->IsAllocated ) /*0x5c543b*/
        {
          operator delete((void *)(this->Items)); /*0x5c5446*/
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
    (*(void (**)(void *))(*&this->q010))(this); /*0x5c5472*/
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
    operator delete((void *)(this->Items)); /*0x5c5493*/
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

  if ( !this->IsInitialized ) /*0x5c54b0*/
    return 0; /*0x5c54b8*/
  int v3 = this->Capacity; // edx /*0x5c54be*/
  int result = 0; // eax /*0x5c54c1*/
  if ( v3 <= 0 ) /*0x5c54c5*/
    return -1; /*0x5c54dc*/
  unsigned int *i; // ecx
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

  if ( a2 ) /*0x5c577c*/
  {
    this->IsInitialized = 0; /*0x5c5782*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x5c5788*/
      v4 = a3; /*0x5c579e*/
    else
      v4 = operator new(4 * a2); /*0x5c579a*/
    this->IsInitialized = 1; /*0x5c57a2*/
    if ( !v4 ) /*0x5c57a6*/
      return 0; /*0x5c581a*/
    if ( this->Items ) /*0x5c57a8*/
    {
      int v5 = this->Capacity; // ecx /*0x5c57af*/
      if ( a2 < v5 ) /*0x5c57b4*/
        v5 = a2; /*0x5c57b6*/
      int i; // eax
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(this->Items + 4 * i - 4) ) /*0x5c57bc*/
        ++i; /*0x5c57c1*/
      if ( this->IsAllocated ) /*0x5c57ce*/
      {
        operator delete((void *)(this->Items)); /*0x5c57d9*/
        this->Items = 0; /*0x5c57e1*/
      }
    }
    this->Items = v4; /*0x5c57ea*/
    this->Capacity = a2; /*0x5c57f2*/
    this->IsAllocated = a3 == 0; /*0x5c57f5*/
  }
  else
  {
    (*(void (**)(void *))(*&this->Count))(this); /*0x5c57fe*/
  }
  int v7 = this->Capacity; // eax /*0x5c5801*/
  if ( v7 < this->Items ) /*0x5c5809*/
    this->Items = v7; /*0x5c580b*/
  return 1; /*0x5c580e*/
}
} // namespace gamemd

// 0x5C5820
namespace gamemd {
int MPCooperative::handlePlayerReady(unsigned int * a2)
{

  int v2 = this->Items; // edx /*0x5c5820*/
  int result = 0; // eax /*0x5c5823*/
  if ( v2 <= 0 ) /*0x5c5828*/
    return -1; /*0x5c583f*/
  unsigned int *i; // ecx
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
VectorClass_flat * MPCooperative::verifyGameIntegrity(unsigned int * Block, char a2)
{

  void *v3; // eax
  v3 = (void *)*(Block + 1); /*0x5c5853*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x5c5856*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5c5860*/
  {
    operator delete((v3)); /*0x5c5868*/
    *(Block + 1) = 0; /*0x5c5870*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5c587b*/
  *(Block + 2) = 0; /*0x5c5881*/
  if ( (a2 & 1) != 0 ) /*0x5c5888*/
    operator delete((Block)); /*0x5c588b*/
  return Block; /*0x5c5895*/
}
} // namespace gamemd

// 0x5C58A0
namespace gamemd {
VectorClass_flat * MPCooperative::processVote(unsigned int * Block, char a2)
{

  void *v3; // eax
  v3 = (void *)*(Block + 1); /*0x5c58a3*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x5c58a6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5c58b0*/
  {
    operator delete((v3)); /*0x5c58b8*/
    *(Block + 1) = 0; /*0x5c58c0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5c58cb*/
  *(Block + 2) = 0; /*0x5c58d1*/
  if ( (a2 & 1) != 0 ) /*0x5c58d8*/
    operator delete((Block)); /*0x5c58db*/
  return Block; /*0x5c58e5*/
}
} // namespace gamemd

// 0x5C5990
namespace gamemd {
DynamicVector * MPCooperative::tallyVotes(unsigned int * Block, char a2)
{

  void *v3; // eax
  v3 = (void *)*(Block + 1); /*0x5c5993*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x5c5996*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5c59a0*/
  {
    operator delete((v3)); /*0x5c59a8*/
    *(Block + 1) = 0; /*0x5c59b0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5c59bb*/
  *(Block + 2) = 0; /*0x5c59c1*/
  if ( (a2 & 1) != 0 ) /*0x5c59c8*/
    operator delete((Block)); /*0x5c59cb*/
  return Block; /*0x5c59d5*/
}
} // namespace gamemd

// 0x5C59E0
namespace gamemd {
unsigned int * MPCooperative::applyVoteResult(int a2, int a3)
{

  this->Items = 0; /*0x5c59eb*/
  this->Capacity = (void *)a2; /*0x5c59ee*/
  (this->IsInitialized) = ((this->IsInitialized) & ~0xFF) | ((1) & 0xFF); /*0x5c59f1*/
  (this->IsInitialized) = ((this->IsInitialized) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x5c59f5*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x5c59f8) */
  if ( a2 ) /*0x5c59fe*/
  {
    if ( a3 ) /*0x5c5a06*/
    {
      this->Items = (void *)a3; /*0x5c5a08*/
      return &this->ClearAndFree2_ph; /*0x5c5a0e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5c5a1d*/
    (this->IsInitialized) = ((this->IsInitialized) & ~(0xFF << 8)) | (((1) & 0xFF) << 8); /*0x5c5a20*/
  }
  return &this->ClearAndFree2_ph; /*0x5c5a0d*/

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
