// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/CoopCampaignVector_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "core/ddraw_init.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/Palette_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"

// 0x48E740
namespace gamemd {  // G42.18 ns repair
unsigned int * ConvertClass::Construct(int a2, int a3, int a4, int a5, char a6, void *a6_1, void *a7, void *a8, void *a9)
{

  int v7; // eax
  int v8; // edi
  bool v9; // cc
  unsigned char *v10; // eax
  int v11; // eax
  __int16 v12; // cx
  unsigned __int16 *v13; // eax
  int v14; // eax
  unsigned char *v15; // edi
  int v16; // eax
  unsigned char *v17; // edi
  int i; // ebp
  int j; // ebp
  int v20; // eax
  unsigned __int8 v21; // cl
  unsigned __int16 *v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // edi
  int v26; // eax
  int v28; // [esp+Ch] [ebp-14h] BYREF
  Color v29; // [esp+10h] [ebp-10h] BYREF
  int v30; // [esp+14h] [ebp-Ch]
  int v31; // [esp+1Ah] [ebp-6h]

  *&this->__pad_004 = (*(int (**)(int))(*(unsigned int *)a4 + 112))(a4); /*0x48e753*/
  *&this->q008 = 0; /*0x48e756*/
  *&this->q00C = 0; /*0x48e759*/
  *&this->q010 = 0; /*0x48e75c*/
  *&this->q014 = 0; /*0x48e75f*/
  *&this->q018 = 0; /*0x48e762*/
  *&this->q01C = 0; /*0x48e765*/
  *&this->q020 = 0; /*0x48e768*/
  *&this->q024 = 0; /*0x48e76b*/
  *&this->q028 = 0; /*0x48e76e*/
  *&this->q02C = 0; /*0x48e771*/
  *&this->q030 = 0; /*0x48e774*/
  *&this->q034 = 0; /*0x48e777*/
  *&this->q038 = 0; /*0x48e77a*/
  *&this->q03C = 0; /*0x48e77d*/
  *&this->q040 = 0; /*0x48e780*/
  *&this->q044 = 0; /*0x48e783*/
  *&this->q048 = 0; /*0x48e786*/
  *&this->q04C = 0; /*0x48e789*/
  *&this->q050 = 0; /*0x48e78c*/
  *&this->q054 = 0; /*0x48e78f*/
  *&this->q058 = 0; /*0x48e792*/
  *&this->q05C = 0; /*0x48e795*/
  *&this->q060 = 0; /*0x48e798*/
  *&this->q064 = 0; /*0x48e79b*/
  *&this->q068 = 0; /*0x48e79e*/
  *&this->q06C = 0; /*0x48e7a1*/
  *&this->q070 = 0; /*0x48e7a4*/
  *&this->q074 = 0; /*0x48e7a7*/
  *&this->q078 = 0; /*0x48e7aa*/
  *&this->q07C = 0; /*0x48e7ad*/
  *&this->q080 = 0; /*0x48e7b0*/
  *&this->q084 = 0; /*0x48e7b6*/
  *&this->q088 = 0; /*0x48e7bc*/
  *&this->q08C = 0; /*0x48e7c2*/
  *&this->q090 = 0; /*0x48e7c8*/
  *&this->q094 = 0; /*0x48e7ce*/
  *&this->q098 = 0; /*0x48e7d4*/
  *&this->q09C = 0; /*0x48e7da*/
  *&this->q0A0 = 0; /*0x48e7e0*/
  *&this->q0A4 = 0; /*0x48e7e6*/
  *&this->q0A8 = 0; /*0x48e7ec*/
  *&this->q0AC = 0; /*0x48e7f2*/
  *&this->q0B0 = 0; /*0x48e7f8*/
  *&this->q0B4 = 0; /*0x48e7fe*/
  *&this->q0B8 = 0; /*0x48e804*/
  *&this->q0BC = 0; /*0x48e80a*/
  *&this->q0C0 = 0; /*0x48e810*/
  *&this->q0C4 = 0; /*0x48e816*/
  *&this->q0C8 = 0; /*0x48e81c*/
  *&this->q0CC = 0; /*0x48e822*/
  *&this->q0D0 = 0; /*0x48e828*/
  *&this->q0D4 = 0; /*0x48e82e*/
  *&this->q0D8 = 0; /*0x48e834*/
  *&this->q0DC = 0; /*0x48e83a*/
  *&this->q0E0 = 0; /*0x48e840*/
  *&this->q0E4 = 0; /*0x48e846*/
  *&this->q0E8 = 0; /*0x48e84c*/
  *&this->q0EC = 0; /*0x48e852*/
  *&this->q0F0 = 0; /*0x48e858*/
  *&this->q0F4 = 0; /*0x48e85e*/
  *&this->q0F8 = 0; /*0x48e864*/
  *&this->q0FC = 0; /*0x48e86a*/
  *&this->q100 = 0; /*0x48e870*/
  *&this->q104 = 0; /*0x48e876*/
  *&this->q108 = 0; /*0x48e87c*/
  *&this->q10C = 0; /*0x48e882*/
  *&this->q110 = 0; /*0x48e888*/
  *&this->q114 = 0; /*0x48e88e*/
  *&this->q118 = 0; /*0x48e894*/
  *&this->q11C = 0; /*0x48e89a*/
  *&this->q120 = 0; /*0x48e8a0*/
  v7 = a5; /*0x48e8a6*/
  v8 = 1; /*0x48e8aa*/
  v9 = a5 < 1; /*0x48e8af*/
  *&this->q124 = 0; /*0x48e8b1*/
  *&this->q128 = 0; /*0x48e8b7*/
  *&this->q12C = 0; /*0x48e8bd*/
  *&this->q130 = 0; /*0x48e8c3*/
  *&this->q134 = 0; /*0x48e8c9*/
  *&this->q138 = 0; /*0x48e8cf*/
  *&this->q13C = 0; /*0x48e8d5*/
  *&this->q140 = 0; /*0x48e8db*/
  *&this->q144 = 0; /*0x48e8e1*/
  *&this->q148 = 0; /*0x48e8e7*/
  *&this->q14C = 0; /*0x48e8ed*/
  *&this->q150 = 0; /*0x48e8f3*/
  *&this->q154 = 0; /*0x48e8f9*/
  *&this->q158 = 0; /*0x48e8ff*/
  *&this->q15C = 0; /*0x48e905*/
  *&this->q160 = 0; /*0x48e90b*/
  *&this->q164 = 0; /*0x48e911*/
  *&this->q168 = 0; /*0x48e917*/
  *&this->q16C = v7; /*0x48e91d*/
  this->ConvertClass_field_0x170 = 0; /*0x48e923*/
  *(unsigned int *)this->__pad_174 = 0; /*0x48e929*/
  this->ConvertClass_field_0x178 = 0; /*0x48e92f*/
  this->u32_17C = 0; /*0x48e935*/
  *(unsigned int *)this->__pad_0 = &vt_ConvertClass; /*0x48e93b*/
  if ( v9 ) /*0x48e941*/
    *&this->q16C = 1; /*0x48e943*/
  if ( *&this->__pad_004 == 1 ) /*0x48e94f*/
  {
    v10 = (unsigned char *)__2_YAPAXI_Z(0x100u); /*0x48e95a*/
    this->ConvertClass_field_0x178 = (int)v10; /*0x48e95f*/
    *v10 = 0; /*0x48e968*/
    do /*0x48e9df*/
    {
      v11 = ComputeColorSaturation(a2 + 2 * (v8 % 256) + v8 % 256, a2 + 2 * (v8 % 256), (int)&a5); /*0x48e98b*/
      v12 = *(unsigned short *)v11; /*0x48e990*/
      LOBYTE(v11) = *(unsigned char *)(v11 + 2); /*0x48e993*/
      LOWORD(v29.Color_field_00) = v12; /*0x48e996*/
      BYTE2(v29.Color_field_00) = (unsigned __int8)v11 >> 1; /*0x48e9a5*/
      v13 = (unsigned __int16 *)Color::ConvertToRGB(&v29, (int)&v28); /*0x48e9ae*/
      LOWORD(a4) = *v13; /*0x48e9b6*/
      BYTE2(a4) = v13->field_2; /*0x48e9c5*/
      ++v8; /*0x48e9d4*/
      *(unsigned char *)(this->ConvertClass_field_0x178 + v8 - 1) = Palette::FindClosestColor((char *)a2, (Palette *)&a4); /*0x48e9db*/
    }
    while ( v8 < 256 ); /*0x48e9df*/
    v14 = __2_YAPAXI_Z(*&this->q16C << 8); /*0x48e9eb*/
    this->ConvertClass_field_0x170 = v14; /*0x48e9f0*/
    v15 = (unsigned char *)v14; /*0x48e9f6*/
    v16 = *&this->q16C; /*0x48e9f8*/
    *(unsigned int *)this->__pad_174 = &v15[256 * ((v16 - 1) >> 1)]; /*0x48ea10*/
    if ( v16 == 1 ) /*0x48ea16*/
    {
      *v15 = 0; /*0x48ea18*/
      v17 = v15 + 1; /*0x48ea1a*/
      for ( i = 1; i < 256; ++i ) /*0x48ea1b*/
        *v17++ = Palette::FindClosestColor((char *)a3, (Palette *)(a2 + 2 * (i % 256) + i % 256)); /*0x48ea40*/
    }
    else
    {
      v30 = 0; /*0x48ea53*/
      if ( v16 - 1 >= 0 ) /*0x48ea57*/
      {
        do /*0x48eb0a*/
        {
          *v15++ = 0; /*0x48ea5d*/
          for ( j = 1; j < 256; ++j ) /*0x48ea60*/
          {
            v20 = ComputeColorSaturation(a2 + 2 * (j % 256) + j % 256, a2, (int)&a5); /*0x48ea85*/
            v21 = *(unsigned char *)(v20 + 2); /*0x48ea8f*/
            LOWORD(v29.Color_field_00) = *(unsigned short *)v20; /*0x48ea92*/
            LOBYTE(v31) = v21; /*0x48ea97*/
            BYTE2(v29.Color_field_00) = v21; /*0x48eaa4*/
            BYTE2(v29.Color_field_00) = 2 * v30 * v21 / (*&this->q16C - 1); /*0x48eac2*/
            v22 = (unsigned __int16 *)Color::ConvertToRGB(&v29, (int)&v28); /*0x48eac6*/
            LOWORD(a4) = *v22; /*0x48eace*/
            BYTE2(a4) = v22->u32_2; /*0x48eadf*/
            *v15++ = Palette::FindClosestColor((char *)a3, (Palette *)&a4); /*0x48eae8*/
          }
          v23 = *&this->q16C - 1; /*0x48eb03*/
          ++v30; /*0x48eb06*/
        }
        while ( v30 <= v23 ); /*0x48eb0a*/
      }
    }
  }
  else
  {
    v24 = __2_YAPAXI_Z(*&this->q16C << 9); /*0x48eb1c*/
    v25 = *&this->q16C; /*0x48eb21*/
    this->ConvertClass_field_0x170 = v24; /*0x48eb2a*/
    *(unsigned int *)this->__pad_174 = v24 + ((v25 - 1) >> 1 << 9); /*0x48eb3a*/
    if ( !a6 ) /*0x48eb46*/
      DSurface::BlitStretch(v24, v25, a2); /*0x48eb51*/
    this->u32_180 = (unsigned __int16)g_DDraw_Gray127; /*0x48eb60*/
    this->u32_184 = HIWORD(g_DDraw_Gray127); /*0x48eb6d*/
  }
  if ( !a6 ) /*0x48eb7a*/
    ConvertClass::InitTables(this); /*0x48eb7e*/
  if ( dword_89ED08 < dword_89ED00 /*0x48ebb7*/
    || (byte_89ED05 || !dword_89ED00)
    && dword_89ED0C > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_89ECF8 + 8))(
         &dword_89ECF8,
         dword_89ED0C + dword_89ED00,
         0) )
  {
    v26 = dword_89ED08++; /*0x48ebc4*/
    *((unsigned int *)dword_89ECFC + v26) = this; /*0x48ebd3*/
  }
  return this->__pad_0; /*0x48ebd8*/

}
} // namespace gamemd
// 0x491430
namespace gamemd {
int ConvertClass::ddtor(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitPlainXlat_E *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->vtable1 /*0x49145a*/
           + 4))(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd
