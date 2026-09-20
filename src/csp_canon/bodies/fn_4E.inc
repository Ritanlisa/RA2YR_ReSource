// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x004E0080  TeamClass::HasAnyMemberFlagged  cls=TeamClass  sig=csp  renamed_refs=0 ====
BOOL TeamClass::HasAnyMemberFlagged()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall sub_4E0080(_BYTE *this)
{
  return *(this + 1679) || *(this + 1680) || *(this + 1681); /*0x4e00a0*/
}
}

// ==== BACKFILL 0x004E0130  AbstractClass::COMStub_Return0_34  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int AbstractClass::COMStub_Return0_34()
{
return 0;
}

// ==== BACKFILL 0x004E0140  AbstractClass::getCurrentMission  cls=MissionClass  sig=csp  renamed_refs=0 ====
char AbstractClass::getCurrentMission()
{
return 1;
}

// ==== BACKFILL 0x004E0190  AbstractClass::updateMission  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void AbstractClass::updateMission() {
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

// ==== BACKFILL 0x004E01C0  AbstractClass::queueMission  cls=DynamicVector  sig=csp  renamed_refs=0 ====
unsigned int AbstractClass::queueMission(int a2)
{
{
    if ( (unsigned char)this->vtable3 )
    return (unsigned int)(a2 - this->vtable1) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x004E01F0  FoggedObjectClass_42::ClearBuffer  cls=FoggedObjectClass  sig=csp  renamed_refs=0 ====
void FoggedObjectClass_42::ClearBuffer()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->FoggedObjectClass_42_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->FoggedObjectClass_42_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->FoggedObjectClass_42_field_0x8 = 0;
}
}

// ==== BACKFILL 0x004E0220  FoggedObjectClass_42::PointerToIndex  cls=FoggedObjectClass  sig=csp  renamed_refs=0 ====
unsigned int FoggedObjectClass_42::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->FoggedObjectClass_42_field_0xC )
    return (unsigned int)(a2 - this->FoggedObjectClass_42_field_0x4) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x004E0270  AbstractClass::processMissionQueue  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void* AbstractClass::processMissionQueue(int a2) {
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AbstractClass;
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

// ==== BACKFILL 0x004E02C0  ObjectClass::updateStateFlags  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int ObjectClass::updateStateFlags()
{
{
    int result;
    result = *(void**)this;
    if ( *(void**)this )
    return (*(int (__stdcall **)(int))(*(int *)(result) + 8))(result);
    return result;
}
}

// ==== BACKFILL 0x004E0410  AbstractClassVector::ddtor  cls=VectorClass  sig=csp  renamed_refs=0 ====
void AbstractClassVector::ddtor()
{
    if ( this->Items && this->IsAllocated )
    {
        operator delete(this->Items);
        this->Items = 0;
    }
    this->IsAllocated = 0;
    this->Capacity = 0;
}

// ==== BACKFILL 0x004E04A0  AbstractClass::completeMission  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::completeMission(int a2, void* a3) {
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

// ==== BACKFILL 0x004E0700  FoggedObjectClass_42::SetCapacity  cls=FoggedObjectClass  sig=csp  renamed_refs=0 ====
char FoggedObjectClass_42::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->FoggedObjectClass_42_field_0x4 )
    {
    v5 = this->FoggedObjectClass_42_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->FoggedObjectClass_42_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->FoggedObjectClass_42_field_0x4 = 0;
      }
    }
    this->FoggedObjectClass_42_field_0x4 = v4;
    this->FoggedObjectClass_42_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->FindItem();
  }
    v7 = this->FoggedObjectClass_42_field_0x8;
    if ( v7 < this->FoggedObjectClass_42_field_0x10 )
    this->FoggedObjectClass_42_field_0x10 = v7;
    return 1;
}
}

// ==== BACKFILL 0x004E0E80  AbstractClassVector::Construct  cls=AbstractClassVector  sig=csp  renamed_refs=5 ====
unsigned int * AbstractClassVector::Construct(IUnknown * aP1, IUnknown * aP2)
{
{
    this->AbstractClassVector_field_0x04 = 0;
    this->AbstractClassVector_field_0x08 = aP1;
    this->AbstractClassVector_field_0x0C = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_AbstractClass;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->AbstractClassVector_field_0x04 = aP2;
    return this;
    }
    this->AbstractClassVector_field_0x04 = __2_YAPAXI_Z(4 * (int)aP1);
    this->IsAllocated = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x004E1100  BulletClass::ResetDetonationTimer  cls=BulletClass  sig=csp  renamed_refs=4 ====
namespace gamemd { void* BulletClass::ResetDetonationTimer() {
{
    *(void**)this = g_CurrentFrame;
    this->vtable3 = 0;
    this->__pad_00C = g_CurrentFrame;
    this->abstractFlags = 0;
    this->BulletClass_field_0x18 = 0;
    this->__pad_01C = 0;
    this->needsSave = 0;
    this->objectTypeFlags = 0;
    return this;
}
} }

// ==== BACKFILL 0x004E1130  BulletClass::InitDetonationTimer  cls=BulletClass  sig=csp  renamed_refs=5 ====
namespace gamemd { int BulletClass::InitDetonationTimer(void* a1, void* a2, int a3, int a4) {
{
      int v6;
      double v7;
      __int64 result;
      int v9;
      int v10;
      int v11;

      v6 = a5;
      if ( a5 <= a4 )
        v6 = a4;
      *this = g_CurrentFrame;
      this->vtable2 = v9;
      this->vtable3 = v6;
      this->__pad_00C = g_CurrentFrame;
      this->q010 = v9;
      this->q014 = a4;
      this->BulletClass_field_0x18 = *a3;
      this->__pad_01C = a3[1];
      this->q020 = a3[2];
      v10 = a2[1] - a3[1];
      v11 = a2[2] - a3[2];
      v7 = Math::Sqrt((double)(*a2 - *a3) * (double)(*a2 - *a3) + (double)v11 * (double)v11 + (double)v10 * (double)v10);
      result = Math::RoundToInt(v7);
      this->q024 = result;
      return result;
}
} }

// ==== BACKFILL 0x004E12D0  BuildingAnim::GetType  cls=unknown  sig=csp  renamed_refs=0 ====
int BuildingAnim::GetType()
{
{
    int v0;
    v0 = FindBuildingAnimByName(DataGlobal_822724, 1);
    if ( v0 )
    return *(int *)v0;
    else
    return 0;
}
}

// ==== BACKFILL 0x004E1470  DialogControl::IsHidden  cls=DialogControl  sig=csp  renamed_refs=0 ====
BOOL DialogControl::IsHidden()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall DialogControl_IsHidden(_BYTE *this)
{
  return *(this + 30) == 0; /*0x4e147a*/
}
}

// ==== BACKFILL 0x004E14A0  ObjectClass::InputThunkA  cls=GadgetClass  sig=csp  renamed_refs=0 ====
int ObjectClass::InputThunkA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __thiscall ObjectClass::InputThunkA(_DWORD *this)
{
  return ObjectClass::GetWidth(this);
}
}

// ==== BACKFILL 0x004E14B0  ObjectClass::InputThunkB  cls=GadgetClass  sig=csp  renamed_refs=0 ====
int ObjectClass::InputThunkB()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __thiscall ObjectClass::InputThunkB(_DWORD *this)
{
  return ObjectClass::GetHeight(this);
}
}

// ==== BACKFILL 0x004E14C0  ObjectClass::DestroyChain  cls=GadgetClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int ObjectClass::DestroyChain() {
{
    int v1;
    int result;
    int (__thiscall ***v3)(int, int);
    v1 = (int)this;
    for ( result = this->COMStub_Release();
    re sult;
    result = (*(int (__thiscall **)(int))(*(int *)(v1) + 8))(v1) ) {
    v1 = (*(int (__thiscall **)(int))(*(int *)(v1) + 8))(v1);
  }
    for ( ; v1; result = (**v3)(v3, 1) )
  {
    (*(void (__thiscall **)(int))(*(int *)(v1) + 84))(v1);
    v3 = (int (__thiscall ***)(int, int))v1;
    v1 = (*(int (__thiscall **)(int))(*(int *)(v1) + 4))(v1);
  }
    return result;
}
} } }

// ==== BACKFILL 0x004E1510  CheckListClass::StubReturnVoid  cls=GadgetClass  sig=csp  renamed_refs=0 ====
void CheckListClass::StubReturnVoid()
{
  ;
}

// ==== BACKFILL 0x004E1520  CheckListClass::StubReturn  cls=GadgetClass  sig=csp  renamed_refs=0 ====
void CheckListClass::StubReturn()
{
  ;
}

// ==== BACKFILL 0x004E1530  COMObject::ActivateThunk  cls=GadgetClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int COMObject::ActivateThunk(int a1, int a2, int a3) {
{
    int v4;
    if ( !a2 )
    return 0;
    v4 = *(int *)this;
    this->q01C = 1;
    (*(void (__stdcall **)(int))(v4 + 120))(a2);
    return 1;
}
} }

// ==== BACKFILL 0x004E1570  ObjectClass::BroadcastFlag  cls=GadgetClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void ObjectClass::BroadcastFlag(int a1) {
{
    int v2;
    v2 = (int)this;
    if ( this )
  {
    do
    {
    (*(void (__thiscall **)(int, int))(*(int *)(v2) + 108))(v2, a2);
    v2 = (*(int (__thiscall **)(int))(*(int *)(v2) + 4))(v2);
    }
    while ( v2 );
  }
}
} } }

// ==== BACKFILL 0x004E1920  COMObject::FindInList  cls=GadgetClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int COMObject::FindInList(int a2) {
{
    int v2;
    v2 = (int)this;
    if ( !a2 || !this )
    return 0;
    while ( (*(int (__thiscall **)(int))(*(int *)(v2) + 68))(v2) != a2 )
  {
    v2 = (*(int (__thiscall **)(int))(*(int *)(v2) + 4))(v2);
    if ( !v2 )
    return 0;
  }
    return v2;
}
} }

// ==== BACKFILL 0x004E1970  COMObject::TrackCurrent  cls=GadgetClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int COMObject::TrackCurrent(int a1) {
{
      char result;

      result = a2;
      if ( this->q01D && (a2 & 0x11) != 0 )
      {
        DataGlobal_8B3E88 = (int)this;
      }
      else if ( (_BYTE *)DataGlobal_8B3E88 != this )
      {
        return result;
      }
      if ( (a2 & 0x44) != 0 )
        DataGlobal_8B3E88 = 0;
      return result;
}
} }

// ==== BACKFILL 0x004E19A0  COMObject::ActivateGlobal  cls=GadgetClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int COMObject::ActivateGlobal() {
{
      int v2;

      if ( DataGlobal_8B3E90 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)DataGlobal_8B3E90 + 72))(DataGlobal_8B3E90);
        (*(void (__thiscall **)(int))(*(_DWORD *)DataGlobal_8B3E90 + 84))(DataGlobal_8B3E90);
      }
      v2 = this->q020;
      BYTE1(v2) |= 1u;
      this->q020 = v2;
      DataGlobal_8B3E90 = (int)this;
      return v2;
}
} }

// ==== BACKFILL 0x004E19D0  COMObject::DeactivateGlobal  cls=GadgetClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int COMObject::DeactivateGlobal() {
{
      int v1;

      if ( (_DWORD *)DataGlobal_8B3E90 == this )
      {
        v1 = this->q020;
        BYTE1(v1) &= ~1u;
        this->q020 = v1;
        DataGlobal_8B3E90 = 0;
      }
      return v1;
}
} }

// ==== BACKFILL 0x004E19F0  COMObject::IsPrimaryInstance  cls=GadgetClass  sig=csp  renamed_refs=0 ====
namespace gamemd { bool COMObject::IsPrimaryInstance() {
{
    return this == (void *)DataGlobal_8B3E90;
}
} }

// ==== BACKFILL 0x004E1A00  COMObject::FindNextActive  cls=GadgetClass  sig=csp  renamed_refs=0 ====
int COMObject::FindNextActive(unsigned char * a1)
{
{
    if ( !a1 )
    return 0;
    while ( !*((int*)(a1) + 28) )
  {
    a1 = (char *)(*(int (__thiscall **)(char *))(*(int *)(a1) + 4))(a1);
    if ( !a1 )
    return 0;
  }
    return 1;
}
}

// ==== BACKFILL 0x004E1A40  ObjectClass::SetPositionXY  cls=GadgetClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int ObjectClass::SetPositionXY(int a1, int a2) {
{
    this->abstractFlags = a2;
    this->nextArrayIndex = a3;
    return a2;
}
} } }

// ==== BACKFILL 0x004E1AD0  LinkClass::Destru_vt00  cls=LinkClass  sig=csp  renamed_refs=0 ====
LinkClass * LinkClass::Destru_vt00(char a2)
{
{
    LinkClass::Destruct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (LinkClass *)this;
}
}

// ==== BACKFILL 0x004E1D00  Main::CreateDialog  cls=Main  sig=csp  renamed_refs=0 ====
void Main::CreateDialog()
{
{
    unsigned short v2;
    HWND Dialog;
    LONG i;
    int v5;
    LONG dwNewLong;
    dwNewLong = -1;
    Debug::Log();
    v2 = 3003;
    if ( g_WTFMode != 1 )
    v2 = 245;
    Dialog = (HWND)CreateDialog(v2, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameOptionsDlgProc, 0);
    *(void**)this = Dialog;
    if ( Dialog )
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong);
    Dialog::Show(*(void**)this);
    for ( i = dwNewLong; dwNewLong == -1; i = dwNewLong )
    {
    if ( Dialog::PumpMessages() == 1 )
    dwNewLong = 2;
    if ( !g_WTFMode )
      {
    LOBYTE(v5) = 0;
    ScreenSaver::Process(v5);
      }
    }
    if ( i == 1 )
    {
    GameOptions::GameSpeedChanged(this);
    ScenarioClass::SaveGameOptions((int)g_GameModeOptions);
    }
    Dialog::Destroy(*(void**)this);
  }
    Debug::Log();
}
}

// ==== BACKFILL 0x004E24A0  Time::GetElapsedMS  cls=unknown  sig=csp  renamed_refs=0 ====
unsigned int Time::GetElapsedMS()
{
{
    DWORD Time;
    unsigned int v1;
    Time = timeGetTime();
    if ( Time > DataGlobal_8B3F14 )
    v1 = 3 * (Time - DataGlobal_8B3F14);
    else
    v1 = 3 * (Time - DataGlobal_8B3F14 - 1);
    return v1 / 0x32;
}
}

// ==== BACKFILL 0x004E2A50  sub_4E2A50  cls=GaugeClass  sig=csp  renamed_refs=0 ====
int E4Recv_4E2A50::sub_4E2A50(ControlClass * aP1, int aP2, int aP3, ControlClass * aP4, int aP5)
{
{
    int v7;
    int v8;
    ControlClass::Construct( (int *)this, aP1, (ControlClass *)aP2, (ControlClass *)aP3, aP4, (ControlClass *)aP5, 7, (ControlClass *)1);
    v7 = this->M48;
    *(int *)this = &vt_GaugeClass;
    if ( v7 != 255 )
  {
    this->M48 = 255;
    VectorClass_ptr_ConvertClass::MarkDirty((char *)this);
  }
    v8 = 0;
    if ( this->M48 < 0 )
    v8 = this->M48;
    if ( v8 != this->M52 )
  {
    this->M52 = v8;
    this->Vf72();
  }
    this->M45 = 1;
    this->M46 = (int)aP4 > aP5;
    this->M44 = 1;
    this->M56 = 0;
    this->M60 = 0;
    this->M64 = 0;
    *(int *)this = &vt_TriColorGaugeClass;
    return this;
}
}

// ==== BACKFILL 0x004E2AF0  COMObject::Check  cls=TriColorGaugeClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int COMObject::Check(int a1) {
{
      if ( a2 < 0 || a2 >= this->q030 )
        return 0;
      this->q03C = a2;
      (*((void (__thiscall **)(TriColorGaugeClass *))this->vfptr + 18))(this);
      return 1;
}
} }

// ==== BACKFILL 0x004E2B20  COMObject::SetField  cls=TriColorGaugeClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int COMObject::SetField(int a1) {
{
      if ( a2 < 0 || a2 >= this->q030 )
        return 0;
      this->q040 = a2;
      (*((void (__thiscall **)(TriColorGaugeClass *))this->vfptr + 18))(this);
      return 1;
}
} }

// ==== BACKFILL 0x004E30A0  GaugeClass::Stub  cls=GaugeClass  sig=csp  renamed_refs=0 ====
int GaugeClass::Stub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall GaugeClass::_vt36(_DWORD *this)
{
  return *(this + 13); /*0x4e30a3*/
}
}

// ==== BACKFILL 0x004E30C0  COMObject::Thunk_COMObject_sub_4E30C0  cls=GaugeClass  sig=csp  renamed_refs=0 ====
int COMObject::Thunk_COMObject_sub_4E30C0()
{
return 4;
}

// ==== BACKFILL 0x004E30D0  GaugeClass::QueryInterface  cls=GaugeClass  sig=csp  renamed_refs=0 ====
GaugeClass * GaugeClass::QueryInterface(char a2)
{
{
    GadgetClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (GaugeClass *)this;
}
}

// ==== BACKFILL 0x004E30F0  COMObject::ScalarDtor  cls=TriColorGaugeClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void* COMObject::ScalarDtor(int a2) {
{
    GadgetClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return &this->vfptr;
}
} }

// ==== BACKFILL 0x004E38A0  SideClass::GetName  cls=SideClass  sig=csp  renamed_refs=0 ====
wchar_t * SideClass::GetName()
{
{
    if ( this == (void *)-2 )
    return GetStringCSF(aSttPlayersider, 0, g_Str_File_GDlgSupp_cpp, 237);
    if ( this == (void *)-3 )
    return GetStringCSF(aSttPlayersideo, 0, g_Str_File_GDlgSupp_cpp, 239);
    if ( !this )
    return GetStringCSF(aSttPlayersidea, 0, g_Str_File_GDlgSupp_cpp, 241);
    if ( this == (void *)1 )
    return GetStringCSF(aSttPlayersidek, 0, g_Str_File_GDlgSupp_cpp, 243);
    if ( this == (void *)2 )
    return GetStringCSF(aSttPlayersidef, 0, g_Str_File_GDlgSupp_cpp, 245);
    if ( this == (void *)3 )
    return GetStringCSF(aSttPlayersideg, 0, g_Str_File_GDlgSupp_cpp, 247);
    if ( this == (void *)4 )
    return GetStringCSF(aSttPlayersideb, 0, g_Str_File_GDlgSupp_cpp, 249);
    if ( this == (void *)5 )
    return GetStringCSF(aSttPlayersidel, 0, g_Str_File_GDlgSupp_cpp, 251);
    if ( this == (void *)6 )
    return GetStringCSF(aSttPlayersidei, 0, g_Str_File_GDlgSupp_cpp, 253);
    if ( this == (void *)7 )
    return GetStringCSF(aSttPlayersidec, 0, g_Str_File_GDlgSupp_cpp, 255);
    if ( this == (void *)8 )
    return GetStringCSF(aSttPlayersider_0, 0, g_Str_File_GDlgSupp_cpp, 257);
    if ( this == (void *)9 )
    return GetStringCSF(aSttPlayersidey, 0, g_Str_File_GDlgSupp_cpp, 259);
    return 0;
}
}

// ==== BACKFILL 0x004E3A00  FillComboBoxRandomOnly  cls=unknown  sig=csp  renamed_refs=0 ====
bool FillComboBoxRandomOnly(HWND hDlg, int nIDDlgItem)
{
{
    HWND DlgItem;
    wchar_t *StringCSF;
    LRESULT v4;
    int v5;
    int v6;
    int v7;
    int v8;
    LRESULT v9;
    bool result;
    bool v11;
    int i;
    DlgItem = GetDlgItem(hDlg, nIDDlgItem);
    v11 = !ShowWindow(DlgItem, 0);
    SendMessageA(DlgItem, 0x14Bu, 0, 0);
    SendMessageA(DlgItem, 0x4DEu, 0, 7);
    StringCSF = GetStringCSF(aGuiRandomex, 0, g_Str_File_GDlgSupp_cpp, 276);
    v4 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF);
    SendMessageA(DlgItem, 0x151u, v4, -2);
    v5 = g_SuperWeaponTypeArray;
    v6 = 0;
    for ( i = g_SuperWeaponTypeArray; v6 < v5; ++v6 )
  {
    v7 = *((int *)(g_SuperWeaponTypeCount) + v6);
    if ( v7 )
    {
    if ( *(char *)(v7 + 421) )
      {
    v8 = *(int *)(v7 + 184);
    if ( v8 > -3 && v8 <= 9 && **(short **)(v7 + 96) )
        {
    v9 = SendMessageA(DlgItem, 0x4C2u, 0, *(int *)(v7 + 96));
    SendMessageA(DlgItem, 0x151u, v9, *(int *)(v7 + 184));
    v5 = i;
        }
      }
    }
  }
    SendMessageA(DlgItem, 0x4F1u, 0, 0);
    SendMessageA(DlgItem, 0x14Eu, 0, 0);
    result = v11;
    if ( !v11 )
    return ShowWindow(DlgItem, 5);
    return result;
}
}

// ==== BACKFILL 0x004E3B00  SetupComboBoxObserver  cls=unknown  sig=csp  renamed_refs=0 ====
LRESULT SetupComboBoxObserver(HWND hDlg, int nIDDlgItem)
{
{
    HWND DlgItem;
    bool v3;
    wchar_t *StringCSF;
    LRESULT v5;
    LRESULT result;
    DlgItem = GetDlgItem(hDlg, nIDDlgItem);
    v3 = !ShowWindow(DlgItem, 0);
    SendMessageA(DlgItem, 0x14Bu, 0, 0);
    SendMessageA(DlgItem, 0x4DEu, 0, 7);
    StringCSF = GetStringCSF(aGuiObserver, 0, g_Str_File_GDlgSupp_cpp, 309);
    v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF);
    SendMessageA(DlgItem, 0x151u, v5, -3);
    SendMessageA(DlgItem, 0x14Eu, 0, 0);
    result = SendMessageA(DlgItem, 0x4F1u, 0, 1);
    if ( !v3 )
    return ShowWindow(DlgItem, 5);
    return result;
}
}

// ==== BACKFILL 0x004E4170  GetComboBoxSelected  cls=unknown  sig=csp  renamed_refs=0 ====
LRESULT GetComboBoxSelected(ReferenceCounted * aP0, int nIDDlgItem, WPARAM wParam)
{
{
    ReferenceCounted *v3;
    LRESULT result;
    v3 = (ReferenceCounted *)wParam;
    if ( wParam == -1 )
    v3 = (ReferenceCounted *)SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x147u, 0, 0);
    result = SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x150u, (WPARAM)v3, 0);
    if ( result < -3 || result > 9 )
  {
    if ( *(int *)&HouseClass_Player.__pad_5568[8072] )
    return (*(LRESULT (__thiscall **)(int))(**(int **)&HouseClass_Player.__pad_5568[8072] + 40))(*(int *)&HouseClass_Player.__pad_5568[8072]);
    else
    return -2;
  }
    return result;
}
}

// ==== BACKFILL 0x004E43C0  InitGameDropdownColors  cls=ObjectClass  sig=csp  renamed_refs=0 ====
LPARAM * InitGameDropdownColors()
{
{
    int *v0;
    LPARAM *result;
    int v2;
    DataGlobal_8B4038 = (int)GetStringCSF(aGuiGoldabbrev, 0, g_Str_File_GDlgSupp_cpp, 475);
    DataGlobal_8B4044 = (int)GetStringCSF(aGuiRedabbrev, 0, g_Str_File_GDlgSupp_cpp, 476);
    DataGlobal_8B4050 = (int)GetStringCSF(aGuiBlueabbrev, 0, g_Str_File_GDlgSupp_cpp, 477);
    DataGlobal_8B405C = (int)GetStringCSF(aGuiGreenabbrev, 0, g_Str_File_GDlgSupp_cpp, 478);
    DataGlobal_8B4068 = (int)GetStringCSF(aGuiOrangeabbre, 0, g_Str_File_GDlgSupp_cpp, 479);
    DataGlobal_8B4074 = (int)GetStringCSF(aGuiSkyblueabbr, 0, g_Str_File_GDlgSupp_cpp, 480);
    DataGlobal_8B4080 = (int)GetStringCSF(aGuiPurpleabbre, 0, g_Str_File_GDlgSupp_cpp, 481);
    DataGlobal_8B408C = (int)GetStringCSF(aGuiPinkabbrev, 0, g_Str_File_GDlgSupp_cpp, 482);
    LODWORD(DataGlobal_8B4098) = GetStringCSF(aGuiGrayabbrev, 0, g_Str_File_GDlgSupp_cpp, 483);
    v0 = DataGlobal_8B4040;
    result = DataGlobal_8316A8;
    do
  {
    v2 = *result++;
    *(v0 - 1) = v2;
    *v0 = -1;
    v0 += 3;
  }
    while ( (int)result < (int)DataGlobal_8316CC );
    return result;
}
}

// ==== BACKFILL 0x004E4770  FillListBox  cls=unknown  sig=csp  renamed_refs=0 ====
LRESULT FillListBox(HWND hDlg, int nIDDlgItem)
{
{
    HWND DlgItem;
    bool v3;
    wchar_t *StringCSF;
    LRESULT v5;
    LRESULT result;
    DlgItem = GetDlgItem(hDlg, nIDDlgItem);
    v3 = !ShowWindow(DlgItem, 0);
    SendMessageA(DlgItem, 0x14Bu, 0, 0);
    SendMessageA(DlgItem, 0x4DDu, 0, 1);
    SendMessageA(DlgItem, 0x4DEu, 0, 9);
    StringCSF = GetStringCSF(g_Str_GUI_RandomAsSymbols, 0, g_Str_File_GDlgSupp_cpp, 567);
    v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF);
    SendMessageA(DlgItem, 0x151u, v5, -2);
    SendMessageA(DlgItem, 0x498u, v5, -1);
    SendMessageA(DlgItem, 0x14Eu, 0, 0);
    result = SendMessageA(DlgItem, 0x4F1u, 0, 1);
    if ( !v3 )
    return ShowWindow(DlgItem, 5);
    return result;
}
}

// ==== BACKFILL 0x004E4E20  GetComboBoxSelectedRaw  cls=unknown  sig=csp  renamed_refs=0 ====
LRESULT GetComboBoxSelectedRaw(ReferenceCounted * aP0, int nIDDlgItem, WPARAM wParam)
{
{
    ReferenceCounted *v3;
    v3 = (ReferenceCounted *)wParam;
    if ( wParam == -1 )
    v3 = (ReferenceCounted *)SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x147u, 0, 0);
    return SendDlgItemMessageA((HWND)aP0, nIDDlgItem, 0x150u, (WPARAM)v3, 0);
}
}

// ==== BACKFILL 0x004E4EC0  Dialog::SideIDToIndex  cls=Dialog  sig=csp  renamed_refs=0 ====
int Dialog::SideIDToIndex()
{
{
    int v2;
    if ( this == (void *)1699 )
    return 0;
    if ( this == (void *)1700 )
    return 1;
    if ( this == (void *)1701 )
    return 2;
    if ( this == (void *)1702 )
    return 3;
    if ( this == (void *)1703 )
    return 4;
    if ( this == (void *)1704 )
    return 5;
    if ( this == (void *)1706 )
    return 6;
    v2 = -(this != (void *)1707);
    LOBYTE(v2) = v2 & 0xF8;
    return v2 + 7;
}
}

// ==== BACKFILL 0x004E5260  SetupComboBoxRandomAlliance  cls=unknown  sig=csp  renamed_refs=0 ====
LRESULT SetupComboBoxRandomAlliance(HWND hDlg, int nIDDlgItem)
{
{
    HWND DlgItem;
    bool v3;
    wchar_t *StringCSF;
    LRESULT v5;
    LRESULT result;
    DlgItem = GetDlgItem(hDlg, nIDDlgItem);
    v3 = !ShowWindow(DlgItem, 0);
    SendMessageA(DlgItem, 0x14Bu, 0, 0);
    SendMessageA(DlgItem, 0x4DDu, 0, 1);
    SendMessageA(DlgItem, 0x4DEu, 0, 9);
    StringCSF = GetStringCSF(g_Str_GUI_RandomAsSymbols, 0, g_Str_File_GDlgSupp_cpp, 876);
    v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF);
    SendMessageA(DlgItem, 0x151u, v5, -2);
    SendMessageA(DlgItem, 0x498u, v5, -1);
    SendMessageA(DlgItem, 0x14Eu, 0, 0);
    result = SendMessageA(DlgItem, 0x4F1u, 0, 1);
    if ( !v3 )
    return ShowWindow(DlgItem, 5);
    return result;
}
}

// ==== BACKFILL 0x004E5900  SetComboBoxSelection  cls=unknown  sig=csp  renamed_refs=0 ====
LRESULT SetComboBoxSelection(HWND hDlg, int nIDDlgItem, WPARAM wParam)
{
{
    LRESULT v3;
    v3 = wParam;
    if ( wParam == -1 )
    v3 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0);
    return SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v3, 0);
}
}

// ==== BACKFILL 0x004E59A0  Dialog::OptionIDToIndex  cls=Dialog  sig=csp  renamed_refs=0 ====
int Dialog::OptionIDToIndex()
{
{
    int v2;
    if ( this == (void *)1901 )
    return 0;
    if ( this == (void *)1902 )
    return 1;
    if ( this == (void *)1903 )
    return 2;
    if ( this == (void *)1904 )
    return 3;
    if ( this == (void *)1905 )
    return 4;
    if ( this == (void *)1906 )
    return 5;
    if ( this == (void *)1907 )
    return 6;
    v2 = -(this != (void *)1908);
    LOBYTE(v2) = v2 & 0xF8;
    return v2 + 7;
}
}

// ==== BACKFILL 0x004E5CB0  InitComboBoxNone  cls=unknown  sig=csp  renamed_refs=0 ====
LRESULT InitComboBoxNone(HWND hDlg, int nIDDlgItem)
{
{
    HWND DlgItem;
    bool v3;
    wchar_t *StringCSF;
    LRESULT v5;
    LRESULT result;
    DlgItem = GetDlgItem(hDlg, nIDDlgItem);
    v3 = !ShowWindow(DlgItem, 0);
    SendMessageA(DlgItem, 0x14Bu, 0, 0);
    SendMessageA(DlgItem, 0x4DDu, 0, 1);
    SendMessageA(DlgItem, 0x4DEu, 0, 9);
    StringCSF = GetStringCSF(aGuiNoneassymbo, 0, g_Str_File_GDlgSupp_cpp, 1165);
    v5 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)StringCSF);
    SendMessageA(DlgItem, 0x151u, v5, -2);
    SendMessageA(DlgItem, 0x498u, v5, -1);
    SendMessageA(DlgItem, 0x14Eu, 0, 0);
    result = SendMessageA(DlgItem, 0x4F1u, 0, 1);
    if ( !v3 )
    return ShowWindow(DlgItem, 5);
    return result;
}
}

// ==== BACKFILL 0x004E6030  GetComboBoxSelectedRaw2  cls=unknown  sig=csp  renamed_refs=0 ====
LRESULT GetComboBoxSelectedRaw2(HWND hDlg, int nIDDlgItem, WPARAM wParam)
{
{
    LRESULT v3;
    v3 = wParam;
    if ( wParam == -1 )
    v3 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0);
    return SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v3, 0);
}
}

// ==== BACKFILL 0x004E6070  sub_4E6070  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_4E6070::sub_4E6070()
{
{
    this->M104 = 0;
    this->M108 = 0;
    Debug::Log();
    memset((void *)this, 0xFFu, 0x18u);
    this->M24 = -1;
    *(int *)(this + 4 * (this->M104)++) = 2;
    Debug::Log();
    return this;
}
}

// ==== BACKFILL 0x004E6150  GetVersionString  cls=unknown  sig=csp  renamed_refs=0 ====
char * Version_GetString(unsigned int * a1, unsigned char * a2, char * Destination, size_t Count)
{
{
    char *result;
    *a2 = Event_Process_7C5F3D();
    Event_Process_7C5FFF();
    *a1 = DataGlobal_84E863;
    result = Destination;
    if ( Destination )
    return strncpy(Destination, Source, Count);
    return result;
}
}

// ==== BACKFILL 0x004E6190  DetectProcessorType  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_4E6190()
{
{
    int v0;
    int result;
    int v2;
    char Destination[64];
    Event_Process_7C5F3D();
    Event_Process_7C5FFF();
    v0 = DataGlobal_84E863;
    if ( &v2 != (int *)-4 )
    strncpy(Destination, Source, 0x40u);
    if ( !v0 || !DataGlobal_84E864 )
    return -1;
    if ( !_strcmpi(Destination, aAuthenticamd) )
    return 7;
    if ( !_strcmpi(Destination, aCyrixinstead) )
    return 8;
    if ( v0 == 4 )
    return 0;
    if ( v0 == 5 )
    return 1;
    if ( v0 != 6 )
    return 6;
    switch ( DataGlobal_84E864 )
  {
    case 3: case 5: result = 3;
    break;
    case 6: result = 5;
    break;
    case 7: case 8: case 10: result = 4;
    break;
    default: result = 2;
    break;
  }
    return result;
}
}

// ==== BACKFILL 0x004E8240  HouseClass::vt_placeholder_00  cls=TiberianSunClassFactory  sig=csp  renamed_refs=0 ====
int HouseClass::vt_placeholder_00()
{
return 1;
}

// ==== BACKFILL 0x004E8250  HouseClass::vt_placeholder_01  cls=TiberianSunClassFactory  sig=csp  renamed_refs=0 ====
int HouseClass::vt_placeholder_01()
{
return 1;
}

// ==== BACKFILL 0x004E8260  HouseClass::vt_placeholder_02  cls=TiberianSunClassFactory  sig=csp  renamed_refs=0 ====
int HouseClass::vt_placeholder_02()
{
return 0;
}

// ==== BACKFILL 0x004E8270  HouseClass::initAngerStruct  cls=HouseClass  sig=csp  renamed_refs=0 ====
std::locale::facet * HouseClass::initAngerStruct(char a2)
{
{
    *(int *)this = &vt_VersionClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x004E92F0  HouseClass::vt_03  cls=VectorClass  sig=csp  renamed_refs=0 ====
void HouseClass::vt_03_()
{
{
    if ( this->vtable1 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->vtable1 = 0;
  }
    this->IsAllocated = 0;
    this->vtable2 = 0;
}
}

// ==== BACKFILL 0x004E9320  HouseClass::vt_04  cls=VectorClass  sig=csp  renamed_refs=0 ====
int HouseClass::vt_04_(int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->vtable3 )
    return 0;
    v3 = this->vtable2;
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

// ==== BACKFILL 0x004E9360  HouseClass::vt_05  cls=VectorClass  sig=csp  renamed_refs=0 ====
unsigned int HouseClass::vt_05_(int a2)
{
{
    if ( (unsigned char)this->vtable3 )
    return (unsigned int)(a2 - this->vtable1) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x004EBFA0  VectorClass::GetIndex  cls=VectorClass  sig=csp  renamed_refs=0 ====
unsigned int VectorClass::GetIndex(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 2;
else
    return 0;
}

// ==== BACKFILL 0x004ED950  VectorClass::Cleanup4  cls=VectorClass  sig=csp  renamed_refs=0 ====
void VectorClass::Cleanup4()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// ==== BACKFILL 0x004EF4E0  HouseClass::vt_00  cls=VectorClass  sig=csp  renamed_refs=0 ====
VectorClass * HouseClass::vt_00_(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TagClass;
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
