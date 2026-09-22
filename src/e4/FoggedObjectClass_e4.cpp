// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FoggedObjectClass_42_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/FoggedObject_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x4D0980
int FoggedObjectClass::InitBuildingFog(unsigned int * a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int *PlacementRectBuildingClass; // edi
  int *StartCoordsHouse; // eax
  int v8; // edx
  int v14; // ebp
  int v15; // ecx
  int v16; // edi
  HouseClass *v17; // ebp
  int v18; // edi
  int v20; // ecx
  int v21; // eax
  int v22; // edi
  int v25[4]; // [esp+20h] [ebp-20h] BYREF
  int v26[4]; // [esp+30h] [ebp-10h] BYREF
  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0989*/
  this->LastSight = a3; /*0x4d099e*/
  this->House = 0; /*0x4d09a1*/
  this->Cell = a4; /*0x4d09a4*/
  this->q030 = 20; /*0x4d09a7*/
  this->q034 = *a2; /*0x4d09b4*/
  this->q038 = a2[1]; /*0x4d09b9*/
  this->q03C = a2[2]; /*0x4d09c4*/
  this->q050 = *((char *)Coord::To_Cell(&DataGlobal_87F7E8, a2) + 283); /*0x4d09da*/
  this->q054 = -1; /*0x4d09dd*/
  this->q058 = 0; /*0x4d09e4*/
  FoggedObject::DrawVector_Constructor((_DWORD *)(this + 92), 0, 0); /*0x4d09e7*/
  this->q05C = &vt_DynamicVectorClass_FoggedObjectClass_DrawRecord; /*0x4d09ec*/
  this->q070 = 10; /*0x4d09f2*/
  this->q06C = 0; /*0x4d09f9*/
  this->q01D = 1; /*0x4d0a02*/
  *(_DWORD *)this = &FoggedObjectClass::`vftable'; /*0x4d0a06*/
  this->vtable1 = &FoggedObjectClass::`vftable'; /*0x4d0a0c*/
  this->vtable2 = &FoggedObjectClass::`vftable'; /*0x4d0a13*/
  this->vtable3 = &vt_FoggedObjectClass; /*0x4d0a1a*/
  void * v5 = Coord::To_Cell(&DataGlobal_87F7E8, a2); /*0x4d0a2a*/
  PlacementRectBuildingClass = BuildingClass::GetPlacementRect((int)v5, v25); /*0x4d0a3b*/
  StartCoordsHouse = House::GetStartCoords((int)v5, v26); /*0x4d0a3d*/
  if ( StartCoordsHouse[2] <= 0 || StartCoordsHouse[3] <= 0 ) /*0x4d0a4e*/
  {
    v8 = *PlacementRectBuildingClass; /*0x4d0adf*/
    v15 = PlacementRectBuildingClass[1]; /*0x4d0ae1*/
    v14 = PlacementRectBuildingClass[2]; /*0x4d0ae4*/
    v16 = PlacementRectBuildingClass[3]; /*0x4d0ae7*/
  }
  else
  {
    int v28 = PlacementRectBuildingClass[2]; /*0x4d0a59*/
  int v27; // [esp+44h] [ebp+4h]
    if ( v28 <= 0 || (v27 = PlacementRectBuildingClass[3], v27 <= 0) ) /*0x4d0a68*/
    {
      v8 = *StartCoordsHouse; /*0x4d0ad2*/
      v15 = StartCoordsHouse[1]; /*0x4d0ad4*/
      v14 = StartCoordsHouse[2]; /*0x4d0ad7*/
      v16 = StartCoordsHouse[3]; /*0x4d0ada*/
    }
    else
    {
      v8 = *StartCoordsHouse; /*0x4d0a6a*/
      int v9 = *PlacementRectBuildingClass; /*0x4d0a6c*/
      int v10 = StartCoordsHouse[2]; /*0x4d0a6e*/
      int v11 = StartCoordsHouse[1]; /*0x4d0a71*/
      int v12 = StartCoordsHouse[3]; /*0x4d0a74*/
      int v24 = v10; /*0x4d0a79*/
      if ( v8 > *PlacementRectBuildingClass ) /*0x4d0a7d*/
      {
        v10 += v8 - v9; /*0x4d0a81*/
        v8 = *PlacementRectBuildingClass; /*0x4d0a83*/
        v24 = v10; /*0x4d0a85*/
      }
      int v13 = PlacementRectBuildingClass[1]; /*0x4d0a89*/
      if ( v11 > v13 ) /*0x4d0a92*/
      {
        v12 += v11 - v13; /*0x4d0a96*/
        v11 = v13; /*0x4d0a98*/
      }
      if ( v8 + v10 >= v9 + v28 ) /*0x4d0aa4*/
        v14 = v24; /*0x4d0ab2*/
      else
        v14 = v9 - v8 + v28 + 1; /*0x4d0aac*/
      if ( v12 + v11 < v27 + v13 ) /*0x4d0ac5*/
        v12 = v27 + v13 - v11 + 1; /*0x4d0aca*/
      v15 = v11; /*0x4d0acc*/
      v16 = v12; /*0x4d0ace*/
    }
  }
  this->q040 = v8; /*0x4d0aef*/
  this->q044 = v15; /*0x4d0af1*/
  this->q048 = v14; /*0x4d0af4*/
  this->q04C = v16; /*0x4d0af7*/
  v17 = this->q044; /*0x4d0b00*/
  this->q040 += g_TacticalClass_Instance[44].__tail_0; /*0x4d0b0d*/
  this->q044 = (char *)g_TacticalClass_Instance[45].__tail_0 + v17; /*0x4d0b1d*/
  v18 = this->q044 - g_Map_VisibleRect; /*0x4d0b33*/
  this->q040 -= DSurface_ViewBounds; /*0x4d0b35*/
  this->q044 = v18; /*0x4d0b37*/
  if ( g_FootClassConfig < DataGlobal_8B3D18 /*0x4d0b6f*/
    || (DataGlobal_8B3D1D || !DataGlobal_8B3D18)
    && DataGlobal_8B3D24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(DataGlobal_8B3D10 + 8))(
         &DataGlobal_8B3D10,
         DataGlobal_8B3D24 + DataGlobal_8B3D18,
         0) )
  {
    int v19 = g_FootClassConfig++; /*0x4d0b7c*/
    *((_DWORD *)DataGlobal_8B3D14 + v19) = this; /*0x4d0b8b*/
  }
  v20 = (__int16)(this->q034 / 256); /*0x4d0bb4*/
  v21 = DataGlobal_8B3CC8; /*0x4d0bcd*/
  v22 = 74 * ((__int16)(this->q038 / 256) - ((v20 + (__int16)(this->q038 / 256)) << 9) - v20) /*0x4d0bd6*/
      - this->q030
      + 0x7FFFFFFF;
  if ( (int)(g_MissionState + 1) <= DataGlobal_8B3CC8 ) /*0x4d0bdf*/
    goto LABEL_27; /*0x4d0bdf*/
  if ( !DataGlobal_8B3CC8 ) /*0x4d0be3*/
    v21 = 10; /*0x4d0be5*/
  if ( Vector::ReallocDynamic((int)&g_MissionPool, v21) ) /*0x4d0bf0*/
  {
LABEL_27:
    *((_DWORD *)g_MissionPool + 2 * g_MissionState) = v22; /*0x4d0c04*/
    *((_DWORD *)g_MissionPool + 2 * g_MissionState + 1) = this; /*0x4d0c12*/
    DataGlobal_8B3CCC = 0; /*0x4d0c1c*/
    ++g_MissionState; /*0x4d0c23*/
  }
  return this; /*0x4d0c2a*/
}
}

// 0x4D0C40
AbstractClass * * FoggedObjectClass::InitTerrainFog(IUnknown * aP1, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *v12; // edx
  int v16; // ebp
  AbstractClass *v17; // ebx
  int i; // eax
  int v21; // [esp+10h] [ebp-24h] BYREF
  int v22; // [esp+14h] [ebp-20h]
  _DWORD a1[2]; // [esp+18h] [ebp-1Ch] BYREF
  int v24; // [esp+20h] [ebp-14h]
  IUnknown *v25; // [esp+30h] [ebp-4h]
  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0c49*/
  this->LastSight = -1; /*0x4d0c5a*/
  this->House = 0; /*0x4d0c61*/
  this->Cell = 0; /*0x4d0c64*/
  this->q030 = 29; /*0x4d0c67*/
  int v5 = *((char *)Coord::To_Cell(&DataGlobal_87F7E8, aP1) + 283); /*0x4d0c73*/
  this->q054 = a3; /*0x4d0c85*/
  this->q050 = v5; /*0x4d0c8c*/
  this->q058 = a4; /*0x4d0c8f*/
  FoggedObject::DrawVector_Constructor((_DWORD *)(this + 92), 0, 0); /*0x4d0c92*/
  this->q05C = &vt_DynamicVectorClass_FoggedObjectClass_DrawRecord; /*0x4d0c97*/
  this->q070 = 10; /*0x4d0c9e*/
  this->q06C = 0; /*0x4d0ca5*/
  this->q01D = 1; /*0x4d0cae*/
  *(_DWORD *)this = &FoggedObjectClass::`vftable'; /*0x4d0cb2*/
  this->vtable1 = &FoggedObjectClass::`vftable'; /*0x4d0cb8*/
  this->vtable2 = &FoggedObjectClass::`vftable'; /*0x4d0cbf*/
  this->vtable3 = &vt_FoggedObjectClass; /*0x4d0cc6*/
  char * v6 = (char *)Coord::To_Cell(&DataGlobal_87F7E8, aP1); /*0x4d0ccd*/
  int v7 = aP1->field_4; /*0x4d0cd4*/
  int v8 = aP1->field_8; /*0x4d0cd7*/
  a1[0] = aP1->field_0; /*0x4d0cda*/
  a1[1] = v7; /*0x4d0cde*/
  v24 = v8; /*0x4d0ce2*/
  int v9 = *(_DWORD *)&g_CellDirectionOffsets[83672] * v6[283]; /*0x4d0ced*/
  v24 = v9; /*0x4d0cf7*/
  this->q034 = a1[0]; /*0x4d0cfd*/
  this->q038 = v7; /*0x4d0d03*/
  this->q03C = v9; /*0x4d0d06*/
  Coord::To_Screen(*(_DWORD **)&DataGlobal_87F8E4[31296], a1, (IUnknown *)&v21); /*0x4d0d15*/
  int v10 = v21 - 30; /*0x4d0d25*/
  v22 -= 15; /*0x4d0d32*/
  int v11 = v22; /*0x4d0d2a*/
  this->q040 = v21 - 30; /*0x4d0d36*/
  v25 = (IUnknown *)30; /*0x4d0d38*/
  v21 = v10; /*0x4d0d40*/
  this->q044 = v11; /*0x4d0d44*/
  v12 = v25; /*0x4d0d47*/
  this->q048 = 60; /*0x4d0d4b*/
  this->q04C = v12; /*0x4d0d4e*/
  HouseClass *v13 = this->q044; /*0x4d0d61*/
  this->q040 += *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[31296] + 176); /*0x4d0d64*/
  this->q044 = *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[31296] + 180) + v13; /*0x4d0d73*/
  if ( *(int *)&g_CellDirectionOffsets[83600] < *(int *)&g_CellDirectionOffsets[83592] /*0x4d0dab*/
    || (g_CellDirectionOffsets[83597] || !*(_DWORD *)&g_CellDirectionOffsets[83592])
    && *(int *)&g_CellDirectionOffsets[83604] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_CellDirectionOffsets[83584] + 8))(
         &g_CellDirectionOffsets[83584],
         *(_DWORD *)&g_CellDirectionOffsets[83592] + *(_DWORD *)&g_CellDirectionOffsets[83604],
         0) )
  {
    int v14 = (*(_DWORD *)&g_CellDirectionOffsets[83600])++; /*0x4d0db8*/
    *(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[83588] + 4 * v14) = this; /*0x4d0dc7*/
  }
  int v15; // edi
  v15 = 74 /*0x4d0e11*/
      * ((__int16)(this->q038 / 256)
       - (((__int16)(this->q034 / 256) + (__int16)(this->q038 / 256)) << 9)
       - (__int16)(this->q034 / 256))
      - this->q030
      + 0x7FFFFFFF;
  if ( *(_DWORD *)&g_CellDirectionOffsets[83508] + 1 <= *(int *)&g_CellDirectionOffsets[83512] ) /*0x4d0e1a*/
    goto LABEL_15; /*0x4d0e1a*/
  if ( *(_DWORD *)&g_CellDirectionOffsets[83512] ) /*0x4d0e22*/
  {
    v16 = *(_DWORD *)&g_CellDirectionOffsets[83512]; /*0x4d0e2b*/
    if ( *(int *)&g_CellDirectionOffsets[83512] < 0 ) /*0x4d0e2f*/
      return (FoggedObjectClass *)this; /*0x4d0e2f*/
  }
  else
  {
    v16 = 10; /*0x4d0e24*/
  }
  v17 = (AbstractClass *)__2_YAPAXI_Z(8 * (v16 + *(_DWORD *)&g_CellDirectionOffsets[83512])); /*0x4d0e44*/
  if ( v17 ) /*0x4d0e4b*/
  {
  _DWORD *v19; // ecx
    for ( i = 0; i < *(int *)&g_CellDirectionOffsets[83508]; *(_DWORD *)&v17->__pad_0[8 * i - 4] = v19[1] ) /*0x4d0e64*/
    {
      v19 = (_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[83504] + 8 * i++); /*0x4d0e6c*/
      *(_DWORD *)&v17->__pad_0[8 * i - 8] = *v19; /*0x4d0e72*/
    }
    __3_YAXPAX_Z(*(void **)&g_CellDirectionOffsets[83504]); /*0x4d0e8e*/
    *(_DWORD *)&g_CellDirectionOffsets[83504] = v17; /*0x4d0e9d*/
    *(_DWORD *)&g_CellDirectionOffsets[83512] += v16; /*0x4d0ea3*/
    *(_DWORD *)&g_CellDirectionOffsets[83520] = 0; /*0x4d0ea8*/
LABEL_15:
    *(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[83504] + 8 * *(_DWORD *)&g_CellDirectionOffsets[83508]) = v15; /*0x4d0eb2*/
    *(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[83504] + 8 * *(_DWORD *)&g_CellDirectionOffsets[83508] + 4) = this; /*0x4d0ecb*/
    g_CellDirectionOffsets[83516] = 0; /*0x4d0ed5*/
    ++*(_DWORD *)&g_CellDirectionOffsets[83508]; /*0x4d0edc*/
  }
  return (FoggedObjectClass *)this; /*0x4d0ee3*/
}
}

// 0x4D0EF0
int FoggedObjectClass::Constructor(BuildingClass * aP1, FoggedObjectClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HouseClass *v4; // eax
  VectorClass *v7; // esi
  int ProductionFrame; // eax
  _BYTE *Type; // ebp
  int LaserFenceFrame; // eax
  BuildingClass *v19; // ecx
  int *Anims; // ebx
  BuildingClass **v23; // ecx
  BuildingClass *v24; // edx
  BuildingClass *v27; // ecx
  BuildingClass *v32; // ecx
  BuildingClass **v40; // eax
  BuildingClass *v41; // ecx
  BuildingClass *v42; // edx
  bool v43; // zf
  int *v45; // [esp+20h] [ebp-40h]
  int v46; // [esp+24h] [ebp-3Ch]
  _DWORD v49[2]; // [esp+30h] [ebp-30h] BYREF
  HouseClass *v50; // [esp+38h] [ebp-28h]
  char v52[8]; // [esp+40h] [ebp-20h] BYREF
  BuildingClass *v53; // [esp+48h] [ebp-18h]
  BuildingClass *v54; // [esp+4Ch] [ebp-14h]
  BuildingClass *aP1a; // [esp+64h] [ebp+4h]
  FoggedObjectClass *aP2a; // [esp+68h] [ebp+8h]
  FoggedObjectClass *aP2b; // [esp+68h] [ebp+8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0ef9*/
  this->LastSight = -1; /*0x4d0f02*/
  v4 = (HouseClass *)aP1->focus; /*0x4d0f0c*/
  this->Cell = 0; /*0x4d0f12*/
  this->House = v4; /*0x4d0f19*/
  this->q030 = 6; /*0x4d0f24*/
  this->q034 = aP1->location[0]; /*0x4d0f2f*/
  this->q038 = aP1->location[1]; /*0x4d0f34*/
  this->q03C = aP1->location[2]; /*0x4d0f3a*/
  int v5 = aP1->location[1]; /*0x4d0f3f*/
  v49[0] = aP1->location[0]; /*0x4d0f42*/
  int v6 = aP1->location[2]; /*0x4d0f46*/
  v49[1] = v5; /*0x4d0f4d*/
  v50 = v6; /*0x4d0f57*/
  v7 = (VectorClass *)(this + 92); /*0x4d0f67*/
  this->q050 = *((char *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)v49) + 283); /*0x4d0f6a*/
  this->q054 = -1; /*0x4d0f73*/
  this->q058 = 0; /*0x4d0f7a*/
  FoggedObject::DrawVector_Constructor((_DWORD *)(this + 92), 0, 0); /*0x4d0f81*/
  this->q05C = &vt_DynamicVectorClass_FoggedObjectClass_DrawRecord; /*0x4d0f8a*/
  this->q070 = 10; /*0x4d0f90*/
  this->q06C = 0; /*0x4d0f97*/
  this->q01D = (_BYTE)aP2; /*0x4d0fa2*/
  *(_DWORD *)this = &FoggedObjectClass::`vftable'; /*0x4d0fa5*/
  this->vtable1 = &FoggedObjectClass::`vftable'; /*0x4d0fab*/
  this->vtable2 = &FoggedObjectClass::`vftable'; /*0x4d0fb2*/
  this->vtable3 = &vt_FoggedObjectClass; /*0x4d0fb9*/
  _DWORD * v8 = (_DWORD *)(*(int (__thiscall **)(BuildingClass *, char *))(*(_DWORD *)aP1->__pad_0 + 300))(aP1, v52); /*0x4d0fc5*/
  this->q040 = *v8; /*0x4d0fd2*/
  this->q044 = v8[1]; /*0x4d0fd7*/
  this->q048 = v8[2]; /*0x4d0fdd*/
  this->q04C = v8[3]; /*0x4d0fe3*/
  if ( *(int *)&stru_89E138[89064] < *(int *)&stru_89E138[89056] /*0x4d101a*/
    || (stru_89E138[89061] || !*(_DWORD *)&stru_89E138[89056])
    && *(int *)&stru_89E138[89068] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_89E138[89048] + 8))(
         &stru_89E138[89048],
         *(_DWORD *)&stru_89E138[89056] + *(_DWORD *)&stru_89E138[89068],
         0) )
  {
    int v9 = (*(_DWORD *)&stru_89E138[89064])++; /*0x4d1027*/
    *(_DWORD *)(*(_DWORD *)&stru_89E138[89052] + 4 * v9) = this; /*0x4d1036*/
  }
  int v10 = *(_DWORD *)&stru_89E138[88976]; /*0x4d107c*/
  int v11; // ebp
  v11 = 74 /*0x4d1081*/
      * ((__int16)(this->q038 / 256)
       - (((__int16)(this->q034 / 256) + (__int16)(this->q038 / 256)) << 9)
       - (__int16)(this->q034 / 256))
      - this->q030
      + 0x7FFFFFFF;
  if ( *(_DWORD *)&stru_89E138[88972] + 1 <= *(int *)&stru_89E138[88976] ) /*0x4d108a*/
    goto LABEL_11; /*0x4d108a*/
  if ( !*(_DWORD *)&stru_89E138[88976] ) /*0x4d108e*/
    v10 = 10; /*0x4d1090*/
  if ( Vector::ReallocDynamic((int)&stru_89E138[88968], v10) ) /*0x4d109b*/
  {
LABEL_11:
    *(_DWORD *)(*(_DWORD *)&stru_89E138[88968] + 8 * *(_DWORD *)&stru_89E138[88972]) = v11; /*0x4d10af*/
    *(_DWORD *)(*(_DWORD *)&stru_89E138[88968] + 8 * *(_DWORD *)&stru_89E138[88972] + 4) = this; /*0x4d10bd*/
    stru_89E138[88980] = 0; /*0x4d10c7*/
    ++*(_DWORD *)&stru_89E138[88972]; /*0x4d10ce*/
  }
  aP1->IsFogged = 1; /*0x4d10d5*/
  ProductionFrame = BuildingClass::GetProductionFrame((int *)aP1->__pad_0); /*0x4d10dc*/
  Type = aP1->Type; /*0x4d10e1*/
  aP2a = (FoggedObjectClass *)ProductionFrame; /*0x4d10e7*/
  if ( Type[5823] && ((LaserFenceFrame = aP1->LaserFenceFrame, LaserFenceFrame == 12) || LaserFenceFrame == 8) /*0x4d1112*/
  char v15; // al
    || (v15 = Type[5824], LOBYTE(v53) = 0, v15) )
  {
    LOBYTE(v53) = 1; /*0x4d1114*/
  }
  int v16 = this->q064; /*0x4d1119*/
  if ( this->q06C < v16 /*0x4d113e*/
    || (*(_BYTE *)(this + 105) || !v16)
  int v17; // eax
    && (v17 = this->q070, v17 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7->vtable0 + 8))(this + 92, v16 + v17, 0) )
  {
    int v18 = this->q06C; /*0x4d1145*/
    this->q06C = v18 + 1; /*0x4d114b*/
    v19 = v53; /*0x4d1156*/
    _DWORD * v20 = (_DWORD *)(this->q060 + 16 * v18); /*0x4d115a*/
    *v20 = Type; /*0x4d1160*/
    v20[1] = aP2a; /*0x4d1162*/
    v20[2] = v19; /*0x4d1167*/
    v20[3] = 0; /*0x4d116a*/
  }
  Anims = aP1->Anims; /*0x4d116d*/
  v46 = 21; /*0x4d1173*/
  v45 = aP1->Anims; /*0x4d117b*/
  do /*0x4d130a*/
  {
  HouseClass *v34; // ebp
  HouseClass *v33; // edx
  int v31; // eax
    if ( !*Anims ) /*0x4d1183*/
      goto LABEL_47; /*0x4d1183*/
    *(_BYTE *)(*Anims + 409) = 1; /*0x4d1189*/
    aP1a = *(BuildingClass **)(*Anims + 200); /*0x4d119a*/
  int v55[4]; // [esp+50h] [ebp-10h] BYREF
    HouseClass *v22 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)*Anims + 296))(*Anims, v55); /*0x4d11a3*/
    v23 = (BuildingClass **)(this + 64); /*0x4d11ac*/
    if ( this->q048 <= 0 || this->q04C <= 0 ) /*0x4d11bc*/
    {
      v32 = *(BuildingClass **)v22; /*0x4d1266*/
      v33 = v22->vtable2; /*0x4d1268*/
      v34 = v22->vtable3; /*0x4d126b*/
    }
    else
    {
      aP2b = v22->vtable3; /*0x4d11c7*/
      if ( (int)aP2b > 0 ) /*0x4d11cb*/
      {
        int v48 = v22->vtable4; /*0x4d11d6*/
        if ( v48 > 0 ) /*0x4d11da*/
        {
          v24 = *v23; /*0x4d11dc*/
          HouseClass *v25 = this->q044; /*0x4d11de*/
          HouseClass *v26 = this->q048; /*0x4d11e1*/
          v50 = v26; /*0x4d11e4*/
          int v51 = this->q04C; /*0x4d11eb*/
          v27 = *(BuildingClass **)v22; /*0x4d11ef*/
          if ( (int)v24 > *(_DWORD *)v22 ) /*0x4d11f3*/
          {
            int v28 = (char *)v24 - (char *)v27 + v26; /*0x4d11f7*/
            v24 = *(BuildingClass **)v22; /*0x4d11f9*/
            v50 = v28; /*0x4d11fb*/
          }
          int v29 = v22->vtable2; /*0x4d11ff*/
          int v47 = v29; /*0x4d1204*/
          if ( v25 > v29 ) /*0x4d1208*/
          {
            int v30 = v25 - v29 + v51; /*0x4d1210*/
            v25 = v29; /*0x4d1212*/
            v51 = v30; /*0x4d1214*/
          }
          if ( (int)&v24->__pad_0[v50] < (int)&aP2b->__pad_0[(int)v27] ) /*0x4d1226*/
            v50 = (int)&aP2b->__pad_0[(char *)v27 - (char *)v24 + 1]; /*0x4d1232*/
          v31 = v51; /*0x4d1240*/
          if ( v51 + v25 < v47 + v48 ) /*0x4d1249*/
            v31 = v47 + v48 - v25 + 1; /*0x4d124e*/
          v32 = v24; /*0x4d1250*/
          v33 = v25; /*0x4d1252*/
          v34 = v50; /*0x4d1254*/
          goto LABEL_41; /*0x4d1258*/
        }
      }
      v22 = this + 64; /*0x4d125a*/
      v32 = *v23; /*0x4d125c*/
      v33 = this->q044; /*0x4d125e*/
      v34 = this->q048; /*0x4d1261*/
    }
    v31 = v22->vtable4; /*0x4d126e*/
LABEL_41:
    LOBYTE(v53) = 0; /*0x4d1271*/
    this->q040 = v32; /*0x4d1279*/
    this->q044 = v33; /*0x4d127f*/
    this->q048 = v34; /*0x4d1282*/
    this->q04C = v31; /*0x4d1285*/
    Anims = v45; /*0x4d1288*/
    int v35 = this->q06C; /*0x4d1292*/
    int v36 = aP1a->sprayOffsetIndex + *(_DWORD *)(*v45 + 172); /*0x4d129d*/
    int v37 = this->q064; /*0x4d12a5*/
    v54 = *(BuildingClass **)(*v45 + 256); /*0x4d12a8*/
    if ( v35 < v37 /*0x4d12cb*/
      || (*(_BYTE *)(this + 105) || !v37)
  int v38; // ecx
      && (v38 = this->q070, v38 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7->vtable0 + 8))(this + 92, v37 + v38, 0) )
    {
      int v39 = this->q06C; /*0x4d12d2*/
      this->q06C = v39 + 1; /*0x4d12dc*/
      v40 = (BuildingClass **)(this->q060 + 16 * v39); /*0x4d12e5*/
      v41 = v53; /*0x4d12e7*/
      *v40 = aP1a; /*0x4d12eb*/
      v42 = v54; /*0x4d12ed*/
      v40[1] = (BuildingClass *)v36; /*0x4d12f1*/
      v40[2] = v41; /*0x4d12f4*/
      v40[3] = v42; /*0x4d12f7*/
    }
LABEL_47:
    ++Anims; /*0x4d12fa*/
    v43 = v46 == 1; /*0x4d1301*/
    v45 = Anims; /*0x4d1302*/
    --v46; /*0x4d1306*/
  }
  while ( !v43 ); /*0x4d130a*/
  Cell::CreateCrater(this->q040, this->q044, this->q048, this->q04C, 0); /*0x4d1338*/
  this->q040 += *(_DWORD *)(*(_DWORD *)&stru_87C374[44976] + 176); /*0x4d134d*/
  this->q044 += *(_DWORD *)(*(_DWORD *)&stru_87C374[44976] + 180); /*0x4d135f*/
  return this; /*0x4d1364*/
}
}

// 0x4D1370
AbstractClass * FoggedObjectClass::InitDrawRecord(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v17; // ebp
  _DWORD *v18; // ebx
  signed int i; // eax
  _DWORD v22[2]; // [esp+10h] [ebp-10h] BYREF
  int v23; // [esp+18h] [ebp-8h]
  AbstractClass::Constructor((AbstractClass *)this); /*0x4d1379*/
  this->LastSight = -1; /*0x4d1384*/
  this->House = 0; /*0x4d138b*/
  this->Cell = 0; /*0x4d1394*/
  this->q030 = 36; /*0x4d1399*/
  this->q034 = a2[39]; /*0x4d13a5*/
  this->q038 = a2[40]; /*0x4d13aa*/
  this->q03C = a2[41]; /*0x4d13b0*/
  int v3 = a2[40]; /*0x4d13b5*/
  int v4 = a2[41]; /*0x4d13b8*/
  v22[0] = a2[39]; /*0x4d13bb*/
  v22[1] = v3; /*0x4d13c9*/
  v23 = v4; /*0x4d13cd*/
  this->q050 = *((char *)Coord::To_Cell(&DataGlobal_87F7E8, v22) + 283); /*0x4d13e4*/
  this->q054 = -1; /*0x4d13e7*/
  this->q058 = 0; /*0x4d13ee*/
  FoggedObject::DrawVector_Constructor((_DWORD *)(this + 92), 0, 0); /*0x4d13f1*/
  this->q05C = &vt_DynamicVectorClass_FoggedObjectClass_DrawRecord; /*0x4d13f6*/
  this->q070 = 10; /*0x4d13fc*/
  this->q06C = 0; /*0x4d1403*/
  this->q01D = 1; /*0x4d140a*/
  *(_DWORD *)this = &FoggedObjectClass::`vftable'; /*0x4d140e*/
  this->vtable1 = &FoggedObjectClass::`vftable'; /*0x4d1414*/
  this->vtable2 = &FoggedObjectClass::`vftable'; /*0x4d141b*/
  this->vtable3 = &vt_FoggedObjectClass; /*0x4d1422*/
  _DWORD * v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*a2 + 300))(a2, v22); /*0x4d1431*/
  this->q040 = *v5; /*0x4d143b*/
  this->q044 = v5[1]; /*0x4d1440*/
  this->q048 = v5[2]; /*0x4d1446*/
  this->q04C = v5[3]; /*0x4d144c*/
  HouseClass *v6 = this->q044; /*0x4d1460*/
  this->q040 += g_TacticalClass_Instance[44].__tail_0; /*0x4d1463*/
  this->q044 = (char *)g_TacticalClass_Instance[45].__tail_0 + v6; /*0x4d1473*/
  if ( g_FootClassConfig < DataGlobal_8B3D18 /*0x4d14ab*/
    || (DataGlobal_8B3D1D || !DataGlobal_8B3D18)
    && DataGlobal_8B3D24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(DataGlobal_8B3D10 + 8))(
         &DataGlobal_8B3D10,
         DataGlobal_8B3D18 + DataGlobal_8B3D24,
         0) )
  {
    int v7 = g_FootClassConfig++; /*0x4d14b8*/
    *((_DWORD *)DataGlobal_8B3D14 + v7) = this; /*0x4d14c7*/
  }
  int v8 = this->q064; /*0x4d14ca*/
  int v9 = this->q06C; /*0x4d14cd*/
  int v10 = a2[50]; /*0x4d14d0*/
  LOBYTE(v23) = 0; /*0x4d14da*/
  if ( v9 < v8 /*0x4d14fc*/
    || (*(_BYTE *)(this + 105) || !v8)
  int v11; // ecx
    && (v11 = this->q070, v11 > 0)
    && this->q05C->Release(v8 + v11, 0) )
  {
    int v12 = this->q06C; /*0x4d1503*/
    this->q06C = v12 + 1; /*0x4d1509*/
    _DWORD * v13 = (_DWORD *)(this->q060 + 16 * v12); /*0x4d1514*/
    int v14 = v23; /*0x4d1516*/
    *v13 = v10; /*0x4d151a*/
    v13[1] = 0; /*0x4d151c*/
    v13[2] = v14; /*0x4d151f*/
    v13[3] = 0; /*0x4d1524*/
  }
  int v15 = (__int16)(this->q034 / 256); /*0x4d154d*/
  int v16; // edi
  v16 = 74 * ((__int16)(this->q038 / 256) - ((v15 + (__int16)(this->q038 / 256)) << 9) - v15) /*0x4d156f*/
      - this->q030
      + 0x7FFFFFFF;
  if ( (int)(g_MissionState + 1) <= DataGlobal_8B3CC8 ) /*0x4d1578*/
    goto LABEL_21; /*0x4d1578*/
  if ( DataGlobal_8B3CC8 ) /*0x4d1580*/
  {
    v17 = DataGlobal_8B3CC8; /*0x4d1589*/
    if ( DataGlobal_8B3CC8 < 0 ) /*0x4d158d*/
      return this; /*0x4d158d*/
  }
  else
  {
    v17 = 10; /*0x4d1582*/
  }
  v18 = __2_YAPAXI_Z(8 * (v17 + DataGlobal_8B3CC8)); /*0x4d15a2*/
  if ( v18 ) /*0x4d15a9*/
  {
  _DWORD *v20; // ecx
    for ( i = 0; i < (int)g_MissionState; v18[2 * i - 1] = v20[1] ) /*0x4d15c2*/
    {
      v20 = (char *)g_MissionPool + 8 * i++; /*0x4d15ca*/
      v18[2 * i - 2] = *v20; /*0x4d15d0*/
    }
    __3_YAXPAX_Z(g_MissionPool); /*0x4d15ec*/
    g_MissionPool = v18; /*0x4d15fb*/
    DataGlobal_8B3CC8 += v17; /*0x4d1601*/
    DataGlobal_8B3CD0 = 0; /*0x4d1606*/
LABEL_21:
    *((_DWORD *)g_MissionPool + 2 * g_MissionState) = v16; /*0x4d1610*/
    *((_DWORD *)g_MissionPool + 2 * g_MissionState + 1) = this; /*0x4d1629*/
    DataGlobal_8B3CCC = 0; /*0x4d1633*/
    ++g_MissionState; /*0x4d163a*/
  }
  return this; /*0x4d1641*/
}
}

// 0x4D2510
int FoggedObjectClass::LoadTypeData(int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  signed int i; // eax

  int * v2 = (int *)a2; /*0x4d2514*/
  int * v3 = a1; /*0x4d251b*/
  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x4d2521*/
  if ( result < 0 ) /*0x4d252a*/
    return result; /*0x4d252a*/
  if ( v3 ) /*0x4d2532*/
  {
    AbstractClass::InitVtables(v3, (int)&a2); /*0x4d253b*/
    FoggedObject::DrawVector_Constructor(v3 + 23, 0, 0); /*0x4d2547*/
    v3[23] = (int)&vt_DynamicVectorClass_FoggedObjectClass_DrawRecord; /*0x4d254c*/
    v3[28] = 10; /*0x4d2552*/
    v3[27] = 0; /*0x4d2559*/
    *v3 = (int)&FoggedObjectClass::`vftable'; /*0x4d255c*/
    v3[1] = (int)&FoggedObjectClass::`vftable'; /*0x4d2562*/
    v3[2] = (int)&FoggedObjectClass::`vftable'; /*0x4d2569*/
    v3[3] = (int)&vt_FoggedObjectClass; /*0x4d2570*/
  }
  ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v3 + 10); /*0x4d2580*/
  int v5 = *v2; /*0x4d2585*/
  a1 = 0; /*0x4d2590*/
  result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v5 + 12))(v2, &a1, 4, 0); /*0x4d2594*/
  a2 = result; /*0x4d2599*/
  if ( result < 0 ) /*0x4d259d*/
    return result; /*0x4d259d*/
  int v17 = 0; /*0x4d25a7*/
  if ( (int)a1 <= 0 ) /*0x4d25ad*/
  {
  int v13; // ebx
LABEL_14:
    v17 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(*v3 + 96))(v3, &v17); /*0x4d2665*/
    int v12 = 74 * (SHIWORD(v17) - (((__int16)v17 + SHIWORD(v17)) << 9) - (__int16)v17) - v3[12] + 0x7FFFFFFF; /*0x4d26a1*/
    if ( (int)(g_MissionState + 1) <= DataGlobal_8B3CC8 ) /*0x4d26aa*/
    {
LABEL_22:
      *((_DWORD *)g_MissionPool + 2 * g_MissionState) = v12; /*0x4d2745*/
      *((_DWORD *)g_MissionPool + 2 * g_MissionState + 1) = v3; /*0x4d275f*/
      DataGlobal_8B3CCC = 0; /*0x4d2769*/
      ++g_MissionState; /*0x4d2770*/
      return a2; /*0x4d2770*/
    }
    if ( DataGlobal_8B3CC8 ) /*0x4d26b2*/
    {
      v13 = DataGlobal_8B3CC8; /*0x4d26bb*/
      if ( DataGlobal_8B3CC8 < 0 ) /*0x4d26bf*/
        return a2; /*0x4d26bf*/
    }
    else
    {
      v13 = 10; /*0x4d26b4*/
    }
    v17 = v13 + DataGlobal_8B3CC8; /*0x4d26c7*/
    _DWORD * v14 = __2_YAPAXI_Z(8 * (v13 + DataGlobal_8B3CC8)); /*0x4d26d8*/
    if ( v14 ) /*0x4d26df*/
    {
      --v17; /*0x4d26f0*/
  _DWORD *v16; // edx
      for ( i = 0; i < (int)g_MissionState; v14[2 * i - 1] = v16[1] ) /*0x4d26f8*/
      {
        v16 = (char *)g_MissionPool + 8 * i++; /*0x4d2700*/
        v14[2 * i - 2] = *v16; /*0x4d2706*/
      }
      __3_YAXPAX_Z(g_MissionPool); /*0x4d2721*/
      g_MissionPool = v14; /*0x4d2730*/
      DataGlobal_8B3CC8 += v13; /*0x4d2736*/
      DataGlobal_8B3CD0 = 0; /*0x4d273b*/
      goto LABEL_22; /*0x4d273b*/
    }
    return a2; /*0x4d2775*/
  }
  while ( 1 ) /*0x4d25b3*/
  {
    int v6 = *v2; /*0x4d25b3*/
    int v18 = 0; /*0x4d25be*/
    int v19 = 0; /*0x4d25c2*/
  int v20; // [esp+38h] [ebp-8h]
    LOBYTE(v20) = 0; /*0x4d25c6*/
    int v21 = 0; /*0x4d25cb*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 12))(v2, &v18, 16, 0); /*0x4d25cf*/
    a2 = result; /*0x4d25d4*/
    if ( result < 0 ) /*0x4d25d8*/
      return result; /*0x4d2779*/
    int v7 = v3[25]; /*0x4d25de*/
    if ( v3[27] < v7 /*0x4d2605*/
      || (*((_BYTE *)v3 + 105) || !v7)
  int v8; // eax
      && (v8 = v3[28], v8 > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v3[23] + 8))(v3 + 23, v7 + v8, 0) )
    {
      int v9 = v3[27]; /*0x4d260c*/
      int v10 = v18; /*0x4d260f*/
      v3[27] = v9 + 1; /*0x4d2616*/
      _DWORD * v11 = (_DWORD *)(v3[24] + 16 * v9); /*0x4d261f*/
      *v11 = v10; /*0x4d2621*/
      v11[1] = v19; /*0x4d2627*/
      v11[2] = v20; /*0x4d262e*/
      v11[3] = v21; /*0x4d2635*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(16 * v3[27] + v3[24] - 16)); /*0x4d264b*/
    if ( ++v17 >= (int)a1 ) /*0x4d265f*/
      goto LABEL_14; /*0x4d265f*/
  }
}
}

// 0x4D2810
HouseClass * FoggedObjectClass::PowerDrainUpdate(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  AbstractClass::ProcessPower((#378 *)this); /*0x4d2819*/
  Power::TimerProcess(this->LastSight); /*0x4d2824*/
  Power::TimerProcess(this->Cell); /*0x4d282f*/
  Power::TimerProcess(this->q030); /*0x4d283a*/
  Power::TimerProcess(this->q034); /*0x4d2845*/
  Power::TimerProcess(this->q038); /*0x4d2850*/
  Power::TimerProcess(this->q03C); /*0x4d285b*/
  Power::TimerProcess(this->q040); /*0x4d2866*/
  Power::TimerProcess(this->q044); /*0x4d2871*/
  Power::TimerProcess(this->q048); /*0x4d287c*/
  Power::TimerProcess(this->q04C); /*0x4d2887*/
  Power::TimerProcess(this->q050); /*0x4d2892*/
  Power::TimerProcess(this->q054); /*0x4d289d*/
  Power::TimerProcess(this->q058); /*0x4d28a8*/
  return Power::TimerProcess(this->q06C); /*0x4d28b8*/
}
}

// 0x4D28D0
unsigned int * FoggedObjectClass::CheckVisibility(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v3; // [esp+0h] [ebp-4h]
  LOWORD(v3) = this->q034 / 256; /*0x4d28e0*/
  HIWORD(v3) = this->q038 / 256; /*0x4d28f4*/
  *a2 = v3; /*0x4d2901*/
  return a2; /*0x4d2904*/
}
}

// 0x4D2BC0
AbstractClass * FoggedObjectClass::ResizeArray(int a2, char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v3 = a2; /*0x4d2bc2*/
  if ( a2 ) /*0x4d2bce*/
  {
    char * v5 = a3; /*0x4d2bd4*/
    this->vtable4 = 0; /*0x4d2bd8*/
    if ( a3 ) /*0x4d2bdd*/
    {
      if ( a2 - 1 >= 0 ) /*0x4d2c1a*/
      {
        char * v9 = a3 + 8; /*0x4d2c1c*/
        int v10 = a2; /*0x4d2c1f*/
        do /*0x4d2c2f*/
        {
          *((_DWORD *)v9 - 2) = 0; /*0x4d2c20*/
          *((_DWORD *)v9 - 1) = 0; /*0x4d2c23*/
          *v9 = 0; /*0x4d2c26*/
          *((_DWORD *)v9 + 1) = 0; /*0x4d2c28*/
          v9 += 16; /*0x4d2c2b*/
          --v10; /*0x4d2c2e*/
        }
        while ( v10 ); /*0x4d2c2f*/
      }
    }
    else
    {
      char * v6 = (char *)__2_YAPAXI_Z(16 * a2); /*0x4d2be5*/
      if ( v6 ) /*0x4d2bef*/
      {
        if ( a2 - 1 >= 0 ) /*0x4d2bf6*/
        {
          char * v7 = v6 + 8; /*0x4d2bf8*/
          int v8 = a2; /*0x4d2bfb*/
          do /*0x4d2c0b*/
          {
            *((_DWORD *)v7 - 2) = 0; /*0x4d2bfc*/
            *((_DWORD *)v7 - 1) = 0; /*0x4d2bff*/
            *v7 = 0; /*0x4d2c02*/
            *((_DWORD *)v7 + 1) = 0; /*0x4d2c04*/
            v7 += 16; /*0x4d2c07*/
            --v8; /*0x4d2c0a*/
          }
          while ( v8 ); /*0x4d2c0b*/
        }
        v5 = v6; /*0x4d2c0d*/
      }
      else
      {
        v5 = 0; /*0x4d2c11*/
      }
    }
    this->vtable4 = 1; /*0x4d2c33*/
    if ( !v5 ) /*0x4d2c37*/
      return 0; /*0x4d2cc7*/
    if ( this->vtable1 ) /*0x4d2c3d*/
    {
      AbstractClass *v11 = this->vtable2; /*0x4d2c42*/
      if ( a2 < v11 ) /*0x4d2c47*/
        v11 = a2; /*0x4d2c49*/
      if ( v11 > 0 ) /*0x4d2c4d*/
      {
        int v12 = 0; /*0x4d2c4f*/
        do /*0x4d2c75*/
        {
          _DWORD * v13 = (_DWORD *)(this->vtable1 + v12); /*0x4d2c56*/
          char * v14 = &v5[v12]; /*0x4d2c58*/
          v12 += 16; /*0x4d2c5b*/
          --v11; /*0x4d2c5e*/
          *(_DWORD *)v14 = *v13; /*0x4d2c61*/
          *((_DWORD *)v14 + 1) = v13[1]; /*0x4d2c66*/
          *((_DWORD *)v14 + 2) = v13[2]; /*0x4d2c6c*/
          *((_DWORD *)v14 + 3) = v13[3]; /*0x4d2c72*/
        }
        while ( v11 ); /*0x4d2c75*/
        v3 = a2; /*0x4d2c77*/
      }
      if ( this->q034 ) /*0x4d2c7d*/
      {
        __3_YAXPAX_Z(this->vtable2); /*0x4d2c86*/
        this->vtable1 = 0; /*0x4d2c8e*/
      }
    }
    this->vtable1 = v5; /*0x4d2c99*/
    this->vtable2 = v3; /*0x4d2c9f*/
    this->q034 = a3 == 0; /*0x4d2ca2*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->vtable4)(this); /*0x4d2cab*/
  }
  AbstractClass *v15 = this->vtable2; /*0x4d2cae*/
  if ( v15 < this->uniqueId ) /*0x4d2cb6*/
    this->uniqueId = v15; /*0x4d2cb8*/
  return 1; /*0x4d2cbb*/
}
}

// 0x4D2CD0
int FoggedObjectClass::Read(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  _DWORD *i; // ecx

  int v2 = this->vtable2; /*0x4d2cd0*/
  result = 0; /*0x4d2cd5*/
  if ( v2 <= 0 ) /*0x4d2cdb*/
    return -1; /*0x4d2cfc*/
  for ( i = (_DWORD *)this->vtable2; *i != *a2 || i[1] != a2[1]; i += 4 ) /*0x4d2ce1*/
  {
    if ( ++result >= v2 ) /*0x4d2cfa*/
      return -1; /*0x4d2cfa*/
  }
  return result; /*0x4d2cff*/
}
}

// 0x4E07B0
namespace gamemd {
int FoggedObjectClass_42::FindItem(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  _DWORD *i; // ecx

  int v2 = this->Items; /*0x4e07b0*/
  result = 0; /*0x4e07b3*/
  if ( v2 <= 0 ) /*0x4e07b8*/
    return -1; /*0x4e07cf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4e07be*/
  {
    if ( ++result >= v2 ) /*0x4e07cd*/
      return -1; /*0x4e07cd*/
  }
  return result; /*0x4e07d2*/
}
}
} // namespace gamemd

// 0x4D24A0
int FoggedObjectClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    int v4;
    int v5;
    int v6;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
  {
    v4 = *a1;
    aP2 = *(int *)&aP0->Name[8];
    result = (*(int (__stdcall **)(int *, int *, int, int))(v4 + 16))(a1, &aP2, 4, 0);
    if ( result >= 0 )
    {
    v5 = 0;
    if ( aP2 > 0 )
      {
    v6 = 0;
    do
        {
    if ( (*(int (__stdcall **)(int *, char *, int, int))(*a1 + 16))(a1, (char *)aP0->UIName + v6, 16, 0) < 0 )
    break;
    ++v5;
    v6 += 16;
        }
    while ( v5 < aP2 );
      }
    return 0;
    }
  }
    return result;
}
}

// 0x4D27B0
int FoggedObjectClass::GetTypeIdentifier()
{
return 61;
}

// 0x4D27C0
int FoggedObjectClass::GetObjectSize()
{
return 120;
}

// 0x4D27D0
int FoggedObjectClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 474417934;
  a2[1] = 299002327;
  a2[2] = 1610674872;
  a2[3] = -318126072;
  return 0;
}

// 0x4D2910
FoggedObjectClass * FoggedObjectClass::ddtor(char a2)
{
{
    DestructFoggedObjectClass((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (FoggedObjectClass *)this;
}
}

// 0x4D29B0
char FoggedObjectClass::AddRef(int a2)
{
{
    int v2;
    int v3;
    int v4;
    int *v5;
    int *v6;
    int v7;
    v2 = this->vtable2;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(int *)(a2 + 4);
    v5 = (int *)this->vtable1;
    v6 = (int *)(v4 + 4);
    v7 = v4 - (int)v5;
    while ( *v5 == *(int *)((char *)(v5) + v7) && v5[1] == *v6 )
    {
    ++v3;
    v6 += 4;
    v5 += 4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}

// 0x4D2D60
DynamicVector * FoggedObjectClass::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_FoggedObjectClass_DrawRecord;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}

// 0x4E01F0
namespace gamemd {
void FoggedObjectClass_42::ClearBuffer()
{
{
    void *v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
    {
        OperatorDelete(v2);
        this->Items = 0;
    }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4E0220
namespace gamemd {
unsigned int FoggedObjectClass_42::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->FoggedObjectClass_42_field_0xC )
    return (unsigned int)(a2 - this->FoggedObjectClass_42_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E0240
namespace gamemd {
int FoggedObjectClass_42::Seek(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E0580
namespace gamemd {
char FoggedObjectClass_42::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x4E05C0
namespace gamemd {
char FoggedObjectClass_42::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->FoggedObjectClass_42_field_0x4 )
      {
    v6 = this->FoggedObjectClass_42_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->FoggedObjectClass_42_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->FoggedObjectClass_42_field_0x4 = 0;
        }
      }
    this->FoggedObjectClass_42_field_0x4 = v4;
    this->FoggedObjectClass_42_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->FindItem();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4E0670
namespace gamemd {
void FoggedObjectClass_42::ddtor()
{
{
    if ( this->FoggedObjectClass_42_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->FoggedObjectClass_42_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->FoggedObjectClass_42_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x4E06A0
namespace gamemd {
int FoggedObjectClass_42::Read(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->FoggedObjectClass_42_field_0xC )
    return 0;
    v3 = this->FoggedObjectClass_42_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4E06E0
namespace gamemd {
unsigned int FoggedObjectClass_42::Write(int a2)
{
{
    if ( (unsigned char)this->FoggedObjectClass_42_field_0xC )
    return (unsigned int)(a2 - this->FoggedObjectClass_42_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E0700
namespace gamemd {
char FoggedObjectClass_42::SetCapacity(int a2, unsigned int * a3)
{
{
    if ( a2 )
    {
        this->IsInitialized = 0;
        unsigned int *v4 = a3;
        if ( !a3 )
            v4 = (unsigned int *)OperatorNew(4 * a2);
        this->IsInitialized = 1;
        if ( !v4 )
            return 0;
        if ( this->Items )
        {
            int v5 = this->Capacity;
            if ( a2 < v5 )
                v5 = a2;
            int i;
            for ( i = 0; i < v5; v4[i - 1] = this->Items[i - 1] )
                ++i;
            if ( this->IsAllocated )
            {
                OperatorDelete(this->Items);
                this->Items = 0;
            }
        }
        this->Items = v4;
        this->Capacity = a2;
        this->IsAllocated = a3 == 0;
    }
    else
    {
        this->GetClassIdentifier();
    }
    int v7 = this->Capacity;
    if ( v7 < this->Count )
        this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4E0CE0
namespace gamemd {
VectorClass * FoggedObjectClass_42::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_FootClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd
