// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/E4Recv_6F03F0_e4.hpp"
#include "e4/classes/E4Recv_6FD800_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/TeamTypeClass_28_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/E4Recv_6E0080_e4.hpp"
#include "e4/classes/E4Recv_6E3380_e4.hpp"
#include "e4/classes/E4Recv_6E37F0_e4.hpp"
#include "e4/classes/E4Recv_6EFC70_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Super_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/E4Recv_6E0850_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/E4Recv_6E0270_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/E4Recv_6F2780_e4.hpp"
#include "e4/classes/IsometricTileTypeClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int Team_Helper_6F2780(int* p0);  // x4:signals@0x6f2780
} // namespace gamemd

// 0x6F0AB0
namespace gamemd {  // G42.18 ns repair
int AISelectTeamHouseClass(IUnknown * aP0, int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  int v6; // ebx
  char *v7; // ecx
  int v9; // ecx
  int WallPenetratorThreshold_high; // edx
  int *v11; // ecx
  int v12; // esi
  char *v13; // edi
  unsigned int *v15; // eax
  int v16; // eax
  int v17; // ebx
  char v18; // bp
  int v19; // esi
  int v20; // edi
  unsigned int v21; // edi
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int *v24; // esi
  int v25; // edi
  int v26; // esi
  int v27; // eax
  int v28; // eax
  int v29; // esi
  int v30; // eax
  unsigned int *v31; // ebx
  int v32; // esi
  char *v33; // edi
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  unsigned int *v37; // eax
  int i; // eax
  int v39; // ecx
  int v40; // esi
  bool v41; // zf
  void *v43; // eax
  int v44; // ecx
  int v45; // eax
  void ***v46; // ecx
  unsigned char (*)[4] v47;
  char v51; // [esp+13h] [ebp-4Dh]
  unsigned int v53[2]; // [esp+18h] [ebp-48h] BYREF
  int v54; // [esp+20h] [ebp-40h]
  void ***v55; // [esp+24h] [ebp-3Ch]
  void **v56; // [esp+28h] [ebp-38h] BYREF
  void *Block; // [esp+2Ch] [ebp-34h]
  int v58; // [esp+30h] [ebp-30h]
  char v59; // [esp+35h] [ebp-2Bh]
  int v60; // [esp+38h] [ebp-28h]
  int v61; // [esp+3Ch] [ebp-24h]
  void **v62; // [esp+44h] [ebp-1Ch] BYREF
  void *v63; // [esp+48h] [ebp-18h]
  char v64; // [esp+51h] [ebp-Fh]
  int v65; // [esp+54h] [ebp-Ch]
  int v66; // [esp+58h] [ebp-8h]
  int v67; // [esp+5Ch] [ebp-4h]

  v3 = (void **)(0);
  v55 = (void ***)(aP0); /*0x6f0ab9*/
  Team_Helper_6F2230(0, 0); /*0x6f0ac9*/
  v5 = *(unsigned int *)(a2 + 22016); /*0x6f0ace*/
  v56 = (void **)(&vt_TypeList); /*0x6f0ad4*/
  v54 = 0; /*0x6f0adf*/
  if ( v5 != -1 ) /*0x6f0ae3*/
    v54 = *&dword_A8022C->vtable1; /*0x6f0aee*/
  if ( Random::Range(&dword_A8B230->u32_218, 1, 100) <= *(unsigned int *)(a2 + 22108) && *(unsigned char *)(a2 + 498) ) /*0x6f0b12*/
  {
    v6 = 0; /*0x6f0b26*/
    if ( dword_8B40F8 > 0 ) /*0x6f0b2a*/
    {
      v7 = (char *)dword_8B40EC; /*0x6f0b2c*/
      dword_8B40F8 = dword_8B40F8; /*0x6f0b32*/
      do /*0x6f0b4d*/
      {
        if ( *(unsigned int *)(*(unsigned int *)v7 + 44) == a2 ) /*0x6f0b39*/
        {
          ++v6; /*0x6f0b3e*/
          if ( *(unsigned char *)(*(unsigned int *)(*(unsigned int *)v7 + 36) + 246) ) /*0x6f0b3f*/
            ++v3; /*0x6f0b48*/
        }
        v7 += 4; /*0x6f0b49*/
        --dword_8B40F8; /*0x6f0b4c*/
      }
      while ( dword_8B40F8 ); /*0x6f0b4d*/
    }
    v9 = 4 * *(unsigned int *)(a2 + 388); /*0x6f0b5b*/
    WallPenetratorThreshold_high = (*(dword_8871E0->DetailMinFrameRateNormal + 1)); /*0x6f0b5e*/
    (*((unsigned char *)&(v53[0]))) = 0; /*0x6f0b64*/
    if ( v6 < *(unsigned int *)(WallPenetratorThreshold_high + v9) || v3 < v6 / 2 ) /*0x6f0b77*/
    {
      if ( v3 > *(unsigned int *)((dword_8871E0->DetailMinFrameRateNormal) + v9) ) /*0x6f0bd4*/
        (*((unsigned char *)&(v53[0]))) = 1; /*0x6f0bd6*/
    }
    else
    {
      v11 = 0; /*0x6f0b79*/
      v12 = 0x7FFFFFFF; /*0x6f0b7b*/
      if ( dword_8B40F8 > 0 ) /*0x6f0b82*/
      {
        v13 = (char *)dword_8B40EC; /*0x6f0b84*/
        dword_8B40F8 = dword_8B40F8; /*0x6f0b8a*/
        do /*0x6f0bb6*/
        {
          v15 = *(unsigned int **)v13; /*0x6f0b90*/
          if ( *(unsigned int *)(*(unsigned int *)v13 + 44) == a2 && *(unsigned char *)(v15[9] + 246) && v15[20] < v12 ) /*0x6f0bac*/
          {
            v11 = *(int **)v13; /*0x6f0bae*/
            v12 = v15[20]; /*0x6f0bb0*/
          }
          v13 += 4; /*0x6f0bb2*/
          --dword_8B40F8; /*0x6f0bb5*/
        }
        while ( dword_8B40F8 ); /*0x6f0bb6*/
        if ( v11 ) /*0x6f0bba*/
        {
          v16 = *v11; /*0x6f0bbc*/
          --v6; /*0x6f0bc0*/
          (*((unsigned char *)&(v53[0]))) = 1; /*0x6f0bc1*/
          (*(void (**)(int *, int))(v16 + 32))(v11, 1); /*0x6f0bc6*/
        }
      }
    }
    if ( v6 < *(unsigned int *)((*(dword_8871E0->DetailMinFrameRateNormal + 1)) + 4 * *(unsigned int *)(a2 + 388)) ) /*0x6f0bf4*/
    {
      v17 = (void **)(0);
      Team_Helper_6F27F0(0, 0); /*0x6f0c02*/
      v62 = (void **)(&vt_DynamicVectorClassDiscreteDistributionClassDistributionObject); /*0x6f0c0b*/
      v66 = 10; /*0x6f0c13*/
      v65 = 0; /*0x6f0c1b*/
      v67 = 0; /*0x6f0c1f*/
      ((TeamTypeClass_28 *)(&v62))->ClearBuffer(); /*0x6f0c23*/
      v51 = 0; /*0x6f0c2e*/
      if ( dword_A8B210 > 0 ) /*0x6f0c34*/
      {
        v18 = v53[0]; /*0x6f0c3a*/
        while ( 1 ) /*0x6f0c44*/
        {
          v19 = *((unsigned int *)dword_A8B204 + v17); /*0x6f0c44*/
          if ( !v19 || TriggerClass::EvaluateCondition(v19, (unsigned int *)a2, v54, v18) != 1 ) /*0x6f0c5f*/
            goto LABEL_34; /*0x6f0c5f*/
          v20 = Math::RoundToInt(*(double *)(v19 + 184)); /*0x6f0c6c*/
          if ( v20 == 5000 ) /*0x6f0c78*/
            break; /*0x6f0c78*/
          if ( !v51 ) /*0x6f0c9a*/
            goto LABEL_33; /*0x6f0c9a*/
  LABEL_34:
          if ( ++v17 >= dword_A8B210 ) /*0x6f0cbe*/
            goto LABEL_35; /*0x6f0cbe*/
        }
        if ( !v51 ) /*0x6f0c7c*/
        {
          v51 = 1; /*0x6f0c86*/
          v67 = 0; /*0x6f0c8b*/
          ((void (__thiscall *)(void ***))v62[3])(&v62); /*0x6f0c93*/
        }
  LABEL_33:
        v53[0] = v19; /*0x6f0c9c*/
        v53[1] = v20; /*0x6f0ca9*/
        Team_Helper_6F25E0(v53); /*0x6f0cad*/
        v67 += v20; /*0x6f0cb2*/
        goto LABEL_34; /*0x6f0cb2*/
      }
  LABEL_35: v21 = (unsigned int *)(0);
      if ( !v67 ) /*0x6f0ccd*/
        goto LABEL_58; /*0x6f0ccd*/
      if ( !v65 ) /*0x6f0cd9*/
        goto LABEL_58; /*0x6f0cd9*/
      v22 = Random::Range(&dword_A8B230->u32_218, 1, v67); /*0x6f0cee*/
      v23 = 0; /*0x6f0cf3*/
      if ( v65 <= 0 ) /*0x6f0cfb*/
        goto LABEL_58; /*0x6f0cfb*/
      v24 = (char *)v63 + 4; /*0x6f0d05*/
      while ( 1 ) /*0x6f0d08*/
      {
        v21 += *v24; /*0x6f0d08*/
        if ( v21 >= v22 ) /*0x6f0d0c*/
          break; /*0x6f0d0c*/
        ++v23; /*0x6f0d0e*/
        v24 += 2; /*0x6f0d0f*/
        if ( v23 >= v65 ) /*0x6f0d14*/
          goto LABEL_58; /*0x6f0d14*/
      }
      v25 = *((unsigned int *)v63 + 2 * v23); /*0x6f0d1b*/
      if ( !v25 ) /*0x6f0d20*/
        goto LABEL_58; /*0x6f0d20*/
      v26 = *(unsigned int *)(v25 + 220); /*0x6f0d26*/
      v27 = v58; /*0x6f0d2c*/
      if ( v26 ) /*0x6f0d32*/
      {
        if ( v60 < v58 ) /*0x6f0d38*/
          goto LABEL_49; /*0x6f0d38*/
        if ( (v59 || !v58) && v61 > 0 ) /*0x6f0d4c*/
        {
          if ( !((uint8_t (__thiscall *)(void ***, int, unsigned int))v56[2])(&v56, v61 + v58, 0) ) /*0x6f0d60*/
          {
  LABEL_50:
            v27 = v58; /*0x6f0d74*/
            goto LABEL_51; /*0x6f0d74*/
          }
  LABEL_49:
          v28 = v60++; /*0x6f0d62*/
          *((unsigned int *)Block + v28) = v26; /*0x6f0d71*/
          goto LABEL_50; /*0x6f0d71*/
        }
      }
  LABEL_51:
      v29 = *(unsigned int *)(v25 + 224); /*0x6f0d78*/
      if ( v29 /*0x6f0da9*/
        && (v60 < v27
         || (v59 || !v27)
         && v61 > 0
         && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v56[2])(&v56, v61 + v27, 0)) )
      {
        v30 = v60++; /*0x6f0db4*/
        *((unsigned int *)Block + v30) = v29; /*0x6f0dbf*/
      }
  LABEL_58: v62 = (void **)(&vt_VectorClassDiscreteDistributionClassDistributionObject);
      if ( v63 && v64 ) /*0x6f0dd8*/
        Team_Helper_6F26E0(v63, 3); /*0x6f0de0*/
    }
  }
  v31 = (unsigned int *)(Block);
  v32 = 0; /*0x6f0dee*/
  if ( dword_8B40F8 <= 0 ) /*0x6f0df2*/
  {
  LABEL_71:
    for ( i = 0; i < v60; v31 = Block ) /*0x6f0e4b*/
    {
      v39 = (unsigned int *)(v31[i++]); /*0x6f0e4d*/
      *(unsigned char *)(v39 + 169) = 1; /*0x6f0e51*/
    }
    v40 = (unsigned int)((int)v55);
    v41 = v55 == &v56; /*0x6f0e6e*/
    v55[1] = 0; /*0x6f0e70*/
    v40->vtable3 = 0; /*0x6f0e73*/
    v40->vtable4 = 1; /*0x6f0e76*/
    v40->attachedTag = 0; /*0x6f0e7a*/
    *(unsigned int *)v40 = &vt_VectorClass; /*0x6f0e7e*/
    if ( !v41 ) /*0x6f0e84*/
    {
      VectorClass::ClearAndFree3(v40); /*0x6f0e8c*/
      v58 = v58; /*0x6f0e92*/
      v41 = v58 == 0; /*0x6f0e96*/
      v40->vtable3 = v58; /*0x6f0e98*/
      if ( v41 ) /*0x6f0e9b*/
      {
        v40->vtable2 = 0; /*0x6f0f70*/
        v40->attachedTag = 0; /*0x6f0f73*/
      }
      else
      {
        v43 = operator new(4 * v58); /*0x6f0ea5*/
        v40->vtable2 = v43; /*0x6f0eaf*/
        if ( v43 ) /*0x6f0eb2*/
        {
          v44 = v40->vtable3; /*0x6f0eb8*/
          v45 = 0; /*0x6f0ebb*/
          v40->attachedTag = 1; /*0x6f0ebf*/
          if ( v44 > 0 ) /*0x6f0ec3*/
          {
            do /*0x6f0edc*/
            {
              *(unsigned int *)(v40->vtable2 + 4 * v45) = *((unsigned int *)Block + v45); /*0x6f0ed3*/
              ++v45; /*0x6f0ed9*/
            }
            while ( v45 < v40->vtable3 ); /*0x6f0edc*/
          }
        }
      }
      v31 = (unsigned int *)(Block);
    }
    v61 = (unsigned int *)((unsigned int)(v61));
    v40->uniqueId = v60; /*0x6f0f85*/
    v40->abstractFlags = v61; /*0x6f0f88*/
    *(unsigned int *)v40 = &vt_TypeList; /*0x6f0f8b*/
    v56 = &vt_VectorClass; /*0x6f0f91*/
    if ( v31 ) /*0x6f0f99*/
    {
      if ( v59 ) /*0x6f0fa1*/
        operator delete((void *)(v31)); /*0x6f0fa4*/
    }
  }
  else
  {
    v33 = (char *)dword_8B40EC; /*0x6f0df4*/
    while ( 1 ) /*0x6f0dfa*/
    {
      v34 = *(unsigned int *)v33; /*0x6f0dfa*/
      if ( *(unsigned int *)(*(unsigned int *)v33 + 44) == a2 && (*(unsigned char *)(v34 + 123) || !*(unsigned char *)(v34 + 127)) ) /*0x6f0e0c*/
      {
        v35 = 0; /*0x6f0e17*/
        if ( v60 > 0 ) /*0x6f0e1b*/
          break; /*0x6f0e1b*/
      }
  LABEL_70:
      ++v32; /*0x6f0e36*/
      v33 += 4; /*0x6f0e3c*/
      if ( v32 >= dword_8B40F8 ) /*0x6f0e41*/
        goto LABEL_71; /*0x6f0e41*/
    }
    v36 = *(unsigned int *)(v34 + 36); /*0x6f0e1d*/
    v37 = Block; /*0x6f0e20*/
    while ( v36 != *v37 ) /*0x6f0e24*/
    {
      ++v35; /*0x6f0e2e*/
      ++v37; /*0x6f0e2f*/
      if ( v35 >= v60 ) /*0x6f0e34*/
        goto LABEL_70; /*0x6f0e34*/
    }
    v60 = 0; /*0x6f0ee7*/
    if ( Block && v59 ) /*0x6f0ef3*/
    {
      operator delete((void *)(Block)); /*0x6f0ef6*/
      Block = 0; /*0x6f0efe*/
    }
    v40 = (unsigned int)((int)v55);
    v46 = v55; /*0x6f0f0b*/
    v59 = 0; /*0x6f0f0d*/
    v58 = 0; /*0x6f0f12*/
    v55[1] = 0; /*0x6f0f16*/
    v46[2] = 0; /*0x6f0f19*/
    v46->vtable4 = 1; /*0x6f0f1c*/
    v46->u32_D = 0; /*0x6f0f20*/
    *v46 = &vt_VectorClass; /*0x6f0f24*/
    Team_Helper_6F2780(&v56); /*0x6f0f2a*/
    *(unsigned int *)v40 = &vt_TypeList; /*0x6f0f2f*/
    v56 = &vt_VectorClass; /*0x6f0f35*/
    v47 = (unsigned int)(Block); /*0x6f0f3d*/
    v61 = v61; /*0x6f0f45*/
    v41 = Block == 0; /*0x6f0f49*/
    v40->uniqueId = v60; /*0x6f0f4b*/
    v40->abstractFlags = v61; /*0x6f0f4e*/
    if ( !v41 && v59 ) /*0x6f0f59*/
    {
      operator delete((void *)(v47)); /*0x6f0f5c*/
      return v40; /*0x6f0f6d*/
    }
  }
  return v40; /*0x6f0f66*/
}
}  // G42.18 ns repair
// 0x6F8960
namespace gamemd {
AbstractClass * * SelectTechnoClassAreaTarget(IUnknown * aP0, IUnknown * aP1, IUnknown * a2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP3a, IUnknown * aP6, int * a7, int a9, void * a1, void * a3, void * a4, void * a5, void * a6, void * a8, void * a10)
{
  unsigned int *v11; // ebx
  int v12; // eax
  int v14; // edi
  int v15; // ebp
  TechnoClass *transporter; // ecx
  Object *owner; // ebx
  TechnoClass *mindControlledBy; // eax
  char v23; // bl
  unsigned int *v24; // [esp+0h] [ebp-10h]
  char v25; // [esp+1Ch] [ebp+Ch]

  *a8 = 0; /*0x6f8972*/
  *a9 = 0; /*0x6f8979*/
  v11 = ((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(a6); /*0x6f898d*/
  if ( a10 != -1 ) /*0x6f8992*/
  {
    v12 = (*((int (**)(TechnoClass *))a1->vfptr + 33))(a1); /*0x6f899a*/
    if ( ((MapClass *)((MapClass *)&DataGlobal_87F7E8))->GetTileIndex(a6, *(unsigned int *)(v12 + 1460), 1) != a10 ) /*0x6f89b4*/
      return 0; /*0x6f89bc*/
  }
  v14 = v11[58]; /*0x6f89bf*/
  v15 = 0; /*0x6f89c5*/
  if ( !v14 ) /*0x6f89c9*/
    v14 = v11[57]; /*0x6f89cb*/
  transporter = a1->transporter; /*0x6f89d1*/
  owner = 0; /*0x6f89d7*/
  v25 = 0; /*0x6f89db*/
  if ( transporter ) /*0x6f89e0*/
  {
    if ( *(unsigned char *)((*((int (**)(TechnoClass *))transporter->vfptr + 33))(transporter) + 1508) ) /*0x6f89ea*/
    {
      mindControlledBy = a1->transporter->mindControlledBy; /*0x6f89fa*/
      if ( mindControlledBy ) /*0x6f8a02*/
      {
        owner = (Object *)mindControlledBy->owner; /*0x6f8a04*/
        v25 = 1; /*0x6f8a0a*/
      }
    }
  }
  if ( !v14 ) /*0x6f8a11*/
    return 0; /*0x6f8b53*/
  while ( 1 ) /*0x6f8a17*/
  {
    if ( (TechnoClass *)v14 == a1 ) /*0x6f8a19*/
      goto LABEL_33; /*0x6f8a19*/
    if ( (v14->abstractFlags & 1) == 0 ) /*0x6f8a2e*/
    {
      v15 = 0; /*0x6f8a23*/
      goto LABEL_33; /*0x6f8a25*/
    }
    v15 = v14; /*0x6f8a34*/
    if ( TechnoClass::GetValue(a1, -1) >= 0 ) /*0x6f8a3d*/
      break; /*0x6f8a3d*/
    BuildingClass::GetHealthRatio((BuildingClass *)v14); /*0x6f8a41*/
    _ECX = *(unsigned int *)&g_RulesClass_Instance; /*0x6f8a46*/
    __asm /*0x6f8a4c*/
    {
      fcomp qword ptr [ecx+16F8h]
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 && (uint8_t)Object::IsAlliedWithObjectHouse((Object *)a1->owner, v14) ) /*0x6f8a64*/
      goto LABEL_34; /*0x6f8a6b*/
  LABEL_33:
    v14 = v14->vtable4; /*0x6f8b3e*/
    if ( !v14 ) /*0x6f8b43*/
      goto LABEL_34; /*0x6f8b43*/
  }
  if ( ((uint8_t)Object::IsAlliedWithObjectHouse((Object *)a1->owner, v14) || v25) /*0x6f8ac7*/
    && !*(unsigned char *)((*((int (**)(TechnoClass *))a1->vfptr + 33))(a1) + 1728)
    && !a1->isBerserk
    && (!v25 || !owner || !(uint8_t)Object::IsAlliedWithObjectHouse(owner, v14)) )
  {
    if ( (*((int (**)(TechnoClass *))a1->vfptr + 11))(a1) != 15 ) /*0x6f8ada*/
      goto LABEL_33; /*0x6f8ada*/
    if ( !(*((unsigned char *)&(a1[1].airstrikeTintTimer[0]))) ) /*0x6f8adc*/
    {
      if ( !*(unsigned char *)(a1[1].ironTintTimer[1] + 3779) ) /*0x6f8aec*/
        goto LABEL_33; /*0x6f8aec*/
      if ( a1->currentMission != 11 ) /*0x6f8afd*/
        goto LABEL_33; /*0x6f8afd*/
      BuildingClass::GetHealthRatio((BuildingClass *)v14); /*0x6f8b01*/
      _EDX = *(unsigned int *)&g_RulesClass_Instance; /*0x6f8b06*/
      __asm /*0x6f8b0c*/
      {
        fcomp qword ptr [edx+1708h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 /*0x6f8b3c*/
        || (*(int (**)(int))(*&v14->u32_B0))(v14) != 6
        || (*(int (**)(unsigned int, unsigned int))(*v14->BuildingTypeClass_520 + 132))(
             v14->BuildingTypeClass_520,
             v14->q21C) <= 0 )
      {
        goto LABEL_33; /*0x6f8b3c*/
      }
    }
  }
  LABEL_34:
  if ( !v15 ) /*0x6f8b4b*/
    return 0; /*0x6f8b4b*/
  v23 = 0; /*0x6f8b5b*/
  *a8 = v15; /*0x6f8b5d*/
  if ( !(uint8_t)Object::IsAlliedWithObjectHouse((Object *)a1->owner, v15)
    || TechnoClass::GetValue(a1, -1) < 0
    || !(uint8_t)((House *)((House *)a1->owner))->IsCurrentPlayer()
    && a1
    && (*((int (**)(TechnoClass *))a1->vfptr + 11))(a1) == 15
    && *(unsigned char *)(*((*((int (**)(TechnoClass *))a1->vfptr + 11))(a1) == 15
                  ? &a1[1].ironTintTimer[1]
                  : (int *)1728)
                + 3779)
    || *(unsigned char *)((*((int (**)(TechnoClass *))a1->vfptr + 33))(a1) + 1728)
    || a1->isBerserk
    || v25 )
  {
    return TechnoClass::EvaluateTarget( /*0x6f8c05*/
             a4,
             a3,
             a5,
             a7,
             v15,
             (int)a9,
             (int *)-1,
             (int)&g_BuildingLoadQueue_Array.VoxelCaches[3],
             v24);
  }
  return v23; /*0x6f89b6*/
}
}
// 0x6F03F0
namespace gamemd {
char E4Recv_6F03F0::sub_6F03F0()
{

  int *v1; // esi

  v1 = (int *)this->customSound_controller[1]; /*0x6f03f2*/
  if ( !v1 ) /*0x6f03f9*/
    return 0; /*0x6f0423*/
  while ( *(int *)((*(int (**)(int *))(*v1 + 132))(v1) + 1668) > 0 && v1[191] <= 0 ) /*0x6f0417*/
  {
    v1 = (int *)v1[374]; /*0x6f0419*/
    if ( !v1 ) /*0x6f0421*/
      return 0; /*0x6f0421*/
  }
  return 1; /*0x6f0425*/

}
} // namespace gamemd

// 0x6F0470
namespace gamemd {
void sub_6F0470()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6f047c*/
  dbl_B0E9D0 = Math::Sqrt(v0 + v0); /*0x6f048e*/
}
} // namespace gamemd

// 0x6F04A0
namespace gamemd {
void sub_6F04A0()
{
  dbl_B0EA20 = dbl_B0E9D0 / 60.0; /*0x6f04ac*/
}
} // namespace gamemd

// 0x6F04C0
namespace gamemd {
void sub_6F04C0()
{
  dbl_B0EA08 = 1.0 / dbl_B0EA20; /*0x6f04cc*/
}
} // namespace gamemd

// 0x6F04E0
namespace gamemd {
void sub_6F04E0()
{
  dbl_B0EA00 = 0.0174532925199433 * 45.0; /*0x6f04ec*/
}
} // namespace gamemd

// 0x6F0500
namespace gamemd {
void sub_6F0500()
{
  dbl_B0E9D8 = 0.0174532925199433 * 60.0; /*0x6f050c*/
}
} // namespace gamemd

// 0x6F0520
namespace gamemd {
void sub_6F0520()
{
  dbl_B0E9B0 = 0.0174532925199433 * 90.0; /*0x6f052c*/
}
} // namespace gamemd

// 0x6F0540
namespace gamemd {
long long sub_6F0540()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0E9B0 - dbl_B0E9D8); /*0x6f0552*/
  result = Math::RoundToInt(v0 * dbl_B0E9D0 * 0.5); /*0x6f0566*/
  dword_B0EA28 = result; /*0x6f056b*/
  return result; /*0x6f0570*/
}
} // namespace gamemd

// 0x6F0580
namespace gamemd {
void sub_6F0580()
{
  dbl_B0E9E0 = Math::ArcTan((double)dword_B0EA28 * 0.00390625); /*0x6f0597*/
}
} // namespace gamemd

// 0x6F05B0
namespace gamemd {
void sub_6F05B0()
{
  dbl_B0E9F8 = Math::ArcTan((double)(2 * dword_B0EA28) / dbl_B0E9D0); /*0x6f05d2*/
}
} // namespace gamemd

// 0x6F05E0
namespace gamemd {
long long sub_6F05E0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0EA28) + 0.5); /*0x6f05fb*/
  dword_B0EA1C = result; /*0x6f0600*/
  return result; /*0x6f0606*/
}
} // namespace gamemd

// 0x6F0610
namespace gamemd {
int sub_6F0610()
{
  dword_B0E9C8 = 0; /*0x6f0612*/
  return 0; /*0x6f061e*/
}
} // namespace gamemd

// 0x6F0620
namespace gamemd {
int sub_6F0620()
{
  dword_B0E9E8 = 0; /*0x6f0622*/
  dword_B0E9EC = 0; /*0x6f0627*/
  dword_B0E9F0 = 0; /*0x6f062c*/
  return 0; /*0x6f0631*/
}
} // namespace gamemd

// 0x6F0640
namespace gamemd {
int sub_6F0640()
{
  dword_B0EA18 = 0; /*0x6f0645*/
  dword_B0EA10 = 128; /*0x6f064f*/
  dword_B0EA14 = 128; /*0x6f0654*/
  return 128; /*0x6f0659*/
}
} // namespace gamemd

// 0x6F0660
namespace gamemd {
int sub_6F0660()
{
  dword_B0E9B8 = 0; /*0x6f0662*/
  dword_B0E9BC = 0; /*0x6f0667*/
  dword_B0E9C0 = 0; /*0x6f066c*/
  dword_B0E9C4 = 0; /*0x6f0671*/
  return 0; /*0x6f0676*/
}
} // namespace gamemd

// 0x6F25D0
namespace gamemd {
void nullsub_240()
{
  ; /*0x6f25d0*/
}
} // namespace gamemd

// 0x6F28A0
namespace gamemd {
void sub_6F28A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6f28ac*/
  dbl_B0EA58 = Math::Sqrt(v0 + v0); /*0x6f28be*/
}
} // namespace gamemd

// 0x6F28D0
namespace gamemd {
void sub_6F28D0()
{
  dbl_B0EB28 = dbl_B0EA58 / 60.0; /*0x6f28dc*/
}
} // namespace gamemd

// 0x6F28F0
namespace gamemd {
void sub_6F28F0()
{
  dbl_B0EB10 = 1.0 / dbl_B0EB28; /*0x6f28fc*/
}
} // namespace gamemd

// 0x6F2910
namespace gamemd {
void sub_6F2910()
{
  dbl_B0EB08 = 0.0174532925199433 * 45.0; /*0x6f291c*/
}
} // namespace gamemd

// 0x6F2930
namespace gamemd {
void sub_6F2930()
{
  dbl_B0EA60 = 0.0174532925199433 * 60.0; /*0x6f293c*/
}
} // namespace gamemd

// 0x6F2950
namespace gamemd {
void sub_6F2950()
{
  dbl_B0EA30 = 0.0174532925199433 * 90.0; /*0x6f295c*/
}
} // namespace gamemd

// 0x6F2970
namespace gamemd {
long long sub_6F2970()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0EA30 - dbl_B0EA60); /*0x6f2982*/
  result = Math::RoundToInt(v0 * dbl_B0EA58 * 0.5); /*0x6f2996*/
  dword_B0EB34 = result; /*0x6f299b*/
  return result; /*0x6f29a0*/
}
} // namespace gamemd

// 0x6F29B0
namespace gamemd {
void sub_6F29B0()
{
  dbl_B0EA68 = Math::ArcTan((double)dword_B0EB34 * 0.00390625); /*0x6f29c7*/
}
} // namespace gamemd

// 0x6F29E0
namespace gamemd {
void sub_6F29E0()
{
  dbl_B0EAA0 = Math::ArcTan((double)(2 * dword_B0EB34) / dbl_B0EA58); /*0x6f2a02*/
}
} // namespace gamemd

// 0x6F2A10
namespace gamemd {
long long sub_6F2A10()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0EB34) + 0.5); /*0x6f2a2b*/
  dword_B0EB24 = result; /*0x6f2a30*/
  return result; /*0x6f2a36*/
}
} // namespace gamemd

// 0x6F2A40
namespace gamemd {
int sub_6F2A40()
{
  dword_B0EA50 = 0; /*0x6f2a42*/
  return 0; /*0x6f2a4e*/
}
} // namespace gamemd

// 0x6F2A50
namespace gamemd {
int sub_6F2A50()
{
  dword_B0EA90 = 0; /*0x6f2a52*/
  dword_B0EA94 = 0; /*0x6f2a57*/
  dword_B0EA98 = 0; /*0x6f2a5c*/
  return 0; /*0x6f2a61*/
}
} // namespace gamemd

// 0x6F2A70
namespace gamemd {
int sub_6F2A70()
{
  dword_B0EB20 = 0; /*0x6f2a75*/
  dword_B0EB18 = 128; /*0x6f2a7f*/
  dword_B0EB1C = 128; /*0x6f2a84*/
  return 128; /*0x6f2a89*/
}
} // namespace gamemd

// 0x6F2A90
namespace gamemd {
int sub_6F2A90()
{
  dword_B0EA40 = 0; /*0x6f2a92*/
  dword_B0EA44 = 0; /*0x6f2a97*/
  dword_B0EA48 = 0; /*0x6f2a9c*/
  dword_B0EA4C = 0; /*0x6f2aa1*/
  return 0; /*0x6f2aa6*/
}
} // namespace gamemd

// 0x6F2AB0
namespace gamemd {
int sub_6F2AB0()
{
  dword_B0EA80 = (int)dword_A8ED84; /*0x6f2aba*/
  dword_B0EA88 = 0; /*0x6f2abf*/
  return atexit(sub_6F2AD0); /*0x6f2acf*/
}
} // namespace gamemd

// 0x6F2AD0
namespace gamemd {
void sub_6F2AD0()
{
  if ( (byte_B0EA38 & 1) == 0 ) /*0x6f2ada*/
    byte_B0EA38 |= 1u; /*0x6f2ade*/
}
} // namespace gamemd

// 0x6F2AF0
namespace gamemd {
int sub_6F2AF0()
{
  dword_B0EA70 = TimerGetTicks(); /*0x6f2aff*/
  dword_B0EA78 = 0; /*0x6f2b04*/
  return atexit(sub_6F2B20); /*0x6f2b14*/
}
} // namespace gamemd

// 0x6F2B20
namespace gamemd {
void sub_6F2B20()
{
  if ( (byte_B0EA38 & 2) == 0 ) /*0x6f2b2a*/
    byte_B0EA38 |= 2u; /*0x6f2b2e*/
}
} // namespace gamemd

// 0x6F5EF0
namespace gamemd {
int Tactical_DrawLine3D(unsigned int * a1, int * a2, int a3)
{
  int *v5; // edx
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int *v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  struct IPersistStreamVtbl *lpVtbl; // edx
  struct IPersistStreamVtbl *v17; // edx
  int v19; // [esp+0h] [ebp-34h]
  int v20; // [esp+4h] [ebp-30h]
  unsigned int v21[2]; // [esp+10h] [ebp-24h] BYREF
  int v22; // [esp+18h] [ebp-1Ch]
  int v23; // [esp+1Ch] [ebp-18h]
  int v24; // [esp+20h] [ebp-14h]
  int v25; // [esp+24h] [ebp-10h] BYREF
  unsigned int v26[3]; // [esp+28h] [ebp-Ch] BYREF

  v5 = (int *)(((Coord *)(v26))->Subtract((3 * *a1 + *a2) / 4, (3 * a1[1] + a2[1]) / 4, (3 * a1[2] + a2[2]) / 4));
  v6 = a1[1]; /*0x6f5f47*/
  v7 = (int *)(*v5); /*0x6f5f4a*/
  v8 = v5[1]; /*0x6f5f4c*/
  v9 = v5[2]; /*0x6f5f4f*/
  v21[1] = v8; /*0x6f5f52*/
  v10 = a2[1]; /*0x6f5f56*/
  v21[0] = v7; /*0x6f5f59*/
  v11 = *a2; /*0x6f5f5d*/
  v22 = v9; /*0x6f5f5f*/
  v12 = ((Coord *)(v26))->Subtract((3 * v11 + *a1) / 4, (3 * v10 + v6) / 4, (3 * a2[2] + a1[2]) / 4); /*0x6f5fa0*/
  v13 = v12[1]; /*0x6f5fa9*/
  v14 = (int *)(v12[2]); /*0x6f5fac*/
  v23 = *v12; /*0x6f5faf*/
  v24 = v13; /*0x6f5fb3*/
  v15 = a1[2]; /*0x6f5fb7*/
  v25 = v14; /*0x6f5fca*/
  lpVtbl = g_TacticalClass_Instance; /*0x6f5fd1*/
  if ( v15 <= v22 ) /*0x6f5fd3*/
    ((void (__stdcall *)(unsigned int *, unsigned int *, int, unsigned int, int, int))lpVtbl[3].QueryInterface)(v21, a1, a3, 0, v19, v20); /*0x6f5fe3*/
  else
    ((void (__stdcall *)(unsigned int *, unsigned int *, int, unsigned int, int, int))lpVtbl[3].QueryInterface)(a1, v21, a3, 0, v19, v20); /*0x6f5fdb*/
  v17 = g_TacticalClass_Instance; /*0x6f5ff8*/
  if ( a2[2] <= v26[1] ) /*0x6f5ffa*/
    return ((int (__stdcall *)(int *, int *))v17[3].QueryInterface)(&v25, a2); /*0x6f6015*/
  else
    return ((int (__stdcall *)(int *, int *))v17[3].QueryInterface)(a2, &v25); /*0x6f6002*/
}
} // namespace gamemd

// 0x6F6030
namespace gamemd {
int sub_6F6030(int * a1, unsigned int * a2, int a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // edi
  int v8; // kr00_4
  struct IPersistStreamVtbl *lpVtbl; // eax
  unsigned int v11[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = *a1; /*0x6f603b*/
  v5 = a1[1]; /*0x6f603d*/
  v6 = a1[2]; /*0x6f6040*/
  v7 = 3 * v5 + a2[1]; /*0x6f6056*/
  v8 = 3 * v6 + a2[2]; /*0x6f6072*/
  v11[0] = (3 * v4 + *a2) / 4; /*0x6f6089*/
  v11[1] = v7 / 4; /*0x6f608d*/
  v11[2] = v8 / 4; /*0x6f6091*/
  lpVtbl = g_TacticalClass_Instance; /*0x6f6095*/
  if ( v6 <= v8 / 4 ) /*0x6f6098*/
    return ((int (__stdcall *)(unsigned int *, int *, int, unsigned int))lpVtbl[3].QueryInterface)(v11, a1, a3, 0); /*0x6f60b3*/
  else
    return ((int (__stdcall *)(int *, unsigned int *, int, unsigned int))lpVtbl[3].QueryInterface)(a1, v11, a3, 0); /*0x6f60a0*/
}
} // namespace gamemd

// 0x6FF950
namespace gamemd {
void nullsub_45()
{
  ; /*0x6ff950*/
}
} // namespace gamemd
