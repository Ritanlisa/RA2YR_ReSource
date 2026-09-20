// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x007B0390  FindWDTTerritoryClass  cls=rc_ptr  sig=csp  renamed_refs=0 ====
rc_ptr * FindWDTTerritoryClass(rc_ptr_base * a1, int a2)
{
{
    char v3;
    rc_ptr_base *v4;
    rc_ptr_base v6;
    int v7[4];
    v3 = 0;
    v7[3] = 0;
    FindWDTTerritoryClass_Find((char *)DataGlobal_B77F6C, v7, a2);
    if ( (*(unsigned char (__thiscall **)(int *))(v7[0] + 4))(v7) )
  {
    v4 = (rc_ptr_base *)(*(int *)(*(int *)(v7[1] + 4) + 8 * v7[2] + 4) + 8);
  }
    else
  {
    ComPtr::Constructor(&v6);
    v6.vfptr = &vt_rc_ptr_WDTTerritory;
    v3 = 1;
    v4 = &v6;
  }
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WDTTerritory;
    ComPtr::Set(a1, (int)v4[1].vfptr);
    if ( (v3 & 1) != 0 )
  {
    v6.vfptr = &vt_rc_ptr_WDTTerritory;
    ComPtr::Release(&v6);
  }
    return (rc_ptr *)a1;
}
}

// ==== BACKFILL 0x007B0430  ?do_always_noconv_codecvt_base_std__MBE_NXZ_23  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char _do_always_noconv_codecvt_base_std__MBE_NXZ_23()
{
return 1;
}

// ==== BACKFILL 0x007B1720  IPXInterfaceClass::StubReturnFalse  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0 ====
void IPXInterfaceClass::StubReturnFalse(int a1, int a2)
{
  ;
}

// ==== BACKFILL 0x007B1730  IPXInterfaceClass::GetQueueSize  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0 ====
void IPXInterfaceClass::GetQueueSize()
{
  ;
}

// ==== BACKFILL 0x007B1740  IPXInterfaceClass::COMStub_Return0  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0 ====
int IPXInterfaceClass::COMStub_Return0()
{
return 0;
}

// ==== BACKFILL 0x007B1750  IPXInterfaceClass::Send  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0 ====
int IPXInterfaceClass::Send(int a1)
{
return 0;
}

// ==== BACKFILL 0x007B1770  IPXInterfaceClass::COMStub_Return1  cls=IPXInterfaceClass  sig=csp  renamed_refs=0 ====
int IPXInterfaceClass::COMStub_Return1()
{
return 1;
}

// ==== BACKFILL 0x007B1780  IPXInterfaceClass::COMStub_Ret1139  cls=IPXInterfaceClass  sig=csp  renamed_refs=0 ====
int IPXInterfaceClass::COMStub_Ret1139(int a1)
{
return 1139;
}

// ==== BACKFILL 0x007B1790  IPXInterfaceClass::QueryInterface  cls=IPXInterfaceClass  sig=csp  renamed_refs=0 ====
IPXInterfaceClass * IPXInterfaceClass::QueryInterface(char a2)
{
{
    WinsockInterfaceClass::WinsockInterfaceClass((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (IPXInterfaceClass *)this;
}
}

// ==== BACKFILL 0x007B1FD0  IPXInterfaceClass::SetAddress  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0 ====
int IPXInterfaceClass::SetAddress(unsigned int * a1)
{
{
    int v1;
    int *v2;
    int v3;
    int *v4;
    int result;
    int v6;
    int v7;
    v1 = 0;
    v2 = a1 + 7;
    v3 = *((int*)(a1) + 4);
    *((int*)(a1) + 7) = 0;
    v4 = a1 + 8;
    result = v3 / 4;
    if ( result > 0 )
  {
    do
    {
    v6 = *v4++;
    ComputeHash(v2, v6);
    ++v1;
    result = *((int*)(a1) + 4) / 4;
    }
    while ( v1 < result );
  }
    v7 = *((int*)(a1) + 4) & 3;
    if ( v7 )
    return ComputeHash(v2, *v4 & (0xFFFFFFFF >> (32 - 8 * v7)));
    return result;
}
}

// ==== BACKFILL 0x007B2050  Winsock::VerifyCRC  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0 ====
char Winsock::VerifyCRC(int a1)
{
{
    int v1;
    int v2;
    int v3;
    int *v4;
    int v5;
    int v6;
    v1 = a1;
    v2 = *(int *)(a1 + 16);
    if ( v2 < 640 )
  {
    v3 = 0;
    v4 = (int *)(a1 + 32);
    a1 = 0;
    if ( v2 / 4 > 0 )
    {
    do
      {
    v5 = *v4++;
    ComputeHash(&a1, v5);
    ++v3;
      }
    while ( v3 < *(int *)(v1 + 16) / 4 );
    }
    v6 = *(int *)(v1 + 16) & 3;
    if ( v6 )
    ComputeHash(&a1, *v4 & (0xFFFFFFFF >> (32 - 8 * v6)));
    if ( a1 == *(int *)(v1 + 28) )
    return 1;
    Debug::Log();
  }
    return 0;
}
}

// ==== BACKFILL 0x007B25E0  IPXInterfaceClass::GetAddress  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0 ====
int IPXInterfaceClass::GetAddress(SOCKET s)
{
{
    SOCKET v1;
    int optlen;
    v1 = s;
    optlen = 4;
    getsockopt(s, 0xFFFF, 4103, (char *)&s, &optlen);
    s = 0;
    return setsockopt(v1, 0xFFFF, 4103, (const char *)&s, optlen);
}
}

// ==== BACKFILL 0x007B26D0  IPXInterfaceClass::ReceivePacket  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0 ====
char IPXInterfaceClass::ReceivePacket(char * name, AnimClass * aP1)
{
{
    if ( gethostname((IUnknown *)name, aP1) == -1 )
  {
    WSAGetLastError();
    Debug::Log();
    return 0;
  }
    else
  {
    Debug::Log();
    return 1;
  }
}
}

// ==== BACKFILL 0x007B2720  SessionClass::SetInstance  cls=SessionClass  sig=csp  renamed_refs=0 ====
void SessionClass::SetInstance()
{
{
    DataGlobal_B780A0 = (int)this;
}
}

// ==== BACKFILL 0x007B2740  WinsockInterfaceClass::Destru_vt13  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0 ====
int WinsockInterfaceClass::Destru_vt13()
{
return 0;
}

// ==== BACKFILL 0x007B2750  WinsockInterfaceClass::Destru_vt14  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0 ====
int WinsockInterfaceClass::Destru_vt14(int a1)
{
return 0;
}

// ==== BACKFILL 0x007B2760  WinsockInterfaceClass::Destru_vt15  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0 ====
char WinsockInterfaceClass::Destru_vt15(int a1)
{
return 0;
}

// ==== BACKFILL 0x007B2770  WinsockInterfaceClass::Destru_vt16  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0 ====
int WinsockInterfaceClass::Destru_vt16(int a1, int a2, int a3, int a4)
{
return 1;
}

// ==== BACKFILL 0x007B2780  WinsockInterfaceClass::Destru_vt00  cls=WinsockInterfaceClass  sig=csp  renamed_refs=0 ====
SOCKET * WinsockInterfaceClass::Destru_vt00(char a2)
{
{
    char v3;
    void *v4;
    void *v5;
    void *v6;
    v3 = *((char *)(this) + 258152);
    *(void**)this = (SOCKET)&vt_WinsockInterfaceClass;
    if ( v3 )
  {
    NetworkClass::UnregisterAsync(this);
    (*(void (__thiscall **)(SOCKET *))(*(void**)(this) + 4))(this);
    WSACleanup();
    *((char *)(this) + 258152) = 0;
  }
    v4 = (void *)*(this + 15);
    *(this + 14) = (SOCKET)&vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v4 && *((char *)(this) + 69) )
  {
    __3_YAXPAX_Z(v4);
    *(this + 15) = 0;
  }
    *((char *)(this) + 69) = 0;
    *(this + 16) = 0;
    v5 = (void *)*(this + 9);
    *(this + 8) = (SOCKET)&vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v5 && *((char *)(this) + 45) )
  {
    __3_YAXPAX_Z(v5);
    *(this + 9) = 0;
  }
    *((char *)(this) + 45) = 0;
    *(this + 10) = 0;
    v6 = (void *)*(this + 3);
    *(this + 2) = (SOCKET)&vt_VectorClass_WinsockInterfaceClass_WinsockBufferType;
    if ( v6 && *((char *)(this) + 21) )
  {
    __3_YAXPAX_Z(v6);
    *(this + 3) = 0;
  }
    *((char *)(this) + 21) = 0;
    *(this + 4) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x007B36C0  UDPInterfaceClass_Destru::ddtor  cls=UDPInterfaceClass  sig=csp  renamed_refs=0 ====
short UDPInterfaceClass_Destru::ddtor(WinsockInterfaceClass * aP1, unsigned int arg4, unsigned char * a3, unsigned int a5, WinsockInterfaceClass * aP5, char a7, short a8)
{
    if ( a3 && Network::IsBroadcastAddr(a3) )
        return this->AddRef(aP1, arg4, aP5);
    return AudioQueue::WriteBuffer(this, aP1, arg4, a3, a5, aP5, a7, a8);
}

// ==== BACKFILL 0x007B39D0  sub_7B39D0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_7B39D0::sub_7B39D0(unsigned int * a2, short a3)
{
{
    int v3;
    int v4;
    int *v5;
    short *i;
    v3 = this->M259432;
    v4 = 0;
    if ( v3 <= 0 )
    return 1;
    v5 = this + 64859;
    for ( i = this + 64875; a3 != *i || *a2 != *v5; ++i )
  {
    ++v4;
    ++v5;
    if ( v4 >= v3 )
    return 1;
  }
    return 0;
}
}

// ==== BACKFILL 0x007B40F0  UDPInterfaceClass_Destru::COMStub_Ret2  cls=UDPInterfaceClass  sig=csp  renamed_refs=0 ====
int UDPInterfaceClass_Destru::COMStub_Ret2()
{
return 2;
}

// ==== BACKFILL 0x007B46F0  DeleteAndZero  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void E4Recv_7B46F0::DeleteAndZero()
{
{
    if ( *(void**)this )
    __3_YAXPAX_Z(*(void**)this);
    *(void**)this = 0;
}
}

// ==== BACKFILL 0x007B4860  VectorClass_Wstring::SetCapacity  cls=VectorClass_Wstring  sig=csp  renamed_refs=0 ====
bool VectorClass_Wstring::SetCapacity(const char ** a2)
{
{
    const char *v2;
    v2 = *(int*)this;
    if ( !*(int*)this && !*a2 )
    return 0;
    if ( v2 && *a2 )
    return strcmp(v2, *a2) != 0;
    return 1;
}
}

// ==== BACKFILL 0x007B4AC0  sub_7B4AC0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_7B4AC0::sub_7B4AC0(size_t Count, char * Source)
{
{
    size_t v4;
    char *v5;
    char *v6;
    v4 = Count + 1;
    v5 = (char *)*(void**)this;
    if ( *(void**)this )
    v4 = strlen(*(void**)this) + 1 + Count;
    v6 = (char *)__2_YAPAXI_Z(v4);
    *(void**)this = v6;
    if ( v5 )
    strcpy(v6, v5);
    else
    *v6 = 0;
    if ( Source )
    strncat((char *)*(void**)this, Source, Count);
    if ( v5 )
    __3_YAXPAX_Z(v5);
    return 1;
}
}

// ==== BACKFILL 0x007B4B50  sub_7B4B50  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_7B4B50::sub_7B4B50(char ** a2)
{
{
    const char *v2;
    const char *v4;
    unsigned int v5;
    char *v6;
    size_t v7;
    char *v8;
    char *v10;
    v2 = *a2;
    if ( *a2 )
  {
    v10 = *a2;
    v4 = v2;
  }
    else
  {
    v4 = &g_INI_DefaultBuffer;
    v10 = &g_INI_DefaultBuffer;
  }
    if ( v4 )
  {
    v5 = strlen(v4) + 1;
    v6 = (char *)*(void**)this;
    v7 = v5;
    if ( *(void**)this )
    v7 = strlen(*(void**)this) + v5;
    v8 = (char *)__2_YAPAXI_Z(v7);
    *(void**)this = v8;
    if ( v6 )
    {
    strcpy(v8, v6);
    v4 = v10;
    }
    else
    {
    *v8 = 0;
    }
    strcat((char *)*(void**)this, v4);
    if ( v6 )
    __3_YAXPAX_Z(v6);
  }
    return 1;
}
}

// ==== BACKFILL 0x007B50F0  sub_7B50F0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_7B50F0::sub_7B50F0(char a2)
{
{
    char v3;
    const char *v4;
    unsigned int v6;
    char *v7;
    char *v8;
    v3 = 0;
    v4 = *(void**)this;
    if ( !*(void**)this )
    return 0;
    v6 = strlen(v4);
    v7 = strchr(v4, a2);
    if ( v7 )
  {
    do
    {
    memcpy(v7, v7 + 1, *(void**)this - v7 + v6-- - 1);
    (*(void**)this)[v6] = 0;
    v7 = strchr(*(void**)this, a2);
    }
    while ( v7 );
    v8 = (char *)__2_YAPAXI_Z(strlen(*(void**)this) + 1);
    strcpy(v8, *(void**)this);
    __3_YAXPAX_Z((void *)*(void**)this);
    *(void**)this = v8;
    return 1;
  }
    return v3;
}
}

// ==== BACKFILL 0x007B5360  sub_7B5360  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void E4Recv_7B5360::sub_7B5360(int Size)
{
{
    void *v3;
    if ( *(void**)this )
    __3_YAXPAX_Z(*(void**)this);
    *(void**)this = 0;
    if ( Size >= 0 )
  {
    v3 = __2_YAPAXI_Z(Size);
    *(void**)this = v3;
    memset(v3, 0, Size);
  }
}
}

// ==== BACKFILL 0x007B53B0  sub_7B53B0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int E4Recv_7B53B0::sub_7B53B0(ObjectClass * aP1, size_t Count)
{
{
    unsigned int v4;
    unsigned int result;
    strncpy(aP1->__pad_0, *(void**)this, Count);
    v4 = strlen(*(void**)this) + 1;
    result = v4 - 1;
    if ( v4 - 1 < Count )
  {
    result = 538976288;
    memset(&aP1->__pad_0[v4 - 1], 0x20u, Count - (v4 - 1));
  }
    aP1->__pad_0[Count] = 0;
    return result;
}
}

// ==== BACKFILL 0x007B5410  sub_7B5410  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_7B5410::sub_7B5410(unsigned int a2)
{
{
    const char *v2;
    v2 = *(void**)this;
    if ( a2 >= strlen(*(void**)this) )
    return 0;
    else
    return v2[a2];
}
}

// ==== BACKFILL 0x007B54D0  sub_7B54D0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_7B54D0::sub_7B54D0(const char * Src, unsigned int a3)
{
{
    const char *v4;
    size_t v5;
    const char *v6;
    char *v8;
    v4 = *(void**)this;
    if ( *(void**)this )
  {
    if ( a3 > strlen(*(void**)this) )
    a3 = strlen(v4);
    v8 = (char *)__2_YAPAXI_Z(strlen(v4) + 1 + strlen(Src));
    memset(v8, 0, strlen(*(void**)this) + 1 + strlen(Src));
    strcpy(v8, *(void**)this);
    memcpy(&v8[strlen(Src) + a3], &v8[a3], strlen(*(void**)this) + 1 - a3);
    memcpy(&v8[a3], Src, strlen(Src));
    __3_YAXPAX_Z((void *)*(void**)this);
    *(void**)this = v8;
    return 1;
  }
    else
  {
    *(void**)this = 0;
    if ( Src )
    v5 = strlen(Src) + 1;
    else
    v5 = 1;
    v6 = (const char *)__2_YAPAXI_Z(v5);
    *(void**)this = v6;
    *v6 = 0;
    if ( Src )
    strcpy((char *)*(void**)this, Src);
    return 1;
  }
}
}

// ==== BACKFILL 0x007B5640  sub_7B5640  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_7B5640::sub_7B5640(char a2, unsigned int a3)
{
{
    size_t v4;
    const char *v5;
    unsigned int v7;
    char *v8;
    const char *v9;
    char *v10;
    char v11;
    int v12;
    char v13;
    char v14;
    if ( *(void**)this )
  {
    v7 = strlen(*(void**)this) + 1;
    if ( a3 > v7 - 1 )
    a3 = v7 - 1;
    v8 = (char *)__2_YAPAXI_Z(v7 - 1 + 2);
    v9 = *(void**)this;
    v10 = v8;
    v14 = 0;
    v11 = v9[a3];
    v9[a3] = 0;
    strcpy(v8, *(void**)this);
    (*(void**)this)[a3] = v11;
    v13 = a2;
    strcat(v8, &v13);
    strcat(v8, &(*(void**)this)[a3]);
    __3_YAXPAX_Z((void *)*(void**)this);
    *(void**)this = v10;
    return 1;
  }
    else
  {
    v13 = a2;
    v14 = 0;
    *(void**)this = 0;
    if ( &v12 == (int *)-14 )
    v4 = 1;
    else
    v4 = strlen(&v13) + 1;
    v5 = (const char *)__2_YAPAXI_Z(v4);
    *(void**)this = v5;
    *v5 = 0;
    if ( &v13 )
    strcpy((char *)*(void**)this, &v13);
    return 1;
  }
}
}

// ==== BACKFILL 0x007B5C50  sub_7B5C50  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void E4Recv_7B5C50::sub_7B5C50()
{
{
    unsigned int i;
    char v3;
    for ( i = 0; *(void**)this && i < strlen(*(void**)this); ++i )
  {
    v3 = (*(void**)this)[i];
    if ( v3 >= 97 && v3 <= 122 )
    (*(void**)this)[i] = toupper(v3);
  }
}
}

// ==== BACKFILL 0x007B5CA0  sub_7B5CA0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char ** E4Recv_7B5CA0::sub_7B5CA0(char ** a2)
{
{
    char *v3;
    unsigned int i;
    char v5;
    char *v6;
    v3 = 0;
    if ( *(void**)this )
  {
    v3 = (char *)__2_YAPAXI_Z(strlen(*(void**)this) + 1);
    strcpy(v3, *(void**)this);
  }
    for ( i = 0; v3 && i < strlen(v3); ++i )
  {
    v5 = v3[i];
    if ( v5 >= 97 && v5 <= 122 )
    v3[i] = toupper(v5);
  }
    *a2 = 0;
    if ( v3 )
  {
    v6 = (char *)__2_YAPAXI_Z(strlen(v3) + 1);
    *a2 = v6;
    strcpy(v6, v3);
    __3_YAXPAX_Z(v3);
  }
    return a2;
}
}

// ==== BACKFILL 0x007B5E30  CChatEventSink::EncodeString  cls=CChatEventSink  sig=csp  renamed_refs=0 ====
char CChatEventSink::EncodeString(char a2)
{
{
    char *v4;
    size_t v5;
    size_t v6;
    char *v7;
    char *v8;
    char *v9;
    const char *v10;
    size_t v11;
    const char *v12;
    if ( !*(void**)this )
    return 0;
    v4 = strchr(*(void**)this, a2);
    if ( !v4 )
    return 0;
    v5 = v4 - *(void**)this;
    v6 = v5;
    v7 = &g_INI_DefaultBuffer;
    if ( *(void**)this )
    v7 = (char *)*(void**)this;
    v8 = (char *)__2_YAPAXI_Z(v5 + 1);
    v9 = v8;
    *v8 = 0;
    if ( v7 )
    strncpy(v8, v7, v6);
    v9[v6] = 0;
    v10 = &g_INI_DefaultBuffer;
    if ( v9 )
    v10 = v9;
    if ( *(void**)this )
    __3_YAXPAX_Z((void *)*(void**)this);
    *(void**)this = 0;
    if ( v10 )
    v11 = strlen(v10) + 1;
    else
    v11 = 1;
    v12 = (const char *)__2_YAPAXI_Z(v11);
    *(void**)this = v12;
    *v12 = 0;
    if ( v10 )
    strcpy((char *)*(void**)this, v10);
    if ( v9 )
    __3_YAXPAX_Z(v9);
    return 1;
}
}

// ==== BACKFILL 0x007B6280  ??1_Timevec_std__QAE_XZ  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void E4Recv_7B6280::__1_Timevec_std__QAE_XZ()
{
{
    atoi(*(void**)this);
}
}

// ==== BACKFILL 0x007B6290  FromStringInt  cls=unknown  sig=csp  renamed_refs=0 ====
char ** FromStringInt(IUnknown * aP0, int a2)
{
{
    size_t v3;
    char *v4;
    char Buffer[16];
    sprintf(Buffer, (ObjectClass *)&DataGlobal_817F40.fallRate, (INIClass *)a2);
    aP0->field_0 = 0;
    if ( Buffer )
    v3 = strlen(Buffer) + 1;
    else
    v3 = 1;
    v4 = (char *)__2_YAPAXI_Z(v3);
    aP0->field_0 = (int)v4;
    *v4 = 0;
    if ( Buffer )
    strcpy((char *)aP0->field_0, Buffer);
    return (char **)aP0;
}
}

// ==== BACKFILL 0x007B6320  FormatStringInt  cls=unknown  sig=csp  renamed_refs=0 ====
char ** FormatStringInt(INIClass * aP0, MPCooperative * aP1, ObjectClass * aP2)
{
{
    size_t v5;
    char *v6;
    char Buffer[16];
    sprintf(Buffer, (ObjectClass *)&DataGlobal_84DD9C.__pad_71C[212], (INIClass *)aP2);
    sprintf(Buffer, (ObjectClass *)Buffer, (INIClass *)aP1);
    *(int *)aP0->__pad_0 = 0;
    if ( Buffer )
    v5 = strlen(Buffer) + 1;
    else
    v5 = 1;
    v6 = (char *)__2_YAPAXI_Z(v5);
    *(int *)aP0->__pad_0 = v6;
    *v6 = 0;
    if ( Buffer )
    strcpy(*(char **)aP0->__pad_0, Buffer);
    return (char **)aP0;
}
}

// ==== BACKFILL 0x007B6630  ValidateStringContains  cls=unknown  sig=csp  renamed_refs=0 ====
bool String_ValidateContains(const char ** a1, const char * a2, char * Control)
{
{
    return Control && *a1 && strcspn(*a1, Control) < strlen(a2);
}
}

// ==== BACKFILL 0x007B69F0  sub_7B69F0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_7B69F0::sub_7B69F0(size_t Count, wchar_t * Source)
{
{
    size_t v4;
    wchar_t *v5;
    wchar_t *v6;
    v4 = Count + 1;
    v5 = (wchar_t *)*(void**)this;
    if ( *(void**)this )
    v4 += wcslen(*(void**)this);
    v6 = (wchar_t *)__2_YAPAXI_Z(4 * v4);
    *(void**)this = v6;
    if ( v5 )
    wcscpy(v6, v5);
    else
    *v6 = 0;
    if ( Source )
    wcsncat((wchar_t *)*(void**)this, Source, Count);
    if ( v5 )
    __3_YAXPAX_Z(v5);
    return 1;
}
}

// ==== BACKFILL 0x007B6A60  sub_7B6A60  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_7B6A60::sub_7B6A60(ObjectClass * aP1)
{
{
    wchar_t *v2;
    ObjectClass *v4;
    size_t v5;
    wchar_t *v6;
    v2 = *(wchar_t **)aP1->__pad_0;
    if ( *(int *)aP1->__pad_0 || (v2 = (wchar_t *)&DataGlobal_87C374.__pad_579C[23588], &DataGlobal_87C374 != (IUnknown *)-46016) )
  {
    v4 = (ObjectClass *)*(void**)this;
    v5 = wcslen(v2) + 1;
    if ( v4 )
    v5 += wcslen((const wchar_t *)v4);
    v6 = (wchar_t *)__2_YAPAXI_Z(4 * v5);
    *(void**)this = v6;
    if ( v4 )
    wcscpy(v6, (const wchar_t *)v4);
    else
    *v6 = 0;
    wcscat(*(void**)this, (CampaignScore *)v2);
    if ( v4 )
    __3_YAXPAX_Z(v4);
  }
    return 1;
}
}

// ==== BACKFILL 0x007B6EE0  sub_7B6EE0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
short E4Recv_7B6EE0::sub_7B6EE0(const wchar_t ** a2)
{
{
    unsigned int i;
    void *v4;
    const wchar_t *v5;
    for ( i = 0; ; ++i )
  {
    v4 = (void *)*(void**)this;
    if ( !*(void**)this )
    break;
    v4 = (void *)wcslen(*(void**)this);
    if ( i >= (unsigned int)v4 )
    break;
    v5 = *a2;
    if ( !*a2 )
    v5 = &g_TypeClass_DefaultString;
    v4 = wcschr(v5, (*(void**)this)[i]);
    if ( !v4 )
    break;
  }
    if ( i )
    LOWORD(v4) = WideString::Erase(this, 0, i);
    return (short)v4;
}
}

// ==== BACKFILL 0x007B70B0  sub_7B70B0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
size_t E4Recv_7B70B0::sub_7B70B0(ObjectClass * aP1, size_t Count)
{
{
    size_t result;
    char *v5;
    unsigned int v6;
    char v7;
    char *v8;
    int i;
    wcsncpy((wchar_t *)aP1, *(void**)this, Count);
    result = wcslen(*(void**)this);
    if ( result < Count )
  {
    v5 = &aP1->__pad_0[2 * result];
    v6 = Count - result;
    result = 2097184;
    v7 = v6 & 1;
    v6 >>= 1;
    memset32(v5, 2097184, v6);
    v8 = &v5[4 * v6];
    for ( i = v7; i; --i )
    {
    *(short *)v8 = 32;
    v8 += 2;
    }
  }
    *(short *)&aP1->__pad_0[2 * Count] = 0;
    return result;
}
}

// ==== BACKFILL 0x007B7110  MSPrintAnim::GetCharAt  cls=MSPrintAnim  sig=csp  renamed_refs=0 ====
wchar_t MSPrintAnim::GetCharAt(size_t a2)
{
{
    if ( a2 >= wcslen(*(void**)this) )
    return 0;
    else
    return (*(void**)this)[a2];
}
}

// ==== BACKFILL 0x007B7DD0  FormatWideString  cls=unknown  sig=csp  renamed_refs=0 ====
CampaignScore * FormatWideString(wchar_t ** a1, const wchar_t * a2)
{
{
    size_t v3;
    wchar_t *v4;
    CampaignScore *v6;
    wchar_t String[32];
    swprintf(String, (const size_t)&g_Str_Fmt_PctD, a2, v6);
    *a1 = 0;
    if ( String )
    v3 = wcslen(String) + 1;
    else
    v3 = 1;
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3);
    *a1 = v4;
    *v4 = 0;
    if ( String )
    wcscpy(*a1, String);
    return (CampaignScore *)a1;
}
}

// ==== BACKFILL 0x007B7E40  WDTGame_Helper  cls=unknown  sig=csp  renamed_refs=0 ====
wchar_t ** WDTGame_Helper(CampaignScore * aP0, const wchar_t * a1, wchar_t * Format)
{
{
    size_t v5;
    short *v6;
    CampaignScore *v8;
    CampaignScore *v9;
    wchar_t String[32];
    swprintf(String, (const size_t)&DataGlobal_84DD9C.__pad_71C[220], Format, v9);
    swprintf(String, (const size_t)String, a1, v8);
    *(int *)aP0->__pad_0 = 0;
    if ( String )
    v5 = wcslen(String) + 1;
    else
    v5 = 1;
    v6 = (short *)__2_YAPAXI_Z(2 * v5);
    *(int *)aP0->__pad_0 = v6;
    *v6 = 0;
    if ( String )
    wcscpy(*(wchar_t **)aP0->__pad_0, String);
    return (wchar_t **)aP0;
}
}

// ==== BACKFILL 0x007B7ED0  CharStringToWide  cls=unknown  sig=csp  renamed_refs=0 ====
wchar_t ** CharStringToWide(ObjectClass * aP0, const char ** a1)
{
{
    int v4;
    AbstractClass *v5;
    char *v6;
    size_t v7;
    CCINIClass *v8;
    CCINIClass *v9;
    size_t v10;
    wchar_t *v11;
    if ( *a1 )
    v4 = strlen(*a1);
    else
    v4 = 0;
    v5 = (AbstractClass *)__2_YAPAXI_Z(2 * v4 + 2);
    v6 = (char *)*a1;
    if ( !*a1 )
    v6 = &DataGlobal_87C374.__pad_579C[33876];
    BulkCharToWide(v5, (unsigned char *)v6, v4);
    if ( v5 )
    v7 = wcslen((const wchar_t *)v5) + 1;
    else
    v7 = 1;
    v8 = (CCINIClass *)__2_YAPAXI_Z(2 * v7);
    v9 = v8;
    *(short *)v8->__pad_0 = 0;
    if ( v5 )
    wcscpy((wchar_t *)v8, (const wchar_t *)v5);
    __3_YAXPAX_Z(v5);
    *(int *)aP0->__pad_0 = 0;
    if ( v9 )
  {
    v10 = wcslen((const wchar_t *)v9);
    v11 = (wchar_t *)__2_YAPAXI_Z(2 * v10 + 2);
    *(int *)aP0->__pad_0 = v11;
    wcscpy(v11, (const wchar_t *)v9);
    __3_YAXPAX_Z(v9);
  }
    return (wchar_t **)aP0;
}
}

// ==== BACKFILL 0x007B7F90  ToWideStringCharAlt  cls=unknown  sig=csp  renamed_refs=0 ====
char ** sub_7B7F90(char ** a1, const wchar_t ** a2)
{
{
    char **v3;
    size_t v4;
    char *v5;
    wchar_t *v6;
    size_t v7;
    char *v8;
    char *v9;
    v3 = a1;
    if ( *a2 )
    v4 = wcslen(*a2);
    else
    v4 = 0;
    v5 = (char *)__2_YAPAXI_Z(v4 + 1);
    v6 = (wchar_t *)*a2;
    if ( !*a2 )
    v6 = &g_TypeClass_DefaultString;
    CopyWideToChar(v5, (char *)v6, v4);
    if ( v5 )
    v7 = strlen(v5) + 1;
    else
    v7 = 1;
    v8 = (char *)__2_YAPAXI_Z(v7);
    *v8 = 0;
    if ( v5 )
  {
    strcpy(v8, v5);
    v3 = a1;
  }
    __3_YAXPAX_Z(v5);
    *v3 = 0;
    if ( !v8 )
    return v3;
    v9 = (char *)__2_YAPAXI_Z(strlen(v8) + 1);
    *v3 = v9;
    strcpy(v9, v8);
    __3_YAXPAX_Z(v8);
    return a1;
}
}

// ==== BACKFILL 0x007B8090  FormatWideStringPrefix  cls=unknown  sig=csp  renamed_refs=0 ====
wchar_t ** FormatWideStringPrefix(CampaignScore * aP0, const wchar_t * a1, wchar_t ** a2)
{
{
    size_t v5;
    wchar_t *v6;
    wchar_t *v7;
    size_t v8;
    CampaignScore *v9;
    size_t v10;
    wchar_t *v11;
    CampaignScore *v12;
    CCINIClass *String;
    if ( a1 )
    v5 = wcslen(a1) + 1;
    else
    v5 = 1;
    v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5);
    v7 = v6;
    *v6 = 0;
    if ( a1 )
    wcscpy(v6, a1);
    String = 0;
    if ( v7 )
  {
    v8 = wcslen(v7);
    String = (CCINIClass *)__2_YAPAXI_Z(2 * v8 + 2);
    wcscpy((wchar_t *)String, v7);
  }
    v9 = (CampaignScore *)*a2;
    if ( !*a2 )
    v9 = (CampaignScore *)&DataGlobal_87C374.__pad_579C[23588];
    WString::Append((wchar_t **)&String, v9);
    *(int *)aP0->__pad_0 = 0;
    if ( String )
  {
    v10 = wcslen((const wchar_t *)String);
    v11 = (wchar_t *)__2_YAPAXI_Z(2 * v10 + 2);
    v12 = (CampaignScore *)String;
    *(int *)aP0->__pad_0 = v11;
    wcscpy(v11, (const wchar_t *)v12);
    if ( String )
    __3_YAXPAX_Z(String);
  }
    if ( v7 )
    __3_YAXPAX_Z(v7);
    return (wchar_t **)aP0;
}
}

// ==== BACKFILL 0x007B8170  ConcatWString  cls=unknown  sig=csp  renamed_refs=0 ====
wchar_t ** ConcatWString(GameSetup * aP0, const wchar_t ** a1, const wchar_t ** a2)
{
{
    wchar_t **v4;
    wchar_t *v5;
    size_t v6;
    wchar_t *v7;
    CCINIClass *v8;
    size_t v9;
    wchar_t *v10;
    size_t v11;
    wchar_t *v12;
    v4 = (wchar_t **)aP0;
    v5 = 0;
    if ( *a1 )
  {
    v6 = wcslen(*a1);
    v5 = (wchar_t *)__2_YAPAXI_Z(2 * v6 + 2);
    wcscpy(v5, *a1);
  }
    v7 = (wchar_t *)*a2;
    if ( *a2 || (v7 = (wchar_t *)&DataGlobal_87C374.__pad_579C[23588], &DataGlobal_87C374 != (IUnknown *)-46016) )
  {
    v8 = (CCINIClass *)v5;
    v9 = wcslen(v7) + 1;
    if ( v5 )
    v9 += wcslen(v5);
    v10 = (wchar_t *)__2_YAPAXI_Z(4 * v9);
    v5 = v10;
    if ( v8 )
    wcscpy(v10, (const wchar_t *)v8);
    else
    *v10 = 0;
    wcscat(v5, (CampaignScore *)v7);
    if ( v8 )
    __3_YAXPAX_Z(v8);
    v4 = (wchar_t **)aP0;
  }
    *v4 = 0;
    if ( v5 )
  {
    v11 = wcslen(v5);
    v12 = (wchar_t *)__2_YAPAXI_Z(2 * v11 + 2);
    *v4 = v12;
    wcscpy(v12, v5);
    __3_YAXPAX_Z(v5);
  }
    return v4;
}
}

// ==== BACKFILL 0x007B8250  sub_7B8250  cls=ObjectClass  sig=csp  renamed_refs=0 ====
bool E4Recv_7B8250::sub_7B8250(wchar_t * Control)
{
{
    size_t v3;
    if ( !Control || !*(void**)this )
    return 0;
    v3 = wcslen(*(void**)this);
    return wcscspn(*(void**)this, Control) < v3;
}
}

// ==== BACKFILL 0x007B82E0  Game_Set  cls=unknown  sig=csp  renamed_refs=0 ====
char ** sub_7B82E0(char ** a1, const wchar_t ** a2)
{
{
    const wchar_t *v3;
    int v4;
    char *v5;
    wchar_t *v6;
    size_t v7;
    char *v8;
    char *v9;
    v3 = *a2;
    if ( *a2 )
    v3 = (const wchar_t *)wcslen(*a2);
    v4 = 16 * ((int)v3 + 1);
    v5 = (char *)__2_YAPAXI_Z((v4 + 6) / 7);
    v6 = (wchar_t *)*a2;
    if ( !*a2 )
    v6 = &g_TypeClass_DefaultString;
    BinkMovieClass::AllocateRenderSurface(v6, v5, v4);
    if ( v5 )
    v7 = strlen(v5) + 1;
    else
    v7 = 1;
    v8 = (char *)__2_YAPAXI_Z(v7);
    *v8 = 0;
    if ( v5 )
    strcpy(v8, v5);
    __3_YAXPAX_Z(v5);
    *a1 = 0;
    if ( v8 )
  {
    v9 = (char *)__2_YAPAXI_Z(strlen(v8) + 1);
    *a1 = v9;
    strcpy(v9, v8);
    __3_YAXPAX_Z(v8);
  }
    return a1;
}
}

// ==== BACKFILL 0x007B83E0  UI_Setup_7B83E0  cls=unknown  sig=csp  renamed_refs=0 ====
wchar_t ** sub_7B83E0(wchar_t ** a1, const char ** a2)
{
{
    unsigned int v4;
    unsigned int v5;
    wchar_t *v6;
    char *v7;
    size_t v8;
    wchar_t *v9;
    wchar_t *v10;
    size_t v11;
    wchar_t *v12;
    if ( *a2 )
    v4 = strlen(*a2);
    else
    v4 = 0;
    v5 = (int)(((7 * (v4 + 1)) >> 3) + 1) / 2;
    v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 2);
    v7 = (char *)*a2;
    if ( !*a2 )
    v7 = &g_INI_DefaultBuffer;
    BinkMovieClass::OpenFile((unsigned char *)v7, v6, v5);
    if ( v6 )
    v8 = wcslen(v6) + 1;
    else
    v8 = 1;
    v9 = (wchar_t *)__2_YAPAXI_Z(2 * v8);
    v10 = v9;
    *v9 = 0;
    if ( v6 )
    wcscpy(v9, v6);
    __3_YAXPAX_Z(v6);
    *a1 = 0;
    if ( v10 )
  {
    v11 = wcslen(v10);
    v12 = (wchar_t *)__2_YAPAXI_Z(2 * v11 + 2);
    *a1 = v12;
    wcscpy(v12, v10);
    __3_YAXPAX_Z(v10);
  }
    return a1;
}
}

// ==== BACKFILL 0x007B8610  sub_7B8610  cls=unknown  sig=csp  renamed_refs=0 ====
DWORD sub_7B8610(unsigned int * lpThreadParameter)
{
{
    lpThreadParameter[6] = 1;
    lpThreadParameter[2] = 0;
    if ( *lpThreadParameter )
  {
    lpThreadParameter[2] = 1;
    return 0;
  }
    else
  {
    do
    {
    if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
    Debug::Log();
    if ( DataGlobal_B78164 )
    WWMouseClass::UpdateCursorMovement((LONG *)DataGlobal_B78164);
    ReleaseMutex(hMutex);
    Sleep(lpThreadParameter[4]);
    ++lpThreadParameter[1];
    }
    while ( !*lpThreadParameter );
    lpThreadParameter[2] = 1;
    return 0;
  }
}
}

// ==== BACKFILL 0x007B8960  MouseClass::CalcConfiningRect  cls=MouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void MouseClass::CalcConfiningRect() {
{
    int *v1;
    HWND v2;
    LONG y;
    int v4;
    int v5;
    HWND v6;
    struct tagPOINT Point;
    struct tagPOINT v8;
    struct tagRECT Rect;
    v1 = this;
    GetClientRect(*(this + 10), &Rect);
    Point.x = Rect.left;
    v6 = (HWND)v1[10];
    Point.y = Rect.top;
    ClientToScreen(v6, &Point);
    v8.x = Rect.right;
    v2 = (HWND)v1[10];
    v8.y = Rect.bottom;
    ClientToScreen(v2, &v8);
    y = Point.y;
    v1 += 11;
    v4 = v8.y - Point.y;
    v5 = v8.x - Point.x;
    *v1 = Point.x;
    v1[1] = y;
    v1[2] = v5;
    v1[3] = v4;
    Debug::Log();
}
} }

// ==== BACKFILL 0x007B89F0  WWMouseClass::COMStub  cls=WWMouseClass  sig=csp  renamed_refs=1 ====
int WWMouseClass::COMStub()
{
{
    return this->WWMouseClass_field_0xC;
}
}

// ==== BACKFILL 0x007B8E80  WWMouseClass::initCursorState  cls=WWMouseClass  sig=csp  renamed_refs=4 ====
namespace gamemd { void* WWMouseClass::initCursorState(void* a1) {
{
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      int *FoundationSize;
      int v9;
      int v10;
      int v11;
      int v12;
      _DWORD v14[3];
      int v15;

      v3 = 0;
      v4 = this->WWMouseClass_field_0x4;
      v5 = 0;
      v6 = 0;
      v7 = 0;
      if ( v4 )
      {
        if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
          Debug::Log();
        FoundationSize = Building::GetFoundationSize(v14, this->WWMouseClass_field_0x8);
        v9 = *FoundationSize;
        v10 = this->__pad_014;
        v11 = this->q018;
        v12 = FoundationSize[1];
        v6 = FoundationSize[2];
        v15 = FoundationSize[3];
        v3 = v10 - this->__pad_03C + v9;
        v5 = v11 - this->XY2 + v12;
        ReleaseMutex(hMutex);
        v7 = v15;
      }
      *a2 = v3;
      a2[1] = v5;
      a2[2] = v6;
      a2[3] = v7;
      return a2;
}
} }

// ==== BACKFILL 0x007B8F30  WWMouseClass::updateCursorRect  cls=WWMouseClass  sig=csp  renamed_refs=10 ====
namespace gamemd { int WWMouseClass::updateCursorRect() {
{
      int v2;
      unsigned int v3;
      unsigned int v4;
      unsigned int v5;
      unsigned int v6;
      int *FoundationSize;
      int v8;
      int v9;
      int v10;
      int v11;
      unsigned int v12;
      int v13;
      unsigned int v14;
      int v15;
      _DWORD v17[4];
      _DWORD v18[3];
      unsigned int v19;
      int v20[4];

      LOBYTE(v2) = BSurface::CreateTripleBuffer((int)this);
      if ( (_BYTE)v2 )
      {
        v2 = this->WWMouseClass_field_0x24;
        if ( v2 )
        {
          v3 = 0;
          v4 = 0;
          v5 = 0;
          v6 = 0;
          if ( this->WWMouseClass_field_0x4 )
          {
            if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
              Debug::Log();
            FoundationSize = Building::GetFoundationSize(v20, this->WWMouseClass_field_0x8);
            v8 = *FoundationSize;
            v9 = this->__pad_014;
            v10 = this->q018;
            v11 = FoundationSize[1];
            v5 = FoundationSize[2];
            v19 = FoundationSize[3];
            v3 = v9 - this->__pad_03C + v8;
            v4 = v10 - this->XY2 + v11;
            ReleaseMutex(hMutex);
            v6 = v19;
          }
          v12 = v3 + this->WWMouseClass_field_0x2C;
          this->__pad_048 = v3;
          v17[0] = v12;
          this->q04C = v4;
          v18[0] = 0;
          v18[1] = 0;
          this->q050 = v5;
          v13 = this->WWMouseClass_field_0x24;
          this->q054 = v6;
          v14 = this->WWMouseClass_field_0x30 + v4;
          v15 = this->WWMouseClass_field_0x44;
          v17[2] = v5;
          v17[3] = v6;
          v17[1] = v14;
          v18[2] = v5;
          v19 = v6;
          LOBYTE(v2) = (*(int (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)v15 + 8))(
                         v15,
                         v18,
                         v13,
                         v17,
                         0,
                         1);
        }
      }
      return v2;
}
} }

// ==== BACKFILL 0x007B9690  WWMouseClass::renderDragSelectionRect  cls=WWMouseClass  sig=csp  renamed_refs=5 ====
namespace gamemd { bool WWMouseClass::renderDragSelectionRect() {
{
      int v2;
      int v3;
      int v4;
      int v5;
      int v6;
      int v7;
      _DWORD v9[4];
      _DWORD v10[4];

      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
        Debug::Log();
      if ( (int)this->q050 > 0 && (int)this->q054 > 0 )
      {
        v2 = this->WWMouseClass_field_0x24;
        if ( v2 )
        {
          v3 = this->WWMouseClass_field_0x44;
          if ( v3 )
          {
            v4 = this->q04C;
            v5 = this->q054;
            v6 = this->q050;
            v10[0] = this->WWMouseClass_field_0x2C + this->__pad_048;
            v7 = this->WWMouseClass_field_0x30;
            v9[0] = 0;
            v9[1] = 0;
            v10[2] = v6;
            v10[3] = v5;
            v10[1] = v7 + v4;
            v9[2] = v6;
            v9[3] = v5;
            (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)v2 + 8))(v2, v10, v3, v9, 0, 1);
          }
        }
      }
      return ReleaseMutex(hMutex);
}
} }

// ==== BACKFILL 0x007B9750  WWMouseClass::showCursor  cls=WWMouseClass  sig=csp  renamed_refs=15 ====
namespace gamemd { int WWMouseClass::showCursor() {
{
      int result;
      int v3;
      int *FoundationSize;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int *v13;
      int v14;
      IUnknown *v15;
      int v16;
      int v17;
      int v18;
      int v19;
      int v20;
      _DWORD v21[4];
      _DWORD v22[4];

      result = this->WWMouseClass_field_0xC;
      if ( result )
      {
        if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
          Debug::Log();
        v3 = this->WWMouseClass_field_0xC + 1;
        this->WWMouseClass_field_0xC = v3;
        if ( !v3 )
        {
          if ( this->vt7() )
          {
            if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
              Debug::Log();
            if ( BSurface::CreateTripleBuffer(this) && this->WWMouseClass_field_0x24 )
            {
              Rect::Set(&v17, 0, 0, 0, 0);
              if ( this->WWMouseClass_field_0x4 )
              {
                UI_Helper_7BA2C0();
                FoundationSize = Building::GetFoundationSize(v22, this->WWMouseClass_field_0x8);
                v17 = *FoundationSize;
                v18 = FoundationSize[1];
                v19 = FoundationSize[2];
                v5 = this->__pad_03C;
                v20 = FoundationSize[3];
                v6 = this->__pad_014 - v5;
                v7 = this->XY2;
                v17 += v6;
                v18 += this->q018 - v7;
                ReleaseMutex(hMutex);
              }
              v8 = v17;
              v9 = v18;
              v10 = v19;
              v11 = v20;
              v21[0] = v17;
              this->__pad_048 = v17;
              v21[2] = v10;
              v21[3] = v11;
              this->q04C = v9;
              this->q050 = v10;
              this->q054 = v11;
              v12 = v8 + this->WWMouseClass_field_0x2C;
              v13 = *(int **)(this + 68);
              v21[0] = v12;
              v21[1] = this->WWMouseClass_field_0x30 + v9;
              v14 = *v13;
              v16 = this->WWMouseClass_field_0x24;
              v15 = (IUnknown *)Rect::Set(v22, 0, 0, v10, v11);
              (*(void (__thiscall **)(_DWORD, IUnknown *, int, _DWORD *, _DWORD, int))(v14 + 8))(
                this->WWMouseClass_field_0x44,
                v15,
                v16,
                v21,
                0,
                1);
            }
            Mouse::DrawCursor((_DWORD *)this, *(IUnknown **)(this + 36), 0, 0);
            ReleaseMutex(hMutex);
          }
          else
          {
            while ( ShowCursor(1) < 0 )
              ;
          }
        }
        if ( this->WWMouseClass_field_0xC > 0 )
          this->WWMouseClass_field_0xC = 0;
        return ReleaseMutex(hMutex);
      }
      return result;
}
} }

// ==== BACKFILL 0x007B9D70  WWMouseClass::checkStatus  cls=WWMouseClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int WWMouseClass::checkStatus(int a1, int a2, int a3, int a4) {
{
    return this->hideCursor();
}
} }

// ==== BACKFILL 0x007B9D80  WWMouseClass::checkVisible  cls=WWMouseClass  sig=csp  renamed_refs=0 ====
int WWMouseClass::checkVisible()
{
{
    return this->showCursor();
}
}

// ==== BACKFILL 0x007B9D90  WWMouseClass::processFrame  cls=WWMouseClass  sig=csp  renamed_refs=4 ====
namespace gamemd { void WWMouseClass::processFrame() {
{
      int v3;
      int v4;
      int result;

      *a2 -= this->WWMouseClass_field_0x2C;
      *a3 -= this->WWMouseClass_field_0x30;
      if ( *a2 < 0 )
        *a2 = 0;
      if ( *a3 < 0 && !DataGlobal_B78160 )
        *a3 = 0;
      v3 = this->WWMouseClass_field_0x34;
      if ( *a2 >= v3 )
        *a2 = v3 - 1;
      v4 = this->WWMouseClass_field_0x38;
      result = *a3;
      if ( *a3 >= v4 )
        *a3 = v4 - 1;
      return result;
}
} }

// ==== BACKFILL 0x007B9DF0  sub_7B9DF0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_7B9DF0::sub_7B9DF0(LONG * a2, LONG * a3)
{
{
    LONG y;
    struct tagPOINT Point;
    GetCursorPos(&Point);
    y = Point.y;
    *a2 = Point.x;
    *a3 = y;
    return this->Vf68(a2, a3);
}
}

// ==== BACKFILL 0x007B9E30  WWMouseClass::FlipCursorBuffer  cls=WWMouseClass  sig=csp  renamed_refs=14 ====
namespace gamemd { bool WWMouseClass::FlipCursorBuffer() {
{
      DWORD (__stdcall *v4)(HANDLE, DWORD); // edi
      IUnknown *v6;
      int v7;
      int v8;
      IUnknown *v9;
      IUnknown *v10;
      char *v11;
      IUnknown *v12;
      IUnknown **inited;
      int v14;
      IUnknown *v15;
      int v16;
      IUnknown *v17;
      int v18;
      int v20;
      IUnknown *v21;
      IUnknown *v22;
      IUnknown *v23;
      IUnknown *v24;
      int v25;
      char *v26;
      IUnknown *v27;
      IUnknown *v28;

      v4 = WaitForSingleObject;
      if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
        Debug::Log();
      if ( a2 != this->__pad_014 || a3 != this->q018 || a4 )
      {
        if ( ((unsigned __int8 (__thiscall *)(IUnknown **))(*this)->field_1C)(this)
          && !((unsigned __int8 (__thiscall *)(IUnknown **))(*this)->field_8)(this)
          && g_NetworkPlayerBuffer.__pad_14B0[660] )
        {
          if ( WaitForSingleObject(hMutex, 0x2710u) == 258 )
            Debug::Log();
          if ( (int)this->q050 > 0 && (int)this->q054 > 0 )
          {
            v6 = this->WWMouseClass_field_0x24;
            if ( v6 )
            {
              v7 = (int)this->WWMouseClass_field_0x44;
              if ( v7 )
              {
                v8 = (int)this->q04C;
                v9 = this->q050;
                v10 = this->q054;
                v25 = (int)this->__pad_048 + (_DWORD)this->WWMouseClass_field_0x2C;
                v11 = (char *)this->WWMouseClass_field_0x30 + v8;
                v21 = 0;
                v22 = 0;
                v27 = v9;
                v28 = v10;
                v26 = v11;
                v23 = v9;
                v24 = v10;
                (*(void (__thiscall **)(IUnknown *, int *, int, IUnknown **, _DWORD, int))(v6->field_0 + 8))(
                  v6,
                  &v25,
                  v7,
                  &v21,
                  0,
                  1);
                v4 = WaitForSingleObject;
              }
            }
          }
          ReleaseMutex(hMutex);
        }
        this->__pad_014 = a2;
        v12 = *this;
        this->q018 = a3;
        if ( ((unsigned __int8 (__thiscall *)(IUnknown **))v12->field_1C)(this)
          && !((unsigned __int8 (__thiscall *)(IUnknown **))(*this)->field_8)(this)
          && g_NetworkPlayerBuffer.__pad_14B0[660] )
        {
          if ( v4(hMutex, 0x2710u) == 258 )
            Debug::Log();
          if ( BSurface::CreateTripleBuffer((int)this) && this->WWMouseClass_field_0x24 )
          {
            inited = (IUnknown **)WWMouseClass::initCursorState((unsigned int *)this, &v25);
            v14 = (int)this->WWMouseClass_field_0x2C;
            this->__pad_048 = *inited;
            this->q04C = inited[1];
            this->q050 = inited[2];
            this->q054 = inited[3];
            v21 = *inited;
            v22 = inited[1];
            v15 = (IUnknown *)((char *)v21 + v14);
            v16 = (int)this->WWMouseClass_field_0x30;
            v23 = inited[2];
            v17 = inited[3];
            v21 = v15;
            v18 = (int)this->WWMouseClass_field_0x44;
            v22 = (IUnknown *)((char *)v22 + v16);
            v24 = v17;
            v20 = (int)this->WWMouseClass_field_0x24;
            v25 = 0;
            v26 = 0;
            v27 = v23;
            v28 = v17;
            (*(void (__thiscall **)(int, int *, int, IUnknown **, _DWORD, int))(*(_DWORD *)v18 + 8))(
              v18,
              &v25,
              v20,
              &v21,
              0,
              1);
          }
          Mouse::DrawCursor(this, this->WWMouseClass_field_0x24, 0, 0);
          ReleaseMutex(hMutex);
        }
      }
      return ReleaseMutex(hMutex);
}
} }

// ==== BACKFILL 0x007BA300  WWMouseClass::updateHotspot  cls=MouseClass  sig=csp  renamed_refs=0 ====
MouseClass * WWMouseClass::updateHotspot(char a2)
{
{
    *(void**)this = &vt_Mouse;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MouseClass *)this;
}
}

// ==== BACKFILL 0x007BA330  WWMouseClass::checkCapture  cls=WWMouseClass  sig=csp  renamed_refs=1 ====
char WWMouseClass::checkCapture()
{
{
    return this->WWMouseClass_field_0x10;
}
}

// ==== BACKFILL 0x007BA350  WWMouseClass::checkBounds  cls=WWMouseClass  sig=csp  renamed_refs=1 ====
int WWMouseClass::checkBounds()
{
{
    return this->WWMouseClass_field_0x20;
}
}

// ==== BACKFILL 0x007BA380  WWMouseClass::checkHotspot  cls=WWMouseClass  sig=csp  renamed_refs=2 ====
namespace gamemd { int WWMouseClass::checkHotspot(int a1, int a2) {
{
      this->WWMouseClass_field_0x1C = a2;
      this->WWMouseClass_field_0x20 = a3;
      return a2;
}
} }

// ==== BACKFILL 0x007BAB30  XSurface::entry_4C_  cls=XSurface  sig=csp  renamed_refs=0 ====
int XSurface::entry_4C_(int a1, int a2, int a3, int a4, int a5, int a6)
{
return 0;
}

// ==== BACKFILL 0x007BAB40  XSurface::entry_50_  cls=XSurface  sig=csp  renamed_refs=0 ====
char XSurface::entry_50_(int a1, int a2, int a3, int a4)
{
return 0;
}

// ==== BACKFILL 0x007BAB50  XSurface::entry_34_  cls=XSurface  sig=csp  renamed_refs=0 ====
char XSurface::entry_34_(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
return 0;
}

// ==== BACKFILL 0x007BAB60  XSurface::entry_38_  cls=XSurface  sig=csp  renamed_refs=0 ====
char XSurface::entry_38_(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
return 0;
}

// ==== BACKFILL 0x007BAB70  XSurface::entry_3C_  cls=XSurface  sig=csp  renamed_refs=0 ====
int XSurface_entry_3C_()
{
  return 0;
}

// ==== BACKFILL 0x007BAB80  XSurface::entry_40_  cls=XSurface  sig=csp  renamed_refs=0 ====
char XSurface::entry_40_(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
return 0;
}

// ==== BACKFILL 0x007BADC0  XSurface::DrawRectEx  cls=XSurface  sig=csp  renamed_refs=0 ====
char XSurface::DrawRectEx(int a2, unsigned int * a3, int a4)
{
{
    int v5;
    int v6;
    int v7;
    int v9[2];
    int v10[2];
    int v11[2];
    int v12;
    int v13;
    v5 = *((int*)(a3) + 1);
    v6 = *((int*)(a3) + 3);
    v7 = *((int*)(a3) + 2) + *a3 - 1;
    v9[0] = *a3;
    v10[0] = v7;
    v11[0] = v7;
    v13 = v6 + v5 - 1;
    v11[1] = v13;
    v12 = v9[0];
    v9[1] = v5;
    v10[1] = v5;
    this->DrawLineEx(a2, v9, v10, a4);
    this->DrawLineEx(a2, v9, &v12, a4);
    this->DrawLineEx(a2, v10, v11, a4);
    this->DrawLineEx(a2, &v12, v11, a4);
    return 1;
}
}

// ==== BACKFILL 0x007BB340  XSurface::entry_1C_  cls=XSurface  sig=csp  renamed_refs=0 ====
char XSurface::entry_1C_(int a1, int a2, int a3)
{
return 0;
}

// ==== BACKFILL 0x007BC610  sub_7BC610  cls=-  sig=csp  free-function ====
void sub_7BC610(int a1, char * a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    char *v9;
    int v10;
    char v11;
    v9 = (char *)(a1 - 1);
    v10 = a3 + 1;
    while ( --v10 )
  {
    v11 = *a2;
    ++v9;
    ++a2;
    if ( v11 )
    *v9 = v11;
  }
}
}

// ==== BACKFILL 0x007BC640  ??_Gfacet_locale_std__UAEPAXI_Z_148  cls=-  sig=csp  free-function ====
BlitPlain * E4Recv_7BC640::___Gfacet_locale_std__UAEPAXI_Z_148(char a2)
{
{
    *(void**)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitPlain *)this;
}
}

// ==== BACKFILL 0x007BC660  ??_Gfacet_locale_std__UAEPAXI_Z_149  cls=-  sig=csp  free-function ====
BlitPlain * E4Recv_7BC660::___Gfacet_locale_std__UAEPAXI_Z_149(char a2)
{
{
    *(void**)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitPlain *)this;
}
}

// ==== BACKFILL 0x007BC680  ??_Gfacet_locale_std__UAEPAXI_Z_150  cls=-  sig=csp  free-function ====
BlitTrans * E4Recv_7BC680::___Gfacet_locale_std__UAEPAXI_Z_150(char a2)
{
{
    *(void**)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTrans *)this;
}
}

// ==== BACKFILL 0x007BC6A0  ??_Gfacet_locale_std__UAEPAXI_Z_151  cls=-  sig=csp  free-function ====
BlitTrans * E4Recv_7BC6A0::___Gfacet_locale_std__UAEPAXI_Z_151(char a2)
{
{
    *(void**)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTrans *)this;
}
}

// ==== BACKFILL 0x007BC6C0  sub_7BC6C0  cls=-  sig=csp  free-function ====
int E4Recv_7BC6C0::sub_7BC6C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x007BC6F0  sub_7BC6F0  cls=-  sig=csp  free-function ====
int E4Recv_7BC6F0::sub_7BC6F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x007BC720  sub_7BC720  cls=-  sig=csp  free-function ====
int E4Recv_7BC720::sub_7BC720(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x007BC750  sub_7BC750  cls=-  sig=csp  free-function ====
unsigned int sub_7BC750(void * a0, const void * a1, BlitPlain * aP2, int a4, int a5, int a6, int a7, int a8)
{
{
    qmemcpy(a0, a1, (unsigned int)aP2);
    return (unsigned int)aP2;
}
}

// ==== BACKFILL 0x007BC780  sub_7BC780  cls=-  sig=csp  free-function ====
void * sub_7BC780(BlowStraw * aP0, void * Src, ModemGame * aP2, int a4, int a5, int a6, int a7)
{
{
    return memcpy(aP0, (AbstractClass *)Src, (size_t)aP2);
}
}

// ==== BACKFILL 0x007BC7A0  sub_7BC7A0  cls=-  sig=csp  free-function ====
unsigned int sub_7BC7A0(void * a0, const void * a1, BlitPlain * aP2, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    qmemcpy(a0, a1, (unsigned int)aP2);
    return (unsigned int)aP2;
}
}

// ==== BACKFILL 0x007BC7D0  sub_7BC7D0  cls=-  sig=csp  free-function ====
void * sub_7BC7D0(BlowStraw * aP0, void * Src, ModemGame * aP2, int a4, int a5, int a6, int a7, int a8)
{
{
    return memcpy(aP0, (AbstractClass *)Src, (size_t)aP2);
}
}

// ==== BACKFILL 0x007BC7F0  sub_7BC7F0  cls=-  sig=csp  free-function ====
int sub_7BC7F0(void * a1, const void * a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    qmemcpy(a1, a2, 2 * a3);
    return a3;
}
}

// ==== BACKFILL 0x007BC820  sub_7BC820  cls=-  sig=csp  free-function ====
void * sub_7BC820(BlowStraw * aP0, BombClass * aP1, int a3, int a4, int a5, int a6, int a7)
{
{
    return memcpy(aP0, (AbstractClass *)aP1, 2 * a3);
}
}

// ==== BACKFILL 0x007BC840  sub_7BC840  cls=-  sig=csp  free-function ====
int sub_7BC840(void * a1, const void * a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    qmemcpy(a1, a2, 2 * a3);
    return a3;
}
}

// ==== BACKFILL 0x007BC870  sub_7BC870  cls=-  sig=csp  free-function ====
void * sub_7BC870(BlowStraw * aP0, BombClass * aP1, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return memcpy(aP0, (AbstractClass *)aP1, 2 * a3);
}
}

// ==== BACKFILL 0x007BC890  sub_7BC890  cls=-  sig=csp  free-function ====
short sub_7BC890(unsigned short * a1, short * a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    short result;
    int v11;
    result = a3;
    if ( a3 > 0 )
  {
    v11 = a3;
    do
    {
    result = *a2++;
    if ( result )
    *a1 = result;
    ++a1;
    --v11;
    }
    while ( v11 );
  }
    return result;
}
}

// ==== BACKFILL 0x007BC8C0  sub_7BC8C0  cls=-  sig=csp  free-function ====
int E4Recv_7BC8C0::sub_7BC8C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x007BC8F0  sub_7BC8F0  cls=-  sig=csp  free-function ====
int E4Recv_7BC8F0::sub_7BC8F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x007BC920  sub_7BC920  cls=-  sig=csp  free-function ====
int E4Recv_7BC920::sub_7BC920(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// ==== BACKFILL 0x007BCA50  sub_7BCA50  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_7BCA50::sub_7BCA50(int a2, int a3, int a4, int a5, int a6)
{
{
    short *v8;
    short *v9;
    int v10;
    int v11;
    int v12;
    int v13;
    short v14;
    int v16;
    v8 = (short *)(*(int (__thiscall **)(int, int, int))(*(int *)(a2) + 92))(a2, a3, a4);
    v9 = (short *)(this->M16 + this->M24);
    v10 = (*(int (__thiscall **)(int))(*(int *)(a2) + 116))(a2);
    v11 = a5;
    v12 = v10 / 2 - a5;
    if ( v8 && a6 > 0 )
  {
    v16 = a6;
    do
    {
    if ( v11 > 0 )
      {
    v13 = v11;
    do
        {
    v14 = *v9++;
    *v8++ = v14;
    if ( (unsigned int)v9 >= this->M28 )
    v9 = (short *)((char *)v9 - this->M32);
    --v13;
        }
    while ( v13 );
    v11 = a5;
      }
    v8 += v12;
    --v16;
    }
    while ( v16 );
  }
    return (*(int (__thiscall **)(int))(*(int *)(a2) + 96))(a2);
}
}

// ==== BACKFILL 0x007BCAE0  Stream::GetField  cls=Stream  sig=csp  renamed_refs=0 ====
namespace gamemd { int Stream::GetField() {
{
      int (__thiscall ***v1)(_DWORD, int); // ecx
      int result;

      v1 = (int (__thiscall ***)(_DWORD, int))this->q014;
      if ( v1 )
        return (**v1)(v1, 1);
      return result;
}
} }

// ==== BACKFILL 0x007BCAF0  sub_7BCAF0  cls=unknown  sig=csp  renamed_refs=0 ====
char * sub_7BCAF0(char * a1, int a2, unsigned short a3)
{
{
    char *v3;
    int v4;
    char *result;
    unsigned int v6;
    v3 = a1;
    v4 = a2;
    if ( ((unsigned char)a1 & 2) != 0 && a2 )
  {
    *(short *)a1 = a3;
    v3 = a1 + 2;
    v4 = a2 - 1;
  }
    result = 0;
    v6 = v4 >> 1;
    if ( v4 >> 1 )
  {
    memset32(v3, 65537 * a3, v6);
    result = &v3[4 * v6];
  }
    if ( (v4 & 1) != 0 )
  {
    if ( result )
    *(short *)result = a3;
  }
    return result;
}
}

// ==== BACKFILL 0x007BE640  Stream::CopyFromTemplate  cls=Stream  sig=csp  renamed_refs=0 ====
namespace gamemd { void Stream::CopyFromTemplate() {
{
    qmemcpy(this, &DataGlobal_84E738, 0x88u);
}
} }

// ==== BACKFILL 0x007BE940  sub_7BE940  cls=unknown  sig=csp  renamed_refs=0 ====
char sub_7BE940(int a1, int * a2)
{
{
    int v4;
    int *v5;
    int (__cdecl *v6)(int, int, int, int);
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v14;
    int *v15;
    int v16;
    int v17;
    LOBYTE(v4) = *(char *)(a1 + 420);
    v5 = (int *)*((int*)(a2) + 1);
    v15 = v5;
    if ( (v4 & 2) == 0 && ((v6 = *(int (__cdecl **)(int, int, int, int))(a1 + 72)) != 0 && (v4 = v6(a1, 6, 0, 0)) != 0 || (v4 = *(int *)(a1 + 424)) != 0) )
  {
    v7 = *(int *)(a1 + 1732);
    v8 = *(int *)(a1 + 1736);
    v9 = v4 + *(int *)(a1 + 444);
    v17 = v7;
    v16 = v8;
    if ( (*((int*)(a2) + 5) & 0x40) != 0 )
    v10 = *(int *)(a1 + 1768);
    else
    v10 = *a2;
    v11 = v5[3];
    if ( (v11 & 4) != 0 )
    v12 = *(int *)(a1 + 1776);
    else
    v12 = *v5;
    if ( *(int *)(a1 + 72) && (v11 & 8) != 0 )
    {
    LOBYTE(v11) = v11 & 0xF7;
    v15[3] = v11;
    (*(void (__cdecl **)(int, int, int, int))(a1 + 72))(a1, 3, v12, v15[5]);
    v8 = v16;
    v7 = v17;
    }
    v14 = *(int *)(a1 + 428);
    if ( (*((int*)(a2) + 5) & 0x20) != 0 )
    (*(void (__cdecl **)(int, int, int, int, int, int))(a1 + 1928))(v12, v10, v9, v7, v8, v14);
    else
    (*(void (__cdecl **)(int, int, int, int, int, int))(a1 + 1924))(v12, v10, v9, v7, v8, v14);
    v4 = *(int *)(a1 + 72);
    if ( v4 )
    LOBYTE(v4) = ((int (__cdecl *)(int, int, int, int))v4)(a1, 7, 0, 0);
  }
    return v4;
}
}

// ==== BACKFILL 0x007BEA40  sub_7BEA40  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_7BEA40::sub_7BEA40()
{
{
    int result;
    int v3;
    result = AudioStream::ProcessStream(this);
    if ( result == -1 )
  {
    sub_7BEFE0(this);
    v3 = this->M416;
    this->M1756 = v3;
    if ( ((unsigned char)this->M420 & 8) == 0 )
    this->M416 = *(int *)(v3 + 12);
    return -1;
  }
    return result;
}
}

// ==== BACKFILL 0x007BF0B0  sub_7BF0B0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_7BF0B0::sub_7BF0B0()
{
{
    int *v2;
    void (__cdecl *v3)(int *, int, int, int);
    int v4;
    void (__cdecl *v5)(int *, int, int *, int);
    int (__cdecl *v6)(int *, int);
    v2 = (int *)this->M1756;
    if ( (v2[5] & 4) != 0 || ((unsigned char)this->M105 & 1) != 0 )
  {
    if ( (v2[5] & 4) != 0 )
    {
    v3 = (void (__cdecl *)(int *, int, int, int))this->M72;
    if ( v3 )
    v3(this, 2, v2[2], v2[10]);
    }
    else
    {
    v4 = this->M420;
    if ( (v4 & 1) != 0 )
      {
    LOBYTE(v4) = v4 & 0xFE;
    this->M420 = v4;
    v5 = (void (__cdecl *)(int *, int, int *, int))this->M72;
    if ( v5 )
    v5(this, 2, this + 113, this->M448);
      }
    }
  }
    sub_7BE940((int)this, v2);
    v6 = (int (__cdecl *)(int *, int))this->M76;
    if ( v6 && v6(this, v2[7]) )
    return -2;
    else
    return -1;
}
}

// ==== BACKFILL 0x007BF140  sub_7BF140  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_7BF140::sub_7BF140()
{
{
    int result;
    int *v3;
    result = AudioStream::ProcessStream(this);
    if ( result == -1 )
  {
    sub_7BEFE0(this);
    v3 = *(int **)(this + 416);
    sub_7BE940(this, v3);
    this->M1756 = v3;
    if ( ((unsigned char)this->M420 & 8) == 0 )
    this->M416 = v3[3];
    return -1;
  }
    return result;
}
}

// ==== BACKFILL 0x007BF190  sub_7BF190  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_7BF190::sub_7BF190()
{
{
    int *v2;
    void (__cdecl *v3)(int *, int, int, int);
    int v4;
    void (__cdecl *v5)(int *, int, int *, int);
    int (__cdecl *v6)(int *, int);
    v2 = (int *)this->M1756;
    if ( (v2[5] & 4) != 0 || ((unsigned char)this->M105 & 1) != 0 )
  {
    if ( (v2[5] & 4) != 0 )
    {
    v3 = (void (__cdecl *)(int *, int, int, int))this->M72;
    if ( v3 )
    v3(this, 2, v2[2], v2[10]);
    }
    else
    {
    v4 = this->M420;
    if ( (v4 & 1) != 0 )
      {
    LOBYTE(v4) = v4 & 0xFE;
    this->M420 = v4;
    v5 = (void (__cdecl *)(int *, int, int *, int))this->M72;
    if ( v5 )
    v5(this, 2, this + 113, this->M448);
      }
    }
  }
    v6 = (int (__cdecl *)(int *, int))this->M76;
    if ( v6 && v6(this, v2[7]) )
    return -2;
    else
    return -1;
}
}
