// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/classes/AbstractClassVector_e4.hpp"
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
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectVector_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/IStream_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Matrix3x4_e4.hpp_e4.hpp"

// 0x483610
namespace gamemd {
int ObjectClass::processPointerInvalid()
{

  return (*((unsigned int *)this + 80) >> 8) & 1; /*0x48361c*/

}
} // namespace gamemd

// 0x4D7D50
namespace gamemd {
int ObjectClass::SpawnInfantry(int aP1, int16_t *aP2, int16_t *aP3, void **aP4)
{

  char result; // al
  int16_t *v7; // edi
  int referenceCount; // ebp
  void ***PlacementCell; // eax
  int v10; // edi
  void *v11; // eax
  int v12; // ebp
  void *v13; // eax
  int v14; // ebp
  void *v15; // eax
  int v16; // edx
  AnimClass *v17; // eax
  int v18; // eax
  int v19; // eax
  int vtable0; // edi
  void *v21; // eax
  int v22; // eax
  int v23; // ebp
  void *v24; // eax
  int v25; // ebp
  void *v26; // eax
  int v27; // ebp
  void *v28; // eax
  int v29; // ebp
  void *v30; // eax
  InfantryClass *v31; // eax
  int Type; // edi
  InfantryClass *v33; // eax
  char v34; // dl
  int v35; // edx
  int16_t v36; // cx
  void *v37; // [esp+0h] [ebp-28h]
  int v38; // [esp+4h] [ebp-24h]
  char v39; // [esp+8h] [ebp-20h]
  int16_t v40[2]; // [esp+10h] [ebp-18h] BYREF
  int v41; // [esp+14h] [ebp-14h] BYREF
  int v42; // [esp+18h] [ebp-10h] BYREF
  int v43[2]; // [esp+1Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+24h] [ebp-4h]

  if ( this->isBerserk[0] ) /*0x4d7d58*/
    return 0; /*0x4d7d64*/
  if ( this->rockerLinkedUnit && !*(unsigned char *)((*(int (**)(TechnoClass *))(this->vtable1 + 132))(this) + 1682) ) /*0x4d7d81*/
    return 0; /*0x4d7d8d*/
  v7 = (int16_t *)(aP2); /*0x4d7d9a*/
  referenceCount = (*(int (**)(TechnoClass *, int16_t *, unsigned int, void **))(this->vtable1 + 112))( /*0x4d7db1*/
                     this,
                     aP2,
                     0,
                     aP4);
  if ( !(uint8_t)((LayerClass *)((LayerClass *)&dword_87F7E8))->IsWithinUsableArea(v7, 1) && referenceCount != 2 ) /*0x4d7dbf*/
    return 0; /*0x4d7dc1*/
  switch ( referenceCount ) /*0x4d7de0*/
  {
    case 1: /*0x4d7de0*/
    case 62: /*0x4d7de0*/
      if ( g_MoveFeedback ) /*0x4d7ebc*/
      {
        v16 = v7[1] << 8; /*0x4d7ed6*/
        v43[0] = (*v7 << 8) + 128; /*0x4d7ed9*/
        v43[1] = v16 + 128; /*0x4d7ee9*/
        GroundHeight = 0; /*0x4d7eed*/
        GroundHeight = Cell::GetGroundHeight((unsigned int *)(v43)); /*0x4d7efe*/
        if ( (((Coord *)((Coord *)&dword_87F7E8))->To_Cell((unsigned int *)(v43))->flags & 0x100) != 0 ) /*0x4d7f16*/
          GroundHeight += dword_8B3DF4; /*0x4d7f24*/
        referenceCount = ((unsigned int *)(dword_A8B230))[14].referenceCount; /*0x4d7f35*/
        if ( *(unsigned int *)&dword_A8B238 && *(unsigned int *)&dword_A8B238 != 5 ) /*0x4d7f40*/
        {
          ((unsigned int *)(dword_A8B230))[14].referenceCount = -3; /*0x4d7f42*/
          *(unsigned int *)(dword_8871E0->Normal[6] + 832) = -5000; /*0x4d7f57*/
        }
        v17 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4d7f66*/
        if ( v17 ) /*0x4d7f70*/
          aP4 = ((AnimClass *)(v17))->ctor((void *)dword_8871E0->Normal[6], v43, 0, 1, (void *)0x600, 0, 0); /*0x4d7f98*/
        else
          aP4 = 0; /*0x4d7f9e*/
        if ( *(unsigned int *)&dword_A8B238 && *(unsigned int *)&dword_A8B238 != 5 ) /*0x4d7fb6*/
        {
          ((unsigned int *)(dword_A8B230))[14].referenceCount = referenceCount; /*0x4d7fcb*/
          v18 = (*(int (**)(unsigned int *, void ***))(dword_A8E9A8 + 16))(&dword_A8E9A8, &aP4); /*0x4d7fd7*/
          if ( v18 != -1 && v18 < dword_A8E9B8 && v18 < --dword_A8E9B8 ) /*0x4d7ff2*/
          {
            do /*0x4d800a*/
            {
              ++v18; /*0x4d7ffa*/
              *((unsigned int *)dword_A8E9AC + v18 - 1) = *((unsigned int *)dword_A8E9AC + v18); /*0x4d7ffe*/
            }
            while ( v18 < dword_A8E9B8 ); /*0x4d800a*/
          }
          if ( dword_A83E10 < dword_A83E08 /*0x4d8042*/
            || (byte_A83E0D || !dword_A83E08)
            && dword_A83E14 > 0
            && (*(uint8_t (**)(int *, int, unsigned int))(dword_A83E00 + 8))(
                 &dword_A83E00,
                 dword_A83E14 + dword_A83E08,
                 0) )
          {
            v19 = (unsigned int)(dword_A83E10++);
            *((unsigned int *)dword_A83E04 + v19) = (unsigned int)(aP4); /*0x4d8062*/
          }
        }
      }
      goto LABEL_38; /*0x4d8062*/
    case 2: /*0x4d7de0*/
LABEL_38:
      aP4 = (void **)*FindPlacementCell((ObjectClass *)&v42, referenceCount, v7, 0, v38, v39); /*0x4d8065*/
      if ( aP4 == (gamemd::FootClass *)((void **))g_FootClass_Pool ) /*0x4d8081*/
        return 0; /*0x4d8081*/
      vtable0 = this->vtable1; /*0x4d8099*/
      v37 = ((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj(aP3); /*0x4d80a6*/
      v21 = ((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj((int16_t *)&aP4); /*0x4d80ac*/
LABEL_51:
      (*(void ((gamemd::TechnoClass *)(**))(TechnoClass *, int, unsigned int, void *, void *))(vtable0 + 888))(this, 2, 0, v21, v37); /*0x4d822a*/
LABEL_52:
      result = 1; /*0x4d8237*/
      break; /*0x4d8239*/
    case 3: /*0x4d7de0*/
      if ( !(*(uint8_t (**)(TechnoClass *))(this->vtable1 + 160))(this) ) /*0x4d8155*/
        return 0; /*0x4d8155*/
      v27 = this->vtable1; /*0x4d815b*/
      v28 = ((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj(v7); /*0x4d8165*/
      (*(void ((gamemd::TechnoClass *)(**))(TechnoClass *, int, unsigned int, void *, unsigned int))(v27 + 888))(this, 7, 0, v28, 0); /*0x4d8171*/
      return 1; /*0x4d817f*/
    case 5: /*0x4d7de0*/
    case 63: /*0x4d7de0*/
      v22 = ((ObjectClass *)((ObjectClass *)v7))->processDeath(); /*0x4d80b3*/
      if ( !v22 || *(unsigned char *)(v22 + 256) || *(int *)(v22 + 108) <= 0 ) /*0x4d80cb*/
      {
        v23 = this->vtable1; /*0x4d80e9*/
        v24 = ((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj(v7); /*0x4d80f5*/
        (*(void ((gamemd::TechnoClass *)(**))(TechnoClass *, int, void *, unsigned int, unsigned int))(v23 + 888))(this, 1, v24, 0, 0); /*0x4d80ff*/
        return 1; /*0x4d8107*/
      }
      else
      {
        (*(void (**)(TechnoClass *, int, int, unsigned int, unsigned int))(this->vtable1 + 888))(this, 1, v22, 0, 0); /*0x4d80d8*/
        return 1; /*0x4d80e0*/
      }
    case 6: /*0x4d7de0*/
      v14 = this->vtable1; /*0x4d7e8e*/
      v15 = ((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj(v7); /*0x4d7e98*/
      (*(void ((gamemd::TechnoClass *)(**))(TechnoClass *, int, unsigned int, void *, unsigned int))(v14 + 888))(this, 10, 0, v15, 0); /*0x4d7ea4*/
      return 1; /*0x4d7eb2*/
    case 9: /*0x4d7de0*/
      if ( !(*(uint8_t (**)(TechnoClass *))(this->vtable1 + 160))(this) ) /*0x4d811c*/
        return 0; /*0x4d811c*/
      v25 = this->vtable1; /*0x4d8122*/
      v26 = ((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj(v7); /*0x4d812c*/
      (*(void ((gamemd::TechnoClass *)(**))(TechnoClass *, int, unsigned int, void *, unsigned int))(v25 + 888))(this, 8, 0, v26, 0); /*0x4d8138*/
      return 1; /*0x4d8146*/
    case 16: /*0x4d7de0*/
      v29 = this->vtable1; /*0x4d8182*/
      v30 = ((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj(v7); /*0x4d818c*/
      (*(void ((gamemd::TechnoClass *)(**))(TechnoClass *, int, unsigned int, void *, unsigned int))(v29 + 888))(this, 17, 0, v30, 0); /*0x4d8198*/
      return 1; /*0x4d81a6*/
    case 26: /*0x4d7de0*/
      if ( !(*(uint8_t (**)(TechnoClass *))(this->vtable1 + 156))(this) /*0x4d7e59*/
        && !(*(uint8_t (**)(TechnoClass *))(this->vtable1 + 816))(this)
        || !(*(uint8_t (**)(TechnoClass *))(this->vtable1 + 160))(this) )
      {
        return 0; /*0x4d7e61*/
      }
      v12 = (unsigned int)(this->vtable1);
      v13 = ((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj(v7); /*0x4d7e73*/
      (*(void ((gamemd::TechnoClass *)(**))(TechnoClass *, int, void *, unsigned int, unsigned int))(v12 + 888))(this, 11, v13, 0, 0); /*0x4d7e7d*/
      return 1; /*0x4d7e8b*/
    case 35: /*0x4d7de0*/
      v31 = (InfantryClass *)((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj(v7); /*0x4d81af*/
      Type = (gamemd::FootClass *)(InfantryClass::GetType(v31));
      aP2 = (int16_t *)((gamemd::FootClass *)(*(int16_t **)(Type + 40)));
      v33 = (gamemd::InfantryClass *)((gamemd::FootClass *)((InfantryClass *)((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj((int16_t *)&aP2)));
      v34 = (gamemd::FootClass *)(*(unsigned int *)(InfantryClass::GetType(v33) + 44) - 4);
      aP3 = (int16_t *)((gamemd::FootClass *)(*(int16_t **)(Type + 40)));
      v35 = v34 & 7; /*0x4d81e7*/
      v37 = 0; /*0x4d81ea*/
      v36 = (unsigned short)aP3 + LOWORD((&dword_89F688)[v35]); /*0x4d81fb*/
      vtable0 = this->vtable1; /*0x4d81fe*/
      LOWORD(v35) = HIWORD((&dword_89F688)[v35]); /*0x4d8200*/
      LOWORD(aP4) = v36; /*0x4d8204*/
      HIWORD(aP4) = HIWORD(aP3) + v35; /*0x4d8213*/
      *(unsigned int *)v40 = (unsigned int)(aP4); /*0x4d821c*/
      v21 = ((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj(v40); /*0x4d8225*/
      goto LABEL_51; /*0x4d8225*/
    case 51: /*0x4d7de0*/
      if ( !(*(uint8_t (**)(TechnoClass *))(this->vtable1 + 160))(this) ) /*0x4d7df3*/
        return 0; /*0x4d7df3*/
      PlacementCell = (void ***)FindPlacementCell((ObjectClass *)&v41, referenceCount, v7, 0, v38, v39); /*0x4d7dff*/
      v10 = this->vtable1; /*0x4d7e06*/
      aP4 = (void **)((gamemd::FootClass *)(*PlacementCell)); /*0x4d7e0c*/
      v11 = ((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj((int16_t *)&aP4); /*0x4d7e18*/
      (*(void ((gamemd::TechnoClass *)(**))(TechnoClass *, int, unsigned int, void *, unsigned int))(v10 + 888))(this, 25, 0, v11, 0); /*0x4d7e24*/
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

  unsigned int *v5; // esi
  int v6; // eax
  int16_t v7; // dx
  int v10; // ebx
  int v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  int v16; // edi
  int v17; // edi
  int *v18; // [esp+1Ch] [ebp+Ch]

  v5 = a5; /*0x4d9c67*/
  if ( !a5 ) /*0x4d9c72*/
  {
    v6 = ((unsigned char)a2 - 4) & 7; /*0x4d9c77*/
    v7 = HIWORD(a1->occupant) + HIWORD(g_DDrawSurfaceManager.scenario[v6 + 82]); /*0x4d9c8e*/
    LOWORD(a5) = LOWORD(a1->occupant) + LOWORD(g_DDrawSurfaceManager.scenario[v6 + 82]); /*0x4d9c99*/
    HIWORD(a5) = v7; /*0x4d9ca2*/
    v5 = ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj((int16_t *)&a5); /*0x4d9cba*/
  }
  if ( a2 == -1 ) /*0x4d9cbf*/
  {
    if ( *a3 == -1 && (*((unsigned int *)a1 + 80) & 0x100) != 0 ) /*0x4d9e50*/
      *a3 = *((char *)a1 + 283) + 4; /*0x4d9e5c*/
    return 0; /*0x4d9e5c*/
  }
  if ( !v5 || !a1 ) /*0x4d9ccf*/
    return 0; /*0x4d9ccf*/
  if ( *a3 == -1 && (v5[80] & 0x100) != 0 ) /*0x4d9ce8*/
  {
    *a3 = *((char *)v5 + 283) + 4; /*0x4d9cf4*/
    if ( (*((unsigned int *)a1 + 80) & 0x200) == 0 ) /*0x4d9d00*/
      return 7; /*0x4d9d0b*/
  }
  v10 = *((char *)a1 + 283); /*0x4d9d14*/
  v18 = (int *)(v5[80] & 0x100); /*0x4d9d20*/
  if ( v18 ) /*0x4d9d24*/
    v11 = *((char *)v5 + 283); /*0x4d9d26*/
  else
    v11 = *a3; /*0x4d9d2f*/
  v12 = v11 - v10; /*0x4d9d32*/
  v13 = abs32(v12); /*0x4d9d39*/
  if ( !v13 ) /*0x4d9d3e*/
  {
    v17 = *((unsigned int *)a1 + 80); /*0x4d9e08*/
    if ( ((v17 & 0x100) == 0 || (v17 & 0x200) == 0 || !v18) && *a3 != -1 && *a3 != v10 ) /*0x4d9e30*/
      return 7; /*0x4d9e3b*/
    return 0; /*0x4d9e30*/
  }
  v14 = v13 - 1; /*0x4d9d44*/
  if ( !v14 ) /*0x4d9d45*/
  {
    if ( v12 <= 0 ) /*0x4d9dda*/
    {
      if ( !*((unsigned char *)v5 + 284) ) /*0x4d9df2*/
        return 7; /*0x4d9e05*/
    }
    else if ( !*((unsigned char *)a1 + 284) ) /*0x4d9ddc*/
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
  v16 = *((unsigned int *)a1 + 80); /*0x4d9d9a*/
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

  IStream * v3;
  unsigned int v4;
  int result; // eax
  FootClass * v6;
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  FootClass * v12;
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int i; // edi
  int j; // edi
  int v20; // [esp+54h] [ebp-4h] BYREF
  int v21; // [esp+5Ch] [ebp+4h]
  int v22; // [esp+5Ch] [ebp+4h]

  v3 = (gamemd::IStream *)((int)((gamemd::IStream *)(*(unsigned int *)(aP0 + 1652))));
  if ( v3 ) /*0x4db3d3*/
    (*(void (**)(unsigned int))(*(unsigned int *)v3 + 8))(*(unsigned int *)(aP0 + 1652)); /*0x4db3d8*/
  v4 = (unsigned int)(pStm); /*0x4db3db*/
  *(unsigned int *)(aP0 + 1652) = 0; /*0x4db3df*/
  result = ((BuildingClass *)(aP0))->AllocAndCtor((int)v4); /*0x4db3e7*/
  if ( result >= 0 ) /*0x4db3ee*/
  {
    result = (*(int (**)(IStream *, LPSTREAM *, int, unsigned int))(*(unsigned int *)v4->__pad_0 + 12))(v4, &pStm, 4, 0); /*0x4db400*/
    if ( result >= 0 ) /*0x4db405*/
    {
      v6 = (gamemd::FootClass *)((int)(aP0 + 1416));
      if ( aP0 != (gamemd::FootClass *)(-1416) ) /*0x4db413*/
      {
        AbstractClassVector::Construct((unsigned int *)(aP0 + 1416), 0, 0); /*0x4db419*/
        *(unsigned int *)v6 = (unsigned int)(&vt_DynamicVectorClass); /*0x4db41e*/
        *(unsigned int *)(aP0 + 1436) = 10; /*0x4db424*/
        *(unsigned int *)(aP0 + 1432) = 0; /*0x4db42b*/
      }
      v21 = 0; /*0x4db432*/
      if ( (int)pStm <= 0 ) /*0x4db438*/
      {
LABEL_16:
        result = (*(int (**)(IStream *, LPSTREAM *, int, unsigned int))(*(unsigned int *)v4->__pad_0 + 12))( /*0x4db4a2*/
                   v4,
                   &pStm,
                   4,
                   0);
        if ( result >= 0 ) /*0x4db4b3*/
        {
          v12 = (gamemd::FootClass *)((int)(aP0 + 1452));
          if ( aP0 != (gamemd::FootClass *)(-1452) ) /*0x4db4c1*/
          {
            AbstractClassVector::Construct((unsigned int *)(aP0 + 1452), 0, 0); /*0x4db4c7*/
            *(unsigned int *)v12 = (unsigned int)(&vt_DynamicVectorClass); /*0x4db4cc*/
            *(unsigned int *)(aP0 + 1472) = 10; /*0x4db4d2*/
            *(unsigned int *)(aP0 + 1468) = 0; /*0x4db4d9*/
          }
          v22 = 0; /*0x4db4e0*/
          if ( (int)pStm <= 0 ) /*0x4db4e6*/
          {
LABEL_28:
            *(unsigned int *)(aP0 + 1652) = 0; /*0x4db550*/
            ((ObjectClass *)((int *)(aP0 + 1652)))->updateStateFlags(); /*0x4db55a*/
            *(unsigned int *)(aP0 + 1652) = 0; /*0x4db566*/
            OleLoadFromStream(v4, &IID_ILocomotion, (LPVOID *)(aP0 + 1652)); /*0x4db568*/
            *(unsigned int *)(aP0 + 1440) = 0; /*0x4db574*/
            ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1492)); /*0x4db580*/
            ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1496)); /*0x4db591*/
            ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1444)); /*0x4db5a2*/
            ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1448)); /*0x4db5b3*/
            ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1480)); /*0x4db5c4*/
            ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1484)); /*0x4db5d5*/
            ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1500)); /*0x4db5e6*/
            ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1684)); /*0x4db5f7*/
            ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1692)); /*0x4db608*/
            AudioController::Init((unsigned int *)(aP0 + 1348)); /*0x4db613*/
            *(unsigned char *)(aP0 + 1340) = 0; /*0x4db618*/
            *(unsigned int *)(aP0 + 1344) = 0; /*0x4db61e*/
            for ( i = 0; i < *(unsigned int *)(aP0 + 1468); ++i ) /*0x4db62e*/
              ObjectPtr_RegisterForTracking( /*0x4db63f*/
                (int)&SwizzleManagerClass_Instance,
                (int *)(*(unsigned int *)(aP0 + 1456) + 4 * i));
            for ( j = 0; j < *(unsigned int *)(aP0 + 1432); ++j ) /*0x4db659*/
              ObjectPtr_RegisterForTracking( /*0x4db66a*/
                (int)&SwizzleManagerClass_Instance,
                (int *)(*(unsigned int *)(aP0 + 1420) + 4 * j));
            return 0; /*0x4db67a*/
          }
          else
          {
            while ( 1 ) /*0x4db4e8*/
            {
              v13 = *(unsigned int *)v4->__pad_0; /*0x4db4e8*/
              v20 = 0; /*0x4db4f4*/
              result = (*(int ((gamemd::IStream *)(**))(IStream *, int *, int, unsigned int))(v13 + 12))(v4, &v20, 4, 0); /*0x4db4f8*/
              if ( result < 0 ) /*0x4db4fd*/
                break; /*0x4db4fd*/
              v14 = *(unsigned int *)(aP0 + 1460); /*0x4db503*/
              if ( *(unsigned int *)(aP0 + 1468) < v14 /*0x4db525*/
                || (*(unsigned char *)(aP0 + 1465) || !v14)
                && (v15 = *(unsigned int *)(aP0 + 1472), v15 > 0)
                && (*(uint8_t ((int)(**))(int, int, unsigned int))(*(unsigned int *)v12 + 8))(aP0 + 1452, v14 + v15, 0) )
              {
                v16 = *(unsigned int *)(aP0 + 1468); /*0x4db52c*/
                v17 = *(unsigned int *)(aP0 + 1456); /*0x4db52f*/
                *(unsigned int *)(aP0 + 1468) = v16 + 1; /*0x4db535*/
                *(unsigned int *)(v17 + 4 * v16) = v20; /*0x4db53c*/
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
          v7 = *(unsigned int *)v4->__pad_0; /*0x4db43a*/
          v20 = 0; /*0x4db446*/
          result = (*(int ((gamemd::IStream *)(**))(IStream *, int *, int, unsigned int))(v7 + 12))(v4, &v20, 4, 0); /*0x4db44a*/
          if ( result < 0 ) /*0x4db44f*/
            break; /*0x4db44f*/
          v8 = *(unsigned int *)(aP0 + 1424); /*0x4db455*/
          if ( *(unsigned int *)(aP0 + 1432) < v8 /*0x4db477*/
            || (*(unsigned char *)(aP0 + 1429) || !v8)
            && (v9 = *(unsigned int *)(aP0 + 1436), v9 > 0)
            && (*(uint8_t ((int)(**))(int, int, unsigned int))(*(unsigned int *)v6 + 8))(aP0 + 1416, v8 + v9, 0) )
          {
            v10 = *(unsigned int *)(aP0 + 1432); /*0x4db47e*/
            v11 = *(unsigned int *)(aP0 + 1420); /*0x4db481*/
            *(unsigned int *)(aP0 + 1432) = v10 + 1; /*0x4db487*/
            *(unsigned int *)(v11 + 4 * v10) = v20; /*0x4db48e*/
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
  ObjectClass *v4; // edi
  int SizeMax; // ebx
  int v6; // edx
  int result; // eax
  int v8; // ebx
  int v9; // edx
  int v10; // ebx
  int (***v11)(unsigned int, void *, ObjectClass **); // edi
  int v12; // edi
  IPersistStream *v13; // ebx

  v3 = (IStream *)aP1; /*0x4db696*/
  v4 = (gamemd::ObjectClass *)(a0); /*0x4db69b*/
  SizeMax = IPersistStream::GetSizeMax((TechnoClass *)a0, (int)aP1, (int)a2); /*0x4db6a7*/
  if ( SizeMax < 0 ) /*0x4db6ab*/
    return SizeMax; /*0x4db6ab*/
  v6 = *(unsigned int *)v3->__pad_0; /*0x4db6b7*/
  a2 = (struct IPersistStreamVtbl *)v4[8].a2; /*0x4db6c3*/
  result = (*(int (**)(IStream *, struct IPersistStreamVtbl **, int, unsigned int))(v6 + 16))( /*0x4db6c7*/
             v3,
             &a2,
             4,
             0);
  if ( result < 0 ) /*0x4db6cc*/
    return result; /*0x4db6cc*/
  v8 = 0; /*0x4db6d6*/
  if ( (int)a2 <= 0 ) /*0x4db6da*/
  {
LABEL_6:
    v9 = *(unsigned int *)v3->__pad_0; /*0x4db701*/
    a2 = (struct IPersistStreamVtbl *)v4[8].customSound_controller[3]; /*0x4db713*/
    result = (*(int (**)(IStream *, struct IPersistStreamVtbl **, int, unsigned int))(v9 + 16))( /*0x4db717*/
               v3,
               &a2,
               4,
               0);
    if ( result < 0 ) /*0x4db71c*/
      return result; /*0x4db71c*/
    v10 = 0; /*0x4db726*/
    if ( (int)a2 > 0 ) /*0x4db72a*/
    {
      do /*0x4db73d*/
      {
        result = (*(int (**)(IStream *, int, int, unsigned int))(*(unsigned int *)v3->__pad_0 + 16))( /*0x4db73d*/
                   v3,
                   v4[8].customSound_controller[0] + 4 * v10,
                   4,
                   0);
        if ( result < 0 ) /*0x4db742*/
          return result; /*0x4db742*/
      }
      while ( ++v10 < (int)a2 ); /*0x4db73d*/
    }
    v11 = *(int (****)(unsigned int, void *, ObjectClass **))&v4[9].bombVisible; /*0x4db751*/
    aP1 = 0; /*0x4db757*/
    if ( v11 ) /*0x4db761*/
    {
      v12 = (**v11)(v11, &unk_820270, &a0); /*0x4db772*/
      if ( v12 >= 0 ) /*0x4db776*/
      {
        v13 = (IPersistStream *)a0; /*0x4db794*/
        if ( aP1 ) /*0x4db79a*/
          (*(void (**)(LPPERSISTSTREAM))(*(unsigned int *)aP1 + 8))(aP1); /*0x4db79f*/
        aP1 = (gamemd::FootClass *)(v13); /*0x4db7a2*/
      }
      else
      {
        if ( aP1 ) /*0x4db77e*/
          (*(void (**)(LPPERSISTSTREAM))(*(unsigned int *)aP1 + 8))(aP1); /*0x4db783*/
        aP1 = 0; /*0x4db786*/
      }
      if ( v12 < 0 && v12 != -2147467262 ) /*0x4db7b0*/
        WinAPI::Wrapper(v12); /*0x4db7b3*/
    }
    OleSaveToStream(aP1, v3); /*0x4db7be*/
    SizeMax = 0; /*0x4db7c4*/
    if ( aP1 ) /*0x4db7cc*/
      (*(void (**)(LPPERSISTSTREAM))(*(unsigned int *)aP1 + 8))(aP1); /*0x4db7d1*/
    return SizeMax; /*0x4db7d4*/
  }
  while ( 1 ) /*0x4db6ed*/
  {
    result = (*(int (**)(IStream *, int, int, unsigned int))(*(unsigned int *)v3->__pad_0 + 16))( /*0x4db6ed*/
               v3,
               v4[8].fallRate + 4 * v8,
               4,
               0);
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

  unsigned int *v6; // ecx
  unsigned int *v7; // esi
  int16_t *v8; // edi
  char IsWithinUsableArea; // al
  int v10; // edx
  int v11; // eax
  int v12; // edx
  unsigned int *v13; // eax
  CellClass *v14; // eax
  int v15; // edx
  int v16; // ebp
  int v17; // eax
  char v18; // al
  int v19; // ecx
  int v20; // eax
  char IsPassable; // al
  int v22; // eax
  int v23; // edx
  void **v24; // eax
  unsigned int *v25; // eax
  int v26; // eax
  void *v27; // eax
  int v29; // [esp-2Ch] [ebp-78h]
  int TileIndex; // [esp-28h] [ebp-74h]
  char v31; // [esp-20h] [ebp-6Ch]
  char v32; // [esp-20h] [ebp-6Ch]
  char v33; // [esp-Ch] [ebp-58h]
  int16_t v34[2]; // [esp+18h] [ebp-34h] BYREF
  int v35; // [esp+1Ch] [ebp-30h]
  char v36[4]; // [esp+20h] [ebp-2Ch]
  int v37; // [esp+24h] [ebp-28h] BYREF
  unsigned int v38[2]; // [esp+28h] [ebp-24h] BYREF
  int GroundHeight; // [esp+30h] [ebp-1Ch]
  unsigned int v40[2]; // [esp+34h] [ebp-18h] BYREF
  int v41; // [esp+3Ch] [ebp-10h]
  unsigned short v42[6]; // [esp+40h] [ebp-Ch] BYREF

  v7 = v6; /*0x4de1d5*/
  v8 = (int16_t *)a2; /*0x4de1de*/
  v35 = (*(int (**)(unsigned int *, unsigned int *, int, unsigned int))(*v6 + 112))(v6, a2, a4, 0); /*0x4de1f4*/
  IsWithinUsableArea = ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->IsWithinUsableArea(v8, 1); /*0x4de1f8*/
  v10 = *v8; /*0x4de1fd*/
  LOBYTE(a2) = IsWithinUsableArea; /*0x4de200*/
  v11 = (v8[1] << 8) + 128; /*0x4de218*/
  v38[0] = (v10 << 8) + 128; /*0x4de223*/
  v38[1] = v11; /*0x4de227*/
  GroundHeight = 0; /*0x4de22b*/
  GroundHeight = Cell::GetGroundHeight(v38); /*0x4de23e*/
  if ( (((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(v38)->flags[0] & 0x100) != 0 ) /*0x4de250*/
    GroundHeight += (int)((char *)&FootClass_Array); /*0x4de25d*/
  if ( !*(unsigned char *)((*(int (**)(unsigned int *))(*v7 + 132))(v7) + 3213) && (uint8_t)Cell::IsPassable((IUnknown *)(v38)) ) /*0x4de27d*/
    goto LABEL_36; /*0x4de284*/
  v12 = *v7; /*0x4de28c*/
  *(unsigned int *)v34 = *(unsigned int *)v8; /*0x4de293*/
  v13 = (unsigned int *)(*(int (**)(unsigned int *, unsigned short *, unsigned int, int))(v12 + 76))(v7, v42, 0, a2); /*0x4de29b*/
  v14 = ((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(v13); /*0x4de2a4*/
  v15 = *v7; /*0x4de2a9*/
  v38[0] = (unsigned int)(v14); /*0x4de2ad*/
  v16 = *(unsigned int *)((*(int (**)(unsigned int *))(v15 + 132))(v7) + 1460); /*0x4de2b7*/
  if ( v16 == 6 ) /*0x4de2c0*/
  {
    v16 = 0; /*0x4de2c2*/
  }
  else if ( v16 == 9 && HouseClass::IonSensitivesShouldBeOffline() ) /*0x4de2d1*/
  {
    v16 = 7; /*0x4de2da*/
  }
  if ( (*(uint8_t (**)(unsigned int *))(*v7 + 84))(v7) /*0x4de333*/
    || *(unsigned char *)((*(int (**)(unsigned int *))(*v7 + 132))(v7) + 3372)
    || (*(int (**)(unsigned int *))(*v7 + 44))(v7) == 15
    && *(unsigned char *)(v7[432] + 3476)
    && !HouseClass::IonSensitivesShouldBeOffline()
    || (v17 = (*(int (**)(unsigned int *))(*v7 + 44))(v7), LOBYTE(a5) = 0, v17 == 2) )
  {
    LOBYTE(a5) = 1; /*0x4de335*/
  }
  v18 = (*(int (**)(unsigned int *, unsigned int))(*v7 + 188))(v7, 0); /*0x4de33f*/
  v19 = v8[1]; /*0x4de345*/
  v36[0] = v18; /*0x4de349*/
  v20 = *v8; /*0x4de34f*/
  v41 = 0; /*0x4de35b*/
  v40[1] = (v19 << 8) + 128; /*0x4de35f*/
  v40[0] = (v20 << 8) + 128; /*0x4de375*/
  v41 = Cell::GetGroundHeight(v40); /*0x4de388*/
  if ( (((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(v40)->flags[0] & 0x100) != 0 ) /*0x4de39a*/
    v41 += (int)((char *)&FootClass_Array); /*0x4de3a7*/
  IsPassable = Cell::IsPassable((IUnknown *)(v40)); /*0x4de3b5*/
  if ( (unsigned char)a4 && v35 == 2 ) /*0x4de3cb*/
  {
    if ( !*(unsigned char *)((*(int (**)(unsigned int *))(*v7 + 132))(v7) + 3372) /*0x4de3f7*/
      || (v22 = (*(int (**)(unsigned int *))(*v7 + 456))(v7), a2 = (unsigned int *)1, v22 >= 0) )
    {
      a2 = 0; /*0x4de3f9*/
    }
    v33 = (char)a2; /*0x4de40e*/
    a4 = 0; /*0x4de41b*/
    v31 = BYTE1(*((unsigned int *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v8) + 80)) & 1; /*0x4de439*/
    v29 = *(unsigned int *)((*(int (**)(unsigned int *))(*v7 + 132))(v7) + 1660); /*0x4de44d*/
    v24 = (void **)LayerClass::Pathfinding_Find( /*0x4de450*/
                     &stru_87F5F0.__pad_58[416],
                     v23,
                     &v37,
                     v8,
                     v29,
                     -1,
                     v16,
                     v31,
                     1,
                     1,
                     0,
                     1,
                     v33,
                     1,
                     (int16_t *)&a4,
                     0,
                     0);
    goto LABEL_32; /*0x4de450*/
  }
  if ( !(unsigned char)a2 /*0x4de4b4*/
    || IsPassable
    || !(unsigned char)a4
    && (!*(unsigned char *)((*(int (**)(unsigned int *))(*v7 + 132))(v7) + 3284) || v35 == 2)
    && (v25 = ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v8),
        !MapSeed::CheckTileMatch(
           (MapSeed *)&stru_87F5F0.__pad_58[416],
           (int16_t *)(v37 + 36),
           v34,
           v16,
           v36[0],
           BYTE1(v25[80]) & 1,
           0)) )
  {
    a4 = 0; /*0x4de4d7*/
    v32 = BYTE1(*((unsigned int *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v8) + 80)) & 1; /*0x4de4fc*/
    TileIndex = ((MapClass *)((MapClass *)&stru_87F5F0.__pad_58[416]))->GetTileIndex((int16_t *)(v37 + 36), v16, v36[0]); /*0x4de50b*/
    v26 = (*(int (**)(unsigned int *))(*v7 + 132))(v7); /*0x4de510*/
    v24 = (void **)LayerClass::Pathfinding_Find( /*0x4de528*/
                     &stru_87F5F0.__pad_58[416],
                     (int)&a2,
                     &a2,
                     v8,
                     *(unsigned int *)(v26 + 1660),
                     TileIndex,
                     v16,
                     v32,
                     1,
                     1,
                     0,
                     1,
                     0,
                     1,
                     (int16_t *)&a4,
                     0,
                     0);
LABEL_32:
    v27 = *v24; /*0x4de52d*/
    *(unsigned int *)v34 = (unsigned int)(v27); /*0x4de52f*/
    goto LABEL_34; /*0x4de533*/
  }
  v27 = *(void **)v34; /*0x4de535*/
LABEL_34:
  if ( __PAIR32__(v34[1], (uint16_t)v27) != g_FootClass_Pool ) /*0x4de541*/
  {
    aP0->AbstractClass = v27; /*0x4de558*/
    return aP0; /*0x4de55f*/
  }
LABEL_36:
  aP0->AbstractClass = (void *)g_FootClass_Pool; /*0x4de562*/
  return aP0; /*0x4de555*/

}
} // namespace ra2

// 0x4DE620
namespace gamemd {
void ObjectClass::ObjectClass_IsHeightAboveThreshold_0()
{

  return ((ObjectClass *)((IUnknown *)this))->IsHeightAboveThreshold();

}
}
// 0x513F40
namespace gamemd {
AbstractClass * * ObjectClass::BuildTransform(unsigned int * a1, float * a2, unsigned int * a3)
{

  double v3; // st4
  double v4; // st5
  double v5; // st6
  int vtable2; // ecx
  unsigned int *v7; // ecx
  int v8; // ebp
  float *v10; // eax
  long double v11; // st7
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  float v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  float *Transform; // eax
  float *v23; // eax
  float *v24; // esi
  float v25; // [esp+4h] [ebp-154h]
  float v26; // [esp+8h] [ebp-150h]
  float v27; // [esp+8h] [ebp-150h]
  float v28; // [esp+8h] [ebp-150h]
  float v29; // [esp+18h] [ebp-140h]
  int v30; // [esp+18h] [ebp-140h]
  float v31; // [esp+1Ch] [ebp-13Ch]
  int v32; // [esp+1Ch] [ebp-13Ch]
  float v33; // [esp+20h] [ebp-138h] BYREF
  int v34; // [esp+24h] [ebp-134h]
  float v35; // [esp+28h] [ebp-130h]
  unsigned int v36[3]; // [esp+2Ch] [ebp-12Ch] BYREF
  Matrix3x4 v37; // [esp+38h] [ebp-120h] BYREF
  Transform v38[12]; // [esp+68h] [ebp-F0h] BYREF
  Matrix3x4 v39; // [esp+98h] [ebp-C0h] BYREF
  float v40[12]; // [esp+C8h] [ebp-90h] BYREF
  float v41[12]; // [esp+F8h] [ebp-60h] BYREF
  float v42[12]; // [esp+128h] [ebp-30h] BYREF

  vtable2 = a1->vtable2; /*0x513f50*/
  if ( fabs(*(float *)(vtable2 + 808)) >= 0.005 || fabs(*(float *)(vtable2 + 812)) >= 0.005 ) /*0x513f7f*/
  {
    if ( a3 ) /*0x5140a0*/
      *a3 = -1; /*0x5140a2*/
    Matrix3x4::Identity(&v39); /*0x5140af*/
    Matrix3x4::Identity(&v37); /*0x5140b8*/
    v11 = *(double *)((*(int (**)(int))(*(unsigned int *)a1->vtable2 + 132))(a1->vtable2) + 864); /*0x5140cb*/
    v29 = v11; /*0x5140d3*/
    v31 = *(double *)((*(int (**)(int))(*(unsigned int *)a1->vtable2 + 132))(a1->vtable2) + 872); /*0x5140e9*/
    Math::ArcTan2(*(float *)(a1->vtable2 + 812)); /*0x5140f6*/
    v12 = a1->vtable2; /*0x5140fb*/
    v35 = v3; /*0x5140fe*/
    Math::SinCos(*(float *)(v12 + 812)); /*0x51410b*/
    v13 = a1->vtable2; /*0x514110*/
    *(float *)&v34 = v4; /*0x514113*/
    Math::ArcTan2(*(float *)(v13 + 808)); /*0x514120*/
    v14 = a1->vtable2; /*0x514125*/
    v33 = v5; /*0x514128*/
    Math::SinCos(*(float *)(v14 + 808)); /*0x514135*/
    LOWORD(v15) = Math::RoundToInt(fabs(v11) * v29 + fabs(*(float *)&v34) * v31); /*0x51414f*/
    *(float *)&v34 = v15; /*0x51415c*/
    LOWORD(v16) = Math::RoundToInt(v35 * v31); /*0x514160*/
    v35 = *(float *)&v16; /*0x514165*/
    LOWORD(v17) = Math::RoundToInt(v31 - (double)v16); /*0x514171*/
    v18 = v17; /*0x51417e*/
    v32 = v17; /*0x514180*/
    LOWORD(v19) = Math::RoundToInt(v33 * v29); /*0x514184*/
    v33 = *(float *)&v19; /*0x514189*/
    LOWORD(v20) = Math::RoundToInt(v29 - (double)v19); /*0x514195*/
    v21 = a1->vtable2; /*0x51419a*/
    v30 = v20; /*0x51419f*/
    if ( *(float *)(v21 + 812) < 0.0 ) /*0x5141b4*/
      v32 = -v18; /*0x5141b8*/
    if ( *(float *)(v21 + 808) > 0.0 ) /*0x5141cd*/
      v30 = -v20; /*0x5141d1*/
    v26 = (float)v34; /*0x5141e1*/
    Matrix3x3::ApplyCol1(v39.m_Data, v26); /*0x5141e4*/
    v27 = (float)v32; /*0x5141f2*/
    ((Matrix3x4 *)(v37.m_Data))->Translate(v27); /*0x5141f5*/
    v28 = (float)v30; /*0x514203*/
    Matrix3x3::ApplyCol0(v37.m_Data, v28); /*0x514206*/
    ((Matrix3x3 *)(v37.m_Data))->RotateX(*(float *)(a1->vtable2 + 808)); /*0x514219*/
    Matrix3D::RotateZ(v37.m_Data, *(float *)(a1->vtable2 + 812)); /*0x51422c*/
    Transform = Turret::GetTransform((LocomotionClass *)a1, v40, a3); /*0x51423b*/
    Transform::Copy(v38, Transform); /*0x514245*/
    v23 = MultiplyMatrix3x4(v41, (float *)v39.m_Data, (float *)&v38[0].Transform_field_00); /*0x514262*/
    v10 = MultiplyMatrix3x4(v42, v23, (float *)v37.m_Data); /*0x514270*/
    goto LABEL_16; /*0x514270*/
  }
  if ( (*(uint8_t (**)(TechnoClass *))(a1->vtable1 + 96))(a1) ) /*0x513f88*/
  {
    v10 = Turret::GetTransform((LocomotionClass *)a1, (float *)&v38[0].Transform_field_00, a3); /*0x51408d*/
LABEL_16:
    v24 = v10; /*0x514275*/
    qmemcpy(a2, v24, 0x30u); /*0x514285*/
    return a2; /*0x514277*/
  }
  v7 = (unsigned int *)(a1->vtable2 + 156); /*0x513f97*/
  v36[0] = *v7; /*0x513f9f*/
  v36[1] = v7[1]; /*0x513fab*/
  v36[2] = v7[2]; /*0x513fb2*/
  v8 = (uint8_t)((Coord *)((Coord *)&dword_87F7E8))->To_Cell(v36)->slopeIndex[0]; /*0x513fc8*/
  qmemcpy(&v37, CopyAudioData((char *)v38, v8), sizeof(v37)); /*0x513fe4*/
  v25 = (double)(int)((((unsigned int)((*((ProgressTimer *)((ProgressTimer *)(a1->vtable2 + 904)))->GetValue(&v33) >> 10) + 1) >> 1) /*0x514016*/
                     & 0x1F)
                    - 8)
      * -0.1963495408493621;
  ((Matrix2D *)(v37.m_Data))->Rotate(v25); /*0x514019*/
  if ( a3 ) /*0x514027*/
  {
    if ( *a3 != -1 ) /*0x51402e*/
    {
      *a3 = 32 * (v8 + (*a3 << 6)); /*0x51403c*/
      *a3 |= ((unsigned int)((*((ProgressTimer *)((ProgressTimer *)(a1->vtable2 + 904)))->GetValue(&v33) >> 10) + 1) >> 1) /*0x51405c*/
           & 0x1F;
    }
  }
  qmemcpy(a2, &v37, 0x30u); /*0x514070*/
  return a2; /*0x514073*/

}
} // namespace ra2

// 0x5228B0
namespace gamemd {
void ObjectClass::ObjectClass_GetTypeVt40_0()
{

  return TechnoClass::GetTypeVt40((TechnoClass *)this);

}
}
// 0x5228C0
namespace gamemd {
void ObjectClass::ObjectClass_GetTypeVt41_0()
{

  return ObjectClass::GetTypeVt41(int a1) ;

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
  *((unsigned char *)this + 1) = 0x80; /*0x556a2b*/
  *((unsigned char *)this + 2) = 0x80; /*0x556a2e*/
  *((unsigned int *)this + 1) = 0; /*0x556a31*/
  *((unsigned int *)this + 2) = 16; /*0x556a34*/
  *((unsigned int *)this + 3) = 0; /*0x556a3b*/
  v2 = (unsigned char *)this + 28; /*0x556a3e*/
  v3 = 32; /*0x556a41*/
  do /*0x556a6a*/
  {
    v4 = v2 - 12; /*0x556a4c*/
    v2 += 16; /*0x556a4f*/
    --v3; /*0x556a52*/
    *(unsigned int *)v4 = dword_ABCB50; /*0x556a53*/
    *((unsigned int *)v4 + 1) = dword_ABCB54; /*0x556a5b*/
    *((unsigned int *)v4 + 2) = dword_ABCB58; /*0x556a64*/
    *((unsigned int *)v2 - 4) = 0; /*0x556a67*/
  }
  while ( v3 ); /*0x556a6a*/
  if ( dword_ABCB88 < dword_ABCB80 /*0x556a9f*/
    || (byte_ABCB85 || !dword_ABCB80)
    && dword_ABCB8C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_ABCB78 + 8))(
         &dword_ABCB78,
         dword_ABCB8C + dword_ABCB80,
         0) )
  {
    v5 = dword_ABCB88++; /*0x556aac*/
    *((unsigned int *)dword_ABCB7C + v5) = this; /*0x556abb*/
  }
  return this; /*0x556ac0*/

}
} // namespace ra2

// 0x5F3B80
namespace gamemd {
ObjectClass * * ObjectClass::Dtor()
{

  ObjectClass *attachedBomb; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  TacticalClass *lineTrailer; // ecx
  ObjectClass *v10; // [esp+10h] [ebp-4h] BYREF

  attachedBomb = (ObjectClass *)this->attachedBomb; /*0x5f3b84*/
  this->vtable1 = (int)&vt_ObjectClass; /*0x5f3b87*/
  this->vtable1 = (int)&vt_ObjectClass; /*0x5f3b8f*/
  this->vtable2 = (int)&vt_ObjectClass; /*0x5f3b96*/
  this->vtable3 = (int)&vt_ObjectClass; /*0x5f3b9d*/
  if ( attachedBomb ) /*0x5f3ba4*/
    ObjectClass::CleanupAudioAndRefs(attachedBomb); /*0x5f3ba6*/
  v10 = this; /*0x5f3bbb*/
  v3 = (*(int (**)(DynamicVectorClass *, ObjectClass **))(stru_B0F698.vtable0 + 16))(&stru_B0F698, &v10); /*0x5f3bbf*/
  if ( v3 != -1 && v3 < stru_B0F698.Count ) /*0x5f3bcf*/
  {
    --stru_B0F698.Count; /*0x5f3bd4*/
    for ( ; v3 < stru_B0F698.Count; *(unsigned int *)(stru_B0F698.Items + 4 * v3 - 4) = *(unsigned int *)(stru_B0F698.Items + 4 * v3) ) /*0x5f3bda*/
      ++v3; /*0x5f3be2*/
  }
  v10 = this; /*0x5f3c04*/
  v4 = (*(int (**)(unsigned int *, ObjectClass **))(dword_A8E360 + 16))(&dword_A8E360, &v10); /*0x5f3c08*/
  if ( v4 != -1 && v4 < dword_A8E370 && v4 < --dword_A8E370 ) /*0x5f3c23*/
  {
    do /*0x5f3c3b*/
    {
      ++v4; /*0x5f3c2b*/
      *((unsigned int *)dword_A8E364 + v4 - 1) = *((unsigned int *)dword_A8E364 + v4); /*0x5f3c2f*/
    }
    while ( v4 < dword_A8E370 ); /*0x5f3c3b*/
  }
  v10 = this; /*0x5f3c4d*/
  v5 = (*(int (**)(unsigned int *, ObjectClass **))(dword_B0F720 + 16))(&dword_B0F720, &v10); /*0x5f3c51*/
  if ( v5 != -1 && v5 < dword_B0F730 && v5 < --dword_B0F730 ) /*0x5f3c6c*/
  {
    do /*0x5f3c84*/
    {
      ++v5; /*0x5f3c74*/
      *((unsigned int *)dword_B0F724 + v5 - 1) = *((unsigned int *)dword_B0F724 + v5); /*0x5f3c78*/
    }
    while ( v5 < dword_B0F730 ); /*0x5f3c84*/
  }
  v10 = this; /*0x5f3c96*/
  v6 = (*(int (**)(unsigned int *, ObjectClass **))(dword_B0F670 + 16))(&dword_B0F670, &v10); /*0x5f3c9a*/
  if ( v6 != -1 && v6 < dword_B0F680 && v6 < --dword_B0F680 ) /*0x5f3cb5*/
  {
    do /*0x5f3ccd*/
    {
      ++v6; /*0x5f3cbd*/
      *((unsigned int *)dword_B0F674 + v6 - 1) = *((unsigned int *)dword_B0F674 + v6); /*0x5f3cc1*/
    }
    while ( v6 < dword_B0F680 ); /*0x5f3ccd*/
  }
  v10 = this; /*0x5f3cdf*/
  v7 = (*(int (**)(unsigned int *, ObjectClass **))(dword_B0F618 + 16))(&dword_B0F618, &v10); /*0x5f3ce3*/
  if ( v7 != -1 && v7 < dword_B0F628 && v7 < --dword_B0F628 ) /*0x5f3cfe*/
  {
    do /*0x5f3d16*/
    {
      ++v7; /*0x5f3d06*/
      *((unsigned int *)dword_B0F61C + v7 - 1) = *((unsigned int *)dword_B0F61C + v7); /*0x5f3d0a*/
    }
    while ( v7 < dword_B0F628 ); /*0x5f3d16*/
  }
  this->nextObject = 0; /*0x5f3d1d*/
  this->isAliveFlag[0] = 0; /*0x5f3d26*/
  ((AudioController *)((AudioController *)this->ambientSoundController))->Stop(); /*0x5f3d2d*/
  ((AudioController *)((AudioController *)this->customSound_controller))->Stop(); /*0x5f3d37*/
  AudioFileClass::Release((AudioFileClass *)this->ambientSoundController); /*0x5f3d3e*/
  AudioFileClass::Release((AudioFileClass *)this->customSound_controller); /*0x5f3d45*/
  lineTrailer = (TacticalClass *)this->lineTrailer; /*0x5f3d4a*/
  if ( lineTrailer ) /*0x5f3d54*/
  {
    TacticalClass::GetField(lineTrailer); /*0x5f3d56*/
    this->lineTrailer = 0; /*0x5f3d5b*/
  }
  if ( this->isInLogic[0] ) /*0x5f3d65*/
    ((VectorClass *)((DynamicVectorClass *)&dword_87F778))->RemoveItem((int)this); /*0x5f3d75*/
  return AbstractClass::DTOR(int a1) ; /*0x5f3d81*/

}
} // namespace ra2

// 0x5F4160
namespace gamemd {
int ObjectClass::DropAsBomb_Track()
{

  int v2; // eax
  int result; // eax
  int v4; // eax
  unsigned int v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = this->field_0; /*0x5f4168*/
  this->__pad_8C[1] = 1; /*0x5f416a*/
  this->__pad_8C[3] = 1; /*0x5f4171*/
  (*(void (**)(unsigned int))(v2 + 292))(0); /*0x5f4178*/
  RemoveTarget((int)this); /*0x5f4184*/
  this->__pad_8C[0] = 0; /*0x5f418f*/
  Targeting::Readd(this); /*0x5f4196*/
  result = (*(int (**)(IUnknown *, int))(this->field_0 + 292))(this, 1); /*0x5f41a1*/
  if ( this ) /*0x5f41a9*/
  {
    LOBYTE(result) = (this->__pad_14[0] & 4) != 0; /*0x5f41b5*/
    if ( (this->__pad_14[0] & 4) != 0 ) /*0x5f41bb*/
    {
      if ( !*(unsigned int *)&this->__pad_524[336] ) /*0x5f41bd*/
        WinAPI::Wrapper(-2147467261); /*0x5f41cc*/
      if ( (*(uint8_t (**)(unsigned int))(**(unsigned int **)&this->__pad_524[336] + 16))(*(unsigned int *)&this->__pad_524[336]) ) /*0x5f41da*/
      {
        if ( !*(unsigned int *)&this->__pad_524[336] ) /*0x5f4213*/
          WinAPI::Wrapper(-2147467261); /*0x5f4222*/
        return (*(int (**)(unsigned int, unsigned int))(**(unsigned int **)&this->__pad_524[336] + 156))( /*0x5f4232*/
                 *(unsigned int *)&this->__pad_524[336],
                 0);
      }
      else
      {
        v5[0] = this->field_9C; /*0x5f41ed*/
        v4 = this->field_0; /*0x5f41f1*/
        v5[1] = *(unsigned int *)this->__pad_A0; /*0x5f41f6*/
        v5[2] = this->field_A4; /*0x5f4204*/
        return (*(int (**)(IUnknown *, unsigned int *))(v4 + 244))(this, v5); /*0x5f4208*/
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

  unsigned int *v2; // eax
  int v3; // eax
  int16_t *v4; // esi
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
  int v29; // [esp+Ch] [ebp-40h]
  int v30; // [esp+10h] [ebp-3Ch]
  int v31[2]; // [esp+14h] [ebp-38h] BYREF
  int v32; // [esp+1Ch] [ebp-30h] BYREF
  int v33; // [esp+20h] [ebp-2Ch]
  int v34; // [esp+24h] [ebp-28h]
  int v35; // [esp+28h] [ebp-24h]
  int v36; // [esp+30h] [ebp-1Ch]
  int v37; // [esp+38h] [ebp-14h]
  unsigned int v38[4]; // [esp+3Ch] [ebp-10h] BYREF
  unsigned int *v39; // [esp+50h] [ebp+4h]

  v2 = (unsigned int *)(*(int (**)(int *))(this->field_0 + 172))(&v32); /*0x5f4887*/
  ((Coord *)((Coord *)g_TacticalClass_Instance))->To_Screen(v2, v31); /*0x5f4894*/
  v3 = (*(int (**)(IUnknown *))(this->field_0 + 136))(this); /*0x5f489d*/
  v4 = (int16_t *)(*(int (**)(int))(*(unsigned int *)v3 + 156))(v3); /*0x5f48ad*/
  if ( !v4 ) /*0x5f48b1*/
  {
    *v39 = dword_AC1350; /*0x5f48c1*/
    v39[1] = dword_AC1354; /*0x5f48c9*/
    v39[2] = dword_AC1358; /*0x5f48d2*/
    v39[3] = dword_AC135C; /*0x5f48db*/
    return (int)v39; /*0x5f48e1*/
  }
  v6 = 0; /*0x5f48ea*/
  if ( (*(int (**)(IUnknown *))(this->field_0 + 44))(this) == 6 && *(unsigned char *)(this->field_520 + 5824) ) /*0x5f48fa*/
    v6 = 15; /*0x5f4904*/
  FoundationSize = Building::GetFoundationSize(&v32, v6); /*0x5f4911*/
  v8 = *FoundationSize; /*0x5f4916*/
  v36 = FoundationSize[1]; /*0x5f491b*/
  v9 = FoundationSize[2]; /*0x5f4921*/
  v10 = FoundationSize[3]; /*0x5f4924*/
  v11 = v4[3]; /*0x5f4927*/
  v37 = v10; /*0x5f492b*/
  v12 = Building::GetFoundationSize(v38, v6 + v11 / 2); /*0x5f493c*/
  v13 = *v12; /*0x5f4945*/
  v33 = v12[1]; /*0x5f494a*/
  v34 = v12[2]; /*0x5f4951*/
  v14 = v4[1]; /*0x5f4955*/
  v15 = v4[2]; /*0x5f4959*/
  v16 = v12[3]; /*0x5f495d*/
  v29 = v14; /*0x5f4960*/
  v35 = v16; /*0x5f4964*/
  v30 = v15; /*0x5f4968*/
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
    v18 = v36; /*0x5f4982*/
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
  if ( (*(int (**)(IUnknown *))(this->field_0 + 44))(this) != 6 || !*(unsigned int *)(this->field_520 + 5400) ) /*0x5f4a17*/
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
} // namespace ra2

// 0x5F4D30
namespace gamemd {
AbstractClass * * ObjectClass::Undeploy()
{

  unsigned int *v2; // eax
  int v3; // ecx
  int v4; // edi
  int result; // eax
  int v6; // [esp+10h] [ebp-20h] BYREF
  int v7; // [esp+14h] [ebp-1Ch]
  unsigned int v8[3]; // [esp+18h] [ebp-18h] BYREF
  unsigned char v9[12]; // [esp+24h] [ebp-Ch] BYREF

  if ( !byte_A8E9A0 || this->inLimbo[0] ) /*0x5f4d45*/
  {
    LOBYTE(result) = 0; /*0x5f4eb7*/
  }
  else
  {
    (*(void (**)(ObjectClass *))(this->vtable1 + 336))(this); /*0x5f4d55*/
    (*(void (**)(ObjectClass *, int))(this->vtable1 + 220))(this, 1); /*0x5f4d61*/
    (*(void (**)(ObjectClass *, unsigned int))(this->vtable1 + 292))(this, 0); /*0x5f4d6d*/
    RemoveTarget((int)this); /*0x5f4d79*/
    ((AudioController *)((AudioController *)this->ambientSoundController))->Stop(); /*0x5f4d81*/
    AudioFile::Stop((AudioFile *)this->customSound_controller); /*0x5f4d89*/
    if ( (*(int (**)(ObjectClass *))(this->vtable1 + 136))(this) /*0x5f4dcb*/
      && *(unsigned char *)((*(int (**)(ObjectClass *))(this->vtable1 + 136))(this) + 564)
      && (!*(unsigned int *)&dword_A8B238
       || *(unsigned int *)&dword_A8B238 == 5
       || (*(int (**)(int *))(this->vtable1 + 16))(&this->vtable1) != -2) )
    {
      ((VectorClass *)((DynamicVectorClass *)&dword_87F778))->RemoveItem((int)this); /*0x5f4dd3*/
    }
    if ( (*(int (**)(ObjectClass *))(this->vtable1 + 136))(this) ) /*0x5f4ddc*/
    {
      if ( *(unsigned int *)((*(int (**)(ObjectClass *))(this->vtable1 + 136))(this) + 172) ) /*0x5f4df4*/
      {
        v2 = (unsigned int *)(*(int (**)(ObjectClass *, unsigned char *))(this->vtable1 + 72))(this, v9); /*0x5f4e0b*/
        v8[0] = *v2; /*0x5f4e10*/
        v8[1] = v2[1]; /*0x5f4e22*/
        v8[2] = v2[2]; /*0x5f4e2e*/
        ((Coord *)((Coord *)g_TacticalClass_Instance))->To_Screen(v8, &v6); /*0x5f4e32*/
        v3 = *(unsigned int *)((*(int (**)(ObjectClass *))(this->vtable1 + 136))(this) + 172); /*0x5f4e41*/
        v4 = v7 - *(int16_t *)(v3 + 4) / 2; /*0x5f4e6c*/
        v6 -= *(int16_t *)(v3 + 2) / 2; /*0x5f4e70*/
        v7 = v4; /*0x5f4e74*/
        Cell::CreateCrater(v6, v4, *(int16_t *)(v3 + 2), *(int16_t *)(v3 + 4), 1); /*0x5f4e8f*/
      }
    }
    result = (*(int (**)(ObjectClass *))(this->vtable1 + 284))(this); /*0x5f4e98*/
    this->inLimbo[0] = 1; /*0x5f4e9e*/
    this->needsRedraw[0] = 0; /*0x5f4ea5*/
    LOBYTE(result) = 1; /*0x5f4eac*/
  }
  return result; /*0x5f4eae*/

}
} // namespace ra2

// 0x5F4EC0
namespace gamemd {
AbstractClass * * ObjectClass::Deploy()
{

  int result; // eax
  void *vtable0; // ebx
  CellClass *v4; // eax
  int (**v5)(ObjectClass *); // eax
  int v6; // ebx
  int *v7; // eax
  unsigned int *v8; // eax
  int v9; // edx
  int (**v10)(ObjectClass *); // eax
  int v11; // edi
  int v12; // ebp
  int v13; // eax
  char *v14; // eax
  int v15; // eax
  unsigned char *lineTrailer; // edx
  char v17; // cl
  char v18; // cl
  int v19; // eax
  int v20; // [esp+2Ch] [ebp-2Ch] BYREF
  int v21; // [esp+30h] [ebp-28h]
  int v22; // [esp+34h] [ebp-24h] BYREF
  int v23; // [esp+38h] [ebp-20h]
  int v24; // [esp+3Ch] [ebp-1Ch]
  unsigned int v25[3]; // [esp+40h] [ebp-18h] BYREF
  char v26[12]; // [esp+4Ch] [ebp-Ch] BYREF
  int *v27; // [esp+5Ch] [ebp+4h]
  int16_t v28; // [esp+5Ch] [ebp+4h]

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
  if ( !byte_A8E9A0 ) /*0x5f4efc*/
    goto LABEL_41; /*0x5f4efc*/
  if ( !this->inLimbo ) /*0x5f4f02*/
    goto LABEL_41; /*0x5f4f02*/
  if ( this->isOnMap ) /*0x5f4f10*/
    goto LABEL_41; /*0x5f4f10*/
  if ( !dword_A8E7AC ) /*0x5f4f22*/
  {
    vtable0 = this->AbstractClass; /*0x5f4f24*/
    v4 = ((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(v27); /*0x5f4f34*/
    result = (*((int (**)(ObjectClass *, CellClass *, int, int, unsigned int, unsigned int))vtable0 + 107))( /*0x5f4f3c*/
               this,
               v4,
               -1,
               -1,
               0,
               0);
    if ( result ) /*0x5f4f44*/
      goto LABEL_41; /*0x5f4f44*/
  }
  v5 = (int (**)(ObjectClass *))this->AbstractClass; /*0x5f4f4a*/
  this->inLimbo = 0; /*0x5f4f4e*/
  this->needsRedraw = 0; /*0x5f4f55*/
  v6 = v5[34](this); /*0x5f4f64*/
  v22 = *v27; /*0x5f4f6a*/
  v23 = v27[1]; /*0x5f4f71*/
  v24 = v27[2]; /*0x5f4f78*/
  if ( v6 ) /*0x5f4f7c*/
  {
    v7 = (int *)(*(int (**)(int, unsigned int *, int *))(*(unsigned int *)v6 + 108))(v6, v25, v27); /*0x5f4f88*/
    v22 = *v7; /*0x5f4f8d*/
    v23 = v7[1]; /*0x5f4f94*/
    v24 = v7[2]; /*0x5f4f9b*/
  }
  (*((void (**)(ObjectClass *, int *))this->vtable1 + 109))(this, &v22); /*0x5f4fa8*/
  result = (*((int (**)(ObjectClass *, int))this->vtable1 + 73))(this, 1); /*0x5f4fb4*/
  if ( !(unsigned char)result ) /*0x5f4fbc*/
  {
    this->inLimbo = 1; /*0x5f521c*/
LABEL_41:
    LOBYTE(result) = 0; /*0x5f5223*/
    return result; /*0x5f5226*/
  }
  if ( this->isAliveFlag )
  {
    if ( (*((int (**)(ObjectClass *))this->vtable1 + 30))(this) != -1 ) /*0x5f4fda*/
      Targeting::Readd(this); /*0x5f4fe2*/
    if ( v6 ) /*0x5f4fe9*/
    {
      if ( *(unsigned char *)(v6 + 564) /*0x5f5036*/
        && ((*((int (**)(ObjectClass *))this->vtable1 + 11))(this) != 36
         || (*((int (**)(ObjectClass *))this->vtable1 + 11))(this) == 36 && *(unsigned char *)(v6 + 689))
        && (!*(unsigned int *)&dword_A8B238
         || *(unsigned int *)&dword_A8B238 == 5
         || (*((int (**)(void **))((unsigned int *)this)[0] + 4))(&((unsigned int *)this)[0]) != -2) )
      {
        ObjectClass::SetDeployState((LogicClass *)this, 0); /*0x5f5040*/
      }
      if ( *(unsigned int *)(v6 + 172) ) /*0x5f5045*/
      {
        v8 = (unsigned int *)(*((int (**)(ObjectClass *, char *))this->vtable1 + 18))(this, v26); /*0x5f505c*/
        v25[0] = *v8; /*0x5f5061*/
        v25[1] = v8[1]; /*0x5f5073*/
        v25[2] = v8[2]; /*0x5f507f*/
        ((Coord *)((Coord *)g_TacticalClass_Instance))->To_Screen(v25, &v20); /*0x5f5083*/
        v9 = *(unsigned int *)&g_TacticalClass_Instance[45] + v21; /*0x5f50a1*/
        v10 = (int (**)(ObjectClass *))this->AbstractClass; /*0x5f50a3*/
        v20 += *(unsigned int *)&g_TacticalClass_Instance[44]; /*0x5f50a9*/
        v21 = v9; /*0x5f50ad*/
        v11 = *(unsigned int *)(v10[34](this) + 172); /*0x5f50b7*/
        v12 = v21 - *(int16_t *)(v11 + 4) / 2; /*0x5f50dd*/
        v20 -= *(int16_t *)(v11 + 2) / 2; /*0x5f50df*/
        v21 = v12; /*0x5f50e3*/
        v13 = __2_YAPAXI_Z(0x40u); /*0x5f50e7*/
        if ( v13 ) /*0x5f50f1*/
          AlphaShapeClass::CTOR(v13, (int)this, v20, v21); /*0x5f5100*/
        if ( !dword_A8E7AC ) /*0x5f510c*/
          Cell::CreateCrater( /*0x5f5146*/
            v20 - *(unsigned int *)&g_TacticalClass_Instance[44],
            v21 - *(unsigned int *)&g_TacticalClass_Instance[45],
            *(int16_t *)(v11 + 2),
            *(int16_t *)(v11 + 4),
            1);
      }
    }
    result = (*((int (**)(ObjectClass *))this->vtable1 + 34))(this); /*0x5f514f*/
    if ( *(unsigned char *)(result + 570) )
    {
      v14 = (char *)__2_YAPAXI_Z(0x210u); /*0x5f5168*/
      result = v14 ? (int)ObjectClass::checkLimbo(v14) : 0;
      this->lineTrailer = (void *)result; /*0x5f5181*/
      if ( result ) /*0x5f5187*/
      {
        v28 = *(unsigned short *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6243); /*0x5f519e*/
        if ( (unsigned char)v28 /*0x5f51b4*/
          || __PAIR16__(HIBYTE(v28), 0) != *(uint8_t *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6245) )
        {
          v18 = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6245); /*0x5f51e2*/
          *(unsigned short *)result = *(unsigned short *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6243); /*0x5f51e5*/
          *(unsigned char *)(result + 2) = v18; /*0x5f51e8*/
        }
        else
        {
          v15 = (*((int (**)(ObjectClass *))this->vtable1 + 34))(this); /*0x5f51be*/
          lineTrailer = this->lineTrailer; /*0x5f51c4*/
          v17 = *(unsigned char *)(v15 + 573); /*0x5f51d4*/
          *(unsigned short *)lineTrailer = *(unsigned short *)(v15 + 571); /*0x5f51d7*/
          lineTrailer[2] = v17; /*0x5f51da*/
        }
        v19 = (*((int (**)(ObjectClass *))this->vtable1 + 34))(this); /*0x5f51ef*/
        result = ObjectClass::updateMissionState((ObjectClass *)this->lineTrailer, *(unsigned int *)(v19 + 576)); /*0x5f5202*/
        *((unsigned int *)this->lineTrailer + 1) = this; /*0x5f520d*/
      }
    }
  }
  LOBYTE(result) = 1; /*0x5f5210*/
  return result; /*0x5f5212*/

}
} // namespace ra2

// 0x5F5280
namespace gamemd {
AbstractClass * * ObjectClass::Destroy2()
{

  TacticalClass *lineTrailer; // ecx
  House *v3; // edi
  bool v4; // bl
  int v5; // edx
  int result; // eax
  char v7; // [esp+Ch] [ebp+4h]

  lineTrailer = (TacticalClass *)this->lineTrailer; /*0x5f5284*/
  if ( lineTrailer ) /*0x5f528c*/
  {
    TacticalClass::GetField(lineTrailer); /*0x5f528e*/
    this->lineTrailer = 0; /*0x5f5293*/
  }
  v3 = (House *)(*((int (**)(ObjectClass *))this->vtable1 + 15))(this); /*0x5f52a6*/
  v4 = 0; /*0x5f52ac*/
  if ( v7 ) /*0x5f52b0*/
    goto LABEL_10; /*0x5f52b0*/
  if ( this && (((unsigned int *)this)[0] & 1) != 0 ) /*0x5f52c0*/
    v4 = (*((uint8_t (**)(ObjectClass *))this->vtable1 + 202))(this) != 0; /*0x5f52d0*/
  if ( !v3 || !(uint8_t)House::IsHumanPlayer(v3) && !v4 ) /*0x5f52e3*/
LABEL_10:
    (*((void (**)(ObjectClass *))this->vtable1 + 84))(this); /*0x5f52e9*/
  if ( (ObjectClass *)MapClass::GetScrollMode((MapClass *)&stru_87F5F0.__pad_58[416]) == this ) /*0x5f52fd*/
    ((MapClass *)((int)&stru_87F5F0.__pad_58[416]))->SetScrollMode(0); /*0x5f5306*/
  LOBYTE(v5) = v7; /*0x5f530b*/
  AbstractClass::AnnounceExpiredPointer(this, v5); /*0x5f5311*/
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
  int vtable0; // edx
  int v6; // [esp+Ch] [ebp+4h] BYREF

  if ( !this->inLimbo[0] ) /*0x5f5854*/
  {
    v3 = v6; /*0x5f5862*/
    if ( v6 == 2 ) /*0x5f5869*/
    {
      if ( !this->needsRedraw[0] && this->isOnMap[0] ) /*0x5f5879*/
      {
        result = (*(int (**)(TechnoClass *))(this->vtable1 + 308))(this); /*0x5f5886*/
        LOBYTE(result) = 1; /*0x5f588d*/
        return result; /*0x5f5890*/
      }
    }
    else
    {
      if ( (*(int (**)(TechnoClass *))(this->vtable1 + 44))(this) != 6 /*0x5f58b2*/
        || (result = *((unsigned int *)this + 328), !*(unsigned int *)(result + 3672))
        || v3 )
      {
        result = (int)AbstractClass::IsTechnoType(this); /*0x5f58b6*/
        v4 = result; /*0x5f58bb*/
        if ( result ) /*0x5f58bf*/
        {
          (*(void (**)(int))(*(unsigned int *)result + 704))(result); /*0x5f58c5*/
          (*(void (**)(int))(*(unsigned int *)v4 + 56))(v4); /*0x5f58cf*/
          result = (*(int (**)(TechnoClass *, int *))(this->vtable1 + 440))(this, &v6); /*0x5f58db*/
        }
      }
      if ( (v3 == 1 || v3 == 3) && !this->isOnMap[0] ) /*0x5f58ec*/
      {
        vtable0 = this->vtable1; /*0x5f58f3*/
        this->isOnMap[0] = 1; /*0x5f58f7*/
        result = (*(int (**)(TechnoClass *))(vtable0 + 308))(this); /*0x5f58fb*/
        LOBYTE(result) = 1; /*0x5f5902*/
        return result; /*0x5f5905*/
      }
      if ( !v3 && this->isOnMap[0] ) /*0x5f590c*/
      {
        this->isOnMap[0] = 0; /*0x5f5913*/
        LOBYTE(result) = 1; /*0x5f5917*/
        return result; /*0x5f591a*/
      }
    }
  }
  LOBYTE(result) = 0; /*0x5f591e*/
  return result; /*0x5f588c*/

}
} // namespace ra2

// 0x5F6BD0
namespace gamemd {
int ObjectClass::GetBoundingSize()
{

  int v2; // edi
  unsigned char v4[12]; // [esp+8h] [ebp-18h] BYREF
  unsigned char v5[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = (*((int (**)(ObjectClass *, unsigned char *))this->vtable1 + 43))(this, v4); /*0x5f6be8*/
  return *(unsigned int *)(*((int (**)(ObjectClass *, unsigned char *))this->vtable1 + 43))(this, v5) /*0x5f6bfe*/
       + *(unsigned int *)(v2 + 4);

}
} // namespace ra2

// 0x652E50
namespace gamemd {
int ObjectClass::resetObjectState(SidebarClass * aP1)
{

  void (**vtable0)(GadgetClass *); // eax

  vtable0 = (void (**)(GadgetClass *))this->AbstractClass; /*0x652e5e*/
  if ( aP1 ) /*0x652e60*/
  {
    vtable0[12](&stru_B04978); /*0x652e62*/
    return (*((int (**)(ObjectClass *, GadgetClass *))this->vtable1 + 12))(this, &stru_B04910); /*0x652e6e*/
  }
  else
  {
    vtable0[13](&stru_B04978); /*0x652e75*/
    return (*((int (**)(ObjectClass *, GadgetClass *))this->vtable1 + 13))(this, &stru_B04910); /*0x652e81*/
  }

}
} // namespace ra2

// 0x6A5BF0
namespace gamemd {
ConvertClass * * ObjectClass::CleanupSidebarResources()
{

  ScenarioClass *v1; // esi
  PowerClass *v2; // [esp+0h] [ebp-8h]

  PowerClass::checkLowPower(v2); /*0x6a5bf2*/
  if ( byte_B0B488 ) /*0x6a5c00*/
  {
    __3_YAXPAX_Z(dword_B0B468); /*0x6a5c08*/
    byte_B0B488 = 0; /*0x6a5c10*/
  }
  if ( byte_B0B489 ) /*0x6a5c1c*/
  {
    __3_YAXPAX_Z(dword_B0B46C); /*0x6a5c25*/
    byte_B0B489 = 0; /*0x6a5c2d*/
  }
  if ( byte_B0B48A ) /*0x6a5c39*/
  {
    __3_YAXPAX_Z(dword_B0B470); /*0x6a5c42*/
    byte_B0B48A = 0; /*0x6a5c4a*/
  }
  if ( byte_B0B48B ) /*0x6a5c56*/
  {
    __3_YAXPAX_Z(dword_B0B474); /*0x6a5c5e*/
    byte_B0B48B = 0; /*0x6a5c66*/
  }
  if ( byte_B0B48C ) /*0x6a5c72*/
  {
    __3_YAXPAX_Z(dword_B0B478); /*0x6a5c7b*/
    byte_B0B48C = 0; /*0x6a5c83*/
  }
  if ( byte_B0B48D ) /*0x6a5c8f*/
  {
    __3_YAXPAX_Z(dword_B0B47C); /*0x6a5c98*/
    byte_B0B48D = 0; /*0x6a5ca0*/
  }
  if ( byte_B0B48E ) /*0x6a5cac*/
  {
    __3_YAXPAX_Z(dword_B0B480); /*0x6a5cb4*/
    byte_B0B48E = 0; /*0x6a5cbc*/
  }
  if ( byte_B0B48F ) /*0x6a5cc8*/
  {
    __3_YAXPAX_Z(dword_B0B484); /*0x6a5cd1*/
    byte_B0B48F = 0; /*0x6a5cd9*/
  }
  if ( byte_B0B4CC ) /*0x6a5ce5*/
  {
    __3_YAXPAX_Z(dword_B0B490); /*0x6a5cee*/
    byte_B0B4CC = 0; /*0x6a5cf6*/
  }
  if ( byte_B0B4CD ) /*0x6a5d02*/
  {
    __3_YAXPAX_Z(dword_B0B494); /*0x6a5d0a*/
    byte_B0B4CD = 0; /*0x6a5d12*/
  }
  if ( byte_B0B4CE ) /*0x6a5d1e*/
  {
    __3_YAXPAX_Z(dword_B0B498); /*0x6a5d27*/
    byte_B0B4CE = 0; /*0x6a5d2f*/
  }
  if ( byte_B0B4CF ) /*0x6a5d3b*/
  {
    __3_YAXPAX_Z(dword_B0B49C); /*0x6a5d44*/
    byte_B0B4CF = 0; /*0x6a5d4c*/
  }
  if ( byte_B0B4D1 ) /*0x6a5d58*/
  {
    __3_YAXPAX_Z(dword_B0B4A4); /*0x6a5d60*/
    byte_B0B4D1 = 0; /*0x6a5d68*/
  }
  if ( byte_B0B4D2 ) /*0x6a5d74*/
  {
    __3_YAXPAX_Z(dword_B0B4A8); /*0x6a5d7d*/
    byte_B0B4D2 = 0; /*0x6a5d85*/
  }
  if ( byte_B0B4D3 ) /*0x6a5d91*/
  {
    __3_YAXPAX_Z(dword_B0B4AC); /*0x6a5d9a*/
    byte_B0B4D3 = 0; /*0x6a5da2*/
  }
  if ( byte_B0B4D4 ) /*0x6a5dae*/
  {
    __3_YAXPAX_Z(dword_B0B4B0); /*0x6a5db6*/
    byte_B0B4D4 = 0; /*0x6a5dbe*/
  }
  if ( byte_B0B4D5 ) /*0x6a5dca*/
  {
    __3_YAXPAX_Z(dword_B0B4B4); /*0x6a5dd3*/
    byte_B0B4D5 = 0; /*0x6a5ddb*/
  }
  if ( byte_B0B4D6 ) /*0x6a5de7*/
  {
    __3_YAXPAX_Z(dword_B0B4B8); /*0x6a5df0*/
    byte_B0B4D6 = 0; /*0x6a5df8*/
  }
  if ( byte_B0B4D7 ) /*0x6a5e04*/
  {
    __3_YAXPAX_Z(dword_B0B4BC); /*0x6a5e0c*/
    byte_B0B4D7 = 0; /*0x6a5e14*/
  }
  if ( byte_B0B4D8 ) /*0x6a5e20*/
  {
    __3_YAXPAX_Z(dword_B0B4C0); /*0x6a5e29*/
    byte_B0B4D8 = 0; /*0x6a5e31*/
  }
  if ( byte_B0B4D9 ) /*0x6a5e3d*/
  {
    __3_YAXPAX_Z(dword_B0B4C4); /*0x6a5e46*/
    byte_B0B4D9 = 0; /*0x6a5e4e*/
  }
  if ( byte_B0B4D0 ) /*0x6a5e5a*/
  {
    __3_YAXPAX_Z(dword_B0B4A0); /*0x6a5e62*/
    byte_B0B4D0 = 0; /*0x6a5e6a*/
  }
  if ( byte_B0B4DA ) /*0x6a5e76*/
  {
    __3_YAXPAX_Z(dword_B0B4C8); /*0x6a5e7f*/
    byte_B0B4DA = 0; /*0x6a5e87*/
  }
  ScenarioClass::FreeConfig((ScenarioClass *)&stru_B07DF8); /*0x6a5e92*/
  ScenarioClass::FreeConfig((ScenarioClass *)&stru_B0B3A0); /*0x6a5e9c*/
  v1 = (ScenarioClass *)&stru_B07C48; /*0x6a5ea1*/
  do /*0x6a5eb6*/
  {
    ScenarioClass::FreeConfig(v1); /*0x6a5ea8*/
    v1 = (ScenarioClass *)((char *)v1 + 96); /*0x6a5ead*/
  }
  while ( (int)v1 < (int)&dword_B07DC8 ); /*0x6a5eb6*/
  ScenarioClass::FreeConfig((ScenarioClass *)&stru_B0B328); /*0x6a5ebd*/
  ScenarioClass::FreeConfig((ScenarioClass *)&g_SidebarFlag); /*0x6a5ec7*/

}
} // namespace ra2

// 0x6A7D70
namespace gamemd {
unsigned char ObjectClass::ToggleSidebarDisplay(unsigned int * a0, TabClass * aP1, int a3, int _20, SidebarClass * a4, char a6)
{

  int v6; // ecx
  int v7; // esi
  char result; // al
  char v9; // cl
  char v10; // bl
  ShapeButtonClass *v11; // edi
  GadgetClass *v12; // edi
  int *v13; // ebx
  int v14; // ebp
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  ShapeButtonClass *v18; // edi
  int v19; // edi
  int v20; // ebp
  int v21; // [esp+0h] [ebp-10h]

  v7 = v6; /*0x6a7d71*/
  result = *(unsigned char *)(v6 + 21413); /*0x6a7d79*/
  if ( (dword_A8D5F8 & 2) != 0 && *(unsigned int *)&dword_A8B238 && *(unsigned int *)&dword_A8B238 != 5 ) /*0x6a7d91*/
    return result; /*0x6a7d91*/
  if ( a0 == (SidebarClass *)-1 ) /*0x6a7d9e*/
    *(unsigned char *)(v6 + 21413) = result == 0; /*0x6a7db3*/
  else
    *(unsigned char *)(v6 + 21413) = a0 == (SidebarClass *)1; /*0x6a7da6*/
  v9 = *(unsigned char *)(v6 + 21413); /*0x6a7db9*/
  v10 = v9 != result; /*0x6a7dc2*/
  if ( v9 == result ) /*0x6a7dcb*/
    return v10; /*0x6a8078*/
  ObjectClass::resetObjectState((ObjectClass *)v7, v9); /*0x6a7dd6*/
  if ( !*(unsigned char *)(v7 + 21413) ) /*0x6a7de3*/
  {
    AsyncIO::Shutdown((AsyncIO *)a4); /*0x6a7fc3*/
    (*(void (**)(int, ShapeButtonClass *, int, int, int))(*(unsigned int *)v7 + 52))(v7, &stru_B07DF8, v21, a3, a2); /*0x6a7fd1*/
    (*(void (**)(int, ShapeButtonClass *))(*(unsigned int *)v7 + 52))(v7, &stru_B0B3A0); /*0x6a7fdd*/
    (*(void (**)(int, GadgetClass *))(*(unsigned int *)v7 + 52))(v7, &stru_B07E58); /*0x6a7fe9*/
    v18 = &stru_B07C48; /*0x6a7fec*/
    do /*0x6a8002*/
    {
      (*(void (**)(int, ShapeButtonClass *))(*(unsigned int *)v7 + 52))(v7, v18); /*0x6a7ff6*/
      v18 += 8; /*0x6a7ff9*/
    }
    while ( (int)v18 < (int)&dword_B07DC8 ); /*0x6a8002*/
    (*(void (**)(int, ShapeButtonClass *))(*(unsigned int *)v7 + 52))(v7, &stru_B0B328); /*0x6a800d*/
    (*(void (**)(int, ShapeButtonClass *))(*(unsigned int *)v7 + 52))(v7, &g_SidebarFlag); /*0x6a8019*/
    v19 = 0; /*0x6a8029*/
    v20 = v7 + 3988 * *(unsigned int *)(v7 + 21404) + 5444; /*0x6a8031*/
    do /*0x6a805f*/
    {
      Tactical::SelectObject( /*0x6a8056*/
        (GScreenClass *)&stru_87F5F0.__pad_58[416],
        56 * (v19 + 60 * *(unsigned int *)(v20 + 56)) + 11566720);
      ++v19; /*0x6a805b*/
    }
    while ( v19 < 60 ); /*0x6a805f*/
    (*(void (**)(int, GadgetClass *))(*(unsigned int *)v7 + 52))(v7, &stru_B04A10); /*0x6a806a*/
    (*(void (**)(int, int))(*(unsigned int *)v7 + 56))(v7, 2); /*0x6a8073*/
    return v10; /*0x6a8073*/
  }
  (*(void (**)(int, int, int, int))(*(unsigned int *)v7 + 136))(v7, a4, a3, a2); /*0x6a7ded*/
  *(unsigned char *)(v7 + 21414) = 1; /*0x6a7df8*/
  Hash::Reset((LinkClass *)&stru_B07DF8); /*0x6a7dff*/
  (*(void (**)(int, ShapeButtonClass *))(*(unsigned int *)v7 + 48))(v7, &stru_B07DF8); /*0x6a7e0d*/
  Hash::Reset((LinkClass *)&stru_B0B3A0); /*0x6a7e15*/
  (*(void (**)(int, ShapeButtonClass *))(*(unsigned int *)v7 + 48))(v7, &stru_B0B3A0); /*0x6a7e23*/
  v11 = &stru_B07C48; /*0x6a7e26*/
  do /*0x6a7e47*/
  {
    Hash::Reset((LinkClass *)v11); /*0x6a7e2d*/
    LOBYTE(v11[3].ShapeButtonClass_field_0x08) = 0; /*0x6a7e32*/
    (*(void (**)(int, ShapeButtonClass *))(*(unsigned int *)v7 + 48))(v7, v11); /*0x6a7e3b*/
    v11 += 8; /*0x6a7e3e*/
  }
  while ( (int)v11 < (int)&dword_B07DC8 ); /*0x6a7e47*/
  Hash::Reset((LinkClass *)&stru_B0B328); /*0x6a7e4e*/
  Hash::InsertOrdered((GScreenClass *)&stru_87F5F0.__pad_58[416], (int)&stru_B0B328); /*0x6a7e5d*/
  Hash::Reset((LinkClass *)&g_SidebarFlag); /*0x6a7e67*/
  Hash::InsertOrdered((GScreenClass *)&stru_87F5F0.__pad_58[416], (int)&g_SidebarFlag); /*0x6a7e76*/
  Hash::Reset((LinkClass *)&stru_B07E58); /*0x6a7e80*/
  (*(void (**)(int, GadgetClass *))(*(unsigned int *)v7 + 48))(v7, &stru_B07E58); /*0x6a7e8e*/
  Hash::Reset((LinkClass *)&stru_B04A10); /*0x6a7e96*/
  (*(void (**)(int, GadgetClass *))(*(unsigned int *)v7 + 48))(v7, &stru_B04A10); /*0x6a7ea4*/
  v12 = (GadgetClass *)&stru_B07C48; /*0x6a7ea7*/
  v13 = (int *)(v7 + 5528); /*0x6a7eac*/
  do /*0x6a7ed5*/
  {
    *(v13 - 4) = 0; /*0x6a7eb2*/
    if ( *v13 > 0 ) /*0x6a7ebd*/
      ((DialogControl *)(v12))->Hide(); /*0x6a7ec1*/
    v12 = (GadgetClass *)((char *)v12 + 96); /*0x6a7ec6*/
    v13 += 997; /*0x6a7ec9*/
  }
  while ( (int)v12 < (int)&dword_B07DC8 ); /*0x6a7ed5*/
  ((GadgetClass *)((GadgetClass *)(&stru_B07C48 + 8 * *(unsigned int *)(v7 + 21404))))->Show(); /*0x6a7ee9*/
  v14 = v7 + 3988 * *(unsigned int *)(v7 + 21404) + 5444; /*0x6a7f01*/
  *(unsigned char *)(v7 + 3988 * *(unsigned int *)(v7 + 21404) + 5472) = 1; /*0x6a7f08*/
  v15 = 26; /*0x6a7f1a*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a7f12*/
    v15 = 18; /*0x6a7f21*/
  v16 = 0; /*0x6a7f34*/
  v17 = 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v15 + g_DSurface_SidebarBounds - 7) / 50); /*0x6a7f54*/
  if ( v17 > 0 ) /*0x6a7f58*/
  {
    do /*0x6a7f9d*/
    {
      Hash::Reset((LinkClass *)(56 * (v16 + 60 * *(unsigned int *)(v14 + 56)) + 11566720)); /*0x6a7f72*/
      Hash::InsertOrdered( /*0x6a7f95*/
        (GScreenClass *)&stru_87F5F0.__pad_58[416],
        56 * (v16 + 60 * *(unsigned int *)(v14 + 56)) + 11566720);
      ++v16; /*0x6a7f9a*/
    }
    while ( v16 < v17 ); /*0x6a7f9d*/
  }
  g_CameoRenderFlag = 1; /*0x6a7fa1*/
  Tactical::UpdateUIVisibility((Tactical *)v7); /*0x6a7fa8*/
  (*(void (**)(int, int))(*(unsigned int *)v7 + 56))(v7, 2); /*0x6a7fb7*/
  return a4; /*0x6a7fbf*/

}
} // namespace ra2

// 0x718260
namespace gamemd {
void* ObjectClass::FindPlacementPosition(int a2, int a3, int a4, int a5)
{

  ObjectClass *altObject; // esi
  int v7; // ebx
  unsigned int *v8; // eax
  int v9; // eax
  void *vtable0; // edx
  int v11; // eax
  void *v12; // edx
  unsigned int *v13; // eax
  int v14; // esi
  int TileIndex; // eax
  int v16; // edx
  CellClass *v17; // eax
  unsigned int *v18; // eax
  int v19; // esi
  int v20; // edi
  int v21; // ebx
  void *v22; // eax
  unsigned int *v23; // eax
  int v24; // esi
  int *v25; // edx
  int v26; // ecx
  int v27; // eax
  int *p_owningHouseIndex; // esi
  unsigned int *vtable3; // ecx
  char *v31; // eax
  unsigned char *v32; // eax
  int *v33; // eax
  int *v34; // ebp
  int v35; // edx
  char v36; // [esp-28h] [ebp-60h]
  int v37; // [esp+14h] [ebp-24h] BYREF
  char v38[4]; // [esp+18h] [ebp-20h] BYREF
  int16_t v39[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  int16_t *v40; // [esp+20h] [ebp-18h]
  int16_t v41[2]; // [esp+24h] [ebp-14h] BYREF
  int v42; // [esp+28h] [ebp-10h] BYREF
  int v43; // [esp+2Ch] [ebp-Ch] BYREF
  int v44; // [esp+30h] [ebp-8h]
  int v45; // [esp+34h] [ebp-4h]

  if ( (unsigned char)a5 ) /*0x71826f*/
  {
    p_owningHouseIndex = &this->owningHouseIndex; /*0x718664*/
    if ( this->owningHouseIndex == ((char *)&g_BuildingLoadQueue_Array) /*0x718681*/
      && this->fallRate == *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0))
      && this->nextObject == (ObjectClass *)((unsigned int *)&g_BuildingLoadQueue_Array)[0] )
    {
      vtable3 = ((unsigned int *)this)[0]; /*0x71868b*/
      v43 = vtable3[39]; /*0x71869a*/
      v44 = vtable3[40]; /*0x7186a1*/
      v45 = vtable3[41]; /*0x7186a8*/
      (*(void (**)(int *))(*vtable3 + 244))(&v43); /*0x7186b3*/
    }
    else
    {
      (*(void (**)(int *))(*(unsigned int *)((unsigned int *)this)[0] + 244))(&this->owningHouseIndex); /*0x718689*/
    }
    v31 = (char *)((unsigned int *)this)[0] + 648; /*0x7186be*/
    *p_owningHouseIndex = *(unsigned int *)v31; /*0x7186c6*/
    this->fallRate = *((unsigned int *)v31 + 1); /*0x7186cb*/
    this->nextObject = (ObjectClass *)*((unsigned int *)v31 + 2); /*0x7186d1*/
    this->nextObject = (ObjectClass *)Cell::GetGroundHeight(&this->owningHouseIndex); /*0x7186e4*/
    if ( (((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(&this->owningHouseIndex)->flags[0] & 0x100) == 0 /*0x7186fa*/
      || (v32 = ((unsigned int *)this)[0], v32[140]) )
    {
      *((unsigned char *)((unsigned int *)this)[0] + 140) = 0; /*0x718719*/
    }
    else
    {
      v32[140] = 1; /*0x718704*/
      this->nextObject = (ObjectClass *)((char *)this->nextObject + *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1))); /*0x718711*/
    }
    (*(void (**)(void *, int *))(*(unsigned int *)((unsigned int *)this)[0] + 240))(((unsigned int *)this)[0], &this->owningHouseIndex); /*0x718726*/
  }
  else
  {
    if ( (((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(&a2)->flags[0] & 0x100) != 0 ) /*0x71828d*/
      altObject = ((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(&a2)->altObject; /*0x71829e*/
    else
      altObject = ((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(&a2)->firstObject; /*0x7182b5*/
    v7 = *(unsigned int *)&((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(&a2)->__pad_28[28]; /*0x7182ca*/
    for ( LOBYTE(a5) = 0; altObject; altObject = altObject->nextObject ) /*0x7182d6*/
    {
      if ( !(*((uint8_t (**)(ObjectClass *))altObject->vtable1 + 88))(altObject) /*0x718305*/
        && (*((int (**)(ObjectClass *))altObject->vtable1 + 11))(altObject) == 15
        && (*(int (**)(void *))(*(unsigned int *)((unsigned int *)this)[0] + 44))(((unsigned int *)this)[0]) == 15 )
      {
        v8 = (unsigned int *)(*((int (**)(ObjectClass *, int *))altObject->vtable1 + 18))(altObject, &v43); /*0x718310*/
        if ( a2 == *v8 && a3 == v8[1] && a4 == v8[2] ) /*0x718339*/
        {
          v9 = (*((int (**)(ObjectClass *))altObject->vtable1 + 33))(altObject); /*0x718343*/
          vtable0 = altObject->AbstractClass; /*0x718354*/
          v37 = *(unsigned int *)(v9 + 160); /*0x718357*/
          (*((void (**)(ObjectClass *, int *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))vtable0 + 91))( /*0x71836e*/
            altObject,
            &v37,
            0,
            *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1,
            0,
            0);
        }
      }
      else if ( (*((uint8_t (**)(ObjectClass *))altObject->vtable1 + 88))(altObject) /*0x718397*/
             || (((unsigned int *)altObject)[0] & 4) == 0 )
      {
        if ( (*((uint8_t (**)(ObjectClass *))altObject->vtable1 + 88))(altObject) ) /*0x7183d4*/
        {
          *(unsigned int *)v39 = *(unsigned int *)((*(int (**)(void *))(*(unsigned int *)((unsigned int *)this)[0] + 132))(((unsigned int *)this)[0]) + 160); /*0x7183f5*/
          (*(void (**)(void *, int16_t *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(*(unsigned int *)((unsigned int *)this)[0] /*0x71840f*/
                                                                                                 + 364))(
            ((unsigned int *)this)[0],
            v39,
            0,
            *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1,
            0,
            0);
        }
        else if ( (((unsigned int *)altObject)[0] & 4) == 0 ) /*0x718428*/
        {
          LOBYTE(a5) = 1; /*0x71842a*/
        }
      }
      else
      {
        v11 = (*((int (**)(ObjectClass *))altObject->vtable1 + 33))(altObject); /*0x71839d*/
        v12 = altObject->AbstractClass; /*0x7183a9*/
        *(unsigned int *)v38 = *(unsigned int *)(v11 + 160); /*0x7183ab*/
        (*((void (**)(ObjectClass *, char *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))v12 + 91))( /*0x7183c8*/
          altObject,
          v38,
          0,
          *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          1,
          0,
          0);
      }
    }
    if ( (((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(&a2)->flags[0] & 0x100) != 0 /*0x71846c*/
      && (((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(&a2)->flags[0] & 0x200) == 0 )
    {
      LOBYTE(a5) = 1; /*0x71846e*/
    }
    v13 = (unsigned int *)(*(int (**)(void *, int *))(*(unsigned int *)((unsigned int *)this)[0] + 72))(((unsigned int *)this)[0], &v43); /*0x71847d*/
    LOWORD(v37) = *v13 / 256; /*0x718490*/
    HIWORD(v37) = v13[1] / 256; /*0x7184a8*/
    *(unsigned int *)v39 = v37; /*0x7184b1*/
    v40 = (int16_t *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v39); /*0x7184c0*/
    v38[0] = ObjectClass::processPointerInvalid != 0; /*0x7184d1*/
    if ( v7 != -1 /*0x7184f4*/
      && !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v7) + 681)
      && !ObjectClass::processPointerInvalid
      || (unsigned char)a5 )
    {
      v14 = *(unsigned int *)((*(int (**)(void *))(*(unsigned int *)((unsigned int *)this)[0] + 132))(((unsigned int *)this)[0]) + 1460); /*0x718505*/
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
      v37 = 0; /*0x71852b*/
      LOWORD(a5) = a2 / 256; /*0x71855c*/
      HIWORD(a5) = a3 / 256; /*0x718561*/
      *(unsigned int *)v39 = a5; /*0x71857b*/
      v36 = BYTE1(*((unsigned int *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v39) + 80)) & 1; /*0x7185b5*/
      TileIndex = ((MapClass *)((MapClass *)&stru_87F5F0.__pad_58[416]))->GetTileIndex(v40 + 18, v14, v38[0]); /*0x7185bf*/
      *(unsigned int *)v41 = *LayerClass::Pathfinding_Find( /*0x7185e6*/
                          (Type *)&stru_87F5F0.__pad_58[416],
                          v16,
                          &v42,
                          (int16_t *)&a5,
                          1,
                          TileIndex,
                          v14,
                          v36,
                          1,
                          1,
                          0,
                          0,
                          0,
                          1,
                          (int16_t *)&v37,
                          0,
                          0);
      v17 = ((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(&a2); /*0x7185ea*/
      v18 = (unsigned int *)(*(int (**)(CellClass *, int *))(v17->mapCoords[0] + 72))(v17, &v43); /*0x7185f8*/
      v19 = a2 - *v18; /*0x71860b*/
      v20 = a3 - v18[1]; /*0x718611*/
      v21 = a4 - v18[2]; /*0x718617*/
      v22 = ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v41); /*0x71861f*/
      v23 = (unsigned int *)(*(int (**)(void *, int *))(*(unsigned int *)v22 + 72))(v22, &v43); /*0x71862d*/
      v24 = *v23 + v19; /*0x718635*/
      v25 = (int *)((char *)((unsigned int *)this)[0] + 648); /*0x71863d*/
      v26 = v20 + v23[1]; /*0x718643*/
      v27 = v21 + v23[2]; /*0x718645*/
      *v25 = v24; /*0x718647*/
      v25[1] = v26; /*0x71864c*/
      v25[2] = v27; /*0x718650*/
      return 0; /*0x718658*/
    }
  }
  v33 = &this->owningHouseIndex; /*0x718735*/
  if ( this->owningHouseIndex == ((char *)&g_BuildingLoadQueue_Array) /*0x718754*/
    && this->fallRate == *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0))
    && this->nextObject == (ObjectClass *)((unsigned int *)&g_BuildingLoadQueue_Array)[0] )
  {
    v34 = (int *)((unsigned int *)this)[0]; /*0x71875e*/
    v43 = v34[39]; /*0x71876d*/
    v44 = v34[40]; /*0x718774*/
    v45 = v34[41]; /*0x71877b*/
    v35 = *v34; /*0x71877f*/
    v33 = &v43; /*0x718782*/
  }
  else
  {
    v34 = (int *)((unsigned int *)this)[0]; /*0x718756*/
    v35 = *v34; /*0x718759*/
  }
  (*(void (**)(int *, int *))(v35 + 240))(v34, v33); /*0x718789*/
  return 1; /*0x718649*/

}
} // namespace ra2

// 0x746CB0
namespace gamemd {
void ObjectClass::ObjectClass_GetTypeVt40_2()
{

  return TechnoClass::GetTypeVt40((TechnoClass *)this);

}
}
// 0x746CC0
namespace gamemd {
void ObjectClass::ObjectClass_GetTypeVt41_2()
{

  return ObjectClass::GetTypeVt41(int a1) ;

}
}
namespace gamemd {  // L-fix ns repair
int ObjectClass::processDeath()
{

  int v1; // edx
  char *i; // esi

  v1 = ((char *)&stru_B1D290) - 1; /*0x74cd68*/
  if ( ((char *)&stru_B1D290) - 1 < 0 ) /*0x74cd6d*/
    return 0; /*0x74cda2*/
  for ( i = (char *)((char *)&stru_B1D290) + 4 * v1; /*0x74cd78*/
        *(unsigned short *)(*(unsigned int *)i + 248) != LOWORD(this->AbstractClass)
     || *(unsigned short *)(*(unsigned int *)i + 250) != HIWORD(this->AbstractClass);
        i -= 4 )
  {
    if ( --v1 < 0 ) /*0x74cd97*/
      return 0; /*0x74cd97*/
  }
  return *((unsigned int *)((char *)&stru_B1D290) + v1); /*0x74cd9e*/

}
} // namespace ra2

// 0x401940
namespace gamemd {
int ObjectClass::GetMember06()
{

  return *(unsigned int *)&this->FileNameAllocated; /*0x401943*/

}
} // namespace gamemd

// 0x4135A0
namespace gamemd {
bool ObjectClass::HasLinkedObject(VectorClass_flat * aP0)
{

  int result; // eax

  result = *(unsigned int *)((*(int (**)(int))(*(unsigned int *)aP0 + 444))(aP0) + 224); /*0x4135af*/
  LOBYTE(result) = result && result != aP0; /*0x4135c3*/
  return result; /*0x4135bf*/

}
} // namespace gamemd

// 0x41BE00
namespace gamemd {
int ObjectClass::GetCoordsThunk2()
{

  unsigned int *v1; // ecx
  unsigned char v3[12]; // [esp+4h] [ebp-Ch] BYREF
  unsigned int *v4; // [esp+14h] [ebp+4h]

  v1 = (unsigned int *)(*(int (**)(IUnknown *, unsigned char *))(this->field_0 + 72))(this, v3); /*0x41be0e*/
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

  return this->Image; /*0x4886a3*/

}
} // namespace gamemd

// 0x4CA120
namespace gamemd {
int ObjectClass::GetMember09()
{

  return this->occupant; /*0x4ca123*/

}
} // namespace gamemd

namespace gamemd {  // L-fix ns repair
int ObjectClass::updateStateFlags()
{

  int result; // eax

  result = (int)this->AbstractClass; /*0x4e02c0*/
  if ( this->AbstractClass ) /*0x4e02c0*/
    return (*(int (**)(int))(*(unsigned int *)result + 8))(result); /*0x4e02c9*/
  return result; /*0x4e02cc*/

}
} // namespace gamemd

// 0x4E14A0
namespace gamemd {
int ObjectClass::InputThunkA()
{

  return ObjectClass::GetWidth((LinkClass *)this);

}
}
// 0x4E14B0
namespace gamemd {
int ObjectClass::InputThunkB()
{

  return ObjectClass::GetHeight((LinkClass *)this);

}
}
// 0x556620
namespace gamemd {
int ObjectClass::GetWidth()
{

  return (int)this->m_Next->__pad_0; /*0x556623*/

}
} // namespace gamemd

// 0x556B50
namespace gamemd {
int ObjectClass::updateMissionState(int a2)
{

  int result; // eax

  result = a2; /*0x556b57*/
  if ( !stru_A8EB00.ObjectTypeClass[30] ) /*0x556b5b*/
    result = 2 * a2; /*0x556b5d*/
  ((unsigned int *)this)[0] = (void *)result; /*0x556b5f*/
  return result; /*0x556b62*/

}
} // namespace gamemd

// 0x55A8C0
namespace gamemd {
unsigned int * ObjectClass::ComputeScreenYOffset(BuildingTypeClass * aP0, unsigned int * a1)
{

  int v2; // eax
  int v3; // ecx

  v2 = (*(int (**)(int))(*(unsigned int *)aP0->field_8 + 456))(aP0->field_8); /*0x55a8cc*/
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

  int v2; // ecx
  int result; // eax

  if ( *((unsigned char *)aP0 + 152) ) /*0x55baa5*/
  {
    LOBYTE(result) = 1; /*0x55baaf*/
  }
  else if ( DisplayClass::RenderStatusText(v2, (int)aP0, a2) ) /*0x55babb*/
  {
    LOBYTE(result) = 1; /*0x55bac4*/
    *((unsigned char *)aP0 + 152) = 1; /*0x55bac6*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x55bad0*/
  }
  return result; /*0x55bab1*/

}
} // namespace gamemd

// 0x5F5F40
namespace gamemd {
int ObjectClass::GetZAboveGround()
{

  int v2; // ecx
  unsigned int v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v4[0] = this->field_9C; /*0x5f5f52*/
  v4[1] = *(unsigned int *)this->__pad_A0; /*0x5f5f63*/
  v4[2] = this->field_A4; /*0x5f5f6a*/
  v2 = this->field_A4 - Cell::GetGroundHeight(v4); /*0x5f5f79*/
  if ( this->__pad_8C[0] ) /*0x5f5f7b*/
    v2 -= dword_AC13BC; /*0x5f5f86*/
  return v2; /*0x5f5f83*/

}
} // namespace gamemd

// 0x5F6A10
namespace gamemd {
int ObjectClass::GetCell()
{

  unsigned int *v1; // eax
  int v3; // [esp+8h] [ebp-14h]
  int16_t v4[2]; // [esp+Ch] [ebp-10h] BYREF
  unsigned char v5[12]; // [esp+10h] [ebp-Ch] BYREF

  v1 = (unsigned int *)(*(int (**)(IUnknown *, unsigned char *, unsigned int))(this->field_0 + 76))(this, v5, 0); /*0x5f6a1c*/
  LOWORD(v3) = *v1 / 256; /*0x5f6a2f*/
  HIWORD(v3) = v1[1] / 256; /*0x5f6a48*/
  *(unsigned int *)v4 = v3; /*0x5f6a56*/
  return (int)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v4); /*0x5f6a5f*/

}
} // namespace gamemd

// 0x5F6C10
namespace gamemd {
int ObjectClass::IsAboveScreenMargin()
{

  int result; // eax

  result = (*(int (**)(IUnknown *))(this->field_0 + 456))(this); /*0x5f6c12*/
  LOBYTE(result) = result > -20; /*0x5f6c20*/
  return result; /*0x5f6c22*/

}
} // namespace gamemd

// 0x5F6DC0
namespace gamemd {
int ObjectClass::CreateInstance()
{

  char v3; // [esp+8h] [ebp+4h]

  ((ObjectClass *)(this))->Dtor(); /*0x5f6dc3*/
  if ( (v3 & 1) != 0 ) /*0x5f6dcd*/
    __3_YAXPAX_Z(this); /*0x5f6dd0*/
  return (int)this; /*0x5f6dda*/

}
} // namespace gamemd

// 0x6241C0
namespace gamemd {
char ObjectClass::Release()
{

  int result; // eax

  LOBYTE(result) = *((unsigned char *)this + 8); /*0x6241c0*/
  return result; /*0x6241c3*/

}
} // namespace gamemd

// 0x6241D0
namespace gamemd {
int ObjectClass::GetMember01()
{

  return *((unsigned int *)this + 1); /*0x6241d3*/

}
} // namespace gamemd

namespace gamemd {  // L-fix ns repair
int ObjectClass::processDamage()
{

  int v1; // esi
  int result; // eax
  int v3; // [esp+0h] [ebp-4h]

  PowerClass::Stub((PowerClass *)this, v3); /*0x6a5001*/
  v1 = 4; /*0x6a5006*/
  do /*0x6a501d*/
  {
    result = (int)SearchMIXFile(aDarkenShp, 0); /*0x6a5012*/
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

  ((Mouse *)((int)&dword_87F7E8))->SetCursor(0, 0); /*0x6aba49*/
  return 1; /*0x6aba53*/

}
} // namespace gamemd

// 0x6AC7A0
namespace gamemd {
unsigned int * ObjectClass::updateAnimation(char a2)
{

  ((GadgetClass *)(Block))->Dtor(); /*0x6ac7a3*/
  if ( (a2 & 1) != 0 ) /*0x6ac7ad*/
    __3_YAXPAX_Z(Block); /*0x6ac7b0*/
  return Block; /*0x6ac7ba*/

}
} // namespace gamemd

// 0x6E45E0
namespace gamemd {
int ObjectClass::FindOwner(unsigned int * a0, AnimClass * aP1)
{

  if ( !a0 ) /*0x6e45e6*/
    return 0; /*0x6e45e8*/
  if ( aP1 == (void *)8997 ) /*0x6e45f8*/
    return ((Property *)(a0))->GetField11(); /*0x6e45fa*/
  if ( aP1 == (void *)-1 ) /*0x6e4606*/
    return 0; /*0x6e4608*/
  if ( BuildingType::IsSpecialType(aP1) ) /*0x6e4610*/
    return BuildingType::FindOwnerHouse(aP1); /*0x6e461b*/
  return ((HouseClass *)(aP1))->FindOwner(); /*0x6e45ea*/

}
} // namespace gamemd

// 0x72A660
namespace gamemd {
int ObjectClass::setTarget(int a2)
{

  *(unsigned int *)&this->__pad_2C[4] = a2; /*0x72a664*/
  return a2; /*0x72a667*/

}
} // namespace gamemd

// 0x72A670
namespace gamemd {
unsigned int * ObjectClass::clearTarget(char a2)
{

  ((GadgetClass *)((GadgetClass *)this))->Dtor(); /*0x72a673*/
  if ( (a2 & 1) != 0 ) /*0x72a67d*/
    __3_YAXPAX_Z(this); /*0x72a680*/
  return this->__pad_0; /*0x72a68a*/

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
unsigned int * ObjectClass::loc_7A2E70(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{

  int result; // eax
  wchar_t *StringCSF; // eax
  HWND DlgItem; // eax
  UINT v7; // eax
  UINT v8; // eax
  char *v9; // eax
  int v10; // eax
  int v11; // esi
  String *v12; // ecx
  int v13; // eax
  int v14; // esi
  String *v15; // ecx
  int v16; // eax
  int v17; // esi
  String *v18; // ecx
  DeleteAndZero v19; // [esp-4h] [ebp-1F4h]
  char *v20; // [esp-4h] [ebp-1F4h]
  ObjectClass *v21; // [esp+0h] [ebp-1F0h]
  unsigned char v22[224]; // [esp+10h] [ebp-1E0h] BYREF
  wchar_t lParam[128]; // [esp+F0h] [ebp-100h] BYREF

  if ( a2 == 272 && a4 ) /*0x7a2a09*/
    SetWindowLongA(hWnd, 8, *(unsigned int *)(a4 + 4)); /*0x7a2a12*/
  *(unsigned int *)v19.__pad_0 = a4; /*0x7a2a1f*/
  result = BaseDialogProc(hWnd, a2, a3, v19); /*0x7a2a25*/
  if ( !result ) /*0x7a2a2c*/
  {
    *(unsigned int *)&v22[4] = GetWindowLongA(hWnd, 8); /*0x7a2a3e*/
    if ( a2 <= 0x2B ) /*0x7a2a42*/
    {
      switch ( a2 ) /*0x7a2a44*/
      {
        case 0x2Bu: /*0x7a2a44*/
          Dialog::Resize((char *)a4); /*0x7a2a91*/
          return 1; /*0x7a2aa5*/
        case 0xFu: /*0x7a2a44*/
          Dialog::DrawBackground((Dialog *)hWnd); /*0x7a2a68*/
          Dialog::StopBink((Dialog *)hWnd); /*0x7a2a6f*/
          ValidateRect(hWnd, 0); /*0x7a2a77*/
          return 1; /*0x7a2a8c*/
        case 0x14u: /*0x7a2a44*/
          return 1; /*0x7a2a63*/
      }
      return 0; /*0x7a2a4e*/
    }
    if ( a2 != 273 ) /*0x7a2aae*/
    {
      if ( a2 == 1175 ) /*0x7a2ab6*/
      {
        v20 = ((String *)((String *)&stru_B76AC4))->GetOrEmpty(); /*0x7a2ac6*/
        StringCSF = GetStringCSF(aWolAddbuddyque, 0, g_Str_File_wonline_cpp, 29291); /*0x7a2ad8*/
        swprintf(lParam, (const size_t)StringCSF, (const wchar_t *const)v20); /*0x7a2ae6*/
        DlgItem = GetDlgItem(hWnd, 1819); /*0x7a2af4*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x7a2b0a*/
        return 0; /*0x7a2b1c*/
      }
      return 0; /*0x7a2ab6*/
    }
    if ( (uint16_t)a3 != 1 ) /*0x7a2b26*/
    {
      if ( (uint16_t)a3 == 2 ) /*0x7a2b29*/
      {
        v7 = IsDlgButtonChecked(hWnd, 1785); /*0x7a2b35*/
        ReadWOLLobbyOption(v7 != 1); /*0x7a2b46*/
        (*(void (**)(unsigned int, HWND, int))(**(unsigned int **)&v22[4] + 4))(*(unsigned int *)&v22[4], hWnd, 2); /*0x7a2b54*/
        return 0; /*0x7a2b63*/
      }
      return 0; /*0x7a2b29*/
    }
    v8 = IsDlgButtonChecked(hWnd, 1785); /*0x7a2b6c*/
    ReadWOLLobbyOption(v8 != 1); /*0x7a2b7d*/
    if ( !(uint8_t)MapSeed::CheckName((MapSeed *)&stru_B76AC4) ) /*0x7a2b8e*/
    {
LABEL_53:
      (*(void (**)(unsigned int, HWND, int))(**(unsigned int **)&v22[4] + 4))(*(unsigned int *)&v22[4], hWnd, 1); /*0x7a2e54*/
      return 0; /*0x7a2e60*/
    }
    memset(&v22[8], 0, 0x6Cu); /*0x7a2ba1*/
    v9 = ((String *)((String *)&stru_B76AC4))->GetOrEmpty_Alt(); /*0x7a2ba8*/
    strncpy(&v22[44], v9, 9u); /*0x7a2bb3*/
    (*(void (**)(LPVOID, unsigned char *))(*(unsigned int *)ppv + 224))(ppv, &v22[8]); /*0x7a2bc8*/
    if ( !(uint8_t)MapSeed::CheckName((MapSeed *)&stru_B76AC4) ) /*0x7a2bda*/
    {
LABEL_52:
      SendGameListWOL(v21); /*0x7a2e4f*/
      goto LABEL_53; /*0x7a2e4f*/
    }
    ((String *)((String *)v22))->AssignFromPtr((const char **)&stru_B76AC4); /*0x7a2be9*/
    v10 = *(unsigned int *)g_WindowManager.__pad_0; /*0x7a2bee*/
    v11 = *(unsigned int *)g_WindowManager.__pad_0; /*0x7a2bf3*/
    if ( *(int *)g_WindowManager.__pad_0 >= (int)g_WindowManager.Array_field_0x4 ) /*0x7a2bff*/
    {
      ((DynamicVector *)((DynamicVector *)&g_WindowManager))->EnsureCapacity(); /*0x7a2c06*/
      v10 = *(unsigned int *)g_WindowManager.__pad_0; /*0x7a2c0b*/
    }
    if ( v10 >= (int)g_WindowManager.Array_field_0x4 ) /*0x7a2c16*/
    {
      ((DynamicVector *)((DynamicVector *)&g_WindowManager))->EnsureCapacity(); /*0x7a2c1d*/
      v10 = *(unsigned int *)g_WindowManager.__pad_0; /*0x7a2c22*/
    }
    if ( v11 < v10 ) /*0x7a2c29*/
    {
      memcpy( /*0x7a2c46*/
        (void *)(*(unsigned int *)g_WindowManager.__pad_8 + 4 * v11 + 4),
        (const void *)(*(unsigned int *)g_WindowManager.__pad_8 + 4 * v11),
        4 * (v10 + 0x3FFFFFFF * v11));
      v10 = *(unsigned int *)g_WindowManager.__pad_0; /*0x7a2c4b*/
    }
    v12 = (String *)(*(unsigned int *)g_WindowManager.__pad_8 + 4 * v11); /*0x7a2c59*/
    if ( v12 ) /*0x7a2c5e*/
    {
      ((String *)(v12))->AssignFromPtr((const char **)v22); /*0x7a2c65*/
      v10 = *(unsigned int *)g_WindowManager.__pad_0; /*0x7a2c6a*/
    }
    *(unsigned int *)g_WindowManager.__pad_0 = v10 + 1; /*0x7a2c70*/
    v13 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x7a2c75*/
    v14 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x7a2c7a*/
    if ( *(int *)&stru_B76900.needsRedraw >= *(int *)&stru_B76900.hasParachute ) /*0x7a2c86*/
    {
      ((DynamicVector *)((DynamicVector *)&stru_B76900.needsRedraw))->EnsureCapacity(); /*0x7a2c8d*/
      v13 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x7a2c92*/
    }
    if ( v13 >= *(int *)&stru_B76900.hasParachute ) /*0x7a2c9d*/
    {
      ((DynamicVector *)((DynamicVector *)&stru_B76900.needsRedraw))->EnsureCapacity(); /*0x7a2ca4*/
      v13 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x7a2ca9*/
    }
    if ( v14 < v13 ) /*0x7a2cb0*/
    {
      memcpy( /*0x7a2ccd*/
        &stru_B76900.parachute->AnimClass_field_0x4 + v14,
        &stru_B76900.parachute->AnimClass_field_0x0 + v14,
        4 * (v13 + 0x3FFFFFFF * v14));
      v13 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x7a2cd2*/
    }
    v15 = (String *)(&stru_B76900.parachute->AnimClass_field_0x0 + v14); /*0x7a2ce0*/
    if ( v15 ) /*0x7a2ce5*/
    {
      ((String *)(v15))->AssignFromPtr((const char **)v22); /*0x7a2cec*/
      v13 = *(unsigned int *)&stru_B76900.needsRedraw; /*0x7a2cf1*/
    }
    *(unsigned int *)&stru_B76900.needsRedraw = v13 + 1; /*0x7a2cf7*/
    v16 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x7a2cfc*/
    v17 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x7a2d01*/
    if ( *(int *)g_WOL_BuddyList.__pad_0 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x7a2d0d*/
    {
      ((DynamicVector *)(&g_WOL_BuddyList))->EnsureCapacity(); /*0x7a2d14*/
      v16 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x7a2d19*/
    }
    if ( v16 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x7a2d24*/
    {
      ((DynamicVector *)(&g_WOL_BuddyList))->EnsureCapacity(); /*0x7a2d2b*/
      v16 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x7a2d30*/
    }
    if ( v17 < v16 ) /*0x7a2d37*/
    {
      memcpy( /*0x7a2d54*/
        (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v17 + 4),
        (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v17),
        4 * (v16 + 0x3FFFFFFF * v17));
      v16 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x7a2d59*/
    }
    v18 = (String *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v17); /*0x7a2d67*/
    if ( v18 ) /*0x7a2d6c*/
    {
      ((String *)(v18))->AssignFromPtr((const char **)v22); /*0x7a2d73*/
      v16 = *(unsigned int *)g_WOL_BuddyList.__pad_0; /*0x7a2d78*/
    }
    *(unsigned int *)g_WOL_BuddyList.__pad_0 = v16 + 1; /*0x7a2d83*/
    if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x7a2d88*/
    {
      if ( (unsigned int)(time(0) - *(unsigned int *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x7a2da6*/
      {
LABEL_51:
        DeleteAndZero((ObjectClass *)v22); /*0x7a2e46*/
        goto LABEL_52; /*0x7a2e4a*/
      }
      DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x7a2db1*/
    }
    if ( *(unsigned int *)&stru_B76900.needsRedraw ) /*0x7a2dbd*/
    {
      if ( (uint8_t)DynamicStringArray::Get( /*0x7a2dcf*/
                              (DynamicStringArray *)&stru_B76900.needsRedraw,
                              (char **)&g_WindowManager.__pad_14[16],
                              0) )
        ((DynamicArray *)((DynamicArray *)&stru_B76900.needsRedraw))->Remove(0); /*0x7a2ddf*/
      *(unsigned int *)g_WOL_BuddyList.__pad_20 = time(0); /*0x7a2deb*/
      memset(&v22[116], 0, 0x6Cu); /*0x7a2dfe*/
      strcpy(&v22[152], ((String *)((String *)&g_WindowManager.__pad_14[16]))->GetOrEmpty()); /*0x7a2e31*/
      (*(void (**)(LPVOID, unsigned char *))(*(unsigned int *)ppv + 96))(ppv, &v22[116]); /*0x7a2e43*/
    }
    goto LABEL_51; /*0x7a2e43*/
  }
  return result; /*0x7a2a54*/

}
} // namespace gamemd
