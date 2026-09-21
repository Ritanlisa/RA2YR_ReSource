// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00550000  Game::loadCampaignData  cls=Game  sig=csp  renamed_refs=0  residual=- ====
int Game::loadCampaignData()
{
{
    int result;
    void *v2;
    int v3;
    void *v4;
    v4 = this;
    for ( result = g_TimerPool; g_TimerPool; result = g_TimerPool )
  {
    v2 = *(void **)DataGlobal_ABC87C;
    if ( *(int *)DataGlobal_ABC87C )
    {
    v4 = *(void **)DataGlobal_ABC87C;
    v3 = (*(int (__thiscall **)(int *, void **))(DataGlobal_ABC878 + 16))(&DataGlobal_ABC878, &v4);
    if ( v3 != -1 && v3 < g_TimerPool && v3 < --g_TimerPool )
      {
    do
        {
    ++v3;
    *((int *)(DataGlobal_ABC87C) + v3 - 1) = *((int *)(DataGlobal_ABC87C) + v3);
        }
    while ( v3 < g_TimerPool );
      }
    __3_YAXPAX_Z(v2);
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00550240  Helper_550240  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_550240()
{
{
    char result;
    int i;
    result = g_TimerPool;
    for ( i = g_TimerPool - 1; i >= 0; --i )
    result = TacticalClass::RenderCells(*((int *)(DataGlobal_ABC87C) + i));
    return result;
}
}

// ==== BACKFILL 0x00551630  WebBrowser::OpenURL  cls=WebBrowser  sig=csp  renamed_refs=0  residual=- ====
bool WebBrowser::OpenURL()
{
{
    HANDLE FileA;
    HINSTANCE ExecutableA;
    DWORD NumberOfBytesWritten;
    struct _PROCESS_INFORMATION ProcessInformation;
    struct _STARTUPINFOA StartupInfo;
    CHAR TempFileName[260];
    CHAR CommandLine[260];
    CHAR Buffer[260];
    CHAR Result[260];
    if ( !this )
    return 0;
    if ( !strlen(this->__pad_0) )
    return 0;
    GetWindowsDirectoryA(Buffer, 0x104u);
    GetTempFileNameA(Buffer, (LPCSTR)&DataGlobal_829748.fallRate, 0, TempFileName);
    strcpy(strrchr(TempFileName, 46), (const char *)&DataGlobal_829748.objectTypeFlags);
    FileA = CreateFileA(TempFileName, 0x40000000u, 0, 0, 2u, 0x80u, 0);
    if ( FileA == (HANDLE)-1 )
    return 0;
    WriteFile(FileA, &DataGlobal_829748.__pad_0[12], strlen(&DataGlobal_829748.__pad_0[12]), &NumberOfBytesWritten, 0);
    CloseHandle(FileA);
    ExecutableA = FindExecutableA(TempFileName, 0, Result);
    DeleteFileA(TempFileName);
    if ( (int)ExecutableA <= 32 )
    return 0;
    sprintf(CommandLine, &DataGlobal_829748, this);
    memset(&StartupInfo, 0, sizeof(StartupInfo));
    StartupInfo.cb = 68;
    return CreateProcessA(Result, CommandLine, 0, 0, 0, 0, 0, 0, &StartupInfo, &ProcessInformation);
}
}

// ==== BACKFILL 0x00551B20  LayerClass::Save  cls=LayerClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int LayerClass::Save(void* a1) {
{
      RadarClass *v2;
      int result;
      RadarClass *v5;
      int v6;
      int v7;
      RadarClass *v8;

      v2 = aP1;
      if ( !aP1 )
        return -2147467261;
      v5 = (RadarClass *)this->q010;
      v6 = aP1->field_0;
      v8 = aP1;
      aP1 = v5;
      result = (*(int (__stdcall **)(RadarClass *, RadarClass **, int, _DWORD))(v6 + 16))(v8, &aP1, 4, 0);
      if ( result >= 0 )
      {
        v7 = 0;
        if ( (int)aP1 <= 0 )
        {
          return 0;
        }
        else
        {
          while ( 1 )
          {
            result = (*(int (__stdcall **)(RadarClass *, int, int, _DWORD))(v2->field_0 + 16))(
                       v2,
                       this->count + 4 * v7,
                       4,
                       0);
            if ( result < 0 )
              break;
            if ( ++v7 >= (int)aP1 )
              return 0;
          }
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x00554AA0  TacticalClass::UpdateScrollTarget  cls=TacticalClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int TacticalClass::UpdateScrollTarget(int a1, int a2, int a3, int a4, int a5) {
{
      int v6;

      if ( this->field24 != a2 || (v6 = this->field28, v6 != a3) || v6 != a5 )
      {
        this->field24 = a2;
        this->TacticalClass_field_2C = a4;
        LOBYTE(v6) = this->field48;
        this->field28 = a3;
        this->field30 = a5;
        if ( (_BYTE)v6 )
          LOBYTE(v6) = TacticalClass::ScrollView((_DWORD *)this, a6);
      }
      return v6;
}
} }

// ==== BACKFILL 0x00554AF0  TacticalClass::ScrollView  cls=TacticalClass  sig=csp  renamed_refs=2  residual=- ====
namespace gamemd { int TacticalClass::ScrollView(int a1) {
{
      char result;
      int v4;
      int v5;
      int v6;
      unsigned __int16 v7;
      BuildingTypeClass *v8;
      int v9;
      double v10;
      int v11;
      MouseClass *v12;
      int v13;
      int v14;
      void *v15;
      MouseClass *v16;
      MouseClass *v17;
      int v18;
      int v19;
      int v20;
      int v21;
      int v22;
      __int16 v23;
      __int16 v24;

      result = DataGlobal_829AE4;
      if ( DataGlobal_829AE4 )
      {
        result = g_NetworkPlayerBuffer.__pad_14B0[140];
        if ( *(int *)&g_NetworkPlayerBuffer.__pad_14B0[140] >= this->field34 )
        {
          if ( (_BYTE)aP1 && DataGlobal_ABCA50 )
            UpdateDeferredLightSurfaces(0, 1);
          v23 = this->field38 / 256;
          v24 = this->TacticalClass_field_3C / 256;
          v18 = this->field44 / 256 + 1;
          v4 = v18;
          v5 = -v18;
          v6 = -v18;
          v22 = -v18;
          v20 = -v18;
          if ( -v4 <= v4 )
          {
            do
            {
              v19 = v5;
              if ( v5 <= v4 )
              {
                v7 = v24 + v6;
                for ( HIWORD(v17) = v7; ; v7 = HIWORD(v17) )
                {
                  LOWORD(v17) = v23 + v5;
                  v16 = v17;
                  if ( (unsigned __int16)(v23 + v5) < 0x200u
                    && v7 < 0x200u
                    && Cell::Exists(&DataGlobal_87F7E8, (MouseClass *)&v16) )
                  {
                    v8 = (BuildingTypeClass *)(((__int16)v16 << 8) + 128 - this->field38);
                    v9 = (SHIWORD(v16) << 8) + 128 - this->TacticalClass_field_3C;
                    v21 = (_DWORD)v8 * (_DWORD)v8 + v9 * v9;
                    v10 = Math::Sqrt((double)v21);
                    if ( (int)Math::RoundToInt(v10) <= this->field44 )
                    {
                      if ( (_BYTE)aP1 )
                      {
                        v11 = __2_YAPAXI_Z(0x14u);
                        if ( v11 )
                        {
                          v12 = v16;
                          *(_DWORD *)v11 = 0;
                          *(_DWORD *)(v11 + 4) = 0x10000;
                          *(_WORD *)(v11 + 8) = 0;
                          *(_WORD *)(v11 + 10) = 1000;
                          *(_WORD *)(v11 + 12) = 1000;
                          *(_WORD *)(v11 + 14) = 1000;
                          *(_DWORD *)(v11 + 16) = v12;
                          v13 = v11;
                        }
                        else
                        {
                          v13 = 0;
                        }
                        if ( DataGlobal_ABCA50 < DataGlobal_ABCA48
                          || (DataGlobal_ABCA4D || !DataGlobal_ABCA48)
                          && DataGlobal_ABCA54 > 0
                          && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))DataGlobal_ABCA40->field_8)(
                               &DataGlobal_ABCA40,
                               DataGlobal_ABCA54 + DataGlobal_ABCA48,
                               0) )
                        {
                          v14 = DataGlobal_ABCA50++;
                          *(_DWORD *)&DataGlobal_ABCA44->__pad_0[4 * v14] = v13;
                        }
                        v4 = v18;
                      }
                      else
                      {
                        v15 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v16);
                        TacticalClass::SetView((int)v15, 0, 0x10000, 0, 1000, 1000, 1000);
                      }
                    }
                  }
                  LOWORD(v5) = ++v19;
                  if ( v19 > v4 )
                    break;
                }
                v6 = v20;
                v5 = v22;
              }
              v20 = ++v6;
            }
            while ( v6 <= v4 );
          }
          return MapClass::MarkForRedraw(&DataGlobal_87F7E8, 1);
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x00555070  LightSourceClass::Stat  cls=LightSourceClass  sig=csp  renamed_refs=0  residual=- ====
int LightSourceClass::Stat(AbstractClass * aP1)
{
{
    return AbstractClass::ProcessPower((#378 *)this);
}
}

// ==== BACKFILL 0x00555080  LightSourceClass::ddtor  cls=LightSourceClass  sig=csp  renamed_refs=0  residual=- ====
int LightSourceClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1872513264;
  a2[1] = 298979847;
  a2[2] = 1610642561;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x005550C0  LightSourceClass::Write  cls=LightSourceClass  sig=csp  renamed_refs=0  residual=- ====
int LightSourceClass::Write(AbstractClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_LightSourceClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_LightSourceClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_LightSourceClass;
    *(int *)&aP0->__pad_0[12] = &vt_LightSourceClass;
    }
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x00555110  LightSourceClass::Seek  cls=LightSourceClass  sig=csp  renamed_refs=0  residual=- ====
int LightSourceClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x00555130  LightSourceClass::StubReturn76  cls=LightSourceClass  sig=csp  renamed_refs=0  residual=- ====
int LightSourceClass::StubReturn76()
{
return 76;
}

// ==== BACKFILL 0x00555140  LightSourceClass::StubReturn54  cls=LightSourceClass  sig=csp  renamed_refs=0  residual=- ====
int LightSourceClass::StubReturn54()
{
return 54;
}

// ==== BACKFILL 0x00555150  LightSourceClass::CopyTo  cls=LightSourceClass  sig=csp  renamed_refs=0  residual=- ====
LightSourceClass * LightSourceClass::CopyTo(char a2)
{
{
    int v3;
    void **v5;
    *(void**)this = vt_LightSourceClass;
    *(this + 1) = (unsigned int)vt_LightSourceClass;
    *(this + 2) = (unsigned int)vt_LightSourceClass;
    *(this + 3) = &vt_LightSourceClass;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v5 = this;
    v3 = ((int (__thiscall *)(DynamicVector **, void ***))DataGlobal_ABCA10->field_10)(&DataGlobal_ABCA10, &v5);
    if ( v3 != -1 && v3 < g_BridgeCellPool && v3 < --g_BridgeCellPool )
  {
    do
    {
    ++v3;
    *(int *)&DataGlobal_ABCA14->__pad_0[4 * v3 - 4] = *(int *)&DataGlobal_ABCA14->__pad_0[4 * v3];
    }
    while ( v3 < g_BridgeCellPool );
  }
    if ( *(char *)(this + 72) )
  {
    *(char *)(this + 72) = 0;
    TacticalClass::ScrollView(this, 0);
  }
    AbstractClass::DTOR(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (LightSourceClass *)this;
}
}

// ==== BACKFILL 0x00555AC0  QuantizeColorRGB  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * Color_QuantizeRGB(int * a1, int * a2, int * a3)
{
{
    int v4;
    int v5;
    int *result;
    int v7;
    v4 = *a1;
    if ( *a1 >= 1000 )
    v4 = 1000;
    *a1 = v4;
    v5 = *a2;
    if ( *a2 >= 1000 )
    v5 = 1000;
    *a2 = v5;
    result = a3;
    v7 = *a3;
    if ( *a3 >= 1000 )
    v7 = 1000;
    *a3 = v7;
    *a1 &= (*a1 <= 0) - 1;
    *a2 &= (*a2 <= 0) - 1;
    *a3 &= (*a3 <= 0) - 1;
    if ( g_lParam )
  {
    if ( g_lParam == 1 )
    {
    *a1 &= 0xFFFFFFC0;
    *a2 &= 0xFFFFFFC0;
    *a3 &= 0xFFFFFFC0;
    }
    else if ( g_lParam == 2 )
    {
    *a1 &= 0xFFFFFFE0;
    *a2 &= 0xFFFFFFE0;
    *a3 &= 0xFFFFFFE0;
    }
  }
    else
  {
    *a1 &= 0xFFFFFF80;
    *a2 &= 0xFFFFFF80;
    *a3 &= 0xFFFFFF80;
  }
    return result;
}
}

// ==== BACKFILL 0x00556510  sub_556510  cls=LightConvertClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_556510::sub_556510()
{
{
    *(void**)this = vt_LightConvertClass;
    return sub_490400(this);
}
}

// ==== BACKFILL 0x00556520  sub_556520  cls=LightConvertClass  sig=csp  renamed_refs=0  residual=- ====
LightConvertClass * E4Recv_556520::sub_556520(char a2)
{
{
    *(void**)this = &vt_LightConvertClass;
    sub_490400((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (LightConvertClass *)this;
}
}

// ==== BACKFILL 0x00556620  ObjectClass::GetWidth  cls=LinkClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetWidth()
{
{
    return this->vtable1;
}
}

// ==== BACKFILL 0x00556630  ObjectClass::GetHeight  cls=LinkClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetHeight() const
{
    return location.Z;
}

// ==== BACKFILL 0x00556670  LinkedList::FindNext  cls=LinkClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * LinkedList::FindNext()
{
{
    int *v1;
    int *result;
    v1 = this + 1;
    if ( !this->Tail )
    return this;
    do
  {
    result = (int *)*v1;
    if ( (int *)*v1 == this )
    break;
    v1 = result + 1;
  }
    while ( result[1] );
    return result;
}
}

// ==== BACKFILL 0x00556B30  TacticalClass::GetField  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TacticalClass::GetField() {
{
    int result;
    result = this->vtable1;
    if ( result )
  {
    *(int *)(result + 168) = 0;
    this->vtable1 = 0;
  }
    return result;
}
} }

// ==== BACKFILL 0x00556B50  ObjectClass::updateMissionState  cls=ObjectClass  sig=csp  renamed_refs=1  residual=- ====
int ObjectClass::updateMissionState(int a2)
{
{
    int result;
    result = a2;
    if ( !g_lParam )
    result = 2 * a2;
    this->vtable3 = result;
    return result;
}
}

// ==== BACKFILL 0x00556D40  Render_Render_556D40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_556D40()
{
{
    int i;
    int *v1;
    int v2;
    int *v3;
    for ( i = DataGlobal_ABCB88 - 1; i >= 0; --i )
  {
    v1 = (int *)*((int *)(DataGlobal_ABCB7C) + i);
    Render_Render_556B70(v1);
    if ( v1[1] || v1[4 * v1[3] + 7] )
    {
    Render_Render_556C00((int)v1);
    }
    else if ( v1 )
    {
    v3 = v1;
    v2 = (*(int (__thiscall **)(int *, int **))(DataGlobal_ABCB78 + 16))(&DataGlobal_ABCB78, &v3);
    if ( v2 != -1 && v2 < DataGlobal_ABCB88 && v2 < --DataGlobal_ABCB88 )
      {
    do
        {
    ++v2;
    *((int *)(DataGlobal_ABCB7C) + v2 - 1) = *((int *)(DataGlobal_ABCB7C) + v2);
        }
    while ( v2 < DataGlobal_ABCB88 );
      }
    __3_YAXPAX_Z(v1);
    }
  }
}
}

// ==== BACKFILL 0x00556DF0  Game_Destroy  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_556DF0()
{
{
    int i;
    int *v1;
    int v2;
    int v3;
    int *v4;
    for ( i = 0; i < DataGlobal_ABCB88; ++i )
  {
    v1 = (int *)*((int *)(DataGlobal_ABCB7C) + i);
    if ( v1 )
    {
    v2 = v1[1];
    if ( v2 )
      {
    *(int *)(v2 + 168) = 0;
    v1[1] = 0;
      }
    v4 = v1;
    v3 = (*(int (__thiscall **)(int *, int **))(DataGlobal_ABCB78 + 16))(&DataGlobal_ABCB78, &v4);
    if ( v3 != -1 && v3 < DataGlobal_ABCB88 && v3 < --DataGlobal_ABCB88 )
      {
    do
        {
    ++v3;
    *((int *)(DataGlobal_ABCB7C) + v3 - 1) = *((int *)(DataGlobal_ABCB7C) + v3);
        }
    while ( v3 < DataGlobal_ABCB88 );
      }
    __3_YAXPAX_Z(v1);
    }
  }
    DataGlobal_ABCB88 = 0;
    if ( DataGlobal_ABCB7C && DataGlobal_ABCB85 )
  {
    __3_YAXPAX_Z(DataGlobal_ABCB7C);
    DataGlobal_ABCB7C = 0;
  }
    DataGlobal_ABCB85 = 0;
    DataGlobal_ABCB80 = 0;
}
}

// ==== BACKFILL 0x00557570  CheckListClass::RemoveItem  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CheckListClass::RemoveItem(int a1, int a2) {
{
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      int result;

      v3 = this->CapacityIncrement;
      v4 = this->q06C;
      v5 = this->q0CC;
      this->q064 = a2 + v3 - v4;
      this->q068 = a3;
      this->q0C4 = a2 + v3 - v5;
      v6 = this->q018 - this->q0D0;
      this->q0C8 = v6 + a3;
      v7 = v4;
      if ( v4 <= v5 )
        v7 = v5;
      this->q124 = a2 + v3 - v7;
      result = this->q070;
      this->q128 = result + a3;
      this->q130 = v6 - result;
      if ( v4 <= v5 )
        this->q12C = v5;
      else
        this->q12C = v4;
      return result;
}
} }

// ==== BACKFILL 0x00557800  ListClass::Destru_vt43  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ListClass::Destru_vt43(int a1) {
{
      int result;
      int v4;
      int v5;

      result = a2;
      if ( a2 )
      {
        v4 = *this;
        v5 = (*(int (__thiscall **)(int *, int *))(this->q034 + 16))(this + 13, &a2);
        return (*(int (__thiscall **)(int *, int))(v4 + 168))(this, v5);
      }
      return result;
}
} }

// ==== BACKFILL 0x00557A20  CheckListClass::SetItemState  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CheckListClass::SetItemState(int a1) {
{
      int v3;
      char *v4;

      LOBYTE(v3) = this->IsReadOnly;
      if ( (_BYTE)v3 )
      {
        v4 = this + 280;
        v3 = (*(int (__thiscall **)(_BYTE *, int))(this->subList3 + 176))(this + 280, a2);
        if ( v3 )
        {
          this->q170 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 144))(this + 280);
          LOBYTE(v3) = this->vt18();
        }
      }
      return v3;
}
} }

// ==== BACKFILL 0x00557A70  CheckListClass::OnKeyUp  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CheckListClass::OnKeyUp(int a1) {
{
      int v3;
      char *v4;

      LOBYTE(v3) = this->IsReadOnly;
      if ( (_BYTE)v3 )
      {
        v4 = this + 280;
        v3 = (*(int (__thiscall **)(_BYTE *, int))(this->subList3 + 176))(this + 280, a2);
        if ( v3 )
        {
          this->q170 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 144))(this + 280);
          LOBYTE(v3) = this->vt18();
        }
      }
      return v3;
}
} }

// ==== BACKFILL 0x00557B00  CheckListClass::GetItemCount  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CheckListClass::GetItemCount() {
{
      return this->q16C;
}
} }

// ==== BACKFILL 0x00557BE0  GadgetClass::InitControls  cls=ListClass  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { int GadgetClass::InitControls() {
{
      int v2;
      int v3;

      if ( this->q054 )
        return 0;
      v2 = *(_DWORD *)this;
      this->q054 = 1;
      (*(void (**)(void))(v2 + 72))();
      v3 = this->q058;
      this->q014 -= this->q12C;
      (*(void (__thiscall **)(_BYTE *, _BYTE *))(v3 + 132))(this + 88, this);
      (*(void (__thiscall **)(_BYTE *, _BYTE *))(this->q0B8 + 132))(this + 184, this);
      (*(void (__thiscall **)(_BYTE *, _BYTE *))(this->q118 + 132))(this + 280, this);
      (*(void (__thiscall **)(_BYTE *, _BYTE *))(this->q058 + 12))(this + 88, this);
      (*(void (__thiscall **)(_BYTE *, _BYTE *))(this->q0B8 + 12))(this + 184, this);
      (*(void (__thiscall **)(_BYTE *, _BYTE *))(this->q118 + 12))(this + 280, this);
      (*(void (__thiscall **)(_BYTE *))(this->q058 + 72))(this + 88);
      (*(void (__thiscall **)(_BYTE *))(this->q0B8 + 72))(this + 184);
      (*(void (__thiscall **)(_BYTE *))(this->q118 + 72))(this + 280);
      (*(void (__thiscall **)(_BYTE *, _DWORD))(this->q118 + 136))(this + 280, this->q044);
      (*(void (__thiscall **)(_BYTE *, _DWORD))(this->q118 + 168))(this + 280, this->q050);
      (*(void (__thiscall **)(_BYTE *, _DWORD))(this->q118 + 140))(this + 280, this->q170);
      return 1;
}
} }

// ==== BACKFILL 0x00557CB0  CheckListClass::GetItemData  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CheckListClass::GetItemData() {
{
      int v2;

      if ( !this->IsReadOnly )
        return 0;
      v2 = this->subList3;
      this->CapacityIncrement += this->q12C;
      this->IsReadOnly = 0;
      (*(void (__thiscall **)(_BYTE *))(v2 + 36))(this + 280);
      (*(void (__thiscall **)(_BYTE *))(this->subList1 + 36))(this + 88);
      (*(void (__thiscall **)(_BYTE *))(this->subList2 + 36))(this + 184);
      this->vt18();
      return 1;
}
} }

// ==== BACKFILL 0x00557D10  CheckListClass::KillFocus  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CheckListClass::KillFocus(int a1) {
{
      this->q030 = a2;
      return a2;
}
} }

// ==== BACKFILL 0x00557D20  ListClass::Destru_vt50  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* ListClass::Destru_vt50(int a1, int a2, int a3, int a4, int a5) {
{
      int v7;
      int Type;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;
      int *v14;
      int v15;
      int v17;
      int v18;
      _DWORD v19[2];
      _DWORD v20[4];
      _BYTE v21[16];

      v7 = this->q02C;
      Type = BuildingAnim::GetType();
      if ( a6 )
      {
        BYTE1(v7) |= 0x20u;
        v9 = *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + Type) + 796);
        v10 = *(_DWORD *)(g_FileSystem_THEATER_PAL + 372);
        if ( *(_DWORD *)(g_FileSystem_THEATER_PAL + 4) == 1 )
          v11 = *(unsigned __int8 *)(v10 + v9);
        else
          v11 = *(unsigned __int16 *)(v10 + 2 * v9);
        v20[0] = a3;
        v20[3] = this->q04C;
        v20[1] = a4;
        v20[2] = a5;
        (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 20))(g_DSurface_Hidden_2, v20, v11);
      }
      else if ( (v7 & 0x4000) == 0 )
      {
        BYTE1(v7) |= 0x10u;
      }
      v12 = this->q038;
      v19[0] = a3;
      v13 = this->q030;
      v19[1] = a4;
      v14 = (int *)(v12 + 4 * a2);
      v18 = v13;
      v17 = *((_DWORD *)BuildingTypeClass_AnimTable + Type);
      v15 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2 + 120))(g_DSurface_Hidden_2, v21);
      return FillRectangle(v20, *v14, g_DSurface_Hidden_2, v15, (int)v19, v17, 0, v7, a5, v18);
}
} }

// ==== BACKFILL 0x00557E10  CheckListClass::ddtor  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
int CheckListClass::ddtor(int a2)
{
    if ( this->IsReadOnly )
    {
        this->subList3->Dispatch(a2);
        this->subList2->Dispatch(a2);
        this->subList1->Dispatch(a2);
    }
    return LinkedList::InsertAfter(this, a2);
}

// ==== BACKFILL 0x00557E60  CheckListClass::HitTest  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* CheckListClass::HitTest(int a1) {
{
      if ( this->IsReadOnly )
      {
        (*(void (__thiscall **)(int, int))(this->subList3 + 20))(this + 280, a2);
        (*(void (__thiscall **)(int, int))(this->subList2 + 20))(this + 184, a2);
        (*(void (__thiscall **)(int, int))(this->subList1 + 20))(this + 88, a2);
      }
      return LinkedList::Attach((_DWORD *)this, a2);
}
} }

// ==== BACKFILL 0x00557EB0  CheckListClass::Draw  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CheckListClass::Draw(int a1) {
{
      LinkedList::Append((_DWORD *)this, a2);
      if ( this->IsReadOnly )
      {
        (*(void (__thiscall **)(int, int))(this->subList1 + 16))(this + 88, a2);
        (*(void (__thiscall **)(int, int))(this->subList2 + 16))(this + 184, a2);
        (*(void (__thiscall **)(int, int))(this->subList3 + 16))(this + 280, a2);
      }
      return this->vt6();
}
} }

// ==== BACKFILL 0x00557F00  CheckListClass::OnDblClick  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CheckListClass::OnDblClick() {
{
    if ( this->IsReadOnly )
  {
    (*(void (__thiscall **)(int))(this->subList3 + 36))(this + 280);
    (*(void (__thiscall **)(int))(this->subList2 + 36))(this + 184);
    (*(void (__thiscall **)(int))(this->subList1 + 36))(this + 88);
  }
    return LinkClass::Destroy((int *)this);
}
} }

// ==== BACKFILL 0x00557FD0  CheckListClass::AddItem  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void CheckListClass::AddItem() {
{
    if ( this->IsReadOnly )
  {
    (*(void (__thiscall **)(int))(this->subList1 + 72))(this + 88);
    (*(void (__thiscall **)(int))(this->subList2 + 72))(this + 184);
    (*(void (__thiscall **)(int))(this->subList3 + 72))(this + 280);
  }
    VectorClass_ptr_ConvertClass::MarkDirty((char *)this);
}
} }

// ==== BACKFILL 0x00558060  ListClass::Destru_vt00  cls=ListClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* ListClass::Destru_vt00(int a2) {
{
    char v3;
    GaugeClass *v4;
    void *v5;
    v3 = *(this + 84);
    *(int *)this = &vt_ListClass;
    if ( v3 )
  {
    v4 = (GaugeClass *)*((int *)(this) + 70);
    *((int *)(this) + 5) += *((int *)(this) + 75);
    *(this + 84) = 0;
    ((void (__thiscall *)(char *))v4[1].GaugeClass_field_0x04)(this + 280);
    (*(void (__thiscall **)(char *))(*((int *)(this) + 22) + 36))(this + 88);
    (*(void (__thiscall **)(char *))(*((int *)(this) + 46) + 36))(this + 184);
    (*(void (__thiscall **)(char *))(*(int *)(this) + 72))(this);
  }
    SliderClass::Destructor((int *)(this) + 70);
    ShapeButtonClass::Destructor((int)(this + 184));
    ShapeButtonClass::Destructor((int)(this + 88));
    v5 = (void *)*((int *)(this) + 14);
    *((int *)(this) + 13) = &vt_VectorClass_unsigned_short_const;
    if ( v5 && *(this + 65) )
  {
    __3_YAXPAX_Z(v5);
    *((int *)(this) + 14) = 0;
  }
    *(this + 65) = 0;
    *((int *)(this) + 15) = 0;
    GadgetClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ListClass *)this;
}
} }

// ==== BACKFILL 0x005581A0  sub_5581A0  cls=GaugeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5581A0::sub_5581A0(GaugeClass * aP1)
{
{
    ControlClass::CtorFromData((int *)this, (EditClass *)aP1);
    this->M44 = aP1[1].GaugeClass_field_0x0C;
    this->M45 = BYTE1(aP1[1].GaugeClass_field_0x0C);
    this->M46 = BYTE2(aP1[1].GaugeClass_field_0x0C);
    this->M48 = aP1[1].GaugeClass_field_0x10;
    this->M52 = aP1[1].GaugeClass_field_0x14;
    this->M56 = aP1[1].GaugeClass_field_0x18;
    *(int *)this = &vt_GaugeClass;
    return this;
}
}

// ==== BACKFILL 0x005584F0  sub_5584F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
size_t sub_5584F0(char * a1, void * a2)
{
{
    size_t v2;
    int v3;
    BombClass *v4;
    if ( !a1 || !a2 )
    return 0;
    v2 = *(int *)(a1 + 2);
    v3 = *a1 - 3;
    v4 = (BombClass *)&a1[*((short *)(a1) + 3) + 8];
    if ( v3 )
  {
    if ( v3 != 1 )
    {
    memcpy(a2, (AbstractClass *)v4, v2);
    return v2;
    }
    BitStreamIOLCW((unsigned char *)v4, (unsigned int)a2, v2);
  }
    return v2;
}
}

// ==== BACKFILL 0x005588E0  sub_5588E0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT sub_5588E0(HWND hDlg, int a2, HWND hWnd, int a4)
{
{
    LRESULT result;
    LRESULT v7;
    HWND DlgItem;
    HWND v9;
    HWND v10;
    LRESULT v11;
    result = GetWindowLongA(hDlg, 8);
    v11 = result;
    if ( a2 == 1319 )
  {
    if ( a4 == 1 )
    {
    result = SendMessageA(hWnd, 0x18Bu, 0, 0);
    if ( result > 0 )
      {
    result = SendMessageA(hWnd, 0x188u, 0, 0);
    if ( result != -1 )
        {
    v7 = SendMessageA(hWnd, 0x199u, result, 0);
    if ( *(char *)(v7 + 436) && !*(char *)(v7 + 437) || (v7 = *(int *)(v11 + 12)) != 0 )
          {
    DlgItem = GetDlgItem(hDlg, 1318);
    SendMessageA(DlgItem, 0x4B2u, 0, v7);
          }
    v9 = GetDlgItem(hDlg, 1318);
    SetFocus(v9);
    v10 = GetDlgItem(hDlg, 1318);
    return SendMessageA(v10, 0xB1u, 0, -1);
        }
      }
    }
  }
    else if ( a2 == 1670 )
  {
    if ( !a4 )
    *(int *)(result + 24) = 2;
  }
    else if ( a2 == 1735 && !a4 )
  {
    *(int *)(result + 24) = 1;
  }
    return result;
}
}

// ==== BACKFILL 0x00558A30  sub_558A30  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_558A30(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
{
    int result;
    unsigned int v5;
    LONG WindowLongA;
    LONG v7;
    result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4);
    if ( !result )
  {
    if ( a2 > 0x216 )
    {
    if ( a2 == 1175 )
      {
    SendDlgItemMessageA(hWnd, 1317, 0x4A6u, 0xF9u, 2);
    SendDlgItemMessageA(hWnd, 1317, 0x4A6u, 0x38u, 255);
    SendDlgItemMessageA(hWnd, 1317, 0x4A6u, 0, 315);
      }
    }
    else
    {
    switch ( a2 )
      {
    case 0x216u: return (unsigned char)Window::ClampToScreen((int *)a4);
    case 0xFu: Dialog::StopBink(hWnd);
    return 1;
    case 0x111u: v5 = HIWORD(a3);
    WindowLongA = GetWindowLongA(hWnd, 8);
    v7 = WindowLongA;
    switch ( (unsigned short)a3 )
          {
    case 0x40Fu: if ( !v5 )
              {
    *(int *)(WindowLongA + 24) = 1039;
    return 0;
              }
    break;
    case 0x525u: if ( v5 == 2 && SendMessageA(a4, 0x18Bu, 0, 0) > 0 )
              {
    *(int *)(v7 + 24) = 1039;
    return 0;
              }
    break;
    case 0x686u: *(int *)(WindowLongA + 24) = 2;
    return 0;
          }
    break;
      }
    }
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x00558B90  sub_558B90  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_558B90(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
{
    int result;
    HWND DlgItem;
    result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4);
    if ( !result )
  {
    if ( a2 > 0x216 )
    {
    if ( a2 == 1175 )
      {
    DlgItem = GetDlgItem(hWnd, 1318);
    SendMessageA(DlgItem, 0xC5u, 0x4Fu, 0);
    SendDlgItemMessageA(hWnd, 1319, 0x4A6u, 0xF9u, 2);
    SendDlgItemMessageA(hWnd, 1319, 0x4A6u, 0x38u, 255);
    SendDlgItemMessageA(hWnd, 1319, 0x4A6u, 0, 315);
      }
    else if ( a2 == 1242 )
      {
    *(int *)(GetWindowLongA(hWnd, 8) + 24) = 1;
    return 0;
      }
    }
    else
    {
    switch ( a2 )
      {
    case 0x216u: return (unsigned char)Window::ClampToScreen((int *)a4);
    case 0xFu: Dialog::StopBink(hWnd);
    return 1;
    case 0x111u: sub_5588E0(hWnd, (unsigned short)a3, a4, HIWORD(a3));
    return 0;
      }
    }
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x00558CB0  sub_558CB0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_558CB0(HWND hWnd, unsigned int a2, unsigned int a3, int * a4)
{
{
    int result;
    unsigned int v5;
    LONG WindowLongA;
    result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4);
    if ( !result )
  {
    if ( a2 > 0x216 )
    {
    if ( a2 == 1175 )
      {
    SendDlgItemMessageA(hWnd, 1320, 0x4A6u, 0xF9u, 2);
    SendDlgItemMessageA(hWnd, 1320, 0x4A6u, 0x38u, 255);
    SendDlgItemMessageA(hWnd, 1320, 0x4A6u, 0, 315);
      }
    }
    else
    {
    switch ( a2 )
      {
    case 0x216u: return (unsigned char)Window::ClampToScreen(a4);
    case 0xFu: Dialog::StopBink(hWnd);
    return 1;
    case 0x111u: v5 = HIWORD(a3);
    WindowLongA = GetWindowLongA(hWnd, 8);
    if ( (unsigned short)a3 == 1670 )
          {
    if ( !v5 )
            {
    *(int *)(WindowLongA + 24) = 2;
    return 0;
            }
          }
    else if ( (unsigned short)a3 == 1736 && !v5 )
          {
    *(int *)(WindowLongA + 24) = 1;
    return 0;
          }
    break;
      }
    }
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x005595F0  sub_5595F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5595F0::sub_5595F0(char * Buffer)
{
{
    int v3;
    const char *v5;
    int v6[22];
    char v7[12];
    int v8;
    CCFileClass::Construct3((int)v6);
    do
  {
    v5 = this->M8;
    v3 = rand();
    sprintf(Buffer, DataGlobal_829EE8, v3, v5);
    FileClass::SetFileName(v6, Buffer);
  }
    while ( CCFileClass::Open(v6, 0) == 1 );
    v6[0] = &vt_CCFileClass;
    v8 = 0;
    Vector::Clear((int)v7);
    v6[0] = &DataGlobal_7E1668;
    return BufferIOFileClass::Dtor(v6);
}
}

// ==== BACKFILL 0x00559D60  LoadOptions::AddRef  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
char LoadOptions::AddRef(LPCCH lpMultiByteStr)
{
    int targetRate = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance);
    wchar_t* loadPrompt = GetStringCSF(aTxtLoading, 0, g_Str_File_LoadDlg_CPP, 1052);
    HWND waitBox = CreateMessageBox((LPARAM)loadPrompt, 0, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance);
    if ( waitBox )
        Dialog::Show(waitBox);
    g_BounceClassInit = 0;
    DataGlobal_A8E378[0] = 0;
    WTFMode::Shutdown(g_GameMode_Current);
    char loaded = Game::LoadSaved(lpMultiByteStr);
    while ( (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) < targetRate )
        (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance);
    while ( (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) > targetRate )
        (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance);
    if ( waitBox )
        Dialog::Destroy(waitBox);
    return loaded;

}

// ==== BACKFILL 0x00559E40  LoadOptions::Release  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
char LoadOptions::Release(LPCCH lpMultiByteStr, wchar_t * Source)
{
    wchar_t* savePrompt = GetStringCSF(aTxtSavingGame, 0, g_Str_File_LoadDlg_CPP, 1107);
    HWND waitBox = CreateMessageBox((LPARAM)savePrompt, 0, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance);
    if ( waitBox )
        Dialog::Show(waitBox);
    char saveOk = SaveScenarioClassGame_AdjustMPSaveFileName(lpMultiByteStr, Source, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance);
    if ( waitBox )
        Dialog::Destroy(waitBox);
    return saveOk;
}

// ==== BACKFILL 0x00559EB0  LoadOptions::ddtor  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
bool LoadOptions::ddtor(LPCSTR lpFileName)
{
{
    return DeleteFileA(lpFileName);
}
}

// ==== BACKFILL 0x00559ED0  LoadOptions::Read  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
char LoadOptions::Read(wchar_t * Destination, int a2)
{
{
    const CHAR *v2;
    char v3;
    const wchar_t *v4;
    const wchar_t *v5;
    char *v6;
    int v8[253];
    if ( !Destination && !a2 )
    return 0;
    v2 = (const CHAR *)(a2 + 44);
    if ( !_strcmpi((const void *)(a2 + 44), MultiByteStr) )
    return 0;
    GameState::Reset(v8);
    v3 = LoadOptions_Load(v2, (int)v8);
    if ( !v3 )
    return 0;
    if ( ReadPointerFromECX3(v8) == DataGlobal_83D560 )
  {
    v5 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)v8);
    wcscpy(Destination, v5);
    *((char *)(Destination) + 437) = 0;
  }
    else
  {
    v4 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)v8);
    wcscpy(Destination, v4);
    *((char *)(Destination) + 437) = 1;
  }
    *((char *)(Destination) + 436) = v3;
    *((int *)(Destination) + 72) = LoadOptions::GetFlag99(v8);
    *((int *)(Destination) + 106) = LoadOptions::GetFlag98(v8);
    *((int *)(Destination) + 110) = LoadOptions::GetFlag252(v8);
    strcpy((char *)(Destination) + 256, v2);
    v6 = LoadOptions::GetData((char *)v8);
    wcscpy(Destination + 148, (const wchar_t *)v6);
    if ( !strlen((const char *)(Destination) + 256) )
    strcpy((char *)(Destination) + 256, (const char *)(a2 + 304));
    *((int *)(Destination) + 108) = *(int *)(a2 + 24);
    *((int *)(Destination) + 107) = *(int *)(a2 + 20);
    return 1;
}
}

// ==== BACKFILL 0x0055A050  LoadOptions::Write  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
wchar_t * LoadOptions::Write()
{
{
    return GetStringCSF(aGuiLoadmission, 0, g_Str_File_LoadDlg_CPP, 1216);
}
}

// ==== BACKFILL 0x0055A070  LoadOptions::Seek  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
wchar_t * LoadOptions::Seek()
{
{
    return GetStringCSF(aGuiSavemission, 0, g_Str_File_LoadDlg_CPP, 1222);
}
}

// ==== BACKFILL 0x0055A090  LoadOptions::Open  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
wchar_t * LoadOptions::Open()
{
{
    return GetStringCSF(aGuiDeletemissi, 0, g_Str_File_LoadDlg_CPP, 1228);
}
}

// ==== BACKFILL 0x0055A0B0  LoadOptions::Close  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
wchar_t * LoadOptions::Close()
{
{
    return GetStringCSF(aTxtGameWasSave, 0, g_Str_File_LoadDlg_CPP, 1234);
}
}

// ==== BACKFILL 0x0055A0D0  LoadOptions::QueryInterface  cls=LoadOptions  sig=csp  renamed_refs=0  residual=- ====
LoadOptions * LoadOptions::QueryInterface(char a2)
{
{
    int v3;
    void *v4;
    v3 = 0;
    for ( *(int *)this = &vt_LoadOptionsClass; v3 < *(int *)(this + 48); ++v3 )
    __3_YAXPAX_Z(*(void **)(*((int *)(this) + 9) + 4 * v3));
    (*(void (__thiscall **)(char *))(*((int *)(this) + 8) + 12))(this + 32);
    v4 = (void *)*((int *)(this) + 9);
    *((int *)(this) + 8) = &vt_VectorClass_FileEntryClass;
    if ( v4 && *(this + 45) )
  {
    __3_YAXPAX_Z(v4);
    *((int *)(this) + 9) = 0;
  }
    *(this + 45) = 0;
    *((int *)(this) + 10) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (LoadOptions *)this;
}
}

// ==== BACKFILL 0x0055A710  StreamClass::ResetPosition  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int StreamClass::ResetPosition(LocomotionClass * aP0, int a2)
{
{
    aP0->Owner = (void *)a2;
    *(int *)&aP0->__pad_0[4] = a2;
    return 0;
}
}

// ==== BACKFILL 0x0055A730  Turret::GetTransform  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
float * Turret::GetTransform(signed int a1, float * a2, unsigned int * a3)
{
{
    signed int v3;
    int *v4;
    float *result;
    float v6;
    int v7;
    float v8[12];
    Matrix3x4::Identity(v8);
    v3 = a1;
    a1 = (((unsigned int)((*ProgressTimer::GetValue((short *)(*(int *)(a1 + 8) + 904), &v7) >> 10) + 1) >> 1) & 0x1F)
    - 8;
    v6 = (double)a1 * -0.1963495408493621;
    Matrix2D::Rotate(v8, v6);
    v4 = a3;
    if ( a3 && *a3 != -1 )
  {
    *a3 *= 32;
    *v4 |= ((unsigned int)((*ProgressTimer::GetValue((short *)(*(int *)(v3 + 8) + 904), &a1) >> 10) + 1) >> 1) & 0x1F;
  }
    result = a2;
    qmemcpy(a2, v8, 0x30u);
    return result;
}
}

// ==== BACKFILL 0x0055A8C0  ObjectClass::ComputeScreenYOffset  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ObjectClass::ComputeScreenYOffset(BuildingTypeClass * aP0, unsigned int * a1)
{
{
    IUnknown *v2;
    BuildingTypeClass *v3;
    v2 = (IUnknown *)(*(int (__thiscall **)(int))(**(int **)&aP0->vtable0[8] + 456))(*(int *)&aP0->vtable0[8]);
    v3 = (BuildingTypeClass *)ZCoordToScreenY(v2);
    *a1 = 0;
    *((int*)(a1) + 1) = v3;
    return a1;
}
}

// ==== BACKFILL 0x0055A8F0  StreamClass::SetDirty  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int StreamClass::SetDirty(unsigned char * a1)
{
{
    *((int*)(a1) + 12) = 1;
    return (*(int (__stdcall **)(char *))(*(int *)(a1) + 96))(a1);
}
}

// ==== BACKFILL 0x0055A910  StreamClass::ClearDirty  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int StreamClass::ClearDirty(unsigned char * a1)
{
{
    *((int*)(a1) + 12) = 0;
    return (*(int (__stdcall **)(char *))(*(int *)(a1) + 96))(a1);
}
}

// ==== BACKFILL 0x0055A930  StreamClass::GetDirty  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
char StreamClass::GetDirty(int a1)
{
{
    return *(char *)(a1 + 12);
}
}

// ==== BACKFILL 0x0055A940  JumpjetLocomotionClass::MissionStub  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::MissionStub(int a1)
{
return 0;
}

// ==== BACKFILL 0x0055A950  COM::AddRef  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
LONG COM::AddRef(int a1)
{
{
    ++g_BulletClassPool;
    return InterlockedIncrement((volatile LONG *)(a1 + 20));
}
}

// ==== BACKFILL 0x0055A970  COM::ReleaseRef  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
LONG COM::ReleaseRef(volatile LONG * a1)
{
{
    LONG v1;
    --g_BulletClassPool;
    v1 = InterlockedDecrement(a1 + 5);
    if ( !v1 && a1 )
    (*(void (__thiscall **)(volatile LONG *, int))(*a1 + 32))(a1, 1);
    return v1;
}
}

// ==== BACKFILL 0x0055AA60  LoadIPersistStream  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int IPersistStream_Load(int * a1, int * a2, int a3)
{
{
    int *v3;
    int result;
    int v5;
    int v6;
    int v7;
    int *v8;
    v3 = a2;
    if ( !a2 )
    return -2147467261;
    v5 = *a2;
    v8 = a2;
    a2 = a1;
    result = (*(int (__stdcall **)(int *, int **, int, int))(v5 + 16))(v8, &a2, 4, 0);
    if ( result >= 0 )
  {
    v6 = *v3;
    v7 = (*(int (__thiscall **)(int *, int))(*a1 + 36))(a1, 0);
    result = (*(int (__stdcall **)(int *, int *, int))(v6 + 16))(v3, a1, v7);
    if ( result >= 0 )
    {
    if ( a3 )
    *((char *)(a1) + 17) = 0;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0055AB40  COMObject::GetStringValue  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int COMObject::GetStringValue(int a1, unsigned int * a2)
{
{
    if ( !a2 )
    return -2147467261;
    *a2 = (*(int (__thiscall **)(int))(*(int *)(a1) + 36))(a1) + 4;
    *((int*)(a2) + 1) = 0;
    return 0;
}
}

// ==== BACKFILL 0x0055AB70  JumpjetLocomotionClass::MissionStub2  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::MissionStub2(int a1, int a2)
{
{
    return 0;
}
}

// ==== BACKFILL 0x0055AB80  JumpjetLocomotionClass::MissionStub3  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::MissionStub3(int a1, int a2)
{
return 0;
}

// ==== BACKFILL 0x0055AB90  JumpjetLocomotionClass::Stub10  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub10(int a1)
{
  ;
}

// ==== BACKFILL 0x0055ABA0  JumpjetLocomotionClass::StubReturnFalse  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnFalse(int a1)
{
return 0;
}

// ==== BACKFILL 0x0055ABB0  JumpjetLocomotionClass::CheckState  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::CheckState(TunnelLocomotionClass * aP0)
{
return 2;
}

// ==== BACKFILL 0x0055ABC0  JumpjetLocomotionClass::CheckState2  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::CheckState2(int a1, int a2)

// 0x55ABE0
char JumpjetLocomotionClass::MissionStub4(int a1)
{
return 1;
}

// ==== BACKFILL 0x0055ABD0  COMObject::ReturnZeroPos  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * COMObject::ReturnZeroPos(int a1, unsigned int * a2)
{
{
    *a2 = 0;
    *((int*)(a2) + 1) = 0;
    return a2;
}
}

// ==== BACKFILL 0x0055ABE0  JumpjetLocomotionClass::MissionStub4  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::MissionStub4(int a1)
{
{
    return 1;
}
}

// ==== BACKFILL 0x0055ABF0  JumpjetLocomotionClass::MissionStub5  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::MissionStub5(int a1, int a2)
{
return 0;
}

// ==== BACKFILL 0x0055AC00  JumpjetLocomotionClass::Stub11  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub11(int a1, int a2, int a3, int a4)
{
  ;
}

// ==== BACKFILL 0x0055AC10  JumpjetLocomotionClass::Stub12  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub12(int a1, int a2, int a3, int a4, int a5)
{
  ;
}

// ==== BACKFILL 0x0055AC20  JumpjetLocomotionClass::Stub13  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub13(int a1)
{
  ;
}

// ==== BACKFILL 0x0055AC30  JumpjetLocomotionClass::Stub14  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub14(int a1, int a2)
{
  ;
}

// ==== BACKFILL 0x0055AC40  nullsub_164  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_164(int a1)
{
  ;
}

// ==== BACKFILL 0x0055AC50  JumpjetLocomotionClass::Stub15  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub15(int a1, int a2, int a3, int a4)
{
  ;
}

// ==== BACKFILL 0x0055AC60  JumpjetLocomotionClass::StubReturnTrue_3  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::StubReturnTrue_3(int a1)
{
return 1;
}

// ==== BACKFILL 0x0055AC70  JumpjetLocomotionClass::GetGlobalCoordinate  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetGlobalCoordinate(int a1, unsigned int * a2)
{
{
    int v3;
    int v4;
    v3 = DataGlobal_ABCC7C;
    v4 = DataGlobal_ABCC80;
    *a2 = DataGlobal_ABCC78;
    *((int*)(a2) + 1) = v3;
    *((int*)(a2) + 2) = v4;
    return a2;
}
}

// ==== BACKFILL 0x0055ACA0  COMObject::GetCoord3D  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * COMObject::GetCoord3D(int a1, unsigned int * a2)
{
{
    int *v2;
    int v3;
    int v4;
    v2 = *(int **)(a1 + 8);
    v3 = v2[40];
    v4 = v2[41];
    *a2 = v2[39];
    *((int*)(a2) + 1) = v3;
    *((int*)(a2) + 2) = v4;
    return a2;
}
}

// ==== BACKFILL 0x0055ACD0  JumpjetLocomotionClass::StubReturnZero_11  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::StubReturnZero_11(int a1)
{
return 0;
}

// ==== BACKFILL 0x0055ACE0  JumpjetLocomotionClass::Stub16  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void JumpjetLocomotionClass::Stub16(int a1, int a2)
{
  ;
}

// ==== BACKFILL 0x0055ACF0  JumpjetLocomotionClass::MissionStub10  cls=LocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::MissionStub10(int a1)
{
return 0;
}

// ==== BACKFILL 0x0055AD00  JumpjetLocomotionClass::MissionStub11  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::MissionStub11(int a1)
{
return 0;
}

// ==== BACKFILL 0x0055AD10  COMObject::GetSpecialValue  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int COMObject::GetSpecialValue(int a1)
{
{
    return (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 1336))(*(int *)(a1 + 8));
}
}

// ==== BACKFILL 0x0055AF40  RadarClass::SetGlobal  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void RadarClass::SetGlobal() {
{
    DataGlobal_829FF4 = (int)this;
}
} }

// ==== BACKFILL 0x0055B880  Array::RemoveItemByValue  cls=LogicClass  sig=csp  renamed_refs=0  residual=- ====
void Array::RemoveItemByValue(AbstractClass * aP0, int a2)
{
{
    ParticleSystemClass *v2;
    int v3;
    ParticleSystemClass *v4;
    int v5;
    if ( aP0 )
  {
    if ( (*(int (__thiscall **)(AbstractClass *))(*(int *)aP0->__pad_0 + 44))(aP0) == 44 )
    {
    v2 = *(ParticleSystemClass **)&DataGlobal_89E138.__pad_579C[67588];
    v3 = 0;
    if ( *(int *)&DataGlobal_89E138.__pad_579C[67588] > 0 )
      {
    v4 = *(ParticleSystemClass **)&DataGlobal_89E138.__pad_579C[67576];
    do
        {
    if ( aP0 == *(AbstractClass **)&v4->__pad_0[4 * v3] )
          {
    if ( v3 < (int)v2 )
            {
    v2 = (ParticleSystemClass *)((char *)v2 - 1);
    v5 = v3;
    *(int *)&DataGlobal_89E138.__pad_579C[67588] = v2;
    if ( v3 < (int)v2 )
              {
    do
                {
    *(int *)&v4->__pad_0[4 * v5] = *(int *)&v4->__pad_0[4 * v5 + 4];
    v2 = *(ParticleSystemClass **)&DataGlobal_89E138.__pad_579C[67588];
    v4 = *(ParticleSystemClass **)&DataGlobal_89E138.__pad_579C[67576];
    ++v5;
                }
    while ( v5 < *(int *)&DataGlobal_89E138.__pad_579C[67588] );
              }
            }
    --v3;
          }
    ++v3;
        }
    while ( v3 < (int)v2 );
      }
    }
  }
}
}

// ==== BACKFILL 0x0055BAA0  ObjectClass::SetDeployState  cls=LogicClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectClass::SetDeployState(ObjectClass * aP0, char a2)
{
{
    int v2;
    if ( aP0->isInLogic )
    return 1;
    if ( !DisplayClass::RenderStatusText(v2, (IUnknown *)aP0, a2) )
    return 0;
    aP0->isInLogic = 1;
    return 1;
}
}

// ==== BACKFILL 0x0055BAE0  VectorClass::RemoveItem  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass::RemoveItem(ObjectClass * aP1)
{
{
    ObjectClass *result;
    int v4;
    int v5;
    int v6;
    result = aP1;
    if ( aP1->isInLogic )
  {
    v4 = this->FindItemIndex(&aP1);
    if ( v4 != -1 )
    {
    v5 = this->Count;
    if ( v4 < v5 )
      {
    v6 = v5 - 1;
    for ( this->Count = v6; v4 < this->Count; *(int *)(this->Items + 4 * v4 - 4) = *(int *)(this->Items + 4 * v4) )
    ++v4;
      }
    }
    result = aP1;
    aP1->isInLogic = 0;
  }
    return (int)result->__pad_0;
}
}

// ==== BACKFILL 0x0055BB40  ScenarioClass::ProcessAmbientEffects  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* ScenarioClass::ProcessAmbientEffects(int a2, int a3) {
{
    this->Items = 0;
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_TeamClass;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = a3;
    return this;
    }
    this->Items = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
  }
    return this;
}
} }

// ==== BACKFILL 0x0055BB90  WriteCompressionBlock  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int WriteCompressionBlock(Pipe * aP0, BlowStraw * aP1, CCINIClass * aP2, int * a3, int a5)
{
{
    int result;
    int *v6;
    char *v7;
    int v8;
    char *v9;
    result = 0;
    if ( aP1 )
  {
    if ( (unsigned int)aP1 > 0xD )
    {
    v6 = a3;
    result = CompressLCWBuffer(aP0, (int)aP1, (unsigned char *)aP2, a3, a5);
    if ( result )
    return result;
    }
    else
    {
    aP2->__pad_0[0] = (char)aP1 + 17;
    v7 = &aP2->__pad_0[1];
    do
      {
    *v7++ = aP0->__pad_0[0];
    aP0 = (Pipe *)((char *)(aP0) + 1);
    aP1 = (BlowStraw *)((char *)aP1 - 1);
      }
    while ( aP1 );
    v6 = a3;
    *a3 = v7 - (char *)aP2;
    }
  }
    else
  {
    v6 = a3;
    *a3 = 0;
  }
    v8 = *v6;
    aP2->__pad_0[v8] = 17;
    v9 = &aP2->__pad_0[v8 + 1];
    *v9 = 0;
    v9[1] = 0;
    *v6 += 3;
    return result;
}
}

// ==== BACKFILL 0x0055F980  sub_55F980  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_55F980(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
{
    int result;
    int *WindowLongA;
    wchar_t *StringCSF;
    HWND DlgItem;
    result = BaseDialogProc(hWnd, a2, a3, a4);
    if ( !result )
  {
    WindowLongA = (int *)GetWindowLongA(hWnd, 8);
    if ( a2 == 273 )
    {
    if ( (unsigned short)a3 == 1473 )
      {
    *WindowLongA = 1;
      }
    else if ( (unsigned short)a3 == 1738 )
      {
    *WindowLongA = 2;
    return 0;
      }
    }
    else if ( a2 == 1175 )
    {
    StringCSF = GetStringCSF(aTxtAboutToTryM, 0, g_Str_File_MainOpt_cpp, 162);
    DlgItem = GetDlgItem(hWnd, 1499);
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)StringCSF);
    return 0;
    }
    return 0;
  }
    return result;
}
}
