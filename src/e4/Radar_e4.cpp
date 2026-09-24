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

// 0x431090
namespace gamemd {
int Radar::FindNearestRadarTarget(int a2, int a3, int a4)
{
  _DWORD **v4; // edi
  int i; // esi
  _DWORD *v6; // eax
  double v7; // st7
  bool v8; // cc
  int v10; // [esp+18h] [ebp-18h]
  _DWORD *v11; // [esp+1Ch] [ebp-14h]

  if ( *(this + 24) ) /*0x431099*/
  {
    v4 = (_DWORD **)this; /*0x4310ab*/
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
            return *(this + 2 * v10 + i + v10); /*0x431161*/
        }
        ++v4; /*0x431121*/
      }
      v4 = (_DWORD **)(v11 + 3); /*0x431132*/
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
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  _DWORD v8[3]; // [esp+14h] [ebp-24h] BYREF
  _DWORD v9[3]; // [esp+20h] [ebp-18h] BYREF
  _DWORD v10[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = g_SidebarState; /*0x4adcd4*/
  v3 = 0; /*0x4adcdb*/
  if ( g_SidebarState > 0 ) /*0x4adcdf*/
  {
    while ( 1 ) /*0x4adcf0*/
    {
      v4 = *((_DWORD *)g_TechnoClass_Count + v3); /*0x4adcf0*/
      if ( !v4 /*0x4add1b*/
        || *(_BYTE *)(v4 + 129)
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 44))(*((_DWORD *)g_TechnoClass_Count + v3)) == 6 && a1 )
      {
        goto LABEL_20; /*0x4add1b*/
      }
      if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v4 + 540)) ) /*0x4add27*/
        break; /*0x4add27*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6 /*0x4addce*/
        && *((_BYTE *)g_RulesClass_Instance + 6119)
        && (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v4 + 540), HouseClass_Player) )
      {
        (*(void (__thiscall **)(int, _DWORD, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 1160))(v4, 0, aP1, 0, 0, 0); /*0x4adde4*/
        v9[0] = *(_DWORD *)(v4 + 156); /*0x4addf4*/
        v6 = *(_DWORD *)(v4 + 608); /*0x4addf8*/
        v9[1] = *(_DWORD *)(v4 + 160); /*0x4ade04*/
        v9[2] = *(_DWORD *)(v4 + 164); /*0x4ade18*/
        MapClass::RevealArea2(v9, 0, v6 + 3, 0); /*0x4ade1c*/
      }
      else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6 /*0x4ade4c*/
             && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 1518)
             && !(unsigned __int8)House::IsHumanPlayer(*(#375 **)(v4 + 540)) )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD, int, #375 *, _DWORD))(*(_DWORD *)v4 + 1160))( /*0x4ade68*/
          v4,
          0,
          0,
          1,
          HouseClass_Player,
          0);
        v10[0] = *(_DWORD *)(v4 + 156); /*0x4ade78*/
        v7 = *(_DWORD *)(v4 + 608) + 3; /*0x4ade85*/
        v10[1] = *(_DWORD *)(v4 + 160); /*0x4ade88*/
        v10[2] = *(_DWORD *)(v4 + 164); /*0x4ade9c*/
        MapClass::RevealArea2(v10, 0, v7, 0); /*0x4adea0*/
      }
      else if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 3281) ) /*0x4adeb1*/
      {
        goto LABEL_19; /*0x4adeb9*/
      }
  LABEL_20:
      if ( ++v3 >= v2 ) /*0x4adec8*/
        return; /*0x4adec8*/
    }
    if ( !*(_BYTE *)(v4 + 1051) ) /*0x4add30*/
      goto LABEL_20; /*0x4add30*/
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 1160))(v4, 0, 0, 0, 0, 0); /*0x4add4c*/
    v8[0] = *(_DWORD *)(v4 + 156); /*0x4add5c*/
    v5 = *(_DWORD *)(v4 + 608) + 3; /*0x4add69*/
    v8[1] = *(_DWORD *)(v4 + 160); /*0x4add6c*/
    v8[2] = *(_DWORD *)(v4 + 164); /*0x4add78*/
    MapClass::RevealArea2(v8, 0, v5, 0); /*0x4add84*/
    if ( !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 3281) ) /*0x4add93*/
      goto LABEL_20; /*0x4add9b*/
  LABEL_19:
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 1044))(v4); /*0x4adebb*/
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

  v1 = *(this + 131); /*0x5090f0*/
  if ( v1 >= 0xC ) /*0x5090f8*/
    return 0; /*0x50912a*/
  v2 = *(this + v1 + 132); /*0x5090ff*/
  return *(_DWORD *)(v2 + 56) < g_RulesClass_Instance->InfantryExplode && *(_DWORD *)(v2 + 36) == -1; /*0x509126*/
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
  _DWORD *v20; // edx
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
  _DWORD *v36; // edx
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
  _DWORD *v58; // ecx
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
  int v72; // ebp
  __int64 v73; // rax
  __int64 v74; // rax
  int v75; // ebx
  int v76; // esi
  int v77; // edx
  _DWORD *v78; // ecx
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
  _DWORD *v102; // [esp+40h] [ebp-34h]
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
  int v114; // [esp+78h] [ebp+4h]
  int v115; // [esp+88h] [ebp+14h]

  v6 = aP1; /*0x5824a5*/
  v98 = *(__int16 *)(aP1 + 6); /*0x5824b3*/
  v7 = aP1; /*0x5824be*/
  v8 = aP1; /*0x5824c0*/
  v9 = *aP5; /*0x5824c6*/
  v115 = aP5[1]; /*0x5824cd*/
  v112 = 0; /*0x5824d4*/
  LOBYTE(v113) = 0; /*0x5824dc*/
  v10 = *aP4; /*0x5824e4*/
  v106 = aP4[1]; /*0x5824e6*/
  v11 = aP4[2]; /*0x5824ea*/
  v12 = aP4[3]; /*0x5824ed*/
  v97 = -1; /*0x5824f0*/
  v96 = v9; /*0x5824fc*/
  v100 = v11 + v10 - 1; /*0x582500*/
  v94 = v9; /*0x582508*/
  v99 = v10; /*0x58250c*/
  v111 = v12 + v106 - 1; /*0x582518*/
  v102 = (_DWORD *)*(this + aP2 + 32); /*0x582527*/
  v13 = *(unsigned __int8 *)(aP1 + 8); /*0x58252d*/
  while ( v9 >= v10 ) /*0x582538*/
  {
    v14 = *(unsigned __int8 *)(v7 + 8) - v13; /*0x582541*/
    if ( (int)((HIDWORD(v14) ^ v14) - HIDWORD(v14)) >= 2 ) /*0x582549*/
      break; /*0x582549*/
    *(_WORD *)(v7 + 2 * aP2) = aP3; /*0x582556*/
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
      HIWORD(v101) = v115; /*0x5825b1*/
      LOWORD(v101) = v9; /*0x5825bd*/
      if ( LayerClass::IsWithinUsableArea(this, (__int16 *)&v101, 1) ) /*0x5825c2*/
      {
        HIWORD(v101) = v115; /*0x5825de*/
        LOWORD(v101) = v9 + 1; /*0x5825ea*/
        if ( LayerClass::IsWithinUsableArea(this, (__int16 *)&v101, 1) ) /*0x5825ef*/
        {
          v17 = (unsigned __int16)aP3 | (v89 << 16); /*0x582612*/
          LOBYTE(v113) = 0; /*0x58261a*/
          v18 = *(_DWORD *)(*v102 + 24 * (aP3 & 0xF | (16 * (v89 & 0xF))) + 16); /*0x58262a*/
          v19 = *v102 + 24 * (aP3 & 0xF | (16 * (v89 & 0xF))); /*0x58262e*/
          v20 = *(_DWORD **)(v19 + 4); /*0x582631*/
          v21 = v18 - 1; /*0x582635*/
          if ( v18 - 1 < 0 ) /*0x58263a*/
          {
  LABEL_14:
            v22 = *(_DWORD *)(v19 + 8); /*0x582646*/
            if ( v18 < v22 /*0x58266a*/
              || (*(_BYTE *)(v19 + 13) || !v22)
              && (v23 = *(_DWORD *)(v19 + 20), v23 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v19 + 8))(v19, v22 + v23, 0) )
            {
              v24 = *(_DWORD *)(v19 + 16); /*0x582671*/
              v25 = v24 + 1; /*0x582674*/
              v26 = 3 * v24; /*0x582677*/
              v27 = *(_DWORD *)(v19 + 4); /*0x58267a*/
              *(_DWORD *)(v19 + 16) = v25; /*0x58267d*/
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
  v30 = *(unsigned __int8 *)(v6 + 8); /*0x5826a9*/
  if ( *(__int16 *)(v6 + 6) == v98 ) /*0x5826ae*/
  {
    do /*0x5826f5*/
    {
      if ( v94 > v100 ) /*0x5826ba*/
        break; /*0x5826ba*/
      v31 = *(unsigned __int8 *)(v8 + 8) - v30; /*0x5826c3*/
      if ( (int)((HIDWORD(v31) ^ v31) - HIDWORD(v31)) >= 2 ) /*0x5826cb*/
        break; /*0x5826cb*/
      *(_WORD *)(v8 + 2 * aP2) = aP3; /*0x5826da*/
      v30 = *(unsigned __int8 *)(v8 + 8); /*0x5826e0*/
      v8 += 10; /*0x5826e7*/
      ++v94; /*0x5826eb*/
    }
    while ( *(__int16 *)(v8 + 6) == v98 ); /*0x5826f5*/
  }
  v90 = *(__int16 *)(v8 + 2 * aP2); /*0x582701*/
  if ( v90 > 0 ) /*0x582705*/
  {
    v32 = *(unsigned __int8 *)(v8 + 8) - v30; /*0x582712*/
    if ( (int)((HIDWORD(v32) ^ v32) - HIDWORD(v32)) < 2 && v90 != v97 ) /*0x58272a*/
    {
      LOWORD(v101) = v94; /*0x582741*/
      HIWORD(v101) = v115; /*0x58274d*/
      if ( LayerClass::IsWithinUsableArea(this, (__int16 *)&v101, 1) ) /*0x582752*/
      {
        LOWORD(v101) = v94 - 1; /*0x582770*/
        HIWORD(v101) = v115; /*0x58277c*/
        if ( LayerClass::IsWithinUsableArea(this, (__int16 *)&v101, 1) ) /*0x582781*/
        {
          v33 = (unsigned __int16)aP3 | (v90 << 16); /*0x5827a8*/
          LOBYTE(v113) = 0; /*0x5827b2*/
          v34 = *v102 + 24 * (aP3 & 0xF | (16 * (v90 & 0xF))); /*0x5827bc*/
          v35 = *(_DWORD *)(v34 + 16); /*0x5827bf*/
          v36 = *(_DWORD **)(v34 + 4); /*0x5827c3*/
          v37 = v35 - 1; /*0x5827c6*/
          if ( v35 - 1 < 0 ) /*0x5827cb*/
          {
  LABEL_33:
            v38 = *(_DWORD *)(v34 + 8); /*0x5827d7*/
            if ( v35 < v38 /*0x5827fb*/
              || (*(_BYTE *)(v34 + 13) || !v38)
              && (v39 = *(_DWORD *)(v34 + 20), v39 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v34 + 8))(v34, v39 + v38, 0) )
            {
              v40 = *(_DWORD *)(v34 + 16); /*0x582802*/
              v41 = v40 + 1; /*0x582805*/
              v42 = 3 * v40; /*0x582808*/
              v43 = *(_DWORD *)(v34 + 4); /*0x58280b*/
              *(_DWORD *)(v34 + 16) = v41; /*0x58280e*/
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
  v46 = *(this + 62); /*0x58284b*/
  v110 = (v8 - v6) / 10 - 1; /*0x582851*/
  v109 = v46 + *(this + 61) + 1; /*0x58285f*/
  v101 = 10 * v109; /*0x582868*/
  v47 = v7 - 10 * v109; /*0x58286c*/
  v48 = v7 + 10 * v109; /*0x58286e*/
  v49 = v9; /*0x582870*/
  v114 = v48; /*0x582872*/
  v95 = 0; /*0x582878*/
  if ( v9 > v94 ) /*0x582886*/
    return v110; /*0x582886*/
  do /*0x582aca*/
  {
    v50 = *(__int16 *)(v47 + 2 * aP2); /*0x582892*/
    v91 = v50; /*0x582897*/
    if ( v49 == v9 ) /*0x58289b*/
    {
      v51 = v49; /*0x5828a5*/
      HIWORD(v103) = v115; /*0x5828a7*/
      LOWORD(v103) = v49 + 1; /*0x5828b3*/
      v95 = v103; /*0x5828c0*/
      v52 = v47 + 2 * (5 * v109 + 5); /*0x5828c4*/
    }
    else
    {
      v51 = v49; /*0x5828ce*/
      if ( v49 >= v94 ) /*0x5828d2*/
      {
        LOWORD(v105) = v49 - 1; /*0x582902*/
        HIWORD(v105) = v115; /*0x582907*/
        v95 = v105; /*0x582914*/
        v52 = v101 + v47 - 10; /*0x582918*/
      }
      else
      {
        LOWORD(v104) = v49; /*0x5828dc*/
        HIWORD(v104) = v115; /*0x5828e1*/
        v95 = v104; /*0x5828ee*/
        v52 = v101 + v47; /*0x5828f2*/
      }
    }
    if ( v50 || v115 <= v106 || v49 < v99 || v49 > v100 ) /*0x582939*/
    {
      if ( v50 != (unsigned __int16)aP3 && v50 != v97 ) /*0x5829ad*/
      {
        if ( v50 ) /*0x5829b5*/
        {
          v54 = *(unsigned __int8 *)(v52 + 8) - *(unsigned __int8 *)(v47 + 8); /*0x5829c9*/
          if ( (int)((HIDWORD(v54) ^ v54) - HIDWORD(v54)) < 2 /*0x5829e2*/
            && LayerClass::IsWithinUsableArea(this, (__int16 *)&v95, 1) )
          {
            HIWORD(v108) = v115 - 1; /*0x5829fd*/
            LOWORD(v108) = v51; /*0x582a07*/
            if ( LayerClass::IsWithinUsableArea(this, (__int16 *)&v108, 1) ) /*0x582a0c*/
            {
              v55 = (unsigned __int16)aP3 | (v91 << 16); /*0x582a26*/
              if ( v49 < v99 || (LOBYTE(v113) = 0, v49 > v100) ) /*0x582a37*/
                LOBYTE(v113) = 1; /*0x582a39*/
              v56 = *v102 + 24 * (aP3 & 0xF | (16 * (v91 & 0xF))); /*0x582a52*/
              v57 = *(_DWORD *)(v56 + 16); /*0x582a55*/
              v58 = *(_DWORD **)(v56 + 4); /*0x582a59*/
              v59 = v57 - 1; /*0x582a5c*/
              if ( v57 - 1 < 0 ) /*0x582a61*/
              {
  LABEL_65:
                v60 = *(_DWORD *)(v56 + 8); /*0x582a6d*/
                if ( v57 < v60 /*0x582a8f*/
                  || (*(_BYTE *)(v56 + 13) || !v60)
                  && (v61 = *(_DWORD *)(v56 + 20), v61 > 0)
                  && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v56 + 8))(v56, v61 + v60, 0) )
                {
                  v62 = *(_DWORD *)(v56 + 16); /*0x582a96*/
                  v63 = v62 + 1; /*0x582a99*/
                  v64 = 3 * v62; /*0x582a9c*/
                  v65 = *(_DWORD *)(v56 + 4); /*0x582a9f*/
                  *(_DWORD *)(v56 + 16) = v63; /*0x582aa2*/
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
    else if ( *(__int16 *)(v47 + 6) == v98 ) /*0x582943*/
    {
      v53 = *(unsigned __int8 *)(v52 + 8) - *(unsigned __int8 *)(v47 + 8); /*0x582957*/
      if ( (int)((HIDWORD(v53) ^ v53) - HIDWORD(v53)) < 2 ) /*0x58295f*/
      {
        LOWORD(v107) = v51; /*0x58297f*/
        HIWORD(v107) = v115 - 1; /*0x582984*/
        Radar::ProcessSubzone(v47, aP2, aP3, aP4, &v107); /*0x582989*/
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
        LOWORD(v108) = v9 + 1; /*0x582af9*/
        HIWORD(v108) = v115; /*0x582b08*/
        v70 = v108; /*0x582b0d*/
        v71 = v68 - v101 + 10; /*0x582b11*/
      }
      else
      {
        if ( v9 < v94 ) /*0x582b1a*/
        {
          v72 = v115; /*0x582b20*/
          LOWORD(v107) = v9; /*0x582b29*/
          v71 = v68 - v101; /*0x582b2e*/
          HIWORD(v107) = v115; /*0x582b30*/
          v95 = v107; /*0x582b39*/
          goto LABEL_82; /*0x582b3d*/
        }
        v71 = v68 - 2 * (5 * v109 + 5); /*0x582b4d*/
        LOWORD(v106) = v9 - 1; /*0x582b52*/
        HIWORD(v106) = v115; /*0x582b5f*/
        v70 = v106; /*0x582b64*/
      }
      v72 = v115; /*0x582b68*/
      v95 = v70; /*0x582b6f*/
  LABEL_82:
      if ( v69 || v72 >= v111 || v9 < v99 || v9 > v100 ) /*0x582b87*/
      {
        if ( v69 != (unsigned __int16)aP3 && v69 != v97 ) /*0x582bfa*/
        {
          if ( v69 ) /*0x582c02*/
          {
            v74 = *(unsigned __int8 *)(v114 + 8) - *(unsigned __int8 *)(v71 + 8); /*0x582c18*/
            if ( (int)((HIDWORD(v74) ^ v74) - HIDWORD(v74)) < 2 /*0x582c33*/
              && LayerClass::IsWithinUsableArea(this, (__int16 *)&v95, 1) )
            {
              LOWORD(v104) = v9; /*0x582c4a*/
              HIWORD(v104) = v72 + 1; /*0x582c4f*/
              if ( LayerClass::IsWithinUsableArea(this, (__int16 *)&v104, 1) ) /*0x582c54*/
              {
                v75 = (unsigned __int16)aP3 | (v92 << 16); /*0x582c6e*/
                if ( v9 < v99 || (LOBYTE(v113) = 0, v9 > v100) ) /*0x582c7f*/
                  LOBYTE(v113) = 1; /*0x582c81*/
                v76 = *v102 + 24 * (aP3 & 0xF | (16 * (v92 & 0xF))); /*0x582c9c*/
                v77 = *(_DWORD *)(v76 + 16); /*0x582c9f*/
                v78 = *(_DWORD **)(v76 + 4); /*0x582ca3*/
                v79 = v77 - 1; /*0x582ca6*/
                if ( v77 - 1 < 0 ) /*0x582cab*/
                {
  LABEL_102:
                  v80 = *(_DWORD *)(v76 + 8); /*0x582cb7*/
                  if ( v77 < v80 /*0x582cd9*/
                    || (*(_BYTE *)(v76 + 13) || !v80)
                    && (v81 = *(_DWORD *)(v76 + 20), v81 > 0)
                    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v76 + 8))(v76, v81 + v80, 0) )
                  {
                    v82 = *(_DWORD *)(v76 + 16); /*0x582ce0*/
                    v83 = v82 + 1; /*0x582ce3*/
                    v84 = 3 * v82; /*0x582ce6*/
                    v85 = *(_DWORD *)(v76 + 4); /*0x582ce9*/
                    *(_DWORD *)(v76 + 16) = v83; /*0x582cec*/
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
        v114 += 10; /*0x582d0a*/
        v68 = v114; /*0x582d0e*/
      }
      else if ( *(__int16 *)(v68 + 6) == v98 /*0x582ba7*/
             && (v73 = *(unsigned __int8 *)(v68 + 8) - *(unsigned __int8 *)(v71 + 8),
                 (int)((HIDWORD(v73) ^ v73) - HIDWORD(v73)) < 2) )
      {
        LOWORD(v105) = v9; /*0x582bc3*/
        HIWORD(v105) = v72 + 1; /*0x582bc8*/
        Radar::ProcessSubzone(v68, aP2, aP3, aP4, &v105); /*0x582bcd*/
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
  return v110; /*0x582d1e*/
}
}
// 0x584550
namespace gamemd {
AbstractClass * * Radar::Update(IUnknown * aP1)
{
  _DWORD *v2; // ebx
  int v3; // ebp
  int v4; // ecx
  int v5; // edi
  int v6; // edi
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // edi
  int v10; // edx
  int v11; // eax
  int v12; // esi
  int v13; // edi
  __int16 v14; // bp
  int v15; // edx
  int v16; // eax
  _WORD *v17; // ecx
  int v18; // ecx
  int v19; // ebp
  _DWORD *v20; // edi
  int v21; // eax
  int v22; // esi
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  _DWORD *v26; // edi
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
  __int16 *v45; // ecx
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
  _DWORD *v72; // ecx
  int v73; // eax
  int v74; // esi
  int v75; // eax
  int v76; // esi
  _DWORD *v77; // edi
  int v78; // ecx
  int *v79; // edx
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
  _DWORD *v93; // [esp+28h] [ebp-8Ch]
  int v94; // [esp+28h] [ebp-8Ch]
  int v95; // [esp+28h] [ebp-8Ch]
  _BYTE *v96; // [esp+28h] [ebp-8Ch]
  int i; // [esp+2Ch] [ebp-88h]
  _DWORD *v98; // [esp+30h] [ebp-84h]
  int v99; // [esp+30h] [ebp-84h]
  int v100; // [esp+30h] [ebp-84h]
  int v101; // [esp+30h] [ebp-84h]
  int v102; // [esp+34h] [ebp-80h]
  _DWORD *v103; // [esp+34h] [ebp-80h]
  int v104; // [esp+38h] [ebp-7Ch] BYREF
  int v105; // [esp+3Ch] [ebp-78h]
  int v106; // [esp+40h] [ebp-74h]
  int v107; // [esp+44h] [ebp-70h]
  __int16 v108; // [esp+48h] [ebp-6Ch] BYREF
  __int16 v109; // [esp+4Ah] [ebp-6Ah]
  void **v110; // [esp+4Ch] [ebp-68h] BYREF
  void *v111; // [esp+50h] [ebp-64h]
  int v112; // [esp+54h] [ebp-60h]
  char v113; // [esp+59h] [ebp-5Bh]
  int v114; // [esp+5Ch] [ebp-58h]
  int v115; // [esp+60h] [ebp-54h]
  _DWORD *v116; // [esp+64h] [ebp-50h]
  _WORD v117[2]; // [esp+68h] [ebp-4Ch] BYREF
  _WORD v118[2]; // [esp+6Ch] [ebp-48h] BYREF
  _WORD v119[2]; // [esp+70h] [ebp-44h] BYREF
  _WORD v120[2]; // [esp+74h] [ebp-40h] BYREF
  _WORD v121[2]; // [esp+78h] [ebp-3Ch] BYREF
  _DWORD *v122; // [esp+7Ch] [ebp-38h]
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
  if ( (unsigned __int8)LayerClass::IsWithinUsableArea(aP1, 1) )
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
      WordVector::Constructor(0, 0); /*0x5845c1*/
      v7 = (_DWORD *)v2[i + 32]; /*0x5845c6*/
      v110 = &DynamicVectorClass<unsigned short>::`vftable'; /*0x5845cd*/
      v115 = 10; /*0x5845d5*/
      v114 = 0; /*0x5845dd*/
      v8 = v7[2]; /*0x5845e1*/
      v122 = v7; /*0x5845e4*/
      if ( v8 > 0 ) /*0x5845ea*/
      {
        v102 = 0; /*0x5845ec*/
        do /*0x58460e*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)(v102 + *v7) + 12))(v102 + *v7); /*0x5845fa*/
          ++v6; /*0x584604*/
          v102 += 24; /*0x58460a*/
        }
        while ( v6 < v7[2] ); /*0x58460e*/
      }
      v9 = v106; /*0x584618*/
      v103 = &v2[6 * i + 35]; /*0x584623*/
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
            v119[0] = v12; /*0x584656*/
            v119[1] = v89; /*0x58465b*/
            v13 = v2[28] + 10 * CellToTileIndexMap(v119); /*0x58466f*/
            v14 = *(_WORD *)(v13 + 2 * i); /*0x584672*/
            if ( v14 ) /*0x584679*/
            {
              v15 = v114; /*0x58467b*/
              v16 = v114 - 1; /*0x58467f*/
              if ( v114 - 1 >= 0 ) /*0x584684*/
              {
                v17 = (char *)v111 + 2 * v16; /*0x58468a*/
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
                if ( v114 < v112 ) /*0x5846a5*/
                  goto LABEL_20; /*0x5846a5*/
                if ( (v113 || !v112) /*0x5846c8*/
                  && v115 > 0
                  && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v110[2])(&v110, v115 + v112, 0) )
                {
                  v15 = v114; /*0x5846cf*/
  LABEL_20:
                  v114 = v15 + 1; /*0x5846d3*/
                  *((_WORD *)v111 + v15) = v14; /*0x5846de*/
                }
              }
            }
            v121[0] = v12; /*0x5846e2*/
            *(_WORD *)(v13 + 2 * i) = 0; /*0x5846f7*/
            v121[1] = v89; /*0x5846fd*/
            ++v12; /*0x58470a*/
            *(_WORD *)(v13 + 6) = *(_WORD *)(v2[26] + 4 * CellToTileIndexMap(v121) + 2); /*0x584712*/
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
      v18 = v114 - 1; /*0x584748*/
      v90 = v114 - 1; /*0x58474f*/
      if ( v114 - 1 >= 0 ) /*0x584753*/
      {
        v93 = &v2[6 * v3 + 36]; /*0x584760*/
        while ( 1 ) /*0x584776*/
        {
          v19 = *((unsigned __int16 *)v111 + v18); /*0x584776*/
          v20 = (_DWORD *)(*v93 + 36 * v19); /*0x584782*/
          v98 = v20; /*0x584785*/
          v21 = v20[4] - 1; /*0x58478c*/
          v85 = v21; /*0x58478d*/
          if ( v21 >= 0 ) /*0x584791*/
          {
            while ( 1 ) /*0x5847a8*/
            {
              v22 = *v93 + 36 * *(_DWORD *)(v20[1] + 8 * v21); /*0x5847a8*/
              v23 = *(_DWORD *)(v22 + 16); /*0x5847ab*/
              v24 = v23 - 1; /*0x5847af*/
              v25 = v23 - 1; /*0x5847b2*/
              if ( v23 - 1 >= 0 ) /*0x5847b6*/
              {
                v26 = (_DWORD *)(*(_DWORD *)(v22 + 4) + 8 * v25); /*0x5847bb*/
                while ( *v26 != v19 ) /*0x5847c0*/
                {
                  --v25; /*0x5847c2*/
                  v26 -= 2; /*0x5847c3*/
                  if ( v25 < 0 ) /*0x5847c8*/
                    goto LABEL_39; /*0x5847c8*/
                }
                if ( v25 < v23 ) /*0x5847ce*/
                {
                  for ( *(_DWORD *)(v22 + 16) = v24; /*0x5847d5*/
                        v25 < *(_DWORD *)(v22 + 16);
                        *(_DWORD *)(v27 + 8 * v25 - 4) = *(_DWORD *)(v27 + 8 * v25 + 4) )
                  {
                    v27 = *(_DWORD *)(v22 + 4); /*0x5847d7*/
                    ++v25; /*0x5847da*/
                    *(_DWORD *)(v27 + 8 * v25 - 8) = *(_DWORD *)(v27 + 8 * v25); /*0x5847de*/
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
          (*(void (__thiscall **)(_DWORD *))(*v20 + 12))(v20); /*0x584804*/
          if ( --v90 < 0 ) /*0x584810*/
            break; /*0x584810*/
          v18 = v90; /*0x584766*/
        }
        v9 = v106; /*0x584816*/
        v11 = v104; /*0x58481a*/
        v10 = v105; /*0x58481e*/
      }
      v28 = v10; /*0x584826*/
      v86 = v2[i + 29]; /*0x58482c*/
      if ( v10 < v10 + v107 ) /*0x584838*/
        break; /*0x584838*/
  LABEL_73:
      v2[i + 29] = v86; /*0x584ab8*/
      v43 = v2[24] - 1; /*0x584ac7*/
      if ( v43 >= 0 ) /*0x584ac8*/
      {
        v44 = 16 * v43; /*0x584ad0*/
        v100 = 16 * v43; /*0x584ad4*/
        v95 = v2[24]; /*0x584ad8*/
        do /*0x584b53*/
        {
          v45 = (__int16 *)(v2[21] + v44); /*0x584adc*/
          v46 = *v45; /*0x584adf*/
          if ( v46 >= v11 && v46 < v9 + v11 && (v47 = v45[1], v47 >= v10) && v47 < v10 + v107 /*0x584b1e*/
            || (v48 = v45[2], v48 >= v11) && v48 < v9 + v11 && (v49 = v45[3], v49 >= v10) && v49 < v10 + v107 )
          {
            if ( *((_BYTE *)v45 + 8) ) /*0x584b20*/
            {
              RadarClass::RenderBlips(v45, i); /*0x584b2e*/
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
      v87 = 0; /*0x584b57*/
      do /*0x584c85*/
      {
        if ( *(int *)(v50 + *v122 + 16) > 0 ) /*0x584b6b*/
        {
          v101 = *(_DWORD *)(v50 + *v122 + 16); /*0x584b74*/
          v96 = (_BYTE *)(*(_DWORD *)(*v122 + v50 + 4) + 8); /*0x584b7b*/
          do /*0x584c6a*/
          {
            v51 = *v96; /*0x584b86*/
            v52 = (unsigned __int16)*((_DWORD *)v96 - 1); /*0x584b95*/
            v53 = (unsigned __int16)HIWORD(*((_DWORD *)v96 - 1)); /*0x584b9b*/
            v54 = v103[1]; /*0x584ba1*/
            LOBYTE(v132) = *v96; /*0x584ba4*/
            v55 = *(_DWORD *)(v54 + 36 * v52 + 8); /*0x584bae*/
            v56 = v54 + 36 * v52; /*0x584bb2*/
            if ( *(_DWORD *)(v56 + 16) < v55 /*0x584bd8*/
              || (*(_BYTE *)(v56 + 13) || !v55)
              && (v57 = *(_DWORD *)(v56 + 20), v57 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v56 + 8))(v56, v57 + v55, 0) )
            {
              v58 = *(_DWORD *)(v56 + 16); /*0x584bdf*/
              v59 = *(_DWORD *)(v56 + 4); /*0x584be2*/
              *(_DWORD *)(v56 + 16) = v58 + 1; /*0x584be8*/
              v60 = v132; /*0x584beb*/
              *(_DWORD *)(v59 + 8 * v58) = v53; /*0x584bf2*/
              *(_DWORD *)(v59 + 8 * v58 + 4) = v60; /*0x584bf5*/
            }
            LOBYTE(v133) = v51; /*0x584c01*/
            v61 = v103[1]; /*0x584c08*/
            v62 = *(_DWORD *)(v61 + 36 * v53 + 8); /*0x584c0b*/
            v63 = v61 + 36 * v53; /*0x584c0f*/
            if ( *(_DWORD *)(v63 + 16) < v62 /*0x584c35*/
              || (*(_BYTE *)(v63 + 13) || !v62)
              && (v64 = *(_DWORD *)(v63 + 20), v64 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v63 + 8))(v63, v64 + v62, 0) )
            {
              v65 = *(_DWORD *)(v63 + 16); /*0x584c3c*/
              v66 = *(_DWORD *)(v63 + 4); /*0x584c3f*/
              *(_DWORD *)(v63 + 16) = v65 + 1; /*0x584c45*/
              v67 = v133; /*0x584c48*/
              *(_DWORD *)(v66 + 8 * v65) = v52; /*0x584c4f*/
              *(_DWORD *)(v66 + 8 * v65 + 4) = v67; /*0x584c52*/
            }
            v42 = v101 == 1; /*0x584c61*/
            v96 += 12; /*0x584c62*/
            --v101; /*0x584c66*/
          }
          while ( !v42 ); /*0x584c6a*/
          v50 = v87; /*0x584c70*/
          v2 = v116; /*0x584c74*/
        }
        v50 += 24; /*0x584c78*/
        v87 = v50; /*0x584c81*/
      }
      while ( v50 < 6144 ); /*0x584c85*/
      v110 = &VectorClass<unsigned short>::`vftable'; /*0x584c93*/
      if ( v111 && v113 ) /*0x584ca3*/
      {
        __3_YAXPAX_Z(v111); /*0x584ca6*/
        v111 = 0; /*0x584cae*/
      }
      v113 = 0; /*0x584cb6*/
      v68 = i - 1 < 0; /*0x584cbb*/
      v112 = 0; /*0x584cbc*/
      if ( v68 ) /*0x584cc4*/
      {
        v69 = aP1[1]; /*0x584ce3*/
        v70 = *aP1 - *aP1 % 8; /*0x584ce9*/
        v104 = v70; /*0x584cf2*/
        v71 = v69 - v69 % 8; /*0x584cfd*/
        v92 = v71; /*0x584cff*/
        v72 = (_DWORD *)(v71 + 8); /*0x584d03*/
        v116 = (_DWORD *)(v71 + 8); /*0x584d08*/
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
                v108 = v74; /*0x584d2c*/
                v109 = v71; /*0x584d31*/
                if ( (unsigned __int8)LayerClass::IsWithinUsableArea(&v108, 1) ) /*0x584d36*/
                {
                  v75 = (__int16)v74 + (__int16)v71 * (v2[62] + v2[61] + 1); /*0x584d5c*/
                  if ( v75 >= 0 ) /*0x584d5e*/
                  {
                    v78 = v2[27]; /*0x584dc6*/
                    if ( v75 >= v78 ) /*0x584dcb*/
                      v75 = v78 - 1; /*0x584dcd*/
                  }
                  else
                  {
                    v75 = 0; /*0x584d60*/
                  }
                  v79 = v2 + 36; /*0x584dd6*/
                  v80 = 2; /*0x584ddc*/
                  v81 = (__int16 *)(v2[28] + 10 * v75); /*0x584de1*/
                  do /*0x584dfc*/
                  {
                    v82 = *v79; /*0x584de7*/
                    v83 = v81[1]; /*0x584de9*/
                    v84 = 9 * *v81; /*0x584ded*/
                    v79 += 6; /*0x584df0*/
                    ++v81; /*0x584df3*/
                    --v80; /*0x584df6*/
                    *(_WORD *)(v82 + 4 * v84 + 24) = v83; /*0x584df7*/
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
              v72 = v116; /*0x584e1a*/
            }
            v92 = ++v71; /*0x584e21*/
          }
          while ( v71 < (int)v72 ); /*0x584e25*/
        }
        MapClass::AllocArrays(&g_AudioInitFlag); /*0x584e30*/
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
      v118[0] = v29; /*0x584862*/
      v118[1] = v28; /*0x584867*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea(v118, 1) )
      {
        v117[0] = v29; /*0x584880*/
        v117[1] = v28; /*0x584885*/
        v30 = Cell::CoordToIndex(v117); /*0x58488a*/
        if ( v30 >= 0 ) /*0x584891*/
        {
          v31 = v2[27]; /*0x584897*/
          if ( v30 >= v31 ) /*0x58489c*/
            v30 = v31 - 1; /*0x58489e*/
        }
        else
        {
          v30 = 0; /*0x584893*/
        }
        v32 = v2[28]; /*0x5848a1*/
        v120[0] = v29; /*0x5848a7*/
        v120[1] = v28; /*0x5848ac*/
        v91 = v32 + 10 * v30; /*0x5848bb*/
        v33 = Cell::CoordToIndex(v120); /*0x5848bf*/
        if ( v33 >= 0 ) /*0x5848c6*/
        {
          v34 = v2[27]; /*0x5848cc*/
          if ( v33 >= v34 ) /*0x5848d1*/
            v33 = v34 - 1; /*0x5848d3*/
        }
        else
        {
          v33 = 0; /*0x5848c8*/
        }
        v99 = *(unsigned __int8 *)(v2[26] + 4 * v33); /*0x5848e3*/
        if ( v99 != 7 && !*(_WORD *)(v91 + 2 * i) )
        {
          v108 = v29; /*0x58491b*/
          v109 = v28; /*0x584920*/
          Radar::ProcessSubzone(v91, i, v86, &v104, &v108); /*0x584925*/
          VectorClass::ConstructSubzone(0, 0); /*0x584932*/
          v123 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58493b*/
          v128 = 10; /*0x584943*/
          v127 = 0; /*0x58494e*/
          VectorClass::CleanupSubzone(&v123); /*0x584955*/
          LOWORD(v129) = 0; /*0x58495b*/
          v130 = 0; /*0x584963*/
          v131 = 0; /*0x58496a*/
          v35 = (int)&v2[6 * i + 35]; /*0x584971*/
          v36 = v2[6 * i + 37]; /*0x584975*/
          if ( v2[6 * i + 39] < v36 /*0x58499a*/
            || (BYTE1(v2[6 * i + 38]) || !v36)
            && (v37 = v2[6 * i + 40], v37 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v103 + 8))(v103, v37 + v36, 0) )
          {
            v38 = v2[6 * i + 39]; /*0x5849a5*/
            v2[6 * i + 39] = v38 + 1; /*0x5849ae*/
            v39 = v2[6 * i + 36] + 36 * v38; /*0x5849b8*/
            Radar::CopyDataArray(&v123); /*0x5849be*/
            *(_WORD *)(v39 + 24) = v129; /*0x5849cb*/
            *(_DWORD *)(v39 + 28) = v130; /*0x5849d6*/
            *(_DWORD *)(v39 + 32) = v131; /*0x5849e0*/
            v35 = (int)&v2[6 * i + 35]; /*0x5849e3*/
          }
          v123 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x5849eb*/
          if ( Block && BYTE1(v126) ) /*0x5849fd*/
          {
            __3_YAXPAX_Z(Block); /*0x584a00*/
            Block = 0; /*0x584a08*/
          }
          v40 = v94 + *(_DWORD *)(v35 + 4); /*0x584a1b*/
          BYTE1(v126) = 0; /*0x584a20*/
          v125 = 0; /*0x584a25*/
          v41 = i == 2 ? 0 : *(_WORD *)(v91 + 2 * (i + 1));
          *(_WORD *)(v40 + 24) = v41; /*0x584a3c*/
          *(_DWORD *)(v40 + 28) = v99; /*0x584a44*/
          *(_DWORD *)(v40 + 20) = 16; /*0x584a47*/
          *(_DWORD *)(v40 + 32) = (__int16)v29 / 4 + 130 * ((__int16)v28 / 4) + 131; /*0x584a78*/
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
    v77 = v2 + 47; /*0x584d69*/
    do /*0x584d84*/
    {
      (*(void (__thiscall **)(_DWORD *))(*v77 + 12))(v77); /*0x584d73*/
      Subzone::BuildGraph(v76--); /*0x584d79*/
      v77 -= 6; /*0x584d7f*/
    }
    while ( v76 >= 0 ); /*0x584d84*/
    MapClass::AllocArrays(&g_AudioInitFlag); /*0x584d8b*/
    v110 = &VectorClass<unsigned short>::`vftable'; /*0x584d94*/
    if ( v111 && v113 ) /*0x584daa*/
      __3_YAXPAX_Z(v111); /*0x584db1*/
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
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x58abe0*/
    v3 = a2[2]; /*0x58abe3*/
    *(this + 2) = v3; /*0x58abea*/
    if ( v3 ) /*0x58abed*/
    {
      v4 = (char *)__2_YAPAXI_Z(8 * v3); /*0x58abf7*/
      if ( v4 ) /*0x58ac01*/
      {
        v5 = v4; /*0x58ac06*/
        if ( v3 - 1 >= 0 ) /*0x58ac0a*/
        {
          v6 = v3; /*0x58ac0c*/
          do /*0x58ac16*/
          {
            *(_DWORD *)v5 = 0; /*0x58ac0d*/
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
      *(this + 1) = (int)v4; /*0x58ac1e*/
      if ( v4 ) /*0x58ac21*/
      {
        v7 = *(this + 2); /*0x58ac23*/
        v8 = 0; /*0x58ac26*/
        *((_BYTE *)this + 13) = 1; /*0x58ac2a*/
        if ( v7 > 0 ) /*0x58ac2e*/
        {
          do /*0x58ac4a*/
          {
            v9 = a2[1]; /*0x58ac30*/
            v10 = *(this + 1); /*0x58ac33*/
            *(_DWORD *)(v10 + 8 * v8) = *(_DWORD *)(v9 + 8 * v8); /*0x58ac39*/
            *(_DWORD *)(v10 + 8 * v8 + 4) = *(_DWORD *)(v9 + 8 * v8 + 4); /*0x58ac40*/
            ++v8; /*0x58ac47*/
          }
          while ( v8 < *(this + 2) ); /*0x58ac4a*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x58ac4e*/
      *((_BYTE *)this + 13) = 0; /*0x58ac51*/
    }
  }
  *(this + 4) = a2[4]; /*0x58ac58*/
  *(this + 5) = a2[5]; /*0x58ac5e*/
  return this; /*0x58ac57*/
}
}
// 0x6558B0
namespace gamemd {
int Radar::PixelIndex()
{
  return *(this + 1) + 251 * *(this + 2); /*0x6558c4*/
}
}
// 0x656EC0
namespace gamemd {
MapClass * * Radar::RenderMinimap()
{
  int *v2; // ebx
  int v3; // ecx
  __int16 *v4; // eax
  float *v5; // eax
  int v6; // ecx
  int v7; // ebp
  int v8; // eax
  int *v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // ebp
  double v13; // st7
  int *v14; // ebp
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
  _DWORD *v49; // eax
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
  float v91; // [esp+52h] [ebp-34h] BYREF
  int v92; // [esp+56h] [ebp-30h]
  int v93; // [esp+5Ah] [ebp-2Ch]
  int v94; // [esp+5Eh] [ebp-28h]
  int *v95; // [esp+62h] [ebp-24h]
  int v96; // [esp+66h] [ebp-20h] BYREF
  int v97; // [esp+6Ah] [ebp-1Ch]
  int v98; // [esp+6Eh] [ebp-18h]
  int v99; // [esp+72h] [ebp-14h]
  int v100; // [esp+76h] [ebp-10h]
  int v101; // [esp+7Ah] [ebp-Ch]
  int v102; // [esp+7Eh] [ebp-8h]
  int v103; // [esp+82h] [ebp-4h]

  v2 = (int *)(this + 4620); /*0x656ec9*/
  v95 = (int *)(this + 4620); /*0x656ed1*/
  v100 = *(_DWORD *)(this + 4620); /*0x656ed7*/
  v101 = *(_DWORD *)(this + 4624); /*0x656ede*/
  v102 = *(_DWORD *)(this + 4628); /*0x656ee5*/
  v3 = *(_DWORD *)(this + 5296); /*0x656ee9*/
  v103 = v2[3]; /*0x656ef9*/
  if ( v3 != 1 || (v86 = 1, *(_DWORD *)(this + 5292) != 1) ) /*0x656f0b*/
    v86 = 0; /*0x656f0d*/
  LODWORD(v91) = DSurface_ViewBounds + g_Map_VisibleRectOffset / 2; /*0x656f28*/
  v92 = g_Map_VisibleRect + g_DSurface_WindowOffset / 2; /*0x656f3e*/
  v4 = (__int16 *)Tactical::PixelToCell((int)g_TacticalClass_Instance, &v96, (int *)&v91); /*0x656f4e*/
  v5 = (float *)CellCoord::To_CellObj(&MapClass_Instance, v4); /*0x656f59*/
  v6 = *(_DWORD *)(this + 5264); /*0x656f61*/
  v91 = v5[9]; /*0x656f67*/
  v7 = SHIWORD(v91); /*0x656f71*/
  v8 = SLOWORD(v91); /*0x656f76*/
  v9 = (int *)(this + 5276); /*0x656f7b*/
  v10 = SLOWORD(v91) + v6 - SHIWORD(v91); /*0x656f81*/
  v91 = *(float *)(this + 5276); /*0x656f83*/
  v88 = v10; /*0x656f87*/
  v96 = v8; /*0x656f8b*/
  v11 = Math::RoundToInt((double)v10 * *(float *)(this + 5256) + (double)SLODWORD(v91)); /*0x656f9d*/
  v12 = v7 - *(_DWORD *)(this + 5272); /*0x656fac*/
  v88 = v11; /*0x656fae*/
  v96 += v12; /*0x656fb4*/
  v96 = Math::RoundToInt((double)v96 * *(float *)(this + 5256) + (double)*(int *)(this + 5280)); /*0x656fd1*/
  if ( v88 == LODWORD(v91) - 1 ) /*0x656fdc*/
    ++v88; /*0x656fdf*/
  v13 = 60.0 / *(float *)(this + 5256); /*0x656fe9*/
  v14 = (int *)(this + 5340); /*0x656ff3*/
  v94 = 1; /*0x657000*/
  *(_DWORD *)(this + 5340) = v88; /*0x657004*/
  *(_DWORD *)(this + 5344) = v96; /*0x65700a*/
  *(_DWORD *)(this + 5348) = 1; /*0x65700d*/
  *(_DWORD *)(this + 5352) = 1; /*0x657010*/
  v96 = 2 * g_Map_VisibleRectOffset; /*0x65701c*/
  v15 = Math::RoundToInt(v13); /*0x65702c*/
  v16 = 30.0 / *(float *)(this + 5256); /*0x657037*/
  *(_DWORD *)(this + 5348) = v15; /*0x65703d*/
  v96 = 2 * g_DSurface_WindowOffset; /*0x65704c*/
  v91 = v16; /*0x657050*/
  *(_DWORD *)(this + 5352) = Math::RoundToInt(v13); /*0x657061*/
  v88 = Math::RoundToInt(v13); /*0x657074*/
  v96 = 2 * g_DSurface_WindowOffset; /*0x657082*/
  v17 = Math::RoundToInt((double)(2 * g_DSurface_WindowOffset) / v91 * 0.5); /*0x657094*/
  *(_DWORD *)(this + 5340) -= v88; /*0x6570a2*/
  *(_DWORD *)(this + 5344) -= v17; /*0x6570aa*/
  v18 = *(_DWORD *)(this + 5340); /*0x6570ad*/
  v19 = *v9; /*0x6570b0*/
  if ( v18 >= *v9 ) /*0x6570b4*/
  {
    v91 = *(float *)(this + 5284); /*0x6570c1*/
    if ( v18 + *(_DWORD *)(this + 5348) >= v19 + LODWORD(v91) ) /*0x6570d5*/
      *v14 = LODWORD(v91) - *(_DWORD *)(this + 5348) + v19 - 1; /*0x6570e7*/
  }
  else
  {
    *v14 = v19; /*0x6570b6*/
  }
  v20 = *(_DWORD *)(this + 5344); /*0x6570ea*/
  v21 = *(_DWORD *)(this + 5280); /*0x6570f0*/
  if ( v20 >= v21 ) /*0x6570f8*/
  {
    v22 = *(_DWORD *)(this + 5288); /*0x657108*/
    if ( v20 + *(_DWORD *)(this + 5352) >= v22 + *(_DWORD *)(this + 5280) ) /*0x65711a*/
      *(_DWORD *)(this + 5344) = v22 - *(_DWORD *)(this + 5352) + *(_DWORD *)(this + 5280) - 1; /*0x65712e*/
  }
  else
  {
    *(_DWORD *)(this + 5344) = v21; /*0x6570fa*/
  }
  if ( *(_BYTE *)(this + 5338) ) /*0x657134*/
  {
    *(_DWORD *)(this + 5356) = *v14; /*0x657148*/
    *(_DWORD *)(this + 5360) = *(_DWORD *)(this + 5344); /*0x65714d*/
    *(_DWORD *)(this + 5364) = *(_DWORD *)(this + 5348); /*0x657153*/
    *(_DWORD *)(this + 5368) = *(_DWORD *)(this + 5352); /*0x657159*/
  }
  if ( *(_BYTE *)(this + 5337) /*0x6571bc*/
    || *(_DWORD *)(this + 5356) != *v14
    || *(_DWORD *)(this + 5360) != *(_DWORD *)(this + 5344)
    || *(_DWORD *)(this + 5364) != *(_DWORD *)(this + 5348)
    || *(_DWORD *)(this + 5368) != *(_DWORD *)(this + 5352)
    || !(unsigned __int8)Render_Render_660530()
    || *(int *)(this + 4716) > 0
    || *(int *)(this + 4660) > 0
    || (unsigned __int8)HouseClass::ProcessData(&g_VisibilitySystem) )
  {
    if ( v86 ) /*0x6571cf*/
      *(_BYTE *)(this + 5337) = 0; /*0x6571d1*/
    Surface::RenderRadar(this); /*0x6571da*/
    v87 = 0; /*0x6571ea*/
    if ( *(_DWORD *)(this + 5356) != *v14 /*0x657216*/
      || *(_DWORD *)(this + 5360) != *(_DWORD *)(this + 5344)
      || *(_DWORD *)(this + 5364) != *(_DWORD *)(this + 5348)
      || *(_DWORD *)(this + 5368) != *(_DWORD *)(this + 5352) )
    {
      for ( i = 0; i < *(_DWORD *)(this + 5368); ++i ) /*0x657226*/
      {
        v24 = *(_DWORD *)(this + 5280); /*0x657236*/
        v25 = i + *(_DWORD *)(this + 5360); /*0x65723e*/
        v96 = *(_DWORD *)(this + 5356) - *v9; /*0x657240*/
        v97 = v25 - v24; /*0x65724d*/
        FogOfWar::RevealCell(this, &v96); /*0x657251*/
        v26 = i + *(_DWORD *)(this + 5360) - *(_DWORD *)(this + 5280); /*0x65727c*/
        v96 = *(_DWORD *)(this + 5364) + *(_DWORD *)(this + 5356) - 1 - *v9; /*0x65727e*/
        v97 = v26; /*0x657285*/
        FogOfWar::RevealCell(this, &v96); /*0x657289*/
      }
      for ( j = 0; j < *(_DWORD *)(this + 5364); ++j ) /*0x6572a3*/
      {
        v28 = j + *(_DWORD *)(this + 5356) - *v9; /*0x6572bd*/
        v97 = *(_DWORD *)(this + 5360) - *(_DWORD *)(this + 5280); /*0x6572bf*/
        v96 = v28; /*0x6572c3*/
        FogOfWar::RevealCell(this, &v96); /*0x6572ce*/
        v29 = *(_DWORD *)(this + 5280); /*0x6572eb*/
        v30 = *(_DWORD *)(this + 5360) + *(_DWORD *)(this + 5368) - 1; /*0x6572f1*/
        v96 = j + *(_DWORD *)(this + 5356) - *v9; /*0x6572f5*/
        v97 = v30 - v29; /*0x6572ff*/
        FogOfWar::RevealCell(this, &v96); /*0x657306*/
      }
      v2 = v95; /*0x657316*/
      v87 = 1; /*0x65731a*/
    }
    v31 = (int *)(this + 4680); /*0x657325*/
    if ( *(int *)(this + 4688) > 0 && *(int *)(this + 4692) > 0 ) /*0x657338*/
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD, int, _DWORD, int))(**(_DWORD **)(this + 4636) + 8))( /*0x657353*/
        *(_DWORD *)(this + 4636),
        this + 4680,
        *(_DWORD *)(this + 4640),
        this + 4680,
        0,
        1);
      v32 = *(_DWORD *)(this + 5280); /*0x65735b*/
      v33 = *v9 + *v31; /*0x65735e*/
      v34 = *(_DWORD *)(this + 4684); /*0x657360*/
      v96 = v33; /*0x657363*/
      v35 = v32 + v34; /*0x657367*/
      v36 = *(_DWORD *)(this + 4692); /*0x657369*/
      v37 = v2[2] <= 0; /*0x65736c*/
      v97 = v35; /*0x657370*/
      v38 = *(_DWORD *)(this + 4688); /*0x657374*/
      v90 = v36; /*0x657377*/
      v89 = v38; /*0x65737b*/
      if ( v37 || v2[3] <= 0 ) /*0x657389*/
      {
        v42 = v90; /*0x657478*/
      }
      else if ( v38 <= 0 || v36 <= 0 ) /*0x657399*/
      {
        v33 = *v2; /*0x65745f*/
        v97 = v2[1]; /*0x657464*/
        v38 = v2[2]; /*0x657468*/
        v42 = v2[3]; /*0x65746b*/
      }
      else
      {
        v91 = *(float *)v2; /*0x6573a3*/
        v92 = v2[1]; /*0x6573aa*/
        v39 = v2[2]; /*0x6573ae*/
        v93 = v39; /*0x6573b1*/
        v94 = v2[3]; /*0x6573b8*/
        if ( SLODWORD(v91) > v33 ) /*0x6573c2*/
        {
          v40 = LODWORD(v91) - v33; /*0x6573c4*/
          v91 = *(float *)&v33; /*0x6573c6*/
          v93 = v40 + v39; /*0x6573cc*/
        }
        if ( v92 > v97 ) /*0x6573da*/
        {
          v94 += v92 - v97; /*0x6573e4*/
          v92 = v97; /*0x6573ec*/
        }
        if ( LODWORD(v91) + v93 < v89 + v33 ) /*0x657403*/
          v93 = v89 - LODWORD(v91) + v96 + 1; /*0x657413*/
        if ( v92 + v94 >= v97 + v90 ) /*0x65742d*/
        {
          v42 = v94; /*0x65744b*/
          v33 = LODWORD(v91); /*0x65744f*/
          v97 = v92; /*0x657453*/
          v38 = v93; /*0x657457*/
        }
        else
        {
          v41 = v97; /*0x657433*/
          v97 = v92; /*0x657439*/
          v38 = v93; /*0x65743d*/
          v42 = v90 - v92 + v41 + 1; /*0x657441*/
          v33 = LODWORD(v91); /*0x657445*/
        }
      }
      *v2 = v33; /*0x65747c*/
      v2[1] = v97; /*0x657482*/
      v88 = *v31; /*0x657488*/
      v43 = v88; /*0x657485*/
      v2[2] = v38; /*0x65748c*/
      v44 = v43 + *(_DWORD *)(this + 4688); /*0x657495*/
      v45 = -*(_DWORD *)(this + 4688) < 0; /*0x657497*/
      v2[3] = v42; /*0x657499*/
      if ( v45 != __OFSUB__(v43, v44) ) /*0x65749c*/
      {
        do /*0x6574f1*/
        {
          v46 = *(_DWORD *)(this + 4684); /*0x65749e*/
          if ( v46 < v46 + *(_DWORD *)(this + 4692) ) /*0x6574ae*/
          {
            do /*0x6574d9*/
            {
              v96 = v88; /*0x6574bb*/
              v97 = v46; /*0x6574bf*/
              FogOfWar::RevealArea(this, &v96); /*0x6574c3*/
              ++v46; /*0x6574d4*/
            }
            while ( v46 < *(_DWORD *)(this + 4684) + *(_DWORD *)(this + 4692) ); /*0x6574d9*/
          }
          v47 = *(_DWORD *)(this + 4688) + *v31; /*0x6574e9*/
          ++v88; /*0x6574eb*/
        }
        while ( v88 < v47 ); /*0x6574f1*/
      }
      *v31 = 0; /*0x6574f9*/
      *(_DWORD *)(this + 4684) = 0; /*0x6574fe*/
      *(_DWORD *)(this + 4688) = 0; /*0x657501*/
      *(_DWORD *)(this + 4692) = 0; /*0x657504*/
      v2 = v95; /*0x657507*/
    }
    for ( k = *(_DWORD *)(this + 4716) - 1; k >= 0; --k ) /*0x657512*/
      FogOfWar::RevealArea(this, (int *)(*(_DWORD *)(this + 4704) + 8 * k)); /*0x657520*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 4700) + 12))(this + 4700); /*0x657534*/
    Render_Render_660000(); /*0x657537*/
    v49 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 4636) + 120))( /*0x657549*/
                      *(_DWORD *)(this + 4636),
                      &v96);
    HouseClass::Render(*(_DWORD *)(this + 4636), *v49, v49[1], v49[2], v49[3]); /*0x657573*/
    if ( v86 ) /*0x65757e*/
    {
      if ( *(_BYTE *)(this + 5338) ) /*0x657584*/
      {
        v50 = VtableStub::72F510(); /*0x657595*/
        *v2 = *v9; /*0x65759b*/
        v2[1] = *(_DWORD *)(this + 5280); /*0x6575a0*/
        v2[2] = *(_DWORD *)(this + 5284); /*0x6575a6*/
        v2[3] = *(_DWORD *)(this + 5288); /*0x6575af*/
        v96 = *(_DWORD *)(this + 4580); /*0x6575ba*/
        v97 = *(_DWORD *)(this + 4588); /*0x6575d7*/
        v51 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)DSurface_Sidebar + 120))(DSurface_Sidebar, &v88); /*0x6575e2*/
        DrawToSurfaceSHP(DSurface_Sidebar, v50, dword_B04A38, 0x20u, &v96, v51, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6575fc*/
      }
      if ( v2[2] > 0 && v2[3] > 0 ) /*0x65760d*/
      {
        v52 = v2[2]; /*0x65761e*/
        v53 = v2[1] - *(_DWORD *)(this + 5280); /*0x657621*/
        v54 = v2[3]; /*0x657623*/
        v96 = *v2 - *v9; /*0x657626*/
        v97 = v53; /*0x657630*/
        v55 = *(_DWORD *)(this + 4636); /*0x65763d*/
        v98 = v52; /*0x657643*/
        v99 = v54; /*0x657647*/
        (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Sidebar + 8))( /*0x65764f*/
          DSurface_Sidebar,
          v2,
          v55,
          &v96,
          0,
          1);
      }
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)DSurface_Sidebar + 88))( /*0x657668*/
        DSurface_Sidebar,
        this + 5340,
        *(_DWORD *)(this + 4616));
      v56 = *v9; /*0x65766b*/
      v57 = *(_DWORD *)(this + 5280); /*0x65766d*/
      v58 = *(_DWORD *)(this + 5284); /*0x657670*/
      v59 = *(_DWORD *)(this + 5288); /*0x657673*/
      LODWORD(v91) = v56 - 1; /*0x657678*/
      v60 = *(_DWORD *)(this + 4616); /*0x65767c*/
      v92 = v57 - 1; /*0x657682*/
      v93 = v58 + 2; /*0x657693*/
      v94 = v59 + 2; /*0x657697*/
      (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)DSurface_Sidebar + 88))(DSurface_Sidebar, &v91, v60); /*0x6576a2*/
    }
    if ( !v87 ) /*0x6576ab*/
      goto LABEL_99; /*0x6576ab*/
    if ( *(int *)(this + 5364) <= 0 || *(int *)(this + 5368) <= 0 ) /*0x6576ca*/
    {
      v71 = v2; /*0x65775f*/
    }
    else
    {
      if ( v2[2] > 0 && v2[3] > 0 ) /*0x6576e0*/
      {
        v61 = *(_DWORD *)(this + 5356); /*0x6576e4*/
        v62 = *(_DWORD *)(this + 5360); /*0x6576e6*/
        v63 = *(_DWORD *)(this + 5364); /*0x6576e9*/
        v98 = v63; /*0x6576ec*/
        v99 = *(_DWORD *)(this + 5368); /*0x6576f3*/
        v64 = *v2; /*0x6576f7*/
        if ( v61 > *v2 ) /*0x6576fb*/
        {
          v65 = v61 - v64 + v63; /*0x6576ff*/
          v61 = *v2; /*0x657701*/
          v98 = v65; /*0x657703*/
        }
        v66 = v2[1]; /*0x657707*/
        if ( v62 > v66 ) /*0x65770c*/
        {
          v67 = v62 - v66 + v99; /*0x657714*/
          v62 = v2[1]; /*0x657716*/
          v99 = v67; /*0x657718*/
        }
        if ( v61 + v98 < v64 + v2[2] ) /*0x657729*/
          v98 = v64 - v61 + v2[2] + 1; /*0x657734*/
        v68 = v2[1] + v2[3]; /*0x65773e*/
        v69 = v99; /*0x657741*/
        if ( v99 + v62 < v68 ) /*0x65774a*/
          v69 = v68 - v62 + 1; /*0x65774f*/
        v70 = v98; /*0x657751*/
        v93 = v98; /*0x657755*/
        goto LABEL_84; /*0x657759*/
      }
      v71 = (int *)(this + 5356); /*0x65775b*/
    }
    v61 = *v71; /*0x657761*/
    v62 = v71[1]; /*0x657763*/
    v70 = v71[2]; /*0x657766*/
    v93 = v70; /*0x657769*/
    v69 = v71[3]; /*0x65776d*/
  LABEL_84:
    v37 = *(_DWORD *)(this + 5348) <= 0; /*0x657770*/
    v72 = (int *)(this + 5340); /*0x657777*/
    v94 = v69; /*0x65777d*/
    if ( !v37 && *(int *)(this + 5352) > 0 ) /*0x65778b*/
    {
      if ( v70 <= 0 || v69 <= 0 ) /*0x65779b*/
      {
        v61 = *v72; /*0x657823*/
        v62 = *(_DWORD *)(this + 5344); /*0x657826*/
        v70 = *(_DWORD *)(this + 5348); /*0x657829*/
        v69 = *(_DWORD *)(this + 5352); /*0x65782c*/
      }
      else
      {
        v73 = *v72; /*0x6577a1*/
        v37 = *v72 <= v61; /*0x6577a4*/
        v97 = *(_DWORD *)(this + 5344); /*0x6577a9*/
        v98 = *(_DWORD *)(this + 5348); /*0x6577b0*/
        v99 = *(_DWORD *)(this + 5352); /*0x6577b7*/
        if ( !v37 ) /*0x6577bb*/
        {
          v74 = v73 - v61 + v98; /*0x6577c3*/
          v73 = v61; /*0x6577c5*/
          v98 = v74; /*0x6577c7*/
        }
        if ( v97 > v62 ) /*0x6577d1*/
        {
          v75 = v97 - v62 + v99; /*0x6577d9*/
          v97 = v62; /*0x6577db*/
          v99 = v75; /*0x6577df*/
        }
        if ( v73 + v98 < v61 + v93 ) /*0x6577f1*/
          v98 = v61 - v73 + v93 + 1; /*0x6577fd*/
        v69 = v99; /*0x657805*/
        v76 = v62 + v94; /*0x657809*/
        v62 = v97; /*0x65780b*/
        if ( v99 + v97 < v76 ) /*0x657814*/
          v69 = v76 - v97 + 1; /*0x657819*/
        v61 = v73; /*0x65781b*/
        v70 = v98; /*0x65781d*/
      }
    }
    *v2 = v61; /*0x657831*/
    v2[1] = v62; /*0x657834*/
    v2[2] = v70; /*0x657837*/
    v2[3] = v69; /*0x65783a*/
  LABEL_99:
    v77 = *(_DWORD *)(this + 5344); /*0x65783d*/
    v78 = *(_DWORD *)(this + 5348); /*0x657849*/
    *(_DWORD *)(this + 5356) = *(_DWORD *)(this + 5340); /*0x65784f*/
    v79 = *(_DWORD *)(this + 5352); /*0x657855*/
    *(_DWORD *)(this + 5360) = v77; /*0x65785b*/
    *(_DWORD *)(this + 5364) = v78; /*0x657861*/
    *(_DWORD *)(this + 5368) = v79; /*0x657867*/
    Render_Render_6603B0(); /*0x65786d*/
  }
  if ( *(_DWORD *)(this + 4724) ) /*0x657872*/
  {
    v96 = *(_DWORD *)(this + 4636); /*0x657884*/
    v80 = v96; /*0x657882*/
    v81 = (*(int (__thiscall **)(int))(*(_DWORD *)v96 + 128))(v96); /*0x657896*/
    memset(*(void **)(this + 4724), 0, v81 * (*(int (__thiscall **)(int))(*(_DWORD *)v80 + 124))(v80) / 8 + 1); /*0x6578b7*/
  }
  LOBYTE(v82) = v86; /*0x6578c0*/
  if ( !v86 ) /*0x6578c6*/
  {
    v83 = v101; /*0x6578cc*/
    v84 = v102; /*0x6578d0*/
    *v2 = v100; /*0x6578d4*/
    v82 = v103; /*0x6578d6*/
    v2[1] = v83; /*0x6578da*/
    v2[2] = v84; /*0x6578dd*/
    v2[3] = v82; /*0x6578e0*/
  }
  return v82; /*0x6578e3*/
}
}
// 0x692610
namespace gamemd {
AbstractClass * * Radar::ScanWaypoints(MouseClass * aP0, MouseClass * aP1, int aP3_4)
{
  void *v3; // esi
  int ClosestEnemy; // eax
  int v6; // esi
  int v7; // eax
  _BYTE *v8; // esi
  char v9; // bl
  _BYTE *v10; // eax
  _BYTE *v11; // edi
  _DWORD *v12; // eax
  _WORD *v13; // eax
  __int16 *v14; // ebp
  _DWORD *v15; // eax
  _WORD *v16; // eax
  char *v17; // eax
  #375 *v18; // eax
  #375 *v19; // eax
  int v20; // eax
  _DWORD *v21; // edi
  bool v22; // bl
  #375 *v23; // ecx
  #375 *v24; // eax
  int v25; // edx
  _DWORD *v26; // eax
  int v27; // eax
  int v28; // [esp-4h] [ebp-24h]
  int v29; // [esp-4h] [ebp-24h]
  int v30; // [esp+10h] [ebp-10h]
  _DWORD v31[2]; // [esp+14h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+1Ch] [ebp-4h]

  v30 = 0; /*0x69261e*/
  if ( g_SelectionManager ) /*0x692626*/
  {
    v3 = aP1; /*0x692628*/
    if ( aP1 ) /*0x69262e*/
    {
      ClosestEnemy = FindRadarClosestEnemy(0, (int)aP1); /*0x692634*/
      return (*(int (__thiscall **)(int, void *, _DWORD))(*(_DWORD *)ClosestEnemy + 116))(ClosestEnemy, v3, 0); /*0x692640*/
    }
    else
    {
      v6 = aP0; /*0x69264d*/
      v7 = FindRadarClosestEnemy((__int16 *)aP0, 0); /*0x692655*/
      return (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v7 + 112))(v7, v6, aP3_4, 0); /*0x692666*/
    }
  }
  v8 = aP1; /*0x692673*/
  v9 = 1; /*0x692677*/
  v10 = AbstractClass::IsTechno(aP1); /*0x69267b*/
  v11 = v10; /*0x692680*/
  if ( v10 && !v10[1050] ) /*0x692686*/
  {
    if ( *((_DWORD *)v10 + 136) == 2 /*0x6926cf*/
      && (v28 = *((_DWORD *)HouseClass_Player + 12),
          v12 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v10 + 72))(v10, v31),
          v13 = Coord::To_Cell(&MapClass_Instance, v12),
          !Cell::IsPassableOffset(v13, v28))
      || *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v11 + 132))(v11) + 3226) )
    {
      v9 = 0; /*0x6926d9*/
    }
  }
  v14 = (__int16 *)aP0; /*0x6926db*/
  if ( !v8 /*0x692725*/
    || (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) != 6
    || v8[1050]
    || v8[1773] != 15
    || (v29 = *((_DWORD *)HouseClass_Player + 12),
        v15 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v11 + 72))(v11, v31),
        v16 = Coord::To_Cell(&MapClass_Instance, v15),
        Cell::IsPassableOffset(v16, v29)) )
  {
    if ( v9 ) /*0x692734*/
    {
      if ( v8 /*0x692766*/
        && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 312))(v8)
        && ((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) != 6 || !v8[1767])
        && (!v11 || !v11[980]) )
      {
        v30 = 7; /*0x692770*/
      }
      v17 = (char *)CellCoord::To_CellObj(&MapClass_Instance, v14); /*0x69277e*/
      if ( ((_DWORD (__stdcall *)(int, int, int))Radar::FindNearestRadarTarget)( /*0x6927bc*/
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
    if ( !v8 /*0x6927fb*/
      || !(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8)
      || (v18 = (#375 *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8),
          !(unsigned __int8)House::IsHumanPlayer(v18))
      || (v30 = 10, !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 148))(v8)) )
    {
      v30 = 15; /*0x69280d*/
    }
  }
  if ( byte_88099A ) /*0x69281c*/
  {
    v30 = 34; /*0x692820*/
    if ( v8 ) /*0x692828*/
    {
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8) ) /*0x69282e*/
      {
        v19 = (#375 *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8); /*0x692839*/
        if ( (unsigned __int8)House::IsHumanPlayer(v19) ) /*0x69283e*/
        {
          if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) == 6 ) /*0x692851*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 312))(v8) ) /*0x692857*/
            {
              if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 128))(v8) ) /*0x692865*/
              {
                v20 = *((_DWORD *)v8 + 328); /*0x69286f*/
                if ( *(_BYTE *)(v20 + 5450) ) /*0x692875*/
                {
                  if ( *(int *)(v20 + 3812) > 0 || *(_BYTE *)(v20 + 5491) ) /*0x692889*/
                    v30 = 33; /*0x692893*/
                }
              }
            }
          }
        }
      }
    }
  }
  v21 = Waypoint::FindByCell((char *)HouseClass_Player, v14); /*0x6928a7*/
  if ( byte_88099B ) /*0x6928b0*/
  {
    v22 = Mouse::IsButtonDown(BombListClass_Array) || Mouse::IsButtonDown(dword_A8EC0C); /*0x6928e4*/
    aP0 = -1; /*0x6928e8*/
    if ( v21 ) /*0x6928f0*/
      WaypointClass::FindOrCreate((char *)HouseClass_Player, (int)v21, (unsigned int *)&aP0, &aP1); /*0x692903*/
    if ( dword_8809A4 ) /*0x69290f*/
    {
      v30 = 48; /*0x692911*/
      goto LABEL_65; /*0x692919*/
    }
    if ( v22 ) /*0x692920*/
    {
      v23 = HouseClass_Player; /*0x692922*/
      if ( !v21 ) /*0x69292a*/
      {
  LABEL_61:
        if ( *((_DWORD *)v23 + 131) == -1 /*0x692996*/
          || !(unsigned __int8)((int (__fastcall *)(#375 *))Radar::IsRadarTargetEligible)(v23)
          || (v30 = 42, !LayerClass::IsWithinUsableArea(&MapClass_Instance, v14, 1)) )
        {
          v30 = 43; /*0x6929a7*/
        }
        goto LABEL_65; /*0x6929a7*/
      }
      if ( aP0 != *((_DWORD *)HouseClass_Player + 131) ) /*0x692938*/
      {
  LABEL_59:
        if ( v21 ) /*0x692970*/
        {
          v30 = 46; /*0x692972*/
          goto LABEL_65; /*0x69297a*/
        }
        goto LABEL_61; /*0x692970*/
      }
      if ( (unsigned __int8)((int (__fastcall *)(#375 *))Radar::IsRadarTargetEligible)(HouseClass_Player) /*0x692955*/
        && VectorClass::GetAtChecked(*((int **)HouseClass_Player + aP0 + 132), (int)v21) )
      {
        v30 = 47; /*0x69295e*/
        goto LABEL_65; /*0x692966*/
      }
    }
    v23 = HouseClass_Player; /*0x692968*/
    goto LABEL_59; /*0x692968*/
  }
  LABEL_65:
  if ( byte_88099C ) /*0x6929b6*/
    v30 = 60; /*0x6929b8*/
  if ( !byte_880999 ) /*0x6929c7*/
    goto LABEL_81; /*0x6929c7*/
  if ( v8
    && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8)
    && (v24 = (#375 *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8),
        (unsigned __int8)House::IsHumanPlayer(v24))
    && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 152))(v8) )
  {
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) == 6 )
    {
      v30 = (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 128))(v8) != 0 ? 14 : 12;
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
      && *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, v14) + 17) != -1 )
    {
      if ( *(_BYTE *)(*(_DWORD *)&g_BuildingTypeClass_Array->gap0[4 /*0x692abc*/
                                                                * *((_DWORD *)CellCoord::To_CellObj(
                                                                                &MapClass_Instance,
                                                                                v14)
                                                                  + 17)]
                    + 680) )
      {
        if ( *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, v14) + 20) != -1 ) /*0x692ad4*/
        {
          v26 = CellCoord::To_CellObj(&MapClass_Instance, v14); /*0x692adc*/
          v30 = 12; /*0x692af4*/
          if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)&HouseClass_Array->gap0[4 * v26[20]]) ) /*0x692aed*/
            goto LABEL_81; /*0x692afc*/
        }
      }
    }
  }
  v30 = 14; /*0x692afe*/
  LABEL_81:
  if ( g_BuildingPlacementState != -1 ) /*0x692b0e*/
  {
    v27 = (*(int (__thiscall **)(_DWORD, __int16 *, _BYTE *))(**((_DWORD **)g_SuperWeaponPool + g_BuildingPlacementState) /*0x692b1d*/
                                                            + 108))(
            *((_DWORD *)g_SuperWeaponPool + g_BuildingPlacementState),
            v14,
            v8);
    if ( v27 ) /*0x692b22*/
      v30 = v27; /*0x692b24*/
  }
  if ( !v30 && v21 ) /*0x692b32*/
    v30 = 44; /*0x692b34*/
  if ( g_RadarBlipManager ) /*0x692b43*/
    return 0; /*0x692b45*/
  else
    return v30; /*0x692b51*/
}
}