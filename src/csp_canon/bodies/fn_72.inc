// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00720020  AbstractClass::getCurrentWeapon  cls=TextButtonClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::getCurrentWeapon(int a2, int a3) {
{
    int v4;
    int v5;
    CampaignScore *Instance;
    v4 = *(int *)this->__pad_0;
    this->field_38 = a2;
    (*(void (**)(void))(v4 + 72))();
    LOBYTE(v5) = a3;
    if ( a3 )
  {
    v5 = this->field_38;
    if ( v5 )
    {
    Instance = (CampaignScore *)TextRenderer::GetInstance();
    v5 = Text::MeasureWidth(this->field_38, 0) + 8;
    *(int *)&this->__pad_0[20] = v5;
    *(int *)&this->__pad_0[24] = Instance->CampaignScore_field_0x1C + 2;
    }
  }
    return v5;
}
} } }

// ==== BACKFILL 0x00720070  AbstractClass::selectWeapon  cls=TextButtonClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::selectWeapon() {
{
      char result;
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;
      int v14;

      result = this->__pad_0[53];
      if ( !result )
      {
        if ( this->__pad_0[52] )
        {
          v3 = *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + BuildingAnim::GetType()) + 780);
          if ( *(_DWORD *)(v3 + 4) == 1 )
            v4 = *(unsigned __int8 *)(*(_DWORD *)(v3 + 372) + 12);
          else
            v4 = *(unsigned __int16 *)(*(_DWORD *)(v3 + 372) + 24);
          v5 = *(_DWORD *)&this->__pad_0[12];
          v11 = v5 - 1;
          v6 = *(_DWORD *)&this->__pad_0[16];
          v12 = v6 - 1;
          v13 = *(_DWORD *)&this->__pad_0[20] + v5 + 2;
          v14 = *(_DWORD *)&this->__pad_0[24] + v6 + 2;
          (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 88))(
            *(_DWORD *)&DataGlobal_87F8E4[31280],
            &v11,
            v4);
        }
        if ( this->__pad_0[30] )
          v7 = 3;
        else
          v7 = this->__pad_0[44] == 0;
        v8 = *(_DWORD *)&this->__pad_0[12];
        v12 = *(_DWORD *)&this->__pad_0[16];
        v9 = *(_DWORD *)&this->__pad_0[24];
        v11 = v8;
        v10 = *(_DWORD *)&this->__pad_0[20];
        v14 = v9;
        v13 = v10;
        return DrawBuildingTilesSHP(&v11, v7, 1);
      }
      return result;
}
} } }

// ==== BACKFILL 0x00720140  AbstractClass::fireWeapon  cls=TextButtonClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* AbstractClass::fireWeapon(int a2) {
{
      int *result;
      int v4;
      int v5;
      _DWORD *v6;
      int *v7;
      int v8;
      _DWORD v9[2];
      int v10;
      _BYTE v11[16];

      result = (int *)BuildingAnim::GetType();
      if ( this->field_38 )
      {
        if ( this->__pad_0[30] )
        {
          v4 = 0;
        }
        else if ( this->__pad_0[44] || (v4 = 20480, this->__pad_0[45]) )
        {
          v4 = 24576;
        }
        if ( g_AnimClass_SaveState )
        {
          if ( (int)result <= 0 || (int)result >= g_AnimClass_SaveState )
            result = 0;
          result = (int *)*((_DWORD *)BuildingTypeClass_AnimTable + (_DWORD)result);
          if ( result )
          {
            v9[0] = (*(int *)&this->__pad_0[20] >> 1) + *(_DWORD *)&this->__pad_0[12] - 1;
            v9[1] = *(_DWORD *)&this->__pad_0[16] + 1;
            v5 = v4 | this->q03C;
            BYTE1(v5) |= 1u;
            v8 = v5;
            v7 = result;
            v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 120))(
                             *(_DWORD *)&DataGlobal_87F8E4[31280],
                             v11);
            return globalHelper_0A6010(&v10, a2, *(int *)&DataGlobal_87F8E4[31280], v6, (int)v9, (int)v7, 0, v8, 1);
          }
        }
      }
      return result;
}
} } }

// ==== BACKFILL 0x00720440  sub_720440  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_720440::sub_720440()
{
{
    this->M640 = 0;
    this->M644 = 0;
    this->M648 = 1;
    this->M649 = 0;
    this->M650 = 0;
    this->M652 = -1;
    *(char *)this = 0;
    this->M256 = 0;
    this->M512 = 0;
    return this;
}
}

// ==== BACKFILL 0x00720960  sub_720960  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_720960::sub_720960()
{
{
    *(void**)this = -1;
    this->M4 = -1;
    this->M8 = -1;
    this->M12 = 255;
    this->M16 = 0;
    this->M17 = 0;
    this->M18 = 0;
    this->M24 = 0;
    this->M28 = 0;
    this->M32 = 1;
    this->M33 = 0;
    this->M20 = &vt_DynamicVectorClass_ThemeControl;
    this->M40 = 10;
    this->M36 = 0;
    this->M44 = 0;
    return this;
}
}

// ==== BACKFILL 0x007209B0  AudioSettings::Check  cls=AudioSettings  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int AudioSettings::Check(int a1) {
{
      if ( a2 >= this->q024 )
        return 0;
      else
        return *(_DWORD *)(this->q018 + 4 * a2) + 512;
}
} }

// ==== BACKFILL 0x00720E50  AudioSettings::ComputeTransform  cls=AudioSettings  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int AudioSettings::ComputeTransform(int a1) {
{
      if ( a2 >= this->q024 )
        return 0;
      else
        return Math::RoundToInt(*(float *)(*(_DWORD *)(this->q018 + 4 * a2) + 644));
}
} }

// ==== BACKFILL 0x00721010  SaveGame::VtableDispatch  cls=SaveGame  sig=csp  renamed_refs=0  residual=- ====
int SaveGame::VtableDispatch(int a2)
{
{
    int result;
    result = (*(int (__stdcall **)(int, int, int, int))(*(int *)(a2) + 16))(a2, (int)this + 4, 4, 0);
    if ( result >= 0 )
    return (*(int (__stdcall **)(int, int, int, int))(*(int *)(a2) + 16))(a2, (int)this + 8, 4, 0);
    return result;
}
}

// ==== BACKFILL 0x00721040  LoadGame_Start  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_721040(int a1)
{
{
    int v1;
    int v2;
    int v3;
    int v5;
    v1 = a1;
    v2 = (*(int (__stdcall **)(int, int *, int, int))(*(int *)(a1) + 12))(a1, &a1, 4, 0);
    if ( v2 >= 0 )
  {
    v2 = (*(int (__stdcall **)(int, int *, int, int))(*(int *)(v1) + 12))(v1, &v5, 4, 0);
    if ( v2 >= 0 )
    {
    if ( DataGlobal_A8EBA5 )
      {
    ThemeClass::Play(&g_BuildingTypeClass_Count, a1);
    v3 = v5;
    if ( g_ThemeMIXLoaded )
        {
    if ( Audio::IsSoundEnabled() )
          {
    if ( !DataGlobal_A8ED64 )
            {
    DataGlobal_A83D18 = v3;
    if ( v3 != -1 && v3 != -2 && v3 != DataGlobal_A83D14 )
              {
    Debug::Log();
    if ( DataGlobal_A83D3C )
                {
    if ( DataGlobal_A83D21 && !AudioSample::IsBuffering(DataGlobal_A83D3C) )
    Audio::Release((int *)DataGlobal_A83D3C);
    if ( Audio::IsSoundPlaying((int *)DataGlobal_A83D3C) != 0 )
                  {
    if ( DataGlobal_A83D3C )
    ThemeClass::RequestBuffer((int *)DataGlobal_A83D3C);
    DataGlobal_A83D21 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
    return v2;
}
}

// ==== BACKFILL 0x00721140  RulesClass::IsTypeBuildable  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool RulesClass::IsTypeBuildable(int a1) {
{
      int v3;
      int v4;

      if ( aP1 == (TechnoTypeClass *)-3 || aP1 == (TechnoTypeClass *)-2 )
        return 1;
      if ( (unsigned int)aP1 >= this->q024 )
        return 0;
      v3 = *(_DWORD *)(this->AttackingAircraftSightRange + 4 * (_DWORD)aP1);
      if ( !*(_BYTE *)(v3 + 650) )
        return 0;
      if ( !*(_BYTE *)(v3 + 648) )
        return 0;
      if ( HouseClass_Player )
      {
        v4 = *(_DWORD *)(v3 + 652);
        if ( v4 != -1 && *(_DWORD *)(HouseClass_Player->field_34 + 188) != v4 )
          return 0;
      }
      return g_GameMode_Current || g_ScenarioClass_Instance->techLevel >= *(_DWORD *)(v3 + 640);
}
} }

// ==== BACKFILL 0x00721DC0  TiberiumClass::Harvest  cls=TiberiumClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { int TiberiumClass::Harvest(void* a1) {
{
      AbstractTypeClass::ProcessPower((char *)this, a2);
      Power::TimerProcess(this->location);
      Power::TimerProcess(this->lineTrailer);
      Power::TimerProcess(this->q0B8);
      Power::TimerProcess(this->uniqueId);
      Power::TimerProcess(this->abstractFlags);
      Power::TimerProcess(this->q0E4);
      return Power::TimerProcess(this->q0E8);
}
} }

// ==== BACKFILL 0x00721E40  TiberiumClass::ddtor  cls=TiberiumClass  sig=csp  renamed_refs=0  residual=- ====
int TiberiumClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -985803917;
  a2[1] = 298980638;
  a2[2] = 1610642817;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x007220D0  TiberiumClass::SaveLoad_Prefix_0  cls=TiberiumClass  sig=csp  renamed_refs=0  residual=- ====
int TiberiumClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    int v4;
    int i;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
  {
    v4 = *a1;
    aP2 = aP0->ChargerTurrets[6];
    (*(void (__stdcall **)(int *, int *, int, int))(v4 + 16))(a1, &aP2, 4, 0);
    for ( i = 0; i < aP2; ++i )
    (*(void (__stdcall **)(int *, int, int, int))(*a1 + 16))(a1, aP0->ChargerTurrets[3] + 4 * i, 4, 0);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x00722A20  sub_722A20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_722A20::sub_722A20()
{
{
    int *v2;
    int i;
    void **v4;
    v2 = *(int **)(this + 244);
    if ( v2 )
  {
    for ( i = 0; i <= *v2; *(int *)(v2[2] + 4 * i - 4) = 0 )
    ++i;
    *v2 = 0;
    v4 = *(void ***)(this + 244);
    if ( v4 )
    {
    __3_YAXPAX_Z(v4[2]);
    __3_YAXPAX_Z(v4);
    }
    this->M244 = 0;
  }
    if ( this->M252 )
  {
    __3_YAXPAX_Z(*(void **)(this + 252));
    this->M252 = 0;
  }
    if ( this->M248 )
  {
    __3_YAXPAX_Z(*(void **)(this + 248));
    this->M248 = 0;
  }
    this->M240 = 0;
}
}

// ==== BACKFILL 0x00723510  sub_723510  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_723510::sub_723510()
{
{
    int *v2;
    int i;
    void **v4;
    v2 = *(int **)(this + 272);
    if ( v2 )
  {
    for ( i = 0; i <= *v2; *(int *)(v2[2] + 4 * i - 4) = 0 )
    ++i;
    *v2 = 0;
    v4 = *(void ***)(this + 272);
    if ( v4 )
    {
    __3_YAXPAX_Z(v4[2]);
    __3_YAXPAX_Z(v4);
    }
    this->M272 = 0;
  }
    if ( this->M280 )
  {
    __3_YAXPAX_Z(*(void **)(this + 280));
    this->M280 = 0;
  }
    if ( this->M276 )
  {
    __3_YAXPAX_Z(*(void **)(this + 276));
    this->M276 = 0;
  }
    this->M268 = 0;
}
}

// ==== BACKFILL 0x007236E0  TiberiumClass::StubReturn296  cls=TiberiumClass  sig=csp  renamed_refs=0  residual=- ====
int TiberiumClass::StubReturn296()
{
return 296;
}

// ==== BACKFILL 0x007236F0  TiberiumClass::StubReturn46  cls=TiberiumClass  sig=csp  renamed_refs=0  residual=- ====
int TiberiumClass::StubReturn46()
{
return 46;
}

// ==== BACKFILL 0x00723710  TiberiumClass::DrawOre  cls=TiberiumClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* TiberiumClass::DrawOre(int a2) {
{
    TiberiumClass::CleanupMembers((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TiberiumClass *)this;
}
} }

// ==== BACKFILL 0x00723CA0  ScriptTypeClass::SetField  cls=ScriptTypeClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { void* ScriptTypeClass::SetField(void* a1) {
{
      Color *result;
      int v4;
      int v5;

      result = aP1;
      if ( aP1 )
      {
        sscanf((const char *const)aP1, g_INI_Key_Digest[32], &aP1, &v5);
        result = aP1;
        v4 = v5;
        *this = aP1;
        this->vtable2 = v4;
      }
      return (char *)result;
}
} }

// ==== BACKFILL 0x00723CE0  ScriptTypeClass::FormatToString  cls=ScriptTypeClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScriptTypeClass::FormatToString(void* aP1) {
{
    if ( !aP1 )
    return 0;
    sprintf(aP1->__pad_0, (ObjectClass *)g_INI_Key_Digest[32], (INIClass *)*(void**)this);
    return strlen(aP1->__pad_0);
}
} }

// ==== BACKFILL 0x00724000  MainWindowProc_Helper_724000  cls=ToolTipManager  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_724000::sub_724000(int a2)
{
{
    char *v3;
    int v4;
    v3 = this + 564;
    this->M4 = 0;
    this->M8 = a2;
    this->M12 = 0;
    this->M552 = 1000;
    this->M560 = 10000;
    *((int *)(v3) + 1) = 0;
    *((int *)(v3) + 2) = 0;
    v3[12] = 1;
    v3[13] = 0;
    *(int *)v3 = &vt_DynamicVectorClass_ToolTip_const;
    *((int *)(v3) + 5) = 10;
    *((int *)(v3) + 4) = 0;
    this->M588 = 0;
    this->M592 = 0;
    this->M596 = 0;
    this->M600 = 0;
    this->M604 = 0;
    v4 = *(int *)v3;
    *(int *)this = &vt_ToolTipManager;
    (*(void (__thiscall **)(char *))(v4 + 12))(v3);
    __3_YAXPAX_Z(*((void **)(this) + 147));
    this->M588 = 0;
    this->M592 = 0;
    this->M596 = 0;
    this->M600 = 0;
    this->M604 = 0;
    return this;
}
}

// ==== BACKFILL 0x00724520  SidebarClass::initializeStrip  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int SidebarClass::initializeStrip(int a1) {
{
      this->q228 = a2;
      return a2;
}
} }

// ==== BACKFILL 0x00724530  SidebarClass::updateStripVisibility  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int SidebarClass::updateStripVisibility() {
{
      int result;

      result = this->q228;
      this->q22C = result;
      return result;
}
} }

// ==== BACKFILL 0x00724540  SidebarClass::updateStripPosition  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int SidebarClass::updateStripPosition() {
{
      int result;

      result = this->q22C;
      this->q228 = result;
      return result;
}
} }

// ==== BACKFILL 0x00724550  sub_724550  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_724550::sub_724550()
{
{
    return this->M560;
}
}

// ==== BACKFILL 0x00724560  sub_724560  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_724560::sub_724560(int a2)
{
{
    this->M560 = a2;
    return a2;
}
}

// ==== BACKFILL 0x00724570  sub_724570  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_724570::sub_724570()
{
{
    return this->M580;
}
}

// ==== BACKFILL 0x00724A30  sub_724A30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_724A30::sub_724A30(int * a2)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    int *v6;
    int v7;
    int v8;
    int v10;
    v2 = this->M580;
    v3 = 0;
    if ( v2 <= 0 )
    return 0;
    v10 = this->M568;
    v4 = v10;
    v5 = *a2;
    while ( 1 )
  {
    v6 = (int *)(*(int *)(v4) + 4);
    if ( v5 >= *v6 && v5 <= *v6 + *(int *)(*(int *)(v4) + 12) )
    {
    v7 = *(int *)(*(int *)(v4) + 8);
    v8 = *((int*)(a2) + 1);
    if ( v8 >= v7 && v8 <= v7 + *(int *)(*(int *)(v4) + 16) )
    break;
    }
    ++v3;
    v4 += 4;
    if ( v3 >= v2 )
    return 0;
  }
    return *(int *)(v10 + 4 * v3);
}
}

// ==== BACKFILL 0x00724AA0  ToolTipManager::addRef  cls=ToolTipManager  sig=csp  renamed_refs=0  residual=- ====
char ToolTipManager::addRef(int a1)
{
{
    return 1;
}
}

// ==== BACKFILL 0x00724AB0  ToolTipManager::release  cls=ToolTipManager  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ToolTipManager::release(int a1) {
{
      this->q018 = 0;
      this->q01C = 0;
      this->TextBuffer = 0;
      this->q024 = 0;
      this->Position = 0;
      return 0;
}
} }

// ==== BACKFILL 0x00724B80  ToolTipManager::ddtor  cls=ToolTipManager  sig=csp  renamed_refs=0  residual=- ====
int ToolTipManager::ddtor(char a2)
{
{
    int result;
    if ( a2 == 1 )
    ToolTipClass::initString((wchar_t *)this);
    result = this->Position;
    if ( result )
    return this->read(this + 24);
    return result;
}
}

// ==== BACKFILL 0x00724BB0  ToolTipManager::read  cls=ToolTipManager  sig=csp  renamed_refs=0  residual=- ====
void ToolTipManager::read(int a1)
{
{
    Debug::Log();
}
}

// ==== BACKFILL 0x00724BD0  ToolTipManager::stubReturnFalse  cls=ToolTipManager  sig=csp  renamed_refs=0  residual=- ====
int ToolTipManager::stubReturnFalse(int a1)
{
return 0;
}

// ==== BACKFILL 0x00724F90  ??0Iostream_init_QAE_XZ_6  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
Iostream_init * E4Recv_724F90::__0Iostream_init_QAE_XZ_6()
{
{
    return this;
}
}

// ==== BACKFILL 0x00726690  TriggerClass::FireAction  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TriggerClass::FireAction(int aP1, int a3) {
{
    TriggerClass *result;
    if ( (HouseClass *)this->buildingType == aP1 )
    this->buildingType = 0;
    result = (TriggerClass *)this->nextTrigger;
    if ( result == (TriggerClass *)aP1 )
  {
    result = (TriggerClass *)result->nextTrigger;
    this->nextTrigger = result;
  }
    if ( (HouseClass *)this->house == aP1 )
    this->house = 0;
    return (int)result->__pad_0;
}
} }

// ==== BACKFILL 0x007266C0  sub_7266C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_7266C0::sub_7266C0(char a2)
{
{
    this->M64 |= 1 << a2;
    return this;
}
}

// ==== BACKFILL 0x00726720  TeamClass::AddToBuildQueue  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TeamClass::AddToBuildQueue() {
{
      int result;

      this->target = 1;
      result = DataGlobal_B0F6A0;
      if ( DataGlobal_B0F6A8 < DataGlobal_B0F6A0
        || (DataGlobal_B0F6A5 || !DataGlobal_B0F6A0)
        && DataGlobal_B0F6AC > 0
        && (result = (*(int (__thiscall **)(int *, int, _DWORD))(DataGlobal_B0F698 + 8))(
                       &DataGlobal_B0F698,
                       DataGlobal_B0F6A0 + DataGlobal_B0F6AC,
                       0),
            (_BYTE)result) )
      {
        result = DataGlobal_B0F6A8++;
        *((_DWORD *)DataGlobal_B0F69C + result) = this;
      }
      return result;
}
} }

// ==== BACKFILL 0x00726780  sub_726780  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_726780::sub_726780()
{
{
    return this->M48;
}
}

// ==== BACKFILL 0x00726790  TriggerClass::FireTrigger  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TriggerClass::FireTrigger(void* a1) {
{
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;

      AbstractClass::ProcessPower((#378 *)this);
      v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->buildingType + 4) + 16))(this->buildingType + 4);
      Power::TimerProcess(v3);
      v4 = this->nextTrigger;
      if ( v4 )
      {
        v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4);
        v4 = Power::TimerProcess(v5);
      }
      LOBYTE(v4) = this->destroyed;
      Power::FlagProcess(a2, v4);
      LOBYTE(v6) = this->enabled;
      Power::FlagProcess(a2, v6);
      v7 = this->timer;
      v8 = this->q03C;
      if ( v7 != -1 )
      {
        if ( (int)g_CurrentFrame - v7 >= v8 )
          v8 = 0;
        else
          v8 -= (int)g_CurrentFrame - v7;
      }
      Power::TimerProcess(v8);
      return Power::TimerProcess(this->occuredEvents);
}
} }

// ==== BACKFILL 0x00726820  TriggerClass::ddtor  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1070787184;
  a2[1] = 298977834;
  a2[2] = 1610655660;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x00726860  TriggerClass::LoadTrigger  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerClass::LoadTrigger(AbstractClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TriggerClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TriggerClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TriggerClass;
    *(int *)&aP0->__pad_0[12] = &vt_TriggerClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].__pad_0[8]);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x007268D0  TriggerClass::SaveTrigger  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerClass::SaveTrigger(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x007268F0  TActionClass::executeAirstrikeAction  cls=TActionClass  sig=csp  renamed_refs=1  residual=- ====
int TActionClass::executeAirstrikeAction()
{
{
    this->TActionClass_field_44 = 1;
    return BuildingClass::ProcessUpgradeEffects(this);
}
}

// ==== BACKFILL 0x00726900  TActionClass::executeDetonateAction  cls=TActionClass  sig=csp  renamed_refs=1  residual=- ====
void TActionClass::executeDetonateAction()
{
{
    this->TActionClass_field_44 = 0;
}
}

// ==== BACKFILL 0x00726920  sub_726920  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_726920::sub_726920(int a2)
{
{
    this->M44 = a2;
    return a2;
}
}

// ==== BACKFILL 0x00726930  TriggerClass::StubReturn72  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerClass::StubReturn72()
{
return 72;
}

// ==== BACKFILL 0x00726940  TriggerClass::StubReturn38  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerClass::StubReturn38()
{
return 38;
}

// ==== BACKFILL 0x00726C80  TriggerTypeClass::Construct  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* TriggerTypeClass::Construct(void* a1) {
{
      int v3;
      int v4;
      TriggerTypeClass *v5;

      AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1);
      this->ArrayIndex = -1;
      this->Difficulty = 1;
      this->q09D = 1;
      this->q09E = 1;
      this->Enabled = 1;
      this->MustTransfer = 0;
      this->House = 0;
      this->NextTrigger = 0;
      this->FirstEvent = 0;
      this->FirstAction = 0;
      *this = 0;
      *(this + 1) = 0;
      *(this + 2) = 0;
      *(this + 3) = &vt_TriggerTypeClass;
      if ( *(int *)&stru_B05488[41440] < *(int *)&stru_B05488[41432]
        || (stru_B05488[41437] || !*(_DWORD *)&stru_B05488[41432])
        && *(int *)&stru_B05488[41444] > 0
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488[41424] + 8))(
             &stru_B05488[41424],
             *(_DWORD *)&stru_B05488[41432] + *(_DWORD *)&stru_B05488[41444],
             0) )
      {
        v3 = (*(_DWORD *)&stru_B05488[41440])++;
        *(_DWORD *)(*(_DWORD *)&stru_B05488[41428] + 4 * v3) = this;
      }
      if ( *(int *)&stru_B05488[41464] < *(int *)&stru_B05488[41456]
        || (stru_B05488[41461] || !*(_DWORD *)&stru_B05488[41456])
        && *(int *)&stru_B05488[41468] > 0
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488[41448] + 8))(
             &stru_B05488[41448],
             *(_DWORD *)&stru_B05488[41456] + *(_DWORD *)&stru_B05488[41468],
             0) )
      {
        v4 = (*(_DWORD *)&stru_B05488[41464])++;
        *(_DWORD *)(*(_DWORD *)&stru_B05488[41452] + 4 * v4) = this;
      }
      this->ArrayIndex = g_MultiplayerLogBuffer;
      if ( g_MultiplayerLogBuffer < LightConvertClass_Array
        || (DataGlobal_8B4185 || !LightConvertClass_Array)
        && DataGlobal_8B418C > 0
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(DataGlobal_8B4178 + 8))(
             &DataGlobal_8B4178,
             LightConvertClass_Array + DataGlobal_8B418C,
             0) )
      {
        v5 = (TriggerTypeClass *)g_MultiplayerLogBuffer++;
        *((_DWORD *)DataGlobal_8B417C + (_DWORD)v5) = this;
      }
      return this;
}
} }

// ==== BACKFILL 0x00726E00  TriggerClass::ProcessEvents  cls=TriggerTypeClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { int TriggerClass::ProcessEvents() {
{
      int v2;
      _DWORD *v3;
      _DWORD *v4;
      _DWORD *v5;
      _DWORD *v6;
      int v7;
      int v8;
      int v10;

      *(_DWORD *)this = 0;
      this->vtable3 = 0;
      this->vtable4 = 0;
      this->vtable4 = &vt_TriggerTypeClass;
      AbstractClass::AnnounceExpiredPointer((void **)this, 1);
      v10 = this;
      v2 = (*(int (__thiscall **)(int *, int *))(DataGlobal_8B4178 + 16))(&DataGlobal_8B4178, &v10);
      if ( v2 != -1 && v2 < g_MultiplayerLogBuffer && v2 < --g_MultiplayerLogBuffer )
      {
        do
        {
          ++v2;
          *((_DWORD *)DataGlobal_8B417C + v2 - 1) = *((_DWORD *)DataGlobal_8B417C + v2);
        }
        while ( v2 < g_MultiplayerLogBuffer );
      }
      v3 = *(_DWORD **)(this + 176);
      if ( v3 )
      {
        do
        {
          v4 = (_DWORD *)v3[10];
          if ( v3 )
            (*(void (__thiscall **)(_DWORD *, int))(*v3 + 32))(v3, 1);
          v3 = v4;
        }
        while ( v4 );
      }
      v5 = *(_DWORD **)(this + 172);
      if ( v5 )
      {
        do
        {
          v6 = (_DWORD *)v5[10];
          if ( v5 )
            (*(void (__thiscall **)(_DWORD *, int))(*v5 + 32))(v5, 1);
          v5 = v6;
        }
        while ( v6 );
      }
      v10 = this;
      v7 = (*(int (__thiscall **)(int *, int *))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v10);
      if ( v7 != -1 && v7 < g_AnimManager && v7 < --g_AnimManager )
      {
        do
        {
          ++v7;
          *((_DWORD *)g_AnimPoolCount + v7 - 1) = *((_DWORD *)g_AnimPoolCount + v7);
        }
        while ( v7 < g_AnimManager );
      }
      v10 = this;
      v8 = (*(int (__thiscall **)(int *, int *))(TActionClass_Array + 16))(&TActionClass_Array, &v10);
      if ( v8 != -1 && v8 < g_TActionClassState && v8 < --g_TActionClassState )
      {
        do
        {
          ++v8;
          *((_DWORD *)DataGlobal_B0F65C + v8 - 1) = *((_DWORD *)DataGlobal_B0F65C + v8);
        }
        while ( v8 < g_TActionClassState );
      }
      return AbstractTypeClass::Dtor((_DWORD *)this);
}
} }

// ==== BACKFILL 0x00726FCE  ?do_always_noconv_codecvt_base_std__MBE_NXZ_20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char _do_always_noconv_codecvt_base_std__MBE_NXZ_20()
{
return 1;
}

// ==== BACKFILL 0x00727010  HouseClass::FindType2728  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int HouseClass::FindType2728(int a2) {
{
    int *v2;
    char result;
    int v4;
    v2 = (int *)this->psychicDetectionCapacity;
    result = 0;
    if ( v2 )
  {
    while ( 1 )
    {
    v4 = v2[11];
    if ( (v4 == 27 || v4 == 28) && v2[13] == a2 )
    break;
    v2 = (int *)v2[10];
    if ( !v2 )
    return result;
    }
    return 1;
  }
    return result;
}
} }

// ==== BACKFILL 0x00727090  TriggerTypeClass::GetAction  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TriggerTypeClass::GetAction(int a1, int a2) {
{
    int v4;
    int *i;
    int v6;
    int *j;
    int result;
    v4 = this->nextTrigger;
    if ( v4 && v4 == a2 )
    this->nextTrigger = *(int *)(v4 + 168);
    i = (int *)this->firstAction;
    for ( ; i; i = (int *)i[10] )
    (*(void (__thiscall **)(int *, int, int))(*i + 40))(i, a2, 1);
    v6 = this->firstAction;
    if ( v6 == a2 )
    this->firstAction = *(int *)(v6 + 40);
    j = (int *)this->firstEvent;
    for ( ; j; j = (int *)j[10] )
    (*(void (__thiscall **)(int *, int, int))(*j + 40))(j, a2, 1);
    result = this->firstEvent;
    if ( result == a2 )
  {
    result = *(int *)(result + 40);
    this->firstEvent = result;
  }
    return result;
}
} }

// ==== BACKFILL 0x00727190  sub_727190  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_727190::sub_727190()
{
{
    ObjectClass *v2;
    const void **v3;
    v2 = 0;
    v3 = (const void **)&DataGlobal_830620[82904];
    while ( _strcmpi(this, *v3) )
  {
    ++v3;
    v2 = (ObjectClass *)((char *)(v2) + 1);
    if ( (int)v3 >= (int)&DataGlobal_830620[82916] )
    return 0;
  }
    return v2;
}
}

// ==== BACKFILL 0x007276A0  TriggerTypeClass::GetParameter  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TriggerTypeClass::GetParameter(void* a1) {
{
      int v3;
      const char *v4;
      int v5;
      const char *v6;
      char *v7;
      int v8;
      int i;
      int *v10;
      int v11;
      int j;
      int v13;
      char *v15;
      char Buffer[512];

      v3 = this->NextTrigger;
      v4 = (const char *)(v3 + 36);
      if ( !v3 )
        v4 = g_Str__none_;
      v5 = this->House;
      if ( v5 )
        v6 = (const char *)(v5 + 36);
      else
        v6 = g_Str__none_;
      sprintf(
        Buffer,
        DataGlobal_844A48,
        v6,
        v4,
        (const char *)(this + 100),
        this->Enabled == 0,
        this->Difficulty != 0,
        this->q09D != 0,
        this->q09E != 0,
        this->MustTransfer != 0);
      v7 = (char *)(this + 36);
      v15 = (char *)(this + 36);
      INIClass::SetString(a2, (unsigned __int8 *)DataGlobal_844A3C, (char *)(this + 36), Buffer);
      v8 = this->FirstEvent;
      for ( i = 0; v8; ++i )
        v8 = *(_DWORD *)(v8 + 40);
      sprintf(Buffer, g_Str_Trace__d, i);
      v10 = *(int **)(this + 172);
      if ( v10 )
      {
        do
        {
          strcat(Buffer, Delimiter);
          TEventClass::PrepareSaveToINI(v10, Buffer);
          v10 = (int *)v10[10];
        }
        while ( v10 );
        v7 = (char *)(this + 36);
      }
      INIClass::SetString(a2, (unsigned __int8 *)DataGlobal_844A2C, v7, Buffer);
      v11 = this->FirstAction;
      for ( j = 0; v11; ++j )
        v11 = *(_DWORD *)(v11 + 40);
      sprintf(Buffer, g_Str_Trace__d, j);
      v13 = this->FirstAction;
      if ( v13 )
      {
        do
        {
          strcat(Buffer, Delimiter);
          ScriptAction::Serialize(v13, Buffer);
          v13 = *(_DWORD *)(v13 + 40);
        }
        while ( v13 );
        v7 = v15;
      }
      INIClass::SetString(a2, (unsigned __int8 *)DataGlobal_844A34, v7, Buffer);
      return 1;
}
} }

// ==== BACKFILL 0x00727B30  TriggerTypeClass::PowerDrainUpdate  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TriggerTypeClass::PowerDrainUpdate(int * a2) {
{
    int v3;
    int v4;
    int v5;
    int result;
    int v7;
    int v8;
    int v9;
    AbstractTypeClass::ProcessPower((char *)this, a2);
    v3 = (*(int (__stdcall **)(int))(*(int *)(this->house + 4) + 16))(this->house + 4);
    Power::TimerProcess(v3);
    v4 = this->nextTrigger;
    if ( v4 )
  {
    v5 = (*(int (__stdcall **)(int))(*(int *)(v4 + 4) + 16))(v4 + 4);
    Power::TimerProcess(v5);
  }
    result = this->firstEvent;
    if ( result )
  {
    v7 = (*(int (__stdcall **)(int))(*(int *)(result + 4) + 16))(result + 4);
    result = Power::TimerProcess(v7);
  }
    v8 = this->firstAction;
    if ( v8 )
  {
    v9 = (*(int (__stdcall **)(int))(*(int *)(v8 + 4) + 16))(v8 + 4);
    return Power::TimerProcess(v9);
  }
    return result;
}
} }

// ==== BACKFILL 0x00727BB0  TriggerTypeClass::GetClassIdentifier  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1070787183;
  a2[1] = 298977834;
  a2[2] = 1610655660;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x00727BF0  TriggerTypeClass::LoadTypeData  cls=TriggerTypeClass  sig=csp  renamed_refs=5  residual=- ====
int TriggerTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1);
    *(int *)aP0->vtable1 = (unsigned int)vt_TriggerTypeClass;
    *(int *)&aP0->vtable1[4] = (unsigned int)vt_TriggerTypeClass;
    *(int *)&aP0->vtable1[8] = (unsigned int)vt_TriggerTypeClass;
    *(int *)&aP0->vtable1[12] = &vt_TriggerTypeClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].uniqueId);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].abstractFlags);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].nextArrayIndex);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].vtable1[12]);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x00727C80  TriggerTypeClass::Write  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerTypeClass::Write(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x00727CA0  TriggerTypeClass::GetTypeIdentifier  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerTypeClass::GetTypeIdentifier()
{
return 39;
}

// ==== BACKFILL 0x00727CB0  TriggerTypeClass::GetObjectSize  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerTypeClass::GetObjectSize()
{
return 180;
}

// ==== BACKFILL 0x00727CC0  TriggerTypeClass::GetAuxField  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TriggerTypeClass::GetAuxField() {
{
    return this->ArrayIndex;
}
} }

// ==== BACKFILL 0x00727CD0  TextRenderer::Destructor  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
TriggerTypeClass * TextRenderer::Destructor(char a2)
{
{
    TriggerClass::ProcessEvents((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TriggerTypeClass *)this;
}
}

// ==== BACKFILL 0x007281A0  TubeClass::LoadState  cls=TubeClass  sig=csp  renamed_refs=0  residual=- ====
int TubeClass::LoadState(AbstractClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::Constructor(aP0);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TubeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TubeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TubeClass;
    *(int *)&aP0->__pad_0[12] = &vt_TubeClass;
    }
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x007281E0  TubeClass::SaveState  cls=TubeClass  sig=csp  renamed_refs=0  residual=- ====
int TubeClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x007283C0  ScenarioClass::LoadWaypoints  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::LoadWaypoints() {
{
      CCINIClass *v1;
      int result;
      int v3;
      unsigned __int8 *StringByIndex;
      AbstractClass *v5;
      AbstractClass *v6;
      char *v7;
      char *v8;
      char *v9;
      char *v10;
      char *v11;
      int *v12;
      char *v13;
      CCINIClass *aP2;
      __int16 v15[2];
      CCINIClass *v16;
      int v17;
      INIClass String[8];

      v1 = this;
      v16 = this;
      INIClass::ResetSection(this);
      result = INIClass::GetKeyCount(v1->__pad_0, *(INIClass **)&stru_830620[83008]);
      v3 = 0;
      v17 = result;
      aP2 = 0;
      if ( result > 0 )
      {
        while ( 1 )
        {
          StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(
                                               v1->__pad_0,
                                               *(CCINIClass **)&stru_830620[83008],
                                               aP2);
          INIClass::GetString(
            (unsigned __int8 ***)v1,
            *(INIClass **)&stru_830620[83008],
            StringByIndex,
            0,
            String,
            512);
          v5 = (AbstractClass *)__2_YAPAXI_Z(0x1C4u);
          if ( v5 )
          {
            v15[0] = 0;
            v15[1] = 0;
            v6 = TubeClass::Construct(v5, v15, 0);
          }
          else
          {
            v6 = 0;
          }
          v7 = strtok(String[0].__pad_0, Delimiter[0]);
          *(_WORD *)v6[1].__pad_0 = atoi(v7);
          v8 = strtok(0, Delimiter[0]);
          *(_WORD *)&v6[1].__pad_0[2] = atoi(v8);
          v9 = strtok(0, Delimiter[0]);
          *(_DWORD *)&v6[1].__pad_0[8] = atoi(v9);
          v10 = strtok(0, Delimiter[0]);
          *(_WORD *)&v6[1].__pad_0[4] = atoi(v10);
          v11 = strtok(0, Delimiter[0]);
          *(_WORD *)&v6[1].__pad_0[6] = atoi(v11);
          v6[12].uniqueId = -1;
          v12 = (int *)&v6[1].__pad_0[12];
          do
          {
            v13 = strtok(0, Delimiter[0]);
            *v12 = atoi(v13);
            ++v6[12].uniqueId;
            if ( *v12 == -1 )
              break;
            ++v3;
            ++v12;
          }
          while ( v3 < 100 );
          *((_WORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)v6[1].__pad_0) + 139) = (_WORD)aP2;
          result = v17;
          aP2 = (CCINIClass *)((char *)aP2 + 1);
          if ( (int)aP2 >= v17 )
            break;
          v1 = v16;
          v3 = 0;
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x00728540  sub_728540  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_728540::sub_728540(int a2)
{
{
    int v2;
    int *v3;
    int v4;
    int v5;
    short v6;
    short v8;
    v2 = this->M36;
    v8 = HIWORD(v2);
    if ( v2 == *(int *)a2 )
    return 1;
    v3 = this + 12;
    if ( this->M48 == -1 )
    return 1;
    while ( 1 )
  {
    v4 = *v3++;
    v5 = v4 & 7;
    v6 = v8 + HIWORD(Direction_X_Offsets[v5]);
    LOWORD(v2) = v2 + LOWORD(Direction_X_Offsets[v5]);
    v8 = v6;
    if ( (short)v2 == *(short *)a2 && v6 == *(short *)(a2 + 2) )
    break;
    if ( *v3 == -1 )
    return 1;
  }
    return 0;
}
}

// ==== BACKFILL 0x00728630  TubeClass::PowerDrainUpdate  cls=TubeClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TubeClass::PowerDrainUpdate(void* a1) {
{
      int *v3;
      int v4;

      AbstractClass::ProcessPower((#378 *)this);
      Checksummer::Add_WORD(a2, this->objectTypeFlags);
      Checksummer::Add_WORD(a2, this->q026);
      Checksummer::Add_WORD(a2, this->owningHouseIndex);
      Checksummer::Add_WORD(a2, this->q02A);
      Power::TimerProcess(this->fallRate);
      v3 = (int *)(this + 48);
      v4 = 100;
      do
      {
        Power::TimerProcess(*v3++);
        --v4;
      }
      while ( v4 );
      return Power::TimerProcess(this->q1C0);
}
} }

// ==== BACKFILL 0x007286B0  TubeClass::StubReturn452  cls=TubeClass  sig=csp  renamed_refs=0  residual=- ====
int TubeClass::StubReturn452()
{
return 452;
}

// ==== BACKFILL 0x007286C0  TubeClass::StubReturn53  cls=TubeClass  sig=csp  renamed_refs=0  residual=- ====
int TubeClass::StubReturn53()
{
return 53;
}

// ==== BACKFILL 0x007286D0  TubeClass::ddtor  cls=TubeClass  sig=csp  renamed_refs=0  residual=- ====
int TubeClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 189572124;
  a2[1] = 298955687;
  a2[2] = 1610635188;
  a2[3] = 2041169559;
  return 0;
}

// ==== BACKFILL 0x00728A00  SmallFunc_728A00  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_728A00::sub_728A00()
{
{
    LocomotionClass::Init((int *)this);
    this->M24 = 0;
    this->M28 = DataGlobal_B0F910;
    this->M32 = DataGlobal_B0F914;
    this->M36 = DataGlobal_B0F918;
    this->M40 = g_CurrentFrame;
    this->M48 = 0;
    this->M52 = 0;
    this->M56 = 0;
    *(void**)this = vt_TunnelLocomotionClass;
    this->M4 = &vt_TunnelLocomotionClass;
    return this;
}
}

// ==== BACKFILL 0x00728A50  JumpjetLocomotionClass::ShortFunc_728A50  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::ShortFunc_728A50(int a1)
{
{
    return *(int *)(a1 + 20) != 0;
}
}

// ==== BACKFILL 0x00728A60  JumpjetLocomotionClass::StubReturnZero_20  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::StubReturnZero_20(unsigned int * a1)
{
{
    char result;
    if ( !(*(unsigned char (__stdcall **)(int *))(*a1 + 16))(a1) )
    return 0;
    result = 1;
    if ( *((int*)(a1) + 5) == 1 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x00728A90  JumpjetLocomotionClass::GetCoordinateConditional_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetCoordinateConditional_0(unsigned int * a1, unsigned int * a2)
{
{
    int *result;
    int v3;
    int v4;
    int v5;
    if ( (*(unsigned char (__stdcall **)(int *))(*a1 + 16))(a1) )
  {
    result = a2;
    v3 = *((int*)(a1) + 6);
    v4 = *((int*)(a1) + 7);
    v5 = *((int*)(a1) + 8);
  }
    else
  {
    v3 = *(int *)(*((int*)(a1) + 2) + 156);
    v4 = *(int *)(*((int*)(a1) + 2) + 160);
    v5 = *(int *)(*((int*)(a1) + 2) + 164);
    result = a2;
  }
    *a2 = v3;
    *((int*)(a2) + 1) = v4;
    *((int*)(a2) + 2) = v5;
    return result;
}
}

// ==== BACKFILL 0x00728AF0  JumpjetLocomotionClass::SyncMovementPosition  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SyncMovementPosition(int a1, int a2, int a3, int a4)
{
{
    int result;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int *v10;
    int v11;
    int v12[3];
    result = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 892))(*(int *)(a1 + 8));
    if ( !(char)result )
  {
    result = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 896))(*(int *)(a1 + 8));
    if ( !(char)result )
    {
    result = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 468))(*(int *)(a1 + 8));
    if ( !(char)result )
      {
    result = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 472))(*(int *)(a1 + 8));
    if ( !(char)result )
        {
    v5 = *(int *)(a1 + 8);
    v6 = a3;
    v7 = a4;
    v8 = a2;
    v12[1] = a3;
    v12[0] = a2;
    v12[2] = a4;
    v9 = (*(int (__thiscall **)(int))(*(int *)(v5) + 136))(v5);
    v10 = (int *)(*(int (__thiscall **)(int, int *, int *))(*(int *)(v9) + 108))(v9, &a2, v12);
    *(int *)(a1 + 24) = *v10;
    *(int *)(a1 + 28) = v10[1];
    *(int *)(a1 + 32) = v10[2];
    if ( (v8 != DataGlobal_B0F910 || v6 != DataGlobal_B0F914 || v7 != DataGlobal_B0F918) && (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 456))(*(int *)(a1 + 8)) < 0 )
          {
    v11 = *(int *)(a1 + 20);
    if ( v11 != 3 && v11 != 5 && v11 != 1 && v11 != 6 && v11 != 2 )
            {
    (*(void (__thiscall **)(int, int))(**(int **)(a1 + 8) + 292))(*(int *)(a1 + 8), 0);
    *(int *)(a1 + 20) = 4;
            }
          }
    result = *(int *)(a1 + 20);
    if ( !result )
    *(int *)(a1 + 20) = 1;
        }
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x007291D0  JumpjetLocomotionClass::StubReturnZero_21  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_21(int a1, char a2)
{
{
    if ( *(int *)(a1 + 20) == 4 )
    return (a2 != 0) + 4;
    else
    return 0;
}
}

// ==== BACKFILL 0x007294E0  sub_7294E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_7294E0::sub_7294E0()
{
{
    int *v2;
    int v3;
    int result;
    int v5;
    int v6[2];
    int v7;
    v2 = (int *)this->M12;
    v6[0] = v2[39];
    v6[1] = v2[40];
    v7 = v2[41];
    if ( v7 <= -256 )
  {
    result = (*(int (__thiscall **)(int *, int))(*v2 + 292))(v2, 0);
    this->M24 = 4;
  }
    else
  {
    v5 = (*(int (__thiscall **)(int *))(*v2 + 1336))(v2);
    v3 = Math::RoundToInt((double)v5 * *(double *)&g_RulesClass_Instance->TunnelSpeed);
    if ( v3 <= 5 )
    v3 = 5;
    v7 -= v3;
    if ( v7 < -256 )
    v7 = -256;
    return (*(int (__thiscall **)(int, int *))(*(int *)this->M12 + 436))(this->M12, v6);
  }
    return result;
}
}

// ==== BACKFILL 0x0072A020  JumpjetLocomotionClass::CheckStateWithOverride  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::CheckStateWithOverride(TunnelLocomotionClass * aP0)
{
{
    int RefCount;
    RefCount = aP0->RefCount;
    if ( RefCount == 3 || RefCount == 2 || RefCount == 7 || RefCount == 6 || RefCount == 5 )
    return 2;
    else
    return JumpjetLocomotionClass::CheckState(aP0);
}
}

// ==== BACKFILL 0x0072A060  JumpjetLocomotionClass::IsStateInRange  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::IsStateInRange(int a1)
{
{
    unsigned int v1;
    v1 = *(int *)(a1 + 20);
    return v1 < 2 || v1 == 7 || v1 == 2 || v1 == 6;
}
}

// ==== BACKFILL 0x0072A090  JumpjetLocomotionClass::ConvertCoordToCell_3  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::ConvertCoordToCell_3(int a2, void * a3)
{
{
    void *v3;
    void *v5;
    v5 = this;
    if ( g_ArmageddonMode )
    return 0;
    v5 = a3;
    v3 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v5);
    if ( Cell::IsBuildableAdvanced((int)v3) )
    return 0;
    else
    return 7;
}
}

// ==== BACKFILL 0x0072A0E0  JumpjetLocomotionClass::UpdateFacingDirection_4  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::UpdateFacingDirection_4(int a1, int a2)
{
{
    return FacingClass::Update((char *)(*(int *)(a1 + 8) + 904), &a2);
}
}

// ==== BACKFILL 0x0072A110  TunnelLocomotionClass::ddtor  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TunnelLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1247291203;
  a2[1] = 298948665;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// ==== BACKFILL 0x0072A150  TunnelLocomotionClass::BeginMove  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TunnelLocomotionClass::BeginMove(int * a1, int * a2)
{
{
    int result;
    wchar_t *v3;
    result = SwizzleManager::SaveLoad(a1, a2);
    if ( result >= 0 )
  {
    if ( a1 )
    {
    *a1 = (int)(unsigned int)vt_LocomotionClass;
    *((int*)(a1) + 1) = (int)&vt_LocomotionClass;
    v3 = g_CurrentFrame;
    *((int*)(a1) + 12) = 0;
    *((int*)(a1) + 10) = (int)v3;
    *((int*)(a1) + 13) = 0;
    *a1 = (int)(unsigned int)vt_TunnelLocomotionClass;
    *((int*)(a1) + 1) = (int)&vt_TunnelLocomotionClass;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0072A1A0  JumpjetLocomotionClass::ShortFunc_72A1A0  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::ShortFunc_72A1A0(int a1)
{
  return *(_DWORD *)(a1 + 20) != 4 ? 2 : 0;
}

// ==== BACKFILL 0x0072A1C0  JumpjetLocomotionClass::ShortFunc_72A1C0  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::ShortFunc_72A1C0(int a1)
{
{
    int result;
    result = JumpjetLocomotionClass::MissionStub11(a1);
    if ( !result )
  {
    if ( *(int *)(a1 + 20) )
    return 7;
  }
    return result;
}
}

// ==== BACKFILL 0x0072A1E0  JumpjetLocomotionClass::ShortFunc_72A1E0  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
BOOL JumpjetLocomotionClass::ShortFunc_72A1E0(int a1)
{
{
    int v1;
    v1 = *(int *)(a1 + 20);
    return v1 == 5 || v1 == 6;
}
}

// ==== BACKFILL 0x0072A200  TunnelLocomotionClass::StubReturn60  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TunnelLocomotionClass::StubReturn60()
{
return 60;
}

// ==== BACKFILL 0x0072A210  TunnelLocomotionClass::ProcessMove  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
TunnelLocomotionClass * TunnelLocomotionClass::ProcessMove(char a2)
{
{
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TunnelLocomotionClass *)this;
}
}

// ==== BACKFILL 0x0072A440  MessageListClass::clearMessages  cls=MessageListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int MessageListClass::clearMessages(int a1, int a2, int a3, int a4, int a5) {
{
      GadgetClass::Construct(this, (GadgetClass *)aP1, (GadgetClass *)aP3, (GadgetClass *)1, (ControlClass *)1, 0, 0);
      *(_DWORD *)&this->__pad_2C[4] = a2;
      this->field_24 = 0;
      this->field_28 = 0;
      *(_DWORD *)this->__pad_2C = aP5;
      *(_DWORD *)&this->__pad_2C[8] = a5;
      *(_DWORD *)&this->__pad_2C[12] = -1;
      this->field_3C = 0;
      this->__pad_40[0] = 0;
      this->__pad_40[1] = 0;
      this->field_44 = 0;
      this->field_48 = 0;
      *(_DWORD *)this->__pad_0 = 0;
      return (int)this->__pad_0;
}
} }

// ==== BACKFILL 0x0072A4A0  ObjectClass::DrawTypewriterText  cls=TextLabelClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::DrawTypewriterText(int a1) {
{
      int v3;
      int v4;
      AbstractClass *Instance;
      int v6;
      AbstractClass *v7;
      int v8;
      int v9;
      int v10;
      int v11;
      signed int v12;
      DWORD Time;
      int v14;
      int v15;
      unsigned __int8 v16;
      int v18;
      AbstractClass *v19;
      int v20;
      int v21[2];
      int v22;
      int referenceCount;

      if ( this->__pad_40[0] )
        return 0;
      if ( !GadgetClass::ClearState(this, (ControlClass *)aP1) )
        return 0;
      v3 = *(_DWORD *)&this->__pad_2C[8];
      if ( !g_AnimClass_SaveState )
        return 0;
      if ( v3 <= 0 || v3 >= g_AnimClass_SaveState )
        v3 = 0;
      v4 = *((_DWORD *)BuildingTypeClass_AnimTable + v3);
      if ( !v4 )
        return 0;
      Instance = TextRenderer::GetInstance();
      v6 = *(_DWORD *)&this->__pad_0[12];
      v7 = Instance;
      v19 = Instance;
      v21[1] = *(_DWORD *)&this->__pad_0[16];
      v8 = *(_DWORD *)&this->__pad_2C[12];
      v21[0] = v6;
      if ( v8 < 0 )
        v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 124))(*(_DWORD *)&DataGlobal_87F8E4[31280]);
      v22 = v8;
      referenceCount = v7->referenceCount;
      v9 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 124))(*(_DWORD *)&DataGlobal_87F8E4[31280]);
      if ( v22 + v21[0] - v9 > 0 )
      {
        v22 = v9 - v21[0];
        if ( v9 - v21[0] <= 0 || referenceCount <= 0 )
          return 0;
      }
      v10 = Color::ConvertToRGB((unsigned __int8 *)(v4 + 776), (int)&aP1);
      LOWORD(v20) = *(_WORD *)v10;
      BYTE2(v20) = *(_BYTE *)(v10 + 2);
      v11 = (unsigned __int8)*(_WORD *)v10 | (*(unsigned __int16 *)((char *)&v20 + 1) << 8);
      v12 = wcslen(*(const wchar_t **)&this->__pad_2C[4]);
      if ( this->__pad_40[1] )
      {
        Time = timeGetTime();
        v14 = this->field_44;
        if ( v14 )
        {
          v7 = v19;
          this->field_44 = v14 + ((Time - this->field_48) >> 4);
        }
        else
        {
          this->field_44 = 1;
        }
        v15 = this->field_44;
        if ( v14 != v15 )
          this->field_48 = Time;
        if ( v15 <= v12 )
          PlayVocClass(*(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 1732), 0x2000, 1.0, 0);
      }
      v18 = this->field_44;
      v16 = this->vt22();
      DrawTextRendererMultiline(
        *(_DWORD **)&DataGlobal_87F8E4[31280],
        v21,
        *(wchar_t **)&this->__pad_2C[4],
        v12,
        v7,
        v11,
        &this->field_3C,
        v16,
        0,
        1,
        v18);
      return 1;
}
} } }

// ==== BACKFILL 0x0072A660  ObjectClass::setTarget  cls=TextLabelClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::setTarget(int a2)
{
{
    *(int *)&this->__pad_2C[4] = a2;
    return a2;
}
}

// ==== BACKFILL 0x0072A670  ObjectClass::clearTarget  cls=TextLabelClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ObjectClass::clearTarget(char a2)
{
{
    GadgetClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this->__pad_0;
}
}

// ==== BACKFILL 0x0072A9C0  Copy8Bytes  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * AbstractClass::Copy8Bytes()
{
{
    int *v1;
    int *result;
    int v3;
    int v4;
    result = this->__pad_0;
    v3 = *v1;
    v4 = v1[1];
    *result = v3;
    result[1] = v4;
    return result;
}
}

// ==== BACKFILL 0x0072A9E0  Rect::Inflate  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL Rect::Inflate(LPRECT lprc, int dx, int dy)
{
{
    int v3;
    int *v4;
    *v4 += v3;
    v4[1] += v3;
    v4[2] -= 2 * v3;
    v4[3] -= 2 * v3;
    return 2 *v3;
}
}

// ==== BACKFILL 0x0072AA10  CubicBezierAdvance  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CubicBezierAdvance(unsigned int * a1, int a2, int a3)
{
{
    int v3;
    int v4;
    int v6;
    v3 = *((int*)(a1) + 1);
    *a1 += a2;
    *((int*)(a1) + 1) = a3 + v3;
    v4 = -2 * a2 + *((int*)(a1) + 2);
    v6 = -2 * a3 + *((int*)(a1) + 3);
    *((int*)(a1) + 2) = v4;
    *((int*)(a1) + 3) = v6;
    return -2 * a3;
}
}

// ==== BACKFILL 0x0072AD90  SidebarClass::calcSidebarRect  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* SidebarClass::calcSidebarRect() {
{
    int *result;
    int v2;
    int v3;
    int v4;
    result = this;
    v2 = 0;
    if ( !DataGlobal_A8EB7C && !g_ArmageddonMode )
    v2 = 168;
    v3 = g_CommandLineFlags - 168;
    v4 = DataGlobal_A8EB88 - 32;
    *result = v2;
    result[1] = 0;
    result[2] = v3;
    result[3] = v4;
    return result;
}
} }

// ==== BACKFILL 0x0072B230  WinMainSetup_Setup_72AC40_Setup_72B230  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72B230()
{
{
    if ( DataGlobal_B0FB6C )
  {
    __3_YAXPAX_Z(DataGlobal_B0FB6C);
    DataGlobal_B0FB6C = 0;
  }
    if ( DataGlobal_B0FB70 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FB70)(DataGlobal_B0FB70, 3);
    DataGlobal_B0FB70 = 0;
  }
    if ( DataGlobal_B0FB64 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FB64);
    DataGlobal_B0FB64 = 0;
  }
    if ( DataGlobal_B0FB68 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FB68)(DataGlobal_B0FB68, 3);
    DataGlobal_B0FB68 = 0;
  }
    if ( DataGlobal_B0FB5C )
  {
    __3_YAXPAX_Z(DataGlobal_B0FB5C);
    DataGlobal_B0FB5C = 0;
  }
    if ( DataGlobal_B0FB60 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FB60)(DataGlobal_B0FB60, 3);
    DataGlobal_B0FB60 = 0;
  }
    if ( DataGlobal_B0FB74 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FB74);
    DataGlobal_B0FB74 = 0;
  }
    if ( DataGlobal_B0FB78 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FB78)(DataGlobal_B0FB78, 3);
    DataGlobal_B0FB78 = 0;
  }
}
}

// ==== BACKFILL 0x0072B2F0  LoadingScreen::GetBackgroundImage  cls=LoadingScreen  sig=csp  renamed_refs=0  residual=- ====
char * LoadingScreen::GetBackgroundImage(ScenarioClass * aP1)
{
{
    char *result;
    result = *(char **)&DataGlobal_830620[83476];
    if ( this != (void *)640 )
    return *(char **)&DataGlobal_830620[83480];
    return result;
}
}

// ==== BACKFILL 0x0072B310  LoadingScreen::GetOverlayImage  cls=LoadingScreen  sig=csp  renamed_refs=0  residual=- ====
char * LoadingScreen::GetOverlayImage(ScenarioClass * aP1)
{
{
    char *result;
    result = *(char **)&DataGlobal_830620[83484];
    if ( this != (void *)640 )
    return *(char **)&DataGlobal_830620[83488];
    return result;
}
}

// ==== BACKFILL 0x0072B390  LoadingScreen::ReleaseAnimObjects  cls=LoadingScreen  sig=csp  renamed_refs=0  residual=- ====
int LoadingScreen::ReleaseAnimObjects()
{
{
    if ( DataGlobal_B0FB88 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FB88)(DataGlobal_B0FB88, 1);
    DataGlobal_B0FB88 = 0;
  }
    if ( DataGlobal_B0FB84 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FB84);
    DataGlobal_B0FB84 = 0;
  }
    return LoadPaletteSimple(this, &DataGlobal_B0FB84, &DataGlobal_B0FB88);
}
}

// ==== BACKFILL 0x0072B460  LoadProgressMgr_Release  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72B460()
{
{
    if ( DataGlobal_B0FB7C )
  {
    __3_YAXPAX_Z(DataGlobal_B0FB7C);
    DataGlobal_B0FB7C = 0;
  }
    if ( DataGlobal_B0FB80 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FB80)(DataGlobal_B0FB80, 1);
    DataGlobal_B0FB80 = 0;
  }
    if ( DataGlobal_B0FB84 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FB84);
    DataGlobal_B0FB84 = 0;
  }
    if ( DataGlobal_B0FB88 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FB88)(DataGlobal_B0FB88, 1);
    DataGlobal_B0FB88 = 0;
  }
    if ( DataGlobal_B0FB8C )
  {
    __3_YAXPAX_Z(DataGlobal_B0FB8C);
    DataGlobal_B0FB8C = 0;
  }
    if ( DataGlobal_B0FB90 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FB90)(DataGlobal_B0FB90, 1);
    DataGlobal_B0FB90 = 0;
  }
}
}

// ==== BACKFILL 0x0072B820  Palette::LoadFile  cls=Palette  sig=csp  renamed_refs=0  residual=- ====
int Palette::LoadFile()
{
{
    if ( DataGlobal_B0FBA0 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBA0)(DataGlobal_B0FBA0, 1);
    DataGlobal_B0FBA0 = 0;
  }
    if ( DataGlobal_B0FB9C )
  {
    __3_YAXPAX_Z(DataGlobal_B0FB9C);
    DataGlobal_B0FB9C = 0;
  }
    return LoadPaletteSimple(this, &DataGlobal_B0FB9C, &DataGlobal_B0FBA0);
}
}

// ==== BACKFILL 0x0072B870  LoadProgressMgr_Release_72B870  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72B870()
{
{
    if ( DataGlobal_B0FBA0 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBA0)(DataGlobal_B0FBA0, 1);
    DataGlobal_B0FBA0 = 0;
  }
    if ( DataGlobal_B0FB9C )
  {
    __3_YAXPAX_Z(DataGlobal_B0FB9C);
    DataGlobal_B0FB9C = 0;
  }
    if ( DataGlobal_B0FB94 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FB94);
    DataGlobal_B0FB94 = 0;
  }
    if ( g_PaletteManagerPool )
  {
    (**(void (__thiscall ***)(int, int))g_PaletteManagerPool)(g_PaletteManagerPool, 1);
    g_PaletteManagerPool = 0;
  }
}
}

// ==== BACKFILL 0x0072B930  DlgProcGameSetup_Setup_72B930  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72B930()
{
{
    void *v0;
    if ( DataGlobal_B0FD5D )
  {
    if ( DataGlobal_B0FD5C )
    {
    v0 = DataGlobal_B0FB54;
    if ( DataGlobal_B0FB54 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FB54);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FD5C = 0;
    }
    DataGlobal_B0FB54 = 0;
    if ( DataGlobal_B0FD60 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD60);
    DataGlobal_B0FD60 = 0;
    }
    if ( DataGlobal_B0FD64 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD64)(DataGlobal_B0FD64, 1);
    DataGlobal_B0FD64 = 0;
    }
  }
    DataGlobal_B0FD5D = 0;
}
}

// ==== BACKFILL 0x0072BB10  WOLobby_Destroy  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72BB10()
{
{
    void *v0;
    if ( DataGlobal_B0FD51 )
  {
    if ( DataGlobal_B0FD50 )
    {
    v0 = DataGlobal_B0FB2C;
    if ( DataGlobal_B0FB2C )
      {
    FileTreeNode::Destroy(DataGlobal_B0FB2C);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FD50 = 0;
    }
    DataGlobal_B0FB2C = 0;
    if ( DataGlobal_B0FD54 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD54);
    DataGlobal_B0FD54 = 0;
    }
    if ( DataGlobal_B0FD58 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD58)(DataGlobal_B0FD58, 1);
    DataGlobal_B0FD58 = 0;
    }
  }
    DataGlobal_B0FD51 = 0;
}
}

// ==== BACKFILL 0x0072BCF0  LoginFlowWOL_Destroy  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72BCF0()
{
{
    void *v0;
    if ( DataGlobal_B0FD45 )
  {
    if ( DataGlobal_B0FD44 )
    {
    v0 = DataGlobal_B0FA98;
    if ( DataGlobal_B0FA98 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FA98);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FD44 = 0;
    }
    DataGlobal_B0FA98 = 0;
    if ( DataGlobal_B0FD48 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD48);
    DataGlobal_B0FD48 = 0;
    }
    if ( DataGlobal_B0FD4C )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD4C)(DataGlobal_B0FD4C, 1);
    DataGlobal_B0FD4C = 0;
    }
  }
    DataGlobal_B0FD45 = 0;
}
}

// ==== BACKFILL 0x0072BED0  JoinLobbyWOL_Destroy  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72BED0()
{
{
    void *v0;
    if ( DataGlobal_B0FD39 )
  {
    if ( DataGlobal_B0FD38 )
    {
    v0 = DataGlobal_B0FA9C;
    if ( DataGlobal_B0FA9C )
      {
    FileTreeNode::Destroy(DataGlobal_B0FA9C);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FD38 = 0;
    }
    DataGlobal_B0FA9C = 0;
    if ( DataGlobal_B0FD3C )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD3C);
    DataGlobal_B0FD3C = 0;
    }
    if ( DataGlobal_B0FD40 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD40)(DataGlobal_B0FD40, 1);
    DataGlobal_B0FD40 = 0;
    }
  }
    DataGlobal_B0FD39 = 0;
}
}

// ==== BACKFILL 0x0072C0B0  GameOptionsScreenWOL_Destroy  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72C0B0()
{
{
    void *v0;
    if ( DataGlobal_B0FD2D )
  {
    if ( DataGlobal_B0FD2C )
    {
    v0 = DataGlobal_B0FA4C;
    if ( DataGlobal_B0FA4C )
      {
    FileTreeNode::Destroy(DataGlobal_B0FA4C);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FD2C = 0;
    }
    DataGlobal_B0FA4C = 0;
    if ( DataGlobal_B0FD30 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD30);
    DataGlobal_B0FD30 = 0;
    }
    if ( DataGlobal_B0FD34 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD34)(DataGlobal_B0FD34, 1);
    DataGlobal_B0FD34 = 0;
    }
  }
    DataGlobal_B0FD2D = 0;
}
}

// ==== BACKFILL 0x0072C290  CreateAccountWOL_Create_72C290  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72C290()
{
{
    void *v0;
    if ( DataGlobal_B0FD21 )
  {
    if ( DataGlobal_B0FD20 )
    {
    v0 = DataGlobal_B0FA30;
    if ( DataGlobal_B0FA30 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FA30);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FD20 = 0;
    }
    DataGlobal_B0FA30 = 0;
    if ( DataGlobal_B0FD24 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD24);
    DataGlobal_B0FD24 = 0;
    }
    if ( DataGlobal_B0FD28 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD28)(DataGlobal_B0FD28, 1);
    DataGlobal_B0FD28 = 0;
    }
  }
    DataGlobal_B0FD21 = 0;
}
}

// ==== BACKFILL 0x0072C470  CreateAccountWOL_Create_72C470  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72C470()
{
{
    void *v0;
    if ( DataGlobal_B0FD15 )
  {
    if ( DataGlobal_B0FD14 )
    {
    v0 = DataGlobal_B0FA64;
    if ( DataGlobal_B0FA64 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FA64);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FD14 = 0;
    }
    DataGlobal_B0FA64 = 0;
    if ( DataGlobal_B0FD18 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD18);
    DataGlobal_B0FD18 = 0;
    }
    if ( DataGlobal_B0FD1C )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD1C)(DataGlobal_B0FD1C, 1);
    DataGlobal_B0FD1C = 0;
    }
  }
    DataGlobal_B0FD15 = 0;
}
}

// ==== BACKFILL 0x0072C650  LoginFlowWOL_Destroy_72C650  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72C650()
{
{
    void *v0;
    if ( DataGlobal_B0FD09 )
  {
    if ( DataGlobal_B0FD08 )
    {
    v0 = DataGlobal_B0FB0C;
    if ( DataGlobal_B0FB0C )
      {
    FileTreeNode::Destroy(DataGlobal_B0FB0C);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FD08 = 0;
    }
    DataGlobal_B0FB0C = 0;
    if ( DataGlobal_B0FD0C )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD0C);
    DataGlobal_B0FD0C = 0;
    }
    if ( DataGlobal_B0FD10 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD10)(DataGlobal_B0FD10, 1);
    DataGlobal_B0FD10 = 0;
    }
  }
    DataGlobal_B0FD09 = 0;
}
}

// ==== BACKFILL 0x0072C830  RunWOLMainLoop_Read_Read_72C830  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72C830()
{
{
    void *v0;
    if ( DataGlobal_B0FCFD )
  {
    if ( DataGlobal_B0FCFC )
    {
    v0 = DataGlobal_B0F9E8;
    if ( DataGlobal_B0F9E8 )
      {
    FileTreeNode::Destroy(DataGlobal_B0F9E8);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FCFC = 0;
    }
    DataGlobal_B0F9E8 = 0;
    if ( DataGlobal_B0FD00 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FD00);
    DataGlobal_B0FD00 = 0;
    }
    if ( DataGlobal_B0FD04 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FD04)(DataGlobal_B0FD04, 1);
    DataGlobal_B0FD04 = 0;
    }
  }
    DataGlobal_B0FCFD = 0;
}
}

// ==== BACKFILL 0x0072CA10  System_Init_72CA10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72CA10()
{
{
    void *v0;
    if ( DataGlobal_B0FCF1 )
  {
    if ( DataGlobal_B0FCF0 )
    {
    v0 = DataGlobal_B0FA60;
    if ( DataGlobal_B0FA60 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FA60);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FCF0 = 0;
    }
    DataGlobal_B0FA60 = 0;
    if ( DataGlobal_B0FCF4 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FCF4);
    DataGlobal_B0FCF4 = 0;
    }
    if ( DataGlobal_B0FCF8 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FCF8)(DataGlobal_B0FCF8, 1);
    DataGlobal_B0FCF8 = 0;
    }
  }
    DataGlobal_B0FCF1 = 0;
}
}

// ==== BACKFILL 0x0072CDB0  Network_Destroy  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72CDB0()
{
{
    void *v0;
    if ( DataGlobal_B0FCE5 )
  {
    if ( DataGlobal_B0FCE4 )
    {
    v0 = DataGlobal_B0FAAC;
    if ( DataGlobal_B0FAAC )
      {
    FileTreeNode::Destroy(DataGlobal_B0FAAC);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FCE4 = 0;
    }
    DataGlobal_B0FAAC = 0;
    if ( DataGlobal_B0FCE8 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FCE8);
    DataGlobal_B0FCE8 = 0;
    }
    if ( DataGlobal_B0FCEC )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FCEC)(DataGlobal_B0FCEC, 1);
    DataGlobal_B0FCEC = 0;
    }
  }
    DataGlobal_B0FCE5 = 0;
}
}

// ==== BACKFILL 0x0072CF90  CleanupFileTree  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void FileTree_Cleanup()
{
{
    void *v0;
    if ( DataGlobal_B0FCD9 )
  {
    if ( DataGlobal_B0FCD8 )
    {
    v0 = DataGlobal_B0FA18;
    if ( DataGlobal_B0FA18 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FA18);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FCD8 = 0;
    }
    DataGlobal_B0FA18 = 0;
    if ( DataGlobal_B0FCDC )
    {
    __3_YAXPAX_Z(DataGlobal_B0FCDC);
    DataGlobal_B0FCDC = 0;
    }
    if ( DataGlobal_B0FCE0 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FCE0)(DataGlobal_B0FCE0, 1);
    DataGlobal_B0FCE0 = 0;
    }
  }
    DataGlobal_B0FCD9 = 0;
}
}

// ==== BACKFILL 0x0072D170  AudioController::GetVolume  cls=AudioController  sig=csp  renamed_refs=0  residual=- ====
void AudioController::GetVolume()
{
{
    void *v0;
    if ( DataGlobal_B0FCCE )
  {
    if ( DataGlobal_B0FCCD )
    {
    v0 = DataGlobal_B0FAB8;
    if ( DataGlobal_B0FAB8 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FAB8);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FCCD = 0;
    }
    DataGlobal_B0FAB8 = 0;
    if ( DataGlobal_B0FCD0 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FCD0);
    DataGlobal_B0FCD0 = 0;
    }
    if ( DataGlobal_B0FCD4 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FCD4)(DataGlobal_B0FCD4, 1);
    DataGlobal_B0FCD4 = 0;
    }
  }
    DataGlobal_B0FCCE = 0;
}
}

// ==== BACKFILL 0x0072D350  FileSystem::CleanupTrees  cls=FileSystem  sig=csp  renamed_refs=0  residual=- ====
void FileSystem::CleanupTrees()
{
{
    void *v0;
    void *v1;
    void *v2;
    if ( DataGlobal_B0FBAC )
  {
    DataGlobal_B0FBAC = 0;
    if ( DataGlobal_B0FC70 )
    {
    v0 = DataGlobal_B0FB34;
    if ( DataGlobal_B0FB34 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FB34);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FC70 = 0;
    }
    DataGlobal_B0FB34 = 0;
    if ( DataGlobal_B0FC71 )
    {
    v1 = DataGlobal_B0FB00;
    if ( DataGlobal_B0FB00 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FB00);
    __3_YAXPAX_Z(v1);
      }
    DataGlobal_B0FC71 = 0;
    }
    DataGlobal_B0FB00 = 0;
    if ( DataGlobal_B0FC72 )
    {
    v2 = DataGlobal_B0FB30;
    if ( DataGlobal_B0FB30 )
      {
    FileTreeNode::Destroy(DataGlobal_B0FB30);
    __3_YAXPAX_Z(v2);
      }
    DataGlobal_B0FC72 = 0;
    }
    DataGlobal_B0FB30 = 0;
    if ( DataGlobal_B0FBA4 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FBA4);
    DataGlobal_B0FBA4 = 0;
    }
    if ( DataGlobal_B0FBA8 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBA8)(DataGlobal_B0FBA8, 1);
    DataGlobal_B0FBA8 = 0;
    }
  }
}
}

// ==== BACKFILL 0x0072D460  CampaignScore::LoadScreenAssets  cls=CampaignScore  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* CampaignScore::LoadScreenAssets() {
{
    void *result;
    if ( this )
  {
    if ( this == (void *)1 )
    {
    if ( g_DisplayWidth == 640 )
      {
    DataGlobal_B0FB34 = LoadFileSHP(DataGlobal_844C70, (bool *)&DataGlobal_B0FC70);
    DataGlobal_B0FB00 = LoadFileSHP(DataGlobal_844C78, (bool *)&DataGlobal_B0FC71);
    result = LoadFileSHP(DataGlobal_844C80, (bool *)&DataGlobal_B0FC72);
      }
    else
      {
    DataGlobal_B0FB34 = LoadFileSHP(DataGlobal_844C74, (bool *)&DataGlobal_B0FC70);
    DataGlobal_B0FB00 = LoadFileSHP(DataGlobal_844C7C, (bool *)&DataGlobal_B0FC71);
    result = LoadFileSHP(DataGlobal_844C84, (bool *)&DataGlobal_B0FC72);
      }
    DataGlobal_B0FB30 = result;
    }
    else
    {
    if ( g_DisplayWidth == 640 )
      {
    DataGlobal_B0FB34 = LoadFileSHP(DataGlobal_844C88, (bool *)&DataGlobal_B0FC70);
    DataGlobal_B0FB00 = LoadFileSHP(DataGlobal_844C90, (bool *)&DataGlobal_B0FC71);
    result = LoadFileSHP(DataGlobal_844C98, (bool *)&DataGlobal_B0FC72);
      }
    else
      {
    DataGlobal_B0FB34 = LoadFileSHP(DataGlobal_844C8C, (bool *)&DataGlobal_B0FC70);
    DataGlobal_B0FB00 = LoadFileSHP(DataGlobal_844C94, (bool *)&DataGlobal_B0FC71);
    result = LoadFileSHP(DataGlobal_844C9C, (bool *)&DataGlobal_B0FC72);
      }
    DataGlobal_B0FB30 = result;
    }
  }
    else
  {
    if ( g_DisplayWidth == 640 )
    {
    DataGlobal_B0FB34 = LoadFileSHP(DataGlobal_844C58, (bool *)&DataGlobal_B0FC70);
    DataGlobal_B0FB00 = LoadFileSHP(DataGlobal_844C60, (bool *)&DataGlobal_B0FC71);
    result = LoadFileSHP(DataGlobal_844C68, (bool *)&DataGlobal_B0FC72);
    }
    else
    {
    DataGlobal_B0FB34 = LoadFileSHP(DataGlobal_844C5C, (bool *)&DataGlobal_B0FC70);
    DataGlobal_B0FB00 = LoadFileSHP(DataGlobal_844C64, (bool *)&DataGlobal_B0FC71);
    result = LoadFileSHP(DataGlobal_844C6C, (bool *)&DataGlobal_B0FC72);
    }
    DataGlobal_B0FB30 = result;
  }
    return result;
}
} }

// ==== BACKFILL 0x0072D730  Game::LoadMultiplayerScoreAssets  cls=Game  sig=csp  renamed_refs=0  residual=- ====
char Game::LoadMultiplayerScoreAssets()
{
{
    char result;
    char *v3;
    result = DataGlobal_B0FBB8;
    if ( !DataGlobal_B0FBB8 )
  {
    Game::shutdownGame(this);
    if ( this )
    {
    v3 = DataGlobal_844BD8[0];
    if ( this != (void *)1 )
    v3 = DataGlobal_844BDC;
    }
    else
    {
    v3 = DataGlobal_844BD4[0];
    }
    result = LoadPaletteSimple(v3, &DataGlobal_B0FBB0, &DataGlobal_B0FBB4);
    DataGlobal_B0FBB8 = 1;
  }
    return result;
}
}

// ==== BACKFILL 0x0072D780  Map_Init_72D780  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72D780()
{
{
    void *v0;
    if ( DataGlobal_B0FBB8 )
  {
    DataGlobal_B0FBB8 = 0;
    if ( DataGlobal_B0FC7D )
    {
    v0 = DataGlobal_B0FB1C;
    if ( DataGlobal_B0FB1C )
      {
    FileTreeNode::Destroy(DataGlobal_B0FB1C);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FC7D = 0;
    }
    DataGlobal_B0FB1C = 0;
    if ( DataGlobal_B0FBB0 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FBB0);
    DataGlobal_B0FBB0 = 0;
    }
    if ( DataGlobal_B0FBB4 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBB4)(DataGlobal_B0FBB4, 1);
    DataGlobal_B0FBB4 = 0;
    }
  }
}
}

// ==== BACKFILL 0x0072D830  Game::shutdownGame  cls=Game  sig=csp  renamed_refs=0  residual=- ====
void * Game::shutdownGame()
{
{
    void *result;
    char *v2;
    if ( this )
  {
    if ( this == (void *)1 )
    {
    if ( g_DisplayWidth == 640 )
    result = LoadFileSHP(DataGlobal_844CA8, (bool *)&DataGlobal_B0FC7D);
    else
    result = LoadFileSHP(DataGlobal_844CAC, (bool *)&DataGlobal_B0FC7D);
    DataGlobal_B0FB1C = result;
    }
    else
    {
    v2 = DataGlobal_844CB0[0];
    if ( g_DisplayWidth != 640 )
    v2 = DataGlobal_844CB4;
    result = LoadFileSHP(v2, (bool *)&DataGlobal_B0FC7D);
    DataGlobal_B0FB1C = result;
    }
  }
    else
  {
    if ( g_DisplayWidth == 640 )
    result = LoadFileSHP(DataGlobal_844CA0, (bool *)&DataGlobal_B0FC7D);
    else
    result = LoadFileSHP(DataGlobal_844CA4, (bool *)&DataGlobal_B0FC7D);
    DataGlobal_B0FB1C = result;
  }
    return result;
}
}

// ==== BACKFILL 0x0072E730  UI_Draw_72E730  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void UI_Draw_72E730(ConvertClass * aP0, int * a1, int a3, int aP2, int a5)
{
{
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10[2];
    ConvertClass *v11;
    int v12;
    v5 = *((int*)(a1) + 3);
    v10[0] = *a1;
    v6 = *((int*)(a1) + 1);
    v8 = 0;
    v10[1] = v6;
    v7 = *((int*)(a1) + 2);
    v9 = 0;
    v11 = (ConvertClass *)v7;
    v12 = v5;
    if ( v7 > 800 )
    v11 = (ConvertClass *)((v7 - 800) / 2 + 800);
    if ( v5 > 600 )
    v12 = (v5 - 600) / 2 + 600;
    v8 = **(int **)&DataGlobal_B05488[42900];
    v9 = *(int *)(*(int *)&DataGlobal_B05488[42900] + 4);
    if ( *(int *)&DataGlobal_89E138[8044] == 640 )
    DrawToSurfaceSHP( (int)aP0, a3, (ConvertClass *)aP2, 0, (ConvertClass *)&v8, (ConvertClass *)v10, (ConvertClass *)0x400, 0, 0, 0, (ConvertClass *)0x3E8, 0, 0, 0, 0, 0);
    else
    DrawToSurfaceSHP( (int)aP0, a3, (ConvertClass *)a5, 0, (ConvertClass *)&v8, (ConvertClass *)v10, (ConvertClass *)0x400, 0, 0, 0, (ConvertClass *)0x3E8, 0, 0, 0, 0, 0);
}
}

// ==== BACKFILL 0x0072E820  Render_Draw  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void Render_Draw(ConvertClass * a1, int * a2, char a3)
{
{
    RenderScoreScreen(a1, a2, a3);
    UI_Draw_72E730( a1, a2, *(int *)&DataGlobal_B05488[42820], *(int *)&DataGlobal_B05488[42696], *(int *)&DataGlobal_B05488[42364]);
}
}

// ==== BACKFILL 0x0072E860  UI_Draw_72E860  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void UI_Draw_72E860(int a1, ConvertClass * a2)
{
{
    int v2;
    int v3;
    v2 = 0;
    v3 = 0;
    v2 = **(int **)&DataGlobal_B05488[42892];
    v3 = *(int *)(*(int *)&DataGlobal_B05488[42892] + 4);
    DrawToSurfaceSHP( a1, *(int *)&DataGlobal_B05488[42820], *(ConvertClass **)&DataGlobal_B05488[42324], 0, (ConvertClass *)&v2, a2, (ConvertClass *)0x400, 0, 0, 0, (ConvertClass *)0x3E8, 0, 0, 0, 0, 0);
}
}

// ==== BACKFILL 0x0072E8C0  UI_Draw_72E8C0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void UI_Draw_72E8C0(int a1, ConvertClass * a2)
{
{
    int v2;
    int v3;
    v2 = 0;
    v3 = 0;
    v2 = **(int **)&DataGlobal_B05488[42904];
    v3 = *(int *)(*(int *)&DataGlobal_B05488[42904] + 4);
    DrawToSurfaceSHP( a1, *(int *)&DataGlobal_B05488[42820], *(ConvertClass **)&DataGlobal_B05488[42608], 1u, (ConvertClass *)&v2, a2, (ConvertClass *)0x400, 0, 0, 0, (ConvertClass *)0x3E8, 0, 0, 0, 0, 0);
}
}

// ==== BACKFILL 0x0072E920  UI_Draw_72E920  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void UI_Draw_72E920(int a1, ConvertClass * a2)
{
{
    int v2;
    int v3;
    int v4;
    v3 = 0;
    v4 = 0;
    v2 = **(int **)&DataGlobal_B05488[42900];
    v3 = **(int **)&DataGlobal_B05488[42900];
    v4 = *(int *)(*(int *)&DataGlobal_B05488[42900] + 4);
    if ( *(int *)&DataGlobal_89E138[8044] >= 800 )
    v3 = v2 + 80;
    DrawToSurfaceSHP( a1, *(int *)&DataGlobal_B05488[42784], *(ConvertClass **)&DataGlobal_B05488[42616], 0, (ConvertClass *)&v3, a2, (ConvertClass *)0x400, 0, 0, 0, (ConvertClass *)0x3E8, 0, 0, 0, 0, 0);
}
}

// ==== BACKFILL 0x0072E9F0  Map_Load_72E9F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void Map_Load_72E9F0(ConvertClass * a1, int * a2)
{
{
    int v4;
    int v5;
    DrawScoreScreenStats(a1, (int)a2);
    RenderScoreScreen(a1, a2, 0);
    v4 = 0;
    v5 = 0;
    v4 = **(int **)&DataGlobal_B05488[42900];
    v5 = *(int *)(*(int *)&DataGlobal_B05488[42900] + 4);
    DrawToSurfaceSHP( (int)a1, *(int *)&DataGlobal_B05488[42784], *(ConvertClass **)&DataGlobal_B05488[42668], 0, (ConvertClass *)&v4, (ConvertClass *)a2, (ConvertClass *)0x400, 0, 0, 0, (ConvertClass *)0x3E8, 0, 0, 0, 0, 0);
}
}

// ==== BACKFILL 0x0072EAD0  Map_Load_72EAD0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void Map_Load_72EAD0(ConvertClass * a1, int * a2)
{
{
    int v4;
    int v5;
    DrawScoreScreenStats(a1, (int)a2);
    RenderScoreScreen(a1, a2, 0);
    v4 = 0;
    v5 = 0;
    v4 = **(int **)&DataGlobal_B05488[42900];
    v5 = *(int *)(*(int *)&DataGlobal_B05488[42900] + 4);
    DrawToSurfaceSHP( (int)a1, *(int *)&DataGlobal_B05488[42796], *(ConvertClass **)&DataGlobal_B05488[42644], 0, (ConvertClass *)&v4, (ConvertClass *)a2, (ConvertClass *)0x400, 0, 0, 0, (ConvertClass *)0x3E8, 0, 0, 0, 0, 0);
}
}

// ==== BACKFILL 0x0072F140  LoadingScreen::CleanupObjects  cls=LoadingScreen  sig=csp  renamed_refs=0  residual=- ====
void LoadingScreen::CleanupObjects()
{
{
    if ( DataGlobal_B0FBC8 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FBC8);
    DataGlobal_B0FBC8 = 0;
  }
    if ( DataGlobal_B0FBCC )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBCC)(DataGlobal_B0FBCC, 1);
    DataGlobal_B0FBCC = 0;
  }
    if ( DataGlobal_B0FBD0 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FBD0);
    DataGlobal_B0FBD0 = 0;
  }
    if ( DataGlobal_B0FBD4 )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBD4)(DataGlobal_B0FBD4, 1);
    DataGlobal_B0FBD4 = 0;
  }
    if ( DataGlobal_B0FBD8 )
  {
    __3_YAXPAX_Z(DataGlobal_B0FBD8);
    DataGlobal_B0FBD8 = 0;
  }
    if ( DataGlobal_B0FBDC )
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBDC)(DataGlobal_B0FBDC, 1);
    DataGlobal_B0FBDC = 0;
  }
}
}

// ==== BACKFILL 0x0072F440  Game::InitializeToolTipColor  cls=Game  sig=csp  renamed_refs=0  residual=- ====
char Game::InitializeToolTipColor()
{
{
    char result;
    if ( this )
  {
    if ( this == (void *)1 )
    {
    LOWORD(DataGlobal_B0FA1C) = DataGlobal_B0FB04;
    BYTE2(DataGlobal_B0FA1C) = DataGlobal_B0FB06;
    return DataGlobal_B0FB06;
    }
    else
    {
    LOWORD(DataGlobal_B0FA1C) = DataGlobal_B0FAA0;
    BYTE2(DataGlobal_B0FA1C) = DataGlobal_B0FAA2;
    }
  }
    else
  {
    LOWORD(DataGlobal_B0FA1C) = DataGlobal_B0F9D8;
    BYTE2(DataGlobal_B0FA1C) = DataGlobal_B0F9DA;
    return DataGlobal_B0F9D8;
  }
    return result;
}
}
