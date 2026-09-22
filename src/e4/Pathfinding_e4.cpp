// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x5A5360
unsigned int * Pathfinding::ExpandNode(short * a1, int a2)
{
{
  AbstractClass *v4; // ebx
  int *v5; // eax
  AbstractClass *v6; // esi
  int v10; // eax
  bool v11; // sf
  int i; // eax
  __int16 *v13; // ecx
  int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  _WORD *v20; // ebp
  _DWORD *v23; // eax
  VectorClass *v24; // edi
  bool v25; // cc
  __int16 *v36; // eax
  int v51; // eax
  int v52; // ecx
  int v53; // eax
  int v54; // ebp
  int k; // ecx
  int m; // ebp
  int n; // esi
  int j; // esi
  _WORD *v74; // [esp+14h] [ebp-4Ch]
  int v75; // [esp+18h] [ebp-48h]
  int v76; // [esp+1Ch] [ebp-44h]
  __int64 v77; // [esp+20h] [ebp-40h]
  __int64 v78; // [esp+28h] [ebp-38h]
  AbstractClass *v79; // [esp+30h] [ebp-30h]
  int v80; // [esp+34h] [ebp-2Ch] BYREF
  double v81[2]; // [esp+38h] [ebp-28h] BYREF
  __int64 v82; // [esp+48h] [ebp-18h] BYREF
  __int64 v83; // [esp+50h] [ebp-10h]
  int v2 = 10 * a2; /*0x5a536e*/
  _DWORD * v3 = __2_YAPAXI_Z(80 * a2); /*0x5a5378*/
  if ( v3 ) /*0x5a5384*/
  {
    v4 = v3; /*0x5a5389*/
    LODWORD(v81[0]) = v2 - 1; /*0x5a538b*/
  }
  else
  {
    v4 = 0; /*0x5a5391*/
  }
  v79 = v4; /*0x5a5395*/
  v5 = (int *)__2_YAPAXI_Z(0x14u); /*0x5a5399*/
  v6 = v5; /*0x5a539e*/
  if ( v5 ) /*0x5a53a5*/
  {
    v5[3] = 0; /*0x5a53ae*/
    v5[4] = -1; /*0x5a53b2*/
    *v5 = 0; /*0x5a53b9*/
    v5[1] = v2; /*0x5a53bb*/
    void * v7 = __2_YAPAXI_Z(4 * v2 + 4); /*0x5a53be*/
    int v8 = v6[1]; /*0x5a53c3*/
    v6[2] = (int)v7; /*0x5a53c6*/
    int v9 = 0; /*0x5a53cc*/
    if ( v8 >= 0 ) /*0x5a53d0*/
    {
      do /*0x5a53df*/
      {
        ++v9; /*0x5a53d5*/
        *(_DWORD *)(v6[2] + 4 * v9 - 4) = 0; /*0x5a53d6*/
      }
      while ( v9 <= v6[1] ); /*0x5a53df*/
    }
  }
  else
  {
    v6 = 0; /*0x5a53e3*/
  }
  v10 = 0; /*0x5a53e7*/
  v11 = *v6 < 0; /*0x5a53e9*/
  v75 = 0; /*0x5a53eb*/
  if ( !v11 ) /*0x5a53ef*/
  {
    do /*0x5a53fd*/
    {
      ++v10; /*0x5a53f4*/
      *(_DWORD *)(v6[2] + 4 * v10 - 4) = 0; /*0x5a53f5*/
    }
    while ( v10 <= *v6 ); /*0x5a53fd*/
  }
  *v6 = 0; /*0x5a5404*/
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8); /*0x5a5406*/
  for ( i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); i; i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) ) /*0x5a5417*/
  {
    v80 = *(int *)(i + 36); /*0x5a541c*/
    *((_DWORD *)g_MapTileArray + 20 * (__int16)v80 + 20 * unk_89C2DC * SHIWORD(v80) + 15) = 0; /*0x5a5441*/
  }
  v13 = a1; /*0x5a544e*/
  *v4 = *(_DWORD *)a1; /*0x5a5454*/
  v4[1] = 0; /*0x5a5456*/
  v14 = 5 * (*v13 + unk_89C2DC * v13[1]); /*0x5a546f*/
  v76 = 1; /*0x5a547a*/
  *((_DWORD *)g_MapTileArray + 4 * v14 + 15) = 1; /*0x5a547e*/
  v15 = *v6 + 1; /*0x5a5487*/
  v80 = v4[1]; /*0x5a548a*/
  v16 = v15 >> 1; /*0x5a5491*/
  if ( v15 < v6[1] ) /*0x5a5495*/
  {
    for ( ; v15 > 1; v16 >>= 1 ) /*0x5a5499*/
    {
      int v17 = v6[2]; /*0x5a549b*/
      int v18 = *(_DWORD *)(v17 + 4 * v16); /*0x5a549e*/
      if ( *(float *)(v18 + 4) <= (double)*(float *)&v80 ) /*0x5a54ad*/
        break; /*0x5a54ad*/
      *(_DWORD *)(v17 + 4 * v15) = v18; /*0x5a54af*/
      v15 = v16; /*0x5a54b2*/
    }
    *(_DWORD *)(v6[2] + 4 * v15) = v4; /*0x5a54c0*/
    unsigned int v19 = v6[3]; /*0x5a54c5*/
    ++*v6; /*0x5a54cb*/
    if ( (unsigned int)v4 > v19 ) /*0x5a54cd*/
      v6[3] = (int)v4; /*0x5a54cf*/
    if ( (unsigned int)v4 < v6[4] ) /*0x5a54d5*/
      v6[4] = (int)v4; /*0x5a54d7*/
  }
  if ( *v6 ) /*0x5a54da*/
  {
    int v21 = v6[2]; /*0x5a54e4*/
    _WORD * v22 = *(_WORD **)(v21 + 4); /*0x5a54ec*/
    *(_DWORD *)(v21 + 4) = *(_DWORD *)(v21 + 4 * *v6); /*0x5a54ef*/
    *(_DWORD *)(v6[2] + 4 * (*v6)--) = 0; /*0x5a54f7*/
    Heap::SiftDown(v6, 1); /*0x5a5505*/
    v20 = v22; /*0x5a550a*/
  }
  else
  {
    v20 = 0; /*0x5a54e0*/
  }
  v74 = v20; /*0x5a550e*/
  v23 = __2_YAPAXI_Z(0x18u); /*0x5a5512*/
  v24 = v23; /*0x5a5517*/
  if ( v23 ) /*0x5a551e*/
  {
    VectorClass::CellConstructor(v23, 0, 0); /*0x5a5526*/
    *v24 = &vt_DynamicVectorClass_Cell; /*0x5a552b*/
    v24[5] = 10; /*0x5a5531*/
    v24[4] = 0; /*0x5a5538*/
  }
  else
  {
    v24 = 0; /*0x5a5541*/
  }
  LODWORD(v78) = v24; /*0x5a5547*/
  v25 = a2 <= 0; /*0x5a554b*/
  v24[5] = a2 + 2; /*0x5a5550*/
  if ( !v25 ) /*0x5a5553*/
  {
    while ( v20 ) /*0x5a5565*/
    {
      *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v20) + 14) = dword_ABC2B0; /*0x5a557c*/
      int v26 = v24[2]; /*0x5a557f*/
      if ( v24[4] < v26 /*0x5a55a2*/
        || (v24->IsAllocated || !v26)
  int v27; // ecx
        && (v27 = v24[5], v27 > 0)
        && v24->Release(v26 + v27, 0) )
      {
        int v28 = v24[4]; /*0x5a55a9*/
        int v29 = v24[1]; /*0x5a55ac*/
        v24[4] = v28 + 1; /*0x5a55b2*/
        *(_DWORD *)(v29 + 4 * v28) = *(_DWORD *)v20; /*0x5a55b8*/
      }
      LODWORD(v77) = 0; /*0x5a55bf*/
  float v30; // ebp
      LODWORD(v30) = &v4[2 * v76]; /*0x5a55c7*/
      do /*0x5a5789*/
      {
        v80 = *CellStruct::Add(v74, &v82, (_WORD *)(4 * (v77 & 7) + 9041544)); /*0x5a55ef*/
        int v73 = v80; /*0x5a55f3*/
        int v31 = SHIWORD(v80) + (__int16)v80; /*0x5a55ff*/
        if ( v31 > g_MapCellHeight_Value /*0x5a5626*/
          && (__int16)v80 - SHIWORD(v80) < g_MapCellHeight_Value
          && SHIWORD(v80) - (__int16)v80 < g_MapCellHeight_Value
          && v31 <= g_MapCellCount )
        {
          VectorClass *v32 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v73); /*0x5a563b*/
          if ( Cell::IsEmpty(v32) && v32[17] == -1 ) /*0x5a5650*/
          {
            int v33 = SHIWORD(v73); /*0x5a5656*/
            int v34 = (__int16)v73; /*0x5a5667*/
            char * v35 = (char *)g_MapTileArray + 80 * (__int16)v73 + 80 * SHIWORD(v73) * unk_89C2DC; /*0x5a5678*/
            if ( *((_DWORD *)v35 + 15) != 1 && !v35[69] ) /*0x5a5684*/
            {
              v36 = a1; /*0x5a568f*/
              *(_DWORD *)LODWORD(v30) = v73; /*0x5a5693*/
              int v37 = *v36 - v34; /*0x5a569f*/
              __int64 v38 = v36[1] - v33; /*0x5a56a1*/
              *(float *)&v80 = COERCE_FLOAT(abs32(v37)); /*0x5a56b1*/
              if ( v80 <= (int)((HIDWORD(v38) ^ v38) - HIDWORD(v38)) ) /*0x5a56b5*/
                v80 = (HIDWORD(v38) ^ v38) - HIDWORD(v38); /*0x5a56b7*/
              v83 = (unsigned int)Random::State(&g_Randomizer); /*0x5a56c5*/
              int v39 = SHIWORD(v73); /*0x5a56d5*/
              int v40 = (__int16)v73; /*0x5a56e0*/
              double v41 = (double)v80; /*0x5a56eb*/
              float v42 = v30; /*0x5a56ef*/
              LODWORD(v30) += 8; /*0x5a56f1*/
              *(float *)&v80 = v30; /*0x5a56f4*/
              *(float *)(LODWORD(v30) - 4) = (double)v83 * 3.0 * 2.328306437080797e-10 + v41; /*0x5a56fa*/
              *((_DWORD *)g_MapTileArray + 20 * v40 + 20 * unk_89C2DC * v39 + 15) = 1; /*0x5a5711*/
              int v43 = *(_DWORD *)(LODWORD(v42) + 4); /*0x5a571f*/
              unsigned int v44 = *v6 + 1; /*0x5a5723*/
              ++v76; /*0x5a5724*/
              LODWORD(v81[0]) = v43; /*0x5a572a*/
              unsigned int v45 = v44 >> 1; /*0x5a5731*/
              if ( v44 < v6[1] ) /*0x5a5735*/
              {
                if ( v44 > 1 ) /*0x5a573a*/
                {
                  do /*0x5a575a*/
                  {
                    int v46 = v6[2]; /*0x5a573c*/
                    int v47 = *(_DWORD *)(v46 + 4 * v45); /*0x5a573f*/
                    if ( *(float *)(v47 + 4) <= (double)*(float *)v81 ) /*0x5a574e*/
                      break; /*0x5a574e*/
                    *(_DWORD *)(v46 + 4 * v44) = v47; /*0x5a5750*/
                    v44 = v45; /*0x5a5753*/
                    v45 >>= 1; /*0x5a5755*/
                  }
                  while ( v44 > 1 ); /*0x5a575a*/
                  v30 = *(float *)&v80; /*0x5a575c*/
                }
                *(float *)(v6[2] + 4 * v44) = v42; /*0x5a5763*/
                unsigned int v48 = v6[3]; /*0x5a5768*/
                ++*v6; /*0x5a576e*/
                if ( LODWORD(v42) > v48 ) /*0x5a5770*/
                  v6->vtable4 = v42; /*0x5a5772*/
                if ( LODWORD(v42) < v6[4] ) /*0x5a5778*/
                  v6->vtable2 = v42; /*0x5a577a*/
              }
            }
          }
        }
        LODWORD(v77) = v77 + 1; /*0x5a5785*/
      }
      while ( (int)v77 < 8 ); /*0x5a5789*/
      ++v75; /*0x5a5794*/
      if ( *v6 ) /*0x5a5798*/
      {
        int v49 = v6[2]; /*0x5a57a4*/
        _WORD * v50 = *(_WORD **)(v49 + 4); /*0x5a57ac*/
        *(_DWORD *)(v49 + 4) = *(_DWORD *)(v49 + 4 * *v6); /*0x5a57af*/
        *(_DWORD *)(v6[2] + 4 * (*v6)--) = 0; /*0x5a57b7*/
        Heap::SiftDown(v6, 1); /*0x5a57c5*/
        v74 = v50; /*0x5a57ca*/
      }
      else
      {
        v74 = 0; /*0x5a579e*/
      }
      v24 = (_DWORD *)v78; /*0x5a57d6*/
      if ( v75 >= a2 ) /*0x5a57dc*/
      {
        v4 = v79; /*0x5a57e2*/
        break; /*0x5a57e2*/
      }
      v20 = v74; /*0x5a555b*/
      v4 = v79; /*0x5a555f*/
    }
  }
  __3_YAXPAX_Z(v4); /*0x5a57e6*/
  if ( v6 ) /*0x5a57f1*/
  {
    __3_YAXPAX_Z((void *)v6[2]); /*0x5a57f7*/
    __3_YAXPAX_Z(v6); /*0x5a57fd*/
  }
  v51 = globalHelper_0A7640(v81, v24); /*0x5a580b*/
  v83 = *(_QWORD *)v51; /*0x5a5812*/
  v52 = *(_DWORD *)(v51 + 8); /*0x5a5821*/
  v53 = *(_DWORD *)(v51 + 12); /*0x5a5827*/
  if ( v75 <= 100 || (v54 = v24[4], a2 = v52 * v53, a1 = (__int16 *)v54, (double)v54 * 1.6 <= (double)(v52 * v53)) ) /*0x5a5853*/
  {
  _DWORD *v72; // eax
    for ( j = v24[4] - 1; j >= 0; v72[14] = 0xFFFF ) /*0x5a5aa3*/
      v72 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)(v24[1] + 4 * j--)); /*0x5a5ab6*/
    if ( v24 ) /*0x5a5ac3*/
      (*(void (__thiscall **)(_DWORD *, int))*v24)(v24, 1); /*0x5a5acb*/
    return 0; /*0x5a5ad0*/
  }
  else
  {
    int v55 = v54 - 1; /*0x5a5859*/
    char v56 = 0; /*0x5a585a*/
    if ( v55 >= 0 ) /*0x5a585e*/
    {
      while ( 1 ) /*0x5a5868*/
      {
        int v57 = v24[1]; /*0x5a5868*/
        a2 = 0; /*0x5a586b*/
        a1 = *(__int16 **)(v57 + 4 * v55); /*0x5a5872*/
        do /*0x5a5910*/
        {
          LODWORD(v81[0]) = *CellStruct::Add(&a1, &v82, (_WORD *)(4 * (v56 & 7) + 9041544)); /*0x5a5897*/
          v80 = SLODWORD(v81[0]); /*0x5a589b*/
          int v58 = SWORD1(v81[0]) + SLOWORD(v81[0]); /*0x5a58a7*/
          if ( v58 > g_MapCellHeight_Value /*0x5a58dd*/
            && SLOWORD(v81[0]) - SWORD1(v81[0]) < g_MapCellHeight_Value
            && SWORD1(v81[0]) - SLOWORD(v81[0]) < g_MapCellHeight_Value
            && v58 <= g_MapCellCount
            && *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v80) + 14) != dword_ABC2B0 )
          {
            int v59 = v24[4]; /*0x5a58df*/
            if ( v55 < v59 ) /*0x5a58e4*/
            {
              int v60 = v59 - 1; /*0x5a58e6*/
              int v61 = v55; /*0x5a58e9*/
              for ( v24[4] = v60; v61 < v24[4]; *(_DWORD *)(v24[1] + 4 * v61 - 4) = *(_DWORD *)(v24[1] + 4 * v61) ) /*0x5a58f0*/
                ++v61; /*0x5a58f5*/
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
  int v63; // eax
    for ( k = 0; k < v24[4]; *((_BYTE *)g_MapTileArray + v63 + 69) = 1 ) /*0x5a5926*/
    {
      v63 = 80 * (*(__int16 *)(v24[1] + 4 * k) + unk_89C2DC * *(__int16 *)(v24[1] + 4 * k + 2)); /*0x5a5948*/
      ++k; /*0x5a594b*/
    }
    int v64 = v24[4]; /*0x5a5958*/
    if ( v64 / 3 > 0 ) /*0x5a596b*/
    {
      v80 = v64 / 3; /*0x5a5971*/
      do /*0x5a5a8d*/
      {
  int v67; // eax
  unsigned int v66; // eax
        unsigned int v65 = v24[4] - 1; /*0x5a597c*/
        v83 = (unsigned int)v24[4]; /*0x5a5980*/
        v81[0] = (double)v83; /*0x5a5988*/
        do /*0x5a59b3*/
        {
          v78 = (unsigned int)Random::State(&g_Randomizer); /*0x5a5996*/
          v66 = Math::RoundToInt((double)v78 * v81[0] * 2.328306437080797e-10); /*0x5a59ac*/
        }
        while ( v66 > v65 ); /*0x5a59b3*/
        LODWORD(v82) = *(_DWORD *)(v24[1] + 4 * v66); /*0x5a59bb*/
        do /*0x5a59e7*/
        {
          v77 = (unsigned int)Random::State(&g_Randomizer); /*0x5a59c9*/
          v67 = Math::RoundToInt((double)v77 * 0.000000001629814505956558); /*0x5a59db*/
          v79 = (_DWORD *)v67; /*0x5a59e3*/
        }
        while ( (unsigned int)v67 > 6 ); /*0x5a59e7*/
        LOBYTE(a2) = 1; /*0x5a59ec*/
        if ( v67 <= 3 ) /*0x5a59f1*/
          goto LABEL_98; /*0x5a59f1*/
        for ( m = 0; m < 2; ++m ) /*0x5a59f3*/
        {
          for ( n = 0; n < 2; ++n ) /*0x5a59f5*/
          {
            LOWORD(a1) = m + v82; /*0x5a5a04*/
            HIWORD(a1) = WORD1(v82) + n; /*0x5a5a09*/
            LODWORD(v81[0]) = a1; /*0x5a5a21*/
            if ( !*((_BYTE *)g_MapTileArray + 80 * (__int16)(m + v82) + 80 * unk_89C2DC * (__int16)(WORD1(v82) + n) + 69) /*0x5a5a51*/
              || *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)v81) + 14) != dword_ABC2B0 )
            {
              LOBYTE(a2) = 0; /*0x5a5a53*/
            }
          }
        }
        if ( (_BYTE)a2 ) /*0x5a5a6a*/
LABEL_98:
          PlaceMapSeedClassBuildings((int)v79 + unk_AA10A4, &v82, -1, -1); /*0x5a5a7f*/
        --v80; /*0x5a5a89*/
      }
      while ( *(float *)&v80 != 0.0 ); /*0x5a5a8d*/
    }
    return v24; /*0x5a5a93*/
  }
}
