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

// 0x4228E0
namespace gamemd {
void AnimClass::Destruct( void * a2)
{

  unsigned char *v3; // ebp
  int ecx3; // ecx
  AudioController *v4; // edx
  int v6; // eax
  unsigned int *v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int eax28; // eax
  ObjectClass *v11; // [esp+10h] [ebp-10h] BYREF
  unsigned int v13[3]; // [esp+14h] [ebp-Ch] BYREF

  IDA_LOBYTE(this) = 1; /*0x4228e3*/
  *(unsigned int *)this = &vt_AnimClass; /*0x4228eb*/
  *((unsigned int *)this + 1) = &vt_AnimClass; /*0x4228f1*/
  *((unsigned int *)this + 2) = &vt_AnimClass; /*0x4228f8*/
  *((unsigned int *)this + 3) = &off_7E3328; /*0x4228ff*/
  ((AbstractClass *)((AbstractClass *)this))->AnnounceExpiredPointer(this); /*0x422906*/
  if ( HouseClass_Player.__pad_5568[22252] ) /*0x422914*/
  {
    v3 = (unsigned char *)*((unsigned int *)this + 51); /*0x42291a*/
    if ( v3 ) /*0x422922*/
    {
      ecx3 = 0; /*0x42292a*/
      if ( *(int *)&HouseClass_Player.__pad_5568[22276] > 0 ) /*0x42292e*/
      {
        v4 = *(AudioController **)&HouseClass_Player.__pad_5568[22264]; /*0x422930*/
        do /*0x42294a*/
        {
          if ( *(void **)v4->__pad_0 != this && *(unsigned char **)(*(unsigned int *)v4->__pad_0 + 204) == v3 ) /*0x422942*/
            break; /*0x422942*/
          ++ecx3; /*0x422944*/
          v4 = (AudioController *)((char *)v4 + 4); /*0x422945*/
        }
        while ( ecx3 < *(int *)&HouseClass_Player.__pad_5568[22276] ); /*0x42294a*/
      }
      if ( ecx3 == *(unsigned int *)&HouseClass_Player.__pad_5568[22276] ) /*0x42294e*/
      {
        (*(void (**)(unsigned int))(*(unsigned int *)v3 + 380))(*((unsigned int *)this + 51)); /*0x422955*/
        v3[132] = 0; /*0x42295b*/
      }
      *((unsigned int *)this + 51) = 0; /*0x422961*/
    }
    v6 = *((unsigned int *)this + 50); /*0x422967*/
    if ( v6 && *(unsigned char *)(v6 + 853) ) /*0x422971*/
    {
      v13[0] = *((unsigned int *)this + 39); /*0x422985*/
      v13[1] = *((unsigned int *)this + 40); /*0x422991*/
      v13[2] = *((unsigned int *)this + 41); /*0x422998*/
      v7 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v13); /*0x4229a1*/
      v7[80] &= ~0x20000u; /*0x4229b7*/
    }
    if ( (uint8_t)ObjectClass::Undeploy(this) ) /*0x4229bb*/
      RemoveTarget((IUnknown *)this); /*0x4229ca*/
  }
  v11 = (ObjectClass *)this; /*0x4229df*/
  v8 = (*(int (**)(char *, ObjectClass **))(*(unsigned int *)&stru_B05488.__pad_579C[19020] + 16))( /*0x4229e3*/
         &stru_B05488.__pad_579C[19020],
         &v11);
  if ( v8 != -1 && v8 < *(int *)&stru_B05488.__pad_579C[19036] ) /*0x4229f3*/
  {
    --*(unsigned int *)&stru_B05488.__pad_579C[19036]; /*0x4229f8*/
    for ( ; /*0x4229fe*/
          v8 < *(int *)&stru_B05488.__pad_579C[19036];
          *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[19024] + 4 * v8 - 4) = *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[19024]
                                                                                          + 4 * v8) )
    {
      ++v8; /*0x422a06*/
    }
  }
  v9 = *((unsigned int *)this + 50); /*0x422a18*/
  if ( v9 ) /*0x422a20*/
    AnimClass::FreeRenderBuffer(v9); /*0x422a22*/
  Mixer::ReleaseChannel((int **)this + 104); /*0x422a2f*/
  Mixer::ReleaseChannel((int **)this + 109); /*0x422a3c*/
  AudioFileClass::Release((unsigned int *)this + 104); /*0x422a43*/
  AudioFileClass::Release((unsigned int *)this + 109); /*0x422a4a*/
  *((unsigned int *)this + 51) = 0; /*0x422a52*/
  *((unsigned int *)this + 50) = 0; /*0x422a59*/
  if ( ((AbstractClass *)((AbstractClass *)((char *)this + 4)))->GetVtable3() == -2 ) /*0x422a67*/
  {
    v11 = (ObjectClass *)this; /*0x422a79*/
    v10 = (*(int (**)(char *, ObjectClass **))(*(unsigned int *)&HouseClass_Player.__pad_74[64] + 16))( /*0x422a7d*/
            &HouseClass_Player.__pad_74[64],
            &v11);
    if ( v10 != -1 && v10 < *(int *)&HouseClass_Player.__pad_74[80] ) /*0x422a91*/
    {
      --*(unsigned int *)&HouseClass_Player.__pad_74[80]; /*0x422a96*/
      for ( ; /*0x422a9c*/
            v10 < *(int *)&HouseClass_Player.__pad_74[80];
            *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_74[68] + 4 * v10 - 4) = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_74[68]
                                                                                              + 4 * v10) )
      {
        ++v10; /*0x422aa4*/
      }
    }
  }
  else
  {
    v11 = (ObjectClass *)this; /*0x422ad5*/
    eax28 = (*(int (**)(char *, ObjectClass **))(*(unsigned int *)&HouseClass_Player.__pad_5568[22260] + 16))( /*0x422ad9*/
              &HouseClass_Player.__pad_5568[22260],
              &v11);
    if ( eax28 != -1 && eax28 < *(int *)&HouseClass_Player.__pad_5568[22276] ) /*0x422ae9*/
    {
      --*(unsigned int *)&HouseClass_Player.__pad_5568[22276]; /*0x422aee*/
      for ( ; /*0x422af4*/
            eax28 < *(int *)&HouseClass_Player.__pad_5568[22276];
            *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22264] + 4 * eax28 - 4) = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22264] + 4 * eax28) )
      {
        ++eax28; /*0x422afc*/
      }
    }
  }
  ObjectClass::Dtor(this); /*0x422b10*/

}
}
// 0x422CA0
namespace gamemd {
void* AnimClass::Render(ConvertClass * a2, ConvertClass * aP5)
{
    unsigned int v93 = 0;  /* G37 hoist */
    unsigned int v92 = 0;  /* G37 hoist */
    unsigned int v91 = 0;  /* G37 hoist */
    unsigned int v90 = 0;  /* G37 hoist */
    unsigned int v62 = 0;  /* G37 hoist */
    unsigned int v44 = 0;  /* G37 hoist */
    unsigned int v32 = 0;  /* G37 hoist */
    unsigned int v25 = 0;  /* G37 hoist */
    unsigned int v21 = 0;  /* G37 hoist */
    unsigned int v20 = 0;  /* G37 hoist */
    unsigned int v19 = 0;  /* G37 hoist */
    unsigned int v93 = 0;  /* G37 hoist */
    unsigned int v92 = 0;  /* G37 hoist */
    unsigned int v91 = 0;  /* G37 hoist */
    unsigned int v90 = 0;  /* G37 hoist */
    unsigned int v62 = 0;  /* G37 hoist */
    unsigned int v44 = 0;  /* G37 hoist */
    unsigned int v32 = 0;  /* G37 hoist */
    unsigned int v25 = 0;  /* G37 hoist */
    unsigned int v21 = 0;  /* G37 hoist */
    unsigned int v20 = 0;  /* G37 hoist */
    unsigned int v19 = 0;  /* G37 hoist */
    unsigned int v93 = 0;  /* G37 hoist */
    unsigned int v92 = 0;  /* G37 hoist */
    unsigned int v91 = 0;  /* G37 hoist */
    unsigned int v90 = 0;  /* G37 hoist */
    unsigned int v62 = 0;  /* G37 hoist */
    unsigned int v44 = 0;  /* G37 hoist */
    unsigned int v32 = 0;  /* G37 hoist */
    unsigned int v25 = 0;  /* G37 hoist */
    unsigned int v21 = 0;  /* G37 hoist */
    unsigned int v20 = 0;  /* G37 hoist */
    unsigned int v19 = 0;  /* G37 hoist */

  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int16_t v9; // bx
  ConvertClass *v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // ebp
  int v14; // eax
  uint8_t v15; // di
  IUnknown *v16; // eax
  int16_t v17; // ax
  int v18; // edi
  CoordStruct *v19; // ebx
  CoordStruct *v20; // eax
  CoordStruct *v21; // eax
  unsigned int v22; // ebx
  double v23; // st7
  double Z; // st6
  CoordStruct *v25; // eax
  IUnknown *v26; // eax
  ConvertClass *v27; // ecx
  int Y; // eax
  char v29; // al
  unsigned int *v30; // eax
  int16_t *v31; // edi
  CoordStruct *v32; // ecx
  unsigned int *v33; // eax
  int v34; // eax
  IUnknown *v35; // edx
  ConvertClass *v36; // ecx
  int v37; // eax
  IUnknown *v38; // eax
  int v39; // eax
  char v40; // al
  int v41; // ebp
  IUnknown *v42; // eax
  unsigned int *v43; // eax
  CoordStruct *v44; // eax
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
  unsigned int *v61; // eax
  CoordStruct *v62; // eax
  unsigned int *FoundationSize; // eax
  int v64; // ecx
  int v65; // edi
  int v66; // edx
  int v67; // ebp
  IUnknown *v68; // eax
  ConvertClass *v69; // edi
  int v70; // eax
  int v71; // edi
  int v72; // edx
  IUnknown *v73; // eax
  IUnknown *v74; // edx
  IUnknown *v75; // eax
  int v76; // edx
  ConvertClass *v77; // eax
  int v78; // ebp
  IUnknown *v79; // eax
  int v80; // [esp-20h] [ebp-130h]
  int v81; // [esp-20h] [ebp-130h]
  BuildingTypeClass *v82; // [esp-18h] [ebp-128h]
  BuildingTypeClass *v83; // [esp-18h] [ebp-128h]
  uint8_t v84; // [esp+13h] [ebp-FDh]
  uint8_t v85; // [esp+13h] [ebp-FDh]
  char v86; // [esp+13h] [ebp-FDh]
  int v87; // [esp+14h] [ebp-FCh]
  int v88; // [esp+14h] [ebp-FCh]
  float v89; // [esp+14h] [ebp-FCh]
  CoordStruct *v90; // [esp+14h] [ebp-FCh]
  CoordStruct *v91; // [esp+14h] [ebp-FCh]
  CoordStruct *v92; // [esp+14h] [ebp-FCh]
  CoordStruct *v93; // [esp+14h] [ebp-FCh]
  IUnknown *v94; // [esp+14h] [ebp-FCh]
  int v95; // [esp+14h] [ebp-FCh]
  uint8_t v96; // [esp+1Ah] [ebp-F6h]
  uint8_t v97; // [esp+1Ah] [ebp-F6h]
  uint8_t v98; // [esp+1Bh] [ebp-F5h]
  uint8_t v99; // [esp+1Bh] [ebp-F5h]
  CoordStruct *aP2; // [esp+1Ch] [ebp-F4h] BYREF
  IUnknown *aP0; // [esp+20h] [ebp-F0h] BYREF
  ConvertClass *v102; // [esp+24h] [ebp-ECh]
  ConvertClass *v103; // [esp+28h] [ebp-E8h]
  CoordStruct *aP4; // [esp+2Ch] [ebp-E4h]
  int v105[2]; // [esp+30h] [ebp-E0h] BYREF
  ConvertClass *aP10; // [esp+38h] [ebp-D8h]
  int v107; // [esp+3Ch] [ebp-D4h]
  int v108; // [esp+40h] [ebp-D0h] BYREF
  int v109; // [esp+44h] [ebp-CCh]
  CCINIClass aP1; // [esp+50h] [ebp-C0h] BYREF
  CCINIClass v111; // [esp+B0h] [ebp-60h] BYREF

  if ( stru_89E138.__pad_14B0[6152] /*0x422ccb*/
    && *(unsigned int *)&stru_87C374.__pad_579C[23348]
    && (uint8_t)ObjectClass::StepCleanup(this, aRing1) )
  {
    v4 = *((unsigned int *)this + 45); /*0x422cd8*/
    v5 = *((unsigned int *)this + 48); /*0x422ce4*/
    v6 = *((unsigned int *)this + 47); /*0x422cea*/
    if ( v4 != -1 ) /*0x422cf3*/
    {
      if ( *(unsigned int *)&HouseClass_Player.__pad_5568[23248] - v4 >= v6 ) /*0x422cff*/
        v6 = 0; /*0x422d05*/
      else
        v6 -= *(unsigned int *)&HouseClass_Player.__pad_5568[23248] - v4; /*0x422d01*/
    }
    v7 = v5 + *((unsigned int *)this + 43) * v5 - v6; /*0x422d12*/
    v8 = v5 * (*(int (**)(unsigned int *))(*(unsigned int *)this + 1968))(this); /*0x422d23*/
    v9 = v7 + 8; /*0x422d28*/
    v10 = (ConvertClass *)(*(unsigned int *)a2->__pad_0 + 2 * (v7 + 8)); /*0x422d30*/
    aP0 = (IUnknown *)(*(unsigned int *)a2->__pad_0 - 2 * (v7 + 8)); /*0x422d3c*/
    aP10 = v10; /*0x422d40*/
    v11 = *(unsigned int *)&a2->field_2[2]; /*0x422d47*/
    v107 = v7 + 8 + v11; /*0x422d4d*/
    v102 = (ConvertClass *)(v11 - (v7 + 8)); /*0x422d51*/
    aP4 = (CoordStruct *)((v8 - v7) << 8); /*0x422d5e*/
    aP2 = (CoordStruct *)((int)aP4 / v8); /*0x422d67*/
    if ( (int)aP4 / v8 >= 0 ) /*0x422d6b*/
    {
      if ( (int)aP4 / v8 > 255 ) /*0x422d7c*/
        aP2 = (CoordStruct *)255; /*0x422d7e*/
    }
    else
    {
      *(float *)&aP2 = 0.0; /*0x422d6d*/
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
      v14 = (int)aP4 / (v8 - v87); /*0x422e10*/
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
    v16 = (IUnknown *)(*(int (**)(unsigned int *))(*(unsigned int *)this + 1856))(this); /*0x422e2d*/
    v17 = *(unsigned short *)(*(unsigned int *)&stru_87C374.__pad_579C[23348] + 4) /*0x422e87*/
        + *(unsigned short *)(*(unsigned int *)&stru_87C374.__pad_579C[23348] + 36)
        - *(unsigned short *)&a2->field_2[2]
        - *(unsigned short *)&stru_87C374.__pad_579C[21652]
        + *((unsigned int *)this + 64)
        + *(unsigned int *)(*((unsigned int *)this + 50) + 836)
        - ZCoordToScreenY(v16)
        - 2;
    *(float *)&aP4 = (double)(uint16_t)(v17 + v9) * 0.000015259022; /*0x422eab*/
    *(float *)&v103 = (double)(uint16_t)(v17 - v9) * 0.000015259022; /*0x422eb9*/
    ColorStruct::SetRGB(&aP1, (uint8_t)aP2, v13, v15); /*0x422ebd*/
    ColorStruct::SetRGB(&v111, (uint8_t)aP2, v13, v15); /*0x422ecc*/
    *(float *)&v88 = (float)(int)v102; /*0x422ede*/
    v18 = v88; /*0x422ee6*/
    *(float *)&aP2 = (float)(int)aP0; /*0x422eef*/
    v19 = aP2; /*0x422ef3*/
    Tactical::SetCellTransform(aP1.__pad_0, 0, aP2, v88, aP4, 0, 0); /*0x422efa*/
    *(float *)&aP2 = (float)v107; /*0x422f0f*/
    Tactical::SetCellTransform(aP1.__pad_0, 1, v19, (int)aP2, (CoordStruct *)v103, 0, 1065353216); /*0x422f1f*/
    v89 = (float)(int)aP10; /*0x422f37*/
    Tactical::SetCellTransform( /*0x422f47*/
      aP1.__pad_0,
      2,
      (CoordStruct *)IDA_LODWORD(v89),
      (int)aP2,
      (CoordStruct *)v103,
      1065353216,
      1065353216);
    Tactical::SetCellTransform(v111.__pad_0, 0, v19, v18, aP4, 0, 0); /*0x422f5c*/
    Tactical::SetCellTransform( /*0x422f7f*/
      v111.__pad_0,
      1,
      (CoordStruct *)IDA_LODWORD(v89),
      (int)aP2,
      (CoordStruct *)v103,
      1065353216,
      1065353216);
    Tactical::SetCellTransform(v111.__pad_0, 2, (CoordStruct *)IDA_LODWORD(v89), v18, aP4, 1065353216, 0); /*0x422f97*/
    StructTable::Append(*(unsigned int **)&stru_89E138.__pad_14B0[6184], &aP1); /*0x422fa7*/
    StructTable::Append(*(unsigned int **)&stru_89E138.__pad_14B0[6184], &v111); /*0x422fba*/
    return; /*0x422fc9*/
  }
  if ( dword_ABCD44 < (CampaignScore *)PingPongBuffer::GetWriteOffset() && *(int *)(*((unsigned int *)this + 50) + 724) > 1 ) /*0x422fe6*/
    return; /*0x422fe6*/
  if ( *((unsigned char *)this + 413) ) /*0x422fec*/
    return; /*0x422fec*/
  v20 = (CoordStruct *)*((unsigned int *)this + 50); /*0x422ffa*/
  if ( v20[60].Y > *(int *)&HouseClass_Player.__pad_5568[22724] || *((unsigned char *)this + 409) && IDA_LOBYTE(v20[73].Z) ) /*0x42301e*/
    return; /*0x42301e*/
  v103 = (ConvertClass *)(*(int (**)(unsigned int *))(*(unsigned int *)this + 432))(this); /*0x423035*/
  if ( !v103 ) /*0x423039*/
    return; /*0x423039*/
  v21 = (CoordStruct *)*((unsigned int *)this + 50); /*0x42303f*/
  v22 = *((unsigned int *)this + 100); /*0x42304b*/
  v90 = (CoordStruct *)*((unsigned int *)this + 43); /*0x423051*/
  aP4 = (CoordStruct *)((char *)v90 + v21[57].Z); /*0x42305d*/
  if ( *((unsigned char *)this + 281) ) /*0x423061*/
  {
    if ( IDA_LOBYTE(v21[72].Z) ) /*0x42306b*/
      v22 |= 6u; /*0x423075*/
    else
      v22 |= 4u; /*0x42307a*/
  }
  if ( v21[60].Z <= *(int *)&HouseClass_Player.__pad_5568[22724] ) /*0x42308b*/
  {
    if ( !IDA_BYTE2(v21[72].Z) ) /*0x423095*/
    {
      Y = v21[62].Y; /*0x423183*/
      if ( Y <= 0 ) /*0x42318b*/
      {
        v29 = *((unsigned char *)this + 376); /*0x4231c1*/
        if ( !v29 ) /*0x4231c9*/
          goto LABEL_47; /*0x4231c9*/
        if ( v29 > 15 ) /*0x4231d1*/
          return; /*0x4231d1*/
        if ( v29 > 10 ) /*0x4231d9*/
        {
          v22 |= 4u; /*0x4231db*/
          goto LABEL_47; /*0x4231de*/
        }
        if ( v29 > 5 ) /*0x4231e5*/
        {
          v22 |= 4u; /*0x4231eb*/
          goto LABEL_47; /*0x4231ee*/
        }
      }
      else
      {
        if ( *((char *)this + 376) >= 15 ) /*0x423194*/
          return; /*0x423194*/
        if ( Y != 25 ) /*0x42319d*/
        {
          if ( Y == 50 ) /*0x4231a6*/
          {
            v22 |= 4u; /*0x4231a8*/
          }
          else if ( Y == 75 ) /*0x4231b3*/
          {
            v22 |= 6u; /*0x4231b9*/
          }
          goto LABEL_47; /*0x4231ab*/
        }
      }
LABEL_46:
      v22 |= 2u; /*0x4230fb*/
      goto LABEL_47; /*0x4230fb*/
    }
    if ( *((char *)this + 376) >= 15 ) /*0x4230a2*/
      return; /*0x4230a2*/
    v23 = (double)(int)v90; /*0x4230a8*/
    Z = (double)v21[58].Z; /*0x4230ac*/
    if ( v23 > Z * 0.6 ) /*0x4230c3*/
    {
      v22 |= 6u; /*0x4230c9*/
      goto LABEL_47; /*0x4230cc*/
    }
    if ( v23 > Z * 0.4 ) /*0x4230df*/
    {
      v22 |= 4u; /*0x4230e5*/
      goto LABEL_47; /*0x4230e8*/
    }
    if ( v23 > Z * 0.2 ) /*0x4230f9*/
      goto LABEL_46; /*0x4230f9*/
  }
LABEL_47:
  if ( (v22 & 1) == 0 ) /*0x423101*/
    IDA_BYTE1(v22) |= 8u; /*0x423103*/
  aP0 = (IUnknown *)(*(int (**)(unsigned int *))(*(unsigned int *)this + 1824))(this); /*0x423110*/
  v25 = (CoordStruct *)*((unsigned int *)this + 50); /*0x423114*/
  aP10 = (ConvertClass *)1000; /*0x42311a*/
  if ( IDA_BYTE1(v25[71].X) ) /*0x423122*/
  {
    v105[0] = *(unsigned int *)(*(unsigned int *)(stru_B05488.field_4C + 4 * *(unsigned int *)(HouseClass_Player.field_0 + 90196)) + 780); /*0x42314b*/
    if ( IDA_BYTE1(v25[71].Z) ) /*0x42314f*/
      goto LABEL_78; /*0x423157*/
    v26 = (IUnknown *)(*(int (**)(unsigned int *, int *))(*(unsigned int *)this + 688))(this, &v108); /*0x423166*/
    v27 = (ConvertClass *)*((int16_t *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v26) + 134); /*0x423177*/
    goto LABEL_77; /*0x42317e*/
  }
  if ( *((unsigned char *)this + 406) ) /*0x4231f3*/
  {
    v30 = (unsigned int *)(*(int (**)(unsigned int *, int *))(*(unsigned int *)this + 688))(this, &v108); /*0x42320a*/
    IDA_LOWORD(v91) = *v30 / 256; /*0x423220*/
    IDA_HIWORD(v91) = v30[1] / 256; /*0x423238*/
    aP2 = v91; /*0x423241*/
    v31 = (int16_t *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP2); /*0x423250*/
    if ( !*((unsigned int *)v31 + 13) ) /*0x423252*/
      TacticalClass::SetView((int)v31, 0, 0x10000, 0, 1000, 1000, 1000); /*0x423273*/
    v32 = (CoordStruct *)*((unsigned int *)this + 50); /*0x42327b*/
    v105[0] = *((unsigned int *)v31 + 13); /*0x423281*/
    if ( !IDA_BYTE1(v32[71].Z) ) /*0x423285*/
      aP10 = (ConvertClass *)v31[134]; /*0x42329a*/
  }
  else if ( *((unsigned int *)this + 53) ) /*0x4232a3*/
  {
    v105[0] = *((unsigned int *)this + 53); /*0x4232ad*/
    if ( !IDA_BYTE1(v25[71].Z) ) /*0x4232b1*/
      aP10 = (ConvertClass *)*((unsigned int *)this + 63); /*0x4232c5*/
  }
  else
  {
    v105[0] = *(unsigned int *)&stru_87C374.__pad_14B0[7836]; /*0x4232d4*/
    if ( IDA_BYTE1(v25[72].X) ) /*0x4232d8*/
      v105[0] = *(unsigned int *)(*(unsigned int *)stru_B05488.field_4C + 780); /*0x4232f0*/
    if ( !IDA_BYTE1(v25[71].Z) ) /*0x4232f4*/
    {
      v33 = (unsigned int *)(*(int (**)(unsigned int *, int *))(*(unsigned int *)this + 688))(this, &v108); /*0x423307*/
      IDA_LOWORD(v92) = *v33 / 256; /*0x42331d*/
      IDA_HIWORD(v92) = v33[1] / 256; /*0x423336*/
      aP2 = v92; /*0x423343*/
      v27 = (ConvertClass *)*((int16_t *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP2) + 133); /*0x42334d*/
LABEL_77:
      aP10 = v27; /*0x423354*/
    }
  }
LABEL_78:
  if ( *((unsigned char *)this + 404) ) /*0x423358*/
  {
    v34 = ZCoordToScreenY(aP0); /*0x423373*/
    v35 = *(IUnknown **)a2->__pad_0; /*0x423384*/
    v36 = (ConvertClass *)(*(unsigned int *)(*((unsigned int *)this + 50) + 836) + v34 + *(unsigned int *)&a2->field_2[2]); /*0x42338b*/
    v37 = *this; /*0x42339a*/
    v102 = v36; /*0x42339c*/
    aP0 = v35; /*0x4233a2*/
    v38 = (IUnknown *)(*(int (**)(unsigned int *))(v37 + 464))(this); /*0x4233a6*/
    v39 = ZCoordToScreenY(v38); /*0x4233ae*/
    DrawToSurfaceSHP( /*0x4233e9*/
      *(int *)&stru_87C374.__pad_579C[22532],
      v105[0],
      v103,
      (unsigned int)aP4,
      (ConvertClass *)&aP0,
      aP5,
      (ConvertClass *)0x2601,
      0,
      *(unsigned int *)(*((unsigned int *)this + 50) + 836) - v39,
      0,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0);
  }
  v40 = *((unsigned char *)this + 280); /*0x4233ee*/
  *(float *)&v41 = 0.0; /*0x4233f4*/
  *(float *)&aP2 = 0.0; /*0x4233f8*/
  if ( !v40 ) /*0x4233fc*/
    goto LABEL_99; /*0x4233fc*/
  v42 = (IUnknown *)(*(int (**)(unsigned int *, int *))(*(unsigned int *)this + 288))(this, &v108); /*0x42340b*/
  v43 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v42); /*0x423414*/
  v44 = (CoordStruct *)Cell::IsBridge(v43); /*0x42341b*/
  v93 = v44; /*0x423422*/
  if ( !v44 ) /*0x423426*/
    goto LABEL_99; /*0x423426*/
  if ( v44[55].X ) /*0x42342e*/
  {
    v45 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 6308); /*0x423442*/
    v46 = *(unsigned int *)&stru_87C374.__pad_579C[22224] + 2 * v45; /*0x423448*/
    aP0 = (IUnknown *)(v45 + v46); /*0x423454*/
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
      v41 = v49 | (32 * (v48 | (v41 << 6))); /*0x4234a3*/
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
    v41 |= v49; /*0x4234ca*/
LABEL_89:
    IDA_LOWORD(v49) = v98; /*0x4234d2*/
    IDA_LOWORD(v48) = v84; /*0x4234d8*/
    IDA_LOWORD(v50) = (uint8_t)v50 >> 1; /*0x4234e0*/
    v41 |= v48 | (32 * ((32 * v49) | v50)); /*0x4234ee*/
    aP2 = (CoordStruct *)v41; /*0x4234f0*/
  }
  if ( !(*(uint8_t (**)(CoordStruct *))(v93->X + 352))(v93) || v93[37].Z != 1 ) /*0x423513*/
    goto LABEL_99; /*0x423513*/
  v52 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 6320); /*0x42351f*/
  v53 = *(unsigned int *)&stru_87C374.__pad_579C[22224] + 2 * v52; /*0x423525*/
  aP0 = (IUnknown *)(v52 + v53); /*0x423531*/
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
    v41 |= v55; /*0x423582*/
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
  v41 |= v56; /*0x4235a9*/
LABEL_98:
  IDA_LOWORD(v56) = v99; /*0x4235b1*/
  IDA_LOWORD(v55) = v97; /*0x4235b7*/
  IDA_LOWORD(v57) = (uint8_t)v57 >> 1; /*0x4235bf*/
  v41 |= v55 | (32 * ((32 * v56) | v57)); /*0x4235cd*/
  aP2 = (CoordStruct *)v41; /*0x4235cf*/
LABEL_99:
  v60 = (unsigned int *)(*(int (**)(unsigned int *, int *))(*(unsigned int *)this + 288))(this, &v108); /*0x4235d3*/
  IDA_LOWORD(v94) = *v60 / 256; /*0x4235ef*/
  IDA_HIWORD(v94) = v60[1] / 256; /*0x423608*/
  aP0 = v94; /*0x423615*/
  v61 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP0); /*0x42361a*/
  if ( CellClass::QuickPassable(v61) ) /*0x423621*/
  {
    *(float *)&v41 = 0.0; /*0x42362a*/
    *(float *)&aP2 = 0.0; /*0x42362c*/
  }
  v62 = (CoordStruct *)*((unsigned int *)this + 50); /*0x423630*/
  if ( IDA_HIBYTE(v62[71].Y) ) /*0x423636*/
  {
    FoundationSize = Building::GetFoundationSize(&v108, 0); /*0x42364f*/
    v64 = *(unsigned int *)a2->__pad_0; /*0x423657*/
    v65 = *(unsigned int *)&a2->field_2[2]; /*0x423659*/
    aP0 = (IUnknown *)FoundationSize[3]; /*0x42365c*/
    v66 = *this; /*0x423663*/
    v108 = v64; /*0x423667*/
    v105[0] = v64; /*0x42366d*/
    v95 = (int)aP0 / 2; /*0x423673*/
    v67 = v65 - (int)aP0 / 2; /*0x423677*/
    v86 = 0; /*0x423679*/
    v68 = (IUnknown *)(*(int (**)(unsigned int *))(v66 + 464))(this); /*0x42367e*/
    v69 = (ConvertClass *)(*((unsigned int *)this + 64) + *(unsigned int *)(*((unsigned int *)this + 50) + 836) - ZCoordToScreenY(v68) - 50); /*0x4236a1*/
    IDA_BYTE1(v22) |= 0x20u; /*0x4236a4*/
    do /*0x423719*/
    {
      v70 = v67 + *(unsigned int *)(*((unsigned int *)this + 50) + 836); /*0x4236bb*/
      v105[0] = v108; /*0x4236bd*/
      v105[1] = v70; /*0x4236c1*/
      DrawToSurfaceSHP( /*0x4236f7*/
        *(int *)&stru_87C374.__pad_579C[22532],
        *(int *)&stru_87C374.__pad_14B0[7836],
        v103,
        (unsigned int)aP4,
        (ConvertClass *)v105,
        (ConvertClass *)&stru_87C374.__pad_579C[21648],
        (ConvertClass *)v22,
        0,
        (int)v69,
        (ConvertClass *)2,
        aP10,
        (ConvertClass *)aP2,
        0,
        0,
        0,
        0);
      if ( v67 < 0 ) /*0x4236fe*/
        v86 = 1; /*0x423700*/
      v67 -= (int)aP0; /*0x42370d*/
      v69 = (ConvertClass *)((char *)v69 - (int)aP0 - v95); /*0x423715*/
    }
    while ( !v86 ); /*0x423719*/
  }
  else if ( IDA_BYTE1(v62[72].Z) ) /*0x423728*/
  {
    v109 = v62[69].Z; /*0x42373c*/
    v71 = *(unsigned int *)&a2->field_2[2]; /*0x423742*/
    aP0 = *(IUnknown **)a2->__pad_0; /*0x42374c*/
    v82 = (BuildingTypeClass *)aP10; /*0x423756*/
    v72 = *this; /*0x42375e*/
    v102 = (ConvertClass *)(v109 + v71); /*0x423766*/
    v73 = (IUnknown *)(*(int (**)(unsigned int *))(v72 + 464))(this); /*0x42376a*/
    IDA_BYTE1(v22) |= 0x20u; /*0x42379b*/
    v80 = *((unsigned int *)this + 64) + *(unsigned int *)(*((unsigned int *)this + 50) + 836) - ZCoordToScreenY(v73) - 3; /*0x42379e*/
    DrawToSurfaceSHP( /*0x4237a9*/
      *(int *)&stru_87C374.__pad_579C[22532],
      v105[0],
      v103,
      (unsigned int)aP4,
      (ConvertClass *)&aP0,
      aP5,
      (ConvertClass *)v22,
      0,
      v80,
      0,
      (ConvertClass *)v82,
      (ConvertClass *)v41,
      0,
      0,
      0,
      0);
  }
  else
  {
    v74 = *(IUnknown **)a2->__pad_0; /*0x4237b9*/
    v102 = (ConvertClass *)(v62[69].Z + *(unsigned int *)&a2->field_2[2]); /*0x4237bb*/
    aP0 = v74; /*0x4237cb*/
    v83 = (BuildingTypeClass *)aP10; /*0x4237d2*/
    v75 = (IUnknown *)(*(int (**)(unsigned int *))(*(unsigned int *)this + 1856))(this); /*0x4237d7*/
    v76 = *((unsigned int *)this + 64) + *(unsigned int *)(*((unsigned int *)this + 50) + 836) - ZCoordToScreenY(v75); /*0x4237ff*/
    v77 = (ConvertClass *)v22; /*0x423801*/
    IDA_BYTE1(v77) = IDA_BYTE1(v22) | 0x20; /*0x423806*/
    DrawToSurfaceSHP( /*0x423827*/
      *(int *)&stru_87C374.__pad_579C[22532],
      v105[0],
      v103,
      (unsigned int)aP4,
      (ConvertClass *)&aP0,
      aP5,
      v77,
      0,
      v76 - 2,
      (ConvertClass *)2,
      (ConvertClass *)v83,
      (ConvertClass *)v41,
      0,
      0,
      0,
      0);
    if ( *(unsigned char *)(*((unsigned int *)this + 50) + 882) ) /*0x423832*/
    {
      v78 = *(int16_t *)v103->__pad_6; /*0x423845*/
      v79 = (IUnknown *)(*(int (**)(unsigned int *))(*(unsigned int *)this + 1856))(this); /*0x423857*/
      v81 = -2 - ZCoordToScreenY(v79); /*0x423875*/
      DrawToSurfaceSHP( /*0x42389e*/
        *(int *)&stru_87C374.__pad_579C[22532],
        v105[0],
        v103,
        (unsigned int)aP4 + v78 / 2,
        a2,
        aP5,
        (ConvertClass *)(v22 & 0xFFFFF9F8 | 0x601),
        0,
        v81,
        0,
        (ConvertClass *)0x3E8,
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

  int v2; // eax

  if ( *((unsigned int *)this + 51) ) /*0x424cb0*/
    return 2; /*0x424cba*/
  v2 = *((unsigned int *)this + 50); /*0x424cc0*/
  if ( v2 ) /*0x424cc8*/
    return *(unsigned int *)(v2 + 868); /*0x424cca*/
  else
    return 3; /*0x424cd1*/

}
}
// 0x4253B0
namespace gamemd {
int AnimClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int v3; // edx
  int v4; // eax
  int v5; // ecx

  v3 = aP0->ChargerTurrets[6]; /*0x4253b6*/
  if ( v3 && (v4 = *(unsigned int *)stru_B05488.__pad_58 - 1, *(unsigned int *)stru_B05488.__pad_58 - 1 >= 0) ) /*0x4253c8*/
  {
    v5 = stru_B05488.field_4C + 4 * v4; /*0x4253d0*/
    while ( v3 != *(unsigned int *)(*(unsigned int *)v5 + 780) ) /*0x4253db*/
    {
      --v4; /*0x4253dd*/
      v5 -= 4; /*0x4253de*/
      if ( v4 < 0 ) /*0x4253e3*/
        goto LABEL_6; /*0x4253e3*/
    }
    aP0->ChargerTurrets[7] = v4; /*0x425404*/
  }
  else
  {
LABEL_6:
    aP0->ChargerTurrets[7] = -1; /*0x4253e5*/
  }
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x4253ff*/

}
}
// 0x428DE0
namespace gamemd {
void AnimClass::FreeRenderBuffer()
{

  if ( *((unsigned char *)this + 862) && *((unsigned int *)this + 41) ) /*0x428ded*/
  {
    if ( *((unsigned char *)this + 863) ) /*0x428df7*/
    {
      this->Debug::Log(); /*0x428e0a*/
      RA2_OPDEL(*(void **)((char *)this + 164)); /*0x428e16*/
      *((unsigned int *)this + 41) = 0; /*0x428e1e*/
      *((unsigned char *)this + 168) = 0; /*0x428e28*/
    }
  }

}
}
// 0x448260
namespace gamemd {
BuildingTypeClass * * AnimClass::drawFrame()
{

  int result; // eax
  int v2; // ebp
  int v3; // edi
  int v5; // ecx
  BuildingTypeClass *v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  BuildingTypeClass *v11; // edx
  int v12; // edx
  int v13; // edi
  AbstractClass *v14; // ecx
  int v15; // eax
  BuildingTypeClass *v16; // ecx
  AbstractClass *v17; // ecx
  int v18; // ecx
  int64_t v19; // rax
  BuildingTypeClass *v20; // edx
  LightSourceClass *v21; // ecx
  int v22; // edi
  unsigned char **v23; // ebp
  int v24; // eax
  int Member; // eax
  unsigned char *v26; // edi
  unsigned int *v27; // ebp
  unsigned int *v28; // eax
  IUnknown *v29; // eax
  int v30; // eax
  char v31; // bl
  AbstractClass *eax57; // eax
  AbstractClass *v32; // edi
  BuildingClass *v33; // eax
  int ecx66; // ecx
  FactoryClass *v35; // ecx
  FactoryClass *v36; // ecx
  AbstractClass *v37; // ebx
  int v39; // eax
  int v40; // ecx
  unsigned int *v41; // edx
  int v42; // eax
  int v43; // eax
  int nextArrayIndex; // ecx
  int v45; // ecx
  int abstractFlags; // edx
  int v47; // eax
  int v48; // ecx
  int v49; // ecx
  int v50; // edx
  int v51; // eax
  int v52; // ecx
  int ecx88; // ecx
  BuildingTypeClass *v53; // eax
  int (**NeedsSaveOrLink)(void **, AbstractClass **); // eax
  int v56; // eax
  int v57; // ecx
  int v58; // ecx
  int v59; // edx
  int v60; // eax
  int v61; // ecx
  int ecx99; // ecx
  BuildingTypeClass *v62; // eax
  int v64; // eax
  int v65; // eax
  int v66; // ecx
  int v67; // ecx
  int (**v68)(void **, AbstractClass **); // edx
  int v69; // eax
  int v70; // ecx
  int v71; // ecx
  int v72; // edx
  int v73; // eax
  int v74; // ecx
  int v75; // ecx
  int v76; // edx
  int v77; // eax
  int v78; // ecx
  int v79; // ecx
  int (**v80)(void **, AbstractClass **); // edx
  int v81; // eax
  int v82; // ecx
  int v83; // ecx
  int (**v84)(void **, AbstractClass **, int, int); // eax
  int v85; // eax
  int v86; // ecx
  int v87; // ecx
  int ecx134; // ecx
  AbstractClass *v88; // eax
  int ecx138; // ecx
  AbstractClass *v90; // eax
  BuildingTypeClass *v91; // eax
  BuildingTypeClass *v92; // eax
  char v94; // cl
  BuildingTypeClass *vfptr0; // edx
  HouseClass *edi150; // edi
  BuildingTypeClass *v96; // eax
  char cl153; // cl
  AbstractClass *v98; // eax
  BuildingTypeClass *v99; // edx
  int v101; // eax
  int v102; // ecx
  BuildingTypeClass *v103; // ebp
  int eax175; // eax
  BuildingTypeClass *v104; // edi
  int v106; // eax
  int v107; // ecx
  unsigned int *v108; // edx
  int v109; // ebp
  int v110; // ecx
  int v111; // eax
  int v112; // eax
  int v113; // edx
  int v114; // ecx
  int v115; // eax
  int v116; // eax
  int edx197; // edx
  BuildingTypeClass *v117; // eax
  int v119; // ecx
  int v120; // eax
  int v121; // eax
  int v122; // edx
  int v123; // ecx
  int v124; // eax
  int v125; // eax
  int edx212; // edx
  BuildingTypeClass *v126; // eax
  int v128; // ecx
  int v129; // eax
  int v130; // eax
  int v131; // edx
  int v132; // ecx
  int v133; // eax
  int v134; // eax
  int v135; // edx
  int v136; // ecx
  int v137; // eax
  int v138; // eax
  int v139; // edx
  int v140; // ecx
  int v141; // eax
  int v142; // eax
  int v143; // edx
  int v144; // ecx
  int v145; // eax
  int v146; // eax
  int v147; // edx
  int v148; // ecx
  int v149; // eax
  int v150; // eax
  int v151; // edx
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
  int v162; // eax
  char i; // al
  int v164; // ecx
  IUnknown *v165; // eax
  int v166; // ecx
  int v167; // eax
  int v168; // eax
  int v169; // edx
  int v170; // [esp+A4h] [ebp-60h]
  int v171; // [esp+A8h] [ebp-5Ch]
  char v172[8]; // [esp+B4h] [ebp-50h] BYREF
  int v173; // [esp+BCh] [ebp-48h] BYREF
  int v174; // [esp+C0h] [ebp-44h]
  int v175; // [esp+C4h] [ebp-40h]
  int v176[3]; // [esp+C8h] [ebp-3Ch] BYREF
  int v177[3]; // [esp+D4h] [ebp-30h] BYREF
  unsigned int v178[3]; // [esp+E0h] [ebp-24h] BYREF
  void **v179; // [esp+ECh] [ebp-18h] BYREF
  void *Block; // [esp+F0h] [ebp-14h]
  int v181; // [esp+F4h] [ebp-10h]
  int v182; // [esp+F8h] [ebp-Ch]
  BuildingClass *v183; // [esp+FCh] [ebp-8h]
  int v184; // [esp+100h] [ebp-4h]
  void *v185; // [esp+108h] [ebp+4h]
  AbstractClass *aP1; // [esp+10Ch] [ebp+8h] BYREF
  HouseClass *v187; // [esp+110h] [ebp+Ch]

  if ( v185 == *((void **)this + 135) )
  {
    IDA_LOBYTE(result) = 0;
  }
  else
  {
    v5 = *((unsigned int *)this + 14);
    if ( v5 && !*(unsigned char *)(*((unsigned int *)this + 328) + 5499) )
      ObjectClass::CleanupAudioAndRefs(v5);
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5831) )
      *((unsigned char *)v185 + 22264) = 1;
    if ( *(unsigned char *)(*(unsigned int *)(*((unsigned int *)this + 135) + 52) + 422) )
    {
      v6 = (BuildingTypeClass *)*((unsigned int *)this + 328);
      if ( v6->ProduceCashStartup )
      {
        HouseClass::AddPower(v185, (IUnknown *)v6->ProduceCashStartup);
        v7 = *(unsigned int *)(*((unsigned int *)this + 328) + 5472);
        *((unsigned int *)this + 436) = *(unsigned int *)&HouseClass_Player.__pad_5568[23248];
        *((unsigned int *)this + 437) = v174;
        *((unsigned int *)this + 438) = v7;
      }
    }
    v8 = *((unsigned int *)this + 132);
    v171 = v2;
    v170 = v3;
    v9 = 1 << *(unsigned int *)(*((unsigned int *)v185 + 13) + 184);
    if ( (v8 & v9) != 0 )
    {
      v10 = v8 - v9;
      v11 = (BuildingTypeClass *)*((unsigned int *)this + 328);
      *((unsigned int *)this + 132) = v10;
      if ( v11->? )
      {
        v12 = 0;
        *(unsigned int *)(*((unsigned int *)this + 135) + 21732) = 0;
        v13 = *(unsigned int *)(*((unsigned int *)this + 135) + 120);
        if ( v13 > 0 )
        {
          do
          {
            v14 = (AbstractClass *)*((unsigned int *)this + 135);
            v15 = *(unsigned int *)(*(unsigned int *)v14[3].__pad_0 + 4 * v12);
            if ( v15 && !*(unsigned char *)(v15 + 129) && *(unsigned char *)(*(unsigned int *)(v15 + 1312) + 5796) )
              v14[603].nextArrayIndex |= *(unsigned int *)(v15 + 528);
            ++v12;
          }
          while ( v12 < v13 );
        }
        MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2);
      }
    }
    v16 = (BuildingTypeClass *)*((unsigned int *)this + 328);
    *((unsigned char *)this + 979) = 0;
    if ( v16->LaserFencePost )
      BuildingClass::DemolishBridgeCheck((int *)this, 0);
    if ( (uint8_t)House::IsHumanPlayer(*((void **)this + 135)) || (uint8_t)House::IsHumanPlayer(v185) )
    {
      if ( !*(unsigned char *)(*((unsigned int *)v185 + 13) + 422) && (unsigned char)aP1 )
      {
        if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5458) )
        {
          v17 = (AbstractClass *)*((unsigned int *)this + 135);
          if ( v17 != (AbstractClass *)v185 )
          {
            if ( (uint8_t)House::IsHumanPlayer((void *)v17) )
              VoxClass::FindAndPlay(aEvaTechbuildin, -1, -1);
            if ( (uint8_t)House::IsHumanPlayer(v185) )
            {
              if ( (uint8_t)House::IsHumanPlayer(v185) )
              {
                v18 = *(unsigned int *)(*((unsigned int *)this + 328) + 5460);
                if ( v18 != -1 )
                  UpdateThemeManager(v18, -1, -1);
              }
            }
          }
        }
        else
        {
          v19 = ((int64_t (*)(void *, AbstractClass **))*(unsigned int *)(*(unsigned int *)this + 440))(this, &aP1);
          if ( CreateTriggerClassIfFarEnough((IUnknown *)0xA, IDA_SHIDWORD(v19), *(IUnknown **)v19) )
            VoxClass::FindAndPlay(aEvaBuildingcap, -1, -1);
        }
      }
      stru_87C374.__pad_14B0[13520] = 1;
      MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 0);
    }
    v20 = (BuildingTypeClass *)*((unsigned int *)this + 328);
    *((unsigned char *)this + 128) = 1;
    *((unsigned char *)this + 1740) = 1;
    if ( v20->NeedsEngineer )
    {
      v21 = (LightSourceClass *)*((unsigned int *)this + 389);
      *((unsigned char *)this + 1770) = 1;
      if ( v21 )
        Trigger::EnableOnce(v21, 0);
      if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5822) )
        BuildingClass::RepairPlacement(this, 0);
      v22 = 0;
      v23 = (unsigned char **)((char *)this + 1372);
      do
      {
        if ( *(unsigned char *)(v22 + *((unsigned int *)this + 328) + 3980) && *v23 )
          VtableStub::Method_425270(*v23);
        v22 += 68;
        ++v23;
      }
      while ( v22 < 1428 );
    }
    if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068] == 4
      && !*(unsigned char *)((*(int (**)(void *, int, int))(*(unsigned int *)this + 132))(this, v170, v171) + 3231) )
    {
      HouseClass::IncrementStat((unsigned int *)v185 + 4314, *(unsigned int *)(*((unsigned int *)this + 328) + 3576));
    }
    VectorClass_ReestablishPtr::Construct(&v179, 0, 0);
    v24 = *((unsigned int *)this + 58);
    v179 = &DynamicVectorClass<Reestablish *>::`vftable';
    v184 = 10;
    v183 = 0;
    aP1 = 0;
    if ( v24 > 0 )
    {
      do
      {
        Member = Team::GetMember(this, aP1);
        v26 = (unsigned char *)Member;
        if ( Member )
        {
          if ( (*(unsigned char *)(Member + 20) & 4) != 0 )
          {
            if ( (*(int (**)(void *, int, int))(*(unsigned int *)this + 632))(this, 19, Member) == 1 )
            {
              if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5821)
                || (v27 = (unsigned int *)(*(int (**)(void *, int *, unsigned char *))(*(unsigned int *)this + 168))(
                                      this,
                                      v176,
                                      v26),
                    v28 = (unsigned int *)(*(int (**)(unsigned char *, int *))(*(unsigned int *)v26 + 72))(v26, v177),
                    v29 = Coord::Subtract(
                            v178,
                            (IUnknown *)(*v28 - *v27),
                            (IUnknown *)(v28[1] - v27[1]),
                            (IUnknown *)(v28[2] - v27[2])),
                    v173 = v29->field_0,
                    v174 = v29->field_4,
                    v175 = v29->field_8,
                    Coord::Length(&v173),
                    v30 < 64) )
              {
                v31 = v26[1048];
                (*(void (**)(unsigned char *, void *, int))(*(unsigned int *)v26 + 980))(v26, v185, 1);
                eax57 = (AbstractClass *)RA2_OPNEW(8u);
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
                if ( (int)v183 < v181
                  || (IDA_BYTE1(v182) || !v181)
                  && v184 > 0
                  && ((uint8_t (*)(void ***, int, unsigned int))v179[2])(&v179, v181 + v184, 0) )
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
          (*(void (**)(void *, int, unsigned char *))(*(unsigned int *)this + 632))(this, 23, v26);
          (*(void (**)(void *, int, unsigned char *))(*(unsigned int *)this + 632))(this, 3, v26);
        }
LABEL_66:
        ecx66 = *((unsigned int *)this + 58);
        aP1 = (AbstractClass *)((char *)aP1 + 1);
      }
      while ( (int)aP1 < ecx66 );
    }
    v35 = (FactoryClass *)*((unsigned int *)this + 329);
    if ( v35 )
    {
      FactoryClass::AbandonProduction((int)v35);
      v36 = (FactoryClass *)*((unsigned int *)this + 329);
      if ( v36 )
        (*(void (**)(FactoryClass *, int))(*(unsigned int *)v36->__pad_0 + 32))(v36, 1);
      *((unsigned int *)this + 329) = 0;
    }
    BuildingClass::DecrementTypeCounter(*((unsigned int **)this + 135), (BuildingClass *)this);
    v37 = (AbstractClass *)*((unsigned int *)this + 135);
    ScriptAction::GetWaypointCoords(v172, (IUnknown *)this);
    *((unsigned char *)this + 1763) = 1;
    v39 = 0;
    v40 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2236);
    if ( v40 > 0 )
    {
      v41 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2224);
      while ( *v41 != *((unsigned int *)this + 328) )
      {
        ++v39;
        ++v41;
        if ( v39 >= v40 )
          goto LABEL_80;
      }
      v42 = *(unsigned int *)&v37[2].__pad_0[8];
      aP1 = (AbstractClass *)this;
      v43 = (*(int (**)(char *, AbstractClass **))(v42 + 16))(&v37[2].__pad_0[8], &aP1);
      if ( v43 != -1 )
      {
        nextArrayIndex = v37[2].nextArrayIndex;
        if ( v43 < nextArrayIndex )
        {
          v45 = nextArrayIndex - 1;
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
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5801) )
    {
      abstractFlags = v37[3].abstractFlags;
      aP1 = (AbstractClass *)this;
      v47 = (*(int (**)(int *, AbstractClass **))(abstractFlags + 16))(&v37[3].abstractFlags, &aP1);
      if ( v47 != -1 )
      {
        v48 = *(unsigned int *)v37[4].__pad_0;
        if ( v47 < v48 )
        {
          v49 = v48 - 1;
          for ( *(unsigned int *)v37[4].__pad_0 = v49;
                v47 < *(unsigned int *)v37[4].__pad_0;
                *(unsigned int *)(v37[3].nextArrayIndex + 4 * v47 - 4) = *(unsigned int *)(v37[3].nextArrayIndex + 4 * v47) )
          {
            ++v47;
          }
        }
      }
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5805) )
    {
      v50 = *(unsigned int *)&v37[4].__pad_0[8];
      aP1 = (AbstractClass *)this;
      v51 = (*(int (**)(char *, AbstractClass **))(v50 + 16))(&v37[4].__pad_0[8], &aP1);
      if ( v51 != -1 )
      {
        v52 = v37[4].nextArrayIndex;
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
    v53 = (BuildingTypeClass *)*((unsigned int *)this + 328);
    if ( v53->UnitAbsorb || v53->InfantryAbsorb )
    {
      NeedsSaveOrLink = (int (**)(void **, AbstractClass **))v37[4].NeedsSaveOrLink;
      aP1 = (AbstractClass *)this;
      v56 = NeedsSaveOrLink[4](&v37[4].NeedsSaveOrLink, &aP1);
      if ( v56 != -1 )
      {
        v57 = *(unsigned int *)&v37[5].__pad_0[12];
        if ( v56 < v57 )
        {
          v58 = v57 - 1;
          for ( *(unsigned int *)&v37[5].__pad_0[12] = v58;
                v56 < *(unsigned int *)&v37[5].__pad_0[12];
                *(unsigned int *)(*(unsigned int *)v37[5].__pad_0 + 4 * v56 - 4) = *(unsigned int *)(*(unsigned int *)v37[5].__pad_0 + 4 * v56) )
          {
            ++v56;
          }
        }
      }
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5803) )
    {
      v59 = v37[5].abstractFlags;
      aP1 = (AbstractClass *)this;
      v60 = (*(int (**)(int *, AbstractClass **))(v59 + 16))(&v37[5].abstractFlags, &aP1);
      if ( v60 != -1 )
      {
        v61 = *(unsigned int *)v37[6].__pad_0;
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
    v62 = (BuildingTypeClass *)*((unsigned int *)this + 328);
    if ( v62->CanBeOccupied )
    {
      if ( *(int *)&v62->DebrisTypes[800] > -1 )
      {
        v64 = *(unsigned int *)&v37[6].__pad_0[8];
        aP1 = (AbstractClass *)this;
        v65 = (*(int (**)(char *, AbstractClass **))(v64 + 16))(&v37[6].__pad_0[8], &aP1);
        if ( v65 != -1 )
        {
          v66 = v37[6].nextArrayIndex;
          if ( v65 < v66 )
          {
            v67 = v66 - 1;
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
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5804) )
    {
      v68 = (int (**)(void **, AbstractClass **))v37[6].NeedsSaveOrLink;
      aP1 = (AbstractClass *)this;
      v69 = v68[4](&v37[6].NeedsSaveOrLink, &aP1);
      if ( v69 != -1 )
      {
        v70 = *(unsigned int *)&v37[7].__pad_0[12];
        if ( v69 < v70 )
        {
          v71 = v70 - 1;
          for ( *(unsigned int *)&v37[7].__pad_0[12] = v71;
                v69 < *(unsigned int *)&v37[7].__pad_0[12];
                *(unsigned int *)(*(unsigned int *)v37[7].__pad_0 + 4 * v69 - 4) = *(unsigned int *)(*(unsigned int *)v37[7].__pad_0 + 4 * v69) )
          {
            ++v69;
          }
        }
      }
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5808) )
    {
      v72 = v37[7].abstractFlags;
      aP1 = (AbstractClass *)this;
      v73 = (*(int (**)(int *, AbstractClass **))(v72 + 16))(&v37[7].abstractFlags, &aP1);
      if ( v73 != -1 )
      {
        v74 = *(unsigned int *)v37[8].__pad_0;
        if ( v73 < v74 )
        {
          v75 = v74 - 1;
          for ( *(unsigned int *)v37[8].__pad_0 = v75;
                v73 < *(unsigned int *)v37[8].__pad_0;
                *(unsigned int *)(v37[7].nextArrayIndex + 4 * v73 - 4) = *(unsigned int *)(v37[7].nextArrayIndex + 4 * v73) )
          {
            ++v73;
          }
        }
      }
    }
    if ( *(int *)(*((unsigned int *)this + 328) + 5900) > 0 )
    {
      v76 = *(unsigned int *)&v37[8].__pad_0[8];
      aP1 = (AbstractClass *)this;
      v77 = (*(int (**)(char *, AbstractClass **))(v76 + 16))(&v37[8].__pad_0[8], &aP1);
      if ( v77 != -1 )
      {
        v78 = v37[8].nextArrayIndex;
        if ( v77 < v78 )
        {
          v79 = v78 - 1;
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
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5837) )
    {
      v80 = (int (**)(void **, AbstractClass **))v37[8].NeedsSaveOrLink;
      aP1 = (AbstractClass *)this;
      v81 = v80[4](&v37[8].NeedsSaveOrLink, &aP1);
      if ( v81 != -1 )
      {
        v82 = *(unsigned int *)&v37[9].__pad_0[12];
        if ( v81 < v82 )
        {
          v83 = v82 - 1;
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
    v84 = (int (**)(void **, AbstractClass **, int, int))v37[2].NeedsSaveOrLink;
    aP1 = (AbstractClass *)this;
    v85 = v84[4](&v37[2].NeedsSaveOrLink, &aP1, v170, v171);
    if ( v85 != -1 )
    {
      v86 = *(unsigned int *)&v37[3].__pad_0[12];
      if ( v85 < v86 )
      {
        v87 = v86 - 1;
        for ( *(unsigned int *)&v37[3].__pad_0[12] = v87;
              v85 < *(unsigned int *)&v37[3].__pad_0[12];
              *(unsigned int *)(*(unsigned int *)v37[3].__pad_0 + 4 * v85 - 4) = *(unsigned int *)(*(unsigned int *)v37[3].__pad_0 + 4 * v85) )
        {
          ++v85;
        }
      }
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5836) )
      --*(unsigned int *)&v37[594].__pad_0[4];
    ecx134 = *(unsigned int *)(*((unsigned int *)this + 328) + 5476);
    if ( ecx134 )
    {
      if ( *((unsigned char *)this + 1764) )
      {
        *(unsigned int *)(*((unsigned int *)this + 135) + 356) -= ecx134;
        v88 = (AbstractClass *)*((unsigned int *)this + 135);
        if ( (int)v88[9].NeedsSaveOrLink < 0 )
          v88[9].NeedsSaveOrLink = 0;
      }
    }
    ecx138 = *(unsigned int *)(*((unsigned int *)this + 328) + 5480);
    if ( ecx138 )
    {
      if ( *((unsigned char *)this + 1764) )
      {
        *(unsigned int *)(*((unsigned int *)this + 135) + 360) -= ecx138;
        v90 = (AbstractClass *)*((unsigned int *)this + 135);
        if ( *(int *)v90[10].__pad_0 < 0 )
          *(unsigned int *)v90[10].__pad_0 = 0;
      }
    }
    v91 = (BuildingTypeClass *)*((unsigned int *)this + 328);
    if ( v91->Helipad )
      *(unsigned int *)&v37[20].__pad_0[4] -= v91->?;
    v92 = (BuildingTypeClass *)*((unsigned int *)this + 328);
    if ( v92->CloakGenerator )
    {
      v94 = *((unsigned char *)this + 1772);
      *((unsigned char *)this + 1771) = -1;
      if ( !v94 )
        *((unsigned char *)this + 1772) = v92->CloakRadiusInCells;
      vfptr0 = *(BuildingTypeClass **)this;
      *((unsigned char *)this + 128) = 1;
      *((unsigned char *)this + 1772) = 1;
      (*(void (**)(void *, int))&vfptr0->DebrisTypes[252])(this, 1);
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 3281) )
      (*(void (**)(void *))(*(unsigned int *)this + 1048))(this);
    (*(void (**)(void *, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)this + 1164))(this, 0, 0, 0, 0);
    edi150 = v187;
    TechnoClass::ProcessCapture((int *)this, (int)v187, v187, 1);
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5831) )
    {
      if ( (*(uint8_t (**)(void *))(*(unsigned int *)this + 848))(this) )
      {
        v96 = (BuildingTypeClass *)*((unsigned int *)this + 328);
        if ( v96->CloakGenerator )
        {
          cl153 = *((unsigned char *)this + 1772);
          *((unsigned char *)this + 1771) = 1;
          if ( cl153 == v96->CloakRadiusInCells )
            *((unsigned char *)this + 1772) = 0;
          *((unsigned char *)this + 128) = 1;
        }
      }
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 3281)
      && (*(uint8_t (**)(void *))(*(unsigned int *)this + 848))(this) )
    {
      (*(void (**)(void *))(*(unsigned int *)this + 1044))(this);
    }
    AnimClass::updateAnimation((int)this, 0);
    v37[603].abstractFlags = (int)this;
    BuildingClass::CalcExitCoords((int *)v37->__pad_0);
    BuildingClass::CalcExitCoords(*((int **)this + 135));
    v98 = (AbstractClass *)*((unsigned int *)this + 135);
    if ( (void *)v98[603].abstractFlags == this )
      v98[603].abstractFlags = 0;
    if ( (uint8_t)House::IsHumanPlayer((void *)v37) && *(unsigned char *)(*((unsigned int *)this + 328) + 5817) )
    {
      *(unsigned int *)&stru_87C374.__pad_14B0[12648] = 0;
      *(unsigned int *)&stru_87C374.__pad_14B0[12652] = 0;
      *(unsigned int *)&stru_87C374.__pad_14B0[12656] = -1;
      Mouse::SetBounds((int)&stru_87C374.__pad_14B0[8132], 0);
    }
    BuildingClass::IncrementOccupantTypeCounter(*((unsigned int **)this + 135), (BuildingClass *)this);
    v99 = *(BuildingTypeClass **)this;
    *((unsigned char *)this + 1768) = 0;
    (*(void (**)(void *, int))&v99->DebrisTypes[456])(this, 1);
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5822) )
    {
      if ( !*(unsigned int *)&HouseClass_Player.__pad_5568[21752] )
      {
        if ( !*((unsigned char *)this + 144)
          || *((unsigned char *)this + 129)
          || (BuildingClass::DemolishBridge(this),
              BuildingClass::DemolishBridge(this),
              BuildingClass::DemolishBridge(this),
              BuildingClass::DemolishBridge(this),
              BuildingClass::RepairPlacement(this, 1),
              !*(unsigned int *)&HouseClass_Player.__pad_5568[21752]) )
        {
          if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5822) )
            *((unsigned int *)this + 390) = 0;
        }
      }
    }
    if ( (uint8_t)House::IsHumanPlayer(*((void **)this + 135)) )
    {
      (*(void (**)(void *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)this + 1160))(
        this,
        0,
        0,
        0,
        0,
        0);
      MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 1);
    }
    v101 = 1 << *(unsigned int *)(edi150->relatedTagsCapacity + 184);
    v102 = *((unsigned int *)this + 132);
    if ( (v102 & v101) != 0 )
      *((unsigned int *)this + 132) = v102 & ~v101;
    v103 = (BuildingTypeClass *)(*(int (**)(void *))(*(unsigned int *)this + 484))(this);
    eax175 = (*(int (**)(void *))(*(unsigned int *)this + 444))(this);
    v104 = (BuildingTypeClass *)(*(int (**)(void *, unsigned int))(*(unsigned int *)this + 1124))(
                                  this,
                                  *(int16_t *)(eax175 + 266));
    if ( (*(uint8_t (**)(void *))(*(unsigned int *)this + 352))(this)
      || *((unsigned int *)this + 165) && *(unsigned int *)(*((unsigned int *)this + 165) + 80) == IsObjectTypeBuildingType((int)this) )
    {
      IDA_LOWORD(v104) = (uint16_t)Techno::StartInvulnerability(this, v104);
    }
    *((unsigned short *)this + 896) = (unsigned short)v104;
    BuildingClass::SyncCrateVisuals((char *)this, v103, (uint16_t)v104);
    BuildingClass::SetConnectedBuildingMission((int *)this, (BuildingClass *)*((char *)this + 1773));
    v106 = 0;
    v107 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2236);
    if ( v107 <= 0 )
    {
LABEL_183:
      v109 = (int)v185;
    }
    else
    {
      v108 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 2224);
      while ( *v108 != *((unsigned int *)this + 328) )
      {
        ++v106;
        ++v108;
        if ( v106 >= v107 )
          goto LABEL_183;
      }
      v109 = (int)v185;
      v166 = *((unsigned int *)v185 + 22);
      if ( *((unsigned int *)v185 + 24) < v166
        || (*((unsigned char *)v185 + 93) || !v166)
        && (v167 = *((unsigned int *)v185 + 25), v167 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*((unsigned int *)v185 + 20) + 8))(
             (int)v185 + 80,
             v166 + v167,
             0) )
      {
        v168 = *((unsigned int *)v185 + 24);
        v169 = *((unsigned int *)v185 + 21);
        *((unsigned int *)v185 + 24) = v168 + 1;
        *(unsigned int *)(v169 + 4 * v168) = this;
      }
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5801) )
    {
      v110 = *(unsigned int *)(v109 + 136);
      if ( *(unsigned int *)(v109 + 144) < v110
        || (*(unsigned char *)(v109 + 141) || !v110)
        && (v111 = *(unsigned int *)(v109 + 148), v111 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(v109 + 128) + 8))(
             v109 + 128,
             v110 + v111,
             0) )
      {
        v112 = *(unsigned int *)(v109 + 144);
        v113 = *(unsigned int *)(v109 + 132);
        *(unsigned int *)(v109 + 144) = v112 + 1;
        *(unsigned int *)(v113 + 4 * v112) = this;
      }
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5805) )
    {
      v114 = *(unsigned int *)(v109 + 160);
      if ( *(unsigned int *)(v109 + 168) < v114
        || (*(unsigned char *)(v109 + 165) || !v114)
        && (v115 = *(unsigned int *)(v109 + 172), v115 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(v109 + 152) + 8))(
             v109 + 152,
             v114 + v115,
             0) )
      {
        v116 = *(unsigned int *)(v109 + 168);
        edx197 = *(unsigned int *)(v109 + 156);
        *(unsigned int *)(v109 + 168) = v116 + 1;
        *(unsigned int *)(edx197 + 4 * v116) = this;
      }
    }
    v117 = (BuildingTypeClass *)*((unsigned int *)this + 328);
    if ( v117->UnitAbsorb || v117->InfantryAbsorb )
    {
      v119 = *(unsigned int *)(v109 + 184);
      if ( *(unsigned int *)(v109 + 192) < v119
        || (*(unsigned char *)(v109 + 189) || !v119)
        && (v120 = *(unsigned int *)(v109 + 196), v120 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(v109 + 176) + 8))(
             v109 + 176,
             v119 + v120,
             0) )
      {
        v121 = *(unsigned int *)(v109 + 192);
        v122 = *(unsigned int *)(v109 + 180);
        *(unsigned int *)(v109 + 192) = v121 + 1;
        *(unsigned int *)(v122 + 4 * v121) = this;
      }
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5803) )
    {
      v123 = *(unsigned int *)(v109 + 208);
      if ( *(unsigned int *)(v109 + 216) < v123
        || (*(unsigned char *)(v109 + 213) || !v123)
        && (v124 = *(unsigned int *)(v109 + 220), v124 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(v109 + 200) + 8))(
             v109 + 200,
             v123 + v124,
             0) )
      {
        v125 = *(unsigned int *)(v109 + 216);
        edx212 = *(unsigned int *)(v109 + 204);
        *(unsigned int *)(v109 + 216) = v125 + 1;
        *(unsigned int *)(edx212 + 4 * v125) = this;
      }
    }
    v126 = (BuildingTypeClass *)*((unsigned int *)this + 328);
    if ( v126->CanBeOccupied && *(int *)&v126->DebrisTypes[800] > -1 )
    {
      v128 = *(unsigned int *)(v109 + 232);
      if ( *(unsigned int *)(v109 + 240) < v128
        || (*(unsigned char *)(v109 + 237) || !v128)
        && (v129 = *(unsigned int *)(v109 + 244), v129 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(v109 + 224) + 8))(
             v109 + 224,
             v128 + v129,
             0) )
      {
        v130 = *(unsigned int *)(v109 + 240);
        v131 = *(unsigned int *)(v109 + 228);
        *(unsigned int *)(v109 + 240) = v130 + 1;
        *(unsigned int *)(v131 + 4 * v130) = this;
      }
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5804) )
    {
      v132 = *(unsigned int *)(v109 + 256);
      if ( *(unsigned int *)(v109 + 264) < v132
        || (*(unsigned char *)(v109 + 261) || !v132)
        && (v133 = *(unsigned int *)(v109 + 268), v133 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(v109 + 248) + 8))(
             v109 + 248,
             v132 + v133,
             0) )
      {
        v134 = *(unsigned int *)(v109 + 264);
        v135 = *(unsigned int *)(v109 + 252);
        *(unsigned int *)(v109 + 264) = v134 + 1;
        *(unsigned int *)(v135 + 4 * v134) = this;
      }
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5808) )
    {
      v136 = *(unsigned int *)(v109 + 280);
      if ( *(unsigned int *)(v109 + 288) < v136
        || (*(unsigned char *)(v109 + 285) || !v136)
        && (v137 = *(unsigned int *)(v109 + 292), v137 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(v109 + 272) + 8))(
             v109 + 272,
             v137 + v136,
             0) )
      {
        v138 = *(unsigned int *)(v109 + 288);
        v139 = *(unsigned int *)(v109 + 276);
        *(unsigned int *)(v109 + 288) = v138 + 1;
        *(unsigned int *)(v139 + 4 * v138) = this;
      }
    }
    if ( *(int *)(*((unsigned int *)this + 328) + 5900) > 0 )
    {
      v140 = *(unsigned int *)(v109 + 304);
      if ( *(unsigned int *)(v109 + 312) < v140
        || (*(unsigned char *)(v109 + 309) || !v140)
        && (v141 = *(unsigned int *)(v109 + 316), v141 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(v109 + 296) + 8))(
             v109 + 296,
             v141 + v140,
             0) )
      {
        v142 = *(unsigned int *)(v109 + 312);
        v143 = *(unsigned int *)(v109 + 300);
        *(unsigned int *)(v109 + 312) = v142 + 1;
        *(unsigned int *)(v143 + 4 * v142) = this;
      }
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5837) )
    {
      v144 = *(unsigned int *)(v109 + 328);
      if ( *(unsigned int *)(v109 + 336) < v144
        || (*(unsigned char *)(v109 + 333) || !v144)
        && (v145 = *(unsigned int *)(v109 + 340), v145 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(v109 + 320) + 8))(
             v109 + 320,
             v145 + v144,
             0) )
      {
        v146 = *(unsigned int *)(v109 + 336);
        v147 = *(unsigned int *)(v109 + 324);
        *(unsigned int *)(v109 + 336) = v146 + 1;
        *(unsigned int *)(v147 + 4 * v146) = this;
      }
      HouseClass::CalculateCostMultipliers((float *)v109);
    }
    v148 = *(unsigned int *)(v109 + 112);
    if ( *(unsigned int *)(v109 + 120) < v148
      || (*(unsigned char *)(v109 + 117) || !v148)
      && (v149 = *(unsigned int *)(v109 + 124), v149 > 0)
      && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(v109 + 104) + 8))(v109 + 104, v149 + v148, 0) )
    {
      v150 = *(unsigned int *)(v109 + 120);
      v151 = *(unsigned int *)(v109 + 108);
      *(unsigned int *)(v109 + 120) = v150 + 1;
      *(unsigned int *)(v151 + 4 * v150) = this;
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 328) + 5836) )
      ++*(unsigned int *)(*((unsigned int *)this + 135) + 21388);
    ecx258 = *(unsigned int *)(*((unsigned int *)this + 328) + 5476);
    if ( ecx258 )
      *(unsigned int *)(*((unsigned int *)this + 135) + 356) += ecx258;
    v152 = (BuildingTypeClass *)*((unsigned int *)this + 328);
    UnitsGainSelfHeal = v152->UnitsGainSelfHeal;
    if ( UnitsGainSelfHeal )
      *(unsigned int *)(*((unsigned int *)this + 135) + 360) += UnitsGainSelfHeal;
    v154 = (BuildingTypeClass *)*((unsigned int *)this + 328);
    if ( v154->Helipad )
      *(unsigned int *)(*((unsigned int *)this + 135) + 724) += v154->?;
    v155 = (BuildingTypeClass *)*((unsigned int *)this + 328);
    v156 = (AbstractClass *)v155->Factory[0];
    if ( v156 )
    {
      IDA_LOBYTE(v152) = v155->DebrisTypes[2490];
      HouseClass::UpdateProduction((int)v37, (IUnknown *)v156, (AbstractClass *)v152, 0);
      v157 = (BuildingTypeClass *)*((unsigned int *)this + 328);
      IDA_LOBYTE(v159) = v157->DebrisTypes[2490];
      HouseClass::UpdateProduction(v109, (IUnknown *)v157->Factory[0], v159, 0);
    }
    edi266 = 0;
    if ( (int)v183 > 0 )
    {
      v160 = (CCINIClass *)Block;
      do
      {
        (*(void (**)(void *, int, unsigned int))(*(unsigned int *)this + 632))(
          this,
          2,
          **(unsigned int **)&v160->__pad_0[4 * edi266]);
        v160 = (CCINIClass *)Block;
        if ( *(unsigned char *)(*((unsigned int *)Block + edi266) + 4) )
        {
          *((unsigned char *)this + 1048) = 1;
          *(unsigned char *)(**(unsigned int **)&v160->__pad_0[4 * edi266] + 1048) = 1;
          v160 = (CCINIClass *)Block;
        }
        ++edi266;
      }
      while ( edi266 < (int)v183 );
    }
    if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068] )
    {
      if ( !(uint8_t)House::IsCurrentPlayer((void *)v109) )
      {
        v162 = *((unsigned int *)this + 83);
        if ( v162 != v109 && !*(unsigned char *)(*(unsigned int *)(v162 + 52) + 422) )
        {
          for ( i = *((unsigned char *)this + 1794); i > 0; i = *((unsigned char *)this + 1794) )
          {
            v164 = *((unsigned int *)this + i + 378);
            v165 = (IUnknown *)(*(int (**)(int, unsigned int, int))(*(unsigned int *)v164 + 184))(
                                 v164,
                                 *((unsigned int *)this + 135),
                                 1);
            HouseClass::AddPower(*((unsigned int **)this + 135), v165);
            BuildingClass::ClearSuperWeaponAnim((int)this);
            *(unsigned char *)(*((unsigned int *)this + 135) + 22392) = 1;
            *(unsigned char *)(*((unsigned int *)this + 135) + 22393) = 1;
          }
          (*(void (**)(void *, int))(*(unsigned int *)this + 416))(this, 1);
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
    (*(void (**)(unsigned int, unsigned int, unsigned int))(*(unsigned int *)a1[3] + 288))(a1[3], 0, 0); /*0x729a43*/
    v10 = (*(int (**)(unsigned int))(*(unsigned int *)a1[3] + 132))(a1[3]); /*0x729a4e*/
    v11 = Math::RoundToInt(64.0 / (double)*(int *)(v10 + 1820)); /*0x729a60*/
    a1[10] = g_CurrentFrame; /*0x729a72*/
    a1[11] = v17; /*0x729a78*/
    v12 = a1[3]; /*0x729a7b*/
    a1[12] = v11; /*0x729a7e*/
    a1[13] = v11; /*0x729a81*/
    result = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)v12 + 1348))(v12, 0, 0); /*0x729a86*/
    a1[6] = 6; /*0x729a8c*/
  }
  else
  {
    v5 = (*(int (**)(unsigned int, int))(*(unsigned int *)a1[3] + 456))(a1[3], a2); /*0x72993f*/
    v13 = (*(int (**)(unsigned int))(*(unsigned int *)a1[3] + 1336))(a1[3]); /*0x72994f*/
    v6 = Math::RoundToInt((double)v13 * *(double *)&g_RulesClass_Instance->TunnelSpeed); /*0x72995a*/
    if ( v6 <= 5 ) /*0x729962*/
      v6 = 5; /*0x729964*/
    v16 += v6; /*0x729971*/
    if ( v16 > GroundHeight ) /*0x729975*/
      v16 = GroundHeight; /*0x729977*/
    result = (*(int (**)(unsigned int, int *))(*(unsigned int *)a1[3] + 436))(a1[3], &v14); /*0x729985*/
    if ( v5 <= -50 ) /*0x72998f*/
    {
      result = (*(int (**)(unsigned int))(*(unsigned int *)a1[3] + 456))(a1[3]); /*0x72999a*/
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
  ObjectClass *Coords; // eax
  int v4; // eax
  int v6[3]; // [esp+8h] [ebp-Ch] BYREF

  Voxel::TransformMatrix((int)this); /*0x761037*/
  for ( i = 0; i < *((unsigned int *)this + 128); ++i ) /*0x761046*/
  {
    Coords = (ObjectClass *)CellClass::GetCoords(*(unsigned int **)(*((unsigned int *)this + 125) + 4 * i), v6); /*0x761056*/
    WaveClass::DamageArea((int *)this, Coords); /*0x76105e*/
  }
  v4 = *((unsigned int *)this + 76) - 1; /*0x761074*/
  *((unsigned int *)this + 76) = v4; /*0x761075*/
  if ( v4 >= 0 ) /*0x76107b*/
    return ObjectClass::DetectCloaked(this); /*0x76108f*/
  else
    return (*(int (**)(void *))(*(unsigned int *)this + 248))(this); /*0x761081*/

}
// 0x4238D0
namespace gamemd {
int * AnimClass::CheckMirrorFlags(int a1)
{

  if ( (unk_89A190 & 1) == 0 ) /*0x4238db*/
  {
    unk_89A190 |= 1u; /*0x4238f9*/
    unk_89A160 = 2147450879; /*0x4238ff*/
    atexit(nullsub_89); /*0x423904*/
  }
  return &unk_89A160; /*0x423912*/

}
} // namespace gamemd

// 0x426300
namespace gamemd {
char AnimClass::ProcessAreaEffect(unsigned int * a1)
{

  char v1; // bl
  unsigned char *v2; // esi
  char result; // al

  v1 = Input::OffsetToDirection(a1); /*0x426314*/
  v2 = Coord::To_Cell(&g_abs_87F7E8, a1); /*0x426321*/
  if ( Cell::GetGroundHeight(a1) + unk_89A1B4 > a1[2] ) /*0x426335*/
  {
    result = ~(1 << v1) & v2[292]; /*0x426370*/
    v2[292] = result; /*0x426372*/
    if ( (result & 0x1C) == 0 ) /*0x42637a*/
      *((unsigned int *)v2 + 21) = -1; /*0x42637c*/
  }
  else
  {
    result = ~(1 << v1) & v2[296]; /*0x426347*/
    v2[296] = result; /*0x426349*/
    if ( (result & 0x1C) == 0 ) /*0x426351*/
      *((unsigned int *)v2 + 22) = -1; /*0x426353*/
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
  a2[3] = -777003740; /*0x426570*/
  return 0; /*0x42654d*/

}
} // namespace gamemd
