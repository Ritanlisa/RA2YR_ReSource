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
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/e4_protos.h"

// 0x483610
namespace gamemd {
int ObjectClass::processPointerInvalid()
{
  return (*(&this->NeedsSaveOrLink0) >> 8) & 1; /*0x48361c*/
}
} // namespace gamemd

// 0x4D7D50
namespace gamemd {
int ObjectClass::SpawnInfantry(FootClass * aP1, FootClass * aP2, FootClass * aP3, FootClass * aP4)
{
  char result; // al
  int v8; // ebp
  void ***v9; // eax
  int v10; // edi
  void *v11; // eax
  int v12; // ebp
  void *v13; // eax
  int v14; // ebp
  void *v15; // eax
  int v16; // edx
  int v17; // ebp
  void **v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edi
  void *v22; // eax
  int v23; // eax
  int v24; // ebp
  void *v25; // eax
  int v26; // ebp
  void *v27; // eax
  int v28; // ebp
  void *v29; // eax
  int v30; // ebp
  void *v31; // eax
  __int16 *v32; // eax
  int Type; // edi
  __int16 *v34; // eax
  char v35; // dl
  int v36; // edx
  __int16 v37; // cx
  void *v38; // [esp+0h] [ebp-28h]
  int v40; // [esp+14h] [ebp-14h] BYREF
  int v41; // [esp+18h] [ebp-10h] BYREF
  int v42[2]; // [esp+1Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+24h] [ebp-4h]

  if ( *(&this->q1084) ) /*0x4d7d58*/
    return 0; /*0x4d7d64*/
  if ( this->q2A8 && !*(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)&this->attachedTag2))(this) + 1682) ) /*0x4d7d81*/
    return 0; /*0x4d7d8d*/
  aP2 = aP2; /*0x4d7d9a*/
  v8 = (*(int (__thiscall **)(_BYTE *, __int16 *, _DWORD, void **))(*(_DWORD *)&this->fallRate2))(this, aP2, 0, aP4); /*0x4d7db1*/
  if ( !LayerClass::IsWithinUsableArea(&MapClass_Instance, aP2, 1) && v8 != 2 ) /*0x4d7dbf*/
    return 0; /*0x4d7dc1*/
  switch ( v8 ) /*0x4d7de0*/
  {
    case 1: /*0x4d7de0*/
    case 62: /*0x4d7de0*/
      if ( g_MoveFeedback ) /*0x4d7ebc*/
      {
        v16 = aP2[1] << 8; /*0x4d7ed6*/
        v42[0] = (*aP2 << 8) + 128; /*0x4d7ed9*/
        v42[1] = v16 + 128; /*0x4d7ee9*/
        GroundHeight = 0; /*0x4d7eed*/
        GroundHeight = Cell::GetGroundHeight(v42); /*0x4d7efe*/
        if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, v42) + 80) & 0x100) != 0 ) /*0x4d7f16*/
          GroundHeight += dword_8B3DF4; /*0x4d7f24*/
        v17 = *((_DWORD *)g_ScenarioClass_Instance + 133); /*0x4d7f35*/
        if ( g_GameMode_Current[0] && g_GameMode_Current[0] != 5 ) /*0x4d7f40*/
        {
          *((_DWORD *)g_ScenarioClass_Instance + 133) = -3; /*0x4d7f42*/
          *(_DWORD *)(*((_DWORD *)g_RulesClass_Instance + 749) + 832) = -5000; /*0x4d7f57*/
        }
        v18 = (void **)RA2_OPNEW(0x1C8u); /*0x4d7f66*/
        if ( v18 ) /*0x4d7f70*/
          aP4 = AnimClass::ctor(v18, *((void **)g_RulesClass_Instance + 749), v42, 0, 1, (void *)0x600, 0, 0); /*0x4d7f98*/
        else
          aP4 = 0; /*0x4d7f9e*/
        if ( g_GameMode_Current[0] && g_GameMode_Current[0] != 5 ) /*0x4d7fb6*/
        {
          *((_DWORD *)g_ScenarioClass_Instance + 133) = v17; /*0x4d7fcb*/
          v19 = (*(int (__thiscall **)(int *, void ***))(AnimClass_Array + 16))(&AnimClass_Array, &aP4); /*0x4d7fd7*/
          if ( v19 != -1 && v19 < g_AnimClassCount && v19 < --g_AnimClassCount ) /*0x4d7ff2*/
          {
            do /*0x4d800a*/
            {
              ++v19; /*0x4d7ffa*/
              *((_DWORD *)g_AnimClassPool + v19 - 1) = *((_DWORD *)g_AnimClassPool + v19); /*0x4d7ffe*/
            }
            while ( v19 < g_AnimClassCount ); /*0x4d800a*/
          }
          if ( dword_A83E10 < dword_A83E08 /*0x4d8042*/
            || (byte_A83E0D || !dword_A83E08)
            && dword_A83E14 > 0
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83E00 + 8))(
                 &dword_A83E00,
                 dword_A83E14 + dword_A83E08,
                 0) )
          {
            v20 = dword_A83E10++; /*0x4d8055*/
            *((_DWORD *)dword_A83E04 + v20) = aP4; /*0x4d8062*/
          }
        }
      }
      goto LABEL_38; /*0x4d8062*/
    case 2: /*0x4d7de0*/
  LABEL_38:
      aP4 = *(void ***)ObjectClass::FindPlacementCell(&v41, aP2, 0); /*0x4d8065*/
      if ( aP4 == (void **)g_FootClass_Pool ) /*0x4d8081*/
        return 0; /*0x4d8081*/
      v21 = *(_DWORD *)this; /*0x4d8099*/
      v38 = CellCoord::To_CellObj(&MapClass_Instance, aP3); /*0x4d80a6*/
      v22 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&aP4); /*0x4d80ac*/
  LABEL_51:
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, void *))(v21 + 888))(this, 2, 0, v22, v38); /*0x4d822a*/
  LABEL_52:
      result = 1; /*0x4d8237*/
      break; /*0x4d8239*/
    case 3: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&this->q0400))(this) ) /*0x4d8155*/
        return 0; /*0x4d8155*/
      v28 = *(_DWORD *)this; /*0x4d815b*/
      v29 = CellCoord::To_CellObj(&MapClass_Instance, aP2); /*0x4d8165*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v28 + 888))(this, 7, 0, v29, 0); /*0x4d8171*/
      return 1; /*0x4d817f*/
    case 5: /*0x4d7de0*/
    case 63: /*0x4d7de0*/
      v23 = ObjectClass::processDeath(aP2); /*0x4d80b3*/
      if ( !v23 || *(_BYTE *)(v23 + 256) || *(int *)(v23 + 108) <= 0 ) /*0x4d80cb*/
      {
        v24 = *(_DWORD *)this; /*0x4d80e9*/
        v25 = CellCoord::To_CellObj(&MapClass_Instance, aP2); /*0x4d80f5*/
        (*(void (__thiscall **)(_BYTE *, int, void *, _DWORD, _DWORD))(v24 + 888))(this, 1, v25, 0, 0); /*0x4d80ff*/
        return 1; /*0x4d8107*/
      }
      else
      {
        (*(void (__thiscall **)(_BYTE *, int, int, _DWORD, _DWORD))(*(_DWORD *)&this->q1608))(this, 1, v23, 0, 0); /*0x4d80d8*/
        return 1; /*0x4d80e0*/
      }
    case 6: /*0x4d7de0*/
      v14 = *(_DWORD *)this; /*0x4d7e8e*/
      v15 = CellCoord::To_CellObj(&MapClass_Instance, aP2); /*0x4d7e98*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v14 + 888))(this, 10, 0, v15, 0); /*0x4d7ea4*/
      return 1; /*0x4d7eb2*/
    case 9: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&this->q0400))(this) ) /*0x4d811c*/
        return 0; /*0x4d811c*/
      v26 = *(_DWORD *)this; /*0x4d8122*/
      v27 = CellCoord::To_CellObj(&MapClass_Instance, aP2); /*0x4d812c*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v26 + 888))(this, 8, 0, v27, 0); /*0x4d8138*/
      return 1; /*0x4d8146*/
    case 16: /*0x4d7de0*/
      v30 = *(_DWORD *)this; /*0x4d8182*/
      v31 = CellCoord::To_CellObj(&MapClass_Instance, aP2); /*0x4d818c*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v30 + 888))(this, 17, 0, v31, 0); /*0x4d8198*/
      return 1; /*0x4d81a6*/
    case 26: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&this->ambientSoundController6))(this) /*0x4d7e59*/
        && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&this->q1446))(this)
        || !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&this->q0400))(this) )
      {
        return 0; /*0x4d7e61*/
      }
      v12 = *(_DWORD *)this; /*0x4d7e67*/
      v13 = CellCoord::To_CellObj(&MapClass_Instance, aP2); /*0x4d7e73*/
      (*(void (__thiscall **)(_BYTE *, int, void *, _DWORD, _DWORD))(v12 + 888))(this, 11, v13, 0, 0); /*0x4d7e7d*/
      return 1; /*0x4d7e8b*/
    case 35: /*0x4d7de0*/
      v32 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, aP2); /*0x4d81af*/
      Type = InfantryClass::GetType(v32); /*0x4d81bb*/
      aP2 = *(__int16 **)(Type + 40); /*0x4d81ca*/
      v34 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&aP2); /*0x4d81ce*/
      v35 = *(_DWORD *)(InfantryClass::GetType(v34) + 44) - 4; /*0x4d81e0*/
      aP3 = *(__int16 **)(Type + 40); /*0x4d81e3*/
      v36 = v35 & 7; /*0x4d81e7*/
      v38 = 0; /*0x4d81ea*/
      v37 = (_WORD)aP3 + IDA_LOWORD(Direction_X_Offsets[v36]); /*0x4d81fb*/
      v21 = *(_DWORD *)this; /*0x4d81fe*/
      IDA_LOWORD(v36) = IDA_HIWORD(Direction_X_Offsets[v36]); /*0x4d8200*/
      IDA_LOWORD(aP4) = v37; /*0x4d8204*/
      IDA_HIWORD(aP4) = IDA_HIWORD(aP3) + v36; /*0x4d8213*/
      aP4 = aP4; /*0x4d821c*/
      v22 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&aP4); /*0x4d8225*/
      goto LABEL_51; /*0x4d8225*/
    case 51: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)&this->q0400))(this) ) /*0x4d7df3*/
        return 0; /*0x4d7df3*/
      v9 = (void ***)ObjectClass::FindPlacementCell(&v40, aP2, 0); /*0x4d7dff*/
      v10 = *(_DWORD *)this; /*0x4d7e06*/
      aP4 = *v9; /*0x4d7e0c*/
      v11 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&aP4); /*0x4d7e18*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v10 + 888))(this, 25, 0, v11, 0); /*0x4d7e24*/
      return 1; /*0x4d7e32*/
    default:
      goto LABEL_52;
  }
  return result; /*0x4d7d62*/
}
} // namespace ra2

// 0x4D9C60
namespace gamemd {
int ObjectClass::CheckCellFlags(int a1, int a2, int * a3, unsigned char * a4, unsigned int * a5)
{
  _DWORD *v5; // esi
  int v6; // eax
  __int16 v7; // dx
  int v10; // ebx
  int v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  int v16; // edi
  int v17; // edi
  int v18; // [esp+1Ch] [ebp+Ch]

  v5 = a5; /*0x4d9c67*/
  if ( !a5 ) /*0x4d9c72*/
  {
    v6 = ((_BYTE)a2 - 4) & 7; /*0x4d9c77*/
    v7 = *(_WORD *)(a1 + 38) + IDA_HIWORD(Direction_X_Offsets[v6]); /*0x4d9c8e*/
    IDA_LOWORD(a5) = *(_WORD *)(a1 + 36) + IDA_LOWORD(Direction_X_Offsets[v6]); /*0x4d9c99*/
    IDA_HIWORD(a5) = v7; /*0x4d9ca2*/
    v5 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a5); /*0x4d9cba*/
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
  v10 = *(char *)(a1 + 283); /*0x4d9d14*/
  v18 = v5[80] & 0x100; /*0x4d9d20*/
  if ( v18 ) /*0x4d9d24*/
    v11 = *((char *)v5 + 283); /*0x4d9d26*/
  else
    v11 = *a3; /*0x4d9d2f*/
  v12 = v11 - v10; /*0x4d9d32*/
  v13 = abs32(v12); /*0x4d9d39*/
  if ( !v13 ) /*0x4d9d3e*/
  {
    v17 = *(_DWORD *)(a1 + 320); /*0x4d9e08*/
    if ( ((v17 & 0x100) == 0 || (v17 & 0x200) == 0 || !v18) && *a3 != -1 && *a3 != v10 ) /*0x4d9e30*/
      return 7; /*0x4d9e3b*/
    return 0; /*0x4d9e30*/
  }
  v14 = v13 - 1; /*0x4d9d44*/
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
  v15 = *((char *)v5 + 283); /*0x4d9d5c*/
  if ( v15 == v10 - 4 ) /*0x4d9d68*/
  {
    if ( *a3 != v10 ) /*0x4d9d6d*/
      return 7; /*0x4d9d78*/
    if ( !v18 ) /*0x4d9d81*/
      return 7; /*0x4d9d8c*/
  }
  if ( v10 != v15 - 4 ) /*0x4d9d94*/
    return 0; /*0x4d9e61*/
  v16 = *(_DWORD *)(a1 + 320); /*0x4d9d9a*/
  if ( (v16 & 0x100) == 0 ) /*0x4d9da6*/
    return 7; /*0x4d9dab*/
  if ( (v16 & 0x200) == 0 ) /*0x4d9dba*/
    return 7; /*0x4d9dbf*/
  *a4 = 1; /*0x4d9dcf*/
  return 0; /*0x4d9d02*/
}
} // namespace ra2

// 0x4DB3C0
namespace gamemd {
int ObjectClass::LoadFromStream_Common(FootClass * aP0, LPSTREAM pStm)
{
  int v3; // eax
  int result; // eax
  int v6; // edi
  IStream v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // edi
  IStream v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int i; // edi
  int j; // edi
  int v20; // [esp+54h] [ebp-4h] BYREF
  int v21; // [esp+5Ch] [ebp+4h]
  int v22; // [esp+5Ch] [ebp+4h]

  v3 = *(_DWORD *)(aP0 + 1652); /*0x4db3cb*/
  if ( v3 ) /*0x4db3d3*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*(_DWORD *)(aP0 + 1652)); /*0x4db3d8*/
  pStm = pStm; /*0x4db3db*/
  *(_DWORD *)(aP0 + 1652) = 0; /*0x4db3df*/
  result = BuildingClass::AllocAndCtor(aP0, (int)pStm); /*0x4db3e7*/
  if ( result >= 0 ) /*0x4db3ee*/
  {
    result = pStm->lpVtbl->Read(pStm, &pStm, 4, 0); /*0x4db400*/
    if ( result >= 0 ) /*0x4db405*/
    {
      v6 = aP0 + 1416; /*0x4db40b*/
      if ( aP0 != -1416 ) /*0x4db413*/
      {
        AbstractClassVector::Construct((_DWORD *)(aP0 + 1416), 0, 0); /*0x4db419*/
        *(_DWORD *)v6 = &(void*)(void*)&DynamicVectorClass_AbstractClass___vftable; /*0x4db41e*/
        *(_DWORD *)(aP0 + 1436) = 10; /*0x4db424*/
        *(_DWORD *)(aP0 + 1432) = 0; /*0x4db42b*/
      }
      v21 = 0; /*0x4db432*/
      if ( (int)pStm <= 0 ) /*0x4db438*/
      {
  LABEL_16:
        result = pStm->lpVtbl->Read(pStm, &pStm, 4, 0); /*0x4db4a2*/
        if ( result >= 0 ) /*0x4db4b3*/
        {
          v12 = aP0 + 1452; /*0x4db4b9*/
          if ( aP0 != -1452 ) /*0x4db4c1*/
          {
            AbstractClassVector::Construct((_DWORD *)(aP0 + 1452), 0, 0); /*0x4db4c7*/
            *(_DWORD *)v12 = &(void*)(void*)&DynamicVectorClass_AbstractClass___vftable; /*0x4db4cc*/
            *(_DWORD *)(aP0 + 1472) = 10; /*0x4db4d2*/
            *(_DWORD *)(aP0 + 1468) = 0; /*0x4db4d9*/
          }
          v22 = 0; /*0x4db4e0*/
          if ( (int)pStm <= 0 ) /*0x4db4e6*/
          {
  LABEL_28:
            *(_DWORD *)(aP0 + 1652) = 0; /*0x4db550*/
            ObjectClass::updateStateFlags(aP0 + 1652); /*0x4db55a*/
            *(_DWORD *)(aP0 + 1652) = 0; /*0x4db566*/
            OleLoadFromStream(pStm, &IID_ILocomotion, (LPVOID *)(aP0 + 1652)); /*0x4db568*/
            *(_DWORD *)(aP0 + 1440) = 0; /*0x4db574*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1492)); /*0x4db580*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1496)); /*0x4db591*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1444)); /*0x4db5a2*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1448)); /*0x4db5b3*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1480)); /*0x4db5c4*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1484)); /*0x4db5d5*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1500)); /*0x4db5e6*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1684)); /*0x4db5f7*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1692)); /*0x4db608*/
            AudioController::Init((_DWORD *)(aP0 + 1348)); /*0x4db613*/
            *(_BYTE *)(aP0 + 1340) = 0; /*0x4db618*/
            *(_DWORD *)(aP0 + 1344) = 0; /*0x4db61e*/
            for ( i = 0; i < *(_DWORD *)(aP0 + 1468); ++i ) /*0x4db62e*/
              ObjectPtr::RegisterForTracking( /*0x4db63f*/
                (int)&SwizzleManagerClass_Instance,
                (int *)(*(_DWORD *)(aP0 + 1456) + 4 * i));
            for ( j = 0; j < *(_DWORD *)(aP0 + 1432); ++j ) /*0x4db659*/
              ObjectPtr::RegisterForTracking( /*0x4db66a*/
                (int)&SwizzleManagerClass_Instance,
                (int *)(*(_DWORD *)(aP0 + 1420) + 4 * j));
            return 0; /*0x4db67a*/
          }
          else
          {
            while ( 1 ) /*0x4db4e8*/
            {
              v13.lpVtbl = pStm->lpVtbl; /*0x4db4e8*/
              v20 = 0; /*0x4db4f4*/
              result = v13.lpVtbl->Read(pStm, &v20, 4, 0); /*0x4db4f8*/
              if ( result < 0 ) /*0x4db4fd*/
                break; /*0x4db4fd*/
              v14 = *(_DWORD *)(aP0 + 1460); /*0x4db503*/
              if ( *(_DWORD *)(aP0 + 1468) < v14 /*0x4db525*/
                || (*(_BYTE *)(aP0 + 1465) || !v14)
                && (v15 = *(_DWORD *)(aP0 + 1472), v15 > 0)
                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(v12->Capacity)(aP0 + 1452, v14 + v15, 0) )
              {
                v16 = *(_DWORD *)(aP0 + 1468); /*0x4db52c*/
                v17 = *(_DWORD *)(aP0 + 1456); /*0x4db52f*/
                *(_DWORD *)(aP0 + 1468) = v16 + 1; /*0x4db535*/
                *(_DWORD *)(v17 + 4 * v16) = v20; /*0x4db53c*/
              }
              if ( ++v22 >= (int)pStm ) /*0x4db54e*/
                goto LABEL_28; /*0x4db54e*/
            }
          }
        }
      }
      else
      {
        while ( 1 ) /*0x4db43a*/
        {
          v7.lpVtbl = pStm->lpVtbl; /*0x4db43a*/
          v20 = 0; /*0x4db446*/
          result = v7.lpVtbl->Read(pStm, &v20, 4, 0); /*0x4db44a*/
          if ( result < 0 ) /*0x4db44f*/
            break; /*0x4db44f*/
          v8 = *(_DWORD *)(aP0 + 1424); /*0x4db455*/
          if ( *(_DWORD *)(aP0 + 1432) < v8 /*0x4db477*/
            || (*(_BYTE *)(aP0 + 1429) || !v8)
            && (v9 = *(_DWORD *)(aP0 + 1436), v9 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(v6->Capacity)(aP0 + 1416, v8 + v9, 0) )
          {
            v10 = *(_DWORD *)(aP0 + 1432); /*0x4db47e*/
            v11 = *(_DWORD *)(aP0 + 1420); /*0x4db481*/
            *(_DWORD *)(aP0 + 1432) = v10 + 1; /*0x4db487*/
            *(_DWORD *)(v11 + 4 * v10) = v20; /*0x4db48e*/
          }
          if ( ++v21 >= (int)pStm ) /*0x4db4a0*/
            goto LABEL_16; /*0x4db4a0*/
        }
      }
    }
  }
  return result; /*0x4db67c*/
}
} // namespace ra2

// 0x4DB690
namespace gamemd {
int ObjectClass::SaveToStream_Common(IPersistStream * a0, FootClass * aP1, struct IPersistStreamVtbl * a2)
{
  IStream *v3; // esi
  IPersistStream *v4; // edi
  int SizeMax; // ebx
  struct IStreamVtbl *lpVtbl; // edx
  HRESULT result; // eax
  int v8; // ebx
  struct IStreamVtbl *v9; // edx
  int v10; // ebx
  struct IPersistStreamVtbl *v11; // edi
  int v12; // edi
  IPersistStream *v13; // ebx

  v3 = (IStream *)aP1; /*0x4db696*/
  v4 = a0; /*0x4db69b*/
  SizeMax = IPersistStream::GetSizeMax((int)a0, (int)aP1, (int)a2); /*0x4db6a7*/
  if ( SizeMax < 0 ) /*0x4db6ab*/
    return SizeMax; /*0x4db6ab*/
  lpVtbl = v3->lpVtbl; /*0x4db6b7*/
  a2 = v4[358].lpVtbl; /*0x4db6c3*/
  result = lpVtbl->Write(v3, &a2, 4, 0); /*0x4db6c7*/
  if ( result < 0 ) /*0x4db6cc*/
    return result; /*0x4db6cc*/
  v8 = 0; /*0x4db6d6*/
  if ( (int)a2 <= 0 ) /*0x4db6da*/
  {
  LABEL_6:
    v9 = v3->lpVtbl; /*0x4db701*/
    a2 = v4[367].lpVtbl; /*0x4db713*/
    result = v9->Write(v3, &a2, 4, 0); /*0x4db717*/
    if ( result < 0 ) /*0x4db71c*/
      return result; /*0x4db71c*/
    v10 = 0; /*0x4db726*/
    if ( (int)a2 > 0 ) /*0x4db72a*/
    {
      do /*0x4db73d*/
      {
        result = v3->lpVtbl->Write(v3, &v4[364].lpVtbl->QueryInterface + v10, 4, 0); /*0x4db73d*/
        if ( result < 0 ) /*0x4db742*/
          return result; /*0x4db742*/
      }
      while ( ++v10 < (int)a2 ); /*0x4db73d*/
    }
    v11 = v4[413].lpVtbl; /*0x4db751*/
    aP1 = 0; /*0x4db757*/
    if ( v11 ) /*0x4db761*/
    {
      v12 = (*(int (__stdcall **)(struct IPersistStreamVtbl *, void *, IPersistStream **))v11->QueryInterface)( /*0x4db772*/
              v11,
              &unk_820270,
              &a0);
      if ( v12 >= 0 ) /*0x4db776*/
      {
        v13 = a0; /*0x4db794*/
        if ( aP1 ) /*0x4db79a*/
          aP1->lpVtbl->Release(aP1); /*0x4db79f*/
        aP1 = v13; /*0x4db7a2*/
      }
      else
      {
        if ( aP1 ) /*0x4db77e*/
          aP1->lpVtbl->Release(aP1); /*0x4db783*/
        aP1 = 0; /*0x4db786*/
      }
      if ( v12 < 0 && v12 != -2147467262 ) /*0x4db7b0*/
        WinAPI::Wrapper(v12); /*0x4db7b3*/
    }
    OleSaveToStream(aP1, v3); /*0x4db7be*/
    SizeMax = 0; /*0x4db7c4*/
    if ( aP1 ) /*0x4db7cc*/
      aP1->lpVtbl->Release(aP1); /*0x4db7d1*/
    return SizeMax; /*0x4db7d4*/
  }
  while ( 1 ) /*0x4db6ed*/
  {
    result = v3->lpVtbl->Write(v3, &v4[355].lpVtbl->QueryInterface + v8, 4, 0); /*0x4db6ed*/
    if ( result < 0 ) /*0x4db6f2*/
      return result; /*0x4db7d6*/
    if ( ++v8 >= (int)a2 ) /*0x4db6ff*/
      goto LABEL_6; /*0x4db6ff*/
  }
}
} // namespace ra2

// 0x4DE1D0
namespace gamemd {
void* * ObjectClass::FindPlacementCell(FootClass * aP0, int aP1, IUnknown ** a2, int a4, int a5, char a6)
{
  __int16 *v7; // edi
  bool IsCellVisible; // al
  int v9; // edx
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // eax
  void *v13; // eax
  int v14; // edx
  int v15; // ebp
  int v16; // eax
  char v17; // al
  int v18; // ecx
  int v19; // eax
  bool IsPassable; // al
  int v21; // eax
  int v22; // eax
  int v23; // edx
  int *PlacementCells; // eax
  _DWORD *v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v30; // [esp-2Ch] [ebp-78h]
  int TileIndex; // [esp-28h] [ebp-74h]
  int v32; // [esp-20h] [ebp-6Ch]
  int v33; // [esp-20h] [ebp-6Ch]
  char v34; // [esp-Ch] [ebp-58h]
  int v35; // [esp+18h] [ebp-34h] BYREF
  int v36; // [esp+1Ch] [ebp-30h]
  int v37; // [esp+20h] [ebp-2Ch]
  int v38; // [esp+24h] [ebp-28h] BYREF
  _DWORD v39[2]; // [esp+28h] [ebp-24h] BYREF
  int GroundHeight; // [esp+30h] [ebp-1Ch]
  _DWORD v41[2]; // [esp+34h] [ebp-18h] BYREF
  int v42; // [esp+3Ch] [ebp-10h]
  _WORD v43[6]; // [esp+40h] [ebp-Ch] BYREF

  v7 = (__int16 *)a4; /*0x4de1de*/
  v36 = (*(int (__thiscall **)(_DWORD *, int, int, _DWORD))(*a1 + 112))(a1, a4, a5, 0); /*0x4de1f4*/
  IsCellVisible = LayerClass::IsWithinUsableArea(&MapClass_Instance, v7, 1); /*0x4de1f8*/
  v9 = *v7; /*0x4de1fd*/
  IDA_LOBYTE(a4) = IsCellVisible; /*0x4de200*/
  v10 = (v7[1] << 8) + 128; /*0x4de218*/
  v39[0] = (v9 << 8) + 128; /*0x4de223*/
  v39[1] = v10; /*0x4de227*/
  GroundHeight = 0; /*0x4de22b*/
  GroundHeight = Cell::GetGroundHeight(v39); /*0x4de23e*/
  if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, v39) + 80) & 0x100) != 0 ) /*0x4de250*/
    GroundHeight += dword_8B3DF4; /*0x4de25d*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a1 + 132))(a1) + 3213) && Cell::IsPassable(v39) ) /*0x4de27d*/
    goto LABEL_36; /*0x4de284*/
  v11 = *a1; /*0x4de28c*/
  v35 = *(_DWORD *)v7; /*0x4de293*/
  v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _WORD *, _DWORD, int))(v11 + 76))(a1, v43, 0, a2); /*0x4de29b*/
  v13 = Coord::To_Cell(&MapClass_Instance, v12); /*0x4de2a4*/
  v14 = *a1; /*0x4de2a9*/
  v39[0] = v13; /*0x4de2ad*/
  v15 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(v14 + 132))(a1) + 1460); /*0x4de2b7*/
  if ( v15 == 6 ) /*0x4de2c0*/
  {
    v15 = 0; /*0x4de2c2*/
  }
  else if ( v15 == 9 && HouseClass::IonSensitivesShouldBeOffline() ) /*0x4de2d1*/
  {
    v15 = 7; /*0x4de2da*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 84))(a1) /*0x4de333*/
    || *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a1 + 132))(a1) + 3372)
    || (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 15
    && *(_BYTE *)(a1[432] + 3476)
    && !HouseClass::IonSensitivesShouldBeOffline()
    || (v16 = (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1), a6 = 0, v16 == 2) )
  {
    a6 = 1; /*0x4de335*/
  }
  v17 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 188))(a1, 0); /*0x4de33f*/
  v18 = v7[1]; /*0x4de345*/
  IDA_LOBYTE(v37) = v17; /*0x4de349*/
  v19 = *v7; /*0x4de34f*/
  v42 = 0; /*0x4de35b*/
  v41[1] = (v18 << 8) + 128; /*0x4de35f*/
  v41[0] = (v19 << 8) + 128; /*0x4de375*/
  v42 = Cell::GetGroundHeight(v41); /*0x4de388*/
  if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, v41) + 80) & 0x100) != 0 ) /*0x4de39a*/
    v42 += dword_8B3DF4; /*0x4de3a7*/
  IsPassable = Cell::IsPassable(v41); /*0x4de3b5*/
  if ( (_BYTE)a5 && v36 == 2 ) /*0x4de3cb*/
  {
    if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a1 + 132))(a1) + 3372) /*0x4de3f7*/
      || (v21 = (*(int (__thiscall **)(_DWORD *))(*a1 + 456))(a1), a4 = 1, v21 >= 0) )
    {
      a4 = 0; /*0x4de3f9*/
    }
    v34 = a4; /*0x4de40e*/
    a5 = 0; /*0x4de41b*/
    v22 = *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, v7) + 80) >> 8; /*0x4de432*/
    IDA_LOBYTE(v22) = v22 & 1; /*0x4de435*/
    v32 = v22; /*0x4de439*/
    v30 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*a1 + 132))(a1) + 1660); /*0x4de44d*/
    PlacementCells = LayerClass::Pathfinding_Find( /*0x4de450*/
                       &MapClass_Instance,
                       v23,
                       &v38,
                       v7,
                       v30,
                       -1,
                       v15,
                       v32,
                       1,
                       1,
                       0,
                       1,
                       v34,
                       1,
                       (__int16 *)&a5,
                       0,
                       0);
    goto LABEL_32; /*0x4de450*/
  }
  if ( !(_BYTE)a4 /*0x4de4b4*/
    || IsPassable
    || !(_BYTE)a5
    && (!*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a1 + 132))(a1) + 3284) || v36 == 2)
    && (v25 = CellCoord::To_CellObj(&MapClass_Instance, v7),
        !MapSeed::CheckTileMatch(
           &MapClass_Instance,
           (__int16 *)(v38 + 36),
           (__int16 *)&v35,
           v15,
           v37,
           IDA_BYTE1(v25[80]) & 1,
           0)) )
  {
    a5 = 0; /*0x4de4d7*/
    v26 = *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, v7) + 80) >> 8; /*0x4de4f4*/
    IDA_LOBYTE(v26) = v26 & 1; /*0x4de4f7*/
    v33 = v26; /*0x4de4fc*/
    TileIndex = MapClass::GetTileIndex(&MapClass_Instance, (__int16 *)(v38 + 36), v15, v37); /*0x4de50b*/
    v27 = (*(int (__thiscall **)(_DWORD *))(*a1 + 132))(a1); /*0x4de510*/
    PlacementCells = LayerClass::Pathfinding_Find( /*0x4de528*/
                       &MapClass_Instance,
                       (int)&a4,
                       &a4,
                       v7,
                       *(_DWORD *)(v27 + 1660),
                       TileIndex,
                       v15,
                       v33,
                       1,
                       1,
                       0,
                       1,
                       0,
                       1,
                       (__int16 *)&a5,
                       0,
                       0);
  LABEL_32:
    v28 = *PlacementCells; /*0x4de52d*/
    v35 = v28; /*0x4de52f*/
    goto LABEL_34; /*0x4de533*/
  }
  v28 = v35; /*0x4de535*/
  LABEL_34:
  if ( IDA___PAIR32__(IDA_HIWORD(v35), v28) != g_FootClass_Pool ) /*0x4de541*/
  {
    *a3 = v28; /*0x4de558*/
    return a3; /*0x4de55f*/
  }
  LABEL_36:
  *a3 = g_FootClass_Pool; /*0x4de562*/
  return a3; /*0x4de555*/
}
} // namespace ra2

// 0x4DE620
namespace gamemd {
void ObjectClass_IsHeightAboveThreshold_0()
{
  return ObjectClass::IsHeightAboveThreshold();
}
}
// 0x513F40
namespace gamemd {
AbstractClass * * ObjectClass::BuildTransform(unsigned int * a1, float * a2, unsigned int * a3)
{
  int v3; // ecx
  _DWORD *v4; // ecx
  int v5; // ebp
  float *v7; // eax
  double v8; // st7
  int v9; // edx
  double v10; // st7
  int v11; // eax
  double v12; // st7
  int v13; // ecx
  double v14; // st7
  int v15; // esi
  int v16; // eax
  int v17; // ecx
  float *Transform; // eax
  float *v19; // eax
  float *v20; // esi
  float v21; // [esp+4h] [ebp-154h]
  float v22; // [esp+8h] [ebp-150h]
  float v23; // [esp+8h] [ebp-150h]
  float v24; // [esp+8h] [ebp-150h]
  float v25; // [esp+18h] [ebp-140h]
  int v26; // [esp+18h] [ebp-140h]
  float v27; // [esp+1Ch] [ebp-13Ch]
  int v28; // [esp+1Ch] [ebp-13Ch]
  float v29; // [esp+20h] [ebp-138h] BYREF
  int v30; // [esp+24h] [ebp-134h]
  float v31; // [esp+28h] [ebp-130h]
  _DWORD v32[3]; // [esp+2Ch] [ebp-12Ch] BYREF
  float v33[12]; // [esp+38h] [ebp-120h] BYREF
  float v34[12]; // [esp+68h] [ebp-F0h] BYREF
  float v35[12]; // [esp+98h] [ebp-C0h] BYREF
  float v36[12]; // [esp+C8h] [ebp-90h] BYREF
  float v37[12]; // [esp+F8h] [ebp-60h] BYREF
  float v38[12]; // [esp+128h] [ebp-30h] BYREF

  v3 = a1[2]; /*0x513f50*/
  if ( fabs(*(float *)(v3 + 808)) >= 0.005 || fabs(*(float *)(v3 + 812)) >= 0.005 ) /*0x513f7f*/
  {
    if ( a3 ) /*0x5140a0*/
      *a3 = -1; /*0x5140a2*/
    Matrix3x4::Identity(v35); /*0x5140af*/
    Matrix3x4::Identity(v33); /*0x5140b8*/
    v25 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 864); /*0x5140d3*/
    v27 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 872); /*0x5140e9*/
    v8 = Math::ArcTan2(*(float *)(a1[2] + 812)); /*0x5140f6*/
    v9 = a1[2]; /*0x5140fb*/
    v31 = v8; /*0x5140fe*/
    v10 = Math::SinCos(*(float *)(v9 + 812)); /*0x51410b*/
    v11 = a1[2]; /*0x514110*/
    *(float *)&v30 = v10; /*0x514113*/
    v12 = Math::ArcTan2(*(float *)(v11 + 808)); /*0x514120*/
    v13 = a1[2]; /*0x514125*/
    v29 = v12; /*0x514128*/
    v14 = Math::SinCos(*(float *)(v13 + 808)); /*0x514135*/
    v30 = Math::RoundToInt(fabs(v14) * v25 + fabs(*(float *)&v30) * v27); /*0x51415c*/
    IDA_LODWORD(v31) = Math::RoundToInt(v31 * v27); /*0x514165*/
    v15 = Math::RoundToInt(v27 - (double)SLODWORD(v31)); /*0x51417e*/
    v28 = v15; /*0x514180*/
    IDA_LODWORD(v29) = Math::RoundToInt(v29 * v25); /*0x514189*/
    v16 = Math::RoundToInt(v25 - (double)SLODWORD(v29)); /*0x514195*/
    v17 = a1[2]; /*0x51419a*/
    v26 = v16; /*0x51419f*/
    if ( *(float *)(v17 + 812) < 0.0 ) /*0x5141b4*/
      v28 = -v15; /*0x5141b8*/
    if ( *(float *)(v17 + 808) > 0.0 ) /*0x5141cd*/
      v26 = -v16; /*0x5141d1*/
    v22 = (float)v30; /*0x5141e1*/
    Matrix3x3::ApplyCol1(v35, v22); /*0x5141e4*/
    v23 = (float)v28; /*0x5141f2*/
    Matrix3x4::Translate(v33, v23); /*0x5141f5*/
    v24 = (float)v26; /*0x514203*/
    Matrix3x3::ApplyCol0(v33, v24); /*0x514206*/
    Matrix3x3::RotateX(v33, *(float *)(a1[2] + 808)); /*0x514219*/
    Matrix3D::RotateZ(v33, *(float *)(a1[2] + 812)); /*0x51422c*/
    Transform = Turret::GetTransform((signed int)a1, v36, a3); /*0x51423b*/
    Transform::Copy(v34, Transform); /*0x514245*/
    v19 = MultiplyMatrix3x4(v37, v35, v34); /*0x514262*/
    v7 = MultiplyMatrix3x4(v38, v19, v33); /*0x514270*/
    goto LABEL_16; /*0x514270*/
  }
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 96))(a1) ) /*0x513f88*/
  {
    v7 = Turret::GetTransform((signed int)a1, v34, a3); /*0x51408d*/
  LABEL_16:
    v20 = v7; /*0x514275*/
    qmemcpy(a2, v20, 0x30u); /*0x514285*/
    return a2; /*0x514277*/
  }
  v4 = (_DWORD *)(a1[2] + 156); /*0x513f97*/
  v32[0] = *v4; /*0x513f9f*/
  v32[1] = v4[1]; /*0x513fab*/
  v32[2] = v4[2]; /*0x513fb2*/
  v5 = *((unsigned __int8 *)Coord::To_Cell(&MapClass_Instance, v32) + 284); /*0x513fc8*/
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
} // namespace ra2

// 0x5228B0
namespace gamemd {
void ObjectClass_GetTypeVt40_0()
{
  return TechnoClass::GetTypeVt40();
}
}
// 0x5228C0
namespace gamemd {
void ObjectClass_GetTypeVt41_0()
{
  return ObjectClass::GetTypeVt41();
}
}
// 0x556A20
namespace gamemd {
void * ObjectClass::checkLimbo()
{
  char *v2; // eax
  int v3; // ecx
  char *v4; // edi
  int v5; // eax

  *this = 0x80; /*0x556a29*/
  this->vtable2 = 0x80; /*0x556a2b*/
  this->vtable3 = 0x80; /*0x556a2e*/
  this->vtable2 = 0; /*0x556a31*/
  this->vtable3 = 16; /*0x556a34*/
  this->vtable4 = 0; /*0x556a3b*/
  v2 = &this->q070; /*0x556a3e*/
  v3 = 32; /*0x556a41*/
  do /*0x556a6a*/
  {
    v4 = v2 - 12; /*0x556a4c*/
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
    v5 = dword_ABCB88++; /*0x556aac*/
    *((_DWORD *)dword_ABCB7C + v5) = this; /*0x556abb*/
  }
  return this; /*0x556ac0*/
}
} // namespace ra2

// 0x5F3B80
namespace gamemd {
ObjectClass * * ObjectClass::Dtor()
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v2 = *(&this->vtable24); /*0x5f3b84*/
  *this = &(void*)(void*)&ObjectClass_vftable; /*0x5f3b87*/
  this->vtable2 = &(void*)(void*)&ObjectClass_vftable; /*0x5f3b8f*/
  this->vtable3 = &(void*)(void*)&ObjectClass_vftable; /*0x5f3b96*/
  this->vtable4 = &(void*)(void*)&ObjectClass_vftable; /*0x5f3b9d*/
  if ( v2 ) /*0x5f3ba4*/
    ObjectClass::CleanupAudioAndRefs(); /*0x5f3ba6*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(g_DiskLaserManager + 16))(&g_DiskLaserManager, &this); /*0x5f3bbf*/
  if ( v3 != -1 && v3 < g_LaserDrawConfig && v3 < --g_LaserDrawConfig ) /*0x5f3bda*/
  {
    do /*0x5f3bf2*/
    {
      ++v3; /*0x5f3be2*/
      *((_DWORD *)dword_B0F69C + v3 - 1) = *((_DWORD *)dword_B0F69C + v3); /*0x5f3be6*/
    }
    while ( v3 < g_LaserDrawConfig ); /*0x5f3bf2*/
  }
  v4 = (*(int (__thiscall **)(int *, _DWORD **))(dword_A8E360 + 16))(&dword_A8E360, &this); /*0x5f3c08*/
  if ( v4 != -1 && v4 < g_PlacementCellPool && v4 < --g_PlacementCellPool ) /*0x5f3c23*/
  {
    do /*0x5f3c3b*/
    {
      ++v4; /*0x5f3c2b*/
      *((_DWORD *)dword_A8E364 + v4 - 1) = *((_DWORD *)dword_A8E364 + v4); /*0x5f3c2f*/
    }
    while ( v4 < g_PlacementCellPool ); /*0x5f3c3b*/
  }
  v5 = (*(int (__thiscall **)(int *, _DWORD **))(AbstractClass_Array + 16))(&AbstractClass_Array, &this); /*0x5f3c51*/
  if ( v5 != -1 && v5 < g_AlphaShapePool && v5 < --g_AlphaShapePool ) /*0x5f3c6c*/
  {
    do /*0x5f3c84*/
    {
      ++v5; /*0x5f3c74*/
      *((_DWORD *)dword_B0F724 + v5 - 1) = *((_DWORD *)dword_B0F724 + v5); /*0x5f3c78*/
    }
    while ( v5 < g_AlphaShapePool ); /*0x5f3c84*/
  }
  v6 = (*(int (__thiscall **)(int *, _DWORD **))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &this); /*0x5f3c9a*/
  if ( v6 != -1 && v6 < g_AnimManager && v6 < --g_AnimManager ) /*0x5f3cb5*/
  {
    do /*0x5f3ccd*/
    {
      ++v6; /*0x5f3cbd*/
      *((_DWORD *)g_AnimPoolCount + v6 - 1) = *((_DWORD *)g_AnimPoolCount + v6); /*0x5f3cc1*/
    }
    while ( v6 < g_AnimManager ); /*0x5f3ccd*/
  }
  v7 = (*(int (__thiscall **)(int *, _DWORD **))(dword_B0F618 + 16))(&dword_B0F618, &this); /*0x5f3ce3*/
  if ( v7 != -1 && v7 < dword_B0F628 && v7 < --dword_B0F628 ) /*0x5f3cfe*/
  {
    do /*0x5f3d16*/
    {
      ++v7; /*0x5f3d06*/
      *((_DWORD *)dword_B0F61C + v7 - 1) = *((_DWORD *)dword_B0F61C + v7); /*0x5f3d0a*/
    }
    while ( v7 < dword_B0F628 ); /*0x5f3d16*/
  }
  *(&this->vtable22) = 0; /*0x5f3d1d*/
  this->isAliveFlag = 0; /*0x5f3d26*/
  AudioController::Stop(&this->vtable25); /*0x5f3d2d*/
  AudioController::Stop(&this->vtable30); /*0x5f3d37*/
  AudioFileClass::Release(&this->vtable25); /*0x5f3d3e*/
  AudioFileClass::Release(&this->vtable30); /*0x5f3d45*/
  if ( *(&this->uniqueId2) ) /*0x5f3d4a*/
  {
    TacticalClass::GetField(); /*0x5f3d56*/
    *(&this->uniqueId2) = 0; /*0x5f3d5b*/
  }
  if ( this->isInLogic ) /*0x5f3d65*/
    VectorClass::RemoveItem(); /*0x5f3d75*/
  return AbstractClass::DTOR(); /*0x5f3d81*/
}
} // namespace ra2

// 0x5F4160
namespace gamemd {
int ObjectClass::DropAsBomb_Track()
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  _DWORD v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)this; /*0x5f4168*/
  *((_BYTE *)this + 141) = 1; /*0x5f416a*/
  this->u32_8F = 1; /*0x5f4171*/
  (*(void (__stdcall **)(_DWORD))(v2 + 292))(0); /*0x5f4178*/
  RemoveTarget(); /*0x5f4184*/
  this->q08C = 0; /*0x5f418f*/
  Targeting::Readd(); /*0x5f4196*/
  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)&this->q0742))(this, 1); /*0x5f41a1*/
  if ( this ) /*0x5f41a9*/
  {
    IDA_LOBYTE(result) = (this->u32_14 & 4) != 0; /*0x5f41b5*/
    if ( (this->u32_14 & 4) != 0 ) /*0x5f41bb*/
    {
      if ( !this->u8_19D ) /*0x5f41bd*/
        WinAPI::Wrapper(-2147467261); /*0x5f41cc*/
      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)&this->q0A43) + 16))(this->u8_19D) ) /*0x5f41da*/
      {
        if ( !this->u8_19D ) /*0x5f4213*/
          WinAPI::Wrapper(-2147467261); /*0x5f4222*/
        return (*(int (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)&this->q0A43) + 156))(this->u8_19D, 0); /*0x5f4232*/
      }
      else
      {
        v5[0] = this->q09C; /*0x5f41ed*/
        v4 = *(_DWORD *)this; /*0x5f41f1*/
        v5[1] = this->q280; /*0x5f41f6*/
        v5[2] = this->q0A4; /*0x5f4204*/
        return (v5); /*0x5f4208*/
      }
    }
  }
  return result; /*0x5f420e*/
}
} // namespace ra2

// 0x5F4870
namespace gamemd {
int ObjectClass::GetBoundsRect()
{
  _DWORD *v2; // eax
  int v3; // eax
  __int16 *v4; // esi
  unsigned int v6; // ebp
  int *FoundationSize; // eax
  int v8; // edi
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  int *v12; // eax
  int v13; // ecx
  int v14; // ebp
  int v15; // esi
  int v16; // edx
  int v17; // ebp
  int v18; // eax
  int v19; // esi
  int v20; // edi
  int *v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // edi
  int v25; // eax
  int v26; // ecx
  int v27; // edi
  int v31[2]; // [esp+14h] [ebp-38h] BYREF
  int v32; // [esp+1Ch] [ebp-30h] BYREF
  int v33; // [esp+20h] [ebp-2Ch]
  int v34; // [esp+24h] [ebp-28h]
  int v35; // [esp+28h] [ebp-24h]
  int v36; // [esp+30h] [ebp-1Ch]
  _DWORD v38[4]; // [esp+3Ch] [ebp-10h] BYREF
  _DWORD *v39; // [esp+50h] [ebp+4h]

  v2 = (_DWORD *)(*(int (__stdcall **)(int *))(*(_DWORD *)&this->q0442))(&v32); /*0x5f4887*/
  Coord::To_Screen(g_TacticalClass_Instance, v2, v31); /*0x5f4894*/
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->ptr_346))(this); /*0x5f489d*/
  v4 = (__int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 156))(v3); /*0x5f48ad*/
  if ( !v4 ) /*0x5f48b1*/
  {
    *v39 = dword_AC1350; /*0x5f48c1*/
    v39[1] = dword_AC1354; /*0x5f48c9*/
    v39[2] = dword_AC1358; /*0x5f48d2*/
    v39[3] = dword_AC135C; /*0x5f48db*/
    return (int)v39; /*0x5f48e1*/
  }
  v6 = 0; /*0x5f48ea*/
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q0104))(this) == 6 && this->q520->FirestormWall ) /*0x5f48fa*/
    v6 = 15; /*0x5f4904*/
  FoundationSize = Building::GetFoundationSize(&v32, v6); /*0x5f4911*/
  v8 = *FoundationSize; /*0x5f4916*/
  v36 = FoundationSize[1]; /*0x5f491b*/
  v9 = FoundationSize[2]; /*0x5f4921*/
  v10 = FoundationSize[3]; /*0x5f4924*/
  v11 = v4[3]; /*0x5f4927*/
  v10 = v10; /*0x5f492b*/
  v12 = Building::GetFoundationSize(v38, v6 + v11 / 2); /*0x5f493c*/
  v13 = *v12; /*0x5f4945*/
  v33 = v12[1]; /*0x5f494a*/
  v34 = v12[2]; /*0x5f4951*/
  v14 = v4[1]; /*0x5f4955*/
  v15 = v4[2]; /*0x5f4959*/
  v16 = v12[3]; /*0x5f495d*/
  v14 = v14; /*0x5f4960*/
  v35 = v16; /*0x5f4964*/
  v15 = v15; /*0x5f4968*/
  if ( v9 <= 0 || (v17 = v10, v10 <= 0) ) /*0x5f4974*/
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
    v18 = v36; /*0x5f4982*/
    if ( v8 > v13 ) /*0x5f4988*/
    {
      v9 += v8 - v13; /*0x5f498e*/
      v8 = v13; /*0x5f4990*/
    }
    if ( v36 > v33 ) /*0x5f4998*/
    {
      v17 = v36 - v33 + v10; /*0x5f499c*/
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
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q0104))(this) != 6 || !this->q520->BibShape ) /*0x5f4a17*/
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
  v27 = v31[1] + v20 - v15 / 2; /*0x5f4acd*/
  *v39 = v31[0] + v19 - v14 / 2; /*0x5f4af6*/
  v39[1] = v27; /*0x5f4af8*/
  v39[2] = v9; /*0x5f4afb*/
  v39[3] = v26; /*0x5f4b01*/
  return (int)v39; /*0x5f48bf*/
}
} // namespace ra2

// 0x5F4D30
namespace gamemd {
AbstractClass * * ObjectClass::Undeploy()
{
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // edi
  int result; // eax
  int v6; // [esp+10h] [ebp-20h] BYREF
  int v7; // [esp+14h] [ebp-1Ch]
  _DWORD v8[3]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v9[12]; // [esp+24h] [ebp-Ch] BYREF

  if ( !g_WTFMode || *((_BYTE *)this + 129) ) /*0x5f4d45*/
  {
    IDA_LOBYTE(result) = 0; /*0x5f4eb7*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->hasParachute6))(this); /*0x5f4d55*/
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)&this->q0580))(this, 1); /*0x5f4d61*/
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)&this->isOnMap2))(this, 0); /*0x5f4d6d*/
    RemoveTarget(); /*0x5f4d79*/
    AudioController::Stop((_DWORD *)&this->vtable25); /*0x5f4d81*/
    AudioFile::Stop((_DWORD *)&this->vtable30); /*0x5f4d89*/
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag6))(this) /*0x5f4dcb*/
      && *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag6))(this) + 564)
      && (!g_GameMode_Current[0]
       || g_GameMode_Current[0] == 5
       || (*(int (__stdcall **)(char *))(this->vtable2 + 16))((char *)this + 4) != -2) )
    {
      VectorClass::RemoveItem(&g_GameConfigManager, (int)this); /*0x5f4dd3*/
    }
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag6))(this) ) /*0x5f4ddc*/
    {
      if ( *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag6))(this) + 172) ) /*0x5f4df4*/
      {
        v2 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)&this->referenceCount2))(this, v9); /*0x5f4e0b*/
        v8[0] = *v2; /*0x5f4e10*/
        v8[1] = v2[1]; /*0x5f4e22*/
        v8[2] = v2[2]; /*0x5f4e2e*/
        Coord::To_Screen(g_TacticalClass_Instance, v8, &v6); /*0x5f4e32*/
        v3 = *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag6))(this) + 172); /*0x5f4e41*/
        v4 = v4 - *(__int16 *)(v3 + 4) / 2; /*0x5f4e6c*/
        v6 -= *(__int16 *)(v3 + 2) / 2; /*0x5f4e70*/
        v4 = v4; /*0x5f4e74*/
        Cell::CreateCrater(v6, v4, *(__int16 *)(v3 + 2), *(__int16 *)(v3 + 4), 1); /*0x5f4e8f*/
      }
    }
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->estimatedHealth4))(this); /*0x5f4e98*/
    this->inLimbo = 1; /*0x5f4e9e*/
    this->needsRedraw = 0; /*0x5f4ea5*/
    IDA_LOBYTE(result) = 1; /*0x5f4eac*/
  }
  return result; /*0x5f4eae*/
}
} // namespace ra2

// 0x5F4EC0
namespace gamemd {
AbstractClass * * ObjectClass::Deploy()
{
  int result; // eax
  int v3; // ebx
  void *v4; // eax
  int v5; // eax
  int v6; // ebx
  _DWORD *v8; // eax
  char *v9; // edx
  int v10; // eax
  int v11; // edi
  int v12; // ebp
  void *v13; // eax
  char *v14; // eax
  int v15; // eax
  int v16; // edx
  char v17; // cl
  char v18; // cl
  int v19; // eax
  int v20; // [esp+2Ch] [ebp-2Ch] BYREF
  char *v21; // [esp+30h] [ebp-28h]
  int v22; // [esp+34h] [ebp-24h] BYREF
  int v23; // [esp+38h] [ebp-20h]
  int v24; // [esp+3Ch] [ebp-1Ch]
  _DWORD v25[3]; // [esp+40h] [ebp-18h] BYREF
  char v26[12]; // [esp+4Ch] [ebp-Ch] BYREF
  int *v27; // [esp+5Ch] [ebp+4h]
  __int16 v28; // [esp+5Ch] [ebp+4h]

  result = *v27; /*0x5f4ed3*/
  if ( *v27 == dword_AC1380 ) /*0x5f4ed7*/
  {
    result = dword_AC1384; /*0x5f4edc*/
    if ( v27[1] == dword_AC1384 ) /*0x5f4ee3*/
    {
      result = dword_AC1388; /*0x5f4ee8*/
      if ( v27[2] == dword_AC1388 ) /*0x5f4eef*/
        goto LABEL_41; /*0x5f4eef*/
    }
  }
  if ( !g_WTFMode ) /*0x5f4efc*/
    goto LABEL_41; /*0x5f4efc*/
  if ( !this->inLimbo ) /*0x5f4f02*/
    goto LABEL_41; /*0x5f4f02*/
  if ( this->isOnMap ) /*0x5f4f10*/
    goto LABEL_41; /*0x5f4f10*/
  if ( !g_IKnowWhatImDoing ) /*0x5f4f22*/
  {
    v3 = *(_DWORD *)this; /*0x5f4f24*/
    v4 = Coord::To_Cell(&MapClass_Instance, v27); /*0x5f4f34*/
    result = (*(int (__thiscall **)(void *, void *, int, int, _DWORD, _DWORD))(v3 + 428))(this, v4, -1, -1, 0, 0); /*0x5f4f3c*/
    if ( result ) /*0x5f4f44*/
      goto LABEL_41; /*0x5f4f44*/
  }
  v5 = *(_DWORD *)this; /*0x5f4f4a*/
  this->inLimbo = 0; /*0x5f4f4e*/
  this->needsRedraw = 0; /*0x5f4f55*/
  v6 = (*(int (__thiscall **)(void *))(v5 + 136))(this); /*0x5f4f64*/
  v22 = *v27; /*0x5f4f6a*/
  v23 = v27[1]; /*0x5f4f71*/
  v24 = v27[2]; /*0x5f4f78*/
  if ( v6 ) /*0x5f4f7c*/
  {
    v7 = (int *)(*(int (__thiscall **)(int, _DWORD *, int *))(v6->q06C)(v6, v25, v27); /*0x5f4f88*/
    v22 = *v7; /*0x5f4f8d*/
    v23 = v7[1]; /*0x5f4f94*/
    v24 = v7[2]; /*0x5f4f9b*/
  }
  (*(void (__thiscall **)(void *, int *))(*(_DWORD *)&this->q0AC6))(this, &v22); /*0x5f4fa8*/
  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)&this->isOnMap2))(this, 1); /*0x5f4fb4*/
  if ( !(_BYTE)result ) /*0x5f4fbc*/
  {
    this->inLimbo = 1; /*0x5f521c*/
  LABEL_41:
    IDA_LOBYTE(result) = 0; /*0x5f5223*/
    return result; /*0x5f5226*/
  }
  if ( this->isAliveFlag )
  {
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->nextObject0))(this) != -1 ) /*0x5f4fda*/
      Targeting::Readd(); /*0x5f4fe2*/
    if ( v6 ) /*0x5f4fe9*/
    {
      if ( v6->q234 /*0x5f5036*/
        && ((*(int (__thiscall **)(void *))(*(_DWORD *)&this->uniqueId4))(this) != 36
         || (*(int (__thiscall **)(void *))(*(_DWORD *)&this->uniqueId4))(this) == 36 && v6->qAC4)
        && (!g_GameMode_Current[0]
         || g_GameMode_Current[0] == 5
         || (*(int (__stdcall **)(char *))(this->vtable2 + 16))((char *)this + 4) != -2) )
      {
        ObjectClass::SetDeployState(0); /*0x5f5040*/
      }
      if ( v6->q0AC ) /*0x5f5045*/
      {
        v8 = (_DWORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)&this->referenceCount2))(this, v26); /*0x5f505c*/
        v25[0] = *v8; /*0x5f5061*/
        v25[1] = v8[1]; /*0x5f5073*/
        v25[2] = v8[2]; /*0x5f507f*/
        Coord::To_Screen(g_TacticalClass_Instance, v25, &v20); /*0x5f5083*/
        v9 = (char *)g_TacticalClass_Instance[45].lpVtbl + (unsigned int)v21; /*0x5f50a1*/
        v10 = *(_DWORD *)this; /*0x5f50a3*/
        v20 += (int)g_TacticalClass_Instance[44].lpVtbl; /*0x5f50a9*/
        v21 = v9; /*0x5f50ad*/
        v11 = *(_DWORD *)((*(int (__thiscall **)(void *))(v10 + 136))(this) + 172); /*0x5f50b7*/
        v12 = (int)&v21[-(*(__int16 *)(v11 + 4) / 2)]; /*0x5f50dd*/
        v20 -= *(__int16 *)(v11 + 2) / 2; /*0x5f50df*/
        v21 = (char *)v12; /*0x5f50e3*/
        v13 = RA2_OPNEW(0x40u); /*0x5f50e7*/
        if ( v13 ) /*0x5f50f1*/
          AlphaShapeClass::CTOR((int)v13, (int)this, v20, (int)v21); /*0x5f5100*/
        if ( !g_IKnowWhatImDoing ) /*0x5f510c*/
          Cell::CreateCrater( /*0x5f5146*/
            v20 - (unsigned int)g_TacticalClass_Instance[44].lpVtbl,
            v21 - (char *)g_TacticalClass_Instance[45].lpVtbl,
            *(__int16 *)(v11 + 2),
            *(__int16 *)(v11 + 4),
            1);
      }
    }
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag6))(this); /*0x5f514f*/
    if ( result->u8_23A )
    {
      v14 = (char *)RA2_OPNEW(0x210u); /*0x5f5168*/
      result = v14 ? (int)ObjectClass::checkLimbo(v14) : 0;
      this->lineTrailer = result; /*0x5f5181*/
      if ( result ) /*0x5f5187*/
      {
        v28 = *(_WORD *)((char *)&g_RulesClass_Instance[1].DMisl[7] + 3); /*0x5f519e*/
        if ( (_BYTE)v28 || IDA___PAIR16__(IDA_HIBYTE(v28), 0) != IDA_BYTE1(g_RulesClass_Instance[1].DMisl[8]) ) /*0x5f51b4*/
        {
          v18 = IDA_BYTE1(g_RulesClass_Instance[1].DMisl[8]); /*0x5f51e2*/
          *(_WORD *)result = *(_WORD *)((char *)&g_RulesClass_Instance[1].DMisl[7] + 3); /*0x5f51e5*/
          result->u8_2 = v18; /*0x5f51e8*/
        }
        else
        {
          v15 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag6))(this); /*0x5f51be*/
          v16 = this->lineTrailer; /*0x5f51c4*/
          v17 = *(_BYTE *)(v15 + 573); /*0x5f51d4*/
          *(_WORD *)v16 = *(_WORD *)(v15 + 571); /*0x5f51d7*/
          v16->u8_2 = v17; /*0x5f51da*/
        }
        v19 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->attachedTag6))(this); /*0x5f51ef*/
        result = ObjectClass::updateMissionState(*((_DWORD **)&this->uniqueId2), *(_DWORD *)(v19 + 576)); /*0x5f5202*/
        *(_DWORD *)(this->lineTrailer + 4) = this; /*0x5f520d*/
      }
    }
  }
  IDA_LOBYTE(result) = 1; /*0x5f5210*/
  return result; /*0x5f5212*/
}
} // namespace ra2

// 0x5F5280
namespace gamemd {
AbstractClass * * ObjectClass::Destroy2()
{
  _DWORD *v2; // ecx
  void *v3; // edi
  bool v4; // bl
  int v5; // edx
  int result; // eax
  char v7; // [esp+Ch] [ebp+4h]

  v2 = (_DWORD *)this->lineTrailer; /*0x5f5284*/
  if ( v2 ) /*0x5f528c*/
  {
    TacticalClass::GetField(v2); /*0x5f528e*/
    this->lineTrailer = 0; /*0x5f5293*/
  }
  v3 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)&this->nextArrayIndex0))(this); /*0x5f52a6*/
  v4 = 0; /*0x5f52ac*/
  if ( v7 ) /*0x5f52b0*/
    goto LABEL_10; /*0x5f52b0*/
  if ( this && (this->abstractFlags & 1) != 0 ) /*0x5f52c0*/
    v4 = (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)&this->q1408))(this) != 0; /*0x5f52d0*/
  if ( !v3 || !(unsigned __int8)House::IsHumanPlayer(v3) && !v4 ) /*0x5f52e3*/
  LABEL_10:
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->hasParachute6))(this); /*0x5f52e9*/
  if ( (void *)MapClass::GetScrollMode((int)&MapClass_Instance) == this ) /*0x5f52fd*/
    MapClass::SetScrollMode((int)&MapClass_Instance, 0); /*0x5f5306*/
  IDA_LOBYTE(v5) = v7; /*0x5f530b*/
  AbstractClass::AnnounceExpiredPointer(v5); /*0x5f5311*/
  return result; /*0x5f5316*/
}
} // namespace ra2

// 0x5F5850
namespace gamemd {
int ObjectClass::UpdateProductionDisplay()
{
  int result; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // edx
  int v6; // [esp+Ch] [ebp+4h] BYREF

  if ( !this->inLimbo ) /*0x5f5854*/
  {
    v3 = v6; /*0x5f5862*/
    if ( v6 == 2 ) /*0x5f5869*/
    {
      if ( !this->needsRedraw && this->isOnMap ) /*0x5f5879*/
      {
        result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->spawnStatus8))(this); /*0x5f5886*/
        IDA_LOBYTE(result) = 1; /*0x5f588d*/
        return result; /*0x5f5890*/
      }
    }
    else
    {
      if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->uniqueId4))(this) != 6 /*0x5f58b2*/
        || (result = this->q520, !*(_DWORD *)(result + 3672))
        || v3 )
      {
        result = (int)AbstractClass::IsTechnoType(this); /*0x5f58b6*/
        result = result; /*0x5f58bb*/
        if ( result ) /*0x5f58bf*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)result + 704))(result); /*0x5f58c5*/
          (*(void (__thiscall **)(int))(*(_DWORD *)result + 56))(result); /*0x5f58cf*/
          result = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)&this->q0B00))(this, &v6); /*0x5f58db*/
        }
      }
      if ( (v3 == 1 || v3 == 3) && !this->isOnMap ) /*0x5f58ec*/
      {
        v5 = *(_DWORD *)this; /*0x5f58f3*/
        this->isOnMap = 1; /*0x5f58f7*/
        result = (*(int (__thiscall **)(void *))(v5 + 308))(this); /*0x5f58fb*/
        IDA_LOBYTE(result) = 1; /*0x5f5902*/
        return result; /*0x5f5905*/
      }
      if ( !v3 && this->isOnMap ) /*0x5f590c*/
      {
        this->isOnMap = 0; /*0x5f5913*/
        IDA_LOBYTE(result) = 1; /*0x5f5917*/
        return result; /*0x5f591a*/
      }
    }
  }
  IDA_LOBYTE(result) = 0; /*0x5f591e*/
  return result; /*0x5f588c*/
}
} // namespace ra2

// 0x5F6BD0
namespace gamemd {
int ObjectClass::GetBoundingSize()
{
  int v2; // edi
  _BYTE result[12]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v5[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)&this->q0442))(this, result); /*0x5f6be8*/
  return *(_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)&this->q0442))(this, v5) + *(_DWORD *)(v2 + 4); /*0x5f6bfe*/
}
} // namespace ra2

// 0x652E50
namespace gamemd {
int ObjectClass::resetObjectState(SidebarClass * aP1)
{
  int v3; // eax

  v3 = *this; /*0x652e5e*/
  if ( aP1 ) /*0x652e60*/
  {
    this->COMStub_Ret176_12(dword_B04978); /*0x652e62*/
    return (dword_B04910); /*0x652e6e*/
  }
  else
  {
    (*(void (__stdcall **)(_DWORD *))(v3 + 52))(dword_B04978); /*0x652e75*/
    return (dword_B04910); /*0x652e81*/
  }
}
} // namespace ra2

// 0x6A5BF0
namespace gamemd {
ConvertClass * * ObjectClass::CleanupSidebarResources()
{
  int *v0; // esi

  PowerClass::checkLowPower(); /*0x6a5bf2*/
  if ( byte_B0B488 ) /*0x6a5c00*/
  {
    RA2_OPDEL(dword_B0B468); /*0x6a5c08*/
    byte_B0B488 = 0; /*0x6a5c10*/
  }
  if ( byte_B0B489 ) /*0x6a5c1c*/
  {
    RA2_OPDEL(dword_B0B46C); /*0x6a5c25*/
    byte_B0B489 = 0; /*0x6a5c2d*/
  }
  if ( byte_B0B48A ) /*0x6a5c39*/
  {
    RA2_OPDEL(dword_B0B470); /*0x6a5c42*/
    byte_B0B48A = 0; /*0x6a5c4a*/
  }
  if ( byte_B0B48B ) /*0x6a5c56*/
  {
    RA2_OPDEL(dword_B0B474); /*0x6a5c5e*/
    byte_B0B48B = 0; /*0x6a5c66*/
  }
  if ( byte_B0B48C ) /*0x6a5c72*/
  {
    RA2_OPDEL(dword_B0B478); /*0x6a5c7b*/
    byte_B0B48C = 0; /*0x6a5c83*/
  }
  if ( byte_B0B48D ) /*0x6a5c8f*/
  {
    RA2_OPDEL(dword_B0B47C); /*0x6a5c98*/
    byte_B0B48D = 0; /*0x6a5ca0*/
  }
  if ( byte_B0B48E ) /*0x6a5cac*/
  {
    RA2_OPDEL(dword_B0B480); /*0x6a5cb4*/
    byte_B0B48E = 0; /*0x6a5cbc*/
  }
  if ( byte_B0B48F ) /*0x6a5cc8*/
  {
    RA2_OPDEL(dword_B0B484); /*0x6a5cd1*/
    byte_B0B48F = 0; /*0x6a5cd9*/
  }
  if ( byte_B0B4CC ) /*0x6a5ce5*/
  {
    RA2_OPDEL(dword_B0B490); /*0x6a5cee*/
    byte_B0B4CC = 0; /*0x6a5cf6*/
  }
  if ( byte_B0B4CD ) /*0x6a5d02*/
  {
    RA2_OPDEL(dword_B0B494); /*0x6a5d0a*/
    byte_B0B4CD = 0; /*0x6a5d12*/
  }
  if ( byte_B0B4CE ) /*0x6a5d1e*/
  {
    RA2_OPDEL(dword_B0B498); /*0x6a5d27*/
    byte_B0B4CE = 0; /*0x6a5d2f*/
  }
  if ( byte_B0B4CF ) /*0x6a5d3b*/
  {
    RA2_OPDEL(dword_B0B49C); /*0x6a5d44*/
    byte_B0B4CF = 0; /*0x6a5d4c*/
  }
  if ( byte_B0B4D1 ) /*0x6a5d58*/
  {
    RA2_OPDEL(dword_B0B4A4); /*0x6a5d60*/
    byte_B0B4D1 = 0; /*0x6a5d68*/
  }
  if ( byte_B0B4D2 ) /*0x6a5d74*/
  {
    RA2_OPDEL(dword_B0B4A8); /*0x6a5d7d*/
    byte_B0B4D2 = 0; /*0x6a5d85*/
  }
  if ( byte_B0B4D3 ) /*0x6a5d91*/
  {
    RA2_OPDEL(dword_B0B4AC); /*0x6a5d9a*/
    byte_B0B4D3 = 0; /*0x6a5da2*/
  }
  if ( byte_B0B4D4 ) /*0x6a5dae*/
  {
    RA2_OPDEL(dword_B0B4B0); /*0x6a5db6*/
    byte_B0B4D4 = 0; /*0x6a5dbe*/
  }
  if ( byte_B0B4D5 ) /*0x6a5dca*/
  {
    RA2_OPDEL(dword_B0B4B4); /*0x6a5dd3*/
    byte_B0B4D5 = 0; /*0x6a5ddb*/
  }
  if ( byte_B0B4D6 ) /*0x6a5de7*/
  {
    RA2_OPDEL(dword_B0B4B8); /*0x6a5df0*/
    byte_B0B4D6 = 0; /*0x6a5df8*/
  }
  if ( byte_B0B4D7 ) /*0x6a5e04*/
  {
    RA2_OPDEL(dword_B0B4BC); /*0x6a5e0c*/
    byte_B0B4D7 = 0; /*0x6a5e14*/
  }
  if ( byte_B0B4D8 ) /*0x6a5e20*/
  {
    RA2_OPDEL(dword_B0B4C0); /*0x6a5e29*/
    byte_B0B4D8 = 0; /*0x6a5e31*/
  }
  if ( byte_B0B4D9 ) /*0x6a5e3d*/
  {
    RA2_OPDEL(dword_B0B4C4); /*0x6a5e46*/
    byte_B0B4D9 = 0; /*0x6a5e4e*/
  }
  if ( byte_B0B4D0 ) /*0x6a5e5a*/
  {
    RA2_OPDEL(dword_B0B4A0); /*0x6a5e62*/
    byte_B0B4D0 = 0; /*0x6a5e6a*/
  }
  if ( byte_B0B4DA ) /*0x6a5e76*/
  {
    RA2_OPDEL(dword_B0B4C8); /*0x6a5e7f*/
    byte_B0B4DA = 0; /*0x6a5e87*/
  }
  ScenarioClass::FreeConfig((int)dword_B07DF8); /*0x6a5e92*/
  ScenarioClass::FreeConfig((int)dword_B0B3A0); /*0x6a5e9c*/
  v0 = (int *)&unk_B07C48; /*0x6a5ea1*/
  do /*0x6a5eb6*/
  {
    ScenarioClass::FreeConfig((int)v0); /*0x6a5ea8*/
    v0 += 24; /*0x6a5ead*/
  }
  while ( (int)v0 < (int)&dword_B07DC8 ); /*0x6a5eb6*/
  ScenarioClass::FreeConfig((int)byte_B0B328); /*0x6a5ebd*/
  ScenarioClass::FreeConfig((int)g_SidebarFlag); /*0x6a5ec7*/
}
} // namespace ra2

// 0x6A7D70
namespace gamemd {
unsigned char ObjectClass::ToggleSidebarDisplay(unsigned int * a0, TabClass * aP1, int a3, int _20, SidebarClass * a4, char a6)
{
  char result; // al
  char v8; // cl
  bool v9; // bl
  int *v10; // edi
  _BYTE *v11; // edi
  int *v12; // ebx
  int v13; // ebp
  int v14; // eax
  int v15; // edi
  int v16; // ebx
  int *v17; // edi
  int v18; // edi
  int v19; // ebp

  result = *((_BYTE *)a1 + 21413); /*0x6a7d79*/
  if ( (g_NetworkEventPending & 2) != 0 && g_GameMode_Current[0] && g_GameMode_Current[0] != 5 ) /*0x6a7d91*/
    return result; /*0x6a7d91*/
  if ( a5 == -1 ) /*0x6a7d9e*/
    *((_BYTE *)a1 + 21413) = result == 0; /*0x6a7db3*/
  else
    *((_BYTE *)a1 + 21413) = a5 == 1; /*0x6a7da6*/
  v8 = *((_BYTE *)a1 + 21413); /*0x6a7db9*/
  v9 = v8 != result; /*0x6a7dc2*/
  if ( v8 == result ) /*0x6a7dcb*/
    return v9; /*0x6a8078*/
  ObjectClass::resetObjectState(v8); /*0x6a7dd6*/
  if ( !*((_BYTE *)a1 + 21413) ) /*0x6a7de3*/
  {
    AsyncIO::Shutdown(); /*0x6a7fc3*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *, int, int, int))(*a1 + 52))(a1, dword_B07DF8, a4, a3, a2); /*0x6a7fd1*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 52))(a1, dword_B0B3A0); /*0x6a7fdd*/
    (*(void (__thiscall **)(_DWORD *, int *))(*a1 + 52))(a1, &dword_B07E58); /*0x6a7fe9*/
    v17 = (int *)&unk_B07C48; /*0x6a7fec*/
    do /*0x6a8002*/
    {
      (*(void (__thiscall **)(_DWORD *, int *))(*a1 + 52))(a1, v17); /*0x6a7ff6*/
      v17 += 24; /*0x6a7ff9*/
    }
    while ( (int)v17 < (int)&dword_B07DC8 ); /*0x6a8002*/
    (*(void (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 52))(a1, byte_B0B328); /*0x6a800d*/
    (*(void (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 52))(a1, g_SidebarFlag); /*0x6a8019*/
    v18 = 0; /*0x6a8029*/
    v19 = (int)&a1[997 * a1[5351] + 1361]; /*0x6a8031*/
    do /*0x6a805f*/
    {
      Tactical::SelectObject(&MapClass_Instance, 56 * (v18 + 60 * *(_DWORD *)(v19 + 56)) + 11566720); /*0x6a8056*/
      ++v18; /*0x6a805b*/
    }
    while ( v18 < 60 ); /*0x6a805f*/
    (*(void (__thiscall **)(_DWORD *, int *))(*a1 + 52))(a1, dword_B04A10); /*0x6a806a*/
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 56))(a1, 2); /*0x6a8073*/
    return v9; /*0x6a8073*/
  }
  (*(void (__thiscall **)(_DWORD *, int, int, int))(*a1 + 136))(a1, a4, a3, a2); /*0x6a7ded*/
  *((_BYTE *)a1 + 21414) = 1; /*0x6a7df8*/
  Hash::Reset(dword_B07DF8); /*0x6a7dff*/
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 48))(a1, dword_B07DF8); /*0x6a7e0d*/
  Hash::Reset(dword_B0B3A0); /*0x6a7e15*/
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 48))(a1, dword_B0B3A0); /*0x6a7e23*/
  v10 = (int *)&unk_B07C48; /*0x6a7e26*/
  do /*0x6a7e47*/
  {
    Hash::Reset(v10); /*0x6a7e2d*/
    *((_BYTE *)v10 + 44) = 0; /*0x6a7e32*/
    (*(void (__thiscall **)(_DWORD *, int *))(*a1 + 48))(a1, v10); /*0x6a7e3b*/
    v10 += 24; /*0x6a7e3e*/
  }
  while ( (int)v10 < (int)&dword_B07DC8 ); /*0x6a7e47*/
  Hash::Reset(byte_B0B328); /*0x6a7e4e*/
  Hash::InsertOrdered(&MapClass_Instance, (int)byte_B0B328); /*0x6a7e5d*/
  Hash::Reset(g_SidebarFlag); /*0x6a7e67*/
  Hash::InsertOrdered(&MapClass_Instance, (int)g_SidebarFlag); /*0x6a7e76*/
  Hash::Reset(&dword_B07E58); /*0x6a7e80*/
  (*(void (__thiscall **)(_DWORD *, int *))(*a1 + 48))(a1, &dword_B07E58); /*0x6a7e8e*/
  Hash::Reset(dword_B04A10); /*0x6a7e96*/
  (*(void (__thiscall **)(_DWORD *, int *))(*a1 + 48))(a1, dword_B04A10); /*0x6a7ea4*/
  v11 = &unk_B07C48; /*0x6a7ea7*/
  v12 = a1 + 1382; /*0x6a7eac*/
  do /*0x6a7ed5*/
  {
    *(v12 - 4) = 0; /*0x6a7eb2*/
    if ( *v12 > 0 ) /*0x6a7ebd*/
      DialogControl::Hide(v11); /*0x6a7ec1*/
    v11 += 96; /*0x6a7ec6*/
    v12 += 997; /*0x6a7ec9*/
  }
  while ( (int)v11 < (int)&dword_B07DC8 ); /*0x6a7ed5*/
  GadgetClass::Show((_BYTE *)&unk_B07C48 + 96 * a1[5351]); /*0x6a7ee9*/
  v13 = (int)&a1[997 * a1[5351] + 1361]; /*0x6a7f01*/
  IDA_LOBYTE(a1[997 * a1[5351] + 1368]) = 1; /*0x6a7f08*/
  v14 = 26; /*0x6a7f1a*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) ) /*0x6a7f12*/
    v14 = 18; /*0x6a7f21*/
  v15 = 0; /*0x6a7f34*/
  v16 = 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v14 + g_DSurface_SidebarBounds - 7) / 50); /*0x6a7f54*/
  if ( v16 > 0 ) /*0x6a7f58*/
  {
    do /*0x6a7f9d*/
    {
      Hash::Reset((_DWORD *)(56 * (v15 + 60 * *(_DWORD *)(v13 + 56)) + 11566720)); /*0x6a7f72*/
      Hash::InsertOrdered(&MapClass_Instance, 56 * (v15 + 60 * *(_DWORD *)(v13 + 56)) + 11566720); /*0x6a7f95*/
      ++v15; /*0x6a7f9a*/
    }
    while ( v15 < v16 ); /*0x6a7f9d*/
  }
  g_CameoRenderFlag = 1; /*0x6a7fa1*/
  Tactical::UpdateUIVisibility(a1); /*0x6a7fa8*/
  (*(void (__thiscall **)(_DWORD *, int))(*a1 + 56))(a1, 2); /*0x6a7fb7*/
  return a6; /*0x6a7fbf*/
}
} // namespace ra2

// 0x718260
namespace gamemd {
void* ObjectClass::FindPlacementPosition(int a2, int a3, int a4, int a5)
{
  int *v6; // esi
  int v7; // ebx
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // esi
  int v15; // eax
  int TileIndex; // eax
  int v17; // edx
  void *v18; // eax
  _DWORD *v19; // eax
  int v20; // esi
  int v21; // edi
  int v22; // ebx
  void *v23; // eax
  _DWORD *v24; // eax
  int v25; // esi
  _DWORD *v26; // edx
  int v27; // ecx
  int v28; // eax
  _DWORD *v30; // esi
  _DWORD *v31; // ecx
  _DWORD *v32; // eax
  int v33; // eax
  int *v34; // eax
  int *v35; // ebp
  int v36; // edx
  int v38; // [esp+14h] [ebp-24h] BYREF
  int v39; // [esp+18h] [ebp-20h] BYREF
  int v40; // [esp+1Ch] [ebp-1Ch] BYREF
  __int16 *v41; // [esp+20h] [ebp-18h]
  int v42; // [esp+24h] [ebp-14h] BYREF
  int v43; // [esp+28h] [ebp-10h] BYREF
  int v44; // [esp+2Ch] [ebp-Ch] BYREF
  int v45; // [esp+30h] [ebp-8h]
  int v46; // [esp+34h] [ebp-4h]

  if ( (_BYTE)a5 ) /*0x71826f*/
  {
    v30 = this + 10; /*0x718664*/
    if ( *(this + 10) == dword_B0EBF8 && *(this + 11) == dword_B0EBFC && *(this + 12) == dword_B0EC00 ) /*0x718681*/
    {
      v31 = (_DWORD *)*(this + 3); /*0x71868b*/
      v44 = v31[39]; /*0x71869a*/
      v45 = v31[40]; /*0x7186a1*/
      v46 = v31[41]; /*0x7186a8*/
      (*(void (__stdcall **)(int *))(*v31 + 244))(&v44); /*0x7186b3*/
    }
    else
    {
      (*(void (__stdcall **)(_DWORD *))(*(_DWORD *)*(this + 3) + 244))(this + 10); /*0x718689*/
    }
    v32 = (_DWORD *)(*(this + 3) + 648); /*0x7186be*/
    *v30 = *v32; /*0x7186c6*/
    *(this + 11) = v32[1]; /*0x7186cb*/
    *(this + 12) = v32[2]; /*0x7186d1*/
    *(this + 12) = this->Cell_A.GetGroundHeight(); /*0x7186e4*/
    if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, this + 10) + 80) & 0x100) == 0 /*0x7186fa*/
      || (v33 = *(this + 3), *(_BYTE *)(v33 + 140)) )
    {
      *(_BYTE *)(*(this + 3) + 140) = 0; /*0x718719*/
    }
    else
    {
      *(_BYTE *)(v33 + 140) = 1; /*0x718704*/
      *(this + 12) += dword_B0EC2C; /*0x718711*/
    }
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)*(this + 3) + 240))(*(this + 3), this + 10); /*0x718726*/
  }
  else
  {
    if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, &a2) + 80) & 0x100) != 0 ) /*0x71828d*/
      v6 = (int *)*((_DWORD *)Coord::To_Cell(&MapClass_Instance, &a2) + 58); /*0x71829e*/
    else
      v6 = (int *)*((_DWORD *)Coord::To_Cell(&MapClass_Instance, &a2) + 57); /*0x7182b5*/
    v7 = *((_DWORD *)Coord::To_Cell(&MapClass_Instance, &a2) + 17); /*0x7182ca*/
    for ( IDA_LOBYTE(a5) = 0; v6; v6 = (int *)v6[12] ) /*0x7182d6*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int *))(*v6 + 352))(v6) /*0x718305*/
        && (*(int (__thiscall **)(int *))(*v6 + 44))(v6) == 15
        && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3) + 44))(*(this + 3)) == 15 )
      {
        v8 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*v6 + 72))(v6, &v44); /*0x718310*/
        if ( a2 == *v8 && a3 == v8[1] && a4 == v8[2] ) /*0x718339*/
        {
          v9 = (*(int (__thiscall **)(int *))(*v6 + 132))(v6); /*0x718343*/
          v10 = *v6; /*0x718354*/
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
          v40 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3) + 132))(*(this + 3)) + 160); /*0x7183f5*/
          (*(void (__thiscall **)(_DWORD, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)*(this + 3) /*0x71840f*/
                                                                                             + 364))(
            *(this + 3),
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
          IDA_LOBYTE(a5) = 1; /*0x71842a*/
        }
      }
      else
      {
        v11 = (*(int (__thiscall **)(int *))(*v6 + 132))(v6); /*0x71839d*/
        v12 = *v6; /*0x7183a9*/
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
    if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, &a2) + 80) & 0x100) != 0 /*0x71846c*/
      && (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, &a2) + 80) & 0x200) == 0 )
    {
      IDA_LOBYTE(a5) = 1; /*0x71846e*/
    }
    v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)*(this + 3) + 72))(*(this + 3), &v44); /*0x71847d*/
    IDA_LOWORD(v38) = *v13 / 256; /*0x718490*/
    IDA_HIWORD(v38) = v13[1] / 256; /*0x7184a8*/
    v40 = v38; /*0x7184b1*/
    v41 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v40); /*0x7184c0*/
    IDA_LOBYTE(v39) = ObjectClass::processPointerInvalid != 0; /*0x7184d1*/
    if ( v7 != -1 /*0x7184f4*/
      && !*(_BYTE *)(*((_DWORD *)g_BuildingTypeClass_Array + v7) + 681)
      && !ObjectClass::processPointerInvalid
      || (_BYTE)a5 )
    {
      v14 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3) + 132))(*(this + 3)) + 1460); /*0x718505*/
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
      IDA_LOWORD(a5) = a2 / 256; /*0x71855c*/
      IDA_HIWORD(a5) = a3 / 256; /*0x718561*/
      v40 = a5; /*0x71857b*/
      v15 = *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v40) + 80) >> 8; /*0x7185ad*/
      IDA_LOBYTE(v15) = v15 & 1; /*0x7185b0*/
      v15 = v15; /*0x7185b5*/
      TileIndex = MapClass::GetTileIndex(&MapClass_Instance, v41 + 18, v14, v39); /*0x7185bf*/
      v42 = *LayerClass::Pathfinding_Find( /*0x7185e6*/
               &MapClass_Instance,
               v17,
               &v43,
               (__int16 *)&a5,
               1,
               TileIndex,
               v14,
               v15,
               1,
               1,
               0,
               0,
               0,
               1,
               (__int16 *)&v38,
               0,
               0);
      v18 = Coord::To_Cell(&MapClass_Instance, &a2); /*0x7185ea*/
      v19 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v18 + 72))(v18, &v44); /*0x7185f8*/
      v20 = a2 - *v19; /*0x71860b*/
      v21 = a3 - v19[1]; /*0x718611*/
      v22 = a4 - v19[2]; /*0x718617*/
      v23 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v42); /*0x71861f*/
      v24 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v23 + 72))(v23, &v44); /*0x71862d*/
      v25 = *v24 + v20; /*0x718635*/
      v26 = (_DWORD *)(*(this + 3) + 648); /*0x71863d*/
      v27 = v21 + v24[1]; /*0x718643*/
      v28 = v22 + v24[2]; /*0x718645*/
      *v26 = v25; /*0x718647*/
      v26[1] = v27; /*0x71864c*/
      v26[2] = v28; /*0x718650*/
      return 0; /*0x718658*/
    }
  }
  v34 = this + 10; /*0x718735*/
  if ( *(this + 10) == dword_B0EBF8 && *(this + 11) == dword_B0EBFC && *(this + 12) == dword_B0EC00 ) /*0x718754*/
  {
    v35 = (int *)*(this + 3); /*0x71875e*/
    v44 = v35[39]; /*0x71876d*/
    v45 = v35[40]; /*0x718774*/
    v46 = v35[41]; /*0x71877b*/
    v36 = *v35; /*0x71877f*/
    v34 = &v44; /*0x718782*/
  }
  else
  {
    v35 = (int *)*(this + 3); /*0x718756*/
    v36 = *v35; /*0x718759*/
  }
  (*(void (__thiscall **)(int *, int *))(v36 + 240))(v35, v34); /*0x718789*/
  return 1; /*0x718649*/
}
} // namespace ra2

// 0x746CB0
namespace gamemd {
void ObjectClass_GetTypeVt40_2()
{
  return TechnoClass::GetTypeVt40();
}
}
// 0x746CC0
namespace gamemd {
void ObjectClass_GetTypeVt41_2()
{
  return ObjectClass::GetTypeVt41();
}
}
// 0x74CD60
namespace gamemd {
int ObjectClass::processDeath()
{
  int v1; // edx
  char *i; // esi

  v1 = g_VeinholePool - 1; /*0x74cd68*/
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
} // namespace ra2

// 0x401940
namespace gamemd {
int ObjectClass::GetMember06()
{
  return *(this + 6); /*0x401943*/
}
} // namespace gamemd

// 0x4135A0
namespace gamemd {
bool ObjectClass::HasLinkedObject(VectorClass_flat * aP0)
{
  int v1; // eax

  v1 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)aP0 + 444))(aP0) + 224); /*0x4135af*/
  return v1 && v1 != aP0; /*0x4135bf*/
}
} // namespace gamemd

// 0x41BE00
namespace gamemd {
int ObjectClass::GetCoordsThunk2()
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)&this->q01C2))(this, v3); /*0x41be0e*/
  *v4 = *v1; /*0x41be18*/
  v4[1] = v1[1]; /*0x41be1d*/
  v4[2] = v1[2]; /*0x41be24*/
  return (int)v4; /*0x41be20*/
}
} // namespace gamemd

// 0x4264D0
namespace gamemd {
int ObjectClass::COMStub_108()
{
  return 0; /*0x4264d2*/
}
} // namespace gamemd

// 0x4886A0
namespace gamemd {
char ObjectClass::GetStateFlag()
{
  return *(&this->q0088); /*0x4886a3*/
}
} // namespace gamemd

// 0x4CA120
namespace gamemd {
int ObjectClass::GetMember09()
{
  return this->objectTypeFlags; /*0x4ca123*/
}
} // namespace gamemd

// 0x4E02C0
namespace gamemd {
int ObjectClass::updateStateFlags()
{
  int result; // eax

  result = *this; /*0x4e02c0*/
  if ( *this ) /*0x4e02c0*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4e02c9*/
  return result; /*0x4e02cc*/
}
} // namespace gamemd

// 0x4E14A0
namespace gamemd {
int ObjectClass::InputThunkA()
{
  return ObjectClass::GetWidth();
}
}
// 0x4E14B0
namespace gamemd {
int ObjectClass::InputThunkB()
{
  return ObjectClass::GetHeight();
}
}
// 0x556620
namespace gamemd {
int ObjectClass::GetWidth()
{
  return this->vtable2; /*0x556623*/
}
} // namespace gamemd

// 0x556B50
namespace gamemd {
int ObjectClass::updateMissionState(int a2)
{
  int result; // eax

  result = a2; /*0x556b57*/
  if ( !g_lParam ) /*0x556b5b*/
    result = 2 * a2; /*0x556b5d*/
  this->m_Prev = result; /*0x556b5f*/
  return result; /*0x556b62*/
}
} // namespace gamemd

// 0x55A8C0
namespace gamemd {
unsigned int * ObjectClass::ComputeScreenYOffset(BuildingTypeClass * aP0, unsigned int * a1)
{
  int v2; // eax
  int v3; // ecx

  v2 = (*(int (__thiscall **)(_DWORD))(*aP0->u8_2 + 456))(aP0->u8_2); /*0x55a8cc*/
  v3 = ZCoordToScreenY(v2); /*0x55a8d9*/
  *a1 = 0; /*0x55a8df*/
  a1[1] = v3; /*0x55a8e1*/
  return a1; /*0x55a8e4*/
}
} // namespace gamemd

// 0x55BAA0
namespace gamemd {
char ObjectClass::SetDeployState(ObjectClass * aP0, char a2)
{
  if ( aP0->u8_98 ) /*0x55baa5*/
    return 1; /*0x55baaf*/
  if ( !(unsigned __int8)DisplayClass::RenderStatusText(aP0, a2) ) /*0x55babb*/
    return 0; /*0x55bad0*/
  aP0->u8_98 = 1; /*0x55bac6*/
  return 1; /*0x55bab1*/
}
} // namespace gamemd

// 0x5F5F40
namespace gamemd {
int ObjectClass::GetZAboveGround()
{
  int v2; // ecx
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v4[0] = this->q270; /*0x5f5f52*/
  v4[1] = this->q280; /*0x5f5f63*/
  v4[2] = this->u32_A4; /*0x5f5f6a*/
  v2 = this->u32_A4 - Cell::GetGroundHeight(v4); /*0x5f5f79*/
  if ( this->q08C ) /*0x5f5f7b*/
    v2 -= dword_AC13BC; /*0x5f5f86*/
  return v2; /*0x5f5f83*/
}
} // namespace gamemd

// 0x5F6A10
namespace gamemd {
int ObjectClass::GetCell()
{
  _DWORD *v1; // eax
  int v3; // [esp+8h] [ebp-14h]
  _BYTE v5[12]; // [esp+10h] [ebp-Ch] BYREF

  v1 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *, _DWORD))(*(_DWORD *)&this->u32_1C6))(this, v5, 0); /*0x5f6a1c*/
  IDA_LOWORD(v3) = *v1 / 256; /*0x5f6a2f*/
  IDA_HIWORD(v3) = v1[1] / 256; /*0x5f6a48*/
  v3 = v3; /*0x5f6a56*/
  return (int)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v3); /*0x5f6a5f*/
}
} // namespace gamemd

// 0x5F6C10
namespace gamemd {
int ObjectClass::IsAboveScreenMargin()
{
  int result; // eax

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->u32_B46))(this); /*0x5f6c12*/
  IDA_LOBYTE(result) = result > -20; /*0x5f6c20*/
  return result; /*0x5f6c22*/
}
} // namespace gamemd

// 0x5F6DC0
namespace gamemd {
int ObjectClass::CreateInstance()
{
  char v3; // [esp+8h] [ebp+4h]

  ObjectClass::Dtor(); /*0x5f6dc3*/
  if ( (v3 & 1) != 0 ) /*0x5f6dcd*/
    RA2_OPDEL(); /*0x5f6dd0*/
  return (int)this; /*0x5f6dda*/
}
} // namespace gamemd

// 0x6241C0
namespace gamemd {
char ObjectClass::Release()
{
  return this->NeedsSaveOrLink; /*0x6241c3*/
}
} // namespace gamemd

// 0x6241D0
namespace gamemd {
int ObjectClass::GetMember01()
{
  return this->vtable2; /*0x6241d3*/
}
} // namespace gamemd

// 0x6A5000
namespace gamemd {
int ObjectClass::processDamage()
{
  int v1; // esi
  int result; // eax

  PowerClass::Stub(); /*0x6a5001*/
  v1 = 4; /*0x6a5006*/
  do /*0x6a501d*/
  {
    result = SearchMIXFile(aDarkenShp, 0); /*0x6a5012*/
    --v1; /*0x6a5017*/
    dword_B07BC0 = result; /*0x6a5018*/
  }
  while ( v1 ); /*0x6a501d*/
  return result; /*0x6a501f*/
}
} // namespace gamemd

// 0x6ABA40
namespace gamemd {
int ObjectClass::checkHealth()
{
  Mouse::SetCursor((int)&MapClass_Instance, 0, 0); /*0x6aba49*/
  return 1; /*0x6aba53*/
}
} // namespace gamemd

// 0x6AC7A0
namespace gamemd {
unsigned int * ObjectClass::updateAnimation(char a2)
{
  GadgetClass::Dtor(); /*0x6ac7a3*/
  if ( (a2 & 1) != 0 ) /*0x6ac7ad*/
    RA2_OPDEL(); /*0x6ac7b0*/
  return this; /*0x6ac7ba*/
}
} // namespace gamemd

// 0x6E45E0
namespace gamemd {
int ObjectClass::FindOwner(unsigned int * a0, AnimClass * aP1)
{
  if ( !a0 ) /*0x6e45e6*/
    return 0; /*0x6e45e8*/
  if ( aP1 == (void *)8997 ) /*0x6e45f8*/
    return Property::GetField11(a0); /*0x6e45fa*/
  if ( aP1 == (void *)-1 ) /*0x6e4606*/
    return 0; /*0x6e4608*/
  if ( BuildingType::IsSpecialType(aP1) ) /*0x6e4610*/
    return BuildingType::FindOwnerHouse(aP1); /*0x6e461b*/
  return HouseClass::FindOwner(aP1); /*0x6e45ea*/
}
} // namespace gamemd

// 0x72A660
namespace gamemd {
int ObjectClass::setTarget(int a2)
{
  *(this + 12) = a2; /*0x72a664*/
  return a2; /*0x72a667*/
}
} // namespace gamemd

// 0x72A670
namespace gamemd {
unsigned int * ObjectClass::clearTarget(char a2)
{
  GadgetClass::Dtor(); /*0x72a673*/
  if ( (a2 & 1) != 0 ) /*0x72a67d*/
    RA2_OPDEL(); /*0x72a680*/
  return this; /*0x72a68a*/
}
} // namespace gamemd

// 0x77D200
namespace gamemd {
char j_Game_ProcessIdle()
{
  return Game::ProcessIdle();
}
}
// 0x7A2E70
namespace gamemd {
unsigned int * ObjectClass::loc_7A2E70(char a2)
{
    this->vfptr = &vt_SimpleWonlineDialogControl;
    OwnerDrawControl::InitVtable();
    if ( (a2 & 1) != 0 )
    RA2_OPDEL();
    return &this->vfptr;
}
} // namespace gamemd
