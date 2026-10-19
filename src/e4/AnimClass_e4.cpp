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
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Render_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"  // G42.33: g_RulesClass_Instance member access (TunnelSpeed/GUICheckboxSound/WeatherConBolts)
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/AudioFileClass_e4.hpp"
#include "e4/classes/PingPongBuffer_e4.hpp"
#include "e4/classes/StructTable_e4.hpp"
#include "e4/classes/AnimSystem_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/DDraw_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Input_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/BSurface_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"

// 0x4228E0
namespace gamemd {  // G42.18 ns repair
int AnimClass::Destruct(AnimClass * a2, void *a2_2)
{


  /* X11: ptr_0 install elided (implicit via AnimClass virtuals 0x4228eb) */
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E3330) */  /*0x4228f1*/
  /* X11: ptr_0 install elided (implicit via AnimClass virtuals 0x4228f8) */
  a2->q00C = (unsigned int)&off_7E3328; /*0x4228ff*/
  AbstractClass::AnnounceExpiredPointer(&a2->AnimClass_field_0x0, 1); /*0x422906*/
  if ( byte_A8E9A0 ) /*0x422914*/
  {
    unsigned char *AnimClass_field_0xCC; // ebp
    AnimClass_field_0xCC = a2->AnimClass_field_0xCC; /*0x42291a*/
    if ( AnimClass_field_0xCC ) /*0x422922*/
    {
      int v3 = 0; // ecx /*0x42292a*/
      if ( dword_A8E9B8 > 0 ) /*0x42292e*/
      {
        char *v4; // edx
        v4 = (char *)dword_A8E9AC; /*0x422930*/
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
        (*(void (**)(void *))(*(unsigned int *)AnimClass_field_0xCC + 380))(a2->AnimClass_field_0xCC); /*0x422955*/
        AnimClass_field_0xCC[132] = 0; /*0x42295b*/
      }
      a2->AnimClass_field_0xCC = 0; /*0x422961*/
    }
    Coord *AnimClass_field_0xC8; // eax
    AnimClass_field_0xC8 = a2->AnimClass_field_0xC8; /*0x422967*/
    if ( AnimClass_field_0xC8 && AnimClass_field_0xC8[2].__pad_C[201] ) /*0x422971*/
    {
      unsigned int v13[3]; // [esp+14h] [ebp-Ch] BYREF
      v13[0] = a2->Coord_9C; /*0x422985*/
      v13[1] = *(unsigned int *)a2->__pad_A0; /*0x422991*/
      v13[2] = a2->AnimClass_field_0xA4; /*0x422998*/
      CellClass *v6; // eax
      v6 = (gamemd::CellClass *)(Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v13)); /*0x4229a1*/
      v6->flags[0] &= ~0x20000u; /*0x4229b7*/
    }
    if ( (unsigned __int8)((ObjectClass *)a2)->Undeploy() ) /*0x4229bb*/
      RemoveTarget((int)a2); /*0x4229ca*/
  }
  AnimClass *v12; // [esp+10h] [ebp-10h] BYREF
  v12 = a2; /*0x4229df*/
  int v7; // eax
  v7 = (*(int (**)(int *, AnimClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x4229e3*/
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
  AnimClass *v8; // ecx
  v8 = (AnimClass *)a2->AnimClass_field_0xC8; /*0x422a18*/
  if ( v8 ) /*0x422a20*/
    AnimClass::FreeRenderBuffer(v8); /*0x422a22*/
  ((Mixer *)a2->AudioController_1A0)->ReleaseChannel(); /*0x422a2f*/
  (&a2->AudioController_1B4)->ReleaseChannel(); /*0x422a3c*/
  AudioFileClass::Release((AudioFileClass *)a2->AudioController_1A0); /*0x422a43*/
  AudioFileClass::Release(&a2->AudioController_1B4); /*0x422a4a*/
  a2->AnimClass_field_0xCC = 0; /*0x422a52*/
  a2->AnimClass_field_0xC8 = 0; /*0x422a59*/
  if ( AbstractClass::GetVtable3(&a2->AnimClass_field_0x4) == -2 ) /*0x422a67*/
  {
    v12 = a2; /*0x422a79*/
    int v9; // eax
    v9 = (*((int (**)(void **, AnimClass **))stru_A83D50.SuperClass_field_0xB0 + 4))( /*0x422a7d*/
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
    v12 = a2; /*0x422ad5*/
    int v10; // eax
    v10 = (*(int (**)(unsigned int *, AnimClass **))(dword_A8E9A8 + 16))(&dword_A8E9A8, &v12); /*0x422ad9*/
    if ( v10 != -1 && v10 < dword_A8E9B8 && v10 < --dword_A8E9B8 ) /*0x422af4*/
    {
      do /*0x422b0c*/
      {
        ++v10; /*0x422afc*/
        *((unsigned int *)dword_A8E9AC + v10 - 1) = *((unsigned int *)dword_A8E9AC + v10); /*0x422b00*/
      }
      while ( v10 < dword_A8E9B8 ); /*0x422b0c*/
    }
  }
  return ((ObjectClass *)a2)->Dtor(); /*0x422abd*/

}
}  // G42.18 ns repair
// 0x422CA0
namespace gamemd {
void AnimClass::Render(ConvertClass * a2, ConvertClass * aP5, void *a3, void *a4)
{

  IUnknown *AnimClass_field_0xB4; // edi
  CellStruct *AnimClass_field_0xC0; // ebx
  IUnknown *AnimClass_field_0xBC; // eax
  int v7; // edi
  int v8; // ecx
  __int16 v9; // bx
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // ebp
  int v14; // eax
  unsigned __int8 v15; // di
  int v16; // eax
  __int16 v17; // ax
  int v18; // edi
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
  int (**AnimClass_field_0x0)(AnimClass *); // eax
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
  int (**v66)(AnimClass *); // edx
  int v67; // ebp
  int v68; // eax
  int v69; // edi
  int v70; // eax
  int v71; // edi
  int (**v72)(AnimClass *); // edx
  int v73; // eax
  int v74; // edx
  int v75; // eax
  int v76; // edx
  int v77; // eax
  int v78; // ebp
  int v79; // eax
  int v80; // [esp-20h] [ebp-130h]
  int v81; // [esp-20h] [ebp-130h]
  int v82; // [esp-18h] [ebp-128h]
  int v83; // [esp-18h] [ebp-128h]
  unsigned __int8 v84; // [esp+13h] [ebp-FDh]
  unsigned __int8 v85; // [esp+13h] [ebp-FDh]
  char v86; // [esp+13h] [ebp-FDh]
  int v87; // [esp+14h] [ebp-FCh]
  int v88; // [esp+14h] [ebp-FCh]
  int v89; // [esp+14h] [ebp-FCh]
  IUnknown *AnimClass_field_0xAC; // [esp+14h] [ebp-FCh]
  float v91; // [esp+14h] [ebp-FCh]
  float v92; // [esp+14h] [ebp-FCh]
  unsigned int *v93; // [esp+14h] [ebp-FCh]
  int v94; // [esp+14h] [ebp-FCh]
  int v95; // [esp+14h] [ebp-FCh]
  unsigned __int8 v96; // [esp+1Ah] [ebp-F6h]
  unsigned __int8 v97; // [esp+1Ah] [ebp-F6h]
  unsigned __int8 v98; // [esp+1Bh] [ebp-F5h]
  unsigned __int8 v99; // [esp+1Bh] [ebp-F5h]
  unsigned __int8 v100[4]; // [esp+1Ch] [ebp-F4h] BYREF
  __int16 v101[2]; // [esp+20h] [ebp-F0h] BYREF
  int v102; // [esp+24h] [ebp-ECh]
  int v103; // [esp+28h] [ebp-E8h]
  unsigned int v104; // [esp+2Ch] [ebp-E4h]
  int v105[2]; // [esp+30h] [ebp-E0h] BYREF
  int v106; // [esp+38h] [ebp-D8h]
  int v107; // [esp+3Ch] [ebp-D4h]
  int v108; // [esp+40h] [ebp-D0h] BYREF
  int v109; // [esp+44h] [ebp-CCh]
  ColorStruct v110; // [esp+50h] [ebp-C0h] BYREF
  ColorStruct v111; // [esp+B0h] [ebp-60h] BYREF

  if ( byte_8A0DF0 /*0x422ccb*/
    && g_ZBufferDescriptor
    && (unsigned __int8)ObjectClass::StepCleanup((ObjectClass *)this, &g_INI_Key_Civilian.pad_16D[31]) )
  {
    AnimClass_field_0xB4 = this->AnimClass_field_0xB4; /*0x422cd8*/
    AnimClass_field_0xC0 = this->AnimClass_field_0xC0; /*0x422ce4*/
    AnimClass_field_0xBC = this->AnimClass_field_0xBC; /*0x422cea*/
    if ( AnimClass_field_0xB4 != (IUnknown *)-1 ) /*0x422cf3*/
    {
      if ( *(unsigned int *)&MEMORY[0xA8EB00].?[416] - (int)AnimClass_field_0xB4 >= (int)AnimClass_field_0xBC ) /*0x422cff*/
        AnimClass_field_0xBC = 0; /*0x422d05*/
      else
        AnimClass_field_0xBC = (IUnknown *)((char *)AnimClass_field_0xBC /*0x422d01*/
                                          - (*(unsigned int *)&MEMORY[0xA8EB00].?[416]
                                           - (unsigned int)AnimClass_field_0xB4));
    }
    v7 = (int)AnimClass_field_0xC0 /*0x422d12*/
       + (int)this->AnimClass_field_0xAC * (unsigned int)AnimClass_field_0xC0
       - (unsigned int)AnimClass_field_0xBC;
    v8 = (unsigned int)AnimClass_field_0xC0 * (*((int (**)(AnimClass *))this->AnimClass_field_0x0 + 123))(this); /*0x422d23*/
    v9 = v7 + 8; /*0x422d28*/
    v10 = *a2 + 2 * (v7 + 8); /*0x422d30*/
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
    v16 = (*((int (**)(AnimClass *))this->AnimClass_field_0x0 + 116))(this); /*0x422e2d*/
    v17 = LOWORD(g_ZBufferDescriptor->Stream_field_04) /*0x422e87*/
        + LOWORD(g_ZBufferDescriptor[1].Stream_field_10)
        - a2->__pad_004
        - LOWORD(DSurface_ViewBounds.field_4)
        + this->AnimClass_field_0x100
        + *&this->u32_CA.__pad_C[184]
        - ZCoordToScreenY(v16)
        - 2;
    *(float *)&v104 = (double)(unsigned __int16)(v17 + v9) * 0.000015259022; /*0x422eab*/
    *(float *)&v103 = (double)(unsigned __int16)(v17 - v9) * 0.000015259022; /*0x422eb9*/
    (&v110)->SetRGB(v100[0], v13, v15); /*0x422ebd*/
    (&v111)->SetRGB(v100[0], v13, v15); /*0x422ecc*/
    *(float *)&v88 = (float)v102; /*0x422ede*/
    v18 = v88; /*0x422ee6*/
    *(float *)v100 = (float)*(int *)v101; /*0x422eef*/
    v19 = *(unsigned int *)v100; /*0x422ef3*/
    Tactical::SetCellTransform(v110.__pad_0, 0, *(int *)v100, v88, v104, 0, 0); /*0x422efa*/
    *(float *)v100 = (float)v107; /*0x422f0f*/
    Tactical::SetCellTransform(v110.__pad_0, 1, v19, *(int *)v100, v103, 0, 1065353216); /*0x422f1f*/
    *(float *)&v89 = (float)v106; /*0x422f37*/
    Tactical::SetCellTransform(v110.__pad_0, 2, v89, *(int *)v100, v103, 1065353216, 1065353216); /*0x422f47*/
    Tactical::SetCellTransform(v111.__pad_0, 0, v19, v18, v104, 0, 0); /*0x422f5c*/
    Tactical::SetCellTransform(v111.__pad_0, 1, v89, *(int *)v100, v103, 1065353216, 1065353216); /*0x422f7f*/
    Tactical::SetCellTransform(v111.__pad_0, 2, v89, v18, v104, 1065353216, 0); /*0x422f97*/
    StructTable::Append(dword_8A0E10, &v110); /*0x422fa7*/
    StructTable::Append(dword_8A0E10, &v111); /*0x422fba*/
    return; /*0x422fc9*/
  }
  if ( *(unsigned int *)&g_MissionQueueFrame.waypoints[282] < (unsigned int)PingPongBuffer::GetWriteOffset() /*0x422fe6*/
    && *&this->u32_CA.__pad_C[72] > 1 )
  {
    return; /*0x422fe6*/
  }
  if ( this->SuperClass_19D ) /*0x422fec*/
    return; /*0x422fec*/
  AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x422ffa*/
  if ( *(unsigned int *)&AnimClass_field_0xC8[2].__pad_C[72] > MEMORY[0xA8EB00].ptr_0[30] /*0x42301e*/
    || this->q199 && AnimClass_field_0xC8[2].__pad_C[232] )
  {
    return; /*0x42301e*/
  }
  *(float *)&v103 = COERCE_FLOAT((*((int (**)(AnimClass *))this->AnimClass_field_0x0 + 27))(this)); /*0x423035*/
  if ( *(float *)&v103 == 0.0 ) /*0x423039*/
    return; /*0x423039*/
  v21 = this->AnimClass_field_0xC8; /*0x42303f*/
  AnimClass_field_0x190 = this->AnimClass_field_0x190; /*0x42304b*/
  AnimClass_field_0xAC = this->AnimClass_field_0xAC; /*0x423051*/
  v104 = (unsigned int)AnimClass_field_0xAC + *(unsigned int *)&v21[2].__pad_C[40]; /*0x42305d*/
  if ( this->q119 ) /*0x423061*/
  {
    if ( v21[2].__pad_C[220] ) /*0x42306b*/
      AnimClass_field_0x190 |= 6u; /*0x423075*/
    else
      AnimClass_field_0x190 |= 4u; /*0x42307a*/
  }
  if ( *(unsigned int *)&v21[2].__pad_C[76] <= MEMORY[0xA8EB00].ptr_0[30] ) /*0x42308b*/
  {
    if ( !v21[2].__pad_C[222] ) /*0x423095*/
    {
      v28 = *(unsigned int *)&v21[2].__pad_C[96]; /*0x423183*/
      if ( v28 <= 0 ) /*0x42318b*/
      {
        v29 = this->__pad_178; /*0x4231c1*/
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
        if ( this->__pad_178 >= 15 ) /*0x423194*/
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
    if ( this->__pad_178 >= 15 ) /*0x4230a2*/
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
    (AnimClass_field_0x190) |= ((((8u)) & 0xFF) << 8); /*0x423103*/
  *(unsigned int *)v101 = (*((int (**)(AnimClass *))this->AnimClass_field_0x0 + 114))(this); /*0x423110*/
  v25 = this->AnimClass_field_0xC8; /*0x423114*/
  v106 = 1000; /*0x42311a*/
  if ( v25[2].__pad_C[201] ) /*0x423122*/
  {
    v105[0] = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * *(unsigned int *)&MEMORY[0xA83D4C][134].__pad_90[4]) /*0x42314b*/
                        + 780);
    if ( v25[2].__pad_C[209] ) /*0x42314f*/
      goto LABEL_78; /*0x423157*/
    v26 = (unsigned int *)(*((int (**)(AnimClass *, int *))this->AnimClass_field_0x0 + 43))(this, &v108); /*0x423166*/
    v27 = *(__int16 *)Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v26)->CellClass_field_10C; /*0x423177*/
    goto LABEL_77; /*0x42317e*/
  }
  if ( this->q196 ) /*0x4231f3*/
  {
    v30 = (unsigned int *)(*((int (**)(AnimClass *, int *))this->AnimClass_field_0x0 + 43))(this, &v108); /*0x42320a*/
    LOWORD(v91) = *v30 / 256; /*0x423220*/
    HIWORD(v91) = v30[1] / 256; /*0x423238*/
    *(float *)v100 = v91; /*0x423241*/
    v31 = (int *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, (__int16 *)v100); /*0x423250*/
    if ( !v31[13] ) /*0x423252*/
      TacticalClass::SetView(v31, 0, 0x10000, 0, 1000, 1000, 1000); /*0x423273*/
    v32 = this->AnimClass_field_0xC8; /*0x42327b*/
    v105[0] = v31[13]; /*0x423281*/
    if ( !v32[2].__pad_C[209] ) /*0x423285*/
      v106 = *((__int16 *)v31 + 134); /*0x42329a*/
  }
  else if ( this->AnimClass_field_0xD4 ) /*0x4232a3*/
  {
    v105[0] = (int)this->AnimClass_field_0xD4; /*0x4232ad*/
    if ( !v25[2].__pad_C[209] ) /*0x4232b1*/
      v106 = this->__pad_0FC; /*0x4232c5*/
  }
  else
  {
    v105[0] = *(unsigned int *)&DataGlobal_87F6C0; /*0x4232d4*/
    if ( v25[2].__pad_C[213] ) /*0x4232d8*/
      v105[0] = *(unsigned int *)(**(unsigned int **)&stru_B054D0.m_1[3] + 780); /*0x4232f0*/
    if ( !v25[2].__pad_C[209] ) /*0x4232f4*/
    {
      v33 = (unsigned int *)(*((int (**)(AnimClass *, int *))this->AnimClass_field_0x0 + 43))(this, &v108); /*0x423307*/
      LOWORD(v92) = *v33 / 256; /*0x42331d*/
      HIWORD(v92) = v33[1] / 256; /*0x423336*/
      *(float *)v100 = v92; /*0x423343*/
      v27 = *((__int16 *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, (__int16 *)v100) + 133); /*0x42334d*/
LABEL_77:
      v106 = v27; /*0x423354*/
    }
  }
LABEL_78:
  if ( this->__pad_194 ) /*0x423358*/
  {
    v34 = ZCoordToScreenY(*(int *)v101); /*0x423373*/
    v35 = *a2; /*0x423384*/
    v36 = *&this->u32_CA.__pad_C[184] + v34 + a2[1]; /*0x42338b*/
    AnimClass_field_0x0 = (int (**)(AnimClass *))this->AnimClass_field_0x0; /*0x42339a*/
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
      a3,
      9729,
      0,
      *&this->u32_CA.__pad_C[184] - v39,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
  v40 = this->__pad_118; /*0x4233ee*/
  v41 = 0.0; /*0x4233f4*/
  *(float *)v100 = 0.0; /*0x4233f8*/
  if ( !v40 ) /*0x4233fc*/
    goto LABEL_99; /*0x4233fc*/
  v42 = (unsigned int *)(*((int (**)(AnimClass *, int *))this->AnimClass_field_0x0 + 18))(this, &v108); /*0x42340b*/
  v43 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v42); /*0x423414*/
  v44 = Cell::IsBridge((Cell *)v43); /*0x42341b*/
  v93 = v44; /*0x423422*/
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
        (v50) = ((v50) & ~0xFF) | ((v96) & 0xFF); /*0x4234ce*/
        goto LABEL_89; /*0x4234ce*/
      }
      LOWORD(v41) = v98; /*0x423486*/
      v50 = v96; /*0x42348c*/
      (v49) = ((v49) & ~0xFFFF) | ((v84) & 0xFFFF); /*0x423493*/
      (v48) = ((v48) & ~0xFFFF) | ((v96) & 0xFFFF); /*0x42349c*/
      LODWORD(v41) = v49 | (32 * (v48 | (LODWORD(v41) << 6))); /*0x4234a3*/
    }
    else
    {
      v50 = v96; /*0x4234a7*/
    }
    (v49) = ((v49) & ~0xFFFF) | (((unsigned __int8)v50 >> 1) & 0xFFFF); /*0x4234b2*/
    (v48) = ((v48) & ~0xFFFF) | ((v98) & 0xFFFF); /*0x4234b4*/
    v48 *= 32; /*0x4234ba*/
    v51 = v48 | v49; /*0x4234bd*/
    (v48) = ((v48) & ~0xFFFF) | ((v84) & 0xFFFF); /*0x4234bf*/
    v49 = v48 | (v51 << 6); /*0x4234c8*/
    LODWORD(v41) |= v49; /*0x4234ca*/
LABEL_89:
    (v49) = ((v49) & ~0xFFFF) | ((v98) & 0xFFFF); /*0x4234d2*/
    (v48) = ((v48) & ~0xFFFF) | ((v84) & 0xFFFF); /*0x4234d8*/
    (v50) = ((v50) & ~0xFFFF) | (((unsigned __int8)v50 >> 1) & 0xFFFF); /*0x4234e0*/
    LODWORD(v41) |= v48 | (32 * ((32 * v49) | v50)); /*0x4234ee*/
    *(float *)v100 = v41; /*0x4234f0*/
  }
  if ( !v93->vt_slot_352() || v93[113] != 1 ) /*0x423513*/
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
      (v57) = ((v57) & ~0xFF) | ((v85) & 0xFF); /*0x4235ad*/
      goto LABEL_98; /*0x4235ad*/
    }
    (v55) = ((v55) & ~0xFFFF) | ((v99) & 0xFFFF); /*0x423563*/
    v57 = v85; /*0x423569*/
    (v56) = ((v56) & ~0xFFFF) | ((v85) & 0xFFFF); /*0x423573*/
    v58 = v56 | (v55 << 6); /*0x423575*/
    (v56) = ((v56) & ~0xFFFF) | ((v97) & 0xFFFF); /*0x423577*/
    v55 = v56 | (32 * v58); /*0x423580*/
    LODWORD(v41) |= v55; /*0x423582*/
  }
  else
  {
    v57 = v85; /*0x423586*/
  }
  (v56) = ((v56) & ~0xFFFF) | (((unsigned __int8)v57 >> 1) & 0xFFFF); /*0x423591*/
  (v55) = ((v55) & ~0xFFFF) | ((v99) & 0xFFFF); /*0x423593*/
  v55 *= 32; /*0x423599*/
  v59 = v55 | v56; /*0x42359c*/
  (v55) = ((v55) & ~0xFFFF) | ((v97) & 0xFFFF); /*0x42359e*/
  v56 = v55 | (v59 << 6); /*0x4235a7*/
  LODWORD(v41) |= v56; /*0x4235a9*/
LABEL_98:
  (v56) = ((v56) & ~0xFFFF) | ((v99) & 0xFFFF); /*0x4235b1*/
  (v55) = ((v55) & ~0xFFFF) | ((v97) & 0xFFFF); /*0x4235b7*/
  (v57) = ((v57) & ~0xFFFF) | (((unsigned __int8)v57 >> 1) & 0xFFFF); /*0x4235bf*/
  LODWORD(v41) |= v55 | (32 * ((32 * v56) | v57)); /*0x4235cd*/
  *(float *)v100 = v41; /*0x4235cf*/
LABEL_99:
  v60 = (unsigned int *)(*((int (**)(AnimClass *, int *))this->AnimClass_field_0x0 + 18))(this, &v108); /*0x4235d3*/
  (v94) = ((v94) & ~0xFFFF) | ((*v60 / 256) & 0xFFFF); /*0x4235ef*/
  HIWORD(v94) = v60[1] / 256; /*0x423608*/
  *(unsigned int *)v101 = v94; /*0x423615*/
  v61 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v101); /*0x42361a*/
  if ( (unsigned __int8)CellClass::QuickPassable(v61) ) /*0x423621*/
  {
    v41 = 0.0; /*0x42362a*/
    *(float *)v100 = 0.0; /*0x42362c*/
  }
  v62 = this->AnimClass_field_0xC8; /*0x423630*/
  if ( v62[2].__pad_C[207] ) /*0x423636*/
  {
    FoundationSize = Building::GetFoundationSize(&v108, 0); /*0x42364f*/
    v64 = *a2; /*0x423657*/
    v65 = a2[1]; /*0x423659*/
    *(unsigned int *)v101 = FoundationSize[3]; /*0x42365c*/
    v66 = (int (**)(AnimClass *))this->AnimClass_field_0x0; /*0x423663*/
    v108 = v64; /*0x423667*/
    v105[0] = v64; /*0x42366d*/
    v95 = *(unsigned int *)v101 / 2; /*0x423673*/
    v67 = v65 - *(unsigned int *)v101 / 2; /*0x423677*/
    v86 = 0; /*0x423679*/
    v68 = v66[116](this); /*0x42367e*/
    v69 = this->AnimClass_field_0x100 /*0x4236a1*/
        + *&this->u32_CA.__pad_C[184]
        - ZCoordToScreenY(v68)
        - 50;
    (AnimClass_field_0x190) |= ((((0x20u)) & 0xFF) << 8); /*0x4236a4*/
    do /*0x423719*/
    {
      v70 = v67 + *&this->u32_CA.__pad_C[184]; /*0x4236bb*/
      v105[0] = v108; /*0x4236bd*/
      v105[1] = v70; /*0x4236c1*/
      DrawToSurfaceSHP( /*0x4236f7*/
        (int)g_DSurface_Hidden_2,
        *(int *)&DataGlobal_87F6C0,
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
    v82 = v106; /*0x423756*/
    v72 = (int (**)(AnimClass *))this->AnimClass_field_0x0; /*0x42375e*/
    v102 = v109 + v71; /*0x423766*/
    v73 = v72[116](this); /*0x42376a*/
    (AnimClass_field_0x190) |= ((((0x20u)) & 0xFF) << 8); /*0x42379b*/
    v80 = this->AnimClass_field_0x100 /*0x42379e*/
        + *&this->u32_CA.__pad_C[184]
        - ZCoordToScreenY(v73)
        - 3;
    DrawToSurfaceSHP( /*0x4237a9*/
      (int)g_DSurface_Hidden_2,
      v105[0],
      v103,
      v104,
      (int *)v101,
      a3,
      AnimClass_field_0x190,
      0,
      v80,
      0,
      v82,
      SLODWORD(v41),
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
    v83 = v106; /*0x4237d2*/
    v75 = (*((int (**)(AnimClass *))this->AnimClass_field_0x0 + 116))(this); /*0x4237d7*/
    v76 = this->AnimClass_field_0x100 + *&this->u32_CA.__pad_C[184] - ZCoordToScreenY(v75); /*0x4237ff*/
    v77 = AnimClass_field_0x190; /*0x423801*/
    (v77) = ((v77) & ~(0xFF << 8)) | ((((((AnimClass_field_0x190) >> 8) & 0xFF) | 0x20) & 0xFF) << 8); /*0x423806*/
    DrawToSurfaceSHP( /*0x423827*/
      (int)g_DSurface_Hidden_2,
      v105[0],
      v103,
      v104,
      (int *)v101,
      a3,
      v77,
      0,
      v76 - 2,
      2,
      v83,
      SLODWORD(v41),
      0,
      0,
      0,
      0);
    if ( this->u32_CA.__pad_C[230] ) /*0x423832*/
    {
      v78 = *(__int16 *)(v103 + 6); /*0x423845*/
      v79 = (*((int (**)(AnimClass *))this->AnimClass_field_0x0 + 116))(this); /*0x423857*/
      v81 = -2 - ZCoordToScreenY(v79); /*0x423875*/
      DrawToSurfaceSHP( /*0x42389e*/
        (int)g_DSurface_Hidden_2,
        v105[0],
        v103,
        v104 + v78 / 2,
        a2,
        a3,
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
//L-fix     if ( (*((unsigned char *)&(v21[72].Z))) ) /*0x42306b*/
//L-fix       v22 |= 6u; /*0x423075*/
//L-fix     else
//L-fix       v22 |= 4u; /*0x42307a*/
//L-fix   }
//G42-DUP   if ( v21[60].Z <= *(int *)&HouseClass_Player.__pad_5568[22724] ) /*0x42308b*/
//G42-DUP   {
//G42-DUP     if ( !(((unsigned char *)&(v21[72].Z))[2]) ) /*0x423095*/
//G42-DUP     {
//G42-DUP       Y = v21[62].Y; /*0x423183*/
//G42-DUP       if ( Y <= 0 ) /*0x42318b*/
//G42-DUP       {
v29 = this->__pad_178[0];
//G42-DUP         if ( !v29 ) /*0x4231c9*/
//G42-DUP           goto LABEL_47; /*0x4231c9*/
//G42-DUP         if ( v29 > 15 ) /*0x4231d1*/
//G42-DUP           return; /*0x4231d1*/
//G42-DUP         if ( v29 > 10 ) /*0x4231d9*/
//G42-DUP         {
//G42-DUP           v22 |= 4u; /*0x4231db*/
//G42-DUP           goto LABEL_47; /*0x4231de*/
//G42-DUP         }
//G42-DUP         if ( v29 > 5 ) /*0x4231e5*/
//G42-DUP         {
//G42-DUP           v22 |= 4u; /*0x4231eb*/
//G42-DUP           goto LABEL_47; /*0x4231ee*/
//G42-DUP         }
//G42-DUP       }
//G42-DUP       else
//G42-DUP       {
if ( this->__pad_178[0] >= 15 )
  //G42-DUP           return; /*0x423194*/
//G42-DUP         if ( Y != 25 ) /*0x42319d*/
//G42-DUP         {
//G42-DUP           if ( Y == 50 ) /*0x4231a6*/
//G42-DUP           {
//G42-DUP             v22 |= 4u; /*0x4231a8*/
//G42-DUP           }
//G42-DUP           else if ( Y == 75 ) /*0x4231b3*/
//G42-DUP           {
//G42-DUP             v22 |= 6u; /*0x4231b9*/
//G42-DUP           }
//G42-DUP           goto LABEL_47; /*0x4231ab*/
//G42-DUP         }
//G42-DUP       }
//G42-DUP LABEL_46:
//G42-DUP       v22 |= 2u; /*0x4230fb*/
//G42-DUP       goto LABEL_47; /*0x4230fb*/
//G42-DUP     }
if ( this->__pad_178[0] >= 15 )
  //G42-DUP       return; /*0x4230a2*/
//G42-DUP     v23 = (double)(int)v90; /*0x4230a8*/
//G42-DUP     Z = (double)v21[58].Z; /*0x4230ac*/
//G42-DUP     if ( v23 > Z * 0.6 ) /*0x4230c3*/
//G42-DUP     {
//G42-DUP       v22 |= 6u; /*0x4230c9*/
//G42-DUP       goto LABEL_47; /*0x4230cc*/
//G42-DUP     }
//G42-DUP     if ( v23 > Z * 0.4 ) /*0x4230df*/
//G42-DUP     {
//G42-DUP       v22 |= 4u; /*0x4230e5*/
//G42-DUP       goto LABEL_47; /*0x4230e8*/
//G42-DUP     }
//G42-DUP     if ( v23 > Z * 0.2 ) /*0x4230f9*/
//G42-DUP       goto LABEL_46; /*0x4230f9*/
//G42-DUP   }
//G42-DUP LABEL_47:
//G42-DUP   if ( (v22 & 1) == 0 ) /*0x423101*/
//G42-DUP     (((v22) >> 8) & 0xFF) |= 8u; /*0x423103*/
//G42-DUP   *(unsigned int *)v101 = (*((int (**)(AnimClass *))this->AnimClass_field_0x0 + 114))(this);;
v25 = this->AnimClass_field_0xC8;
//G42-DUP   aP10 = (ConvertClass *)1000; /*0x42311a*/
//G42-DUP   if ( (((unsigned char *)&(v25[71].X))[1]) ) /*0x423122*/
//G42-DUP   {
//G42-DUP     v105[0] = *(unsigned int *)(*(unsigned int *)(stru_B05488.field_4C + 4 * *(unsigned int *)(HouseClass_Player.field_0 + 90196)) + 780); /*0x42314b*/
//G42-DUP     if ( (((unsigned char *)&(v25[71].Z))[1]) ) /*0x42314f*/
//G42-DUP       goto LABEL_78; /*0x423157*/
//G42-DUP     v26 = (unsigned int *)(*((int (**)(AnimClass *, int *))this->AnimClass_field_0x0 + 43))(this, &v108);;
//G42-DUP     v27 = (ConvertClass *)*((int16_t *)((Coord *)(&stru_87C374.__pad_14B0[8132]))->To_Cell(v26) + 134); /*0x423177*/
//G42-DUP     goto LABEL_77; /*0x42317e*/
//G42-DUP   }
if ( this->__pad_194[2] )
  //G42-DUP   {
//G42-DUP     v30 = (unsigned int *)(*((int (**)(AnimClass *, int *))this->AnimClass_field_0x0 + 43))(this, &v108);;
//G42-DUP     (*((unsigned short *)&(v91))) = *v30 / 256; /*0x423220*/
//G42-DUP     (*(((unsigned short *)&(v91)) + 1)) = v30[1] / 256; /*0x423238*/
//G42-DUP     aP2 = v91; /*0x423241*/
//G42-DUP     v31 = (int16_t *)((CellCoord *)(&stru_87C374.__pad_14B0[8132]))->To_CellObj((int16_t *)&aP2); /*0x423250*/
//G42-DUP     if ( !*((unsigned int *)v31 + 13) ) /*0x423252*/
//G42-DUP       ((TacticalClass *)((int)v31))->SetView(0, 0x10000, 0, 1000, 1000, 1000); /*0x423273*/
v32 = this->AnimClass_field_0xC8;
//G42-DUP     v105[0] = *((unsigned int *)v31 + 13); /*0x423281*/
//G42-DUP     if ( !(((unsigned char *)&(v32[71].Z))[1]) ) /*0x423285*/
//G42-DUP       aP10 = (ConvertClass *)v31[134]; /*0x42329a*/
//G42-DUP   }
else if ( this->AnimClass_field_0xD4 )
  //G42-DUP   {
v105[0] = (int)this->AnimClass_field_0xD4;
//G42-DUP     if ( !(((unsigned char *)&(v25[71].Z))[1]) ) /*0x4232b1*/
v106 = this->AnimClass_field_0xFC[0];
//G42-DUP   }
//G42-DUP   else
//G42-DUP   {
//G42-DUP     v105[0] = *(unsigned int *)&stru_87C374.__pad_14B0[7836]; /*0x4232d4*/
//G42-DUP     if ( (((unsigned char *)&(v25[72].X))[1]) ) /*0x4232d8*/
//G42-DUP       v105[0] = *(unsigned int *)(*(unsigned int *)stru_B05488.field_4C + 780); /*0x4232f0*/
//G42-DUP     if ( !(((unsigned char *)&(v25[71].Z))[1]) ) /*0x4232f4*/
//G42-DUP     {
//G42-DUP       v33 = (unsigned int *)(*((int (**)(AnimClass *, int *))this->AnimClass_field_0x0 + 43))(this, &v108);;
//G42-DUP       (*((unsigned short *)&(v92))) = *v33 / 256; /*0x42331d*/
//G42-DUP       (*(((unsigned short *)&(v92)) + 1)) = v33[1] / 256; /*0x423336*/
//G42-DUP       aP2 = v92; /*0x423343*/
//G42-DUP       v27 = (ConvertClass *)*((int16_t *)((CellCoord *)(&stru_87C374.__pad_14B0[8132]))->To_CellObj((int16_t *)&aP2) + 133); /*0x42334d*/
//G42-DUP LABEL_77:
//G42-DUP       aP10 = v27; /*0x423354*/
//G42-DUP     }
//G42-DUP   }
//G42-DUP LABEL_78:
if ( this->__pad_194[0] )
  //G42-DUP   {
//G42-DUP     v34 = ZCoordToScreenY(aP0); /*0x423373*/
//G42-DUP     v35 = *(IUnknown **)a2->q000; /*0x423384*/
v36 = *(unsigned int *)&this->AnimClass_field_0xC8[2].__pad_C[184] + v34 + a2[1];
//G42-DUP     v37 = *this; /*0x42339a*/
//G42-DUP     v102 = v36; /*0x42339c*/
//G42-DUP     aP0 = v35; /*0x4233a2*/
//G42-DUP     v38 = (IUnknown *)this->CheckDamageFlags(); /*0x4233a6*/
//G42-DUP     v39 = ZCoordToScreenY(v38); /*0x4233ae*/
//G42-DUP     DrawToSurfaceSHP( /*0x4233e9*/
//G42-DUP       *(int *)&stru_87C374.q579C[22532],
//G42-DUP       v105[0],
//G42-DUP       v103,
//G42-DUP       (unsigned int)aP4,
//G42-DUP       (ConvertClass *)&aP0,
//G42-DUP,
//G42-DUP       (ConvertClass *)0x2601,
//G42-DUP       0,
//G42-DUP       *(unsigned int *)(this->q0C8 + 836) - v39,
//G42-DUP       0,
//G42-DUP       (ConvertClass *)0x3E8,
//G42-DUP       0,
//G42-DUP       0,
//G42-DUP       0,
//G42-DUP       0,
//G42-DUP       0);
//G42-DUP   }
v40 = this->__pad_118[0];
//G42-DUP   *(float *)&v41 = 0.0; /*0x4233f4*/
//G42-DUP   *(float *)&aP2 = 0.0; /*0x4233f8*/
//G42-DUP   if ( !v40 ) /*0x4233fc*/
//G42-DUP     goto LABEL_99; /*0x4233fc*/
//G42-DUP   v42 = (unsigned int *)(*((int (**)(AnimClass *, int *))this->AnimClass_field_0x0 + 18))(this, &v108);;
//G42-DUP   v43 = ((Coord *)(&stru_87C374.__pad_14B0[8132]))->To_Cell(v42); /*0x423414*/
//G42-DUP   v44 = (CoordStruct *)((Cell *)(v43))->IsBridge(); /*0x42341b*/
//G42-DUP   v93 = v44; /*0x423422*/
//G42-DUP   if ( !v44 ) /*0x423426*/
//G42-DUP     goto LABEL_99; /*0x423426*/
//G42-DUP   if ( v44[55].X ) /*0x42342e*/
//G42-DUP   {
//G42-DUP     v45 = *(unsigned int *)(*(unsigned int *)&stru_87C374.q579C[22224] + 6308); /*0x423442*/
//G42-DUP     v46 = *(unsigned int *)&stru_87C374.q579C[22224] + 2 * v45; /*0x423448*/
//G42-DUP     aP0 = (IUnknown *)(v45 + v46); /*0x423454*/
//G42-DUP     v98 = *(unsigned char *)(v45 + v46 + 6260); /*0x42345e*/
//G42-DUP     v96 = *(unsigned char *)(v45 + v46 + 4174 + 2087); /*0x42346d*/
//G42-DUP     v84 = *(unsigned char *)(v45 + v46 + 6262); /*0x423477*/
//G42-DUP     v47 = DDraw_GetStatus() - 1; /*0x423480*/
//G42-DUP     if ( v47 ) /*0x423481*/
//G42-DUP     {
//G42-DUP       v50 = v47 - 1; /*0x423483*/
//G42-DUP       if ( v50 ) /*0x423484*/
//G42-DUP       {
//G42-DUP         (*((unsigned char *)&(v50))) = v96; /*0x4234ce*/
//G42-DUP         goto LABEL_89; /*0x4234ce*/
//G42-DUP       }
//G42-DUP       (*((unsigned short *)&(v41))) = v98; /*0x423486*/
//G42-DUP       v50 = v96; /*0x42348c*/
//G42-DUP       (*((unsigned short *)&(v49))) = v84; /*0x423493*/
//G42-DUP       (*((unsigned short *)&(v48))) = v96; /*0x42349c*/
//G42-DUP       v41 = v49 | (32 * (v48 | (v41 << 6))); /*0x4234a3*/
//G42-DUP     }
//G42-DUP     else
//G42-DUP     {
//G42-DUP       v50 = v96; /*0x4234a7*/
//G42-DUP     }
//G42-DUP     (*((unsigned short *)&(v49))) = (uint8_t)v50 >> 1; /*0x4234b2*/
//G42-DUP     (*((unsigned short *)&(v48))) = v98; /*0x4234b4*/
//G42-DUP     v48 *= 32; /*0x4234ba*/
//G42-DUP     v51 = v48 | v49; /*0x4234bd*/
//G42-DUP     (*((unsigned short *)&(v48))) = v84; /*0x4234bf*/
//G42-DUP     v49 = v48 | (v51 << 6); /*0x4234c8*/
//G42-DUP     v41 |= v49; /*0x4234ca*/
//G42-DUP LABEL_89:
//G42-DUP     (*((unsigned short *)&(v49))) = v98; /*0x4234d2*/
//G42-DUP     (*((unsigned short *)&(v48))) = v84; /*0x4234d8*/
//G42-DUP     (*((unsigned short *)&(v50))) = (uint8_t)v50 >> 1; /*0x4234e0*/
//G42-DUP     v41 |= v48 | (32 * ((32 * v49) | v50)); /*0x4234ee*/
//G42-DUP     aP2 = (CoordStruct *)v41; /*0x4234f0*/
//G42-DUP   }
//G42-DUP   if ( !(*(uint8_t (**)(CoordStruct *))(v93->X + 352))(v93) || v93[37].Z != 1 ) /*0x423513*/
//G42-DUP     goto LABEL_99; /*0x423513*/
//G42-DUP   v52 = *(unsigned int *)(*(unsigned int *)&stru_87C374.q579C[22224] + 6320); /*0x42351f*/
//G42-DUP   v53 = *(unsigned int *)&stru_87C374.q579C[22224] + 2 * v52; /*0x423525*/
//G42-DUP   aP0 = (IUnknown *)(v52 + v53); /*0x423531*/
//G42-DUP   v99 = *(unsigned char *)(v52 + v53 + 6260); /*0x42353b*/
//G42-DUP   v85 = *(unsigned char *)(v52 + v53 + 4174 + 2087); /*0x42354a*/
//G42-DUP   v97 = *(unsigned char *)(v52 + v53 + 6262); /*0x423554*/
//G42-DUP   v54 = DDraw_GetStatus() - 1; /*0x42355d*/
//G42-DUP   if ( v54 ) /*0x42355e*/
//G42-DUP   {
//G42-DUP     v57 = v54 - 1; /*0x423560*/
//G42-DUP     if ( v57 ) /*0x423561*/
//G42-DUP     {
//G42-DUP       (*((unsigned char *)&(v57))) = v85; /*0x4235ad*/
//G42-DUP       goto LABEL_98; /*0x4235ad*/
//G42-DUP     }
//G42-DUP     (*((unsigned short *)&(v55))) = v99; /*0x423563*/
//G42-DUP     v57 = v85; /*0x423569*/
//G42-DUP     (*((unsigned short *)&(v56))) = v85; /*0x423573*/
//G42-DUP     v58 = v56 | (v55 << 6); /*0x423575*/
//G42-DUP     (*((unsigned short *)&(v56))) = v97; /*0x423577*/
//G42-DUP     v55 = v56 | (32 * v58); /*0x423580*/
//G42-DUP     v41 |= v55; /*0x423582*/
//G42-DUP   }
//G42-DUP   else
//G42-DUP   {
//G42-DUP     v57 = v85; /*0x423586*/
//G42-DUP   }
//G42-DUP   (*((unsigned short *)&(v56))) = (uint8_t)v57 >> 1; /*0x423591*/
//G42-DUP   (*((unsigned short *)&(v55))) = v99; /*0x423593*/
//G42-DUP   v55 *= 32; /*0x423599*/
//G42-DUP   v59 = v55 | v56; /*0x42359c*/
//G42-DUP   (*((unsigned short *)&(v55))) = v97; /*0x42359e*/
//G42-DUP   v56 = v55 | (v59 << 6); /*0x4235a7*/
//G42-DUP   v41 |= v56; /*0x4235a9*/
//G42-DUP LABEL_98:
//G42-DUP   (*((unsigned short *)&(v56))) = v99; /*0x4235b1*/
//G42-DUP   (*((unsigned short *)&(v55))) = v97; /*0x4235b7*/
//G42-DUP   (*((unsigned short *)&(v57))) = (uint8_t)v57 >> 1; /*0x4235bf*/
//G42-DUP   v41 |= v55 | (32 * ((32 * v56) | v57)); /*0x4235cd*/
//G42-DUP   aP2 = (CoordStruct *)v41; /*0x4235cf*/
//G42-DUP LABEL_99:
//G42-DUP   LABEL_99: v60 = (unsigned int *)(*((int (**)(AnimClass *, int *))this->AnimClass_field_0x0 + 18))(this, &v108);;
//G42-DUP   (*((unsigned short *)&(v94))) = *v60 / 256; /*0x4235ef*/
//G42-DUP   (*(((unsigned short *)&(v94)) + 1)) = v60[1] / 256; /*0x423608*/
//G42-DUP   aP0 = v94; /*0x423615*/
//G42-DUP   v61 = ((CellCoord *)(&stru_87C374.__pad_14B0[8132]))->To_CellObj((int16_t *)&aP0); /*0x42361a*/
v62 = this->AnimClass_field_0xC8;
//G42-DUP   if ( (*(((unsigned char *)&(v62[71].Y)) + (sizeof(v62[71].Y) - 1))) ) /*0x423636*/
//G42-DUP   {
//G42-DUP     FoundationSize = Building::GetFoundationSize(&v108, 0); /*0x42364f*/
//G42-DUP     v64 = *(unsigned int *)a2->q000; /*0x423657*/
//G42-DUP     v65 = *(unsigned int *)&a2->field_2[2]; /*0x423659*/
//G42-DUP     aP0 = (IUnknown *)FoundationSize[3]; /*0x42365c*/
//G42-DUP     v66 = *this; /*0x423663*/
//G42-DUP     v108 = v64; /*0x423667*/
//G42-DUP     v105[0] = v64; /*0x42366d*/
//G42-DUP     v95 = (int)aP0 / 2; /*0x423673*/
//G42-DUP     v67 = v65 - (int)aP0 / 2; /*0x423677*/
//G42-DUP     v86 = 0; /*0x423679*/
//G42-DUP     v68 = (IUnknown *)this->CheckDamageFlags(); /*0x42367e*/
v69 = this->AnimClass_field_0x100
//G42-DUP     (((v22) >> 8) & 0xFF) |= 0x20u; /*0x4236a4*/
//G42-DUP     do /*0x423719*/
//G42-DUP     {
v70 = v67 + *(unsigned int *)&this->AnimClass_field_0xC8[2].__pad_C[184];
//G42-DUP       v105[0] = v108; /*0x4236bd*/
//G42-DUP       v105[1] = v70; /*0x4236c1*/
//G42-DUP       DrawToSurfaceSHP( /*0x4236f7*/
//G42-DUP         *(int *)&stru_87C374.q579C[22532],
//G42-DUP         *(int *)&stru_87C374.__pad_14B0[7836],
//G42-DUP         v103,
//G42-DUP         (unsigned int)aP4,
//G42-DUP         (ConvertClass *)v105,
//G42-DUP         (ConvertClass *)&stru_87C374.q579C[21648],
//G42-DUP         (ConvertClass *)v22,
//G42-DUP         0,
//G42-DUP         (int)v69,
//G42-DUP         2,
//G42-DUP,
//G42-DUP         (ConvertClass *)aP2,
//G42-DUP         0,
//G42-DUP         0,
//G42-DUP         0,
//G42-DUP         0);
//G42-DUP       if ( v67 < 0 ) /*0x4236fe*/
//G42-DUP         v86 = 1; /*0x423700*/
//G42-DUP       v67 -= (int)aP0; /*0x42370d*/
//G42-DUP       v69 = (ConvertClass *)((char *)v69 - (int)aP0 - v95); /*0x423715*/
//G42-DUP     }
//G42-DUP     while ( !v86 ); /*0x423719*/
//G42-DUP   }
//G42-DUP   else if ( (((unsigned char *)&(v62[72].Z))[1]) ) /*0x423728*/
//G42-DUP   {
//G42-DUP     v109 = v62[69].Z; /*0x42373c*/
//G42-DUP     v71 = *(unsigned int *)&a2->field_2[2]; /*0x423742*/
//G42-DUP     aP0 = *(IUnknown **)a2->q000; /*0x42374c*/
//G42-DUP     v82 = (BuildingTypeClass *)aP10; /*0x423756*/
//G42-DUP     v72 = *this; /*0x42375e*/
//G42-DUP     v102 = (ConvertClass *)(v109 + v71); /*0x423766*/
//G42-DUP     v73 = (IUnknown *)this->CheckDamageFlags(); /*0x42376a*/
//G42-DUP     (((v22) >> 8) & 0xFF) |= 0x20u; /*0x42379b*/
v80 = this->AnimClass_field_0x100
//G42-DUP     DrawToSurfaceSHP( /*0x4237a9*/
//G42-DUP       *(int *)&stru_87C374.q579C[22532],
//G42-DUP       v105[0],
//G42-DUP       v103,
//G42-DUP       (unsigned int)aP4,
//G42-DUP       (ConvertClass *)&aP0,
//G42-DUP,
//G42-DUP       (ConvertClass *)v22,
//G42-DUP       0,
//G42-DUP       v80,
//G42-DUP       0,
//G42-DUP       (ConvertClass *)v82,
//G42-DUP       (ConvertClass *)v41,
//G42-DUP       0,
//G42-DUP       0,
//G42-DUP       0,
//G42-DUP       0);
//G42-DUP   }
//G42-DUP   else
//G42-DUP   {
//G42-DUP     v74 = *(IUnknown **)a2->q000; /*0x4237b9*/
//G42-DUP     v102 = (ConvertClass *)(v62[69].Z + *(unsigned int *)&a2->field_2[2]); /*0x4237bb*/
//G42-DUP     aP0 = v74; /*0x4237cb*/
//G42-DUP     v83 = (BuildingTypeClass *)aP10; /*0x4237d2*/
//G42-DUP     v75 = (*((int (**)(AnimClass *))this->AnimClass_field_0x0 + 116))(this);;
v76 = this->AnimClass_field_0x100 + *(unsigned int *)&this->AnimClass_field_0xC8[2].__pad_C[184] - ZCoordToScreenY(v75);
//G42-DUP     v77 = (ConvertClass *)v22; /*0x423801*/
//G42-DUP     (((v77) >> 8) & 0xFF) = (((v22) >> 8) & 0xFF) | 0x20; /*0x423806*/
//G42-DUP     DrawToSurfaceSHP( /*0x423827*/
//G42-DUP       *(int *)&stru_87C374.q579C[22532],
//G42-DUP       v105[0],
//G42-DUP       v103,
//G42-DUP       (unsigned int)aP4,
//G42-DUP       (ConvertClass *)&aP0,
//G42-DUP,
//G42-DUP       v77,
//G42-DUP       0,
//G42-DUP       v76 - 2,
//G42-DUP       2,
//G42-DUP       (ConvertClass *)v83,
//G42-DUP       (ConvertClass *)v41,
//G42-DUP       0,
//G42-DUP       0,
//G42-DUP       0,
//G42-DUP       0);
if ( this->AnimClass_field_0xC8[2].__pad_C[230] )
  //G42-DUP     {
//G42-DUP       v78 = *(int16_t *)v103->__pad_6; /*0x423845*/
//G42-DUP       v79 = (*((int (**)(AnimClass *))this->AnimClass_field_0x0 + 116))(this);;
//G42-DUP       v81 = -2 - ZCoordToScreenY(v79); /*0x423875*/
//G42-DUP       DrawToSurfaceSHP( /*0x42389e*/
//G42-DUP         *(int *)&stru_87C374.q579C[22532],
//G42-DUP         v105[0],
//G42-DUP         v103,
//G42-DUP         (unsigned int)aP4 + v78 / 2,
//G42-DUP,
//G42-DUP,
//G42-DUP         (ConvertClass *)(v22 & 0xFFFFF9F8 | 0x601),
//G42-DUP         0,
//G42-DUP         v81,
//G42-DUP         0,
//G42-DUP         (ConvertClass *)0x3E8,
//G42-DUP         0,
//G42-DUP         0,
//G42-DUP         0,
//G42-DUP         0,
//G42-DUP         0);
//G42-DUP     }
//G42-DUP   }
//G42-DUP 
//G42-DUP }
}
namespace gamemd {
int AnimClass::InWhichLayer_AttachedObjectLayer()
{


  if ( this->AnimClass_field_0xCC ) /*0x424cb0*/
    return 2; /*0x424cba*/
  Coord *q0C8 = this->AnimClass_field_0xC8; // eax /*0x424cc0*/
  if ( q0C8 ) /*0x424cc8*/
    return *(unsigned int *)&q0C8[2].q00C[216]; /*0x424cca*/
  else
    return 3; /*0x424cd1*/

}
}
namespace gamemd {
int AnimClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{

  IUnknown *q0D4; // edx
  int v4; // eax
  int v5; // ecx

  q0D4 = *&aP0->u32_D4; /*0x4253b6*/
  if ( q0D4 && (v4 = *(unsigned int *)((char *)&stru_B054D0 + 0x10) - 1, *(unsigned int *)((char *)&stru_B054D0 + 0x10) - 1 >= 0) ) /*0x4253c8*/
  {
    v5 = *(unsigned int *)((char *)&stru_B054D0 + 0x4) + 4 * v4; /*0x4253d0*/
    while ( q0D4 != *(IUnknown **)(*(unsigned int *)&v5->q_C30 )) /*0x4253db*/
    {
      --v4; /*0x4253dd*/
      v5 -= 4; /*0x4253de*/
      if ( v4 < 0 ) /*0x4253e3*/
        goto LABEL_6; /*0x4253e3*/
    }
    *&aP0->q0D8 = v4; /*0x425404*/
  }
  else
  {
    LABEL_6:
    *&aP0->q0D8 = -1; /*0x4253e5*/
  }
  return AbstractClass::SaveLoad_Prefix((int *)((ObjectTypeClass *)aP0), (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x4253ff*/

}
}
// 0x428DE0
namespace gamemd {
void AnimClass::FreeRenderBuffer(void *a1)
{
  if ( a1->AnimClass_field_0x35D[1] && a1->AnimClass_field_0xA4 ) /*0x428ded*/
  {
    if ( a1->AnimClass_field_0x35D[2] ) /*0x428df7*/
    {
      Debug::Log(); /*0x428e0a*/
      operator delete((void *)(a1->AnimClass_field_0xA4)); /*0x428e16*/
      a1->AnimClass_field_0xA4 = 0; /*0x428e1e*/
      a1->__pad_A8[0] = 0; /*0x428e28*/
    }
  }
}
}
// 0x448260
namespace gamemd {
BuildingTypeClass * * AnimClass::drawFrame(void *a1)
{

  int result; // eax
  int v2; // ebp
  int v3; // edi
  ObjectClass *attachedBomb; // ecx
  BuildingTypeClass *Type; // ecx
  int ProduceCashDelay; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  BuildingTypeClass *v11; // edx
  int v12; // edx
  int bunkersCount; // edi
  HouseClass *owner; // ecx
  int v15; // eax
  BuildingTypeClass *v16; // ecx
  HouseClass *v17; // ecx
  int CaptureEvaEvent; // ecx
  int64_t v19; // rax
  BuildingTypeClass *v20; // edx
  LightSourceClass *LightSource; // ecx
  int v22; // edi
  int *Anims; // ebp
  int v24; // eax
  int Member; // eax
  unsigned char *v26; // edi
  unsigned int *v27; // ebp
  unsigned int *v28; // eax
  int *v29; // eax
  char v30; // bl
  int v31; // eax
  int v32; // edi
  int v33; // eax
  int v34; // ecx
  FactoryClass *Factory; // ecx
  FactoryClass *v36; // ecx
  HouseClass *v37; // ebx
  int v38; // eax
  int v39; // ecx
  BuildingTypeClass **v40; // edx
  int v41; // eax
  int v42; // eax
  int grindersCount; // ecx
  int v44; // ecx
  int v45; // edx
  int v46; // eax
  int cloningVatsCount; // ecx
  int v48; // ecx
  int v49; // edx
  int v50; // eax
  int psychicDetectionCount; // ecx
  int v52; // ecx
  BuildingTypeClass *v53; // eax
  int v54; // eax
  int v55; // eax
  int countResourceDestinations; // ecx
  int v57; // ecx
  int infantrySelfHeal; // edx
  int v59; // eax
  int startingUnitsCapacity; // ecx
  int v61; // ecx
  BuildingTypeClass *v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // ecx
  int v66; // ecx
  int v67; // edx
  int v68; // eax
  int v69; // ecx
  int v70; // ecx
  int v71; // edx
  int v72; // eax
  int v73; // ecx
  int v74; // ecx
  int iqLevel; // edx
  int v76; // eax
  int startingEdge; // ecx
  int v78; // ecx
  int v79; // edx
  int v80; // eax
  int v81; // ecx
  int v82; // ecx
  int v83; // eax
  int v84; // eax
  int v85; // ecx
  int v86; // ecx
  int InfantryGainSelfHeal; // ecx
  HouseClass *v88; // eax
  int UnitsGainSelfHeal; // ecx
  HouseClass *v90; // eax
  BuildingTypeClass *v91; // eax
  BuildingTypeClass *v92; // eax
  char CloakRadius; // cl
  void (**ptr_0)(BuildingClass *, int); // edx
  TechnoClass *v95; // edi
  BuildingTypeClass *v96; // eax
  char v97; // cl
  HouseClass *v98; // eax
  void (**v99)(BuildingClass *, int); // edx
  int v100; // eax
  int v101; // ecx
  int v102; // ebp
  int v103; // eax
  int v104; // edi
  int v105; // eax
  int v106; // ecx
  BuildingTypeClass **v107; // edx
  int v108; // ebp
  int v109; // ecx
  int v110; // eax
  int v111; // eax
  int v112; // edx
  int v113; // ecx
  int v114; // eax
  int v115; // eax
  int v116; // edx
  BuildingTypeClass *v117; // eax
  int v118; // ecx
  int v119; // eax
  int v120; // eax
  int v121; // edx
  int v122; // ecx
  int v123; // eax
  int v124; // eax
  int v125; // edx
  BuildingTypeClass *v126; // eax
  int v127; // ecx
  int v128; // eax
  int v129; // eax
  int v130; // edx
  int v131; // ecx
  int v132; // eax
  int v133; // eax
  int v134; // edx
  int v135; // ecx
  int v136; // eax
  int v137; // eax
  int v138; // edx
  int v139; // ecx
  int v140; // eax
  int v141; // eax
  int v142; // edx
  int v143; // ecx
  int v144; // eax
  int v145; // eax
  int v146; // edx
  int v147; // ecx
  int v148; // eax
  int v149; // eax
  int v150; // edx
  int v151; // ecx
  BuildingTypeClass *v152; // edx
  int v153; // ecx
  BuildingTypeClass *v154; // ecx
  BuildingTypeClass *v155; // eax
  int v156; // ecx
  BuildingTypeClass *v157; // eax
  int v158; // ecx
  int v159; // edi
  int v160; // eax
  HouseClass *initialOwner; // eax
  char i; // al
  int v163; // ecx
  int v164; // eax
  int repairStationsCapacity; // ecx
  int grindersCapacity; // eax
  int v167; // eax
  int repairStationsCount; // edx
  int v169; // [esp+A4h] [ebp-60h]
  int v170; // [esp+A8h] [ebp-5Ch]
  int v171; // [esp+ACh] [ebp-58h]
  char v172[8]; // [esp+B4h] [ebp-50h] BYREF
  int v173; // [esp+BCh] [ebp-48h] BYREF
  int v174; // [esp+C0h] [ebp-44h]
  int v175; // [esp+C4h] [ebp-40h]
  int v176[3]; // [esp+C8h] [ebp-3Ch] BYREF
  int v177[3]; // [esp+D4h] [ebp-30h] BYREF
  int v178[3]; // [esp+E0h] [ebp-24h] BYREF
  VectorClass_ReestablishPtr v179; // [esp+ECh] [ebp-18h] BYREF
  int v180; // [esp+100h] [ebp-4h]
  HouseClass *v181; // [esp+108h] [ebp+4h]
  int v182; // [esp+10Ch] [ebp+8h] BYREF
  TechnoClass *v183; // [esp+110h] [ebp+Ch]
}
} // namespace gamemd

// 0x7298F0
namespace gamemd {
int AnimClass_GetAnimation(int *a1, int a2)  // a2 = edi reg param (IDA sub_7298F0)
{

  int v2; // ecx
  int v3; // esi
  int *v4; // eax
  int GroundHeight; // ebx
  int v6; // edi
  int v7; // eax
  int result; // eax
  int *v9; // eax
  int *v10; // edx
  int *v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // [esp+Ch] [ebp-1Ch] BYREF
  int v15; // [esp+10h] [ebp-18h] BYREF
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h] BYREF
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h]

  v3 = v2; /*0x7298f5*/
  v4 = (int *)(*(unsigned int *)(v2 + 12) + 156); /*0x7298fa*/
  v14 = *v4; /*0x729901*/
  v15 = v4[1]; /*0x72990d*/
  v16 = v4[2]; /*0x729919*/
  GroundHeight = Cell::GetGroundHeight(&v14); /*0x729922*/
  if ( v16 >= GroundHeight ) /*0x72992a*/
  {
    (*(void (**)(unsigned int, unsigned int, unsigned int))(*v3->ptr_C + 288))(v3->ptr_C, 0, 0); /*0x729a43*/
    v11 = (int *)(*(int (**)(unsigned int))(*v3->ptr_C + 132))(v3->ptr_C); /*0x729a4e*/
    (v12) = ((v12) & ~0xFFFF) | ((Math::RoundToInt(64.0 / (double)v11[455])) & 0xFFFF); /*0x729a60*/
    v3->owningHouseIndex = *(unsigned int *)&stru_A8E960.random[528]; /*0x729a72*/
    *(unsigned int *)(v3 + 44) = v18; /*0x729a78*/
    v13 = v3->ptr_C; /*0x729a7b*/
    *(unsigned int *)(v3 + 48) = v12; /*0x729a7e*/
    *(unsigned int *)(v3 + 52) = v12; /*0x729a81*/
    result = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)v13 + 1348))(v13, 0, 0); /*0x729a86*/
    v3->nextArrayIndex = 6; /*0x729a8c*/
  }
  else
  {
    v6 = (*(int (**)(unsigned int, int))(*v3->ptr_C + 456))(v3->ptr_C, a2); /*0x72993f*/
    v14 = (*(int (**)(unsigned int))(*v3->ptr_C + 1336))(v3->ptr_C); /*0x72994f*/
    (v7) = ((v7) & ~0xFFFF) | ((Math::RoundToInt((double)v14 * *(double *)dword_8871E0->TunnelSpeed)) & 0xFFFF); /*0x72995a*/
    if ( v7 <= 5 ) /*0x729962*/
      v7 = 5; /*0x729964*/
    v17 += v7; /*0x729971*/
    if ( v17 > GroundHeight ) /*0x729975*/
      v17 = GroundHeight; /*0x729977*/
    result = (*(int (**)(unsigned int, int *))(*v3->ptr_C + 436))(v3->ptr_C, &v15); /*0x729985*/
    if ( v6 <= -50 ) /*0x72998f*/
    {
      result = (*(int (**)(unsigned int))(*v3->ptr_C + 456))(v3->ptr_C); /*0x72999a*/
      if ( result > -50 ) /*0x7299a3*/
      {
        v9 = (int *)(v3->ptr_C + 156); /*0x7299ae*/
        v17 = *v9; /*0x7299b5*/
        v18 = v9[1]; /*0x7299c2*/
        v19 = v9[2]; /*0x7299cd*/
        StartAudioControllerAt(dword_8871E0->ImpactLandSound, &v17, 0); /*0x7299d7*/
        result = __2_YAPAXI_Z(0x1C8u); /*0x7299e1*/
        if ( result ) /*0x7299eb*/
        {
          v10 = (int *)(v3->ptr_C + 156); /*0x7299f6*/
          v17 = *v10; /*0x729a09*/
          v18 = v10[1]; /*0x729a10*/
          v19 = v10[2]; /*0x729a1c*/
          return (int)AnimClass::ctor( /*0x729a2f*/
                        (AnimClass *)result,
                        *&dword_8871E0->u32_294,
                        &v17,
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


  ((int)this)->TransformMatrix(); /*0x761037*/
  int i; // edi
  for ( i = 0; i < *&this->q_200; ++i ) /*0x761046*/
  {
    int *Coords; // eax
    int v6[3]; // [esp+8h] [ebp-Ch] BYREF
    Coords = CellClass::GetCoords(*(CellClass **)(*&this->u32_1F4 + 4 * i), v6); /*0x761056*/
    ((WaveClass *)this)->DamageArea(Coords); /*0x76105e*/
  }
  int v4 = *&this->q130 - 1; // eax /*0x761074*/
  *&this->q130 = v4; /*0x761075*/
  if ( v4 >= 0 ) /*0x76107b*/
    return ObjectClass::DetectCloaked((UnitClass *)this); /*0x76108f*/
  else
    return (*(int (**)(AnimClass *))&this->ptr_0->q0F8)(this); /*0x761081*/

}
} // namespace gamemd

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
char AnimClass::ProcessAreaEffect(AnimClass * a1)
{
  char result; // al

  char v1; // bl
  v1 = ((Input *)a1)->OffsetToDirection(); /*0x426314*/
  CellClass *v2; // esi
  v2 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, a1); /*0x426321*/
  if ( Cell::GetGroundHeight((unsigned int *)(a1)) + Map_MaxHeight > (int)a1->ptr_8 ) /*0x426335*/
  {
    result = ~(1 << v1) & (*((unsigned char *)&(v2->occupationFlags))); /*0x426370*/
    (*((unsigned char *)&(v2->occupationFlags))) = result; /*0x426372*/
    if ( (result & 0x1C) == 0 ) /*0x42637a*/
      v2->infantryOwnerIndex = -1; /*0x42637c*/
  }
  else
  {
    result = ~(1 << v1) & (*((unsigned char *)&(v2->altOccupationFlags))); /*0x426347*/
    (*((unsigned char *)&(v2->altOccupationFlags))) = result; /*0x426349*/
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
