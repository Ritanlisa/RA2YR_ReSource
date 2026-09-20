// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x006403A0  PowerClass::getDrain  cls=PowerClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int PowerClass::getDrain() {
{
      int v1;
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      int v8;
      char v9;

      RadarClass::Destru_vt34((int)this);
      v1 = 0;
      if ( g_TacticalRender )
      {
        v4 = 0;
        v5 = 0;
        v6 = 0;
        v7 = 0;
        v9 = 0;
        v3 = 999;
        v8 = 0;
        if ( !*((_DWORD *)g_ScenarioClass_Instance + 3374) )
          v1 = 5;
        v4 = v1 + DSurface_SidebarBounds;
        v5 = g_DSurface_SidebarBounds + 69;
        v6 = 8;
        v7 = DataGlobal_B0B504;
        HashTable::Remove((int *)g_TacticalRender, 999);
        LOBYTE(v1) = CommandClass::AddAction(g_TacticalRender, (int)&v3);
      }
      return v1;
}
} }

// ==== BACKFILL 0x00640450  PowerClass::getAvailable  cls=PowerClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void* PowerClass::getAvailable(int a1) {
{
      wchar_t *StringCSF;
      const wchar_t *v4;
      int v5;

      if ( a2 != 999 )
        return RadarClass::Destru_vt33(this, a2);
      v5 = *((_DWORD *)HouseClass_Player + 5354);
      v4 = (const wchar_t *)*((_DWORD *)HouseClass_Player + 5353);
      StringCSF = GetStringCSF(DataGlobal_836DA8, 0, DataGlobal_836DB8, 670);
      swprintf(&DataGlobal_AC4D30, (const size_t)StringCSF, v4, v5);
      return &DataGlobal_AC4D30;
}
} }

// ==== BACKFILL 0x006404B0  PowerClass::Initialize  cls=PowerClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void* PowerClass::Initialize(int a2) {
{
    RadarClass::Destruct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (PowerClass *)this;
}
} }

// ==== BACKFILL 0x006429E0  sub_6429E0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_6429E0::sub_6429E0()
{
{
    this->field_48 = 0;
    *(int *)this->__pad_4C = 0;
    *(int *)&this->__pad_4C[4] = 0;
    this->field_54 = 0;
    this->M88 = 0;
    this->M92 = 0;
    this->M96 = 0;
    this->M97 = 0;
    this->M98 = 0;
    this->M100 = 0;
    this->M104 = 0;
    this->M108 = 0;
    this->M120 = -1;
    this->M128 = -1;
    this->M112 = 0;
    this->M124 = 0;
    *(int *)this->__pad_0 = &vt_ProgressScreenClass;
    memset(&this->__pad_0[8], 0, 0x40u);
    return this->__pad_0;
}
}

// ==== BACKFILL 0x00642B10  Scenario::SetDword32  cls=Scenario  sig=csp  renamed_refs=0 ====
int Scenario::SetDword32(int a2)
{
{
    this->Scenario_field_0x80 = a2;
    return a2;
}
}

// ==== BACKFILL 0x00642DF0  Scenario::SetDword30  cls=Scenario  sig=csp  renamed_refs=0 ====
int Scenario::SetDword30(int a2)
{
{
    this->Scenario_field_0x78 = a2;
    return a2;
}
}

// ==== BACKFILL 0x00642E00  UI_Render  cls=unknown  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_642E00::UI_Render()
{
{
    int *FoundationSize;
    int v2;
    int v4[4];
    int *v5;
    int *v6;
    FoundationSize = Building::GetFoundationSize(v4, 0);
    v2 = FoundationSize[3];
    *v5 = FoundationSize[2] + 6;
    *v6 = v2 + 6;
    return v6;
}
}

// ==== BACKFILL 0x00642E40  UI_Render_642E40  cls=unknown  sig=csp  renamed_refs=0 ====
int E4Recv_642E40::UI_Render_642E40()
{
{
    int Default;
    int v2;
    int result;
    int *v4;
    int *v5;
    Default = BuildingType::FindDefault(0);
    v2 = Default;
    if ( Default )
  {
    *v4 = (*(int (__thiscall **)(int))(*(int *)(Default) + 124))(Default);
    result = (*(int (__thiscall **)(int))(*(int *)(v2) + 128))(v2);
    *v5 = result;
  }
    else
  {
    *v4 = 0;
    *v5 = 0;
    return (int)v4;
  }
    return result;
}
}

// ==== BACKFILL 0x00642E80  UI_Render_642E80  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_642E80(int * a1, unsigned int * a2)
{
{
    int Instance;
    short *v4;
    int v5;
    int result;
    char v8[30];
    short v9;
    Instance = TextRenderer::GetInstance();
    v4 = v8;
    v5 = 15;
    do
  {
    *v4++ = *(short *)CharToWideString(g_Str_W);
    --v5;
  }
    while ( v5 );
    v9 = 0;
    *a1 = Text::MeasureWidth((int)v8, 0);
    result = *(int *)(Instance + 28);
    *a2 = result;
    return result;
}
}

// ==== BACKFILL 0x00642FF0  sub_642FF0  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_642FF0(int a1, int a2, char a3)
{
{
    int v3;
    int Default;
    int v5;
    int Instance;
    short *v7;
    int v8;
    int v9;
    int v11;
    int v12[7];
    short v13;
    v3 = 0;
    v11 = Building::GetFoundationSize(v12, 0)[3] + 6;
    if ( a3 )
  {
    Default = BuildingType::FindDefault(0);
    v5 = Default;
    if ( Default )
    {
    (*(void (__thiscall **)(int))(*(int *)(Default) + 124))(Default);
    v3 = (*(int (__thiscall **)(int))(*(int *)(v5) + 128))(v5);
    }
  }
    Instance = TextRenderer::GetInstance();
    v7 = v12;
    v8 = 15;
    do
  {
    *v7++ = *(short *)CharToWideString(g_Str_W);
    --v8;
  }
    while ( v8 );
    v13 = 0;
    Text::MeasureWidth((int)v12, 0);
    v9 = *(int *)(Instance + 28);
    if ( v11 > v3 )
    v3 = v11;
    if ( v3 <= v9 )
    v3 = v9;
    return a1 + a2 * (v3 + 4);
}
}

// ==== BACKFILL 0x006430C0  sub_6430C0  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_6430C0(char a1)
{
{
    int v1;
    int Default;
    int v3;
    int Instance;
    short *v5;
    int v6;
    int v7;
    int v8;
    int v10;
    int v11[7];
    short v12;
    v1 = 0;
    v10 = Building::GetFoundationSize(v11, 0)[3] + 6;
    if ( a1 )
  {
    Default = BuildingType::FindDefault(0);
    v3 = Default;
    if ( Default )
    {
    (*(void (__thiscall **)(int))(*(int *)(Default) + 124))(Default);
    v1 = (*(int (__thiscall **)(int))(*(int *)(v3) + 128))(v3);
    }
  }
    Instance = TextRenderer::GetInstance();
    v5 = v11;
    v6 = 15;
    do
  {
    *v5++ = *(short *)CharToWideString(g_Str_W);
    --v6;
  }
    while ( v6 );
    v12 = 0;
    Text::MeasureWidth((int)v11, 0);
    v7 = v10;
    v8 = *(int *)(Instance + 28);
    if ( v10 <= v1 )
    v7 = v1;
    if ( v7 <= v8 )
    v7 = v8;
    return (v7 - Building::GetFoundationSize(v11, 0)[3] - 2) / 2;
}
}

// ==== BACKFILL 0x006431C0  sub_6431C0  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_6431C0(char a1)
{
{
    int v1;
    int Default;
    int v3;
    int Instance;
    short *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v11;
    int v12[7];
    short v13;
    v1 = 0;
    v11 = Building::GetFoundationSize(v12, 0)[3] + 6;
    if ( a1 )
  {
    Default = BuildingType::FindDefault(0);
    v3 = Default;
    if ( Default )
    {
    (*(void (__thiscall **)(int))(*(int *)(Default) + 124))(Default);
    v1 = (*(int (__thiscall **)(int))(*(int *)(v3) + 128))(v3);
    }
  }
    Instance = TextRenderer::GetInstance();
    v5 = v12;
    v6 = 15;
    do
  {
    *v5++ = *(short *)CharToWideString(g_Str_W);
    --v6;
  }
    while ( v6 );
    v13 = 0;
    Text::MeasureWidth((int)v12, 0);
    v7 = *(int *)(Instance + 28);
    if ( v11 > v1 )
    v1 = v11;
    if ( v1 <= v7 )
    v1 = v7;
    v8 = v1 + 4;
    v9 = BuildingType::FindDefault(0);
    if ( !v9 )
    return v8 / 2;
    (*(void (__thiscall **)(int))(*(int *)(v9) + 124))(v9);
    return (v8 - (*(int (__thiscall **)(int))(*(int *)(v9) + 128))(v9)) / 2;
}
}

// ==== BACKFILL 0x006432C0  sub_6432C0  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_6432C0(char a1)
{
{
    int v1;
    int Default;
    int v3;
    int Instance;
    short *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    short *v11;
    int v12;
    int v14;
    int v15[7];
    short v16;
    v1 = 0;
    v14 = Building::GetFoundationSize(v15, 0)[3] + 6;
    if ( a1 )
  {
    Default = BuildingType::FindDefault(0);
    v3 = Default;
    if ( Default )
    {
    (*(void (__thiscall **)(int))(*(int *)(Default) + 124))(Default);
    v1 = (*(int (__thiscall **)(int))(*(int *)(v3) + 128))(v3);
    }
  }
    Instance = TextRenderer::GetInstance();
    v5 = v15;
    v6 = 15;
    do
  {
    *v5++ = *(short *)CharToWideString(g_Str_W);
    --v6;
  }
    while ( v6 );
    v16 = 0;
    Text::MeasureWidth((int)v15, 0);
    v7 = *(int *)(Instance + 28);
    v8 = v14;
    if ( v14 <= v1 )
    v8 = v1;
    if ( v8 <= v7 )
    v8 = v7;
    v9 = v8 + 4;
    v10 = TextRenderer::GetInstance();
    v11 = v15;
    v12 = 15;
    do
  {
    *v11++ = *(short *)CharToWideString(g_Str_W);
    --v12;
  }
    while ( v12 );
    v16 = 0;
    Text::MeasureWidth((int)v15, 0);
    return (v9 - *(int *)(v10 + 28)) / 2;
}
}

// ==== BACKFILL 0x006435B0  sub_6435B0  cls=unknown  sig=csp  renamed_refs=0 ====
char sub_6435B0(int a1, int a2, int a3)
{
{
    int Default;
    int v4;
    int v5;
    char result;
    int v7;
    int v8[4];
    Default = BuildingType::FindDefault(0);
    v4 = Default;
    if ( Default )
  {
    v5 = (*(int (__thiscall **)(int))(*(int *)(Default) + 124))(Default);
    Default = (*(int (__thiscall **)(int))(*(int *)(v4) + 128))(v4);
  }
    else
  {
    v5 = 0;
  }
    v8[0] = a1;
    v8[3] = Default;
    v8[1] = a2;
    v8[2] = v5;
    result = 0;
    v7 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) | (255 >> g_BitMask_Red << g_BitShift_Blue);
    if ( g_DSurface_Hidden )
  {
    result = sub_4BAFE0((int *)g_DSurface_Hidden);
    if ( !result )
    return Surface::BlitTransparent(v8, g_DSurface_Hidden, a3, v7);
  }
    return result;
}
}

// ==== BACKFILL 0x00643670  UI_Render_643670  cls=unknown  sig=csp  renamed_refs=0 ====
int * E4Recv_643670::UI_Render_643670()
{
{
    AbstractClass *Instance;
    short *v2;
    int v3;
    int v4;
    int referenceCount;
    int v7;
    int v8[4];
    char v9[30];
    short v10;
    int v11;
    int v12;
    size_t v13;
    int v14;
    int v15;
    Instance = TextRenderer::GetInstance();
    v2 = v9;
    v3 = 15;
    do
  {
    *v2++ = *(short *)CharToWideString(g_Str_W);
    --v3;
  }
    while ( v3 );
    v10 = 0;
    v4 = Text::MeasureWidth((int)v9, 0);
    referenceCount = Instance->referenceCount;
    if ( v15 != -1 )
    v4 = v15;
    v8[2] = v4 + v11;
    v8[3] = referenceCount + v12;
    v8[0] = 0;
    v8[1] = 0;
    return TextRenderer::DrawText(&v7, v13, (int)g_DSurface_Hidden, v8, (int)&v11, v14, 0, 25);
}
}

// ==== BACKFILL 0x006447A0  ParticleSystemTypeClass::GetClassIdentifier  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0 ====
int ParticleSystemTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1883112522;
  a2[1] = 298979249;
  a2[2] = 1610642049;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x006447E0  ParticleSystemTypeClass::SaveLoad_Prefix  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0 ====
int ParticleSystemTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
{
    if ( ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1) >= 0 && aP0 )
  {
    ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_ParticleSystemTypeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_ParticleSystemTypeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_ParticleSystemTypeClass;
    *(int *)&aP0->__pad_0[12] = &vt_ParticleSystemTypeClass;
  }
    return 0;
}
}

// ==== BACKFILL 0x00644830  ParticleSystemTypeClass::SaveLoad_Prefix_0  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0 ====
int ParticleSystemTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
{
    AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2);
    return 0;
}
}

// ==== BACKFILL 0x00644850  sub_644850  cls=ObjectClass  sig=csp  renamed_refs=0 ====
ObjectClass * E4Recv_644850::sub_644850()
{
{
    ObjectClass *v2;
    const void **v3;
    v2 = 0;
    v3 = (const void **)&DataGlobal_830620.__pad_579C[4388];
    while ( _strcmpi(this, *v3) )
  {
    ++v3;
    v2 = (ObjectClass *)((char *)(v2) + 1);
    if ( (int)v3 >= (int)&DataGlobal_830620.__pad_579C[4408] )
    return (ObjectClass *)-1;
  }
    return v2;
}
}

// ==== BACKFILL 0x00644920  ParticleSystemTypeClass::GetObjectSize  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0 ====
int ParticleSystemTypeClass::GetObjectSize()
{
return 784;
}

// ==== BACKFILL 0x00644930  ParticleSystemTypeClass::GetTypeIdentifier  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0 ====
int ParticleSystemTypeClass::GetTypeIdentifier()
{
return 25;
}

// ==== BACKFILL 0x00644940  ParticleSystemTypeClass::Stub  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0 ====
char ParticleSystemTypeClass::Stub(int a1, int a2)
{
return 0;
}

// ==== BACKFILL 0x00644950  ParticleSystemTypeClass::StubReturnFalse  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0 ====
int ParticleSystemTypeClass::StubReturnFalse(int a1)
{
return 0;
}

// ==== BACKFILL 0x00644960  ParticleSystemTypeClass::ddtor  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0 ====
ParticleSystemTypeClass * ParticleSystemTypeClass::ddtor(char a2)
{
    ParticleSystemTypeClass* v7 = this;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    DataGlobal_A83D68;
    int v2 = DataGlobal_A83D68.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < DataGlobal_A83D78 && v2 < --DataGlobal_A83D78 )
    {
        do
        {
            ++v2;
            *(DataGlobal_A83D6C + v2 - 1) = *(DataGlobal_A83D6C + v2);
        }
        while ( v2 < DataGlobal_A83D78 );
    }
    ObjectTypeClass::Destruct(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}

// ==== BACKFILL 0x00645620  C07F0188::ddtor  cls=ParticleTypeClass  sig=csp  renamed_refs=0 ====
int C07F0188::ddtor(int a1, _DWORD *a2)
{
    if ( !a2 )
        return -2147467261;
    *a2 = 1883112523;
    a2[1] = 298979249;
    a2[2] = 1610642049;
    a2[3] = -1252326136;
    return 0;
}

// ==== BACKFILL 0x006457A0  ParticleTypeClass::SaveLoad_Prefix_0  cls=ParticleTypeClass  sig=csp  renamed_refs=0 ====
int ParticleTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int aP1, int aP2)
{
{
    int result;
    int v4;
    int v5;
    int v6;
    result = AbstractClass::SaveLoad_PrefixWrapper(aP0, (ObjectTypeClass *)aP1, (TechnoTypeClass *)aP2);
    if ( result >= 0 )
  {
    v4 = *(int *)aP1;
    aP2 = aP0->MyEffectivenessCoefficient;
    result = (*(int (__stdcall **)(int, int *, int, int))(v4 + 16))(aP1, &aP2, 4, 0);
    if ( result >= 0 )
    {
    v5 = 0;
    if ( aP2 > 0 )
      {
    v6 = 0;
    do
        {
    if ( (*(int (__stdcall **)(int, int, int, int))(*(int *)(aP1) + 16))(aP1, v6 + aP0->?, 3, 0) < 0 )
    break;
    ++v5;
    v6 += 3;
        }
    while ( v5 < aP2 );
      }
    return 0;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x006458D0  sub_6458D0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
ObjectClass * E4Recv_6458D0::sub_6458D0()
{
{
    ObjectClass *v2;
    const void **v3;
    v2 = 0;
    v3 = (const void **)&DataGlobal_830620.__pad_579C[4864];
    while ( _strcmpi(this, *v3) )
  {
    ++v3;
    v2 = (ObjectClass *)((char *)(v2) + 1);
    if ( (int)v3 >= (int)&DataGlobal_830620.__pad_579C[4884] )
    return (ObjectClass *)-1;
  }
    return v2;
}
}

// ==== BACKFILL 0x00645910  ParticleTypeClass::GetObjectSize  cls=ParticleTypeClass  sig=csp  renamed_refs=0 ====
int ParticleTypeClass::GetObjectSize()
{
return 792;
}

// ==== BACKFILL 0x00645920  ParticleTypeClass::GetTypeIdentifier  cls=ParticleTypeClass  sig=csp  renamed_refs=0 ====
int ParticleTypeClass::GetTypeIdentifier()
{
return 23;
}

// ==== BACKFILL 0x00645930  ParticleTypeClass::Stub  cls=ParticleTypeClass  sig=csp  renamed_refs=0 ====
char ParticleTypeClass::Stub(int a1, int a2)
{
return 0;
}

// ==== BACKFILL 0x00645940  ParticleTypeClass::StubReturnFalse  cls=ParticleTypeClass  sig=csp  renamed_refs=0 ====
int ParticleTypeClass::StubReturnFalse(int a1)
{
return 0;
}

// ==== BACKFILL 0x00645950  ParticleTypeClass::ddtor  cls=ParticleTypeClass  sig=csp  renamed_refs=0 ====
ParticleTypeClass * ParticleTypeClass::ddtor(char a2)
{
    ParticleTypeClass* v7 = this;
    ParticleTypeClass* blk = this;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    g_AnimPoolManager;
    int v2 = g_AnimPoolManager.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < g_AnimManager && v2 < --g_AnimManager )
    {
        do
        {
            ++v2;
            *(g_AnimPoolCount + v2 - 1) = *(g_AnimPoolCount + v2);
        }
        while ( v2 < g_AnimManager );
    }
    DataGlobal_A83D98;
    int v3 = DataGlobal_A83D98.FindItemIndex(&v7);
    if ( v3 != -1 && v3 < DataGlobal_A83DA8 && v3 < --DataGlobal_A83DA8 )
    {
        do
        {
            ++v3;
            *(DataGlobal_A83D9C + v3 - 1) = *(DataGlobal_A83D9C + v3);
        }
        while ( v3 < DataGlobal_A83DA8 );
    }
    blk->rgbVector->Delete();
    void *v5 = blk->rgbItems;
    blk->rgbVector = nullptr;
    if ( v5 && blk->rgbFlag )
    {
        OperatorDelete(v5);
        blk->rgbItems = nullptr;
    }
    blk->rgbFlag = 0;
    blk->rgbCapacity = 0;
    ObjectTypeClass::Destruct(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}

// ==== BACKFILL 0x00645B10  AbstractClass::getTeamIndex  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void* AbstractClass::getTeamIndex(int a2) {
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_RGBClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
} } }

// ==== BACKFILL 0x00645CD0  sub_645CD0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void E4Recv_645CD0::sub_645CD0(float a2)
{
{
    *(void**)this = a2 * *(void**)this;
    this->M4 = a2 *(void**)this->M4;
    this->M8 = a2 *(void**)this->M8;
    this->M12 = a2 *(void**)this->M12;
}
}

// ==== BACKFILL 0x00645D00  Function::645D00  cls=Function  sig=csp  renamed_refs=0 ====
int Function::645D00(int a2)
{
{
    return this + 4 * a2;
}
}

// ==== BACKFILL 0x00645ED0  QuaternionMathMultiply  cls=unknown  sig=csp  renamed_refs=0 ====
float * QuaternionMathMultiply(ObjectClass * aP0, float * a1, float * a2)
{
{
    double v4;
    double v5;
    float v7;
    float v8;
    float v9;
    float v10;
    float v11;
    float v12;
    float v13;
    float v14;
    float v15;
    float v16;
    float v17;
    float v18;
    float v19;
    float v20;
    float a2a;
    v11 = *a2;
    v13 = *((int*)(a2) + 1);
    v15 = *((int*)(a2) + 2);
    a2a = *((int*)(a2) + 3);
    v17 = *((int*)(a1) + 1) * a2a;
    v18 = *((int*)(a1) + 2) * a2a;
    v4 = *((int*)(a1) + 3);
    v12 = v4 * v11;
    v14 = v13 * v4;
    v16 = v15 * v4;
    v19 = *((int*)(a1) + 2) * *a2 - *((int*)(a2) + 2) * *a1;
    v20 = *((int*)(a2) + 1) * *a1 - *((int*)(a1) + 1) * *a2;
    v7 = *((int*)(a1) + 1) * *((int*)(a2) + 2) - *((int*)(a1) + 2) * *((int*)(a2) + 1) + v12 + *a1 * a2a;
    v8 = v17 + v14 + v19;
    v9 = v18 + v16 + v20;
    v10 = v4 * *((int*)(a2) + 3) - (*((int*)(a1) + 2) * *((int*)(a2) + 2) + *((int*)(a1) + 1) * *((int*)(a2) + 1) + *a1 * *a2);
    v5 = v9 * v9 + v8 * v8 + v10 * v10 + v7 * v7;
    if ( 0.0 != v5 )
  {
    v7 = v7 / v5;
    v8 = v8 / v5;
    v9 = v9 / v5;
    v10 = v10 / v5;
  }
    *(float *)aP0->__pad_0 = v7;
    *(float *)&aP0->__pad_0[4] = v8;
    *(float *)&aP0->__pad_0[8] = v9;
    *(float *)&aP0->__pad_0[12] = v10;
    return (float *)aP0->__pad_0;
}
}

// ==== BACKFILL 0x006460C0  sub_6460C0  cls=unknown  sig=csp  renamed_refs=0 ====
float * sub_6460C0(float * a0, ObjectClass * aP1)
{
{
    float v3;
    float v4;
    float v5;
    float v6;
    v3 = -*(float *)aP1->__pad_0;
    v4 = -*(float *)&aP1->__pad_0[4];
    v5 = -*(float *)&aP1->__pad_0[8];
    v6 = *(float *)&aP1->__pad_0[12];
    *a0 = v3;
    *((int*)(a0) + 1) = v4;
    *((int*)(a0) + 2) = v5;
    *((int*)(a0) + 3) = v6;
    return a0;
}
}

// ==== BACKFILL 0x00646480  FromQuaternionAxisAngle  cls=unknown  sig=csp  renamed_refs=0 ====
float * Quaternion_FromAxisAngle(float * a1, float * a2, float a3)
{
{
    float v3;
    float v4;
    float v5;
    double v7;
    double v8;
    double v9;
    float v11;
    float v12;
    float v13;
    float v14;
    float v15;
    float v16;
    float v17;
    float v18;
    float v19;
    float v20;
    float v21;
    v3 = *((int*)(a2) + 1);
    v4 = *((int*)(a2) + 2);
    v5 = *a2;
    v11 = *a2;
    v7 = Math::Sqrt(v4 * v4 + v3 * v3 + v11 * v11);
    if ( v7 == 0.0 )
  {
    v12 = v5;
    v13 = v3;
    v14 = v4;
  }
    else
  {
    v15 = v11 / v7;
    v12 = v15;
    v17 = v3 / v7;
    v13 = v17;
    v19 = v4 / v7;
    v14 = v19;
  }
    v8 = Math::SinCos(a3 * 0.5);
    v16 = v12 * v8;
    v18 = v13 * v8;
    v20 = v14 * v8;
    v9 = Math::ArcTan2(a3 * 0.5);
    v21 = v9;
    *a1 = v16;
    *((int*)(a1) + 1) = v18;
    *((int*)(a1) + 2) = v20;
    *((int*)(a1) + 3) = v21;
    return a1;
}
}

// ==== BACKFILL 0x00646980  ToQuaternionMatrix  cls=unknown  sig=csp  renamed_refs=0 ====
float * Quaternion_ToMatrix(float * a1, float * a2)
{
{
    double v2;
    double v4;
    double v5;
    double v6;
    double v7;
    double v8;
    float v9;
    float v10;
    float v11;
    float v12;
    float v13[12];
    v2 = *((int*)(a2) + 2) * *((int*)(a2) + 2);
    v12 = *((int*)(a2) + 1) * *((int*)(a2) + 1);
    v13[0] = 1.0 - (v12 + v2 + v12 + v2);
    v4 = *((int*)(a2) + 1) * *a2;
    v5 = *((int*)(a2) + 3) * *((int*)(a2) + 2);
    v13[1] = v4 - v5 + v4 - v5;
    v10 = *((int*)(a2) + 3) * *((int*)(a2) + 1);
    v6 = *a2 * *((int*)(a2) + 2);
    v9 = v6;
    v13[2] = v6 + v10 + v6 + v10;
    v13[4] = v5 + v4 + v5 + v4;
    v11 = *a2 * *a2;
    v13[5] = 1.0 - (v11 + v2 + v11 + v2);
    v7 = *((int*)(a2) + 1) * *((int*)(a2) + 2);
    v8 = *((int*)(a2) + 3) * *a2;
    v13[6] = v7 - v8 + v7 - v8;
    v13[8] = v9 - v10 + v9 - v10;
    v13[11] = 0.0;
    v13[7] = 0.0;
    v13[3] = 0.0;
    v13[9] = v8 + v7 + v8 + v7;
    v13[10] = 1.0 - (v11 + v12 + v11 + v12);
    qmemcpy(a1, v13, 0x30u);
    return a1;
}
}

// ==== BACKFILL 0x00646D00  sub_646D00  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_646D00::sub_646D00()
{
{
    *(void**)this = -1;
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 0;
    this->M16 = 0;
    this->M20 = 0;
    return this;
}
}

// ==== BACKFILL 0x0064AAA0  sub_64AAA0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
LRESULT E4Recv_64AAA0::sub_64AAA0()
{
{
    LRESULT v2;
    v2 = SendMessageA(this, 0x18Bu, 0, 0);
    if ( v2 > 50 )
  {
    SendMessageA(this, 0x182u, 0, 0);
    --v2;
  }
    return SendMessageA(this, 0x197u, v2 - 1, 0);
}
}

// ==== BACKFILL 0x0064B410  Network_Process_64B410  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_64B410(int a1, int * a2)
{
{
    int *v2;
    int v4;
    int v5;
    int v7;
    v2 = a2;
    if ( g_GameMode_Current[0] == 1 || g_GameMode_Current[0] == 2 )
  {
    if ( (*(int (__thiscall **)(int))(*(int *)(a1) + 16))(a1) )
    {
    ++g_GameFlags_Campaign;
    if ( !Network_Process_5F0120((int)v2) )
      {
    --g_GameFlags_Campaign;
    return 0;
      }
    --g_GameFlags_Campaign;
    }
    return 1;
  }
    if ( g_GameMode_Current[0] != 3 && g_GameMode_Current[0] != 4 )
    return 1;
    v4 = 0;
    v5 = 0x7FFFFFFF;
    v7 = 0;
    if ( (*(int (__thiscall **)(int))(*(int *)(a1) + 16))(a1) > 0 )
  {
    do
    {
    if ( *v2 < v5 )
      {
    v5 = *v2;
    v7 = v4;
      }
    ++v4;
    v2 += 6;
    }
    while ( v4 < (*(int (__thiscall **)(int))(*(int *)(a1) + 16))(a1) );
    v2 = a2;
  }
    KickNetworkPlayerNow(a1, v7, (int)v2, 1u);
    return 1;
}
}

// ==== BACKFILL 0x0064D990  Network_Process_64D990  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void sub_64D990()
{
{
    int v0;
    int v1;
    v0 = g_GameInitState;
    if ( g_GameInitState )
  {
    v1 = g_MenuInitFlags;
    do
    {
    if ( (DataGlobal_8B4205[111 * v1] & 1) == 0 && (int)g_CurrentFrame <= *(int *)((char *)&DataGlobal_8B4207 + 111 * v1) )
    break;
    if ( !v0 )
    break;
    v1 = ((short)v1 + 1) & 0x3FFF;
    --v0;
    g_MenuInitFlags = v1;
    g_GameInitState = v0;
    }
    while ( v0 );
  }
}
}

// ==== BACKFILL 0x0064D9E0  Network_Process_64D9E0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int sub_64D9E0()
{
{
    int result;
    int v1;
    short v2;
    int v3;
    int i;
    int Buffer;
    if ( g_CurrentFrame || (result = g_GameMode_Current[0]) == 0 )
  {
    v1 = 0;
    Buffer = 0;
    if ( g_GameInitState > 0 )
    {
    v2 = g_MenuInitFlags;
    v3 = g_GameInitState;
    do
      {
    if ( g_CurrentFrame == *(wchar_t **)((char *)&DataGlobal_8B4207 + 111 * (v2 & 0x3FFF)) && (DataGlobal_8B4205[111 * (v2 & 0x3FFF)] & 1) == 0 )
        {
    ++v1;
        }
    ++v2;
    --v3;
      }
    while ( v3 );
    Buffer = v1;
    }
    FileClass::Write(g_MainLoopObject, &Buffer, 4u);
    result = g_GameInitState;
    for ( i = 0; i < g_GameInitState; ++i )
    {
    if ( g_CurrentFrame == *(wchar_t **)((char *)&DataGlobal_8B4207 + 111 * (((short)g_MenuInitFlags + (short)i) & 0x3FFF)) && (DataGlobal_8B4205[111 * (((short)g_MenuInitFlags + (short)i) & 0x3FFF)] & 1) == 0 )
      {
    FileClass::Write(g_MainLoopObject, &g_MenuInitComplete[111 * (((short)g_MenuInitFlags + (short)i) & 0x3FFF)], 0x6Fu);
    --Buffer;
      }
    result = g_GameInitState;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0064DE80  ComputeHash  cls=unknown  sig=csp  renamed_refs=0 ====
int Hash_Compute(unsigned int * a1, int a2)
{
  result = a2 + (*a1 >> 31) + 2 * *a1;
  *a1 = result;
}
