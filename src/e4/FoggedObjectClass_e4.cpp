// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FoggedObjectClass_42_e4.hpp"

// 0x4D0980
int FoggedObjectClass::InitBuildingFog(unsigned int * a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall FoggedObjectClass::InitBuildingFog(int this, _DWORD *a2, int a3, int a4)
{
  void *v5; // ebp
  int *PlacementRectBuildingClass; // edi
  int *StartCoordsHouse; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // ebp
  int v11; // ebx
  int v12; // eax
  int v13; // edi
  int v14; // ebp
  int v15; // ecx
  int v16; // edi
  int v17; // ebp
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // edi
  int v24; // [esp+18h] [ebp-28h]
  int v25[4]; // [esp+20h] [ebp-20h] BYREF
  int v26[4]; // [esp+30h] [ebp-10h] BYREF
  int v27; // [esp+44h] [ebp+4h]
  int v28; // [esp+48h] [ebp+8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0989*/
  this->LastSight = a3; /*0x4d099e*/
  this->House = 0; /*0x4d09a1*/
  this->Cell = a4; /*0x4d09a4*/
  *(_DWORD *)(this + 48) = 20; /*0x4d09a7*/
  *(_DWORD *)(this + 52) = *a2; /*0x4d09b4*/
  *(_DWORD *)(this + 56) = a2[1]; /*0x4d09b9*/
  *(_DWORD *)(this + 60) = a2[2]; /*0x4d09c4*/
  *(_DWORD *)(this + 80) = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], a2) + 283); /*0x4d09da*/
  *(_DWORD *)(this + 84) = -1; /*0x4d09dd*/
  *(_DWORD *)(this + 88) = 0; /*0x4d09e4*/
  FoggedObject::DrawVector_Constructor((_DWORD *)(this + 92), 0, 0); /*0x4d09e7*/
  *(_DWORD *)(this + 92) = &DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d09ec*/
  *(_DWORD *)(this + 112) = 10; /*0x4d09f2*/
  *(_DWORD *)(this + 108) = 0; /*0x4d09f9*/
  *(_BYTE *)(this + 116) = 1; /*0x4d0a02*/
  *(_DWORD *)this = &FoggedObjectClass::`vftable'; /*0x4d0a06*/
  this->vtable1 = &FoggedObjectClass::`vftable'; /*0x4d0a0c*/
  this->vtable2 = &FoggedObjectClass::`vftable'; /*0x4d0a13*/
  this->vtable3 = &FoggedObjectClass::`vftable'; /*0x4d0a1a*/
  v5 = Coord::To_Cell(&MEMORY[0x87F7E8], a2); /*0x4d0a2a*/
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
    v28 = PlacementRectBuildingClass[2]; /*0x4d0a59*/
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
      v9 = *PlacementRectBuildingClass; /*0x4d0a6c*/
      v10 = StartCoordsHouse[2]; /*0x4d0a6e*/
      v11 = StartCoordsHouse[1]; /*0x4d0a71*/
      v12 = StartCoordsHouse[3]; /*0x4d0a74*/
      v24 = v10; /*0x4d0a79*/
      if ( v8 > *PlacementRectBuildingClass ) /*0x4d0a7d*/
      {
        v10 += v8 - v9; /*0x4d0a81*/
        v8 = *PlacementRectBuildingClass; /*0x4d0a83*/
        v24 = v10; /*0x4d0a85*/
      }
      v13 = PlacementRectBuildingClass[1]; /*0x4d0a89*/
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
  *(_DWORD *)(this + 64) = v8; /*0x4d0aef*/
  *(_DWORD *)(this + 68) = v15; /*0x4d0af1*/
  *(_DWORD *)(this + 72) = v14; /*0x4d0af4*/
  *(_DWORD *)(this + 76) = v16; /*0x4d0af7*/
  v17 = *(_DWORD *)(this + 68); /*0x4d0b00*/
  *(_DWORD *)(this + 64) += MEMORY[0x887324][44].__tail_0; /*0x4d0b0d*/
  *(_DWORD *)(this + 68) = (char *)MEMORY[0x887324][45].__tail_0 + v17; /*0x4d0b1d*/
  v18 = *(_DWORD *)(this + 68) - MEMORY[0x886FA4]; /*0x4d0b33*/
  *(_DWORD *)(this + 64) -= MEMORY[0x886FA0]; /*0x4d0b35*/
  *(_DWORD *)(this + 68) = v18; /*0x4d0b37*/
  if ( MEMORY[0x8B3D20] < MEMORY[0x8B3D18] /*0x4d0b6f*/
    || (MEMORY[0x8B3D1D] || !MEMORY[0x8B3D18])
    && MEMORY[0x8B3D24] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x8B3D10] + 8))(
         &MEMORY[0x8B3D10],
         MEMORY[0x8B3D24] + MEMORY[0x8B3D18],
         0) )
  {
    v19 = MEMORY[0x8B3D20]++; /*0x4d0b7c*/
    *((_DWORD *)MEMORY[0x8B3D14] + v19) = this; /*0x4d0b8b*/
  }
  v20 = (__int16)(*(_DWORD *)(this + 52) / 256); /*0x4d0bb4*/
  v21 = MEMORY[0x8B3CC8]; /*0x4d0bcd*/
  v22 = 74 * ((__int16)(*(_DWORD *)(this + 56) / 256) - ((v20 + (__int16)(*(_DWORD *)(this + 56) / 256)) << 9) - v20) /*0x4d0bd6*/
      - *(_DWORD *)(this + 48)
      + 0x7FFFFFFF;
  if ( (int)(MEMORY[0x8B3CC4] + 1) <= MEMORY[0x8B3CC8] ) /*0x4d0bdf*/
    goto LABEL_27; /*0x4d0bdf*/
  if ( !MEMORY[0x8B3CC8] ) /*0x4d0be3*/
    v21 = 10; /*0x4d0be5*/
  if ( Vector::ReallocDynamic((int)&MEMORY[0x8B3CC0], v21) ) /*0x4d0bf0*/
  {
LABEL_27:
    *((_DWORD *)MEMORY[0x8B3CC0] + 2 * MEMORY[0x8B3CC4]) = v22; /*0x4d0c04*/
    *((_DWORD *)MEMORY[0x8B3CC0] + 2 * MEMORY[0x8B3CC4] + 1) = this; /*0x4d0c12*/
    MEMORY[0x8B3CCC] = 0; /*0x4d0c1c*/
    ++MEMORY[0x8B3CC4]; /*0x4d0c23*/
  }
  return this; /*0x4d0c2a*/
}
}

// 0x4D0C40
FoggedObjectClass * FoggedObjectClass::InitTerrainFog(IUnknown * aP1, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
FoggedObjectClass *__thiscall FoggedObjectClass::InitTerrainFog(int this, IUnknown *aP1, int a3, int a4)
{
  int v5; // eax
  char *v6; // eax
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  IUnknown *v12; // edx
  int v13; // edx
  int v14; // eax
  int v15; // edi
  int v16; // ebp
  AbstractClass *v17; // ebx
  int i; // eax
  _DWORD *v19; // ecx
  int v21; // [esp+10h] [ebp-24h] BYREF
  int v22; // [esp+14h] [ebp-20h]
  _DWORD a1[2]; // [esp+18h] [ebp-1Ch] BYREF
  int v24; // [esp+20h] [ebp-14h]
  IUnknown *v25; // [esp+30h] [ebp-4h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0c49*/
  this->LastSight = -1; /*0x4d0c5a*/
  this->House = 0; /*0x4d0c61*/
  this->Cell = 0; /*0x4d0c64*/
  *(_DWORD *)(this + 48) = 29; /*0x4d0c67*/
  v5 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], aP1) + 283); /*0x4d0c73*/
  *(_DWORD *)(this + 84) = a3; /*0x4d0c85*/
  *(_DWORD *)(this + 80) = v5; /*0x4d0c8c*/
  *(_DWORD *)(this + 88) = a4; /*0x4d0c8f*/
  FoggedObject::DrawVector_Constructor((_DWORD *)(this + 92), 0, 0); /*0x4d0c92*/
  *(_DWORD *)(this + 92) = &DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d0c97*/
  *(_DWORD *)(this + 112) = 10; /*0x4d0c9e*/
  *(_DWORD *)(this + 108) = 0; /*0x4d0ca5*/
  *(_BYTE *)(this + 116) = 1; /*0x4d0cae*/
  *(_DWORD *)this = &FoggedObjectClass::`vftable'; /*0x4d0cb2*/
  this->vtable1 = &FoggedObjectClass::`vftable'; /*0x4d0cb8*/
  this->vtable2 = &FoggedObjectClass::`vftable'; /*0x4d0cbf*/
  this->vtable3 = &FoggedObjectClass::`vftable'; /*0x4d0cc6*/
  v6 = (char *)Coord::To_Cell(&MEMORY[0x87F7E8], aP1); /*0x4d0ccd*/
  v7 = aP1->field_4; /*0x4d0cd4*/
  v8 = aP1->field_8; /*0x4d0cd7*/
  a1[0] = aP1->field_0; /*0x4d0cda*/
  a1[1] = v7; /*0x4d0cde*/
  v24 = v8; /*0x4d0ce2*/
  v9 = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61244] * v6[283]; /*0x4d0ced*/
  v24 = v9; /*0x4d0cf7*/
  *(_DWORD *)(this + 52) = a1[0]; /*0x4d0cfd*/
  *(_DWORD *)(this + 56) = v7; /*0x4d0d03*/
  *(_DWORD *)(this + 60) = v9; /*0x4d0d06*/
  Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], a1, (IUnknown *)&v21); /*0x4d0d15*/
  v10 = v21 - 30; /*0x4d0d25*/
  v22 -= 15; /*0x4d0d32*/
  v11 = v22; /*0x4d0d2a*/
  *(_DWORD *)(this + 64) = v21 - 30; /*0x4d0d36*/
  v25 = (IUnknown *)30; /*0x4d0d38*/
  v21 = v10; /*0x4d0d40*/
  *(_DWORD *)(this + 68) = v11; /*0x4d0d44*/
  v12 = v25; /*0x4d0d47*/
  *(_DWORD *)(this + 72) = 60; /*0x4d0d4b*/
  *(_DWORD *)(this + 76) = v12; /*0x4d0d4e*/
  v13 = *(_DWORD *)(this + 68); /*0x4d0d61*/
  *(_DWORD *)(this + 64) += *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 176); /*0x4d0d64*/
  *(_DWORD *)(this + 68) = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 180) + v13; /*0x4d0d73*/
  if ( *(int *)&MEMORY[0x89F690].__pad_579C[61172] < *(int *)&MEMORY[0x89F690].__pad_579C[61164] /*0x4d0dab*/
    || (MEMORY[0x89F690].__pad_579C[61169] || !*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61164])
    && *(int *)&MEMORY[0x89F690].__pad_579C[61176] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61156] + 8))(
         &MEMORY[0x89F690].__pad_579C[61156],
         *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61164] + *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61176],
         0) )
  {
    v14 = (*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61172])++; /*0x4d0db8*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61160] + 4 * v14) = this; /*0x4d0dc7*/
  }
  v15 = 74 /*0x4d0e11*/
      * ((__int16)(*(_DWORD *)(this + 56) / 256)
       - (((__int16)(*(_DWORD *)(this + 52) / 256) + (__int16)(*(_DWORD *)(this + 56) / 256)) << 9)
       - (__int16)(*(_DWORD *)(this + 52) / 256))
      - *(_DWORD *)(this + 48)
      + 0x7FFFFFFF;
  if ( *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61080] + 1 <= *(int *)&MEMORY[0x89F690].__pad_579C[61084] ) /*0x4d0e1a*/
    goto LABEL_15; /*0x4d0e1a*/
  if ( *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61084] ) /*0x4d0e22*/
  {
    v16 = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61084]; /*0x4d0e2b*/
    if ( *(int *)&MEMORY[0x89F690].__pad_579C[61084] < 0 ) /*0x4d0e2f*/
      return (FoggedObjectClass *)this; /*0x4d0e2f*/
  }
  else
  {
    v16 = 10; /*0x4d0e24*/
  }
  v17 = (AbstractClass *)__2_YAPAXI_Z(8 * (v16 + *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61084])); /*0x4d0e44*/
  if ( v17 ) /*0x4d0e4b*/
  {
    for ( i = 0; i < *(int *)&MEMORY[0x89F690].__pad_579C[61080]; *(_DWORD *)&v17->__pad_0[8 * i - 4] = v19[1] ) /*0x4d0e64*/
    {
      v19 = (_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61076] + 8 * i++); /*0x4d0e6c*/
      *(_DWORD *)&v17->__pad_0[8 * i - 8] = *v19; /*0x4d0e72*/
    }
    __3_YAXPAX_Z(*(void **)&MEMORY[0x89F690].__pad_579C[61076]); /*0x4d0e8e*/
    *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61076] = v17; /*0x4d0e9d*/
    *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61084] += v16; /*0x4d0ea3*/
    *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61092] = 0; /*0x4d0ea8*/
LABEL_15:
    *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61076] + 8 * *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61080]) = v15; /*0x4d0eb2*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61076] + 8 * *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61080] + 4) = this; /*0x4d0ecb*/
    MEMORY[0x89F690].__pad_579C[61088] = 0; /*0x4d0ed5*/
    ++*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61080]; /*0x4d0edc*/
  }
  return (FoggedObjectClass *)this; /*0x4d0ee3*/
}
}

// 0x4D0EF0
int FoggedObjectClass::Constructor(BuildingClass * aP1, FoggedObjectClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall FoggedObjectClass::Constructor(int this, BuildingClass *aP1, FoggedObjectClass *aP2)
{
  HouseClass *v4; // eax
  int v5; // ecx
  int v6; // edx
  VectorClass *v7; // esi
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int ProductionFrame; // eax
  _BYTE *Type; // ebp
  int LaserFenceFrame; // eax
  char v15; // al
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  BuildingClass *v19; // ecx
  _DWORD *v20; // edx
  int *Anims; // ebx
  int v22; // eax
  BuildingClass **v23; // ecx
  BuildingClass *v24; // edx
  int v25; // ebp
  int v26; // ebx
  BuildingClass *v27; // ecx
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  BuildingClass *v32; // ecx
  int v33; // edx
  int v34; // ebp
  int v35; // ecx
  int v36; // ebp
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  BuildingClass **v40; // eax
  BuildingClass *v41; // ecx
  BuildingClass *v42; // edx
  bool v43; // zf
  int *v45; // [esp+20h] [ebp-40h]
  int v46; // [esp+24h] [ebp-3Ch]
  int v47; // [esp+28h] [ebp-38h]
  int v48; // [esp+2Ch] [ebp-34h]
  _DWORD v49[2]; // [esp+30h] [ebp-30h] BYREF
  int v50; // [esp+38h] [ebp-28h]
  int v51; // [esp+3Ch] [ebp-24h]
  char v52[8]; // [esp+40h] [ebp-20h] BYREF
  BuildingClass *v53; // [esp+48h] [ebp-18h]
  BuildingClass *v54; // [esp+4Ch] [ebp-14h]
  int v55[4]; // [esp+50h] [ebp-10h] BYREF
  BuildingClass *aP1a; // [esp+64h] [ebp+4h]
  FoggedObjectClass *aP2a; // [esp+68h] [ebp+8h]
  FoggedObjectClass *aP2b; // [esp+68h] [ebp+8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0ef9*/
  this->LastSight = -1; /*0x4d0f02*/
  v4 = (HouseClass *)aP1->focus; /*0x4d0f0c*/
  this->Cell = 0; /*0x4d0f12*/
  this->House = v4; /*0x4d0f19*/
  *(_DWORD *)(this + 48) = 6; /*0x4d0f24*/
  *(_DWORD *)(this + 52) = aP1->location[0]; /*0x4d0f2f*/
  *(_DWORD *)(this + 56) = aP1->location[1]; /*0x4d0f34*/
  *(_DWORD *)(this + 60) = aP1->location[2]; /*0x4d0f3a*/
  v5 = aP1->location[1]; /*0x4d0f3f*/
  v49[0] = aP1->location[0]; /*0x4d0f42*/
  v6 = aP1->location[2]; /*0x4d0f46*/
  v49[1] = v5; /*0x4d0f4d*/
  v50 = v6; /*0x4d0f57*/
  v7 = (VectorClass *)(this + 92); /*0x4d0f67*/
  *(_DWORD *)(this + 80) = *((char *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v49) + 283); /*0x4d0f6a*/
  *(_DWORD *)(this + 84) = -1; /*0x4d0f73*/
  *(_DWORD *)(this + 88) = 0; /*0x4d0f7a*/
  FoggedObject::DrawVector_Constructor((_DWORD *)(this + 92), 0, 0); /*0x4d0f81*/
  *(_DWORD *)(this + 92) = &DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d0f8a*/
  *(_DWORD *)(this + 112) = 10; /*0x4d0f90*/
  *(_DWORD *)(this + 108) = 0; /*0x4d0f97*/
  *(_BYTE *)(this + 116) = (_BYTE)aP2; /*0x4d0fa2*/
  *(_DWORD *)this = &FoggedObjectClass::`vftable'; /*0x4d0fa5*/
  this->vtable1 = &FoggedObjectClass::`vftable'; /*0x4d0fab*/
  this->vtable2 = &FoggedObjectClass::`vftable'; /*0x4d0fb2*/
  this->vtable3 = &FoggedObjectClass::`vftable'; /*0x4d0fb9*/
  v8 = (_DWORD *)(*(int (__thiscall **)(BuildingClass *, char *))(*(_DWORD *)aP1->__pad_0 + 300))(aP1, v52); /*0x4d0fc5*/
  *(_DWORD *)(this + 64) = *v8; /*0x4d0fd2*/
  *(_DWORD *)(this + 68) = v8[1]; /*0x4d0fd7*/
  *(_DWORD *)(this + 72) = v8[2]; /*0x4d0fdd*/
  *(_DWORD *)(this + 76) = v8[3]; /*0x4d0fe3*/
  if ( *(int *)&stru_89E138.__pad_579C[66636] < *(int *)&stru_89E138.__pad_579C[66628] /*0x4d101a*/
    || (stru_89E138.__pad_579C[66633] || !*(_DWORD *)&stru_89E138.__pad_579C[66628])
    && *(int *)&stru_89E138.__pad_579C[66640] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_89E138.__pad_579C[66620] + 8))(
         &stru_89E138.__pad_579C[66620],
         *(_DWORD *)&stru_89E138.__pad_579C[66628] + *(_DWORD *)&stru_89E138.__pad_579C[66640],
         0) )
  {
    v9 = (*(_DWORD *)&stru_89E138.__pad_579C[66636])++; /*0x4d1027*/
    *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66624] + 4 * v9) = this; /*0x4d1036*/
  }
  v10 = *(_DWORD *)&stru_89E138.__pad_579C[66548]; /*0x4d107c*/
  v11 = 74 /*0x4d1081*/
      * ((__int16)(*(_DWORD *)(this + 56) / 256)
       - (((__int16)(*(_DWORD *)(this + 52) / 256) + (__int16)(*(_DWORD *)(this + 56) / 256)) << 9)
       - (__int16)(*(_DWORD *)(this + 52) / 256))
      - *(_DWORD *)(this + 48)
      + 0x7FFFFFFF;
  if ( *(_DWORD *)&stru_89E138.__pad_579C[66544] + 1 <= *(int *)&stru_89E138.__pad_579C[66548] ) /*0x4d108a*/
    goto LABEL_11; /*0x4d108a*/
  if ( !*(_DWORD *)&stru_89E138.__pad_579C[66548] ) /*0x4d108e*/
    v10 = 10; /*0x4d1090*/
  if ( Vector::ReallocDynamic((int)&stru_89E138.__pad_579C[66540], v10) ) /*0x4d109b*/
  {
LABEL_11:
    *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66540] + 8 * *(_DWORD *)&stru_89E138.__pad_579C[66544]) = v11; /*0x4d10af*/
    *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66540] + 8 * *(_DWORD *)&stru_89E138.__pad_579C[66544] + 4) = this; /*0x4d10bd*/
    stru_89E138.__pad_579C[66552] = 0; /*0x4d10c7*/
    ++*(_DWORD *)&stru_89E138.__pad_579C[66544]; /*0x4d10ce*/
  }
  aP1->IsFogged = 1; /*0x4d10d5*/
  ProductionFrame = BuildingClass::GetProductionFrame((int *)aP1->__pad_0); /*0x4d10dc*/
  Type = aP1->Type; /*0x4d10e1*/
  aP2a = (FoggedObjectClass *)ProductionFrame; /*0x4d10e7*/
  if ( Type[5823] && ((LaserFenceFrame = aP1->LaserFenceFrame, LaserFenceFrame == 12) || LaserFenceFrame == 8) /*0x4d1112*/
    || (v15 = Type[5824], LOBYTE(v53) = 0, v15) )
  {
    LOBYTE(v53) = 1; /*0x4d1114*/
  }
  v16 = *(_DWORD *)(this + 100); /*0x4d1119*/
  if ( *(_DWORD *)(this + 108) < v16 /*0x4d113e*/
    || (*(_BYTE *)(this + 105) || !v16)
    && (v17 = *(_DWORD *)(this + 112), v17 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7->__pad_0 + 8))(this + 92, v16 + v17, 0) )
  {
    v18 = *(_DWORD *)(this + 108); /*0x4d1145*/
    *(_DWORD *)(this + 108) = v18 + 1; /*0x4d114b*/
    v19 = v53; /*0x4d1156*/
    v20 = (_DWORD *)(*(_DWORD *)(this + 96) + 16 * v18); /*0x4d115a*/
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
    if ( !*Anims ) /*0x4d1183*/
      goto LABEL_47; /*0x4d1183*/
    *(_BYTE *)(*Anims + 409) = 1; /*0x4d1189*/
    aP1a = *(BuildingClass **)(*Anims + 200); /*0x4d119a*/
    v22 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)*Anims + 296))(*Anims, v55); /*0x4d11a3*/
    v23 = (BuildingClass **)(this + 64); /*0x4d11ac*/
    if ( *(int *)(this + 72) <= 0 || *(int *)(this + 76) <= 0 ) /*0x4d11bc*/
    {
      v32 = *(BuildingClass **)v22; /*0x4d1266*/
      v33 = *(_DWORD *)(v22 + 4); /*0x4d1268*/
      v34 = *(_DWORD *)(v22 + 8); /*0x4d126b*/
    }
    else
    {
      aP2b = *(FoggedObjectClass **)(v22 + 8); /*0x4d11c7*/
      if ( (int)aP2b > 0 ) /*0x4d11cb*/
      {
        v48 = *(_DWORD *)(v22 + 12); /*0x4d11d6*/
        if ( v48 > 0 ) /*0x4d11da*/
        {
          v24 = *v23; /*0x4d11dc*/
          v25 = *(_DWORD *)(this + 68); /*0x4d11de*/
          v26 = *(_DWORD *)(this + 72); /*0x4d11e1*/
          v50 = v26; /*0x4d11e4*/
          v51 = *(_DWORD *)(this + 76); /*0x4d11eb*/
          v27 = *(BuildingClass **)v22; /*0x4d11ef*/
          if ( (int)v24 > *(_DWORD *)v22 ) /*0x4d11f3*/
          {
            v28 = (char *)v24 - (char *)v27 + v26; /*0x4d11f7*/
            v24 = *(BuildingClass **)v22; /*0x4d11f9*/
            v50 = v28; /*0x4d11fb*/
          }
          v29 = *(_DWORD *)(v22 + 4); /*0x4d11ff*/
          v47 = v29; /*0x4d1204*/
          if ( v25 > v29 ) /*0x4d1208*/
          {
            v30 = v25 - v29 + v51; /*0x4d1210*/
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
      v33 = *(_DWORD *)(this + 68); /*0x4d125e*/
      v34 = *(_DWORD *)(this + 72); /*0x4d1261*/
    }
    v31 = *(_DWORD *)(v22 + 12); /*0x4d126e*/
LABEL_41:
    LOBYTE(v53) = 0; /*0x4d1271*/
    *(_DWORD *)(this + 64) = v32; /*0x4d1279*/
    *(_DWORD *)(this + 68) = v33; /*0x4d127f*/
    *(_DWORD *)(this + 72) = v34; /*0x4d1282*/
    *(_DWORD *)(this + 76) = v31; /*0x4d1285*/
    Anims = v45; /*0x4d1288*/
    v35 = *(_DWORD *)(this + 108); /*0x4d1292*/
    v36 = aP1a->sprayOffsetIndex + *(_DWORD *)(*v45 + 172); /*0x4d129d*/
    v37 = *(_DWORD *)(this + 100); /*0x4d12a5*/
    v54 = *(BuildingClass **)(*v45 + 256); /*0x4d12a8*/
    if ( v35 < v37 /*0x4d12cb*/
      || (*(_BYTE *)(this + 105) || !v37)
      && (v38 = *(_DWORD *)(this + 112), v38 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7->__pad_0 + 8))(this + 92, v37 + v38, 0) )
    {
      v39 = *(_DWORD *)(this + 108); /*0x4d12d2*/
      *(_DWORD *)(this + 108) = v39 + 1; /*0x4d12dc*/
      v40 = (BuildingClass **)(*(_DWORD *)(this + 96) + 16 * v39); /*0x4d12e5*/
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
  Cell::CreateCrater(*(_DWORD *)(this + 64), *(_DWORD *)(this + 68), *(_DWORD *)(this + 72), *(_DWORD *)(this + 76), 0); /*0x4d1338*/
  *(_DWORD *)(this + 64) += *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 176); /*0x4d134d*/
  *(_DWORD *)(this + 68) += *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 180); /*0x4d135f*/
  return this; /*0x4d1364*/
}
}

// 0x4D1370
int FoggedObjectClass::InitDrawRecord(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall FoggedObjectClass::InitDrawRecord(int this, _DWORD *a2)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // ebp
  _DWORD *v18; // ebx
  signed int i; // eax
  _DWORD *v20; // ecx
  _DWORD v22[2]; // [esp+10h] [ebp-10h] BYREF
  int v23; // [esp+18h] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d1379*/
  this->LastSight = -1; /*0x4d1384*/
  this->House = 0; /*0x4d138b*/
  this->Cell = 0; /*0x4d1394*/
  *(_DWORD *)(this + 48) = 36; /*0x4d1399*/
  *(_DWORD *)(this + 52) = a2[39]; /*0x4d13a5*/
  *(_DWORD *)(this + 56) = a2[40]; /*0x4d13aa*/
  *(_DWORD *)(this + 60) = a2[41]; /*0x4d13b0*/
  v3 = a2[40]; /*0x4d13b5*/
  v4 = a2[41]; /*0x4d13b8*/
  v22[0] = a2[39]; /*0x4d13bb*/
  v22[1] = v3; /*0x4d13c9*/
  v23 = v4; /*0x4d13cd*/
  *(_DWORD *)(this + 80) = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], v22) + 283); /*0x4d13e4*/
  *(_DWORD *)(this + 84) = -1; /*0x4d13e7*/
  *(_DWORD *)(this + 88) = 0; /*0x4d13ee*/
  FoggedObject::DrawVector_Constructor((_DWORD *)(this + 92), 0, 0); /*0x4d13f1*/
  *(_DWORD *)(this + 92) = &DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d13f6*/
  *(_DWORD *)(this + 112) = 10; /*0x4d13fc*/
  *(_DWORD *)(this + 108) = 0; /*0x4d1403*/
  *(_BYTE *)(this + 116) = 1; /*0x4d140a*/
  *(_DWORD *)this = &FoggedObjectClass::`vftable'; /*0x4d140e*/
  this->vtable1 = &FoggedObjectClass::`vftable'; /*0x4d1414*/
  this->vtable2 = &FoggedObjectClass::`vftable'; /*0x4d141b*/
  this->vtable3 = &FoggedObjectClass::`vftable'; /*0x4d1422*/
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*a2 + 300))(a2, v22); /*0x4d1431*/
  *(_DWORD *)(this + 64) = *v5; /*0x4d143b*/
  *(_DWORD *)(this + 68) = v5[1]; /*0x4d1440*/
  *(_DWORD *)(this + 72) = v5[2]; /*0x4d1446*/
  *(_DWORD *)(this + 76) = v5[3]; /*0x4d144c*/
  v6 = *(_DWORD *)(this + 68); /*0x4d1460*/
  *(_DWORD *)(this + 64) += MEMORY[0x887324][44].__tail_0; /*0x4d1463*/
  *(_DWORD *)(this + 68) = (char *)MEMORY[0x887324][45].__tail_0 + v6; /*0x4d1473*/
  if ( MEMORY[0x8B3D20] < MEMORY[0x8B3D18] /*0x4d14ab*/
    || (MEMORY[0x8B3D1D] || !MEMORY[0x8B3D18])
    && MEMORY[0x8B3D24] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x8B3D10] + 8))(
         &MEMORY[0x8B3D10],
         MEMORY[0x8B3D18] + MEMORY[0x8B3D24],
         0) )
  {
    v7 = MEMORY[0x8B3D20]++; /*0x4d14b8*/
    *((_DWORD *)MEMORY[0x8B3D14] + v7) = this; /*0x4d14c7*/
  }
  v8 = *(_DWORD *)(this + 100); /*0x4d14ca*/
  v9 = *(_DWORD *)(this + 108); /*0x4d14cd*/
  v10 = a2[50]; /*0x4d14d0*/
  LOBYTE(v23) = 0; /*0x4d14da*/
  if ( v9 < v8 /*0x4d14fc*/
    || (*(_BYTE *)(this + 105) || !v8)
    && (v11 = *(_DWORD *)(this + 112), v11 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 92) + 8))(this + 92, v8 + v11, 0) )
  {
    v12 = *(_DWORD *)(this + 108); /*0x4d1503*/
    *(_DWORD *)(this + 108) = v12 + 1; /*0x4d1509*/
    v13 = (_DWORD *)(*(_DWORD *)(this + 96) + 16 * v12); /*0x4d1514*/
    v14 = v23; /*0x4d1516*/
    *v13 = v10; /*0x4d151a*/
    v13[1] = 0; /*0x4d151c*/
    v13[2] = v14; /*0x4d151f*/
    v13[3] = 0; /*0x4d1524*/
  }
  v15 = (__int16)(*(_DWORD *)(this + 52) / 256); /*0x4d154d*/
  v16 = 74 * ((__int16)(*(_DWORD *)(this + 56) / 256) - ((v15 + (__int16)(*(_DWORD *)(this + 56) / 256)) << 9) - v15) /*0x4d156f*/
      - *(_DWORD *)(this + 48)
      + 0x7FFFFFFF;
  if ( (int)(MEMORY[0x8B3CC4] + 1) <= MEMORY[0x8B3CC8] ) /*0x4d1578*/
    goto LABEL_21; /*0x4d1578*/
  if ( MEMORY[0x8B3CC8] ) /*0x4d1580*/
  {
    v17 = MEMORY[0x8B3CC8]; /*0x4d1589*/
    if ( MEMORY[0x8B3CC8] < 0 ) /*0x4d158d*/
      return this; /*0x4d158d*/
  }
  else
  {
    v17 = 10; /*0x4d1582*/
  }
  v18 = __2_YAPAXI_Z(8 * (v17 + MEMORY[0x8B3CC8])); /*0x4d15a2*/
  if ( v18 ) /*0x4d15a9*/
  {
    for ( i = 0; i < (int)MEMORY[0x8B3CC4]; v18[2 * i - 1] = v20[1] ) /*0x4d15c2*/
    {
      v20 = (char *)MEMORY[0x8B3CC0] + 8 * i++; /*0x4d15ca*/
      v18[2 * i - 2] = *v20; /*0x4d15d0*/
    }
    __3_YAXPAX_Z(MEMORY[0x8B3CC0]); /*0x4d15ec*/
    MEMORY[0x8B3CC0] = v18; /*0x4d15fb*/
    MEMORY[0x8B3CC8] += v17; /*0x4d1601*/
    MEMORY[0x8B3CD0] = 0; /*0x4d1606*/
LABEL_21:
    *((_DWORD *)MEMORY[0x8B3CC0] + 2 * MEMORY[0x8B3CC4]) = v16; /*0x4d1610*/
    *((_DWORD *)MEMORY[0x8B3CC0] + 2 * MEMORY[0x8B3CC4] + 1) = this; /*0x4d1629*/
    MEMORY[0x8B3CCC] = 0; /*0x4d1633*/
    ++MEMORY[0x8B3CC4]; /*0x4d163a*/
  }
  return this; /*0x4d1641*/
}
}

// 0x4D24A0
int FoggedObjectClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall FoggedObjectClass::SaveToINI(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax
  int v4; // edx
  int v5; // ebp
  int v6; // edi

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x4d24b3*/
  if ( result >= 0 ) /*0x4d24ba*/
  {
    v4 = *a1; /*0x4d24bf*/
    aP2 = *(_DWORD *)&aP0->Name[8]; /*0x4d24cb*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a1, &aP2, 4, 0); /*0x4d24cf*/
    if ( result >= 0 ) /*0x4d24d4*/
    {
      v5 = 0; /*0x4d24da*/
      if ( aP2 > 0 ) /*0x4d24de*/
      {
        v6 = 0; /*0x4d24e0*/
        do /*0x4d2500*/
        {
          if ( (*(int (__stdcall **)(int *, char *, int, _DWORD))(*a1 + 16))(a1, (char *)aP0->UIName + v6, 16, 0) < 0 ) /*0x4d24f4*/
            break; /*0x4d24f4*/
          ++v5; /*0x4d24fa*/
          v6 += 16; /*0x4d24fb*/
        }
        while ( v5 < aP2 ); /*0x4d2500*/
      }
      return 0; /*0x4d2502*/
    }
  }
  return result; /*0x4d2504*/
}
}

// 0x4D2510
int FoggedObjectClass::LoadTypeData(int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall FoggedObjectClass::_vt05(int *a1, int a2)
{
  int *v2; // ebx
  int *v3; // edi
  int result; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // esi
  int v13; // ebx
  _DWORD *v14; // ebp
  signed int i; // eax
  _DWORD *v16; // edx
  int v17; // [esp+2Ch] [ebp-14h] BYREF
  int v18; // [esp+30h] [ebp-10h] BYREF
  int v19; // [esp+34h] [ebp-Ch]
  int v20; // [esp+38h] [ebp-8h]
  int v21; // [esp+3Ch] [ebp-4h]

  v2 = (int *)a2; /*0x4d2514*/
  v3 = a1; /*0x4d251b*/
  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x4d2521*/
  if ( result < 0 ) /*0x4d252a*/
    return result; /*0x4d252a*/
  if ( v3 ) /*0x4d2532*/
  {
    AbstractClass::InitVtables(v3, (int)&a2); /*0x4d253b*/
    FoggedObject::DrawVector_Constructor(v3 + 23, 0, 0); /*0x4d2547*/
    v3[23] = (int)&DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d254c*/
    v3[28] = 10; /*0x4d2552*/
    v3[27] = 0; /*0x4d2559*/
    *v3 = (int)&FoggedObjectClass::`vftable'; /*0x4d255c*/
    v3[1] = (int)&FoggedObjectClass::`vftable'; /*0x4d2562*/
    v3[2] = (int)&FoggedObjectClass::`vftable'; /*0x4d2569*/
    v3[3] = (int)&FoggedObjectClass::`vftable'; /*0x4d2570*/
  }
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v3 + 10); /*0x4d2580*/
  v5 = *v2; /*0x4d2585*/
  a1 = 0; /*0x4d2590*/
  result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v5 + 12))(v2, &a1, 4, 0); /*0x4d2594*/
  a2 = result; /*0x4d2599*/
  if ( result < 0 ) /*0x4d259d*/
    return result; /*0x4d259d*/
  v17 = 0; /*0x4d25a7*/
  if ( (int)a1 <= 0 ) /*0x4d25ad*/
  {
LABEL_14:
    v17 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(*v3 + 96))(v3, &v17); /*0x4d2665*/
    v12 = 74 * (SHIWORD(v17) - (((__int16)v17 + SHIWORD(v17)) << 9) - (__int16)v17) - v3[12] + 0x7FFFFFFF; /*0x4d26a1*/
    if ( (int)(MEMORY[0x8B3CC4] + 1) <= MEMORY[0x8B3CC8] ) /*0x4d26aa*/
    {
LABEL_22:
      *((_DWORD *)MEMORY[0x8B3CC0] + 2 * MEMORY[0x8B3CC4]) = v12; /*0x4d2745*/
      *((_DWORD *)MEMORY[0x8B3CC0] + 2 * MEMORY[0x8B3CC4] + 1) = v3; /*0x4d275f*/
      MEMORY[0x8B3CCC] = 0; /*0x4d2769*/
      ++MEMORY[0x8B3CC4]; /*0x4d2770*/
      return a2; /*0x4d2770*/
    }
    if ( MEMORY[0x8B3CC8] ) /*0x4d26b2*/
    {
      v13 = MEMORY[0x8B3CC8]; /*0x4d26bb*/
      if ( MEMORY[0x8B3CC8] < 0 ) /*0x4d26bf*/
        return a2; /*0x4d26bf*/
    }
    else
    {
      v13 = 10; /*0x4d26b4*/
    }
    v17 = v13 + MEMORY[0x8B3CC8]; /*0x4d26c7*/
    v14 = __2_YAPAXI_Z(8 * (v13 + MEMORY[0x8B3CC8])); /*0x4d26d8*/
    if ( v14 ) /*0x4d26df*/
    {
      --v17; /*0x4d26f0*/
      for ( i = 0; i < (int)MEMORY[0x8B3CC4]; v14[2 * i - 1] = v16[1] ) /*0x4d26f8*/
      {
        v16 = (char *)MEMORY[0x8B3CC0] + 8 * i++; /*0x4d2700*/
        v14[2 * i - 2] = *v16; /*0x4d2706*/
      }
      __3_YAXPAX_Z(MEMORY[0x8B3CC0]); /*0x4d2721*/
      MEMORY[0x8B3CC0] = v14; /*0x4d2730*/
      MEMORY[0x8B3CC8] += v13; /*0x4d2736*/
      MEMORY[0x8B3CD0] = 0; /*0x4d273b*/
      goto LABEL_22; /*0x4d273b*/
    }
    return a2; /*0x4d2775*/
  }
  while ( 1 ) /*0x4d25b3*/
  {
    v6 = *v2; /*0x4d25b3*/
    v18 = 0; /*0x4d25be*/
    v19 = 0; /*0x4d25c2*/
    LOBYTE(v20) = 0; /*0x4d25c6*/
    v21 = 0; /*0x4d25cb*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 12))(v2, &v18, 16, 0); /*0x4d25cf*/
    a2 = result; /*0x4d25d4*/
    if ( result < 0 ) /*0x4d25d8*/
      return result; /*0x4d2779*/
    v7 = v3[25]; /*0x4d25de*/
    if ( v3[27] < v7 /*0x4d2605*/
      || (*((_BYTE *)v3 + 105) || !v7)
      && (v8 = v3[28], v8 > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v3[23] + 8))(v3 + 23, v7 + v8, 0) )
    {
      v9 = v3[27]; /*0x4d260c*/
      v10 = v18; /*0x4d260f*/
      v3[27] = v9 + 1; /*0x4d2616*/
      v11 = (_DWORD *)(v3[24] + 16 * v9); /*0x4d261f*/
      *v11 = v10; /*0x4d2621*/
      v11[1] = v19; /*0x4d2627*/
      v11[2] = v20; /*0x4d262e*/
      v11[3] = v21; /*0x4d2635*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(16 * v3[27] + v3[24] - 16)); /*0x4d264b*/
    if ( ++v17 >= (int)a1 ) /*0x4d265f*/
      goto LABEL_14; /*0x4d265f*/
  }
}
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

// 0x4D2810
int FoggedObjectClass::PowerDrainUpdate(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall FoggedObjectClass::_vt13(int this, int a2)
{
  AbstractClass::ProcessPower((#378 *)this); /*0x4d2819*/
  Power::TimerProcess(this->LastSight); /*0x4d2824*/
  Power::TimerProcess(this->Cell); /*0x4d282f*/
  Power::TimerProcess(*(_DWORD *)(this + 48)); /*0x4d283a*/
  Power::TimerProcess(*(_DWORD *)(this + 52)); /*0x4d2845*/
  Power::TimerProcess(*(_DWORD *)(this + 56)); /*0x4d2850*/
  Power::TimerProcess(*(_DWORD *)(this + 60)); /*0x4d285b*/
  Power::TimerProcess(*(_DWORD *)(this + 64)); /*0x4d2866*/
  Power::TimerProcess(*(_DWORD *)(this + 68)); /*0x4d2871*/
  Power::TimerProcess(*(_DWORD *)(this + 72)); /*0x4d287c*/
  Power::TimerProcess(*(_DWORD *)(this + 76)); /*0x4d2887*/
  Power::TimerProcess(*(_DWORD *)(this + 80)); /*0x4d2892*/
  Power::TimerProcess(*(_DWORD *)(this + 84)); /*0x4d289d*/
  Power::TimerProcess(*(_DWORD *)(this + 88)); /*0x4d28a8*/
  return Power::TimerProcess(*(_DWORD *)(this + 108)); /*0x4d28b8*/
}
}

// 0x4D28D0
unsigned int * FoggedObjectClass::CheckVisibility(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall FoggedObjectClass::_vt24(_DWORD *this, _DWORD *a2)
{
  int v3; // [esp+0h] [ebp-4h]

  LOWORD(v3) = *(this + 13) / 256; /*0x4d28e0*/
  HIWORD(v3) = *(this + 14) / 256; /*0x4d28f4*/
  *a2 = v3; /*0x4d2901*/
  return a2; /*0x4d2904*/
}
}

// 0x4D2910
FoggedObjectClass * FoggedObjectClass::ddtor(void * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
FoggedObjectClass *__thiscall FoggedObjectClass::ddtor(void *Block, char a2)
{
  DestructFoggedObjectClass((int)Block); /*0x4d2913*/
  if ( (a2 & 1) != 0 ) /*0x4d291d*/
    __3_YAXPAX_Z(Block); /*0x4d2920*/
  return (FoggedObjectClass *)Block; /*0x4d292a*/
}
}

// 0x4D29B0
char FoggedObjectClass::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall FoggedObjectClass::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = *(this + 2); /*0x4d29bb*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4d29c0*/
  {
    v3 = 0; /*0x4d29c2*/
    if ( v2 <= 0 ) /*0x4d29c6*/
      return 1; /*0x4d29f6*/
    v4 = *(_DWORD *)(a2 + 4); /*0x4d29c8*/
    v5 = (_DWORD *)*(this + 1); /*0x4d29cb*/
    v6 = (_DWORD *)(v4 + 4); /*0x4d29ce*/
    v7 = v4 - (_DWORD)v5; /*0x4d29d1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x4d29e3*/
    {
      ++v3; /*0x4d29e5*/
      v6 += 4; /*0x4d29e6*/
      v5 += 4; /*0x4d29e9*/
      if ( v3 >= v2 ) /*0x4d29ee*/
        return 1; /*0x4d29ee*/
    }
  }
  return 0; /*0x4d29f0*/
}
}

// 0x4D2BC0
char FoggedObjectClass::ResizeArray(int a2, char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall FoggedObjectClass::ResizeArray(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x4d2bc2*/
  if ( a2 ) /*0x4d2bce*/
  {
    v5 = a3; /*0x4d2bd4*/
    *((_BYTE *)this + 12) = 0; /*0x4d2bd8*/
    if ( a3 ) /*0x4d2bdd*/
    {
      if ( a2 - 1 >= 0 ) /*0x4d2c1a*/
      {
        v9 = a3 + 8; /*0x4d2c1c*/
        v10 = a2; /*0x4d2c1f*/
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
      v6 = (char *)__2_YAPAXI_Z(16 * a2); /*0x4d2be5*/
      if ( v6 ) /*0x4d2bef*/
      {
        if ( a2 - 1 >= 0 ) /*0x4d2bf6*/
        {
          v7 = v6 + 8; /*0x4d2bf8*/
          v8 = a2; /*0x4d2bfb*/
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
    *((_BYTE *)this + 12) = 1; /*0x4d2c33*/
    if ( !v5 ) /*0x4d2c37*/
      return 0; /*0x4d2cc7*/
    if ( this->vtable1 ) /*0x4d2c3d*/
    {
      v11 = this->vtable2; /*0x4d2c42*/
      if ( a2 < v11 ) /*0x4d2c47*/
        v11 = a2; /*0x4d2c49*/
      if ( v11 > 0 ) /*0x4d2c4d*/
      {
        v12 = 0; /*0x4d2c4f*/
        do /*0x4d2c75*/
        {
          v13 = (_DWORD *)(this->vtable1 + v12); /*0x4d2c56*/
          v14 = &v5[v12]; /*0x4d2c58*/
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
      if ( *((_BYTE *)this + 13) ) /*0x4d2c7d*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4d2c86*/
        this->vtable1 = 0; /*0x4d2c8e*/
      }
    }
    this->vtable1 = v5; /*0x4d2c99*/
    this->vtable2 = v3; /*0x4d2c9f*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x4d2ca2*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4d2cab*/
  }
  v15 = this->vtable2; /*0x4d2cae*/
  if ( v15 < this->uniqueId ) /*0x4d2cb6*/
    this->uniqueId = v15; /*0x4d2cb8*/
  return 1; /*0x4d2cbb*/
}
}

// 0x4D2CD0
int FoggedObjectClass::Read(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall FoggedObjectClass::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x4d2cd0*/
  result = 0; /*0x4d2cd5*/
  if ( v2 <= 0 ) /*0x4d2cdb*/
    return -1; /*0x4d2cfc*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2 || i[1] != a2[1]; i += 4 ) /*0x4d2ce1*/
  {
    if ( ++result >= v2 ) /*0x4d2cfa*/
      return -1; /*0x4d2cfa*/
  }
  return result; /*0x4d2cff*/
}
}

// 0x4D2D60
DynamicVector * FoggedObjectClass::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall FoggedObjectClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4d2d63*/
  *Block = &VectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d2d66*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4d2d70*/
  {
    __3_YAXPAX_Z(v3); /*0x4d2d78*/
    *(Block + 1) = 0; /*0x4d2d80*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4d2d8b*/
  *(Block + 2) = 0; /*0x4d2d91*/
  if ( (a2 & 1) != 0 ) /*0x4d2d98*/
    __3_YAXPAX_Z(Block); /*0x4d2d9b*/
  return (DynamicVector *)Block; /*0x4d2da5*/
}
}

// 0x4E01F0
namespace gamemd {
void FoggedObjectClass_42::ClearBuffer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall FoggedObjectClass_42_::sub_4E01F0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e01f6*/
  this->FoggedObjectClass_42_field_0x10 = 0; /*0x4e01f9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e0200*/
  {
    __3_YAXPAX_Z(v2); /*0x4e0206*/
    this->FoggedObjectClass_42_field_0x4 = 0; /*0x4e020e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e0211*/
  this->FoggedObjectClass_42_field_0x8 = 0; /*0x4e0214*/
}
}
} // namespace gamemd

// 0x4E0220
namespace gamemd {
unsigned int FoggedObjectClass_42::PointerToIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall FoggedObjectClass_42_::sub_4E0220(int this, int a2)
{
  if ( (unsigned char)this->FoggedObjectClass_42_field_0xC ) /*0x4e0220*/
    return (unsigned int)(a2 - this->FoggedObjectClass_42_field_0x4) >> 2; /*0x4e0235*/
  else
    return 0; /*0x4e0227*/
}
}
} // namespace gamemd

// 0x4E0240
namespace gamemd {
int FoggedObjectClass_42::Seek(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall FoggedObjectClass_42_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x4e024a*/
}
}
} // namespace gamemd

// 0x4E0580
namespace gamemd {
char FoggedObjectClass_42::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall FoggedObjectClass_42_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x4e0582*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4e058d*/
  {
    v3 = 0; /*0x4e058f*/
    if ( v2 <= 0 ) /*0x4e0593*/
      return 1; /*0x4e05b3*/
    v4 = (_DWORD *)*(this + 1); /*0x4e0595*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4e059b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4e05a4*/
    {
      ++v3; /*0x4e05a6*/
      ++v4; /*0x4e05a7*/
      if ( v3 >= v2 ) /*0x4e05ac*/
        return 1; /*0x4e05ac*/
    }
  }
  return 0; /*0x4e05ae*/
}
}
} // namespace gamemd

// 0x4E05C0
namespace gamemd {
char FoggedObjectClass_42::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall FoggedObjectClass_42_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4e05cc*/
  {
    *((_BYTE *)this + 12) = 0; /*0x4e05d6*/
    if ( a3 ) /*0x4e05dc*/
      v4 = a3; /*0x4e05f2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e05ee*/
    *((_BYTE *)this + 12) = 1; /*0x4e05f6*/
    if ( v4 ) /*0x4e05fa*/
    {
      if ( this->FoggedObjectClass_42_field_0x4 ) /*0x4e0605*/
      {
        v6 = this->FoggedObjectClass_42_field_0x8; /*0x4e060c*/
        if ( a2 < v6 ) /*0x4e0611*/
          v6 = a2; /*0x4e0613*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->FoggedObjectClass_42_field_0x4 + 4 * i - 4) ) /*0x4e0619*/
          ++i; /*0x4e061e*/
        if ( *((_BYTE *)this + 13) ) /*0x4e062b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e0636*/
          this->FoggedObjectClass_42_field_0x4 = 0; /*0x4e063e*/
        }
      }
      this->FoggedObjectClass_42_field_0x4 = v4; /*0x4e0647*/
      this->FoggedObjectClass_42_field_0x8 = a2; /*0x4e064f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x4e0652*/
      return 1; /*0x4e0658*/
    }
    else
    {
      return 0; /*0x4e05ff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4e0662*/
    return 1; /*0x4e0668*/
  }
}
}
} // namespace gamemd

// 0x4E0670
namespace gamemd {
void FoggedObjectClass_42::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall FoggedObjectClass_42_::_vt03(int this)
{
  if ( this->FoggedObjectClass_42_field_0x4 && *(_BYTE *)(this + 13) ) /*0x4e067d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4e0683*/
    this->FoggedObjectClass_42_field_0x4 = 0; /*0x4e068b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e068e*/
  this->FoggedObjectClass_42_field_0x8 = 0; /*0x4e0691*/
}
}
} // namespace gamemd

// 0x4E06A0
namespace gamemd {
int FoggedObjectClass_42::Read(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall FoggedObjectClass_42_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !(unsigned char)this->FoggedObjectClass_42_field_0xC ) /*0x4e06a0*/
    return 0; /*0x4e06a8*/
  v3 = this->FoggedObjectClass_42_field_0x8; /*0x4e06ae*/
  result = 0; /*0x4e06b1*/
  if ( v3 <= 0 ) /*0x4e06b5*/
    return -1; /*0x4e06cc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4e06bb*/
  {
    if ( ++result >= v3 ) /*0x4e06ca*/
      return -1; /*0x4e06ca*/
  }
  return result; /*0x4e06aa*/
}
}
} // namespace gamemd

// 0x4E06E0
namespace gamemd {
unsigned int FoggedObjectClass_42::Write(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall FoggedObjectClass_42_::_vt05(int this, int a2)
{
  if ( (unsigned char)this->FoggedObjectClass_42_field_0xC ) /*0x4e06e0*/
    return (unsigned int)(a2 - this->FoggedObjectClass_42_field_0x4) >> 2; /*0x4e06f5*/
  else
    return 0; /*0x4e06e7*/
}
}
} // namespace gamemd

// 0x4E0700
namespace gamemd {
char FoggedObjectClass_42::SetCapacity(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall FoggedObjectClass_42_::sub_4E0700(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4e070c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x4e0712*/
    if ( a3 ) /*0x4e0718*/
      v4 = a3; /*0x4e072e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e072a*/
    *((_BYTE *)this + 12) = 1; /*0x4e0732*/
    if ( !v4 ) /*0x4e0736*/
      return 0; /*0x4e07aa*/
    if ( this->FoggedObjectClass_42_field_0x4 ) /*0x4e0738*/
    {
      v5 = this->FoggedObjectClass_42_field_0x8; /*0x4e073f*/
      if ( a2 < v5 ) /*0x4e0744*/
        v5 = a2; /*0x4e0746*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->FoggedObjectClass_42_field_0x4 + 4 * i - 4) ) /*0x4e074c*/
        ++i; /*0x4e0751*/
      if ( *((_BYTE *)this + 13) ) /*0x4e075e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e0769*/
        this->FoggedObjectClass_42_field_0x4 = 0; /*0x4e0771*/
      }
    }
    this->FoggedObjectClass_42_field_0x4 = v4; /*0x4e077a*/
    this->FoggedObjectClass_42_field_0x8 = a2; /*0x4e0782*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x4e0785*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4e078e*/
  }
  v7 = this->FoggedObjectClass_42_field_0x8; /*0x4e0791*/
  if ( v7 < this->FoggedObjectClass_42_field_0x10 ) /*0x4e0799*/
    this->FoggedObjectClass_42_field_0x10 = v7; /*0x4e079b*/
  return 1; /*0x4e079e*/
}
}
} // namespace gamemd

// 0x4E07B0
namespace gamemd {
int FoggedObjectClass_42::FindItem(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall FoggedObjectClass_42_::sub_4E07B0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x4e07b0*/
  result = 0; /*0x4e07b3*/
  if ( v2 <= 0 ) /*0x4e07b8*/
    return -1; /*0x4e07cf*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x4e07be*/
  {
    if ( ++result >= v2 ) /*0x4e07cd*/
      return -1; /*0x4e07cd*/
  }
  return result; /*0x4e07d2*/
}
}
} // namespace gamemd

// 0x4E0CE0
namespace gamemd {
VectorClass * FoggedObjectClass_42::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall FoggedObjectClass_42_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4e0ce3*/
  *Block = &VectorClass<FootClass *>::`vftable'; /*0x4e0ce6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4e0cf0*/
  {
    __3_YAXPAX_Z(v3); /*0x4e0cf8*/
    *(Block + 1) = 0; /*0x4e0d00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4e0d0b*/
  *(Block + 2) = 0; /*0x4e0d11*/
  if ( (a2 & 1) != 0 ) /*0x4e0d18*/
    __3_YAXPAX_Z(Block); /*0x4e0d1b*/
  return (VectorClass *)Block; /*0x4e0d25*/
}
}
} // namespace gamemd

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
