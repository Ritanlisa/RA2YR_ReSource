// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Pathfinding_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/MapSeedClass_e4.hpp"
#include "e4/classes/PlayerClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Player_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ParticleTypeClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/Heap_e4.hpp"  // G57w10 D supply

// 0x5A5360
namespace gamemd {  // G42.18 ns repair
unsigned int * Pathfinding::ExpandNode(short * a1, int a2)
{

  int v1; // edi
  int v2; // eax
  unsigned int *v3; // ebx
  Heap *v4; // eax
  Heap *v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  bool v10; // sf
  int i; // eax
  __int16 *v12; // ecx
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  Heap v16; // edi
  float *v18; // ebp
  unsigned int eax17; // eax
  CellStruct *v19; // ebp
  Heap v20; // eax
  CellStruct *v21; // edi
  VectorClass *v22; // eax
  int v23; // edi
  bool v24; // cc
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  float *v29; // ebp
  int v30; // edx
  Cell *v31; // edi
  int v32; // ecx
  int v33; // edx
  __int16 *v34; // eax
  __int16 *v35; // eax
  int v36; // edi
  __int64 v37; // rax
  int v38; // eax
  int v39; // ecx
  double v40; // st6
  float *v41; // ebx
  int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // edx
  Heap v45; // edi
  float *v47; // ebp
  Heap eax53; // eax
  Heap v48; // eax
  CellStruct *v49; // edi
  unsigned int *v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // ebp
  int v54; // ebp
  char v55; // bl
  int v56; // eax
  int v57; // edx
  int v58; // eax
  int v59; // ecx
  int v60; // eax
  int k; // ecx
  int v62; // eax
  int v63; // ecx
  unsigned int v64; // esi
  unsigned int v65; // eax
  int v66; // eax
  int m; // ebp
  int n; // esi
  int j; // esi
  unsigned int *v71; // eax
  __int16 v72[2]; // [esp+10h] [ebp-50h] BYREF
  CellStruct *v73; // [esp+14h] [ebp-4Ch]
  int v74; // [esp+18h] [ebp-48h]
  int v75; // [esp+1Ch] [ebp-44h]
  __int64 v76; // [esp+20h] [ebp-40h]
  __int64 v77; // [esp+28h] [ebp-38h]
  __int16 v78[4]; // [esp+30h] [ebp-30h] BYREF
  __int16 v79[8]; // [esp+38h] [ebp-28h] BYREF
  unsigned int v80[2]; // [esp+48h] [ebp-18h] BYREF
  __int64 v81; // [esp+50h] [ebp-10h]

  v1 = 10 * (int)a1.field_4; /*0x5a536e*/
  v2 = __2_YAPAXI_Z(80 * (int)a1.field_4); /*0x5a5378*/
  if ( v2 ) /*0x5a5384*/
  {
    v3 = (unsigned int *)v2; /*0x5a5389*/
    *(unsigned int *)v79 = v1 - 1; /*0x5a538b*/
  }
  else
  {
    v3 = 0; /*0x5a5391*/
  }
  *(unsigned int *)v78 = v3; /*0x5a5395*/
  v4 = (Heap *)__2_YAPAXI_Z(0x14u); /*0x5a5399*/
  v5 = v4; /*0x5a539e*/
  if ( v4 ) /*0x5a53a5*/
  {
    v4[3] = 0; /*0x5a53ae*/
    v4[4] = (Heap)-1; /*0x5a53b2*/
    *v4 = 0; /*0x5a53b9*/
    v4[1] = (Heap)v1; /*0x5a53bb*/
    v6 = __2_YAPAXI_Z(4 * v1 + 4); /*0x5a53be*/
    v7 = (int)v5[1]; /*0x5a53c3*/
    v5[2] = (Heap)v6; /*0x5a53c6*/
    v8 = 0; /*0x5a53cc*/
    if ( v7 >= 0 ) /*0x5a53d0*/
    {
      do /*0x5a53df*/
      {
        ++v8; /*0x5a53d5*/
        *(unsigned int *)(*(unsigned int *)&v5[2] + 4 * v8 - 4) = 0; /*0x5a53d6*/
      }
      while ( v8 <= *(unsigned int *)&v5[1] ); /*0x5a53df*/
    }
  }
  else
  {
    v5 = 0; /*0x5a53e3*/
  }
  v9 = 0; /*0x5a53e7*/
  v10 = *(unsigned int *)v5 < 0; /*0x5a53e9*/
  v74 = 0; /*0x5a53eb*/
  if ( !v10 ) /*0x5a53ef*/
  {
    do /*0x5a53fd*/
    {
      ++v9; /*0x5a53f4*/
      *(unsigned int *)(*(unsigned int *)&v5[2] + 4 * v9 - 4) = 0; /*0x5a53f5*/
    }
    while ( v9 <= *(unsigned int *)v5 ); /*0x5a53fd*/
  }
  *v5 = 0; /*0x5a5404*/
  LayerClass::CellIteratorReset((LayerClass *)&dword_87F7E8); /*0x5a5406*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x5a5417*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8) )
  {
    *(unsigned int *)&v78[2] = *(unsigned int *)(i + 36); /*0x5a541c*/
    *(unsigned int *)&dword_ABED10[40 * v78[2] + 30 + 40 * g_MapCellWidth * v78[3]] = 0; /*0x5a5441*/
  }
  v12 = (__int16 *)a1.field_0; /*0x5a544e*/
  *v3 = *(unsigned int *)a1.field_0; /*0x5a5454*/
  v3->vtable2 = 0; /*0x5a5456*/
  v13 = 5 * (*v12 + g_MapCellWidth * v12[1]); /*0x5a546f*/
  v75 = 1; /*0x5a547a*/
  *(unsigned int *)&dword_ABED10[8 * v13 + 30] = 1; /*0x5a547e*/
  v14 = *(unsigned int *)v5 + 1; /*0x5a5487*/
  *(unsigned int *)&v78[2] = v3->vtable2; /*0x5a548a*/
  v15 = v14 >> 1; /*0x5a5491*/
  if ( v14 < *(unsigned int *)&v5[1] ) /*0x5a5495*/
  {
    for ( ; v14 > 1; v15 >>= 1 ) /*0x5a5499*/
    {
      v16 = v5[2]; /*0x5a549b*/
      v18 = *(float **)(*(unsigned int *)&v16 + 4 * v15); /*0x5a549e*/
      if ( v18[1] <= (double)*(float *)&v78[2] ) /*0x5a54ad*/
        break; /*0x5a54ad*/
      *(unsigned int *)(*(unsigned int *)&v16 + 4 * v14) = v18; /*0x5a54af*/
      v14 = v15; /*0x5a54b2*/
    }
    *(unsigned int *)(*(unsigned int *)&v5[2] + 4 * v14) = v3; /*0x5a54c0*/
    eax17 = (unsigned int)v5[3]; /*0x5a54c5*/
    ++*(unsigned int *)v5; /*0x5a54cb*/
    if ( (unsigned int)v3 > eax17 ) /*0x5a54cd*/
      v5[3] = (Heap)v3; /*0x5a54cf*/
    if ( (unsigned int)v3 < *(unsigned int *)&v5[4] ) /*0x5a54d5*/
      v5[4] = (Heap)v3; /*0x5a54d7*/
  }
  if ( *v5 ) /*0x5a54da*/
  {
    v20 = v5[2]; /*0x5a54e4*/
    v21 = *(CellStruct **)(*(unsigned int *)&v20 + 4); /*0x5a54ec*/
    *(unsigned int *)(*(unsigned int *)&v20 + 4) = *(unsigned int *)(*(unsigned int *)&v20 + 4 * *(unsigned int *)v5); /*0x5a54ef*/
    *(unsigned int *)(*(unsigned int *)&v5[2] + 4 * (*(unsigned int *)v5)--) = 0; /*0x5a54f7*/
    Heap::SiftDown(v5, 1); /*0x5a5505*/
    v19 = v21; /*0x5a550a*/
  }
  else
  {
    v19 = 0; /*0x5a54e0*/
  }
  v73 = v19; /*0x5a550e*/
  v22 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x5a5512*/
  v23 = (int)v22; /*0x5a5517*/
  if ( v22 ) /*0x5a551e*/
  {
    VectorClass::CellConstructor(v22, 0, 0); /*0x5a5526*/
    *(unsigned int *)v23 = &vt_DynamicVectorClass_Cell; /*0x5a552b*/
    v23->u32_14 = 10; /*0x5a5531*/
    v23->q010 = 0; /*0x5a5538*/
  }
  else
  {
    v23 = 0; /*0x5a5541*/
  }
  LODWORD(v77) = v23; /*0x5a5547*/
  v24 = (int)a1.field_4 <= 0; /*0x5a554b*/
  v23->u32_14 = (char *)a1.field_4 + 2; /*0x5a5550*/
  if ( !v24 ) /*0x5a5553*/
  {
    while ( v19 ) /*0x5a5565*/
    {
      *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)v19) + 14) = dword_ABC2B0; /*0x5a557c*/
      v25 = v23->Capacity; /*0x5a557f*/
      if ( v23->q010 < v25 /*0x5a55a2*/
        || (*(unsigned char *)(v23 + 13) || !v25)
        && (v26 = v23->u32_14, v26 > 0)
        && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v23 + 8))(v23, v25 + v26, 0) )
      {
        v27 = v23->q010; /*0x5a55a9*/
        v28 = v23->Items; /*0x5a55ac*/
        v23->q010 = v27 + 1; /*0x5a55b2*/
        *(unsigned int *)(v28 + 4 * v27) = v19->field_0; /*0x5a55b8*/
      }
      LODWORD(v76) = 0; /*0x5a55bf*/
      v29 = (float *)&v3[2 * v75]; /*0x5a55c7*/
      do /*0x5a5789*/
      {
        *(unsigned int *)&v78[2] = *CellStruct::Add(v73, v80, (unsigned short *)(4 * (v76 & 7) + 9041544)); /*0x5a55ef*/
        *(unsigned int *)v72 = *(unsigned int *)&v78[2]; /*0x5a55f3*/
        v30 = v78[3] + v78[2]; /*0x5a55ff*/
        if ( v30 > dword_ABED04 /*0x5a5626*/
          && v78[2] - v78[3] < dword_ABED04
          && v78[3] - v78[2] < dword_ABED04
          && v30 <= dword_ABED08 )
        {
          v31 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v72); /*0x5a563b*/
          if ( (unsigned __int8)Cell::IsEmpty(v31) ) /*0x5a563f*/
          {
            if ( *&v31->u32_44 == -1 ) /*0x5a5650*/
            {
              v32 = v72[1]; /*0x5a5656*/
              v33 = v72[0]; /*0x5a5667*/
              v34 = &dword_ABED10[40 * v72[0] + 40 * v72[1] * g_MapCellWidth]; /*0x5a5678*/
              if ( *((unsigned int *)v34 + 15) != 1 && !*((unsigned char *)v34 + 69) ) /*0x5a5684*/
              {
                v35 = (__int16 *)a1.field_0; /*0x5a568f*/
                *v29 = *(float *)v72; /*0x5a5693*/
                v36 = *v35 - v33; /*0x5a569f*/
                v37 = v35[1] - v32; /*0x5a56a1*/
                *(unsigned int *)&v78[2] = abs32(v36); /*0x5a56b1*/
                if ( *(int *)&v78[2] <= (int)((HIDWORD(v37) ^ v37) - HIDWORD(v37)) ) /*0x5a56b5*/
                  *(unsigned int *)&v78[2] = (HIDWORD(v37) ^ v37) - HIDWORD(v37); /*0x5a56b7*/
                v81 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a56c5*/
                v38 = v72[1]; /*0x5a56d5*/
                v39 = v72[0]; /*0x5a56e0*/
                v40 = (double)*(int *)&v78[2]; /*0x5a56eb*/
                v41 = v29; /*0x5a56ef*/
                v29 += 2; /*0x5a56f1*/
                *(unsigned int *)&v78[2] = v29; /*0x5a56f4*/
                *(v29 - 1) = (double)v81 * 3.0 * 2.328306437080797e-10 + v40; /*0x5a56fa*/
                *(unsigned int *)&dword_ABED10[40 * v39 + 30 + 40 * g_MapCellWidth * v38] = 1; /*0x5a5711*/
                v42 = *((unsigned int *)v41 + 1); /*0x5a571f*/
                v43 = *(unsigned int *)v5 + 1; /*0x5a5723*/
                ++v75; /*0x5a5724*/
                *(unsigned int *)v79 = v42; /*0x5a572a*/
                v44 = v43 >> 1; /*0x5a5731*/
                if ( v43 < *(unsigned int *)&v5[1] ) /*0x5a5735*/
                {
                  if ( v43 > 1 ) /*0x5a573a*/
                  {
                    do /*0x5a575a*/
                    {
                      v45 = v5[2]; /*0x5a573c*/
                      v47 = *(float **)(*(unsigned int *)&v45 + 4 * v44); /*0x5a573f*/
                      if ( v47[1] <= (double)*(float *)v79 ) /*0x5a574e*/
                        break; /*0x5a574e*/
                      *(unsigned int *)(*(unsigned int *)&v45 + 4 * v43) = v47; /*0x5a5750*/
                      v43 = v44; /*0x5a5753*/
                      v44 >>= 1; /*0x5a5755*/
                    }
                    while ( v43 > 1 ); /*0x5a575a*/
                    v29 = *(float **)&v78[2]; /*0x5a575c*/
                  }
                  *(unsigned int *)(*(unsigned int *)&v5[2] + 4 * v43) = v41; /*0x5a5763*/
                  eax53 = v5[3]; /*0x5a5768*/
                  ++*(unsigned int *)v5; /*0x5a576e*/
                  if ( (unsigned int)v41 > *(unsigned int *)&eax53 ) /*0x5a5770*/
                    v5[3] = (Heap)v41; /*0x5a5772*/
                  if ( (unsigned int)v41 < *(unsigned int *)&v5[4] ) /*0x5a5778*/
                    v5[4] = (Heap)v41; /*0x5a577a*/
                }
              }
            }
          }
        }
        LODWORD(v76) = v76 + 1; /*0x5a5785*/
      }
      while ( (int)v76 < 8 ); /*0x5a5789*/
      ++v74; /*0x5a5794*/
      if ( *v5 ) /*0x5a5798*/
      {
        v48 = v5[2]; /*0x5a57a4*/
        v49 = *(CellStruct **)(*(unsigned int *)&v48 + 4); /*0x5a57ac*/
        *(unsigned int *)(*(unsigned int *)&v48 + 4) = *(unsigned int *)(*(unsigned int *)&v48 + 4 * *(unsigned int *)v5); /*0x5a57af*/
        *(unsigned int *)(*(unsigned int *)&v5[2] + 4 * (*(unsigned int *)v5)--) = 0; /*0x5a57b7*/
        Heap::SiftDown(v5, 1); /*0x5a57c5*/
        v73 = v49; /*0x5a57ca*/
      }
      else
      {
        v73 = 0; /*0x5a579e*/
      }
      v23 = v77; /*0x5a57d6*/
      if ( v74 >= (int)a1.field_4 ) /*0x5a57dc*/
      {
        v3 = *(unsigned int **)v78; /*0x5a57e2*/
        break; /*0x5a57e2*/
      }
      v19 = v73; /*0x5a555b*/
      v3 = *(unsigned int **)v78; /*0x5a555f*/
    }
  }
  __3_YAXPAX_Z(v3); /*0x5a57e6*/
  if ( v5 ) /*0x5a57f1*/
  {
    __3_YAXPAX_Z(*(void **)&v5[2]); /*0x5a57f7*/
    __3_YAXPAX_Z(v5); /*0x5a57fd*/
  }
  v50 = globalHelper_0A7640(v79, v23); /*0x5a580b*/
  v81 = *(unsigned long long *)v50; /*0x5a5812*/
  v51 = v50[2]; /*0x5a5821*/
  v52 = v50[3]; /*0x5a5827*/
  if ( v74 <= 100 /*0x5a5853*/
    || (v53 = v23->q010,
        a1.field_4 = (void *)(v51 * v52),
        a1.field_0 = v53,
        (double)v53 * 1.6 <= (double)(v51 * v52)) )
  {
    for ( j = v23->q010 - 1; j >= 0; v71[14] = 0xFFFF ) /*0x5a5aa3*/
      v71 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)(*(unsigned int *)(v23 + 4) + 4 * j--)); /*0x5a5ab6*/
    if ( v23 ) /*0x5a5ac3*/
      (**(void (***)(int, int))v23)(v23, 1); /*0x5a5acb*/
    return 0; /*0x5a5ad0*/
  }
  else
  {
    v54 = v53 - 1; /*0x5a5859*/
    v55 = 0; /*0x5a585a*/
    if ( v54 >= 0 ) /*0x5a585e*/
    {
      while ( 1 ) /*0x5a5868*/
      {
        v56 = *(unsigned int *)(v23 + 4); /*0x5a5868*/
        a1.field_4 = 0; /*0x5a586b*/
        a1.field_0 = *(unsigned int *)(v56 + 4 * v54); /*0x5a5872*/
        do /*0x5a5910*/
        {
          *(unsigned int *)v79 = *CellStruct::Add(&a1, v80, (unsigned short *)(4 * (v55 & 7) + 9041544)); /*0x5a5897*/
          *(unsigned int *)&v78[2] = *(unsigned int *)v79; /*0x5a589b*/
          v57 = v79[1] + v79[0]; /*0x5a58a7*/
          if ( v57 > dword_ABED04 /*0x5a58dd*/
            && v79[0] - v79[1] < dword_ABED04
            && v79[1] - v79[0] < dword_ABED04
            && v57 <= dword_ABED08
            && *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, &v78[2]) + 14) != dword_ABC2B0 )
          {
            v58 = v23->q010; /*0x5a58df*/
            if ( v54 < v58 ) /*0x5a58e4*/
            {
              v59 = v58 - 1; /*0x5a58e6*/
              v60 = v54; /*0x5a58e9*/
              for ( v23->q010 = v59; /*0x5a58f0*/
                    v60 < v23->q010;
                    *(unsigned int *)(v23->Items + 4 * v60 - 4) = *(unsigned int *)(v23->Items + 4 * v60) )
              {
                ++v60; /*0x5a58f5*/
              }
            }
          }
          v55 = LOBYTE(a1.field_4) + 1; /*0x5a5908*/
          ++a1.field_4; /*0x5a590c*/
        }
        while ( (int)a1.field_4 < 8 ); /*0x5a5910*/
        if ( --v54 < 0 ) /*0x5a5917*/
          break; /*0x5a5917*/
        v55 = 0; /*0x5a5866*/
      }
    }
    for ( k = 0; k < v23->q010; HIBYTE(dword_ABED10[v62 + 34]) = 1 ) /*0x5a5926*/
    {
      v62 = 40 /*0x5a5948*/
          * (*(__int16 *)(v23->Items + 4 * k) + g_MapCellWidth
                                                        * *(__int16 *)(v23->Items + 4 * k + 2));
      ++k; /*0x5a594b*/
    }
    v63 = v23->q010; /*0x5a5958*/
    if ( v63 / 3 > 0 ) /*0x5a596b*/
    {
      *(unsigned int *)&v78[2] = v63 / 3; /*0x5a5971*/
      do /*0x5a5a8d*/
      {
        v64 = v23->q010 - 1; /*0x5a597c*/
        v81 = v23->q010; /*0x5a5980*/
        *(double *)v79 = (double)v81; /*0x5a5988*/
        do /*0x5a59b3*/
        {
          v77 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a5996*/
          LOWORD(v65) = Math::RoundToInt((double)v77 * *(double *)v79 * 2.328306437080797e-10); /*0x5a59ac*/
        }
        while ( v65 > v64 ); /*0x5a59b3*/
        v80[0] = *(unsigned int *)(*(unsigned int *)(v23 + 4) + 4 * v65); /*0x5a59bb*/
        do /*0x5a59e7*/
        {
          v76 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a59c9*/
          LOWORD(v66) = Math::RoundToInt((double)v76 * 0.000000001629814505956558); /*0x5a59db*/
          *(unsigned int *)v78 = v66; /*0x5a59e3*/
        }
        while ( (unsigned int)v66 > 6 ); /*0x5a59e7*/
        LOBYTE(a1.field_4) = 1; /*0x5a59ec*/
        if ( v66 <= 3 ) /*0x5a59f1*/
          goto LABEL_98; /*0x5a59f1*/
        for ( m = 0; m < 2; ++m ) /*0x5a59f3*/
        {
          for ( n = 0; n < 2; ++n ) /*0x5a59f5*/
          {
            LOWORD(a1.field_0) = m + LOWORD(v80[0]); /*0x5a5a04*/
            HIWORD(a1.field_0) = HIWORD(v80[0]) + n; /*0x5a5a09*/
            *(unsigned int *)v79 = a1.field_0; /*0x5a5a21*/
            if ( !HIBYTE(dword_ABED10[40 * (__int16)(m + LOWORD(v80[0])) /*0x5a5a51*/
                                    + 34
                                    + 40 * g_MapCellWidth * (__int16)(HIWORD(v80[0]) + n)])
              || *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v79) + 14) != dword_ABC2B0 )
            {
              LOBYTE(a1.field_4) = 0; /*0x5a5a53*/
            }
          }
        }
        if ( LOBYTE(a1.field_4) ) /*0x5a5a6a*/
LABEL_98:
          PlaceMapSeedClassBuildings(dword_AA10A4 + *(unsigned int *)v78, v80, -1, -1); /*0x5a5a7f*/
        --*(unsigned int *)&v78[2]; /*0x5a5a89*/
      }
      while ( *(unsigned int *)&v78[2] ); /*0x5a5a8d*/
    }
    return (unsigned int *)v23; /*0x5a5a93*/
  }

}
} // namespace gamemd