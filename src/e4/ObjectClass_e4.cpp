// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"

// 0x483610
namespace ra2 {
namespace game {
int ObjectClass::processPointerInvalid()
{
int ObjectClass::processPointerInvalid()
{
  return (this->q140 >> 8) & 1;
}
}
} // namespace game
} // namespace ra2

// 0x4D7D50
namespace ra2 {
namespace game {
int ObjectClass::SpawnInfantry(FootClass * aP1, FootClass * aP2, FootClass * aP3, FootClass * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  RadarClass *v7; // edi
  FootClass **PlacementCell; // eax
  void **v18; // eax
  __int16 *v32; // eax
  int Type; // edi
  __int16 *v34; // eax
  __int16 v37; // cx
  IUnknown *v38; // [esp+0h] [ebp-28h]
  int _8; // [esp+8h] [ebp-20h]
  FootClass *v42; // [esp+10h] [ebp-18h] BYREF
  RadarClass *v40; // [esp+14h] [ebp-14h] BYREF
  CoordStruct v45; // [esp+1Ch] [ebp-Ch] BYREF
  if ( this->q298 ) /*0x4d7d58*/
    return 0; /*0x4d7d64*/
  if ( this->q0AA && !*(_BYTE *)((*(int (__thiscall **)(_BYTE *))(this->hasParachute)(this) + 1682) ) /*0x4d7d81*/
    return 0; /*0x4d7d8d*/
  v7 = (RadarClass *)aP2; /*0x4d7d9a*/
  int v8 = (*(int (__thiscall **)(_BYTE *, FootClass *, _DWORD, FootClass *))(this->estimatedHealth)(this, aP2, 0, aP4); /*0x4d7db1*/
  if ( !LayerClass::IsWithinUsableArea(&stru_87C374[13428], (IUnknown *)v7, (TechnoClass *)1) && v8 != 2 ) /*0x4d7dbf*/
    return 0; /*0x4d7dc1*/
  switch ( v8 ) /*0x4d7de0*/
  {
    case 1: /*0x4d7de0*/
    case 62: /*0x4d7de0*/
      if ( g_MoveFeedback ) /*0x4d7ebc*/
      {
        int v16 = SHIWORD(v7->field_0) << 8; /*0x4d7ed6*/
        v45.X = (SLOWORD(v7->field_0) << 8) + 128; /*0x4d7ed9*/
        v45.Y = v16 + 128; /*0x4d7ee9*/
        v45.Z = 0; /*0x4d7eed*/
        v45.Z = Cell::GetGroundHeight((IUnknown *)&v45); /*0x4d7efe*/
        if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)&v45) + 80) & 0x100) != 0 ) /*0x4d7f16*/
          v45.Z += *(_DWORD *)&stru_89E138[89276]; /*0x4d7f24*/
        int v17 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 532); /*0x4d7f35*/
        if ( *(_DWORD *)&HouseClass_Player[29932] && *(_DWORD *)&HouseClass_Player[29932] != 5 ) /*0x4d7f40*/
        {
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 532) = -3; /*0x4d7f42*/
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 2996) + 832) = -5000; /*0x4d7f57*/
        }
        v18 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4d7f66*/
        if ( v18 ) /*0x4d7f70*/
          aP4 = (FootClass *)AnimClass::ctor( /*0x4d7f98*/
                               v18,
                               *(CoordStruct **)(*(_DWORD *)&stru_87C374[44652] + 2996),
                               &v45,
                               0,
                               (CoordStruct *)1,
                               (void *)0x600,
                               0,
                               0);
        else
          aP4 = 0; /*0x4d7f9e*/
        if ( *(_DWORD *)&HouseClass_Player[29932] && *(_DWORD *)&HouseClass_Player[29932] != 5 ) /*0x4d7fb6*/
        {
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 532) = v17; /*0x4d7fcb*/
  int v19; // eax
          v19 = (*(int (__thiscall **)(char *, FootClass **))(*(_DWORD *)&HouseClass_Player[44124] + 16))( /*0x4d7fd7*/
                  &HouseClass_Player[44124],
                  &aP4);
          if ( v19 != -1 && v19 < *(int *)&HouseClass_Player[44140] ) /*0x4d7fe7*/
          {
            --*(_DWORD *)&HouseClass_Player[44140]; /*0x4d7fec*/
            for ( ; /*0x4d7ff2*/
                  v19 < *(int *)&HouseClass_Player[44140];
                  *(_DWORD *)(*(_DWORD *)&HouseClass_Player[44128] + 4 * v19 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[44128] + 4 * v19) )
            {
              ++v19; /*0x4d7ffa*/
            }
          }
          if ( *(int *)&HouseClass_Player[196] < *(int *)&HouseClass_Player[188] /*0x4d8042*/
            || (HouseClass_Player[193] || !*(_DWORD *)&HouseClass_Player[188])
            && *(int *)&HouseClass_Player[200] > 0
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player[180] + 8))(
                 &HouseClass_Player[180],
                 *(_DWORD *)&HouseClass_Player[200] + *(_DWORD *)&HouseClass_Player[188],
                 0) )
          {
            int v20 = (*(_DWORD *)&HouseClass_Player[196])++; /*0x4d8055*/
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player[184] + 4 * v20) = aP4; /*0x4d8062*/
          }
        }
      }
      goto LABEL_38; /*0x4d8062*/
    case 2: /*0x4d7de0*/
LABEL_38:
  char v41; // [esp+Ch] [ebp-1Ch]
  int v44; // [esp+18h] [ebp-10h] BYREF
      FootClass *v39 = (FootClass *)ObjectClass::FindPlacementCell((FootClass *)&v44, (int)v7, 0, v39, _8, v41)->field_0; /*0x4d8065*/
      if ( aP4 == *(FootClass **)&stru_89E138[89168] ) /*0x4d8081*/
        return 0; /*0x4d8081*/
      int v21 = *(_DWORD *)this; /*0x4d8099*/
      v38 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)aP3->__pad_0); /*0x4d80a6*/
      void * v22 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&aP4); /*0x4d80ac*/
LABEL_51:
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, IUnknown *))(v21 + 888))(this, 2, 0, v22, v38); /*0x4d822a*/
LABEL_52:
      result = 1; /*0x4d8237*/
      break; /*0x4d8239*/
    case 3: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(this->q0A0)(this) ) /*0x4d8155*/
        return 0; /*0x4d8155*/
      int v28 = *(_DWORD *)this; /*0x4d815b*/
      void * v29 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)v7); /*0x4d8165*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v28 + 888))(this, 7, 0, v29, 0); /*0x4d8171*/
      return 1; /*0x4d817f*/
    case 5: /*0x4d7de0*/
    case 63: /*0x4d7de0*/
      int v23 = ObjectClass::processDeath(v7); /*0x4d80b3*/
      if ( !v23 || *(_BYTE *)(v23 + 256) || *(int *)(v23 + 108) <= 0 ) /*0x4d80cb*/
      {
        int v24 = *(_DWORD *)this; /*0x4d80e9*/
        void * v25 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)v7); /*0x4d80f5*/
        (*(void (__thiscall **)(_BYTE *, int, void *, _DWORD, _DWORD))(v24 + 888))(this, 1, v25, 0, 0); /*0x4d80ff*/
        return 1; /*0x4d8107*/
      }
      else
      {
        (*(void (__thiscall **)(_BYTE *, int, int, _DWORD, _DWORD))(*(_DWORD *)this + 888))(this, 1, v23, 0, 0); /*0x4d80d8*/
        return 1; /*0x4d80e0*/
      }
    case 6: /*0x4d7de0*/
      int v14 = *(_DWORD *)this; /*0x4d7e8e*/
      void * v15 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)v7); /*0x4d7e98*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v14 + 888))(this, 10, 0, v15, 0); /*0x4d7ea4*/
      return 1; /*0x4d7eb2*/
    case 9: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(this->q0A0)(this) ) /*0x4d811c*/
        return 0; /*0x4d811c*/
      int v26 = *(_DWORD *)this; /*0x4d8122*/
      void * v27 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)v7); /*0x4d812c*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v26 + 888))(this, 8, 0, v27, 0); /*0x4d8138*/
      return 1; /*0x4d8146*/
    case 16: /*0x4d7de0*/
      int v30 = *(_DWORD *)this; /*0x4d8182*/
      void * v31 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)v7); /*0x4d818c*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v30 + 888))(this, 17, 0, v31, 0); /*0x4d8198*/
      return 1; /*0x4d81a6*/
    case 26: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(this->location)(this) /*0x4d7e59*/
        && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(this->q330)(this)
        || !(*(unsigned __int8 (__thiscall **)(_BYTE *))(this->q0A0)(this) )
      {
        return 0; /*0x4d7e61*/
      }
      int v12 = *(_DWORD *)this; /*0x4d7e67*/
      void * v13 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)v7); /*0x4d7e73*/
      (*(void (__thiscall **)(_BYTE *, int, void *, _DWORD, _DWORD))(v12 + 888))(this, 11, v13, 0, 0); /*0x4d7e7d*/
      return 1; /*0x4d7e8b*/
    case 35: /*0x4d7de0*/
      v32 = (__int16 *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)v7); /*0x4d81af*/
      Type = InfantryClass::GetType(v32); /*0x4d81bb*/
      aP2 = *(FootClass **)(Type + 40); /*0x4d81ca*/
      v34 = (__int16 *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&aP2); /*0x4d81ce*/
      char v35 = *(_DWORD *)(InfantryClass::GetType(v34) + 44) - 4; /*0x4d81e0*/
      aP3 = *(FootClass **)(Type + 40); /*0x4d81e3*/
      int v36 = v35 & 7; /*0x4d81e7*/
      v38 = 0; /*0x4d81ea*/
      v37 = (_WORD)aP3 + *(_WORD *)&stru_89E138[5296][4 * v36 + 160]; /*0x4d81fb*/
      v21 = *(_DWORD *)this; /*0x4d81fe*/
      LOWORD(v36) = *(_WORD *)&stru_89E138[5296][4 * v36 + 162]; /*0x4d8200*/
      LOWORD(aP4) = v37; /*0x4d8204*/
      HIWORD(aP4) = HIWORD(aP3) + v36; /*0x4d8213*/
      v42 = aP4; /*0x4d821c*/
      v22 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&v42); /*0x4d8225*/
      goto LABEL_51; /*0x4d8225*/
    case 51: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(this->q0A0)(this) ) /*0x4d7df3*/
        return 0; /*0x4d7df3*/
      PlacementCell = (FootClass **)ObjectClass::FindPlacementCell((FootClass *)&v40, (int)v7, 0, v39, _8, v41); /*0x4d7dff*/
      int v10 = *(_DWORD *)this; /*0x4d7e06*/
      aP4 = *PlacementCell; /*0x4d7e0c*/
      void * v11 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&aP4); /*0x4d7e18*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v10 + 888))(this, 25, 0, v11, 0); /*0x4d7e24*/
      return 1; /*0x4d7e32*/
    default:
      goto LABEL_52;
  }
  return result; /*0x4d7d62*/
}
}
} // namespace game
} // namespace ra2

// 0x4D9C60
namespace ra2 {
namespace game {
int ObjectClass::CheckCellFlags(int a1, int a2, int * a3, unsigned char * a4, unsigned int * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v7; // dx
  _DWORD * v5 = a5; /*0x4d9c67*/
  if ( !a5 ) /*0x4d9c72*/
  {
    int v6 = ((_BYTE)a2 - 4) & 7; /*0x4d9c77*/
    v7 = *(_WORD *)(a1 + 38) + HIWORD(Direction_X_Offsets[v6]); /*0x4d9c8e*/
    LOWORD(a5) = *(_WORD *)(a1 + 36) + LOWORD(Direction_X_Offsets[v6]); /*0x4d9c99*/
    HIWORD(a5) = v7; /*0x4d9ca2*/
    v5 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a5); /*0x4d9cba*/
  }
  if ( a2 == -1 ) /*0x4d9cbf*/
  {
    if ( *a3 == -1 && (*(_DWORD *)(a1 + 320) & 0x100) != 0 ) /*0x4d9e50*/
      *a3 = *(char *)(a1 + 283) + 4; /*0x4d9e5c*/
    return 0; /*0x4d9e5c*/
  }
  if ( !v5 || !a1 ) /*0x4d9ccf*/
    return 0; /*0x4d9ccf*/
  if ( *a3 == -1 && (v5[80] & 0x100) != 0 ) /*0x4d9ce8*/
  {
    *a3 = *((char *)v5 + 283) + 4; /*0x4d9cf4*/
    if ( (*(_DWORD *)(a1 + 320) & 0x200) == 0 ) /*0x4d9d00*/
      return 7; /*0x4d9d0b*/
  }
  int v10 = *(char *)(a1 + 283); /*0x4d9d14*/
  int v18 = v5[80] & 0x100; /*0x4d9d20*/
  if ( v18 ) /*0x4d9d24*/
    int v11 = *((char *)v5 + 283); /*0x4d9d26*/
  else
    v11 = *a3; /*0x4d9d2f*/
  int v12 = v11 - v10; /*0x4d9d32*/
  unsigned int v13 = abs32(v12); /*0x4d9d39*/
  if ( !v13 ) /*0x4d9d3e*/
  {
    int v17 = *(_DWORD *)(a1 + 320); /*0x4d9e08*/
    if ( ((v17 & 0x100) == 0 || (v17 & 0x200) == 0 || !v18) && *a3 != -1 && *a3 != v10 ) /*0x4d9e30*/
      return 7; /*0x4d9e3b*/
    return 0; /*0x4d9e30*/
  }
  unsigned int v14 = v13 - 1; /*0x4d9d44*/
  if ( !v14 ) /*0x4d9d45*/
  {
    if ( v12 <= 0 ) /*0x4d9dda*/
    {
      if ( !*((_BYTE *)v5 + 284) ) /*0x4d9df2*/
        return 7; /*0x4d9e05*/
    }
    else if ( !*(_BYTE *)(a1 + 284) ) /*0x4d9ddc*/
    {
      return 7; /*0x4d9def*/
    }
    return 0; /*0x4d9de4*/
  }
  if ( v14 != 3 ) /*0x4d9d4e*/
    return 7; /*0x4d9d59*/
  int v15 = *((char *)v5 + 283); /*0x4d9d5c*/
  if ( v15 == v10 - 4 ) /*0x4d9d68*/
  {
    if ( *a3 != v10 ) /*0x4d9d6d*/
      return 7; /*0x4d9d78*/
    if ( !v18 ) /*0x4d9d81*/
      return 7; /*0x4d9d8c*/
  }
  if ( v10 != v15 - 4 ) /*0x4d9d94*/
    return 0; /*0x4d9e61*/
  int v16 = *(_DWORD *)(a1 + 320); /*0x4d9d9a*/
  if ( (v16 & 0x100) == 0 ) /*0x4d9da6*/
    return 7; /*0x4d9dab*/
  if ( (v16 & 0x200) == 0 ) /*0x4d9dba*/
    return 7; /*0x4d9dbf*/
  *a4 = 1; /*0x4d9dcf*/
  return 0; /*0x4d9d02*/
}
}
} // namespace game
} // namespace ra2

// 0x4DB3C0
namespace ra2 {
namespace game {
int ObjectClass::LoadFromStream_Common(FootClass * aP0, LPSTREAM pStm)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IStream *v4; // ebp
  int result; // eax
  VectorClass *v6; // edi
  VectorClass *v12; // edi
  int i; // edi
  int j; // edi
  FootClass *aP0a; // [esp+5Ch] [ebp+4h]
  FootClass *aP0b; // [esp+5Ch] [ebp+4h]

  int v3 = aP0->locomotor[0]; /*0x4db3cb*/
  if ( v3 ) /*0x4db3d3*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(aP0->locomotor[0]); /*0x4db3d8*/
  v4 = pStm; /*0x4db3db*/
  aP0->locomotor[0] = 0; /*0x4db3df*/
  result = BuildingClass::AllocAndCtor((BuildingClass *)aP0, (int)v4); /*0x4db3e7*/
  if ( result >= 0 ) /*0x4db3ee*/
  {
    result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 12))(v4, &pStm, 4, 0); /*0x4db400*/
    if ( result >= 0 ) /*0x4db405*/
    {
  int v20; // [esp+54h] [ebp-4h] BYREF
      v6 = (VectorClass *)aP0->unknownAbstractArray588; /*0x4db40b*/
      if ( aP0 != (FootClass *)-1416 ) /*0x4db413*/
      {
        AbstractClassVector::Construct(aP0->unknownAbstractArray588, 0, 0); /*0x4db419*/
        *(_DWORD *)v6->vtable0 = &vt_DynamicVectorClass_AbstractClass; /*0x4db41e*/
        *(_DWORD *)&aP0->__pad_58C[16] = 10; /*0x4db424*/
        *(_DWORD *)&aP0->__pad_58C[12] = 0; /*0x4db42b*/
      }
      aP0a = 0; /*0x4db432*/
      if ( (int)pStm <= 0 ) /*0x4db438*/
      {
LABEL_16:
        result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 12))( /*0x4db4a2*/
                   v4,
                   &pStm,
                   4,
                   0);
        if ( result >= 0 ) /*0x4db4b3*/
        {
          v12 = (VectorClass *)aP0->FootClass_field_abstract_array_5AC; /*0x4db4b9*/
          if ( aP0 != (FootClass *)-1452 ) /*0x4db4c1*/
          {
            AbstractClassVector::Construct(aP0->FootClass_field_abstract_array_5AC, 0, 0); /*0x4db4c7*/
            *(_DWORD *)v12->vtable0 = &vt_DynamicVectorClass_AbstractClass; /*0x4db4cc*/
            *(_DWORD *)&aP0->__pad_5B0[16] = 10; /*0x4db4d2*/
            *(_DWORD *)&aP0->__pad_5B0[12] = 0; /*0x4db4d9*/
          }
          aP0b = 0; /*0x4db4e0*/
          if ( (int)pStm <= 0 ) /*0x4db4e6*/
          {
LABEL_28:
            aP0->locomotor[0] = 0; /*0x4db550*/
            ObjectClass::updateStateFlags(aP0->locomotor); /*0x4db55a*/
            aP0->locomotor[0] = 0; /*0x4db566*/
            OleLoadFromStream(v4, &IID_ILocomotion, (LPVOID *)aP0->locomotor); /*0x4db568*/
            aP0->FootClass_field_5A0 = 0; /*0x4db574*/
            ObjectPtr::RegisterForTracking( /*0x4db580*/
              (SwizzleManagerClass *)&stru_B05488[27784],
              (MouseClass *)&aP0->team);
            ObjectPtr::RegisterForTracking( /*0x4db591*/
              (SwizzleManagerClass *)&stru_B05488[27784],
              (MouseClass *)&aP0->nextTeamMember);
            ObjectPtr::RegisterForTracking( /*0x4db5a2*/
              (SwizzleManagerClass *)&stru_B05488[27784],
              (MouseClass *)&aP0->movementDestination);
            ObjectPtr::RegisterForTracking( /*0x4db5b3*/
              (SwizzleManagerClass *)&stru_B05488[27784],
              (MouseClass *)&aP0->lastDestination);
            ObjectPtr::RegisterForTracking( /*0x4db5c4*/
              (SwizzleManagerClass *)&stru_B05488[27784],
              (MouseClass *)&aP0->FootClass_field_5C8);
            ObjectPtr::RegisterForTracking( /*0x4db5d5*/
              (SwizzleManagerClass *)&stru_B05488[27784],
              (MouseClass *)&aP0->FootClass_field_5CC);
            ObjectPtr::RegisterForTracking( /*0x4db5e6*/
              (SwizzleManagerClass *)&stru_B05488[27784],
              (MouseClass *)&aP0->FootClass_field_5DC);
            ObjectPtr::RegisterForTracking( /*0x4db5f7*/
              (SwizzleManagerClass *)&stru_B05488[27784],
              (MouseClass *)&aP0->parasiteEatingMe);
            ObjectPtr::RegisterForTracking( /*0x4db608*/
              (SwizzleManagerClass *)&stru_B05488[27784],
              (MouseClass *)&aP0->parasiteImUsing);
            AudioController::Init(aP0->audioController7); /*0x4db613*/
            aP0->FootClass_field_bool_53C = 0; /*0x4db618*/
            aP0->unknown540 = 0; /*0x4db61e*/
            for ( i = 0; i < *(_DWORD *)&aP0->__pad_5B0[12]; ++i ) /*0x4db62e*/
              ObjectPtr::RegisterForTracking( /*0x4db63f*/
                (SwizzleManagerClass *)&stru_B05488[27784],
                (MouseClass *)(*(_DWORD *)aP0->__pad_5B0 + 4 * i));
            for ( j = 0; j < *(_DWORD *)&aP0->__pad_58C[12]; ++j ) /*0x4db659*/
              ObjectPtr::RegisterForTracking( /*0x4db66a*/
                (SwizzleManagerClass *)&stru_B05488[27784],
                (MouseClass *)(*(_DWORD *)aP0->__pad_58C + 4 * j));
            return 0; /*0x4db67a*/
          }
          else
          {
            while ( 1 ) /*0x4db4e8*/
            {
              int v13 = *(_DWORD *)v4->__pad_0; /*0x4db4e8*/
              v20 = 0; /*0x4db4f4*/
              result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v13 + 12))(v4, &v20, 4, 0); /*0x4db4f8*/
              if ( result < 0 ) /*0x4db4fd*/
                break; /*0x4db4fd*/
              int v14 = *(_DWORD *)&aP0->__pad_5B0[4]; /*0x4db503*/
              if ( *(_DWORD *)&aP0->__pad_5B0[12] < v14 /*0x4db525*/
                || (aP0->__pad_5B0[9] || !v14)
  int v15; // eax
                && (v15 = *(_DWORD *)&aP0->__pad_5B0[16], v15 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(_DWORD *)v12->vtable0 + 8))(
                     aP0->FootClass_field_abstract_array_5AC,
                     v14 + v15,
                     0) )
              {
                int v16 = *(_DWORD *)&aP0->__pad_5B0[12]; /*0x4db52c*/
                int v17 = *(_DWORD *)aP0->__pad_5B0; /*0x4db52f*/
                *(_DWORD *)&aP0->__pad_5B0[12] = v16 + 1; /*0x4db535*/
                *(_DWORD *)(v17 + 4 * v16) = v20; /*0x4db53c*/
              }
              aP0b = (FootClass *)((char *)aP0b + 1); /*0x4db54a*/
              if ( (int)aP0b >= (int)pStm ) /*0x4db54e*/
                goto LABEL_28; /*0x4db54e*/
            }
          }
        }
      }
      else
      {
        while ( 1 ) /*0x4db43a*/
        {
          int v7 = *(_DWORD *)v4->__pad_0; /*0x4db43a*/
          v20 = 0; /*0x4db446*/
          result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v7 + 12))(v4, &v20, 4, 0); /*0x4db44a*/
          if ( result < 0 ) /*0x4db44f*/
            break; /*0x4db44f*/
          int v8 = *(_DWORD *)&aP0->__pad_58C[4]; /*0x4db455*/
          if ( *(_DWORD *)&aP0->__pad_58C[12] < v8 /*0x4db477*/
            || (aP0->__pad_58C[9] || !v8)
  int v9; // eax
            && (v9 = *(_DWORD *)&aP0->__pad_58C[16], v9 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(_DWORD *)v6->vtable0 + 8))(
                 aP0->unknownAbstractArray588,
                 v8 + v9,
                 0) )
          {
            int v10 = *(_DWORD *)&aP0->__pad_58C[12]; /*0x4db47e*/
            int v11 = *(_DWORD *)aP0->__pad_58C; /*0x4db481*/
            *(_DWORD *)&aP0->__pad_58C[12] = v10 + 1; /*0x4db487*/
            *(_DWORD *)(v11 + 4 * v10) = v20; /*0x4db48e*/
          }
          aP0a = (FootClass *)((char *)aP0a + 1); /*0x4db49c*/
          if ( (int)aP0a >= (int)pStm ) /*0x4db4a0*/
            goto LABEL_16; /*0x4db4a0*/
        }
      }
    }
  }
  return result; /*0x4db67c*/
}
}
} // namespace game
} // namespace ra2

// 0x4DB690
namespace ra2 {
namespace game {
int ObjectClass::SaveToStream_Common(IPersistStream * a0, FootClass * aP1, struct IPersistStreamVtbl * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IStream *v3; // esi
  IPersistStream *v4; // edi
  HRESULT SizeMax; // ebx
  HRESULT result; // eax
  int (__stdcall ***v11)(_DWORD, void *, IPersistStream **); // edi
  IPersistStream *v13; // ebx
  v3 = (IStream *)aP1; /*0x4db696*/
  v4 = a0; /*0x4db69b*/
  SizeMax = IPersistStream::GetSizeMax((int)a0, (RadioClass *)aP1, (int)a2); /*0x4db6a7*/
  if ( SizeMax < 0 ) /*0x4db6ab*/
    return SizeMax; /*0x4db6ab*/
  int v6 = *(_DWORD *)v3->__pad_0; /*0x4db6b7*/
  a2 = (struct IPersistStreamVtbl *)v4[358]; /*0x4db6c3*/
  result = (*(int (__stdcall **)(IStream *, struct IPersistStreamVtbl **, int, _DWORD))(v6 + 16))(v3, &a2, 4, 0); /*0x4db6c7*/
  if ( result < 0 ) /*0x4db6cc*/
    return result; /*0x4db6cc*/
  int v8 = 0; /*0x4db6d6*/
  if ( (int)a2 <= 0 ) /*0x4db6da*/
  {
LABEL_6:
    int v9 = *(_DWORD *)v3->__pad_0; /*0x4db701*/
    a2 = (struct IPersistStreamVtbl *)v4[367]; /*0x4db713*/
    result = (*(int (__stdcall **)(IStream *, struct IPersistStreamVtbl **, int, _DWORD))(v9 + 16))(v3, &a2, 4, 0); /*0x4db717*/
    if ( result < 0 ) /*0x4db71c*/
      return result; /*0x4db71c*/
    int v10 = 0; /*0x4db726*/
    if ( (int)a2 > 0 ) /*0x4db72a*/
    {
      do /*0x4db73d*/
      {
        result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 16))( /*0x4db73d*/
                   v3,
                   *(_DWORD *)&v4[364] + 4 * v10,
                   4,
                   0);
        if ( result < 0 ) /*0x4db742*/
          return result; /*0x4db742*/
      }
      while ( ++v10 < (int)a2 ); /*0x4db73d*/
    }
    v11 = (int (__stdcall ***)(_DWORD, void *, IPersistStream **))v4[413]; /*0x4db751*/
    aP1 = 0; /*0x4db757*/
    if ( v11 ) /*0x4db761*/
    {
      int v12 = (**v11)(v11, &unk_820270, &a0); /*0x4db772*/
      if ( v12 >= 0 ) /*0x4db776*/
      {
        v13 = a0; /*0x4db794*/
        if ( aP1 ) /*0x4db79a*/
          (*(void (__stdcall **)(FootClass *))(*(_DWORD *)aP1->__pad_0 + 8))(aP1); /*0x4db79f*/
        aP1 = (FootClass *)v13; /*0x4db7a2*/
      }
      else
      {
        if ( aP1 ) /*0x4db77e*/
          (*(void (__stdcall **)(FootClass *))(*(_DWORD *)aP1->__pad_0 + 8))(aP1); /*0x4db783*/
        aP1 = 0; /*0x4db786*/
      }
      if ( v12 < 0 && v12 != -2147467262 ) /*0x4db7b0*/
        WinAPI::Wrapper(v12); /*0x4db7b3*/
    }
    OleSaveToStream((LPPERSISTSTREAM)aP1, v3); /*0x4db7be*/
    SizeMax = 0; /*0x4db7c4*/
    if ( aP1 ) /*0x4db7cc*/
      (*(void (__stdcall **)(FootClass *))(*(_DWORD *)aP1->__pad_0 + 8))(aP1); /*0x4db7d1*/
    return SizeMax; /*0x4db7d4*/
  }
  while ( 1 ) /*0x4db6ed*/
  {
    result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 16))( /*0x4db6ed*/
               v3,
               *(_DWORD *)&v4[355] + 4 * v8,
               4,
               0);
    if ( result < 0 ) /*0x4db6f2*/
      return result; /*0x4db7d6*/
    if ( ++v8 >= (int)a2 ) /*0x4db6ff*/
      goto LABEL_6; /*0x4db6ff*/
  }
}
}
} // namespace game
} // namespace ra2

// 0x4DE1D0
namespace ra2 {
namespace game {
void * ObjectClass::FindPlacementCell(FootClass * aP0, int aP1, IUnknown ** a2, int a4, int a5, char a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  FootClass *v6; // ecx
  FootClass *esi1; // esi
  RadarClass *v7; // edi
  bool IsWithinUsableArea; // al
  IUnknown *v13; // eax
  bool IsPassable; // al
  IUnknown *v23; // eax
  IUnknown *v24; // edx
  IUnknown **v25; // eax
  IUnknown *eax30; // eax
  MouseClass *v26; // eax
  IUnknown *v29; // eax
  IUnknown *v31; // [esp-2Ch] [ebp-78h]
  IUnknown *TileIndex; // [esp-28h] [ebp-74h]
  IUnknown *v32; // [esp-20h] [ebp-6Ch]
  IUnknown *v33; // [esp-20h] [ebp-6Ch]
  IUnknown *_FFFFFFF4; // [esp-Ch] [ebp-58h]
  IUnknown *v35; // [esp+18h] [ebp-34h] BYREF
  MouseClass *v37; // [esp+1Ch] [ebp-30h]
  MouseClass *aP3; // [esp+20h] [ebp-2Ch]
  int v39; // [esp+24h] [ebp-28h] BYREF
  _DWORD v40[2]; // [esp+28h] [ebp-24h] BYREF
  int GroundHeight; // [esp+30h] [ebp-1Ch]
  _DWORD v42[2]; // [esp+34h] [ebp-18h] BYREF
  int v43; // [esp+3Ch] [ebp-10h]
  _WORD v44[6]; // [esp+40h] [ebp-Ch] BYREF

  esi1 = v6; /*0x4de1d5*/
  v7 = (RadarClass *)aP1; /*0x4de1de*/
  v37 = (MouseClass *)(*(int (__thiscall **)(FootClass *, int, IUnknown **, _DWORD))(*(_DWORD *)v6->__pad_0 + 112))( /*0x4de1f4*/
                        v6,
                        aP1,
                        a2,
                        0);
  IsWithinUsableArea = LayerClass::IsWithinUsableArea(&stru_87C374[13428], (IUnknown *)v7, (TechnoClass *)1); /*0x4de1f8*/
  int v10 = SLOWORD(v7->field_0); /*0x4de1fd*/
  LOBYTE(aP1) = IsWithinUsableArea; /*0x4de200*/
  int v11 = (SHIWORD(v7->field_0) << 8) + 128; /*0x4de218*/
  v40[0] = (v10 << 8) + 128; /*0x4de223*/
  v40[1] = v11; /*0x4de227*/
  GroundHeight = 0; /*0x4de22b*/
  GroundHeight = Cell::GetGroundHeight((IUnknown *)v40); /*0x4de23e*/
  if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)v40) + 80) & 0x100) != 0 ) /*0x4de250*/
    GroundHeight += *(_DWORD *)&stru_89E138[89276]; /*0x4de25d*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3213) /*0x4de27d*/
    && Cell::IsPassable((IUnknown *)v40) )
  {
    goto LABEL_36; /*0x4de284*/
  }
  int v12 = *(_DWORD *)esi1->__pad_0; /*0x4de28c*/
  v35 = (IUnknown *)v7->field_0; /*0x4de293*/
  v13 = (IUnknown *)(*(int (__thiscall **)(FootClass *, _WORD *, _DWORD))(v12 + 76))(esi1, v44, 0); /*0x4de29b*/
  void * v14 = Coord::To_Cell(&stru_87C374[13428], v13); /*0x4de2a4*/
  int v15 = *(_DWORD *)esi1->__pad_0; /*0x4de2a9*/
  v40[0] = v14; /*0x4de2ad*/
  int v16 = *(_DWORD *)((*(int (__thiscall **)(FootClass *))(v15 + 132))(esi1) + 1460); /*0x4de2b7*/
  if ( v16 == 6 ) /*0x4de2c0*/
  {
    v16 = 0; /*0x4de2c2*/
  }
  else if ( v16 == 9 && HouseClass::IonSensitivesShouldBeOffline() ) /*0x4de2d1*/
  {
    v16 = 7; /*0x4de2da*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 84))(esi1) /*0x4de333*/
    || *(_BYTE *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3372)
    || (*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 44))(esi1) == 15
    && *(_BYTE *)(*(_DWORD *)esi1[1].__pad_0 + 3476)
    && !HouseClass::IonSensitivesShouldBeOffline()
  int v17; // eax
    || (v17 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 44))(esi1), LOBYTE(a4) = 0, v17 == 2) )
  {
    LOBYTE(a4) = 1; /*0x4de335*/
  }
  char v18 = (*(int (__thiscall **)(FootClass *, _DWORD))(*(_DWORD *)esi1->__pad_0 + 188))(esi1, 0); /*0x4de33f*/
  int v19 = SHIWORD(v7->field_0); /*0x4de345*/
  LOBYTE(aP3) = v18; /*0x4de349*/
  int v20 = SLOWORD(v7->field_0); /*0x4de34f*/
  v43 = 0; /*0x4de35b*/
  v42[1] = (v19 << 8) + 128; /*0x4de35f*/
  v42[0] = (v20 << 8) + 128; /*0x4de375*/
  v43 = Cell::GetGroundHeight((IUnknown *)v42); /*0x4de388*/
  if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)v42) + 80) & 0x100) != 0 ) /*0x4de39a*/
    v43 += *(_DWORD *)&stru_89E138[89276]; /*0x4de3a7*/
  IsPassable = Cell::IsPassable((IUnknown *)v42); /*0x4de3b5*/
  if ( (_BYTE)a2 && v37 == (MouseClass *)2 ) /*0x4de3cb*/
  {
    if ( !*(_BYTE *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3372) /*0x4de3f7*/
  int v22; // eax
      || (v22 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 456))(esi1), aP1 = 1, v22 >= 0) )
    {
      aP1 = 0; /*0x4de3f9*/
    }
    _FFFFFFF4 = (IUnknown *)aP1; /*0x4de40e*/
    a2 = 0; /*0x4de41b*/
    v23 = (IUnknown *)(*((_DWORD *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)v7) + 80) >> 8); /*0x4de432*/
    LOBYTE(v23) = (unsigned __int8)v23 & 1; /*0x4de435*/
    v32 = v23; /*0x4de439*/
    v31 = *(IUnknown **)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 1660); /*0x4de44d*/
    v25 = (IUnknown **)LayerClass::Pathfinding_Find( /*0x4de450*/
                         (IUnknown *)&stru_87C374[13428],
                         v24,
                         (IUnknown *)&v39,
                         (IUnknown *)v7,
                         v31,
                         (IUnknown *)0xFFFFFFFF,
                         (IUnknown *)v16,
                         v32,
                         (IUnknown *)1,
                         (IUnknown *)1,
                         0,
                         (IUnknown *)1,
                         _FFFFFFF4,
                         (IUnknown *)1,
                         (IUnknown *)&a2,
                         0,
                         0);
    goto LABEL_32; /*0x4de450*/
  }
  if ( !(_BYTE)aP1 /*0x4de4b4*/
    || IsPassable
    || !(_BYTE)a2
    && (!*(_BYTE *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3284)
     || v37 == (MouseClass *)2)
    && (eax30 = (IUnknown *)(*((_DWORD *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)v7) + 80) >> 8),
        LOBYTE(eax30) = (unsigned __int8)eax30 & 1,
        !MapSeed::CheckTileMatch(
           &stru_87C374[13428],
           (IUnknown *)(v39 + 36),
           (IUnknown *)&v35,
           (IUnknown *)v16,
           (IUnknown *)aP3,
           eax30,
           0)) )
  {
    a2 = 0; /*0x4de4d7*/
    v26 = (MouseClass *)(*((_DWORD *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)v7) + 80) >> 8); /*0x4de4f4*/
    LOBYTE(v26) = (unsigned __int8)v26 & 1; /*0x4de4f7*/
    v33 = (IUnknown *)v26; /*0x4de4fc*/
    TileIndex = (IUnknown *)MapClass::GetTileIndex( /*0x4de50b*/
                              &stru_87C374[13428],
                              (IUnknown *)(v39 + 36),
                              (IUnknown *)v16,
                              (IUnknown *)aP3);
    int v28 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1); /*0x4de510*/
    v25 = (IUnknown **)LayerClass::Pathfinding_Find( /*0x4de528*/
                         (IUnknown *)&stru_87C374[13428],
                         (IUnknown *)&aP1,
                         (IUnknown *)&aP1,
                         (IUnknown *)v7,
                         *(IUnknown **)(v28 + 1660),
                         TileIndex,
                         (IUnknown *)v16,
                         v33,
                         (IUnknown *)1,
                         (IUnknown *)1,
                         0,
                         (IUnknown *)1,
                         0,
                         (IUnknown *)1,
                         (IUnknown *)&a2,
                         0,
                         0);
LABEL_32:
    v29 = *v25; /*0x4de52d*/
    v35 = v29; /*0x4de52f*/
    goto LABEL_34; /*0x4de533*/
  }
  v29 = v35; /*0x4de535*/
LABEL_34:
  if ( __PAIR32__(HIWORD(v35), (unsigned __int16)v29) != *(_DWORD *)&stru_89E138[89168] ) /*0x4de541*/
  {
    *(_DWORD *)aP0->__pad_0 = v29; /*0x4de558*/
    return (RadarClass *)aP0; /*0x4de55f*/
  }
LABEL_36:
  *(_DWORD *)aP0->__pad_0 = *(_DWORD *)&stru_89E138[89168]; /*0x4de562*/
  return (RadarClass *)aP0; /*0x4de555*/
}
}
} // namespace game
} // namespace ra2

// 0x4DE620
namespace gamemd {
void ObjectClass_IsHeightAboveThreshold_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
{
  return ObjectClass::IsHeightAboveThreshold(this);
}
}
} // namespace gamemd

// 0x513F40
namespace ra2 {
namespace game {
void * ObjectClass::BuildTransform(unsigned int * a1, float * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  float *v7; // eax
  float *Transform; // eax
  float v21; // [esp+4h] [ebp-154h]
  float v29; // [esp+20h] [ebp-138h] BYREF
  _DWORD v32[3]; // [esp+2Ch] [ebp-12Ch] BYREF
  float v33[12]; // [esp+38h] [ebp-120h] BYREF
  float v34[12]; // [esp+68h] [ebp-F0h] BYREF

  int v3 = a1[2]; /*0x513f50*/
  if ( fabs(*(float *)(v3 + 808)) >= 0.005 || fabs(*(float *)(v3 + 812)) >= 0.005 ) /*0x513f7f*/
  {
    if ( a3 ) /*0x5140a0*/
      *a3 = -1; /*0x5140a2*/
  float v35[12]; // [esp+98h] [ebp-C0h] BYREF
    Matrix3x4::Identity(v35); /*0x5140af*/
    Matrix3x4::Identity(v33); /*0x5140b8*/
    float v25 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 864); /*0x5140d3*/
    float v27 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 872); /*0x5140e9*/
    double v8 = Math::ArcTan2(*(float *)(a1[2] + 812)); /*0x5140f6*/
    int v9 = a1[2]; /*0x5140fb*/
    float v31 = v8; /*0x5140fe*/
    double v10 = Math::SinCos(*(float *)(v9 + 812)); /*0x51410b*/
    int v11 = a1[2]; /*0x514110*/
  int v30; // [esp+24h] [ebp-134h]
    *(float *)&v30 = v10; /*0x514113*/
    double v12 = Math::ArcTan2(*(float *)(v11 + 808)); /*0x514120*/
    int v13 = a1[2]; /*0x514125*/
    v29 = v12; /*0x514128*/
    double v14 = Math::SinCos(*(float *)(v13 + 808)); /*0x514135*/
    v30 = Math::RoundToInt(fabs(v14) * v25 + fabs(*(float *)&v30) * v27); /*0x51415c*/
    LODWORD(v31) = Math::RoundToInt(v31 * v27); /*0x514165*/
    int v15 = Math::RoundToInt(v27 - (double)SLODWORD(v31)); /*0x51417e*/
    int v28 = v15; /*0x514180*/
    LODWORD(v29) = Math::RoundToInt(v29 * v25); /*0x514189*/
    int v16 = Math::RoundToInt(v25 - (double)SLODWORD(v29)); /*0x514195*/
    int v17 = a1[2]; /*0x51419a*/
    int v26 = v16; /*0x51419f*/
    if ( *(float *)(v17 + 812) < 0.0 ) /*0x5141b4*/
      v28 = -v15; /*0x5141b8*/
    if ( *(float *)(v17 + 808) > 0.0 ) /*0x5141cd*/
      v26 = -v16; /*0x5141d1*/
    float v22 = (float)v30; /*0x5141e1*/
    Matrix3x3::ApplyCol1(v35, v22); /*0x5141e4*/
    float v23 = (float)v28; /*0x5141f2*/
    Matrix3x4::Translate(v33, v23); /*0x5141f5*/
    float v24 = (float)v26; /*0x514203*/
    Matrix3x3::ApplyCol0(v33, v24); /*0x514206*/
    Matrix3x3::RotateX(v33, *(float *)(a1[2] + 808)); /*0x514219*/
    Matrix3D::RotateZ(v33, *(float *)(a1[2] + 812)); /*0x51422c*/
  float v36[12]; // [esp+C8h] [ebp-90h] BYREF
    Transform = Turret::GetTransform((signed int)a1, v36, a3); /*0x51423b*/
    Transform::Copy(v34, Transform); /*0x514245*/
  float v37[12]; // [esp+F8h] [ebp-60h] BYREF
    float * v19 = MultiplyMatrix3x4(v37, v35, v34); /*0x514262*/
  float v38[12]; // [esp+128h] [ebp-30h] BYREF
    v7 = MultiplyMatrix3x4(v38, v19, v33); /*0x514270*/
    goto LABEL_16; /*0x514270*/
  }
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 96))(a1) ) /*0x513f88*/
  {
    v7 = Turret::GetTransform((signed int)a1, v34, a3); /*0x51408d*/
LABEL_16:
    float * v20 = v7; /*0x514275*/
    qmemcpy(a2, v20, 0x30u); /*0x514285*/
    return a2; /*0x514277*/
  }
  _DWORD * v4 = (_DWORD *)(a1[2] + 156); /*0x513f97*/
  v32[0] = *v4; /*0x513f9f*/
  v32[1] = v4[1]; /*0x513fab*/
  v32[2] = v4[2]; /*0x513fb2*/
  int v5 = *((unsigned __int8 *)Coord::To_Cell(&DataGlobal_87F7E8, v32) + 284); /*0x513fc8*/
  qmemcpy(v33, CopyAudioData((char *)v34, v5), sizeof(v33)); /*0x513fe4*/
  v21 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)(a1[2] + 904), &v29) >> 10) + 1) >> 1) & 0x1F) /*0x514016*/
                    - 8)
      * -0.1963495408493621;
  Matrix2D::Rotate(v33, v21); /*0x514019*/
  if ( a3 ) /*0x514027*/
  {
    if ( *a3 != -1 ) /*0x51402e*/
    {
      *a3 = 32 * (v5 + (*a3 << 6)); /*0x51403c*/
      *a3 |= ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(a1[2] + 904), &v29) >> 10) + 1) >> 1) & 0x1F; /*0x51405c*/
    }
  }
  qmemcpy(a2, v33, 0x30u); /*0x514070*/
  return a2; /*0x514073*/
}
}
} // namespace game
} // namespace ra2

// 0x5228B0
namespace gamemd {
void ObjectClass_GetTypeVt40_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
{
  return TechnoClass::GetTypeVt40(this);
}
}
} // namespace gamemd

// 0x5228C0
namespace gamemd {
void ObjectClass_GetTypeVt41_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
{
  return ObjectClass::GetTypeVt41(this);
}
}
} // namespace gamemd

// 0x556A20
namespace ra2 {
namespace game {
void * ObjectClass::checkLimbo()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  *this = 0x80; /*0x556a29*/
  this->vtable2 = 0x80; /*0x556a2b*/
  this->vtable3 = 0x80; /*0x556a2e*/
  this->vtable1 = 0; /*0x556a31*/
  this->vtable2 = 16; /*0x556a34*/
  this->vtable3 = 0; /*0x556a3b*/
  char * v2 = this + 28; /*0x556a3e*/
  int v3 = 32; /*0x556a41*/
  do /*0x556a6a*/
  {
    char * v4 = v2 - 12; /*0x556a4c*/
    v2 += 16; /*0x556a4f*/
    --v3; /*0x556a52*/
    *(_DWORD *)v4 = dword_ABCB50; /*0x556a53*/
    *((_DWORD *)v4 + 1) = dword_ABCB54; /*0x556a5b*/
    *((_DWORD *)v4 + 2) = dword_ABCB58; /*0x556a64*/
    *((_DWORD *)v2 - 4) = 0; /*0x556a67*/
  }
  while ( v3 ); /*0x556a6a*/
  if ( dword_ABCB88 < dword_ABCB80 /*0x556a9f*/
    || (byte_ABCB85 || !dword_ABCB80)
    && dword_ABCB8C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_ABCB78 + 8))(
         &dword_ABCB78,
         dword_ABCB8C + dword_ABCB80,
         0) )
  {
    int v5 = dword_ABCB88++; /*0x556aac*/
    *((_DWORD *)dword_ABCB7C + v5) = this; /*0x556abb*/
  }
  return this; /*0x556ac0*/
}
}
} // namespace game
} // namespace ra2

// 0x5F3B80
namespace ra2 {
namespace game {
void ObjectClass::Dtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  BombClass *v2; // ecx
  v2 = (BombClass *)this->attachedBomb; /*0x5f3b84*/
  *this = &ObjectClass::`vftable'; /*0x5f3b87*/
  this->vtable2 = &ObjectClass::`vftable'; /*0x5f3b8f*/
  this->vtable3 = &ObjectClass::`vftable'; /*0x5f3b96*/
  this->vtable4 = &vt_ObjectClass; /*0x5f3b9d*/
  if ( v2 ) /*0x5f3ba4*/
    ObjectClass::CleanupAudioAndRefs((int)v2); /*0x5f3ba6*/
  ObjectClass *v9 = this; /*0x5f3bbb*/
  int v3; // eax
  v3 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&g_OverlayTypeConfig[32416] + 16))( /*0x5f3bbf*/
         &g_OverlayTypeConfig[32416],
         &v9);
  if ( v3 != -1 && v3 < *(int *)&g_OverlayTypeConfig[32432] ) /*0x5f3bcf*/
  {
    --*(_DWORD *)&g_OverlayTypeConfig[32432]; /*0x5f3bd4*/
    for ( ; /*0x5f3bda*/
          v3 < *(int *)&g_OverlayTypeConfig[32432];
          *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[32420] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[32420]
                                                                                              + 4 * v3) )
    {
      ++v3; /*0x5f3be2*/
    }
  }
  v9 = this; /*0x5f3c04*/
  int v4; // eax
  v4 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&g_NetworkPlayerBuffer[3364] + 16))( /*0x5f3c08*/
         &g_NetworkPlayerBuffer[3364],
         &v9);
  if ( v4 != -1 && v4 < *(int *)&g_NetworkPlayerBuffer[3380] ) /*0x5f3c18*/
  {
    --*(_DWORD *)&g_NetworkPlayerBuffer[3380]; /*0x5f3c1d*/
    for ( ; /*0x5f3c23*/
          v4 < *(int *)&g_NetworkPlayerBuffer[3380];
          *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[3368] + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[3368]
                                                                                            + 4 * v4) )
    {
      ++v4; /*0x5f3c2b*/
    }
  }
  v9 = this; /*0x5f3c4d*/
  int v5; // eax
  v5 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&g_OverlayTypeConfig[32552] + 16))( /*0x5f3c51*/
         &g_OverlayTypeConfig[32552],
         &v9);
  if ( v5 != -1 && v5 < *(int *)&g_OverlayTypeConfig[32568] ) /*0x5f3c61*/
  {
    --*(_DWORD *)&g_OverlayTypeConfig[32568]; /*0x5f3c66*/
    for ( ; /*0x5f3c6c*/
          v5 < *(int *)&g_OverlayTypeConfig[32568];
          *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[32556] + 4 * v5 - 4) = *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[32556]
                                                                                               + 4 * v5) )
    {
      ++v5; /*0x5f3c74*/
    }
  }
  v9 = this; /*0x5f3c96*/
  int v6; // eax
  v6 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&g_OverlayTypeConfig[32376] + 16))( /*0x5f3c9a*/
         &g_OverlayTypeConfig[32376],
         &v9);
  if ( v6 != -1 && v6 < *(int *)&g_OverlayTypeConfig[32392] ) /*0x5f3caa*/
  {
    --*(_DWORD *)&g_OverlayTypeConfig[32392]; /*0x5f3caf*/
    for ( ; /*0x5f3cb5*/
          v6 < *(int *)&g_OverlayTypeConfig[32392];
          *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[32380] + 4 * v6 - 4) = *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[32380]
                                                                                              + 4 * v6) )
    {
      ++v6; /*0x5f3cbd*/
    }
  }
  v9 = this; /*0x5f3cdf*/
  int v7; // eax
  v7 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&g_OverlayTypeConfig[32288] + 16))( /*0x5f3ce3*/
         &g_OverlayTypeConfig[32288],
         &v9);
  if ( v7 != -1 && v7 < *(int *)&g_OverlayTypeConfig[32304] ) /*0x5f3cf3*/
  {
    --*(_DWORD *)&g_OverlayTypeConfig[32304]; /*0x5f3cf8*/
    for ( ; /*0x5f3cfe*/
          v7 < *(int *)&g_OverlayTypeConfig[32304];
          *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[32292] + 4 * v7 - 4) = *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[32292]
                                                                                              + 4 * v7) )
    {
      ++v7; /*0x5f3d06*/
    }
  }
  this->nextObject = 0; /*0x5f3d1d*/
  this->isAliveFlag = 0; /*0x5f3d26*/
  AudioController::Stop(this + 15); /*0x5f3d2d*/
  AudioController::Stop(this + 20); /*0x5f3d37*/
  AudioFileClass::Release(this + 15); /*0x5f3d3e*/
  AudioFileClass::Release(this + 20); /*0x5f3d45*/
  _DWORD * v8 = (_DWORD *)this->lineTrailer; /*0x5f3d4a*/
  if ( v8 ) /*0x5f3d54*/
  {
    TacticalClass::GetField(v8); /*0x5f3d56*/
    this->lineTrailer = 0; /*0x5f3d5b*/
  }
  if ( this->isInLogic ) /*0x5f3d65*/
    VectorClass::RemoveItem((int *)&g_GameConfigManager, (ObjectClass *)this); /*0x5f3d75*/
  AbstractClass::DTOR(this); /*0x5f3d7c*/
}
}
} // namespace game
} // namespace ra2

// 0x5F4160
namespace ra2 {
namespace game {
int ObjectClass::DropAsBomb_Track()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  int v2 = *(_DWORD *)this; /*0x5f4168*/
  this->isFallingDown = 1; /*0x5f416a*/
  this->isBomb = 1; /*0x5f4171*/
  (*(void (__stdcall **)(_DWORD))(v2 + 292))(0); /*0x5f4178*/
  RemoveTarget((IUnknown *)this); /*0x5f4184*/
  this->onBridge = 0; /*0x5f418f*/
  Targeting::Readd((IUnknown *)this); /*0x5f4196*/
  result = (*(int (__thiscall **)(#374 *, int))(this->q124)(this, 1); /*0x5f41a1*/
  if ( this ) /*0x5f41a9*/
  {
    LOBYTE(result) = ((unsigned char)this->abstractFlags & 4) != 0; /*0x5f41b5*/
    if ( ((unsigned char)this->abstractFlags & 4) != 0 ) /*0x5f41bb*/
    {
      if ( !this->q19D ) /*0x5f41bd*/
        WinAPI::Wrapper(-2147467261); /*0x5f41cc*/
      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*this->q19D + 16))(this->q19D) ) /*0x5f41da*/
      {
        if ( !this->q19D ) /*0x5f4213*/
          WinAPI::Wrapper(-2147467261); /*0x5f4222*/
        return (*(int (__stdcall **)(_DWORD, _DWORD))(*this->q19D + 156))(this->q19D, 0); /*0x5f4232*/
      }
      else
      {
  _DWORD v5[3]; // [esp+Ch] [ebp-Ch] BYREF
        v5[0] = this->location; /*0x5f41ed*/
        int v4 = *(_DWORD *)this; /*0x5f41f1*/
        v5[1] = this->owningHouseIndex; /*0x5f41f6*/
        v5[2] = this->q029; /*0x5f4204*/
        return (*(int (__thiscall **)(#374 *, _DWORD *))(v4 + 244))(this, v5); /*0x5f4208*/
      }
    }
  }
  return result; /*0x5f420e*/
}
}
} // namespace game
} // namespace ra2

// 0x5F4870
namespace ra2 {
namespace game {
int ObjectClass::GetBoundsRect()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 *v4; // esi
  int *FoundationSize; // eax
  int v19; // esi
  int v20; // edi
  int *v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // edi
  int v25; // eax
  int v26; // ecx
  int v27; // edi
  int v29; // [esp+Ch] [ebp-40h]
  int v30; // [esp+10h] [ebp-3Ch]
  int v31[2]; // [esp+14h] [ebp-38h] BYREF
  int v32; // [esp+1Ch] [ebp-30h] BYREF
  int v33; // [esp+20h] [ebp-2Ch]
  int v34; // [esp+24h] [ebp-28h]
  int v35; // [esp+28h] [ebp-24h]
  int v36; // [esp+30h] [ebp-1Ch]
  int v37; // [esp+38h] [ebp-14h]
  _DWORD v38[4]; // [esp+3Ch] [ebp-10h] BYREF
  _DWORD *v39; // [esp+50h] [ebp+4h]
  _DWORD * v2 = (_DWORD *)(*(int (__stdcall **)(int *))(this->q0AC)(&v32); /*0x5f4887*/
  Coord::To_Screen(g_TacticalClass_Instance, v2, v31); /*0x5f4894*/
  int v3 = (*(int (__thiscall **)(#374 *))(this->parachute)(this); /*0x5f489d*/
  v4 = (__int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 156))(v3); /*0x5f48ad*/
  if ( !v4 ) /*0x5f48b1*/
  {
    *v39 = DataGlobal_AC1350; /*0x5f48c1*/
    v39[1] = DataGlobal_AC1354; /*0x5f48c9*/
    v39[2] = DataGlobal_AC1358; /*0x5f48d2*/
    v39[3] = DataGlobal_AC135C; /*0x5f48db*/
    return (int)v39; /*0x5f48e1*/
  }
  unsigned int v6 = 0; /*0x5f48ea*/
  if ( (*(int (__thiscall **)(#374 *))(this->fallRate)(this) == 6 && *(_BYTE *)(this->q148 + 5824) ) /*0x5f48fa*/
    v6 = 15; /*0x5f4904*/
  FoundationSize = Building::GetFoundationSize(&v32, v6); /*0x5f4911*/
  int v8 = *FoundationSize; /*0x5f4916*/
  v36 = FoundationSize[1]; /*0x5f491b*/
  int v9 = FoundationSize[2]; /*0x5f4921*/
  int v10 = FoundationSize[3]; /*0x5f4924*/
  int v11 = v4[3]; /*0x5f4927*/
  v37 = v10; /*0x5f492b*/
  int * v12 = Building::GetFoundationSize(v38, v6 + v11 / 2); /*0x5f493c*/
  int v13 = *v12; /*0x5f4945*/
  v33 = v12[1]; /*0x5f494a*/
  v34 = v12[2]; /*0x5f4951*/
  int v14 = v4[1]; /*0x5f4955*/
  int v15 = v4[2]; /*0x5f4959*/
  int v16 = v12[3]; /*0x5f495d*/
  v29 = v14; /*0x5f4960*/
  v35 = v16; /*0x5f4964*/
  v30 = v15; /*0x5f4968*/
  int v17; // ebp
  if ( v9 <= 0 || (v17 = v37, v37 <= 0) ) /*0x5f4974*/
  {
    v20 = v12[1]; /*0x5f49e4*/
    v19 = *v12; /*0x5f49e7*/
    v9 = v12[2]; /*0x5f49e9*/
    v17 = v12[3]; /*0x5f49ec*/
    v36 = v20; /*0x5f49ef*/
  }
  else if ( v34 <= 0 || v16 <= 0 ) /*0x5f4980*/
  {
    v19 = v8; /*0x5f49d8*/
    v20 = v36; /*0x5f49da*/
  }
  else
  {
    int v18 = v36; /*0x5f4982*/
    if ( v8 > v13 ) /*0x5f4988*/
    {
      v9 += v8 - v13; /*0x5f498e*/
      v8 = v13; /*0x5f4990*/
    }
    if ( v36 > v33 ) /*0x5f4998*/
    {
      v17 = v36 - v33 + v37; /*0x5f499c*/
      v18 = v33; /*0x5f499e*/
    }
    if ( v9 + v8 < v13 + v34 ) /*0x5f49a7*/
      v9 = v34 - v8 + v13 + 1; /*0x5f49af*/
    if ( v18 + v17 < v33 + v35 ) /*0x5f49c2*/
      v17 = v33 - v18 + v35 + 1; /*0x5f49ca*/
    v19 = v8; /*0x5f49ce*/
    v20 = v18; /*0x5f49d0*/
    v36 = v18; /*0x5f49d2*/
  }
  v34 = v9; /*0x5f49f7*/
  v35 = v17; /*0x5f49fb*/
  if ( (*(int (__thiscall **)(#374 *))(this->fallRate)(this) != 6 || !*(_DWORD *)(this->q148 + 5400) ) /*0x5f4a17*/
  {
    v9 = v34; /*0x5f4ac5*/
    v26 = v35; /*0x5f4ac9*/
    goto LABEL_39; /*0x5f4ac9*/
  }
  v21 = Building::GetFoundationSize(v38, 0); /*0x5f4a2c*/
  v22 = *v21; /*0x5f4a35*/
  v33 = v21[1]; /*0x5f4a3a*/
  v23 = v21[2]; /*0x5f4a3e*/
  v34 = v23; /*0x5f4a41*/
  v24 = v21[3]; /*0x5f4a45*/
  v35 = v24; /*0x5f4a48*/
  if ( v9 <= 0 || v17 <= 0 ) /*0x5f4a50*/
  {
    v19 = *v21; /*0x5f4ab6*/
    v20 = v21[1]; /*0x5f4ab8*/
    v9 = v21[2]; /*0x5f4abb*/
    v25 = v21[3]; /*0x5f4abe*/
    goto LABEL_37; /*0x5f4abe*/
  }
  if ( v23 <= 0 || v24 <= 0 ) /*0x5f4a58*/
  {
    v20 = v36; /*0x5f4aac*/
    v26 = v17; /*0x5f4ab2*/
    goto LABEL_39; /*0x5f4ab4*/
  }
  v20 = v36; /*0x5f4a5a*/
  v25 = v17; /*0x5f4a60*/
  if ( v19 > v22 ) /*0x5f4a62*/
  {
    v9 += v19 - v22; /*0x5f4a68*/
    v19 = v22; /*0x5f4a6a*/
  }
  if ( v36 > v33 ) /*0x5f4a72*/
  {
    v25 = v36 - v33 + v17; /*0x5f4a76*/
    v20 = v33; /*0x5f4a78*/
  }
  if ( v9 + v19 < v22 + v23 ) /*0x5f4a81*/
    v9 = v34 - v19 + v22 + 1; /*0x5f4a89*/
  if ( v25 + v20 >= v33 + v35 ) /*0x5f4a9c*/
  {
LABEL_37:
    v26 = v25; /*0x5f4ac1*/
    goto LABEL_39; /*0x5f4ac3*/
  }
  v26 = v33 - v20 + v35 + 1; /*0x5f4aa8*/
LABEL_39:
  v27 = v31[1] + v20 - v30 / 2; /*0x5f4acd*/
  *v39 = v31[0] + v19 - v29 / 2; /*0x5f4af6*/
  v39[1] = v27; /*0x5f4af8*/
  v39[2] = v9; /*0x5f4afb*/
  v39[3] = v26; /*0x5f4b01*/
  return (int)v39; /*0x5f48bf*/
}
}
} // namespace game
} // namespace ra2

// 0x5F4D30
namespace ra2 {
namespace game {
int ObjectClass::Undeploy()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  if ( !HouseClass_Player[44116] || this->inLimbo ) /*0x5f4d45*/
  {
    LOBYTE(result) = 0; /*0x5f4eb7*/
  }
  else
  {
    (*(void (__thiscall **)(#374 *))(this->q150)(this); /*0x5f4d55*/
    (*(void (__thiscall **)(#374 *, int))(this->q0DC)(this, 1); /*0x5f4d61*/
    (*(void (__thiscall **)(#374 *, _DWORD))(this->q124)(this, 0); /*0x5f4d6d*/
    RemoveTarget((IUnknown *)this); /*0x5f4d79*/
    AudioController::Stop((_DWORD *)this + 15); /*0x5f4d81*/
    AudioFile::Stop((_DWORD *)this + 20); /*0x5f4d89*/
    if ( (*(int (__thiscall **)(#374 *))(this->parachute)(this) /*0x5f4dcb*/
      && *(_BYTE *)((*(int (__thiscall **)(#374 *))(this->parachute)(this) + 564)
      && (!*(_DWORD *)&HouseClass_Player[29932]
       || *(_DWORD *)&HouseClass_Player[29932] == 5
       || (*(int (__stdcall **)(char *))(this->vtable1 + 16))((char *)this + 4) != -2) )
    {
      VectorClass::RemoveItem((int *)&stru_87C374[13316], (ObjectClass *)this); /*0x5f4dd3*/
    }
    if ( (*(int (__thiscall **)(#374 *))(this->parachute)(this) ) /*0x5f4ddc*/
    {
      if ( *(_DWORD *)((*(int (__thiscall **)(#374 *))(this->parachute)(this) + 172) ) /*0x5f4df4*/
      {
  _BYTE v9[12]; // [esp+24h] [ebp-Ch] BYREF
        _DWORD * v2 = (_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *))(this->q048)(this, v9); /*0x5f4e0b*/
  _DWORD a1[3]; // [esp+18h] [ebp-18h] BYREF
        a1[0] = *v2; /*0x5f4e10*/
        a1[1] = v2[1]; /*0x5f4e22*/
        a1[2] = v2[2]; /*0x5f4e2e*/
  int v6; // [esp+10h] [ebp-20h] BYREF
        Coord::To_Screen(*(_DWORD **)&stru_87C374[44976], a1, (IUnknown *)&v6); /*0x5f4e32*/
        int v3 = *(_DWORD *)((*(int (__thiscall **)(#374 *))(this->parachute)(this) + 172); /*0x5f4e41*/
  int v7; // [esp+14h] [ebp-1Ch]
        int v4 = v7 - *(__int16 *)(v3 + 4) / 2; /*0x5f4e6c*/
        v6 -= *(__int16 *)(v3 + 2) / 2; /*0x5f4e70*/
        v7 = v4; /*0x5f4e74*/
        Cell::CreateCrater(v6, v4, *(__int16 *)(v3 + 2), *(__int16 *)(v3 + 4), 1); /*0x5f4e8f*/
      }
    }
    result = (*(int (__thiscall **)(#374 *))(this->q11C)(this); /*0x5f4e98*/
    this->inLimbo = 1; /*0x5f4e9e*/
    this->needsRedraw = 0; /*0x5f4ea5*/
    LOBYTE(result) = 1; /*0x5f4eac*/
  }
  return result; /*0x5f4eae*/
}
}
} // namespace game
} // namespace ra2

// 0x5F4EC0
namespace ra2 {
namespace game {
int ObjectClass::Deploy()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  ObjectClass *v3; // ebx
  ObjectClass *v5; // eax
  ObjectClass *v6; // ebx
  AbstractClass *v9; // edx
  ObjectClass *v10; // eax
  AbstractClass *v12; // ebp
  AbstractClass *aP3; // [esp+30h] [ebp-28h]
  _DWORD a1[3]; // [esp+40h] [ebp-18h] BYREF
  IUnknown *aP1; // [esp+5Ch] [ebp+4h]
  __int16 aP1a; // [esp+5Ch] [ebp+4h]

  result = aP1->field_0; /*0x5f4ed3*/
  if ( (CoordStruct *)aP1->field_0 == *(&g_MatrixTransformState + 2396) ) /*0x5f4ed7*/
  {
    result = (int)*(&g_MatrixTransformState + 2397); /*0x5f4edc*/
    if ( (CoordStruct *)aP1->field_4 == *(&g_MatrixTransformState + 2397) ) /*0x5f4ee3*/
    {
      result = (int)*(&g_MatrixTransformState + 2398); /*0x5f4ee8*/
      if ( (CoordStruct *)aP1->field_8 == *(&g_MatrixTransformState + 2398) ) /*0x5f4eef*/
        goto LABEL_41; /*0x5f4eef*/
    }
  }
  if ( !HouseClass_Player[44116] ) /*0x5f4efc*/
    goto LABEL_41; /*0x5f4efc*/
  if ( !this->inLimbo ) /*0x5f4f02*/
    goto LABEL_41; /*0x5f4f02*/
  if ( this->isOnMap ) /*0x5f4f10*/
    goto LABEL_41; /*0x5f4f10*/
  if ( !*(_DWORD *)&HouseClass_Player[43616] ) /*0x5f4f22*/
  {
    v3 = *(ObjectClass **)this; /*0x5f4f24*/
    void * v4 = Coord::To_Cell(&stru_87C374[13428], aP1); /*0x5f4f34*/
    result = ((int (__thiscall *)(#374 *, void *, int, int, _DWORD, _DWORD))v3[2].customSound_controller[1])( /*0x5f4f3c*/
               this,
               v4,
               -1,
               -1,
               0,
               0);
    if ( result ) /*0x5f4f44*/
      goto LABEL_41; /*0x5f4f44*/
  }
  v5 = *(ObjectClass **)this; /*0x5f4f4a*/
  this->inLimbo = 0; /*0x5f4f4e*/
  this->needsRedraw = 0; /*0x5f4f55*/
  v6 = (ObjectClass *)((int (__thiscall *)(#374 *))v5->parachute)(this); /*0x5f4f64*/
  int v22 = aP1->field_0; /*0x5f4f6a*/
  int v23 = aP1->field_4; /*0x5f4f71*/
  int v24 = aP1->field_8; /*0x5f4f78*/
  if ( v6 ) /*0x5f4f7c*/
  {
    int * v7 = (int *)(*(int (__thiscall **)(ObjectClass *, _DWORD *, IUnknown *))(*(_DWORD *)v6->__pad_0 + 108))(v6, a1, aP1); /*0x5f4f88*/
    v22 = *v7; /*0x5f4f8d*/
    v23 = v7[1]; /*0x5f4f94*/
    v24 = v7[2]; /*0x5f4f9b*/
  }
  this->SetPosition(&v22); /*0x5f4fa8*/
  result = (*(int (__thiscall **)(#374 *, int))(this->q124)(this, 1); /*0x5f4fb4*/
  if ( !(_BYTE)result ) /*0x5f4fbc*/
  {
    this->inLimbo = 1; /*0x5f521c*/
LABEL_41:
    LOBYTE(result) = 0; /*0x5f5223*/
    return result; /*0x5f5226*/
  }
  if ( this->isAliveFlag )
  {
    if ( (*(int (__thiscall **)(#374 *))(this->spawnStatus)(this) != -1 ) /*0x5f4fda*/
      Targeting::Readd((IUnknown *)this); /*0x5f4fe2*/
    if ( v6 ) /*0x5f4fe9*/
    {
      if ( LOBYTE(v6[3].nextObject) /*0x5f5036*/
        && ((*(int (__thiscall **)(#374 *))(this->fallRate)(this) != 36
         || (*(int (__thiscall **)(#374 *))(this->fallRate)(this) == 36 && v6[4].__pad_0[1])
        && (!*(_DWORD *)&HouseClass_Player[29932]
         || *(_DWORD *)&HouseClass_Player[29932] == 5
         || (*(int (__stdcall **)(char *))(this->vtable1 + 16))((char *)this + 4) != -2) )
      {
        ObjectClass::SetDeployState((ObjectClass *)this, 0); /*0x5f5040*/
      }
      if ( *(_DWORD *)v6[1].__pad_0 ) /*0x5f5045*/
      {
  char v26[12]; // [esp+4Ch] [ebp-Ch] BYREF
        _DWORD * v8 = (_DWORD *)(*(int (__thiscall **)(#374 *, char *))(this->q048)(this, v26); /*0x5f505c*/
        a1[0] = *v8; /*0x5f5061*/
        a1[1] = v8[1]; /*0x5f5073*/
        a1[2] = v8[2]; /*0x5f507f*/
  int v20; // [esp+2Ch] [ebp-2Ch] BYREF
        Coord::To_Screen(*(_DWORD **)&stru_87C374[44976], a1, (IUnknown *)&v20); /*0x5f5083*/
        v9 = (AbstractClass *)((char *)aP3 + *(_DWORD *)(*(_DWORD *)&stru_87C374[44976] + 180)); /*0x5f50a1*/
        v10 = *(ObjectClass **)this; /*0x5f50a3*/
        v20 += *(_DWORD *)(*(_DWORD *)&stru_87C374[44976] + 176); /*0x5f50a9*/
        aP3 = v9; /*0x5f50ad*/
        int v11 = *(_DWORD *)(((int (__thiscall *)(#374 *))v10->parachute)(this) + 172); /*0x5f50b7*/
        v12 = (AbstractClass *)((char *)aP3 - *(__int16 *)(v11 + 4) / 2); /*0x5f50dd*/
        v20 -= *(__int16 *)(v11 + 2) / 2; /*0x5f50df*/
        aP3 = v12; /*0x5f50e3*/
        int v13 = __2_YAPAXI_Z(0x40u); /*0x5f50e7*/
        if ( v13 ) /*0x5f50f1*/
          AlphaShapeClass::CTOR(v13, (ObjectClass *)this, v20, aP3); /*0x5f5100*/
        if ( !*(_DWORD *)&HouseClass_Player[43616] ) /*0x5f510c*/
          Cell::CreateCrater( /*0x5f5146*/
            v20 - *(_DWORD *)(*(_DWORD *)&stru_87C374[44976] + 176),
            (int)&aP3->__pad_0[-*(_DWORD *)(*(_DWORD *)&stru_87C374[44976] + 180)],
            *(__int16 *)(v11 + 2),
            *(__int16 *)(v11 + 4),
            1);
      }
    }
    result = (*(int (__thiscall **)(#374 *))(this->parachute)(this); /*0x5f514f*/
    if ( *(_BYTE *)(result + 570) )
    {
      char * v14 = (char *)__2_YAPAXI_Z(0x210u); /*0x5f5168*/
      result = v14 ? (int)ObjectClass::checkLimbo(v14) : 0;
      this->lineTrailer = result; /*0x5f5181*/
      if ( result ) /*0x5f5187*/
      {
        aP1a = *(_WORD *)(*(_DWORD *)&stru_87C374[44652] + 6243); /*0x5f519e*/
        if ( (_BYTE)aP1a /*0x5f51b4*/
          || __PAIR16__(HIBYTE(aP1a), 0) != *(unsigned __int8 *)(*(_DWORD *)&stru_87C374[44652] + 6245) )
        {
          char v18 = *(_BYTE *)(*(_DWORD *)&stru_87C374[44652] + 6245); /*0x5f51e2*/
          *(_WORD *)result = *(_WORD *)(*(_DWORD *)&stru_87C374[44652] + 6243); /*0x5f51e5*/
          *(_BYTE *)(result + 2) = v18; /*0x5f51e8*/
        }
        else
        {
          int v15 = (*(int (__thiscall **)(#374 *))(this->parachute)(this); /*0x5f51be*/
          int v16 = this->lineTrailer; /*0x5f51c4*/
          char v17 = *(_BYTE *)(v15 + 573); /*0x5f51d4*/
          *(_WORD *)v16 = *(_WORD *)(v15 + 571); /*0x5f51d7*/
          *(_BYTE *)(v16 + 2) = v17; /*0x5f51da*/
        }
        int v19 = (*(int (__thiscall **)(#374 *))(this->parachute)(this); /*0x5f51ef*/
        result = ObjectClass::updateMissionState(this->q02A, *(_DWORD *)(v19 + 576)); /*0x5f5202*/
        *(_DWORD *)(this->lineTrailer + 4) = this; /*0x5f520d*/
      }
    }
  }
  LOBYTE(result) = 1; /*0x5f5210*/
  return result; /*0x5f5212*/
}
}
} // namespace game
} // namespace ra2

// 0x5F5280
namespace ra2 {
namespace game {
int ObjectClass::Destroy2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *v3; // edi
  AbstractClass *v5; // edx
  int result; // eax

  _DWORD * v2 = (_DWORD *)this->lineTrailer; /*0x5f5284*/
  if ( v2 ) /*0x5f528c*/
  {
    TacticalClass::GetField(v2); /*0x5f528e*/
    this->lineTrailer = 0; /*0x5f5293*/
  }
  v3 = (ObjectClass *)(*(int (__thiscall **)(#374 *))(this->ambientSoundController)(this); /*0x5f52a6*/
  bool v4 = 0; /*0x5f52ac*/
  char aP1; // [esp+Ch] [ebp+4h]
  if ( aP1 ) /*0x5f52b0*/
    goto LABEL_10; /*0x5f52b0*/
  if ( this && ((unsigned char)this->abstractFlags & 1) != 0 ) /*0x5f52c0*/
    v4 = (*(unsigned __int8 (__thiscall **)(#374 *))(*(_DWORD *)this + 808))(this) != 0; /*0x5f52d0*/
  if ( !v3 || !(unsigned __int8)House::IsHumanPlayer((#375 *)v3) && !v4 ) /*0x5f52e3*/
LABEL_10:
    (*(void (__thiscall **)(#374 *))(this->q150)(this); /*0x5f52e9*/
  if ( (#374 *)MapClass::GetScrollMode((int)&stru_87C374[13428]) == this ) /*0x5f52fd*/
    MapClass::SetScrollMode((int)&stru_87C374[13428], 0); /*0x5f5306*/
  LOBYTE(v5) = aP1; /*0x5f530b*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, v5); /*0x5f5311*/
  return result; /*0x5f5316*/
}
}
} // namespace game
} // namespace ra2

// 0x5F5850
namespace ra2 {
namespace game {
int ObjectClass::UpdateProductionDisplay()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  if ( !this->inLimbo ) /*0x5f5854*/
  {
  int v6; // [esp+Ch] [ebp+4h] BYREF
    int v3 = v6; /*0x5f5862*/
    if ( v6 == 2 ) /*0x5f5869*/
    {
      if ( !this->needsRedraw && this->isOnMap ) /*0x5f5879*/
      {
        result = (*(int (__thiscall **)(#374 *))(this->q134)(this); /*0x5f5886*/
        LOBYTE(result) = 1; /*0x5f588d*/
        return result; /*0x5f5890*/
      }
    }
    else
    {
      if ( (*(int (__thiscall **)(#374 *))(this->fallRate)(this) != 6 /*0x5f58b2*/
        || (result = this->q148, !*(_DWORD *)(result + 3672))
        || v3 )
      {
        result = (int)AbstractClass::IsTechnoType(this); /*0x5f58b6*/
        int v4 = result; /*0x5f58bb*/
        if ( result ) /*0x5f58bf*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)result + 704))(result); /*0x5f58c5*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 56))(v4); /*0x5f58cf*/
          result = (*(int (__thiscall **)(#374 *, int *))(this->q6E0)(this, &v6); /*0x5f58db*/
        }
      }
      if ( (v3 == 1 || v3 == 3) && !this->isOnMap ) /*0x5f58ec*/
      {
        int v5 = *(_DWORD *)this; /*0x5f58f3*/
        this->isOnMap = 1; /*0x5f58f7*/
        result = (*(int (__thiscall **)(#374 *))(v5 + 308))(this); /*0x5f58fb*/
        LOBYTE(result) = 1; /*0x5f5902*/
        return result; /*0x5f5905*/
      }
      if ( !v3 && this->isOnMap ) /*0x5f590c*/
      {
        this->isOnMap = 0; /*0x5f5913*/
        LOBYTE(result) = 1; /*0x5f5917*/
        return result; /*0x5f591a*/
      }
    }
  }
  LOBYTE(result) = 0; /*0x5f591e*/
  return result; /*0x5f588c*/
}
}
} // namespace game
} // namespace ra2

// 0x5F6BD0
namespace ra2 {
namespace game {
int ObjectClass::GetBoundingSize()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  _BYTE v4[12]; // [esp+8h] [ebp-18h] BYREF
  int v2 = (*(int (__thiscall **)(#374 *, _BYTE *))(this->q0AC)(this, v4); /*0x5f6be8*/
  _BYTE v5[12]; // [esp+14h] [ebp-Ch] BYREF
  return *(_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *))(this->q0AC)(this, v5) + *(_DWORD *)(v2 + 4); /*0x5f6bfe*/
}
}
} // namespace game
} // namespace ra2

// 0x652E50
namespace ra2 {
namespace game {
int ObjectClass::resetObjectState(SidebarClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v3 = *this; /*0x652e5e*/
  if ( (_BYTE)aP1 ) /*0x652e60*/
  {
    this->COMStub_Ret176_12(DataGlobal_B04978); /*0x652e62*/
    return this->COMStub_Ret176_12(DataGlobal_B04910); /*0x652e6e*/
  }
  else
  {
    this->ProcessPower_1(DataGlobal_B04978); /*0x652e75*/
    return this->ProcessPower_1(DataGlobal_B04910); /*0x652e81*/
  }
}
}
} // namespace game
} // namespace ra2

// 0x6A5BF0
namespace ra2 {
namespace game {
void ObjectClass::CleanupSidebarResources()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  PowerClass::checkLowPower(); /*0x6a5bf2*/
  if ( DataGlobal_B0B488 ) /*0x6a5c00*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B468); /*0x6a5c08*/
    DataGlobal_B0B488 = 0; /*0x6a5c10*/
  }
  if ( DataGlobal_B0B489 ) /*0x6a5c1c*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B46C); /*0x6a5c25*/
    DataGlobal_B0B489 = 0; /*0x6a5c2d*/
  }
  if ( DataGlobal_B0B48A ) /*0x6a5c39*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B470); /*0x6a5c42*/
    DataGlobal_B0B48A = 0; /*0x6a5c4a*/
  }
  if ( DataGlobal_B0B48B ) /*0x6a5c56*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B474); /*0x6a5c5e*/
    DataGlobal_B0B48B = 0; /*0x6a5c66*/
  }
  if ( DataGlobal_B0B48C ) /*0x6a5c72*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B478); /*0x6a5c7b*/
    DataGlobal_B0B48C = 0; /*0x6a5c83*/
  }
  if ( DataGlobal_B0B48D ) /*0x6a5c8f*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B47C); /*0x6a5c98*/
    DataGlobal_B0B48D = 0; /*0x6a5ca0*/
  }
  if ( DataGlobal_B0B48E ) /*0x6a5cac*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B480); /*0x6a5cb4*/
    DataGlobal_B0B48E = 0; /*0x6a5cbc*/
  }
  if ( DataGlobal_B0B48F ) /*0x6a5cc8*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B484); /*0x6a5cd1*/
    DataGlobal_B0B48F = 0; /*0x6a5cd9*/
  }
  if ( DataGlobal_B0B4CC ) /*0x6a5ce5*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B490); /*0x6a5cee*/
    DataGlobal_B0B4CC = 0; /*0x6a5cf6*/
  }
  if ( DataGlobal_B0B4CD ) /*0x6a5d02*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B494); /*0x6a5d0a*/
    DataGlobal_B0B4CD = 0; /*0x6a5d12*/
  }
  if ( DataGlobal_B0B4CE ) /*0x6a5d1e*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B498); /*0x6a5d27*/
    DataGlobal_B0B4CE = 0; /*0x6a5d2f*/
  }
  if ( DataGlobal_B0B4CF ) /*0x6a5d3b*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B49C); /*0x6a5d44*/
    DataGlobal_B0B4CF = 0; /*0x6a5d4c*/
  }
  if ( DataGlobal_B0B4D1 ) /*0x6a5d58*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B4A4); /*0x6a5d60*/
    DataGlobal_B0B4D1 = 0; /*0x6a5d68*/
  }
  if ( DataGlobal_B0B4D2 ) /*0x6a5d74*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B4A8); /*0x6a5d7d*/
    DataGlobal_B0B4D2 = 0; /*0x6a5d85*/
  }
  if ( DataGlobal_B0B4D3 ) /*0x6a5d91*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B4AC); /*0x6a5d9a*/
    DataGlobal_B0B4D3 = 0; /*0x6a5da2*/
  }
  if ( DataGlobal_B0B4D4 ) /*0x6a5dae*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B4B0); /*0x6a5db6*/
    DataGlobal_B0B4D4 = 0; /*0x6a5dbe*/
  }
  if ( DataGlobal_B0B4D5 ) /*0x6a5dca*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B4B4); /*0x6a5dd3*/
    DataGlobal_B0B4D5 = 0; /*0x6a5ddb*/
  }
  if ( DataGlobal_B0B4D6 ) /*0x6a5de7*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B4B8); /*0x6a5df0*/
    DataGlobal_B0B4D6 = 0; /*0x6a5df8*/
  }
  if ( DataGlobal_B0B4D7 ) /*0x6a5e04*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B4BC); /*0x6a5e0c*/
    DataGlobal_B0B4D7 = 0; /*0x6a5e14*/
  }
  if ( DataGlobal_B0B4D8 ) /*0x6a5e20*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B4C0); /*0x6a5e29*/
    DataGlobal_B0B4D8 = 0; /*0x6a5e31*/
  }
  if ( DataGlobal_B0B4D9 ) /*0x6a5e3d*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B4C4); /*0x6a5e46*/
    DataGlobal_B0B4D9 = 0; /*0x6a5e4e*/
  }
  if ( DataGlobal_B0B4D0 ) /*0x6a5e5a*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B4A0); /*0x6a5e62*/
    DataGlobal_B0B4D0 = 0; /*0x6a5e6a*/
  }
  if ( DataGlobal_B0B4DA ) /*0x6a5e76*/
  {
    __3_YAXPAX_Z(DataGlobal_B0B4C8); /*0x6a5e7f*/
    DataGlobal_B0B4DA = 0; /*0x6a5e87*/
  }
  ScenarioClass::FreeConfig((int)DataGlobal_B07DF8); /*0x6a5e92*/
  ScenarioClass::FreeConfig((int)DataGlobal_B0B3A0); /*0x6a5e9c*/
  int * v0 = (int *)&DataGlobal_B07C48; /*0x6a5ea1*/
  do /*0x6a5eb6*/
  {
    ScenarioClass::FreeConfig((int)v0); /*0x6a5ea8*/
    v0 += 24; /*0x6a5ead*/
  }
  while ( (int)v0 < (int)&DataGlobal_B07DC8 ); /*0x6a5eb6*/
  ScenarioClass::FreeConfig((int)DataGlobal_B0B328); /*0x6a5ebd*/
  ScenarioClass::FreeConfig((int)g_SidebarFlag); /*0x6a5ec7*/
}
}
} // namespace game
} // namespace ra2

// 0x6A7D70
namespace ra2 {
namespace game {
unsigned char ObjectClass::ToggleSidebarDisplay(unsigned int * a0, TabClass * aP1, int a3, int _20, SidebarClass * a4, char a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  SidebarClass *v6; // ecx
  SidebarClass *v7; // esi
  unsigned __int8 result; // al
  SidebarClass *v9; // ecx
  unsigned __int8 bl7; // bl
  LinkClass *v10; // edi
  GadgetClass *v11; // edi
  v7 = v6; /*0x6a7d71*/
  result = v6->__pad_34BC[7913]; /*0x6a7d79*/
  if ( (HouseClass_Player[39084] & 2) != 0 /*0x6a7d91*/
    && *(_DWORD *)&HouseClass_Player[29932]
    && *(_DWORD *)&HouseClass_Player[29932] != 5 )
  {
    return result; /*0x6a7d91*/
  }
  v9 = (SidebarClass *)a0; /*0x6a7d97*/
  if ( a0 == (_DWORD *)-1 ) /*0x6a7d9e*/
    v7->__pad_34BC[7913] = result == 0; /*0x6a7db3*/
  else
    v7->__pad_34BC[7913] = a0 == (_DWORD *)1; /*0x6a7da6*/
  LOBYTE(v9) = v7->__pad_34BC[7913]; /*0x6a7db9*/
  bl7 = (_BYTE)v9 != result; /*0x6a7dc2*/
  if ( (_BYTE)v9 == result ) /*0x6a7dcb*/
    return bl7; /*0x6a8078*/
  ObjectClass::resetObjectState(&v7->field_0, v9); /*0x6a7dd6*/
  if ( !v7->__pad_34BC[7913] ) /*0x6a7de3*/
  {
    AsyncIO::Shutdown(); /*0x6a7fc3*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B05488[10608]); /*0x6a7fd1*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B05488[24344]); /*0x6a7fdd*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B05488[10704]); /*0x6a7fe9*/
    char * v18 = &stru_B05488[10176]; /*0x6a7fec*/
    do /*0x6a8002*/
    {
      (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, v18); /*0x6a7ff6*/
      v18 += 96; /*0x6a7ff9*/
    }
    while ( (int)v18 < (int)&stru_B05488[10560] ); /*0x6a8002*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B05488[24224]); /*0x6a800d*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B05488[24448]); /*0x6a8019*/
    int v19 = 0; /*0x6a8029*/
    char * v20 = &v7->__pad_CD2[3988 * *(_DWORD *)&v7->__pad_34BC[7904] + 2162]; /*0x6a8031*/
    do /*0x6a805f*/
    {
      Tactical::SelectObject(&stru_87C374[13428], 56 * (v19 + 60 * *((_DWORD *)v20 + 14)) + 11566720); /*0x6a8056*/
      ++v19; /*0x6a805b*/
    }
    while ( v19 < 60 ); /*0x6a805f*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B048F8[280]); /*0x6a806a*/
    (*(void (__thiscall **)(SidebarClass *, int))(v7->field_0 + 56))(v7, 2); /*0x6a8073*/
    return bl7; /*0x6a8073*/
  }
  (*(void (__thiscall **)(SidebarClass *))(v7->field_0 + 136))(v7); /*0x6a7ded*/
  v7->__pad_34BC[7914] = 1; /*0x6a7df8*/
  Hash::Reset(&stru_B05488[10608]); /*0x6a7dff*/
  (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 48))(v7, &stru_B05488[10608]); /*0x6a7e0d*/
  Hash::Reset(&stru_B05488[24344]); /*0x6a7e15*/
  (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 48))(v7, &stru_B05488[24344]); /*0x6a7e23*/
  v10 = (LinkClass *)&stru_B05488[10176]; /*0x6a7e26*/
  do /*0x6a7e47*/
  {
    Hash::Reset(v10); /*0x6a7e2d*/
    LOBYTE(v10[2].LinkClass_field_0C) = 0; /*0x6a7e32*/
    (*(void (__thiscall **)(SidebarClass *, LinkClass *))(v7->field_0 + 48))(v7, v10); /*0x6a7e3b*/
    v10 += 6; /*0x6a7e3e*/
  }
  while ( (int)v10 < (int)&stru_B05488[10560] ); /*0x6a7e47*/
  Hash::Reset(&stru_B05488[24224]); /*0x6a7e4e*/
  Hash::InsertOrdered(&stru_87C374[13428], (int)&stru_B05488[24224]); /*0x6a7e5d*/
  Hash::Reset(&stru_B05488[24448]); /*0x6a7e67*/
  Hash::InsertOrdered(&stru_87C374[13428], (int)&stru_B05488[24448]); /*0x6a7e76*/
  Hash::Reset(&stru_B05488[10704]); /*0x6a7e80*/
  (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 48))(v7, &stru_B05488[10704]); /*0x6a7e8e*/
  Hash::Reset(&stru_B048F8[280]); /*0x6a7e96*/
  (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 48))(v7, &stru_B048F8[280]); /*0x6a7ea4*/
  v11 = (GadgetClass *)&stru_B05488[10176]; /*0x6a7ea7*/
  int * v13 = (int *)&v7->__pad_1548[80]; /*0x6a7eac*/
  do /*0x6a7ed5*/
  {
    *(v13 - 4) = 0; /*0x6a7eb2*/
    if ( *v13 > 0 ) /*0x6a7ebd*/
      DialogControl::Hide(v11); /*0x6a7ec1*/
    v11 = (GadgetClass *)((char *)v11 + 96); /*0x6a7ec6*/
    v13 += 997; /*0x6a7ec9*/
  }
  while ( (int)v11 < (int)&stru_B05488[10560] ); /*0x6a7ed5*/
  GadgetClass::Show(&stru_B05488[5296][96 * *(_DWORD *)&v7->__pad_34BC[7904] + 4880]); /*0x6a7ee9*/
  char * v14 = &v7->__pad_CD2[3988 * *(_DWORD *)&v7->__pad_34BC[7904] + 2162]; /*0x6a7f01*/
  v7->__pad_1548[3988 * *(_DWORD *)&v7->__pad_34BC[7904] + 24] = 1; /*0x6a7f08*/
  int v15 = 26; /*0x6a7f1a*/
  if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 13496) ) /*0x6a7f12*/
    v15 = 18; /*0x6a7f21*/
  int v16 = 0; /*0x6a7f34*/
  int v17; // ebx
  v17 = 2 /*0x6a7f54*/
      * ((*(_DWORD *)&stru_87C374[44072]
        - *(_DWORD *)&stru_B05488[24688]
        - v15
        + *(_DWORD *)&stru_87C374[44064]
        - 7)
       / 50);
  if ( v17 > 0 ) /*0x6a7f58*/
  {
    do /*0x6a7f9d*/
    {
      Hash::Reset((_DWORD *)(56 * (v16 + 60 * *((_DWORD *)v14 + 14)) + 11566720)); /*0x6a7f72*/
      Hash::InsertOrdered(&stru_87C374[13428], 56 * (v16 + 60 * *((_DWORD *)v14 + 14)) + 11566720); /*0x6a7f95*/
      ++v16; /*0x6a7f9a*/
    }
    while ( v16 < v17 ); /*0x6a7f9d*/
  }
  stru_87C374[34843] = 1; /*0x6a7fa1*/
  Tactical::UpdateUIVisibility(v7); /*0x6a7fa8*/
  (*(void (__thiscall **)(SidebarClass *, int))(v7->field_0 + 56))(v7, 2); /*0x6a7fb7*/
  return (unsigned __int8)aP1; /*0x6a7fbf*/
}
}
} // namespace game
} // namespace ra2

// 0x718260
namespace ra2 {
namespace game {
int ObjectClass::FindPlacementPosition(int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int TileIndex; // eax
  int *v35; // ebp
  int v36; // edx
  __int16 *v41; // [esp+20h] [ebp-18h]
  int v44; // [esp+2Ch] [ebp-Ch] BYREF
  int v45; // [esp+30h] [ebp-8h]
  int v46; // [esp+34h] [ebp-4h]
  if ( (_BYTE)a5 ) /*0x71826f*/
  {
    _DWORD * v30 = this + 10; /*0x718664*/
    if ( this->owningHouseIndex == DataGlobal_B0EBF8 && this->fallRate == DataGlobal_B0EBFC && this->nextObject == DataGlobal_B0EC00 ) /*0x718681*/
    {
      _DWORD * v31 = (_DWORD *)this->vtable4; /*0x71868b*/
      v44 = v31[39]; /*0x71869a*/
      v45 = v31[40]; /*0x7186a1*/
      v46 = v31[41]; /*0x7186a8*/
      (*(void (__stdcall **)(int *))(*v31 + 244))(&v44); /*0x7186b3*/
    }
    else
    {
      (*(void (__stdcall **)(_DWORD *))(*(_DWORD *)this->vtable4 + 244))(this + 10); /*0x718689*/
    }
    _DWORD * v32 = (_DWORD *)(this->vtable4 + 648); /*0x7186be*/
    *v30 = *v32; /*0x7186c6*/
    this->fallRate = v32[1]; /*0x7186cb*/
    this->nextObject = v32[2]; /*0x7186d1*/
    this->nextObject = Cell::GetGroundHeight(this + 10); /*0x7186e4*/
    if ( (*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, this + 10) + 80) & 0x100) == 0 /*0x7186fa*/
  int v33; // eax
      || (v33 = this->vtable4, *(_BYTE *)(v33 + 140)) )
    {
      *(_BYTE *)(this->vtable4 + 140) = 0; /*0x718719*/
    }
    else
    {
      *(_BYTE *)(v33 + 140) = 1; /*0x718704*/
      this->nextObject += DataGlobal_B0EC2C; /*0x718711*/
    }
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this->vtable4 + 240))(this->vtable4, this + 10); /*0x718726*/
  }
  else
  {
  int v40; // [esp+1Ch] [ebp-1Ch] BYREF
  int v39; // [esp+18h] [ebp-20h] BYREF
  int v38; // [esp+14h] [ebp-24h] BYREF
    if ( (*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &a2) + 80) & 0x100) != 0 ) /*0x71828d*/
      int * v6 = (int *)*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &a2) + 58); /*0x71829e*/
    else
      v6 = (int *)*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &a2) + 57); /*0x7182b5*/
    int v7 = *((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &a2) + 17); /*0x7182ca*/
    for ( LOBYTE(a5) = 0; v6; v6 = (int *)v6[12] ) /*0x7182d6*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int *))(*v6 + 352))(v6) /*0x718305*/
        && (*(int (__thiscall **)(int *))(*v6 + 44))(v6) == 15
        && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->vtable4 + 44))(this->vtable4) == 15 )
      {
        _DWORD * v8 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*v6 + 72))(v6, &v44); /*0x718310*/
        if ( a2 == *v8 && a3 == v8[1] && a4 == v8[2] ) /*0x718339*/
        {
          int v9 = (*(int (__thiscall **)(int *))(*v6 + 132))(v6); /*0x718343*/
          int v10 = *v6; /*0x718354*/
          v38 = *(_DWORD *)(v9 + 160); /*0x718357*/
          (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v10 + 364))( /*0x71836e*/
            v6,
            &v38,
            0,
            *((_DWORD *)g_RulesClass_Instance + 1002),
            0,
            1,
            0,
            0);
        }
      }
      else if ( (*(unsigned __int8 (__thiscall **)(int *))(*v6 + 352))(v6) || (v6[5] & 4) == 0 ) /*0x718397*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(int *))(*v6 + 352))(v6) ) /*0x7183d4*/
        {
          v40 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->vtable4 + 132))(this->vtable4) + 160); /*0x7183f5*/
          (*(void (__thiscall **)(_DWORD, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)this->vtable4 /*0x71840f*/
                                                                                             + 364))(
            this->vtable4,
            &v40,
            0,
            *((_DWORD *)g_RulesClass_Instance + 1002),
            0,
            1,
            0,
            0);
        }
        else if ( (v6[5] & 4) == 0 ) /*0x718428*/
        {
          LOBYTE(a5) = 1; /*0x71842a*/
        }
      }
      else
      {
        int v11 = (*(int (__thiscall **)(int *))(*v6 + 132))(v6); /*0x71839d*/
        int v12 = *v6; /*0x7183a9*/
        v39 = *(_DWORD *)(v11 + 160); /*0x7183ab*/
        (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v12 + 364))( /*0x7183c8*/
          v6,
          &v39,
          0,
          *((_DWORD *)g_RulesClass_Instance + 1002),
          0,
          1,
          0,
          0);
      }
    }
    if ( (*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &a2) + 80) & 0x100) != 0 /*0x71846c*/
      && (*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &a2) + 80) & 0x200) == 0 )
    {
      LOBYTE(a5) = 1; /*0x71846e*/
    }
    _DWORD * v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->vtable4 + 72))(this->vtable4, &v44); /*0x71847d*/
    LOWORD(v38) = *v13 / 256; /*0x718490*/
    HIWORD(v38) = v13[1] / 256; /*0x7184a8*/
    v40 = v38; /*0x7184b1*/
    v41 = (__int16 *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v40); /*0x7184c0*/
    LOBYTE(v39) = ObjectClass::processPointerInvalid != 0; /*0x7184d1*/
    if ( v7 != -1 && !*(_BYTE *)(*((_DWORD *)g_BuildingTypeClass_Array + v7) + 681) && !ObjectClass::processPointerInvalid /*0x7184f4*/
      || (_BYTE)a5 )
    {
      int v14 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->vtable4 + 132))(this->vtable4) + 1460); /*0x718505*/
      switch ( v14 ) /*0x71850e*/
      {
        case 9: /*0x71850e*/
          v14 = 0; /*0x718510*/
          break;
        case 2: /*0x71850e*/
          v14 = 0; /*0x718519*/
          break;
        case 3: /*0x71850e*/
          v14 = 5; /*0x718522*/
          break;
      }
      v38 = 0; /*0x71852b*/
      LOWORD(a5) = a2 / 256; /*0x71855c*/
      HIWORD(a5) = a3 / 256; /*0x718561*/
      v40 = a5; /*0x71857b*/
      int v15 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v40) + 80) >> 8; /*0x7185ad*/
      LOBYTE(v15) = v15 & 1; /*0x7185b0*/
      int v37 = v15; /*0x7185b5*/
      TileIndex = MapClass::GetTileIndex(&DataGlobal_87F7E8, v41 + 18, v14, v39); /*0x7185bf*/
  int v42; // [esp+24h] [ebp-14h] BYREF
      v42 = *LayerClass::Pathfinding_Find( /*0x7185e6*/
               &DataGlobal_87F7E8,
  int v17; // edx
               v17,
  int v43; // [esp+28h] [ebp-10h] BYREF
               &v43,
               (__int16 *)&a5,
               1,
               TileIndex,
               v14,
               v37,
               1,
               1,
               0,
               0,
               0,
               1,
               (__int16 *)&v38,
               0,
               0);
      void * v18 = Coord::To_Cell(&DataGlobal_87F7E8, &a2); /*0x7185ea*/
      _DWORD * v19 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v18 + 72))(v18, &v44); /*0x7185f8*/
      int v20 = a2 - *v19; /*0x71860b*/
      int v21 = a3 - v19[1]; /*0x718611*/
      int v22 = a4 - v19[2]; /*0x718617*/
      void * v23 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v42); /*0x71861f*/
      _DWORD * v24 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v23 + 72))(v23, &v44); /*0x71862d*/
      int v25 = *v24 + v20; /*0x718635*/
      _DWORD * v26 = (_DWORD *)(this->vtable4 + 648); /*0x71863d*/
      int v27 = v21 + v24[1]; /*0x718643*/
      int v28 = v22 + v24[2]; /*0x718645*/
      *v26 = v25; /*0x718647*/
      v26[1] = v27; /*0x71864c*/
      v26[2] = v28; /*0x718650*/
      return 0; /*0x718658*/
    }
  }
  int * v34 = this + 10; /*0x718735*/
  if ( this->owningHouseIndex == DataGlobal_B0EBF8 && this->fallRate == DataGlobal_B0EBFC && this->nextObject == DataGlobal_B0EC00 ) /*0x718754*/
  {
    v35 = (int *)this->vtable4; /*0x71875e*/
    v44 = v35[39]; /*0x71876d*/
    v45 = v35[40]; /*0x718774*/
    v46 = v35[41]; /*0x71877b*/
    v36 = *v35; /*0x71877f*/
    v34 = &v44; /*0x718782*/
  }
  else
  {
    v35 = (int *)this->vtable4; /*0x718756*/
    v36 = *v35; /*0x718759*/
  }
  (*(void (__thiscall **)(int *, int *))(v36 + 240))(v35, v34); /*0x718789*/
  return 1; /*0x718649*/
}
}
} // namespace game
} // namespace ra2

// 0x746CB0
namespace gamemd {
void ObjectClass_GetTypeVt40_2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
{
  return TechnoClass::GetTypeVt40(this);
}
}
} // namespace gamemd

// 0x746CC0
namespace gamemd {
void ObjectClass_GetTypeVt41_2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
{
  return ObjectClass::GetTypeVt41(this);
}
}
} // namespace gamemd

// 0x74CD60
namespace ra2 {
namespace game {
int ObjectClass::processDeath()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char *i; // esi

  int v1 = g_VeinholePool - 1; /*0x74cd68*/
  if ( g_VeinholePool - 1 < 0 ) /*0x74cd6d*/
    return 0; /*0x74cda2*/
  for ( i = (char *)g_VoxelDrawState + 4 * v1; /*0x74cd78*/
        *(_WORD *)(*(_DWORD *)i + 248) != *this || *(_WORD *)(*(_DWORD *)i + 250) != this->vtable2;
        i -= 4 )
  {
    if ( --v1 < 0 ) /*0x74cd97*/
      return 0; /*0x74cd97*/
  }
  return *((_DWORD *)g_VoxelDrawState + v1); /*0x74cd9e*/
}
}
} // namespace game
} // namespace ra2

// 0x401940
namespace ra2 {
namespace game {
int ObjectClass::GetMember06()
{
{
    return this->nextArrayIndex;
}
}
} // namespace game
} // namespace ra2

// 0x4135A0
namespace ra2 {
namespace game {
bool ObjectClass::HasLinkedObject(VectorClass * aP0)
{
{
    VectorClass *v1;
    v1 = *(VectorClass **)((*(int (__thiscall **)(VectorClass *))(*(int *)aP0->vtable0 + 444))(aP0) + 224);
    return v1 && v1 != aP0;
}
}
} // namespace game
} // namespace ra2

// 0x41BE00
namespace ra2 {
namespace game {
int ObjectClass::GetCoordsThunk2()
{
{
    int *v1;
    char v3[12];
    int *v4;
    v1 = (int *)this->Delete(v3);
    *v4 = *v1;
    v4[1] = v1[1];
    v4[2] = v1[2];
    return (int)v4;
}
}
} // namespace game
} // namespace ra2

// 0x4264D0
namespace ra2 {
namespace game {
int ObjectClass::COMStub_108()
{
return 0;
}
} // namespace game
} // namespace ra2

// 0x4886A0
namespace ra2 {
namespace game {
char ObjectClass::GetStateFlag()
{
{
    return this->referenceCount;
}
}
} // namespace game
} // namespace ra2

// 0x4CA120
namespace ra2 {
namespace game {
int ObjectClass::GetMember09()
{
{
    return this->objectTypeFlags;
}
}
} // namespace game
} // namespace ra2

// 0x4E02C0
namespace ra2 {
namespace game {
int ObjectClass::updateStateFlags()
{
{
    int result;
    result = *(void**)this;
    if ( *(void**)this )
    return (*(int (__stdcall **)(int))(*(int *)(result) + 8))(result);
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x4E14A0
namespace gamemd {
int ObjectClass::InputThunkA()
{
int ObjectClass::InputThunkA()
{
  return this->GetWidth();
}
}
}
// 0x4E14B0
namespace gamemd {
int ObjectClass::InputThunkB()
{
int ObjectClass::InputThunkB()
{
  return ObjectClass::GetHeight();
}
}
}
// 0x556620
namespace ra2 {
namespace game {
int ObjectClass::GetWidth()
{
{
    return this->vtable1;
}
}
} // namespace game
} // namespace ra2

// 0x556B50
namespace ra2 {
namespace game {
int ObjectClass::updateMissionState(int a2)
{
{
    int result;
    result = a2;
    if ( !g_lParam )
    result = 2 * a2;
    this->vtable2 = result;
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x55A8C0
namespace ra2 {
namespace game {
unsigned int * ObjectClass::ComputeScreenYOffset(BuildingTypeClass * aP0, unsigned int * a1)
{
{
    IUnknown *v2;
    BuildingTypeClass *v3;
    v2 = (IUnknown *)(*(int (__thiscall **)(int))(**(int **)&aP0->vtable0[8] + 456))(*(int *)&aP0->vtable0[8]);
    v3 = (BuildingTypeClass *)ZCoordToScreenY(v2);
    *a1 = 0;
    *((int*)(a1) + 1) = v3;
    return a1;
}
}
} // namespace game
} // namespace ra2

// 0x55BAA0
namespace ra2 {
namespace game {
char ObjectClass::SetDeployState(ObjectClass * aP0, char a2)
{
{
    int v2;
    if ( aP0->isInLogic )
    return 1;
    if ( !DisplayClass::RenderStatusText(v2, (IUnknown *)aP0, a2) )
    return 0;
    aP0->isInLogic = 1;
    return 1;
}
}
} // namespace game
} // namespace ra2

// 0x5F5F40
namespace ra2 {
namespace game {
int ObjectClass::GetZAboveGround()
{
{
    int v2;
    int v4[3];
    v4[0] = this->location;
    v4[1] = this->WaveClass_field_14C;
    v4[2] = this->WaveClass_field_150;
    v2 = this->WaveClass_field_150 - Cell::GetGroundHeight(v4);
    if ( this->onBridge )
    v2 -= DataGlobal_AC13BC;
    return v2;
}
}
} // namespace game
} // namespace ra2

// 0x5F6A10
namespace ra2 {
namespace game {
int ObjectClass::GetCell()
{
{
    int *v1;
    int v3;
    int v4;
    char v5[12];
    v1 = (int *)this->IsReady(v5, 0);
    LOWORD(v3) = *v1 / 256;
    HIWORD(v3) = v1[1] / 256;
    v4 = v3;
    return (int)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v4);
}
}
} // namespace game
} // namespace ra2

// 0x5F6C10
namespace ra2 {
namespace game {
int ObjectClass::IsAboveScreenMargin()
{
{
    int result;
    result = this->DropAsBomb();
    LOBYTE(result) = result > -20;
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x5F6DC0
namespace ra2 {
namespace game {
int ObjectClass::CreateInstance()
{
{
    char v3;
    ObjectClass::Dtor(this);
    if ( (v3 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int)this;
}
}
} // namespace game
} // namespace ra2

// 0x6241C0
namespace ra2 {
namespace game {
char ObjectClass::Release()
{
{
    return (unsigned char)this->vtable2;
}
}
} // namespace game
} // namespace ra2

// 0x6241D0
namespace ra2 {
namespace game {
int ObjectClass::GetMember01()
{
{
    return this->vtable1;
}
}
} // namespace game
} // namespace ra2

// 0x6A5000
namespace ra2 {
namespace game {
int ObjectClass::processDamage()
{
{
    int v1;
    int result;
    PowerClass::Stub(this);
    v1 = 4;
    do
  {
    result = SearchMIXFile(DataGlobal_83F92C, 0);
    --v1;
    DataGlobal_B07BC0 = result;
  }
    while ( v1 );
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x6ABA40
namespace ra2 {
namespace game {
int ObjectClass::checkHealth()
{
{
    Mouse::SetCursor((int)&DataGlobal_87F7E8, 0, 0);
    return 1;
}
}
} // namespace game
} // namespace ra2

// 0x6AC7A0
namespace ra2 {
namespace game {
unsigned int * ObjectClass::updateAnimation(char a2)
{
{
    GadgetClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return &this->vfptr;
}
}
} // namespace game
} // namespace ra2

// 0x6E45E0
namespace ra2 {
namespace game {
int ObjectClass::FindOwner(unsigned int * a0, AnimClass * aP1)
{
{
    if ( !a0 )
    return 0;
    if ( aP1 == (AnimClass *)8997 )
    return Property::GetField11(a0);
    if ( aP1 == (AnimClass *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(aP1) )
    return BuildingType::FindOwnerHouse(aP1);
    return HouseClass::FindOwner(aP1);
}
}
} // namespace game
} // namespace ra2

// 0x72A660
namespace ra2 {
namespace game {
int ObjectClass::setTarget(int a2)
{
{
    *(int *)&this->__pad_2C[4] = a2;
    return a2;
}
}
} // namespace game
} // namespace ra2

// 0x72A670
namespace ra2 {
namespace game {
unsigned int * ObjectClass::clearTarget(char a2)
{
{
    GadgetClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this->__pad_0;
}
}
} // namespace game
} // namespace ra2

// 0x77D200
namespace gamemd {
char j_Game_ProcessIdle()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
{
  return Game::ProcessIdle((CreateGameDialogControl *)this);
}
}
}
// 0x7A2E70
namespace ra2 {
namespace game {
unsigned int * ObjectClass::loc_7A2E70(char a2)
{
{
    this->vfptr = &vt_SimpleWonlineDialogControl;
    OwnerDrawControl::InitVtable((DialogControl_OwnerDraw *)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return &this->vfptr;
}
}
} // namespace game
} // namespace ra2
