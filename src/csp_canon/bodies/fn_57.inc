// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00572230  globalHelper_072230  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_072230(ObjectClass * aP0, int a2)
{
{
    int v2;
    short v3;
    unsigned int v4;
    int *v5;
    unsigned char v6;
    int v7;
    v2 = a2 & 7;
    v3 = *(short *)&DataGlobal_89E138.__pad_14B0[4 * v2 + 160];
    LOWORD(v2) = *(short *)&aP0->__pad_0[2] + *(short *)&DataGlobal_89E138.__pad_14B0[4 * v2 + 162];
    LOWORD(a2) = *(short *)aP0->__pad_0 + v3;
    HIWORD(a2) = v2;
    v4 = (short)a2 + ((short)v2 << 9);
    if ( v4 >= 0x40000 || (v5 = *(int **)(*(int *)&DataGlobal_87C374.__pad_14B0[8448] + 4 * v4)) == 0 )
  {
    g_Map_GlobalCellIndex = (IUnknown *)a2;
    v5 = g_CellClassArray;
  }
    if ( *((char *)(v5) + 320) < 0 )
  {
    v6 = *((char *)(v5) + 286);
    if ( v6 <= 3u )
    {
    *((char *)(v5) + 286) = 4;
    }
    else if ( v6 == 5 )
    {
    *((char *)(v5) + 286) = 6;
    }
  }
    v7 = v5[14] - g_Cell_BuildabilityLUT + 1;
    if ( v7 == DataGlobal_ABC1E8 || v7 == DataGlobal_AA0E38 )
  {
    LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&a2, (IUnknown *)1, 0);
  }
    else if ( v7 == g_TerrainSoundTable2 )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&a2, (IUnknown *)(g_Cell_BuildabilityLUT + g_TerrainSoundTable2), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    else if ( v7 == g_TerrainSoundTable2 + 2 )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&a2, (IUnknown *)(g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 2), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    return v7;
}
}

// ==== BACKFILL 0x00572330  globalHelper_072330  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_072330(IUnknown * aP0, int a2)
{
{
    int v2;
    short v3;
    unsigned int v4;
    int *v5;
    unsigned char v6;
    int v7;
    v2 = a2 & 7;
    v3 = *(short *)&DataGlobal_89E138.__pad_14B0[4 * v2 + 160];
    LOWORD(v2) = HIWORD(aP0->field_0) + *(short *)&DataGlobal_89E138.__pad_14B0[4 * v2 + 162];
    LOWORD(a2) = LOWORD(aP0->field_0) + v3;
    HIWORD(a2) = v2;
    v4 = (short)a2 + ((short)v2 << 9);
    if ( v4 >= 0x40000 || (v5 = *(int **)(*(int *)&DataGlobal_87C374.__pad_14B0[8448] + 4 * v4)) == 0 )
  {
    g_Map_GlobalCellIndex = (IUnknown *)a2;
    v5 = g_CellClassArray;
  }
    if ( *((char *)(v5) + 320) < 0 )
  {
    v6 = *((char *)(v5) + 286);
    if ( v6 <= 3u )
    {
    *((char *)(v5) + 286) = 5;
    }
    else if ( v6 == 4 )
    {
    *((char *)(v5) + 286) = 6;
    }
  }
    v7 = v5[14] - g_Cell_BuildabilityLUT + 1;
    if ( v7 == DataGlobal_ABC2B4 || v7 == DataGlobal_AA1130 )
  {
    LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&a2, (IUnknown *)1, 0);
  }
    else if ( v7 == g_TerrainSoundTable2 )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&a2, (IUnknown *)(g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 1), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    else if ( v7 == g_TerrainSoundTable2 + 1 )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&a2, (IUnknown *)(g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 2), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    return v7;
}
}

// ==== BACKFILL 0x00572B80  CellClass::SetTileType13  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char CellClass::SetTileType13(IUnknown * aP0, int a2)
{
{
    int v2;
    short v3;
    unsigned int v4;
    int *v5;
    unsigned char v6;
    int v7;
    v2 = a2 & 7;
    v3 = *(short *)&DataGlobal_89E138.__pad_14B0[4 * v2 + 160];
    LOWORD(v2) = HIWORD(aP0->field_0) + *(short *)&DataGlobal_89E138.__pad_14B0[4 * v2 + 162];
    LOWORD(a2) = LOWORD(aP0->field_0) + v3;
    HIWORD(a2) = v2;
    v4 = (short)a2 + ((short)v2 << 9);
    if ( v4 >= 0x40000 || (v5 = *(int **)(*(int *)&DataGlobal_87C374.__pad_14B0[8448] + 4 * v4)) == 0 )
  {
    g_Map_GlobalCellIndex = (IUnknown *)a2;
    v5 = g_CellClassArray;
  }
    if ( *((char *)(v5) + 320) < 0 )
  {
    v6 = *((char *)(v5) + 286);
    if ( v6 >= 9u )
    {
    if ( v6 <= 0xCu )
      {
    *((char *)(v5) + 286) = 14;
      }
    else if ( v6 == 13 )
      {
    *((char *)(v5) + 286) = 15;
      }
    }
  }
    v7 = v5[14] - g_Cell_BuildabilityLUT + 1;
    if ( v7 == DataGlobal_ABC1D0 || v7 == DataGlobal_AA1540 )
  {
    LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&a2, (IUnknown *)1, 0);
  }
    else if ( v7 == g_TerrainSoundConfig )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&a2, (IUnknown *)(g_Cell_BuildabilityLUT + g_TerrainSoundConfig), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    else if ( v7 == g_TerrainSoundConfig + 2 )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&a2, (IUnknown *)(g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 2), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    return v7;
}
}

// ==== BACKFILL 0x00572C90  CellClass::SetTileType14  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char CellClass::SetTileType14(IUnknown * aP0, int a2)
{
{
    int v2;
    short v3;
    unsigned int v4;
    int *v5;
    unsigned char v6;
    int v7;
    v2 = a2 & 7;
    v3 = *(short *)&DataGlobal_89E138.__pad_14B0[4 * v2 + 160];
    LOWORD(v2) = HIWORD(aP0->field_0) + *(short *)&DataGlobal_89E138.__pad_14B0[4 * v2 + 162];
    LOWORD(a2) = LOWORD(aP0->field_0) + v3;
    HIWORD(a2) = v2;
    v4 = (short)a2 + ((short)v2 << 9);
    if ( v4 >= 0x40000 || (v5 = *(int **)(*(int *)&DataGlobal_87C374.__pad_14B0[8448] + 4 * v4)) == 0 )
  {
    g_Map_GlobalCellIndex = (IUnknown *)a2;
    v5 = g_CellClassArray;
  }
    if ( *((char *)(v5) + 320) < 0 )
  {
    v6 = *((char *)(v5) + 286);
    if ( v6 >= 9u )
    {
    if ( v6 <= 0xCu )
      {
    *((char *)(v5) + 286) = 13;
      }
    else if ( v6 == 14 )
      {
    *((char *)(v5) + 286) = 15;
      }
    }
  }
    v7 = v5[14] - g_Cell_BuildabilityLUT + 1;
    if ( v7 == DataGlobal_AA1548 || v7 == DataGlobal_AA0740 )
  {
    LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&a2, (IUnknown *)1, 0);
  }
    else if ( v7 == g_TerrainSoundConfig )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&a2, (IUnknown *)(g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 1), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    else if ( v7 == g_TerrainSoundConfig + 1 )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&a2, (IUnknown *)(g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 2), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    return v7;
}
}

// ==== BACKFILL 0x005749C0  CellClass::ApplyTerrainModTile  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::ApplyTerrainModTile(int a1) {
{
      MouseClass *v2;
      unsigned int v4;
      _DWORD *v5;
      int result;
      __int16 v7;
      int v8;
      __int16 v9;
      __int16 v10;
      int v11;
      __int16 v12;
      __int16 v13;
      int v14;
      __int16 v15;
      __int16 v16;
      int v17;
      int v18;
      MouseClass *v19;

      v2 = aP1;
      v4 = SLOWORD(aP1->field_0) + (SHIWORD(aP1->field_0) << 9);
      if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4.__pad_3C[4] + 4 * v4)) == 0 )
      {
        g_Map_GlobalCellIndex = (IUnknown *)aP1->field_0;
        v5 = g_CellClassArray;
      }
      result = v5[17];
      if ( result >= 205 && result <= 213 || result >= 223 && result <= 226 || result == 231 )
      {
        v7 = HIWORD(aP1->field_0);
        LOWORD(aP1) = aP1->field_0;
        HIWORD(aP1) = v7 - 1;
        v8 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 17);
        if ( v8 >= 205 && v8 <= 232 )
        {
          v10 = HIWORD(v2->field_0) - 2;
          LOWORD(aP1) = v2->field_0;
          HIWORD(aP1) = v10;
          v11 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 17);
          if ( v11 >= 205 && v11 <= 232 )
          {
            v12 = HIWORD(v2->field_0);
            LOWORD(aP1) = v2->field_0;
            HIWORD(aP1) = v12 - 1;
            return CellClass::ApplyTerrainMod2(this, (MouseClass *)&aP1);
          }
          else
          {
            return CellClass::ApplyTerrainMod2(this, v2);
          }
        }
        else
        {
          v9 = HIWORD(v2->field_0) + 1;
          LOWORD(aP1) = v2->field_0;
          HIWORD(aP1) = v9;
          return CellClass::ApplyTerrainMod2(this, (MouseClass *)&aP1);
        }
      }
      else if ( result >= 214 && result <= 222 || result >= 227 && result <= 230 || result == 232 )
      {
        v13 = LOWORD(aP1->field_0) - 1;
        HIWORD(aP1) = HIWORD(aP1->field_0);
        LOWORD(aP1) = v13;
        v14 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 17);
        if ( v14 >= 205 && v14 <= 232 )
        {
          v16 = LOWORD(v2->field_0) - 2;
          HIWORD(aP1) = HIWORD(v2->field_0);
          LOWORD(aP1) = v16;
          v17 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 17);
          if ( v17 >= 205 && v17 <= 232 )
          {
            aP1 = (MouseClass *)1;
            v18 = CellStruct::Sub((__int16 *)v2, (IUnknown *)&v19, (IUnknown *)&aP1)->field_0;
            return CellClass::ApplyTerrainMod(this, (MouseClass *)&v18);
          }
          else
          {
            return CellClass::ApplyTerrainMod(this, v2);
          }
        }
        else
        {
          v15 = LOWORD(v2->field_0) + 1;
          HIWORD(aP1) = HIWORD(v2->field_0);
          LOWORD(aP1) = v15;
          return CellClass::ApplyTerrainMod(this, (MouseClass *)&aP1);
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x00578080  Cell::GetGroundHeight  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Cell::GetGroundHeight(IUnknown * aP0)
{
{
    int v1;
    int v2;
    int v3;
    int *v4;
    int v6[2];
    IUnknown *aP0a;
    v1 = aP0->field_4;
    v6[0] = aP0->field_0;
    v6[1] = v1;
    v2 = aP0->field_4 / 256;
    v3 = v6[0] / 256 + (v2 << 9);
    if ( v3 < 0 || v3 >= *(int *)&DataGlobal_87C374.__pad_14B0[8452] || (v4 = *(int **)(*(int *)&DataGlobal_87C374.__pad_14B0[8448] + 4 * v3)) == 0 )
  {
    LOWORD(aP0a) = v6[0] / 256;
    HIWORD(aP0a) = v2;
    v4 = g_CellClassArray;
    g_Map_GlobalCellIndex = aP0a;
  }
    return Isometric::InitTables((int)v4, (IUnknown *)v6);
}
}

// ==== BACKFILL 0x00578AC0  MapClass::IncrementRedrawCounter  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
void MapClass::IncrementRedrawCounter()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_578AC0(_BYTE *this)
{
  ++*(this + 4440); /*0x578ac0*/
}
}

// ==== BACKFILL 0x00578B70  sub_578B70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_578B70::sub_578B70(short * a2)
{
{
    int v2;
    int v3;
    short v4;
    short v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    unsigned int v12;
    int v13;
    v2 = this->M256;
    v3 = this->M252;
    v4 = v2 + this->M244 - v3;
    v5 = v2 + v3 + 1;
    v6 = this->M260;
    v7 = this->M264;
    v8 = *a2;
    v9 = *((int*)(a2) + 1);
    v10 = (v8 + v4 - ((2 * v6 - 1) % 3 != 0) - v5 - v9) / ((2 * v6 - 1) / 3);
    v11 = v9 - ((2 * v7 - 1) % 3 != 0) - v4 - v5;
    v12 = (unsigned __int64)(1431655766LL * (2 * v7 - 1)) >> 32;
    v13 = (v8 + v11) / (int)((v12 >> 31) + v12);
    if ( v10 == 3 )
    v10 = 2;
    if ( v13 == 3 )
    v13 = 2;
    return v13 + v10 + 2 * v13 + 1;
}
}

// ==== BACKFILL 0x00578C50  sub_578C50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_578C50::sub_578C50(unsigned int * a2, int a3)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    short v8;
    int v9;
    v3 = ((2 *(void**)this->M260 - 1) % 3 != 0) + (2 *(void**)this->M260 - 1) / 3 * ((a3 - 1) % 3);
    v4 = this->M256;
    v5 = ((2 *(void**)this->M264 - 1) % 3 != 0) + (a3 - 1) / 3 * ((2 *(void**)this->M264 - 1) / 3);
    v6 = this->M252;
    v8 = v4 + this->M244 - v6;
    LOWORD(v9) = v4 + v6 + 1 + (v3 + (v5 & 1) + v5 + (v3 & 1)) / 2;
    HIWORD(v9) = (v5 - v3) / 2 + v8;
    *a2 = v9;
    return a2;
}
}

// ==== BACKFILL 0x0057A320  MapClass::BuildTileConnectivityGraph  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::BuildTileConnectivityGraph(MapClass * aP1, IUnknown * aP2, IUnknown * aP3)
{
{
    MapClass *v4;
    int result;
    signed int v6;
    bool v7;
    MapClass *NeighbourContent;
    IUnknown *v9;
    int v10;
    char *CellData;
    v4 = aP1;
    result = *(int *)&aP1->__pad_30[8];
    if ( result >= g_CellPassabilityLUT && result < g_CellPassabilityLUT + 12 )
  {
    result = Cell::GetTerrainMask(this, (IUnknown *)aP1, 2);
    if ( result == 199 || result == 124 || result == 241 || result == 31 || result == 198 || result == 108 || result == 177 || result == 27 )
    {
    v6 = 0;
    v7 = (char)aP3 == 0;
    *(int *)&aP1->__pad_30[8] = 0xFFFF;
    aP1->__pad_10C[14] = 0;
    if ( !v7 )
    *((int *)Tactical::GetCellData((short *)&aP1->__pad_18[12]) + 14) = aP2;
    do
      {
    NeighbourContent = (MapClass *)Cell::GetNeighbourContent(v4, v6);
    v9 = *(IUnknown **)&NeighbourContent->__pad_18[12];
    aP3 = v9;
    result = SHIWORD(v9);
    v10 = SHIWORD(v9) + (short)v9;
    if ( v10 > g_MapCellHeight_Value )
        {
    if ( (short)aP3 - SHIWORD(aP3) < g_MapCellHeight_Value )
          {
    result = SHIWORD(aP3) - (short)aP3;
    if ( result < g_MapCellHeight_Value && v10 <= g_MapCellCount )
            {
    aP3 = v9;
    CellData = Tactical::GetCellData((short *)&aP3);
    *((int *)(CellData) + 16) = -1;
    result = Cell::GetTerrainMask(this, (IUnknown *)NeighbourContent, 2);
    *((int *)(CellData) + 16) = result;
            }
          }
    v4 = aP1;
        }
    ++v6;
      }
    while ( v6 < 8 );
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0057B790  MapClass::TriggerEVA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int MapClass::TriggerEVA(IUnknown * aP0)
{
{
    int v1;
    BuildingTypeClass *v2;
    double v3;
    int result;
    unsigned int v5;
    int *v6;
    v1 = -5;
    do
  {
    v2 = (BuildingTypeClass *)-5;
    do
    {
    v3 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( (double)(short)-(short)v1 * (double)(short)-(short)v1 + (double)(short)-(short)v2 * (double)(short)-(short)v2));
    result = Math::RoundToInt(v3);
    if ( (short)result <= 5 )
      {
    v5 = SLOWORD(aP0->field_0) + (SHIWORD(aP0->field_0) << 9);
    if ( v5 < 0x40000 && (result = *(int *)(*(int *)&DataGlobal_87C374.__pad_14B0[8448] + 4 * v5)) != 0 )
        {
    v6 = (int *)result;
        }
    else
        {
    result = aP0->field_0;
    v6 = g_CellClassArray;
    g_Map_GlobalCellIndex = (IUnknown *)aP0->field_0;
        }
    if ( v6 )
    result = CellClass::ReduceTiberium((int)v6, (InfantryTypeClass *)1);
      }
    v2 = (BuildingTypeClass *)((char *)(v2) + 1);
    }
    while ( (int)v2 <= 5 );
    ++v1;
  }
    while ( v1 <= 5 );
    return result;
}
}

// ==== BACKFILL 0x0057BCF0  CellClass::ApplyTileModification  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::ApplyTileModification(void* a1) {
{
      unsigned int v2;
      _DWORD *v3;
      _DWORD *v4;
      __int16 v5;
      unsigned int v6;
      _DWORD *v7;
      __int16 v8;
      unsigned int v9;
      _DWORD *v10;
      _DWORD *v11;
      int *PlacementRect;
      int *StartCoords;
      int v14;
      int v15;
      int v16;
      int v17;
      int v18;
      bool v19;
      int v20;
      int v21;
      int v22;
      int v23;
      int v24;
      int v25;
      _DWORD *v26;
      _DWORD *v27;
      _DWORD *v28;
      _DWORD *v29;
      _DWORD *v30;
      int v31;
      int v32;
      int *v33;
      int *v34;
      int v35;
      int v36;
      int v37;
      int v38;
      int v39;
      int v40;
      int v41;
      int *v42;
      int *v43;
      _DWORD *v44;
      int v45;
      char v46;
      int v48;
      int v49;
      int v50;
      int v51;
      int v52;
      int v53;
      int v54;
      char v55;
      _DWORD *v56;
      _DWORD *v57;
      int *v58;
      int v59;
      int v60;
      int v61;
      int v62;
      int v63;
      int v64;
      int v65;
      int v66;
      int v67;
      int v68;
      int v69;
      int v70;
      int v71;
      int v72;
      _DWORD v73[4];
      int v74;
      int v75;
      int v76[4];
      int v77[4];
      int v78[4];
      int v79[4];

      v58 = this;
      v2 = *a2 + (a2[1] << 9);
      if ( v2 < 0x40000 && (v3 = *(_DWORD **)(g_Shroud_CellArray + 4 * v2)) != 0 )
      {
        v4 = v3;
      }
      else
      {
        v4 = g_CellClassArray;
        g_Map_GlobalCellIndex = *(_DWORD *)a2;
      }
      v5 = a2[1] - 1;
      LOWORD(v56) = *a2;
      HIWORD(v56) = v5;
      v6 = (__int16)v56 + (v5 << 9);
      if ( v6 < 0x40000 && (v7 = *(_DWORD **)(g_Shroud_CellArray + 4 * v6)) != 0 )
      {
        v57 = v7;
      }
      else
      {
        v57 = g_CellClassArray;
        g_Map_GlobalCellIndex = (int)v56;
      }
      v8 = a2[1] + 1;
      LOWORD(v56) = *a2;
      HIWORD(v56) = v8;
      v9 = (__int16)v56 + (v8 << 9);
      if ( v9 < 0x40000 && (v10 = *(_DWORD **)(g_Shroud_CellArray + 4 * v9)) != 0 )
      {
        v56 = v10;
      }
      else
      {
        v11 = v56;
        v56 = g_CellClassArray;
        g_Map_GlobalCellIndex = (int)v11;
      }
      v54 = v4[17];
      LOBYTE(v64) = 0;
      v55 = 0;
      PlacementRect = BuildingClass::GetPlacementRect((int)v4, &v74);
      StartCoords = House::GetStartCoords((int)v4, v73);
      if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 )
      {
        v15 = *PlacementRect;
        v24 = PlacementRect[1];
        v25 = PlacementRect[2];
        v23 = PlacementRect[3];
      }
      else
      {
        v48 = PlacementRect[2];
        if ( v48 <= 0 || (v63 = PlacementRect[3], v63 <= 0) )
        {
          v15 = *StartCoords;
          v24 = StartCoords[1];
          v25 = StartCoords[2];
          v23 = StartCoords[3];
        }
        else
        {
          v14 = StartCoords[2];
          v15 = *StartCoords;
          v16 = StartCoords[1];
          v17 = StartCoords[3];
          v61 = v14;
          v18 = *PlacementRect;
          v19 = v15 <= *PlacementRect;
          v62 = v17;
          if ( !v19 )
          {
            v20 = v15 - v18 + v61;
            v15 = v18;
            v61 = v20;
          }
          v21 = PlacementRect[1];
          v73[0] = v21;
          if ( v16 > v21 )
          {
            v22 = v16 - v21 + v62;
            v16 = v21;
            v62 = v22;
          }
          if ( v15 + v61 < v18 + v48 )
            v61 = v18 - v15 + v48 + 1;
          v23 = v62;
          if ( v62 + v16 < v73[0] + v63 )
            v23 = v73[0] + v63 - v16 + 1;
          v24 = v16;
          v25 = v61;
        }
      }
      v72 = v23;
      v71 = v25;
      v69 = v15;
      v70 = v24;
      v65 = 0;
      v66 = 0;
      v67 = 0;
      v68 = 0;
      if ( v54 == 92 )
      {
        v26 = v56;
        v57[17] = 93;
        v26[17] = 93;
        v4[17] = 93;
        LOWORD(v49) = *a2 - 1;
        HIWORD(v49) = a2[1];
        v54 = v49;
        CreateCliffRampMap((__int16 *)&v54);
      }
      else if ( v54 == 94 )
      {
        v27 = v56;
        v57[17] = 95;
        v27[17] = 95;
        v4[17] = 95;
        LOWORD(v50) = *a2 + 1;
        HIWORD(v50) = a2[1];
        v54 = v50;
        CreateCliffRampMap((__int16 *)&v54);
      }
      else if ( v54 >= 80 )
      {
        if ( v54 >= 83 )
          return v55;
        v29 = v57;
        v30 = v56;
        v57[17] = 100;
        v30[17] = 100;
        v4[17] = 100;
        BuildingClass::AddUpgrade((int)&DataGlobal_87F7E8, (int)(v29 + 9));
        BuildingClass::AddUpgrade((int)&DataGlobal_87F7E8, (int)(v30 + 9));
        BuildingClass::AddUpgrade((int)&DataGlobal_87F7E8, (int)(v4 + 9));
        LOWORD(v52) = *a2 - 1;
        HIWORD(v52) = a2[1];
        LOBYTE(v64) = 1;
        v54 = v52;
        CreateCliffRampMap((__int16 *)&v54);
        HIWORD(v52) = a2[1];
        LOWORD(v52) = *a2 + 1;
        v54 = v52;
        CreateCliffRampMap((__int16 *)&v54);
        globalHelper_07C990(*(_DWORD *)a2);
        v31 = *a2 - 1;
        v32 = a2[1] - 1;
        v55 = 1;
        v65 = v31;
        v66 = v32;
        v67 = 3;
        v68 = 3;
      }
      else
      {
        v28 = v56;
        v57[17] = 80;
        v28[17] = 80;
        v4[17] = 80;
        LOWORD(v51) = *a2 - 1;
        HIWORD(v51) = a2[1];
        v54 = v51;
        CreateCliffRampMap((__int16 *)&v54);
        HIWORD(v51) = a2[1];
        LOWORD(v51) = *a2 + 1;
        v54 = v51;
        CreateCliffRampMap((__int16 *)&v54);
      }
      v73[1] = g_Map_VisibleRect;
      v73[0] = DSurface_ViewBounds;
      v33 = House::GetStartCoords((int)v4, v76);
      v34 = BuildingClass::GetPlacementRect((int)v4, v78);
      if ( v33[2] <= 0 || v33[3] <= 0 )
      {
        v59 = *v34;
        v60 = v34[1];
        v61 = v34[2];
        v62 = v34[3];
      }
      else
      {
        v53 = v34[2];
        if ( v53 <= 0 || (v63 = v34[3], v63 <= 0) )
        {
          v59 = *v33;
          v60 = v33[1];
          v61 = v33[2];
          v62 = v33[3];
        }
        else
        {
          v35 = *v33;
          v36 = *v34;
          v37 = v33[2];
          v38 = v33[1];
          v39 = v33[3];
          v19 = v35 <= *v34;
          v75 = v37;
          if ( !v19 )
          {
            v37 += v35 - v36;
            v35 = v36;
            v75 = v37;
          }
          v40 = v34[1];
          v54 = v40;
          if ( v38 > v40 )
          {
            v39 += v38 - v40;
            v38 = v40;
          }
          if ( v35 + v37 >= v36 + v53 )
            v41 = v75;
          else
            v41 = v36 - v35 + v53 + 1;
          if ( v39 + v38 < v63 + v54 )
            v39 = v63 + v54 - v38 + 1;
          v59 = v35;
          v60 = v38;
          v61 = v41;
          v62 = v39;
        }
      }
      v42 = Rect::Union(v79, &v69, &v59);
      v43 = Bounds::Subtract(v42, v77, v73);
      v69 = *v43;
      v70 = v43[1];
      v71 = v43[2];
      v72 = v43[3];
      Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0);
      House::AnnounceUpgrade((int)v4, -1);
      House::AnnounceUpgrade((int)v57, -1);
      v44 = v56;
      House::AnnounceUpgrade((int)v56, -1);
      v45 = v64;
      Cell::SearchEnemies((int)v4, v64);
      Cell::SearchEnemies((int)v57, v45);
      Cell::SearchEnemies((int)v44, v45);
      v46 = v55;
      if ( v55 )
        Terrain::ConnectivityGraph(v58);
      if ( v67 > 0 && v68 > 0 )
        UpdateAreaConnectivityMap(v58, &v65);
      return v46;
}
} }

// ==== BACKFILL 0x0057C2B0  CellClass::ApplyTileModification2  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::ApplyTileModification2(void* a1) {
{
      unsigned int v2;
      _DWORD *v3;
      _DWORD *v4;
      __int16 v5;
      unsigned int v6;
      _DWORD *v7;
      __int16 v8;
      unsigned int v9;
      _DWORD *v10;
      _DWORD *v11;
      int *PlacementRect;
      int *StartCoords;
      int v14;
      int v15;
      int v16;
      int v17;
      int v18;
      bool v19;
      int v20;
      int v21;
      int v22;
      int v23;
      int v24;
      int v25;
      _DWORD *v26;
      _DWORD *v27;
      _DWORD *v28;
      _DWORD *v29;
      _DWORD *v30;
      int v31;
      int v32;
      int *v33;
      int *v34;
      int v35;
      int v36;
      int v37;
      int v38;
      int v39;
      int v40;
      int v41;
      int *v42;
      int *v43;
      _DWORD *v44;
      int v45;
      char v46;
      int v48;
      int v49;
      int v50;
      int v51;
      char v52;
      _DWORD *v53;
      _DWORD *v54;
      int *v55;
      int v56;
      int v57;
      int v58;
      int v59;
      int v60;
      int v61;
      int v62;
      int v63;
      int v64;
      int v65;
      int v66;
      int v67;
      int v68;
      int v69;
      _DWORD v70[4];
      int v71;
      int v72;
      int v73[4];
      int v74[4];
      int v75[4];
      int v76[4];

      v55 = this;
      v2 = *a2 + (a2[1] << 9);
      if ( v2 < 0x40000 && (v3 = *(_DWORD **)(g_Shroud_CellArray + 4 * v2)) != 0 )
      {
        v4 = v3;
      }
      else
      {
        v4 = g_CellClassArray;
        g_Map_GlobalCellIndex = *(_DWORD *)a2;
      }
      v5 = *a2 - 1;
      HIWORD(v53) = a2[1];
      LOWORD(v53) = v5;
      v6 = v5 + (SHIWORD(v53) << 9);
      if ( v6 < 0x40000 && (v7 = *(_DWORD **)(g_Shroud_CellArray + 4 * v6)) != 0 )
      {
        v54 = v7;
      }
      else
      {
        v54 = g_CellClassArray;
        g_Map_GlobalCellIndex = (int)v53;
      }
      v8 = *a2 + 1;
      HIWORD(v53) = a2[1];
      LOWORD(v53) = v8;
      v9 = v8 + (SHIWORD(v53) << 9);
      if ( v9 < 0x40000 && (v10 = *(_DWORD **)(g_Shroud_CellArray + 4 * v9)) != 0 )
      {
        v53 = v10;
      }
      else
      {
        v11 = v53;
        v53 = g_CellClassArray;
        g_Map_GlobalCellIndex = (int)v11;
      }
      v51 = v4[17];
      LOBYTE(v61) = 0;
      v52 = 0;
      PlacementRect = BuildingClass::GetPlacementRect((int)v4, &v71);
      StartCoords = House::GetStartCoords((int)v4, v70);
      if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 )
      {
        v15 = *PlacementRect;
        v24 = PlacementRect[1];
        v25 = PlacementRect[2];
        v23 = PlacementRect[3];
      }
      else
      {
        v48 = PlacementRect[2];
        if ( v48 <= 0 || (v60 = PlacementRect[3], v60 <= 0) )
        {
          v15 = *StartCoords;
          v24 = StartCoords[1];
          v25 = StartCoords[2];
          v23 = StartCoords[3];
        }
        else
        {
          v14 = StartCoords[2];
          v15 = *StartCoords;
          v16 = StartCoords[1];
          v17 = StartCoords[3];
          v58 = v14;
          v18 = *PlacementRect;
          v19 = v15 <= *PlacementRect;
          v59 = v17;
          if ( !v19 )
          {
            v20 = v15 - v18 + v58;
            v15 = v18;
            v58 = v20;
          }
          v21 = PlacementRect[1];
          v70[0] = v21;
          if ( v16 > v21 )
          {
            v22 = v16 - v21 + v59;
            v16 = v21;
            v59 = v22;
          }
          if ( v15 + v58 < v18 + v48 )
            v58 = v18 - v15 + v48 + 1;
          v23 = v59;
          if ( v59 + v16 < v70[0] + v60 )
            v23 = v70[0] + v60 - v16 + 1;
          v24 = v16;
          v25 = v58;
        }
      }
      v69 = v23;
      v68 = v25;
      v66 = v15;
      v67 = v24;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v65 = 0;
      if ( v51 == 96 )
      {
        v26 = v53;
        v54[17] = 97;
        v26[17] = 97;
        v4[17] = 97;
        v51 = *(_DWORD *)a2 + 0x10000;
        CreateCliffStraightMap((__int16 *)&v51);
      }
      else if ( v51 == 98 )
      {
        v27 = v53;
        v54[17] = 99;
        v27[17] = 99;
        v4[17] = 99;
        v51 = *(_DWORD *)a2 - 0x10000;
        CreateCliffStraightMap((__int16 *)&v51);
      }
      else if ( v51 >= 89 )
      {
        if ( v51 >= 92 )
          return v52;
        v29 = v54;
        v30 = v53;
        v54[17] = 101;
        v30[17] = 101;
        v4[17] = 101;
        BuildingClass::AddUpgrade((int)&DataGlobal_87F7E8, (int)(v29 + 9));
        BuildingClass::AddUpgrade((int)&DataGlobal_87F7E8, (int)(v30 + 9));
        BuildingClass::AddUpgrade((int)&DataGlobal_87F7E8, (int)(v4 + 9));
        v49 = *(_DWORD *)a2 - 0x10000;
        LOBYTE(v61) = 1;
        v51 = v49;
        CreateCliffStraightMap((__int16 *)&v51);
        v51 = *(_DWORD *)a2 + 0x10000;
        CreateCliffStraightMap((__int16 *)&v51);
        globalHelper_07C870(*(_DWORD *)a2);
        v31 = *a2 - 1;
        v32 = a2[1] - 1;
        v52 = 1;
        v62 = v31;
        v63 = v32;
        v64 = 3;
        v65 = 3;
      }
      else
      {
        v28 = v53;
        v54[17] = 89;
        v28[17] = 89;
        v4[17] = 89;
        v51 = *(_DWORD *)a2 - 0x10000;
        CreateCliffStraightMap((__int16 *)&v51);
        v51 = *(_DWORD *)a2 + 0x10000;
        CreateCliffStraightMap((__int16 *)&v51);
      }
      v70[1] = g_Map_VisibleRect;
      v70[0] = DSurface_ViewBounds;
      v33 = House::GetStartCoords((int)v4, v73);
      v34 = BuildingClass::GetPlacementRect((int)v4, v75);
      if ( v33[2] <= 0 || v33[3] <= 0 )
      {
        v56 = *v34;
        v57 = v34[1];
        v58 = v34[2];
        v59 = v34[3];
      }
      else
      {
        v50 = v34[2];
        if ( v50 <= 0 || (v60 = v34[3], v60 <= 0) )
        {
          v56 = *v33;
          v57 = v33[1];
          v58 = v33[2];
          v59 = v33[3];
        }
        else
        {
          v35 = *v33;
          v36 = *v34;
          v37 = v33[2];
          v38 = v33[1];
          v39 = v33[3];
          v19 = v35 <= *v34;
          v72 = v37;
          if ( !v19 )
          {
            v37 += v35 - v36;
            v35 = v36;
            v72 = v37;
          }
          v40 = v34[1];
          v51 = v40;
          if ( v38 > v40 )
          {
            v39 += v38 - v40;
            v38 = v40;
          }
          if ( v35 + v37 >= v36 + v50 )
            v41 = v72;
          else
            v41 = v36 - v35 + v50 + 1;
          if ( v39 + v38 < v60 + v51 )
            v39 = v60 + v51 - v38 + 1;
          v56 = v35;
          v57 = v38;
          v58 = v41;
          v59 = v39;
        }
      }
      v42 = Rect::Union(v76, &v66, &v56);
      v43 = Bounds::Subtract(v42, v74, v70);
      v66 = *v43;
      v67 = v43[1];
      v68 = v43[2];
      v69 = v43[3];
      Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0);
      House::AnnounceUpgrade((int)v4, -1);
      House::AnnounceUpgrade((int)v54, -1);
      v44 = v53;
      House::AnnounceUpgrade((int)v53, -1);
      v45 = v61;
      Cell::SearchEnemies((int)v4, v61);
      Cell::SearchEnemies((int)v54, v45);
      Cell::SearchEnemies((int)v44, v45);
      v46 = v52;
      if ( v52 )
        Terrain::ConnectivityGraph(v55);
      if ( v64 > 0 && v65 > 0 )
        UpdateAreaConnectivityMap(v55, &v62);
      return v46;
}
} }

// ==== BACKFILL 0x0057CF60  CellClass::ApplyTileModification3  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::ApplyTileModification3(void* a1) {
{
      unsigned int v2;
      _DWORD *v3;
      _DWORD *v4;
      __int16 v5;
      unsigned int v6;
      _DWORD *v7;
      __int16 v8;
      unsigned int v9;
      _DWORD *v10;
      _DWORD *v11;
      int *PlacementRect;
      int *StartCoords;
      int v14;
      int v15;
      int v16;
      int v17;
      int v18;
      bool v19;
      int v20;
      int v21;
      int v22;
      int v23;
      int v24;
      int v25;
      _DWORD *v26;
      _DWORD *v27;
      _DWORD *v28;
      _DWORD *v29;
      _DWORD *v30;
      int v31;
      int v32;
      int *v33;
      int *v34;
      int v35;
      int v36;
      int v37;
      int v38;
      int v39;
      int v40;
      int v41;
      int *v42;
      int *v43;
      _DWORD *v44;
      int v45;
      char v46;
      int v48;
      int v49;
      int v50;
      int v51;
      int v52;
      int v53;
      int v54;
      char v55;
      _DWORD *v56;
      _DWORD *v57;
      int *v58;
      int v59;
      int v60;
      int v61;
      int v62;
      int v63;
      int v64;
      int v65;
      int v66;
      int v67;
      int v68;
      int v69;
      int v70;
      int v71;
      int v72;
      _DWORD v73[4];
      int v74;
      int v75;
      int v76[4];
      int v77[4];
      int v78[4];
      int v79[4];

      v58 = this;
      v2 = *a2 + (a2[1] << 9);
      if ( v2 < 0x40000 && (v3 = *(_DWORD **)(g_Shroud_CellArray + 4 * v2)) != 0 )
      {
        v4 = v3;
      }
      else
      {
        v4 = g_CellClassArray;
        g_Map_GlobalCellIndex = *(_DWORD *)a2;
      }
      v5 = a2[1] - 1;
      LOWORD(v56) = *a2;
      HIWORD(v56) = v5;
      v6 = (__int16)v56 + (v5 << 9);
      if ( v6 < 0x40000 && (v7 = *(_DWORD **)(g_Shroud_CellArray + 4 * v6)) != 0 )
      {
        v57 = v7;
      }
      else
      {
        v57 = g_CellClassArray;
        g_Map_GlobalCellIndex = (int)v56;
      }
      v8 = a2[1] + 1;
      LOWORD(v56) = *a2;
      HIWORD(v56) = v8;
      v9 = (__int16)v56 + (v8 << 9);
      if ( v9 < 0x40000 && (v10 = *(_DWORD **)(g_Shroud_CellArray + 4 * v9)) != 0 )
      {
        v56 = v10;
      }
      else
      {
        v11 = v56;
        v56 = g_CellClassArray;
        g_Map_GlobalCellIndex = (int)v11;
      }
      v54 = v4[17];
      LOBYTE(v64) = 0;
      v55 = 0;
      PlacementRect = BuildingClass::GetPlacementRect((int)v4, &v74);
      StartCoords = House::GetStartCoords((int)v4, v73);
      if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 )
      {
        v15 = *PlacementRect;
        v24 = PlacementRect[1];
        v25 = PlacementRect[2];
        v23 = PlacementRect[3];
      }
      else
      {
        v48 = PlacementRect[2];
        if ( v48 <= 0 || (v63 = PlacementRect[3], v63 <= 0) )
        {
          v15 = *StartCoords;
          v24 = StartCoords[1];
          v25 = StartCoords[2];
          v23 = StartCoords[3];
        }
        else
        {
          v14 = StartCoords[2];
          v15 = *StartCoords;
          v16 = StartCoords[1];
          v17 = StartCoords[3];
          v61 = v14;
          v18 = *PlacementRect;
          v19 = v15 <= *PlacementRect;
          v62 = v17;
          if ( !v19 )
          {
            v20 = v15 - v18 + v61;
            v15 = v18;
            v61 = v20;
          }
          v21 = PlacementRect[1];
          v73[0] = v21;
          if ( v16 > v21 )
          {
            v22 = v16 - v21 + v62;
            v16 = v21;
            v62 = v22;
          }
          if ( v15 + v61 < v18 + v48 )
            v61 = v18 - v15 + v48 + 1;
          v23 = v62;
          if ( v62 + v16 < v73[0] + v63 )
            v23 = v73[0] + v63 - v16 + 1;
          v24 = v16;
          v25 = v61;
        }
      }
      v72 = v23;
      v71 = v25;
      v69 = v15;
      v70 = v24;
      v65 = 0;
      v66 = 0;
      v67 = 0;
      v68 = 0;
      if ( v54 == 223 )
      {
        v26 = v56;
        v57[17] = 224;
        v26[17] = 224;
        v4[17] = 224;
        LOWORD(v49) = *a2 - 1;
        HIWORD(v49) = a2[1];
        v54 = v49;
        CreateCliffBridgeMap((__int16 *)&v54);
      }
      else if ( v54 == 225 )
      {
        v27 = v56;
        v57[17] = 226;
        v27[17] = 226;
        v4[17] = 226;
        LOWORD(v50) = *a2 + 1;
        HIWORD(v50) = a2[1];
        v54 = v50;
        CreateCliffBridgeMap((__int16 *)&v54);
      }
      else if ( v54 >= 211 )
      {
        if ( v54 >= 214 )
          return v55;
        v29 = v57;
        v30 = v56;
        v57[17] = 231;
        v30[17] = 231;
        v4[17] = 231;
        BuildingClass::AddUpgrade((int)&DataGlobal_87F7E8, (int)(v29 + 9));
        BuildingClass::AddUpgrade((int)&DataGlobal_87F7E8, (int)(v30 + 9));
        BuildingClass::AddUpgrade((int)&DataGlobal_87F7E8, (int)(v4 + 9));
        LOWORD(v52) = *a2 - 1;
        HIWORD(v52) = a2[1];
        LOBYTE(v64) = 1;
        v54 = v52;
        CreateCliffBridgeMap((__int16 *)&v54);
        HIWORD(v52) = a2[1];
        LOWORD(v52) = *a2 + 1;
        v54 = v52;
        CreateCliffBridgeMap((__int16 *)&v54);
        globalHelper_07DC20(*(_DWORD *)a2);
        v31 = *a2 - 1;
        v32 = a2[1] - 1;
        v55 = 1;
        v65 = v31;
        v66 = v32;
        v67 = 3;
        v68 = 3;
      }
      else
      {
        v28 = v56;
        v57[17] = 211;
        v28[17] = 211;
        v4[17] = 211;
        LOWORD(v51) = *a2 - 1;
        HIWORD(v51) = a2[1];
        v54 = v51;
        CreateCliffBridgeMap((__int16 *)&v54);
        HIWORD(v51) = a2[1];
        LOWORD(v51) = *a2 + 1;
        v54 = v51;
        CreateCliffBridgeMap((__int16 *)&v54);
      }
      v73[1] = g_Map_VisibleRect;
      v73[0] = DSurface_ViewBounds;
      v33 = House::GetStartCoords((int)v4, v76);
      v34 = BuildingClass::GetPlacementRect((int)v4, v78);
      if ( v33[2] <= 0 || v33[3] <= 0 )
      {
        v59 = *v34;
        v60 = v34[1];
        v61 = v34[2];
        v62 = v34[3];
      }
      else
      {
        v53 = v34[2];
        if ( v53 <= 0 || (v63 = v34[3], v63 <= 0) )
        {
          v59 = *v33;
          v60 = v33[1];
          v61 = v33[2];
          v62 = v33[3];
        }
        else
        {
          v35 = *v33;
          v36 = *v34;
          v37 = v33[2];
          v38 = v33[1];
          v39 = v33[3];
          v19 = v35 <= *v34;
          v75 = v37;
          if ( !v19 )
          {
            v37 += v35 - v36;
            v35 = v36;
            v75 = v37;
          }
          v40 = v34[1];
          v54 = v40;
          if ( v38 > v40 )
          {
            v39 += v38 - v40;
            v38 = v40;
          }
          if ( v35 + v37 >= v36 + v53 )
            v41 = v75;
          else
            v41 = v36 - v35 + v53 + 1;
          if ( v39 + v38 < v63 + v54 )
            v39 = v63 + v54 - v38 + 1;
          v59 = v35;
          v60 = v38;
          v61 = v41;
          v62 = v39;
        }
      }
      v42 = Rect::Union(v79, &v69, &v59);
      v43 = Bounds::Subtract(v42, v77, v73);
      v69 = *v43;
      v70 = v43[1];
      v71 = v43[2];
      v72 = v43[3];
      Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0);
      House::AnnounceUpgrade((int)v4, -1);
      House::AnnounceUpgrade((int)v57, -1);
      v44 = v56;
      House::AnnounceUpgrade((int)v56, -1);
      v45 = v64;
      Cell::SearchEnemies((int)v4, v64);
      Cell::SearchEnemies((int)v57, v45);
      Cell::SearchEnemies((int)v44, v45);
      v46 = v55;
      if ( v55 )
        Terrain::ConnectivityGraph(v58);
      if ( v67 > 0 && v68 > 0 )
        UpdateAreaConnectivityMap(v58, &v65);
      return v46;
}
} }

// ==== BACKFILL 0x0057D530  CellClass::ApplyTileModification4  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::ApplyTileModification4(void* a1) {
{
      unsigned int v2;
      _DWORD *v3;
      _DWORD *v4;
      __int16 v5;
      unsigned int v6;
      _DWORD *v7;
      __int16 v8;
      unsigned int v9;
      _DWORD *v10;
      _DWORD *v11;
      int *PlacementRect;
      int *StartCoords;
      int v14;
      int v15;
      int v16;
      int v17;
      int v18;
      bool v19;
      int v20;
      int v21;
      int v22;
      int v23;
      int v24;
      int v25;
      _DWORD *v26;
      _DWORD *v27;
      _DWORD *v28;
      _DWORD *v29;
      _DWORD *v30;
      int v31;
      int v32;
      int *v33;
      int *v34;
      int v35;
      int v36;
      int v37;
      int v38;
      int v39;
      int v40;
      int v41;
      int *v42;
      int *v43;
      _DWORD *v44;
      _DWORD *v45;
      char v46;
      int v48;
      int v49;
      int v50;
      char v51;
      _DWORD *v52;
      int *v53;
      _DWORD *v54;
      int v55;
      int v56;
      int v57;
      int v58;
      int v59;
      int v60;
      int v61;
      int v62;
      int v63;
      int v64;
      int v65;
      int v66;
      int v67;
      _DWORD v68[4];
      int v69;
      int v70;
      int v71[4];
      int v72[4];
      int v73[4];
      int v74[4];

      v53 = this;
      v2 = *a2 + (a2[1] << 9);
      if ( v2 < 0x40000 && (v3 = *(_DWORD **)(g_Shroud_CellArray + 4 * v2)) != 0 )
      {
        v4 = v3;
      }
      else
      {
        v4 = g_CellClassArray;
        g_Map_GlobalCellIndex = *(_DWORD *)a2;
      }
      v5 = *a2 - 1;
      HIWORD(v52) = a2[1];
      LOWORD(v52) = v5;
      v6 = v5 + (SHIWORD(v52) << 9);
      if ( v6 < 0x40000 && (v7 = *(_DWORD **)(g_Shroud_CellArray + 4 * v6)) != 0 )
      {
        v54 = v7;
      }
      else
      {
        v54 = g_CellClassArray;
        g_Map_GlobalCellIndex = (int)v52;
      }
      v8 = *a2 + 1;
      HIWORD(v52) = a2[1];
      LOWORD(v52) = v8;
      v9 = v8 + (SHIWORD(v52) << 9);
      if ( v9 < 0x40000 && (v10 = *(_DWORD **)(g_Shroud_CellArray + 4 * v9)) != 0 )
      {
        v52 = v10;
      }
      else
      {
        v11 = v52;
        v52 = g_CellClassArray;
        g_Map_GlobalCellIndex = (int)v11;
      }
      v50 = v4[17];
      v51 = 0;
      PlacementRect = BuildingClass::GetPlacementRect((int)v4, &v69);
      StartCoords = House::GetStartCoords((int)v4, v68);
      if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 )
      {
        v15 = *PlacementRect;
        v24 = PlacementRect[1];
        v25 = PlacementRect[2];
        v23 = PlacementRect[3];
      }
      else
      {
        v48 = PlacementRect[2];
        if ( v48 <= 0 || (v59 = PlacementRect[3], v59 <= 0) )
        {
          v15 = *StartCoords;
          v24 = StartCoords[1];
          v25 = StartCoords[2];
          v23 = StartCoords[3];
        }
        else
        {
          v14 = StartCoords[2];
          v15 = *StartCoords;
          v16 = StartCoords[1];
          v17 = StartCoords[3];
          v57 = v14;
          v18 = *PlacementRect;
          v19 = v15 <= *PlacementRect;
          v58 = v17;
          if ( !v19 )
          {
            v20 = v15 - v18 + v57;
            v15 = v18;
            v57 = v20;
          }
          v21 = PlacementRect[1];
          v68[0] = v21;
          if ( v16 > v21 )
          {
            v22 = v16 - v21 + v58;
            v16 = v21;
            v58 = v22;
          }
          if ( v15 + v57 < v18 + v48 )
            v57 = v18 - v15 + v48 + 1;
          v23 = v58;
          if ( v58 + v16 < v68[0] + v59 )
            v23 = v68[0] + v59 - v16 + 1;
          v24 = v16;
          v25 = v57;
        }
      }
      v67 = v23;
      v66 = v25;
      v64 = v15;
      v65 = v24;
      v60 = 0;
      v61 = 0;
      v62 = 0;
      v63 = 0;
      if ( v50 == 227 )
      {
        v26 = v52;
        v54[17] = 228;
        v26[17] = 228;
        v4[17] = 228;
        v50 = *(_DWORD *)a2 + 0x10000;
        CreateCliffStraightBridgeMap((__int16 *)&v50);
      }
      else if ( v50 == 229 )
      {
        v27 = v52;
        v54[17] = 230;
        v27[17] = 230;
        v4[17] = 230;
        v50 = *(_DWORD *)a2 - 0x10000;
        CreateCliffStraightBridgeMap((__int16 *)&v50);
      }
      else if ( v50 >= 220 )
      {
        if ( v50 >= 223 )
          return v51;
        v29 = v54;
        v30 = v52;
        v54[17] = 232;
        v30[17] = 232;
        v4[17] = 232;
        BuildingClass::AddUpgrade((int)&DataGlobal_87F7E8, (int)(v29 + 9));
        BuildingClass::AddUpgrade((int)&DataGlobal_87F7E8, (int)(v30 + 9));
        BuildingClass::AddUpgrade((int)&DataGlobal_87F7E8, (int)(v4 + 9));
        v50 = *(_DWORD *)a2 - 0x10000;
        CreateCliffStraightBridgeMap((__int16 *)&v50);
        v50 = *(_DWORD *)a2 + 0x10000;
        CreateCliffStraightBridgeMap((__int16 *)&v50);
        globalHelper_07DAF0(*(_DWORD *)a2);
        v31 = *a2 - 1;
        v32 = a2[1] - 1;
        v51 = 1;
        v60 = v31;
        v61 = v32;
        v62 = 3;
        v63 = 3;
      }
      else
      {
        v28 = v52;
        v54[17] = 220;
        v28[17] = 220;
        v4[17] = 220;
        v50 = *(_DWORD *)a2 - 0x10000;
        CreateCliffStraightBridgeMap((__int16 *)&v50);
        v50 = *(_DWORD *)a2 + 0x10000;
        CreateCliffStraightBridgeMap((__int16 *)&v50);
      }
      v68[1] = g_Map_VisibleRect;
      v68[0] = DSurface_ViewBounds;
      v33 = House::GetStartCoords((int)v4, v73);
      v34 = BuildingClass::GetPlacementRect((int)v4, v71);
      if ( v33[2] <= 0 || v33[3] <= 0 )
      {
        v55 = *v34;
        v56 = v34[1];
        v57 = v34[2];
        v58 = v34[3];
      }
      else
      {
        v49 = v34[2];
        if ( v49 <= 0 || (v59 = v34[3], v59 <= 0) )
        {
          v55 = *v33;
          v56 = v33[1];
          v57 = v33[2];
          v58 = v33[3];
        }
        else
        {
          v35 = *v33;
          v36 = *v34;
          v37 = v33[2];
          v38 = v33[1];
          v39 = v33[3];
          v19 = v35 <= *v34;
          v70 = v37;
          if ( !v19 )
          {
            v37 += v35 - v36;
            v35 = v36;
            v70 = v37;
          }
          v40 = v34[1];
          v50 = v40;
          if ( v38 > v40 )
          {
            v39 += v38 - v40;
            v38 = v40;
          }
          if ( v35 + v37 >= v36 + v49 )
            v41 = v70;
          else
            v41 = v36 - v35 + v49 + 1;
          if ( v39 + v38 < v59 + v50 )
            v39 = v59 + v50 - v38 + 1;
          v55 = v35;
          v56 = v38;
          v57 = v41;
          v58 = v39;
        }
      }
      v42 = Rect::Union(v74, &v64, &v55);
      v43 = Bounds::Subtract(v42, v72, v68);
      v64 = *v43;
      v65 = v43[1];
      v66 = v43[2];
      v67 = v43[3];
      Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0);
      House::AnnounceUpgrade((int)v4, -1);
      v44 = v54;
      House::AnnounceUpgrade((int)v54, -1);
      v45 = v52;
      House::AnnounceUpgrade((int)v52, -1);
      Cell::SearchEnemies((int)v4, 1);
      Cell::SearchEnemies((int)v44, 1);
      Cell::SearchEnemies((int)v45, 1);
      v46 = v51;
      if ( v51 )
        Terrain::ConnectivityGraph(v53);
      if ( v62 > 0 && v63 > 0 )
        UpdateAreaConnectivityMap(v53, &v60);
      return v46;
}
} }

// ==== BACKFILL 0x0057F200  CellClass::ApplyCliffTileModifications  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void CellClass::ApplyCliffTileModifications(int a1) {
{
      IUnknown *v2;
      unsigned int v4;
      _DWORD *v5;
      int v6;
      __int16 v7;
      int v8;
      __int16 v9;
      __int16 v10;
      int v11;
      __int16 v12;
      __int16 v13;
      int v14;
      __int16 v15;
      __int16 v16;
      int v17;
      int v18;
      MouseClass *v19;

      v2 = aP1;
      v4 = SLOWORD(aP1->field_0) + (SHIWORD(aP1->field_0) << 9);
      if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4.__pad_3C[4] + 4 * v4)) == 0 )
      {
        g_Map_GlobalCellIndex = (IUnknown *)aP1->field_0;
        v5 = g_CellClassArray;
      }
      v6 = v5[17];
      if ( v6 >= 74 && v6 <= 82 || v6 >= 92 && v6 <= 95 || v6 == 100 )
      {
        v7 = HIWORD(aP1->field_0);
        LOWORD(aP1) = aP1->field_0;
        HIWORD(aP1) = v7 - 1;
        v8 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 17);
        if ( v8 >= 74 && v8 <= 101 )
        {
          v10 = HIWORD(v2->field_0) - 2;
          LOWORD(aP1) = v2->field_0;
          HIWORD(aP1) = v10;
          v11 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 17);
          if ( v11 >= 74 && v11 <= 101 )
          {
            v12 = HIWORD(v2->field_0);
            LOWORD(aP1) = v2->field_0;
            HIWORD(aP1) = v12 - 1;
            CellClass::ApplyTileModification6(this, (MouseClass *)&aP1);
          }
          else
          {
            CellClass::ApplyTileModification6(this, (MouseClass *)v2);
          }
        }
        else
        {
          v9 = HIWORD(v2->field_0) + 1;
          LOWORD(aP1) = v2->field_0;
          HIWORD(aP1) = v9;
          CellClass::ApplyTileModification6(this, (MouseClass *)&aP1);
        }
      }
      else if ( v6 >= 83 && v6 <= 91 || v6 >= 96 && v6 <= 99 || v6 == 101 )
      {
        v13 = LOWORD(aP1->field_0) - 1;
        HIWORD(aP1) = HIWORD(aP1->field_0);
        LOWORD(aP1) = v13;
        v14 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 17);
        if ( v14 >= 74 && v14 <= 101 )
        {
          v16 = LOWORD(v2->field_0) - 2;
          HIWORD(aP1) = HIWORD(v2->field_0);
          LOWORD(aP1) = v16;
          v17 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 17);
          if ( v17 >= 74 && v17 <= 101 )
          {
            aP1 = (IUnknown *)1;
            v18 = CellStruct::Sub((__int16 *)v2, (IUnknown *)&v19, (IUnknown *)&aP1)->field_0;
            CellClass::ApplyTileModification7(this, (MouseClass *)&v18);
          }
          else
          {
            CellClass::ApplyTileModification7(this, (MouseClass *)v2);
          }
        }
        else
        {
          v15 = LOWORD(v2->field_0) + 1;
          HIWORD(aP1) = HIWORD(v2->field_0);
          LOWORD(aP1) = v15;
          CellClass::ApplyTileModification7(this, (MouseClass *)&aP1);
        }
      }
}
} }

// ==== BACKFILL 0x0057F440  CellClass::ApplyTileMod58  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void CellClass::ApplyTileMod58(int a1) {
{
      IUnknown *v2;
      unsigned int v4;
      _DWORD *v5;
      int v6;
      __int16 v7;
      int v8;
      __int16 v9;
      __int16 v10;
      int v11;
      __int16 v12;
      __int16 v13;
      int v14;
      __int16 v15;
      __int16 v16;
      int v17;
      int v18;
      MouseClass *v19;

      v2 = aP1;
      v4 = SLOWORD(aP1->field_0) + (SHIWORD(aP1->field_0) << 9);
      if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4.__pad_3C[4] + 4 * v4)) == 0 )
      {
        g_Map_GlobalCellIndex = (IUnknown *)aP1->field_0;
        v5 = g_CellClassArray;
      }
      v6 = v5[17];
      if ( v6 >= 205 && v6 <= 213 || v6 >= 223 && v6 <= 226 || v6 == 231 )
      {
        v7 = HIWORD(aP1->field_0);
        LOWORD(aP1) = aP1->field_0;
        HIWORD(aP1) = v7 - 1;
        v8 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 17);
        if ( v8 >= 205 && v8 <= 232 )
        {
          v10 = HIWORD(v2->field_0) - 2;
          LOWORD(aP1) = v2->field_0;
          HIWORD(aP1) = v10;
          v11 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 17);
          if ( v11 >= 205 && v11 <= 232 )
          {
            v12 = HIWORD(v2->field_0);
            LOWORD(aP1) = v2->field_0;
            HIWORD(aP1) = v12 - 1;
            CellClass::ApplyTileModification5(this, (MouseClass *)&aP1);
          }
          else
          {
            CellClass::ApplyTileModification5(this, (MouseClass *)v2);
          }
        }
        else
        {
          v9 = HIWORD(v2->field_0) + 1;
          LOWORD(aP1) = v2->field_0;
          HIWORD(aP1) = v9;
          CellClass::ApplyTileModification5(this, (MouseClass *)&aP1);
        }
      }
      else if ( v6 >= 214 && v6 <= 222 || v6 >= 227 && v6 <= 230 || v6 == 232 )
      {
        v13 = LOWORD(aP1->field_0) - 1;
        HIWORD(aP1) = HIWORD(aP1->field_0);
        LOWORD(aP1) = v13;
        v14 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 17);
        if ( v14 >= 205 && v14 <= 232 )
        {
          v16 = LOWORD(v2->field_0) - 2;
          HIWORD(aP1) = HIWORD(v2->field_0);
          LOWORD(aP1) = v16;
          v17 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP1) + 17);
          if ( v17 >= 205 && v17 <= 232 )
          {
            aP1 = (IUnknown *)1;
            v18 = CellStruct::Sub((__int16 *)v2, (IUnknown *)&v19, (IUnknown *)&aP1)->field_0;
            CellClass::ApplyTileModification8(this, (MouseClass *)&v18);
          }
          else
          {
            CellClass::ApplyTileModification8(this, (MouseClass *)v2);
          }
        }
        else
        {
          v15 = LOWORD(v2->field_0) + 1;
          HIWORD(aP1) = HIWORD(v2->field_0);
          LOWORD(aP1) = v15;
          CellClass::ApplyTileModification8(this, (MouseClass *)&aP1);
        }
      }
}
} }
