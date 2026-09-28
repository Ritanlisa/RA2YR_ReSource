// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/VectorClass_ReestablishPtr_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/ColorStruct_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"

// 0x4228E0
namespace gamemd {
void AnimClass::Destruct(AbstractClass * a2)
{
  unsigned char *AnimClass_field_0xCC; // ebp
  int v3; // ecx
  char *v4; // edx
  Coord *AnimClass_field_0xC8; // eax
  CellClass *v6; // eax
  int v7; // eax
  AnimClass *v8; // ecx
  int v9; // eax
  int v10; // eax
  AnimClass *v12; // [esp+10h] [ebp-10h] BYREF
  unsigned int v13[3]; // [esp+14h] [ebp-Ch] BYREF

  a2->AnimClass_field_0x0 = (unsigned int)((void*)&AnimClass_vftable);
  a2->AnimClass_field_0x4 = (unsigned int)((void*)&AnimClass_vftable);
  a2->AnimClass_field_0x8 = (void*)&AnimClass_vftable; /*0x4228f8*/
  *(unsigned int *)a2->__pad_C = &off_7E3328; /*0x4228ff*/
  AbstractClass::AnnounceExpiredPointer(&a2->AnimClass_field_0x0, 1); /*0x422906*/
  if ( unk_A8E9A0 ) /*0x422914*/
  {
    AnimClass_field_0xCC = (unsigned char *)(a2->AnimClass_field_0xCC);
    if ( AnimClass_field_0xCC ) /*0x422922*/
    {
      v3 = 0; /*0x42292a*/
      if ( dword_A8E9B8 > 0 ) /*0x42292e*/
      {
        v4 = (char *)unk_A8E9AC; /*0x422930*/
        do /*0x42294a*/
        {
          if ( *(AnimClass **)v4 != a2 && *(unsigned char **)(*(unsigned int *)v4 + 204) == AnimClass_field_0xCC ) /*0x422942*/
            break; /*0x422942*/
          ++v3; /*0x422944*/
          v4 += 4; /*0x422945*/
        }
        while ( v3 < dword_A8E9B8 ); /*0x42294a*/
      }
      if ( v3 == dword_A8E9B8 ) /*0x42294e*/
      {
        (*(void (__thiscall **)(void *))(*(unsigned int *)AnimClass_field_0xCC + 380))(a2->AnimClass_field_0xCC); /*0x422955*/
        AnimClass_field_0xCC[132] = 0; /*0x42295b*/
      }
      a2->AnimClass_field_0xCC = 0; /*0x422961*/
    }
    AnimClass_field_0xC8 = (gamemd::Coord *)(a2->AnimClass_field_0xC8);
    if ( AnimClass_field_0xC8 && AnimClass_field_0xC8[2].__pad_C[201] ) /*0x422971*/
    {
      v13[0] = (unsigned int)((gamemd::CellClass *)(a2->AnimClass_field_0x9C));
      v13[1] = (unsigned int)((gamemd::CellClass *)(*(unsigned int *)a2->__pad_A0));
      v13[2] = (gamemd::CellClass *)(a2->AnimClass_field_0xA4);
      v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v13); /*0x4229a1*/
      v6->flags[0] &= ~0x20000u; /*0x4229b7*/
    }
    if ( (uint8_t)ObjectClass::Undeploy((ObjectClass *)a2) ) /*0x4229bb*/
      RemoveTarget((int)a2); /*0x4229ca*/
  }
  v12 = (gamemd::AnimClass *)(a2);
  v7 = (*(int (__thiscall **)(int *, AnimClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x4229e3*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v12);
  if ( v7 != -1 && v7 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x4229f3*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x4229f8*/
    for ( ; /*0x4229fe*/
          v7 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v7) )
    {
      ++v7; /*0x422a06*/
    }
  }
  v8 = (AnimClass *)a2->AnimClass_field_0xC8; /*0x422a18*/
  if ( v8 ) /*0x422a20*/
    AnimClass::FreeRenderBuffer(v8); /*0x422a22*/
  Mixer::ReleaseChannel((Mixer *)a2->AnimClass_field_0x1A0); /*0x422a2f*/
  Mixer::ReleaseChannel((Mixer *)&a2->AnimClass_field_0x1B4); /*0x422a3c*/
  AudioFileClass::Release((AudioFileClass *)a2->AnimClass_field_0x1A0); /*0x422a43*/
  AudioFileClass::Release((AudioFileClass *)&a2->AnimClass_field_0x1B4); /*0x422a4a*/
  a2->AnimClass_field_0xCC = 0; /*0x422a52*/
  a2->AnimClass_field_0xC8 = 0; /*0x422a59*/
  if ( AbstractClass::GetVtable3((AbstractClass *)&a2->AnimClass_field_0x4) == -2 ) /*0x422a67*/
  {
    v12 = (gamemd::AnimClass *)(a2);
    v9 = (*((int (__thiscall **)(void **, AnimClass **))stru_A83D50.SuperClass_field_0xB0 + 4))( /*0x422a7d*/
           &stru_A83D50.SuperClass_field_0xB0,
           &v12);
    if ( v9 != -1 && v9 < *(int *)&stru_A83D50.__pad_B4[12] ) /*0x422a91*/
    {
      --*(unsigned int *)&stru_A83D50.__pad_B4[12]; /*0x422a96*/
      for ( ; /*0x422a9c*/
            v9 < *(int *)&stru_A83D50.__pad_B4[12];
            *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_B4 + 4 * v9 - 4) = *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_B4
                                                                                  + 4 * v9) )
      {
        ++v9; /*0x422aa4*/
      }
    }
  }
  else
  {
    v12 = (gamemd::AnimClass *)(a2);
    v10 = (*(int (__thiscall **)(unsigned int *, AnimClass **))(dword_A8E9A8 + 16))(&dword_A8E9A8, &v12); /*0x422ad9*/
    if ( v10 != -1 && v10 < dword_A8E9B8 && v10 < --dword_A8E9B8 ) /*0x422af4*/
    {
      do /*0x422b0c*/
      {
        ++v10; /*0x422afc*/
        *((unsigned int *)unk_A8E9AC + v10 - 1) = *((unsigned int *)unk_A8E9AC + v10); /*0x422b00*/
      }
      while ( v10 < dword_A8E9B8 ); /*0x422b0c*/
    }
  }
  return ObjectClass::Dtor((ObjectClass *)a2); /*0x422abd*/
}
}
// 0x422CA0
namespace gamemd {
void* AnimClass::Render(ConvertClass * a2, ConvertClass * aP5)
{
  IUnknown *AnimClass_field_0xB4; // edi
  CellStruct *AnimClass_field_0xC0; // ebx
  IUnknown *AnimClass_field_0xBC; // eax
  int v7; // edi
  int v8; // ecx
  int16_t v9; // bx
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // ebp
  int v14; // eax
  uint8_t v15; // di
  int v16; // eax
  int16_t v17; // ax
  int v19; // ebx
  Coord *AnimClass_field_0xC8; // eax
  Coord *v21; // eax
  int AnimClass_field_0x190; // ebx
  double v23; // st7
  double v24; // st6
  Coord *v25; // eax
  unsigned int *v26; // eax
  int v27; // ecx
  int v28; // eax
  char v29; // al
  unsigned int *v30; // eax
  int *v31; // edi
  Coord *v32; // ecx
  unsigned int *v33; // eax
  int v34; // eax
  int v35; // edx
  int v36; // ecx
  int (__thiscall **AnimClass_field_0x0)(AnimClass *); // eax
  int v38; // eax
  int v39; // eax
  char v40; // al
  float v41; // ebp
  unsigned int *v42; // eax
  CellClass *v43; // eax
  unsigned int *v44; // eax
  int v45; // eax
  int v46; // edx
  int v47; // eax
  int v48; // edx
  int v49; // ecx
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // edx
  int v54; // eax
  int v55; // edx
  int v56; // ecx
  int v57; // eax
  int v58; // edx
  int v59; // ecx
  unsigned int *v60; // eax
  CellClass *v61; // eax
  Coord *v62; // eax
  unsigned int *FoundationSize; // eax
  int v64; // ecx
  int v65; // edi
  int (__thiscall **v66)(AnimClass *); // edx
  int v67; // ebp
  int v68; // eax
  int v69; // edi
  int v70; // eax
  int v71; // edi
  int (__thiscall **v72)(AnimClass *); // edx
  int v73; // eax
  int v74; // edx
  int v75; // eax
  int v76; // edx
  int v77; // eax
  int v78; // ebp
  int v79; // eax
  int v80; // [esp-20h] [ebp-130h]
  int v81; // [esp-20h] [ebp-130h]
  uint8_t v84; // [esp+13h] [ebp-FDh]
  uint8_t v85; // [esp+13h] [ebp-FDh]
  char v86; // [esp+13h] [ebp-FDh]
  int v87; // [esp+14h] [ebp-FCh]
  int v88; // [esp+14h] [ebp-FCh]
  int v89; // [esp+14h] [ebp-FCh]
  IUnknown *AnimClass_field_0xAC; // [esp+14h] [ebp-FCh]
  float v91; // [esp+14h] [ebp-FCh]
  float v92; // [esp+14h] [ebp-FCh]
  int v94; // [esp+14h] [ebp-FCh]
  int v95; // [esp+14h] [ebp-FCh]
  uint8_t v96; // [esp+1Ah] [ebp-F6h]
  uint8_t v97; // [esp+1Ah] [ebp-F6h]
  uint8_t v98; // [esp+1Bh] [ebp-F5h]
  uint8_t v99; // [esp+1Bh] [ebp-F5h]
  uint8_t v100[4]; // [esp+1Ch] [ebp-F4h] BYREF
  int16_t v101[2]; // [esp+20h] [ebp-F0h] BYREF
  int v102; // [esp+24h] [ebp-ECh]
  int v103; // [esp+28h] [ebp-E8h]
  unsigned int v104; // [esp+2Ch] [ebp-E4h]
  int v105[2]; // [esp+30h] [ebp-E0h] BYREF
  int v106; // [esp+38h] [ebp-D8h]
  int v107; // [esp+3Ch] [ebp-D4h]
  int v109; // [esp+44h] [ebp-CCh]
  ColorStruct v110; // [esp+50h] [ebp-C0h] BYREF
  ColorStruct v111; // [esp+B0h] [ebp-60h] BYREF

  if ( byte_8A0DF0 /*0x422ccb*/
    && g_ZBufferDescriptor
    && (uint8_t)ObjectClass::StepCleanup((ObjectClass *)this, &g_INI_Key_Civilian.__pad_16D[31]) )
  {
    AnimClass_field_0xB4 = (IUnknown *)(this->AnimClass_field_0xB4);
    AnimClass_field_0xC0 = (IUnknown *)(this->AnimClass_field_0xC0);
    AnimClass_field_0xBC = this->AnimClass_field_0xBC; /*0x422cea*/
    if ( AnimClass_field_0xB4 != (IUnknown *)-1 ) /*0x422cf3*/
    {
      if ( *(unsigned int *)&stru_A8EB00.gapE4[416] - (int)AnimClass_field_0xB4 >= (int)AnimClass_field_0xBC ) /*0x422cff*/
        AnimClass_field_0xBC = 0; /*0x422d05*/
      else
        AnimClass_field_0xBC = (IUnknown *)((char *)AnimClass_field_0xBC /*0x422d01*/
                                          - (*(unsigned int *)&stru_A8EB00.gapE4[416]
                                           - (unsigned int)AnimClass_field_0xB4));
    }
    v7 = (int)AnimClass_field_0xC0 /*0x422d12*/
       + (int)this->AnimClass_field_0xAC * (unsigned int)AnimClass_field_0xC0
       - (unsigned int)AnimClass_field_0xBC;
    v8 = (int)((unsigned int)AnimClass_field_0xC0 * (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 123))(this));
    v9 = (int)(v7 + 8);
    v10 = (int)(*a2 + 2 * (v7 + 8));
    *(unsigned int *)v101 = *a2 - 2 * (v7 + 8); /*0x422d3c*/
    v106 = v10; /*0x422d40*/
    v11 = a2[1]; /*0x422d47*/
    v107 = v7 + 8 + v11; /*0x422d4d*/
    v102 = v11 - (v7 + 8); /*0x422d51*/
    v104 = (v8 - v7) << 8; /*0x422d5e*/
    *(unsigned int *)v100 = (int)v104 / v8; /*0x422d67*/
    if ( (int)v104 / v8 >= 0 ) /*0x422d6b*/
    {
      if ( (int)v104 / v8 > 255 ) /*0x422d7c*/
        *(unsigned int *)v100 = 255; /*0x422d7e*/
    }
    else
    {
      *(float *)v100 = 0.0; /*0x422d6d*/
    }
    if ( v7 >= v8 / 3 ) /*0x422d9a*/
      v12 = ((v8 - v7) << 8) / (v8 - v8 / 3); /*0x422db7*/
    else
      v12 = (v7 << 8) / (v8 / 3); /*0x422da2*/
    if ( v12 >= 0 ) /*0x422dbb*/
    {
      if ( v12 > 255 ) /*0x422dc6*/
        v12 = 255; /*0x422dc8*/
    }
    else
    {
      v12 = 0; /*0x422dbd*/
    }
    v13 = 2 * v12 / 3; /*0x422de3*/
    v87 = 2 * v8 / 3; /*0x422df3*/
    if ( v7 >= v87 ) /*0x422df7*/
      v14 = (int)v104 / (v8 - v87); /*0x422e10*/
    else
      v14 = (v7 << 8) / v87; /*0x422dff*/
    v15 = v14; /*0x422e12*/
    if ( v14 >= 0 ) /*0x422e16*/
    {
      if ( v14 > 255 ) /*0x422e22*/
        v15 = -1; /*0x422e24*/
    }
    else
    {
      v15 = 0; /*0x422e18*/
    }
    v16 = (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 116))(this); /*0x422e2d*/
    v17 = IDA_LOWORD(g_ZBufferDescriptor->Stream_field_04) /*0x422e87*/
        + IDA_LOWORD(g_ZBufferDescriptor[1].Stream_field_10)
        - *((unsigned short *)a2 + 2)
        - IDA_LOWORD(DSurface_ViewBounds.field_4)
        + this->AnimClass_field_0x100
        + *(unsigned int *)&this->AnimClass_field_0xC8[2].__pad_C[184]
        - ZCoordToScreenY(v16)
        - 2;
    *(float *)&v104 = (double)(uint16_t)(v17 + v9) * 0.000015259022; /*0x422eab*/
    *(float *)&v103 = (double)(uint16_t)(v17 - v9) * 0.000015259022; /*0x422eb9*/
    ColorStruct::SetRGB(&v110, v100[0], v13, v15); /*0x422ebd*/
    ColorStruct::SetRGB(&v111, v100[0], v13, v15); /*0x422ecc*/
    *(float *)&v88 = (float)v102; /*0x422ede*/
    v88 = v88; /*0x422ee6*/
    *(float *)v100 = (float)*(int *)v101; /*0x422eef*/
    v19 = *(unsigned int *)v100; /*0x422ef3*/
    Tactical::SetCellTransform(v110.__pad_0, 0, *(int *)v100, v88, v104, 0, 0); /*0x422efa*/
    *(float *)v100 = (float)v107; /*0x422f0f*/
    Tactical::SetCellTransform(v110.__pad_0, 1, v19, *(int *)v100, v103, 0, 1065353216); /*0x422f1f*/
    *(float *)&v89 = (float)v106; /*0x422f37*/
    Tactical::SetCellTransform(v110.__pad_0, 2, v89, *(int *)v100, v103, 1065353216, 1065353216); /*0x422f47*/
    Tactical::SetCellTransform(v111.__pad_0, 0, v19, v88, v104, 0, 0); /*0x422f5c*/
    Tactical::SetCellTransform(v111.__pad_0, 1, v89, *(int *)v100, v103, 1065353216, 1065353216); /*0x422f7f*/
    Tactical::SetCellTransform(v111.__pad_0, 2, v89, v88, v104, 1065353216, 0); /*0x422f97*/
    StructTable::Append(dword_8A0E10, &v110); /*0x422fa7*/
    StructTable::Append(dword_8A0E10, &v111); /*0x422fba*/
    return; /*0x422fc9*/
  }
  if ( *(unsigned int *)&g_MissionQueueFrame.waypoints[282] < (unsigned int)PingPongBuffer::GetWriteOffset() /*0x422fe6*/
    && *(int *)&this->AnimClass_field_0xC8[2].__pad_C[72] > 1 )
  {
    return; /*0x422fe6*/
  }
  if ( this->__pad_194[9] ) /*0x422fec*/
    return; /*0x422fec*/
  AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x422ffa*/
  if ( *(unsigned int *)&AnimClass_field_0xC8[2].__pad_C[72] > stru_A8EB00.parent_gap[30] /*0x42301e*/
    || this->__pad_194[5] && AnimClass_field_0xC8[2].__pad_C[232] )
  {
    return; /*0x42301e*/
  }
  *(float *)&v103 = COERCE_FLOAT((*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 27))(this)); /*0x423035*/
  if ( *(float *)&v103 == 0.0 ) /*0x423039*/
    return; /*0x423039*/
  v21 = this->AnimClass_field_0xC8; /*0x42303f*/
  AnimClass_field_0x190 = this->AnimClass_field_0x190; /*0x42304b*/
  AnimClass_field_0xAC = this->AnimClass_field_0xAC; /*0x423051*/
  v104 = (unsigned int)AnimClass_field_0xAC + *(unsigned int *)&v21[2].__pad_C[40]; /*0x42305d*/
  if ( this->__pad_118[1] ) /*0x423061*/
  {
    if ( v21[2].__pad_C[220] ) /*0x42306b*/
      AnimClass_field_0x190 |= 6u; /*0x423075*/
    else
      AnimClass_field_0x190 |= 4u; /*0x42307a*/
  }
  if ( *(unsigned int *)&v21[2].__pad_C[76] <= stru_A8EB00.parent_gap[30] ) /*0x42308b*/
  {
    if ( !v21[2].__pad_C[222] ) /*0x423095*/
    {
      v28 = *(unsigned int *)&v21[2].__pad_C[96]; /*0x423183*/
      if ( v28 <= 0 ) /*0x42318b*/
      {
        v29 = this->__pad_178[0]; /*0x4231c1*/
        if ( !v29 ) /*0x4231c9*/
          goto LABEL_47; /*0x4231c9*/
        if ( v29 > 15 ) /*0x4231d1*/
          return; /*0x4231d1*/
        if ( v29 > 10 ) /*0x4231d9*/
        {
          AnimClass_field_0x190 |= 4u; /*0x4231db*/
          goto LABEL_47; /*0x4231de*/
        }
        if ( v29 > 5 ) /*0x4231e5*/
        {
          AnimClass_field_0x190 |= 4u; /*0x4231eb*/
          goto LABEL_47; /*0x4231ee*/
        }
      }
      else
      {
        if ( this->__pad_178[0] >= 15 ) /*0x423194*/
          return; /*0x423194*/
        if ( v28 != 25 ) /*0x42319d*/
        {
          if ( v28 == 50 ) /*0x4231a6*/
          {
            AnimClass_field_0x190 |= 4u; /*0x4231a8*/
          }
          else if ( v28 == 75 ) /*0x4231b3*/
          {
            AnimClass_field_0x190 |= 6u; /*0x4231b9*/
          }
          goto LABEL_47; /*0x4231ab*/
        }
      }
  LABEL_46:
      AnimClass_field_0x190 |= 2u; /*0x4230fb*/
      goto LABEL_47; /*0x4230fb*/
    }
    if ( this->__pad_178[0] >= 15 ) /*0x4230a2*/
      return; /*0x4230a2*/
    v23 = (double)(int)AnimClass_field_0xAC; /*0x4230a8*/
    v24 = (double)*(int *)&v21[2].__pad_C[52]; /*0x4230ac*/
    if ( v23 > v24 * 0.6 ) /*0x4230c3*/
    {
      AnimClass_field_0x190 |= 6u; /*0x4230c9*/
      goto LABEL_47; /*0x4230cc*/
    }
    if ( v23 > v24 * 0.4 ) /*0x4230df*/
    {
      AnimClass_field_0x190 |= 4u; /*0x4230e5*/
      goto LABEL_47; /*0x4230e8*/
    }
    if ( v23 > v24 * 0.2 ) /*0x4230f9*/
      goto LABEL_46; /*0x4230f9*/
  }
  LABEL_47:
  if ( (AnimClass_field_0x190 & 1) == 0 ) /*0x423101*/
    IDA_BYTE1(AnimClass_field_0x190) |= 8u; /*0x423103*/
  *(unsigned int *)v101 = (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 114))(this); /*0x423110*/
  v25 = this->AnimClass_field_0xC8; /*0x423114*/
  v106 = 1000; /*0x42311a*/
  if ( v25[2].__pad_C[201] ) /*0x423122*/
  {
    v105[0] = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * *(unsigned int *)&dword_A83D4C[134].__pad_90[4]) /*0x42314b*/
                        + 780);
    if ( v25[2].__pad_C[209] ) /*0x42314f*/
      goto LABEL_78; /*0x423157*/
    v26 = (unsigned int *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 43))(this, &v64); /*0x423166*/
    v27 = *(int16_t *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v26)->CellClass_field_10C; /*0x423177*/
    goto LABEL_77; /*0x42317e*/
  }
  if ( this->__pad_194[2] ) /*0x4231f3*/
  {
    v30 = (gamemd::Coord *)((unsigned int *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 43))(this, &v64));
    IDA_LOWORD(v91) = *v30 / 256; /*0x423220*/
    IDA_HIWORD(v91) = v30[1] / 256; /*0x423238*/
    *(float *)v100 = v91; /*0x423241*/
    v31 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)v100); /*0x423250*/
    if ( !v31[13] ) /*0x423252*/
      TacticalClass::SetView(v31, 0, 0x10000, 0, 1000, 1000, 1000); /*0x423273*/
    v32 = this->AnimClass_field_0xC8; /*0x42327b*/
    v105[0] = v31[13]; /*0x423281*/
    if ( !v32[2].__pad_C[209] ) /*0x423285*/
      v106 = *((int16_t *)v31 + 134); /*0x42329a*/
  }
  else if ( this->AnimClass_field_0xD4 ) /*0x4232a3*/
  {
    v105[0] = (int)this->AnimClass_field_0xD4; /*0x4232ad*/
    if ( !v25[2].__pad_C[209] ) /*0x4232b1*/
      v106 = this->AnimClass_field_0xFC[0]; /*0x4232c5*/
  }
  else
  {
    v105[0] = *(unsigned int *)&stru_87F5F0.__pad_58[120]; /*0x4232d4*/
    if ( v25[2].__pad_C[213] ) /*0x4232d8*/
      v105[0] = *(unsigned int *)(**(unsigned int **)&stru_B054D0.m_1[3] + 780); /*0x4232f0*/
    if ( !v25[2].__pad_C[209] ) /*0x4232f4*/
    {
      v33 = (unsigned int *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 43))(this, &v64); /*0x423307*/
      IDA_LOWORD(v92) = *v33 / 256; /*0x42331d*/
      IDA_HIWORD(v92) = v33[1] / 256; /*0x423336*/
      *(float *)v100 = v92; /*0x423343*/
      v27 = *((int16_t *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)v100) + 133); /*0x42334d*/
  LABEL_77:
      v106 = v27; /*0x423354*/
    }
  }
  LABEL_78:
  if ( this->__pad_194[0] ) /*0x423358*/
  {
    v34 = ZCoordToScreenY(*(int *)v101); /*0x423373*/
    v35 = *a2; /*0x423384*/
    v36 = *(unsigned int *)&this->AnimClass_field_0xC8[2].__pad_C[184] + v34 + a2[1]; /*0x42338b*/
    AnimClass_field_0x0 = (int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0; /*0x42339a*/
    v102 = v36; /*0x42339c*/
    *(unsigned int *)v101 = v35; /*0x4233a2*/
    v38 = AnimClass_field_0x0[116](this); /*0x4233a6*/
    v39 = ZCoordToScreenY(v38); /*0x4233ae*/
    DrawToSurfaceSHP( /*0x4233e9*/
      (int)g_DSurface_Hidden_2,
      v105[0],
      v103,
      v104,
      (int *)v101,
      aP5,
      9729,
      0,
      *(unsigned int *)&this->AnimClass_field_0xC8[2].__pad_C[184] - v39,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
  v40 = this->__pad_118[0]; /*0x4233ee*/
  v41 = 0.0; /*0x4233f4*/
  *(float *)v100 = 0.0; /*0x4233f8*/
  if ( !v40 ) /*0x4233fc*/
    goto LABEL_99; /*0x4233fc*/
  v42 = (unsigned int *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 18))(this, &v64); /*0x42340b*/
  v43 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v42); /*0x423414*/
  v44 = Cell::IsBridge((Cell *)v43); /*0x42341b*/
  v44 = v44; /*0x423422*/
  if ( !v44 ) /*0x423426*/
    goto LABEL_99; /*0x423426*/
  if ( v44[165] ) /*0x42342e*/
  {
    v45 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6308); /*0x423442*/
    v46 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2 * v45; /*0x423448*/
    *(unsigned int *)v101 = v45 + v46; /*0x423454*/
    v98 = *(unsigned char *)(v45 + v46 + 6260); /*0x42345e*/
    v96 = *(unsigned char *)(v45 + v46 + 4174 + 2087); /*0x42346d*/
    v84 = *(unsigned char *)(v45 + v46 + 6262); /*0x423477*/
    v47 = DDraw::GetStatus() - 1; /*0x423480*/
    if ( v47 ) /*0x423481*/
    {
      v50 = v47 - 1; /*0x423483*/
      if ( v50 ) /*0x423484*/
      {
        IDA_LOBYTE(v50) = v96; /*0x4234ce*/
        goto LABEL_89; /*0x4234ce*/
      }
      IDA_LOWORD(v41) = v98; /*0x423486*/
      v50 = v96; /*0x42348c*/
      IDA_LOWORD(v49) = v84; /*0x423493*/
      IDA_LOWORD(v48) = v96; /*0x42349c*/
      IDA_LODWORD(v41) = v49 | (32 * (v48 | (IDA_LODWORD(v41) << 6))); /*0x4234a3*/
    }
    else
    {
      v50 = v96; /*0x4234a7*/
    }
    IDA_LOWORD(v49) = (uint8_t)v50 >> 1; /*0x4234b2*/
    IDA_LOWORD(v48) = v98; /*0x4234b4*/
    v48 *= 32; /*0x4234ba*/
    v51 = v48 | v49; /*0x4234bd*/
    IDA_LOWORD(v48) = v84; /*0x4234bf*/
    v49 = v48 | (v51 << 6); /*0x4234c8*/
    IDA_LODWORD(v41) |= v49; /*0x4234ca*/
  LABEL_89:
    IDA_LOWORD(v49) = v98; /*0x4234d2*/
    IDA_LOWORD(v48) = v84; /*0x4234d8*/
    IDA_LOWORD(v50) = (uint8_t)v50 >> 1; /*0x4234e0*/
    IDA_LODWORD(v41) |= v48 | (32 * ((32 * v49) | v50)); /*0x4234ee*/
    *(float *)v100 = v41; /*0x4234f0*/
  }
  if ( !(*(uint8_t (__thiscall **)(unsigned int *))(*v44 + 352))(v44) || v44[113] != 1 ) /*0x423513*/
    goto LABEL_99; /*0x423513*/
  v52 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6320); /*0x42351f*/
  v53 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2 * v52; /*0x423525*/
  *(unsigned int *)v101 = v52 + v53; /*0x423531*/
  v99 = *(unsigned char *)(v52 + v53 + 6260); /*0x42353b*/
  v85 = *(unsigned char *)(v52 + v53 + 4174 + 2087); /*0x42354a*/
  v97 = *(unsigned char *)(v52 + v53 + 6262); /*0x423554*/
  v54 = DDraw::GetStatus() - 1; /*0x42355d*/
  if ( v54 ) /*0x42355e*/
  {
    v57 = v54 - 1; /*0x423560*/
    if ( v57 ) /*0x423561*/
    {
      IDA_LOBYTE(v57) = v85; /*0x4235ad*/
      goto LABEL_98; /*0x4235ad*/
    }
    IDA_LOWORD(v55) = v99; /*0x423563*/
    v57 = v85; /*0x423569*/
    IDA_LOWORD(v56) = v85; /*0x423573*/
    v58 = v56 | (v55 << 6); /*0x423575*/
    IDA_LOWORD(v56) = v97; /*0x423577*/
    v55 = v56 | (32 * v58); /*0x423580*/
    IDA_LODWORD(v41) |= v55; /*0x423582*/
  }
  else
  {
    v57 = v85; /*0x423586*/
  }
  IDA_LOWORD(v56) = (uint8_t)v57 >> 1; /*0x423591*/
  IDA_LOWORD(v55) = v99; /*0x423593*/
  v55 *= 32; /*0x423599*/
  v59 = v55 | v56; /*0x42359c*/
  IDA_LOWORD(v55) = v97; /*0x42359e*/
  v56 = v55 | (v59 << 6); /*0x4235a7*/
  IDA_LODWORD(v41) |= v56; /*0x4235a9*/
  LABEL_98:
  IDA_LOWORD(v56) = v99; /*0x4235b1*/
  IDA_LOWORD(v55) = v97; /*0x4235b7*/
  IDA_LOWORD(v57) = (uint8_t)v57 >> 1; /*0x4235bf*/
  IDA_LODWORD(v41) |= v55 | (32 * ((32 * v56) | v57)); /*0x4235cd*/
  *(float *)v100 = v41; /*0x4235cf*/
  LABEL_99:
  v60 = (unsigned int *)(*((int (__thiscall **)(AnimClass *, int *))this->AnimClass_field_0x0 + 18))(this, &v64); /*0x4235d3*/
  IDA_LOWORD(v94) = *v60 / 256; /*0x4235ef*/
  IDA_HIWORD(v94) = v60[1] / 256; /*0x423608*/
  *(unsigned int *)v101 = v94; /*0x423615*/
  v61 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v101); /*0x42361a*/
  if ( (uint8_t)CellClass::QuickPassable(v61) ) /*0x423621*/
  {
    v41 = 0.0; /*0x42362a*/
    *(float *)v100 = 0.0; /*0x42362c*/
  }
  v62 = this->AnimClass_field_0xC8; /*0x423630*/
  if ( v62[2].__pad_C[207] ) /*0x423636*/
  {
    FoundationSize = Building::GetFoundationSize(&v64, 0); /*0x42364f*/
    v64 = *a2; /*0x423657*/
    v65 = a2[1]; /*0x423659*/
    *(unsigned int *)v101 = FoundationSize[3]; /*0x42365c*/
    v66 = (int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0; /*0x423663*/
    v64 = v64; /*0x423667*/
    v105[0] = v64; /*0x42366d*/
    v95 = *(unsigned int *)v101 / 2; /*0x423673*/
    v67 = v65 - *(unsigned int *)v101 / 2; /*0x423677*/
    v86 = 0; /*0x423679*/
    v68 = v66[116](this); /*0x42367e*/
    v69 = this->AnimClass_field_0x100 /*0x4236a1*/
        + *(unsigned int *)&this->AnimClass_field_0xC8[2].__pad_C[184]
        - ZCoordToScreenY(v68)
        - 50;
    IDA_BYTE1(AnimClass_field_0x190) |= 0x20u; /*0x4236a4*/
    do /*0x423719*/
    {
      v70 = v67 + *(unsigned int *)&this->AnimClass_field_0xC8[2].__pad_C[184]; /*0x4236bb*/
      v105[0] = v64; /*0x4236bd*/
      v105[1] = v70; /*0x4236c1*/
      DrawToSurfaceSHP( /*0x4236f7*/
        (int)g_DSurface_Hidden_2,
        *(int *)&stru_87F5F0.__pad_58[120],
        v103,
        v104,
        v105,
        &DSurface_ViewBounds.field_0,
        AnimClass_field_0x190,
        0,
        v69,
        2,
        v106,
        *(int *)v100,
        0,
        0,
        0,
        0);
      if ( v67 < 0 ) /*0x4236fe*/
        v86 = 1; /*0x423700*/
      v67 -= *(unsigned int *)v101; /*0x42370d*/
      v69 -= *(unsigned int *)v101 + v95; /*0x423715*/
    }
    while ( !v86 ); /*0x423719*/
  }
  else if ( v62[2].__pad_C[221] ) /*0x423728*/
  {
    v109 = *(unsigned int *)&v62[2].__pad_C[184]; /*0x42373c*/
    v71 = a2[1]; /*0x423742*/
    *(unsigned int *)v101 = *a2; /*0x42374c*/
    v106 = v106; /*0x423756*/
    v72 = (int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0; /*0x42375e*/
    v102 = v109 + v71; /*0x423766*/
    v73 = v72[116](this); /*0x42376a*/
    IDA_BYTE1(AnimClass_field_0x190) |= 0x20u; /*0x42379b*/
    v80 = this->AnimClass_field_0x100 /*0x42379e*/
        + *(unsigned int *)&this->AnimClass_field_0xC8[2].__pad_C[184]
        - ZCoordToScreenY(v73)
        - 3;
    DrawToSurfaceSHP( /*0x4237a9*/
      (int)g_DSurface_Hidden_2,
      v105[0],
      v103,
      v104,
      (int *)v101,
      aP5,
      AnimClass_field_0x190,
      0,
      v80,
      0,
      v106,
      IDA_SLODWORD(v41),
      0,
      0,
      0,
      0);
  }
  else
  {
    v74 = *a2; /*0x4237b9*/
    v102 = *(unsigned int *)&v62[2].__pad_C[184] + a2[1]; /*0x4237bb*/
    *(unsigned int *)v101 = v74; /*0x4237cb*/
    v106 = v106; /*0x4237d2*/
    v75 = (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 116))(this); /*0x4237d7*/
    v76 = this->AnimClass_field_0x100 + *(unsigned int *)&this->AnimClass_field_0xC8[2].__pad_C[184] - ZCoordToScreenY(v75); /*0x4237ff*/
    v77 = AnimClass_field_0x190; /*0x423801*/
    IDA_BYTE1(v77) = IDA_BYTE1(AnimClass_field_0x190) | 0x20; /*0x423806*/
    DrawToSurfaceSHP( /*0x423827*/
      (int)g_DSurface_Hidden_2,
      v105[0],
      v103,
      v104,
      (int *)v101,
      aP5,
      v77,
      0,
      v76 - 2,
      2,
      v106,
      IDA_SLODWORD(v41),
      0,
      0,
      0,
      0);
    if ( this->AnimClass_field_0xC8[2].__pad_C[230] ) /*0x423832*/
    {
      v78 = v103->q018; /*0x423845*/
      v79 = (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 116))(this); /*0x423857*/
      v81 = -2 - ZCoordToScreenY(v79); /*0x423875*/
      DrawToSurfaceSHP( /*0x42389e*/
        (int)g_DSurface_Hidden_2,
        v105[0],
        v103,
        v104 + v78 / 2,
        a2,
        aP5,
        AnimClass_field_0x190 & 0xFFFFF9F8 | 0x601,
        0,
        v81,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
    }
  }
}
}
// 0x424CB0
namespace gamemd {
int AnimClass::InWhichLayer_AttachedObjectLayer()
{
  Coord *AnimClass_field_0xC8; // eax

  if ( this->AnimClass_field_0xCC ) /*0x424cb0*/
    return 2; /*0x424cba*/
  AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x424cc0*/
  if ( AnimClass_field_0xC8 ) /*0x424cc8*/
    return *(unsigned int *)&AnimClass_field_0xC8[2].__pad_C[216]; /*0x424cca*/
  else
    return 3; /*0x424cd1*/
}
}
// 0x4253B0
namespace gamemd {
int AnimClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
  IUnknown *AnimClass_field_0xD4; // edx
  int v4; // eax
  int v5; // ecx

  AnimClass_field_0xD4 = aP0->AnimClass_field_0xD4; /*0x4253b6*/
  if ( AnimClass_field_0xD4 && (v4 = *(unsigned int *)stru_B054D0.__tail_10 - 1, *(unsigned int *)stru_B054D0.__tail_10 - 1 >= 0) ) /*0x4253c8*/
  {
    v5 = *(unsigned int *)&stru_B054D0.m_1[3] + 4 * v4; /*0x4253d0*/
    while ( AnimClass_field_0xD4 != *(IUnknown **)(*(unsigned int *)v5 + 780) ) /*0x4253db*/
    {
      --v4; /*0x4253dd*/
      v5 -= 4; /*0x4253de*/
      if ( v4 < 0 ) /*0x4253e3*/
        goto LABEL_6; /*0x4253e3*/
    }
    *(unsigned int *)aP0->__pad_D8 = v4; /*0x425404*/
  }
  else
  {
  LABEL_6:
    *(unsigned int *)aP0->__pad_D8 = -1; /*0x4253e5*/
  }
  return AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x4253ff*/
}
}
// 0x428DE0
namespace gamemd {
void AnimClass::FreeRenderBuffer()
{
  if ( this->AnimClass_field_0x35D[1] && this->AnimClass_field_0xA4 ) /*0x428ded*/
  {
    if ( this->AnimClass_field_0x35D[2] ) /*0x428df7*/
    {
      Debug::Log(); /*0x428e0a*/
      RA2_OPDEL(this->AnimClass_field_0xA4); /*0x428e16*/
      this->AnimClass_field_0xA4 = 0; /*0x428e1e*/
      this->__pad_A8[0] = 0; /*0x428e28*/
    }
  }
}
}
// 0x448260
namespace gamemd {
BuildingTypeClass * * AnimClass::drawFrame()
{
  int result; // eax
  BuildingTypeClass *v6; // ecx
  BuildingTypeClass *v11; // edx
  AbstractClass *v14; // ecx
  BuildingTypeClass *v16; // ecx
  AbstractClass *v17; // ecx
  BuildingTypeClass *v20; // edx
  LightSourceClass *v21; // ecx
  unsigned char **v23; // ebp
  int Member; // eax
  IUnknown *v29; // eax
  AbstractClass *eax57; // eax
  AbstractClass *v32; // edi
  BuildingClass *v33; // eax
  int ecx66; // ecx
  FactoryClass *v35; // ecx
  FactoryClass *v36; // ecx
  AbstractClass *v37; // ebx
  int nextArrayIndex; // ecx
  int abstractFlags; // edx
  int ecx88; // ecx
  BuildingTypeClass *v53; // eax
  int (__thiscall **NeedsSaveOrLink)(void **, AbstractClass **); // eax
  int ecx99; // ecx
  BuildingTypeClass *v62; // eax
  int (__thiscall **v68)(void **, AbstractClass **); // edx
  int (__thiscall **v80)(void **, AbstractClass **); // edx
  int (__thiscall **v84)(void **, AbstractClass **, int, int); // eax
  int ecx134; // ecx
  AbstractClass *v88; // eax
  int ecx138; // ecx
  AbstractClass *v90; // eax
  BuildingTypeClass *v91; // eax
  BuildingTypeClass *v92; // eax
  BuildingTypeClass *vfptr0; // edx
  HouseClass *edi150; // edi
  BuildingTypeClass *v96; // eax
  char cl153; // cl
  AbstractClass *v98; // eax
  BuildingTypeClass *v99; // edx
  BuildingTypeClass *v103; // ebp
  int eax175; // eax
  BuildingTypeClass *v104; // edi
  int edx197; // edx
  BuildingTypeClass *v117; // eax
  int edx212; // edx
  BuildingTypeClass *v126; // eax
  int ecx258; // ecx
  BuildingTypeClass *v152; // edx
  int UnitsGainSelfHeal; // ecx
  BuildingTypeClass *v154; // ecx
  BuildingTypeClass *v155; // eax
  AbstractClass *v156; // ecx
  BuildingTypeClass *v157; // eax
  AbstractClass *v159; // ecx
  int edi266; // edi
  CCINIClass *v160; // eax
  char i; // al
  IUnknown *v165; // eax
  void **v179; // [esp+ECh] [ebp-18h] BYREF
  void *Block; // [esp+F0h] [ebp-14h]
  BuildingClass *v183; // [esp+FCh] [ebp-8h]
  void *v185; // [esp+108h] [ebp+4h]
  AbstractClass *aP1; // [esp+10Ch] [ebp+8h] BYREF
  HouseClass *v187; // [esp+110h] [ebp+Ch]
  if ( v185 == *((void **)&this->u32_345) )
  {
    IDA_LOBYTE(result) = 0;
  }
  else
  {
  int v182; // [esp+F8h] [ebp-Ch]
  int v174; // [esp+C0h] [ebp-44h]
  int v109; // ebp
    int v5 = this->AnimClass_field_0x38;
    if ( v5 && !*(unsigned char *)(this->q148 + 5499) )
      ObjectClass::CleanupAudioAndRefs(v5);
    if ( *(unsigned char *)(this->q148 + 5831) )
      *((unsigned char *)v185 + 22264) = 1;
    if ( *(unsigned char *)(*(unsigned int *)(this->AnimClass_field_0x21C + 52) + 422) )
    {
      v6 = (BuildingTypeClass *)this->q148;
      if ( v6->ProduceCashStartup )
      {
        HouseClass::AddPower(v185, (IUnknown *)v6->ProduceCashStartup);
        int v7 = *(unsigned int *)(this->q148 + 5472);
        this->q1B4 = *(unsigned int *)&HouseClass_Player[45112];
        this->q1B5 = v174;
        this->u32_6D8 = v7;
      }
    }
    bool v8 = this->hasParachute;
    int v2 = v2;
    int v3 = v3;
    int v9 = 1 << *(unsigned int *)(*((unsigned int *)v185 + 13) + 184);
    if ( (v8 & v9) != 0 )
    {
      int v10 = v8 - v9;
      v11 = (BuildingTypeClass *)this->q148;
      this->hasParachute = v10;
      if ( v11->? )
      {
        int v12 = 0;
        *(unsigned int *)(this->AnimClass_field_0x21C + 21732) = 0;
        int v13 = *(unsigned int *)(this->AnimClass_field_0x21C + 120);
        if ( v13 > 0 )
        {
          do
          {
            v14 = (AbstractClass *)this->AnimClass_field_0x21C;
            int v15 = *(unsigned int *)(*(unsigned int *)v14[3].__pad_0 + 4 * v12);
            if ( v15 && !*(unsigned char *)(v15 + 129) && *(unsigned char *)(*(unsigned int *)(v15 + 1312) + 5796) )
              v14[603].nextArrayIndex |= *(unsigned int *)(v15 + 528);
            ++v12;
          }
          while ( v12 < v13 );
        }
        MapClass::MarkForRedraw(&stru_87C374[13428], 2);
      }
    }
    v16 = (BuildingTypeClass *)this->q148;
    this->u8_3D3 = 0;
    if ( v16->LaserFencePost )
      BuildingClass::DemolishBridgeCheck(0);
    if ( (uint8_t)House::IsHumanPlayer(*((void **)&this->u32_345)) || (uint8_t)House::IsHumanPlayer(v185) )
    {
      if ( !*(unsigned char *)(*((unsigned int *)v185 + 13) + 422) && (unsigned char)aP1 )
      {
        if ( *(unsigned char *)(this->q148 + 5458) )
        {
          v17 = (AbstractClass *)this->AnimClass_field_0x21C;
          if ( v17 != (AbstractClass *)v185 )
          {
            if ( (uint8_t)House::IsHumanPlayer((void *)v17) )
              VoxClass::FindAndPlay(aEvaTechbuildin, -1, -1);
            if ( (uint8_t)House::IsHumanPlayer(v185) )
            {
              if ( (uint8_t)House::IsHumanPlayer(v185) )
              {
                int v18 = *(unsigned int *)(this->q148 + 5460);
                if ( v18 != -1 )
                  UpdateThemeManager(v18, -1, -1);
              }
            }
          }
        }
        else
        {
          int64_t v19 = ((int64_t (__thiscall *)(void *, AbstractClass **))*(unsigned int *)(this->q6E0)(this, &aP1);
          if ( CreateTriggerClassIfFarEnough((IUnknown *)0xA, IDA_SHIDWORD(v19), *(IUnknown **)v19) )
            VoxClass::FindAndPlay(aEvaBuildingcap, -1, -1);
        }
      }
      stru_87C374[18816] = 1;
      MapClass::MarkForRedraw(&stru_87C374[13428], 0);
    }
    v20 = (BuildingTypeClass *)this->q148;
    this->q080 = 1;
    this->u8_6CC = 1;
    if ( v20->NeedsEngineer )
    {
      v21 = (LightSourceClass *)this->ptr_614;
      this->u8_6EA = 1;
      if ( v21 )
        Trigger::EnableOnce(v21, 0);
      if ( *(unsigned char *)(this->q148 + 5822) )
        BuildingClass::RepairPlacement(0);
      int v22 = 0;
      v23 = (unsigned char **)((char *)&this->u32_2242);
      do
      {
        if ( *(unsigned char *)(v22 + this->q148 + 3980) && *v23 )
          VtableStub::Method_425270(*v23);
        v22 += 68;
        ++v23;
      }
      while ( v22 < 1428 );
    }
    if ( *(unsigned int *)&HouseClass_Player[29932] == 4
  int v170; // [esp+A4h] [ebp-60h]
  int v171; // [esp+A8h] [ebp-5Ch]
      && !*(unsigned char *)((*(int (__thiscall **)(void *, int, int))(this->hasParachute)(this, v170, v171) + 3231) )
    {
      HouseClass::IncrementStat((unsigned int *)v185 + 4314, *(unsigned int *)(this->q148 + 3576));
    }
    VectorClass_ReestablishPtr::Construct(&v179, 0, 0);
    int v24 = this->q03A;
    int v184 = 10;
    v183 = 0;
    aP1 = 0;
    if ( v24 > 0 )
    {
      do
      {
        Member = Team::GetMember(this, aP1);
        unsigned char * v26 = (unsigned char *)Member;
        if ( Member )
        {
          if ( (*(unsigned char *)(Member + 20) & 4) != 0 )
          {
            if ( (*(int (__thiscall **)(void *, int, int))(this->q278)(this, 19, Member) == 1 )
            {
              if ( *(unsigned char *)(this->q148 + 5821)
  unsigned int *v27; // ebp
                || (v27 = (unsigned int *)(*(int (__thiscall **)(void *, int *, unsigned char *))(this->q0A8)(
                                      this,
  int v176[3]; // [esp+C8h] [ebp-3Ch] BYREF
                                      v176,
                                      v26),
  unsigned int *v28; // eax
  int v177[3]; // [esp+D4h] [ebp-30h] BYREF
                    v28 = (unsigned int *)(*(int (__thiscall **)(unsigned char *, int *))(*(unsigned int *)v26 + 72))(v26, v177),
                    v29 = Coord::Subtract(
  unsigned int v178[3]; // [esp+E0h] [ebp-24h] BYREF
                            v178,
                            (IUnknown *)(*v28 - *v27),
                            (IUnknown *)(v28[1] - v27[1]),
                            (IUnknown *)(v28[2] - v27[2])),
  int v173; // [esp+BCh] [ebp-48h] BYREF
                    v173 = v29->field_0,
                    v174 = v29->field_4,
  int v175; // [esp+C4h] [ebp-40h]
                    v175 = v29->field_8,
                    Coord::Length(&v173),
  int v30; // eax
                    v30 < 64) )
              {
                char v31 = v26[1048];
                (*(void (__thiscall **)(unsigned char *, void *, int))(*(unsigned int *)v26 + 980))(v26, v185, 1);
                eax57 = (AbstractClass *)new AbstractClass;
                if ( eax57 )
                {
                  *(unsigned int *)eax57->__pad_0 = v26;
                  eax57->__pad_0[4] = v31;
                  v32 = eax57;
                }
                else
                {
                  v32 = 0;
                }
  int v181; // [esp+F4h] [ebp-10h]
                if ( (int)v183 < v181
                  || (IDA_BYTE1(v182) || !v181)
                  && v184 > 0
                  && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v179[2])(&v179, v181 + v184, 0) )
                {
                  v33 = v183;
                  v183 = (BuildingClass *)((char *)v183 + 1);
                  *((unsigned int *)Block + (unsigned int)v33) = v32;
                }
                goto LABEL_66;
              }
            }
          }
          else
          {
            v26 = 0;
          }
          (*(void (__thiscall **)(void *, int, unsigned char *))(this->q278)(this, 23, v26);
          (*(void (__thiscall **)(void *, int, unsigned char *))(this->q278)(this, 3, v26);
        }
LABEL_66:
        ecx66 = this->q03A;
        aP1 = (AbstractClass *)((char *)aP1 + 1);
      }
      while ( (int)aP1 < ecx66 );
    }
    v35 = (FactoryClass *)this->q524;
    if ( v35 )
    {
      FactoryClass::AbandonProduction((int)v35);
      v36 = (FactoryClass *)this->q524;
      if ( v36 )
        (*(void (__thiscall **)(FactoryClass *, int))(*(unsigned int *)v36->__pad_0 + 32))(v36, 1);
      this->q524 = 0;
    }
    BuildingClass::DecrementTypeCounter();
    v37 = (AbstractClass *)this->AnimClass_field_0x21C;
  char v172[8]; // [esp+B4h] [ebp-50h] BYREF
    ScriptAction::GetWaypointCoords(v172, (IUnknown *)this);
    this->u8_6E3 = 1;
    int v39 = 0;
    int v40 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 2236);
    if ( v40 > 0 )
    {
      unsigned int * v41 = *(unsigned int **)(*(unsigned int *)&stru_87C374[44652] + 2224);
      while ( *v41 != this->q148 )
      {
        ++v39;
        ++v41;
        if ( v39 >= v40 )
          goto LABEL_80;
      }
      int v42 = *(unsigned int *)&v37[2].__pad_0[8];
      aP1 = (AbstractClass *)this;
      int v43 = (*(int (__thiscall **)(char *, AbstractClass **))(v42 + 16))(&v37[2].__pad_0[8], &aP1);
      if ( v43 != -1 )
      {
        nextArrayIndex = v37[2].nextArrayIndex;
        if ( v43 < nextArrayIndex )
        {
          int v45 = nextArrayIndex - 1;
          for ( v37[2].nextArrayIndex = v45;
                v43 < v37[2].nextArrayIndex;
                *(unsigned int *)(*(unsigned int *)&v37[2].__pad_0[12] + 4 * v43 - 4) = *(unsigned int *)(*(unsigned int *)&v37[2].__pad_0[12]
                                                                                      + 4 * v43) )
          {
            ++v43;
          }
        }
      }
    }
LABEL_80:
    if ( *(unsigned char *)(this->q148 + 5801) )
    {
      abstractFlags = v37[3].abstractFlags;
      aP1 = (AbstractClass *)this;
      int v47 = (*(int (__thiscall **)(int *, AbstractClass **))(abstractFlags + 16))(&v37[3].abstractFlags, &aP1);
      if ( v47 != -1 )
      {
        int v48 = *(unsigned int *)v37[4].__pad_0;
        if ( v47 < v48 )
        {
          int v49 = v48 - 1;
          for ( *(unsigned int *)v37[4].__pad_0 = v49;
                v47 < *(unsigned int *)v37[4].__pad_0;
                *(unsigned int *)(v37[3].nextArrayIndex + 4 * v47 - 4) = *(unsigned int *)(v37[3].nextArrayIndex + 4 * v47) )
          {
            ++v47;
          }
        }
      }
    }
    if ( *(unsigned char *)(this->q148 + 5805) )
    {
      int v50 = *(unsigned int *)&v37[4].__pad_0[8];
      aP1 = (AbstractClass *)this;
      int v51 = (*(int (__thiscall **)(char *, AbstractClass **))(v50 + 16))(&v37[4].__pad_0[8], &aP1);
      if ( v51 != -1 )
      {
        int v52 = v37[4].nextArrayIndex;
        if ( v51 < v52 )
        {
          ecx88 = v52 - 1;
          for ( v37[4].nextArrayIndex = ecx88;
                v51 < v37[4].nextArrayIndex;
                *(unsigned int *)(*(unsigned int *)&v37[4].__pad_0[12] + 4 * v51 - 4) = *(unsigned int *)(*(unsigned int *)&v37[4].__pad_0[12]
                                                                                      + 4 * v51) )
          {
            ++v51;
          }
        }
      }
    }
    v53 = (BuildingTypeClass *)this->q148;
    if ( v53->UnitAbsorb || v53->InfantryAbsorb )
    {
      NeedsSaveOrLink = (int (__thiscall **)(void **, AbstractClass **))v37[4].NeedsSaveOrLink;
      aP1 = (AbstractClass *)this;
      int v56 = NeedsSaveOrLink[4](&v37[4].NeedsSaveOrLink, &aP1);
      if ( v56 != -1 )
      {
        int v57 = *(unsigned int *)&v37[5].__pad_0[12];
        if ( v56 < v57 )
        {
          int v58 = v57 - 1;
          for ( *(unsigned int *)&v37[5].__pad_0[12] = v58;
                v56 < *(unsigned int *)&v37[5].__pad_0[12];
                *(unsigned int *)(*(unsigned int *)v37[5].__pad_0 + 4 * v56 - 4) = *(unsigned int *)(*(unsigned int *)v37[5].__pad_0 + 4 * v56) )
          {
            ++v56;
          }
        }
      }
    }
    if ( *(unsigned char *)(this->q148 + 5803) )
    {
      int v59 = v37[5].abstractFlags;
      aP1 = (AbstractClass *)this;
      int v60 = (*(int (__thiscall **)(int *, AbstractClass **))(v59 + 16))(&v37[5].abstractFlags, &aP1);
      if ( v60 != -1 )
      {
        int v61 = *(unsigned int *)v37[6].__pad_0;
        if ( v60 < v61 )
        {
          ecx99 = v61 - 1;
          for ( *(unsigned int *)v37[6].__pad_0 = ecx99;
                v60 < *(unsigned int *)v37[6].__pad_0;
                *(unsigned int *)(v37[5].nextArrayIndex + 4 * v60 - 4) = *(unsigned int *)(v37[5].nextArrayIndex + 4 * v60) )
          {
            ++v60;
          }
        }
      }
    }
    v62 = (BuildingTypeClass *)this->q148;
    if ( v62->CanBeOccupied )
    {
      if ( *(int *)&v62->DebrisTypes[800] > -1 )
      {
        int v64 = *(unsigned int *)&v37[6].__pad_0[8];
        aP1 = (AbstractClass *)this;
        int v65 = (*(int (__thiscall **)(char *, AbstractClass **))(v64 + 16))(&v37[6].__pad_0[8], &aP1);
        if ( v65 != -1 )
        {
          int v66 = v37[6].nextArrayIndex;
          if ( v65 < v66 )
          {
            int v67 = v66 - 1;
            for ( v37[6].nextArrayIndex = v67;
                  v65 < v37[6].nextArrayIndex;
                  *(unsigned int *)(*(unsigned int *)&v37[6].__pad_0[12] + 4 * v65 - 4) = *(unsigned int *)(*(unsigned int *)&v37[6].__pad_0[12]
                                                                                        + 4 * v65) )
            {
              ++v65;
            }
          }
        }
      }
    }
    if ( *(unsigned char *)(this->q148 + 5804) )
    {
      v68 = (int (__thiscall **)(void **, AbstractClass **))v37[6].NeedsSaveOrLink;
      aP1 = (AbstractClass *)this;
      int v69 = v68[4](&v37[6].NeedsSaveOrLink, &aP1);
      if ( v69 != -1 )
      {
        int v70 = *(unsigned int *)&v37[7].__pad_0[12];
        if ( v69 < v70 )
        {
          int v71 = v70 - 1;
          for ( *(unsigned int *)&v37[7].__pad_0[12] = v71;
                v69 < *(unsigned int *)&v37[7].__pad_0[12];
                *(unsigned int *)(*(unsigned int *)v37[7].__pad_0 + 4 * v69 - 4) = *(unsigned int *)(*(unsigned int *)v37[7].__pad_0 + 4 * v69) )
          {
            ++v69;
          }
        }
      }
    }
    if ( *(unsigned char *)(this->q148 + 5808) )
    {
      int v72 = v37[7].abstractFlags;
      aP1 = (AbstractClass *)this;
      int v73 = (*(int (__thiscall **)(int *, AbstractClass **))(v72 + 16))(&v37[7].abstractFlags, &aP1);
      if ( v73 != -1 )
      {
        int v74 = *(unsigned int *)v37[8].__pad_0;
        if ( v73 < v74 )
        {
          int v75 = v74 - 1;
          for ( *(unsigned int *)v37[8].__pad_0 = v75;
                v73 < *(unsigned int *)v37[8].__pad_0;
                *(unsigned int *)(v37[7].nextArrayIndex + 4 * v73 - 4) = *(unsigned int *)(v37[7].nextArrayIndex + 4 * v73) )
          {
            ++v73;
          }
        }
      }
    }
    if ( *(int *)(this->q148 + 5900) > 0 )
    {
      int v76 = *(unsigned int *)&v37[8].__pad_0[8];
      aP1 = (AbstractClass *)this;
      int v77 = (*(int (__thiscall **)(char *, AbstractClass **))(v76 + 16))(&v37[8].__pad_0[8], &aP1);
      if ( v77 != -1 )
      {
        int v78 = v37[8].nextArrayIndex;
        if ( v77 < v78 )
        {
          int v79 = v78 - 1;
          for ( v37[8].nextArrayIndex = v79;
                v77 < v37[8].nextArrayIndex;
                *(unsigned int *)(*(unsigned int *)&v37[8].__pad_0[12] + 4 * v77 - 4) = *(unsigned int *)(*(unsigned int *)&v37[8].__pad_0[12]
                                                                                      + 4 * v77) )
          {
            ++v77;
          }
        }
      }
    }
    if ( *(unsigned char *)(this->q148 + 5837) )
    {
      v80 = (int (__thiscall **)(void **, AbstractClass **))v37[8].NeedsSaveOrLink;
      aP1 = (AbstractClass *)this;
      int v81 = v80[4](&v37[8].NeedsSaveOrLink, &aP1);
      if ( v81 != -1 )
      {
        int v82 = *(unsigned int *)&v37[9].__pad_0[12];
        if ( v81 < v82 )
        {
          int v83 = v82 - 1;
          for ( *(unsigned int *)&v37[9].__pad_0[12] = v83;
                v81 < *(unsigned int *)&v37[9].__pad_0[12];
                *(unsigned int *)(*(unsigned int *)v37[9].__pad_0 + 4 * v81 - 4) = *(unsigned int *)(*(unsigned int *)v37[9].__pad_0 + 4 * v81) )
          {
            ++v81;
          }
        }
      }
      HouseClass::CalculateCostMultipliers((float *)v37->__pad_0);
    }
    v84 = (int (__thiscall **)(void **, AbstractClass **, int, int))v37[2].NeedsSaveOrLink;
    aP1 = (AbstractClass *)this;
    int v85 = v84[4](&v37[2].NeedsSaveOrLink, &aP1, v170, v171);
    if ( v85 != -1 )
    {
      int v86 = *(unsigned int *)&v37[3].__pad_0[12];
      if ( v85 < v86 )
      {
        int v87 = v86 - 1;
        for ( *(unsigned int *)&v37[3].__pad_0[12] = v87;
              v85 < *(unsigned int *)&v37[3].__pad_0[12];
              *(unsigned int *)(*(unsigned int *)v37[3].__pad_0 + 4 * v85 - 4) = *(unsigned int *)(*(unsigned int *)v37[3].__pad_0 + 4 * v85) )
        {
          ++v85;
        }
      }
    }
    if ( *(unsigned char *)(this->q148 + 5836) )
      --*(unsigned int *)&v37[594].__pad_0[4];
    ecx134 = *(unsigned int *)(this->q148 + 5476);
    if ( ecx134 )
    {
      if ( this->u8_6E4 )
      {
        *(unsigned int *)(this->AnimClass_field_0x21C + 356) -= ecx134;
        v88 = (AbstractClass *)this->AnimClass_field_0x21C;
        if ( (int)v88[9].NeedsSaveOrLink < 0 )
          v88[9].NeedsSaveOrLink = 0;
      }
    }
    ecx138 = *(unsigned int *)(this->q148 + 5480);
    if ( ecx138 )
    {
      if ( this->u8_6E4 )
      {
        *(unsigned int *)(this->AnimClass_field_0x21C + 360) -= ecx138;
        v90 = (AbstractClass *)this->AnimClass_field_0x21C;
        if ( *(int *)v90[10].__pad_0 < 0 )
          *(unsigned int *)v90[10].__pad_0 = 0;
      }
    }
    v91 = (BuildingTypeClass *)this->q148;
    if ( v91->Helipad )
      *(unsigned int *)&v37[20].__pad_0[4] -= v91->?;
    v92 = (BuildingTypeClass *)this->q148;
    if ( v92->CloakGenerator )
    {
      char v94 = this->q1BB;
      this->u8_6EB = -1;
      if ( !v94 )
        this->q1BB = v92->CloakRadiusInCells;
      vfptr0 = *(BuildingTypeClass **)this;
      this->q080 = 1;
      this->q1BB = 1;
      (*(void (__thiscall **)(void *, int))&vfptr0->DebrisTypes[252])(this, 1);
    }
    if ( *(unsigned char *)(this->q148 + 3281) )
      (*(void (__thiscall **)(void *))(this->q418)(this);
    (*(void (__thiscall **)(void *, unsigned int, unsigned int, unsigned int, unsigned int))(this->q48C)(this, 0, 0, 0, 0);
    edi150 = v187;
    TechnoClass::ProcessCapture((int)v187, v187, 1);
    if ( *(unsigned char *)(this->q148 + 5831) )
    {
      if ( (*(uint8_t (__thiscall **)(void *))(this->q0D4)(this) )
      {
        v96 = (BuildingTypeClass *)this->q148;
        if ( v96->CloakGenerator )
        {
          cl153 = this->q1BB;
          this->u8_6EB = 1;
          if ( cl153 == v96->CloakRadiusInCells )
            this->q1BB = 0;
          this->q080 = 1;
        }
      }
    }
    if ( *(unsigned char *)(this->q148 + 3281)
      && (*(uint8_t (__thiscall **)(void *))(this->q0D4)(this) )
    {
      (*(void (__thiscall **)(void *))(((unsigned int)(this->u32_1A04))))(this);
    }
    AnimClass::updateAnimation(0);
    v37[603].abstractFlags = (int)this;
    BuildingClass::CalcExitCoords((int *)v37->__pad_0);
    BuildingClass::CalcExitCoords(this->q21C);
    v98 = (AbstractClass *)this->AnimClass_field_0x21C;
    if ()
      v98[603].abstractFlags = 0;
    if ( (uint8_t)House::IsHumanPlayer((void *)v37) && *(unsigned char *)(this->q148 + 5817) )
    {
      *(unsigned int *)&stru_87C374[17944] = 0;
      *(unsigned int *)&stru_87C374[17948] = 0;
      *(unsigned int *)&stru_87C374[17952] = -1;
      Mouse::SetBounds((int)&stru_87C374[13428], 0);
    }
    BuildingClass::IncrementOccupantTypeCounter();
    v99 = *(BuildingTypeClass **)this;
    this->u8_6E8 = 0;
    (*(void (__thiscall **)(void *, int))&v99->DebrisTypes[456])(this, 1);
    if ( *(unsigned char *)(this->q148 + 5822) )
    {
      if ( !*(unsigned int *)&HouseClass_Player[43616] )
      {
        if ( !this->q090
          || this->q081
          || (BuildingClass::DemolishBridge(this),
              BuildingClass::DemolishBridge(this),
              BuildingClass::DemolishBridge(this),
              BuildingClass::DemolishBridge(this),
              BuildingClass::RepairPlacement(this, 1),
              !*(unsigned int *)&HouseClass_Player[43616]) )
        {
          if ( *(unsigned char *)(this->q148 + 5822) )
            this->u32_618 = 0;
        }
      }
    }
    if ( (uint8_t)House::IsHumanPlayer(*((void **)&this->u32_345)) )
    {
      (*(void (__thiscall **)(void *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(this->q488)(
        this,
        0,
        0,
        0,
        0,
        0);
      MapClass::MarkForRedraw(&stru_87C374[13428], 1);
    }
    int v101 = 1 << *(unsigned int *)(edi150->relatedTagsCapacity + 184);
    bool v102 = this->hasParachute;
    if ( (v102 & v101) != 0 )
      this->hasParachute = v102 & ~v101;
    v103 = (BuildingTypeClass *)this->COMStub_Return0_121();
    eax175 = this->GetCellCoords();
    v104 = (BuildingTypeClass *)(*(int (__thiscall **)(void *, unsigned int))(this->q119)(
                                  this,
                                  *(int16_t *)(eax175 + 266));
    if ()
      || this->AnimClass_field_0x294 && *(unsigned int *)(this->AnimClass_field_0x294 + 80) == IsObjectTypeBuildingType((int)this) )
    {
      IDA_LOWORD(v104);
    }
    this->qE00 = (unsigned short)v104;
    BuildingClass::SyncCrateVisuals(v103, (uint16_t)v104);
    BuildingClass::SetConnectedBuildingMission((BuildingClass *)*((char *)&this->u32_2C43));
    int v106 = 0;
    int v107 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 2236);
    if ( v107 <= 0 )
    {
LABEL_183:
      v109 = (int)v185;
    }
    else
    {
      unsigned int * v108 = *(unsigned int **)(*(unsigned int *)&stru_87C374[44652] + 2224);
      while ( *v108 != this->q148 )
      {
        ++v106;
        ++v108;
        if ( v106 >= v107 )
          goto LABEL_183;
      }
      v109 = (int)v185;
      int v166 = *((unsigned int *)v185 + 22);
      if ( *((unsigned int *)v185 + 24) < v166
        || (*((unsigned char *)v185 + 93) || !v166)
  int v167; // eax
        && (v167 = *((unsigned int *)v185 + 25), v167 > 0)
        && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*((unsigned int *)v185 + 20) + 8))(
             (int)v185 + 80,
             v166 + v167,
             0) )
      {
        int v168 = *((unsigned int *)v185 + 24);
        int v169 = *((unsigned int *)v185 + 21);
        *((unsigned int *)v185 + 24) = v168 + 1;
        *(unsigned int *)(v169 + 4 * v168) = this;
      }
    }
    if ( *(unsigned char *)(this->q148 + 5801) )
    {
      int v110 = *(unsigned int *)(v109 + 136);
      if ( *(unsigned int *)(v109 + 144) < v110
        || (*(unsigned char *)(v109 + 141) || !v110)
  int v111; // eax
        && (v111 = *(unsigned int *)(v109 + 148), v111 > 0)
        && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v109 + 128) + 8))(
             v109 + 128,
             v110 + v111,
             0) )
      {
        int v112 = *(unsigned int *)(v109 + 144);
        int v113 = *(unsigned int *)(v109 + 132);
        *(unsigned int *)(v109 + 144) = v112 + 1;
        *(unsigned int *)(v113 + 4 * v112) = this;
      }
    }
    if ( *(unsigned char *)(this->q148 + 5805) )
    {
      int v114 = *(unsigned int *)(v109 + 160);
      if ( *(unsigned int *)(v109 + 168) < v114
        || (*(unsigned char *)(v109 + 165) || !v114)
  int v115; // eax
        && (v115 = *(unsigned int *)(v109 + 172), v115 > 0)
        && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v109 + 152) + 8))(
             v109 + 152,
             v114 + v115,
             0) )
      {
        int v116 = *(unsigned int *)(v109 + 168);
        edx197 = *(unsigned int *)(v109 + 156);
        *(unsigned int *)(v109 + 168) = v116 + 1;
        *(unsigned int *)(edx197 + 4 * v116) = this;
      }
    }
    v117 = (BuildingTypeClass *)this->q148;
    if ( v117->UnitAbsorb || v117->InfantryAbsorb )
    {
      int v119 = *(unsigned int *)(v109 + 184);
      if ( *(unsigned int *)(v109 + 192) < v119
        || (*(unsigned char *)(v109 + 189) || !v119)
  int v120; // eax
        && (v120 = *(unsigned int *)(v109 + 196), v120 > 0)
        && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v109 + 176) + 8))(
             v109 + 176,
             v119 + v120,
             0) )
      {
        int v121 = *(unsigned int *)(v109 + 192);
        int v122 = *(unsigned int *)(v109 + 180);
        *(unsigned int *)(v109 + 192) = v121 + 1;
        *(unsigned int *)(v122 + 4 * v121) = this;
      }
    }
    if ( *(unsigned char *)(this->q148 + 5803) )
    {
      int v123 = *(unsigned int *)(v109 + 208);
      if ( *(unsigned int *)(v109 + 216) < v123
        || (*(unsigned char *)(v109 + 213) || !v123)
  int v124; // eax
        && (v124 = *(unsigned int *)(v109 + 220), v124 > 0)
        && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v109 + 200) + 8))(
             v109 + 200,
             v123 + v124,
             0) )
      {
        int v125 = *(unsigned int *)(v109 + 216);
        edx212 = *(unsigned int *)(v109 + 204);
        *(unsigned int *)(v109 + 216) = v125 + 1;
        *(unsigned int *)(edx212 + 4 * v125) = this;
      }
    }
    v126 = (BuildingTypeClass *)this->q148;
    if ( v126->CanBeOccupied && *(int *)&v126->DebrisTypes[800] > -1 )
    {
      int v128 = *(unsigned int *)(v109 + 232);
      if ( *(unsigned int *)(v109 + 240) < v128
        || (*(unsigned char *)(v109 + 237) || !v128)
  int v129; // eax
        && (v129 = *(unsigned int *)(v109 + 244), v129 > 0)
        && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v109 + 224) + 8))(
             v109 + 224,
             v128 + v129,
             0) )
      {
        int v130 = *(unsigned int *)(v109 + 240);
        int v131 = *(unsigned int *)(v109 + 228);
        *(unsigned int *)(v109 + 240) = v130 + 1;
        *(unsigned int *)(v131 + 4 * v130) = this;
      }
    }
    if ( *(unsigned char *)(this->q148 + 5804) )
    {
      int v132 = *(unsigned int *)(v109 + 256);
      if ( *(unsigned int *)(v109 + 264) < v132
        || (*(unsigned char *)(v109 + 261) || !v132)
  int v133; // eax
        && (v133 = *(unsigned int *)(v109 + 268), v133 > 0)
        && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v109 + 248) + 8))(
             v109 + 248,
             v132 + v133,
             0) )
      {
        int v134 = *(unsigned int *)(v109 + 264);
        int v135 = *(unsigned int *)(v109 + 252);
        *(unsigned int *)(v109 + 264) = v134 + 1;
        *(unsigned int *)(v135 + 4 * v134) = this;
      }
    }
    if ( *(unsigned char *)(this->q148 + 5808) )
    {
      int v136 = *(unsigned int *)(v109 + 280);
      if ( *(unsigned int *)(v109 + 288) < v136
        || (*(unsigned char *)(v109 + 285) || !v136)
  int v137; // eax
        && (v137 = *(unsigned int *)(v109 + 292), v137 > 0)
        && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v109 + 272) + 8))(
             v109 + 272,
             v137 + v136,
             0) )
      {
        int v138 = *(unsigned int *)(v109 + 288);
        int v139 = *(unsigned int *)(v109 + 276);
        *(unsigned int *)(v109 + 288) = v138 + 1;
        *(unsigned int *)(v139 + 4 * v138) = this;
      }
    }
    if ( *(int *)(this->q148 + 5900) > 0 )
    {
      int v140 = *(unsigned int *)(v109 + 304);
      if ( *(unsigned int *)(v109 + 312) < v140
        || (*(unsigned char *)(v109 + 309) || !v140)
  int v141; // eax
        && (v141 = *(unsigned int *)(v109 + 316), v141 > 0)
        && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v109 + 296) + 8))(
             v109 + 296,
             v141 + v140,
             0) )
      {
        int v142 = *(unsigned int *)(v109 + 312);
        int v143 = *(unsigned int *)(v109 + 300);
        *(unsigned int *)(v109 + 312) = v142 + 1;
        *(unsigned int *)(v143 + 4 * v142) = this;
      }
    }
    if ( *(unsigned char *)(this->q148 + 5837) )
    {
      int v144 = *(unsigned int *)(v109 + 328);
      if ( *(unsigned int *)(v109 + 336) < v144
        || (*(unsigned char *)(v109 + 333) || !v144)
  int v145; // eax
        && (v145 = *(unsigned int *)(v109 + 340), v145 > 0)
        && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v109 + 320) + 8))(
             v109 + 320,
             v145 + v144,
             0) )
      {
        int v146 = *(unsigned int *)(v109 + 336);
        int v147 = *(unsigned int *)(v109 + 324);
        *(unsigned int *)(v109 + 336) = v146 + 1;
        *(unsigned int *)(v147 + 4 * v146) = this;
      }
      HouseClass::CalculateCostMultipliers((float *)v109);
    }
    int v148 = *(unsigned int *)(v109 + 112);
    if ( *(unsigned int *)(v109 + 120) < v148
      || (*(unsigned char *)(v109 + 117) || !v148)
  int v149; // eax
      && (v149 = *(unsigned int *)(v109 + 124), v149 > 0)
      && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v109 + 104) + 8))(v109 + 104, v149 + v148, 0) )
    {
      int v150 = *(unsigned int *)(v109 + 120);
      int v151 = *(unsigned int *)(v109 + 108);
      *(unsigned int *)(v109 + 120) = v150 + 1;
      *(unsigned int *)(v151 + 4 * v150) = this;
    }
    if ( *(unsigned char *)(this->q148 + 5836) )
      ++*(unsigned int *)(this->AnimClass_field_0x21C + 21388);
    ecx258 = *(unsigned int *)(this->q148 + 5476);
    if ( ecx258 )
      *(unsigned int *)(this->AnimClass_field_0x21C + 356) += ecx258;
    v152 = (BuildingTypeClass *)this->q148;
    UnitsGainSelfHeal = v152->UnitsGainSelfHeal;
    if ( UnitsGainSelfHeal )
      *(unsigned int *)(this->AnimClass_field_0x21C + 360) += UnitsGainSelfHeal;
    v154 = (BuildingTypeClass *)this->q148;
    if ( v154->Helipad )
      *(unsigned int *)(this->AnimClass_field_0x21C + 724) += v154->?;
    v155 = (BuildingTypeClass *)this->q148;
    v156 = (AbstractClass *)v155->Factory[0];
    if ( v156 )
    {
      IDA_LOBYTE(v152) = v155->DebrisTypes[2490];
      HouseClass::UpdateProduction((int)v37, (IUnknown *)v156, (AbstractClass *)v152, 0);
      v157 = (BuildingTypeClass *)this->q148;
      IDA_LOBYTE(v159) = v157->DebrisTypes[2490];
      HouseClass::UpdateProduction(v109, (IUnknown *)v157->Factory[0], v159, 0);
    }
    edi266 = 0;
    if ( (int)v183 > 0 )
    {
      v160 = (CCINIClass *)Block;
      do
      {
        (*(void (__thiscall **)(void *, int, unsigned int))(this->q278)(
          this,
          2,
          **(unsigned int **)&v160->__pad_0[4 * edi266]);
        v160 = (CCINIClass *)Block;
        if ( *(unsigned char *)(*((unsigned int *)Block + edi266) + 4) )
        {
          this->q418 = 1;
          *(unsigned char *)(**(unsigned int **)&v160->__pad_0[4 * edi266] + 1048) = 1;
          v160 = (CCINIClass *)Block;
        }
        ++edi266;
      }
      while ( edi266 < (int)v183 );
    }
    if ( *(unsigned int *)&HouseClass_Player[29932] )
    {
      if ( !(uint8_t)House::IsCurrentPlayer((void *)v109) )
      {
        bool v162 = this->q053;
        if ( v162 != v109 && !*(unsigned char *)(*(unsigned int *)(v162 + 52) + 422) )
        {
          for ( i = this->u8_702; i > 0; i = this->u8_702 )
          {
            int v164 = *((unsigned int *)this + i + 378);
            v165 = (IUnknown *)(*(int (__thiscall **)(int, unsigned int, int))(*(unsigned int *)v164 + 184))(
                                 v164,
                                 this->AnimClass_field_0x21C,
                                 1);
            HouseClass::AddPower(this->q21C, v165);
            BuildingClass::ClearSuperWeaponAnim();
            *(unsigned char *)(this->AnimClass_field_0x21C + 22392) = 1;
            *(unsigned char *)(this->AnimClass_field_0x21C + 22393) = 1;
          }
          (*(void (__thiscall **)(void *, int))(this->q1A0)(this, 1);
        }
      }
    }
    v37[14].__pad_0[4] = 1;
    result = (int)Block;
    *(unsigned char *)(v109 + 508) = 1;
    v179 = &vt_VectorClass_Reestablish;
    if ( result )
    {
      if ( IDA_BYTE1(v182) )
        RA2_OPDEL((void *)result);
    }
    IDA_LOBYTE(result) = 1;
  }
  return result;
}
} // namespace gamemd

// 0x7298F0
namespace gamemd {
void AnimClass_GetAnimation()
{
  int *v3; // eax
  int GroundHeight; // ebx
  int v5; // edi
  int v6; // eax
  int result; // eax
  int *v8; // eax
  int *v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // [esp+Ch] [ebp-1Ch] BYREF
  int v14; // [esp+10h] [ebp-18h] BYREF
  int v15; // [esp+14h] [ebp-14h]
  int v16; // [esp+18h] [ebp-10h] BYREF
  int v17; // [esp+1Ch] [ebp-Ch]
  int v18; // [esp+20h] [ebp-8h]

  v3 = (int *)(a1[3] + 156); /*0x7298fa*/
  v13 = *v3; /*0x729901*/
  v14 = v3[1]; /*0x72990d*/
  v15 = v3[2]; /*0x729919*/
  GroundHeight = Cell::GetGroundHeight(&v13); /*0x729922*/
  if ( v15 >= GroundHeight ) /*0x72992a*/
  {
    (*(void (__thiscall **)(unsigned int, unsigned int, unsigned int))(*(unsigned int *)a1[3] + 288))(a1[3], 0, 0); /*0x729a43*/
    v10 = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)a1[3] + 132))(a1[3]); /*0x729a4e*/
    v11 = Math::RoundToInt(64.0 / (double)*(int *)(v10 + 1820)); /*0x729a60*/
    a1[10] = g_CurrentFrame; /*0x729a72*/
    a1[11] = v17; /*0x729a78*/
    v12 = a1[3]; /*0x729a7b*/
    a1[12] = v11; /*0x729a7e*/
    a1[13] = v11; /*0x729a81*/
    result = (*(int (__thiscall **)(int, unsigned int, unsigned int))(*(unsigned int *)v12 + 1348))(v12, 0, 0); /*0x729a86*/
    a1[6] = 6; /*0x729a8c*/
  }
  else
  {
    v5 = (*(int (__thiscall **)(unsigned int, int))(*(unsigned int *)a1[3] + 456))(a1[3], a2); /*0x72993f*/
    v13 = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)a1[3] + 1336))(a1[3]); /*0x72994f*/
    v6 = Math::RoundToInt((double)v13 * *(double *)&g_RulesClass_Instance->TunnelSpeed); /*0x72995a*/
    if ( v6 <= 5 ) /*0x729962*/
      v6 = 5; /*0x729964*/
    v16 += v6; /*0x729971*/
    if ( v16 > GroundHeight ) /*0x729975*/
      v16 = GroundHeight; /*0x729977*/
    result = (*(int (__thiscall **)(unsigned int, int *))(*(unsigned int *)a1[3] + 436))(a1[3], &v14); /*0x729985*/
    if ( v5 <= -50 ) /*0x72998f*/
    {
      result = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)a1[3] + 456))(a1[3]); /*0x72999a*/
      if ( result > -50 ) /*0x7299a3*/
      {
        v8 = (int *)(a1[3] + 156); /*0x7299ae*/
        v16 = *v8; /*0x7299b5*/
        v17 = v8[1]; /*0x7299c2*/
        v18 = v8[2]; /*0x7299cd*/
        StartAudioControllerAt(g_RulesClass_Instance->GUICheckboxSound, (int)&v16, 0); /*0x7299d7*/
        result = (int)operator new(0x1C8u); /*0x7299e1*/
        if ( result ) /*0x7299eb*/
        {
          v9 = (int *)(a1[3] + 156); /*0x7299f6*/
          v16 = *v9; /*0x729a09*/
          v17 = v9[1]; /*0x729a10*/
          v18 = v9[2]; /*0x729a1c*/
          return (int)AnimClass::ctor( /*0x729a2f*/
                        (void **)result,
                        (void *)g_RulesClass_Instance->WeatherConBolts[3],
                        &v16,
                        0,
                        1,
                        (void *)0x600,
                        0,
                        0);
        }
      }
    }
  }
  return result; /*0x729a34*/
}
}
// 0x761030
namespace gamemd {
int AnimClass::ProcessFrame()
{
  int i; // edi
  int *Coords; // eax
  int v4; // eax
  int v6[3]; // [esp+8h] [ebp-Ch] BYREF

  Voxel::TransformMatrix((int)this); /*0x761037*/
  for ( i = 0; i < *(unsigned int *)&this->__pad_1B8[72]; ++i ) /*0x761046*/
  {
    Coords = CellClass::GetCoords(*(CellClass **)(*(unsigned int *)&this->__pad_1B8[60] + 4 * i), v6); /*0x761056*/
    WaveClass::DamageArea((WaveClass *)this, Coords); /*0x76105e*/
  }
  v4 = *(unsigned int *)&this->__pad_120[16] - 1; /*0x761074*/
  *(unsigned int *)&this->__pad_120[16] = v4; /*0x761075*/
  if ( v4 >= 0 ) /*0x76107b*/
    return ObjectClass::DetectCloaked((ObjectClass *)this); /*0x76108f*/
  else
    return (*((int (__thiscall **)(AnimClass *))this->AnimClass_field_0x0 + 62))(this); /*0x761081*/
}
// 0x4238D0
namespace gamemd {
int * AnimClass::CheckMirrorFlags(int a1)
{
  if ( (byte_89A190 & 1) == 0 ) /*0x4238db*/
  {
    byte_89A190 |= 1u; /*0x4238f9*/
    dword_89A160 = 2147450879; /*0x4238ff*/
    atexit(nullsub_89); /*0x423904*/
  }
  return &dword_89A160; /*0x423912*/
}
} // namespace gamemd

// 0x426300
namespace gamemd {
char AnimClass::ProcessAreaEffect(unsigned int * a1)
{
  char v1; // bl
  CellClass *v2; // esi
  char result; // al

  v1 = Input::OffsetToDirection((Input *)a1); /*0x426314*/
  v2 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a1); /*0x426321*/
  if ( Cell::GetGroundHeight(a1) + Map_MaxHeight > (int)a1->AnimClass_field_0x8 ) /*0x426335*/
  {
    result = ~(1 << v1) & IDA_LOBYTE(v2->occupationFlags); /*0x426370*/
    IDA_LOBYTE(v2->occupationFlags) = result; /*0x426372*/
    if ( (result & 0x1C) == 0 ) /*0x42637a*/
      v2->infantryOwnerIndex = -1; /*0x42637c*/
  }
  else
  {
    result = ~(1 << v1) & IDA_LOBYTE(v2->altOccupationFlags); /*0x426347*/
    IDA_LOBYTE(v2->altOccupationFlags) = result; /*0x426349*/
    if ( (result & 0x1C) == 0 ) /*0x426351*/
      v2->altInfantryOwnerIndex = -1; /*0x426353*/
  }
  return result; /*0x42635a*/
}
} // namespace gamemd

// 0x426530
namespace gamemd {
int AnimClass::MissionStubReturnZero()
{
  return 456; /*0x426535*/
}
} // namespace gamemd

// 0x426540
namespace gamemd {
int AnimClass::MissionStubReturnZero2(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x426546*/
    return -2147467261; /*0x426548*/
  *a2 = 237448643; /*0x426556*/
  a2[1] = 298949647; /*0x42655e*/
  a2[2] = -1610610249; /*0x426567*/
  a2[3] = unk_7E967C; /*0x426570*/
  return 0; /*0x42654d*/
}
} // namespace gamemd
