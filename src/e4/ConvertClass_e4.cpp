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
unsigned int * ConvertClass::Construct(ConvertClass * aP1, int a3, ConvertClass * aP3, ObjectClass * aP4, ConvertClass * aP5)
{
  int v8; // edi
  bool v9; // cc
  CampaignClass *v10; // eax
  int v11; // eax
  __int16 v12; // cx
  int v13; // eax
  CampaignClass *v14; // eax
  CampaignClass *v15; // edi
  int v16; // eax
  _BYTE *v17; // edi
  int i; // ebp
  int j; // ebp
  int v20; // eax
  unsigned __int8 v21; // cl
  int v22; // eax
  int v23; // ecx
  CampaignClass *v24; // eax
  int v25; // edi
  int v26; // eax
  int v28; // [esp+Ch] [ebp-14h] BYREF
  Color v29; // [esp+10h] [ebp-10h] BYREF
  int v30; // [esp+14h] [ebp-Ch]
  int v31; // [esp+1Ah] [ebp-6h]

  *(_DWORD *)&this->ConvertClass_field_0x2[2] = (*(int (__thiscall **)(int))(aP3->q070)(aP3); /*0x48e753*/
  *(_DWORD *)&this->__pad_6[2] = 0; /*0x48e756*/
  *(_DWORD *)&this->__pad_6[6] = 0; /*0x48e759*/
  *(_DWORD *)&this->__pad_6[10] = 0; /*0x48e75c*/
  *(_DWORD *)&this->__pad_6[14] = 0; /*0x48e75f*/
  *(_DWORD *)&this->__pad_6[18] = 0; /*0x48e762*/
  *(_DWORD *)&this->__pad_6[22] = 0; /*0x48e765*/
  *(_DWORD *)&this->__pad_6[26] = 0; /*0x48e768*/
  *(_DWORD *)&this->__pad_6[30] = 0; /*0x48e76b*/
  *(_DWORD *)&this->__pad_6[34] = 0; /*0x48e76e*/
  *(_DWORD *)&this->__pad_6[38] = 0; /*0x48e771*/
  *(_DWORD *)&this->__pad_6[42] = 0; /*0x48e774*/
  *(_DWORD *)&this->__pad_6[46] = 0; /*0x48e777*/
  *(_DWORD *)&this->__pad_6[50] = 0; /*0x48e77a*/
  *(_DWORD *)&this->__pad_6[54] = 0; /*0x48e77d*/
  *(_DWORD *)&this->__pad_6[58] = 0; /*0x48e780*/
  *(_DWORD *)&this->__pad_6[62] = 0; /*0x48e783*/
  *(_DWORD *)&this->__pad_6[66] = 0; /*0x48e786*/
  *(_DWORD *)&this->__pad_6[70] = 0; /*0x48e789*/
  *(_DWORD *)&this->__pad_6[74] = 0; /*0x48e78c*/
  *(_DWORD *)&this->__pad_6[78] = 0; /*0x48e78f*/
  *(_DWORD *)&this->__pad_6[82] = 0; /*0x48e792*/
  *(_DWORD *)&this->__pad_6[86] = 0; /*0x48e795*/
  *(_DWORD *)&this->__pad_6[90] = 0; /*0x48e798*/
  *(_DWORD *)&this->__pad_6[94] = 0; /*0x48e79b*/
  *(_DWORD *)&this->__pad_6[98] = 0; /*0x48e79e*/
  *(_DWORD *)&this->__pad_6[102] = 0; /*0x48e7a1*/
  *(_DWORD *)&this->__pad_6[106] = 0; /*0x48e7a4*/
  *(_DWORD *)&this->__pad_6[110] = 0; /*0x48e7a7*/
  *(_DWORD *)&this->__pad_6[114] = 0; /*0x48e7aa*/
  *(_DWORD *)&this->__pad_6[118] = 0; /*0x48e7ad*/
  *(_DWORD *)&this->__pad_6[122] = 0; /*0x48e7b0*/
  *(_DWORD *)&this->__pad_6[126] = 0; /*0x48e7b6*/
  *(_DWORD *)&this->__pad_6[130] = 0; /*0x48e7bc*/
  *(_DWORD *)&this->__pad_6[134] = 0; /*0x48e7c2*/
  *(_DWORD *)&this->__pad_6[138] = 0; /*0x48e7c8*/
  *(_DWORD *)&this->__pad_6[142] = 0; /*0x48e7ce*/
  *(_DWORD *)&this->__pad_6[146] = 0; /*0x48e7d4*/
  *(_DWORD *)&this->__pad_6[150] = 0; /*0x48e7da*/
  *(_DWORD *)&this->__pad_6[154] = 0; /*0x48e7e0*/
  *(_DWORD *)&this->__pad_6[158] = 0; /*0x48e7e6*/
  *(_DWORD *)&this->__pad_6[162] = 0; /*0x48e7ec*/
  *(_DWORD *)&this->__pad_6[166] = 0; /*0x48e7f2*/
  *(_DWORD *)&this->__pad_6[170] = 0; /*0x48e7f8*/
  *(_DWORD *)&this->__pad_6[174] = 0; /*0x48e7fe*/
  *(_DWORD *)&this->__pad_6[178] = 0; /*0x48e804*/
  *(_DWORD *)&this->__pad_6[182] = 0; /*0x48e80a*/
  *(_DWORD *)&this->__pad_6[186] = 0; /*0x48e810*/
  *(_DWORD *)&this->__pad_6[190] = 0; /*0x48e816*/
  *(_DWORD *)&this->__pad_6[194] = 0; /*0x48e81c*/
  *(_DWORD *)&this->__pad_6[198] = 0; /*0x48e822*/
  *(_DWORD *)&this->__pad_6[202] = 0; /*0x48e828*/
  *(_DWORD *)&this->__pad_6[206] = 0; /*0x48e82e*/
  *(_DWORD *)&this->__pad_6[210] = 0; /*0x48e834*/
  *(_DWORD *)&this->__pad_6[214] = 0; /*0x48e83a*/
  *(_DWORD *)&this->__pad_6[218] = 0; /*0x48e840*/
  *(_DWORD *)&this->__pad_6[222] = 0; /*0x48e846*/
  *(_DWORD *)&this->__pad_6[226] = 0; /*0x48e84c*/
  *(_DWORD *)&this->__pad_6[230] = 0; /*0x48e852*/
  *(_DWORD *)&this->__pad_6[234] = 0; /*0x48e858*/
  *(_DWORD *)&this->__pad_6[238] = 0; /*0x48e85e*/
  *(_DWORD *)&this->__pad_6[242] = 0; /*0x48e864*/
  *(_DWORD *)&this->__pad_6[246] = 0; /*0x48e86a*/
  *(_DWORD *)&this->__pad_6[250] = 0; /*0x48e870*/
  *(_DWORD *)&this->__pad_6[254] = 0; /*0x48e876*/
  *(_DWORD *)&this->__pad_6[258] = 0; /*0x48e87c*/
  *(_DWORD *)&this->__pad_6[262] = 0; /*0x48e882*/
  *(_DWORD *)&this->__pad_6[266] = 0; /*0x48e888*/
  *(_DWORD *)&this->__pad_6[270] = 0; /*0x48e88e*/
  *(_DWORD *)&this->__pad_6[274] = 0; /*0x48e894*/
  *(_DWORD *)&this->__pad_6[278] = 0; /*0x48e89a*/
  *(_DWORD *)&this->__pad_6[282] = 0; /*0x48e8a0*/
  aP4 = aP4; /*0x48e8a6*/
  v8 = 1; /*0x48e8aa*/
  v9 = aP4 < 1; /*0x48e8af*/
  *(_DWORD *)&this->__pad_6[286] = 0; /*0x48e8b1*/
  *(_DWORD *)&this->__pad_6[290] = 0; /*0x48e8b7*/
  *(_DWORD *)&this->__pad_6[294] = 0; /*0x48e8bd*/
  *(_DWORD *)&this->__pad_6[298] = 0; /*0x48e8c3*/
  *(_DWORD *)&this->__pad_6[302] = 0; /*0x48e8c9*/
  *(_DWORD *)&this->__pad_6[306] = 0; /*0x48e8cf*/
  *(_DWORD *)&this->__pad_6[310] = 0; /*0x48e8d5*/
  *(_DWORD *)&this->__pad_6[314] = 0; /*0x48e8db*/
  *(_DWORD *)&this->__pad_6[318] = 0; /*0x48e8e1*/
  *(_DWORD *)&this->__pad_6[322] = 0; /*0x48e8e7*/
  *(_DWORD *)&this->__pad_6[326] = 0; /*0x48e8ed*/
  *(_DWORD *)&this->__pad_6[330] = 0; /*0x48e8f3*/
  *(_DWORD *)&this->__pad_6[334] = 0; /*0x48e8f9*/
  *(_DWORD *)&this->__pad_6[338] = 0; /*0x48e8ff*/
  *(_DWORD *)&this->__pad_6[342] = 0; /*0x48e905*/
  *(_DWORD *)&this->__pad_6[346] = 0; /*0x48e90b*/
  *(_DWORD *)&this->__pad_6[350] = 0; /*0x48e911*/
  *(_DWORD *)&this->__pad_6[354] = 0; /*0x48e917*/
  *(_DWORD *)&this->__pad_6[358] = aP4; /*0x48e91d*/
  this->ConvertClass_field_0x170 = 0; /*0x48e923*/
  *(_DWORD *)this->__pad_174 = 0; /*0x48e929*/
  this->ConvertClass_field_0x178 = 0; /*0x48e92f*/
  this->u32_17C = 0; /*0x48e935*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&ConvertClass_vftable; /*0x48e93b*/
  if ( v9 ) /*0x48e941*/
    *(_DWORD *)&this->__pad_6[358] = 1; /*0x48e943*/
  if ( *(_DWORD *)&this->ConvertClass_field_0x2[2] == 1 ) /*0x48e94f*/
  {
    v10 = (CampaignClass *)RA2_OPNEW(0x100u); /*0x48e95a*/
    this->ConvertClass_field_0x178 = v10; /*0x48e95f*/
    IDA_LOBYTE(v10->AbstractClass) = 0; /*0x48e968*/
    do /*0x48e9df*/
    {
      v11 = ComputeColorSaturation(aP1 + 2 * (v8 % 256) + v8 % 256, aP1 + 2 * (v8 % 256), (int)&aP4); /*0x48e98b*/
      v12 = *(_WORD *)v11; /*0x48e990*/
      IDA_LOBYTE(v11) = *(_BYTE *)(v11 + 2); /*0x48e993*/
      IDA_LOWORD(v29.Color_field_00) = v12; /*0x48e996*/
      IDA_BYTE2(v29.Color_field_00) = (unsigned __int8)v11 >> 1; /*0x48e9a5*/
      v13 = Color::ConvertToRGB(&v29, (int)&v28); /*0x48e9ae*/
      IDA_LOWORD(aP3) = *(_WORD *)v13; /*0x48e9b6*/
      IDA_BYTE2(aP3) = *(_BYTE *)(v13 + 2); /*0x48e9c5*/
      *((_BYTE *)this->ConvertClass_field_0x178 + v8++) = Palette::FindClosestColor((char *)aP1, (int)&aP3); /*0x48e9db*/
    }
    while ( v8 < 256 ); /*0x48e9df*/
    v14 = (CampaignClass *)RA2_OPNEW(*(_DWORD *)&this->__pad_6[358] << 8); /*0x48e9eb*/
    this->ConvertClass_field_0x170 = v14; /*0x48e9f0*/
    v15 = v14; /*0x48e9f6*/
    v16 = *(_DWORD *)&this->__pad_6[358]; /*0x48e9f8*/
    *(_DWORD *)this->__pad_174 = (char *)v15 + 256 * ((v16 - 1) >> 1); /*0x48ea10*/
    if ( v16 == 1 ) /*0x48ea16*/
    {
      IDA_LOBYTE(v15->AbstractClass) = 0; /*0x48ea18*/
      v17 = (char *)&v15->AbstractClass + 1; /*0x48ea1a*/
      for ( i = 1; i < 256; ++i ) /*0x48ea1b*/
        *v17++ = Palette::FindClosestColor((char *)a3, aP1 + 2 * (i % 256) + i % 256); /*0x48ea40*/
    }
    else
    {
      v30 = 0; /*0x48ea53*/
      if ( v16 - 1 >= 0 ) /*0x48ea57*/
      {
        do /*0x48eb0a*/
        {
          IDA_LOBYTE(v15->AbstractClass) = 0; /*0x48ea5d*/
          v15 = (CampaignClass *)((char *)v15 + 1); /*0x48ea5f*/
          for ( j = 1; j < 256; ++j ) /*0x48ea60*/
          {
            v20 = ComputeColorSaturation(aP1 + 2 * (j % 256) + j % 256, aP1, (int)&aP4); /*0x48ea85*/
            v21 = *(_BYTE *)(v20 + 2); /*0x48ea8f*/
            IDA_LOWORD(v29.Color_field_00) = *(_WORD *)v20; /*0x48ea92*/
            IDA_LOBYTE(v31) = v21; /*0x48ea97*/
            IDA_BYTE2(v29.Color_field_00) = v21; /*0x48eaa4*/
            IDA_BYTE2(v29.Color_field_00) = 2 * v30 * v21 / (*(_DWORD *)&this->__pad_6[358] - 1); /*0x48eac2*/
            v22 = Color::ConvertToRGB(&v29, (int)&v28); /*0x48eac6*/
            IDA_LOWORD(aP3) = *(_WORD *)v22; /*0x48eace*/
            IDA_BYTE2(aP3) = *(_BYTE *)(v22 + 2); /*0x48eadf*/
            IDA_LOBYTE(v15->AbstractClass) = Palette::FindClosestColor((char *)a3, (int)&aP3); /*0x48eae8*/
            v15 = (CampaignClass *)((char *)v15 + 1); /*0x48eaea*/
          }
          v23 = *(_DWORD *)&this->__pad_6[358] - 1; /*0x48eb03*/
          ++v30; /*0x48eb06*/
        }
        while ( v30 <= v23 ); /*0x48eb0a*/
      }
    }
  }
  else
  {
    v24 = (CampaignClass *)RA2_OPNEW(*(_DWORD *)&this->__pad_6[358] << 9); /*0x48eb1c*/
    v25 = *(_DWORD *)&this->__pad_6[358]; /*0x48eb21*/
    this->ConvertClass_field_0x170 = v24; /*0x48eb2a*/
    *(_DWORD *)this->__pad_174 = (char *)v24 + 512 * ((v25 - 1) >> 1); /*0x48eb3a*/
    if ( !aP5 ) /*0x48eb46*/
      DSurface::BlitStretch((int)v24, v25, aP1); /*0x48eb51*/
    this->q060 = (unsigned __int16)g_DDraw_Gray127; /*0x48eb60*/
    this->u32_184 = IDA_HIWORD(g_DDraw_Gray127); /*0x48eb6d*/
  }
  if ( !aP5 ) /*0x48eb7a*/
    ConvertClass::InitTables(); /*0x48eb7e*/
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
  return this->__pad_0; /*0x48ebd8*/
}
} // namespace gamemd
// 0x491430
namespace gamemd {
int ConvertClass::ddtor(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(_BlitPlainXlat_E *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this->__pad_0 /*0x49145a*/
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