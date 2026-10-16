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
#include "e4/classes/Surface_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/FogOfWar_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"

// 0x431090
namespace gamemd {  // G42.18 ns repair
int Radar::FindNearestRadarTarget(int a2, int a3, int a4)
{


  if ( this->q060 ) /*0x431099*/
  {
    Radar *p_Radar_field_0xC = this; // edi /*0x4310ab*/
    int v13; // [esp+18h] [ebp-18h]
    v13 = 0; /*0x4310ad*/
    Radar *v14; // [esp+1Ch] [ebp-14h]
    v14 = this; /*0x4310b5*/
    while ( 2 ) /*0x4310b9*/
    {
      int i; // esi
      for ( i = 0; i < 3; ++i ) /*0x4310b9*/
      {
        unsigned int *v7; // eax
        v7 = *(unsigned int **)p_Radar_field_0xC->__pad_000; /*0x4310bb*/
        if ( *(unsigned int *)p_Radar_field_0xC->__pad_000 ) /*0x4310bb*/
        {
          int v17; // [esp+28h] [ebp-8h]
          v17 = a3 - v7[1]; /*0x4310d6*/
          __asm { fild [esp+28h+var_8] } /*0x4310dc*/
          int v18; // [esp+2Ch] [ebp-4h]
          v18 = a4 - v7[2]; /*0x4310e0*/
          int v16; // [esp+24h] [ebp-Ch]
          v16 = a2 - *v7; /*0x4310e4*/
          __asm /*0x4310e8*/
          {
            fild [esp+28h+var_4]
            fild [esp+28h+var_C]
          }
          __asm
          {
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fld st(3)
            fmul st, st(4)
            faddp st(1), st
            fstp [esp+30h+var_30]; double
            fstp st
            fstp st
            fstp st
          }
          double v12; // [esp+0h] [ebp-30h]
          Math::Sqrt(v12); /*0x43110c*/
          double v4; // st7
          int v8; // eax
          LOWORD(v8) = Math::RoundToInt(v4); /*0x431114*/
          if ( v8 < 128 ) /*0x43111e*/
            return *(unsigned int *)&this->__pad_0[8 * v13 + 4 * i + 4 * v13]; /*0x431161*/
        }
        p_Radar_field_0xC = (Radar *)((char *)p_Radar_field_0xC + 4); /*0x431121*/
      }
      p_Radar_field_0xC = (gamemd::Radar *)(&v14->q00C); /*0x431132*/
      bool v10; // of
      v10 = __OFSUB__(v13 + 1, 8); /*0x431135*/
      bool v9 = v13 - 7 < 0; // sf /*0x431135*/
      ++v13; /*0x431138*/
      v14 = (Radar *)((char *)v14 + 12); /*0x43113c*/
      if ( v9 != v10 ) /*0x431140*/
        continue; /*0x431140*/
      break;
    }
  }
  return 0; /*0x431148*/

}
}  // G42.18 ns repair
// 0x4ADCD0
namespace gamemd {
void Radar::UpdateReveal(char a1, IUnknown * aP1)
{
  int v2; // ebx
  int v3; // edi
  int result; // eax
  int v5; // esi
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9[3]; // [esp+14h] [ebp-24h] BYREF
  int v10[3]; // [esp+20h] [ebp-18h] BYREF
  int v11[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = dword_A8EC88; /*0x4adcd4*/
  v3 = 0; /*0x4adcdb*/
  if ( dword_A8EC88 > 0 ) /*0x4adcdf*/
  {
    while ( 1 ) /*0x4adceb*/
    {
      result = (int)dword_A8EC7C; /*0x4adceb*/
      v5 = *((unsigned int *)dword_A8EC7C + v3); /*0x4adcf0*/
      if ( !v5 ) /*0x4adcf5*/
        goto LABEL_20; /*0x4adcf5*/
      (*((unsigned char *)&(result))) = *(unsigned char *)(v5 + 129); /*0x4adcfb*/
      if ( (unsigned char)result ) /*0x4add03*/
        goto LABEL_20; /*0x4add03*/
      result = (*(int (**)(unsigned int))(*(unsigned int *)v5 + 44))(*((unsigned int *)dword_A8EC7C + v3)); /*0x4add0d*/
      if ( result == 6 ) /*0x4add13*/
      {
        (*((unsigned char *)&(result))) = a1; /*0x4add15*/
        if ( a1 ) /*0x4add1b*/
          goto LABEL_20; /*0x4add1b*/
      }
      result = ((House *)(*(void **)(v5 + 540)))->IsHumanPlayer(); /*0x4add27*/
      if ( (unsigned char)result ) /*0x4add2e*/
        break; /*0x4add2e*/
      if ( (*(int (**)(int))(*(unsigned int *)v5 + 44))(v5) == 6 /*0x4addce*/
        && (*(((unsigned char *)&(dword_8871E0[1][2])) + (sizeof(dword_8871E0[1][2]) - 1)))
        && (uint8_t)HouseClass::IsAlliedWith(*(void **)(v5 + 540), dword_A83D4C) )
      {
        (*(void (**)(int, unsigned int, int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v5 + 1160))(v5, 0, aP1, 0, 0, 0); /*0x4adde4*/
        v10[0] = *(unsigned int *)(v5 + 156); /*0x4addf4*/
        v7 = *(unsigned int *)(v5 + 608); /*0x4addf8*/
        v10[1] = *(unsigned int *)(v5 + 160); /*0x4ade04*/
        v10[2] = *(unsigned int *)(v5 + 164); /*0x4ade18*/
        result = ((MapClass *)(&dword_87F7E8))->RevealArea2(v10, 0, v7 + 3, 0); /*0x4ade1c*/
      }
      else if ( (*(int (**)(int))(*(unsigned int *)v5 + 44))(v5) == 6 /*0x4ade4c*/
             && *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v5 + 132))(v5) + 1518)
             && !(uint8_t)((House *)(*(void **)(v5 + 540)))->IsHumanPlayer() )
      {
        (*(void (**)(int, unsigned int, unsigned int, int, void *, unsigned int))(*(unsigned int *)v5 + 1160))( /*0x4ade68*/
          v5,
          0,
          0,
          1,
          dword_A83D4C,
          0);
        v11[0] = *(unsigned int *)(v5 + 156); /*0x4ade78*/
        v8 = *(unsigned int *)(v5 + 608) + 3; /*0x4ade85*/
        v11[1] = *(unsigned int *)(v5 + 160); /*0x4ade88*/
        v11[2] = *(unsigned int *)(v5 + 164); /*0x4ade9c*/
        result = ((MapClass *)(&dword_87F7E8))->RevealArea2(v11, 0, v8, 0); /*0x4adea0*/
      }
      else
      {
        result = (*(int (**)(int))(*(unsigned int *)v5 + 132))(v5); /*0x4adeab*/
        if ( result->u32_CD1 ) /*0x4adeb1*/
          goto LABEL_19; /*0x4adeb9*/
      }
      LABEL_20:
      if ( ++v3 >= v2 ) /*0x4adec8*/
        return result; /*0x4adec8*/
    }
    (*((unsigned char *)&(result))) = *(unsigned char *)(v5 + 1051); /*0x4add30*/
    if ( !(unsigned char)result ) /*0x4add38*/
      goto LABEL_20; /*0x4add38*/
    (*(void (**)(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v5 + 1160))(v5, 0, 0, 0, 0, 0); /*0x4add4c*/
    v9[0] = *(unsigned int *)(v5 + 156); /*0x4add5c*/
    v6 = *(unsigned int *)(v5 + 608) + 3; /*0x4add69*/
    v9[1] = *(unsigned int *)(v5 + 160); /*0x4add6c*/
    v9[2] = *(unsigned int *)(v5 + 164); /*0x4add78*/
    ((MapClass *)(&dword_87F7E8))->RevealArea2(v9, 0, v6, 0); /*0x4add84*/
    result = (*(int (**)(int))(*(unsigned int *)v5 + 132))(v5); /*0x4add8d*/
    if ( !result->u32_CD1 ) /*0x4add93*/
      goto LABEL_20; /*0x4add9b*/
    LABEL_19:
    result = (*(int (**)(int))(*(unsigned int *)v5 + 1044))(v5); /*0x4adebb*/
    goto LABEL_20; /*0x4adebf*/
  }
  return result; /*0x4aded0*/
}
}
// 0x5090F0
namespace gamemd {
int Radar::IsRadarTargetEligible()
{


  void *Radar_field_0x20C; // eax
  Radar_field_0x20C = (void *)(this->q20C); /*0x5090f0*/
  if ( (unsigned int)Radar_field_0x20C >= 0xC ) /*0x5090f8*/
    return 0; /*0x50912a*/
  int v2; // eax
  v2 = *((unsigned int *)this + (unsigned int)Radar_field_0x20C + 132); /*0x5090ff*/
  return *(unsigned int *)(v2 + 56) < *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 144) /*0x509126*/
  && *(unsigned int *)(v2 + 36) == -1;

}
}
// 0x5824A0
namespace gamemd {
void* Radar::ProcessSubzone(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5)
{

  int v6; // ebp
  int v7; // ebx
  int v8; // esi
  int v9; // edi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
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
  __int64 v31; // rax
  __int64 v32; // rax
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
  int v47; // ebp
  int v48; // eax
  int v49; // ebx
  int v50; // ecx
  __int16 v51; // di
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
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
  int v68; // esi
  int v69; // ecx
  int v70; // edx
  int v71; // eax
  __int16 *v72; // ebp
  __int64 v73; // rax
  __int64 v74; // rax
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
  __int16 v95[2]; // [esp+24h] [ebp-50h] BYREF
  int v96; // [esp+28h] [ebp-4Ch]
  int v97; // [esp+2Ch] [ebp-48h]
  int v98; // [esp+30h] [ebp-44h]
  int v99; // [esp+34h] [ebp-40h]
  int v100; // [esp+38h] [ebp-3Ch]
  __int16 v101[2]; // [esp+3Ch] [ebp-38h] BYREF
  unsigned int *v102; // [esp+40h] [ebp-34h]
  int v103; // [esp+44h] [ebp-30h]
  int v104; // [esp+48h] [ebp-2Ch] BYREF
  __int16 v105[2]; // [esp+4Ch] [ebp-28h] BYREF
  int v106; // [esp+50h] [ebp-24h]
  __int16 v107[2]; // [esp+54h] [ebp-20h] BYREF
  __int16 v108[2]; // [esp+58h] [ebp-1Ch] BYREF
  int v109; // [esp+5Ch] [ebp-18h]
  int v110; // [esp+60h] [ebp-14h]
  int v111; // [esp+64h] [ebp-10h]
  int v112; // [esp+6Ch] [ebp-8h]
  int v113; // [esp+70h] [ebp-4h]
  int v114; // [esp+78h] [ebp+4h]
  __int16 *v115; // [esp+88h] [ebp+14h]

  v6 = (int)(aP1); /*0x5824a5*/
  v98 = aP1->u32_6; /*0x5824b3*/
  v7 = (int)(aP1); /*0x5824be*/
  v8 = (int)(aP1); /*0x5824c0*/
  v9 = (int)(*aP5); /*0x5824c6*/
  v115 = aP5->q004; /*0x5824cd*/
  v112 = 0; /*0x5824d4*/
  LOBYTE(v113) = 0; /*0x5824dc*/
  v10 = (int)(*aP4); /*0x5824e4*/
  v106 = (int)(aP4[1]); /*0x5824e6*/
  v11 = (int)(aP4[2]); /*0x5824ea*/
  v12 = (int)(aP4[3]); /*0x5824ed*/
  v97 = -1; /*0x5824f0*/
  v96 = v9; /*0x5824fc*/
  v100 = v11 + v10 - 1; /*0x582500*/
  v94 = v9; /*0x582508*/
  v99 = v10; /*0x58250c*/
  v111 = v12 + v106 - 1; /*0x582518*/
  v102 = *(unsigned int **)&this->__pad_64[4 * aP2 + 28]; /*0x582527*/
  v13 = *(unsigned __int8 *)(aP1 + 8); /*0x58252d*/
  while ( v9 >= v10 ) /*0x582538*/
  {
    v14 = *(unsigned __int8 *)(v7 + 8) - v13; /*0x582541*/
    if ( (int)((HIDWORD(v14) ^ v14) - HIDWORD(v14)) >= 2 ) /*0x582549*/
      break; /*0x582549*/
    *(unsigned short *)(v7 + 2 * aP2) = aP3; /*0x582556*/
    v13 = *(unsigned __int8 *)(v7 + 8); /*0x58255a*/
    v15 = *(__int16 *)(v7 - 4); /*0x58255d*/
    v7 -= 10; /*0x582565*/
    --v9; /*0x582568*/
    if ( v15 != v98 ) /*0x58256b*/
      break; /*0x58256b*/
    v10 = v99; /*0x582532*/
  }
  v96 = v9; /*0x582571*/
  v89 = *(__int16 *)(v7 + 2 * aP2); /*0x58257b*/
  if ( v89 > 0 ) /*0x58257f*/
  {
    v16 = *(unsigned __int8 *)(v7 + 8) - v13; /*0x58258c*/
    if ( (int)((HIDWORD(v16) ^ v16) - HIDWORD(v16)) < 2 && v89 != -1 ) /*0x58259f*/
    {
      v101[1] = (__int16)v115; /*0x5825b1*/
      v101[0] = v9; /*0x5825bd*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v101, 1) ) /*0x5825c2*/
      {
        v101[1] = (__int16)v115; /*0x5825de*/
        v101[0] = v9 + 1; /*0x5825ea*/
        if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v101, 1) ) /*0x5825ef*/
        {
          v17 = (unsigned __int16)aP3 | (v89 << 16); /*0x582612*/
          LOBYTE(v113) = 0; /*0x58261a*/
          v18 = *(unsigned int *)(*v102 + 24 * (aP3 & 0xF | (16 * (v89 & 0xF))) + 16); /*0x58262a*/
          v19 = *v102 + 24 * (aP3 & 0xF | (16 * (v89 & 0xF))); /*0x58262e*/
          v20 = *(unsigned int **)(v19 + 4); /*0x582631*/
          v21 = v18 - 1; /*0x582635*/
          if ( v18 - 1 < 0 ) /*0x58263a*/
          {
            LABEL_14:
            v22 = *(unsigned int *)(v19 + 8); /*0x582646*/
            if ( v18 < v22 /*0x58266a*/
              || (*(unsigned char *)(v19 + 13) || !v22)
              && (v23 = *(unsigned int *)(v19 + 20), v23 > 0)
              && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v19 + 8))(v19, v22 + v23, 0) )
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
          v6 = (int)(aP1); /*0x582693*/
          v9 = v96; /*0x582697*/
          v97 = v89; /*0x58269b*/
        }
      }
    }
  }
  v30 = *(unsigned __int8 *)(v6 + 8); /*0x5826a9*/
  if ( v6->u32_6 == v98 ) /*0x5826ae*/
  {
    do /*0x5826f5*/
    {
      if ( v94 > v100 ) /*0x5826ba*/
        break; /*0x5826ba*/
      v31 = *(unsigned __int8 *)(v8 + 8) - v30; /*0x5826c3*/
      if ( (int)((HIDWORD(v31) ^ v31) - HIDWORD(v31)) >= 2 ) /*0x5826cb*/
        break; /*0x5826cb*/
      *(unsigned short *)(v8 + 2 * aP2) = aP3; /*0x5826da*/
      v30 = *(unsigned __int8 *)(v8 + 8); /*0x5826e0*/
      v8 += 10; /*0x5826e7*/
      ++v94; /*0x5826eb*/
    }
    while ( v8->u32_6 == v98 ); /*0x5826f5*/
  }
  v90 = *(__int16 *)(v8 + 2 * aP2); /*0x582701*/
  if ( v90 > 0 ) /*0x582705*/
  {
    v32 = *(unsigned __int8 *)(v8 + 8) - v30; /*0x582712*/
    if ( (int)((HIDWORD(v32) ^ v32) - HIDWORD(v32)) < 2 && v90 != v97 ) /*0x58272a*/
    {
      v101[0] = v94; /*0x582741*/
      v101[1] = (__int16)v115; /*0x58274d*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v101, 1) ) /*0x582752*/
      {
        v101[0] = v94 - 1; /*0x582770*/
        v101[1] = (__int16)v115; /*0x58277c*/
        if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v101, 1) ) /*0x582781*/
        {
          v33 = (unsigned __int16)aP3 | (v90 << 16); /*0x5827a8*/
          LOBYTE(v113) = 0; /*0x5827b2*/
          v34 = *v102 + 24 * (aP3 & 0xF | (16 * (v90 & 0xF))); /*0x5827bc*/
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
              && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v34 + 8))(v34, v39 + v38, 0) )
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
          v6 = (int)(aP1); /*0x582824*/
          v9 = v96; /*0x582828*/
          v97 = v90; /*0x58282c*/
        }
      }
    }
  }
  v46 = *&this->u32_F8; /*0x58284b*/
  v110 = (v8 - v6) / 10 - 1; /*0x582851*/
  v109 = v46 + *&this->u32_F4 + 1; /*0x58285f*/
  *(unsigned int *)v101 = 10 * v109; /*0x582868*/
  v47 = v7 - 10 * v109; /*0x58286c*/
  v48 = v7 + 10 * v109; /*0x58286e*/
  v49 = v9; /*0x582870*/
  v114 = v48; /*0x582872*/
  v95[0] = 0; /*0x582878*/
  v95[1] = 0; /*0x58287d*/
  if ( v9 > v94 ) /*0x582886*/
    return (void *)(v110); /*0x582886*/
  do /*0x582aca*/
  {
    v50 = *(__int16 *)(v47 + 2 * aP2); /*0x582892*/
    v91 = v50; /*0x582897*/
    if ( v49 == v9 ) /*0x58289b*/
    {
      v51 = v49; /*0x5828a5*/
      HIWORD(v103) = (unsigned short)v115; /*0x5828a7*/
      LOWORD(v103) = v49 + 1; /*0x5828b3*/
      *(unsigned int *)v95 = v103; /*0x5828c0*/
      v52 = v47 + 2 * (5 * v109 + 5); /*0x5828c4*/
    }
    else
    {
      v51 = v49; /*0x5828ce*/
      if ( v49 >= v94 ) /*0x5828d2*/
      {
        v105[0] = v49 - 1; /*0x582902*/
        v105[1] = (__int16)v115; /*0x582907*/
        *(unsigned int *)v95 = *(unsigned int *)v105; /*0x582914*/
        v52 = *(unsigned int *)v101 + v47 - 10; /*0x582918*/
      }
      else
      {
        LOWORD(v104) = v49; /*0x5828dc*/
        HIWORD(v104) = (unsigned short)v115; /*0x5828e1*/
        *(unsigned int *)v95 = v104; /*0x5828ee*/
        v52 = *(unsigned int *)v101 + v47; /*0x5828f2*/
      }
    }
    if ( v50 || (int)v115 <= v106 || v49 < v99 || v49 > v100 ) /*0x582939*/
    {
      if ( v50 != (unsigned __int16)aP3 && v50 != v97 ) /*0x5829ad*/
      {
        if ( v50 ) /*0x5829b5*/
        {
          v54 = *(unsigned __int8 *)(v52 + 8) - *(unsigned __int8 *)(v47 + 8); /*0x5829c9*/
          if ( (int)((HIDWORD(v54) ^ v54) - HIDWORD(v54)) < 2 ) /*0x5829d1*/
          {
            if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v95, 1) ) /*0x5829e2*/
            {
              v108[1] = (unsigned short)v115 - 1; /*0x5829fd*/
              v108[0] = v51; /*0x582a07*/
              if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v108, 1) ) /*0x582a0c*/
              {
                v55 = (unsigned __int16)aP3 | (v91 << 16); /*0x582a26*/
                if ( v49 < v99 || (LOBYTE(v113) = 0, v49 > v100) ) /*0x582a37*/
                  LOBYTE(v113) = 1; /*0x582a39*/
                v56 = *v102 + 24 * (aP3 & 0xF | (16 * (v91 & 0xF))); /*0x582a52*/
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
                    && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v56 + 8))(v56, v61 + v60, 0) )
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
    }
    else if ( *(__int16 *)(v47 + 6) == v98 ) /*0x582943*/
    {
      v53 = *(unsigned __int8 *)(v52 + 8) - *(unsigned __int8 *)(v47 + 8); /*0x582957*/
      if ( (int)((HIDWORD(v53) ^ v53) - HIDWORD(v53)) < 2 ) /*0x58295f*/
      {
        v107[0] = v51; /*0x58297f*/
        v107[1] = (unsigned short)v115 - 1; /*0x582984*/
        (this)->ProcessSubzone(v47, aP2, aP3, aP4, v107); /*0x582989*/
        goto LABEL_73; /*0x58298e*/
      }
    }
    v47 += 10; /*0x582abc*/
    ++v49; /*0x582abf*/
    LABEL_73:
    v9 = v96; /*0x582ac0*/
  }
  while ( v49 <= v94 ); /*0x582aca*/
  if ( v96 <= v94 ) /*0x582ad2*/
  {
    v68 = v114; /*0x582ad8*/
    do /*0x582ae6*/
    {
      v69 = *(__int16 *)(v68 + 2 * aP2); /*0x582ae6*/
      v92 = v69; /*0x582aea*/
      if ( v9 == v96 ) /*0x582aee*/
      {
        v108[0] = v9 + 1; /*0x582af9*/
        v108[1] = (__int16)v115; /*0x582b08*/
        v70 = *(unsigned int *)v108; /*0x582b0d*/
        v71 = v68 - *&v101->u32_28; /*0x582b11*/
      }
      else
      {
        if ( v9 < v94 ) /*0x582b1a*/
        {
          v72 = v115; /*0x582b20*/
          v107[0] = v9; /*0x582b29*/
          v71 = v68 - *(unsigned int *)v101; /*0x582b2e*/
          v107[1] = (__int16)v115; /*0x582b30*/
          *(unsigned int *)v95 = *(unsigned int *)v107; /*0x582b39*/
          goto LABEL_82; /*0x582b3d*/
        }
        v71 = v68 - 2 * (5 * v109 + 5); /*0x582b4d*/
        LOWORD(v106) = v9 - 1; /*0x582b52*/
        HIWORD(v106) = (unsigned short)v115; /*0x582b5f*/
        v70 = v106; /*0x582b64*/
      }
      v72 = v115; /*0x582b68*/
      *(unsigned int *)v95 = v70; /*0x582b6f*/
      LABEL_82:
      if ( v69 || (int)v72 >= v111 || v9 < v99 || v9 > v100 ) /*0x582b87*/
      {
        if ( v69 != (unsigned __int16)aP3 && v69 != v97 ) /*0x582bfa*/
        {
          if ( v69 ) /*0x582c02*/
          {
            v74 = *(unsigned __int8 *)(v114 + 8) - *(unsigned __int8 *)(v71 + 8); /*0x582c18*/
            if ( (int)((HIDWORD(v74) ^ v74) - HIDWORD(v74)) < 2 ) /*0x582c20*/
            {
              if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v95, 1) ) /*0x582c33*/
              {
                LOWORD(v104) = v9; /*0x582c4a*/
                HIWORD(v104) = (unsigned short)v72 + 1; /*0x582c4f*/
                if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&v104, 1) ) /*0x582c54*/
                {
                  v75 = (unsigned __int16)aP3 | (v92 << 16); /*0x582c6e*/
                  if ( v9 < v99 || (LOBYTE(v113) = 0, v9 > v100) ) /*0x582c7f*/
                    LOBYTE(v113) = 1; /*0x582c81*/
                  v76 = *v102 + 24 * (aP3 & 0xF | (16 * (v92 & 0xF))); /*0x582c9c*/
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
                      && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v76 + 8))(v76, v81 + v80, 0) )
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
        }
        ++v9; /*0x582d09*/
        v114 += 10; /*0x582d0a*/
        v68 = v114; /*0x582d0e*/
      }
      else if ( *(__int16 *)(v68 + 6) == v98 /*0x582ba7*/
             && (v73 = *(unsigned __int8 *)(v68 + 8) - *(unsigned __int8 *)(v71 + 8),
                 (int)((HIDWORD(v73) ^ v73) - HIDWORD(v73)) < 2) )
      {
        v105[0] = v9; /*0x582bc3*/
        v105[1] = (unsigned short)v72 + 1; /*0x582bc8*/
        (this)->ProcessSubzone(v68, aP2, aP3, aP4, v105); /*0x582bcd*/
      }
      else
      {
        v68 += 10; /*0x582bd7*/
        ++v9; /*0x582bda*/
        v114 = v68; /*0x582bdb*/
      }
    }
    while ( v9 <= v94 ); /*0x582ae6*/
  }
  return (void *)(v110); /*0x582d1e*/

}
}
// 0x584550
namespace gamemd {
AbstractClass * * Radar::Update(int16_t *aP1, void *a2, void *a3, void *a4)
{

  Radar *v2; // ebx
  int v3; // ebp
  int v4; // ecx
  int v5; // edi
  int v6; // edi
  unsigned int *v7; // esi
  int v8; // eax
  int v9; // edi
  int v10; // edx
  int v11; // eax
  int v12; // esi
  int v13; // edi
  __int16 v14; // bp
  int v15; // edx
  int v16; // eax
  unsigned short *v17; // ecx
  int v18; // ecx
  int v19; // ebp
  unsigned int *v20; // edi
  int v21; // eax
  int v22; // esi
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  unsigned int *v26; // edi
  int v27; // edx
  int v28; // ebp
  int v29; // esi
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // edi
  int v36; // eax
  int v37; // ecx
  int v38; // ecx
  int v39; // edi
  int v40; // ecx
  __int16 v41; // ax
  bool v42; // zf
  int v43; // esi
  int v44; // ecx
  int *v45; // ecx
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
  int v70; // ebp
  int v71; // edi
  Radar *v72; // ecx
  int v73; // eax
  int v74; // esi
  int v75; // eax
  int v76; // esi
  char *v77; // edi
  int v78; // ecx
  char *v79; // edx
  int v80; // esi
  __int16 *v81; // eax
  int v82; // edi
  __int16 v83; // bp
  int v84; // ecx
  int v85; // [esp+20h] [ebp-94h]
  int v86; // [esp+20h] [ebp-94h]
  int v87; // [esp+20h] [ebp-94h]
  int v88; // [esp+20h] [ebp-94h]
  int v89; // [esp+24h] [ebp-90h]
  int v90; // [esp+24h] [ebp-90h]
  int v91; // [esp+24h] [ebp-90h]
  int v92; // [esp+24h] [ebp-90h]
  char *v93; // [esp+28h] [ebp-8Ch]
  int v94; // [esp+28h] [ebp-8Ch]
  char *Radar_field_0x60; // [esp+28h] [ebp-8Ch]
  unsigned char *v96; // [esp+28h] [ebp-8Ch]
  int i; // [esp+2Ch] [ebp-88h]
  unsigned int *v98; // [esp+30h] [ebp-84h]
  int v99; // [esp+30h] [ebp-84h]
  int v100; // [esp+30h] [ebp-84h]
  int v101; // [esp+30h] [ebp-84h]
  int v102; // [esp+34h] [ebp-80h]
  char *v103; // [esp+34h] [ebp-80h]
  int v104; // [esp+38h] [ebp-7Ch] BYREF
  int v105; // [esp+3Ch] [ebp-78h]
  int v106; // [esp+40h] [ebp-74h]
  int v107; // [esp+44h] [ebp-70h]
  __int16 v108[2]; // [esp+48h] [ebp-6Ch] BYREF
  WordVector v109; // [esp+4Ch] [ebp-68h] BYREF
  void *v110; // [esp+50h] [ebp-64h]
  int v111; // [esp+54h] [ebp-60h]
  char v112; // [esp+59h] [ebp-5Bh]
  int v113; // [esp+5Ch] [ebp-58h]
  int v114; // [esp+60h] [ebp-54h]
  Radar *v115; // [esp+64h] [ebp-50h]
  __int16 v116[2]; // [esp+68h] [ebp-4Ch] BYREF
  __int16 v117[2]; // [esp+6Ch] [ebp-48h] BYREF
  __int16 v118[2]; // [esp+70h] [ebp-44h] BYREF
  __int16 v119[2]; // [esp+74h] [ebp-40h] BYREF
  __int16 v120[2]; // [esp+78h] [ebp-3Ch] BYREF
  unsigned int *v121; // [esp+7Ch] [ebp-38h]
  VectorClass v122; // [esp+80h] [ebp-34h] BYREF
  int v123; // [esp+90h] [ebp-24h]
  int v124; // [esp+94h] [ebp-20h]
  int v125; // [esp+98h] [ebp-1Ch]
  int v126; // [esp+9Ch] [ebp-18h]
  int v127; // [esp+A0h] [ebp-14h]
  int v128; // [esp+A8h] [ebp-Ch]
  int v129; // [esp+B0h] [ebp-4h]

  v2 = this; /*0x584561*/
  v115 = this; /*0x584566*/
  if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, aP1, 1) )
  {
    for ( i = 2; ; --i ) /*0x584577*/
    {
      v3 = i; /*0x58457f*/
      v4 = *aP1; /*0x584594*/
      v106 = 1 << (i + 1); /*0x584599*/
      v5 = aP1[1]; /*0x5845a0*/
      v107 = v106; /*0x5845a6*/
      v104 = v4 - v4 % v106; /*0x5845af*/
      v105 = v5 - v5 % v106; /*0x5845b9*/
      v6 = 0; /*0x5845bd*/
      WordVector::Constructor(&v109, 0, 0); /*0x5845c1*/
      v7 = *(unsigned int **)&v2->__pad_64[4 * i + 28]; /*0x5845c6*/
      v109 = (WordVector)&vt_DynamicVectorClass; /*0x5845cd*/
      v114 = 10; /*0x5845d5*/
      v113 = 0; /*0x5845dd*/
      v8 = v7[2]; /*0x5845e1*/
      v121 = v7; /*0x5845e4*/
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
      v103 = &v2->__pad_64[24 * i + 40]; /*0x584623*/
      v10 = v105; /*0x584627*/
      v89 = v105; /*0x58462d*/
      v11 = v104; /*0x584633*/
      if ( v105 < v105 + v107 ) /*0x584637*/
      {
        while ( 1 ) /*0x584640*/
        {
          v12 = v11; /*0x584640*/
          if ( v11 >= v9 + v11 ) /*0x584644*/
            goto LABEL_23; /*0x584644*/
          do /*0x584723*/
          {
            v118[0] = v12; /*0x584656*/
            v118[1] = v89; /*0x58465b*/
            v13 = *&v2->q070 + 10 * CellToTileIndexMap((ObjectClass *)v2, v118); /*0x58466f*/
            v14 = *(unsigned short *)(v13 + 2 * i); /*0x584672*/
            if ( v14 ) /*0x584679*/
            {
              v15 = v113; /*0x58467b*/
              v16 = v113 - 1; /*0x58467f*/
              if ( v113 - 1 >= 0 ) /*0x584684*/
              {
                v17 = (unsigned short *)((char *)v110 + 2 * v16); /*0x58468a*/
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
                if ( v113 < v111 ) /*0x5846a5*/
                  goto LABEL_20; /*0x5846a5*/
                if ( (v112 || !v111) /*0x5846c8*/
                  && v114 > 0
                  && (*(unsigned __int8 (**)(WordVector *, int, unsigned int))(*(unsigned int *)&v109 + 8))(
                       &v109,
                       v114 + v111,
                       0) )
                {
                  v15 = v113; /*0x5846cf*/
                  LABEL_20:
                  v113 = v15 + 1; /*0x5846d3*/
                  *((unsigned short *)v110 + v15) = v14; /*0x5846de*/
                }
              }
            }
            v120[0] = v12; /*0x5846e2*/
            *(unsigned short *)(v13 + 2 * i) = 0; /*0x5846f7*/
            v120[1] = v89; /*0x5846fd*/
            ++v12; /*0x58470a*/
            *(unsigned short *)(v13 + 6) = *(unsigned short *)(*&v2->q068 /*0x584712*/
            + 4 * CellToTileIndexMap((ObjectClass *)v2, v120)
            + 2);
            v9 = v106; /*0x584716*/
            v11 = v104; /*0x58471a*/
          }
          while ( v12 < v106 + v104 ); /*0x584723*/
          v10 = v105; /*0x584729*/
          LABEL_23:
          if ( ++v89 >= v10 + v107 ) /*0x58473e*/
          {
            v3 = i; /*0x584744*/
            break; /*0x584744*/
          }
        }
      }
      v18 = v113 - 1; /*0x584748*/
      v90 = v113 - 1; /*0x58474f*/
      if ( v113 - 1 >= 0 ) /*0x584753*/
      {
        v93 = &v2->__pad_64[24 * v3 + 44]; /*0x584760*/
        while ( 1 ) /*0x584776*/
        {
          v19 = *((unsigned __int16 *)v110 + v18); /*0x584776*/
          v20 = (unsigned int *)(*(unsigned int *)v93 + 36 * v19); /*0x584782*/
          v98 = v20; /*0x584785*/
          v21 = v20[4] - 1; /*0x58478c*/
          v85 = v21; /*0x58478d*/
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
              if ( --v85 < 0 ) /*0x5847fe*/
                break; /*0x5847fe*/
              v21 = v85; /*0x584795*/
            }
          }
          (*(void (**)(unsigned int *))(*v20 + 12))(v20); /*0x584804*/
          if ( --v90 < 0 ) /*0x584810*/
            break; /*0x584810*/
          v18 = v90; /*0x584766*/
        }
        v9 = v106; /*0x584816*/
        v11 = v104; /*0x58481a*/
        v10 = v105; /*0x58481e*/
      }
      v28 = v10; /*0x584826*/
      v86 = *(unsigned int *)&v2->__pad_64[4 * i + 16]; /*0x58482c*/
      if ( v10 < v10 + v107 ) /*0x584838*/
        break; /*0x584838*/
      LABEL_73:
      *(unsigned int *)&v2->__pad_64[4 * i + 16] = v86; /*0x584ab8*/
      v43 = (int)v2->Radar_field_0x60 - 1; /*0x584ac7*/
      if ( v43 >= 0 ) /*0x584ac8*/
      {
        v44 = 16 * v43; /*0x584ad0*/
        v100 = 16 * v43; /*0x584ad4*/
        Radar_field_0x60 = (char *)v2->Radar_field_0x60; /*0x584ad8*/
        do /*0x584b53*/
        {
          v45 = (int *)(*&v2->q054 + v44); /*0x584adc*/
          v46 = *(__int16 *)v45; /*0x584adf*/
          if ( v46 >= v11 && v46 < v9 + v11 && (v47 = *((__int16 *)v45 + 1), v47 >= v10) && v47 < v10 + v107 /*0x584b1e*/
            || (v48 = *((__int16 *)v45 + 2), v48 >= v11)
            && v48 < v9 + v11
            && (v49 = *((__int16 *)v45 + 3), v49 >= v10)
            && v49 < v10 + v107 )
          {
            if ( *((unsigned char *)v45 + 8) ) /*0x584b20*/
            {
              RadarClass::RenderBlips((RadarClass *)v2, v45, i); /*0x584b2e*/
              v9 = v106; /*0x584b33*/
              v11 = v104; /*0x584b37*/
              v10 = v105; /*0x584b3b*/
            }
          }
          v44 = v100 - 16; /*0x584b47*/
          v42 = Radar_field_0x60 == 1; /*0x584b4a*/
          v100 -= 16; /*0x584b4b*/
          --Radar_field_0x60; /*0x584b4f*/
        }
        while ( !v42 ); /*0x584b53*/
      }
      v50 = 0; /*0x584b55*/
      v87 = 0; /*0x584b57*/
      do /*0x584c85*/
      {
        if ( *(int *)(v50 + *v121 + 16) > 0 ) /*0x584b6b*/
        {
          v101 = *(unsigned int *)(v50 + *v121 + 16); /*0x584b74*/
          v96 = (unsigned char *)(*(unsigned int *)(*v121 + v50 + 4) + 8); /*0x584b7b*/
          do /*0x584c6a*/
          {
            v51 = *v96; /*0x584b86*/
            v52 = (unsigned __int16)*((unsigned int *)v96 - 1); /*0x584b95*/
            v53 = (unsigned __int16)HIWORD(*((unsigned int *)v96 - 1)); /*0x584b9b*/
            v54 = *((unsigned int *)v103 + 1); /*0x584ba1*/
            LOBYTE(v128) = *v96; /*0x584ba4*/
            v55 = *(unsigned int *)(v54 + 36 * v52 + 8); /*0x584bae*/
            v56 = v54 + 36 * v52; /*0x584bb2*/
            if ( *(unsigned int *)(v56 + 16) < v55 /*0x584bd8*/
              || (*(unsigned char *)(v56 + 13) || !v55)
              && (v57 = *(unsigned int *)(v56 + 20), v57 > 0)
              && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v56 + 8))(v56, v57 + v55, 0) )
            {
              v58 = *(unsigned int *)(v56 + 16); /*0x584bdf*/
              v59 = *(unsigned int *)(v56 + 4); /*0x584be2*/
              *(unsigned int *)(v56 + 16) = v58 + 1; /*0x584be8*/
              v60 = v128; /*0x584beb*/
              *(unsigned int *)(v59 + 8 * v58) = v53; /*0x584bf2*/
              *(unsigned int *)(v59 + 8 * v58 + 4) = v60; /*0x584bf5*/
            }
            LOBYTE(v129) = v51; /*0x584c01*/
            v61 = *((unsigned int *)v103 + 1); /*0x584c08*/
            v62 = *(unsigned int *)(v61 + 36 * v53 + 8); /*0x584c0b*/
            v63 = v61 + 36 * v53; /*0x584c0f*/
            if ( *(unsigned int *)(v63 + 16) < v62 /*0x584c35*/
              || (*(unsigned char *)(v63 + 13) || !v62)
              && (v64 = *(unsigned int *)(v63 + 20), v64 > 0)
              && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v63 + 8))(v63, v64 + v62, 0) )
            {
              v65 = *(unsigned int *)(v63 + 16); /*0x584c3c*/
              v66 = *(unsigned int *)(v63 + 4); /*0x584c3f*/
              *(unsigned int *)(v63 + 16) = v65 + 1; /*0x584c45*/
              v67 = v129; /*0x584c48*/
              *(unsigned int *)(v66 + 8 * v65) = v52; /*0x584c4f*/
              *(unsigned int *)(v66 + 8 * v65 + 4) = v67; /*0x584c52*/
            }
            v42 = v101 == 1; /*0x584c61*/
            v96 += 12; /*0x584c62*/
            --v101; /*0x584c66*/
          }
          while ( !v42 ); /*0x584c6a*/
          v50 = v87; /*0x584c70*/
          v2 = v115; /*0x584c74*/
        }
        v50 += 24; /*0x584c78*/
        v87 = v50; /*0x584c81*/
      }
      while ( v50 < 6144 ); /*0x584c85*/
      v109 = (WordVector)&vt_VectorClass; /*0x584c93*/
      if ( v110 && v112 ) /*0x584ca3*/
      {
        __3_YAXPAX_Z(v110); /*0x584ca6*/
        v110 = 0; /*0x584cae*/
      }
      v112 = 0; /*0x584cb6*/
      v68 = i - 1 < 0; /*0x584cbb*/
      v111 = 0; /*0x584cbc*/
      if ( v68 ) /*0x584cc4*/
      {
        v69 = aP1[1]; /*0x584ce3*/
        v70 = *aP1 - *aP1 % 8; /*0x584ce9*/
        v104 = v70; /*0x584cf2*/
        v71 = v69 - v69 % 8; /*0x584cfd*/
        v92 = v71; /*0x584cff*/
        v72 = &v71->u32_8; /*0x584d03*/
        v115 = &v71->u32_8; /*0x584d08*/
        if ( !__OFSUB__(v71, v71 + 8) ) /*0x584d0c*/
        {
          v73 = v70 + 8; /*0x584d12*/
          do /*0x584e25*/
          {
            v74 = v70; /*0x584d15*/
            v88 = v70; /*0x584d19*/
            if ( v70 < v73 ) /*0x584d1d*/
            {
              do /*0x584e14*/
              {
                v108[0] = v74; /*0x584d2c*/
                v108[1] = v71; /*0x584d31*/
                if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)v2, v108, 1) ) /*0x584d36*/
                {
                  v75 = (__int16)v74 /*0x584d5c*/
                  + (__int16)v71 * (*&v2->u32_F8 + *&v2->u32_F4 + 1);
                  if ( v75 >= 0 ) /*0x584d5e*/
                  {
                    v78 = *&v2->q06C; /*0x584dc6*/
                    if ( v75 >= v78 ) /*0x584dcb*/
                      v75 = v78 - 1; /*0x584dcd*/
                  }
                  else
                  {
                    v75 = 0; /*0x584d60*/
                  }
                  v79 = &v2->q090; /*0x584dd6*/
                  v80 = 2; /*0x584ddc*/
                  v81 = (__int16 *)(*&v2->q070 + 10 * v75); /*0x584de1*/
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
                  v74 = v88; /*0x584e06*/
                }
                ++v74; /*0x584e0a*/
                v73 = v70 + 8; /*0x584e0b*/
                v88 = v74; /*0x584e10*/
              }
              while ( v74 < v70 + 8 ); /*0x584e14*/
              v72 = v115; /*0x584e1a*/
            }
            v92 = ++v71; /*0x584e21*/
          }
          while ( v71 < (int)v72 ); /*0x584e25*/
        }
        (&g_AudioInitFlag)->AllocArrays(); /*0x584e30*/
        return; /*0x584e30*/
      }
    }
    while ( 1 ) /*0x584841*/
    {
      v29 = v11; /*0x584841*/
      if ( v11 < v9 + v11 ) /*0x584845*/
        break; /*0x584845*/
      LABEL_72:
      if ( ++v28 >= v10 + v107 ) /*0x584ab2*/
        goto LABEL_73; /*0x584ab2*/
    }
    v94 = 36 * v86; /*0x584855*/
    while ( 1 )
    {
      v117[0] = v29; /*0x584862*/
      v117[1] = v28; /*0x584867*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)v2, v117, 1) )
      {
        v116[0] = v29; /*0x584880*/
        v116[1] = v28; /*0x584885*/
        v30 = ((Cell *)v2)->CoordToIndex(v116); /*0x58488a*/
        if ( v30 >= 0 ) /*0x584891*/
        {
          v31 = *&v2->q06C; /*0x584897*/
          if ( v30 >= v31 ) /*0x58489c*/
            v30 = v31 - 1; /*0x58489e*/
        }
        else
        {
          v30 = 0; /*0x584893*/
        }
        v32 = *&v2->q070; /*0x5848a1*/
        v119[0] = v29; /*0x5848a7*/
        v119[1] = v28; /*0x5848ac*/
        v91 = v32 + 10 * v30; /*0x5848bb*/
        v33 = ((Cell *)v2)->CoordToIndex(v119); /*0x5848bf*/
        if ( v33 >= 0 ) /*0x5848c6*/
        {
          v34 = *&v2->q06C; /*0x5848cc*/
          if ( v33 >= v34 ) /*0x5848d1*/
            v33 = v34 - 1; /*0x5848d3*/
        }
        else
        {
          v33 = 0; /*0x5848c8*/
        }
        v99 = *(unsigned __int8 *)(*&v2->q068 + 4 * v33); /*0x5848e3*/
        if ( v99 != 7 && !*(unsigned short *)(v91 + 2 * i) )
        {
          v108[0] = v29; /*0x58491b*/
          v108[1] = v28; /*0x584920*/
          (v2)->ProcessSubzone(v91, i, v86, &v104, v108); /*0x584925*/
          VectorClass::ConstructSubzone(&v122, 0, 0); /*0x584932*/
          /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x58493b) */
          v124 = 10; /*0x584943*/
          v123 = 0; /*0x58494e*/
          VectorClass::CleanupSubzone((int)&v122); /*0x584955*/
          LOWORD(v125) = 0; /*0x58495b*/
          v126 = 0; /*0x584963*/
          v127 = 0; /*0x58496a*/
          v35 = (int)&v2->__pad_64[24 * i + 40]; /*0x584971*/
          v36 = *(unsigned int *)&v2->__pad_64[24 * i + 48]; /*0x584975*/
          if ( *(unsigned int *)&v2->__pad_64[24 * i + 56] < v36 /*0x58499a*/
            || (v2->__pad_64[24 * i + 53] || !v36)
            && (v37 = *(unsigned int *)&v2->__pad_64[24 * i + 60], v37 > 0)
            && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)v103 + 8))(v103, v37 + v36, 0) )
          {
            v38 = *(unsigned int *)&v2->__pad_64[24 * i + 56]; /*0x5849a5*/
            *(unsigned int *)&v2->__pad_64[24 * i + 56] = v38 + 1; /*0x5849ae*/
            v39 = *(unsigned int *)&v2->__pad_64[24 * i + 44] + 36 * v38; /*0x5849b8*/
            Radar::CopyDataArray((Radar *)v39, (int *)&v122); /*0x5849be*/
            v39->u32_18 = v125; /*0x5849cb*/
            v39->q01C = v126; /*0x5849d6*/
            v39->q020 = v127; /*0x5849e0*/
            v35 = (int)&v2->__pad_64[24 * i + 40]; /*0x5849e3*/
          }
          /* X11: vtable install elided (implicit via VectorClass virtuals 0x5849eb) */
          if ( v122.Items && v122.IsAllocated ) /*0x5849fd*/
          {
            __3_YAXPAX_Z(v122.Items); /*0x584a00*/
            v122.Items = 0; /*0x584a08*/
          }
          v40 = v94 + v35->q004; /*0x584a1b*/
          v122.IsAllocated = 0; /*0x584a20*/
          v122.Capacity = 0; /*0x584a25*/
          v41 = i == 2 ? 0 : *(unsigned short *)(v91 + 2 * (i + 1));
          *(unsigned short *)(v40 + 24) = v41; /*0x584a3c*/
          *(unsigned int *)(v40 + 28) = v99; /*0x584a44*/
          *(unsigned int *)(v40 + 20) = 16; /*0x584a47*/
          *(unsigned int *)(v40 + 32) = (__int16)v29 / 4 + 130 * ((__int16)v28 / 4) + 131; /*0x584a78*/
          v42 = v94 == -36; /*0x584a80*/
          ++v86; /*0x584a83*/
          v94 += 36; /*0x584a87*/
          if ( v42 ) /*0x584a8b*/
            break; /*0x584a8b*/
        }
      }
      v9 = v106; /*0x584a91*/
      v11 = v104; /*0x584a95*/
      if ( ++v29 >= v106 + v104 ) /*0x584a9f*/
      {
        v10 = v105; /*0x584aa5*/
        goto LABEL_72; /*0x584aa5*/
      }
    }
    v76 = 2; /*0x584d64*/
    v77 = &v2->u32_BC; /*0x584d69*/
    do /*0x584d84*/
    {
      (*(void (**)(char *))(*(unsigned int *)v77 + 12))(v77); /*0x584d73*/
      Subzone::BuildGraph((Subzone *)v2, v76--); /*0x584d79*/
      v77 -= 24; /*0x584d7f*/
    }
    while ( v76 >= 0 ); /*0x584d84*/
    (&g_AudioInitFlag)->AllocArrays(); /*0x584d8b*/
    v109 = (WordVector)&vt_VectorClass; /*0x584d94*/
    if ( v110 && v112 ) /*0x584daa*/
      __3_YAXPAX_Z(v110); /*0x584db1*/
  }

}
}
// 0x58ABD0
namespace gamemd {
void * Radar::CopyDataArray(int * a2, void *a2_1)
{


  if ( this != (Radar *)a2 ) /*0x58abdc*/
  {
    (*(void (**)(Radar *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x58abe0*/
    int v3 = a2->u32_8; // edi /*0x58abe3*/
    *&this->u32_8 = v3; /*0x58abea*/
    if ( v3 ) /*0x58abed*/
    {
      int v4; // eax
      v4 = __2_YAPAXI_Z(8 * v3); /*0x58abf7*/
      if ( v4 ) /*0x58ac01*/
      {
        int v5 = v4; // ecx /*0x58ac06*/
        if ( v3 - 1 >= 0 ) /*0x58ac0a*/
        {
          int v6 = v3; // edx /*0x58ac0c*/
          do /*0x58ac16*/
          {
            *(unsigned int *)v5 = 0; /*0x58ac0d*/
            *(unsigned char *)(v5 + 4) = 0; /*0x58ac0f*/
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
      *&this->q004 = v4; /*0x58ac1e*/
      if ( v4 ) /*0x58ac21*/
      {
        int v7 = *&this->u32_8; // ecx /*0x58ac23*/
        int v8 = 0; // eax /*0x58ac26*/
        BYTE1(this->q00C) = 1; /*0x58ac2a*/
        if ( v7 > 0 ) /*0x58ac2e*/
        {
          do /*0x58ac4a*/
          {
            int v9 = a2->q004; // edx /*0x58ac30*/
            int v10 = *&this->q004; // ecx /*0x58ac33*/
            *(unsigned int *)(v10 + 8 * v8) = *(unsigned int *)(v9 + 8 * v8); /*0x58ac39*/
            *(unsigned int *)(v10 + 8 * v8 + 4) = *(unsigned int *)(v9 + 8 * v8 + 4); /*0x58ac40*/
            ++v8; /*0x58ac47*/
          }
          while ( v8 < *&this->u32_8 ); /*0x58ac4a*/
        }
      }
    }
    else
    {
      *&this->q004 = 0; /*0x58ac4e*/
      BYTE1(this->q00C) = 0; /*0x58ac51*/
    }
  }
  *(unsigned int *)this->q010 = a2->q010; /*0x58ac58*/
  this->q014 = a2->q014; /*0x58ac5e*/
  return (int *)this->__pad_000; /*0x58ac57*/

}
}
// 0x6558B0
namespace gamemd {
int Radar::PixelIndex()
{

  return *&this->q004 + 251 * *&this->u32_8; /*0x6558c4*/

}
}
// 0x656EC0
namespace gamemd {
MapClass * * Radar::RenderMinimap()
{

  int *v2; // ebx
  int v3; // ecx
  __int16 *v4; // eax
  int *v5; // eax
  int v6; // ecx
  int v7; // ebp
  int v8; // eax
  int *v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  double v14; // st7
  int *v15; // ebp
  int v16; // eax
  double v17; // st6
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  int i; // ebp
  int v27; // ebx
  int v28; // eax
  int v29; // eax
  int j; // ebp
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  int *v34; // ebp
  int v35; // edx
  int v36; // eax
  int v37; // ecx
  int v38; // ecx
  int v39; // edx
  bool v40; // cc
  int v41; // ecx
  int v42; // edx
  int v43; // ecx
  int v44; // edx
  int v45; // edx
  int v46; // eax
  int v47; // ecx
  bool v48; // sf
  int v49; // ebx
  int v50; // ecx
  int k; // ebp
  int *v52; // eax
  int v53; // ebp
  int *v54; // eax
  int v55; // edx
  int v56; // ecx
  int v57; // ebp
  int v58; // eax
  int v59; // eax
  int v60; // ecx
  int v61; // edx
  int v62; // edi
  int v63; // eax
  int v64; // eax
  int v65; // edx
  int v66; // edi
  int v67; // ecx
  int v68; // edi
  int v69; // edi
  int v70; // ebp
  int v71; // ebp
  int v72; // edi
  int v73; // ecx
  int *v74; // edi
  int *v75; // ebp
  int v76; // ecx
  int v77; // edi
  int v78; // ebp
  int v79; // eax
  int v80; // edx
  int v81; // eax
  int v82; // ecx
  int v83; // edi
  int v84; // ebp
  int v85; // eax
  int v86; // ecx
  int v87; // edx
  ObjectClass *v89; // [esp+2Eh] [ebp-58h]
  ObjectClass *v90; // [esp+2Eh] [ebp-58h]
  char v91; // [esp+40h] [ebp-46h]
  char v92; // [esp+41h] [ebp-45h]
  int v93; // [esp+42h] [ebp-44h] BYREF
  int v94; // [esp+4Ah] [ebp-3Ch]
  int v95; // [esp+4Eh] [ebp-38h]
  int v96; // [esp+52h] [ebp-34h] BYREF
  int v97; // [esp+56h] [ebp-30h]
  int v98; // [esp+5Ah] [ebp-2Ch]
  int v99; // [esp+5Eh] [ebp-28h]
  int *v100; // [esp+62h] [ebp-24h]
  int v101; // [esp+66h] [ebp-20h] BYREF
  int v102; // [esp+6Ah] [ebp-1Ch]
  int v103; // [esp+6Eh] [ebp-18h]
  int v104; // [esp+72h] [ebp-14h]
  int v105; // [esp+76h] [ebp-10h]
  int v106; // [esp+7Ah] [ebp-Ch]
  int v107; // [esp+7Eh] [ebp-8h]
  int v108; // [esp+82h] [ebp-4h]

  v2 = &this->u32_120C; /*0x656ec9*/
  v100 = &this->u32_120C; /*0x656ed1*/
  v105 = this->u32_120C; /*0x656ed7*/
  v106 = this->u32_1210; /*0x656ede*/
  v107 = this->u32_1214; /*0x656ee5*/
  v3 = this->u32_14B0; /*0x656ee9*/
  v108 = v2[3]; /*0x656ef9*/
  if ( v3 != 1 || (v91 = 1, this->u32_14AC != 1) ) /*0x656f0b*/
    v91 = 0; /*0x656f0d*/
  v96 = DSurface_ViewBounds.field_0 + dword_886FA8 / 2; /*0x656f28*/
  v97 = dword_886FA4 + dword_886FAC / 2; /*0x656f3e*/
  v4 = (__int16 *)((Tactical *)g_TacticalClass_Instance)->PixelToCell(&v101, &v96); /*0x656f4e*/
  v5 = (int *)((CellCoord *)&dword_87F7E8)->To_CellObj(v4); /*0x656f59*/
  v6 = this->u32_1490; /*0x656f61*/
  v96 = v5[9]; /*0x656f67*/
  v7 = SHIWORD(v96); /*0x656f71*/
  v8 = (__int16)v96; /*0x656f76*/
  v9 = &this->u32_149C; /*0x656f7b*/
  v10 = (__int16)v96 + v6 - SHIWORD(v96); /*0x656f81*/
  v96 = this->u32_149C; /*0x656f83*/
  v93 = v10; /*0x656f87*/
  v101 = v8; /*0x656f8b*/
  LOWORD(v11) = Math::RoundToInt((double)v10 * this->u32_1488 + (double)v96); /*0x656f9d*/
  v12 = v7 - this->u32_1498; /*0x656fac*/
  v93 = v11; /*0x656fae*/
  v101 += v12; /*0x656fb4*/
  LOWORD(v13) = Math::RoundToInt((double)v101 * this->u32_1488 + (double)this->u32_14A0); /*0x656fc8*/
  v101 = v13; /*0x656fd1*/
  if ( v93 == v96 - 1 ) /*0x656fdc*/
    ++v93; /*0x656fdf*/
  v14 = 60.0 / this->u32_1488; /*0x656fe9*/
  v15 = &this->u32_14DC; /*0x656ff3*/
  v99 = 1; /*0x657000*/
  this->u32_14DC = v93; /*0x657004*/
  this->u32_14E0 = v101; /*0x65700a*/
  this->u32_14E4 = 1; /*0x65700d*/
  this->u32_14E8 = 1; /*0x657010*/
  v101 = 2 * dword_886FA8; /*0x65701c*/
  LOWORD(v16) = Math::RoundToInt(v14); /*0x65702c*/
  v17 = 30.0 / this->u32_1488; /*0x657037*/
  this->u32_14E4 = v16; /*0x65703d*/
  v101 = 2 * dword_886FAC; /*0x65704c*/
  *(float *)&v96 = v17; /*0x657050*/
  LOWORD(v18) = Math::RoundToInt(v14); /*0x65705c*/
  this->u32_14E8 = v18; /*0x657061*/
  LOWORD(v19) = Math::RoundToInt(v14); /*0x65706f*/
  v93 = v19; /*0x657074*/
  v101 = 2 * dword_886FAC; /*0x657082*/
  LOWORD(v20) = Math::RoundToInt((double)(2 * dword_886FAC) / *(float *)&v96 * 0.5); /*0x657094*/
  this->u32_14DC -= v93; /*0x6570a2*/
  this->u32_14E0 -= v20; /*0x6570aa*/
  v21 = this->u32_14DC; /*0x6570ad*/
  v22 = *v9; /*0x6570b0*/
  if ( v21 >= *v9 ) /*0x6570b4*/
  {
    v96 = this->u32_14A4; /*0x6570c1*/
    if ( v21 + this->u32_14E4 >= v22 + v96 ) /*0x6570d5*/
      *v15 = v96 - this->u32_14E4 + v22 - 1; /*0x6570e7*/
  }
  else
  {
    *v15 = v22; /*0x6570b6*/
  }
  v23 = this->u32_14E0; /*0x6570ea*/
  v24 = this->u32_14A0; /*0x6570f0*/
  if ( v23 >= v24 ) /*0x6570f8*/
  {
    v25 = this->u32_14A8; /*0x657108*/
    if ( v23 + this->u32_14E8 >= v25 + this->u32_14A0 ) /*0x65711a*/
      this->u32_14E0 = v25 - this->u32_14E8 + this->u32_14A0 - 1; /*0x65712e*/
  }
  else
  {
    this->u32_14E0 = v24; /*0x6570fa*/
  }
  if ( this->u32_14DA ) /*0x657134*/
  {
    this->u32_14EC = *v15; /*0x657148*/
    this->u32_14F0 = this->u32_14E0; /*0x65714d*/
    this->u32_14F4 = this->u32_14E4; /*0x657153*/
    this->u32_14F8 = this->u32_14E8; /*0x657159*/
  }
  if ( this->u32_14D9 /*0x6571bc*/
    || this->u32_14EC != *v15
    || this->u32_14F0 != this->u32_14E0
    || this->u32_14F4 != this->u32_14E4
    || this->u32_14F8 != this->u32_14E8
    || !Render_Render_660530()
    || this->u32_126C > 0
    || this->u32_1234 > 0
    || HouseClass::ProcessData((HouseClass *)&g_VisibilitySystem) )
  {
    if ( v91 ) /*0x6571cf*/
      this->u32_14D9 = 0; /*0x6571d1*/
    ((XSurface *)this)->RenderRadar(); /*0x6571da*/
    v92 = 0; /*0x6571ea*/
    if ( this->u32_14EC != *v15 /*0x657216*/
      || this->u32_14F0 != this->u32_14E0
      || this->u32_14F4 != this->u32_14E4
      || this->u32_14F8 != this->u32_14E8 )
    {
      for ( i = 0; i < this->u32_14F8; ++i ) /*0x657226*/
      {
        v27 = this->u32_14A0; /*0x657236*/
        v28 = i + this->u32_14F0; /*0x65723e*/
        v101 = this->u32_14EC - *v9; /*0x657240*/
        v102 = v28 - v27; /*0x65724d*/
        ((int)this)->RevealCell(&v101); /*0x657251*/
        v29 = i + this->u32_14F0 - this->u32_14A0; /*0x65727c*/
        v101 = this->u32_14F4 + this->u32_14EC - 1 - *v9; /*0x65727e*/
        v102 = v29; /*0x657285*/
        ((int)this)->RevealCell(&v101); /*0x657289*/
      }
      for ( j = 0; j < this->u32_14F4; ++j ) /*0x6572a3*/
      {
        v31 = j + this->u32_14EC - *v9; /*0x6572bd*/
        v102 = this->u32_14F0 - this->u32_14A0; /*0x6572bf*/
        v101 = v31; /*0x6572c3*/
        ((int)this)->RevealCell(&v101); /*0x6572ce*/
        v32 = this->u32_14A0; /*0x6572eb*/
        v33 = this->u32_14F0 + this->u32_14F8 - 1; /*0x6572f1*/
        v101 = j + this->u32_14EC - *v9; /*0x6572f5*/
        v102 = v33 - v32; /*0x6572ff*/
        ((int)this)->RevealCell(&v101); /*0x657306*/
      }
      v2 = v100; /*0x657316*/
      v92 = 1; /*0x65731a*/
    }
    v34 = &this->__pad_1248; /*0x657325*/
    if ( this->u32_1250 > 0 && this->u32_1254 > 0 ) /*0x657338*/
    {
      (*(void (**)(unsigned int, char *, unsigned int, char *, unsigned int, int))(*this->u32_89) + 8))( /*0x657353*/
        this->u32_121C,
        &this->__pad_1248,
        this->u32_1220,
        &this->__pad_1248,
        0,
        1);
      v35 = this->u32_14A0; /*0x65735b*/
      v36 = *v9 + *v34; /*0x65735e*/
      v37 = this->u32_124C; /*0x657360*/
      v101 = v36; /*0x657363*/
      v38 = v35 + v37; /*0x657367*/
      v39 = this->u32_1254; /*0x657369*/
      v40 = v2[2] <= 0; /*0x65736c*/
      v102 = v38; /*0x657370*/
      v41 = this->u32_1250; /*0x657374*/
      v95 = v39; /*0x657377*/
      v94 = v41; /*0x65737b*/
      if ( v40 || v2[3] <= 0 ) /*0x657389*/
      {
        v45 = v95; /*0x657478*/
      }
      else if ( v41 <= 0 || v39 <= 0 ) /*0x657399*/
      {
        v36 = *v2; /*0x65745f*/
        v102 = v2[1]; /*0x657464*/
        v41 = v2[2]; /*0x657468*/
        v45 = v2[3]; /*0x65746b*/
      }
      else
      {
        v96 = *v2; /*0x6573a3*/
        v97 = v2[1]; /*0x6573aa*/
        v42 = v2[2]; /*0x6573ae*/
        v98 = v42; /*0x6573b1*/
        v99 = v2[3]; /*0x6573b8*/
        if ( v96 > v36 ) /*0x6573c2*/
        {
          v43 = v96 - v36; /*0x6573c4*/
          v96 = v36; /*0x6573c6*/
          v98 = v43 + v42; /*0x6573cc*/
        }
        if ( v97 > v102 ) /*0x6573da*/
        {
          v99 += v97 - v102; /*0x6573e4*/
          v97 = v102; /*0x6573ec*/
        }
        if ( v96 + v98 < v94 + v36 ) /*0x657403*/
          v98 = v94 - v96 + v101 + 1; /*0x657413*/
        if ( v97 + v99 >= v102 + v95 ) /*0x65742d*/
        {
          v45 = v99; /*0x65744b*/
          v36 = v96; /*0x65744f*/
          v102 = v97; /*0x657453*/
          v41 = v98; /*0x657457*/
        }
        else
        {
          v44 = v102; /*0x657433*/
          v102 = v97; /*0x657439*/
          v41 = v98; /*0x65743d*/
          v45 = v95 - v97 + v44 + 1; /*0x657441*/
          v36 = v96; /*0x657445*/
        }
      }
      *v2 = v36; /*0x65747c*/
      v2[1] = v102; /*0x657482*/
      v93 = *v34; /*0x657488*/
      v46 = v93; /*0x657485*/
      v2[2] = v41; /*0x65748c*/
      v47 = v46 + this->u32_1250; /*0x657495*/
      v48 = -this->u32_1250 < 0; /*0x657497*/
      v2[3] = v45; /*0x657499*/
      if ( v48 != __OFSUB__(v46, v47) ) /*0x65749c*/
      {
        do /*0x6574f1*/
        {
          v49 = this->u32_124C; /*0x65749e*/
          if ( v49 < v49 + this->u32_1254 ) /*0x6574ae*/
          {
            do /*0x6574d9*/
            {
              v101 = v93; /*0x6574bb*/
              v102 = v49; /*0x6574bf*/
              FogOfWar::RevealArea((int)this, &v101); /*0x6574c3*/
              ++v49; /*0x6574d4*/
            }
            while ( v49 < this->u32_124C + this->u32_1254 ); /*0x6574d9*/
          }
          v50 = this->u32_1250 + *v34; /*0x6574e9*/
          ++v93; /*0x6574eb*/
        }
        while ( v93 < v50 ); /*0x6574f1*/
      }
      *v34 = 0; /*0x6574f9*/
      this->u32_124C = 0; /*0x6574fe*/
      this->u32_1250 = 0; /*0x657501*/
      this->u32_1254 = 0; /*0x657504*/
      v2 = v100; /*0x657507*/
    }
    for ( k = this->u32_126C - 1; k >= 0; --k ) /*0x657512*/
      FogOfWar::RevealArea((int)this, (int *)(this->u32_1260 + 8 * k)); /*0x657520*/
    (*(void (**)(char *))(this->u32_125C + 12))(&this->u32_125C); /*0x657534*/
    Render_Render_660000(v89); /*0x657537*/
    v52 = (int *)(*(int (**)(unsigned int, int *))(*this->u32_121C + 120))( /*0x657549*/
                   this->u32_121C,
                   &v101);
    HouseClass::Render((HouseClass *)&g_VisibilitySystem, this->u32_121C, *v52, v52[1], v52[2], v52[3]); /*0x657573*/
    if ( v91 ) /*0x65757e*/
    {
      if ( this->u32_14DA ) /*0x657584*/
      {
        v53 = VtableStub::72F510(); /*0x657595*/
        *v2 = *v9; /*0x65759b*/
        v2[1] = this->u32_14A0; /*0x6575a0*/
        v2[2] = this->u32_14A4; /*0x6575a6*/
        v2[3] = this->u32_14A8; /*0x6575af*/
        v101 = this->u32_11E4; /*0x6575ba*/
        v102 = this->u32_11EC; /*0x6575d7*/
        v54 = (int *)(*(int (**)(DSurface *, int *))(DSurface_Sidebar + 120))( /*0x6575e2*/
                       DSurface_Sidebar,
                       &v93);
        DrawToSurfaceSHP((int)DSurface_Sidebar, v53, dword_B04A38, 0x20u, &v101, v54, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6575fc*/
      }
      if ( v2[2] > 0 && v2[3] > 0 ) /*0x65760d*/
      {
        v55 = v2[2]; /*0x65761e*/
        v56 = v2[1] - this->u32_14A0; /*0x657621*/
        v57 = v2[3]; /*0x657623*/
        v101 = *v2 - *v9; /*0x657626*/
        v102 = v56; /*0x657630*/
        v58 = this->u32_121C; /*0x65763d*/
        v103 = v55; /*0x657643*/
        v104 = v57; /*0x657647*/
        (*(void (**)(DSurface *, int *, int, int *, unsigned int, int))(DSurface_Sidebar + 8))( /*0x65764f*/
          DSurface_Sidebar,
          v2,
          v58,
          &v101,
          0,
          1);
      }
      (*(void (**)(DSurface *, char *, unsigned int))(DSurface_Sidebar + 88))( /*0x657668*/
        DSurface_Sidebar,
        &this->u32_14DC,
        this->u32_1208);
      v59 = *v9; /*0x65766b*/
      v60 = this->u32_14A0; /*0x65766d*/
      v61 = this->u32_14A4; /*0x657670*/
      v62 = this->u32_14A8; /*0x657673*/
      v96 = v59 - 1; /*0x657678*/
      v63 = this->u32_1208; /*0x65767c*/
      v97 = v60 - 1; /*0x657682*/
      v98 = v61 + 2; /*0x657693*/
      v99 = v62 + 2; /*0x657697*/
      (*(void (**)(DSurface *, int *, int))(DSurface_Sidebar + 88))( /*0x6576a2*/
        DSurface_Sidebar,
        &v96,
        v63);
    }
    if ( !v92 ) /*0x6576ab*/
      goto LABEL_99; /*0x6576ab*/
    if ( this->u32_14F4 <= 0 || this->u32_14F8 <= 0 ) /*0x6576ca*/
    {
      v74 = v2; /*0x65775f*/
    }
    else
    {
      if ( v2[2] > 0 && v2[3] > 0 ) /*0x6576e0*/
      {
        v64 = this->u32_14EC; /*0x6576e4*/
        v65 = this->u32_14F0; /*0x6576e6*/
        v66 = this->u32_14F4; /*0x6576e9*/
        v103 = v66; /*0x6576ec*/
        v104 = this->u32_14F8; /*0x6576f3*/
        v67 = *v2; /*0x6576f7*/
        if ( v64 > *v2 ) /*0x6576fb*/
        {
          v68 = v64 - v67 + v66; /*0x6576ff*/
          v64 = *v2; /*0x657701*/
          v103 = v68; /*0x657703*/
        }
        v69 = v2[1]; /*0x657707*/
        if ( v65 > v69 ) /*0x65770c*/
        {
          v70 = v65 - v69 + v104; /*0x657714*/
          v65 = v2[1]; /*0x657716*/
          v104 = v70; /*0x657718*/
        }
        if ( v64 + v103 < v67 + v2[2] ) /*0x657729*/
          v103 = v67 - v64 + v2[2] + 1; /*0x657734*/
        v71 = v2[1] + v2[3]; /*0x65773e*/
        v72 = v104; /*0x657741*/
        if ( v104 + v65 < v71 ) /*0x65774a*/
          v72 = v71 - v65 + 1; /*0x65774f*/
        v73 = v103; /*0x657751*/
        v98 = v103; /*0x657755*/
        goto LABEL_84; /*0x657759*/
      }
      v74 = &this->u32_14EC; /*0x65775b*/
    }
    v64 = *v74; /*0x657761*/
    v65 = v74[1]; /*0x657763*/
    v73 = v74[2]; /*0x657766*/
    v98 = v73; /*0x657769*/
    v72 = v74[3]; /*0x65776d*/
    LABEL_84:
    v40 = this->u32_14E4 <= 0; /*0x657770*/
    v75 = &this->u32_14DC; /*0x657777*/
    v99 = v72; /*0x65777d*/
    if ( !v40 && this->u32_14E8 > 0 ) /*0x65778b*/
    {
      if ( v73 <= 0 || v72 <= 0 ) /*0x65779b*/
      {
        v64 = *v75; /*0x657823*/
        v65 = this->u32_14E0; /*0x657826*/
        v73 = this->u32_14E4; /*0x657829*/
        v72 = this->u32_14E8; /*0x65782c*/
      }
      else
      {
        v76 = *v75; /*0x6577a1*/
        v40 = *v75 <= v64; /*0x6577a4*/
        v102 = this->u32_14E0; /*0x6577a9*/
        v103 = this->u32_14E4; /*0x6577b0*/
        v104 = this->u32_14E8; /*0x6577b7*/
        if ( !v40 ) /*0x6577bb*/
        {
          v77 = v76 - v64 + v103; /*0x6577c3*/
          v76 = v64; /*0x6577c5*/
          v103 = v77; /*0x6577c7*/
        }
        if ( v102 > v65 ) /*0x6577d1*/
        {
          v78 = v102 - v65 + v104; /*0x6577d9*/
          v102 = v65; /*0x6577db*/
          v104 = v78; /*0x6577df*/
        }
        if ( v76 + v103 < v64 + v98 ) /*0x6577f1*/
          v103 = v64 - v76 + v98 + 1; /*0x6577fd*/
        v72 = v104; /*0x657805*/
        v79 = v65 + v99; /*0x657809*/
        v65 = v102; /*0x65780b*/
        if ( v104 + v102 < v79 ) /*0x657814*/
          v72 = v79 - v102 + 1; /*0x657819*/
        v64 = v76; /*0x65781b*/
        v73 = v103; /*0x65781d*/
      }
    }
    *v2 = v64; /*0x657831*/
    v2[1] = v65; /*0x657834*/
    v2[2] = v73; /*0x657837*/
    v2[3] = v72; /*0x65783a*/
    LABEL_99:
    v80 = this->u32_14E0; /*0x65783d*/
    v81 = this->u32_14E4; /*0x657849*/
    this->u32_14EC = this->u32_14DC; /*0x65784f*/
    v82 = this->u32_14E8; /*0x657855*/
    this->u32_14F0 = v80; /*0x65785b*/
    this->u32_14F4 = v81; /*0x657861*/
    this->u32_14F8 = v82; /*0x657867*/
    Render_Render_6603B0(v90); /*0x65786d*/
  }
  if ( this->u32_1274 ) /*0x657872*/
  {
    v101 = this->u32_121C; /*0x657884*/
    v83 = v101; /*0x657882*/
    v84 = (*(int (**)(int))(*(unsigned int *)v101 + 128))(v101); /*0x657896*/
    memset(this->u32_761), 0, v84 * (*(int (**)(int))(*(unsigned int *)v83 + 124))(v83) / 8 + 1); /*0x6578b7*/
  }
  LOBYTE(v85) = v91; /*0x6578c0*/
  if ( !v91 ) /*0x6578c6*/
  {
    v86 = v106; /*0x6578cc*/
    v87 = v107; /*0x6578d0*/
    *v2 = v105; /*0x6578d4*/
    v85 = v108; /*0x6578d6*/
    v2[1] = v86; /*0x6578da*/
    v2[2] = v87; /*0x6578dd*/
    v2[3] = v85; /*0x6578e0*/
  }
  return v85; /*0x6578e3*/

}
}
// 0x692610
namespace gamemd {
AbstractClass * * Radar::ScanWaypoints(MouseClass * aP0, MouseClass * aP1, int aP3_4)
{
  int ClosestEnemy; // eax
  int v7; // eax
  char v9; // bl
  unsigned char *v10; // eax
  unsigned int *v12; // eax
  unsigned short *v13; // eax
  int16_t *v14; // ebp
  unsigned int *v15; // eax
  unsigned short *v16; // eax
  char *v17; // eax
  void *v18; // eax
  void *v19; // eax
  int v20; // eax
  unsigned int *v21; // edi
  bool v22; // bl
  void *v23; // ecx
  void *v24; // eax
  int v25; // edx
  unsigned int *v26; // eax
  int v27; // eax
  int v28; // [esp-4h] [ebp-24h]
  int v29; // [esp-4h] [ebp-24h]
  int v30; // [esp+10h] [ebp-10h]
  unsigned int v31[2]; // [esp+14h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+1Ch] [ebp-4h]

  v30 = 0; /*0x69261e*/
  if ( dword_A8ECC8 ) /*0x692626*/
  {
    aP1 = aP1; /*0x692628*/
    if ( aP1 ) /*0x69262e*/
    {
      ClosestEnemy = FindRadarClosestEnemy(0, (int)aP1); /*0x692634*/
      return (*(int (**)(int, void *, unsigned int))(*(unsigned int *)ClosestEnemy + 116))(ClosestEnemy, aP1, 0); /*0x692640*/
    }
    else
    {
      aP0 = aP0; /*0x69264d*/
      v7 = FindRadarClosestEnemy((int16_t *)aP0, 0); /*0x692655*/
      return (*(int (**)(int, int, int, unsigned int))(v7->estimatedHealth)(v7, aP0, aP3_4, 0); /*0x692666*/
    }
  }
  aP1 = aP1; /*0x692673*/
  v9 = 1; /*0x692677*/
  v10 = AbstractClass::IsTechno(aP1); /*0x69267b*/
  v10 = v10; /*0x692680*/
  if ( v10 && !v10[1050] ) /*0x692686*/
  {
          if ( v10->q220 == 2 /*0x6926cf*/
      && (v28 = dword_A83D4C->relatedTagsCount,
          v12 = (unsigned int *)(*(int (**)(unsigned char *, unsigned int *))(*&v10->q120))(v10, v31),
          v13 = Coord::To_Cell(&dword_87F7E8, v12),
          !Cell::IsPassableOffset(v13, v28))
      || *(unsigned char *)((*(int (**)(unsigned char *))(v10->alignmentPadding)(v10) + 3226) )
          {
            v9 = 0; /*0x6926d9*/
          }
  }
  v14 = (int16_t *)aP0; /*0x6926db*/
  if ( !aP1 /*0x692725*/
    || (*(int (**)(unsigned char *))(*&aP1->u32_B0))(aP1) != 6
    || aP1[1050]
    || aP1[1773] != 15
    || (v29 = dword_A83D4C->relatedTagsCount,
        v15 = (unsigned int *)(*(int (**)(unsigned char *, unsigned int *))(*&v10->q120))(v10, v31),
        v16 = Coord::To_Cell(&dword_87F7E8, v15),
        Cell::IsPassableOffset(v16, v29)) )
  {
    if ( v9 ) /*0x692734*/
    {
      if ( aP1 /*0x692766*/
        && (*(uint8_t (**)(unsigned char *))(*&aP1->u32_4E0))(aP1)
        && ((*(int (**)(unsigned char *))(*&aP1->u32_B0))(aP1) != 6 || !aP1[1767])
        && (!v10 || !v10[980]) )
      {
        v30 = 7; /*0x692770*/
      }
      v17 = (char *)((CellCoord *)(&dword_87F7E8))->To_CellObj(v14); /*0x69277e*/
      if ( ((unsigned int (__stdcall *)(int, int, int))Radar::FindNearestRadarTarget)( /*0x6927bc*/
             (*v14 << 8) + 128,
             (v14[1] << 8) + 128,
             dword_B056C0 * v17[283]) )
      {
        v30 = 61; /*0x6927c5*/
      }
    }
  }
  if ( byte_880998 ) /*0x6927d4*/
  {
      if ( !aP1 /*0x6927fb*/
      || !(*(int (**)(unsigned char *))(*&aP1->q0F0))(aP1)
      || (v18 = (void *)(*(int (**)(unsigned char *))(*&aP1->q0F0))(aP1),
          !(uint8_t)((House *)(v18))->IsHumanPlayer())
      || (v30 = 10, !(*(uint8_t (**)(unsigned char *))(*&aP1->u32_250))(aP1)) )
      {
        v30 = 15; /*0x69280d*/
      }
  }
  if ( byte_88099A ) /*0x69281c*/
  {
    v30 = 34; /*0x692820*/
    if ( aP1 ) /*0x692828*/
    {
      if ( (*(int (**)(unsigned char *))(*&aP1->q0F0))(aP1) ) /*0x69282e*/
      {
        v19 = (void *)(*(int (**)(unsigned char *))(*&aP1->q0F0))(aP1); /*0x692839*/
        if ( (uint8_t)((House *)(v19))->IsHumanPlayer() ) /*0x69283e*/
        {
          if ( (*(int (**)(unsigned char *))(*&aP1->u32_B0))(aP1) == 6 ) /*0x692851*/
          {
            if ( (*(uint8_t (**)(unsigned char *))(*&aP1->u32_4E0))(aP1) ) /*0x692857*/
            {
              if ( !(*(uint8_t (**)(unsigned char *))(aP1->needsSave)(aP1) ) /*0x692865*/
              {
                v20 = aP1->BuildingTypeClass_520; /*0x69286f*/
                if ( *(unsigned char *)(v20 + 5450) ) /*0x692875*/
                {
                  if ( *(int *)(v20 + 3812) > 0 || *(unsigned char *)(v20 + 5491) ) /*0x692889*/
                    v30 = 33; /*0x692893*/
                }
              }
            }
          }
        }
      }
    }
  }
  v21 = Waypoint::FindByCell((char *)dword_A83D4C, v14); /*0x6928a7*/
  if ( byte_88099B ) /*0x6928b0*/
  {
    v22 = Mouse::IsButtonDown(dword_A8EC08) || Mouse::IsButtonDown(dword_A8EC0C); /*0x6928e4*/
    aP0 = -1; /*0x6928e8*/
    if ( v21 ) /*0x6928f0*/
      WaypointClass::FindOrCreate((char *)dword_A83D4C, (int)v21, (unsigned int *)&aP0, &aP1); /*0x692903*/
    if ( dword_8809A4 ) /*0x69290f*/
    {
      v30 = 48; /*0x692911*/
      goto LABEL_65; /*0x692919*/
    }
    if ( v22 ) /*0x692920*/
    {
      v23 = dword_A83D4C; /*0x692922*/
      if ( !v21 ) /*0x69292a*/
      {
  LABEL_61:
        if ( v23->q20C == -1 /*0x692996*/
          || !(uint8_t)((int (__fastcall *)(void *))Radar::IsRadarTargetEligible)(v23)
          || (v30 = 42, !LayerClass::IsWithinUsableArea(&dword_87F7E8, v14, 1)) )
  {
          v30 = 43; /*0x6929a7*/
  }
    goto LABEL_65; /*0x6929a7*/
      }
      if ( aP0 != dword_A83D4C->selectedPathIndex ) /*0x692938*/
      {
  LABEL_59:
        if ( v21 ) /*0x692970*/
  {
          v30 = 46; /*0x692972*/
          goto LABEL_65; /*0x69297a*/
  }
    goto LABEL_61; /*0x692970*/
      }
      if ( (uint8_t)((int (__fastcall *)(void *))Radar::IsRadarTargetEligible)(dword_A83D4C) /*0x692955*/
        && VectorClass::GetAtChecked(*((int **)dword_A83D4C + aP0 + 132), (int)v21) )
      {
        v30 = 47; /*0x69295e*/
        goto LABEL_65; /*0x692966*/
      }
    }
    v23 = dword_A83D4C; /*0x692968*/
    goto LABEL_59; /*0x692968*/
  }
  LABEL_65:
  if ( byte_88099C ) /*0x6929b6*/
    v30 = 60; /*0x6929b8*/
    if ( !byte_880999 ) /*0x6929c7*/
      goto LABEL_81; /*0x6929c7*/
    if ( aP1
    && (*(int (**)(unsigned char *))(*&aP1->q0F0))(aP1)
    && (v24 = (void *)(*(int (**)(unsigned char *))(*&aP1->q0F0))(aP1),
        (uint8_t)((House *)(v24))->IsHumanPlayer())
    && (*(uint8_t (**)(unsigned char *))(*&aP1->q260))(aP1) )
  {
    if ( (*(int (**)(unsigned char *))(*&aP1->u32_B0))(aP1) == 6 )
    {
      v30 = (*(uint8_t (**)(unsigned char *))(aP1->needsSave)(aP1) != 0 ? 14 : 12;
      goto LABEL_81; /*0x692a24*/
    }
  }
    else
  {
    v25 = v14[1] << 8; /*0x692a3e*/
    v31[0] = (*v14 << 8) + 128; /*0x692a41*/
    v31[1] = v25 + 128; /*0x692a51*/
    GroundHeight = 0; /*0x692a55*/
    GroundHeight = Cell::GetGroundHeight(v31); /*0x692a66*/
    if ( !Cell::IsPassable(v31) /*0x692aa3*/
      && !Game::Stub3((int)v31)
      && *((unsigned int *)((CellCoord *)(&dword_87F7E8))->To_CellObj(v14) + 17) != -1 )
    {
      if ( *(unsigned char *)(*(unsigned int *)&dword_A83D84->vfptr[4 * *((unsigned int *)((CellCoord *)(&dword_87F7E8))->To_CellObj(v14) + 17)] /*0x692abc*/
      + 680) )
      {
        if ( *((unsigned int *)((CellCoord *)(&dword_87F7E8))->To_CellObj(v14) + 20) != -1 ) /*0x692ad4*/
        {
          v26 = ((CellCoord *)(&dword_87F7E8))->To_CellObj(v14); /*0x692adc*/
          v30 = 12; /*0x692af4*/
          if ( (uint8_t)((House *)(*&dword_A8022C->vtable1]))->IsHumanPlayer() ) /*0x692aed*/
            goto LABEL_81; /*0x692afc*/
        }
      }
    }
  }
    v30 = 14; /*0x692afe*/
  LABEL_81:
  if ( dword_8809A0 != -1 ) /*0x692b0e*/
  {
            v27 = (*(int (**)(unsigned int, int16_t *, unsigned char *))(**((unsigned int **)dword_A8E334 + dword_8809A0) + 108))( /*0x692b1d*/
            *((unsigned int *)dword_A8E334 + dword_8809A0),
            v14,
            aP1);
            if ( v27 ) /*0x692b22*/
              v30 = v27; /*0x692b24*/
  }
    if ( !v30 && v21 ) /*0x692b32*/
      v30 = 44; /*0x692b34*/
    if ( dword_880990 ) /*0x692b43*/
      return 0; /*0x692b45*/
    else
      return v30; /*0x692b51*/
}
}