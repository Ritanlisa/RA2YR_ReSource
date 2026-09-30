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

// 0x4D0980
namespace gamemd {
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
  FoggedObjectClass * v19;
  int v20; // ecx
  int v21; // eax
  int v22; // edi
  int v24; // [esp+18h] [ebp-28h]
  int v25[4]; // [esp+20h] [ebp-20h] BYREF
  unsigned int v26[4]; // [esp+30h] [ebp-10h] BYREF
  unsigned int *v27; // [esp+44h] [ebp+4h]
  int v28; // [esp+48h] [ebp+8h]

  AbstractClass::Constructor(); /*0x4d0989*/
  this->LastSight = (int *)(a3);
  this->House = (unsigned int)((int *)(0));
  this->Cell[0] = (char)((int *)(a4));
  this->vtable4 = (unsigned int)((int *)(20));
  this->u32_34 = (unsigned int)((int *)(*a2));
  this->u32_38 = (unsigned int)((int *)(a2[1]));
  this->u32_3C = (unsigned int)((int *)(a2[2]));
  this->abstractFlags = (int *)(Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->level);
  this->u32_54 = (unsigned int)((int *)(-1));
  this->u32_58 = (unsigned int)((int *)(0));
    FoggedObject::DrawVector_Constructor((unsigned int *)((char *)this + 368), 0, 0);
    *((unsigned int *)this + 368) = &vt_DynamicVectorClass_FoggedObjectClass_DrawRecord;
    *((unsigned int *)this + 448) = 10;
    *((unsigned int *)this + 432) = 0;
    *((unsigned char *)this + 464) = 1;
    *(unsigned int *)this = &FoggedObjectClass::`vftable';
    *((unsigned int *)this + 16) = &FoggedObjectClass::`vftable';
    *((unsigned int *)this + 32) = &FoggedObjectClass::`vftable';
    *((unsigned int *)this + 48) = &vt_FoggedObjectClass;
  v5 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x4d0a2a*/
  PlacementRect = BuildingClass::GetPlacementRect((BuildingClass *)v5, v25); /*0x4d0a3b*/
  StartCoords = House::GetStartCoords((House *)v5, v26); /*0x4d0a3d*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x4d0a4e*/
  {
    v8 = *PlacementRect; /*0x4d0adf*/
    v15 = PlacementRect[1]; /*0x4d0ae1*/
    v14 = PlacementRect[2]; /*0x4d0ae4*/
    v16 = PlacementRect[3]; /*0x4d0ae7*/
  }
  else
  {
    v28 = PlacementRect[2]; /*0x4d0a59*/
    if ( v28 <= 0 || (v27 = (unsigned int *)PlacementRect[3], (int)v27 <= 0) ) /*0x4d0a68*/
    {
      v8 = *StartCoords; /*0x4d0ad2*/
      v15 = StartCoords[1]; /*0x4d0ad4*/
      v14 = StartCoords[2]; /*0x4d0ad7*/
      v16 = StartCoords[3]; /*0x4d0ada*/
    }
    else
    {
      v8 = *StartCoords; /*0x4d0a6a*/
      v9 = *PlacementRect; /*0x4d0a6c*/
      v10 = StartCoords[2]; /*0x4d0a6e*/
      v11 = StartCoords[1]; /*0x4d0a71*/
      v12 = StartCoords[3]; /*0x4d0a74*/
      v24 = v10; /*0x4d0a79*/
      if ( v8 > *PlacementRect ) /*0x4d0a7d*/
      {
        v10 += v8 - v9; /*0x4d0a81*/
        v8 = *PlacementRect; /*0x4d0a83*/
        v24 = v10; /*0x4d0a85*/
      }
      v13 = PlacementRect[1]; /*0x4d0a89*/
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
    *((unsigned int *)this + 256) = v8;
    *((unsigned int *)this + 272) = v15;
    *((unsigned int *)this + 288) = v14;
    *((unsigned int *)this + 304) = v16;
    v17 = *((unsigned int *)this + 272);
    *((unsigned int *)this + 256) += MEMORY[0x887324][44].__tail_0;
    *((unsigned int *)this + 272) = (char *)MEMORY[0x887324][45].__tail_0 + v17;
    v18 = *((unsigned int *)this + 272) - MEMORY[0x886FA4];
    *((unsigned int *)this + 256) -= MEMORY[0x886FA0];
    *((unsigned int *)this + 272) = v18;
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d0b6f*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D24 + dword_8B3D18,
         0) )
  {
    v19 = (gamemd::FoggedObjectClass *)((unsigned int)(g_FootClassConfig++));
    *((unsigned int *)(unsigned int)(dword_8B3D14)+ v19) = this; /*0x4d0b8b*/
  }
    v20 = (__int16)(*((unsigned int *)this + 208) / 256);
  v21 = dword_8B3CC8; /*0x4d0bcd*/
    v22 = 74 * ((__int16)(*((unsigned int *)this + 224) / 256) - ((v20 + (__int16)(*((unsigned int *)this + 224) / 256)) << 9) - v20)
      - this->vtable4
      + 0x7FFFFFFF;
  if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d0bdf*/
    goto LABEL_27; /*0x4d0bdf*/
  if ( !dword_8B3CC8 ) /*0x4d0be3*/
    v21 = 10; /*0x4d0be5*/
  if ( Vector::ReallocDynamic((int)&g_MissionPool, v21) ) /*0x4d0bf0*/
  {
  LABEL_27:
    *((unsigned int *)g_MissionPool + 2 * g_MissionState) = v22; /*0x4d0c04*/
    *((unsigned int *)g_MissionPool + 2 * g_MissionState + 1) = this; /*0x4d0c12*/
    byte_8B3CCC = 0; /*0x4d0c1c*/
    ++g_MissionState; /*0x4d0c23*/
  }
  return (int)this; /*0x4d0c2a*/
}
} // namespace gamemd
// 0x4D0C40
namespace gamemd {
AbstractClass * FoggedObjectClass::InitTerrainFog(int a1, int a2)
{
  int level; // eax
  CellClass *v6; // eax
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // edi
  int v16; // ebp
  unsigned int *v17; // ebx
  signed int i; // eax
  unsigned int *v19; // ecx
  int v22; // [esp+14h] [ebp-20h]
  unsigned int v23[2]; // [esp+18h] [ebp-1Ch] BYREF
  int v24; // [esp+20h] [ebp-14h]
  int v25; // [esp+30h] [ebp-4h]

  AbstractClass::Constructor(); /*0x4d0c49*/
  this->LastSight = (unsigned int)(-1);
  this->House = (unsigned int)(0);
  this->Cell[0] = (unsigned int)(0);
  this->vtable4 = (unsigned int)(29);
  level = (unsigned int)(Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], aP1)->level);
  this->u32_54 = (unsigned int)(a3);
  this->abstractFlags = (unsigned int)(level);
  this->u32_58 = (unsigned int)(a4);
    FoggedObject::DrawVector_Constructor((unsigned int *)((char *)this + 368), 0, 0);
    *((unsigned int *)this + 368) = &vt_DynamicVectorClass_FoggedObjectClass_DrawRecord;
    *((unsigned int *)this + 448) = 10;
    *((unsigned int *)this + 432) = 0;
    *((unsigned char *)this + 464) = 1;
    *(unsigned int *)this = &FoggedObjectClass::`vftable';
    *((unsigned int *)this + 16) = &FoggedObjectClass::`vftable';
    *((unsigned int *)this + 32) = &FoggedObjectClass::`vftable';
    *((unsigned int *)this + 48) = &vt_FoggedObjectClass;
  v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], aP1); /*0x4d0ccd*/
  v7 = aP1[1]; /*0x4d0cd4*/
  v8 = aP1[2]; /*0x4d0cd7*/
  v23[0] = *aP1; /*0x4d0cda*/
  v23[1] = v7; /*0x4d0cde*/
  v24 = v8; /*0x4d0ce2*/
  v9 = dword_8B3D68 * v6->level; /*0x4d0ced*/
  v24 = v9; /*0x4d0cf7*/
    *((unsigned int *)this + 208) = a1[0];
    *((unsigned int *)this + 224) = v7;
    *((unsigned int *)this + 240) = v9;
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v23, &v10); /*0x4d0d15*/
  v10 = v10 - 30; /*0x4d0d25*/
  v22 -= 15; /*0x4d0d32*/
  v22 = v22; /*0x4d0d2a*/
    *((unsigned int *)this + 256) = v21 - 30;
  v25 = 30; /*0x4d0d38*/
  v10 = v10; /*0x4d0d40*/
    *((unsigned int *)this + 272) = v11;
  v25 = v25; /*0x4d0d47*/
    *((unsigned int *)this + 288) = 60;
    *((unsigned int *)this + 304) = v12;
    v13 = *((unsigned int *)this + 272);
    *((unsigned int *)this + 256) += *(unsigned int *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9432] + 176);
    *((unsigned int *)this + 272) = *(unsigned int *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9432] + 180) + v13;
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d0dab*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D18 + dword_8B3D24,
         0) )
  {
    v14 = g_FootClassConfig++; /*0x4d0db8*/
    *((unsigned int *)dword_8B3D14 + v14) = this; /*0x4d0dc7*/
  }
  v15 = 74 /*0x4d0e11*/
      * ((int16_t)(this->u32_38 / 256)
       - (((int16_t)(this->u32_34 / 256) + (int16_t)(this->u32_38 / 256)) << 9)
       - (int16_t)(this->u32_34 / 256))
      - this->vtable4
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
  v17 = (unsigned int *)RA2_OPNEW(8 * (v16 + dword_8B3CC8)); /*0x4d0e44*/
  if ( v17 ) /*0x4d0e4b*/
  {
    for ( i = 0; i < (int)g_MissionState; v17[2 * i - 1] = v19[1] ) /*0x4d0e64*/
    {
      v19 = (unsigned int *)((char *)v17 + 8 * i++);
      v17[2 * i - 2] = *v19; /*0x4d0e72*/
    }
    RA2_OPDEL(v17); /*0x4d0e8e*/
    v17 = v17; /*0x4d0e9d*/
    dword_8B3CC8 += v16; /*0x4d0ea3*/
    dword_8B3CD0 = 0; /*0x4d0ea8*/
  LABEL_15:
    *((unsigned int *)v17 + 2 * g_MissionState) = v15; /*0x4d0eb2*/
    *((unsigned int *)v17 + 2 * g_MissionState + 1) = this; /*0x4d0ecb*/
    byte_8B3CCC = 0; /*0x4d0ed5*/
    ++g_MissionState; /*0x4d0edc*/
  }
  return (int)this; /*0x4d0ee3*/
}
} // namespace gamemd
// 0x4D0EF0
namespace gamemd {
AbstractClass * FoggedObjectClass::Constructor(int a1, int a2)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  FoggedObjectClass * v7;
  unsigned int *v8; // eax
  FoggedObjectClass * v9;
  int v10; // eax
  int v11; // ebp
  int ProductionFrame; // eax
  int v13; // ebp
  int v14; // eax
  char v15; // al
  int v16; // ecx
  int v17; // eax
  int v18; // eax
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
  bool v43; // zf
  int *v45; // [esp+20h] [ebp-40h]
  int v46; // [esp+24h] [ebp-3Ch]
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

  AbstractClass::Constructor(); /*0x4d0ef9*/
    *((unsigned int *)this + 144) = -1;
  v4 = aP1[135]; /*0x4d0f0c*/
  this->Cell = (unsigned int)(0);
    *((unsigned int *)this + 160) = v4;
    *((unsigned int *)this + 192) = 6;
  this->u32_34 = (unsigned int)(aP1[39]);
  this->u32_38 = (unsigned int)(aP1[40]);
  this->u32_3C = (unsigned int)(aP1[41]);
  v5 = (unsigned int)(aP1[40]);
  v49[0] = (int)((unsigned int)(aP1[39]));
  v6 = (unsigned int)(aP1[41]);
  v49[1] = (unsigned int)(v5);
  v50 = (unsigned int)(v6);
  v7 = (unsigned int)(this + 92);
    *((unsigned int *)this + 320) = *((char *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v49) + 283);
    *((unsigned int *)this + 336) = -1;
    *((unsigned int *)this + 352) = 0;
    FoggedObject::DrawVector_Constructor((unsigned int *)((char *)this + 368), 0, 0);
    *((unsigned int *)this + 368) = &vt_DynamicVectorClass_FoggedObjectClass_DrawRecord;
    *((unsigned int *)this + 448) = 10;
    *((unsigned int *)this + 432) = 0;
    *((unsigned char *)this + 464) = (unsigned char)aP2;
  *(unsigned int *)this = (void*)&FoggedObjectClass_vftable; /*0x4d0fa5*/
    *((unsigned int *)this + 16) = &FoggedObjectClass::`vftable';
    *((unsigned int *)this + 32) = &FoggedObjectClass::`vftable';
    *((unsigned int *)this + 48) = &vt_FoggedObjectClass;
  v8 = (unsigned int *)(*(int (**)(int *, char *))(*aP1 + 300))(aP1, v52); /*0x4d0fc5*/
    *((unsigned int *)this + 256) = *v8;
    *((unsigned int *)this + 272) = v8[1];
    *((unsigned int *)this + 288) = v8[2];
    *((unsigned int *)this + 304) = v8[3];
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d101a*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D18 + dword_8B3D24,
         0) )
  {
    v9 = (gamemd::FoggedObjectClass *)((unsigned int)(g_FootClassConfig++));
    *((unsigned int *)(unsigned int)(dword_8B3D14)+ v9) = this; /*0x4d1036*/
  }
  v10 = dword_8B3CC8; /*0x4d107c*/
  v11 = 74 /*0x4d1081*/
      * ((int16_t)(this->u32_38 / 256)
       - (((int16_t)(this->u32_34 / 256) + (int16_t)(this->u32_38 / 256)) << 9)
       - (int16_t)(this->u32_34 / 256))
      - this->vtable4
      + 0x7FFFFFFF;
  if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d108a*/
    goto LABEL_11; /*0x4d108a*/
  if ( !dword_8B3CC8 ) /*0x4d108e*/
    v10 = 10; /*0x4d1090*/
  if ( (uint8_t)((Vector *)(v10))->ReallocDynamic() ) /*0x4d109b*/
  {
  LABEL_11:
    *((unsigned int *)g_MissionPool + 2 * g_MissionState) = v11; /*0x4d10af*/
    *((unsigned int *)g_MissionPool + 2 * g_MissionState + 1) = this; /*0x4d10bd*/
    byte_8B3CCC = 0; /*0x4d10c7*/
    ++g_MissionState; /*0x4d10ce*/
  }
  *((unsigned char *)aP1 + 1767) = 1; /*0x4d10d5*/
  ProductionFrame = BuildingClass::GetProductionFrame(aP1); /*0x4d10dc*/
  v13 = aP1[328]; /*0x4d10e1*/
  v57 = ProductionFrame; /*0x4d10e7*/
  if ( *(unsigned char *)(v13 + 5823) && ((v14 = aP1[390], v14 == 12) || v14 == 8) /*0x4d1112*/
    || (v15 = *(unsigned char *)(v13 + 5824), IDA_LOBYTE(v53) = 0, v15) )
  {
    IDA_LOBYTE(v53) = 1; /*0x4d1114*/
  }
    v16 = *((unsigned int *)this + 400);
    if ( *((unsigned int *)this + 432) < v16
    || (this->u32_69 || !v16)
    && (v17 = this->referenceCount, v17 > 0)
    && (*(uint8_t (**)(int, int, unsigned int))(this->u32_64)(this + 92, v16 + v17, 0) )
  {
        v18 = *((unsigned int *)this + 432);
        *((unsigned int *)this + 432) = v18 + 1;
    v53 = v53; /*0x4d1156*/
        v20 = (unsigned int *)(*((unsigned int *)this + 384) + 16 * v18);
    *v20 = v13; /*0x4d1160*/
    v20[1] = v57; /*0x4d1162*/
    v20[2] = v53; /*0x4d1167*/
    v20[3] = 0; /*0x4d116a*/
  }
  v21 = aP1 + 343; /*0x4d116d*/
  v46 = 21; /*0x4d1173*/
  v45 = aP1 + 343; /*0x4d117b*/
  do /*0x4d130a*/
  {
    if ( !*v21 ) /*0x4d1183*/
      goto LABEL_47; /*0x4d1183*/
    *(unsigned char *)(*v21 + 409) = 1; /*0x4d1189*/
    v56 = *(unsigned int *)(*v21 + 200); /*0x4d119a*/
    v22 = (int *)(*(int (**)(int, int *))(*(unsigned int *)*v21 + 296))(*v21, v55); /*0x4d11a3*/
        v23 = (BuildingClass **)((char *)this + 256);
        if ( *((int *)this + 288) <= 0 || *((int *)this + 304) <= 0 )
    {
      v32 = *v22; /*0x4d1266*/
      v33 = v22[1]; /*0x4d1268*/
      v34 = v22[2]; /*0x4d126b*/
    }
    else
    {
      v58 = v22[2]; /*0x4d11c7*/
      if ( v58 > 0 ) /*0x4d11cb*/
      {
        v48 = v22[3]; /*0x4d11d6*/
        if ( v48 > 0 ) /*0x4d11da*/
        {
          v24 = *v23; /*0x4d11dc*/
                    v25 = *((unsigned int *)this + 272);
                    v26 = *((unsigned int *)this + 288);
          v50 = v26; /*0x4d11e4*/
                    v51 = *((unsigned int *)this + 304);
          v27 = *v22; /*0x4d11ef*/
          if ( v24 > *v22 ) /*0x4d11f3*/
          {
            v28 = v24 - v27 + v26; /*0x4d11f7*/
            v24 = *v22; /*0x4d11f9*/
            v50 = v28; /*0x4d11fb*/
          }
          v29 = v22[1]; /*0x4d11ff*/
          v29 = v29; /*0x4d1204*/
          if ( v25 > v29 ) /*0x4d1208*/
          {
            v30 = v25 - v29 + v51; /*0x4d1210*/
            v25 = v29; /*0x4d1212*/
            v51 = v30; /*0x4d1214*/
          }
          if ( v24 + v50 < v27 + v58 ) /*0x4d1226*/
            v50 = v27 - v24 + v58 + 1; /*0x4d1232*/
          v31 = v51; /*0x4d1240*/
          if ( v51 + v25 < v29 + v48 ) /*0x4d1249*/
            v31 = v29 + v48 - v25 + 1; /*0x4d124e*/
          v32 = v24; /*0x4d1250*/
          v33 = v25; /*0x4d1252*/
          v34 = v50; /*0x4d1254*/
          goto LABEL_41; /*0x4d1258*/
        }
      }
            v22 = (char *)this + 256;
      v32 = *v23; /*0x4d125c*/
            v33 = *((unsigned int *)this + 272);
            v34 = *((unsigned int *)this + 288);
    }
    v31 = v22[3]; /*0x4d126e*/
  LABEL_41:
    IDA_LOBYTE(v53) = 0; /*0x4d1271*/
        *((unsigned int *)this + 256) = v32;
        *((unsigned int *)this + 272) = v33;
        *((unsigned int *)this + 288) = v34;
        *((unsigned int *)this + 304) = v31;
    v21 = v45; /*0x4d1288*/
        v35 = *((unsigned int *)this + 432);
    v36 = *(unsigned int *)(v56 + 692) + *(unsigned int *)(*v45 + 172); /*0x4d129d*/
        v37 = *((unsigned int *)this + 400);
    v54 = *(unsigned int *)(*v45 + 256); /*0x4d12a8*/
    if ( v35 < v37 /*0x4d12cb*/
      || (this->u32_69 || !v37)
      && (v38 = this->referenceCount, v38 > 0)
      && (*(uint8_t (**)(int, int, unsigned int))(this->u32_64)(this + 92, v37 + v38, 0) )
    {
            v39 = *((unsigned int *)this + 432);
            *((unsigned int *)this + 432) = v39 + 1;
            v40 = (BuildingClass **)(*((unsigned int *)this + 384) + 16 * v39);
      v53 = v53; /*0x4d12e7*/
      *v40 = v56; /*0x4d12eb*/
      v54 = v54; /*0x4d12ed*/
      v40[1] = v36; /*0x4d12f1*/
      v40[2] = v53; /*0x4d12f4*/
      v40[3] = v54; /*0x4d12f7*/
    }
  LABEL_47:
    ++v21; /*0x4d12fa*/
    v43 = v46 == 1; /*0x4d1301*/
    v45 = v21; /*0x4d1302*/
    --v46; /*0x4d1306*/
  }
  while ( !v43 ); /*0x4d130a*/
    Cell::CreateCrater(*((unsigned int *)this + 256), *((unsigned int *)this + 272), *((unsigned int *)this + 288), *((unsigned int *)this + 304), 0);
    *((unsigned int *)this + 256) += *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22548] + 176);
    *((unsigned int *)this + 272) += *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22548] + 180);
  return this; /*0x4d1364*/
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

  AbstractClass::Constructor(); /*0x4d1379*/
    *((unsigned int *)this + 144) = -1;
    *((unsigned int *)this + 160) = 0;
    *((unsigned int *)this + 176) = 0;
    *((unsigned int *)this + 192) = 36;
    *((unsigned int *)this + 208) = a2[39];
    *((unsigned int *)this + 224) = a2[40];
    *((unsigned int *)this + 240) = a2[41];
  v3 = a2[40]; /*0x4d13b5*/
  v4 = a2[41]; /*0x4d13b8*/
  v22[0] = a2[39]; /*0x4d13bb*/
  v22[1] = v3; /*0x4d13c9*/
  v4 = v4; /*0x4d13cd*/
    *((unsigned int *)this + 320) = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], v22) + 283);
    *((unsigned int *)this + 336) = -1;
    *((unsigned int *)this + 352) = 0;
    FoggedObject::DrawVector_Constructor((unsigned int *)((char *)this + 368), 0, 0);
    *((unsigned int *)this + 368) = &vt_DynamicVectorClass_FoggedObjectClass_DrawRecord;
    *((unsigned int *)this + 448) = 10;
    *((unsigned int *)this + 432) = 0;
    *((unsigned char *)this + 464) = 1;
    *(unsigned int *)this = &FoggedObjectClass::`vftable';
    *((unsigned int *)this + 16) = &FoggedObjectClass::`vftable';
    *((unsigned int *)this + 32) = &FoggedObjectClass::`vftable';
    *((unsigned int *)this + 48) = &vt_FoggedObjectClass;
  v5 = (unsigned int *)(*(int (**)(unsigned int *, unsigned int *))(*a2 + 300))(a2, v22); /*0x4d1431*/
    *((unsigned int *)this + 256) = *v5;
    *((unsigned int *)this + 272) = v5[1];
    *((unsigned int *)this + 288) = v5[2];
    *((unsigned int *)this + 304) = v5[3];
    v6 = *((unsigned int *)this + 272);
    *((unsigned int *)this + 256) += MEMORY[0x887324][44].__tail_0;
    *((unsigned int *)this + 272) = (char *)MEMORY[0x887324][45].__tail_0 + v6;
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d14ab*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D18 + dword_8B3D24,
         0) )
  {
    v7 = g_FootClassConfig++; /*0x4d14b8*/
    *((unsigned int *)dword_8B3D14 + v7) = this; /*0x4d14c7*/
  }
    v8 = *((unsigned int *)this + 400);
    v9 = *((unsigned int *)this + 432);
  v10 = a2[50]; /*0x4d14d0*/
  IDA_LOBYTE(v4) = 0; /*0x4d14da*/
  if ( v9 < v8 /*0x4d14fc*/
    || (this->u32_69 || !v8)
    && (v11 = this->referenceCount, v11 > 0)
    && (*(uint8_t (**)(char *, int, unsigned int))(this->u32_5C + 8))(
         (char *)this + 92,
         v8 + v11,
         0) )
  {
        v12 = *((unsigned int *)this + 432);
        *((unsigned int *)this + 432) = v12 + 1;
        v13 = (unsigned int *)(*((unsigned int *)this + 384) + 16 * v12);
    v14 = v4; /*0x4d1516*/
    *v13 = v10; /*0x4d151a*/
    v13[1] = 0; /*0x4d151c*/
    v13[2] = v14; /*0x4d151f*/
    v13[3] = 0; /*0x4d1524*/
  }
    v15 = (__int16)(*((unsigned int *)this + 208) / 256);
    v16 = 74 * ((__int16)(*((unsigned int *)this + 224) / 256) - ((v15 + (__int16)(*((unsigned int *)this + 224) / 256)) << 9) - v15)
      - this->vtable4
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
  v18 = (unsigned int *)RA2_OPNEW(8 * (v17 + dword_8B3CC8)); /*0x4d15a2*/
  if ( v18 ) /*0x4d15a9*/
  {
    for ( i = 0; i < (int)g_MissionState; v18[2 * i - 1] = v20[1] ) /*0x4d15c2*/
    {
      v20 = (char *)v18 + 8 * i++; /*0x4d15ca*/
      v18[2 * i - 2] = *v20; /*0x4d15d0*/
    }
    RA2_OPDEL(v18); /*0x4d15ec*/
    v18 = v18; /*0x4d15fb*/
    dword_8B3CC8 += v17; /*0x4d1601*/
    dword_8B3CD0 = 0; /*0x4d1606*/
  LABEL_21:
    *((unsigned int *)v18 + 2 * g_MissionState) = v16; /*0x4d1610*/
    *((unsigned int *)v18 + 2 * g_MissionState + 1) = this; /*0x4d1629*/
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
    FoggedObject::DrawVector_Constructor((FoggedObject *)a1[1].Cell, 0, 0); /*0x4d2547*/
    a1[1].Cell[0] = (int)&DynamicVectorClass_FoggedObjectClass_DrawRecord_vftable; /*0x4d254c*/
    a1[2].? = 10; /*0x4d2552*/
    a1[2].? = 0; /*0x4d2559*/
    a1->AbstractClass = (void*)&FoggedObjectClass_vftable; /*0x4d255c*/
    *(void **)&a1->vtable2 = (void*)&FoggedObjectClass_vftable; /*0x4d2562*/
    *(void **)&a1->vtable3 = (void*)&FoggedObjectClass_vftable; /*0x4d2569*/
    *(unsigned short *)&a1->qC = (void*)&FoggedObjectClass_vftable; /*0x4d2570*/
  }
  ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->House); /*0x4d2580*/
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
    v17 = *(unsigned int *)(*((int (**)(FoggedObjectClass *, int *))a1->AbstractClass + 24))(a1, &v17); /*0x4d2665*/
    v12 = 74 * (IDA_SHIWORD(v17) - (((int16_t)v17 + IDA_SHIWORD(v17)) << 9) - (int16_t)v17) /*0x4d26a1*/
        - (unsigned int)a1[1].AbstractClass
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
    v14 = (unsigned int *)RA2_OPNEW(8 * (v13 + dword_8B3CC8)); /*0x4d26d8*/
    if ( v14 ) /*0x4d26df*/
    {
      --v17; /*0x4d26f0*/
      for ( i = 0; i < (int)g_MissionState; v14[2 * i - 1] = v16[1] ) /*0x4d26f8*/
      {
        v16 = (char *)v14 + 8 * i++; /*0x4d2700*/
        v14[2 * i - 2] = *v16; /*0x4d2706*/
      }
      RA2_OPDEL(v14); /*0x4d2721*/
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
    IDA_LOBYTE(v20) = 0; /*0x4d25c6*/
    v21 = 0; /*0x4d25cb*/
    result = v2->vt_entry_68(&v18, 16, 0); /*0x4d25cf*/
    a2 = result; /*0x4d25d4*/
    if ( result < 0 ) /*0x4d25d8*/
      return result; /*0x4d2779*/
    vtable1 = a1[2].?; /*0x4d25de*/
    if ( (int)a1[2].? < (int)vtable1 /*0x4d2605*/
      || (IDA_BYTE1(a1[2].?) || !vtable1)
      && (uniqueId = a1[2].?, uniqueId > 0)
      && (*(uint8_t (**)(int *, int, unsigned int))(a1[1].Cell[0] + 8))(
           a1[1].Cell,
           (int)vtable1 + uniqueId,
           0) )
    {
      vtable3 = a1[2].?; /*0x4d260c*/
      v18 = v18; /*0x4d260f*/
      a1[2].? = (char *)vtable3 + 1; /*0x4d2616*/
      v11 = (char *)a1[2].AbstractClass + 16 * (unsigned int)vtable3; /*0x4d261f*/
      *v11 = v18; /*0x4d2621*/
      v11[1] = v19; /*0x4d2627*/
      v11[2] = v20; /*0x4d262e*/
      v11[3] = v21; /*0x4d2635*/
    }
    ObjectPtr::RegisterForTracking( /*0x4d264b*/
      (int)&SwizzleManagerClass_Instance,
      (int *)a1[2].AbstractClass + 4 * (int)a1[2].? - 4);
    if ( ++v17 >= (int)a1 ) /*0x4d265f*/
      goto LABEL_14; /*0x4d265f*/
  }
}
} // namespace gamemd
// 0x4D2810
namespace gamemd {
HouseClass * * FoggedObjectClass::PowerDrainUpdate(int a2)
{
  AbstractClass::ProcessPower(); /*0x4d2819*/
    Power::TimerProcess(*((unsigned int *)this + 144));
    Power::TimerProcess(*((unsigned int *)this + 176));
    Power::TimerProcess(*((unsigned int *)this + 192));
    Power::TimerProcess(*((unsigned int *)this + 208));
    Power::TimerProcess(*((unsigned int *)this + 224));
    Power::TimerProcess(*((unsigned int *)this + 240));
    Power::TimerProcess(*((unsigned int *)this + 256));
    Power::TimerProcess(*((unsigned int *)this + 272));
    Power::TimerProcess(*((unsigned int *)this + 288));
    Power::TimerProcess(*((unsigned int *)this + 304));
    Power::TimerProcess(*((unsigned int *)this + 320));
    Power::TimerProcess(*((unsigned int *)this + 336));
    Power::TimerProcess(*((unsigned int *)this + 352));
// 0x4a1d50
    return Power::TimerProcess(*((unsigned int *)this + 432));
}
} // namespace gamemd
// 0x4D28D0
namespace gamemd {
unsigned int * FoggedObjectClass::CheckVisibility(unsigned int * v3)
{

    LOWORD(v3) = *((unsigned int *)this + 52) / 256;
    HIWORD(v3) = *((unsigned int *)this + 56) / 256;
  *v3 = v3; /*0x4d2901*/
  return v3; /*0x4d2904*/
}
} // namespace gamemd
// 0x4D2BC0
namespace gamemd {
AbstractClass * * FoggedObjectClass::ResizeArray(int v3, char * a3)
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

  v3 = v3; /*0x4d2bc2*/
  if ( v3 ) /*0x4d2bce*/
  {
    v5 = a3; /*0x4d2bd4*/
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4d2bdd*/
    {
      if ( v3 - 1 >= 0 ) /*0x4d2c1a*/
      {
        v9 = a3 + 8; /*0x4d2c1c*/
        v10 = v3; /*0x4d2c1f*/
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
      v6 = RA2_OPNEW(16 * v3); /*0x4d2be5*/
      if ( v6 ) /*0x4d2bef*/
      {
        if ( v3 - 1 >= 0 ) /*0x4d2bf6*/
        {
          v7 = v6 + 8; /*0x4d2bf8*/
          v8 = v3; /*0x4d2bfb*/
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
        *((unsigned char *)this + 12) = 1;
    if ( !v5 ) /*0x4d2c37*/
      return 0; /*0x4d2cc7*/
        if ( *((unsigned int *)this + 1) )
    {
            v11 = *((unsigned int *)this + 2);
      if ( v3 < v11 ) /*0x4d2c47*/
        v11 = v3; /*0x4d2c49*/
      if ( v11 > 0 ) /*0x4d2c4d*/
      {
        v12 = 0; /*0x4d2c4f*/
        do /*0x4d2c75*/
        {
                    v13 = (unsigned int *)(*((unsigned int *)this + 1) + v12);
          v14 = &v5[v12]; /*0x4d2c58*/
          v12 += 16; /*0x4d2c5b*/
          --v11; /*0x4d2c5e*/
          *(unsigned int *)v14 = *v13; /*0x4d2c61*/
          *((unsigned int *)v14 + 1) = v13[1]; /*0x4d2c66*/
          *((unsigned int *)v14 + 2) = v13[2]; /*0x4d2c6c*/
          *((unsigned int *)v14 + 3) = v13[3]; /*0x4d2c72*/
        }
        while ( v11 ); /*0x4d2c75*/
        v3 = v3; /*0x4d2c77*/
      }
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->vtable2); /*0x4d2c86*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v5;
        *((unsigned int *)this + 2) = v3;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v15 = *((unsigned int *)this + 2);
    if ( v15 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v15;
  return 1; /*0x4d2cbb*/
}
} // namespace gamemd
// 0x4D2CD0
namespace gamemd {
int FoggedObjectClass::Read(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4d2cd5*/
  if ( v2 <= 0 ) /*0x4d2cdb*/
    return -1; /*0x4d2cfc*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2 || i[1] != a2[1]; i += 4 )
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

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x4e07b3*/
  if ( uniqueId <= 0 ) /*0x4e07b8*/
    return -1; /*0x4e07cf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= uniqueId ) /*0x4e07cd*/
      return -1; /*0x4e07cd*/
  }
  return result; /*0x4e07d2*/
}
}
// 0x4D24A0
int   FoggedObjectClass::SaveToINI(int aP2)
{
  int result; // eax
  int v4; // edx
  int v5; // ebp
  int v6; // edi

  result = AbstractClass::SaveLoad_Prefix((int *)this, this, aP2); /*0x4d24b3*/
  if ( result >= 0 ) /*0x4d24ba*/
  {
    v4 = *this; /*0x4d24bf*/
    aP2 = *((unsigned int *)this + 27); /*0x4d24cb*/
    result = (*(int (__stdcall **)(int *, int *, int, unsigned int))(v4 + 16))(this, &aP2, 4, 0); /*0x4d24cf*/
    if ( result >= 0 ) /*0x4d24d4*/
    {
      v5 = 0; /*0x4d24da*/
      if ( aP2 > 0 ) /*0x4d24de*/
      {
        v6 = 0; /*0x4d24e0*/
        do /*0x4d2500*/
        {
          if ( (*(int (__stdcall **)(int *, int, int, unsigned int))(*this + 16))(this, v6 + *((unsigned int *)this + 24), 16, 0) < 0 ) /*0x4d24f4*/
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
// 0x4D27B0
int FoggedObjectClass::GetTypeIdentifier()
{
  return 61; /*0x4d27b5*/
}
// 0x4D27C0
int FoggedObjectClass::GetObjectSize()
{
  return 120; /*0x4d27c5*/
}
// 0x4D27D0
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
// 0x4D2910
FoggedObjectClass * FoggedObjectClass::ddtor(char a2)
{
  DestructFoggedObjectClass(); /*0x4d2913*/
  if ( (a2 & 1) != 0 ) /*0x4d291d*/
    RA2_OPDEL(); /*0x4d2920*/
  return this; /*0x4d292a*/
}
// 0x4D29B0
char FoggedObjectClass::AddRef(int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4d29c0*/
  {
    v3 = 0; /*0x4d29c2*/
    if ( m_8 <= 0 ) /*0x4d29c6*/
      return 1; /*0x4d29f6*/
    v4 = *(unsigned int *)(a2 + 4); /*0x4d29c8*/
        v5 = (unsigned int *)*((unsigned int *)this + 4);
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
// 0x4D2D60
DynamicVector * FoggedObjectClass::QueryInterface(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_FoggedObjectClass_DrawRecord;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4d2d78*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4d2d98*/
    RA2_OPDEL(); /*0x4d2d9b*/
  return this; /*0x4d2da5*/
}
// 0x4E01F0
namespace gamemd {
void FoggedObjectClass_42::ClearBuffer()
{
  void *vtable1; // eax

    v2 = *(void **)((char *)this + 16);
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(vtable1); /*0x4e0206*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E0220
namespace gamemd {
unsigned int FoggedObjectClass_42::PointerToIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e0227*/
}
} // namespace gamemd

// 0x4E0240
namespace gamemd {
int FoggedObjectClass_42::Seek(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
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

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4e058d*/
  {
    v3 = 0; /*0x4e058f*/
    if ( m_8 <= 0 ) /*0x4e0593*/
      return 1; /*0x4e05b3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
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
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4e05dc*/
      v4 = a3; /*0x4e05f2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4e05ee*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4e05fa*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4e0611*/
          m_8 = a2; /*0x4e0613*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4e061e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x4e0636*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4e0658*/
    }
    else
    {
      return 0; /*0x4e05ff*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4e0668*/
  }
}
} // namespace gamemd

// 0x4E0670
namespace gamemd {
void FoggedObjectClass_42::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4e0683*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4E06A0
namespace gamemd {
int FoggedObjectClass_42::Read(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4e06a8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4e06b1*/
  if ( m_8 <= 0 ) /*0x4e06b5*/
    return -1; /*0x4e06cc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4e06bb*/
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
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
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
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4e0718*/
      v4 = a3; /*0x4e072e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4e072a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x4e0736*/
      return 0; /*0x4e07aa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < vtable2 ) /*0x4e0744*/
        vtable2 = a2; /*0x4e0746*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4e0751*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL((void *)this->vtable1); /*0x4e0769*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4e079e*/
}
} // namespace gamemd

// 0x4E0CE0
namespace gamemd {
VectorClass_flat * FoggedObjectClass_42::QueryInterface(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_FootClass;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4e0cf8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4e0d18*/
    RA2_OPDEL(); /*0x4e0d1b*/
  return this; /*0x4e0d25*/
}
} // namespace gamemd
