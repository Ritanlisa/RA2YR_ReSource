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
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int *v11; // ecx
  int v12; // esi
  char *v13; // edi
  int v14; // ebp
  unsigned int *v15; // eax
  int v16; // eax
  int v17; // ebx
  char v18; // bp
  int v19; // esi
  int v20; // eax
  int v21; // edi
  unsigned int v22; // edi
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int *esi38; // esi
  unsigned int *v25; // edi
  unsigned int v27; // esi
  int Capacity; // eax
  int v29; // eax
  unsigned int v30; // esi
  int v31; // eax
  unsigned int *Items; // ebx
  int v33; // esi
  unsigned int **edi62; // edi
  unsigned int *v34; // eax
  int v36; // ecx
  unsigned int v37; // edx
  unsigned int *v38; // eax
  int i; // eax
  int v40; // ecx
  ObjectClass *v41; // esi
  bool v42; // zf
  int v43; // eax
  int v44; // eax
  int ptr_8; // ecx
  int v46; // eax
  ObjectClass *v47; // ecx
  void *v48; // eax
  int v49; // edx
  int v51; // ecx
  char v52; // [esp+13h] [ebp-4Dh]
  unsigned int v54[2]; // [esp+18h] [ebp-48h] BYREF
  unsigned int *v55; // [esp+20h] [ebp-40h]
  ObjectClass *v56; // [esp+24h] [ebp-3Ch]
  VectorClass v57; // [esp+28h] [ebp-38h] BYREF
  int v58; // [esp+38h] [ebp-28h]
  int v59; // [esp+3Ch] [ebp-24h]
  _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass v60; // [esp+44h] [ebp-1Ch] BYREF
  int v61; // [esp+58h] [ebp-8h]
  int v62; // [esp+5Ch] [ebp-4h]

  v3 = 0; /*0x6f0ab6*/
  v56 = (ObjectClass *)aP0; /*0x6f0ab9*/
  Team_Helper_6F2230(&v57, 0, 0); /*0x6f0ac9*/
  v5 = *(unsigned int *)(a2 + 22016); /*0x6f0ace*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EA9C4) */  /*0x6f0ad4*/
  v55 = 0; /*0x6f0adf*/
  if ( v5 != -1 ) /*0x6f0ae3*/
    v55 = (unsigned int *)*(&dword_A8022C->ptr_0 + v5); /*0x6f0aee*/
  if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 100) <= *(unsigned int *)(a2 + 22108) /*0x6f0b12*/
    && *(unsigned char *)(a2 + 498) )
  {
    v6 = 0; /*0x6f0b26*/
    if ( dword_8B40F8 > 0 ) /*0x6f0b2a*/
    {
      v7 = (char *)dword_8B40EC; /*0x6f0b2c*/
      v8 = dword_8B40F8; /*0x6f0b32*/
      do /*0x6f0b4d*/
      {
        if ( *(unsigned int *)(*(unsigned int *)v7 + 44) == a2 ) /*0x6f0b39*/
        {
          ++v6; /*0x6f0b3e*/
          if ( *(unsigned char *)(*(unsigned int *)(*(unsigned int *)v7 + 36) + 246) ) /*0x6f0b3f*/
            ++v3; /*0x6f0b48*/
        }
        v7 += 4; /*0x6f0b49*/
        --v8; /*0x6f0b4c*/
      }
      while ( v8 ); /*0x6f0b4d*/
    }
    v9 = 4 * *(unsigned int *)(a2 + 388); /*0x6f0b5b*/
    v10 = *&dword_8871E0->q13CC; /*0x6f0b5e*/
    LOBYTE(v54[0]) = 0; /*0x6f0b64*/
    if ( v6 < *(unsigned int *)(v10 + v9) || v3 < v6 / 2 ) /*0x6f0b77*/
    {
      if ( v3 > *(unsigned int *)(*&dword_8871E0->q13B0 + v9) ) /*0x6f0bd4*/
        LOBYTE(v54[0]) = 1; /*0x6f0bd6*/
    }
    else
    {
      v11 = 0; /*0x6f0b79*/
      v12 = 0x7FFFFFFF; /*0x6f0b7b*/
      if ( dword_8B40F8 > 0 ) /*0x6f0b82*/
      {
        v13 = (char *)dword_8B40EC; /*0x6f0b84*/
        v14 = dword_8B40F8; /*0x6f0b8a*/
        do /*0x6f0bb6*/
        {
          v15 = *(unsigned int **)v13; /*0x6f0b90*/
          if ( *(unsigned int *)(*(unsigned int *)v13 + 44) == a2 && *(unsigned char *)(v15[9] + 246) && v15[20] < v12 ) /*0x6f0bac*/
          {
            v11 = *(int **)v13; /*0x6f0bae*/
            v12 = v15[20]; /*0x6f0bb0*/
          }
          v13 += 4; /*0x6f0bb2*/
          --v14; /*0x6f0bb5*/
        }
        while ( v14 ); /*0x6f0bb6*/
        if ( v11 ) /*0x6f0bba*/
        {
          v16 = *v11; /*0x6f0bbc*/
          --v6; /*0x6f0bc0*/
          LOBYTE(v54[0]) = 1; /*0x6f0bc1*/
          (*(void (**)(int *, int))(v16 + 32))(v11, 1); /*0x6f0bc6*/
        }
      }
    }
    if ( v6 < *(unsigned int *)(*&dword_8871E0->q13CC + 4 * *(unsigned int *)(a2 + 388)) ) /*0x6f0bf4*/
    {
      v17 = 0; /*0x6f0bfa*/
      Team_Helper_6F27F0((VectorClass *)&v60, 0, 0); /*0x6f0c02*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7F4860) */  /*0x6f0c0b*/
      v61 = 10; /*0x6f0c13*/
      v60.m_10 = 0; /*0x6f0c1b*/
      v62 = 0; /*0x6f0c1f*/
      TeamTypeClass_28::ClearBuffer(&v60); /*0x6f0c23*/
      v52 = 0; /*0x6f0c2e*/
      if ( dword_A8B210 > 0 ) /*0x6f0c34*/
      {
        v18 = v54[0]; /*0x6f0c3a*/
        while ( 1 ) /*0x6f0c44*/
        {
          v19 = *((unsigned int *)dword_A8B204 + v17); /*0x6f0c44*/
          if ( !v19 || TriggerClass::EvaluateCondition(v19, (TriggerClass *)a2, v55, v18) != 1 ) /*0x6f0c5f*/
            goto LABEL_34; /*0x6f0c5f*/
          LOWORD(v20) = Math::RoundToInt(*(double *)(v19 + 184)); /*0x6f0c67*/
          v21 = v20; /*0x6f0c6c*/
          if ( v20 == 5000 ) /*0x6f0c78*/
            break; /*0x6f0c78*/
          if ( !v52 ) /*0x6f0c9a*/
            goto LABEL_33; /*0x6f0c9a*/
LABEL_34:
          if ( ++v17 >= dword_A8B210 ) /*0x6f0cbe*/
            goto LABEL_35; /*0x6f0cbe*/
        }
        if ( !v52 ) /*0x6f0c7c*/
        {
          v52 = 1; /*0x6f0c86*/
          v62 = 0; /*0x6f0c8b*/
          (*(void (**)(_DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *))(*(unsigned int *)v60.__pad_0 + 12))(&v60); /*0x6f0c93*/
        }
LABEL_33:
        v54[0] = v19; /*0x6f0c9c*/
        v54[1] = v21; /*0x6f0ca9*/
        Team_Helper_6F25E0((ObjectClass *)&v60, v54); /*0x6f0cad*/
        v62 += v21; /*0x6f0cb2*/
        goto LABEL_34; /*0x6f0cb2*/
      }
LABEL_35:
      v22 = 0; /*0x6f0cc4*/
      if ( !v62 ) /*0x6f0ccd*/
        goto LABEL_58; /*0x6f0ccd*/
      if ( !v60.m_10 ) /*0x6f0cd9*/
        goto LABEL_58; /*0x6f0cd9*/
      v23 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, v62); /*0x6f0cee*/
      v24 = 0; /*0x6f0cf3*/
      if ( v60.m_10 <= 0 ) /*0x6f0cfb*/
        goto LABEL_58; /*0x6f0cfb*/
      esi38 = (unsigned int *)(*(unsigned int *)&v60.m_1[3] + 4); /*0x6f0d05*/
      while ( 1 ) /*0x6f0d08*/
      {
        v22 += *esi38; /*0x6f0d08*/
        if ( v22 >= v23 ) /*0x6f0d0c*/
          break; /*0x6f0d0c*/
        ++v24; /*0x6f0d0e*/
        esi38 += 2; /*0x6f0d0f*/
        if ( v24 >= v60.m_10 ) /*0x6f0d14*/
          goto LABEL_58; /*0x6f0d14*/
      }
      v25 = *(unsigned int **)(*(unsigned int *)&v60.m_1[3] + 8 * v24); /*0x6f0d1b*/
      if ( !v25 ) /*0x6f0d20*/
        goto LABEL_58; /*0x6f0d20*/
      v27 = v25[55]; /*0x6f0d26*/
      Capacity = v57.Capacity; /*0x6f0d2c*/
      if ( v27 ) /*0x6f0d32*/
      {
        if ( v58 < v57.Capacity ) /*0x6f0d38*/
          goto LABEL_49; /*0x6f0d38*/
        if ( (v57.IsAllocated[0] || !v57.Capacity) && v59 > 0 ) /*0x6f0d4c*/
        {
          if ( !(*(unsigned __int8 (**)(VectorClass *, int, unsigned int))(v57.ptr_0 + 8))( /*0x6f0d60*/
                  &v57,
                  v59 + v57.Capacity,
                  0) )
          {
LABEL_50:
            Capacity = v57.Capacity; /*0x6f0d74*/
            goto LABEL_51; /*0x6f0d74*/
          }
LABEL_49:
          v29 = v58++; /*0x6f0d62*/
          *(unsigned int *)(v57.Items + 4 * v29) = v27; /*0x6f0d71*/
          goto LABEL_50; /*0x6f0d71*/
        }
      }
LABEL_51:
      v30 = v25[56]; /*0x6f0d78*/
      if ( v30 /*0x6f0da9*/
        && (v58 < Capacity
         || (v57.IsAllocated[0] || !Capacity)
         && v59 > 0
         && (*(unsigned __int8 (**)(VectorClass *, int, unsigned int))(v57.ptr_0 + 8))(&v57, v59 + Capacity, 0)) )
      {
        v31 = v58++; /*0x6f0db4*/
        *(unsigned int *)(v57.Items + 4 * v31) = v30; /*0x6f0dbf*/
      }
LABEL_58:
      /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7F4840) */  /*0x6f0dc2*/
      if ( *(unsigned int *)&v60.m_1[3] && BYTE1(v60.m_C) ) /*0x6f0dd8*/
        Team_Helper_6F26E0(*(char **)&v60.m_1[3], 3); /*0x6f0de0*/
    }
  }
  Items = (unsigned int *)v57.Items; /*0x6f0de5*/
  v33 = 0; /*0x6f0dee*/
  if ( dword_8B40F8 <= 0 ) /*0x6f0df2*/
  {
LABEL_71:
    for ( i = 0; i < v58; Items = (unsigned int *)v57.Items ) /*0x6f0e4b*/
    {
      v40 = Items[i++]; /*0x6f0e4d*/
      *(unsigned char *)(v40 + 169) = 1; /*0x6f0e51*/
    }
    v41 = v56; /*0x6f0e64*/
    v42 = v56 == (ObjectClass *)&v57; /*0x6f0e6e*/
    v56->ptr_4 = 0; /*0x6f0e70*/
    v41->ptr_8 = 0; /*0x6f0e73*/
    (v41->ptr_C) = ((v41->ptr_C) & ~0xFF) | ((1) & 0xFF); /*0x6f0e76*/
    (v41->ptr_C) = ((v41->ptr_C) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x6f0e7a*/
    /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EA9E4) */  /*0x6f0e7e*/
    if ( !v42 ) /*0x6f0e84*/
    {
      VectorClass::ClearAndFree3((int)v41); /*0x6f0e8c*/
      v43 = v57.Capacity; /*0x6f0e92*/
      v42 = v57.Capacity == 0; /*0x6f0e96*/
      v41->ptr_8 = v57.Capacity; /*0x6f0e98*/
      if ( v42 ) /*0x6f0e9b*/
      {
        v41->ptr_4 = 0; /*0x6f0f70*/
        (v41->ptr_C) = ((v41->ptr_C) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x6f0f73*/
      }
      else
      {
        v44 = __2_YAPAXI_Z(4 * v43); /*0x6f0ea5*/
        v41->ptr_4 = v44; /*0x6f0eaf*/
        if ( v44 ) /*0x6f0eb2*/
        {
          ptr_8 = v41->ptr_8; /*0x6f0eb8*/
          v46 = 0; /*0x6f0ebb*/
          (v41->ptr_C) = ((v41->ptr_C) & ~(0xFF << 8)) | (((1) & 0xFF) << 8); /*0x6f0ebf*/
          if ( ptr_8 > 0 ) /*0x6f0ec3*/
          {
            do /*0x6f0edc*/
            {
              *(unsigned int *)(v41->ptr_4 + 4 * v46) = *(unsigned int *)(v57.Items + 4 * v46); /*0x6f0ed3*/
              ++v46; /*0x6f0ed9*/
            }
            while ( v46 < v41->ptr_8 ); /*0x6f0edc*/
          }
        }
      }
      Items = (unsigned int *)v57.Items; /*0x6f0f77*/
    }
    v51 = v59; /*0x6f0f7f*/
    v41->uniqueId = v58; /*0x6f0f85*/
    v41->abstractFlags = v51; /*0x6f0f88*/
    /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EA9C4) */  /*0x6f0f8b*/
    /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EA9E4) */  /*0x6f0f91*/
    if ( Items ) /*0x6f0f99*/
    {
      if ( v57.IsAllocated[0] ) /*0x6f0fa1*/
        __3_YAXPAX_Z(Items); /*0x6f0fa4*/
    }
  }
  else
  {
    edi62 = (unsigned int **)dword_8B40EC; /*0x6f0df4*/
    while ( 1 ) /*0x6f0dfa*/
    {
      v34 = *edi62; /*0x6f0dfa*/
      if ( (*edi62)[11] == a2 && (*((unsigned char *)v34 + 123) || !*((unsigned char *)v34 + 127)) ) /*0x6f0e0c*/
      {
        v36 = 0; /*0x6f0e17*/
        if ( v58 > 0 ) /*0x6f0e1b*/
          break; /*0x6f0e1b*/
      }
LABEL_70:
      ++v33; /*0x6f0e36*/
      ++edi62; /*0x6f0e3c*/
      if ( v33 >= dword_8B40F8 ) /*0x6f0e41*/
        goto LABEL_71; /*0x6f0e41*/
    }
    v37 = v34[9]; /*0x6f0e1d*/
    v38 = (unsigned int *)v57.Items; /*0x6f0e20*/
    while ( v37 != *v38 ) /*0x6f0e24*/
    {
      ++v36; /*0x6f0e2e*/
      ++v38; /*0x6f0e2f*/
      if ( v36 >= v58 ) /*0x6f0e34*/
        goto LABEL_70; /*0x6f0e34*/
    }
    v58 = 0; /*0x6f0ee7*/
    if ( v57.Items && v57.IsAllocated[0] ) /*0x6f0ef3*/
    {
      __3_YAXPAX_Z((void *)v57.Items); /*0x6f0ef6*/
      v57.Items = 0; /*0x6f0efe*/
    }
    v41 = v56; /*0x6f0f02*/
    v47 = v56; /*0x6f0f0b*/
    v57.IsAllocated[0] = 0; /*0x6f0f0d*/
    v57.Capacity = 0; /*0x6f0f12*/
    v56->ptr_4 = 0; /*0x6f0f16*/
    v47->ptr_8 = 0; /*0x6f0f19*/
    (v47->ptr_C) = ((v47->ptr_C) & ~0xFF) | ((1) & 0xFF); /*0x6f0f1c*/
    (v47->ptr_C) = ((v47->ptr_C) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x6f0f20*/
    /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EA9E4) */  /*0x6f0f24*/
    Team_Helper_6F2780(v47, &v57); /*0x6f0f2a*/
    /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EA9C4) */  /*0x6f0f2f*/
    /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EA9E4) */  /*0x6f0f35*/
    v48 = (void *)v57.Items; /*0x6f0f3d*/
    v49 = v59; /*0x6f0f45*/
    v42 = v57.Items == 0; /*0x6f0f49*/
    v41->uniqueId = v58; /*0x6f0f4b*/
    v41->abstractFlags = v49; /*0x6f0f4e*/
    if ( !v42 && v57.IsAllocated[0] ) /*0x6f0f59*/
    {
      __3_YAXPAX_Z(v48); /*0x6f0f5c*/
      return v41; /*0x6f0f6d*/
    }
  }
  return v41; /*0x6f0f66*/

}
}  // G42.18 ns repair
// 0x6F8960
namespace gamemd {
AbstractClass * * SelectTechnoClassAreaTarget(IUnknown * aP0, IUnknown * aP1, IUnknown * a2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP3a, IUnknown * aP6, int * a7, int a9, void * a1, void * a3, void * a4, void * a5, void * a6, void * a8, void * a10)
{

  unsigned int *v11; // ebx
  int v12; // eax
  int v14; // edi
  void *v15; // ebp
  int transporter; // ecx
  Object *v17; // ebx
  int v18; // eax
  char v23; // bl
  unsigned int *v24; // [esp+0h] [ebp-10h]
  char v25; // [esp+1Ch] [ebp+Ch]

  *a8 = 0; /*0x6f8972*/
  *a9 = 0; /*0x6f8979*/
  v11 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a6); /*0x6f898d*/
  if ( a10 != -1 ) /*0x6f8992*/
  {
    v12 = (*(int (**)(TechnoClass *))(a1->ptr_0 + 132))(a1); /*0x6f899a*/
    if ( MapClass::GetTileIndex((MapClass *)&dword_87F7E8, a6, *(unsigned int *)(v12 + 1460), 1) != a10 ) /*0x6f89b4*/
      return 0; /*0x6f89bc*/
  }
  v14 = v11->q0E8; /*0x6f89bf*/
  v15 = 0; /*0x6f89c5*/
  if ( !v14 ) /*0x6f89c9*/
    v14 = v11->u32_E4; /*0x6f89cb*/
  transporter = a1->transporter; /*0x6f89d1*/
  v17 = 0; /*0x6f89d7*/
  v25 = 0; /*0x6f89db*/
  if ( transporter ) /*0x6f89e0*/
  {
    if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)transporter + 132))(transporter) + 1508) ) /*0x6f89ea*/
    {
      v18 = *(unsigned int *)(a1->transporter + 704); /*0x6f89fa*/
      if ( v18 ) /*0x6f8a02*/
      {
        v17 = *(Object **)(v18 + 540); /*0x6f8a04*/
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
    if ( (*(unsigned char *)(v14 + 20) & 1) == 0 ) /*0x6f8a2e*/
    {
      v15 = 0; /*0x6f8a23*/
      goto LABEL_33; /*0x6f8a25*/
    }
    v15 = (void *)v14; /*0x6f8a34*/
    if ( TechnoClass::GetValue(a1, -1) >= 0 ) /*0x6f8a3d*/
      break; /*0x6f8a3d*/
    BuildingClass::GetHealthRatio((BuildingClass *)v14); /*0x6f8a41*/
    _ECX = dword_8871E0; /*0x6f8a46*/
    __asm /*0x6f8a4c*/
    {
      fcomp qword ptr [ecx+16F8h]
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 && (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)a1->owner, v14) ) /*0x6f8a64*/
      goto LABEL_34; /*0x6f8a6b*/
LABEL_33:
    v14 = v14->ptr_30; /*0x6f8b3e*/
    if ( !v14 ) /*0x6f8b43*/
      goto LABEL_34; /*0x6f8b43*/
  }
  if ( ((unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)a1->owner, v14) || v25) /*0x6f8ac7*/
    && !*(unsigned char *)((*(int (**)(TechnoClass *))(a1->ptr_0 + 132))(a1) + 1728)
    && !a1->isBerserk[0]
    && (!v25 || !v17 || !(unsigned __int8)Object::IsAlliedWithObjectHouse(v17, v14)) )
  {
    if ( (*(int (**)(TechnoClass *))(a1->ptr_0 + 44))(a1) != 15 ) /*0x6f8ada*/
      goto LABEL_33; /*0x6f8ada*/
    if ( !LOBYTE(a1[1].airstrikeTintTimer[0]) ) /*0x6f8adc*/
    {
      if ( !*(unsigned char *)(a1[1].ironTintTimer[1] + 3779) ) /*0x6f8aec*/
        goto LABEL_33; /*0x6f8aec*/
      if ( a1->currentMission != 11 ) /*0x6f8afd*/
        goto LABEL_33; /*0x6f8afd*/
      BuildingClass::GetHealthRatio((BuildingClass *)v14); /*0x6f8b01*/
      _EDX = dword_8871E0; /*0x6f8b06*/
      __asm /*0x6f8b0c*/
      {
        fcomp qword ptr [edx+1708h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 /*0x6f8b3c*/
        || (*(int (**)(int))(*(unsigned int *)v14 + 44))(v14) != 6
        || (*(int (**)(unsigned int, unsigned int))(**(unsigned int **)(v14 + 1312) + 132))(
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
  if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)a1->owner, (int)v15)
    || TechnoClass::GetValue(a1, -1) < 0
    || !(unsigned __int8)House::IsCurrentPlayer((House *)a1->owner)
    && a1
    && (*(int (**)(TechnoClass *))(a1->ptr_0 + 44))(a1) == 15
    && *(unsigned char *)(*((*(int (**)(TechnoClass *))(a1->ptr_0 + 44))(a1) == 15
                  ? &a1[1].ironTintTimer[1]
                  : (int *)1728)
                + 3779)
    || *(unsigned char *)((*(int (**)(TechnoClass *))(a1->ptr_0 + 132))(a1) + 1728)
    || a1->isBerserk[0]
    || v25 )
  {
    return TechnoClass::EvaluateTarget( /*0x6f8c05*/
             a4,
             a3,
             a5,
             a7,
             (int)v15,
             (int)a9,
             (int *)-1,
             (int)&stru_B0EA70.__pad_1C[4],
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
  v0 = Math::Sin(dbl_B0E9B0 - dbl_B0E9D8); /*0x6f0552*/
  int64_t result; // rax
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
  v0 = Math::Sin(dbl_B0EA30 - dbl_B0EA60); /*0x6f2982*/
  int64_t result; // rax
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
  unsigned int v26[3]; // [esp+28h] [ebp-Ch] BYREF
  v5 = (int *)(((Coord *)(v26))->Subtract((3 * *a1 + *a2) / 4, (3 * a1[1] + a2[1]) / 4, (3 * a1[2] + a2[2]) / 4));
  int v6 = a1->ptr_4; // ebx /*0x6f5f47*/
  int v7; // eax
  v7 = (int)((int *)(*v5)); /*0x6f5f4a*/
  int v8; // ecx
  v8 = v5[1]; /*0x6f5f4c*/
  int v9; // edx
  v9 = v5[2]; /*0x6f5f4f*/
  unsigned int v21[2]; // [esp+10h] [ebp-24h] BYREF
  v21[1] = v8; /*0x6f5f52*/
  int v10; // ecx
  v10 = a2[1]; /*0x6f5f56*/
  v21[0] = v7; /*0x6f5f59*/
  int v11 = *a2; // eax /*0x6f5f5d*/
  int v22; // [esp+18h] [ebp-1Ch]
  v22 = v9; /*0x6f5f5f*/
  int *v12; // eax
  v12 = (int *)(((Coord *)(v26))->Subtract((3 * v11 + *a1) / 4, (3 * v10 + v6) / 4, (3 * a2[2] + a1->ptr_8) / 4)); /*0x6f5fa0*/
  int v13 = v12->u32_4; // ecx /*0x6f5fa9*/
  int v14; // edx
  v14 = (int *)(v12->u32_8); /*0x6f5fac*/
  int v23; // [esp+1Ch] [ebp-18h]
  v23 = *v12; /*0x6f5faf*/
  int v24; // [esp+20h] [ebp-14h]
  v24 = v13; /*0x6f5fb3*/
  int v15 = a1->ptr_8; // eax /*0x6f5fb7*/
  int v25; // [esp+24h] [ebp-10h] BYREF
  v25 = v14; /*0x6f5fca*/
  struct IPersistStreamVtbl *lpVtbl; // edx
  lpVtbl = (gamemd::IPersistStreamVtbl *)(g_TacticalClass_Instance); /*0x6f5fd1*/
  int v19; // [esp+0h] [ebp-34h]
  int v20; // [esp+4h] [ebp-30h]
  if ( v15 <= v22 ) /*0x6f5fd3*/
    ((void (__stdcall *)(unsigned int *, unsigned int *, int, unsigned int, int, int))lpVtbl[3].QueryInterface)(v21, a1, a3, 0, v19, v20); /*0x6f5fe3*/
  else
    ((void (__stdcall *)(unsigned int *, unsigned int *, int, unsigned int, int, int))lpVtbl[3].QueryInterface)(a1, v21, a3, 0, v19, v20); /*0x6f5fdb*/
  struct IPersistStreamVtbl *v17; // edx
  v17 = (gamemd::IPersistStreamVtbl *)(g_TacticalClass_Instance); /*0x6f5ff8*/
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

  int v4 = *a1; // eax /*0x6f603b*/
  int v5; // edi
  v5 = a1[1]; /*0x6f603d*/
  int v6; // ecx
  v6 = a1[2]; /*0x6f6040*/
  int v7; // edi
  v7 = 3 * v5 + a2[1]; /*0x6f6056*/
  int v8; // kr00_4
  v8 = 3 * v6 + a2[2]; /*0x6f6072*/
  unsigned int v11[3]; // [esp+10h] [ebp-Ch] BYREF
  v11[0] = (3 * v4 + *a2) / 4; /*0x6f6089*/
  v11[1] = v7 / 4; /*0x6f608d*/
  v11[2] = v8 / 4; /*0x6f6091*/
  struct IPersistStreamVtbl *lpVtbl; // eax
  lpVtbl = (gamemd::IPersistStreamVtbl *)(g_TacticalClass_Instance); /*0x6f6095*/
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
