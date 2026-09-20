// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00690360  Screen::CleanupTransitionObjects  cls=Screen  sig=csp  renamed_refs=0 ====
int Screen::CleanupTransitionObjects()
{
{
    int result;
    int i;
    int v4;
    void (__thiscall ***v5)(int, int);
    char *v6;
    char *v7;
    int v8;
    DataGlobal_B05584 = 0;
    if ( g_LoadScreenFlag )
  {
    g_LoadScreenFlag = 0;
    (*(void (__thiscall **)(IUnknown *, int))(g_DSurface_Hidden->field_0 + 24))(g_DSurface_Hidden, 0);
    (*(void (__thiscall **)(IUnknown *, int, int, int))(g_DSurface_Hidden->field_0 + 4))( g_DSurface_Hidden, DSurface_Alternate, 0, 1);
  }
    result = (int)this->field_2C;
    for ( i = 0; i < result; ++i )
  {
    v4 = *(int *)(*(int *)&this->__pad_18[8] + 4 * i);
    if ( (*(unsigned char (__thiscall **)(int, void *))(*(int *)(v4) + 12))(v4, this->field_8) == 1 )
    {
    v5 = *(void (__thiscall ****)(int, int))(*(int *)&this->__pad_18[8] + 4 * i);
    if ( v5 )
    (**v5)(v5, 1);
    v6 = (char *)this->field_2C;
    if ( i < (int)v6 )
      {
    v7 = v6 - 1;
    v8 = i;
    for ( this->field_2C = v7;
    v8 < (int)this->field_2C;
    *(int *)(*(int *)&this->__pad_18[8] + 4 * v8 - 4) = *(int *)(*(int *)&this->__pad_18[8] + 4 * v8) ) {
    ++v8;
        }
      }
    }
    result = (int)this->field_2C;
  }
    return result;
}
}

// ==== BACKFILL 0x00690530  sub_690530  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void E4Recv_690530::sub_690530(void * a2, int a3)
{
{
    int i;
    if ( a2 )
  {
    if ( Audio::IsSoundEnabled() )
    {
    for ( i = 0; i < this->M68; ++i )
      {
    if ( !_strcmpi(a2, **(const void ***)(this->M56 + 4 * i)) )
    break;
      }
    }
  }
}
}

// ==== BACKFILL 0x006905F0  sub_6905F0  cls=ScoreFontClass  sig=csp  renamed_refs=0 ====
char * E4Recv_6905F0::sub_6905F0()
{
{
    void *v2;
    char *result;
    v2 = (void *)this->M12;
    *(void**)this = &vt_ScoreFontClass;
    if ( v2 && (unsigned char)this->M16 == 1 )
  {
    __3_YAXPAX_Z(v2);
    this->M12 = 0;
    this->M16 = 0;
  }
    result = (char *)--DataGlobal_B0558C;
    if ( !DataGlobal_B0558C )
  {
    result = &DataGlobal_B05594;
    do
    {
    *((int *)result - 1) = 0;
    *result = 0;
    result += 8;
    }
    while ( (int)result < (int)((char *)&DataGlobal_B055A8 + 4) );
  }
    return result;
}
}

// ==== BACKFILL 0x00691000  ScoreAnimClass::Constructor_ScoreAnimClass_0  cls=ScoreTimeClass  sig=csp  renamed_refs=0 ====
unsigned int * ScoreAnimClass::Constructor_ScoreAnimClass_0(char a2)
{
{
    *(void**)this = &vt_ScoreAnimClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00691020  ScoreAnimClass::Constructor_ScoreAnimClass_1  cls=ScorePrintClass  sig=csp  renamed_refs=0 ====
unsigned int * ScoreAnimClass::Constructor_ScoreAnimClass_1(char a2)
{
{
    *(void**)this = &vt_ScoreAnimClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x006910A0  ScoreAnimClass::Constructor_ScoreFontClass  cls=ScoreFullFontClass  sig=csp  renamed_refs=0 ====
unsigned int * ScoreAnimClass::Constructor_ScoreFontClass(char a2)
{
{
    void *v3;
    char *v4;
    v3 = (void *)*(this + 3);
    *(void**)this = &vt_ScoreFontClass;
    if ( v3 && (unsigned char)*(int *)(this + 16) == 1 )
  {
    __3_YAXPAX_Z(v3);
    *(this + 3) = 0;
    *((char *)(this) + 16) = 0;
  }
    if ( !--DataGlobal_B0558C )
  {
    v4 = &DataGlobal_B05594;
    do
    {
    *((int *)v4 - 1) = 0;
    *v4 = 0;
    v4 += 8;
    }
    while ( (int)v4 < (int)((char *)&DataGlobal_B055A8 + 4) );
  }
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x00691160  VectorClass::PushBack2  cls=VectorClass  sig=csp  renamed_refs=0 ====
char VectorClass::PushBack2(unsigned int * a2)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->Capacity;
    if ( this->Count >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->Count;
    v7 = this->Items;
    this->Count = v6 + 1;
    *(int*)(v7 + 4 * v6) = *a2;
    return 1;
}
}

// ==== BACKFILL 0x006913C0  ScriptClass::Construct  cls=ScriptClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void* ScriptClass::Construct(int a1) {
{
      int v3;

      AbstractClass::Constructor(this);
      this->field28 = 0;
      this->buildingType = aP1;
      this->idxCurrentLine = -1;
      *(_DWORD *)this->__pad_0 = &ScriptClass::`vftable';
      *(_DWORD *)&this->__pad_0[4] = &ScriptClass::`vftable';
      *(_DWORD *)&this->__pad_0[8] = &ScriptClass::`vftable';
      *(_DWORD *)&this->__pad_0[12] = &vt_ScriptClass;
      if ( *(int *)&DataGlobal_87F8E4.__pad_5568[9332] < *(int *)&DataGlobal_87F8E4.__pad_5568[9324]
        || (DataGlobal_87F8E4.__pad_5568[9329] || !*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9324])
        && *(int *)&DataGlobal_87F8E4.__pad_5568[9336] > 0
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9316] + 8))(
             &DataGlobal_87F8E4.__pad_5568[9316],
             *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9324] + *(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9336],
             0) )
      {
        v3 = (*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9332])++;
        *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9320] + 4 * v3) = this;
      }
      return this;
}
} }

// ==== BACKFILL 0x006914E0  ScriptClass::PowerDrainUpdate  cls=ScriptClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int ScriptClass::PowerDrainUpdate(int a1) {
{
    AbstractClass::ProcessPower((AbstractClass *)this);
    return Power::TimerProcess(this->idxCurrentLine);
}
} }

// ==== BACKFILL 0x006915A0  TeamClass::SetField11  cls=TeamClass  sig=csp  renamed_refs=0 ====
char TeamClass::SetField11(ScriptClass * aP1)
{
{
    this->owner = aP1;
    return 1;
}
}

// ==== BACKFILL 0x006915B0  TeamClass::Check  cls=TeamClass  sig=csp  renamed_refs=0 ====
BOOL TeamClass::Check()
{
{
    unsigned int v1;
    v1 = this->owner + 1;
    this->owner = v1;
    return v1 < *(int *)(this->buildingType + 160);
}
}

// ==== BACKFILL 0x006915F0  ScriptClass::ddtor  cls=ScriptClass  sig=csp  renamed_refs=0 ====
int ScriptClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1123264070;
  a2[1] = 298977161;
  a2[2] = 1610655148;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x00691630  ScriptClass::LoadState  cls=ScriptClass  sig=csp  renamed_refs=0 ====
int ScriptClass::LoadState(AbstractClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_ScriptClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_ScriptClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_ScriptClass;
    *(int *)&aP0->__pad_0[12] = &vt_ScriptClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x00691690  ScriptClass::SaveState  cls=ScriptClass  sig=csp  renamed_refs=0 ====
int ScriptClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x006917F0  ScriptTypeClass::GetParameter  cls=ScriptTypeClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int ScriptTypeClass::GetParameter(void* a1) {
{
      int v3;
      _DWORD *v4;
      char Buffer[16];
      char Source[128];

      if ( !AbstractTypeClass::WriteINI((char *)this, a2) )
        return 0;
      v3 = 0;
      v4 = (_DWORD *)(this + 164);
      do
      {
        sprintf(Buffer, g_Str_Trace__d, v3);
        String::Trim(Buffer);
        if ( v3 >= this->q0A0 )
        {
          INIClass::ClearSection((int)a2, this + 36, (unsigned __int8 *)Buffer);
        }
        else
        {
          ScriptTypeClass::FormatToString(v4, Source);
          INIClass::SetString(a2, (unsigned __int8 *)(this + 36), Buffer, Source);
        }
        ++v3;
        v4 += 2;
      }
      while ( v3 < 50 );
      return 1;
}
} }

// ==== BACKFILL 0x006918A0  ScriptTypeClass::GetEvent  cls=ScriptTypeClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int ScriptTypeClass::GetEvent(void* a1) {
{
      INIClass *v3;
      INIClass *v4;
      _DWORD v6[2];
      char Buffer[16];
      INIClass Destination[2];

      INIClass::ResetSection(aP1);
      if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) )
        return 0;
      v3 = 0;
      this->q0A0 = 0;
      do
      {
        sprintf(Buffer, g_Str_Trace__d, v3);
        String::Trim(Buffer);
        if ( (int)INIClass::GetString(
                    aP1,
                    (INIClass *)(this + 36),
                    (unsigned __int8 *)Buffer,
                    (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760],
                    Destination,
                    128) > 0 )
        {
          ScriptTypeClass::SetField(v6, (Color *)Destination);
          v4 = *(INIClass **)(this + 160);
          if ( (int)v4 < 50 )
          {
            *(_DWORD *)(this + 8 * (_DWORD)v4 + 164) = v6[0];
            *(_DWORD *)(this + 8 * (_DWORD)v4 + 168) = v6[1];
            ++this->q0A0;
          }
        }
        v3 = (INIClass *)((char *)v3 + 1);
      }
      while ( (int)v3 < 50 );
      return 1;
}
} }

// ==== BACKFILL 0x00691D50  ScriptTypeClass::GetClassIdentifier  cls=ScriptTypeClass  sig=csp  renamed_refs=0 ====
int ScriptTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1123264071;
  a2[1] = 298977161;
  a2[2] = 1610655148;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x00691D90  ScriptTypeClass::LoadTypeData  cls=ScriptTypeClass  sig=csp  renamed_refs=0 ====
int ScriptTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_ScriptTypeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_ScriptTypeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_ScriptTypeClass;
    *(int *)&aP0->__pad_0[12] = &vt_ScriptTypeClass;
    }
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x00691DE0  ScriptTypeClass::SaveToINI  cls=ScriptTypeClass  sig=csp  renamed_refs=0 ====
int ScriptTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x00691E00  ScriptTypeClass::PowerDrainUpdate  cls=ScriptTypeClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int ScriptTypeClass::PowerDrainUpdate(void* a1) {
{
      AbstractTypeClass::ProcessPower((char *)this, a2);
      return Power::TimerProcess(this->q0A0);
}
} }

// ==== BACKFILL 0x00691EC0  ScriptClass::StubReturn26  cls=ScriptClass  sig=csp  renamed_refs=0 ====
int ScriptClass::StubReturn26()
{
return 26;
}

// ==== BACKFILL 0x00691ED0  ScriptClass::StubReturn48  cls=ScriptClass  sig=csp  renamed_refs=0 ====
int ScriptClass::StubReturn48()
{
return 48;
}

// ==== BACKFILL 0x00691F70  ScriptTypeClass::GetTypeIdentifier  cls=ScriptTypeClass  sig=csp  renamed_refs=0 ====
int ScriptTypeClass::GetTypeIdentifier()
{
return 27;
}

// ==== BACKFILL 0x00691F80  ScriptTypeClass::GetObjectSize  cls=ScriptTypeClass  sig=csp  renamed_refs=0 ====
int ScriptTypeClass::GetObjectSize()
{
return 564;
}

// ==== BACKFILL 0x00691F90  ScriptTypeClass::GetAuxField  cls=ScriptTypeClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int ScriptTypeClass::GetAuxField() {
{
      return this->q098;
}
} }

// ==== BACKFILL 0x00691FA0  ScriptTypeClass::ddtor  cls=ScriptTypeClass  sig=csp  renamed_refs=0 ====
ScriptTypeClass * ScriptTypeClass::ddtor(char a2)
{
{
    int v3;
    void **v5;
    *(void**)this = vt_ScriptTypeClass;
    *(this + 1) = (unsigned int)vt_ScriptTypeClass;
    *(this + 2) = (unsigned int)vt_ScriptTypeClass;
    *(this + 3) = &vt_ScriptTypeClass;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v5 = this;
    v3 = (*(int (__thiscall **)(int *, void ***))(DataGlobal_8B41C8 + 16))(&DataGlobal_8B41C8, &v5);
    if ( v3 != -1 && v3 < g_MultiplayerDebugState && v3 < --g_MultiplayerDebugState )
  {
    do
    {
    ++v3;
    *((int *)(g_MultiplayerSyncState) + v3 - 1) = *((int *)(g_MultiplayerSyncState) + v3);
    }
    while ( v3 < g_MultiplayerDebugState );
  }
    AbstractTypeClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ScriptTypeClass *)this;
}
}

// ==== BACKFILL 0x006922E0  ScrollClass::Scroll  cls=ScrollClass  sig=csp  renamed_refs=0 ====
int ScrollClass::Scroll(int * a1, MouseClass * aP2)
{
{
    TacticalClass::ProcessView(this);
    return BlowStraw_29::Seek(this, a1, aP2);
}
}

// ==== BACKFILL 0x00692F30  TacticalClass::ProcessView  cls=TacticalClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void TacticalClass::ProcessView() {
{
      int v2;
      int v3;
      _DWORD *v4;
      int v5;
      int v6;
      int v7;
      void *v8;
      int v9;
      bool v10[8];
      int v11[2];
      int v12[3];

      if ( !g_GameActive )
      {
        v2 = DSurface_ViewBounds;
        v3 = g_Map_VisibleRect;
        v4 = (_DWORD *)(*(int (__thiscall **)(int, bool *))(*(_DWORD *)g_WWMouseClass_Instance + 52))(g_WWMouseClass_Instance, v10);
        v5 = v4[1];
        v11[0] = *v4 - v2;
        v11[1] = v5 - v3;
        if ( !Map_Process_63AB60(v11[0], v5 - v3) )
        {
          if ( this->q555A == 1 )
          {
            if ( Mouse::IsButtonDown(1u) )
            {
              TacticalClass::ProcessScroll((int)&DataGlobal_87F7E8, v11);
            }
            else if ( Mouse::IsButtonDown(2u) )
            {
              ScrollMapEdge((int *)&DataGlobal_87F7E8, v11);
            }
          }
          else
          {
            if ( Tactical::MouseOver(v11, (__int16 *)&v9, v12, &v8, (bool *)&v7 + 3, v10) )
            {
              v6 = Radar::ScanWaypoints((int)&v9, v8, 1);
              TacticalClass::HandlePlayerAction((char *)&DataGlobal_87F7E8, (__int16 *)&v9, v10[0], v8, v6, 0);
            }
            if ( this->q5559 && !ArmageddonMode )
              Viewport::ProcessScroll(this, v11);
          }
        }
      }
}
} }

// ==== BACKFILL 0x00693060  MouseClass::GetHotspot  cls=ScrollClass  sig=csp  renamed_refs=0 ====
namespace gamemd { bool MouseClass::GetHotspot() {
{
      return this->q555A || g_GameActive || g_TacticalClass_Instance && *(float *)&g_TacticalClass_Instance[54].__tail_0 != 0.0;
}
} }

// ==== BACKFILL 0x00693840  MouseClass::GetButtonState  cls=ScrollClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int MouseClass::GetButtonState(int a1) {
{
      ScrollClass *v2;
      int result;

      v2 = (ScrollClass *)this;
      if ( !this->q5558 )
        return TacticalClass::DispatchMode((int *)this, aP1);
      LOBYTE(this) = DataGlobal_87F8E4.__pad_125C[16900];
      result = (*(int (__thiscall **)(ScrollClass *, _DWORD, _BYTE *))(v2->m_ScrollX + 72))(v2, 0, this);
      LOBYTE(v2[1365].m_MaxX) = 0;
      return result;
}
} }

// ==== BACKFILL 0x00693880  MouseClass::CheckCapture  cls=ScrollClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int MouseClass::CheckCapture(void* a1) {
{
      char result;

      result = g_GameActive;
      if ( !g_GameActive )
      {
        DisplayClass::vt_entry_B0(a2);
        this->q5550 = *a2;
        this->q5554 = a2[1];
        this->q5558 = 0;
        return (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance);
      }
      return result;
}
} }

// ==== BACKFILL 0x006938F0  ScrollClass::Read  cls=ScrollClass  sig=csp  renamed_refs=0 ====
ScrollClass * ScrollClass::Read(char a2)
{
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
    return (ScrollClass *)this;
}
}

// ==== BACKFILL 0x006956D0  Network::sendGameEvent  cls=Network  sig=csp  renamed_refs=0 ====
bool Network::sendGameEvent(Modem * aP0, int _10, unsigned int * a2)
{
{
    LONG v3;
    int v4;
    LONG v5;
    HWND Dialog;
    bool v7;
    v5 = v3;
    *(int *)(v3 + 4) = -1;
    Dialog = (HWND)CreateDialog(0xEDu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))DlgProcLoadGame, 0);
    *(int *)v5 = Dialog;
    if ( !Dialog )
    return *(int *)(v5 + 4) == 1;
    SetWindowLongA(Dialog, 8, v5);
    NetworkDialog::InitModemSettings((HWND *)v5, aP0);
    Dialog::Show(*(HWND *)v5);
    while ( *(int *)(v5 + 4) < 0 )
  {
    if ( Dialog::PumpMessages() == 1 )
    break;
    ScreenSaver::Process(0, v4, v5);
  }
    Dialog::Destroy(*(SkirmishDialog **)v5);
    v7 = *(int *)(v5 + 4) == 1;
    if ( *(int *)(v5 + 4) == 1 )
  {
    qmemcpy(aP0, (const void *)(v5 + 136), 0x70u);
    return *(int *)(v5 + 4) == 1;
  }
    return v7;
}
}

// ==== BACKFILL 0x006966D0  sub_6966D0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
HWND E4Recv_6966D0::sub_6966D0()
{
{
    bool v2;
    HWND DlgItem;
    HWND result;
    v2 = this->M148 == 0;
    DlgItem = GetDlgItem(*(HWND *)this, 1628);
    if ( DlgItem )
    SendMessageA(DlgItem, 0xF1u, v2, 0);
    result = GetDlgItem(*(HWND *)this, 1627);
    if ( result )
    return (HWND)SendMessageA(result, 0xF1u, !v2, 0);
    return result;
}
}

// ==== BACKFILL 0x00696950  sub_696950  cls=ObjectClass  sig=csp  renamed_refs=0 ====
HWND E4Recv_696950::sub_696950()
{
{
    HWND result;
    HWND v3;
    result = GetDlgItem(*(HWND *)this, 1626);
    v3 = result;
    if ( result )
  {
    ShowWindow(result, 0);
    EnableWindow(v3, 0);
    SendMessageA(v3, 0x4B5u, 0x10u, this + 8);
    this->M23 = 0;
    String::Trim((char *)(this + 8));
    _strupr((char *)(this + 8));
    return ListBox::SetCustomEntry((HWND *)this, 1625, 3, (void *)(this + 8));
  }
    return result;
}
}

// ==== BACKFILL 0x006969C0  ListBox::SetCustomEntry  cls=ListBox  sig=csp  renamed_refs=0 ====
namespace gamemd { int ListBox::SetCustomEntry(int nIDDlgItem, LPARAM a3, void * a4) {
{
    HWND result;
    HWND v5;
    wchar_t *String;
    LRESULT v7;
    int wParam;
    char lParam[128];
    result = GetDlgItem(*(void**)this, nIDDlgItem);
    v5 = result;
    if ( result )
  {
    wParam = FindListBoxItem(result, -1, a3);
    SendMessageA(v5, 0x4BDu, wParam, (LPARAM)lParam);
    result = (HWND)strchr(lParam, 45);
    if ( result )
    {
    result = (HWND)_strcmpi(a4, (char *)(result) + 1);
    if ( result )
      {
    String = GetStringCSF(g_Str_TXT_CUSTOM, 0, g_Str_File_SerialEd_cpp, 1187);
    sprintf(lParam, DataGlobal_83ECF4, String);
    strcat(lParam, (const char *)a4);
    SendMessageA(v5, 0x144u, wParam, 0);
    v7 = SendMessageA(v5, 0x4BCu, 0, (LPARAM)lParam);
    SendMessageA(v5, 0x151u, v7, a3);
    return (HWND)SendMessageA(v5, 0x14Eu, v7, 0);
      }
    }
  }
    return result;
}
} }

// ==== BACKFILL 0x00696AE0  DlgProcLoadGame_Load_696AE0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
HWND E4Recv_696AE0::sub_696AE0()
{
{
    HWND DlgItem;
    HWND result;
    HWND v4;
    char *v5;
    LRESULT v6;
    int v7;
    char *v8;
    DlgItem = GetDlgItem(*(HWND *)this, 1629);
    result = GetDlgItem(*(HWND *)this, 1630);
    v4 = result;
    if ( DlgItem )
  {
    if ( result )
    {
    v5 = (char *)(this + 8);
    SendMessageA(DlgItem, 0x4B5u, 0x80u, (LPARAM)v5);
    SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer);
    String::Trim(v5);
    result = 0;
    if ( strlen(v5) )
      {
    _strupr(v5);
    v6 = SendMessageA(v4, 0x4C4u, 0xFFFFFFFF, (LPARAM)v5);
    if ( v6 == -1 )
        {
    v8 = (char *)__2_YAPAXI_Z(0x29u);
    strcpy(v8, v5);
    result = (HWND)SendMessageA(v4, 0x4C8u, 0, (LPARAM)v8);
    v6 = (LRESULT)result;
    if ( result == HWND_MESSAGE|0x2 )
    return result;
    if ( DataGlobal_A8DB5C < DataGlobal_A8DB54 || (DataGlobal_A8DB59 || !DataGlobal_A8DB54) && DataGlobal_A8DB60 > 0 && (*(unsigned char (__thiscall **)(int *, int, int))(DataGlobal_A8DB4C + 8))( &DataGlobal_A8DB4C, DataGlobal_A8DB54 + DataGlobal_A8DB60, 0) )
          {
    v7 = DataGlobal_A8DB5C++;
    *(int *)(DataGlobal_A8DB50 + 4 * v7) = v8;
          }
        }
    SendMessageA(v4, 0x186u, v6, 0);
    SendMessageA(v4, 0x197u, v6, 0);
    this->M152 = v6;
    return (HWND)this;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00696C40  DlgProcLoadGame_Load_696C40  cls=ObjectClass  sig=csp  renamed_refs=0 ====
HWND E4Recv_696C40::sub_696C40()
{
{
    HWND result;
    HWND v3;
    LRESULT v4;
    int v5;
    result = GetDlgItem(*(HWND *)this, 1630);
    v3 = result;
    if ( result )
  {
    result = (HWND)SendMessageA(result, 0x18Bu, 0, 0);
    if ( (int)result > 0 )
    {
    result = (HWND)SendMessageA(v3, 0x188u, 0, 0);
    v4 = (LRESULT)result;
    if ( result != HWND_MESSAGE|0x2 )
      {
    SendMessageA(v3, 0x182u, (WPARAM)result, 0);
    if ( v4 < DataGlobal_A8DB5C )
        {
    v5 = v4;
    if ( v4 < --DataGlobal_A8DB5C )
          {
    do
            {
    ++v5;
    *(int *)(DataGlobal_A8DB50 + 4 * v5 - 4) = *(int *)(DataGlobal_A8DB50 + 4 * v5);
            }
    while ( v5 < DataGlobal_A8DB5C );
          }
        }
    if ( v4 >= SendMessageA(v3, 0x18Bu, 0, 0) )
    --v4;
    SendMessageA(v3, 0x186u, v4, 0);
    result = (HWND)SendMessageA(v3, 0x197u, v4, 0);
    this->M152 = v4;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00699450  ScenarioClass::SaveMultiplayerSettings  cls=ScenarioClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void ScenarioClass::SaveMultiplayerSettings() {
{
      int v2[9];

      RawFileClass::Construct(v2, (int)g_Str_File_RA2MD_INI);
      INIClass::SetBool((char *)&CCINIClass_INI_RA2MD, (unsigned __int8 *)g_INI_Key_MultiPlayer, DataGlobal_83F13C, this->q1ED9);
      INIClass::SetBool((char *)&CCINIClass_INI_RA2MD, (unsigned __int8 *)g_INI_Key_MultiPlayer, DataGlobal_83F130, this->q1ED8);
      INIClass::SetBool((char *)&CCINIClass_INI_RA2MD, (unsigned __int8 *)g_INI_Key_MultiPlayer, DataGlobal_83F120, this->q1FC1);
      INIClass::SetBool((char *)&CCINIClass_INI_RA2MD, (unsigned __int8 *)g_INI_Key_MultiPlayer, DataGlobal_83F110, this->q1FC0);
      INIClass::WriteDigest(&CCINIClass_INI_RA2MD, (int)v2, 0);
      RawFileClass::Dtor(v2);
}
} }

// ==== BACKFILL 0x0069A300  nullsub_35  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void nullsub_35()
{
  ;
}

// ==== BACKFILL 0x0069A310  SessionClass::GetPlayerColorScheme  cls=unknown  sig=csp  renamed_refs=0 ====
unsigned int SessionClass::GetPlayerColorScheme(ObjectClass * aP0)
{
{
    ObjectClass *result;
    result = aP0;
    if ( aP0 == (ObjectClass *)-2 )
    return DataGlobal_830620.__pad_579C[36704];
    if ( (unsigned int)aP0 < 9 )
    return DataGlobal_830620.__pad_579C[(int)aP0 + 36696];
    return (unsigned int)result;
}
}

// ==== BACKFILL 0x0069ADE0  sub_69ADE0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_69ADE0::sub_69ADE0(char a2)
{
{
    this->M380 = a2;
    return a2;
}
}

// ==== BACKFILL 0x0069B560  SaveGame::SaveAudioData  cls=SaveGame  sig=csp  renamed_refs=0 ====
bool SaveGame::SaveAudioData(int a2)
{
{
    int v2;
    int v4;
    bool result;
    int v6;
    v2 = a2;
    result = 0;
    if ( a2 )
  {
    v4 = *(int *)a2;
    v6 = a2;
    a2 = 300;
    if ( (*(int (__stdcall **)(int, int *, int, int))(v4 + 16))(v6, &a2, 4, 0) >= 0 && (*(int (__stdcall **)(int, void *, int, int))(*(int *)(v2) + 16))(v2, this, a2, 0) >= 0 )
    {
    return 1;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0069B760  SessionClass::AssignSide  cls=SessionClass  sig=csp  renamed_refs=0 ====
int SessionClass::AssignSide(int a2, MPCooperative * aP2)
{
{
    int result;
    int v5;
    result = a2;
    if ( a2 == -2 )
  {
    LOBYTE(result) = (char)aP2;
    if ( (char)aP2 )
    {
    result = Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)9);
    this->Side = result;
    this->Side2 = -2;
    }
    else
    {
    this->Side = 0;
    this->Side2 = -2;
    }
  }
    else
  {
    this->Side = a2;
    this->Side2 = -1;
  }
    v5 = this->Side2;
    this->idxSide = this->Side;
    this->idxSide2 = v5;
    return result;
}
}

// ==== BACKFILL 0x0069B8B0  nullsub_229  cls=unknown  sig=csp  renamed_refs=0 ====
void nullsub_229(int a1, int a2)
{
  ;
}

// ==== BACKFILL 0x0069BBE0  SessionClass::GetGameSpeed  cls=SessionClass  sig=csp  renamed_refs=0 ====
char SessionClass::GetGameSpeed()
{
{
    return this->CurrentlyInGame;
}
}

// ==== BACKFILL 0x0069BC60  GameClass::FindPlayerName  cls=unknown  sig=csp  renamed_refs=0 ====
int GameClass::FindPlayerName(int a1)
{
{
    int v1;
    char **v2;
    char *v3;
    char *v4;
    char *v5;
    v1 = 0;
    v2 = (char **)&g_NetworkPlayerName;
    while ( 1 )
  {
    v3 = *v2;
    v4 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * a1));
    v5 = ToWideStringChar(v3);
    if ( !_strcmpi(v4, v5) )
    break;
    ++v2;
    ++v1;
    if ( (int)v2 >= (int)&g_PlayerNameListEnd )
    return 0;
  }
    return v1;
}
}

// ==== BACKFILL 0x0069BD00  sub_69BD00  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_69BD00(int a1)
{
{
    int v1;
    char *v2;
    char *v3;
    char *v4;
    v1 = 0;
    if ( Game_PlayerCount <= 0 )
    return 0;
    while ( 1 )
  {
    v2 = (char *)*(&g_NetworkPlayerName + a1);
    v3 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v1));
    v4 = ToWideStringChar(v2);
    if ( !_strcmpi(v3, v4) )
    break;
    if ( ++v1 >= Game_PlayerCount )
    return 0;
  }
    return v1;
}
}

// ==== BACKFILL 0x0069C660  VectorClass_ptr_GlobalPacketType::Destroy_1  cls=VectorClass_ptr_GlobalPacketType  sig=csp  renamed_refs=0 ====
void VectorClass_ptr_GlobalPacketType::Destroy_1()
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

// ==== BACKFILL 0x0069C690  VectorClass_ptr_GlobalPacketType::GetItemIndex_1  cls=VectorClass_ptr_GlobalPacketType  sig=csp  renamed_refs=0 ====
unsigned int VectorClass_ptr_GlobalPacketType::GetItemIndex_1(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x0069D380  VectorClass_ptr_GlobalPacketType::SetCapacity_1  cls=VectorClass_ptr_GlobalPacketType  sig=csp  renamed_refs=0 ====
char VectorClass_ptr_GlobalPacketType::SetCapacity_1(int a2, unsigned int * a3)
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
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy_0();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}

// ==== BACKFILL 0x0069D430  VectorClass_ptr_GlobalPacketType::FindItemIndex_1  cls=VectorClass_ptr_GlobalPacketType  sig=csp  renamed_refs=0 ====
int VectorClass_ptr_GlobalPacketType::FindItemIndex_1(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}

// ==== BACKFILL 0x0069D770  MapFile::Constructor  cls=MapFile  sig=csp  renamed_refs=5 ====
unsigned int * MapFile::Constructor(int a2, int a3)
{
{
    this->MapFile_field_0x04 = 0;
    this->MapFile_field_0x08 = a2;
    this->MapFile_field_0x0C = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_enum_DiskID;
    if ( a2 )
  {
    if ( a3 )
    {
    this->MapFile_field_0x04 = a3;
    return this;
    }
    this->MapFile_field_0x04 = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x0069D7C0  VectorClass::WstringConstructor  cls=VectorClass  sig=csp  renamed_refs=0 ====
unsigned int * VectorClass::WstringConstructor(int a2, unsigned int * a3)
{
{
    int v3;
    int *v5;
    int *v7;
    int *v8;
    int *v9;
    v3 = a2;
    this->Items = (void*)(0);
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->vfptr = vt_VectorClass_Wstring;
    if ( !a2 )
    return this;
    if ( !a3 )
  {
    v7 = __2_YAPAXI_Z(4 * a2 + 4);
    if ( v7 )
    {
    *v7 = a2;
    v8 = v7 + 1;
    v9 = v7 + 1;
    if ( a2 - 1 >= 0 )
      {
    do
        {
    unknown_libname_73(v9++);
    --v3;
        }
    while ( v3 );
    this->Items = (void*)(v8);
    this->IsAllocated = 1;
    return this;
      }
    }
    else
    {
    v8 = 0;
    }
    this->Items = (void*)(v8);
    this->IsAllocated = 1;
    return this;
  }
    *a3 = a2;
    v5 = a3 + 1;
    if ( a2 - 1 >= 0 )
  {
    do
    {
    unknown_libname_73(v5++);
    --v3;
    }
    while ( v3 );
  }
    this->Items = (void*)(a3 + 1);
    return this;
}
}

// ==== BACKFILL 0x0069D870  ParseAndApplyAlliances_Parse  cls=VectorClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_69D870::sub_69D870(int a2, int a3)
{
{
    this->M4 = 0;
    this->M8 = a2;
    this->M12 = 1;
    this->M13 = 0;
    *(void**)this = &vt_VectorClass_HouseClass;
    if ( a2 )
  {
    if ( a3 )
    {
    this->M4 = a3;
    return this;
    }
    this->M4 = __2_YAPAXI_Z(4 * a2);
    this->M13 = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x0069DE70  ScenarioClass::FreeConfig  cls=ScenarioClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void ScenarioClass::FreeConfig() {
{
      if ( this->q05C )
      {
        if ( this->q058 )
        {
          __3_YAXPAX_Z(*(void **)(this + 88));
          this->q058 = 0;
          this->q05C = 0;
          this->q014 = 0;
          this->q018 = 0;
        }
      }
}
} }

// ==== BACKFILL 0x0069DFC0  SidebarClass::startButtonFlash  cls=SidebarClass  sig=csp  renamed_refs=4 ====
namespace gamemd { int SidebarClass::startButtonFlash(int a1, int a2, int a3) {
{
      if ( this->SidebarClass_field_0x38 )
        return 0;
      this->SidebarClass_field_0x38 = a2;
      this->SidebarClass_field_0x3C = a3 + a2;
      this->SidebarClass_field_0x34 = a4;
      return 1;
}
} }

// ==== BACKFILL 0x0069E010  SidebarClass::updateFlashTimer  cls=SidebarClass  sig=csp  renamed_refs=10 ====
namespace gamemd { int SidebarClass::updateFlashTimer() {
{
      int v2;
      int v3;
      int v4;

      if ( this->q01E )
      {
        if ( this->SidebarClass_field_0x38 )
        {
          this->SidebarClass_field_0x34 = 0;
          this->SidebarClass_field_0x3C = 0;
          this->SidebarClass_field_0x38 = 0;
          return 1;
        }
      }
      else
      {
        v2 = this->SidebarClass_field_0x3C;
        if ( v2 )
        {
          v3 = v2 - 1;
          this->SidebarClass_field_0x3C = v3;
          if ( !v3 )
          {
            v4 = this->SidebarClass_field_0x38;
            this->SidebarClass_field_0x34 = this->SidebarClass_field_0x34 == 0;
            this->SidebarClass_field_0x3C = v4;
            return 1;
          }
        }
      }
      return 0;
}
} }

// ==== BACKFILL 0x0069E060  sub_69E060  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_69E060::sub_69E060()
{
{
    return this->M52;
}
}

// ==== BACKFILL 0x0069E580  MixFileClass::LoadSubFile  cls=MixFileClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void* MixFileClass::LoadSubFile() {
{
      char **v1;
      int Size;
      void *v4;
      size_t v5;
      void *v6;
      _BYTE *v7;
      _DWORD *v8;
      int v9;
      int v10;
      void *v11;
      int v13[22];
      _BYTE v14[12];
      int v15;

      v1 = this;
      if ( *(_WORD *)this != 0xFFFF )
        return this;
      if ( this->FileSize )
        return (char **)this->CountFiles;
      if ( (char *)DataGlobal_B077BC == this->FileStartOffset )
        return (char **)DataGlobal_B077B4;
      CCFileClass::Construct(v13, this->Blowfish);
      if ( CCFileClass::Open(v13, 0) )
      {
        Size = CCFileClass::GetSize(v13);
        v4 = DataGlobal_B077B4;
        if ( DataGlobal_B077B4 )
        {
          if ( DataGlobal_B077B8 < Size )
          {
            v6 = DataGlobal_B077B4;
            if ( *(_WORD *)DataGlobal_B077B4 == 0xFFFF )
            {
              v7 = (char *)DataGlobal_B077B4 + 16;
              if ( *((_BYTE *)DataGlobal_B077B4 + 16) )
              {
                v8 = (char *)DataGlobal_B077B4 + 12;
                if ( *((_DWORD *)DataGlobal_B077B4 + 3) )
                  MixFileClass::CacheNode_Dtor(1);
                *v8 = 0;
                v1 = this;
                *v7 = 0;
              }
              v9 = *((_DWORD *)v6 + 6);
              if ( v9 )
                *(_DWORD *)(v9 + 28) = *((_DWORD *)v6 + 7);
              v10 = *((_DWORD *)v6 + 7);
              if ( v10 )
                *(_DWORD *)(v10 + 24) = *((_DWORD *)v6 + 6);
              else
                DataGlobal_B077B0 = (void *)*((_DWORD *)v6 + 6);
              if ( *((_DWORD *)v6 + 2) )
              {
                free(*((void **)v6 + 2));
                *((_DWORD *)v6 + 2) = 0;
              }
            }
            __3_YAXPAX_Z(v6);
            v4 = __2_YAPAXI_Z(Size);
            DataGlobal_B077B4 = v4;
            DataGlobal_B077B8 = Size;
          }
        }
        else
        {
          v5 = 3145728;
          if ( Size >= 3145728 )
            v5 = Size;
          DataGlobal_B077B8 = v5;
          v4 = __2_YAPAXI_Z(v5);
          DataGlobal_B077B4 = v4;
        }
        if ( v4 )
        {
          CCFileClass::Read(v13, v4, Size);
          v4 = DataGlobal_B077B4;
        }
        v11 = v4;
        DataGlobal_B077BC = (int)v1[5];
        v13[0] = (int)&vt_CCFileClass;
        v15 = 0;
        Vector::Clear((int)v14);
        v13[0] = (int)&off_7E1668;
        BufferIOFileClass::Dtor(v13);
        return (char **)v11;
      }
      else
      {
        DataGlobal_B077BC = 0;
        v13[0] = (int)&vt_CCFileClass;
        v15 = 0;
        Vector::Clear((int)v14);
        v13[0] = (int)&off_7E1668;
        BufferIOFileClass::Dtor(v13);
        return 0;
      }
}
} }

// ==== BACKFILL 0x0069E740  MixFileClass::GetSubFile  cls=MixFileClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int MixFileClass::GetSubFile(int a2) {
{
    char *EntireFile;
    int v4;
    int v5;
    int v7[22];
    char v8[12];
    int v9;
    if ( *(short *)this == 0xFFFF && !this->FileSize )
  {
    CCFileClass::Construct(v7, this->Blowfish);
    EntireFile = (char *)CCFileClass::ReadEntireFile(v7);
    if ( EntireFile )
    {
    this->CountFiles = EntireFile;
    this->FileSize = 1;
    }
    v7[0] = &vt_CCFileClass;
    v9 = 0;
    Vector::Clear((int)v8);
    v7[0] = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(v7);
  }
    v4 = MixFileClass::LoadSubFile(this);
    if ( v4 && a2 < *(short *)(v4 + 6) && v4 + 24 * a2 != -8 && (v5 = *(int *)(v4 + 24 * a2 + 28)) != 0 )
    return v5 + v4;
    else
    return 0;
}
} }

// ==== BACKFILL 0x0069E7E0  Building::GetFoundationSize  cls=unknown  sig=csp  renamed_refs=0 ====
unsigned int * Building::GetFoundationSize(unsigned int * a1, unsigned int a2)
{
{
    int v2;
    short *v3;
    int v4;
    int v5;
    int v6;
    int v7;
    v2 = MixFileClass::LoadSubFile();
    if ( v2 && a2 < *(short *)(v2 + 6) && (v3 = (short *)(v2 + 24 * a2 + 8)) != 0 )
  {
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v7 = v3[3];
    *a1 = v4;
    *((int*)(a1) + 1) = v5;
    *((int*)(a1) + 2) = v6;
    *((int*)(a1) + 3) = v7;
    return a1;
  }
    else
  {
    *a1 = DataGlobal_B077A0;
    *((int*)(a1) + 1) = DataGlobal_B077A4;
    *((int*)(a1) + 2) = DataGlobal_B077A8;
    *((int*)(a1) + 3) = DataGlobal_B077AC;
    return a1;
  }
}
}

// ==== BACKFILL 0x0069E930  MixFileClass::CacheNode_Dtor  cls=MixFileClass  sig=csp  renamed_refs=2 ====
namespace gamemd { void* MixFileClass::CacheNode_Dtor(int a2) {
{
      int v3;
      int v4;

      if ( *(_WORD *)this == 0xFFFF )
      {
        if ( this->FileSize )
        {
          if ( this->CountFiles )
            MixFileClass::CacheNode_Dtor(1);
          this->CountFiles = 0;
          this->FileSize = 0;
        }
        v3 = this->Headers;
        if ( v3 )
          *(_DWORD *)(v3 + 28) = this->__pad_01C;
        v4 = this->__pad_01C;
        if ( v4 )
          *(_DWORD *)(v4 + 24) = this->Headers;
        else
          DataGlobal_B077B0 = (void *)this->Headers;
        if ( this->Blowfish )
        {
          free(*((void **)this + 2));
          this->Blowfish = 0;
        }
      }
      if ( (a2 & 1) != 0 )
        __3_YAXPAX_Z(this);
      return this;
}
} }

// ==== BACKFILL 0x0069E9B0  VectorClass::Check  cls=SHAPipe  sig=csp  renamed_refs=0 ====
int VectorClass::Check(Pipe * aP1, int aP2)
{
{
    SHA1::Process((Pipe *)(this + 3), aP1, (Pipe *)aP2);
    return (int)Delegate::Dispatch(this, aP1, (Pipe *)aP2);
}
}

// ==== BACKFILL 0x0069E9E0  SHA1::ComputeThunk  cls=SHA1  sig=csp  renamed_refs=0 ====
int SHA1::ComputeThunk(ObjectClass * aP1)
{
{
    return SHA1::Compute((Pipe *)(this + 3), aP1);
}
}

// ==== BACKFILL 0x0069E9F0  sub_69E9F0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_69E9F0::sub_69E9F0(int a1, Straw * aP2)
{
{
    Pipe *v4;
    if ( !a1 || (int)aP2 < 1 )
    return 0;
    v4 = (Pipe *)Delegate::Invoke((int *)this, a1, aP2);
    if ( !(unsigned char)this->M12 )
    SHA1::Process((Pipe *)(this + 16), (Pipe *)a1, v4);
    return (int)v4->__pad_0;
}
}

// ==== BACKFILL 0x0069ED20  JumpjetLocomotionClass::LoadLocomotionFromStream_2  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::LoadLocomotionFromStream_2(unsigned int * a1, unsigned int * a2)
{
{
    int *v2;
    int *v4;
    int v5;
    int v6;
    int v7;
    int *v8;
    int *v9;
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v4 = a1 + 20;
    if ( *((int*)(a1) + 20) )
  {
    a1 = 0;
    v5 = StreamClass::Set2(&a1, v4);
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !a1 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*a1 + 12))(a1, v2);
    if ( a1 )
    {
    (*(void (__stdcall **)(int *))(*a1 + 8))(a1);
    return v6;
    }
  }
    else
  {
    a2 = 0;
    if ( a1 == (int *)24 )
    return -2147467259;
    v7 = (*(int (__stdcall **)(int *, void *, int **))*(a1 - 6))(a1 - 6, &DataGlobal_818858, &a1);
    if ( v7 >= 0 )
    {
    v9 = a1;
    ComPtr::Release_Alt((int *)&a2);
    v8 = v9;
    a2 = v9;
    }
    else
    {
    ComPtr::Release_Alt((int *)&a2);
    v8 = 0;
    a2 = 0;
    }
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    if ( !v8 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*v8 + 12))(v8, v2);
    if ( a2 )
    (*(void (__stdcall **)(int *))(*a2 + 8))(a2);
  }
    return v6;
}
}

// ==== BACKFILL 0x0069EE90  ShipLocomotionClass::BeginMove  cls=ShipLocomotionClass  sig=csp  renamed_refs=0 ====
HRESULT ShipLocomotionClass::BeginMove(int * a1, int * pStm)
{
{
    IStream *v2;
    int v3;
    int v4;
    LPVOID *v5;
    v2 = (IStream *)pStm;
    v3 = SwizzleManager::SaveLoad(a1, pStm);
    if ( v3 < 0 )
    return v3;
    if ( a1 )
  {
    *((int*)(a1) + 26) = 0;
    *a1 = (int)(unsigned int)vt_ShipLocomotionClass;
    *((int*)(a1) + 1) = (int)&vt_ShipLocomotionClass;
    *((int*)(a1) + 6) = (int)&vt_ShipLocomotionClass_2;
  }
    v2->__pad_0->Read(v2, &pStm, 1, 0);
    if ( !(char)pStm )
    return v3;
    v4 = *((int*)(a1) + 26);
    v5 = (LPVOID *)(a1 + 26);
    if ( v4 )
    (*(void (__stdcall **)(int))(*(int *)(v4) + 8))(v4);
    *v5 = 0;
    return OleLoadFromStream(v2, &IID_ILocomotion, v5);
}
}

// ==== BACKFILL 0x0069EF10  ShipLocomotionClass::LoadFromStream  cls=ShipLocomotionClass  sig=csp  renamed_refs=0 ====
HRESULT ShipLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{
{
    IStream *v3;
    int *v4;
    int IPersistStream;
    int v6;
    int (__stdcall ***v7)(int, void *, int **);
    int v8;
    int *v9;
    HRESULT v10;
    int v12;
    v3 = (IStream *)pPStm;
    v4 = a1;
    IPersistStream = LoadIPersistStream(a1, pPStm, a3);
    if ( IPersistStream < 0 )
    return IPersistStream;
    if ( !v4[26] )
  {
    v12 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 0;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v12 + 16))(v3, &a3, 1, 0);
    return IPersistStream;
  }
    v6 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 1;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v6 + 16))(v3, &a3, 1, 0);
    v7 = (int (__stdcall ***)(int, void *, int **))v4[26];
    pPStm = 0;
    if ( v7 )
  {
    v8 = (**v7)(v7, &DataGlobal_820270, &a1);
    if ( v8 >= 0 )
    {
    v9 = a1;
    if ( pPStm )
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm);
    pPStm = v9;
    }
    else
    {
    Function::Method_4B4D60((int *)&pPStm);
    pPStm = 0;
    }
    if ( v8 < 0 && v8 != -2147467262 )
    WinAPI::Wrapper(v8);
  }
    v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3);
    if ( pPStm )
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm);
    return v10;
}
}

// ==== BACKFILL 0x0069EFF0  JumpjetLocomotionClass::StubReturnZero_12  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::StubReturnZero_12(int a1, int a2)
{
{
    if ( !a2 )
    return -2147467261;
    if ( *(int *)(a1 + 80) )
    return -2147467259;
    *(int *)(a1 + 80) = a2;
    (*(void (__stdcall **)(int))(*(int *)(a2) + 4))(a2);
    return 0;
}
}

// ==== BACKFILL 0x0069F040  JumpjetLocomotionClass::StubReturnZero_13  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::StubReturnZero_13(int a1, unsigned int * a2)
{
{
    int v3;
    if ( !a2 )
    return -2147467261;
    v3 = *(int *)(a1 + 80);
    if ( !v3 )
    return 1;
    *a2 = v3;
    *(int *)(a1 + 80) = 0;
    return 0;
}
}

// ==== BACKFILL 0x0069F080  JumpjetLocomotionClass::CheckPiggybackState_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
bool JumpjetLocomotionClass::CheckPiggybackState_0(int a1)
{
{
    return !(*(unsigned char (__stdcall **)(int))(*(int *)(a1 - 20) + 16))(a1 - 20)
    && *(int *)(a1 + 80)
    && *(char *)(a1 + 77)
    && !*(char *)(*(int *)(a1 - 12) + 1709);
}
}

// ==== BACKFILL 0x0069F1B0  sub_69F1B0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
double E4Recv_69F1B0::sub_69F1B0()
{
{
    int v1;
    int v3;
    int v4;
    v1 = this->M48;
    if ( !v1 )
    return 1.0;
    v3 = this->M36;
    v4 = this->M44;
    if ( v3 != -1 )
  {
    if ( (int)g_CurrentFrame - v3 < v4 )
    return (double)(v1 - (v4 - ((int)g_CurrentFrame - v3))) / (double)v1;
    v4 = 0;
  }
    return (double)(v1 - v4) / (double)v1;
}
}

// ==== BACKFILL 0x0069F210  sub_69F210  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_69F210::sub_69F210(int a2)
{
{
    int result;
    int *v3;
    int v4;
    result = this->M28;
    if ( a2 != result )
  {
    this->M32 = result;
    this->M28 = a2;
    v3 = this + 9;
    *v3 = g_CurrentFrame;
    v3[1] = v4;
    v3[2] = 3;
    v3[3] = 3;
    return v4;
  }
    return result;
}
}

// ==== BACKFILL 0x0069F250  JumpjetLocomotionClass::InitMovementState_0  cls=ShipLocomotionClass  sig=csp  renamed_refs=0 ====
unsigned int * JumpjetLocomotionClass::InitMovementState_0(unsigned int * a1, int a2)
{
{
    int v3;
    *((int*)(a1) + 7) = a2;
    *((int*)(a1) + 6) = a2;
    *((int*)(a1) + 8) = g_CurrentFrame;
    *((int*)(a1) + 9) = v3;
    *((int*)(a1) + 10) = 0;
    *((int*)(a1) + 11) = 0;
    return a1 + 8;
}
}

// ==== BACKFILL 0x0069F290  JumpjetLocomotionClass::StubReturnTrue_5  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
bool JumpjetLocomotionClass::StubReturnTrue_5(int a1)
{
{
    if ( *(int *)(a1 + 48) != g_OverlayTypeConfig || *(__int64 *)(a1 + 52) != DataGlobal_B077FC )
    return 1;
    return (*(int *)(a1 + 60) != g_OverlayTypeConfig || *(__int64 *)(a1 + 64) != DataGlobal_B077FC)
    && (*(int *)(a1 + 60) != *(int *)(*(int *)(a1 + 8) + 156) || *(int *)(a1 + 64) != *(int *)(*(int *)(a1 + 8) + 160));
}
}

// ==== BACKFILL 0x0069F330  JumpjetLocomotionClass::StubReturnTrue_6  cls=ShipLocomotionClass  sig=csp  renamed_refs=0 ====
bool JumpjetLocomotionClass::StubReturnTrue_6(InfantryClass * aP0)
{
{
    if ( TimerClass::Active(*(int *)&aP0->__pad_0[8] + 904) )
    return 1;
    return (*(unsigned char (__stdcall **)(InfantryClass *))(*(int *)aP0->__pad_0 + 16))(aP0)
    && (aP0->ambientSoundController[0] != *(int *)&DataGlobal_B05488.__pad_14B0[3776] || aP0->ambientSoundController[1] != *(int *)&DataGlobal_B05488.__pad_14B0[3780] || aP0->ambientSoundController[2] != *(int *)&DataGlobal_B05488.__pad_14B0[3784])
    && (*(int (__thiscall **)(int))(**(int **)&aP0->__pad_0[8] + 1336))(*(int *)&aP0->__pad_0[8]) > 0;
}
}

// ==== BACKFILL 0x0069F3A0  JumpjetLocomotionClass::GetCoordinate_1  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
unsigned int * JumpjetLocomotionClass::GetCoordinate_1(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    v2 = *((int*)(a1) + 13);
    v3 = *((int*)(a1) + 14);
    *a2 = *((int*)(a1) + 12);
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
}
}

// ==== BACKFILL 0x0069F3D0  JumpjetLocomotionClass::GetRenderCoordinate_1  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate_1(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    if ( *((int*)(a1) + 15) == g_OverlayTypeConfig && *((__int64 *)(a1) + 8) == DataGlobal_B077FC )
  {
    v4 = *((int*)(a1) + 2);
    v5 = v4 + 156;
    v6 = *(int *)(v4 + 156);
    v7 = *(int *)(v4 + 160);
    v8 = *(int *)(v5 + 8);
    *a2 = v6;
    *((int*)(a2) + 1) = v7;
    *((int*)(a2) + 2) = v8;
    return a2;
  }
    else
  {
    v2 = *((int*)(a1) + 16);
    v3 = *((int*)(a1) + 17);
    *a2 = *((int*)(a1) + 15);
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
  }
}
}

// ==== BACKFILL 0x0069F450  JumpjetLocomotionClass::ConvertCoordToCell_2  cls=ShipLocomotionClass  sig=csp  renamed_refs=0 ====
unsigned int * JumpjetLocomotionClass::ConvertCoordToCell_2(int arg0, unsigned int * a1, unsigned int aP1_4, IUnknown * aP3)
{
{
    int *result;
    unsigned int v5;
    IUnknown *v6;
    result = (int *)(*(int (__thiscall **)(int))(**(int **)(arg0 + 8) + 892))(*(int *)(arg0 + 8));
    if ( !(char)result )
  {
    result = (int *)(*(int (__thiscall **)(int))(**(int **)(arg0 + 8) + 896))(*(int *)(arg0 + 8));
    if ( !(char)result )
    {
    result = (int *)(*(int (__thiscall **)(int))(**(int **)(arg0 + 8) + 468))(*(int *)(arg0 + 8));
    if ( !(char)result )
      {
    result = (int *)(*(int (__thiscall **)(int))(**(int **)(arg0 + 8) + 472))(*(int *)(arg0 + 8));
    if ( !(char)result )
        {
    result = a1;
    v5 = aP1_4;
    v6 = aP3;
    *(int *)(arg0 + 48) = a1;
    *(int *)(arg0 + 52) = v5;
    *(int *)(arg0 + 56) = v6;
    if ( result != *(int **)&DataGlobal_B05488.__pad_14B0[3776] || v5 != *(int *)&DataGlobal_B05488.__pad_14B0[3780] || v6 != *(IUnknown **)&DataGlobal_B05488.__pad_14B0[3784] )
          {
    a1 = result;
    aP1_4 = v5;
    aP3 = v6;
    result = Coord::To_Cell(&DataGlobal_87C374.__pad_14B0[8132], (IUnknown *)&a1);
    if ( (result[80] & 0x100) != 0 )
            {
    result = (int *)(*(int *)&DataGlobal_B05488.__pad_14B0[3828] + *(int *)(arg0 + 56));
    *(int *)(arg0 + 56) = result;
            }
          }
        }
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0069F510  JumpjetLocomotionClass::CheckWindowsErrorWrapper_1  cls=ShipLocomotionClass  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::CheckWindowsErrorWrapper_1(int a1)
{
{
    int v1;
    int v2;
    double v3;
    int result;
    if ( *(int *)(a1 + 60) != g_OverlayTypeConfig || *(__int64 *)(a1 + 64) != DataGlobal_B077FC )
  {
    if ( *(char *)((*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 132))(*(int *)(a1 + 8)) + 3220) )
    {
    v1 = *(int *)(a1 + 8);
    if ( !*(char *)(v1 + 1744) )
      {
    v2 = *(int *)(v1 + 1736);
    if ( v2 )
        {
    do
          {
    if ( !*(int *)(v2 + 1652) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int))(**(int **)(v2 + 1652) + 72))(*(int *)(v2 + 1652));
    v2 = *(int *)(v2 + 1736);
          }
    while ( v2 && v2 != *(int *)(v2 + 1736) );
        }
      }
    }
  }
    if ( *(double *)(a1 + 76) >= 0.300000011920929 )
    v3 = 0.300000011920929;
    else
    v3 = *(double *)(a1 + 76);
    *(double *)(a1 + 76) = v3;
    *(int *)(a1 + 48) = g_OverlayTypeConfig;
    result = DataGlobal_B077FC;
    *(__int64 *)(a1 + 52) = DataGlobal_B077FC;
    return result;
}
}

// ==== BACKFILL 0x0069F5E0  sub_69F5E0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
BOOL E4Recv_69F5E0::sub_69F5E0()
{
{
    int v1;
    double v2;
    int v3;
    int v4;
    int v5;
    int result;
    v1 = this->M48;
    if ( v1 )
  {
    v3 = this->M44;
    v4 = this->M36;
    if ( v4 != -1 )
    {
    if ( (int)g_CurrentFrame - v4 >= v3 )
    v3 = 0;
    else
    v3 -= (int)g_CurrentFrame - v4;
    }
    v2 = (double)(v1 - v3) / (double)(int)this->M48;
  }
    else
  {
    v2 = 1.0;
  }
    result = 0;
    if ( v2 == 1.0 )
  {
    v5 = this->M12;
    if ( fabs(*(float *)(v5 + 808)) < 0.005 && fabs(*(float *)(v5 + 812)) < 0.005 )
    return 1;
  }
    return result;
}
}

// ==== BACKFILL 0x0069FB20  JumpjetLocomotionClass::ComputeAudio3DRotation_1  cls=ShipLocomotionClass  sig=csp  renamed_refs=0 ====
float * JumpjetLocomotionClass::ComputeAudio3DRotation_1(unsigned int * a1, float * a2, unsigned int * a3)
{
{
    int v3;
    double v4;
    int v5;
    int v6;
    int v7;
    float v9[12];
    v3 = *((int*)(a1) + 11);
    if ( v3 )
  {
    v5 = *((int*)(a1) + 8);
    v6 = *((int*)(a1) + 10);
    if ( v5 != -1 )
    {
    if ( (int)g_CurrentFrame - v5 >= v6 )
    v6 = 0;
    else
    v6 -= (int)g_CurrentFrame - v5;
    }
    v4 = (double)(v3 - v6) / (double)(int)*((int*)(a1) + 11);
  }
    else
  {
    v4 = 1.0;
  }
    if ( v4 != 1.0 || (v7 = *((int*)(a1) + 2), fabs(*(float *)(v7 + 808)) >= 0.005) || fabs(*(float *)(v7 + 812)) >= 0.005 )
  {
    if ( a3 )
    *a3 = -1;
  }
    qmemcpy(a2, Audio3D::ComputeRotation((int)a1, v9, a3), 0x30u);
    return a2;
}
}

// ==== BACKFILL 0x0069FBE0  JumpjetLocomotionClass::DispatchVirtualCall_6  cls=ShipLocomotionClass  sig=csp  renamed_refs=0 ====
int JumpjetLocomotionClass::DispatchVirtualCall_6(int * a1)
{
{
    int v1;
    int v2;
    v1 = *a1;
    v2 = (*(int (__thiscall **)(int))(*(int *)*((int*)(a1) + 2) + 444))(*((int*)(a1) + 2));
    return (*(int (__stdcall **)(int *, int))(v1 + 124))(a1, *(unsigned char *)(v2 + 284));
}
}
