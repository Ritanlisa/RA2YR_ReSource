// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/classes/AbstractClassVector_e4.hpp"
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
#include "e4/classes/Matrix3x4_e4.hpp"
#include "e4/classes/AudioFileClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/AudioFile_e4.hpp"
#include "classes/Targeting_e4.hpp"  // G42.57w9 method-carrier supply
#include "e4/classes/PowerClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Matrix3x3_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Turret_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Transform_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TechnoClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/AlphaShapeClass_e4.hpp"  // w18j2 C3861 AlphaShapeClass:: supply
#include "e4/classes/MapClass_e4.hpp"  // w18j2 C3861 MapClass:: supply
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/LogicClass_flat_e4.hpp"  // X74 typed-global (LogicClass cluster)
#include "e4/classes/ScenarioClass_e4.hpp"
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int CTOR(int p0, int p1, int p2); }  // x4:signals@0x420960
namespace gamemd { int GetScrollMode(MapClass *p_this); }  // x4:ida@0x4aeb10
// [w14e3] Matrix3D supply: verbatim struct from src/core/math.hpp (gamemd), cpp-local carrier
namespace gamemd {
struct Matrix3D
{
  float Data[12] = {};  // data: 0x840b4c
  unsigned char q000;  // 0x0
  unsigned int q080;  // 0x80
  unsigned int u32_0;   // 0x0 (g57w10 r4: raw RotateZ 0x5af0aa fld [esi] float element vocab)
  unsigned int u32_8;   // 0x8 (raw fld [esi+8])
  unsigned int u32_10;  // 0x10
  unsigned int u32_18;  // 0x18
  unsigned int u32_28;  // 0x28
  public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
  void* Constructor(float a1, float a2);  // 0x5AE6F0
  void RotateZ(float a1);  // 0x5AF080
  // --- gap2 auto-generated stub declarations (END) ---
};
} // namespace gamemd

// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern const IID IID_ILocomotion;  // data: 0x7ed358 truth(IDA G42.57w9)


// 0x483610
namespace gamemd {  // G42.18 ns repair
int ObjectClass::processPointerInvalid()
{
  return ((unsigned int)(this->customSound_controller)>> 8) & 1; /*0x48361c*/
}  // G42.18 ns repair
} // namespace gamemd

// 0x4D7D50
namespace gamemd {
int ObjectClass::SpawnInfantry(int aP1, int16_t *aP2, int16_t *aP3, void **aP4)
{

  char result; // al
  __int16 *v7; // edi
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
  int ptr_0; // edi
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
  __int16 v36; // cx
  void *v37; // [esp+0h] [ebp-28h]
  int v38; // [esp+4h] [ebp-24h]
  char v39; // [esp+8h] [ebp-20h]
  __int16 v40[2]; // [esp+10h] [ebp-18h] BYREF
  int v41; // [esp+14h] [ebp-14h] BYREF
  int v42; // [esp+18h] [ebp-10h] BYREF
  int v43[2]; // [esp+1Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+24h] [ebp-4h]

  if ( this->isBerserk[0] ) /*0x4d7d58*/
    return 0; /*0x4d7d64*/
  if ( this->rockerLinkedUnit && !*(unsigned char *)(this->vt_slot_132(this) + 1682) ) /*0x4d7d81*/
    return 0; /*0x4d7d8d*/
  v7 = aP2; /*0x4d7d9a*/
  referenceCount = this->vt_slot_112( /*0x4d7db1*/
                     this,
                     aP2,
                     0,
                     aP4);
  if ( !(unsigned __int8)((LayerClass *)&dword_87F7E8)->IsWithinUsableArea( v7, 1) && referenceCount != 2 ) /*0x4d7dbf*/
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
        GroundHeight = Cell::GetGroundHeight(v43); /*0x4d7efe*/
        if ( (((Coord *)&dword_87F7E8)->To_Cell( v43)->flags & 0x100) != 0 ) /*0x4d7f16*/
          GroundHeight += dword_8B3DF4; /*0x4d7f24*/
        referenceCount = dword_A8B230[14].referenceCount; /*0x4d7f35*/
        if ( *(unsigned int *)&dword_A8B238 && *(unsigned int *)&dword_A8B238 != 5 ) /*0x4d7f40*/
        {
          dword_A8B230[14].referenceCount = -3; /*0x4d7f42*/
          *(unsigned int *)(dword_8871E0->Normal[6] + 832) = -5000; /*0x4d7f57*/
        }
        v17 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4d7f66*/
        if ( v17 ) /*0x4d7f70*/
          aP4 = AnimClass::ctor(v17, (void *)dword_8871E0->Normal[6], v43, 0, 1, (void *)0x600, 0, 0); /*0x4d7f98*/
        else
          aP4 = 0; /*0x4d7f9e*/
        if ( *(unsigned int *)&dword_A8B238 && *(unsigned int *)&dword_A8B238 != 5 ) /*0x4d7fb6*/
        {
          dword_A8B230[14].referenceCount = referenceCount; /*0x4d7fcb*/
          v18 = (*(int (**)(char *, void ***))(*(unsigned int *)&stru_A8E960.nextScenario[72] + 16))( /*0x4d7fd7*/
                  &stru_A8E960.nextScenario[72],
                  &aP4);
          if ( v18 != -1 && v18 < *(int *)&stru_A8E960.nextScenario[88] ) /*0x4d7fe7*/
          {
            --*(unsigned int *)&stru_A8E960.nextScenario[88]; /*0x4d7fec*/
            for ( ; /*0x4d7ff2*/
                  v18 < *(int *)&stru_A8E960.nextScenario[88];
                  *(unsigned int *)(*(unsigned int *)&stru_A8E960.nextScenario[76] + 4 * v18 - 4) = *(unsigned int *)(*(unsigned int *)&stru_A8E960.nextScenario[76]
                                                                                                  + 4 * v18) )
            {
              ++v18; /*0x4d7ffa*/
            }
          }
          if ( dword_A83E10 < dword_A83E08 /*0x4d8042*/
            || (byte_A83E0D || !dword_A83E08)
            && dword_A83E14 > 0
            && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_A83E00 + 8))(
                 &dword_A83E00,
                 dword_A83E14 + dword_A83E08,
                 0) )
          {
            v19 = dword_A83E10++; /*0x4d8055*/
            *((unsigned int *)dword_A83E04 + v19) = aP4; /*0x4d8062*/
          }
        }
      }
      goto LABEL_38; /*0x4d8062*/
    case 2: /*0x4d7de0*/
LABEL_38:
      aP4 = (void **)*ObjectClass::FindPlacementCell((ObjectClass *)&v42, referenceCount, v7, 0, v38, v39); /*0x4d8065*/
      if ( aP4 == (void **)g_FootClass_Pool ) /*0x4d8081*/
        return 0; /*0x4d8081*/
      ptr_0 = this->ptr_0; /*0x4d8099*/
      v37 = ((CellCoord *)&dword_87F7E8)->To_CellObj(aP3); /*0x4d80a6*/
      v21 = ((CellCoord *)&dword_87F7E8)->To_CellObj((__int16 *)&aP4); /*0x4d80ac*/
LABEL_51:
      (*(void (**)(TechnoClass *, int, unsigned int, void *, void *))(ptr_0 + 888))(this, 2, 0, v21, v37); /*0x4d822a*/
LABEL_52:
      result = 1; /*0x4d8237*/
      break; /*0x4d8239*/
    case 3: /*0x4d7de0*/
      if ( !this->vt_slot_160(this) ) /*0x4d8155*/
        return 0; /*0x4d8155*/
      v27 = this->ptr_0; /*0x4d815b*/
      v28 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v7); /*0x4d8165*/
      (*(void (**)(TechnoClass *, int, unsigned int, void *, unsigned int))(v27 + 888))(this, 7, 0, v28, 0); /*0x4d8171*/
      return 1; /*0x4d817f*/
    case 5: /*0x4d7de0*/
    case 63: /*0x4d7de0*/
      v22 = ObjectClass::processDeath((ObjectClass *)v7); /*0x4d80b3*/
      if ( !v22 || *(unsigned char *)(v22 + 256) || *(int *)(v22 + 108) <= 0 ) /*0x4d80cb*/
      {
        v23 = this->ptr_0; /*0x4d80e9*/
        v24 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v7); /*0x4d80f5*/
        (*(void (**)(TechnoClass *, int, void *, unsigned int, unsigned int))(v23 + 888))(this, 1, v24, 0, 0); /*0x4d80ff*/
        return 1; /*0x4d8107*/
      }
      else
      {
        this->vt_slot_888(this, 1, v22, 0, 0); /*0x4d80d8*/
        return 1; /*0x4d80e0*/
      }
    case 6: /*0x4d7de0*/
      v14 = this->ptr_0; /*0x4d7e8e*/
      v15 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v7); /*0x4d7e98*/
      (*(void (**)(TechnoClass *, int, unsigned int, void *, unsigned int))(v14 + 888))(this, 10, 0, v15, 0); /*0x4d7ea4*/
      return 1; /*0x4d7eb2*/
    case 9: /*0x4d7de0*/
      if ( !this->vt_slot_160(this) ) /*0x4d811c*/
        return 0; /*0x4d811c*/
      v25 = this->ptr_0; /*0x4d8122*/
      v26 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v7); /*0x4d812c*/
      (*(void (**)(TechnoClass *, int, unsigned int, void *, unsigned int))(v25 + 888))(this, 8, 0, v26, 0); /*0x4d8138*/
      return 1; /*0x4d8146*/
    case 16: /*0x4d7de0*/
      v29 = this->ptr_0; /*0x4d8182*/
      v30 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v7); /*0x4d818c*/
      (*(void (**)(TechnoClass *, int, unsigned int, void *, unsigned int))(v29 + 888))(this, 17, 0, v30, 0); /*0x4d8198*/
      return 1; /*0x4d81a6*/
    case 26: /*0x4d7de0*/
      if ( !this->vt_slot_160(this) /*0x4d7e59*/
        && !this->vt_slot_816(this)
        || !this->vt_slot_160(this) )
      {
        return 0; /*0x4d7e61*/
      }
      v12 = this->ptr_0; /*0x4d7e67*/
      v13 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v7); /*0x4d7e73*/
      (*(void (**)(TechnoClass *, int, void *, unsigned int, unsigned int))(v12 + 888))(this, 11, v13, 0, 0); /*0x4d7e7d*/
      return 1; /*0x4d7e8b*/
    case 35: /*0x4d7de0*/
      v31 = (InfantryClass *)((CellCoord *)&dword_87F7E8)->To_CellObj(v7); /*0x4d81af*/
      Type = InfantryClass::GetType(v31); /*0x4d81bb*/
      aP2 = *(__int16 **)(Type + 40); /*0x4d81ca*/
      v33 = (InfantryClass *)((CellCoord *)&dword_87F7E8)->To_CellObj((__int16 *)&aP2); /*0x4d81ce*/
      v34 = *(unsigned int *)(InfantryClass::GetType(v33) + 44) - 4; /*0x4d81e0*/
      aP3 = *(__int16 **)(Type + 40); /*0x4d81e3*/
      v35 = v34 & 7; /*0x4d81e7*/
      v37 = 0; /*0x4d81ea*/
      v36 = (unsigned short)aP3 + LOWORD(dword_89F688[v35]); /*0x4d81fb*/
      ptr_0 = this->ptr_0; /*0x4d81fe*/
      LOWORD(v35) = HIWORD(dword_89F688[v35]); /*0x4d8200*/
      LOWORD(aP4) = v36; /*0x4d8204*/
      HIWORD(aP4) = HIWORD(aP3) + v35; /*0x4d8213*/
      *(unsigned int *)v40 = aP4; /*0x4d821c*/
      v21 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v40); /*0x4d8225*/
      goto LABEL_51; /*0x4d8225*/
    case 51: /*0x4d7de0*/
      if ( !this->vt_slot_160(this) ) /*0x4d7df3*/
        return 0; /*0x4d7df3*/
      PlacementCell = (void ***)ObjectClass::FindPlacementCell((ObjectClass *)&v41, referenceCount, v7, 0, v38, v39); /*0x4d7dff*/
      v10 = this->ptr_0; /*0x4d7e06*/
      aP4 = *PlacementCell; /*0x4d7e0c*/
      v11 = ((CellCoord *)&dword_87F7E8)->To_CellObj((__int16 *)&aP4); /*0x4d7e18*/
      (*(void (**)(TechnoClass *, int, unsigned int, void *, unsigned int))(v10 + 888))(this, 25, 0, v11, 0); /*0x4d7e24*/
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

  unsigned int *v5 = a5; // esi /*0x4d9c67*/
  if ( !a5 ) /*0x4d9c72*/
  {
    int v6; // eax
    v6 = ((unsigned char)a2 - 4) & 7; /*0x4d9c77*/
    int16_t v7; // dx
    v7 = (*(((unsigned short *)&(a1->occupant)) + 1)) + (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[v6 + 82])) + 1)); /*0x4d9c8e*/
    (*((unsigned short *)&(a5))) = (*((unsigned short *)&(a1->occupant))) + (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[v6 + 82]))); /*0x4d9c99*/
    (*(((unsigned short *)&(a5)) + 1)) = v7; /*0x4d9ca2*/
    v5 = (unsigned int *)(((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)&a5)); /*0x4d9cba*/
  }
  if ( a2 == -1 ) /*0x4d9cbf*/
  {
    if ( *a3 == -1 && (*((unsigned int *)a1 + 80) & 0x100) != 0 ) /*0x4d9e50*/
      *a3 = *((char *)a1 + 283) + 4; /*0x4d9e5c*/
    return 0; /*0x4d9e5c*/
  }
  if ( !v5 || !a1 ) /*0x4d9ccf*/
    return 0; /*0x4d9ccf*/
  if ( *a3 == -1 && (v5->u32_140 & 0x100) != 0 ) /*0x4d9ce8*/
  {
    *a3 = *(&v5->u32_11B) + 4; /*0x4d9cf4*/
    if ( (*((unsigned int *)a1 + 80) & 0x200) == 0 ) /*0x4d9d00*/
      return 7; /*0x4d9d0b*/
  }
  int v10; // ebx
  v10 = *((char *)a1 + 283); /*0x4d9d14*/
  int *v18; // [esp+1Ch] [ebp+Ch]
  v18 = (int *)(v5[80] & 0x100); /*0x4d9d20*/
  int v11; // ecx
  if ( v18 ) /*0x4d9d24*/
    v11 = v5->u32_11B; /*0x4d9d26*/
  else
    v11 = *a3; /*0x4d9d2f*/
  int v12 = v11 - v10; // ecx /*0x4d9d32*/
  unsigned int v13; // eax
  v13 = abs32(v12); /*0x4d9d39*/
  if ( !v13 ) /*0x4d9d3e*/
  {
    int v17; // edi
    v17 = *((unsigned int *)a1 + 80); /*0x4d9e08*/
    if ( ((v17 & 0x100) == 0 || (v17 & 0x200) == 0 || !v18) && *a3 != -1 && *a3 != v10 ) /*0x4d9e30*/
      return 7; /*0x4d9e3b*/
    return 0; /*0x4d9e30*/
  }
  unsigned int v14 = v13 - 1; // eax /*0x4d9d44*/
  if ( !v14 ) /*0x4d9d45*/
  {
    if ( v12 <= 0 ) /*0x4d9dda*/
    {
      if ( !v5->u32_11C ) /*0x4d9df2*/
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
  int v15 = v5->u32_11B; // eax /*0x4d9d5c*/
  if ( v15 == v10 - 4 ) /*0x4d9d68*/
  {
    if ( *a3 != v10 ) /*0x4d9d6d*/
      return 7; /*0x4d9d78*/
    if ( !v18 ) /*0x4d9d81*/
      return 7; /*0x4d9d8c*/
  }
  if ( v10 != v15 - 4 ) /*0x4d9d94*/
    return 0; /*0x4d9e61*/
  int v16; // edi
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

  int v3; // eax
  IStream *v4; // ebp
  int result; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned int *v11; // edx
  int v12; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  unsigned int *v17; // edx
  int i; // edi
  int j; // edi
  unsigned int v20; // [esp+54h] [ebp-4h] BYREF
  int v21; // [esp+5Ch] [ebp+4h]
  int v22; // [esp+5Ch] [ebp+4h]

  v3 = aP0->locomotor; /*0x4db3cb*/
  if ( v3 ) /*0x4db3d3*/
    (*(void (**)(unsigned int))(*(unsigned int *)v3 + 8))(*(unsigned int *)(aP0 + 1652)); /*0x4db3d8*/
  v4 = pStm; /*0x4db3db*/
  aP0->locomotor = 0; /*0x4db3df*/
  result = BuildingClass::AllocAndCtor(aP0, (int)v4); /*0x4db3e7*/
  if ( result >= 0 ) /*0x4db3ee*/
  {
    result = (*(int (**)(IStream *, LPSTREAM *, int, unsigned int))(*(unsigned int *)v4->__pad_0 + 12))(v4, &pStm, 4, 0); /*0x4db400*/
    if ( result >= 0 ) /*0x4db405*/
    {
      v6 = aP0 + 1416; /*0x4db40b*/
      if ( aP0 != -1416 ) /*0x4db413*/
      {
        AbstractClassVector::Construct(&aP0->unknownAbstractArray588, 0, 0); /*0x4db419*/
        /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E91EC) */  /*0x4db41e*/
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
          v12 = aP0 + 1452; /*0x4db4b9*/
          if ( aP0 != -1452 ) /*0x4db4c1*/
          {
            AbstractClassVector::Construct(&aP0->FootClass_DVC_5AC, 0, 0); /*0x4db4c7*/
            /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E91EC) */  /*0x4db4cc*/
            *(unsigned int *)(aP0 + 1472) = 10; /*0x4db4d2*/
            *(unsigned int *)(aP0 + 1468) = 0; /*0x4db4d9*/
          }
          v22 = 0; /*0x4db4e0*/
          if ( (int)pStm <= 0 ) /*0x4db4e6*/
          {
LABEL_28:
            aP0->locomotor = 0; /*0x4db550*/
            ObjectClass::updateStateFlags(&aP0->locomotor); /*0x4db55a*/
            aP0->locomotor = 0; /*0x4db566*/
            OleLoadFromStream(v4, &IID_ILocomotion, &aP0->locomotor); /*0x4db568*/
            aP0->FootClass_field_5A0 = 0; /*0x4db574*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1492)); /*0x4db580*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->disguisedAsHouse); /*0x4db591*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->FootClass_field_5A4); /*0x4db5a2*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->FootClass_field_5A8); /*0x4db5b3*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->FootClass_field_5C8); /*0x4db5c4*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->FootClass_field_5CC); /*0x4db5d5*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->FootClass_field_5DC); /*0x4db5e6*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->FootClass_field_694); /*0x4db5f7*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->parasiteImUsing); /*0x4db608*/
            AudioController::Init(&aP0->audioController7); /*0x4db613*/
            aP0->FootClass_field_53C = 0; /*0x4db618*/
            aP0->FootClass_field_540 = 0; /*0x4db61e*/
            for ( i = 0; i < aP0->q5BC; ++i ) /*0x4db62e*/
              ObjectPtr::RegisterForTracking( /*0x4db63f*/
                (int)&SwizzleManagerClass_Instance,
                (int *)(aP0->q_5B0 + 4 * i));
            for ( j = 0; j < aP0->q598; ++j ) /*0x4db659*/
              ObjectPtr::RegisterForTracking( /*0x4db66a*/
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
              result = (*(int (**)(IStream *, unsigned int *, int, unsigned int))(v13 + 12))(v4, &v20, 4, 0); /*0x4db4f8*/
              if ( result < 0 ) /*0x4db4fd*/
                break; /*0x4db4fd*/
              v14 = *(unsigned int *)(aP0 + 1460); /*0x4db503*/
              if ( *(unsigned int *)(aP0 + 1468) < v14 /*0x4db525*/
                || (*(unsigned char *)(aP0 + 1465) || !v14)
                && (v15 = aP0->q5C0, v15 > 0)
                && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v12 + 8))(aP0 + 1452, v14 + v15, 0) )
              {
                v16 = *(unsigned int *)(aP0 + 1468); /*0x4db52c*/
                v17 = *(unsigned int **)(aP0 + 1456); /*0x4db52f*/
                *(unsigned int *)(aP0 + 1468) = v16 + 1; /*0x4db535*/
                v17[v16] = v20; /*0x4db53c*/
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
          result = (*(int (**)(IStream *, unsigned int *, int, unsigned int))(v7 + 12))(v4, &v20, 4, 0); /*0x4db44a*/
          if ( result < 0 ) /*0x4db44f*/
            break; /*0x4db44f*/
          v8 = *(unsigned int *)(aP0 + 1424); /*0x4db455*/
          if ( *(unsigned int *)(aP0 + 1432) < v8 /*0x4db477*/
            || (*(unsigned char *)(aP0 + 1429) || !v8)
            && (v9 = aP0->q59C, v9 > 0)
            && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v6 + 8))(aP0 + 1416, v8 + v9, 0) )
          {
            v10 = *(unsigned int *)(aP0 + 1432); /*0x4db47e*/
            v11 = *(unsigned int **)(aP0 + 1420); /*0x4db481*/
            *(unsigned int *)(aP0 + 1432) = v10 + 1; /*0x4db487*/
            v11[v10] = v20; /*0x4db48e*/
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
  int (__stdcall ***v11)(unsigned int, void *, ObjectClass **); // edi
  int v12; // edi
  IPersistStream *v13; // ebx

  v3 = (IStream *)aP1; /*0x4db696*/
  v4 = a0; /*0x4db69b*/
  SizeMax = IPersistStream::GetSizeMax((TechnoClass *)a0, (int)aP1, (int)a2); /*0x4db6a7*/
  if ( SizeMax < 0 ) /*0x4db6ab*/
    return SizeMax; /*0x4db6ab*/
  v6 = *(unsigned int *)v3->IStream_field_00; /*0x4db6b7*/
  a2 = (struct IPersistStreamVtbl *)v4[8].a2; /*0x4db6c3*/
  result = (*(int (__stdcall **)(IStream *, struct IPersistStreamVtbl **, int, unsigned int))(v6 + 16))( /*0x4db6c7*/
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
    v9 = *(unsigned int *)v3->IStream_field_00; /*0x4db701*/
    a2 = (struct IPersistStreamVtbl *)v4[8].customSound_controller[3]; /*0x4db713*/
    result = (*(int (__stdcall **)(IStream *, struct IPersistStreamVtbl **, int, unsigned int))(v9 + 16))( /*0x4db717*/
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
        result = (*(int (__stdcall **)(IStream *, int, int, unsigned int))(*(unsigned int *)v3->IStream_field_00 + 16))( /*0x4db73d*/
                   v3,
                   v4[8].customSound_controller[0] + 4 * v10,
                   4,
                   0);
        if ( result < 0 ) /*0x4db742*/
          return result; /*0x4db742*/
      }
      while ( ++v10 < (int)a2 ); /*0x4db73d*/
    }
    v11 = *(int (__stdcall ****)(unsigned int, void *, ObjectClass **))&v4[9].bombVisible; /*0x4db751*/
    aP1 = 0; /*0x4db757*/
    if ( v11 ) /*0x4db761*/
    {
      v12 = (**v11)(v11, &unk_820270, &a0); /*0x4db772*/
      if ( v12 >= 0 ) /*0x4db776*/
      {
        v13 = (IPersistStream *)a0; /*0x4db794*/
        if ( aP1 ) /*0x4db79a*/
          (*(void (__stdcall **)(LPPERSISTSTREAM))(*(unsigned int *)aP1 + 8))(aP1); /*0x4db79f*/
        aP1 = v13; /*0x4db7a2*/
      }
      else
      {
        if ( aP1 ) /*0x4db77e*/
          (*(void (__stdcall **)(LPPERSISTSTREAM))(*(unsigned int *)aP1 + 8))(aP1); /*0x4db783*/
        aP1 = 0; /*0x4db786*/
      }
      if ( v12 < 0 && v12 != -2147467262 ) /*0x4db7b0*/
        sub_7DC720(v12); /*0x4db7b3*/
    }
    OleSaveToStream(aP1, v3); /*0x4db7be*/
    SizeMax = 0; /*0x4db7c4*/
    if ( aP1 ) /*0x4db7cc*/
      (*(void (__stdcall **)(LPPERSISTSTREAM))(*(unsigned int *)aP1 + 8))(aP1); /*0x4db7d1*/
    return SizeMax; /*0x4db7d4*/
  }
  while ( 1 ) /*0x4db6ed*/
  {
    result = (*(int (__stdcall **)(IStream *, int, int, unsigned int))(*(unsigned int *)v3->IStream_field_00 + 16))( /*0x4db6ed*/
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
  __int16 *v8; // edi
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
  __int16 v34[2]; // [esp+18h] [ebp-34h] BYREF
  int v35; // [esp+1Ch] [ebp-30h]
  char v36[4]; // [esp+20h] [ebp-2Ch]
  int v37; // [esp+24h] [ebp-28h] BYREF
  unsigned int v38[2]; // [esp+28h] [ebp-24h] BYREF
  int GroundHeight; // [esp+30h] [ebp-1Ch]
  unsigned int v40[2]; // [esp+34h] [ebp-18h] BYREF
  int v41; // [esp+3Ch] [ebp-10h]
  unsigned short v42[6]; // [esp+40h] [ebp-Ch] BYREF

  v7 = v6; /*0x4de1d5*/
  v8 = (__int16 *)a3; /*0x4de1de*/
  v35 = (*(int (**)(unsigned int *, unsigned int *, int, unsigned int))(*v6 + 112))(v6, a3, a4, 0); /*0x4de1f4*/
  IsWithinUsableArea = ((LayerClass *)&DataGlobal_87F7E8)->IsWithinUsableArea( v8, 1); /*0x4de1f8*/
  v10 = *v8; /*0x4de1fd*/
  LOBYTE(a3) = IsWithinUsableArea; /*0x4de200*/
  v11 = (v8[1] << 8) + 128; /*0x4de218*/
  v38[0] = (v10 << 8) + 128; /*0x4de223*/
  v38[1] = v11; /*0x4de227*/
  GroundHeight = 0; /*0x4de22b*/
  GroundHeight = Cell::GetGroundHeight(v38); /*0x4de23e*/
  if ( (((Coord *)&DataGlobal_87F7E8)->To_Cell( v38)->flags[0] & 0x100) != 0 ) /*0x4de250*/
    GroundHeight += (int)FootClass_Array.attachedTag; /*0x4de25d*/
  if ( !*(unsigned char *)(v7->Vt34Thunk() + 3213) && (unsigned __int8)Cell::IsPassable(v38) ) /*0x4de27d*/
    goto LABEL_36; /*0x4de284*/
  v12 = *v7; /*0x4de28c*/
  *(unsigned int *)v34 = *(unsigned int *)v8; /*0x4de293*/
  v13 = (unsigned int *)(*(int (**)(unsigned int *, unsigned short *, unsigned int, int))(v12 + 76))(v7, v42, 0, a2); /*0x4de29b*/
  v14 = ((Coord *)&DataGlobal_87F7E8)->To_Cell( v13); /*0x4de2a4*/
  v15 = *v7; /*0x4de2a9*/
  v38[0] = v14; /*0x4de2ad*/
  v16 = *(unsigned int *)((*(int (**)(unsigned int *))(v15 + 132))(v7) + 1460); /*0x4de2b7*/
  if ( v16 == 6 ) /*0x4de2c0*/
  {
    v16 = 0; /*0x4de2c2*/
  }
  else if ( v16 == 9 && HouseClass::IonSensitivesShouldBeOffline() ) /*0x4de2d1*/
  {
    v16 = 7; /*0x4de2da*/
  }
  if ( v7->IsHeightAboveThreshold_0() /*0x4de333*/
    || *(unsigned char *)(v7->Vt34Thunk() + 3372)
    || v7->getAltitude() == 15
    && *(unsigned char *)(v7[432] + 3476)
    && !HouseClass::IonSensitivesShouldBeOffline()
    || (v17 = v7->getAltitude(), LOBYTE(a5) = 0, v17 == 2) )
  {
    LOBYTE(a5) = 1; /*0x4de335*/
  }
  v18 = v7->CheckHeightDiff(0); /*0x4de33f*/
  v19 = v8[1]; /*0x4de345*/
  v36[0] = v18; /*0x4de349*/
  v20 = *v8; /*0x4de34f*/
  v41 = 0; /*0x4de35b*/
  v40[1] = (v19 << 8) + 128; /*0x4de35f*/
  v40[0] = (v20 << 8) + 128; /*0x4de375*/
  v41 = Cell::GetGroundHeight(v40); /*0x4de388*/
  if ( (((Coord *)&DataGlobal_87F7E8)->To_Cell( v40)->flags[0] & 0x100) != 0 ) /*0x4de39a*/
    v41 += (int)FootClass_Array.attachedTag; /*0x4de3a7*/
  IsPassable = Cell::IsPassable(v40); /*0x4de3b5*/
  if ( (unsigned char)a4 && v35 == 2 ) /*0x4de3cb*/
  {
    if ( !*(unsigned char *)(v7->Vt34Thunk() + 3372) /*0x4de3f7*/
      || (v22 = v7->GetZAboveGround(), a3 = (unsigned int *)1, v22 >= 0) )
    {
      a3 = 0; /*0x4de3f9*/
    }
    v33 = (char)a3; /*0x4de40e*/
    a4 = 0; /*0x4de41b*/
    v31 = BYTE1(*((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v8) + 80)) & 1; /*0x4de439*/
    v29 = *(unsigned int *)(v7->Vt34Thunk() + 1660); /*0x4de44d*/
    v24 = (void **)LayerClass::Pathfinding_Find( /*0x4de450*/
                     &DataGlobal_87F7E8,
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
                     (__int16 *)&a4,
                     0,
                     0);
    goto LABEL_32; /*0x4de450*/
  }
  if ( !(unsigned char)a3 /*0x4de4b4*/
    || IsPassable
    || !(unsigned char)a4
    && (!*(unsigned char *)(v7->Vt34Thunk() + 3284) || v35 == 2)
    && (v25 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v8),
        !MapSeed::CheckTileMatch(
           (MapSeed *)&DataGlobal_87F7E8,
           (__int16 *)(v37 + 36),
           v34,
           v16,
           v36[0],
           (((v25[80]) >> 8) & 0xFF) & 1,
           0)) )
  {
    a4 = 0; /*0x4de4d7*/
    v32 = BYTE1(*((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v8) + 80)) & 1; /*0x4de4fc*/
    TileIndex = ((MapClass *)&DataGlobal_87F7E8)->GetTileIndex( (__int16 *)(v37 + 36), v16, v36[0]); /*0x4de50b*/
    v26 = v7->Vt34Thunk(); /*0x4de510*/
    v24 = (void **)LayerClass::Pathfinding_Find( /*0x4de528*/
                     &DataGlobal_87F7E8,
                     (int)&a3,
                     &a3,
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
                     (__int16 *)&a4,
                     0,
                     0);
LABEL_32:
    v27 = *v24; /*0x4de52d*/
    *(unsigned int *)v34 = v27; /*0x4de52f*/
    goto LABEL_34; /*0x4de533*/
  }
  v27 = *(void **)v34; /*0x4de535*/
LABEL_34:
  if ( ((v34[1] & 0xFFFFu) << 16 | ((unsigned __int16)v27 & 0xFFFFu)) != g_FootClass_Pool ) /*0x4de541*/
  {
    this->ptr_0 = v27; /*0x4de558*/
    return &this->ptr_0; /*0x4de55f*/
  }
LABEL_36:
  this->ptr_0 = (void *)g_FootClass_Pool; /*0x4de562*/
  return &this->ptr_0; /*0x4de555*/

}
} // namespace ra2

// 0x4DE620
namespace gamemd {
int ObjectClass::ObjectClass_IsHeightAboveThreshold_0()
{
  return ObjectClass::IsHeightAboveThreshold();
}
}
// 0x513F40
namespace gamemd {
AbstractClass * * ObjectClass::BuildTransform(unsigned int * a1, float * a2, unsigned int * a3)
{

  double v3; // st4
  double v4; // st5
  double v5; // st6
  int ptr_8; // ecx
  unsigned int *v7; // ecx
  int v8; // ebp
  float *v10; // eax
  long double v11; // st7
  float *v12; // edx
  float *v13; // eax
  float *v14; // ecx
  unsigned __int16 *v15; // eax
  int v16; // eax
  unsigned __int16 *v17; // eax
  unsigned __int16 *v18; // esi
  int v19; // eax
  unsigned __int16 *v20; // eax
  float *v21; // ecx
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

  ptr_8 = this->ptr_8; /*0x513f50*/
  if ( fabs(*(float *)(ptr_8 + 808)) >= 0.005 || fabs(*(float *)(ptr_8 + 812)) >= 0.005 ) /*0x513f7f*/
  {
    if ( a3 ) /*0x5140a0*/
      *a3 = -1; /*0x5140a2*/
    Matrix3x4::Identity(&v39); /*0x5140af*/
    Matrix3x4::Identity(&v37); /*0x5140b8*/
    v11 = *(double *)((*(int (**)(int))(*(unsigned int *)this->ptr_8 + 132))(this->ptr_8) + 864); /*0x5140cb*/
    v29 = v11; /*0x5140d3*/
    v31 = *(double *)((*(int (**)(int))(*(unsigned int *)this->ptr_8 + 132))(this->ptr_8) + 872); /*0x5140e9*/
    Math::ArcTan2(*(float *)&this->ptr_8->__pad_32C); /*0x5140f6*/
    v12 = (float *)this->ptr_8; /*0x5140fb*/
    v35 = v3; /*0x5140fe*/
    Math::SinCos(v12[203]); /*0x51410b*/
    v13 = (float *)this->ptr_8; /*0x514110*/
    *(float *)&v34 = v4; /*0x514113*/
    Math::ArcTan2(v13[202]); /*0x514120*/
    v14 = (float *)this->ptr_8; /*0x514125*/
    v33 = v5; /*0x514128*/
    Math::SinCos(v14[202]); /*0x514135*/
    LOWORD(v15) = Math::RoundToInt(fabs(v11) * v29 + fabs(*(float *)&v34) * v31); /*0x51414f*/
    v34 = (int)v15; /*0x51415c*/
    (v16) = ((v16) & ~0xFFFF) | ((Math::RoundToInt(v35 * v31)) & 0xFFFF); /*0x514160*/
    v35 = *(float *)&v16; /*0x514165*/
    LOWORD(v17) = Math::RoundToInt(v31 - (double)v16); /*0x514171*/
    v18 = v17; /*0x51417e*/
    v32 = (int)v17; /*0x514180*/
    (v19) = ((v19) & ~0xFFFF) | ((Math::RoundToInt(v33 * v29)) & 0xFFFF); /*0x514184*/
    v33 = *(float *)&v19; /*0x514189*/
    LOWORD(v20) = Math::RoundToInt(v29 - (double)v19); /*0x514195*/
    v21 = (float *)this->ptr_8; /*0x51419a*/
    v30 = (int)v20; /*0x51419f*/
    if ( v21[203] < 0.0 ) /*0x5141b4*/
      v32 = -(int)v18; /*0x5141b8*/
    if ( v21[202] > 0.0 ) /*0x5141cd*/
      v30 = -(int)v20; /*0x5141d1*/
    v26 = (float)v34; /*0x5141e1*/
    Matrix3x3::ApplyCol1(v39.m_Data, v26); /*0x5141e4*/
    v27 = (float)v32; /*0x5141f2*/
    Matrix3x4::Translate(v37.m_Data, v27); /*0x5141f5*/
    v28 = (float)v30; /*0x514203*/
    Matrix3x3::ApplyCol0(v37.m_Data, v28); /*0x514206*/
    Matrix3x3::RotateX(v37.m_Data, *(float *)&this->ptr_8->q328); /*0x514219*/
    Matrix3D::RotateZ(v37.m_Data, *(float *)&this->ptr_8->__pad_32C); /*0x51422c*/
    Transform = Turret::GetTransform((LocomotionClass *)this, v40, a3); /*0x51423b*/
    Transform::Copy(v38, Transform); /*0x514245*/
    v23 = MultiplyMatrix3x4(v41, (float *)v39.m_Data, (float *)&v38[0].Transform_field_00); /*0x514262*/
    v10 = MultiplyMatrix3x4(v42, v23, (float *)v37.m_Data); /*0x514270*/
    goto LABEL_16; /*0x514270*/
  }
  if ( this->COMStub_Return0_96() ) /*0x513f88*/  // X133 W3: slot 96 converted
  {
    v10 = Turret::GetTransform((LocomotionClass *)this, (float *)&v38[0].Transform_field_00, a3); /*0x51408d*/
LABEL_16:
    v24 = v10; /*0x514275*/
    memcpy(a2, v24, 0x30u); /*0x514285*/
    return a2; /*0x514277*/
  }
  v7 = (unsigned int *)&this->ptr_8->Coord_9C; /*0x513f97*/
  v36[0] = *v7; /*0x513f9f*/
  v36[1] = v7[1]; /*0x513fab*/
  v36[2] = v7[2]; /*0x513fb2*/
  v8 = (unsigned __int8)((Coord *)&dword_87F7E8)->To_Cell( v36)->slopeIndex[0]; /*0x513fc8*/
  memcpy(&v37, CopyAudioData((char *)v38, v8), sizeof(v37)); /*0x513fe4*/
  v25 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue(&this->ptr_8, &v33) >> 10) + 1) >> 1) /*0x514016*/
                     & 0x1F)
                    - 8)
      * -0.1963495408493621;
  Matrix2D::Rotate(v37.m_Data, v25); /*0x514019*/
  if ( a3 ) /*0x514027*/
  {
    if ( *a3 != -1 ) /*0x51402e*/
    {
      *a3 = 32 * (v8 + (*a3 << 6)); /*0x51403c*/
      *a3 |= ((unsigned int)((*ProgressTimer::GetValue(&this->ptr_8, &v33) >> 10) + 1) >> 1) /*0x51405c*/
           & 0x1F;
    }
  }
  memcpy(a2, &v37, 0x30u); /*0x514070*/
  return a2; /*0x514073*/

}
} // namespace ra2

// 0x5228B0
namespace gamemd {
int ObjectClass::ObjectClass_GetTypeVt40_0()
{
  return TechnoClass::GetTypeVt40();
}
}
// 0x5228C0
namespace gamemd {
int ObjectClass::ObjectClass_GetTypeVt41_0()
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
  this->AbstractClass_1 = 0x80; /*0x556a2b*/
  this->ptr_2 = 0x80; /*0x556a2e*/
  this->ptr_4 = 0; /*0x556a31*/
  this->ptr_8 = 16; /*0x556a34*/
  this->ptr_C = 0; /*0x556a3b*/
  v2 = &this->referenceCount; /*0x556a3e*/
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
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_ABCB78 + 8))(
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
  attachedBomb = (ObjectClass *)this->attachedBomb; /*0x5f3b84*/
  /* X11: ptr_0 install elided (implicit via ObjectClass virtuals 0x5f3b87) */
  /* X11: ptr_0 install elided (implicit via ObjectClass virtuals 0x5f3b8f) */
  /* X11: ptr_0 install elided (implicit via ObjectClass virtuals 0x5f3b96) */
  /* X11: ptr_0 install elided (implicit via ObjectClass virtuals 0x5f3b9d) */
  if ( attachedBomb ) /*0x5f3ba4*/
    ObjectClass::CleanupAudioAndRefs(attachedBomb); /*0x5f3ba6*/
  ObjectClass *v10; // [esp+10h] [ebp-4h] BYREF
  v10 = this; /*0x5f3bbb*/
  int v3; // eax
  v3 = (*(int (**)(DynamicVectorClass *, ObjectClass **))(stru_B0F698.ptr_0 + 16))(&stru_B0F698, &v10); /*0x5f3bbf*/
  if ( v3 != -1 && v3 < stru_B0F698.Count ) /*0x5f3bcf*/
  {
    --stru_B0F698.Count; /*0x5f3bd4*/
    for ( ; v3 < stru_B0F698.Count; *(unsigned int *)(stru_B0F698.Items + 4 * v3 - 4) = *(unsigned int *)(stru_B0F698.Items + 4 * v3) ) /*0x5f3bda*/
      ++v3; /*0x5f3be2*/
  }
  v10 = this; /*0x5f3c04*/
  int v4; // eax
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
  int v5; // eax
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
  int v6; // eax
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
  int v7; // eax
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
  AudioController::Stop((AudioController *)this->ambientSoundController); /*0x5f3d2d*/
  AudioController::Stop((AudioController *)this->customSound_controller); /*0x5f3d37*/
  AudioFileClass::Release((AudioFileClass *)this->ambientSoundController); /*0x5f3d3e*/
  AudioFileClass::Release((AudioFileClass *)this->customSound_controller); /*0x5f3d45*/
  TacticalClass *lineTrailer; // ecx
  lineTrailer = (TacticalClass *)this->lineTrailer; /*0x5f3d4a*/
  if ( lineTrailer ) /*0x5f3d54*/
  {
    TacticalClass::GetField(lineTrailer); /*0x5f3d56*/
    this->lineTrailer = 0; /*0x5f3d5b*/
  }
  if ( this->isInLogic[0] ) /*0x5f3d65*/
    VectorClass::RemoveItem((DynamicVectorClass *)&g_LogicClass, (int)this); /*0x5f3d75*/
  return AbstractClass::DTOR(this); /*0x5f3d81*/

}
} // namespace ra2

// 0x5F4160
namespace gamemd {
int ObjectClass::DropAsBomb_Track()
{


  int v2 = this->field_0; // eax /*0x5f4168*/
  this->isFallingDown = 1; /*0x5f416a*/
  this->isBomb = 1; /*0x5f4171*/
  (*(void (**)(unsigned int))(v2 + 292))(0); /*0x5f4178*/
  RemoveTarget((int)this); /*0x5f4184*/
  this->onBridge = 0; /*0x5f418f*/
  Targeting::Readd(this); /*0x5f4196*/
  int result; // eax
  result = (*(int (**)(IUnknown *, int))(this->field_0 + 292))(this, 1); /*0x5f41a1*/
  if ( this ) /*0x5f41a9*/
  {
    (result) = ((result) & ~0xFF) | (((this->abstractFlags & 4) != 0) & 0xFF); /*0x5f41b5*/
    if ( (this->abstractFlags & 4) != 0 ) /*0x5f41bb*/
    {
      if ( !*&this->u32_674 ) /*0x5f41bd*/
        sub_7DC720(-2147467261); /*0x5f41cc*/
      if ( (*(unsigned __int8 (**)(unsigned int))(**&this->u32_674 + 16))(*&this->u32_674) ) /*0x5f41da*/
      {
        if ( !*&this->u32_674 ) /*0x5f4213*/
          sub_7DC720(-2147467261); /*0x5f4222*/
        return (*(int (**)(unsigned int, unsigned int))(**&this->u32_674 + 156))( /*0x5f4232*/
                 *&this->u32_674,
                 0);
      }
      else
      {
        unsigned int v5[3]; // [esp+Ch] [ebp-Ch] BYREF
        v5[0] = this->field_9C; /*0x5f41ed*/
        int v4 = this->field_0; // eax /*0x5f41f1*/
        v5[1] = *(unsigned int *)this->isOnMap; /*0x5f41f6*/
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
int ObjectClass::GetBoundsRect(int a1)
{

  unsigned int *v2; // eax
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
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v2, v31); /*0x5f4894*/
  v3 = (*(int (**)(IUnknown *))(this->field_0 + 136))(this); /*0x5f489d*/
  v4 = (__int16 *)(*(int (**)(int))(*(unsigned int *)v3 + 156))(v3); /*0x5f48ad*/
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
  __int16 *v3; // ecx
  int v4; // edi
  int result; // eax
  int v6; // [esp+10h] [ebp-20h] BYREF
  int v7; // [esp+14h] [ebp-1Ch]
  unsigned int v8[3]; // [esp+18h] [ebp-18h] BYREF
  unsigned char v9[12]; // [esp+24h] [ebp-Ch] BYREF

  if ( !stru_A8E960.nextScenario[64] || this->inLimbo[0] ) /*0x5f4d45*/
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x5f4eb7*/
  }
  else
  {
    this->vt_slot_336(this); /*0x5f4d55*/
    this->vt_slot_220(this, 1); /*0x5f4d61*/
    this->vt_slot_292(this, 0); /*0x5f4d6d*/
    RemoveTarget((int)this); /*0x5f4d79*/
    AudioController::Stop((AudioController *)this->ambientSoundController); /*0x5f4d81*/
    AudioFile::Stop((AudioFile *)this->customSound_controller); /*0x5f4d89*/
    if ( (*(int (**)(ObjectClass *))&this->ptr_0->parachute)(this) /*0x5f4dcb*/
      && *(unsigned char *)((*(int (**)(ObjectClass *))&this->ptr_0->parachute)(this) + 564)
      && (!*(unsigned int *)&dword_A8B238
       || *(unsigned int *)&dword_A8B238 == 5
       || (*(int (**)(int *))&this->ptr_4->uniqueId)(&this->ptr_4) != -2) )
    {
      VectorClass::RemoveItem((DynamicVectorClass *)&g_LogicClass, (int)this); /*0x5f4dd3*/
    }
    if ( (*(int (**)(ObjectClass *))&this->ptr_0->parachute)(this) ) /*0x5f4ddc*/
    {
      if ( *(unsigned int *)((*(int (**)(ObjectClass *))&this->ptr_0->parachute)(this) + 172) ) /*0x5f4df4*/
      {
        v2 = (unsigned int *)(*(int (**)(ObjectClass *, unsigned char *))&this->ptr_0->q048)(this, v9); /*0x5f4e0b*/
        v8[0] = *v2; /*0x5f4e10*/
        v8[1] = v2[1]; /*0x5f4e22*/
        v8[2] = v2[2]; /*0x5f4e2e*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, v8, &v6); /*0x5f4e32*/
        v3 = *(__int16 **)((*(int (**)(ObjectClass *))&this->ptr_0->parachute)(this) + 172); /*0x5f4e41*/
        v4 = v7 - v3[2] / 2; /*0x5f4e6c*/
        v6 -= v3[1] / 2; /*0x5f4e70*/
        v7 = v4; /*0x5f4e74*/
        Cell::CreateCrater(v6, v4, v3[1], v3[2], 1); /*0x5f4e8f*/
      }
    }
    result = (*(int (**)(ObjectClass *))&this->ptr_0->transporter_2)(this); /*0x5f4e98*/
    this->inLimbo[0] = 1; /*0x5f4e9e*/
    this->needsRedraw[0] = 0; /*0x5f4ea5*/
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x5f4eac*/
  }
  return result; /*0x5f4eae*/

}
} // namespace ra2

// 0x5F4EC0
namespace gamemd {
AbstractClass * * ObjectClass::Deploy(int a1, int a2)
{

  int result; // eax
  int ptr_0; // ebx
  CellClass *v4; // eax
  int v5; // eax
  int v6; // ebx
  int *v7; // eax
  unsigned int *v8; // eax
  int v9; // edx
  int v10; // eax
  __int16 *v11; // edi
  int v12; // ebp
  int v13; // eax
  char *v14; // eax
  unsigned __int8 *v15; // eax
  int lineTrailer; // edx
  unsigned __int8 v17; // cl
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
  if ( !stru_A8E960.nextScenario[64] ) /*0x5f4efc*/
    goto LABEL_41; /*0x5f4efc*/
  if ( !this->inLimbo[0] ) /*0x5f4f02*/
    goto LABEL_41; /*0x5f4f02*/
  if ( this->isOnMap[0] ) /*0x5f4f10*/
    goto LABEL_41; /*0x5f4f10*/
  if ( !dword_A8E7AC ) /*0x5f4f22*/
  {
    ptr_0 = this->ptr_0; /*0x5f4f24*/
    v4 = ((Coord *)&dword_87F7E8)->To_Cell( v27); /*0x5f4f34*/
    result = (*(int (**)(ObjectClass *, CellClass *, int, int, unsigned int, unsigned int))(ptr_0 + 428))( /*0x5f4f3c*/
               this,
               v4,
               -1,
               -1,
               0,
               0);
    if ( result ) /*0x5f4f44*/
      goto LABEL_41; /*0x5f4f44*/
  }
  v5 = this->ptr_0; /*0x5f4f4a*/
  this->inLimbo[0] = 0; /*0x5f4f4e*/
  this->needsRedraw[0] = 0; /*0x5f4f55*/
  v6 = (*(int (**)(ObjectClass *))(v5 + 136))(this); /*0x5f4f64*/
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
  this->vt_slot_436(this, &v22); /*0x5f4fa8*/
  result = this->vt_slot_292(this, 1); /*0x5f4fb4*/
  if ( !(unsigned char)result ) /*0x5f4fbc*/
  {
    this->inLimbo[0] = 1; /*0x5f521c*/
LABEL_41:
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x5f5223*/
    return result; /*0x5f5226*/
  }
  if ( this->isAliveFlag[0] )
  {
    if ( this->getCoordCenter2() != -1 ) /*0x5f4fda*/  // X133 W3: slot 120 converted
      Targeting::Readd(this); /*0x5f4fe2*/
    if ( v6 ) /*0x5f4fe9*/
    {
      if ( *(unsigned char *)(v6 + 564) /*0x5f5036*/
        && ((*(int (**)(ObjectClass *))&this->ptr_0->fallRate)(this) != 36
         || (*(int (**)(ObjectClass *))&this->ptr_0->fallRate)(this) == 36 && *(unsigned char *)(v6 + 689))
        && (!*(unsigned int *)&dword_A8B238
         || *(unsigned int *)&dword_A8B238 == 5
         || (*(int (**)(int *))&this->ptr_4->uniqueId)(&this->ptr_4) != -2) )
      {
        ObjectClass::SetDeployState((LogicClass *)this, 0); /*0x5f5040*/
      }
      if ( *(unsigned int *)(v6 + 172) ) /*0x5f5045*/
      {
        v8 = (unsigned int *)this->vt_slot_72(this, v26); /*0x5f505c*/
        v25[0] = *v8; /*0x5f5061*/
        v25[1] = v8[1]; /*0x5f5073*/
        v25[2] = v8[2]; /*0x5f507f*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, v25, &v20); /*0x5f5083*/
        v9 = *(unsigned int *)&g_TacticalClass_Instance[45] + v21; /*0x5f50a1*/
        v10 = this->ptr_0; /*0x5f50a3*/
        v20 += *(unsigned int *)&g_TacticalClass_Instance[44]; /*0x5f50a9*/
        v21 = v9; /*0x5f50ad*/
        v11 = *(__int16 **)((*(int (**)(ObjectClass *))(v10 + 136))(this) + 172); /*0x5f50b7*/
        v12 = v21 - v11[2] / 2; /*0x5f50dd*/
        v20 -= v11[1] / 2; /*0x5f50df*/
        v21 = v12; /*0x5f50e3*/
        v13 = __2_YAPAXI_Z(0x40u); /*0x5f50e7*/
        if ( v13 ) /*0x5f50f1*/
          AlphaShapeClass::CTOR(v13, (int)this, v20, v21); /*0x5f5100*/
        if ( !dword_A8E7AC ) /*0x5f510c*/
          Cell::CreateCrater( /*0x5f5146*/
            v20 - *(unsigned int *)&g_TacticalClass_Instance[44],
            v21 - *(unsigned int *)&g_TacticalClass_Instance[45],
            v11[1],
            v11[2],
            1);
      }
    }
    result = (*(int (**)(ObjectClass *))&this->ptr_0->parachute)(this); /*0x5f514f*/
    if ( result->u8_23A )
    {
      v14 = (char *)__2_YAPAXI_Z(0x210u); /*0x5f5168*/
      result = v14 ? (int)ObjectClass::checkLimbo(v14) : 0;
      this->lineTrailer = result; /*0x5f5181*/
      if ( result ) /*0x5f5187*/
      {
        v28 = *(unsigned short *)((char *)&dword_8871E0[1].DetailMinFrameRateNormal + 3); /*0x5f519e*/
        if ( (unsigned char)v28 || __PAIR16__((((v28) >> 8) & 0xFF), 0) != BYTE1(dword_8871E0[1].DetailMinFrameRateMovie) ) /*0x5f51b4*/
        {
          v18 = BYTE1(dword_8871E0[1].DetailMinFrameRateMovie); /*0x5f51e2*/
          *(unsigned short *)result = *(unsigned short *)((char *)&dword_8871E0[1].DetailMinFrameRateNormal + 3); /*0x5f51e5*/
          result->ptr_2 = v18; /*0x5f51e8*/
        }
        else
        {
          v15 = (unsigned __int8 *)(*(int (**)(ObjectClass *))&this->ptr_0->parachute)(this); /*0x5f51be*/
          lineTrailer = this->lineTrailer; /*0x5f51c4*/
          v17 = v15[573]; /*0x5f51d4*/
          *(unsigned short *)lineTrailer = *(unsigned short *)(v15 + 571); /*0x5f51d7*/
          lineTrailer->ptr_2 = v17; /*0x5f51da*/
        }
        v19 = (*(int (**)(ObjectClass *))&this->ptr_0->parachute)(this); /*0x5f51ef*/
        result = ObjectClass::updateMissionState((ObjectClass *)this->lineTrailer, *(unsigned int *)(v19 + 576)); /*0x5f5202*/
        *(unsigned int *)(this->lineTrailer + 4) = this; /*0x5f520d*/
      }
    }
  }
  (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x5f5210*/
  return result; /*0x5f5212*/

}
} // namespace ra2

// 0x5F5280
namespace gamemd {
AbstractClass * * ObjectClass::Destroy2(int a1)
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
  v3 = (House *)(*((int (**)(ObjectClass *))this->AbstractClass + 15))(this); /*0x5f52a6*/
  v4 = 0; /*0x5f52ac*/
  if ( v7 ) /*0x5f52b0*/
    goto LABEL_10; /*0x5f52b0*/
  if ( this && (this->nextArrayIndex & 1) != 0 ) /*0x5f52c0*/
    v4 = (*((unsigned __int8 (**)(ObjectClass *))this->AbstractClass + 202))(this) != 0; /*0x5f52d0*/
  if ( !v3 || !(unsigned __int8)House::IsHumanPlayer(v3) && !v4 ) /*0x5f52e3*/
    LABEL_10:
  (*((void (**)(ObjectClass *))this->AbstractClass + 84))(this); /*0x5f52e9*/
  if ( (ObjectClass *)MapClass::GetScrollMode((MapClass *)&DataGlobal_87F7E8) == this ) /*0x5f52fd*/
    MapClass::SetScrollMode((int)&DataGlobal_87F7E8, 0); /*0x5f5306*/
  (v5) = ((v5) & ~0xFF) | ((v7) & 0xFF); /*0x5f530b*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, v5); /*0x5f5311*/
  return result; /*0x5f5316*/

}
} // namespace ra2

// 0x5F5850
namespace gamemd {
int ObjectClass::UpdateProductionDisplay(int a1)
{

  int result; // eax

  if ( !this->inLimbo[0] ) /*0x5f5854*/
  {
    int v3; // ebx
    int v6; // [esp+Ch] [ebp+4h] BYREF
    v3 = v6; /*0x5f5862*/
    if ( v6 == 2 ) /*0x5f5869*/
    {
      if ( !this->needsRedraw[0] && this->isOnMap[0] ) /*0x5f5879*/
      {
        result = (*(int (**)(TechnoClass *))(this->ptr_0 + 308))(this); /*0x5f5886*/
        (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x5f588d*/
        return result; /*0x5f5890*/
      }
    }
    else
    {
      if ( (*(int (**)(TechnoClass *))(this->ptr_0 + 44))(this) != 6 /*0x5f58b2*/
        || (result = this->field_520, !result->u32_E58)
        || v3 )
      {
        result = (int)AbstractClass::IsTechnoType(this); /*0x5f58b6*/
        int v4 = result; // edi /*0x5f58bb*/
        if ( result ) /*0x5f58bf*/
        {
          (*(void (**)(int))(*(unsigned int *)result + 704))(result); /*0x5f58c5*/
          (*(void (**)(int))(*(unsigned int *)v4 + 56))(v4); /*0x5f58cf*/
          result = (*(int (**)(TechnoClass *, int *))(this->ptr_0 + 440))(this, &v6); /*0x5f58db*/
        }
      }
      if ( (v3 == 1 || v3 == 3) && !this->isOnMap[0] ) /*0x5f58ec*/
      {
        int ptr_0; // edx
        ptr_0 = this->ptr_0; /*0x5f58f3*/
        this->isOnMap[0] = 1; /*0x5f58f7*/
        result = (*(int (**)(TechnoClass *))(ptr_0 + 308))(this); /*0x5f58fb*/
        (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x5f5902*/
        return result; /*0x5f5905*/
      }
      if ( !v3 && this->isOnMap[0] ) /*0x5f590c*/
      {
        this->isOnMap[0] = 0; /*0x5f5913*/
        (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x5f5917*/
        return result; /*0x5f591a*/
      }
    }
  }
  (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x5f591e*/
  return result; /*0x5f588c*/

}
} // namespace ra2

// 0x5F6BD0
namespace gamemd {
int ObjectClass::GetBoundingSize()
{


  int v2; // edi
  unsigned char v4[12]; // [esp+8h] [ebp-18h] BYREF
  v2 = (*((int (**)(ObjectClass *, unsigned char *))this->AbstractClass + 43))(this, v4); /*0x5f6be8*/
  unsigned char v5[12]; // [esp+14h] [ebp-Ch] BYREF
  return *(unsigned int *)(*((int (**)(ObjectClass *, unsigned char *))this->AbstractClass + 43))(this, v5) /*0x5f6bfe*/
  + v2->ptr_4;

}
} // namespace ra2

// 0x652E50
namespace gamemd {
int ObjectClass::resetObjectState(SidebarClass * aP1)
{

  void (**ptr_0)(GadgetClass *); // eax

  ptr_0 = (void (**)(GadgetClass *))this->AbstractClass; /*0x652e5e*/
  if ( aP1 ) /*0x652e60*/
  {
    ptr_0[12](&stru_B04978); /*0x652e62*/
    return (*((int (**)(ObjectClass *, GadgetClass *))this->AbstractClass + 12))(this, &stru_B04910); /*0x652e6e*/
  }
  else
  {
    ptr_0[13](&stru_B04978); /*0x652e75*/
    return (*((int (**)(ObjectClass *, GadgetClass *))this->AbstractClass + 13))(this, &stru_B04910); /*0x652e81*/
  }

}
} // namespace ra2

// 0x6A5BF0
namespace gamemd {
ConvertClass * * ObjectClass::CleanupSidebarResources()
{

  PowerClass *v2; // [esp+0h] [ebp-8h]
  PowerClass::checkLowPower(v2); /*0x6a5bf2*/
  if ( byte_B0B488 ) /*0x6a5c00*/
  {
    operator delete((void *)(dword_B0B468)); /*0x6a5c08*/
    byte_B0B488 = 0; /*0x6a5c10*/
  }
  if ( byte_B0B489 ) /*0x6a5c1c*/
  {
    operator delete((void *)(dword_B0B46C)); /*0x6a5c25*/
    byte_B0B489 = 0; /*0x6a5c2d*/
  }
  if ( byte_B0B48A ) /*0x6a5c39*/
  {
    operator delete((void *)(dword_B0B470)); /*0x6a5c42*/
    byte_B0B48A = 0; /*0x6a5c4a*/
  }
  if ( byte_B0B48B ) /*0x6a5c56*/
  {
    operator delete((void *)(dword_B0B474)); /*0x6a5c5e*/
    byte_B0B48B = 0; /*0x6a5c66*/
  }
  if ( byte_B0B48C ) /*0x6a5c72*/
  {
    operator delete((void *)(dword_B0B478)); /*0x6a5c7b*/
    byte_B0B48C = 0; /*0x6a5c83*/
  }
  if ( byte_B0B48D ) /*0x6a5c8f*/
  {
    operator delete((void *)(dword_B0B47C)); /*0x6a5c98*/
    byte_B0B48D = 0; /*0x6a5ca0*/
  }
  if ( byte_B0B48E ) /*0x6a5cac*/
  {
    operator delete((void *)(dword_B0B480)); /*0x6a5cb4*/
    byte_B0B48E = 0; /*0x6a5cbc*/
  }
  if ( byte_B0B48F ) /*0x6a5cc8*/
  {
    operator delete((void *)(dword_B0B484)); /*0x6a5cd1*/
    byte_B0B48F = 0; /*0x6a5cd9*/
  }
  if ( byte_B0B4CC ) /*0x6a5ce5*/
  {
    operator delete((void *)(dword_B0B490)); /*0x6a5cee*/
    byte_B0B4CC = 0; /*0x6a5cf6*/
  }
  if ( byte_B0B4CD ) /*0x6a5d02*/
  {
    operator delete((void *)(dword_B0B494)); /*0x6a5d0a*/
    byte_B0B4CD = 0; /*0x6a5d12*/
  }
  if ( byte_B0B4CE ) /*0x6a5d1e*/
  {
    operator delete((void *)(dword_B0B498)); /*0x6a5d27*/
    byte_B0B4CE = 0; /*0x6a5d2f*/
  }
  if ( byte_B0B4CF ) /*0x6a5d3b*/
  {
    operator delete((void *)(dword_B0B49C)); /*0x6a5d44*/
    byte_B0B4CF = 0; /*0x6a5d4c*/
  }
  if ( byte_B0B4D1 ) /*0x6a5d58*/
  {
    operator delete((void *)(dword_B0B4A4)); /*0x6a5d60*/
    byte_B0B4D1 = 0; /*0x6a5d68*/
  }
  if ( byte_B0B4D2 ) /*0x6a5d74*/
  {
    operator delete((void *)(dword_B0B4A8)); /*0x6a5d7d*/
    byte_B0B4D2 = 0; /*0x6a5d85*/
  }
  if ( byte_B0B4D3 ) /*0x6a5d91*/
  {
    operator delete((void *)(dword_B0B4AC)); /*0x6a5d9a*/
    byte_B0B4D3 = 0; /*0x6a5da2*/
  }
  if ( byte_B0B4D4 ) /*0x6a5dae*/
  {
    operator delete((void *)(dword_B0B4B0)); /*0x6a5db6*/
    byte_B0B4D4 = 0; /*0x6a5dbe*/
  }
  if ( byte_B0B4D5 ) /*0x6a5dca*/
  {
    operator delete((void *)(dword_B0B4B4)); /*0x6a5dd3*/
    byte_B0B4D5 = 0; /*0x6a5ddb*/
  }
  if ( byte_B0B4D6 ) /*0x6a5de7*/
  {
    operator delete((void *)(dword_B0B4B8)); /*0x6a5df0*/
    byte_B0B4D6 = 0; /*0x6a5df8*/
  }
  if ( byte_B0B4D7 ) /*0x6a5e04*/
  {
    operator delete((void *)(dword_B0B4BC)); /*0x6a5e0c*/
    byte_B0B4D7 = 0; /*0x6a5e14*/
  }
  if ( byte_B0B4D8 ) /*0x6a5e20*/
  {
    operator delete((void *)(dword_B0B4C0)); /*0x6a5e29*/
    byte_B0B4D8 = 0; /*0x6a5e31*/
  }
  if ( byte_B0B4D9 ) /*0x6a5e3d*/
  {
    operator delete((void *)(dword_B0B4C4)); /*0x6a5e46*/
    byte_B0B4D9 = 0; /*0x6a5e4e*/
  }
  if ( byte_B0B4D0 ) /*0x6a5e5a*/
  {
    operator delete((void *)(dword_B0B4A0)); /*0x6a5e62*/
    byte_B0B4D0 = 0; /*0x6a5e6a*/
  }
  if ( byte_B0B4DA ) /*0x6a5e76*/
  {
    operator delete((void *)(dword_B0B4C8)); /*0x6a5e7f*/
    byte_B0B4DA = 0; /*0x6a5e87*/
  }
  ScenarioClass::FreeConfig((ScenarioClass *)&stru_B07DF8); /*0x6a5e92*/
  ScenarioClass::FreeConfig((ScenarioClass *)&stru_B0B3A0); /*0x6a5e9c*/
  ScenarioClass *v1; // esi
  v1 = (ScenarioClass *)&stru_B07C48; /*0x6a5ea1*/
  do /*0x6a5eb6*/
  {
    ScenarioClass::FreeConfig(v1); /*0x6a5ea8*/
    v1 = &v1->q060; /*0x6a5ead*/
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

  unsigned __int8 *v6; // ecx
  unsigned __int8 *v7; // esi
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
  result = v6[21413]; /*0x6a7d79*/
  if ( (dword_A8D5F8 & 2) != 0 && *(unsigned int *)&dword_A8B238 && *(unsigned int *)&dword_A8B238 != 5 ) /*0x6a7d91*/
    return result; /*0x6a7d91*/
  if ( this == (SidebarClass *)-1 ) /*0x6a7d9e*/
    v6[21413] = result == 0; /*0x6a7db3*/
  else
    v6[21413] = this == 1; /*0x6a7da6*/
  v9 = v6[21413]; /*0x6a7db9*/
  v10 = v9 != result; /*0x6a7dc2*/
  if ( v9 == result ) /*0x6a7dcb*/
    return v10; /*0x6a8078*/
  ObjectClass::resetObjectState((ObjectClass *)v7, v9); /*0x6a7dd6*/
  if ( !v7[21413] ) /*0x6a7de3*/
  {
    AsyncIO::Shutdown((AsyncIO *)a4); /*0x6a7fc3*/
    (*(void (**)(unsigned __int8 *, ShapeButtonClass *, int, int, int))(*(unsigned int *)v7 + 52))( /*0x6a7fd1*/
      v7,
      &stru_B07DF8,
      v21,
      a3,
      a2);
    (*(void (**)(unsigned __int8 *, ShapeButtonClass *))(*(unsigned int *)v7 + 52))(v7, &stru_B0B3A0); /*0x6a7fdd*/
    (*(void (**)(unsigned __int8 *, GadgetClass *))(*(unsigned int *)v7 + 52))(v7, &stru_B07E58); /*0x6a7fe9*/
    v18 = &stru_B07C48; /*0x6a7fec*/
    do /*0x6a8002*/
    {
      (*(void (**)(unsigned __int8 *, ShapeButtonClass *))(*(unsigned int *)v7 + 52))(v7, v18); /*0x6a7ff6*/
      v18 += 8; /*0x6a7ff9*/
    }
    while ( (int)v18 < (int)&dword_B07DC8 ); /*0x6a8002*/
    (*(void (**)(unsigned __int8 *, ShapeButtonClass *))(*(unsigned int *)v7 + 52))(v7, &stru_B0B328); /*0x6a800d*/
    (*(void (**)(unsigned __int8 *, ShapeButtonClass *))(*(unsigned int *)v7 + 52))(v7, &g_SidebarFlag); /*0x6a8019*/
    v19 = 0; /*0x6a8029*/
    v20 = (int)&v7[3988 * v7->u32_539C + 5444]; /*0x6a8031*/
    do /*0x6a805f*/
    {
      Tactical::SelectObject((GScreenClass *)&dword_87F7E8, 56 * (v19 + 60 * *(unsigned int *)(v20 + 56)) + 11566720); /*0x6a8056*/
      ++v19; /*0x6a805b*/
    }
    while ( v19 < 60 ); /*0x6a805f*/
    (*(void (**)(unsigned __int8 *, GadgetClass *))(*(unsigned int *)v7 + 52))(v7, &stru_B04A10); /*0x6a806a*/
    (*(void (**)(unsigned __int8 *, int))(*(unsigned int *)v7 + 56))(v7, 2); /*0x6a8073*/
    return v10; /*0x6a8073*/
  }
  (*(void (**)(unsigned __int8 *, int, int, int))(*(unsigned int *)v7 + 136))(v7, a4, a3, a2); /*0x6a7ded*/
  v7[21414] = 1; /*0x6a7df8*/
  Hash::Reset((LinkClass *)&stru_B07DF8); /*0x6a7dff*/
  (*(void (**)(unsigned __int8 *, ShapeButtonClass *))(*(unsigned int *)v7 + 48))(v7, &stru_B07DF8); /*0x6a7e0d*/
  Hash::Reset((LinkClass *)&stru_B0B3A0); /*0x6a7e15*/
  (*(void (**)(unsigned __int8 *, ShapeButtonClass *))(*(unsigned int *)v7 + 48))(v7, &stru_B0B3A0); /*0x6a7e23*/
  v11 = &stru_B07C48; /*0x6a7e26*/
  do /*0x6a7e47*/
  {
    Hash::Reset((LinkClass *)v11); /*0x6a7e2d*/
    LOBYTE(v11[3].u32_8) = 0; /*0x6a7e32*/
    (*(void (**)(unsigned __int8 *, ShapeButtonClass *))(*(unsigned int *)v7 + 48))(v7, v11); /*0x6a7e3b*/
    v11 += 8; /*0x6a7e3e*/
  }
  while ( (int)v11 < (int)&dword_B07DC8 ); /*0x6a7e47*/
  Hash::Reset((LinkClass *)&stru_B0B328); /*0x6a7e4e*/
  Hash::InsertOrdered((GScreenClass *)&dword_87F7E8, (int)&stru_B0B328); /*0x6a7e5d*/
  Hash::Reset((LinkClass *)&g_SidebarFlag); /*0x6a7e67*/
  Hash::InsertOrdered((GScreenClass *)&dword_87F7E8, (int)&g_SidebarFlag); /*0x6a7e76*/
  Hash::Reset((LinkClass *)&stru_B07E58); /*0x6a7e80*/
  (*(void (**)(unsigned __int8 *, GadgetClass *))(*(unsigned int *)v7 + 48))(v7, &stru_B07E58); /*0x6a7e8e*/
  Hash::Reset((LinkClass *)&stru_B04A10); /*0x6a7e96*/
  (*(void (**)(unsigned __int8 *, GadgetClass *))(*(unsigned int *)v7 + 48))(v7, &stru_B04A10); /*0x6a7ea4*/
  v12 = (GadgetClass *)&stru_B07C48; /*0x6a7ea7*/
  v13 = &v7->u32_1598; /*0x6a7eac*/
  do /*0x6a7ed5*/
  {
    *(v13 - 4) = 0; /*0x6a7eb2*/
    if ( *v13 > 0 ) /*0x6a7ebd*/
      DialogControl::Hide(v12); /*0x6a7ec1*/
    v12 = (GadgetClass *)((char *)v12 + 96); /*0x6a7ec6*/
    v13 += 997; /*0x6a7ec9*/
  }
  while ( (int)v12 < (int)&dword_B07DC8 ); /*0x6a7ed5*/
  GadgetClass::Show((GadgetClass *)(&stru_B07C48 + 8 * v7->u32_539C)); /*0x6a7ee9*/
  v14 = (int)&v7[3988 * v7->u32_539C + 5444]; /*0x6a7f01*/
  v7[3988 * *((unsigned int *)v7 + 5351) + 5472] = 1; /*0x6a7f08*/
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
      Hash::InsertOrdered((GScreenClass *)&dword_87F7E8, 56 * (v16 + 60 * *(unsigned int *)(v14 + 56)) + 11566720); /*0x6a7f95*/
      ++v16; /*0x6a7f9a*/
    }
    while ( v16 < v17 ); /*0x6a7f9d*/
  }
  g_CameoRenderFlag = 1; /*0x6a7fa1*/
  Tactical::UpdateUIVisibility((Tactical *)v7); /*0x6a7fa8*/
  (*(void (**)(unsigned __int8 *, int))(*(unsigned int *)v7 + 56))(v7, 2); /*0x6a7fb7*/
  return a5; /*0x6a7fbf*/

}
} // namespace ra2

// 0x718260
namespace gamemd {
void* ObjectClass::FindPlacementPosition(int a2, int a3, int a4, int a5)
{

  int altObject; // esi
  int v7; // ebx
  unsigned int *v8; // eax
  unsigned int *v9; // eax
  int v10; // edx
  unsigned int *v11; // eax
  int v12; // edx
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
  unsigned int *ptr_C; // ecx
  int *v31; // eax
  int v32; // eax
  int *v33; // eax
  int *v34; // ebp
  int v35; // edx
  char v36; // [esp-28h] [ebp-60h]
  unsigned int v37; // [esp+14h] [ebp-24h] BYREF
  char v38[4]; // [esp+18h] [ebp-20h] BYREF
  __int16 v39[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  __int16 *v40; // [esp+20h] [ebp-18h]
  __int16 v41[2]; // [esp+24h] [ebp-14h] BYREF
  int v42; // [esp+28h] [ebp-10h] BYREF
  int v43; // [esp+2Ch] [ebp-Ch] BYREF
  int v44; // [esp+30h] [ebp-8h]
  int v45; // [esp+34h] [ebp-4h]

  if ( (unsigned char)a5 ) /*0x71826f*/
  {
    p_owningHouseIndex = &this->owningHouseIndex; /*0x718664*/
    if ( this->owningHouseIndex == dword_B0EBF8 && this->fallRate == dword_B0EBFC && this->nextObject == dword_B0EC00 ) /*0x718681*/
    {
      ptr_C = (unsigned int *)this->ptr_C; /*0x71868b*/
      v43 = ptr_C[39]; /*0x71869a*/
      v44 = ptr_C[40]; /*0x7186a1*/
      v45 = ptr_C[41]; /*0x7186a8*/
      (*(void (**)(int *))(*ptr_C + 244))(&v43); /*0x7186b3*/
    }
    else
    {
      (*(void (**)(int *))(*(unsigned int *)this->ptr_C + 244))(&this->owningHouseIndex); /*0x718689*/
    }
    v31 = (int *)&this->ptr_C->q288; /*0x7186be*/
    *p_owningHouseIndex = *v31; /*0x7186c6*/
    this->fallRate = v31[1]; /*0x7186cb*/
    this->nextObject = v31[2]; /*0x7186d1*/
    this->nextObject = Cell::GetGroundHeight(&this->owningHouseIndex); /*0x7186e4*/
    if ( (((Coord *)&dword_87F7E8)->To_Cell( &this->owningHouseIndex)->flags & 0x100) == 0 /*0x7186fa*/
      || (v32 = this->ptr_C, *(unsigned char *)(v32 + 140)) )
    {
      *(unsigned char *)&this->ptr_C->onBridge = 0; /*0x718719*/
    }
    else
    {
      *(unsigned char *)(v32 + 140) = 1; /*0x718704*/
      this->nextObject += dword_B0EC2C; /*0x718711*/
    }
    (*(void (**)(int, int *))(*(unsigned int *)this->ptr_C + 240))(this->ptr_C, &this->owningHouseIndex); /*0x718726*/
  }
  else
  {
    if ( (((Coord *)&dword_87F7E8)->To_Cell( &a2)->flags & 0x100) != 0 ) /*0x71828d*/
      altObject = ((Coord *)&dword_87F7E8)->To_Cell( &a2)->altObject; /*0x71829e*/
    else
      altObject = ((Coord *)&dword_87F7E8)->To_Cell( &a2)->firstObject; /*0x7182b5*/
    v7 = *(unsigned int *)&((Coord *)&dword_87F7E8)->To_Cell( &a2)->__pad_28[28]; /*0x7182ca*/
    for ( LOBYTE(a5) = 0; altObject; altObject = *(unsigned int *)(altObject + 48) ) /*0x7182d6*/
    {
      if ( !(*(unsigned __int8 (**)(int))(*(unsigned int *)altObject + 352))(altObject) /*0x718305*/
        && (*(int (**)(int))(*(unsigned int *)altObject + 44))(altObject) == 15
        && (*(int (**)(int))(*(unsigned int *)this->ptr_C + 44))(this->ptr_C) == 15 )
      {
        v8 = (unsigned int *)(*(int (**)(int, int *))(*(unsigned int *)altObject + 72))(altObject, &v43); /*0x718310*/
        if ( a2 == *v8 && a3 == v8[1] && a4 == v8[2] ) /*0x718339*/
        {
          v9 = (unsigned int *)(*(int (**)(int))(*(unsigned int *)altObject + 132))(altObject); /*0x718343*/
          v10 = *(unsigned int *)altObject; /*0x718354*/
          v37 = v9[40]; /*0x718357*/
          (*(void (**)(int, unsigned int *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(v10 + 364))( /*0x71836e*/
            altObject,
            &v37,
            0,
            *&dword_8871E0->u32_FA8,
            0,
            1,
            0,
            0);
        }
      }
      else if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)altObject + 352))(altObject) /*0x718397*/
             || (*(unsigned char *)(altObject + 20) & 4) == 0 )
      {
        if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)altObject + 352))(altObject) ) /*0x7183d4*/
        {
          *(unsigned int *)v39 = *(unsigned int *)((*(int (**)(int))(*(unsigned int *)this->ptr_C + 132))(this->ptr_C) + 160); /*0x7183f5*/
          (*(void (**)(int, __int16 *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(*(unsigned int *)this->ptr_C /*0x71840f*/
                                                                                              + 364))(
            this->ptr_C,
            v39,
            0,
            *&dword_8871E0->u32_FA8,
            0,
            1,
            0,
            0);
        }
        else if ( (*(unsigned char *)(altObject + 20) & 4) == 0 ) /*0x718428*/
        {
          LOBYTE(a5) = 1; /*0x71842a*/
        }
      }
      else
      {
        v11 = (unsigned int *)(*(int (**)(int))(*(unsigned int *)altObject + 132))(altObject); /*0x71839d*/
        v12 = *(unsigned int *)altObject; /*0x7183a9*/
        *(unsigned int *)v38 = v11[40]; /*0x7183ab*/
        (*(void (**)(int, char *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(v12 + 364))( /*0x7183c8*/
          altObject,
          v38,
          0,
          *&dword_8871E0->u32_FA8,
          0,
          1,
          0,
          0);
      }
    }
    if ( (((Coord *)&dword_87F7E8)->To_Cell( &a2)->flags & 0x100) != 0 /*0x71846c*/
      && (((Coord *)&dword_87F7E8)->To_Cell( &a2)->flags & 0x200) == 0 )
    {
      LOBYTE(a5) = 1; /*0x71846e*/
    }
    v13 = (unsigned int *)(*(int (**)(int, int *))(*(unsigned int *)this->ptr_C + 72))(this->ptr_C, &v43); /*0x71847d*/
    (v37) = ((v37) & ~0xFFFF) | ((*v13 / 256) & 0xFFFF); /*0x718490*/
    HIWORD(v37) = v13[1] / 256; /*0x7184a8*/
    *(unsigned int *)v39 = v37; /*0x7184b1*/
    v40 = (__int16 *)((CellCoord *)&dword_87F7E8)->To_CellObj(v39); /*0x7184c0*/
    v38[0] = ObjectClass::processPointerInvalid != 0; /*0x7184d1*/
    if ( v7 != -1 /*0x7184f4*/
      && !*(unsigned char *)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 4 * v7) + 681)
      && !ObjectClass::processPointerInvalid
      || (unsigned char)a5 )
    {
      v14 = *(unsigned int *)((*(int (**)(int))(*(unsigned int *)this->ptr_C + 132))(this->ptr_C) + 1460); /*0x718505*/
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
      v36 = BYTE1(*((unsigned int *)((CellCoord *)&dword_87F7E8)->To_CellObj(v39) + 80)) & 1; /*0x7185b5*/
      TileIndex = ((MapClass *)&dword_87F7E8)->GetTileIndex( v40 + 18, v14, v38[0]); /*0x7185bf*/
      *(unsigned int *)v41 = *LayerClass::Pathfinding_Find( /*0x7185e6*/
                          (Type *)&dword_87F7E8,
                          v16,
                          &v42,
                          (__int16 *)&a5,
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
                          (__int16 *)&v37,
                          0,
                          0);
      v17 = ((Coord *)&dword_87F7E8)->To_Cell( &a2); /*0x7185ea*/
      v18 = (unsigned int *)(*(int (**)(CellClass *, int *))(v17->mapCoords + 72))(v17, &v43); /*0x7185f8*/
      v19 = a2 - *v18; /*0x71860b*/
      v20 = a3 - v18[1]; /*0x718611*/
      v21 = a4 - v18[2]; /*0x718617*/
      v22 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v41); /*0x71861f*/
      v23 = (unsigned int *)(*(int (**)(void *, int *))(*(unsigned int *)v22 + 72))(v22, &v43); /*0x71862d*/
      v24 = *v23 + v19; /*0x718635*/
      v25 = (int *)&this->ptr_C->q288; /*0x71863d*/
      v26 = v20 + v23[1]; /*0x718643*/
      v27 = v21 + v23[2]; /*0x718645*/
      *v25 = v24; /*0x718647*/
      v25[1] = v26; /*0x71864c*/
      v25[2] = v27; /*0x718650*/
      return 0; /*0x718658*/
    }
  }
  v33 = &this->owningHouseIndex; /*0x718735*/
  if ( this->owningHouseIndex == dword_B0EBF8 && this->fallRate == dword_B0EBFC && this->nextObject == dword_B0EC00 ) /*0x718754*/
  {
    v34 = (int *)this->ptr_C; /*0x71875e*/
    v43 = v34[39]; /*0x71876d*/
    v44 = v34[40]; /*0x718774*/
    v45 = v34[41]; /*0x71877b*/
    v35 = *v34; /*0x71877f*/
    v33 = &v43; /*0x718782*/
  }
  else
  {
    v34 = (int *)this->ptr_C; /*0x718756*/
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
  return TechnoClass::GetTypeVt40();
}
}
// 0x746CC0
namespace gamemd {
void ObjectClass::ObjectClass_GetTypeVt41_2()
{
  return ObjectClass::GetTypeVt41();
}
namespace gamemd {  // L-fix ns repair
int ObjectClass::processDeath()
{


  int v1; // edx
  v1 = (int)(((char *)&stru_B1D290) - 1); /*0x74cd68*/
  if ( (int)(((char *)&stru_B1D290) - 1) < 0 ) /*0x74cd6d*/
    return 0; /*0x74cda2*/
  char *i; // esi
  for ( i = (char *)((char *)&stru_B1D290) + 4 * v1; /*0x74cd78*/
  *(unsigned short *)(*&i->u32_3E0) != (*((unsigned short *)&(this->AbstractClass)))
     || *(unsigned short *)(*&i->u32_3E8) != (*(((unsigned short *)&(this->AbstractClass)) + 1));
  i -= 4 )
  {
    if ( --v1 < 0 ) /*0x74cd97*/
      return 0; /*0x74cd97*/
  }
  return *((unsigned int *)((char *)&stru_B1D290) + v1); /*0x74cd9e*/

}
} // namespace ra2
}

// 0x401940
namespace gamemd {
int ObjectClass::GetMember06()
{

  return *&this->nextArrayIndex; /*0x401943*/

}
} // namespace gamemd

// 0x4135A0
namespace gamemd {
bool ObjectClass::HasLinkedObject(int aP0)
{

  int result; // eax
  result = *(unsigned int *)((*(int (**)(int))(*(unsigned int *)aP0 + 444))(aP0) + 224); /*0x4135af*/
  (*((unsigned char *)&(result))) = result && result != aP0; /*0x4135c3*/
  return result; /*0x4135bf*/
}
} // namespace gamemd

// 0x41BE00
namespace gamemd {
int ObjectClass::GetCoordsThunk2()
{


  unsigned int *v1; // ecx
  unsigned char v3[12]; // [esp+4h] [ebp-Ch] BYREF
  v1 = (unsigned int *)(*(int (**)(IUnknown *, unsigned char *))(this->field_0 + 72))(this, v3); /*0x41be0e*/
  unsigned int *v4; // [esp+14h] [ebp+4h]
  *v4 = *v1; /*0x41be18*/
  v4[1] = v1[1]; /*0x41be1d*/
  v4[2] = v1[2]; /*0x41be24*/
  return (int)v4; /*0x41be20*/

}
} // namespace gamemd

// 0x4264D0
namespace gamemd {
int ObjectClass::COMStub_108(int a1, int a2, int a3, int a4, int a5)
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
  result = (int)this->AbstractClass;
  result = (int)this->AbstractClass;
  return (*(int (**)(int))(*(unsigned int *)result + 8))(result); /*0x4e02c9*/
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

  return (int)this->m_Next->__pad_0; /*0x556623*/

}
} // namespace gamemd

// 0x556B50
namespace gamemd {
int ObjectClass::updateMissionState(int a2)
{


  int result = a2; // eax /*0x556b57*/
  if ( !stru_A8EB00.ObjectTypeClass[30] ) /*0x556b5b*/
    result = 2 * a2; /*0x556b5d*/
  this->ptr_8 = (void *)result; /*0x556b5f*/
  return result; /*0x556b62*/

}
} // namespace gamemd

// 0x55A8C0
namespace gamemd {
unsigned int * ObjectClass::ComputeScreenYOffset(BuildingTypeClass * aP0, unsigned int * a1)
{

  int v2; // eax
  v2 = (*(int (**)(int))(*(unsigned int *)aP0->field_8 + 456))(aP0->field_8); /*0x55a8cc*/
  int v3; // ecx
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
  int result; // eax

  if ( aP0->isInLogic ) /*0x55baa5*/
  {
    (*((unsigned char *)&(result))) = 1; /*0x55baaf*/
  }
  int v2; // ecx
  else if ( DisplayClass::RenderStatusText(v2, (int)aP0, a2) ) /*0x55babb*/
  {
    (*((unsigned char *)&(result))) = 1; /*0x55bac4*/
    aP0->isInLogic = 1; /*0x55bac6*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x55bad0*/
  }
  return result; /*0x55bab1*/
}
} // namespace gamemd

// 0x5F5F40
namespace gamemd {
int ObjectClass::GetZAboveGround()
{


  unsigned int v4[3]; // [esp+4h] [ebp-Ch] BYREF
  v4[0] = this->field_9C; /*0x5f5f52*/
  v4[1] = *(unsigned int *)this->isOnMap; /*0x5f5f63*/
  v4[2] = this->field_A4; /*0x5f5f6a*/
  int v2; // ecx
  v2 = this->field_A4 - Cell::GetGroundHeight(v4); /*0x5f5f79*/
  if ( this->onBridge ) /*0x5f5f7b*/
    v2 -= dword_AC13BC; /*0x5f5f86*/
  return v2; /*0x5f5f83*/

}
} // namespace gamemd

// 0x5F6A10
namespace gamemd {
int ObjectClass::GetCell()
{


  unsigned int *v1; // eax
  unsigned char v5[12]; // [esp+10h] [ebp-Ch] BYREF
  v1 = (unsigned int *)(*(int (**)(IUnknown *, unsigned char *, unsigned int))(this->field_0 + 76))(this, v5, 0); /*0x5f6a1c*/
  int v3; // [esp+8h] [ebp-14h]
  (v3) = ((v3) & ~0xFFFF) | ((*v1 / 256) & 0xFFFF); /*0x5f6a2f*/
  HIWORD(v3) = v1[1] / 256; /*0x5f6a48*/
  __int16 v4[2]; // [esp+Ch] [ebp-10h] BYREF
  *(unsigned int *)v4 = v3; /*0x5f6a56*/
  return (int)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v4); /*0x5f6a5f*/

}
} // namespace gamemd

// 0x5F6C10
namespace gamemd {
int ObjectClass::IsAboveScreenMargin()
{


  int result; // eax
  result = (*(int (**)(IUnknown *))(this->field_0 + 456))(this); /*0x5f6c12*/
  (result) = ((result) & ~0xFF) | ((result > -20) & 0xFF); /*0x5f6c20*/
  return result; /*0x5f6c22*/

}
} // namespace gamemd

// 0x5F6DC0
namespace gamemd {
int ObjectClass::CreateInstance()
{

  ObjectClass::Dtor(); /*0x5f6dc3*/
  char v3; // [esp+8h] [ebp+4h]
  if ( (v3 & 1) != 0 ) /*0x5f6dcd*/
    operator delete((this)); /*0x5f6dd0*/
  return (int)this; /*0x5f6dda*/
}
} // namespace gamemd

// 0x6241C0
namespace gamemd {
char ObjectClass::Release()
{

  int result; // eax
  (*((unsigned char *)&(result))) = this->NeedsSaveOrLink; /*0x6241c0*/
  return result; /*0x6241c3*/
}
} // namespace gamemd

// 0x6241D0
namespace gamemd {
int ObjectClass::GetMember01()
{
  return this->ptr_4; /*0x6241d3*/
}
} // namespace gamemd

namespace gamemd {  // L-fix ns repair
int ObjectClass::processDamage()
{

  int result; // eax

  int v3; // [esp+0h] [ebp-4h]
  nullsub_36(); (void)v3; /*0x6a5001 G42.41l: PowerClass::Stub = nullsub_36(0x6A4FF0) misrender*/
  int v1 = 4; // esi /*0x6a5006*/
  do /*0x6a501d*/
  {
    result = (int)SearchMIXFile(aDarkenShp, 0); /*0x6a5012*/
    --v1; /*0x6a5017*/
    result = result; /*0x6a5018*/
  }
  while ( v1 ); /*0x6a501d*/
  return result; /*0x6a501f*/

}
} // namespace gamemd

// 0x6ABA40
namespace gamemd {
int ObjectClass::checkHealth()
{
  Mouse::SetCursor((int)&dword_87F7E8, 0, 0); /*0x6aba49*/
  return 1; /*0x6aba53*/
}
} // namespace gamemd

// 0x6AC7A0
namespace gamemd {
unsigned int * ObjectClass::updateAnimation(char a2)
{
  GadgetClass::Dtor(); /*0x6ac7a3*/
  if ( (a2 & 1) != 0 ) /*0x6ac7ad*/
    operator delete((this)); /*0x6ac7b0*/
  return this; /*0x6ac7ba*/
}
} // namespace gamemd

// 0x6E45E0
namespace gamemd {
int ObjectClass::FindOwner(unsigned int * a0, AnimClass * aP1)
{
  if ( !a0 ) /*0x6e45e6*/
    return 0; /*0x6e45e8*/
  if ( aP1 == 8997 ) /*0x6e45f8*/
    return Property::GetField11(a0); /*0x6e45fa*/
  if ( aP1 == (void *)-1 ) /*0x6e4606*/
    return 0; /*0x6e4608*/
  if ( BuildingType::IsSpecialType(aP1) ) /*0x6e4610*/
    return ((BuildingType *)(aP1))->FindOwnerHouse(); /*0x6e461b*/
  return HouseClass::FindOwner(aP1); /*0x6e45ea*/
}
} // namespace gamemd

// 0x72A660
namespace gamemd {
int ObjectClass::setTarget(int a2)
{

  *&this->nextObject = a2; /*0x72a664*/
  return a2; /*0x72a667*/

}
} // namespace gamemd

// 0x72A670
namespace gamemd {
unsigned int * ObjectClass::clearTarget(char a2)
{

  GadgetClass::Dtor((GadgetClass *)this); /*0x72a673*/
  if ( (a2 & 1) != 0 ) /*0x72a67d*/
    __3_YAXPAX_Z(this); /*0x72a680*/
  return this->ptr_0; /*0x72a68a*/

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
  *(unsigned int *)v19.owningHouseIndex = a4; /*0x7a2a1f*/
  result = BaseDialogProc( (SkirmishDialog *)(hWnd), a2, a3, v19); /*0x7a2a25*/
  if ( !result ) /*0x7a2a2c*/
  {
    *(unsigned int *)&v22[4] = GetWindowLongA(hWnd, 8); /*0x7a2a3e*/
    if ( a2 <= 0x2B ) /*0x7a2a42*/
    {
      switch ( a2 ) /*0x7a2a44*/
      {
        case 0x2Bu: /*0x7a2a44*/
          Dialog::Resize(  (char *)a4); /*0x7a2a91*/
          return 1; /*0x7a2aa5*/
        case 0xFu: /*0x7a2a44*/
          Dialog::DrawBackground(  (Dialog *)hWnd); /*0x7a2a68*/
          Dialog::StopBink(  (Dialog *)hWnd); /*0x7a2a6f*/
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
        StringCSF = GetStringCSF( aWolAddbuddyque, 0, (const char *)(g_Str_File_wonline_cpp), 29291); /*0x7a2ad8*/
        swprintf(lParam, (const size_t)StringCSF, (const wchar_t *const)v20); /*0x7a2ae6*/
        DlgItem = GetDlgItem(hWnd, 1819); /*0x7a2af4*/
        SendMessageA( (HWND)(DlgItem), 0x4B2u, 0, (LPARAM)((LPARAM)((LPARAM)lParam))); /*0x7a2b0a*/
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
        (*(void (**)(unsigned int, HWND, int))(**(unsigned int **)&v22[4] + 4))( *(unsigned int *)&v22[4], (HWND)((HWND)((HWND)((HWND)(hWnd)))), 2); /*0x7a2b54*/
        return 0; /*0x7a2b63*/
      }
      return 0; /*0x7a2b29*/
    }
    v8 = IsDlgButtonChecked(hWnd, 1785); /*0x7a2b6c*/
    ReadWOLLobbyOption(v8 != 1); /*0x7a2b7d*/
    if ( !(uint8_t)((MapSeed*)((MapSeed *)&stru_B76AC4))->CheckName() ) /*0x7a2b8e*/
    {
      LABEL_53:
      (*(void (**)(unsigned int, HWND, int))(**(unsigned int **)&v22[4] + 4))( *(unsigned int *)&v22[4], (HWND)((HWND)((HWND)((HWND)(hWnd)))), 1); /*0x7a2e54*/
      return 0; /*0x7a2e60*/
    }
    memset( (&v22[8]), 0, 0x6Cu); /*0x7a2ba1*/
    v9 = ((String *)((String *)&stru_B76AC4))->GetOrEmpty_Alt(); /*0x7a2ba8*/
    strncpy( (char *)(&v22[44]), (const char *)(v9), 9u); /*0x7a2bb3*/
    (*(void (**)(LPVOID, unsigned char *))(*(unsigned int *)ppv + 224))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(ppv)))), (unsigned char *)(&v22[8])); /*0x7a2bc8*/
    if ( !(uint8_t)((MapSeed*)((MapSeed *)&stru_B76AC4))->CheckName() ) /*0x7a2bda*/
    {
      LABEL_52:
      SendGameListWOL(v21); /*0x7a2e4f*/
      goto LABEL_53; /*0x7a2e4f*/
    }
    ((String *)((String *)v22))->AssignFromPtr((const char **)&stru_B76AC4); /*0x7a2be9*/
    v10 = *(unsigned int *)&g_WindowManager; /*0x7a2bee*/
    v11 = *(unsigned int *)&g_WindowManager; /*0x7a2bf3*/
    if ( *(int *)&g_WindowManager>= (int)dword_B73AAC) /*0x7a2bff*/
    {
      ((DynamicVector *)((DynamicVector *)&g_WindowManager))->EnsureCapacity(); /*0x7a2c06*/
      v10 = *(unsigned int *)&g_WindowManager; /*0x7a2c0b*/
    }
    if ( v10 >= (int)dword_B73AAC) /*0x7a2c16*/
    {
      ((DynamicVector *)((DynamicVector *)&g_WindowManager))->EnsureCapacity(); /*0x7a2c1d*/
      v10 = *(unsigned int *)&g_WindowManager; /*0x7a2c22*/
    }
    if ( v11 < v10 ) /*0x7a2c29*/
    {
      memcpy( /*0x7a2c46*/
        (void *)(*(unsigned int *)&dword_B73AB0+ 4 * v11 + 4),
        (const void *)(*(unsigned int *)&dword_B73AB0+ 4 * v11),
        4 * (v10 + 0x3FFFFFFF * v11));
      v10 = *(unsigned int *)&g_WindowManager; /*0x7a2c4b*/
    }
    v12 = (String *)(*(unsigned int *)&dword_B73AB0+ 4 * v11); /*0x7a2c59*/
    if ( v12 ) /*0x7a2c5e*/
    {
      ((String *)(v12))->AssignFromPtr((const char **)v22); /*0x7a2c65*/
      v10 = *(unsigned int *)&g_WindowManager; /*0x7a2c6a*/
    }
    *(unsigned int *)&g_WindowManager= v10 + 1; /*0x7a2c70*/
    v13 = *(unsigned int *)&dword_B76980; /*0x7a2c75*/
    v14 = *(unsigned int *)&dword_B76980; /*0x7a2c7a*/
    if ( *(int *)&dword_B76980>= *(int *)&dword_B76984) /*0x7a2c86*/
    {
      ((DynamicVector *)((DynamicVector *)&dword_B76980))->EnsureCapacity(); /*0x7a2c8d*/
      v13 = *(unsigned int *)&dword_B76980; /*0x7a2c92*/
    }
    if ( v13 >= *(int *)&dword_B76984) /*0x7a2c9d*/
    {
      ((DynamicVector *)((DynamicVector *)&dword_B76980))->EnsureCapacity(); /*0x7a2ca4*/
      v13 = *(unsigned int *)&dword_B76980; /*0x7a2ca9*/
    }
    if ( v14 < v13 ) /*0x7a2cb0*/
    {
      memcpy( /*0x7a2ccd*/ (void *)(&stru_B76900.parachute->AnimClass_field_0x4 + v14), (const void *)(&stru_B76900.parachute->AnimClass_field_0x0 + v14), 4 * (v13 + 0x3FFFFFFF * v14));



      v13 = *(unsigned int *)&dword_B76980; /*0x7a2cd2*/
    }
    v15 = (String *)(&stru_B76900.parachute->AnimClass_field_0x0 + v14); /*0x7a2ce0*/
    if ( v15 ) /*0x7a2ce5*/
    {
      ((String *)(v15))->AssignFromPtr((const char **)v22); /*0x7a2cec*/
      v13 = *(unsigned int *)&dword_B76980; /*0x7a2cf1*/
    }
    *(unsigned int *)&dword_B76980= v13 + 1; /*0x7a2cf7*/
    v16 = *(unsigned int *)&g_WOL_BuddyList; /*0x7a2cfc*/
    v17 = *(unsigned int *)&g_WOL_BuddyList; /*0x7a2d01*/
    if ( *(int *)&g_WOL_BuddyList>= *(int *)&DataGlobal_B779B4 ) /*0x7a2d0d*/
    {
      ((DynamicVector *)(&g_WOL_BuddyList))->EnsureCapacity(); /*0x7a2d14*/
      v16 = *(unsigned int *)&g_WOL_BuddyList; /*0x7a2d19*/
    }
    if ( v16 >= *(int *)&DataGlobal_B779B4 ) /*0x7a2d24*/
    {
      ((DynamicVector *)(&g_WOL_BuddyList))->EnsureCapacity(); /*0x7a2d2b*/
      v16 = *(unsigned int *)&g_WOL_BuddyList; /*0x7a2d30*/
    }
    if ( v17 < v16 ) /*0x7a2d37*/
    {
      memcpy( /*0x7a2d54*/
        (void *)(dword_B779B8+ 4 * v17 + 4),
        (const void *)(dword_B779B8+ 4 * v17),
        4 * (v16 + 0x3FFFFFFF * v17));
      v16 = *(unsigned int *)&g_WOL_BuddyList; /*0x7a2d59*/
    }
    v18 = (String *)(dword_B779B8+ 4 * v17); /*0x7a2d67*/
    if ( v18 ) /*0x7a2d6c*/
    {
      ((String *)(v18))->AssignFromPtr((const char **)v22); /*0x7a2d73*/
      v16 = *(unsigned int *)&g_WOL_BuddyList; /*0x7a2d78*/
    }
    *(unsigned int *)&g_WOL_BuddyList= v16 + 1; /*0x7a2d83*/
    if ( ((String*)((String *)&g_WOL_AuthObject))->Length() ) /*0x7a2d88*/
    {
      if ( (unsigned int)(time(0) - *(unsigned int *)g_WOL_ParseState) < 5 ) /*0x7a2da6*/
      {
        LABEL_51:
        j_DeleteAndZero( ((ObjectClass *)v22)); /*0x7a2e46*/
        goto LABEL_52; /*0x7a2e4a*/
      }
      ((DeleteAndZero *)&g_WOL_AuthObject)->Alt2(); /*0x7a2db1*/
    }
    if ( *(unsigned int *)&dword_B76980) /*0x7a2dbd*/
    {
      if ( (uint8_t)DynamicStringArray::Get( /*0x7a2dcf*/
                              (DynamicStringArray *)&dword_B76980,
                              (char **)&g_WOL_AuthObject,
                              0) )
      ((DynamicArray *)((DynamicArray *)&dword_B76980))->Remove(0); /*0x7a2ddf*/
      *(unsigned int *)g_WOL_ParseState = time(0); /*0x7a2deb*/
      memset( (&v22[116]), 0, 0x6Cu); /*0x7a2dfe*/
      strcpy( (char *)(&v22[152]), ((String *)((String *)&g_WOL_AuthObject))->GetOrEmpty()); /*0x7a2e31*/
      (*(void (**)(LPVOID, unsigned char *))(*(unsigned int *)ppv + 96))( (LPVOID)((LPVOID)((LPVOID)((LPVOID)(ppv)))), (unsigned char *)(&v22[116])); /*0x7a2e43*/
    }
    goto LABEL_51; /*0x7a2e43*/
  }
  return (unsigned int *)result; /*0x7a2a54*/

}
} // namespace gamemd

// --- x93 csp-relocation defs (BEGIN) ---
// X93: CSP inferred_real_class ownership (tools/gen_gap2_defs.py).
namespace gamemd {
// 0x00421350
int ObjectClass::RenderAlphaShapes()
{
  int v6; // esi
  int *FoundationSize; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  char *v14; // ecx
  int v15; // ebp
  int v16; // ecx
  int SubFile; // edi
  uint16_t *v18; // eax
  int v19; // ecx
  uint8_t *v20; // edi
  int v21; // esi
  int v22; // esi
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  uint16_t v26; // bx
  bool v27; // zf
  int v28; // [esp+4h] [ebp-90h]
  int v29; // [esp+4h] [ebp-90h]
  int v30; // [esp+4h] [ebp-90h]
  int v31; // [esp+8h] [ebp-8Ch]
  int v32; // [esp+Ch] [ebp-88h]
  char *v33; // [esp+10h] [ebp-84h]
  int v34; // [esp+14h] [ebp-80h]
  uint8_t v35; // [esp+18h] [ebp-7Ch]
  uint8_t v36; // [esp+18h] [ebp-7Ch]
  int v38; // [esp+20h] [ebp-74h]
  int v48; // [esp+48h] [ebp-4Ch]
  int v52; // [esp+70h] [ebp-24h]
  int v23[4]; // [esp+74h] [ebp-20h] BYREF
  int v6[4]; // [esp+84h] [ebp-10h] BYREF

  int result = g_AlphaShapeLimit; // eax /*0x421356*/
  int v2 = 0; // ebx /*0x42135c*/
  int *v47; // [esp+44h] [ebp-50h]
  v47 = (int *)v23; /*0x42135e*/
  int i; // [esp+1Ch] [ebp-78h]
  for ( i = 0; v2 < g_AlphaShapeLimit; i = v2 ) /*0x421368*/
  {
    int *v3; // edx
    v3 = (int *)(*((unsigned int *)dword_88A0F4 + v2) + 40); /*0x421380*/
    int v43; // [esp+34h] [ebp-60h] BYREF
    v43 = *v3; /*0x421384*/
    char *v44; // [esp+38h] [ebp-5Ch]
    v44 = (char *)v3[1]; /*0x42138b*/
    int v45; // [esp+3Ch] [ebp-58h]
    v45 = v3[2]; /*0x421392*/
    int v46; // [esp+40h] [ebp-54h]
    v46 = v3[3]; /*0x421399*/
    char *v4; // ecx
    v4 = &v44[-*(unsigned int *)&(&g_TacticalClass_Instance)[45]]; /*0x4213af*/
    v43 = DSurface_ViewBounds.field_0 + v43 - *(unsigned int *)&(&g_TacticalClass_Instance)[44]; /*0x4213c3*/
    v44 = (char *)g_Map_VisibleRect + (unsigned int)v4; /*0x4213cb*/
    int v39; // [esp+24h] [ebp-70h] BYREF
    v39 = *v47; /*0x4213d1*/
    int v40; // [esp+28h] [ebp-6Ch]
    v40 = v47->ptr_4; /*0x4213d8*/
    int v41; // [esp+2Ch] [ebp-68h]
    v41 = v47->ptr_8; /*0x4213df*/
    int v42; // [esp+30h] [ebp-64h]
    v42 = v47->ptr_C; /*0x4213f1*/
    int *v5; // eax
    v5 = ClipRectIntersection(v23, &v43, &v39, 0, 0); /*0x4213fa*/
    int v50; // [esp+54h] [ebp-40h]
    v50 = *v5; /*0x421403*/
    char *v51; // [esp+58h] [ebp-3Ch]
    v51 = v5->AbstractClass_1; /*0x42140a*/
    if ( v5->ptr_8 > 0 && v5->ptr_C > 0 ) /*0x42141e*/
    {
      v6 = v43; /*0x42142e*/
      char *v49; // [esp+50h] [ebp-44h]
      v49 = v44; /*0x421432*/
      int v7; // eax
      v7 = *((unsigned int *)dword_88A0F4 + v2); /*0x421436*/
      MixFileClass *v9 = v7->attachedBomb; // edi /*0x42143c*/
      if ( !v9 ) /*0x421441*/
      {
        char *v8; // ebp
        v8 = (char *)dword_88A0F4 + 4 * v2; /*0x421439*/
        *(unsigned int *)(v8->u32_38 = *(unsigned int *)((*(int (**)(unsigned int))(*v7->objectTypeFlags + 136))(v7->objectTypeFlags) /*0x421459*/
          + 172);
          v9 = *(MixFileClass **)(*((unsigned int *)dword_88A0F4 + v2) + 56); /*0x421464*/
        }
        FoundationSize = Building::GetFoundationSize((unsigned int *)(v6), 0); /*0x421478*/
        v11 = *FoundationSize; /*0x42147e*/
        v33 = v51; /*0x421480*/
        v12 = FoundationSize[1]; /*0x421484*/
        v13 = FoundationSize[2]; /*0x421487*/
        v52 = FoundationSize[3]; /*0x42148d*/
        if ( (int)v51 <= (int)&v49[v12] ) /*0x421499*/
          v33 = &v49[v12]; /*0x42149b*/
        v48 = v33 - v49 - v12; /*0x4214ab*/
        v14 = &v49[v52 + v12]; /*0x4214b9*/
        v28 = v42 + v40; /*0x4214c3*/
        if ( v42 + v40 >= (int)v14 ) /*0x4214c7*/
          v28 = (int)v14; /*0x4214c9*/
        v31 = v50; /*0x4214d6*/
        if ( v50 <= v6 + v11 ) /*0x4214da*/
          v31 = v6 + v11; /*0x4214dc*/
        v15 = v31 - v6 - v11; /*0x4214ef*/
        v16 = v39 + v41; /*0x4214f9*/
        if ( v39 + v41 >= v11 + v6 + v13 ) /*0x421501*/
        {
          v32 = v11 + v6 + v13; /*0x421509*/
          v16 = v32; /*0x42150d*/
        }
        else
        {
          v32 = v39 + v41; /*0x421503*/
        }
        v34 = v31 + v13 - v16; /*0x42152c*/
        v38 = v31 + *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 40) - v16; /*0x421530*/
        SubFile = MixFileClass::GetSubFile(v9, 0); /*0x421549*/
        v18 = (uint16_t *)StreamClass::ReadAndSeek( /*0x42155d*/
                                    *(int **)&g_VisibleSurfaceDescriptor,
                                    v31 - DSurface_ViewBounds.field_0,
                                    v33 - (char *)g_Map_VisibleRect);
        v19 = *(unsigned int *)&g_VisibleSurfaceDescriptor; /*0x421562*/
        v20 = (uint8_t *)(v15 + v48 * v13 + SubFile); /*0x421577*/
        if ( (unsigned int)&v18[(v28 - (unsigned int)v33) * *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 40) /*0x42159b*/
          + 2
        + v32
        + 0x7FFFFFFF * v31] < *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 28) )
        {
          if ( (int)v33 < v28 ) /*0x421630*/
          {
            v23 = v32; /*0x421632*/
            v30 = v28 - (unsigned int)v33; /*0x42163e*/
            v24 = v31; /*0x421642*/
            do /*0x42168e*/
            {
              if ( v24 < v23 ) /*0x421648*/
              {
                v25 = v23 - v24; /*0x42164a*/
                do /*0x421676*/
                {
                  v26 = *v18; /*0x421650*/
                  v36 = *v20++; /*0x421653*/
                  ++v18; /*0x421662*/
                  --v25; /*0x421668*/
                  *(v18 - 1) = (uint8_t)((unsigned char *)&byte_88A118)[256 * v36 + v26]; /*0x421672*/
                }
                while ( v25 ); /*0x421676*/
                v23 = v32; /*0x421678*/
                v24 = v31; /*0x42167c*/
              }
              v20 += v34; /*0x421684*/
              v27 = v30 == 1; /*0x421686*/
              v18 += v38; /*0x421687*/
              --v30; /*0x42168a*/
            }
            while ( !v27 ); /*0x42168e*/
          }
        }
        else if ( (int)v33 < v28 ) /*0x4215ab*/
        {
          v21 = v32; /*0x4215b1*/
          v29 = v28 - (unsigned int)v33; /*0x4215bd*/
          do /*0x421622*/
          {
            if ( v31 < v21 ) /*0x4215c7*/
            {
              v22 = v21 - v31; /*0x4215c9*/
              do /*0x421604*/
              {
                ++v18; /*0x4215cd*/
                v35 = *v20++; /*0x4215d0*/
                *(v18 - 1) = (uint8_t)((unsigned char *)&byte_88A118)[256 * v35 + *(v18 - 1)]; /*0x4215f1*/
                v19 = *(unsigned int *)&g_VisibleSurfaceDescriptor; /*0x4215f5*/
                if ( (unsigned int)v18 >= *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 28) ) /*0x4215fe*/
                  v18 = (uint16_t *)((char *)v18 - *(unsigned int *)(*(unsigned int *)&g_VisibleSurfaceDescriptor + 32)); /*0x421600*/
                --v22; /*0x421603*/
              }
              while ( v22 ); /*0x421604*/
              v21 = v32; /*0x421606*/
            }
            v18 += v38; /*0x42160d*/
            v20 += v34; /*0x421610*/
            if ( (unsigned int)v18 >= v19->q01C ) /*0x421614*/
              v18 = (uint16_t *)((char *)v18 - v19->q020); /*0x421616*/
            --v29; /*0x42161e*/
          }
          while ( v29 ); /*0x421622*/
        }
        v2 = i; /*0x421690*/
      }
      result = g_AlphaShapeLimit; /*0x421694*/
      ++v2; /*0x421699*/
    }
    return result; /*0x4216a9*/
  }
// 0x00429830
  double ObjectClass::ComputeMovementWeight(int *a2, unsigned int *a3, char a4, int a5, int a6)
  {
    unsigned int *v6; // esi
    int v7; // ebx
    bool v8; // zf
    int v9; // edi
    int v10; // ebp
    unsigned int v11; // esi
    unsigned short *v12; // eax
    int v13; // esi
    unsigned int *v14; // esi
    int v15; // esi
    int v16; // edx
    double v17; // st7
    int v18; // eax
    int v19; // ecx
    int v20; // edx
    int v22; // [esp+Ch] [ebp-18h]
    int v23; // [esp+10h] [ebp-14h]
    int v24; // [esp+14h] [ebp-10h] BYREF
    int v25; // [esp+18h] [ebp-Ch]
    int v26; // [esp+1Ch] [ebp-8h] BYREF
    char v27[4]; // [esp+20h] [ebp-4h] BYREF
    float v28; // [esp+34h] [ebp+10h]

    v6 = a3; /*0x429839*/
    v7 = *a3; /*0x429843*/
    v8 = a5 == 2; /*0x429845*/
    v23 = v23; /*0x429850*/
    v28 = (&flt_81870C)[a5]; /*0x429854*/
    v25 = *a2; /*0x429858*/
    if ( v8 ) /*0x42985c*/
    {
      if ( a4 ) /*0x429868*/
        v9 = v7->q03A; /*0x42986a*/
      else
        v9 = v7->u32_39; /*0x429872*/
      v10 = 0; /*0x42987c*/
      if ( v23->q03C ) /*0x429878*/
        goto LABEL_20; /*0x429878*/
      while ( v9 ) /*0x429888*/
      {
        if ( (v9->abstractFlags & 4) == 0 ) /*0x42989a*/
          goto LABEL_20; /*0x42989a*/
        if ( *(double *)(v9 + 1400) == 0.0 ) /*0x4298b1*/
        {
          v11 = *(unsigned int *)(v9 + 1504); /*0x4298b3*/
          if ( v11 == -1 ) /*0x4298bc*/
            break; /*0x4298bc*/
        }
        else
        {
          v11 = ((unsigned int)((*(unsigned int *)ProgressTimer::GetValue((unsigned short *)(v9 + 904), &v26) >> 12) + 1) >> 1) & 7; /*0x4298dc*/
        }
        v12 = (unsigned short *)(*(int (**)(int, char *))(v9->q1B8)(v9, v27); /*0x4298e8*/
        v13 = v11 & 7; /*0x4298f1*/
        (v22) = ((v22) & ~0xFFFF) | ((unsigned int)((unsigned short)((&dword_89F688)[v13]) + *v12) & 0xFFFF); /*0x42990b*/
        (v22) = ((v22) & ~(0xFFFFULL << 16)) | (((uint64_t)(unsigned int)(v12[1] + (unsigned short)(((&dword_89F688)[v13]) >> 16)) & 0xFFFF) << 16); /*0x429919*/
        v24 = v22; /*0x429927*/
        v14 = (unsigned int *)((CellCoord *)&dword_87F7E8)->To_CellObj((int16_t *)&v24); /*0x429930*/
        if ( (v14->u32_140 & 0x100) != 0 /*0x429964*/
          && (v9->onBridge
           || *(char *)((*(int (**)(int))(v9->q06F)(v9) + 283) - v14->u32_11B > 2) )
        {
          v15 = v14->q0E8; /*0x429966*/
        }
        else
        {
          v15 = v14->u32_E4; /*0x42996e*/
        }
        v23 = v23; /*0x429974*/
        ++v10; /*0x429978*/
        v9 = v15; /*0x42997c*/
        if ( v10 >= 10 ) /*0x42997e*/
          goto LABEL_20; /*0x42997e*/
      }
      if ( v23->q03C ) /*0x429986*/
      LABEL_20:
        v28 = 4.0; /*0x42998d*/
          if ( v23->q03C == 2 ) /*0x42999c*/
          v28 = 1000.0; /*0x42999e*/
        v6 = a3; /*0x4299a6*/
    }
    v16 = v7->customSound_controller; /*0x4299aa*/
    if ( (v16 & 0x40000) != 0 ) /*0x4299b6*/
      v28 = v28 * 4.0; /*0x4299c2*/
    if ( !a4 || !v23->ptr_4 ) /*0x4299d2*/
      return v28; /*0x429a82*/
    v17 = 1.0; /*0x4299f1*/
    v18 = dword_7E3760[3 * (int16_t)(v7->isInLogic - v25->u32_98) /*0x429a05*/
    + (int16_t)(v7->objectTypeFlags - v25->q024)];
    if ( (v16 & 0x800) != 0 ) /*0x429a0c*/
    {
      v19 = v6[(&dword_7E3730)[v18]]; /*0x429a1b*/
      v20 = (&dword_7E3730)[((unsigned char)v18 - 4) & 7]; /*0x429a1e*/
    }
    else
    {
      v19 = v6[(&dword_7E3710)[v18]]; /*0x429a34*/
      v20 = (&dword_7E3710)[((unsigned char)v18 - 4) & 7]; /*0x429a37*/
    }
    if ( (v19->q140 & 0x100) == 0 ) /*0x429a4e*/
      return 10.0 * v28; /*0x429a58*/
    if ( (*(unsigned int *)(v6[v20] + 320) & 0x100) != 0 ) /*0x429a6b*/
      v17 = 2.0; /*0x429a6f*/
    return v17 * v28; /*0x429a5c*/
  }
// 0x0042E1C0
  int ObjectClass::RenderTooltipBorder()
  {
    int nextArrayIndex; // eax
    int v3; // ecx
    int v4; // edi
    unsigned int *v5; // eax
    char *ptr_4; // edi
    char *ptr_8; // ebp
    char *v8; // eax
    int v9; // ebx
    int v10; // eax
    int v11; // ecx
    bool v12; // cc
    int uniqueId; // edi
    int v14; // edx
    bool v15; // zf
    int v16; // edx
    int v17; // eax
    int v18; // edi
    int v19; // edx
    int v20; // eax
    int v21; // ebp
    int v22; // edx
    int v23; // eax
    int abstractFlags; // edx
    int v25; // eax
    int result; // eax
    int occupant; // ecx
    int v28; // [esp-4h] [ebp-34h]
    char *ptr_0; // [esp+10h] [ebp-20h]
    char *ptr_0; // [esp+14h] [ebp-1Ch]
    int v31; // [esp+18h] [ebp-18h]
    int v32; // [esp+1Ch] [ebp-14h]
    int v33; // [esp+1Ch] [ebp-14h]
    Rect v34; // [esp+20h] [ebp-10h] BYREF

    (*(void (**)(void *))(*(unsigned int *)&((MouseClass *)stru_887598.lineTrailer)->q_30)(stru_887598.lineTrailer); /*0x42e1d1*/
    nextArrayIndex = v23->AbstractClass; /*0x42e1d4*/
    if ( nextArrayIndex ) /*0x42e1d9*/
    {
      if ( *(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x42e1e5*/
        v3 = *(uint8_t *)(*(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 372) + nextArrayIndex); /*0x42e1f2*/
      else
        v3 = *(uint16_t *)(*(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 372) + 2 * nextArrayIndex); /*0x42e1fe*/
      v28 = v3; /*0x42e20a*/
      v4 = *(unsigned int *)g_DSurface_Hidden_2; /*0x42e20e*/
      v5 = v34.Set((int)v23->AbstractClass_v, (int)v23->fallRate, (int)v23->nextObject, (int)v23->result); /*0x42e21d (G57w18j4: thiscall rect-in-ecx lea [esp+44h+var_10]; machine args [esi+0/4/8], arg4 stale-reg garbage - no 0x58 access exists)*/
      (*(void (**)(AudioStream *, unsigned int *, int))(v4 + 88))((gamemd::AudioStream *)(g_DSurface_Hidden_2), v5, v28); /*0x42e229*/
    }
    ptr_4 = (char *)v23->nextObject; /*0x42e22f*/
    ptr_8 = (char *)v23->occupant; /*0x42e237 (G57w18j4: machine [esi+0Ch] = occupant)*/
    ptr_0 = (char *)v23->occupant; /*0x42e23a*/
    v8 = ptr_4; /*0x42e23e*/
    ptr_0 = (char *)v23->AbstractClass; /*0x42e240*/
    v31 = (int)ptr_4; /*0x42e246*/
    v9 = (int)ptr_8; /*0x42e24a*/
    if ( v23->AbstractClass ) /*0x42e232*/
    {
      v8 = ptr_4 - 2; /*0x42e254*/
      ptr_0 = (char *)v23->AbstractClass + 1; /*0x42e257*/
      ++ptr_0; /*0x42e25b*/
      v31 = (int)(ptr_4 - 2); /*0x42e25f*/
      v9 = (int)(ptr_8 - 2); /*0x42e263*/
    }
    v32 = (int)v8; /*0x42e268*/
    if ( (int)ptr_4 <= (int)ptr_8 ) /*0x42e26c*/
      v32 = v9; /*0x42e26e*/
    (v10) = ((v10) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt((double)v32 * *(double *)&v23->NeedsSaveOrLink)) & 0xFFFF); /*0x42e279*/
    v11 = v10; /*0x42e27e*/
    v33 = v10; /*0x42e282*/
    if ( v10 <= 0 ) /*0x42e286*/
    {
      v18 = v31; /*0x42e333*/
    }
    else
    {
      v12 = (int)ptr_4 <= (int)ptr_8; /*0x42e291*/
      uniqueId = v23->owningHouseIndex; /*0x42e293*/
      v14 = *(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 4); /*0x42e296*/
      if ( v12 ) /*0x42e299*/
      {
        v15 = v14 == 1; /*0x42e2e6*/
        v19 = *(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 372); /*0x42e2e9*/
        if ( v15 ) /*0x42e2ef*/
          v20 = *(uint8_t *)(v19 + uniqueId); /*0x42e2f3*/
        else
          v20 = *(uint16_t *)(v19 + 2 * uniqueId); /*0x42e2fa*/
        v18 = v31; /*0x42e302*/
        v34.X = (int)ptr_0; /*0x42e306*/
        v34.Y = (int)&ptr_0[v11]; /*0x42e311*/
        v34.Width = v31; /*0x42e31b*/
        v34.Height = v9; /*0x42e31f*/
        (*(void (**)(AudioStream *, Rect *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 20))( /*0x42e32a*/
          g_DSurface_Hidden_2,
          &v34,
          v20);
        v11 = v33; /*0x42e32d*/
      }
      else
      {
        v15 = v14 == 1; /*0x42e29b*/
        v16 = *(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 372); /*0x42e29e*/
        if ( v15 ) /*0x42e2a4*/
          v17 = *(uint8_t *)(v16 + uniqueId); /*0x42e2a8*/
        else
          v17 = *(uint16_t *)(v16 + 2 * uniqueId); /*0x42e2af*/
        v34.Width = v11; /*0x42e2b7*/
        v34.X = (int)ptr_0; /*0x42e2c1*/
        v34.Y = (int)ptr_0; /*0x42e2ca*/
        v34.Height = v9; /*0x42e2ce*/
        (*(void (**)(AudioStream *, Rect *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 20))( /*0x42e2d9*/
          g_DSurface_Hidden_2,
          &v34,
          v17);
        v18 = v31; /*0x42e2dc*/
        v11 = v33; /*0x42e2e0*/
      }
    }
    if ( v18 - v11 > 0 ) /*0x42e33d*/
    {
      if ( (int)v23->nextObject <= (int)v23->occupant ) /*0x42e34b (G57w18j4: machine [esi+8] vs [esi+0Ch])*/
      {
        abstractFlags = v23->ptr_0; /*0x42e39e*/
        if ( *(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x42e3a5*/
          v25 = *(uint8_t *)(*(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 372) + abstractFlags); /*0x42e3b2*/
        else
          v25 = *(uint16_t *)(*(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 372) + 2 * abstractFlags); /*0x42e3be*/
        v34.X = (int)ptr_0; /*0x42e3c7*/
        v34.Height = v11 - 1; /*0x42e3cf*/
        v34.Y = (int)ptr_0; /*0x42e3d9*/
        v34.Width = v18; /*0x42e3dd*/
        (*(void (__stdcall **)(Rect *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 20))(&v34, v25); /*0x42e3e9*/
      }
      else
      {
        v21 = v23->ptr_0; /*0x42e352*/
        v22 = *(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 372); /*0x42e35b*/
        if ( *(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x42e361*/
          v23 = *(uint8_t *)(v22 + v21); /*0x42e365*/
        else
          v23 = *(uint16_t *)(v22 + 2 * v21); /*0x42e36c*/
        v34.Width = v18; /*0x42e374*/
        v34.Height = v9; /*0x42e37a*/
        v34.X = (int)&ptr_0[v11]; /*0x42e37e*/
        v34.Y = (int)ptr_0; /*0x42e386*/
        (*(void (__stdcall **)(Rect *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 20))(&v34, v23); /*0x42e397*/
      }
    }
    (*(void (**)(void *))(*(unsigned int *)&((MouseClass *)stru_887598.lineTrailer)->q_40)(stru_887598.lineTrailer); /*0x42e3f4*/
    result = ((unsigned int)(v23->NeedsSaveOrLink)); /*0x42e3f7 (G57w18j4: machine mov eax,[esi+20h] low-dword load)*/
    occupant = (unsigned int)((v23->NeedsSaveOrLink) >> 32); /*0x42e3fa (machine mov ecx,[esi+24h] = high dword of qword @0x20)*/
    v23->result = result; /*0x42e3fd*/
    v23->occupant = occupant; /*0x42e400*/
    v23->q030 = 1; /*0x42e403*/
    return result; /*0x42e407*/
  }
// 0x00430250
  char ObjectClass::RenderBuildingTag(int a2, int a3, int a4, int a5, int a6)
  {
    int v7; // eax
    char v8; // al
    wchar_t *v9; // eax
    wchar_t *v10; // esi
    wchar_t *v11; // eax
    wchar_t *v12; // esi
    wchar_t *v13; // eax
    Char *v14; // edi
    int v15; // eax
    unsigned int *v16; // eax
    int v17; // esi
    int v19; // [esp+Ch] [ebp-15Ch] BYREF
    int16_t v20; // [esp+10h] [ebp-158h]
    uint8_t v21; // [esp+12h] [ebp-156h]
    int v22; // [esp+18h] [ebp-150h] BYREF
    int v23; // [esp+1Ch] [ebp-14Ch] BYREF
    int v24[2]; // [esp+20h] [ebp-148h] BYREF
    int v25; // [esp+28h] [ebp-140h] BYREF
    int v26; // [esp+2Ch] [ebp-13Ch]
    int v27; // [esp+30h] [ebp-138h]
    int v28; // [esp+34h] [ebp-134h]
    unsigned int v29[4]; // [esp+38h] [ebp-130h] BYREF
    unsigned int v30[4]; // [esp+48h] [ebp-120h] BYREF
    unsigned int v31[4]; // [esp+58h] [ebp-110h] BYREF
    wchar_t Str[128]; // [esp+68h] [ebp-100h] BYREF

    v19 = *(unsigned int *)(*(unsigned int *)&BuildingTypeClass_AnimTable /*0x430283*/
    + 4 * *(unsigned int *)(*((unsigned int *)dword_A8022C + v23->unknown110) + 90196));
    (v7) = ((v7) & ~0xFF) | ((unsigned int)(Coord::To_Screen((Coord *)g_TacticalClass_Instance, (unsigned int *)v23, v24)) & 0xFF); /*0x430289*/
    if ( v7 )

    {
        DrawToSurfaceSHP(
        a2,
        *(unsigned int *)(v19 + 780),
        dword_89C474,
        dword_A8ED84 % (g_VisibilitySystem.health / 2)
        + ((v23->ptr_C & 2) != 0 ? g_VisibilitySystem.health / 2 : 0),
        v24,
        &a3,
        1536,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
        v7 = wcslen((const wchar_t *)(v23 + 14)); /*0x4302ff*/
        if ( v7 ) /*0x430309*/
        {
        v8 = v23->ptr_C; /*0x43030f*/
        memcpy(Str, (const void *)(v23 + 14), sizeof(Str)); /*0x43031e*/
        if ( (v8 & 2) == 0 ) /*0x430320*/
          goto LABEL_11; /*0x430320*/
        if ( g_abs_A8BC79 ) /*0x430329*/
        {
          if ( timeGetTime() % 0x1F4 < 0xFA ) /*0x430340*/
          {
            v9 = wcsrchr(Str, 0x5Fu); /*0x430349*/
            v10 = v9; /*0x43034e*/
            if ( v9 ) /*0x430355*/
            {
              if ( wcslen(v9) == 1 ) /*0x430363*/
                *v10 = 32; /*0x430365*/
            }
          }
        }
        if ( (v23->ptr_C & 2) == 0 || !g_abs_A8BC79 ) /*0x430377*/
        {
  LABEL_11:
          v11 = wcsrchr(Str, 0x5Fu); /*0x430380*/
    v12 = v11; /*0x430385*/
    if ( v11 && wcslen(v11) == 1 || (v13 = wcsrchr(Str, 0x20u), (v12 = v13) != 0) && wcslen(v13) == 1 ) /*0x4303bd*/
      *v12 = 0; /*0x4303bf*/
        }
        v14 = (Char *)g_FogOfWarState; /*0x4303c4*/
        v22 = 0; /*0x4303e2*/
        v23 = 0; /*0x4303e6*/
        Text::Layout(g_FogOfWarState, Str, &v22, &v23, 200); /*0x4303ea*/
        v27 = v22 + 8; /*0x43040a*/
        v26 = v24[1] + 32; /*0x430415*/
        v25 = v24[0] - v22 / 2 - 4; /*0x43041d*/
        v28 = v23 + 8; /*0x430428*/
        v15 = Color::ConvertToRGB((Color *)(v19 + 776), (int)&v19); /*0x430433*/
        v20 = *(unsigned short *)v15; /*0x43043c*/
        v21 = v15->u32_8; /*0x43044c*/
        v16 = ClipRectIntersection(v31, &v25, &a3, 0, 0); /*0x430459*/
        v29[0] = *v16; /*0x430464*/
        v29[1] = v16->ptr_4; /*0x430473*/
        v29[2] = v16->ptr_8; /*0x43047a*/
        v29[3] = v16->ptr_C; /*0x430498*/
        v17 = ((uint8_t)v20 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4304d4*/
        | ((unsigned char)((v20) >> 8) >> g_BitMask_Blue << g_BitMask_Green)
        | (v21 >> g_BitMask_Red << g_BitShift_Blue);
        (*(void (**)(int, unsigned int *, unsigned int))(a2->abstractFlags)(a2, v29, 0); /*0x4304d6*/
        (*(void (**)(int, unsigned int *, int))(a2->q058)(a2, v29, v17); /*0x4304e4*/
        Char::Swap(v14, 1); /*0x4304eb*/
        v30[0] = a3; /*0x430505*/
        v30[2] = a5 + a3 - 1; /*0x430514*/
        v30[1] = a4; /*0x430518*/
        v30[3] = a6 + a4 - 1; /*0x430527*/
        TextGroup::SetRect((TextGroup *)v14, v30); /*0x43052b*/
        Property::Set((Property *)v14, v17); /*0x430533*/
        (v7) = ((v7) & ~0xFF) | ((unsigned int)(Font::Print((int)v14, a2, Str, v25 + 4, v26 + 4, 200, v28, 0, 0, 0)) & 0xFF); /*0x430568*/
        }
    }
    return v7; /*0x43056e*/
  }
// 0x00430BA0
  void ObjectClass::PlacePlayerBeacon(int a2, int a3, int a4, int a5, int a6)
  {
    char *v7; // edi
    int v8; // ecx
    unsigned int *v9; // eax
    int v10; // eax
    int *v11; // esi
    int v12; // eax
    unsigned int *i; // ecx
    char v14; // al
    wchar_t *StringCSF; // eax
    wchar_t *v16; // eax
    int v17; // esi
    int v18; // ecx
    void **v19; // edi
    int v20; // [esp-10h] [ebp-1F0h]
    int v21; // [esp-10h] [ebp-1F0h]
    int v22; // [esp+10h] [ebp-1D0h]
    int v24; // [esp+18h] [ebp-1C8h] BYREF
    char v25[43]; // [esp+1Ch] [ebp-1C4h] BYREF
    int v26; // [esp+47h] [ebp-199h]
    int v27; // [esp+4Bh] [ebp-195h]
    int v28; // [esp+4Fh] [ebp-191h]
    char v29; // [esp+53h] [ebp-18Dh]
    char j; // [esp+54h] [ebp-18Ch]

    v7 = (char *)v23 + 12 * a2; /*0x430bba*/
    v8 = 0; /*0x430bbe*/
    v9 = v7; /*0x430bc4*/
    while ( *v9 ) /*0x430bc9*/
    {
      ++v8; /*0x430bcb*/
      ++v9; /*0x430bcc*/
      if ( v8 >= 3 ) /*0x430bd2*/
      {
        if ( a6 == -1 ) /*0x430bdc*/
          return; /*0x430bdc*/
        break; /*0x430bdc*/
      }
    }
    v10 = new unsigned char[0x114u]; /*0x430be2*/
    if ( v10 ) /*0x430bf3*/
    {
      v11 = (int *)v10; /*0x430bff*/
      *(unsigned int *)v10 = *(unsigned int *)&g_VisibilitySystem.needsRedraw; /*0x430c01*/
      v10->q004 = *(unsigned int *)&g_VisibilitySystem.hasParachute; /*0x430c08*/
      v10->u32_8 = g_VisibilitySystem.parachute; /*0x430c10*/
      v10->u32_C &= 0xFCu; /*0x430c1d*/
      memset((void *)(v10 + 14), 0, 0x100u); /*0x430c22*/
    }
    else
    {
      v11 = 0; /*0x430c2a*/
    }
    if ( a6 == -1 ) /*0x430c36*/
    {
      v12 = 0; /*0x430c3c*/
      for ( i = v7; *i; ++i ) /*0x430c3e*/
      {
        if ( ++v12 >= 3 ) /*0x430c4c*/
        {
          delete[] (v11); /*0x430c4f*/
          return; /*0x430c61*/
        }
      }
      a6 = v12; /*0x430c6b*/
      *((unsigned int *)&v23->AbstractClass + 2 * a2 + v12 + a2) = v11; /*0x430c72*/
    }
    else
    {
      v18 = a6 + 2 * a2 + a2; /*0x430e62*/
      v19 = &v23->AbstractClass + v18; /*0x430e6a*/
      if ( *v19 ) /*0x430e64*/
      {
        delete[] (*(&v23->AbstractClass + v18)); /*0x430e71*/
        --v23->customSound_controller[4]; /*0x430e7d*/
      }
      *v19 = v11; /*0x430e80*/
    }
    if ( a3 != *(unsigned int *)&g_VisibilitySystem.needsRedraw /*0x430ca3*/
      || a4 != *(unsigned int *)&g_VisibilitySystem.hasParachute
      || (AnimClass *)a5 != g_VisibilitySystem.parachute )
    {
      *v11 = a3; /*0x430cae*/
      v11[1] = a4; /*0x430cb0*/
      v11[2] = a5; /*0x430cb3*/
    }
    if ( a2 < 8 ) /*0x430cb9*/
    {
      v14 = *((unsigned char *)v11 + 12); /*0x430cbb*/
      v11[68] = a2; /*0x430cbe*/
      *((unsigned char *)v11 + 12) = v14 | 1; /*0x430cc6*/
    }
    ++v23->customSound_controller[4]; /*0x430cd1*/
    if ( *(unsigned int *)&dword_A8B238 && *(unsigned int *)&dword_A8B238 != 5 ) /*0x430ce4*/
    {
      if ( (void *)a2 == dword_A83D4C->relatedTagsCount ) /*0x430cf3*/
      {
        v20 = *(unsigned int *)&(&dword_A83D4C)[134].__pad_90[4]; /*0x430d0b*/
        StringCSF = GetStringCSF(&aTxtBeaconHelp1, 0, "D:\\ra2mdpost\\Beacon.CPP", 811); /*0x430d1d*/
        MessageListClass::AddMessage((MessageListClass *)&g_GameNetworkObject, 0, 0, StringCSF, v20, 16454, 225, 0); /*0x430d2c*/
        v21 = *(unsigned int *)&(&dword_A83D4C)[134].__pad_90[4]; /*0x430d4a*/
        v16 = GetStringCSF((char *)stru_818A68.Priority, 0, "D:\\ra2mdpost\\Beacon.CPP", 812); /*0x430d5a*/
        MessageListClass::AddMessage((MessageListClass *)&g_GameNetworkObject, 0, 0, v16, v21, 16454, 225, 0); /*0x430d69*/
        VoxClass::FindAndPlay((VoxClass *)&stru_818A68.YuriVoice[8], -1); /*0x430d78*/
        PlayVocClass(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 460), 0x2000, 1.0, 0); /*0x430d94*/
        v24 = 32; /*0x430d9f*/
        strcpy(v25, ToWideStringChar((char *)*(unsigned int *)dword_A8DA78)); /*0x430dcf*/
        v29 = a6; /*0x430de6*/
        v17 = 1; /*0x430def*/
        v26 = a3; /*0x430df6*/
        v27 = a4; /*0x430dfa*/
        v28 = a5; /*0x430dfe*/
        for ( j = a2; v17 < dword_A8DA84; ++v17 ) /*0x430e06*/
        {
          Debug::Log(); /*0x430e1b*/
          Network::SendMessage(&unk_A8E9C0.Socket, (int)&v24, 61, 1, (&dword_A8DA78)[v17] + 40, 0, 0); /*0x430e41*/
        }
      }
      else if ( (v11[3] & 1) != 0 ) /*0x430e8b*/
      {
        if ( (uint8_t)HouseClass::IsAllied((HouseClass *)dword_A83D4C, v11[68]) ) /*0x430e98*/
        {
          if ( (uint8_t)HouseClass::IsAlliedWith(*((void **)dword_A8022C + v11[68]), (void *)dword_A83D4C) ) /*0x430eb6*/
          {
            if ( !*(unsigned char *)(*((unsigned int *)dword_A8022C + v11[68]) + 501) ) /*0x430ece*/
            {
              (v22) = ((v22) & ~0xFFFF) | ((unsigned int)(a3 / 256) & 0xFFFF); /*0x430ee6*/
              (v22) = ((v22) & ~(0xFFFFULL << 16)) | (((uint64_t)(unsigned int)(a4 / 256) & 0xFFFF) << 16); /*0x430ef9*/
              if ( (uint8_t)CreateTriggerClassIfFarEnough(11, (uint8_t)(a4 >> 31), v22) ) /*0x430f08*/
                VoxClass::FindAndPlay(&stru_818A68, -1); /*0x430f1b*/
            }
          }
        }
      }
    }
  }
// 0x0043C0D0
  void* ObjectClass::CreateDominatorDestructionEffects()
  {
    void **result; // eax
    TechnoClass *v3; // edi
    int v4; // ebp
    int *v5; // eax
    int v6; // ecx
    int ptr_0; // edx
    unsigned int *v8; // eax
    void **v9; // ebx
    int FoundationHeight; // edi
    int v11; // ecx
    int v12; // eax
    int *v13; // [esp+0h] [ebp-3Ch]
    int v14; // [esp+10h] [ebp-2Ch]
    char *v15; // [esp+14h] [ebp-28h]
    void **v16; // [esp+18h] [ebp-24h]
    int v17; // [esp+1Ch] [ebp-20h] BYREF
    int v18; // [esp+24h] [ebp-18h] BYREF
    int v19; // [esp+28h] [ebp-14h]
    int v20; // [esp+2Ch] [ebp-10h]
    unsigned char v21[12]; // [esp+30h] [ebp-Ch] BYREF

    result = *&dword_8871E0->u32_2B0; /*0x43c0db*/
    v16 = result; /*0x43c0e6*/
    if ( result ) /*0x43c0ea*/
    {
      v3 = (TechnoClass *)((char *)v23 + 1480); /*0x43c105*/
      v14 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, (int)result - 1); /*0x43c10b*/
      v4 = 5592; /*0x43c10f*/
      v15 = (char *)v23 + 1480; /*0x43c114*/
      do /*0x43c28e*/
      {
        result = (void **)(*((unsigned int *)v23 + 328) + v4); /*0x43c121*/
        if ( *result == (void *)g_BuildingClassPool && result[1] == (void *)dword_89C84C || v3->ptr_0 ) /*0x43c13d*/
          break; /*0x43c140*/
        v5 = (int *)World::ToScreen(&v17, result, v13); /*0x43c152*/
        v6 = *v5; /*0x43c157*/
        v19 = v5->ptr_4; /*0x43c15e*/
        v20 = 0; /*0x43c162*/
        ptr_0 = v23->ptr_0; /*0x43c166*/
        v18 = v6; /*0x43c16c*/
        v8 = (unsigned int *)(*(int (**)(TechnoClass *, unsigned char *))(ptr_0 + 172))(v23, v21); /*0x43c173*/
        v18 += *v8; /*0x43c189*/
        v19 += v8[1]; /*0x43c197*/
        v20 += v8[2]; /*0x43c1a0*/
        result = (void **)new unsigned char[0x1C8u]; /*0x43c1a4*/
        if ( result ) /*0x43c1ae*/
        {
                     result = AnimClass::ctor( /*0x43c1dc*/
                     (AnimClass *)result,
                     *(void **)(*&dword_8871E0->AbstractClass_2A4 + 4 * v14),
                     &v18,
                     0,
                     1,
                     (void *)0x600,
                     0,
                     0);
                     v9 = result; /*0x43c1e1*/
                     if ( result ) /*0x43c1e5*/
                     {
            v3->ptr_0 = (int)result; /*0x43c1eb*/
            FoundationHeight = BuildingTypeClass::GetFoundationHeight(*((int **)v23 + 328), 0); /*0x43c200*/
            v11 = (3 /*0x43c21e*/
            * (*(unsigned int *)(*((unsigned int *)v23 + 328) + v4 + 4)
            - 15 * (BuildingTypeClass::GetFoundationWidth(*((BuildingTypeClass **)v23 + 328)) + FoundationHeight))) >> 1;
            v9[64] = (void *)(v11 - 10); /*0x43c225*/
            if ( v11 - 10 > 0 ) /*0x43c22b*/
              v9[64] = 0; /*0x43c22d*/
            v12 = *((unsigned int *)v9[50] + 176); /*0x43c23d*/
            if ( v12 > 0 ) /*0x43c245*/
              v9[43] = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v12 - 1); /*0x43c25b*/
            result = (void **)++v14; /*0x43c269*/
            if ( v14 >= (int)v16 ) /*0x43c270*/
              v14 = 0; /*0x43c272*/
                     }
        }
        v4 += 8; /*0x43c27e*/
        v3 = (TechnoClass *)(v15 + 4); /*0x43c281*/
        v15 += 4; /*0x43c28a*/
      }
      while ( v4 < 5656 ); /*0x43c28e*/
    }
    return result; /*0x43c294*/
  }
} // namespace gamemd
// 0x00458330
  char* ObjectClass::PlayHealthDependentBuildingAnim()
  {
    BOOL v3; // ebx
    bool v4; // al
    int v5; // edx
    AnimTypeClass *v6; // eax
    bool v7; // zf
    int v8; // eax
    BOOL v11; // ebx
    bool v12; // al
    int v13; // edx
    AnimTypeClass *v14; // eax
    int v15; // eax
    BOOL v18; // ebx
    bool v19; // al
    int v20; // edx
    AnimTypeClass *v21; // eax
    int v22; // eax
    BOOL v25; // ebx
    bool v26; // al
    int v27; // edx
    AnimTypeClass *v28; // eax
    int v29; // eax
    unsigned char *result; // eax
    BOOL v33; // ebx
    bool v34; // al
    int v35; // edx
    int v36; // eax
    int v37; // [esp+8h] [ebp-4h]

    if ( *((unsigned int *)v23 + 361) )
    {
      BuildingClass::GetHealthRatio((BuildingClass *)v23); /*0x45833f*/
      _EAX = dword_8871E0; /*0x458344*/
      __asm /*0x458349*/
      {
        fcomp qword ptr [eax+1700h]
        fnstsw ax
      }
      v3 = ((unsigned char)((_EAX) >> 8) & 0x41) != 0; /*0x458354*/
      v4 = (*(int (**)(TechnoClass *))(v23->ptr_0 + 1032))(v23) > 0; /*0x45836b*/
      v37 = v4; /*0x458370*/
      if ( v3 )
      {
        v6 = (AnimTypeClass *)(*((unsigned int *)v23 + 328) + 5156); /*0x45837c*/
      }
      else
      {
        v7 = !v4; /*0x458383*/
        v8 = *((unsigned int *)v23 + 328); /*0x458385*/
        v6 = (AnimTypeClass *)(v7 ? v8 + 5140 : v8 + 5172);
      }
      if ( v6 && (unsigned char)(v6->ptr_0) ) /*0x45839d*/
        BuildingClass::PlayAnim((BuildingClass *)v23, v5, v6, 18, v3, v37, 0); /*0x4583af*/
    }
    if ( *((unsigned int *)v23 + 346) )
    {
      BuildingClass::GetHealthRatio((BuildingClass *)v23); /*0x4583c0*/
      _EDX = dword_8871E0; /*0x4583c5*/
      __asm /*0x4583cb*/
      {
        fcomp qword ptr [edx+1700h]
        fnstsw ax
      }
      v11 = (_AX & 0x4100) != 0; /*0x4583d6*/
      v12 = (*(int (**)(TechnoClass *))(v23->ptr_0 + 1032))(v23) > 0; /*0x4583ed*/
      v37 = v12; /*0x4583f2*/
      if ( v11 )
      {
        v14 = (AnimTypeClass *)(*((unsigned int *)v23 + 328) + 4136); /*0x4583fe*/
      }
      else
      {
        v7 = !v12; /*0x458405*/
        v15 = *((unsigned int *)v23 + 328); /*0x458407*/
        v14 = (AnimTypeClass *)(v7 ? v15 + 4120 : v15 + 4152);
      }
      if ( v14 && (unsigned char)(v14->ptr_0) ) /*0x45841f*/
        BuildingClass::PlayAnim((BuildingClass *)v23, v13, v14, 3, v11, v37, 0); /*0x458431*/
    }
    if ( *((unsigned int *)v23 + 347) )
    {
      BuildingClass::GetHealthRatio((BuildingClass *)v23); /*0x458442*/
      _EDX = dword_8871E0; /*0x458447*/
      __asm /*0x45844d*/
      {
        fcomp qword ptr [edx+1700h]
        fnstsw ax
      }
      v18 = (_AX & 0x4100) != 0; /*0x458458*/
      v19 = (*(int (**)(TechnoClass *))(v23->ptr_0 + 1032))(v23) > 0; /*0x45846f*/
      v37 = v19; /*0x458474*/
      if ( v18 )
      {
        v21 = (AnimTypeClass *)(*((unsigned int *)v23 + 328) + 4204); /*0x458480*/
      }
      else
      {
        v7 = !v19; /*0x458487*/
        v22 = *((unsigned int *)v23 + 328); /*0x458489*/
        v21 = (AnimTypeClass *)(v7 ? v22 + 4188 : v22 + 4220);
      }
      if ( v21 && (unsigned char)(v21->ptr_0) ) /*0x4584a1*/
        BuildingClass::PlayAnim((BuildingClass *)v23, v20, v21, 4, v18, v37, 0); /*0x4584b3*/
    }
    if ( *((unsigned int *)v23 + 348) )
    {
      BuildingClass::GetHealthRatio((BuildingClass *)v23); /*0x4584c4*/
      _EDX = dword_8871E0; /*0x4584c9*/
      __asm /*0x4584cf*/
      {
        fcomp qword ptr [edx+1700h]
        fnstsw ax
      }
      v25 = (_AX & 0x4100) != 0; /*0x4584da*/
      v26 = (*(int (**)(TechnoClass *))(v23->ptr_0 + 1032))(v23) > 0; /*0x4584f1*/
      v37 = v26; /*0x4584f6*/
      if ( v25 )
      {
        v28 = (AnimTypeClass *)(*((unsigned int *)v23 + 328) + 4272); /*0x458502*/
      }
      else
      {
        v7 = !v26; /*0x458509*/
        v29 = *((unsigned int *)v23 + 328); /*0x45850b*/
        v28 = (AnimTypeClass *)(v7 ? v29 + 4256 : v29 + 4288);
      }
      if ( v28 && (unsigned char)(v28->ptr_0) ) /*0x458523*/
        BuildingClass::PlayAnim((BuildingClass *)v23, v27, v28, 5, v25, v37, 0); /*0x458535*/
    }
    result = (unsigned char *)*((unsigned int *)v23 + 349); /*0x45853a*/
    if ( result ) /*0x458542*/
    {
      BuildingClass::GetHealthRatio((BuildingClass *)v23); /*0x458546*/
      _EDX = dword_8871E0; /*0x45854b*/
      __asm /*0x458551*/
      {
        fcomp qword ptr [edx+1700h]
        fnstsw ax
      }
      v33 = (_AX & 0x4100) != 0; /*0x45855c*/
      v34 = (*(int (**)(TechnoClass *))(v23->ptr_0 + 1032))(v23) > 0; /*0x458573*/
      v37 = v34; /*0x458578*/
      if ( v33 ) /*0x45857c*/
      {
        result = (unsigned char *)(*((unsigned int *)v23 + 328) + 4340); /*0x458584*/
      }
      else
      {
        v7 = !v34; /*0x45858b*/
        v36 = *((unsigned int *)v23 + 328); /*0x45858d*/
        if ( v7 ) /*0x458593*/
          result = (unsigned char *)(v36 + 4324); /*0x45859c*/
        else
          result = (unsigned char *)(v36 + 4356); /*0x458595*/
      }
      if ( result ) /*0x4585a3*/
      {
        if ( *result ) /*0x4585a5*/
          return (unsigned char *)BuildingClass::PlayAnim((BuildingClass *)v23, v35, (AnimTypeClass *)result, 6, v33, v37, 0); /*0x4585b7*/
      }
    }
    return result; /*0x4585bc*/
  }
// 0x00459CA0
  char ObjectClass::ProcessDataCellClass()
  {
    unsigned short *v1; // esi
    int v2; // edi
    int16_t v3; // bx
    unsigned short *v4; // eax
    int16_t v5; // dx
    bool *v6; // eax
    int16_t v8[2]; // [esp+Ch] [ebp-8h] BYREF
    int v9; // [esp+10h] [ebp-4h] BYREF

    v1 = *(unsigned short **)(*((unsigned int *)v23 + 328) + 3796); /*0x459cad*/
    v2 = *(unsigned int *)(*(int (**)(TechnoClass *, int *))(v23->ptr_0 + 440))(v23, &v9); /*0x459cbf*/
    v9 = v2; /*0x459cc3*/
    if ( v1 ) /*0x459cc7*/
    {
      v3 = (((unsigned int)(v9) >> 16) & 0xFFFF); /*0x459ccd*/
      while ( *v1 != 0x7FFF || v1[1] != 0x7FFF ) /*0x459cdf*/
      {
        v4 = v1; /*0x459ce5*/
        v1 += 2; /*0x459cea*/
        v5 = v3 + v4[1]; /*0x459cf4*/
        (v9) = ((v9) & ~0xFFFF) | ((unsigned int)(*v4 + v2) & 0xFFFF); /*0x459cf7*/
        (v9) = ((v9) & ~(0xFFFFULL << 16)) | (((uint64_t)(unsigned int)(v5) & 0xFFFF) << 16); /*0x459d00*/
        *(unsigned int *)v8 = v9; /*0x459d0f*/
        if ( (uint8_t)((LayerClass *)&dword_87F7E8)->CoordinatesLegal( v8) ) /*0x459d13*/
        {
          if ( !*((unsigned int *)((CellCoord *)&dword_87F7E8)->To_CellObj(v8) + 57) ) /*0x459d2b*/
          {
            v6 = (bool *)((CellCoord *)&dword_87F7E8)->To_CellObj(v8); /*0x459d4d*/
            if ( (uint8_t)Cell::IsBuildable(v6, 0, 0, 0, -1, 0, -1, 1) ) /*0x459d54*/
              return 1; /*0x459d69*/
          }
        }
      }
    }
    return 0; /*0x459d61*/
  }
// 0x00465570
  void* ObjectClass::CalculateBuildingFoundationBounds(BuildingTypeClass * aP1)
  {
    int16_t *v3; // eax
    int v4; // esi
    int v5; // ebx
    int v6; // ebp
    int v7; // edi
    int *FoundationSize; // eax
    int v9; // edx
    int v10; // ecx
    int v11; // eax
    int v12; // eax
    int v13; // eax
    int *v14; // eax
    int v15; // edx
    int v16; // ecx
    int v17; // eax
    int v18; // eax
    void *v19; // eax
    int v20; // ecx
    int v21; // edx
    int v22; // eax
    int v23; // edi
    int v24; // ebx
    bool v25; // [esp+7h] [ebp-49h]
    signed int i; // [esp+8h] [ebp-48h]
    signed int j; // [esp+8h] [ebp-48h]
    signed int v29; // [esp+14h] [ebp-3Ch]
    signed int v30; // [esp+14h] [ebp-3Ch]
    int v31; // [esp+18h] [ebp-38h]
    int v32; // [esp+20h] [ebp-30h]
    int *v33; // [esp+20h] [ebp-30h]
    int v34; // [esp+24h] [ebp-2Ch]
    int v35; // [esp+28h] [ebp-28h]
    int *v36; // [esp+2Ch] [ebp-24h]
    int v37; // [esp+30h] [ebp-20h] BYREF
    int v38; // [esp+34h] [ebp-1Ch]
    int v39; // [esp+38h] [ebp-18h]
    int v40; // [esp+3Ch] [ebp-14h]
    int v41[4]; // [esp+40h] [ebp-10h] BYREF

    v36 = (int *)((char *)v23 + 5432); /*0x46558c*/
    if ( *((unsigned int *)v23 + 1358) == dword_89C8A0 /*0x4655b7*/
      && *((unsigned int *)v23 + 1359) == dword_89C8A4
      && *((unsigned int *)v23 + 1360) == dword_89C8A8
      && *((unsigned int *)v23 + 1361) == dword_89C8AC )
    {
      v3 = (int16_t *)(*((int (**)(ObjectClass *))v23->AbstractClass + 39))(v23); /*0x4655de*/
      if ( v3 ) /*0x4655ea*/
      {
        v4 = dword_89C8A8; /*0x465624*/
        v34 = v3[1]; /*0x46562a*/
        v5 = dword_89C8A4; /*0x465633*/
        v6 = dword_89C8AC; /*0x46563a*/
        v7 = dword_89C8A0; /*0x465641*/
        v29 = v3[3]; /*0x465649*/
        v35 = v3[2]; /*0x46564d*/
        for ( i = 0; i < v29; ++i ) /*0x465659*/
        {
          FoundationSize = Building::GetFoundationSize(&v37, i); /*0x465671*/
          if ( v4 <= 0 || v6 <= 0 ) /*0x46567c*/
          {
            v7 = *FoundationSize; /*0x4656e0*/
            v5 = FoundationSize->ptr_4; /*0x4656e2*/
            v4 = FoundationSize->ptr_8; /*0x4656e5*/
            v12 = FoundationSize->ptr_C; /*0x4656e8*/
          }
          else
          {
            v9 = FoundationSize->ptr_8; /*0x46567e*/
            if ( v9 > 0 ) /*0x465687*/
            {
              v32 = FoundationSize->ptr_C; /*0x46568e*/
              if ( v32 > 0 ) /*0x465692*/
              {
                v10 = *FoundationSize; /*0x465694*/
                if ( v7 > *FoundationSize ) /*0x465698*/
                {
                  v4 = v7 + v4 - v10; /*0x46569c*/
                  v7 = *FoundationSize; /*0x46569e*/
                }
                v11 = FoundationSize->ptr_4; /*0x4656a0*/
                if ( v5 > v11 ) /*0x4656a9*/
                {
                  v6 += v5 - v11; /*0x4656ad*/
                  v5 = v11; /*0x4656af*/
                }
                if ( v4 + v7 < v10 + v9 ) /*0x4656b9*/
                  v4 = v10 - v7 + v9 + 1; /*0x4656c1*/
                if ( v5 + v6 < v11 + v32 ) /*0x4656d5*/
                  v6 = v11 + v32 - v5 + 1; /*0x4656da*/
              }
            }
            v12 = v6; /*0x4656dc*/
          }
          v6 = v12; /*0x4656ef*/
        }
        v25 = *((unsigned int *)v23 + 896) == 0; /*0x465710*/
        v13 = (*((int (**)(ObjectClass *))v23->AbstractClass + 48))(v23); /*0x465715*/
        if ( v13 ) /*0x465721*/
        {
          v30 = v13->u32_18; /*0x46572d*/
          for ( j = 0; j < v30; ++j ) /*0x465739*/
          {
            v14 = Building::GetFoundationSize(&v37, j); /*0x465751*/
            if ( v4 <= 0 || v6 <= 0 ) /*0x46575c*/
            {
              v7 = *v14; /*0x4657c0*/
              v5 = v14->ptr_4; /*0x4657c2*/
              v4 = v14->ptr_8; /*0x4657c5*/
              v18 = v14->ptr_C; /*0x4657c8*/
            }
            else
            {
              v15 = v14->ptr_8; /*0x46575e*/
              if ( v15 > 0 ) /*0x465767*/
              {
                v31 = v14->ptr_C; /*0x46576e*/
                if ( v31 > 0 ) /*0x465772*/
                {
                  v16 = *v14; /*0x465774*/
                  if ( v7 > *v14 ) /*0x465778*/
                  {
                    v4 = v7 + v4 - v16; /*0x46577c*/
                    v7 = *v14; /*0x46577e*/
                  }
                  v17 = v14->ptr_4; /*0x465780*/
                  if ( v5 > v17 ) /*0x465789*/
                  {
                    v6 += v5 - v17; /*0x46578d*/
                    v5 = v17; /*0x46578f*/
                  }
                  if ( v4 + v7 < v16 + v15 ) /*0x465799*/
                    v4 = v16 - v7 + v15 + 1; /*0x4657a1*/
                  if ( v5 + v6 < v17 + v31 ) /*0x4657b5*/
                    v6 = v17 + v31 - v5 + 1; /*0x4657ba*/
                }
              }
              v18 = v6; /*0x4657bc*/
            }
            v6 = v18; /*0x4657cf*/
          }
          if ( v25 ) /*0x4657e8*/
          {
            if ( *((unsigned char *)v23 + 5986) ) /*0x4657ee*/
            {
              v19 = (void *)*((unsigned int *)v23 + 896); /*0x4657f8*/
              if ( v19 ) /*0x465800*/
              {
                delete[] (v19); /*0x465803*/
                *((unsigned int *)v23 + 896) = 0; /*0x46580f*/
                *((unsigned char *)v23 + 3588) = 0; /*0x465819*/
              }
            }
          }
        }
        if ( *((unsigned int *)v23 + 1350) ) /*0x465824*/
        {
          v33 = Building::GetFoundationSize(v41, 0); /*0x46583e*/
          v20 = *v33; /*0x465842*/
          v38 = v33[1]; /*0x465849*/
          v21 = v33[2]; /*0x46584d*/
          v39 = v21; /*0x465850*/
          v22 = v33[3]; /*0x465854*/
          v40 = v22; /*0x465857*/
          if ( v4 <= 0 || v6 <= 0 ) /*0x46585f*/
          {
            v7 = *v33; /*0x4658b6*/
            v5 = v33[1]; /*0x4658b8*/
            v4 = v33[2]; /*0x4658bb*/
            v6 = v33[3]; /*0x4658be*/
          }
          else if ( v21 > 0 && v22 > 0 ) /*0x465867*/
          {
            if ( v7 > v20 ) /*0x46586b*/
            {
              v4 = v7 + v4 - v20; /*0x46586f*/
              v7 = v20; /*0x465871*/
            }
            if ( v5 > v38 ) /*0x465879*/
            {
              v6 += v5 - v38; /*0x46587d*/
              v5 = v38; /*0x46587f*/
            }
            if ( v4 + v7 < v20 + v21 ) /*0x465888*/
              v4 = v20 - v7 + v39 + 1; /*0x465890*/
            if ( v5 + v6 < v38 + v40 ) /*0x4658a4*/
              v6 = v38 - v5 + v40 + 1; /*0x4658ac*/
          }
        }
        v23 = v7 - v34 / 2; /*0x4658ca*/
        v24 = v5 - v35 / 2; /*0x4658d5*/
        *v36 = v23; /*0x4658db*/
        v36[1] = v24; /*0x4658dd*/
        v36[2] = v4; /*0x4658e0*/
        v36[3] = v6; /*0x4658e3*/
        *a2 = v23; /*0x4658ec*/
        a2[1] = v24; /*0x4658ef*/
        a2[2] = v4; /*0x4658f2*/
        a2[3] = v6; /*0x4658f5*/
        return a2; /*0x4658e6*/
      }
      else
      {
        *a2 = dword_89C8A0; /*0x4655f9*/
        a2[1] = dword_89C8A4; /*0x465601*/
        a2[2] = dword_89C8A8; /*0x46560a*/
        a2[3] = dword_89C8AC; /*0x465613*/
        return a2; /*0x4655ec*/
      }
    }
    else
    {
      *a2 = *((unsigned int *)v23 + 1358); /*0x4655c1*/
      a2[1] = *((unsigned int *)v23 + 1359); /*0x4655c6*/
      a2[2] = *((unsigned int *)v23 + 1360); /*0x4655cc*/
      a2[3] = *((unsigned int *)v23 + 1361); /*0x4655d3*/
      return a2; /*0x4655b9*/
    }
  }
// 0x0047BDB0
  int ObjectClass::GetBridgeCellColor(char* a2, char a3)
  {
    unsigned int *v4; // edi
    int v5; // eax
    int v6; // eax
    int v7; // ecx
    int v8; // eax
    int v9; // ebx
    int RadarColor; // eax
    int v12; // esi
    BombClass *attachedBomb; // ecx
    BombClass *v14; // edx
    ObjectClass *v15; // edi
    int inited; // eax
    unsigned int *v17; // eax
    uint16_t *_549E50; // eax
    unsigned char v19[28]; // [esp-1Ch] [ebp-34h] BYREF
    int16_t v20; // [esp+10h] [ebp-8h]
    uint8_t v21; // [esp+12h] [ebp-6h]

    v19[24] = 0; /*0x47bdbb*/
    *(unsigned int *)&v19[20] = 6; /*0x47bdbf*/
    *a2 = 0; /*0x47bdc1*/
    v4 = PlacementList::FindByID((PlacementList *)v23, *(int *)&v19[20], v19[24]); /*0x47bdc9*/
    if ( !a3 ) /*0x47bdd1*/
    {
      if ( v4 ) /*0x47bdd9*/
      {
        v5 = v4->Type; /*0x47bddf*/
        if ( !v5->Invisible /*0x47be0f*/
          && !v5->InvisibleInGame
          && v4->UpdatePowerDrain(0, 0) != 5 )
        {
          v6 = *(unsigned int *)(*(unsigned int *)&BuildingTypeClass_AnimTable + 4 * v4->owner->startingCell); /*0x47be23*/
          v7 = *(unsigned int *)(v6 + 788); /*0x47be26*/
          v8 = *(unsigned int *)(v6 + 780); /*0x47be2c*/
          if ( v8->q004 == 1 ) /*0x47be36*/
            v9 = *(uint8_t *)(v8->q174 + v7); /*0x47be40*/
          else
            v9 = *(uint16_t *)(v8->q174 + 2 * v7); /*0x47be4d*/
          if ( !v9 ) /*0x47be53*/
          {
            memcpy(v19, &v4->Type->BarrelVoxel, 0x19u); /*0x47be6d*/
            Debug::Log(); /*0x47be70*/
          }
          return v9 | (v9 << 16); /*0x47be86*/
        }
      }
    }
    if ( (*((unsigned int *)v23 + 80) & 0x100) == 0 ) /*0x47be92*/
    {
      attachedBomb = v23->attachedBomb; /*0x47bfa8*/
      v14 = (BombClass *)dword_AA10B0; /*0x47bfab*/
      if ( attachedBomb == 0xFFFF ) /*0x47bfbc*/
        v15 = *(ObjectClass **)(*(unsigned int * *)((char *)&stru_A8EB00 + 556) + 4 * dword_AA10B0); /*0x47bfc3*/
      else
        v15 = *(ObjectClass **)(*(unsigned int * *)((char *)&stru_A8EB00 + 556) + 4 * (unsigned int)attachedBomb); /*0x47bfbe*/
      inited = 0; /*0x47bfc6*/
      if ( attachedBomb == 0xFFFF ) /*0x47bfce*/
      {
        *(unsigned int *)&v19[24] = v15[4].ambientSoundController[1]; /*0x47c00d*/
      }
      else
      {
        if ( v15[4].ambientSoundController[1] <= 1 ) /*0x47bfd7*/
        {
  LABEL_27:
          v17 = Map_Get(v15, inited); /*0x47c016*/
    _549E50 = (uint16_t *)Map_Get_549E50((int)v17, *((uint8_t *)v23 + 282), *((char *)v23 + 283)); /*0x47c031*/
    return _549E50[1] | (*_549E50 << 16); /*0x47c049*/
        }
        if ( (uint8_t)CellClass::GetTerrainFlag((CellClass *)v15, *((uint8_t *)v23 + 282)) ) /*0x47bfe4*/
        {
          inited = (*((unsigned int *)v23 + 80) >> 13) & 1; /*0x47bff6*/
          goto LABEL_27; /*0x47bff9*/
        }
        v14 = v23->attachedBomb; /*0x47c001*/
        *(unsigned int *)&v19[24] = v15[4].ambientSoundController[1]; /*0x47c004*/
      }
      inited = CellClass::InitRandomOffsets((int *)v23, (int)v14, *(int *)&v19[24]); /*0x47c011*/
      goto LABEL_27; /*0x47c011*/
    }
    RadarColor = OverlayTypeClass::GetRadarColor( /*0x47bea8*/
                   *(OverlayTypeClass **)(*(unsigned int *)g_BuildingTypeClass_Array + 96),
                   (int)&a3,
                   0);
    v20 = *(unsigned short *)RadarColor; /*0x47bebc*/
    v21 = *(unsigned char *)(RadarColor + 2); /*0x47beca*/
    v12 = (v21 >> g_BitMask_Red << g_BitShift_Blue) /*0x47bf24*/
    | ((unsigned char)((v20) >> 8) >> g_BitMask_Blue << g_BitMask_Green)
    | ((uint8_t)v20 >> g_BitShift_Green_0 << g_BitShift_Red);
    if ( !v12 ) /*0x47bf26*/
    {
      v12 = (*(uint8_t *)(*(unsigned int *)(*(unsigned int *)g_BuildingTypeClass_Array + 96) + 696) >> g_BitMask_Red << g_BitShift_Blue) /*0x47bf86*/
      | ((uint8_t)(((unsigned int)(*(unsigned short *)(*(unsigned int *)(*(unsigned int *)g_BuildingTypeClass_Array + 96) + 694)) >> 24) & 0xFF) >> g_BitMask_Blue << g_BitMask_Green)
      | ((uint8_t)*(unsigned short *)(*(unsigned int *)(*(unsigned int *)g_BuildingTypeClass_Array + 96) + 694) >> g_BitShift_Green_0 << g_BitShift_Red);
      if ( !v12 ) /*0x47bf88*/
      {
        *(unsigned int *)&v19[24] = aWeJustGotABlac_0; /*0x47bf8a*/
        Debug::Log(); /*0x47bf8f*/
      }
    }
    return v12 | (v12 << 16); /*0x47be7f*/
  }
// 0x0047C060
  char ObjectClass::GetCellRadarColors(int aThis, int a3)
  {
    int RadarColor; // eax
    int v5; // ecx
    int v6; // edx
    int v7; // eax
    int *v8; // edi
    int v9; // eax
    int v10; // ecx
    int v11; // eax
    int v12; // ecx
    char **v13; // eax
    int inited; // eax
    unsigned int *v15; // edi
    unsigned char *v16; // ecx
    char v17; // dl
    char v18; // al
    unsigned char *v19; // eax
    int v21; // ecx
    unsigned int v22; // edx
    int16_t v24; // [esp+8h] [ebp-Ch] BYREF
    int16_t v25; // [esp+Ch] [ebp-8h] BYREF
    uint8_t v26; // [esp+Eh] [ebp-6h]
    int16_t v27; // [esp+18h] [ebp+4h]

    if ( PlacementList::FindByID((unsigned int *)v23, 36, 0) ) /*0x47c06b*/
    {
      v24 = -14136; /*0x47c07a*/
      *(unsigned short *)a2 = v23; /*0x47c089*/
      a2->ptr_8 = -96; /*0x47c098*/
      *(unsigned short *)a3 = -14136; /*0x47c0a0*/
      a3->u32_8 = -96; /*0x47c0a5*/
      (RadarColor) = ((RadarColor) & ~0xFF) | ((unsigned int)(-96) & 0xFF); /*0x47c087*/
      return RadarColor; /*0x47c0ab*/
    }
    if ( (v23->flags & 0x100) != 0 ) /*0x47c0b7*/
    {
      RadarColor = OverlayTypeClass::GetRadarColor((int *)((unsigned int *)dword_A83D84)[0], (int)&v24, 0); /*0x47c0c9*/
      v5 = a2; /*0x47c0ce*/
      v6 = RadarColor; /*0x47c0d2*/
      LABEL_18:
      *(unsigned short *)v5 = *(unsigned short *)v6; /*0x47c18f*/
        v5->ptr_8 = v6->u32_8; /*0x47c19a*/
        *(unsigned short *)a3 = *(unsigned short *)RadarColor; /*0x47c1a4*/
        (RadarColor) = ((RadarColor) & ~0xFF) | ((unsigned int)(*(unsigned char *)(RadarColor + 2)) & 0xFF); /*0x47c1a7*/
        a3->u32_8 = RadarColor; /*0x47c1aa*/
        return RadarColor; /*0x47c1b0*/
    }
    v7 = v23->q038; /*0x47c0d9*/
    if ( v7 == 0xFFFF ) /*0x47c0e1*/
      v8 = (int *)*((unsigned int *)dword_A8ED2C + dword_AA10B0); /*0x47c0f9*/
    else
      v8 = (int *)*((unsigned int *)dword_A8ED2C + v7); /*0x47c0e9*/
    v9 = v23->q044; /*0x47c0fc*/
    if ( v9 != -1 && v9 != 239 ) /*0x47c136*/
    {
      v10 = *((unsigned int *)&dword_A83D84->TechnoTypeClass + v9); /*0x47c143*/
      if ( !*(unsigned char *)(v10 + 681) ) /*0x47c146*/
      {
        if ( (v9 < 74 || v9 > 99) && (v9 < 205 || v9 > 230) ) /*0x47c167*/
          v11 = OverlayTypeClass::GetRadarColor( /*0x47c182*/
                  *((int **)&dword_A83D84->TechnoTypeClass + v9),
                  (int)&v24,
                  v23->powerup);
        else
          v11 = OverlayTypeClass::GetRadarColor(*((int **)&dword_A83D84->TechnoTypeClass + v9), (int)&v24, 1u); /*0x47c16f*/
        v6 = v11; /*0x47c187*/
        RadarColor = a2; /*0x47c189*/
        v5 = a2; /*0x47c18d*/
        goto LABEL_18; /*0x47c18d*/
      }
      v12 = v10->q29C; /*0x47c1b3*/
      if ( v12 ) /*0x47c1bb*/
      {
        v13 = (char **)(*(int (**)(int))(v12->Armor)(v12); /*0x47c1bf*/
        RadarColor = MixFileClass::GetPixelData(v13, (int)&v24, v23->powerup); /*0x47c1d5*/
        *(unsigned short *)a2 = *(unsigned short *)RadarColor; /*0x47c1e4*/
        a2->ptr_8 = *(unsigned char *)(RadarColor + 2); /*0x47c1eb*/
        *(unsigned short *)a3 = *(unsigned short *)RadarColor; /*0x47c1f5*/
        (RadarColor) = ((RadarColor) & ~0xFF) | ((unsigned int)(*(unsigned char *)(RadarColor + 2)) & 0xFF); /*0x47c1f8*/
        a3->u32_8 = RadarColor; /*0x47c1fb*/
        return RadarColor; /*0x47c201*/
      }
      if ( FindBuildingByTiberiumType(v9) != -1 ) /*0x47c20e*/
      {
        v24 = -21846; /*0x47c216*/
        *(unsigned short *)a2 = v23; /*0x47c225*/
        a2->ptr_8 = -126; /*0x47c234*/
        *(unsigned short *)a3 = -21846; /*0x47c23c*/
        a3->u32_8 = -126; /*0x47c241*/
        (RadarColor) = ((RadarColor) & ~0xFF) | ((unsigned int)(-126) & 0xFF); /*0x47c223*/
        return RadarColor; /*0x47c247*/
      }
    }
    inited = 0; /*0x47c24d*/
    if ( v23->q038 == 0xFFFF ) /*0x47c255*/
    {
      inited = CellClass::InitRandomOffsets((int *)v23, dword_AA10B0, v8[188]); /*0x47c29d*/
    }
    else if ( v8[188] > 1 ) /*0x47c25e*/
    {
      (inited) = ((inited) & ~0xFF) | ((unsigned int)(v23->height) & 0xFF); /*0x47c260*/
      if ( (uint8_t)CellClass::GetTerrainFlag(v8, inited) ) /*0x47c269*/
        inited = (v23->flags >> 13) & 1; /*0x47c27b*/
      else
        inited = CellClass::InitRandomOffsets((int *)v23, v23->q038, v8[188]); /*0x47c28b*/
    }
    v15 = Map_Get(v8, inited); /*0x47c2aa*/
    if ( !v15->q0A4 && v15->u32_2F4 ) /*0x47c2b6*/
      CellClass::EnsureFileLoaded((int)v15); /*0x47c2c2*/
    v16 = *(unsigned char **)(v15[41] + 4 * v23->height + 16); /*0x47c2d5*/
    if ( v16 ) /*0x47c2df*/
    {
      v17 = v16[44]; /*0x47c2ea*/
      v18 = v16[43]; /*0x47c2ed*/
      v26 = v16[45]; /*0x47c2f0*/
      v25 = ((v25) & 0xFFFFFF00u) | ((unsigned int)(v18) & 0xFFu); /*0x47c2fa*/
      v25 = ((v25) & 0xFFFF00FFu) | (((unsigned int)(v17) & 0xFFu) << 8); /*0x47c2fe*/
      v19 = Color::ScaleRGB(&v24, (uint8_t *)&v25, (&dword_7E1BD0)[28 * dword_A8B230[130].uniqueId]); /*0x47c324*/
      v25 = *(unsigned short *)v19; /*0x47c330*/
      v26 = v19->u32_2; /*0x47c338*/
      RadarColor = (uint8_t)v25 >> 1; /*0x47c353*/
      v21 = (unsigned char)((v25) >> 8) >> 1; /*0x47c355*/
      v24 = ((v24) & 0xFFFFFF00u) | ((unsigned int)((uint8_t)v25 >> 1) & 0xFFu); /*0x47c357*/
      v24 = ((v24) & 0xFFFF00FFu) | (((unsigned int)((unsigned char)((v25) >> 8) >> 1) & 0xFFu) << 8); /*0x47c35b*/
      v22 = v26; /*0x47c364*/
      *(unsigned short *)a2 = v24; /*0x47c36a*/
      v27 = ((v27) & 0xFFFF00FFu) | (((unsigned int)(v21) & 0xFFu) << 8); /*0x47c36d*/
      v27 = ((v27) & 0xFFFFFF00u) | ((unsigned int)(RadarColor) & 0xFFu); /*0x47c375*/
      v22 >>= 1; /*0x47c37f*/
      a2->ptr_8 = v22; /*0x47c381*/
      *(unsigned short *)a3 = v27; /*0x47c384*/
      a3->u32_8 = v22; /*0x47c388*/
    }
    else
    {
      *(unsigned short *)a2 = 15420; /*0x47c3a8*/
      a2->ptr_8 = 60; /*0x47c3b5*/
      *(unsigned short *)a3 = 15420; /*0x47c3bd*/
      a3->u32_8 = 60; /*0x47c3c0*/
      (RadarColor) = ((RadarColor) & ~0xFF) | ((unsigned int)(60) & 0xFF); /*0x47c395*/
    }
    return RadarColor; /*0x47c082*/
  }
// 0x004838E0
  char ObjectClass::IsCoordValidMap(ObjectClass * aP1)
  {
    int result; // eax
    unsigned int *v4; // esi
    int v5; // esi
    unsigned int *v6; // esi

    result = ((LayerClass *)&dword_87F7E8)->IsWithinUsableArea( (int16_t *)(v23 + 36), 1); /*0x4838ef*/
    if ( result ) /*0x4838f6*/

    {
      result = v23->flags; /*0x4838fc*/
      if ( (result & 0x500) == 0 ) /*0x483905*/
      {
        if ( !byte_A8E9A0 ) /*0x483912*/
          goto LABEL_17; /*0x483912*/
        v4 = v23->firstObject; /*0x483918*/
        if ( v4 ) /*0x483920*/
        {
          while ( v4->vt_slot_44() != 6 ) /*0x48392c*/
          {
            v4 = v4->u32_30; /*0x48392e*/
            if ( !v4 ) /*0x483933*/
              goto LABEL_11; /*0x483933*/
          }
          result = v4[27]; /*0x48393b*/
          if ( result > 0 ) /*0x483940*/
          {
            v5 = v4[328]; /*0x483942*/
            if ( !*(unsigned char *)(v5 + 3226) && !*(unsigned char *)(v5 + 5889) ) /*0x48395a*/
              goto LABEL_24; /*0x48395a*/
          }
        }
        LABEL_11:
        if ( !byte_A8E9A0 ) /*0x483967*/
          goto LABEL_17; /*0x483967*/
          v6 = v23->firstObject; /*0x483969*/
          if ( !v6 ) /*0x483971*/
            goto LABEL_17; /*0x483971*/
          while ( 1 ) /*0x483977*/
        {
          result = v6->vt_slot_44(); /*0x483977*/
          if ( result == 36 ) /*0x48397d*/
            break; /*0x48397d*/
          v6 = v6->u32_30; /*0x48397f*/
          if ( !v6 ) /*0x483984*/
            goto LABEL_17; /*0x483984*/
        }
          if ( !*(unsigned char *)(v6[50] + 689) ) /*0x483992*/
        {
  LABEL_17:
          result = v23->landType; /*0x48399c*/
    if ( ((unsigned char *)&byte_89EA60)[36 * result] ) /*0x4839a5*/
  {
            if ( v23->q044 == -1 && !v23->slopeIndex ) /*0x4839b6*/
            {
              result = v23->q038; /*0x4839c0*/
              if ( result < 0 || result >= dword_A8ED38 || *(unsigned char *)(*((unsigned int *)dword_A8ED2C + result) + 774) ) /*0x4839d8*/
              {
                result = 1; /*0x4839e3*/
                return result; /*0x4839e6*/
              }
            }
  }
        }
      }
    }
    LABEL_24:
    result = 0; /*0x4839e9*/
      return result; /*0x4839e2*/
  }
// 0x00486E30
  int ObjectClass::Helper_486E30()
  {
    int16_t *p_occupant; // edi
    RandomMap *v3; // eax
    CellClass *v5; // eax

    p_occupant = (int16_t *)&v23->occupant; /*0x486e34*/
    v3 = (RandomMap *)Helper_486E30_Helper((ObjectClass *)&v23->occupant); /*0x486e39*/
    if ( v3 ) /*0x486e40*/
    {
      RandomMap::RemoveMatching(v3, (int)v23); /*0x486e45*/
    }
    else
    {
      v5 = (CellClass *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(p_occupant); /*0x486e55*/
      CellClass::ProcessBridgeRepair(v5); /*0x486e5c*/
    }
    return 0; /*0x486e4a*/
  }
// 0x0048DF30
  int ObjectClass::LookupNameIndex()
  {
    int v2; // esi

    if ( !v23 ) /*0x48df36*/
      return -1; /*0x48df36*/
    if ( !_strcmpi(g_Str__none_, (char *)v23) ) /*0x48df3e*/
      return -1; /*0x48df3e*/
    v2 = 0; /*0x48df4f*/
    if ( g_MissionQueueFrame.localVariables[583] <= 0 ) /*0x48df53*/
      return -1; /*0x48df75*/
    while ( _strcmpi((char *)v23, *(char **)(g_MissionQueueFrame.localVariables[580] + 4 * v2)) ) /*0x48df69*/
    {
      if ( ++v2 >= g_MissionQueueFrame.localVariables[583] ) /*0x48df73*/
        return -1; /*0x48df73*/
    }
    return v2; /*0x48df75*/
  }
// 0x0049B930
  char ObjectClass::UpdateScoreScreenStatistics()
  {
    int v3; // ebx
    int v4; // ecx
    int v5; // edi
    int v6; // esi
    int v7; // eax
    int v8; // edx
    int v9; // ebx
    int v10; // edi
    int v11; // ecx
    int customSound; // eax
    int v13; // esi
    int v14; // eax
    int v15; // edi
    int v16; // ebx
    int v17; // ecx
    int v18; // esi
    int v19; // eax
    int v20; // eax
    int v21; // edx
    int v22; // edi
    int v23; // eax
    int v24; // edi
    int v25; // esi
    int v26; // ecx
    int uniqueId; // esi
    int *p_vtable2; // edi
    int v29; // ecx
    int v30; // esi
    int v31; // ecx
    int v32; // edi
    int *v33; // esi
    int v34; // esi
    int v35; // ecx
    int v36; // esi
    int v37; // ecx
    unsigned char v38[16]; // [esp-Ch] [ebp-2F0h] BYREF
    wchar_t Destination[24]; // [esp+4h] [ebp-2E0h] BYREF
    int v40; // [esp+34h] [ebp-2B0h]
    int v41; // [esp+44h] [ebp-2A0h]
    int v42; // [esp+54h] [ebp-290h]
    int v43; // [esp+64h] [ebp-280h]
    wchar_t v44[24]; // [esp+74h] [ebp-270h] BYREF
    int v45; // [esp+A4h] [ebp-240h]
    int v46; // [esp+B4h] [ebp-230h]
    int v47; // [esp+C4h] [ebp-220h]
    int v48; // [esp+D4h] [ebp-210h]
    char v49[256]; // [esp+E4h] [ebp-200h] BYREF
    char Buffer[256]; // [esp+1E4h] [ebp-100h] BYREF

    if ( !(unsigned char)(v23->health) ) /*0x49b939*/
      return 0; /*0x49b940*/
    Debug::Log(); /*0x49b952*/
    FillScoreScreenStats(Destination, 0); /*0x49b960*/
    FillScoreScreenStats(v44, 1); /*0x49b96e*/
    if ( !strcmp((const char *)v23, ToWideStringChar((char *)Destination)) ) /*0x49b988*/
    {
      ToWideStringChar((char *)Destination); /*0x49b9b9*/
      Debug::Log(); /*0x49b9c4*/
      v3 = v23->customSound_controller[1]; /*0x49b9dc*/
      v4 = v40; /*0x49b9df*/
      v5 = v23->customSound_controller[2]; /*0x49b9e3*/
      v6 = v41 + v23->ambientSoundController[3]; /*0x49b9e6*/
      v7 = v23->customSound_controller[0]; /*0x49b9e8*/
      v23->ambientSoundController[4] += v46; /*0x49b9eb*/
      v8 = v45; /*0x49b9f4*/
      v23->customSound_controller[0] = v42 + v7; /*0x49b9fb*/
      v9 = v47 + v3; /*0x49ba05*/
      v10 = v4 + v5; /*0x49ba0b*/
      v11 = v43 + v23->customSound_controller[4]; /*0x49ba10*/
      customSound = v23->customSound; /*0x49ba12*/
      v23->ambientSoundController[3] = v6; /*0x49ba15*/
      v13 = v23->customSound_controller[3]; /*0x49ba18*/
      v23->customSound_controller[4] = v11; /*0x49ba1b*/
      v14 = v48 + customSound; /*0x49ba2a*/
      v23->customSound_controller[1] = v9; /*0x49ba2c*/
      v23->customSound_controller[2] = v10; /*0x49ba2f*/
      v23->customSound_controller[3] = v8 + v13; /*0x49ba32*/
      v23->customSound = v14; /*0x49ba35*/
    }
    else
    {
      ToWideStringChar((char *)v44); /*0x49ba44*/
      Debug::Log(); /*0x49ba4f*/
      v15 = v41 + v23->ambientSoundController[4]; /*0x49ba69*/
      v16 = v23->customSound_controller[3]; /*0x49ba6e*/
      v17 = v45; /*0x49ba73*/
      v18 = v46 + v23->ambientSoundController[3]; /*0x49ba7a*/
      v19 = v23->customSound_controller[0]; /*0x49ba7c*/
      v23->customSound_controller[1] += v42; /*0x49ba7f*/
      v20 = v47 + v19; /*0x49ba89*/
      v21 = v43; /*0x49ba8b*/
      v23->ambientSoundController[4] = v15; /*0x49ba8f*/
      v22 = v23->customSound_controller[2]; /*0x49ba92*/
      v23->customSound_controller[0] = v20; /*0x49ba95*/
      v23 = v40; /*0x49ba98*/
      v23->ambientSoundController[3] = v18; /*0x49ba9c*/
      v24 = v17 + v22; /*0x49baab*/
      v25 = v21 + v23->customSound; /*0x49bab3*/
      v26 = v48 + v23->customSound_controller[4]; /*0x49bab5*/
      v23->customSound_controller[3] = v23 + v16; /*0x49bab7*/
      v23->customSound_controller[2] = v24; /*0x49baba*/
      v23->customSound = v25; /*0x49babd*/
      v23->customSound_controller[4] = v26; /*0x49bac0*/
    }
    uniqueId = dword_A8B230[43].uniqueId; /*0x49bacf*/
    if ( dword_A8B230[43].ptr_4 != -1 ) /*0x49bade*/
    {
      p_vtable2 = &dword_A8B230[43].ptr_4; /*0x49bad5*/
      uniqueId += TimerGetTicks() - *p_vtable2; /*0x49baea*/
    }
    v29 = uniqueId / 60; /*0x49bb06*/
    if ( v38 != (unsigned char *)-496 ) /*0x49bb0a*/
    {
      if ( v29 / 3600 > 99 ) /*0x49bb22*/
        v29 = 359999; /*0x49bb24*/
      v30 = v29 / 3600; /*0x49bb3c*/
      v31 = 720 * (4 * (v29 / -3600) - v29 / 3600) + v29; /*0x49bb55*/
      sprintf(Buffer, "%02d:%02d:%02d", v30, v31 / 60, v31 % 60); /*0x49bb80*/
    }
    v32 = dword_A8B230[43].uniqueId; /*0x49bb94*/
    if ( dword_A8B230[43].ptr_4 != -1 ) /*0x49bba3*/
    {
      v33 = &dword_A8B230[43].ptr_4; /*0x49bb9a*/
      v32 += TimerGetTicks() - *v33; /*0x49bbaf*/
    }
    v34 = v32 + *(unsigned int *)v23->v34; /*0x49bbbb*/
    *(unsigned int *)v23->v34 = v34; /*0x49bbbf*/
    v35 = v34; /*0x49bbc2*/
    if ( v38 != (unsigned char *)-240 ) /*0x49bbc4*/
    {
      if ( v34 / 3600 > 99 ) /*0x49bbdc*/
        v35 = 359999; /*0x49bbde*/
      v36 = v35 / 3600; /*0x49bbf6*/
      v37 = 720 * (4 * (v35 / -3600) - v35 / 3600) + v35; /*0x49bc0f*/
      sprintf(v49, "%02d:%02d:%02d", v36, v37 / 60, v37 % 60); /*0x49bc3a*/
    }
    Debug::Log(); /*0x49bc57*/
    ++v23->attachedBomb; /*0x49bc65*/
    return 1; /*0x49b942*/
  }
// 0x004A3660
  int ObjectClass::RenderTactical3DScene(int a2)
  {
    int v2; // esi
    ObjectClass *v3; // edi
    bool v4; // zf
    int v5; // eax
    AudioStream *v6; // ebx
    DDraw *v7; // edx
    int v8; // ecx
    int result; // eax
    int v10; // eax
    int v11; // esi
    int v12; // esi
    int v13; // esi
    int v14; // esi
    int v15; // esi
    int v16; // esi
    int i; // ebx
    int v18; // [esp+B0h] [ebp-4h]

    v2 = a2; /*0x4a3663*/
    v3 = v23; /*0x4a3668*/
    v4 = a2 == 0; /*0x4a366a*/
    v5 = *((unsigned int *)v23 + 24576); /*0x4a366c*/
    *((unsigned int *)v23 + 24576) = 0; /*0x4a3672*/
    v18 = v5; /*0x4a367c*/
    if ( v4 ) /*0x4a3680*/
      return -1; /*0x4a3680*/
    v6 = dword_8A0E04; /*0x4a3686*/
    if ( !dword_8A0E04 ) /*0x4a368e*/
      return -1; /*0x4a368e*/
    if ( !*(unsigned int *)&DataGlobal_8A0E78 ) /*0x4a3694*/
      return -1; /*0x4a3694*/
    v7 = dword_8A0E08; /*0x4a369f*/
    if ( !dword_8A0E08 ) /*0x4a36a7*/
      return -1; /*0x4a36a7*/
    v8 = *(unsigned int *)&(&dword_8A0E08)[112]; /*0x4a36ad*/
    if ( !v8 ) /*0x4a36b2*/
      return -1; /*0x4a3832*/
    if ( dword_89F970 == v2 ) /*0x4a36bf*/
      goto LABEL_13; /*0x4a36bf*/
    if ( dword_89F970 ) /*0x4a36c3*/
    {
      result = (*(int (__stdcall **)(int, unsigned int, int))(DataGlobal_89F990)(dword_89F970, 0, v8); /*0x4a36cb*/
      if ( result ) /*0x4a36d0*/
        return result; /*0x4a36d0*/
      v7 = dword_8A0E08; /*0x4a36d6*/
      dword_89F970 = 0; /*0x4a36dc*/
    }
    result = (*(int (__stdcall **)(int, unsigned int))(*(unsigned int *)v2 + 12))(v2, *(unsigned int *)&v7[112]); /*0x4a36e8*/
    if ( !result ) /*0x4a36ed*/
    {
      result = (*(int (__stdcall **)(unsigned int, int, unsigned int))(*(unsigned int *)g_DrawColorState + 60))(g_DrawColorState, v2, 0); /*0x4a36fe*/
      if ( !result ) /*0x4a3703*/
      {
        v6 = dword_8A0E04; /*0x4a3709*/
        dword_89F970 = v2; /*0x4a370f*/
        LABEL_13:
        if ( dword_8A0E0C ) /*0x4a371c*/
          v10 = *(unsigned int *)&(&dword_8A0E0C)[116]; /*0x4a371e*/
          else
            v10 = *&v6->u32_74; /*0x4a3723*/
          result = (*(int (__stdcall **)(int, unsigned int, int *))(v10->u32_C)(v10, g_DrawColorState, &a2); /*0x4a3735*/
          if ( !result ) /*0x4a373a*/
        {
          result = (*(int (__stdcall **)(unsigned int, int, int))(*(unsigned int *)g_DrawColorState + 92))(g_DrawColorState, 1, a2); /*0x4a374f*/
          if ( !result ) /*0x4a3754*/
          {
            result = (*(int (__stdcall **)(unsigned int, int, int))(*(unsigned int *)g_DrawColorState + 92))(g_DrawColorState, 7, 1); /*0x4a3766*/
            if ( !result ) /*0x4a376b*/
            {
              result = (*(int (__stdcall **)(unsigned int, int, unsigned int))(*(unsigned int *)g_DrawColorState + 92))( /*0x4a377d*/
                         g_DrawColorState,
                         14,
                         0);
              if ( !result ) /*0x4a3782*/
              {
                v11 = (*(int (__stdcall **)(unsigned int, int, int))(*&g_DrawColorState->u32_170))(g_DrawColorState, 17, 2); /*0x4a3797*/
                v12 = (*(int (__stdcall **)(unsigned int, int, int))(*&g_DrawColorState->u32_170))(g_DrawColorState, 19, 2) /*0x4a37a8*/
                | v11;
                v13 = (*(int (__stdcall **)(unsigned int, int, int))(*&g_DrawColorState->u32_170))(g_DrawColorState, 20, 2) /*0x4a37b9*/
                | v12;
                v14 = (*(int (__stdcall **)(unsigned int, int, unsigned int))(*&g_DrawColorState->u32_170))( /*0x4a37ca*/
                        g_DrawColorState,
                        29,
                        0)
                | v13;
                v15 = (*(int (__stdcall **)(unsigned int, int, int))(*&g_DrawColorState->u32_170))(g_DrawColorState, 27, 1) /*0x4a37db*/
                | v14;
                v16 = (*(int (__stdcall **)(unsigned int, int, int))(*&g_DrawColorState->u32_170))(g_DrawColorState, 22, 1) /*0x4a37ec*/
                | v15;
                if ( v16 ) /*0x4a37ee*/
                {
                  return v16; /*0x4a37f0*/
                }
                else
                {
                  for ( i = 0; i < v18; v3 = &v3->q060 ) /*0x4a3801*/
                  {
                            v16 = (*(int (__stdcall **)(unsigned int, int, int, ObjectClass *, int, unsigned int))(*(unsigned int *)g_DrawColorState /*0x4a3817*/
                            + 116))(
                            g_DrawColorState,
                            4,
                            3,
                            v3,
                            3,
                            0);
                            if ( v16 ) /*0x4a381b*/
                              break; /*0x4a381b*/
                            ++i; /*0x4a3821*/
                  }
                  return v16; /*0x4a3829*/
                }
              }
            }
          }
        }
      }
    }
    return result; /*0x4a37f2*/
  }
} // namespace gamemd
// 0x004C54E0
  int ObjectClass::ApplyEMPPulseEffect(int a2)
  {
    int result; // eax
    int v4; // eax
    int v5; // esi
    int v6; // edi
    int v7; // ebp
    unsigned int *v8; // eax
    int *v9; // eax
    int j; // edx
    int v11; // esi
    uint16_t v12; // cx
    int v13; // edx
    int v14; // ecx
    Cell *v15; // edi
    BuildingClass *v16; // eax
    BuildingClass *v17; // esi
    int *v18; // eax
    int v19; // kr04_4
    int v20; // eax
    BuildingTypeClass *Type; // ecx
    int ClosestObjectCell; // eax
    unsigned int *v23; // esi
    int v24; // eax
    AnimClass *v25; // edi
    int *v26; // eax
    BuildingClass *v27; // eax
    int owningHouseIndex; // eax
    void *v29; // [esp-10h] [ebp-5Ch]
    int16_t v30[2]; // [esp+14h] [ebp-38h] BYREF
    int v31; // [esp+18h] [ebp-34h]
    int i; // [esp+1Ch] [ebp-30h]
    int v33; // [esp+20h] [ebp-2Ch]
    int v34; // [esp+24h] [ebp-28h]
    int v35; // [esp+28h] [ebp-24h] BYREF
    int v36; // [esp+2Ch] [ebp-20h]
    int v37; // [esp+30h] [ebp-1Ch]
    unsigned char v38[12]; // [esp+34h] [ebp-18h] BYREF
    unsigned int v39[3]; // [esp+40h] [ebp-Ch] BYREF

    result = (int)v23->nextObject + v23->fallRate; /*0x4c54f3*/
    if ( result > *(int * *)((char *)&stru_A8EB00 + 644) ) /*0x4c54f9*/
    {
      v34 = v23->owningHouseIndex * v23->owningHouseIndex; /*0x4c5509*/
      v4 = 0; /*0x4c5513*/
      for ( i = 0; i < dword_A8E3A0; ++i ) /*0x4c551b*/
      {
        v5 = *((unsigned int *)dword_A8E394 + v4); /*0x4c5527*/
        if ( v5->unknown74 ) /*0x4c552a*/
        {
          if ( !*(unsigned char *)(v5 + 129) /*0x4c5551*/
            && !(*(uint8_t (**)(int))(v5->infantryOwnerIndex)(v5)
            && v5->CellClass_field_6C > 0 )
          {
            v6 = ((v23->u32_26) << 8) + 128; /*0x4c556a*/
            v7 = ((short)((v23->occupant) >> 16) << 8) + 128; /*0x4c5570*/
            v8 = (unsigned int *)(*(int (**)(int, unsigned char *))(v5->q048)(v5, v38); /*0x4c5576*/
            v9 = ((Coord *)v39)->Subtract( *v8 - v6, v8[1] - v7, v8[2]); /*0x4c558c*/
            v35 = *v9; /*0x4c5593*/
            v36 = v9->u32_4; /*0x4c559e*/
            v37 = v9->u32_8; /*0x4c55a5*/
            if ( (int)Coord::Length((Coord *)&v35) < v23->owningHouseIndex << 8 ) /*0x4c55b6*/
              (*(void (**)(int, int))(v5->q0F7)(v5, a2); /*0x4c55c1*/
          }
        }
        v4 = i + 1; /*0x4c55d3*/
      }
      result = v23->owningHouseIndex; /*0x4c55e0*/
      i = -result; /*0x4c55e9*/
      for ( j = -result; j <= result; i = j ) /*0x4c55ed*/
      {
        v11 = -result; /*0x4c55f5*/
        v31 = -result; /*0x4c55f9*/
        if ( -result <= result ) /*0x4c55fd*/
        {
          do /*0x4c5899*/
          {
            v12 = j + (unsigned short)((v23->occupant) >> 16); /*0x4c560e*/
            (v33) = ((v33) & ~0xFFFF) | ((unsigned int)(v11 + (unsigned short)(v23->occupant)) & 0xFFFF); /*0x4c5611*/
            (v33) = ((v33) & ~(0xFFFFULL << 16)) | (((uint64_t)(unsigned int)(v12) & 0xFFFF) << 16); /*0x4c5616*/
            *(unsigned int *)v30 = v33; /*0x4c5622*/
            if ( (uint16_t)v33 < 0x200u && v12 < 0x200u ) /*0x4c5639*/
            {
              if ( (uint8_t)Cell::Exists((Cell *)&DataGlobal_87F7E8, v30) ) /*0x4c5654*/
              {
                v13 = v30[1] - (short)((v23->occupant) >> 16); /*0x4c5677*/
                v14 = v30[0] - (v23->u32_26); /*0x4c567c*/
                if ( v14 * v14 + v13 * v13 <= v34 ) /*0x4c5689*/
                {
                  v15 = (Cell *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v30); /*0x4c569e*/
                  v16 = (BuildingClass *)Cell::IsBridge(v15); /*0x4c56a2*/
                  v17 = v16; /*0x4c56a7*/
                  if ( v16 ) /*0x4c56ab*/
                  {
                    v18 = (int *)(*((int (**)(BuildingClass *, unsigned int *))v16->TechnoClass + 18))(v16, v39); /*0x4c56ba*/
                    v19 = *v18; /*0x4c56ca*/
                    v20 = v18[1] / 256; /*0x4c56db*/
                    if ( (uint16_t)(v19 / 256) == v30[0] && (unsigned short)v20 == v30[1] && !v17->Type->InvisibleInGame ) /*0x4c56fa*/
                    {
                      BuildingClass::Deactivate(v17); /*0x4c570a*/
                      Type = v17->Type; /*0x4c5712*/
                      v17->empLockRemaining = (int)v23->nextObject; /*0x4c5718*/
                      if ( Type->Radar ) /*0x4c571e*/
                        v17->q5778->HouseClass_field_timer_B[2] = ((v17->q5778->HouseClass_field_timer_B[2]) & 0xFFFF00FFu) | (((unsigned int)(1) & 0xFFu) << 8); /*0x4c5732*/
                    }
                  }
                  else
                  {
                    v35 = 0; /*0x4c5747*/
                    v36 = 0; /*0x4c574b*/
                    ClosestObjectCell = Object::FindClosestObjectCell((Object *)v15, &v35, 0, 0); /*0x4c574f*/
                    v23 = (unsigned int *)ClosestObjectCell; /*0x4c5754*/
                    if ( ClosestObjectCell /*0x4c5787*/
                      && ((*(int (**)(int))(*(unsigned int *)ClosestObjectCell + 44))(ClosestObjectCell) == 1
                       || v23->vt_slot_44() == 2)
                      && (v23->u32_14 & 4) != 0 )
                    {
                      if ( v23->__pad_674 ) /*0x4c578d*/
                      {
                        if ( v23->vt_slot_44() != 1 /*0x4c57b5*/
                          || (v24 = v23[433], !*(unsigned char *)(v24 + 3609))
                          || !*(unsigned char *)(v24 + 3608) )
                        {
                          if ( !v23->__pad_674 ) /*0x4c57c3*/
                            sub_7DC720(-2147467261); /*0x4c57d0*/
                          (*(void (__stdcall **)(unsigned int))(*(unsigned int *)v23[413] + 92))(v23->__pad_674); /*0x4c57de*/
                          if ( !v23->__pad_674 ) /*0x4c57e1*/
                            sub_7DC720(-2147467261); /*0x4c57ee*/
                          if ( (*(uint8_t (__stdcall **)(unsigned int))(*(unsigned int *)v23[413] + 16))(v23->__pad_674) ) /*0x4c57fc*/
                          {
                            if ( !v23->__pad_674 ) /*0x4c5803*/
                              sub_7DC720(-2147467261); /*0x4c5810*/
                            (*(void (__stdcall **)(unsigned int))(*(unsigned int *)v23[413] + 72))(v23->__pad_674); /*0x4c581e*/
                          }
                          v23[321] = v23->nextObject; /*0x4c5829*/
                          v25 = (AnimClass *)new unsigned char[0x1C8u]; /*0x4c5834*/
                          if ( v25 ) /*0x4c583b*/
                          {
                                                     v29 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 25); /*0x4c585b*/
                                                     v26 = (int *)v23->vt_slot_72(v38); /*0x4c5863*/
                                                     v27 = (BuildingClass *)AnimClass::ctor( /*0x4c5876*/
                                                     v25,
                                                     *(void **)(*(unsigned int *)&g_RulesClass_Instance + 6132),
                                                     v26,
                                                     v29,
                                                     1,
                                                     (void *)0x600,
                                                     0,
                                                     0);
                                                     if ( v27 ) /*0x4c587d*/
                                                       BuildingClass::AimTurret(v27, v23); /*0x4c5882*/
                          }
                        }
                      }
                    }
                  }
                  v11 = v31; /*0x4c5887*/
                }
              }
            }
            owningHouseIndex = v23->owningHouseIndex; /*0x4c588b*/
            j = i; /*0x4c588e*/
            v31 = ++v11; /*0x4c5895*/
          }
          while ( v11 <= owningHouseIndex ); /*0x4c5899*/
        }
        result = v23->owningHouseIndex; /*0x4c589f*/
        ++j; /*0x4c58a2*/
      }
    }
    return result; /*0x4c58af*/
  }
// 0x004CBC40
  void* ObjectClass::WalkPathfindingLine(void* a2, int a3, void* a4, int a5, int a6)
  {
    double v6; // st7
    int v7; // eax
    int *v8; // edi
    int v10; // ecx
    int v11; // edx
    int v12; // eax
    int v13; // edx
    char v14; // bl
    int v15; // eax
    int v16; // edi
    int v17; // edi
    int (**ptr_0)(ObjectClass *, void *, int, int, unsigned int, int); // ebp
    void *v19; // eax
    int v20; // edi
    int (**v21)(ObjectClass *, void *, int, int, unsigned int, int); // ebp
    void *v22; // eax
    int v23; // edi
    int (**v24)(ObjectClass *, void *, int, int, unsigned int, int); // ebp
    void *v25; // eax
    double v27; // [esp+8h] [ebp-34h]
    double v28; // [esp+10h] [ebp-2Ch]
    int v29; // [esp+28h] [ebp-14h]
    int v30; // [esp+2Ch] [ebp-10h]
    int v31; // [esp+30h] [ebp-Ch]
    int v32; // [esp+34h] [ebp-8h]
    int v33; // [esp+38h] [ebp-4h]

    v7 = a3; /*0x4cbc43*/
    v8 = a4; /*0x4cbc4b*/
    v10 = *(int16_t *)a3; /*0x4cbc5d*/
    a3 = *(int16_t *)a4; /*0x4cbc60*/
    __asm { fild dword ptr [esp+34h+arg_4] } /*0x4cbc64*/
    v11 = v7->ptr_8; /*0x4cbc68*/
    a3 = v10; /*0x4cbc6c*/
    __asm { fild dword ptr [esp+34h+arg_4] } /*0x4cbc70*/
    v12 = a4->ptr_2; /*0x4cbc74*/
    __asm { fsubp st(1), st } /*0x4cbc78*/
    a3 = v11; /*0x4cbc7a*/
    __asm /*0x4cbc7e*/
    {
      fstp [esp+34h+var_2C]; double
      fild dword ptr [esp+34h+arg_4]
    }
    a3 = v12; /*0x4cbc86*/
    __asm /*0x4cbc8a*/
    {
      fild dword ptr [esp+34h+arg_4]
      fsubp st(1), st
      fstp [esp+34h+var_34]; double
    }
    Math::CalcAngle(v27, v28); /*0x4cbc93*/
    __asm { fsub ds:dbl_7E2820 } /*0x4cbc98*/
    __asm { fmul ds:dbl_7E2818 }
    (a3) = ((a3) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt(v6)) & 0xFFFF); /*0x4cbcac*/
    v13 = a5; /*0x4cbcb8*/
    v29 = a5; /*0x4cbcc1*/
    v14 = ((((((unsigned int)a3 >> 12) + 1) >> 1) ^ 0xFC) - 1) & 7; /*0x4cbccb*/
    if ( a5 >= a6 ) /*0x4cbcd0*/
    {
  LABEL_24:
      *a2 = dword_8B3B48; /*0x4cbea7*/
    return a2; /*0x4cbeba*/
    }
    while ( 1 ) /*0x4cbcdc*/
    {
      v15 = *v8; /*0x4cbcdc*/
      a3 = *v8; /*0x4cbce0*/
      if ( v13 > 0 ) /*0x4cbce4*/
      {
        v16 = v13; /*0x4cbce8*/
        do /*0x4cbd16*/
        {
          --v16; /*0x4cbd08*/
          (v30) = ((v30) & ~(0xFFFFULL << 16)) | (((uint64_t)(unsigned int)((((unsigned int)(a3) >> 16) & 0xFFFF) + (unsigned short)((g_DDrawSurfaceManager.scenario[(v14 & 7) + 82]) >> 16)) & 0xFFFF) << 16); /*0x4cbd09*/
          (v15) = ((v15) & ~0xFFFF) | ((unsigned int)(v15 + (unsigned short)(g_DDrawSurfaceManager.scenario[(v14 & 7) + 82])) & 0xFFFF); /*0x4cbd0e*/
          (v30) = ((v30) & ~0xFFFF) | ((unsigned int)(v15) & 0xFFFF); /*0x4cbd03*/
          a3 = v30; /*0x4cbd12*/
        }
        while ( v16 ); /*0x4cbd16*/
      }
      a5 = 0; /*0x4cbd1b*/
      if ( (v14 & 1) != 0 ) /*0x4cbd23*/
      {
        if ( 2 * v13 > 0 ) /*0x4cbd2e*/
        {
          v17 = (v14 + 3) & 7; /*0x4cbd37*/
          while ( 1 ) /*0x4cbd55*/
          {
            ptr_0 = (int (**)(ObjectClass *, void *, int, int, unsigned int, int))v23->AbstractClass; /*0x4cbd55*/
            (v31) = ((v31) & ~0xFFFF) | ((unsigned int)(v15 + (unsigned short)(g_DDrawSurfaceManager.scenario[v17 + 82])) & 0xFFFF); /*0x4cbd5c*/
            (v31) = ((v31) & ~(0xFFFFULL << 16)) | (((uint64_t)(unsigned int)((((unsigned int)(a3) >> 16) & 0xFFFF) + (unsigned short)((g_DDrawSurfaceManager.scenario[v17 + 82]) >> 16)) & 0xFFFF) << 16); /*0x4cbd69*/
            a3 = v31; /*0x4cbd79*/
            v19 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj((int16_t *)&a3); /*0x4cbd7d*/
            if ( !ptr_0[107](v23, v19, (v14 + 3) & 7, -1, 0, 1) ) /*0x4cbd85*/
              break; /*0x4cbd85*/
            v13 = v29; /*0x4cbd93*/
            if ( ++a5 >= 2 * v29 ) /*0x4cbda5*/
              goto LABEL_23; /*0x4cbda5*/
            (v15) = ((v15) & ~0xFFFF) | ((unsigned int)(a3) & 0xFFFF); /*0x4cbd3c*/
          }
          LABEL_26:
          *a2 = a3; /*0x4cbed1*/
            return a2; /*0x4cbed1*/
        }
        goto LABEL_23; /*0x4cbd2e*/
      }
      if ( v13 > 0 ) /*0x4cbdae*/
        break; /*0x4cbdae*/
      LABEL_18:
      a5 = 0; /*0x4cbe1e*/
        if ( v13 > 0 ) /*0x4cbe28*/
      {
        v23 = (v14 - 4) & 7; /*0x4cbe2d*/
        while ( 1 ) /*0x4cbe4b*/
        {
          v24 = (int (**)(ObjectClass *, void *, int, int, unsigned int, int))v23->AbstractClass; /*0x4cbe4b*/
          (v33) = ((v33) & ~0xFFFF) | ((unsigned int)(v15 + (unsigned short)(g_DDrawSurfaceManager.scenario[v23 + 82])) & 0xFFFF); /*0x4cbe52*/
          (v33) = ((v33) & ~(0xFFFFULL << 16)) | (((uint64_t)(unsigned int)((((unsigned int)(a3) >> 16) & 0xFFFF) + (unsigned short)((g_DDrawSurfaceManager.scenario[v23 + 82]) >> 16)) & 0xFFFF) << 16); /*0x4cbe5f*/
          a3 = v33; /*0x4cbe6f*/
          v25 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj((int16_t *)&a3); /*0x4cbe73*/
          if ( !v24[107](v23, v25, (v14 - 4) & 7, -1, 0, 1) ) /*0x4cbe7b*/
            goto LABEL_26; /*0x4cbe83*/
          v13 = v29; /*0x4cbe89*/
          if ( ++a5 >= v29 ) /*0x4cbe94*/
            break; /*0x4cbe94*/
          (v15) = ((v15) & ~0xFFFF) | ((unsigned int)(a3) & 0xFFFF); /*0x4cbe32*/
        }
      }
      LABEL_23:
      v29 = ++v13; /*0x4cbe9d*/
        if ( v13 >= a6 ) /*0x4cbea1*/
          goto LABEL_24; /*0x4cbea1*/
        v8 = a4; /*0x4cbcd8*/
    }
    v20 = (v14 + 2) & 7; /*0x4cbdb3*/
    while ( 1 ) /*0x4cbdbe*/
    {
      v21 = (int (**)(ObjectClass *, void *, int, int, unsigned int, int))v23->AbstractClass; /*0x4cbdbe*/
      (v32) = ((v32) & ~0xFFFF) | ((unsigned int)(v15 + (unsigned short)(g_DDrawSurfaceManager.scenario[v20 + 82])) & 0xFFFF); /*0x4cbdd0*/
      (v32) = ((v32) & ~(0xFFFFULL << 16)) | (((uint64_t)(unsigned int)((unsigned short)((g_DDrawSurfaceManager.scenario[v20 + 82]) >> 16) + (((unsigned int)(a3) >> 16) & 0xFFFF)) & 0xFFFF) << 16); /*0x4cbdd9*/
      a3 = v32; /*0x4cbde8*/
      v22 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj((int16_t *)&a3); /*0x4cbdf3*/
      if ( !v21[107](v23, v22, (v14 + 2) & 7, -1, 0, 1) ) /*0x4cbdfb*/
        break; /*0x4cbdfb*/
      v13 = v29; /*0x4cbe0d*/
      ++a5; /*0x4cbe12*/
      (v15) = ((v15) & ~0xFFFF) | ((unsigned int)(a3) & 0xFFFF); /*0x4cbe18*/
      if ( a5 >= v29 ) /*0x4cbe1c*/
        goto LABEL_18; /*0x4cbe1c*/
    }
    *a2 = a3; /*0x4cbec8*/
    return a2; /*0x4cbeb1*/
  }
// 0x004CE4B0
  int ObjectClass::ProcessDataHelper(void* a2, int a3)
  {
    double v3; // st7
    int v5; // edi
    int v6; // eax
    int v7; // eax
    int v8; // edx
    int v10; // [esp+4h] [ebp-18h]
    double v12; // [esp+Ch] [ebp-10h]

    v10 = (*((int (__stdcall **)(void **))v23->ptr_4 + 33))(&v23->ptr_4); /*0x4ce4c1*/
    if ( v10 <= 0 ) /*0x4ce4c5*/
      return 0; /*0x4ce594*/
    a3 = (int16_t)a3 - 0x3FFF; /*0x4ce4d7*/
    __asm { fild dword ptr [esp+20h+arg_4] } /*0x4ce4dc*/
    _ESI = a2; /*0x4ce4e1*/
    __asm { fmul ds:dbl_7E2810 } /*0x4ce4e6*/
    v5 = a2[2]; /*0x4ce4ec*/
    __asm /*0x4ce4ef*/
    {
      fstp [esp+28h+var_14+4]
      fild dword ptr [esp+28h+var_1C+4]
    }
    __asm
    {
      fstp [esp+30h+var_1C+4]
      fild dword ptr [esi+4]
      fstp [esp+30h+var_C+4]
    }
    Math::SinCos(v12); /*0x4ce50c*/
    __asm /*0x4ce511*/
    {
      fmul [esp+30h+var_1C+4]
      fsubr [esp+30h+var_C+4]
    }
    (v6) = ((v6) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt(v3)) & 0xFFFF); /*0x4ce519*/
    a3 = v6; /*0x4ce520*/
    Math::ArcTan2(v12); /*0x4ce524*/
    __asm { fmul [esp+38h+var_1C+4] } /*0x4ce529*/
    __asm { fiadd dword ptr [esi] }
    (v7) = ((v7) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt(v3)) & 0xFFFF); /*0x4ce532*/
    v8 = a3; /*0x4ce537*/
    *a2 = v7; /*0x4ce53d*/
    a2[1] = v8; /*0x4ce53f*/
    a2[2] = v5; /*0x4ce542*/
    (a3) = ((a3) & ~0xFFFF) | ((unsigned int)(*a2 / 256) & 0xFFFF); /*0x4ce558*/
    (a3) = ((a3) & ~(0xFFFFULL << 16)) | (((uint64_t)(unsigned int)(a2[1] / 256) & 0xFFFF) << 16); /*0x4ce571*/
    return 2 /*0x4ce58e*/
    - ((uint8_t)((LayerClass *)&DataGlobal_87F7E8)->CoordinatesLegal( (int16_t *)&a3) != 0);
  }
// 0x004DC340
  char ObjectClass::DrawFootTargetLine()
  {
    int target; // eax
    int *v3; // eax
    int *TargetCoords; // eax
    int v5; // eax
    int v6; // eax
    int v7; // ecx
    int *v8; // eax
    int v9; // edx
    int v10; // esi
    int *v11; // eax
    int *v12; // eax
    int *v13; // eax
    int v14; // eax
    DWORD Time; // esi
    int16_t v16; // ax
    Color v18; // [esp+14h] [ebp-90h] BYREF
    int16_t v19[2]; // [esp+1Ch] [ebp-88h] BYREF
    int v20; // [esp+20h] [ebp-84h]
    int v21; // [esp+28h] [ebp-7Ch] BYREF
    int v22; // [esp+2Ch] [ebp-78h]
    int v23; // [esp+30h] [ebp-74h]
    uint8_t v24[4]; // [esp+34h] [ebp-70h] BYREF
    int v25; // [esp+38h] [ebp-6Ch] BYREF
    int v26; // [esp+3Ch] [ebp-68h]
    int v27; // [esp+40h] [ebp-64h] BYREF
    int v28; // [esp+44h] [ebp-60h]
    int v29; // [esp+48h] [ebp-5Ch] BYREF
    int v30; // [esp+4Ch] [ebp-58h]
    int v31; // [esp+50h] [ebp-54h]
    int v32; // [esp+54h] [ebp-50h]
    int v33; // [esp+58h] [ebp-4Ch] BYREF
    int v34; // [esp+5Ch] [ebp-48h]
    int v35; // [esp+60h] [ebp-44h]
    int v36; // [esp+64h] [ebp-40h]
    int v37; // [esp+68h] [ebp-3Ch] BYREF
    int v38; // [esp+6Ch] [ebp-38h]
    int v39; // [esp+70h] [ebp-34h]
    int v40[4]; // [esp+74h] [ebp-30h] BYREF
    Rect v41; // [esp+84h] [ebp-20h] BYREF
    Rect v42; // [esp+94h] [ebp-10h] BYREF

    v24[0] = -1; /*0x4dc34a*/
    target = v23->target; /*0x4dc34f*/
    v24[1] = -1; /*0x4dc355*/
    v24[2] = -1; /*0x4dc35c*/
    v18.Color_field_00 = ((v18.Color_field_00) & 0xFFFF0000u) | ((unsigned int)(0) & 0xFFFFu); /*0x4dc361*/
    v18.Color_field_00 = ((v18.Color_field_00) & 0xFF00FFFFu) | (((unsigned int)(0) & 0xFFu) << 16); /*0x4dc36b*/
    if ( target ) /*0x4dc370*/
    {
      v3 = (int *)(*(int (**)(TechnoClass *, int16_t *, unsigned int))(v23->ptr_0 + 768))(v23, v19, 0); /*0x4dc38f*/
      v37 = *v3; /*0x4dc397*/
      v38 = v3[1]; /*0x4dc39e*/
      v39 = v3[2]; /*0x4dc3ac*/
      TargetCoords = TechnoClass::GetTargetCoords(v23, (int *)v19); /*0x4dc3b0*/
      v21 = *TargetCoords; /*0x4dc3b7*/
      v22 = TargetCoords[1]; /*0x4dc3be*/
      v5 = TargetCoords[2]; /*0x4dc3c2*/
      LABEL_11:
      v23 = v5; /*0x4dc498*/
        goto LABEL_12; /*0x4dc498*/
    }
    if ( !*((unsigned int *)v23 + 361) ) /*0x4dc37a*/
      return target; /*0x4dc37a*/
    v37 = v23->location[0]; /*0x4dc3d6*/
    v38 = v23->location[1]; /*0x4dc3dd*/
    v6 = *((unsigned int *)v23 + 358); /*0x4dc3e1*/
    v39 = v23->location[2]; /*0x4dc3ec*/
    if ( v6 ) /*0x4dc3f0*/
      v7 = *(unsigned int *)(*((unsigned int *)v23 + 355) + 4 * v6 - 4); /*0x4dc406*/
    else
      v7 = *((unsigned int *)v23 + 361); /*0x4dc3f2*/
    v8 = (int *)(*(int (__stdcall **)(int16_t *))(*(unsigned int *)&v7->q_120)(v19); /*0x4dc411*/
    v21 = *v8; /*0x4dc418*/
    v22 = v8[1]; /*0x4dc41f*/
    v23 = v8[2]; /*0x4dc426*/
    v19[0] = v21 / 256; /*0x4dc436*/
    v19[1] = v22 / 256; /*0x4dc44e*/
    if ( (uint8_t)((LayerClass *)&dword_87F7E8)->CoordinatesLegal( v19) /*0x4dc481*/
      && (((Coord *)&dword_87F7E8)->To_Cell( &v21)->flags & 0x100) != 0 )
    {
      v5 = dword_8B3DF4 + Cell::GetGroundHeight(&v21); /*0x4dc492*/
      goto LABEL_11; /*0x4dc492*/
    }
    LABEL_12:
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v37, &v27); /*0x4dc49c*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v21, &v25); /*0x4dc4c1*/
      v9 = v23->owner + 22265; /*0x4dc4de*/
      v28 += dword_886FA4; /*0x4dc4e4*/
      v26 += dword_886FA4; /*0x4dc4e8*/
      v18.Color_field_00 = ((v18.Color_field_00) & 0xFFFF0000u) | ((unsigned int)(*(unsigned short *)v9) & 0xFFFFu); /*0x4dc4f4*/
      v18.Color_field_00 = ((v18.Color_field_00) & 0xFF00FFFFu) | (((unsigned int)(v9->ptr_8) & 0xFFu) << 16); /*0x4dc504*/
      v20 = v28 - 2; /*0x4dc524*/
      *(unsigned int *)v19 = v27 - 2; /*0x4dc55d*/
      v10 = ((unsigned char)(v18.Color_field_00) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4dc568*/
      | ((unsigned char)((v18.Color_field_00) >> 8) >> g_BitMask_Blue << g_BitMask_Green)
      | ((unsigned char)((v18.Color_field_00) >> 16) >> g_BitMask_Red << g_BitShift_Blue);
      v11 = Rect::Construct(&v41, v19, 3, 3); /*0x4dc56f*/
      v29 = *v11; /*0x4dc578*/
      v30 = v11->Y; /*0x4dc581*/
      v31 = v11->Width; /*0x4dc588*/
      v32 = v11->Height; /*0x4dc59a*/
      v12 = ClipRectIntersection(&v42, &DSurface_ViewBounds.field_0, &v29, 0, 0); /*0x4dc5a4*/
      v33 = *v12; /*0x4dc5ab*/
      v34 = v12->ptr_4; /*0x4dc5b2*/
      v35 = v12->ptr_8; /*0x4dc5b9*/
      v36 = v12->ptr_C; /*0x4dc5c6*/
      (*(void (**)(AudioStream *, int *, int))(*(unsigned int *)DSurface_Composite->q000 + 20))( /*0x4dc5d2*/
      DSurface_Composite,
      &v33,
      v10);
      v20 = v26 - 2; /*0x4dc5e9*/
      *(unsigned int *)v19 = v25 - 2; /*0x4dc5f7*/
      v13 = Rect::Construct(&v42, v19, 3, 3); /*0x4dc5fb*/
      v33 = *v13; /*0x4dc604*/
      v34 = v13->Y; /*0x4dc60d*/
      v35 = v13->Width; /*0x4dc614*/
      v36 = v13->Height; /*0x4dc626*/
      v14 = ClipRectIntersection(&v41, &DSurface_ViewBounds.field_0, &v33, 0, 0); /*0x4dc630*/
      v29 = *v14; /*0x4dc638*/
      v30 = v14[1]; /*0x4dc63f*/
      v31 = v14[2]; /*0x4dc646*/
      v32 = v14[3]; /*0x4dc653*/
      (*(void (**)(AudioStream *, int *, int))(*(unsigned int *)DSurface_Composite->q000 + 20))( /*0x4dc65e*/
      DSurface_Composite,
      &v29,
      v10);
      v40[1] = dword_886FA4; /*0x4dc672*/
      v40[0] = DSurface_ViewBounds.field_0; /*0x4dc67a*/
      v40[2] = dword_886FA8; /*0x4dc683*/
      v40[3] = dword_886FAC; /*0x4dc690*/
      (target) = ((target) & ~0xFF) | ((unsigned int)(ClipLine(&v27, &v25, v40)) & 0xFF); /*0x4dc694*/
      if ( (unsigned char)target ) /*0x4dc69b*/
    {
      Time = timeGetTime(); /*0x4dc6a7*/
      v16 = Time & 0x3FF; /*0x4dc6a9*/
      if ( (Time & 0x3FF & 0x200) == 0 ) /*0x4dc6b1*/
      {
        if ( (v16 & 0x100) != 0 ) /*0x4dc6b6*/
          v16 = ((v16) & 0xFFFFFF00u) | ((unsigned int)(~(unsigned char)Time) & 0xFFu); /*0x4dc6b8*/
        Color::Lerp(&v18, v16, v24); /*0x4dc6cc*/
      }
      (target) = ((target) & ~0xFF) | ((unsigned int)((*(char (**)(AudioStream *, int *, int *, int, void *, int, unsigned int))(*(unsigned int *)DSurface_Composite->q000 + 76))( /*0x4dc747*/
                         DSurface_Composite,
                         &v27,
                         &v25,
                         ((unsigned char)(v18.Color_field_00) >> g_BitShift_Green_0 << g_BitShift_Red)
      | ((unsigned char)((v18.Color_field_00) >> 8) >> g_BitMask_Blue << g_BitMask_Green)
      | ((unsigned char)((v18.Color_field_00) >> 16) >> g_BitMask_Red << g_BitShift_Blue),
                         &unk_822540,
                         ((signed int)-Time >> 5) & 0xF,
                         0)) & 0xFF);
    }
      return target; /*0x4dc74a*/
  }
// 0x004E3320
int ObjectClass::GetResourceIDHardcodedCSF() {
  if ( !this ) /*0x4e3324*/
    return 1754; /*0x4e3326*/
  if ( this == 1 ) /*0x4e332f*/
    return 1755; /*0x4e3331*/
  if ( this == 2 ) /*0x4e333a*/
    return 1756; /*0x4e333c*/
  if ( this == 3 ) /*0x4e3345*/
    return 1757; /*0x4e3347*/
  if ( this == 4 ) /*0x4e3350*/
    return 1758; /*0x4e3352*/
  if ( this == 5 ) /*0x4e335b*/
    return 1759; /*0x4e335d*/
  if ( this == 6 ) /*0x4e3366*/
    return 1760; /*0x4e3368*/
  return this != 7 ? -1 : 1761;
}
// 0x004F9F70
  char ObjectClass::COMStub_4F9F70(int a2, char a3)
  {
    return HouseClass::SetAlliance((int)this, *((unsigned int *)dword_A8022C + a2), a3); /*0x4f9f87*/
  }
// 0x0050D6D0
short ObjectClass::SelectSimilarBuildingTypes(int a2) {

  ObjectClass *v2; // ebp
  int i; // eax
  unsigned int *v4; // esi
  __int16 v5; // dx
  unsigned short *v6; // edi
  int v7; // ebp
  void *v8; // eax
  __int16 v9; // dx
  int v10; // ebp
  void *v11; // eax
  void *v12; // eax
  int v13; // edi
  unsigned int *v14; // eax
  int v15; // ebp
  void *v16; // eax
  __int16 v17; // dx
  int v18; // ebp
  void *v19; // eax
  void *v20; // eax
  int v21; // edi
  ObjectPlacement *v22; // eax
  int *v23; // eax
  unsigned int *v25; // [esp+20h] [ebp-54h]
  int v26; // [esp+24h] [ebp-50h]
  int v27; // [esp+28h] [ebp-4Ch]
  int v28; // [esp+2Ch] [ebp-48h]
  __int16 v29[2]; // [esp+34h] [ebp-40h] BYREF
  int v30; // [esp+38h] [ebp-3Ch]
  unsigned __int16 *v31; // [esp+3Ch] [ebp-38h]
  __int16 v32[2]; // [esp+40h] [ebp-34h] BYREF
  unsigned __int16 *v33; // [esp+44h] [ebp-30h]
  int v34; // [esp+48h] [ebp-2Ch]
  ObjectClass *v35; // [esp+4Ch] [ebp-28h]
  unsigned char v36[12]; // [esp+50h] [ebp-24h] BYREF
  unsigned char v37[24]; // [esp+5Ch] [ebp-18h] BYREF
  _UNKNOWN *retaddr; // [esp+74h] [ebp+0h] BYREF

  v2 = this; /*0x50d6e0*/
  v35 = this; /*0x50d6e4*/
  if ( (unsigned short)a2 == *(unsigned short *)&stru_A8E960.waypoints[6] ) /*0x50d6e8*/
  {
    (i) = ((i) & ~0xFFFF) | (((((a2) >> 16) & 0xFFFF)) & 0xFFFF); /*0x50d6ea*/
    if ( (((a2) >> 16) & 0xFFFF) == *(unsigned short *)&stru_A8E960.waypoints[8] ) /*0x50d6f6*/
      return i; /*0x50d6f6*/
  }
  v30 = 0; /*0x50d702*/
  i = dword_8B3DD0 - 1; /*0x50d70a*/
  v34 = dword_8B3DD0 - 1; /*0x50d70f*/
  if ( dword_8B3DD0 - 1 < 0 ) /*0x50d713*/
    return i; /*0x50d713*/
  while ( 1 ) /*0x50d725*/
  {
    v4 = (unsigned int *)*((unsigned int *)dword_8B3DC4 + i); /*0x50d725*/
    v5 = (((a2) >> 16) & 0xFFFF) + HIWORD(dword_ABD490[v30]); /*0x50d73c*/
    v6 = (unsigned short *)(4 * v30 + 11261072); /*0x50d741*/
    LOWORD(v31) = a2 + LOWORD(dword_ABD490[v30]); /*0x50d74b*/
    HIWORD(v31) = v5; /*0x50d750*/
    *(unsigned int *)v29 = v31; /*0x50d759*/
    if ( (ObjectClass *)v4[135] != v2 ) /*0x50d765*/
      goto LABEL_25; /*0x50d765*/
    if ( !v4 || (*(int (**)(unsigned int *))(*v4 + 44))(v4) != 1 || v4[71] ) /*0x50d783*/
      break; /*0x50d783*/
    v7 = *v4; /*0x50d791*/
    v8 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v29); /*0x50d7a5*/
    for ( i = (*(int (**)(unsigned int *, void *, int, int, unsigned int, int))(v7 + 428))(v4, v8, -1, -1, 0, 1); /*0x50d7b5*/
          i;
          i = (*(int (**)(unsigned int *, void *, int, int, unsigned int, int))(v10 + 428))(v4, v11, -1, -1, 0, 1) )
    {
      v6 += 2; /*0x50d7bb*/
      ++v30; /*0x50d7c5*/
      if ( (int)v6 > (int)&dword_ABDA08 ) /*0x50d7c9*/
        return i; /*0x50d7c9*/
      v9 = (((a2) >> 16) & 0xFFFF) + v6[1]; /*0x50d7d6*/
      v32[0] = a2 + *v6; /*0x50d7e0*/
      v32[1] = v9; /*0x50d7e7*/
      *(unsigned int *)v29 = *(unsigned int *)v32; /*0x50d7f9*/
      v10 = *v4; /*0x50d7fd*/
      v11 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v29); /*0x50d804*/
    }
    v12 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v29); /*0x50d816*/
    v13 = *v4; /*0x50d827*/
    v14 = (unsigned int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)v12 + 72))(v12, v36); /*0x50d830*/
    if ( (*(unsigned __int8 (**)(unsigned int *, unsigned int, unsigned int, unsigned int))(v13 + 1288))(v4, *v14, v14[1], v14[2]) ) /*0x50d84a*/
    {
      (i) = ((i) & ~0xFFFF) | ((++v30) & 0xFFFF); /*0x50d85c*/
      if ( v30 > 350 ) /*0x50d866*/
        return i; /*0x50d866*/
    }
LABEL_25:
    i = --v34; /*0x50d998*/
    if ( v34 < 0 ) /*0x50d9a1*/
      return i; /*0x50d9a1*/
    v2 = v35; /*0x50d71b*/
  }
  if ( (ObjectClass *)v4[135] != v2 || !v4 || (*(int (**)(unsigned int *))(*v4 + 44))(v4) != 15 || v4[71] ) /*0x50d895*/
    goto LABEL_25; /*0x50d89d*/
  v15 = *v4; /*0x50d8a3*/
  v16 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v29); /*0x50d8b7*/
  i = (*(int (**)(unsigned int *, void *, int, int, unsigned int, int))(v15 + 428))(v4, v16, -1, -1, 0, 1); /*0x50d8bf*/
  if ( !i ) /*0x50d8c7*/
  {
LABEL_23:
    v20 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v29); /*0x50d928*/
    v21 = *v4; /*0x50d939*/
    v25 = (unsigned int *)(*(int (**)(void *, unsigned char *, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v20 + 72))( /*0x50d94b*/
                      v20,
                      v37,
                      0,
                      0,
                      0);
    v22 = (ObjectPlacement *)((CellCoord *)&dword_87F7E8)->To_CellObj(v32); /*0x50d95b*/
    v23 = ObjectPlacement::CalcPosition(v22, (int *)&retaddr, v25, v26, v27, v28); /*0x50d962*/
    v26 = *v23; /*0x50d96e*/
    v27 = v23->ptr_4; /*0x50d976*/
    v28 = v23->ptr_8; /*0x50d979*/
    if ( (*(unsigned __int8 (**)(unsigned int *))(v21 + 1288))(v4) ) /*0x50d97e*/
    {
      (i) = ((i) & ~0xFFFF) | ((++v30) & 0xFFFF); /*0x50d98c*/
      if ( v30 > 350 ) /*0x50d996*/
        return i; /*0x50d996*/
    }
    goto LABEL_25; /*0x50d996*/
  }
  while ( 1 ) /*0x50d8cd*/
  {
    v6 += 2; /*0x50d8cd*/
    ++v30; /*0x50d8d7*/
    if ( (int)v6 > (int)&dword_ABDA08 ) /*0x50d8db*/
      return i; /*0x50d9a7*/
    v17 = (((a2) >> 16) & 0xFFFF) + v6[1]; /*0x50d8e8*/
    LOWORD(v33) = a2 + *v6; /*0x50d8f2*/
    HIWORD(v33) = v17; /*0x50d8f9*/
    *(unsigned int *)v29 = v33; /*0x50d90b*/
    v18 = *v4; /*0x50d90f*/
    v19 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v29); /*0x50d916*/
    i = (*(int (**)(unsigned int *, void *, int, int, unsigned int, int))(v18 + 428))(v4, v19, -1, -1, 0, 1); /*0x50d91e*/
    if ( !i ) /*0x50d926*/
      goto LABEL_23; /*0x50d926*/
  }

}
// 0x005176C0
bool ObjectClass::WinMain_Helper() {
return (~(uint8_t)this->ptr_0 & 4) != 0; /*0x5176c9*/
}
// 0x0053B780
int ObjectClass::ApplyChronoScreenColorShift() {
int result; // eax
ObjectClass *v2; // esi
int v3; // ebx
int v4; // ebp
int v5; // edi
int v6; // eax
int v7; // edx
unsigned int v8; // eax
unsigned int v9; // eax
unsigned int v10; // eax
int v11; // ebp
unsigned short *v12; // [esp+8h] [ebp-1Ch]
unsigned short *v13; // [esp+8h] [ebp-1Ch]
unsigned short *v14; // [esp+8h] [ebp-1Ch]
int v15; // [esp+Ch] [ebp-18h]
int v16; // [esp+10h] [ebp-14h]
int v18; // [esp+18h] [ebp-Ch]
int v19; // [esp+1Ch] [ebp-8h]
int v20; // [esp+1Ch] [ebp-8h]
int v21; // [esp+1Ch] [ebp-8h]
int v22; // [esp+20h] [ebp-4h]
int v23; // [esp+20h] [ebp-4h]
int v24; // [esp+20h] [ebp-4h]

result = ChronoScreenEffect_Status; /*0x53b783*/
v2 = this; /*0x53b789*/
if ( ChronoScreenEffect_Status == 3 ) /*0x53b792*/
{
    v15 = (*((int (**)(ObjectClass *))this->ptr_0 + 31))(this); /*0x53b7a6*/
    v3 = (*((int (**)(ObjectClass *))v2->ptr_0 + 32))(v2) - 32; /*0x53b7cc*/
    v4 = ((*((int (**)(ObjectClass *))v2->ptr_0 + 29))(v2) - 2 * v15) / 2; /*0x53b7d0*/
    v18 = v4; /*0x53b7d6*/
    v5 = (*((int (**)(ObjectClass *, unsigned int, unsigned int))v2->ptr_0 + 23))(v2, 0, 0); /*0x53b7e3*/
    v16 = 255 * ChronoScreenEffect_Duration / dword_A9FAA8; /*0x53b7f3*/
    v6 = DDraw_GetStatus() - 1; /*0x53b7fc*/
    if ( v6 ) /*0x53b7fd*/
    {
      if ( v6 == 1 ) /*0x53b804*/
      {
        v13 = (unsigned short *)v5; /*0x53b8f6*/
        if ( v3 > 0 ) /*0x53b8fa*/
        {
          v20 = v3; /*0x53b900*/
          do /*0x53b9c8*/
          {
            (*(((unsigned short *)&(v9)) + 1)) = (*(((unsigned short *)&(v15)) + 1)); /*0x53b904*/
            if ( v15 > 0 ) /*0x53b90a*/
            {
              v23 = v15; /*0x53b914*/
              do /*0x53b9a1*/
              {
                v5 += 2; /*0x53b927*/
                (*((unsigned short *)&(v9))) = *v13; /*0x53b92a*/
                *(unsigned short *)(v5 - 2) = ((*v13 & 0x1F) + (((uint16_t)v16 * (31 - (*v13 & 0x1F))) >> 8)) /*0x53b991*/
                | (32
                * (((v9 >> 5) & 0x3F)
                + ((int)((uint16_t)v16 * (63 - ((v9 >> 5) & 0x3F))) >> 8)))
                | (((*v13 >> 11)
                + (uint16_t)(((uint16_t)v16 * (31 - (*v13 >> 11))) >> 8)) << 11);
                v9 = v23 - 1; /*0x53b998*/
                ++v13; /*0x53b999*/
                v23 = v9; /*0x53b99d*/
              }
              while ( v9 ); /*0x53b9a1*/
              v4 = v18; /*0x53b9a7*/
              v2 = this; /*0x53b9ab*/
            }
            v5 += 2 * v4; /*0x53b9b7*/
            v13 += v4; /*0x53b9bf*/
            --v20; /*0x53b9c4*/
          }
          while ( v20 ); /*0x53b9c8*/
        }
      }
      else
      {
        v12 = (unsigned short *)v5; /*0x53b80c*/
        if ( v3 > 0 ) /*0x53b810*/
        {
          v22 = v3; /*0x53b816*/
          do /*0x53b8df*/
          {
            if ( v15 > 0 ) /*0x53b820*/
            {
              v19 = v15; /*0x53b82a*/
              do /*0x53b8b8*/
              {
                (*(((unsigned short *)&(v8)) + 1)) = (*(((unsigned short *)&(v12)) + 1)); /*0x53b834*/
                v5 += 2; /*0x53b83d*/
                (*((unsigned short *)&(v8))) = *v12; /*0x53b840*/
                *(unsigned short *)(v5 - 2) = ((*v12 & 0x1F) + (((uint16_t)v16 * (31 - (*v12 & 0x1F))) >> 8)) /*0x53b8a8*/
                | (32
                * (((v8 >> 5) & 0x1F)
                + ((int)((uint16_t)v16 * (31 - ((v8 >> 5) & 0x1F))) >> 8)))
                | ((((v8 >> 10) & 0x1F)
                + (uint16_t)((int)((uint16_t)v16 * (31 - ((v8 >> 10) & 0x1F))) >> 8)) << 10);
                ++v12; /*0x53b8b0*/
                --v19; /*0x53b8b4*/
              }
              while ( v19 ); /*0x53b8b8*/
              v2 = this; /*0x53b8be*/
              v4 = v18; /*0x53b8c2*/
            }
            v5 += 2 * v4; /*0x53b8ce*/
            v12 += v4; /*0x53b8d6*/
            --v22; /*0x53b8db*/
          }
          while ( v22 ); /*0x53b8df*/
        }
      }
    }
    else
    {
      v14 = (unsigned short *)v5; /*0x53b9df*/
      if ( v3 > 0 ) /*0x53b9e3*/
      {
        v21 = v3; /*0x53b9e9*/
        do /*0x53bab1*/
        {
          if ( v15 > 0 ) /*0x53b9f3*/
          {
            v24 = v15; /*0x53b9fd*/
            do /*0x53ba8a*/
            {
              (*(((unsigned short *)&(v10)) + 1)) = (*(((unsigned short *)&(v14)) + 1)); /*0x53ba07*/
              v5 += 2; /*0x53ba10*/
              (*((unsigned short *)&(v10))) = *v14; /*0x53ba13*/
              (*((unsigned short *)&(v7))) = *v14 >> 11; /*0x53ba1b*/
              v11 = v7 + (((uint16_t)v16 * (31 - (uint16_t)v7)) >> 8); /*0x53ba3d*/
              v7 = (*v14 & 0x3F) + (((uint16_t)v16 * (63 - (*v14 & 0x3F))) >> 8); /*0x53ba72*/
              *(unsigned short *)(v5 - 2) = v7 /*0x53ba7a*/
              | ((((v10 >> 6) & 0x1F)
              + (uint16_t)((int)((uint16_t)v16 * (31 - ((v10 >> 6) & 0x1F))) >> 8)) << 6)
              | ((unsigned short)v11 << 11);
              ++v14; /*0x53ba82*/
              --v24; /*0x53ba86*/
            }
            while ( v24 ); /*0x53ba8a*/
            v2 = this; /*0x53ba90*/
            v4 = v18; /*0x53ba94*/
          }
          v5 += 2 * v4; /*0x53baa0*/
          v14 += v4; /*0x53baa8*/
          --v21; /*0x53baad*/
        }
        while ( v21 ); /*0x53bab1*/
      }
    }
    return (*((int (**)(ObjectClass *))v2->ptr_0 + 24))(v2); /*0x53babb*/
}
return result; /*0x53b8ef*/
}
// 0x00542FC0
int ObjectClass::Network_Init_542FC0(int a2) {
ObjectClass *v2; // ecx
int result; // eax

v2 = (ObjectClass *)this->ambientSoundController[3]; /*0x542fc0*/
if ( v2 ) /*0x542fc5*/
  return Network_Init_5402B0(v2, a2); /*0x542fcc*/
return result; /*0x542fd1*/
}
} // namespace gamemd
// 0x005430C0
int ObjectClass::StartGameWOL_Start(int a2) {
int v2; // ecx
int result; // eax

v2 = this->ambientSoundController[3]; /*0x5430c0*/
if ( v2 ) /*0x5430c5*/
  return (*(int (**)(int, int))(*(unsigned int *)v2 + 68))(v2, a2); /*0x5430ce*/
return result; /*0x5430d1*/
}
// 0x0054BD30
int ObjectClass::UpdateFootMoveToState() {

int v2; // ecx
int v3; // esi
int *v4; // ecx
int v5; // edx
unsigned int *v6; // edi
int *v7; // eax
int v8; // ebx
unsigned char *v9; // ecx
char v10; // bl
unsigned int *v11; // ecx
unsigned char *v12; // ecx
char v13; // bl
unsigned int *v14; // ecx
CellClass *v15; // eax
unsigned int *v16; // ecx
int v17; // edx
int v18; // edi
int v19; // eax
int v20; // eax
bool v21; // zf
int v22; // edi
CellClass *v23; // eax
CellClass *v24; // eax
unsigned char *v25; // ecx
char v26; // bl
int v27; // [esp+14h] [ebp-2Ch]
int v28; // [esp+20h] [ebp-20h] BYREF
int v29; // [esp+24h] [ebp-1Ch]
int v30; // [esp+28h] [ebp-18h]
int v31; // [esp+2Ch] [ebp-14h]
int v32; // [esp+30h] [ebp-10h]
int v33; // [esp+38h] [ebp-8h]
int v34; // [esp+3Ch] [ebp-4h]

v3 = v2; /*0x54bd35*/
if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)(v2 + 4) + 16))(v2 + 4) ) /*0x54bd3f*/
{
    v4 = &v3->q040; /*0x54bd4a*/
    v5 = v3->q040; /*0x54bd50*/
    v33 = *(unsigned int *)(v3 + 68); /*0x54bd55*/
    v6 = v3->ptr_C; /*0x54bd59*/
    v34 = *(unsigned int *)(v3 + 72); /*0x54bd5f*/
    v7 = v6 + 39; /*0x54bd63*/
    v30 = v6[39]; /*0x54bd6e*/
    v8 = v6[40]; /*0x54bd72*/
    v32 = v6[41]; /*0x54bd78*/
    if ( v5 == v30 && v33 == v8 ) /*0x54bd8d*/
    {
      if ( v6[173] ) /*0x54bd93*/
        return result; /*0x54bd9b*/
      if ( v6 /*0x54bdd0*/
        && (*(int (**)(unsigned int *))(*v6 + 44))(v6) == 1
        && *(unsigned char *)(v6[433] + 3603)
        && !*(unsigned char *)(v3->ptr_C + 1709) )
      {
        if ( *(unsigned char *)((*(int (**)(unsigned int *, double))(*v6 + 132))(v6, result) + 1709) ) /*0x54bde8*/
        {
          if ( !*((unsigned char *)v6 + 308) ) /*0x54bdf2*/
          {
            v9 = v3->ptr_C; /*0x54bdfc*/
            if ( !v9[1709] ) /*0x54bdff*/
            {
              v3->needsRedraw = v3->fallRate; /*0x54be0e*/
              v10 = v9[116]; /*0x54be16*/
              (*(void (**)(unsigned char *, unsigned int))(*(unsigned int *)v9 + 292))(v9, 0); /*0x54be19*/
              *(unsigned char *)(v3->ptr_C + 116) = v10; /*0x54be22*/
              v11 = v3->ptr_C; /*0x54be25*/
              v3->customSound_controller = 2; /*0x54be28*/
              BuildingClass::GetType_Thunk(v11); /*0x54be2f*/
              return result; /*0x54be3a*/
            }
          }
        }
        v28 = v3->ptr_C; /*0x54be40*/
        if ( *(unsigned int *)((*(int (**)(void))(*(unsigned int *)v28 + 444))() + 224) != v28 ) /*0x54be52*/
          goto LABEL_19; /*0x54be52*/
      }
      else
      {
        if ( *(unsigned char *)((*(int (**)(unsigned int, double))(**&v3->ptr_C + 132))( /*0x54be6d*/
                          v3->ptr_C,
                          result)
          + 3434) )
        {
          v12 = v3->ptr_C; /*0x54be77*/
          v13 = v12[116]; /*0x54be7e*/
          (*(void (**)(unsigned char *, unsigned int))(*(unsigned int *)v12 + 292))(v12, 0); /*0x54be81*/
          *(unsigned char *)(v3->ptr_C + 116) = v13; /*0x54be8a*/
          v14 = v3->ptr_C; /*0x54be8d*/
          v3->customSound_controller = 2; /*0x54be90*/
          BuildingClass::GetType_Thunk(v14); /*0x54be97*/
          return result; /*0x54bea2*/
        }
        v28 = v3->ptr_C; /*0x54bea8*/
        if ( *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v28 + 444))(v28) + 224) != v28 ) /*0x54bebc*/
          goto LABEL_19; /*0x54bebc*/
      }
      v15 = (CellClass *)(*(int (**)(int))(*(unsigned int *)v28 + 444))(v28); /*0x54bec4*/
      CellClass::AttachObject(v15, 0); /*0x54becc*/
      LABEL_19:
      v16 = v3->ptr_C; /*0x54bed1*/
        v3->customSound_controller = 4; /*0x54bed4*/
        BuildingClass::GetType_Thunk(v16); /*0x54bedb*/
        return result; /*0x54bee6*/
    }
    v17 = *v7; /*0x54bee7*/
    v18 = v6[40]; /*0x54bee9*/
    v19 = v7[2]; /*0x54beec*/
    v30 = v17; /*0x54beef*/
    v32 = v19; /*0x54bef3*/
    v20 = *v4; /*0x54bef7*/
    v21 = v17 == *v4; /*0x54bef9*/
    v31 = v18; /*0x54befb*/
    v29 = v20; /*0x54beff*/
    if ( v21 && v18 == *(unsigned int *)(v3 + 68) ) /*0x54bf08*/
      (v28) = ((v28) & ~0xFFFF) | ((0) & 0xFFFF); /*0x54bf0a*/
    Math::CalcAngle((double)v31 - (double)*(int *)(v3 + 68), (double)v29 - (double)v30); /*0x54bf2d*/
    result = (result - 1.570796326794897) * -10430.06004058427; /*0x54bf3b*/
    (v29) = ((v29) & ~0xFFFF) | ((Math::RoundToInt(result)) & 0xFFFF); /*0x54bf46*/
    v28 = v29; /*0x54bf53*/
    FacingClass::Update(&v3->u32_54, &v28); /*0x54bf5b*/
    if ( !*(unsigned int *)((*(int (**)(unsigned int))(*v3->ptr_C + 444))(v3->ptr_C) + 224) ) /*0x54bf6b*/
    {
      v22 = v3->ptr_C; /*0x54bf75*/
      if ( *((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj((__int16 *)(v22 + 1376)) + 56) == v22 ) /*0x54bf91*/
      {
        v23 = (CellClass *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj((__int16 *)(v22 + 1376)); /*0x54bfa1*/
        CellClass::AttachObject(v23, 0); /*0x54bfa8*/
      }
    }
    v24 = (CellClass *)(*(int (**)(unsigned int, unsigned int))(**&v3->ptr_C + 444))(*&v3->ptr_C, 0); /*0x54bfb4*/
    CellClass::AttachObject(v24, v27); /*0x54bfbc*/
    v25 = v3->ptr_C; /*0x54bfc1*/
    v26 = v25[116]; /*0x54bfc8*/
    (*(void (**)(unsigned char *, unsigned int))(*(unsigned int *)v25 + 292))(v25, 0); /*0x54bfcb*/
    *(unsigned char *)(*&v3->ptr_C + 116) = v26; /*0x54bfd4*/
    v3->customSound_controller = 3; /*0x54bfd7*/
}
return result; /*0x54be34*/

}
// 0x00551A30
int ObjectClass::ProcessAutoSave() {
int v2; // ebx
int result; // eax
unsigned int *ptr_0; // eax
int v5; // esi
int v6; // edi
int v7; // [esp+8h] [ebp-4h]

v2 = 0; /*0x551a35*/
result = this->uniqueId - 1; /*0x551a3a*/
if ( result > 0 ) /*0x551a3d*/
{
    do /*0x551a7d*/
    {
      ptr_0 = this->ptr_4; /*0x551a41*/
      v5 = ptr_0[v2 + 1]; /*0x551a44*/
      v6 = ptr_0[v2]; /*0x551a48*/
      v7 = (*(int (**)(int))(*(unsigned int *)v5 + 184))(v5); /*0x551a55*/
      if ( v7 < (*(int (**)(int))(*(unsigned int *)v6 + 184))(v6) ) /*0x551a67*/
      {
        *((unsigned int *)this->ptr_4 + v2 + 1) = v6; /*0x551a6c*/
        *((unsigned int *)this->ptr_4 + v2) = v5; /*0x551a73*/
      }
      ++v2; /*0x551a79*/
      result = this->uniqueId - 1; /*0x551a7a*/
    }
    while ( v2 < result ); /*0x551a7d*/
}
return result; /*0x551a81*/
}
// 0x0055AF50
void ObjectClass::Map_Init() {
  dword_829FF8 = (int)this; /*0x55af50*/
}
// 0x0055F690
int ObjectClass::CheckNetworkSync(int a2, int a3) {

  this->ptr_0 = (void *)(a3 & 0xFFFFFF); /*0x55f69f*/
  LOBYTE(this->ptr_4) = HIBYTE(a3); /*0x55f6a5*/
  *(unsigned int *)a2 = this->ptr_0; /*0x55f6ac*/
  *(unsigned char *)(a2 + 4) = this->ptr_4; /*0x55f6b2*/
  return a2; /*0x55f6b1*/

}
// 0x0056DA10
int ObjectClass::GetRegionMap(void* aP1, int a3, int a4) {

  __int16 **i; // ecx
  __int16 *v6; // eax
  __int64 v7; // rax
  int v9; // [esp+14h] [ebp-4h]
  __int16 *v10; // [esp+1Ch] [ebp+4h]

  v9 = this->customSound_controller[4]; /*0x56da24*/
  if ( a4 >= v9 ) /*0x56da28*/
    return -1; /*0x56dac3*/
  for ( i = (__int16 **)(16 * a4 + this->customSound_controller[1]); ; i += 4 ) /*0x56da38*/
  {
    if ( i[3] ) /*0x56da3a*/
      goto LABEL_12; /*0x56da3f*/
    v6 = i[1]; /*0x56da43*/
    v10 = *i; /*0x56da4e*/
    if ( (__int16)*i != (__int16)v6 ) /*0x56da52*/
      break; /*0x56da52*/
    LOWORD(v6) = aP1[1]; /*0x56da5a*/
    if ( (__int16)v6 >= SHIWORD(v10) && (__int16)v6 <= SHIWORD(v6) && (int)abs32(*aP1 - (__int16)*i) <= a3 ) /*0x56da7c*/
      return a4; /*0x56da7c*/
LABEL_12:
    if ( ++a4 >= v9 ) /*0x56dab7*/
      return -1; /*0x56dab7*/
  }
  if ( *aP1 > (__int16)v6 ) /*0x56da86*/
    goto LABEL_12; /*0x56da86*/
  if ( *aP1 < (__int16)*i ) /*0x56da8b*/
    goto LABEL_12; /*0x56da8b*/
  v7 = aP1[1] - SHIWORD(v10); /*0x56da98*/
  if ( (int)(((((v7) >> 32) & 0xFFFFFFFFu) ^ v7) - (((v7) >> 32) & 0xFFFFFFFFu)) > a3 ) /*0x56daa3*/
    goto LABEL_12; /*0x56daa3*/
  return a4; /*0x56dab9*/

}
// 0x0057B870
int ObjectClass::Map_Create() {
  unsigned int v1; // eax
  int *v2; // eax
  int v3; // edi
  unsigned int v4; // eax
  int *v5; // eax
  int v6; // edx
  int result; // eax
  int v8; // [esp+8h] [ebp-4h]
  int v9; // [esp+8h] [ebp-4h]

  (*(((unsigned short *)&(v8)) + 1)) = (*(this->ptr_0 + 1)); /*0x57b87a*/
  (*((unsigned short *)&(v8))) = (this->ptr_0) - 1; /*0x57b882*/
  v1 = (int16_t)v8 + ((*((signed short *)(((unsigned char *)&(v8)) + 2))) << 9); /*0x57b895*/
  if ( v1 >= 0x40000 || (v2 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v1)) == 0 ) /*0x57b8a5*/
  {
    g_MissionQueueFrame.briefing[139] = v8; /*0x57b8ab*/
    v2 = &g_MissionQueueFrame.briefing[130]; /*0x57b8b0*/
  }
  v3 = v2[17]; /*0x57b8bc*/
  (*(((unsigned short *)&(v9)) + 1)) = (*(this->ptr_0 + 1)); /*0x57b8c4*/
  (*((unsigned short *)&(v9))) = (this->ptr_0) + 1; /*0x57b8c9*/
  v4 = (int16_t)v9 + ((*((signed short *)(((unsigned char *)&(v9)) + 2))) << 9); /*0x57b8d4*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v4)) == 0 ) /*0x57b8e4*/
  {
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57b8ea*/
    g_MissionQueueFrame.briefing[139] = v9; /*0x57b8ef*/
  }
  v6 = 0; /*0x57b8f8*/
  switch ( v5[17] ) /*0x57b90a*/
  {
    case 'N': /*0x57b90a*/
    case 'P': /*0x57b90a*/
    case 'R': /*0x57b90a*/
    case ']': /*0x57b90a*/
      v6 = 1; /*0x57b911*/
      break; /*0x57b916*/
    case 'Q': /*0x57b90a*/
    case 'd': /*0x57b90a*/
      v6 = 2; /*0x57b918*/
      break; /*0x57b918*/
    default:
      break;
  }
  switch ( v3 ) /*0x57b92f*/
  {
    case 'O': /*0x57b92f*/
    case 'P': /*0x57b92f*/
    case 'Q': /*0x57b92f*/
    case '_': /*0x57b92f*/
      result = v6 | 4; /*0x57b939*/
      break; /*0x57b93c*/
    case 'R': /*0x57b92f*/
    case 'd': /*0x57b92f*/
      v6 |= 8u; /*0x57b93d*/
      goto LABEL_13; /*0x57b93d*/
    default:
  LABEL_13:
      result = v6; /*0x57b940*/
      break; /*0x57b940*/
  }
  return result; /*0x57b920*/
}
// 0x0057CAB0
int ObjectClass::Map_Create_57CAB0() {
  unsigned int v1; // eax
  int *v2; // eax
  int v3; // edi
  unsigned int v4; // eax
  int *v5; // eax
  int v6; // edx
  int result; // eax
  int v8; // [esp+8h] [ebp-4h]
  int v9; // [esp+8h] [ebp-4h]

  (*(((unsigned short *)&(v8)) + 1)) = (*(this->ptr_0 + 1)); /*0x57caba*/
  (*((unsigned short *)&(v8))) = (this->ptr_0) - 1; /*0x57cac2*/
  v1 = (int16_t)v8 + ((*((signed short *)(((unsigned char *)&(v8)) + 2))) << 9); /*0x57cad5*/
  if ( v1 >= 0x40000 || (v2 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v1)) == 0 ) /*0x57cae5*/
  {
    g_MissionQueueFrame.briefing[139] = v8; /*0x57caeb*/
    v2 = &g_MissionQueueFrame.briefing[130]; /*0x57caf0*/
  }
  v3 = v2[17]; /*0x57cafc*/
  (*(((unsigned short *)&(v9)) + 1)) = (*(this->ptr_0 + 1)); /*0x57cb04*/
  (*((unsigned short *)&(v9))) = (this->ptr_0) + 1; /*0x57cb09*/
  v4 = (int16_t)v9 + ((*((signed short *)(((unsigned char *)&(v9)) + 2))) << 9); /*0x57cb14*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v4)) == 0 ) /*0x57cb24*/
  {
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57cb2a*/
    g_MissionQueueFrame.briefing[139] = v9; /*0x57cb2f*/
  }
  v6 = 0; /*0x57cb38*/
  switch ( v5[17] ) /*0x57cb4d*/
  {
    case 209: /*0x57cb4d*/
    case 211: /*0x57cb4d*/
    case 213: /*0x57cb4d*/
    case 224: /*0x57cb4d*/
      v6 = 1; /*0x57cb54*/
      break; /*0x57cb59*/
    case 212: /*0x57cb4d*/
    case 231: /*0x57cb4d*/
      v6 = 2; /*0x57cb5b*/
      break; /*0x57cb5b*/
    default:
      break;
  }
  switch ( v3 ) /*0x57cb75*/
  {
    case 210: /*0x57cb75*/
    case 211: /*0x57cb75*/
    case 212: /*0x57cb75*/
    case 226: /*0x57cb75*/
      result = v6 | 4; /*0x57cb7f*/
      break; /*0x57cb82*/
    case 213: /*0x57cb75*/
    case 231: /*0x57cb75*/
      v6 |= 8u; /*0x57cb83*/
      goto LABEL_13; /*0x57cb83*/
    default:
  LABEL_13:
      result = v6; /*0x57cb86*/
      break; /*0x57cb86*/
  }
  return result; /*0x57cb66*/
}
// 0x00581090
int ObjectClass::CleanupMapSystems() {
  int v2; // ebx
  int *p_nextArrayIndex; // esi
  unsigned int *abstractFlags; // esi
  char *p_needsRedraw; // ebx
  char *p_onBridge; // edi
  int v7; // ebp
  unsigned int *v8; // esi

  v2 = 13; /*0x581096*/
  p_nextArrayIndex = &this->nextArrayIndex; /*0x58109b*/
  do /*0x5810b7*/
  {
    if ( *p_nextArrayIndex ) /*0x58109e*/
    {
      operator delete(((void *)*p_nextArrayIndex)); /*0x5810a5*/
      *p_nextArrayIndex = 0; /*0x5810ad*/
    }
    ++p_nextArrayIndex; /*0x5810b3*/
    --v2; /*0x5810b6*/
  }
  while ( v2 ); /*0x5810b7*/
  abstractFlags = (unsigned int *)this->abstractFlags; /*0x5810b9*/
  if ( abstractFlags ) /*0x5810be*/
  {
    if ( *abstractFlags ) /*0x5810c0*/
      (**(void (***)(unsigned int, int))*abstractFlags)(*abstractFlags, 3); /*0x5810ca*/
    operator delete((abstractFlags)); /*0x5810cd*/
    this->abstractFlags = 0; /*0x5810d5*/
  }
  p_needsRedraw = &this->needsRedraw; /*0x5810dc*/
  p_onBridge = &this->onBridge; /*0x5810e2*/
  v7 = 3; /*0x5810e8*/
  do /*0x58111c*/
  {
    (*(void (**)(char *))(*(unsigned int *)p_onBridge + 12))(p_onBridge); /*0x5810f1*/
    v8 = *(unsigned int **)p_needsRedraw; /*0x5810f4*/
    if ( *(unsigned int *)p_needsRedraw ) /*0x5810f4*/
    {
      if ( *v8 ) /*0x5810fa*/
        (**(void (***)(unsigned int, int))*v8)(*v8, 3); /*0x581104*/
      operator delete((v8)); /*0x581107*/
      *(unsigned int *)p_needsRedraw = 0; /*0x58110f*/
    }
    p_needsRedraw += 4; /*0x581115*/
    p_onBridge += 24; /*0x581118*/
    --v7; /*0x58111b*/
  }
  while ( v7 ); /*0x58111c*/
  CleanupVeinholeSystem(); /*0x58111e*/
  Map_Destroy(); /*0x581123*/
  BuildingClass::FreeUpgradeQueue(); /*0x581128*/
  return BuildingClass::FreeUpgradeQueue2(); /*0x58112d*/
}
// 0x005851B0
int ObjectClass::BuildTileAdjacencyTable(IUnknown * aP1) {

  int v3; // ecx
  int v4; // eax
  unsigned int v5; // eax
  Cell *v6; // eax
  Cell *v7; // edi
  char v8; // al
  int v9; // ecx
  int v10; // edi
  unsigned short *v11; // ebx
  unsigned short *v12; // edi
  int v13; // ebp
  unsigned int v14; // ebx
  int *v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // edx
  char v19; // al
  int v20; // eax
  unsigned int *v21; // edx
  unsigned __int8 *v22; // edi
  int v23; // edi
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  unsigned int *v27; // edx
  unsigned __int8 *v28; // ecx
  unsigned int v29; // ebx
  int *v30; // ecx
  int v31; // edi
  int v32; // eax
  int v33; // edx
  char v34; // al
  int v35; // eax
  unsigned int *v36; // edx
  unsigned __int8 *v37; // edi
  int v38; // edi
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  unsigned int *v42; // edx
  unsigned __int8 *v43; // ecx
  unsigned int v44; // ebx
  int *v45; // ecx
  int v46; // edi
  int v47; // eax
  int v48; // edx
  char v49; // al
  int v50; // eax
  unsigned int *v51; // edx
  unsigned __int8 *v52; // edi
  int v53; // edi
  int result; // eax
  int v55; // ecx
  unsigned int *v56; // edx
  unsigned __int8 *v57; // ecx
  char *isAliveFlag; // [esp+30h] [ebp-50h]
  __int16 v59[2]; // [esp+34h] [ebp-4Ch] BYREF
  __int16 v60[2]; // [esp+38h] [ebp-48h] BYREF
  __int16 v61[4]; // [esp+3Ch] [ebp-44h] BYREF
  __int16 v62[2]; // [esp+44h] [ebp-3Ch] BYREF
  __int16 v63[2]; // [esp+48h] [ebp-38h] BYREF
  __int16 v64[4]; // [esp+4Ch] [ebp-34h] BYREF
  unsigned __int8 *v65; // [esp+54h] [ebp-2Ch]
  unsigned __int8 *v66; // [esp+5Ch] [ebp-24h]
  unsigned __int8 *v67; // [esp+64h] [ebp-1Ch]
  unsigned __int8 *v68; // [esp+6Ch] [ebp-14h]
  unsigned __int8 *v69; // [esp+74h] [ebp-Ch]
  unsigned __int8 *v70; // [esp+7Ch] [ebp-4h]

  v3 = *aP1; /*0x5851bd*/
  v4 = aP1[1]; /*0x5851bf*/
  *(unsigned int *)v59 = v3; /*0x5851c2*/
  *(unsigned int *)v60 = v4; /*0x5851c6*/
  v5 = (__int16)v3 + ((short)(((v3) >> 16) & 0xFFFF) << 9); /*0x5851d5*/
  if ( v5 < 0x40000 && (v6 = *(Cell **)(dword_87F924 + 4 * v5)) != 0 ) /*0x5851eb*/
  {
    v7 = v6; /*0x5851ed*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x5851f1*/
    v7 = (Cell *)&unk_ABDC50; /*0x5851f7*/
  }
  *(unsigned int *)v61 = dword_ABD480; /*0x585203*/
  if ( (unsigned __int8)Cell::IsInRange(v7) || (unsigned __int8)Cell::IsInRange2(v7) ) /*0x585212*/
  {
    v8 = Cell::IsInRange(v7); /*0x585221*/
    v9 = g_Cell_BuildabilityLUT; /*0x585226*/
    if ( !v8 ) /*0x585231*/
      v9 = g_TerrainBridgeIndex; /*0x585233*/
    v10 = dword_82A944[v7->Cell_field_0x38 - v9]; /*0x58523f*/
    v11 = (unsigned short *)(4 * (v10 & 7) + 9041544); /*0x58524b*/
    *(unsigned int *)v62 = *CellStruct::Add((CellStruct *)v59, &aP1, v11); /*0x585265*/
    v12 = (unsigned short *)(4 * (((unsigned char)v10 - 4) & 7) + 9041544); /*0x585271*/
    *(unsigned int *)v64 = *CellStruct::Add((CellStruct *)v59, &aP1, v12); /*0x58528b*/
    *(unsigned int *)v63 = *CellStruct::Add((CellStruct *)v60, &aP1, v11); /*0x5852a0*/
    *(unsigned int *)v61 = *CellStruct::Add((CellStruct *)v60, &aP1, v12); /*0x5852ab*/
  }
  LOBYTE(v65) = 0; /*0x5852b5*/
  LOBYTE(v66) = 0; /*0x5852ba*/
  LOBYTE(v67) = 0; /*0x5852bf*/
  LOBYTE(v68) = 0; /*0x5852c4*/
  LOBYTE(v69) = 0; /*0x5852c9*/
  LOBYTE(v70) = 0; /*0x5852ce*/
  v13 = 0; /*0x5852d3*/
  isAliveFlag = this->isAliveFlag; /*0x5852d5*/
  do /*0x585581*/
  {
    v14 = *(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v59) + v13); /*0x5852f5*/
    v15 = (int *)*(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v60) + v13); /*0x58530a*/
    aP1 = v15; /*0x585312*/
    v16 = *(unsigned int *)isAliveFlag + 36 * v14; /*0x585318*/
    v17 = *(unsigned int *)(v16 + 8); /*0x58531b*/
    if ( *(unsigned int *)(v16 + 16) < v17 /*0x58534c*/
      || (*(unsigned char *)(v16 + 13) || !v17)
      && (v18 = *(unsigned int *)(v16 + 20), v18 > 0)
      && (v19 = (*(int (**)(int, int, unsigned int))(*(unsigned int *)v16 + 8))(v16, v17 + v18, 0), v15 = aP1, v19) )
    {
      v20 = *(unsigned int *)(v16 + 16); /*0x58534e*/
      *(unsigned int *)(v16 + 16) = v20 + 1; /*0x585354*/
      v21 = *(unsigned int **)(v16 + 4); /*0x585357*/
      v22 = v65; /*0x58535a*/
      v21[2 * v20] = (unsigned int)v15; /*0x58535e*/
      v21[2 * v20 + 1] = (unsigned int)v22; /*0x585361*/
    }
    v23 = *(unsigned int *)isAliveFlag + 36 * (unsigned int)v15; /*0x585372*/
    v24 = *(unsigned int *)(v23 + 8); /*0x585375*/
    if ( *(unsigned int *)(v23 + 16) < v24 /*0x585398*/
      || (*(unsigned char *)(v23 + 13) || !v24)
      && (v25 = *(unsigned int *)(v23 + 20), v25 > 0)
      && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v23 + 8))(v23, v24 + v25, 0) )
    {
      v26 = *(unsigned int *)(v23 + 16); /*0x58539f*/
      v27 = *(unsigned int **)(v23 + 4); /*0x5853a2*/
      *(unsigned int *)(v23 + 16) = v26 + 1; /*0x5853a8*/
      v28 = v66; /*0x5853ab*/
      v27[2 * v26] = v14; /*0x5853af*/
      v27[2 * v26 + 1] = (unsigned int)v28; /*0x5853b2*/
    }
    v29 = *(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v62) + v13); /*0x5853d2*/
    v30 = (int *)*(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v63) + v13); /*0x5853e7*/
    aP1 = v30; /*0x5853ef*/
    v31 = *(unsigned int *)isAliveFlag + 36 * v29; /*0x5853f5*/
    v32 = *(unsigned int *)(v31 + 8); /*0x5853f8*/
    if ( *(unsigned int *)(v31 + 16) < v32 /*0x585429*/
      || (*(unsigned char *)(v31 + 13) || !v32)
      && (v33 = *(unsigned int *)(v31 + 20), v33 > 0)
      && (v34 = (*(int (**)(int, int, unsigned int))(*(unsigned int *)v31 + 8))(v31, v32 + v33, 0), v30 = aP1, v34) )
    {
      v35 = *(unsigned int *)(v31 + 16); /*0x58542b*/
      *(unsigned int *)(v31 + 16) = v35 + 1; /*0x585431*/
      v36 = *(unsigned int **)(v31 + 4); /*0x585434*/
      v37 = v67; /*0x585437*/
      v36[2 * v35] = (unsigned int)v30; /*0x58543b*/
      v36[2 * v35 + 1] = (unsigned int)v37; /*0x58543e*/
    }
    v38 = *(unsigned int *)isAliveFlag + 36 * (unsigned int)v30; /*0x58544f*/
    v39 = *(unsigned int *)(v38 + 8); /*0x585452*/
    if ( *(unsigned int *)(v38 + 16) < v39 /*0x585475*/
      || (*(unsigned char *)(v38 + 13) || !v39)
      && (v40 = *(unsigned int *)(v38 + 20), v40 > 0)
      && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v38 + 8))(v38, v39 + v40, 0) )
    {
      v41 = *(unsigned int *)(v38 + 16); /*0x58547c*/
      v42 = *(unsigned int **)(v38 + 4); /*0x58547f*/
      *(unsigned int *)(v38 + 16) = v41 + 1; /*0x585485*/
      v43 = v68; /*0x585488*/
      v42[2 * v41] = v29; /*0x58548c*/
      v42[2 * v41 + 1] = (unsigned int)v43; /*0x58548f*/
    }
    v44 = *(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v64) + v13); /*0x5854af*/
    v45 = (int *)*(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v61) + v13); /*0x5854c4*/
    aP1 = v45; /*0x5854cc*/
    v46 = *(unsigned int *)isAliveFlag + 36 * v44; /*0x5854d2*/
    v47 = *(unsigned int *)(v46 + 8); /*0x5854d5*/
    if ( *(unsigned int *)(v46 + 16) < v47 /*0x585506*/
      || (*(unsigned char *)(v46 + 13) || !v47)
      && (v48 = *(unsigned int *)(v46 + 20), v48 > 0)
      && (v49 = (*(int (**)(int, int, unsigned int))(*(unsigned int *)v46 + 8))(v46, v47 + v48, 0), v45 = aP1, v49) )
    {
      v50 = *(unsigned int *)(v46 + 16); /*0x585508*/
      *(unsigned int *)(v46 + 16) = v50 + 1; /*0x58550e*/
      v51 = *(unsigned int **)(v46 + 4); /*0x585511*/
      v52 = v69; /*0x585514*/
      v51[2 * v50] = (unsigned int)v45; /*0x585518*/
      v51[2 * v50 + 1] = (unsigned int)v52; /*0x58551b*/
    }
    v53 = *(unsigned int *)isAliveFlag + 36 * (unsigned int)v45; /*0x58552c*/
    result = *(unsigned int *)(v53 + 8); /*0x58552f*/
    if ( *(unsigned int *)(v53 + 16) < result /*0x585557*/
      || (*(unsigned char *)(v53 + 13) || !result)
      && (v55 = *(unsigned int *)(v53 + 20), v55 > 0)
      && (result = (*(int (**)(int, int, unsigned int))(*(unsigned int *)v53 + 8))(v53, result + v55, 0), (unsigned char)result) )
    {
      result = *(unsigned int *)(v53 + 16); /*0x585559*/
      v56 = *(unsigned int **)(v53 + 4); /*0x58555c*/
      *(unsigned int *)(v53 + 16) = result + 1; /*0x585562*/
      v57 = v70; /*0x585565*/
      v56[2 * result] = v44; /*0x585569*/
      v56[2 * result + 1] = (unsigned int)v57; /*0x58556c*/
    }
    v13 += 2; /*0x585574*/
    isAliveFlag += 24; /*0x58557d*/
  }
  while ( v13 < 6 ); /*0x585581*/
  return result; /*0x585587*/

}
} // namespace gamemd
// 0x00595400
char ObjectClass::PlaceNeutralBuilding() {

  TechnoClass *v1; // ebx
  HouseClass *v2; // eax
  int Owner; // ebp
  int v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // eax
  int v9; // ebp
  unsigned short *v10; // edi
  char v11; // bl
  __int16 v12; // dx
  Cell *v13; // esi
  int v14; // eax
  char result; // al
  char v16; // [esp+13h] [ebp-39h]
  __int16 v17[2]; // [esp+14h] [ebp-38h] BYREF
  int *v18; // [esp+18h] [ebp-34h]
  int v19; // [esp+1Ch] [ebp-30h]
  unsigned __int16 *v20; // [esp+20h] [ebp-2Ch]
  TechnoClass *v21; // [esp+24h] [ebp-28h]
  __int16 v22[4]; // [esp+28h] [ebp-24h] BYREF
  __int64 attachedBomb; // [esp+30h] [ebp-1Ch]
  __int64 v24; // [esp+38h] [ebp-14h]
  unsigned int v25[3]; // [esp+40h] [ebp-Ch] BYREF

  v1 = this; /*0x595405*/
  v21 = this; /*0x59540e*/
  v2 = (HouseClass *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x595412*/
  Owner = HouseClass::FindOwner(v2); /*0x595425*/
  v16 = 0; /*0x595427*/
  v19 = 0; /*0x59542c*/
  v4 = __2_YAPAXI_Z(0x720u); /*0x595435*/
  if ( v4 ) /*0x59543c*/
  {
    *(unsigned int *)&v22[2] = 0; /*0x595443*/
    v5 = dword_8871E0->MessageDelay[0] - 1; /*0x595451*/
    *(double *)&v24 = (double)(unsigned int)dword_8871E0->MessageDelay[0]; /*0x59545d*/
    do /*0x59548c*/
    {
      *(unsigned long long *)v22 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x59546b*/
      (v6) = ((v6) & ~0xFFFF) | ((Math::RoundToInt((double)*(__int64 *)v22 * *(double *)&v24 * 2.328306437080797e-10)) & 0xFFFF); /*0x595485*/
    }
    while ( v6 > v5 ); /*0x59548c*/
    v18 = (int *)BuildingClass::Construct(v4, *(unsigned int *)(*(unsigned int *)dword_8871E0->MultiEngineer + 4 * v6), Owner); /*0x5954a6*/
  }
  else
  {
    v18 = 0; /*0x5954ac*/
  }
  while ( v19 < 100 ) /*0x5954bb*/
  {
    v7 = v1->attachedBomb - 1; /*0x5954c4*/
    attachedBomb = (unsigned int)v1->attachedBomb; /*0x5954ce*/
    *(double *)v22 = (double)attachedBomb; /*0x5954d6*/
    do /*0x595501*/
    {
      v24 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5954e4*/
      (v8) = ((v8) & ~0xFFFF) | ((Math::RoundToInt((double)v24 * *(double *)v22 * 2.328306437080797e-10)) & 0xFFFF); /*0x5954fa*/
    }
    while ( v8 > v7 ); /*0x595501*/
    *(unsigned int *)v17 = *(unsigned int *)(v1->fallRate + 4 * v8); /*0x595513*/
    v9 = *((char *)((CellCoord *)&dword_87F7E8)->To_CellObj(v17) + 283); /*0x595522*/
    v10 = (unsigned short *)(*(int (**)(int, int))(*(unsigned int *)v18[328] + 144))(v18[328], 1); /*0x595537*/
    v11 = 1; /*0x595539*/
    while ( *v10 != 0x7FFF || v10[1] != 0x7FFF ) /*0x595548*/
    {
      v12 = v17[1] + v10[1]; /*0x595556*/
      LOWORD(v20) = v17[0] + *v10; /*0x595561*/
      HIWORD(v20) = v12; /*0x595566*/
      *(unsigned int *)v22 = v20; /*0x595575*/
      v13 = (Cell *)((CellCoord *)&dword_87F7E8)->To_CellObj(v22); /*0x59557e*/
      if ( v13->Cell_field_0xE4 /*0x5955d6*/
        || !(unsigned __int8)Cell::IsEmpty(v13)
        || v13->u32_11B != v9
        || *&v13->u32_EC == 3
        || !(unsigned __int8)Type::CheckAmbiguity((Type *)&dword_87F7E8, (int)v13, 1)
        || HIBYTE(dword_ABED10[40 * *&v13->u32_24
                             + 34
                             + 40 * g_MapCellWidth * *&v13->u32_26]) )
      {
        v11 = 0; /*0x5955de*/
      }
      v10 += 2; /*0x5955e0*/
      if ( !v11 ) /*0x5955e5*/
        goto LABEL_24; /*0x5955e5*/
    }
    v25[0] = (v17[0] << 8) + 128; /*0x595608*/
    v25[2] = 0; /*0x595616*/
    v14 = *v18; /*0x59561e*/
    v25[1] = (v17[1] << 8) + 128; /*0x595620*/
    if ( (*(unsigned __int8 (**)(int *, unsigned int *, unsigned int))(v14 + 216))(v18, v25, 0) ) /*0x595629*/
      v16 = 1; /*0x595633*/
LABEL_24:
    result = v16; /*0x595638*/
    ++v19; /*0x595643*/
    if ( v16 ) /*0x595647*/
      return result; /*0x595647*/
    v1 = v21; /*0x5954b2*/
  }
  result = 0; /*0x595655*/
  if ( v18 ) /*0x595663*/
    return (*(char (**)(int *, int))(*v18 + 32))(v18, 1); /*0x595669*/
  return result; /*0x59564d*/

}
// 0x005A1FB0
char ObjectClass::SpreadMapSeedTerrainFromWaypoints() {

  int v1; // eax
  int v2; // ebx
  int v3; // edi
  unsigned int *v4; // ebp
  Heap *v5; // eax
  Heap *v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int i; // eax
  int v11; // ebx
  int v12; // eax
  bool v13; // sf
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  Heap v17; // edi
  unsigned int v20; // eax
  Heap v21; // eax
  CellStruct *v22; // edi
  CellStruct *v23; // ecx
  char v24; // al
  float *v25; // edi
  int v26; // edx
  Cell *v27; // eax
  __int16 v28; // ax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  Heap v33; // ebp
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // edx
  Heap v37; // ebx
  Heap v39; // eax
  CellStruct *v40; // eax
  double v42; // [esp+0h] [ebp-58h]
  __int16 v43[2]; // [esp+1Ch] [ebp-3Ch] BYREF
  int v44; // [esp+20h] [ebp-38h]
  int v45; // [esp+24h] [ebp-34h]
  CellStruct *v46; // [esp+28h] [ebp-30h]
  int v47; // [esp+2Ch] [ebp-2Ch]
  int v48; // [esp+30h] [ebp-28h]
  unsigned int *v49; // [esp+34h] [ebp-24h]
  int v50; // [esp+38h] [ebp-20h]
  int v51; // [esp+3Ch] [ebp-1Ch]
  int v52; // [esp+40h] [ebp-18h]
  int v53; // [esp+44h] [ebp-14h]
  int v54; // [esp+48h] [ebp-10h]
  ObjectClass *v55; // [esp+4Ch] [ebp-Ch]
  char v56[4]; // [esp+50h] [ebp-8h] BYREF
  int v57; // [esp+54h] [ebp-4h] BYREF

  v1 = this->customSound_controller[0]; /*0x5a1fb9*/
  v2 = 0; /*0x5a1fbe*/
  v55 = this; /*0x5a1fc4*/
  if ( v1 > 0 ) /*0x5a1fc8*/
  {
    do /*0x5a238f*/
    {
      v3 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v56, v2); /*0x5a1fdf*/
      v47 = v3; /*0x5a1fe6*/
      v4 = (unsigned int *)__2_YAPAXI_Z(0x1900u); /*0x5a1fef*/
      v49 = v4; /*0x5a1ff3*/
      v5 = (Heap *)__2_YAPAXI_Z(0x14u); /*0x5a1ff7*/
      v6 = v5; /*0x5a1ffc*/
      if ( v5 ) /*0x5a2003*/
      {
        v5[3] = 0; /*0x5a200a*/
        v5[4] = (Heap)-1; /*0x5a2011*/
        *v5 = 0; /*0x5a2018*/
        v5[1] = (Heap)800; /*0x5a201e*/
        v7 = __2_YAPAXI_Z(0xC84u); /*0x5a2025*/
        v8 = (int)v6[1]; /*0x5a202a*/
        v6[2] = (Heap)v7; /*0x5a202d*/
        v9 = 0; /*0x5a2033*/
        if ( v8 >= 0 ) /*0x5a2037*/
        {
          do /*0x5a204a*/
          {
            ++v9; /*0x5a203c*/
            *(unsigned int *)(*(unsigned int *)&v6[2] + 4 * v9 - 4) = 0; /*0x5a203d*/
          }
          while ( v9 <= *(unsigned int *)&v6[1] ); /*0x5a204a*/
        }
      }
      else
      {
        v6 = 0; /*0x5a204e*/
      }
      LayerClass::CellIteratorReset((LayerClass *)&DataGlobal_87F7E8); /*0x5a2055*/
      for ( i = ((LayerClass *)&DataGlobal_87F7E8)->CellIteratorNext(); /*0x5a2066*/
            i;
            i = ((LayerClass *)&DataGlobal_87F7E8)->CellIteratorNext() )
      {
        v50 = *(unsigned int *)(i + 36); /*0x5a206b*/
        *(unsigned int *)(80 * ((__int16)v50 + g_MapCellWidth * (short)(((v50) >> 16) & 0xFFFF)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a208c*/
      }
      v11 = v2 + 1; /*0x5a20a6*/
      v12 = 0; /*0x5a20a7*/
      v13 = *(unsigned int *)v6 < 0; /*0x5a20a9*/
      v45 = 0; /*0x5a20ab*/
      v50 = v11; /*0x5a20af*/
      if ( !v13 ) /*0x5a20b3*/
      {
        do /*0x5a20c1*/
        {
          ++v12; /*0x5a20b8*/
          *(unsigned int *)(*(unsigned int *)&v6[2] + 4 * v12 - 4) = 0; /*0x5a20b9*/
        }
        while ( v12 <= *(unsigned int *)v6 ); /*0x5a20c1*/
      }
      v14 = (short)(((v47) >> 16) & 0xFFFF); /*0x5a20c3*/
      *v6 = 0; /*0x5a20c8*/
      *v4 = v3; /*0x5a20ca*/
      v4[1] = 0; /*0x5a20cd*/
      v53 = (__int16)v3; /*0x5a20dc*/
      v44 = 1; /*0x5a20e6*/
      *(unsigned int *)(80 * ((__int16)v3 + g_MapCellWidth * v14) + g_MissionQueueFrame.localVariables[163] + 60) = v11; /*0x5a20f4*/
      v15 = *(unsigned int *)v6 + 1; /*0x5a20fd*/
      v51 = v4[1]; /*0x5a2100*/
      v16 = v15 >> 1; /*0x5a2107*/
      if ( v15 < *(unsigned int *)&v6[1] ) /*0x5a210b*/
      {
        for ( ; v15 > 1; v16 >>= 1 ) /*0x5a2110*/
        {
          v17 = v6[2]; /*0x5a2112*/
          _EBX = *(unsigned int *)(*(unsigned int *)&v17 + 4 * v16); /*0x5a2115*/
          __asm /*0x5a2118*/
          {
            fld dword ptr [ebx+4]
            fcomp [esp+50h+var_1C]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x5a2124*/
            break; /*0x5a2124*/
          *(unsigned int *)(*(unsigned int *)&v17 + 4 * v15) = _EBX; /*0x5a2126*/
          v15 = v16; /*0x5a2129*/
        }
        *(unsigned int *)(*(unsigned int *)&v6[2] + 4 * v15) = v4; /*0x5a2135*/
        v20 = (unsigned int)v6[3]; /*0x5a213a*/
        ++*(unsigned int *)v6; /*0x5a2140*/
        if ( (unsigned int)v4 > v20 ) /*0x5a2142*/
          v6[3] = (Heap)v4; /*0x5a2144*/
        if ( (unsigned int)v4 < *(unsigned int *)&v6[4] ) /*0x5a214a*/
          v6[4] = (Heap)v4; /*0x5a214c*/
      }
      if ( *v6 ) /*0x5a214f*/
      {
        v21 = v6[2]; /*0x5a2159*/
        v22 = *(CellStruct **)(*(unsigned int *)&v21 + 4); /*0x5a2161*/
        *(unsigned int *)(*(unsigned int *)&v21 + 4) = *(unsigned int *)(*(unsigned int *)&v21 + 4 * *(unsigned int *)v6); /*0x5a2164*/
        *(unsigned int *)(*(unsigned int *)&v6[2] + 4 * (*(unsigned int *)v6)--) = 0; /*0x5a216e*/
        Heap::SiftDown(v6, 1); /*0x5a217a*/
        v46 = v22; /*0x5a2181*/
        if ( v22 ) /*0x5a2185*/
        {
          do /*0x5a2368*/
          {
            if ( v45 >= 400 ) /*0x5a2193*/
              break; /*0x5a2193*/
            v23 = v46; /*0x5a2199*/
            *(unsigned char *)(80 * ((short)((v46->field_0) & 0xFFFF) + g_MapCellWidth * (short)(((v46->field_0) >> 16) & 0xFFFF)) /*0x5a21b9*/
                     + g_MissionQueueFrame.localVariables[163]
                     + 69) = 1;
            v24 = 0; /*0x5a21c2*/
            v48 = 0; /*0x5a21c4*/
            v25 = (float *)&v4[2 * v44]; /*0x5a21c8*/
            while ( 1 ) /*0x5a21ef*/
            {
              v52 = *CellStruct::Add(v23, &v57, (unsigned short *)(4 * (v24 & 7) + 9041544)); /*0x5a21ef*/
              *(unsigned int *)v43 = v52; /*0x5a21f3*/
              v26 = (short)(((v52) >> 16) & 0xFFFF) + (__int16)v52; /*0x5a21ff*/
              if ( v26 > g_MissionQueueFrame.localVariables[160] /*0x5a2243*/
                && (__int16)v52 - (short)(((v52) >> 16) & 0xFFFF) < g_MissionQueueFrame.localVariables[160]
                && (short)(((v52) >> 16) & 0xFFFF) - (__int16)v52 < g_MissionQueueFrame.localVariables[160]
                && v26 <= g_MissionQueueFrame.localVariables[161]
                && !*(unsigned int *)(80 * ((__int16)v52 + g_MapCellWidth * (short)(((v52) >> 16) & 0xFFFF))
                              + g_MissionQueueFrame.localVariables[163]
                              + 60) )
              {
                v27 = (Cell *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v43); /*0x5a2259*/
                if ( (unsigned __int8)Cell::IsEmpty(v27) ) /*0x5a2260*/
                {
                  v28 = v43[0]; /*0x5a226d*/
                  v29 = v53; /*0x5a2271*/
                  v30 = (short)(((v47) >> 16) & 0xFFFF); /*0x5a2275*/
                  *v25 = *(float *)v43; /*0x5a227a*/
                  v52 = (v28 - v29) * (v28 - v29) + (v43[1] - v30) * (v43[1] - v30); /*0x5a2297*/
                  __asm /*0x5a229b*/
                  {
                    fild [esp+58h+var_18]
                    fstp [esp+58h+var_58]; double
                  }
                  Math::Sqrt(v42); /*0x5a22a2*/
                  v31 = v43[1]; /*0x5a22a7*/
                  __asm { fstp dword ptr [edi+4] } /*0x5a22ac*/
                  v25[1] = _ET1; /*0x5a22ac*/
                  v33 = (Heap)v25; /*0x5a22c7*/
                  v25 += 2; /*0x5a22d2*/
                  *(unsigned int *)(80 * (v43[0] + g_MapCellWidth * v31) + g_MissionQueueFrame.localVariables[163] + 60) = v50; /*0x5a22d5*/
                  v34 = *(unsigned int *)(*(unsigned int *)&v33 + 4); /*0x5a22df*/
                  v35 = *(unsigned int *)v6 + 1; /*0x5a22e3*/
                  ++v44; /*0x5a22e4*/
                  v54 = v34; /*0x5a22ea*/
                  v36 = v35 >> 1; /*0x5a22f1*/
                  if ( v35 < *(unsigned int *)&v6[1] ) /*0x5a22f5*/
                  {
                    for ( ; v35 > 1; v36 >>= 1 ) /*0x5a22fa*/
                    {
                      v37 = v6[2]; /*0x5a22fc*/
                      _EAX = *(unsigned int *)(*(unsigned int *)&v37 + 4 * v36); /*0x5a22ff*/
                      __asm /*0x5a2302*/
                      {
                        fld dword ptr [eax+4]
                        fcomp [esp+50h+var_10]
                        fnstsw ax
                      }
                      if ( (_EAX & 0x4100) != 0 ) /*0x5a230e*/
                        break; /*0x5a230e*/
                      *(unsigned int *)(*(unsigned int *)&v37 + 4 * v35) = *(unsigned int *)(*(unsigned int *)&v37 + 4 * v36); /*0x5a2313*/
                      v35 = v36; /*0x5a2316*/
                    }
                    *(Heap *)(*(unsigned int *)&v6[2] + 4 * v35) = v33; /*0x5a2322*/
                    v39 = v6[3]; /*0x5a2327*/
                    ++*(unsigned int *)v6; /*0x5a232d*/
                    if ( *(unsigned int *)&v33 > *(unsigned int *)&v39 ) /*0x5a232f*/
                      v6[3] = v33; /*0x5a2331*/
                    if ( *(unsigned int *)&v33 < *(unsigned int *)&v6[4] ) /*0x5a2337*/
                      v6[4] = v33; /*0x5a2339*/
                  }
                }
              }
              v24 = ++v48; /*0x5a2340*/
              if ( v48 >= 8 ) /*0x5a2348*/
                break; /*0x5a2348*/
              v23 = v46; /*0x5a21ce*/
            }
            ++v45; /*0x5a2355*/
            v40 = (CellStruct *)PriorityQueue::Pop((PriorityQueue *)v6); /*0x5a2359*/
            v4 = v49; /*0x5a235e*/
            v46 = v40; /*0x5a2362*/
          }
          while ( v40 ); /*0x5a2368*/
        }
      }
      __3_YAXPAX_Z(v4); /*0x5a236f*/
      if ( v6 ) /*0x5a2379*/
        Scalar::Dtor((Scalar *)v6, 1); /*0x5a237f*/
      v2 = v50; /*0x5a2388*/
    }
    while ( v50 < v55->customSound_controller[0] ); /*0x5a238f*/
  }
  return 1; /*0x5a2395*/

}
// 0x005A2F50
void ObjectClass::SmoothTerrainMap() {

  double v1; // st7
  int v2; // ebx
  int v5; // esi
  __int16 v7; // cx
  __int16 v8; // ax
  int v9; // ebp
  int v12; // edx
  int v15; // ecx
  int v16; // edi
  bool v39; // zf
  unsigned __int16 *v42; // eax
  unsigned __int16 *v44; // eax
  __int16 v46; // [esp+8h] [ebp-78h]
  int v49; // [esp+14h] [ebp-6Ch]
  int v50; // [esp+18h] [ebp-68h]
  int v51; // [esp+1Ch] [ebp-64h]
  unsigned __int16 *v52; // [esp+1Ch] [ebp-64h]
  unsigned __int16 *v53; // [esp+1Ch] [ebp-64h]
  unsigned __int16 *v54; // [esp+20h] [ebp-60h]
  double v55; // [esp+28h] [ebp-58h]
  __int64 v56; // [esp+30h] [ebp-50h]
  double v59; // [esp+40h] [ebp-40h]
  __int64 v60; // [esp+48h] [ebp-38h]
  double v61; // [esp+50h] [ebp-30h]
  double v62; // [esp+58h] [ebp-28h]
  double v63; // [esp+60h] [ebp-20h]
  __int64 v65; // [esp+68h] [ebp-18h]

  __asm { fild dword ptr [ecx+44h] } /*0x5a2f59*/
  __asm { fld st }
  v2 = g_MapCellWidth * g_MapCellWidth; /*0x5a2f67*/
  __asm /*0x5a2f6a*/
  {
    fmul ds:dbl_7EDAA8
    fadd ds:dbl_7E3860
    fstp [esp+80h+var_28]
    fld st
    fmul ds:dbl_7EDAA0
  }
  v51 = g_MapCellWidth * g_MapCellWidth; /*0x5a2f84*/
  __asm /*0x5a2f88*/
  {
    fstp [esp+88h+var_38]
    fmul ds:dbl_7E44E8
    fstp [esp+88h+var_8]
    fld [esp+88h+var_38]
    fcomp ds:dbl_7ED7C8
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x5a2fa8*/
    return; /*0x5a2fa8*/
  _EDI = 0; /*0x5a2fae*/
  if ( v2 <= 0 ) /*0x5a2fb2*/
    return; /*0x5a2fb2*/
  v5 = 0; /*0x5a2fb8*/
  v50 = g_MapCellWidth * g_MapCellWidth; /*0x5a2fba*/
  v49 = 0; /*0x5a2fbe*/
  do /*0x5a3383*/
  {
    _ESI = (char *)dword_ABED10 + v5; /*0x5a2fc7*/
    v54 = *(unsigned __int16 **)_ESI; /*0x5a2fcb*/
    if ( !*(unsigned int *)_ESI ) /*0x5a2fd6*/
      goto LABEL_49; /*0x5a2fd6*/
    v7 = *(unsigned int *)_ESI - 1; /*0x5a2fe1*/
    v46 = HIWORD(v54) - 1; /*0x5a2fe3*/
    *((unsigned int *)_ESI + 4) = 0; /*0x5a2fe7*/
    v8 = HIWORD(v54) - 1; /*0x5a2fed*/
    *((unsigned int *)_ESI + 5) = 0; /*0x5a2ff0*/
    v9 = (__int16)(HIWORD(v54) - 1) + v7; /*0x5a2ff9*/
    v59 = 0.0; /*0x5a2ffc*/
    v55 = 0.0; /*0x5a300e*/
    if ( v9 > dword_ABED04 && v7 - v8 < dword_ABED04 && v8 - v7 < dword_ABED04 && v9 <= dword_ABED08 ) /*0x5a3034*/
    {
      _EDX = dword_ABED10; /*0x5a3047*/
      _EAX = 80 * (v7 + g_MapCellWidth * v46); /*0x5a3050*/
      __asm /*0x5a3053*/
      {
        fld qword ptr [eax+edx+8]
        fstp [esp+88h+var_40]
      }
    }
    v12 = SHIWORD(v54) + v7; /*0x5a3063*/
    if ( v12 <= dword_ABED04 /*0x5a3080*/
      || v7 - SHIWORD(v54) >= dword_ABED04
      || SHIWORD(v54) - v7 >= dword_ABED04
      || v12 > dword_ABED08 )
    {
      *((unsigned int *)_ESI + 2) = *((unsigned int *)_ESI + 2); /*0x5a30c2*/
      v15 = *((unsigned int *)_ESI + 3); /*0x5a30c5*/
      *((unsigned int *)_ESI + 4) = v60; /*0x5a30cc*/
      *((unsigned int *)_ESI + 3) = v15; /*0x5a30cf*/
      *((unsigned int *)_ESI + 5) = (((v60) >> 32) & 0xFFFFFFFFu); /*0x5a30d2*/
    }
    else
    {
      __asm { fld qword ptr [esi+8] } /*0x5a3089*/
      _EAX = &dword_ABED10[40 * v7 + 40 * g_MapCellWidth * SHIWORD(v54)]; /*0x5a309a*/
      __asm /*0x5a309c*/
      {
        fadd qword ptr [eax+8]
        fstp qword ptr [esi+8]
      }
      *((double *)_ESI + 1) = _RT1; /*0x5a309f*/
      *((unsigned int *)_ESI + 4) = *((unsigned int *)_EAX + 4); /*0x5a30a5*/
      *((unsigned int *)_ESI + 5) = *((unsigned int *)_EAX + 5); /*0x5a30ab*/
      __asm /*0x5a30ae*/
      {
        fld qword ptr [eax+8]
        fsub [esp+88h+var_40]
        fstp [esp+88h+var_58]
      }
    }
    v16 = v46 + (__int16)v54; /*0x5a30e5*/
    if ( v16 <= dword_ABED04 /*0x5a3102*/
      || (__int16)v54 - v46 >= dword_ABED04
      || v46 - (__int16)v54 >= dword_ABED04
      || v16 > dword_ABED08 )
    {
      __asm { fld [esp+88h+var_38] } /*0x5a313e*/
      __asm { fadd qword ptr [esi+10h] }
      *((unsigned int *)_ESI + 2) = *((unsigned int *)_ESI + 2); /*0x5a3148*/
      *((unsigned int *)_ESI + 3) = *((unsigned int *)_ESI + 3); /*0x5a314e*/
      __asm { fstp qword ptr [esi+10h] } /*0x5a3151*/
      *((double *)_ESI + 2) = _RT1; /*0x5a3151*/
    }
    else
    {
      _EAX = &dword_ABED10[40 * (__int16)v54 + 40 * g_MapCellWidth * v46]; /*0x5a3119*/
      __asm /*0x5a311b*/
      {
        fld qword ptr [eax+8]
        fadd qword ptr [esi+8]
        fstp qword ptr [esi+8]
      }
      *((double *)_ESI + 1) = _RT1; /*0x5a3121*/
      __asm /*0x5a3124*/
      {
        fld qword ptr [eax+10h]
        fadd qword ptr [esi+10h]
        fstp qword ptr [esi+10h]
      }
      *((double *)_ESI + 2) = _RT1; /*0x5a312a*/
      __asm /*0x5a312d*/
      {
        fld qword ptr [eax+8]
        fsub [esp+88h+var_40]
        fadd [esp+88h+var_58]
        fstp [esp+88h+var_58]
      }
    }
    __asm /*0x5a3154*/
    {
      fld qword ptr [esi+8]
      fmul ds:dbl_7E1738
      fst qword ptr [esi+8]
    }
    *((double *)_ESI + 1) = _RT1; /*0x5a315d*/
    __asm /*0x5a3160*/
    {
      fld qword ptr [esi+10h]
      fmul ds:dbl_7E1738
      fstp qword ptr [esi+10h]
    }
    *((double *)_ESI + 2) = _RT1; /*0x5a3169*/
    __asm /*0x5a316c*/
    {
      fld [esp+88h+var_58]
      fcomp ds:dbl_7E2800
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x5a317b*/
    {
      __asm /*0x5a318f*/
      {
        fld [esp+88h+var_58]
        fcomp ds:dbl_7E2800
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x5a319e*/
      {
        __asm /*0x5a31a0*/
        {
          fld [esp+88h+var_28]
          fchs
          fstp [esp+88h+var_58]
        }
      }
    }
    else
    {
      v55 = v62; /*0x5a3185*/
    }
    if ( _ESI[69] ) /*0x5a31aa*/
    {
      __asm /*0x5a31b1*/
      {
        fcom ds:dbl_7E2800
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x5a31bc*/
      {
        __asm /*0x5a31be*/
        {
          fstp st
          fld ds:dbl_7E2800
        }
      }
      __asm { fstp qword ptr [esi+8] } /*0x5a31c6*/
      *((double *)_ESI + 1) = _RT1; /*0x5a31c6*/
      *((unsigned int *)_ESI + 4) = 1202590843; /*0x5a31c9*/
      *((unsigned int *)_ESI + 5) = 1063549665; /*0x5a31d0*/
    }
    else
    {
      __asm { fstp st } /*0x5a31d9*/
    }
    __asm /*0x5a31db*/
    {
      fld qword ptr [esi+10h]
      fchs
      fstp [esp+88h+var_48]
      fld [esp+88h+var_8]
      fsub qword ptr [esi+10h]
    }
    v63 = 0.0; /*0x5a31fd*/
    v61 = 0.025; /*0x5a320d*/
    __asm /*0x5a3211*/
    {
      fstp qword ptr [esp+88h+var_78]
      fld ds:dbl_7ED7C8
      fchs
      fcomp qword ptr [esp+88h+var_78]
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x5a3226*/
      goto LABEL_33; /*0x5a3226*/
    __asm /*0x5a3228*/
    {
      fld ds:dbl_7ED7C8
      fcomp [esp+88h+var_48]
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x5a3237*/
    {
LABEL_33:
      __asm /*0x5a3239*/
      {
        fld qword ptr [esp+88h+var_78]
        fsub [esp+88h+var_48]
        fmul ds:dbl_7E1738
        fst [esp+88h+var_30]
        fadd [esp+88h+var_48]
        fstp [esp+88h+var_20]
      }
    }
    do /*0x5a3281*/
    {
      do /*0x5a3272*/
      {
        Random::Gaussian((int *)&byte_ABDFB8); /*0x5a3258*/
        __asm /*0x5a325d*/
        {
          fmul [esp+88h+var_30]
          fadd [esp+88h+var_20]
          fst [esp+88h+var_18]
          fcomp [esp+88h+var_48]
          fnstsw ax
        }
      }
      while ( (_AX & 0x100) != 0 ); /*0x5a3272*/
      __asm /*0x5a3274*/
      {
        fld [esp+88h+var_18]
        fcomp qword ptr [esp+88h+var_78]
        fnstsw ax
      }
    }
    while ( (_AX & 0x4100) == 0 ); /*0x5a3281*/
    __asm /*0x5a3283*/
    {
      fld [esp+88h+var_18]
      fadd qword ptr [esi+10h]
      fst [esp+88h+var_18]
      fstp qword ptr [esi+10h]
    }
    *((double *)_ESI + 2) = _RT1; /*0x5a328e*/
    __asm /*0x5a3291*/
    {
      fld ds:dbl_7EDA98
      fsub qword ptr [esi+8]
      fstp qword ptr [esp+88h+var_78]
      fld ds:dbl_7E1708
      fsub qword ptr [esi+8]
      fstp [esp+88h+var_48]
      fld [esp+88h+var_58]
      fcomp qword ptr [esp+88h+var_78]
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x5a32b8*/
    {
      __asm { fld qword ptr [esp+88h+var_78] } /*0x5a32ba*/
    }
    else
    {
      __asm /*0x5a32c0*/
      {
        fld [esp+88h+var_58]
        fcomp [esp+88h+var_48]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x5a32cd*/
        __asm { fld [esp+88h+var_58] } /*0x5a32d5*/
      else
        __asm { fld [esp+88h+var_48] } /*0x5a32cf*/
    }
    __asm { fst [esp+88h+var_10] } /*0x5a32e1*/
    v56 = v65; /*0x5a32e5*/
    __asm /*0x5a32ed*/
    {
      fld st
      fsub [esp+88h+var_50]
      fcomp [esp+88h+var_48]
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x5a32fc*/
    {
      __asm { fstp st } /*0x5a3313*/
LABEL_45:
      __asm /*0x5a3315*/
      {
        fld [esp+88h+var_48]
        fsub qword ptr [esp+88h+var_78]
        fmul ds:dbl_7E1738
        fst [esp+88h+var_50]
        fadd qword ptr [esp+88h+var_78]
        fstp [esp+88h+var_10]
      }
      goto LABEL_46; /*0x5a332b*/
    }
    __asm /*0x5a32fe*/
    {
      fld [esp+88h+var_50]
      fadd st, st(1)
      fcomp qword ptr [esp+88h+var_78]
      fnstsw ax
    }
    __asm { fstp st }
    if ( (_AX & 0x100) != 0 ) /*0x5a330f*/
      goto LABEL_45; /*0x5a330f*/
    do /*0x5a335d*/
    {
      do /*0x5a334e*/
      {
LABEL_46:
        Random::Gaussian((int *)&byte_ABDFB8); /*0x5a332f*/
        __asm /*0x5a3339*/
        {
          fmul [esp+88h+var_50]
          fadd [esp+88h+var_10]
          fst [esp+88h+var_18]
          fcomp qword ptr [esp+88h+var_78]
          fnstsw ax
        }
      }
      while ( (_AX & 0x100) != 0 ); /*0x5a334e*/
      __asm /*0x5a3350*/
      {
        fld [esp+88h+var_18]
        fcomp [esp+88h+var_48]
        fnstsw ax
      }
    }
    while ( (_AX & 0x4100) == 0 ); /*0x5a335d*/
    __asm /*0x5a335f*/
    {
      fld [esp+88h+var_18]
      fadd qword ptr [esi+8]
    }
    v2 = v51; /*0x5a3366*/
    _EDI = 0; /*0x5a336a*/
    __asm { fstp qword ptr [esi+8] } /*0x5a336c*/
    *((double *)_ESI + 1) = _RT1; /*0x5a336c*/
LABEL_49:
    v5 = v49 + 80; /*0x5a336f*/
    v39 = v50 == 1; /*0x5a337a*/
    v49 += 80; /*0x5a337b*/
    --v50; /*0x5a337f*/
  }
  while ( !v39 ); /*0x5a3383*/
  if ( v2 > 0 ) /*0x5a338b*/
  {
    while ( 1 ) /*0x5a338d*/
    {
      _EAX = dword_ABED10; /*0x5a338d*/
      __asm /*0x5a3392*/
      {
        fld qword ptr [edi+eax+8]
        fcomp ds:dbl_7E2800
      }
      _ESI = (double *)&dword_ABED10[_EDI + 4]; /*0x5a339c*/
      __asm /*0x5a33a0*/
      {
        fld qword ptr [esi]
        fnstsw ax
      }
      if ( (BYTE1(_EAX) & 1) != 0 ) /*0x5a33a7*/
        break; /*0x5a33a7*/
      __asm /*0x5a33be*/
      {
        fcomp ds:dbl_7E2800
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x5a33c9*/
      {
        __asm /*0x5a33cb*/
        {
          fld qword ptr [esi]
          fadd ds:dbl_7E1738
        }
        LOWORD(v44) = Math::RoundToInt(v1); /*0x5a33d3*/
        v53 = v44; /*0x5a33d8*/
        __asm { fild [esp+88h+var_64] } /*0x5a33dc*/
        goto LABEL_55; /*0x5a33dc*/
      }
LABEL_56:
      _EDI += 40; /*0x5a33e2*/
      if ( !--v2 ) /*0x5a33e6*/
        return; /*0x5a33e6*/
    }
    __asm { fsub ds:dbl_7E1738 } /*0x5a33a9*/
    LOWORD(v42) = Math::RoundToInt(v1); /*0x5a33af*/
    v52 = v42; /*0x5a33b4*/
    __asm { fild [esp+88h+var_64] } /*0x5a33b8*/
LABEL_55:
    __asm { fstp qword ptr [esi] } /*0x5a33e0*/
    *_ESI = _RT1; /*0x5a33e0*/
    goto LABEL_56; /*0x5a33e0*/
  }

}
// 0x005A35F0
int ObjectClass::GenerateTerrainHeightMap() {

  int v2; // esi
  __int16 *v3; // esi
  ObjectClass *v4; // edi
  unsigned __int16 *v5; // eax
  unsigned __int16 *v6; // ecx
  int v7; // eax
  int v8; // ebp
  int v9; // ebx
  unsigned int v10; // eax
  bool v11; // zf
  int v12; // esi
  int v13; // edi
  int result; // eax
  char v15; // al
  char v16; // bl
  int v17; // ebp
  unsigned short *v18; // esi
  int v19; // eax
  __int16 v20; // cx
  unsigned short *v21; // esi
  int v22; // ebp
  __int16 v23; // dx
  unsigned char *v24; // eax
  char v25; // dl
  ObjectClass *v26; // [esp+0h] [ebp-48h]
  ObjectClass *v27; // [esp+0h] [ebp-48h]
  char v28; // [esp+13h] [ebp-35h]
  int v29; // [esp+14h] [ebp-34h]
  unsigned __int16 *v30; // [esp+14h] [ebp-34h]
  int v31; // [esp+18h] [ebp-30h]
  unsigned __int16 *v32; // [esp+18h] [ebp-30h]
  int _6B4100; // [esp+1Ch] [ebp-2Ch]
  unsigned __int16 *v34; // [esp+1Ch] [ebp-2Ch]
  __int16 v35[4]; // [esp+20h] [ebp-28h] BYREF
  unsigned int v36[4]; // [esp+28h] [ebp-20h] BYREF
  unsigned int v37[4]; // [esp+38h] [ebp-10h]

  GenerateTerrainHeightMapInternal(); /*0x5a35f9*/
  this->SmoothTerrainMap(); /*0x5a3600*/
  InitSlaveManagerGrid(v26); /*0x5a3605*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 )
  {
    v2 = 0; /*0x5a361a*/
    v31 = g_MapCellWidth * g_MapCellWidth; /*0x5a361c*/
    v29 = 0; /*0x5a3620*/
    do
    {
      v3 = (__int16 *)((char *)dword_ABED10 + v2); /*0x5a3629*/
      if ( *v3 || v3[1] )
      {
        v4 = (ObjectClass *)((CellCoord *)&dword_87F7E8)->To_CellObj(v3); /*0x5a3643*/
        *(double *)v35 = (double)SHIBYTE(v4[1].health) + v3->ptr_8; /*0x5a3659*/
        _6B4100 = Map_Get_6B4100(v4); /*0x5a3662*/
        LOWORD(v5) = Math::RoundToInt(*(double *)v35 - (double)_6B4100); /*0x5a366e*/
        v6 = v5; /*0x5a3673*/
        v7 = abs32((int)v5); /*0x5a3678*/
        v8 = (int)v6 >= 0 ? 1 : -1;
        if ( v7 > 0 ) /*0x5a368a*/
        {
          v9 = v7; /*0x5a368c*/
          do /*0x5a36a5*/
          {
            v10 = Map_Helper_6B4240((int)v4, v8); /*0x5a3692*/
            ComputeTerrainFlowField(v8, 0, *(unsigned int *)v3, v10); /*0x5a369f*/
            --v9; /*0x5a36a4*/
          }
          while ( v9 ); /*0x5a36a5*/
        }
      }
      v2 = v29 + 80; /*0x5a36af*/
      v11 = v31 == 1; /*0x5a36b2*/
      v29 += 80; /*0x5a36b3*/
      --v31; /*0x5a36b7*/
    }
    while ( !v11 );
  }
  ProcessSlaveManagerTerrain(v27); /*0x5a36c1*/
  LayerClass::CellIteratorReset((LayerClass *)&dword_87F7E8); /*0x5a36cb*/
  v12 = 0; /*0x5a36da*/
  v13 = ((LayerClass *)&dword_87F7E8)->CellIteratorNext(); /*0x5a36dc*/
  v36[0] = 0; /*0x5a36f1*/
  result = 65537; /*0x5a370d*/
  v36[1] = 1; /*0x5a3711*/
  v36[2] = 65537; /*0x5a3725*/
  v36[3] = 0x10000; /*0x5a3729*/
  v37[0] = 11; /*0x5a372d*/
  v37[1] = 12; /*0x5a3735*/
  v37[2] = 9; /*0x5a373d*/
  v37[3] = 10; /*0x5a3745*/
  if ( v13 ) /*0x5a374d*/
  {
    while ( 1 ) /*0x5a375a*/
    {
      v15 = *(unsigned char *)(v13 + 284); /*0x5a375a*/
      v16 = 0; /*0x5a3760*/
      v28 = 1; /*0x5a3764*/
      if ( v15 == 5 ) /*0x5a3769*/
        break; /*0x5a3769*/
      if ( v15 == 11 ) /*0x5a37c9*/
      {
        v16 = 1; /*0x5a37cf*/
        do /*0x5a3823*/
        {
          v20 = HIWORD(v36[v12]); /*0x5a37d4*/
          *(unsigned int *)v35 = *(unsigned int *)(v13 + 36); /*0x5a37d9*/
          LOWORD(v30) = LOWORD(v36[v12]) + v35[0]; /*0x5a37e7*/
          HIWORD(v30) = v35[1] + v20; /*0x5a37f0*/
          *(unsigned int *)v35 = v30; /*0x5a37ff*/
          if ( *((unsigned __int8 *)((CellCoord *)&dword_87F7E8)->To_CellObj(v35) + 284) != v37[v12] ) /*0x5a3816*/
            v28 = 0; /*0x5a3818*/
          ++v12; /*0x5a381d*/
        }
        while ( v12 < 4 ); /*0x5a3823*/
        goto LABEL_21; /*0x5a3823*/
      }
LABEL_24:
      result = ((LayerClass *)&dword_87F7E8)->CellIteratorNext(); /*0x5a3893*/
      v13 = result; /*0x5a389d*/
      v12 = 0; /*0x5a389f*/
      if ( !result ) /*0x5a38a3*/
        return result; /*0x5a38a3*/
    }
    v17 = 0; /*0x5a376b*/
    v18 = v36; /*0x5a376d*/
    do /*0x5a37c3*/
    {
      v19 = *(unsigned int *)(v13 + 36); /*0x5a3771*/
      LOWORD(v32) = v19 + *v18; /*0x5a3787*/
      HIWORD(v32) = (((v19) >> 16) & 0xFFFF) + v18[1]; /*0x5a3790*/
      *(unsigned int *)v35 = v32; /*0x5a379f*/
      if ( *((unsigned __int8 *)((CellCoord *)&dword_87F7E8)->To_CellObj(v35) + 284) != v17 + 5 ) /*0x5a37b5*/
        v28 = 0; /*0x5a37b7*/
      ++v17; /*0x5a37bc*/
      v18 += 2; /*0x5a37bd*/
    }
    while ( v17 < 4 ); /*0x5a37c3*/
LABEL_21:
    if ( v28 ) /*0x5a382b*/
    {
      v21 = v36; /*0x5a382d*/
      v22 = 4; /*0x5a3831*/
      do /*0x5a3891*/
      {
        v23 = v21[1]; /*0x5a3839*/
        *(unsigned int *)v35 = *(unsigned int *)(v13 + 36); /*0x5a383d*/
        LOWORD(v34) = *v21 + v35[0]; /*0x5a384d*/
        HIWORD(v34) = v35[1] + v23; /*0x5a3853*/
        *(unsigned int *)v35 = v34; /*0x5a3861*/
        v24 = ((CellCoord *)&dword_87F7E8)->To_CellObj(v35); /*0x5a3865*/
        v25 = v24->u32_11B; /*0x5a386a*/
        v21 += 2; /*0x5a3870*/
        --v22; /*0x5a3875*/
        v24->u32_38 = 0xFFFF; /*0x5a3876*/
        v24->Tactical_11A = 0; /*0x5a387d*/
        v24->u32_11C = 0; /*0x5a3884*/
        v24->u32_11B = v16 + v25; /*0x5a388b*/
      }
      while ( v22 ); /*0x5a3891*/
    }
    goto LABEL_24; /*0x5a3891*/
  }
  return result; /*0x5a38a9*/

}
// 0x005A82E0
void ObjectClass::ScatterMapSeedBuildings(void* a2) {

  unsigned __int16 *v3; // eax
  __int16 *v4; // edi
  int attachedBomb; // eax
  int StringVector_field_0x08; // eax
  int StringVector_field_0x14; // ecx
  char **v8; // esi
  int v9; // eax
  HouseClass *v10; // eax
  int Owner; // eax
  unsigned __int16 *v12; // ebp
  unsigned int v13; // eax
  int IndexByName; // esi
  int v15; // eax
  unsigned int *v16; // ebp
  unsigned __int16 *v17; // eax
  __int16 v18; // si
  unsigned int v19; // eax
  __int16 v20; // bx
  __int16 v21; // di
  int *v22; // ecx
  __int16 v23; // bx
  int v24; // edx
  unsigned short *v25; // ebp
  __int16 v26; // dx
  Cell *v27; // esi
  int v28; // edx
  int StringVector_field_0x18; // eax
  char v30; // [esp+14h] [ebp-8Eh]
  char v31; // [esp+15h] [ebp-8Dh]
  unsigned int *v32; // [esp+16h] [ebp-8Ch]
  unsigned int v33; // [esp+1Ah] [ebp-88h]
  int v34; // [esp+1Eh] [ebp-84h]
  int v35; // [esp+22h] [ebp-80h]
  StringVector v36; // [esp+26h] [ebp-7Ch] BYREF
  double v37; // [esp+42h] [ebp-60h]
  int v38; // [esp+4Ah] [ebp-58h]
  unsigned __int16 *v39; // [esp+4Eh] [ebp-54h]
  unsigned __int16 *v40; // [esp+52h] [ebp-50h]
  __int16 v41; // [esp+56h] [ebp-4Ch]
  __int16 v42; // [esp+58h] [ebp-4Ah]
  __int64 v43; // [esp+5Ah] [ebp-48h]
  double v44; // [esp+62h] [ebp-40h] BYREF
  int v45; // [esp+6Ah] [ebp-38h]
  __int64 v46; // [esp+6Eh] [ebp-34h]
  __int64 v47; // [esp+76h] [ebp-2Ch]
  __int64 v48; // [esp+7Eh] [ebp-24h]
  __int64 v49; // [esp+86h] [ebp-1Ch]
  __int64 v50; // [esp+8Eh] [ebp-14h]
  unsigned int v51[3]; // [esp+96h] [ebp-Ch] BYREF

  do /*0x5a831e*/
  {
    v43 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a82f6*/
    LOWORD(v3) = Math::RoundToInt((double)v43 * 0.000000001164153218540399 + 8.0); /*0x5a8312*/
    v39 = v3; /*0x5a831a*/
  }
  while ( (unsigned int)v3 > 0xC ); /*0x5a831e*/
  v4 = a2; /*0x5a8320*/
  v35 = 0; /*0x5a832f*/
  v34 = 0; /*0x5a8333*/
  LODWORD(v43) = *((char *)((CellCoord *)&dword_87F7E8)->To_CellObj(a2) + 283); /*0x5a8343*/
  attachedBomb = this->attachedBomb; /*0x5a8347*/
  v38 = 0; /*0x5a834c*/
  v33 = 35; /*0x5a8350*/
  if ( !attachedBomb ) /*0x5a8358*/
    v38 = 15; /*0x5a835a*/
  StringVector::Construct(&v36, 0, 0); /*0x5a8368*/
  StringVector_field_0x08 = v36.StringVector_field_0x08; /*0x5a836d*/
  StringVector_field_0x14 = 10; /*0x5a8371*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E5BC4) */  /*0x5a8376*/
  v36.StringVector_field_0x14 = 10; /*0x5a837e*/
  v36.StringVector_field_0x10 = 0; /*0x5a8382*/
  v8 = off_82B1B0; /*0x5a8386*/
  while ( 1 ) /*0x5a8391*/
  {
    if ( v36.StringVector_field_0x10 < StringVector_field_0x08 ) /*0x5a8395*/
      goto LABEL_11; /*0x5a8395*/
    if ( (BYTE1(v36.StringVector_field_0x0C) || !StringVector_field_0x08) && StringVector_field_0x14 > 0 ) /*0x5a83a5*/
    {
      if ( (*(unsigned __int8 (**)(StringVector *, int, unsigned int))(*(unsigned int *)v36.__pad_0 + 8))( /*0x5a83b3*/
             &v36,
             StringVector_field_0x14 + StringVector_field_0x08,
             0) )
      {
LABEL_11:
        v9 = v36.StringVector_field_0x10++; /*0x5a83ba*/
        *(unsigned int *)(v36.StringVector_field_0x04 + 4 * v9) = *v8; /*0x5a83cb*/
      }
      StringVector_field_0x08 = v36.StringVector_field_0x08; /*0x5a83ce*/
    }
    if ( (int)++v8 >= (int)&off_82B240 ) /*0x5a83db*/
      break; /*0x5a83db*/
    StringVector_field_0x14 = v36.StringVector_field_0x14; /*0x5a838d*/
  }
  v10 = (HouseClass *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x5a83e2*/
  Owner = HouseClass::FindOwner(v10); /*0x5a83e9*/
  v12 = v39; /*0x5a83ee*/
  v45 = Owner; /*0x5a83f2*/
  if ( (int)v39 > 0 ) /*0x5a83f8*/
  {
    do /*0x5a86e5*/
    {
      if ( v35 >= 2 * (int)v12 ) /*0x5a8408*/
        break; /*0x5a8408*/
      v49 = (unsigned int)v38; /*0x5a8421*/
      v48 = v33 - v38 + 1; /*0x5a8430*/
      v44 = (double)v48; /*0x5a8438*/
      v37 = (double)(unsigned int)v38; /*0x5a8443*/
      do /*0x5a8476*/
      {
        v46 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a8451*/
        (v13) = ((v13) & ~0xFFFF) | ((Math::RoundToInt((double)v46 * v44 * 2.328306437080797e-10 + v37)) & 0xFFFF); /*0x5a846b*/
        v36.StringVector_field_0x18 = v13; /*0x5a8472*/
      }
      while ( v13 > v33 ); /*0x5a8476*/
      IndexByName = BuildingTypeClass::FindIndexByName(*(BuildingTypeClass **)(v36.StringVector_field_0x04 + 4 * v13)); /*0x5a8484*/
      if ( IndexByName != -1 ) /*0x5a8489*/
      {
        v15 = __2_YAPAXI_Z(0x720u); /*0x5a8494*/
        if ( v15 ) /*0x5a849e*/
        {
          v16 = (unsigned int *)BuildingClass::Construct(v15, *((unsigned int *)dword_A83C6C + IndexByName), v45); /*0x5a84b6*/
          LODWORD(v37) = 0; /*0x5a84b8*/
          v32 = v16; /*0x5a84bc*/
        }
        else
        {
          v32 = 0; /*0x5a84c7*/
          v16 = 0; /*0x5a84cb*/
          LODWORD(v37) = 0; /*0x5a84cd*/
        }
        v30 = 0; /*0x5a84c0*/
        while ( SLODWORD(v37) < 60 ) /*0x5a84e3*/
        {
          do /*0x5a8518*/
          {
            v50 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a84f3*/
            LOWORD(v17) = Math::RoundToInt((double)v50 * 0.000000003492459655621196); /*0x5a850e*/
            v18 = (__int16)v17; /*0x5a8513*/
          }
          while ( (unsigned int)v17 > 0xE ); /*0x5a8518*/
          do /*0x5a853e*/
          {
            v47 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a8524*/
            (v19) = ((v19) & ~0xFFFF) | ((Math::RoundToInt((double)v47 * 0.000000003492459655621196)) & 0xFFFF); /*0x5a8536*/
          }
          while ( v19 > 0xE ); /*0x5a853e*/
          v20 = *v4; /*0x5a8540*/
          v21 = v18 - 7 + v4[1]; /*0x5a854d*/
          v22 = (int *)v16[328]; /*0x5a8550*/
          v23 = v19 - 7 + v20; /*0x5a8556*/
          v24 = *v22; /*0x5a855b*/
          v41 = v23; /*0x5a855d*/
          v42 = v21; /*0x5a8562*/
          v25 = (unsigned short *)(*(int (**)(int *, int))(v24 + 144))(v22, 1); /*0x5a856d*/
          v31 = 1; /*0x5a856f*/
          while ( *v25 != 0x7FFF || v25[1] != 0x7FFF ) /*0x5a8582*/
          {
            v26 = v21 + v25[1]; /*0x5a8592*/
            LOWORD(v40) = v41 + *v25; /*0x5a8599*/
            HIWORD(v40) = v26; /*0x5a859e*/
            LODWORD(v44) = v40; /*0x5a85ad*/
            v27 = (Cell *)((CellCoord *)&dword_87F7E8)->To_CellObj((__int16 *)&v44); /*0x5a85b6*/
            if ( v27->Cell_field_0xE4 /*0x5a85eb*/
              || !(unsigned __int8)Cell::IsEmpty(v27)
              || v27->u32_11B != (unsigned int)v43
              || *&v27->u32_EC == 3
              || !(unsigned __int8)Type::CheckAmbiguity((Type *)&dword_87F7E8, (int)v27, 1) )
            {
              v31 = 0; /*0x5a85f4*/
            }
            v25 += 2; /*0x5a85fd*/
            if ( !v31 ) /*0x5a8602*/
              goto LABEL_43; /*0x5a8602*/
          }
          v51[1] = (v21 << 8) + 128; /*0x5a8630*/
          v51[0] = (v23 << 8) + 128; /*0x5a863b*/
          v28 = *v32; /*0x5a8649*/
          v51[2] = 0; /*0x5a864e*/
          if ( (*(unsigned __int8 (**)(unsigned int *, unsigned int *, unsigned int))(v28 + 216))(v32, v51, 0) ) /*0x5a8659*/
          {
            StringVector_field_0x18 = v36.StringVector_field_0x18; /*0x5a866b*/
            v30 = 1; /*0x5a8672*/
            ++v34; /*0x5a8677*/
            if ( v36.StringVector_field_0x18 < v36.StringVector_field_0x10 /*0x5a8684*/
              && v36.StringVector_field_0x18 < --v36.StringVector_field_0x10 )
            {
              do /*0x5a8698*/
              {
                ++StringVector_field_0x18; /*0x5a868a*/
                *(unsigned int *)(v36.StringVector_field_0x04 + 4 * StringVector_field_0x18 - 4) = *(unsigned int *)(v36.StringVector_field_0x04 + 4 * StringVector_field_0x18); /*0x5a868e*/
              }
              while ( StringVector_field_0x18 < v36.StringVector_field_0x10 ); /*0x5a8698*/
            }
            --v33; /*0x5a869a*/
          }
LABEL_43:
          v4 = a2; /*0x5a869e*/
          ++LODWORD(v37); /*0x5a86b0*/
          if ( v30 ) /*0x5a86b4*/
            goto LABEL_47; /*0x5a86b4*/
          v16 = v32; /*0x5a84d8*/
        }
        if ( v16 ) /*0x5a86c8*/
          (*(void (**)(unsigned int *, int))(*v16 + 32))(v16, 1); /*0x5a86d1*/
LABEL_47:
        v12 = v39; /*0x5a86d4*/
        ++v35; /*0x5a86dd*/
      }
    }
    while ( v34 < (int)v12 ); /*0x5a86e5*/
  }
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E5C24) */  /*0x5a86f4*/
  if ( v36.StringVector_field_0x04 ) /*0x5a86fd*/
  {
    if ( BYTE1(v36.StringVector_field_0x0C) ) /*0x5a8705*/
      __3_YAXPAX_Z((void *)v36.StringVector_field_0x04); /*0x5a8708*/
  }

}
// 0x005A95B0
void* ObjectClass::PlaceRandomAIBuildings() {

  unsigned int *result; // eax
  int v2; // ecx
  unsigned int *v3; // edi
  int i; // esi
  HouseClass *v5; // eax
  int v6; // ebp
  int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // eax
  unsigned int **v10; // ebx
  unsigned int v11; // edi
  int v12; // esi
  unsigned short *v13; // eax
  Cell *v14; // eax
  int v15; // eax
  int v16; // ebp
  unsigned short *v17; // edi
  char v18; // bl
  __int16 v19; // dx
  Cell *v20; // esi
  unsigned int *v21; // eax
  char v22; // [esp+13h] [ebp-4Dh]
  __int16 v23[2]; // [esp+14h] [ebp-4Ch] BYREF
  unsigned int *v24; // [esp+18h] [ebp-48h]
  int v25; // [esp+1Ch] [ebp-44h]
  __int16 v26[2]; // [esp+20h] [ebp-40h] BYREF
  unsigned __int16 *v27; // [esp+24h] [ebp-3Ch]
  unsigned int *v28; // [esp+28h] [ebp-38h]
  int Owner; // [esp+2Ch] [ebp-34h]
  __int16 v30[4]; // [esp+30h] [ebp-30h] BYREF
  __int16 v31; // [esp+38h] [ebp-28h] BYREF
  __int64 v32; // [esp+3Ch] [ebp-24h] BYREF
  __int64 v33; // [esp+44h] [ebp-1Ch]
  __int64 v34; // [esp+4Ch] [ebp-14h]
  unsigned int v35[3]; // [esp+54h] [ebp-Ch] BYREF

  if ( this->ambientSoundController[0] == 2 ) /*0x5a95bd*/
  {
    do /*0x5a95e7*/
    {
      v32 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a95c9*/
      LOWORD(result) = Math::RoundToInt((double)v32 * 6.984919311242392e-10); /*0x5a95df*/
    }
    while ( (unsigned int)result > 2 ); /*0x5a95e7*/
    if ( (int)result > 0 ) /*0x5a95eb*/
    {
      v2 = dword_ABDFA0; /*0x5a95f1*/
      v3 = result; /*0x5a95f7*/
      result = (unsigned int *)stru_ABDF90.Vector4_field_0x04; /*0x5a95f9*/
      do /*0x5a9626*/
      {
        for ( i = 0; i < v2; ++i ) /*0x5a9602*/
        {
          if ( *(int *)(result[i] + 32) > 0 ) /*0x5a960c*/
          {
            ((ObjectClass *)(TechnoClass *)result[i])->PlaceNeutralBuilding(); /*0x5a9610*/
            v2 = dword_ABDFA0; /*0x5a9615*/
            result = (unsigned int *)stru_ABDF90.Vector4_field_0x04; /*0x5a961b*/
          }
        }
        v3 = (unsigned int *)((char *)v3 - 1); /*0x5a9625*/
      }
      while ( v3 ); /*0x5a9626*/
    }
  }
  else
  {
    v5 = (HouseClass *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x5a9635*/
    Owner = HouseClass::FindOwner(v5); /*0x5a9641*/
    do /*0x5a966d*/
    {
      v32 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a964f*/
      LOWORD(result) = Math::RoundToInt((double)v32 * 0.000000001164153218540399); /*0x5a9665*/
    }
    while ( (unsigned int)result > 4 ); /*0x5a966d*/
    v6 = 0; /*0x5a966f*/
    if ( (int)result > 0 ) /*0x5a9673*/
    {
      v28 = result; /*0x5a9679*/
      do /*0x5a9908*/
      {
        v22 = 0; /*0x5a9682*/
        v25 = 0; /*0x5a9687*/
        v7 = __2_YAPAXI_Z(0x720u); /*0x5a9690*/
        if ( v7 ) /*0x5a9697*/
        {
          v8 = dword_8871E0->MessageDelay[0] - 1; /*0x5a96a8*/
          v33 = (unsigned int)dword_8871E0->MessageDelay[0]; /*0x5a96ac*/
          *(double *)v30 = (double)v33; /*0x5a96b4*/
          do /*0x5a96df*/
          {
            v34 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a96c2*/
            (v9) = ((v9) & ~0xFFFF) | ((Math::RoundToInt((double)v34 * *(double *)v30 * 2.328306437080797e-10)) & 0xFFFF); /*0x5a96d8*/
          }
          while ( v9 > v8 ); /*0x5a96df*/
          v10 = (unsigned int **)BuildingClass::Construct( /*0x5a96fd*/
                             v7,
                             *(unsigned int *)(*(unsigned int *)dword_8871E0->MultiEngineer + 4 * v9),
                             Owner);
          v24 = v10; /*0x5a96ff*/
        }
        else
        {
          v24 = 0; /*0x5a9705*/
          v10 = 0; /*0x5a9709*/
        }
        while ( v25 < 100 ) /*0x5a9718*/
        {
          do /*0x5a9786*/
          {
            v11 = g_MapCellWidth * g_MapCellWidth - 1; /*0x5a9726*/
            do /*0x5a9750*/
            {
              v12 = Range_RandomInt(0, v11); /*0x5a973a*/
              v13 = ((CellStruct *)&v31)->Set( 0, 0); /*0x5a973c*/
            }
            while ( (unsigned __int8)CellStruct::Equals((CellStruct *)&dword_ABED10[40 * v12], v13) ); /*0x5a9750*/
            ++v6; /*0x5a9765*/
            *(unsigned int *)v26 = *(unsigned int *)&dword_ABED10[40 * v12]; /*0x5a976f*/
            if ( v6 > 200 ) /*0x5a9773*/
            {
              v15 = *(unsigned int *)((CellStruct *)&v32)->Set( 0, 0); /*0x5a979e*/
              goto LABEL_29; /*0x5a97a0*/
            }
            v14 = (Cell *)((CellCoord *)&dword_87F7E8)->To_CellObj(v26); /*0x5a977f*/
          }
          while ( !(unsigned __int8)Cell::IsEmpty(v14) ); /*0x5a9786*/
          v15 = *(unsigned int *)v26; /*0x5a97a2*/
LABEL_29:
          *(unsigned int *)v23 = v15; /*0x5a97a6*/
          v16 = *((char *)((CellCoord *)&dword_87F7E8)->To_CellObj(v23) + 283); /*0x5a97c1*/
          v17 = (unsigned short *)(*(int (**)(unsigned int *, int))(*v10[328] + 144))(v10[328], 1); /*0x5a97d0*/
          v18 = 1; /*0x5a97d2*/
          while ( *v17 != 0x7FFF || v17[1] != 0x7FFF ) /*0x5a97e1*/
          {
            v19 = v23[1] + v17[1]; /*0x5a97ef*/
            LOWORD(v27) = v23[0] + *v17; /*0x5a97fa*/
            HIWORD(v27) = v19; /*0x5a97ff*/
            *(unsigned int *)v30 = v27; /*0x5a980e*/
            v20 = (Cell *)((CellCoord *)&dword_87F7E8)->To_CellObj(v30); /*0x5a9817*/
            if ( v20->Cell_field_0xE4 /*0x5a986f*/
              || !(unsigned __int8)Cell::IsEmpty(v20)
              || v20->u32_11B != v16
              || *&v20->u32_EC == 3
              || !(unsigned __int8)Type::CheckAmbiguity((Type *)&dword_87F7E8, (int)v20, 1)
              || HIBYTE(dword_ABED10[40 * *&v20->u32_24
                                   + 34
                                   + 40 * g_MapCellWidth * *&v20->u32_26]) )
            {
              v18 = 0; /*0x5a9877*/
            }
            v17 += 2; /*0x5a9879*/
            if ( !v18 ) /*0x5a987e*/
              goto LABEL_43; /*0x5a987e*/
          }
          v35[0] = (v23[0] << 8) + 128; /*0x5a98a1*/
          v35[2] = 0; /*0x5a98af*/
          v21 = (unsigned int *)*v24; /*0x5a98b7*/
          v35[1] = (v23[1] << 8) + 128; /*0x5a98b9*/
          if ( ((unsigned __int8 (*)(unsigned int *, unsigned int *, unsigned int))v21[54])(v24, v35, 0) ) /*0x5a98c2*/
            v22 = 1; /*0x5a98cc*/
LABEL_43:
          ++v25; /*0x5a98d1*/
          if ( v22 ) /*0x5a98e0*/
          {
            v6 = 0; /*0x5a98e6*/
            goto LABEL_47; /*0x5a98e8*/
          }
          v10 = (unsigned int **)v24; /*0x5a970d*/
          v6 = 0; /*0x5a9711*/
        }
        if ( v10 ) /*0x5a98f4*/
          ((void (*)(unsigned int **, int))(*v10)[8])(v10, 1); /*0x5a98fc*/
LABEL_47:
        result = (unsigned int *)((char *)v28 - 1); /*0x5a98ff*/
        v28 = (unsigned int *)((char *)v28 - 1); /*0x5a9904*/
      }
      while ( v28 ); /*0x5a9908*/
    }
  }
  return result; /*0x5a9628*/

}
// 0x005B6CD0
int ObjectClass::Surface_Lock() {
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  char v5; // dl
  int v7[62]; // [esp+8h] [ebp-FCh] BYREF
  int16_t v8; // [esp+100h] [ebp-4h]

  memset(v7, 0, sizeof(v7)); /*0x5b6ce5*/
  v2 = this->customSound_controller[1]; /*0x5b6ce7*/
  v8 = 0; /*0x5b6cea*/
  v3 = this->customSound_controller[0]; /*0x5b6cec*/
  v4 = this->customSound_controller[2]; /*0x5b6cef*/
  v7[0] = 101; /*0x5b6cf2*/
  *(int *)((char *)&v7[33] + 2) = v3; /*0x5b6cfa*/
  v7[53] = v2; /*0x5b6d01*/
  v7[52] = v4; /*0x5b6d08*/
  v7[54] = GameOptions::GetEntry(); /*0x5b6d19*/
  *(int *)((char *)&v7[7] + 2) = NetworkBuffer::GetField2(); /*0x5b6d2a*/
  *(int *)((char *)&v7[8] + 2) = NetworkBuffer::GetField3(); /*0x5b6d33*/
  (*((unsigned char *)&(v7[6]))) = dword_A8DB30; /*0x5b6d3c*/
  v5 = dword_A8B394; /*0x5b6d5a*/
  strcpy((char *)&v7[1], unk_A8B380); /*0x5b6d63*/
  *(int *)((char *)&v7[6] + 1) = dword_A8B3AC; /*0x5b6d7d*/
  (((unsigned char *)&(v7[7]))[1]) = v5; /*0x5b6d87*/
  return Stream::WriteBlock((int *)&unk_A8EA70, (int)v7, 250, 1); /*0x5b6d90*/
}
// 0x005B6EB0
void ObjectClass::UI_Setup(void* Format, unsigned int a3, int a4) {
  HWND DlgItem; // edi
  int (*v5)(char, char); // esi
  wchar_t Buffer[256]; // [esp+8h] [ebp-200h] BYREF

  if ( a4 ) /*0x5b6ec1*/
  {
    DlgItem = GetDlgItem((HWND)this->ptr_0, 1343); /*0x5b6ed1*/
    if ( DlgItem ) /*0x5b6ed5*/
    {
      if ( a3 >= 8 ) /*0x5b6ee1*/
        v5 = Math::InitDegToRad; /*0x5b6ef1*/
      else
        v5 = (int (*)(char, char))dword_8316A8[a3]; /*0x5b6ee8*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, a4); /*0x5b6f0a*/
      DrawDialogText((LPARAM)v5, Buffer, DlgItem); /*0x5b6f19*/
    }
  }
}
// 0x005CB790
unsigned int ObjectClass::TerritoryUpdateDisplayWOL(int a2) {
  int *v3; // eax
  int (**ptr_0)(ObjectClass *, unsigned char *); // edx
  int v5; // eax
  unsigned int *v6; // eax
  int result; // eax
  int v8; // [esp+8h] [ebp-20h] BYREF
  int v9; // [esp+Ch] [ebp-1Ch]
  int v10; // [esp+10h] [ebp-18h]
  int v11; // [esp+14h] [ebp-14h]
  unsigned char v12[16]; // [esp+18h] [ebp-10h] BYREF

  v3 = (int *)(*((int (**)(ObjectClass *, unsigned char *))this->ptr_0 + 6))(this, v12); /*0x5cb79f*/
  v8 = *v3; /*0x5cb7a4*/
  v9 = v3[1]; /*0x5cb7ab*/
  v10 = v3[2]; /*0x5cb7b6*/
  ptr_0 = (int (**)(ObjectClass *, unsigned char *))this->ptr_0; /*0x5cb7ba*/
  v5 = v3[3]; /*0x5cb7bc*/
  this->owningHouseIndex = a2; /*0x5cb7bf*/
  v11 = v5; /*0x5cb7c2*/
  v6 = ptr_0->nextArrayIndex(this, v12); /*0x5cb7cd*/
  if ( v8 != *v6 || v9 != v6[1] || v10 != v6[2] || v11 != v6[3] ) /*0x5cb7f9*/
    (*((void (**)(ObjectClass *, int *, DSurface *, int *, unsigned int, int))g_DSurface_Hidden->ptr_0 + 2))( /*0x5cb818*/
      g_DSurface_Hidden,
      &v8,
      DSurface_Alternate,
      &v8,
      0,
      1);
  result = *(int16_t *)(this->referenceCount + 6); /*0x5cb821*/
  if ( this->owningHouseIndex >= (unsigned int)result ) /*0x5cb827*/
    this->owningHouseIndex = --result; /*0x5cb82a*/
  return result; /*0x5cb82d*/
}
} // namespace gamemd
// 0x005CF830
int  ObjectClass::Network_Load() {
return (*((int (**)(ObjectClass *, char *))this->ptr_0 + 4))(this, &this); /*0x5cf83a*/
}
// 0x005D1C90
int ObjectClass::UI_Load_5D1C90(int a2) {
int *p_nextArrayIndex; // esi
int v4; // edi
int v5; // eax
int v6; // ecx
int v7; // edx
int result; // eax
int v9; // ecx
int v10; // ecx

p_nextArrayIndex = &this->nextArrayIndex; /*0x5d1c94*/
v4 = (*(int (**)(int *, unsigned int))(this->nextArrayIndex + 16))(&this->nextArrayIndex, &a3); /*0x5d1ca5*/
v5 = p_nextArrayIndex->ptr_8; /*0x5d1ca7*/
if ( p_nextArrayIndex[4] < v5 /*0x5d1cc9*/
    || (p_nextArrayIndex->u32_D || !v5)
    && (v6 = p_nextArrayIndex->abstractFlags, v6 > 0)
    && p_nextArrayIndex->COMStub_Release(v5 + v6, 0) )
{
    v7 = p_nextArrayIndex->uniqueId; /*0x5d1cd0*/
    if ( v4 < v7 - 1 ) /*0x5d1cd8*/
      memcpy( /*0x5d1cf7*/
        (void *)(p_nextArrayIndex[1] + 4 * v4 + 8),
        (const void *)(p_nextArrayIndex[1] + 4 * (v4 + 1)),
        4 * (v7 + 0x3FFFFFFF * (v4 + 1)));
    *(unsigned int *)(p_nextArrayIndex[1] + 4 * v4 + 4) = a2; /*0x5d1d07*/
    ++p_nextArrayIndex->uniqueId; /*0x5d1d0f*/
}
result = (int)a3; /*0x5d1d12*/
a2 = a3; /*0x5d1d18*/
if ( a3 ) /*0x5d1d1c*/
{
    result = p_nextArrayIndex->IsClean(&a2); /*0x5d1d27*/
    if ( result != -1 ) /*0x5d1d2d*/
    {
      result = p_nextArrayIndex->IsClean(&a2); /*0x5d1d38*/
      if ( result != -1 ) /*0x5d1d3e*/
      {
        v9 = p_nextArrayIndex->uniqueId; /*0x5d1d40*/
        if ( result < v9 ) /*0x5d1d45*/
        {
          v10 = v9 - 1; /*0x5d1d47*/
          for ( p_nextArrayIndex->uniqueId = v10; /*0x5d1d4d*/
          result < p_nextArrayIndex->uniqueId;
          *(unsigned int *)(p_nextArrayIndex[1] + 4 * result - 4) = *(unsigned int *)(p_nextArrayIndex[1] + 4 * result) )
          {
            ++result; /*0x5d1d52*/
          }
        }
      }
      if ( a2 ) /*0x5d1d67*/
        return (**a2)(a2, 1); /*0x5d1d6d*/
    }
}
return result; /*0x5d1d6f*/
}
// 0x005D6D80
char ObjectClass::ComputeMultiEngineerAdjustment() {
int v1; // ebp
int v2; // edx
HouseClass *v3; // eax
int v4; // ebx
int v5; // edi
int v6; // eax
RulesClass *v7; // ebp
int v8; // ecx
int v9; // esi
int v10; // eax
unsigned int *v11; // edx
int v12; // eax
int i; // esi
int v14; // ecx
int v15; // ebx
int v16; // esi
int v17; // edi
int ptr_0; // edx
int v20; // [esp+10h] [ebp-Ch] BYREF
int v21; // [esp+14h] [ebp-8h]
TechnoClass *v22; // [esp+18h] [ebp-4h]

v1 = 0; /*0x5d6d8a*/
v22 = this; /*0x5d6d90*/
if ( *(int *)&g_Rules_MultiEngineer > 0 ) /*0x5d6d94*/
{
    v2 = dword_A80238; /*0x5d6d9a*/
    v20 = 0; /*0x5d6da0*/
    if ( dword_A80238 > 0 ) /*0x5d6da6*/
    {
      v3 = dword_A8022C; /*0x5d6da8*/
      do /*0x5d6dd9*/
      {
        if ( !*(unsigned char *)(*(unsigned int *)(v3->ptr_0 + 52) + 422) ) /*0x5d6db5*/
          v20 |= 1 << *(unsigned int *)(*(unsigned int *)(v3->ptr_0 + 52) + 180); /*0x5d6dd1*/
        v3 = (HouseClass *)((char *)v3 + 4); /*0x5d6dd5*/
        --v2; /*0x5d6dd8*/
      }
      while ( v2 ); /*0x5d6dd9*/
    }
    v4 = 0; /*0x5d6de1*/
    v5 = 0; /*0x5d6de3*/
    v6 = 0; /*0x5d6de5*/
    v21 = 0; /*0x5d6de9*/
    if ( dword_A83CF0 > 0 ) /*0x5d6ded*/
    {
      v7 = dword_8871E0; /*0x5d6def*/
      do /*0x5d6e66*/
      {
        v8 = *((unsigned int *)dword_A83CE4 + v6); /*0x5d6dfb*/
        if ( *(unsigned char *)(v8 + 1749) && (*(unsigned int *)(v8 + 1740) & v20) != 0 && *(unsigned int *)(v8 + 1588) <= g_RulesInitConfig ) /*0x5d6e24*/
        {
          v9 = v7->AutocreateTime[1]; /*0x5d6e26*/
          v10 = 0; /*0x5d6e2c*/
          if ( v9 <= 0 ) /*0x5d6e30*/
          {
  LABEL_16:
            ++v5; /*0x5d6e44*/
    v12 = (*(int (**)(int))(*(unsigned int *)v8 + 172))(v8); /*0x5d6e47*/
    v7 = dword_8871E0; /*0x5d6e4d*/
    v4 += v12; /*0x5d6e53*/
          }
          else
          {
            v11 = (unsigned int *)v7->ReloadRate[0]; /*0x5d6e32*/
            while ( *v11 != v8 ) /*0x5d6e3a*/
            {
              ++v10; /*0x5d6e3c*/
              ++v11; /*0x5d6e3d*/
              if ( v10 >= v9 ) /*0x5d6e42*/
                goto LABEL_16; /*0x5d6e42*/
            }
          }
        }
        v6 = ++v21; /*0x5d6e5f*/
      }
      while ( v21 < dword_A83CF0 ); /*0x5d6e66*/
    }
    for ( i = 0; i < dword_A8E358; ++i ) /*0x5d6e71*/
    {
      v14 = *((unsigned int *)dword_A8E34C + i); /*0x5d6e79*/
      if ( *(unsigned char *)(v14 + 1749) /*0x5d6ea1*/
        && (*(unsigned int *)(v14 + 1740) & v20) != 0
        && *(unsigned int *)(v14 + 1588) <= g_RulesInitConfig )
      {
        ++v5; /*0x5d6ea5*/
        v4 += (*(int (**)(int))(*(unsigned int *)v14 + 172))(v14); /*0x5d6eac*/
      }
    }
    if ( !v5 ) /*0x5d6eba*/
      v5 = 1; /*0x5d6ebc*/
    v1 = *(unsigned int *)&g_Rules_MultiEngineer * ((v4 + v5 / 2) / v5); /*0x5d6ecf*/
}
v15 = 0; /*0x5d6edb*/
if ( dword_A80238 <= 0 ) /*0x5d6edf*/
{
  LABEL_42:
    Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 0xFFFF); /*0x5d6feb*/
    Debug::Log(); /*0x5d7009*/
    return 1; /*0x5d701a*/
}
while ( 1 ) /*0x5d6eea*/
{
    v16 = *(&dword_A8022C->ptr_0 + v15); /*0x5d6eea*/
    if ( *(unsigned char *)(*(unsigned int *)(v16 + 52) + 422) ) /*0x5d6ef0*/
      goto LABEL_41; /*0x5d6ef0*/
    if ( v16 ) /*0x5d6f00*/
    {
      v17 = 0; /*0x5d6f07*/
      if ( dword_A8DA84 > 0 ) /*0x5d6f0b*/
      {
        while ( !(uint8_t)House::IsCurrentPlayer((House *)v16) /*0x5d6f33*/
             || wcscmp((const wchar_t *)(v16 + 90154), (const wchar_t *)dword_A8DA78[v17]) )
        {
          if ( ++v17 >= dword_A8DA84 ) /*0x5d6f3d*/
            goto LABEL_36; /*0x5d6f3d*/
        }
        if ( *(unsigned int *)(dword_A8DA78[v17] + 107) == -1 ) /*0x5d6f53*/
          goto LABEL_41; /*0x5d6f53*/
      }
    }
    LABEL_36:
    ptr_0 = v22->ptr_0; /*0x5d6f63*/
      v20 = v1; /*0x5d6f65*/
      if ( !(*(uint8_t (**)(TechnoClass *, int, int *))(ptr_0 + 200))(v22, v16, &v20) /*0x5d6f83*/
      || !(*(uint8_t (**)(TechnoClass *, int, int *))(v22->ptr_0 + 204))(v22, v16, &v20) )
    {
      return 0; /*0x5d7013*/
    }
      if ( v20 > 0 ) /*0x5d6f97*/
        HouseClass::AddPower((HouseClass *)v16, v20); /*0x5d6f9c*/
      (*(void (**)(int))(*(unsigned int *)(v16 + 21920) + 12))(v16 + 21920); /*0x5d6fad*/
      (*(void (**)(int))(*(unsigned int *)(v16 + 21980) + 12))(v16 + 21980); /*0x5d6fbc*/
      (*(void (**)(int))(*(unsigned int *)(v16 + 21960) + 12))(v16 + 21960); /*0x5d6fcb*/
      (*(void (**)(int))(*(unsigned int *)(v16 + 21940) + 12))(v16 + 21940); /*0x5d6fda*/
    LABEL_41:
    if ( ++v15 >= dword_A80238 ) /*0x5d6fe5*/
      goto LABEL_42; /*0x5d6fe5*/
}
}
// 0x005D9360
void ObjectClass::SmallFunc_5D9360() {
RawFileClass v2; // [esp+4h] [ebp-24h] BYREF

RawFileClass::Construct(&v2, (int)&stru_8263E0.MaxFDelta); /*0x5d936f*/
INIClass::SetInt( /*0x5d9388*/
    &CCINIClass_INI_RA2MD,
    (uint8_t *)&stru_8263E0.Loop,
    g_INI_Key_FirewallSettings,
    (int)this->ptr_0,
    0);
INIClass::SetInt( /*0x5d93a2*/
    &CCINIClass_INI_RA2MD,
    (uint8_t *)&stru_8263E0.Loop,
    g_INI_Key_FirewallDelta,
    (int)this->ptr_8,
    0);
INIClass::WriteDigest((INIClass *)&CCINIClass_INI_RA2MD, (int)&v2, 0); /*0x5d93b3*/
RawFileClass::Dtor(&v2); /*0x5d93bc*/
}
// 0x005DB600
int ObjectClass::PlayerSkirmishSlotHandler_Handle_5DB600() {
memset(&Network_EventType, 0, 0x1C4u); /*0x5db611*/
g_abs_A8D7FC = 0; /*0x5db618*/
g_abs_A8D7FE = 0; /*0x5db627*/
*(unsigned int *)&Network_EventType = 8; /*0x5db62d*/
*(unsigned int *)&DataGlobal_A8D667 = 4; /*0x5db637*/
return Network::SendMessage( /*0x5db646*/
           &unk_A8E9C0.Socket,
           (int)&Network_EventType,
           455,
           1,
           (int)&this->owningHouseIndex,
           0,
           0);
}
// 0x005DBEC0
int ObjectClass::SendMultiplayerStartSignal_Start() {
char *v1; // ebx
char *v2; // eax
int v4; // edi
int v5; // esi
char *v6; // eax

v1 = this; /*0x5dbec1*/
if ( !this ) /*0x5dbec7*/
  v1 = unk_A8B380; /*0x5dbec9*/
v2 = CharToWideString(v1); /*0x5dbed5*/
if ( !wcscmp((const wchar_t *)v2, word_A8D610) ) /*0x5dbedb*/
  return 1; /*0x5dbee9*/
v4 = -1; /*0x5dbef5*/
v5 = 0; /*0x5dbef8*/
if ( dword_A8DA84 <= 0 ) /*0x5dbefc*/
  return -1; /*0x5dbefc*/
do /*0x5dbf23*/
{
    v6 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v5)); /*0x5dbf07*/
    if ( !_strcmpi(v6, v1) ) /*0x5dbf0d*/
      v4 = v5; /*0x5dbf19*/
    ++v5; /*0x5dbf20*/
}
while ( v5 < dword_A8DA84 ); /*0x5dbf23*/
if ( v4 == -1 ) /*0x5dbf28*/
  return -1; /*0x5dbf3c*/
else
  return *(unsigned int *)(*(unsigned int *)(dword_A8DA78 + 4 * v4) + 119); /*0x5dbf36*/
}
// 0x005E23D0
char ObjectClass::Network_Check(int a2) {
int uniqueId; // edx
int v3; // eax
int v4; // edx

uniqueId = this->uniqueId; /*0x5e23d0*/
v3 = a2; /*0x5e23d3*/
if ( a2 >= uniqueId ) /*0x5e23d9*/
  return 0; /*0x5e23fc*/
v4 = uniqueId - 1; /*0x5e23db*/
this->uniqueId = v4; /*0x5e23de*/
if ( a2 < v4 ) /*0x5e23e1*/
{
    do /*0x5e23f4*/
    {
      ++v3; /*0x5e23e7*/
      *((unsigned int *)this->ptr_4 + v3 - 1) = *((unsigned int *)this->ptr_4 + v3); /*0x5e23eb*/
    }
    while ( v3 < this->uniqueId ); /*0x5e23f4*/
}
return 1; /*0x5e23f9*/
}
// 0x005EAAD0
int ObjectClass::RefreshLobbyAll_Helper_5EAAD0() {
if ( !this ) /*0x5eaad4*/
  return 1746; /*0x5eaad6*/
if ( this == 1 ) /*0x5eaadf*/
  return 1747; /*0x5eaae1*/
if ( this == 2 ) /*0x5eaaea*/
  return 1748; /*0x5eaaec*/
if ( this == 3 ) /*0x5eaaf5*/
  return 1749; /*0x5eaaf7*/
if ( this == 4 ) /*0x5eab00*/
  return 1750; /*0x5eab02*/
if ( this == 5 ) /*0x5eab0b*/
  return 1751; /*0x5eab0d*/
if ( this == 6 ) /*0x5eab16*/
  return 1752; /*0x5eab18*/
return this != 7 ? -1 : 1753;
}
// 0x005EAB30
int ObjectClass::RefreshLobbyAll_Play_5EAB30() {
int *v2; // ebx
wchar_t *v3; // ecx
int PlayerColor; // eax
int result; // eax
char Buffer[4]; // [esp+10h] [ebp-4h] BYREF

v2 = g_abs_A8B2BC; /*0x5eab37*/
*this = 0; /*0x5eab3c*/
do /*0x5eabeb*/
{
    v3 = (wchar_t *)v2[2549]; /*0x5eab40*/
    if ( v3 /*0x5eab60*/
      && (v3 == (wchar_t *)g_Lobby_PlayerTeam
       || v3 == (wchar_t *)g_Lobby_PlayerSide
       || v3 == (wchar_t *)g_Lobby_PlayerColor) )
    {
      PlayerColor = *v2; /*0x5eab62*/
    }
    else if ( v3 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x5eab6c*/
    {
      PlayerColor = -2; /*0x5eab6e*/
    }
    else if ( v3 == (wchar_t *)g_Lobby_PlayerCount ) /*0x5eab7b*/
    {
      PlayerColor = -2; /*0x5eab7d*/
    }
    else if ( v3 == g_Lobby_PlayerReady ) /*0x5eab8a*/
    {
      PlayerColor = -2; /*0x5eab8c*/
    }
    else
    {
      PlayerColor = -2; /*0x5eab9a*/
      if ( v3 != (wchar_t *)g_Lobby_MaxPlayers ) /*0x5eab9f*/
        PlayerColor = SessionClass::GetPlayerColor((int)v3); /*0x5eaba1*/
    }
    sprintf(Buffer, "%d,", PlayerColor); /*0x5eabb1*/
    result = 0; /*0x5eabbd*/
    ++v2; /*0x5eabc8*/
    strcat(this, Buffer); /*0x5eabdc*/
}
while ( (int)v2 < (int)g_abs_A8B2DC ); /*0x5eabeb*/
return result; /*0x5eabf1*/
}
// 0x005EAC00
int ObjectClass::RefreshLobbyAll_Get_5EAC00() {
int *v2; // ebx
wchar_t *v3; // ecx
int Option; // eax
int result; // eax
char Buffer[4]; // [esp+10h] [ebp-4h] BYREF

v2 = g_abs_A8B2DC; /*0x5eac07*/
*this = 0; /*0x5eac0c*/
do /*0x5eacbb*/
{
    v3 = v2->u32_27B4; /*0x5eac10*/
    if ( v3 /*0x5eac30*/
      && (v3 == (wchar_t *)g_Lobby_PlayerTeam
       || v3 == (wchar_t *)g_Lobby_PlayerSide
       || v3 == (wchar_t *)g_Lobby_PlayerColor) )
    {
      Option = *v2; /*0x5eac32*/
    }
    else if ( v3 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x5eac3c*/
    {
      Option = -2; /*0x5eac3e*/
    }
    else if ( v3 == (wchar_t *)g_Lobby_PlayerCount ) /*0x5eac4b*/
    {
      Option = -2; /*0x5eac4d*/
    }
    else if ( v3 == g_Lobby_PlayerReady ) /*0x5eac5a*/
    {
      Option = -2; /*0x5eac5c*/
    }
    else
    {
      Option = -2; /*0x5eac6a*/
      if ( v3 != (wchar_t *)g_Lobby_MaxPlayers ) /*0x5eac6f*/
        Option = SessionClass::GetOption((int)v3); /*0x5eac71*/
    }
    sprintf(Buffer, "%d,", Option); /*0x5eac81*/
    result = 0; /*0x5eac8d*/
    ++v2; /*0x5eac98*/
    strcat(this, Buffer); /*0x5eacac*/
}
while ( (int)v2 < (int)g_abs_A8B2FC ); /*0x5eacbb*/
return result; /*0x5eacc1*/
}
} // namespace gamemd
// 0x005EACD0
int ObjectClass::RefreshLobbyAll_Get_5EACD0() {
int *v2; // ebx
wchar_t *v3; // ecx
int Option2; // eax
int result; // eax
char Buffer[4]; // [esp+10h] [ebp-4h] BYREF

v2 = g_abs_A8B2FC; /*0x5eacd7*/
*this = 0; /*0x5eacdc*/
do /*0x5ead8b*/
{
    v3 = v2->u32_2794; /*0x5eace0*/
    if ( v3 /*0x5ead00*/
      && (v3 == (wchar_t *)g_Lobby_PlayerTeam
       || v3 == (wchar_t *)g_Lobby_PlayerSide
       || v3 == (wchar_t *)g_Lobby_PlayerColor) )
    {
      Option2 = *v2; /*0x5ead02*/
    }
    else if ( v3 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x5ead0c*/
    {
      Option2 = -2; /*0x5ead0e*/
    }
    else if ( v3 == (wchar_t *)g_Lobby_PlayerCount ) /*0x5ead1b*/
    {
      Option2 = -2; /*0x5ead1d*/
    }
    else if ( v3 == g_Lobby_PlayerReady ) /*0x5ead2a*/
    {
      Option2 = -2; /*0x5ead2c*/
    }
    else
    {
      Option2 = -2; /*0x5ead3a*/
      if ( v3 != (wchar_t *)g_Lobby_MaxPlayers ) /*0x5ead3f*/
        Option2 = SessionClass::GetOption2((int)v3); /*0x5ead41*/
    }
    sprintf(Buffer, "%d,", Option2); /*0x5ead51*/
    result = 0; /*0x5ead5d*/
    ++v2; /*0x5ead68*/
    strcat(this, Buffer); /*0x5ead7c*/
}
while ( (int)v2 < (int)&byte_A8B31C ); /*0x5ead8b*/
return result; /*0x5ead91*/
}
// 0x005EADA0
char  ObjectClass::RefreshLobbyAll_Get_5EADA0() {
ObjectClass *v2; // edi
int *v3; // esi
int ResourceID3CSF; // eax
int *v5; // ecx
int v6; // ebx
int Option; // eax
int result; // eax

v2 = 0; /*0x5eada6*/
v3 = (int *)&g_CampaignSideIndex; /*0x5eada8*/
do /*0x5eae30*/
{
    ResourceID3CSF = GetResourceID3CSF(v2); /*0x5eadaf*/
    v5 = v3->u32_27B4; /*0x5eadb4*/
    v6 = ResourceID3CSF; /*0x5eadba*/
    if ( v5 && (v5 == (int *)g_Lobby_PlayerTeam || v5 == (int *)g_Lobby_PlayerSide || v5 == (int *)g_Lobby_PlayerColor) ) /*0x5eadd6*/
    {
      Option = *v3; /*0x5eadd8*/
    }
    else if ( v5 == (int *)g_HouseClass_ObserverFlags ) /*0x5eade2*/
    {
      Option = -2; /*0x5eade4*/
    }
    else if ( v5 == (int *)g_Lobby_PlayerCount ) /*0x5eadf1*/
    {
      Option = -2; /*0x5eadf3*/
    }
    else if ( v5 == (int *)g_Lobby_PlayerReady ) /*0x5eae00*/
    {
      Option = -2; /*0x5eae02*/
    }
    else
    {
      Option = -2; /*0x5eae10*/
      if ( v5 != (int *)g_Lobby_MaxPlayers ) /*0x5eae15*/
        Option = SessionClass::GetOption(v5); /*0x5eae17*/
    }
    result = SetupLobbyFactionSlots((HWND)this, v6, Option); /*0x5eae21*/
    ++v3; /*0x5eae26*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x5eae29*/
}
while ( (int)v3 < (int)&g_CampaignFactionSlot ); /*0x5eae30*/
return result; /*0x5eae36*/
}
// 0x005EAE40
char  ObjectClass::RefreshLobbyAll_Setup() {
ObjectClass *v2; // edi
int *v3; // esi
int ResourceID4CSF; // eax
SessionClass *v5; // ecx
int v6; // ebx
int Option2; // eax
int result; // eax

v2 = 0; /*0x5eae46*/
v3 = (int *)&g_CampaignFactionSlot; /*0x5eae48*/
do /*0x5eaed0*/
{
    ResourceID4CSF = GetResourceID4CSF(v2); /*0x5eae4f*/
    v5 = v3->u32_2794; /*0x5eae54*/
    v6 = ResourceID4CSF; /*0x5eae5a*/
    if ( v5 /*0x5eae76*/
      && (v5 == (SessionClass *)g_Lobby_PlayerTeam
       || v5 == (SessionClass *)g_Lobby_PlayerSide
       || v5 == (SessionClass *)g_Lobby_PlayerColor) )
    {
      Option2 = *v3; /*0x5eae78*/
    }
    else if ( v5 == (SessionClass *)g_HouseClass_ObserverFlags ) /*0x5eae82*/
    {
      Option2 = -2; /*0x5eae84*/
    }
    else if ( v5 == (SessionClass *)g_Lobby_PlayerCount ) /*0x5eae91*/
    {
      Option2 = -2; /*0x5eae93*/
    }
    else if ( v5 == (SessionClass *)g_Lobby_PlayerReady ) /*0x5eaea0*/
    {
      Option2 = -2; /*0x5eaea2*/
    }
    else
    {
      Option2 = -2; /*0x5eaeb0*/
      if ( v5 != (SessionClass *)g_Lobby_MaxPlayers ) /*0x5eaeb5*/
        Option2 = SessionClass::GetOption2(v5); /*0x5eaeb7*/
    }
    result = SetupLobbyPlayerSlots((HWND)this, v6, Option2); /*0x5eaec1*/
    ++v3; /*0x5eaec6*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x5eaec9*/
}
while ( (int)v3 < (int)&byte_A8B31C ); /*0x5eaed0*/
return result; /*0x5eaed6*/
}
// 0x005EAEE0
char ObjectClass::RefreshLobbyAll_Play_5EAEE0() {
const wchar_t *result; // eax
int v2; // ebp
int v3; // edi
const wchar_t **v4; // esi
const wchar_t *v5; // ebx
int v6; // esi
int ResourceIDCSF; // eax
SessionClass *v8; // ecx
int v9; // edi
int PlayerColor; // eax
ObjectClass *v11; // edi
int *v12; // esi
int v13; // eax
SessionClass *v14; // ecx
int v15; // ebx
int v16; // eax

result = (const wchar_t *)dword_A8DA84; /*0x5eaee1*/
if ( dword_A8DA84 ) /*0x5eaef0*/
{
    v3 = 0; /*0x5eaeff*/
    v4 = (const wchar_t **)dword_A8DA90; /*0x5eaf01*/
    v5 = (const wchar_t *)*dword_A8DA78; /*0x5eaf06*/
    while ( 1 ) /*0x5eaf08*/
    {
      result = *v4; /*0x5eaf08*/
      if ( *v4 ) /*0x5eaf08*/
      {
        result = (const wchar_t *)_wcsicmp(v5, *v4); /*0x5eaf10*/
        if ( !result ) /*0x5eaf1a*/
          break; /*0x5eaf1a*/
      }
      ++v4; /*0x5eaf1c*/
      ++v3; /*0x5eaf1f*/
      if ( (int)v4 >= (int)&dword_A8DAB0 ) /*0x5eaf26*/
      {
        v6 = -1; /*0x5eaf28*/
        goto LABEL_8; /*0x5eaf28*/
      }
    }
    v6 = v3; /*0x5eaf6b*/
    LABEL_8:
    v2 = v6; /*0x5eaf2b*/
      if ( v6 != -1 ) /*0x5eaf30*/
    {
      ResourceIDCSF = GetResourceIDCSF((ObjectClass *)v6); /*0x5eaf38*/
      v8 = (SessionClass *)dword_A8DA90[v6]; /*0x5eaf3d*/
      v9 = ResourceIDCSF; /*0x5eaf44*/
      if ( v8 /*0x5eaf60*/
        && (v8 == (SessionClass *)g_Lobby_PlayerTeam
         || v8 == (SessionClass *)g_Lobby_PlayerSide
         || v8 == (SessionClass *)g_Lobby_PlayerColor) )
      {
        PlayerColor = *(unsigned int *)&stru_A8B250.__pad_0[4 * v6 + 108]; /*0x5eaf62*/
      }
      else if ( v8 == (SessionClass *)g_HouseClass_ObserverFlags ) /*0x5eaf75*/
      {
        PlayerColor = -2; /*0x5eaf77*/
      }
      else if ( v8 == (SessionClass *)g_Lobby_PlayerCount ) /*0x5eaf84*/
      {
        PlayerColor = -2; /*0x5eaf86*/
      }
      else if ( v8 == (SessionClass *)g_Lobby_PlayerReady ) /*0x5eaf93*/
      {
        PlayerColor = -2; /*0x5eaf95*/
      }
      else
      {
        PlayerColor = -2; /*0x5eafa3*/
        if ( v8 != (SessionClass *)g_Lobby_MaxPlayers ) /*0x5eafa8*/
          PlayerColor = SessionClass::GetPlayerColor(v8); /*0x5eafaa*/
      }
      result = (const wchar_t *)SetupSkirmishSpawnLocations((HWND)this, v9, PlayerColor); /*0x5eafb6*/
    }
}
else
{
    v2 = -1; /*0x5eaef2*/
}
v11 = 0; /*0x5eafbb*/
v12 = (int *)&g_CampaignConfig; /*0x5eafbd*/
do /*0x5eb04b*/
{
    if ( v11 != (ObjectClass *)v2 ) /*0x5eafc4*/
    {
      v13 = GetResourceIDCSF(v11); /*0x5eafc8*/
      v14 = (SessionClass *)v12[2549]; /*0x5eafcd*/
      v15 = v13; /*0x5eafd3*/
      if ( v14 /*0x5eafef*/
        && (v14 == (SessionClass *)g_Lobby_PlayerTeam
         || v14 == (SessionClass *)g_Lobby_PlayerSide
         || v14 == (SessionClass *)g_Lobby_PlayerColor) )
      {
        v16 = *v12; /*0x5eaff1*/
      }
      else if ( v14 == (SessionClass *)g_HouseClass_ObserverFlags ) /*0x5eaffb*/
      {
        v16 = -2; /*0x5eaffd*/
      }
      else if ( v14 == (SessionClass *)g_Lobby_PlayerCount ) /*0x5eb00a*/
      {
        v16 = -2; /*0x5eb00c*/
      }
      else if ( v14 == (SessionClass *)g_Lobby_PlayerReady ) /*0x5eb019*/
      {
        v16 = -2; /*0x5eb01b*/
      }
      else
      {
        v16 = -2; /*0x5eb029*/
        if ( v14 != (SessionClass *)g_Lobby_MaxPlayers ) /*0x5eb02e*/
          v16 = SessionClass::GetPlayerColor(v14); /*0x5eb030*/
      }
      result = (const wchar_t *)SetupSkirmishSpawnLocations((HWND)this, v15, v16); /*0x5eb03c*/
    }
    ++v12; /*0x5eb041*/
    v11 = (ObjectClass *)((char *)v11 + 1); /*0x5eb044*/
}
while ( (int)v12 < (int)&g_CampaignSideIndex ); /*0x5eb04b*/
return result; /*0x5eb051*/
}
// 0x0060B420
int ObjectClass::UI_Get_60B420(HWND hWnd) {
HWND Parent; // esi
char GameSpeed; // bl
LONG right; // ecx
int v5; // esi
int v6; // ebp
ObjectClass **v7; // eax
int v8; // eax
int v9; // ecx
int v10; // eax
unsigned int *v11; // eax
ObjectClass *v13; // [esp+10h] [ebp-28h] BYREF
int v14; // [esp+14h] [ebp-24h]
struct tagRECT Rect; // [esp+18h] [ebp-20h] BYREF
struct tagRECT v16; // [esp+28h] [ebp-10h] BYREF

Parent = GetParent((HWND)hWnd); /*0x60b435*/
GameSpeed = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b43c*/
GetClientRect(Parent, &Rect); /*0x60b444*/
GetWindowRect((HWND)hWnd, &v16); /*0x60b450*/
right = Rect.right; /*0x60b45a*/
v14 = 0; /*0x60b45e*/
if ( !GameSpeed )
  v14 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
v5 = v16.right - v16.left; /*0x60b499*/
v6 = v16.bottom - v16.top; /*0x60b49f*/
v13 = hWnd; /*0x60b4a1*/
if ( !*(unsigned int *)&g_DialogHashMap_Count ) /*0x60b4a7*/
  goto LABEL_8; /*0x60b4a7*/
v7 = *(ObjectClass ***)(*(unsigned int *)&g_DialogHashMap_Base /*0x60b4c8*/
+ 4
* ((*(int (**)(ObjectClass **))&g_DialogHashMap_Hasher)(&v13)
& ((1 << g_DialogHashMap_Buckets) - 1)));
if ( !v7 ) /*0x60b4cd*/
  goto LABEL_7; /*0x60b4cd*/
while ( *v7 != v13 ) /*0x60b4d5*/
{
    v7 = v7->q204; /*0x60b4d7*/
    if ( !v7 ) /*0x60b4df*/
      goto LABEL_7; /*0x60b4df*/
}
v11 = v7 + 1; /*0x60b514*/
if ( !v11 || (v8 = v11[55]) == 0 ) /*0x60b523*/
{
  LABEL_7:
    right = Rect.right; /*0x60b4e1*/
  LABEL_8:
    v8 = (168 - v5) / 2; /*0x60b4e5*/
    goto LABEL_9; /*0x60b4ef*/
}
right = Rect.right; /*0x60b525*/
LABEL_9:
  v9 = right - v8 - v5 - v14 - Rect.left; /*0x60b4f1*/
  if ( GameSpeed ) /*0x60b503*/
    v10 = *(unsigned int *)(*(unsigned int *)&DataGlobal_B0FC50 + 4); /*0x60b50b*/
  else
    v10 = *(unsigned int *)(*(unsigned int *)&DataGlobal_B0FC28 + 4); /*0x60b530*/
  return MoveWindow((HWND)hWnd, v9, v10 - v6, v5, v6, 0); /*0x60b542*/
}
// 0x0060B550
int ObjectClass::UI_Get_60B550(HWND hWnd) {
HWND Parent; // edi
char GameSpeed; // bl
int v4; // edi
int v5; // edx
struct tagRECT Rect; // [esp+10h] [ebp-20h] BYREF
struct tagRECT v8; // [esp+20h] [ebp-10h] BYREF

Parent = GetParent((HWND)hWnd); /*0x60b565*/
GameSpeed = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b56c*/
GetClientRect(Parent, &Rect); /*0x60b574*/
GetWindowRect((HWND)hWnd, &v8); /*0x60b580*/
v4 = 0; /*0x60b58a*/
if ( !GameSpeed )
  v4 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
v5 = 0; /*0x60b5ba*/
if ( !GameSpeed )
  v5 = (Rect.bottom - Rect.top - 600) / 2 < 0 ? 0 : (Rect.bottom - Rect.top - 600) / 2;
return MoveWindow( /*0x60b5fe*/
           (HWND)hWnd,
           v4 + Rect.left + 10,
           Rect.bottom - (v8.bottom - v8.top) - v5 - 1,
           v8.right - v8.left,
           v8.bottom - v8.top,
           0);
}
// 0x0060B610
int ObjectClass::UI_Get_60B610(HWND hWnd) {
HWND Parent; // esi
char GameSpeed; // bl
LONG right; // ecx
int v5; // esi
int v6; // ebp
ObjectClass **v7; // eax
int v8; // eax
int v9; // ecx
int v10; // edx
unsigned int *v12; // eax
ObjectClass *v13; // [esp+10h] [ebp-28h] BYREF
int v14; // [esp+14h] [ebp-24h]
struct tagRECT Rect; // [esp+18h] [ebp-20h] BYREF
struct tagRECT v16; // [esp+28h] [ebp-10h] BYREF

Parent = GetParent((HWND)hWnd); /*0x60b625*/
GameSpeed = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b62c*/
GetClientRect(Parent, &Rect); /*0x60b634*/
GetWindowRect((HWND)hWnd, &v16); /*0x60b640*/
right = Rect.right; /*0x60b64a*/
v14 = 0; /*0x60b64e*/
if ( !GameSpeed )
  v14 = (Rect.right - Rect.left - 800) / 2 < 0 ? 0 : (Rect.right - Rect.left - 800) / 2;
v5 = v16.right - v16.left; /*0x60b689*/
v6 = v16.bottom - v16.top; /*0x60b68f*/
hWnd = hWnd; /*0x60b691*/
if ( !*(unsigned int *)&g_DialogHashMap_Count ) /*0x60b697*/
  goto LABEL_8; /*0x60b697*/
v7 = *(ObjectClass ***)(*(unsigned int *)&g_DialogHashMap_Base /*0x60b6b8*/
+ 4
* ((*(int (**)(ObjectClass **))&g_DialogHashMap_Hasher)(&hWnd)
& ((1 << g_DialogHashMap_Buckets) - 1)));
if ( !v7 ) /*0x60b6bd*/
  goto LABEL_7; /*0x60b6bd*/
while ( *v7 != hWnd ) /*0x60b6c5*/
{
    v7 = v7->q204; /*0x60b6c7*/
    if ( !v7 ) /*0x60b6cf*/
      goto LABEL_7; /*0x60b6cf*/
}
v12 = v7 + 1; /*0x60b724*/
if ( !v12 || (v8 = v12[55]) == 0 ) /*0x60b733*/
{
  LABEL_7:
    right = Rect.right; /*0x60b6d1*/
  LABEL_8:
    v8 = (168 - v5) / 2; /*0x60b6d5*/
    goto LABEL_9; /*0x60b6df*/
}
right = Rect.right; /*0x60b735*/
LABEL_9:
  v9 = right - v8 - v5 - v14 - Rect.left; /*0x60b6e1*/
  v10 = *(unsigned int *)&DataGlobal_B0FC50; /*0x60b6f1*/
  if ( !GameSpeed ) /*0x60b6f9*/
    v10 = *(unsigned int *)&DataGlobal_B0FC28; /*0x60b6fb*/
  return MoveWindow((HWND)hWnd, v9, v10->ptr_4 + v10->ptr_C - v6, v5, v6, 0); /*0x60b718*/
}
// 0x0060B7A0
char ObjectClass::UI_Get_60B7A0(HWND hWnd) {
HWND Parent; // edi
char result; // al
int v4; // eax
int v5; // esi
int v6; // eax
int v7; // ecx
int v8; // eax
int v9; // edx
int v10; // esi
struct tagRECT v11; // [esp+8h] [ebp-20h] BYREF
struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

Parent = GetParent((HWND)hWnd); /*0x60b7b3*/
result = SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238); /*0x60b7b5*/
if ( result )
{
    GetWindowRect((HWND)hWnd, &Rect); /*0x60b7cf*/
    GetWindowRect(Parent, &v11); /*0x60b7d7*/
    v4 = v11.right - v11.left; /*0x60b7e7*/
    v5 = 0; /*0x60b7e9*/
    if ( v11.right - v11.left <= 800 )
    {
      if ( v11.right - v11.left < 800 ) /*0x60b802*/
        v5 = (v4 - 800) / 2; /*0x60b80b*/
    }
    else
    {
      v5 = (v4 - 800) / 2 < 0 ? 0 : (v4 - 800) / 2;
    }
    v6 = v11.bottom - v11.top; /*0x60b81c*/
    v7 = 0; /*0x60b81e*/
    if ( v11.bottom - v11.top <= 600 ) /*0x60b822*/
    {
      if ( v11.bottom - v11.top < 600 ) /*0x60b833*/
        v7 = (v6 - 600) / 2; /*0x60b83c*/
    }
    else
    {
      v8 = (v6 - 600) / 2; /*0x60b829*/
      (*((unsigned char *)&(v7))) = v8 < 0; /*0x60b82b*/
      v7 = v8 & (v7 - 1); /*0x60b82f*/
    }
    v9 = Rect.left + v5; /*0x60b84a*/
    v10 = Rect.top + v7; /*0x60b84d*/
    if ( v9 < 0 ) /*0x60b85b*/
      v9 = 0; /*0x60b85d*/
    if ( v10 < 0 ) /*0x60b861*/
      v10 = 0; /*0x60b863*/
    return MoveWindow((HWND)hWnd, v9, v10, Rect.right - Rect.left, Rect.bottom - Rect.top, 0); /*0x60b86c*/
}
return result; /*0x60b873*/
}
// 0x0060C7D0
char ObjectClass::UI_Helper_60C7D0() {
ObjectClass **v1; // eax
unsigned int *v3; // ecx
ObjectClass *v4; // eax
ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

v5 = this; /*0x60c7d6*/
if ( !*(unsigned int *)&g_DialogHashMap_Count ) /*0x60c7dc*/
  return 0; /*0x60c7dc*/
v1 = *(ObjectClass ***)(*(unsigned int *)&g_DialogHashMap_Base /*0x60c7fd*/
+ 4
* ((*(int (**)(ObjectClass **))&g_DialogHashMap_Hasher)(&v5)
& ((1 << g_DialogHashMap_Buckets) - 1)));
if ( !v1 ) /*0x60c802*/
  return 0; /*0x60c802*/
while ( *v1 != v5 ) /*0x60c80a*/
{
    v1 = v1->q204; /*0x60c80c*/
    if ( !v1 ) /*0x60c814*/
      return 0; /*0x60c819*/
}
v3 = v1 + 1; /*0x60c81e*/
if ( v1 == (ObjectClass **)-4 ) /*0x60c823*/
  return 0; /*0x60c825*/
v4 = v1[28]; /*0x60c829*/
if ( v4 != 269 /*0x60c8b3*/
    && v4 != 217
    && v4 != 240
    && v4 != 206
    && v4 != 288
    && v4 != 289
    && v4 != 277
    && v4 != 211
    && v4 != 207
    && v4 != 287
    && v4 != 195
    && v4 != 283
    && v4 != 225
    && v4 != 286
    && v4 != 196
    && v4 != 304
    && v4 != 208
    && v4 != 252
    && v4 != 294 )
{
    return 0; /*0x60c8b5*/
}
v3[44] = 2; /*0x60c8bb*/
return 1; /*0x60c819*/
}
// 0x0060C930
char ObjectClass::UI_Helper_60C930() {
ObjectClass **v1; // eax
unsigned int *v3; // ecx
ObjectClass *v4; // eax
ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

v5 = this; /*0x60c936*/
if ( !*(unsigned int *)&g_DialogHashMap_Count ) /*0x60c93c*/
  return 0; /*0x60c93c*/
v1 = *(ObjectClass ***)(*(unsigned int *)&g_DialogHashMap_Base /*0x60c95d*/
+ 4
* ((*(int (**)(ObjectClass **))&g_DialogHashMap_Hasher)(&v5)
& ((1 << g_DialogHashMap_Buckets) - 1)));
if ( !v1 ) /*0x60c962*/
  return 0; /*0x60c962*/
while ( *v1 != v5 ) /*0x60c96a*/
{
    v1 = v1->q204; /*0x60c96c*/
    if ( !v1 ) /*0x60c974*/
      return 0; /*0x60c979*/
}
v3 = v1 + 1; /*0x60c97e*/
if ( v1 == (ObjectClass **)-4 ) /*0x60c983*/
  return 0; /*0x60c985*/
v4 = v1[28]; /*0x60c989*/
if ( v4 == 188 /*0x60c9b4*/
    || v4 == 189
    || v4 == 258
    || v4 == 194
    || v4 == 201
    || v4 == 3014 )
{
    *((unsigned char *)v3 + 214) = 1; /*0x60c9c5*/
    return 1; /*0x60c9c0*/
}
else
{
    *((unsigned char *)v3 + 214) = 0; /*0x60c9b8*/
    return 0; /*0x60c9b6*/
}
}
} // namespace gamemd
// 0x0060CAF0
char ObjectClass::UI_Helper_60CAF0() {
ObjectClass **v1; // eax
unsigned int *v3; // ecx
ObjectClass *v4; // eax
ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

v5 = this; /*0x60caf6*/
if ( !*(unsigned int *)&g_DialogHashMap_Count ) /*0x60cafc*/
  return 0; /*0x60cafc*/
v1 = *(ObjectClass ***)(*(unsigned int *)&g_DialogHashMap_Base /*0x60cb1d*/
+ 4
* ((*(int (**)(ObjectClass **))&g_DialogHashMap_Hasher)(&v5)
& ((1 << g_DialogHashMap_Buckets) - 1)));
if ( !v1 ) /*0x60cb22*/
  return 0; /*0x60cb22*/
while ( *v1 != v5 ) /*0x60cb2a*/
{
    v1 = v1->q204; /*0x60cb2c*/
    if ( !v1 ) /*0x60cb34*/
      return 0; /*0x60cb39*/
}
v3 = v1 + 1; /*0x60cb3e*/
if ( v1 == (ObjectClass **)-4 ) /*0x60cb43*/
  return 0; /*0x60cb45*/
v4 = v1[28]; /*0x60cb49*/
if ( v4 == 188 /*0x60cb87*/
    || v4 == 189
    || v4 == 258
    || v4 == 194
    || v4 == 201
    || v4 == 3014
    || v4 == 261
    || v4 == 107
    || v4 == 275 )
{
    *((unsigned char *)v3 + 213) = 1; /*0x60cb98*/
    return 1; /*0x60cb93*/
}
else
{
    *((unsigned char *)v3 + 213) = 0; /*0x60cb8b*/
    return 0; /*0x60cb89*/
}
}
// 0x0060CCC0
char ObjectClass::UI_Helper_60CCC0() {
ObjectClass **v1; // eax
unsigned int *v3; // ecx
ObjectClass *v4; // eax
ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

v5 = this; /*0x60ccc6*/
if ( !*(unsigned int *)&g_DialogHashMap_Count ) /*0x60cccc*/
  return 0; /*0x60cccc*/
v1 = *(ObjectClass ***)(*(unsigned int *)&g_DialogHashMap_Base /*0x60cced*/
+ 4
* ((*(int (**)(ObjectClass **))&g_DialogHashMap_Hasher)(&v5)
& ((1 << g_DialogHashMap_Buckets) - 1)));
if ( !v1 ) /*0x60ccf2*/
  return 0; /*0x60ccf2*/
while ( *v1 != v5 ) /*0x60ccfa*/
{
    v1 = v1->q204; /*0x60ccfc*/
    if ( !v1 ) /*0x60cd04*/
      return 0; /*0x60cd09*/
}
v3 = v1 + 1; /*0x60cd0e*/
if ( v1 == (ObjectClass **)-4 ) /*0x60cd13*/
  return 0; /*0x60cd15*/
v4 = v1[28]; /*0x60cd19*/
if ( v4 == 259 || v4 == 3015 ) /*0x60cd28*/
{
    *((unsigned char *)v3 + 215) = 1; /*0x60cd39*/
    return 1; /*0x60cd34*/
}
else
{
    *((unsigned char *)v3 + 215) = 0; /*0x60cd2c*/
    return 0; /*0x60cd2a*/
}
}
// 0x0060CDB0
char ObjectClass::UI_Helper_60CDB0() {
ObjectClass **v1; // eax
unsigned int *v3; // ecx
ObjectClass *v4; // eax
ObjectClass *v5; // [esp+0h] [ebp-4h] BYREF

v5 = this; /*0x60cdb6*/
if ( !*(unsigned int *)&g_DialogHashMap_Count ) /*0x60cdbc*/
  return 0; /*0x60cdbc*/
v1 = *(ObjectClass ***)(*(unsigned int *)&g_DialogHashMap_Base /*0x60cddd*/
+ 4
* ((*(int (**)(ObjectClass **))&g_DialogHashMap_Hasher)(&v5)
& ((1 << g_DialogHashMap_Buckets) - 1)));
if ( !v1 ) /*0x60cde2*/
  return 0; /*0x60cde2*/
while ( *v1 != v5 ) /*0x60cdea*/
{
    v1 = v1->q204; /*0x60cdec*/
    if ( !v1 ) /*0x60cdf4*/
      return 0; /*0x60cdf9*/
}
v3 = v1 + 1; /*0x60cdfe*/
if ( v1 == (ObjectClass **)-4 ) /*0x60ce03*/
  return 0; /*0x60ce05*/
v4 = v1[28]; /*0x60ce09*/
if ( v4 == 264 || v4 == 3014 ) /*0x60ce18*/
{
    *((unsigned char *)v3 + 216) = 1; /*0x60ce29*/
    return 1; /*0x60ce24*/
}
else
{
    *((unsigned char *)v3 + 216) = 0; /*0x60ce1c*/
    return 0; /*0x60ce1a*/
}
}
// 0x00623E00
int ObjectClass::Memory_Pop(HWND hWnd) {
LRESULT v2; // eax
WPARAM v3; // esi

v2 = SendMessageA((HWND)hWnd, 0x18Bu, 0, 0); /*0x623e15*/
v3 = v2 - 1; /*0x623e19*/
if ( v2 ) /*0x623e1c*/
{
    do /*0x623e2e*/
    SendMessageA((HWND)hWnd, 0x182u, v3, 0); /*0x623e27*/
    while ( v3-- ); /*0x623e2e*/
}
return 0; /*0x623e30*/
}
// 0x006316E0
bool ObjectClass::UI_Pop_631500_Pop(int a2) {

  HWND Dialog; // eax
  TechnoTypeClass *v5; // ecx
  int v6; // [esp+0h] [ebp-8h]

  if ( !a2 ) /*0x6316ea*/
    return 0; /*0x6316ed*/
  Dialog = (HWND)CreateDialog(0xEFu, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))NetworkSettingsDlgProc, 0); /*0x6316ff*/
  dwNewLong->ptr_0 = (int)Dialog; /*0x631706*/
  if ( Dialog ) /*0x631708*/
  {
    dwNewLong->ptr_2 = a2; /*0x63170e*/
    dwNewLong->ptr_1 = -1; /*0x631711*/
    SetWindowLongA(Dialog, 8, (LONG)dwNewLong); /*0x631718*/
    ((ObjectClass *)dwNewLong)->UI_Pop_631500_Pop_Pop(); /*0x631720*/
    Dialog::Show((Dialog *)dwNewLong->ptr_0); /*0x631727*/
    while ( dwNewLong->ptr_4 < 0 ) /*0x631731*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x63173a*/
        break; /*0x63173a*/
      LOBYTE(v5) = 0; /*0x63173c*/
      ScreenSaver::Process(v5, v6); /*0x63173e*/
    }
    Dialog::Destroy((Dialog *)dwNewLong->ptr_0); /*0x63174c*/
  }
  return dwNewLong->ptr_1 == 1; /*0x6316ec*/

}
// 0x00631B20
int ObjectClass::UI_Pop_631500_Pop_Pop() {
  HWND DlgItem; // eax
  HWND v3; // eax
  unsigned int *ptr_4; // esi
  HWND v5; // eax
  int result; // eax
  char v7; // [esp+13h] [ebp-1h]

  DlgItem = GetDlgItem((HWND)this->ptr_0, 1509); /*0x631b36*/
  SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)this->ptr_8 + 112); /*0x631b4d*/
  v3 = GetDlgItem((HWND)this->ptr_0, 1503); /*0x631b58*/
  SendMessageA(v3, 0x4B4u, 0, (LPARAM)this->ptr_8 + 154); /*0x631b6c*/
  ptr_4 = this->ptr_8; /*0x631b6e*/
  if ( !*ptr_4 || ptr_4->ptr_4 == -1 || ptr_4->ptr_8 == -1 ) /*0x631b83*/
  {
    v7 = 0; /*0x631ba3*/
    memcpy(&this->ptr_C, &dword_A8DAC0, 0x70u); /*0x631ba8*/
  }
  else
  {
    memcpy(&this->ptr_C, ptr_4, 0x70u); /*0x631b8d*/
    v7 = 1; /*0x631b8f*/
  }
  v5 = GetDlgItem((HWND)this->ptr_0, 1636); /*0x631bb9*/
  if ( v5 ) /*0x631bbd*/
    SendMessageA(v5, 0xF1u, v7 == 1, 0); /*0x631bd4*/
  result = (int)GetDlgItem((HWND)this->ptr_0, 1635); /*0x631bdf*/
  if ( result ) /*0x631be3*/
    return SendMessageA((HWND)result, 0xF1u, v7 == 0, 0); /*0x631bf9*/
  return result; /*0x631bfb*/
}
// 0x006342E0
int ObjectClass::Team_Helper_6342E0(TechnoClass * aP1, int a3) {

  unsigned char *v4; // esi

  v4 = *(unsigned char **)(*((unsigned int *)this->ptr_4 + a3) + 4); /*0x6342f7*/
  memcpy((void *)aP1, v4, 0x6Cu); /*0x6342fa*/
  v4 += 108; /*0x6342fa*/
  *(unsigned short *)(aP1 + 108) = *(unsigned short *)v4; /*0x6342fc*/
  *(unsigned char *)(aP1 + 110) = v4[2]; /*0x6342fe*/
  return aP1; /*0x6342ff*/

}
// 0x00634770
int ObjectClass::Render_Render() {
  int uniqueId; // esi
  int v2; // eax
  int **i; // ecx

  uniqueId = this->uniqueId; /*0x634772*/
  v2 = 0; /*0x634775*/
  if ( uniqueId <= 0 ) /*0x634779*/
    return 0; /*0x63478f*/
  for ( i = (int **)this->ptr_4; !*((unsigned char *)*i + 12); ++i ) /*0x63477b*/
  {
    if ( ++v2 >= uniqueId ) /*0x63478d*/
      return 0; /*0x63478d*/
  }
  return **i; /*0x63478f*/
}
// 0x00635490
int ObjectClass::Render_Render(int a2) {
  int *Viewport; // eax
  int v4; // edx
  void *ptr_0; // eax
  unsigned int *ScenarioClassActionCoords; // eax
  int v8[2]; // [esp+4h] [ebp-44h] BYREF
  unsigned int v9[3]; // [esp+Ch] [ebp-3Ch] BYREF
  int v10[4]; // [esp+18h] [ebp-30h] BYREF
  unsigned int v11[4]; // [esp+28h] [ebp-20h] BYREF
  unsigned int v12[4]; // [esp+38h] [ebp-10h] BYREF

  Viewport = Display::GetViewport(v10); /*0x63549a*/
  v12[0] = *Viewport; /*0x6354a1*/
  v12[1] = Viewport[1]; /*0x6354a8*/
  v12[2] = Viewport[2]; /*0x6354af*/
  v4 = Viewport[3]; /*0x6354b3*/
  ptr_0 = this->ptr_4; /*0x6354b6*/
  v12[3] = v4; /*0x6354b9*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v10, *(unsigned char **)(ptr_0->ptr_4); /*0x6354c6*/
  v9[0] = *ScenarioClassActionCoords; /*0x6354cd*/
  v9[1] = ScenarioClassActionCoords->ptr_4; /*0x6354d4*/
  v9[2] = ScenarioClassActionCoords->ptr_8; /*0x6354eb*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v9, v8); /*0x6354ef*/
  v8[0] += DSurface_ViewBounds.field_0; /*0x63550a*/
  v11[0] = v8[0] - 4 + 1; /*0x635520*/
  v11[1] = (char *)DSurface_ViewBounds.field_4 + v8[1] - 3; /*0x63552c*/
  v11[2] = 6; /*0x635541*/
  v11[3] = 6; /*0x635545*/
  return (*(int (**)(AudioStream *, unsigned int *, unsigned int *, int))(*(unsigned int *)DSurface_Composite->__pad_0 + 16))( /*0x635553*/
           DSurface_Composite,
           v12,
           v11,
           a2);
}
// 0x00636EB0
int ObjectClass::ExecuteActionPlanManager_Helper_636EB0() {
  int v1 = this->abstractFlags - 1; // eax /*0x636eb3*/
  if ( v1 >= 0 ) /*0x636eb4*/
    return *((unsigned int *)this->ptr_8 + v1); /*0x636ebc*/
  else
    return 0; /*0x636eb6*/
}
} // namespace gamemd
// 0x00637D00
char ObjectClass::UI_Delete_Delete() {
  unsigned char *v1; // esi
  BuildingLoadQueue *v2; // ecx
  unsigned int *Next; // eax
  unsigned char *WaypointCoords; // eax
  unsigned char v6[108]; // [esp-70h] [ebp-160h] BYREF
  int v7; // [esp-4h] [ebp-F4h]
  unsigned char v8[228]; // [esp+8h] [ebp-E8h] BYREF
  int16_t v9; // [esp+ECh] [ebp-4h]
  char v10; // [esp+EEh] [ebp-2h]

  v1 = *(unsigned char **)(*(unsigned int *)this->ptr_4 + 4); /*0x637d16*/
  memcpy(&v8[8], v1, 0x6Cu); /*0x637d19*/
  v1 += 108; /*0x637d19*/
  *(unsigned short *)&v8[116] = *(unsigned short *)v1; /*0x637d1b*/
  v8[118] = v1[2]; /*0x637d1d*/
  if ( v8[26] ) /*0x637d24*/
  {
    v2 = (BuildingLoadQueue *)&v8[22]; /*0x637d26*/
  }
  else if ( v8[36] ) /*0x637d32*/
  {
    v2 = (BuildingLoadQueue *)&v8[32]; /*0x637d34*/
  }
  else
  {
    (*((unsigned char *)&(Next))) = v8[31]; /*0x637d3a*/
    if ( !v8[31] ) /*0x637d40*/
      return (char)Next; /*0x637d40*/
    v2 = (BuildingLoadQueue *)&v8[27]; /*0x637d42*/
  }
  Next = BuildingLoadQueue::GetNext(v2); /*0x637d46*/
  if ( Next ) /*0x637d4d*/
  {
    WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v8, Next); /*0x637d54*/
    EventClass::Add(&v8[120], (int)dword_A83D4C->relatedTagsCount, 0x2Cu, *(unsigned int *)WaypointCoords, WaypointCoords->ptr_4); /*0x637d7b*/
    memcpy(v6, &v8[120], sizeof(v6)); /*0x637d91*/
    (*((unsigned short *)&(v7))) = v9; /*0x637d93*/
    (((unsigned char *)&(v7))[2]) = v10; /*0x637d95*/
    (*((unsigned char *)&(Next))) = Network::RecordEvent( /*0x637d96*/
                     *(int64_t *)v6,
                     *(int *)&v6[8],
                     *(int *)&v6[12],
                     *(int *)&v6[16],
                     *(int *)&v6[20],
                     *(int *)&v6[24],
                     *(int *)&v6[28],
                     *(int *)&v6[32],
                     *(int *)&v6[36],
                     *(int *)&v6[40],
                     *(int *)&v6[44],
                     *(int *)&v6[48],
                     *(int *)&v6[52],
                     *(int *)&v6[56],
                     *(int *)&v6[60],
                     *(int *)&v6[64],
                     *(int *)&v6[68],
                     *(int *)&v6[72],
                     *(int *)&v6[76],
                     *(int *)&v6[80],
                     *(int *)&v6[84],
                     *(int *)&v6[88],
                     *(int *)&v6[92],
                     *(int *)&v6[96],
                     *(int *)&v6[100],
                     *(int *)&v6[104],
                     v7);
  }
  return (char)Next; /*0x637d9b*/
}
// 0x00638C40
bool ObjectClass::ExecuteActionPlanManager_Helper_638C40(int a2, char a3) {
  if ( this != 1 && this != 11 ) /*0x638c48*/
    return 0; /*0x638c48*/
  if ( a3 == 11 ) /*0x638c50*/
    return 1; /*0x638c54*/
  return this == 11 && !a3; /*0x638c60*/
}
// 0x0063D0F0
int ObjectClass::Render_Render_63D0F0() {
  int result; // eax
  int v2; // edi
  int v3; // ecx
  ObjectClass ***i; // edx

  result = (g_abs_A83CDB >> g_BitMask_Red << g_BitShift_Blue) /*0x63d16d*/
  | (word_A83CDA >> g_BitMask_Blue << g_BitMask_Green)
  | (byte_A83CD9 >> g_BitShift_Green_0 << g_BitShift_Red);
  if ( this ) /*0x63d171*/
  {
    if ( *(unsigned int *)&g_ScriptActionPool ) /*0x63d1c0*/
    {
      v2 = *(unsigned int *)(*(unsigned int *)&g_ScriptActionPool + 16); /*0x63d1c2*/
      v3 = 0; /*0x63d1c5*/
      if ( v2 > 0 ) /*0x63d1c9*/
      {
        for ( i = *(ObjectClass ****)(*(unsigned int *)&g_ScriptActionPool + 4); **i != this; ++i ) /*0x63d1cb*/
        {
          if ( ++v3 >= v2 ) /*0x63d1df*/
            return result; /*0x63d1df*/
        }
        if ( v3 != -1 ) /*0x63d1ec*/
          return ((unsigned char)((stru_A80220.ptr_0) >> 16) >> g_BitMask_Red << g_BitShift_Blue) /*0x63d1ee*/
        | ((unsigned char)((stru_A80220.ptr_0) >> 8) >> g_BitMask_Blue << g_BitMask_Green)
        | ((unsigned char)(stru_A80220.ptr_0) >> g_BitShift_Green_0 << g_BitShift_Red);
      }
    }
    else if ( this->isSelected ) /*0x63d1fc*/
    {
           return ((unsigned char)((stru_A80220.ptr_0) >> 16) >> g_BitMask_Red << g_BitShift_Blue) /*0x63d206*/
           | ((unsigned char)((stru_A80220.ptr_0) >> 8) >> g_BitMask_Blue << g_BitMask_Green)
           | ((unsigned char)(stru_A80220.ptr_0) >> g_BitShift_Green_0 << g_BitShift_Red);
    }
  }
  return result; /*0x63d1e1*/
}
// 0x0063D480
int ObjectClass::DrawActionLineSegment(Tactical * aP1, ObjectClass * aP2) {
  int *Viewport; // eax
  int v6[4]; // [esp+8h] [ebp-30h] BYREF
  unsigned int v7[4]; // [esp+18h] [ebp-20h] BYREF
  unsigned int v8[4]; // [esp+28h] [ebp-10h] BYREF

  Viewport = Display::GetViewport(v6); /*0x63d48b*/
  v8[0] = *Viewport; /*0x63d492*/
  v8[1] = Viewport[1]; /*0x63d49a*/
  v8[2] = Viewport[2]; /*0x63d4a1*/
  v8[3] = Viewport[3]; /*0x63d4b0*/
  v6[0] = aP1; /*0x63d4b4*/
  v7[2] = 4; /*0x63d4cd*/
  v7[0] = aP1 - 3 + 1; /*0x63d4d1*/
  v7[1] = aP2 - 3 + 1; /*0x63d4e4*/
  v7[3] = 4; /*0x63d4e8*/
  return (*(int (**)(AudioStream *, unsigned int *, unsigned int *, ObjectClass *))(*(unsigned int *)DSurface_Composite->__pad_0 /*0x63d4f6*/
  + 16))(
           DSurface_Composite,
           v8,
           v7,
           this);
}
// 0x0063E5D0
char ObjectClass::Team_Destroy(int aP1) {
  int v3; // eax
  int uniqueId; // ecx
  int v5; // ecx

  v3 = (*((int (**)(ObjectClass *, int))this->ptr_0 + 4))(this, aP1); /*0x63e5dc*/
  if ( v3 == -1 ) /*0x63e5e2*/
    return 0; /*0x63e5e2*/
  uniqueId = this->uniqueId; /*0x63e5e4*/
  if ( v3 >= uniqueId ) /*0x63e5e9*/
    return 0; /*0x63e60b*/
  v5 = uniqueId - 1; /*0x63e5eb*/
  for ( this->uniqueId = v5; v3 < this->uniqueId; *((unsigned int *)this->ptr_4 + v3 - 1) = *((unsigned int *)this->ptr_4 + v3) ) /*0x63e5f1*/
    ++v3; /*0x63e5f6*/
  return 1; /*0x63e607*/
}
// 0x00645BB0
int ObjectClass::GetSuperWeaponTypeFlag() {
  int result; // eax

  switch ( (unsigned int)this ) /*0x645bb8*/
  {
    case 2u: /*0x645bb8*/
      result = 32; /*0x645bbf*/
      break; /*0x645bc4*/
    case 3u: /*0x645bb8*/
      result = 64; /*0x645bc5*/
      break; /*0x645bca*/
    case 4u: /*0x645bb8*/
      result = 8; /*0x645bcb*/
      break; /*0x645bd0*/
    case 5u: /*0x645bb8*/
      result = 16; /*0x645bd1*/
      break; /*0x645bd6*/
    case 6u: /*0x645bb8*/
      result = 4096; /*0x645bd7*/
      break; /*0x645bdc*/
    case 7u: /*0x645bb8*/
      result = 0x2000; /*0x645bdd*/
      break; /*0x645be2*/
    case 9u: /*0x645bb8*/
      result = 2048; /*0x645be3*/
      break; /*0x645be8*/
    case 0xAu: /*0x645bb8*/
      result = 0x8000; /*0x645be9*/
      break; /*0x645bee*/
    case 0xBu: /*0x645bb8*/
      result = 0x10000; /*0x645bef*/
      break; /*0x645bf4*/
    default:
      result = 0; /*0x645bf5*/
      break; /*0x645bf5*/
  }
  return result; /*0x645bc4*/
}
// 0x0064A7B0
int ObjectClass::RenderPlayerLatencyBars() {
  int result; // eax
  int v2; // ebx
  HWND DlgItem; // eax
  int v4; // edi
  int v5; // eax
  unsigned int v6; // ebp
  int v7; // esi
  DWORD v8; // edx
  int v9; // ecx
  int v10; // ebp
  signed int v11; // edi
  void (**DSurface_field_0x0)(DSurface *, int); // edi
  int v13; // eax
  void (**v14)(DSurface *, int); // edi
  int v15; // eax
  int i; // [esp+20h] [ebp-6Ch]
  int v17; // [esp+24h] [ebp-68h]
  LONG left; // [esp+2Ch] [ebp-60h]
  LONG top; // [esp+30h] [ebp-5Ch]
  int v21; // [esp+38h] [ebp-54h]
  unsigned int v22[4]; // [esp+3Ch] [ebp-50h] BYREF
  struct tagRECT Rect; // [esp+4Ch] [ebp-40h] BYREF
  unsigned int v24[4]; // [esp+5Ch] [ebp-30h] BYREF
  char v25[16]; // [esp+6Ch] [ebp-20h] BYREF
  char v26[16]; // [esp+7Ch] [ebp-10h] BYREF

  result = dword_A8DA84; /*0x64a7b3*/
  v2 = 0; /*0x64a7b9*/
  for ( i = 0; v2 < dword_A8DA84; i = v2 )
  {
    DlgItem = GetDlgItem((HWND)this, dword_837320[v2]); /*0x64a7df*/
    ScreenDialogToClient(DlgItem, &Rect); /*0x64a7e9*/
    v4 = Rect.right - Rect.left; /*0x64a7fc*/
    left = Rect.left; /*0x64a802*/
    v24[0] = Rect.left; /*0x64a806*/
    top = Rect.top; /*0x64a812*/
    v21 = Rect.bottom - Rect.top; /*0x64a816*/
    v24[1] = Rect.top; /*0x64a81a*/
    v24[2] = Rect.right - Rect.left; /*0x64a824*/
    v24[3] = Rect.bottom - Rect.top; /*0x64a828*/
    if ( *(unsigned int *)&dword_A8B238 == 1 || *(unsigned int *)&dword_A8B238 == 2 ) /*0x64a83a*/
    {
      v17 = 0; /*0x64a84d*/
      v5 = 0; /*0x64a855*/
    }
    else
    {
      v5 = IPXManagerClass::send(&unk_A8E9C0, *(unsigned int *)(dword_A8DA78[v2] + 111)); /*0x64a842*/
      v17 = v5; /*0x64a847*/
    }
    if ( v2 ) /*0x64a85b*/
      v6 = dword_AFA418 - dword_AFA284[6 * v5]; /*0x64a86a*/
    else
      v6 = 0; /*0x64a85d*/
    v7 = 200 >> g_BitMask_Blue << g_BitMask_Green; /*0x64a8ac*/
    if ( v6 > 0xF0 ) /*0x64a8b4*/
    {
      v7 = (200 >> g_BitMask_Blue << g_BitMask_Green) | (200 >> g_BitShift_Green_0 << g_BitShift_Red); /*0x64a8d1*/
      if ( v6 > 0x1E0 ) /*0x64a8d9*/
      {
        v7 = 200 >> g_BitShift_Green_0 << g_BitShift_Red; /*0x64a8f3*/
        v8 = (60 * timeGetTime() - 60 * dword_AFA28C[6 * v17]) / 0x3E8; /*0x64a924*/
        if ( v8 < 0x1A4 ) /*0x64a92d*/
        {
          v6 = v8; /*0x64a942*/
          v7 = 200 >> g_BitMask_Red << g_BitShift_Blue; /*0x64a948*/
        }
      }
      v2 = i; /*0x64a96e*/
    }
    v9 = 25 * v6; /*0x64a97b*/
    v10 = 6; /*0x64a97f*/
    v11 = ((int)(100 - 4 * v9 / 0x4B0u) <= 0 ? 0 : 100 - 4 * v9 / 0x4B0u) * v4;
    if ( v11 / 100 >= 6 ) /*0x64a9b4*/
      v10 = v11 / 100; /*0x64a9b6*/
    DSurface_field_0x0 = (void (**)(DSurface *, int))DSurface_Alternate->DSurface_field_0x0; /*0x64aa0b*/
    v13 = (*((int (**)(DSurface *, char *, unsigned int *, int))DSurface_Alternate->u32_78 + 30))( /*0x64aa1a*/
            DSurface_Alternate,
            v25,
            v24,
            (byte_A8EAE4 >> g_BitShift_Green_0 << g_BitShift_Red)
    | (word_A8EAE5 >> g_BitMask_Blue << g_BitMask_Green)
    | (g_abs_A8EAE6 >> g_BitMask_Red << g_BitShift_Blue));
    DSurface_field_0x0[21](DSurface_Alternate, v13); /*0x64aa24*/
    v22[2] = v10 - 4; /*0x64aa45*/
    v22[1] = top + 2; /*0x64aa55*/
    v22[3] = v21 - 4; /*0x64aa59*/
    v22[0] = left + 2; /*0x64aa61*/
    v14 = (void (**)(DSurface *, int))DSurface_Alternate->DSurface_field_0x0; /*0x64aa65*/
    v15 = (*((int (**)(DSurface *, char *, unsigned int *, unsigned int))DSurface_Alternate->u32_78 + 30))( /*0x64aa6e*/
            DSurface_Alternate,
            v26,
            v22,
            (uint16_t)v7);
    v14[4](DSurface_Alternate, v15); /*0x64aa78*/
    result = dword_A8DA84; /*0x64aa7b*/
    ++v2; /*0x64aa80*/
  }
  return result; /*0x64aa90*/
}
// 0x00652560
char ObjectClass::Network_Process(int a2) {
  int uniqueId; // edx
  int v3; // eax
  int v4; // edx

  uniqueId = this->uniqueId; /*0x652560*/
  v3 = a2; /*0x652563*/
  if ( a2 >= uniqueId ) /*0x652569*/
    return 0; /*0x65258c*/
  v4 = uniqueId - 1; /*0x65256b*/
  this->uniqueId = v4; /*0x65256e*/
  if ( a2 < v4 ) /*0x652571*/
  {
    do /*0x652584*/
    {
      ++v3; /*0x652577*/
      *((unsigned int *)this->ptr_4 + v3 - 1) = *((unsigned int *)this->ptr_4 + v3); /*0x65257b*/
    }
    while ( v3 < this->uniqueId ); /*0x652584*/
  }
  return 1; /*0x652589*/
}
// 0x00659510
int ObjectClass::SpreadRadiationAreaEffect_Helper(int v7, int a3) {
  this->ambientSoundController[3] = v7; /*0x659518*/
  this->ambientSoundController[4] = a3; /*0x65951b*/
  return v7; /*0x65951e*/
}
} // namespace gamemd
// 0x00659530
int ObjectClass::SpreadRadiationAreaEffect_Helper(int v7) {
  this->customSound_controller[0] = v7; /*0x659534*/
  return v7; /*0x659537*/
}
// 0x00659650
bool ObjectClass::RenderProjectileTrail() {

  double v1; // st7
  int owningHouseIndex; // ebp
  int *v4; // eax
  int ptr_4; // ecx
  int v7; // edx
  int *v8; // eax
  int v9; // edx
  int v10; // edi
  int *v11; // eax
  unsigned __int16 *v13; // eax
  int v14; // ecx
  int customSound; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int fallRate; // edx
  __int64 v22; // rax
  int v23; // ebp
  int v24; // edi
  int v25; // eax
  int v27; // eax
  int v28; // edi
  int v30; // edx
  int v31; // eax
  double v32; // [esp+8h] [ebp-40h]
  double v33; // [esp+8h] [ebp-40h]
  int v34; // [esp+20h] [ebp-28h]
  int v35; // [esp+20h] [ebp-28h]
  int v36; // [esp+20h] [ebp-28h]
  int v37[2]; // [esp+24h] [ebp-24h] BYREF
  int v38; // [esp+2Ch] [ebp-1Ch] BYREF
  int v39; // [esp+30h] [ebp-18h]
  int v40; // [esp+34h] [ebp-14h]
  int v41[4]; // [esp+38h] [ebp-10h] BYREF
  int savedregs; // [esp+48h] [ebp+0h] BYREF

  owningHouseIndex = (int)&savedregs; /*0x659651*/
  _ESI = this; /*0x65965c*/
  if ( !LOBYTE(this->ptr_8) ) /*0x65965f*/
  {
    LOBYTE(this->ptr_8) = 1; /*0x659666*/
    v4 = (/*0x65968c*/
           (Coord *)&v38)->Subtract(
           this->nextObject - this->occupant,
           this->attachedTag - this->owningHouseIndex,
           this->attachedBomb - this->fallRate);
    _ESI->customSound_controller[3] = *v4; /*0x659698*/
    _ESI->customSound_controller[4] = v4->q004; /*0x65969d*/
    _ESI->customSound = v4->q008; /*0x6596a3*/
    v34 = _ESI->customSound * _ESI->customSound /*0x6596c1*/
        + _ESI->customSound_controller[4] * _ESI->customSound_controller[4]
        + _ESI->customSound_controller[3] * _ESI->customSound_controller[3];
    __asm /*0x6596c5*/
    {
      fild [esp+40h+var_28]
      fstp [esp+40h+var_40]; double
    }
    Math::Sqrt(v32); /*0x6596cc*/
    __asm { fstp qword ptr [esi+68h] } /*0x6596d1*/
    *(double *)_ESI->bombVisible = _RT1; /*0x6596d1*/
  }
  if ( LOBYTE(_ESI->customSound_controller[2]) ) /*0x6596d7*/
  {
    ptr_4 = _ESI->ptr_4; /*0x6596e2*/
    if ( ptr_4 ) /*0x6596e7*/
    {
      v7 = *(unsigned int *)ptr_4; /*0x6596f0*/
      if ( (*(unsigned char *)(ptr_4 + 20) & 2) != 0 ) /*0x6596f4*/
        v8 = (int *)(*(int (**)(int *))(v7 + 164))(&v38); /*0x659705*/
      else
        v8 = (int *)(*(int (**)(int *))(v7 + 88))(&v38); /*0x6596fb*/
      v9 = v8[1]; /*0x65970d*/
      v10 = v8[2]; /*0x659710*/
      _ESI->nextObject = *v8; /*0x659718*/
      _ESI->attachedTag = v9; /*0x65971a*/
      _ESI->attachedBomb = v10; /*0x65971d*/
      owningHouseIndex = _ESI->owningHouseIndex; /*0x659729*/
      v11 = (/*0x659741*/
              (Coord *)&v38)->Subtract(
              _ESI->nextObject - _ESI->occupant,
              _ESI->attachedTag - owningHouseIndex,
              _ESI->attachedBomb - _ESI->fallRate);
      _ESI->customSound_controller[3] = *v11; /*0x65974d*/
      _ESI->customSound_controller[4] = v11->q004; /*0x659752*/
      _ESI->customSound = v11->q008; /*0x659758*/
      v35 = _ESI->customSound * _ESI->customSound /*0x659776*/
          + _ESI->customSound_controller[4] * _ESI->customSound_controller[4]
          + _ESI->customSound_controller[3] * _ESI->customSound_controller[3];
      __asm /*0x65977a*/
      {
        fild [esp+40h+var_28]
        fstp [esp+40h+var_40]; double
      }
      Math::Sqrt(v33); /*0x659781*/
      __asm { fstp qword ptr [esi+68h] } /*0x659786*/
      *(double *)_ESI->bombVisible = _RT1; /*0x659786*/
    }
  }
  if ( BYTE1(_ESI->ptr_8) ) /*0x65978c*/
  {
    __asm /*0x659797*/
    {
      fld qword ptr [esi+68h]
      fdiv qword ptr [esi+18h]
    }
    LOWORD(v13) = Math::RoundToInt(v1); /*0x65979d*/
    v14 = _ESI->customSound_controller[4]; /*0x6597a5*/
    v38 = _ESI->customSound_controller[3]; /*0x6597a8*/
    customSound = _ESI->customSound; /*0x6597ac*/
    v39 = v14; /*0x6597af*/
    *(unsigned int *)_ESI->onBridge = v13; /*0x6597b8*/
    v40 = customSound; /*0x6597be*/
    Render_Render_65A1B0((ObjectClass *)&v38, (int)v13); /*0x6597c2*/
    __asm /*0x6597c7*/
    {
      fild dword ptr [esi+7Ch]
      fidiv dword ptr [esi+3Ch]
    }
    v16 = v38; /*0x6597cd*/
    v17 = v39; /*0x6597d1*/
    _ESI->parachute = 0; /*0x6597e1*/
    *(unsigned int *)_ESI->isAliveFlag = v16; /*0x6597eb*/
    v18 = v40; /*0x6597ed*/
    _ESI->lastLayer = v17; /*0x6597f1*/
    *(unsigned int *)_ESI->isInLogic = v18; /*0x6597f7*/
    _ESI->location[0] = _ESI->occupant; /*0x6597fe*/
    fallRate = _ESI->fallRate; /*0x659803*/
    _ESI->location[1] = _ESI->owningHouseIndex; /*0x659806*/
    _ESI->location[2] = fallRate; /*0x65980c*/
    LOWORD(_ESI[1].abstractFlags) = _ESI->NeedsSaveOrLink; /*0x659818*/
    BYTE2(_ESI[1].abstractFlags) = BYTE2(_ESI->NeedsSaveOrLink); /*0x65981e*/
    __asm /*0x659821*/
    {
      fmul qword ptr [esi+40h]
      fstp qword ptr [esi+80h]
    }
    *(double *)_ESI->needsRedraw = _RT1; /*0x659824*/
    __asm /*0x65982a*/
    {
      fld ds:dbl_7E2800
      fcomp qword ptr [esi+68h]
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x659838*/
    {
      do /*0x659962*/
      {
        v22 = ProjectileTrail::ComputeRenderData((ProjectileTrail *)_ESI); /*0x659840*/
        (owningHouseIndex) = ((owningHouseIndex) & ~0xFFFF) | (((unsigned __int8)(BYTE2(_ESI[1].abstractFlags) >> g_BitMask_Red)) & 0xFFFF); /*0x65985f*/
        (v22) = ((v22) & ~(0xFFFFull << 32)) | ((((unsigned __int8)(BYTE1(_ESI[1].abstractFlags) >> g_BitMask_Blue)) & 0xFFFFull) << 32); /*0x659876*/
        HIDWORD(v22) <<= g_BitMask_Green; /*0x65987e*/
        v23 = (((v22) >> 32) & 0xFFFFFFFFu) | (owningHouseIndex << g_BitShift_Blue); /*0x65988e*/
        (v22) = ((v22) & ~(0xFFFFull << 32)) | ((((unsigned __int8)(LOBYTE(_ESI[1].abstractFlags) >> g_BitShift_Green_0)) & 0xFFFFull) << 32); /*0x659893*/
        owningHouseIndex = ((((v22) >> 32) & 0xFFFFFFFFu) << g_BitShift_Red) | v23; /*0x6598a3*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, _ESI->location, &v38); /*0x6598a5*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, &_ESI->lineTrailer, v37); /*0x6598bc*/
        v41[0] = DSurface_ViewBounds.field_0; /*0x6598d2*/
        v41[1] = dword_886FA4; /*0x6598dc*/
        v41[2] = dword_886FA8; /*0x6598e4*/
        v41[3] = dword_886FAC; /*0x6598e8*/
        if ( (unsigned __int8)ClipLine(&v38, v37, v41) ) /*0x6598f5*/
        {
          v24 = _ESI->ptr_C - ZCoordToScreenY(_ESI->location[2]) - 2; /*0x659911*/
          v25 = ZCoordToScreenY(_ESI[1].ptr_4); /*0x659914*/
          (*(void (**)(AudioStream *, CellStruct *, int *, int *, unsigned int, int, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x65993f*/
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v38,
            v37,
            (__int16)owningHouseIndex,
            v24,
            -2 - v25,
            0);
        }
        v36 = _ESI->parachute + 1; /*0x659949*/
        _ESI->parachute = v36; /*0x65994d*/
        __asm /*0x659953*/
        {
          fild [esp+38h+var_28]
          fmul qword ptr [esi+18h]
          fcomp qword ptr [esi+68h]
          fnstsw ax
        }
      }
      while ( (_AX & 0x100) != 0 ); /*0x659962*/
    }
  }
  if ( LOBYTE(_ESI->customSound_controller[2]) ) /*0x659968*/
  {
    v27 = _ESI->customSound_controller[1]; /*0x65996f*/
    v28 = v27 + _ESI->visibilityFlags; /*0x659975*/
    _ESI->visibilityFlags = v28; /*0x659979*/
    if ( v28 <= 0 || v28 >= _ESI->ambientSoundController[0] ) /*0x659983*/
    {
      _ESI->customSound_controller[1] = -v27; /*0x659987*/
      if ( _ESI->visibilityFlags < 0 ) /*0x65998f*/
        _ESI->visibilityFlags = 0; /*0x659991*/
    }
    return 0; /*0x659998*/
  }
  else
  {
    v30 = _ESI->ambientSoundController[0]; /*0x6599a5*/
    v31 = _ESI->visibilityFlags + 1; /*0x6599ab*/
    _ESI->visibilityFlags = v31; /*0x6599ad*/
    return v31 >= v30; /*0x6599b6*/
  }

}
// 0x00659EE0
int ObjectClass::Weapon_Update_Update_659EE0() {
  double v1; // st7
  int v3; // edi
  int visibilityFlags; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int result; // eax
  int v11; // edi
  int v12; // ebx
  int customSound; // ebp
  int v14; // ecx
  char *p_isAliveFlag; // esi
  double v16; // [esp+0h] [ebp-20h]
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+18h] [ebp-8h]
  int v19; // [esp+1Ch] [ebp-4h]
  int v20; // [esp+1Ch] [ebp-4h]
  int v21; // [esp+1Ch] [ebp-4h]

  _ESI = this; /*0x659ee6*/
  v3 = this->ambientSoundController[0]; /*0x659ee9*/
  visibilityFlags = this->visibilityFlags; /*0x659eec*/
  v19 = v3; /*0x659ef1*/
  if ( visibilityFlags >= v3 / 2 ) /*0x659eff*/
  {
    v18 = v3 - 2 * visibilityFlags % v3; /*0x659f10*/
    __asm { fild [esp+18h+var_8] } /*0x659f14*/
  }
  else
  {
    v17 = 2 * visibilityFlags; /*0x659f01*/
    __asm { fild [esp+18h+var_8] } /*0x659f05*/
  }
  __asm { fild [esp+18h+var_4] } /*0x659f18*/
  __asm { fdivr st, st(1) }
  v20 = visibilityFlags * _ESI->customSound_controller[0]; /*0x659f24*/
  __asm /*0x659f28*/
  {
    fmul qword ptr [esi+40h]
    fstp qword ptr [esi+80h]
  }
  *&_ESI->u64_80 = _RT1; /*0x659f2b*/
  __asm /*0x659f31*/
  {
    fstp st
    fild [esp+18h+var_4]
    fmul qword ptr [esi+48h]
  }
  (*((unsigned short *)&(v6))) = Math::RoundToInt(v1); /*0x659f3a*/
  v7 = v6 * *&_ESI->u32_4 + _ESI->customSound_controller[4]; /*0x659f5f*/
  v8 = v6 * _ESI->spawnStatus + _ESI->customSound; /*0x659f64*/
  _ESI->customSound_controller[3] += v6 * _ESI->estimatedHealth; /*0x659f68*/
  _ESI->customSound_controller[4] = v7; /*0x659f6a*/
  _ESI->customSound = v8; /*0x659f6d*/
  v21 = _ESI->customSound * _ESI->customSound /*0x659f8b*/
  + _ESI->customSound_controller[4] * _ESI->customSound_controller[4]
  + _ESI->customSound_controller[3] * _ESI->customSound_controller[3];
  __asm /*0x659f8f*/
  {
    fild [esp+20h+var_4]
    fstp [esp+20h+var_20]; double
  }
  Math::Sqrt(v16); /*0x659f96*/
  __asm { fst qword ptr [esi+68h] } /*0x659f9b*/
  *&_ESI->u64_68 = _RT1; /*0x659f9b*/
  __asm { fdiv qword ptr [esi+18h] } /*0x659f9e*/
  (*((unsigned short *)&(result))) = Math::RoundToInt(v1); /*0x659fa4*/
  v11 = _ESI->customSound_controller[3]; /*0x659fa9*/
  v12 = _ESI->customSound_controller[4]; /*0x659fab*/
  customSound = _ESI->customSound; /*0x659fae*/
  result = result; /*0x659fb1*/
  *&_ESI->M140 = result; /*0x659fb5*/
  if ( result ) /*0x659fbb*/
  {
    v11 /= result; /*0x659fc2*/
    v12 /= result; /*0x659fc9*/
    result = customSound / result; /*0x659fce*/
    customSound /= result; /*0x659fd0*/
  }
  p_isAliveFlag = &_ESI->isAliveFlag; /*0x659fd2*/
  *(unsigned int *)p_isAliveFlag = v11; /*0x659fd8*/
  *((unsigned int *)p_isAliveFlag + 1) = v12; /*0x659fdb*/
  *((unsigned int *)p_isAliveFlag + 2) = customSound; /*0x659fde*/
  return result; /*0x659fda*/
}
// 0x00672840
int ObjectClass::ReadBuildingTypesBuildingTypeClass() {
  int KeyCount; // ebx
  int i; // esi
  uint8_t *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (uint8_t *)aOverlaytypes); /*0x672857*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67285d*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v6->__pad_0, (uint8_t *)aOverlaytypes, i); /*0x672875*/
    if ( INIClass::GetString(v6, (uint8_t *)aOverlaytypes, StringByIndex, &g_INI_DefaultBuffer, Destination, 32) ) /*0x672883*/
      BuildingTypeClass::FindOrCreate2(Destination); /*0x672890*/
  }
  return KeyCount > 0; /*0x67289c*/
}
// 0x00681080
int ObjectClass::Map_Save(int a2) {

  this->ptr_0 = (void *)a2; /*0x681084*/
  return a2; /*0x681086*/

}
// 0x00683050
int ObjectClass::Map_Read() {
  int result; // eax

  result = (int)this->ptr_0; /*0x683050*/
  if ( this->ptr_0 ) /*0x683050*/
    return (*(int (__stdcall **)(int))(result->ptr_8)(result); /*0x683059*/
  return result; /*0x68305c*/
}
// 0x00683060
int ObjectClass::ReleaseCOM() {
  int result; // eax

  result = (int)this->ptr_0; /*0x683060*/
  if ( this->ptr_0 ) /*0x683060*/
    return (*(int (__stdcall **)(int))(result->ptr_8)(result); /*0x683069*/
  return result; /*0x68306c*/
}
// 0x0068FFE0
int ObjectClass::Render_Render_68FFE0(int a2, ScoreScreen * aP2) {
  signed int result; // eax
  signed int v5; // esi
  void *ptr_4; // [esp+0h] [ebp-40h]
  int nextArrayIndex; // [esp+Ch] [ebp-34h]
  unsigned int v8[2]; // [esp+1Ch] [ebp-24h] BYREF
  int v9; // [esp+24h] [ebp-1Ch] BYREF
  int v10; // [esp+28h] [ebp-18h]
  int v11; // [esp+30h] [ebp-10h] BYREF
  int v12; // [esp+34h] [ebp-Ch]
  int v13; // [esp+38h] [ebp-8h]
  int v14; // [esp+3Ch] [ebp-4h]

  if ( (byte_B054F0 & 1) == 0 ) /*0x68ffef*/
  {
    byte_B054F0 |= 1u; /*0x68fffb*/
    dword_B05528 = TimerGetTicks(); /*0x69000b*/
    dword_B05530 = 0; /*0x690010*/
    atexit(nullsub_227); /*0x69001a*/
  }
  if ( a2 != a2 ) /*0x690034*/
  {
    v11 = a2; /*0x69004c*/
    v12 = aP2 + 14; /*0x690050*/
    v13 = 11; /*0x690054*/
    v14 = 1; /*0x69005c*/
    (*((void (**)(ObjectClass *, int *, DSurface *, int *, unsigned int, int))g_DSurface_Hidden->ptr_0 + 2))( /*0x69006b*/
      g_DSurface_Hidden,
      &v11,
      DSurface_Alternate,
      &v11,
      0,
      1);
    a2 = a2; /*0x69006e*/
  }
  if ( dword_B05560 ) /*0x69007b*/
  {
    v8[0] = a2 + 10; /*0x690086*/
    nextArrayIndex = this->nextArrayIndex; /*0x69008d*/
    v8[1] = aP2 + 14; /*0x690093*/
    v9 = a2; /*0x690097*/
    v10 = aP2 + 14; /*0x69009b*/
    (*((void (**)(ObjectClass *, int *, unsigned int *, int))g_DSurface_Hidden->ptr_0 + 12))( /*0x6900a6*/
      g_DSurface_Hidden,
      &v9,
      v8,
      nextArrayIndex);
  }
  else
  {
    ptr_4 = this->ptr_8; /*0x6900bd*/
    a2 = a2; /*0x6900be*/
    v12 = aP2 + 14; /*0x6900c2*/
    v13 = 11; /*0x6900c6*/
    v14 = 1; /*0x6900ce*/
    (*((void (**)(ObjectClass *, int *, void *, int *, unsigned int, int))g_DSurface_Hidden->ptr_0 + 2))( /*0x6900dd*/
      g_DSurface_Hidden,
      &a2,
      ptr_4,
      &a2,
      0,
      1);
  }
  result = dword_B05528; /*0x6900e0*/
  dword_B05530 = dword_B05530; /*0x6900e5*/
  if ( dword_B05528 == -1 ) /*0x6900ee*/
  {
  LABEL_11:
    if ( dword_B05530 ) /*0x690108*/
    return result; /*0x690108*/
    goto LABEL_12; /*0x690108*/
  }
  result = TimerGetTicks() - dword_B05528; /*0x6900fa*/
  if ( result < dword_B05530 ) /*0x690102*/
  {
    dword_B05530 -= result; /*0x690104*/
    goto LABEL_11; /*0x690104*/
  }
  LABEL_12:
  dword_B05560 ^= 1u; /*0x69010a*/
    result = TimerGetTicks(); /*0x69011b*/
    dword_B05528 = result; /*0x690129*/
    v10 = v10; /*0x69012e*/
    dword_B05530 = 5; /*0x690134*/
    return result; /*0x69013a*/
}
// 0x00691590
char ObjectClass::SetLandTypeMap() {
  int result; // eax

  this->fallRate = -1; /*0x691590*/
  (*((unsigned char *)&(result))) = 1; /*0x691597*/
  return result; /*0x691599*/
}
// 0x00696C40
int ObjectClass::DlgProcLoadGame_Load_696C40() {

  int result; // eax
  result = (int)GetDlgItem((HWND)this->ptr_0, 1630); /*0x696c4f*/
  HWND v3; // edi
  v3 = (HWND)result; /*0x696c55*/
  if ( result ) /*0x696c59*/
  {
    result = SendMessageA((HWND)result, 0x18Bu, 0, 0); /*0x696c6f*/
    if ( result > 0 ) /*0x696c73*/
    {
      result = SendMessageA(v3, 0x188u, 0, 0); /*0x696c7f*/
      LRESULT v4 = result; // esi /*0x696c81*/
      if ( result != -1 ) /*0x696c86*/
      {
        SendMessageA(v3, 0x182u, result, 0); /*0x696c91*/
        if ( v4 < dword_A8DB5C ) /*0x696c9b*/
        {
          int v5 = v4; // eax /*0x696c9e*/
          if ( v4 < --dword_A8DB5C ) /*0x696ca8*/
          {
            do /*0x696cc0*/
            {
              ++v5; /*0x696cb0*/
              *(unsigned int *)(dword_A8DB50 + 4 * v5 - 4) = *(unsigned int *)(dword_A8DB50 + 4 * v5); /*0x696cb4*/
            }
            while ( v5 < dword_A8DB5C ); /*0x696cc0*/
          }
        }
        if ( v4 >= SendMessageA(v3, 0x18Bu, 0, 0) ) /*0x696cd0*/
          --v4; /*0x696cd2*/
        SendMessageA(v3, 0x186u, v4, 0); /*0x696cdc*/
        result = SendMessageA(v3, 0x197u, v4, 0); /*0x696ce7*/
        *&this->isInLogic = v4; /*0x696ce9*/
      }
    }
  }
  return result; /*0x696cef*/
}
} // namespace gamemd
// 0x006A94F0
int ObjectClass::SmallFunc_6A94F0(int a2) {

  int result = 0; // eax /*0x6a94f9*/
  ObjectClass *v4; // ecx
  v4 = (ObjectClass *)this->customSound_controller[13 * a2 + 5]; /*0x6a9501*/
  if ( v4 ) /*0x6a950a*/
    result = ObjectClass::GetMember09(v4); /*0x6a950c*/
  if ( this->bombVisible + 12 * a2 + a2) == 1 ) /*0x6a951d*/
  {
    int v5 = *&this->alignmentPadding69; // ebx /*0x6a951f*/
    if ( v5 > result ) /*0x6a9524*/
      return (v5 + result) / 2; /*0x6a952b*/
  }
  return result; /*0x6a952d*/
}
// 0x006B0490
void* ObjectClass::Event_Process_6B0490() {
  int *result; // eax

  int i; // esi
  for ( i = this->ambientSoundController[3] - 1; i >= 0; --i ) /*0x6b0498*/
  {
    result = *(int **)(this->ambientSoundController[0] + 4 * i); /*0x6b049d*/
    int v4 = *result; // ecx /*0x6b04a3*/
    if ( result[1] != 6 ) /*0x6b04a8*/
    {
      if ( v4 ) /*0x6b04ac*/
        result = (int *)(*(int (**)(int))(*(unsigned int *)v4 + 976))(v4); /*0x6b04b0*/
    }
  }
  return result; /*0x6b04b9*/
}
// 0x006C61C0
int ObjectClass::COM_SafeRelease() {

  int result; // eax
  result = (int)this->ptr_0; /*0x6c61c0*/
  if ( this->ptr_0 ) /*0x6c61c0*/
    return (*(int (__stdcall **)(int))(result->ptr_8)(result); /*0x6c61c9*/
  return result; /*0x6c61cc*/
}
// 0x006C6B00
void* ObjectClass::Audio_Read_6C6B00(AbstractClass * aP1) {
  unsigned int *result; // eax
  signed int v3; // ecx

  result = &this->ptr_0; /*0x6c6b04*/
  this->ptr_0 = (void *)*aP1; /*0x6c6b08*/
  v3 = aP1[1]; /*0x6c6b0a*/
  result->ptr_2 = v3; /*0x6c6b13*/
  if ( v3 <= 0x8000 ) /*0x6c6b16*/
    memcpy(result + 2, aP1 + 2, v3); /*0x6c6b2f*/
  else
    result->ptr_2 = 0; /*0x6c6b18*/
  return result; /*0x6c6b1f*/
}
// 0x006D04D0
int ObjectClass::SidebarUpdateAll() {
  ShapeButtonClass *v2; // esi
  int result; // eax

  v2 = &stru_B0C1C0; /*0x6d04d4*/
  do /*0x6d04ea*/
  {
    result = (*((int (**)(ObjectClass *, ShapeButtonClass *))this->ptr_0 + 13))(this, v2); /*0x6d04de*/
    v2 += 8; /*0x6d04e1*/
  }
  while ( (int)v2 < (int)&dword_B0CB20 ); /*0x6d04ea*/
  return result; /*0x6d04ec*/
}
// 0x006D5C50
int ObjectClass::RenderRadarBlips(char a2, AbstractClass * aP2) {
  int result; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // esi
  unsigned short *v7; // ebx
  int16_t v8; // ax
  int v9; // eax
  int *v10; // eax
  int16_t v11; // dx
  int v12; // edi
  int v13; // ebp
  int *v14; // ecx
  int v15; // eax
  int v16; // kr08_4
  int v17; // eax
  int queuedMission; // eax
  int16_t v19; // cx
  bool v20; // zf
  int v21; // [esp-1Ch] [ebp-6Ch]
  Object *v22; // [esp-14h] [ebp-64h]
  int16_t v23[2]; // [esp+0h] [ebp-50h] BYREF
  int16_t v24[2]; // [esp+4h] [ebp-4Ch] BYREF
  int v25; // [esp+8h] [ebp-48h]
  int v26; // [esp+Ch] [ebp-44h]
  int v27; // [esp+10h] [ebp-40h]
  int v28; // [esp+14h] [ebp-3Ch]
  int i; // [esp+18h] [ebp-38h]
  int v30; // [esp+1Ch] [ebp-34h]
  TechnoClass *v31; // [esp+20h] [ebp-30h]
  int v32; // [esp+24h] [ebp-2Ch]
  Vector2 v33; // [esp+28h] [ebp-28h] BYREF
  unsigned int v34[2]; // [esp+30h] [ebp-20h] BYREF
  int v35[3]; // [esp+38h] [ebp-18h] BYREF
  int v36; // [esp+44h] [ebp-Ch]
  IsoCoord v37; // [esp+48h] [ebp-8h] BYREF

  v31 = this; /*0x6d5c58*/
  v30 = *(unsigned int *)(*(unsigned int *)(dword_88098C + 1312) + 3668); /*0x6d5c6a*/
  result = v30; /*0x6d5c62*/
  if ( v30 )
  {
    (*((unsigned char *)&(result))) = 0; /*0x6d5c76*/
    for ( i = 0; i < 8; i += 2 )
    {
      *(unsigned int *)v24 = aP2; /*0x6d5c88*/
      v4 = 0; /*0x6d5c8c*/
      v5 = *(unsigned int *)(dword_88098C + 1312); /*0x6d5c8e*/
      v6 = *(int *)(v5 + 1464) >> 8; /*0x6d5c9a*/
      if ( v6 > 0 )
      {
        v7 = (unsigned short *)(4 * (result & 7) + 9041544); /*0x6d5ca8*/
        while ( 1 ) /*0x6d5cbb*/
        {
          v8 = v24[1] + v7[1]; /*0x6d5cbb*/
          (*((unsigned short *)&(v25))) = v24[0] + *v7; /*0x6d5cc0*/
          (*(((unsigned short *)&(v25)) + 1)) = v8; /*0x6d5cc5*/
          *(unsigned int *)v24 = v25; /*0x6d5cd2*/
          v9 = *((unsigned int *)((CellCoord *)&dword_87F7E8)->To_CellObj(v24) + 17); /*0x6d5ce1*/
          if ( v9 != -1 /*0x6d5d12*/
            && *(unsigned int *)(v30 + 660) == v9
            && dword_A83D4C->relatedTagsCount == *((unsigned int *)((CellCoord *)&dword_87F7E8)->To_CellObj(v24) + 20) )
          {
            break; /*0x6d5d12*/
          }
          dword_A83D4C = dword_A83D4C; /*0x6d5d1f*/
          v21 = *(unsigned int *)(v5 + 1660); /*0x6d5d25*/
          v10 = (int *)((CellCoord *)&dword_87F7E8)->To_CellObj(v24); /*0x6d5d2c*/
          if ( (uint8_t)CellClass::IsPassable(v10, v21, v5, (int)dword_A83D4C) ) /*0x6d5d33*/
          {
            if ( ++v4 < v6 ) /*0x6d5d43*/
              continue; /*0x6d5d43*/
          }
          goto LABEL_14; /*0x6d5d43*/
        }
        if ( v4 > 0 )
        {
          v11 = (*(((unsigned short *)&(aP2)) + 1)) + v7[1]; /*0x6d5d6a*/
          (*((unsigned short *)&(v26))) = aP2 + *v7; /*0x6d5d79*/
          v32 = a2 != 0 ? 67078 : 132614;
          (*(((unsigned short *)&(v26)) + 1)) = v11; /*0x6d5d82*/
          *(unsigned int *)v23 = v26; /*0x6d5d8d*/
          v28 = v4; /*0x6d5d97*/
          do /*0x6d5f09*/
          {
            v12 = -1 - 15 * *((char *)((CellCoord *)&dword_87F7E8)->To_CellObj(v23) + 283); /*0x6d5dc4*/
            v13 = -2 - 15 * *((char *)((CellCoord *)&dword_87F7E8)->To_CellObj(v23) + 283); /*0x6d5de2*/
            v14 = IsoCoord::ToPixel(&v37, (((v23[0] << 8) + 128) / 256) << 8, (((v23[1] << 8) + 128) / 256) << 8); /*0x6d5e27*/
            v15 = *v14; /*0x6d5e29*/
            v36 = v14->IsoCoord_field_0x04; /*0x6d5e30*/
            v15 = v15; /*0x6d5e3b*/
            v17 = ZCoordToScreenY(0); /*0x6d5e42*/
            *(unsigned int *)v33.__pad_000 = v15 / 256; /*0x6d5e54*/
            v33.q004 = v36 / 256 - v17; /*0x6d5e63*/
            queuedMission = v31->queuedMission; /*0x6d5e76*/
            v34[0] = v31->suspendedMission; /*0x6d5e7c*/
            v34[1] = queuedMission; /*0x6d5e80*/
            Vector2::Subtract(&v33, v34); /*0x6d5e84*/
            *(unsigned int *)v33.__pad_000 -= 30; /*0x6d5e96*/
            v35[0] = *(unsigned int *)v33.__pad_000 + 30; /*0x6d5e9d*/
            v35[1] = v33.q004 + v12; /*0x6d5ea5*/
            DrawToSurfaceSHP( /*0x6d5ed8*/
              (int)g_DSurface_Hidden_2,
              (int)dword_87F6C4,
              dword_8A03FC,
              0,
              v35,
              &DSurface_ViewBounds.field_0,
              v32,
              0,
              v13,
              0,
              1000,
              0,
              0,
              0,
              0,
              0);
            v19 = v7[1]; /*0x6d5ee0*/
            (*((unsigned short *)&(v27))) = v23[0] + *v7; /*0x6d5eee*/
            (*(((unsigned short *)&(v27)) + 1)) = v23[1] + v19; /*0x6d5ef7*/
            v20 = v28 == 1; /*0x6d5f00*/
            *(unsigned int *)v23 = v27; /*0x6d5f01*/
            --v28; /*0x6d5f05*/
          }
          while ( !v20 ); /*0x6d5f09*/
        }
      }
      LABEL_14:
      result = i + 2; /*0x6d5f0f*/
    }
  }
  return result; /*0x6d5f27*/
}
// 0x006E0490
char ObjectClass::PlayWaypointEffect(int a2, int a3, int a4, IUnknown * aP4) {
  int *WorldCoords; // eax
  unsigned int *v7; // eax
  int *v8; // eax
  unsigned int *v9; // eax
  int *v10; // eax
  unsigned int *v11; // eax
  int *v12; // eax
  unsigned int *v13; // eax
  int *v14; // eax
  int v15; // esi
  int v16; // edx
  int16_t v18[2]; // [esp+8h] [ebp-38h] BYREF
  int v19; // [esp+Ch] [ebp-34h] BYREF
  int v20; // [esp+10h] [ebp-30h] BYREF
  int v21; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-28h]
  int v23; // [esp+1Ch] [ebp-24h] BYREF
  int v24; // [esp+20h] [ebp-20h]
  int v25; // [esp+24h] [ebp-1Ch]
  unsigned int v33[3]; // [esp+28h] [ebp-18h] BYREF
  unsigned int v33[3]; // [esp+34h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, &v20, *&this->isAliveFlag); /*0x6e04a9*/
  v23 = *WorldCoords; /*0x6e04b2*/
  v24 = WorldCoords[1]; /*0x6e04bb*/
  v25 = WorldCoords[2]; /*0x6e04c7*/
  PlaySoundEffectAt(&v23, 100, 0, *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4008), 1, 0); /*0x6e04dd*/
  v7 = Cell::GetWorldCoords((Cell *)dword_A8B230, &v20, *&this->isAliveFlag); /*0x6e04f4*/
  v8 = ((Coord *)v33)->Subtract( *v7 + 85, v7[1] + 85, v7[2]); /*0x6e0510*/
  v23 = *v8; /*0x6e0519*/
  v24 = v8->u32_4; /*0x6e0528*/
  v25 = v8->u32_8; /*0x6e052f*/
  PlaySoundEffectAt(&v23, 100, 0, *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4008), 1, 0); /*0x6e0545*/
  v9 = Cell::GetWorldCoords((Cell *)dword_A8B230, v33, *&this->isAliveFlag); /*0x6e055c*/
  v10 = ((Coord *)&v20)->Subtract( *v9 - 85, v9[1] + 85, v9[2]); /*0x6e0578*/
  v23 = *v10; /*0x6e0581*/
  v24 = v10->u32_4; /*0x6e058a*/
  v25 = v10->u32_8; /*0x6e0591*/
  PlaySoundEffectAt(&v23, 100, 0, *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4008), 1, 0); /*0x6e05ad*/
  ((Coord *)&v23)->Subtract( 85, -85, 0); /*0x6e05bc*/
  v11 = Cell::GetWorldCoords((Cell *)dword_A8B230, v33, *&this->isAliveFlag); /*0x6e05d3*/
  v12 = ((Coord *)v33)->Subtract( *v11 + v23, v11[1] + v24, v11[2] + v25); /*0x6e05fb*/
  v20 = *v12; /*0x6e0604*/
  v21 = v12->u32_4; /*0x6e060d*/
  v22 = v12->u32_8; /*0x6e0619*/
  PlaySoundEffectAt(&v20, 100, 0, *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4008), 1, 0); /*0x6e062f*/
  v13 = Cell::GetWorldCoords((Cell *)dword_A8B230, v33, *&this->isAliveFlag); /*0x6e0646*/
  v14 = ((Coord *)v33)->Subtract( *v13 - 85, v13[1] - 85, v13[2]); /*0x6e0662*/
  v23 = *v14; /*0x6e066b*/
  v24 = v14->u32_4; /*0x6e067a*/
  v25 = v14->u32_8; /*0x6e0681*/
  PlaySoundEffectAt(&v23, 100, 0, *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4008), 1, 0); /*0x6e0697*/
  if ( (uint8_t)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, *&this->isAliveFlag) ) /*0x6e06a9*/
  {
    *(unsigned int *)v18 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v19, *&this->isAliveFlag); /*0x6e06d9*/
    v15 = 3; /*0x6e06dd*/
    if ( !(uint8_t)CellClass::SetTerrainType((CellClass *)&DataGlobal_87F7E8, v18) ) /*0x6e06e2*/
    {
      do /*0x6e0703*/
      v16 = v15--; /*0x6e06eb*/
      while ( v16 > 0 && !(uint8_t)CellClass::SetTerrainType((CellClass *)&DataGlobal_87F7E8, v18) ); /*0x6e0703*/
    }
    v24 = (v18[1] << 8) + 128; /*0x6e0722*/
    v23 = (v18[0] << 8) + 128; /*0x6e0730*/
    v25 = dword_B0E6D4; /*0x6e073c*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v23, &v20); /*0x6e0748*/
    Cell::CreateCrater(v20 - 128, v21 - 128, 256, 256, 0); /*0x6e077a*/
  }
  return 1; /*0x6e077f*/
}
// 0x006E14A0
char ObjectClass::ProcessDataObjectClass(int a2, int a3, int a4, int a5) {
  void **pList; // eax
  int abstractFlags; // edx
  void *ptr_8; // esi
  int v8; // edi
  void *v9; // edx
  int v10; // ecx
  void *v11; // esi
  int v12; // ecx
  void *v14; // [esp+10h] [ebp-8h]

  pList = &dword_A8B230[127].ptr_3; /*0x6e14a8*/
  abstractFlags = dword_A8B230[127].abstractFlags; /*0x6e14b4*/
  ptr_8 = dword_A8B230[127].ptr_C; /*0x6e14b8*/
  if ( ptr_8 != (void *)-1 ) /*0x6e14be*/
  {
    if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - (int)ptr_8 >= abstractFlags ) /*0x6e14c6*/
      abstractFlags = 0; /*0x6e14cc*/
    else
      abstractFlags -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - (unsigned int)ptr_8; /*0x6e14c8*/
  }
  v8 = 15 * *&this->isAliveFlag; /*0x6e14d7*/
  if ( abstractFlags > v8 ) /*0x6e14dc*/
  {
    v11 = *pList; /*0x6e14e8*/
    v12 = dword_A8B230[127].abstractFlags; /*0x6e14ea*/
    if ( *pList != (void *)-1 ) /*0x6e14f0*/
    {
      if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - (int)v11 >= v12 ) /*0x6e14f8*/
        v12 = 0; /*0x6e14fe*/
      else
        v12 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - (unsigned int)v11; /*0x6e14fa*/
    }
    v9 = v14; /*0x6e1500*/
    v10 = v12 - v8; /*0x6e1504*/
    *pList = *(void **)&((unsigned int *)&stru_A8EB00)[416]; /*0x6e1506*/
  }
  else
  {
    v9 = v14; /*0x6e14de*/
    v10 = 0; /*0x6e14e2*/
    *pList = *(void **)&((unsigned int *)&stru_A8EB00)[416]; /*0x6e14e4*/
  }
  pList[1] = v9; /*0x6e1508*/
  pList[2] = (void *)v10; /*0x6e150b*/
  ObjectClass::PreDraw((ObjectClass *)&DataGlobal_87F7E8); /*0x6e1513*/
  return 1; /*0x6e1518*/
}
} // namespace gamemd
// 0x006E7330
int ObjectClass::System_Read_6E7330() {
  int ptr_0; // ecx
  int uniqueId; // edx
  void *ptr_0; // ebx
  unsigned int *v5; // edi
  void *v6; // esi
  void ***v7; // eax

  if ( (this->ptr_4) != 52 ) /*0x6e7337*/
    return 0; /*0x6e73f8*/
  ptr_0 = (int)g_BuildingLoadQueue_Array.ptr_4; /*0x6e733d*/
  if ( !g_BuildingLoadQueue_Array.ptr_4 ) /*0x6e7347*/
    goto LABEL_13; /*0x6e7347*/
  uniqueId = g_BuildingLoadQueue_Array.uniqueId; /*0x6e7349*/
  if ( g_BuildingLoadQueue_Array.uniqueId && *(void **)g_BuildingLoadQueue_Array.uniqueId == this->ptr_0 ) /*0x6e7359*/
  {
  LABEL_17:
    v7 = &uniqueId->u32_4; /*0x6e73f3*/
    return (int)__RTDynamicCast( /*0x6e73f6*/
                  *v7,
                  0,0,0,
                  0);
  }
  if ( !(*((unsigned char *)&(g_BuildingLoadQueue_Array.ptr_C))) ) /*0x6e7366*/
  {
    qsort( /*0x6e7377*/
      g_BuildingLoadQueue_Array.ptr_0,
      (size_t)g_BuildingLoadQueue_Array.ptr_4,
      8u,
      (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
    ptr_0 = (int)g_BuildingLoadQueue_Array.ptr_4; /*0x6e737c*/
    g_BuildingLoadQueue_Array.uniqueId = 0; /*0x6e7385*/
    (*((unsigned char *)&(g_BuildingLoadQueue_Array.ptr_C))) = 1; /*0x6e738f*/
  }
  ptr_0 = this->ptr_0; /*0x6e7396*/
  v5 = g_BuildingLoadQueue_Array.ptr_0; /*0x6e7398*/
  if ( ptr_0 <= 0 ) /*0x6e73a0*/
    goto LABEL_13; /*0x6e73a0*/
  while ( 1 ) /*0x6e73a9*/
  {
    v6 = (void *)v5[2 * (ptr_0 / 2)]; /*0x6e73a9*/
    uniqueId = (int)&v5[2 * (ptr_0 / 2)]; /*0x6e73ac*/
    if ( (int)v6 <= (int)ptr_0 ) /*0x6e73b1*/
      break; /*0x6e73b1*/
    ptr_0 /= 2; /*0x6e73b3*/
    LABEL_12:
    if ( ptr_0 <= 0 ) /*0x6e73c5*/
      goto LABEL_13; /*0x6e73c5*/
  }
  if ( v6 != ptr_0 ) /*0x6e73b7*/
  {
    v5 = &uniqueId->u32_8; /*0x6e73b9*/
    ptr_0 += -1 - ptr_0 / 2; /*0x6e73c1*/
    goto LABEL_12; /*0x6e73c1*/
  }
  if ( uniqueId ) /*0x6e73eb*/
  {
    g_BuildingLoadQueue_Array.uniqueId = (int)&v5[2 * (ptr_0 / 2)]; /*0x6e73ed*/
    goto LABEL_17; /*0x6e73ed*/
  }
  LABEL_13:
  v7 = (void ***)&unk_B78828; /*0x6e73c7*/
    return (int)__RTDynamicCast(*v7, 0,0,0, 0); /*0x6e73e7*/
}
// 0x006E7C20
void* ObjectClass::Network_Process_6E7C20() {
  int ptr_0; // ecx
  ObjectClass *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this; /*0x6e7c20*/
  if ( (this->ptr_4) != 11 ) /*0x6e7c25*/
    return 0; /*0x6e7c61*/
  ptr_0 = (int)this->ptr_0; /*0x6e7c27*/
  (*((unsigned short *)&(v3))) = ptr_0 % 1000; /*0x6e7c39*/
  (*(((unsigned short *)&(v3)) + 1)) = ptr_0 / 1000; /*0x6e7c54*/
  return ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj((int16_t *)&v3); /*0x6e7c60*/
}
// 0x006EE800
char ObjectClass::SelectTeamMembers(ScriptClass * aP1, int a3) {
  ObjectClass *v3; // edi
  int fallRate; // eax
  int v5; // edx
  int v6; // ecx
  unsigned char *v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // esi
  int v12; // edx
  unsigned char *v13; // edi
  int v14; // ecx
  int v15; // ebx
  int Capacity; // eax
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // esi
  int v21; // ebx
  int v22; // ebp
  int v23; // edi
  int v24; // eax
  int v25; // edi
  int v26; // eax
  void *v27; // eax
  unsigned int *v28; // esi
  int v29; // ebp
  unsigned int *v30; // ebx
  int v31; // edi
  char result; // al
  char v33; // [esp+13h] [ebp-39h]
  unsigned int *i; // [esp+18h] [ebp-34h] BYREF
  int16_t v36[2]; // [esp+1Ch] [ebp-30h] BYREF
  int16_t v37[2]; // [esp+20h] [ebp-2Ch] BYREF
  unsigned int v38[4]; // [esp+24h] [ebp-28h] BYREF
  VectorClass v39; // [esp+34h] [ebp-18h] BYREF
  int v40; // [esp+44h] [ebp-8h]
  int v41; // [esp+48h] [ebp-4h]

  v3 = this; /*0x6ee807*/
  v33 = 1; /*0x6ee809*/
  if ( this->nextObject ) /*0x6ee812*/
  {
    v28 = (unsigned int *)this->customSound_controller[1]; /*0x6eeaf6*/
    v29 = -1; /*0x6eeaf9*/
    v30 = v28; /*0x6eeafe*/
    if ( v28 ) /*0x6eeb00*/
    {
      do /*0x6eeb60*/
      {
        v31 = *(unsigned int *)((*(int (**)(unsigned int *))(this->isInLogic)(v28) + 1532); /*0x6eeb0c*/
        if ( *((unsigned char *)v28 + 144) /*0x6eeb52*/
          && v28[27]
          && (dword_A8E7AC || !*((unsigned char *)v28 + 129))
          && (*((unsigned char *)v28 + 1673) || (*(int (**)(unsigned int *))(this->visibilityFlags)(v28) == 2)
          && v31 > v29 )
        {
          v30 = v28; /*0x6eeb54*/
          v29 = v31; /*0x6eeb56*/
        }
        v28 = (unsigned int *)v28[374]; /*0x6eeb58*/
      }
      while ( v28 ); /*0x6eeb60*/
      v3 = this; /*0x6eeb62*/
    }
    if ( v30 && v30[43] != 2 && v30[45] != 2 ) /*0x6eeb7f*/
    {
      Team_Helper((ObjectClass *)v3->fallRate, (int)v3->nextObject); /*0x6eeb88*/
      v3->nextObject = 0; /*0x6eeb8d*/
    }
  }
  else
  {
    fallRate = this->fallRate; /*0x6ee81d*/
    v5 = 0; /*0x6ee820*/
    v6 = *(unsigned int *)(fallRate + 22060); /*0x6ee822*/
    if ( v6 <= 0 ) /*0x6ee82a*/
      goto LABEL_47; /*0x6ee82a*/
    v7 = (unsigned char *)(*(unsigned int *)(fallRate + 22048) + 4); /*0x6ee836*/
    do /*0x6ee843*/
    {
      if ( !*v7 ) /*0x6ee839*/
        ++v5; /*0x6ee83e*/
      v7 += 8; /*0x6ee83f*/
      --v6; /*0x6ee842*/
    }
    while ( v6 ); /*0x6ee843*/
    if ( v5 <= 0 ) /*0x6ee847*/
    {
  LABEL_47:
      v33 = 0; /*0x6eeaec*/
    }
    else
    {
      v8 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v5 - 1); /*0x6ee85c*/
      v9 = v3->fallRate; /*0x6ee861*/
      v10 = 0; /*0x6ee864*/
      v11 = *(unsigned int *)(v9 + 22060); /*0x6ee866*/
      if ( v11 <= 0 ) /*0x6ee86e*/
        goto LABEL_17; /*0x6ee86e*/
      v12 = *(unsigned int *)(v9 + 22048); /*0x6ee870*/
      v13 = (unsigned char *)(v12 + 4); /*0x6ee876*/
      while ( *v13 ) /*0x6ee87c*/
      {
  LABEL_13:
        ++v10; /*0x6ee883*/
    v13 += 8; /*0x6ee884*/
    if ( v10 >= v11 ) /*0x6ee889*/
      goto LABEL_16; /*0x6ee889*/
      }
      if ( v8 ) /*0x6ee880*/
      {
        --v8; /*0x6ee882*/
        goto LABEL_13; /*0x6ee882*/
      }
      this->nextObject = *(ObjectClass **)(v12 + 8 * v10); /*0x6ee894*/
      LABEL_16:
      v3 = this; /*0x6ee897*/
      LABEL_17:
      VectorClass::BuildingConstructor(&v39, 0, 0); /*0x6ee89b*/
        v14 = 0; /*0x6ee8ad*/
        v15 = 0; /*0x6ee8af*/
        /* X11: ptr_0 install elided (implicit via DynamicVectorClass virtuals 0x6ee8b1) */
      v41 = 10; /*0x6ee8bb*/
        v40 = 0; /*0x6ee8c3*/
        if ( stru_A8EB00.ptr_0[20] > 0 ) /*0x6ee8c7*/
      {
        Capacity = v39.Capacity; /*0x6ee8c9*/
        do /*0x6ee8d6*/
        {
          v17 = stru_A8EB00.ptr_0[17] + 4 * v15; /*0x6ee8d6*/
          if ( v3->nextObject == *(ObjectClass **)(*(unsigned int *)v17 + 540) ) /*0x6ee8e2*/
          {
            if ( v14 < Capacity ) /*0x6ee8e6*/
              goto LABEL_25; /*0x6ee8e6*/
            if ( !v39.IsAllocated && Capacity || v41 <= 0 ) /*0x6ee8fa*/
              goto LABEL_27; /*0x6ee8fa*/
            if ( (*((uint8_t (**)(VectorClass *, int, unsigned int))v39.ptr_0 + 2))( /*0x6ee909*/
                   &v39,
                   v41 + Capacity,
                   0) )
            {
  LABEL_25:
              v18 = v40++; /*0x6ee918*/
    *((unsigned int *)v39.Items + v18) = *(unsigned int *)v17; /*0x6ee921*/
            }
            Capacity = v39.Capacity; /*0x6ee924*/
          }
          LABEL_27:
          ++v15; /*0x6ee928*/
            v14 = v40; /*0x6ee931*/
        }
        while ( v15 < stru_A8EB00.ptr_0[20] ); /*0x6ee8d6*/
      }
        if ( v14 <= 0 ) /*0x6ee939*/
      {
        Team_Helper((ObjectClass *)v3->fallRate, (int)v3->nextObject); /*0x6eeab2*/
        v3->nextObject = 0; /*0x6eeab7*/
      }
        else
      {
        v19 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v14 - 1); /*0x6ee94e*/
        v20 = v3->customSound_controller[1]; /*0x6ee957*/
        v21 = -1; /*0x6ee95a*/
        v22 = v20; /*0x6ee95d*/
        for ( i = (unsigned int *)*((unsigned int *)v39.Items + v19); v20; v20 = *(unsigned int *)(v20 + 1496) ) /*0x6ee968*/
        {
            v23 = *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v20 + 132))(v20) + 1532); /*0x6ee974*/
            if ( *(unsigned char *)(v20 + 144) /*0x6ee9ba*/
            && *(unsigned int *)(v20 + 108)
            && (dword_A8E7AC || !*(unsigned char *)(v20 + 129))
            && (*(unsigned char *)(v20 + 1673) || (*(int (**)(int))(*(unsigned int *)v20 + 44))(v20) == 2)
            && v23 > v21 )
            {
              v22 = v20; /*0x6ee9bc*/
              v21 = v23; /*0x6ee9be*/
            }
        }
        v36[0] = 0; /*0x6ee9ce*/
        v36[1] = 0; /*0x6ee9d3*/
        v24 = i[39]; /*0x6ee9ec*/
        v25 = i[40]; /*0x6ee9ee*/
        v38[3] = i[41]; /*0x6ee9f4*/
        (*((unsigned short *)&(i))) = v24 / 256; /*0x6eea04*/
        (*(((unsigned short *)&(i)) + 1)) = v25 / 256; /*0x6eea21*/
        v26 = (*(int (**)(int))(*(unsigned int *)v22 + 132))(v22); /*0x6eea3d*/
        *(unsigned int *)v37 = *LayerClass::Pathfinding_Find( /*0x6eea67*/
                            (Type *)&DataGlobal_87F7E8,
                            (int)&i,
                            v38,
                            (int16_t *)&i,
                            *(unsigned int *)(v26 + 1660),
                            -1,
                            0,
                            0,
                            1,
                            1,
                            0,
                            0,
                            0,
                            1,
                            v36,
                            0,
                            0);
        if ( *(unsigned int *)v37 == g_BuildingLoadQueue_Array.ChargerBarrels[1] ) /*0x6eea6b*/
        {
          TeamClass::SelectMember((int)this, 0); /*0x6eeaa0*/
        }
        else
        {
          v27 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v37); /*0x6eea85*/
          TeamClass::SelectMember((int)this, (int)v27); /*0x6eea8f*/
        }
        v3 = this; /*0x6eeaa5*/
      }
        /* X11: ptr_0 install elided (implicit via VectorClass virtuals 0x6eeac2) */
      if ( v39.Items && v39.IsAllocated ) /*0x6eead8*/
        operator delete((void *)(v39.Items)); /*0x6eeadf*/
    }
  }
  TeamClass::UpdateMembers((TeamClass *)v3); /*0x6eeb96*/
  result = v33; /*0x6eeb9b*/
  if ( v33 ) /*0x6eeba1*/
    v3->needsRedraw = 0; /*0x6eeba3*/
  else
    v3->needsRedraw = 1; /*0x6eebb4*/
  return result; /*0x6eebaa*/
}
// 0x006EF110
char ObjectClass::DispatchTeamOrders(int a2, int a3) {

  ObjectClass *v3; // ebx
  int v4; // esi
  int v5; // ebp
  int v6; // eax
  int v7; // edi
  unsigned int *v8; // eax
  CellClass *v9; // eax
  int v10; // eax
  TechnoClass *v11; // esi
  int v12; // ebp
  int v13; // edi
  int v14; // ebx
  unsigned int *v15; // edi
  TechnoClass *v16; // ebp
  char v18; // [esp+19h] [ebp-19h]
  int v20; // [esp+1Eh] [ebp-14h] BYREF
  unsigned char v21[12]; // [esp+26h] [ebp-Ch] BYREF
  char v22; // [esp+36h] [ebp+4h]

  v3 = this; /*0x6ef114*/
  v4 = this->customSound_controller[1]; /*0x6ef118*/
  v18 = 1; /*0x6ef122*/
  if ( !v4 ) /*0x6ef127*/
    goto LABEL_28; /*0x6ef127*/
  do /*0x6ef2ab*/
  {
    v5 = v4->q5D8; /*0x6ef12d*/
    if ( v4 && v4->isAliveFlag ) /*0x6ef13b*/
    {
      if ( v4->health && (dword_A8E7AC || !v4->inLimbo) && !v4->u8_689 ) /*0x6ef16b*/
      {
        v6 = *SessionClass::GetEntry((SessionClass *)v3->owningHouseIndex, &v20); /*0x6ef182*/
        if ( v6 == 54 || v6 == 53 ) /*0x6ef18c*/
          v7 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5920); /*0x6ef1a2*/
        else
          v7 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5916); /*0x6ef194*/
        if ( ObjectClass::DistanceTo((ObjectClass *)v4, (int)v3->attachedTag) <= v7 ) /*0x6ef1b5*/
        {
          v4->u8_689 = 1; /*0x6ef1ed*/
        }
        else if ( !v4->u32_5A4 ) /*0x6ef1b7*/
        {
          (*(void (**)(int, int, unsigned int))(*(unsigned int *)v4 + 488))(v4, 2, 0); /*0x6ef1c9*/
          (*(void (**)(int, unsigned int))(*(unsigned int *)v4 + 968))(v4, 0); /*0x6ef1d5*/
          (*(void (**)(int, TagClass *, int))(*(unsigned int *)v4 + 1152))(v4, v3->attachedTag, 1); /*0x6ef1e5*/
        }
      }
      if ( v4->isAliveFlag /*0x6ef238*/
        && v4->health
        && (dword_A8E7AC || !v4->inLimbo)
        && (v4->u8_689 || (*(int (**)(int))(*&v4->q_B0))(v4) == 2) )
      {
        if ( *&v4->u32_118 ) /*0x6ef23a*/
        {
          v18 = 0; /*0x6ef24d*/
          v8 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v4 + 72))(v4, v21); /*0x6ef252*/
          v9 = ((Coord *)&DataGlobal_87F7E8)->To_Cell( v8); /*0x6ef25b*/
          if ( !Cell::IsBridge((Cell *)v9) && (*(int (**)(int))(*&v4->q_610))(v4) != 16 ) /*0x6ef278*/
          {
            (*(void (**)(int, unsigned int, int))(*(unsigned int *)v4 + 1152))(v4, 0, 1); /*0x6ef282*/
            (*(void (**)(int, unsigned int))(*(unsigned int *)v4 + 968))(v4, 0); /*0x6ef28e*/
            (*(void (**)(int, int, unsigned int))(*(unsigned int *)v4 + 488))(v4, 16, 0); /*0x6ef29c*/
            v18 = 0; /*0x6ef2a2*/
          }
        }
      }
    }
    v4 = v5; /*0x6ef2a9*/
  }
  while ( v5 ); /*0x6ef2ab*/
  (v10) = ((v10) & ~0xFF) | ((v18) & 0xFF); /*0x6ef2b1*/
  if ( v18 ) /*0x6ef2b7*/
  {
LABEL_28:
    v11 = (TechnoClass *)v3->customSound_controller[1]; /*0x6ef2c4*/
  v12 = 0; /*0x6ef2c7*/
  v10 = *(unsigned int *)(v3->occupant + 228); /*0x6ef2c9*/
  v13 = a2->ptr_4; /*0x6ef2cf*/
  v20 = v13; /*0x6ef2d2*/
  if ( v10->u32_9C <= 0 ) /*0x6ef2de*/
{
LABEL_34:
      v22 = 0; /*0x6ef323*/
}
  else
{
      v14 = 168; /*0x6ef2e0*/
      while ( 1 ) /*0x6ef2e5*/
      {
        v15 = *(unsigned int **)(v14 + v10); /*0x6ef2e5*/
        if ( (*(int (**)(unsigned int *))(*v15 + 44))(v15) == 3 ) /*0x6ef2f2*/
        {
          v10 = v15[376]; /*0x6ef2f4*/
          if ( v10 > 0 ) /*0x6ef2fc*/
            break; /*0x6ef2fc*/
        }
        ++v12; /*0x6ef306*/
        v14 += 8; /*0x6ef307*/
        v10 = *(unsigned int *)(this->occupant + 228); /*0x6ef30d*/
        if ( v12 >= v10->u32_9C ) /*0x6ef319*/
        {
          v13 = v20; /*0x6ef31b*/
          v3 = this; /*0x6ef31f*/
          goto LABEL_34; /*0x6ef31f*/
        }
      }
      v13 = v20; /*0x6ef3e7*/
      v3 = this; /*0x6ef3eb*/
      v22 = 1; /*0x6ef3ef*/
}
  if ( v11 ) /*0x6ef32a*/
{
      while ( 1 ) /*0x6ef332*/
      {
        v16 = *(TechnoClass **)&v11[1].missionQueued; /*0x6ef332*/
        v10 = (*((int (**)(TechnoClass *))v11->RadioClass + 33))(v11); /*0x6ef33a*/
        if ( !v10->u32_5E0 ) /*0x6ef340*/
          break; /*0x6ef340*/
        if ( v22 ) /*0x6ef354*/
        {
          v10 = (*((int (**)(TechnoClass *))v11->RadioClass + 11))(v11); /*0x6ef35a*/
          if ( v10 != 2 ) /*0x6ef360*/
            break; /*0x6ef360*/
        }
        v10 = (*((int (**)(TechnoClass *))v11->RadioClass + 33))(v11); /*0x6ef36a*/
        if ( v10->u32_5E0 > 0 ) /*0x6ef378*/
        {
          (v10) = ((v10) & ~0xFF) | ((*(unsigned char *)(v3->occupant + 244)) & 0xFF); /*0x6ef381*/
          if ( (unsigned char)v10 ) /*0x6ef389*/
          {
            TeamClass::LiberateMember_Start((int *)v3, (int)v11, 0xFFFFFFFF, 0); /*0x6ef392*/
            (*((void (**)(TechnoClass *, unsigned int))v11->RadioClass + 242))(v11, 0); /*0x6ef39d*/
            (*((void (**)(TechnoClass *, AbstractClass *, int))v11->RadioClass + 288))(v11, v11->focus, 1); /*0x6ef3b0*/
            (*((void (**)(TechnoClass *, int, unsigned int))v11->RadioClass + 122))(v11, 2, 0); /*0x6ef3be*/
            if ( (*((unsigned __int8 (**)(TechnoClass *))v11->RadioClass + 128))(v11) ) /*0x6ef3c8*/
              (*((void (**)(TechnoClass *))v11->RadioClass + 123))(v11); /*0x6ef3d6*/
            LOBYTE(v10) = TechnoClass::SetFocus(v11, 0); /*0x6ef3e0*/
            goto LABEL_51; /*0x6ef3e5*/
          }
          if ( v13 == 3 || v13 == 2 ) /*0x6ef401*/
            goto LABEL_50; /*0x6ef401*/
        }
        LABEL_51:
        v11 = v16; /*0x6ef435*/
          if ( !v16 ) /*0x6ef439*/
            goto LABEL_52; /*0x6ef439*/
      }
      if ( v13 != 1 && v13 != 3 ) /*0x6ef40d*/
        goto LABEL_51; /*0x6ef40d*/
      LABEL_50:
      TeamClass::LiberateMember_Start((int *)v3, (int)v11, 0xFFFFFFFF, 0); /*0x6ef40f*/
        (*((void (**)(TechnoClass *, unsigned int))v11->RadioClass + 242))(v11, 0); /*0x6ef421*/
        LOBYTE(v10) = (*((int (**)(TechnoClass *, unsigned int, int))v11->RadioClass + 288))(v11, 0, 1); /*0x6ef42f*/
        goto LABEL_51; /*0x6ef42f*/
}
LABEL_52:
    v3->needsRedraw = 1; /*0x6ef43f*/
  }
  return v10; /*0x6ef446*/

}
// 0x006EF470
char ObjectClass::Team_Create() {
  int v2; // edi
  int v3; // eax
  int i; // ebx
  int *v5; // esi

  v2 = 0; /*0x6ef476*/
  v3 = *(unsigned int *)(this->occupant + 228); /*0x6ef47b*/
  if ( v3->location <= 0 ) /*0x6ef489*/
    return 0; /*0x6ef4be*/
  for ( i = 168; ; i += 8 ) /*0x6ef48b*/
  {
    v5 = *(int **)(i + v3); /*0x6ef490*/
    if ( (*(int (**)(int *))(*v5 + 44))(v5) == 3 && v5[376] > 0 ) /*0x6ef4a7*/
      break; /*0x6ef4a7*/
    ++v2; /*0x6ef4ac*/
    v3 = *(unsigned int *)(this->occupant + 228); /*0x6ef4b0*/
    if ( v2 >= v3->location ) /*0x6ef4bc*/
      return 0; /*0x6ef4bc*/
  }
  return 1; /*0x6ef4be*/
}
// 0x006FD800
int ObjectClass::SpreadRadiationAreaEffect(InfantryClass * aP1) {
  int *v2; // eax
  int result; // eax
  int v4; // ecx
  CellClass *v5; // eax
  int *Coords; // eax
  int v7; // esi
  int v8; // eax
  char *v9; // esi
  int v10; // edi
  int v11; // ebx
  int16_t v12; // [esp+1Ch] [ebp-50h] BYREF
  char v13; // [esp+1Eh] [ebp-4Eh]
  int v14; // [esp+20h] [ebp-4Ch]
  int v15; // [esp+24h] [ebp-48h]
  int v16; // [esp+28h] [ebp-44h]
  int v17; // [esp+2Ch] [ebp-40h]
  int16_t v18[2]; // [esp+30h] [ebp-3Ch] BYREF
  int v19; // [esp+34h] [ebp-38h]
  int16_t v20; // [esp+38h] [ebp-34h]
  int16_t v21; // [esp+3Ah] [ebp-32h]
  int16_t v22; // [esp+40h] [ebp-2Ch]
  int16_t v23; // [esp+42h] [ebp-2Ah]
  int v24; // [esp+48h] [ebp-24h] BYREF
  int v25; // [esp+4Ch] [ebp-20h]
  int v26; // [esp+50h] [ebp-1Ch]
  int v27; // [esp+54h] [ebp-18h] BYREF
  int v28; // [esp+58h] [ebp-14h]
  int v29; // [esp+5Ch] [ebp-10h]
  int v30[3]; // [esp+60h] [ebp-Ch] BYREF

  v2 = (int *)(*((int (**)(ObjectClass *, int *))this->ptr_0 + 18))(this, &v24); /*0x6fd813*/
  v17 = 0; /*0x6fd818*/
  v27 = *v2; /*0x6fd822*/
  v28 = v2[1]; /*0x6fd829*/
  v29 = v2[2]; /*0x6fd830*/
  v22 = v27 / 256; /*0x6fd840*/
  v23 = v28 / 256; /*0x6fd853*/
  v12 = *(unsigned short *)(*(unsigned int *)&g_RulesClass_Instance + 6192); /*0x6fd865*/
  result = -1; /*0x6fd86d*/
  v13 = *(unsigned char *)(*(unsigned int *)&g_RulesClass_Instance + 6194); /*0x6fd870*/
  v15 = -1; /*0x6fd874*/
  do /*0x6fd9e6*/
  {
    v4 = -1; /*0x6fd878*/
    v14 = -1; /*0x6fd87b*/
    do /*0x6fd9d8*/
    {
      if ( result || v4 ) /*0x6fd885*/
      {
        v20 = aP1 * result; /*0x6fd89a*/
        v21 = v4 * aP1; /*0x6fd89f*/
        (*((unsigned short *)&(v16))) = v22 + aP1 * result; /*0x6fd8ae*/
        (*(((unsigned short *)&(v16)) + 1)) = v4 * aP1 + v23; /*0x6fd8bd*/
        *(unsigned int *)v18 = v16; /*0x6fd8ca*/
        v5 = (CellClass *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v18); /*0x6fd8d5*/
        Coords = CellClass::GetCoords(v5, v30); /*0x6fd8dc*/
        v24 = *Coords; /*0x6fd8e8*/
        v25 = Coords->ptr_4; /*0x6fd8f6*/
        v26 = Coords->ptr_8; /*0x6fd8fd*/
        v7 = Random::Range(&Randomizer_Global, -128, 128); /*0x6fd912*/
        v8 = Random::Range(&Randomizer_Global, -128, 128); /*0x6fd914*/
        v24 += v7; /*0x6fd925*/
        v25 += v8; /*0x6fd92e*/
        v9 = (char *)RadBeam::Create((RadBeam *)2); /*0x6fd93b*/
        TechnoClass::drawSelectionBox(v9, (int)&v12); /*0x6fd940*/
        v10 = Random::Range(&Randomizer_Global, 5, 20); /*0x6fd95f*/
        v19 = Random::Range(&Randomizer_Global, 100, 500); /*0x6fd96f*/
        v11 = Random::Range(&Randomizer_Global, 0, 20); /*0x6fd97f*/
        TechnoClass::drawPipScale((TechnoClass *)v9, &v27); /*0x6fd981*/
        TechnoClass::drawSpawnPips((TechnoClass *)v9, &v24); /*0x6fd98d*/
        TechnoClass::drawAmmoPips((TechnoClass *)v9, v10); /*0x6fd995*/
        TechnoClass::drawTiberiumPips( /*0x6fd9a6*/
          (TechnoClass *)v9,
          COERCE_UNSIGNED_INT64((double)v19),
          (*(((unsigned int *)&(COERCE_UNSIGNED_INT64((double)v19))) + 1)));
        SpreadRadiationAreaEffect_Helper((ObjectClass *)v9, 0, 0); /*0x6fd9b1*/
        SpreadRadiationAreaEffect_Helper_659530((ObjectClass *)v9, v11); /*0x6fd9b9*/
        if ( v17 <= v10 ) /*0x6fd9c2*/
          v17 = v10; /*0x6fd9c4*/
        v4 = v14; /*0x6fd9c8*/
        result = v15; /*0x6fd9cc*/
      }
      v14 = ++v4; /*0x6fd9d4*/
    }
    while ( v4 <= 1 ); /*0x6fd9d8*/
    v15 = ++result; /*0x6fd9e2*/
  }
  while ( result <= 1 ); /*0x6fd9e6*/
  return result; /*0x6fd9ec*/
}
// 0x00721D10
char ObjectClass::SmallFunc_721D10() {
  int KeyCount; // ebp
  int v3; // ebx
  char *StringByIndex; // esi
  int v5; // eax
  unsigned int *v6; // eax
  TiberiumClass *v7; // eax
  char Destination[24]; // [esp+Ch] [ebp-18h] BYREF

  KeyCount = INIClass::GetKeyCount(this->ptr_0, g_INI_Key_Tiberiums); /*0x721d22*/
  v3 = 0; /*0x721d24*/
  if ( KeyCount <= 0 ) /*0x721d28*/
    return 1; /*0x721db3*/
  do /*0x721da5*/
  {
           StringByIndex = (char *)INIClass::GetStringByIndex(this->ptr_0, g_INI_Key_Tiberiums, v3); /*0x721d3c*/
           if ( INIClass::GetString( /*0x721d59*/
           this,
           g_INI_Key_Tiberiums,
           (uint8_t *)StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           24) > 0 )
           {
      v5 = atoi(StringByIndex); /*0x721d5c*/
      if ( v5 >= g_BuildingLoadQueue_Array.BarrelAnimData[0] ) /*0x721d6c*/
      {
        v7 = (TiberiumClass *)operator new(0x128u); /*0x721d7e*/
        if ( v7 ) /*0x721d88*/
          v6 = TiberiumClass::TiberiumClass(v7, Destination); /*0x721d91*/
        else
          v6 = 0; /*0x721d98*/
      }
      else
      {
        v6 = *(unsigned int **)(g_BuildingLoadQueue_Array.TurretAnimData[2] + 4 * v5); /*0x721d74*/
      }
      v6->LoadFromINI_17(this); /*0x721d9f*/
           }
           ++v3; /*0x721da2*/
  }
  while ( v3 < KeyCount ); /*0x721da5*/
  return 1; /*0x721da8*/
}
// 0x00730990
char ObjectClass::SidebarHasAvailableUnit() {
  int v1; // ebx
  int v2; // edi
  int v4; // esi
  int v5; // ecx
  char v6; // al

  v1 = dword_A8EC88; /*0x730991*/
  v2 = 0; /*0x73099a*/
  if ( dword_A8EC88 <= 0 ) /*0x7309a0*/
    return 1; /*0x7309f4*/
  while ( 1 )
  {
    v4 = *((unsigned int *)dword_A8EC7C + v2); /*0x7309a7*/
    if ( v4 && !*(unsigned char *)(v4 + 129) )
    {
      v5 = *(unsigned int *)(v4 + 540); /*0x7309bd*/
      v6 = dword_A8B238[0] ? House::IsHumanPlayer((void *)v5) : *(unsigned char *)(v5 + 493);
      if ( v6 && !*(unsigned char *)(v4 + 131) && *(char **)(v4 + 532) == this - 1 ) /*0x7309ed*/
        break; /*0x7309ed*/
    }
    if ( ++v2 >= v1 ) /*0x7309f2*/
      return 1; /*0x7309f2*/
  }
  return 0; /*0x7309f4*/
}
// 0x00730A10
int ObjectClass::SidebarCountAvailableUnits() {
  int v1; // ebx
  int v2; // ebp
  int v3; // edi
  int v4; // esi
  int v5; // ecx
  char IsHumanPlayer; // al

  v1 = dword_A8EC88; /*0x730a12*/
  v2 = 0; /*0x730a1a*/
  v3 = 0; /*0x730a1c*/
  if ( dword_A8EC88 <= 0 ) /*0x730a24*/
    return 0; /*0x730a7a*/
  do /*0x730a70*/
  {
    v4 = *((unsigned int *)dword_A8EC7C + v3); /*0x730a2c*/
    if ( v4 && !*(unsigned char *)(v4 + 129) ) /*0x730a33*/
    {
      v5 = *(unsigned int *)(v4 + 540); /*0x730a42*/
      if ( dword_A8B238[0] ) /*0x730a4a*/
        IsHumanPlayer = House::IsHumanPlayer((void *)v5); /*0x730a54*/
      else
        IsHumanPlayer = *(unsigned char *)(v5 + 493); /*0x730a4c*/
      if ( IsHumanPlayer ) /*0x730a5b*/
      {
        if ( *(char **)(v4 + 532) == this - 1 ) /*0x730a6a*/
          ++v2; /*0x730a6c*/
      }
    }
    ++v3; /*0x730a6d*/
  }
  while ( v3 < v1 ); /*0x730a70*/
  return v2; /*0x730a75*/
}
} // namespace gamemd
// 0x007310D0
void ObjectClass::SidebarClearReferences() {
  int v1; // ebx
  int i; // edi
  int v4; // esi
  int v5; // ecx
  char IsHumanPlayer; // al

  v1 = dword_A8EC88; /*0x7310d1*/
  for ( i = 0; i < v1; ++i ) /*0x7310df*/
  {
    v4 = *((unsigned int *)dword_A8EC7C + i); /*0x7310e7*/
    if ( v4 ) /*0x7310ec*/
    {
      v5 = *(unsigned int *)(v4 + 540); /*0x7310f3*/
      if ( dword_A8B238[0] ) /*0x7310fb*/
        IsHumanPlayer = House::IsHumanPlayer((void *)v5); /*0x731105*/
      else
        IsHumanPlayer = *(unsigned char *)(v5 + 493); /*0x7310fd*/
      if ( IsHumanPlayer ) /*0x73110c*/
      {
        if ( *(char **)(v4 + 532) == this - 1 ) /*0x731119*/
          *(unsigned int *)(v4 + 532) = -1; /*0x73111b*/
      }
    }
  }
}
// 0x007342C0
char ObjectClass::SelectAllOfType_Helper() {
  if ( this ) /*0x7342c2*/
    return this->abstractFlags & 1; /*0x7342ca*/
  else
    return 0; /*0x7342c4*/
}
// 0x007436E0
int ObjectClass::ReadFootINI() {
  int result; // eax
  int v2; // esi
  int v3; // edi
  int v4; // eax
  int v6; // eax
  int v7; // eax
  unsigned int *Value; // eax
  int v9; // edi
  const char *v10; // ebx
  const char *v11; // ebp
  int v12; // eax
  int v13; // eax
  char *v14; // eax
  int v15; // eax
  double HealthRatio; // st7
  int v17; // eax
  int v19; // [esp-38h] [ebp-E0h]
  int v20; // [esp-34h] [ebp-DCh]
  const char *v21; // [esp-30h] [ebp-D8h]
  const char *v22; // [esp-2Ch] [ebp-D4h]
  int v24; // [esp-24h] [ebp-CCh]
  int v25; // [esp-24h] [ebp-CCh]
  int v26; // [esp-20h] [ebp-C8h]
  int v27; // [esp-20h] [ebp-C8h]
  int v28; // [esp-1Ch] [ebp-C4h]
  int v29; // [esp-18h] [ebp-C0h]
  int v30; // [esp-18h] [ebp-C0h]
  int v31; // [esp-14h] [ebp-BCh]
  int v32; // [esp-14h] [ebp-BCh]
  int v33; // [esp+0h] [ebp-A8h]
  char *v34; // [esp+4h] [ebp-A4h]
  int i; // [esp+8h] [ebp-A0h]
  int v37; // [esp+10h] [ebp-98h] BYREF
  unsigned char v38[4]; // [esp+18h] [ebp-90h] BYREF
  char Buffer[4]; // [esp+1Ch] [ebp-8Ch] BYREF
  unsigned char v40[8]; // [esp+20h] [ebp-88h] BYREF
  char Source[128]; // [esp+28h] [ebp-80h] BYREF

  INIClass::ClearSection((int)this, (int)aUnits, 0); /*0x7436f2*/
  result = 0; /*0x7436fd*/
  for ( i = 0; result < dword_8B4118; i = result ) /*0x743705*/
  {
    v2 = *((unsigned int *)dword_8B410C + result); /*0x743715*/
    if ( v2 && !v2->inLimbo && v2->isAliveFlag ) /*0x74372e*/
    {
      sprintf(Buffer, "%d", result); /*0x743747*/
      v3 = v2->WasOnline; /*0x74374c*/
      if ( v3 && (v4 = 0, dword_8B4118 > 0) ) /*0x743763*/
      {
        dword_8B410C = dword_8B410C; /*0x743765*/
        while ( *dword_8B410C != v3 ) /*0x74376d*/
        {
          ++v4; /*0x74376f*/
          ++dword_8B410C; /*0x743770*/
          if ( v4 >= dword_8B4118 ) /*0x743775*/
            goto LABEL_10; /*0x743775*/
        }
        v33 = v4; /*0x743796*/
      }
      else
      {
  LABEL_10:
        v33 = -1; /*0x743777*/
      }
      v6 = v2->attachedTag; /*0x74377f*/
      if ( v6 && (v7 = *(unsigned int *)(v6 + 36)) != 0 ) /*0x74378b*/
        v34 = (char *)(v7 + 36); /*0x743790*/
      else
        v34 = g_INI_Key_None; /*0x74379c*/
      Value = ProgressTimer::GetValue(&v2->primaryFacing, &v37); /*0x7437af*/
      v31 = v2->isRecruitableByEnemy_d; /*0x7437d0*/
      v29 = v2->isRecruitableByAlly_d; /*0x7437df*/
      v26 = v2->onBridge; /*0x7437eb*/
      v24 = v2->displayProductionTo; /*0x7437ee*/
      v9 = (uint8_t)((unsigned int)((*Value >> 7) + 1) >> 1); /*0x7437f5*/
      v10 = (const char *)(*(unsigned int *)(v2 + 1732) + 36); /*0x7437fb*/
      v11 = (const char *)(v2->owner + 90100); /*0x7437fe*/
      FootClass::GetField(&v2->initialOwner); /*0x743804*/
      v13 = (*(int (**)(int, char *, int))(v2->targetingTimer_d)(v2, v34, v12); /*0x743813*/
      v14 = FromNameIndex(v13); /*0x74381b*/
      v15 = (*(int (**)(int, unsigned char *, int, char *, int, int, int, int, int))(v2->airstrikeTintTimer)( /*0x74382b*/
              v2,
              v40,
              v9,
              v14,
              v24,
              v26,
              v33,
              v29,
              v31);
      v18 = *(int16_t *)(*(int (**)(int, unsigned char *, unsigned int))(v2->airstrikeTintTimer)( /*0x743848*/
                          v2,
                          v38,
                          *(int16_t *)(v15 + 2));
      HealthRatio = BuildingClass::GetHealthRatio((int *)v2); /*0x74384b*/
      v17 = Math::RoundToInt(HealthRatio * 256.0); /*0x743856*/
      sprintf( /*0x743868*/
        Source,
        "%s,%s,%d,%d,%d,%d,%s,%s,%d,%d,%d,%d,%d,%d",
        v11,
        v10,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v25,
        v27,
        v28,
        v30,
        v32);
      INIClass::SetString(this, (uint8_t *)aUnits, Buffer, Source); /*0x743884*/
      result = i; /*0x743889*/
    }
    ++result; /*0x743893*/
  }
  return result; /*0x7438a4*/
}
// 0x0074EA70
char ObjectClass::LoadVeinholeMonsters() {
  int i; // edi
  int v3; // ecx
  size_t v4; // edi
  int (__stdcall **ptr_0)(ObjectClass *, int *, int, unsigned int); // eax
  VeinholeMonsterClass *v7; // edi
  int VeinholeMonsterClass_field_0x14; // ebp
  int (__stdcall **v9)(ObjectClass *, int, size_t, unsigned int); // eax
  int v10; // ebx
  int v11; // ebp
  int v12; // ebp
  int VeinholeMonsterClass_field_0x04; // edx
  int ptr_4; // ebp
  unsigned int *v15; // ebx
  int k; // eax
  unsigned int *v17; // edx
  unsigned char v18[5]; // [esp+97h] [ebp-1Dh] BYREF
  int j; // [esp+9Ch] [ebp-18h]
  int v20; // [esp+A0h] [ebp-14h] BYREF
  int v21; // [esp+A4h] [ebp-10h] BYREF
  size_t v22; // [esp+A8h] [ebp-Ch]
  int v23; // [esp+ACh] [ebp-8h] BYREF
  int v24; // [esp+B0h] [ebp-4h]

  for ( i = stru_B1D290.uniqueId - 1; i >= 0; --i ) /*0x74ea85*/
  {
    v3 = *((unsigned int *)stru_B1D290.ptr_4 + i); /*0x74ea8d*/
    if ( v3 ) /*0x74ea92*/
      (*(void (**)(int, int))(*(unsigned int *)v3 + 32))(v3, 1); /*0x74ea98*/
  }
  stru_B1D290.uniqueId = 0; /*0x74eaa3*/
  if ( stru_B1D290.ptr_4 && (((unsigned char *)&(stru_B1D290.ptr_C))[1]) ) /*0x74eab5*/
  {
    operator delete((void *)(stru_B1D290.ptr_4)); /*0x74eab8*/
    stru_B1D290.ptr_4 = 0; /*0x74eac0*/
  }
  (((unsigned char *)&(stru_B1D290.ptr_C))[1]) = 0; /*0x74eac6*/
  stru_B1D290.ptr_8 = 0; /*0x74eacd*/
  v4 = Object::ComputeAllocationSize(); /*0x74eadc*/
  ptr_0 = (int (__stdcall **)(ObjectClass *, int *, int, unsigned int))this->ptr_0; /*0x74eade*/
  v22 = v4; /*0x74eae5*/
  if ( ptr_0[3](this, &v20, 4, 0) < 0 ) /*0x74eaee*/
    return 0; /*0x74eaf9*/
  stru_B1D290.customSound_controller[4] = operator new(v4); /*0x74eb03*/
  if ( (*((int (__stdcall **)(ObjectClass *, int, size_t, unsigned int))this->ptr_0 + 3))( /*0x74eb13*/
         this,
         stru_B1D290.customSound_controller[4],
         v4,
         0) < 0 )
    return 0; /*0x74eb1e*/
  for ( j = 0; j < v20; ++j ) /*0x74eb29*/
  {
    v7 = (VeinholeMonsterClass *)operator new(0x108u); /*0x74eb40*/
    if ( (*((int (__stdcall **)(ObjectClass *, int *, int, unsigned int))this->ptr_0 + 3))(this, &v21, 4, 0) < 0 ) /*0x74eb4e*/
      return 0; /*0x74eb4e*/
    SwizzleManagerClass::Here_I_Am((int)&SwizzleManagerClass_Instance, v21, (int)v7); /*0x74eb5b*/
    if ( (*((int (__stdcall **)(ObjectClass *, VeinholeMonsterClass *, int, unsigned int))this->ptr_0 + 3))(this, v7, 264, 0) < 0 ) /*0x74eb6f*/
      return 0; /*0x74eb6f*/
    if ( v7 ) /*0x74eb73*/
      VeinholeMonsterClass::Construct(v7, (int)v18); /*0x74eb7c*/
    VeinholeMonsterClass_field_0x14 = v7[4].VeinholeMonsterClass_field_0x14; /*0x74eb85*/
    v9 = (int (__stdcall **)(ObjectClass *, int, size_t, unsigned int))this->ptr_0; /*0x74eb91*/
    v10 = *v7->uniqueId.__pad_0; /*0x74eb93*/
    *(unsigned int *)&v18[1] = v7[4].VeinholeMonsterClass_field_0x04; /*0x74eb9e*/
    if ( v9[3](this, VeinholeMonsterClass_field_0x14, v22, 0) < 0 ) /*0x74eba7*/
      return 0; /*0x74eba7*/
    v7[4].VeinholeMonsterClass_field_0x14 = VeinholeMonsterClass_field_0x14; /*0x74ebad*/
    v11 = *(unsigned int *)&v18[1]; /*0x74ebb8*/
    if ( (*((int (__stdcall **)(ObjectClass *, unsigned int, int, unsigned int))this->ptr_0 + 3))( /*0x74ebd1*/
           this,
           *(unsigned int *)&v18[1],
           8 * *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 220),
           0) < 0 )
      return 0; /*0x74ebd1*/
    v7[4].VeinholeMonsterClass_field_0x04 = v11; /*0x74ebd9*/
    if ( (*((int (__stdcall **)(ObjectClass *, int, int, unsigned int))this->ptr_0 + 3))(this, v10, 4, 0) < 0 /*0x74ec00*/
      || (*((int (__stdcall **)(ObjectClass *, int, int, unsigned int))this->ptr_0 + 3))(this, v10 + 4, 4, 0) < 0 )
    {
      return 0; /*0x74ec00*/
    }
    v12 = 0; /*0x74ec09*/
    if ( *(int *)(v10 + 4) > 0 ) /*0x74ec0d*/
    {
      while ( (*((int (__stdcall **)(ObjectClass *, int *, int, unsigned int))this->ptr_0 + 3))(this, &v23, 4, 0) >= 0 ) /*0x74ec20*/
      {
        ++v12; /*0x74ec2e*/
        *(unsigned int *)(*(unsigned int *)(v10 + 8) + 4 * v12 - 4) = *(unsigned int *)&v18[1] + 8 * v23; /*0x74ec35*/
        if ( v12 >= *(unsigned int *)(v10 + 4) ) /*0x74ec3e*/
          goto LABEL_24; /*0x74ec3e*/
      }
      return 0; /*0x74ec20*/
    }
    LABEL_24:
    VeinholeMonsterClass_field_0x04 = v7->ptr_4; /*0x74ec40*/
      *v7->uniqueId.__pad_0 = v10; /*0x74ec47*/
      v24 = (*(int (__stdcall **)(int *))(VeinholeMonsterClass_field_0x04 + 16))(&v7->ptr_4); /*0x74ec50*/
      if ( (int)g_BuildingLoadQueue_Array.ptr_4 + 1 <= (int)g_BuildingLoadQueue_Array.ptr_8 ) /*0x74ec63*/
        goto LABEL_32; /*0x74ec63*/
      if ( g_BuildingLoadQueue_Array.ptr_8 ) /*0x74ec6b*/
    {
      ptr_4 = (int)g_BuildingLoadQueue_Array.ptr_8; /*0x74ec74*/
      if ( (int)g_BuildingLoadQueue_Array.ptr_8 < 0 ) /*0x74ec78*/
        continue; /*0x74ec78*/
    }
      else
    {
      ptr_4 = 10; /*0x74ec6d*/
    }
      *(unsigned int *)&v18[1] = (char *)g_BuildingLoadQueue_Array.ptr_8 + ptr_4; /*0x74ec80*/
      v15 = (unsigned int *)operator new(8 * ((int)g_BuildingLoadQueue_Array.ptr_8 + ptr_4)); /*0x74ec91*/
      if ( v15 ) /*0x74ec98*/
    {
      --*(unsigned int *)&v18[1]; /*0x74eca9*/
      for ( k = 0; k < (int)g_BuildingLoadQueue_Array.ptr_4; v15[2 * k - 1] = v17[1] ) /*0x74ecb1*/
      {
        v17 = (char *)g_BuildingLoadQueue_Array.ptr_0 + 8 * k++; /*0x74ecb9*/
        v15[2 * k - 2] = *v17; /*0x74ecbf*/
      }
      operator delete((void *)(g_BuildingLoadQueue_Array.ptr_0)); /*0x74ecda*/
      g_BuildingLoadQueue_Array.ptr_0 = v15; /*0x74ece9*/
      g_BuildingLoadQueue_Array.ptr_8 = (char *)g_BuildingLoadQueue_Array.ptr_8 + ptr_4; /*0x74ecef*/
      g_BuildingLoadQueue_Array.uniqueId = 0; /*0x74ecf4*/
      LABEL_32:
      *((unsigned int *)g_BuildingLoadQueue_Array.ptr_0 + 2 * (int)g_BuildingLoadQueue_Array.ptr_4) = v24; /*0x74ecfe*/
        *((unsigned int *)g_BuildingLoadQueue_Array.ptr_0 + 2 * (int)g_BuildingLoadQueue_Array.ptr_4 + 1) = v7; /*0x74ed1c*/
        (*((unsigned char *)&(g_BuildingLoadQueue_Array.ptr_C))) = 0; /*0x74ed26*/
        ++g_BuildingLoadQueue_Array.ptr_4; /*0x74ed2d*/
    }
  }
  return 1; /*0x74eaf0*/
}
// 0x0074F620
void ObjectClass::DestroyVeinholeMonster_Destroy() {
  int i; // eax

  for ( i = 0; i <= (int)this->ptr_0; *((unsigned int *)this->ptr_8 + i - 1) = 0 ) /*0x74f626*/
    ++i; /*0x74f62b*/
  __Release__NonReentrantLock_details_Concurrency__QAEXXZ_0((Concurrency::details::_NonReentrantLock *)this); /*0x74f639*/
}
// 0x0074F6F0
char ObjectClass::DestroyVeinholeMonster_Destroy_74F6F0(DynamicVector * aP1) {
  int uniqueId; // edx
  int v3; // eax
  int v4; // edx

  uniqueId = this->uniqueId; /*0x74f6f0*/
  v3 = aP1; /*0x74f6f3*/
  if ( aP1 >= uniqueId ) /*0x74f6f9*/
    return 0; /*0x74f71c*/
  v4 = uniqueId - 1; /*0x74f6fb*/
  this->uniqueId = v4; /*0x74f6fe*/
  if ( aP1 < v4 ) /*0x74f701*/
  {
    do /*0x74f714*/
    {
      ++v3; /*0x74f707*/
      *((unsigned int *)this->ptr_4 + v3 - 1) = *((unsigned int *)this->ptr_4 + v3); /*0x74f70b*/
    }
    while ( v3 < this->uniqueId ); /*0x74f714*/
  }
  return 1; /*0x74f719*/
}
// 0x00750060
char ObjectClass::Team_Create(char a2) {
  char result = a2; // al /*0x750060*/
  if ( a2 ) /*0x750066*/
    this->ptr_0 = (void *)-1098907648; /*0x750068*/
  else
    this->ptr_0 = 0; /*0x750071*/
  return result; /*0x75006e*/
}
// 0x007515C0
int ObjectClass::System_Get_7515C0() {
  int result; // eax
  ObjectClass **i; // esi

  result = 0; /*0x7515c6*/
  if ( g_VocPlayState <= 0 ) /*0x7515cb*/
    return -1; /*0x7515df*/
  for ( i = (ObjectClass **)g_VocAudioConfig; *i != this; ++i ) /*0x7515cd*/
  {
    if ( ++result >= g_VocPlayState ) /*0x7515dd*/
      return -1; /*0x7515dd*/
  }
  return result; /*0x7515e2*/
}
// 0x00756860
int ObjectClass::InitializeTileAudioOcclusion(int a2, void* a3) {
  int uniqueId; // edx
  int abstractFlags; // ecx
  int v6; // edi
  double v7; // st7
  int v8; // eax
  int v9; // eax
  double v10; // st7
  int v11; // eax
  int16_t v12; // ax
  double v13; // st7
  int16_t v14; // ax
  double v15; // st7
  int v16; // eax
  double v17; // st7
  int v18; // eax
  double v19; // st7
  int16_t v20; // bp
  int16_t v21; // ax
  double v22; // st7
  int16_t v23; // ax
  unsigned int *v24; // ecx
  float *v25; // ebx
  int result; // eax
  int v27; // edx
  int v28; // esi
  uint8_t v29; // dl
  int v30; // eax
  int v31; // ebp
  int v32; // eax
  int v33; // eax
  bool v34; // zf
  int v35; // ebp
  int v36; // ecx
  int v37; // [esp+10h] [ebp-68h]
  int v38; // [esp+14h] [ebp-64h]
  int v39; // [esp+14h] [ebp-64h]
  int v40; // [esp+18h] [ebp-60h]
  int v41; // [esp+18h] [ebp-60h]
  unsigned int *v42; // [esp+1Ch] [ebp-5Ch]
  int v43; // [esp+20h] [ebp-58h]
  int v44; // [esp+24h] [ebp-54h]
  int v45; // [esp+28h] [ebp-50h]
  int v46; // [esp+2Ch] [ebp-4Ch]
  int16_t v47; // [esp+30h] [ebp-48h]
  unsigned int v48[2]; // [esp+34h] [ebp-44h] BYREF
  unsigned int v49[3]; // [esp+3Ch] [ebp-3Ch] BYREF
  int v50; // [esp+48h] [ebp-30h]
  int v51; // [esp+50h] [ebp-28h]
  unsigned char v52[6]; // [esp+5Ch] [ebp-1Ch]
  unsigned short v53[3]; // [esp+62h] [ebp-16h]
  unsigned int v54[4]; // [esp+68h] [ebp-10h]
  float v55; // [esp+7Ch] [ebp+4h]
  int v56; // [esp+7Ch] [ebp+4h]
  float *v57; // [esp+80h] [ebp+8h]
  float *v58; // [esp+80h] [ebp+8h]

  uniqueId = this->uniqueId; /*0x756865*/
  abstractFlags = this->abstractFlags; /*0x75686d*/
  v6 = 0; /*0x756878*/
  v7 = a2->objectTypeFlags; /*0x75687a*/
  v8 = 3 * *(unsigned int *)(a2 + 4); /*0x75687d*/
  v51 = 0; /*0x756880*/
  v9 = 41 * (a2->ptr_8 + *(unsigned int *)(uniqueId + 4 * v8)); /*0x756897*/
  (*((unsigned char *)&(uniqueId))) = *(unsigned char *)(abstractFlags + 4 * v9 + 160); /*0x75689a*/
  v10 = (v7 + 128.0 - *a3) * 256.0; /*0x7568a1*/
  v11 = abstractFlags + 4 * v9; /*0x7568a7*/
  (*((unsigned char *)&(v44))) = *(unsigned char *)(v11 + 161); /*0x7568bb*/
  v50 = *(unsigned int *)(v11 + 4); /*0x7568c4*/
  v37 = (uint8_t)uniqueId; /*0x7568c8*/
  v12 = Math::RoundToInt(v10); /*0x7568cc*/
  v13 = a2->owningHouseIndex + 128.0; /*0x7568d4*/
  *(unsigned short *)v52 = v12; /*0x7568da*/
  v14 = Math::RoundToInt((v13 - a3[1]) * 256.0); /*0x7568e8*/
  v15 = (double)a2->q040; /*0x7568ed*/
  *(unsigned short *)&v52[2] = v14; /*0x7568f0*/
  (*((unsigned short *)&(v16))) = Math::RoundToInt(v15 + *a3); /*0x7568f7*/
  v17 = (double)a2->u32_44; /*0x7568fc*/
  a2->q040 = v16; /*0x7568ff*/
  (*((unsigned short *)&(v18))) = Math::RoundToInt(v17 + a3[1]); /*0x756905*/
  v19 = (double)v37; /*0x75690a*/
  v20 = v18; /*0x75690e*/
  a2->u32_44 = v18; /*0x756910*/
  v47 = v18; /*0x756913*/
  v53[0] = Math::RoundToInt(v19); /*0x75692a*/
  v55 = (float)(uint8_t)v44; /*0x756946*/
  (*((unsigned short *)&(v54[0]))) = Math::RoundToInt(v19); /*0x756965*/
  v21 = Math::RoundToInt(v19); /*0x756972*/
  v22 = a2->attachedTag - a2->owningHouseIndex; /*0x75697c*/
  v53[1] = v21; /*0x75697f*/
  v23 = Math::RoundToInt(v22 / v55 * 256.0); /*0x75698e*/
  v24 = a2->ambientSoundController; /*0x756993*/
  v25 = *(float **)v52; /*0x756996*/
  (*(((unsigned short *)&(v54[0])) + 1)) = v23; /*0x75699a*/
  v45 = a2->q040; /*0x7569a2*/
  result = *(unsigned int *)&v52[2]; /*0x7569a6*/
  v42 = v24; /*0x7569ac*/
  v56 = *(unsigned int *)&v52[2]; /*0x7569b0*/
  if ( v24 ) /*0x7569b4*/
  {
    if ( (unsigned char)v44 ) /*0x7569c3*/
    {
      v44 = (uint8_t)v44; /*0x7569c9*/
      while ( 1 ) /*0x7569d7*/
      {
        v27 = v37; /*0x7569d7*/
        v40 = v6; /*0x7569db*/
        v57 = v25; /*0x7569e1*/
        v38 = result; /*0x7569e8*/
        if ( v37 ) /*0x7569ec*/
        {
          v43 = v37; /*0x7569f2*/
          do /*0x756aaa*/
          {
            if ( *(unsigned int *)(v50 + 4 * v6) != -1 ) /*0x7569fe*/
            {
              v28 = result & 0xFF00 | ((uint16_t)v25 >> 8); /*0x756a1b*/
              v29 = (((unsigned char *)&(result))[1]); /*0x756a25*/
              v30 = *v24; /*0x756a27*/
              v31 = (uint16_t)(v29 + v20); /*0x756a35*/
              v48[0] = (uint16_t)((((unsigned char *)&(v25))[1]) + (unsigned short)v45); /*0x756a3c*/
              v48[1] = v31; /*0x756a40*/
              v46 = (*(int (**)(unsigned int *, unsigned int *))(v30 + 40))(v24, v48); /*0x756a4b*/
              v32 = *v42; /*0x756a54*/
              v49[0] = (uint16_t)((((unsigned char *)&(v25))[1]) + (unsigned short)v45) + 1; /*0x756a57*/
              v49[1] = v31; /*0x756a5b*/
              v33 = (*(int (**)(unsigned int *, unsigned int *))(v32 + 40))(v42, v49); /*0x756a5f*/
              v20 = v47; /*0x756a66*/
              v6 = v51; /*0x756a6a*/
              v34 = v33 == 0; /*0x756a73*/
              result = v56; /*0x756a75*/
              g_VoxelRenderBuffer[v28] = v46 == 0; /*0x756a79*/
              v24 = v42; /*0x756a7f*/
              g_VoxelDepthBuffer[v28] = v34; /*0x756a86*/
            }
            result += *(unsigned int *)&v53[1]; /*0x756a94*/
            (*((unsigned short *)&(v25))) = v53[0] + (unsigned short)v25; /*0x756a9a*/
            ++v6; /*0x756a9c*/
            v34 = v43 == 1; /*0x756a9d*/
            v56 = result; /*0x756a9e*/
            v51 = v6; /*0x756aa2*/
            --v43; /*0x756aa6*/
          }
          while ( !v34 ); /*0x756aaa*/
          v27 = v37; /*0x756ab0*/
        }
        v25 = (float *)((char *)v57 + v54[0]); /*0x756abf*/
        v56 = *(unsigned int *)((char *)v54 + 2) + v38; /*0x756ad2*/
        v51 = v27 + v40; /*0x756ad6*/
        result = --v44; /*0x756ade*/
        if ( !v44 ) /*0x756ae3*/
          break; /*0x756ae3*/
        result = *(unsigned int *)((char *)v54 + 2) + v38; /*0x7569cf*/
        v6 = v51; /*0x7569d3*/
      }
    }
  }
  else if ( (unsigned char)v44 ) /*0x756afc*/
  {
    v44 = (uint8_t)v44; /*0x756b02*/
    while ( 1 ) /*0x756b14*/
    {
      v41 = v6; /*0x756b14*/
      v58 = v25; /*0x756b1a*/
      v39 = result; /*0x756b21*/
      if ( v37 ) /*0x756b25*/
      {
        v35 = v37; /*0x756b27*/
        do /*0x756b64*/
        {
          if ( *(unsigned int *)(v50 + 4 * v6) != -1 ) /*0x756b31*/
          {
            v36 = result & 0xFF00 | ((uint16_t)v25 >> 8); /*0x756b46*/
            g_VoxelRenderBuffer[v36] = 1; /*0x756b4a*/
            g_VoxelDepthBuffer[v36] = 1; /*0x756b50*/
          }
          (*((unsigned short *)&(v25))) = v53[0] + (unsigned short)v25; /*0x756b5e*/
          (*((unsigned short *)&(result))) = v53[1] + result; /*0x756b60*/
          ++v6; /*0x756b62*/
          --v35; /*0x756b63*/
        }
        while ( v35 ); /*0x756b64*/
      }
      v25 = (float *)((char *)v58 + v54[0]); /*0x756b75*/
      result = v44 - 1; /*0x756b8c*/
      v34 = v44 == 1; /*0x756b8c*/
      v51 = v37 + v41; /*0x756b8d*/
      --v44; /*0x756b91*/
      if ( v34 ) /*0x756b95*/
        break; /*0x756b95*/
      result = *(unsigned int *)((char *)v54 + 2) + v39; /*0x756b08*/
      v6 = v51; /*0x756b0c*/
    }
  }
  return result; /*0x756ae9*/
}
// 0x007639A0
char ObjectClass::WaypointClass_Find(void* a2) {
  int v2; // edi
  int v3; // ebp
  int v4; // ebx
  BombClass *attachedBomb; // eax
  int *p_owningHouseIndex; // esi
  ObjectClass *nextObject; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int *v13; // ecx

  v2 = a2[2]; /*0x7639c2*/
  v3 = ((int16_t)(a2[1] / 256) << 8) + 128; /*0x7639e0*/
  v4 = ((int16_t)(*a2 / 256) << 8) + 128; /*0x7639ee*/
  if ( this->occupant == -1 ) /*0x7639f4*/
  {
    attachedBomb = this->attachedBomb; /*0x7639f6*/
    p_owningHouseIndex = &this->owningHouseIndex; /*0x7639f9*/
    nextObject = this->nextObject; /*0x7639fc*/
    if ( (int)attachedBomb < (int)nextObject /*0x763a1e*/
      || (*((unsigned char *)p_owningHouseIndex + 13) || !nextObject)
      && (v8 = p_owningHouseIndex[5], v8 > 0)
      && (*(uint8_t (**)(int *, int, unsigned int))(*p_owningHouseIndex + 8))(
           p_owningHouseIndex,
           (int)nextObject + v8,
           0) )
    {
      v9 = p_owningHouseIndex[4]; /*0x763a25*/
      v10 = v9 + 1; /*0x763a28*/
      v11 = 3 * v9; /*0x763a2b*/
      v12 = p_owningHouseIndex[1]; /*0x763a2e*/
      p_owningHouseIndex[4] = v10; /*0x763a31*/
      v13 = (int *)(v12 + 4 * v11); /*0x763a34*/
      *v13 = v4; /*0x763a37*/
      v13[1] = v3; /*0x763a3a*/
      v13[2] = v2; /*0x763a3d*/
    }
  }
  return 1; /*0x763a40*/
}
} // namespace gamemd
// 0x00766060
int ObjectClass::FindWDTTerritoryClass_Find_Find() {
  unsigned int *ptr_8 = this->ptr_C; // eax /*0x766060*/
  if ( ptr_8 ) /*0x766065*/
    return ptr_8->ptr_8; /*0x766067*/
  else
    return 0; /*0x76606b*/
}
// 0x007665D0
void* ObjectClass::TerritorySelectWDT_Create(void* a2) {

  int v2; // esi
  int v3; // ebx
  int v4; // edi
  char *v5; // edi
  const wchar_t **v6; // eax
  int v7; // edi
  char *v8; // edi
  const wchar_t **v9; // eax
  void *v11; // [esp+20h] [ebp-20h] BYREF
  char *v12; // [esp+24h] [ebp-1Ch]
  void *v13; // [esp+28h] [ebp-18h] BYREF
  void **v14; // [esp+2Ch] [ebp-14h] BYREF
  unsigned int *v15; // [esp+30h] [ebp-10h]
  void **v16; // [esp+34h] [ebp-Ch] BYREF
  int *v17; // [esp+38h] [ebp-8h]
  int v18; // [esp+3Ch] [ebp-4h]

  v2 = 0; /*0x7665db*/
  v12 = this; /*0x7665e0*/
  if ( !dword_B72770 ) /*0x7665e4*/
    InitWDTGameOptions(); /*0x7665e6*/
  v3 = 6; /*0x7665ef*/
  unknown_libname_74(&v11); /*0x7665f4*/
  v17 = &stru_B72760; /*0x7665f9*/
  v18 = 0; /*0x766601*/
  v16 = &g_var_0f5bcb; /*0x766605*/
  do /*0x7666b0*/
  {
    if ( !((unsigned __int8 (*)(void ***))v16[1])(&v16) ) /*0x76661a*/
      break; /*0x76661f*/
    v4 = v17[1] + 8 * v18; /*0x766634*/
    ComPtr::Constructor(&v14); /*0x766637*/
    v14 = &g_var_5878c0; /*0x76663c*/
    ComPtr::Set(&v14, *(unsigned int *)(v4 + 4)); /*0x766648*/
    if ( (v2 & v15[2]) == 0 ) /*0x766654*/
    {
      v5 = v12 + 8; /*0x76665c*/
      if ( !(*(int (**)(unsigned int *, char *))(*v15 + 12))(v15, v12 + 8) ) /*0x766660*/
      {
                                 v6 = (const wchar_t **)(*(int (**)(unsigned int *, void **, char *, void **))(*v15 + 16))( /*0x766678*/
                                 v15,
                                 &v13,
                                 v5,
                                 &v11);
                                 WideString::Reassign_Alt(&v11, v6); /*0x766680*/
                                 ((DeleteAndZero *)&v13)->Alt(); /*0x766689*/
                                 --v3; /*0x766692*/
                                 v2 |= v15[2]; /*0x766693*/
      }
    }
    v14 = &g_var_5878c0; /*0x76669a*/
    ComPtr::Release(&v14); /*0x76669e*/
    ((void (*)(void ***))v16[2])(&v16); /*0x7666ab*/
  }
  while ( v3 ); /*0x7666b0*/
  v18 = 0; /*0x7666b8*/
  while ( v3 ) /*0x7666c0*/
  {
    if ( !((unsigned __int8 (*)(void ***))v16[1])(&v16) ) /*0x7666ce*/
      break; /*0x7666d3*/
    v7 = v17[1] + 8 * v18; /*0x7666e8*/
    ComPtr::Constructor(&v14); /*0x7666eb*/
    v14 = &g_var_5878c0; /*0x7666f0*/
    ComPtr::Set(&v14, *(unsigned int *)(v7 + 4)); /*0x7666fc*/
    if ( (v2 & v15[2]) == 0 ) /*0x766708*/
    {
      v8 = v12 + 8; /*0x766710*/
      if ( (*(int (**)(unsigned int *, char *))(*v15 + 12))(v15, v12 + 8) != 2 ) /*0x76671a*/
      {
                                 v9 = (const wchar_t **)(*(int (**)(unsigned int *, void **, char *, void **))(*v15 + 16))( /*0x76672d*/
                                 v15,
                                 &v13,
                                 v8,
                                 &v11);
                                 WideString::Reassign_Alt(&v11, v9); /*0x766735*/
                                 ((DeleteAndZero *)&v13)->Alt(); /*0x76673e*/
                                 --v3; /*0x766747*/
                                 v2 |= v15[2]; /*0x766748*/
      }
    }
    v14 = &g_var_5878c0; /*0x76674f*/
    ComPtr::Release(&v14); /*0x766753*/
    ((void (*)(void ***))v16[2])(&v16); /*0x766760*/
  }
  WideString::AssignFromPtr(a2, (const wchar_t **)&v11); /*0x766776*/
  v16 = &g_var_0f5bcb; /*0x76677f*/
  ((DeleteAndZero *)&v11)->Alt(); /*0x766787*/
  return a2; /*0x76678e*/

}
// 0x007692F0
int ObjectClass::ConstructWDTSelection_Create_76EEB0_Create(void* aP1, void* a2) {
  int result; // eax
  int referenceCount; // ecx

  result = this->nextArrayIndex; /*0x7692f3*/
  if ( result ) /*0x7692f8*/
  {
    TerritorySelectWDT_Delete((ObjectClass *)a2, 0, 1, 0); /*0x769304*/
    result = MSEngine::ProcessEvents((MSEngine *)aP1, this->nextArrayIndex, 300000); /*0x769316*/
  }
  referenceCount = this->referenceCount; /*0x76931b*/
  if ( referenceCount ) /*0x769321*/
    return (*(int (**)(int, int))(this->NeedsSaveOrLink)(referenceCount, 1); /*0x769327*/
  return result; /*0x76931e*/
}
// 0x0076CA60
void ObjectClass::ConstructWDTSelection_Create_76CA60(Selection_WorldDominationTour * aP1, char ** a2) {

  TechnoClass *v3; // esi
  char **v4; // ebp
  INIClass *v5; // edi
  int Key; // eax
  int v7; // ecx
  bool v8; // bl
  int v9; // eax
  ObjectClass *v10; // edi
  int isTurretRotateSoundPlaying; // ecx
  int v12; // eax
  int *v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // edx
  char *v17; // [esp+10h] [ebp-14h] BYREF
  String v18; // [esp+14h] [ebp-10h] BYREF
  TechnoClass *v19; // [esp+1Ch] [ebp-8h]
  int v20; // [esp+20h] [ebp-4h]

  v3 = this; /*0x76ca66*/
  v19 = this; /*0x76ca6d*/
  unknown_libname_73(&v17); /*0x76ca71*/
  v4 = a2; /*0x76ca76*/
  v5 = (INIClass *)aP1; /*0x76ca7a*/
  Key = INIClass::FindKey(aP1, a2); /*0x76ca81*/
  v7 = 0; /*0x76ca86*/
  v20 = Key; /*0x76ca88*/
  *(unsigned int *)&v18.ptr_4 = 0; /*0x76ca8e*/
  if ( Key > 0 ) /*0x76ca92*/
  {
    while ( 1 ) /*0x76caab*/
    {
      INIClass::GetStringByIndexEx(v5, (char **)&a2, v4, v7); /*0x76caab*/
      if ( (unsigned __int8)String::NotEquals((String *)&a2, 0) ) /*0x76cab6*/
      {
        ((String *)&v18)->Assign( 0); /*0x76cac9*/
        v8 = INIClass::ReadString(v5, v4, (char **)&a2, (char **)&v18, (int)&v17) > 0; /*0x76caeb*/
        DeleteAndZero((ObjectClass *)&v18); /*0x76caee*/
        if ( v8 ) /*0x76caf5*/
        {
          if ( (unsigned __int8)String::Equals_Alt((String *)&a2, g_INI_Key_Theme) ) /*0x76cb04*/
          {
            String::Reassign(&v3->q4B0, (const char **)&v17); /*0x76cbcf*/
            DeleteAndZero((ObjectClass *)&a2); /*0x76cbd8*/
            break; /*0x76cbd8*/
          }
          v9 = __2_YAPAXI_Z(0x10u); /*0x76cb13*/
          if ( v9 ) /*0x76cb1d*/
            v10 = (ObjectClass *)Audio::ParseVolume(v9, (const char **)&a2, (String *)&v17); /*0x76cb30*/
          else
            v10 = 0; /*0x76cb34*/
          if ( (unsigned __int8)String::Equals_Alt((String *)v10, 0) ) /*0x76cb3a*/
          {
            if ( v10 ) /*0x76cb45*/
            {
              j_DeleteAndZero(v10); /*0x76cb49*/
              __3_YAXPAX_Z(v10); /*0x76cb4f*/
            }
          }
          else if ( v10 ) /*0x76cb5b*/
          {
            isTurretRotateSoundPlaying = v3->isTurretRotateSoundPlaying; /*0x76cb5d*/
            v12 = v3->gattlingSoundController[0]; /*0x76cb63*/
            v13 = &v3->turretRotateSoundController[3]; /*0x76cb69*/
            if ( v12 < isTurretRotateSoundPlaying /*0x76cb8e*/
              || (*((unsigned char *)v13 + 13) || !isTurretRotateSoundPlaying)
              && (v14 = v13[5], v14 > 0)
              && (*(unsigned __int8 (**)(int *, int, unsigned int))(*v13 + 8))(
                   v13,
                   isTurretRotateSoundPlaying + v14,
                   0) )
            {
              v15 = v13[4]; /*0x76cb95*/
              v16 = v13[1]; /*0x76cb98*/
              v13[4] = v15 + 1; /*0x76cb9e*/
              *(unsigned int *)(v16 + 4 * v15) = v10; /*0x76cba1*/
            }
          }
        }
      }
      DeleteAndZero((ObjectClass *)&a2); /*0x76cba8*/
      v7 = ++*(unsigned int *)&v18.ptr_4; /*0x76cbb5*/
      if ( *(int *)&v18.ptr_4 >= v20 ) /*0x76cbbc*/
        break; /*0x76cbbc*/
      v5 = (INIClass *)aP1; /*0x76ca9a*/
      v3 = v19; /*0x76ca9e*/
    }
  }
  DeleteAndZero((ObjectClass *)&v17); /*0x76cbdd*/

}
// 0x0076FEB0
void ObjectClass::TerritorySelectWDT_Process(int a2, void* aP2) {
  int owningHouseIndex; // ecx
  int *v5; // eax
  int v6[4]; // [esp+8h] [ebp-20h] BYREF
  unsigned char v7[16]; // [esp+18h] [ebp-10h] BYREF

  owningHouseIndex = this->owningHouseIndex; /*0x76feb6*/
  if ( owningHouseIndex ) /*0x76febb*/
  {
    (*(void (**)(int, int))(*(unsigned int *)owningHouseIndex + 4))(owningHouseIndex, a2); /*0x76fec5*/
    v5 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)this->owningHouseIndex + 24))( /*0x76fed2*/
                  this->owningHouseIndex,
                  v7);
    v6[0] = *v5; /*0x76fedb*/
    v6[1] = v5[1]; /*0x76fee2*/
    v6[2] = v5[2]; /*0x76fee9*/
    v6[3] = v5[3]; /*0x76fef7*/
    Team::ReleaseAll((Team *)aP2, (int)v6); /*0x76fefb*/
    DSurface::Flip2(); /*0x76ff02*/
    MSEngine::ProcessEvents((MSEngine *)aP2, this->owningHouseIndex, 300000); /*0x76ff12*/
  }
}
// 0x00771800
void* ObjectClass::ConstructWDTSelection_Create() {
  int v2; // eax
  unsigned int *v3; // esi

  v2 = operator new(0x20u); /*0x771807*/
  v3 = (unsigned int *)v2; /*0x77180c*/
  if ( !v2 ) /*0x771815*/
    return 0; /*0x77183f*/
  *(unsigned int *)(v2 + 4) = 0; /*0x77181a*/
  *(unsigned int *)(v2 + 8) = 0; /*0x77181d*/
  *(unsigned char *)(v2 + 12) = 0; /*0x771820*/
  *(unsigned int *)(v2 + 16) = TimerGetTicks(); /*0x771828*/
  v3[6] = 0; /*0x77182b*/
  v3[7] = this; /*0x77182e*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7F7354) */  /*0x771831*/
  return v3; /*0x771839*/
}
// 0x00776880
int ObjectClass::System_Read() {
  HWND ptr_8; // esi
  ULONG_PTR WindowContextHelpId; // eax

  ptr_8 = (HWND)this->ptr_C; /*0x776881*/
  WindowContextHelpId = GetWindowContextHelpId(ptr_8); /*0x776885*/
  return WinHelpA(ptr_8, szHelp, 8u, WindowContextHelpId); /*0x77689a*/
}
// 0x007768A0
int ObjectClass::System_Read_7768A0(HWND hWndMain) {
  ULONG_PTR dwData[4]; // [esp+4h] [ebp-10h] BYREF

  dwData[2] = 0; /*0x7768b3*/
  dwData[3] = 0; /*0x7768b7*/
  dwData[0] = GetWindowLongA((HWND)hWndMain, -12); /*0x7768c2*/
  dwData[1] = GetWindowContextHelpId((HWND)hWndMain); /*0x7768cc*/
  return WinHelpA((HWND)hWndMain, szHelp, 0xAu, (ULONG_PTR)dwData); /*0x7768e3*/
}
// 0x00778710
void* ObjectClass::LoadAccountInfoWOL() {
  int v1; // edi
  int Int; // esi
  int v3; // ebp
  uint8_t *v4; // eax
  char *v5; // eax
  char *v6; // eax
  ReferenceCounted *v7; // eax
  void *AccountInfoWOL_Load; // esi
  ComPtr *abstractFlags; // edi
  ObjectClass v11; // [esp+10h] [ebp-B0h] BYREF

  v11.abstractFlags = (int)this; /*0x778718*/
  unknown_libname_73(&v11.ptr_8); /*0x778722*/
  v1 = -2; /*0x778727*/
  Int = 0; /*0x778732*/
  v3 = -2; /*0x778734*/
  unknown_libname_73(&v11.ptr_4); /*0x778736*/
  unknown_libname_74(&v11.ptr_C); /*0x77873f*/
  unknown_libname_74(&v11.uniqueId); /*0x778748*/
  BufferIOFile::Constructor((BufferIOFile *)&v11.customSound_controller[2], g_Str_File_wolinfoMD_ini); /*0x778756*/
  if ( !(uint8_t)File::IsReady((BufferIOFileClass *)&v11.customSound_controller[2], 0) ) /*0x778760*/
  {
    FileClass::Close((RawFileClass *)&v11.customSound_controller[2]); /*0x77876d*/
    CCFileClass::Close((BufferIOFileClass *)&v11.customSound_controller[2]); /*0x778776*/
    CCFileClass::Reopen((CDFileClass *)&v11.customSound_controller[2], g_Str_File_wolinfoMD_ini, (CHAR *)1); /*0x778786*/
  }
  if ( (uint8_t)File::IsReady((BufferIOFileClass *)&v11.customSound_controller[2], 0) ) /*0x778790*/
  {
    v11.referenceCount = 0; /*0x7787a1*/
    v11.NeedsSaveOrLink = 0; /*0x7787a5*/
    GenericNode::Constructor((GenericNode *)&v11.owningHouseIndex); /*0x7787a9*/
    GenericNode::Constructor((GenericNode *)&v11.attachedTag); /*0x7787b2*/
    /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E1B04) */  /*0x7787c0*/
    LinkedList::Prepend((LinkedList *)&v11.owningHouseIndex, (int)&v11.attachedTag); /*0x7787c8*/
    /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_a3009f) */  /*0x7787d1*/
    memset(&v11.ambientSoundController[1], 0, 13); /*0x7787df*/
    v11.customSound_controller[0] = 0; /*0x7787ef*/
    v11.customSound_controller[1] = 0; /*0x7787f3*/
    /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EA5F4) */  /*0x7787f7*/
    FileStraw::Open((FileStraw *)&v11.nextArrayIndex, (int)&v11.customSound_controller[2], 0); /*0x7787ff*/
    CCFileClass::Close((BufferIOFileClass *)&v11.customSound_controller[2]); /*0x778808*/
    v4 = (uint8_t *)String::GetOrEmpty_Alt((String *)&stru_B73590); /*0x778812*/
    if ( INIClass::BinarySearchSection((int)&v11.nextArrayIndex, v4) ) /*0x77881c*/
    {
      ((String *)&v11)->Assign( g_INI_Key_Server); /*0x778832*/
      INIClass::ReadString( /*0x77884f*/
        (INIClass *)&v11.nextArrayIndex,
        (char **)&stru_B73590,
        (char **)&v11,
        (char **)&v11.ptr_8,
        (int)&v11.ptr_8);
      DeleteAndZero(&v11); /*0x778858*/
      ((String *)&v11)->Assign( g_INI_Key_Locale); /*0x778866*/
      Int = INIClass::ReadInt((bool *)&v11.nextArrayIndex, (char **)&stru_B73590, (char **)&v11, 0); /*0x778883*/
      DeleteAndZero(&v11); /*0x778885*/
      ((String *)&v11)->Assign( g_INI_Key_Country); /*0x778893*/
      v1 = INIClass::ReadInt((bool *)&v11.nextArrayIndex, (char **)&stru_B73590, (char **)&v11, -2); /*0x7788b1*/
      DeleteAndZero(&v11); /*0x7788b3*/
      ((String *)&v11)->Assign( &g_INI_Key_Color); /*0x7788c1*/
      v3 = INIClass::ReadInt((bool *)&v11.nextArrayIndex, (char **)&stru_B73590, (char **)&v11, -2); /*0x7788df*/
      DeleteAndZero(&v11); /*0x7788e1*/
      ((String *)&v11)->Assign( g_INI_Key_UpdateTime); /*0x7788ef*/
      INIClass::ReadString( /*0x77890c*/
        (INIClass *)&v11.nextArrayIndex,
        (char **)&stru_B73590,
        (char **)&v11,
        (char **)&v11.ptr_4,
        (int)&v11.ptr_4);
      DeleteAndZero(&v11); /*0x778915*/
      LocalizeWOLDateString((char **)&v11.ptr_4, &v11.ptr_C); /*0x778922*/
      DeleteAndZero::Alt2((DeleteAndZero *)&v11.ptr_4); /*0x77892b*/
      ((String *)&v11)->Assign( g_INI_Key_UpdateDate); /*0x778939*/
      INIClass::ReadString( /*0x778956*/
        (INIClass *)&v11.nextArrayIndex,
        (char **)&stru_B73590,
        (char **)&v11,
        (char **)&v11.ptr_4,
        (int)&v11.ptr_4);
      DeleteAndZero(&v11); /*0x77895f*/
      v5 = String::GetOrEmpty_Alt((String *)&v11.ptr_4); /*0x778968*/
      v6 = CharToWideString(v5); /*0x77896f*/
      WideString::Reassign((void **)&v11.uniqueId, (wchar_t *)v6); /*0x778979*/
    }
    HashTable::DestroyHashTableINIClass((INIClass *)&v11.nextArrayIndex); /*0x778982*/
  }
  v7 = (ReferenceCounted *)operator new(0x44u); /*0x778989*/
  if ( v7 ) /*0x778993*/
    AccountInfoWOL_Load = LoadAccountInfoWOL_Load( /*0x7789bc*/
                            v7,
                            (const char **)&v11.ptr_8,
                            Int,
                            0,
                            0,
                            v1,
                            v3,
                            -1,
                            -1,
                            -1,
                            -1,
                            -1,
                            1,
                            (const wchar_t **)&v11.uniqueId,
                            (const wchar_t **)&v11.ptr_C);
  else
    AccountInfoWOL_Load = 0; /*0x7789c0*/
  abstractFlags = (ComPtr *)v11.abstractFlags; /*0x7789c2*/
  ComPtr::Constructor((ComPtr *)v11.abstractFlags); /*0x7789c8*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_var_5878c0) */  /*0x7789cf*/
  ComPtr::Set(abstractFlags, (int)AccountInfoWOL_Load); /*0x7789d6*/
  v11.customSound_controller[2] = (int)&off_7E1668; /*0x7789df*/
  ((BufferIOFileClass *)&v11.customSound_controller[2])->Dtor(); /*0x7789e7*/
  ((DeleteAndZero *)&v11.uniqueId)->Alt(); /*0x7789f0*/
  ((DeleteAndZero *)&v11.ptr_C)->Alt(); /*0x7789f9*/
  DeleteAndZero((ObjectClass *)&v11.ptr_4); /*0x778a02*/
  DeleteAndZero((ObjectClass *)&v11.ptr_8); /*0x778a0b*/
  return abstractFlags->__pad_000; /*0x778a12*/
}
} // namespace gamemd
// 0x00779C90
int ObjectClass::ReadSettingsWOL() {
  String v3; // [esp+8h] [ebp-A0h] BYREF
  INIClass v4; // [esp+10h] [ebp-98h] BYREF
  BufferIOFile v5; // [esp+50h] [ebp-58h] BYREF

  BufferIOFile::Constructor(&v5, g_Str_File_wolinfoMD_ini); /*0x779ca3*/
  if ( !(uint8_t)File::IsReady((BufferIOFileClass *)&v5, 0) ) /*0x779caf*/
  {
    FileClass::Close((RawFileClass *)&v5); /*0x779cbc*/
    CCFileClass::Close((BufferIOFileClass *)&v5); /*0x779cc5*/
    CCFileClass::Reopen((CDFileClass *)&v5, g_Str_File_wolinfoMD_ini, (CHAR *)1); /*0x779cd5*/
  }
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E1B0C) */  /*0x779ce3*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E1B0C) */  /*0x779ce7*/
  v4.headNode[0] = 0; /*0x779cef*/
  v4.headNode[1] = 0; /*0x779cf4*/
  v4.sectionHead[1] = 0; /*0x779cf8*/
  v4.sectionHead[2] = 0; /*0x779cfc*/
  *(unsigned int *)v4.needsSave = 0; /*0x779d00*/
  *(unsigned int *)&v4.unknown30 = 0; /*0x779d04*/
  LinkedList::Prepend((LinkedList *)v4.sectionHead, (int)&v4.sectionCount); /*0x779d10*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_a3009f) */  /*0x779d19*/
  memset(&v4.needsSave_flag, 0, 13); /*0x779d22*/
  v4.unknown38 = 0; /*0x779d32*/
  v4.INIClass_field_3C = 0; /*0x779d36*/
  /* X11: ptr_0 install elided (implicit via INIClass virtuals 0x779d3a) */
  if ( (uint8_t)File::IsReady((BufferIOFileClass *)&v5, 0) ) /*0x779d42*/
  {
    FileStraw::Open((FileStraw *)&v4, (int)&v5, 0); /*0x779d55*/
    ((String *)&v3)->Assign( g_INI_Key_AutoLogin); /*0x779d63*/
    ((String *)&v3.ptr_4)->Assign( g_INI_Key_DefaultPersona); /*0x779d71*/
    INIClass::SetStringOrEmpty(v4.ptr_0, (char **)&v3.ptr_4, (char **)&v3, (char **)this); /*0x779d85*/
    DeleteAndZero((ObjectClass *)&v3.ptr_4); /*0x779d8e*/
    DeleteAndZero((ObjectClass *)&v3); /*0x779d97*/
    INIClass::SaveToPipe(&v4, (int)&v5); /*0x779da5*/
  }
  HashTable::DestroyHashTableINIClass(&v4); /*0x779dae*/
  *(unsigned int *)v5.q000 = &off_7E1668; /*0x779db7*/
  return ((BufferIOFileClass *)&v5)->Dtor(); /*0x779dc4*/
}
} // namespace gamemd
// --- x93 csp-relocation defs (END) ---
