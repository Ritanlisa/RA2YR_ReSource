// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00580B20  CellClass::updateLighting  cls=CellClass  sig=csp  renamed_refs=0  residual=q002 ====
namespace gamemd { bool CellClass::updateLighting() {
{
      unsigned int v1;
      _DWORD *v2;
      int v3;

      v1 = *this + (this->q002 << 9);
      if ( v1 >= 0x40000 || (v2 = *(_DWORD **)(g_Shroud_CellArray + 4 * v1)) == 0 )
      {
        g_Map_GlobalCellIndex = *(_DWORD *)this;
        v2 = g_CellClassArray;
      }
      v3 = v2[17];
      return v3 >= 74 && v3 <= 101;
}
} }

// ==== BACKFILL 0x00580B70  CellClass::applyTileDamage  cls=CellClass  sig=csp  renamed_refs=0  residual=q002 ====
namespace gamemd { bool CellClass::applyTileDamage() {
{
      unsigned int v1;
      _DWORD *v2;
      int v3;

      v1 = *this + (this->q002 << 9);
      if ( v1 >= 0x40000 || (v2 = *(_DWORD **)(g_Shroud_CellArray + 4 * v1)) == 0 )
      {
        g_Map_GlobalCellIndex = *(_DWORD *)this;
        v2 = g_CellClassArray;
      }
      v3 = v2[17];
      return v3 >= 205 && v3 <= 232;
}
} }

// ==== BACKFILL 0x00581F50  MapClass::BuildSubzones  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * MapClass::BuildSubzones()
{
{
    int v2;
    int *v3;
    v2 = 2;
    v3 = this + 47;
    do
  {
    (*(void (__thiscall **)(int *))(*v3 + 12))(v3);
    Subzone::BuildGraph(this, v2--);
    v3 -= 6;
  }
    while ( v2 >= 0 );
    return MapClass::AllocArrays(g_AudioInitFlag);
}
}

// ==== BACKFILL 0x00583820  Pathfinding::CheckCliff  cls=Pathfinding  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* Pathfinding::CheckCliff(void* a1, void* a2, int a3, int a4) {
{
      unsigned int v5;
      _DWORD *v6;
      _DWORD *v7;
      char *NeighbourContent;
      int v10;
      char *v11;
      unsigned int v12;
      int v13;
      MouseClass *v14;
      int v15;
      _WORD *v16;
      int v17;
      TagClass *i;
      int v19;
      int v20;
      TagClass *v21;
      _DWORD *v22;
      int v23;
      TagClass *v24;
      _DWORD v26[6];

      v5 = *a2 + (a2[1] << 9);
      if ( v5 < 0x40000 && (v6 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4.__pad_3C[4] + 4 * v5)) != 0 )
      {
        v7 = v6;
      }
      else
      {
        v7 = g_CellClassArray;
        g_Map_GlobalCellIndex = *(IUnknown **)a2;
      }
      if ( (v7[80] & 0x100) != 0 )
      {
        NeighbourContent = (char *)v7;
        v10 = -((v7[80] & 0x800) != 0);
        v11 = (char *)v7;
        LOBYTE(v10) = v10 & 0xFE;
        v22 = v7 + 80;
        v21 = (TagClass *)(v7 + 80);
        v12 = v10 + 4;
        a2 = (__int16 *)g_MapSeedState;
        v24 = g_MapSeedState;
        do
        {
          if ( (*v22 & 0x100) != 0 )
          {
            NeighbourContent = (char *)Cell::GetNeighbourContent(NeighbourContent, v12);
            v22 = NeighbourContent + 320;
            if ( (*((_DWORD *)NeighbourContent + 80) & 0x100) == 0
              && (Cell::IsInRange((int *)NeighbourContent) || Cell::IsInRange2((int *)NeighbourContent))
              && *((_DWORD *)NeighbourContent + 59) != 3 )
            {
              a2 = (__int16 *)*((_DWORD *)NeighbourContent + 9);
            }
          }
          if ( (*(_DWORD *)v21->__pad_0 & 0x100) != 0 )
          {
            v11 = (char *)Cell::GetNeighbourContent(v11, ((_BYTE)v12 - 4) & 7);
            v21 = (TagClass *)(v11 + 320);
            if ( (*((_DWORD *)v11 + 80) & 0x100) == 0
              && (Cell::IsInRange((int *)v11) || Cell::IsInRange2((int *)v11))
              && *((_DWORD *)v11 + 59) != 3 )
            {
              v24 = (TagClass *)*((_DWORD *)v11 + 9);
            }
          }
        }
        while ( (*(_DWORD *)v21->__pad_0 & 0x100) != 0 || (*v22 & 0x100) != 0 );
        v13 = ((_BYTE)v12 + 2) & 7;
        v26[0] = a2;
        v14 = aP4;
        v15 = ((_BYTE)v12 - 2) & 7;
        LOWORD(v23) = *((_WORD *)&Direction_X_Offsets.field_0 + 2 * v13) + (_WORD)a2;
        HIWORD(v23) = HIWORD(a2) + *((_WORD *)&DataGlobal_89F68A + 2 * v13);
        v26[1] = v23;
        v16 = (_WORD *)(4 * v15 + 9041544);
        LOWORD(a2) = (_WORD)a2 + *((_WORD *)&Direction_X_Offsets.field_0 + 2 * v15);
        HIWORD(a2) += *((_WORD *)&DataGlobal_89F68A + 2 * v15);
        LOWORD(v15) = *((_WORD *)&Direction_X_Offsets.field_0 + 2 * v13);
        v26[2] = a2;
        v26[3] = v24;
        LOWORD(a2) = (_WORD)v24 + v15;
        HIWORD(a2) = HIWORD(v24) + *((_WORD *)&DataGlobal_89F68A + 2 * v13);
        v26[4] = a2;
        LOWORD(v15) = *v16;
        LOWORD(v16) = HIWORD(v24) + v16[1];
        LOWORD(a2) = (_WORD)v24 + v15;
        HIWORD(a2) = (_WORD)v16;
        v26[5] = a2;
        v17 = 0;
        for ( i = (TagClass *)v26; ; i = (TagClass *)((char *)i + 4) )
        {
          a2 = *(__int16 **)i->__pad_0;
          if ( LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (IUnknown *)&a2, (TechnoClass *)1) )
          {
            v19 = (__int16)a2 + SHIWORD(a2) * (this->q0F8 + this->q0F4 + 1);
            if ( v19 >= 0 )
            {
              v20 = this->q06C;
              if ( v19 >= v20 )
                v19 = v20 - 1;
            }
            else
            {
              v19 = 0;
            }
            if ( (MouseClass *)*(__int16 *)(this->q070 + 2 * (a4 + 4 * v19 + v19)) == v14 )
              break;
          }
          if ( ++v17 >= 6 )
          {
            *a1 = g_MapSeedState;
            return a1;
          }
        }
        *a1 = a2;
        return a1;
      }
      else
      {
        *a1 = v7[9];
        return a1;
      }
}
} }

// ==== BACKFILL 0x005855A0  LayerClass::AssignCellOwnership  cls=LayerClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int LayerClass::AssignCellOwnership() {
{
      _DWORD *v1;
      int v2;
      int result;
      int i;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;

      v1 = this;
      v2 = this->q0F4;
      this->q10C = 1;
      this->q110 = v2;
      this->q114 = v2 - 1;
      this->q118 = (v2 << 11) + this->q13C + 4;
      result = LayerClass::CellIteratorNext(this);
      for ( i = result; result; i = result )
      {
        v5 = *(_DWORD *)(i + 68);
        if ( v5 != -1 )
        {
          if ( *(_BYTE *)(*(_DWORD *)&g_BuildingTypeClass_Array->vtable1[4 * v5] + 680) )
          {
            v6 = -1;
            v7 = 0;
            v10 = 0x7FFFFFFF;
            if ( g_BuildingProductionState > 0 )
            {
              do
              {
                v8 = *((_DWORD *)g_BuildingClass_InstanceCount + v7);
                v9 = ObjectClass::DistanceTo((void *)v8, i);
                if ( *(_BYTE *)(v8 + 144)
                  && *(_BYTE *)(v8 + 116)
                  && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v8 + 540) + 52) + 423)
                  && (v6 == -1 || v9 < v10) )
                {
                  v10 = v9;
                  v6 = v7;
                }
                ++v7;
              }
              while ( v7 < g_BuildingProductionState );
              if ( v6 != -1 )
                *(_DWORD *)(i + 80) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)g_BuildingClass_InstanceCount + v6) + 540) + 48);
              v1 = this;
            }
          }
        }
        result = LayerClass::CellIteratorNext(v1);
      }
      return result;
}
} }

// ==== BACKFILL 0x00586360  Cell::IsPassable  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool Cell::IsPassable(IUnknown * aP0)
{
{
    int v1;
    int v2;
    unsigned int v3;
    int *v4;
    int *v5;
    int *NeighbourContent;
    unsigned int v7;
    short v9;
    short v10;
    IUnknown *aP0a;
    IUnknown *aP0b;
    v1 = aP0->field_8 / g_MapRenderState;
    if ( (v1 & 1) != 0 )
  {
    v9 = aP0->field_0 / 256;
    v2 = v1 / 2 + 1;
    HIWORD(aP0a) = aP0->field_4 / 256 - v2;
    LOWORD(aP0a) = v9 - v2;
    v3 = (short)(v9 - v2) + (SHIWORD(aP0a) << 9);
    if ( v3 < 0x40000 && (v4 = *(int **)(*(int *)&DataGlobal_87C374.__pad_14B0[8448] + 4 * v3)) != 0 )
    {
    v5 = v4;
    }
    else
    {
    v5 = g_CellClassArray;
    g_Map_GlobalCellIndex = aP0a;
    }
    if ( (v5[75] & 8) != 0 )
    return 0;
    NeighbourContent = Cell::GetNeighbourContent(v5, 3u);
  }
    else
  {
    v10 = aP0->field_0 / 256;
    HIWORD(aP0b) = aP0->field_4 / 256 - v1 / 2;
    LOWORD(aP0b) = v10 - v1 / 2;
    v7 = (short)aP0b + (SHIWORD(aP0b) << 9);
    if ( v7 >= 0x40000 || (NeighbourContent = *(int **)(*(int *)&DataGlobal_87C374.__pad_14B0[8448] + 4 * v7)) == 0 )
    {
    g_Map_GlobalCellIndex = aP0b;
    NeighbourContent = g_CellClassArray;
    }
  }
    return (NeighbourContent[75] & 8) == 0;
}
}

// ==== BACKFILL 0x005864A0  FogOfWar_Get  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool FogOfWar_Get(IUnknown * aP0)
{
{
    int v1;
    int v2;
    unsigned int v3;
    int *v4;
    int *NeighbourContent;
    unsigned int v6;
    short v8;
    short v9;
    IUnknown *aP0a;
    v1 = aP0->field_8 / g_MapRenderState;
    if ( (v1 & 1) != 0 )
  {
    v8 = aP0->field_0 / 256;
    v2 = v1 / 2 + 1;
    HIWORD(aP0) = aP0->field_4 / 256 - v2;
    v3 = (short)(v8 - v2) + (SHIWORD(aP0) << 9);
    if ( v3 >= 0x40000 || (v4 = *(int **)(*(int *)&DataGlobal_87C374.__pad_14B0[8448] + 4 * v3)) == 0 )
    {
    LOWORD(aP0) = v8 - v2;
    g_Map_GlobalCellIndex = aP0;
    v4 = g_CellClassArray;
    }
    if ( (int)v4[79] <= 0 )
    return 0;
    NeighbourContent = Cell::GetNeighbourContent(v4, 3u);
  }
    else
  {
    v9 = aP0->field_0 / 256;
    HIWORD(aP0a) = aP0->field_4 / 256 - v1 / 2;
    LOWORD(aP0a) = v9 - v1 / 2;
    v6 = (short)aP0a + (SHIWORD(aP0a) << 9);
    if ( v6 >= 0x40000 || (NeighbourContent = *(int **)(*(int *)&DataGlobal_87C374.__pad_14B0[8448] + 4 * v6)) == 0 )
    {
    g_Map_GlobalCellIndex = aP0a;
    NeighbourContent = g_CellClassArray;
    }
  }
    return (int)NeighbourContent[79] > 0;
}
}

// ==== BACKFILL 0x005865E0  Game::Stub3  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char Game::Stub3(IUnknown * aP0)
{
return 0;
}

// ==== BACKFILL 0x005865F0  CellClass::SpiralFindClosest  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CellClass::SpiralFindClosest(IUnknown * aP0, MouseClass * aP1, IUnknown * aP2)
{
{
    short v3;
    int v4;
    short v5;
    unsigned int v6;
    short *v7;
    short *v8;
    int result;
    int v10[2];
    IUnknown *aP0a;
    aP0a = (IUnknown *)aP0->field_24;
    v3 = HIWORD(aP0a);
    v4 = 1;
    v5 = (short)aP0a;
    do
  {
    v6 = v5 + (v3 << 9);
    if ( v6 < 0x40000 && (v7 = *(short **)(*(int *)&DataGlobal_87C374.__pad_14B0[8448] + 4 * v6)) != 0 )
    {
    v8 = v7;
    }
    else
    {
    v8 = (short *)g_CellClassArray;
    g_Map_GlobalCellIndex = aP0a;
    }
    result = *((char *)(v8) + 283);
    if ( result >= v4 - 2 && result <= v4 )
    {
    if ( (char)aP2 )
    CellClass::RevealFogRect((int)&DataGlobal_87C374.__pad_14B0[8132], v8 + 18);
    v10[0] = 0;
    v10[1] = 0;
    result = Object::FindClosestObjectCell(v8, (IUnknown *)v10, 0, 0);
    if ( result )
    result = (*(int (__thiscall **)(int, MouseClass *))(*(int *)(result) + 408))(result, aP1);
    }
    ++v5;
    v4 += 2;
    ++v3;
    LOWORD(aP0a) = v5;
    HIWORD(aP0a) = v3;
  }
    while ( v4 < 15 );
    return result;
}
}

// ==== BACKFILL 0x00586990  LayerClass::Update_Pathfinding_2  cls=LayerClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void LayerClass::Update_Pathfinding_2(int a1) {
{
      IUnknown *v2;
      int i;
      int v5;
      int v6;
      int v7;
      __int16 *v8;
      unsigned int v9;
      _DWORD *v10;
      int j;
      int v12;
      int v13;

      v2 = aP1;
      for ( i = *(_DWORD *)aP1->__pad_10 - 1; i >= 0; --i )
      {
        v5 = 4 * i;
        if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)(4 * i + v2->field_4), (TechnoClass *)1) )
        {
          v6 = *(__int16 *)(v5 + v2->field_4) + *(__int16 *)(v5 + v2->field_4 + 2) * (this->q0F8 + this->q0F4 + 1);
          if ( v6 >= 0 )
          {
            v7 = this->q06C;
            if ( v6 >= v7 )
              v6 = v7 - 1;
          }
          else
          {
            v6 = 0;
          }
          *(_WORD *)(this->q070 + 10 * v6) = 0;
          v8 = (__int16 *)(v5 + v2->field_4);
          v9 = *v8 + (v8[1] << 9);
          if ( v9 >= 0x40000 || (v10 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4.__pad_3C[4] + 4 * v9)) == 0 )
          {
            v10 = g_CellClassArray;
            g_Map_GlobalCellIndex = *(IUnknown **)v8;
          }
          House::AnnounceUpgrade((int)v10, (IUnknown *)0xFFFFFFFF);
        }
      }
      for ( j = *(_DWORD *)v2->__pad_10 - 1; j >= 0; --j )
      {
        aP1 = *(IUnknown **)(v2->field_4 + 4 * j);
        if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&aP1, (TechnoClass *)1) )
        {
          v12 = (__int16)aP1 + SHIWORD(aP1) * (this->q0F8 + this->q0F4 + 1);
          if ( v12 >= 0 )
          {
            v13 = this->q06C;
            if ( v12 >= v13 )
              v12 = v13 - 1;
          }
          else
          {
            v12 = 0;
          }
          if ( !*(_WORD *)(this->q070 + 10 * v12) )
            Radar::Update((IUnknown *)this, (IUnknown *)&aP1);
        }
      }
}
} }

// ==== BACKFILL 0x00586E50  HouseClass::ClampToUsableCell  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* HouseClass::ClampToUsableCell(void* a1, void* a2) {
{
      int v3;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      bool v12;
      int v13;
      _DWORD *v14;
      _DWORD *v15;
      int v16;
      int v17;

      v3 = SLOWORD(aP2->field_0);
      v5 = SHIWORD(aP2->field_0);
      v6 = this->q104;
      v7 = this->q0FC;
      v8 = this->q0F4;
      if ( v3 - v5 < 2 * (v7 + v6) - v8 )
      {
        if ( v5 - v3 >= v8 - 2 * v7 )
        {
          v10 = (v5 + 2 * v7 + 2 - v8 - v3) / 2;
          v5 -= v10;
          v3 += v10;
        }
      }
      else
      {
        v9 = (v3 + v8 + 2 * (1 - v7 - this->q104) - v5) / 2;
        v3 -= v9;
        v5 += v9;
      }
      v11 = (__int16)v5 << 9;
      v12 = (__int16)v3 + v11 < 0;
      v13 = (__int16)v3 + v11;
      LOWORD(aP2) = v3;
      HIWORD(aP2) = v5;
      if ( v12 || v13 >= 0x40000 || (v14 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4.__pad_3C[4] + 4 * v13)) == 0 )
      {
        v15 = g_CellClassArray;
        g_Map_GlobalCellIndex = (IUnknown *)aP2;
      }
      else
      {
        v15 = v14;
      }
      v16 = *((char *)v15 + 283);
      if ( *((_BYTE *)v15 + 284) && v5 + v3 < v16 + this->q0F4 + 2 * this->rofMultiplier + 4 )
        ++v16;
      v17 = this->rofMultiplier;
      if ( v5 + v3 > v16 + this->q0F4 + 2 * v17 )
      {
        if ( v5 + v3 > v16 + this->q0F4 + 2 * (v17 + this->costMultiplier) + 2 )
        {
          do
          {
            LOWORD(v3) = v3 - 1;
            LOWORD(v5) = v5 - 1;
            LOWORD(aP2) = v3;
            HIWORD(aP2) = v5;
          }
          while ( !LayerClass::IsWithinUsableArea(this, (IUnknown *)&aP2, (TechnoClass *)1) );
        }
      }
      else
      {
        do
        {
          LOWORD(v3) = v3 + 1;
          LOWORD(v5) = v5 + 1;
          LOWORD(aP2) = v3;
          HIWORD(aP2) = v5;
        }
        while ( !LayerClass::IsWithinUsableArea(this, (IUnknown *)&aP2, (TechnoClass *)1) );
      }
      HIWORD(aP2) = v5;
      LOWORD(aP2) = v3;
      aP1->field_0 = (int)aP2;
      return &aP1->field_0;
}
} }

// ==== BACKFILL 0x00588990  ScenarioClass::CalcMinShroudLevel  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::CalcMinShroudLevel() {
{
      int v1;
      int i;
      int v3;
      int v4;

      if ( (int)this->q148 >= 13 )
      {
        v1 = this->q140;
        for ( i = 0; i < v1; ++i )
        {
          v3 = *(_DWORD *)(this->q13C + 4 * i);
          if ( v3 )
          {
            v4 = *(char *)(v3 + 283);
            if ( this->q148 < v4 )
              v4 = this->q148;
            this->q148 = v4;
            this->q148 = (v4) - (v4) * (int)(v4 <= 0);
          }
        }
      }
      return this->q148;
}
} }

// ==== BACKFILL 0x00588AC0  LayerClass::ClearFactoryCellAssignments  cls=LayerClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int LayerClass::ClearFactoryCellAssignments() {
{
      _DWORD *v1;
      int v2;
      int result;
      int v4;
      int v5;
      int v6;
      int v7;
      int i;
      unsigned int v9;
      _DWORD *v10;
      int v11;
      int v13;
      __int16 v14;
      __int16 v15;

      v1 = this;
      v2 = this->q0F4;
      this->q10C = 1;
      this->q110 = v2;
      this->q114 = v2 - 1;
      this->q118 = (v2 << 11) + this->q13C + 4;
      for ( result = LayerClass::CellIteratorNext(this); result; result = LayerClass::CellIteratorNext(v1) )
      {
        v4 = *(_DWORD *)(result + 72);
        if ( v4 != -1 )
        {
          v5 = *((_DWORD *)FactoryClass_Array + v4);
          v13 = *(_DWORD *)(result + 36);
          v6 = *(_DWORD *)(v5 + 664);
          v14 = v13 - *(unsigned __int8 *)(result + 287) % v6;
          v7 = 0;
          v15 = HIWORD(v13) - *(unsigned __int8 *)(result + 287) / v6;
          if ( *(int *)(v5 + 668) > 0 )
          {
            do
            {
              for ( i = 0; i < v6; ++i )
              {
                v9 = ((__int16)(v7 + v15) << 9) + (__int16)(i + v14);
                if ( v9 >= 0x40000 || (v10 = *(_DWORD **)(g_Shroud_CellArray + 4 * v9)) == 0 )
                {
                  LOWORD(v11) = i + v14;
                  HIWORD(v11) = v7 + v15;
                  g_Map_GlobalCellIndex = v11;
                  v10 = g_CellClassArray;
                }
                v10[18] = -1;
                v6 = *(_DWORD *)(v5 + 664);
              }
              ++v7;
            }
            while ( v7 < *(_DWORD *)(v5 + 668) );
            v1 = this;
          }
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x00588BF0  MapClass::Destru_vt04  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
MapClass * MapClass::Destru_vt04(char a2)
{
{
    MapClass::Destruct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MapClass *)this;
}
}

// ==== BACKFILL 0x00588C10  CellClass::CopyNeighborData  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::CopyNeighborData(int a2) {
{
    this->lightConvert = *(int *)(a2 + 16);
    this->isoTileTypeIndex = *(char *)(a2 + 20);
    this->attachedTag = *(int *)(a2 + 24);
    this->rubble = *(int *)(a2 + 28);
    this->overlayTypeIndex = *(char *)(a2 + 32);
    return this;
}
} }

// ==== BACKFILL 0x00588C90  VectorClass::CleanupSubzone  cls=DynamicVector  sig=csp  renamed_refs=2  residual=- ====
void VectorClass::CleanupSubzone()
{
{
    void *v2;
    v2 = this->Items;
    this->q010 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->q008 = 0;
}
}

// ==== BACKFILL 0x00588DE0  MapClass::initCellVectors  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
unsigned int MapClass::initCellVectors(int a2)
{
{
    if ( (unsigned char)this->MapClass_field_0xC )
    return (a2 - this->MapClass_field_0x4) / 0x24u;
    else
    return 0;
}
}

// ==== BACKFILL 0x00589060  MapClass::InitCellVe_vt00  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
VectorClass * MapClass::InitCellVe_vt00(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_CellClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}

// ==== BACKFILL 0x005894A0  MapClass::allocateCellArrays  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void MapClass::allocateCellArrays()
{
{
    if ( this->MapClass_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->MapClass_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MapClass_field_0x8 = 0;
}
}

// ==== BACKFILL 0x005894D0  MapClass::FindSubzoneConnectionIndex  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::FindSubzoneConnectionIndex(unsigned short * a2)
{
{
    int result;
    int v3;
    short *i;
    if ( !(unsigned char)this->MapClass_field_0xC )
    return 0;
    v3 = this->MapClass_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(short **)(this + 4); *i != *a2 || i[1] != *((int*)(a2) + 1) || i[2] != *((int*)(a2) + 2) || i[3] != *((int*)(a2) + 3); i += 8 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}

// ==== BACKFILL 0x00589530  MapClass::initSubzoneData  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int MapClass::initSubzoneData(int a2)
{
{
    if ( (unsigned char)this->MapClass_field_0xC )
    return (unsigned int)(a2 - this->MapClass_field_0x4) >> 4;
    else
    return 0;
}
}

// ==== BACKFILL 0x00589CE0  MapClass::InitCellVe_vt02  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
char MapClass::InitCellVe_vt02(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->MapClass_field_0x4 )
      {
    v6 = this->MapClass_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->MapClass_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MapClass_field_0x4 = 0;
        }
      }
    this->MapClass_field_0x4 = v4;
    this->MapClass_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->IsCellPassable();
    return 1;
  }
}
}

// ==== BACKFILL 0x00589D90  MapClass::InitCellVe_vt03  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void MapClass::InitCellVe_vt03()
{
{
    if ( this->MapClass_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->MapClass_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MapClass_field_0x8 = 0;
}
}

// ==== BACKFILL 0x00589DC0  MapClass::InitCellVe_vt04  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::InitCellVe_vt04(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->MapClass_field_0xC )
    return 0;
    v3 = this->MapClass_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}

// ==== BACKFILL 0x00589E00  MapClass::InitCellVe_vt05  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int MapClass::InitCellVe_vt05(int a2)
{
{
    if ( (unsigned char)this->MapClass_field_0xC )
    return (unsigned int)(a2 - this->MapClass_field_0x4) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x0058AC70  VectorClass::ConstructSubzone  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * VectorClass::ConstructSubzone(int a2, int a3)
{
{
    int v4;
    int v5;
    char *v7;
    char *v8;
    int v9;
    this->Items = (void*)(0);
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_SubzoneConnectionStruct;
    if ( !a2 )
    return this;
    if ( !a3 )
  {
    v7 = (char*)__2_YAPAXI_Z(8 * a2);
    if ( v7 )
    {
    v8 = v7;
    if ( a2 - 1 >= 0 )
      {
    v9 = a2;
    do
        {
    *(int*)v8 = 0;
    v8[4] = 0;
    v8 += 8;
    --v9;
        }
    while ( v9 );
    this->Items = (void*)(v7);
    this->IsAllocated = 1;
    return this;
      }
    }
    else
    {
    v7 = 0;
    }
    this->Items = (void*)(v7);
    this->IsAllocated = 1;
    return this;
  }
    v4 = a3;
    if ( a2 - 1 >= 0 )
  {
    v5 = a2;
    do
    {
    *(int*)v4 = 0;
    *(char*)(v4 + 4) = 0;
    v4 += 8;
    --v5;
    }
    while ( v5 );
  }
    this->Items = (void*)(a3);
    return this;
}
}

// ==== BACKFILL 0x0058AD10  VectorClass_USubzoneTrackingStruct::SetCapacity  cls=VectorClass_USubzoneTrackingStruct  sig=csp  renamed_refs=0  residual=- ====
unsigned int * VectorClass_USubzoneTrackingStruct::SetCapacity(unsigned int * a2)
{
{
    int v3;
    char *v4;
    char *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    if ( this == a2 )
    return this;
    this->ddtor();
    v3 = *((int*)(a2) + 2);
    this->Capacity = v3;
    if ( !v3 )
  {
    this->Items = (void*)(0);
    this->IsAllocated = 0;
    return this;
  }
    v4 = (char*)__2_YAPAXI_Z(8 * v3);
    if ( v4 )
  {
    v5 = v4;
    if ( v3 - 1 >= 0 )
    {
    v6 = v3;
    do
      {
    *(int*)v5 = 0;
    v5[4] = 0;
    v5 += 8;
    --v6;
      }
    while ( v6 );
    }
  }
    else
  {
    v4 = 0;
  }
    this->Items = (void*)(v4);
    if ( !v4 )
    return this;
    v7 = this->Capacity;
    v8 = 0;
    this->IsAllocated = 1;
    if ( v7 <= 0 )
    return this;
    do
  {
    v9 = *((int*)(a2) + 1);
    v10 = this->Items;
    *(int*)(v10 + 8 * v8) = *(int*)(v9 + 8 * v8);
    *(int*)(v10 + 8 * v8 + 4) = *(int*)(v9 + 8 * v8 + 4);
    ++v8;
  }
    while ( v8 < this->Capacity );
    return this;
}
}

// ==== BACKFILL 0x0058ADB0  RadarClass::drawRadarTerrain  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* RadarClass::drawRadarTerrain(int a1, int a2) {
{
      int v4;
      MapClass *v5;
      char *v6;
      int v8;
      MapClass *v9;
      int v10;

      v4 = 0;
      this->q004 = 0;
      this->q008 = aP1;
      this->q00C = 1;
      this->q00D = 0;
      *this = &vt_VectorClass_ZoneConnectionClass;
      if ( !aP1 )
        return this;
      if ( !aP2 )
      {
        v8 = __2_YAPAXI_Z(16 * (_DWORD)aP1);
        if ( v8 )
        {
          if ( (int)&aP1[-1].field_16C0 + 3 >= 0 )
          {
            v9 = aP1;
            v10 = v8 + 2;
            do
            {
              *(_WORD *)(v10 - 2) = 0;
              *(_WORD *)v10 = 0;
              *(_WORD *)(v10 + 2) = 0;
              *(_WORD *)(v10 + 4) = 0;
              *(_BYTE *)(v10 + 6) = 0;
              *(_DWORD *)(v10 + 10) = -1;
              v10 += 16;
              v9 = (MapClass *)((char *)v9 - 1);
            }
            while ( v9 );
          }
          v4 = v8;
        }
        this->q004 = v4;
        this->q00D = 1;
        return this;
      }
      if ( (int)&aP1[-1].field_16C0 + 3 >= 0 )
      {
        v5 = aP1;
        v6 = (char *)&aP2->field_0 + 2;
        do
        {
          *((_WORD *)v6 - 1) = 0;
          *(_WORD *)v6 = 0;
          *((_WORD *)v6 + 1) = 0;
          *((_WORD *)v6 + 2) = 0;
          v6[6] = 0;
          *(_DWORD *)(v6 + 10) = -1;
          v6 += 16;
          v5 = (MapClass *)((char *)v5 - 1);
        }
        while ( v5 );
      }
      this->q004 = aP2;
      return this;
}
} }

// ==== BACKFILL 0x0058AE60  RadarClass::RenderJammerRadius  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* RadarClass::RenderJammerRadius(int a1, void* a2) {
{
      _DWORD *v3;
      MapClass *v4;
      void **v5;
      MapClass *v6;
      MapClass **v8;
      MapClass *v9;
      char *v10;
      MapClass *v11;
      char *v12;
      MapClass *aP1a;

      v3 = this;
      v4 = 0;
      this->q004 = 0;
      this->q008 = aP1;
      this->q00C = 1;
      this->q00D = 0;
      *this = &vt_VectorClass_SubzoneTrackingStruct;
      if ( !aP1 )
        return v3;
      if ( !aP2 )
      {
        v8 = (MapClass **)__2_YAPAXI_Z(36 * (_DWORD)aP1 + 4);
        if ( v8 )
        {
          *v8 = aP1;
          v9 = (MapClass *)(v8 + 1);
          v10 = (char *)&aP1[-1].field_16C0 + 3;
          aP1a = v9;
          v11 = v9;
          if ( (int)v10 >= 0 )
          {
            v12 = v10 + 1;
            do
            {
              v11->field_4 = 0;
              v11->field_8 = 0;
              LOBYTE(v11->field_C) = 1;
              BYTE1(v11->field_C) = 0;
              v11->field_0 = (int)&vt_VectorClass_SubzoneConnectionStruct;
              v11->field_0 = (int)&vt_DynamicVectorClass_SubzoneConnectionStruct;
              v11->field_14 = (void *)10;
              v11->field_10 = 0;
              (*(void (__thiscall **)(MapClass *))(v11->field_0 + 12))(v11);
              *(_WORD *)v11->__pad_18 = 0;
              *(_DWORD *)&v11->__pad_18[4] = 0;
              *(_DWORD *)&v11->__pad_18[8] = 0;
              v11 = (MapClass *)((char *)v11 + 36);
              --v12;
            }
            while ( v12 );
            v3 = this;
            v9 = aP1a;
          }
          v4 = v9;
        }
        v3[1] = v4;
        *((_BYTE *)v3 + 13) = 1;
        return v3;
      }
      aP2->field_0 = (int)aP1;
      v5 = &aP2->field_4;
      if ( (int)&aP1[-1].field_16C0 + 3 >= 0 )
      {
        v6 = aP1;
        do
        {
          v5[1] = 0;
          v5[2] = 0;
          *((_BYTE *)v5 + 12) = 1;
          *((_BYTE *)v5 + 13) = 0;
          *v5 = &vt_VectorClass_SubzoneConnectionStruct;
          *v5 = &vt_DynamicVectorClass_SubzoneConnectionStruct;
          v5[5] = (void *)10;
          v5[4] = 0;
          (*((void (__thiscall **)(void **))*v5 + 3))(v5);
          *((_WORD *)v5 + 12) = 0;
          v5[7] = 0;
          v5[8] = 0;
          v5 += 9;
          v6 = (MapClass *)((char *)v6 - 1);
        }
        while ( v6 );
        v3 = this;
        v5 = &aP2->field_4;
      }
      v3[1] = v5;
      return v3;
}
} }

// ==== BACKFILL 0x0058AF80  RadarClass::drawRadarEvents  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RadarClass::drawRadarEvents(void* a1) {
{
      int v3;
      int v4;
      int v6;
      int v7;
      int v8;
      int v9;
      _DWORD *v10;

      v3 = this->q008;
      if ( this->q010 >= v3 )
      {
        if ( !this->q00D && v3 )
          return 0;
        v4 = this->q014;
        if ( v4 <= 0 || !this->vt2(v3 + v4, 0) )
          return 0;
      }
      v6 = this->q010;
      v7 = v6 + 1;
      v8 = 3 * v6;
      v9 = this->q004;
      this->q010 = v7;
      v10 = (_DWORD *)(v9 + 4 * v8);
      *v10 = *a2;
      v10[1] = a2[1];
      v10[2] = a2[2];
      return 1;
}
} }

// ==== BACKFILL 0x0058BB00  Map_Helper_58BB00  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_58BB00(unsigned int * a1, int a2)
{
{
    int *result;
    result = a1;
    if ( a2 < 0 || a2 >= DataGlobal_ABED0C )
  {
    *a1 = 0;
    *((int*)(a1) + 1) = 0;
  }
    else
  {
    *a1 = DataGlobal_ABE328[2 * a2];
    *((int*)(a1) + 1) = DataGlobal_ABE32C[2 * a2];
  }
    return result;
}
}

// ==== BACKFILL 0x0058BE20  sub_58BE20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_58BE20::sub_58BE20()
{
{
    unsigned int v2;
    unsigned int v3;
    short *v4;
    int v5;
    __int64 v7;
    v2 = g_MapCellWidth * g_MapCellWidth - 1;
    do
  {
    do
    {
    v7 = (unsigned int)Random::State(&g_Randomizer);
    v3 = Math::RoundToInt((double)v7 * (double)(v2 + 1) * 2.328306437080797e-10);
    }
    while ( v3 > v2 );
    v4 = (char *)(g_MapTileArray) + 80 * v3;
  }
    while ( !*v4 && !v4[1] );
    v5 = 80 * v3;
    *(void**)this = *(int *)((char *)(g_MapTileArray) + v5);
    return this;
}
}

// ==== BACKFILL 0x0058BEA0  sub_58BEA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_58BEA0::sub_58BEA0()
{
{
    int v2;
    unsigned int v3;
    unsigned int v4;
    short *v5;
    int *v6;
    int v8;
    __int64 v9;
    __int64 v10;
    double v11;
    v2 = 0;
    do
  {
    v3 = g_MapCellWidth * g_MapCellWidth - 1;
    do
    {
    v9 = v3 + 1;
    v11 = (double)v9;
    do
      {
    v10 = (unsigned int)Random::State(&g_Randomizer);
    v4 = Math::RoundToInt((double)v10 * v11 * 2.328306437080797e-10);
      }
    while ( v4 > v3 );
    v5 = (char *)(g_MapTileArray) + 80 * v4;
    }
    while ( !*v5 && !v5[1] );
    ++v2;
    v8 = *((int *)(g_MapTileArray) + 20 * v4);
    if ( v2 > 200 )
    {
    v8 = 0;
    *(void**)this = 0;
    return this;
    }
    v6 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v8);
  }
    while ( !Cell::IsEmpty(v6) );
    *(void**)this = v8;
    return this;
}
}

// ==== BACKFILL 0x0058C100  sub_58C100  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_58C100()
{
{
    int v0;
    int *v1;
    int v2;
    void *v3;
    int *v4;
    v0 = g_RandomMap_TileData - 1;
    for ( g_MapTileArrayEnd = 0; v0 >= 0; --v0 )
  {
    v1 = (int *)*((int *)(g_RandomMap_TerrainState) + v0);
    if ( v1 )
    {
    if ( *v1 )
      {
    (**(void (__thiscall ***)(int, int))*v1)(*v1, 1);
    *v1 = 0;
      }
    v4 = v1;
    v2 = (*(int (__thiscall **)(int *, int **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v4);
    if ( v2 != -1 && v2 < g_RandomMap_TileData && v2 < --g_RandomMap_TileData )
      {
    do
        {
    ++v2;
    *((int *)(g_RandomMap_TerrainState) + v2 - 1) = *((int *)(g_RandomMap_TerrainState) + v2);
        }
    while ( v2 < g_RandomMap_TileData );
      }
    v3 = (void *)v1[11];
    v1[10] = &vt_VectorClass_Cell;
    if ( v3 )
      {
    if ( *((char *)(v1) + 53) )
        {
    __3_YAXPAX_Z(v3);
    v1[11] = 0;
        }
      }
    *((char *)(v1) + 53) = 0;
    v1[12] = 0;
    __3_YAXPAX_Z(v1);
    }
  }
}
}

// ==== BACKFILL 0x0058C320  sub_58C320  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_58C320::sub_58C320(unsigned int * a2)
{
{
    int v2;
    unsigned int v4;
    char *v5;
    int v6;
    __int64 v8;
    v2 = g_MapCellWidth * g_MapCellWidth;
    do
  {
    do
    {
    v8 = (unsigned int)Random::State(&g_Randomizer);
    v4 = Math::RoundToInt((double)v8 * (double)(unsigned int)v2 * 2.328306437080797e-10);
    }
    while ( v4 > v2 - 1 );
    v5 = (char *)(g_MapTileArray) + 80 * v4;
  }
    while ( *((int *)(v5) + 14) != this->M8 || !*(short *)v5 && !*((short *)(v5) + 1) );
    v6 = *((int *)(g_MapTileArray) + 20 * v4);
    *a2 = v6;
    return a2;
}
}

// ==== BACKFILL 0x0058C3B0  sub_58C3B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_58C3B0::sub_58C3B0(unsigned int * a2)
{
{
    int v3;
    unsigned int v4;
    char *v5;
    int *v6;
    int v8;
    int v9;
    __int64 v10;
    __int64 v11;
    double v12;
    v8 = 0;
    do
  {
    v3 = g_MapCellWidth * g_MapCellWidth;
    do
    {
    v10 = (unsigned int)v3;
    v12 = (double)(unsigned int)v3;
    do
      {
    v11 = (unsigned int)Random::State(&g_Randomizer);
    v4 = Math::RoundToInt((double)v11 * v12 * 2.328306437080797e-10);
      }
    while ( v4 > v3 - 1 );
    v5 = (char *)(g_MapTileArray) + 80 * v4;
    }
    while ( *((int *)(v5) + 14) != this->M8 || !*(short *)v5 && !*((short *)(v5) + 1) );
    v9 = *((int *)(g_MapTileArray) + 20 * v4);
    if ( ++v8 > 200 )
    {
    *a2 = 0;
    return a2;
    }
    v6 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v9);
  }
    while ( !Cell::IsEmpty(v6) );
    *a2 = v9;
    return a2;
}
}

// ==== BACKFILL 0x0058C4A0  sub_58C4A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_58C4A0::sub_58C4A0(ObjectClass * aP1)
{
{
    short *v2;
    int v3;
    unsigned int v4;
    int *v5;
    Random *v7;
    __int64 v9;
    v2 = g_MapTileArray;
    v7 = (Random *)(g_MapCellWidth * g_MapCellWidth);
    v3 = 0;
    while ( 1 )
  {
    do
    {
    v9 = (unsigned int)Random::State(&g_Randomizer);
    v4 = Math::RoundToInt((double)v9 * (double)(unsigned int)v7 * 2.328306437080797e-10);
    }
    while ( v4 > (unsigned int)&v7[-1].Random_field_0x0C + 3 );
    ++v3;
    qmemcpy(v2, (char *)(g_MapTileArray) + 80 * v4, 0x50u);
    if ( v3 >= 100 )
    {
    *(int *)aP1->__pad_0 = 0;
    return aP1->__pad_0;
    }
    if ( *((int *)(v2) + 14) == this->M8 && (*v2 || v2[1]) )
    {
    if ( *((char *)(v2) + 68) )
      {
    v5 = CellCoord::To_CellObj(&DataGlobal_87C374.__pad_14B0[8132], v2);
    if ( Cell::IsEmpty(v5) )
    break;
      }
    }
  }
    *(int *)aP1->__pad_0 = *(int *)v2;
    return aP1->__pad_0;
}
}

// ==== BACKFILL 0x0058C6F0  Memory_Helper_58C6F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double Memory_Helper_58C6F0(IUnknown * aP0, short * a1, double a3)
{
{
    double v3;
    double v4;
    char v6;
    int v8;
    double v9;
    int a1a;
    double v11;
    v8 = *a1 - SLOWORD(aP0->field_0);
    a1a = *((int*)(a1) + 1) - SHIWORD(aP0->field_0);
    v9 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(v8 * v8 + a1a * a1a)));
    if ( v8 )
  {
    v3 = Math::ArcTan(-((double)a1a / (double)v8));
    if ( v8 < 0 )
    v3 = v3 + 3.141592653589793;
  }
    else
  {
    v3 = 1.570796326794897;
  }
    v4 = fabs(v3 - a3);
    v11 = v4;
    if ( !v6 )
  {
    do
    v4 = v4 - 6.283185307179586;
    while ( v4 >= 6.283185307179586 );
    v11 = v4;
  }
    if ( v4 > 3.141592653589793 )
    v11 = 6.283185307179586 - v4;
    return (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 * 2.5 + 1.5 * v11 + 0.15 * v9;
}
}

// ==== BACKFILL 0x0058CE90  Map_Helper_58CE90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_58CE90()
{
{
    int v0;
    int v1;
    int i;
    int *v3;
    int v4;
    void *v5;
    int *v6;
    if ( g_MapTileArray )
  {
    v0 = g_MapCellWidth * g_MapCellWidth;
    if ( g_MapCellWidth * g_MapCellWidth > 0 )
    {
    v1 = 0;
    do
      {
    *(int *)((char *)(g_MapTileArray) + v1 + 56) = -1;
    *(int *)((char *)(g_MapTileArray) + v1 + 60) = -1;
    v1 += 80;
    --v0;
      }
    while ( v0 );
    }
  }
    for ( i = g_RandomMap_TileData - 1; i >= 0; --i )
  {
    v3 = (int *)*((int *)(g_RandomMap_TerrainState) + i);
    if ( v3 )
    {
    if ( *v3 )
      {
    (**(void (__thiscall ***)(int, int))*v3)(*v3, 1);
    *v3 = 0;
      }
    v6 = v3;
    v4 = (*(int (__thiscall **)(int *, int **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v6);
    if ( v4 != -1 && v4 < g_RandomMap_TileData && v4 < --g_RandomMap_TileData )
      {
    do
        {
    ++v4;
    *((int *)(g_RandomMap_TerrainState) + v4 - 1) = *((int *)(g_RandomMap_TerrainState) + v4);
        }
    while ( v4 < g_RandomMap_TileData );
      }
    v5 = (void *)v3[11];
    v3[10] = &vt_VectorClass_Cell;
    if ( v5 && *((char *)(v3) + 53) )
      {
    __3_YAXPAX_Z(v5);
    v3[11] = 0;
      }
    *((char *)(v3) + 53) = 0;
    v3[12] = 0;
    __3_YAXPAX_Z(v3);
    }
  }
    g_MapTileArrayEnd = 0;
}
}

// ==== BACKFILL 0x0058CF90  RandomMap::GenerateTerrainForAllCells  cls=RandomMap  sig=csp  renamed_refs=0  residual=- ====
int RandomMap::GenerateTerrainForAllCells()
{
{
    int result;
    int v2;
    int v3;
    int *v4;
    void *v5;
    v5 = this;
    result = g_MapCellWidth * g_MapCellWidth;
    if ( g_MapCellWidth * g_MapCellWidth > 0 )
  {
    v2 = g_MapCellWidth * g_MapCellWidth;
    result = (int)g_MapTileArray;
    v3 = 0;
    do
    {
    v5 = *(void **)(v3 + result);
    v4 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v5);
    result = (int)g_MapTileArray;
    if ( *(int *)((char *)(g_MapTileArray) + v3 + 56) == -1 && (*(short *)((char *)(g_MapTileArray) + v3) || *(short *)((char *)(g_MapTileArray) + v3 + 2)) )
      {
    if ( Cell::IsGroundTypeRange(v4) || Cell::IsShore(v4) )
    RandomMap::GenerateTerrain((int)v4);
    result = (int)g_MapTileArray;
      }
    v3 += 80;
    --v2;
    }
    while ( v2 );
  }
    return result;
}
}

// ==== BACKFILL 0x0058D070  SetLayerDataMap  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Map_SetLayerData(short * a1, int a2)
{
{
    int result;
    if ( g_MapTileArray )
  {
    result = 80 * (*a1 + g_MapCellWidth * *((int*)(a1) + 1));
    *(int *)((char *)(g_MapTileArray) + result + 56) = a2;
  }
    return result;
}
}

// ==== BACKFILL 0x0058D120  sub_58D120  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_58D120::sub_58D120(int a2, int a3)
{
{
    int result;
    int v4;
    int v5;
    int *v6;
    int *v7;
    int v8;
    result = g_MapCellWidth * g_MapCellWidth;
    v7 = this;
    if ( g_MapCellWidth * g_MapCellWidth <= 0 )
  {
    this->M12 = 0;
  }
    else
  {
    v4 = a3;
    v5 = 0;
    v8 = g_MapCellWidth * g_MapCellWidth;
    do
    {
    if ( *(int *)((char *)(g_MapTileArray) + v5 + 56) == this->M8 )
      {
    *(int *)((char *)(g_MapTileArray) + v5 + 56) = a2;
    *((char *)(g_MapTileArray) + v5 + 75) = 0;
    a3 = *(int *)((char *)(g_MapTileArray) + v5);
    v6 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&a3);
    v6[14] = 0;
    *((char *)(v6) + 282) = 0;
    if ( v4 != -1 )
    *((char *)(v6) + 283) = v4;
    this = v7;
      }
    v5 += 80;
    result = --v8;
    }
    while ( v8 );
    this->M12 = 0;
  }
    return result;
}
}
