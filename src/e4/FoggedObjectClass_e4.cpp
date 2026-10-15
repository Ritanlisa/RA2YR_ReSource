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
#include "e4/classes/FoggedObjectClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Font_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/FogOfWar_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/VectorClass_flat_e4.hpp"  // G42.36 C2027 supply

// 0x4D0980
namespace gamemd {  // G42.18 ns repair
int FoggedObjectClass::InitBuildingFog(unsigned int * a2, int a3, int a4)
{

  CellClass *v5; // ebp
  int *PlacementRect; // edi
  int *StartCoords; // eax
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
  unsigned int v18; // edi
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // edi
  int v24; // [esp+18h] [ebp-28h]
  int v25[4]; // [esp+20h] [ebp-20h] BYREF
  unsigned int v26[4]; // [esp+30h] [ebp-10h] BYREF
  unsigned int *v27; // [esp+44h] [ebp+4h]
  int v28; // [esp+48h] [ebp+8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0989*/
  this->LastSight = a3; /*0x4d099e*/
  this->House = 0; /*0x4d09a1*/
  this->Cell[0] = a4; /*0x4d09a4*/
  this->q030 = (gamemd::HouseClass *)(20); /*0x4d09a7*/
  this->u32_34 = *a2; /*0x4d09b4*/
  this->u32_38 = a2[1]; /*0x4d09b9*/
  this->u32_3C = a2[2]; /*0x4d09c4*/
  this->q050 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, a2)->level; /*0x4d09da*/
  this->u32_54 = -1; /*0x4d09dd*/
  this->u32_58 = 0; /*0x4d09e4*/
  FoggedObject::DrawVector_Constructor(&this->u32_5C, 0, 0); /*0x4d09e7*/
  this->u32_5C = (unsigned int)(&vt_DynamicVectorClass); /*0x4d09ec*/
  this->q070 = 10; /*0x4d09f2*/
  this->HouseClass_6C = 0; /*0x4d09f9*/
  this->u32_74 = 1; /*0x4d0a02*/
  this->AbstractClass = &vt_FoggedObjectClass; /*0x4d0a06*/
  /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d0a0c) */
  /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d0a13) */
  /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d0a1a) */
  v5 = (gamemd::CellClass *)(Coord::To_Cell((Coord *)&DataGlobal_87F7E8, a2)); /*0x4d0a2a*/
  PlacementRect = BuildingClass::GetPlacementRect((BuildingClass *)v5, v25); /*0x4d0a3b*/
  StartCoords = House::GetStartCoords((House *)v5, v26); /*0x4d0a3d*/
  if ( StartCoords->vtable3 <= 0 || StartCoords->vtable4 <= 0 ) /*0x4d0a4e*/
  {
    v8 = *PlacementRect; /*0x4d0adf*/
    v15 = PlacementRect->vtable2; /*0x4d0ae1*/
    v14 = PlacementRect->vtable3; /*0x4d0ae4*/
    v16 = PlacementRect->vtable4; /*0x4d0ae7*/
  }
  else
  {
    v28 = PlacementRect->vtable3; /*0x4d0a59*/
    if ( v28 <= 0 || (v27 = PlacementRect->vtable4, (int)v27 <= 0) ) /*0x4d0a68*/
    {
      v8 = *StartCoords; /*0x4d0ad2*/
      v15 = StartCoords->vtable2; /*0x4d0ad4*/
      v14 = StartCoords->vtable3; /*0x4d0ad7*/
      v16 = StartCoords->vtable4; /*0x4d0ada*/
    }
    else
    {
      v8 = *StartCoords; /*0x4d0a6a*/
      v9 = *PlacementRect; /*0x4d0a6c*/
      v10 = StartCoords->vtable3; /*0x4d0a6e*/
      v11 = StartCoords->vtable2; /*0x4d0a71*/
      v12 = StartCoords->vtable4; /*0x4d0a74*/
      v24 = v10; /*0x4d0a79*/
      if ( v8 > *PlacementRect ) /*0x4d0a7d*/
      {
        v10 += v8 - v9; /*0x4d0a81*/
        v8 = *PlacementRect; /*0x4d0a83*/
        v24 = v10; /*0x4d0a85*/
      }
      v13 = PlacementRect->vtable2; /*0x4d0a89*/
      if ( v11 > v13 ) /*0x4d0a92*/
      {
        v12 += v11 - v13; /*0x4d0a96*/
        v11 = v13; /*0x4d0a98*/
      }
      if ( v8 + v10 >= v9 + v28 ) /*0x4d0aa4*/
        v14 = v24; /*0x4d0ab2*/
      else
        v14 = v9 - v8 + v28 + 1; /*0x4d0aac*/
      if ( v12 + v11 < (int)v27 + v13 ) /*0x4d0ac5*/
        v12 = (int)v27 + v13 - v11 + 1; /*0x4d0aca*/
      v15 = v11; /*0x4d0acc*/
      v16 = v12; /*0x4d0ace*/
    }
  }
  this->q040 = (void *)(v8); /*0x4d0aef*/
  this->u32_44 = v15; /*0x4d0af1*/
  this->q048 = (gamemd::ObjectClass *)(v14); /*0x4d0af4*/
  this->q04C = (gamemd::HouseClass *)(v16); /*0x4d0af7*/
  v17 = this->u32_44; /*0x4d0b00*/
  this->q040 += *(unsigned int *)&g_TacticalClass_Instance[44]; /*0x4d0b0d*/
  this->u32_44 = *(unsigned int *)&g_TacticalClass_Instance[45] + v17; /*0x4d0b1d*/
  v18 = this->u32_44 - (unsigned int)DSurface_ViewBounds.field_4; /*0x4d0b33*/
  this->q040 -= DSurface_ViewBounds.field_0; /*0x4d0b35*/
  this->u32_44 = v18; /*0x4d0b37*/
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d0b6f*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D24 + dword_8B3D18,
         0) )
  {
    v19 = g_FootClassConfig++; /*0x4d0b7c*/
    *((unsigned int *)dword_8B3D14 + v19) = (unsigned int)(this); /*0x4d0b8b*/
  }
  v20 = (__int16)(this->u32_34 / 256); /*0x4d0bb4*/
  v21 = dword_8B3CC8; /*0x4d0bcd*/
  v22 = 74 * ((__int16)(this->u32_38 / 256) - ((v20 + (__int16)(this->u32_38 / 256)) << 9) - v20) /*0x4d0bd6*/
      - this->q030
      + 0x7FFFFFFF;
  if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d0bdf*/
    goto LABEL_27; /*0x4d0bdf*/
  if ( !dword_8B3CC8 ) /*0x4d0be3*/
    v21 = 10; /*0x4d0be5*/
  if ( Vector::ReallocDynamic((int)&g_MissionPool, v21) ) /*0x4d0bf0*/
  {
LABEL_27:
    *((unsigned int *)g_MissionPool + 2 * g_MissionState) = v22; /*0x4d0c04*/
    *((unsigned int *)g_MissionPool + 2 * g_MissionState + 1) = (unsigned int)(this); /*0x4d0c12*/
    byte_8B3CCC = 0; /*0x4d0c1c*/
    ++g_MissionState; /*0x4d0c23*/
  }
  return (int)this; /*0x4d0c2a*/

}
} // namespace gamemd
// 0x4D0C40
namespace gamemd {
int FoggedObjectClass::InitTerrainFog(unsigned int *aP1, int a3, int a4)
{

  int level; // eax
  CellClass *v6; // eax
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // eax
  int v15; // edi
  int v16; // ebp
  unsigned int *v17; // ebx
  signed int i; // eax
  unsigned int *v19; // ecx
  int v21; // [esp+10h] [ebp-24h] BYREF
  int v22; // [esp+14h] [ebp-20h]
  unsigned int v23[2]; // [esp+18h] [ebp-1Ch] BYREF
  int v24; // [esp+20h] [ebp-14h]
  int v25; // [esp+30h] [ebp-4h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0c49*/
  this->LastSight = -1; /*0x4d0c5a*/
  this->House = 0; /*0x4d0c61*/
  this->Cell[0] = 0; /*0x4d0c64*/
  this->q030 = (gamemd::HouseClass *)(29); /*0x4d0c67*/
  level = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, aP1)->level; /*0x4d0c73*/
  this->u32_54 = a3; /*0x4d0c85*/
  this->q050 = level; /*0x4d0c8c*/
  this->u32_58 = a4; /*0x4d0c8f*/
  FoggedObject::DrawVector_Constructor(&this->u32_5C, 0, 0); /*0x4d0c92*/
  this->u32_5C = (unsigned int)(&vt_DynamicVectorClass); /*0x4d0c97*/
  this->q070 = 10; /*0x4d0c9e*/
  this->HouseClass_6C = 0; /*0x4d0ca5*/
  this->u32_74 = 1; /*0x4d0cae*/
  this->AbstractClass = &vt_FoggedObjectClass; /*0x4d0cb2*/
  /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d0cb8) */
  /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d0cbf) */
  /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d0cc6) */
  v6 = (gamemd::CellClass *)(Coord::To_Cell((Coord *)&DataGlobal_87F7E8, aP1)); /*0x4d0ccd*/
  v7 = aP1[1]; /*0x4d0cd4*/
  v8 = aP1[2]; /*0x4d0cd7*/
  v23[0] = *aP1; /*0x4d0cda*/
  v23[1] = v7; /*0x4d0cde*/
  v24 = v8; /*0x4d0ce2*/
  v9 = dword_8B3D68 * v6->level; /*0x4d0ced*/
  v24 = v9; /*0x4d0cf7*/
  this->u32_34 = v23[0]; /*0x4d0cfd*/
  this->u32_38 = v7; /*0x4d0d03*/
  this->u32_3C = v9; /*0x4d0d06*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v23, &v21); /*0x4d0d15*/
  v10 = v21 - 30; /*0x4d0d25*/
  v22 -= 15; /*0x4d0d32*/
  v11 = v22; /*0x4d0d2a*/
  this->q040 = (void *)(v21 - 30); /*0x4d0d36*/
  v25 = 30; /*0x4d0d38*/
  v21 = v10; /*0x4d0d40*/
  this->u32_44 = v11; /*0x4d0d44*/
  v12 = v25; /*0x4d0d47*/
  this->q048 = (gamemd::ObjectClass *)(60); /*0x4d0d4b*/
  this->q04C = (gamemd::HouseClass *)(v12); /*0x4d0d4e*/
  v13 = this->u32_44; /*0x4d0d61*/
  this->q040 += *(unsigned int *)&g_TacticalClass_Instance[44]; /*0x4d0d64*/
  this->u32_44 = *(unsigned int *)&g_TacticalClass_Instance[45] + v13; /*0x4d0d73*/
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d0dab*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D18 + dword_8B3D24,
         0) )
  {
    v14 = g_FootClassConfig++; /*0x4d0db8*/
    *((unsigned int *)dword_8B3D14 + v14) = (unsigned int)(this); /*0x4d0dc7*/
  }
  v15 = 74 /*0x4d0e11*/
      * ((__int16)(this->u32_38 / 256)
       - (((__int16)(this->u32_34 / 256) + (__int16)(this->u32_38 / 256)) << 9)
       - (__int16)(this->u32_34 / 256))
      - this->q030
      + 0x7FFFFFFF;
  if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d0e1a*/
    goto LABEL_15; /*0x4d0e1a*/
  if ( dword_8B3CC8 ) /*0x4d0e22*/
  {
    v16 = dword_8B3CC8; /*0x4d0e2b*/
    if ( dword_8B3CC8 < 0 ) /*0x4d0e2f*/
      return (int)this; /*0x4d0e2f*/
  }
  else
  {
    v16 = 10; /*0x4d0e24*/
  }
  v17 = (unsigned int *)__2_YAPAXI_Z(8 * (v16 + dword_8B3CC8)); /*0x4d0e44*/
  if ( v17 ) /*0x4d0e4b*/
  {
    for ( i = 0; i < (int)g_MissionState; v17[2 * i - 1] = v19[1] ) /*0x4d0e64*/
    {
      v19 = (unsigned int *)((char *)g_MissionPool + 8 * i++); /*0x4d0e6c*/
      v17[2 * i - 2] = *v19; /*0x4d0e72*/
    }
    __3_YAXPAX_Z(g_MissionPool); /*0x4d0e8e*/
    g_MissionPool = (int)(v17); /*0x4d0e9d*/
    dword_8B3CC8 += v16; /*0x4d0ea3*/
    dword_8B3CD0 = 0; /*0x4d0ea8*/
LABEL_15:
    *((unsigned int *)g_MissionPool + 2 * g_MissionState) = v15; /*0x4d0eb2*/
    *((unsigned int *)g_MissionPool + 2 * g_MissionState + 1) = (unsigned int)(this); /*0x4d0ecb*/
    byte_8B3CCC = 0; /*0x4d0ed5*/
    ++g_MissionState; /*0x4d0edc*/
  }
  return (int)this; /*0x4d0ee3*/

}
} // namespace gamemd
// 0x4D0EF0
namespace gamemd {
AbstractClass * FoggedObjectClass::Constructor(BuildingClass * aP1, FoggedObjectClass * aP2, void *a3, void *a4)
{

  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  unsigned int *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int ProductionFrame; // eax
  int v13; // ebp
  int v14; // eax
  char v15; // al
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int *v20; // edx
  int *v21; // ebx
  int *v22; // eax
  int *v23; // ecx
  int v24; // edx
  int v25; // ebp
  int v26; // ebx
  int v27; // ecx
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // ebp
  int v35; // ecx
  int v36; // ebp
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  unsigned int *v40; // eax
  int v41; // ecx
  int v42; // edx
  bool v43; // zf
  int *v45; // [esp+20h] [ebp-40h]
  int v46; // [esp+24h] [ebp-3Ch]
  int v47; // [esp+28h] [ebp-38h]
  int v48; // [esp+2Ch] [ebp-34h]
  unsigned int v49[2]; // [esp+30h] [ebp-30h] BYREF
  int v50; // [esp+38h] [ebp-28h]
  int v51; // [esp+3Ch] [ebp-24h]
  char v52[8]; // [esp+40h] [ebp-20h] BYREF
  int v53; // [esp+48h] [ebp-18h]
  int v54; // [esp+4Ch] [ebp-14h]
  int v55[4]; // [esp+50h] [ebp-10h] BYREF
  int v56; // [esp+64h] [ebp+4h]
  int v57; // [esp+68h] [ebp+8h]
  int v58; // [esp+68h] [ebp+8h]

  AbstractClass::Constructor((AbstractClass *)aP1); /*0x4d0ef9*/
  aP1->objectTypeFlags = (void *)(-1); /*0x4d0f02*/
  v4 = (int)(aP2[135]); /*0x4d0f0c*/
  aP1->fallRate = 0; /*0x4d0f12*/
  aP1->owningHouseIndex = (void *)(v4); /*0x4d0f19*/
  aP1->nextObject = (void *)(6); /*0x4d0f24*/
  *(unsigned int *)(aP1 + 52) = (unsigned int)(aP2[39]); /*0x4d0f2f*/
  *(unsigned int *)(aP1 + 56) = (unsigned int)(aP2[40]); /*0x4d0f34*/
  *(unsigned int *)(aP1 + 60) = (unsigned int)(aP2[41]); /*0x4d0f3a*/
  v5 = (int)(aP2[40]); /*0x4d0f3f*/
  v49[0] = (unsigned int)(aP2[39]); /*0x4d0f42*/
  v6 = (int)(aP2[41]); /*0x4d0f46*/
  v49[1] = v5; /*0x4d0f4d*/
  v50 = v6; /*0x4d0f57*/
  v7 = (int)(aP1 + 92); /*0x4d0f67*/
  aP1->customSound_controller = *((char *)Coord::To_Cell(&dword_87F7E8, v49) + 283); /*0x4d0f6a*/
  aP1->q054 = -1; /*0x4d0f73*/
  aP1->u32_58 = 0; /*0x4d0f7a*/
  FoggedObject::DrawVector_Constructor(&aP1->q05C, 0, 0); /*0x4d0f81*/
  *&aP1->q05C = &vt_DynamicVectorClass; /*0x4d0f8a*/
  *(unsigned int *)(aP1 + 112) = 10; /*0x4d0f90*/
  *(unsigned int *)(aP1 + 108) = 0; /*0x4d0f97*/
  aP1->isOnMap = a3; /*0x4d0fa2*/
  *(unsigned int *)aP1 = (unsigned int)(&vt_FoggedObjectClass); /*0x4d0fa5*/
  /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d0fab) */
  /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d0fb2) */
  /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d0fb9) */
  v8 = (unsigned int *)aP2->GetBoundsRect(v52); /*0x4d0fc5*/
  aP1->q040 = *v8; /*0x4d0fd2*/
  *(unsigned int *)(aP1 + 68) = v8[1]; /*0x4d0fd7*/
  *(unsigned int *)(aP1 + 72) = v8[2]; /*0x4d0fdd*/
  *(unsigned int *)(aP1 + 76) = v8[3]; /*0x4d0fe3*/
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d101a*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D18 + dword_8B3D24,
         0) )
  {
    v9 = g_FootClassConfig++; /*0x4d1027*/
    *((unsigned int *)dword_8B3D14 + v9) = (unsigned int)(aP1); /*0x4d1036*/
  }
  v10 = dword_8B3CC8; /*0x4d107c*/
  v11 = 74 /*0x4d1081*/
      * ((__int16)(*(unsigned int *)(aP1 + 56) / 256)
       - (((__int16)(*(unsigned int *)(aP1 + 52) / 256) + (__int16)(*(unsigned int *)(aP1 + 56) / 256)) << 9)
       - (__int16)(*(unsigned int *)(aP1 + 52) / 256))
      - aP1->nextObject
      + 0x7FFFFFFF;
  if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d108a*/
    goto LABEL_11; /*0x4d108a*/
  if ( !dword_8B3CC8 ) /*0x4d108e*/
    v10 = 10; /*0x4d1090*/
  if ( (unsigned __int8)Vector::ReallocDynamic(v10) ) /*0x4d109b*/
  {
LABEL_11:
    *((unsigned int *)g_MissionPool + 2 * g_MissionState) = v11; /*0x4d10af*/
    *((unsigned int *)g_MissionPool + 2 * g_MissionState + 1) = (unsigned int)(aP1); /*0x4d10bd*/
    byte_8B3CCC = 0; /*0x4d10c7*/
    ++g_MissionState; /*0x4d10ce*/
  }
  aP2->q6E7 = 1; /*0x4d10d5*/
  ProductionFrame = BuildingClass::GetProductionFrame(aP2); /*0x4d10dc*/
  v13 = (int)(aP2[328]); /*0x4d10e1*/
  v57 = ProductionFrame; /*0x4d10e7*/
  if ( *(unsigned char *)(v13 + 5823) && ((v14 = aP2[390], v14 == 12) || v14 == 8) /*0x4d1112*/
    || (v15 = *(unsigned char *)(v13 + 5824), LOBYTE(v53) = 0, v15) )
  {
    LOBYTE(v53) = 1; /*0x4d1114*/
  }
  v16 = *(unsigned int *)(aP1 + 100); /*0x4d1119*/
  if ( *(unsigned int *)(aP1 + 108) < v16 /*0x4d113e*/
    || (*(unsigned char *)(aP1 + 105) || !v16)
    && (v17 = aP1->estimatedHealth, v17 > 0)
    && (*(unsigned __int8 (**)(int, int, unsigned int))(*&v7->q020))(aP1 + 92, v16 + v17, 0) )
  {
    v18 = *(unsigned int *)(aP1 + 108); /*0x4d1145*/
    *(unsigned int *)(aP1 + 108) = v18 + 1; /*0x4d114b*/
    v19 = v53; /*0x4d1156*/
    v20 = (int *)(*(unsigned int *)(aP1 + 96) + 16 * v18); /*0x4d115a*/
    *v20 = v13; /*0x4d1160*/
    v20[1] = v57; /*0x4d1162*/
    v20[2] = v19; /*0x4d1167*/
    v20[3] = 0; /*0x4d116a*/
  }
  v21 = (int *)(aP2 + 343); /*0x4d116d*/
  v46 = 21; /*0x4d1173*/
  v45 = (int *)(aP2 + 343); /*0x4d117b*/
  do /*0x4d130a*/
  {
    if ( !*v21 ) /*0x4d1183*/
      goto LABEL_47; /*0x4d1183*/
    *(unsigned char *)(*v21 + 409) = 1; /*0x4d1189*/
    v56 = *(unsigned int *)(*v21 + 200); /*0x4d119a*/
    v22 = (int *)(*(int (**)(int, int *))(*(unsigned int *)*v21 + 296))(*v21, v55); /*0x4d11a3*/
    v23 = &aP1->q040; /*0x4d11ac*/
    if ( *(int *)(aP1 + 72) <= 0 || *(int *)(aP1 + 76) <= 0 ) /*0x4d11bc*/
    {
      v32 = *v22; /*0x4d1266*/
      v33 = v22->vtable2; /*0x4d1268*/
      v34 = v22->vtable3; /*0x4d126b*/
    }
    else
    {
      v58 = v22->vtable3; /*0x4d11c7*/
      if ( v58 > 0 ) /*0x4d11cb*/
      {
        v48 = v22->vtable4; /*0x4d11d6*/
        if ( v48 > 0 ) /*0x4d11da*/
        {
          v24 = *v23; /*0x4d11dc*/
          v25 = *(unsigned int *)(aP1 + 68); /*0x4d11de*/
          v26 = *(unsigned int *)(aP1 + 72); /*0x4d11e1*/
          v50 = v26; /*0x4d11e4*/
          v51 = *(unsigned int *)(aP1 + 76); /*0x4d11eb*/
          v27 = *v22; /*0x4d11ef*/
          if ( v24 > *v22 ) /*0x4d11f3*/
          {
            v28 = v24 - v27 + v26; /*0x4d11f7*/
            v24 = *v22; /*0x4d11f9*/
            v50 = v28; /*0x4d11fb*/
          }
          v29 = v22->vtable2; /*0x4d11ff*/
          v47 = v29; /*0x4d1204*/
          if ( v25 > v29 ) /*0x4d1208*/
          {
            v30 = v25 - v29 + v51; /*0x4d1210*/
            v25 = v29; /*0x4d1212*/
            v51 = v30; /*0x4d1214*/
          }
          if ( v24 + v50 < v27 + v58 ) /*0x4d1226*/
            v50 = v27 - v24 + v58 + 1; /*0x4d1232*/
          v31 = v51; /*0x4d1240*/
          if ( v51 + v25 < v47 + v48 ) /*0x4d1249*/
            v31 = v47 + v48 - v25 + 1; /*0x4d124e*/
          v32 = v24; /*0x4d1250*/
          v33 = v25; /*0x4d1252*/
          v34 = v50; /*0x4d1254*/
          goto LABEL_41; /*0x4d1258*/
        }
      }
      v22 = (int *)(aP1 + 64); /*0x4d125a*/
      v32 = *v23; /*0x4d125c*/
      v33 = *(unsigned int *)(aP1 + 68); /*0x4d125e*/
      v34 = *(unsigned int *)(aP1 + 72); /*0x4d1261*/
    }
    v31 = v22->vtable4; /*0x4d126e*/
LABEL_41:
    LOBYTE(v53) = 0; /*0x4d1271*/
    aP1->q040 = v32; /*0x4d1279*/
    *(unsigned int *)(aP1 + 68) = v33; /*0x4d127f*/
    *(unsigned int *)(aP1 + 72) = v34; /*0x4d1282*/
    *(unsigned int *)(aP1 + 76) = v31; /*0x4d1285*/
    v21 = v45; /*0x4d1288*/
    v35 = *(unsigned int *)(aP1 + 108); /*0x4d1292*/
    v36 = *(unsigned int *)(v56 + 692) + *(unsigned int *)(*v45 + 172); /*0x4d129d*/
    v37 = *(unsigned int *)(aP1 + 100); /*0x4d12a5*/
    v54 = *(unsigned int *)(*v45 + 256); /*0x4d12a8*/
    if ( v35 < v37 /*0x4d12cb*/
      || (*(unsigned char *)(aP1 + 105) || !v37)
      && (v38 = aP1->estimatedHealth, v38 > 0)
      && (*(unsigned __int8 (**)(int, int, unsigned int))(*&v7->q020))(aP1 + 92, v37 + v38, 0) )
    {
      v39 = *(unsigned int *)(aP1 + 108); /*0x4d12d2*/
      *(unsigned int *)(aP1 + 108) = v39 + 1; /*0x4d12dc*/
      v40 = (unsigned int *)(*(unsigned int *)(aP1 + 96) + 16 * v39); /*0x4d12e5*/
      v41 = v53; /*0x4d12e7*/
      *v40 = v56; /*0x4d12eb*/
      v42 = v54; /*0x4d12ed*/
      v40[1] = v36; /*0x4d12f1*/
      v40[2] = v41; /*0x4d12f4*/
      v40[3] = v42; /*0x4d12f7*/
    }
LABEL_47:
    ++v21; /*0x4d12fa*/
    v43 = v46 == 1; /*0x4d1301*/
    v45 = v21; /*0x4d1302*/
    --v46; /*0x4d1306*/
  }
  while ( !v43 ); /*0x4d130a*/
  Cell::CreateCrater(aP1->q040, aP1->q044, aP1->q048, aP1->u32_4C, 0); /*0x4d1338*/
  *(unsigned int *)(aP1 + 64) += g_TacticalClass_Instance[44].__tail_0; /*0x4d134d*/
  aP1->q044 += g_TacticalClass_Instance[45].__tail_0; /*0x4d135f*/
  return (gamemd::AbstractClass *)(aP1); /*0x4d1364*/

}
} // namespace gamemd
// 0x4D1370
namespace gamemd {
AbstractClass * * FoggedObjectClass::InitDrawRecord(unsigned int * a2)
{

  int v3; // edx
  int v4; // eax
  unsigned int *v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  int v12; // eax
  unsigned int *v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // ebp
  unsigned int *v18; // ebx
  signed int i; // eax
  unsigned int *v20; // ecx
  unsigned int v22[2]; // [esp+10h] [ebp-10h] BYREF
  int v23; // [esp+18h] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d1379*/
  this->LastSight = -1; /*0x4d1384*/
  this->House = 0; /*0x4d138b*/
  this->Cell[0] = 0; /*0x4d1394*/
  this->q030 = (gamemd::HouseClass *)(36); /*0x4d1399*/
  this->u32_34 = a2[39]; /*0x4d13a5*/
  this->u32_38 = a2[40]; /*0x4d13aa*/
  this->u32_3C = a2[41]; /*0x4d13b0*/
  v3 = a2[40]; /*0x4d13b5*/
  v4 = a2[41]; /*0x4d13b8*/
  v22[0] = a2[39]; /*0x4d13bb*/
  v22[1] = v3; /*0x4d13c9*/
  v23 = v4; /*0x4d13cd*/
  this->q050 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v22)->level; /*0x4d13e4*/
  this->u32_54 = -1; /*0x4d13e7*/
  this->u32_58 = 0; /*0x4d13ee*/
  FoggedObject::DrawVector_Constructor(&this->u32_5C, 0, 0); /*0x4d13f1*/
  this->u32_5C = (unsigned int)(&vt_DynamicVectorClass); /*0x4d13f6*/
  this->q070 = 10; /*0x4d13fc*/
  this->HouseClass_6C = 0; /*0x4d1403*/
  this->u32_74 = 1; /*0x4d140a*/
  this->AbstractClass = &vt_FoggedObjectClass; /*0x4d140e*/
  /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d1414) */
  /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d141b) */
  /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d1422) */
  v5 = (unsigned int *)(*(int (**)(unsigned int *, unsigned int *))(*a2 + 300))(a2, v22); /*0x4d1431*/
  this->q040 = *v5; /*0x4d143b*/
  this->u32_44 = v5[1]; /*0x4d1440*/
  this->q048 = v5[2]; /*0x4d1446*/
  this->q04C = v5[3]; /*0x4d144c*/
  v6 = this->u32_44; /*0x4d1460*/
  this->q040 += *(unsigned int *)&g_TacticalClass_Instance[44]; /*0x4d1463*/
  this->u32_44 = *(unsigned int *)&g_TacticalClass_Instance[45] + v6; /*0x4d1473*/
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d14ab*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D18 + dword_8B3D24,
         0) )
  {
    v7 = g_FootClassConfig++; /*0x4d14b8*/
    *((unsigned int *)dword_8B3D14 + v7) = this; /*0x4d14c7*/
  }
  v8 = this->u32_64; /*0x4d14ca*/
  v9 = this->HouseClass_6C; /*0x4d14cd*/
  v10 = a2[50]; /*0x4d14d0*/
  LOBYTE(v23) = 0; /*0x4d14da*/
  if ( v9 < v8 /*0x4d14fc*/
    || (this->u32_69 || !v8)
    && (v11 = this->q070, v11 > 0)
    && (*(unsigned __int8 (**)(char *, int, unsigned int))&this->u32_5C->Capacity)(
         &this->u32_5C,
         v8 + v11,
         0) )
  {
    v12 = this->HouseClass_6C; /*0x4d1503*/
    this->HouseClass_6C = v12 + 1; /*0x4d1509*/
    v13 = (unsigned int *)(this->q060 + 16 * v12); /*0x4d1514*/
    v14 = v23; /*0x4d1516*/
    *v13 = v10; /*0x4d151a*/
    v13[1] = 0; /*0x4d151c*/
    v13[2] = v14; /*0x4d151f*/
    v13[3] = 0; /*0x4d1524*/
  }
  v15 = (__int16)(this->u32_34 / 256); /*0x4d154d*/
  v16 = 74 * ((__int16)(this->u32_38 / 256) - ((v15 + (__int16)(this->u32_38 / 256)) << 9) - v15) /*0x4d156f*/
      - this->q030
      + 0x7FFFFFFF;
  if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d1578*/
    goto LABEL_21; /*0x4d1578*/
  if ( dword_8B3CC8 ) /*0x4d1580*/
  {
    v17 = dword_8B3CC8; /*0x4d1589*/
    if ( dword_8B3CC8 < 0 ) /*0x4d158d*/
      return (int)this; /*0x4d158d*/
  }
  else
  {
    v17 = 10; /*0x4d1582*/
  }
  v18 = (unsigned int *)__2_YAPAXI_Z(8 * (v17 + dword_8B3CC8)); /*0x4d15a2*/
  if ( v18 ) /*0x4d15a9*/
  {
    for ( i = 0; i < (int)g_MissionState; v18[2 * i - 1] = v20[1] ) /*0x4d15c2*/
    {
      v20 = (char *)g_MissionPool + 8 * i++; /*0x4d15ca*/
      v18[2 * i - 2] = *v20; /*0x4d15d0*/
    }
    __3_YAXPAX_Z(g_MissionPool); /*0x4d15ec*/
    g_MissionPool = v18; /*0x4d15fb*/
    dword_8B3CC8 += v17; /*0x4d1601*/
    dword_8B3CD0 = 0; /*0x4d1606*/
LABEL_21:
    *((unsigned int *)g_MissionPool + 2 * g_MissionState) = v16; /*0x4d1610*/
    *((unsigned int *)g_MissionPool + 2 * g_MissionState + 1) = this; /*0x4d1629*/
    byte_8B3CCC = 0; /*0x4d1633*/
    ++g_MissionState; /*0x4d163a*/
  }
  return (int)this; /*0x4d1641*/

}
} // namespace gamemd
// 0x4D2510
namespace gamemd {
int FoggedObjectClass::LoadTypeData(int * a1, int a2)
{
  int *v2; // ebx
  FoggedObjectClass *v3; // edi
  int result; // eax
  int v5; // edx
  int v6; // ecx
  void *vtable1; // ecx
  int uniqueId; // eax
  void *vtable3; // eax
  unsigned int *v11; // eax
  int v12; // esi
  int v13; // ebx
  unsigned int *v14; // ebp
  signed int i; // eax
  unsigned int *v16; // edx
  int v17; // [esp+2Ch] [ebp-14h] BYREF
  int v18; // [esp+30h] [ebp-10h] BYREF
  int v19; // [esp+34h] [ebp-Ch]
  int v20; // [esp+38h] [ebp-8h]
  int v21; // [esp+3Ch] [ebp-4h]

  v2 = (int *)a2; /*0x4d2514*/
  a1 = a1; /*0x4d251b*/
  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x4d2521*/
  if ( result < 0 ) /*0x4d252a*/
    return result; /*0x4d252a*/
  if ( a1 ) /*0x4d2532*/
  {
    AbstractClass::InitVtables((AbstractClass *)a1, (int)&a2); /*0x4d253b*/
    FoggedObject::DrawVector_Constructor(a1->vtable2.Cell, 0, 0); /*0x4d2547*/
    a1[1].Cell[0] = (int)&vt_DynamicVectorClass; /*0x4d254c*/
    a1[2].uniqueId = 10; /*0x4d2552*/
    a1[2].vfptr3 = 0; /*0x4d2559*/
    /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d255c) */
    /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d2562) */
    /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d2569) */
    /* X11: vtable install elided (implicit via FoggedObjectClass virtuals 0x4d2570) */
  }
  ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &a1->u32_44); /*0x4d2580*/
  v5 = *v2; /*0x4d2585*/
  a1 = 0; /*0x4d2590*/
  result = v2->vt_entry_68(&a1, 4, 0); /*0x4d2594*/
  a2 = result; /*0x4d2599*/
  if ( result < 0 ) /*0x4d259d*/
    return result; /*0x4d259d*/
  v17 = 0; /*0x4d25a7*/
  if ( (int)a1 <= 0 ) /*0x4d25ad*/
  {
  LABEL_14:
    v17 = *(unsigned int *)(*((int (**)(FoggedObjectClass *, int *))a1->vfptr + 24))(a1, &v17); /*0x4d2665*/
    v12 = 74 * ((*((signed short *)(((unsigned char *)&(v17)) + 2))) - (((int16_t)v17 + (*((signed short *)(((unsigned char *)&(v17)) + 2)))) << 9) - (int16_t)v17) /*0x4d26a1*/
        - (unsigned int)a1[1].vfptr
        + 0x7FFFFFFF;
    if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d26aa*/
    {
  LABEL_22:
      *((unsigned int *)v14 + 2 * g_MissionState) = v12; /*0x4d2745*/
      *((unsigned int *)v14 + 2 * g_MissionState + 1) = a1; /*0x4d275f*/
      byte_8B3CCC = 0; /*0x4d2769*/
      ++g_MissionState; /*0x4d2770*/
      return a2; /*0x4d2770*/
    }
    if ( dword_8B3CC8 ) /*0x4d26b2*/
    {
      v13 = dword_8B3CC8; /*0x4d26bb*/
      if ( dword_8B3CC8 < 0 ) /*0x4d26bf*/
        return a2; /*0x4d26bf*/
    }
    else
    {
      v13 = 10; /*0x4d26b4*/
    }
    v17 = v13 + dword_8B3CC8; /*0x4d26c7*/
    v14 = (unsigned int *)operator new(8 * (v13 + dword_8B3CC8)); /*0x4d26d8*/
    if ( v14 ) /*0x4d26df*/
    {
      --v17; /*0x4d26f0*/
      for ( i = 0; i < (int)g_MissionState; v14[2 * i - 1] = v16[1] ) /*0x4d26f8*/
      {
        v16 = (char *)v14 + 8 * i++; /*0x4d2700*/
        v14[2 * i - 2] = *v16; /*0x4d2706*/
      }
      operator delete((void *)(v14)); /*0x4d2721*/
      v14 = v14; /*0x4d2730*/
      dword_8B3CC8 += v13; /*0x4d2736*/
      dword_8B3CD0 = 0; /*0x4d273b*/
      goto LABEL_22; /*0x4d273b*/
    }
    return a2; /*0x4d2775*/
  }
  while ( 1 ) /*0x4d25b3*/
  {
    v6 = *v2; /*0x4d25b3*/
    v18 = 0; /*0x4d25be*/
    v19 = 0; /*0x4d25c2*/
    (*((unsigned char *)&(v20))) = 0; /*0x4d25c6*/
    v21 = 0; /*0x4d25cb*/
    result = v2->vt_entry_68(&v18, 16, 0); /*0x4d25cf*/
    a2 = result; /*0x4d25d4*/
    if ( result < 0 ) /*0x4d25d8*/
      return result; /*0x4d2779*/
    vtable1 = a1[2].vfptr1; /*0x4d25de*/
    if ( (int)a1[2].vfptr3 < (int)vtable1 /*0x4d2605*/
      || ((((unsigned char *)&(a1->vtable3.vfptr2))[1]) || !vtable1)
      && (uniqueId = a1->vtable3.uniqueId, uniqueId > 0)
      && (*(uint8_t (**)(int *, int, unsigned int))(a1->vtable2.Cell[0] + 8))(
           a1->vtable2.Cell,
           (int)vtable1 + uniqueId,
           0) )
    {
      vtable3 = a1[2].vfptr3; /*0x4d260c*/
      v18 = v18; /*0x4d260f*/
      a1[2].vfptr3 = (char *)vtable3 + 1; /*0x4d2616*/
      v11 = a1->ptr_2.vfptr + 16 * (unsigned int)vtable3; /*0x4d261f*/
      *v11 = v18; /*0x4d2621*/
      v11->__pad_004 = v19; /*0x4d2627*/
      v11->q008 = v20; /*0x4d262e*/
      v11->q00C = v21; /*0x4d2635*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1->vtable3.vfptr + 4 * (int)a1[2].vfptr3 - 4); /*0x4d264b*/
    if ( ++v17 >= (int)a1 ) /*0x4d265f*/
      goto LABEL_14; /*0x4d265f*/
  }
}
} // namespace gamemd
// 0x4D2810
namespace gamemd {
HouseClass * * FoggedObjectClass::PowerDrainUpdate(int a2)
{

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x4d2819*/
  Power::TimerProcess(this->LastSight); /*0x4d2824*/
  Power::TimerProcess(this->Cell[0]); /*0x4d282f*/
  Power::TimerProcess(this->q030); /*0x4d283a*/
  Power::TimerProcess(this->u32_34); /*0x4d2845*/
  Power::TimerProcess(this->u32_38); /*0x4d2850*/
  Power::TimerProcess(this->u32_3C); /*0x4d285b*/
  Power::TimerProcess(this->q040); /*0x4d2866*/
  Power::TimerProcess(this->u32_44); /*0x4d2871*/
  Power::TimerProcess(this->q048); /*0x4d287c*/
  Power::TimerProcess(this->q04C); /*0x4d2887*/
  Power::TimerProcess(this->q050); /*0x4d2892*/
  Power::TimerProcess(this->u32_54); /*0x4d289d*/
  Power::TimerProcess(this->u32_58); /*0x4d28a8*/
  return Power::TimerProcess(this->HouseClass_6C); /*0x4d28b8*/

}
} // namespace gamemd
// 0x4D28D0
namespace gamemd {
unsigned int * FoggedObjectClass::CheckVisibility(unsigned int * v3)
{

  (*((unsigned short *)&(v3))) = this->u32_34 / 256; /*0x4d28e0*/
  (*(((unsigned short *)&(v3)) + 1)) = this->u32_38 / 256; /*0x4d28f4*/
  *v3 = v3; /*0x4d2901*/
  return v3; /*0x4d2904*/
}
} // namespace gamemd
// 0x4D2BC0
namespace gamemd {
AbstractClass * * FoggedObjectClass::ResizeArray(int a2, char * a3)
{

  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  unsigned int *v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x4d2bc2*/
  if ( a2 ) /*0x4d2bce*/
  {
    v5 = a3; /*0x4d2bd4*/
    LOBYTE(this->vtable4) = 0; /*0x4d2bd8*/
    if ( a3 ) /*0x4d2bdd*/
    {
      if ( a2 - 1 >= 0 ) /*0x4d2c1a*/
      {
        v9 = a3 + 8; /*0x4d2c1c*/
        v10 = a2; /*0x4d2c1f*/
        do /*0x4d2c2f*/
        {
          *((unsigned int *)v9 - 2) = 0; /*0x4d2c20*/
          *((unsigned int *)v9 - 1) = 0; /*0x4d2c23*/
          *v9 = 0; /*0x4d2c26*/
          *((unsigned int *)v9 + 1) = 0; /*0x4d2c28*/
          v9 += 16; /*0x4d2c2b*/
          --v10; /*0x4d2c2e*/
        }
        while ( v10 ); /*0x4d2c2f*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x4d2be5*/
      if ( v6 ) /*0x4d2bef*/
      {
        if ( a2 - 1 >= 0 ) /*0x4d2bf6*/
        {
          v7 = v6 + 8; /*0x4d2bf8*/
          v8 = a2; /*0x4d2bfb*/
          do /*0x4d2c0b*/
          {
            *(unsigned int *)(v7 - 8) = 0; /*0x4d2bfc*/
            *(unsigned int *)(v7 - 4) = 0; /*0x4d2bff*/
            *(unsigned char *)v7 = 0; /*0x4d2c02*/
            *(unsigned int *)(v7 + 4) = 0; /*0x4d2c04*/
            v7 += 16; /*0x4d2c07*/
            --v8; /*0x4d2c0a*/
          }
          while ( v8 ); /*0x4d2c0b*/
        }
        v5 = (char *)v6; /*0x4d2c0d*/
      }
      else
      {
        v5 = 0; /*0x4d2c11*/
      }
    }
    LOBYTE(this->vtable4) = 1; /*0x4d2c33*/
    if ( !v5 ) /*0x4d2c37*/
      return 0; /*0x4d2cc7*/
    if ( *&this->vtable2 ) /*0x4d2c3d*/
    {
      v11 = *&this->vtable3; /*0x4d2c42*/
      if ( a2 < v11 ) /*0x4d2c47*/
        v11 = a2; /*0x4d2c49*/
      if ( v11 > 0 ) /*0x4d2c4d*/
      {
        v12 = 0; /*0x4d2c4f*/
        do /*0x4d2c75*/
        {
          v13 = (unsigned int *)(*&this->vtable2 + v12); /*0x4d2c56*/
          v14 = &v5[v12]; /*0x4d2c58*/
          v12 += 16; /*0x4d2c5b*/
          --v11; /*0x4d2c5e*/
          *(unsigned int *)v14 = *v13; /*0x4d2c61*/
          *((unsigned int *)v14 + 1) = v13[1]; /*0x4d2c66*/
          *((unsigned int *)v14 + 2) = v13[2]; /*0x4d2c6c*/
          *((unsigned int *)v14 + 3) = v13[3]; /*0x4d2c72*/
        }
        while ( v11 ); /*0x4d2c75*/
        v3 = a2; /*0x4d2c77*/
      }
      if ( BYTE1(this->vtable4) ) /*0x4d2c7d*/
      {
        __3_YAXPAX_Z(*&this->vtable2); /*0x4d2c86*/
        *&this->vtable2 = 0; /*0x4d2c8e*/
      }
    }
    *&this->vtable2 = v5; /*0x4d2c99*/
    *&this->vtable3 = v3; /*0x4d2c9f*/
    BYTE1(this->vtable4) = a3 == 0; /*0x4d2ca2*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_UDrawRecord_FoggedObjectClass *))(*(unsigned int *)this->vtable1 + 12))(this); /*0x4d2cab*/
  }
  v15 = *&this->vtable3; /*0x4d2cae*/
  if ( v15 < *(unsigned int *)this->Count ) /*0x4d2cb6*/
    *(unsigned int *)this->Count = v15; /*0x4d2cb8*/
  return 1; /*0x4d2cbb*/

}
} // namespace gamemd
// 0x4D2CD0
namespace gamemd {
int FoggedObjectClass::Read(unsigned int * a2, void *a2_2, void *a3)
{
  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *(unsigned int *)a2_2->__tail_10; /*0x4d2cd0*/
  result = 0; /*0x4d2cd5*/
  if ( v2 <= 0 ) /*0x4d2cdb*/
    return -1; /*0x4d2cfc*/
  for ( i = *(unsigned int **)&a2_2->vtable2; *i != *a2_2 || i->vtable2 != a2_2[1]; i += 4 ) /*0x4d2ce1*/
  {
    if ( ++result >= v2 ) /*0x4d2cfa*/
      return -1; /*0x4d2cfa*/
  }
  return result; /*0x4d2cff*/
}
} // namespace gamemd
// 0x4E07B0
namespace gamemd {
int FoggedObjectClass_42::FindItem(unsigned int * a2)
{

  int uniqueId; // edx
  int result; // eax
  unsigned int *i; // ecx

  uniqueId = this->uniqueId; /*0x4e07b0*/
  result = 0; /*0x4e07b3*/
  if ( uniqueId <= 0 ) /*0x4e07b8*/
    return -1; /*0x4e07cf*/
  for ( i = (unsigned int *)this->vtable1; *i != *a2; ++i ) /*0x4e07be*/
  {
    if ( ++result >= uniqueId ) /*0x4e07cd*/
      return -1; /*0x4e07cd*/
  }
  return result; /*0x4e07d2*/

}
}
// 0x4D24A0
namespace gamemd {  // G42.18c ns repair
int   FoggedObjectClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax
  int v4; // edx
  int v5; // ebp
  int v6; // edi

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x4d24b3*/
  if ( result >= 0 ) /*0x4d24ba*/
  {
    v4 = *a1; /*0x4d24bf*/
    aP2 = aP0->HouseClass_6C; /*0x4d24cb*/
    result = (*(int (__stdcall **)(int *, int *, int, unsigned int))(v4 + 16))(a1, &aP2, 4, 0); /*0x4d24cf*/
    if ( result >= 0 ) /*0x4d24d4*/
    {
      v5 = 0; /*0x4d24da*/
      if ( aP2 > 0 ) /*0x4d24de*/
      {
        v6 = 0; /*0x4d24e0*/
        do /*0x4d2500*/
        {
          if ( (*(int (__stdcall **)(int *, int, int, unsigned int))(*a1 + 16))(a1, v6 + aP0->UIName, 16, 0) < 0 ) /*0x4d24f4*/
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
}  // G42.18c ns repair
// 0x4D27B0
namespace gamemd {  // G42.18c ns repair
int FoggedObjectClass::GetTypeIdentifier()
{
  return 61; /*0x4d27b5*/
}
}  // G42.18c ns repair
// 0x4D27C0
namespace gamemd {  // G42.18c ns repair
int FoggedObjectClass::GetObjectSize()
{
  return 120; /*0x4d27c5*/
}
}  // G42.18c ns repair
// 0x4D27D0
namespace gamemd {  // G42.18c ns repair
int FoggedObjectClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x4d27d6*/
    return -2147467261; /*0x4d27d8*/
  *a2 = 474417934; /*0x4d27e6*/
  a2[1] = 299002327; /*0x4d27ee*/
  a2[2] = 1610674872; /*0x4d27f7*/
  a2[3] = unk_7E999C; /*0x4d2800*/
  return 0; /*0x4d27dd*/
}
}  // G42.18c ns repair
// 0x4D2910
namespace gamemd {  // G42.18c ns repair
FoggedObjectClass * FoggedObjectClass::ddtor(char a2, int a3)
{
  DestructFoggedObjectClass((int)a3); /*0x4d2913*/
  if ( (a3 & 1) != 0 ) /*0x4d291d*/
    operator delete((void *)(a3)); /*0x4d2920*/
  return a3; /*0x4d292a*/
}
}  // G42.18c ns repair
// 0x4D29B0
namespace gamemd {  // G42.18c ns repair
char FoggedObjectClass::AddRef(int a2)
{

  int m_8; // edi
  int v3; // esi
  int v4; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

  m_8 = this->vtable3; /*0x4d29bb*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4d29c0*/
  {
    v3 = 0; /*0x4d29c2*/
    if ( m_8 <= 0 ) /*0x4d29c6*/
      return 1; /*0x4d29f6*/
    v4 = *(unsigned int *)(a2 + 4); /*0x4d29c8*/
    v5 = *&this->vtable2; /*0x4d29cb*/
    v6 = (unsigned int *)(v4 + 4); /*0x4d29ce*/
    v7 = v4 - (unsigned int)v5; /*0x4d29d1*/
    while ( *v5 == *(unsigned int *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x4d29e3*/
    {
      ++v3; /*0x4d29e5*/
      v6 += 4; /*0x4d29e6*/
      v5 += 4; /*0x4d29e9*/
      if ( v3 >= m_8 ) /*0x4d29ee*/
        return 1; /*0x4d29ee*/
    }
  }
  return 0; /*0x4d29f0*/

}
}  // G42.18c ns repair
// 0x4D2D60
namespace gamemd {  // G42.18c ns repair
DynamicVector * FoggedObjectClass::QueryInterface(char a2, int a3)
{
  void *v3; // eax

  v3 = *(void **)&a3->m_1[3]; /*0x4d2d63*/
  *(unsigned int *)a3->__pad_0 = &vt_VectorClass; /*0x4d2d66*/
  if ( v3 && (((unsigned char *)&(a3->m_C))[1]) ) /*0x4d2d70*/
  {
    operator delete((void *)(v3)); /*0x4d2d78*/
    *(unsigned int *)&a3->m_1[3] = 0; /*0x4d2d80*/
  }
  (((unsigned char *)&(a3->m_C))[1]) = 0; /*0x4d2d8b*/
  *(unsigned int *)&a3->__pad_5[3] = 0; /*0x4d2d91*/
  if ( (a3 & 1) != 0 ) /*0x4d2d98*/
    operator delete((void *)(a3)); /*0x4d2d9b*/
  return a3->__pad_0; /*0x4d2da5*/
}
}  // G42.18c ns repair
// 0x4E01F0
namespace gamemd {
void FoggedObjectClass_42::ClearBuffer(void *a1_1)
{
  void *vtable1; // eax

  vtable1 = (void *)a1_1->vfptr.vfptr1; /*0x4e01f6*/
  a1_1->vfptr.uniqueId = 0; /*0x4e01f9*/
  if ( vtable1 && (((unsigned char *)&(a1_1->vfptr.vfptr3))[1]) ) /*0x4e0200*/
  {
    operator delete((void *)(vtable1)); /*0x4e0206*/
    a1_1->vfptr.vfptr1 = 0; /*0x4e020e*/
  }
  (((unsigned char *)&(a1_1->vfptr.vfptr3))[1]) = 0; /*0x4e0211*/
  a1_1->vfptr.vfptr2 = 0; /*0x4e0214*/
}
} // namespace gamemd

// 0x4E0220
namespace gamemd {
unsigned int FoggedObjectClass_42::PointerToIndex(int a2)
{

  if ( LOBYTE(this->vtable3) ) /*0x4e0220*/
    return (unsigned int)(a2 - this->vtable1) >> 2; /*0x4e0235*/
  else
    return 0; /*0x4e0227*/

}
} // namespace gamemd

// 0x4E0240
namespace gamemd {
int FoggedObjectClass_42::Seek(int a2, void *a2_2, void *a3_1)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x4e024a*/

}
} // namespace gamemd

// 0x4E0580
namespace gamemd {
char FoggedObjectClass_42::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->Capacity; /*0x4e0582*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4e058d*/
  {
    v3 = 0; /*0x4e058f*/
    if ( m_8 <= 0 ) /*0x4e0593*/
      return 1; /*0x4e05b3*/
    v4 = *&this->Items; /*0x4e0595*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4e059b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4e05a4*/
    {
      ++v3; /*0x4e05a6*/
      ++v4; /*0x4e05a7*/
      if ( v3 >= m_8 ) /*0x4e05ac*/
        return 1; /*0x4e05ac*/
    }
  }
  return 0; /*0x4e05ae*/

}
} // namespace gamemd

// 0x4E05C0
namespace gamemd {
char FoggedObjectClass_42::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4e05cc*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x4e05d6*/
    if ( a3 ) /*0x4e05dc*/
      v4 = a3; /*0x4e05f2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4e05ee*/
    LOBYTE(this->IsInitialized) = 1; /*0x4e05f6*/
    if ( v4 ) /*0x4e05fa*/
    {
      if ( *&this->Items ) /*0x4e0605*/
      {
        m_8 = this->Capacity; /*0x4e060c*/
        if ( a2 < m_8 ) /*0x4e0611*/
          m_8 = a2; /*0x4e0613*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x4e0619*/
          ++i; /*0x4e061e*/
        if ( BYTE1(this->IsInitialized) ) /*0x4e062b*/
        {
          __3_YAXPAX_Z(*&this->Items); /*0x4e0636*/
          *&this->Items = 0; /*0x4e063e*/
        }
      }
      *&this->Items = v4; /*0x4e0647*/
      this->Capacity = a2; /*0x4e064f*/
      BYTE1(this->IsInitialized) = a3 == 0; /*0x4e0652*/
      return 1; /*0x4e0658*/
    }
    else
    {
      return 0; /*0x4e05ff*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAVFootClass *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x4e0662*/
    return 1; /*0x4e0668*/
  }

}
} // namespace gamemd

// 0x4E0670
namespace gamemd {
void FoggedObjectClass_42::ddtor(void *a1)
{

  if ( *&this->Items && BYTE1(this->IsInitialized) ) /*0x4e067d*/
  {
    __3_YAXPAX_Z(*&this->Items); /*0x4e0683*/
    *&this->Items = 0; /*0x4e068b*/
  }
  BYTE1(this->IsInitialized) = 0; /*0x4e068e*/
  this->Capacity = 0; /*0x4e0691*/

}
} // namespace gamemd

// 0x4E06A0
namespace gamemd {
int FoggedObjectClass_42::Read(unsigned int * a2, void *a2_2, void *a3)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !(*((unsigned char *)&(*(unsigned int *)&a2_2->IsInitialized))) ) /*0x4e06a0*/
    return 0; /*0x4e06a8*/
  m_8 = a2_2->Capacity; /*0x4e06ae*/
  result = 0; /*0x4e06b1*/
  if ( m_8 <= 0 ) /*0x4e06b5*/
    return -1; /*0x4e06cc*/
  for ( i = *(unsigned int **)&a2_2->Items; *i != *a2_2; ++i ) /*0x4e06bb*/
  {
    if ( ++result >= m_8 ) /*0x4e06ca*/
      return -1; /*0x4e06ca*/
  }
  return result; /*0x4e06aa*/
}
} // namespace gamemd

// 0x4E06E0
namespace gamemd {
unsigned int FoggedObjectClass_42::Write(int a2)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x4e06e0*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x4e06f5*/
  else
    return 0; /*0x4e06e7*/

}
} // namespace gamemd

// 0x4E0700
namespace gamemd {
char FoggedObjectClass_42::SetCapacity(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int vtable2; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4e070c*/
  {
    LOBYTE(this->vtable3) = 0; /*0x4e0712*/
    if ( a3 ) /*0x4e0718*/
      v4 = a3; /*0x4e072e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4e072a*/
    LOBYTE(this->vtable3) = 1; /*0x4e0732*/
    if ( !v4 ) /*0x4e0736*/
      return 0; /*0x4e07aa*/
    if ( this->vtable1 ) /*0x4e0738*/
    {
      vtable2 = this->vtable2; /*0x4e073f*/
      if ( a2 < vtable2 ) /*0x4e0744*/
        vtable2 = a2; /*0x4e0746*/
      for ( i = 0; i < vtable2; v4[i - 1] = *(unsigned int *)(this->vtable1 + 4 * i - 4) ) /*0x4e074c*/
        ++i; /*0x4e0751*/
      if ( BYTE1(this->vtable3) ) /*0x4e075e*/
      {
        __3_YAXPAX_Z((void *)this->vtable1); /*0x4e0769*/
        this->vtable1 = 0; /*0x4e0771*/
      }
    }
    this->vtable1 = (int)v4; /*0x4e077a*/
    this->vtable2 = a2; /*0x4e0782*/
    BYTE1(this->vtable3) = a3 == 0; /*0x4e0785*/
  }
  else
  {
    (*(void (**)(FoggedObjectClass *))(this->vtable0 + 12))(this); /*0x4e078e*/
  }
  v7 = this->vtable2; /*0x4e0791*/
  if ( v7 < this->uniqueId ) /*0x4e0799*/
    this->uniqueId = v7; /*0x4e079b*/
  return 1; /*0x4e079e*/

}
} // namespace gamemd

// 0x4E0CE0
namespace gamemd {
VectorClass_flat * FoggedObjectClass_42::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *&Block->__pad_004; /*0x4e0ce3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4e0ce6*/
  if ( v3 && (((unsigned char *)&(*&Block->__pad_004))[1]) ) /*0x4e0cf0*/
  {
    operator delete((void *)(v3)); /*0x4e0cf8*/
    Block->Items = (unsigned int)(0); /*0x4e0d00*/
  }
  (((unsigned char *)&(*&Block->__pad_004))[1]) = 0; /*0x4e0d0b*/
  Block->Capacity = 0; /*0x4e0d11*/
  if ( (a2 & 1) != 0 ) /*0x4e0d18*/
    operator delete((void *)(Block)); /*0x4e0d1b*/
  return Block->tail_0; /*0x4e0d25*/
}
} // namespace gamemd
