// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x453E20
namespace gamemd {
int BuildingClass::LoadFromStream()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  size_t v3; // eax
  size_t i; // eax
  int result; // eax

  int v33; // [esp+60h] [ebp+4h] BYREF
  int v1 = v33; /*0x453e25*/
  int v2 = v33 + 4; /*0x453e2c*/
  v33 = (*(int (__stdcall **)(int))(*(_DWORD *)(v33 + 4) + 16))(v33 + 4); /*0x453e3d*/
  v3 = BuildingTypeClass::Dequeue((char **)&g_BuildingLoadQueue_Array, &v33); /*0x453e41*/
  int v4 = 0; /*0x453e46*/
  if ( v3 ) /*0x453e4a*/
  {
    int v5 = (int)(v3 - (_DWORD)g_BuildingLoadQueue_Array) >> 3; /*0x453e52*/
    if ( v5 != -1 ) /*0x453e58*/
    {
      signed int v6 = v5 + 1; /*0x453e5a*/
      for ( i = g_BuildingLoadQueue_Count; v6 < (int)g_BuildingLoadQueue_Count; i = g_BuildingLoadQueue_Count ) /*0x453e64*/
      {
        _DWORD * v8 = (_DWORD *)((char *)g_BuildingLoadQueue_Array + 8 * v6++); /*0x453e6c*/
        *(v8 - 2) = *v8; /*0x453e72*/
        *(v8 - 1) = v8[1]; /*0x453e78*/
      }
      g_BuildingLoadQueue_Count = i - 1; /*0x453e8d*/
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count) = 0; /*0x453e92*/
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count + 1) = 0; /*0x453ea3*/
      g_BuildingLoadQueue_Active = 0; /*0x453ea7*/
    }
  }
  int v34; // [esp+64h] [ebp+8h] BYREF
  int v9 = v34; /*0x453ead*/
  result = BuildingClass::AllocAndCtor(v1, v34); /*0x453eb3*/
  int v32 = result; /*0x453eba*/
  if ( result >= 0 ) /*0x453ebe*/
  {
    if ( v1 ) /*0x453ec6*/
      BuildingClass::ctor((_DWORD *)v1, (int)&v33); /*0x453ecf*/
    int v11 = (*(int (__stdcall **)(int))(*(_DWORD *)v2 + 16))(v2); /*0x453ee0*/
    int v12 = g_BuildingLoadQueue_Capacity; /*0x453ee2*/
    if ( (int)(g_BuildingLoadQueue_Count + 1) <= g_BuildingLoadQueue_Capacity ) /*0x453eea*/
      goto LABEL_13; /*0x453eea*/
    if ( !g_BuildingLoadQueue_Capacity ) /*0x453eee*/
      v12 = 10; /*0x453ef0*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, v12) ) /*0x453efb*/
    {
LABEL_13:
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count) = v11; /*0x453f0f*/
      *((_DWORD *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count + 1) = v1; /*0x453f1e*/
      g_BuildingLoadQueue_Dirty = 0; /*0x453f28*/
      ++g_BuildingLoadQueue_Count; /*0x453f2f*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 1312)); /*0x453f40*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 1316)); /*0x453f51*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 1344)); /*0x453f62*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 1352)); /*0x453f73*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 1356)); /*0x453f84*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 1536)); /*0x453f95*/
    AudioController::Init((_DWORD *)(v1 + 1696)); /*0x453fa0*/
    AudioController::Init((_DWORD *)(v1 + 1716)); /*0x453fab*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 1780)); /*0x453fbc*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v34, 4, 0); /*0x453fcd*/
    if ( result >= 0 ) /*0x453fd2*/
    {
      int v13 = v34; /*0x453fd8*/
      if ( v34 <= 0 ) /*0x453fde*/
      {
LABEL_24:
        int v18 = 0; /*0x45404c*/
        if ( v13 > 0 ) /*0x454050*/
        {
          do /*0x45406b*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(v1 + 1648) + 4 * v18++)); /*0x454061*/
          while ( v18 < v34 ); /*0x45406b*/
        }
        result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v34, 4, 0); /*0x45407a*/
        if ( result >= 0 ) /*0x45407f*/
        {
          int v19 = v34; /*0x454085*/
          int v20 = 0; /*0x454089*/
          if ( v34 <= 0 ) /*0x45408d*/
          {
LABEL_36:
            int v25 = 0; /*0x4540fb*/
            if ( v19 > 0 ) /*0x4540ff*/
            {
              do /*0x45411a*/
                ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(v1 + 1672) + 4 * v25++)); /*0x454110*/
              while ( v25 < v34 ); /*0x45411a*/
            }
            int * v26 = (int *)(v1 + 1372); /*0x45411c*/
            int v27 = 21; /*0x454122*/
            do /*0x454136*/
            {
              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v26++); /*0x45412d*/
              --v27; /*0x454135*/
            }
            while ( v27 ); /*0x454136*/
            int * v28 = (int *)(v1 + 1516); /*0x454138*/
            int v29 = 3; /*0x45413e*/
            do /*0x454152*/
            {
              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v28++); /*0x454149*/
              --v29; /*0x454151*/
            }
            while ( v29 ); /*0x454152*/
            int * v30 = (int *)(v1 + 1480); /*0x454154*/
            int v31 = 8; /*0x45415a*/
            do /*0x45416e*/
            {
              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v30++); /*0x454165*/
              --v31; /*0x45416d*/
            }
            while ( v31 ); /*0x45416e*/
            *(_DWORD *)(v1 + 1556) = 0; /*0x454174*/
            return v32; /*0x454170*/
          }
          else
          {
            while ( 1 ) /*0x45409c*/
            {
              result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v33, 4, 0); /*0x45409c*/
              if ( result < 0 ) /*0x4540a1*/
                break; /*0x4540a1*/
              int v21 = *(_DWORD *)(v1 + 1676); /*0x4540a7*/
              if ( *(_DWORD *)(v1 + 1684) < v21 /*0x4540d8*/
                || (*(_BYTE *)(v1 + 1681) || !v21)
  int v22; // eax
                && (v22 = *(_DWORD *)(v1 + 1688), v22 > 0)
                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v1 + 1668) + 8))(
                     v1 + 1668,
                     v21 + v22,
                     0) )
              {
                int v23 = *(_DWORD *)(v1 + 1684); /*0x4540df*/
                int v24 = *(_DWORD *)(v1 + 1672); /*0x4540e2*/
                *(_DWORD *)(v1 + 1684) = v23 + 1; /*0x4540e8*/
                *(_DWORD *)(v24 + 4 * v23) = v33; /*0x4540ef*/
              }
              v19 = v34; /*0x4540f2*/
              if ( ++v20 >= v34 ) /*0x4540f9*/
                goto LABEL_36; /*0x4540f9*/
            }
          }
        }
      }
      else
      {
        while ( 1 ) /*0x453fed*/
        {
          result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v33, 4, 0); /*0x453fed*/
          if ( result < 0 ) /*0x453ff2*/
            break; /*0x453ff2*/
          int v14 = *(_DWORD *)(v1 + 1652); /*0x453ff8*/
          if ( *(_DWORD *)(v1 + 1660) < v14 /*0x454029*/
            || (*(_BYTE *)(v1 + 1657) || !v14)
  int v15; // eax
            && (v15 = *(_DWORD *)(v1 + 1664), v15 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v1 + 1644) + 8))(
                 v1 + 1644,
                 v14 + v15,
                 0) )
          {
            int v16 = *(_DWORD *)(v1 + 1660); /*0x454030*/
            int v17 = *(_DWORD *)(v1 + 1648); /*0x454033*/
            *(_DWORD *)(v1 + 1660) = v16 + 1; /*0x454039*/
            *(_DWORD *)(v17 + 4 * v16) = v33; /*0x454040*/
          }
          v13 = v34; /*0x454043*/
          if ( ++v4 >= v34 ) /*0x45404a*/
            goto LABEL_24; /*0x45404a*/
        }
      }
    }
  }
  return result; /*0x45417e*/
}
}
} // namespace gamemd

// 0x455D50
namespace gamemd {
int BuildingClass::AssignDestination_SyncLog()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  IUnknown *aP1; // [esp+8h] [ebp+4h]

  if ( this->currentMission != 19 ) /*0x455d5a*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->q284)(this) /*0x455d73*/
      || *(_BYTE *)(this->Type + 5817) )
    {
      TechnoClass::SetFocus(this, aP1); /*0x455d80*/
    }
  int v4; // [esp+Ch] [ebp+8h]
    IPersistStream::Stub((BuildingTypeClass *)aP1, v4); /*0x455d8d*/
  }
  return result; /*0x455d93*/
}
}
} // namespace gamemd

// 0x4DFCB0
namespace gamemd {
int BuildingClass::FindClosestForRepair(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  _DWORD * v12 = 0; /*0x4dfcbf*/
  int v11 = 0x7FFFFFFF; /*0x4dfccd*/
  int v2 = *(_DWORD *)(a1[135] + 240) - 1; /*0x4dfcdb*/
  if ( v2 < 0 ) /*0x4dfcdc*/
    goto LABEL_10; /*0x4dfcdc*/
  do
  {
    _DWORD * v3 = *(_DWORD **)(*(_DWORD *)(a1[135] + 228) + 4 * v2); /*0x4dfcf3*/
  char v15[12]; // [esp+38h] [ebp-18h] BYREF
    _DWORD * v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v3 + 72))(v3, v15); /*0x4dfcff*/
  char v16[12]; // [esp+44h] [ebp-Ch] BYREF
    _DWORD * v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*a1 + 72))(a1, v16); /*0x4dfd08*/
    int v13 = v5[1] - v4[1]; /*0x4dfd28*/
    int v14 = v5[2] - v4[2]; /*0x4dfd2c*/
    double v6 = Math::Sqrt((double)(*v5 - *v4) * (double)(*v5 - *v4) + (double)v13 * (double)v13 + (double)v14 * (double)v14); /*0x4dfd55*/
    int v7 = Math::RoundToInt(v6); /*0x4dfd62*/
    if ( v7 < v11 )
    {
      int v8 = a1 ? ((*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 15 ? (unsigned int)a1 : 0) : 0;
      if ( BuildingClass::CanRepair(v3, v8) ) /*0x4dfd89*/
      {
        v11 = v7; /*0x4dfd92*/
        v12 = v3; /*0x4dfd96*/
      }
    }
    --v2; /*0x4dfd9a*/
  }
  while ( v2 >= 0 );
  if ( v12 ) /*0x4dfda7*/
  {
    _DWORD * v10 = (_DWORD *)a1[361]; /*0x4dfdba*/
    *((_BYTE *)a1 + 1680) = 1; /*0x4dfdc0*/
    if ( v10 != v12 || a1[43] != 8 ) /*0x4dfdd2*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *, int))(*a1 + 1152))(a1, v12, 1); /*0x4dfddb*/
      (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 488))(a1, 8, 1); /*0x4dfde9*/
    }
    return 1; /*0x4dfdf0*/
  }
  else
  {
LABEL_10:
    *((_BYTE *)a1 + 1680) = 0; /*0x4dfda9*/
    return 0; /*0x4dfdb0*/
  }
}
}
} // namespace gamemd

// 0x4DFE00
namespace gamemd {
int BuildingClass::FindClosestForRepair2(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v1 = g_BuildingProductionState - 1; /*0x4dfe0f*/
  _DWORD * v13 = 0; /*0x4dfe17*/
  int v3 = 0x7FFFFFFF; /*0x4dfe1f*/
  int v12 = g_BuildingProductionState - 1; /*0x4dfe24*/
  if ( g_BuildingProductionState - 1 < 0 ) /*0x4dfe28*/
    goto LABEL_10; /*0x4dfe28*/
  do
  {
    _DWORD * v4 = (_DWORD *)*((_DWORD *)g_BuildingClass_InstanceCount + v1); /*0x4dfe36*/
    if ( a1 )
      int v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 15 ? a1 : 0;
    else
      v5 = 0; /*0x4dfe3b*/
    if ( BuildingClass::CanRepair(v4, v5) ) /*0x4dfe54*/
    {
  char v16[12]; // [esp+38h] [ebp-18h] BYREF
      _DWORD * v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v4 + 72))(v4, v16); /*0x4dfe6b*/
  char v17[12]; // [esp+44h] [ebp-Ch] BYREF
      _DWORD * v7 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a1 + 72))(a1, v17); /*0x4dfe74*/
      int v14 = v7[1] - v6[1]; /*0x4dfe92*/
      int v15 = v7[2] - v6[2]; /*0x4dfe9c*/
      double v8 = Math::Sqrt((double)(*v7 - *v6) * (double)(*v7 - *v6) + (double)v15 * (double)v15 + (double)v14 * (double)v14); /*0x4dfec1*/
      int v9 = Math::RoundToInt(v8); /*0x4dfec9*/
      if ( v9 < v3 ) /*0x4dfed0*/
      {
        v3 = v9; /*0x4dfed2*/
        v13 = v4; /*0x4dfed4*/
      }
    }
    v1 = --v12; /*0x4dfedc*/
  }
  while ( v12 >= 0 );
  if ( v13 ) /*0x4dfeed*/
  {
    _DWORD * v11 = *(_DWORD **)(a1 + 1444); /*0x4dff00*/
    *(_BYTE *)(a1 + 1681) = 1; /*0x4dff06*/
    if ( v11 != v13 || *(_DWORD *)(a1 + 172) != 8 ) /*0x4dff18*/
    {
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 1152))(a1, v13, 1); /*0x4dff21*/
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 488))(a1, 8, 1); /*0x4dff2f*/
    }
    return 1; /*0x4dff36*/
  }
  else
  {
LABEL_10:
    *(_BYTE *)(a1 + 1681) = 0; /*0x4dfeef*/
    return 0; /*0x4dfef6*/
  }
}
}
} // namespace gamemd

// 0x629720
namespace gamemd {
int BuildingClass::AnimController()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int *Value; // eax
  int v5; // ebx
  int v6; // ecx
  int v7; // edx
  int v8; // edx
  _DWORD *v10; // ecx
  int v11; // edx
  _DWORD v12[4]; // [esp+Ch] [ebp-10h] BYREF

  Value = ProgressTimer::GetValue((_WORD *)(this->owningHouseIndex + 904), v12); /*0x629736*/
  int v3 = this->q012; /*0x62973b*/
  unsigned int v4 = *Value; /*0x62973e*/
  if ( v3 < 0 ) /*0x629742*/
    goto LABEL_6; /*0x629742*/
  if ( v3 <= 1 ) /*0x629747*/
  {
    v5 = 0; /*0x629755*/
    v6 = 3; /*0x629757*/
    goto LABEL_8; /*0x62975c*/
  }
  if ( v3 == 2 ) /*0x62974c*/
    v5 = 80; /*0x62974e*/
  else
LABEL_6:
    v5 = 160; /*0x62975e*/
  v6 = 4; /*0x629763*/
LABEL_8:
  v7 = this->abstractFlags + 1; /*0x629768*/
  this->abstractFlags = v7; /*0x62976e*/
  if ( v7 >= v6 ) /*0x629773*/
  {
    v8 = this->q04C; /*0x629775*/
    this->abstractFlags = 0; /*0x629778*/
    this->q04C = ++v8; /*0x629782*/
    if ( v8 >= 10 ) /*0x629788*/
      return 1; /*0x629792*/
    v10 = (_DWORD *)this->q011; /*0x629793*/
    if ( v10 ) /*0x629798*/
    {
      v10[45] = g_CurrentFrame; /*0x6297af*/
      v11 = v12[2]; /*0x6297b2*/
      v10[48] = 128; /*0x6297b7*/
      v10[46] = v11; /*0x6297bf*/
      v10[47] = 128; /*0x6297c5*/
      *(_DWORD *)(this->q011 + 172) = v5 + this->q04C + 10 * ((((v4 >> 12) + 1) >> 1) & 7); /*0x6297d7*/
    }
  }
  return 0; /*0x62978a*/
}
}
} // namespace gamemd

// 0x70BF50
namespace gamemd {
int BuildingClass::AllocAndCtor(BuildingClass * aP0, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  MouseClass *v3; // edi
  void *v2; // ecx
  result = RadioClass::LoadState(v2, (ObjectClass *)aP0, (ObjectClass *)aP2); /*0x70bf5c*/
  if ( result >= 0 ) /*0x70bf65*/
  {
    aP0->planningToken = 0; /*0x70bf79*/
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488[27784], (MouseClass *)&aP0->focus); /*0x70bf7f*/
    v3 = (MouseClass *)&aP0->diskLaserTimer[1]; /*0x70bf84*/
    int v5 = 8; /*0x70bf8a*/
    do /*0x70bf9e*/
    {
      ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488[27784], v3); /*0x70bf95*/
      v3 = (MouseClass *)((char *)v3 + 4); /*0x70bf9a*/
      --v5; /*0x70bf9d*/
    }
    while ( v5 ); /*0x70bf9e*/
    ObjectPtr::RegisterForTracking( /*0x70bfac*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->ammoReloadTimer);
    ObjectPtr::RegisterForTracking( /*0x70bfbd*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->spawnManager);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488[27784], (MouseClass *)&aP0->Owner); /*0x70bfce*/
    ObjectPtr::RegisterForTracking( /*0x70bfdf*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->voiceVolumeModifier);
    ObjectPtr::RegisterForTracking( /*0x70bff0*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->sprayOffsetIndex);
    ObjectPtr::RegisterForTracking( /*0x70c001*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->isUncrushable);
    ObjectPtr::RegisterForTracking( /*0x70c012*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->rockerLinkedUnit);
    ObjectPtr::RegisterForTracking( /*0x70c023*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->previousTeam);
    ObjectPtr::RegisterForTracking( /*0x70c034*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->captureManager);
    ObjectPtr::RegisterForTracking( /*0x70c045*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->mindControlledBy_a_unit);
    ObjectPtr::RegisterForTracking( /*0x70c056*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->mindControlRingAnim);
    ObjectPtr::RegisterForTracking( /*0x70c067*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->locomotorTarget);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488[27784], (MouseClass *)&aP0->lastTarget); /*0x70c078*/
    ObjectPtr::RegisterForTracking( /*0x70c089*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->mindControlledBy_house);
    ObjectPtr::RegisterForTracking( /*0x70c09a*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->mindControlledBy);
    ObjectPtr::RegisterForTracking( /*0x70c0ab*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->disguiseAsType);
    ObjectPtr::RegisterForTracking( /*0x70c0bc*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->isDisguisedFlag_as_house);
    ObjectPtr::RegisterForTracking( /*0x70c0cd*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->__pad_26A[10]);
    ObjectPtr::RegisterForTracking( /*0x70c0de*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->__pad_26A[14]);
    ObjectPtr::RegisterForTracking( /*0x70c0ef*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->owningHouseIndex0);
    ObjectPtr::RegisterForTracking( /*0x70c100*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->isDeactivated);
    ObjectPtr::RegisterForTracking( /*0x70c111*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->drainTarget);
    ObjectPtr::RegisterForTracking( /*0x70c122*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->__pad_115[7]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488[27784], (MouseClass *)&aP0->airstrike); /*0x70c133*/
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488[27784], (MouseClass *)&aP0->isBerserk); /*0x70c144*/
    ObjectPtr::RegisterForTracking( /*0x70c155*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->isBerserk_duration_left);
    ObjectPtr::RegisterForTracking( /*0x70c166*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->__pad_3F7[49]);
    ObjectPtr::RegisterForTracking( /*0x70c177*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->__pad_3F7[53]);
    ObjectPtr::RegisterForTracking( /*0x70c188*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->__pad_115[3]);
    ObjectPtr::RegisterForTracking( /*0x70c199*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->damageParticles);
    ObjectPtr::RegisterForTracking( /*0x70c1aa*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->__pad_115[27]);
    ObjectPtr::RegisterForTracking( /*0x70c1bb*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP0->__pad_115[23]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488[27784], (MouseClass *)&aP0->target); /*0x70c1cc*/
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488[27784], (MouseClass *)&aP0->drainingMe); /*0x70c1dd*/
    AudioController::Init(&aP0->audioController4[3]); /*0x70c1e8*/
    *(_DWORD *)&aP0->__pad_491[11] = 1; /*0x70c1f3*/
    *(_DWORD *)&aP0->__pad_491[15] = 0; /*0x70c1fd*/
    AudioController::Init(&aP0->__pad_491[19]); /*0x70c203*/
    aP0->__pad_491[39] = 0; /*0x70c20e*/
    aP0->audioHandle4 = 0; /*0x70c214*/
    AudioController::Init(aP0->audioController5); /*0x70c21a*/
    aP0->isAudio5Active = 0; /*0x70c225*/
    aP0->audioHandle5 = 0; /*0x70c22b*/
    AudioController::Init(aP0->audioController6); /*0x70c231*/
    aP0->queuedVoiceIndex = -1; /*0x70c23a*/
    aP0->voiceFlags = -1; /*0x70c240*/
    return 0; /*0x70c246*/
  }
  return result; /*0x70c249*/
}
}
} // namespace gamemd

// 0x712130
namespace gamemd {
int BuildingClass::processCapture()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al

  int v1 = this->q898; /*0x712130*/
  if ( !v1 ) /*0x712138*/
    return 0; /*0x712138*/
  int v2 = this->q8B4; /*0x71213a*/
  result = 1; /*0x712140*/
  if ( v1 != v2 && *(int *)(v1 + 156) <= 1 && (!v2 || *(int *)(v2 + 156) <= 1) ) /*0x71215f*/
    return 0; /*0x712161*/
  return result; /*0x712163*/
}
}
} // namespace gamemd

// 0x739EC0
namespace gamemd {
void BuildingClass_ProcessSell()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x451690
namespace gamemd {
void BuildingClass::ClearSuperWeaponAnim()
{
{
    char result;
    result = this->UpgradeLevel;
    if ( result )
  {
    int v3 = result;
    bool v4 = 0;
    int v5 = *(int *)(this + 4 * result + 1512);
    if ( v5 && (v4 = *(int *)(v5 + 5872) != -1, *(char *)(v5 + 3233)) )
    {
    BuildingClass::ClearAnims((int *)this, (TechnoClass *)9);
    *(int *)(this + 4 *(void**)this->UpgradeLevel + 1512) = 0;
    this->UpgradeLevel = 0;
    this->SuperWeaponToken = -1;
    if ( v4 )
      {
    SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(this->focus);
    return 1;
      }
    }
    else
    {
    BuildingClass::ClearAnims((int *)this, (TechnoClass *)(v3 - 1));
    char v6 = this->UpgradeLevel - 1;
    this->UpgradeLevel = v6;
    *(int *)(this + 4 * v6 + 1516) = 0;
    if ( v4 )
    SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(this->focus);
    }
    return 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x459DB0
namespace gamemd {
TechnoClass * BuildingClass::ClearLimpetCheck()
{
{
    TechnoClass *v2;
    *(int *)v2->__pad_0 = g_TerrainTypeTable;
    return v2;
}
}
} // namespace gamemd

// 0x459E70
namespace gamemd {
int BuildingClass::Mission_Guard()
{
return 1824;
}
} // namespace gamemd

// 0x45A610
namespace gamemd {
int BuildingClass::FindInPointerArray(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->uniqueId;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->vtable1; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

}
// 0x5F5E80
namespace gamemd {
int BuildingClass::SaveLoad_Register()
{
{
    int result;
    int *v2;
    int v3;
    result = AbstractClass::SaveLoad_Prefix_0(v2, v3);
    if ( result >= 0 )
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 12);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 13);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 14);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 6);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 34);
    AudioController::Init(v2 + 15);
    AudioController::Init(v2 + 20);
    v2[42] = 0;
    return 0;
  }
    return result;
}
}
} // namespace gamemd
