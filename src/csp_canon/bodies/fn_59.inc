// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x005942F0  sub_5942F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5942F0::sub_5942F0(int * a2)
{
{
    int *v2;
    int v3;
    int result;
    int v5;
    int v6;
    int v7;
    int v8;
    char *v9;
    int v10;
    short v11[2];
    int *v12;
    v2 = a2;
    v12 = this;
    v3 = *((int*)(a2) + 1);
    result = v3 + *((int*)(a2) + 3);
    v10 = v3;
    if ( v3 < result )
  {
    v5 = g_MapCellHeight_Value;
    do
    {
    v6 = *v2;
    if ( *v2 < *v2 + v2[2] )
      {
    v7 = (short)v3;
    do
        {
    v11[0] = v6;
    v11[1] = v3;
    v8 = v7 + (short)v6;
    if ( v8 > v5 )
          {
    if ( (short)v6 - v7 < v5 && v7 - (short)v6 < v5 && v8 <= g_MapCellCount )
            {
    if ( g_MapTileArray )
    *((int *)(g_MapTileArray) + 20 * (short)v6 + 20 * g_MapCellWidth * v7 + 14) = v12[2];
    v9 = CellCoord::To_CellObj(&DataGlobal_87F7E8, v11);
    v9[283] = *((char *)(v12) + 16);
    v5 = g_MapCellHeight_Value;
            }
    v3 = v10;
    v2 = a2;
          }
    ++v6;
    result = *v2 + v2[2];
        }
    while ( v6 < result );
      }
    v10 = ++v3;
    }
    while ( v3 < v2[1] + v2[3] );
  }
    return result;
}
}

// ==== BACKFILL 0x00595BC0  CCFileClass::Load  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CCFileClass::Load() {
{
      HWND Dialog;
      int v3;
      _DWORD *v4;
      LONG dwNewLong;
      int v7[9];

      dwNewLong = 0;
      RandomMap::LoadConfig(DataGlobal_ABDFD8);
      Dialog = (HWND)CreateDialog(0x105u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SkirmishMapGen::DlgProc, 0);
      if ( Dialog )
      {
        off_82AF14 = this;
        DataGlobal_ABDFEC = (int)this;
        SetWindowLongA(Dialog, 8, (LONG)&dwNewLong);
        SendMessageA(Dialog, 0x4A9u, 0, 1);
        Dialog::Show(Dialog);
        while ( !dwNewLong )
        {
          if ( Dialog::PumpMessages() == 1 )
            break;
          if ( this )
            this();
          LOBYTE(v3) = 0;
          ScreenSaver::Process(v3);
        }
        Dialog::Destroy(Dialog);
      }
      v4 = g_Map_TiberiumConfig;
      off_82AF14 = Event_Dispatch::Return0;
      DataGlobal_ABDFEC = 0;
      if ( g_Map_TiberiumConfig )
      {
        if ( *(_DWORD *)g_Map_TiberiumConfig )
        {
          RawFileClass::Construct(v7, (int)stru_829ABC);
          CompressScreenshot(v7, *(int **)g_Map_TiberiumConfig, &FileSystem_TEMPERAT_PAL);
          RawFileClass::Dtor(v7);
          v4 = g_Map_TiberiumConfig;
        }
        if ( v4 )
        {
          ComPtr::Dtor(v4);
          __3_YAXPAX_Z(v4);
        }
        g_Map_TiberiumConfig = 0;
      }
      if ( DataGlobal_ABE150 )
      {
        (**(void (__thiscall ***)(int, int))DataGlobal_ABE150)(DataGlobal_ABE150, 1);
        DataGlobal_ABE150 = 0;
      }
      return dwNewLong;
}
} }

// ==== BACKFILL 0x00597D50  MapSeedClass::ddtor  cls=MapSeedClass  sig=csp  renamed_refs=0  residual=- ====
bool MapSeedClass::ddtor(char* lpFileName)
{
    return LoadOptions::ddtor(lpFileName);
}

// ==== BACKFILL 0x00597FA0  MapSeedClass::GetCell  cls=MapSeedClass  sig=csp  renamed_refs=0  residual=- ====
wchar_t * MapSeedClass::GetCell()
{
{
    return GetStringCSF(aGuiSavemapmenu, 0, g_Str_File_MapGen_cpp, 5578);
}
}

// ==== BACKFILL 0x00597FC0  MapSeedClass::SetCell  cls=MapSeedClass  sig=csp  renamed_refs=0  residual=- ====
wchar_t * MapSeedClass::SetCell()
{
{
    return GetStringCSF(aGuiDeletemapme, 0, g_Str_File_MapGen_cpp, 5584);
}
}

// ==== BACKFILL 0x00597FE0  MapSeedClass::Validate  cls=MapSeedClass  sig=csp  renamed_refs=0  residual=- ====
wchar_t * MapSeedClass::Validate()
{
{
    return GetStringCSF(aGuiMapsaved, 0, g_Str_File_MapGen_cpp, 5590);
}
}

// ==== BACKFILL 0x00598030  Range_RandomInt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
long long Range_RandomInt(MouseClass * aP0, MapClass * aP1)
{
{
    double v3;
    __int64 result;
    __int64 v5;
    __int64 v6;
    double v7;
    v5 = (unsigned int)((char *)aP1 - (char *)(aP0) + 1);
    v3 = (double)v5;
    LODWORD(v5) = aP0;
    v7 = (double)v5;
    do
  {
    v6 = (unsigned int)Random::State(&g_Randomizer);
    result = Math::RoundToInt((double)v6 * v3 * 2.328306437080797e-10 + v7);
  }
    while ( (unsigned int)result > (unsigned int)aP1 );
    return result;
}
}

// ==== BACKFILL 0x005980A0  sub_5980A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_5980A0::sub_5980A0(int a2)
{
{
    this->M8 = 0;
    *(char *)this = 0;
    this->M12 = 0;
    this->M16 = a2;
    return this;
}
}

// ==== BACKFILL 0x0059B940  Map_Helper_59B940  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double Map_Helper_59B940(MapResourceClass * aP0, short * a1, MapResourceClass * aP2, MapResourceClass * aP3, float a5, MapResourceClass * aP5)
{
{
    int v7;
    int v8;
    int v9;
    unsigned int v10;
    __int64 v11;
    MapResourceClass *v12;
    double v14;
    signed int v15;
    __int64 v16;
    double v17;
    BuildingTypeClass *v18;
    int v19;
    double v20;
    MapResourceClass *aP0a;
    short *a1a;
    MapResourceClass *aP2a;
    MapResourceClass *aP3a;
    if ( *aP2 == DataGlobal_ABE2F0 && *(int *)&aP2[1] == DataGlobal_ABE2F4 && *(int *)&aP2[2] == DataGlobal_ABE2F8 && *(int *)&aP2[3] == DataGlobal_ABE2FC )
  {
    v18 = (BuildingTypeClass *)(*(short *)aP0->__tail_0 - *a1);
    v19 = *(short *)&aP0->__tail_0[2] - *((int*)(a1) + 1);
    return Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)((int)v18 * (int)v18 + v19 * v19)));
  }
    else
  {
    v7 = *(short *)&aP3->__tail_0[2];
    v8 = *a1;
    v9 = *((int*)(a1) + 1);
    a1a = (short *)*(short *)aP3->__tail_0;
    v10 = abs32(((v8 - v9) >> 1) - (((int)a1a - v7) >> 1));
    aP2a = (MapResourceClass *)v10;
    v11 = ((v8 + v9) >> 1) - (((int)a1a + v7) >> 1);
    v12 = (MapResourceClass *)((HIDWORD(v11) ^ v11) - HIDWORD(v11));
    aP3a = v12;
    if ( v10 || v12 )
    {
    v14 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)(v10 * v10 + (int)v12 * (int)v12)));
    v15 = abs32(*(short *)&aP0->__tail_0[2] - *((int*)(a1) + 1));
    v16 = *(short *)aP0->__tail_0 - *a1;
    aP0a = (MapResourceClass *)((HIDWORD(v16) ^ v16) - HIDWORD(v16));
    v20 = (double)(int)aP2a / v14;
    v17 = (double)(int)aP3a / v14;
    if ( (int)aP0a <= v15 )
    aP0a = (MapResourceClass *)v15;
    return (v17 * *(float *)&aP5 + a5 * v20) * (double)(int)aP0a;
    }
    else
    {
    return 0.0;
    }
  }
}
}

// ==== BACKFILL 0x0059D480  sub_59D480  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double sub_59D480(short * a1, short * a2, int a3)
{
{
    int v3;
    int v4;
    float v6;
    v3 = *a1 - *a2;
    v4 = *((int*)(a1) + 1) - *((int*)(a2) + 1);
    v6 = Math::Sqrt((double)(v3 * v3 + v4 * v4));
    return (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 * 10.0 + 0.5 * v6 - (double)a3 * 0.02;
}
}
