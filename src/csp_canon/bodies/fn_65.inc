// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00652960  RadarClass::Construct  cls=RadarClass  sig=csp  renamed_refs=1  residual=q14D9,q14DA ====
namespace gamemd { void* RadarClass::Construct() {
{
      int v2;
      int v3;
      _DWORD *v4;
      int v5;
      int v6;
      int v7;
      _DWORD *v8;
      _DWORD *v9;
      _DWORD *v10;
      _DWORD *v11;
      _DWORD *v12;
      int v13;
      int v14;
      int v16;
      _DWORD *v17;

      RadarClass::RenderSpySatellite();
      v2 = 0;
      this->q11E8 = 0;
      this->q11EC = 0;
      this->q11F0 = 0;
      this->q11F4 = 0;
      this->q11F8 = 0;
      this->q11FC = 0;
      this->q1200 = 0;
      this->q1204 = 0;
      this->q120C = DataGlobal_B048B0;
      this->q1210 = DataGlobal_B048B4;
      this->q1214 = DataGlobal_B048B8;
      v3 = DataGlobal_B048BC;
      this->q121C = 0;
      this->q1218 = v3;
      this->q1220 = 0;
      VectorClass::CellConstructor(this + 1161, 0, 0);
      *(this + 1161) = &vt_DynamicVectorClass_Cell;
      this->q1238 = 10;
      this->q1234 = 0;
      this->q123C = 0;
      this->q1240 = 0;
      this->q1244 = 0;
      this->q1248 = 0;
      this->q124C = 0;
      this->q1250 = 0;
      this->q1254 = 0;
      this->q1258 = 0;
      VectorClass::PointConstructor(0, 0);
      *(this + 1175) = 0;
      this->q1270 = 10;
      this->q126C = 0;
      this->q1274 = 0;
      v4 = this + 1182;
      v5 = 22;
      do
      {
        VectorClass::PointConstructor(0, 0);
        *v4 = 0;
        v4[5] = 10;
        v4[4] = 0;
        v4 += 6;
        --v5;
      }
      while ( v5 );
      this->q1488 = 0;
      this->q148C = 1;
      this->q1490 = 0;
      this->q1494 = 0;
      this->q1498 = 0;
      this->q149C = DataGlobal_B048B0;
      this->q14A0 = DataGlobal_B048B4;
      this->q14A4 = DataGlobal_B048B8;
      v6 = DataGlobal_B048BC;
      this->q14AC = 0;
      this->q14B0 = 0;
      this->q14A8 = v6;
      this->q14B4 = 0;
      this->q14BC = 0;
      this->q14BD = 0;
      this->q14D4 = -1;
      this->IsAvailableNow = 0;
      this->q14D9 = 0;
      this->q14DA = 0;
      this->q14DC = DataGlobal_B048B0;
      this->q14E0 = DataGlobal_B048B4;
      this->q14E4 = DataGlobal_B048B8;
      v7 = DataGlobal_B048BC;
      this->q14FC = 0;
      this->q14E8 = v7;
      this->q1500 = Timer::GetTicks();
      this->q1508 = 0;
      *this = &vt_RadarClass;
      v8 = __2_YAPAXI_Z(0x10u);
      v9 = v8;
      if ( v8 )
      {
        v8[1] = Radar::PixelIndex;
        v8[2] = 256;
        v8[3] = 10;
        v10 = __2_YAPAXI_Z(0x1804u);
        if ( v10 )
        {
          v11 = v10 + 1;
          *v10 = 256;
          v17 = v10 + 1;
          v16 = 256;
          do
          {
            RadarHashVector::Construct(0, 0);
            v11 += 6;
            --v16;
          }
          while ( v16 );
          v12 = v17;
        }
        else
        {
          v12 = 0;
        }
        v13 = v9[2];
        *v9 = v12;
        v14 = 0;
        if ( v13 > 0 )
        {
          do
          {
            ++v14;
            *(_DWORD *)(*v9 + v2 + 20) = 10;
            v2 += 24;
          }
          while ( v14 < v9[2] );
        }
      }
      else
      {
        v9 = 0;
      }
      this->q1258 = v9;
      this->q1270 = 500;
      AudioController::Init(this + 1328);
      return this;
}
} }

// ==== BACKFILL 0x00652CD0  sub_652CD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_652CD0::sub_652CD0()
{
{
    this->M5292 = 4;
    this->M5372 = 25;
}
}

// ==== BACKFILL 0x00652D90  RadarClass::Destru_vt50  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
void RadarClass::Destru_vt50()
{
{
    if ( DataGlobal_B048F9 )
  {
    __3_YAXPAX_Z(DataGlobal_B048E0);
    DataGlobal_B048F9 = 0;
  }
    DataGlobal_B048E0 = 0;
    if ( DataGlobal_B048F8 )
  {
    __3_YAXPAX_Z(DataGlobal_B048AC);
    DataGlobal_B048F8 = 0;
  }
    DataGlobal_B048AC = 0;
}
}

// ==== BACKFILL 0x00652DE0  RadarClass::Destru_vt07  cls=RadarClass  sig=csp  renamed_refs=0  residual=q14D9 ====
namespace gamemd { void RadarClass::Destru_vt07() {
{
      int v2;

      DisplayClass::SetSize(this);
      Debug::Log();
      this->q14AC = 0;
      this->q14B0 = 0;
      this->q14BD = 0;
      this->q14BC = 0;
      this->q14FC = 0;
      this->IsAvailableNow = 0;
      v2 = this->q1224;
      this->q14D9 = 1;
      (*(void (**)(void))(v2 + 12))();
      (*(void (__thiscall **)(int))(this->q125C + 12))(this + 4700);
      Debug::Log();
}
} }

// ==== BACKFILL 0x00653010  SidebarClass::CreateScrollButtons  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
void SidebarClass::CreateScrollButtons()
{
{
    DisplayClass::ddtor();
    if ( !g_ArmageddonMode )
  {
    DataGlobal_B0499C = 242;
    DataGlobal_B049C4 = 1;
    DataGlobal_B049C8 = g_SidebarConfig;
    DataGlobal_B049A5 = 0;
    DataGlobal_B049A8 = 0;
    DataGlobal_B04998 = 5;
    Rect_Point::Set(DataGlobal_B04978, DataGlobal_B04A00, DataGlobal_B04A04);
    ShapeButton::SetShape((int)DataGlobal_B04978, (int)DataGlobal_B048E0, 0, 0);
    VectorClass_ptr_ConvertClass::MarkDirty(DataGlobal_B04978);
    DataGlobal_B04960 = g_SidebarConfig;
    DataGlobal_B04934 = 243;
    DataGlobal_B0495C = 1;
    DataGlobal_B0493D = 0;
    DataGlobal_B04940 = 0;
    DataGlobal_B04930 = 5;
    Rect_Point::Set(DataGlobal_B04910, DataGlobal_B048C8, DataGlobal_B048CC);
    ShapeButton::SetShape((int)DataGlobal_B04910, (int)DataGlobal_B048AC, 0, 0);
    VectorClass_ptr_ConvertClass::MarkDirty(DataGlobal_B04910);
  }
}
}

// ==== BACKFILL 0x00653750  nullsub_220  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_220(int a1, int a2)
{
  ;
}

// ==== BACKFILL 0x00653F50  CellClass::DrawWrapper  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
void CellClass::DrawWrapper(void* a1, int a2, int a3, int a4)
// 0x653f50
{
UpdateTerrainAndWaypoints(a1, a2, a3, a4);
/* ASM:
mov     eax, [esp+arg_C]
mov     edx, [esp+arg_8]
push    eax
mov     eax, [esp+4+arg_4]
push    edx
mov     edx, [esp+8+arg_0]
push    eax
push    edx
call    CellClass__UpdateTerrainAndWaypoints
retn    10h
*/
}

// ==== BACKFILL 0x00653F70  TacticalClass::SetPositionThunk  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::SetPositionThunk(MouseClass * aP0)
{
{
    return Tactical::SetTacticalPosition(*(int *)&DataGlobal_87C374[44976], (IUnknown *)aP0);
}
}

// ==== BACKFILL 0x00654EA0  RadarClass::UpdateBlips  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RadarClass::UpdateBlips(int a1, void* a2) {
{
      _DWORD *v3;
      int v4;
      int result;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int *v11;
      int v12;
      int v13;
      int v14;
      int v15;
      int v16;
      int v17;
      char v18;
      _DWORD *v19;
      int v20;
      __int16 v21;
      char v22;
      __int16 v23;
      char v24;
      _DWORD *v25;
      int v26;
      int v27;
      int v28;
      int v29;
      int v30;
      int v31[4];

      v3 = this;
      v25 = this;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      LayerClass::CellIteratorReset(this);
      v4 = LayerClass::CellIteratorNext(&DataGlobal_87F7E8);
      result = DataGlobal_87F8E4;
      v6 = 2 * DataGlobal_87F8E4 - g_Cell_PositionLUT + 1;
      v26 = v6;
      if ( v4 )
      {
        while ( 1 )
        {
          v7 = *(__int16 *)(v4 + 36);
          v8 = *(__int16 *)(v4 + 38);
          v9 = v3[1318];
          if ( v8 + v7 >= v9 )
          {
            v10 = v7 - v8 - v6;
            v27 = v10;
            v28 = v7 + v8 - v9;
            v29 = 2;
            v30 = 1;
            v11 = ClipRectIntersection(v31, &v27, a3, 0, 0);
            v12 = *v11;
            v27 = *v11;
            v13 = v11[1];
            v28 = v13;
            v29 = v11[2];
            v14 = v11[3];
            v30 = v14;
            if ( v29 > 0 && v14 > 0 )
            {
              v15 = v12 + v13 * *(_DWORD *)(a2 + 8);
              GetCellRadarColors(v4, (int)&v21, (int)&v23);
              if ( v10 == *a3 - 1 )
              {
                v16 = 3 * v15 + v25[1167];
                *(_WORD *)v16 = v23;
                *(_BYTE *)(v16 + 2) = v24;
              }
              else
              {
                if ( v10 == a3[2] + *a3 - 1 )
                {
                  v17 = 3 * v15 + v25[1167];
                  *(_WORD *)v17 = v21;
                  v18 = v22;
                }
                else
                {
                  v19 = v25;
                  v20 = v25[1167] + 3 * v15;
                  *(_WORD *)v20 = v21;
                  *(_BYTE *)(v20 + 2) = v22;
                  v17 = v19[1167] + 3 * v15 + 3;
                  *(_WORD *)v17 = v23;
                  v18 = v24;
                }
                *(_BYTE *)(v17 + 2) = v18;
              }
            }
          }
          result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8);
          v4 = result;
          if ( !result )
            break;
          v3 = v25;
          v6 = v26;
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x00655990  RadarClass::Process  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RadarClass::Process() {
{
      int v1;
      _DWORD *v2;
      _DWORD *v3;
      _DWORD *v4;
      int v5;
      _DWORD *v6;
      _DWORD *v7;
      _DWORD *v8;
      _DWORD *v9;
      int v10;
      int v11;
      int v12;
      int result;

      v1 = (int)this;
      v2 = (_DWORD *)this->q1258;
      if ( v2 )
      {
        if ( *v2 )
          (**(void (__thiscall ***)(_DWORD, int))*v2)(*v2, 3);
        __3_YAXPAX_Z(v2);
      }
      v3 = __2_YAPAXI_Z(0x10u);
      v4 = v3;
      if ( v3 )
      {
        v5 = 256;
        v3[1] = Radar::PixelIndex;
        v3[2] = 256;
        v3[3] = 10;
        v6 = __2_YAPAXI_Z(0x1804u);
        if ( v6 )
        {
          v7 = v6 + 1;
          *v6 = 256;
          v8 = v6 + 1;
          do
          {
            RadarHashVector::Construct(v8, 0, 0);
            v8 += 6;
            --v5;
          }
          while ( v5 );
          v9 = v7;
          v1 = (int)this;
        }
        else
        {
          v9 = 0;
        }
        v10 = v4[2];
        *v4 = v9;
        v11 = 0;
        if ( v10 > 0 )
        {
          v12 = 0;
          do
          {
            ++v11;
            *(_DWORD *)(*v4 + v12 + 20) = 10;
            v12 += 24;
          }
          while ( v11 < v4[2] );
        }
      }
      else
      {
        v4 = 0;
      }
      *(_DWORD *)(v1 + 4696) = v4;
      Shroud::ProcessCellVisibility(&DataGlobal_87F7E8, (int)&DataGlobal_87F8E4);
      RadarClass::RecreateSurface(v1, v1);
      for ( result = 0; result < g_SidebarState; *(_BYTE *)(*((_DWORD *)g_TechnoClass_Count + result - 1) + 1059) = 0 )
        ++result;
      return result;
}
} }

// ==== BACKFILL 0x00655A90  TacticalClass::FreeResources  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void TacticalClass::FreeResources() {
{
      void (__thiscall ***v2)(_DWORD, int); // ecx
      void (__thiscall ***v3)(_DWORD, int); // ecx
      _DWORD *v4;

      v2 = *(void (__thiscall ****)(_DWORD, int))(this + 4636);
      if ( v2 )
      {
        (**v2)(v2, 1);
        this->q121C = 0;
      }
      v3 = *(void (__thiscall ****)(_DWORD, int))(this + 4640);
      if ( v3 )
      {
        (**v3)(v3, 1);
        this->q1220 = 0;
      }
      if ( this->q123C )
      {
        __3_YAXPAX_Z(*(void **)(this + 4668));
        this->q123C = 0;
      }
      v4 = *(_DWORD **)(this + 4696);
      if ( v4 )
      {
        if ( *v4 )
          (**(void (__thiscall ***)(_DWORD, int))*v4)(*v4, 3);
        __3_YAXPAX_Z(v4);
        this->q1258 = 0;
      }
      if ( this->q1274 )
      {
        __3_YAXPAX_Z(*(void **)(this + 4724));
        this->q1274 = 0;
      }
}
} }

// ==== BACKFILL 0x00655B20  RadarClass::InitializeHashTable  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void RadarClass::InitializeHashTable() {
{
      _DWORD *v2;
      _DWORD *v3;
      int v4;
      _DWORD *v5;
      _DWORD *v6;
      _DWORD *v7;
      int v8;
      int v9;
      int v10;
      int i;
      int v12;
      _DWORD *v13;

      this->q121C = 0;
      this->q1220 = 0;
      this->q123C = 0;
      this->q1258 = 0;
      this->q1274 = 0;
      v2 = __2_YAPAXI_Z(0x10u);
      v3 = v2;
      if ( v2 )
      {
        v4 = 256;
        v2[1] = Radar::PixelIndex;
        v2[2] = 256;
        v2[3] = 10;
        v5 = __2_YAPAXI_Z(0x1804u);
        if ( v5 )
        {
          *v5 = 256;
          v13 = v5 + 1;
          v6 = v5 + 1;
          do
          {
            RadarHashVector::Construct(v6, 0, 0);
            v6 += 6;
            --v4;
          }
          while ( v4 );
          v7 = v13;
        }
        else
        {
          v7 = 0;
        }
        v8 = v3[2];
        *v3 = v7;
        v9 = 0;
        if ( v8 > 0 )
        {
          v10 = 0;
          do
          {
            ++v9;
            *(_DWORD *)(*v3 + v10 + 20) = 10;
            v10 += 24;
          }
          while ( v9 < v3[2] );
        }
      }
      else
      {
        v3 = 0;
      }
      this->q1258 = (int)v3;
      Shroud::ProcessCellVisibility(&DataGlobal_87F7E8, (int)&DataGlobal_87F8E4);
      RadarClass::RecreateSurface((int)this, (int)this);
      for ( i = 0; i < g_SidebarState; *(_BYTE *)(*((_DWORD *)g_TechnoClass_Count + i - 1) + 1059) = 0 )
        ++i;
      if ( this->q14B0 == 3 )
      {
        v12 = this->q14B4;
        this->q14AC = 5;
        RadarClass::SetViewMode((int)this, v12, 0);
        RadarClass::SetGlobal((void *)g_RulesClass_Instance->DetailMinFrameRateNormal);
      }
}
} }

// ==== BACKFILL 0x006563B0  RadarClass::UpdateFoundationShapesCustom  cls=RadarClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { int RadarClass::UpdateFoundationShapesCustom() {
{
      float *v1;
      int v2;
      float *v3;
      int v4;
      double v5;
      int v6;
      double v7;
      double v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;
      int v14;
      int v15;
      int v16;
      int v19;
      int v20;
      int v21;
      int v22;
      int v23;

      v1 = this;
      v2 = 0;
      v3 = this + 1182;
      v22 = 0;
      while ( 1 )
      {
        (*(void (__thiscall **)(float *))(*(_DWORD *)v3 + 12))(v3);
        v4 = *(int *)((char *)DataGlobal_819310 + v2);
        if ( *(int *)((char *)DataGlobal_8192B8 + v2) == 1 )
        {
          v5 = v1[1314] + 0.5;
          if ( v5 < 1.0 )
            v5 = 1.0;
          v6 = Math::RoundToInt(v5);
          v19 = v6;
        }
        else
        {
          v7 = (double)*(int *)((char *)DataGlobal_8192B8 + v2) * v1[1314] + 0.5;
          if ( v7 < 2.0 )
            v7 = 2.0;
          v19 = Math::RoundToInt(v7);
          v6 = v19;
        }
        if ( v4 == 1 )
        {
          v8 = this->q1488 + 0.5;
          if ( v8 < 1.0 )
            v8 = 1.0;
        }
        else
        {
          v8 = (double)v4 * this->q1488 + 0.5;
          if ( v8 < 2.0 )
            v8 = 2.0;
        }
        v9 = Math::RoundToInt(v8);
        v10 = v9;
        v11 = 0;
        v20 = v9;
        v12 = v9 + v6 - 1;
        v23 = v12;
        if ( v12 > 0 )
        {
          v21 = 0;
          while ( 1 )
          {
            if ( v11 >= v10 )
              v9 = v11 - 2 * v10 + 2;
            else
              v9 = v21;
            if ( v11 >= v6 )
              v13 = 2 * v6 - v11 - 2;
            else
              v13 = v11;
            v14 = v9;
            if ( v9 <= v13 )
            {
              do
              {
                v15 = *((_DWORD *)v3 + 2);
                if ( *((_DWORD *)v3 + 4) < v15
                  || ((LOBYTE(v9) = *((_BYTE *)v3 + 13), (_BYTE)v9) || !v15)
                  && (v9 = *((_DWORD *)v3 + 5), v9 > 0)
                  && (LOBYTE(v9) = (*(int (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)v3 + 8))(v3, v15 + v9, 0),
                      (_BYTE)v9) )
                {
                  v9 = *((_DWORD *)v3 + 4);
                  v16 = *((_DWORD *)v3 + 1);
                  *((_DWORD *)v3 + 4) = v9 + 1;
                  *(_DWORD *)(v16 + 8 * v9) = v14;
                  *(_DWORD *)(v16 + 8 * v9 + 4) = v11;
                }
                ++v14;
              }
              while ( v14 <= v13 );
              v10 = v20;
              v12 = v23;
            }
            ++v11;
            --v21;
            if ( v11 >= v12 )
              break;
            v6 = v19;
          }
          v2 = v22;
        }
        v2 += 4;
        v3 += 6;
        v22 = v2;
        if ( v2 >= 88 )
          break;
        v1 = this;
      }
      return v9;
}
} }

// ==== BACKFILL 0x00656580  Diplomacy::GetField  cls=Diplomacy  sig=csp  renamed_refs=0  residual=- ====
char * Diplomacy::GetField(BuildingTypeClass * aP1)
{
{
    return this + 24 * aP1->Foundation + 4728;
}
}

// ==== BACKFILL 0x00656DF0  HouseClass::SetRadarVisibility  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void HouseClass::SetRadarVisibility(int a1) {
{
      if ( this->q14D8 != a2 )
      {
        this->q14D8 = a2;
        Debug::Log();
        if ( this->q14B0 == 1 )
          RadarClass::Toggle(this, a2, (MouseClass *)1);
        else
          RadarClass::SetViewMode(this, 1, (MouseClass *)1);
      }
}
} }

// ==== BACKFILL 0x00656E50  RadarClass::IsActiveMode  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RadarClass::IsActiveMode() {
{
      int result;

      if ( this->q14B0 != 2 )
        return 0;
      result = 1;
      if ( this->q14AC != 1 )
        return 0;
      return result;
}
} }

// ==== BACKFILL 0x00656E90  RadarClass::SetFlag  cls=RadarClass  sig=csp  renamed_refs=0  residual=q14D9,q14DA ====
namespace gamemd { bool RadarClass::SetFlag() {
{
      char v2;
      BOOL result;

      v2 = this->q14DA;
      result = 1;
      this->q14D9 = 1;
      if ( !v2 )
        result = a2 != 0;
      this->q14DA = result;
      return result;
}
} }

// ==== BACKFILL 0x006578F0  TacticalClass::ProcessChronoEffect  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void TacticalClass::ProcessChronoEffect() {
{
      int v2;
      int v3;
      int **v4;
      _DWORD *v5;

      v2 = this->q14B8;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          if ( v3 != 1 )
            return;
          if ( g_AsyncIOState )
          {
            if ( !sub_408410() )
              return;
            if ( g_AsyncIOState )
            {
              ChronoScreenEffect::DecrementCounter();
              Map_Process();
            }
          }
          RadarClass::SetViewMode(this, 3, 0);
          v4 = (int **)(this + 5312);
          Mixer::ReleaseChannel(v4);
          v5 = (_DWORD *)PlayVocClass(g_RulesClass_Instance->?[1], 0x2000, 1.0, 0);
          SetAudioSource((int)v4, v5, 0);
          RadarClass::SetGlobal((void *)g_RulesClass_Instance->DetailMinFrameRateMovie);
        }
        else if ( globalHelper_0532A0(*(std::codecvt_base **)(this + 5332)) )
        {
          if ( g_AsyncIOState )
            sub_408390();
          this->q14B8 = 2;
        }
      }
      else
      {
        ThemeClass::ClearQueues();
        UpdateThemeManager(this->q14D4, 0, 3);
        Map_Process_753570();
        this->q14B8 = 1;
      }
}
} }

// ==== BACKFILL 0x00658770  RadarClass::Destru_vt33  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* RadarClass::Destru_vt33(int a1) {
    return DisplayClass::Draw(a1);

/* ASM:
mov     eax, [esp+arg_0]
push    eax
call    DisplayClass__Draw
retn    4
*/
} }

// ==== BACKFILL 0x00658780  TacticalClass::renderOverlay  cls=RTacticalClass@RadarClass  sig=csp  renamed_refs=0  residual=- ====
void TacticalClass::renderOverlay(int * Block, char a2)
{
{
    GadgetClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

/* ASM:
push    esi
mov     esi, ecx
call    GadgetClass__Dtor
test    [esp+4+arg_0], 1
jz      short loc_658798
push    esi             ; Block
call    ??3_YAXPAX_Z
add     esp, 4

loc_658798:                             ; CODE XREF: TacticalClass__renderOverlay+D↑j
mov     eax, esi
pop     esi
retn    4
*/
}

// ==== BACKFILL 0x006587A0  RadarClass::Destru_vt04  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* RadarClass::Destru_vt04(int a2) {
{
    int *v3;
    int v4;
    void *v5;
    void *v6;
    void *v7;
    *(void**)this = &vt_RadarClass;
    AudioFileClass::Release(this + 1328);
    TacticalClass::FreeResources((int)this);
    v3 = this + 1314;
    v4 = 22;
    do
  {
    v5 = (void *)*(v3 - 5);
    v3 -= 6;
    *v3 = &vt_VectorClass_Point2D;
    if ( v5 && *((char *)(v3) + 13) )
    {
    __3_YAXPAX_Z(v5);
    v3[1] = 0;
    }
    --v4;
    *((char *)(v3) + 13) = 0;
    v3[2] = 0;
  }
    while ( v4 );
    v6 = (void *)*(this + 1176);
    *(this + 1175) = &vt_VectorClass_Point2D;
    if ( v6 && *((char *)(this) + 4713) )
  {
    __3_YAXPAX_Z(v6);
    *(this + 1176) = 0;
  }
    *((char *)(this) + 4713) = 0;
    *(this + 1177) = 0;
    v7 = (void *)*(this + 1162);
    *(this + 1161) = &vt_VectorClass_Cell;
    if ( v7 && *((char *)(this) + 4657) )
  {
    __3_YAXPAX_Z(v7);
    *(this + 1162) = 0;
  }
    *((char *)(this) + 4657) = 0;
    *(this + 1163) = 0;
    MapClass::Destruct((char *)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (RadarClass *)this;
}
} }

// ==== BACKFILL 0x00658D60  VectorClass::PointConstructor  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * VectorClass::PointConstructor(MapClass * aP1, MapClass * aP2)
{
{
    int v5;
    this->Items = (void*)(0);
    this->Capacity = aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_Point2D;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->Items = (void*)(aP2);
    return this;
    }
    v5 = __2_YAPAXI_Z(8 * (int)aP1);
    if ( v5 )
    {
    this->Items = (void*)(v5);
    this->IsAllocated = 1;
    return this;
    }
    this->IsAllocated = 1;
    this->Items = (void*)(0);
  }
    return this;
}
}

// ==== BACKFILL 0x00659470  RadBeam::drawSelectionBox  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
char RadBeam::drawSelectionBox(uint8_t* a2) {
    // G21 L6: 3 字节 RGB 拷入 this->color（色表槽 6192/6246/6249），返回末字节；
    // IDA 写经局部 v2 中转（v2=this+32），C++ 忠实保留同构数据流
    uint8_t* v2;
    char result;

    v2 = this->color;
    v2[0] = a2[0];
    v2[1] = a2[1];
    result = a2[2];
    v2[2] = result;
    return result;
}

// ==== BACKFILL 0x00659490  RadBeam::drawHealthBar  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int RadBeam::drawHealthBar(int a2) {
    this->memberAtOffset12 = a2;
    return a2;
}

// ==== BACKFILL 0x006594A0  RadBeam::drawPipScale  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int RadBeam::drawPipScale(int* a2) {
    // G21 L6: 3 dwords（屏幕坐标）拷入 +0x24；IDA 写经局部 v2 中转，忠实保留
    int* v2;
    int result;

    v2 = this->memberAtOffset36;
    v2[0] = a2[0];
    v2[1] = a2[1];
    result = a2[2];
    v2[2] = result;
    return result;
} } }

// ==== BACKFILL 0x006594C0  RadBeam::drawSpawnPips  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int RadBeam::drawSpawnPips(int* a2) {
    // G21 L6: 3 dwords（屏幕坐标）拷入 +0x30；IDA 写经局部 v2 中转，忠实保留
    int* v2;
    int result;

    v2 = this->memberAtOffset48;
    v2[0] = a2[0];
    v2[1] = a2[1];
    result = a2[2];
    v2[2] = result;
    return result;
} } }

// ==== BACKFILL 0x006594E0  RadBeam::drawAmmoPips  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int RadBeam::drawAmmoPips(int a2) {
    // G21 L6: 写 +0x3C（调用方传 15）；清除旧半成品的误词汇体（ambientSoundController）
    this->memberAtOffset60 = a2;
    return a2;
} } }

// ==== BACKFILL 0x006594F0  RadBeam::drawTiberiumPips  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int RadBeam::drawTiberiumPips(int a2, int a3) {
    // G21 L6: 写 +0x40 / +0x44（调用方传 0 / 0x40500000）
    this->memberAtOffset64 = a2;
    this->memberAtOffset68 = a3;
    return a2;
} } }

// ==== BACKFILL 0x00659510  SpreadRadiationAreaEffect_Helper  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_659510::sub_659510(int a2, int a3)
{
{
    this->M72 = a2;
    this->M76 = a3;
    return a2;
}
}

// ==== BACKFILL 0x00659530  SpreadRadiationAreaEffect_Helper_659530  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_659530::sub_659530(int a2)
{
{
    this->M80 = a2;
    return a2;
}
}

// ==== BACKFILL 0x00659540  RadBeam::drawMindControlPips  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int RadBeam::drawMindControlPips(int a2) {
    this->memberAtOffset84 = a2;
    return a2;
}

// ==== BACKFILL 0x00659550  RadBeam::drawPassengerPips  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
char RadBeam::drawPassengerPips(char a2) {
    this->memberAtOffset88 = a2;
    return a2;
}

// ==== BACKFILL 0x00659560  sub_659560  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_659560::sub_659560()
{
{
    this->M9 = 0;
}
}

// ==== BACKFILL 0x00659570  sub_659570  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_659570::sub_659570()
{
{
    return this->M9;
}
}

// ==== BACKFILL 0x006599C0  sub_6599C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_6599C0::sub_6599C0()
{
{
    int v2;
    int v3;
    int v4;
    v2 = this->M48 - this->M36;
    v3 = this->M56 - this->M44;
    v4 = this->M52 - this->M40;
    this->M92 = v2;
    this->M96 = v4;
    this->M100 = v3;
    *(double *)(this + 104) = Math::Sqrt((double)(this->M100 *(void**)this->M100 + this->M96 *(void**)this->M96 + this->M92 *(void**)this->M92));
}
}

// ==== BACKFILL 0x00659A30  sub_659A30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
short E4Recv_659A30::sub_659A30()
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    double v6;
    short *v7;
    int v8;
    short result;
    char v10;
    v2 = Math::RoundToInt(*(double *)(this + 104) / *(double *)(this + 24));
    v3 = this->M92;
    v4 = this->M96;
    v5 = this->M100;
    this->M140 = v2;
    if ( v2 )
  {
    v3 /= v2;
    v4 /= v2;
    v5 /= v2;
  }
    v6 = (double)this->M124 / (double)this->M60;
    this->M144 = v3;
    this->M148 = v4;
    this->M152 = v5;
    this->M156 = this->M36;
    this->M160 = this->M40;
    this->M164 = this->M44;
    v7 = (short *)(this + 32);
    v8 = this + 192;
    result = *v7;
    v10 = *((char *)(v7) + 2);
    *(double *)(v8 - 64) = v6 * *(double *)(v8 - 128);
    *(short *)v8 = result;
    *(char *)(v8 + 2) = v10;
    return result;
}
}

// ==== BACKFILL 0x0065AAC0  RadioClass::ExecuteAction  cls=RadioClass  sig=csp  renamed_refs=0  residual=- ====
int RadioClass::ExecuteAction(TimerStruct * aP1, IUnknown * aP2)
{
{
    BaseClass *result;
    int i;
    int v6;
    TimerStruct *v7;
    int *v8;
    Object::Unlink((AnimClass *)this);
    result = *(BaseClass **)(this + 232);
    for ( i = 0; i < (int)result; ++i )
  {
    v6 = this->flashing;
    v7 = *(TimerStruct **)(v6 + 4 * i);
    v8 = (int *)(v6 + 4 * i);
    if ( v7 == aP1 )
    {
    if ( (char)aP2 )
    *v8 = 0;
    }
    result = *(BaseClass **)(this + 232);
  }
    return (int)result;
}
}

// ==== BACKFILL 0x0065AC40  RadioClass::SaveState  cls=RadioClass  sig=csp  renamed_refs=0  residual=- ====
int RadioClass::SaveState(int * a0, RadioClass * aP1, int aP2)
{
{
    int result;
    int v4;
    int v5;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)a0, (ObjectTypeClass *)aP1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
  {
    v4 = *(int *)aP1->__pad_0;
    aP2 = *((int*)(a0) + 58);
    result = (*(int (__stdcall **)(RadioClass *, int *, int, int))(v4 + 16))(aP1, &aP2, 4, 0);
    if ( result >= 0 )
    {
    v5 = 0;
    if ( aP2 <= 0 )
      {
    return 0;
      }
    else
      {
    while ( 1 )
        {
    result = (*(int (__stdcall **)(RadioClass *, int, int, int))(*(int *)aP1->__pad_0 + 16))( aP1, *((int*)(a0) + 57) + 4 * v5, 4, 0);
    if ( result < 0 )
    break;
    if ( ++v5 >= aP2 )
    return 0;
        }
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0065B2F0  RadSiteClass::Constructor  cls=RadSiteClass  sig=csp  renamed_refs=6  residual=- ====
namespace gamemd { void RadSiteClass::Constructor() {
{
    int *v2;
    AbstractClass *v3;
    LightSourceClass *v4;
    int v5;
    void **v6;
    *(void**)this = vt_RadSiteClass;
    this->vtable2 = (unsigned int)vt_RadSiteClass;
    this->vtable3 = (unsigned int)vt_RadSiteClass;
    this->vtable4 = &vt_RadSiteClass;
    v2 = CellCoord::To_CellObj(&DataGlobal_87C374[13428], (short *)(this) + 32);
    TerrainClass::SetFieldF8(v2, 0);
    LOBYTE(v3) = 1;
    AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, v3);
    v4 = (LightSourceClass *)this->LightSource;
    if ( v4 )
  {
    (*(void (__thiscall **)(LightSourceClass *, int))(*(int *)v4->vtable1 + 32))(v4, 1);
    this->LightSource = 0;
  }
    v6 = this;
    v5 = ((int (__thiscall *)(DynamicVector **, void ***))RadSiteClass_Array->field_10)(&RadSiteClass_Array, &v6);
    if ( v5 != -1 && v5 < DataGlobal_B04BE0 && v5 < --DataGlobal_B04BE0 )
  {
    do
    {
    ++v5;
    *(int *)&DataGlobal_B04BD4->vtable1[4 * v5 - 4] = *(int *)&DataGlobal_B04BD4->vtable1[4 * v5];
    }
    while ( v5 < DataGlobal_B04BE0 );
  }
    AbstractClass::DTOR(this);
}
} }

// ==== BACKFILL 0x0065B3A0  RadSiteClass::StubReturn116  cls=RadSiteClass  sig=csp  renamed_refs=0  residual=- ====
int RadSiteClass::StubReturn116()
{
return 116;
}

// ==== BACKFILL 0x0065B3B0  RadSiteClass::PowerDrainUpdate  cls=RadSiteClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RadSiteClass::PowerDrainUpdate(int a1) {
{
    return AbstractClass::ProcessPower((#378 *)this);
}
} }

// ==== BACKFILL 0x0065B3C0  RadSiteClass::StubReturn69  cls=RadSiteClass  sig=csp  renamed_refs=0  residual=- ====
int RadSiteClass::StubReturn69()
{
return 69;
}

// ==== BACKFILL 0x0065B3D0  RadSiteClass::SaveLoad_Prefix  cls=RadSiteClass  sig=csp  renamed_refs=7  residual=- ====
int RadSiteClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{
{
    AbstractClass *Prefix_0;
    IUnknown *v3;
    Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( (int)Prefix_0 >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    v3 = *(IUnknown **)&HouseClass_Player[45112];
    *(int *)&aP0[1].vtable1[12] = 0;
    *(int *)&aP0[1].vtable1[4] = v3;
    aP0[1].uniqueId = *(int *)&HouseClass_Player[45112];
    aP0[1].nextArrayIndex = 0;
    *(int *)aP0->vtable1 = (unsigned int)vt_RadSiteClass;
    *(int *)&aP0->vtable1[4] = (unsigned int)vt_RadSiteClass;
    *(int *)&aP0->vtable1[8] = (unsigned int)vt_RadSiteClass;
    *(int *)&aP0->vtable1[12] = &vt_RadSiteClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1]);
  }
    return (int)Prefix_0->vtable1;
}
}

// ==== BACKFILL 0x0065B450  RadSiteClass::SaveLoad_Prefix_0  cls=RadSiteClass  sig=csp  renamed_refs=0  residual=- ====
int RadSiteClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}

// ==== BACKFILL 0x0065B470  RadSiteClass::ddtor  cls=RadSiteClass  sig=csp  renamed_refs=0  residual=- ====
int RadSiteClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1090836288;
  a2[1] = 299095303;
  a2[2] = -1610598260;
  a2[3] = 1153315785;
  return 0;
}

// ==== BACKFILL 0x0065B4B0  RadSiteClass::GetSpread  cls=RadSiteClass  sig=csp  renamed_refs=0  residual=- ====
int RadSiteClass::GetSpread() const {
    return this->Spread;
}

// ==== BACKFILL 0x0065BED0  RadSiteClass::ProcessEvent  cls=RadSiteClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* RadSiteClass::ProcessEvent(int a2) {
{
    RadSiteClass::Constructor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (RadSiteClass *)this;
}
} }

// ==== BACKFILL 0x0065C2E0  AbstractClass::checkTeamMembership  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::checkTeamMembership() {
{
      if ( this->vt6() )
        return 0;
      this->field_10 = 0;
      return 1;
}
} } }

// ==== BACKFILL 0x0065C320  AbstractClass::updateTeamState  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
char AbstractClass::updateTeamState()
{
return 1;
}

// ==== BACKFILL 0x0065C330  AbstractClass::processTeamOrder  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
char AbstractClass::processTeamOrder()
{
{
    return (unsigned char)this->referenceCount;
}
}

// ==== BACKFILL 0x0065C340  AbstractClass::dispatchTeamEvent  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::dispatchTeamEvent(int a2, int a3) {
{
      return this->vt7(a3);
}
} } }

// ==== BACKFILL 0x0065C4A0  AbstractClass::checkTeamObjective  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::checkTeamObjective()
{
{
    return this->field_10;
}
}

// ==== BACKFILL 0x0065C540  AbstractClass::resetTeamState  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::resetTeamState()
{
{
    this->referenceCount = 0;
}
}

// ==== BACKFILL 0x0065C550  nullsub_0_5  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
char * RAMFileClass::nullsub_0_5()
{
{
    return &DataGlobal_830620[36892];
}
}

// ==== BACKFILL 0x0065C570  nullsub_0_7  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
int nullsub_0_7()
{
return 0;
}

// ==== BACKFILL 0x0065C580  nullsub_0_8  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
char nullsub_0_8()
{
return 1;
}

// ==== BACKFILL 0x0065C590  nullsub_0_9  cls=RAMFileClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_0_9()
{
  ;
}

// ==== BACKFILL 0x0065C5F0  FileClass::StubReturnFalse  cls=FileClass  sig=csp  renamed_refs=0  residual=- ====
int FileClass::StubReturnFalse()
{
return 0;
}

// ==== BACKFILL 0x0065C600  FileClass::Stub  cls=FileClass  sig=csp  renamed_refs=0  residual=- ====
char FileClass::Stub(int a1)
{
return 0;
}

// ==== BACKFILL 0x0065C610  AbstractClass::processAITrigger  cls=FileClass  sig=csp  renamed_refs=0  residual=- ====
FileClass * AbstractClass::processAITrigger(char a2)
{
{
    *(void**)this = &vt_FileClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (FileClass *)this;
}
}

// ==== BACKFILL 0x0065C890  sub_65C890  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_65C890::sub_65C890(int a2, int a3)
{
{
    *(void**)this = a2;
    this->M4 = a3;
    return this;
}
}

// ==== BACKFILL 0x0065CA00  RawFileClass::Dtor  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
void RawFileClass::Dtor()
{
{
    int v2;
    DWORD LastError;
    int v4;
    *(void**)this = (int)&vt_RawFileClass;
    if ( (unsigned char)RawFileClass::Write() )
  {
    if ( !CloseHandle((HANDLE)this->FileTimeDateLo) )
    {
    v2 = *(void**)this;
    v4 = this->FileNameAllocated;
    LastError = GetLastError();
    (*(void (__thiscall **)(int *, DWORD, int, int))(v2 + 64))(this, LastError, 0, v4);
    }
    this->FileTimeDateLo = -1;
  }
    if ( this->CacheReadAhead && this->FileNameAllocated )
  {
    free((void *)this->FileNameAllocated);
    this->FileNameAllocated = 0;
    this->CacheReadAhead = 0;
  }
    *(void**)this = (int)&vt_FileClass;
}
}

// ==== BACKFILL 0x0065CA70  BufferIOFileClass::StubReturnFalse  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
void BufferIOFileClass::StubReturnFalse(int a1, int a2, int a3)
{
  ;
}

// ==== BACKFILL 0x0065CAC0  FileClass::SetName  cls=RawFileClass  sig=csp  renamed_refs=5  residual=- ====
namespace gamemd { void* FileClass::SetName(void* a1) {
{
      void *v3;
      char *result;

      v3 = (void *)this->FileNameAllocated;
      if ( v3 && this->q020 )
      {
        free(v3);
        this->FileNameAllocated = 0;
        this->q020 = 0;
      }
      if ( !Source )
        return 0;
      this->Handle = 0;
      this->FileName = -1;
      result = _strdup(Source);
      this->FileNameAllocated = result;
      if ( result )
      {
        this->q020 = 1;
      }
      else
      {
        this->vt16(12, 0, Source);
        return 0;
      }
      return result;
}
} }

// ==== BACKFILL 0x0065CB30  RawFileClass::Close  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
int RawFileClass::Close(int a2, int a3)
{
{
    this->SetName(a2);
    return this->Open2(a3);
}
}

// ==== BACKFILL 0x0065D1F0  FileClass::GetDosTimestamp  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int FileClass::GetDosTimestamp() {
{
    WORD FatDate[2];
    WORD FatTime[2];
    struct _BY_HANDLE_FILE_INFORMATION FileInformation;
    if ( !GetFileInformationByHandle(this->FileTimeDateLo, &FileInformation) )
    return 0;
    FileTimeToDosDateTime(&FileInformation.ftLastWriteTime, FatDate, FatTime);
    return FatTime[0] | (FatDate[0] << 16);
}
} }

// ==== BACKFILL 0x0065D240  FileClass::SetTime  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool FileClass::SetTime(int a1) {
{
    void *v3;
    struct _FILETIME FileTime;
    struct _BY_HANDLE_FILE_INFORMATION FileInformation;
    v3 = this->FileTimeDateLo;
    return v3 != (void *)-1 && GetFileInformationByHandle(v3, &FileInformation)
    && DosDateTimeToFileTime(HIWORD(wFatTime), wFatTime, &FileTime)
    && SetFileTime(this->FileTimeDateLo, &FileInformation.ftCreationTime, &FileTime, &FileTime);
}
} }

// ==== BACKFILL 0x0065D3A0  RawFileClass::QueryInterface  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* RawFileClass::QueryInterface(int a2) {
{
    int v3;
    DWORD LastError;
    int v6;
    *(void**)this = &vt_RawFileClass;
    if ( RawFileClass::Write(this) )
  {
    if ( !CloseHandle((HANDLE)*(this + 5)) )
    {
    v3 = *(void**)this;
    v6 = *(this + 6);
    LastError = GetLastError();
    (*(void (__thiscall **)(int *, DWORD, int, int))(v3 + 64))(this, LastError, 0, v6);
    }
    *(this + 5) = -1;
  }
    if ( *((char *)(this) + 32) && *(this + 6) )
  {
    free((void *)*(this + 6));
    *(this + 6) = 0;
    *((char *)(this) + 32) = 0;
  }
    *(void**)this = &vt_FileClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (RawFileClass *)this;
}
} }

// ==== BACKFILL 0x0065D420  RawFileClass::Write  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool RawFileClass::Write() {
    return this->Handle != INVALID_HANDLE_VALUE;

/* ASM:
mov     edx, [ecx+14h]
xor     eax, eax
cmp     edx, 0FFFFFFFFh
setnz   al
retn
*/
} }

// ==== BACKFILL 0x0065D480  ComPtr::Set  cls=ComPtr  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ComPtr::Set(int a2) {
{
      int v3;
      int result;

      if ( a2 != this->q004 )
      {
        if ( a2 )
          ++*(_DWORD *)(a2 + 4);
        v3 = this->q004;
        if ( v3 )
        {
          this->q004 = 0;
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
        }
        this->q004 = a2;
      }
      return result;
}
} }

// ==== BACKFILL 0x0065D660  ReferenceCounted::Constructor  cls=ReferenceCounted  sig=csp  renamed_refs=0  residual=- ====
void ReferenceCounted::Constructor() {}

// ==== BACKFILL 0x0065D690  VtableStub::RetZero_eax_35  cls=ReferenceCounted  sig=csp  renamed_refs=0  residual=- ====
char VtableStub::RetZero_eax_35(int a1)
{
return 0;
}

// ==== BACKFILL 0x0065E650  sub_65E650  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_65E650(int a1, int a2, int a3)
{
return 0;
}

// ==== BACKFILL 0x0065EAB0  globalHelper_05EAB0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int globalHelper_05EAB0(unsigned int * a0, int a2, IUnknown * aP2, int a4, int a5, int a6)
{
{
    int v7;
    int v8;
    int v9;
    MouseClass *TransitionCount;
    int v11;
    int v12;
    char v13;
    MouseClass *v15;
    int v16;
    int v17;
    int v18[3];
    v7 = *(int *)(*(int *)&HouseClass_Player[29904] + 4 * a2);
    v16 = v7;
    v15 = 0;
    if ( (int)aP2 > 0 )
  {
    while ( 1 )
    {
    ++*(int *)&HouseClass_Player[43616];
    v8 = (*(int (__thiscall **)(int, unsigned int *))(*(int *)(v7) + 140))(v7, a0);
    v9 = v8;
    --*(int *)&HouseClass_Player[43616];
    if ( !v8 )
    break;
    *(char *)(v8 + 980) = 1;
    TransitionCount = (MouseClass *)*((int*)(a0) + 120);
    if ( (unsigned int)TransitionCount >= 4 )
    TransitionCount = (MouseClass *)HouseClass::GetTransitionCount(a0);
    v11 = *CellClass::FindOpenNeighbor( (int *)&DataGlobal_87C374[13428], (MouseClass *)&v17, TransitionCount, (int)&DataGlobal_B04C38, (int)&DataGlobal_B04C38, 4, 1, 0);
    (*(void (__thiscall **)(int, int, int))(*(int *)(v9) + 488))(v9, a4, 0);
    if ( a6 )
    (*(void (__thiscall **)(int, int, int))(*(int *)(v9) + 1152))(v9, a6, 1);
    if ( a5 )
    (*(void (__thiscall **)(int, int))(*(int *)(v9) + 968))(v9, a5);
    v18[0] = ((short)v11 << 8) + 128;
    ++*(int *)&HouseClass_Player[43616];
    v12 = *(int *)v9;
    v18[1] = (SHIWORD(v11) << 8) + 128;
    v18[2] = 0;
    v13 = (*(int (__thiscall **)(int, int *, int))(v12 + 216))(v9, v18, 0);
    --*(int *)&HouseClass_Player[43616];
    if ( !v13 )
      {
    if ( v9 )
    (*(void (__thiscall **)(int, int))(*(int *)(v9) + 32))(v9, 1);
    return (int)&v15[-1].__tail_1600D[2];
      }
    (*(void (__thiscall **)(int))(*(int *)(v9) + 492))(v9);
    v15 = (MouseClass *)((char *)(v15) + 1);
    if ( (int)v15 >= (int)aP2 )
    return (int)v15;
    v7 = v16;
    }
  }
    return (int)v15;
}
}

// ==== BACKFILL 0x0065F710  sub_65F710  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_65F710(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd)
{
{
    int result;
    HWND DlgItem;
    result = BaseDialogProc(hDlg, a2, a3, (unsigned int)hWnd);
    if ( !result )
  {
    if ( a2 == 273 )
    {
    if ( GetDlgCtrlID(hWnd) == 1059 && !HIWORD(a3) )
    *(int *)GetWindowLongA(hDlg, 8) = 1059;
    }
    else if ( a2 == 1175 )
    {
    DlgItem = GetDlgItem(hDlg, 1767);
    SendMessageA(DlgItem, 0x4B2u, 0, DataGlobal_B04CA0);
    return 0;
    }
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x0065FB60  sub_65FB60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_65FB60::sub_65FB60()
{
{
    FogOfWar::RevealCell((int)&DataGlobal_87F7E8, this);
}
}

// ==== BACKFILL 0x0065FD50  WinMainSetup_Setup_65FD50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_65FD50()
{
{
    int i;
    void *v1;
    int v2;
    int v3;
    for ( i = g_TriggerEventState - 1; i >= 0; --i )
  {
    v1 = (void *)*((int *)(g_TriggerPool) + i);
    if ( v1 )
    {
    v3 = *((int *)(g_TriggerPool) + i);
    v2 = (*(int (__thiscall **)(int *, int *))(DataGlobal_B04DA8 + 16))(&DataGlobal_B04DA8, &v3);
    if ( v2 != -1 && v2 < g_TriggerEventState && v2 < --g_TriggerEventState )
      {
    do
        {
    ++v2;
    *((int *)(g_TriggerPool) + v2 - 1) = *((int *)(g_TriggerPool) + v2);
        }
    while ( v2 < g_TriggerEventState );
      }
    __3_YAXPAX_Z(v1);
    }
  }
}
}
