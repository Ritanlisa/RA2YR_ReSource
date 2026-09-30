// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/JumpjetLocomotion_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/MEMORY_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/JumpjetLocomotionClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/KeyboardConfig_e4.hpp"

// 0x4B0AD0
namespace gamemd {
AbstractClass * JumpjetLocomotion::MoveTo( IUnknown * aP1, int aP3)
{

  IUnknown *v3; // edx
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  unsigned int *v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  unsigned int v18[2]; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+18h] [ebp-Ch] BYREF
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]

  v3 = aP1; /*0x4b0ad0*/
  if ( aP1->field_0 != *(unsigned int *)&g_abs_89F690 /*0x4b0afe*/
    || aP1->field_4 != *(unsigned int *)&g_abs_89F690
    || (v5 = aP1->field_8, v5 != *(unsigned int *)&g_abs_89F690) )
  {
    IDA_LOBYTE(v5) = *(unsigned char *)(this + 96); /*0x4b0b04*/
    v6 = aP3; /*0x4b0b07*/
    if ( !(unsigned char)v5 ) /*0x4b0b0d*/
    {
      v5 = *(unsigned int *)(this + 88); /*0x4b0b13*/
      if ( v5 != -1 ) /*0x4b0b19*/
      {
        v5 = byte_7E7B28[12 * v5]; /*0x4b0b22*/
        if ( v5 ) /*0x4b0b2c*/
        {
          v7 = 4 * v5; /*0x4b0b32*/
          v8 = ((unsigned int *)(dword_7E7A28))[v7]; /*0x4b0b35*/
          v5 = ((unsigned int *)(dword_7E7A34))[v7]; /*0x4b0b3b*/
          if ( v5 > -1 ) /*0x4b0b44*/
          {
            v9 = (unsigned int *)(v8 + 12 * v5); /*0x4b0b4d*/
            aP3 = v9[2]; /*0x4b0b53*/
            if ( *(unsigned int *)(this + 92) < v5 ) /*0x4b0b5c*/
            {
              v10 = v9[1]; /*0x4b0b64*/
              v18[0] = *v9; /*0x4b0b67*/
              v18[1] = v10; /*0x4b0b6f*/
              v5 = (int)JumpjetLocomotion::TransformCoords( /*0x4b0b80*/
                          (unsigned int *)this,
                          (IUnknown *)&v19,
                          (IUnknown *)v18,
                          (ObjectClass *)&aP3);
              v11 = *(unsigned int *)v5; /*0x4b0b85*/
              v12 = *(unsigned int *)(v5 + 4); /*0x4b0b89*/
              if ( !v6 ) /*0x4b0b8c*/
              {
                v13 = (*(int (**)(unsigned int))(**(unsigned int **)(this + 12) + 464))(*(unsigned int *)(this + 12)); /*0x4b0b93*/
                v14 = *(unsigned int *)(this + 12); /*0x4b0b99*/
                v19 = v11; /*0x4b0b9c*/
                v20 = v12; /*0x4b0ba0*/
                v21 = v13; /*0x4b0ba4*/
                (*(void (**)(int, int *))(*(unsigned int *)v14 + 244))(v14, &v19); /*0x4b0baf*/
                IDA_LOBYTE(v5) = (*(char (**)(unsigned int, IUnknown *))(**(unsigned int **)(this + 12) + 244))( /*0x4b0bbf*/
                               *(unsigned int *)(this + 12),
                               aP1);
                return v5; /*0x4b0bcc*/
              }
              if ( v6 == 1 || v6 == 3 ) /*0x4b0bd7*/
              {
                v15 = (*(int (**)(unsigned int))(**(unsigned int **)(this + 12) + 464))(*(unsigned int *)(this + 12)); /*0x4b0bde*/
                v16 = *(unsigned int *)(this + 12); /*0x4b0be4*/
                v21 = v15; /*0x4b0be7*/
                v19 = v11; /*0x4b0beb*/
                v20 = v12; /*0x4b0bef*/
                IDA_LOBYTE(v5) = (*(int (**)(int, int *))(*(unsigned int *)v16 + 240))(v16, &v19); /*0x4b0bfa*/
              }
              v3 = aP1; /*0x4b0c00*/
            }
          }
        }
      }
    }
    if ( v6 ) /*0x4b0c06*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x4b0c26*/
        IDA_LOBYTE(v5) = (*(char (**)(unsigned int, IUnknown *))(**(unsigned int **)(this + 12) + 240))( /*0x4b0c2e*/
                       *(unsigned int *)(this + 12),
                       v3);
    }
    else
    {
      IDA_LOBYTE(v5) = (*(char (**)(unsigned int, IUnknown *))(**(unsigned int **)(this + 12) + 244))( /*0x4b0c0e*/
                     *(unsigned int *)(this + 12),
                     v3);
    }
  }
  return v5; /*0x4b0bc5*/

}
}
// 0x4B0F20
namespace gamemd {
AbstractClass * JumpjetLocomotion::ProcessCollision(char a2)
{

  int v3; // eax
  int v4; // edx
  bool v5; // al
  int v6; // esi
  int v7; // eax
  unsigned int *v8; // esi
  int v9; // edx
  int v10; // esi
  double v11; // st7
  int v12; // eax
  MouseClass *v13; // ecx
  int v14; // edi
  char v15; // bl
  int v16; // edx
  int v17; // eax
  int v18; // esi
  double v19; // st7
  double v20; // st7
  MouseClass *v21; // ecx
  double v22; // st7
  int v23; // eax
  double v24; // st7
  unsigned int *v25; // esi
  int v26; // eax
  MouseClass *v27; // ecx
  int v28; // edx
  int v29; // eax
  int v30; // edx
  unsigned int *v31; // esi
  TechnoClass *v32; // eax
  int v33; // edx
  int v34; // ebx
  int v35; // ecx
  MouseClass *v36; // eax
  int v37; // edx
  unsigned int *v38; // eax
  ObjectClass *Coords; // eax
  unsigned int *v40; // ecx
  int *v41; // ecx
  int GroundHeight; // esi
  int v43; // ebx
  char *v45; // esi
  char v46; // dl
  int v47; // edx
  int v48; // ebx
  int16_t v49; // cx
  int v50; // eax
  BuildingTypeClass *v51; // ecx
  MouseClass *v52; // ecx
  int v53; // eax
  IUnknown *v54; // edx
  int v55; // eax
  IUnknown *v56; // ecx
  int v57; // eax
  unsigned int *v58; // eax
  int v59; // esi
  int v60; // ecx
  int v61; // esi
  int v62; // ebx
  unsigned int *v63; // eax
  MouseClass *v64; // ecx
  int v65; // edx
  int v66; // edi
  TechnoClass *v67; // eax
  int v68; // eax
  IUnknown *v69; // esi
  IUnknown *v70; // ebx
  int v71; // ecx
  int v72; // eax
  MouseClass *v73; // edi
  TechnoClass *v74; // esi
  TechnoClass *v75; // eax
  TechnoClass *v76; // esi
  TechnoClass *nextObject; // ebx
  int v78; // edx
  int v79; // edx
  MouseClass *v80; // ecx
  int v81; // eax
  int v82; // esi
  char v83; // bl
  MouseClass *v84; // eax
  char v85; // bl
  int16_t v86; // cx
  int v87; // eax
  MouseClass *v88; // ecx
  IUnknown *v89; // ebx
  int v90; // eax
  int16_t v91; // dx
  char v92; // al
  MouseClass *v93; // ecx
  unsigned int *v94; // esi
  int v95; // eax
  int v96; // edx
  int v97; // eax
  int v98; // edi
  TechnoClass *v99; // edx
  int v100; // edi
  void *v101; // eax
  IUnknown *v102; // edx
  char *v103; // eax
  int v104; // eax
  bool v105; // zf
  TechnoClass *v106; // eax
  MouseClass *v107; // ecx
  MouseClass *v108; // eax
  int v109; // edx
  TechnoClass *v110; // edx
  int v111; // ecx
  int v112; // edi
  int v113; // edx
  unsigned int *v114; // eax
  unsigned int *eax140; // eax
  MouseClass *v115; // edx
  int ecx143; // ecx
  TechnoClass *v117; // edi
  int v119; // ecx
  unsigned int *v120; // eax
  bool cc146; // cc
  IUnknown *v121; // eax
  unsigned char *v123; // eax
  int eax150; // eax
  MouseClass *v124; // edi
  unsigned int *v126; // esi
  int v127; // ecx
  int v128; // edx
  int v129; // eax
  int ebx151; // ebx
  MouseClass *v130; // ecx
  MouseClass *v131; // ebx
  int v133; // eax
  int v134; // ecx
  char al154; // al
  TechnoClass *v135; // eax
  MouseClass *v136; // eax
  int v138; // ecx
  unsigned int *v139; // eax
  int v140; // edi
  int v141; // ebx
  unsigned short *v142; // eax
  int64_t rax162; // rax
  MouseClass *v143; // ecx
  int v145; // edx
  int v146; // ecx
  IUnknown *v147; // esi
  int v148; // ecx
  BuildingTypeClass *v149; // eax
  int v150; // eax
  int v151; // esi
  int v152; // ebx
  int *v153; // eax
  int v154; // ecx
  TechnoClass *v155; // eax
  int v156; // ebx
  int v157; // ecx
  int esi185a; // esi
  TechnoClass *v158; // ebx
  IUnknown *v159; // esi
  double v161; // st7
  TechnoClass **eax185d; // eax
  TechnoClass *v162; // edx
  IUnknown *v163; // edi
  IUnknown *v165; // eax
  int v166; // ebx
  unsigned int edx185; // edx
  TechnoClass *v167; // ebx
  uint64_t v169; // kr28_8
  void *eax191; // eax
  MouseClass *v170; // ecx
  int v172; // eax
  int v173; // edi
  int v174; // edi
  IUnknown *ecx193; // ecx
  IUnknown *v175; // eax
  char v177; // bl
  int LandHeight; // [esp+24h] [ebp-10Ch]
  AbstractClass *v179; // [esp+2Ch] [ebp-104h]
  float v180; // [esp+2Ch] [ebp-104h]
  bool v181; // [esp+43h] [ebp-EDh]
  char v182; // [esp+43h] [ebp-EDh]
  char v183; // [esp+43h] [ebp-EDh]
  IUnknown *aP4; // [esp+44h] [ebp-ECh] BYREF
  unsigned char v185[12]; // [esp+48h] [ebp-E8h] BYREF
  double varDC; // [esp+54h] [ebp-DCh] BYREF
  TechnoClass *v186; // [esp+5Ch] [ebp-D4h]
  IUnknown *aP3; // [esp+60h] [ebp-D0h] BYREF
  IUnknown *v188; // [esp+64h] [ebp-CCh] BYREF
  int aP3_8; // [esp+68h] [ebp-C8h]
  IUnknown *v190; // [esp+6Ch] [ebp-C4h]
  IUnknown *aP3_16; // [esp+70h] [ebp-C0h] BYREF
  int aP3_20; // [esp+74h] [ebp-BCh] BYREF
  IUnknown *v193; // [esp+78h] [ebp-B8h] BYREF
  int aP3_28; // [esp+7Ch] [ebp-B4h]
  TechnoClass *v195; // [esp+80h] [ebp-B0h]
  int aP3_36; // [esp+84h] [ebp-ACh] BYREF
  int aP3_40; // [esp+88h] [ebp-A8h]
  TechnoClass *aP3_44; // [esp+8Ch] [ebp-A4h]
  int aP3_48; // [esp+90h] [ebp-A0h]
  IUnknown *aP3_52; // [esp+94h] [ebp-9Ch]
  int aP3_56; // [esp+98h] [ebp-98h] BYREF
  uint64_t aP3_60; // [esp+9Ch] [ebp-94h] BYREF
  TechnoClass *aP3_68; // [esp+A4h] [ebp-8Ch]
  int aP3_72; // [esp+A8h] [ebp-88h] BYREF
  IUnknown *v205; // [esp+ACh] [ebp-84h]
  int aP3_80; // [esp+B0h] [ebp-80h]
  IUnknown *v207; // [esp+B4h] [ebp-7Ch] BYREF
  BuildingTypeClass *v208; // [esp+B8h] [ebp-78h]
  char *aP3_92; // [esp+BCh] [ebp-74h]
  TechnoClass *v210; // [esp+C0h] [ebp-70h] BYREF
  int aP3_100; // [esp+C4h] [ebp-6Ch]
  TechnoClass *v212; // [esp+C8h] [ebp-68h]
  IUnknown *aP3_108; // [esp+CCh] [ebp-64h]
  int aP3_112; // [esp+D0h] [ebp-60h]
  IUnknown *aP3_116; // [esp+D4h] [ebp-5Ch]
  unsigned int aP3_120[3]; // [esp+D8h] [ebp-58h] BYREF
  uint64_t aP3_132; // [esp+E4h] [ebp-4Ch] BYREF
  TechnoClass *aP3_140; // [esp+ECh] [ebp-44h]
  TechnoClass *v219; // [esp+F0h] [ebp-40h] BYREF
  TechnoClass *aP3_148; // [esp+F4h] [ebp-3Ch]
  TechnoClass *aP3_152; // [esp+F8h] [ebp-38h]
  int aP3_156; // [esp+FCh] [ebp-34h] BYREF
  int aP3_160; // [esp+100h] [ebp-30h]
  int aP3_164; // [esp+104h] [ebp-2Ch]
  int aP3_168; // [esp+108h] [ebp-28h] BYREF
  unsigned int v227[3]; // [esp+10Ch] [ebp-24h] BYREF
  int v228; // [esp+118h] [ebp-18h]
  TechnoClass *v229; // [esp+120h] [ebp-10h]
  int v230; // [esp+128h] [ebp-8h]
  int v231; // [esp+12Ch] [ebp-4h]

  if ( (!*((unsigned char *)this + 99) || *((unsigned int *)this + 22) == -1) && *(unsigned int *)(*((unsigned int *)this + 3) + 1504) != 8
    || *((unsigned char *)this + 98)
    && !*(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3233) )
  {
    *((unsigned int *)this + 19) = 0;
    return 0;
  }
  v3 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3));
  v4 = **(unsigned int **)((char *)this + 12);
  if ( *(unsigned char *)(v3 + 3517) )
  {
    v5 = (*(int (**)(void))(v4 + 44))() != 1 || !*(unsigned char *)(*(unsigned int *)(*((unsigned int *)this + 3) + 1732) + 3596);
    if ( *((int *)this + 22) < 64 && v5 )
    {
      *(unsigned int *)v185 = *((unsigned int *)this + 13);
      *(unsigned int *)&v185[4] = *((unsigned int *)this + 14);
      *(unsigned int *)&v185[8] = *((unsigned int *)this + 15);
      v6 = (*((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)v185) + 80) & 0x100) != 0
         ? *(unsigned int *)&g_abs_89F690
         : 0;
      v7 = v6 + Cell::GetGroundHeight(v185);
      v8 = (unsigned int *)(*((unsigned int *)this + 3) + 156);
      *(unsigned int *)&v185[8] = v7;
      v9 = v8[1];
      aP3_120[0] = *v8 - *(unsigned int *)v185;
      v10 = v8[2];
      aP3_120[1] = v9 - *(unsigned int *)&v185[4];
      aP3_120[2] = v10 - v7;
      v11 = Math::Sqrt(
              (double)(v10 - v7) * (double)(v10 - v7)
            + (double)(v9 - *(unsigned int *)&v185[4]) * (double)(v9 - *(unsigned int *)&v185[4])
            + (double)aP3_120[0] * (double)aP3_120[0]);
      v12 = Math::RoundToInt(v11);
      v13 = *(MouseClass **)((char *)this + 12);
      v14 = v12;
      v15 = 0;
      v16 = *(unsigned int *)&v13-((unsigned int *)(>__pad_1D4))[936];
      IDA_LODWORD(varDC) = *(unsigned int *)&v13-((unsigned int *)(>__pad_1D4))[932];
      v17 = v13->field_0;
      IDA_HIDWORD(varDC) = v16;
      v18 = (*(int (**)(MouseClass *))(v17 + 132))(v13);
      aP3 = (IUnknown *)(*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 908))(*((unsigned int *)this + 3));
      if ( v14 >= *(unsigned int *)(v18 + 760) )
      {
        if ( *(unsigned char *)(*((unsigned int *)this + 3) + 973) )
        {
          v20 = varDC - (double)(int)aP3 * 0.001500000013038516;
          if ( v20 >= 0.1000000014901161 )
            varDC = v20;
          else
            varDC = 0.1000000014901161;
          v15 = 1;
        }
      }
      else
      {
        v15 = 1;
        v19 = varDC - (double)(int)aP3 * *(double *)(v18 + 768);
        if ( v19 >= 0.300000011920929 )
          varDC = v19;
        else
          varDC = 0.300000011920929;
      }
      v21 = *(MouseClass **)((char *)this + 12);
      if ( v21-((unsigned int *)(>__pad_1D4))[1249] )
      {
        if ( *(double *)((char *)this + 80) >= 0.2 )
          v22 = 0.2;
        else
          v22 = *(double *)((char *)this + 80);
        varDC = v22;
        v23 = IDA_HIDWORD(varDC);
        *(double *)((char *)this + 80) = v22;
        (*(void (**)(unsigned int, int))(v21->field_0 + 1348))(IDA_LODWORD(varDC), v23);
      }
      else
      {
        if ( !v15 )
        {
          if ( *(double *)&v21-((unsigned int *)(>__pad_1D4))[932] >= *(double *)((char *)this + 80) )
          {
            if ( *(double *)&v21-((unsigned int *)(>__pad_1D4))[932] <= *(double *)((char *)this + 80) )
              goto LABEL_37;
            v24 = *(double *)&v21-((unsigned int *)(>__pad_1D4))[932] - (double)(int)aP3 * *(double *)(v18 + 768);
            if ( *(double *)((char *)this + 80) > v24 )
              v24 = *(double *)((char *)this + 80);
          }
          else
          {
            v24 = *(double *)(v18 + 776) + *(double *)&v21-((unsigned int *)(>__pad_1D4))[932];
            if ( *(double *)((char *)this + 80) < v24 )
              v24 = *(double *)((char *)this + 80);
          }
          varDC = v24;
          (*(void (**)(unsigned int, unsigned int))(v21->field_0 + 1348))(
            IDA_LODWORD(v24),
            IDA_HIDWORD(*(uint64_t *)&v24));
          goto LABEL_37;
        }
        (*(void (**)(unsigned int, unsigned int))(v21->field_0 + 1348))(IDA_LODWORD(varDC), IDA_HIDWORD(varDC));
      }
LABEL_37:
      if ( (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 44))(*((unsigned int *)this + 3)) == 1 )
      {
        v25 = *(unsigned int **)(*((unsigned int *)this + 3) + 1736);
        if ( v25 )
        {
          do
          {
            (*(void (**)(unsigned int *, unsigned int, unsigned int))(*v25 + 1348))(
              v25,
              *(unsigned int *)(*((unsigned int *)this + 3) + 1400),
              *(unsigned int *)(*((unsigned int *)this + 3) + 1404));
            v25 = (unsigned int *)v25[434];
          }
          while ( v25 && v25 != (unsigned int *)v25[434] );
        }
      }
    }
  }
  else
  {
    (*(void (**)(unsigned int, unsigned int))(v4 + 1348))(*((unsigned int *)this + 20), *((unsigned int *)this + 21));
  }
  v26 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 1336))(*((unsigned int *)this + 3));
  v27 = *(MouseClass **)((char *)this + 12);
  v28 = a2 == 0 ? v26 : 0;
  v29 = *(unsigned int *)&v27-((unsigned int *)(>__pad_1D4))[1036];
  v30 = *((unsigned int *)this + 19) + v28;
  aP3_8 = v30;
  aP3_48 = v29;
  if ( v29 == 8 && *((unsigned int *)this + 22) == -1 )
  {
    (*(void (**)(MouseClass *, unsigned int))(v27->field_0 + 292))(v27, 0);
    v31 = (unsigned int *)((char *)this + 64);
    if ( *((unsigned int *)this + 16) != *(unsigned int *)&g_abs_89F690
      || *((unsigned int *)this + 17) != *(unsigned int *)&g_abs_89F690
      || *((unsigned int *)this + 18) != *(unsigned int *)&g_abs_89F690 )
    {
      *v31 = *(unsigned int *)&g_abs_89F690;
      *((unsigned int *)this + 17) = *(unsigned int *)&g_abs_89F690;
      v32 = *(TechnoClass **)&g_abs_89F690;
      *((unsigned char *)this + 99) = 0;
      *((unsigned int *)this + 18) = v32;
    }
    v33 = *(int16_t *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 444))(*((unsigned int *)this + 3)) + 278);
    if ( v33 >= 0 && v33 < *(int *)&g_abs_89F690 )
    {
      v34 = *(unsigned int *)(*(unsigned int *)&g_abs_89F690 + 4 * v33);
      aP4 = *(IUnknown **)(v34 + 40);
      v35 = SHIWORD(aP4) << 8;
      *v31 = ((int16_t)aP4 << 8) + 128;
      v36 = *(MouseClass **)((char *)this + 12);
      *((unsigned int *)this + 17) = v35 + 128;
      *((unsigned int *)this + 18) = 0;
      qmemcpy(&v36-((unsigned int *)(>__pad_1D4))[1036], &v36->__pad_1D4[1040], 0x5Cu);
      *(unsigned int *)(*((unsigned int *)this + 3) + 1596) = -1;
      *(unsigned char *)(*((unsigned int *)this + 3) + 1668) = v33;
      *(unsigned char *)(*((unsigned int *)this + 3) + 1669) = 0;
      v37 = *(unsigned int *)(v34 + 48) & 7;
      aP4 = *(IUnknown **)(v34 + 36);
      IDA_LOWORD(v190) = *((unsigned short *)&g_abs_89F688 + 2 * v37) + (unsigned short)aP4;
      IDA_HIWORD(v190) = IDA_HIWORD(aP4) + *((unsigned short *)&g_abs_89F68A + 2 * v37);
      aP4 = v190;
      v38 = (unsigned int *)(CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP4));
      Coords = (ObjectClass *)CellClass::GetCoords(v38, (int *)&v193);
      v40 = (unsigned int *)(*((unsigned int *)this + 3) + 1384);
      *v40 = *(unsigned int *)Coords->__pad_0;
      v40[1] = *(unsigned int *)&Coords->__pad_0[4];
      v40[2] = *(unsigned int *)&Coords->__pad_0[8];
      v41 = (int *)(*((unsigned int *)this + 3) + 156);
      aP3_36 = *v41;
      aP3_40 = v41[1];
      aP3_44 = (TechnoClass *)v41[2];
      GroundHeight = Cell::GetGroundHeight(&aP3_36);
      aP4 = *(IUnknown **)(v34 + 40);
      v43 = *(unsigned int *)(v34 + 448);
      aP3_40 = (SHIWORD(aP4) << 8) + 128;
      aP3_36 = ((int16_t)aP4 << 8) + 128;
      aP3_44 = 0;
      *(unsigned int *)(*((unsigned int *)this + 3) + 1392) = GroundHeight + (Cell::GetGroundHeight(&aP3_36) - GroundHeight) / v43;
      *((unsigned char *)this + 99) = 1;
      *((unsigned int *)this + 22) = -1;
      return 0;
    }
    *(unsigned int *)(*((unsigned int *)this + 3) + 1504) = -1;
    *((unsigned int *)this + 22) = -1;
    *v31 = *(unsigned int *)&g_abs_89F690;
    *((unsigned int *)this + 17) = *(unsigned int *)&g_abs_89F690;
    *((unsigned int *)this + 18) = *(unsigned int *)&g_abs_89F690;
    if ( *v31 != *(unsigned int *)&g_abs_89F690
      || *((unsigned int *)this + 17) != *(unsigned int *)&g_abs_89F690
      || *((unsigned int *)this + 18) != *(unsigned int *)&g_abs_89F690 )
    {
      *v31 = *(unsigned int *)&g_abs_89F690;
      *((unsigned int *)this + 17) = *(unsigned int *)&g_abs_89F690;
      *((unsigned int *)this + 18) = *(unsigned int *)&g_abs_89F690;
      *((unsigned char *)this + 99) = 0;
      return 0;
    }
    return 0;
  }
  if ( v30 <= 7 )
    goto LABEL_147;
  v45 = (char *)(12 * *((unsigned int *)this + 22) + 8289064);
  v46 = *((unsigned char *)this + 96);
  aP3_92 = v45;
  if ( v46 )
    v47 = v45[1];
  else
    v47 = *v45;
  v190 = (IUnknown *)(16 * v47);
  v48 = dword_7E7A28[4 * v47];
  aP3_100 = v48;
  if ( v29 < -1 || v29 > 8 )
  {
    *(unsigned int *)&v27-((unsigned int *)(>__pad_1D4))[1036] = -1;
    return 0;
  }
  v181 = 0;
  if ( v29 != 8 && v29 != -1 )
  {
    IDA_LOBYTE(v49) = 0;
    IDA_HIBYTE(v49) = v45[4];
    IDA_LOWORD(aP4) = v49;
    v181 = (((((unsigned int)aP4 >> 12) + 1) >> 1) & 7) != v29;
  }
  while ( 1 )
  {
    v50 = *((unsigned int *)this + 23);
    aP3_8 -= 7;
    v51 = *(BuildingTypeClass **)(v48 + 12 * v50 + 4);
    v207 = *(IUnknown **)(v48 + 12 * v50);
    v208 = v51;
    if ( !v207 && !v51 && v50 )
      break;
    if ( (*(uint8_t (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 192))(*((unsigned int *)this + 3)) )
    {
      v52 = *(MouseClass **)((char *)this + 12);
      v227[0] = *(unsigned int *)&v52-((unsigned int *)(>__pad_74))[40];
      v227[1] = *(unsigned int *)&v52-((unsigned int *)(>__pad_74))[44];
      v227[2] = *(unsigned int *)&v52-((unsigned int *)(>__pad_74))[48];
      (*(void (**)(MouseClass *, unsigned int *))(v52->field_0 + 244))(v52, v227);
      *(unsigned char *)(*((unsigned int *)this + 3) + 1718) = 0;
      *(unsigned char *)(*((unsigned int *)this + 3) + 1719) = 0;
    }
    v53 = *((unsigned int *)this + 23);
    if ( v53 )
    {
      v54 = *(IUnknown **)(v48 + 12 * v53 - 4);
      v55 = v48 + 12 * v53;
      aP3 = v54;
      v56 = *(IUnknown **)(v55 - 8);
      v57 = *(unsigned int *)(v55 - 12);
      v205 = v56;
      aP3_72 = v57;
      v58 = JumpjetLocomotion::TransformCoords(
              (unsigned int *)this,
              (IUnknown *)&v219,
              (IUnknown *)&aP3_72,
              (ObjectClass *)&aP3);
      v59 = v58[1];
      IDA_LOWORD(v212) = *v58 / 256;
      IDA_HIWORD(v212) = v59 / 256;
      v210 = v212;
    }
    else
    {
      v210 = *(TechnoClass **)(*(int (**)(unsigned int, double *))(**(unsigned int **)((char *)this + 12) + 440))(
                                *((unsigned int *)this + 3),
                                &varDC);
    }
    v60 = *((unsigned int *)this + 3) + 156;
    aP3 = *(IUnknown **)(v48 + 12 * *((unsigned int *)this + 23) + 8);
    v61 = *(unsigned int *)v60;
    v62 = *(unsigned int *)(v60 + 4);
    v195 = *(TechnoClass **)(v60 + 8);
    v63 = JumpjetLocomotion::TransformCoords(
            (unsigned int *)this,
            (IUnknown *)aP3_120,
            (IUnknown *)&v207,
            (ObjectClass *)&aP3);
    v64 = *(MouseClass **)((char *)this + 12);
    v65 = *v63 - v61;
    v66 = v63[1] - v62;
    v228 = *(unsigned int *)&v64-((unsigned int *)(>__pad_74))[40];
    v67 = *(TechnoClass **)&v64-((unsigned int *)(>__pad_74))[48];
    aP3_40 = v66 + *(unsigned int *)&v64-((unsigned int *)(>__pad_74))[44];
    v229 = v67;
    aP3_44 = v67;
    aP3_36 = v228 + v65;
    v230 = *(unsigned int *)&v64-((unsigned int *)(>__pad_74))[44];
    v68 = *(unsigned int *)&v64-((unsigned int *)(>__pad_74))[40];
    v231 = *(unsigned int *)&v64-((unsigned int *)(>__pad_74))[48];
    IDA_LOWORD(aP3_112) = (v228 + v65) / 256;
    IDA_HIWORD(aP3_112) = aP3_40 / 256;
    aP3_56 = aP3_112;
    if ( (unsigned short)aP3_112 == (uint16_t)(v68 / 256)
      && (uint16_t)(aP3_40 / 256) == (uint16_t)(v230 / 256) )
    {
      v83 = v64-((unsigned int *)(>__pad_74))[0];
      v64-((unsigned int *)(>__pad_74))[0] = 0;
      (*(void (**)(unsigned int, int *))(**(unsigned int **)((char *)this + 12) + 436))(*((unsigned int *)this + 3), &aP3_36);
      *(unsigned char *)(*((unsigned int *)this + 3) + 116) = v83;
      goto LABEL_107;
    }
    (*(void (**)(MouseClass *, unsigned int))(v64->field_0 + 292))(v64, 0);
    (*(void (**)(unsigned int, int *))(**(unsigned int **)((char *)this + 12) + 436))(*((unsigned int *)this + 3), &aP3_36);
    v69 = (IUnknown *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v210);
    v70 = (IUnknown *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP3_56);
    v71 = SHIBYTE(v70->field_118);
    v72 = SHIBYTE(v69->field_118) - 4;
    aP3_16 = v70;
    if ( v71 == v72 )
    {
      if ( (v70->field_140 & 0x100) == 0 )
        goto LABEL_80;
      *(unsigned char *)(*((unsigned int *)this + 3) + 140) = 1;
    }
    if ( (v70->field_140 & 0x100) == 0 )
    {
LABEL_80:
      if ( (v69->field_140 & 0x100) != 0 )
        *(unsigned char *)(*((unsigned int *)this + 3) + 140) = 0;
    }
    if ( *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3220) )
    {
      v73 = *(MouseClass **)((char *)this + 12);
      if ( !v73-((unsigned int *)(>__pad_1D4))[1276] )
      {
        if ( v73-((unsigned int *)(>__pad_74))[24]
          || (v193 = *(IUnknown **)&v73-((unsigned int *)(>__pad_74))[40],
              aP3_28 = *(unsigned int *)&v73-((unsigned int *)(>__pad_74))[44],
              v74 = *(TechnoClass **)&v73->__pad_74[48],
              aP3_132 = *(unsigned long long *)&v73-((unsigned int *)(>__pad_74))[40],
              aP3_140 = *(TechnoClass **)&v73->__pad_74[48],
              (int)v74 >= *(unsigned int *)&g_abs_89F690 + Cell::GetGroundHeight(&aP3_132)) )
        {
          v75 = (TechnoClass *)*((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP3_56) + 58);
        }
        else
        {
          v75 = (TechnoClass *)*((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP3_56) + 57);
        }
        v76 = v75;
        if ( v75 )
        {
          do
          {
            nextObject = (TechnoClass *)v76->nextObject;
            if ( !ObjectClass::IsCrushable(v76, *(AbstractClass **)((char *)this + 12)) )
            {
              v78 = *(unsigned int *)v76->__pad_0;
              aP3_20 = 10000;
              (*(void (**)(TechnoClass *, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(v78 + 364))(
                v76,
                &aP3_20,
                0,
                *(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 4008),
                0,
                1,
                1,
                0);
              v79 = v73->field_0;
              aP3_20 = 20;
              (*(void (**)(MouseClass *, int *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(v79 + 364))(
                v73,
                &aP3_20,
                0,
                *(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 4008),
                0,
                1,
                0,
                0);
            }
            v76 = nextObject;
          }
          while ( nextObject );
          v70 = aP3_16;
        }
      }
    }
    v80 = *(MouseClass **)((char *)this + 12);
    if ( !v80-((unsigned int *)(>__pad_74))[28] )
      return 0;
    (*(void (**)(MouseClass *, int))(v80->field_0 + 292))(v80, 1);
    v81 = v70->field_44;
    if ( v81 != -1 )
    {
      v82 = *(unsigned int *)&g_abs_A83D84->__pad_0[4 * v81];
      if ( !*((unsigned char *)this + 100) )
        goto LABEL_107;
      if ( (*(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3368)
         || TechnoClass::HasVoiceResponse(*(float **)((char *)this + 12), 17))
        && *(unsigned char *)(v82 + 680)
        && *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3371) )
      {
        *(unsigned int *)(*((unsigned int *)this + 3) + 820) = -1119040307;
      }
    }
    if ( *((unsigned char *)this + 100) )
    {
      if ( CellClass::FindBuilding(v70, 0) )
      {
        if ( *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 1460) == 12 )
        {
          *(unsigned char *)(*((unsigned int *)this + 3) + 1717) = 1;
          if ( *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3371) )
            *(unsigned int *)(*((unsigned int *)this + 3) + 820) = -1119040307;
        }
      }
    }
LABEL_107:
    v84 = *(MouseClass **)((char *)this + 12);
    if ( !v84-((unsigned int *)(>__pad_74))[28] )
      return 0;
    v85 = v84-((unsigned int *)(>__pad_74))[0];
    v84-((unsigned int *)(>__pad_74))[0] = 0;
    (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 460))(*((unsigned int *)this + 3), 0);
    IDA_LOBYTE(v86) = 0;
    *(unsigned char *)(*((unsigned int *)this + 3) + 116) = v85;
    IDA_HIBYTE(v86) = (unsigned char)aP3;
    IDA_LOWORD(aP3_168) = v86;
    FacingClass::Set_SyncLog((char *)(*((unsigned int *)this + 3) + 904), &aP3_168);
    v87 = *((unsigned int *)this + 23);
    if ( v87 && *(int *)((char *)dword_7E7A34 + (unsigned int)v190) == v87 )
    {
      v88 = *(MouseClass **)((char *)this + 12);
      aP3_156 = *(unsigned int *)&v88-((unsigned int *)(>__pad_74))[40];
      aP3_160 = *(unsigned int *)&v88-((unsigned int *)(>__pad_74))[44];
      aP3_164 = *(unsigned int *)&v88->__pad_74[48];
      (*(void (**)(MouseClass *, int *))(v88->field_0 + 244))(v88, &aP3_156);
    }
    v89 = (IUnknown *)aP3_48;
    if ( aP3_48 != 8 && aP3_48 != -1 && v181 )
    {
      v90 = *((unsigned int *)this + 23);
      if ( *(int *)((char *)dword_7E7A2C + (unsigned int)v190) == v90 )
      {
        if ( v90 )
        {
          IDA_LOBYTE(v91) = 0;
          IDA_HIBYTE(v91) = aP3_92[4];
          IDA_LOWORD(aP3_52) = v91;
          aP3_16 = (IUnknown *)(aP3_48 + 8 * (((((unsigned int)aP3_52 >> 12) + 1) >> 1) & 7));
          aP3_20 = 12 * (unsigned int)aP3_16 + 8289064;
          v92 = byte_7E7B28[12 * (unsigned int)aP3_16];
          if ( v92 )
          {
            if ( dword_7E7A30[4 * v92] )
            {
              v93 = *(MouseClass **)((char *)this + 12);
              v94 = (unsigned int *)((char *)this + 64);
              v95 = *(unsigned int *)&v93->__pad_1D4[936];
              IDA_LODWORD(aP3_60) = *(unsigned int *)&v93->__pad_1D4[932];
              v96 = aP3_48 & 7;
              IDA_HIDWORD(aP3_60) = v95;
              v97 = *(unsigned int *)&g_abs_89F690 + *((unsigned int *)this + 16);
              v98 = *((unsigned int *)this + 17) + *(unsigned int *)&g_abs_89F690;
              v99 = *(TechnoClass **)((char *)this + 72);
              *(unsigned int *)v185 = v97;
              *(unsigned int *)&v185[8] = v99;
              *(unsigned int *)&v185[4] = v98;
              IDA_LOWORD(aP3_116) = v97 / 256;
              IDA_HIWORD(aP3_116) = v98 / 256;
              v188 = aP3_116;
              v100 = v93->field_0;
              LandHeight = ObjectClass::GetLandHeight(v93);
              v101 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v188);
              switch ( (*(int (**)(unsigned int, void *, IUnknown *, int, unsigned int, int))(v100 + 428))(
                         *((unsigned int *)this + 3),
                         v101,
                         v89,
                         LandHeight,
                         0,
                         1) )
              {
                case 0:
                case 2:
                  if ( (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 44))(*((unsigned int *)this + 3)) == 1
                    && !*(unsigned char *)(*(unsigned int *)(*((unsigned int *)this + 3) + 1732) + 3596) )
                  {
                    break;
                  }
                  v102 = aP3_16;
                  v103 = (char *)aP3_20;
                  *((unsigned char *)this + 96) = 0;
                  *((unsigned int *)this + 22) = v102;
                  aP3_92 = v103;
                  v181 = 0;
                  v104 = 4 * *v103;
                  v190 = (IUnknown *)(v104 * 4);
                  *((unsigned int *)this + 23) = dword_7E7A30[v104] - 1;
                  v105 = *v94 == *(unsigned int *)&g_abs_89F690;
                  aP3_100 = dword_7E7A28[v104];
                  if ( !v105
                    || *((unsigned int *)this + 17) != *(unsigned int *)&g_abs_89F690
                    || *((unsigned int *)this + 18) != *(unsigned int *)&g_abs_89F690 )
                  {
                    *v94 = *(unsigned int *)&g_abs_89F690;
                    *((unsigned int *)this + 17) = *(unsigned int *)&g_abs_89F690;
                    v106 = *(TechnoClass **)&g_abs_89F690;
                    *((unsigned char *)this + 99) = 0;
                    *((unsigned int *)this + 18) = v106;
                  }
                  v107 = *(MouseClass **)((char *)this + 12);
                  *((unsigned char *)this + 99) = 1;
                  (*(void (**)(MouseClass *, int))(v107->field_0 + 396))(v107, 2);
                  v108 = *(MouseClass **)((char *)this + 12);
                  *((unsigned char *)this + 99) = 0;
                  if ( !v108->__pad_74[28] || v108->__pad_74[13] || v108->__pad_74[25] )
                    return 0;
                  v109 = *(unsigned int *)&g_abs_89F690;
                  if ( *v94 != *(unsigned int *)&g_abs_89F690
                    || *((unsigned int *)this + 17) != *(unsigned int *)&g_abs_89F690
                    || *((unsigned int *)this + 18) != *(unsigned int *)&g_abs_89F690 )
                  {
                    *v94 = *(unsigned int *)&g_abs_89F690;
                    *((unsigned int *)this + 17) = *(unsigned int *)&g_abs_89F690;
                    v110 = *(TechnoClass **)&g_abs_89F690;
                    *((unsigned char *)this + 99) = 0;
                    *((unsigned int *)this + 18) = v110;
                    v109 = *(unsigned int *)&g_abs_89F690;
                  }
                  v111 = *(unsigned int *)v185;
                  v112 = *(unsigned int *)&v185[4];
                  v105 = *(unsigned int *)v185 == v109;
                  v113 = *(unsigned int *)&v185[8];
                  if ( !v105
                    || *(unsigned int *)&v185[4] != *(unsigned int *)&g_abs_89F690
                    || *(unsigned int *)&v185[8] != *(unsigned int *)&g_abs_89F690 )
                  {
                    v179 = (AbstractClass *)v108;
                    *((unsigned char *)this + 99) = 1;
                    *v94 = v111;
                    *((unsigned int *)this + 17) = v112;
                    *((unsigned int *)this + 18) = v113;
                    v114 = Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)v185);
                    if ( !CrateClass::ProcessPickup(v114, v179) || *(unsigned char *)(*((unsigned int *)this + 3) + 129) )
                    {
                      if ( *(unsigned char *)(*((unsigned int *)this + 3) + 144) )
                      {
                        *v94 = *(unsigned int *)&g_abs_89F690;
                        *((unsigned int *)this + 17) = *(unsigned int *)&g_abs_89F690;
                        *((unsigned int *)this + 18) = *(unsigned int *)&g_abs_89F690;
                        *((unsigned char *)this + 99) = 0;
                      }
                    }
                    else
                    {
                      JumpjetLocomotion::MoveTo(this, (IUnknown *)v185, 1);
                      (*(void (**)(unsigned int, unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 1348))(
                        *((unsigned int *)this + 3),
                        aP3_60,
                        IDA_HIDWORD(aP3_60));
                      qmemcpy(
                        (void *)(*((unsigned int *)this + 3) + 1504),
                        (const void *)(*((unsigned int *)this + 3) + 1508),
                        0x5Cu);
                      *(unsigned int *)(*((unsigned int *)this + 3) + 1596) = -1;
                    }
                  }
                  break;
                case 1:
                  eax140 = Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)v185);
                  CellClass::DamageAllObjects(eax140);
                  break;
                case 3:
                  IDA_LOWORD(aP3_108) = *(unsigned int *)v185 / 256;
                  v115 = *(MouseClass **)((char *)this + 12);
                  IDA_HIWORD(aP3_108) = *(unsigned int *)&v185[4] / 256;
                  aP3_16 = aP3_108;
                  Cell::IsPassableAllied((int)v115, (int16_t *)&aP3_16);
                  break;
                case 6:
                  if ( (*((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)v185) + 80) & 0x100) == 0
                    || (ecx143 = *((unsigned int *)this + 3) + 156,
                        v193 = *(IUnknown **)ecx143,
                        aP3_28 = *(unsigned int *)(ecx143 + 4),
                        v117 = *(TechnoClass **)(ecx143 + 8),
                        v119 = *((char *)Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)v185) + 283),
                        IDA_LOBYTE(aP4) = 1,
                        (int)abs32((int)v117 / *(unsigned int *)g_abs_89F690 - v119) <= 2) )
                  {
                    IDA_LOBYTE(aP4) = 0;
                  }
                  v120 = Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)((char *)this + 64));
                  Cell::ApplyDamage(v120, (IUnknown *)&g_abs_89F690, 1, 1, aP4);
                  break;
                default:
                  break;
              }
            }
          }
        }
      }
    }
    cc146 = aP3_8 <= 7;
    ++*((unsigned int *)this + 23);
    if ( cc146 )
      goto LABEL_147;
    v48 = aP3_100;
  }
  v124 = *(MouseClass **)((char *)this + 12);
  v126 = (unsigned int *)((char *)this + 64);
  v127 = *(unsigned int *)&v124->__pad_74[40];
  v128 = *(unsigned int *)&v124->__pad_74[44];
  v195 = *(TechnoClass **)&v124->__pad_74[48];
  v188 = (IUnknown *)(abs32(*((unsigned int *)this + 17) - v128) + abs32(*((unsigned int *)this + 16) - v127));
  v129 = Math::RoundToInt((1.0 - (double)(int)v188 * 0.09090909090909091) * 7.0);
  ebx151 = aP3_8;
  v124->__pad_1D4[1250] = 1;
  v130 = *(MouseClass **)((char *)this + 12);
  aP3_8 = v129 + ebx151;
  v130->__pad_1D4[1251] = 0;
  v131 = *(MouseClass **)((char *)this + 12);
  v133 = *(unsigned int *)&v131->__pad_74[40];
  v134 = *(unsigned int *)&v131->__pad_74[44];
  v195 = *(TechnoClass **)&v131->__pad_74[48];
  IDA_HIWORD(v188) = v134 / 256;
  if ( (uint16_t)(v133 / 256) == (uint16_t)(*((unsigned int *)this + 16) / 256)
    && IDA_HIWORD(v188) == (uint16_t)(*((unsigned int *)this + 17) / 256) )
  {
    al154 = v131->__pad_74[0];
    v131->__pad_74[0] = 0;
    v182 = al154;
    (*(void (**)(unsigned int, int))(**(unsigned int **)((char *)this + 12) + 436))(*((unsigned int *)this + 3), (char *)this + 64);
    (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 460))(*((unsigned int *)this + 3), 0);
    *(unsigned char *)(*((unsigned int *)this + 3) + 116) = v182;
  }
  else
  {
    (*(void (**)(MouseClass *, unsigned int))(v131->field_0 + 292))(v131, 0);
    (*(void (**)(unsigned int, int))(**(unsigned int **)((char *)this + 12) + 436))(*((unsigned int *)this + 3), (char *)this + 64);
    (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 460))(*((unsigned int *)this + 3), 0);
    (*(void (**)(unsigned int, int))(**(unsigned int **)((char *)this + 12) + 292))(*((unsigned int *)this + 3), 1);
  }
  if ( *v126 != *(unsigned int *)&g_abs_89F690
    || *((unsigned int *)this + 17) != *(unsigned int *)&g_abs_89F690
    || *((unsigned int *)this + 18) != *(unsigned int *)&g_abs_89F690 )
  {
    *v126 = *(unsigned int *)&g_abs_89F690;
    *((unsigned int *)this + 17) = *(unsigned int *)&g_abs_89F690;
    v135 = *(TechnoClass **)&g_abs_89F690;
    *((unsigned char *)this + 99) = 0;
    *((unsigned int *)this + 18) = v135;
  }
  v136 = *(MouseClass **)((char *)this + 12);
  *((unsigned int *)this + 22) = -1;
  *((unsigned int *)this + 23) = 0;
  v183 = 0;
  v138 = *(unsigned int *)&v136->__pad_1D4[976];
  if ( v138 )
  {
    v139 = (unsigned int *)(*(int (**)(int, IUnknown **, MouseClass *))(*(unsigned int *)v138 + 76))(v138, &v193, v136);
    v140 = *v139 / 256;
    v141 = v139[1] / 256;
    v142 = (unsigned short *)(*(int (**)(unsigned int, double *))(**(unsigned int **)((char *)this + 12) + 440))(
                      *((unsigned int *)this + 3),
                      &varDC);
    if ( *v142 == (unsigned short)v140 && v142[1] == (unsigned short)v141 )
    {
      rax162 = *(unsigned int *)((*(int (**)(IUnknown **, unsigned int))(**(unsigned int **)((char *)this + 12) + 76))(
                             &v193,
                             *((unsigned int *)this + 3))
                         + 8)
             - *((unsigned int *)this + 15);
      if ( (int)((IDA_HIDWORD(rax162) ^ rax162) - IDA_HIDWORD(rax162)) < 2 * *(unsigned int *)g_abs_89F690 )
      {
        v183 = 1;
        *((unsigned int *)this + 13) = *(unsigned int *)&g_abs_89F690;
        *((unsigned int *)this + 14) = *(unsigned int *)&g_abs_89F690;
        *((unsigned int *)this + 15) = *(unsigned int *)&g_abs_89F690;
        if ( *v126 != *(unsigned int *)&g_abs_89F690
          || *((unsigned int *)this + 17) != *(unsigned int *)&g_abs_89F690
          || *((unsigned int *)this + 18) != *(unsigned int *)&g_abs_89F690 )
        {
          *v126 = *(unsigned int *)&g_abs_89F690;
          *((unsigned int *)this + 17) = *(unsigned int *)&g_abs_89F690;
          *((unsigned int *)this + 18) = *(unsigned int *)&g_abs_89F690;
          *((unsigned char *)this + 99) = 0;
        }
        *((unsigned char *)this + 99) = 0;
      }
    }
  }
  (*(void (**)(unsigned int, int))(**(unsigned int **)((char *)this + 12) + 396))(*((unsigned int *)this + 3), 2);
  v143 = *(MouseClass **)((char *)this + 12);
  if ( !v143 || !v143->__pad_74[28] || v143->__pad_74[13] || v143->__pad_74[25] )
    return 1;
  if ( v183 )
  {
    FootClass::ClearPathIndex(v143);
    *(unsigned int *)(*((unsigned int *)this + 3) + 1504) = -1;
    if ( (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 388))(*((unsigned int *)this + 3)) == 2 )
    {
      if ( (*(uint8_t (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1156))(
             *((unsigned int *)this + 3),
             0,
             1) )
      {
        return 1;
      }
    }
  }
  if ( (*(uint8_t (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 1284))(*((unsigned int *)this + 3)) )
    return 1;
  if ( !*(unsigned char *)(*((unsigned int *)this + 3) + 144) )
    return 0;
LABEL_147:
  cc146 = aP3_8 <= 0;
  *((unsigned int *)this + 19) = aP3_8;
  if ( cc146 )
    return 0;
  v121 = *(IUnknown **)((char *)this + 88);
  if ( (int)v121 <= -1 )
    return 0;
  v123 = (unsigned char *)(12 * (unsigned int)v121 + 8289064);
  eax150 = *((unsigned char *)this + 96) ? (char)v123[1] : (char)*v123;
  v145 = *((unsigned int *)this + 23);
  v146 = dword_7E7A28[4 * eax150];
  v147 = *(IUnknown **)(v146 + 12 * v145);
  v148 = v146 + 12 * v145;
  v149 = *(BuildingTypeClass **)(v148 + 4);
  v207 = v147;
  v208 = v149;
  if ( !v147 && !v149 && v145 )
    return 0;
  v150 = *((unsigned int *)this + 3) + 156;
  aP3_72 = *(unsigned int *)v150;
  v205 = *(IUnknown **)(v150 + 4);
  aP3_80 = *(unsigned int *)(v150 + 8);
  v188 = *(IUnknown **)(v148 + 8);
  v151 = *(unsigned int *)v150;
  v152 = *(unsigned int *)(v150 + 4);
  v195 = *(TechnoClass **)(v150 + 8);
  v153 = JumpjetLocomotion::TransformCoords(
           (unsigned int *)this,
           (IUnknown *)aP3_120,
           (IUnknown *)&v207,
           (ObjectClass *)&v188);
  v154 = *v153;
  v155 = (TechnoClass *)(v153[1] - v152);
  v156 = *((unsigned int *)this + 3) + 156;
  v219 = (TechnoClass *)(v154 - v151);
  aP3_148 = v155;
  aP3_152 = 0;
  v157 = *(unsigned int *)v156 + v154 - v151;
  esi185a = *(unsigned int *)(v156 + 4);
  v158 = *(TechnoClass **)(v156 + 8);
  IDA_HIDWORD(aP3_60) = (char *)v155 + esi185a;
  IDA_LODWORD(aP3_60) = v157;
  aP3_68 = v158;
  v159 = (IUnknown *)Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)&aP3_60);
  v161 = (double)*((int *)this + 19) * 0.1428571428571428;
  aP3_156 = 0;
  aP3_160 = 0;
  aP3_164 = 0;
  v180 = v161;
  eax185d = (TechnoClass **)Color::RGBFromFloat(&v193, (IUnknown *)&v219, v180);
  v219 = *eax185d;
  aP3_148 = eax185d[1];
  v162 = eax185d[2];
  IDA_LODWORD(varDC) = (char *)v219 + aP3_72;
  aP3_152 = v162;
  IDA_HIDWORD(varDC) = (char *)aP3_148 + (unsigned int)v205;
  v186 = (TechnoClass *)((char *)v162 + aP3_80);
  v163 = (IUnknown *)Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)&aP3_72);
  aP3_52 = v163;
  v165 = (IUnknown *)Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)&varDC);
  v166 = *((unsigned int *)this + 3) + 156;
  *(unsigned int *)v185 = *(unsigned int *)v166;
  edx185 = *(unsigned int *)(v166 + 4);
  *(unsigned int *)&v185[4] = edx185;
  v167 = *(TechnoClass **)(v166 + 8);
  *(unsigned int *)&v185[8] = v167;
  v169 = __PAIR64__(edx185, *(unsigned int *)v185);
  if ( v165 == v159 || v165 == v163 )
  {
    v169 = *(unsigned long long *)&varDC;
    v167 = v186;
    *(double *)v185 = varDC;
LABEL_190:
    *(unsigned int *)&v185[8] = v167;
  }
  else if ( *((int *)this + 19) > 3 )
  {
    v167 = aP3_68;
    *(unsigned long long *)v185 = aP3_60;
    v169 = aP3_60;
    goto LABEL_190;
  }
  aP3_132 = v169;
  aP3_140 = v167;
  eax191 = Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)&aP3_132);
  v170 = *(MouseClass **)((char *)this + 12);
  aP3_48 = (int)eax191;
  v172 = *(unsigned int *)&v170->__pad_74[40];
  v173 = *(unsigned int *)&v170->__pad_74[44];
  v195 = *(TechnoClass **)&v170->__pad_74[48];
  v174 = v173 / 256;
  if ( (uint16_t)(*(unsigned int *)v185 / 256) == (uint16_t)(v172 / 256)
    && (uint16_t)(*(unsigned int *)&v185[4] / 256) == (unsigned short)v174 )
  {
    v177 = v170->__pad_74[0];
    v170->__pad_74[0] = 0;
    (*(void (**)(unsigned int, unsigned char *))(**(unsigned int **)((char *)this + 12) + 436))(*((unsigned int *)this + 3), v185);
    *(unsigned char *)(*((unsigned int *)this + 3) + 116) = v177;
    return 0;
  }
  else
  {
    (*(void (**)(MouseClass *, unsigned int))(v170->field_0 + 292))(v170, 0);
    (*(void (**)(unsigned int, unsigned char *))(**(unsigned int **)((char *)this + 12) + 436))(*((unsigned int *)this + 3), v185);
    ecx193 = aP3_52;
    v175 = (IUnknown *)aP3_48;
    if ( *(char *)(aP3_48 + 283) != SHIBYTE(aP3_52->field_118) - 4 )
      goto LABEL_196;
    if ( (*(unsigned int *)(aP3_48 + 320) & 0x100) == 0 )
      goto LABEL_197;
    *(unsigned char *)(*((unsigned int *)this + 3) + 140) = 1;
LABEL_196:
    if ( (v175->field_140 & 0x100) == 0 )
    {
LABEL_197:
      if ( (ecx193->field_140 & 0x100) != 0 )
        *(unsigned char *)(*((unsigned int *)this + 3) + 140) = 0;
    }
    (*(void (**)(IUnknown *, int))(**(unsigned int **)((char *)this + 12) + 292))(ecx193, 1);
    return 0;
  }

}
} // namespace gamemd

// 0x4B2630
namespace gamemd {
int JumpjetLocomotion::Update(unsigned char * a2, int a3, int a4)
{

  int v5; // ecx
  unsigned int v6; // ebx
  int v7; // ecx
  char v8; // al
  char result; // al
  int v10; // ecx
  int v11; // ecx
  unsigned int *v12; // eax
  unsigned int *v13; // eax
  int v14; // eax
  int v15; // eax
  wchar_t *v16; // edi
  int v17; // edx
  wchar_t **v18; // esi
  int v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // ecx
  unsigned int *v22; // ebx
  int v23; // ecx
  char v24; // al
  unsigned int *v25; // ecx
  int v26; // ecx
  unsigned int *v27; // eax
  unsigned int *v28; // eax
  unsigned int *v29; // ecx
  unsigned int *Value; // edi
  unsigned int *v31; // esi
  int v32; // kr0C_4
  unsigned int v33; // edx
  unsigned int *v34; // eax
  unsigned char *v35; // ecx
  int v36; // edi
  unsigned int v37; // esi
  void *v38; // eax
  int v39; // eax
  int v40; // edx
  unsigned int *v41; // edi
  unsigned int *v42; // ecx
  int v43; // esi
  int GroundHeight; // eax
  int ClosestObject; // eax
  unsigned int *v46; // eax
  unsigned int *v47; // eax
  unsigned int *v48; // ecx
  int64_t v49; // rax
  unsigned int *v50; // ecx
  unsigned int *v51; // ecx
  int64_t v52; // rax
  unsigned int *v53; // ecx
  int v54; // eax
  int v55; // eax
  unsigned int *v56; // ecx
  unsigned int *v57; // eax
  int v58; // kr10_4
  int v59; // edx
  int16_t v60; // cx
  unsigned char *v61; // ecx
  int v62; // esi
  void *v63; // eax
  int v64; // eax
  int v65; // eax
  unsigned int *v66; // esi
  unsigned int *v67; // ecx
  int v68; // edi
  int v69; // eax
  int v70; // eax
  unsigned int *v71; // eax
  unsigned int *v72; // eax
  unsigned int *v73; // ecx
  int64_t v74; // rax
  unsigned int *v75; // ecx
  unsigned int *v76; // ecx
  int64_t v77; // rax
  int *v78; // eax
  int v79; // ecx
  char *v80; // eax
  int v81; // ecx
  int v82; // edi
  unsigned int *v83; // eax
  unsigned int *v84; // eax
  int v85; // ecx
  int v86; // edx
  unsigned int *v87; // eax
  int v88; // ecx
  unsigned int *v89; // esi
  int v90; // eax
  int v91; // ecx
  int v92; // eax
  int v93; // edx
  int v94; // esi
  int v95; // edx
  unsigned int *v96; // ebx
  int v97; // eax
  int v98; // eax
  unsigned int *v99; // edx
  int v100; // ecx
  int v101; // ecx
  int v102; // edi
  int v103; // esi
  int v104; // eax
  int v105; // edx
  int v106; // eax
  char v107; // bl
  unsigned int *v108; // ecx
  unsigned int *v109; // edx
  wchar_t *v110; // eax
  unsigned int *v111; // eax
  unsigned int *v112; // eax
  int v113; // edx
  int v114; // eax
  double v115; // st7
  unsigned int *v116; // ecx
  int64_t v117; // rax
  unsigned int *v118; // ecx
  unsigned int *v119; // edx
  int v120; // esi
  int v121; // ecx
  unsigned int *v122; // eax
  unsigned int *v123; // eax
  char v124; // al
  int v125; // ecx
  wchar_t *v126; // esi
  wchar_t *v127; // eax
  wchar_t *v128; // ecx
  wchar_t **v129; // edx
  unsigned int *v130; // eax
  unsigned int *v131; // eax
  int Object; // eax
  int *v133; // ecx
  int v134; // esi
  unsigned int *v135; // eax
  int v136; // eax
  int v137; // esi
  void *v138; // eax
  unsigned int *v139; // eax
  int *Coords; // eax
  int v141; // esi
  unsigned int *v142; // edx
  int v143; // edi
  bool v144; // cc
  double v145; // st7
  double v147; // st7
  uint8_t v148; // c0
  uint8_t v149; // c3
  double *v150; // ecx
  int v151; // ecx
  unsigned int *v152; // ecx
  unsigned int v153; // esi
  unsigned int *v154; // eax
  int v155; // edi
  int v156; // ecx
  int v157; // edx
  int v158; // eax
  int v159; // ecx
  double v160; // st7
  char v161; // dl
  int v162; // ecx
  int v163; // ecx
  unsigned int *NeighbourContent; // eax
  unsigned int *v165; // edi
  int v166; // eax
  int v167; // eax
  unsigned int v168; // eax
  unsigned int *v169; // eax
  int v170; // eax
  int v171; // esi
  int *v172; // edi
  int v173; // edx
  int v174; // ecx
  int v175; // edi
  void *v176; // eax
  int v177; // ebx
  unsigned int *v178; // ecx
  unsigned int *v179; // eax
  int v180; // edi
  unsigned int *v181; // ecx
  int v182; // edx
  int v183; // eax
  int v184; // eax
  double v185; // st7
  unsigned int *v186; // ecx
  int64_t v187; // rax
  unsigned int *v188; // ecx
  unsigned int *v189; // ecx
  unsigned int *v190; // edx
  int v191; // edi
  int64_t v192; // rax
  unsigned int *v193; // eax
  unsigned char *v194; // edx
  int *v195; // esi
  int v196; // edx
  int v197; // eax
  int v198; // ecx
  int v199; // ecx
  int v200; // edx
  bool v201; // zf
  int v202; // eax
  unsigned int *v203; // eax
  int v204; // ecx
  int v205; // [esp+70h] [ebp-6Ch]
  int LandHeight; // [esp+74h] [ebp-68h]
  int v207; // [esp+74h] [ebp-68h]
  unsigned char *v208; // [esp+74h] [ebp-68h]
  int v209; // [esp+74h] [ebp-68h]
  char v210; // [esp+7Ch] [ebp-60h]
  int v211; // [esp+7Ch] [ebp-60h]
  int v212; // [esp+7Ch] [ebp-60h]
  int v213; // [esp+80h] [ebp-5Ch]
  char v214; // [esp+93h] [ebp-49h]
  int v215; // [esp+94h] [ebp-48h] BYREF
  double v216; // [esp+98h] [ebp-44h] BYREF
  int v217; // [esp+A0h] [ebp-3Ch]
  int v218; // [esp+A4h] [ebp-38h] BYREF
  int v219; // [esp+A8h] [ebp-34h] BYREF
  unsigned int *v220; // [esp+ACh] [ebp-30h] BYREF
  int v221; // [esp+B0h] [ebp-2Ch]
  int v222; // [esp+B4h] [ebp-28h]
  int v223; // [esp+B8h] [ebp-24h] BYREF
  int v224; // [esp+BCh] [ebp-20h]
  int v225; // [esp+C0h] [ebp-1Ch]
  unsigned int *v226; // [esp+C4h] [ebp-18h] BYREF
  wchar_t *v227; // [esp+C8h] [ebp-14h]
  int v228; // [esp+CCh] [ebp-10h]
  int v229; // [esp+D0h] [ebp-Ch] BYREF
  wchar_t *v230; // [esp+D4h] [ebp-8h]

  v5 = *((unsigned int *)this + 1);
  v6 = *(unsigned int *)(*((unsigned int *)this + 3) + 1504);
  v215 = (char *)this + 4;
  if ( !(*(uint8_t (**)(int))(v5 + 16))((char *)this + 4) && v6 == -1 )
  {
    *((unsigned char *)this + 97) = 0;
    if ( *((unsigned int *)this + 16) != g_abs_8A0790
      || *((unsigned int *)this + 17) != g_abs_8A0794
      || *((unsigned int *)this + 18) != g_abs_8A0798 )
    {
      *((unsigned int *)this + 16) = g_abs_8A0790;
      *((unsigned int *)this + 17) = g_abs_8A0794;
      *((unsigned int *)this + 18) = g_abs_8A0798;
      *((unsigned char *)this + 99) = 0;
    }
    if ( (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 388))(*((unsigned int *)this + 3)) == 2 )
    {
      v8 = (*(int (**)(int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1156))(v7, 0, 1);
      *a2 = v8;
      return 0;
    }
    return 0;
  }
  if ( *((unsigned int *)this + 13) == g_abs_8A0790
    && *((unsigned int *)this + 14) == g_abs_8A0794
    && *((unsigned int *)this + 15) == g_abs_8A0798
    || (*(uint8_t (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 468))(*((unsigned int *)this + 3))
    || (*(uint8_t (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 472))(*((unsigned int *)this + 3)) )
  {
    return 0;
  }
  if ( *(unsigned int *)(*((unsigned int *)this + 3) + 720) && TechnoClass::CountPassengers() )
    return 1;
  if ( (*(uint8_t (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 892))(*((unsigned int *)this + 3))
    || (*(uint8_t (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 896))(*((unsigned int *)this + 3)) )
  {
    return 1;
  }
  if ( v6 != -1 )
  {
    v10 = *(unsigned int *)(*((unsigned int *)this + 3) + 1444);
    if ( v10 && (*(int (**)(int))(*(unsigned int *)v10 + 44))(v10) == 1
      || (v11 = *(unsigned int *)(*((unsigned int *)this + 3) + 1444)) != 0
      && (*(int (**)(int))(*(unsigned int *)v11 + 44))(v11) == 15 )
    {
      v12 = (unsigned int *)(*(int (**)(unsigned int, unsigned int **))(**(unsigned int **)((char *)this + 12) + 72))(
                        *((unsigned int *)this + 3),
                        &v226);
      v13 = Coord::Subtract(
              &v216,
              *v12 - *((unsigned int *)this + 13),
              v12[1] - *((unsigned int *)this + 14),
              v12[2] - *((unsigned int *)this + 15));
      v220 = (unsigned int *)*v13;
      v221 = v13[1];
      v222 = v13[2];
      v14 = (int)Coord::Length((int *)&v220) / 256;
      if ( v14 < 24 )
      {
        *(unsigned int *)(*((unsigned int *)this + 3) + 4 * v14 + 1504) = -1;
        v6 = *(unsigned int *)(*((unsigned int *)this + 3) + 1504);
      }
    }
    if ( v6 != -1 )
      goto LABEL_125;
  }
  v15 = *((unsigned int *)this + 3);
  v16 = g_abs_A8ED84;
  v17 = *(unsigned int *)(v15 + 1600);
  v18 = (wchar_t **)(v15 + 1600);
  v19 = *(unsigned int *)(v15 + 1608);
  if ( v17 != -1 )
  {
    if ( (int)g_abs_A8ED84 - v17 >= v19 )
      goto LABEL_31;
    v19 -= (int)g_abs_A8ED84 - v17;
  }
  if ( v19 )
    return 0;
LABEL_31:
  v20 = (wchar_t *)Math::RoundToInt(*((double *)g_abs_8871E0 + 748) * 900.0);
  v21 = v227;
  *v18 = v16;
  v22 = (unsigned int *)((char *)this + 52);
  v18[1] = v21;
  v18[2] = v20;
  v23 = *((unsigned int *)this + 3);
  IDA_LOWORD(v216) = *((unsigned int *)this + 13) / 256;
  IDA_WORD1(v216) = *((unsigned int *)this + 14) / 256;
  v24 = FootClass::MovementStep(v23, (int)v16, IDA_SLODWORD(v216), 0, 0, v213);
  v25 = *(unsigned int **)((char *)this + 12);
  if ( !v24 )
  {
    if ( !v25 )
    {
      *a2 = 1;
      return 0;
    }
    if ( !(*(uint8_t (**)(unsigned int *, int))(*v25 + 716))(v25, (char *)this + 52) )
    {
      (*(void (**)(int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1152))(v26, 0, 1);
      return 0;
    }
    if ( *v22 == g_abs_8A0790
      && *((unsigned int *)this + 14) == g_abs_8A0794
      && *((unsigned int *)this + 15) == g_abs_8A0798 )
    {
      return 0;
    }
    if ( !(uint8_t)FootClass::ClearSomeVector2(*((unsigned int *)this + 3))
      && (v27 = (unsigned int *)(*(int (**)(unsigned int, unsigned int **))(**(unsigned int **)((char *)this + 12) + 72))(
                            *((unsigned int *)this + 3),
                            &v226),
          v28 = Coord::Subtract(&v216, *v27 - *v22, v27[1] - *((unsigned int *)this + 14), v27[2] - *((unsigned int *)this + 15)),
          v220 = (unsigned int *)*v28,
          v221 = v28[1],
          v222 = v28[2],
          (int)Coord::Length((int *)&v220) < *((unsigned int *)g_abs_8871E0 + 1478))
      && ((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 388))(*((unsigned int *)this + 3)) == 2
       || (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 388))(*((unsigned int *)this + 3)) == 11) )
    {
      if ( *((unsigned int *)this + 16) != g_abs_8A0790
        || *((unsigned int *)this + 17) != g_abs_8A0794
        || *((unsigned int *)this + 18) != g_abs_8A0798 )
      {
        *((unsigned int *)this + 16) = g_abs_8A0790;
        *((unsigned int *)this + 17) = g_abs_8A0794;
        *((unsigned int *)this + 18) = g_abs_8A0798;
        *((unsigned char *)this + 99) = 0;
      }
      v29 = *(unsigned int **)((char *)this + 12);
      if ( v29[358] )
      {
        FootClass::ClearPathIndex(v29);
        if ( (*(uint8_t (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1156))(
               *((unsigned int *)this + 3),
               0,
               1) )
        {
          return 1;
        }
      }
      else
      {
        (*(void (**)(unsigned int *, unsigned int, int))(*v29 + 1152))(v29, 0, 1);
      }
      if ( !*(unsigned char *)(*((unsigned int *)this + 3) + 144) )
        return 0;
    }
    else
    {
      Value = ProgressTimer::GetValue((unsigned short *)(*((unsigned int *)this + 3) + 904), &a3);
      v31 = (unsigned int *)(*(int (**)(unsigned int, unsigned int **))(**(unsigned int **)((char *)this + 12) + 72))(
                        *((unsigned int *)this + 3),
                        &v226);
      v32 = v31[1];
      v33 = ((unsigned int)((*Value >> 12) + 1) >> 1) & 7;
      IDA_LOWORD(a2) = IDA_LOWORD(g_abs_89F688[v33]) + *v31 / 256;
      IDA_HIWORD(a2) = v32 / 256 + IDA_HIWORD(g_abs_89F688[v33]);
      a4 = (int)a2;
      if ( LayerClass::IsWithinUsableArea(&g_abs_87F7E8, (int16_t *)&a4, 1) )
      {
        v34 = ProgressTimer::GetValue((unsigned short *)(*((unsigned int *)this + 3) + 904), &a2);
        v35 = *(unsigned char **)((char *)this + 12);
        v36 = *(unsigned int *)v35;
        v37 = ((unsigned int)((*v34 >> 12) + 1) >> 1) & 7;
        LandHeight = ObjectClass::GetLandHeight(v35);
        v38 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&a4);
        v39 = (*(int (**)(unsigned int, void *, unsigned int, int, unsigned int, int))(v36 + 428))(
                *((unsigned int *)this + 3),
                v38,
                v37,
                LandHeight,
                0,
                1);
        if ( v39 == 3 )
        {
          v40 = *((unsigned int *)this + 3);
          a2 = (unsigned char *)a4;
          Cell::IsPassableAllied(v40, (int16_t *)&a2);
        }
        else if ( v39 == 6 )
        {
          v41 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&a4);
          v42 = (unsigned int *)(*((unsigned int *)this + 3) + 156);
          v226 = (unsigned int *)*v42;
          v43 = v42[2];
          v227 = (wchar_t *)v42[1];
          v217 = 0;
          v220 = 0;
          v221 = 0;
          IDA_LODWORD(v216) = ((int16_t)a4 << 8) + 128;
          IDA_HIDWORD(v216) = (SHIWORD(a4) << 8) + 128;
          GroundHeight = Cell::GetGroundHeight(&v216);
          ClosestObject = Object::FindClosestObjectCell(v41, &v220, v43 > GroundHeight + 2 * g_abs_8A07D0, 0);
          if ( ClosestObject )
          {
            if ( Object::IsAlliedWithObjectHouse(*(unsigned int **)(*((unsigned int *)this + 3) + 540), ClosestObject)
              && !*(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3))
                           + 3220) )
            {
              v46 = (unsigned int *)(*(int (**)(unsigned int, unsigned int **))(**(unsigned int **)((char *)this + 12) + 72))(
                                *((unsigned int *)this + 3),
                                &v226);
              v47 = Coord::Subtract(
                      &v216,
                      *v46 - *v22,
                      v46[1] - *((unsigned int *)this + 14),
                      v46[2] - *((unsigned int *)this + 15));
              v220 = (unsigned int *)*v47;
              v221 = v47[1];
              v222 = v47[2];
              if ( (int)Coord::Length((int *)&v220) < *((unsigned int *)g_abs_8871E0 + 1478)
                && !Team::AllMembersValid(*(int **)((char *)this + 12)) )
              {
                v48 = (unsigned int *)(*((unsigned int *)this + 3) + 156);
                v226 = (unsigned int *)*v48;
                v227 = (wchar_t *)v48[1];
                v49 = *((unsigned int *)this + 15) - v48[2];
                if ( (int)((IDA_HIDWORD(v49) ^ v49) - IDA_HIDWORD(v49)) < 2 * g_abs_8A07D0 )
                {
                  v220 = (unsigned int *)*v48;
                  v221 = v48[1];
                  v222 = v48[2];
                  if ( *((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, &v220) + 59) != 10 )
                  {
                    if ( *((unsigned int *)this + 16) != g_abs_8A0790
                      || *((unsigned int *)this + 17) != g_abs_8A0794
                      || *((unsigned int *)this + 18) != g_abs_8A0798 )
                    {
                      *((unsigned int *)this + 16) = g_abs_8A0790;
                      *((unsigned int *)this + 17) = g_abs_8A0794;
                      *((unsigned int *)this + 18) = g_abs_8A0798;
                      *((unsigned char *)this + 99) = 0;
                    }
                    v50 = *(unsigned int **)((char *)this + 12);
                    if ( !v50[358] )
                    {
                      (*(void (**)(unsigned int *, unsigned int, int))(*v50 + 1152))(v50, 0, 1);
                      return 0;
                    }
                    FootClass::ClearPathIndex(v50);
                    return (*(uint8_t (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1156))(
                             *((unsigned int *)this + 3),
                             0,
                             1) != 0;
                  }
                }
              }
              if ( (v41[80] & 0x100) == 0
                || (v51 = *(unsigned int **)((char *)this + 12),
                    IDA_LOBYTE(a2) = 1,
                    v51 += 39,
                    v226 = (unsigned int *)*v51,
                    v227 = (wchar_t *)v51[1],
                    v52 = v51[2] / g_abs_8A07D0 - *((char *)v41 + 283),
                    (int)((IDA_HIDWORD(v52) ^ v52) - IDA_HIDWORD(v52)) <= 2) )
              {
                IDA_LOBYTE(a2) = 0;
              }
              Cell::ApplyDamage(v41, (int)&g_abs_8A0790, 1, 1, (char)a2);
            }
          }
        }
      }
      v53 = *(unsigned int **)((char *)this + 12);
      v54 = v53[403];
      if ( v54 <= 0 )
      {
        if ( *((unsigned int *)this + 16) != g_abs_8A0790
          || *((unsigned int *)this + 17) != g_abs_8A0794
          || *((unsigned int *)this + 18) != g_abs_8A0798 )
        {
          *((unsigned int *)this + 16) = g_abs_8A0790;
          *((unsigned int *)this + 17) = g_abs_8A0794;
          *((unsigned int *)this + 18) = g_abs_8A0798;
          *((unsigned char *)this + 99) = 0;
        }
        if ( v53[358] )
        {
          FootClass::ClearPathIndex(v53);
          if ( (*(uint8_t (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1156))(
                 *((unsigned int *)this + 3),
                 0,
                 1) )
          {
            return 1;
          }
        }
        else
        {
          (*(void (**)(unsigned int *, unsigned int, int))(*v53 + 1152))(v53, 0, 1);
        }
        v55 = *((unsigned int *)this + 3);
        if ( !*(unsigned char *)(v55 + 144) )
          return 0;
        if ( *(unsigned char *)(v55 + 1674) )
          PlayVocClass(*((unsigned int *)g_abs_8871E0 + 448), 0x2000, 1.0, 0);
        *(unsigned char *)(*((unsigned int *)this + 3) + 1674) = 0;
      }
      else
      {
        v53[403] = v54 - 1;
      }
    }
    if ( !(*(uint8_t (**)(int))(*(unsigned int *)v215 + 16))(v215) )
    {
      v56 = *(unsigned int **)((char *)this + 12);
      if ( v56[173] )
      {
        if ( !(*(uint8_t (**)(unsigned int *, unsigned int))(*v56 + 940))(v56, v56[173]) )
        {
          *(unsigned char *)(*((unsigned int *)this + 3) + 1672) = 1;
          if ( *(unsigned int *)(*((unsigned int *)this + 3) + 1492) )
            TeamClass::WakeUpAllMembers();
          (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 968))(*((unsigned int *)this + 3), 0);
        }
      }
    }
    if ( *((unsigned int *)this + 16) != g_abs_8A0790
      || *((unsigned int *)this + 17) != g_abs_8A0794
      || *((unsigned int *)this + 18) != g_abs_8A0798 )
    {
      *((unsigned int *)this + 16) = g_abs_8A0790;
      *((unsigned int *)this + 17) = g_abs_8A0794;
      *((unsigned int *)this + 18) = g_abs_8A0798;
      *((unsigned char *)this + 99) = 0;
    }
    *((unsigned int *)this + 22) = -1;
    *((unsigned char *)this + 97) = 0;
    return 0;
  }
  if ( v25[376] == 8 )
    return 0;
  v57 = (unsigned int *)(*(int (**)(unsigned int *, unsigned int **))(*v25 + 72))(v25, &v226);
  v58 = v57[1];
  v59 = *(unsigned int *)(*((unsigned int *)this + 3) + 1504) & 7;
  v60 = IDA_HIWORD(g_abs_89F688[v59]);
  IDA_LOWORD(v216) = *v57 / 256 + IDA_LOWORD(g_abs_89F688[v59]);
  IDA_WORD1(v216) = v58 / 256 + v60;
  v218 = IDA_LODWORD(v216);
  if ( LayerClass::IsWithinUsableArea(&g_abs_87F7E8, (int16_t *)&v218, 1) )
  {
    v61 = *(unsigned char **)((char *)this + 12);
    v62 = *(unsigned int *)v61;
    v207 = ObjectClass::GetLandHeight(v61);
    v205 = *(unsigned int *)(*((unsigned int *)this + 3) + 1504);
    v63 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v218);
    v64 = (*(int (**)(unsigned int, void *, int, int, unsigned int, int))(v62 + 428))(
            *((unsigned int *)this + 3),
            v63,
            v205,
            v207,
            0,
            1);
    if ( v64 == 3 )
    {
      v65 = *((unsigned int *)this + 3);
      v219 = v218;
      Cell::IsPassableAllied(v65, (int16_t *)&v219);
    }
    else if ( v64 == 6 )
    {
      v66 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v218);
      v67 = (unsigned int *)(*((unsigned int *)this + 3) + 156);
      IDA_LODWORD(v216) = ((int16_t)v218 << 8) + 128;
      IDA_HIDWORD(v216) = (SHIWORD(v218) << 8) + 128;
      v217 = 0;
      v226 = (unsigned int *)*v67;
      v227 = (wchar_t *)v67[1];
      v68 = v67[2];
      v220 = 0;
      v221 = 0;
      v69 = Cell::GetGroundHeight(&v216);
      v70 = Object::FindClosestObjectCell(v66, &v220, v68 > v69 + 2 * g_abs_8A07D0, 0);
      if ( v70 )
      {
        if ( Object::IsAlliedWithObjectHouse(*(unsigned int **)(*((unsigned int *)this + 3) + 540), v70)
          && !*(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3220) )
        {
          v71 = (unsigned int *)(*(int (**)(unsigned int, unsigned int **))(**(unsigned int **)((char *)this + 12) + 72))(
                            *((unsigned int *)this + 3),
                            &v226);
          v72 = Coord::Subtract(&v216, *v71 - *v22, v71[1] - *((unsigned int *)this + 14), v71[2] - *((unsigned int *)this + 15));
          v220 = (unsigned int *)*v72;
          v221 = v72[1];
          v222 = v72[2];
          if ( (int)Coord::Length((int *)&v220) < *((unsigned int *)g_abs_8871E0 + 1478)
            && !Team::AllMembersValid(*(int **)((char *)this + 12)) )
          {
            v73 = (unsigned int *)(*((unsigned int *)this + 3) + 156);
            v226 = (unsigned int *)*v73;
            v227 = (wchar_t *)v73[1];
            v74 = *((unsigned int *)this + 15) - v73[2];
            if ( (int)((IDA_HIDWORD(v74) ^ v74) - IDA_HIDWORD(v74)) < 2 * g_abs_8A07D0 )
            {
              v220 = (unsigned int *)*v73;
              v221 = v73[1];
              v222 = v73[2];
              if ( *((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, &v220) + 59) != 10 )
              {
                if ( *((unsigned int *)this + 16) == g_abs_8A0790
                  && *((unsigned int *)this + 17) == g_abs_8A0794
                  && *((unsigned int *)this + 18) == g_abs_8A0798 )
                {
                  goto LABEL_118;
                }
                *((unsigned int *)this + 16) = g_abs_8A0790;
                *((unsigned int *)this + 17) = g_abs_8A0794;
                *((unsigned int *)this + 18) = g_abs_8A0798;
                goto LABEL_117;
              }
            }
          }
          if ( (v66[80] & 0x100) == 0
            || (v76 = *(unsigned int **)((char *)this + 12),
                IDA_LOBYTE(v216) = 1,
                v76 += 39,
                v226 = (unsigned int *)*v76,
                v227 = (wchar_t *)v76[1],
                v77 = v76[2] / g_abs_8A07D0 - *((char *)v66 + 283),
                (int)((IDA_HIDWORD(v77) ^ v77) - IDA_HIDWORD(v77)) <= 2) )
          {
            IDA_LOBYTE(v216) = 0;
          }
          Cell::ApplyDamage(v66, (int)&g_abs_8A0790, 1, 1, SLOBYTE(v216));
        }
      }
    }
  }
  *(unsigned int *)(*((unsigned int *)this + 3) + 1612) = 10;
  v6 = *(unsigned int *)(*((unsigned int *)this + 3) + 1504);
LABEL_125:
  if ( v6 == 8 )
    return 0;
  v78 = Coord::Subtract(
          &v226,
          g_abs_89F6D8[2 * (v6 & 7)] + *(unsigned int *)(*((unsigned int *)this + 3) + 156),
          *(unsigned int *)(*((unsigned int *)this + 3) + 160) + g_abs_89F6DC[2 * (v6 & 7)],
          *(unsigned int *)(*((unsigned int *)this + 3) + 164));
  v223 = *v78;
  v79 = *((unsigned int *)this + 3) + 156;
  v224 = v78[1];
  v225 = v78[2];
  v220 = *(unsigned int **)v79;
  v221 = *(unsigned int *)(v79 + 4);
  v222 = *(unsigned int *)(v79 + 8);
  v80 = (char *)Coord::To_Cell(&g_abs_87F7E8, &v220);
  v81 = *((unsigned int *)this + 3);
  v82 = v80[283] + (*(unsigned char *)(v81 + 140) != 0 ? 4 : 0);
  v83 = Coord::Subtract(
          &v226,
          *(unsigned int *)(v81 + 156) + g_abs_89F6D8[2 * (v6 & 7)],
          *(unsigned int *)(v81 + 160) + g_abs_89F6DC[2 * (v6 & 7)],
          *(unsigned int *)(v81 + 164));
  v220 = (unsigned int *)*v83;
  v221 = v83[1];
  v222 = v83[2];
  v84 = Coord::To_Cell(&g_abs_87F7E8, &v220);
  v85 = *((unsigned int *)this + 3);
  if ( *(unsigned char *)(v85 + 140) != ((v84[80] >> 8) & 1) )
    *(unsigned char *)(v85 + 1675) = 1;
  if ( !(*(uint8_t (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 668))(*((unsigned int *)this + 3)) )
    return 1;
  IDA_LOWORD(v216) = v223 / 256;
  v86 = *((unsigned int *)this + 3);
  IDA_WORD1(v216) = v224 / 256;
  v219 = IDA_LODWORD(v216);
  if ( !Cell::IsPassableAllied(v86, (int16_t *)&v219) )
    return 1;
  if ( abs16(*(unsigned short *)ProgressTimer::GetValue((unsigned short *)(*((unsigned int *)this + 3) + 904), &v220) - ((unsigned short)v6 << 13)) )
  {
    IDA_LOWORD(a4) = (unsigned short)v6 << 13;
    (*(void (**)(int, int))(*(unsigned int *)v215 + 76))(v215, a4);
    return 1;
  }
  IDA_LOWORD(v216) = v223 / 256;
  IDA_WORD1(v216) = v224 / 256;
  v215 = IDA_LODWORD(v216);
  v87 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
  v88 = *((unsigned int *)this + 3);
  v89 = v87;
  v220 = v87;
  v214 = 0;
  (*(void (**)(int, unsigned int))(*(unsigned int *)v88 + 292))(v88, 0);
  v90 = (*(int (**)(unsigned int, unsigned int *, unsigned int, int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 428))(
          *((unsigned int *)this + 3),
          v89,
          v6,
          v82,
          0,
          1);
  v91 = *((unsigned int *)this + 3);
  IDA_LODWORD(v216) = v90;
  (*(void (**)(int, int))(*(unsigned int *)v91 + 292))(v91, 1);
  if ( IDA_SLODWORD(v216) < 7
    && *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3220)
    || (IDA_LODWORD(v216) == 5 || IDA_LODWORD(v216) == 4)
    && *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3368)
    && !v89[17] )
  {
    IDA_LODWORD(v216) = 0;
  }
  v92 = v89[17];
  v93 = IDA_LODWORD(v216);
  if ( v92 != -1 && !IDA_LODWORD(v216) && *(unsigned char *)(*((unsigned int *)g_abs_A83D84 + v92) + 557) )
  {
LABEL_148:
    v214 = 1;
    goto LABEL_149;
  }
  if ( v92 != -1 )
  {
    if ( !IDA_LODWORD(v216) )
    {
      if ( !*(unsigned char *)(*((unsigned int *)g_abs_A83D84 + v92) + 680)
        || *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 1460) != 12 )
      {
        goto LABEL_149;
      }
      goto LABEL_148;
    }
    goto LABEL_153;
  }
  if ( IDA_LODWORD(v216) )
  {
    v93 = IDA_LODWORD(v216);
LABEL_153:
    if ( v93 == 3 )
    {
      v95 = *((unsigned int *)this + 3);
      a4 = v215;
      Cell::IsPassableAllied(v95, (int16_t *)&a4);
      goto LABEL_155;
    }
    if ( v93 == 6 )
    {
      if ( !*(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3220) )
      {
        v108 = *(unsigned int **)((char *)this + 12);
        if ( (unsigned char)a3 )
        {
          v108[376] = -1;
          v109 = (unsigned int *)(*((unsigned int *)this + 3) + 1600);
          *v109 = g_abs_A8ED84;
          v110 = v227;
          goto LABEL_329;
        }
        v111 = (unsigned int *)(*(int (**)(unsigned int *, unsigned int **))(*v108 + 72))(v108, &v226);
        v112 = Coord::Subtract(
                 &v229,
                 *v111 - *((unsigned int *)this + 13),
                 v111[1] - *((unsigned int *)this + 14),
                 v111[2] - *((unsigned int *)this + 15));
        v220 = (unsigned int *)*v112;
        v113 = v112[1];
        v114 = v112[2];
        v221 = v113;
        v222 = v114;
        v115 = Math::Sqrt((double)v114 * (double)v114 + (double)v113 * (double)v113 + (double)(int)v220
                                                                                    * (double)(int)v220);
        if ( (int)Math::RoundToInt(v115) >= *((unsigned int *)g_abs_8871E0 + 1478)
          || (v116 = (unsigned int *)(*((unsigned int *)this + 3) + 156),
              v226 = (unsigned int *)*v116,
              v227 = (wchar_t *)v116[1],
              v117 = *((unsigned int *)this + 15) - v116[2],
              (int)((IDA_HIDWORD(v117) ^ v117) - IDA_HIDWORD(v117)) >= 2 * g_abs_8A07D0)
          || (v220 = (unsigned int *)*v116,
              v221 = v116[1],
              v222 = v116[2],
              *((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, &v220) + 59) == 10) )
        {
          if ( (*((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215) + 80) & 0x100) == 0
            || (v119 = (unsigned int *)(*((unsigned int *)this + 3) + 156),
                v226 = (unsigned int *)*v119,
                v227 = (wchar_t *)v119[1],
                v120 = v119[2],
                v121 = *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215) + 283),
                IDA_LOBYTE(a4) = 1,
                (int)abs32(v120 / g_abs_8A07D0 - v121) <= 2) )
          {
            IDA_LOBYTE(a4) = 0;
          }
          v210 = a4;
          v122 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
          Cell::ApplyDamage(v122, (int)&g_abs_8A0790, 1, 1, v210);
        }
        else
        {
          if ( *((unsigned int *)this + 16) != g_abs_8A0790
            || *((unsigned int *)this + 17) != g_abs_8A0794
            || *((unsigned int *)this + 18) != g_abs_8A0798 )
          {
            *((unsigned int *)this + 16) = g_abs_8A0790;
            *((unsigned int *)this + 17) = g_abs_8A0794;
            *((unsigned int *)this + 18) = g_abs_8A0798;
            *((unsigned char *)this + 99) = 0;
          }
          v118 = *(unsigned int **)((char *)this + 12);
          if ( v118[358] )
          {
            FootClass::ClearPathIndex(v118);
            if ( (*(uint8_t (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1156))(
                   *((unsigned int *)this + 3),
                   0,
                   1) )
            {
              return 1;
            }
          }
          else
          {
            (*(void (**)(unsigned int *, unsigned int, int))(*v118 + 1152))(v118, 0, 1);
          }
        }
      }
LABEL_155:
      v96 = (unsigned int *)((char *)this + 64);
      if ( *((unsigned int *)this + 16) != g_abs_8A0790
        || *((unsigned int *)this + 17) != g_abs_8A0794
        || *((unsigned int *)this + 18) != g_abs_8A0798 )
      {
        *v96 = g_abs_8A0790;
        *((unsigned int *)this + 17) = g_abs_8A0794;
        v97 = g_abs_8A0798;
        *((unsigned char *)this + 99) = 0;
        *((unsigned int *)this + 18) = v97;
      }
      if ( IDA_LODWORD(v216) == 2 )
      {
        v98 = *((unsigned int *)this + 3);
        if ( !*(unsigned char *)(v98 + 1719) )
        {
          *(unsigned char *)(v98 + 1719) = 1;
          v99 = (unsigned int *)(*((unsigned int *)this + 3) + 1640);
          v100 = *((unsigned int *)g_abs_8871E0 + 1498);
          *v99 = g_abs_A8ED84;
          v99[1] = v230;
          v99[2] = v100;
        }
        v101 = *((unsigned int *)this + 3);
        v102 = (int)g_abs_A8ED84;
        v103 = *(unsigned int *)(v101 + 1600);
        v104 = *(unsigned int *)(v101 + 1608);
        if ( v103 != -1 )
        {
          if ( (int)g_abs_A8ED84 - v103 >= v104 )
            goto LABEL_166;
          v104 -= (int)g_abs_A8ED84 - v103;
        }
        if ( !v104 )
        {
LABEL_166:
          if ( *(unsigned char *)(v101 + 1719) )
          {
            v105 = *(unsigned int *)(v101 + 1640);
            v106 = *(unsigned int *)(v101 + 1648);
            if ( v105 != -1 )
            {
              v102 = (int)g_abs_A8ED84 - v105;
              if ( (int)g_abs_A8ED84 - v105 >= v106 )
              {
LABEL_171:
                v107 = 1;
LABEL_199:
                IDA_LOWORD(a4) = *((unsigned int *)this + 13) / 256;
                IDA_HIWORD(a4) = *((unsigned int *)this + 14) / 256;
                v124 = FootClass::MovementStep(v101, v102, a4, 0, (v107 != 0) + 1, v213);
                v125 = *((unsigned int *)this + 3);
                if ( !v125 )
                {
                  *a2 = 1;
                  return 0;
                }
                if ( v124 || (*(uint8_t (**)(int, int))(*(unsigned int *)v125 + 716))(v125, (char *)this + 52) )
                {
                  v126 = g_abs_A8ED84;
                  v127 = (wchar_t *)Math::RoundToInt(*((double *)g_abs_8871E0 + 748) * 900.0);
                  v128 = v230;
                  v129 = (wchar_t **)(*((unsigned int *)this + 3) + 1600);
                  *v129 = v126;
                  v129[1] = v128;
                  v129[2] = v127;
                  return 1;
                }
                v75 = *(unsigned int **)((char *)this + 12);
LABEL_204:
                (*(void (**)(unsigned int *, unsigned int, int))(*v75 + 1152))(v75, 0, 1);
                return 0;
              }
              v106 -= v102;
            }
            if ( !v106 )
              goto LABEL_171;
          }
          v107 = 0;
          goto LABEL_199;
        }
        goto LABEL_209;
      }
      if ( IDA_LODWORD(v216) != 5 && IDA_LODWORD(v216) != 4 )
      {
LABEL_209:
        if ( *(unsigned char *)(*((unsigned int *)this + 3) + 1674) )
          PlayVocClass(*((unsigned int *)g_abs_8871E0 + 448), 0x2000, 1.0, 0);
        goto LABEL_219;
      }
      if ( !(unsigned char)a3 )
      {
        v220 = 0;
        v221 = 0;
        v130 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
        if ( Object::FindObjectCell(v130, &v220, 0) )
        {
          v220 = 0;
          v221 = 0;
          v131 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
          Object = Object::FindObjectCell(v131, &v220, 0);
          if ( !Object::IsAlliedWithObjectHouse(*(unsigned int **)(*((unsigned int *)this + 3) + 540), Object) )
          {
            v133 = *(int **)((char *)this + 12);
            v220 = 0;
            v221 = 0;
            v134 = *v133;
            v135 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
            v136 = Object::FindObjectCell(v135, &v220, 0);
            (*(void (**)(unsigned int, int, int, unsigned int))(v134 + 500))(*((unsigned int *)this + 3), 1, v136, 0);
          }
        }
        else if ( *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215) + 17) != -1
               && *(unsigned char *)(*((unsigned int *)g_abs_A83D84
                             + *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215) + 17))
                           + 680) )
        {
          v137 = **(unsigned int **)((char *)this + 12);
          v138 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
          (*(void (**)(unsigned int, int, void *, unsigned int))(v137 + 500))(*((unsigned int *)this + 3), 1, v138, 0);
        }
LABEL_219:
        if ( IDA_LODWORD(v216) != 7 )
        {
          *(unsigned char *)(*((unsigned int *)this + 3) + 1674) = 0;
          *((unsigned int *)this + 22) = -1;
          return 1;
        }
        if ( (unsigned char)a3 )
        {
          *(unsigned int *)(*((unsigned int *)this + 3) + 1504) = -1;
          v109 = (unsigned int *)(*((unsigned int *)this + 3) + 1600);
          *v109 = g_abs_A8ED84;
          v110 = v230;
          goto LABEL_329;
        }
        if ( *v96 != g_abs_8A0790
          || *((unsigned int *)this + 17) != g_abs_8A0794
          || *((unsigned int *)this + 18) != g_abs_8A0798 )
        {
          *v96 = g_abs_8A0790;
          *((unsigned int *)this + 17) = g_abs_8A0794;
          *((unsigned int *)this + 18) = g_abs_8A0798;
          goto LABEL_117;
        }
LABEL_118:
        v75 = *(unsigned int **)((char *)this + 12);
        if ( !v75[358] )
          goto LABEL_119;
        goto LABEL_335;
      }
      *(unsigned int *)(*((unsigned int *)this + 3) + 1504) = -1;
      v109 = (unsigned int *)(*((unsigned int *)this + 3) + 1600);
      *v109 = g_abs_A8ED84;
      v110 = v230;
LABEL_329:
      v109[1] = v110;
      v109[2] = 0;
      return JumpjetLocomotion::Update(a2, 0, 0);
    }
    if ( v93 != 1 )
      goto LABEL_155;
    v123 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
    CellClass::DamageAllObjects(v123);
    if ( (unsigned char)a3 )
    {
      v208 = a2;
      *(unsigned int *)(*((unsigned int *)this + 3) + 1504) = -1;
      return JumpjetLocomotion::Update(v208, 0, 0);
    }
    if ( *((unsigned int *)this + 16) == g_abs_8A0790
      && *((unsigned int *)this + 17) == g_abs_8A0794
      && *((unsigned int *)this + 18) == g_abs_8A0798 )
    {
      goto LABEL_118;
    }
    *((unsigned int *)this + 16) = g_abs_8A0790;
    *((unsigned int *)this + 17) = g_abs_8A0794;
    *((unsigned int *)this + 18) = g_abs_8A0798;
LABEL_117:
    *((unsigned char *)this + 99) = 0;
    goto LABEL_118;
  }
LABEL_149:
  if ( (int)abs32(v82 - *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215) + 283)) >= 2 )
  {
    v219 = v82;
    v94 = 1;
  }
  else
  {
    v219 = *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215) + 283);
    v94 = *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215) + 59);
  }
  v216 = g_abs_89EA40[9 * v94
                        + *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3))
                                    + 1660)];
  if ( v216 > 1.0 )
    v216 = 1.0;
  v139 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
  Coords = CellClass::GetCoords(v139, &v229);
  v141 = Cell::GetGroundHeight(Coords);
  v142 = (unsigned int *)(*((unsigned int *)this + 3) + 156);
  v226 = (unsigned int *)*v142;
  v227 = (wchar_t *)v142[1];
  v228 = v142[2];
  v143 = Cell::GetGroundHeight(&v226);
  v144 = v141 < v143;
  if ( v141 > v143 )
  {
    if ( (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 44))(*((unsigned int *)this + 3)) == 1 )
    {
      if ( *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 1660) == 1 )
        v145 = v216 * *((double *)g_abs_8871E0 + 237);
      else
        v145 = v216 * *((double *)g_abs_8871E0 + 239);
LABEL_241:
      v216 = v145;
      goto LABEL_242;
    }
    v144 = v141 < v143;
  }
  if ( v144 && (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 44))(*((unsigned int *)this + 3)) == 1 )
  {
    if ( *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 1660) == 1 )
      v145 = v216 * *((double *)g_abs_8871E0 + 238);
    else
      v145 = v216 * *((double *)g_abs_8871E0 + 240);
    goto LABEL_241;
  }
LABEL_242:
  if ( v216 == 0.0 )
    v216 = 0.5;
  BuildingClass::GetHealthRatio(*(int **)((char *)this + 12));
  v147 = v216;
  if ( v148 | v149 )
  {
    v147 = v216 * 0.75;
    v216 = v216 * 0.75;
  }
  if ( *((int *)this + 22) >= 64 )
  {
    v150 = *(double **)((char *)this + 12);
    if ( v147 != v150[175] )
      (*(void (**)(double *, unsigned int, unsigned int))(*(unsigned int *)v150 + 1348))(v150, IDA_LODWORD(v216), IDA_HIDWORD(v216));
  }
  else
  {
    *(double *)((char *)this + 80) = v147;
  }
  v151 = *((unsigned int *)this + 3);
  IDA_LOWORD(v216) = v223 / 256;
  IDA_WORD1(v216) = v224 / 256;
  (*(void (**)(int, double *, int))(*(unsigned int *)v151 + 1332))(v151, &v216, 1);
  v152 = *(unsigned int **)((char *)this + 12);
  v153 = v152[377];
  if ( v153 == -1 )
  {
    v154 = (unsigned int *)(*(int (**)(unsigned int *, int *))(*v152 + 72))(v152, &v229);
    v155 = *((unsigned int *)this + 14);
    v156 = *v154 - *((unsigned int *)this + 13);
    v157 = v154[1];
    v158 = v154[2];
    IDA_LODWORD(v216) = v156;
    v159 = *((unsigned int *)this + 15);
    IDA_HIDWORD(v216) = v157 - v155;
    v217 = v158 - v159;
    v160 = Math::Sqrt(
             (double)(v158 - v159) * (double)(v158 - v159)
           + (double)(v157 - v155) * (double)(v157 - v155)
           + (double)IDA_SLODWORD(v216) * (double)IDA_SLODWORD(v216));
    if ( (int)Math::RoundToInt(v160) <= 512 )
    {
LABEL_262:
      v153 = v6;
      goto LABEL_263;
    }
    v161 = *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3220);
    v162 = *((unsigned int *)this + 3);
    IDA_LOWORD(v216) = *((unsigned int *)this + 13) / 256;
    IDA_WORD1(v216) = *((unsigned int *)this + 14) / 256;
    result = FootClass::MovementStep(v162, v155, IDA_SLODWORD(v216), v161 != 0, 0, v213);
    if ( !result )
    {
      v163 = *((unsigned int *)this + 3);
      if ( !v163 )
      {
        *a2 = 1;
        return result;
      }
      if ( !(*(uint8_t (**)(int, int))(*(unsigned int *)v163 + 716))(v163, (char *)this + 52) )
        (*(void (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1152))(*((unsigned int *)this + 3), 0, 1);
    }
    v153 = *(unsigned int *)(*((unsigned int *)this + 3) + 1508);
  }
  if ( v153 == 8 )
    v153 = v6;
  if ( v153 == -1 || (unsigned char)a4 )
    goto LABEL_262;
LABEL_263:
  if ( v153 != -1
    && (NeighbourContent = Cell::GetNeighbourContent(v220, v153), (v165 = NeighbourContent) != 0)
    && (v166 = NeighbourContent[17], v166 != -1)
    && ((v167 = *((unsigned int *)g_abs_A83D84 + v166), *(unsigned char *)(v167 + 557))
     || *(unsigned char *)(v167 + 680)
     && *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 1460) == 12
     || *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 1460) == 12
     && CellClass::FindBuilding(v165, 0))
    || v214 )
  {
    v153 = v6;
    *((unsigned char *)this + 100) = 1;
  }
  else
  {
    *((unsigned char *)this + 100) = 0;
  }
  v168 = v153 + 8 * v6;
  *((unsigned char *)this + 96) = 0;
  *((unsigned int *)this + 22) = v168;
  if ( !byte_7E7B28[12 * v168] )
    *((unsigned int *)this + 22) = 9 * v6;
  if ( (dword_7E7B30[3 * *((unsigned int *)this + 22)] & 8) != 0 )
  {
    v211 = *((unsigned int *)this + 3);
    v169 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
    if ( CrateClass::ProcessPickup(v169, v211) || (v170 = *((unsigned int *)this + 3), *(unsigned char *)(v170 + 129)) )
    {
      v172 = *(int **)((char *)this + 12);
      if ( !*((unsigned char *)v172 + 144) )
        return 0;
      v173 = v153 & 7;
      v174 = g_abs_89F6DC[2 * v173];
      v223 += g_abs_89F6D8[2 * v173];
      v224 += v174;
      IDA_LOWORD(a4) = v223 / 256;
      v209 = v219;
      IDA_HIWORD(a4) = v224 / 256;
      v215 = a4;
      v175 = *v172;
      v176 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
      v171 = (*(int (**)(unsigned int, void *, unsigned int, int, unsigned int, int))(v175 + 428))(
               *((unsigned int *)this + 3),
               v176,
               v153,
               v209,
               0,
               1);
      if ( v171 < 7
        && *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3220)
        || (v171 == 4 || v171 == 5)
        && *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3368)
        && !*((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215) + 17) )
      {
        v171 = 0;
      }
    }
    else
    {
      v171 = 7;
      if ( !*(unsigned char *)(v170 + 144) )
        return 0;
    }
    v75 = *(unsigned int **)((char *)this + 12);
    if ( !*((unsigned char *)v75 + 144) )
      return 0;
    if ( v171 )
    {
      v177 = a3;
      switch ( v171 )
      {
        case 3:
          a4 = v215;
          Cell::IsPassableAllied((int)v75, (int16_t *)&a4);
          goto LABEL_293;
        case 2:
          return JumpjetLocomotion::Update(a2, a3, 1);
        case 6:
          if ( *(unsigned char *)((*(int (**)(unsigned int *))(*v75 + 132))(v75) + 3220) )
            goto LABEL_293;
          v178 = *(unsigned int **)((char *)this + 12);
          if ( (unsigned char)v177 )
          {
            v178[376] = -1;
            v109 = (unsigned int *)(*((unsigned int *)this + 3) + 1600);
            *v109 = g_abs_A8ED84;
            v110 = v230;
            goto LABEL_329;
          }
          v179 = (unsigned int *)(*(int (**)(unsigned int *, int *))(*v178 + 72))(v178, &v229);
          v180 = *((unsigned int *)this + 14);
          v181 = (unsigned int *)(*v179 - *((unsigned int *)this + 13));
          v182 = v179[1];
          v183 = v179[2];
          v220 = v181;
          v184 = v183 - *((unsigned int *)this + 15);
          v221 = v182 - v180;
          v222 = v184;
          v185 = Math::Sqrt(
                   (double)(int)v181 * (double)(int)v181
                 + (double)v184 * (double)v184
                 + (double)(v182 - v180) * (double)(v182 - v180));
          if ( (int)Math::RoundToInt(v185) >= *((unsigned int *)g_abs_8871E0 + 1478)
            || (v186 = (unsigned int *)(*((unsigned int *)this + 3) + 156),
                v226 = (unsigned int *)*v186,
                v227 = (wchar_t *)v186[1],
                v187 = *((unsigned int *)this + 15) - v186[2],
                (int)((IDA_HIDWORD(v187) ^ v187) - IDA_HIDWORD(v187)) >= 2 * g_abs_8A07D0)
            || (v226 = (unsigned int *)*v186,
                v227 = (wchar_t *)v186[1],
                v228 = v186[2],
                *((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, &v226) + 59) == 10) )
          {
            v189 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
            if ( (v189[80] & 0x100) == 0
              || (v190 = *(unsigned int **)((char *)this + 12),
                  IDA_LOBYTE(a4) = 1,
                  v190 += 39,
                  v191 = *((char *)v189 + 283),
                  v226 = (unsigned int *)*v190,
                  v227 = (wchar_t *)v190[1],
                  v192 = v190[2] / g_abs_8A07D0 - v191,
                  (int)((IDA_HIDWORD(v192) ^ v192) - IDA_HIDWORD(v192)) <= 2) )
            {
              IDA_LOBYTE(a4) = 0;
            }
            Cell::ApplyDamage(v189, (int)&g_abs_8A0790, 1, 1, a4);
LABEL_293:
            *(unsigned int *)(*((unsigned int *)this + 3) + 1504) = -1;
            *((unsigned int *)this + 22) = -1;
            v223 = g_abs_8A0790;
            v224 = g_abs_8A0794;
            v225 = g_abs_8A0798;
            if ( v171 == 5 || v171 == 4 )
              return JumpjetLocomotion::Update(a2, v177, 1);
            goto LABEL_338;
          }
          if ( *((unsigned int *)this + 16) != g_abs_8A0790
            || *((unsigned int *)this + 17) != g_abs_8A0794
            || *((unsigned int *)this + 18) != g_abs_8A0798 )
          {
            *((unsigned int *)this + 16) = g_abs_8A0790;
            *((unsigned int *)this + 17) = g_abs_8A0794;
            *((unsigned int *)this + 18) = g_abs_8A0798;
            *((unsigned char *)this + 99) = 0;
          }
          v188 = *(unsigned int **)((char *)this + 12);
          if ( !v188[358] )
          {
            (*(void (**)(unsigned int *, unsigned int, int))(*v188 + 1152))(v188, 0, 1);
            goto LABEL_293;
          }
          FootClass::ClearPathIndex(v188);
          if ( !(*(uint8_t (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1156))(
                  *((unsigned int *)this + 3),
                  0,
                  1) )
            goto LABEL_293;
          return 1;
        case 1:
          v193 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
          CellClass::DamageAllObjects(v193);
          if ( (unsigned char)a3 )
          {
            v194 = a2;
            *(unsigned int *)(*((unsigned int *)this + 3) + 1504) = -1;
            return JumpjetLocomotion::Update(v194, 0, 0);
          }
          if ( *((unsigned int *)this + 16) != g_abs_8A0790
            || *((unsigned int *)this + 17) != g_abs_8A0794
            || *((unsigned int *)this + 18) != g_abs_8A0798 )
          {
            *((unsigned int *)this + 16) = g_abs_8A0790;
            *((unsigned int *)this + 17) = g_abs_8A0794;
            *((unsigned int *)this + 18) = g_abs_8A0798;
            *((unsigned char *)this + 99) = 0;
          }
          v75 = *(unsigned int **)((char *)this + 12);
          if ( v75[358] )
            goto LABEL_335;
LABEL_119:
          (*(void (**)(unsigned int *, unsigned int, int))(*v75 + 1152))(v75, 0, 1);
          return 0;
      }
      if ( v171 != 7 )
        goto LABEL_293;
      if ( (unsigned char)a3 )
      {
        v75[376] = -1;
        v109 = (unsigned int *)(*((unsigned int *)this + 3) + 1600);
        *v109 = g_abs_A8ED84;
        v110 = v230;
        goto LABEL_329;
      }
      if ( *((unsigned int *)this + 16) != g_abs_8A0790
        || *((unsigned int *)this + 17) != g_abs_8A0794
        || *((unsigned int *)this + 18) != g_abs_8A0798 )
      {
        *((unsigned int *)this + 16) = g_abs_8A0790;
        *((unsigned int *)this + 17) = g_abs_8A0794;
        *((unsigned int *)this + 18) = g_abs_8A0798;
        *((unsigned char *)this + 99) = 0;
      }
      if ( v75[358] )
      {
LABEL_335:
        FootClass::ClearPathIndex(v75);
        return (*(int (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1156))(
                 *((unsigned int *)this + 3),
                 0,
                 1);
      }
      goto LABEL_204;
    }
    qmemcpy(v75 + 376, v75 + 378, 0x58u);
    *(unsigned int *)(*((unsigned int *)this + 3) + 1592) = -1;
    *(unsigned char *)(*((unsigned int *)this + 3) + 1675) = 1;
  }
  else
  {
    qmemcpy((void *)(*((unsigned int *)this + 3) + 1504), (const void *)(*((unsigned int *)this + 3) + 1508), 0x5Cu);
  }
LABEL_338:
  v195 = (int *)((char *)this + 64);
  *(unsigned int *)(*((unsigned int *)this + 3) + 1596) = -1;
  IDA_LOWORD(a4) = v223 / 256;
  v196 = *((unsigned int *)this + 3);
  IDA_HIWORD(a4) = v224 / 256;
  *(unsigned int *)(v196 + 1368) = a4;
  *(unsigned char *)(*((unsigned int *)this + 3) + 1674) = 0;
  *((unsigned int *)this + 23) = 0;
  v197 = g_abs_8A0790;
  if ( *((unsigned int *)this + 16) != g_abs_8A0790
    || *((unsigned int *)this + 17) != g_abs_8A0794
    || *((unsigned int *)this + 18) != g_abs_8A0798 )
  {
    *v195 = g_abs_8A0790;
    *((unsigned int *)this + 17) = g_abs_8A0794;
    v198 = g_abs_8A0798;
    *((unsigned char *)this + 99) = 0;
    *((unsigned int *)this + 18) = v198;
    v197 = g_abs_8A0790;
  }
  v199 = v223;
  v200 = v225;
  v201 = v223 == v197;
  v202 = v224;
  if ( !v201 || v224 != g_abs_8A0794 || v225 != g_abs_8A0798 )
  {
    *((unsigned char *)this + 99) = 1;
    *v195 = v199;
    *((unsigned int *)this + 17) = v202;
    *((unsigned int *)this + 18) = v200;
    v212 = *((unsigned int *)this + 3);
    v203 = Coord::To_Cell(&g_abs_87F7E8, &v223);
    if ( CrateClass::ProcessPickup(v203, v212) && !*(unsigned char *)(*((unsigned int *)this + 3) + 129) )
    {
      JumpjetLocomotion::MoveTo(&v223, 1);
      return 0;
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 3) + 144) )
    {
      *v195 = g_abs_8A0790;
      *((unsigned int *)this + 17) = g_abs_8A0794;
      *((unsigned int *)this + 18) = g_abs_8A0798;
      *((unsigned char *)this + 99) = 0;
    }
  }
  v204 = *((unsigned int *)this + 3);
  *((unsigned int *)this + 22) = -1;
  *(unsigned int *)(v204 + 1504) = -1;
  (*(void (**)(unsigned int, unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 1348))(*((unsigned int *)this + 3), 0, 0);
  return 0;

}

} // namespace gamemd

// 0x4B4780
namespace gamemd {
unsigned int * JumpjetLocomotion::TransformCoords(IUnknown * aP1, IUnknown * aP2, ObjectClass * aP3)
{

  int aP3; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // edx
  int v9; // ecx

  aP3 = *(unsigned int *)aP3->__pad_0; /*0x4b478d*/
  v5 = dword_7E7B30[3 * *((unsigned int *)this + 22)]; /*0x4b4791*/
  v6 = aP2->field_0; /*0x4b479f*/
  v7 = aP2->field_4; /*0x4b47a1*/
  if ( (v5 & 1) != 0 ) /*0x4b47a4*/
  {
    v6 = aP2->field_4; /*0x4b47a8*/
    v7 = aP2->field_0; /*0x4b47aa*/
    aP3 = (uint8_t)(-64 - aP3); /*0x4b47b9*/
  }
  if ( (v5 & 2) != 0 ) /*0x4b47be*/
  {
    v6 = -v6; /*0x4b47c2*/
    aP3 = (uint8_t)-(char)aP3; /*0x4b47c4*/
  }
  if ( (v5 & 4) != 0 ) /*0x4b47cc*/
  {
    v7 = -v7; /*0x4b47d5*/
    aP3 = (uint8_t)(0x80 - aP3); /*0x4b47dd*/
  }
  *(unsigned int *)aP3->__pad_0 = aP3; /*0x4b47df*/
  v8 = *((unsigned int *)this + 16); /*0x4b47e2*/
  v9 = *((unsigned int *)this + 17); /*0x4b47e5*/
  aP1->field_0 = v6 + v8; /*0x4b47f2*/
  aP1->field_4 = v7 + v9; /*0x4b47f5*/
  return &aP1->field_0; /*0x4b47f0*/

}
}
// 0x54CA90
namespace gamemd {
void* JumpjetLocomotion::Land()
{

  int v2; // ecx
  int v3; // ebp
  char v4; // al
  double v5; // st7
  double v6; // st7
  int v7; // eax
  double v8; // st7
  int v9; // esi
  unsigned char *v10; // ecx
  unsigned int *v11; // eax
  unsigned int *v12; // esi
  unsigned int *v13; // ebp
  int *v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int *v22; // ecx
  unsigned int *v23; // esi
  int v24; // eax
  bool v25; // bl
  int v26; // eax
  int v27; // ecx
  int v28; // ebp
  int v29; // eax
  unsigned int *v30; // ecx
  int v31; // ecx
  unsigned int *v32; // ecx
  int v33; // eax
  int v34; // esi
  unsigned int *v35; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // esi
  unsigned int *v41; // eax
  int v42; // ecx
  char v44; // [esp+32h] [ebp-24h]
  char v45; // [esp+33h] [ebp-23h]
  char v46; // [esp+34h] [ebp-22h]
  char v47; // [esp+35h] [ebp-21h]
  int v48; // [esp+36h] [ebp-20h] BYREF
  int v49; // [esp+3Ah] [ebp-1Ch] BYREF
  int v50; // [esp+3Eh] [ebp-18h] BYREF
  int v51; // [esp+42h] [ebp-14h]
  int v52; // [esp+46h] [ebp-10h]
  int v53; // [esp+4Ah] [ebp-Ch] BYREF
  int v54; // [esp+4Eh] [ebp-8h]
  int v55; // [esp+52h] [ebp-4h]

  v2 = *((unsigned int *)this + 3); /*0x54ca99*/
  v50 = *(unsigned int *)(v2 + 156); /*0x54caa6*/
  v51 = *(unsigned int *)(v2 + 160); /*0x54caad*/
  v52 = *(unsigned int *)(v2 + 164); /*0x54cab4*/
  v3 = *(unsigned int *)(v2 + 164); /*0x54caba*/
  v53 = *(unsigned int *)(v2 + 156); /*0x54cabd*/
  v4 = *(unsigned char *)(v2 + 1709); /*0x54cac4*/
  v54 = *(unsigned int *)(v2 + 160); /*0x54cacc*/
  if ( v4 ) /*0x54cad0*/
  {
    v5 = (double)v52; /*0x54cad2*/
    *((unsigned int *)this + 28) = 0; /*0x54cad8*/
    *((unsigned int *)this + 30) = 0; /*0x54cadb*/
    v6 = v5 - *(float *)((char *)this + 40); /*0x54cade*/
    *((unsigned int *)this + 29) = 0; /*0x54cae1*/
    *((unsigned int *)this + 31) = 0; /*0x54cae4*/
    v7 = Math::RoundToInt(v6); /*0x54cae7*/
    v8 = *(float *)((char *)this + 40) + 1.0; /*0x54caef*/
    v52 = v7; /*0x54caf5*/
    *(float *)((char *)this + 40) = v8; /*0x54caf9*/
  }
  else
  {
    v52 = Math::RoundToInt((double)v52 - *(float *)((char *)this + 40)); /*0x54cb0a*/
    IDA_LOWORD(v48) = *(unsigned short *)ProgressTimer::GetValue((unsigned short *)((char *)this + 84), &v49) + 11520; /*0x54cb2a*/
    FacingClass::Update((char *)((char *)this + 84), &v48); /*0x54cb39*/
  }
  v9 = dword_ABC5DC + Cell::GetGroundHeight(&v50); /*0x54cb5e*/
  if ( (*((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, &v50) + 80) & 0x100) == 0 || v3 < v9 || (v44 = 1, v52 >= v9) ) /*0x54cb7f*/
    v44 = 0; /*0x54cb81*/
  IDA_LOWORD(v48) = v50 / 256; /*0x54cba0*/
  IDA_HIWORD(v48) = v51 / 256; /*0x54cbb5*/
  if ( LayerClass::CoordinatesLegal(&g_abs_87F7E8, (int16_t *)&v48) ) /*0x54cbc2*/
  {
    RemoveTarget(*((unsigned int *)this + 3)); /*0x54cbd4*/
    (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 292))(*((unsigned int *)this + 3), 0); /*0x54cbe1*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)((char *)this + 12) + 436))(*((unsigned int *)this + 3), &v50); /*0x54cbf1*/
    (*(void (**)(unsigned int, int))(**(unsigned int **)((char *)this + 12) + 292))(*((unsigned int *)this + 3), 1); /*0x54cbfe*/
    Targeting::Readd(*(unsigned int **)((char *)this + 12)); /*0x54cc0d*/
  }
  v45 = 0; /*0x54cc19*/
  if ( (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 456))(*((unsigned int *)this + 3)) > 0 && !v44 ) /*0x54cc30*/
    goto LABEL_74; /*0x54cc30*/
  v10 = *(unsigned char **)((char *)this + 12); /*0x54cc36*/
  if ( !v10[1063] ) /*0x54cc39*/
    goto LABEL_74; /*0x54cc41*/
  v46 = 0; /*0x54cc4e*/
  v11 = (unsigned int *)(*(int (**)(unsigned char *, int *))(*(unsigned int *)v10 + 72))(v10, &v53); /*0x54cc53*/
  IDA_LOWORD(v48) = *v11 / 256; /*0x54cc66*/
  IDA_HIWORD(v48) = v11[1] / 256; /*0x54cc7f*/
  v49 = v48; /*0x54cc8d*/
  v12 = (unsigned int *)*((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v49) + 57); /*0x54cc96*/
  if ( v12 == *(unsigned int **)((char *)this + 12) ) /*0x54cca1*/
    v12 = (unsigned int *)v12[12]; /*0x54cca3*/
  if ( v12 ) /*0x54cca8*/
  {
    if ( (*(int (**)(unsigned int *))(*v12 + 44))(v12) == 1 /*0x54ccc8*/
      || (*(int (**)(unsigned int *))(*v12 + 44))(v12) == 6 )
    {
      goto LABEL_64; /*0x54ccc8*/
    }
    if ( (*(int (**)(unsigned int *))(*v12 + 44))(v12) == 15 ) /*0x54ccd8*/
    {
      do /*0x54cd78*/
      {
        v13 = (unsigned int *)v12[12]; /*0x54cce1*/
        v14 = (int *)(*((unsigned int *)this + 3) + 156); /*0x54cce4*/
        v53 = *v14; /*0x54ccf0*/
        v54 = v14[1]; /*0x54ccf9*/
        v15 = *v12; /*0x54ccfd*/
        v55 = v14[2]; /*0x54cd02*/
        v16 = (*(int (**)(unsigned int *))(v15 + 136))(v12); /*0x54cd06*/
        StartAudioControllerAt(*(unsigned int *)(v16 + 496), (int)&v53, 0); /*0x54cd14*/
        v17 = *((unsigned int *)this + 3); /*0x54cd19*/
        v18 = *(unsigned int *)(v17 + 1064); /*0x54cd1e*/
        if ( v18 ) /*0x54cd26*/
        {
          (*(void (**)(unsigned int *, int))(*v12 + 224))(v12, v18); /*0x54cd2d*/
        }
        else
        {
          v19 = *v12; /*0x54cd3b*/
          if ( *(unsigned int *)(v17 + 1068) ) /*0x54cd35*/
            (*(void (**)(unsigned int *, unsigned int))(v19 + 228))(v12, *(unsigned int *)(v17 + 1068)); /*0x54cd44*/
          else
            (*(void (**)(unsigned int *, unsigned int))(v19 + 224))(v12, *((unsigned int *)this + 3)); /*0x54cd4f*/
        }
        (*(void (**)(unsigned int *, unsigned int))(*v12 + 292))(v12, 0); /*0x54cd5a*/
        (*(void (**)(unsigned int *))(*v12 + 212))(v12); /*0x54cd64*/
        (*(void (**)(unsigned int *))(*v12 + 248))(v12); /*0x54cd6e*/
        v12 = v13; /*0x54cd76*/
      }
      while ( v13 ); /*0x54cd78*/
    }
    else
    {
      v20 = *((unsigned int *)this + 3); /*0x54cd80*/
      v21 = *(unsigned int *)(v20 + 1064); /*0x54cd83*/
      if ( v21 ) /*0x54cd8b*/
      {
        (*(void (**)(unsigned int *, unsigned int *, unsigned int, int, int, int, unsigned int, unsigned int))(*v12 + 364))( /*0x54cd94*/
          v12,
          v12 + 27,
          0,
          g_abs_8871E0->?[6],
          v21,
          1,
          0,
          0);
      }
      else if ( *(unsigned int *)(v20 + 1068) ) /*0x54cd96*/
      {
        (*(void (**)(unsigned int *, unsigned int *, unsigned int, int, int, int, unsigned int, unsigned int))(*v12 + 364))( /*0x54cda3*/
          v12,
          v12 + 27,
          0,
          g_abs_8871E0->?[6],
          v20,
          1,
          0,
          *(unsigned int *)(v20 + 1068));
      }
      else
      {
        (*(void (**)(unsigned int *, unsigned int *, unsigned int, int, int, int, unsigned int, unsigned int))(*v12 + 364))( /*0x54cdbd*/
          v12,
          v12 + 27,
          0,
          g_abs_8871E0->?[6],
          v20,
          1,
          0,
          0);
      }
    }
  }
  v46 = 1; /*0x54cdc6*/
  v22 = (int *)(*((unsigned int *)this + 3) + 156); /*0x54cdcb*/
  v53 = *v22; /*0x54cdd3*/
  v54 = v22[1]; /*0x54cddf*/
  v55 = v22[2]; /*0x54cde6*/
  v23 = Coord::To_Cell(&g_abs_87F7E8, &v53); /*0x54cdf4*/
  v24 = v23[59]; /*0x54cdf6*/
  if ( v24 != 2 || (v47 = 1, v44) ) /*0x54ce0c*/
    v47 = 0; /*0x54ce0e*/
  v25 = v24 == 6 && !v44; /*0x54ce24*/
  v26 = (*(int (**)(unsigned int, unsigned int *, int, int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 428))( /*0x54ce34*/
          *((unsigned int *)this + 3),
          v23,
          -1,
          -1,
          0,
          1);
  v27 = *((unsigned int *)this + 3); /*0x54ce3a*/
  v28 = v26; /*0x54ce3d*/
  if ( v27 /*0x54ce5c*/
    && (*(int (**)(int))(*(unsigned int *)v27 + 44))(v27) == 2
    && !Cell::IsBuildable((int)v23, 2, 1, 1, -1, 0, -1, 1) )
  {
    v28 = 7; /*0x54ce65*/
  }
  if ( *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3476) /*0x54ce9a*/
    && !Cell::IsBuildable((int)v23, 2, 1, 1, -1, 0, -1, 1)
    || v28 )
  {
    if ( v47 && !v25 ) /*0x54ceae*/
    {
      *(unsigned char *)(*((unsigned int *)this + 3) + 973) = 1; /*0x54ceb7*/
      (*(void (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 928))(*((unsigned int *)this + 3)); /*0x54cec3*/
      v29 = *((unsigned int *)this + 3); /*0x54cec9*/
      v30 = *(unsigned int **)(v29 + 728); /*0x54cecc*/
      if ( v30 ) /*0x54ced4*/
      {
        TechnoClass::MutateAll(v30, *(unsigned int *)(v29 + 1064), 0); /*0x54cedf*/
        v31 = *(unsigned int *)(*((unsigned int *)this + 3) + 728); /*0x54cee7*/
        if ( v31 ) /*0x54ceef*/
          (*(void (**)(int, int))(*(unsigned int *)v31 + 32))(v31, 1); /*0x54cef5*/
        *(unsigned int *)(*((unsigned int *)this + 3) + 728) = 0; /*0x54cefb*/
      }
      v32 = *(unsigned int **)((char *)this + 12); /*0x54cf05*/
      if ( v32[266] ) /*0x54cf08*/
      {
        (*(void (**)(unsigned int *, unsigned int))(*v32 + 224))(v32, v32[266]); /*0x54cf15*/
      }
      else if ( v32[267] ) /*0x54cf20*/
      {
        (*(void (**)(unsigned int *, unsigned int))(*v32 + 228))(v32, v32[267]); /*0x54cf31*/
      }
      goto LABEL_65; /*0x54cf1b*/
    }
  }
  else
  {
    v33 = *((unsigned int *)this + 3); /*0x54cf3c*/
    if ( *(unsigned int *)(v33 + 1400) /*0x54cf75*/
      || *(unsigned int *)(v33 + 1404) != 1075052544 && (*(unsigned int *)(v33 + 1400) || *(unsigned int *)(v33 + 1404) != 1075576832)
      || v47 && !v25 )
    {
      v34 = *((unsigned int *)this + 3); /*0x54cf77*/
      if ( *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v34 + 444))(v34) + 224) == v34 ) /*0x54cf8a*/
      {
        v35 = (unsigned int *)(*(int (**)(int))(*(unsigned int *)v34 + 444))(v34); /*0x54cf92*/
        CellClass::AttachObject(v35, 0); /*0x54cf9a*/
      }
      v36 = *((unsigned int *)this + 3); /*0x54cf9f*/
      *((unsigned int *)this + 20) = 4; /*0x54cfa2*/
      (*(void (**)(int, unsigned int, int))(*(unsigned int *)v36 + 1152))(v36, 0, 1); /*0x54cfaf*/
      goto LABEL_65; /*0x54cfb5*/
    }
  }
LABEL_64:
  v45 = 1; /*0x54cfb7*/
LABEL_65:
  v37 = *((unsigned int *)this + 3); /*0x54cfbc*/
  if ( v37 && (*(int (**)(int))(*(unsigned int *)v37 + 456))(v37) > 0 ) /*0x54cfcf*/
  {
    if ( !v44 ) /*0x54cfd7*/
    {
      v38 = *((unsigned int *)this + 3); /*0x54cfd9*/
      if ( !*(unsigned char *)(v38 + 1709) || v45 ) /*0x54cfec*/
      {
        *(unsigned int *)(v38 + 1064) = 0; /*0x54cfee*/
        *(unsigned int *)(*((unsigned int *)this + 3) + 1068) = 0; /*0x54cff7*/
      }
      goto LABEL_74; /*0x54cffd*/
    }
  }
  else if ( !v44 ) /*0x54d005*/
  {
    goto LABEL_74; /*0x54d005*/
  }
  if ( v46 ) /*0x54d00d*/
    *(unsigned char *)(*((unsigned int *)this + 3) + 140) = 1; /*0x54d012*/
LABEL_74:
  if ( ((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 456))(*((unsigned int *)this + 3)) <= 0 /*0x54d043*/
     || (IDA_LOBYTE(v39) = v44) != 0)
    && (!*(unsigned char *)(*((unsigned int *)this + 3) + 1709) || (IDA_LOBYTE(v39) = v45) != 0) )
  {
    v40 = *((unsigned int *)this + 3); /*0x54d045*/
    if ( *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v40 + 444))(v40) + 224) == v40 ) /*0x54d058*/
    {
      v41 = (unsigned int *)(*(int (**)(int))(*(unsigned int *)v40 + 444))(v40); /*0x54d05f*/
      CellClass::AttachObject(v41, 0); /*0x54d067*/
    }
    GadgetGrid::RemoveItem(g_abs_887888, *((unsigned int *)this + 3)); /*0x54d075*/
    v42 = *((unsigned int *)this + 3); /*0x54d07a*/
    *((unsigned int *)this + 30) = 0; /*0x54d07d*/
    *((unsigned int *)this + 20) = 6; /*0x54d083*/
    *((unsigned int *)this + 31) = 0; /*0x54d08a*/
    (**(void (***)(int, int, unsigned int))(v42 + 8))(v42 + 8, 4476, 0); /*0x54d095*/
    v39 = *((unsigned int *)this + 3); /*0x54d097*/
    if ( v39 ) /*0x54d09c*/
    {
      *(unsigned int *)(v39 + 1064) = 0; /*0x54d09e*/
      v39 = *((unsigned int *)this + 3); /*0x54d0a4*/
      *(unsigned int *)(v39 + 1068) = 0; /*0x54d0a7*/
    }
  }
  return v39; /*0x54d0ad*/

}
} // namespace gamemd

// 0x54D0F0
namespace gamemd {
void* JumpjetLocomotion::UpdateFacing()
{

  int v2; // eax
  unsigned char *v3; // ecx
  double v4; // st7
  double v5; // st7
  uint8_t v7; // c0
  uint8_t v8; // c3
  int v9; // edi
  int v10; // ebp
  unsigned short *v11; // eax
  int v12; // eax
  double v13; // st7
  int64_t v14; // rax
  int v15; // ecx
  int v16; // ebp
  int v17; // ecx
  int GroundHeight; // ebx
  int v19; // eax
  int v20; // edx
  int v21; // edx
  int v22; // eax
  int v23; // edi
  int v24; // ebp
  int v25; // ecx
  int v26; // eax
  int *v27; // eax
  int v28; // ebx
  int v29; // ecx
  int v30; // ebp
  int v31; // ebp
  int v32; // ebx
  unsigned short *v33; // eax
  int v34; // ecx
  int *v35; // eax
  double v36; // st7
  int v37; // edi
  unsigned int v38; // ebp
  unsigned int v39; // ebx
  double v40; // st7
  double v41; // st7
  int v42; // eax
  int v43; // ecx
  unsigned char *v44; // ecx
  int v45; // edi
  int v46; // eax
  int *v47; // ecx
  int result; // eax
  double v49; // [esp+0h] [ebp-58h]
  int *v50; // [esp+4h] [ebp-54h]
  unsigned int *Value; // [esp+4h] [ebp-54h]
  char v52; // [esp+19h] [ebp-3Fh]
  char v53; // [esp+1Ah] [ebp-3Eh]
  char v54; // [esp+1Ah] [ebp-3Eh]
  char v55; // [esp+1Bh] [ebp-3Dh]
  int v56; // [esp+1Ch] [ebp-3Ch] BYREF
  double v57; // [esp+20h] [ebp-38h]
  double v58; // [esp+28h] [ebp-30h] BYREF
  double v59; // [esp+30h] [ebp-28h] BYREF
  int v60; // [esp+38h] [ebp-20h]
  int v61; // [esp+40h] [ebp-18h]
  int v62; // [esp+44h] [ebp-14h]
  unsigned int v63[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v2 = *((unsigned int *)this + 20); /*0x54d0ff*/
  if ( v2 == 2 || (v52 = 1, v2 == 3) ) /*0x54d10f*/
    v52 = 0; /*0x54d111*/
  v3 = *(unsigned char **)((char *)this + 12); /*0x54d116*/
  v55 = v3[116]; /*0x54d11c*/
  if ( v52 ) /*0x54d126*/
    (*(void (**)(unsigned char *, unsigned int))(*(unsigned int *)v3 + 292))(v3, 0); /*0x54d12c*/
  else
    v3[116] = 0; /*0x54d134*/
  if ( *(double *)((char *)this + 120) > *(double *)((char *)this + 112) ) /*0x54d143*/
  {
    v4 = *(float *)((char *)this + 48) + *(double *)((char *)this + 112); /*0x54d148*/
    *(double *)((char *)this + 112) = v4; /*0x54d14b*/
    v58 = (double)*((int *)this + 8); /*0x54d151*/
    if ( v4 >= v58 ) /*0x54d15e*/
      v4 = v58; /*0x54d162*/
    *(double *)((char *)this + 112) = v4; /*0x54d166*/
  }
  if ( *(double *)((char *)this + 120) < *(double *)((char *)this + 112) ) /*0x54d174*/
  {
    v5 = *(double *)((char *)this + 112) - *(float *)((char *)this + 48) * 1.5; /*0x54d17f*/
    *(double *)((char *)this + 112) = v5; /*0x54d188*/
    if ( v7 | v8 ) /*0x54d18d*/
      v5 = 0.0; /*0x54d194*/
    *(double *)((char *)this + 112) = v5; /*0x54d19a*/
  }
  v49 = *(double *)((char *)this + 112) / (double)*((int *)this + 8); /*0x54d1ab*/
  (*(void (**)(unsigned int, unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 1348))( /*0x54d1ae*/
    *((unsigned int *)this + 3),
    IDA_LODWORD(v49),
    IDA_HIDWORD(v49));
  v9 = *((unsigned int *)this + 16) / 256; /*0x54d1da*/
  v10 = *((unsigned int *)this + 17) / 256; /*0x54d1dd*/
  v11 = (unsigned short *)(*(int (**)(unsigned int, double *))(**(unsigned int **)((char *)this + 12) + 440))( /*0x54d1e0*/
                   *((unsigned int *)this + 3),
                   &v58);
  if ( *v11 != (unsigned short)v9 || (v53 = 1, v11[1] != (unsigned short)v10) ) /*0x54d1f4*/
    v53 = 0; /*0x54d1f6*/
  v12 = *((unsigned int *)this + 20); /*0x54d1fb*/
  if ( (v12 == 2 || v12 == 3) && !*((unsigned char *)this + 60) ) /*0x54d208*/
  {
    *(double *)((char *)this + 136) = 6.283185307179586 / (15.0 / *(float *)((char *)this + 52)) + *(double *)((char *)this + 136); /*0x54d224*/
  }
  else
  {
    *((unsigned int *)this + 34) = 0; /*0x54d22e*/
    *((unsigned int *)this + 35) = 0; /*0x54d234*/
  }
  v13 = Math::SinCos(*(double *)((char *)this + 136)); /*0x54d248*/
  v14 = Math::RoundToInt(v13 * (double)*((int *)this + 14) + (double)*((int *)this + 32)); /*0x54d259*/
  v15 = *((unsigned int *)this + 3); /*0x54d25e*/
  IDA_LODWORD(v57) = v14; /*0x54d261*/
  v16 = (*(int (__fastcall **)(int, unsigned int))(*(unsigned int *)v15 + 464))(v15, IDA_HIDWORD(v14)); /*0x54d270*/
  v17 = *((unsigned int *)this + 3) + 156; /*0x54d272*/
  v56 = v16; /*0x54d278*/
  v59 = *(double *)v17; /*0x54d27e*/
  v60 = *(unsigned int *)(v17 + 8); /*0x54d291*/
  GroundHeight = Cell::GetGroundHeight(&v59); /*0x54d29f*/
  v19 = *((unsigned int *)this + 3) + 156; /*0x54d2a4*/
  v59 = *(double *)v19; /*0x54d2ab*/
  v60 = *(unsigned int *)(v19 + 8); /*0x54d2c3*/
  if ( (*((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, &v59) + 80) & 0x100) != 0 ) /*0x54d2d5*/
  {
    v20 = *((unsigned int *)this + 3) + 156; /*0x54d2da*/
    v59 = *(double *)v20; /*0x54d2e2*/
    v21 = *(unsigned int *)(v20 + 8); /*0x54d2f5*/
    IDA_LODWORD(v58) = GroundHeight + 4 * dword_ABC5E8; /*0x54d2f8*/
    v60 = v21; /*0x54d2fc*/
    if ( (double)IDA_SLODWORD(v58) - *(float *)((char *)this + 40) <= (double)v21 ) /*0x54d312*/
      GroundHeight += dword_ABC5DC; /*0x54d314*/
  }
  v22 = *((unsigned int *)this + 20); /*0x54d31a*/
  if ( v22 == 4 /*0x54d339*/
    || !v22
    || v53
    && !*(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3434) )
  {
    v23 = v16 - GroundHeight; /*0x54d352*/
  }
  else
  {
    v23 = v16 - JumpjetLocomotionClass::GetFloorZSetContext(this); /*0x54d34c*/
  }
  IDA_LODWORD(v58) = v23; /*0x54d358*/
  v54 = 0; /*0x54d35e*/
  if ( v23 < IDA_SLODWORD(v57) ) /*0x54d363*/
  {
    v24 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 456))(*((unsigned int *)this + 3)); /*0x54d377*/
    v25 = *((unsigned int *)this + 3) + 156; /*0x54d379*/
    v59 = *(double *)v25; /*0x54d381*/
    v60 = *(unsigned int *)(v25 + 8); /*0x54d394*/
    if ( (*((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, &v59) + 80) & 0x100) != 0 ) /*0x54d3ab*/
    {
      v26 = *((unsigned int *)this + 3); /*0x54d3ad*/
      if ( !*(unsigned char *)(v26 + 140) ) /*0x54d3b0*/
      {
        v27 = (int *)(v26 + 156); /*0x54d3ba*/
        v61 = *v27; /*0x54d3c3*/
        v62 = v27[1]; /*0x54d3ca*/
        v28 = v27[2]; /*0x54d3ce*/
        v59 = *(double *)v27; /*0x54d3d3*/
        v60 = v27[2]; /*0x54d3eb*/
        if ( v28 >= dword_ABC5DC + Cell::GetGroundHeight(&v59) ) /*0x54d3ff*/
          v24 -= dword_ABC5DC; /*0x54d401*/
      }
    }
    if ( !v24 ) /*0x54d405*/
    {
      v29 = *((unsigned int *)this + 3); /*0x54d407*/
      v59 = *(double *)(v29 + 156); /*0x54d416*/
      v60 = *(unsigned int *)(v29 + 164); /*0x54d424*/
      (*(void (**)(int, double *))(*(unsigned int *)v29 + 244))(v29, &v59); /*0x54d42f*/
      *(unsigned char *)(*((unsigned int *)this + 3) + 140) = 0; /*0x54d438*/
    }
    if ( (double)IDA_SLODWORD(v57) >= (double)IDA_SLODWORD(v58) + *(float *)((char *)this + 36) ) /*0x54d451*/
      v56 = Math::RoundToInt((double)v56 + *(float *)((char *)this + 36)); /*0x54d471*/
    else
      v56 += IDA_LODWORD(v57) - v23; /*0x54d45f*/
LABEL_49:
    v54 = 1; /*0x54d4bb*/
    goto LABEL_50; /*0x54d4bb*/
  }
  if ( v23 > IDA_SLODWORD(v57) )
  {
    if ( (double)IDA_SLODWORD(v57) <= (double)IDA_SLODWORD(v58) - *(float *)((char *)this + 36) ) /*0x54d48b*/
    {
      v56 = Math::RoundToInt((double)v56 - *(float *)((char *)this + 36)); /*0x54d4a3*/
      v30 = v56; /*0x54d4a7*/
    }
    else
    {
      v30 = IDA_LODWORD(v57) - v23 + v16; /*0x54d48f*/
      v56 = v30; /*0x54d491*/
    }
    if ( v30 <= GroundHeight ) /*0x54d4ab*/
      v56 = GroundHeight; /*0x54d4ad*/
    v23 = v23 <= 0 ? 0 : v23;
    goto LABEL_49; /*0x54d4b9*/
  }
LABEL_50:
  v31 = *((unsigned int *)this + 16) / 256; /*0x54d4c0*/
  v32 = *((unsigned int *)this + 17) / 256; /*0x54d4e9*/
  v33 = (unsigned short *)(*(int (**)(unsigned int, double *))(**(unsigned int **)((char *)this + 12) + 440))( /*0x54d4ec*/
                   *((unsigned int *)this + 3),
                   &v58);
  if ( *v33 != (unsigned short)v31 || v33[1] != (unsigned short)v32 ) /*0x54d4fb*/
  {
    v34 = IDA_LODWORD(v57); /*0x54d4fd*/
    if ( v23 < IDA_SLODWORD(v57) / 2 ) /*0x54d50a*/
    {
      *((unsigned int *)this + 28) = 0; /*0x54d50e*/
      *((unsigned int *)this + 29) = 0; /*0x54d511*/
    }
    if ( v23 < v34 / 4 ) /*0x54d525*/
    {
      *((unsigned int *)this + 28) = 0; /*0x54d527*/
      *((unsigned int *)this + 29) = 0; /*0x54d52a*/
    }
  }
  if ( v54 ) /*0x54d537*/
  {
    ObjectClass::SetAnim(*(unsigned int **)((char *)this + 12), v56); /*0x54d541*/
    if ( v52 ) /*0x54d54c*/
      (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 292))(*((unsigned int *)this + 3), 0); /*0x54d554*/
  }
  v35 = (int *)(*((unsigned int *)this + 3) + 156); /*0x54d55d*/
  v36 = *(double *)((char *)this + 112); /*0x54d562*/
  v61 = *v35; /*0x54d567*/
  v62 = v35[1]; /*0x54d56e*/
  v37 = v35[2]; /*0x54d572*/
  IDA_LODWORD(v57) = Math::RoundToInt(v36); /*0x54d57a*/
  v58 = (double)(*(int16_t *)ProgressTimer::GetValue((unsigned short *)((char *)this + 84), &v56) - 0x3FFF) * -0.00009587672516830327; /*0x54d5a2*/
  v38 = IDA_HIDWORD(v58); /*0x54d5aa*/
  v39 = IDA_LODWORD(v58); /*0x54d5ae*/
  v57 = (double)IDA_SLODWORD(v57); /*0x54d5b4*/
  v59 = (double)v62; /*0x54d5bc*/
  v40 = Math::SinCos(v58); /*0x54d5c0*/
  IDA_LODWORD(v58) = Math::RoundToInt(v59 - v40 * v57); /*0x54d5d4*/
  v41 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v38, v39))); /*0x54d5d8*/
  v42 = Math::RoundToInt(v41 * v57 + (double)v61); /*0x54d5e8*/
  v43 = *((unsigned int *)this + 3); /*0x54d5f1*/
  v63[1] = IDA_LODWORD(v58); /*0x54d5f4*/
  v63[0] = v42; /*0x54d5f8*/
  v63[2] = v37; /*0x54d5fc*/
  (*(void (**)(int, unsigned int *))(*(unsigned int *)v43 + 436))(v43, v63); /*0x54d607*/
  v44 = *(unsigned char **)((char *)this + 12); /*0x54d60d*/
  if ( !v44[1709] )
  {
    if ( v44
      && (*(int (**)(unsigned char *))(*(unsigned int *)v44 + 44))(v44) == 15
      && ((v45 = *((unsigned int *)this + 3)) != 0
        ? (v46 = (*(int (**)(unsigned int))(*(unsigned int *)v45 + 44))(*((unsigned int *)this + 3)) == 15 ? v45 : 0)
        : (v46 = 0),
          *(unsigned char *)(*(unsigned int *)(v46 + 1728) + 3787)
       && *((unsigned int *)this + 20) == 2
       && (v47 = *(int **)((char *)this + 12), v47[173])) )
    {
      v50 = ObjectClass::CalcTargetFacing(v47, (int *)&v58, v47[173]); /*0x54d675*/
      FacingClass::Set_SyncLog(v50); /*0x54d679*/
    }
    else
    {
      Value = ProgressTimer::GetValue((unsigned short *)((char *)this + 84), &v58); /*0x54d68b*/
      FacingClass::Set_SyncLog(Value); /*0x54d692*/
    }
  }
  if ( v52 ) /*0x54d69d*/
    return (*(int (**)(unsigned int, int))(**(unsigned int **)((char *)this + 12) + 292))(*((unsigned int *)this + 3), 1); /*0x54d6a6*/
  result = *((unsigned int *)this + 3); /*0x54d6b4*/
  *(unsigned char *)(result + 116) = v55; /*0x54d6bd*/
  return result; /*0x54d6ac*/

}
}