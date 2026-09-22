// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x004A0180  EnumConnectionsClass::Skip  cls=EnumConnectionsClass  sig=csp  renamed_refs=0  residual=- ====
int EnumConnectionsClass::Skip(int a1)
{
{
    *(int *)(a1 + 28) = 0;
    return 0;
}
}

// ==== BACKFILL 0x004A0450  sub_4A0450  cls=EnumConnectionsClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_4A0450::sub_4A0450()
{
{
    int v2;
    int v3;
    int *v4;
    void *v5;
    int v6;
    v2 = 0;
    for ( *(void**)this = &vt_EnumConnectionsClass; v2 < this->M20; ++v2 )
  {
    v6 = *(int *)(this->M8 + 8 * v2);
    (*(void (__stdcall **)(int))(*(int *)(v6) + 8))(v6);
  }
    v3 = this->M4;
    v4 = this + 1;
    (*(void (__thiscall **)(int *))(v3 + 12))(v4);
    v5 = (void *)v4[1];
    *v4 = &vt_VectorClass_tagCONNECTDATA;
    if ( v5 && *((char *)(v4) + 13) )
  {
    __3_YAXPAX_Z(v5);
    v4[1] = 0;
  }
    *((char *)(v4) + 13) = 0;
    v4[2] = 0;
}
}

// ==== BACKFILL 0x004A05D0  ConnectionPointClass::ddtor  cls=ConnectionPointClass  sig=csp  renamed_refs=0  residual=- ====
int ConnectionPointClass::ddtor(_DWORD *a1, _DWORD *a2)
{
    if ( !a2 )
        return -2147467261;
    *a2 = a1[1];
    a2[1] = a1[2];
    a2[2] = a1[3];
    a2[3] = a1[4];
    return 0;
}

// ==== BACKFILL 0x004A0630  ConnectionPointClass::Unadvise  cls=ConnectionPointClass  sig=csp  renamed_refs=0  residual=- ====
int ConnectionPointClass::Unadvise(int a1, int (__stdcall ***a2)(unsigned int, int, int *) a2, int * a3)
{
{
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    if ( !a2 || !a3 )
    return -2147467261;
    v9 = AbstractClass::updateAITimer(g_ScenarioClass_Instance);
    if ( (**a2)(a2, a1 + 4, &v8) < 0 )
    return -2147220990;
    v4 = *(int *)(a1 + 36);
    if ( *(int *)(a1 + 44) >= v4 )
  {
    if ( !*(char *)(a1 + 41) && v4 )
    return -2147220991;
    v5 = *(int *)(a1 + 48);
    if ( v5 <= 0 || !(*(unsigned char (__thiscall **)(int, int, int))(*(int *)(a1 + 28) + 8))(a1 + 28, v4 + v5, 0) )
    {
    return -2147220991;
    }
  }
    v6 = *(int *)(a1 + 44);
    v7 = *(int *)(a1 + 32);
    *(int *)(a1 + 44) = v6 + 1;
    *(int *)(v7 + 8 * v6) = v8;
    *(int *)(v7 + 8 * v6 + 4) = v9;
    *a3 = v9;
    return 0;
}
}

// ==== BACKFILL 0x004A0700  ConnectionPointClass::EnumConnections  cls=ConnectionPointClass  sig=csp  renamed_refs=0  residual=- ====
int ConnectionPointClass::EnumConnections(int a1, int a2)
{
{
    int v2;
    int v3;
    int *i;
    int v6;
    int v7;
    int v8;
    v2 = 0;
    v3 = *(int *)(a1 + 44);
    if ( v3 <= 0 )
    return -2147220992;
    for ( i = (int *)(*(int *)(a1 + 32) + 4); *i != a2; i += 2 )
  {
    if ( ++v2 >= v3 )
    return -2147220992;
  }
    v6 = *(int *)(a1 + 44);
    if ( v2 < v6 )
  {
    v7 = v6 - 1;
    for ( *(int *)(a1 + 44) = v7; v2 < *(int *)(a1 + 44); *(int *)(v8 + 8 * v2 - 4) = *(int *)(v8 + 8 * v2 + 4) )
    {
    v8 = *(int *)(a1 + 32);
    ++v2;
    *(int *)(v8 + 8 * v2 - 8) = *(int *)(v8 + 8 * v2);
    }
  }
    return 0;
}
}

// ==== BACKFILL 0x004A08D0  sub_4A08D0  cls=ConnectionPointClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_4A08D0::sub_4A08D0()
{
{
    int v2;
    int v3;
    int *v4;
    void *v5;
    v2 = this->M24;
    *(void**)this = &vt_ConnectionPointClass;
    (*(void (__stdcall **)(int))(*(int *)(v2) + 8))(v2);
    v3 = this->M28;
    v4 = this + 7;
    (*(void (__thiscall **)(int *))(v3 + 12))(v4);
    v5 = (void *)v4[1];
    *v4 = &vt_VectorClass_tagCONNECTDATA;
    if ( v5 && *((char *)(v4) + 13) )
  {
    __3_YAXPAX_Z(v5);
    v4[1] = 0;
  }
    *((char *)(v4) + 13) = 0;
    v4[2] = 0;
}
}

// ==== BACKFILL 0x004A0B10  EnumConnectionPointsClass::Skip  cls=EnumConnectionPointsClass  sig=csp  renamed_refs=0  residual=- ====
int EnumConnectionPointsClass::Skip(int a1)
{
{
    *(int *)(a1 + 4) = 0;
    return 0;
}
}

// ==== BACKFILL 0x004A0CE0  sub_4A0CE0  cls=EnumConnectionPointsClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_4A0CE0::sub_4A0CE0(unsigned int * a2)
{
{
    int *v3;
    int v4;
    void *v5;
    int v6;
    int v7;
    int i;
    int v10;
    v3 = this + 3;
    this->M4 = *((int*)(a2) + 1);
    this->M8 = 0;
    this->M16 = 0;
    this->M20 = 0;
    this->M24 = 1;
    this->M25 = 0;
    this->M12 = &vt_VectorClass_IConnectionPoint;
    if ( this + 3 != a2 + 3 )
  {
    VectorClass::CleanupTyped((int)(this + 3));
    v4 = *((int*)(a2) + 5);
    this->M20 = v4;
    if ( v4 )
    {
    v5 = __2_YAPAXI_Z(4 * v4);
    this->M16 = v5;
    if ( v5 )
      {
    v6 = this->M20;
    v7 = 0;
    this->M25 = 1;
    if ( v6 > 0 )
        {
    do
          {
    *(int *)(this->M16 + 4 * v7) = *(int *)(*((int*)(a2) + 4) + 4 * v7);
    ++v7;
          }
    while ( v7 < this->M20 );
        }
      }
    }
    else
    {
    this->M16 = 0;
    this->M25 = 0;
    }
  }
    this->M28 = *((int*)(a2) + 7);
    this->M32 = *((int*)(a2) + 8);
    *v3 = &vt_DynamicVectorClass_IConnectionPoint;
    *(void**)this = &vt_EnumConnectionPointsClass;
    for ( i = 0; i < this->M28; ++i )
  {
    v10 = *(int *)(this->M16 + 4 * i);
    (*(void (__stdcall **)(int))(*(int *)(v10) + 4))(v10);
  }
    return this;
}
}

// ==== BACKFILL 0x004A0DB0  sub_4A0DB0  cls=EnumConnectionPointsClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_4A0DB0::sub_4A0DB0()
{
{
    int v2;
    int v3;
    int *v4;
    void *v5;
    int v6;
    v2 = 0;
    for ( *(void**)this = &vt_EnumConnectionPointsClass; v2 < this->M28; ++v2 )
  {
    v6 = *(int *)(this->M16 + 4 * v2);
    (*(void (__stdcall **)(int))(*(int *)(v6) + 8))(v6);
  }
    v3 = this->M12;
    v4 = this + 3;
    (*(void (__thiscall **)(int *))(v3 + 12))(v4);
    v5 = (void *)v4[1];
    *v4 = &vt_VectorClass_IConnectionPoint;
    if ( v5 && *((char *)(v4) + 13) )
  {
    __3_YAXPAX_Z(v5);
    v4[1] = 0;
  }
    *((char *)(v4) + 13) = 0;
    v4[2] = 0;
}
}

// ==== BACKFILL 0x004A10A0  VectorClass::ClearAndFree2  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void VectorClass::ClearAndFree2()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// ==== BACKFILL 0x004A1330  VectorClass::CleanupTyped  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void VectorClass::CleanupTyped()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// ==== BACKFILL 0x004A1750  CellClass::Cleanup  cls=CellClass  sig=csp  renamed_refs=4  residual=- ====
namespace gamemd { int CellClass::Cleanup() {
{
    short *v2;
    int v3;
    int v4;
    char *v5;
    v2 = this + 6;
    if ( this->vtable4 == DataGlobal_89F7F8 )
    return 0;
    CellClass::DestroyOverlay(v2);
    *(int *)v2 = DataGlobal_89F7F8;
    v3 = *(int *)this;
    if ( *(int *)this != -1 )
  {
    v4 = this->vtable3;
    v5 = (char *)g_CurrentFrame - v3;
    if ( (int)g_CurrentFrame - v3 < v4 )
    {
    *(int *)this = -1;
    this->vtable3 = v4 - (int)v5;
    return 1;
    }
    this->vtable3 = 0;
    *(int *)this = -1;
  }
    return 1;
}
} }

// ==== BACKFILL 0x004A1AA0  CellClass::DestroyOverlay  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::DestroyOverlay() {
{
      ObjectClass *v2;
      int v3;
      int v4;
      int *PlacementRect;
      AnimClass **StartCoords;
      int v7;
      AnimClass *v8;
      AnimClass *v9;
      int v10;
      AnimClass *v11;
      int v12;
      int v13;
      AnimClass *v14;
      int v16;
      AbstractClass *v17;
      int v18[4];
      char v19;
      int v20;

      if ( !LayerClass::CoordinatesLegal(&DataGlobal_87F7E8, this) )
        return 0;
      v2 = (ObjectClass *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)this);
      v17 = (AbstractClass *)v2;
      v3 = v2->ambientSoundController[2];
      if ( v3 == -1 )
        return 0;
      v4 = *(_DWORD *)&g_BuildingTypeClass_Array->__pad_0[4 * v3];
      if ( v4 != *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 248)
        && v4 != *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 252)
        && v4 != *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 256) )
      {
        return 0;
      }
      PlacementRect = BuildingClass::GetPlacementRect((int)v2, (IUnknown *)v18);
      StartCoords = (AnimClass **)House::GetStartCoords((int)v2, (IUnknown *)&v19);
      if ( (int)StartCoords[2] <= 0 || (int)StartCoords[3] <= 0 )
      {
        v14 = (AnimClass *)*PlacementRect;
        v10 = PlacementRect[1];
        v11 = (AnimClass *)PlacementRect[2];
        v12 = PlacementRect[3];
      }
      else
      {
        v7 = PlacementRect[2];
        if ( v7 <= 0 || (v16 = PlacementRect[3], v16 <= 0) )
        {
          v14 = *StartCoords;
          v10 = (int)StartCoords[1];
          v11 = StartCoords[2];
          v12 = (int)StartCoords[3];
        }
        else
        {
          v8 = *StartCoords;
          v9 = (AnimClass *)*PlacementRect;
          v10 = (int)StartCoords[1];
          v11 = StartCoords[2];
          v12 = (int)StartCoords[3];
          if ( (int)v8 > *PlacementRect )
          {
            v11 = (AnimClass *)((char *)v11 + (char *)v8 - (char *)v9);
            v8 = (AnimClass *)*PlacementRect;
          }
          v13 = PlacementRect[1];
          if ( v10 > v13 )
          {
            v12 += v10 - v13;
            v10 = v13;
          }
          if ( (int)v8 + (int)v11 < (int)v9 + v7 )
            v11 = (AnimClass *)((char *)v9 - (char *)v8 + v7 + 1);
          if ( v12 + v10 < v16 + v13 )
            v12 = v16 + v13 - v10 + 1;
          v14 = v8;
          v2 = (ObjectClass *)v17;
        }
      }
      v20 = v10;
      Cell::CreateCrater((int)v14, v10 - *(_DWORD *)&DataGlobal_87F8E4[30400], (int)v11, v12, 0);
      v2->ambientSoundController[2] = -1;
      BYTE2(v2[1].estimatedHealth) = 0;
      return 1;
}
} }

// ==== BACKFILL 0x004A1C10  Power::FinalizeDrain  cls=Power  sig=csp  renamed_refs=0  residual=- ====
int Power::FinalizeDrain(int a2)
{
{
    int v2;
    int result;
    unsigned int i;
    int *v5;
    unsigned int v6;
    int v7;
    v2 = *(int *)&this->__pad_0[4];
    if ( !v2 )
    *(int *)&this->__pad_0[8] = 0;
    this->__pad_0[v2 + 8] = a2;
    result = *(int *)&this->__pad_0[4] + 1;
    *(int *)&this->__pad_0[4] = result;
    if ( result == 4 )
  {
    this->__pad_0[12] = this->__pad_0[4];
    i = *(int *)&this->__pad_0[4] + 1;
    for ( ; i < 4; ++i )
    this->__pad_0[i + 8] = this->__pad_0[8];
    a2 = *(int *)&this->__pad_0[8];
    v5 = &a2;
    v6 = ~*(int *)this->__pad_0;
    v7 = 4;
    do
    {
    v6 = CRC32_Table[*(unsigned char *)v5 ^ (unsigned char)v6] ^ (v6 >> 8);
    v5 = (int *)((char *)(v5) + 1);
    --v7;
    }
    while ( v7 );
    result = ~v6;
    *(int *)this->__pad_0 = result;
    *(int *)&this->__pad_0[4] = 0;
  }
    return result;
}
}

// ==== BACKFILL 0x004A1CA0  Power::FlagProcess  cls=Power  sig=csp  renamed_refs=0  residual=- ====
int Power::FlagProcess(int a2)
{
{
    int v2;
    int result;
    unsigned int i;
    int *v5;
    unsigned int v6;
    int v7;
    v2 = *(int *)&this->__pad_0[4];
    if ( !v2 )
    *(int *)&this->__pad_0[8] = 0;
    this->__pad_0[v2 + 8] = (char)a2 != 0;
    result = *(int *)&this->__pad_0[4] + 1;
    *(int *)&this->__pad_0[4] = result;
    if ( result == 4 )
  {
    this->__pad_0[12] = this->__pad_0[4];
    i = *(int *)&this->__pad_0[4] + 1;
    for ( ; i < 4; ++i )
    this->__pad_0[i + 8] = this->__pad_0[8];
    a2 = *(int *)&this->__pad_0[8];
    v5 = &a2;
    v6 = ~*(int *)this->__pad_0;
    v7 = 4;
    do
    {
    v6 = CRC32_Table[*(unsigned char *)v5 ^ (unsigned char)v6] ^ (v6 >> 8);
    v5 = (int *)((char *)(v5) + 1);
    --v7;
    }
    while ( v7 );
    result = ~v6;
    *(int *)this->__pad_0 = result;
    *(int *)&this->__pad_0[4] = 0;
  }
    return result;
}
}

// ==== BACKFILL 0x004A1D50  Power::TimerProcess  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Power::TimerProcess()
{
{
    int v2;
    return Checksummer::Add_Buffer((unsigned int *)this, (unsigned char *)&v2, 4);
}
}

// ==== BACKFILL 0x004A2030  sub_4A2030  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4A2030::sub_4A2030(Pipe * aP1, int aP2)
{
{
    Checksummer::Add_Buffer(this + 3, (unsigned char *)aP1, (IUnknown *)aP2);
    return (int)Delegate::Dispatch(this, aP1, (Pipe *)aP2);
}
}

// ==== BACKFILL 0x004A20B0  sub_4A20B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4A20B0::sub_4A20B0(Straw * aP1, int aP2)
{
{
    IUnknown *v4;
    if ( !aP1 || aP2 < 1 )
    return 0;
    v4 = (IUnknown *)Delegate::Invoke(this, (int)aP1, (Straw *)aP2);
    Checksummer::Add_Buffer(this + 3, (unsigned char *)aP1, v4);
    return (int)v4;
}
}

// ==== BACKFILL 0x004A2780  Delegate::StreamToBuffer  cls=CacheStraw  sig=csp  renamed_refs=0  residual=- ====
int Delegate::StreamToBuffer(char * a1, int a3)
{
{
    int result;
    char *v5;
    ModemGame *v6;
    Straw *v7;
    int v8;
    int v9;
    ModemGame *v10;
    result = 0;
    v10 = 0;
    if ( *(int *)&this->__pad_0[12] )
  {
    v5 = a1;
    if ( a1 )
    {
    v6 = (ModemGame *)a3;
    if ( a3 > 0 )
      {
    do
        {
    v7 = (Straw *)this->field_1C;
    if ( (int)v7 > 0 )
          {
    if ( (int)v7 >= (int)v6 )
    v7 = (Straw *)v6;
    memcpy(v5, (const void *)(*(int *)&this->__pad_0[12] + *(int *)&this->__pad_14[4]), (size_t)v7);
    v8 = this->field_1C - (int)v7;
    v6 = (ModemGame *)((char *)v6 - (int)v7);
    *(int *)&this->__pad_14[4] += v7;
    v10 = (ModemGame *)((char *)(v10) + (int)v7);
    this->field_1C = v8;
    v5 = &v5[(int)v7];
          }
    if ( !v6 )
    break;
    v9 = Delegate::Invoke(this, *(int *)&this->__pad_0[12], (Straw *)this->field_10);
    this->field_1C = v9;
    *(int *)&this->__pad_14[4] = 0;
    if ( !v9 )
    break;
        }
    while ( (int)v6 > 0 );
    return (int)v10->__pad_0;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x004A2880  sub_4A2880  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_4A2880::sub_4A2880()
{
{
    int v2;
    void *v3;
    void *v4;
    int v5;
    ULONG v6;
    v2 = this->M8;
    *(void**)this = vt_CStreamClass;
    this->M4 = &vt_CStreamClass;
    if ( v2 )
  {
    if ( (unsigned char)this->M17 && this->M20 > 0 && this->M8 )
    IStream::Read(*((IStream **)(this) + 6), *((void **)(this) + 5), v6);
    if ( this->M8 && (*(int (__stdcall **)(int, int))(**((int **)(this) + 2) + 32))(this->M8, 0) >= 0 )
    {
    if ( !this->M8 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int))(**((int **)(this) + 2) + 8))(this->M8);
    this->M8 = 0;
    }
  }
    __3_YAXPAX_Z(*((void **)(this) + 8));
    v3 = (void *)this->M24;
    this->M32 = 0;
    __3_YAXPAX_Z(v3);
    v4 = (void *)this->M28;
    this->M24 = 0;
    __3_YAXPAX_Z(v4);
    this->M28 = 0;
    v5 = this->M8;
    if ( v5 )
    (*(void (__stdcall **)(int))(*(int *)(v5) + 8))(v5);
}
}

// ==== BACKFILL 0x004A2E00  CStreamClass::Read  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::Read(int a1, int a2, int a3, int a4, int a5)
{
{
    if ( *(char *)(a1 + 16) || *(char *)(a1 + 17) )
    return -2147467259;
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int, int, int, int, int))(**(int **)(a1 + 8) + 20))( *(int *)(a1 + 8), a2, a3, a4, a5);
}
}

// ==== BACKFILL 0x004A2E50  CStreamClass::Write  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::Write(int a1, int a2, int a3)
{
{
    if ( *(char *)(a1 + 16) || *(char *)(a1 + 17) )
    return -2147467259;
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int, int, int))(**(int **)(a1 + 8) + 24))(*(int *)(a1 + 8), a2, a3);
}
}

// ==== BACKFILL 0x004A2EA0  CStreamClass::Seek  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::Seek(int a1, int a2, int a3, int a4, int a5, int a6)
{
{
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int, int, int, int, int, int))(**(int **)(a1 + 8) + 28))( *(int *)(a1 + 8), a2, a3, a4, a5, a6);
}
}

// ==== BACKFILL 0x004A2EE0  CStreamClass::SetSize  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::SetSize(int a1, int a2)
{
{
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int, int))(**(int **)(a1 + 8) + 32))(*(int *)(a1 + 8), a2);
}
}

// ==== BACKFILL 0x004A2F10  CStreamClass::Commit  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::Commit(int a1)
{
{
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int))(**(int **)(a1 + 8) + 36))(*(int *)(a1 + 8));
}
}

// ==== BACKFILL 0x004A2F40  CStreamClass::Revert  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::Revert(int a1, int a2, int a3, int a4, int a5, int a6)
{
{
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int, int, int, int, int, int))(**(int **)(a1 + 8) + 40))( *(int *)(a1 + 8), a2, a3, a4, a5, a6);
}
}

// ==== BACKFILL 0x004A2F80  CStreamClass::LockRegion  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::LockRegion(int a1, int a2, int a3, int a4, int a5, int a6)
{
{
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int, int, int, int, int, int))(**(int **)(a1 + 8) + 44))( *(int *)(a1 + 8), a2, a3, a4, a5, a6);
}
}

// ==== BACKFILL 0x004A2FC0  CStreamClass::UnlockRegion  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::UnlockRegion(int a1, int a2, int a3)
{
{
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int, int, int))(**(int **)(a1 + 8) + 48))(*(int *)(a1 + 8), a2, a3);
}
}

// ==== BACKFILL 0x004A2FF0  CStreamClass::Stat  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::Stat(int a1, int a2)
{
{
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int, int))(**(int **)(a1 + 8) + 52))(*(int *)(a1 + 8), a2);
}
}

// ==== BACKFILL 0x004A3110  CStreamClass::ddtor  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
CStreamClass * CStreamClass::ddtor(int a2, char a3)
{
    CStreamClass* blk = this;
    CStreamInner *v4 = blk->streamObj8;
    if ( v4 )
    {
        if ( blk->byte17 && blk->cbSize20 > 0 && !CStreamClass::IsEmpty(&blk->streamObj8, 0) && blk->cbSize20 > 0 )
        {
            IStream::Read(blk->pIStream24, blk->pv20, a2);
        }
        if ( blk->streamObj8 && blk->streamObj8->vtRel32(0) >= 0 )
        {
            if ( !blk->streamObj8 )
                WinAPI::Wrapper(-2147467261);
            blk->streamObj8->vtRel8();
            blk->streamObj8 = 0;
        }
    }
    OperatorDelete(blk->pv32);
    void *v5 = blk->pv24;
    blk->pv32 = 0;
    OperatorDelete(v5);
    void *v6 = blk->pv28;
    blk->pv24 = 0;
    OperatorDelete(v6);
    blk->pv28 = 0;
    CStreamInner *v7 = blk->streamObj8;
    if ( v7 )
        v7->vtRel8();
    if ( a3 & 1 )
        OperatorDelete(blk);
    return blk;
}

// ==== BACKFILL 0x004A31F0  CStreamClass::IsEmpty  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool CStreamClass::IsEmpty(int a2) {
{
    if ( a2 )
    WinAPI::Wrapper(-2147467261);
    return *(void**)this == 0;
}
} }

// ==== BACKFILL 0x004A3220  CStreamClass::IStreamQueryInterface  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
int CStreamClass::IStreamQueryInterface(int a1, const void * a2, unsigned int * a3)
{
{
    return CStreamClass::QueryInterface(a1 - 4, a2, a3);
}
}

// ==== BACKFILL 0x004A3230  CStreamClass::IStreamAddRef  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
LONG CStreamClass::IStreamAddRef(int a1)
{
{
    return CStreamClass::AddRef(a1 - 4);
}
}

// ==== BACKFILL 0x004A3240  CStreamClass::IStreamRelease  cls=CStreamClass  sig=csp  renamed_refs=0  residual=- ====
LONG CStreamClass::IStreamRelease(int a1)
{
{
    return CStreamClass::Release((volatile LONG *)(a1 - 4));
}
}

// ==== BACKFILL 0x004A35F0  Tactical::SetCellTransform  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
char * Tactical::SetCellTransform(int a2, CoordStruct * aP2, int a4, CoordStruct * aP4, int a6, int a7)
{
{
    char *result;
    result = this + 32 * a2;
    *(int *)result = aP2;
    *((int *)(result) + 1) = a4;
    *((int *)(result) + 2) = aP4;
    *((int *)(result) + 6) = a6;
    *((int *)(result) + 7) = a7;
    *((int *)(result) + 3) = 1065353216;
    return result;
}
}

// ==== BACKFILL 0x004A3630  sub_4A3630  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_4A3630::sub_4A3630()
{
{
    this->M98304 = 0;
    return this;
}
}

// ==== BACKFILL 0x004A3B40  FindResource  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HRSRC FindResource(unsigned short a1, const CHAR * a2)
{
{
    HRSRC result;
    result = FindResourceA(*(HMODULE *)&g_CellDirectionOffsets[740], (LPCSTR)a1, a2);
    if ( result )
  {
    result = (HRSRC)LoadResource(*(HMODULE *)&g_CellDirectionOffsets[740], result);
    if ( result )
    return (HRSRC)LockResource(result);
  }
    return result;
}
}

// ==== BACKFILL 0x004A3BF0  ?do_always_noconv_codecvt_base_std__MBE_NXZ_3  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char _do_always_noconv_codecvt_base_std__MBE_NXZ_3()
{
return 1;
}

// ==== BACKFILL 0x004A3C00  CreditsScreen::Init  cls=CreditsScreen  sig=csp  renamed_refs=0  residual=- ====
void CreditsScreen::Init()
{
{
    *(void**)this = 0;
}
}

// ==== BACKFILL 0x004A3FD0  sub_4A3FD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_4A3FD0()
{
{
    HRESULT v0;
    struct IDirectDrawVtbl *lpVtbl;
    int v2;
    CHAR Text[80];
    Debug::Log();
    if ( !g_lpDirectDraw7 )
  {
    v0 = DirectDrawCreate(0, &g_lpDirectDraw7, 0);
    if ( v0 )
    {
    if ( g_DDraw_ErrorCallback )
      {
    g_DDraw_ErrorCallback(v0);
    Debug::Log();
      }
    else
      {
    sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v0);
    MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u);
    Debug::Log();
      }
    }
    else
    {
    lpVtbl = g_lpDirectDraw7->lpVtbl;
    if ( DataGlobal_89F978 )
    v2 = lpVtbl->SetCooperativeLevel(g_lpDirectDraw7, g_hWnd, 8);
    else
    v2 = lpVtbl->SetCooperativeLevel(g_lpDirectDraw7, g_hWnd, 17);
    if ( v2 )
      {
    if ( g_DDraw_ErrorCallback )
        {
    g_DDraw_ErrorCallback(v2);
        }
    else
        {
    sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v2);
    MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u);
        }
      }
    }
  }
}
}

// ==== BACKFILL 0x004A40C0  sub_4A40C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
LPDIRECTDRAW sub_4A40C0()
{
{
    LPDIRECTDRAW result;
    CHAR Text[80];
    result = g_lpDirectDraw7;
    if ( g_lpDirectDraw7 )
  {
    result = (LPDIRECTDRAW)g_lpDirectDraw7->lpVtbl->Release(g_lpDirectDraw7);
    if ( result )
    {
    if ( g_DDraw_ErrorCallback )
      {
    result = (LPDIRECTDRAW)g_DDraw_ErrorCallback(result);
    g_lpDirectDraw7 = 0;
    return result;
      }
    sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, result);
    result = (LPDIRECTDRAW)MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u);
    }
    g_lpDirectDraw7 = 0;
  }
    return result;
}
}

// ==== BACKFILL 0x004A44F0  sub_4A44F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4A44F0()
{
{
    LPDIRECTDRAW result;
    int v2;
    CHAR Buffer[4];
    CHAR Text[76];
    result = g_lpDirectDraw7;
    if ( g_lpDirectDraw7 )
  {
    v2 = ((int (__stdcall *)(LPDIRECTDRAW, int))g_lpDirectDraw7->lpVtbl->RestoreDisplayMode)(g_lpDirectDraw7, a1);
    if ( v2 )
    {
    if ( g_DDraw_ErrorCallback )
      {
    g_DDraw_ErrorCallback(v2);
      }
    else
      {
    sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v2);
    MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u);
      }
    }
    g_DisplayWidth = 0;
    DataGlobal_8A00A8 = 0;
    DataGlobal_8A00AC = 0;
    result = (LPDIRECTDRAW)((int (__cdecl *)(LPDIRECTDRAW))g_lpDirectDraw7->lpVtbl->Release)(g_lpDirectDraw7);
    if ( result )
    {
    if ( g_DDraw_ErrorCallback )
      {
    result = (LPDIRECTDRAW)g_DDraw_ErrorCallback(result);
    g_lpDirectDraw7 = 0;
    return result;
      }
    sprintf(Buffer, g_Str_Trace_DDRAW_DLL_Error_code____08X, result);
    result = (LPDIRECTDRAW)MessageBoxA(g_hWnd, Buffer, g_Str_Direct_X, 0x30u);
    }
    g_lpDirectDraw7 = 0;
  }
    return result;
}
}

// ==== BACKFILL 0x004A45C0  sub_4A45C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4A45C0()
{
{
    int v1[16];
    int v2;
    char Buffer[256];
    if ( !g_lpDirectDraw7 )
    return 0;
    v1[0] = 316;
    if ( g_lpDirectDraw7->lpVtbl->GetCaps(g_lpDirectDraw7, (LPDDCAPS)v1, 0) )
    return 0;
    sprintf(Buffer, DataGlobal_81FE6C, v2);
    return v2;
}
}

// ==== BACKFILL 0x004A4700  sub_4A4700  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_4A4700()
{
{
    HRESULT v0;
    char Buffer[80];
    LOBYTE(v0) = DataGlobal_81FC6C;
    if ( DataGlobal_81FC6C )
  {
    v0 = g_lpDirectDraw7->lpVtbl->WaitForVerticalBlank(g_lpDirectDraw7, 1, 0);
    if ( v0 == -2147467263 )
    {
    DataGlobal_81FC6C = 0;
    }
    else if ( v0 )
    {
    if ( g_DDraw_ErrorCallback )
      {
    LOBYTE(v0) = g_DDraw_ErrorCallback(v0);
      }
    else
      {
    sprintf(Buffer, g_Str_Trace_DDRAW_DLL_Error_code____08X, v0);
    LOBYTE(v0) = MessageBoxA(g_hWnd, Buffer, g_Str_Direct_X, 0x30u);
      }
    }
  }
    return v0;
}
}

// ==== BACKFILL 0x004A4780  Surface::CreateSurfacePalette  cls=Surface  sig=csp  renamed_refs=0  residual=- ====
LPDIRECTDRAW Surface::CreateSurfacePalette()
{
{
    LPDIRECTDRAW result;
    int v3;
    BombClass *v4;
    char *v5;
    char v6;
    char *v7;
    char v8;
    char v9;
    if ( this != (AbstractClass *)&DataGlobal_89E138[6232] )
    memcpy(&DataGlobal_89E138[6232], this, 0x300u);
    result = *(LPDIRECTDRAW *)&DataGlobal_89E138[8028];
    if ( *(int *)&DataGlobal_89E138[8028] )
  {
    v3 = *(int *)&DataGlobal_89E138[8036];
    if ( *(int *)&DataGlobal_89E138[8036] )
    {
    v4 = (BombClass *)this;
    v5 = &DataGlobal_89E138[7005];
    do
      {
    v6 = v4->__pad_0[0];
    v9 = v4->__pad_0[1];
    v7 = &v4->__pad_0[2];
    v5 += 4;
    v8 = *v7;
    *(v5 - 5) = v6;
    v4 = (BombClass *)(v7 + 1);
    *(v5 - 4) = v9;
    *(v5 - 3) = v8;
      }
    while ( (int)v5 < 9044117 );
    result = *(LPDIRECTDRAW *)&DataGlobal_89E138[7000];
    if ( *(int *)&DataGlobal_89E138[7000] )
      {
    if ( !DataGlobal_89E138[8032] )
        {
    (*(void (__stdcall **)(int, int))(*(int *)(v3) + 124))(v3, *(int *)&DataGlobal_89E138[7000]);
    result = *(LPDIRECTDRAW *)&DataGlobal_89E138[7000];
    DataGlobal_89E138[8032] = 1;
        }
    return ((LPDIRECTDRAW (__stdcall *)(LPDIRECTDRAW, int, int, int, char *))result->lpVtbl->CreateSurface)( result, 0, 0, 256, &DataGlobal_89E138[7004]);
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x004A4850  sub_4A4850  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_4A4850(const void * a1, int a2)
{
{
    void *v2;
    int v3;
    int v4;
    int v5;
    int v6;
    v2 = __2_YAPAXI_Z(0x6Cu);
    qmemcpy(v2, a1, 0x6Cu);
    v3 = *(int *)(a2 + 8);
    if ( *(int *)(a2 + 16) < v3 || (*(char *)(a2 + 13) || !v3) && (v4 = *(int *)(a2 + 20), v4 > 0) && (*(unsigned char (__thiscall **)(int, int, int))(*(int *)(a2) + 8))(a2, v3 + v4, 0) )
  {
    v5 = *(int *)(a2 + 16);
    v6 = *(int *)(a2 + 4);
    *(int *)(a2 + 16) = v5 + 1;
    *(int *)(v6 + 4 * v5) = v2;
  }
    return 1;
}
}

// ==== BACKFILL 0x004A4AC0  Debug::Log_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void Debug::Log_0()
{
  ;
}

// ==== BACKFILL 0x004A4E30  sub_4A4E30  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_4A4E30::sub_4A4E30(int a2, int a3)
{
{
    this->M4 = 0;
    this->M8 = a2;
    this->M12 = 1;
    this->M13 = 0;
    *(void**)this = &vt_VectorClass_DDSURFACEDESC;
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

// ==== BACKFILL 0x004A50F0  TechnoClass::checkCloakState  cls=TechnoClass  sig=csp  renamed_refs=1  residual=- ====
namespace ra2 { namespace game { int TechnoClass::checkCloakState() {
{
      this->vtable3 = g_CurrentFrame;
      this->uniqueId = 0;
      this->abstractFlags = 0;
      this->nextArrayIndex = 0;
      this->q019 = 0;
      return this;
}
} } }

// ==== BACKFILL 0x004A5130  BuildingClass::CheckFlag24  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
bool BuildingClass::CheckFlag24()
{
    return HasPower && !IsOverpowered;
}

// ==== BACKFILL 0x004A51B0  BuildingClass::CheckPowerFlags  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
bool BuildingClass::CheckPowerFlags()
{
    if (!HasPower) return false;
    if (IsOverpowered) return false;
    return true;
}

// ==== BACKFILL 0x004A52D0  sub_4A52D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_4A52D0::sub_4A52D0()
{
{
    this->M24 = 0;
    this->M25 = 1;
}
}

// ==== BACKFILL 0x004A52E0  sub_4A52E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_4A52E0::sub_4A52E0()
{
{
    this->M24 = 0;
    this->M25 = 0;
    return 0;
}
}

// ==== BACKFILL 0x004A5950  ?GetNumExternalThreads_SchedulerProxy_details_Concurrency__QAEIXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int E4Recv_4A5950::_GetNumExternalThreads_SchedulerProxy_details_Concurrency__QAEIXZ()
{
{
    return this->M180;
}
}

// ==== BACKFILL 0x004A60E0  TextRenderer::Printf  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TextRenderer::Printf(ConvertClass * aP0, size_t BufferCount, ObjectClass * aP2, ConvertClass * aP3, int a2, int a6, int a7, int a8, CampaignScore * aP8)
{
{
    wchar_t *v9;
    AbstractClass *v11;
    AbstractClass v12[29];
    if ( BufferCount )
  {
    vswprintf( (wchar_t *const)&v12[0].nextArrayIndex, (CampaignScore *)BufferCount, (ObjectClass *)&aP8, (SessionClass *)v12[0].uniqueId);
    *(int *)&v12[0].__pad_0[12] = 1;
    *(int *)&v12[0].__pad_0[8] = a8;
    *(int *)&v12[0].__pad_0[4] = a7;
    *(int *)v12[0].__pad_0 = a6;
    v9 = (wchar_t *)RenderTextLabel((int *)aP2->__pad_0, (AbstractClass *)aP3, (int *)a2, v12[0]);
    *(int *)aP0->__pad_0 = *(int *)v9;
    *(int *)&aP0->field_2[2] = *((int *)(v9) + 1);
    return aP0->__pad_0;
  }
    else
  {
    *(int *)&v12[0].__pad_0[12] = 1;
    *(int *)&v12[0].__pad_0[8] = a8;
    *(int *)&v12[0].__pad_0[4] = a7;
    *(int *)v12[0].__pad_0 = a6;
    v11 = (AbstractClass *)RenderTextLabel((int *)aP2->__pad_0, (AbstractClass *)aP3, (int *)a2, v12[0]);
    *(int *)aP0->__pad_0 = *(int *)v11->__pad_0;
    *(int *)&aP0->field_2[2] = *(int *)&v11->__pad_0[4];
    return aP0->__pad_0;
  }
}
}

// ==== BACKFILL 0x004A6500  FillRectangle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * FillRectangle(IUnknown * aP0, IUnknown * aP1, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    int v12;
    int *v13;
    int v14;
    int v16;
    v12 = Color::ConvertToRGB((unsigned char *)(a6 + 776), (int)&a6);
    LOWORD(v16) = *(short *)v12;
    BYTE2(v16) = *(char *)(v12 + 2);
    v13 = RenderTextLabelWordWrap( &v16, (const wchar_t *)aP1, a3, (int *)a4, (int *)a5, ((unsigned char)v16 >> DataGlobal_89E138[11420] << DataGlobal_89E138[11416]) | (BYTE1(v16) >> DataGlobal_89E138[11436] << DataGlobal_89E138[11432]) | (BYTE2(v16) >> DataGlobal_89E138[11428] << DataGlobal_89E138[11424]), a7, a8, a9, (unsigned int *)a10);
    aP0->field_0 = *v13;
    v14 = v13[1];
    aP0->field_4 = v14;
    return &aP0->field_0;
}
}

// ==== BACKFILL 0x004A7B90  DiskLaserClass::Write  cls=DiskLaserClass  sig=csp  renamed_refs=0  residual=- ====
int DiskLaserClass::Write(AbstractClass * aP0, int aP1)
{
{
    AbstractClass *Prefix_0;
    Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( (int)Prefix_0 >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_DiskLaserClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_DiskLaserClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_DiskLaserClass;
    *(int *)&aP0->__pad_0[12] = &vt_DiskLaserClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].__pad_0[8]);
  }
    return (int)Prefix_0->__pad_0;
}
}

// ==== BACKFILL 0x004A7C10  DiskLaserClass::Seek  cls=DiskLaserClass  sig=csp  renamed_refs=0  residual=- ====
int DiskLaserClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}

// ==== BACKFILL 0x004A7C30  DiskLaserClass::ddtor  cls=DiskLaserClass  sig=csp  renamed_refs=0  residual=- ====
int DiskLaserClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1378929064;
  a2[1] = 1206682730;
  a2[2] = -1786862915;
  a2[3] = 1226661444;
  return 0;
}

// ==== BACKFILL 0x004A7C70  DiskLaserClass::StubReturn64  cls=DiskLaserClass  sig=csp  renamed_refs=0  residual=- ====
int DiskLaserClass::StubReturn64()
{
return 64;
}

// ==== BACKFILL 0x004A7C80  DiskLaserClass::StubReturn73  cls=DiskLaserClass  sig=csp  renamed_refs=0  residual=- ====
int DiskLaserClass::StubReturn73()
{
return 73;
}

// ==== BACKFILL 0x004A7FE0  VectorClass::AppendCopy  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
char VectorClass::AppendCopy(DynamicVector * aP1)
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
    *(int *)(v7 + 4 * v6) = *(int *)aP1->__pad_0;
    return 1;
}
}

// ==== BACKFILL 0x004A83D0  sub_4A83D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool sub_4A83D0(INIClass * aP0)
{
{
    char Buffer[256];
    sprintf(Buffer, &DataGlobal_81FFCC, aP0);
    return MessageBoxA(0, Buffer, aHey, 1u) == 1;
}
}

// ==== BACKFILL 0x004A8410  sub_4A8410  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_4A8410(int a1)
{
return 1;
}

// ==== BACKFILL 0x004A8730  RadarClass::RenderSpySatellite  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* RadarClass::RenderSpySatellite() {
{
      RadarClass::RenderMapPreview((int)this);
      this->q1174 = DataGlobal_8A03F8;
      this->q1178 = 0;
      this->q117A = 0;
      this->q117C = 0;
      this->q1180 = 0;
      this->q1181 = 0;
      this->q1182 = DataGlobal_8A03F8;
      this->q1186 = 0;
      this->q1188 = 0;
      this->q118C = 0;
      this->q1190 = 0;
      this->q1194 = 0;
      this->q1198 = -1;
      this->q119C = 0;
      this->q11A0 = 0;
      this->q11A4 = 0;
      this->q11A8 = 0;
      this->q11AC = -1;
      this->q11B0 = 0;
      this->q11B1 = 0;
      this->q11B2 = 0;
      this->q11B3 = 0;
      this->q11B4 = 0;
      this->q11B8 = -1;
      this->q11BC = 0;
      this->q11C0 = 0;
      this->q11C4 = 0;
      this->q11C8 = 0;
      this->q11CC = 0;
      this->q11CD = 0;
      this->q11CE = 0;
      this->q11CF = 0;
      this->q11D0 = 0;
      this->q11D1 = 0;
      this->q11D4 = 0;
      this->q11D8 = 0;
      this->q11DC = 0;
      this->q11E0 = 0;
      *this = &DisplayClass::`vftable';
      DataGlobal_8A072C = 0;
      DataGlobal_8A03FC = 0;
      DataGlobal_8A0418 = 0;
      return this;
}
} }

// ==== BACKFILL 0x004A8930  DisplayClass::ddtor  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
char DisplayClass::ddtor()
{
    VectorCursor_uint_DynamicVectorClass_uint____13::Get();
    char result = g_ArmageddonMode;
    if ( !g_ArmageddonMode )
    {
        Hash::Reset(DataGlobal_8A06F8);
        return this->InsertOrdered(DataGlobal_8A06F8);
    }
    return result;
}

// ==== BACKFILL 0x004A9700  DisplayClass::Update  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
void DisplayClass::Update(PowerClass * aP1, int a3)
{
{
    VectorCursor_uint_DynamicVectorClass_uint____13::Count(this, (int)aP1, a3);
}
}

// ==== BACKFILL 0x004A9840  DisplayClass::SetCoordVisible  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
bool DisplayClass::SetCoordVisible(IUnknown * aP0, MouseClass * aP1, char a3)
{
{
    if ( aP1->field_0 )
  {
    if ( !a3 )
    return DisplayClass::GetCoordDelta(*(int **)&DataGlobal_87C374[44976], (AbstractClass *)aP0) != -1;
  }
    else if ( !a3 )
  {
    return 0;
  }
    DisplayClass::ScrollTacticalView(*(int **)&DataGlobal_87C374[44976], aP0, (IUnknown *)aP1->field_0);
    return 1;
}
}

// ==== BACKFILL 0x004AA290  BuildingClass::updateSellBack  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int BuildingClass::updateSellBack(void* aP1, void* aP2) {
{
    int *v3;
    v3 = CellCoord::To_CellObj(this, (short *)aP1);
    return Object::FindObjectCell(v3, (TechnoClass *)aP2, 0);
}
} }

// ==== BACKFILL 0x004AAB30  CellClass::CheckBuildablePair  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::CheckBuildablePair(void* a1, void* a2, int a3, int a4, int a5) {
{
    char result;
    void *v8;
    void *v9;
    int *v10;
    int *v11;
    int v12;
    int v13;
    if ( a4 == 4 )
    return 1;
    v8 = CellCoord::To_CellObj(this, (short *)a1);
    result = Cell::IsBuildable((int)v8, a4, 1, 1, (IUnknown *)0xFFFFFFFF, 0, (IUnknown *)0xFFFFFFFF, (IUnknown *)1);
    if ( result )
  {
    v9 = CellCoord::To_CellObj(this, a2);
    result = Cell::IsBuildable((int)v9, a4, 1, 1, a4, (IUnknown *)a5, (IUnknown *)0xFFFFFFFF, (IUnknown *)1);
    if ( result )
    {
    v12 = 0;
    v13 = 0;
    v10 = CellCoord::To_CellObj(this, (short *)a1);
    if ( Object::FindClosestObjectCell(v10, (IUnknown *)&v12, 0, 0) )
      {
    return 0;
      }
    else
      {
    v12 = 0;
    v13 = 0;
    v11 = CellCoord::To_CellObj(this, a2);
    return Object::FindClosestObjectCell(v11, (IUnknown *)&v12, 0, 0) == 0;
      }
    }
  }
    return result;
}
} }

// ==== BACKFILL 0x004AAD20  DisplayClass::vt_entry_B0  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
void DisplayClass::vt_entry_B0(uint32_t unk) {}

// ==== BACKFILL 0x004ACAC0  MapClass::ProcessVisibilityFlags  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::ProcessVisibilityFlags()
{
{
    int i;
    MouseClass *j;
    int *v4;
    int v5;
    int k;
    int m;
    int *v8;
    short v10;
    short v11;
    short v12[2];
    for ( i = 0; i < 512; ++i )
  {
    for ( j = 0; (int)j < 512; j = (MouseClass *)((char *)(j) + 1) )
    {
    v10 = (short)j;
    v11 = i;
    if ( LayerClass::CoordinatesLegal(this, (IUnknown *)&v10) )
      {
    v12[0] = (short)j;
    v12[1] = i;
    v4 = CellCoord::To_CellObj(this, v12);
    v5 = v4[75];
    if ( (v5 & 0x10) == 0 && (v5 & 8) != 0 )
    v4[80] |= 0x20u;
      }
    }
  }
    for ( k = 0; k < 512; ++k )
  {
    for ( m = 0; m < 512; ++m )
    {
    v10 = m;
    v11 = k;
    if ( LayerClass::CoordinatesLegal(this, (IUnknown *)&v10) && (*((char *)CellCoord::To_CellObj(this, &v10) + 320) & 0x20) != 0 )
      {
    v8 = CellCoord::To_CellObj(this, &v10);
    v8[80] &= ~0x20u;
    MapClass::RevealCell(this, (MouseClass *)&v10);
      }
    }
  }
    HouseClass::RevealShroudForAllies(0, 0);
    return this->MarkForRedraw(1);
}
}

// ==== BACKFILL 0x004ACBC0  MapClass::ProcessFogTransition  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::ProcessFogTransition()
{
{
    int i;
    int v3;
    int result;
    int v5;
    LayerClass::CellIteratorReset(this);
    for ( i = LayerClass::CellIteratorNext(this); i; i = LayerClass::CellIteratorNext(this) )
  {
    v3 = *(int *)(i + 320);
    if ( (v3 & 1) == 0 && (v3 & 2) != 0 )
    *(int *)(i + 320) = v3 | 0x40;
  }
    HouseClass::RevealShroudForAllies(0, 1);
    LayerClass::CellIteratorReset(this);
    for ( result = LayerClass::CellIteratorNext(this); result; result = LayerClass::CellIteratorNext(this) )
  {
    if ( (*(char *)(result + 320) & 0x40) != 0 )
    {
    *(int *)(result + 320) &= ~0x40u;
    v5 = *(int *)(result + 36);
    CellClass::ProcessVisibility(this, (MouseClass *)&v5);
    }
  }
    return result;
}
}

// ==== BACKFILL 0x004ACC50  CellClass::ProcessVisibility  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::ProcessVisibility(void* a1) {
{
    char result;
    IUnknown *v5;
    int v6;
    int i;
    int v8;
    IUnknown *v9;
    int AdjacentPassableMask;
    int v11;
    IUnknown *v12;
    IUnknown *v13;
    int v14;
    IUnknown *v15;
    bool aP1a;
    result = LayerClass::CoordinatesLegal(this, (IUnknown *)a1);
    if ( result )
  {
    v5 = (IUnknown *)CellCoord::To_CellObj(this, (short *)a1);
    v15 = v5;
    v6 = v5->field_140;
    aP1a = (v6 & 3) != 0;
    LOBYTE(v6) = v6 & 0xFC;
    v5->__pad_11C[5] = -2;
    v5->field_140 = v6;
    if ( (v5->__pad_11C[16] & 8) != 0 )
    Tactical::AddCellToDrawList(*(int *)&DataGlobal_87F8E4[31296], v5);
    for ( i = 0; i < 8; ++i )
    {
    v8 = i & 7;
    LOWORD(v12) = *((short *)&Direction_X_Offsets.field_0 + 2 * v8) + LOWORD(a1->field_0);
    HIWORD(v12) = HIWORD(a1->field_0) + *((short *)&DataGlobal_89F68A + 2 * v8);
    v13 = v12;
    v9 = (IUnknown *)CellCoord::To_CellObj(this, (short *)&v13);
    v14 = v9->field_24;
    AdjacentPassableMask = Cell::GetAdjacentPassableMask((short *)&v14, 1);
    if ( AdjacentPassableMask != -2 || v9->__pad_11C[5] == -2 )
      {
    v11 = v9->field_140;
    if ( ((v11 & 1) != 0 || AdjacentPassableMask != v9->__pad_11C[5]) && AdjacentPassableMask >= 0 && v9->__pad_11C[5] >= -1 )
        {
    v9->__pad_11C[5] = AdjacentPassableMask;
    v9->field_140 = v11 & 0xFFFFFFFC | 2;
    Tactical::AddCellToDrawList(*(int *)&DataGlobal_87F8E4[31296], v9);
        }
      }
    else
      {
    CellClass::ProcessVisibility(this, (MouseClass *)&v13);
      }
    }
    result = aP1a;
    if ( aP1a )
    return CellClass::CreateFoggedObjects(v15);
  }
    return result;
}
} }

// ==== BACKFILL 0x004ACDA0  MapClass::RevealCell  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
char MapClass::RevealCell(MouseClass * aP1)
{
{
    MouseClass *v2;
    IUnknown *v4;
    int v5;
    int i;
    int v7;
    MouseClass *v9;
    v2 = aP1;
    LOBYTE(v4) = LayerClass::CoordinatesLegal(this, (IUnknown *)aP1);
    if ( (char)v4 )
  {
    v4 = (IUnknown *)CellCoord::To_CellObj(this, (short *)v2);
    v5 = *(int *)&v4->__pad_11C[16];
    if ( (v5 & 8) != 0 )
    {
    *(int *)&v4->__pad_11C[16] = v5 & 0xFFFFFFE7;
    Tactical::AddCellToDrawList(*(int *)&DataGlobal_87F8E4[31296], v4);
    for ( i = 0; i < 8; ++i )
      {
    v7 = i & 7;
    LOWORD(v9) = LOWORD(v2->field_0) + *((short *)&Direction_X_Offsets.field_0 + 2 * v7);
    HIWORD(v9) = HIWORD(v2->field_0) + *((short *)&DataGlobal_89F68A + 2 * v7);
    aP1 = v9;
    v4 = (IUnknown *)CellCoord::To_CellObj(this, (short *)&aP1);
    if ( aP1 != (MouseClass *)v2->field_0 )
        {
    *(int *)&v4->__pad_11C[16] &= ~0x10u;
    LOBYTE(v4) = Tactical::AddCellToDrawList(*(int *)&DataGlobal_87F8E4[31296], v4);
        }
      }
    }
  }
    return (char)v4;
}
}

// ==== BACKFILL 0x004ADA30  ScenarioClass::GetScenarioData  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::GetScenarioData(void* a1, int a2) {
{
      int *v4;
      int v5;
      int v6;
      int *v7;
      char *v8;
      int v9;
      int i;
      _BYTE *v11;
      int v12;
      int v13;
      _DWORD *v14;
      int v15;
      int v17;
      int v18;
      int v19;

      *a2 = *((_DWORD *)g_ScenarioClass_Instance + 1174);
      a2[1] = this->q0EC;
      a2[2] = this->q0F0;
      a2[3] = this->q0F4;
      a2[4] = this->q0F8;
      v4 = a2 + 10;
      v5 = 0;
      a2[5] = this->q0FC;
      v17 = 0;
      a2[6] = this->q100;
      a2[7] = this->altNextScenario;
      a2[8] = this->q108;
      do
      {
        if ( ScenarioClass::Is_Waypoint_Valid((char *)g_ScenarioClass_Instance, v5) )
        {
          *v4 = v5;
          v6 = 125 * *((__int16 *)ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v18, v5) + 1);
          v4 += 2;
          *(v4 - 1) = *(__int16 *)ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v19, v5) + 8 * v6;
          ++v17;
        }
        ++v5;
      }
      while ( v5 < 702 );
      v7 = v4;
      a2[9] = v17;
      v8 = (char *)(v4 + 1);
      v9 = 0;
      LayerClass::CellIteratorReset(this);
      for ( i = LayerClass::CellIteratorNext(this); i; i = LayerClass::CellIteratorNext(this) )
      {
        *(_DWORD *)v8 = *(_DWORD *)(i + 36);
        v11 = v8 + 4;
        *(_DWORD *)v11 = *(_DWORD *)(i + 56);
        v11 += 4;
        *v11++ = *(_BYTE *)(i + 282);
        *v11++ = *(_BYTE *)(i + 283);
        *v11++ = *(_BYTE *)(i + 284);
        *(_DWORD *)v11 = *(_DWORD *)(i + 68);
        v11 += 4;
        *v11++ = *(_BYTE *)(i + 286);
        v12 = 0;
        *v11 = *(_BYTE *)(i + 281);
        v13 = *(_DWORD *)(i + 60);
        v14 = v11 + 1;
        if ( v13 )
        {
          v15 = *(_DWORD *)(v13 + 36);
          if ( v15 )
            v12 = v15;
        }
        *v14 = v12;
        v8 = (char *)(v14 + 1);
        ++v9;
      }
      *v7 = v9;
      return v8 - (char *)a2;
}
} }

// ==== BACKFILL 0x004ADBA0  ScenarioClass::ProcessGame  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int ScenarioClass::ProcessGame(void* a1) {
{
      _DWORD *v3;
      int *v4;
      int v5;
      int v6;
      int *v7;
      int result;
      int v9;
      char *v10;
      char v11;
      char v12;
      int v13;
      char v14;
      int v15;
      int v16;

      *((_DWORD *)g_ScenarioClass_Instance + 1174) = *a2;
      this->q0EC = a2[1];
      this->q0F0 = a2[2];
      this->q0F4 = a2[3];
      v3 = this + 63;
      this->q0F8 = a2[4];
      v4 = a2 + 10;
      *v3 = a2[5];
      v3[1] = a2[6];
      v3[2] = a2[7];
      v3[3] = a2[8];
      if ( (int)a2[9] > 0 )
      {
        v15 = a2[9];
        do
        {
          v5 = *v4;
          v6 = v4[1];
          v4 += 2;
          LOWORD(v16) = v6 % 1000;
          HIWORD(v16) = v6 / 1000;
          ScenarioClass::Set_Waypoint((char *)g_ScenarioClass_Instance, v5, v16);
          --v15;
        }
        while ( v15 );
      }
      v7 = v4 + 1;
      LayerClass::CellIteratorReset(this);
      for ( result = LayerClass::CellIteratorNext(this); result; result = LayerClass::CellIteratorNext(this) )
      {
        v9 = v7[1];
        v10 = (char *)(v7 + 2);
        *(_DWORD *)(result + 56) = v9;
        v11 = *v10++;
        *(_BYTE *)(result + 282) = v11;
        LOBYTE(v9) = *v10++;
        *(_BYTE *)(result + 283) = v9;
        v12 = *v10++;
        *(_BYTE *)(result + 284) = v12;
        v13 = *(_DWORD *)v10;
        v10 += 4;
        *(_DWORD *)(result + 68) = v13;
        v14 = *v10++;
        *(_BYTE *)(result + 286) = v14;
        LOBYTE(v13) = *v10;
        v7 = (int *)(v10 + 5);
        *(_BYTE *)(result + 281) = v13;
      }
      return result;
}
} }

// ==== BACKFILL 0x004AE450  TacticalClass::Initialize  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TacticalClass::Initialize() {
{
    int v2;
    TheatreClass::InitView();
    LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
    v2 = LayerClass::CellIteratorNext(&DataGlobal_87F7E8);
    for ( DataGlobal_ABDC84 = 0; v2; v2 = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
    TacticalClass::SetView(v2, 0, 0x10000, 0, 1000, 1000, 1000);
    return this->computeDistanceSquared(1);
}
} }

// ==== BACKFILL 0x004AE6B0  DisplayClass::Render  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
HWND DisplayClass::Render()
{
{
    HWND result;
    result = hWnd;
    if ( hWnd )
  {
    result = (HWND)CloseWindow(hWnd);
    hWnd = 0;
  }
    return result;
}
}

// ==== BACKFILL 0x004AE6F0  DisplayClass::SetSurface  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
int DisplayClass::SetSurface(unsigned int * a1)
{
{
    int *v1;
    int result;
    v1 = DataGlobal_8A0360;
    do
  {
    result = LayerClass::Load(v1, a1);
    v1 += 6;
  }
    while ( (int)v1 < (int)&DataGlobal_8A03D8 );
    return result;
}
}

// ==== BACKFILL 0x004AE720  DisplayClass::GetSurface  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
int DisplayClass::GetSurface(unsigned int * a1)
{
{
    int *v1;
    int result;
    v1 = DataGlobal_8A0360;
    do
  {
    result = LayerClass::Save(v1, a1);
    if ( result < 0 )
    break;
    v1 += 6;
  }
    while ( (int)v1 < (int)&DataGlobal_8A03D8 );
    return result;
}
}

// ==== BACKFILL 0x004AEB10  MapClass::GetScrollMode  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::GetScrollMode()
{
{
    int result;
    if ( !(unsigned char)this->MapClass_field_0x119C )
    return 0;
    result = this->MapClass_field_0x11A0;
    if ( !result )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x004AEBA0  CheckListClass::COMStub_Return0  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
int CheckListClass::COMStub_Return0()
{
return 0;
}

// ==== BACKFILL 0x004AEBD0  InputManager_ProcessEvents::StubReturnFalse  cls=GScreenClass  sig=csp  renamed_refs=0  residual=- ====
void InputManager_ProcessEvents::StubReturnFalse() {} // 0x4AEBD0

// ==== BACKFILL 0x004AEBF0  DisplayClass::Read  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
DisplayClass * DisplayClass::Read(char a2)
{
{
    MapClass::Destruct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DisplayClass *)this;
}
}

// ==== BACKFILL 0x004AEC30  DisplayClass::processDisplayMode  cls=BufferStraw  sig=csp  renamed_refs=0  residual=- ====
int * DisplayClass::processDisplayMode(char a2)
{
{
    Vector::Clear((int)(this + 3));
    Straw::Dtor((int *)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int *)this;
}
}

// ==== BACKFILL 0x004AEC60  Surface::Construct  cls=Surface  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Surface::Construct(ObjectClass * aP1, IUnknown * aP2)
{
{
    this->Width = aP1;
    this->Height = aP2;
    *(void**)this = &Surface_Vtable;
    return this;
}
}

// ==== BACKFILL 0x004AECA0  GameClass::initDisplay  cls=BufferPipe  sig=csp  renamed_refs=0  residual=- ====
int * GameClass::initDisplay(char a2)
{
{
    Vector::Clear((int)(this + 3));
    Pipe::Dtor((int *)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int *)this;
}
}

// ==== BACKFILL 0x004AECD0  sub_4AECD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4AECD0::sub_4AECD0()
{
{
    int v1;
    HMODULE LibraryA;
    HMODULE v3;
    FARPROC ProcAddress;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    v1 = 0;
    LibraryA = LoadLibraryA(this);
    v3 = LibraryA;
    if ( LibraryA )
  {
    ProcAddress = GetProcAddress(LibraryA, aDllgetversion);
    if ( ProcAddress )
    {
    v7 = 0;
    v6 = 20;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    if ( ((int (__stdcall *)(int *))ProcAddress)(&v6) >= 0 )
    v1 = (unsigned short)v8 | ((unsigned short)v7 << 16);
    }
    FreeLibrary(v3);
  }
    return v1;
}
}

// ==== BACKFILL 0x004AF610  JumpjetLocomotionClass::LoadLocomotionFromStream  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::LoadLocomotionFromStream(unsigned int * a1, unsigned int * a2)
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

// ==== BACKFILL 0x004AF780  DriveLocomotionClass::BeginMove  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT DriveLocomotionClass::BeginMove(int * a1, int * pStm)
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
    *a1 = (int)(unsigned int)vt_DriveLocomotionClass;
    *((int*)(a1) + 1) = (int)&vt_DriveLocomotionClass;
    *((int*)(a1) + 6) = (int)&vt_DriveLocomotionClass_2;
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

// ==== BACKFILL 0x004AF800  DriveLocomotionClass::LoadFromStream  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT DriveLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
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

// ==== BACKFILL 0x004AF8E0  JumpjetLocomotionClass::StubReturnZero  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero(int a1, int a2)
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

// ==== BACKFILL 0x004AF930  JumpjetLocomotionClass::StubReturnZero_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_0(int a1, unsigned int * a2)
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

// ==== BACKFILL 0x004AF970  JumpjetLocomotionClass::CheckPiggybackState  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::CheckPiggybackState(int a1)
{
{
    return !(*(unsigned char (__stdcall **)(int))(*(int *)(a1 - 20) + 16))(a1 - 20)
    && *(int *)(a1 + 80)
    && *(char *)(a1 + 77)
    && !*(char *)(*(int *)(a1 - 12) + 1709);
}
}

// ==== BACKFILL 0x004AFAA0  sub_4AFAA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
double E4Recv_4AFAA0::sub_4AFAA0()
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

// ==== BACKFILL 0x004AFB00  sub_4AFB00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4AFB00::sub_4AFB00(int a2)
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

// ==== BACKFILL 0x004AFB40  JumpjetLocomotionClass::InitMovementState  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::InitMovementState(unsigned int * a1, int a2)
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

// ==== BACKFILL 0x004AFB80  JumpjetLocomotionClass::StubReturnTrue  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::StubReturnTrue(int a1)
{
{
    if ( *(int *)(a1 + 48) != g_DDraw_ClipRect || *(__int64 *)(a1 + 52) != DataGlobal_8A0794 )
    return 1;
    return (*(int *)(a1 + 60) != g_DDraw_ClipRect || *(__int64 *)(a1 + 64) != DataGlobal_8A0794)
    && (*(int *)(a1 + 60) != *(int *)(*(int *)(a1 + 8) + 156) || *(int *)(a1 + 64) != *(int *)(*(int *)(a1 + 8) + 160));
}
}

// ==== BACKFILL 0x004AFC20  JumpjetLocomotionClass::StubReturnTrue_0  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::StubReturnTrue_0(InfantryClass * aP0)
{
{
    if ( TimerClass::Active(*(int *)&aP0->__pad_0[8] + 904) )
    return 1;
    return (*(unsigned char (__stdcall **)(InfantryClass *))(*(int *)aP0->__pad_0 + 16))(aP0)
    && (aP0->ambientSoundController[0] != *(int *)&DataGlobal_89E138[9816] || aP0->ambientSoundController[1] != *(int *)&DataGlobal_89E138[9820] || aP0->ambientSoundController[2] != *(int *)&DataGlobal_89E138[9824])
    && (*(int (__thiscall **)(int))(**(int **)&aP0->__pad_0[8] + 1336))(*(int *)&aP0->__pad_0[8]) > 0;
}
}

// ==== BACKFILL 0x004AFC90  JumpjetLocomotionClass::GetCoordinate  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetCoordinate(unsigned int * a1, unsigned int * a2)
{
unsigned int coordY = a1[13];
unsigned int coordZ = a1[14];
*a2 = a1[12];
a2[1] = coordY;
a2[2] = coordZ;
return a2;
}

// ==== BACKFILL 0x004AFCC0  JumpjetLocomotionClass::GetRenderCoordinate  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    if ( *((int*)(a1) + 15) == g_DDraw_ClipRect && *((__int64 *)(a1) + 8) == DataGlobal_8A0794 )
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

// ==== BACKFILL 0x004AFD40  JumpjetLocomotionClass::ConvertCoordToCell  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::ConvertCoordToCell(int arg0, unsigned int * a1, unsigned int aP1_4, IUnknown * aP3)
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
    if ( result != *(int **)&DataGlobal_89E138[9816] || v5 != *(int *)&DataGlobal_89E138[9820] || v6 != *(IUnknown **)&DataGlobal_89E138[9824] )
          {
    a1 = result;
    aP1_4 = v5;
    aP3 = v6;
    result = Coord::To_Cell(&DataGlobal_87C374[13428], (IUnknown *)&a1);
    if ( (result[80] & 0x100) != 0 )
            {
    result = (int *)(*(int *)&DataGlobal_89E138[9868] + *(int *)(arg0 + 56));
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

// ==== BACKFILL 0x004AFE00  JumpjetLocomotionClass::CheckWindowsErrorWrapper  cls=DriveLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::CheckWindowsErrorWrapper(int a1)
{
{
    int v1;
    int v2;
    double v3;
    int result;
    if ( *(int *)(a1 + 60) != g_DDraw_ClipRect || *(__int64 *)(a1 + 64) != DataGlobal_8A0794 )
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
    *(int *)(a1 + 48) = g_DDraw_ClipRect;
    result = DataGlobal_8A0794;
    *(__int64 *)(a1 + 52) = DataGlobal_8A0794;
    return result;
}
}

// ==== BACKFILL 0x004AFED0  sub_4AFED0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_4AFED0::sub_4AFED0()
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
