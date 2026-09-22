// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Tiberium_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"

// 0x59D510
namespace gamemd {
int Tiberium::ProcessGrowth(int a2, MapResourceClass * aP2, char _140)
{
{
  __int16 v7; // si
  __int16 v11; // di
  __int16 v12; // bx
  MapResourceClass v13; // ebx
  unsigned int v18; // eax
  double v19; // st6
  MapResourceClass *v20; // ebx
  double v21; // st7
  __int16 v22; // si
  __int16 v23; // ax
  int v25; // esi
  MapResourceClass *v28; // eax
  __int16 v31; // di
  __int16 v32; // ax
  __int16 v34; // bx
  __int16 v35; // ax
  bool IsEmpty; // al
  Random *v40; // ecx
  __int16 v50; // di
  __int16 v51; // ax
  MouseClass *v55; // esi
  int i; // eax
  Random *v58; // ecx
  MouseClass *v59; // edx
  MouseClass *v60; // esi
  int m; // eax
  bool v64; // cc
  char v65; // al
  MouseClass *v67; // esi
  int j; // eax
  int k; // eax
  char inited; // [esp+Fh] [ebp-121h]
  __int16 v74; // [esp+10h] [ebp-120h] BYREF
  int v76; // [esp+14h] [ebp-11Ch]
  double v77; // [esp+18h] [ebp-118h]
  char v78; // [esp+27h] [ebp-109h]
  unsigned int v79; // [esp+28h] [ebp-108h]
  double v80; // [esp+30h] [ebp-100h]
  Tiberium *v81; // [esp+3Ch] [ebp-F4h]
  int v83; // [esp+4Ch] [ebp-E4h]
  int v84; // [esp+50h] [ebp-E0h] BYREF
  double v85; // [esp+58h] [ebp-D8h] BYREF
  MapResourceClass aP1; // [esp+60h] [ebp-D0h] BYREF
  __int16 a4[2]; // [esp+74h] [ebp-BCh] BYREF
  MapResourceClass *v89[2]; // [esp+78h] [ebp-B8h]
  double v91; // [esp+88h] [ebp-A8h]
  double v92; // [esp+90h] [ebp-A0h]
  double v93; // [esp+98h] [ebp-98h]
  MapResourceClass v94; // [esp+A0h] [ebp-90h] BYREF
  double v95; // [esp+A8h] [ebp-88h]
  MapResourceClass aP6[2]; // [esp+B0h] [ebp-80h] BYREF
  double v97; // [esp+B8h] [ebp-78h]
  double a7; // [esp+C0h] [ebp-70h] BYREF
  __int16 v99[2]; // [esp+CCh] [ebp-64h] BYREF
  MapResourceClass aP3[2]; // [esp+D0h] [ebp-60h] BYREF
  int v101; // [esp+D8h] [ebp-58h]
  int v102; // [esp+DCh] [ebp-54h]
  __int16 a3[2]; // [esp+E0h] [ebp-50h] BYREF
  double v111; // [esp+118h] [ebp-18h]
  double v112; // [esp+120h] [ebp-10h]
  double v113; // [esp+128h] [ebp-8h]
  char v114; // [esp+144h] [ebp+14h]
  v78 = v114;
  bool v4 = *(_WORD *)a2 == 0;
  v81 = this;
  inited = 1;
  v83 = 0;
  if ( !v4 || *(_WORD *)(a2 + 2) )
  {
    *(_DWORD *)a4 = *(_DWORD *)a2;
    v97 = COERCE_DOUBLE(__PAIR64__(_140, (unsigned int)aP2));
  }
  else
  {
  double v14; // st7
  unsigned int v9; // eax
  unsigned int v6; // eax
    *(_WORD *)&v94.__tail_0[2] = g_Cell_PositionLUT;
    LOWORD(v84) = g_CellPositionOffset;
    HIWORD(v84) = g_CellPositionOffset;
    *(_WORD *)&aP1.__tail_0[2] = 0;
    LOWORD(v79) = g_CellPositionOffset + g_Cell_PositionLUT + 1;
    HIWORD(v79) = g_CellPositionOffset;
    *(_WORD *)aP1.__tail_0 = v79 - 2;
    do
    {
      *(_QWORD *)&v77 = (unsigned int)Random::State(&g_Randomizer);
      LODWORD(v85) = Math::RoundToInt((double)*(__int64 *)&v77 * 9.31322574832319e-10);
    }
    while ( LODWORD(v85) > 3 );
    unsigned int v5 = g_Cell_PositionLUT - 1;
    *(_QWORD *)&v77 = (unsigned int)g_Cell_PositionLUT;
    v92 = (double)(unsigned int)g_Cell_PositionLUT;
    do
    {
      *(_QWORD *)&v77 = (unsigned int)Random::State(&g_Randomizer);
      v6 = Math::RoundToInt((double)*(__int64 *)&v77 * v92 * 2.328306437080797e-10);
      v7 = v6;
    }
    while ( v6 > v5 );
    unsigned int v8 = g_CellPositionOffset - 1;
    *(_QWORD *)&v77 = (unsigned int)g_CellPositionOffset;
    v92 = (double)(unsigned int)g_CellPositionOffset;
    do
    {
      *(_QWORD *)&v77 = (unsigned int)Random::State(&g_Randomizer);
      v9 = Math::RoundToInt((double)*(__int64 *)&v77 * v92 * 2.328306437080797e-10);
    }
    while ( v9 > v8 );
    HIWORD(v84) = -v7;
    LOWORD(v76) = v7 + 1;
    double v10 = 5.497787143782138 - (double)SLODWORD(v85) * 1.570796326794897;
    v93 = 0.5235987755982988;
    HIWORD(v76) = *(_WORD *)&v94.__tail_0[2] - v7;
    aP3[0] = (MapResourceClass)v76;
    v95 = v10 + 0.7853981633974483;
    LOWORD(v76) = *(_WORD *)aP1.__tail_0 - v9;
    v11 = HIWORD(v79);
    v12 = HIWORD(v79);
    HIWORD(v79) = -v7;
    HIWORD(v76) = v12 - v9;
    v13 = (MapResourceClass)v76;
    v80 = v10 - 0.7853981633974483;
    LOWORD(v76) = *(_WORD *)aP1.__tail_0 - v7;
    v77 = v10;
    HIWORD(v76) = v11 + v7;
    v101 = v76;
    LOWORD(v76) = v9 + 1;
    HIWORD(v76) = *(_WORD *)&v94.__tail_0[2] + v9;
    aP3[1] = v13;
    v102 = v76;
    *(MapResourceClass *)a4 = aP3[LODWORD(v85)];
    if ( v10 - 0.5235987755982988 > v95 || v10 + 0.5235987755982988 < v80 )
    {
      v93 = (v95 - v80) * 0.5;
      v77 = v93 + v80;
    }
    do
    {
      do
        v14 = Random::Gaussian((double *)&g_TileSystemInit) * v93 + v77;
      while ( v14 < v80 );
    }
    while ( v14 > v95 );
    v97 = v14;
  }
  int v15 = a4[1] + a4[0];
  if ( v15 <= g_MapCellHeight_Value
    || a4[0] - a4[1] >= g_MapCellHeight_Value
    || a4[1] - a4[0] >= g_MapCellHeight_Value
    || v15 > g_MapCellCount )
  {
    return 0;
  }
  v76 = 0;
  double v16 = (double)(int)v81[19] * 0.07000000000000001;
  if ( v16 < 1.0 )
    v16 = 1.0;
  unsigned int v17 = Math::RoundToInt(v16);
  *(_QWORD *)&v77 = v17;
  v92 = (double)v17;
  do
  {
    *(_QWORD *)&v77 = (unsigned int)Random::State(&g_Randomizer);
    v18 = Math::RoundToInt((double)*(__int64 *)&v77 * v92 * 2.328306437080797e-10 + 1.0);
  }
  while ( v18 > v17 );
  *(_QWORD *)&v77 = v18;
  v93 = (double)v18;
  aP1 = (MapResourceClass)((int)Math::RoundToInt(v93) / 2);
  v19 = (double)*(int *)&aP1;
  v112 = v19 + v93;
  *(double *)aP3[0].__tail_0 = v93 - v19;
  do
  {
    *(_QWORD *)&v77 = (unsigned int)Random::State(&g_Randomizer);
    v79 = Math::RoundToInt((double)*(__int64 *)&v77 * 0.00000002118758857743526 + 35.0);
  }
  while ( v79 > 0x7D );
  v84 = a4[1];
  v20 = (MapResourceClass *)v81;
  v91 = v97;
  *(double *)aP6[0].__tail_0 = (double)a4[0] + 0.5;
  a7 = (double)a4[1] + 0.5;
  v113 = v97 + 1.570796326794897;
  v111 = v97 - 1.570796326794897;
  v21 = 1.0;
  do
  {
    v22 = Math::RoundToInt(v21);
    v23 = Math::RoundToInt(v21);
    int v24 = v22;
    v25 = g_MapCellHeight_Value;
    int v26 = v23 + v24;
    if ( v26 <= g_MapCellHeight_Value
      || v24 - v23 >= g_MapCellHeight_Value
      || v23 - v24 >= g_MapCellHeight_Value
      || v26 > g_MapCellCount
      || !inited )
    {
      goto LABEL_100;
    }
    double v27 = v91;
    double v90 = Math::ArcTan2(v91);
    double v82 = Math::SinCos(v27);
    v28 = (MapResourceClass *)Math::RoundToInt(v93 + 0.5);
    char v75 = 1;
    v89[0] = (MapResourceClass *)((char *)v28 - 1);
    LOBYTE(v74) = 1;
    double v29 = (double)((int)&v28[-1] + 3);
    double v108 = v29 * v82 * 0.5;
    double v87 = *(double *)aP6[0].__tail_0 - v108;
    double v110 = v29 * v90 * 0.5;
    v80 = a7 - v110;
    if ( (int)v28 > 0 )
    {
  int v33; // edx
      _DWORD * v30 = g_MapTileArray;
      v89[0] = v28;
      while ( 1 )
      {
        v31 = Math::RoundToInt(v87);
        v32 = Math::RoundToInt(v80);
        LOWORD(v85) = v32;
        v33 = v32 + v31;
        if ( v33 > g_MapCellHeight_Value )
          break;
LABEL_50:
        double v41 = v87 + v82;
        int v42 = Math::RoundToInt(v87 + v82);
        if ( (unsigned int)Math::RoundToInt(v41) != v42 )
          v75 = 0;
        double v43 = v80 + v90;
        int v44 = Math::RoundToInt(v41);
        if ( (unsigned int)Math::RoundToInt(v41) != v44 )
          LOBYTE(v74) = 0;
        v87 = v41;
        v4 = v89[0] == (MapResourceClass *)1;
        v80 = v43;
        --v89[0];
        if ( v4 )
          goto LABEL_55;
      }
      if ( v31 - v32 < g_MapCellHeight_Value && v32 - v31 < g_MapCellHeight_Value && v33 <= g_MapCellCount )
      {
        v34 = LOWORD(v85);
        v35 = LOWORD(v85);
  int v104; // [esp+E4h] [ebp-4Ch]
        LOWORD(v104) = v31;
        HIWORD(v104) = LOWORD(v85);
        LODWORD(v85) = v104;
        if ( !v30 )
          goto LABEL_42;
        if ( !v30[20 * v31 + 14 + 20 * unk_89C2DC * v35] )
        {
          _DWORD * v36 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v85);
          IsEmpty = Cell::IsEmpty(v36);
          v30 = g_MapTileArray;
          if ( IsEmpty )
            goto LABEL_45;
        }
        if ( v30 )
          int v38 = v30[20 * SLOWORD(v85) + 14 + 20 * unk_89C2DC * SWORD1(v85)];
        else
LABEL_42:
          v38 = -1;
        if ( v38 == v81[194] )
        {
LABEL_45:
          if ( v30 )
            v30[20 * SLOWORD(v85) + 14 + 20 * unk_89C2DC * SWORD1(v85)] = v81[194];
          v99[0] = v31;
          v99[1] = v34;
          _BYTE * v39 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v99);
          v40 = *(Random **)&g_NetworkPlayerBuffer[78076];
          v39[282] = 0;
          *((_DWORD *)v39 + 14) = v40;
          v30 = g_MapTileArray;
          goto LABEL_49;
        }
        inited = 0;
      }
LABEL_49:
      v20 = (MapResourceClass *)v81;
      goto LABEL_50;
    }
LABEL_55:
    if ( fabs(v82) >= fabs(v90) )
      v75 = 0;
    else
      LOBYTE(v74) = 0;
    if ( !v114 && (v75 || (_BYTE)v74) && v83 < 1 )
    {
      v89[0] = (MapResourceClass *)abs32(Math::RoundToInt(v91 - v97));
      if ( (double)(int)v89[0] < 0.7853981633974483 && v20[196].__tail_0[0] && v76 > (int)v79 )
      {
        if ( v75 )
          int v45 = v90 <= 0.0 ? 6 : 2;
        else
          v45 = v82 <= 0.0 ? 4 : 0;
        LOBYTE(v74) = 0;
        a3[0] = Math::RoundToInt(v87 - v82);
        a3[1] = Math::RoundToInt(v80 - v90);
        *(_WORD *)v94.__tail_0 = Math::RoundToInt(*(double *)aP6[0].__tail_0 - v108);
        *(_WORD *)&v94.__tail_0[2] = Math::RoundToInt(a7 - v110);
        Tiberium::CalculateSpread(v20, *(MouseClass **)&v20[194], &v94, a3, v45, (MouseClass *)&v74, aP6, &a7);
        if ( (_BYTE)v74 )
        {
          int v46 = v83 + 1;
          ++*(_DWORD *)&v20[194];
          v83 = v46;
        }
      }
    }
    *(double *)aP6[0].__tail_0 = v90 + *(double *)aP6[0].__tail_0;
    a7 = a7 - v82;
    __int64 v109 = (unsigned int)Random::State(&g_Randomizer);
    if ( (double)v109 * 2.328306437080797e-10 < 0.01 && inited && !v114 && !v83 )
    {
      v114 = 1;
      double v106 = 0.5235987755982988;
      v82 = v91 + 1.570796326794897;
      v90 = v91 + 0.5235987755982988;
      v85 = v91 + 2.617993877991494;
      if ( v82 - 0.5235987755982988 > v85 || v82 + 0.5235987755982988 < v90 )
      {
        v106 = (v85 - v90) * 0.5;
        v82 = v106 + v90;
      }
      do
      {
        do
        {
          double v47 = Random::Gaussian((double *)&g_TileSystemInit);
          *(double *)v89 = v47 * v106 + v82;
        }
        while ( *(double *)v89 < v90 );
      }
      while ( *(double *)v89 > v85 );
      LOWORD(v84) = Math::RoundToInt(v87);
      HIWORD(v84) = Math::RoundToInt(v80);
      inited = Tiberium::ProcessGrowth((int *)v20, (int)&v84, v89[0], (char)v89[1]);
    }
    if ( v76 > 5 )
    {
      double v105 = 0.3141592653589793;
      double v107 = 0.0;
      v87 = v113 - v91;
      v80 = v111 - v91;
      if ( v87 < -0.3141592653589793 || v80 > 0.3141592653589793 )
      {
        v105 = (v87 - v80) * 0.5;
        v107 = v105 + v80;
      }
      do
      {
        do
        {
          double v48 = Random::Gaussian((double *)&g_TileSystemInit);
          v82 = v48 * v105 + v107;
        }
        while ( v82 < v80 );
      }
      while ( v82 > v87 );
      v91 = v82 + v91;
    }
    if ( *(int *)&aP1 > 0 )
    {
      v95 = 0.5;
      v77 = 0.0;
      v87 = v112 - v93;
      v80 = *(double *)aP3[0].__tail_0 - v93;
      if ( v87 < -0.5 || v80 > 0.5 )
      {
        v95 = (v87 - v80) * 0.5;
        v77 = v95 + v80;
      }
      do
      {
        do
        {
          double v49 = Random::Gaussian((double *)&g_TileSystemInit);
          v82 = v49 * v95 + v77;
        }
        while ( v82 < v80 );
      }
      while ( v82 > v87 );
      v93 = v82 + v93;
    }
    *(_QWORD *)&v92 = (unsigned int)Random::State(&g_Randomizer);
    v21 = (double)*(__int64 *)&v92 * 2.328306437080797e-10;
    ++v76;
  }
  while ( v21 >= 0.005 );
  v25 = g_MapCellHeight_Value;
LABEL_100:
  if ( v76 < 40 )
    inited = 0;
  if ( v21 < 0.005 )
  {
    v50 = Math::RoundToInt(*(double *)aP6[0].__tail_0);
    LOWORD(v85) = v50;
    v51 = Math::RoundToInt(a7);
    int v52 = v51;
    v74 = v51;
    int v53 = v51 + v50;
    if ( v53 > v25 && v50 - v52 < v25 && v52 - v50 < v25 && v53 <= g_MapCellCount )
    {
      if ( inited )
      {
        *(_WORD *)&aP1.__tail_0[2] = v74;
        *(_WORD *)aP1.__tail_0 = LOWORD(v85);
        if ( !TiberiumClass::Grow(v20, &aP1) )
          inited = 0;
      }
    }
  }
  if ( !v78 )
  {
    if ( inited )
    {
      inited = MapClass::InitTileData(*(_DWORD *)&v20[194], 0);
      if ( inited )
      {
        char v54 = TiberiumClass::Spread(*(_DWORD *)&v20[194], 1, 0, 0, 512, 512, 0, 0);
        v55 = (MouseClass *)v20[194];
        inited = v54;
        LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
        for ( i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); i; i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
        {
          if ( g_MapTileArray )
            int v57 = *((_DWORD *)g_MapTileArray + 20 * *(__int16 *)(i + 36) + 20 * unk_89C2DC * *(__int16 *)(i + 38) + 14);
          else
            v57 = -1;
          if ( (MouseClass *)v57 == v55 )
          {
            v58 = *(Random **)(i + 56);
            if ( !v58 || v58 == (Random *)0xFFFF )
              *(_DWORD *)(i + 56) = *(_DWORD *)&g_NetworkPlayerBuffer[79836];
          }
        }
      }
    }
  }
  LOBYTE(v74) = 0;
  if ( v83 || !inited || *(_DWORD *)&v20[195] != 4 )
  {
    if ( !v78 )
      goto LABEL_138;
    goto LABEL_142;
  }
  if ( v78 )
    goto LABEL_147;
  *(_QWORD *)&v92 = (unsigned int)Random::State(&g_Randomizer);
  if ( (double)*(__int64 *)&v92 * 2.328306437080797e-10 >= 0.7 )
    goto LABEL_138;
  v59 = (MouseClass *)v20[194];
  aP3[0] = 0;
  aP3[1] = 0;
  v101 = 512;
  v102 = 512;
  if ( !RandomMap::SpreadArea(v20, v59, 0.0099999998, aP3, a4, 1)
    || (inited = TiberiumClass::Spread(*(_DWORD *)&v20[194], 6, 0, 0, 512, 512, 0, 0)) == 0 )
  {
LABEL_151:
    v67 = (MouseClass *)v20[194];
    LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
    for ( j = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); j; j = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
    {
      v79 = *(_DWORD *)(j + 36);
      char * v69 = (char *)g_MapTileArray + 80 * (__int16)v79 + 80 * unk_89C2DC * SHIWORD(v79);
      if ( *((MouseClass **)v69 + 14) == v67 )
      {
        *((_DWORD *)v69 + 14) = 0;
        v69[75] = 0;
        *(_DWORD *)(j + 56) = 0;
        *(_BYTE *)(j + 282) = 0;
        *(_BYTE *)(j + 283) = v20[195];
      }
    }
    if ( v83 > 0 )
    {
      int v70 = *(_DWORD *)&v20[194] - 1;
      LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
      for ( k = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); k; k = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
      {
        v79 = *(_DWORD *)(k + 36);
        char * v72 = (char *)g_MapTileArray + 80 * (__int16)v79 + 80 * unk_89C2DC * SHIWORD(v79);
        if ( *((_DWORD *)v72 + 14) == v70 )
        {
          *((_DWORD *)v72 + 14) = 0;
          v72[75] = 0;
          *(_DWORD *)(k + 56) = 0;
          *(_BYTE *)(k + 282) = 0;
          *(_BYTE *)(k + 283) = v20[195];
        }
      }
    }
    return 0;
  }
  v60 = (MouseClass *)v20[194];
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
  for ( m = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); m; m = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
  {
    unsigned int v62 = *(_DWORD *)(m + 36);
    v79 = v62;
    if ( g_MapTileArray )
      int v63 = *((_DWORD *)g_MapTileArray + 20 * (__int16)v62 + 20 * unk_89C2DC * SHIWORD(v79) + 14);
    else
      v63 = -1;
    if ( (MouseClass *)v63 != v60 )
      *(_BYTE *)(m + 283) += 4;
  }
  LOBYTE(v74) = 1;
LABEL_138:
  if ( !inited )
  {
LABEL_142:
    v64 = v83 <= 0;
    goto LABEL_143;
  }
  v64 = v83 <= 0;
  if ( !v83 )
  {
    if ( !(_BYTE)v74 )
    {
      v65 = TiberiumClass::Spread(*(_DWORD *)&v20[194], 2, 0, 0, 512, 512, 0, 0);
      goto LABEL_146;
    }
    goto LABEL_147;
  }
LABEL_143:
  if ( v64 )
    goto LABEL_147;
  if ( !inited )
    goto LABEL_151;
  v65 = TiberiumClass::Spread(*(_DWORD *)&v20[194], 2, 0, 0, 512, 512, 1, *(_DWORD *)&v20[195]);
LABEL_146:
  inited = v65;
LABEL_147:
  if ( !inited )
    goto LABEL_151;
  if ( (_BYTE)v74 )
    *(_DWORD *)&v20[195] += 4;
  *(_DWORD *)&v20[193] += v76;
  return 1;
}
} // namespace gamemd

// 0x59E740
namespace gamemd {
VectorClass * * Tiberium::CalculateSpread(MouseClass * aP1, MapResourceClass * aP2, short * a3, int a5, MouseClass * aP5, MapResourceClass * aP6, double * a7)
{
{
  MouseClass *v11; // eax
  MouseClass *v16; // eax
  MapResourceClass v22; // edx
  __int16 v26; // dx
  int v28; // eax
  MouseClass *i; // ebp
  __int16 v39; // si
  char v40; // cl
  MouseClass *v41; // edi
  int j; // eax
  MouseClass *v43; // edx
  int k; // ebp
  __int16 v51; // si
  __int16 v52; // si
  Tiberium *v54; // edi
  __int16 v55; // ax
  MouseClass *v57; // ecx
  MouseClass *v66; // edi
  IUnknown *v67; // eax
  Tiberium *v68; // esi
  __int16 v70; // dx
  int m; // esi
  __int16 v73; // ax
  Tiberium *v82; // ebp
  Tiberium *v85; // ebx
  __int16 v86; // si
  MouseClass *v87; // ebp
  Tiberium *v98; // ebp
  __int16 v100; // si
  IUnknown *v101; // edx
  __int16 v114; // dx
  MouseClass *v115; // [esp+10h] [ebp-118h] BYREF
  __int16 v117[4]; // [esp+18h] [ebp-110h] BYREF
  int v118; // [esp+20h] [ebp-108h] BYREF
  __int16 v119[4]; // [esp+24h] [ebp-104h] BYREF
  MouseClass *v120; // [esp+2Ch] [ebp-FCh]
  MouseClass *v121; // [esp+34h] [ebp-F4h] BYREF
  char inited; // [esp+3Bh] [ebp-EDh]
  __int16 a4[2]; // [esp+3Ch] [ebp-ECh] BYREF
  Tiberium *v124; // [esp+40h] [ebp-E8h]
  __int16 v125; // [esp+48h] [ebp-E0h]
  __int16 v126; // [esp+4Ah] [ebp-DEh]
  MouseClass *v127; // [esp+50h] [ebp-D8h]
  int v128; // [esp+54h] [ebp-D4h]
  int v129; // [esp+58h] [ebp-D0h]
  int v130; // [esp+5Ch] [ebp-CCh]
  MouseClass *v131; // [esp+60h] [ebp-C8h]
  int v132; // [esp+64h] [ebp-C4h]
  MouseClass *v133; // [esp+68h] [ebp-C0h]
  int v134; // [esp+6Ch] [ebp-BCh]
  MapResourceClass aP3; // [esp+70h] [ebp-B8h] BYREF
  int v136; // [esp+74h] [ebp-B4h]
  int v137; // [esp+78h] [ebp-B0h]
  int v138; // [esp+7Ch] [ebp-ACh]
  __int64 v139; // [esp+80h] [ebp-A8h] BYREF
  __int64 v140; // [esp+88h] [ebp-A0h] BYREF
  MouseClass *v141; // [esp+98h] [ebp-90h] BYREF
  MouseClass *v142; // [esp+9Ch] [ebp-8Ch] BYREF
  MouseClass *v143; // [esp+A0h] [ebp-88h] BYREF
  MouseClass *v144; // [esp+A4h] [ebp-84h] BYREF
  MouseClass *v145; // [esp+A8h] [ebp-80h] BYREF
  MouseClass *v146; // [esp+ACh] [ebp-7Ch] BYREF
  MouseClass *v147; // [esp+B0h] [ebp-78h] BYREF
  MouseClass *v148; // [esp+B4h] [ebp-74h] BYREF
  MouseClass *v149; // [esp+B8h] [ebp-70h] BYREF
  Random *v150; // [esp+BCh] [ebp-6Ch] BYREF
  MouseClass *v151; // [esp+C0h] [ebp-68h] BYREF
  MouseClass *v152; // [esp+C4h] [ebp-64h] BYREF
  MouseClass *v153; // [esp+C8h] [ebp-60h] BYREF
  MouseClass *v154; // [esp+CCh] [ebp-5Ch] BYREF
  MouseClass *v155; // [esp+D0h] [ebp-58h] BYREF
  MouseClass *v156; // [esp+D4h] [ebp-54h] BYREF
  MouseClass *v157; // [esp+D8h] [ebp-50h] BYREF
  MouseClass *v158; // [esp+DCh] [ebp-4Ch] BYREF
  MouseClass *v159; // [esp+E0h] [ebp-48h] BYREF
  MouseClass *v160; // [esp+E4h] [ebp-44h] BYREF
  MouseClass *v161; // [esp+E8h] [ebp-40h] BYREF
  MouseClass *v165; // [esp+F8h] [ebp-30h] BYREF
  MouseClass *v166; // [esp+FCh] [ebp-2Ch] BYREF
  MouseClass *v167; // [esp+100h] [ebp-28h] BYREF
  v124 = this;
  LOBYTE(aP5->field_0) = 0;
  int v8 = 0;
  int v9 = 0;
  int v10 = 0;
  LODWORD(v140) = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v127 = 0;
  v128 = 0;
  v129 = 0;
  v130 = 0;
  aP3 = 0;
  v136 = 0;
  v137 = 0;
  v138 = 0;
  switch ( a5 )
  {
    case 0:
      v11 = (MouseClass *)*(__int16 *)aP2->__tail_0;
      int v12 = *(__int16 *)&aP2->__tail_0[2];
      int v13 = *a3 - (_DWORD)v11;
      v8 = v12 - 12;
      v12 -= 4;
      v9 = v13 + 5;
      LODWORD(v140) = (char *)v11 - 2;
      v133 = (MouseClass *)(v13 + 1);
      v134 = 4;
      v130 = 8;
      v129 = v13 + 1;
      aP3 = 0;
      int v14 = 512 - v12;
      v132 = v12;
      v136 = v12;
      a4[0] = (__int16)v11;
      a4[1] = v12;
      int v15 = *(_DWORD *)a4;
      v10 = 12;
      v131 = v11;
      v127 = v11;
      v128 = v8;
      v137 = 512;
      v138 = v14;
      goto LABEL_6;
    case 2:
      v9 = 12;
      int v19 = *(__int16 *)aP2->__tail_0;
      int v20 = *(__int16 *)&aP2->__tail_0[2];
      int v21 = a3[1] - v20;
      LODWORD(v140) = v19 + 1;
      v8 = v20 - 2;
      v10 = v21 + 5;
      v134 = v21 + 1;
      v131 = (MouseClass *)(v19 + 1);
      v133 = (MouseClass *)4;
      v130 = v21 + 1;
      v132 = v20;
      v128 = v20;
      v129 = 8;
      aP3 = 0;
      v136 = 0;
      a4[0] = v19 + 5;
      a4[1] = v20;
      v127 = (MouseClass *)(v19 + 5);
      v137 = v19 + 4;
      v138 = 512;
      break;
    case 4:
      v10 = 12;
      v16 = (MouseClass *)*a3;
      int v17 = a3[1];
      int v18 = *(__int16 *)aP2->__tail_0 - (_DWORD)v16;
      v8 = v17 + 1;
      LODWORD(v140) = (char *)v16 - 2;
      v9 = v18 + 5;
      v133 = (MouseClass *)(v18 + 1);
      v129 = v18 + 1;
      v130 = 8;
      v131 = v16;
      v134 = 4;
      v127 = v16;
      v128 = v17 + 5;
      a4[0] = (__int16)v16;
      a4[1] = v17 + 1;
      v132 = v17 + 1;
      aP3 = 0;
      v136 = 0;
      v137 = 512;
      v138 = v17 + 4;
      break;
    case 6:
      v9 = 12;
      v22 = (MapResourceClass)*a3;
      int v23 = a3[1];
      int v24 = *(__int16 *)&aP2->__tail_0[2] - v23;
      v120 = (MouseClass *)(*(_DWORD *)&v22 - 12);
      LODWORD(v140) = *(_DWORD *)&v22 - 12;
      v10 = v24 + 5;
      *(_DWORD *)&v22 -= 4;
      v133 = (MouseClass *)4;
      v134 = v24 + 1;
      v127 = v120;
      v130 = v24 + 1;
      v129 = 8;
      int v25 = 512 - *(_DWORD *)&v22;
      v136 = 0;
      v131 = (MouseClass *)v22;
      aP3 = v22;
      a4[0] = *(_WORD *)v22.__tail_0;
      a4[1] = v23;
      v15 = *(_DWORD *)a4;
      v8 = v23 - 2;
      v132 = v23;
      v128 = v23;
      v137 = v25;
      v138 = 512;
LABEL_6:
      *(_DWORD *)a4 = v15;
      break;
    default:
      break;
  }
  v26 = v8;
  *(_DWORD *)v117 = v8;
  v115 = (MouseClass *)(v8 + v10);
  if ( v8 >= v8 + v10 )
  {
    v28 = g_MapCellHeight_Value;
  }
  else
  {
    int v27 = v140 + v9;
    v28 = g_MapCellHeight_Value;
    v120 = (MouseClass *)v27;
    do
    {
      int v29 = v140;
      if ( (int)v140 < v27 )
      {
        int v30 = v26;
        do
        {
          int v31 = v30 + (__int16)v29;
          if ( v31 > v28 && (__int16)v29 - v30 < v28 && v30 - (__int16)v29 < v28 && v31 <= g_MapCellCount )
          {
            if ( !g_MapTileArray )
              return 1;
            if ( *((_DWORD *)g_MapTileArray + 20 * (__int16)v29 + 20 * unk_89C2DC * v30 + 14) )
              return 1;
            LOWORD(v121) = v29;
            HIWORD(v121) = v117[0];
            _DWORD * v32 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v121);
            if ( !Cell::IsEmpty(v32) )
              return 1;
            v28 = g_MapCellHeight_Value;
          }
          v27 = (int)v120;
          ++v29;
        }
        while ( v29 < (int)v120 );
      }
      v26 = v117[0] + 1;
      ++*(_DWORD *)v117;
    }
    while ( *(int *)v117 < (int)v115 );
  }
  *(_DWORD *)v117 = v132;
  v120 = (MouseClass *)(v132 + v134);
  if ( v132 < v132 + v134 )
  {
    v115 = (MouseClass *)((char *)v133 + (_DWORD)v131);
    do
    {
      for ( i = v131; (int)i < (int)v115; i = (MouseClass *)((char *)i + 1) )
      {
        int v35 = (__int16)i + v117[0];
        if ( v35 > v28 && (__int16)i - v117[0] < v28 && v117[0] - (__int16)i < v28 && v35 <= g_MapCellCount )
        {
  unsigned int v38; // eax
  unsigned int v36; // eax
          do
          {
            v140 = (unsigned int)Random::State(&g_Randomizer);
            v36 = Math::RoundToInt((double)v140 * 0.000000001396983862248478);
          }
          while ( v36 > 5 );
          HIWORD(v121) = v117[0];
          unsigned int v37 = v36 + *(_DWORD *)&g_NetworkPlayerBuffer[78076];
          LOWORD(v121) = (_WORD)i;
          *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v121) + 14) = v37;
          do
          {
            v139 = (unsigned int)Random::State(&g_Randomizer);
            v38 = Math::RoundToInt((double)v139 * 9.31322574832319e-10);
          }
          while ( v38 > 3 );
          v39 = v117[0];
          LOWORD(v118) = (_WORD)i;
          HIWORD(v118) = v117[0];
          *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v118) + 282) = v38;
          if ( g_MapTileArray )
            *((_DWORD *)g_MapTileArray + 20 * (__int16)i + 20 * unk_89C2DC * v39 + 14) = aP1;
          v28 = g_MapCellHeight_Value;
        }
      }
      ++*(_DWORD *)v117;
    }
    while ( *(int *)v117 < (int)v120 );
  }
  v40 = RandomMap::SpreadArea(v124, (MouseClass *)v124[194], 0.003, &aP3, a4, 0);
  if ( v40 )
  {
    inited = MapClass::InitTileData(v124[194], 0);
    if ( inited )
    {
      inited = TiberiumClass::Spread(v124[194], 2, *(_DWORD *)&aP3, v136, v137, v138, 0, 0);
      if ( inited )
      {
        v41 = (MouseClass *)v124[194];
        LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
        for ( j = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); j; j = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
        {
          v43 = *(MouseClass **)(j + 36);
          v120 = v43;
          if ( g_MapTileArray )
            int v44 = *((_DWORD *)g_MapTileArray + 20 * (__int16)v43 + 20 * unk_89C2DC * SHIWORD(v120) + 14);
          else
            v44 = -1;
          if ( (MouseClass *)v44 == v41 )
            *(_BYTE *)(j + 283) += 4;
        }
        *(_DWORD *)v117 = v128;
        v120 = (MouseClass *)(v130 + v128);
        if ( v128 < v130 + v128 )
        {
          int v45 = g_MapCellHeight_Value;
          v118 = (int)v127 + v129;
          do
          {
            for ( k = (int)v127; k < v118; ++k )
            {
              int v47 = (__int16)k + v117[0];
              if ( v47 > v45 && (__int16)k - v117[0] < v45 && v117[0] - (__int16)k < v45 && v47 <= g_MapCellCount )
              {
  unsigned int v50; // eax
  unsigned int v48; // eax
                do
                {
                  v140 = (unsigned int)Random::State(&g_Randomizer);
                  v48 = Math::RoundToInt((double)v140 * 0.000000001396983862248478);
                }
                while ( v48 > 5 );
                HIWORD(v115) = v117[0];
                unsigned int v49 = v48 + *(_DWORD *)&g_NetworkPlayerBuffer[78076];
                LOWORD(v115) = k;
                *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v115) + 14) = v49;
                do
                {
                  v139 = (unsigned int)Random::State(&g_Randomizer);
                  v50 = Math::RoundToInt((double)v139 * 9.31322574832319e-10);
                }
                while ( v50 > 3 );
                v51 = v117[0];
                LOWORD(v121) = k;
                HIWORD(v121) = v117[0];
                *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v121) + 282) = v50;
                if ( g_MapTileArray )
                  *((_DWORD *)g_MapTileArray + 20 * (__int16)k + 20 * unk_89C2DC * v51 + 14) = aP1;
                v45 = g_MapCellHeight_Value;
              }
            }
            ++*(_DWORD *)v117;
          }
          while ( *(int *)v117 < (int)v120 );
        }
        char v116 = 1;
        switch ( a5 )
        {
          case 0:
            v117[1] = v132 - 2;
            v117[0] = (_WORD)v131 - 2;
            LOWORD(v120) = (_WORD)v131 - 2;
            HIWORD(v120) = v132 - 4;
            v157 = v120;
            char v97 = *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v157) + 283);
            *(_DWORD *)&DataGlobal_87F8E4[4268] = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5872]
                                                                     + 4
                                                                     * *(_DWORD *)&g_NetworkPlayerBuffer[80484]);
  int v164; // [esp+F4h] [ebp-34h] BYREF
            Tactical::MouseMove((int)&DataGlobal_87F7E8, (MouseClass *)&v164, (MouseClass *)v117);
            v98 = v124;
            GenerateTerrainMap(0, 0x10000, v97, (MapClass *)v124[194], &v116, 0);
            int v99 = v129;
            v100 = v129 + 2;
            v101 = *(IUnknown **)(*(_DWORD *)&g_NetworkPlayerBuffer[5872]
                                + 4 * *(_DWORD *)&g_NetworkPlayerBuffer[80484]
                                + 12);
            v119[0] = v129 + 2;
            *(_DWORD *)&DataGlobal_87F8E4[4268] = v101;
            HIWORD(v120) = v117[1];
            LOWORD(v120) = v117[0] + v129 + 2;
            v142 = v120;
            Tactical::MouseMove((int)&DataGlobal_87F7E8, (MouseClass *)&v166, (MouseClass *)&v142);
            GenerateTerrainMap(0, 0x10000, v97, (MapClass *)v98[194], &v116, 0);
            HIWORD(v120) = v117[1];
            LOWORD(v120) = v117[0] + 1;
            v144 = v120;
            *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v144) + 14) = 0xFFFF;
            v119[0] = v100;
            HIWORD(v120) = v117[1];
            LOWORD(v120) = v117[0] + v100;
            v146 = v120;
            int v102 = v99 + 2;
            int v103 = 0;
            for ( *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v146) + 14) = 0xFFFF;
                  v103 < v102;
  _BYTE *v104; // eax
                  v104[283] -= 4 )
            {
              v119[0] = v103 + 1;
              LOWORD(v120) = v117[0] + v103 + 1;
              HIWORD(v120) = v117[1];
              v148 = v120;
              v104 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v148);
              ++v103;
            }
            HIWORD(v120) = v117[1] + 1;
            LOWORD(v120) = v117[0] - 1;
            v121 = v120;
            HIWORD(v120) = v117[1] + 1;
            v119[0] = v129 + 4;
            int v105 = (__int16)(v117[0] - 1);
            int v106 = (__int16)(v117[1] + 1);
            LOWORD(v120) = v117[0] + v129 + 4;
            v118 = (int)v120;
            int v107 = g_MapCellHeight_Value;
            if ( v106 + v105 > g_MapCellHeight_Value
              && v105 - v106 < g_MapCellHeight_Value
              && v106 - v105 < g_MapCellHeight_Value
              && v106 + v105 <= g_MapCellCount )
            {
              *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v121) + 14) = 0xFFFF;
              _BYTE * v108 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v121);
              v108[283] += 4;
              *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v121) + 282) = 0;
              if ( g_MapTileArray )
                *((_DWORD *)g_MapTileArray + 20 * (__int16)v121 + 20 * unk_89C2DC * SHIWORD(v121) + 14) = v98[194];
              v107 = g_MapCellHeight_Value;
            }
            int v109 = SHIWORD(v118) + (__int16)v118;
            if ( v109 > v107
              && (__int16)v118 - SHIWORD(v118) < v107
              && SHIWORD(v118) - (__int16)v118 < v107
              && v109 <= g_MapCellCount )
            {
              *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v118) + 14) = 0xFFFF;
              _BYTE * v110 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v118);
              v110[283] += 4;
              *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v118) + 282) = 0;
              if ( g_MapTileArray )
                *((_DWORD *)g_MapTileArray + 20 * (__int16)v118 + 20 * unk_89C2DC * SHIWORD(v118) + 14) = v98[194];
            }
            int v111 = 0;
            if ( v129 > 0 )
            {
              int v112 = v129;
              int v113 = v129;
              do
              {
                v114 = v111 + 2;
                if ( v112 % 2 )
                {
                  v119[0] = v111 + 2;
                  LOWORD(v120) = v117[0] + v114;
                  HIWORD(v120) = v117[1] + 1;
                  v150 = (Random *)v120;
                  Tactical::MouseMove((int)&DataGlobal_87F7E8, (MouseClass *)&v139, (MouseClass *)&v150);
                  ++v111;
                  --v112;
                  *(_DWORD *)&DataGlobal_87F8E4[4268] = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5872]
                                                                           + 4
                                                                           * *(_DWORD *)&g_NetworkPlayerBuffer[80484]
                                                                           + 4);
                }
                else
                {
                  v125 = v111 + 2;
                  LOWORD(v115) = v117[0] + v114;
                  HIWORD(v115) = v117[1] + 1;
                  v152 = v115;
                  Tactical::MouseMove((int)&DataGlobal_87F7E8, (MouseClass *)&v140, (MouseClass *)&v152);
                  v111 += 2;
                  v112 -= 2;
                  *(_DWORD *)&DataGlobal_87F8E4[4268] = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5872]
                                                                           + 4
                                                                           * *(_DWORD *)&g_NetworkPlayerBuffer[80484]
                                                                           + 8);
                }
                GenerateTerrainMap(0, 0x10000, v97, (MapClass *)v124[194], &v116, 0);
              }
              while ( v111 < v113 );
            }
            break;
          case 2:
            v52 = v130;
            v119[0] = (__int16)v127;
            LOWORD(v115) = (_WORD)v127 + 2;
            v119[1] = v130 + v128;
            HIWORD(v115) = v130 + v128;
            v155 = v115;
            char v53 = *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v155) + 283);
            *(_DWORD *)&DataGlobal_87F8E4[4268] = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5872]
                                                                     + 4
                                                                     * *(_DWORD *)&g_NetworkPlayerBuffer[78080]);
  int v168; // [esp+104h] [ebp-24h] BYREF
            Tactical::MouseMove((int)&DataGlobal_87F7E8, (MouseClass *)&v168, (MouseClass *)v119);
            v54 = v124;
            GenerateTerrainMap(0, 0x10000, v53, (MapClass *)v124[194], &v116, 0);
            *(_DWORD *)&DataGlobal_87F8E4[4268] = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5872]
                                                                     + 4
                                                                     * *(_DWORD *)&g_NetworkPlayerBuffer[78080]
                                                                     + 12);
            v126 = v52 + 2;
            LOWORD(v115) = v119[0];
            HIWORD(v115) = v119[1] - (v52 + 2);
            v159 = v115;
  int v163; // [esp+F0h] [ebp-38h] BYREF
            Tactical::MouseMove((int)&DataGlobal_87F7E8, (MouseClass *)&v163, (MouseClass *)&v159);
            GenerateTerrainMap(0, 0x10000, v53, (MapClass *)v54[194], &v116, 0);
            v55 = v119[1];
            v126 = v52 + 3;
            v115 = (MouseClass *)(*(_DWORD *)v119 + 0x20000);
            v118 = *(_DWORD *)v119 + 0x20000;
            HIWORD(v115) = v119[1] - (v52 + 3);
            int v56 = g_MapCellHeight_Value;
            v57 = (MouseClass *)(__int16)(v119[1] + 2);
            *(_DWORD *)v117 = v115;
            char * v58 = (char *)v57 + v119[0];
            if ( (int)v58 > g_MapCellHeight_Value
              && v119[0] - (int)v57 < g_MapCellHeight_Value
              && (int)v57 - v119[0] < g_MapCellHeight_Value
              && (int)v58 <= g_MapCellCount )
            {
              *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v118) + 14) = 0xFFFF;
              _BYTE * v59 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v118);
              v59[283] += 4;
              *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v118) + 282) = 0;
              if ( g_MapTileArray )
                *((_DWORD *)g_MapTileArray + 20 * (__int16)v118 + 20 * unk_89C2DC * SHIWORD(v118) + 14) = v124[194];
              v56 = g_MapCellHeight_Value;
              v55 = v119[1];
            }
            int v60 = v117[1] + v117[0];
            if ( v60 > v56 && v117[0] - v117[1] < v56 && v117[1] - v117[0] < v56 && v60 <= g_MapCellCount )
            {
              *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v117) + 14) = 0xFFFF;
              _BYTE * v61 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v117);
              v61[283] += 4;
              *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v117) + 282) = 0;
              if ( g_MapTileArray )
                *((_DWORD *)g_MapTileArray + 20 * v117[0] + 20 * unk_89C2DC * v117[1] + 14) = v124[194];
              v55 = v119[1];
            }
            int v62 = 0;
            if ( v130 > 0 )
            {
              int v63 = v130;
              int v64 = v130;
              while ( 1 )
              {
                if ( v63 % 2 )
                {
                  v126 = v62 + 1;
                  LOWORD(v115) = v119[0];
                  HIWORD(v115) = v55 - (v62 + 1);
                  v151 = v115;
  int v170; // [esp+10Ch] [ebp-1Ch] BYREF
                  Tactical::MouseMove((int)&DataGlobal_87F7E8, (MouseClass *)&v170, (MouseClass *)&v151);
                  ++v62;
                  --v63;
                  *(_DWORD *)&DataGlobal_87F8E4[4268] = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5872]
                                                                           + 4
                                                                           * *(_DWORD *)&g_NetworkPlayerBuffer[78080]
                                                                           + 4);
                }
                else
                {
                  HIWORD(v120) = v62 + 2;
                  LOWORD(v121) = v119[0];
                  HIWORD(v121) = v55 - (v62 + 2);
                  v156 = v121;
  int v172; // [esp+114h] [ebp-14h] BYREF
                  Tactical::MouseMove((int)&DataGlobal_87F7E8, (MouseClass *)&v172, (MouseClass *)&v156);
                  v62 += 2;
                  v63 -= 2;
                  *(_DWORD *)&DataGlobal_87F8E4[4268] = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5872]
                                                                           + 4
                                                                           * *(_DWORD *)&g_NetworkPlayerBuffer[78080]
                                                                           + 8);
                }
                GenerateTerrainMap(0, 0x10000, v53, (MapClass *)v124[194], &v116, 0);
                if ( v62 >= v64 )
                  break;
                v55 = v119[1];
              }
            }
            break;
          case 4:
            v117[1] = v128;
            HIWORD(v115) = v128 + 2;
            v117[0] = (_WORD)v127 - 2;
            LOWORD(v115) = (_WORD)v127 - 2;
            v161 = v115;
            char v84 = *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v161) + 283);
            *(_DWORD *)&DataGlobal_87F8E4[4268] = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5872]
                                                                     + 4
                                                                     * *(_DWORD *)&g_NetworkPlayerBuffer[80404]);
            Tactical::MouseMove((int)&DataGlobal_87F7E8, (MouseClass *)&v167, (MouseClass *)v117);
            v85 = v124;
            GenerateTerrainMap(0, 0x10000, v84, (MapClass *)v124[194], &v116, 0);
            v86 = v129;
            *(_DWORD *)&DataGlobal_87F8E4[4268] = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5872]
                                                                     + 4
                                                                     * *(_DWORD *)&g_NetworkPlayerBuffer[80404]
                                                                     + 12);
            LOWORD(v120) = v129 + 2;
            LOWORD(v115) = v117[0] + v129 + 2;
            HIWORD(v115) = v117[1];
            v147 = v115;
  int v175; // [esp+120h] [ebp-8h] BYREF
            Tactical::MouseMove((int)&DataGlobal_87F7E8, (MouseClass *)&v175, (MouseClass *)&v147);
            GenerateTerrainMap(0, 0x10000, v84, (MapClass *)v85[194], &v116, 0);
            HIWORD(v115) = v117[1];
            LOWORD(v120) = v86 + 4;
            LOWORD(v115) = v117[0] - 1;
            v87 = v115;
            LOWORD(v115) = v117[0] + v86 + 4;
            v121 = v87;
            int v88 = g_MapCellHeight_Value;
            v118 = (int)v115;
            int v89 = (__int16)(v117[0] - 1);
            int v90 = v117[1] + v89;
            if ( v90 > g_MapCellHeight_Value
              && v89 - v117[1] < g_MapCellHeight_Value
              && v117[1] - v89 < g_MapCellHeight_Value
              && v90 <= g_MapCellCount )
            {
              *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v121) + 14) = 0xFFFF;
              _BYTE * v91 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v121);
              v91[283] += 4;
              *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v121) + 282) = 0;
              if ( g_MapTileArray )
                *((_DWORD *)g_MapTileArray + 20 * (__int16)v121 + 20 * unk_89C2DC * SHIWORD(v121) + 14) = v85[194];
              v88 = g_MapCellHeight_Value;
            }
            int v92 = SHIWORD(v118) + (__int16)v118;
            if ( v92 > v88
              && (__int16)v118 - SHIWORD(v118) < v88
              && SHIWORD(v118) - (__int16)v118 < v88
              && v92 <= g_MapCellCount )
            {
              *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v118) + 14) = 0xFFFF;
              _BYTE * v93 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v118);
              v93[283] += 4;
              *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v118) + 282) = 0;
              if ( g_MapTileArray )
                *((_DWORD *)g_MapTileArray + 20 * (__int16)v118 + 20 * unk_89C2DC * SHIWORD(v118) + 14) = v85[194];
            }
            int v94 = 0;
            if ( v129 > 0 )
            {
              int v95 = v129;
              int v96 = v129;
              do
              {
                if ( v95 % 2 )
                {
                  v125 = v94 + 2;
                  LOWORD(v115) = v94 + 2 + v117[0];
                  HIWORD(v115) = v117[1];
                  v149 = v115;
  int v169; // [esp+108h] [ebp-20h] BYREF
                  Tactical::MouseMove((int)&DataGlobal_87F7E8, (MouseClass *)&v169, (MouseClass *)&v149);
                  ++v94;
                  --v95;
                  *(_DWORD *)&DataGlobal_87F8E4[4268] = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5872]
                                                                           + 4
                                                                           * *(_DWORD *)&g_NetworkPlayerBuffer[80404]
                                                                           + 4);
                }
                else
                {
                  v119[0] = v94 + 2;
                  LOWORD(v120) = v94 + 2 + v117[0];
                  HIWORD(v120) = v117[1];
                  v141 = v120;
  int v173; // [esp+118h] [ebp-10h] BYREF
                  Tactical::MouseMove((int)&DataGlobal_87F7E8, (MouseClass *)&v173, (MouseClass *)&v141);
                  v94 += 2;
                  v95 -= 2;
                  *(_DWORD *)&DataGlobal_87F8E4[4268] = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5872]
                                                                           + 4
                                                                           * *(_DWORD *)&g_NetworkPlayerBuffer[80404]
                                                                           + 8);
                }
                GenerateTerrainMap(0, 0x10000, v84, (MapClass *)v124[194], &v116, 0);
              }
              while ( v94 < v96 );
            }
            break;
          case 6:
            int v65 = v130;
            v119[0] = (_WORD)v131 - 2;
            v119[1] = v130 + v128;
            HIWORD(v115) = v130 + v128;
            LOWORD(v115) = (_WORD)v131 - 4;
            v158 = v115;
            v66 = (MouseClass *)*((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v158) + 283);
            v67 = *(IUnknown **)(*(_DWORD *)&g_NetworkPlayerBuffer[5872] + 4 * (_DWORD)dword_ABB110);
            v120 = v66;
            *(_DWORD *)&DataGlobal_87F8E4[4268] = v67;
  int v174; // [esp+11Ch] [ebp-Ch] BYREF
            Tactical::MouseMove((int)&DataGlobal_87F7E8, (MouseClass *)&v174, (MouseClass *)v119);
            v68 = v124;
            GenerateTerrainMap(0, 0x10000, (char)v66, (MapClass *)v124[194], &v116, 0);
            *(_DWORD *)&DataGlobal_87F8E4[4268] = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5872]
                                                                     + 4 * (_DWORD)dword_ABB110
                                                                     + 12);
            v126 = v65 + 2;
            LOWORD(v115) = v119[0];
            HIWORD(v115) = v119[1] - (v65 + 2);
            v160 = v115;
  int v176; // [esp+124h] [ebp-4h] BYREF
            Tactical::MouseMove((int)&DataGlobal_87F7E8, (MouseClass *)&v176, (MouseClass *)&v160);
            GenerateTerrainMap(0, 0x10000, (char)v66, (MapClass *)v68[194], &v116, 0);
            v115 = (MouseClass *)(*(_DWORD *)v119 - 0x10000);
            int v162 = *(_DWORD *)v119 - 0x10000;
            _DWORD * v69 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v162);
            v70 = v129 + 2;
            v69[14] = 0xFFFF;
            v126 = v70;
            LOWORD(v115) = v119[0];
            HIWORD(v115) = v119[1] + v70;
            v143 = v115;
            *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v143) + 14) = 0xFFFF;
  _BYTE *v72; // eax
            for ( m = 0; m < v65 + 2; v72[283] -= 4 )
            {
              LOWORD(v115) = v119[0];
              HIWORD(v115) = v119[1] - m;
              v154 = v115;
              v72 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v154);
              ++m;
            }
            v73 = v119[1];
            LOWORD(v115) = v119[0] + 1;
            HIWORD(v115) = v119[1] + 2;
            v118 = (int)v115;
            v126 = v65 + 3;
            LOWORD(v115) = v119[0] + 1;
            HIWORD(v115) = v119[1] - (v65 + 3);
            *(_DWORD *)v117 = v115;
            int v74 = (__int16)(v119[0] + 1);
            int v75 = (__int16)(v119[1] + 2);
            int v76 = g_MapCellHeight_Value;
            if ( v75 + v74 > g_MapCellHeight_Value
              && v74 - v75 < g_MapCellHeight_Value
              && v75 - v74 < g_MapCellHeight_Value
              && v75 + v74 <= g_MapCellCount )
            {
              *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v118) + 14) = 0xFFFF;
              _BYTE * v77 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v118);
              v77[283] += 4;
              *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v118) + 282) = 0;
              if ( g_MapTileArray )
                *((_DWORD *)g_MapTileArray + 20 * (__int16)v118 + 20 * unk_89C2DC * SHIWORD(v118) + 14) = v124[194];
              v76 = g_MapCellHeight_Value;
              v73 = v119[1];
            }
            int v78 = v117[1] + v117[0];
            if ( v78 > v76 && v117[0] - v117[1] < v76 && v117[1] - v117[0] < v76 && v78 <= g_MapCellCount )
            {
              *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v117) + 14) = 0xFFFF;
              _BYTE * v79 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v117);
              v79[283] += 4;
              *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v117) + 282) = 0;
              if ( g_MapTileArray )
                *((_DWORD *)g_MapTileArray + 20 * v117[0] + 20 * unk_89C2DC * v117[1] + 14) = v124[194];
              v73 = v119[1];
            }
            int v80 = 0;
            if ( v65 > 0 )
            {
              int v81 = v130;
              v82 = v124;
              int v83 = v130;
              while ( 1 )
              {
                if ( v81 % 2 )
                {
                  v126 = v80 + 1;
                  HIWORD(v115) = v73 - (v80 + 1);
                  LOWORD(v115) = v119[0] + 1;
                  v153 = v115;
                  Tactical::MouseMove((int)&DataGlobal_87F7E8, (MouseClass *)&v165, (MouseClass *)&v153);
                  ++v80;
                  --v81;
                  *(_DWORD *)&DataGlobal_87F8E4[4268] = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5872]
                                                                           + 4 * (_DWORD)dword_ABB110
                                                                           + 4);
                }
                else
                {
                  HIWORD(v124) = v80 + 2;
                  HIWORD(v121) = v73 - (v80 + 2);
                  LOWORD(v121) = v119[0] + 1;
                  v145 = v121;
  int v171; // [esp+110h] [ebp-18h] BYREF
                  Tactical::MouseMove((int)&DataGlobal_87F7E8, (MouseClass *)&v171, (MouseClass *)&v145);
                  v80 += 2;
                  v81 -= 2;
                  *(_DWORD *)&DataGlobal_87F8E4[4268] = *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5872]
                                                                           + 4 * (_DWORD)dword_ABB110
                                                                           + 8);
                }
                GenerateTerrainMap(0, 0x10000, (char)v120, (MapClass *)v82[194], &v116, 0);
                if ( v80 >= v83 )
                  break;
                v73 = v119[1];
              }
            }
            break;
          default:
            break;
        }
      }
    }
    v40 = inited;
  }
  aP3 = 0;
  v136 = 12;
  v137 = 0;
  v138 = -12;
  v131 = (MouseClass *)-12;
  v132 = 0;
  v133 = (MouseClass *)12;
  v134 = 0;
  if ( v40 )
  {
    *(double *)aP6->__tail_0 = (double)*((int *)&aP3 + a5 / 2) + *(double *)aP6->__tail_0;
    *a7 = (double)(int)*(&v131 + a5 / 2) + *a7;
  }
  LOBYTE(aP5->field_0) = v40;
  return v40;
}
} // namespace gamemd
