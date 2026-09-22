// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x48E740
unsigned int * ConvertClass::Construct(ConvertClass * aP1, int a3, ConvertClass * aP3, ObjectClass * aP4, ConvertClass * aP5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CampaignClass *v7; // eax
  __int16 v12; // cx
  int i; // ebp
  int j; // ebp
  unsigned __int8 v21; // cl
  ConvertClass *v28; // [esp+Ch] [ebp-14h] BYREF
  __int16 v29; // [esp+10h] [ebp-10h] BYREF
  LightConvertClass *v31; // [esp+14h] [ebp-Ch]
  this->q004 = (*(int (__thiscall **)(ConvertClass *))(*(_DWORD *)aP3->__pad_0 + 112))(aP3); /*0x48e753*/
  this->q008 = 0; /*0x48e756*/
  this->q00C = 0; /*0x48e759*/
  this->q010 = 0; /*0x48e75c*/
  this->q014 = 0; /*0x48e75f*/
  this->q018 = 0; /*0x48e762*/
  this->q01C = 0; /*0x48e765*/
  this->q020 = 0; /*0x48e768*/
  this->q024 = 0; /*0x48e76b*/
  this->q028 = 0; /*0x48e76e*/
  this->q02C = 0; /*0x48e771*/
  this->q030 = 0; /*0x48e774*/
  this->q034 = 0; /*0x48e777*/
  this->q038 = 0; /*0x48e77a*/
  this->q03C = 0; /*0x48e77d*/
  this->q040 = 0; /*0x48e780*/
  this->q044 = 0; /*0x48e783*/
  this->q048 = 0; /*0x48e786*/
  this->q04C = 0; /*0x48e789*/
  this->q050 = 0; /*0x48e78c*/
  this->q054 = 0; /*0x48e78f*/
  this->q058 = 0; /*0x48e792*/
  this->q05C = 0; /*0x48e795*/
  this->q060 = 0; /*0x48e798*/
  this->q064 = 0; /*0x48e79b*/
  this->q068 = 0; /*0x48e79e*/
  this->q06C = 0; /*0x48e7a1*/
  this->q070 = 0; /*0x48e7a4*/
  this->q074 = 0; /*0x48e7a7*/
  this->q078 = 0; /*0x48e7aa*/
  this->q07C = 0; /*0x48e7ad*/
  this->q080 = 0; /*0x48e7b0*/
  this->q084 = 0; /*0x48e7b6*/
  this->q088 = 0; /*0x48e7bc*/
  this->q08C = 0; /*0x48e7c2*/
  this->q090 = 0; /*0x48e7c8*/
  this->q094 = 0; /*0x48e7ce*/
  this->q098 = 0; /*0x48e7d4*/
  this->q09C = 0; /*0x48e7da*/
  this->q0A0 = 0; /*0x48e7e0*/
  this->q0A4 = 0; /*0x48e7e6*/
  this->q0A8 = 0; /*0x48e7ec*/
  this->q0AC = 0; /*0x48e7f2*/
  this->q0B0 = 0; /*0x48e7f8*/
  this->q0B4 = 0; /*0x48e7fe*/
  this->q0B8 = 0; /*0x48e804*/
  this->q0BC = 0; /*0x48e80a*/
  this->q0C0 = 0; /*0x48e810*/
  this->q0C4 = 0; /*0x48e816*/
  this->q0C8 = 0; /*0x48e81c*/
  this->q0CC = 0; /*0x48e822*/
  this->q0D0 = 0; /*0x48e828*/
  this->q0D4 = 0; /*0x48e82e*/
  this->q0D8 = 0; /*0x48e834*/
  this->q0DC = 0; /*0x48e83a*/
  this->q0E0 = 0; /*0x48e840*/
  this->q0E4 = 0; /*0x48e846*/
  this->q0E8 = 0; /*0x48e84c*/
  this->q0EC = 0; /*0x48e852*/
  this->q0F0 = 0; /*0x48e858*/
  this->q0F4 = 0; /*0x48e85e*/
  this->q0F8 = 0; /*0x48e864*/
  this->q0FC = 0; /*0x48e86a*/
  this->q100 = 0; /*0x48e870*/
  this->q104 = 0; /*0x48e876*/
  this->q108 = 0; /*0x48e87c*/
  this->q10C = 0; /*0x48e882*/
  this->q110 = 0; /*0x48e888*/
  this->q114 = 0; /*0x48e88e*/
  this->q118 = 0; /*0x48e894*/
  this->q11C = 0; /*0x48e89a*/
  this->q120 = 0; /*0x48e8a0*/
  v7 = aP4; /*0x48e8a6*/
  int v8 = 1; /*0x48e8aa*/
  bool v9 = (int)aP4 < 1; /*0x48e8af*/
  this->q124 = 0; /*0x48e8b1*/
  this->q128 = 0; /*0x48e8b7*/
  this->q12C = 0; /*0x48e8bd*/
  this->q130 = 0; /*0x48e8c3*/
  this->q134 = 0; /*0x48e8c9*/
  this->q138 = 0; /*0x48e8cf*/
  this->q13C = 0; /*0x48e8d5*/
  this->q140 = 0; /*0x48e8db*/
  this->q144 = 0; /*0x48e8e1*/
  this->q148 = 0; /*0x48e8e7*/
  this->q14C = 0; /*0x48e8ed*/
  this->q150 = 0; /*0x48e8f3*/
  this->q154 = 0; /*0x48e8f9*/
  this->q158 = 0; /*0x48e8ff*/
  this->q15C = 0; /*0x48e905*/
  this->q160 = 0; /*0x48e90b*/
  this->q164 = 0; /*0x48e911*/
  this->q168 = 0; /*0x48e917*/
  this->q16C = v7; /*0x48e91d*/
  this->q170 = 0; /*0x48e923*/
  this->q174 = 0; /*0x48e929*/
  this->q178 = 0; /*0x48e92f*/
  this->q17C = 0; /*0x48e935*/
  *this = &vt_ConvertClass; /*0x48e93b*/
  if ( v9 ) /*0x48e941*/
    this->q16C = 1; /*0x48e943*/
  if ( this->q004 == 1 ) /*0x48e94f*/
  {
  char v30; // [esp+12h] [ebp-Eh]
    _BYTE * v10 = (_BYTE *)__2_YAPAXI_Z(0x100u); /*0x48e95a*/
    this->q178 = v10; /*0x48e95f*/
    *v10 = 0; /*0x48e968*/
    do /*0x48e9df*/
    {
  int v11; // eax
      v11 = ComputeColorSaturation( /*0x48e98b*/
              (unsigned int)aP1 + 2 * (v8 % 256) + v8 % 256,
              (int)&aP1->__pad_0[2 * (v8 % 256)],
              (int)&aP4);
      v12 = *(_WORD *)v11; /*0x48e990*/
      LOBYTE(v11) = *(_BYTE *)(v11 + 2); /*0x48e993*/
      v29 = v12; /*0x48e996*/
      v30 = (unsigned __int8)v11 >> 1; /*0x48e9a5*/
      int v13 = Color::ConvertToRGB((unsigned __int8 *)&v29, (int)&v28); /*0x48e9ae*/
      LOWORD(aP3) = *(_WORD *)v13; /*0x48e9b6*/
      BYTE2(aP3) = *(_BYTE *)(v13 + 2); /*0x48e9c5*/
      ++v8; /*0x48e9d4*/
      *(_BYTE *)(this->q178 + v8 - 1) = Palette::FindClosestColor(aP1->__pad_0, (int)&aP3); /*0x48e9db*/
    }
    while ( v8 < 256 ); /*0x48e9df*/
    int v14 = __2_YAPAXI_Z(this->q16C << 8); /*0x48e9eb*/
    this->q170 = v14; /*0x48e9f0*/
    CampaignClass *v15 = (_BYTE *)v14; /*0x48e9f6*/
    CampaignClass *v16 = this->q16C; /*0x48e9f8*/
    this->q174 = &v15[256 * ((v16 - 1) >> 1)]; /*0x48ea10*/
    if ( v16 == 1 ) /*0x48ea16*/
    {
      *v15 = 0; /*0x48ea18*/
      _BYTE * v17 = v15 + 1; /*0x48ea1a*/
      for ( i = 1; i < 256; ++i ) /*0x48ea1b*/
        *v17++ = Palette::FindClosestColor((char *)a3, (int)&aP1->__pad_0[2 * (i % 256) + i % 256]); /*0x48ea40*/
    }
    else
    {
      v31 = 0; /*0x48ea53*/
      if ( v16 - 1 >= 0 ) /*0x48ea57*/
      {
  int v23; // ecx
        do /*0x48eb0a*/
        {
          *v15++ = 0; /*0x48ea5d*/
          for ( j = 1; j < 256; ++j ) /*0x48ea60*/
          {
            int v20 = ComputeColorSaturation((unsigned int)aP1 + 2 * (j % 256) + j % 256, (int)aP1, (int)&aP4); /*0x48ea85*/
            v21 = *(_BYTE *)(v20 + 2); /*0x48ea8f*/
            v29 = *(_WORD *)v20; /*0x48ea92*/
  int v32; // [esp+1Ah] [ebp-6h]
            LOBYTE(v32) = v21; /*0x48ea97*/
            v30 = v21; /*0x48eaa4*/
            v30 = 2 * (int)v31 * v21 / (this->q16C - 1); /*0x48eac2*/
            int v22 = Color::ConvertToRGB((unsigned __int8 *)&v29, (int)&v28); /*0x48eac6*/
            LOWORD(aP3) = *(_WORD *)v22; /*0x48eace*/
            BYTE2(aP3) = *(_BYTE *)(v22 + 2); /*0x48eadf*/
            *v15++ = Palette::FindClosestColor((char *)a3, (int)&aP3); /*0x48eae8*/
          }
          v23 = this->q16C - 1; /*0x48eb03*/
          v31 = (LightConvertClass *)((char *)v31 + 1); /*0x48eb06*/
        }
        while ( (int)v31 <= v23 ); /*0x48eb0a*/
      }
    }
  }
  else
  {
    int v24 = __2_YAPAXI_Z(this->q16C << 9); /*0x48eb1c*/
    CampaignClass *v25 = this->q16C; /*0x48eb21*/
    this->q170 = v24; /*0x48eb2a*/
    this->q174 = v24 + ((v25 - 1) >> 1 << 9); /*0x48eb3a*/
    if ( !(_BYTE)aP5 ) /*0x48eb46*/
      DSurface::BlitStretch(v24, v25, (int)aP1); /*0x48eb51*/
    this->q180 = *(unsigned __int16 *)&stru_89E138[11440]; /*0x48eb60*/
    this->q184 = *(unsigned __int16 *)&stru_89E138[11442]; /*0x48eb6d*/
  }
  if ( !(_BYTE)aP5 ) /*0x48eb7a*/
    ConvertClass::InitTables((int)this); /*0x48eb7e*/
  if ( *(int *)&stru_89E138[3024] < *(int *)&stru_89E138[3016] /*0x48ebb7*/
    || (stru_89E138[3021] || !*(_DWORD *)&stru_89E138[3016])
    && *(int *)&stru_89E138[3028] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)stru_89E138[3008] + 8))(
         stru_89E138[3008],
         *(_DWORD *)&stru_89E138[3028] + *(_DWORD *)&stru_89E138[3016],
         0) )
  {
    int v26 = (*(_DWORD *)&stru_89E138[3024])++; /*0x48ebc4*/
    *(_DWORD *)(*(_DWORD *)&stru_89E138[3012] + 4 * v26) = this; /*0x48ebd3*/
  }
  return this; /*0x48ebd8*/
}
}

// 0x491430
int ConvertClass::ddtor(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    return this->AddRef(a2, a3, a4, a5, a6, a7, a8, 0);
}
