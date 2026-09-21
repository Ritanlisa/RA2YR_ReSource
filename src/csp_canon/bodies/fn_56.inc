// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00561350  sub_561350  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_561350(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
{
    int result;
    int *WindowLongA;
    wchar_t *StringCSF;
    HWND DlgItem;
    result = BaseDialogProc(hWnd, a2, a3, a4);
    if ( !result )
  {
    WindowLongA = (int *)GetWindowLongA(hWnd, 8);
    if ( a2 == 273 )
    {
    if ( (unsigned short)a3 == 1473 )
      {
    *WindowLongA = 1;
      }
    else if ( (unsigned short)a3 == 1738 )
      {
    *WindowLongA = 2;
    return 0;
      }
    }
    else if ( a2 == 1175 )
    {
    StringCSF = GetStringCSF(aGuiConfirmmode, 0, g_Str_File_MainOpt_cpp, 1501);
    DlgItem = GetDlgItem(hWnd, 1499);
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)StringCSF);
    return 0;
    }
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x00565090  RadarClass::RenderMapPreview  cls=MapClass  sig=csp  renamed_refs=3  residual=- ====
namespace gamemd { int RadarClass::RenderMapPreview() {
{
      _DWORD *v2;
      int v3;
      _WORD *v4;
      int v5;

      RadarClass::initRadarSurface((_DWORD *)this);
      RadarClass::drawRadarTerrain((_DWORD *)(this + 80), 0, 0);
      *(_DWORD *)(this + 80) = &DynamicVectorClass<ZoneConnectionClass>::`vftable';
      this->q064 = 10;
      this->q060 = 0;
      v2 = (_DWORD *)(this + 140);
      v3 = 3;
      do
      {
        RadarClass::RenderJammerRadius(v2, 0, 0);
        *v2 = &DynamicVectorClass<SubzoneTrackingStruct>::`vftable';
        v2[5] = 10;
        v2[4] = 0;
        v2 += 6;
        --v3;
      }
      while ( v3 );
      VectorClass::CellConstructor((_DWORD *)(this + 212), 0, 0);
      *(_DWORD *)(this + 212) = &vt_DynamicVectorClass_Cell;
      this->q0E8 = 10;
      this->q0E4 = 0;
      this->q13C = 0;
      this->q140 = 0;
      this->q144 = 1;
      this->q145 = 0;
      *(_DWORD *)(this + 312) = &vt_VectorClass_CellClass;
      v4 = (_WORD *)(this + 356);
      v5 = 256;
      do
      {
        *v4 = 0;
        v4[1] = 0;
        v4 += 8;
        --v5;
      }
      while ( v5 );
      this->MapClass_field_0x1160 = 0;
      this->MapClass_field_0x1164 = 0;
      this->q1168 = 1;
      this->q1169 = 0;
      *(_DWORD *)(this + 4444) = &vt_DynamicVectorClass_Cell;
      this->q1170 = 10;
      this->MapClass_field_0x116C = 0;
      *(_DWORD *)this = &vt_MapClass;
      this->q148 = 13;
      return this;
}
} }

// ==== BACKFILL 0x00565190  RadarClass::Render  cls=RadarClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { void* RadarClass::Render(int a1) {
{
      _DWORD *v3;
      _DWORD *v4;
      int v5;
      _WORD *v6;
      int v7;
      _DWORD *v8;
      char *v9;
      int v11;

      v3 = this + 80;
      *(_DWORD *)this = &off_7EA6FC;
      this->RadarClass_field_0x10 = 0;
      this->q014 = 0;
      RadarClass::drawRadarTerrain((_DWORD *)this + 20, 0, 0);
      *v3 = &DynamicVectorClass<ZoneConnectionClass>::`vftable';
      v3[5] = 10;
      v3[4] = 0;
      v4 = this + 140;
      v5 = 3;
      do
      {
        RadarClass::RenderJammerRadius(v4, 0, 0);
        *v4 = &DynamicVectorClass<SubzoneTrackingStruct>::`vftable';
        v4[5] = 10;
        v4[4] = 0;
        v4 += 6;
        --v5;
      }
      while ( v5 );
      VectorClass::CellConstructor((_DWORD *)this + 53, 0, 0);
      *((_DWORD *)this + 53) = &vt_DynamicVectorClass_Cell;
      this->q0E8 = 10;
      this->q0E4 = 0;
      *((_DWORD *)this + 78) = &vt_VectorClass_CellClass;
      v6 = this + 356;
      v7 = 256;
      do
      {
        *v6 = 0;
        v6[1] = 0;
        v6 += 8;
        --v7;
      }
      while ( v7 );
      this->q1160 = 0;
      this->q1164 = 0;
      this->q1168 = 1;
      this->q1169 = 0;
      *((_DWORD *)this + 1111) = &vt_DynamicVectorClass_Cell;
      this->q1170 = 10;
      this->q116C = 0;
      *(_DWORD *)this = &vt_MapClass;
      v8 = this + 128;
      memset(this + 24, 0, 0x34u);
      v9 = this + 140;
      v11 = 3;
      this->q080 = 0;
      this->q084 = 0;
      this->q088 = 0;
      do
      {
        (*(void (__thiscall **)(char *))(*(_DWORD *)v9 + 12))(v9);
        *v8++ = 0;
        v9 += 24;
        --v11;
      }
      while ( v11 );
      this->q014 = 0;
      return this;
}
} }

// ==== BACKFILL 0x005654E0  sub_5654E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_5654E0::sub_5654E0(unsigned int * a2, int * a3)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    v3 = this->M244;
    v4 = *((int*)(a3) + 1);
    v5 = *a3;
    if ( (v3 & 1) != 0 )
    v6 = v5 - v4 + 1;
    else
    v6 = v5 - v4;
    v7 = *a3 + v4 - v3;
    *a2 = v3 / 2 + (v6 >> 1);
    *((int*)(a2) + 1) = v7;
    return a2;
}
}

// ==== BACKFILL 0x00565520  CellClass::GetScreenCenterOffset  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* CellClass::GetScreenCenterOffset(void* a1, void* a2) {
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    void *v8;
    int v10;
    v3 = *(this + 61);
    v10 = this->occupyHeightsCoveringMe;
    v4 = *(this + 63);
    v5 = *((int*)(a2) + 1);
    v6 = *a2;
    if ( (v3 & 1) != 0 )
    v7 = v6 - v5 + 1;
    else
    v7 = v6 - v5;
    v8 = (void *)(*a2 + v5 - v3 - v10);
    a1->field_0 = v3 / 2 + (v7 >> 1) - v4;
    a1->field_4 = v8;
    return &a1->field_0;
}
} }

// ==== BACKFILL 0x00565610  sub_565610  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_565610::sub_565610(unsigned int * a2, short * a3)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    short v7;
    int v9;
    v3 = this->M244;
    v4 = *((int*)(a3) + 1);
    v5 = *a3;
    if ( (v3 & 1) != 0 )
    v6 = v5 - v4 + 1;
    else
    v6 = v5 - v4;
    v7 = *a3 + v4 - v3;
    LOWORD(v9) = v3 / 2 + (v6 >> 1);
    HIWORD(v9) = v7;
    *a2 = v9;
    return a2;
}
}

// ==== BACKFILL 0x005656D0  MapClass::IsCellPassable  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::IsCellPassable(int a1, int a2)
{
{
    unsigned int v2;
    int *v3;
    v2 = (short)a2 + (SHIWORD(a2) << 9);
    if ( v2 >= 0x40000 || (v3 = *(int **)(*(int *)(a1 + 316) + 4 * v2)) == 0 )
  {
    v3 = &g_CellClassArray;
    g_Map_GlobalCellIndex = a2;
  }
    return (v3[75] >> 3) & 1;
}
}

// ==== BACKFILL 0x00565B00  MapClass::FreeAllCells  cls=MapClass  sig=csp  renamed_refs=4  residual=- ====
int MapClass::FreeAllCells()
{
{
    int i;
    int v3;
    int j;
    int v5;
    int result;
    for ( i = 0; i < this->MapClass_field_0x13C; ++i )
  {
    v3 = *(int *)(this->MaxLevel + 4 * i);
    if ( v3 )
    {
    *(int *)(v3 + 44) = 0;
    *(int *)(v3 + 48) = 0;
    }
  }
    for ( j = 0; j < this->MapClass_field_0x13C; ++j )
  {
    v5 = *(int *)(this->MaxLevel + 4 * j);
    if ( v5 )
    {
    (*(void (__thiscall **)(int, int))(*(int *)(v5) + 32))(v5, 1);
    *(int *)(this->MaxLevel + 4 * j) = 0;
    }
  }
    ReturnFalse2(0, 1);
    result = this->MapClass_field_0x13C;
    if ( result < 0x40000 )
  {
    (*(void (__thiscall **)(int *, int, int))(this->TotalValue + 8))(this + 78, 0x40000, 0);
    for ( result = 0; result < this->MapClass_field_0x13C; *(int *)(this->MaxLevel + 4 * result - 4) = 0 )
    ++result;
  }
    return result;
}
}

// ==== BACKFILL 0x00567110  CellClass::BuildPathfindingGraph  cls=CellClass  sig=csp  renamed_refs=5  residual=- ====
namespace gamemd { void* CellClass::BuildPathfindingGraph() {
{
      int v2;
      _BYTE *v3;
      _BYTE *v4;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;

      if ( this->unknown68 )
      {
        __3_YAXPAX_Z(*(void **)(this + 104));
        this->unknown68 = 0;
      }
      if ( this->unknown70 )
      {
        __3_YAXPAX_Z(*(void **)(this + 112));
        this->unknown70 = 0;
      }
      v2 = (this->q0F4 + this->radSite + 1) * (this->q0F4 + this->radSite + 1);
      this->CellClass_field_6C = v2;
      v3 = __2_YAPAXI_Z(4 * v2);
      if ( v3 )
      {
        v4 = v3;
        if ( v2 - 1 >= 0 )
        {
          v5 = v2;
          do
          {
            *v4 = 7;
            v4[1] = 0;
            v4 += 4;
            --v5;
          }
          while ( v5 );
        }
      }
      else
      {
        v3 = 0;
      }
      this->unknown68 = v3;
      this->unknown70 = __2_YAPAXI_Z(10 * this->CellClass_field_6C);
      CellClass::setOverlayType((void **)g_AudioInitFlag, this + 236);
      v6 = 0;
      v7 = this + 160;
      do
      {
        v7 += 24;
        *(_DWORD *)(v7 - 24) = 4 * this->radSite * this->q0F4 / ((1 << (v6 + 1)) * (1 << (v6 + 1)));
        ++v6;
      }
      while ( v6 < 3 );
      MapClass::PostProcessReveal((_DWORD *)this, 0);
      MapClass::ProcessRegion((_DWORD *)this);
      Terrain::ConnectivityGraph((_DWORD *)this);
      v8 = 2;
      v9 = this + 188;
      do
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9);
        Subzone::BuildGraph((_DWORD *)this, v8--);
        v9 -= 24;
      }
      while ( v8 >= 0 );
      return MapClass::AllocArrays(g_AudioInitFlag);
}
} }

// ==== BACKFILL 0x0056AE40  sub_56AE40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_56AE40::sub_56AE40(int a2)
{
{
    int v3;
    int i;
    int v5;
    char *v6;
    int j;
    int v8;
    char *v9;
    int k;
    int v11;
    char *v12;
    int v14[10];
    v3 = 0;
    LCWPipe::Constructor(v14, 0, 0x2000);
    Pipe::SetDelegate(v14, a2);
    for ( i = 0; i < this->M320; ++i )
  {
    v5 = *(int *)(this->M316 + 4 * i);
    if ( v5 )
    v6 = LCW::Compress((int)v14, (char *)(v5 + 56), 2);
    else
    v6 = LCW::Compress((int)v14, DataGlobal_ABDC88, 2);
    v3 += (int)v6;
  }
    for ( j = 0; j < this->M320; ++j )
  {
    v8 = *(int *)(this->M316 + 4 * j);
    if ( v8 )
    v9 = LCW::Compress((int)v14, (char *)(v8 + 282), 1);
    else
    v9 = LCW::Compress((int)v14, (char *)&DataGlobal_ABDD6A, 1);
    v3 += (int)v9;
  }
    for ( k = 0; k < this->M320; ++k )
  {
    v11 = *(int *)(this->M316 + 4 * k);
    if ( v11 )
    v12 = LCW::Compress((int)v14, (char *)(v11 + 283), 1);
    else
    v12 = LCW::Compress((int)v14, DataGlobal_ABDD6B, 1);
    v3 += (int)v12;
  }
    LCWPipe::Dtor(v14);
    return v3;
}
}

// ==== BACKFILL 0x0056B0F0  sub_56B0F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_56B0F0::sub_56B0F0(int * a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int i;
    int *v16;
    int v17;
    v2 = 0;
    v3 = 0;
    v4 = a2;
    v16 = this;
    for ( i = 0; v3 < v16[80]; i = v3 )
  {
    v5 = *(int *)(this->M316 + 4 * v3);
    if ( v3 )
    {
    if ( v5 )
      {
    v6 = *(int *)(v5 + 36);
    v7 = this->M244;
    HIWORD(a2) = HIWORD(v6);
    v8 = (short)v6;
    v9 = SHIWORD(v6);
    a2 = (int *)(SHIWORD(a2) + v8);
    if ( (int)a2 > v7 && v8 - v9 < v7 && v9 - v8 < v7 && (int)a2 <= v7 + 2 * v16[62] )
        {
    a2 = *(int **)(v5 + 36);
    if ( a2 != (int *)g_MapSeedState && (int *)v5 != g_CellClassArray && (*(int *)(v5 + 56) != 0xFFFF || *(char *)(v5 + 283) > 0) )
          {
    v10 = (*(int (__thiscall **)(int *, int **, int))(*v4 + 16))(v4, &a2, 4) + v2;
    v11 = (*(int (__thiscall **)(int *, int, int))(*v4 + 16))(v4, v5 + 56, 4) + v10;
    v12 = (*(int (__thiscall **)(int *, int, int))(*v4 + 16))(v4, v5 + 282, 1) + v11;
    v2 = (*(int (__thiscall **)(int *, int, int))(*v4 + 16))(v4, v5 + 283, 1) + v12;
          }
        }
      }
    }
    this = v16;
    v3 = i + 1;
  }
    v13 = *v4;
    v17 = g_MapSeedState;
    return v2 + (*(int (__thiscall **)(int *, int *, int))(v13 + 16))(v4, &v17, 4);
}
}

// ==== BACKFILL 0x0056B5A0  CellClass::LoadTerrainTiles  cls=CellClass  sig=csp  renamed_refs=3  residual=- ====
namespace gamemd { int CellClass::LoadTerrainTiles(int a1) {
{
      int i;
      unsigned int v4;
      _DWORD *v5;
      int *v6;
      int j;
      unsigned int v8;
      char *v9;
      int k;
      unsigned int v11;
      char *v12;
      int v14[10];
      int v15;
      int v16;
      int v17;

      LCWStraw::Constructor(v14, 1, 0x2000);
      Delegate::Set(v14, a2);
      for ( i = 0; i < 0x4000; ++i )
      {
        HIWORD(v15) = i / 128;
        v4 = i % 128 + (SHIWORD(v15) << 9);
        if ( v4 < 0x40000 && (v5 = *(_DWORD **)(this->CellClass_field_13C + 4 * v4)) != 0
          || (LOWORD(v15) = i % 128, g_Map_GlobalCellIndex = v15, (v5 = g_CellClassArray) != 0) )
        {
          v6 = v5 + 14;
          v5[14] = 0xFFFF;
          LCW::DecompressReader((int)v14, (char *)v5 + 56, 2);
          *v6 = AccumulateMIXFileIndex(*v6);
        }
        else
        {
          LCW::DecompressReader((int)v14, stru_ABDC88, 2);
        }
      }
      for ( j = 0; j < 0x4000; ++j )
      {
        HIWORD(v16) = j / 128;
        v8 = j % 128 + (SHIWORD(v16) << 9);
        if ( v8 < 0x40000 && (v9 = *(char **)(this->CellClass_field_13C + 4 * v8)) != 0
          || (LOWORD(v16) = j % 128, g_Map_GlobalCellIndex = v16, (v9 = (char *)g_CellClassArray) != 0) )
        {
          LCW::DecompressReader((int)v14, v9 + 282, 1);
        }
        else
        {
          LCW::DecompressReader((int)v14, (char *)&stru_ABDD6A, 1);
        }
      }
      for ( k = 0; k < 0x4000; ++k )
      {
        HIWORD(v17) = k / 128;
        v11 = k % 128 + (SHIWORD(v17) << 9);
        if ( v11 < 0x40000 && (v12 = *(char **)(this->CellClass_field_13C + 4 * v11)) != 0
          || (LOWORD(v17) = k % 128, g_Map_GlobalCellIndex = v17, (v12 = (char *)g_CellClassArray) != 0) )
        {
          LCW::DecompressReader((int)v14, v12 + 283, 1);
        }
        else
        {
          LCW::DecompressReader((int)v14, DataGlobal_ABDD6B, 1);
        }
      }
      if ( g_CellClassArray )
        CellClass::Construct(g_CellClassArray);
      LCWStraw::Dtor(v14);
      return 1;
}
} }

// ==== BACKFILL 0x0056B780  CellClass::CreateOverlay  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::CreateOverlay(int a1) {
{
    unsigned int v3;
    char *v4;
    char *v5;
    int v7;
    char v8[8];
    int v9[10];
    LCWStraw::Constructor(v9, 1, 0x2000);
    Delegate::Set(v9, a2);
    LCW::DecompressReader((int)v9, (char *)&v7, 4);
    while ( v7 != g_MapSeedState )
  {
    v3 = (short)v7 + (SHIWORD(v7) << 9);
    if ( v3 < 0x40000 && (v4 = *(char **)(*(this + 79) + 4 * v3)) != 0 )
    {
    v5 = v4;
    }
    else
    {
    g_Map_GlobalCellIndex = v7;
    v5 = (char *)g_CellClassArray;
    }
    if ( !v5 || v5 == (char *)g_CellClassArray )
    {
    LCW::DecompressReader((int)v9, v8, 6);
    }
    else
    {
    *((int *)(v5) + 14) = 0xFFFF;
    LCW::DecompressReader((int)v9, v5 + 56, 4);
    *((int *)(v5) + 14) = AccumulateMIXFileIndex(*((int *)(v5) + 14));
    LCW::DecompressReader((int)v9, v5 + 282, 1);
    LCW::DecompressReader((int)v9, v5 + 283, 1);
    }
    v7 = g_MapSeedState;
    LCW::DecompressReader((int)v9, (char *)&v7, 4);
  }
    if ( g_CellClassArray )
    CellClass::Construct(g_CellClassArray);
    LCWStraw::Dtor(v9);
    return 1;
}
} }

// ==== BACKFILL 0x0056B8A0  CellClass::DecompressRawCellData  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::DecompressRawCellData(int a1) {
{
    int v2;
    unsigned int v4;
    int *v5;
    int *v6;
    char v8[8];
    v2 = a2;
    while ( 1 )
  {
    (*(void (__thiscall **)(int, int *, int))(*(int *)(v2) + 8))(v2, &a2, 4);
    if ( a2 == g_MapSeedState )
    break;
    v4 = (short)a2 + (SHIWORD(a2) << 9);
    if ( v4 < 0x40000 && (v5 = *(int **)(*(this + 79) + 4 * v4)) != 0 )
    {
    v6 = v5;
    }
    else
    {
    g_Map_GlobalCellIndex = a2;
    v6 = g_CellClassArray;
    }
    if ( !v6 || v6 == g_CellClassArray )
    {
    (*(void (__thiscall **)(int, char *, int))(*(int *)(v2) + 8))(v2, v8, 6);
    a2 = g_MapSeedState;
    }
    else
    {
    v6[14] = 0xFFFF;
    (*(void (__thiscall **)(int, int *, int))(*(int *)(v2) + 8))(v2, v6 + 14, 4);
    v6[14] = AccumulateMIXFileIndex(v6[14]);
    (*(void (__thiscall **)(int, int, int))(*(int *)(v2) + 8))(v2, (int)v6 + 282, 1);
    (*(void (__thiscall **)(int, int, int))(*(int *)(v2) + 8))(v2, (int)v6 + 283, 1);
    a2 = g_MapSeedState;
    }
  }
    if ( g_CellClassArray )
    CellClass::Construct(g_CellClassArray);
    return 1;
}
} }

// ==== BACKFILL 0x0056B9A0  CellClass::DecompressTerrainDataSimple  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::DecompressTerrainDataSimple(int a1) {
{
    unsigned int v3;
    char *v4;
    char *v5;
    int v7;
    char v8[8];
    int v9[10];
    LZOStraw::Constructor(v9, 1, 0x2000);
    Delegate::Set(v9, a2);
    LCW::Decompress((int)v9, (char *)&v7, 4);
    while ( v7 != g_MapSeedState )
  {
    v3 = (short)v7 + (SHIWORD(v7) << 9);
    if ( v3 < 0x40000 && (v4 = *(char **)(*(this + 79) + 4 * v3)) != 0 )
    {
    v5 = v4;
    }
    else
    {
    g_Map_GlobalCellIndex = v7;
    v5 = (char *)g_CellClassArray;
    }
    if ( !v5 || v5 == (char *)g_CellClassArray )
    {
    LCW::Decompress((int)v9, v8, 6);
    }
    else
    {
    *((int *)(v5) + 14) = 0xFFFF;
    LCW::Decompress((int)v9, v5 + 56, 4);
    *((int *)(v5) + 14) = AccumulateMIXFileIndex(*((int *)(v5) + 14));
    LCW::Decompress((int)v9, v5 + 282, 1);
    LCW::Decompress((int)v9, v5 + 283, 1);
    }
    v7 = g_MapSeedState;
    LCW::Decompress((int)v9, (char *)&v7, 4);
  }
    if ( g_CellClassArray )
    CellClass::Construct(g_CellClassArray);
    LZOStraw::Destructor(v9);
    return 1;
}
} }

// ==== BACKFILL 0x0056BAC0  CellClass::DecompressTerrainData  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::DecompressTerrainData(int a1) {
{
    unsigned int v3;
    int *v4;
    int *v5;
    ObjectClass *v7;
    char v8[8];
    int v9[10];
    LZOStraw::Constructor(v9, 1, 0x2000);
    Delegate::Set(v9, (AbstractTypeClass *)a1);
    while ( 1 )
  {
    LCW::Decompress((int)v9, (CCINIClass *)&v7, 4);
    if ( v7 == (ObjectClass *)g_MapSeedState )
    break;
    v3 = (short)v7 + (SHIWORD(v7) << 9);
    if ( v3 < 0x40000 && (v4 = *(int **)(*(this + 79) + 4 * v3)) != 0 )
    {
    v5 = v4;
    }
    else
    {
    g_Map_GlobalCellIndex = (IUnknown *)v7;
    v5 = g_CellClassArray;
    }
    if ( !v5 || v5 == g_CellClassArray )
    {
    LCW::Decompress((int)v9, (CCINIClass *)v8, 7);
    }
    else
    {
    v5[14] = 0xFFFF;
    LCW::Decompress((int)v9, (CCINIClass *)(v5 + 14), 4);
    v5[14] = AccumulateMIXFileIndex(v5[14]);
    LCW::Decompress((int)v9, (CCINIClass *)((char *)(v5) + 282), 1);
    LCW::Decompress((int)v9, (CCINIClass *)((char *)(v5) + 283), 1);
    LCW::Decompress((int)v9, (CCINIClass *)((char *)(v5) + 281), 1);
    }
    v7 = (ObjectClass *)g_MapSeedState;
  }
    if ( g_CellClassArray )
    CellClass::Construct(g_CellClassArray);
    LZOStraw::Destructor(v9);
    return 1;
}
} }

// ==== BACKFILL 0x0056BC50  Cell::PosToLinearIndex  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Cell::PosToLinearIndex(IUnknown * aP0)
{
{
    return SLOWORD(aP0->field_0) / 4 + 130 * (SHIWORD(aP0->field_0) / 4) + 131;
}
}

// ==== BACKFILL 0x0056BCD0  CellClass::GetTileData  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CellClass::GetTileData(IUnknown * aP0, IUnknown * aP1)
{
{
    unsigned int v2;
    int *v3;
    v2 = SLOWORD(aP0->field_0) + (SHIWORD(aP0->field_0) << 9);
    if ( v2 >= 0x40000 || (v3 = *(int **)(*(int *)&DataGlobal_87C374.__pad_14B0[8448] + 4 * v2)) == 0 )
  {
    g_Map_GlobalCellIndex = (IUnknown *)aP0->field_0;
    v3 = g_CellClassArray;
  }
    return *(int *)&aP1->__pad_579C[520 * ((short)HIWORD(v3[9]) / 4) + 596 + 4 * ((short)v3[9] / 4)];
}
}

// ==== BACKFILL 0x0056C020  CellClass::CreateBuildingCrater  cls=CellClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int CellClass::CreateBuildingCrater(void* a1) {
{
      int v2;
      __int16 *i;
      unsigned int v5;
      MouseClass *v6;
      MouseClass *v7;
      int v8;
      IUnknown *PlacementRect;
      int *StartCoords;
      int v11;
      int v12;
      int v13;
      int v14;
      int v15;
      int v16;
      int v17;
      int v18;
      int v19;
      int v20[4];
      char v21;
      int v22;
      MouseClass *aP1a;

      if ( g_GameMode_Current )
      {
        v2 = 0;
        for ( i = this + 178;
              *(TagClass **)i == g_MapSeedState || LOWORD(aP1->field_0) != *i || HIWORD(aP1->field_0) != i[1];
              i += 8 )
        {
          if ( ++v2 >= 256 )
            return 0;
        }
        return CellClass::Cleanup(this + 8 * v2 + 172);
      }
      else
      {
        v5 = SLOWORD(aP1->field_0) + (SHIWORD(aP1->field_0) << 9);
        if ( v5 < 0x40000 && (v6 = *(MouseClass **)(this->CellClass_field_13C + 4 * v5)) != 0 )
        {
          v7 = v6;
        }
        else
        {
          v7 = (MouseClass *)g_CellClassArray;
          g_Map_GlobalCellIndex = (IUnknown *)aP1->field_0;
        }
        v8 = *(_DWORD *)&v7->__pad_3C[8];
        aP1a = v7;
        if ( v8 == -1 || !*(_BYTE *)(*(_DWORD *)&g_BuildingTypeClass_Array->__pad_0[4 * v8] + 682) )
        {
          return 0;
        }
        else
        {
          PlacementRect = (IUnknown *)BuildingClass::GetPlacementRect((int)v7, (IUnknown *)v20);
          StartCoords = House::GetStartCoords((int)v7, (IUnknown *)&v21);
          if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 )
          {
            v18 = PlacementRect->field_0;
            v14 = PlacementRect->field_4;
            v15 = PlacementRect->field_8;
            v16 = PlacementRect->field_C;
          }
          else
          {
            v11 = PlacementRect->field_8;
            if ( v11 <= 0 || (v19 = PlacementRect->field_C, v19 <= 0) )
            {
              v18 = *StartCoords;
              v14 = StartCoords[1];
              v15 = StartCoords[2];
              v16 = StartCoords[3];
            }
            else
            {
              v12 = *StartCoords;
              v13 = PlacementRect->field_0;
              v14 = StartCoords[1];
              v15 = StartCoords[2];
              v16 = StartCoords[3];
              if ( v12 > PlacementRect->field_0 )
              {
                v15 += v12 - v13;
                v12 = PlacementRect->field_0;
              }
              v17 = PlacementRect->field_4;
              if ( v14 > v17 )
              {
                v16 += v14 - v17;
                v14 = v17;
              }
              if ( v15 + v12 < v13 + v11 )
                v15 = v13 - v12 + v11 + 1;
              if ( v16 + v14 < v19 + v17 )
                v16 = v19 + v17 - v14 + 1;
              v18 = v12;
              v7 = aP1a;
            }
          }
          v22 = v14;
          Cell::CreateCrater(v18, v14 - *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[8536], v15, v16, 0);
          *(_DWORD *)&v7->__pad_3C[8] = -1;
          v7->field_11B[3] = 0;
          return 1;
        }
      }
}
} }

// ==== BACKFILL 0x0056CB80  Cell::DecodeFlags  cls=Cell  sig=csp  renamed_refs=0  residual=- ====
int Cell::DecodeFlags()
{
{
    return *(void**)this & 0xF | ((unsigned short)*(void**)this >> 12);
}
}

// ==== BACKFILL 0x0056ED40  globalHelper_06ED40  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_06ED40(IUnknown * aP0, int a2)
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
    *((char *)(v5) + 286) = 4;
    }
    else if ( v6 == 5 )
    {
    *((char *)(v5) + 286) = 6;
    }
  }
    v7 = v5[14] - g_TerrainBridgeIndex + 1;
    if ( v7 == DataGlobal_ABC1E8 || v7 == DataGlobal_AA0E38 )
  {
    LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&a2, (IUnknown *)1, 0);
  }
    else if ( v7 == g_TerrainSoundTable2 )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&a2, (IUnknown *)(g_TerrainBridgeIndex + g_TerrainSoundTable2), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    else if ( v7 == g_TerrainSoundTable2 + 2 )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&a2, (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    return v7;
}
}

// ==== BACKFILL 0x0056EE40  globalHelper_06EE40  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_06EE40(IUnknown * aP0, int a2)
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
    v7 = v5[14] - g_TerrainBridgeIndex + 1;
    if ( v7 == DataGlobal_ABC2B4 || v7 == DataGlobal_AA1130 )
  {
    LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&a2, (IUnknown *)1, 0);
  }
    else if ( v7 == g_TerrainSoundTable2 )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&a2, (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 1), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    else if ( v7 == g_TerrainSoundTable2 + 1 )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&a2, (IUnknown *)(g_TerrainSoundTable2 + g_TerrainBridgeIndex + 2), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    return v7;
}
}

// ==== BACKFILL 0x0056F690  globalHelper_06F690  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_06F690(IUnknown * aP0, IUnknown * aP1)
{
{
    int v2;
    short v3;
    unsigned int v4;
    int *v5;
    unsigned char v6;
    int v7;
    v2 = (unsigned char)aP1 & 7;
    v3 = *(short *)&DataGlobal_89E138.__pad_14B0[4 * v2 + 160];
    LOWORD(v2) = HIWORD(aP0->field_0) + *(short *)&DataGlobal_89E138.__pad_14B0[4 * v2 + 162];
    LOWORD(aP1) = LOWORD(aP0->field_0) + v3;
    HIWORD(aP1) = v2;
    v4 = (short)aP1 + ((short)v2 << 9);
    if ( v4 >= 0x40000 || (v5 = *(int **)(*(int *)&DataGlobal_87C374.__pad_14B0[8448] + 4 * v4)) == 0 )
  {
    g_Map_GlobalCellIndex = aP1;
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
    v7 = v5[14] - g_TerrainBridgeIndex + 1;
    if ( v7 == DataGlobal_ABC1D0 || v7 == DataGlobal_AA1540 )
  {
    LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&aP1, (IUnknown *)1, 0);
  }
    else if ( v7 == g_TerrainSoundConfig )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&aP1, (IUnknown *)(g_TerrainBridgeIndex + g_TerrainSoundConfig), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    else if ( v7 == g_TerrainSoundConfig + 2 )
  {
    LOBYTE(v7) = Cell::SetTileType( (IUnknown *)&aP1, (IUnknown *)(g_TerrainSoundConfig + g_TerrainBridgeIndex + 2), (IUnknown *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF, 0);
  }
    return v7;
}
}

// ==== BACKFILL 0x0056F7A0  globalHelper_06F7A0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_56F7A0(unsigned short * a1, int a2)
{
{
    int v2;
    short v3;
    unsigned int v4;
    int *v5;
    unsigned char v6;
    int v7;
    v2 = a2 & 7;
    v3 = Direction_X_Offsets[v2];
    LOWORD(v2) = *((int*)(a1) + 1) + HIWORD(Direction_X_Offsets[v2]);
    LOWORD(a2) = *a1 + v3;
    HIWORD(a2) = v2;
    v4 = (short)a2 + ((short)v2 << 9);
    if ( v4 >= 0x40000 || (v5 = *(int **)(g_Shroud_CellArray + 4 * v4)) == 0 )
  {
    g_Map_GlobalCellIndex = a2;
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
    v7 = v5[14] - g_TerrainBridgeIndex + 1;
    if ( v7 == DataGlobal_AA1548 || v7 == DataGlobal_AA0740 )
  {
    LOBYTE(v7) = Cell::UpdateTileType((short *)&a2, 1, 0);
  }
    else if ( v7 == g_TerrainSoundConfig )
  {
    LOBYTE(v7) = Cell::SetTileType((short *)&a2, g_TerrainSoundConfig + g_TerrainBridgeIndex + 1, -1, -1, 0);
  }
    else if ( v7 == g_TerrainSoundConfig + 1 )
  {
    LOBYTE(v7) = Cell::SetTileType((short *)&a2, g_TerrainSoundConfig + g_TerrainBridgeIndex + 2, -1, -1, 0);
  }
    return v7;
}
}
