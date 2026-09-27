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

// 0x48E740
namespace gamemd {
unsigned int * ConvertClass::Construct(ConvertClass * aP1, int a3, ConvertClass * aP3, ObjectClass * aP4, ConvertClass * aP5)
{
  int v8; // edi
  bool v9; // cc
  unsigned char *v10; // eax
  int16_t *v11; // eax
  int16_t v12; // cx
  int v13; // eax
  unsigned char *v14; // eax
  unsigned char * v15;
  unsigned char * v16;
  unsigned char *v17; // edi
  int i; // ebp
  int j; // ebp
  int16_t *v20; // eax
  uint8_t v21; // cl
  int v22; // eax
  int v23; // ecx
  char *v24; // eax
  char * v25;
  ConvertClass * v26;
  unsigned char v28[4]; // [esp+Ch] [ebp-14h] BYREF
  int16_t v29; // [esp+10h] [ebp-10h] BYREF
  char v30; // [esp+12h] [ebp-Eh]
  int v31; // [esp+14h] [ebp-Ch]
  int v32; // [esp+1Ah] [ebp-6h]

  this->q004 = (*(int (__thiscall **)(int))(aP3->q070)(aP3); /*0x48e753*/
  this->q008 = 0; /*0x48e756*/
  this->q00C = 0; /*0x48e759*/
  this->q010 = 0; /*0x48e75c*/
  this->q014 = 0; /*0x48e75f*/
  this->q018 = 0; /*0x48e762*/
  this->q01C = 0; /*0x48e765*/
  this->q020 = 0; /*0x48e768*/
  this->q024 = 0; /*0x48e76b*/
  *(&this->q0040) = 0; /*0x48e76e*/
  *(&this->q0041) = 0; /*0x48e771*/
  *(&this->q0042) = 0; /*0x48e774*/
  *(&this->q0043) = 0; /*0x48e777*/
  *(&this->q0044) = 0; /*0x48e77a*/
  *(&this->q0045) = 0; /*0x48e77d*/
  *(&this->q0046) = 0; /*0x48e780*/
  *(&this->q0047) = 0; /*0x48e783*/
  *(&this->q0048) = 0; /*0x48e786*/
  *(&this->q0049) = 0; /*0x48e789*/
  *(&this->q0080) = 0; /*0x48e78c*/
  *(&this->q0081) = 0; /*0x48e78f*/
  *(&this->q0082) = 0; /*0x48e792*/
  *(&this->q0083) = 0; /*0x48e795*/
  *(&this->q0084) = 0; /*0x48e798*/
  *(&this->q0085) = 0; /*0x48e79b*/
  *(&this->q0086) = 0; /*0x48e79e*/
  *(&this->q0087) = 0; /*0x48e7a1*/
  *(&this->q0088) = 0; /*0x48e7a4*/
  *(&this->q0089) = 0; /*0x48e7a7*/
  *(&this->q00C0) = 0; /*0x48e7aa*/
  *(&this->q00C1) = 0; /*0x48e7ad*/
  *(&this->q00C2) = 0; /*0x48e7b0*/
  *(&this->q00C3) = 0; /*0x48e7b6*/
  *(&this->q00C4) = 0; /*0x48e7bc*/
  *(&this->q00C5) = 0; /*0x48e7c2*/
  *(&this->q00C6) = 0; /*0x48e7c8*/
  *(&this->q00C7) = 0; /*0x48e7ce*/
  *(&this->q00C8) = 0; /*0x48e7d4*/
  *(&this->q00C9) = 0; /*0x48e7da*/
  *(&this->q0100) = 0; /*0x48e7e0*/
  *(&this->q0101) = 0; /*0x48e7e6*/
  *(&this->q0102) = 0; /*0x48e7ec*/
  *(&this->q0103) = 0; /*0x48e7f2*/
  *(&this->q0104) = 0; /*0x48e7f8*/
  *(&this->q0105) = 0; /*0x48e7fe*/
  *(&this->q0106) = 0; /*0x48e804*/
  *(&this->q0107) = 0; /*0x48e80a*/
  *(&this->q0108) = 0; /*0x48e810*/
  *(&this->q0109) = 0; /*0x48e816*/
  *(&this->q0140) = 0; /*0x48e81c*/
  *(&this->q0141) = 0; /*0x48e822*/
  *(&this->q0142) = 0; /*0x48e828*/
  *(&this->q0143) = 0; /*0x48e82e*/
  *(&this->q0144) = 0; /*0x48e834*/
  *(&this->q0145) = 0; /*0x48e83a*/
  *(&this->q0146) = 0; /*0x48e840*/
  *(&this->q0147) = 0; /*0x48e846*/
  *(&this->q0148) = 0; /*0x48e84c*/
  *(&this->q0149) = 0; /*0x48e852*/
  *(&this->q0180) = 0; /*0x48e858*/
  *(&this->q0181) = 0; /*0x48e85e*/
  *(&this->q0182) = 0; /*0x48e864*/
  *(&this->q0183) = 0; /*0x48e86a*/
  *(&this->q0184) = 0; /*0x48e870*/
  *(&this->q0185) = 0; /*0x48e876*/
  *(&this->q0186) = 0; /*0x48e87c*/
  *(&this->q0187) = 0; /*0x48e882*/
  *(&this->q0188) = 0; /*0x48e888*/
  *(&this->q0189) = 0; /*0x48e88e*/
  *(&this->q01C0) = 0; /*0x48e894*/
  *(&this->q01C1) = 0; /*0x48e89a*/
  *(&this->q01C2) = 0; /*0x48e8a0*/
  aP4 = aP4; /*0x48e8a6*/
  v8 = (unsigned int)(1);
  v9 = (unsigned int)(aP4 < 1);
  *(&this->q01C3) = 0; /*0x48e8b1*/
  *(&this->q01C4) = 0; /*0x48e8b7*/
  *(&this->q01C5) = 0; /*0x48e8bd*/
  *(&this->q01C6) = 0; /*0x48e8c3*/
  *(&this->q01C7) = 0; /*0x48e8c9*/
  *(&this->q01C8) = 0; /*0x48e8cf*/
  *(&this->q01C9) = 0; /*0x48e8d5*/
  *(&this->q0200) = 0; /*0x48e8db*/
  *(&this->q0201) = 0; /*0x48e8e1*/
  *(&this->q0202) = 0; /*0x48e8e7*/
  *(&this->q0203) = 0; /*0x48e8ed*/
  *(&this->q0204) = 0; /*0x48e8f3*/
  *(&this->q0205) = 0; /*0x48e8f9*/
  *(&this->q0206) = 0; /*0x48e8ff*/
  *(&this->q0207) = 0; /*0x48e905*/
  *(&this->q0208) = 0; /*0x48e90b*/
  *(&this->q0209) = 0; /*0x48e911*/
  *(&this->q0240) = 0; /*0x48e917*/
  *(&this->q0241) = aP4; /*0x48e91d*/
  *(&this->q0242) = 0; /*0x48e923*/
  *(&this->q0243) = 0; /*0x48e929*/
  *(&this->q0244) = 0; /*0x48e92f*/
  *(&this->q0245) = 0; /*0x48e935*/
  if ( v9 ) /*0x48e941*/
    *(&this->q0241) = 1; /*0x48e943*/
  if ( this->q004 == 1 ) /*0x48e94f*/
  {
    v10 = (unsigned int)(operator new(0x100u));
    *(&this->q0244) = v10; /*0x48e95f*/
    *v10 = 0; /*0x48e968*/
    do /*0x48e9df*/
    {
      v11 = (int16_t *)ComputeColorSaturation(&aP4); /*0x48e98b*/
      v12 = *v11; /*0x48e990*/
      IDA_LOBYTE(v11) = *((unsigned char *)v11 + 2); /*0x48e993*/
      v29 = v12; /*0x48e996*/
      v30 = (uint8_t)v11 >> 1; /*0x48e9a5*/
      v13 = Color::ConvertToRGB((uint8_t *)&v29, (int)v28); /*0x48e9ae*/
      IDA_LOWORD(aP3) = *(unsigned short *)v13; /*0x48e9b6*/
      IDA_BYTE2(aP3) = *(unsigned char *)(v13 + 2); /*0x48e9c5*/
      ++v8; /*0x48e9d4*/
      *(unsigned char *)(*(&this->q0244) + v8 - 1) = Palette::FindClosestColor(&aP3); /*0x48e9db*/
    }
    while ( v8 < 256 ); /*0x48e9df*/
    v14 = operator new(*(&this->q0241) << 8); /*0x48e9eb*/
    *(&this->q0242) = v14; /*0x48e9f0*/
    v15 = v14; /*0x48e9f6*/
    v16 = *(&this->q0241); /*0x48e9f8*/
    *(&this->q0243) = &v15[256 * ((v16 - 1) >> 1)]; /*0x48ea10*/
    if ( v16 == 1 ) /*0x48ea16*/
    {
      *v15 = (unsigned char *)(0);
      v17 = v15 + 1; /*0x48ea1a*/
      for ( i = 1; i < 256; ++i ) /*0x48ea1b*/
        *v17++ = Palette::FindClosestColor(aP1 + 2 * (i % 256) + i % 256); /*0x48ea40*/
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
            v20 = (int16_t *)ComputeColorSaturation(&aP4); /*0x48ea85*/
            v21 = *((unsigned char *)v20 + 2); /*0x48ea8f*/
            v29 = *v20; /*0x48ea92*/
            IDA_LOBYTE(v32) = v21; /*0x48ea97*/
            v30 = v21; /*0x48eaa4*/
            v30 = 2 * v31 * v21 / (*(&this->q0241) - 1); /*0x48eac2*/
            v22 = Color::ConvertToRGB((uint8_t *)&v29, (int)v28); /*0x48eac6*/
            IDA_LOWORD(aP3) = *(unsigned short *)v22; /*0x48eace*/
            IDA_BYTE2(aP3) = *(unsigned char *)(v22 + 2); /*0x48eadf*/
            *v15++ = Palette::FindClosestColor(&aP3); /*0x48eae8*/
          }
          v23 = *(&this->q0241) - 1; /*0x48eb03*/
          ++v31; /*0x48eb06*/
        }
        while ( v31 <= v23 ); /*0x48eb0a*/
      }
    }
  }
  else
  {
    v24 = (char *)((unsigned int)((char *)operator new(*(&this->q0241) << 9)));
    v25 = (char *)((unsigned int)((char *)((unsigned int)(*(&this->q0241)))));
    *(&this->q0242) = v24; /*0x48eb2a*/
    *(&this->q0243) = &v24[512 * ((v25 - 1) >> 1)]; /*0x48eb3a*/
    if ( !aP5 ) /*0x48eb46*/
      DSurface::BlitStretch(aP1); /*0x48eb51*/
    *(&this->q0246) = (uint16_t)g_DDraw_Gray127; /*0x48eb60*/
    *(&this->q0247) = IDA_HIWORD(g_DDraw_Gray127); /*0x48eb6d*/
  }
  if ( !aP5 ) /*0x48eb7a*/
    ConvertClass::InitTables(); /*0x48eb7e*/
  if ( dword_89ED08 < dword_89ED00 /*0x48ebb7*/
    || (byte_89ED05 || !dword_89ED00)
    && dword_89ED0C > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_89ECF8 + 8))(
         &dword_89ECF8,
         dword_89ED0C + dword_89ED00,
         0) )
  {
    v26 = (gamemd::ConvertClass *)((unsigned int)(dword_89ED08++));
    *((unsigned int *)dword_89ECFC + v26) = this; /*0x48ebd3*/
  }
  return (unsigned int *)(this);
}
} // namespace gamemd
// 0x491430
namespace gamemd {
int ConvertClass::ddtor(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->q010))( /*0x49145a*/
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