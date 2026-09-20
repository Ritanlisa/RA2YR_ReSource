// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x006A04C0  sub_6A04C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6A04C0::sub_6A04C0(IUnknown * aP1)
{
{
    int v2;
    int *v4;
    TechnoClass *v5;
    IUnknown *v6;
    int *v7;
    AbstractClass *v9;
    v2 = g_OverlayTypeConfig.field_0;
    v4 = (int *)(this + 64);
    if ( this->M64 != g_OverlayTypeConfig.field_0 || this->M68 != g_OverlayTypeConfig.field_4 || this->M72 != g_OverlayTypeConfig.field_8 )
  {
    *v4 = g_OverlayTypeConfig.field_0;
    this->M68 = g_OverlayTypeConfig.field_4;
    v5 = (TechnoClass *)g_OverlayTypeConfig.field_8;
    this->M99 = 0;
    this->M72 = v5;
    v2 = g_OverlayTypeConfig.field_0;
  }
    if ( aP1->field_0 != v2 || aP1->field_4 != g_OverlayTypeConfig.field_4 || aP1->field_8 != g_OverlayTypeConfig.field_8 )
  {
    *v4 = aP1->field_0;
    this->M68 = aP1->field_4;
    v6 = (IUnknown *)aP1->field_8;
    this->M99 = 1;
    this->M72 = v6;
    v9 = *(AbstractClass **)(this + 12);
    v7 = Coord::To_Cell(&DataGlobal_87F7E8, aP1);
    if ( CrateClass::ProcessPickup(v7, v9) && !*(char *)(this->M12 + 129) )
    {
    WalkLocomotion::MoveTo(this, aP1, 1);
    return 1;
    }
    if ( *(char *)(this->M12 + 144) )
    {
    *v4 = g_OverlayTypeConfig.field_0;
    this->M68 = g_OverlayTypeConfig.field_4;
    this->M72 = g_OverlayTypeConfig.field_8;
    this->M99 = 0;
    }
  }
    return 0;
}
}

// ==== BACKFILL 0x006A05C0  JumpjetLocomotionClass::UpdateFacingDirection_2  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::UpdateFacingDirection_2(int a1, int a2)
{
{
    return FacingClass::Update((char *)(*(int *)(a1 + 8) + 904), &a2);
}
}

// ==== BACKFILL 0x006A3E50  JumpjetLocomotionClass::SmallStub_6A3E50  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_6A3E50(int a1)
{
return 2;
}

// ==== BACKFILL 0x006A3E60  ShipLocomotionClass::ddtor  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int ShipLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 736785633;
  a2[1] = 299072714;
  a2[2] = 268440766;
  a2[3] = 1822515787;
  return 0;
}

// ==== BACKFILL 0x006A3EA0  JumpjetLocomotionClass::StubReturnZero_14  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_14(int a1)
{
return 0;
}

// ==== BACKFILL 0x006A3EB0  JumpjetLocomotionClass::DispatchCheckState_6A3EB0  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::DispatchCheckState_6A3EB0(TunnelLocomotionClass * aP0)
{
{
    return JumpjetLocomotionClass::CheckState(aP0);
}
}

// ==== BACKFILL 0x006A3F00  JumpjetLocomotionClass::MoveToChecked_0  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::MoveToChecked_0(ShipLocomotionClass * aP0, int a2)
{
{
    char result;
    result = (char)aP0 + 60;
    if ( aP0->Dest[2] != *(int *)&DataGlobal_B05488.__pad_14B0[3776] || aP0->HeadToCoord[0] != *(int *)&DataGlobal_B05488.__pad_14B0[3780] || aP0->HeadToCoord[1] != *(int *)&DataGlobal_B05488.__pad_14B0[3784] )
  {
    return WalkLocomotion::MoveTo((int)&aP0[-1].Piggybackee, (IUnknown *)&aP0->Dest[2], a2);
  }
    return result;
}
}

// ==== BACKFILL 0x006A4210  JumpjetLocomotionClass::SetByteField_1  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SetByteField_1(int a1)
{
{
    *(char *)(a1 + 97) = 0;
    return a1;
}
}

// ==== BACKFILL 0x006A4220  JumpjetLocomotionClass::SetByteField_2  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SetByteField_2(int a1)
{
{
    *(char *)(a1 + 97) = 1;
    return a1;
}
}

// ==== BACKFILL 0x006A4230  JumpjetLocomotionClass::SmallStub_6A4230  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_6A4230(int a1)
{
{
    return *(int *)(a1 + 84);
}
}

// ==== BACKFILL 0x006A4240  JumpjetLocomotionClass::SmallStub_6A4240  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_6A4240(int a1)
{
{
    return *(int *)(a1 + 88);
}
}

// ==== BACKFILL 0x006A4250  JumpjetLocomotionClass::SmallStub_6A4250  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_6A4250(int a1)
{
{
    return *(int *)(a1 + 72);
}
}

// ==== BACKFILL 0x006A4280  JumpjetLocomotionClass::GetLinkedLocomotorPointer_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
BOOL JumpjetLocomotionClass::GetLinkedLocomotorPointer_0(int a1)
{
{
    return *(int *)(a1 + 80) != 0;
}
}

// ==== BACKFILL 0x006A42A0  ShipLocomotionClass::StubReturn112  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int ShipLocomotionClass::StubReturn112()
{
return 112;
}

// ==== BACKFILL 0x006A42B0  ShipLocomotionClass::ProcessMove  cls=ShipLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
ShipLocomotionClass * ShipLocomotionClass::ProcessMove(char a2)
{
{
    ILocomotion *v3;
    *(void**)this = (unsigned int)vt_ShipLocomotionClass;
    *(this + 1) = (ILocomotion *)&vt_ShipLocomotionClass;
    *(this + 6) = (ILocomotion *)&vt_ShipLocomotionClass_2;
    v3 = *(this + 26);
    if ( v3 )
    (*(void (__stdcall **)(ILocomotion *))(*(int *)(v3) + 8))(v3);
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ShipLocomotionClass *)this;
}
}

// ==== BACKFILL 0x006A4300  JumpjetLocomotionClass::SmallStub_6A4300  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_6A4300(int a1, const void * a2, int * a3)
{
{
    return ShipLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}
}

// ==== BACKFILL 0x006A4310  JumpjetLocomotionClass::SmallStub_6A4310  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_6A4310(int a1)
{
{
    return ShipLocomotionClass::AddRef(a1 - 4);
}
}

// ==== BACKFILL 0x006A4320  JumpjetLocomotionClass::SmallStub_6A4320  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_6A4320(int a1)
{
{
    return ShipLocomotionClass::Release((volatile LONG *)(a1 - 4));
}
}

// ==== BACKFILL 0x006A4740  SideClass::ddtor  cls=SideClass  sig=csp  renamed_refs=0  residual=- ====
int SideClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -985803918;
  a2[1] = 298980638;
  a2[2] = 1610642817;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x006A48A0  SideClass::SaveLoad_Prefix_0  cls=SideClass  sig=csp  renamed_refs=0  residual=- ====
int SideClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    int v4;
    int i;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
  {
    v4 = *a1;
    aP2 = *(int *)&aP0->ImageAllocated;
    (*(void (__stdcall **)(int *, int *, int, int))(v4 + 16))(a1, &aP2, 4, 0);
    for ( i = 0; i < aP2; ++i )
    (*(void (__stdcall **)(int *, int, int, int))(*a1 + 16))(a1, aP0->Armor[0] + 4 * i, 4, 0);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x006A4910  SideClass::StubReturn180  cls=SideClass  sig=csp  renamed_refs=0  residual=- ====
int SideClass::StubReturn180()
{
return 180;
}

// ==== BACKFILL 0x006A4920  SideClass::StubReturn28  cls=SideClass  sig=csp  renamed_refs=0  residual=- ====
int SideClass::StubReturn28()
{
return 28;
}

// ==== BACKFILL 0x006A4E60  TabClass::initTabData  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* TabClass::initTabData() {
{
      char *v2;
      int v3;
      _BYTE *v4;
      int v5;
      char v7;

      RadarClass::Create((int)this);
      v2 = this + 5444;
      v3 = 4;
      do
      {
        *(_DWORD *)v2 = 0;
        v2[4] = 0;
        *((_DWORD *)v2 + 2) = g_CurrentFrame;
        *((_DWORD *)v2 + 4) = 0;
        *((_DWORD *)v2 + 5) = 0;
        *((_DWORD *)v2 + 6) = 1;
        Array::ForEach((int)(v2 + 88), 52, 75, TabClass::drawTabBackground);
        v2 += 3988;
        --v3;
      }
      while ( v3 );
      this->q539C = 0;
      this->q53A0 = 0;
      this->q53A4 = 0;
      this->q53A5 = 0;
      this->q53A6 = 1;
      this->q53A8 = 0;
      this->q5514 = 0;
      this->q5515 = 0;
      *(_DWORD *)this = &SidebarClass::`vftable';
      v4 = this + 5444;
      v5 = 4;
      do
      {
        if ( v4 )
          TabClass::updateTabProduction(v4, (int)&v7);
        v4 += 3988;
        --v5;
      }
      while ( v5 );
      return this;
}
} }

// ==== BACKFILL 0x006A4FF0  nullsub_36  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_36(IUnknown * aP0)
{
  ;
}

// ==== BACKFILL 0x006A5000  ObjectClass::processDamage  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::processDamage()
{
{
    int v1;
    int result;
    PowerClass::Stub(this);
    v1 = 4;
    do
  {
    result = SearchMIXFile(DataGlobal_83F92C, 0);
    --v1;
    DataGlobal_B07BC0 = result;
  }
    while ( v1 );
    return result;
}
}

// ==== BACKFILL 0x006A5F20  SidebarClass::UpdateCameoProductionState  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int SidebarClass::UpdateCameoProductionState(void* a1) {
{
      int v3;
      int v5;
      int v6;
      int v7;
      int v8;
      int v10;

      LOBYTE(v3) = this->q53A5;
      if ( (_BYTE)v3 )
      {
        if ( a2 )
        {
          v10 = (*(int (__thiscall **)(_DWORD *))(*a2 + 132))(a2);
          LOBYTE(v3) = (_BYTE)HouseClass_Player;
          if ( HouseClass_Player )
          {
            v5 = (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2);
            v6 = (*(int (__thiscall **)(_DWORD *))(*a2 + 64))(a2);
            switch ( v5 )
            {
              case 15:
              case 16:
                v3 = 2;
                break;
              case 1:
              case 40:
              case 2:
              case 3:
                v3 = 3;
                break;
              case 6:
              case 7:
                v3 = GetHouseTechLevel(v5, v6) == 5;
                break;
              case 57:
              case 32:
              case 31:
                v3 = 1;
                break;
              default:
                v3 = -1;
                break;
            }
            v7 = this->q539C;
            if ( v3 == v7 )
            {
              LOBYTE(v3) = HouseClass::ShouldDisableCameo(HouseClass_Player, v10);
              if ( (_BYTE)v3 )
              {
                v8 = this->q539C;
                this->q53A6 = 1;
                *(_BYTE *)(this + 3988 * v8 + 5504) = 1;
                MapClass::MarkForRedraw(&DataGlobal_87F7E8, 0);
                LOBYTE(v3) = (_BYTE)g_CurrentFrame;
                if ( this->q53A0 <= (int)g_CurrentFrame )
                {
                  LOBYTE(v3) = (_BYTE)g_CurrentFrame + 2;
                  this->q53A0 = g_CurrentFrame + 1;
                }
              }
            }
            else if ( v5 == 6 )
            {
              LOBYTE(v3) = *(_BYTE *)(a2[328] + 5835);
              if ( (_BYTE)v3 )
              {
                if ( v7 == 3 )
                {
                  this->q53A6 = 1;
                  this->q443C = 1;
                  MapClass::MarkForRedraw(&DataGlobal_87F7E8, 0);
                  LOBYTE(v3) = (_BYTE)g_CurrentFrame;
                  if ( this->q53A0 <= (int)g_CurrentFrame )
                  {
                    LOBYTE(v3) = (_BYTE)g_CurrentFrame + 2;
                    this->q53A0 = g_CurrentFrame + 1;
                  }
                }
              }
            }
          }
        }
      }
      return v3;
}
} }

// ==== BACKFILL 0x006A60E0  SuperWeapon::UpdateTargetRedrawState  cls=SuperWeapon  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* SuperWeapon::UpdateTargetRedrawState(void* a1) {
{
      wchar_t *result;

      result = *(wchar_t **)(this + 21404);
      if ( a2 == result )
      {
        this->q53A6 = 1;
        *(_BYTE *)(this + 3988 * (_DWORD)result + 5504) = 1;
        MapClass::MarkForRedraw(&DataGlobal_87F7E8, 0);
        result = g_CurrentFrame;
        if ( this->q53A0 <= (int)g_CurrentFrame )
        {
          result = g_CurrentFrame + 1;
          this->q53A0 = g_CurrentFrame + 1;
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x006A6140  Sidebar::FindProductionType  cls=Sidebar  sig=csp  renamed_refs=0  residual=- ====
char Sidebar::FindProductionType(FactoryClass * aP1, MouseClass * aP2, int a4)
{
{
    int v5;
    int v6;
    int v7;
    int *v8;
    int v9;
    int *i;
    if ( aP2 == (MouseClass *)15 || aP2 == (MouseClass *)16 )
  {
    v5 = 2;
  }
    else if ( aP2 == (MouseClass *)1 || aP2 == (MouseClass *)40 || aP2 == (MouseClass *)2 || aP2 == (MouseClass *)3 )
  {
    v5 = 3;
  }
    else if ( aP2 == (MouseClass *)6 || aP2 == (MouseClass *)7 )
  {
    v5 = GetHouseTechLevel((int)aP2, a4) == 5;
  }
    else if ( aP2 == (MouseClass *)57 || aP2 == (MouseClass *)32 || aP2 == (MouseClass *)31 )
  {
    v5 = 1;
  }
    else
  {
    v5 = -1;
  }
    v6 = 997 * v5;
    v7 = 0;
    v8 = this + v6 + 1361;
    v9 = *(this + v6 + 1382);
    if ( v9 <= 0 )
    return 0;
    for ( i = v8 + 22; (MouseClass *)i[1] != aP2 || *i != a4; i += 13 )
  {
    if ( ++v7 >= v9 )
    return 0;
  }
    v8[13 * v7 + 25] = aP1;
    *((char *)(v8) + 61) = 1;
    *((char *)(v8) + 60) = 1;
    MapClass::MarkForRedraw(&DataGlobal_87F7E8, 0);
    return 1;
}
}

// ==== BACKFILL 0x006A7D20  HouseClass::UpdateAllProductionTabs  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int HouseClass::UpdateAllProductionTabs() {
{
      char v2;
      int v3;
      _BYTE *v4;
      char result;
      int v6;

      v2 = 0;
      v3 = 0;
      v4 = this + 5504;
      do
      {
        result = SidebarClass::UpdateProduction((int)(v4 - 60));
        if ( result && v3 == this->costBuildingsMult )
        {
          *v4 = 1;
          v2 = 1;
        }
        ++v3;
        v4 += 3988;
      }
      while ( v3 < 4 );
      if ( v2 )
      {
        v6 = *(_DWORD *)this;
        this->q53A6 = 1;
        return (*(int (__thiscall **)(char *, _DWORD))(v6 + 56))(this, 0);
      }
      return result;
}
} }

// ==== BACKFILL 0x006A80A0  TabClass::updateTabProduction  cls=TabClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { void* TabClass::updateTabProduction(int a1) {
{
      _BYTE *result;
      wchar_t *v3;
      int v4;
      _BYTE *v5;
      int v6;
      wchar_t *v7;
      _DWORD *v8;
      int v9;

      result = this;
      *(_DWORD *)this = 0;
      this->TabClass_field_0x4 = 0;
      v3 = g_CurrentFrame;
      *((_DWORD *)result + 4) = 0;
      *((_DWORD *)result + 2) = v3;
      *((_DWORD *)result + 5) = 0;
      *((_DWORD *)result + 6) = 1;
      *((_DWORD *)result + 8) = 0;
      *((_DWORD *)result + 9) = 0;
      *((_DWORD *)result + 10) = DataGlobal_B07DC8;
      *((_DWORD *)result + 11) = DataGlobal_B07DCC;
      *((_DWORD *)result + 12) = DataGlobal_B07DD0;
      v4 = DataGlobal_B07DD4;
      *((_DWORD *)result + 14) = 0;
      result[60] = 1;
      *((_DWORD *)result + 13) = v4;
      result[61] = 0;
      result[62] = 0;
      result[63] = 0;
      *((_DWORD *)result + 16) = -1;
      *((_DWORD *)result + 17) = 0;
      *((_DWORD *)result + 18) = 0;
      *((_DWORD *)result + 19) = 0;
      *((_DWORD *)result + 20) = 0;
      *((_DWORD *)result + 21) = 0;
      v5 = result + 112;
      v6 = 75;
      do
      {
        *((_DWORD *)v5 - 1) = 0;
        *v5 = 0;
        v7 = g_CurrentFrame;
        *((_DWORD *)v5 + 3) = 0;
        *((_DWORD *)v5 + 1) = v7;
        *((_DWORD *)v5 + 4) = 0;
        *((_DWORD *)v5 + 5) = 1;
        v5 += 52;
        --v6;
      }
      while ( v6 );
      v8 = result + 92;
      v9 = 75;
      do
      {
        *(v8 - 1) = 0;
        *v8 = 0;
        v8[1] = 0;
        v8[2] = 0;
        v8 += 13;
        --v9;
      }
      while ( v9 );
      return result;
}
} }

// ==== BACKFILL 0x006A81B0  HouseClass::ClearProductionQueue  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* HouseClass::ClearProductionQueue() {
{
      _DWORD *result;
      int v2;
      wchar_t *v3;
      wchar_t **v4;
      wchar_t *v5;

      this->q03E = 0;
      this->q03F = 0;
      this->q03D = 0;
      this->conYardsCapacity = -1;
      this->buildings = 0;
      this->buildingsCapacity = 0;
      this->repairStationsCount = 0;
      result = (_DWORD *)(this + 128);
      v2 = 75;
      do
      {
        *(result - 10) = 0;
        *(result - 9) = 0;
        *(result - 8) = 0;
        *(result - 7) = 0;
        *(result - 6) = 0;
        v3 = g_CurrentFrame;
        v4 = (wchar_t **)(result - 3);
        *result = 0;
        result += 13;
        --v2;
        *v4 = v3;
        v4[1] = v5;
        v4[2] = 0;
        *(result - 18) = 0;
        *(result - 11) = 0;
      }
      while ( v2 );
      return result;
}
} }

// ==== BACKFILL 0x006A8220  SidebarClass::InitCameoGrid  cls=SidebarClass  sig=csp  renamed_refs=4  residual=- ====
namespace gamemd { int SidebarClass::InitCameoGrid(int a1) {
{
      int v2;
      int v3;
      int result;
      int v5;
      int v6;
      int v7;
      _DWORD *v8;
      int v9;
      int v10;
      int i;

      this->SidebarClass_field_0x38 = a2;
      v2 = 26;
      if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) )
        v2 = 18;
      v3 = (g_DSurface_ViewBounds - g_SidebarBounds - v2 + g_DSurface_SidebarBounds - 7) / 50;
      result = 0;
      v5 = v3;
      for ( i = 0; i < v5; ++i )
      {
        v6 = 0;
        v7 = 2 * result;
        do
        {
          v8 = (_DWORD *)(56 * (v7 + 60 * this->SidebarClass_field_0x38) + 11566720);
          v8[9] = 202;
          v8[3] = v6 * DataGlobal_B0B4FC + DataGlobal_880D4C[997 * this->SidebarClass_field_0x38];
          v9 = i * DataGlobal_B0B500;
          v10 = DataGlobal_880D50[997 * this->SidebarClass_field_0x38];
          v8[12] = v7;
          ++v6;
          ++v7;
          v8[4] = v10 + v9 + 1;
          v8[5] = 60;
          v8[6] = 48;
          v8[11] = this;
        }
        while ( v6 < 2 );
        result = i + 1;
      }
      return result;
}
} }

// ==== BACKFILL 0x006A8330  SidebarClass::RefreshCameoGrid  cls=SidebarClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { int SidebarClass::RefreshCameoGrid() {
{
      int v2;
      int v3;
      int v4;
      unsigned int v5;
      int v6;

      v2 = 26;
      if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) )
        v2 = 18;
      v3 = 0;
      v4 = g_DSurface_ViewBounds - g_SidebarBounds - v2 + g_DSurface_SidebarBounds - 7;
      v5 = (unsigned int)((unsigned __int64)(1374389535LL * v4) >> 32) >> 31;
      v6 = 2 * (v4 / 50);
      if ( v6 > 0 )
      {
        do
        {
          Hash::Reset((_DWORD *)(56 * (v3 + 60 * this->SidebarClass_field_0x38) + 11566720));
          LOBYTE(v5) = Hash::InsertOrdered(&DataGlobal_87F7E8, 56 * (v3 + 60 * this->SidebarClass_field_0x38) + 11566720);
          ++v3;
        }
        while ( v3 < v6 );
      }
      g_CameoRenderFlag = 1;
      return v5;
}
} }

// ==== BACKFILL 0x006A83E0  SidebarClass::sortCameoList  cls=SidebarClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int SidebarClass::sortCameoList() {
{
    int i;
    char result;
    for ( i = 0; i < 60; ++i )
    result = Tactical::SelectObject(&DataGlobal_87F7E8, 56 * (i + 60 *(void**)this->SidebarClass_field_0x38) + 11566720);
    return result;
}
} }

// ==== BACKFILL 0x006AACE0  sub_6AACE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6AACE0::sub_6AACE0(int a2, int a3)
{
{
    this->M44 = a2;
    this->M48 = a3;
    return a2;
}
}

// ==== BACKFILL 0x006ABA40  ObjectClass::checkHealth  cls=SBGadgetClass@SidebarClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::checkHealth()
{
{
    Mouse::SetCursor((int)&DataGlobal_87F7E8, 0, 0);
    return 1;
}
}

// ==== BACKFILL 0x006ABA60  sub_6ABA60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6ABA60::sub_6ABA60(int a2, int a3, int a4)
{
{
    int v4;
    int v5;
    int *i;
    v4 = this->M84;
    v5 = 0;
    if ( v4 <= 0 )
    return 0;
    for ( i = (int *)(this + 88); i[1] != a3 || *i != a4; i += 13 )
  {
    if ( ++v5 >= v4 )
    return 0;
  }
    *(int *)(this + 52 * v5 + 100) = a2;
    this->M61 = 1;
    this->M60 = 1;
    MapClass::MarkForRedraw(&DataGlobal_87F7E8, 0);
    return 1;
}
}

// ==== BACKFILL 0x006ABAC0  PlayerClass::HasPlayers  cls=PlayerClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool PlayerClass::HasPlayers() {
{
      return this->q054 > 0;
}
} }

// ==== BACKFILL 0x006ABC60  HouseClass::GetStatus  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::GetStatus(IUnknown * aP1)
{
{
    int v2;
    if ( this == (IUnknown *)15 || this == (IUnknown *)16 )
    return 2;
    if ( this == (IUnknown *)1 || this == (IUnknown *)40 || this == (IUnknown *)2 || this == (IUnknown *)3 )
    return 3;
    if ( this == (IUnknown *)6 || this == (IUnknown *)7 )
    return GetHouseTechLevel((int)this, v2) == 5;
    if ( this == (IUnknown *)57 || this == (IUnknown *)32 || this == (IUnknown *)31 )
    return 1;
    return -1;
}
}

// ==== BACKFILL 0x006ABCD0  globalHelper_0ABCD0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_6ABCD0(int a1, int a2, int a3)
{
{
    switch ( a1 )
  {
    case 16: return 2;
    case 40: case 3: return 3;
    case 7: return a2 == 5;
  }
    return -1;
}
}

// ==== BACKFILL 0x006AC7A0  ObjectClass::updateAnimation  cls=SBGadgetClass@SidebarClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ObjectClass::updateAnimation(char a2)
{
{
    GadgetClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return &this->vfptr;
}
}

// ==== BACKFILL 0x006AC7C0  TabClass::drawTabBackground  cls=TabClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { int TabClass::drawTabBackground() {
{
      IUnknown *v2;

      this->TabClass_field_0x14 = 0;
      this->q018 = 0;
      v2 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248];
      this->q024 = 0;
      this->TabClass_field_0x1C = v2;
      this->q028 = 0;
      this->q02C = 1;
      return (TabClass *)this;
}
} }

// ==== BACKFILL 0x006AC7F0  ObjectClass::DestructWithRadar  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* ObjectClass::DestructWithRadar(int a2) {
{
    char *v3;
    int v4;
    v3 = this + 21484;
    v4 = 4;
    do
  {
    v3 -= 3988;
    Array::ForEachReverse((int)v3, 52, 75, (int (__thiscall *)(int))nullsub_56);
    --v4;
  }
    while ( v4 );
    RadarClass::Destruct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (SidebarClass *)this;
}
} } }

// ==== BACKFILL 0x006AC870  SidebarClass::initButtons  cls=SidebarClass  sig=csp  renamed_refs=3  residual=- ====
namespace gamemd { void* SidebarClass::initButtons() {
{
      wchar_t *v2;

      *(_DWORD *)this = 0;
      this->SidebarClass_field_0x4 = 0;
      v2 = g_CurrentFrame;
      this->q010 = 0;
      this->SidebarClass_field_0x8 = v2;
      this->SidebarClass_field_0x14 = 0;
      this->q018 = 1;
      return this;
}
} }

// ==== BACKFILL 0x006ADDF0  Skirmish_Setup_6ADDF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void sub_6ADDF0(HWND a1, int a2, int a3)
{
{
    int v5;
    int v6;
    bool v7;
    HWND v8;
    int i;
    int ResourceID4CSF;
    int PlayerCountMap;
    bool v13;
    if ( a2 == -1 )
    PlayerCountMap = 8;
    else
    PlayerCountMap = ReadPlayerCountMap(a2);
    v5 = ReadPlayerCountMap(a3);
    v6 = v5 - PlayerCountMap;
    if ( a2 >= 0 && a3 >= 0 && a2 < g_MultiplayerOptions && a3 < g_MultiplayerOptions && (v13 = IsRandMap::Sed(*(int *)(g_MultiplayerGameState + 4 * a2)), v7 = IsRandMap::Sed(*(int *)(g_MultiplayerGameState + 4 * a3)), v13) && v7 )
  {
    v8 = a1;
    HideSkirmishSpawnLocations(a1, 1);
    Skirmish_Setup_6ADDF0_Setup(a1, 1, v5 - 1);
  }
    else
  {
    v8 = a1;
  }
    if ( v6 <= 0 )
  {
    if ( v6 < 0 )
    HideSkirmishSpawnLocations(v8, v5);
  }
    else
  {
    Skirmish_Setup_6ADDF0_Setup(v8, PlayerCountMap, v6);
  }
    if ( v8 && g_GameStateFlags )
  {
    for ( i = 1; i < 8; ++i )
    {
    ResourceID4CSF = GetResourceID4CSF((void *)i);
    if ( g_GameStateFlags && *(char *)(g_GameStateFlags + 60) )
    SetupLobbyPlayerSlots(v8, ResourceID4CSF, 3);
    else
    SetupLobbyPlayerSlots(v8, ResourceID4CSF, -2);
    }
  }
}
}

// ==== BACKFILL 0x006AF650  SlaveManagerClass::CreateSlave  cls=SlaveManagerClass  sig=csp  renamed_refs=0  residual=- ====
wchar_t * SlaveManagerClass::CreateSlave(wchar_t ** a2)
{
{
    int v3;
    int v4;
    wchar_t *result;
    wchar_t *v6;
    v3 = *(void**)this->house;
    v4 = (*(int (__thiscall **)(int))(*(void**)this->master + 60))(this->master);
    result = (wchar_t *)(*(int (__thiscall **)(int, int))(v3 + 140))(this->house, v4);
    *a2 = result;
    if ( result )
  {
    (*(void (__thiscall **)(wchar_t *))(*(int *)(result) + 212))(result);
    *((int *)*a2 + 183) = this->master;
    *((int*)(a2) + 1) = 0;
    result = g_CurrentFrame;
    *((int*)(a2) + 2) = g_CurrentFrame;
    *((int*)(a2) + 3) = v6;
    *((int*)(a2) + 4) = 0;
  }
    return result;
}
}
