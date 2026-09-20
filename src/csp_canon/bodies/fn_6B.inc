// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x006B0A90  sub_6B0A90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6B0A90::sub_6B0A90(int a2)
{
{
    int *v2;
    int v3;
    int *result;
    int v5;
    v2 = *(int **)(this->M60 + 4 * a2);
    if ( *v2 )
    *(int *)(*v2 + 732) = 0;
    *v2 = 0;
    v2[1] = 6;
    v3 = this->M48;
    result = v2 + 2;
    *result = g_CurrentFrame;
    result[1] = v5;
    result[2] = v3;
    return result;
}
}

// ==== BACKFILL 0x006B0C80  FactoryClass::ResetProductionTimers  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* FactoryClass::ResetProductionTimers() {
{
      wchar_t *result;
      int i;
      int v4;

      this->q05C = 0;
      result = g_CurrentFrame;
      this->balance = g_CurrentFrame;
      for ( i = this->q048 - 1; i >= 0; --i )
      {
        result = *(wchar_t **)(this->object + 4 * i);
        v4 = *(_DWORD *)result;
        if ( *((_DWORD *)result + 1) != 6 )
        {
          if ( v4 )
            result = (wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 976))(v4);
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x006B1130  SlaveManagerClass::ddtor  cls=SlaveManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SlaveManagerClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 861581284;
  a2[1] = 299183526;
  a2[2] = 268444350;
  a2[3] = 1822515787;
  return 0;
}

// ==== BACKFILL 0x006B1300  SlaveManagerClass::SaveManager  cls=SlaveManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SlaveManagerClass::SaveManager(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    int v4;
    int i;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
  {
    v4 = *a1;
    aP2 = *(int *)&aP0->UINameLabel[11];
    result = (*(int (__stdcall **)(int *, int *, int, int))(v4 + 16))(a1, &aP2, 4, 0);
    if ( result >= 0 )
    {
    for ( i = 0; i < aP2; ++i )
      {
    result = (*(int (__stdcall **)(int *, int, int, int))(*a1 + 16))( a1, *(int *)(*(int *)&aP0->zero_3C + 4 * i), 20, 0);
    if ( result < 0 )
    break;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x006B1370  SlaveManagerClass::StubReturn100  cls=SlaveManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SlaveManagerClass::StubReturn100()
{
return 100;
}

// ==== BACKFILL 0x006B1380  SlaveManagerClass::StubReturn72  cls=SlaveManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SlaveManagerClass::StubReturn72()
{
return 72;
}

// ==== BACKFILL 0x006B1390  SlaveManagerClass::ProcessOrders  cls=SlaveManagerClass  sig=csp  renamed_refs=0  residual=- ====
SlaveManagerClass * SlaveManagerClass::ProcessOrders(char a2)
{
{
    SlaveManagerClass::Constructor_SlaveManagerClass((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (SlaveManagerClass *)this;
}
}

// ==== BACKFILL 0x006B14B0  AbstractClass::getAIPriority  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::getAIPriority(int a2, void* a3) {
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->vtable3 = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->vtable3 = 1;
    if ( v4 )
    {
    if ( this->vtable1 )
      {
    v6 = this->vtable2;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->vtable1 + 4 * i - 4) )
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
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->vt_entry_68();
    return 1;
  }
}
} } }

// ==== BACKFILL 0x006B1560  AbstractClass::setAIPriority  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void AbstractClass::setAIPriority() {
{
    if ( this->vtable1 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->vtable1 = 0;
  }
    this->IsAllocated = 0;
    this->vtable2 = 0;
}
} } }

// ==== BACKFILL 0x006B1590  AbstractClass::evaluateAIOption  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::evaluateAIOption(void* a1) {
{
      int result;
      int v3;
      _DWORD *i;

      if ( !this->vtable3 )
        return 0;
      v3 = this->vtable2;
      result = 0;
      if ( v3 <= 0 )
        return -1;
      for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i )
      {
        if ( ++result >= v3 )
          return -1;
      }
      return result;
}
} } }

// ==== BACKFILL 0x006B15D0  AbstractClass::selectAIAction  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::selectAIAction(int a1) {
{
      if ( this->vtable3 )
        return (unsigned int)(a2 - this->vtable1) >> 2;
      else
        return 0;
}
} } }

// ==== BACKFILL 0x006B1930  AbstractClass::checkAIResources  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* AbstractClass::checkAIResources(int a2) {
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_SlaveManagerClass_SlaveControl;
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
} } }

// ==== BACKFILL 0x006B1E50  SliderClass::Draw  cls=SliderClass  sig=csp  renamed_refs=5  residual=- ====
namespace gamemd { int SliderClass::Draw(int a1) {
{
      SliderClass *v3;
      int v4;
      int v5;
      double v6;
      int v7;
      int v8;

      v3 = aP1;
      v4 = this->q048;
      if ( (int)aP1 >= this->SliderClass_field_0x30 - v4 )
        v3 = (SliderClass *)(this->SliderClass_field_0x30 - v4);
      if ( !GaugeClass::GetValue((int *)this, v3) )
        return 0;
      if ( this->q02E )
        v5 = this->SliderClass_field_0x14;
      else
        v5 = this->SliderClass_field_0x18;
      v6 = (double)this->SliderClass_field_0x30;
      v7 = Math::RoundToInt(v6);
      if ( v7 <= 4 )
        v7 = 4;
      this->q04C = v7;
      v8 = Math::RoundToInt(v6);
      if ( v8 >= v5 - v7 )
        v8 = v5 - v7;
      this->q050 = v8;
      return 1;
}
} }

// ==== BACKFILL 0x006B1EE0  sub_6B1EE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
long long E4Recv_6B1EE0::sub_6B1EE0()
{
{
    int v2;
    double v3;
    int v4;
    __int64 result;
    if ( (unsigned char)this->M46 )
    v2 = this->M20;
    else
    v2 = this->M24;
    v3 = (double)this->M48;
    v4 = Math::RoundToInt(v3);
    if ( v4 <= 4 )
    v4 = 4;
    this->M76 = v4;
    result = Math::RoundToInt(v3);
    if ( (int)result >= v2 - v4 )
    this->M80 = v2 - v4;
    else
    this->M80 = result;
    return result;
}
}

// ==== BACKFILL 0x006B1F50  SliderClass::SetValue  cls=SliderClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { int SliderClass::SetValue(int a1, void* a2, int a3) {
{
      int v5;
      int v6;
      int v7;
      int v8;
      _DWORD *v9;

      if ( (a2 & 1) == 0 )
        return CellClass::DrawDispatch((int *)this, a2, a3, 0);
      if ( this->q02E )
      {
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 44))(g_WWMouseClass_Instance);
        v6 = this->SliderClass_field_0x0C;
      }
      else
      {
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 48))(g_WWMouseClass_Instance);
        v6 = this->SliderClass_field_0x10;
      }
      v7 = this->q050;
      v8 = v6 + 1;
      if ( v5 >= v7 + v8 )
      {
        if ( v5 <= v8 + v7 + this->q04C )
        {
          v9 = a3;
          CellClass::DrawDispatch((int *)this, a2, a3, 0);
        }
        else
        {
          this->vt43(0);
          v9 = a3;
          CellClass::DrawDispatch((int *)this, 0, a3, 0);
        }
      }
      else
      {
        this->vt43(1);
        v9 = a3;
        CellClass::DrawDispatch((int *)this, 0, a3, 0);
      }
      *v9 = 0;
      return 1;
}
} }

// ==== BACKFILL 0x006B2000  SliderClass::OnTrack  cls=SliderClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int SliderClass::OnTrack(int a1) {
{
      int v2;

      v2 = *this;
      if ( a2 )
        return (*(int (__stdcall **)(int))(v2 + 140))(this->q034 - this->q048);
      else
        return (*(int (__stdcall **)(int))(v2 + 140))(this->q034 + this->q048);
}
} }

// ==== BACKFILL 0x006B2040  SliderClass::OnRelease  cls=SliderClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int SliderClass::OnRelease(int a1) {
{
      int v2;
      int v3;

      v2 = this->q034;
      v3 = *this;
      if ( a2 )
        return (*(int (__stdcall **)(int))(v3 + 140))(v2 - 1);
      else
        return (*(int (__stdcall **)(int))(v3 + 140))(v2 + 1);
}
} }

// ==== BACKFILL 0x006B2070  SliderClass::HitTest  cls=SliderClass  sig=csp  renamed_refs=6  residual=- ====
namespace gamemd { int SliderClass::HitTest() {
{
      int v1;
      int v2;
      int v3;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;

      if ( this->q02E )
      {
        v1 = this->SliderClass_field_0x10;
        v8 = this->SliderClass_field_0x0C + this->q050;
        v2 = this->q04C;
        v3 = this->SliderClass_field_0x18;
        v9 = v1;
        v11 = v3;
        v10 = v2;
      }
      else
      {
        v5 = this->q050;
        v8 = this->SliderClass_field_0x0C;
        v6 = this->SliderClass_field_0x14;
        v9 = this->SliderClass_field_0x10 + v5;
        v7 = this->q04C;
        v10 = v6;
        v11 = v7;
      }
      return DrawBuildingTilesSHP(&v8, 1, 1);
}
} }

// ==== BACKFILL 0x006B20F0  SliderClass::GetRange  cls=SliderClass  sig=csp  renamed_refs=4  residual=- ====
namespace gamemd { int SliderClass::GetRange(int a1) {
{
      int v3;
      int v4;
      int v5;
      int v7[4];

      if ( !this->q044 || !Control::DispatchClick((_DWORD *)this, a2) )
        return BuildingPlacement::HandleClick(this, a2);
      v3 = this->SliderClass_field_0x10;
      v4 = this->SliderClass_field_0x14;
      v7[0] = this->SliderClass_field_0x0C;
      v5 = this->SliderClass_field_0x18;
      v7[1] = v3;
      v7[2] = v4;
      v7[3] = v5;
      DrawBuildingTilesSHP(v7, 0, 1);
      this->vt39();
      return 1;
}
} }

// ==== BACKFILL 0x006B4C70  nullsub_232  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_232(int a1)
{
  ;
}

// ==== BACKFILL 0x006B4EA0  UnitClass::SaveLoadData  cls=SmudgeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::SaveLoadData(ObjectClass* aP1, int aP1a)
{
{
    ObjectClass *Register;
    Register = (ObjectClass *)BuildingClass::SaveLoad_Register((AnimClass *)this);
    if ( (int)Register >= 0 )
  {
    if ( aP1 )
    {
    ObjectClass::Init(aP1, (AbstractClass *)&aP1a);
    *(int *)aP1->__pad_0 = (unsigned int)vt_SmudgeClass;
    *(int *)&aP1->__pad_0[4] = (unsigned int)vt_SmudgeClass;
    *(int *)&aP1->__pad_0[8] = (unsigned int)vt_SmudgeClass;
    *(int *)&aP1->__pad_0[12] = (unsigned int)vt_SmudgeClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP1[1]);
  }
    return (int)Register->__pad_0;
}
}

// ==== BACKFILL 0x006B4F00  UnitClass::SaveState  cls=SmudgeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::SaveState(void* aP0, void* a1, void* aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}

// ==== BACKFILL 0x006B4F20  UnitClass::CheckStatus  cls=SmudgeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::CheckStatus()
{
    return (int)(Type);
}

// ==== BACKFILL 0x006B4F30  UnitClass::StubReturn176  cls=SmudgeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::StubReturn176()
// 0x6b4f30
{
return 176;

/* ASM:
mov     eax, 0B0h
retn
*/
}

// ==== BACKFILL 0x006B4F40  UnitClass::StubReturn29  cls=SmudgeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::StubReturn29()
// 0x6b4f40
{
return 29;

/* ASM:
mov     eax, 1Dh
retn
*/
}

// ==== BACKFILL 0x006B4F50  UnitClass::GetClassID  cls=SmudgeClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT __stdcall UnitClass::GetClassID(CLSID* pClassID) {
    if (pClassID == nullptr) {
        return E_POINTER;
    }
    pClassID->Data1 = 0x0E272DC5;
    pClassID->Data2 = 0x9C0F;
    pClassID->Data3 = 0x11D1;
    pClassID->Data4[0] = 0xB7;
    pClassID->Data4[1] = 0x09;
    pClassID->Data4[2] = 0x00;
    pClassID->Data4[3] = 0xA0;
    pClassID->Data4[4] = 0x24;
    pClassID->Data4[5] = 0xDD;
    pClassID->Data4[6] = 0xAF;
    pClassID->Data4[7] = 0xD1;
    return S_OK;
}

// ==== BACKFILL 0x006B4F90  nullsub_233  cls=SmudgeClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_233(int a1, int a2)
{
  ;
}

// ==== BACKFILL 0x006B5550  SmudgeTypeClass::GetType  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
bool SmudgeTypeClass::GetType(short * a2, int a3)
{
{
    void **v4;
    int v5;
    bool result;
    int v7[3];
    v4 = (void **)__2_YAPAXI_Z(0xB0u);
    result = 0;
    if ( v4 )
  {
    v7[2] = 0;
    v5 = *((int*)(a2) + 1);
    v7[0] = (*a2 << 8) + 128;
    v7[1] = (v5 << 8) + 128;
    if ( UnitClass::Create(v4, this, (AbstractClass *)v7, -1) )
    return 1;
  }
    return result;
}
}

// ==== BACKFILL 0x006B55C0  SmudgeTypeClass::GetFlag  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
SmudgeClass * SmudgeTypeClass::GetFlag(int a2)
{
{
    void **v3;
    v3 = (void **)__2_YAPAXI_Z(0xB0u);
    if ( v3 )
    return UnitClass::Create(v3, this, (AbstractClass *)&DataGlobal_B05488.__pad_579C[2948], -1);
    else
    return 0;
}
}

// ==== BACKFILL 0x006B57F0  SmudgeTypeClass::PowerDrainUpdate  cls=SmudgeTypeClass  sig=csp  renamed_refs=5  residual=- ====
int SmudgeTypeClass::PowerDrainUpdate(int * a2)
{
{
    int v3;
    int v4;
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(this->Width);
    LOBYTE(v3) = this->q2A0;
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = this->q2A1;
    Power::FlagProcess(a2, v4);
    Power::TimerProcess(this->Height);
    return Power::TimerProcess(this->Crater);
}
}

// ==== BACKFILL 0x006B5850  SmudgeTypeClass::LoadTypeData  cls=SmudgeTypeClass  sig=csp  renamed_refs=6  residual=- ====
int SmudgeTypeClass::LoadTypeData(ObjectTypeClass * aP0, int aP1)
{
{
    int result;
    result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1);
    *(int *)aP0->vtable1 = (unsigned int)vt_SmudgeTypeClass;
    *(int *)&aP0->vtable1[4] = (unsigned int)vt_SmudgeTypeClass;
    *(int *)&aP0->vtable1[8] = (unsigned int)vt_SmudgeTypeClass;
    *(int *)&aP0->vtable1[12] = &vt_SmudgeTypeClass;
    }
    VoxelAnimType::LoadAnim(aP0->vtable1);
    ObjectTypeClass::Load2DArt(aP0->vtable1);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x006B58B0  SmudgeTypeClass::SaveToINI  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SmudgeTypeClass::SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x006B58D0  SmudgeTypeClass::GetClassIdentifier  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SmudgeTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1525862008;
  a2[1] = 298976820;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x006B6130  SmudgeTypeClass::GetTypeIdentifier  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SmudgeTypeClass::GetTypeIdentifier()
{
return 30;
}

// ==== BACKFILL 0x006B6140  SmudgeTypeClass::GetObjectSize  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SmudgeTypeClass::GetObjectSize()
{
return 676;
}

// ==== BACKFILL 0x006B6150  SmudgeTypeClass::GetAuxField  cls=SmudgeTypeClass  sig=csp  renamed_refs=1  residual=- ====
int SmudgeTypeClass::GetAuxField()
{
{
    return this->Height;
}
}

// ==== BACKFILL 0x006B6160  SmudgeTypeClass::ddtor  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
SmudgeTypeClass * SmudgeTypeClass::ddtor(AbstractClass *a2, char a3)
{
    void *v3 = this->Image;
    if ( v3 )
    {
        OperatorDelete(v3);
        this->Image = 0;
    }
    AbstractClass::AnnounceExpiredPointer(this, 1);
    SmudgeTypeClass* v7 = this;
    int v5 = SmudgeTypeRegistryX.FindItemIndex(&v7);
    if ( v5 != -1 && v5 < SmudgeTypeRegistryX_Count )
    {
        --SmudgeTypeRegistryX_Count;
        for ( ; v5 < SmudgeTypeRegistryX_Count ; *(SmudgeTypeRegistryX_Items + v5 - 1) = *(SmudgeTypeRegistryX_Items + v5) )
        {
            ++v5;
        }
    }
    ObjectTypeClass::Destruct(this);
    if ( a3 & 1 )
        OperatorDelete(this);
    return this;
}

// ==== BACKFILL 0x006B7ED0  SpawnManagerClass::ddtor  cls=SpawnManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SpawnManagerClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 108652929;
  a2[1] = 299085213;
  a2[2] = 268441278;
  a2[3] = 1822515787;
  return 0;
}

// ==== BACKFILL 0x006B80B0  SpawnManagerClass::SaveState  cls=SpawnManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SpawnManagerClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    int v4;
    int i;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
  {
    v4 = *a1;
    aP2 = *(int *)&aP0->UINameLabel[11];
    result = (*(int (__stdcall **)(int *, int *, int, int))(v4 + 16))(a1, &aP2, 4, 0);
    if ( result >= 0 )
    {
    for ( i = 0; i < aP2; ++i )
      {
    result = (*(int (__stdcall **)(int *, int, int, int))(*a1 + 16))( a1, *(int *)(*(int *)&aP0->zero_3C + 4 * i), 24, 0);
    if ( result < 0 )
    break;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x006B8120  SpawnManagerClass::StubReturn116  cls=SpawnManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SpawnManagerClass::StubReturn116()
{
return 116;
}

// ==== BACKFILL 0x006B8130  SpawnManagerClass::StubReturn65  cls=SpawnManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SpawnManagerClass::StubReturn65()
{
return 65;
}

// ==== BACKFILL 0x006B8140  SpawnManagerClass::ProcessEvent  cls=SpawnManagerClass  sig=csp  renamed_refs=0  residual=- ====
SpawnManagerClass * SpawnManagerClass::ProcessEvent(char a2)
{
{
    SpawnManagerClass::Constructor_SpawnManagerClass((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (SpawnManagerClass *)this;
}
}

// ==== BACKFILL 0x006B8260  AbstractClass::allocatePathMemory  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::allocatePathMemory(int a2, void* a3) {
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->vtable3 = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->vtable3 = 1;
    if ( v4 )
    {
    if ( this->vtable1 )
      {
    v6 = this->vtable2;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->vtable1 + 4 * i - 4) )
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
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->vt_entry_68();
    return 1;
  }
}
} } }

// ==== BACKFILL 0x006B8310  AbstractClass::freePathMemory  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void AbstractClass::freePathMemory() {
{
    if ( this->vtable1 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->vtable1 = 0;
  }
    this->IsAllocated = 0;
    this->vtable2 = 0;
}
} } }

// ==== BACKFILL 0x006B8340  AbstractClass::initPathState  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::initPathState(void* a1) {
{
      int result;
      int v3;
      _DWORD *i;

      if ( !this->vtable3 )
        return 0;
      v3 = this->vtable2;
      result = 0;
      if ( v3 <= 0 )
        return -1;
      for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i )
      {
        if ( ++result >= v3 )
          return -1;
      }
      return result;
}
} } }

// ==== BACKFILL 0x006B8380  AbstractClass::resetPathMemory  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::resetPathMemory(int a1) {
{
      if ( this->vtable3 )
        return (unsigned int)(a2 - this->vtable1) >> 2;
      else
        return 0;
}
} } }

// ==== BACKFILL 0x006B83A0  SpawnManagerClass::Constructor_6B83A0  cls=SpawnManagerClass  sig=csp  renamed_refs=5  residual=IsAllocated ====
unsigned int * SpawnManagerClass::Constructor_6B83A0(DynamicVector * aP1, DynamicVector * aP2)
{
{
    this->vtable2 = 0;
    this->vtable3 = aP1;
    this->vtable4 = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_SpawnManagerClass_SpawnControl;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->vtable2 = aP2;
    }
    else
    {
    this->vtable2 = __2_YAPAXI_Z(4 * (int)aP1);
    this->IsAllocated = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_SpawnManagerClass_SpawnControl;
    this->abstractFlags = 10;
    this->uniqueId = 0;
    return this;
}
}

// ==== BACKFILL 0x006B8740  AbstractClass::validatePathMemory  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* AbstractClass::validatePathMemory(int a2) {
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_SpawnManagerClass_SpawnControl;
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
} } }

// ==== BACKFILL 0x006B8AE0  ScenarioClass::ResetIntroFlags  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int ScenarioClass::ResetIntroFlags()
{
{
    unsigned int result;
    result = *(void**)this & 0xFFF80000 | 0x8088;
    *(void**)this = result;
    return result;
}
}

// ==== BACKFILL 0x006B8AF0  ApplyGameOptions_Helper  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool E4Recv_6B8AF0::sub_6B8AF0(unsigned int * a2)
{
{
    int v2;
    v2 = *(void**)this ^ *a2;
    return !(char)v2 && (v2 & 0x7FF00) == 0;
}
}

// ==== BACKFILL 0x006B8B10  nullsub_37  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_37()
{
  ;
}

// ==== BACKFILL 0x006B8B20  nullsub_38  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_38()
{
  ;
}

// ==== BACKFILL 0x006B8B30  ScenarioClass::RevealMapForHouse  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::RevealMapForHouse(void* a1) {
{
    INIClass *v3;
    INIClass *v4;
    INIClass *v5;
    INIClass *v6;
    INIClass *v7;
    INIClass *v8;
    INIClass *v9;
    INIClass *v10;
    INIClass *v11;
    INIClass *v12;
    INIClass *v13;
    INIClass *v14;
    INIClass *v15;
    v3 = (INIClass *)(*(void**)this >> 6);
    LOBYTE(v3) = (*(void**)this & 0x40) != 0;
    INIClass::SetBool(a1->__pad_0, *(INIClass **)&DataGlobal_830620.__pad_579C[41996], &DataGlobal_830620.__pad_579C[29252], v3);
    v4 = (INIClass *)(*(void**)this >> 7);
    LOBYTE(v4) = (*(void**)this & 0x80) != 0;
    INIClass::SetBool(a1->__pad_0, *(INIClass **)&DataGlobal_830620.__pad_579C[41996], &DataGlobal_830620.__pad_579C[42144], v4);
    v5 = (INIClass *)(*(void**)this >> 14);
    LOBYTE(v5) = (*(void**)this & 0x4000) != 0;
    INIClass::SetBool(a1->__pad_0, *(INIClass **)&DataGlobal_830620.__pad_579C[41996], &DataGlobal_830620.__pad_579C[20336], v5);
    v6 = (INIClass *)(*(void**)this >> 15);
    LOBYTE(v6) = (*(void**)this & 0x8000) != 0;
    INIClass::SetBool(a1->__pad_0, *(INIClass **)&DataGlobal_830620.__pad_579C[41996], &DataGlobal_830620.__pad_579C[42124], v6);
    v7 = (INIClass *)(*(void**)this >> 8);
    LOBYTE(v7) = (unsigned char)v7 & 1;
    INIClass::SetBool(a1->__pad_0, *(INIClass **)&DataGlobal_830620.__pad_579C[41996], &DataGlobal_830620.__pad_579C[42112], v7);
    v8 = (INIClass *)(*(void**)this >> 9);
    LOBYTE(v8) = (*(void**)this & 0x200) != 0;
    INIClass::SetBool(a1->__pad_0, *(INIClass **)&DataGlobal_830620.__pad_579C[41996], &DataGlobal_830620.__pad_579C[42096], v8);
    v9 = (INIClass *)(*(void**)this >> 10);
    LOBYTE(v9) = (*(void**)this & 0x400) != 0;
    INIClass::SetBool(a1->__pad_0, *(INIClass **)&DataGlobal_830620.__pad_579C[41996], &DataGlobal_830620.__pad_579C[42080], v9);
    v10 = (INIClass *)(*(void**)this >> 11);
    LOBYTE(v10) = (*(void**)this & 0x800) != 0;
    INIClass::SetBool(a1->__pad_0, *(INIClass **)&DataGlobal_830620.__pad_579C[41996], &DataGlobal_830620.__pad_579C[42064], v10);
    v11 = (INIClass *)(*(void**)this >> 12);
    LOBYTE(v11) = (*(void**)this & 0x1000) != 0;
    INIClass::SetBool(a1->__pad_0, *(INIClass **)&DataGlobal_830620.__pad_579C[41996], &DataGlobal_830620.__pad_579C[29116], v11);
    v12 = (INIClass *)(*(void**)this >> 5);
    LOBYTE(v12) = (*(void**)this & 0x20) != 0;
    INIClass::SetBool(a1->__pad_0, *(INIClass **)&DataGlobal_830620.__pad_579C[41996], &DataGlobal_830620.__pad_579C[42056], v12);
    v13 = (INIClass *)(*(void**)this >> 17);
    LOBYTE(v13) = (*(void**)this & 0x20000) != 0;
    INIClass::SetBool(a1->__pad_0, *(INIClass **)&DataGlobal_830620.__pad_579C[41996], &DataGlobal_830620.__pad_579C[42044], v13);
    v14 = (INIClass *)HIWORD(*(void**)this);
    LOBYTE(v14) = (unsigned char)v14 & 1;
    INIClass::SetBool(a1->__pad_0, *(INIClass **)&DataGlobal_830620.__pad_579C[41996], &DataGlobal_830620.__pad_579C[42032], v14);
    v15 = (INIClass *)(*(void**)this >> 18);
    LOBYTE(v15) = (*(void**)this & 0x40000) != 0;
    return INIClass::SetBool( a1->__pad_0, *(INIClass **)&DataGlobal_830620.__pad_579C[41996], &DataGlobal_830620.__pad_579C[42020], v15);
}
} }

// ==== BACKFILL 0x006B93E0  sub_6B93E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6B93E0::sub_6B93E0()
{
{
    unsigned char *v1;
    int v2;
    int v3;
    unsigned char v4;
    int v5;
    int result;
    v1 = this + 2;
    v2 = 256;
    do
  {
    v3 = *v1;
    v4 = *(v1 - 2);
    LOBYTE(v5) = -1;
    if ( 15 * *(v1 - 1) / 10 <= 255 )
    v5 = 15 * *(v1 - 1) / 10;
    *(v1 - 2) = v5;
    *(v1 - 1) = v4;
    v1 += 3;
    result = v3 / 4;
    *(v1 - 3) = v3 / 4;
    --v2;
  }
    while ( v2 );
    return result;
}
}

// ==== BACKFILL 0x006B9450  sub_6B9450  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6B9450::sub_6B9450()
{
{
    int v2;
    unsigned int v3;
    int v4;
    void *v5;
    unsigned int v6;
    this->M32 = -1717986918;
    this->M40 = -1717986918;
    this->M36 = 1070176665;
    this->M44 = 1072273817;
    this->M48 = 128;
    this->M16 = 128;
    this->M8 = 128;
    this->M12 = 0;
    v2 = 0;
    v3 = 128;
    do
  {
    ++v2;
    v3 >>= 1;
  }
    while ( v3 );
    this->M12 = v2;
    this->M16 = 0;
    v4 = 1 << (v2 - 1);
    this->M12 = v2 - 1;
    this->M4 = 0;
    this->M20 = 0;
    this->M8 = v4;
    v5 = __2_YAPAXI_Z(4 * v4);
    v6 = 4 *(void**)this->M8;
    *(void**)this = v5;
    memset(v5, 0, v6);
    this->M24 = sub_6B94E0;
    return this;
}
}

// ==== BACKFILL 0x006B94E0  sub_6B94E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int E4Recv_6B94E0::sub_6B94E0()
{
{
    unsigned int v2;
    unsigned int i;
    char *v4;
    v2 = String::Length(this);
    for ( i = 0; i < String::Length(this); ++i )
  {
    v4 = String::GetOrEmpty((char **)this);
    v2 = ((i + v4[i] + v2) >> 24) ^ ((i + v4[i] + v2) << 8);
  }
    return v2;
}
}

// ==== BACKFILL 0x006BA120  UI_Init_6BA120  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_6BA120(int a1, int a2, char * Source)
{
{
    return LoadPaletteFromFile(a1, a2, Source, 1, 1);
}
}

// ==== BACKFILL 0x006BA680  sub_6BA680  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_6BA680(int a1, int a2, int a3)
{
return 0;
}

// ==== BACKFILL 0x006BB2E0  WriteRegistryKeyCOM  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char WriteRegistryKeyCOM(LPCSTR lpString2, LPCSTR a2, LPCSTR lpString)
{
{
    char v4;
    int v5;
    HKEY phkResult;
    CHAR String1[260];
    v4 = 0;
    lstrcpyA(String1, lpString2);
    if ( a2 )
  {
    lstrcatA(String1, asc_815E74);
    lstrcatA(String1, a2);
  }
    if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, String1, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) )
  {
    if ( !lpString || (v5 = lstrlenA(lpString), !RegSetValueExA(phkResult, 0, 0, 1u, (const BYTE *)lpString, v5 + 1)) )
    v4 = 1;
    RegCloseKey(phkResult);
  }
    return v4;
}
}

// ==== BACKFILL 0x006BEC50  ExitProgram  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void  __noreturn E4Recv_6BEC50::ExitProgram()
{
{
    exit((int)this);
}
}

// ==== BACKFILL 0x006BF8D0  CreateTClassFactory_CellClass  cls=-  sig=csp  free-function ====
int E4Recv_6BF8D0::CreateTClassFactory_CellClass()
{
{
    int v2;
    const void *v3;
    int *v4;
    if ( !v4 )
    return -2147467261;
    *v4 = 0;
    if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &DataGlobal_7F7CA0, 0x10u) )
    *v4 = v2;
    if ( !*v4 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(int *)(v2) + 4))(v2);
    return 0;
}
}

// ==== BACKFILL 0x006BFA50  CreateTClassFactory_EMPulseClass  cls=-  sig=csp  free-function ====
int E4Recv_6BFA50::CreateTClassFactory_EMPulseClass()
{
{
    int v2;
    const void *v3;
    int *v4;
    if ( !v4 )
    return -2147467261;
    *v4 = 0;
    if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &DataGlobal_7F7CA0, 0x10u) )
    *v4 = v2;
    if ( !*v4 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(int *)(v2) + 4))(v2);
    return 0;
}
}

// ==== BACKFILL 0x006BFBD0  CreateTClassFactory_LightSourceClass  cls=-  sig=csp  free-function ====
int E4Recv_6BFBD0::CreateTClassFactory_LightSourceClass()
{
{
    int v2;
    const void *v3;
    int *v4;
    if ( !v4 )
    return -2147467261;
    *v4 = 0;
    if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &DataGlobal_7F7CA0, 0x10u) )
    *v4 = v2;
    if ( !*v4 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(int *)(v2) + 4))(v2);
    return 0;
}
}

// ==== BACKFILL 0x006BFD50  CreateTClassFactory_SideClass  cls=-  sig=csp  free-function ====
int E4Recv_6BFD50::CreateTClassFactory_SideClass()
{
{
    int v2;
    const void *v3;
    int *v4;
    if ( !v4 )
    return -2147467261;
    *v4 = 0;
    if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &DataGlobal_7F7CA0, 0x10u) )
    *v4 = v2;
    if ( !*v4 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(int *)(v2) + 4))(v2);
    return 0;
}
}

// ==== BACKFILL 0x006BFED0  CreateTClassFactory_TiberiumClass  cls=-  sig=csp  free-function ====
int E4Recv_6BFED0::CreateTClassFactory_TiberiumClass()
{
{
    int v2;
    const void *v3;
    int *v4;
    if ( !v4 )
    return -2147467261;
    *v4 = 0;
    if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &DataGlobal_7F7CA0, 0x10u) )
    *v4 = v2;
    if ( !*v4 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(int *)(v2) + 4))(v2);
    return 0;
}
}
