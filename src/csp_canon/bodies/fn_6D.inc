// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x006D0260  BlowStraw_29::Stub  cls=TabClass  sig=csp  renamed_refs=0  residual=- ====
int BlowStraw_29_::Stub()
{
    int __thiscall BlowStraw_29_::Stub(int *(void**)this)
{
    return ObjectClass::processDamage(this);
}
}

// ==== BACKFILL 0x006D0270  TacticalClass::CleanupResources  cls=TabClass  sig=csp  renamed_refs=0  residual=- ====
void TacticalClass::CleanupResources()
{
{
    int v0;
    void **v1;
    ObjectClass::CleanupSidebarResources();
    v0 = 0;
    v1 = (void **)&DataGlobal_B0C148;
    do
  {
    if ( DataGlobal_B0CBDC[v0] )
    {
    __3_YAXPAX_Z(*v1);
    DataGlobal_B0CBDC[v0] = 0;
    }
    *v1++ = 0;
    ++v0;
  }
    while ( (int)v1 < (int)&DataGlobal_B0C1AC );
}
}

// ==== BACKFILL 0x006D02B0  SidebarClass::LoadButtonSHPs  cls=TabClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int SidebarClass::LoadButtonSHPs() {
{
      int v2;
      int *v3;
      void *v4;
      bool v5;
      int v6;
      int result;
      int v8;
      bool v9;
      int v10;
      int v11;
      int v12;
      int v13;
      char Buffer[256];

      SidebarClass::LoadAssets();
      v9 = 0;
      v2 = 0;
      v3 = &DataGlobal_B0C148;
      do
      {
        sprintf(Buffer, DataGlobal_842828, v2);
        v4 = LoadFileSHP(Buffer, &v9);
        v5 = v9;
        *v3 = (int)v4;
        DataGlobal_B0CBDC[v2] = v5;
        ++v3;
        ++v2;
      }
      while ( (int)v3 < (int)&DataGlobal_B0C1AC );
      DataGlobal_B0CD38 = *(__int16 *)(DataGlobal_B0C148 + 2);
      DataGlobal_B0CB50 = *(__int16 *)(DataGlobal_B0C148 + 4);
      v6 = *(_DWORD *)DataGlobal_B0FC6C;
      v11 = *(_DWORD *)DataGlobal_B0FC68;
      v12 = *((_DWORD *)DataGlobal_B0FC68 + 1);
      result = *((_DWORD *)DataGlobal_B0FC68 + 2);
      v13 = *((_DWORD *)DataGlobal_B0FC68 + 3);
      DataGlobal_B0CC2C = v6 - result * DataGlobal_B0CB54;
      v10 = *((_DWORD *)g_ScenarioClass_Instance + 3374);
      v8 = *((_DWORD *)DataGlobal_B0FC58 + 1);
      DataGlobal_B0CD10 = result - DataGlobal_B0CD38;
      DataGlobal_B0CC24 = v8;
      DataGlobal_B0CC38 = result;
      this->q5520 = 0;
      return result;
}
} }

// ==== BACKFILL 0x006D03A0  SidebarClass::InitButtons  cls=TabClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int SidebarClass::InitButtons() {
{
      char result;
      void *v3;

      SidebarClass::Init();
      result = ArmageddonMode;
      if ( !ArmageddonMode )
      {
        result = UI_Init_72F430();
        if ( result )
        {
          UI_Init_6D0FD0(this);
          DataGlobal_B0CCD4 = 240;
          DataGlobal_B0CD00 = g_SidebarConfig;
          DataGlobal_B0CCDD = 0;
          DataGlobal_B0CCE0 = 0;
          DataGlobal_B0CCD0 = 5;
          v3 = DataGlobal_B0FA90;
          Rect_Point::Set(DataGlobal_B0CCB0, *(_DWORD *)DataGlobal_B0FC60, *((_DWORD *)DataGlobal_B0FC60 + 1));
          ShapeButton::SetShape((int)DataGlobal_B0CCB0, (int)v3, 0, 0);
          DataGlobal_B0CC64 = 241;
          DataGlobal_B0CC90 = g_SidebarConfig;
          DataGlobal_B0CC6D = 0;
          DataGlobal_B0CC70 = 0;
          DataGlobal_B0CC60 = 5;
          Rect_Point::Set(DataGlobal_B0CC40, *(_DWORD *)DataGlobal_B0FC64, *((_DWORD *)DataGlobal_B0FC64 + 1));
          return ShapeButton::SetShape((int)DataGlobal_B0CC40, (int)v3, 0, 0);
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x006D0EC0  HouseClass::updateFactoryQueue  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* HouseClass::updateFactoryQueue() {
{
      _DWORD *v1;
      int v2;
      wchar_t *result;
      int v4;

      v1 = this;
      v2 = *this;
      this->q5545 = 1;
      this->SetCapacity_5(0);
      result = g_CurrentFrame;
      v1 += 5454;
      *v1 = g_CurrentFrame;
      v1[1] = v4;
      v1[2] = 7;
      return result;
}
} }

// ==== BACKFILL 0x006D0F00  ObjectClass::PreDraw  cls=ObjectClass  sig=csp  renamed_refs=0  residual=q5545 ====
namespace ra2 { namespace game { int ObjectClass::PreDraw() {
{
      int v1;

      v1 = *(_DWORD *)this;
      this->q5545 = 1;
      return (*(int (__stdcall **)(_DWORD))(v1 + 56))(0);
}
} } }

// ==== BACKFILL 0x006D1570  sub_6D1570  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6D1570::sub_6D1570()
{
{
    char result;
    int v2[6];
    char v3;
    result = this->Vf48(DataGlobal_B0CC40);
    if ( DataGlobal_B0CC40 )
  {
    v2[2] = DataGlobal_B0CC50;
    v2[1] = DataGlobal_B0CC4C;
    v2[4] = DataGlobal_B0CC58;
    v3 = 0;
    v2[0] = DataGlobal_B0CC64;
    v2[5] = g_Str_Tip_ThumbClosed;
    v2[3] = DataGlobal_B0CC54;
    HashTable::Remove((int *)g_TacticalRender, DataGlobal_B0CC64);
    return CommandClass::AddAction(g_TacticalRender, (int)v2);
  }
    return result;
}
}

// ==== BACKFILL 0x006D1610  HouseClass::InitDefeatState  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int HouseClass::InitDefeatState() {
{
      char result;
      int v3;

      result = this->q5544;
      if ( !result )
      {
        this->vt13(DataGlobal_B0CC40);
        HashTable::Remove((int *)g_TacticalRender, 241);
        this->q5544 = 1;
        CommandClass::BuildBar(this);
        v3 = *(_DWORD *)this;
        this->q5545 = 1;
        return (*(int (__thiscall **)(_BYTE *, _DWORD))(v3 + 56))(this, 0);
      }
      return result;
}
} }

// ==== BACKFILL 0x006D1770  MouseClass::ToggleContextGadget  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char MouseClass::ToggleContextGadget(int a1, int a2)
{
{
    unsigned int v2;
    char *v3;
    unsigned int v5;
    char *v6;
    if ( a1 == 4551 )
  {
    v2 = g_ObjectTrackingPool[DataGlobal_B0CC1C];
    if ( v2 <= 0x18 )
    {
    v3 = (char *)&DataGlobal_B0C1C0 + 96 * v2;
    if ( v3 )
      {
    if ( !v3[45] )
    GadgetClass::Show(v3);
      }
    }
    return 1;
  }
    else if ( a1 == 4552 )
  {
    v5 = g_ObjectTrackingPool[DataGlobal_B0CC1C];
    if ( v5 <= 0x18 )
    {
    v6 = (char *)&DataGlobal_B0C1C0 + 96 * v5;
    if ( v6 )
      {
    if ( v6[45] )
    GadgetClass::Hide(v6);
      }
    }
    return 1;
  }
    else
  {
    return 0;
  }
}
}

// ==== BACKFILL 0x006D1810  Struct::Zero25  cls=Struct  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* Struct::Zero25() {
{
      *this = 0;
      this->q004 = 0;
      this->q008 = 0;
      this->q00C = 0;
      this->q010 = 0;
      this->q014 = 0;
      this->q018 = 0;
      return this;
}
} }

// ==== BACKFILL 0x006D1E80  sub_6D1E80  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_6D1E80::sub_6D1E80()
{
{
    *(void**)this = vt_Tactical;
    this->M4 = (unsigned int)vt_Tactical;
    this->M8 = (unsigned int)vt_Tactical;
    this->M12 = &vt_Tactical;
    g_TacticalClass_Instance = 0;
    AbstractClass::DTOR(this);
}
}

// ==== BACKFILL 0x006D1F10  Coord::To_ScreenRaw  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * Coord::To_ScreenRaw(AbstractClass * aP0, IUnknown * aP1)
{
{
    int v2;
    int v3;
    int v4;
    int v6;
    v6 = aP1->field_4;
    v2 = (-60 * v6 / 2 + 60 * aP1->field_0 / 2) / 256;
    v3 = (30 * v6 / 2 + 30 * aP1->field_0 / 2) / 256;
    v4 = v3 - Math::RoundToInt((double)aP1->field_8 * *(double *)&DataGlobal_B05488[30912] + (double)(aP1->field_8 >= 728) + 0.5);
    *(int *)aP0->__pad_0 = v2;
    *(int *)&aP0->__pad_0[4] = v4;
    return (int *)aP0->__pad_0;
}
}

// ==== BACKFILL 0x006D20E0  ZCoordToScreenY  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
long long ZCoordToScreenY(IUnknown * aP0)
{
{
    return Math::RoundToInt((double)(int)aP0 * *(double *)&DataGlobal_B05488[30912] + (double)((int)aP0 >= 728) + 0.5);
}
}

// ==== BACKFILL 0x006D2120  Coord::ScaleToScreenY  cls=Coord  sig=csp  renamed_refs=0  residual=- ====
long long Coord::ScaleToScreenY()
{
{
    return Math::RoundToInt(((double)(int)this - 0.5) * LightningStorm_CloudHeightFactor);
}
}

// ==== BACKFILL 0x006D2360  Matrix3x4::TransformCell  cls=Matrix3x4  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Matrix3x4::TransformCell(AbstractClass * aP1, AbstractClass * aP2)
{
{
    float *v4;
    BuildingTypeClass *v5;
    int v6;
    int v8;
    float v9;
    BuildingTypeClass *v10;
    int v11;
    float v12[3];
    AbstractClass *aP2a;
    aP2a = *(AbstractClass **)aP2->__pad_0;
    if ( (int)aP2a >= *(int *)&g_OverlayTypeConfig[22072] || (v8 = *(int *)&aP2->__pad_0[4], v8 >= *(int *)&g_OverlayTypeConfig[22076]) )
  {
    *(int *)aP1->__pad_0 = *(int *)&g_OverlayTypeConfig[22032];
    *(int *)&aP1->__pad_0[4] = *(int *)&g_OverlayTypeConfig[22036];
    *(int *)&aP1->__pad_0[8] = *(int *)&g_OverlayTypeConfig[22040];
    return aP1->__pad_0;
  }
    else
  {
    v9 = (float)(int)aP2a;
    v11 = 0;
    *(float *)&v10 = (float)v8;
    v4 = TransformMatrix3x4Point(v12, this + 889, &v9);
    v9 = *v4;
    v10 = (BuildingTypeClass *)*((int *)(v4) + 1);
    v11 = *((int *)(v4) + 2);
    v5 = (BuildingTypeClass *)Math::RoundToInt(v9);
    v6 = Math::RoundToInt(*(float *)&v10);
    *(int *)aP1->__pad_0 = v5;
    *(int *)&aP1->__pad_0[4] = v6;
    *(int *)&aP1->__pad_0[8] = 0;
    return aP1->__pad_0;
  }
}
}

// ==== BACKFILL 0x006D2420  TacticalClass::SetPosition  cls=TacticalClass  sig=csp  renamed_refs=8  residual=- ====
namespace gamemd { int TacticalClass::SetPosition(void* a1, int a2) {
{
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;
      int result;
      int v10;
      IUnknown *v11;
      IUnknown *v12;

      this->TacticalClass_field_DC = 0;
      this->TacticalClass_field_D8 = *(_DWORD *)&stru_830620[22428][4 * (_DWORD)aP2 + 52016];
      v12 = (IUnknown *)aP1->field_4;
      v4 = (-60 * (int)v12 / 2 + 60 * aP1->field_0 / 2) / 256;
      v5 = (30 * (int)v12 / 2 + 30 * aP1->field_0 / 2) / 256;
      v6 = Math::RoundToInt((double)aP1->field_8 * *(double *)&g_OverlayTypeConfig.field_5550 + (double)(aP1->field_8 >= 728) + 0.5);
      v7 = this->q0B4;
      v8 = v5 - v6 - v7;
      result = this->TacticalClass_field_D64;
      v10 = v7 + v8;
      v11 = (IUnknown *)this->TacticalClass_field_D68;
      this->TacticalClass_field_D0 = v4;
      this->TacticalClass_field_D4 = v10;
      this->TacticalClass_field_C8 = result;
      this->TacticalClass_field_CC = v11;
      return result;
}
} }

// ==== BACKFILL 0x006D2B50  nullsub_238  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_238(int a1, int a2)
{
  ;
}

// ==== BACKFILL 0x006D3870  TacticalClass::ClickFindBuilding  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TacticalClass::ClickFindBuilding(void* a1, void* a2, int a3) {
{
      _DWORD *v5;
      int *v6;
      int v7;
      int v8;
      int v9;
      int *v10;
      int v11;
      int v12;
      int v13;
      int v14;
      int result;
      int v16;
      int v17;
      _DWORD v18[3];
      int v19;
      IUnknown *v20;
      int v21;
      int v22;
      int v23;
      int v24;
      int v25;
      int v26;
      int v27;
      int v28;
      int v29;
      int v30;

      if ( (int)this->visibleCellCount > 0 )
      {
        v16 = 0;
        v5 = this + 57;
        do
        {
          Coord::Subtract(
            v18,
            (IUnknown *)(((((__int16)*(_DWORD *)(*v5 + 36) << 8) + 128) / 256) << 8),
            (IUnknown *)(((((__int16)HIWORD(*(_DWORD *)(*v5 + 36)) << 8) + 128) / 256) << 8),
            0);
          v19 = v18[0];
          v20 = (IUnknown *)v18[1];
          v21 = v18[2];
          v6 = Coord::To_ScreenRaw(&v17, &v19);
          v7 = *v6 - this->visibleArea - 30;
          v24 = *(_DWORD *)&DataGlobal_87F8E4[30400] + v6[1] - this->q0B4;
          v28 = v24;
          v23 = v7;
          v27 = v7;
          v25 = 60;
          v26 = 30;
          v29 = 60;
          v30 = 30;
          TacticalClass::FindBuilding(1, &v23, &v27);
          ++v5;
          ++v16;
        }
        while ( v16 < this->visibleCellCount );
      }
      if ( *(_DWORD *)&g_OverlayTypeConfig[22160] && *(_DWORD *)&g_OverlayTypeConfig[22160] - 1 >= 0 )
      {
        v8 = *(_DWORD *)&g_OverlayTypeConfig[22160];
        v9 = 20 * (*(_DWORD *)&g_OverlayTypeConfig[22160] - 1);
        do
        {
          v19 = *(_DWORD *)(v9 + *(_DWORD *)&g_OverlayTypeConfig[22148]);
          v20 = *(IUnknown **)(v9 + *(_DWORD *)&g_OverlayTypeConfig[22148] + 4);
          v21 = *(_DWORD *)(v9 + *(_DWORD *)&g_OverlayTypeConfig[22148] + 8);
          v22 = *(_DWORD *)(v9 + *(_DWORD *)&g_OverlayTypeConfig[22148] + 12);
          v20 = (IUnknown *)((char *)v20 + *(_DWORD *)&DataGlobal_87F8E4[30400]);
          v10 = ClipRectIntersection(&v23, (int *)&DataGlobal_87F8E4[30396], &v19, 0, 0);
          v19 = *v10;
          v20 = (IUnknown *)v10[1];
          v21 = v10[2];
          v11 = v10[3];
          v22 = v11;
          if ( v21 > 0 && v11 > 0 )
          {
            v12 = v10[1];
            v27 = *v10;
            v13 = v10[2];
            v14 = v10[3];
            v28 = v12;
            v29 = v13;
            v30 = v14;
            TacticalClass::FindBuilding(1, &v19, &v27);
          }
          v9 -= 20;
          --v8;
        }
        while ( v8 );
      }
      if ( a4 )
        return TacticalClass::FindBuilding(
                 1,
                 (int *)&DataGlobal_87F8E4[30396],
                 (int *)&DataGlobal_87F8E4[30396]);
      if ( *(int *)&aP1->__pad_0[8] > 0 && *(int *)&aP1->__pad_0[12] > 0 )
        TacticalClass::FindBuilding(1, (int *)aP1->__pad_0, (int *)aP1->__pad_0);
      result = (int)a2;
      if ( a2[2] > 0 && a2[3] > 0 )
        return TacticalClass::FindBuilding(1, a2, a2);
      return result;
}
} }

// ==== BACKFILL 0x006D3AC0  TacticalClass::ClickFindOverlay  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TacticalClass::ClickFindOverlay(void* a1, void* a2, int a3) {
{
      _DWORD *v5;
      int *v6;
      int v7;
      int v8;
      int v9;
      int *v10;
      int v11;
      int v12;
      int v13;
      int v14;
      int result;
      int v16;
      int v17;
      _DWORD v18[3];
      int v19;
      IUnknown *v20;
      int v21;
      int v22;
      int v23;
      int v24;
      int v25;
      int v26;
      int v27;
      int v28;
      int v29;
      int v30;

      if ( (int)this->visibleCellCount > 0 )
      {
        v16 = 0;
        v5 = this + 57;
        do
        {
          Coord::Subtract(
            v18,
            (IUnknown *)(((((__int16)*(_DWORD *)(*v5 + 36) << 8) + 128) / 256) << 8),
            (IUnknown *)(((((__int16)HIWORD(*(_DWORD *)(*v5 + 36)) << 8) + 128) / 256) << 8),
            0);
          v19 = v18[0];
          v20 = (IUnknown *)v18[1];
          v21 = v18[2];
          v6 = Coord::To_ScreenRaw(&v17, &v19);
          v7 = *v6 - this->visibleArea - 30;
          v24 = *(_DWORD *)&DataGlobal_87F8E4[30400] + v6[1] - this->q0B4;
          v28 = v24;
          v23 = v7;
          v27 = v7;
          v25 = 60;
          v26 = 30;
          v29 = 60;
          v30 = 30;
          TacticalClass::FindOverlay(1, &v23, &v27);
          ++v5;
          ++v16;
        }
        while ( v16 < this->visibleCellCount );
      }
      if ( *(_DWORD *)&g_OverlayTypeConfig[22160] && *(_DWORD *)&g_OverlayTypeConfig[22160] - 1 >= 0 )
      {
        v8 = *(_DWORD *)&g_OverlayTypeConfig[22160];
        v9 = 20 * (*(_DWORD *)&g_OverlayTypeConfig[22160] - 1);
        do
        {
          v19 = *(_DWORD *)(v9 + *(_DWORD *)&g_OverlayTypeConfig[22148]);
          v20 = *(IUnknown **)(v9 + *(_DWORD *)&g_OverlayTypeConfig[22148] + 4);
          v21 = *(_DWORD *)(v9 + *(_DWORD *)&g_OverlayTypeConfig[22148] + 8);
          v22 = *(_DWORD *)(v9 + *(_DWORD *)&g_OverlayTypeConfig[22148] + 12);
          v20 = (IUnknown *)((char *)v20 + *(_DWORD *)&DataGlobal_87F8E4[30400]);
          v10 = ClipRectIntersection(&v23, (int *)&DataGlobal_87F8E4[30396], &v19, 0, 0);
          v19 = *v10;
          v20 = (IUnknown *)v10[1];
          v21 = v10[2];
          v11 = v10[3];
          v22 = v11;
          if ( v21 > 0 && v11 > 0 )
          {
            v12 = v10[1];
            v27 = *v10;
            v13 = v10[2];
            v14 = v10[3];
            v28 = v12;
            v29 = v13;
            v30 = v14;
            TacticalClass::FindOverlay(1, &v19, &v27);
          }
          v9 -= 20;
          --v8;
        }
        while ( v8 );
      }
      if ( a4 )
        return TacticalClass::FindOverlay(
                 1,
                 (int *)&DataGlobal_87F8E4[30396],
                 (int *)&DataGlobal_87F8E4[30396]);
      if ( aP1->field_8 > 0 && aP1->field_C > 0 )
        TacticalClass::FindOverlay(1, &aP1->field_0, &aP1->field_0);
      result = (int)a2;
      if ( a2[2] > 0 && a2[3] > 0 )
        return TacticalClass::FindOverlay(1, a2, a2);
      return result;
}
} }

// ==== BACKFILL 0x006D4DB0  HouseClass::SetOwnerName  cls=HouseClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { void* HouseClass::SetOwnerName(void* a1, int a2) {
{
      CampaignScore *result;

      if ( aP1 )
      {
        result = (CampaignScore *)wcscpy((wchar_t *)(this + 36), (const wchar_t *)aP1);
        this->psychicDetectionBuildings = a3;
      }
      else
      {
        this->vtable5 = 0;
        this->psychicDetectionBuildings = -1;
        this->psychicDetectionBuildings = a3;
        return (wchar_t *)a3;
      }
      return (wchar_t *)result;
}
} }

// ==== BACKFILL 0x006D4E00  sub_6D4E00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_6D4E00::sub_6D4E00()
{
{
    this->M164 = -1;
    this->M36 = 0;
}
}

// ==== BACKFILL 0x006D5030  RadarClass::DrawBlips  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RadarClass::DrawBlips(int a1) {
{
      AbstractClass *v3;
      int v4;
      int v5;
      int v6;
      int v7;
      __int16 v8;
      AbstractClass *v9;
      int v10;
      int *v11;
      int v12;
      int v13;
      void *v14;
      char v15;
      int v16;
      int *v17;
      int v18;
      int v19;
      int v20;
      int v21;
      _WORD *eax29;
      IUnknown *v22;
      IUnknown *v23;
      _WORD *eax31;
      IUnknown *v25;
      IUnknown *v26;
      int v28;
      _WORD *eax34;
      IUnknown *v29;
      IUnknown *v30;
      IUnknown *v32;
      AbstractClass *v33;
      char *vfptr;
      __int64 v35;
      int v36;
      __int64 v37;
      int v38;
      void *v39;
      char v41;
      IUnknown *v40;
      __int16 v43;
      __int16 var3C_2a;
      AbstractClass *i;
      AbstractClass *v44;
      rc_ptr_base v47;
      IUnknown *v46;
      IUnknown *v49;
      IUnknown *v48;
      int v51;
      int v52[2];
      int v53;
      int v54;
      int GroundHeight;
      int v56;
      int v57;
      int v58;

      v40 = 0;
      if ( *(_DWORD *)&DataGlobal_87F8E4[4268] )
      {
        v3 = (AbstractClass *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)&DataGlobal_87F8E4[32092] + 52))(
                                *(_DWORD *)&DataGlobal_87F8E4[32092],
                                v52);
        v4 = *(_DWORD *)v3->__pad_0;
        v5 = *(_DWORD *)&v3->__pad_0[4];
        if ( v4 < *(int *)&DataGlobal_87F8E4[30396] )
          return v4;
        if ( v4 >= *(_DWORD *)&DataGlobal_87F8E4[30396] + *(_DWORD *)&DataGlobal_87F8E4[30404] )
          return v4;
        LOBYTE(v4) = DataGlobal_87F8E4[30400];
        if ( v5 < *(int *)&DataGlobal_87F8E4[30400] )
          return v4;
        LOBYTE(v4) = DataGlobal_87F8E4[30408] + DataGlobal_87F8E4[30400];
        if ( v5 >= *(_DWORD *)&DataGlobal_87F8E4[30408] + *(_DWORD *)&DataGlobal_87F8E4[30400] )
          return v4;
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[4268] + 44))(*(_DWORD *)&DataGlobal_87F8E4[4268]) == 7
          && *(_BYTE *)(*(_DWORD *)&DataGlobal_87F8E4[4268] + 5815) )
        {
          LOWORD(v6) = 3;
          v43 = 3;
          v40 = (IUnknown *)-1;
        }
        else
        {
          v6 = *CoordList::GetBounds(&v49, *(__int16 **)&DataGlobal_87F8E4[4224]);
          v43 = HIWORD(v6);
        }
        v7 = (__int16)v40;
        v8 = HIWORD(v40);
        v41 = 1;
        v9 = (AbstractClass *)(__int16)v6;
        for ( i = (AbstractClass *)(__int16)v6; v7 < (int)v9; ++v7 )
        {
          v10 = v8;
          if ( v8 < v43 )
          {
            do
            {
              LOWORD(v47.vfptr) = v7 + *(_WORD *)&DataGlobal_87F8E4[4216];
              HIWORD(v47.vfptr) = *(_WORD *)&DataGlobal_87F8E4[4218] + v10;
              LOWORD(v46) = *(_WORD *)&DataGlobal_87F8E4[4220] + v7 + *(_WORD *)&DataGlobal_87F8E4[4216];
              HIWORD(v46) = *(_WORD *)&DataGlobal_87F8E4[4218] + v10 + *(_WORD *)&DataGlobal_87F8E4[4222];
              v49 = v46;
              Coord::Subtract(
                &v53,
                (IUnknown *)(((((__int16)v46 << 8) + 128) / 256) << 8),
                (IUnknown *)((((SHIWORD(v46) << 8) + 128) / 256) << 8),
                0);
              v56 = v53;
              v57 = v54;
              v58 = GroundHeight;
              v11 = Coord::To_ScreenRaw(v52, &v56);
              v12 = this->q0B0;
              v13 = this->q0B4;
              v48 = (IUnknown *)*v11;
              v51 = v11[1] - v13;
              v48 = (IUnknown *)((char *)v48 - v12 - 30);
              if ( LayerClass::CoordinatesLegal(&DataGlobal_87F7E8, (IUnknown *)&v49) )
              {
                v14 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v49);
                if ( !BuildingPlacement::RenderBuildingPlacementPreview(
                        (int)v14,
                        (IUnknown *)&v48,
                        (IUnknown *)&DataGlobal_87F8E4[30396],
                        aP3)
                  || (v15 = v41, v41 = 1, !v15) )
                {
                  v41 = 0;
                }
              }
              ++v10;
            }
            while ( v10 < v43 );
            v9 = i;
            v8 = HIWORD(v40);
          }
        }
        v16 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[4268] + 44))(*(_DWORD *)&DataGlobal_87F8E4[4268]);
        if ( g_NetworkPlayerBuffer[5935] && *(_DWORD *)&DataGlobal_87F8E4[4264] )
        {
          LOWORD(v49) = (_WORD)v40 + *(_WORD *)&DataGlobal_87F8E4[4216];
          HIWORD(v49) = v8 + *(_WORD *)&DataGlobal_87F8E4[4218];
          v53 = ((__int16)(*(_WORD *)&DataGlobal_87F8E4[4220]
                         + (_WORD)v40
                         + *(_WORD *)&DataGlobal_87F8E4[4216]) << 8)
              + 128;
          v54 = ((__int16)(v8 + *(_WORD *)&DataGlobal_87F8E4[4218] + *(_WORD *)&DataGlobal_87F8E4[4222]) << 8)
              + 128;
          GroundHeight = 0;
          if ( v16 == 7 )
          {
            Coord::Subtract(
              &v56,
              (IUnknown *)(((((__int16)(*(_WORD *)&DataGlobal_87F8E4[4220]
                                      + (_WORD)v40
                                      + *(_WORD *)&DataGlobal_87F8E4[4216]) << 8)
                           + 128)
                          / 256) << 8),
              (IUnknown *)(((((__int16)(v8
                                      + *(_WORD *)&DataGlobal_87F8E4[4218]
                                      + *(_WORD *)&DataGlobal_87F8E4[4222]) << 8)
                           + 128)
                          / 256) << 8),
              0);
            v53 = v56;
            v54 = v57;
            GroundHeight = v58;
          }
          GroundHeight = Cell::GetGroundHeight(&v53);
          (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)&DataGlobal_87F8E4[4264] + 436))(
            *(_DWORD *)&DataGlobal_87F8E4[4264],
            &v53);
          v17 = Coord::To_ScreenRaw(v52, &v53);
          v18 = this->q0B0;
          v19 = this->q0B4;
          v48 = (IUnknown *)*v17;
          v20 = v17[1];
          v48 = (IUnknown *)((char *)v48 - v18);
          v51 = v20 - v19;
          if ( v16 != 18 )
            (*(void (__thiscall **)(_DWORD, IUnknown **, char *))(**(_DWORD **)&DataGlobal_87F8E4[4264] + 280))(
              *(_DWORD *)&DataGlobal_87F8E4[4264],
              &v48,
              &DataGlobal_87F8E4[30396]);
        }
        if ( v41
          && *(_DWORD *)&DataGlobal_87F8E4[4264]
          && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[4264] + 44))(*(_DWORD *)&DataGlobal_87F8E4[4264]) == 6 )
        {
          v21 = *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[4264] + 1312);
          if ( *(_BYTE *)(v21 + 5822) )
          {
            eax29 = CellStruct::Set(&v47, (__int16)v40, v8);
            v22 = CellStruct::Add(eax29, (IUnknown *)&v46, (IUnknown *)&DataGlobal_87F8E4[4216]);
            v23 = CellStruct::Add(v22, (IUnknown *)&v49, (IUnknown *)&DataGlobal_87F8E4[4220]);
            RenderBridgeRadarBlips(this, (AbstractClass *)aP3, (AbstractClass *)v23->field_0);
          }
          else if ( *(_BYTE *)(v21 + 5824) )
          {
            eax31 = CellStruct::Set(&v47, (__int16)v40, v8);
            v25 = CellStruct::Add(eax31, (IUnknown *)&v46, (IUnknown *)&DataGlobal_87F8E4[4216]);
            v26 = CellStruct::Add(v25, (IUnknown *)&v49, (IUnknown *)&DataGlobal_87F8E4[4220]);
            RadarClass::DrawBlip(this, (char)aP3, (AbstractClass *)v26->field_0);
          }
          else
          {
            v28 = *(_DWORD *)(v21 + 3668);
            if ( v28 && *(_BYTE *)(v28 + 680) )
            {
              eax34 = CellStruct::Set(&v47, (__int16)v40, v8);
              v29 = CellStruct::Add(eax34, (IUnknown *)&v46, (IUnknown *)&DataGlobal_87F8E4[4216]);
              v30 = CellStruct::Add(v29, (IUnknown *)&v49, (IUnknown *)&DataGlobal_87F8E4[4220]);
              RenderRadarBlips(this, (char)aP3, (AbstractClass *)v30->field_0);
            }
          }
        }
      }
      else
      {
        v8 = 0;
      }
      LOBYTE(v4) = g_NetworkPlayerBuffer[5935];
      if ( !g_NetworkPlayerBuffer[5935] && *(_DWORD *)&DataGlobal_87F8E4[4248] )
      {
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[4248] + 44))(*(_DWORD *)&DataGlobal_87F8E4[4248]) == 7
          && *(_BYTE *)(*(_DWORD *)&DataGlobal_87F8E4[4248] + 5815) )
        {
          LOWORD(v4) = 3;
          v49 = (IUnknown *)-1;
          LOWORD(v40) = -1;
          v8 = -1;
          var3C_2a = 3;
        }
        else
        {
          v4 = *CoordList::GetBounds(&v49, *(__int16 **)&DataGlobal_87F8E4[4240]);
          var3C_2a = HIWORD(v4);
        }
        v32 = (IUnknown *)(__int16)v40;
        v33 = (AbstractClass *)(__int16)v4;
        v40 = (IUnknown *)(__int16)v40;
        v44 = (AbstractClass *)(__int16)v4;
        if ( (__int16)v40 < (__int16)v4 )
        {
          v47.vfptr = (void *)v8;
          do
          {
            LOBYTE(v4) = var3C_2a;
            vfptr = (char *)v47.vfptr;
            if ( (int)v47.vfptr < var3C_2a )
            {
              while ( 1 )
              {
                HIWORD(v48) = (_WORD)vfptr + *(_WORD *)&DataGlobal_87F8E4[4232];
                LOWORD(v49) = *(_WORD *)&DataGlobal_87F8E4[4234]
                            + *(_WORD *)&DataGlobal_87F8E4[4230]
                            + (_WORD)v32;
                HIWORD(v49) = *(_WORD *)&DataGlobal_87F8E4[4236]
                            + (_WORD)vfptr
                            + *(_WORD *)&DataGlobal_87F8E4[4232];
                v46 = v49;
                v35 = 15360 * ((((__int16)v49 << 8) + 128) / 256);
                v36 = v35 - HIDWORD(v35);
                v37 = 7680 * ((((__int16)v49 << 8) + 128) / 256);
                v53 = -15360 * (((SHIWORD(v49) << 8) + 128) / 256) / 2 + (v36 >> 1);
                v38 = v53 / 256 - this->q0B0;
                v52[1] = (7680 * (((SHIWORD(v49) << 8) + 128) / 256) / 2 + (((int)v37 - HIDWORD(v37)) >> 1)) / 256
                       - this->q0B4;
                v52[0] = v38 - 30;
                if ( LayerClass::CoordinatesLegal(&DataGlobal_87F7E8, (IUnknown *)&v46) )
                {
                  v39 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v46);
                  BuildingPlacement::RenderBuildingPlacementPreview(
                    (int)v39,
                    (IUnknown *)v52,
                    (IUnknown *)&DataGlobal_87F8E4[30396],
                    aP3);
                }
                LOBYTE(v4) = var3C_2a;
                if ( (int)++vfptr >= var3C_2a )
                  break;
                LOWORD(v32) = (_WORD)v40;
              }
              v33 = v44;
              v32 = v40;
            }
            v32 = (IUnknown *)((char *)v32 + 1);
            v40 = v32;
          }
          while ( (int)v32 < (int)v33 );
        }
      }
      return v4;
}
} }

// ==== BACKFILL 0x006D6190  ObjectClass::ComputeDelta  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* ObjectClass::ComputeDelta(void* a1) {
{
      int v2;
      int v4;

      v2 = this->qD64 - this->q0B0;
      v4 = this->qD68 - this->q0B4;
      *a2 = v2;
      a2[1] = v4;
      return a2;
}
} } }

// ==== BACKFILL 0x006D6410  Terrain::ClimbCheck  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Terrain::ClimbCheck(AbstractClass * aP0, AbstractClass * aP1)
{
{
    int v2;
    IUnknown *v3;
    IUnknown *v4;
    bool v5;
    int v6;
    int v7;
    int *v8;
    int v9;
    int v10;
    TechnoClass *v12;
    TechnoClass *v13;
    int v14;
    int v15;
    v2 = *(int *)aP1->__pad_0 / 256;
    HIWORD(aP1) = *(int *)&aP1->__pad_0[4] / 256;
    LOWORD(aP1) = v2;
    v3 = (IUnknown *)(((short)v2 << 8) + 128);
    v4 = (IUnknown *)((SHIWORD(aP1) << 8) + 128);
    v5 = (*((int *)CellCoord::To_CellObj(&DataGlobal_87C374[13428], (short *)&aP1) + 80) & 0x1000) != 0;
    v6 = (int)&v4->__pad_524[220];
    v14 = *((char *)CellCoord::To_CellObj(&DataGlobal_87C374[13428], (short *)&aP1) + 283);
    v7 = (int)&v3->__pad_524[220];
    v15 = 0;
    while ( 1 )
  {
    v7 -= 8;
    v6 -= 8;
    LOWORD(v13) = v7 / 256;
    HIWORD(v13) = v6 / 256;
    v12 = v13;
    v8 = CellCoord::To_CellObj(&DataGlobal_87C374[13428], (short *)&v12);
    v9 = *((char *)(v8) + 283) - v14;
    if ( v5 )
    v9 += 4 * ((v8[80] >> 8) & 1);
    v10 = v9 << 7;
    if ( (short)((v7 - v10) / 256) <= (short)aP1 && (short)((v6 - v10) / 256) <= SHIWORD(aP1) )
    break;
    if ( v12 == (TechnoClass *)aP1 )
    {
    *(int *)aP0->__pad_0 = aP1;
    return aP0->__pad_0;
    }
  }
    *(int *)aP0->__pad_0 = v12;
    return aP0->__pad_0;
}
}

// ==== BACKFILL 0x006D6A90  sub_6D6A90  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
long long sub_6D6A90(unsigned int * a1)
{
{
    void *v1;
    int v2;
    int v4[2];
    v1 = Coord::To_Cell(&DataGlobal_87F7E8, a1);
    v2 = *((int*)(a1) + 1);
    v4[0] = *a1;
    v4[1] = v2;
    return Isometric::InitTables((int)v1, v4);
}
}

// ==== BACKFILL 0x006D6AD0  CellClass::GetByte284  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CellClass::GetByte284(IUnknown * aP0)
{
{
    return *((unsigned char *)Coord::To_Cell(&DataGlobal_87C374[13428], aP0) + 284);
}
}

// ==== BACKFILL 0x006D84D0  sub_6D84D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * sub_6D84D0(int * a1, int * a2)
{
{
    int v2;
    int v4;
    int v5;
    int v6;
    v2 = *((int*)(a2) + 1);
    v5 = *a2;
    v6 = v2;
    if ( !ClampCoordMap(&v5) || g_ArmageddonMode )
  {
    *a1 = *a2;
    *((int*)(a1) + 1) = *((int*)(a2) + 1);
    return a1;
  }
    else
  {
    v4 = v6;
    *a1 = v5;
    *((int*)(a1) + 1) = v4;
    return a1;
  }
}
}

// ==== BACKFILL 0x006D8640  ClampCoordMap  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char ClampCoordMap(AbstractClass * aP0)
{
{
    int v1;
    int v2;
    AbstractClass *v3;
    AbstractClass *v4;
    char v5;
    AbstractClass *v6;
    v1 = *(int *)&DataGlobal_87C374[44084] / 2 + 30 * (2 * *(int *)&DataGlobal_87C374[13680] - *(int *)&DataGlobal_87C374[13672]);
    v2 = v1 + 60 * *(int *)&DataGlobal_87C374[13688] - *(int *)&DataGlobal_87C374[44084];
    v3 = (AbstractClass *)(*(int *)&DataGlobal_87C374[44088] / 2 + 15 * (*(int *)&DataGlobal_87C374[13672] + 2 * *(int *)&DataGlobal_87C374[13684] - 5));
    v4 = *(AbstractClass **)&aP0->__pad_0[4];
    v5 = 0;
    v6 = (AbstractClass *)((char *)(v3) + (60 * *(int *)&DataGlobal_87C374[13692] + 270) / 2 - *(int *)&DataGlobal_87C374[44088]);
    if ( (int)v4 >= (int)v3 )
  {
    if ( (int)v4 > (int)v6 )
    {
    *(int *)&aP0->__pad_0[4] = v6;
    v5 = 1;
    }
  }
    else
  {
    v5 = 1;
    *(int *)&aP0->__pad_0[4] = v3;
  }
    if ( *(int *)aP0->__pad_0 >= v1 )
  {
    if ( *(int *)aP0->__pad_0 <= v2 )
    {
    return v5;
    }
    else
    {
    *(int *)aP0->__pad_0 = v2;
    return 1;
    }
  }
    else
  {
    *(int *)aP0->__pad_0 = v1;
    return 1;
  }
}
}

// ==== BACKFILL 0x006D97D0  TacticalClass::FindOverlay  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::FindOverlay(int a1, IUnknown * aP1, IUnknown * aP2)
{
{
    int *v3;
    Tactical *v4;
    int result;
    char *v6;
    IUnknown *v7;
    int v8;
    int *v9;
    int v10;
    char *v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    Tactical *v18;
    int v19[4];
    char v20[16];
    IUnknown *aP1a;
    v3 = ClipRectIntersection((IUnknown *)v19, aP1, aP2, 0, 0);
    v15 = *v3;
    v16 = v3[1];
    v17 = v3[2];
    v4 = (Tactical *)v3[3];
    result = *(int *)&DataGlobal_89E138[8808] - 1;
    v18 = v4;
    for ( aP1a = (IUnknown *)(*(int *)&DataGlobal_89E138[8808] - 1);
    (int)aP1a >= 0;
    aP1a = (IUnknown *)((char *)aP1a - 1) ) {
    v6 = *(char **)(*(int *)&DataGlobal_89E138[8796] + 4 * result);
    if ( (*(int (__thiscall **)(char *))(*(int *)(v6) + 44))(v6) == 36 && !(*(unsigned char (__thiscall **)(char *))(*(int *)(v6) + 68))(v6) && !*(char *)(*((int *)(v6) + 50) + 691) && !v6[205] )
    {
    v7 = *(IUnknown **)&DataGlobal_87C374[44076];
    v8 = *(int *)&DataGlobal_87C374[44080];
    v9 = (int *)(*(int (__thiscall **)(char *, char *))(*(int *)(v6) + 300))(v6, v20);
    v10 = v8 + v9[1];
    v11 = (char *)(v7) + *v9;
    v12 = v9[2];
    v13 = v9[3];
    if ( (int)v11 < v15 + v17 && v10 < (int)&v18->__pad_0[v16] && (int)&v11[v12] > v15 && v10 + v13 > v16 )
      {
    v19[0] = aP2->field_0;
    v19[1] = aP2->field_4;
    v19[2] = aP2->field_8;
    v14 = *(int *)v6;
    v19[3] = aP2->field_C;
    (*(void (__thiscall **)(char *, int *, int, int))(v14 + 260))(v6, v19, a1, 0);
    v6[128] = 0;
      }
    }
    result = (int)&aP1a[-1].__tail_1602E[1];
  }
    return result;
}
}

// ==== BACKFILL 0x006D9920  TacticalClass::FindBuilding  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::FindBuilding(int a1, IUnknown * aP1, IUnknown * aP2)
{
{
    int *v3;
    Tactical *v4;
    int result;
    char *v6;
    IUnknown *v7;
    int v8;
    int *v9;
    int v10;
    char *v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    Tactical *v18;
    int v19[4];
    char v20[16];
    IUnknown *aP1a;
    v3 = ClipRectIntersection((IUnknown *)v19, aP1, aP2, 0, 0);
    v15 = *v3;
    v16 = v3[1];
    v17 = v3[2];
    v4 = (Tactical *)v3[3];
    result = 0;
    v18 = v4;
    for ( aP1a = 0; (int)aP1a < *(int *)&DataGlobal_89E138[8808]; aP1a = (IUnknown *)((char *)(aP1a) + 1) )
  {
    v6 = *(char **)(*(int *)&DataGlobal_89E138[8796] + 4 * result);
    if ( (*(int (__thiscall **)(char *))(*(int *)(v6) + 44))(v6) == 6 && (!v6[1767] || HouseClass_Player[45087]) )
    {
    v7 = *(IUnknown **)&DataGlobal_87C374[44076];
    v8 = *(int *)&DataGlobal_87C374[44080];
    v9 = (int *)(*(int (__thiscall **)(char *, char *))(*(int *)(v6) + 300))(v6, v20);
    v10 = v8 + v9[1];
    v11 = (char *)(v7) + *v9;
    v12 = v9[2];
    v13 = v9[3];
    if ( (int)v11 < v15 + v17 && v10 < (int)&v18->__pad_0[v16] && (int)&v11[v12] > v15 && v10 + v13 > v16 )
      {
    v19[0] = aP2->field_0;
    v19[1] = aP2->field_4;
    v19[2] = aP2->field_8;
    v14 = *(int *)v6;
    v19[3] = aP2->field_C;
    (*(void (__thiscall **)(char *, int *, int, int))(v14 + 260))(v6, v19, a1, 0);
    v6[128] = 0;
      }
    }
    result = (int)&aP1a->field_0 + 1;
  }
    return result;
}
}

// ==== BACKFILL 0x006D9A50  Render_Render_6D9A50  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_6D9A50(int a1, int a2, int a3, int a4)
{
{
    int result;
    char *v5;
    int *v6;
    int v7;
    int v8;
    int i;
    char v10[16];
    result = 0;
    for ( i = 0; i < DataGlobal_8A03A0; ++i )
  {
    v5 = *(char **)(DataGlobal_8A0394 + 4 * result);
    if ( (*(int (__thiscall **)(char *))(*(int *)(v5) + 44))(v5) == 6 )
    {
    if ( v5[128] )
      {
    v6 = (int *)(*(int (__thiscall **)(char *, char *))(*(int *)(v5) + 300))(v5, v10);
    v7 = DSurface_ViewBounds + *v6;
    v8 = g_Map_VisibleRect + v6[1];
    if ( a1 < v6[2] + v7 && a2 < v6[3] + v8 && a1 + a3 > v7 && a4 + a2 > v8 )
        {
    Cell::CreateCrater(*v6, v6[1], v6[2], v6[3], 0);
    v5[128] = 0;
        }
      }
    }
    result = i + 1;
  }
    return result;
}
}

// ==== BACKFILL 0x006D9F80  TacticalClass::InitScrollBounds  cls=TacticalClass  sig=csp  renamed_refs=6  residual=- ====
namespace gamemd { int TacticalClass::InitScrollBounds(void* a1) {
{
      int result;

      result = this->TacticalClass_field_D90;
      if ( !result )
      {
        result = this->TacticalClass_field_D94;
        if ( !result )
        {
          this->TacticalClass_field_D90 = *a2;
          this->TacticalClass_field_D94 = a2[1];
          this->TacticalClass_field_D98 = *a2;
          result = a2[1];
          this->TacticalClass_field_D9C = result;
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x006D9FC0  TacticalClass::UpdateScrollMaxBounds  cls=TacticalClass  sig=csp  renamed_refs=4  residual=- ====
namespace gamemd { int TacticalClass::UpdateScrollMaxBounds(void* a1) {
{
      int result;

      if ( this->TacticalClass_field_D90 || (result = this->TacticalClass_field_D94) != 0 )
      {
        this->TacticalClass_field_D98 = aP1->field_0;
        result = aP1->field_4;
        this->TacticalClass_field_D9C = result;
      }
      return result;
}
} }

// ==== BACKFILL 0x006D9FF0  PlayerClass::ProcessOccupancyUpdate  cls=PlayerClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int PlayerClass::ProcessOccupancyUpdate(void* a1) {
{
      int result;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;
      _DWORD v9[4];

      if ( this->qD90 || (result = this->qD94) != 0 )
      {
        v4 = this->qD90;
        v5 = this->qD98;
        v6 = this->qD9C;
        v7 = this->qD94;
        if ( v4 > v5 )
        {
          v8 = v4;
          v4 = v5;
          v5 = v8;
        }
        if ( v7 > v6 )
        {
          v7 = v6;
          v6 = this->qD94;
        }
        v9[2] = v5 - v4 + 1;
        v9[3] = v6 - v7 + 1;
        v9[0] = v4;
        v9[1] = v7;
        BuildingClass::ProcessOccupancy(this, (AbstractClass *)v9, a2);
        this->qD90 = 0;
        this->qD94 = 0;
        return 0;
      }
      return result;
}
} }

// ==== BACKFILL 0x006DA080  PlayerClass::HasOccupiedCell  cls=PlayerClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int PlayerClass::HasOccupiedCell() {
{
      int v1;
      int v2;
      int v3;
      int v4;
      int v5;
      int *i;
      int v7;
      int v8;
      int v10;
      int v11;
      int v12;

      v1 = this->qD98;
      v2 = this->qD9C;
      v3 = this->qD90;
      v4 = this->qD94;
      if ( v3 > v1 )
      {
        v3 = this->qD98;
        v1 = this->qD90;
      }
      if ( v4 > v2 )
      {
        v4 = this->qD9C;
        v2 = this->qD94;
      }
      v5 = v2 - v4 + 1;
      v11 = v1 - v3 + 1;
      v12 = v5;
      if ( v11 <= 0 )
        return 0;
      if ( v5 <= 0 )
        return 0;
      v10 = 0;
      if ( this->qDB0 <= 0 )
        return 0;
      for ( i = DataGlobal_B0CEC8; ; i += 3 )
      {
        if ( *i )
        {
          if ( *(_BYTE *)(*i + 144) )
          {
            v7 = i[1] - this->q0B0;
            v8 = i[2] - this->q0B4;
            if ( v7 >= v3 && v7 < v3 + v11 && v8 >= v4 && v8 < v4 + v12 )
              break;
          }
        }
        if ( ++v10 >= this->qDB0 )
          return 0;
      }
      return 1;
}
} }

// ==== BACKFILL 0x006DA160  TacticalClass::ResetScrollBounds  cls=TacticalClass  sig=csp  renamed_refs=4  residual=- ====
namespace gamemd { int TacticalClass::ResetScrollBounds() {
{
      this->TacticalClass_field_D90 = 0;
      this->TacticalClass_field_D98 = 0;
      this->TacticalClass_field_D94 = 0;
      this->TacticalClass_field_D9C = 0;
      return 0;
}
} }

// ==== BACKFILL 0x006DA360  UI_Move  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * UI_Move(unsigned int * a0, MouseClass * aP1, int a3)
{
{
    *a0 = aP1->field_0;
    return a0;
}
}

// ==== BACKFILL 0x006DA370  nullsub_239  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_239(int a1)
{
  ;
}

// ==== BACKFILL 0x006DA560  Tactical::ScrollMap  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
int * Tactical::ScrollMap(Tactical * aP0, int a2)
{
{
    int *result;
    result = (int *)&DataGlobal_B05488[31296];
    do
  {
    if ( (Tactical *)*result == aP0 )
    *result = 0;
    result += 3;
  }
    while ( (int)result < (int)&DataGlobal_B05488[37296] );
    if ( aP0 == *(Tactical **)&DataGlobal_87C374[17924] )
  {
    result = (int *)MIXClass::CopyHeader((int)&DataGlobal_87C374[13428], 0);
    *(int *)&DataGlobal_87C374[17924] = 0;
    *(int *)&DataGlobal_87C374[17928] = 0;
    *(int *)&DataGlobal_87C374[17932] = -1;
  }
    return result;
}
}

// ==== BACKFILL 0x006DBCE0  Tactical::ddtor  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
int Tactical::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -816401526;
  a2[1] = 298984461;
  a2[2] = 1610644609;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x006DBD20  Tactical::InitMap  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
int Tactical::InitMap(int a1, int a2)
{
{
    int result;
    int v3;
    int v4;
    int *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    result = AbstractClass::SaveLoad_Prefix_0((int *)a1, a2);
    if ( result >= 0 )
  {
    if ( a1 )
    SmallFunc_6D1E30((int *)a1, (int)&a2);
    v3 = *(int *)(a1 + 224);
    v4 = 0;
    *(int *)(a1 + 3504) = 0;
    if ( v3 > 0 )
    {
    v5 = (int *)(a1 + 228);
    do
      {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v5);
    ++v4;
    ++v5;
      }
    while ( v4 < *(int *)(a1 + 224) );
    }
    v6 = *(int *)(a1 + 3432);
    v9 = *(int *)(a1 + 3428);
    v10 = v6;
    if ( !ClampCoordMap(&v9) || g_ArmageddonMode )
    {
    v7 = *(int *)(a1 + 3428);
    v8 = *(int *)(a1 + 3432);
    }
    else
    {
    v7 = v9;
    v8 = v10;
    }
    *(int *)(a1 + 3428) = v7;
    *(int *)(a1 + 3444) = v7;
    *(int *)(a1 + 3432) = v8;
    *(int *)(a1 + 3448) = v8;
    TacticalClass::CalcViewportCells(a1);
    *(char *)(a1 + 3453) = 1;
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x006DBE00  Tactical::UpdateMapView  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
int Tactical::UpdateMapView(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x006DC430  GetCoordDataMap  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Map_GetCoordData(int a1)
{
{
    return DataGlobal_B0CEC8[3 * a1];
}
}

// ==== BACKFILL 0x006DC450  Tactical::StubReturn56  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
int Tactical::StubReturn56()
{
return 56;
}

// ==== BACKFILL 0x006DC460  Tactical::StubReturn3608  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
int Tactical::StubReturn3608()
{
return 3608;
}

// ==== BACKFILL 0x006DC470  Tactical::UpdateView  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
Tactical * Tactical::UpdateView(char a2)
{
{
    *(void**)this = vt_Tactical;
    *(this + 1) = (unsigned int)vt_Tactical;
    *(this + 2) = (unsigned int)vt_Tactical;
    *(this + 3) = &vt_Tactical;
    g_TacticalClass_Instance = 0;
    AbstractClass::DTOR(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (Tactical *)this;
}
}

// ==== BACKFILL 0x006DC4E0  VectorClass_UDirtyAreaStruct::Destroy  cls=VectorClass_UDirtyAreaStruct  sig=csp  renamed_refs=0  residual=- ====
void VectorClass_UDirtyAreaStruct::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}

// ==== BACKFILL 0x006DC510  VectorClass_UDirtyAreaStruct::GetItemIndex  cls=VectorClass_UDirtyAreaStruct  sig=csp  renamed_refs=0  residual=- ====
unsigned int VectorClass_UDirtyAreaStruct::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (a2 - this->Items) / 0x14u;
    else
    return 0;
}
}

// ==== BACKFILL 0x006DC970  VectorClass_UDirtyAreaStruct::FindItemIndex  cls=VectorClass_UDirtyAreaStruct  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_UDirtyAreaStruct::FindItemIndex(int a2)
{
{
    int v2;
    int v3;
    int i;
    v2 = this->Count;
    v3 = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = this->Items;
    *(char*)(i + 16) != *(char*)(a2 + 16)
    || *(int*)i != *(int*)a2 || *(int*)(i + 4) != *(int*)(a2 + 4)
    || *(int*)(i + 8) != *(int*)(a2 + 8)
    || *(int*)(i + 12) != *(int*)(a2 + 12);
    i += 20 ) {
    if ( ++v3 >= v2 )
    return -1;
  }
    return v3;
}
}

// ==== BACKFILL 0x006DD2C0  TActionClass::ExecuteAction  cls=TActionClass  sig=csp  renamed_refs=9  residual=- ====
int TActionClass::ExecuteAction(int a2, int a3)
{
    TActionClass* v3;
    v3 = this->TActionClass_field_28;
    if ( v3 == (TActionClass*)a2 )
        this->TActionClass_field_28 = v3->TActionClass_field_28;
    if ( this->TActionClass_field_30 == (TeamTypeClass*)a2 )
        this->TActionClass_field_30 = (TeamTypeClass*)0;
    if ( this->TActionClass_field_50 == (TriggerTypeClass*)a2 )
        this->TActionClass_field_50 = (TriggerTypeClass*)0;
    if ( this->TActionClass_field_4C == (TagTypeClass*)a2 )
        this->TActionClass_field_4C = (TagTypeClass*)0;
    return 0;
}
