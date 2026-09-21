// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x004C1AB0  DSurface::IsDSurface  cls=DSurface  sig=csp  renamed_refs=0  residual=- ====
char DSurface::IsDSurface()
{
return 1;
}

// ==== BACKFILL 0x004C2B40  sub_4C2B40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_4C2B40::sub_4C2B40(unsigned int * a2)
{
{
    int v2;
    int *v3;
    char v5[12];
    v2 = this->M32;
    if ( v2 )
  {
    v3 = (int *)(*(int (__thiscall **)(int, char *, int, int, int, int))(*(int *)(v2) + 176))( v2, v5, this->M36, 0, 0, 0);
    *a2 = *v3;
    *((int*)(a2) + 1) = v3[1];
    *((int*)(a2) + 2) = v3[2];
    return a2;
  }
    else
  {
    *a2 = DataGlobal_8A0E50;
    *((int*)(a2) + 1) = DataGlobal_8A0E54;
    *((int*)(a2) + 2) = DataGlobal_8A0E58;
    return a2;
  }
}
}

// ==== BACKFILL 0x004C2BD0  TechnoClass::updateSightRange  cls=TechnoClass  sig=csp  renamed_refs=1  residual=- ====
void TechnoClass::updateSightRange(IUnknown * aP1, int a3)
{
{
    if ( aP1 && (*(int (__thiscall **)(IUnknown *))(aP1->field_0 + 44))(aP1) == 1 && aP1->__pad_8C[4] && !aP1->__pad_68[25] )
  {
    this->NeedsSaveOrLink = aP1;
    this->objectTypeFlags = a3;
  }
}
}

// ==== BACKFILL 0x004C2C10  UnitClass::updateHarvesting  cls=UnitClass  sig=csp  renamed_refs=0  residual=- ====
UnitClass* UnitClass::updateHarvesting()
{
    // 0x4c2c10: mov eax, [ecx+20h] — read NeedsSaveOrLink pointer
    UnitClass* result = this->NeedsSaveOrLink;
    if (result)
    {
        // 0x4c2c19: mov [eax+6DCh], edx — clear target's ElectricBolt
        result->ElectricBolt = nullptr;
        // 0x4c2c1f: mov [ecx+20h], edx — clear the link pointer
        this->NeedsSaveOrLink = nullptr;
    }
    // 0x4c2c22: retn — return original pointer in eax
    return result;
}

// ==== BACKFILL 0x004C2C30  ??0Iostream_init_QAE_XZ_3  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
Iostream_init * E4Recv_4C2C30::__0Iostream_init_QAE_XZ_3()
{
{
    return this;
}
}

// ==== BACKFILL 0x004C2FC0  sub_4C2FC0  cls=EditClass  sig=csp  renamed_refs=0  residual=- ====
int * E4Recv_4C2FC0::sub_4C2FC0(DropListClass * aP1, ControlClass * aP2, int a4, DropListClass * aP4, ControlClass * aP5, ControlClass * aP6, ControlClass * aP7, int a9, int a10)
{
{
    DropListClass *v11;
    AbstractClass *Instance;
    int v13;
    ControlClass::Construct(this, (ControlClass *)aP1, aP5, aP6, aP7, (ControlClass *)a9, 1, 0);
    v11 = aP4;
    BYTE1(v11) = BYTE1(aP4) & 0xFE;
    this->M44 = (int)v11;
    *(void**)this = (int)&vt_EditClass;
    this->M48 = a10;
    this->M52 = (int)aP2;
    this->M56 = a4 - 1;
    this->M60 = wcslen((const wchar_t *)aP2);
    this->Vf72();
    this->M64 = BuildingAnim::GetType();
    if ( aP7 == (ControlClass *)-1 || a9 == -1 )
  {
    Instance = TextRenderer::GetInstance();
    if ( a9 == -1 )
    this->M24 = Instance->referenceCount + 1;
    if ( aP7 == (ControlClass *)-1 )
    {
    if ( wcslen((const wchar_t *)this->M52) )
      {
    v13 = Text::MeasureWidth(this->M52, 0);
    this->M68 = 0;
    this->M20 = v13 + 6;
    return this;
      }
    this->M20 = (this->M56 + 1) * Text::MeasureWidth((int)DataGlobal_820768, 0) + 2;
    }
  }
    this->M68 = 0;
    return this;
}
}

// ==== BACKFILL 0x004C30B0  DropListClass::Constructor  cls=DropListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int DropListClass::Constructor() {
{
    *(void**)this = &vt_EditClass;
    if ( COMObject::IsPrimaryInstance(this) )
    COMObject::DeactivateGlobal(this);
    return GadgetClass::Dtor(this);
}
} }

// ==== BACKFILL 0x004C32A0  DropListClass::GetSelected  cls=EditClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int DropListClass::GetSelected() {
{
    int v1;
    int v2;
    int v3;
    int v5[4];
    v1 = *(this + 4);
    v5[0] = *(this + 3);
    v2 = *(this + 5);
    v3 = *(this + 6);
    v5[1] = v1;
    v5[3] = v3;
    v5[2] = v2;
    return DrawBuildingTilesSHP(v5, 4, 1);
}
} }

// ==== BACKFILL 0x004C3570  DropListClass::Close  cls=EditClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int DropListClass::Close() {
{
      const wchar_t *v2;

      v2 = this->q034;
      this->q03C = 0;
      if ( v2 )
        this->q03C = (const wchar_t *)wcslen(v2);
      return COMObject::ActivateGlobal(this);
}
} }

// ==== BACKFILL 0x004C37D0  sub_4C37D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned char * sub_4C37D0(int a1, unsigned char * a2, int a3, unsigned char a4)
{
{
    int v5;
    int v6;
    int v7;
    int v8;
    int i;
    int v10;
    char *v12;
    short v13;
    char v14;
    int v15;
    char *v16;
    v16 = a2;
    if ( !a2 )
    return 0;
    v5 = 0;
    v12 = a2;
    v15 = 0;
    do
  {
    if ( v5 <= 240 && v5 )
    {
    v6 = a1 + 2 * (v5 % 256) + v5 % 256;
    v13 = *(short *)v6;
    v14 = *(char *)(v6 + 2);
    Color::Lerp((unsigned char *)&v13, a4, (unsigned char *)(a1 + 2 * (a3 % 256) + a3 % 256));
    v7 = -1;
    v8 = 0;
    for ( i = 240; i < 255; ++i )
      {
    v10 = Palette::CalcColorDistance((unsigned char *)(a1 + 2 * (i % 256) + i % 256), (unsigned char *)&v13);
    if ( v7 == -1 || v10 < v8 )
        {
    v7 = i;
    v8 = v10;
        }
      }
    a2 = v16;
    *v12++ = v7;
    v5 = v15;
    }
    else
    {
    *v12++ = v5;
    }
    v15 = ++v5;
  }
    while ( v5 < 256 );
    return a2;
}
}

// ==== BACKFILL 0x004C38D0  sub_4C38D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4C38D0::sub_4C38D0()
{
{
    return ((int)this + 1) << 8;
}
}

// ==== BACKFILL 0x004C3C90  sub_4C3C90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** E4Recv_4C3C90::sub_4C3C90(wchar_t * a2, wchar_t * a3, wchar_t * String, wchar_t * a5)
{
{
    size_t v6;
    wchar_t *v7;
    this->M4 = a2;
    this->M8 = a3;
    this->M12 = a5;
    v6 = wcslen(String);
    v7 = (wchar_t *)__2_YAPAXI_Z(2 * v6 + 2);
    *(void**)this = v7;
    wcscpy(v7, String);
    return this;
}
}

// ==== BACKFILL 0x004C4F90  TaskForceClass::Check  cls=TaskForceClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * TaskForceClass::Check()
{
{
    sprintf((char *const)&DataGlobal_89E138.field_5668, (ObjectClass *)&DataGlobal_82083C.CampaignScore_field_0x20, (INIClass *)*(void**)this);
    return (ObjectClass *)&DataGlobal_89E138.field_5668;
}
}

// ==== BACKFILL 0x004C4FC0  sub_4C4FC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4C4FC0::sub_4C4FC0(int a2)
{
{
    int result;
    int v4;
    int v5;
    int v6;
    result = Power::TimerProcess(*(void**)this);
    v4 = this->M4;
    if ( v4 )
  {
    v5 = (*(int (__thiscall **)(int))(*(int *)(v4) + 44))(v4);
    Power::TimerProcess(v5);
    v6 = (*(int (__stdcall **)(int))(*(int *)(this->M4 + 4) + 16))(this->M4 + 4);
    return Power::TimerProcess(v6);
  }
    return result;
}
}

// ==== BACKFILL 0x004C5470  sub_4C5470  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4C5470()
{
{
    int result;
    for ( result = DataGlobal_8A3880; DataGlobal_8A3880; result = DataGlobal_8A3880 )
  {
    if ( *(int *)DataGlobal_8A3874 )
    (*(void (__thiscall **)(int, int))(**(int **)DataGlobal_8A3874 + 32))(*(int *)DataGlobal_8A3874, 1);
  }
    return result;
}
}

// ==== BACKFILL 0x004C59F0  EMPulseClass::ddtor  cls=EMPulseClass  sig=csp  renamed_refs=0  residual=- ====
int EMPulseClass::ddtor(int a1, _DWORD *a2)
{
    if ( !a2 )
        return -2147467261;
    *a2 = -1205482718;
    a2[1] = 298983438;
    a2[2] = 1610656159;
    a2[3] = 1490328072;
    return 0;
}

// ==== BACKFILL 0x004C5AA0  EMPulseClass::StubReturn52  cls=EMPulseClass  sig=csp  renamed_refs=0  residual=- ====
int EMPulseClass::StubReturn52()
{
return 52;
}

// ==== BACKFILL 0x004C5AB0  EMPulseClass::StubReturn55  cls=EMPulseClass  sig=csp  renamed_refs=0  residual=- ====
int EMPulseClass::StubReturn55()
{
return 55;
}

// ==== BACKFILL 0x004C5AC0  EMPulseClass::CopyTo  cls=EMPulseClass  sig=csp  renamed_refs=0  residual=- ====
EMPulseClass * EMPulseClass::CopyTo(AbstractClass * this, AbstractClass * a2, char a3)
{
{
    int v4;
    AbstractClass *v6;
    *(int *)this->__pad_0 = (unsigned int)vt_EMPulseClass;
    *(int *)&this->__pad_0[4] = (unsigned int)vt_EMPulseClass;
    *(int *)&this->__pad_0[8] = (unsigned int)vt_EMPulseClass;
    *(int *)&this->__pad_0[12] = &vt_EMPulseClass;
    if ( HouseClass_Player.__pad_5568[22252] )
    EMPulseClass::IterateCellsInRadius((int)this);
    LOBYTE(a2) = 1;
    AbstractClass::AnnounceExpiredPointer(this, a2);
    v6 = this;
    v4 = (*(int (__thiscall **)(char *, AbstractClass **))(*(int *)&DataGlobal_89E138.__pad_566C[204] + 16))( &DataGlobal_89E138.__pad_566C[204], &v6);
    if ( v4 != -1 && v4 < *(int *)&DataGlobal_89E138.__pad_566C[220] )
  {
    --*(int *)&DataGlobal_89E138.__pad_566C[220];
    for ( ;
    v4 < *(int *)&DataGlobal_89E138.__pad_566C[220];
    *(int *)(*(int *)&DataGlobal_89E138.__pad_566C[208] + 4 * v4 - 4) = *(int *)(*(int *)&DataGlobal_89E138.__pad_566C[208] + 4 * v4) ) {
    ++v4;
    }
  }
    AbstractClass::DTOR(this);
    if ( (a3 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (EMPulseClass *)this;
}
}

// ==== BACKFILL 0x004C6340  SaveGame::SaveBlock68  cls=SaveGame  sig=csp  renamed_refs=0  residual=- ====
int SaveGame::SaveBlock68(int a2)
{
{
    return (*(int (__stdcall **)(int, void *, int, int))(*(int *)(a2) + 16))(a2, this, 68, 0);
}
}

// ==== BACKFILL 0x004C6780  ScenarioClass::SetEvent  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* ScenarioClass::SetEvent(int a1, int a2, int a3, int a4, int a5, int a6) {
{
      Debug::Log();
      if ( (int)aP1 < 0 )
      {
        this->q002 = -1;
        *this = 0;
        this->q003 = *(_DWORD *)&g_NetworkPlayerBuffer.__pad_14B0[664];
        return this;
      }
      else
      {
        this->q002 = (char)aP1;
        *this = a3;
        this->q007 = a4;
        this->q00B = a5;
        this->IsInitialized = a6;
        this->Count = a7;
        this->q003 = *(_DWORD *)&g_NetworkPlayerBuffer.__pad_14B0[664];
        return this;
      }
}
} }

// ==== BACKFILL 0x004C68E0  sub_4C68E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * AnimClass::sub_4C68E0(int a2, int a3, IUnknown * aP3, IUnknown * aP4, int a6, char a7, int a8, char a9, int a10, int a11)
{
{
    Debug::Log();
    if ( a2 < 0 )
  {
    BYTE2(this->field_0) = -1;
    LOBYTE(this->field_0) = 0;
    *(int *)((char *)&this->field_0 + 3) = *(int *)&g_NetworkPlayerBuffer.__pad_14B0[664];
    return (char *)this;
  }
    else
  {
    BYTE2(this->field_0) = a2;
    LOBYTE(this->field_0) = 5;
    *(void **)((char *)&this->field_4 + 3) = (void *)a3;
    HIBYTE(this->field_8) = (char)aP3;
    this->__pad_C[0] = (char)aP4;
    *(int *)&this->__pad_C[1] = a6;
    this->__pad_C[5] = a7;
    *(int *)&this->__pad_C[6] = a8;
    *(int *)&this->__pad_18[3] = a11;
    BYTE2(this->field_14) = a9;
    *(int *)((char *)&this->field_14 + 3) = a10;
    *(int *)((char *)&this->field_0 + 3) = *(int *)&g_NetworkPlayerBuffer.__pad_14B0[664];
    return (char *)this;
  }
}
}

// ==== BACKFILL 0x004C69E0  sub_4C69E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_4C69E0::sub_4C69E0(int a2, char a3, int a4, unsigned short * a5)
{
{
    Debug::Log();
    if ( a2 < 0 )
  {
    this->M2 = -1;
    *(void**)this = 0;
    this->M3 = g_CurrentFrame;
    return this;
  }
    else
  {
    this->M2 = a2;
    *(void**)this = a3;
    this->M7 = a4;
    this->M11 = -1;
    this->M15 = 0;
    this->M19 = *a5;
    this->M21 = *((int*)(a5) + 1);
    this->M3 = g_CurrentFrame;
    return this;
  }
}
}

// ==== BACKFILL 0x004C6A60  sub_4C6A60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_4C6A60::sub_4C6A60(int a2, char a3, int a4, int a5, unsigned short * a6)
{
{
    Debug::Log();
    if ( a2 < 0 )
  {
    this->M2 = -1;
    *(void**)this = 0;
    this->M3 = g_CurrentFrame;
    return this;
  }
    else
  {
    this->M2 = a2;
    *(void**)this = a3;
    this->M11 = a5;
    this->M7 = a4;
    this->M15 = 0;
    this->M19 = *a6;
    this->M21 = *((int*)(a6) + 1);
    this->M3 = g_CurrentFrame;
    return this;
  }
}
}

// ==== BACKFILL 0x004C6BE0  sub_4C6BE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_4C6BE0::sub_4C6BE0(int a2, char a3, int a4, int a5)
{
{
    Debug::Log();
    if ( a2 < 0 )
  {
    this->M2 = -1;
    *(void**)this = 0;
  }
    else
  {
    this->M2 = a2;
    *(void**)this = a3;
    this->M7 = a4;
    this->M11 = a5;
  }
    this->M3 = g_CurrentFrame;
    return this;
}
}

// ==== BACKFILL 0x004C9150  XSurface::vt_entry_68  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int XSurface::vt_entry_68()
{
return 0;
}

// ==== BACKFILL 0x004C91B0  ?do_always_noconv_codecvt_base_std__MBE_NXZ_5  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char _do_always_noconv_codecvt_base_std__MBE_NXZ_5()
{
return 1;
}

// ==== BACKFILL 0x004C9470  TechnoClass::GetWeaponType  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* TechnoClass::GetWeaponType(void* a1) {
{
    *(int *)a1->__pad_0 = *(void**)this;
    return a1->__pad_0;
}
} } }

// ==== BACKFILL 0x004C9680  BuildingTypeClass::GetPowerOutput  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::GetPowerOutput(ObjectClass * aP1)
{
{
    ObjectClass *result;
    short v3;
    result = aP1;
    if ( (int)aP1 >= 127 )
    result = (ObjectClass *)127;
    LOBYTE(v3) = 0;
    HIBYTE(v3) = (char)result;
    this->abstractFlags = v3;
    return (int)result->__pad_0;
}
}

// ==== BACKFILL 0x004CA120  ObjectClass::GetMember09  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetMember09()
{
{
    return this->objectTypeFlags;
}
}

// ==== BACKFILL 0x004CA130  ObjectClass::IsCliffWall  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { bool ObjectClass::IsCliffWall() {
{
    if ( this->TiberiumClass_field_10C && this->objectTypeFlags == 54 )
    return 1;
    return this->bombVisible != -1 && this->objectTypeFlags == 54;
}
} } }

// ==== BACKFILL 0x004CA160  AbstractClass::GetType  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::GetType()
{
{
    return this->repairStationsCapacity;
}
}

// ==== BACKFILL 0x004CA230  FactoryClass::ddtor  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
int FactoryClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 887937448;
  a2[1] = 298977968;
  a2[2] = 1610655660;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x004CA3C0  FactoryClass::Seek  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
int FactoryClass::Seek(int * a1, int * a2, int a3)
{
{
    int result;
    int v4;
    int i;
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
  {
    v4 = *a2;
    a3 = *((int*)(a1) + 20);
    result = (*(int (__stdcall **)(int *, int *, int, int))(v4 + 16))(a2, &a3, 4, 0);
    if ( result >= 0 )
    {
    for ( i = 0; i < a3; ++i )
      {
    if ( (*(int (__stdcall **)(int *, int, int, int))(*a2 + 16))(a2, *((int*)(a1) + 17) + 4 * i, 4, 0) < 0 )
    break;
      }
    return 0;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x004CA620  FactoryClass::RemoveOneFromQueue  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
char FactoryClass::RemoveOneFromQueue(char a2)
{
{
    int *v2;
    int v3;
    int v4;
    int v5;
    v2 = this + 16;
    v3 = (*(int (__thiscall **)(int *, char *))(this->onHold + 16))(this + 16, &a2);
    if ( v3 == -1 )
    return 0;
    v4 = v2[4];
    if ( v3 >= v4 )
    return 0;
    v5 = v4 - 1;
    for ( v2[4] = v5; v3 < v2[4]; *(int *)(v2[1] + 4 * v3 - 4) = *(int *)(v2[1] + 4 * v3) )
    ++v3;
    return 1;
}
}

// ==== BACKFILL 0x004CA750  FactoryClass::StubReturn12  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
int FactoryClass::StubReturn12()
{
return 12;
}

// ==== BACKFILL 0x004CA760  FactoryClass::StubReturn116  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
int FactoryClass::StubReturn116()
{
return 116;
}

// ==== BACKFILL 0x004CA890  AbstractClass::processScriptEvent  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void AbstractClass::processScriptEvent() {
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->uniqueId = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->vtable1 = 0;
  }
    this->IsAllocated = 0;
    this->vtable2 = 0;
}
} } }

// ==== BACKFILL 0x004CA8C0  AbstractClass::checkScriptCondition  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::checkScriptCondition(int a2) {
{
    if ( this->vtable3 )
    return (unsigned int)(a2 - this->vtable1) >> 2;
    else
    return 0;
}
} } }

// ==== BACKFILL 0x004CAA70  AbstractClass::executeScriptAction  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::executeScriptAction(int a2, void* a3) {
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->vtable3 = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->vtable3 = 1;
    if ( !v4 )
    return 0;
    if ( this->vtable1 )
    {
    v5 = this->vtable2;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->vtable1 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->vtable1 = 0;
      }
    }
    this->vtable1 = v4;
    this->vtable2 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->vt_entry_68();
  }
    v7 = this->vtable2;
    if ( v7 < this->uniqueId )
    this->uniqueId = v7;
    return 1;
}
} } }

// ==== BACKFILL 0x004CAB20  AbstractClass::validateScriptArgs  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::validateScriptArgs(void* a2) {
{
      int v2;
      int result;
      _DWORD *i;

      v2 = this->uniqueId;
      result = 0;
      if ( v2 <= 0 )
        return -1;
      for ( i = (_DWORD *)this->vtable1; *i != *a2; ++i )
      {
        if ( ++result >= v2 )
          return -1;
      }
      return result;
}
} } }

// ==== BACKFILL 0x004CABA0  AbstractClass::resetScriptState  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* AbstractClass::resetScriptState(int a2) {
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TechnoTypeClass_const;
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

// ==== BACKFILL 0x004CAD80  BuildingLight::CalcIntensity  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double BuildingLight::CalcIntensity(double a1)
{
{
    return *((float *)&DataGlobal_859094 - Math::RoundToInt((a1 + 1.0) * -2048.0));
}
}

// ==== BACKFILL 0x004CADB0  Math::ArcTan2_Table  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double Math::ArcTan2_Table(double a1)
{
{
    return 1.570796326794897 - *((float *)&DataGlobal_859094 - Math::RoundToInt((a1 + 1.0) * -2048.0));
}
}

// ==== BACKFILL 0x004CADE0  Math::ArcTan  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double Math::ArcTan(double a1)
{
{
    int v2;
    double result;
    float v4;
    v4 = a1;
    v2 = abs32(Math::RoundToInt(a1 / DataGlobal_8650B8));
    if ( v2 >= 4097 )
    result = 1.5707964;
    else
    result = DataGlobal_8610B4[v2];
    if ( v4 < 0.0 )
    return -result;
    return result;
}
}

// ==== BACKFILL 0x004CB1A0  ComputeChronosphereDistortion  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double ComputeChronosphereDistortion(float a1)
{
{
    int v1;
    char v2;
    signed int v3;
    int v4;
    v1 = Math::RoundToInt(DataGlobal_8223B4 * a1);
    v2 = v1 & 1;
    v3 = (v1 / 2) & 0x80001FFF;
    if ( v3 >= 0 || (v3 = (((short)v3 - 1) | 0xFFFFE000) + 1, v3 >= 0) )
    v4 = v3 + 2048;
    else
    v4 = v3 + 10240;
    if ( v2 && v4 < 10239 )
    return DataGlobal_84F088[v4];
    else
    return DataGlobal_84F084[v4];
}
}

// ==== BACKFILL 0x004CB3D0  globalHelper_0CB3D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double globalHelper_0CB3D0(AbstractClass * aP0, AbstractClass * aP1)
{
{
    double v3;
    char v4;
    double result;
    int v6;
    v3 = *(float *)&aP0;
    if ( v4 )
  {
    if ( v3 == 0.0 )
    {
    return 0.0;
    }
    else if ( *(float *)&aP0 <= 0.0 )
    {
    return -1.5707964;
    }
    else
    {
    return 1.5707964;
    }
  }
    else
  {
    v6 = abs32(Math::RoundToInt(v3 / *(float *)&aP1 / DataGlobal_8650B8));
    if ( v6 >= 4097 )
    result = 1.5707964;
    else
    result = *(float *)&DataGlobal_84DD9C.__pad_579C[4 * v6 + 56188];
    if ( *(float *)&aP1 < 0.0 )
    result = 3.141592653589793 - result;
    if ( *(float *)&aP0 < 0.0 )
    return -result;
  }
    return result;
}
}

// ==== BACKFILL 0x004CB8B0  sub_4CB8B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
u_short E4Recv_4CB8B0::sub_4CB8B0()
{
{
    u_short v2;
    u_short v3;
    u_short result;
    switch ( (unsigned short)this->M4 )
  {
    case 3: case 4: **(short **)(this + 8) = htons(**(short **)(this + 8));
    break;
    case 5: case 6: **(int **)(this + 8) = htonl(**(int **)(this + 8));
    break;
    default: break;
  }
    v2 = htons((unsigned short)this->M4);
    v3 = (unsigned short)this->M6;
    this->M4 = v2;
    result = htons(v3);
    this->M6 = result;
    return result;
}
}

// ==== BACKFILL 0x004CC310  TrajectoryHelper::FindFirstImpenetrableObstacle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TrajectoryHelper::FindFirstImpenetrableObstacle(IUnknown * aP0, int * a1, int arg0, void * a3)
{
{
    IUnknown *FirstObstacle;
    IUnknown *v5;
    FirstObstacle = (IUnknown *)TrajectoryHelper::FindFirstObstacle(aP0, a1, *(int *)(arg0 + 160), a3);
    v5 = FirstObstacle;
    if ( FirstObstacle && BuildingPlacement::ValidateType(FirstObstacle, (AbstractClass *)0xFFFFFFFF, (IUnknown *)0xFFFFFFFF) && *(char *)(*(int *)(arg0 + 172) + 324) )
  {
    return 0;
  }
    else
  {
    return &v5->field_0;
  }
}
}

// ==== BACKFILL 0x004CCA20  JumpjetLocomotionClass::StubReturnZero_7  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_7(LocomotionClass * aP0, unsigned int * a1)
{
{
    int v2;
    v2 = StreamClass::ResetPosition(aP0, (int)a1);
    if ( !v2 )
  {
    if ( a1 && (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 2 && *(char *)(*((int*)(a1) + 433) + 3597) )
    {
    LOBYTE(aP0->RefCount) = 1;
    return 0;
    }
    LOBYTE(aP0->RefCount) = 0;
  }
    return v2;
}
}

// ==== BACKFILL 0x004CCA70  sub_4CCA70  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_4CCA70::sub_4CCA70()
{
{
    *(void**)this = vt_FlyLocomotionClass;
    this->M4 = &vt_FlyLocomotionClass;
    LocomotionClass::Construct(this);
}
}

// ==== BACKFILL 0x004CCA90  JumpjetLocomotionClass::ComputeFloatExpression  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
BOOL JumpjetLocomotionClass::ComputeFloatExpression(int a1)
{
{
    return *(char *)(a1 + 48) || *(float *)(*(int *)(a1 + 8) + 744) > 0.0;
}
}

// ==== BACKFILL 0x004CCAC0  JumpjetLocomotionClass::ComputeFloatExpression_0  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::ComputeFloatExpression_0(int a1)
{
  return *(double *)(a1 + 68) != 0.0;
}

// ==== BACKFILL 0x004CCAE0  JumpjetLocomotionClass::GetMovementCoordinate  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate(unsigned int * a1, unsigned int * a2)
{
{
    int *result;
    int v3;
    int v4;
    int *v5;
    if ( (*(unsigned char (__stdcall **)(int *))(*a1 + 16))(a1) )
  {
    result = a2;
    v3 = *((int*)(a1) + 7);
    v4 = *((int*)(a1) + 8);
    v5 = a2;
    *a2 = *((int*)(a1) + 6);
  }
    else
  {
    result = a2;
    v3 = DataGlobal_8B3C7C;
    v4 = DataGlobal_8B3C80;
    v5 = a2;
    *a2 = DataGlobal_8B3C78;
  }
    v5[1] = v3;
    v5[2] = v4;
    return result;
}
}

// ==== BACKFILL 0x004CCB40  JumpjetLocomotionClass::ProcessLocomotionStep  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::ProcessLocomotionStep(int a1)
{
{
    int v1;
    int *v2;
    char result;
    int v4;
    if ( !*(char *)(a1 + 77) && !*(char *)(a1 + 76) && *(double *)(a1 + 60) >= 1.0 && !*(int *)(a1 + 52) )
  {
    v1 = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 132))(*(int *)(a1 + 8));
    *(int *)(a1 + 52) = (*(int (__thiscall **)(int))(*(int *)(v1) + 188))(v1);
  }
    v2 = *(int **)(a1 + 8);
    if ( v2[27] > 0 && !*(char *)(a1 + 77) && !*(char *)(a1 + 76) && (*(unsigned char (__thiscall **)(int *))(*v2 + 512))(v2) )
  {
    (*(void (__thiscall **)(int))(**(int **)(a1 + 8) + 492))(*(int *)(a1 + 8));
  }
    JumpjetLocomotionClass::ProcessRotation(a1 - 4);
    DamageArea::ApplyScatter(a1 - 4);
    result = (*(int (__stdcall **)(int))(*(int *)(a1) + 96))(a1);
    if ( result )
  {
    v4 = *(int *)(a1 + 8);
    if ( *(char *)(v4 + 144) )
    {
    if ( *(int *)(v4 + 108) > 0 && (*(int *)(a1 + 24) != DataGlobal_8B3C78 || *(int *)(a1 + 28) != DataGlobal_8B3C7C || *(int *)(a1 + 32) != DataGlobal_8B3C80) && !*(char *)(a1 + 77) && !*(char *)(a1 + 76) && (*(int (__thiscall **)(int))(*(int *)(v4) + 456))(v4) > 0 )
      {
    LandFootClassAtPosition( a1 - 4, *(int *)(a1 + 32), 1, *(float *)(a1 + 24), *(int *)(a1 + 28), *(int *)(a1 + 32));
      }
    if ( *(int *)(*(int *)(a1 + 8) + 108) > 0 )
    FootClass::ProcessDeployMission(a1 - 4);
    JumpjetLocomotionClass::IsMapCoordVisible((int *)(a1 - 4));
    return (*(int (__stdcall **)(int))(*(int *)(a1) + 16))(a1);
    }
    else
    {
    return 0;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x004CD510  JumpjetLocomotionClass::IsMapCoordVisible  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::IsMapCoordVisible()
{
{
    int *v2;
    bool v3;
    char *v4;
    int i;
    int *v6;
    int v7;
    int v8;
    int v10[3];
    v2 = (int *)(this->LinkedTo + 156);
    v10[0] = *v2;
    v10[1] = v2[1];
    v10[2] = v2[2];
    v3 = IsCoordVisibleMap(&DataGlobal_87F7E8, v10);
    v4 = (char *)this->LinkedTo;
    if ( v3 )
  {
    v4[981] = 1;
    return 0;
  }
    if ( (*(int (__thiscall **)(char *))(*(int *)(v4) + 388))(v4) != 4 )
    return 0;
    for ( i = this->LinkedTo; *(int *)(i + 280); i = this->LinkedTo )
  {
    v6 = (int *)LinkedList::Pop((int *)(i + 276));
    if ( sub_413CD0((int)v6) )
    *(char *)(v6[135] + 505) = 1;
    v7 = v6[373];
    if ( v7 )
    *(char *)(v7 + 130) = 1;
    if ( v6 )
    (*(void (__thiscall **)(int *, int))(*v6 + 32))(v6, 1);
  }
    v8 = *(int *)(this->LinkedTo + 1492);
    if ( v8 )
    *(char *)(v8 + 130) = 1;
    (*(void (__thiscall **)(int))(*(int *)this->LinkedTo + 928))(this->LinkedTo);
    (*(void (__thiscall **)(int))(*(int *)this->LinkedTo + 248))(this->LinkedTo);
    return 1;
}

}

// ==== BACKFILL 0x004CF830  JumpjetLocomotionClass::CalculateBobOffset  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::CalculateBobOffset(int a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    int v4;
    int (__stdcall ***v5)(int, void *, int *);
    int v6;
    int v7;
    int v8;
    double v9;
    int *v10;
    int v11;
    bool v12;
    int v14;
    v2 = a1;
    v3 = 0;
    v4 = 0;
    v5 = *(int (__stdcall ****)(int, void *, int *))(a1 + 8);
    a1 = 0;
    if ( v5 )
  {
    v6 = (**v5)(v5, &DataGlobal_822410, &v14);
    if ( v6 >= 0 )
    {
    v7 = v14;
    Release3COM(&a1);
    v4 = v7;
    a1 = v7;
    }
    else
    {
    Release3COM(&a1);
    v4 = 0;
    a1 = 0;
    }
    if ( v6 < 0 && v6 != -2147467262 )
    WinAPI::Wrapper(v6);
  }
    v8 = 0;
    if ( v4 )
    v8 = (*(int (__stdcall **)(int))(*(int *)(v4) + 12))(v4);
    if ( !*(char *)((*(int (__thiscall **)(int))(**(int **)(v2 + 8) + 132))(*(int *)(v2 + 8)) + 3221) && !*(char *)(v2 + 77) && !*(char *)(v2 + 76) && (*(int (__thiscall **)(int))(**(int **)(v2 + 8) + 456))(*(int *)(v2 + 8)) > v8 )
  {
    v14 = (int)g_CurrentFrame % 20;
    v9 = Math::SinCos((double)((int)g_CurrentFrame % 20) * 0.3141592653589793);
    v3 = Math::RoundToInt(v9 * 1.5 + 0.5);
  }
    v10 = a2;
    *a2 = 0;
    v11 = a1;
    v12 = a1 == 0;
    v10[1] = v3;
    if ( !v12 )
    (*(void (__stdcall **)(int))(*(int *)(v11) + 8))(v11);
    return v10;
}
}

// ==== BACKFILL 0x004CF940  JumpjetLocomotionClass::ShortFunc_4CF940  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::ShortFunc_4CF940(int a1, unsigned int * a2)
{
*a2 = 0;
a2[1] = 0;
return a2;
}

// ==== BACKFILL 0x004CFB00  JumpjetLocomotionClass::ComputeVoxelMatrix  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
float * JumpjetLocomotionClass::ComputeVoxelMatrix(int a1, float * a2, unsigned int * a3)
{
{
    int *v3;
    int v4;
    float v6;
    int v7;
    int v8[3];
    float v9[12];
    char v10[48];
    v3 = (int *)(*(int *)(a1 + 8) + 156);
    v8[0] = *v3;
    v8[1] = v3[1];
    v8[2] = v3[2];
    v4 = *((unsigned char *)Coord::To_Cell(&DataGlobal_87F7E8, v8) + 284);
    if ( *(char *)((*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 132))(*(int *)(a1 + 8)) + 3221) )
    v4 = 0;
    qmemcpy(v9, CopyAudioData(v10, v4), sizeof(v9));
    v6 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((short *)(*(int *)(a1 + 8) + 928), &v7) >> 10) + 1) >> 1) & 0x1F) - 8)
    * -0.1963495408493621;
    Matrix2D::Rotate(v9, v6);
    if ( a3 && *a3 != -1 )
  {
    *a3 = 32 * (v4 + (*a3 << 6));
    *a3 |= ((unsigned int)((*ProgressTimer::GetValue((short *)(*(int *)(a1 + 8) + 928), &v7) >> 10) + 1) >> 1) & 0x1F;
  }
    qmemcpy(a2, v9, 0x30u);
    return a2;
}
}

// ==== BACKFILL 0x004CFC10  JumpjetLocomotionClass::SynchronizeFacingDirection  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::SynchronizeFacingDirection(int a1, int a2)
{
return FacingClass::Set_SyncLog((char *)(a1[2] + 928), &a2);
}

// ==== BACKFILL 0x004CFC80  FlyLocomotionClass::ddtor  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int FlyLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1247291206;
  a2[1] = 298948665;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// ==== BACKFILL 0x004CFCC0  FlyLocomotionClass::BeginMove  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int FlyLocomotionClass::BeginMove(int * a1, int * a2)
{
{
    int result;
    result = SwizzleManager::SaveLoad(a1, a2);
    if ( result >= 0 )
  {
    if ( a1 )
    {
    *a1 = (int)(unsigned int)vt_FlyLocomotionClass;
    *((int*)(a1) + 1) = (int)&vt_FlyLocomotionClass;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x004CFD90  JumpjetLocomotionClass::ShortFunc_4CFD90  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::ShortFunc_4CFD90(int a1)
{
return StreamClass::GetDirty(a1);
}

// ==== BACKFILL 0x004CFDA0  JumpjetLocomotionClass::DispatchVirtualCall_1  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::DispatchVirtualCall_1(int a1)
{
{
    return *(char *)((*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 132))(*(int *)(a1 + 8)) + 3367) == 0;
}
}

// ==== BACKFILL 0x004CFE20  JumpjetLocomotionClass::ComputeFloatExpression_1  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
long long JumpjetLocomotionClass::ComputeFloatExpression_1(int a1)
{
{
    int v1;
    v1 = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 132))(*(int *)(a1 + 8));
    return Math::RoundToInt((double)*(int *)(v1 + 1656) * *(double *)(a1 + 68));
}
}

// ==== BACKFILL 0x004CFE50  JumpjetLocomotionClass::StubReturnZero_8  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_8(unsigned char * a1)
{
{
    if ( *((int*)(a1) + 77) )
    return 1;
    if ( *((int*)(a1) + 76) )
    return 0;
    return 3 - ((*(unsigned char (__stdcall **)(char *))(*(int *)(a1) + 16))(a1) != 0);
}
}
