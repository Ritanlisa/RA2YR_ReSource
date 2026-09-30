// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/MEMORY_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/WaypointClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Warhead_e4.hpp"
#include "e4/classes/WaypointPathClass_e4.hpp"
#include "e4/classes/Particle_e4.hpp"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"

// 0x6A01A0
namespace gamemd {
AbstractClass * * WalkLocomotion::MoveTo(IUnknown * aP1, int aP3)
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

  v3 = aP1; /*0x6a01a0*/
  if ( aP1->field_0 != g_abs_B077F8 /*0x6a01ce*/
    || aP1->field_4 != g_abs_B077F8
    || (v5 = aP1->field_8, v5 != g_abs_B077F8) )
  {
    IDA_LOBYTE(v5) = *((unsigned char *)this + 96); /*0x6a01d4*/
    v6 = aP3; /*0x6a01d7*/
    if ( !(unsigned char)v5 ) /*0x6a01dd*/
    {
      v5 = *((unsigned int *)this + 22); /*0x6a01e3*/
      if ( v5 != -1 ) /*0x6a01e9*/
      {
        v5 = byte_7F2A40[12 * v5]; /*0x6a01f2*/
        if ( v5 ) /*0x6a01fc*/
        {
          v7 = 4 * v5; /*0x6a0202*/
          v8 = ((unsigned int *)(dword_7F2960))[v7]; /*0x6a0205*/
          v5 = ((unsigned int *)(dword_7F296C))[v7]; /*0x6a020b*/
          if ( v5 > -1 ) /*0x6a0214*/
          {
            v9 = (unsigned int *)(v8 + 12 * v5); /*0x6a021d*/
            aP3 = v9[2]; /*0x6a0223*/
            if ( *((unsigned int *)this + 23) < v5 ) /*0x6a022c*/
            {
              v10 = v9[1]; /*0x6a0234*/
              v18[0] = *v9; /*0x6a0237*/
              v18[1] = v10; /*0x6a023f*/
              v5 = (int)WalkLocomotion::TransformCoords( /*0x6a0250*/
                          (unsigned int *)this,
                          (ObjectClass *)&v19,
                          (IUnknown *)v18,
                          (ObjectClass *)&aP3);
              v11 = *(unsigned int *)v5; /*0x6a0255*/
              v12 = *(unsigned int *)(v5 + 4); /*0x6a0259*/
              if ( !v6 ) /*0x6a025c*/
              {
                v13 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 464))(*((unsigned int *)this + 3)); /*0x6a0263*/
                v14 = *((unsigned int *)this + 3); /*0x6a0269*/
                v19 = v11; /*0x6a026c*/
                v20 = v12; /*0x6a0270*/
                v21 = v13; /*0x6a0274*/
                (*(void (**)(int, int *))(*(unsigned int *)v14 + 244))(v14, &v19); /*0x6a027f*/
                IDA_LOBYTE(v5) = (*(char (**)(unsigned int, IUnknown *))(**(unsigned int **)((char *)this + 12) + 244))( /*0x6a028f*/
                               *((unsigned int *)this + 3),
                               aP1);
                return v5; /*0x6a029c*/
              }
              if ( v6 == 1 || v6 == 3 ) /*0x6a02a7*/
              {
                v15 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 464))(*((unsigned int *)this + 3)); /*0x6a02ae*/
                v16 = *((unsigned int *)this + 3); /*0x6a02b4*/
                v21 = v15; /*0x6a02b7*/
                v19 = v11; /*0x6a02bb*/
                v20 = v12; /*0x6a02bf*/
                IDA_LOBYTE(v5) = (*(int (**)(int, int *))(*(unsigned int *)v16 + 240))(v16, &v19); /*0x6a02ca*/
              }
              v3 = aP1; /*0x6a02d0*/
            }
          }
        }
      }
    }
    if ( v6 ) /*0x6a02d6*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x6a02f6*/
        IDA_LOBYTE(v5) = (*(char (**)(unsigned int, IUnknown *))(**(unsigned int **)((char *)this + 12) + 240))( /*0x6a02fe*/
                       *((unsigned int *)this + 3),
                       v3);
    }
    else
    {
      IDA_LOBYTE(v5) = (*(char (**)(unsigned int, IUnknown *))(**(unsigned int **)((char *)this + 12) + 244))( /*0x6a02de*/
                     *((unsigned int *)this + 3),
                     v3);
    }
  }
  return v5; /*0x6a0295*/

}
}
// 0x6A05F0
namespace gamemd {
void WalkLocomotion::ProcessCollision( char a2)
{

  int v3; // eax
  int v4; // edx
  bool v5; // al
  int v6; // esi
  unsigned char * v7;
  unsigned int *v8; // esi
  int v9; // edx
  int v10; // esi
  double v11; // st7
  int v12; // eax
  MouseClass *v13; // ecx
  int v14; // esi
  char v15; // bl
  int v16; // edx
  int v17; // eax
  int v18; // eax
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
  int *v31; // esi
  TechnoClass *v32; // eax
  TechnoClass * v33;
  int v34; // ebx
  int v35; // ecx
  MouseClass *v36; // eax
  int v37; // edx
  unsigned int *v38; // eax
  ObjectClass *Coords; // eax
  unsigned int *v40; // ecx
  void * v41;
  int GroundHeight; // esi
  int v43; // ebx
  char *v45; // esi
  char * v46;
  char * v47;
  int16_t v48; // cx
  int v49; // eax
  IUnknown *v50; // esi
  int v51; // ecx
  MouseClass *v52; // ecx
  int v53; // eax
  int v54; // edx
  char *v55; // eax
  int v56; // ecx
  int v57; // eax
  unsigned int *v58; // eax
  int v59; // esi
  int *v60; // eax
  int v61; // edi
  MouseClass *v62; // ecx
  int v63; // kr28_4
  int v64; // eax
  int v65; // edi
  IUnknown *v66; // esi
  IUnknown *v67; // ebx
  int v68; // ecx
  int v69; // eax
  MouseClass *v70; // edi
  TechnoClass *v71; // esi
  TechnoClass *v72; // eax
  TechnoClass *v73; // esi
  TechnoClass *nextObject; // ebx
  int v75; // edx
  int v76; // edx
  MouseClass *v77; // ecx
  int v78; // eax
  int v79; // esi
  char v80; // bl
  MouseClass *v81; // eax
  char v82; // bl
  int16_t v83; // cx
  int v84; // eax
  MouseClass *v85; // ecx
  int v86; // eax
  int16_t v87; // dx
  char *v88; // ebx
  char v89; // al
  MouseClass *v90; // ecx
  int *v91; // esi
  int v92; // eax
  int v93; // edx
  int v94; // eax
  int v95; // edi
  TechnoClass *v96; // edx
  int v97; // edi
  void *v98; // eax
  IUnknown *v99; // eax
  int v100; // eax
  bool v101; // zf
  TechnoClass *v102; // eax
  MouseClass *v103; // ecx
  MouseClass *v104; // eax
  int v105; // edx
  TechnoClass *v106; // edx
  int v107; // ecx
  int v108; // edi
  int v109; // edx
  unsigned int *v110; // eax
  unsigned int *eax134; // eax
  MouseClass *v111; // edx
  int ecx137; // ecx
  TechnoClass *v113; // edi
  int v115; // ecx
  unsigned int *v116; // eax
  bool cc140; // cc
  IUnknown *v117; // eax
  unsigned char *v119; // eax
  int eax144; // eax
  MouseClass *v120; // edi
  int *v122; // esi
  int v123; // ecx
  int v124; // edx
  int v125; // eax
  int ebx145; // ebx
  MouseClass *v126; // ecx
  MouseClass *v127; // ebx
  int v129; // eax
  int v130; // ecx
  char al148; // al
  TechnoClass *v131; // eax
  MouseClass *v132; // eax
  int v134; // ecx
  unsigned int *v135; // eax
  int v136; // edi
  int v137; // ebx
  unsigned short *v138; // eax
  int64_t rax156; // rax
  MouseClass *v139; // ecx
  int v141; // edx
  int v142; // eax
  int v143; // esi
  int v144; // ecx
  int v145; // eax
  int *v146; // eax
  int v147; // esi
  int v148; // ebx
  int *v149; // eax
  int v150; // ecx
  int v151; // eax
  int v152; // ebx
  int v153; // ecx
  int esi178a; // esi
  TechnoClass *v154; // ebx
  IUnknown *v155; // esi
  double v157; // st7
  int *eax178d; // eax
  TechnoClass *v158; // edx
  IUnknown *v159; // edi
  IUnknown *v161; // eax
  int v162; // ebx
  unsigned int edx178; // edx
  TechnoClass *v163; // ebx
  uint64_t v165; // kr30_8
  void *eax184; // eax
  MouseClass *v166; // ecx
  int v168; // eax
  int v169; // edi
  int v170; // edi
  int fallRate; // ecx
  IUnknown *v171; // eax
  char v173; // bl
  int uniqueId; // [esp+20h] [ebp-104h]
  int LandHeight; // [esp+24h] [ebp-100h]
  AbstractClass *v176; // [esp+2Ch] [ebp-F8h]
  float v177; // [esp+2Ch] [ebp-F8h]
  bool v178; // [esp+43h] [ebp-E1h]
  char v179; // [esp+43h] [ebp-E1h]
  char v180; // [esp+43h] [ebp-E1h]
  ObjectClass *aP4; // [esp+44h] [ebp-E0h] BYREF
  unsigned char v182[12]; // [esp+48h] [ebp-DCh] BYREF
  double varD0; // [esp+54h] [ebp-D0h] BYREF
  IUnknown *v183; // [esp+5Ch] [ebp-C8h]
  ObjectClass aP3; // [esp+60h] [ebp-C4h] BYREF
  unsigned int v186[4]; // [esp+10Ch] [ebp-18h] BYREF
  int v187; // [esp+11Ch] [ebp-8h]
  int v188; // [esp+120h] [ebp-4h]

  if ( (!*(unsigned char *)(this + 99) || *(unsigned int *)(this + 88) == -1) && *(unsigned int *)(*(unsigned int *)(this + 12) + 1504) != 8
    || *(unsigned char *)(this + 98)
    && !*(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)(this + 12) + 132))(*(unsigned int *)(this + 12)) + 3233) )
  {
    *(unsigned int *)(this + 76) = 0;
    return 0;
  }
  v3 = (*(int (**)(unsigned int))(**(unsigned int **)(this + 12) + 132))(*(unsigned int *)(this + 12));
  v4 = **(unsigned int **)(this + 12);
  if ( *(unsigned char *)(v3 + 3517) )
  {
    v5 = (*(int (**)(void))(v4 + 44))() != 1 || !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)(this + 12) + 1732) + 3596);
    if ( *(int *)(this + 88) < 64 && v5 )
    {
      *(unsigned int *)v182 = *(unsigned int *)(this + 52);
      *(unsigned int *)&v182[4] = *(unsigned int *)(this + 56);
      *(unsigned int *)&v182[8] = *(unsigned int *)(this + 60);
      v6 = (int)((*((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)v182) + 80) & 0x100) != 0 ? g_abs_B077F8 : 0);
      v7 = (int)(v6 + Cell::GetGroundHeight(v182));
      v8 = (unsigned int *)(*(unsigned int *)(this + 12) + 156);
      *(unsigned int *)&v182[8] = v7;
      v9 = v8[1];
      aP3.lastLayer = *v8 - *(unsigned int *)v182;
      v10 = v8[2];
      *(unsigned int *)&aP3.isInLogic = v9 - *(unsigned int *)&v182[4];
      aP3.location[0] = v10 - v7;
      v11 = Math::Sqrt(
              (double)(v10 - v7) * (double)(v10 - v7)
            + (double)(v9 - *(unsigned int *)&v182[4]) * (double)(v9 - *(unsigned int *)&v182[4])
            + (double)aP3.lastLayer * (double)aP3.lastLayer);
      v12 = Math::RoundToInt(v11);
      v13 = *(MouseClass **)(this + 12);
      v14 = v12;
      v15 = 0;
      v16 = *(unsigned int *)&v13-((unsigned int *)(>__pad_1D4))[936];
      IDA_LODWORD(varD0) = *(unsigned int *)&v13-((unsigned int *)(>__pad_1D4))[932];
      v17 = v13->field_0;
      IDA_HIDWORD(varD0) = v16;
      v18 = (*(int (**)(MouseClass *))(v17 + 132))(v13);
      if ( v14 >= *(unsigned int *)(v18 + 760) )
      {
        if ( *(unsigned char *)(*(unsigned int *)(this + 12) + 973) )
        {
          v20 = varD0 - (double)*(int *)(v18 + 1656) * 0.001500000013038516;
          if ( v20 >= 0.1000000014901161 )
            varD0 = v20;
          else
            varD0 = 0.1000000014901161;
          v15 = 1;
        }
      }
      else
      {
        v15 = 1;
        v19 = varD0 - (double)*(int *)(v18 + 1656) * *(double *)(v18 + 768);
        if ( v19 >= 0.300000011920929 )
          varD0 = v19;
        else
          varD0 = 0.300000011920929;
      }
      v21 = *(MouseClass **)(this + 12);
      if ( v21-((unsigned int *)(>__pad_1D4))[1249] )
      {
        if ( *(double *)(this + 80) >= 0.2 )
          v22 = 0.2;
        else
          v22 = *(double *)(this + 80);
        varD0 = v22;
        v23 = IDA_HIDWORD(varD0);
        *(double *)(this + 80) = v22;
        (*(void (**)(unsigned int, int))(v21->field_0 + 1348))(IDA_LODWORD(varD0), v23);
      }
      else
      {
        if ( !v15 )
        {
          if ( *(double *)&v21-((unsigned int *)(>__pad_1D4))[932] >= *(double *)(this + 80) )
          {
            if ( *(double *)&v21-((unsigned int *)(>__pad_1D4))[932] <= *(double *)(this + 80) )
              goto LABEL_37;
            v24 = *(double *)&v21-((unsigned int *)(>__pad_1D4))[932] - (double)*(int *)(v18 + 1656) * *(double *)(v18 + 768);
            if ( *(double *)(this + 80) > v24 )
              v24 = *(double *)(this + 80);
          }
          else
          {
            v24 = *(double *)(v18 + 776) + *(double *)&v21-((unsigned int *)(>__pad_1D4))[932];
            if ( *(double *)(this + 80) < v24 )
              v24 = *(double *)(this + 80);
          }
          varD0 = v24;
          (*(void (**)(unsigned int, unsigned int))(v21->field_0 + 1348))(
            IDA_LODWORD(v24),
            IDA_HIDWORD(*(uint64_t *)&v24));
          goto LABEL_37;
        }
        (*(void (**)(unsigned int, unsigned int))(v21->field_0 + 1348))(IDA_LODWORD(varD0), IDA_HIDWORD(varD0));
      }
LABEL_37:
      if ( (*(int (**)(unsigned int))(**(unsigned int **)(this + 12) + 44))(*(unsigned int *)(this + 12)) == 1 )
      {
        v25 = *(unsigned int **)(*(unsigned int *)(this + 12) + 1736);
        if ( v25 )
        {
          do
          {
            (*(void (**)(unsigned int *, unsigned int, unsigned int))(*v25 + 1348))(
              v25,
              *(unsigned int *)(*(unsigned int *)(this + 12) + 1400),
              *(unsigned int *)(*(unsigned int *)(this + 12) + 1404));
            v25 = (unsigned int *)v25[434];
          }
          while ( v25 && v25 != (unsigned int *)v25[434] );
        }
      }
    }
  }
  else
  {
    (*(void (**)(unsigned int, unsigned int))(v4 + 1348))(*(unsigned int *)(this + 80), *(unsigned int *)(this + 84));
  }
  v26 = (*(int (**)(unsigned int))(**(unsigned int **)(this + 12) + 1336))(*(unsigned int *)(this + 12));
  v27 = *(MouseClass **)(this + 12);
  v28 = a2 == 0 ? v26 : 0;
  v29 = *(unsigned int *)&v27-((unsigned int *)(>__pad_1D4))[1036];
  v30 = *(unsigned int *)(this + 76) + v28;
  *(unsigned int *)&aP3.__pad_0[4] = v30;
  aP3.uniqueId = (void *)(v29);
  if ( v29 == 8 && *(unsigned int *)(this + 88) == -1 )
  {
    (*(void (**)(MouseClass *, unsigned int))(v27->field_0 + 292))(v27, 0);
    v31 = (int *)(this + 64);
    if ( *(unsigned int *)(this + 64) != g_abs_B077F8
      || *(unsigned int *)(this + 68) != g_abs_B077F8
      || *(unsigned int *)(this + 72) != (unsigned int)((unsigned int))((unsigned int))(g_abs_B077F8) )
    {
      *v31 = (int)(g_abs_B077F8);
      *(unsigned int *)(this + 68) = g_abs_B077F8;
      v32 = (int)((TechnoClass *)g_abs_B077F8);
      *(unsigned char *)(this + 99) = 0;
      *(unsigned int *)(this + 72) = v32;
    }
    v33 = (unsigned int)(*(int16_t *)((*(int (**)(unsigned int))(**(unsigned int **)(this + 12) + 444))(*(unsigned int *)(this + 12)) + 278));
    if ( v33 >= 0 && v33 < *(int *)&g_abs_89F690 )
    {
      v34 = *(unsigned int *)(*(unsigned int *)&g_abs_89F690 + 4 * v33);
      aP4 = *(ObjectClass **)(v34 + 40);
      v35 = SHIWORD(aP4) << 8;
      *v31 = ((int16_t)aP4 << 8) + 128;
      v36 = *(MouseClass **)(this + 12);
      *(unsigned int *)(this + 68) = v35 + 128;
      *(unsigned int *)(this + 72) = 0;
      qmemcpy(&v36-((unsigned int *)(>__pad_1D4))[1036], &v36->__pad_1D4[1040], 0x5Cu);
      *(unsigned int *)(*(unsigned int *)(this + 12) + 1596) = -1;
      *(unsigned char *)(*(unsigned int *)(this + 12) + 1668) = v33;
      *(unsigned char *)(*(unsigned int *)(this + 12) + 1669) = 0;
      v37 = *(unsigned int *)(v34 + 48) & 7;
      aP4 = *(ObjectClass **)(v34 + 36);
      *(unsigned short *)&aP3.__pad_0[8] = *((unsigned short *)&g_abs_89F688 + 2 * v37) + (unsigned short)aP4;
      *(unsigned short *)&aP3.__pad_0[10] = IDA_HIWORD(aP4) + *((unsigned short *)&g_abs_89F68A + 2 * v37);
      aP4 = *(ObjectClass **)&aP3.__pad_0[8];
      v38 = (unsigned int *)(CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP4));
      Coords = (ObjectClass *)CellClass::GetCoords(v38, (int *)&aP3.attachedBomb);
      v40 = (unsigned int *)(*(unsigned int *)(this + 12) + 1384);
      *v40 = *(unsigned int *)Coords->__pad_0;
      v40[1] = *(unsigned int *)&Coords->__pad_0[4];
      v40[2] = *(unsigned int *)&Coords->__pad_0[8];
      v41 = (void *)((int)((void *)(*(unsigned int *)(this + 12) + 156)));
      aP3.nextArrayIndex = (void *)(*(unsigned int *)v41);
      aP3.referenceCount = (void *)(*(unsigned int *)((unsigned int)(v41)+ 4));
      aP3.NeedsSaveOrLink = *(void **)((unsigned int)(v41)+ 8);
      GroundHeight = Cell::GetGroundHeight(&aP3.nextArrayIndex);
      aP4 = *(ObjectClass **)(v34 + 40);
      v43 = *(unsigned int *)(v34 + 448);
      aP3.referenceCount = (void *)((SHIWORD(aP4) << 8) + 128);
      aP3.nextArrayIndex = (void *)(((int16_t)aP4 << 8) + 128);
      aP3.NeedsSaveOrLink = 0;
      *(unsigned int *)(*(unsigned int *)(this + 12) + 1392) = GroundHeight
                                                 + (Cell::GetGroundHeight(&aP3.nextArrayIndex) - GroundHeight) / v43;
      *(unsigned char *)(this + 99) = 1;
      *(unsigned int *)(this + 88) = -1;
      return 0;
    }
    *(unsigned int *)(*(unsigned int *)(this + 12) + 1504) = -1;
    *(unsigned int *)(this + 88) = -1;
    *v31 = (int)(g_abs_B077F8);
    *(unsigned int *)(this + 68) = g_abs_B077F8;
    *(unsigned int *)(this + 72) = g_abs_B077F8;
    if ( *v31 != g_abs_B077F8
      || *(unsigned int *)(this + 68) != g_abs_B077F8
      || *(int)((int))((int))((unsigned int *))(this + 72) != g_abs_B077F8 )
    {
      *v31 = (int)(g_abs_B077F8);
      *(unsigned int *)(this + 68) = g_abs_B077F8;
      *(unsigned int *)(this + 72) = g_abs_B077F8;
      *(unsigned char *)(this + 99) = 0;
      return (unsigned int)(0);
    }
    return 0;
  }
  if ( v30 <= 7 )
    goto LABEL_141;
  v45 = (char *)(12 * *(unsigned int *)(this + 88) + 8333888);
  v46 = (char *)(*(unsigned char *)(this + 96));
  *(unsigned int *)&aP3.bombVisible = v45;
  if ( v46 )
    v47 = (unsigned int)(v45[1]);
  else
    v47 = *v45;
  aP3.objectTypeFlags = 16 * v47;
  *(unsigned int *)&aP3.__pad_0[8] = dword_7F2960[4 * v47];
  if ( v29 < -1 || v29 > 8 )
  {
    *(unsigned int *)&v27-((unsigned int *)(>__pad_1D4))[1036] = -1;
    return 0;
  }
  v178 = 0;
  if ( v29 != 8 && v29 != -1 )
  {
    IDA_LOBYTE(v48) = 0;
    IDA_HIBYTE(v48) = v45[4];
    IDA_LOWORD(aP4) = v48;
    v178 = (((((unsigned int)aP4 >> 12) + 1) >> 1) & 7) != v29;
  }
  while ( 1 )
  {
    v49 = *(unsigned int *)(this + 92);
    v50 = *(IUnknown **)&aP3.__pad_0[8];
    *(unsigned int *)&aP3.__pad_0[4] -= 7;
    v51 = *(unsigned int *)(*(unsigned int *)&aP3.__pad_0[8] + 12 * v49 + 4);
    aP3.health = *(unsigned int *)(*(unsigned int *)&aP3.__pad_0[8] + 12 * v49);
    aP3.estimatedHealth = v51;
    if ( !aP3.health && !v51 && v49 )
      break;
    if ( (*(uint8_t (**)(unsigned int))(**(unsigned int **)(this + 12) + 192))(*(unsigned int *)(this + 12)) )
    {
      v52 = *(MouseClass **)(this + 12);
      v186[0] = *(unsigned int *)&v52-((unsigned int *)(>__pad_74))[40];
      v186[1] = *(unsigned int *)&v52-((unsigned int *)(>__pad_74))[44];
      v186[2] = *(unsigned int *)&v52-((unsigned int *)(>__pad_74))[48];
      (*(void (**)(MouseClass *, unsigned int *))(v52->field_0 + 244))(v52, v186);
      *(unsigned char *)(*(unsigned int *)(this + 12) + 1718) = 0;
      *(unsigned char *)(*(unsigned int *)(this + 12) + 1719) = 0;
    }
    v53 = *(unsigned int *)(this + 92);
    if ( v53 )
    {
      v54 = *((unsigned int *)v50 + 3 * v53 - 1);
      v55 = (char *)((void *)((char *)v50 + 12 * v53));
      aP3.abstractFlags = (void *)(v54);
      v56 = *((unsigned int *)v55 - 2);
      v57 = *((unsigned int *)v55 - 3);
      aP3.customSound_controller[1] = v56;
      aP3.customSound_controller[0] = v57;
      v58 = WalkLocomotion::TransformCoords(
              (unsigned int *)this,
              (ObjectClass *)&aP3.visibilityFlags,
              (IUnknown *)aP3.customSound_controller,
              (ObjectClass *)&aP3.abstractFlags);
      v59 = v58[1];
      IDA_LOWORD(aP3.customSound_controller[4]) = *v58 / 256;
      IDA_HIWORD(aP3.customSound_controller[4]) = v59 / 256;
      aP3.customSound_controller[3] = aP3.customSound_controller[4];
    }
    else
    {
      aP3.customSound_controller[3] = *(unsigned int *)(*(int (**)(unsigned int, double *))(**(unsigned int **)(this + 12) + 440))(
                                                   *(unsigned int *)(this + 12),
                                                   &varD0);
    }
    aP3.abstractFlags = (int *)(*(unsigned int *)(*(unsigned int *)&aP3.__pad_0[8] + 12 * *(unsigned int *)(this + 92) + 8));
    v60 = WalkLocomotion::TransformCoords(
            (unsigned int *)this,
            (ObjectClass *)&aP3.lastLayer,
            (IUnknown *)&aP3.health,
            (ObjectClass *)&aP3.abstractFlags);
    v61 = v60[1];
    aP3.nextArrayIndex = *v60;
    aP3.NeedsSaveOrLink = 0;
    v62 = *(MouseClass **)(this + 12);
    aP3.referenceCount = v61;
    v63 = v61;
    v64 = *(unsigned int *)&v62->__pad_74[40];
    v65 = *(unsigned int *)&v62->__pad_74[44];
    *(unsigned short *)&aP3.isOnMap = aP3.nextArrayIndex / 256;
    v187 = v65;
    v188 = *(unsigned int *)&v62->__pad_74[48];
    *(unsigned short *)&aP3.alignmentPadding75[1] = v63 / 256;
    aP3.nextObject = *(void **)&aP3.isOnMap;
    if ( *(unsigned short *)&aP3.isOnMap != (uint16_t)(v64 / 256)
      || (uint16_t)(v63 / 256) != (uint16_t)(v187 / 256) )
    {
      (*(void (**)(MouseClass *, unsigned int))(v62->field_0 + 292))(v62, 0);
      (*(void (**)(unsigned int, int *))(**(unsigned int **)(this + 12) + 436))(
        *(unsigned int *)(this + 12),
        &aP3.nextArrayIndex);
      v66 = (IUnknown *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP3.customSound_controller[3]);
      v67 = (IUnknown *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP3.nextObject);
      v68 = SHIBYTE(v67->field_118);
      v69 = SHIBYTE(v66->field_118) - 4;
      *(unsigned int *)&aP3.__pad_0[12] = v67;
      if ( v68 != v69 )
        goto LABEL_78;
      if ( (v67->field_140 & 0x100) == 0 )
        goto LABEL_79;
      *(unsigned char *)(*(unsigned int *)(this + 12) + 140) = 1;
LABEL_78:
      if ( (v67->field_140 & 0x100) == 0 )
      {
LABEL_79:
        if ( (v66->field_140 & 0x100) != 0 )
          *(unsigned char *)(*(unsigned int *)(this + 12) + 140) = 0;
      }
      if ( *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)(this + 12) + 132))(*(unsigned int *)(this + 12)) + 3220) )
      {
        v70 = *(MouseClass **)(this + 12);
        if ( !v70->__pad_1D4[1276] )
        {
          if ( v70->__pad_74[24]
            || (aP3.attachedBomb = *(void **)&v70->__pad_74[40],
                aP3.ambientSoundController[0] = *(unsigned int *)&v70->__pad_74[44],
                v71 = *(TechnoClass **)&v70->__pad_74[48],
                aP3.parachute = *(void **)&v70->__pad_74[40],
                *(unsigned int *)&aP3.onBridge = *(unsigned int *)&v70->__pad_74[44],
                *(unsigned int *)&aP3.isAliveFlag = *(unsigned int *)&v70->__pad_74[48],
                (int)v71 >= g_abs_B077F8 + Cell::GetGroundHeight(&aP3.parachute)) )
          {
            v72 = (TechnoClass *)*((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP3.nextObject) + 58);
          }
          else
          {
            v72 = (TechnoClass *)*((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&aP3.nextObject) + 57);
          }
          v73 = v72;
          if ( v72 )
          {
            do
            {
              nextObject = (TechnoClass *)v73->nextObject;
              if ( !ObjectClass::IsCrushable(v73, *(AbstractClass **)(this + 12)) )
              {
                v75 = *(unsigned int *)v73->__pad_0;
                aP3.attachedTag = (void *)10000;
                (*(void (**)(TechnoClass *, void **, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(v75 + 364))(
                  v73,
                  &aP3.attachedTag,
                  0,
                  *(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 4008),
                  0,
                  1,
                  1,
                  0);
                v76 = v70->field_0;
                aP3.attachedTag = (void *)20;
                (*(void (**)(MouseClass *, void **, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(v76 + 364))(
                  v70,
                  &aP3.attachedTag,
                  0,
                  *(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 4008),
                  0,
                  1,
                  0,
                  0);
              }
              v73 = nextObject;
            }
            while ( nextObject );
            v67 = *(IUnknown **)&aP3.__pad_0[12];
          }
        }
      }
      v77 = *(MouseClass **)(this + 12);
      if ( !v77->__pad_74[28] )
        return 0;
      (*(void (**)(MouseClass *, int))(v77->field_0 + 292))(v77, 1);
      v78 = v67->field_44;
      if ( v78 != -1 )
      {
        v79 = *(unsigned int *)&g_abs_A83D84->__pad_0[4 * v78];
        if ( *(unsigned char *)(this + 100) )
        {
          if ( (*(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)(this + 12) + 132))(*(unsigned int *)(this + 12))
                         + 3368)
             || TechnoClass::HasVoiceResponse(*(float **)(this + 12), 17))
            && !*(unsigned int *)(v79 + 660) )
          {
            *(unsigned char *)(*(unsigned int *)(this + 12) + 1717) = 1;
            if ( *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)(this + 12) + 132))(*(unsigned int *)(this + 12))
                          + 3371) )
              *(unsigned int *)(*(unsigned int *)(this + 12) + 820) = -1130113270;
          }
        }
      }
      goto LABEL_101;
    }
    v80 = v62->__pad_74[0];
    v62->__pad_74[0] = 0;
    (*(void (**)(unsigned int, int *))(**(unsigned int **)(this + 12) + 436))(
      *(unsigned int *)(this + 12),
      &aP3.nextArrayIndex);
    *(unsigned char *)(*(unsigned int *)(this + 12) + 116) = v80;
LABEL_101:
    v81 = *(MouseClass **)(this + 12);
    if ( !v81->__pad_74[28] )
      return 0;
    v82 = v81->__pad_74[0];
    v81->__pad_74[0] = 0;
    (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)(this + 12) + 460))(*(unsigned int *)(this + 12), 0);
    IDA_LOBYTE(v83) = 0;
    *(unsigned char *)(*(unsigned int *)(this + 12) + 116) = v82;
    IDA_HIBYTE(v83) = aP3.abstractFlags;
    IDA_LOWORD(aP3.owningHouseIndex) = v83;
    FacingClass::Set_SyncLog((char *)(*(unsigned int *)(this + 12) + 904), &aP3.owningHouseIndex);
    v84 = *(unsigned int *)(this + 92);
    if ( v84 && *(int *)((char *)dword_7F296C + aP3.objectTypeFlags) == v84 )
    {
      v85 = *(MouseClass **)(this + 12);
      aP3.location[1] = *(unsigned int *)&v85->__pad_74[40];
      aP3.location[2] = *(unsigned int *)&v85->__pad_74[44];
      aP3.lineTrailer = *(void **)&v85->__pad_74[48];
      (*(void (**)(MouseClass *, int *))(v85->field_0 + 244))(v85, &aP3.location[1]);
    }
    if ( aP3.uniqueId != 8 && aP3.uniqueId != -1 && v178 )
    {
      v86 = *(unsigned int *)(this + 92);
      if ( *(int *)((char *)dword_7F2964 + aP3.objectTypeFlags) == v86 )
      {
        if ( v86 )
        {
          IDA_LOBYTE(v87) = 0;
          IDA_HIBYTE(v87) = *(unsigned char *)(*(unsigned int *)&aP3.bombVisible + 4);
          IDA_LOWORD(aP3.fallRate) = v87;
          *(unsigned int *)&aP3.__pad_0[12] = aP3.uniqueId + 8 * (((((unsigned int)aP3.fallRate >> 12) + 1) >> 1) & 7);
          v88 = (char *)(12 * *(unsigned int *)&aP3.__pad_0[12] + 8333888);
          v89 = byte_7F2A40[12 * *(unsigned int *)&aP3.__pad_0[12]];
          if ( v89 )
          {
            if ( dword_7F2968[4 * v89] )
            {
              v90 = *(MouseClass **)(this + 12);
              v91 = (int *)(this + 64);
              v92 = *(unsigned int *)&v90->__pad_1D4[936];
              aP3.ambientSoundController[2] = *(unsigned int *)&v90->__pad_1D4[932];
              v93 = aP3.uniqueId & 7;
              aP3.ambientSoundController[3] = v92;
              v94 = *(unsigned int *)&g_abs_89F690 + *(unsigned int *)(this + 64);
              v95 = *(unsigned int *)(this + 68) + *(unsigned int *)&g_abs_89F690;
              v96 = *(TechnoClass **)(this + 72);
              *(unsigned int *)v182 = v94;
              *(unsigned int *)&v182[8] = v96;
              *(unsigned int *)&v182[4] = v95;
              IDA_LOWORD(aP3.customSound) = v94 / 256;
              IDA_HIWORD(aP3.customSound) = v95 / 256;
              *(unsigned int *)aP3.__pad_0 = aP3.customSound;
              v97 = v90->field_0;
              LandHeight = ObjectClass::GetLandHeight(v90);
              uniqueId = aP3.uniqueId;
              v98 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)aP3.__pad_0);
              switch ( (*(int (**)(unsigned int, void *, int, int, unsigned int, int))(v97 + 428))(
                         *(unsigned int *)(this + 12),
                         v98,
                         uniqueId,
                         LandHeight,
                         0,
                         1) )
              {
                case 0:
                case 2:
                  if ( (*(int (**)(unsigned int))(**(unsigned int **)(this + 12) + 44))(*(unsigned int *)(this + 12)) == 1
                    && !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)(this + 12) + 1732) + 3596) )
                  {
                    break;
                  }
                  v99 = *(IUnknown **)&aP3.__pad_0[12];
                  *(unsigned char *)(this + 96) = 0;
                  *(unsigned int *)(this + 88) = v99;
                  *(unsigned int *)&aP3.bombVisible = v88;
                  v100 = 4 * *v88;
                  aP3.objectTypeFlags = v100 * 4;
                  v178 = 0;
                  *(unsigned int *)(this + 92) = dword_7F2968[v100] - 1;
                  v101 = *v91 == g_abs_B077F8;
                  *(unsigned int *)&aP3.__pad_0[8] = dword_7F2960[v100];
                  if ( !v101
                    || *(unsigned int *)(this + 68) != g_abs_B077F8
                    || *(unsigned int *)(this + 72) != g_abs_B077F8 )
                  {
                    *v91 = g_abs_B077F8;
                    *(unsigned int *)(this + 68) = g_abs_B077F8;
                    v102 = (TechnoClass *)g_abs_B077F8;
                    *(unsigned char *)(this + 99) = 0;
                    *(unsigned int *)(this + 72) = v102;
                  }
                  v103 = *(MouseClass **)(this + 12);
                  *(unsigned char *)(this + 99) = 1;
                  (*(void (**)(MouseClass *, int))(v103->field_0 + 396))(v103, 2);
                  v104 = *(MouseClass **)(this + 12);
                  *(unsigned char *)(this + 99) = 0;
                  if ( !v104->__pad_74[28] || v104->__pad_74[13] || v104->__pad_74[25] )
                    return 0;
                  v105 = g_abs_B077F8;
                  if ( *v91 != g_abs_B077F8
                    || *(unsigned int *)(this + 68) != g_abs_B077F8
                    || *(unsigned int *)(this + 72) != g_abs_B077F8 )
                  {
                    *v91 = g_abs_B077F8;
                    *(unsigned int *)(this + 68) = g_abs_B077F8;
                    v106 = (TechnoClass *)g_abs_B077F8;
                    *(unsigned char *)(this + 99) = 0;
                    *(unsigned int *)(this + 72) = v106;
                    v105 = g_abs_B077F8;
                  }
                  v107 = *(unsigned int *)v182;
                  v108 = *(unsigned int *)&v182[4];
                  v101 = *(unsigned int *)v182 == v105;
                  v109 = *(unsigned int *)&v182[8];
                  if ( !v101
                    || *(unsigned int *)&v182[4] != g_abs_B077F8
                    || *(unsigned int *)&v182[8] != g_abs_B077F8 )
                  {
                    v176 = (AbstractClass *)v104;
                    *(unsigned char *)(this + 99) = 1;
                    *v91 = v107;
                    *(unsigned int *)(this + 68) = v108;
                    *(unsigned int *)(this + 72) = v109;
                    v110 = Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)v182);
                    if ( !CrateClass::ProcessPickup(v110, v176) || *(unsigned char *)(*(unsigned int *)(this + 12) + 129) )
                    {
                      if ( *(unsigned char *)(*(unsigned int *)(this + 12) + 144) )
                      {
                        *v91 = g_abs_B077F8;
                        *(unsigned int *)(this + 68) = g_abs_B077F8;
                        *(unsigned int *)(this + 72) = g_abs_B077F8;
                        *(unsigned char *)(this + 99) = 0;
                      }
                    }
                    else
                    {
                      WalkLocomotion::MoveTo(this, (IUnknown *)v182, 1);
                      (*(void (**)(unsigned int, int, int))(**(unsigned int **)(this + 12) + 1348))(
                        *(unsigned int *)(this + 12),
                        aP3.ambientSoundController[2],
                        aP3.ambientSoundController[3]);
                      qmemcpy(
                        (void *)(*(unsigned int *)(this + 12) + 1504),
                        (const void *)(*(unsigned int *)(this + 12) + 1508),
                        0x5Cu);
                      *(unsigned int *)(*(unsigned int *)(this + 12) + 1596) = -1;
                    }
                  }
                  break;
                case 1:
                  eax134 = Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)v182);
                  CellClass::DamageAllObjects(eax134);
                  break;
                case 3:
                  IDA_LOWORD(aP3.spawnStatus) = *(unsigned int *)v182 / 256;
                  v111 = *(MouseClass **)(this + 12);
                  IDA_HIWORD(aP3.spawnStatus) = *(unsigned int *)&v182[4] / 256;
                  *(unsigned int *)&aP3.__pad_0[12] = aP3.spawnStatus;
                  Cell::IsPassableAllied((int)v111, (int16_t *)&aP3.__pad_0[12]);
                  break;
                case 6:
                  if ( (*((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)v182) + 80) & 0x100) == 0
                    || (ecx137 = *(unsigned int *)(this + 12) + 156,
                        aP3.attachedBomb = *(void **)ecx137,
                        aP3.ambientSoundController[0] = *(unsigned int *)(ecx137 + 4),
                        v113 = *(TechnoClass **)(ecx137 + 8),
                        v115 = *((char *)Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)v182) + 283),
                        IDA_LOBYTE(aP4) = 1,
                        (int)abs32((int)v113 / g_abs_B077F8 - v115) <= 2) )
                  {
                    IDA_LOBYTE(aP4) = 0;
                  }
                  v116 = Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)(this + 64));
                  Cell::ApplyDamage(v116, &g_abs_B077F8, 1, 1, (IUnknown *)aP4);
                  break;
                default:
                  break;
              }
            }
          }
        }
      }
    }
    cc140 = *(unsigned int *)&aP3.__pad_0[4] <= 7;
    ++*(unsigned int *)(this + 92);
    if ( cc140 )
      goto LABEL_141;
  }
  v120 = *(MouseClass **)(this + 12);
  v122 = (int *)(this + 64);
  v123 = *(unsigned int *)&v120->__pad_74[40];
  v124 = *(unsigned int *)&v120->__pad_74[44];
  aP3.ambientSoundController[1] = *(unsigned int *)&v120->__pad_74[48];
  *(unsigned int *)aP3.__pad_0 = abs32(*(unsigned int *)(this + 68) - v124) + abs32(*(unsigned int *)(this + 64) - v123);
  v125 = Math::RoundToInt((1.0 - (double)*(int *)aP3.__pad_0 * 0.09090909090909091) * 7.0);
  ebx145 = *(unsigned int *)&aP3.__pad_0[4];
  v120->__pad_1D4[1250] = 1;
  v126 = *(MouseClass **)(this + 12);
  *(unsigned int *)&aP3.__pad_0[4] = v125 + ebx145;
  v126->__pad_1D4[1251] = 0;
  v127 = *(MouseClass **)(this + 12);
  v129 = *(unsigned int *)&v127->__pad_74[40];
  v130 = *(unsigned int *)&v127->__pad_74[44];
  aP3.ambientSoundController[1] = *(unsigned int *)&v127->__pad_74[48];
  *(unsigned short *)&aP3.__pad_0[2] = v130 / 256;
  if ( (uint16_t)(v129 / 256) == (uint16_t)(*(unsigned int *)(this + 64) / 256)
    && *(unsigned short *)&aP3.__pad_0[2] == (uint16_t)(*(unsigned int *)(this + 68) / 256) )
  {
    al148 = v127->__pad_74[0];
    v127->__pad_74[0] = 0;
    v179 = al148;
    (*(void (**)(unsigned int, int))(**(unsigned int **)(this + 12) + 436))(*(unsigned int *)(this + 12), this + 64);
    (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)(this + 12) + 460))(*(unsigned int *)(this + 12), 0);
    *(unsigned char *)(*(unsigned int *)(this + 12) + 116) = v179;
  }
  else
  {
    (*(void (**)(MouseClass *, unsigned int))(v127->field_0 + 292))(v127, 0);
    (*(void (**)(unsigned int, int))(**(unsigned int **)(this + 12) + 436))(*(unsigned int *)(this + 12), this + 64);
    (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)(this + 12) + 460))(*(unsigned int *)(this + 12), 0);
    (*(void (**)(unsigned int, int))(**(unsigned int **)(this + 12) + 292))(*(unsigned int *)(this + 12), 1);
  }
  if ( *v122 != g_abs_B077F8
    || *(unsigned int *)(this + 68) != g_abs_B077F8
    || *(unsigned int *)(this + 72) != g_abs_B077F8 )
  {
    *v122 = g_abs_B077F8;
    *(unsigned int *)(this + 68) = g_abs_B077F8;
    v131 = (TechnoClass *)g_abs_B077F8;
    *(unsigned char *)(this + 99) = 0;
    *(unsigned int *)(this + 72) = v131;
  }
  v132 = *(MouseClass **)(this + 12);
  *(unsigned int *)(this + 88) = -1;
  *(unsigned int *)(this + 92) = 0;
  v180 = 0;
  v134 = *(unsigned int *)&v132->__pad_1D4[976];
  if ( v134 )
  {
    v135 = (unsigned int *)(*(int (**)(int, void **, MouseClass *))(*(unsigned int *)v134 + 76))(
                       v134,
                       &aP3.attachedBomb,
                       v132);
    v136 = *v135 / 256;
    v137 = v135[1] / 256;
    v138 = (unsigned short *)(*(int (**)(unsigned int, double *))(**(unsigned int **)(this + 12) + 440))(
                      *(unsigned int *)(this + 12),
                      &varD0);
    if ( *v138 == (unsigned short)v136 && v138[1] == (unsigned short)v137 )
    {
      rax156 = *(unsigned int *)((*(int (**)(void **, unsigned int))(**(unsigned int **)(this + 12) + 76))(
                             &aP3.attachedBomb,
                             *(unsigned int *)(this + 12))
                         + 8)
             - *(unsigned int *)(this + 60);
      if ( (int)((IDA_HIDWORD(rax156) ^ rax156) - IDA_HIDWORD(rax156)) < 2 * g_abs_B077F8 )
      {
        v180 = 1;
        *(unsigned int *)(this + 52) = g_abs_B077F8;
        *(unsigned int *)(this + 56) = g_abs_B077F8;
        *(unsigned int *)(this + 60) = g_abs_B077F8;
        if ( *v122 != g_abs_B077F8
          || *(unsigned int *)(this + 68) != g_abs_B077F8
          || *(unsigned int *)(this + 72) != g_abs_B077F8 )
        {
          *v122 = g_abs_B077F8;
          *(unsigned int *)(this + 68) = g_abs_B077F8;
          *(unsigned int *)(this + 72) = g_abs_B077F8;
          *(unsigned char *)(this + 99) = 0;
        }
        *(unsigned char *)(this + 99) = 0;
      }
    }
  }
  (*(void (**)(unsigned int, int))(**(unsigned int **)(this + 12) + 396))(*(unsigned int *)(this + 12), 2);
  v139 = *(MouseClass **)(this + 12);
  if ( !v139->__pad_74[28] || v139->__pad_74[13] || v139->__pad_74[25] )
    return 1;
  if ( v180 )
  {
    FootClass::ClearPathIndex(v139);
    *(unsigned int *)(*(unsigned int *)(this + 12) + 1504) = -1;
    if ( (*(int (**)(unsigned int))(**(unsigned int **)(this + 12) + 388))(*(unsigned int *)(this + 12)) == 2 )
    {
      if ( (*(uint8_t (**)(unsigned int, unsigned int, int))(**(unsigned int **)(this + 12) + 1156))(
             *(unsigned int *)(this + 12),
             0,
             1) )
      {
        return 1;
      }
    }
  }
  if ( (*(uint8_t (**)(unsigned int))(**(unsigned int **)(this + 12) + 1284))(*(unsigned int *)(this + 12)) )
    return 1;
  if ( !*(unsigned char *)(*(unsigned int *)(this + 12) + 144) )
    return 0;
LABEL_141:
  cc140 = *(unsigned int *)&aP3.__pad_0[4] <= 0;
  *(unsigned int *)(this + 76) = *(unsigned int *)&aP3.__pad_0[4];
  if ( cc140 )
    return 0;
  v117 = *(IUnknown **)(this + 88);
  if ( (int)v117 <= -1 )
    return 0;
  v119 = (unsigned char *)(12 * (unsigned int)v117 + 8333888);
  eax144 = *(unsigned char *)(this + 96) ? (char)v119[1] : (char)*v119;
  v141 = *(unsigned int *)(this + 92);
  v142 = dword_7F2960[4 * eax144];
  v143 = *(unsigned int *)(v142 + 12 * v141);
  v144 = v142 + 12 * v141;
  v145 = *(unsigned int *)(v144 + 4);
  aP3.health = v143;
  aP3.estimatedHealth = v145;
  if ( !v143 && !v145 && v141 )
    return 0;
  v146 = (int *)(*(unsigned int *)(this + 12) + 156);
  aP3.customSound_controller[0] = *v146;
  aP3.customSound_controller[1] = v146[1];
  aP3.customSound_controller[2] = v146[2];
  *(unsigned int *)aP3.__pad_0 = *(unsigned int *)(v144 + 8);
  v147 = *v146;
  v148 = v146[1];
  aP3.ambientSoundController[1] = v146[2];
  v149 = WalkLocomotion::TransformCoords((unsigned int *)this, (ObjectClass *)&aP3.lastLayer, (IUnknown *)&aP3.health, &aP3);
  v150 = *v149;
  v151 = v149[1] - v148;
  v152 = *(unsigned int *)(this + 12) + 156;
  aP3.visibilityFlags = v150 - v147;
  *(unsigned int *)&aP3.needsRedraw = v151;
  *(unsigned int *)&aP3.hasParachute = 0;
  v153 = *(unsigned int *)v152 + v150 - v147;
  esi178a = *(unsigned int *)(v152 + 4);
  v154 = *(TechnoClass **)(v152 + 8);
  aP3.ambientSoundController[3] = esi178a + v151;
  aP3.ambientSoundController[2] = v153;
  aP3.ambientSoundController[4] = (int)v154;
  v155 = (IUnknown *)Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)&aP3.ambientSoundController[2]);
  v157 = (double)*(int *)(this + 76) * 0.1428571428571428;
  memset(&aP3.location[1], 0, 12);
  v177 = v157;
  eax178d = Color::RGBFromFloat(&aP3.attachedBomb, (IUnknown *)&aP3.visibilityFlags, v177);
  aP3.visibilityFlags = *eax178d;
  *(unsigned int *)&aP3.needsRedraw = eax178d[1];
  v158 = (TechnoClass *)eax178d[2];
  IDA_LODWORD(varD0) = aP3.customSound_controller[0] + aP3.visibilityFlags;
  *(unsigned int *)&aP3.hasParachute = v158;
  IDA_HIDWORD(varD0) = aP3.customSound_controller[1] + *(unsigned int *)&aP3.needsRedraw;
  v183 = (IUnknown *)&v158->__pad_0[aP3.customSound_controller[2]];
  v159 = (IUnknown *)Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)aP3.customSound_controller);
  aP3.fallRate = (int)v159;
  v161 = (IUnknown *)Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)&varD0);
  v162 = *(unsigned int *)(this + 12) + 156;
  *(unsigned int *)v182 = *(unsigned int *)v162;
  edx178 = *(unsigned int *)(v162 + 4);
  *(unsigned int *)&v182[4] = edx178;
  v163 = *(TechnoClass **)(v162 + 8);
  *(unsigned int *)&v182[8] = v163;
  v165 = __PAIR64__(edx178, *(unsigned int *)v182);
  if ( v161 == v155 || v161 == v159 )
  {
    v165 = *(unsigned long long *)&varD0;
    v163 = (TechnoClass *)v183;
    *(double *)v182 = varD0;
LABEL_183:
    *(unsigned int *)&v182[8] = v163;
  }
  else if ( *(int *)(this + 76) > 3 )
  {
    v163 = (TechnoClass *)aP3.ambientSoundController[4];
    *(unsigned int *)v182 = aP3.ambientSoundController[2];
    *(unsigned int *)&v182[4] = aP3.ambientSoundController[3];
    v165 = *(unsigned long long *)&aP3.ambientSoundController[2];
    goto LABEL_183;
  }
  *(unsigned long long *)&aP3.parachute = v165;
  *(unsigned int *)&aP3.isAliveFlag = v163;
  eax184 = Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)&aP3.parachute);
  v166 = *(MouseClass **)(this + 12);
  aP3.owningHouseIndex = (int)eax184;
  v168 = *(unsigned int *)&v166->__pad_74[40];
  v169 = *(unsigned int *)&v166->__pad_74[44];
  aP3.ambientSoundController[1] = *(unsigned int *)&v166->__pad_74[48];
  v170 = v169 / 256;
  if ( (uint16_t)(*(unsigned int *)v182 / 256) == (uint16_t)(v168 / 256)
    && (uint16_t)(*(unsigned int *)&v182[4] / 256) == (unsigned short)v170 )
  {
    v173 = v166->__pad_74[0];
    v166->__pad_74[0] = 0;
    (*(void (**)(unsigned int, unsigned char *))(**(unsigned int **)(this + 12) + 436))(*(unsigned int *)(this + 12), v182);
    *(unsigned char *)(*(unsigned int *)(this + 12) + 116) = v173;
    return 0;
  }
  else
  {
    (*(void (**)(MouseClass *, unsigned int))(v166->field_0 + 292))(v166, 0);
    (*(void (**)(unsigned int, unsigned char *))(**(unsigned int **)(this + 12) + 436))(*(unsigned int *)(this + 12), v182);
    fallRate = aP3.fallRate;
    v171 = (IUnknown *)aP3.owningHouseIndex;
    if ( *(char *)(aP3.owningHouseIndex + 283) != *(char *)(aP3.fallRate + 283) - 4 )
      goto LABEL_189;
    if ( (*(unsigned int *)(aP3.owningHouseIndex + 320) & 0x100) == 0 )
      goto LABEL_190;
    *(unsigned char *)(*(unsigned int *)(this + 12) + 140) = 1;
LABEL_189:
    if ( (v171->field_140 & 0x100) == 0 )
    {
LABEL_190:
      if ( (*(unsigned int *)(fallRate + 320) & 0x100) != 0 )
        *(unsigned char *)(*(unsigned int *)(this + 12) + 140) = 0;
    }
    (*(void (**)(int, int))(**(unsigned int **)(this + 12) + 292))(fallRate, 1);
    return 0;
  }

}
} // namespace gamemd

// 0x6A1C80
namespace gamemd {
int WalkLocomotion::Update(unsigned char * a2, int a3, int a4)
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
  int v79; // edx
  int v80; // eax
  char *v81; // eax
  int v82; // ecx
  int v83; // edi
  unsigned int *v84; // eax
  unsigned int *v85; // eax
  int v86; // ecx
  int v87; // edx
  unsigned int *v88; // eax
  int v89; // ecx
  unsigned int *v90; // esi
  int v91; // eax
  int v92; // ecx
  int v93; // eax
  int v94; // edx
  int v95; // esi
  int v96; // edx
  unsigned int *v97; // ebx
  int v98; // eax
  int v99; // eax
  unsigned int *v100; // edx
  int v101; // ecx
  int v102; // ecx
  int v103; // edi
  int v104; // esi
  int v105; // eax
  int v106; // edx
  int v107; // eax
  char v108; // bl
  unsigned int *v109; // ecx
  unsigned int *v110; // edx
  wchar_t *v111; // eax
  unsigned int *v112; // eax
  unsigned int *v113; // eax
  int v114; // edx
  int v115; // eax
  double v116; // st7
  unsigned int *v117; // ecx
  int64_t v118; // rax
  unsigned int *v119; // ecx
  unsigned int *v120; // edx
  int v121; // esi
  int v122; // ecx
  unsigned int *v123; // eax
  unsigned int *v124; // eax
  char v125; // al
  int v126; // ecx
  wchar_t *v127; // esi
  wchar_t *v128; // eax
  wchar_t *v129; // ecx
  wchar_t **v130; // edx
  unsigned int *v131; // eax
  unsigned int *v132; // eax
  int Object; // eax
  int *v134; // ecx
  int v135; // esi
  unsigned int *v136; // eax
  int v137; // eax
  int v138; // esi
  void *v139; // eax
  unsigned int *v140; // eax
  int *Coords; // eax
  int v142; // esi
  unsigned int *v143; // edx
  int v144; // edi
  bool v145; // cc
  double v146; // st7
  double v148; // st7
  uint8_t v149; // c0
  uint8_t v150; // c3
  double *v151; // ecx
  int v152; // ecx
  unsigned int *v153; // ecx
  unsigned int v154; // esi
  unsigned int *v155; // eax
  int v156; // edi
  int v157; // ecx
  int v158; // edx
  int v159; // eax
  int v160; // ecx
  double v161; // st7
  char v162; // dl
  int v163; // ecx
  int v164; // ecx
  unsigned int *NeighbourContent; // eax
  int v166; // eax
  int v167; // eax
  unsigned int v168; // eax
  unsigned int *v169; // eax
  int v170; // eax
  int v171; // esi
  int *v172; // edi
  int v173; // eax
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
    if ( *((unsigned int *)this + 16) != g_abs_B077F8
      || *((unsigned int *)this + 17) != g_abs_B077FC
      || *((unsigned int *)this + 18) != g_abs_B07800 )
    {
      *((unsigned int *)this + 16) = g_abs_B077F8;
      *((unsigned int *)this + 17) = g_abs_B077FC;
      *((unsigned int *)this + 18) = g_abs_B07800;
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
  if ( *((unsigned int *)this + 13) == g_abs_B077F8
    && *((unsigned int *)this + 14) == g_abs_B077FC
    && *((unsigned int *)this + 15) == g_abs_B07800 )
  {
    return 0;
  }
  if ( *(unsigned int *)(*((unsigned int *)this + 3) + 720) && TechnoClass::CountPassengers() )
    return 1;
  if ( (*(uint8_t (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 468))(*((unsigned int *)this + 3))
    || (*(uint8_t (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 472))(*((unsigned int *)this + 3)) )
  {
    return 0;
  }
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
    if ( *v22 == g_abs_B077F8
      && *((unsigned int *)this + 14) == g_abs_B077FC
      && *((unsigned int *)this + 15) == g_abs_B07800 )
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
      if ( *((unsigned int *)this + 16) != g_abs_B077F8
        || *((unsigned int *)this + 17) != g_abs_B077FC
        || *((unsigned int *)this + 18) != g_abs_B07800 )
      {
        *((unsigned int *)this + 16) = g_abs_B077F8;
        *((unsigned int *)this + 17) = g_abs_B077FC;
        *((unsigned int *)this + 18) = g_abs_B07800;
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
          ClosestObject = Object::FindClosestObjectCell(v41, &v220, v43 > GroundHeight + 2 * g_abs_B07838, 0);
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
                if ( (int)((IDA_HIDWORD(v49) ^ v49) - IDA_HIDWORD(v49)) < 2 * g_abs_B07838 )
                {
                  v220 = (unsigned int *)*v48;
                  v221 = v48[1];
                  v222 = v48[2];
                  if ( *((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, &v220) + 59) != 10 )
                  {
                    if ( *((unsigned int *)this + 16) != g_abs_B077F8
                      || *((unsigned int *)this + 17) != g_abs_B077FC
                      || *((unsigned int *)this + 18) != g_abs_B07800 )
                    {
                      *((unsigned int *)this + 16) = g_abs_B077F8;
                      *((unsigned int *)this + 17) = g_abs_B077FC;
                      *((unsigned int *)this + 18) = g_abs_B07800;
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
                    v52 = v51[2] / g_abs_B07838 - *((char *)v41 + 283),
                    (int)((IDA_HIDWORD(v52) ^ v52) - IDA_HIDWORD(v52)) <= 2) )
              {
                IDA_LOBYTE(a2) = 0;
              }
              Cell::ApplyDamage(v41, (int)&g_abs_B077F8, 1, 1, (char)a2);
            }
          }
        }
      }
      v53 = *(unsigned int **)((char *)this + 12);
      v54 = v53[403];
      if ( v54 <= 0 )
      {
        if ( *((unsigned int *)this + 16) != g_abs_B077F8
          || *((unsigned int *)this + 17) != g_abs_B077FC
          || *((unsigned int *)this + 18) != g_abs_B07800 )
        {
          *((unsigned int *)this + 16) = g_abs_B077F8;
          *((unsigned int *)this + 17) = g_abs_B077FC;
          *((unsigned int *)this + 18) = g_abs_B07800;
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
    if ( *((unsigned int *)this + 16) != g_abs_B077F8
      || *((unsigned int *)this + 17) != g_abs_B077FC
      || *((unsigned int *)this + 18) != g_abs_B07800 )
    {
      *((unsigned int *)this + 16) = g_abs_B077F8;
      *((unsigned int *)this + 17) = g_abs_B077FC;
      *((unsigned int *)this + 18) = g_abs_B07800;
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
      v70 = Object::FindClosestObjectCell(v66, &v220, v68 > v69 + 2 * g_abs_B07838, 0);
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
            if ( (int)((IDA_HIDWORD(v74) ^ v74) - IDA_HIDWORD(v74)) < 2 * g_abs_B07838 )
            {
              v220 = (unsigned int *)*v73;
              v221 = v73[1];
              v222 = v73[2];
              if ( *((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, &v220) + 59) != 10 )
              {
                if ( *((unsigned int *)this + 16) == g_abs_B077F8
                  && *((unsigned int *)this + 17) == g_abs_B077FC
                  && *((unsigned int *)this + 18) == g_abs_B07800 )
                {
                  goto LABEL_118;
                }
                *((unsigned int *)this + 16) = g_abs_B077F8;
                *((unsigned int *)this + 17) = g_abs_B077FC;
                *((unsigned int *)this + 18) = g_abs_B07800;
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
                v77 = v76[2] / g_abs_B07838 - *((char *)v66 + 283),
                (int)((IDA_HIDWORD(v77) ^ v77) - IDA_HIDWORD(v77)) <= 2) )
          {
            IDA_LOBYTE(v216) = 0;
          }
          Cell::ApplyDamage(v66, (int)&g_abs_B077F8, 1, 1, SLOBYTE(v216));
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
          *(unsigned int *)(*((unsigned int *)this + 3) + 156) + g_abs_89F6D8[2 * (v6 & 7)],
          *(unsigned int *)(*((unsigned int *)this + 3) + 160) + g_abs_89F6DC[2 * (v6 & 7)],
          *(unsigned int *)(*((unsigned int *)this + 3) + 164));
  v223 = *v78;
  v224 = v78[1];
  v79 = v78[2];
  v80 = *((unsigned int *)this + 3) + 156;
  v225 = v79;
  v220 = *(unsigned int **)v80;
  v221 = *(unsigned int *)(v80 + 4);
  v222 = *(unsigned int *)(v80 + 8);
  v81 = (char *)Coord::To_Cell(&g_abs_87F7E8, &v220);
  v82 = *((unsigned int *)this + 3);
  v83 = v81[283] + (*(unsigned char *)(v82 + 140) != 0 ? 4 : 0);
  v84 = Coord::Subtract(
          &v226,
          *(unsigned int *)(v82 + 156) + g_abs_89F6D8[2 * (v6 & 7)],
          *(unsigned int *)(v82 + 160) + g_abs_89F6DC[2 * (v6 & 7)],
          *(unsigned int *)(v82 + 164));
  v220 = (unsigned int *)*v84;
  v221 = v84[1];
  v222 = v84[2];
  v85 = Coord::To_Cell(&g_abs_87F7E8, &v220);
  v86 = *((unsigned int *)this + 3);
  if ( *(unsigned char *)(v86 + 140) != ((v85[80] >> 8) & 1) )
    *(unsigned char *)(v86 + 1675) = 1;
  if ( !(*(uint8_t (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 668))(*((unsigned int *)this + 3)) )
    return 1;
  IDA_LOWORD(v216) = v223 / 256;
  v87 = *((unsigned int *)this + 3);
  IDA_WORD1(v216) = v224 / 256;
  v219 = IDA_LODWORD(v216);
  if ( !Cell::IsPassableAllied(v87, (int16_t *)&v219) )
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
  v88 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
  v89 = *((unsigned int *)this + 3);
  v90 = v88;
  v220 = v88;
  v214 = 0;
  (*(void (**)(int, unsigned int))(*(unsigned int *)v89 + 292))(v89, 0);
  v91 = (*(int (**)(unsigned int, unsigned int *, unsigned int, int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 428))(
          *((unsigned int *)this + 3),
          v90,
          v6,
          v83,
          0,
          1);
  v92 = *((unsigned int *)this + 3);
  IDA_LODWORD(v216) = v91;
  (*(void (**)(int, int))(*(unsigned int *)v92 + 292))(v92, 1);
  if ( IDA_SLODWORD(v216) < 7
    && *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3220)
    || (IDA_LODWORD(v216) == 5 || IDA_LODWORD(v216) == 4)
    && *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3368)
    && !v90[17] )
  {
    IDA_LODWORD(v216) = 0;
  }
  v93 = v90[17];
  v94 = IDA_LODWORD(v216);
  if ( v93 != -1 && !IDA_LODWORD(v216) && *(unsigned char *)(*((unsigned int *)g_abs_A83D84 + v93) + 557) )
  {
LABEL_148:
    v214 = 1;
    goto LABEL_149;
  }
  if ( v93 != -1 )
  {
    if ( !IDA_LODWORD(v216) )
    {
      if ( !*(unsigned char *)(*((unsigned int *)g_abs_A83D84 + v93) + 680)
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
    v94 = IDA_LODWORD(v216);
LABEL_153:
    if ( v94 == 3 )
    {
      v96 = *((unsigned int *)this + 3);
      a4 = v215;
      Cell::IsPassableAllied(v96, (int16_t *)&a4);
      goto LABEL_155;
    }
    if ( v94 == 6 )
    {
      if ( !*(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3220) )
      {
        v109 = *(unsigned int **)((char *)this + 12);
        if ( (unsigned char)a3 )
        {
          v109[376] = -1;
          v110 = (unsigned int *)(*((unsigned int *)this + 3) + 1600);
          *v110 = g_abs_A8ED84;
          v111 = v227;
          goto LABEL_327;
        }
        v112 = (unsigned int *)(*(int (**)(unsigned int *, unsigned int **))(*v109 + 72))(v109, &v226);
        v113 = Coord::Subtract(
                 &v229,
                 *v112 - *((unsigned int *)this + 13),
                 v112[1] - *((unsigned int *)this + 14),
                 v112[2] - *((unsigned int *)this + 15));
        v220 = (unsigned int *)*v113;
        v114 = v113[1];
        v115 = v113[2];
        v221 = v114;
        v222 = v115;
        v116 = Math::Sqrt((double)v115 * (double)v115 + (double)v114 * (double)v114 + (double)(int)v220
                                                                                    * (double)(int)v220);
        if ( (int)Math::RoundToInt(v116) >= *((unsigned int *)g_abs_8871E0 + 1478)
          || (v117 = (unsigned int *)(*((unsigned int *)this + 3) + 156),
              v226 = (unsigned int *)*v117,
              v227 = (wchar_t *)v117[1],
              v118 = *((unsigned int *)this + 15) - v117[2],
              (int)((IDA_HIDWORD(v118) ^ v118) - IDA_HIDWORD(v118)) >= 2 * g_abs_B07838)
          || (v220 = (unsigned int *)*v117,
              v221 = v117[1],
              v222 = v117[2],
              *((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, &v220) + 59) == 10) )
        {
          if ( (*((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215) + 80) & 0x100) == 0
            || (v120 = (unsigned int *)(*((unsigned int *)this + 3) + 156),
                v226 = (unsigned int *)*v120,
                v227 = (wchar_t *)v120[1],
                v121 = v120[2],
                v122 = *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215) + 283),
                IDA_LOBYTE(a4) = 1,
                (int)abs32(v121 / g_abs_B07838 - v122) <= 2) )
          {
            IDA_LOBYTE(a4) = 0;
          }
          v210 = a4;
          v123 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
          Cell::ApplyDamage(v123, (int)&g_abs_B077F8, 1, 1, v210);
        }
        else
        {
          if ( *((unsigned int *)this + 16) != g_abs_B077F8
            || *((unsigned int *)this + 17) != g_abs_B077FC
            || *((unsigned int *)this + 18) != g_abs_B07800 )
          {
            *((unsigned int *)this + 16) = g_abs_B077F8;
            *((unsigned int *)this + 17) = g_abs_B077FC;
            *((unsigned int *)this + 18) = g_abs_B07800;
            *((unsigned char *)this + 99) = 0;
          }
          v119 = *(unsigned int **)((char *)this + 12);
          if ( v119[358] )
          {
            FootClass::ClearPathIndex(v119);
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
            (*(void (**)(unsigned int *, unsigned int, int))(*v119 + 1152))(v119, 0, 1);
          }
        }
      }
LABEL_155:
      v97 = (unsigned int *)((char *)this + 64);
      if ( *((unsigned int *)this + 16) != g_abs_B077F8
        || *((unsigned int *)this + 17) != g_abs_B077FC
        || *((unsigned int *)this + 18) != g_abs_B07800 )
      {
        *v97 = g_abs_B077F8;
        *((unsigned int *)this + 17) = g_abs_B077FC;
        v98 = g_abs_B07800;
        *((unsigned char *)this + 99) = 0;
        *((unsigned int *)this + 18) = v98;
      }
      if ( IDA_LODWORD(v216) == 2 )
      {
        v99 = *((unsigned int *)this + 3);
        if ( !*(unsigned char *)(v99 + 1719) )
        {
          *(unsigned char *)(v99 + 1719) = 1;
          v100 = (unsigned int *)(*((unsigned int *)this + 3) + 1640);
          v101 = *((unsigned int *)g_abs_8871E0 + 1498);
          *v100 = g_abs_A8ED84;
          v100[1] = v230;
          v100[2] = v101;
        }
        v102 = *((unsigned int *)this + 3);
        v103 = (int)g_abs_A8ED84;
        v104 = *(unsigned int *)(v102 + 1600);
        v105 = *(unsigned int *)(v102 + 1608);
        if ( v104 != -1 )
        {
          if ( (int)g_abs_A8ED84 - v104 >= v105 )
            goto LABEL_166;
          v105 -= (int)g_abs_A8ED84 - v104;
        }
        if ( !v105 )
        {
LABEL_166:
          if ( *(unsigned char *)(v102 + 1719) )
          {
            v106 = *(unsigned int *)(v102 + 1640);
            v107 = *(unsigned int *)(v102 + 1648);
            if ( v106 != -1 )
            {
              v103 = (int)g_abs_A8ED84 - v106;
              if ( (int)g_abs_A8ED84 - v106 >= v107 )
              {
LABEL_171:
                v108 = 1;
LABEL_199:
                IDA_LOWORD(a4) = *((unsigned int *)this + 13) / 256;
                IDA_HIWORD(a4) = *((unsigned int *)this + 14) / 256;
                v125 = FootClass::MovementStep(v102, v103, a4, 0, (v108 != 0) + 1, v213);
                v126 = *((unsigned int *)this + 3);
                if ( !v126 )
                {
                  *a2 = 1;
                  return 0;
                }
                if ( v125 || (*(uint8_t (**)(int, int))(*(unsigned int *)v126 + 716))(v126, (char *)this + 52) )
                {
                  v127 = g_abs_A8ED84;
                  v128 = (wchar_t *)Math::RoundToInt(*((double *)g_abs_8871E0 + 748) * 900.0);
                  v129 = v230;
                  v130 = (wchar_t **)(*((unsigned int *)this + 3) + 1600);
                  *v130 = v127;
                  v130[1] = v129;
                  v130[2] = v128;
                  return 1;
                }
                v75 = *(unsigned int **)((char *)this + 12);
LABEL_204:
                (*(void (**)(unsigned int *, unsigned int, int))(*v75 + 1152))(v75, 0, 1);
                return 0;
              }
              v107 -= v103;
            }
            if ( !v107 )
              goto LABEL_171;
          }
          v108 = 0;
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
        v131 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
        if ( Object::FindObjectCell(v131, &v220, 0) )
        {
          v220 = 0;
          v221 = 0;
          v132 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
          Object = Object::FindObjectCell(v132, &v220, 0);
          if ( !Object::IsAlliedWithObjectHouse(*(unsigned int **)(*((unsigned int *)this + 3) + 540), Object) )
          {
            v134 = *(int **)((char *)this + 12);
            v220 = 0;
            v221 = 0;
            v135 = *v134;
            v136 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
            v137 = Object::FindObjectCell(v136, &v220, 0);
            (*(void (**)(unsigned int, int, int, unsigned int))(v135 + 500))(*((unsigned int *)this + 3), 1, v137, 0);
          }
        }
        else if ( *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215) + 17) != -1
               && *(unsigned char *)(*((unsigned int *)g_abs_A83D84
                             + *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215) + 17))
                           + 680) )
        {
          v138 = **(unsigned int **)((char *)this + 12);
          v139 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
          (*(void (**)(unsigned int, int, void *, unsigned int))(v138 + 500))(*((unsigned int *)this + 3), 1, v139, 0);
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
          v110 = (unsigned int *)(*((unsigned int *)this + 3) + 1600);
          *v110 = g_abs_A8ED84;
          v111 = v230;
          goto LABEL_327;
        }
        if ( *v97 != g_abs_B077F8
          || *((unsigned int *)this + 17) != g_abs_B077FC
          || *((unsigned int *)this + 18) != g_abs_B07800 )
        {
          *v97 = g_abs_B077F8;
          *((unsigned int *)this + 17) = g_abs_B077FC;
          *((unsigned int *)this + 18) = g_abs_B07800;
          goto LABEL_117;
        }
LABEL_118:
        v75 = *(unsigned int **)((char *)this + 12);
        if ( !v75[358] )
          goto LABEL_119;
        goto LABEL_333;
      }
      *(unsigned int *)(*((unsigned int *)this + 3) + 1504) = -1;
      v110 = (unsigned int *)(*((unsigned int *)this + 3) + 1600);
      *v110 = g_abs_A8ED84;
      v111 = v230;
LABEL_327:
      v110[1] = v111;
      v110[2] = 0;
      return WalkLocomotion::Update(a2, 0, 0);
    }
    if ( v94 != 1 )
      goto LABEL_155;
    v124 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
    CellClass::DamageAllObjects(v124);
    if ( (unsigned char)a3 )
    {
      v208 = a2;
      *(unsigned int *)(*((unsigned int *)this + 3) + 1504) = -1;
      return WalkLocomotion::Update(v208, 0, 0);
    }
    if ( *((unsigned int *)this + 16) == g_abs_B077F8
      && *((unsigned int *)this + 17) == g_abs_B077FC
      && *((unsigned int *)this + 18) == g_abs_B07800 )
    {
      goto LABEL_118;
    }
    *((unsigned int *)this + 16) = g_abs_B077F8;
    *((unsigned int *)this + 17) = g_abs_B077FC;
    *((unsigned int *)this + 18) = g_abs_B07800;
LABEL_117:
    *((unsigned char *)this + 99) = 0;
    goto LABEL_118;
  }
LABEL_149:
  if ( (int)abs32(v83 - *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215) + 283)) >= 2 )
  {
    v219 = v83;
    v95 = 1;
  }
  else
  {
    v219 = *((char *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215) + 283);
    v95 = *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215) + 59);
  }
  v216 = g_abs_89EA40[9 * v95
                        + *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3))
                                    + 1660)];
  if ( v216 > 1.0 )
    v216 = 1.0;
  v140 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
  Coords = CellClass::GetCoords(v140, &v229);
  v142 = Cell::GetGroundHeight(Coords);
  v143 = (unsigned int *)(*((unsigned int *)this + 3) + 156);
  v226 = (unsigned int *)*v143;
  v227 = (wchar_t *)v143[1];
  v228 = v143[2];
  v144 = Cell::GetGroundHeight(&v226);
  v145 = v142 < v144;
  if ( v142 > v144 )
  {
    if ( (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 44))(*((unsigned int *)this + 3)) == 1 )
    {
      if ( *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 1660) == 1 )
        v146 = v216 * *((double *)g_abs_8871E0 + 237);
      else
        v146 = v216 * *((double *)g_abs_8871E0 + 239);
LABEL_241:
      v216 = v146;
      goto LABEL_242;
    }
    v145 = v142 < v144;
  }
  if ( v145 && (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 44))(*((unsigned int *)this + 3)) == 1 )
  {
    if ( *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 1660) == 1 )
      v146 = v216 * *((double *)g_abs_8871E0 + 238);
    else
      v146 = v216 * *((double *)g_abs_8871E0 + 240);
    goto LABEL_241;
  }
LABEL_242:
  if ( v216 == 0.0 )
    v216 = 0.5;
  BuildingClass::GetHealthRatio(*(int **)((char *)this + 12));
  v148 = v216;
  if ( v149 | v150 )
  {
    v148 = v216 * 0.75;
    v216 = v216 * 0.75;
  }
  if ( *((int *)this + 22) >= 64 )
  {
    v151 = *(double **)((char *)this + 12);
    if ( v148 != v151[175] )
      (*(void (**)(double *, unsigned int, unsigned int))(*(unsigned int *)v151 + 1348))(v151, IDA_LODWORD(v216), IDA_HIDWORD(v216));
  }
  else
  {
    *(double *)((char *)this + 80) = v148;
  }
  v152 = *((unsigned int *)this + 3);
  IDA_LOWORD(v216) = v223 / 256;
  IDA_WORD1(v216) = v224 / 256;
  (*(void (**)(int, double *, int))(*(unsigned int *)v152 + 1332))(v152, &v216, 1);
  v153 = *(unsigned int **)((char *)this + 12);
  v154 = v153[377];
  if ( v154 == -1 )
  {
    v155 = (unsigned int *)(*(int (**)(unsigned int *, int *))(*v153 + 72))(v153, &v229);
    v156 = *((unsigned int *)this + 14);
    v157 = *v155 - *((unsigned int *)this + 13);
    v158 = v155[1];
    v159 = v155[2];
    IDA_LODWORD(v216) = v157;
    v160 = *((unsigned int *)this + 15);
    IDA_HIDWORD(v216) = v158 - v156;
    v217 = v159 - v160;
    v161 = Math::Sqrt(
             (double)(v159 - v160) * (double)(v159 - v160)
           + (double)(v158 - v156) * (double)(v158 - v156)
           + (double)IDA_SLODWORD(v216) * (double)IDA_SLODWORD(v216));
    if ( (int)Math::RoundToInt(v161) <= 512 )
    {
LABEL_262:
      v154 = v6;
      goto LABEL_263;
    }
    v162 = *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3220);
    v163 = *((unsigned int *)this + 3);
    IDA_LOWORD(v216) = *((unsigned int *)this + 13) / 256;
    IDA_WORD1(v216) = *((unsigned int *)this + 14) / 256;
    result = FootClass::MovementStep(v163, v156, IDA_SLODWORD(v216), v162 != 0, 0, v213);
    if ( !result )
    {
      v164 = *((unsigned int *)this + 3);
      if ( !v164 )
      {
        *a2 = 1;
        return result;
      }
      if ( !(*(uint8_t (**)(int, int))(*(unsigned int *)v164 + 716))(v164, (char *)this + 52) )
        (*(void (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1152))(*((unsigned int *)this + 3), 0, 1);
    }
    v154 = *(unsigned int *)(*((unsigned int *)this + 3) + 1508);
  }
  if ( v154 == 8 )
    v154 = v6;
  if ( v154 == -1 || (unsigned char)a4 )
    goto LABEL_262;
LABEL_263:
  if ( v154 != -1
    && (NeighbourContent = Cell::GetNeighbourContent(v220, v154)) != 0
    && (v166 = NeighbourContent[17], v166 != -1)
    && ((v167 = *((unsigned int *)g_abs_A83D84 + v166), *(unsigned char *)(v167 + 557))
     || *(unsigned char *)(v167 + 680)
     && *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 1460) == 12)
    || v214 )
  {
    v154 = v6;
    *((unsigned char *)this + 100) = 1;
  }
  else
  {
    *((unsigned char *)this + 100) = 0;
  }
  v168 = v154 + 8 * v6;
  *((unsigned char *)this + 96) = 0;
  *((unsigned int *)this + 22) = v168;
  if ( !byte_7F2A40[12 * v168] )
    *((unsigned int *)this + 22) = 9 * v6;
  if ( (dword_7F2A48[3 * *((unsigned int *)this + 22)] & 8) != 0 )
  {
    v211 = *((unsigned int *)this + 3);
    v169 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
    if ( CrateClass::ProcessPickup(v169, v211) || (v170 = *((unsigned int *)this + 3), *(unsigned char *)(v170 + 129)) )
    {
      v172 = *(int **)((char *)this + 12);
      if ( !*((unsigned char *)v172 + 144) )
        return 0;
      v173 = v154 & 7;
      v174 = v224 + g_abs_89F6DC[2 * v173];
      v223 += g_abs_89F6D8[2 * v173];
      v224 = v174;
      IDA_LOWORD(a4) = v223 / 256;
      IDA_HIWORD(a4) = v174 / 256;
      v209 = v219;
      v215 = a4;
      v175 = *v172;
      v176 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
      v171 = (*(int (**)(unsigned int, void *, unsigned int, int, unsigned int, int))(v175 + 428))(
               *((unsigned int *)this + 3),
               v176,
               v154,
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
          goto LABEL_291;
        case 2:
          return WalkLocomotion::Update(a2, a3, 1);
        case 6:
          if ( *(unsigned char *)((*(int (**)(unsigned int *))(*v75 + 132))(v75) + 3220) )
            goto LABEL_291;
          v178 = *(unsigned int **)((char *)this + 12);
          if ( (unsigned char)v177 )
          {
            v178[376] = -1;
            v110 = (unsigned int *)(*((unsigned int *)this + 3) + 1600);
            *v110 = g_abs_A8ED84;
            v111 = v230;
            goto LABEL_327;
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
                (int)((IDA_HIDWORD(v187) ^ v187) - IDA_HIDWORD(v187)) >= 2 * g_abs_B07838)
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
                  v192 = v190[2] / g_abs_B07838 - v191,
                  (int)((IDA_HIDWORD(v192) ^ v192) - IDA_HIDWORD(v192)) <= 2) )
            {
              IDA_LOBYTE(a4) = 0;
            }
            Cell::ApplyDamage(v189, (int)&g_abs_B077F8, 1, 1, a4);
LABEL_291:
            *(unsigned int *)(*((unsigned int *)this + 3) + 1504) = -1;
            *((unsigned int *)this + 22) = -1;
            v223 = g_abs_B077F8;
            v224 = g_abs_B077FC;
            v225 = g_abs_B07800;
            if ( v171 == 5 || v171 == 4 )
              return WalkLocomotion::Update(a2, v177, 1);
            goto LABEL_336;
          }
          if ( *((unsigned int *)this + 16) != g_abs_B077F8
            || *((unsigned int *)this + 17) != g_abs_B077FC
            || *((unsigned int *)this + 18) != g_abs_B07800 )
          {
            *((unsigned int *)this + 16) = g_abs_B077F8;
            *((unsigned int *)this + 17) = g_abs_B077FC;
            *((unsigned int *)this + 18) = g_abs_B07800;
            *((unsigned char *)this + 99) = 0;
          }
          v188 = *(unsigned int **)((char *)this + 12);
          if ( !v188[358] )
          {
            (*(void (**)(unsigned int *, unsigned int, int))(*v188 + 1152))(v188, 0, 1);
            goto LABEL_291;
          }
          FootClass::ClearPathIndex(v188);
          if ( !(*(uint8_t (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1156))(
                  *((unsigned int *)this + 3),
                  0,
                  1) )
            goto LABEL_291;
          return 1;
        case 1:
          v193 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v215);
          CellClass::DamageAllObjects(v193);
          if ( (unsigned char)a3 )
          {
            v194 = a2;
            *(unsigned int *)(*((unsigned int *)this + 3) + 1504) = -1;
            return WalkLocomotion::Update(v194, 0, 0);
          }
          if ( *((unsigned int *)this + 16) != g_abs_B077F8
            || *((unsigned int *)this + 17) != g_abs_B077FC
            || *((unsigned int *)this + 18) != g_abs_B07800 )
          {
            *((unsigned int *)this + 16) = g_abs_B077F8;
            *((unsigned int *)this + 17) = g_abs_B077FC;
            *((unsigned int *)this + 18) = g_abs_B07800;
            *((unsigned char *)this + 99) = 0;
          }
          v75 = *(unsigned int **)((char *)this + 12);
          if ( v75[358] )
            goto LABEL_333;
LABEL_119:
          (*(void (**)(unsigned int *, unsigned int, int))(*v75 + 1152))(v75, 0, 1);
          return 0;
      }
      if ( v171 != 7 )
        goto LABEL_291;
      if ( (unsigned char)a3 )
      {
        v75[376] = -1;
        v110 = (unsigned int *)(*((unsigned int *)this + 3) + 1600);
        *v110 = g_abs_A8ED84;
        v111 = v230;
        goto LABEL_327;
      }
      if ( *((unsigned int *)this + 16) != g_abs_B077F8
        || *((unsigned int *)this + 17) != g_abs_B077FC
        || *((unsigned int *)this + 18) != g_abs_B07800 )
      {
        *((unsigned int *)this + 16) = g_abs_B077F8;
        *((unsigned int *)this + 17) = g_abs_B077FC;
        *((unsigned int *)this + 18) = g_abs_B07800;
        *((unsigned char *)this + 99) = 0;
      }
      if ( v75[358] )
      {
LABEL_333:
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
LABEL_336:
  v195 = (int *)((char *)this + 64);
  *(unsigned int *)(*((unsigned int *)this + 3) + 1596) = -1;
  IDA_LOWORD(a4) = v223 / 256;
  v196 = *((unsigned int *)this + 3);
  IDA_HIWORD(a4) = v224 / 256;
  *(unsigned int *)(v196 + 1368) = a4;
  *(unsigned char *)(*((unsigned int *)this + 3) + 1674) = 0;
  *((unsigned int *)this + 23) = 0;
  v197 = g_abs_B077F8;
  if ( *((unsigned int *)this + 16) != g_abs_B077F8
    || *((unsigned int *)this + 17) != g_abs_B077FC
    || *((unsigned int *)this + 18) != g_abs_B07800 )
  {
    *v195 = g_abs_B077F8;
    *((unsigned int *)this + 17) = g_abs_B077FC;
    v198 = g_abs_B07800;
    *((unsigned char *)this + 99) = 0;
    *((unsigned int *)this + 18) = v198;
    v197 = g_abs_B077F8;
  }
  v199 = v223;
  v200 = v225;
  v201 = v223 == v197;
  v202 = v224;
  if ( !v201 || v224 != g_abs_B077FC || v225 != g_abs_B07800 )
  {
    *((unsigned char *)this + 99) = 1;
    *v195 = v199;
    *((unsigned int *)this + 17) = v202;
    *((unsigned int *)this + 18) = v200;
    v212 = *((unsigned int *)this + 3);
    v203 = Coord::To_Cell(&g_abs_87F7E8, &v223);
    if ( CrateClass::ProcessPickup(v203, v212) && !*(unsigned char *)(*((unsigned int *)this + 3) + 129) )
    {
      WalkLocomotion::MoveTo(&v223, 1);
      return 0;
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 3) + 144) )
    {
      *v195 = g_abs_B077F8;
      *((unsigned int *)this + 17) = g_abs_B077FC;
      *((unsigned int *)this + 18) = g_abs_B07800;
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

// 0x6A3DB0
namespace gamemd {
unsigned int * WalkLocomotion::TransformCoords(ObjectClass * aP1, IUnknown * aP2, ObjectClass * aP3)
{

  int aP3; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // edx
  int v9; // ecx

  aP3 = *(unsigned int *)aP3->__pad_0; /*0x6a3dbd*/
  v5 = dword_7F2A48[3 * *((unsigned int *)this + 22)]; /*0x6a3dc1*/
  v6 = aP2->field_0; /*0x6a3dcf*/
  v7 = aP2->field_4; /*0x6a3dd1*/
  if ( (v5 & 1) != 0 ) /*0x6a3dd4*/
  {
    v6 = aP2->field_4; /*0x6a3dd8*/
    v7 = aP2->field_0; /*0x6a3dda*/
    aP3 = (uint8_t)(-64 - aP3); /*0x6a3de9*/
  }
  if ( (v5 & 2) != 0 ) /*0x6a3dee*/
  {
    v6 = -v6; /*0x6a3df2*/
    aP3 = (uint8_t)-(char)aP3; /*0x6a3df4*/
  }
  if ( (v5 & 4) != 0 ) /*0x6a3dfc*/
  {
    v7 = -v7; /*0x6a3e05*/
    aP3 = (uint8_t)(0x80 - aP3); /*0x6a3e0d*/
  }
  *(unsigned int *)aP3->__pad_0 = aP3; /*0x6a3e0f*/
  v8 = *((unsigned int *)this + 16); /*0x6a3e12*/
  v9 = *((unsigned int *)this + 17); /*0x6a3e15*/
  *(unsigned int *)aP1->__pad_0 = v6 + v8; /*0x6a3e22*/
  *(unsigned int *)&aP1->__pad_0[4] = v7 + v9; /*0x6a3e25*/
  return aP1->__pad_0; /*0x6a3e20*/

}
}