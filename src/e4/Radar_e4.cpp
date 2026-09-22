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
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD **v4; // edi
  int i; // esi

  if ( this->q060 ) /*0x431099*/
  {
    v4 = (_DWORD **)this; /*0x4310ab*/
    int v10 = 0; /*0x4310ad*/
    Radar *v11 = this; /*0x4310b5*/
    while ( 2 ) /*0x4310b9*/
    {
      for ( i = 0; i < 3; ++i ) /*0x4310b9*/
      {
        if ( *v4 ) /*0x4310bb*/
        {
          _DWORD * v6 = *v4; /*0x4310bb*/
  double v7; // st7
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
      bool v8 = ++v10 < 8; /*0x431135*/
      v11 += 3; /*0x43113c*/
      if ( v8 ) /*0x431140*/
        continue; /*0x431140*/
      break;
    }
  }
  return 0; /*0x431148*/
}
}
} // namespace gamemd

// 0x4ADCD0
namespace gamemd {
void Radar::UpdateReveal(char a1, IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  MouseClass *v5; // edx
  MouseClass *v7; // eax
  int v2 = *(_DWORD *)&HouseClass_Player[44860]; /*0x4adcd4*/
  int v3 = 0; /*0x4adcdb*/
  if ( *(int *)&HouseClass_Player[44860] > 0 ) /*0x4adcdf*/
  {
  int v4; // esi
    while ( 1 ) /*0x4adcf0*/
    {
      v4 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[44848] + 4 * v3); /*0x4adcf0*/
      if ( !v4 /*0x4add1b*/
        || *(_BYTE *)(v4 + 129)
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 44))(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[44848]
                                                                          + 4 * v3)) == 6
        && a1 )
      {
        goto LABEL_20; /*0x4add1b*/
      }
      if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v4 + 540)) ) /*0x4add27*/
        break; /*0x4add27*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6 /*0x4addce*/
        && *(_BYTE *)(*(_DWORD *)&stru_87C374[44652] + 6119)
        && (unsigned __int8)HouseClass::IsAlliedWith(*(void **)(v4 + 540), (IUnknown *)HouseClass_Player.field_0) )
      {
        (*(void (__thiscall **)(int, _DWORD, IUnknown *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 1160))( /*0x4adde4*/
          v4,
          0,
          aP1,
          0,
          0,
          0);
  _DWORD v9[3]; // [esp+20h] [ebp-18h] BYREF
        v9[0] = *(_DWORD *)(v4 + 156); /*0x4addf4*/
        int v6 = *(_DWORD *)(v4 + 608); /*0x4addf8*/
        v9[1] = *(_DWORD *)(v4 + 160); /*0x4ade04*/
        v9[2] = *(_DWORD *)(v4 + 164); /*0x4ade18*/
        MapClass::RevealArea2(&stru_87C374[13428], (IUnknown *)v9, 0, (MouseClass *)(v6 + 3), 0); /*0x4ade1c*/
      }
      else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6 /*0x4ade4c*/
             && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 1518)
             && !(unsigned __int8)House::IsHumanPlayer(*(#375 **)(v4 + 540)) )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)v4 + 1160))( /*0x4ade68*/
          v4,
          0,
          0,
          1,
          HouseClass_Player.field_0,
          0);
  _DWORD v10[3]; // [esp+2Ch] [ebp-Ch] BYREF
        v10[0] = *(_DWORD *)(v4 + 156); /*0x4ade78*/
        v7 = (MouseClass *)(*(_DWORD *)(v4 + 608) + 3); /*0x4ade85*/
        v10[1] = *(_DWORD *)(v4 + 160); /*0x4ade88*/
        v10[2] = *(_DWORD *)(v4 + 164); /*0x4ade9c*/
        MapClass::RevealArea2(&stru_87C374[13428], (IUnknown *)v10, 0, v7, 0); /*0x4adea0*/
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
  _DWORD v8[3]; // [esp+14h] [ebp-24h] BYREF
    v8[0] = *(_DWORD *)(v4 + 156); /*0x4add5c*/
    v5 = (MouseClass *)(*(_DWORD *)(v4 + 608) + 3); /*0x4add69*/
    v8[1] = *(_DWORD *)(v4 + 160); /*0x4add6c*/
    v8[2] = *(_DWORD *)(v4 + 164); /*0x4add78*/
    MapClass::RevealArea2(&stru_87C374[13428], (IUnknown *)v8, 0, v5, 0); /*0x4add84*/
    if ( !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4) + 3281) ) /*0x4add93*/
      goto LABEL_20; /*0x4add9b*/
LABEL_19:
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 1044))(v4); /*0x4adebb*/
    goto LABEL_20; /*0x4adebf*/
  }
}
}
} // namespace gamemd

// 0x5090F0
namespace gamemd {
int Radar::IsRadarTargetEligible()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  unsigned int v1 = this->q20C; /*0x5090f0*/
  if ( v1 >= 0xC ) /*0x5090f8*/
    return 0; /*0x50912a*/
  int v2 = *(this + v1 + 132); /*0x5090ff*/
  return *(_DWORD *)(v2 + 56) < g_RulesClass_Instance->InfantryVirus && *(_DWORD *)(v2 + 36) == -1; /*0x509126*/
}
}
} // namespace gamemd

// 0x5824A0
namespace gamemd {
void* Radar::ProcessSubzone(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *v6; // ebp
  IUnknown *v7; // ebx
  IUnknown *v8; // esi
  IUnknown *v47; // ebp
  IUnknown *v48; // eax
  __int16 v51; // di
  IUnknown *v68; // esi
  IUnknown *v72; // ebp
  int v101; // [esp+3Ch] [ebp-38h] BYREF
  _DWORD *v102; // [esp+40h] [ebp-34h]
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
  int v98 = SHIWORD(aP1->field_4); /*0x5824b3*/
  v7 = aP1; /*0x5824be*/
  v8 = aP1; /*0x5824c0*/
  int v9 = SLOWORD(aP5->field_0); /*0x5824c6*/
  aP5a = (IUnknown *)SHIWORD(aP5->field_0); /*0x5824cd*/
  v112 = 0; /*0x5824d4*/
  LOBYTE(v113) = 0; /*0x5824dc*/
  int v10 = aP4->field_0; /*0x5824e4*/
  v106 = aP4->field_4; /*0x5824e6*/
  int v11 = aP4->field_8; /*0x5824ea*/
  int v12 = aP4->field_C; /*0x5824ed*/
  int v97 = -1; /*0x5824f0*/
  int v96 = v9; /*0x5824fc*/
  int v100 = v11 + v10 - 1; /*0x582500*/
  int v94 = v9; /*0x582508*/
  int v99 = v10; /*0x58250c*/
  v111 = v12 + v106 - 1; /*0x582518*/
  v102 = (_DWORD *)*(this + (_DWORD)aP2 + 32); /*0x582527*/
  int v13 = LOBYTE(aP1->field_8); /*0x58252d*/
  while ( v9 >= v10 ) /*0x582538*/
  {
    __int64 v14 = LOBYTE(v7->field_8) - v13; /*0x582541*/
    if ( (int)((HIDWORD(v14) ^ v14) - HIDWORD(v14)) >= 2 ) /*0x582549*/
      break; /*0x582549*/
    *((_WORD *)&v7->field_0 + (_DWORD)aP2) = (_WORD)aP3; /*0x582556*/
    v13 = LOBYTE(v7->field_8); /*0x58255a*/
    int v15 = *(__int16 *)&v7[-1].field_1602A[2]; /*0x58255d*/
    v7 = (IUnknown *)((char *)v7 - 10); /*0x582565*/
    --v9; /*0x582568*/
    if ( v15 != v98 ) /*0x58256b*/
      break; /*0x58256b*/
    v10 = v99; /*0x582532*/
  }
  v96 = v9; /*0x582571*/
  int v89 = *((__int16 *)&v7->field_0 + (_DWORD)aP2); /*0x58257b*/
  if ( v89 > 0 ) /*0x58257f*/
  {
    __int64 v16 = LOBYTE(v7->field_8) - v13; /*0x58258c*/
    if ( (int)((HIDWORD(v16) ^ v16) - HIDWORD(v16)) < 2 && v89 != -1 ) /*0x58259f*/
    {
      HIWORD(v101) = (_WORD)aP5a; /*0x5825b1*/
      LOWORD(v101) = v9; /*0x5825bd*/
      if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v101, (TechnoClass *)1) ) /*0x5825c2*/
      {
        HIWORD(v101) = (_WORD)aP5a; /*0x5825de*/
        LOWORD(v101) = v9 + 1; /*0x5825ea*/
        if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v101, (TechnoClass *)1) ) /*0x5825ef*/
        {
          int v17 = (unsigned __int16)aP3 | (v89 << 16); /*0x582612*/
          LOBYTE(v113) = 0; /*0x58261a*/
          int v18 = *(_DWORD *)(*v102 + 24 * ((unsigned __int8)aP3 & 0xF | (16 * (v89 & 0xF))) + 16); /*0x58262a*/
          int v19 = *v102 + 24 * ((unsigned __int8)aP3 & 0xF | (16 * (v89 & 0xF))); /*0x58262e*/
          _DWORD * v20 = *(_DWORD **)(v19 + 4); /*0x582631*/
          int v21 = v18 - 1; /*0x582635*/
          if ( v18 - 1 < 0 ) /*0x58263a*/
          {
LABEL_14:
            int v22 = *(_DWORD *)(v19 + 8); /*0x582646*/
            if ( v18 < v22 /*0x58266a*/
              || (*(_BYTE *)(v19 + 13) || !v22)
  int v23; // eax
              && (v23 = *(_DWORD *)(v19 + 20), v23 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v19 + 8))(v19, v22 + v23, 0) )
            {
              int v24 = *(_DWORD *)(v19 + 16); /*0x582671*/
              int v25 = v24 + 1; /*0x582674*/
              int v26 = 3 * v24; /*0x582677*/
              int v27 = *(_DWORD *)(v19 + 4); /*0x58267a*/
              *(_DWORD *)(v19 + 16) = v25; /*0x58267d*/
              int * v28 = (int *)(v27 + 4 * v26); /*0x582680*/
              int v29 = v113; /*0x582683*/
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
  int v30 = LOBYTE(v6->field_8); /*0x5826a9*/
  if ( SHIWORD(v6->field_4) == v98 ) /*0x5826ae*/
  {
    do /*0x5826f5*/
    {
      if ( v94 > v100 ) /*0x5826ba*/
        break; /*0x5826ba*/
      __int64 v31 = LOBYTE(v8->field_8) - v30; /*0x5826c3*/
      if ( (int)((HIDWORD(v31) ^ v31) - HIDWORD(v31)) >= 2 ) /*0x5826cb*/
        break; /*0x5826cb*/
      *((_WORD *)&v8->field_0 + (_DWORD)aP2) = (_WORD)aP3; /*0x5826da*/
      v30 = LOBYTE(v8->field_8); /*0x5826e0*/
      v8 = (IUnknown *)((char *)v8 + 10); /*0x5826e7*/
      ++v94; /*0x5826eb*/
    }
    while ( SHIWORD(v8->field_4) == v98 ); /*0x5826f5*/
  }
  int v90 = *((__int16 *)&v8->field_0 + (_DWORD)aP2); /*0x582701*/
  if ( v90 > 0 ) /*0x582705*/
  {
    __int64 v32 = LOBYTE(v8->field_8) - v30; /*0x582712*/
    if ( (int)((HIDWORD(v32) ^ v32) - HIDWORD(v32)) < 2 && v90 != v97 ) /*0x58272a*/
    {
      LOWORD(v101) = v94; /*0x582741*/
      HIWORD(v101) = (_WORD)aP5a; /*0x58274d*/
      if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v101, (TechnoClass *)1) ) /*0x582752*/
      {
        LOWORD(v101) = v94 - 1; /*0x582770*/
        HIWORD(v101) = (_WORD)aP5a; /*0x58277c*/
        if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v101, (TechnoClass *)1) ) /*0x582781*/
        {
          int v33 = (unsigned __int16)aP3 | (v90 << 16); /*0x5827a8*/
          LOBYTE(v113) = 0; /*0x5827b2*/
          int v34 = *v102 + 24 * ((unsigned __int8)aP3 & 0xF | (16 * (v90 & 0xF))); /*0x5827bc*/
          int v35 = *(_DWORD *)(v34 + 16); /*0x5827bf*/
          _DWORD * v36 = *(_DWORD **)(v34 + 4); /*0x5827c3*/
          int v37 = v35 - 1; /*0x5827c6*/
          if ( v35 - 1 < 0 ) /*0x5827cb*/
          {
LABEL_33:
            int v38 = *(_DWORD *)(v34 + 8); /*0x5827d7*/
            if ( v35 < v38 /*0x5827fb*/
              || (*(_BYTE *)(v34 + 13) || !v38)
  int v39; // eax
              && (v39 = *(_DWORD *)(v34 + 20), v39 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v34 + 8))(v34, v39 + v38, 0) )
            {
              int v40 = *(_DWORD *)(v34 + 16); /*0x582802*/
              int v41 = v40 + 1; /*0x582805*/
              int v42 = 3 * v40; /*0x582808*/
              int v43 = *(_DWORD *)(v34 + 4); /*0x58280b*/
              *(_DWORD *)(v34 + 16) = v41; /*0x58280e*/
              int * v44 = (int *)(v43 + 4 * v42); /*0x582811*/
              int v45 = v113; /*0x582814*/
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
  int v46 = *(this + 62); /*0x58284b*/
  v110 = ((char *)v8 - (char *)v6) / 10 - 1; /*0x582851*/
  v109 = v46 + *(this + 61) + 1; /*0x58285f*/
  v101 = 10 * v109; /*0x582868*/
  v47 = (IUnknown *)((char *)v7 - 10 * v109); /*0x58286c*/
  v48 = (IUnknown *)((char *)v7 + 10 * v109); /*0x58286e*/
  int v49 = v9; /*0x582870*/
  aP1a = v48; /*0x582872*/
  int v95 = 0; /*0x582878*/
  if ( v9 > v94 ) /*0x582886*/
    return v110; /*0x582886*/
  do /*0x582aca*/
  {
  int v52; // eax
    int v50 = *((__int16 *)&v47->field_0 + (_DWORD)aP2); /*0x582892*/
    int v91 = v50; /*0x582897*/
    if ( v49 == v9 ) /*0x58289b*/
    {
      v51 = v49; /*0x5828a5*/
  int v103; // [esp+44h] [ebp-30h]
      HIWORD(v103) = (_WORD)aP5a; /*0x5828a7*/
      LOWORD(v103) = v49 + 1; /*0x5828b3*/
      v95 = v103; /*0x5828c0*/
      v52 = (int)&v47->field_8 + 10 * v109 + 2; /*0x5828c4*/
    }
    else
    {
      v51 = v49; /*0x5828ce*/
      if ( v49 >= v94 ) /*0x5828d2*/
      {
        LOWORD(v105) = v49 - 1; /*0x582902*/
        HIWORD(v105) = (_WORD)aP5a; /*0x582907*/
        v95 = v105; /*0x582914*/
        v52 = (int)v47 + v101 - 10; /*0x582918*/
      }
      else
      {
        LOWORD(v104) = v49; /*0x5828dc*/
        HIWORD(v104) = (_WORD)aP5a; /*0x5828e1*/
        v95 = v104; /*0x5828ee*/
        v52 = (int)v47 + v101; /*0x5828f2*/
      }
    }
    if ( v50 || (int)aP5a <= v106 || v49 < v99 || v49 > v100 ) /*0x582939*/
    {
      if ( v50 != (unsigned __int16)aP3 && v50 != v97 ) /*0x5829ad*/
      {
        if ( v50 ) /*0x5829b5*/
        {
          __int64 v54 = *(unsigned __int8 *)(v52 + 8) - LOBYTE(v47->field_8); /*0x5829c9*/
          if ( (int)((HIDWORD(v54) ^ v54) - HIDWORD(v54)) < 2 /*0x5829e2*/
            && LayerClass::IsWithinUsableArea(this, (IUnknown *)&v95, (TechnoClass *)1) )
          {
            HIWORD(v108) = (_WORD)aP5a - 1; /*0x5829fd*/
            LOWORD(v108) = v51; /*0x582a07*/
            if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v108, (TechnoClass *)1) ) /*0x582a0c*/
            {
              int v55 = (unsigned __int16)aP3 | (v91 << 16); /*0x582a26*/
              if ( v49 < v99 || (LOBYTE(v113) = 0, v49 > v100) ) /*0x582a37*/
                LOBYTE(v113) = 1; /*0x582a39*/
              int v56 = *v102 + 24 * ((unsigned __int8)aP3 & 0xF | (16 * (v91 & 0xF))); /*0x582a52*/
              int v57 = *(_DWORD *)(v56 + 16); /*0x582a55*/
              _DWORD * v58 = *(_DWORD **)(v56 + 4); /*0x582a59*/
              int v59 = v57 - 1; /*0x582a5c*/
              if ( v57 - 1 < 0 ) /*0x582a61*/
              {
LABEL_65:
                int v60 = *(_DWORD *)(v56 + 8); /*0x582a6d*/
                if ( v57 < v60 /*0x582a8f*/
                  || (*(_BYTE *)(v56 + 13) || !v60)
  int v61; // eax
                  && (v61 = *(_DWORD *)(v56 + 20), v61 > 0)
                  && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v56 + 8))(v56, v61 + v60, 0) )
                {
                  int v62 = *(_DWORD *)(v56 + 16); /*0x582a96*/
                  int v63 = v62 + 1; /*0x582a99*/
                  int v64 = 3 * v62; /*0x582a9c*/
                  int v65 = *(_DWORD *)(v56 + 4); /*0x582a9f*/
                  *(_DWORD *)(v56 + 16) = v63; /*0x582aa2*/
                  int * v66 = (int *)(v65 + 4 * v64); /*0x582aa5*/
                  int v67 = v113; /*0x582aa8*/
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
      __int64 v53 = *(unsigned __int8 *)(v52 + 8) - LOBYTE(v47->field_8); /*0x582957*/
      if ( (int)((HIDWORD(v53) ^ v53) - HIDWORD(v53)) < 2 ) /*0x58295f*/
      {
        LOWORD(v107) = v51; /*0x58297f*/
        HIWORD(v107) = (_WORD)aP5a - 1; /*0x582984*/
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
  int v71; // eax
  int v70; // edx
      int v69 = *((__int16 *)&v68->field_0 + (_DWORD)aP2); /*0x582ae6*/
      int v92 = v69; /*0x582aea*/
      if ( v9 == v96 ) /*0x582aee*/
      {
        LOWORD(v108) = v9 + 1; /*0x582af9*/
        HIWORD(v108) = (_WORD)aP5a; /*0x582b08*/
        v70 = v108; /*0x582b0d*/
        v71 = (int)&v68->field_8 - v101 + 2; /*0x582b11*/
      }
      else
      {
        if ( v9 < v94 ) /*0x582b1a*/
        {
          v72 = aP5a; /*0x582b20*/
          LOWORD(v107) = v9; /*0x582b29*/
          v71 = (int)v68 - v101; /*0x582b2e*/
          HIWORD(v107) = (_WORD)aP5a; /*0x582b30*/
          v95 = v107; /*0x582b39*/
          goto LABEL_82; /*0x582b3d*/
        }
        v71 = (int)v68 - 10 * v109 - 10; /*0x582b4d*/
        LOWORD(v106) = v9 - 1; /*0x582b52*/
        HIWORD(v106) = (_WORD)aP5a; /*0x582b5f*/
        v70 = v106; /*0x582b64*/
      }
      v72 = aP5a; /*0x582b68*/
      v95 = v70; /*0x582b6f*/
LABEL_82:
      if ( v69 || (int)v72 >= v111 || v9 < v99 || v9 > v100 ) /*0x582b87*/
      {
        if ( v69 != (unsigned __int16)aP3 && v69 != v97 ) /*0x582bfa*/
        {
          if ( v69 ) /*0x582c02*/
          {
            __int64 v74 = LOBYTE(aP1a->field_8) - *(unsigned __int8 *)(v71 + 8); /*0x582c18*/
            if ( (int)((HIDWORD(v74) ^ v74) - HIDWORD(v74)) < 2 /*0x582c33*/
              && LayerClass::IsWithinUsableArea(this, (IUnknown *)&v95, (TechnoClass *)1) )
            {
              LOWORD(v104) = v9; /*0x582c4a*/
              HIWORD(v104) = (_WORD)v72 + 1; /*0x582c4f*/
              if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v104, (TechnoClass *)1) ) /*0x582c54*/
              {
                int v75 = (unsigned __int16)aP3 | (v92 << 16); /*0x582c6e*/
                if ( v9 < v99 || (LOBYTE(v113) = 0, v9 > v100) ) /*0x582c7f*/
                  LOBYTE(v113) = 1; /*0x582c81*/
                int v76 = *v102 + 24 * ((unsigned __int8)aP3 & 0xF | (16 * (v92 & 0xF))); /*0x582c9c*/
                int v77 = *(_DWORD *)(v76 + 16); /*0x582c9f*/
                _DWORD * v78 = *(_DWORD **)(v76 + 4); /*0x582ca3*/
                int v79 = v77 - 1; /*0x582ca6*/
                if ( v77 - 1 < 0 ) /*0x582cab*/
                {
LABEL_102:
                  int v80 = *(_DWORD *)(v76 + 8); /*0x582cb7*/
                  if ( v77 < v80 /*0x582cd9*/
                    || (*(_BYTE *)(v76 + 13) || !v80)
  int v81; // eax
                    && (v81 = *(_DWORD *)(v76 + 20), v81 > 0)
                    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v76 + 8))(v76, v81 + v80, 0) )
                  {
                    int v82 = *(_DWORD *)(v76 + 16); /*0x582ce0*/
                    int v83 = v82 + 1; /*0x582ce3*/
                    int v84 = 3 * v82; /*0x582ce6*/
                    int v85 = *(_DWORD *)(v76 + 4); /*0x582ce9*/
                    *(_DWORD *)(v76 + 16) = v83; /*0x582cec*/
                    int * v86 = (int *)(v85 + 4 * v84); /*0x582cef*/
                    int v87 = v113; /*0x582cf2*/
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
  __int64 v73; // rax
             && (v73 = LOBYTE(v68->field_8) - *(unsigned __int8 *)(v71 + 8),
                 (int)((HIDWORD(v73) ^ v73) - HIDWORD(v73)) < 2) )
      {
        LOWORD(v105) = v9; /*0x582bc3*/
        HIWORD(v105) = (_WORD)v72 + 1; /*0x582bc8*/
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
} // namespace gamemd

// 0x584550
namespace gamemd {
AbstractClass * Radar::Update(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  Radar *v2; // ebx
  CCINIClass *v10; // edx
  IUnknown *v11; // eax
  IUnknown *v12; // esi
  __int16 v14; // bp
  IUnknown *v15; // edx
  IUnknown *v18; // ecx
  CCINIClass *v28; // ebp
  IUnknown *v29; // esi
  __int16 v41; // ax
  IUnknown *v45; // ecx
  IUnknown *v70; // ebp
  IUnknown *v71; // edi
  IUnknown *v72; // ecx
  IUnknown *v74; // esi
  __int16 *v81; // eax
  __int16 v83; // bp
  IUnknown *aP3; // [esp+20h] [ebp-94h]
  IUnknown *aP3a; // [esp+20h] [ebp-94h]
  IUnknown *aP3b; // [esp+20h] [ebp-94h]
  IUnknown *aP3c; // [esp+20h] [ebp-94h]
  IUnknown *v89; // [esp+24h] [ebp-90h]
  IUnknown *v90; // [esp+24h] [ebp-90h]
  IUnknown *v91; // [esp+24h] [ebp-90h]
  IUnknown *v92; // [esp+24h] [ebp-90h]
  IUnknown *v104; // [esp+38h] [ebp-7Ch] BYREF
  CCINIClass *v105; // [esp+3Ch] [ebp-78h]
  __int16 v108; // [esp+48h] [ebp-6Ch] BYREF
  __int16 v109; // [esp+4Ah] [ebp-6Ah]
  void **v110; // [esp+4Ch] [ebp-68h] BYREF
  IUnknown *v111; // [esp+50h] [ebp-64h]
  IUnknown *v112; // [esp+54h] [ebp-60h]
  IUnknown *v114; // [esp+5Ch] [ebp-58h]
  IUnknown *v116; // [esp+64h] [ebp-50h]
  CCINIClass *v119; // [esp+70h] [ebp-44h] BYREF
  void **v123; // [esp+80h] [ebp-34h] BYREF
  void *Block; // [esp+84h] [ebp-30h]

  v2 = this; /*0x584561*/
  v116 = this; /*0x584566*/
  if ( LayerClass::IsWithinUsableArea(this, aP1, (TechnoClass *)1) )
  {
  char v113; // [esp+59h] [ebp-5Bh]
  int v107; // [esp+44h] [ebp-70h]
  int v106; // [esp+40h] [ebp-74h]
  char *v103; // [esp+34h] [ebp-80h]
  bool v42; // zf
  int v9; // edi
  int aP2; // [esp+2Ch] [ebp-88h]
    for ( aP2 = 2; ; --aP2 ) /*0x584577*/
    {
      int v3 = aP2; /*0x58457f*/
      int v4 = SLOWORD(aP1->field_0); /*0x584594*/
      v106 = 1 << (aP2 + 1); /*0x584599*/
      int v5 = SHIWORD(aP1->field_0); /*0x5845a0*/
      v107 = v106; /*0x5845a6*/
      v104 = (IUnknown *)(v4 - v4 % v106); /*0x5845af*/
      v105 = (CCINIClass *)(v5 - v5 % v106); /*0x5845b9*/
      int v6 = 0; /*0x5845bd*/
      WordVector::Constructor(&v110, 0, 0); /*0x5845c1*/
      _DWORD * v7 = *(_DWORD **)&v2->__pad_68[4 * aP2 + 24]; /*0x5845c6*/
      v110 = &vt_DynamicVectorClass_unsigned_short_7E3844; /*0x5845cd*/
      int v115 = 10; /*0x5845d5*/
      v114 = 0; /*0x5845dd*/
      int v8 = v7[2]; /*0x5845e1*/
      _DWORD * v122 = v7; /*0x5845e4*/
      if ( v8 > 0 ) /*0x5845ea*/
      {
        int v102 = 0; /*0x5845ec*/
        do /*0x58460e*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)(v102 + *v7) + 12))(v102 + *v7); /*0x5845fa*/
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
            LOWORD(v119) = (_WORD)v12; /*0x584656*/
            HIWORD(v119) = (_WORD)v89; /*0x58465b*/
            int v13 = *(_DWORD *)&v2->__pad_68[8] + 10 * CellToTileIndexMap(&v2->field_0, (IUnknown *)&v119); /*0x58466f*/
            v14 = *(_WORD *)(v13 + 2 * aP2); /*0x584672*/
            if ( v14 ) /*0x584679*/
            {
              v15 = v114; /*0x58467b*/
              int v16 = (int)&v114[-1].__tail_1602E[1]; /*0x58467f*/
              if ( (int)&v114[-1].__tail_1602E[1] >= 0 ) /*0x584684*/
              {
                _WORD * v17 = (_WORD *)((char *)v111 + 2 * v16); /*0x58468a*/
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
                  && ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v110[2])(&v110, (char *)v112 + v115, 0) )
                {
                  v15 = v114; /*0x5846cf*/
LABEL_20:
                  v114 = (IUnknown *)((char *)&v15->field_0 + 1); /*0x5846d3*/
                  *((_WORD *)&v111->field_0 + (_DWORD)v15) = v14; /*0x5846de*/
                }
              }
            }
  _WORD v121[2]; // [esp+78h] [ebp-3Ch] BYREF
            v121[0] = (_WORD)v12; /*0x5846e2*/
            *(_WORD *)(v13 + 2 * aP2) = 0; /*0x5846f7*/
            v121[1] = (_WORD)v89; /*0x5846fd*/
            v12 = (IUnknown *)((char *)v12 + 1); /*0x58470a*/
            *(_WORD *)(v13 + 6) = *(_WORD *)(*(_DWORD *)v2->__pad_68 /*0x584712*/
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
        char * v93 = &v2->__pad_8C[24 * v3 + 4]; /*0x584760*/
        while ( 1 ) /*0x584776*/
        {
          int v19 = *((unsigned __int16 *)&v111->field_0 + (_DWORD)v18); /*0x584776*/
          _DWORD * v20 = (_DWORD *)(*(_DWORD *)v93 + 36 * v19); /*0x584782*/
          _DWORD * v98 = v20; /*0x584785*/
          int v21 = v20[4] - 1; /*0x58478c*/
          aP3 = (IUnknown *)v21; /*0x58478d*/
          if ( v21 >= 0 ) /*0x584791*/
          {
            while ( 1 ) /*0x5847a8*/
            {
              int v22 = *(_DWORD *)v93 + 36 * *(_DWORD *)(v20[1] + 8 * v21); /*0x5847a8*/
              int v23 = *(_DWORD *)(v22 + 16); /*0x5847ab*/
              int v24 = v23 - 1; /*0x5847af*/
              int v25 = v23 - 1; /*0x5847b2*/
              if ( v23 - 1 >= 0 ) /*0x5847b6*/
              {
                _DWORD * v26 = (_DWORD *)(*(_DWORD *)(v22 + 4) + 8 * v25); /*0x5847bb*/
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
  int v27; // edx
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
              aP3 = (IUnknown *)((char *)aP3 - 1); /*0x5847fa*/
              if ( (int)aP3 < 0 ) /*0x5847fe*/
                break; /*0x5847fe*/
              v21 = (int)aP3; /*0x584795*/
            }
          }
          (*(void (__thiscall **)(_DWORD *))(*v20 + 12))(v20); /*0x584804*/
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
      *(_DWORD *)&v2->__pad_68[4 * aP2 + 12] = aP3a; /*0x584ab8*/
      int v43 = v2->field_60 - 1; /*0x584ac7*/
      if ( v43 >= 0 ) /*0x584ac8*/
      {
        int v44 = 16 * v43; /*0x584ad0*/
        int v100 = 16 * v43; /*0x584ad4*/
        int v95 = v2->field_60; /*0x584ad8*/
        do /*0x584b53*/
        {
          v45 = (IUnknown *)(v2->field_54 + v44); /*0x584adc*/
          int v46 = SLOWORD(v45->field_0); /*0x584adf*/
          if ( v46 >= (int)v11 /*0x584b1e*/
            && v46 < (int)v11 + v9
  int v47; // esi
            && (v47 = SHIWORD(v45->field_0), v47 >= (int)v10)
            && v47 < (int)&v10->__pad_0[v107]
  int v48; // esi
            || (v48 = SLOWORD(v45->field_4), v48 >= (int)v11)
            && v48 < (int)v11 + v9
  int v49; // esi
            && (v49 = SHIWORD(v45->field_4), v49 >= (int)v10)
            && v49 < (int)&v10->__pad_0[v107] )
          {
            if ( LOBYTE(v45->field_8) ) /*0x584b20*/
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
      int v50 = 0; /*0x584b55*/
      aP3b = 0; /*0x584b57*/
      do /*0x584c85*/
      {
        if ( *(int *)(v50 + *v122 + 16) > 0 ) /*0x584b6b*/
        {
          int v101 = *(_DWORD *)(v50 + *v122 + 16); /*0x584b74*/
          _BYTE * v96 = (_BYTE *)(*(_DWORD *)(*v122 + v50 + 4) + 8); /*0x584b7b*/
          do /*0x584c6a*/
          {
            char v51 = *v96; /*0x584b86*/
            int v52 = (unsigned __int16)*((_DWORD *)v96 - 1); /*0x584b95*/
            int v53 = (unsigned __int16)HIWORD(*((_DWORD *)v96 - 1)); /*0x584b9b*/
            int v54 = *((_DWORD *)v103 + 1); /*0x584ba1*/
  int v132; // [esp+A8h] [ebp-Ch]
            LOBYTE(v132) = *v96; /*0x584ba4*/
            int v55 = *(_DWORD *)(v54 + 36 * v52 + 8); /*0x584bae*/
            int v56 = v54 + 36 * v52; /*0x584bb2*/
            if ( *(_DWORD *)(v56 + 16) < v55 /*0x584bd8*/
              || (*(_BYTE *)(v56 + 13) || !v55)
  int v57; // ecx
              && (v57 = *(_DWORD *)(v56 + 20), v57 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v56 + 8))(v56, v57 + v55, 0) )
            {
              int v58 = *(_DWORD *)(v56 + 16); /*0x584bdf*/
              int v59 = *(_DWORD *)(v56 + 4); /*0x584be2*/
              *(_DWORD *)(v56 + 16) = v58 + 1; /*0x584be8*/
              int v60 = v132; /*0x584beb*/
              *(_DWORD *)(v59 + 8 * v58) = v53; /*0x584bf2*/
              *(_DWORD *)(v59 + 8 * v58 + 4) = v60; /*0x584bf5*/
            }
  int v133; // [esp+B0h] [ebp-4h]
            LOBYTE(v133) = v51; /*0x584c01*/
            int v61 = *((_DWORD *)v103 + 1); /*0x584c08*/
            int v62 = *(_DWORD *)(v61 + 36 * v53 + 8); /*0x584c0b*/
            int v63 = v61 + 36 * v53; /*0x584c0f*/
            if ( *(_DWORD *)(v63 + 16) < v62 /*0x584c35*/
              || (*(_BYTE *)(v63 + 13) || !v62)
  int v64; // ecx
              && (v64 = *(_DWORD *)(v63 + 20), v64 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v63 + 8))(v63, v64 + v62, 0) )
            {
              int v65 = *(_DWORD *)(v63 + 16); /*0x584c3c*/
              int v66 = *(_DWORD *)(v63 + 4); /*0x584c3f*/
              *(_DWORD *)(v63 + 16) = v65 + 1; /*0x584c45*/
              int v67 = v133; /*0x584c48*/
              *(_DWORD *)(v66 + 8 * v65) = v52; /*0x584c4f*/
              *(_DWORD *)(v66 + 8 * v65 + 4) = v67; /*0x584c52*/
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
        __3_YAXPAX_Z(v111); /*0x584ca6*/
        v111 = 0; /*0x584cae*/
      }
      v113 = 0; /*0x584cb6*/
      bool v68 = aP2 - 1 < 0; /*0x584cbb*/
      v112 = 0; /*0x584cbc*/
      if ( v68 ) /*0x584cc4*/
      {
        int v69 = SHIWORD(aP1->field_0); /*0x584ce3*/
        v70 = (IUnknown *)(SLOWORD(aP1->field_0) - SLOWORD(aP1->field_0) % 8); /*0x584ce9*/
        v104 = v70; /*0x584cf2*/
        v71 = (IUnknown *)(v69 - v69 % 8); /*0x584cfd*/
        v92 = v71; /*0x584cff*/
        v72 = (IUnknown *)&v71->field_8; /*0x584d03*/
        v116 = (IUnknown *)&v71->field_8; /*0x584d08*/
        if ( !__OFSUB__(v71, &v71->field_8) ) /*0x584d0c*/
        {
          int * v73 = &v70->field_8; /*0x584d12*/
          do /*0x584e25*/
          {
            v74 = v70; /*0x584d15*/
            aP3c = v70; /*0x584d19*/
            if ( (int)v70 < (int)v73 ) /*0x584d1d*/
            {
              do /*0x584e14*/
              {
                v108 = (__int16)v74; /*0x584d2c*/
                v109 = (__int16)v71; /*0x584d31*/
                if ( LayerClass::IsWithinUsableArea(v2, (IUnknown *)&v108, (TechnoClass *)1) ) /*0x584d36*/
                {
                  int v75 = (__int16)v74 + (__int16)v71 * (v2->field_F8 + *(_DWORD *)&v2->__pad_EC[8] + 1); /*0x584d5c*/
                  if ( v75 >= 0 ) /*0x584d5e*/
                  {
                    int v78 = *(_DWORD *)&v2->__pad_68[4]; /*0x584dc6*/
                    if ( v75 >= v78 ) /*0x584dcb*/
                      v75 = v78 - 1; /*0x584dcd*/
                  }
                  else
                  {
                    v75 = 0; /*0x584d60*/
                  }
                  char * v79 = &v2->__pad_8C[4]; /*0x584dd6*/
                  int v80 = 2; /*0x584ddc*/
                  v81 = (__int16 *)(*(_DWORD *)&v2->__pad_68[8] + 10 * v75); /*0x584de1*/
                  do /*0x584dfc*/
                  {
                    int v82 = *(_DWORD *)v79; /*0x584de7*/
                    v83 = v81[1]; /*0x584de9*/
                    int v84 = 9 * *v81; /*0x584ded*/
                    v79 += 24; /*0x584df0*/
                    ++v81; /*0x584df3*/
                    --v80; /*0x584df6*/
                    *(_WORD *)(v82 + 4 * v84 + 24) = v83; /*0x584df7*/
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
        MapClass::AllocArrays(&stru_87C374[9540]); /*0x584e30*/
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
    int v94 = 36 * (_DWORD)aP3a; /*0x584855*/
    while ( 1 )
    {
  _WORD v118[2]; // [esp+6Ch] [ebp-48h] BYREF
      v118[0] = (_WORD)v29; /*0x584862*/
      v118[1] = (_WORD)v28; /*0x584867*/
      if ( LayerClass::IsWithinUsableArea(v2, (IUnknown *)v118, (TechnoClass *)1) )
      {
  _WORD v117[2]; // [esp+68h] [ebp-4Ch] BYREF
        v117[0] = (_WORD)v29; /*0x584880*/
        v117[1] = (_WORD)v28; /*0x584885*/
        int v30 = Cell::CoordToIndex(v2, (IUnknown *)v117); /*0x58488a*/
        if ( v30 >= 0 ) /*0x584891*/
        {
          int v31 = *(_DWORD *)&v2->__pad_68[4]; /*0x584897*/
          if ( v30 >= v31 ) /*0x58489c*/
            v30 = v31 - 1; /*0x58489e*/
        }
        else
        {
          v30 = 0; /*0x584893*/
        }
        int v32 = *(_DWORD *)&v2->__pad_68[8]; /*0x5848a1*/
  _WORD v120[2]; // [esp+74h] [ebp-40h] BYREF
        v120[0] = (_WORD)v29; /*0x5848a7*/
        v120[1] = (_WORD)v28; /*0x5848ac*/
        v91 = (IUnknown *)(v32 + 10 * v30); /*0x5848bb*/
        int v33 = Cell::CoordToIndex(v2, (IUnknown *)v120); /*0x5848bf*/
        if ( v33 >= 0 ) /*0x5848c6*/
        {
          int v34 = *(_DWORD *)&v2->__pad_68[4]; /*0x5848cc*/
          if ( v33 >= v34 ) /*0x5848d1*/
            v33 = v34 - 1; /*0x5848d3*/
        }
        else
        {
          v33 = 0; /*0x5848c8*/
        }
        int v99 = *(unsigned __int8 *)(*(_DWORD *)v2->__pad_68 + 4 * v33); /*0x5848e3*/
        if ( v99 != 7 && !*((_WORD *)&v91->field_0 + aP2) )
        {
          v108 = (__int16)v29; /*0x58491b*/
          v109 = (__int16)v28; /*0x584920*/
          Radar::ProcessSubzone(v2, v91, (IUnknown *)aP2, aP3a, (IUnknown *)&v104, (IUnknown *)&v108); /*0x584925*/
          VectorClass::ConstructSubzone(&v123, 0, 0); /*0x584932*/
          v123 = &vt_DynamicVectorClass_SubzoneConnectionStruct; /*0x58493b*/
          int v128 = 10; /*0x584943*/
          int v127 = 0; /*0x58494e*/
          VectorClass::CleanupSubzone((int)&v123); /*0x584955*/
  int v129; // [esp+98h] [ebp-1Ch]
          LOWORD(v129) = 0; /*0x58495b*/
          int v130 = 0; /*0x584963*/
          int v131 = 0; /*0x58496a*/
          char * v35 = &v2->__pad_8C[24 * aP2]; /*0x584971*/
          int v36 = *(_DWORD *)&v2->__pad_8C[24 * aP2 + 8]; /*0x584975*/
          if ( *(_DWORD *)&v2->__pad_8C[24 * aP2 + 16] < v36 /*0x58499a*/
            || (v2->__pad_8C[24 * aP2 + 13] || !v36)
  int v37; // ecx
            && (v37 = *(_DWORD *)&v2->__pad_A0[24 * aP2], v37 > 0)
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v103 + 8))(v103, v37 + v36, 0) )
          {
            int v38 = *(_DWORD *)&v2->__pad_8C[24 * aP2 + 16]; /*0x5849a5*/
            *(_DWORD *)&v2->__pad_8C[24 * aP2 + 16] = v38 + 1; /*0x5849ae*/
            int v39 = *(_DWORD *)&v2->__pad_8C[24 * aP2 + 4] + 36 * v38; /*0x5849b8*/
            Radar::CopyDataArray((int *)v39, (int *)&v123); /*0x5849be*/
            *(_WORD *)(v39 + 24) = v129; /*0x5849cb*/
            *(_DWORD *)(v39 + 28) = v130; /*0x5849d6*/
            *(_DWORD *)(v39 + 32) = v131; /*0x5849e0*/
            v35 = &v2->__pad_8C[24 * aP2]; /*0x5849e3*/
          }
          v123 = &vt_VectorClass_SubzoneConnectionStruct; /*0x5849eb*/
  int v126; // [esp+8Ch] [ebp-28h]
          if ( Block && BYTE1(v126) ) /*0x5849fd*/
          {
            __3_YAXPAX_Z(Block); /*0x584a00*/
            Block = 0; /*0x584a08*/
          }
          int v40 = v94 + *((_DWORD *)v35 + 1); /*0x584a1b*/
          BYTE1(v126) = 0; /*0x584a20*/
          int v125 = 0; /*0x584a25*/
          v41 = aP2 == 2 ? 0 : *((_WORD *)&v91->field_0 + aP2 + 1);
          *(_WORD *)(v40 + 24) = v41; /*0x584a3c*/
          *(_DWORD *)(v40 + 28) = v99; /*0x584a44*/
          *(_DWORD *)(v40 + 20) = 16; /*0x584a47*/
          *(_DWORD *)(v40 + 32) = (__int16)v29 / 4 + 130 * ((__int16)v28 / 4) + 131; /*0x584a78*/
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
    int v76 = 2; /*0x584d64*/
    char * v77 = &v2->__pad_A8[20]; /*0x584d69*/
    do /*0x584d84*/
    {
      (*(void (__thiscall **)(char *))(*(_DWORD *)v77 + 12))(v77); /*0x584d73*/
      Subzone::BuildGraph(v2, (IUnknown *)v76--); /*0x584d79*/
      v77 -= 24; /*0x584d7f*/
    }
    while ( v76 >= 0 ); /*0x584d84*/
    MapClass::AllocArrays(&stru_87C374[9540]); /*0x584d8b*/
    v110 = &vt_VectorClass_unsigned_short_7E3824; /*0x584d94*/
    if ( v111 && v113 ) /*0x584daa*/
      __3_YAXPAX_Z(v111); /*0x584db1*/
  }
}
}
} // namespace gamemd

// 0x58ABD0
namespace gamemd {
void * Radar::CopyDataArray(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( this != a2 ) /*0x58abdc*/
  {
    this->vt_slot_12(); /*0x58abe0*/
    int v3 = a2[2]; /*0x58abe3*/
    this->__pad_002 = v3; /*0x58abea*/
    if ( v3 ) /*0x58abed*/
    {
      char * v4 = (char *)__2_YAPAXI_Z(8 * v3); /*0x58abf7*/
      if ( v4 ) /*0x58ac01*/
      {
        char * v5 = v4; /*0x58ac06*/
        if ( v3 - 1 >= 0 ) /*0x58ac0a*/
        {
          int v6 = v3; /*0x58ac0c*/
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
      this->q004 = (int)v4; /*0x58ac1e*/
      if ( v4 ) /*0x58ac21*/
      {
        int v7 = this->__pad_002; /*0x58ac23*/
        int v8 = 0; /*0x58ac26*/
        this->q034 = 1; /*0x58ac2a*/
        if ( v7 > 0 ) /*0x58ac2e*/
        {
          do /*0x58ac4a*/
          {
            int v9 = a2[1]; /*0x58ac30*/
            int v10 = this->q004; /*0x58ac33*/
            *(_DWORD *)(v10 + 8 * v8) = *(_DWORD *)(v9 + 8 * v8); /*0x58ac39*/
            *(_DWORD *)(v10 + 8 * v8 + 4) = *(_DWORD *)(v9 + 8 * v8 + 4); /*0x58ac40*/
            ++v8; /*0x58ac47*/
          }
          while ( v8 < this->__pad_002 ); /*0x58ac4a*/
        }
      }
    }
    else
    {
      this->q004 = 0; /*0x58ac4e*/
      this->q034 = 0; /*0x58ac51*/
    }
  }
  this->q004 = a2[4]; /*0x58ac58*/
  this->q014 = a2[5]; /*0x58ac5e*/
  return this; /*0x58ac57*/
}
}
} // namespace gamemd

// 0x6558B0
namespace gamemd {
int Radar::PixelIndex()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return this->q004 + 251 * this->q008; /*0x6558c4*/
}
}
} // namespace gamemd

// 0x656EC0
namespace gamemd {
MapClass * Radar::RenderMinimap()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 *v4; // eax
  int i; // ebp
  int j; // ebp
  int k; // ebp
  ConvertClass *v92; // [esp+56h] [ebp-30h]
  int v2 = this + 4620; /*0x656ec9*/
  int v95 = this + 4620; /*0x656ed1*/
  _BYTE v96[32]; // [esp+66h] [ebp-20h] BYREF
  *(_DWORD *)&v96[16] = *(_DWORD *)(this + 4620); /*0x656ed7*/
  *(_DWORD *)&v96[20] = *(_DWORD *)(this + 4624); /*0x656ede*/
  *(_DWORD *)&v96[24] = *(_DWORD *)(this + 4628); /*0x656ee5*/
  int v3 = *(_DWORD *)(this + 5296); /*0x656ee9*/
  *(_DWORD *)&v96[28] = *(_DWORD *)(v2 + 12); /*0x656ef9*/
  char v86; // [esp+40h] [ebp-46h]
  if ( v3 != 1 || (v86 = 1, *(_DWORD *)(this + 5292) != 1) ) /*0x656f0b*/
    v86 = 0; /*0x656f0d*/
  int v91 = *(_DWORD *)&DataGlobal_87F8E4[30396] + *(_DWORD *)&DataGlobal_87F8E4[30404] / 2; /*0x656f28*/
  v92 = (ConvertClass *)(*(_DWORD *)&DataGlobal_87F8E4[30400] /*0x656f3e*/
                       + *(_DWORD *)&DataGlobal_87F8E4[30408] / 2);
  v4 = (__int16 *)Tactical::PixelToCell( /*0x656f4e*/
                    *(int *)&DataGlobal_87F8E4[31296],
                    (AbstractClass *)v96,
                    (IUnknown *)&v91);
  int * v5 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v4); /*0x656f59*/
  int v6 = *(_DWORD *)(this + 5264); /*0x656f61*/
  v91 = v5[9]; /*0x656f67*/
  int v7 = SHIWORD(v91); /*0x656f71*/
  int v8 = (__int16)v91; /*0x656f76*/
  int * v9 = (int *)(this + 5276); /*0x656f7b*/
  int v10 = (__int16)v91 + v6 - SHIWORD(v91); /*0x656f81*/
  v91 = *(int *)(this + 5276); /*0x656f83*/
  int v88 = v10; /*0x656f87*/
  *(_DWORD *)v96 = v8; /*0x656f8b*/
  int v11 = Math::RoundToInt((double)v10 * this->RadarSizeFactor + (double)v91); /*0x656f9d*/
  int v12 = v7 - *(_DWORD *)(this + 5272); /*0x656fac*/
  v88 = v11; /*0x656fae*/
  *(_DWORD *)v96 += v12; /*0x656fb4*/
  *(_DWORD *)v96 = Math::RoundToInt((double)*(int *)v96 * this->RadarSizeFactor + (double)*(int *)(this + 5280)); /*0x656fd1*/
  if ( v88 == v91 - 1 ) /*0x656fdc*/
    ++v88; /*0x656fdf*/
  double v13 = 60.0 / this->RadarSizeFactor; /*0x656fe9*/
  _DWORD * v14 = (_DWORD *)(this + 5340); /*0x656ff3*/
  int v94 = 1; /*0x657000*/
  *(_DWORD *)(this + 5340) = v88; /*0x657004*/
  *(_DWORD *)(this + 5344) = *(_DWORD *)v96; /*0x65700a*/
  *(_DWORD *)(this + 5348) = 1; /*0x65700d*/
  *(_DWORD *)(this + 5352) = 1; /*0x657010*/
  *(_DWORD *)v96 = 2 * *(_DWORD *)&DataGlobal_87F8E4[30404]; /*0x65701c*/
  int v15 = Math::RoundToInt(v13); /*0x65702c*/
  double v16 = 30.0 / this->RadarSizeFactor; /*0x657037*/
  *(_DWORD *)(this + 5348) = v15; /*0x65703d*/
  *(_DWORD *)v96 = 2 * *(_DWORD *)&DataGlobal_87F8E4[30408]; /*0x65704c*/
  *(float *)&v91 = v16; /*0x657050*/
  *(_DWORD *)(this + 5352) = Math::RoundToInt(v13); /*0x657061*/
  v88 = Math::RoundToInt(v13); /*0x657074*/
  *(_DWORD *)v96 = 2 * *(_DWORD *)&DataGlobal_87F8E4[30408]; /*0x657082*/
  int v17 = Math::RoundToInt((double)(2 * *(_DWORD *)&DataGlobal_87F8E4[30408]) / *(float *)&v91 * 0.5); /*0x657094*/
  *(_DWORD *)(this + 5340) -= v88; /*0x6570a2*/
  *(_DWORD *)(this + 5344) -= v17; /*0x6570aa*/
  int v18 = *(_DWORD *)(this + 5340); /*0x6570ad*/
  int v19 = *v9; /*0x6570b0*/
  if ( v18 >= *v9 ) /*0x6570b4*/
  {
    v91 = *(int *)(this + 5284); /*0x6570c1*/
    if ( v18 + *(_DWORD *)(this + 5348) >= v19 + v91 ) /*0x6570d5*/
      *v14 = v91 - *(_DWORD *)(this + 5348) + v19 - 1; /*0x6570e7*/
  }
  else
  {
    *v14 = v19; /*0x6570b6*/
  }
  int v20 = *(_DWORD *)(this + 5344); /*0x6570ea*/
  int v21 = *(_DWORD *)(this + 5280); /*0x6570f0*/
  if ( v20 >= v21 ) /*0x6570f8*/
  {
    int v22 = *(_DWORD *)(this + 5288); /*0x657108*/
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
    || !Render_Render_660530()
    || *(int *)(this + 4716) > 0
    || *(int *)(this + 4660) > 0
    || HouseClass::ProcessData(dword_89C3B0) )
  {
  int v93; // [esp+5Ah] [ebp-2Ch]
  int *v71; // edi
  int v70; // ecx
  int v69; // edi
  int v62; // edx
  int v61; // eax
  bool v37; // cc
    if ( v86 ) /*0x6571cf*/
      *(_BYTE *)(this + 5337) = 0; /*0x6571d1*/
    Surface::RenderRadar((_DWORD *)this); /*0x6571da*/
    char v87 = 0; /*0x6571ea*/
    if ( *(_DWORD *)(this + 5356) != *v14 /*0x657216*/
      || *(_DWORD *)(this + 5360) != *(_DWORD *)(this + 5344)
      || *(_DWORD *)(this + 5364) != *(_DWORD *)(this + 5348)
      || *(_DWORD *)(this + 5368) != *(_DWORD *)(this + 5352) )
    {
      for ( i = 0; i < *(_DWORD *)(this + 5368); ++i ) /*0x657226*/
      {
        int v24 = *(_DWORD *)(this + 5280); /*0x657236*/
        int v25 = i + *(_DWORD *)(this + 5360); /*0x65723e*/
        *(_DWORD *)v96 = *(_DWORD *)(this + 5356) - *v9; /*0x657240*/
        *(_DWORD *)&v96[4] = v25 - v24; /*0x65724d*/
        FogOfWar::RevealCell(this, (IUnknown *)v96); /*0x657251*/
        int v26 = i + *(_DWORD *)(this + 5360) - *(_DWORD *)(this + 5280); /*0x65727c*/
        *(_DWORD *)v96 = *(_DWORD *)(this + 5364) + *(_DWORD *)(this + 5356) - 1 - *v9; /*0x65727e*/
        *(_DWORD *)&v96[4] = v26; /*0x657285*/
        FogOfWar::RevealCell(this, (IUnknown *)v96); /*0x657289*/
      }
      for ( j = 0; j < *(_DWORD *)(this + 5364); ++j ) /*0x6572a3*/
      {
        int v28 = j + *(_DWORD *)(this + 5356) - *v9; /*0x6572bd*/
        *(_DWORD *)&v96[4] = *(_DWORD *)(this + 5360) - *(_DWORD *)(this + 5280); /*0x6572bf*/
        *(_DWORD *)v96 = v28; /*0x6572c3*/
        FogOfWar::RevealCell(this, (IUnknown *)v96); /*0x6572ce*/
        int v29 = *(_DWORD *)(this + 5280); /*0x6572eb*/
        int v30 = *(_DWORD *)(this + 5360) + *(_DWORD *)(this + 5368) - 1; /*0x6572f1*/
        *(_DWORD *)v96 = j + *(_DWORD *)(this + 5356) - *v9; /*0x6572f5*/
        *(_DWORD *)&v96[4] = v30 - v29; /*0x6572ff*/
        FogOfWar::RevealCell(this, (IUnknown *)v96); /*0x657306*/
      }
      v2 = v95; /*0x657316*/
      v87 = 1; /*0x65731a*/
    }
    int * v31 = (int *)(this + 4680); /*0x657325*/
    if ( *(int *)(this + 4688) > 0 && *(int *)(this + 4692) > 0 ) /*0x657338*/
    {
  int v42; // edx
      (*(void (__thiscall **)(_DWORD, int, _DWORD, int, _DWORD, int))(**(_DWORD **)(this + 4636) + 8))( /*0x657353*/
        *(_DWORD *)(this + 4636),
        this + 4680,
        *(_DWORD *)(this + 4640),
        this + 4680,
        0,
        1);
      int v32 = *(_DWORD *)(this + 5280); /*0x65735b*/
      int v33 = *v9 + *v31; /*0x65735e*/
      int v34 = *(_DWORD *)(this + 4684); /*0x657360*/
      *(_DWORD *)v96 = v33; /*0x657363*/
      int v35 = v32 + v34; /*0x657367*/
      int v36 = *(_DWORD *)(this + 4692); /*0x657369*/
      v37 = *(_DWORD *)(v2 + 8) <= 0; /*0x65736c*/
      *(_DWORD *)&v96[4] = v35; /*0x657370*/
      int v38 = *(_DWORD *)(this + 4688); /*0x657374*/
      int v90 = v36; /*0x657377*/
      int v89 = v38; /*0x65737b*/
      if ( v37 || *(int *)(v2 + 12) <= 0 ) /*0x657389*/
      {
        v42 = v90; /*0x657478*/
      }
      else if ( v38 <= 0 || v36 <= 0 ) /*0x657399*/
      {
        v33 = *(_DWORD *)v2; /*0x65745f*/
        *(_DWORD *)&v96[4] = *(_DWORD *)(v2 + 4); /*0x657464*/
        v38 = *(_DWORD *)(v2 + 8); /*0x657468*/
        v42 = *(_DWORD *)(v2 + 12); /*0x65746b*/
      }
      else
      {
        v91 = *(int *)v2; /*0x6573a3*/
        v92 = *(ConvertClass **)(v2 + 4); /*0x6573aa*/
        int v39 = *(_DWORD *)(v2 + 8); /*0x6573ae*/
        v93 = v39; /*0x6573b1*/
        v94 = *(_DWORD *)(v2 + 12); /*0x6573b8*/
        if ( v91 > v33 ) /*0x6573c2*/
        {
          int v40 = v91 - v33; /*0x6573c4*/
          v91 = v33; /*0x6573c6*/
          v93 = v40 + v39; /*0x6573cc*/
        }
        if ( (int)v92 > *(int *)&v96[4] ) /*0x6573da*/
        {
          v94 += (int)&v92->__pad_0[-*(_DWORD *)&v96[4]]; /*0x6573e4*/
          v92 = *(ConvertClass **)&v96[4]; /*0x6573ec*/
        }
        if ( v91 + v93 < v89 + v33 ) /*0x657403*/
          v93 = v89 - v91 + *(_DWORD *)v96 + 1; /*0x657413*/
        if ( (int)&v92->__pad_0[v94] >= *(_DWORD *)&v96[4] + v90 ) /*0x65742d*/
        {
          v42 = v94; /*0x65744b*/
          v33 = v91; /*0x65744f*/
          *(_DWORD *)&v96[4] = v92; /*0x657453*/
          v38 = v93; /*0x657457*/
        }
        else
        {
          int v41 = *(_DWORD *)&v96[4]; /*0x657433*/
          *(_DWORD *)&v96[4] = v92; /*0x657439*/
          v38 = v93; /*0x65743d*/
          v42 = v90 - (_DWORD)v92 + v41 + 1; /*0x657441*/
          v33 = v91; /*0x657445*/
        }
      }
      *(_DWORD *)v2 = v33; /*0x65747c*/
      *(_DWORD *)(v2 + 4) = *(_DWORD *)&v96[4]; /*0x657482*/
      v88 = *v31; /*0x657488*/
      int v43 = v88; /*0x657485*/
      *(_DWORD *)(v2 + 8) = v38; /*0x65748c*/
      int v44 = v43 + *(_DWORD *)(this + 4688); /*0x657495*/
      bool v45 = -*(_DWORD *)(this + 4688) < 0; /*0x657497*/
      *(_DWORD *)(v2 + 12) = v42; /*0x657499*/
      if ( v45 != __OFSUB__(v43, v44) ) /*0x65749c*/
      {
  int v47; // ecx
        do /*0x6574f1*/
        {
          int v46 = *(_DWORD *)(this + 4684); /*0x65749e*/
          if ( v46 < v46 + *(_DWORD *)(this + 4692) ) /*0x6574ae*/
          {
            do /*0x6574d9*/
            {
              *(_DWORD *)v96 = v88; /*0x6574bb*/
              *(_DWORD *)&v96[4] = v46; /*0x6574bf*/
              FogOfWar::RevealArea(this, (RadarClass *)v96); /*0x6574c3*/
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
      FogOfWar::RevealArea(this, (RadarClass *)(*(_DWORD *)(this + 4704) + 8 * k)); /*0x657520*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 4700) + 12))(this + 4700); /*0x657534*/
    Render_Render_660000(); /*0x657537*/
  int *v49; // eax
    v49 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 4636) + 120))( /*0x657549*/
                   *(_DWORD *)(this + 4636),
                   v96);
    HouseClass::Render(dword_89C3B0, *(_DWORD *)(this + 4636), *v49, v49[1], v49[2], v49[3]); /*0x657573*/
    if ( v86 ) /*0x65757e*/
    {
      if ( *(_BYTE *)(this + 5338) ) /*0x657584*/
      {
        int v50 = VtableStub::72F510(); /*0x657595*/
        *(_DWORD *)v2 = *v9; /*0x65759b*/
        *(_DWORD *)(v2 + 4) = *(_DWORD *)(this + 5280); /*0x6575a0*/
        *(_DWORD *)(v2 + 8) = *(_DWORD *)(this + 5284); /*0x6575a6*/
        *(_DWORD *)(v2 + 12) = *(_DWORD *)(this + 5288); /*0x6575af*/
        *(_DWORD *)v96 = *(_DWORD *)(this + 4580); /*0x6575ba*/
        *(_DWORD *)&v96[4] = *(_DWORD *)(this + 4588); /*0x6575d7*/
  int *v51; // eax
        v51 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)&DataGlobal_87F8E4[31260] + 120))( /*0x6575e2*/
                       *(_DWORD *)&DataGlobal_87F8E4[31260],
                       &v88);
        DrawToSurfaceSHP( /*0x6575fc*/
          *(int *)&DataGlobal_87F8E4[31260],
          v50,
          (int)DataGlobal_B04A38,
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
        int v52 = *(_DWORD *)(v2 + 8); /*0x65761e*/
        int v53 = *(_DWORD *)(v2 + 4) - *(_DWORD *)(this + 5280); /*0x657621*/
        int v54 = *(_DWORD *)(v2 + 12); /*0x657623*/
        *(_DWORD *)v96 = *(_DWORD *)v2 - *v9; /*0x657626*/
        *(_DWORD *)&v96[4] = v53; /*0x657630*/
        int v55 = *(_DWORD *)(this + 4636); /*0x65763d*/
        *(_DWORD *)&v96[8] = v52; /*0x657643*/
        *(_DWORD *)&v96[12] = v54; /*0x657647*/
        (*(void (__thiscall **)(_DWORD, int, int, _BYTE *, _DWORD, int))(**(_DWORD **)&DataGlobal_87F8E4[31260] /*0x65764f*/
                                                                       + 8))(
          *(_DWORD *)&DataGlobal_87F8E4[31260],
          v2,
          v55,
          v96,
          0,
          1);
      }
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31260] + 88))( /*0x657668*/
        *(_DWORD *)&DataGlobal_87F8E4[31260],
        this + 5340,
        *(_DWORD *)(this + 4616));
      int v56 = *v9; /*0x65766b*/
      int v57 = *(_DWORD *)(this + 5280); /*0x65766d*/
      int v58 = *(_DWORD *)(this + 5284); /*0x657670*/
      int v59 = *(_DWORD *)(this + 5288); /*0x657673*/
      v91 = v56 - 1; /*0x657678*/
      int v60 = *(_DWORD *)(this + 4616); /*0x65767c*/
      v92 = (ConvertClass *)(v57 - 1); /*0x657682*/
      v93 = v58 + 2; /*0x657693*/
      v94 = v59 + 2; /*0x657697*/
      (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&DataGlobal_87F8E4[31260] + 88))( /*0x6576a2*/
        *(_DWORD *)&DataGlobal_87F8E4[31260],
        &v91,
        v60);
    }
    if ( !v87 ) /*0x6576ab*/
      goto LABEL_99; /*0x6576ab*/
    if ( *(int *)(this + 5364) <= 0 || *(int *)(this + 5368) <= 0 ) /*0x6576ca*/
    {
      v71 = (int *)v2; /*0x65775f*/
    }
    else
    {
      if ( *(int *)(v2 + 8) > 0 && *(int *)(v2 + 12) > 0 ) /*0x6576e0*/
      {
        v61 = *(_DWORD *)(this + 5356); /*0x6576e4*/
        v62 = *(_DWORD *)(this + 5360); /*0x6576e6*/
        int v63 = *(_DWORD *)(this + 5364); /*0x6576e9*/
        *(_DWORD *)&v96[8] = v63; /*0x6576ec*/
        *(_DWORD *)&v96[12] = *(_DWORD *)(this + 5368); /*0x6576f3*/
        int v64 = *(_DWORD *)v2; /*0x6576f7*/
        if ( v61 > *(_DWORD *)v2 ) /*0x6576fb*/
        {
          int v65 = v61 - v64 + v63; /*0x6576ff*/
          v61 = *(_DWORD *)v2; /*0x657701*/
          *(_DWORD *)&v96[8] = v65; /*0x657703*/
        }
        int v66 = *(_DWORD *)(v2 + 4); /*0x657707*/
        if ( v62 > v66 ) /*0x65770c*/
        {
          int v67 = v62 - v66 + *(_DWORD *)&v96[12]; /*0x657714*/
          v62 = *(_DWORD *)(v2 + 4); /*0x657716*/
          *(_DWORD *)&v96[12] = v67; /*0x657718*/
        }
        if ( v61 + *(_DWORD *)&v96[8] < v64 + *(_DWORD *)(v2 + 8) ) /*0x657729*/
          *(_DWORD *)&v96[8] = v64 - v61 + *(_DWORD *)(v2 + 8) + 1; /*0x657734*/
        int v68 = *(_DWORD *)(v2 + 4) + *(_DWORD *)(v2 + 12); /*0x65773e*/
        v69 = *(_DWORD *)&v96[12]; /*0x657741*/
        if ( *(_DWORD *)&v96[12] + v62 < v68 ) /*0x65774a*/
          v69 = v68 - v62 + 1; /*0x65774f*/
        v70 = *(_DWORD *)&v96[8]; /*0x657751*/
        v93 = *(_DWORD *)&v96[8]; /*0x657755*/
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
    int * v72 = (int *)(this + 5340); /*0x657777*/
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
        int v73 = *v72; /*0x6577a1*/
        v37 = *v72 <= v61; /*0x6577a4*/
        *(_DWORD *)&v96[4] = *(_DWORD *)(this + 5344); /*0x6577a9*/
        *(_DWORD *)&v96[8] = *(_DWORD *)(this + 5348); /*0x6577b0*/
        *(_DWORD *)&v96[12] = *(_DWORD *)(this + 5352); /*0x6577b7*/
        if ( !v37 ) /*0x6577bb*/
        {
          int v74 = v73 - v61 + *(_DWORD *)&v96[8]; /*0x6577c3*/
          v73 = v61; /*0x6577c5*/
          *(_DWORD *)&v96[8] = v74; /*0x6577c7*/
        }
        if ( *(int *)&v96[4] > v62 ) /*0x6577d1*/
        {
          int v75 = *(_DWORD *)&v96[4] - v62 + *(_DWORD *)&v96[12]; /*0x6577d9*/
          *(_DWORD *)&v96[4] = v62; /*0x6577db*/
          *(_DWORD *)&v96[12] = v75; /*0x6577df*/
        }
        if ( v73 + *(_DWORD *)&v96[8] < v61 + v93 ) /*0x6577f1*/
          *(_DWORD *)&v96[8] = v61 - v73 + v93 + 1; /*0x6577fd*/
        v69 = *(_DWORD *)&v96[12]; /*0x657805*/
        int v76 = v62 + v94; /*0x657809*/
        v62 = *(_DWORD *)&v96[4]; /*0x65780b*/
        if ( *(_DWORD *)&v96[12] + *(_DWORD *)&v96[4] < v76 ) /*0x657814*/
          v69 = v76 - *(_DWORD *)&v96[4] + 1; /*0x657819*/
        v61 = v73; /*0x65781b*/
        v70 = *(_DWORD *)&v96[8]; /*0x65781d*/
      }
    }
    *(_DWORD *)v2 = v61; /*0x657831*/
    *(_DWORD *)(v2 + 4) = v62; /*0x657834*/
    *(_DWORD *)(v2 + 8) = v70; /*0x657837*/
    *(_DWORD *)(v2 + 12) = v69; /*0x65783a*/
LABEL_99:
    int v77 = *(_DWORD *)(this + 5344); /*0x65783d*/
    int v78 = *(_DWORD *)(this + 5348); /*0x657849*/
    *(_DWORD *)(this + 5356) = *(_DWORD *)(this + 5340); /*0x65784f*/
    int v79 = *(_DWORD *)(this + 5352); /*0x657855*/
    *(_DWORD *)(this + 5360) = v77; /*0x65785b*/
    *(_DWORD *)(this + 5364) = v78; /*0x657861*/
    *(_DWORD *)(this + 5368) = v79; /*0x657867*/
    Render_Render_6603B0(); /*0x65786d*/
  }
  if ( *(_DWORD *)(this + 4724) ) /*0x657872*/
  {
    *(_DWORD *)v96 = *(_DWORD *)(this + 4636); /*0x657884*/
    int v80 = *(_DWORD *)v96; /*0x657882*/
    int v81 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v96 + 128))(*(_DWORD *)v96); /*0x657896*/
    memset(*(void **)(this + 4724), 0, v81 * (*(int (__thiscall **)(int))(*(_DWORD *)v80 + 124))(v80) / 8 + 1); /*0x6578b7*/
  }
  int v82; // eax
  LOBYTE(v82) = v86; /*0x6578c0*/
  if ( !v86 ) /*0x6578c6*/
  {
    int v83 = *(_DWORD *)&v96[20]; /*0x6578cc*/
    int v84 = *(_DWORD *)&v96[24]; /*0x6578d0*/
    *(_DWORD *)v2 = *(_DWORD *)&v96[16]; /*0x6578d4*/
    v82 = *(_DWORD *)&v96[28]; /*0x6578d6*/
    *(_DWORD *)(v2 + 4) = v83; /*0x6578da*/
    *(_DWORD *)(v2 + 8) = v84; /*0x6578dd*/
    *(_DWORD *)(v2 + 12) = v82; /*0x6578e0*/
  }
  return v82; /*0x6578e3*/
}
}
} // namespace gamemd

// 0x692610
namespace gamemd {
AbstractClass * Radar::ScanWaypoints(MouseClass * aP0, MouseClass * aP1, int aP3_4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  MouseClass *v3; // esi
  int RadarClosestEnemy; // eax
  MouseClass *v6; // esi
  MouseClass *v8; // esi
  CellStruct *v10; // eax
  CellStruct *v11; // edi
  IUnknown *v12; // eax
  __int16 *v14; // ebp
  IUnknown *v15; // eax
  #375 *v18; // eax
  #375 *v19; // eax
  MouseClass *v21; // edi
  IUnknown *v23; // ecx
  #375 *v24; // eax
  IUnknown *v27; // eax
  MouseClass *v28; // [esp-4h] [ebp-24h]
  MouseClass *v29; // [esp-4h] [ebp-24h]
  IUnknown *v30; // [esp+10h] [ebp-10h]
  _DWORD v31[2]; // [esp+14h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+1Ch] [ebp-4h]

  v30 = 0; /*0x69261e*/
  if ( *(_DWORD *)&HouseClass_Player[44924] ) /*0x692626*/
  {
    v3 = aP1; /*0x692628*/
    if ( aP1 ) /*0x69262e*/
    {
      RadarClosestEnemy = FindRadarClosestEnemy(0, (int)aP1); /*0x692634*/
      return (*(int (__thiscall **)(int, MouseClass *, _DWORD))(*(_DWORD *)RadarClosestEnemy + 116))( /*0x692640*/
               RadarClosestEnemy,
               v3,
               0);
    }
    else
    {
      v6 = aP0; /*0x69264d*/
      int v7 = FindRadarClosestEnemy((__int16 *)aP0, 0); /*0x692655*/
      return (*(int (__thiscall **)(int, MouseClass *, int, _DWORD))(*(_DWORD *)v7 + 112))(v7, v6, aP3_4, 0); /*0x692666*/
    }
  }
  v8 = aP1; /*0x692673*/
  char v9 = 1; /*0x692677*/
  v10 = (CellStruct *)AbstractClass::IsTechno(aP1); /*0x69267b*/
  v11 = v10; /*0x692680*/
  if ( v10 && !v10[1].__pad_FC[86] ) /*0x692686*/
  {
    if ( *(_DWORD *)&v10->__pad_170[176] == 2 /*0x6926cf*/
      && (v28 = *(MouseClass **)(HouseClass_Player.field_0 + 48),
          v12 = (IUnknown *)(*(int (__thiscall **)(CellStruct *, _DWORD *))(v10->field_0 + 72))(v10, v31),
  _WORD *v13; // eax
          v13 = Coord::To_Cell(&stru_87C374[13428], v12),
          !Cell::IsPassableOffset(v13, (IUnknown *)v28))
      || *(_BYTE *)((*(int (__thiscall **)(CellStruct *))(v11->field_0 + 132))(v11) + 3226) )
    {
      v9 = 0; /*0x6926d9*/
    }
  }
  v14 = (__int16 *)aP0; /*0x6926db*/
  if ( !v8 /*0x692725*/
    || (*(int (__thiscall **)(MouseClass *))(v8->field_0 + 44))(v8) != 6
    || v8->__pad_1D4[582]
    || v8->__pad_1D4[1305] != 15
    || (v29 = *(MouseClass **)(HouseClass_Player.field_0 + 48),
        v15 = (IUnknown *)(*(int (__thiscall **)(CellStruct *, _DWORD *))(v11->field_0 + 72))(v11, v31),
  _WORD *v16; // eax
        v16 = Coord::To_Cell(&stru_87C374[13428], v15),
        Cell::IsPassableOffset(v16, (IUnknown *)v29)) )
  {
    if ( v9 ) /*0x692734*/
    {
      if ( v8 /*0x692766*/
        && (*(unsigned __int8 (__thiscall **)(MouseClass *))(v8->field_0 + 312))(v8)
        && ((*(int (__thiscall **)(MouseClass *))(v8->field_0 + 44))(v8) != 6 || !v8->__pad_1D4[1299])
        && (!v11 || !v11[1].__pad_FC[16]) )
      {
        v30 = (IUnknown *)7; /*0x692770*/
      }
      char * v17 = (char *)CellCoord::To_CellObj(&stru_87C374[13428], v14); /*0x69277e*/
      if ( Radar::FindNearestRadarTarget( /*0x6927bc*/
             dword_89C3B0,
             (*v14 << 8) + 128,
             (v14[1] << 8) + 128,
             *(_DWORD *)&stru_B05488[568] * v17[283]) )
      {
        v30 = (IUnknown *)61; /*0x6927c5*/
      }
    }
  }
  if ( stru_87C374[17956] ) /*0x6927d4*/
  {
    if ( !v8 /*0x6927fb*/
      || !(*(int (__thiscall **)(MouseClass *))(v8->field_0 + 60))(v8)
      || (v18 = (#375 *)(*(int (__thiscall **)(MouseClass *))(v8->field_0 + 60))(v8),
          !(unsigned __int8)House::IsHumanPlayer(v18))
      || (v30 = (IUnknown *)10, !(*(unsigned __int8 (__thiscall **)(MouseClass *))(v8->field_0 + 148))(v8)) )
    {
      v30 = (IUnknown *)15; /*0x69280d*/
    }
  }
  if ( stru_87C374[17958] ) /*0x69281c*/
  {
    v30 = (IUnknown *)34; /*0x692820*/
    if ( v8 ) /*0x692828*/
    {
      if ( (*(int (__thiscall **)(MouseClass *))(v8->field_0 + 60))(v8) ) /*0x69282e*/
      {
        v19 = (#375 *)(*(int (__thiscall **)(MouseClass *))(v8->field_0 + 60))(v8); /*0x692839*/
        if ( (unsigned __int8)House::IsHumanPlayer(v19) ) /*0x69283e*/
        {
          if ( (*(int (__thiscall **)(MouseClass *))(v8->field_0 + 44))(v8) == 6 ) /*0x692851*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(MouseClass *))(v8->field_0 + 312))(v8) ) /*0x692857*/
            {
              if ( !(*(unsigned __int8 (__thiscall **)(MouseClass *))(v8->field_0 + 128))(v8) ) /*0x692865*/
              {
                int v20 = *(_DWORD *)&v8->__pad_1D4[844]; /*0x69286f*/
                if ( *(_BYTE *)(v20 + 5450) ) /*0x692875*/
                {
                  if ( *(int *)(v20 + 3812) > 0 || *(_BYTE *)(v20 + 5491) ) /*0x692889*/
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
  if ( stru_87C374[17959] ) /*0x6928b0*/
  {
  bool v22; // bl
    v22 = Mouse::IsButtonDown(HouseClass_Player[44732]) /*0x6928e4*/
       || Mouse::IsButtonDown(HouseClass_Player[44736]);
    aP0 = (MouseClass *)-1; /*0x6928e8*/
    if ( v21 ) /*0x6928f0*/
      WaypointClass::FindOrCreate((char *)HouseClass_Player.field_0, v21, (IUnknown *)&aP0, (IUnknown *)&aP1); /*0x692903*/
    if ( *(_DWORD *)&stru_87C374[17968] ) /*0x69290f*/
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
        if ( *(_DWORD *)&v23->__pad_1D8[52] == -1 /*0x692996*/
          || !Radar::IsRadarTargetEligible((unsigned int *)v23)
          || (v30 = (IUnknown *)42,
              !LayerClass::IsWithinUsableArea(&stru_87C374[13428], (IUnknown *)v14, (TechnoClass *)1)) )
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
        && VectorClass::GetAtChecked(*(int **)(HouseClass_Player.field_0 + 4 * (_DWORD)aP0 + 528), (IUnknown *)v21) )
      {
        v30 = (IUnknown *)47; /*0x69295e*/
        goto LABEL_65; /*0x692966*/
      }
    }
    v23 = (IUnknown *)HouseClass_Player.field_0; /*0x692968*/
    goto LABEL_59; /*0x692968*/
  }
LABEL_65:
  if ( stru_87C374[17960] ) /*0x6929b6*/
    v30 = (IUnknown *)60; /*0x6929b8*/
  if ( !stru_87C374[17957] ) /*0x6929c7*/
    goto LABEL_81; /*0x6929c7*/
  if ( v8
    && (*(int (__thiscall **)(MouseClass *))(v8->field_0 + 60))(v8)
    && (v24 = (#375 *)(*(int (__thiscall **)(MouseClass *))(v8->field_0 + 60))(v8),
        (unsigned __int8)House::IsHumanPlayer(v24))
    && (*(unsigned __int8 (__thiscall **)(MouseClass *))(v8->field_0 + 152))(v8) )
  {
    if ( (*(int (__thiscall **)(MouseClass *))(v8->field_0 + 44))(v8) == 6 )
    {
      v30 = (IUnknown *)((*(unsigned __int8 (__thiscall **)(MouseClass *))(v8->field_0 + 128))(v8) != 0 ? 14 : 12);
      goto LABEL_81; /*0x692a24*/
    }
  }
  else
  {
    int v25 = v14[1] << 8; /*0x692a3e*/
    v31[0] = (*v14 << 8) + 128; /*0x692a41*/
    v31[1] = v25 + 128; /*0x692a51*/
    GroundHeight = 0; /*0x692a55*/
    GroundHeight = Cell::GetGroundHeight((IUnknown *)v31); /*0x692a66*/
    if ( !Cell::IsPassable((IUnknown *)v31) /*0x692aa3*/
      && !Game::Stub3((IUnknown *)v31)
      && *((_DWORD *)CellCoord::To_CellObj(&stru_87C374[13428], v14) + 17) != -1 )
    {
      if ( *(_BYTE *)(*(_DWORD *)(HouseClass_Player.field_38 /*0x692abc*/
                                + 4 * *((_DWORD *)CellCoord::To_CellObj(&stru_87C374[13428], v14) + 17))
                    + 680) )
      {
        if ( *((_DWORD *)CellCoord::To_CellObj(&stru_87C374[13428], v14) + 20) != -1 ) /*0x692ad4*/
        {
          _DWORD * v26 = CellCoord::To_CellObj(&stru_87C374[13428], v14); /*0x692adc*/
          v30 = (IUnknown *)12; /*0x692af4*/
          if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)&HouseClass_Array->__pad_0[4 * v26[20]]) ) /*0x692aed*/
            goto LABEL_81; /*0x692afc*/
        }
      }
    }
  }
  v30 = (IUnknown *)14; /*0x692afe*/
LABEL_81:
  if ( *(_DWORD *)&stru_87C374[17964] != -1 ) /*0x692b0e*/
  {
    v27 = (IUnknown *)(*(int (__thiscall **)(_DWORD, __int16 *, MouseClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player[42472] /*0x692b1d*/
                                                                                           + 4
                                                                                           * *(_DWORD *)&stru_87C374[17964])
                                                                             + 108))(
                        *(_DWORD *)(*(_DWORD *)&HouseClass_Player[42472]
                                  + 4 * *(_DWORD *)&stru_87C374[17964]),
                        v14,
                        v8);
    if ( v27 ) /*0x692b22*/
      v30 = v27; /*0x692b24*/
  }
  if ( !v30 && v21 ) /*0x692b32*/
    v30 = (IUnknown *)44; /*0x692b34*/
  if ( *(_DWORD *)&stru_87C374[17948] ) /*0x692b43*/
    return 0; /*0x692b45*/
  else
    return (int)v30; /*0x692b51*/
}
}
} // namespace gamemd
