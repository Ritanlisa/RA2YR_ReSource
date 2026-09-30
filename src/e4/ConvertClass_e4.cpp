// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/CoopCampaignVector_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "core/ddraw_init.hpp"

// 0x48E740
namespace gamemd {
unsigned int * ConvertClass::Construct(char * a2, char * a3, int a4, int a5, char a6)
{

  int v7; // eax
  int v8; // edi
  bool v9; // cc
  unsigned char *v10; // eax
  int v11; // eax
  int16_t v12; // cx
  int v13; // eax
  unsigned char *v14; // eax
  unsigned char *v15; // edi
  int v16; // eax
  unsigned char *v17; // edi
  int i; // ebp
  int j; // ebp
  int v20; // eax
  uint8_t v21; // cl
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // edi
  int v26; // eax
  unsigned char v28[4]; // [esp+Ch] [ebp-14h] BYREF
  int16_t v29; // [esp+10h] [ebp-10h] BYREF
  char v30; // [esp+12h] [ebp-Eh]
  int v31; // [esp+14h] [ebp-Ch]
  int v32; // [esp+1Ah] [ebp-6h]

  *((char *)this + 1) = (*(int (**)(int))(*(unsigned int *)a4 + 112))(a4); /*0x48e753*/
  *((char *)this + 2) = 0; /*0x48e756*/
  *((char *)this + 3) = 0; /*0x48e759*/
  *((char *)this + 4) = 0; /*0x48e75c*/
  *((char *)this + 5) = 0; /*0x48e75f*/
  *((char *)this + 6) = 0; /*0x48e762*/
  *((char *)this + 7) = 0; /*0x48e765*/
  *((char *)this + 8) = 0; /*0x48e768*/
  *((char *)this + 9) = 0; /*0x48e76b*/
  *((char *)this + 10) = 0; /*0x48e76e*/
  *((char *)this + 11) = 0; /*0x48e771*/
  *((char *)this + 12) = 0; /*0x48e774*/
  *((char *)this + 13) = 0; /*0x48e777*/
  *((char *)this + 14) = 0; /*0x48e77a*/
  *((char *)this + 15) = 0; /*0x48e77d*/
  *((char *)this + 16) = 0; /*0x48e780*/
  *((char *)this + 17) = 0; /*0x48e783*/
  *((char *)this + 18) = 0; /*0x48e786*/
  *((char *)this + 19) = 0; /*0x48e789*/
  *((char *)this + 20) = 0; /*0x48e78c*/
  *((char *)this + 21) = 0; /*0x48e78f*/
  *((char *)this + 22) = 0; /*0x48e792*/
  *((char *)this + 23) = 0; /*0x48e795*/
  *((char *)this + 24) = 0; /*0x48e798*/
  *((char *)this + 25) = 0; /*0x48e79b*/
  *((char *)this + 26) = 0; /*0x48e79e*/
  *((char *)this + 27) = 0; /*0x48e7a1*/
  *((char *)this + 28) = 0; /*0x48e7a4*/
  *((char *)this + 29) = 0; /*0x48e7a7*/
  *((char *)this + 30) = 0; /*0x48e7aa*/
  *((char *)this + 31) = 0; /*0x48e7ad*/
  *((char *)this + 32) = 0; /*0x48e7b0*/
  *((char *)this + 33) = 0; /*0x48e7b6*/
  *((char *)this + 34) = 0; /*0x48e7bc*/
  *((char *)this + 35) = 0; /*0x48e7c2*/
  *((char *)this + 36) = 0; /*0x48e7c8*/
  *((char *)this + 37) = 0; /*0x48e7ce*/
  *((char *)this + 38) = 0; /*0x48e7d4*/
  *((char *)this + 39) = 0; /*0x48e7da*/
  *((char *)this + 40) = 0; /*0x48e7e0*/
  *((char *)this + 41) = 0; /*0x48e7e6*/
  *((char *)this + 42) = 0; /*0x48e7ec*/
  *((char *)this + 43) = 0; /*0x48e7f2*/
  *((char *)this + 44) = 0; /*0x48e7f8*/
  *((char *)this + 45) = 0; /*0x48e7fe*/
  *((char *)this + 46) = 0; /*0x48e804*/
  *((char *)this + 47) = 0; /*0x48e80a*/
  *((char *)this + 48) = 0; /*0x48e810*/
  *((char *)this + 49) = 0; /*0x48e816*/
  *((char *)this + 50) = 0; /*0x48e81c*/
  *((char *)this + 51) = 0; /*0x48e822*/
  *((char *)this + 52) = 0; /*0x48e828*/
  *((char *)this + 53) = 0; /*0x48e82e*/
  *((char *)this + 54) = 0; /*0x48e834*/
  *((char *)this + 55) = 0; /*0x48e83a*/
  *((char *)this + 56) = 0; /*0x48e840*/
  *((char *)this + 57) = 0; /*0x48e846*/
  *((char *)this + 58) = 0; /*0x48e84c*/
  *((char *)this + 59) = 0; /*0x48e852*/
  *((char *)this + 60) = 0; /*0x48e858*/
  *((char *)this + 61) = 0; /*0x48e85e*/
  *((char *)this + 62) = 0; /*0x48e864*/
  *((char *)this + 63) = 0; /*0x48e86a*/
  *((char *)this + 64) = 0; /*0x48e870*/
  *((char *)this + 65) = 0; /*0x48e876*/
  *((char *)this + 66) = 0; /*0x48e87c*/
  *((char *)this + 67) = 0; /*0x48e882*/
  *((char *)this + 68) = 0; /*0x48e888*/
  *((char *)this + 69) = 0; /*0x48e88e*/
  *((char *)this + 70) = 0; /*0x48e894*/
  *((char *)this + 71) = 0; /*0x48e89a*/
  *((char *)this + 72) = 0; /*0x48e8a0*/
  v7 = a5; /*0x48e8a6*/
  v8 = 1; /*0x48e8aa*/
  v9 = a5 < 1; /*0x48e8af*/
  *((char *)this + 73) = 0; /*0x48e8b1*/
  *((char *)this + 74) = 0; /*0x48e8b7*/
  *((char *)this + 75) = 0; /*0x48e8bd*/
  *((char *)this + 76) = 0; /*0x48e8c3*/
  *((char *)this + 77) = 0; /*0x48e8c9*/
  *((char *)this + 78) = 0; /*0x48e8cf*/
  *((char *)this + 79) = 0; /*0x48e8d5*/
  *((char *)this + 80) = 0; /*0x48e8db*/
  *((char *)this + 81) = 0; /*0x48e8e1*/
  *((char *)this + 82) = 0; /*0x48e8e7*/
  *((char *)this + 83) = 0; /*0x48e8ed*/
  *((char *)this + 84) = 0; /*0x48e8f3*/
  *((char *)this + 85) = 0; /*0x48e8f9*/
  *((char *)this + 86) = 0; /*0x48e8ff*/
  *((char *)this + 87) = 0; /*0x48e905*/
  *((char *)this + 88) = 0; /*0x48e90b*/
  *((char *)this + 89) = 0; /*0x48e911*/
  *((char *)this + 90) = 0; /*0x48e917*/
  *((char *)this + 91) = v7; /*0x48e91d*/
  *((char *)this + 92) = 0; /*0x48e923*/
  *((char *)this + 93) = 0; /*0x48e929*/
  *((char *)this + 94) = 0; /*0x48e92f*/
  *((char *)this + 95) = 0; /*0x48e935*/
  *this = (int)&ConvertClass::`vftable'; /*0x48e93b*/
  if ( v9 ) /*0x48e941*/
    *((char *)this + 91) = 1; /*0x48e943*/
  if ( *((char *)this + 1) == 1 ) /*0x48e94f*/
  {
    v10 = (unsigned char *)RA2_OPNEW(256); /*0x48e95a*/
    *((char *)this + 94) = (int)v10; /*0x48e95f*/
    *v10 = 0; /*0x48e968*/
    do /*0x48e9df*/
    {
      v11 = ComputeColorSaturation((unsigned int)&a2[2 * (v8 % 256) + v8 % 256], (int)&a2[2 * (v8 % 256)], (int)&a5); /*0x48e98b*/
      v12 = *(unsigned short *)v11; /*0x48e990*/
      IDA_LOBYTE(v11) = *(unsigned char *)(v11 + 2); /*0x48e993*/
      v29 = v12; /*0x48e996*/
      v30 = (uint8_t)v11 >> 1; /*0x48e9a5*/
      v13 = Color::ConvertToRGB((uint8_t *)&v29, (int)v28); /*0x48e9ae*/
      IDA_LOWORD(a4) = *(unsigned short *)v13; /*0x48e9b6*/
      IDA_BYTE2(a4) = *(unsigned char *)(v13 + 2); /*0x48e9c5*/
      ++v8; /*0x48e9d4*/
      *(unsigned char *)(*((char *)this + 94) + v8 - 1) = Palette::FindClosestColor(a2, (int)&a4); /*0x48e9db*/
    }
    while ( v8 < 256 ); /*0x48e9df*/
    v14 = (unsigned char *)RA2_OPNEW(*((char *)this + 91) << 8); /*0x48e9eb*/
    *((char *)this + 92) = (int)v14; /*0x48e9f0*/
    v15 = v14; /*0x48e9f6*/
    v16 = *((char *)this + 91); /*0x48e9f8*/
    *((char *)this + 93) = (int)&v15[256 * ((v16 - 1) >> 1)]; /*0x48ea10*/
    if ( v16 == 1 ) /*0x48ea16*/
    {
      *v15 = 0; /*0x48ea18*/
      v17 = v15 + 1; /*0x48ea1a*/
      for ( i = 1; i < 256; ++i ) /*0x48ea1b*/
        *v17++ = Palette::FindClosestColor(a3, (int)&a2[2 * (i % 256) + i % 256]); /*0x48ea40*/
    }
    else
    {
      v31 = 0; /*0x48ea53*/
      if ( v16 - 1 >= 0 ) /*0x48ea57*/
      {
        do /*0x48eb0a*/
        {
          *v15++ = 0; /*0x48ea5d*/
          for ( j = 1; j < 256; ++j ) /*0x48ea60*/
          {
            v20 = ComputeColorSaturation((unsigned int)&a2[2 * (j % 256) + j % 256], (int)a2, (int)&a5); /*0x48ea85*/
            v21 = *(unsigned char *)(v20 + 2); /*0x48ea8f*/
            v29 = *(unsigned short *)v20; /*0x48ea92*/
            IDA_LOBYTE(v32) = v21; /*0x48ea97*/
            v30 = v21; /*0x48eaa4*/
            v30 = 2 * v31 * v21 / (*((char *)this + 91) - 1); /*0x48eac2*/
            v22 = Color::ConvertToRGB((uint8_t *)&v29, (int)v28); /*0x48eac6*/
            IDA_LOWORD(a4) = *(unsigned short *)v22; /*0x48eace*/
            IDA_BYTE2(a4) = *(unsigned char *)(v22 + 2); /*0x48eadf*/
            *v15++ = Palette::FindClosestColor(a3, (int)&a4); /*0x48eae8*/
          }
          v23 = *((char *)this + 91) - 1; /*0x48eb03*/
          ++v31; /*0x48eb06*/
        }
        while ( v31 <= v23 ); /*0x48eb0a*/
      }
    }
  }
  else
  {
    v24 = RA2_OPNEW(*((char *)this + 91) << 9); /*0x48eb1c*/
    v25 = *((char *)this + 91); /*0x48eb21*/
    *((char *)this + 92) = v24; /*0x48eb2a*/
    *((char *)this + 93) = v24 + ((v25 - 1) >> 1 << 9); /*0x48eb3a*/
    if ( !a6 ) /*0x48eb46*/
      DSurface::BlitStretch(v24, v25, (int)a2); /*0x48eb51*/
    *((char *)this + 96) = IDA_LOWORD(g_abs_87F7E8[34176]); /*0x48eb60*/
    *((char *)this + 97) = IDA_HIWORD(g_abs_87F7E8[34176]); /*0x48eb6d*/
  }
  if ( !a6 ) /*0x48eb7a*/
    ConvertClass::InitTables((int)this); /*0x48eb7e*/
  if ( g_abs_87F7E8[32072] < g_abs_87F7E8[32070] /*0x48ebb7*/
    || (IDA_BYTE1(g_abs_87F7E8[32071]) || !g_abs_87F7E8[32070])
    && g_abs_87F7E8[32073] > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(g_abs_87F7E8[32068] + 8))(
         &g_abs_87F7E8[32068],
         g_abs_87F7E8[32073] + g_abs_87F7E8[32070],
         0) )
  {
    v26 = g_abs_87F7E8[32072]++; /*0x48ebc4*/
    *(unsigned int *)(g_abs_87F7E8[32069] + 4 * v26) = this; /*0x48ebd3*/
  }
  return this; /*0x48ebd8*/

}
} // namespace gamemd
// 0x491430
namespace gamemd {
int ConvertClass::ddtor(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(void *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this + 4))( /*0x49145a*/
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