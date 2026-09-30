// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/RadioClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Map_e4.hpp"
#include "e4/classes/LoadOptions_e4.hpp"
#include "e4/classes/RadarHashVector_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"

// 0x431090
namespace gamemd {
int Radar::FindNearestRadarTarget(int a2, int a3, int a4)
{

  unsigned int **v4; // edi
  int i; // esi
  unsigned int *v6; // eax
  double v7; // st7
  bool v8; // cc
  int v10; // [esp+18h] [ebp-18h]
  unsigned int *v11; // [esp+1Ch] [ebp-14h]

  if ( *((unsigned int *)this + 24) ) /*0x431099*/
  {
    v4 = (unsigned int **)this; /*0x4310ab*/
    v10 = 0; /*0x4310ad*/
    v11 = this; /*0x4310b5*/
    while ( 2 ) /*0x4310b9*/
    {
      for ( i = 0; i < 3; ++i ) /*0x4310b9*/
      {
        if ( *v4 ) /*0x4310bb*/
        {
          v6 = *v4; /*0x4310bb*/
          v7 = Math::Sqrt( /*0x43110c*/
                 (double)(a2 - *v6) * (double)(a2 - *v6)
               + (double)(a4 - v6[2]) * (double)(a4 - v6[2])
               + (double)(a3 - v6[1]) * (double)(a3 - v6[1]));
          if ( (int)Math::RoundToInt(v7) < 128 ) /*0x43111e*/
            return *((unsigned int *)this + 2 * v10 + i + v10); /*0x431161*/
        }
        ++v4; /*0x431121*/
      }
      v4 = (unsigned int **)(v11 + 3); /*0x431132*/
      v8 = ++v10 < 8; /*0x431135*/
      v11 += 3; /*0x43113c*/
      if ( v8 ) /*0x431140*/
        continue; /*0x431140*/
      break;
    }
  }
  return 0; /*0x431148*/

}
}
// 0x4ADCD0
namespace gamemd {
void Radar::UpdateReveal(char a1, IUnknown * aP1)
{

  int v2; // ebx
  int v3; // edi
  int v4; // esi
  MouseClass *v5; // edx
  int v6; // ecx
  MouseClass *v7; // eax
  unsigned int v8[3]; // [esp+14h] [ebp-24h] BYREF
  unsigned int v9[3]; // [esp+20h] [ebp-18h] BYREF
  unsigned int v10[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = *(unsigned int *)&HouseClass_Player.__pad_5568[22996]; /*0x4adcd4*/
  v3 = 0; /*0x4adcdb*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22996] > 0 ) /*0x4adcdf*/
  {
    while ( 1 ) /*0x4adcf0*/
    {
      v4 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22984] + 4 * v3); /*0x4adcf0*/
      if ( !v4 /*0x4add1b*/
        || *(unsigned char *)(v4 + 129)
        || (*(int (**)(unsigned int))(*(unsigned int *)v4 + 44))(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22984]
                                                                          + 4 * v3)) == 6
        && a1 )
      {
        goto LABEL_20; /*0x4add1b*/
      }
      if ( (uint8_t)House::IsHumanPlayer(*(void **)(v4 + 540)) ) /*0x4add27*/
        break; /*0x4add27*/
      if ( (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) == 6 /*0x4addce*/
        && *(unsigned char *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 6119)
        && (uint8_t)HouseClass::IsAlliedWith(*(void **)(v4 + 540), (IUnknown *)HouseClass_Player.field_0) )
      {
        (*(void (**)(int, unsigned int, IUnknown *, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v4 + 1160))( /*0x4adde4*/
          v4,
          0,
          aP1,
          0,
          0,
          0);
        v9[0] = *(unsigned int *)(v4 + 156); /*0x4addf4*/
        v6 = *(unsigned int *)(v4 + 608); /*0x4addf8*/
        v9[1] = *(unsigned int *)(v4 + 160); /*0x4ade04*/
        v9[2] = *(unsigned int *)(v4 + 164); /*0x4ade18*/
        MapClass::RevealArea2(&stru_87C374.__pad_14B0[8132], (IUnknown *)v9, 0, (MouseClass *)(v6 + 3), 0); /*0x4ade1c*/
      }
      else if ( (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) == 6 /*0x4ade4c*/
             && *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v4 + 132))(v4) + 1518)
             && !(uint8_t)House::IsHumanPlayer(*(void **)(v4 + 540)) )
      {
        (*(void (**)(int, unsigned int, unsigned int, int, int, unsigned int))(*(unsigned int *)v4 + 1160))( /*0x4ade68*/
          v4,
          0,
          0,
          1,
          HouseClass_Player.field_0,
          0);
        v10[0] = *(unsigned int *)(v4 + 156); /*0x4ade78*/
        v7 = (MouseClass *)(*(unsigned int *)(v4 + 608) + 3); /*0x4ade85*/
        v10[1] = *(unsigned int *)(v4 + 160); /*0x4ade88*/
        v10[2] = *(unsigned int *)(v4 + 164); /*0x4ade9c*/
        MapClass::RevealArea2(&stru_87C374.__pad_14B0[8132], (IUnknown *)v10, 0, v7, 0); /*0x4adea0*/
      }
      else if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v4 + 132))(v4) + 3281) ) /*0x4adeb1*/
      {
        goto LABEL_19; /*0x4adeb9*/
      }
LABEL_20:
      if ( ++v3 >= v2 ) /*0x4adec8*/
        return; /*0x4adec8*/
    }
    if ( !*(unsigned char *)(v4 + 1051) ) /*0x4add30*/
      goto LABEL_20; /*0x4add30*/
    (*(void (**)(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v4 + 1160))(v4, 0, 0, 0, 0, 0); /*0x4add4c*/
    v8[0] = *(unsigned int *)(v4 + 156); /*0x4add5c*/
    v5 = (MouseClass *)(*(unsigned int *)(v4 + 608) + 3); /*0x4add69*/
    v8[1] = *(unsigned int *)(v4 + 160); /*0x4add6c*/
    v8[2] = *(unsigned int *)(v4 + 164); /*0x4add78*/
    MapClass::RevealArea2(&stru_87C374.__pad_14B0[8132], (IUnknown *)v8, 0, v5, 0); /*0x4add84*/
    if ( !*(unsigned char *)((*(int (**)(int))(*(unsigned int *)v4 + 132))(v4) + 3281) ) /*0x4add93*/
      goto LABEL_20; /*0x4add9b*/
LABEL_19:
    (*(void (**)(int))(*(unsigned int *)v4 + 1044))(v4); /*0x4adebb*/
    goto LABEL_20; /*0x4adebf*/
  }

}
}
// 0x5090F0
namespace gamemd {
int Radar::IsRadarTargetEligible()
{

  unsigned int v1; // eax
  int v2; // eax

  v1 = *((char *)this + 131); /*0x5090f0*/
  if ( v1 >= 0xC ) /*0x5090f8*/
    return 0; /*0x50912a*/
  v2 = *(this + v1 + 132); /*0x5090ff*/
  return *(unsigned int *)(v2 + 56) < g_abs_8871E0->InfantryVirus && *(unsigned int *)(v2 + 36) == -1; /*0x509126*/

}
}
// 0x5824A0
namespace gamemd {
void* Radar::ProcessSubzone(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5)
{

  IUnknown *v6; // ebp
  IUnknown *v7; // ebx
  IUnknown *v8; // esi
  int v9; // edi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int64_t v14; // rax
  int v15; // edx
  int64_t v16; // rax
  int v17; // ebp
  int v18; // ecx
  int v19; // edi
  unsigned int *v20; // edx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  int *v28; // ecx
  int v29; // edx
  int v30; // ecx
  int64_t v31; // rax
  int64_t v32; // rax
  int v33; // ebp
  int v34; // edi
  int v35; // ecx
  unsigned int *v36; // edx
  int v37; // eax
  int v38; // edx
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  int *v44; // ecx
  int v45; // edx
  int v46; // ecx
  IUnknown *v47; // ebp
  IUnknown *v48; // eax
  int v49; // ebx
  int v50; // ecx
  int16_t v51; // di
  int v52; // eax
  int64_t v53; // rax
  int64_t v54; // rax
  int v55; // edi
  int v56; // esi
  int v57; // edx
  unsigned int *v58; // ecx
  int v59; // eax
  int v60; // ecx
  int v61; // eax
  int v62; // eax
  int v63; // ecx
  int v64; // edx
  int v65; // eax
  int *v66; // ecx
  int v67; // edx
  IUnknown *v68; // esi
  int v69; // ecx
  int v70; // edx
  int v71; // eax
  IUnknown *v72; // ebp
  int64_t v73; // rax
  int64_t v74; // rax
  int v75; // ebx
  int v76; // esi
  int v77; // edx
  unsigned int *v78; // ecx
  int v79; // eax
  int v80; // ecx
  int v81; // eax
  int v82; // eax
  int v83; // ecx
  int v84; // edx
  int v85; // eax
  int *v86; // ecx
  int v87; // edx
  int v89; // [esp+18h] [ebp-5Ch]
  int v90; // [esp+18h] [ebp-5Ch]
  int v91; // [esp+18h] [ebp-5Ch]
  int v92; // [esp+18h] [ebp-5Ch]
  int v94; // [esp+20h] [ebp-54h]
  int v95; // [esp+24h] [ebp-50h] BYREF
  int v96; // [esp+28h] [ebp-4Ch]
  int v97; // [esp+2Ch] [ebp-48h]
  int v98; // [esp+30h] [ebp-44h]
  int v99; // [esp+34h] [ebp-40h]
  int v100; // [esp+38h] [ebp-3Ch]
  int v101; // [esp+3Ch] [ebp-38h] BYREF
  unsigned int *v102; // [esp+40h] [ebp-34h]
  int v103; // [esp+44h] [ebp-30h]
  int v104; // [esp+48h] [ebp-2Ch] BYREF
  int v105; // [esp+4Ch] [ebp-28h] BYREF
  int v106; // [esp+50h] [ebp-24h]
  int v107; // [esp+54h] [ebp-20h] BYREF
  int v108; // [esp+58h] [ebp-1Ch] BYREF
  int v109; // [esp+5Ch] [ebp-18h]
  int v110; // [esp+60h] [ebp-14h]
  int v111; // [esp+64h] [ebp-10h]
  int v112; // [esp+6Ch] [ebp-8h]
  int v113; // [esp+70h] [ebp-4h]
  IUnknown *aP1a; // [esp+78h] [ebp+4h]
  IUnknown *aP5a; // [esp+88h] [ebp+14h]

  v6 = aP1; /*0x5824a5*/
  v98 = SHIWORD(aP1->field_4); /*0x5824b3*/
  v7 = aP1; /*0x5824be*/
  v8 = aP1; /*0x5824c0*/
  v9 = SLOWORD(aP5->field_0); /*0x5824c6*/
  aP5a = (IUnknown *)SHIWORD(aP5->field_0); /*0x5824cd*/
  v112 = 0; /*0x5824d4*/
  IDA_LOBYTE(v113) = 0; /*0x5824dc*/
  v10 = aP4->field_0; /*0x5824e4*/
  v106 = aP4->field_4; /*0x5824e6*/
  v11 = aP4->field_8; /*0x5824ea*/
  v12 = aP4->field_C; /*0x5824ed*/
  v97 = -1; /*0x5824f0*/
  v96 = v9; /*0x5824fc*/
  v100 = v11 + v10 - 1; /*0x582500*/
  v94 = v9; /*0x582508*/
  v99 = v10; /*0x58250c*/
  v111 = v12 + v106 - 1; /*0x582518*/
  v102 = (unsigned int *)*(this + (unsigned int)aP2 + 32); /*0x582527*/
  v13 = IDA_LOBYTE(aP1->field_8); /*0x58252d*/
  while ( v9 >= v10 ) /*0x582538*/
  {
    v14 = IDA_LOBYTE(v7->field_8) - v13; /*0x582541*/
    if ( (int)((IDA_HIDWORD(v14) ^ v14) - IDA_HIDWORD(v14)) >= 2 ) /*0x582549*/
      break; /*0x582549*/
    *((unsigned short *)&v7->field_0 + (unsigned int)aP2) = (unsigned short)aP3; /*0x582556*/
    v13 = IDA_LOBYTE(v7->field_8); /*0x58255a*/
    v15 = *(int16_t *)&v7[-1].field_1602A[2]; /*0x58255d*/
    v7 = (IUnknown *)((char *)v7 - 10); /*0x582565*/
    --v9; /*0x582568*/
    if ( v15 != v98 ) /*0x58256b*/
      break; /*0x58256b*/
    v10 = v99; /*0x582532*/
  }
  v96 = v9; /*0x582571*/
  v89 = *((int16_t *)&v7->field_0 + (unsigned int)aP2); /*0x58257b*/
  if ( v89 > 0 ) /*0x58257f*/
  {
    v16 = IDA_LOBYTE(v7->field_8) - v13; /*0x58258c*/
    if ( (int)((IDA_HIDWORD(v16) ^ v16) - IDA_HIDWORD(v16)) < 2 && v89 != -1 ) /*0x58259f*/
    {
      IDA_HIWORD(v101) = (unsigned short)aP5a; /*0x5825b1*/
      IDA_LOWORD(v101) = v9; /*0x5825bd*/
      if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v101, (TechnoClass *)1) ) /*0x5825c2*/
      {
        IDA_HIWORD(v101) = (unsigned short)aP5a; /*0x5825de*/
        IDA_LOWORD(v101) = v9 + 1; /*0x5825ea*/
        if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v101, (TechnoClass *)1) ) /*0x5825ef*/
        {
          v17 = (uint16_t)aP3 | (v89 << 16); /*0x582612*/
          IDA_LOBYTE(v113) = 0; /*0x58261a*/
          v18 = *(unsigned int *)(*v102 + 24 * ((uint8_t)aP3 & 0xF | (16 * (v89 & 0xF))) + 16); /*0x58262a*/
          v19 = *v102 + 24 * ((uint8_t)aP3 & 0xF | (16 * (v89 & 0xF))); /*0x58262e*/
          v20 = *(unsigned int **)(v19 + 4); /*0x582631*/
          v21 = v18 - 1; /*0x582635*/
          if ( v18 - 1 < 0 ) /*0x58263a*/
          {
LABEL_14:
            v22 = *(unsigned int *)(v19 + 8); /*0x582646*/
            if ( v18 < v22 /*0x58266a*/
              || (*(unsigned char *)(v19 + 13) || !v22)
              && (v23 = *(unsigned int *)(v19 + 20), v23 > 0)
              && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v19 + 8))(v19, v22 + v23, 0) )
            {
              v24 = *(unsigned int *)(v19 + 16); /*0x582671*/
              v25 = v24 + 1; /*0x582674*/
              v26 = 3 * v24; /*0x582677*/
              v27 = *(unsigned int *)(v19 + 4); /*0x58267a*/
              *(unsigned int *)(v19 + 16) = v25; /*0x58267d*/
              v28 = (int *)(v27 + 4 * v26); /*0x582680*/
              v29 = v113; /*0x582683*/
              *v28 = v17; /*0x582687*/
              v28[1] = v17; /*0x582689*/
              v28[2] = v29; /*0x58268c*/
            }
          }
          else
          {
            while ( v17 != *v20 ) /*0x58263e*/
            {
              v20 += 3; /*0x582640*/
              if ( --v21 < 0 ) /*0x582644*/
                goto LABEL_14; /*0x582644*/
            }
          }
          v6 = aP1; /*0x582693*/
          v9 = v96; /*0x582697*/
          v97 = v89; /*0x58269b*/
        }
      }
    }
  }
  v30 = IDA_LOBYTE(v6->field_8); /*0x5826a9*/
  if ( SHIWORD(v6->field_4) == v98 ) /*0x5826ae*/
  {
    do /*0x5826f5*/
    {
      if ( v94 > v100 ) /*0x5826ba*/
        break; /*0x5826ba*/
      v31 = IDA_LOBYTE(v8->field_8) - v30; /*0x5826c3*/
      if ( (int)((IDA_HIDWORD(v31) ^ v31) - IDA_HIDWORD(v31)) >= 2 ) /*0x5826cb*/
        break; /*0x5826cb*/
      *((unsigned short *)&v8->field_0 + (unsigned int)aP2) = (unsigned short)aP3; /*0x5826da*/
      v30 = IDA_LOBYTE(v8->field_8); /*0x5826e0*/
      v8 = (IUnknown *)((char *)v8 + 10); /*0x5826e7*/
      ++v94; /*0x5826eb*/
    }
    while ( SHIWORD(v8->field_4) == v98 ); /*0x5826f5*/
  }
  v90 = *((int16_t *)&v8->field_0 + (unsigned int)aP2); /*0x582701*/
  if ( v90 > 0 ) /*0x582705*/
  {
    v32 = IDA_LOBYTE(v8->field_8) - v30; /*0x582712*/
    if ( (int)((IDA_HIDWORD(v32) ^ v32) - IDA_HIDWORD(v32)) < 2 && v90 != v97 ) /*0x58272a*/
    {
      IDA_LOWORD(v101) = v94; /*0x582741*/
      IDA_HIWORD(v101) = (unsigned short)aP5a; /*0x58274d*/
      if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v101, (TechnoClass *)1) ) /*0x582752*/
      {
        IDA_LOWORD(v101) = v94 - 1; /*0x582770*/
        IDA_HIWORD(v101) = (unsigned short)aP5a; /*0x58277c*/
        if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v101, (TechnoClass *)1) ) /*0x582781*/
        {
          v33 = (uint16_t)aP3 | (v90 << 16); /*0x5827a8*/
          IDA_LOBYTE(v113) = 0; /*0x5827b2*/
          v34 = *v102 + 24 * ((uint8_t)aP3 & 0xF | (16 * (v90 & 0xF))); /*0x5827bc*/
          v35 = *(unsigned int *)(v34 + 16); /*0x5827bf*/
          v36 = *(unsigned int **)(v34 + 4); /*0x5827c3*/
          v37 = v35 - 1; /*0x5827c6*/
          if ( v35 - 1 < 0 ) /*0x5827cb*/
          {
LABEL_33:
            v38 = *(unsigned int *)(v34 + 8); /*0x5827d7*/
            if ( v35 < v38 /*0x5827fb*/
              || (*(unsigned char *)(v34 + 13) || !v38)
              && (v39 = *(unsigned int *)(v34 + 20), v39 > 0)
              && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v34 + 8))(v34, v39 + v38, 0) )
            {
              v40 = *(unsigned int *)(v34 + 16); /*0x582802*/
              v41 = v40 + 1; /*0x582805*/
              v42 = 3 * v40; /*0x582808*/
              v43 = *(unsigned int *)(v34 + 4); /*0x58280b*/
              *(unsigned int *)(v34 + 16) = v41; /*0x58280e*/
              v44 = (int *)(v43 + 4 * v42); /*0x582811*/
              v45 = v113; /*0x582814*/
              *v44 = v33; /*0x582818*/
              v44[1] = v33; /*0x58281a*/
              v44[2] = v45; /*0x58281d*/
            }
          }
          else
          {
            while ( v33 != *v36 ) /*0x5827cf*/
            {
              v36 += 3; /*0x5827d1*/
              if ( --v37 < 0 ) /*0x5827d5*/
                goto LABEL_33; /*0x5827d5*/
            }
          }
          v6 = aP1; /*0x582824*/
          v9 = v96; /*0x582828*/
          v97 = v90; /*0x58282c*/
        }
      }
    }
  }
  v46 = *((unsigned int *)this + 62); /*0x58284b*/
  v110 = ((char *)v8 - (char *)v6) / 10 - 1; /*0x582851*/
  v109 = v46 + *((unsigned int *)this + 61) + 1; /*0x58285f*/
  v101 = 10 * v109; /*0x582868*/
  v47 = (IUnknown *)((char *)v7 - 10 * v109); /*0x58286c*/
  v48 = (IUnknown *)((char *)v7 + 10 * v109); /*0x58286e*/
  v49 = v9; /*0x582870*/
  aP1a = v48; /*0x582872*/
  v95 = 0; /*0x582878*/
  if ( v9 > v94 ) /*0x582886*/
    return v110; /*0x582886*/
  do /*0x582aca*/
  {
    v50 = *((int16_t *)&v47->field_0 + (unsigned int)aP2); /*0x582892*/
    v91 = v50; /*0x582897*/
    if ( v49 == v9 ) /*0x58289b*/
    {
      v51 = v49; /*0x5828a5*/
      IDA_HIWORD(v103) = (unsigned short)aP5a; /*0x5828a7*/
      IDA_LOWORD(v103) = v49 + 1; /*0x5828b3*/
      v95 = v103; /*0x5828c0*/
      v52 = (int)&v47->field_8 + 10 * v109 + 2; /*0x5828c4*/
    }
    else
    {
      v51 = v49; /*0x5828ce*/
      if ( v49 >= v94 ) /*0x5828d2*/
      {
        IDA_LOWORD(v105) = v49 - 1; /*0x582902*/
        IDA_HIWORD(v105) = (unsigned short)aP5a; /*0x582907*/
        v95 = v105; /*0x582914*/
        v52 = (int)v47 + v101 - 10; /*0x582918*/
      }
      else
      {
        IDA_LOWORD(v104) = v49; /*0x5828dc*/
        IDA_HIWORD(v104) = (unsigned short)aP5a; /*0x5828e1*/
        v95 = v104; /*0x5828ee*/
        v52 = (int)v47 + v101; /*0x5828f2*/
      }
    }
    if ( v50 || (int)aP5a <= v106 || v49 < v99 || v49 > v100 ) /*0x582939*/
    {
      if ( v50 != (uint16_t)aP3 && v50 != v97 ) /*0x5829ad*/
      {
        if ( v50 ) /*0x5829b5*/
        {
          v54 = *(uint8_t *)(v52 + 8) - IDA_LOBYTE(v47->field_8); /*0x5829c9*/
          if ( (int)((IDA_HIDWORD(v54) ^ v54) - IDA_HIDWORD(v54)) < 2 /*0x5829e2*/
            && LayerClass::IsWithinUsableArea(this, (IUnknown *)&v95, (TechnoClass *)1) )
          {
            IDA_HIWORD(v108) = (unsigned short)aP5a - 1; /*0x5829fd*/
            IDA_LOWORD(v108) = v51; /*0x582a07*/
            if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v108, (TechnoClass *)1) ) /*0x582a0c*/
            {
              v55 = (uint16_t)aP3 | (v91 << 16); /*0x582a26*/
              if ( v49 < v99 || (IDA_LOBYTE(v113) = 0, v49 > v100) ) /*0x582a37*/
                IDA_LOBYTE(v113) = 1; /*0x582a39*/
              v56 = *v102 + 24 * ((uint8_t)aP3 & 0xF | (16 * (v91 & 0xF))); /*0x582a52*/
              v57 = *(unsigned int *)(v56 + 16); /*0x582a55*/
              v58 = *(unsigned int **)(v56 + 4); /*0x582a59*/
              v59 = v57 - 1; /*0x582a5c*/
              if ( v57 - 1 < 0 ) /*0x582a61*/
              {
LABEL_65:
                v60 = *(unsigned int *)(v56 + 8); /*0x582a6d*/
                if ( v57 < v60 /*0x582a8f*/
                  || (*(unsigned char *)(v56 + 13) || !v60)
                  && (v61 = *(unsigned int *)(v56 + 20), v61 > 0)
                  && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v56 + 8))(v56, v61 + v60, 0) )
                {
                  v62 = *(unsigned int *)(v56 + 16); /*0x582a96*/
                  v63 = v62 + 1; /*0x582a99*/
                  v64 = 3 * v62; /*0x582a9c*/
                  v65 = *(unsigned int *)(v56 + 4); /*0x582a9f*/
                  *(unsigned int *)(v56 + 16) = v63; /*0x582aa2*/
                  v66 = (int *)(v65 + 4 * v64); /*0x582aa5*/
                  v67 = v113; /*0x582aa8*/
                  *v66 = v55; /*0x582aac*/
                  v66[1] = v55; /*0x582aae*/
                  v66[2] = v67; /*0x582ab1*/
                }
              }
              else
              {
                while ( v55 != *v58 ) /*0x582a65*/
                {
                  v58 += 3; /*0x582a67*/
                  if ( --v59 < 0 ) /*0x582a6b*/
                    goto LABEL_65; /*0x582a6b*/
                }
              }
              v97 = v91; /*0x582ab8*/
            }
          }
        }
      }
    }
    else if ( SHIWORD(v47->field_4) == v98 ) /*0x582943*/
    {
      v53 = *(uint8_t *)(v52 + 8) - IDA_LOBYTE(v47->field_8); /*0x582957*/
      if ( (int)((IDA_HIDWORD(v53) ^ v53) - IDA_HIDWORD(v53)) < 2 ) /*0x58295f*/
      {
        IDA_LOWORD(v107) = v51; /*0x58297f*/
        IDA_HIWORD(v107) = (unsigned short)aP5a - 1; /*0x582984*/
        Radar::ProcessSubzone(this, v47, aP2, aP3, aP4, (IUnknown *)&v107); /*0x582989*/
        goto LABEL_73; /*0x58298e*/
      }
    }
    v47 = (IUnknown *)((char *)v47 + 10); /*0x582abc*/
    ++v49; /*0x582abf*/
LABEL_73:
    v9 = v96; /*0x582ac0*/
  }
  while ( v49 <= v94 ); /*0x582aca*/
  if ( v96 <= v94 ) /*0x582ad2*/
  {
    v68 = aP1a; /*0x582ad8*/
    do /*0x582ae6*/
    {
      v69 = *((int16_t *)&v68->field_0 + (unsigned int)aP2); /*0x582ae6*/
      v92 = v69; /*0x582aea*/
      if ( v9 == v96 ) /*0x582aee*/
      {
        IDA_LOWORD(v108) = v9 + 1; /*0x582af9*/
        IDA_HIWORD(v108) = (unsigned short)aP5a; /*0x582b08*/
        v70 = v108; /*0x582b0d*/
        v71 = (int)&v68->field_8 - v101 + 2; /*0x582b11*/
      }
      else
      {
        if ( v9 < v94 ) /*0x582b1a*/
        {
          v72 = aP5a; /*0x582b20*/
          IDA_LOWORD(v107) = v9; /*0x582b29*/
          v71 = (int)v68 - v101; /*0x582b2e*/
          IDA_HIWORD(v107) = (unsigned short)aP5a; /*0x582b30*/
          v95 = v107; /*0x582b39*/
          goto LABEL_82; /*0x582b3d*/
        }
        v71 = (int)v68 - 10 * v109 - 10; /*0x582b4d*/
        IDA_LOWORD(v106) = v9 - 1; /*0x582b52*/
        IDA_HIWORD(v106) = (unsigned short)aP5a; /*0x582b5f*/
        v70 = v106; /*0x582b64*/
      }
      v72 = aP5a; /*0x582b68*/
      v95 = v70; /*0x582b6f*/
LABEL_82:
      if ( v69 || (int)v72 >= v111 || v9 < v99 || v9 > v100 ) /*0x582b87*/
      {
        if ( v69 != (uint16_t)aP3 && v69 != v97 ) /*0x582bfa*/
        {
          if ( v69 ) /*0x582c02*/
          {
            v74 = IDA_LOBYTE(aP1a->field_8) - *(uint8_t *)(v71 + 8); /*0x582c18*/
            if ( (int)((IDA_HIDWORD(v74) ^ v74) - IDA_HIDWORD(v74)) < 2 /*0x582c33*/
              && LayerClass::IsWithinUsableArea(this, (IUnknown *)&v95, (TechnoClass *)1) )
            {
              IDA_LOWORD(v104) = v9; /*0x582c4a*/
              IDA_HIWORD(v104) = (unsigned short)v72 + 1; /*0x582c4f*/
              if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v104, (TechnoClass *)1) ) /*0x582c54*/
              {
                v75 = (uint16_t)aP3 | (v92 << 16); /*0x582c6e*/
                if ( v9 < v99 || (IDA_LOBYTE(v113) = 0, v9 > v100) ) /*0x582c7f*/
                  IDA_LOBYTE(v113) = 1; /*0x582c81*/
                v76 = *v102 + 24 * ((uint8_t)aP3 & 0xF | (16 * (v92 & 0xF))); /*0x582c9c*/
                v77 = *(unsigned int *)(v76 + 16); /*0x582c9f*/
                v78 = *(unsigned int **)(v76 + 4); /*0x582ca3*/
                v79 = v77 - 1; /*0x582ca6*/
                if ( v77 - 1 < 0 ) /*0x582cab*/
                {
LABEL_102:
                  v80 = *(unsigned int *)(v76 + 8); /*0x582cb7*/
                  if ( v77 < v80 /*0x582cd9*/
                    || (*(unsigned char *)(v76 + 13) || !v80)
                    && (v81 = *(unsigned int *)(v76 + 20), v81 > 0)
                    && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v76 + 8))(v76, v81 + v80, 0) )
                  {
                    v82 = *(unsigned int *)(v76 + 16); /*0x582ce0*/
                    v83 = v82 + 1; /*0x582ce3*/
                    v84 = 3 * v82; /*0x582ce6*/
                    v85 = *(unsigned int *)(v76 + 4); /*0x582ce9*/
                    *(unsigned int *)(v76 + 16) = v83; /*0x582cec*/
                    v86 = (int *)(v85 + 4 * v84); /*0x582cef*/
                    v87 = v113; /*0x582cf2*/
                    *v86 = v75; /*0x582cf6*/
                    v86[1] = v75; /*0x582cf8*/
                    v86[2] = v87; /*0x582cfb*/
                  }
                }
                else
                {
                  while ( v75 != *v78 ) /*0x582caf*/
                  {
                    v78 += 3; /*0x582cb1*/
                    if ( --v79 < 0 ) /*0x582cb5*/
                      goto LABEL_102; /*0x582cb5*/
                  }
                }
                v97 = v92; /*0x582cfe*/
              }
            }
          }
        }
        ++v9; /*0x582d09*/
        aP1a = (IUnknown *)((char *)aP1a + 10); /*0x582d0a*/
        v68 = aP1a; /*0x582d0e*/
      }
      else if ( SHIWORD(v68->field_4) == v98 /*0x582ba7*/
             && (v73 = IDA_LOBYTE(v68->field_8) - *(uint8_t *)(v71 + 8),
                 (int)((IDA_HIDWORD(v73) ^ v73) - IDA_HIDWORD(v73)) < 2) )
      {
        IDA_LOWORD(v105) = v9; /*0x582bc3*/
        IDA_HIWORD(v105) = (unsigned short)v72 + 1; /*0x582bc8*/
        Radar::ProcessSubzone(this, v68, aP2, aP3, aP4, (IUnknown *)&v105); /*0x582bcd*/
      }
      else
      {
        v68 = (IUnknown *)((char *)v68 + 10); /*0x582bd7*/
        ++v9; /*0x582bda*/
        aP1a = v68; /*0x582bdb*/
      }
    }
    while ( v9 <= v94 ); /*0x582ae6*/
  }
  return v110; /*0x582d1e*/

}
}
// 0x584550
namespace gamemd {
AbstractClass * * Radar::Update(IUnknown * aP1)
{

  IUnknown *v2; // ebx
  int v3; // ebp
  int v4; // ecx
  int v5; // edi
  int v6; // edi
  unsigned int *v7; // esi
  int v8; // eax
  int v9; // edi
  CCINIClass *v10; // edx
  IUnknown *v11; // eax
  IUnknown *v12; // esi
  int v13; // edi
  int16_t v14; // bp
  IUnknown *v15; // edx
  int v16; // eax
  unsigned short *v17; // ecx
  IUnknown *v18; // ecx
  int v19; // ebp
  unsigned int *v20; // edi
  int v21; // eax
  int v22; // esi
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  unsigned int *v26; // edi
  int v27; // edx
  CCINIClass *v28; // ebp
  IUnknown *v29; // esi
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  char *v35; // edi
  int v36; // eax
  int v37; // ecx
  int v38; // ecx
  int v39; // edi
  int v40; // ecx
  int16_t v41; // ax
  bool v42; // zf
  int v43; // esi
  int v44; // ecx
  IUnknown *v45; // ecx
  int v46; // esi
  int v47; // esi
  int v48; // esi
  int v49; // esi
  int v50; // edx
  char v51; // bl
  int v52; // edi
  int v53; // ebp
  int v54; // ecx
  int v55; // eax
  int v56; // esi
  int v57; // ecx
  int v58; // eax
  int v59; // edx
  int v60; // ecx
  int v61; // ecx
  int v62; // eax
  int v63; // esi
  int v64; // ecx
  int v65; // eax
  int v66; // edx
  int v67; // ecx
  bool v68; // sf
  int v69; // edi
  IUnknown *v70; // ebp
  IUnknown *v71; // edi
  IUnknown *v72; // ecx
  int *v73; // eax
  IUnknown *v74; // esi
  int v75; // eax
  int v76; // esi
  char *v77; // edi
  int v78; // ecx
  char *v79; // edx
  int v80; // esi
  int16_t *v81; // eax
  int v82; // edi
  int16_t v83; // bp
  int v84; // ecx
  IUnknown *aP3; // [esp+20h] [ebp-94h]
  IUnknown *aP3a; // [esp+20h] [ebp-94h]
  IUnknown *aP3b; // [esp+20h] [ebp-94h]
  IUnknown *aP3c; // [esp+20h] [ebp-94h]
  IUnknown *v89; // [esp+24h] [ebp-90h]
  IUnknown *v90; // [esp+24h] [ebp-90h]
  IUnknown *v91; // [esp+24h] [ebp-90h]
  IUnknown *v92; // [esp+24h] [ebp-90h]
  char *v93; // [esp+28h] [ebp-8Ch]
  int v94; // [esp+28h] [ebp-8Ch]
  int v95; // [esp+28h] [ebp-8Ch]
  unsigned char *v96; // [esp+28h] [ebp-8Ch]
  int aP2; // [esp+2Ch] [ebp-88h]
  unsigned int *v98; // [esp+30h] [ebp-84h]
  int v99; // [esp+30h] [ebp-84h]
  int v100; // [esp+30h] [ebp-84h]
  int v101; // [esp+30h] [ebp-84h]
  int v102; // [esp+34h] [ebp-80h]
  char *v103; // [esp+34h] [ebp-80h]
  IUnknown *v104; // [esp+38h] [ebp-7Ch] BYREF
  CCINIClass *v105; // [esp+3Ch] [ebp-78h]
  int v106; // [esp+40h] [ebp-74h]
  int v107; // [esp+44h] [ebp-70h]
  int16_t v108; // [esp+48h] [ebp-6Ch] BYREF
  int16_t v109; // [esp+4Ah] [ebp-6Ah]
  void **v110; // [esp+4Ch] [ebp-68h] BYREF
  IUnknown *v111; // [esp+50h] [ebp-64h]
  IUnknown *v112; // [esp+54h] [ebp-60h]
  char v113; // [esp+59h] [ebp-5Bh]
  IUnknown *v114; // [esp+5Ch] [ebp-58h]
  int v115; // [esp+60h] [ebp-54h]
  IUnknown *v116; // [esp+64h] [ebp-50h]
  unsigned short v117[2]; // [esp+68h] [ebp-4Ch] BYREF
  unsigned short v118[2]; // [esp+6Ch] [ebp-48h] BYREF
  CCINIClass *v119; // [esp+70h] [ebp-44h] BYREF
  unsigned short v120[2]; // [esp+74h] [ebp-40h] BYREF
  unsigned short v121[2]; // [esp+78h] [ebp-3Ch] BYREF
  unsigned int *v122; // [esp+7Ch] [ebp-38h]
  void **v123; // [esp+80h] [ebp-34h] BYREF
  void *Block; // [esp+84h] [ebp-30h]
  int v125; // [esp+88h] [ebp-2Ch]
  int v126; // [esp+8Ch] [ebp-28h]
  int v127; // [esp+90h] [ebp-24h]
  int v128; // [esp+94h] [ebp-20h]
  int v129; // [esp+98h] [ebp-1Ch]
  int v130; // [esp+9Ch] [ebp-18h]
  int v131; // [esp+A0h] [ebp-14h]
  int v132; // [esp+A8h] [ebp-Ch]
  int v133; // [esp+B0h] [ebp-4h]

  v2 = this; /*0x584561*/
  v116 = this; /*0x584566*/
  if ( LayerClass::IsWithinUsableArea(this, aP1, (TechnoClass *)1) )
  {
    for ( aP2 = 2; ; --aP2 ) /*0x584577*/
    {
      v3 = aP2; /*0x58457f*/
      v4 = SLOWORD(aP1->field_0); /*0x584594*/
      v106 = 1 << (aP2 + 1); /*0x584599*/
      v5 = SHIWORD(aP1->field_0); /*0x5845a0*/
      v107 = v106; /*0x5845a6*/
      v104 = (IUnknown *)(v4 - v4 % v106); /*0x5845af*/
      v105 = (CCINIClass *)(v5 - v5 % v106); /*0x5845b9*/
      v6 = 0; /*0x5845bd*/
      WordVector::Constructor(&v110, 0, 0); /*0x5845c1*/
      v7 = *(unsigned int **)&v2->__pad_68[4 * aP2 + 24]; /*0x5845c6*/
      v110 = &vt_DynamicVectorClass_unsigned_short_7E3844; /*0x5845cd*/
      v115 = 10; /*0x5845d5*/
      v114 = 0; /*0x5845dd*/
      v8 = v7[2]; /*0x5845e1*/
      v122 = v7; /*0x5845e4*/
      if ( v8 > 0 ) /*0x5845ea*/
      {
        v102 = 0; /*0x5845ec*/
        do /*0x58460e*/
        {
          (*(void (**)(int))(*(unsigned int *)(v102 + *v7) + 12))(v102 + *v7); /*0x5845fa*/
          ++v6; /*0x584604*/
          v102 += 24; /*0x58460a*/
        }
        while ( v6 < v7[2] ); /*0x58460e*/
      }
      v9 = v106; /*0x584618*/
      v103 = &v2->__pad_8C[24 * aP2]; /*0x584623*/
      v10 = v105; /*0x584627*/
      v89 = (IUnknown *)v105; /*0x58462d*/
      v11 = v104; /*0x584633*/
      if ( (int)v105 < (int)&v105->__pad_0[v107] ) /*0x584637*/
      {
        while ( 1 ) /*0x584640*/
        {
          v12 = v11; /*0x584640*/
          if ( (int)v11 >= (int)((char *)v11 + v9) ) /*0x584644*/
            goto LABEL_23; /*0x584644*/
          do /*0x584723*/
          {
            IDA_LOWORD(v119) = (unsigned short)v12; /*0x584656*/
            IDA_HIWORD(v119) = (unsigned short)v89; /*0x58465b*/
            v13 = *(unsigned int *)&v2->__pad_68[8] + 10 * CellToTileIndexMap(&v2->field_0, (IUnknown *)&v119); /*0x58466f*/
            v14 = *(unsigned short *)(v13 + 2 * aP2); /*0x584672*/
            if ( v14 ) /*0x584679*/
            {
              v15 = v114; /*0x58467b*/
              v16 = (int)&v114[-1].__tail_1602E[1]; /*0x58467f*/
              if ( (int)&v114[-1].__tail_1602E[1] >= 0 ) /*0x584684*/
              {
                v17 = (unsigned short *)((char *)v111 + 2 * v16); /*0x58468a*/
                do /*0x584698*/
                {
                  if ( *v17 == v14 ) /*0x584690*/
                    break; /*0x584690*/
                  --v16; /*0x584692*/
                  --v17; /*0x584693*/
                }
                while ( v16 >= 0 ); /*0x584698*/
              }
              if ( v16 == -1 ) /*0x58469d*/
              {
                if ( (int)v114 < (int)v112 ) /*0x5846a5*/
                  goto LABEL_20; /*0x5846a5*/
                if ( (v113 || !v112) /*0x5846c8*/
                  && v115 > 0
                  && ((uint8_t (*)(void ***, char *, unsigned int))v110[2])(&v110, (char *)v112 + v115, 0) )
                {
                  v15 = v114; /*0x5846cf*/
LABEL_20:
                  v114 = (IUnknown *)((char *)&v15->field_0 + 1); /*0x5846d3*/
                  *((unsigned short *)&v111->field_0 + (unsigned int)v15) = v14; /*0x5846de*/
                }
              }
            }
            v121[0] = (unsigned short)v12; /*0x5846e2*/
            *(unsigned short *)(v13 + 2 * aP2) = 0; /*0x5846f7*/
            v121[1] = (unsigned short)v89; /*0x5846fd*/
            v12 = (IUnknown *)((char *)v12 + 1); /*0x58470a*/
            *(unsigned short *)(v13 + 6) = *(unsigned short *)(*(unsigned int *)v2->__pad_68 /*0x584712*/
                                           + 4 * CellToTileIndexMap(&v2->field_0, (IUnknown *)v121)
                                           + 2);
            v9 = v106; /*0x584716*/
            v11 = v104; /*0x58471a*/
          }
          while ( (int)v12 < (int)((char *)v104 + v106) ); /*0x584723*/
          v10 = v105; /*0x584729*/
LABEL_23:
          v89 = (IUnknown *)((char *)v89 + 1); /*0x58472d*/
          if ( (int)v89 >= (int)&v10->__pad_0[v107] ) /*0x58473e*/
          {
            v3 = aP2; /*0x584744*/
            break; /*0x584744*/
          }
        }
      }
      v18 = (IUnknown *)((char *)v114 - 1); /*0x584748*/
      v90 = (IUnknown *)((char *)v114 - 1); /*0x58474f*/
      if ( (int)&v114[-1].__tail_1602E[1] >= 0 ) /*0x584753*/
      {
        v93 = &v2->__pad_8C[24 * v3 + 4]; /*0x584760*/
        while ( 1 ) /*0x584776*/
        {
          v19 = *((uint16_t *)&v111->field_0 + (unsigned int)v18); /*0x584776*/
          v20 = (unsigned int *)(*(unsigned int *)v93 + 36 * v19); /*0x584782*/
          v98 = v20; /*0x584785*/
          v21 = v20[4] - 1; /*0x58478c*/
          aP3 = (IUnknown *)v21; /*0x58478d*/
          if ( v21 >= 0 ) /*0x584791*/
          {
            while ( 1 ) /*0x5847a8*/
            {
              v22 = *(unsigned int *)v93 + 36 * *(unsigned int *)(v20[1] + 8 * v21); /*0x5847a8*/
              v23 = *(unsigned int *)(v22 + 16); /*0x5847ab*/
              v24 = v23 - 1; /*0x5847af*/
              v25 = v23 - 1; /*0x5847b2*/
              if ( v23 - 1 >= 0 ) /*0x5847b6*/
              {
                v26 = (unsigned int *)(*(unsigned int *)(v22 + 4) + 8 * v25); /*0x5847bb*/
                while ( *v26 != v19 ) /*0x5847c0*/
                {
                  --v25; /*0x5847c2*/
                  v26 -= 2; /*0x5847c3*/
                  if ( v25 < 0 ) /*0x5847c8*/
                    goto LABEL_39; /*0x5847c8*/
                }
                if ( v25 < v23 ) /*0x5847ce*/
                {
                  for ( *(unsigned int *)(v22 + 16) = v24; /*0x5847d5*/
                        v25 < *(unsigned int *)(v22 + 16);
                        *(unsigned int *)(v27 + 8 * v25 - 4) = *(unsigned int *)(v27 + 8 * v25 + 4) )
                  {
                    v27 = *(unsigned int *)(v22 + 4); /*0x5847d7*/
                    ++v25; /*0x5847da*/
                    *(unsigned int *)(v27 + 8 * v25 - 8) = *(unsigned int *)(v27 + 8 * v25); /*0x5847de*/
                  }
                }
LABEL_39:
                v20 = v98; /*0x5847f1*/
              }
              aP3 = (IUnknown *)((char *)aP3 - 1); /*0x5847fa*/
              if ( (int)aP3 < 0 ) /*0x5847fe*/
                break; /*0x5847fe*/
              v21 = (int)aP3; /*0x584795*/
            }
          }
          (*(void (**)(unsigned int *))(*v20 + 12))(v20); /*0x584804*/
          v90 = (IUnknown *)((char *)v90 - 1); /*0x58480c*/
          if ( (int)v90 < 0 ) /*0x584810*/
            break; /*0x584810*/
          v18 = v90; /*0x584766*/
        }
        v9 = v106; /*0x584816*/
        v11 = v104; /*0x58481a*/
        v10 = v105; /*0x58481e*/
      }
      v28 = v10; /*0x584826*/
      aP3a = *(IUnknown **)&v2->__pad_68[4 * aP2 + 12]; /*0x58482c*/
      if ( (int)v10 < (int)&v10->__pad_0[v107] ) /*0x584838*/
        break; /*0x584838*/
LABEL_73:
      *(unsigned int *)&v2->__pad_68[4 * aP2 + 12] = aP3a; /*0x584ab8*/
      v43 = v2->field_60 - 1; /*0x584ac7*/
      if ( v43 >= 0 ) /*0x584ac8*/
      {
        v44 = 16 * v43; /*0x584ad0*/
        v100 = 16 * v43; /*0x584ad4*/
        v95 = v2->field_60; /*0x584ad8*/
        do /*0x584b53*/
        {
          v45 = (IUnknown *)(v2->field_54 + v44); /*0x584adc*/
          v46 = SLOWORD(v45->field_0); /*0x584adf*/
          if ( v46 >= (int)v11 /*0x584b1e*/
            && v46 < (int)v11 + v9
            && (v47 = SHIWORD(v45->field_0), v47 >= (int)v10)
            && v47 < (int)&v10->__pad_0[v107]
            || (v48 = SLOWORD(v45->field_4), v48 >= (int)v11)
            && v48 < (int)v11 + v9
            && (v49 = SHIWORD(v45->field_4), v49 >= (int)v10)
            && v49 < (int)&v10->__pad_0[v107] )
          {
            if ( IDA_LOBYTE(v45->field_8) ) /*0x584b20*/
            {
              RadarClass::RenderBlips(&v2->field_0, v45, aP2); /*0x584b2e*/
              v9 = v106; /*0x584b33*/
              v11 = v104; /*0x584b37*/
              v10 = v105; /*0x584b3b*/
            }
          }
          v44 = v100 - 16; /*0x584b47*/
          v42 = v95 == 1; /*0x584b4a*/
          v100 -= 16; /*0x584b4b*/
          --v95; /*0x584b4f*/
        }
        while ( !v42 ); /*0x584b53*/
      }
      v50 = 0; /*0x584b55*/
      aP3b = 0; /*0x584b57*/
      do /*0x584c85*/
      {
        if ( *(int *)(v50 + *v122 + 16) > 0 ) /*0x584b6b*/
        {
          v101 = *(unsigned int *)(v50 + *v122 + 16); /*0x584b74*/
          v96 = (unsigned char *)(*(unsigned int *)(*v122 + v50 + 4) + 8); /*0x584b7b*/
          do /*0x584c6a*/
          {
            v51 = *v96; /*0x584b86*/
            v52 = (uint16_t)*((unsigned int *)v96 - 1); /*0x584b95*/
            v53 = (uint16_t)IDA_HIWORD(*((unsigned int *)v96 - 1)); /*0x584b9b*/
            v54 = *((unsigned int *)v103 + 1); /*0x584ba1*/
            IDA_LOBYTE(v132) = *v96; /*0x584ba4*/
            v55 = *(unsigned int *)(v54 + 36 * v52 + 8); /*0x584bae*/
            v56 = v54 + 36 * v52; /*0x584bb2*/
            if ( *(unsigned int *)(v56 + 16) < v55 /*0x584bd8*/
              || (*(unsigned char *)(v56 + 13) || !v55)
              && (v57 = *(unsigned int *)(v56 + 20), v57 > 0)
              && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v56 + 8))(v56, v57 + v55, 0) )
            {
              v58 = *(unsigned int *)(v56 + 16); /*0x584bdf*/
              v59 = *(unsigned int *)(v56 + 4); /*0x584be2*/
              *(unsigned int *)(v56 + 16) = v58 + 1; /*0x584be8*/
              v60 = v132; /*0x584beb*/
              *(unsigned int *)(v59 + 8 * v58) = v53; /*0x584bf2*/
              *(unsigned int *)(v59 + 8 * v58 + 4) = v60; /*0x584bf5*/
            }
            IDA_LOBYTE(v133) = v51; /*0x584c01*/
            v61 = *((unsigned int *)v103 + 1); /*0x584c08*/
            v62 = *(unsigned int *)(v61 + 36 * v53 + 8); /*0x584c0b*/
            v63 = v61 + 36 * v53; /*0x584c0f*/
            if ( *(unsigned int *)(v63 + 16) < v62 /*0x584c35*/
              || (*(unsigned char *)(v63 + 13) || !v62)
              && (v64 = *(unsigned int *)(v63 + 20), v64 > 0)
              && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v63 + 8))(v63, v64 + v62, 0) )
            {
              v65 = *(unsigned int *)(v63 + 16); /*0x584c3c*/
              v66 = *(unsigned int *)(v63 + 4); /*0x584c3f*/
              *(unsigned int *)(v63 + 16) = v65 + 1; /*0x584c45*/
              v67 = v133; /*0x584c48*/
              *(unsigned int *)(v66 + 8 * v65) = v52; /*0x584c4f*/
              *(unsigned int *)(v66 + 8 * v65 + 4) = v67; /*0x584c52*/
            }
            v42 = v101 == 1; /*0x584c61*/
            v96 += 12; /*0x584c62*/
            --v101; /*0x584c66*/
          }
          while ( !v42 ); /*0x584c6a*/
          v50 = (int)aP3b; /*0x584c70*/
          v2 = v116; /*0x584c74*/
        }
        v50 += 24; /*0x584c78*/
        aP3b = (IUnknown *)v50; /*0x584c81*/
      }
      while ( v50 < 6144 ); /*0x584c85*/
      v110 = &vt_VectorClass_unsigned_short_7E3824; /*0x584c93*/
      if ( v111 && v113 ) /*0x584ca3*/
      {
        RA2_OPDEL(v111); /*0x584ca6*/
        v111 = 0; /*0x584cae*/
      }
      v113 = 0; /*0x584cb6*/
      v68 = aP2 - 1 < 0; /*0x584cbb*/
      v112 = 0; /*0x584cbc*/
      if ( v68 ) /*0x584cc4*/
      {
        v69 = SHIWORD(aP1->field_0); /*0x584ce3*/
        v70 = (IUnknown *)(SLOWORD(aP1->field_0) - SLOWORD(aP1->field_0) % 8); /*0x584ce9*/
        v104 = v70; /*0x584cf2*/
        v71 = (IUnknown *)(v69 - v69 % 8); /*0x584cfd*/
        v92 = v71; /*0x584cff*/
        v72 = (IUnknown *)&v71->field_8; /*0x584d03*/
        v116 = (IUnknown *)&v71->field_8; /*0x584d08*/
        if ( !__OFSUB__(v71, &v71->field_8) ) /*0x584d0c*/
        {
          v73 = &v70->field_8; /*0x584d12*/
          do /*0x584e25*/
          {
            v74 = v70; /*0x584d15*/
            aP3c = v70; /*0x584d19*/
            if ( (int)v70 < (int)v73 ) /*0x584d1d*/
            {
              do /*0x584e14*/
              {
                v108 = (int16_t)v74; /*0x584d2c*/
                v109 = (int16_t)v71; /*0x584d31*/
                if ( LayerClass::IsWithinUsableArea(v2, (IUnknown *)&v108, (TechnoClass *)1) ) /*0x584d36*/
                {
                  v75 = (int16_t)v74 + (int16_t)v71 * (v2->field_F8 + *(unsigned int *)&v2->__pad_EC[8] + 1); /*0x584d5c*/
                  if ( v75 >= 0 ) /*0x584d5e*/
                  {
                    v78 = *(unsigned int *)&v2->__pad_68[4]; /*0x584dc6*/
                    if ( v75 >= v78 ) /*0x584dcb*/
                      v75 = v78 - 1; /*0x584dcd*/
                  }
                  else
                  {
                    v75 = 0; /*0x584d60*/
                  }
                  v79 = &v2->__pad_8C[4]; /*0x584dd6*/
                  v80 = 2; /*0x584ddc*/
                  v81 = (int16_t *)(*(unsigned int *)&v2->__pad_68[8] + 10 * v75); /*0x584de1*/
                  do /*0x584dfc*/
                  {
                    v82 = *(unsigned int *)v79; /*0x584de7*/
                    v83 = v81[1]; /*0x584de9*/
                    v84 = 9 * *v81; /*0x584ded*/
                    v79 += 24; /*0x584df0*/
                    ++v81; /*0x584df3*/
                    --v80; /*0x584df6*/
                    *(unsigned short *)(v82 + 4 * v84 + 24) = v83; /*0x584df7*/
                  }
                  while ( v80 ); /*0x584dfc*/
                  v71 = v92; /*0x584dfe*/
                  v70 = v104; /*0x584e02*/
                  v74 = aP3c; /*0x584e06*/
                }
                v74 = (IUnknown *)((char *)v74 + 1); /*0x584e0a*/
                v73 = &v70->field_8; /*0x584e0b*/
                aP3c = v74; /*0x584e10*/
              }
              while ( (int)v74 < (int)&v70->field_8 ); /*0x584e14*/
              v72 = v116; /*0x584e1a*/
            }
            v71 = (IUnknown *)((char *)v71 + 1); /*0x584e1e*/
            v92 = v71; /*0x584e21*/
          }
          while ( (int)v71 < (int)v72 ); /*0x584e25*/
        }
        MapClass::AllocArrays(&stru_87C374.__pad_14B0[4244]); /*0x584e30*/
        return; /*0x584e30*/
      }
    }
    while ( 1 ) /*0x584841*/
    {
      v29 = v11; /*0x584841*/
      if ( (int)v11 < (int)((char *)v11 + v9) ) /*0x584845*/
        break; /*0x584845*/
LABEL_72:
      v28 = (CCINIClass *)((char *)v28 + 1); /*0x584aa9*/
      if ( (int)v28 >= (int)&v10->__pad_0[v107] ) /*0x584ab2*/
        goto LABEL_73; /*0x584ab2*/
    }
    v94 = 36 * (unsigned int)aP3a; /*0x584855*/
    while ( 1 )
    {
      v118[0] = (unsigned short)v29; /*0x584862*/
      v118[1] = (unsigned short)v28; /*0x584867*/
      if ( LayerClass::IsWithinUsableArea(v2, (IUnknown *)v118, (TechnoClass *)1) )
      {
        v117[0] = (unsigned short)v29; /*0x584880*/
        v117[1] = (unsigned short)v28; /*0x584885*/
        v30 = Cell::CoordToIndex(v2, (IUnknown *)v117); /*0x58488a*/
        if ( v30 >= 0 ) /*0x584891*/
        {
          v31 = *(unsigned int *)&v2->__pad_68[4]; /*0x584897*/
          if ( v30 >= v31 ) /*0x58489c*/
            v30 = v31 - 1; /*0x58489e*/
        }
        else
        {
          v30 = 0; /*0x584893*/
        }
        v32 = *(unsigned int *)&v2->__pad_68[8]; /*0x5848a1*/
        v120[0] = (unsigned short)v29; /*0x5848a7*/
        v120[1] = (unsigned short)v28; /*0x5848ac*/
        v91 = (IUnknown *)(v32 + 10 * v30); /*0x5848bb*/
        v33 = Cell::CoordToIndex(v2, (IUnknown *)v120); /*0x5848bf*/
        if ( v33 >= 0 ) /*0x5848c6*/
        {
          v34 = *(unsigned int *)&v2->__pad_68[4]; /*0x5848cc*/
          if ( v33 >= v34 ) /*0x5848d1*/
            v33 = v34 - 1; /*0x5848d3*/
        }
        else
        {
          v33 = 0; /*0x5848c8*/
        }
        v99 = *(uint8_t *)(*(unsigned int *)v2->__pad_68 + 4 * v33); /*0x5848e3*/
        if ( v99 != 7 && !*((unsigned short *)&v91->field_0 + aP2) )
        {
          v108 = (int16_t)v29; /*0x58491b*/
          v109 = (int16_t)v28; /*0x584920*/
          Radar::ProcessSubzone(v2, v91, (IUnknown *)aP2, aP3a, (IUnknown *)&v104, (IUnknown *)&v108); /*0x584925*/
          VectorClass::ConstructSubzone(&v123, 0, 0); /*0x584932*/
          v123 = &vt_DynamicVectorClass_SubzoneConnectionStruct; /*0x58493b*/
          v128 = 10; /*0x584943*/
          v127 = 0; /*0x58494e*/
          VectorClass::CleanupSubzone((int)&v123); /*0x584955*/
          IDA_LOWORD(v129) = 0; /*0x58495b*/
          v130 = 0; /*0x584963*/
          v131 = 0; /*0x58496a*/
          v35 = &v2->__pad_8C[24 * aP2]; /*0x584971*/
          v36 = *(unsigned int *)&v2->__pad_8C[24 * aP2 + 8]; /*0x584975*/
          if ( *(unsigned int *)&v2->__pad_8C[24 * aP2 + 16] < v36 /*0x58499a*/
            || (v2->__pad_8C[24 * aP2 + 13] || !v36)
            && (v37 = *(unsigned int *)&v2->__pad_A0[24 * aP2], v37 > 0)
            && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)v103 + 8))(v103, v37 + v36, 0) )
          {
            v38 = *(unsigned int *)&v2->__pad_8C[24 * aP2 + 16]; /*0x5849a5*/
            *(unsigned int *)&v2->__pad_8C[24 * aP2 + 16] = v38 + 1; /*0x5849ae*/
            v39 = *(unsigned int *)&v2->__pad_8C[24 * aP2 + 4] + 36 * v38; /*0x5849b8*/
            Radar::CopyDataArray((int *)v39, (int *)&v123); /*0x5849be*/
            *(unsigned short *)(v39 + 24) = v129; /*0x5849cb*/
            *(unsigned int *)(v39 + 28) = v130; /*0x5849d6*/
            *(unsigned int *)(v39 + 32) = v131; /*0x5849e0*/
            v35 = &v2->__pad_8C[24 * aP2]; /*0x5849e3*/
          }
          v123 = &vt_VectorClass_SubzoneConnectionStruct; /*0x5849eb*/
          if ( Block && IDA_BYTE1(v126) ) /*0x5849fd*/
          {
            RA2_OPDEL(Block); /*0x584a00*/
            Block = 0; /*0x584a08*/
          }
          v40 = v94 + *((unsigned int *)v35 + 1); /*0x584a1b*/
          IDA_BYTE1(v126) = 0; /*0x584a20*/
          v125 = 0; /*0x584a25*/
          v41 = aP2 == 2 ? 0 : *((unsigned short *)&v91->field_0 + aP2 + 1);
          *(unsigned short *)(v40 + 24) = v41; /*0x584a3c*/
          *(unsigned int *)(v40 + 28) = v99; /*0x584a44*/
          *(unsigned int *)(v40 + 20) = 16; /*0x584a47*/
          *(unsigned int *)(v40 + 32) = (int16_t)v29 / 4 + 130 * ((int16_t)v28 / 4) + 131; /*0x584a78*/
          v42 = v94 == -36; /*0x584a80*/
          aP3a = (IUnknown *)((char *)aP3a + 1); /*0x584a83*/
          v94 += 36; /*0x584a87*/
          if ( v42 ) /*0x584a8b*/
            break; /*0x584a8b*/
        }
      }
      v9 = v106; /*0x584a91*/
      v11 = v104; /*0x584a95*/
      v29 = (IUnknown *)((char *)v29 + 1); /*0x584a99*/
      if ( (int)v29 >= (int)((char *)v104 + v106) ) /*0x584a9f*/
      {
        v10 = v105; /*0x584aa5*/
        goto LABEL_72; /*0x584aa5*/
      }
    }
    v76 = 2; /*0x584d64*/
    v77 = &v2->__pad_A8[20]; /*0x584d69*/
    do /*0x584d84*/
    {
      (*(void (**)(char *))(*(unsigned int *)v77 + 12))(v77); /*0x584d73*/
      Subzone::BuildGraph(v2, (IUnknown *)v76--); /*0x584d79*/
      v77 -= 24; /*0x584d7f*/
    }
    while ( v76 >= 0 ); /*0x584d84*/
    MapClass::AllocArrays(&stru_87C374.__pad_14B0[4244]); /*0x584d8b*/
    v110 = &vt_VectorClass_unsigned_short_7E3824; /*0x584d94*/
    if ( v111 && v113 ) /*0x584daa*/
      RA2_OPDEL(v111); /*0x584db1*/
  }

}
}
// 0x58ABD0
namespace gamemd {
void * Radar::CopyDataArray(int * a2)
{

  int v3; // edi
  char *v4; // eax
  char *v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  if ( this != a2 ) /*0x58abdc*/
  {
    (*(void (**)(int *))(*(unsigned int *)this + 12))(this); /*0x58abe0*/
    v3 = a2[2]; /*0x58abe3*/
    *((char *)this + 2) = v3; /*0x58abea*/
    if ( v3 ) /*0x58abed*/
    {
      v4 = (char *)RA2_OPNEW(8 * v3); /*0x58abf7*/
      if ( v4 ) /*0x58ac01*/
      {
        v5 = v4; /*0x58ac06*/
        if ( v3 - 1 >= 0 ) /*0x58ac0a*/
        {
          v6 = v3; /*0x58ac0c*/
          do /*0x58ac16*/
          {
            *(unsigned int *)v5 = 0; /*0x58ac0d*/
            v5[4] = 0; /*0x58ac0f*/
            v5 += 8; /*0x58ac12*/
            --v6; /*0x58ac15*/
          }
          while ( v6 ); /*0x58ac16*/
        }
      }
      else
      {
        v4 = 0; /*0x58ac1a*/
      }
      *((char *)this + 1) = (int)v4; /*0x58ac1e*/
      if ( v4 ) /*0x58ac21*/
      {
        v7 = *((char *)this + 2); /*0x58ac23*/
        v8 = 0; /*0x58ac26*/
        *((unsigned char *)this + 13) = 1; /*0x58ac2a*/
        if ( v7 > 0 ) /*0x58ac2e*/
        {
          do /*0x58ac4a*/
          {
            v9 = a2[1]; /*0x58ac30*/
            v10 = *((char *)this + 1); /*0x58ac33*/
            *(unsigned int *)(v10 + 8 * v8) = *(unsigned int *)(v9 + 8 * v8); /*0x58ac39*/
            *(unsigned int *)(v10 + 8 * v8 + 4) = *(unsigned int *)(v9 + 8 * v8 + 4); /*0x58ac40*/
            ++v8; /*0x58ac47*/
          }
          while ( v8 < *((char *)this + 2) ); /*0x58ac4a*/
        }
      }
    }
    else
    {
      *((char *)this + 1) = 0; /*0x58ac4e*/
      *((unsigned char *)this + 13) = 0; /*0x58ac51*/
    }
  }
  *((char *)this + 4) = a2[4]; /*0x58ac58*/
  *((char *)this + 5) = a2[5]; /*0x58ac5e*/
  return this; /*0x58ac57*/

}
}
// 0x6558B0
namespace gamemd {
int Radar::PixelIndex()
{

  return *((unsigned int *)this + 1) + 251 * *((unsigned int *)this + 2); /*0x6558c4*/

}
}
// 0x656EC0
namespace gamemd {
MapClass * * Radar::RenderMinimap()
{

  int v2; // ebx
  int v3; // ecx
  int16_t *v4; // eax
  int *v5; // eax
  int v6; // ecx
  int v7; // ebp
  int v8; // eax
  int *v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // ebp
  double v13; // st7
  unsigned int *v14; // ebp
  int v15; // eax
  double v16; // st6
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int i; // ebp
  int v24; // ebx
  int v25; // eax
  int v26; // eax
  int j; // ebp
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  int *v31; // ebp
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // edx
  bool v37; // cc
  int v38; // ecx
  int v39; // edx
  int v40; // ecx
  int v41; // edx
  int v42; // edx
  int v43; // eax
  int v44; // ecx
  bool v45; // sf
  int v46; // ebx
  int v47; // ecx
  int k; // ebp
  int *v49; // eax
  int v50; // ebp
  int *v51; // eax
  int v52; // edx
  int v53; // ecx
  int v54; // ebp
  int v55; // eax
  int v56; // eax
  int v57; // ecx
  int v58; // edx
  int v59; // edi
  int v60; // eax
  int v61; // eax
  int v62; // edx
  int v63; // edi
  int v64; // ecx
  int v65; // edi
  int v66; // edi
  int v67; // ebp
  int v68; // ebp
  int v69; // edi
  int v70; // ecx
  int *v71; // edi
  int *v72; // ebp
  int v73; // ecx
  int v74; // edi
  int v75; // ebp
  int v76; // eax
  int v77; // edx
  int v78; // eax
  int v79; // ecx
  int v80; // edi
  int v81; // ebp
  int v82; // eax
  int v83; // ecx
  int v84; // edx
  char v86; // [esp+40h] [ebp-46h]
  char v87; // [esp+41h] [ebp-45h]
  int v88; // [esp+42h] [ebp-44h] BYREF
  int v89; // [esp+4Ah] [ebp-3Ch]
  int v90; // [esp+4Eh] [ebp-38h]
  int v91; // [esp+52h] [ebp-34h] BYREF
  ConvertClass *v92; // [esp+56h] [ebp-30h]
  int v93; // [esp+5Ah] [ebp-2Ch]
  int v94; // [esp+5Eh] [ebp-28h]
  int v95; // [esp+62h] [ebp-24h]
  unsigned char v96[32]; // [esp+66h] [ebp-20h] BYREF

  v2 = (char *)this + 4620; /*0x656ec9*/
  v95 = (char *)this + 4620; /*0x656ed1*/
  *(unsigned int *)&v96[16] = *((unsigned int *)this + 1155); /*0x656ed7*/
  *(unsigned int *)&v96[20] = *((unsigned int *)this + 1156); /*0x656ede*/
  *(unsigned int *)&v96[24] = *((unsigned int *)this + 1157); /*0x656ee5*/
  v3 = *((unsigned int *)this + 1324); /*0x656ee9*/
  *(unsigned int *)&v96[28] = *(unsigned int *)(v2 + 12); /*0x656ef9*/
  if ( v3 != 1 || (v86 = 1, *((unsigned int *)this + 1323) != 1) ) /*0x656f0b*/
    v86 = 0; /*0x656f0d*/
  v91 = *(unsigned int *)&g_abs_87F8E4 + *(unsigned int *)&g_abs_87F8E4 / 2; /*0x656f28*/
  v92 = (ConvertClass *)(*(unsigned int *)&g_abs_87F8E4 /*0x656f3e*/
                       + *(unsigned int *)&g_abs_87F8E4 / 2);
  v4 = (int16_t *)Tactical::PixelToCell( /*0x656f4e*/
                    *(int *)&g_abs_87F8E4,
                    (AbstractClass *)v96,
                    (IUnknown *)&v91);
  v5 = (int *)CellCoord::To_CellObj(&g_abs_87F7E8, v4); /*0x656f59*/
  v6 = *((unsigned int *)this + 1316); /*0x656f61*/
  v91 = v5[9]; /*0x656f67*/
  v7 = SHIWORD(v91); /*0x656f71*/
  v8 = (int16_t)v91; /*0x656f76*/
  v9 = (int *)((char *)this + 5276); /*0x656f7b*/
  v10 = (int16_t)v91 + v6 - SHIWORD(v91); /*0x656f81*/
  v91 = *((int *)this + 1319); /*0x656f83*/
  v88 = v10; /*0x656f87*/
  *(unsigned int *)v96 = v8; /*0x656f8b*/
  v11 = Math::RoundToInt((double)v10 * *(float *)((char *)this + 5256) + (double)v91); /*0x656f9d*/
  v12 = v7 - *((unsigned int *)this + 1318); /*0x656fac*/
  v88 = v11; /*0x656fae*/
  *(unsigned int *)v96 += v12; /*0x656fb4*/
  *(unsigned int *)v96 = Math::RoundToInt((double)*(int *)v96 * *(float *)((char *)this + 5256) + (double)*((int *)this + 1320)); /*0x656fd1*/
  if ( v88 == v91 - 1 ) /*0x656fdc*/
    ++v88; /*0x656fdf*/
  v13 = 60.0 / *(float *)((char *)this + 5256); /*0x656fe9*/
  v14 = (unsigned int *)((char *)this + 5340); /*0x656ff3*/
  v94 = 1; /*0x657000*/
  *((unsigned int *)this + 1335) = v88; /*0x657004*/
  *((unsigned int *)this + 1336) = *(unsigned int *)v96; /*0x65700a*/
  *((unsigned int *)this + 1337) = 1; /*0x65700d*/
  *((unsigned int *)this + 1338) = 1; /*0x657010*/
  *(unsigned int *)v96 = 2 * *(unsigned int *)&g_abs_87F8E4; /*0x65701c*/
  v15 = Math::RoundToInt(v13); /*0x65702c*/
  v16 = 30.0 / *(float *)((char *)this + 5256); /*0x657037*/
  *((unsigned int *)this + 1337) = v15; /*0x65703d*/
  *(unsigned int *)v96 = 2 * *(unsigned int *)&g_abs_87F8E4; /*0x65704c*/
  *(float *)&v91 = v16; /*0x657050*/
  *((unsigned int *)this + 1338) = Math::RoundToInt(v13); /*0x657061*/
  v88 = Math::RoundToInt(v13); /*0x657074*/
  *(unsigned int *)v96 = 2 * *(unsigned int *)&g_abs_87F8E4; /*0x657082*/
  v17 = Math::RoundToInt((double)(2 * *(unsigned int *)&g_abs_87F8E4) / *(float *)&v91 * 0.5); /*0x657094*/
  *((unsigned int *)this + 1335) -= v88; /*0x6570a2*/
  *((unsigned int *)this + 1336) -= v17; /*0x6570aa*/
  v18 = *((unsigned int *)this + 1335); /*0x6570ad*/
  v19 = *v9; /*0x6570b0*/
  if ( v18 >= *v9 ) /*0x6570b4*/
  {
    v91 = *((int *)this + 1321); /*0x6570c1*/
    if ( v18 + *((unsigned int *)this + 1337) >= v19 + v91 ) /*0x6570d5*/
      *v14 = v91 - *((unsigned int *)this + 1337) + v19 - 1; /*0x6570e7*/
  }
  else
  {
    *v14 = v19; /*0x6570b6*/
  }
  v20 = *((unsigned int *)this + 1336); /*0x6570ea*/
  v21 = *((unsigned int *)this + 1320); /*0x6570f0*/
  if ( v20 >= v21 ) /*0x6570f8*/
  {
    v22 = *((unsigned int *)this + 1322); /*0x657108*/
    if ( v20 + *((unsigned int *)this + 1338) >= v22 + *((unsigned int *)this + 1320) ) /*0x65711a*/
      *((unsigned int *)this + 1336) = v22 - *((unsigned int *)this + 1338) + *((unsigned int *)this + 1320) - 1; /*0x65712e*/
  }
  else
  {
    *((unsigned int *)this + 1336) = v21; /*0x6570fa*/
  }
  if ( *((unsigned char *)this + 5338) ) /*0x657134*/
  {
    *((unsigned int *)this + 1339) = *v14; /*0x657148*/
    *((unsigned int *)this + 1340) = *((unsigned int *)this + 1336); /*0x65714d*/
    *((unsigned int *)this + 1341) = *((unsigned int *)this + 1337); /*0x657153*/
    *((unsigned int *)this + 1342) = *((unsigned int *)this + 1338); /*0x657159*/
  }
  if ( *((unsigned char *)this + 5337) /*0x6571bc*/
    || *((unsigned int *)this + 1339) != *v14
    || *((unsigned int *)this + 1340) != *((unsigned int *)this + 1336)
    || *((unsigned int *)this + 1341) != *((unsigned int *)this + 1337)
    || *((unsigned int *)this + 1342) != *((unsigned int *)this + 1338)
    || !Render_Render_660530()
    || *((int *)this + 1179) > 0
    || *((int *)this + 1165) > 0
    || HouseClass::ProcessData(dword_89C3B0) )
  {
    if ( v86 ) /*0x6571cf*/
      *((unsigned char *)this + 5337) = 0; /*0x6571d1*/
    Surface::RenderRadar((unsigned int *)this); /*0x6571da*/
    v87 = 0; /*0x6571ea*/
    if ( *((unsigned int *)this + 1339) != *v14 /*0x657216*/
      || *((unsigned int *)this + 1340) != *((unsigned int *)this + 1336)
      || *((unsigned int *)this + 1341) != *((unsigned int *)this + 1337)
      || *((unsigned int *)this + 1342) != *((unsigned int *)this + 1338) )
    {
      for ( i = 0; i < *((unsigned int *)this + 1342); ++i ) /*0x657226*/
      {
        v24 = *((unsigned int *)this + 1320); /*0x657236*/
        v25 = i + *((unsigned int *)this + 1340); /*0x65723e*/
        *(unsigned int *)v96 = *((unsigned int *)this + 1339) - *v9; /*0x657240*/
        *(unsigned int *)&v96[4] = v25 - v24; /*0x65724d*/
        FogOfWar::RevealCell(this, (IUnknown *)v96); /*0x657251*/
        v26 = i + *((unsigned int *)this + 1340) - *((unsigned int *)this + 1320); /*0x65727c*/
        *(unsigned int *)v96 = *((unsigned int *)this + 1341) + *((unsigned int *)this + 1339) - 1 - *v9; /*0x65727e*/
        *(unsigned int *)&v96[4] = v26; /*0x657285*/
        FogOfWar::RevealCell(this, (IUnknown *)v96); /*0x657289*/
      }
      for ( j = 0; j < *((unsigned int *)this + 1341); ++j ) /*0x6572a3*/
      {
        v28 = j + *((unsigned int *)this + 1339) - *v9; /*0x6572bd*/
        *(unsigned int *)&v96[4] = *((unsigned int *)this + 1340) - *((unsigned int *)this + 1320); /*0x6572bf*/
        *(unsigned int *)v96 = v28; /*0x6572c3*/
        FogOfWar::RevealCell(this, (IUnknown *)v96); /*0x6572ce*/
        v29 = *((unsigned int *)this + 1320); /*0x6572eb*/
        v30 = *((unsigned int *)this + 1340) + *((unsigned int *)this + 1342) - 1; /*0x6572f1*/
        *(unsigned int *)v96 = j + *((unsigned int *)this + 1339) - *v9; /*0x6572f5*/
        *(unsigned int *)&v96[4] = v30 - v29; /*0x6572ff*/
        FogOfWar::RevealCell(this, (IUnknown *)v96); /*0x657306*/
      }
      v2 = v95; /*0x657316*/
      v87 = 1; /*0x65731a*/
    }
    v31 = (int *)((char *)this + 4680); /*0x657325*/
    if ( *((int *)this + 1172) > 0 && *((int *)this + 1173) > 0 ) /*0x657338*/
    {
      (*(void (**)(unsigned int, int, unsigned int, int, unsigned int, int))(**(unsigned int **)((char *)this + 4636) + 8))( /*0x657353*/
        *((unsigned int *)this + 1159),
        (char *)this + 4680,
        *((unsigned int *)this + 1160),
        (char *)this + 4680,
        0,
        1);
      v32 = *((unsigned int *)this + 1320); /*0x65735b*/
      v33 = *v9 + *v31; /*0x65735e*/
      v34 = *((unsigned int *)this + 1171); /*0x657360*/
      *(unsigned int *)v96 = v33; /*0x657363*/
      v35 = v32 + v34; /*0x657367*/
      v36 = *((unsigned int *)this + 1173); /*0x657369*/
      v37 = *(unsigned int *)(v2 + 8) <= 0; /*0x65736c*/
      *(unsigned int *)&v96[4] = v35; /*0x657370*/
      v38 = *((unsigned int *)this + 1172); /*0x657374*/
      v90 = v36; /*0x657377*/
      v89 = v38; /*0x65737b*/
      if ( v37 || *(int *)(v2 + 12) <= 0 ) /*0x657389*/
      {
        v42 = v90; /*0x657478*/
      }
      else if ( v38 <= 0 || v36 <= 0 ) /*0x657399*/
      {
        v33 = *(unsigned int *)v2; /*0x65745f*/
        *(unsigned int *)&v96[4] = *(unsigned int *)(v2 + 4); /*0x657464*/
        v38 = *(unsigned int *)(v2 + 8); /*0x657468*/
        v42 = *(unsigned int *)(v2 + 12); /*0x65746b*/
      }
      else
      {
        v91 = *(int *)v2; /*0x6573a3*/
        v92 = *(ConvertClass **)(v2 + 4); /*0x6573aa*/
        v39 = *(unsigned int *)(v2 + 8); /*0x6573ae*/
        v93 = v39; /*0x6573b1*/
        v94 = *(unsigned int *)(v2 + 12); /*0x6573b8*/
        if ( v91 > v33 ) /*0x6573c2*/
        {
          v40 = v91 - v33; /*0x6573c4*/
          v91 = v33; /*0x6573c6*/
          v93 = v40 + v39; /*0x6573cc*/
        }
        if ( (int)v92 > *(int *)&v96[4] ) /*0x6573da*/
        {
          v94 += (int)&v92->__pad_0[-*(unsigned int *)&v96[4]]; /*0x6573e4*/
          v92 = *(ConvertClass **)&v96[4]; /*0x6573ec*/
        }
        if ( v91 + v93 < v89 + v33 ) /*0x657403*/
          v93 = v89 - v91 + *(unsigned int *)v96 + 1; /*0x657413*/
        if ( (int)&v92->__pad_0[v94] >= *(unsigned int *)&v96[4] + v90 ) /*0x65742d*/
        {
          v42 = v94; /*0x65744b*/
          v33 = v91; /*0x65744f*/
          *(unsigned int *)&v96[4] = v92; /*0x657453*/
          v38 = v93; /*0x657457*/
        }
        else
        {
          v41 = *(unsigned int *)&v96[4]; /*0x657433*/
          *(unsigned int *)&v96[4] = v92; /*0x657439*/
          v38 = v93; /*0x65743d*/
          v42 = v90 - (unsigned int)v92 + v41 + 1; /*0x657441*/
          v33 = v91; /*0x657445*/
        }
      }
      *(unsigned int *)v2 = v33; /*0x65747c*/
      *(unsigned int *)(v2 + 4) = *(unsigned int *)&v96[4]; /*0x657482*/
      v88 = *v31; /*0x657488*/
      v43 = v88; /*0x657485*/
      *(unsigned int *)(v2 + 8) = v38; /*0x65748c*/
      v44 = v43 + *((unsigned int *)this + 1172); /*0x657495*/
      v45 = -*((unsigned int *)this + 1172) < 0; /*0x657497*/
      *(unsigned int *)(v2 + 12) = v42; /*0x657499*/
      if ( v45 != __OFSUB__(v43, v44) ) /*0x65749c*/
      {
        do /*0x6574f1*/
        {
          v46 = *((unsigned int *)this + 1171); /*0x65749e*/
          if ( v46 < v46 + *((unsigned int *)this + 1173) ) /*0x6574ae*/
          {
            do /*0x6574d9*/
            {
              *(unsigned int *)v96 = v88; /*0x6574bb*/
              *(unsigned int *)&v96[4] = v46; /*0x6574bf*/
              FogOfWar::RevealArea(this, (RadarClass *)v96); /*0x6574c3*/
              ++v46; /*0x6574d4*/
            }
            while ( v46 < *((unsigned int *)this + 1171) + *((unsigned int *)this + 1173) ); /*0x6574d9*/
          }
          v47 = *((unsigned int *)this + 1172) + *v31; /*0x6574e9*/
          ++v88; /*0x6574eb*/
        }
        while ( v88 < v47 ); /*0x6574f1*/
      }
      *v31 = 0; /*0x6574f9*/
      *((unsigned int *)this + 1171) = 0; /*0x6574fe*/
      *((unsigned int *)this + 1172) = 0; /*0x657501*/
      *((unsigned int *)this + 1173) = 0; /*0x657504*/
      v2 = v95; /*0x657507*/
    }
    for ( k = *((unsigned int *)this + 1179) - 1; k >= 0; --k ) /*0x657512*/
      FogOfWar::RevealArea(this, (RadarClass *)(*((unsigned int *)this + 1176) + 8 * k)); /*0x657520*/
    (*(void (**)(int))(*((unsigned int *)this + 1175) + 12))((char *)this + 4700); /*0x657534*/
    Render_Render_660000(); /*0x657537*/
    v49 = (int *)(*(int (**)(unsigned int, unsigned char *))(**(unsigned int **)((char *)this + 4636) + 120))( /*0x657549*/
                   *((unsigned int *)this + 1159),
                   v96);
    HouseClass::Render(dword_89C3B0, *((unsigned int *)this + 1159), *v49, v49[1], v49[2], v49[3]); /*0x657573*/
    if ( v86 ) /*0x65757e*/
    {
      if ( *((unsigned char *)this + 5338) ) /*0x657584*/
      {
        v50 = VtableStub::72F510(); /*0x657595*/
        *(unsigned int *)v2 = *v9; /*0x65759b*/
        *(unsigned int *)(v2 + 4) = *((unsigned int *)this + 1320); /*0x6575a0*/
        *(unsigned int *)(v2 + 8) = *((unsigned int *)this + 1321); /*0x6575a6*/
        *(unsigned int *)(v2 + 12) = *((unsigned int *)this + 1322); /*0x6575af*/
        *(unsigned int *)v96 = *((unsigned int *)this + 1145); /*0x6575ba*/
        *(unsigned int *)&v96[4] = *((unsigned int *)this + 1147); /*0x6575d7*/
        v51 = (int *)(*(int (**)(unsigned int, int *))(**(unsigned int **)&g_abs_87F8E4 + 120))( /*0x6575e2*/
                       *(unsigned int *)&g_abs_87F8E4,
                       &v88);
        DrawToSurfaceSHP( /*0x6575fc*/
          *(int *)&g_abs_87F8E4,
          v50,
          (int)g_abs_B04A38,
          0x20u,
          (int *)v96,
          v51,
          0,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
      }
      if ( *(int *)(v2 + 8) > 0 && *(int *)(v2 + 12) > 0 ) /*0x65760d*/
      {
        v52 = *(unsigned int *)(v2 + 8); /*0x65761e*/
        v53 = *(unsigned int *)(v2 + 4) - *((unsigned int *)this + 1320); /*0x657621*/
        v54 = *(unsigned int *)(v2 + 12); /*0x657623*/
        *(unsigned int *)v96 = *(unsigned int *)v2 - *v9; /*0x657626*/
        *(unsigned int *)&v96[4] = v53; /*0x657630*/
        v55 = *((unsigned int *)this + 1159); /*0x65763d*/
        *(unsigned int *)&v96[8] = v52; /*0x657643*/
        *(unsigned int *)&v96[12] = v54; /*0x657647*/
        (*(void (**)(unsigned int, int, int, unsigned char *, unsigned int, int))(**(unsigned int **)&g_abs_87F8E4 /*0x65764f*/
                                                                       + 8))(
          *(unsigned int *)&g_abs_87F8E4,
          v2,
          v55,
          v96,
          0,
          1);
      }
      (*(void (**)(unsigned int, int, unsigned int))(**(unsigned int **)&g_abs_87F8E4 + 88))( /*0x657668*/
        *(unsigned int *)&g_abs_87F8E4,
        (char *)this + 5340,
        *((unsigned int *)this + 1154));
      v56 = *v9; /*0x65766b*/
      v57 = *((unsigned int *)this + 1320); /*0x65766d*/
      v58 = *((unsigned int *)this + 1321); /*0x657670*/
      v59 = *((unsigned int *)this + 1322); /*0x657673*/
      v91 = v56 - 1; /*0x657678*/
      v60 = *((unsigned int *)this + 1154); /*0x65767c*/
      v92 = (ConvertClass *)(v57 - 1); /*0x657682*/
      v93 = v58 + 2; /*0x657693*/
      v94 = v59 + 2; /*0x657697*/
      (*(void (**)(unsigned int, int *, int))(**(unsigned int **)&g_abs_87F8E4 + 88))( /*0x6576a2*/
        *(unsigned int *)&g_abs_87F8E4,
        &v91,
        v60);
    }
    if ( !v87 ) /*0x6576ab*/
      goto LABEL_99; /*0x6576ab*/
    if ( *((int *)this + 1341) <= 0 || *((int *)this + 1342) <= 0 ) /*0x6576ca*/
    {
      v71 = (int *)v2; /*0x65775f*/
    }
    else
    {
      if ( *(int *)(v2 + 8) > 0 && *(int *)(v2 + 12) > 0 ) /*0x6576e0*/
      {
        v61 = *((unsigned int *)this + 1339); /*0x6576e4*/
        v62 = *((unsigned int *)this + 1340); /*0x6576e6*/
        v63 = *((unsigned int *)this + 1341); /*0x6576e9*/
        *(unsigned int *)&v96[8] = v63; /*0x6576ec*/
        *(unsigned int *)&v96[12] = *((unsigned int *)this + 1342); /*0x6576f3*/
        v64 = *(unsigned int *)v2; /*0x6576f7*/
        if ( v61 > *(unsigned int *)v2 ) /*0x6576fb*/
        {
          v65 = v61 - v64 + v63; /*0x6576ff*/
          v61 = *(unsigned int *)v2; /*0x657701*/
          *(unsigned int *)&v96[8] = v65; /*0x657703*/
        }
        v66 = *(unsigned int *)(v2 + 4); /*0x657707*/
        if ( v62 > v66 ) /*0x65770c*/
        {
          v67 = v62 - v66 + *(unsigned int *)&v96[12]; /*0x657714*/
          v62 = *(unsigned int *)(v2 + 4); /*0x657716*/
          *(unsigned int *)&v96[12] = v67; /*0x657718*/
        }
        if ( v61 + *(unsigned int *)&v96[8] < v64 + *(unsigned int *)(v2 + 8) ) /*0x657729*/
          *(unsigned int *)&v96[8] = v64 - v61 + *(unsigned int *)(v2 + 8) + 1; /*0x657734*/
        v68 = *(unsigned int *)(v2 + 4) + *(unsigned int *)(v2 + 12); /*0x65773e*/
        v69 = *(unsigned int *)&v96[12]; /*0x657741*/
        if ( *(unsigned int *)&v96[12] + v62 < v68 ) /*0x65774a*/
          v69 = v68 - v62 + 1; /*0x65774f*/
        v70 = *(unsigned int *)&v96[8]; /*0x657751*/
        v93 = *(unsigned int *)&v96[8]; /*0x657755*/
        goto LABEL_84; /*0x657759*/
      }
      v71 = (int *)((char *)this + 5356); /*0x65775b*/
    }
    v61 = *v71; /*0x657761*/
    v62 = v71[1]; /*0x657763*/
    v70 = v71[2]; /*0x657766*/
    v93 = v70; /*0x657769*/
    v69 = v71[3]; /*0x65776d*/
LABEL_84:
    v37 = *((unsigned int *)this + 1337) <= 0; /*0x657770*/
    v72 = (int *)((char *)this + 5340); /*0x657777*/
    v94 = v69; /*0x65777d*/
    if ( !v37 && *((int *)this + 1338) > 0 ) /*0x65778b*/
    {
      if ( v70 <= 0 || v69 <= 0 ) /*0x65779b*/
      {
        v61 = *v72; /*0x657823*/
        v62 = *((unsigned int *)this + 1336); /*0x657826*/
        v70 = *((unsigned int *)this + 1337); /*0x657829*/
        v69 = *((unsigned int *)this + 1338); /*0x65782c*/
      }
      else
      {
        v73 = *v72; /*0x6577a1*/
        v37 = *v72 <= v61; /*0x6577a4*/
        *(unsigned int *)&v96[4] = *((unsigned int *)this + 1336); /*0x6577a9*/
        *(unsigned int *)&v96[8] = *((unsigned int *)this + 1337); /*0x6577b0*/
        *(unsigned int *)&v96[12] = *((unsigned int *)this + 1338); /*0x6577b7*/
        if ( !v37 ) /*0x6577bb*/
        {
          v74 = v73 - v61 + *(unsigned int *)&v96[8]; /*0x6577c3*/
          v73 = v61; /*0x6577c5*/
          *(unsigned int *)&v96[8] = v74; /*0x6577c7*/
        }
        if ( *(int *)&v96[4] > v62 ) /*0x6577d1*/
        {
          v75 = *(unsigned int *)&v96[4] - v62 + *(unsigned int *)&v96[12]; /*0x6577d9*/
          *(unsigned int *)&v96[4] = v62; /*0x6577db*/
          *(unsigned int *)&v96[12] = v75; /*0x6577df*/
        }
        if ( v73 + *(unsigned int *)&v96[8] < v61 + v93 ) /*0x6577f1*/
          *(unsigned int *)&v96[8] = v61 - v73 + v93 + 1; /*0x6577fd*/
        v69 = *(unsigned int *)&v96[12]; /*0x657805*/
        v76 = v62 + v94; /*0x657809*/
        v62 = *(unsigned int *)&v96[4]; /*0x65780b*/
        if ( *(unsigned int *)&v96[12] + *(unsigned int *)&v96[4] < v76 ) /*0x657814*/
          v69 = v76 - *(unsigned int *)&v96[4] + 1; /*0x657819*/
        v61 = v73; /*0x65781b*/
        v70 = *(unsigned int *)&v96[8]; /*0x65781d*/
      }
    }
    *(unsigned int *)v2 = v61; /*0x657831*/
    *(unsigned int *)(v2 + 4) = v62; /*0x657834*/
    *(unsigned int *)(v2 + 8) = v70; /*0x657837*/
    *(unsigned int *)(v2 + 12) = v69; /*0x65783a*/
LABEL_99:
    v77 = *((unsigned int *)this + 1336); /*0x65783d*/
    v78 = *((unsigned int *)this + 1337); /*0x657849*/
    *((unsigned int *)this + 1339) = *((unsigned int *)this + 1335); /*0x65784f*/
    v79 = *((unsigned int *)this + 1338); /*0x657855*/
    *((unsigned int *)this + 1340) = v77; /*0x65785b*/
    *((unsigned int *)this + 1341) = v78; /*0x657861*/
    *((unsigned int *)this + 1342) = v79; /*0x657867*/
    Render_Render_6603B0(); /*0x65786d*/
  }
  if ( *((unsigned int *)this + 1181) ) /*0x657872*/
  {
    *(unsigned int *)v96 = *((unsigned int *)this + 1159); /*0x657884*/
    v80 = *(unsigned int *)v96; /*0x657882*/
    v81 = (*(int (**)(unsigned int))(**(unsigned int **)v96 + 128))(*(unsigned int *)v96); /*0x657896*/
    memset(*(void **)((char *)this + 4724), 0, v81 * (*(int (**)(int))(*(unsigned int *)v80 + 124))(v80) / 8 + 1); /*0x6578b7*/
  }
  IDA_LOBYTE(v82) = v86; /*0x6578c0*/
  if ( !v86 ) /*0x6578c6*/
  {
    v83 = *(unsigned int *)&v96[20]; /*0x6578cc*/
    v84 = *(unsigned int *)&v96[24]; /*0x6578d0*/
    *(unsigned int *)v2 = *(unsigned int *)&v96[16]; /*0x6578d4*/
    v82 = *(unsigned int *)&v96[28]; /*0x6578d6*/
    *(unsigned int *)(v2 + 4) = v83; /*0x6578da*/
    *(unsigned int *)(v2 + 8) = v84; /*0x6578dd*/
    *(unsigned int *)(v2 + 12) = v82; /*0x6578e0*/
  }
  return v82; /*0x6578e3*/

}
}
// 0x692610
namespace gamemd {
AbstractClass * * Radar::ScanWaypoints(MouseClass * aP0, MouseClass * aP1, int aP3_4)
{

  MouseClass *v3; // esi
  int RadarClosestEnemy; // eax
  MouseClass *v6; // esi
  int v7; // eax
  MouseClass *v8; // esi
  char v9; // bl
  CellStruct *v10; // eax
  CellStruct *v11; // edi
  IUnknown *v12; // eax
  unsigned short *v13; // eax
  int16_t *v14; // ebp
  IUnknown *v15; // eax
  unsigned short *v16; // eax
  char *v17; // eax
  void *v18; // eax
  void *v19; // eax
  int v20; // eax
  MouseClass *v21; // edi
  bool v22; // bl
  IUnknown *v23; // ecx
  void *v24; // eax
  int v25; // edx
  unsigned int *v26; // eax
  IUnknown *v27; // eax
  MouseClass *v28; // [esp-4h] [ebp-24h]
  MouseClass *v29; // [esp-4h] [ebp-24h]
  IUnknown *v30; // [esp+10h] [ebp-10h]
  unsigned int v31[2]; // [esp+14h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+1Ch] [ebp-4h]

  v30 = 0; /*0x69261e*/
  if ( *(unsigned int *)&HouseClass_Player.__pad_5568[23060] ) /*0x692626*/
  {
    v3 = aP1; /*0x692628*/
    if ( aP1 ) /*0x69262e*/
    {
      RadarClosestEnemy = FindRadarClosestEnemy(0, (int)aP1); /*0x692634*/
      return (*(int (**)(int, MouseClass *, unsigned int))(*(unsigned int *)RadarClosestEnemy + 116))( /*0x692640*/
               RadarClosestEnemy,
               v3,
               0);
    }
    else
    {
      v6 = aP0; /*0x69264d*/
      v7 = FindRadarClosestEnemy((int16_t *)aP0, 0); /*0x692655*/
      return (*(int (**)(int, MouseClass *, int, unsigned int))(*(unsigned int *)v7 + 112))(v7, v6, aP3_4, 0); /*0x692666*/
    }
  }
  v8 = aP1; /*0x692673*/
  v9 = 1; /*0x692677*/
  v10 = (CellStruct *)AbstractClass::IsTechno(aP1); /*0x69267b*/
  v11 = v10; /*0x692680*/
  if ( v10 && !v10[1].__pad_FC[86] ) /*0x692686*/
  {
    if ( *(unsigned int *)&v10->__pad_170[176] == 2 /*0x6926cf*/
      && (v28 = *(MouseClass **)(HouseClass_Player.field_0 + 48),
          v12 = (IUnknown *)(*(int (**)(CellStruct *, unsigned int *))(v10->field_0 + 72))(v10, v31),
          v13 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v12),
          !Cell::IsPassableOffset(v13, (IUnknown *)v28))
      || *(unsigned char *)((*(int (**)(CellStruct *))(v11->field_0 + 132))(v11) + 3226) )
    {
      v9 = 0; /*0x6926d9*/
    }
  }
  v14 = (int16_t *)aP0; /*0x6926db*/
  if ( !v8 /*0x692725*/
    || (*(int (**)(MouseClass *))(v8->field_0 + 44))(v8) != 6
    || v8->__pad_1D4[582]
    || v8->__pad_1D4[1305] != 15
    || (v29 = *(MouseClass **)(HouseClass_Player.field_0 + 48),
        v15 = (IUnknown *)(*(int (**)(CellStruct *, unsigned int *))(v11->field_0 + 72))(v11, v31),
        v16 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v15),
        Cell::IsPassableOffset(v16, (IUnknown *)v29)) )
  {
    if ( v9 ) /*0x692734*/
    {
      if ( v8 /*0x692766*/
        && (*(uint8_t (**)(MouseClass *))(v8->field_0 + 312))(v8)
        && ((*(int (**)(MouseClass *))(v8->field_0 + 44))(v8) != 6 || !v8->__pad_1D4[1299])
        && (!v11 || !v11[1].__pad_FC[16]) )
      {
        v30 = (IUnknown *)7; /*0x692770*/
      }
      v17 = (char *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v14); /*0x69277e*/
      if ( Radar::FindNearestRadarTarget( /*0x6927bc*/
             dword_89C3B0,
             (*v14 << 8) + 128,
             (v14[1] << 8) + 128,
             *(unsigned int *)&stru_B05488.__pad_220[24] * v17[283]) )
      {
        v30 = (IUnknown *)61; /*0x6927c5*/
      }
    }
  }
  if ( stru_87C374.__pad_14B0[12660] ) /*0x6927d4*/
  {
    if ( !v8 /*0x6927fb*/
      || !(*(int (**)(MouseClass *))(v8->field_0 + 60))(v8)
      || (v18 = (void *)(*(int (**)(MouseClass *))(v8->field_0 + 60))(v8),
          !(uint8_t)House::IsHumanPlayer(v18))
      || (v30 = (IUnknown *)10, !(*(uint8_t (**)(MouseClass *))(v8->field_0 + 148))(v8)) )
    {
      v30 = (IUnknown *)15; /*0x69280d*/
    }
  }
  if ( stru_87C374.__pad_14B0[12662] ) /*0x69281c*/
  {
    v30 = (IUnknown *)34; /*0x692820*/
    if ( v8 ) /*0x692828*/
    {
      if ( (*(int (**)(MouseClass *))(v8->field_0 + 60))(v8) ) /*0x69282e*/
      {
        v19 = (void *)(*(int (**)(MouseClass *))(v8->field_0 + 60))(v8); /*0x692839*/
        if ( (uint8_t)House::IsHumanPlayer(v19) ) /*0x69283e*/
        {
          if ( (*(int (**)(MouseClass *))(v8->field_0 + 44))(v8) == 6 ) /*0x692851*/
          {
            if ( (*(uint8_t (**)(MouseClass *))(v8->field_0 + 312))(v8) ) /*0x692857*/
            {
              if ( !(*(uint8_t (**)(MouseClass *))(v8->field_0 + 128))(v8) ) /*0x692865*/
              {
                v20 = *(unsigned int *)&v8->__pad_1D4[844]; /*0x69286f*/
                if ( *(unsigned char *)(v20 + 5450) ) /*0x692875*/
                {
                  if ( *(int *)(v20 + 3812) > 0 || *(unsigned char *)(v20 + 5491) ) /*0x692889*/
                    v30 = (IUnknown *)33; /*0x692893*/
                }
              }
            }
          }
        }
      }
    }
  }
  v21 = (MouseClass *)Waypoint::FindByCell((char *)HouseClass_Player.field_0, (IUnknown *)v14); /*0x6928a7*/
  if ( stru_87C374.__pad_14B0[12663] ) /*0x6928b0*/
  {
    v22 = Mouse::IsButtonDown(HouseClass_Player.__pad_5568[22868]) /*0x6928e4*/
       || Mouse::IsButtonDown(HouseClass_Player.__pad_5568[22872]);
    aP0 = (MouseClass *)-1; /*0x6928e8*/
    if ( v21 ) /*0x6928f0*/
      WaypointClass::FindOrCreate((char *)HouseClass_Player.field_0, v21, (IUnknown *)&aP0, (IUnknown *)&aP1); /*0x692903*/
    if ( *(unsigned int *)&stru_87C374.__pad_14B0[12672] ) /*0x69290f*/
    {
      v30 = (IUnknown *)48; /*0x692911*/
      goto LABEL_65; /*0x692919*/
    }
    if ( v22 ) /*0x692920*/
    {
      v23 = (IUnknown *)HouseClass_Player.field_0; /*0x692922*/
      if ( !v21 ) /*0x69292a*/
      {
LABEL_61:
        if ( *(unsigned int *)&v23->__pad_1D8[52] == -1 /*0x692996*/
          || !Radar::IsRadarTargetEligible((unsigned int *)v23)
          || (v30 = (IUnknown *)42,
              !LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)v14, (TechnoClass *)1)) )
        {
          v30 = (IUnknown *)43; /*0x6929a7*/
        }
        goto LABEL_65; /*0x6929a7*/
      }
      if ( aP0 != *(MouseClass **)(HouseClass_Player.field_0 + 524) ) /*0x692938*/
      {
LABEL_59:
        if ( v21 ) /*0x692970*/
        {
          v30 = (IUnknown *)46; /*0x692972*/
          goto LABEL_65; /*0x69297a*/
        }
        goto LABEL_61; /*0x692970*/
      }
      if ( Radar::IsRadarTargetEligible((unsigned int *)HouseClass_Player.field_0) /*0x692955*/
        && VectorClass::GetAtChecked(*(int **)(HouseClass_Player.field_0 + 4 * (unsigned int)aP0 + 528), (IUnknown *)v21) )
      {
        v30 = (IUnknown *)47; /*0x69295e*/
        goto LABEL_65; /*0x692966*/
      }
    }
    v23 = (IUnknown *)HouseClass_Player.field_0; /*0x692968*/
    goto LABEL_59; /*0x692968*/
  }
LABEL_65:
  if ( stru_87C374.__pad_14B0[12664] ) /*0x6929b6*/
    v30 = (IUnknown *)60; /*0x6929b8*/
  if ( !stru_87C374.__pad_14B0[12661] ) /*0x6929c7*/
    goto LABEL_81; /*0x6929c7*/
  if ( v8
    && (*(int (**)(MouseClass *))(v8->field_0 + 60))(v8)
    && (v24 = (void *)(*(int (**)(MouseClass *))(v8->field_0 + 60))(v8),
        (uint8_t)House::IsHumanPlayer(v24))
    && (*(uint8_t (**)(MouseClass *))(v8->field_0 + 152))(v8) )
  {
    if ( (*(int (**)(MouseClass *))(v8->field_0 + 44))(v8) == 6 )
    {
      v30 = (IUnknown *)((*(uint8_t (**)(MouseClass *))(v8->field_0 + 128))(v8) != 0 ? 14 : 12);
      goto LABEL_81; /*0x692a24*/
    }
  }
  else
  {
    v25 = v14[1] << 8; /*0x692a3e*/
    v31[0] = (*v14 << 8) + 128; /*0x692a41*/
    v31[1] = v25 + 128; /*0x692a51*/
    GroundHeight = 0; /*0x692a55*/
    GroundHeight = Cell::GetGroundHeight((IUnknown *)v31); /*0x692a66*/
    if ( !Cell::IsPassable((IUnknown *)v31) /*0x692aa3*/
      && !Game::Stub3((IUnknown *)v31)
      && *((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v14) + 17) != -1 )
    {
      if ( *(unsigned char *)(*(unsigned int *)(HouseClass_Player.field_38 /*0x692abc*/
                                + 4 * *((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v14) + 17))
                    + 680) )
      {
        if ( *((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v14) + 20) != -1 ) /*0x692ad4*/
        {
          v26 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v14); /*0x692adc*/
          v30 = (IUnknown *)12; /*0x692af4*/
          if ( (uint8_t)House::IsHumanPlayer(*(void **)&HouseClass_Array->__pad_0[4 * v26[20]]) ) /*0x692aed*/
            goto LABEL_81; /*0x692afc*/
        }
      }
    }
  }
  v30 = (IUnknown *)14; /*0x692afe*/
LABEL_81:
  if ( *(unsigned int *)&stru_87C374.__pad_14B0[12668] != -1 ) /*0x692b0e*/
  {
    v27 = (IUnknown *)(*(int (**)(unsigned int, int16_t *, MouseClass *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[20608] /*0x692b1d*/
                                                                                           + 4
                                                                                           * *(unsigned int *)&stru_87C374.__pad_14B0[12668])
                                                                             + 108))(
                        *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20608]
                                  + 4 * *(unsigned int *)&stru_87C374.__pad_14B0[12668]),
                        v14,
                        v8);
    if ( v27 ) /*0x692b22*/
      v30 = v27; /*0x692b24*/
  }
  if ( !v30 && v21 ) /*0x692b32*/
    v30 = (IUnknown *)44; /*0x692b34*/
  if ( *(unsigned int *)&stru_87C374.__pad_14B0[12652] ) /*0x692b43*/
    return 0; /*0x692b45*/
  else
    return (int)v30; /*0x692b51*/

}
}