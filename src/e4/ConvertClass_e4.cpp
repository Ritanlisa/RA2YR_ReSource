// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x48E740
unsigned int * ConvertClass::Construct(ConvertClass * aP1, int a3, ConvertClass * aP3, ObjectClass * aP4, ConvertClass * aP5)
{
  int v7; // eax
  int v8; // edi
  bool v9; // cc
  _BYTE *v10; // eax
  __int16 *v11; // eax
  __int16 v12; // cx
  int v13; // eax
  _BYTE *v14; // eax
  _BYTE *v15; // edi
  int v16; // eax
  _BYTE *v17; // edi
  int i; // ebp
  int j; // ebp
  __int16 *v20; // eax
  unsigned __int8 v21; // cl
  int v22; // eax
  int v23; // ecx
  char *v24; // eax
  int v25; // edi
  int v26; // eax
  _BYTE v28[4]; // [esp+Ch] [ebp-14h] BYREF
  __int16 v29; // [esp+10h] [ebp-10h] BYREF
  char v30; // [esp+12h] [ebp-Eh]
  int v31; // [esp+14h] [ebp-Ch]
  int v32; // [esp+1Ah] [ebp-6h]

  *(this + 1) = (*(int (__thiscall **)(int))(*(_DWORD *)aP3 + 112))(aP3); /*0x48e753*/
  *(this + 2) = 0; /*0x48e756*/
  *(this + 3) = 0; /*0x48e759*/
  *(this + 4) = 0; /*0x48e75c*/
  *(this + 5) = 0; /*0x48e75f*/
  *(this + 6) = 0; /*0x48e762*/
  *(this + 7) = 0; /*0x48e765*/
  *(this + 8) = 0; /*0x48e768*/
  *(this + 9) = 0; /*0x48e76b*/
  *(this + 10) = 0; /*0x48e76e*/
  *(this + 11) = 0; /*0x48e771*/
  *(this + 12) = 0; /*0x48e774*/
  *(this + 13) = 0; /*0x48e777*/
  *(this + 14) = 0; /*0x48e77a*/
  *(this + 15) = 0; /*0x48e77d*/
  *(this + 16) = 0; /*0x48e780*/
  *(this + 17) = 0; /*0x48e783*/
  *(this + 18) = 0; /*0x48e786*/
  *(this + 19) = 0; /*0x48e789*/
  *(this + 20) = 0; /*0x48e78c*/
  *(this + 21) = 0; /*0x48e78f*/
  *(this + 22) = 0; /*0x48e792*/
  *(this + 23) = 0; /*0x48e795*/
  *(this + 24) = 0; /*0x48e798*/
  *(this + 25) = 0; /*0x48e79b*/
  *(this + 26) = 0; /*0x48e79e*/
  *(this + 27) = 0; /*0x48e7a1*/
  *(this + 28) = 0; /*0x48e7a4*/
  *(this + 29) = 0; /*0x48e7a7*/
  *(this + 30) = 0; /*0x48e7aa*/
  *(this + 31) = 0; /*0x48e7ad*/
  *(this + 32) = 0; /*0x48e7b0*/
  *(this + 33) = 0; /*0x48e7b6*/
  *(this + 34) = 0; /*0x48e7bc*/
  *(this + 35) = 0; /*0x48e7c2*/
  *(this + 36) = 0; /*0x48e7c8*/
  *(this + 37) = 0; /*0x48e7ce*/
  *(this + 38) = 0; /*0x48e7d4*/
  *(this + 39) = 0; /*0x48e7da*/
  *(this + 40) = 0; /*0x48e7e0*/
  *(this + 41) = 0; /*0x48e7e6*/
  *(this + 42) = 0; /*0x48e7ec*/
  *(this + 43) = 0; /*0x48e7f2*/
  *(this + 44) = 0; /*0x48e7f8*/
  *(this + 45) = 0; /*0x48e7fe*/
  *(this + 46) = 0; /*0x48e804*/
  *(this + 47) = 0; /*0x48e80a*/
  *(this + 48) = 0; /*0x48e810*/
  *(this + 49) = 0; /*0x48e816*/
  *(this + 50) = 0; /*0x48e81c*/
  *(this + 51) = 0; /*0x48e822*/
  *(this + 52) = 0; /*0x48e828*/
  *(this + 53) = 0; /*0x48e82e*/
  *(this + 54) = 0; /*0x48e834*/
  *(this + 55) = 0; /*0x48e83a*/
  *(this + 56) = 0; /*0x48e840*/
  *(this + 57) = 0; /*0x48e846*/
  *(this + 58) = 0; /*0x48e84c*/
  *(this + 59) = 0; /*0x48e852*/
  *(this + 60) = 0; /*0x48e858*/
  *(this + 61) = 0; /*0x48e85e*/
  *(this + 62) = 0; /*0x48e864*/
  *(this + 63) = 0; /*0x48e86a*/
  *(this + 64) = 0; /*0x48e870*/
  *(this + 65) = 0; /*0x48e876*/
  *(this + 66) = 0; /*0x48e87c*/
  *(this + 67) = 0; /*0x48e882*/
  *(this + 68) = 0; /*0x48e888*/
  *(this + 69) = 0; /*0x48e88e*/
  *(this + 70) = 0; /*0x48e894*/
  *(this + 71) = 0; /*0x48e89a*/
  *(this + 72) = 0; /*0x48e8a0*/
  v7 = aP4; /*0x48e8a6*/
  v8 = 1; /*0x48e8aa*/
  v9 = aP4 < 1; /*0x48e8af*/
  *(this + 73) = 0; /*0x48e8b1*/
  *(this + 74) = 0; /*0x48e8b7*/
  *(this + 75) = 0; /*0x48e8bd*/
  *(this + 76) = 0; /*0x48e8c3*/
  *(this + 77) = 0; /*0x48e8c9*/
  *(this + 78) = 0; /*0x48e8cf*/
  *(this + 79) = 0; /*0x48e8d5*/
  *(this + 80) = 0; /*0x48e8db*/
  *(this + 81) = 0; /*0x48e8e1*/
  *(this + 82) = 0; /*0x48e8e7*/
  *(this + 83) = 0; /*0x48e8ed*/
  *(this + 84) = 0; /*0x48e8f3*/
  *(this + 85) = 0; /*0x48e8f9*/
  *(this + 86) = 0; /*0x48e8ff*/
  *(this + 87) = 0; /*0x48e905*/
  *(this + 88) = 0; /*0x48e90b*/
  *(this + 89) = 0; /*0x48e911*/
  *(this + 90) = 0; /*0x48e917*/
  *(this + 91) = v7; /*0x48e91d*/
  *(this + 92) = 0; /*0x48e923*/
  *(this + 93) = 0; /*0x48e929*/
  *(this + 94) = 0; /*0x48e92f*/
  *(this + 95) = 0; /*0x48e935*/
  *this = &ConvertClass::`vftable'; /*0x48e93b*/
  if ( v9 ) /*0x48e941*/
    *(this + 91) = 1; /*0x48e943*/
  if ( *(this + 1) == 1 ) /*0x48e94f*/
  {
    v10 = __2_YAPAXI_Z(0x100u); /*0x48e95a*/
    *(this + 94) = v10; /*0x48e95f*/
    *v10 = 0; /*0x48e968*/
    do /*0x48e9df*/
    {
      v11 = (__int16 *)ComputeColorSaturation(&aP4); /*0x48e98b*/
      v12 = *v11; /*0x48e990*/
      LOBYTE(v11) = *((_BYTE *)v11 + 2); /*0x48e993*/
      v29 = v12; /*0x48e996*/
      v30 = (unsigned __int8)v11 >> 1; /*0x48e9a5*/
      v13 = Color::ConvertToRGB((unsigned __int8 *)&v29, (int)v28); /*0x48e9ae*/
      LOWORD(aP3) = *(_WORD *)v13; /*0x48e9b6*/
      BYTE2(aP3) = *(_BYTE *)(v13 + 2); /*0x48e9c5*/
      ++v8; /*0x48e9d4*/
      *(_BYTE *)(*(this + 94) + v8 - 1) = Palette::FindClosestColor(&aP3); /*0x48e9db*/
    }
    while ( v8 < 256 ); /*0x48e9df*/
    v14 = __2_YAPAXI_Z(*(this + 91) << 8); /*0x48e9eb*/
    *(this + 92) = v14; /*0x48e9f0*/
    v15 = v14; /*0x48e9f6*/
    v16 = *(this + 91); /*0x48e9f8*/
    *(this + 93) = &v15[256 * ((v16 - 1) >> 1)]; /*0x48ea10*/
    if ( v16 == 1 ) /*0x48ea16*/
    {
      *v15 = 0; /*0x48ea18*/
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
            v20 = (__int16 *)ComputeColorSaturation(&aP4); /*0x48ea85*/
            v21 = *((_BYTE *)v20 + 2); /*0x48ea8f*/
            v29 = *v20; /*0x48ea92*/
            LOBYTE(v32) = v21; /*0x48ea97*/
            v30 = v21; /*0x48eaa4*/
            v30 = 2 * v31 * v21 / (*(this + 91) - 1); /*0x48eac2*/
            v22 = Color::ConvertToRGB((unsigned __int8 *)&v29, (int)v28); /*0x48eac6*/
            LOWORD(aP3) = *(_WORD *)v22; /*0x48eace*/
            BYTE2(aP3) = *(_BYTE *)(v22 + 2); /*0x48eadf*/
            *v15++ = Palette::FindClosestColor(&aP3); /*0x48eae8*/
          }
          v23 = *(this + 91) - 1; /*0x48eb03*/
          ++v31; /*0x48eb06*/
        }
        while ( v31 <= v23 ); /*0x48eb0a*/
      }
    }
  }
  else
  {
    v24 = (char *)__2_YAPAXI_Z(*(this + 91) << 9); /*0x48eb1c*/
    v25 = *(this + 91); /*0x48eb21*/
    *(this + 92) = v24; /*0x48eb2a*/
    *(this + 93) = &v24[512 * ((v25 - 1) >> 1)]; /*0x48eb3a*/
    if ( !aP5 ) /*0x48eb46*/
      DSurface::BlitStretch(aP1); /*0x48eb51*/
    *(this + 96) = (unsigned __int16)g_DDraw_Gray127; /*0x48eb60*/
    *(this + 97) = HIWORD(g_DDraw_Gray127); /*0x48eb6d*/
  }
  if ( !aP5 ) /*0x48eb7a*/
    ConvertClass::InitTables(this); /*0x48eb7e*/
  if ( dword_89ED08 < dword_89ED00 /*0x48ebb7*/
    || (byte_89ED05 || !dword_89ED00)
    && dword_89ED0C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89ECF8 + 8))(
         &dword_89ECF8,
         dword_89ED0C + dword_89ED00,
         0) )
  {
    v26 = dword_89ED08++; /*0x48ebc4*/
    *((_DWORD *)dword_89ECFC + v26) = this; /*0x48ebd3*/
  }
  return this; /*0x48ebd8*/
}
// 0x491430
int ConvertClass::ddtor(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49145a*/
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