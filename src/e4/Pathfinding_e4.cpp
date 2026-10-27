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
unsigned int * Pathfinding::ExpandNode(CellStruct * a1, int a2)
{

  int v2; // edi
  int v3; // eax
  unsigned int *v4; // ebx
  Heap *v5; // eax
  Heap *v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  bool v11; // sf
  int i; // eax
  CellStruct *v13; // ecx
  int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  Heap v17; // edi
  float *v18; // ebp
  unsigned int v19; // eax
  CellStruct *v20; // ebp
  Heap v21; // eax
  CellStruct *v22; // edi
  VectorClass *v23; // eax
  VectorClass *v24; // edi
  bool v25; // cc
  int Capacity; // eax
  int v27; // ecx
  int ptr_0; // eax
  int Items; // edx
  float *v30; // ebp
  int v31; // edx
  Cell *v32; // edi
  int v33; // ecx
  int v34; // edx
  __int16 *v35; // eax
  CellStruct *v36; // eax
  int v37; // edi
  __int64 v38; // rax
  int v39; // eax
  int v40; // ecx
  double v41; // st6
  float *v42; // ebx
  int v43; // eax
  unsigned int v44; // ecx
  unsigned int v45; // edx
  Heap v46; // edi
  float *v47; // ebp
  Heap v48; // eax
  Heap v49; // eax
  CellStruct *v50; // edi
  unsigned int *v51; // eax
  int v52; // ecx
  int v53; // eax
  CellStruct *v54; // ebp
  int v55; // ebp
  char v56; // bl
  int v57; // eax
  int v58; // edx
  int v59; // eax
  int v60; // ecx
  int v61; // eax
  int k; // ecx
  int v63; // eax
  int v64; // ecx
  unsigned int v65; // esi
  unsigned int v66; // eax
  int v67; // eax
  int m; // ebp
  int n; // esi
  int j; // esi
  unsigned int *v72; // eax
  __int16 v73[2]; // [esp+10h] [ebp-50h] BYREF
  CellStruct *v74; // [esp+14h] [ebp-4Ch]
  int v75; // [esp+18h] [ebp-48h]
  int v76; // [esp+1Ch] [ebp-44h]
  __int64 v77; // [esp+20h] [ebp-40h]
  __int64 v78; // [esp+28h] [ebp-38h]
  __int16 v79[4]; // [esp+30h] [ebp-30h] BYREF
  __int16 v80[8]; // [esp+38h] [ebp-28h] BYREF
  unsigned int v81[2]; // [esp+48h] [ebp-18h] BYREF
  __int64 v82; // [esp+50h] [ebp-10h]

  v2 = 10 * a2; /*0x5a536e*/
  v3 = __2_YAPAXI_Z(80 * a2); /*0x5a5378*/
  if ( v3 ) /*0x5a5384*/
  {
    v4 = (unsigned int *)v3; /*0x5a5389*/
    *(unsigned int *)v80 = v2 - 1; /*0x5a538b*/
  }
  else
  {
    v4 = 0; /*0x5a5391*/
  }
  *(unsigned int *)v79 = v4; /*0x5a5395*/
  v5 = (Heap *)__2_YAPAXI_Z(0x14u); /*0x5a5399*/
  v6 = v5; /*0x5a539e*/
  if ( v5 ) /*0x5a53a5*/
  {
    v5[3] = 0; /*0x5a53ae*/
    v5[4] = (Heap)-1; /*0x5a53b2*/
    *v5 = 0; /*0x5a53b9*/
    v5[1] = (Heap)v2; /*0x5a53bb*/
    v7 = __2_YAPAXI_Z(4 * v2 + 4); /*0x5a53be*/
    v8 = (int)v6[1]; /*0x5a53c3*/
    v6[2] = (Heap)v7; /*0x5a53c6*/
    v9 = 0; /*0x5a53cc*/
    if ( v8 >= 0 ) /*0x5a53d0*/
    {
      do /*0x5a53df*/
      {
        ++v9; /*0x5a53d5*/
        *(unsigned int *)(*(unsigned int *)&v6[2] + 4 * v9 - 4) = 0; /*0x5a53d6*/
      }
      while ( v9 <= *(unsigned int *)&v6[1] ); /*0x5a53df*/
    }
  }
  else
  {
    v6 = 0; /*0x5a53e3*/
  }
  v10 = 0; /*0x5a53e7*/
  v11 = *(unsigned int *)v6 < 0; /*0x5a53e9*/
  v75 = 0; /*0x5a53eb*/
  if ( !v11 ) /*0x5a53ef*/
  {
    do /*0x5a53fd*/
    {
      ++v10; /*0x5a53f4*/
      *(unsigned int *)(*(unsigned int *)&v6[2] + 4 * v10 - 4) = 0; /*0x5a53f5*/
    }
    while ( v10 <= *(unsigned int *)v6 ); /*0x5a53fd*/
  }
  *v6 = 0; /*0x5a5404*/
  ((LayerClass *)&dword_87F7E8)->CellIteratorReset(); /*0x5a5406*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x5a5417*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8) )
  {
    *(unsigned int *)&v79[2] = *(unsigned int *)(i + 36); /*0x5a541c*/
    *(unsigned int *)&dword_ABED10[40 * v79[2] + 30 + 40 * g_MapCellWidth * v79[3]] = 0; /*0x5a5441*/
  }
  v13 = a1; /*0x5a544e*/
  *v4 = *(unsigned int *)&a1->X; /*0x5a5454*/
  v4[1] = 0; /*0x5a5456*/
  v14 = 5 * (v13->X + g_MapCellWidth * v13->Y); /*0x5a546f*/
  v76 = 1; /*0x5a547a*/
  *(unsigned int *)&dword_ABED10[8 * v14 + 30] = 1; /*0x5a547e*/
  v15 = *(unsigned int *)v6 + 1; /*0x5a5487*/
  *(unsigned int *)&v79[2] = v4[1]; /*0x5a548a*/
  v16 = v15 >> 1; /*0x5a5491*/
  if ( v15 < *(unsigned int *)&v6[1] ) /*0x5a5495*/
  {
    for ( ; v15 > 1; v16 >>= 1 ) /*0x5a5499*/
    {
      v17 = v6[2]; /*0x5a549b*/
      v18 = *(float **)(*(unsigned int *)&v17 + 4 * v16); /*0x5a549e*/
      if ( v18[1] <= (double)*(float *)&v79[2] ) /*0x5a54ad*/
        break; /*0x5a54ad*/
      *(unsigned int *)(*(unsigned int *)&v17 + 4 * v15) = v18; /*0x5a54af*/
      v15 = v16; /*0x5a54b2*/
    }
    *(unsigned int *)(*(unsigned int *)&v6[2] + 4 * v15) = v4; /*0x5a54c0*/
    v19 = (unsigned int)v6[3]; /*0x5a54c5*/
    ++*(unsigned int *)v6; /*0x5a54cb*/
    if ( (unsigned int)v4 > v19 ) /*0x5a54cd*/
      v6[3] = (Heap)v4; /*0x5a54cf*/
    if ( (unsigned int)v4 < *(unsigned int *)&v6[4] ) /*0x5a54d5*/
      v6[4] = (Heap)v4; /*0x5a54d7*/
  }
  if ( *v6 ) /*0x5a54da*/
  {
    v21 = v6[2]; /*0x5a54e4*/
    v22 = *(CellStruct **)(*(unsigned int *)&v21 + 4); /*0x5a54ec*/
    *(unsigned int *)(*(unsigned int *)&v21 + 4) = *(unsigned int *)(*(unsigned int *)&v21 + 4 * *(unsigned int *)v6); /*0x5a54ef*/
    *(unsigned int *)(*(unsigned int *)&v6[2] + 4 * (*(unsigned int *)v6)--) = 0; /*0x5a54f7*/
    Heap::SiftDown(v6, 1); /*0x5a5505*/
    v20 = v22; /*0x5a550a*/
  }
  else
  {
    v20 = 0; /*0x5a54e0*/
  }
  v74 = v20; /*0x5a550e*/
  v23 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x5a5512*/
  v24 = v23; /*0x5a5517*/
  if ( v23 ) /*0x5a551e*/
  {
    (v23)->CellConstructor(0, 0); /*0x5a5526*/
    /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E3890) */  /*0x5a552b*/
    v24[1].Items = 10; /*0x5a5531*/
    v24[1].ptr_0 = 0; /*0x5a5538*/
  }
  else
  {
    v24 = 0; /*0x5a5541*/
  }
  LODWORD(v78) = v24; /*0x5a5547*/
  v25 = a2 <= 0; /*0x5a554b*/
  v24[1].Items = a2 + 2; /*0x5a5550*/
  if ( !v25 ) /*0x5a5553*/
  {
    while ( v20 ) /*0x5a5565*/
    {
      *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, &v20->X) + 14) = dword_ABC2B0; /*0x5a557c*/
      Capacity = v24->Capacity; /*0x5a557f*/
      if ( v24[1].ptr_0 < Capacity /*0x5a55a2*/
        || (v24->IsAllocated[0] || !Capacity)
        && (v27 = v24[1].Items, v27 > 0)
        && (*(unsigned __int8 (**)(VectorClass *, int, unsigned int))(v24->ptr_0 + 8))(v24, Capacity + v27, 0) )
      {
        ptr_0 = v24[1].ptr_0; /*0x5a55a9*/
        Items = v24->Items; /*0x5a55ac*/
        v24[1].ptr_0 = ptr_0 + 1; /*0x5a55b2*/
        *(unsigned int *)(Items + 4 * ptr_0) = *(unsigned int *)&v20->X; /*0x5a55b8*/
      }
      (v77) = ((v77) & 0xFFFFFFFF00000000ull) | ((0) & 0xFFFFFFFFull); /*0x5a55bf*/
      v30 = (float *)&v4[2 * v76]; /*0x5a55c7*/
      do /*0x5a5789*/
      {
        *(unsigned int *)&v79[2] = *CellStruct::Add(v74, v81, (unsigned short *)(4 * (v77 & 7) + 9041544)); /*0x5a55ef*/
        *(unsigned int *)v73 = *(unsigned int *)&v79[2]; /*0x5a55f3*/
        v31 = v79[3] + v79[2]; /*0x5a55ff*/
        if ( v31 > dword_ABED04 /*0x5a5626*/
          && v79[2] - v79[3] < dword_ABED04
          && v79[3] - v79[2] < dword_ABED04
          && v31 <= dword_ABED08 )
        {
          v32 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v73); /*0x5a563b*/
          if ( (unsigned __int8)Cell::IsEmpty(v32) ) /*0x5a563f*/
          {
            if ( *(unsigned int *)&v32->__pad_3C[8] == -1 ) /*0x5a5650*/
            {
              v33 = v73[1]; /*0x5a5656*/
              v34 = v73[0]; /*0x5a5667*/
              v35 = &dword_ABED10[40 * v73[0] + 40 * v73[1] * g_MapCellWidth]; /*0x5a5678*/
              if ( *((unsigned int *)v35 + 15) != 1 && !*((unsigned char *)v35 + 69) ) /*0x5a5684*/
              {
                v36 = a1; /*0x5a568f*/
                *v30 = *(float *)v73; /*0x5a5693*/
                v37 = v36->X - v34; /*0x5a569f*/
                v38 = v36->Y - v33; /*0x5a56a1*/
                *(unsigned int *)&v79[2] = abs32(v37); /*0x5a56b1*/
                if ( *(int *)&v79[2] <= (int)(((((v38) >> 32) & 0xFFFFFFFFu) ^ v38) - (((v38) >> 32) & 0xFFFFFFFFu)) ) /*0x5a56b5*/
                  *(unsigned int *)&v79[2] = ((((v38) >> 32) & 0xFFFFFFFFu) ^ v38) - (((v38) >> 32) & 0xFFFFFFFFu); /*0x5a56b7*/
                v82 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a56c5*/
                v39 = v73[1]; /*0x5a56d5*/
                v40 = v73[0]; /*0x5a56e0*/
                v41 = (double)*(int *)&v79[2]; /*0x5a56eb*/
                v42 = v30; /*0x5a56ef*/
                v30 += 2; /*0x5a56f1*/
                *(unsigned int *)&v79[2] = v30; /*0x5a56f4*/
                *(v30 - 1) = (double)v82 * 3.0 * 2.328306437080797e-10 + v41; /*0x5a56fa*/
                *(unsigned int *)&dword_ABED10[40 * v40 + 30 + 40 * g_MapCellWidth * v39] = 1; /*0x5a5711*/
                v43 = *((unsigned int *)v42 + 1); /*0x5a571f*/
                v44 = *(unsigned int *)v6 + 1; /*0x5a5723*/
                ++v76; /*0x5a5724*/
                *(unsigned int *)v80 = v43; /*0x5a572a*/
                v45 = v44 >> 1; /*0x5a5731*/
                if ( v44 < *(unsigned int *)&v6[1] ) /*0x5a5735*/
                {
                  if ( v44 > 1 ) /*0x5a573a*/
                  {
                    do /*0x5a575a*/
                    {
                      v46 = v6[2]; /*0x5a573c*/
                      v47 = *(float **)(*(unsigned int *)&v46 + 4 * v45); /*0x5a573f*/
                      if ( v47[1] <= (double)*(float *)v80 ) /*0x5a574e*/
                        break; /*0x5a574e*/
                      *(unsigned int *)(*(unsigned int *)&v46 + 4 * v44) = v47; /*0x5a5750*/
                      v44 = v45; /*0x5a5753*/
                      v45 >>= 1; /*0x5a5755*/
                    }
                    while ( v44 > 1 ); /*0x5a575a*/
                    v30 = *(float **)&v79[2]; /*0x5a575c*/
                  }
                  *(unsigned int *)(*(unsigned int *)&v6[2] + 4 * v44) = v42; /*0x5a5763*/
                  v48 = v6[3]; /*0x5a5768*/
                  ++*(unsigned int *)v6; /*0x5a576e*/
                  if ( (unsigned int)v42 > *(unsigned int *)&v48 ) /*0x5a5770*/
                    v6[3] = (Heap)v42; /*0x5a5772*/
                  if ( (unsigned int)v42 < *(unsigned int *)&v6[4] ) /*0x5a5778*/
                    v6[4] = (Heap)v42; /*0x5a577a*/
                }
              }
            }
          }
        }
        (v77) = ((v77) & 0xFFFFFFFF00000000ull) | ((v77 + 1) & 0xFFFFFFFFull); /*0x5a5785*/
      }
      while ( (int)v77 < 8 ); /*0x5a5789*/
      ++v75; /*0x5a5794*/
      if ( *v6 ) /*0x5a5798*/
      {
        v49 = v6[2]; /*0x5a57a4*/
        v50 = *(CellStruct **)(*(unsigned int *)&v49 + 4); /*0x5a57ac*/
        *(unsigned int *)(*(unsigned int *)&v49 + 4) = *(unsigned int *)(*(unsigned int *)&v49 + 4 * *(unsigned int *)v6); /*0x5a57af*/
        *(unsigned int *)(*(unsigned int *)&v6[2] + 4 * (*(unsigned int *)v6)--) = 0; /*0x5a57b7*/
        Heap::SiftDown(v6, 1); /*0x5a57c5*/
        v74 = v50; /*0x5a57ca*/
      }
      else
      {
        v74 = 0; /*0x5a579e*/
      }
      v24 = (VectorClass *)v78; /*0x5a57d6*/
      if ( v75 >= a2 ) /*0x5a57dc*/
      {
        v4 = *(unsigned int **)v79; /*0x5a57e2*/
        break; /*0x5a57e2*/
      }
      v20 = v74; /*0x5a555b*/
      v4 = *(unsigned int **)v79; /*0x5a555f*/
    }
  }
  __3_YAXPAX_Z(v4); /*0x5a57e6*/
  if ( v6 ) /*0x5a57f1*/
  {
    __3_YAXPAX_Z(*(void **)&v6[2]); /*0x5a57f7*/
    __3_YAXPAX_Z(v6); /*0x5a57fd*/
  }
  v51 = globalHelper_0A7640(v80, (int)v24); /*0x5a580b*/
  v82 = *(unsigned long long *)v51; /*0x5a5812*/
  v52 = v51[2]; /*0x5a5821*/
  v53 = v51[3]; /*0x5a5827*/
  if ( v75 <= 100 /*0x5a5853*/
    || (v54 = (CellStruct *)v24[1].ptr_0, a2 = v52 * v53, a1 = v54, (double)(int)v54 * 1.6 <= (double)(v52 * v53)) )
  {
    for ( j = v24[1].ptr_0 - 1; j >= 0; v72[14] = 0xFFFF ) /*0x5a5aa3*/
      v72 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)(v24->Items + 4 * j--)); /*0x5a5ab6*/
    if ( v24 ) /*0x5a5ac3*/
      (*(void (**)(VectorClass *, int))v24->ptr_0)(v24, 1); /*0x5a5acb*/
    return 0; /*0x5a5ad0*/
  }
  else
  {
    v55 = (int)&v54[-1].u32_2C4 + 3; /*0x5a5859*/
    v56 = 0; /*0x5a585a*/
    if ( v55 >= 0 ) /*0x5a585e*/
    {
      while ( 1 ) /*0x5a5868*/
      {
        v57 = v24->Items; /*0x5a5868*/
        a2 = 0; /*0x5a586b*/
        a1 = *(CellStruct **)(v57 + 4 * v55); /*0x5a5872*/
        do /*0x5a5910*/
        {
          *(unsigned int *)v80 = *CellStruct::Add((CellStruct *)&a1, v81, (unsigned short *)(4 * (v56 & 7) + 9041544)); /*0x5a5897*/
          *(unsigned int *)&v79[2] = *(unsigned int *)v80; /*0x5a589b*/
          v58 = v80[1] + v80[0]; /*0x5a58a7*/
          if ( v58 > dword_ABED04 /*0x5a58dd*/
            && v80[0] - v80[1] < dword_ABED04
            && v80[1] - v80[0] < dword_ABED04
            && v58 <= dword_ABED08
            && *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, &v79[2]) + 14) != dword_ABC2B0 )
          {
            v59 = v24[1].ptr_0; /*0x5a58df*/
            if ( v55 < v59 ) /*0x5a58e4*/
            {
              v60 = v59 - 1; /*0x5a58e6*/
              v61 = v55; /*0x5a58e9*/
              for ( v24[1].ptr_0 = v60; /*0x5a58f0*/
                    v61 < v24[1].ptr_0;
                    *(unsigned int *)(v24->Items + 4 * v61 - 4) = *(unsigned int *)(v24->Items + 4 * v61) )
              {
                ++v61; /*0x5a58f5*/
              }
            }
          }
          v56 = ++a2; /*0x5a5908*/
        }
        while ( a2 < 8 ); /*0x5a5910*/
        if ( --v55 < 0 ) /*0x5a5917*/
          break; /*0x5a5917*/
        v56 = 0; /*0x5a5866*/
      }
    }
    for ( k = 0; k < v24[1].ptr_0; HIBYTE(dword_ABED10[v63 + 34]) = 1 ) /*0x5a5926*/
    {
      v63 = 40 * (*(__int16 *)(v24->Items + 4 * k) + g_MapCellWidth * *(__int16 *)(v24->Items + 4 * k + 2)); /*0x5a5948*/
      ++k; /*0x5a594b*/
    }
    v64 = v24[1].ptr_0; /*0x5a5958*/
    if ( v64 / 3 > 0 ) /*0x5a596b*/
    {
      *(unsigned int *)&v79[2] = v64 / 3; /*0x5a5971*/
      do /*0x5a5a8d*/
      {
        v65 = v24[1].ptr_0 - 1; /*0x5a597c*/
        v82 = (unsigned int)v24[1].ptr_0; /*0x5a5980*/
        *(double *)v80 = (double)v82; /*0x5a5988*/
        do /*0x5a59b3*/
        {
          v78 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a5996*/
          (v66) = ((v66) & ~0xFFFF) | ((Math::RoundToInt((double)v78 * *(double *)v80 * 2.328306437080797e-10)) & 0xFFFF); /*0x5a59ac*/
        }
        while ( v66 > v65 ); /*0x5a59b3*/
        v81[0] = *(unsigned int *)(v24->Items + 4 * v66); /*0x5a59bb*/
        do /*0x5a59e7*/
        {
          v77 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a59c9*/
          (v67) = ((v67) & ~0xFFFF) | ((Math::RoundToInt((double)v77 * 0.000000001629814505956558)) & 0xFFFF); /*0x5a59db*/
          *(unsigned int *)v79 = v67; /*0x5a59e3*/
        }
        while ( (unsigned int)v67 > 6 ); /*0x5a59e7*/
        LOBYTE(a2) = 1; /*0x5a59ec*/
        if ( v67 <= 3 ) /*0x5a59f1*/
          goto LABEL_98; /*0x5a59f1*/
        for ( m = 0; m < 2; ++m ) /*0x5a59f3*/
        {
          for ( n = 0; n < 2; ++n ) /*0x5a59f5*/
          {
            LOWORD(a1) = m + LOWORD(v81[0]); /*0x5a5a04*/
            HIWORD(a1) = HIWORD(v81[0]) + n; /*0x5a5a09*/
            *(unsigned int *)v80 = a1; /*0x5a5a21*/
            if ( !HIBYTE(dword_ABED10[40 * (__int16)(m + LOWORD(v81[0])) /*0x5a5a51*/
                                    + 34
                                    + 40 * g_MapCellWidth * (__int16)(HIWORD(v81[0]) + n)])
              || *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v80) + 14) != dword_ABC2B0 )
            {
              LOBYTE(a2) = 0; /*0x5a5a53*/
            }
          }
        }
        if ( (unsigned char)a2 ) /*0x5a5a6a*/
LABEL_98:
          PlaceMapSeedClassBuildings(dword_AA10A4 + *(unsigned int *)v79, v81, -1, -1); /*0x5a5a7f*/
        --*(unsigned int *)&v79[2]; /*0x5a5a89*/
      }
      while ( *(unsigned int *)&v79[2] ); /*0x5a5a8d*/
    }
    return &v24->ptr_0; /*0x5a5a93*/
  }

}
} // namespace gamemd
