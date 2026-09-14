// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6F03F0_e4.hpp"
#include "e4/classes/E4Recv_6FD800_e4.hpp"

// 0x6F0AB0
namespace gamemd {
int AISelectTeamHouseClass(IUnknown * aP0, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall AISelectTeamHouseClass(IUnknown *aP0, int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  int v6; // ebx
  CCINIClass *v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int *v11; // ecx
  int v12; // esi
  CCINIClass *v13; // edi
  int v14; // ebp
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  char v18; // bp
  int v19; // esi
  int v20; // edi
  unsigned int v21; // edi
  unsigned int v22; // eax
  int v23; // ecx
  _DWORD *v24; // esi
  int v25; // edi
  int v26; // esi
  int v27; // eax
  int v28; // eax
  int v29; // esi
  int v30; // eax
  CCINIClass *v31; // ebx
  int v32; // esi
  CCINIClass *v33; // edi
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  CCINIClass *v37; // eax
  int i; // eax
  int v39; // ecx
  _DWORD *v40; // esi
  bool v41; // zf
  int v42; // eax
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  _DWORD *v46; // ecx
  CCINIClass *v47; // eax
  int v48; // edx
  int v50; // ecx
  char v51; // [esp+13h] [ebp-4Dh]
  _DWORD v53[2]; // [esp+18h] [ebp-48h] BYREF
  CCINIClass *v54; // [esp+20h] [ebp-40h]
  _DWORD *v55; // [esp+24h] [ebp-3Ch]
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
  IUnknown *aP2; // [esp+5Ch] [ebp-4h]

  v3 = 0; /*0x6f0ab6*/
  v55 = &aP0->field_0; /*0x6f0ab9*/
  Team_Helper_6F2230(&v56, 0, 0); /*0x6f0ac9*/
  v5 = *(_DWORD *)(a2 + 22016); /*0x6f0ace*/
  v56 = &vt_TypeList_TeamTypeClass_const; /*0x6f0ad4*/
  v54 = 0; /*0x6f0adf*/
  if ( v5 != -1 ) /*0x6f0ae3*/
    v54 = *(CCINIClass **)&HouseClass_Array->__pad_0[4 * v5]; /*0x6f0aee*/
  if ( Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), (IUnknown *)1, (IUnknown *)0x64) <= *(_DWORD *)(a2 + 22108) /*0x6f0b12*/
    && *(_BYTE *)(a2 + 498) )
  {
    v6 = 0; /*0x6f0b26*/
    if ( *(int *)&stru_89E138.__pad_579C[67620] > 0 ) /*0x6f0b2a*/
    {
      v7 = *(CCINIClass **)&stru_89E138.__pad_579C[67608]; /*0x6f0b2c*/
      v8 = *(_DWORD *)&stru_89E138.__pad_579C[67620]; /*0x6f0b32*/
      do /*0x6f0b4d*/
      {
        if ( *(_DWORD *)(*(_DWORD *)v7->__pad_0 + 44) == a2 ) /*0x6f0b39*/
        {
          ++v6; /*0x6f0b3e*/
          if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)v7->__pad_0 + 36) + 246) ) /*0x6f0b3f*/
            ++v3; /*0x6f0b48*/
        }
        v7 = (CCINIClass *)((char *)v7 + 4); /*0x6f0b49*/
        --v8; /*0x6f0b4c*/
      }
      while ( v8 ); /*0x6f0b4d*/
    }
    v9 = 4 * *(_DWORD *)(a2 + 388); /*0x6f0b5b*/
    v10 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5068); /*0x6f0b5e*/
    LOBYTE(v53[0]) = 0; /*0x6f0b64*/
    if ( v6 < *(_DWORD *)(v10 + v9) || v3 < v6 / 2 ) /*0x6f0b77*/
    {
      if ( v3 > *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5040) + v9) ) /*0x6f0bd4*/
        LOBYTE(v53[0]) = 1; /*0x6f0bd6*/
    }
    else
    {
      v11 = 0; /*0x6f0b79*/
      v12 = 0x7FFFFFFF; /*0x6f0b7b*/
      if ( *(int *)&stru_89E138.__pad_579C[67620] > 0 ) /*0x6f0b82*/
      {
        v13 = *(CCINIClass **)&stru_89E138.__pad_579C[67608]; /*0x6f0b84*/
        v14 = *(_DWORD *)&stru_89E138.__pad_579C[67620]; /*0x6f0b8a*/
        do /*0x6f0bb6*/
        {
          v15 = *(_DWORD *)v13->__pad_0; /*0x6f0b90*/
          if ( *(_DWORD *)(*(_DWORD *)v13->__pad_0 + 44) == a2 /*0x6f0bac*/
            && *(_BYTE *)(*(_DWORD *)(v15 + 36) + 246)
            && *(_DWORD *)(v15 + 80) < v12 )
          {
            v11 = *(int **)v13->__pad_0; /*0x6f0bae*/
            v12 = *(_DWORD *)(v15 + 80); /*0x6f0bb0*/
          }
          v13 = (CCINIClass *)((char *)v13 + 4); /*0x6f0bb2*/
          --v14; /*0x6f0bb5*/
        }
        while ( v14 ); /*0x6f0bb6*/
        if ( v11 ) /*0x6f0bba*/
        {
          v16 = *v11; /*0x6f0bbc*/
          --v6; /*0x6f0bc0*/
          LOBYTE(v53[0]) = 1; /*0x6f0bc1*/
          (*(void (__thiscall **)(int *, int))(v16 + 32))(v11, 1); /*0x6f0bc6*/
        }
      }
    }
    if ( v6 < *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5068) + 4 * *(_DWORD *)(a2 + 388)) ) /*0x6f0bf4*/
    {
      v17 = 0; /*0x6f0bfa*/
      Team_Helper_6F27F0(&v62, 0, 0); /*0x6f0c02*/
      v62 = &vt_DynamicVectorClass_DiscreteDistributionClass_AITriggerTypeClass_DistributionObject_AITriggerTypeClass; /*0x6f0c0b*/
      v66 = 10; /*0x6f0c13*/
      v65 = 0; /*0x6f0c1b*/
      aP2 = 0; /*0x6f0c1f*/
      TeamTypeClass_28::ClearBuffer((int)&v62); /*0x6f0c23*/
      v51 = 0; /*0x6f0c2e*/
      if ( *(int *)&HouseClass_Player.__pad_5568[8028] > 0 ) /*0x6f0c34*/
      {
        v18 = v53[0]; /*0x6f0c3a*/
        while ( 1 ) /*0x6f0c44*/
        {
          v19 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8016] + 4 * v17); /*0x6f0c44*/
          if ( !v19 || TriggerClass::EvaluateCondition(v19, (_DWORD *)a2, (int)v54, v18) != 1 ) /*0x6f0c5f*/
            goto LABEL_34; /*0x6f0c5f*/
          v20 = Math::RoundToInt(*(double *)(v19 + 184)); /*0x6f0c6c*/
          if ( v20 == 5000 ) /*0x6f0c78*/
            break; /*0x6f0c78*/
          if ( !v51 ) /*0x6f0c9a*/
            goto LABEL_33; /*0x6f0c9a*/
LABEL_34:
          if ( ++v17 >= *(int *)&HouseClass_Player.__pad_5568[8028] ) /*0x6f0cbe*/
            goto LABEL_35; /*0x6f0cbe*/
        }
        if ( !v51 ) /*0x6f0c7c*/
        {
          v51 = 1; /*0x6f0c86*/
          aP2 = 0; /*0x6f0c8b*/
          ((void (__thiscall *)(void ***))v62[3])(&v62); /*0x6f0c93*/
        }
LABEL_33:
        v53[0] = v19; /*0x6f0c9c*/
        v53[1] = v20; /*0x6f0ca9*/
        Team_Helper_6F25E0(&v62, v53); /*0x6f0cad*/
        aP2 = (IUnknown *)((char *)aP2 + v20); /*0x6f0cb2*/
        goto LABEL_34; /*0x6f0cb2*/
      }
LABEL_35:
      v21 = 0; /*0x6f0cc4*/
      if ( !aP2 ) /*0x6f0ccd*/
        goto LABEL_58; /*0x6f0ccd*/
      if ( !v65 ) /*0x6f0cd9*/
        goto LABEL_58; /*0x6f0cd9*/
      v22 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), (IUnknown *)1, aP2); /*0x6f0cee*/
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
      v25 = *((_DWORD *)v63 + 2 * v23); /*0x6f0d1b*/
      if ( !v25 ) /*0x6f0d20*/
        goto LABEL_58; /*0x6f0d20*/
      v26 = *(_DWORD *)(v25 + 220); /*0x6f0d26*/
      v27 = v58; /*0x6f0d2c*/
      if ( v26 ) /*0x6f0d32*/
      {
        if ( v60 < v58 ) /*0x6f0d38*/
          goto LABEL_49; /*0x6f0d38*/
        if ( (v59 || !v58) && v61 > 0 ) /*0x6f0d4c*/
        {
          if ( !((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v56[2])(&v56, v61 + v58, 0) ) /*0x6f0d60*/
          {
LABEL_50:
            v27 = v58; /*0x6f0d74*/
            goto LABEL_51; /*0x6f0d74*/
          }
LABEL_49:
          v28 = v60++; /*0x6f0d62*/
          *((_DWORD *)Block + v28) = v26; /*0x6f0d71*/
          goto LABEL_50; /*0x6f0d71*/
        }
      }
LABEL_51:
      v29 = *(_DWORD *)(v25 + 224); /*0x6f0d78*/
      if ( v29 /*0x6f0da9*/
        && (v60 < v27
         || (v59 || !v27)
         && v61 > 0
         && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v56[2])(&v56, v61 + v27, 0)) )
      {
        v30 = v60++; /*0x6f0db4*/
        *((_DWORD *)Block + v30) = v29; /*0x6f0dbf*/
      }
LABEL_58:
      v62 = &vt_VectorClass_DiscreteDistributionClass_AITriggerTypeClass_DistributionObject_AITriggerTypeClass; /*0x6f0dc2*/
      if ( v63 && v64 ) /*0x6f0dd8*/
        Team_Helper_6F26E0((char *)v63, 3); /*0x6f0de0*/
    }
  }
  v31 = (CCINIClass *)Block; /*0x6f0de5*/
  v32 = 0; /*0x6f0dee*/
  if ( *(int *)&stru_89E138.__pad_579C[67620] <= 0 ) /*0x6f0df2*/
  {
LABEL_71:
    for ( i = 0; i < v60; v31 = (CCINIClass *)Block ) /*0x6f0e4b*/
    {
      v39 = *(_DWORD *)&v31->__pad_0[4 * i++]; /*0x6f0e4d*/
      *(_BYTE *)(v39 + 169) = 1; /*0x6f0e51*/
    }
    v40 = v55; /*0x6f0e64*/
    v41 = v55 == &v56; /*0x6f0e6e*/
    v55[1] = 0; /*0x6f0e70*/
    v40[2] = 0; /*0x6f0e73*/
    *((_BYTE *)v40 + 12) = 1; /*0x6f0e76*/
    *((_BYTE *)v40 + 13) = 0; /*0x6f0e7a*/
    *v40 = &vt_VectorClass_TeamTypeClass_const; /*0x6f0e7e*/
    if ( !v41 ) /*0x6f0e84*/
    {
      VectorClass::ClearAndFree3((int)v40); /*0x6f0e8c*/
      v42 = v58; /*0x6f0e92*/
      v41 = v58 == 0; /*0x6f0e96*/
      v40[2] = v58; /*0x6f0e98*/
      if ( v41 ) /*0x6f0e9b*/
      {
        v40[1] = 0; /*0x6f0f70*/
        *((_BYTE *)v40 + 13) = 0; /*0x6f0f73*/
      }
      else
      {
        v43 = __2_YAPAXI_Z(4 * v42); /*0x6f0ea5*/
        v40[1] = v43; /*0x6f0eaf*/
        if ( v43 ) /*0x6f0eb2*/
        {
          v44 = v40[2]; /*0x6f0eb8*/
          v45 = 0; /*0x6f0ebb*/
          *((_BYTE *)v40 + 13) = 1; /*0x6f0ebf*/
          if ( v44 > 0 ) /*0x6f0ec3*/
          {
            do /*0x6f0edc*/
            {
              *(_DWORD *)(v40[1] + 4 * v45) = *((_DWORD *)Block + v45); /*0x6f0ed3*/
              ++v45; /*0x6f0ed9*/
            }
            while ( v45 < v40[2] ); /*0x6f0edc*/
          }
        }
      }
      v31 = (CCINIClass *)Block; /*0x6f0f77*/
    }
    v50 = v61; /*0x6f0f7f*/
    v40[4] = v60; /*0x6f0f85*/
    v40[5] = v50; /*0x6f0f88*/
    *v40 = &vt_TypeList_TeamTypeClass_const; /*0x6f0f8b*/
    v56 = &vt_VectorClass_TeamTypeClass_const; /*0x6f0f91*/
    if ( v31 ) /*0x6f0f99*/
    {
      if ( v59 ) /*0x6f0fa1*/
        __3_YAXPAX_Z(v31); /*0x6f0fa4*/
    }
  }
  else
  {
    v33 = *(CCINIClass **)&stru_89E138.__pad_579C[67608]; /*0x6f0df4*/
    while ( 1 ) /*0x6f0dfa*/
    {
      v34 = *(_DWORD *)v33->__pad_0; /*0x6f0dfa*/
      if ( *(_DWORD *)(*(_DWORD *)v33->__pad_0 + 44) == a2 && (*(_BYTE *)(v34 + 123) || !*(_BYTE *)(v34 + 127)) ) /*0x6f0e0c*/
      {
        v35 = 0; /*0x6f0e17*/
        if ( v60 > 0 ) /*0x6f0e1b*/
          break; /*0x6f0e1b*/
      }
LABEL_70:
      ++v32; /*0x6f0e36*/
      v33 = (CCINIClass *)((char *)v33 + 4); /*0x6f0e3c*/
      if ( v32 >= *(int *)&stru_89E138.__pad_579C[67620] ) /*0x6f0e41*/
        goto LABEL_71; /*0x6f0e41*/
    }
    v36 = *(_DWORD *)(v34 + 36); /*0x6f0e1d*/
    v37 = (CCINIClass *)Block; /*0x6f0e20*/
    while ( v36 != *(_DWORD *)v37->__pad_0 ) /*0x6f0e24*/
    {
      ++v35; /*0x6f0e2e*/
      v37 = (CCINIClass *)((char *)v37 + 4); /*0x6f0e2f*/
      if ( v35 >= v60 ) /*0x6f0e34*/
        goto LABEL_70; /*0x6f0e34*/
    }
    v60 = 0; /*0x6f0ee7*/
    if ( Block && v59 ) /*0x6f0ef3*/
    {
      __3_YAXPAX_Z(Block); /*0x6f0ef6*/
      Block = 0; /*0x6f0efe*/
    }
    v40 = v55; /*0x6f0f02*/
    v46 = v55; /*0x6f0f0b*/
    v59 = 0; /*0x6f0f0d*/
    v58 = 0; /*0x6f0f12*/
    v55[1] = 0; /*0x6f0f16*/
    v46[2] = 0; /*0x6f0f19*/
    *((_BYTE *)v46 + 12) = 1; /*0x6f0f1c*/
    *((_BYTE *)v46 + 13) = 0; /*0x6f0f20*/
    *v46 = &vt_VectorClass_TeamTypeClass_const; /*0x6f0f24*/
    Team_Helper_6F2780(v46, (IUnknown *)&v56); /*0x6f0f2a*/
    *v40 = &vt_TypeList_TeamTypeClass_const; /*0x6f0f2f*/
    v56 = &vt_VectorClass_TeamTypeClass_const; /*0x6f0f35*/
    v47 = (CCINIClass *)Block; /*0x6f0f3d*/
    v48 = v61; /*0x6f0f45*/
    v41 = Block == 0; /*0x6f0f49*/
    v40[4] = v60; /*0x6f0f4b*/
    v40[5] = v48; /*0x6f0f4e*/
    if ( !v41 && v59 ) /*0x6f0f59*/
    {
      __3_YAXPAX_Z(v47); /*0x6f0f5c*/
      return (int)v40; /*0x6f0f6d*/
    }
  }
  return (int)v40; /*0x6f0f66*/
}
}
} // namespace gamemd

// 0x6F8960
namespace gamemd {
char SelectTechnoClassAreaTarget(IUnknown * aP0, IUnknown * aP1, IUnknown * a2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP3a, IUnknown * aP6, int * a7, int a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall SelectTechnoClassAreaTarget(
        IUnknown *aP0,
        IUnknown *aP1,
        IUnknown *a2,
        IUnknown *aP3,
        IUnknown *aP4,
        IUnknown *aP3a,
        IUnknown *aP6,
        int *a7,
        int a9)
{
  _DWORD *v10; // ebx
  int v11; // eax
  int v13; // edi
  TechnoClass *v14; // ebp
  int v15; // ecx
  _DWORD *v16; // ebx
  int v17; // eax
  char v18; // bl
  char aP1a; // [esp+1Ch] [ebp+Ch]

  aP6->field_0 = 0; /*0x6f8972*/
  *a7 = 0; /*0x6f8979*/
  v10 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)aP4); /*0x6f898d*/
  if ( a9 != -1 ) /*0x6f8992*/
  {
    v11 = (*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 132))(aP0); /*0x6f899a*/
    if ( MapClass::GetTileIndex(&stru_87C374.__pad_14B0[8132], aP4, *(IUnknown **)(v11 + 1460), (IUnknown *)1) != a9 ) /*0x6f89b4*/
      return 0; /*0x6f89bc*/
  }
  v13 = v10[58]; /*0x6f89bf*/
  v14 = 0; /*0x6f89c5*/
  if ( !v13 ) /*0x6f89c9*/
    v13 = v10[57]; /*0x6f89cb*/
  v15 = *(_DWORD *)aP0->__pad_11C; /*0x6f89d1*/
  v16 = 0; /*0x6f89d7*/
  aP1a = 0; /*0x6f89db*/
  if ( v15 ) /*0x6f89e0*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v15 + 132))(v15) + 1508) ) /*0x6f89ea*/
    {
      v17 = *(_DWORD *)(*(_DWORD *)aP0->__pad_11C + 704); /*0x6f89fa*/
      if ( v17 ) /*0x6f8a02*/
      {
        v16 = *(_DWORD **)(v17 + 540); /*0x6f8a04*/
        aP1a = 1; /*0x6f8a0a*/
      }
    }
  }
  if ( !v13 ) /*0x6f8a11*/
    return 0; /*0x6f8b53*/
  while ( 1 ) /*0x6f8a17*/
  {
    if ( (IUnknown *)v13 == aP0 ) /*0x6f8a19*/
      goto LABEL_33; /*0x6f8a19*/
    if ( (*(_BYTE *)(v13 + 20) & 1) == 0 ) /*0x6f8a2e*/
    {
      v14 = 0; /*0x6f8a23*/
      goto LABEL_33; /*0x6f8a25*/
    }
    v14 = (TechnoClass *)v13; /*0x6f8a34*/
    if ( TechnoClass::GetValue(aP0, (ObjectClass *)0xFFFFFFFF) >= 0 ) /*0x6f8a3d*/
      break; /*0x6f8a3d*/
    if ( BuildingClass::GetHealthRatio((int *)v13) < *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5880) /*0x6f8a64*/
      && Object::IsAlliedWithObjectHouse((_DWORD *)aP0->field_21C, (IUnknown *)v13) )
    {
      goto LABEL_34; /*0x6f8a6b*/
    }
LABEL_33:
    v13 = *(_DWORD *)(v13 + 48); /*0x6f8b3e*/
    if ( !v13 ) /*0x6f8b43*/
      goto LABEL_34; /*0x6f8b43*/
  }
  if ( (Object::IsAlliedWithObjectHouse((_DWORD *)aP0->field_21C, (IUnknown *)v13) || aP1a) /*0x6f8b3c*/
    && !*(_BYTE *)((*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 132))(aP0) + 1728)
    && !aP0->__pad_220[120]
    && (!aP1a || !v16 || !Object::IsAlliedWithObjectHouse(v16, (IUnknown *)v13))
    && ((*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 44))(aP0) != 15
     || !aP0->__pad_690[72]
     && (!*(_BYTE *)(*(_DWORD *)&aP0->__pad_690[48] + 3779)
      || *(_DWORD *)&aP0->__pad_A8[4] != 11
      || BuildingClass::GetHealthRatio((int *)v13) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5896)
      || (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) != 6
      || (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v13 + 1312) + 132))(
           *(_DWORD *)(v13 + 1312),
           *(_DWORD *)(v13 + 540)) <= 0)) )
  {
    goto LABEL_33; /*0x6f8b3c*/
  }
LABEL_34:
  if ( !v14 ) /*0x6f8b4b*/
    return 0; /*0x6f8b4b*/
  v18 = 0; /*0x6f8b5b*/
  aP6->field_0 = (int)v14; /*0x6f8b5d*/
  if ( !Object::IsAlliedWithObjectHouse((_DWORD *)aP0->field_21C, (IUnknown *)v14)
    || TechnoClass::GetValue(aP0, (ObjectClass *)0xFFFFFFFF) < 0
    || !(unsigned __int8)House::IsCurrentPlayer((#375 *)aP0->field_21C)
    && aP0
    && (*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 44))(aP0) == 15
    && *(_BYTE *)(*((*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 44))(aP0) == 15
                  ? (_DWORD *)&aP0->__pad_690[48]
                  : (_DWORD *)1728)
                + 3779)
    || *(_BYTE *)((*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 132))(aP0) + 1728)
    || aP0->__pad_220[120]
    || aP1a )
  {
    return TechnoClass::EvaluateTarget( /*0x6f8c05*/
             &aP0->field_0,
             a2,
             (int)aP3,
             aP3a,
             v14,
             a7,
             (IUnknown *)0xFFFFFFFF,
             (int)&stru_B05488.__pad_579C[15980]);
  }
  return v18; /*0x6f89b6*/
}
}
} // namespace gamemd

// 0x6F03F0
namespace gamemd {
char E4Recv_6F03F0::sub_6F03F0()
{
{
    int *v1;
    v1 = this->M84;
    if ( !v1 )
    return 0;
    while ( *(int *)((*(int (__thiscall **)(int *))(*v1 + 132))(v1) + 1668) > 0 && v1[191] <= 0 )
  {
    v1 = (int *)v1[374];
    if ( !v1 )
    return 0;
  }
    return 1;
}
}
} // namespace gamemd

// 0x6F0470
namespace gamemd {
void sub_6F0470()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0E9D0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6F04A0
namespace gamemd {
void sub_6F04A0()
{
{
    DataGlobal_B0EA20 = DataGlobal_B0E9D0 / 60.0;
}
}
} // namespace gamemd

// 0x6F04C0
namespace gamemd {
void sub_6F04C0()
{
{
    DataGlobal_B0EA08 = 1.0 / DataGlobal_B0EA20;
}
}
} // namespace gamemd

// 0x6F04E0
namespace gamemd {
void sub_6F04E0()
{
{
    DataGlobal_B0EA00 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6F0500
namespace gamemd {
void sub_6F0500()
{
{
    DataGlobal_B0E9D8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6F0520
namespace gamemd {
void sub_6F0520()
{
{
    DataGlobal_B0E9B0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6F0540
namespace gamemd {
long long sub_6F0540()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0E9B0 - DataGlobal_B0E9D8);
    result = Math::RoundToInt(v0 * DataGlobal_B0E9D0 * 0.5);
    DataGlobal_B0EA28 = result;
    return result;
}
}
} // namespace gamemd

// 0x6F0580
namespace gamemd {
void sub_6F0580()
{
{
    DataGlobal_B0E9E0 = Math::ArcTan((double)DataGlobal_B0EA28 * 0.00390625);
}
}
} // namespace gamemd

// 0x6F05B0
namespace gamemd {
void sub_6F05B0()
{
{
    DataGlobal_B0E9F8 = Math::ArcTan((double)(2 * DataGlobal_B0EA28) / DataGlobal_B0E9D0);
}
}
} // namespace gamemd

// 0x6F05E0
namespace gamemd {
long long sub_6F05E0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0EA28) + 0.5);
    DataGlobal_B0EA1C = result;
    return result;
}
}
} // namespace gamemd

// 0x6F0610
namespace gamemd {
int sub_6F0610()
{
{
    DataGlobal_B0E9C8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6F0620
namespace gamemd {
int sub_6F0620()
{
{
    DataGlobal_B0E9E8 = 0;
    DataGlobal_B0E9EC = 0;
    DataGlobal_B0E9F0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6F0640
namespace gamemd {
int sub_6F0640()
{
{
    DataGlobal_B0EA18 = 0;
    DataGlobal_B0EA10 = 128;
    DataGlobal_B0EA14 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6F0660
namespace gamemd {
int sub_6F0660()
{
{
    DataGlobal_B0E9B8 = 0;
    DataGlobal_B0E9BC = 0;
    DataGlobal_B0E9C0 = 0;
    DataGlobal_B0E9C4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6F25D0
namespace gamemd {
void nullsub_240()
{
  ;
}
} // namespace gamemd

// 0x6F28A0
namespace gamemd {
void sub_6F28A0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B0EA58 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6F28D0
namespace gamemd {
void sub_6F28D0()
{
{
    DataGlobal_B0EB28 = DataGlobal_B0EA58 / 60.0;
}
}
} // namespace gamemd

// 0x6F28F0
namespace gamemd {
void sub_6F28F0()
{
{
    DataGlobal_B0EB10 = 1.0 / DataGlobal_B0EB28;
}
}
} // namespace gamemd

// 0x6F2910
namespace gamemd {
void sub_6F2910()
{
{
    DataGlobal_B0EB08 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x6F2930
namespace gamemd {
void sub_6F2930()
{
{
    DataGlobal_B0EA60 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6F2950
namespace gamemd {
void sub_6F2950()
{
{
    DataGlobal_B0EA30 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6F2970
namespace gamemd {
long long sub_6F2970()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B0EA30 - DataGlobal_B0EA60);
    result = Math::RoundToInt(v0 * DataGlobal_B0EA58 * 0.5);
    DataGlobal_B0EB34 = result;
    return result;
}
}
} // namespace gamemd

// 0x6F29B0
namespace gamemd {
void sub_6F29B0()
{
{
    DataGlobal_B0EA68 = Math::ArcTan((double)DataGlobal_B0EB34 * 0.00390625);
}
}
} // namespace gamemd

// 0x6F29E0
namespace gamemd {
void sub_6F29E0()
{
{
    DataGlobal_B0EAA0 = Math::ArcTan((double)(2 * DataGlobal_B0EB34) / DataGlobal_B0EA58);
}
}
} // namespace gamemd

// 0x6F2A10
namespace gamemd {
long long sub_6F2A10()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B0EB34) + 0.5);
    DataGlobal_B0EB24 = result;
    return result;
}
}
} // namespace gamemd

// 0x6F2A40
namespace gamemd {
int sub_6F2A40()
{
{
    g_TechnoHouseState = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6F2A50
namespace gamemd {
int sub_6F2A50()
{
{
    g_TechnoClassPool = 0;
    DataGlobal_B0EA94 = 0;
    DataGlobal_B0EA98 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6F2A70
namespace gamemd {
int sub_6F2A70()
{
{
    DataGlobal_B0EB20 = 0;
    DataGlobal_B0EB18 = 128;
    DataGlobal_B0EB1C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6F2A90
namespace gamemd {
int sub_6F2A90()
{
{
    DataGlobal_B0EA40 = 0;
    DataGlobal_B0EA44 = 0;
    DataGlobal_B0EA48 = 0;
    DataGlobal_B0EA4C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6F2AB0
namespace gamemd {
int sub_6F2AB0()
{
{
    DataGlobal_B0EA80 = (int)g_CurrentFrame;
    DataGlobal_B0EA88 = 0;
    return atexit(sub_6F2AD0);
}
}
} // namespace gamemd

// 0x6F2AD0
namespace gamemd {
void sub_6F2AD0()
{
{
    if ( (DataGlobal_B0EA38 & 1) == 0 )
    DataGlobal_B0EA38 |= 1u;
}
}
} // namespace gamemd

// 0x6F2AF0
namespace gamemd {
int sub_6F2AF0()
{
{
    DataGlobal_B0EA70 = Timer::GetTicks();
    DataGlobal_B0EA78 = 0;
    return atexit(sub_6F2B20);
}
}
} // namespace gamemd

// 0x6F2B20
namespace gamemd {
void sub_6F2B20()
{
{
    if ( (DataGlobal_B0EA38 & 2) == 0 )
    DataGlobal_B0EA38 |= 2u;
}
}
} // namespace gamemd

// 0x6F5EF0
namespace gamemd {
int Tactical_DrawLine3D(unsigned int * a1, int * a2, int a3)
{
{
    int *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int *v12;
    int v13;
    int v14;
    int v15;
    struct IPersistStreamVtbl *lpVtbl;
    struct IPersistStreamVtbl *v17;
    int v19;
    int v20;
    int v21[2];
    int v22;
    int v23;
    int v24;
    int v25;
    int v26[3];
    v5 = Coord::Subtract(v26, (3 * *a1 + *a2) / 4, (3 * *((int*)(a1) + 1) + *((int*)(a2) + 1)) / 4, (3 * *((int*)(a1) + 2) + *((int*)(a2) + 2)) / 4);
    v6 = *((int*)(a1) + 1);
    v7 = *v5;
    v8 = v5[1];
    v9 = v5[2];
    v21[1] = v8;
    v10 = *((int*)(a2) + 1);
    v21[0] = v7;
    v11 = *a2;
    v22 = v9;
    v12 = Coord::Subtract(v26, (3 * v11 + *a1) / 4, (3 * v10 + v6) / 4, (3 * *((int*)(a2) + 2) + *((int*)(a1) + 2)) / 4);
    v13 = v12[1];
    v14 = v12[2];
    v23 = *v12;
    v24 = v13;
    v15 = *((int*)(a1) + 2);
    v25 = v14;
    lpVtbl = g_TacticalClass_Instance->__tail_0;
    if ( v15 <= v22 )
    ((void (__stdcall *)(int *, int *, int, int, int, int))lpVtbl[3].QueryInterface)(v21, a1, a3, 0, v19, v20);
    else
    ((void (__stdcall *)(int *, int *, int, int, int, int))lpVtbl[3].QueryInterface)(a1, v21, a3, 0, v19, v20);
    v17 = g_TacticalClass_Instance->__tail_0;
    if ( *((int*)(a2) + 2) <= v26[1] )
    return ((int (__stdcall *)(int *, int *))v17[3].QueryInterface)(&v25, a2);
    else
    return ((int (__stdcall *)(int *, int *))v17[3].QueryInterface)(a2, &v25);
}
}
} // namespace gamemd

// 0x6F6030
namespace gamemd {
int sub_6F6030(int * a1, unsigned int * a2, int a3)
{
{
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    struct IPersistStreamVtbl *lpVtbl;
    int v11[3];
    v4 = *a1;
    v5 = *((int*)(a1) + 1);
    v6 = *((int*)(a1) + 2);
    v7 = 3 * v5 + *((int*)(a2) + 1);
    v8 = 3 * v6 + *((int*)(a2) + 2);
    v11[0] = (3 * v4 + *a2) / 4;
    v11[1] = v7 / 4;
    v11[2] = v8 / 4;
    lpVtbl = g_TacticalClass_Instance->__tail_0;
    if ( v6 <= v8 / 4 )
    return ((int (__stdcall *)(int *, int *, int, int))lpVtbl[3].QueryInterface)(v11, a1, a3, 0);
    else
    return ((int (__stdcall *)(int *, int *, int, int))lpVtbl[3].QueryInterface)(a1, v11, a3, 0);
}
}
} // namespace gamemd

// 0x6FF950
namespace gamemd {
void nullsub_45()
{
  ;
}
} // namespace gamemd
