// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x005400D0  IPXGlobalConnClass::CheckStatus  cls=IPXGlobalConnClass  sig=csp  renamed_refs=3  residual=- ====
int IPXGlobalConnClass::CheckStatus()
{
{
    int v2;
    int *v3;
    v2 = 0;
    v3 = (int *)this->IPXGlobalConnClass_field_0x04;
    if ( (int)v3[14] > 0 )
  {
    do
    {
    if ( (*(char *)Terrain::GetTileType(v3, v2) & 2) != 0 )
    PacketQueue::ReleaseEntry((int *)this->IPXGlobalConnClass_field_0x04, 0, 0, v2--, 0, 0);
    v3 = (int *)this->IPXGlobalConnClass_field_0x04;
    ++v2;
    }
    while ( v2 < v3[14] );
  }
    return 1;
}
}

// ==== BACKFILL 0x005402D0  IPXGlobalConnClass::Send  cls=IPXGlobalConnClass  sig=csp  renamed_refs=3  residual=- ====
int IPXGlobalConnClass::Send()
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    int *v6;
    int v8;
    int v9;
    char v10[12];
    char v11[1024];
    v2 = 0;
    v3 = 0;
    v4 = (int *)this->IPXGlobalConnClass_field_0x04;
    if ( (int)v4[10] > 0 )
  {
    do
    {
    v5 = *(int *)Terrain::GetTileIndex(v4, v3);
    if ( (v5 & 4) != 0 && (v5 & 2) == 0 )
      {
    Waypoint::InitInvalid(v10);
    v6 = (int *)this->IPXGlobalConnClass_field_0x04;
    v8 = 12;
    PacketQueue::ExtractEntry(v6, v11, &v9, v3--, v10, &v8, 0);
    ++v2;
      }
    v4 = (int *)this->IPXGlobalConnClass_field_0x04;
    ++v3;
    }
    while ( v3 < v4[10] );
  }
    return v2;
}
}

// ==== BACKFILL 0x00540340  IPXGlobalConnClass::SendPacket  cls=IPXGlobalConnClass  sig=csp  renamed_refs=3  residual=- ====
int IPXGlobalConnClass::SendPacket(int a2, short a3)
{
{
    int *v4;
    int v5;
    int v6;
    int TileIndex;
    int v8;
    int *v9;
    int v11;
    int v12;
    char v13[12];
    char v14[1024];
    v4 = (int *)this->IPXGlobalConnClass_field_0x04;
    v5 = 0;
    v6 = 0;
    if ( (int)v4[10] <= 0 )
    return 0;
    do
  {
    TileIndex = Terrain::GetTileIndex(v4, v6);
    v8 = TileIndex;
    if ( (*(char *)TileIndex & 2) == 0 && *(int *)(TileIndex + 24) && NetworkID::Compare(*(int *)(TileIndex + 28), a2) && *(short *)(v8 + 32) == a3 )
    {
    Waypoint::InitInvalid(v13);
    v9 = (int *)this->IPXGlobalConnClass_field_0x04;
    v11 = 12;
    PacketQueue::ExtractEntry(v9, v14, &v12, v6--, v13, &v11, 0);
    ++v5;
    }
    v4 = (int *)this->IPXGlobalConnClass_field_0x04;
    ++v6;
  }
    while ( v6 < v4[10] );
    return v5;
}
}

// ==== BACKFILL 0x00540610  IPXGlobalConnClass::Release  cls=IPXGlobalConnClass  sig=csp  renamed_refs=0  residual=- ====
int IPXGlobalConnClass::Release(const void * a1, AnimClass * aP2, int aP3, char aP4)
{
{
    return ConnectionClass::sendAck((int)this, (AnimClass *)a1, aP2, (AnimClass *)aP3, (AnimClass *)aP4);
}
}

// ==== BACKFILL 0x00540630  IPXGlobalConnClass::ddtor  cls=IPXGlobalConnClass  sig=csp  renamed_refs=0  residual=- ====
int IPXGlobalConnClass::ddtor(int a2, int a3)
{
{
    return ConnectionClass::receivePacket(this, a2, a3);
}
}

// ==== BACKFILL 0x00540650  IPXGlobalConnClass::Connect  cls=IPXGlobalConnClass  sig=csp  renamed_refs=0  residual=- ====
int IPXGlobalConnClass::Connect(void * a2, signed int * a3)
{
{
    return ConnectionClass::processTileUpdate(this, a2, a3);
}
}

// ==== BACKFILL 0x00540670  IPXGlobalConnClass::QueryInterface  cls=IPXGlobalConnClass  sig=csp  renamed_refs=0  residual=- ====
IPXGlobalConnClass * IPXGlobalConnClass::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 52);
    *(void**)this = &vt_IPXGlobalConnClass;
    if ( v3 )
  {
    __3_YAXPAX_Z(v3);
    *(this + 52) = 0;
  }
    if ( *(this + 51) )
  {
    __3_YAXPAX_Z((void *)*(this + 51));
    *(this + 51) = 0;
  }
    *(void**)this = &vt_IPXConnClass;
    ConnectionClass::dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (IPXGlobalConnClass *)this;
}
}

// ==== BACKFILL 0x005408F0  sub_5408F0  cls=IPXManagerClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_5408F0::sub_5408F0(int a2, int a3, int a4, int a5, short a6, short a7)
{
{
    int *v8;
    int *v9;
    short v10;
    *(int *)this = &vt_IPXManagerClass;
    if ( g_NetworkInterface )
  {
    (**(void (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1);
    g_NetworkInterface = 0;
  }
    v8 = __2_YAPAXI_Z(0x3F310u);
    if ( v8 )
    v9 = IPXInterfaceClass::Construct(v8);
    else
    v9 = 0;
    g_NetworkInterface = (int)v9;
    if ( WinsockInterface::Init(v9) )
    this->M4 = 1;
    else
    this->M4 = 0;
    if ( g_NetworkInterface )
    (**(void (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1);
    g_NetworkInterface = 0;
    this->M8 = a2;
    this->M12 = a4;
    this->M24 = a2;
    this->M20 = a5;
    this->M28 = a5;
    this->M32 = a7;
    LOBYTE(v10) = HIBYTE(a6);
    HIBYTE(v10) = a6;
    this->M34 = v10;
    this->M5 = 0;
    this->M16 = a3;
    this->M36 = 0;
    this->M68 = 0;
    this->M84 = 0;
    memset(this + 40, 0, 0x1Cu);
    this->M72 = 0;
    this->M168 = -1;
    this->M92 = -1;
    this->M76 = 0;
    this->M80 = 0;
    this->M160 = 0;
    this->M164 = 0;
    this->M88 = 2;
    this->M96 = 60;
    return this;
}
}

// ==== BACKFILL 0x00540D10  TacticalClass::SetCameraPosition  cls=IPXManagerClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TacticalClass::SetCameraPosition(int a2, int a3, int a4) {
{
    int result;
    result = this->field48;
    if ( result )
  {
    *(int *)(result + 40) = a2;
    *(int *)(this->field48 + 44) = a3;
    result = this->field48;
    *(int *)(result + 48) = a4;
  }
    return result;
}
} }

// ==== BACKFILL 0x00540F90  Network::GetSendCount  cls=IPXManagerClass  sig=csp  renamed_refs=0  residual=- ====
int Network::GetSendCount()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Network_GetSendCount(_DWORD *this)
{
  return *(this + 17); /*0x540f93*/
}
}

// ==== BACKFILL 0x005415F0  IPXManagerClass::ddtor  cls=IPXManagerClass  sig=csp  renamed_refs=0  residual=- ====
int IPXManagerClass::ddtor(int a2, int a3, unsigned int * a4)
{
    if ( !this->Initialized )
        return 0;
    if ( !this->Active )
        return 0;
    int v5 = this->connCount;
    if ( !v5 )
        return 0;
    if ( this->curConnIndex >= v5 )
        this->curConnIndex = 0;
    int v13 = 0;
    if ( v5 <= 0 )
        return 0;
    while ( 1 )
    {
        IPXConnStub *v6 = this->connTable[this->curConnIndex];
        int v7 = v6->vt16(a2, a3);
        int v8 = this->curConnIndex;
        IPXConnStub *v9 = this->connTable[v8++];
        int v10 = v9->connField100;
        int v11 = this->connCount;
        this->curConnIndex = v8;
        if ( v8 >= v11 )
            this->curConnIndex = 0;
        if ( v7 )
            break;
        if ( ++v13 >= v11 )
            return 0;
    }
    *a4 = v10;
    return 1;
}

// ==== BACKFILL 0x00541680  Network_Recv  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char Network_Recv(IPXManagerClass * aP0, IPXManagerClass * aP1, int a3, int a4, IPXManagerClass * aP4)
{
{
    IPXManagerClass *v5;
    int v6;
    IPXManagerClass *v8;
    IPXManagerClass aP1a;
    IPXManagerClass v10;
    char v11[12];
    if ( (DataGlobal_AA0674 & 1) == 0 )
  {
    DataGlobal_AA0674 |= 1u;
    DataGlobal_AA06B0 = htonl((IUnknown *)0x7F000001);
  }
    if ( *(int *)&HouseClass_Player.__pad_5568[8068] != 4 || !HouseClass_Player.__pad_5568[18668] || !DataGlobal_B052EC )
    return 0;
    if ( *(unsigned short *)&aP0[1].Initialized == *(int *)&DataGlobal_830620.__pad_579C[49536] )
  {
    *(short *)&aP0[1].Initialized = (short)aP4;
    aP0[1].Socket = *(int *)(a4 + 4);
    Network::FormatAddress((unsigned short *)a4, 0);
    Debug::Log();
    LOWORD(v6) = *(short *)&DataGlobal_830620.__pad_579C[49536];
    (*(void (__thiscall **)(int, IPXManagerClass *, int, void *, int, int, int, int))(**(int **)&DataGlobal_87C374.__pad_579C[23320] + 12))( *(int *)&DataGlobal_87C374.__pad_579C[23320], aP1, a3, &DataGlobal_AA06AC, 12, 0, 1, v6);
    return 1;
  }
    if ( !*(short *)&aP0[1].Initialized )
    return 0;
    Network::CopyAddress_Small((char *)(**(int **)&HouseClass_Player.__pad_5568[18372] + 40), &aP1a);
    v8 = aP0 + 1;
    if ( aP1a.Socket == aP0[1].Socket && *(short *)&HouseClass_Player.__pad_5568[20478] == *(short *)&aP0[1].Initialized )
  {
    Debug::Log();
    return 0;
  }
    if ( !v8->Socket )
    return 0;
    LOWORD(v5) = *(short *)&aP0[1].Initialized;
    Waypoint::InitInvalid(v11);
    v10.Socket = v8->Socket;
    Struct::Copy6Bytes(v11, &v10);
    Network::SetPort(v11, v5);
    *(short *)&aP0[1].Initialized = 0;
    v8->Socket = 0;
    Network::FormatAddress((unsigned short *)v11, 0);
    Debug::Log();
    (*(void (__thiscall **)(int, IPXManagerClass *, int, char *, int, int, int, short))(**(int **)&DataGlobal_87C374.__pad_579C[23320] + 12))( *(int *)&DataGlobal_87C374.__pad_579C[23320], aP1, a3, v11, 12, 0, 1, (short)v5);
    return 1;
}
}

// ==== BACKFILL 0x005422C0  ?GetNumBorrowedCores_SchedulerProxy_details_Concurrency__QBEIXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int E4Recv_5422C0::_GetNumBorrowedCores_SchedulerProxy_details_Concurrency__QBEIXZ()
{
{
    return this->M168;
}
}

// ==== BACKFILL 0x00542310  HouseClass::GetUpgradeValue  cls=IPXManagerClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int HouseClass::GetUpgradeValue() {
{
      int v1;

      if ( this->q004 && this->q005 && (v1 = this->buildingsCapacity) != 0 )
        return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 40);
      else
        return 0;
}
} }

// ==== BACKFILL 0x00543040  IPXManagerClass::StubReturnFalse  cls=IPXManagerClass  sig=csp  renamed_refs=0  residual=- ====
void IPXManagerClass::StubReturnFalse(int a1, int a2)
{
  ;
}

// ==== BACKFILL 0x005430E0  IPXManagerClass::QueryInterface  cls=IPXManagerClass  sig=csp  renamed_refs=0  residual=- ====
IPXManagerClass * IPXManagerClass::QueryInterface(char a2)
{
{
    IPXManagerClass::processPacket(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (IPXManagerClass *)this;
}
}

// ==== BACKFILL 0x00543990  AbstractClass::COMStub_5  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::COMStub_5(void* a1, int a2) {
{
      ObjectClass *Register;

      Register = (ObjectClass *)BuildingClass::SaveLoad_Register((#374 *)this);
      if ( (int)Register >= 0 )
      {
        if ( aP1 )
        {
          ObjectClass::Init(aP1, (AbstractClass *)&aP1a);
          *(_DWORD *)aP1->__pad_0 = &IsometricTileClass::`vftable';
          *(_DWORD *)&aP1->__pad_0[4] = &IsometricTileClass::`vftable';
          *(_DWORD *)&aP1->__pad_0[8] = &IsometricTileClass::`vftable';
          *(_DWORD *)&aP1->__pad_0[12] = &vt_IsometricTileClass;
        }
        ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP1[1]);
      }
      return (int)Register->__pad_0;
}
} } }

// ==== BACKFILL 0x005439F0  AbstractClass::COMStub_6  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_6(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x00543A10  AbstractClass::COMStub_54  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::COMStub_54(int a1, int a2) {
{
      int v4;

      v4 = *(_DWORD *)this;
      this->q081 = 0;
      (*(void (__thiscall **)(_BYTE *, int))(v4 + 436))(this, a2);
      return this->vt73(1);
}
} } }

// ==== BACKFILL 0x00543A40  AbstractClass::COMStub_53  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::COMStub_53() {
{
      if ( !g_WTFMode || this->q081 )
        return 0;
      this->vt84();
      this->vt55(1);
      this->vt73(0);
      this->q081 = 1;
      this->q080 = 0;
      return 1;
}
} } }

// ==== BACKFILL 0x00543A90  AbstractClass::COMStub_Ret176_12  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Ret176_12()
{
return 176;
}

// ==== BACKFILL 0x00543AA0  AbstractClass::COMStub_Ret17_11  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Ret17_11()
{
return 17;
}

// ==== BACKFILL 0x00543AB0  nullsub_0  cls=IsometricTileClass  sig=csp  renamed_refs=0  residual=- ====
int nullsub_0(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448640;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// ==== BACKFILL 0x00543AF0  nullsub_0_0  cls=IsometricTileClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_543AF0::nullsub_0_0()
{
{
    return this->M172;
}
}

// ==== BACKFILL 0x00543B00  nullsub_154  cls=IsometricTileClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_154(int a1, int a2)
{
  ;
}

// ==== BACKFILL 0x005471F0  CellClass::GetTerrainFlag  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CellClass::GetTerrainFlag(int a1) {
{
      _DWORD *v2;
      int v3;
      int v4;

      v2 = (_DWORD *)this->vt39();
      if ( v2 && (v3 = v2[a2 % (*v2 * v2[1]) + 4]) != 0 )
        return (*(_DWORD *)(v3 + 36) >> 2) & 1;
      else
        LOBYTE(v4) = 0;
      return v4;
}
} }

// ==== BACKFILL 0x00547CF0  TerrainClass::GenerateTexture  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void TerrainClass::GenerateTexture(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17) {


/* ASM:
Block           = dword ptr -4
arg_0           = dword ptr  4
arg_4           = dword ptr  8
arg_8           = dword ptr  0Ch
arg_C           = dword ptr  10h
arg_10          = dword ptr  14h
arg_14          = dword ptr  18h
arg_18          = dword ptr  1Ch
arg_1C          = dword ptr  20h
arg_20          = dword ptr  24h
arg_24          = dword ptr  28h
arg_28          = dword ptr  2Ch
arg_2C          = dword ptr  30h
arg_30          = dword ptr  34h
arg_34          = dword ptr  38h
arg_38          = dword ptr  3Ch
arg_3C          = dword ptr  40h
arg_40          = dword ptr  44h

sub     esp, 1Ch
mov     eax, [esp+1Ch+arg_0]
push    ebx
push    ebp
push    esi
mov     esi, ecx
push    edi
test    eax, eax
mov     [esp+2Ch+var_14], esi
jz      loc_54981D
mov     eax, [esp+2Ch+arg_30]
mov     ebx, [esp+2Ch+arg_20]
mov     ebp, [esp+2Ch+arg_14]

loc_547D15:                             ; CODE XREF: TerrainClass__GenerateTexture+76↓j
mov     cx, ds:8A0DE8h
test    eax, eax
mov     word ptr dword_A8ED54+123CCh, cx
jz      short loc_547D68
mov     ecx, [esi+2F0h]
mov     edx, eax
lea     edi, [ecx-1]
cmp     eax, edi
jle     short loc_547D39
cdq
idiv    ecx

loc_547D39:                             ; CODE XREF: TerrainClass__GenerateTexture+44↑j
test    edx, edx
jz      short loc_547D68
mov     ecx, esi

loc_547D3F:                             ; CODE XREF: TerrainClass__GenerateTexture+56↓j
mov     ecx, [ecx+2BCh]
dec     edx
jnz     short loc_547D3F
cmp     ecx, esi
jz      short loc_547D68
mov     esi, [esp+2Ch+arg_18]
mov     edi, [esp+2Ch+arg_1C]
mov     [esp+2Ch+arg_18], esi
xor     eax, eax
mov     edx, ebp
mov     [esp+2Ch+var_14], ecx
mov     [esp+2Ch+arg_1C], edi
mov     esi, ecx
jmp     short loc_547D15
; ---------------------------------------------------------------------------

loc_547D68:                             ; CODE XREF: TerrainClass__GenerateTexture+35↑j
; TerrainClass__GenerateTexture+4B↑j ...
mov     edx, [esp+2Ch+arg_0]
mov     esi, [esp+2Ch+arg_10]
mov     [esp+2Ch+arg_20], ebx
mov     ebx, [esp+2Ch+arg_C]
mov     eax, [edx+16Ch]
mov     ecx, offset unk_87E8A8
push    eax
mov     [esp+30h+arg_14], ebp
mov     [esp+30h+var_1C], ebx
mov     [esp+30h+var_8], esi
mov     byte ptr [esp+30h+arg_30], 0
call    CreateFractalNoise
mov     edi, eax
mov     eax, [esp+2Ch+arg_28]
xor     ecx, ecx
mov     [esp+2Ch+Block], edi
test    eax, eax
setle   cl
dec     ecx
and     eax, ecx
mov     edx, eax
shl     edx, 6
add     edx, eax
lea     eax, [eax+edx*4]
sar     eax, 0Bh
cmp     eax, 0FEh
jle     short loc_547DC7
mov     eax, 0FEh

loc_547DC7:                             ; CODE XREF: TerrainClass__GenerateTexture+D0↑j
shl     eax, 9
add     eax, edi
mov     dword_A8ED54+1237Ch, eax
mov     eax, [esp+2Ch+arg_0]
mov     ecx, [eax+170h]
mov     al, byte ptr dword_A8ED54+2D809h
test    al, al
mov     dword_A8ED54+1236Ch, ecx
jnz     loc_547F33
xor     ebp, ebp
mov     [esp+2Ch+var_18], offset unk_7EC450
mov     [esp+2Ch+arg_28], ebp
mov     [esp+2Ch+var_C], ebp
mov     ecx, ebp

loc_547E02:                             ; CODE XREF: TerrainClass__GenerateTexture+22A↓j
xor     edi, edi

loc_547E04:                             ; CODE XREF: TerrainClass__GenerateTexture+122↓j
cmp     ds:byte_7EC4C8[ecx+edi], 20h ; ' '
jnz     short loc_547E16
inc     edi
cmp     edi, 3Ch ; '<'
jl      short loc_547E04
jmp     short loc_547E44
; ---------------------------------------------------------------------------

loc_547E16:                             ; CODE XREF: TerrainClass__GenerateTexture+11C↑j
lea     eax, [edi+1]
mov     edx, 1
cmp     eax, 3Ch ; '<'
mov     [esp+2Ch+arg_0], edx
jge     short loc_547E3F
lea     ecx, unk_7EC4C9[ecx+edi]

loc_547E2E:                             ; CODE XREF: TerrainClass__GenerateTexture+149↓j
cmp     byte ptr [ecx], 20h ; ' '
jz      short loc_547E3B
inc     edx
inc     eax
inc     ecx
cmp     eax, 3Ch ; '<'
jl      short loc_547E2E

loc_547E3B:                             ; CODE XREF: TerrainClass__GenerateTexture+141↑j
mov     [esp+2Ch+arg_0], edx

loc_547E3F:                             ; CODE XREF: TerrainClass__GenerateTexture+135↑j
cmp     edi, 3Ch ; '<'
jl      short loc_547E4A

loc_547E44:                             ; CODE XREF: TerrainClass__GenerateTexture+124↑j
xor     edi, edi
mov     [esp+2Ch+arg_0], edi

loc_547E4A:                             ; CODE XREF: TerrainClass__GenerateTexture+152↑j
mov     edx, [esp+2Ch+var_18]
xor     ecx, ecx
lea     ebp, (dword_A8ED54+2C3CCh)[ebp]
mov     ebx, [edx]
mov     edx, edi

loc_547E5A:                             ; CODE XREF: TerrainClass__GenerateTexture+19C↓j
mov     esi, [esp+2Ch+arg_28]
xor     eax, eax
test    edx, edx
setl    al
dec     eax
and     eax, edx
mov     byte ptr (dword_A8ED54+119F8h)[esi+ecx], al
mov     esi, ecx
sub     esi, edi
mov     eax, 0
sets    al
dec     eax
add     ebp, 2
and     eax, esi
add     eax, ebx
inc     ecx
mov     [ebp-2], ax
dec     edx
cmp     ecx, 3Ch ; '<'
jl      short loc_547E5A
mov     ecx, [esp+2Ch+arg_28]
mov     edx, [esp+2Ch+arg_0]
mov     [esp+2Ch+var_10], 3Ch ; '<'
lea     ebx, (dword_A8ED54+2B8FCh)[ecx]
lea     esi, [edx+edi-3Ch]

loc_547EA8:                             ; CODE XREF: TerrainClass__GenerateTexture+201↓j
xor     edx, edx

loc_547EAA:                             ; CODE XREF: TerrainClass__GenerateTexture+1EF↓j
mov     eax, edx
mov     ecx, 0
sub     eax, edi
sets    cl
dec     ecx
and     eax, ecx
xor     ecx, ecx
test    esi, esi
setl    cl
dec     ecx
and     ecx, esi
mov     ebp, ecx
mov     ecx, [esp+2Ch+arg_0]
sub     ecx, ebp
sub     ecx, eax
mov     eax, 0
sets    al
dec     eax
and     eax, ecx
mov     [ebx+edx], al
inc     edx
cmp     edx, 3Ch ; '<'
jl      short loc_547EAA
mov     eax, [esp+2Ch+var_10]
sub     ebx, 6CCh
inc     esi
dec     eax
mov     [esp+2Ch+var_10], eax
jnz     short loc_547EA8
mov     ebp, [esp+2Ch+var_C]
mov     ecx, [esp+2Ch+arg_28]
mov     edx, [esp+2Ch+var_18]
add     ebp, 78h ; 'x'
add     ecx, 3Ch ; '<'
add     edx, 4
cmp     ebp, 0D98h
mov     [esp+2Ch+arg_28], ecx
mov     [esp+2Ch+var_C], ebp
mov     [esp+2Ch+var_18], edx
jl      loc_547E02
mov     esi, [esp+2Ch+var_8]
mov     ebx, [esp+2Ch+arg_C]
mov     ebp, [esp+2Ch+arg_14]
mov     byte ptr dword_A8ED54+2D809h, 1

loc_547F33:                             ; CODE XREF: TerrainClass__GenerateTexture+F8↑j
mov     ecx, [esp+2Ch+arg_8]
mov     edx, [ecx]
call    dword ptr [edx+70h]
cmp     eax, 2
jnz     loc_54980E
mov     ecx, [esp+2Ch+var_14]
mov     eax, [ecx]
call    dword ptr [eax+9Ch]
mov     edi, eax
test    edi, edi
jz      loc_54980E
mov     al, byte ptr [esp+2Ch+arg_2C]
test    al, al
jz      short loc_547F9D
mov     eax, ds:887644h
mov     cx, [eax+24h]
add     cx, [eax+4]
mov     eax, [esp+2Ch+arg_10]
sub     ecx, eax
sub     cx, [edi+0Ch]
and     ecx, 0FFFFh
mov     dword_A8ED54+123B0h, ecx
mov     eax, [edi+0Ch]
imul    eax, [esp+2Ch+arg_24]
cdq
sub     eax, edx
sar     eax, 1
neg     eax
add     ecx, eax
mov     dword_A8ED54+123B0h, ecx

loc_547F9D:                             ; CODE XREF: TerrainClass__GenerateTexture+271↑j
mov     ecx, [edi+4]
mov     eax, [esp+2Ch+arg_4]
imul    ecx, [edi]
cdq
idiv    ecx
mov     edx, [edi+edx*4+10h]
test    edx, edx
mov     [esp+2Ch+arg_0], edx
jz      loc_54981D
mov     eax, 3Ch ; '<'
xor     edx, edx
cmp     ebx, ebp
mov     dword_A8ED54+123A0h, eax
mov     dword_A8ED54+123A4h, 1Dh
mov     dword_A8ED54+123A8h, 0
mov     dword_A8ED54+123ACh, edx
mov     dword_A8ED54+12380h, (offset dword_A8ED54+2C3CCh)
mov     dword_A8ED54+12384h, (offset dword_A8ED54+119F8h)
mov     dword_A8ED54+12388h, (offset dword_A8ED54+127F8h)
jge     short loc_548025
mov     eax, ebx
mov     ecx, ebp
sub     eax, ebp
sub     ecx, ebx
add     eax, 3Ch ; '<'
mov     dword_A8ED54+123A8h, ecx
test    eax, eax
mov     dword_A8ED54+123A0h, eax
mov     [esp+2Ch+var_1C], ebp
jg      short loc_548025
mov     byte ptr [esp+2Ch+arg_30], 1

loc_548025:                             ; CODE XREF: TerrainClass__GenerateTexture+310↑j
; TerrainClass__GenerateTexture+32E↑j
mov     ecx, [esp+2Ch+arg_18]
mov     edi, [esp+2Ch+arg_10]
cmp     edi, ecx
jge     short loc_548055
mov     esi, [esp+2Ch+arg_18]
mov     ecx, edi
sub     ecx, esi
mov     edx, esi
add     ecx, 1Dh
sub     edx, edi
test    ecx, ecx
mov     dword_A8ED54+123A4h, ecx
mov     dword_A8ED54+123ACh, edx
jg      short loc_548055
mov     byte ptr [esp+2Ch+arg_30], 1

loc_548055:                             ; CODE XREF: TerrainClass__GenerateTexture+33F↑j
; TerrainClass__GenerateTexture+35E↑j
mov     ecx, [esp+2Ch+arg_1C]
mov     ebx, [esp+2Ch+var_1C]
add     ecx, ebp
add     ebx, eax
cmp     ebx, ecx
mov     edi, 3Bh ; ';'
mov     [esp+2Ch+arg_24], ecx
jle     short loc_548097
mov     edi, [esp+2Ch+arg_1C]
mov     ebx, [esp+2Ch+var_1C]
mov     ecx, eax
sub     ecx, edi
mov     edi, 3Bh ; ';'
sub     ecx, ebp
add     ecx, ebx
sub     eax, ecx
sub     edi, ecx
test    eax, eax
mov     dword_A8ED54+123A0h, eax
jg      short loc_54809B
mov     byte ptr [esp+2Ch+arg_30], 1
jmp     short loc_54809B
; ---------------------------------------------------------------------------

loc_548097:                             ; CODE XREF: TerrainClass__GenerateTexture+37C↑j
mov     ebx, [esp+2Ch+var_1C]

loc_54809B:                             ; CODE XREF: TerrainClass__GenerateTexture+39E↑j
; TerrainClass__GenerateTexture+3A5↑j
mov     eax, [esp+2Ch+arg_18]
mov     ecx, [esp+2Ch+arg_20]
add     eax, ecx
mov     ecx, dword_A8ED54+123A4h
add     ecx, esi
mov     [esp+2Ch+arg_4], eax
cmp     ecx, eax
jle     short loc_5480D0
mov     eax, [esp+2Ch+arg_20]
mov     ecx, [esp+2Ch+arg_18]
sub     eax, esi
add     eax, ecx
test    eax, eax
mov     dword_A8ED54+123A4h, eax
jle     loc_54912F
jmp     short loc_5480D4
; ---------------------------------------------------------------------------

loc_5480D0:                             ; CODE XREF: TerrainClass__GenerateTexture+3C3↑j
mov     ecx, [esp+2Ch+arg_18]

loc_5480D4:                             ; CODE XREF: TerrainClass__GenerateTexture+3DE↑j
mov     al, byte ptr [esp+2Ch+arg_30]
test    al, al
jnz     loc_54912F
mov     eax, dword_A8ED54+123A8h
cmp     eax, 3Bh ; ';'
jle     short loc_5480F4
mov     eax, 3Bh ; ';'
mov     dword_A8ED54+123A8h, eax

loc_5480F4:                             ; CODE XREF: TerrainClass__GenerateTexture+3F8↑j
cmp     edx, 1Ch
jle     short loc_548104
mov     edx, 1Ch
mov     dword_A8ED54+123ACh, edx

loc_548104:                             ; CODE XREF: TerrainClass__GenerateTexture+407↑j
imul    edx, 3Ch ; '<'
add     edx, eax
lea     ecx, (dword_A8ED54+119F8h)[edx]
lea     eax, ds:0ABB120h[edx*2]
mov     dword_A8ED54+12384h, ecx
xor     ecx, ecx
test    edi, edi
setl    cl
dec     ecx
mov     dword_A8ED54+12380h, eax
and     ecx, edi
mov     edi, [esp+2Ch+arg_8]
lea     eax, [ecx+ecx*8]
shl     eax, 4
add     eax, ecx
lea     eax, [eax+eax*2]
lea     ecx, (dword_A8ED54+127F8h)[edx+eax*4]
mov     dword_A8ED54+12388h, ecx
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+74h]
mov     dword_A8ED54+123BCh, eax
mov     eax, [edi]
push    esi
push    ebx
mov     ecx, edi
call    dword ptr [eax+5Ch]
test    eax, eax
mov     dword_A8ED54+12378h, eax
jz      loc_54980E
mov     edi, [esp+2Ch+arg_0]
test    byte ptr [edi+24h], 2
jnz     short loc_54817A
mov     byte ptr [esp+2Ch+arg_2C], 0
jmp     short loc_5481AD
; ---------------------------------------------------------------------------

loc_54817A:                             ; CODE XREF: TerrainClass__GenerateTexture+481↑j
mov     al, byte ptr [esp+2Ch+arg_2C]
test    al, al
jz      short loc_5481AD
mov     edx, ds:886FA4h
mov     ecx, ds:887644h
mov     eax, esi
sub     eax, edx
push    eax
push    ebx
call    Audio__GetSamplePosition
mov     ecx, ds:887644h
mov     dword_A8ED54+12370h, eax
mov     edx, [ecx+28h]
mov     dword_A8ED54+123B4h, edx

loc_5481AD:                             ; CODE XREF: TerrainClass__GenerateTexture+488↑j
; TerrainClass__GenerateTexture+490↑j
mov     eax, ds:886FA4h
mov     ecx, ds:87E8A4h
sub     esi, eax
push    esi
push    ebx
call    StreamClass__ReadAndSeek
mov     ebp, ds:87E8A4h
mov     dl, byte ptr [esp+2Ch+arg_34]
mov     dword_A8ED54+12374h, eax
mov     ecx, [ebp+28h]
mov     dword_A8ED54+123B8h, ecx
lea     ecx, [edi+34h]
test    dl, dl
mov     dword_A8ED54+12364h, ecx
mov     [esp+2Ch+arg_30], ecx
jnz     short loc_5481FC
mov     dl, byte ptr [esp+2Ch+arg_3C]
mov     dword_A8ED54+123C4h, 0FFFFh
test    dl, dl
jz      short loc_548206

loc_5481FC:                             ; CODE XREF: TerrainClass__GenerateTexture+4F8↑j
mov     dword_A8ED54+123C4h, 0

loc_548206:                             ; CODE XREF: TerrainClass__GenerateTexture+50A↑j
mov     edx, [esp+2Ch+arg_40]
mov     esi, dword_A8ED54+123CCh
mov     bl, byte ptr [esp+2Ch+arg_2C]
and     esi, 0FFFFh
sar     edx, 1
and     edx, esi
test    bl, bl
mov     dword_A8ED54+123C8h, edx
jz      short loc_54823B
test    byte ptr [edi+24h], 2
jz      short loc_54823B
mov     edx, [edi+0Ch]
add     edx, edi
mov     dword_A8ED54+12368h, edx
jmp     short loc_548241
; ---------------------------------------------------------------------------

loc_54823B:                             ; CODE XREF: TerrainClass__GenerateTexture+536↑j
; TerrainClass__GenerateTexture+53C↑j
mov     edx, dword_A8ED54+12368h

loc_548241:                             ; CODE XREF: TerrainClass__GenerateTexture+549↑j
test    bl, bl
mov     dword_A8ED54+1238Ch, ecx
mov     dword_A8ED54+12390h, edx
jz      loc_548E9E
mov     esi, ds:887644h
mov     ebx, dword_A8ED54+123A4h
mov     ecx, dword_A8ED54+123A0h
mov     edx, [esi+28h]
mov     edi, [esi+1Ch]
imul    edx, ebx
add     edx, ecx
mov     ecx, dword_A8ED54+12370h
lea     edx, [ecx+edx*2+4]
cmp     edx, edi
jb      loc_5488F3
mov     dl, byte ptr [esp+2Ch+arg_34]
test    dl, dl
jz      loc_54838F
xor     edi, edi
test    ebx, ebx
jle     loc_54911E
mov     eax, dword_A8ED54+12378h

loc_54829F:                             ; CODE XREF: TerrainClass__GenerateTexture+694↓j
mov     ebp, dword_A8ED54+12384h
xor     edx, edx
mov     dl, [ebp+0]
mov     dword_A8ED54+12394h, eax
add     edx, edx
mov     dword_A8ED54+12398h, ecx
add     eax, edx
add     ecx, edx
mov     dword_A8ED54+12378h, eax
mov     dword_A8ED54+12370h, ecx
cmp     ecx, [esi+1Ch]
jb      short loc_5482CE
sub     ecx, [esi+20h]

loc_5482CE:                             ; CODE XREF: TerrainClass__GenerateTexture+5D9↑j
mov     edx, dword_A8ED54+12388h
mov     eax, ecx
xor     ecx, ecx
mov     dword_A8ED54+12370h, eax
mov     cl, [edx]
test    ecx, ecx
jle     short loc_548337
mov     edx, 2

loc_5482E8:                             ; CODE XREF: TerrainClass__GenerateTexture+63F↓j
mov     si, word ptr dword_A8ED54+123C4h
mov     [eax], si
mov     eax, dword_A8ED54+12378h
mov     si, word ptr dword_A8ED54+123C8h
mov     [eax], si
mov     eax, dword_A8ED54+12378h
mov     esi, ds:887644h
add     eax, edx
mov     dword_A8ED54+12378h, eax
mov     eax, dword_A8ED54+12370h
add     eax, edx
mov     dword_A8ED54+12370h, eax
mov     ebx, [esi+1Ch]
cmp     eax, ebx
jb      short loc_548329
sub     eax, [esi+20h]

loc_548329:                             ; CODE XREF: TerrainClass__GenerateTexture+634↑j
dec     ecx
mov     dword_A8ED54+12370h, eax
jnz     short loc_5482E8
mov     ebx, dword_A8ED54+123A4h

loc_548337:                             ; CODE XREF: TerrainClass__GenerateTexture+5F1↑j
mov     ecx, dword_A8ED54+123BCh
mov     edx, dword_A8ED54+12394h
mov     ebp, dword_A8ED54+12384h
lea     eax, [edx+ecx]
mov     ecx, dword_A8ED54+123B4h
mov     edx, dword_A8ED54+12398h
mov     dword_A8ED54+12378h, eax
lea     ecx, [edx+ecx*2]
mov     edx, 3Ch ; '<'
add     ebp, edx
mov     dword_A8ED54+12370h, ecx
mov     dword_A8ED54+12384h, ebp
mov     ebp, dword_A8ED54+12388h
add     ebp, edx
inc     edi
cmp     edi, ebx
mov     dword_A8ED54+12388h, ebp
jl      loc_54829F
jmp     loc_54911E
; ---------------------------------------------------------------------------

loc_54838F:                             ; CODE XREF: TerrainClass__GenerateTexture+59A↑j
mov     dl, byte ptr [esp+2Ch+arg_38]
test    dl, dl
jz      loc_548453
xor     edx, edx
test    ebx, ebx
jle     loc_54911E
mov     edi, 3Ch ; '<'

loc_5483AA:                             ; CODE XREF: TerrainClass__GenerateTexture+758↓j
mov     ebp, dword_A8ED54+12384h
xor     eax, eax
mov     al, [ebp+0]
mov     dword_A8ED54+12398h, ecx
lea     ecx, [ecx+eax*2]
mov     dword_A8ED54+12370h, ecx
mov     eax, [esi+1Ch]
cmp     ecx, eax
jb      short loc_5483CE
sub     ecx, [esi+20h]

loc_5483CE:                             ; CODE XREF: TerrainClass__GenerateTexture+6D9↑j
mov     ebp, dword_A8ED54+12388h
mov     eax, ecx
xor     ecx, ecx
mov     dword_A8ED54+12370h, eax
mov     cl, [ebp+0]
test    ecx, ecx
jle     short loc_548417

loc_5483E4:                             ; CODE XREF: TerrainClass__GenerateTexture+71F↓j
mov     si, word ptr dword_A8ED54+123C4h
mov     [eax], si
mov     eax, dword_A8ED54+12370h
mov     esi, ds:887644h
add     eax, 2
mov     dword_A8ED54+12370h, eax
cmp     eax, [esi+1Ch]
jb      short loc_548409
sub     eax, [esi+20h]

loc_548409:                             ; CODE XREF: TerrainClass__GenerateTexture+714↑j
dec     ecx
mov     dword_A8ED54+12370h, eax
jnz     short loc_5483E4
mov     ebx, dword_A8ED54+123A4h

loc_548417:                             ; CODE XREF: TerrainClass__GenerateTexture+6F2↑j
mov     eax, dword_A8ED54+123B4h
mov     ecx, dword_A8ED54+12398h
mov     ebp, dword_A8ED54+12384h
lea     ecx, [ecx+eax*2]
mov     eax, dword_A8ED54+12388h
add     ebp, edi
add     eax, edi
inc     edx
mov     dword_A8ED54+12370h, ecx
cmp     edx, ebx
mov     dword_A8ED54+12384h, ebp
mov     dword_A8ED54+12388h, eax
jl      loc_5483AA
jmp     loc_54911E
; ---------------------------------------------------------------------------

loc_548453:                             ; CODE XREF: TerrainClass__GenerateTexture+6A5↑j
mov     dl, byte ptr [esp+2Ch+arg_3C]
test    dl, dl
jz      loc_5486F9
mov     edx, ds:8871E0h
mov     al, [edx+17E2h]
test    al, al
jnz     loc_5485B9
xor     ebp, ebp
test    ebx, ebx
jle     loc_54911E
mov     edi, dword_A8ED54+12378h

loc_548483:                             ; CODE XREF: TerrainClass__GenerateTexture+8BE↓j
mov     edx, dword_A8ED54+12380h
mov     ebx, dword_A8ED54+12384h
xor     eax, eax
mov     ax, [edx]
mov     edx, dword_A8ED54+1238Ch
add     eax, edx
xor     edx, edx
mov     dword_A8ED54+12364h, eax
mov     dl, [ebx]
add     edx, edx
mov     dword_A8ED54+12394h, edi
mov     dword_A8ED54+12398h, ecx
add     edi, edx
add     ecx, edx
mov     dword_A8ED54+12378h, edi
mov     dword_A8ED54+12370h, ecx
mov     edx, [esi+1Ch]
cmp     ecx, edx
jb      short loc_5484CD
sub     ecx, [esi+20h]

loc_5484CD:                             ; CODE XREF: TerrainClass__GenerateTexture+7D8↑j
mov     edx, dword_A8ED54+12388h
mov     dword_A8ED54+12370h, ecx
xor     ecx, ecx
mov     cl, [edx]
mov     edx, [esp+2Ch+arg_30]
sub     eax, edx
mov     edx, dword_A8ED54+123ACh
add     eax, ebp
add     eax, edx
and     eax, 1
test    ecx, ecx
jle     short loc_54855C
mov     edx, ecx

loc_5484F6:                             ; CODE XREF: TerrainClass__GenerateTexture+86A↓j
test    eax, eax
jz      short loc_548504
mov     cx, word ptr dword_A8ED54+123C8h
mov     [edi], cx

loc_548504:                             ; CODE XREF: TerrainClass__GenerateTexture+808↑j
mov     ecx, dword_A8ED54+12370h
mov     word ptr [ecx], 0
xor     ecx, ecx
test    eax, eax
setz    cl
mov     edi, dword_A8ED54+12378h
mov     eax, ecx
mov     ecx, dword_A8ED54+12364h
mov     esi, ds:887644h
inc     ecx
add     edi, 2
mov     dword_A8ED54+12364h, ecx
mov     ecx, dword_A8ED54+12370h
add     ecx, 2
mov     dword_A8ED54+12378h, edi
mov     dword_A8ED54+12370h, ecx
mov     ebx, [esi+1Ch]
cmp     ecx, ebx
jb      short loc_548553
sub     ecx, [esi+20h]

loc_548553:                             ; CODE XREF: TerrainClass__GenerateTexture+85E↑j
dec     edx
mov     dword_A8ED54+12370h, ecx
jnz     short loc_5484F6

loc_54855C:                             ; CODE XREF: TerrainClass__GenerateTexture+802↑j
mov     edx, dword_A8ED54+123BCh
mov     eax, dword_A8ED54+12394h
mov     ecx, dword_A8ED54+123B4h
mov     ebx, dword_A8ED54+12388h
lea     edi, [eax+edx]
mov     edx, dword_A8ED54+12398h
mov     eax, 3Ch ; '<'
mov     dword_A8ED54+12378h, edi
lea     ecx, [edx+ecx*2]
mov     edx, dword_A8ED54+12384h
add     edx, eax
add     ebx, eax
mov     eax, dword_A8ED54+123A4h
inc     ebp
cmp     ebp, eax
mov     dword_A8ED54+12370h, ecx
mov     dword_A8ED54+12384h, edx
mov     dword_A8ED54+12388h, ebx
jl      loc_548483
jmp     loc_54911E
; ---------------------------------------------------------------------------

loc_5485B9:                             ; CODE XREF: TerrainClass__GenerateTexture+77D↑j
xor     edi, edi
test    ebx, ebx
jle     loc_54911E
mov     edx, dword_A8ED54+12378h

loc_5485C9:                             ; CODE XREF: TerrainClass__GenerateTexture+9FE↓j
mov     ebp, dword_A8ED54+12380h
xor     eax, eax
mov     ax, [ebp+0]
mov     ebp, dword_A8ED54+1238Ch
add     eax, ebp
mov     ebp, dword_A8ED54+12384h
mov     dword_A8ED54+12364h, eax
xor     eax, eax
mov     al, [ebp+0]
mov     dword_A8ED54+12394h, edx
add     eax, eax
mov     dword_A8ED54+12398h, ecx
add     edx, eax
add     ecx, eax
mov     dword_A8ED54+12378h, edx
mov     dword_A8ED54+12370h, ecx
cmp     ecx, [esi+1Ch]
jb      short loc_548613
sub     ecx, [esi+20h]

loc_548613:                             ; CODE XREF: TerrainClass__GenerateTexture+91E↑j
mov     ebp, dword_A8ED54+12388h
mov     eax, ecx
xor     ecx, ecx
mov     dword_A8ED54+12370h, eax
mov     cl, [ebp+0]
test    ecx, ecx
jle     short loc_5486A2

loc_548629:                             ; CODE XREF: TerrainClass__GenerateTexture+9AA↓j
mov     ebx, dword_A8ED54+123C4h
xor     esi, esi
mov     si, [eax]
cmp     esi, ebx
jle     short loc_548656
mov     ax, [edx]
mov     ebx, dword_A8ED54+123CCh
mov     esi, dword_A8ED54+123C8h
shr     ax, 1
and     eax, ebx
add     eax, esi
mov     [edx], ax
mov     eax, dword_A8ED54+12370h

loc_548656:                             ; CODE XREF: TerrainClass__GenerateTexture+946↑j
mov     word ptr [eax], 0
mov     edx, dword_A8ED54+12364h
mov     eax, dword_A8ED54+12370h
mov     esi, ds:887644h
inc     edx
add     eax, 2
mov     dword_A8ED54+12364h, edx
mov     edx, dword_A8ED54+12378h
add     edx, 2
mov     dword_A8ED54+12370h, eax
mov     dword_A8ED54+12378h, edx
mov     ebx, [esi+1Ch]
cmp     eax, ebx
jb      short loc_548694
sub     eax, [esi+20h]

loc_548694:                             ; CODE XREF: TerrainClass__GenerateTexture+99F↑j
dec     ecx
mov     dword_A8ED54+12370h, eax
jnz     short loc_548629
mov     ebx, dword_A8ED54+123A4h

loc_5486A2:                             ; CODE XREF: TerrainClass__GenerateTexture+937↑j
mov     ecx, dword_A8ED54+123BCh
mov     edx, dword_A8ED54+12394h
mov     eax, dword_A8ED54+123B4h
mov     ebp, dword_A8ED54+12384h
add     edx, ecx
mov     ecx, dword_A8ED54+12398h
mov     dword_A8ED54+12378h, edx
lea     ecx, [ecx+eax*2]
mov     eax, 3Ch ; '<'
add     ebp, eax
mov     dword_A8ED54+12370h, ecx
mov     dword_A8ED54+12384h, ebp
mov     ebp, dword_A8ED54+12388h
add     ebp, eax
inc     edi
cmp     edi, ebx
mov     dword_A8ED54+12388h, ebp
jl      loc_5485C9
jmp     loc_54911E
; ---------------------------------------------------------------------------

loc_5486F9:                             ; CODE XREF: TerrainClass__GenerateTexture+769↑j
test    ebx, ebx
mov     [esp+2Ch+arg_28], 0
jle     loc_54911E

loc_548709:                             ; CODE XREF: TerrainClass__GenerateTexture+BF8↓j
mov     edi, dword_A8ED54+12380h
xor     edx, edx
mov     dx, [edi]
mov     edi, dword_A8ED54+1238Ch
add     edi, edx
mov     dword_A8ED54+12364h, edi
mov     edi, dword_A8ED54+12390h
add     edx, edi
mov     edi, dword_A8ED54+12384h
mov     dword_A8ED54+12368h, edx
xor     edx, edx
mov     dl, [edi]
mov     edi, dword_A8ED54+12378h
add     edx, edx
mov     dword_A8ED54+12394h, edi
mov     dword_A8ED54+12398h, ecx
add     edi, edx
add     ecx, edx
mov     dword_A8ED54+12378h, edi
mov     dword_A8ED54+12370h, ecx
mov     edi, [esi+1Ch]
cmp     ecx, edi
jb      short loc_548768
sub     ecx, [esi+20h]

loc_548768:                             ; CODE XREF: TerrainClass__GenerateTexture+A73↑j
mov     dword_A8ED54+1239Ch, eax
add     eax, edx
mov     dword_A8ED54+12370h, ecx
mov     dword_A8ED54+12374h, eax
cmp     eax, [ebp+1Ch]
jb      short loc_548782
sub     eax, [ebp+20h]

loc_548782:                             ; CODE XREF: TerrainClass__GenerateTexture+A8D↑j
mov     edi, dword_A8ED54+12388h
mov     edx, eax
xor     eax, eax
mov     dword_A8ED54+12374h, edx
mov     al, [edi]
test    eax, eax
jle     loc_548872
mov     [esp+2Ch+arg_30], eax

loc_5487A0:                             ; CODE XREF: TerrainClass__GenerateTexture+B7C↓j
mov     eax, dword_A8ED54+12368h
mov     edi, dword_A8ED54+123B0h
movzx   ax, byte ptr [eax]
add     eax, edi
cmp     [ecx], ax
jb      short loc_54880C
mov     [ecx], ax
mov     edx, dword_A8ED54+12374h
xor     ecx, ecx
xor     eax, eax
mov     cx, [edx]
mov     edx, dword_A8ED54+1237Ch
mov     ax, [edx+ecx*2]
mov     edx, dword_A8ED54+12364h
xor     ecx, ecx
mov     cl, [edx]
or      eax, ecx
mov     ecx, dword_A8ED54+1236Ch
mov     dx, [ecx+eax*2]
mov     eax, dword_A8ED54+12378h
mov     [eax], dx
mov     edx, dword_A8ED54+12374h
mov     ecx, dword_A8ED54+12370h
mov     ebx, dword_A8ED54+123A4h
mov     esi, ds:887644h
mov     ebp, ds:87E8A4h

loc_54880C:                             ; CODE XREF: TerrainClass__GenerateTexture+AC4↑j
mov     eax, dword_A8ED54+12368h
mov     edi, dword_A8ED54+12364h
inc     eax
inc     edi
mov     dword_A8ED54+12368h, eax
mov     eax, dword_A8ED54+12378h
add     eax, 2
add     ecx, 2
mov     dword_A8ED54+12364h, edi
mov     dword_A8ED54+12378h, eax
mov     dword_A8ED54+12370h, ecx
mov     eax, [esi+1Ch]
cmp     ecx, eax
jb      short loc_548844
sub     ecx, [esi+20h]

loc_548844:                             ; CODE XREF: TerrainClass__GenerateTexture+B4F↑j
add     edx, 2
mov     dword_A8ED54+12370h, ecx
mov     dword_A8ED54+12374h, edx
mov     eax, [ebp+1Ch]
cmp     edx, eax
jb      short loc_54885D
sub     edx, [ebp+20h]

loc_54885D:                             ; CODE XREF: TerrainClass__GenerateTexture+B68↑j
mov     eax, [esp+2Ch+arg_30]
mov     dword_A8ED54+12374h, edx
dec     eax
mov     [esp+2Ch+arg_30], eax
jnz     loc_5487A0

loc_548872:                             ; CODE XREF: TerrainClass__GenerateTexture+AA6↑j
mov     ecx, dword_A8ED54+123BCh
mov     edx, dword_A8ED54+12394h
mov     eax, dword_A8ED54+123B4h
add     edx, ecx
mov     ecx, dword_A8ED54+12398h
mov     dword_A8ED54+12378h, edx
mov     edx, dword_A8ED54+123B8h
mov     edi, dword_A8ED54+12384h
lea     ecx, [ecx+eax*2]
mov     eax, dword_A8ED54+1239Ch
mov     dword_A8ED54+12370h, ecx
lea     eax, [eax+edx*2]
mov     edx, dword_A8ED54+12380h
add     edx, 78h ; 'x'
mov     dword_A8ED54+12374h, eax
mov     dword_A8ED54+12380h, edx
mov     edx, 3Ch ; '<'
add     edi, edx
mov     dword_A8ED54+12384h, edi
mov     edi, dword_A8ED54+12388h
add     edi, edx
mov     edx, [esp+2Ch+arg_28]
inc     edx
mov     dword_A8ED54+12388h, edi
cmp     edx, ebx
mov     [esp+2Ch+arg_28], edx
jl      loc_548709
jmp     loc_54911E
; ---------------------------------------------------------------------------

loc_5488F3:                             ; CODE XREF: TerrainClass__GenerateTexture+58E↑j
mov     dl, byte ptr dword_A8ED54+2D808h
test    dl, dl
jz      short loc_54891E
mov     dl, byte ptr [esp+2Ch+arg_38]
test    dl, dl
jnz     short loc_54891E
mov     dl, byte ptr [esp+2Ch+arg_34]
test    dl, dl
jnz     short loc_54892A
mov     dl, byte ptr [esp+2Ch+arg_3C]
test    dl, dl
jz      loc_54911E
jmp     loc_548AB0
; ---------------------------------------------------------------------------

loc_54891E:                             ; CODE XREF: TerrainClass__GenerateTexture+C0B↑j
; TerrainClass__GenerateTexture+C13↑j
mov     dl, byte ptr [esp+2Ch+arg_34]
test    dl, dl
jz      loc_548A08

loc_54892A:                             ; CODE XREF: TerrainClass__GenerateTexture+C1B↑j
xor     esi, esi
test    ebx, ebx
jle     loc_54911E
mov     eax, dword_A8ED54+12378h
mov     edi, 3Ch ; '<'

loc_54893E:                             ; CODE XREF: TerrainClass__GenerateTexture+D0D↓j
mov     ebp, dword_A8ED54+12384h
xor     edx, edx
mov     dl, [ebp+0]
mov     dword_A8ED54+12394h, eax
add     edx, edx
mov     dword_A8ED54+12398h, ecx
add     eax, edx
add     ecx, edx
mov     edx, dword_A8ED54+12388h
mov     dword_A8ED54+12378h, eax
xor     eax, eax
mov     dword_A8ED54+12370h, ecx
mov     al, [edx]
test    eax, eax
jle     short loc_5489B7
mov     edx, 2

loc_548978:                             ; CODE XREF: TerrainClass__GenerateTexture+CBF↓j
mov     bx, word ptr dword_A8ED54+123C4h
mov     [ecx], bx
mov     ecx, dword_A8ED54+12378h
mov     bx, word ptr dword_A8ED54+123C8h
mov     [ecx], bx
mov     ecx, dword_A8ED54+12378h
add     ecx, edx
mov     dword_A8ED54+12378h, ecx
mov     ecx, dword_A8ED54+12370h
add     ecx, edx
dec     eax
mov     dword_A8ED54+12370h, ecx
jnz     short loc_548978
mov     ebx, dword_A8ED54+123A4h

loc_5489B7:                             ; CODE XREF: TerrainClass__GenerateTexture+C81↑j
mov     edx, dword_A8ED54+123BCh
mov     eax, dword_A8ED54+12394h
mov     ecx, dword_A8ED54+123B4h
mov     ebp, dword_A8ED54+12384h
add     eax, edx
mov     edx, dword_A8ED54+12398h
add     ebp, edi
mov     dword_A8ED54+12378h, eax
lea     ecx, [edx+ecx*2]
mov     edx, dword_A8ED54+12388h
add     edx, edi
inc     esi
cmp     esi, ebx
mov     dword_A8ED54+12370h, ecx
mov     dword_A8ED54+12384h, ebp
mov     dword_A8ED54+12388h, edx
jl      loc_54893E
jmp     loc_54911E
; ---------------------------------------------------------------------------

loc_548A08:                             ; CODE XREF: TerrainClass__GenerateTexture+C34↑j
mov     dl, byte ptr [esp+2Ch+arg_38]
test    dl, dl
jz      loc_548AA4
xor     edx, edx
test    ebx, ebx
jle     loc_54911E
mov     esi, 3Ch ; '<'

loc_548A23:                             ; CODE XREF: TerrainClass__GenerateTexture+DAD↓j
mov     edi, dword_A8ED54+12384h
xor     eax, eax
mov     al, [edi]
mov     edi, dword_A8ED54+12388h
mov     dword_A8ED54+12398h, ecx
lea     ecx, [ecx+eax*2]
xor     eax, eax
mov     dword_A8ED54+12370h, ecx
mov     al, [edi]
test    eax, eax
jle     short loc_548A6C

loc_548A4A:                             ; CODE XREF: TerrainClass__GenerateTexture+D74↓j
mov     di, word ptr dword_A8ED54+123C4h
mov     [ecx], di
mov     ecx, dword_A8ED54+12370h
add     ecx, 2
dec     eax
mov     dword_A8ED54+12370h, ecx
jnz     short loc_548A4A
mov     ebx, dword_A8ED54+123A4h

loc_548A6C:                             ; CODE XREF: TerrainClass__GenerateTexture+D58↑j
mov     eax, dword_A8ED54+123B4h
mov     ecx, dword_A8ED54+12398h
mov     ebp, dword_A8ED54+12388h
lea     ecx, [ecx+eax*2]
mov     eax, dword_A8ED54+12384h
add     eax, esi
add     ebp, esi
inc     edx
mov     dword_A8ED54+12370h, ecx
cmp     edx, ebx
mov     dword_A8ED54+12384h, eax
mov     dword_A8ED54+12388h, ebp
jl      short loc_548A23
jmp     loc_54911E
; ---------------------------------------------------------------------------

loc_548AA4:                             ; CODE XREF: TerrainClass__GenerateTexture+D1E↑j
mov     dl, byte ptr [esp+2Ch+arg_3C]
test    dl, dl
jz      loc_548D03

loc_548AB0:                             ; CODE XREF: TerrainClass__GenerateTexture+C29↑j
mov     edx, ds:8871E0h
cmp     byte ptr [edx+17E2h], 0
jnz     loc_548BE2
xor     ebp, ebp
test    ebx, ebx
jle     loc_54911E
mov     esi, dword_A8ED54+12378h

loc_548AD3:                             ; CODE XREF: TerrainClass__GenerateTexture+EE7↓j
mov     eax, dword_A8ED54+12380h
mov     edi, dword_A8ED54+12384h
xor     edx, edx
mov     dx, [eax]
mov     eax, dword_A8ED54+1238Ch
add     edx, eax
xor     eax, eax
mov     dword_A8ED54+12364h, edx
mov     al, [edi]
mov     edi, dword_A8ED54+12388h
add     eax, eax
mov     dword_A8ED54+12394h, esi
mov     dword_A8ED54+12398h, ecx
add     esi, eax
add     ecx, eax
xor     eax, eax
mov     dword_A8ED54+12378h, esi
mov     dword_A8ED54+12370h, ecx
mov     al, [edi]
mov     edi, eax
mov     eax, ebp
sub     eax, [esp+2Ch+arg_30]
add     eax, edx
mov     edx, dword_A8ED54+123ACh
add     eax, edx
and     eax, 1
test    edi, edi
jle     short loc_548B8B

loc_548B35:                             ; CODE XREF: TerrainClass__GenerateTexture+E93↓j
test    eax, eax
jz      short loc_548B49
mov     cx, word ptr dword_A8ED54+123C8h
mov     [esi], cx
mov     ecx, dword_A8ED54+12370h

loc_548B49:                             ; CODE XREF: TerrainClass__GenerateTexture+E47↑j
xor     edx, edx
mov     word ptr [ecx], 0
mov     esi, dword_A8ED54+12378h
mov     ecx, dword_A8ED54+12370h
test    eax, eax
setz    dl
mov     eax, edx
mov     edx, dword_A8ED54+12364h
inc     edx
add     esi, 2
add     ecx, 2
dec     edi
mov     dword_A8ED54+12364h, edx
mov     dword_A8ED54+12378h, esi
mov     dword_A8ED54+12370h, ecx
jnz     short loc_548B35
mov     ebx, dword_A8ED54+123A4h

loc_548B8B:                             ; CODE XREF: TerrainClass__GenerateTexture+E43↑j
mov     eax, dword_A8ED54+123BCh
mov     ecx, dword_A8ED54+12394h
mov     edx, dword_A8ED54+123B4h
mov     edi, dword_A8ED54+12388h
lea     esi, [ecx+eax]
mov     eax, dword_A8ED54+12398h
mov     dword_A8ED54+12378h, esi
lea     ecx, [eax+edx*2]
mov     edx, dword_A8ED54+12384h
mov     eax, 3Ch ; '<'
mov     dword_A8ED54+12370h, ecx
add     edx, eax
add     edi, eax
inc     ebp
mov     dword_A8ED54+12384h, edx
cmp     ebp, ebx
mov     dword_A8ED54+12388h, edi
jl      loc_548AD3
jmp     loc_54911E
; ---------------------------------------------------------------------------

loc_548BE2:                             ; CODE XREF: TerrainClass__GenerateTexture+DCD↑j
mov     dl, byte ptr [esp+2Ch+arg_3C]
test    dl, dl
jz      loc_548D03
xor     esi, esi
test    ebx, ebx
jle     loc_54911E
mov     eax, dword_A8ED54+12378h

loc_548BFD:                             ; CODE XREF: TerrainClass__GenerateTexture+1008↓j
mov     edi, dword_A8ED54+12380h
mov     ebp, dword_A8ED54+1238Ch
xor     edx, edx
mov     dx, [edi]
mov     edi, dword_A8ED54+12384h
add     edx, ebp
mov     dword_A8ED54+12364h, edx
xor     edx, edx
mov     dl, [edi]
mov     edi, dword_A8ED54+12388h
add     edx, edx
mov     dword_A8ED54+12394h, eax
mov     dword_A8ED54+12398h, ecx
add     eax, edx
add     ecx, edx
xor     edx, edx
mov     dword_A8ED54+12378h, eax
mov     dword_A8ED54+12370h, ecx
mov     dl, [edi]
test    edx, edx
jle     short loc_548CAD

loc_548C4A:                             ; CODE XREF: TerrainClass__GenerateTexture+FB5↓j
mov     ebx, dword_A8ED54+123C4h
xor     edi, edi
mov     di, [ecx]
cmp     edi, ebx
jle     short loc_548C78
mov     cx, [eax]
mov     ebx, dword_A8ED54+123CCh
mov     edi, dword_A8ED54+123C8h
shr     cx, 1
and     ecx, ebx
add     ecx, edi
mov     [eax], cx
mov     ecx, dword_A8ED54+12370h

loc_548C78:                             ; CODE XREF: TerrainClass__GenerateTexture+F67↑j
mov     word ptr [ecx], 0
mov     eax, dword_A8ED54+12364h
mov     ecx, dword_A8ED54+12370h
inc     eax
mov     dword_A8ED54+12364h, eax
mov     eax, dword_A8ED54+12378h
add     eax, 2
add     ecx, 2
dec     edx
mov     dword_A8ED54+12378h, eax
mov     dword_A8ED54+12370h, ecx
jnz     short loc_548C4A
mov     ebx, dword_A8ED54+123A4h

loc_548CAD:                             ; CODE XREF: TerrainClass__GenerateTexture+F58↑j
mov     edx, dword_A8ED54+123BCh
mov     eax, dword_A8ED54+12394h
mov     ecx, dword_A8ED54+123B4h
mov     edi, dword_A8ED54+12384h
mov     ebp, dword_A8ED54+12388h
add     eax, edx
mov     edx, dword_A8ED54+12398h
mov     dword_A8ED54+12378h, eax
lea     ecx, [edx+ecx*2]
mov     edx, 3Ch ; '<'
add     edi, edx
add     ebp, edx
inc     esi
mov     dword_A8ED54+12370h, ecx
cmp     esi, ebx
mov     dword_A8ED54+12384h, edi
mov     dword_A8ED54+12388h, ebp
jl      loc_548BFD
jmp     loc_54911E
; ---------------------------------------------------------------------------

loc_548D03:                             ; CODE XREF: TerrainClass__GenerateTexture+DBA↑j
; TerrainClass__GenerateTexture+EF8↑j
xor     edi, edi
test    ebx, ebx
jle     loc_54911E
mov     esi, dword_A8ED54+12378h

loc_548D13:                             ; CODE XREF: TerrainClass__GenerateTexture+11A3↓j
mov     ebp, dword_A8ED54+12380h
xor     edx, edx
mov     dx, [ebp+0]
mov     ebp, dword_A8ED54+1238Ch
add     ebp, edx
mov     dword_A8ED54+12364h, ebp
mov     ebp, dword_A8ED54+12390h
add     edx, ebp
mov     ebp, dword_A8ED54+12384h
mov     dword_A8ED54+12368h, edx
xor     edx, edx
mov     dl, [ebp+0]
mov     dword_A8ED54+12394h, esi
add     edx, edx
mov     dword_A8ED54+12398h, ecx
add     esi, edx
mov     dword_A8ED54+1239Ch, eax
mov     dword_A8ED54+12378h, esi
mov     esi, dword_A8ED54+12388h
add     ecx, edx
add     eax, edx
xor     edx, edx
mov     dword_A8ED54+12370h, ecx
mov     dword_A8ED54+12374h, eax
mov     dl, [esi]
test    edx, edx
jle     loc_548E25
mov     esi, edx

loc_548D84:                             ; CODE XREF: TerrainClass__GenerateTexture+112F↓j
mov     edx, dword_A8ED54+12368h
mov     ebp, dword_A8ED54+123B0h
movzx   dx, byte ptr [edx]
add     edx, ebp
cmp     [ecx], dx
jb      short loc_548DE4
mov     [ecx], dx
mov     ecx, dword_A8ED54+12374h
xor     eax, eax
xor     edx, edx
mov     ax, [ecx]
mov     ecx, dword_A8ED54+1237Ch
mov     dx, [ecx+eax*2]
mov     ecx, dword_A8ED54+12364h
xor     eax, eax
mov     al, [ecx]
or      edx, eax
mov     eax, dword_A8ED54+1236Ch
mov     cx, [eax+edx*2]
mov     edx, dword_A8ED54+12378h
mov     [edx], cx
mov     eax, dword_A8ED54+12374h
mov     ecx, dword_A8ED54+12370h
mov     ebx, dword_A8ED54+123A4h

loc_548DE4:                             ; CODE XREF: TerrainClass__GenerateTexture+10A9↑j
mov     ebp, dword_A8ED54+12368h
mov     edx, dword_A8ED54+12364h
inc     ebp
inc     edx
mov     dword_A8ED54+12368h, ebp
mov     ebp, dword_A8ED54+12378h
add     ebp, 2
add     ecx, 2
add     eax, 2
dec     esi
mov     dword_A8ED54+12364h, edx
mov     dword_A8ED54+12378h, ebp
mov     dword_A8ED54+12370h, ecx
mov     dword_A8ED54+12374h, eax
jnz     loc_548D84

loc_548E25:                             ; CODE XREF: TerrainClass__GenerateTexture+108C↑j
mov     eax, dword_A8ED54+123BCh
mov     ecx, dword_A8ED54+12394h
mov     edx, dword_A8ED54+123B4h
mov     ebp, dword_A8ED54+12384h
lea     esi, [ecx+eax]
mov     eax, dword_A8ED54+12398h
mov     dword_A8ED54+12378h, esi
lea     ecx, [eax+edx*2]
mov     edx, dword_A8ED54+123B8h
mov     eax, dword_A8ED54+1239Ch
mov     dword_A8ED54+12370h, ecx
lea     eax, [eax+edx*2]
mov     edx, dword_A8ED54+12380h
add     edx, 78h ; 'x'
mov     dword_A8ED54+12374h, eax
mov     dword_A8ED54+12380h, edx
mov     edx, 3Ch ; '<'
add     ebp, edx
mov     dword_A8ED54+12384h, ebp
mov     ebp, dword_A8ED54+12388h
add     ebp, edx
inc     edi
cmp     edi, ebx
mov     dword_A8ED54+12388h, ebp
jl      loc_548D13
jmp     loc_54911E
; ---------------------------------------------------------------------------

loc_548E9E:                             ; CODE XREF: TerrainClass__GenerateTexture+55F↑j
mov     edi, dword_A8ED54+123A4h
mov     edx, dword_A8ED54+123A0h
mov     ecx, edi
imul    ecx, [ebp+28h]
add     ecx, edx
lea     edx, [eax+ecx*2+4]
mov     ecx, [ebp+1Ch]
cmp     edx, ecx
jb      loc_54900B
test    edi, edi
mov     [esp+2Ch+arg_30], 0
jle     loc_54911E
mov     ecx, dword_A8ED54+12378h

loc_548ED7:                             ; CODE XREF: TerrainClass__GenerateTexture+1310↓j
mov     edx, dword_A8ED54+12380h
mov     ebx, dword_A8ED54+12384h
xor     esi, esi
mov     si, [edx]
mov     edx, dword_A8ED54+1238Ch
add     esi, edx
xor     edx, edx
mov     dword_A8ED54+12364h, esi
mov     dl, [ebx]
add     edx, edx
mov     dword_A8ED54+12394h, ecx
mov     dword_A8ED54+1239Ch, eax
add     ecx, edx
add     eax, edx
mov     dword_A8ED54+12378h, ecx
mov     dword_A8ED54+12374h, eax
mov     edx, [ebp+1Ch]
cmp     eax, edx
jb      short loc_548F20
sub     eax, [ebp+20h]

loc_548F20:                             ; CODE XREF: TerrainClass__GenerateTexture+122B↑j
mov     ebx, dword_A8ED54+12388h
xor     edx, edx
mov     dword_A8ED54+12374h, eax
mov     dl, [ebx]
test    edx, edx
jle     short loc_548F9E

loc_548F33:                             ; CODE XREF: TerrainClass__GenerateTexture+12A6↓j
mov     ebx, dword_A8ED54+1237Ch
xor     edi, edi
mov     di, [eax]
xor     eax, eax
mov     ax, [ebx+edi*2]
xor     ebx, ebx
mov     bl, [esi]
mov     esi, dword_A8ED54+1236Ch
or      eax, ebx
mov     ax, [esi+eax*2]
mov     [ecx], ax
mov     ecx, dword_A8ED54+12378h
mov     esi, dword_A8ED54+12364h
mov     eax, dword_A8ED54+12374h
mov     ebp, ds:87E8A4h
add     ecx, 2
inc     esi
add     eax, 2
mov     dword_A8ED54+12378h, ecx
mov     dword_A8ED54+12364h, esi
mov     dword_A8ED54+12374h, eax
mov     edi, [ebp+1Ch]
cmp     eax, edi
jb      short loc_548F90
sub     eax, [ebp+20h]

loc_548F90:                             ; CODE XREF: TerrainClass__GenerateTexture+129B↑j
dec     edx
mov     dword_A8ED54+12374h, eax
jnz     short loc_548F33
mov     edi, dword_A8ED54+123A4h

loc_548F9E:                             ; CODE XREF: TerrainClass__GenerateTexture+1241↑j
mov     ecx, dword_A8ED54+123BCh
mov     edx, dword_A8ED54+12394h
mov     eax, dword_A8ED54+123B8h
add     ecx, edx
mov     edx, dword_A8ED54+1239Ch
mov     ebx, dword_A8ED54+12384h
mov     esi, dword_A8ED54+12388h
mov     dword_A8ED54+12378h, ecx
lea     eax, [edx+eax*2]
mov     edx, dword_A8ED54+12380h
add     edx, 78h ; 'x'
mov     dword_A8ED54+12374h, eax
mov     dword_A8ED54+12380h, edx
mov     edx, 3Ch ; '<'
add     ebx, edx
add     esi, edx
mov     edx, [esp+2Ch+arg_30]
mov     dword_A8ED54+12384h, ebx
inc     edx
mov     dword_A8ED54+12388h, esi
cmp     edx, edi
mov     [esp+2Ch+arg_30], edx
jl      loc_548ED7
jmp     loc_54911E
; ---------------------------------------------------------------------------

loc_54900B:                             ; CODE XREF: TerrainClass__GenerateTexture+11CB↑j
xor     ebp, ebp
test    edi, edi
jle     loc_54911E
mov     ecx, dword_A8ED54+12378h

loc_54901B:                             ; CODE XREF: TerrainClass__GenerateTexture+1428↓j
mov     edx, dword_A8ED54+12380h
mov     ebx, dword_A8ED54+12384h
xor     esi, esi
mov     si, [edx]
mov     edx, dword_A8ED54+1238Ch
add     esi, edx
xor     edx, edx
mov     dword_A8ED54+12364h, esi
mov     dl, [ebx]
mov     ebx, dword_A8ED54+12388h
add     edx, edx
mov     dword_A8ED54+12394h, ecx
mov     dword_A8ED54+1239Ch, eax
add     ecx, edx
add     eax, edx
xor     edx, edx
mov     dword_A8ED54+12378h, ecx
mov     dword_A8ED54+12374h, eax
mov     dl, [ebx]
test    edx, edx
jle     short loc_5490BE

loc_549068:                             ; CODE XREF: TerrainClass__GenerateTexture+13C6↓j
mov     ebx, dword_A8ED54+1237Ch
xor     edi, edi
mov     di, [eax]
xor     eax, eax
mov     ax, [ebx+edi*2]
xor     ebx, ebx
mov     bl, [esi]
mov     esi, dword_A8ED54+1236Ch
or      eax, ebx
mov     ax, [esi+eax*2]
mov     [ecx], ax
mov     ecx, dword_A8ED54+12378h
mov     esi, dword_A8ED54+12364h
mov     eax, dword_A8ED54+12374h
add     ecx, 2
inc     esi
add     eax, 2
dec     edx
mov     dword_A8ED54+12378h, ecx
mov     dword_A8ED54+12364h, esi
mov     dword_A8ED54+12374h, eax
jnz     short loc_549068
mov     edi, dword_A8ED54+123A4h

loc_5490BE:                             ; CODE XREF: TerrainClass__GenerateTexture+1376↑j
mov     ecx, dword_A8ED54+123BCh
mov     edx, dword_A8ED54+12394h
mov     ebx, dword_A8ED54+12380h
mov     eax, dword_A8ED54+1239Ch
mov     esi, dword_A8ED54+12384h
add     ecx, edx
mov     edx, dword_A8ED54+123B8h
add     ebx, 78h ; 'x'
mov     dword_A8ED54+12380h, ebx
mov     ebx, dword_A8ED54+12388h
lea     eax, [eax+edx*2]
mov     edx, 3Ch ; '<'
add     esi, edx
add     ebx, edx
inc     ebp
mov     dword_A8ED54+12378h, ecx
cmp     ebp, edi
mov     dword_A8ED54+12374h, eax
mov     dword_A8ED54+12384h, esi
mov     dword_A8ED54+12388h, ebx
jl      loc_54901B

loc_54911E:                             ; CODE XREF: TerrainClass__GenerateTexture+5A4↑j
; TerrainClass__GenerateTexture+69A↑j ...
mov     ecx, [esp+2Ch+arg_8]
mov     eax, [ecx]
call    dword ptr [eax+60h]
mov     ebp, [esp+2Ch+arg_14]
mov     ecx, [esp+2Ch+arg_18]

loc_54912F:                             ; CODE XREF: TerrainClass__GenerateTexture+3D8↑j
; TerrainClass__GenerateTexture+3EA↑j
mov     ebx, [esp+2Ch+arg_0]
test    byte ptr [ebx+24h], 1
jz      loc_54980E
mov     al, byte ptr [esp+2Ch+arg_34]
test    al, al
jnz     loc_54980E
mov     al, byte ptr [esp+2Ch+arg_38]
test    al, al
jnz     loc_54980E
mov     al, byte ptr [esp+2Ch+arg_3C]
test    al, al
jnz     loc_54980E
mov     esi, [ebx+14h]
mov     eax, [ebx]
mov     edi, [esp+2Ch+arg_C]
mov     edx, [ebx+4]
sub     esi, eax
mov     eax, [esp+2Ch+arg_10]
add     esi, edi
mov     edi, [ebx+18h]
sub     edi, edx
add     edi, eax
mov     eax, [ebx+1Ch]
mov     dword_A8ED54+123A0h, eax
mov     edx, [ebx+20h]
mov     dword_A8ED54+123A4h, edx
xor     edx, edx
cmp     esi, ebp
mov     dword_A8ED54+123A8h, edx
mov     dword_A8ED54+123ACh, edx
jge     short loc_5491BE
mov     edx, esi
sub     edx, ebp
add     eax, edx
mov     edx, ebp
sub     edx, esi
mov     dword_A8ED54+123A0h, eax
test    eax, eax
mov     dword_A8ED54+123A8h, edx
mov     esi, ebp
jle     loc_54980E

loc_5491BE:                             ; CODE XREF: TerrainClass__GenerateTexture+14AD↑j
cmp     edi, ecx
jge     short loc_5491F2
mov     edx, edi
sub     edx, ecx
mov     ecx, dword_A8ED54+123A4h
add     ecx, edx
mov     dword_A8ED54+123A4h, ecx
mov     ecx, [esp+2Ch+arg_18]
mov     edx, ecx
sub     edx, edi
mov     edi, ecx
mov     dword_A8ED54+123ACh, edx
mov     edx, dword_A8ED54+123A4h
test    edx, edx
jle     loc_54980E

loc_5491F2:                             ; CODE XREF: TerrainClass__GenerateTexture+14D0↑j
lea     edx, [eax+esi]
cmp     edx, [esp+2Ch+arg_24]
jle     short loc_549210
mov     eax, [esp+2Ch+arg_1C]
sub     eax, esi
add     eax, ebp
test    eax, eax
mov     dword_A8ED54+123A0h, eax
jle     loc_54980E

loc_549210:                             ; CODE XREF: TerrainClass__GenerateTexture+1509↑j
mov     edx, dword_A8ED54+123A4h
mov     ebp, [esp+2Ch+arg_4]
add     edx, edi
cmp     edx, ebp
jle     short loc_549236
mov     edx, [esp+2Ch+arg_20]
sub     edx, edi
add     edx, ecx
test    edx, edx
mov     dword_A8ED54+123A4h, edx
jle     loc_54980E

loc_549236:                             ; CODE XREF: TerrainClass__GenerateTexture+152E↑j
mov     ecx, [ebx+1Ch]
mov     ebp, [esp+2Ch+arg_8]
sub     ecx, eax
mov     dword_A8ED54+123C0h, ecx
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+70h]
imul    eax, dword_A8ED54+123A0h
mov     [esp+2Ch+arg_3C], eax
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+74h]
sub     eax, [esp+2Ch+arg_3C]
mov     dword_A8ED54+123BCh, eax
mov     al, byte ptr [esp+2Ch+arg_2C]
test    al, al
jz      short loc_5492A3
mov     ecx, ds:886FA4h
mov     eax, edi
sub     eax, ecx
mov     ecx, ds:887644h
push    eax
push    esi
call    Audio__GetSamplePosition
mov     ecx, ds:887644h
mov     dword_A8ED54+12370h, eax
mov     eax, dword_A8ED54+123A0h
mov     edx, [ecx+28h]
sub     edx, eax
mov     dword_A8ED54+123B4h, edx

loc_5492A3:                             ; CODE XREF: TerrainClass__GenerateTexture+157F↑j
mov     edx, ds:886FA4h
mov     ecx, ds:87E8A4h
mov     eax, edi
sub     eax, edx
push    eax
push    esi
call    StreamClass__ReadAndSeek
mov     edx, dword_A8ED54+123A0h
mov     dword_A8ED54+12374h, eax
mov     eax, ds:87E8A4h
push    edi
push    esi
mov     ecx, [eax+28h]
sub     ecx, edx
mov     dword_A8ED54+123B8h, ecx
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+5Ch]
test    eax, eax
mov     dword_A8ED54+12378h, eax
jz      loc_54980E
mov     edi, [ebx+8]
mov     edx, dword_A8ED54+123A8h
mov     esi, dword_A8ED54+123ACh
add     edi, ebx
add     edi, edx
mov     dword_A8ED54+12364h, edi
mov     ecx, [ebx+1Ch]
imul    ecx, esi
add     edi, ecx
mov     cl, byte ptr [esp+2Ch+arg_2C]
test    cl, cl
mov     dword_A8ED54+12364h, edi
jz      loc_54964E
mov     ecx, [esp+2Ch+arg_0]
mov     ebx, [ecx+10h]
add     ebx, ecx
add     ebx, edx
mov     dword_A8ED54+12368h, ebx
mov     edx, [ecx+1Ch]
imul    edx, esi
mov     esi, ds:887644h
add     ebx, edx
mov     edx, dword_A8ED54+123A4h
mov     dword_A8ED54+12368h, ebx
mov     ebp, [esi+28h]
mov     ecx, dword_A8ED54+123A0h
imul    ebp, edx
add     ebp, ecx
mov     ecx, dword_A8ED54+12370h
lea     ebp, [ecx+ebp*2+4]
cmp     ebp, [esi+1Ch]
jb      loc_5494F8
test    edx, edx
mov     [esp+2Ch+arg_2C], 0
jle     loc_549805
mov     esi, dword_A8ED54+12374h

loc_549381:                             ; CODE XREF: TerrainClass__GenerateTexture+17FD↓j
mov     edx, dword_A8ED54+123A0h
mov     [esp+2Ch+arg_3C], 0
test    edx, edx
jle     loc_549473

loc_549397:                             ; CODE XREF: TerrainClass__GenerateTexture+177D↓j
mov     dl, [edi]
test    dl, dl
jz      short loc_54940A
movzx   bp, byte ptr [ebx]
add     ebp, dword_A8ED54+123B0h
cmp     [ecx], bp
jb      short loc_54940A
mov     edi, dword_A8ED54+1237Ch
xor     ecx, ecx
mov     cx, [esi]
xor     esi, esi
and     edx, 0FFh
mov     si, [edi+ecx*2]
or      esi, edx
mov     edx, dword_A8ED54+1236Ch
mov     cx, [edx+esi*2]
mov     [eax], cx
mov     edx, dword_A8ED54+12368h
mov     ecx, dword_A8ED54+123B0h
movzx   ax, byte ptr [edx]
add     eax, ecx
mov     ecx, dword_A8ED54+12370h
mov     [ecx], ax
mov     ebx, dword_A8ED54+12368h
mov     edi, dword_A8ED54+12364h
mov     esi, dword_A8ED54+12374h
mov     ecx, dword_A8ED54+12370h
mov     eax, dword_A8ED54+12378h

loc_54940A:                             ; CODE XREF: TerrainClass__GenerateTexture+16AB↑j
; TerrainClass__GenerateTexture+16BA↑j
mov     edx, ds:887644h
add     eax, 2
inc     edi
inc     ebx
add     ecx, 2
mov     dword_A8ED54+12378h, eax
mov     dword_A8ED54+12364h, edi
mov     dword_A8ED54+12368h, ebx
mov     dword_A8ED54+12370h, ecx
mov     ebp, [edx+1Ch]
cmp     ecx, ebp
jb      short loc_549439
sub     ecx, [edx+20h]

loc_549439:                             ; CODE XREF: TerrainClass__GenerateTexture+1744↑j
mov     edx, ds:87E8A4h
add     esi, 2
mov     dword_A8ED54+12370h, ecx
mov     dword_A8ED54+12374h, esi
cmp     esi, [edx+1Ch]
jb      short loc_549456
sub     esi, [edx+20h]

loc_549456:                             ; CODE XREF: TerrainClass__GenerateTexture+1761↑j
mov     edx, [esp+2Ch+arg_3C]
mov     ebp, dword_A8ED54+123A0h
inc     edx
mov     dword_A8ED54+12374h, esi
cmp     edx, ebp
mov     [esp+2Ch+arg_3C], edx
jl      loc_549397

loc_549473:                             ; CODE XREF: TerrainClass__GenerateTexture+16A1↑j
mov     edx, dword_A8ED54+123BCh
add     eax, edx
mov     edx, dword_A8ED54+123C0h
add     edi, edx
add     ebx, edx
mov     edx, dword_A8ED54+123B4h
mov     dword_A8ED54+12378h, eax
mov     dword_A8ED54+12364h, edi
mov     dword_A8ED54+12368h, ebx
lea     ecx, [ecx+edx*2]
mov     edx, ds:887644h
mov     dword_A8ED54+12370h, ecx
cmp     ecx, [edx+1Ch]
jb      short loc_5494B3
sub     ecx, [edx+20h]

loc_5494B3:                             ; CODE XREF: TerrainClass__GenerateTexture+17BE↑j
mov     edx, dword_A8ED54+123B8h
mov     dword_A8ED54+12370h, ecx
lea     esi, [esi+edx*2]
mov     edx, ds:87E8A4h
mov     dword_A8ED54+12374h, esi
cmp     esi, [edx+1Ch]
jb      short loc_5494D6
sub     esi, [edx+20h]

loc_5494D6:                             ; CODE XREF: TerrainClass__GenerateTexture+17E1↑j
mov     edx, [esp+2Ch+arg_2C]
mov     ebp, dword_A8ED54+123A4h
inc     edx
mov     dword_A8ED54+12374h, esi
cmp     edx, ebp
mov     [esp+2Ch+arg_2C], edx
jl      loc_549381
jmp     loc_549805
; ---------------------------------------------------------------------------

loc_5494F8:                             ; CODE XREF: TerrainClass__GenerateTexture+1675↑j
cmp     byte ptr dword_A8ED54+2D808h, 0
jz      short loc_549513
push    (offset dword_A8ED54+12364h)
call    globalHelper_0C61CF
add     esp, 4
jmp     loc_549805
; ---------------------------------------------------------------------------

loc_549513:                             ; CODE XREF: TerrainClass__GenerateTexture+180F↑j
test    edx, edx
mov     [esp+2Ch+arg_2C], 0
jle     loc_549805
mov     esi, dword_A8ED54+12374h

loc_549529:                             ; CODE XREF: TerrainClass__GenerateTexture+1953↓j
mov     ebp, dword_A8ED54+123A0h
mov     [esp+2Ch+arg_3C], 0
test    ebp, ebp
jle     loc_5495F7

loc_54953F:                             ; CODE XREF: TerrainClass__GenerateTexture+18FB↓j
mov     dl, [edi]
test    dl, dl
jz      short loc_5495B2
movzx   bp, byte ptr [ebx]
add     ebp, dword_A8ED54+123B0h
cmp     [ecx], bp
jb      short loc_5495B2
mov     edi, dword_A8ED54+1237Ch
xor     ecx, ecx
mov     cx, [esi]
xor     esi, esi
and     edx, 0FFh
mov     si, [edi+ecx*2]
or      esi, edx
mov     edx, dword_A8ED54+1236Ch
mov     cx, [edx+esi*2]
mov     [eax], cx
mov     edx, dword_A8ED54+12368h
mov     ecx, dword_A8ED54+123B0h
movzx   ax, byte ptr [edx]
add     eax, ecx
mov     ecx, dword_A8ED54+12370h
mov     [ecx], ax
mov     ebx, dword_A8ED54+12368h
mov     edi, dword_A8ED54+12364h
mov     esi, dword_A8ED54+12374h
mov     ecx, dword_A8ED54+12370h
mov     eax, dword_A8ED54+12378h

loc_5495B2:                             ; CODE XREF: TerrainClass__GenerateTexture+1853↑j
; TerrainClass__GenerateTexture+1862↑j
mov     edx, [esp+2Ch+arg_3C]
mov     ebp, dword_A8ED54+123A0h
add     eax, 2
inc     edi
inc     ebx
add     ecx, 2
add     esi, 2
inc     edx
cmp     edx, ebp
mov     dword_A8ED54+12378h, eax
mov     dword_A8ED54+12364h, edi
mov     dword_A8ED54+12368h, ebx
mov     dword_A8ED54+12370h, ecx
mov     dword_A8ED54+12374h, esi
mov     [esp+2Ch+arg_3C], edx
jl      loc_54953F
mov     edx, dword_A8ED54+123A4h

loc_5495F7:                             ; CODE XREF: TerrainClass__GenerateTexture+1849↑j
mov     ebp, dword_A8ED54+123BCh
add     eax, ebp
mov     ebp, dword_A8ED54+123C0h
add     edi, ebp
add     ebx, ebp
mov     ebp, dword_A8ED54+123B4h
mov     dword_A8ED54+12378h, eax
mov     dword_A8ED54+12364h, edi
mov     dword_A8ED54+12368h, ebx
lea     ecx, [ecx+ebp*2]
mov     ebp, dword_A8ED54+123B8h
mov     dword_A8ED54+12370h, ecx
lea     esi, [esi+ebp*2]
mov     ebp, [esp+2Ch+arg_2C]
inc     ebp
mov     dword_A8ED54+12374h, esi
cmp     ebp, edx
mov     [esp+2Ch+arg_2C], ebp
jl      loc_549529
jmp     loc_549805
; ---------------------------------------------------------------------------

loc_54964E:                             ; CODE XREF: TerrainClass__GenerateTexture+1629↑j
mov     esi, ds:87E8A4h
mov     edx, dword_A8ED54+123A4h
mov     ebp, dword_A8ED54+123A0h
mov     ecx, dword_A8ED54+12374h
mov     ebx, [esi+28h]
imul    ebx, edx
add     ebx, ebp
lea     ebx, [ecx+ebx*2+4]
cmp     ebx, [esi+1Ch]
jb      loc_54975B
test    edx, edx
mov     [esp+2Ch+arg_3C], 0
jle     loc_549805

loc_54968B:                             ; CODE XREF: TerrainClass__GenerateTexture+1A60↓j
xor     ebx, ebx
test    ebp, ebp
jle     short loc_54970B

loc_549691:                             ; CODE XREF: TerrainClass__GenerateTexture+1A13↓j
mov     dl, [edi]
test    dl, dl
jz      short loc_5496DA
mov     edi, dword_A8ED54+1237Ch
xor     esi, esi
mov     si, [ecx]
xor     ecx, ecx
and     edx, 0FFh
mov     cx, [edi+esi*2]
or      ecx, edx
mov     edx, dword_A8ED54+1236Ch
mov     cx, [edx+ecx*2]
mov     [eax], cx
mov     edi, dword_A8ED54+12364h
mov     ecx, dword_A8ED54+12374h
mov     eax, dword_A8ED54+12378h
mov     ebp, dword_A8ED54+123A0h
mov     esi, ds:87E8A4h

loc_5496DA:                             ; CODE XREF: TerrainClass__GenerateTexture+19A5↑j
add     eax, 2
add     ecx, 2
mov     dword_A8ED54+12378h, eax
mov     dword_A8ED54+12374h, ecx
cmp     ecx, [esi+1Ch]
jb      short loc_5496F3
sub     ecx, [esi+20h]

loc_5496F3:                             ; CODE XREF: TerrainClass__GenerateTexture+19FE↑j
inc     edi
inc     ebx
cmp     ebx, ebp
mov     dword_A8ED54+12374h, ecx
mov     dword_A8ED54+12364h, edi
jl      short loc_549691
mov     edx, dword_A8ED54+123A4h

loc_54970B:                             ; CODE XREF: TerrainClass__GenerateTexture+199F↑j
mov     ebx, dword_A8ED54+123BCh
add     eax, ebx
mov     ebx, dword_A8ED54+123B8h
mov     dword_A8ED54+12378h, eax
lea     ecx, [ecx+ebx*2]
mov     dword_A8ED54+12374h, ecx
mov     ebx, [esi+1Ch]
cmp     ecx, ebx
jb      short loc_549731
sub     ecx, [esi+20h]

loc_549731:                             ; CODE XREF: TerrainClass__GenerateTexture+1A3C↑j
mov     ebx, dword_A8ED54+123C0h
mov     dword_A8ED54+12374h, ecx
add     edi, ebx
mov     ebx, [esp+2Ch+arg_3C]
inc     ebx
mov     dword_A8ED54+12364h, edi
cmp     ebx, edx
mov     [esp+2Ch+arg_3C], ebx
jl      loc_54968B
jmp     loc_549805
; ---------------------------------------------------------------------------

loc_54975B:                             ; CODE XREF: TerrainClass__GenerateTexture+1985↑j
xor     ebx, ebx
test    edx, edx
jle     loc_549805

loc_549765:                             ; CODE XREF: TerrainClass__GenerateTexture+1B0F↓j
xor     esi, esi
test    ebp, ebp
jle     short loc_5497CC

loc_54976B:                             ; CODE XREF: TerrainClass__GenerateTexture+1ADA↓j
mov     dl, [edi]
test    dl, dl
jz      short loc_5497AF
mov     ebp, dword_A8ED54+1237Ch
xor     edi, edi
mov     di, [ecx]
xor     ecx, ecx
and     edx, 0FFh
mov     cx, [ebp+edi*2+0]
or      ecx, edx
mov     edx, dword_A8ED54+1236Ch
mov     cx, [edx+ecx*2]
mov     [eax], cx
mov     edi, dword_A8ED54+12364h
mov     ecx, dword_A8ED54+12374h
mov     eax, dword_A8ED54+12378h
mov     ebp, dword_A8ED54+123A0h

loc_5497AF:                             ; CODE XREF: TerrainClass__GenerateTexture+1A7F↑j
add     eax, 2
inc     edi
add     ecx, 2
inc     esi
cmp     esi, ebp
mov     dword_A8ED54+12378h, eax
mov     dword_A8ED54+12364h, edi
mov     dword_A8ED54+12374h, ecx
jl      short loc_54976B

loc_5497CC:                             ; CODE XREF: TerrainClass__GenerateTexture+1A79↑j
mov     edx, dword_A8ED54+123B8h
mov     esi, dword_A8ED54+123BCh
add     eax, esi
lea     ecx, [ecx+edx*2]
mov     edx, dword_A8ED54+123C0h
add     edi, edx
mov     edx, dword_A8ED54+123A4h
inc     ebx
mov     dword_A8ED54+12378h, eax
cmp     ebx, edx
mov     dword_A8ED54+12374h, ecx
mov     dword_A8ED54+12364h, edi
jl      loc_549765

loc_549805:                             ; CODE XREF: TerrainClass__GenerateTexture+1685↑j
; TerrainClass__GenerateTexture+1803↑j ...
mov     ecx, [esp+2Ch+arg_8]
mov     eax, [ecx]
call    dword ptr [eax+60h]

loc_54980E:                             ; CODE XREF: TerrainClass__GenerateTexture+24F↑j
; TerrainClass__GenerateTexture+265↑j ...
mov     ecx, [esp+2Ch+Block]
push    ecx             ; Block
mov     ecx, offset unk_87E8A8
call    FractalNoise__Dtor

loc_54981D:                             ; CODE XREF: TerrainClass__GenerateTexture+13↑j
; TerrainClass__GenerateTexture+2C4↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 1Ch
retn    44h ; 'D'
*/
} }

// ==== BACKFILL 0x00549D70  IsometricTileTypeClass::SaveToINI  cls=IsometricTileTypeClass  sig=csp  renamed_refs=0  residual=- ====
int IsometricTileTypeClass::SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x00549D90  IsometricTileTypeClass::GetClassIdentifier  cls=IsometricTileTypeClass  sig=csp  renamed_refs=0  residual=- ====
int IsometricTileTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1525862010;
  a2[1] = 298976820;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x00549E90  TerrainClass::InitTheatre  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TerrainClass::InitTheatre() {
{
      int v2;
      int v3;
      _DWORD *v4;
      int v5;
      _DWORD *v6;
      int v7;
      int result;
      _DWORD *v9;
      _WORD *v10;
      int v11;
      _WORD *v12;
      int v13;
      int v14;
      int v15;
      int v16;
      char v17;
      char v18;
      char v19;
      float v20;
      _WORD *v21;
      float v22;
      _BYTE *v23;
      int v24;
      int v25;
      int v26;
      _BYTE *v27;
      unsigned __int8 v28;
      int v29;
      int v30;
      int v31;
      int v32;
      bool v33;
      __int16 v34;
      char v35[4];
      __int16 v36;
      __int16 v37;
      char v38;
      int v39;
      float v40;
      int v41;
      _DWORD *v42;
      int v43;
      int v44;
      _DWORD *v45;

      v2 = 0;
      v3 = this->q2B4;
      v4 = (_DWORD *)this->q0A4;
      v45 = v4;
      if ( v3 > 0 )
      {
        do
        {
          if ( *(_DWORD *)(this->q2A8 + 4 * v2) )
            __3_YAXPAX_Z(*(void **)(this->q2A8 + 4 * v2));
          ++v2;
        }
        while ( v2 < this->q2B4 );
      }
      v5 = this->q2A4;
      v6 = this + 169;
      (*(void (__thiscall **)(_DWORD *))(v5 + 12))(v6);
      v7 = v4[1];
      v41 = 0;
      result = *v4 * v7;
      if ( result > 0 )
      {
        v9 = v4 + 4;
        v42 = v4 + 4;
        do
        {
          if ( *v9 )
          {
            v10 = __2_YAPAXI_Z(0x34u);
            v11 = *v9;
            v12 = v10;
            v13 = v6[2];
            if ( v6[4] < v13
              || (*((_BYTE *)v6 + 13) || !v13)
              && (v14 = v6[5], v14 > 0)
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 8))(v6, v13 + v14, 0) )
            {
              v15 = v6[4];
              v16 = v6[1];
              v6[4] = v15 + 1;
              *(_DWORD *)(v16 + 4 * v15) = v12;
            }
            v17 = *(_BYTE *)(v11 + 45);
            v37 = *(_WORD *)(v11 + 43);
            v38 = v17;
            v18 = *(_BYTE *)(v11 + 47);
            v19 = *(_BYTE *)(v11 + 46);
            BYTE2(v39) = *(_BYTE *)(v11 + 48);
            BYTE1(v39) = v18;
            LOBYTE(v39) = v19;
            Color::ScaleRGB((int)&v37, 1.4);
            Color::ScaleRGB((int)&v39, 1.4);
            v20 = 0.0;
            v21 = v12;
            v40 = 0.0;
            do
            {
              v40 = (double)SLODWORD(v40) * 0.08333333333333333;
              v22 = v40;
              v23 = Color::Lerp2(&v34, (int)&v37, (int)&v43, v40);
              BYTE1(v24) = 0;
              v36 = *(_WORD *)v23;
              LOBYTE(v24) = v23[2] >> g_BitMask_Red;
              LOWORD(v23) = (unsigned __int8)(HIBYTE(v36) >> g_BitMask_Blue);
              v25 = (_DWORD)v23 << g_BitMask_Green;
              v26 = v25 | (v24 << g_BitShift_Blue);
              LOWORD(v25) = (unsigned __int8)((unsigned __int8)v36 >> g_BitShift_Green_0);
              *v21 = (v25 << g_DDraw_BlueMask) | v26;
              v27 = Color::Lerp2(v35, (int)&v39, (int)&v44, v22);
              v36 = *(_WORD *)v27;
              v21 += 2;
              v28 = v27[2] >> g_BitMask_Red;
              LOWORD(v27) = (unsigned __int8)(HIBYTE(v36) >> g_BitMask_Blue);
              ++LODWORD(v20);
              *(v21 - 1) = ((unsigned __int8)((unsigned __int8)v36 >> g_BitShift_Green_0) << g_DDraw_BlueMask)
                         | ((_DWORD)v27 << g_BitMask_Green)
                         | (v28 << g_BitShift_Blue);
              v40 = v20;
            }
            while ( SLODWORD(v20) <= 12 );
            v4 = v45;
            v9 = v42;
          }
          else
          {
            v29 = v6[2];
            if ( v6[4] < v29
              || (*((_BYTE *)v6 + 13) || !v29)
              && (v30 = v6[5], v30 > 0)
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 8))(v6, v29 + v30, 0) )
            {
              v31 = v6[4];
              v32 = v6[1];
              v6[4] = v31 + 1;
              *(_DWORD *)(v32 + 4 * v31) = 0;
            }
          }
          result = v41 + 1;
          ++v9;
          v33 = ++v41 < *v4 * v4[1];
          v42 = v9;
        }
        while ( v33 );
      }
      return result;
}
} }

// ==== BACKFILL 0x0054A120  Rect::Set4  cls=Rect  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* Rect::Set4(int a2, int a3, int a4, int a5) {
{
    *(void**)this = a2;
    this->Y = a3;
    this->Width = a4;
    this->Height = a5;
    return this;
}
} }

// ==== BACKFILL 0x0054A140  IsometricTileTypeClass::GetTypeIdentifier  cls=IsometricTileTypeClass  sig=csp  renamed_refs=0  residual=- ====
int IsometricTileTypeClass::GetTypeIdentifier()
{
return 18;
}

// ==== BACKFILL 0x0054A150  IsometricTileTypeClass::GetObjectSize  cls=IsometricTileTypeClass  sig=csp  renamed_refs=0  residual=- ====
int IsometricTileTypeClass::GetObjectSize()
{
return 780;
}

// ==== BACKFILL 0x0054A160  IsometricTileTypeClass::GetAuxField  cls=IsometricTileTypeClass  sig=csp  renamed_refs=0  residual=- ====
int IsometricTileTypeClass::GetAuxField()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall IsometricTileTypeClass::_vt16(_DWORD *this)
{
  return *(this + 165); /*0x54a166*/
}
}

// ==== BACKFILL 0x0054A170  IsometricTileTypeClass::ddtor  cls=IsometricTileTypeClass  sig=csp  renamed_refs=0  residual=- ====
IsometricTileTypeClass * IsometricTileTypeClass::ddtor(char a2)
{
{
    IsometricTileTypeClass::CleanupMembers((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (IsometricTileTypeClass *)this;
}
}

// ==== BACKFILL 0x0054A850  IsometricTileTypeClass::Constructor_0  cls=IsometricTileTypeClass  sig=csp  renamed_refs=5  residual=IsAllocated ====
unsigned int * IsometricTileTypeClass::Constructor_0(int a2, int a3)
{
{
    this->IsometricTileTypeClass_field_0x04 = 0;
    this->IsometricTileTypeClass_field_0x08 = a2;
    this->IsometricTileTypeClass_field_0x0C = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_unsigned_short;
    if ( a2 )
  {
    if ( a3 )
    {
    this->IsometricTileTypeClass_field_0x04 = a3;
    return this;
    }
    this->IsometricTileTypeClass_field_0x04 = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x0054A900  SetBitfieldBit  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned char * Bitfield_SetBit(int a1, int a2, int a3)
{
{
    char v3;
    char *result;
    char v5;
    v3 = 1 << (a2 % 8);
    result = (char *)(a1 + a2 / 8);
    if ( a3 )
    v5 = v3 | *result;
    else
    v5 = ~v3 & *result;
    *result = v5;
    return result;
}
}

// ==== BACKFILL 0x0054A990  sub_54A990  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_54A990::sub_54A990()
{
{
    char *v1;
    int v2;
    char v3;
    int i;
    v1 = this;
    v2 = 0;
    if ( !*(void**)this )
  {
    do
    {
    v3 = v1[1];
    ++v2;
    ++v1;
    }
    while ( !v3 );
  }
    for ( i = 0; i < 8; ++i )
  {
    if ( ((unsigned char)(1 << (i % 8)) & v1[i / 8]) != 0 )
    break;
  }
    return i + 8 * v2;
}
}

// ==== BACKFILL 0x0054A9E0  sub_54A9E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_54A9E0::sub_54A9E0()
{
{
    char *v1;
    int v2;
    char v3;
    int i;
    v1 = this;
    v2 = 0;
    if ( *(void**)this == 0xFF )
  {
    do
    {
    v3 = v1[1];
    ++v2;
    ++v1;
    }
    while ( v3 == -1 );
  }
    for ( i = 0; i < 8; ++i )
  {
    if ( ((unsigned char)(1 << (i % 8)) & v1[i / 8]) == 0 )
    break;
  }
    return i + 8 * v2;
}
}

// ==== BACKFILL 0x0054AD30  JumpjetLocomotionClass::InitMovementParams  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::InitMovementParams(int a1, int a2)
{
{
    int v2;
    int v3;
    int v4;
    short v6[12];
    v2 = a2;
    v3 = a1;
    *(int *)(v3 + 24) = *(int *)((*(int (__thiscall **)(int))(*(int *)(a2) + 132))(a2) + 3440);
    *(int *)(v3 + 28) = *(int *)((*(int (__thiscall **)(int))(*(int *)(v2) + 132))(v2) + 3444);
    *(int *)(v3 + 32) = *(int *)((*(int (__thiscall **)(int))(*(int *)(v2) + 132))(v2) + 3448);
    *(int *)(v3 + 36) = *(int *)((*(int (__thiscall **)(int))(*(int *)(v2) + 132))(v2) + 3452);
    v4 = *(int *)((*(int (__thiscall **)(int))(*(int *)(v2) + 132))(v2) + 3456);
    if ( v4 <= 2 * DataGlobal_ABC5E8 )
    v4 = 2 * DataGlobal_ABC5E8;
    *(int *)(v3 + 40) = v4;
    *(int *)(v3 + 44) = *(int *)((*(int (__thiscall **)(int))(*(int *)(v2) + 132))(v2) + 3460);
    *(int *)(v3 + 48) = *(int *)((*(int (__thiscall **)(int))(*(int *)(v2) + 132))(v2) + 3464);
    *(int *)(v3 + 52) = *(int *)((*(int (__thiscall **)(int))(*(int *)(v2) + 132))(v2) + 3472);
    *(char *)(v3 + 56) = *(char *)((*(int (__thiscall **)(int))(*(int *)(v2) + 132))(v2) + 3468);
    FrameSnapshot::InitMax(v6, *(int *)(v3 + 24));
    qmemcpy((void *)(v3 + 80), v6, 0x18u);
    LOWORD(a1) = 0x4000;
    FacingClass::Update((char *)(v3 + 80), &a1);
    LOWORD(a1) = 0x4000;
    FacingClass::Set_SyncLog((char *)(v3 + 80), &a1);
    return StreamClass::ResetPosition(v3, v2);
}
}

// ==== BACKFILL 0x0054AE50  JumpjetLocomotionClass::SmallStub_54AE50  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::SmallStub_54AE50(int a1)
{
return *(unsigned char *)(a1 + 72);
}

// ==== BACKFILL 0x0054AE60  JumpjetLocomotionClass::GetMovementCoordinate_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate_0(unsigned int * a1, unsigned int * a2)
{
{
    int *result;
    int v3;
    int v4;
    int *v5;
    if ( (*(unsigned char (__stdcall **)(int *))(*a1 + 16))(a1) )
  {
    result = a2;
    v3 = *((int*)(a1) + 16);
    v4 = *((int*)(a1) + 17);
    v5 = a2;
    *a2 = *((int*)(a1) + 15);
  }
    else
  {
    result = a2;
    v3 = DataGlobal_ABC5AC;
    v4 = DataGlobal_ABC5B0;
    v5 = a2;
    *a2 = DataGlobal_ABC5A8;
  }
    v5[1] = v3;
    v5[2] = v4;
    return result;
}
}

// ==== BACKFILL 0x0054B6E0  JumpjetLocomotionClass::SynchronizeFacingDirection_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::SynchronizeFacingDirection_0(int a1, int a2)
{
{
    return FacingClass::Set_SyncLog((char *)(*(int *)(a1 + 8) + 904), &a2);
}
}

// ==== BACKFILL 0x0054B710  JumpjetLocomotionClass::GetClassIdentifier  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1839125434;
  a2[1] = 298972959;
  a2[2] = 1610653612;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x0054B750  JumpjetLocomotionClass::InitClass  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=1  residual=- ====
HRESULT JumpjetLocomotionClass::InitClass(int * a1, int * pStm)
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
    *((int*)(a1) + 37) = 0;
    *a1 = (int)(unsigned int)vt_JumpjetLocomotionClass;
    a1[1] = (unsigned int)vt_JumpjetLocomotionClass;
    *((int*)(a1) + 6) = (int)&vt_JumpjetLocomotionClass;
  }
    v2->vtable1->Read(v2, &pStm, 1, 0);
    if ( !(char)pStm )
    return v3;
    v4 = *((int*)(a1) + 37);
    v5 = (LPVOID *)(a1 + 37);
    if ( v4 )
    (*(void (__stdcall **)(int))(*(int *)(v4) + 8))(v4);
    *v5 = 0;
    return OleLoadFromStream(v2, &IID_ILocomotion, v5);
}
}

// ==== BACKFILL 0x0054B7E0  JumpjetLocomotionClass::LoadFromStream  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=2  residual=- ====
HRESULT JumpjetLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
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
    if ( !v4[37] )
  {
    v12 = *(int *)v3->vtable1;
    LOBYTE(a3) = 0;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v12 + 16))(v3, &a3, 1, 0);
    return IPersistStream;
  }
    v6 = *(int *)v3->vtable1;
    LOBYTE(a3) = 1;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v6 + 16))(v3, &a3, 1, 0);
    v7 = (int (__stdcall ***)(int, void *, int **))v4[37];
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

// ==== BACKFILL 0x0054B8D0  JumpjetLocomotionClass::ConvertCoordToCell_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::ConvertCoordToCell_0(int a1)
{
{
    int v1;
    int v2;
    int *v3;
    int v5[3];
    v1 = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 456))(*(int *)(a1 + 8));
    v2 = *(int *)(a1 + 8);
    if ( !*(char *)(v2 + 140) )
  {
    v3 = (int *)(v2 + 156);
    v5[0] = *v3;
    v5[1] = v3[1];
    v5[2] = v3[2];
    if ( (*((int *)Coord::To_Cell(&DataGlobal_87F7E8, v5) + 80) & 0x100) != 0 && v1 >= DataGlobal_ABC5DC && !*(char *)(*(int *)(a1 + 8) + 141) )
    {
    v1 -= DataGlobal_ABC5DC;
    }
  }
    if ( !(*(unsigned char (__thiscall **)(int))(**(int **)(a1 + 8) + 84))(*(int *)(a1 + 8)) )
    return 2;
    if ( v1 )
    return (v1 >= *(int *)(a1 + 40)) + 3;
    return 2;
}
}

// ==== BACKFILL 0x0054B980  HouseClass::Set  cls=HouseClass  sig=csp  renamed_refs=5  residual=- ====
char HouseClass::Set()
{
{
    short *v2;
    int *Value;
    int v4;
    int v6;
    LOBYTE(v2) = (*(int (__stdcall **)(int))(this->vtable2 + 16))(this + 4);
    if ( (char)v2 )
  {
    (*(void (__thiscall **)(int, int, int))(**(int **)(this + 12) + 1348))( this->vtable4, 0, 1072693248);
    Value = ProgressTimer::GetValue((short *)(this->vtable4 + 904), &v6);
    FacingClass::Set_SyncLog((char *)(this + 84), Value);
    v4 = this->relatedTags;
    this->absorbersCapacity = 0;
    this->bunkersCount = 0;
    this->bunkers = 0;
    this->bunkersCapacity = 0;
    this->occupiables = v4;
    LOBYTE(v2) = HouseClass::IonSensitivesShouldBeOffline();
    if ( !(char)v2 )
    {
    v2 = (short *)(*(int (__thiscall **)(int, int *))(**(int **)(this + 12) + 756))(this->vtable4, &v6);
    if ( *v2 == DataGlobal_ABC588 && v2[1] == DataGlobal_ABC58A )
    LOBYTE(v2) = GadgetGrid::InsertItem(g_CellClassManager, this->vtable4);
    this->unitRepairStations = 1;
    }
  }
    return (char)v2;
}
}

// ==== BACKFILL 0x0054D0D0  JumpjetLocomotionClass::CheckCompositeState  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::CheckCompositeState(int a1)
{
{
    int v1;
    v1 = *(int *)(a1 + 76);
    return v1 && v1 != 2;
}
}

// ==== BACKFILL 0x0054D820  JumpjetLocomotionClass::GetFloorZSetContext  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::GetFloorZSetContext()
{
{
    int *v2;
    int *v3;
    int v4;
    unsigned int v5;
    int v6;
    int v7;
    int *v8;
    int v9;
    int v11;
    int v12;
    int v13;
    int v14;
    v2 = (int *)(this->LinkedTo + 156);
    v12 = *v2;
    v13 = v2[1];
    v14 = v2[2];
    v3 = Coord::To_Cell(&DataGlobal_87F7E8, &v12);
    v4 = JumpjetLocomotionClass::FindClosestOccupiableCell(v3);
    if ( (*((int *)Coord::To_Cell(&DataGlobal_87F7E8, &v12) + 80) & 0x100) != 0 )
    v4 += DataGlobal_ABC5DC;
    if ( *(double *)(this + 112) <= 0.0 )
    return v4;
    v5 = ((unsigned int)((*ProgressTimer::GetValue((short *)(this + 84), &v11) >> 12) + 1) >> 1) & 7;
    v6 = v12 + DataGlobal_89F6D8[2 * v5];
    v7 = DataGlobal_89F6DC[2 * v5];
    v12 = v6;
    v13 += v7;
    v8 = Coord::To_Cell(&DataGlobal_87F7E8, &v12);
    v9 = JumpjetLocomotionClass::FindClosestOccupiableCell(v8);
    if ( (*((int *)Coord::To_Cell(&DataGlobal_87F7E8, &v12) + 80) & 0x100) != 0 )
    v4 += DataGlobal_ABC5DC;
    if ( v9 <= v4 )
    return (v9 + v4) / 2;
    else
    return v9;
}
}

// ==== BACKFILL 0x0054D930  JumpjetLocomotionClass::DispatchVirtualCall_4  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::DispatchVirtualCall_4(int a1, int a2)
{
{
    int v2;
    int *v3;
    int v4;
    int v6[3];
    char v7[12];
    LOBYTE(v2) = a2;
    if ( !a2 )
  {
    v3 = (int *)(*(int (__stdcall **)(int, char *))(*(int *)(a1) + 24))(a1, v7);
    v6[0] = *v3;
    v4 = v3[1];
    v6[1] = v4;
    v2 = v3[2];
    v6[2] = v2;
    if ( v6[0] != DataGlobal_ABC5A8 || v4 != DataGlobal_ABC5AC || v2 != DataGlobal_ABC5B0 )
    {
    if ( !*(int *)(a1 + 76) || (LOBYTE(v2) = *(char *)(a1 + 140), (char)v2) )
      {
    LOBYTE(v2) = (*(int (__thiscall **)(int, int *))(**(int **)(a1 + 8) + 244))(*(int *)(a1 + 8), v6);
    *(char *)(a1 + 140) = 0;
      }
    }
  }
    return v2;
}
}

// ==== BACKFILL 0x0054D9B0  JumpjetLocomotionClass::GetConditionedCoordinate  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetConditionedCoordinate(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    int v5;
    int v6;
    if ( *((int*)(a1) + 19) )
  {
    v5 = *((int*)(a1) + 16);
    v6 = *((int*)(a1) + 17);
    *a2 = *((int*)(a1) + 15);
    *((int*)(a2) + 1) = v5;
    *((int*)(a2) + 2) = v6;
    return a2;
  }
    else
  {
    v2 = *(int *)(*((int*)(a1) + 2) + 160);
    v3 = *(int *)(*((int*)(a1) + 2) + 164);
    *a2 = *(int *)(*((int*)(a1) + 2) + 156);
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
  }
}
}

// ==== BACKFILL 0x0054DA00  JumpjetLocomotionClass::StubReturnZero_9  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_9(int a1, int a2)
{
{
    if ( !a2 )
    return -2147467261;
    if ( *(int *)(a1 + 124) )
    return -2147467259;
    *(int *)(a1 + 124) = a2;
    (*(void (__stdcall **)(int))(*(int *)(a2) + 4))(a2);
    return 0;
}
}

// ==== BACKFILL 0x0054DA50  JumpjetLocomotionClass::StubReturnZero_10  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_10(int a1, unsigned int * a2)
{
{
    int v3;
    int *v4;
    int v5;
    if ( !a2 )
    return -2147467261;
    v3 = *(int *)(a1 - 12);
    if ( v3 )
  {
    if ( *(char *)(v3 + 1709) || *(char *)(v3 + 1710) )
    {
    *(char *)(v3 + 1709) = 0;
    *(char *)(*(int *)(a1 - 12) + 1710) = 0;
    v4 = *(int **)(a1 - 12);
    if ( !*(char *)(v4[135] + 492) && *(char *)((*(int (__thiscall **)(int *))(*v4 + 132))(v4) + 1516) )
    (*(void (__thiscall **)(int, int, int))(**(int **)(a1 - 12) + 488))(*(int *)(a1 - 12), 10, 0);
    }
    *(int *)(*(int *)(a1 - 12) + 1064) = 0;
    *(int *)(*(int *)(a1 - 12) + 1068) = 0;
  }
    v5 = *(int *)(a1 + 124);
    if ( !v5 )
    return 1;
    *a2 = v5;
    *(int *)(a1 + 124) = 0;
    return 0;
}
}

// ==== BACKFILL 0x0054DB00  JumpjetLocomotionClass::StubReturnTrue_2  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::StubReturnTrue_2(int a1)
{
{
    int v1;
    bool result;
    result = 0;
    if ( !(*(unsigned char (__stdcall **)(int))(*(int *)(a1 - 20) + 16))(a1 - 20) )
  {
    if ( *(int *)(a1 + 124) )
    {
    if ( !*(char *)(a1 + 121) )
      {
    v1 = *(int *)(a1 - 12);
    if ( !*(char *)(v1 + 1709) || *(char *)(v1 + 1710) )
    return 1;
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0054DB50  JumpjetLocomotionClass::LoadLocomotionFromStream_1  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::LoadLocomotionFromStream_1(unsigned int * a1, unsigned int * a2)
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
    v4 = a1 + 31;
    if ( *((int*)(a1) + 31) )
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

// ==== BACKFILL 0x0054DF70  JumpjetLocomotionClass::ShortFunc_54DF70  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
BOOL JumpjetLocomotionClass::ShortFunc_54DF70(int a1)
{
{
    return *(int *)(a1 + 124) != 0;
}
}

// ==== BACKFILL 0x0054DF90  JumpjetLocomotionClass::CheckAttachStatus  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::CheckAttachStatus()
{
return 152;
}

// ==== BACKFILL 0x0054DFA0  JumpjetLocomotionClass::ProcessAttach  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
JumpjetLocomotionClass * JumpjetLocomotionClass::ProcessAttach(char a2)
{
{
    int v3;
    *(void**)this = vt_JumpjetLocomotionClass;
    *(this + 1) = (int)(unsigned int)vt_JumpjetLocomotionClass;
    *(this + 6) = (int)&vt_JumpjetLocomotionClass;
    v3 = *(this + 37);
    if ( v3 )
    (*(void (__stdcall **)(int))(*(int *)(v3) + 8))(v3);
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (JumpjetLocomotionClass *)this;
}
}

// ==== BACKFILL 0x0054DFF0  JumpjetLocomotionClass::SmallStub_54DFF0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_54DFF0(int a1, const void * a2, int * a3)
{
{
    return JumpjetLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}
}

// ==== BACKFILL 0x0054E000  JumpjetLocomotionClass::SmallStub_54E000  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_54E000(int a1)
{
{
    return JumpjetLocomotionClass::AddRef(a1 - 4);
}
}

// ==== BACKFILL 0x0054E010  JumpjetLocomotionClass::SmallStub_54E010  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_54E010(int a1)
{
{
    return JumpjetLocomotionClass::Release((volatile LONG *)(a1 - 4));
}
}

// ==== BACKFILL 0x0054E020  JumpjetLocomotionClass::SmallStub_54E020  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_54E020(int a1, const void * a2, int * a3)
{
{
    return JumpjetLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}
}

// ==== BACKFILL 0x0054E030  JumpjetLocomotionClass::SmallStub_54E030  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_54E030(int a1)
{
{
    return JumpjetLocomotionClass::AddRef(a1 - 24);
}
}

// ==== BACKFILL 0x0054E040  JumpjetLocomotionClass::SmallStub_54E040  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_54E040(int a1)
{
{
    return JumpjetLocomotionClass::Release((volatile LONG *)(a1 - 24));
}
}

// ==== BACKFILL 0x0054E260  sub_54E260  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_54E260()
{
{
    int v1;
    g_MissionQueueFrame = (int)g_CurrentFrame;
    g_MissionQueueType = 0;
    sub_54EBF0(&DataGlobal_ABC604, 0, 0);
    DataGlobal_ABC604 = (int)&vt_DynamicVectorClass_KamikazeControl;
    DataGlobal_ABC618 = 10;
    DataGlobal_ABC614 = 0;
    g_MissionQueueFrame = (int)g_CurrentFrame;
    g_MissionQueueParam = v1;
    g_MissionQueueType = 100;
    return atexit(loc_54E2D0);
}
}

// ==== BACKFILL 0x0054E360  sub_54E360  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_54E360::sub_54E360()
{
{
    int v2;
    *(void**)this = g_CurrentFrame;
    this->M8 = 0;
    this->M16 = 0;
    this->M20 = 0;
    this->M24 = 1;
    this->M25 = 0;
    this->M12 = &vt_DynamicVectorClass_KamikazeControl;
    this->M32 = 10;
    this->M28 = 0;
    *(void**)this = g_CurrentFrame;
    this->M4 = v2;
    this->M8 = 100;
    return this;
}
}

// ==== BACKFILL 0x0054E590  AbstractClass::processStateTransition  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void AbstractClass::processStateTransition(int aP1) {
{
      int v3;
      int v4;
      int i;
      int v6;
      int v7;
      int v8;
      _DWORD *v9;
      void *v10;
      _DWORD *v11;
      int v12;
      AbstractClass *v13;
      char v14[12];
      AbstractClass *aP1a;

      v3 = this->referenceCount - 1;
      if ( v3 >= 0 )
      {
        v4 = this->uniqueId;
        for ( i = v4 + 4 * v3; aP1 != **(AbstractClass ***)i; i -= 4 )
        {
          if ( aP1 == *(AbstractClass **)(*(_DWORD *)i + 4) )
          {
            v9 = (_DWORD *)(*(int (__stdcall **)(char *))(*(_DWORD *)aP1->__pad_0 + 72))(v14);
            LOWORD(aP1a) = *v9 / 256;
            HIWORD(aP1a) = v9[1] / 256;
            v13 = aP1a;
            v10 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v13);
            v11 = *(_DWORD **)(this->uniqueId + 4 * v3);
            (*(void (__thiscall **)(_DWORD, void *))(*(_DWORD *)*v11 + 968))(*v11, v10);
            v12 = **(_DWORD **)(this->uniqueId + 4 * v3);
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 1, 0);
            *(_DWORD *)(*(_DWORD *)(this->uniqueId + 4 * v3) + 4) = v10;
            return;
          }
          if ( --v3 < 0 )
            return;
        }
        __3_YAXPAX_Z(*(void **)(v4 + 4 * v3));
        v6 = this->referenceCount;
        if ( v3 < v6 )
        {
          v7 = v6 - 1;
          v8 = v3;
          for ( this->referenceCount = v7; v8 < this->referenceCount; *(_DWORD *)(this->uniqueId + 4 * v8 - 4) = *(_DWORD *)(this->uniqueId + 4 * v8) )
            ++v8;
        }
      }
}
} } }

// ==== BACKFILL 0x0054E690  sub_54E690  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_54E690::sub_54E690()
{
{
    int i;
    int v3;
    int *v4;
    int *v5;
    int v6;
    void *v7;
    i = this->M28 - 1;
    for ( ; i >= 0; --i )
    __3_YAXPAX_Z(*(void **)(this->M16 + 4 * i));
    v3 = this->M12;
    v4 = this + 3;
    v5 = this + 3;
    v6 = this->M20;
    (*(void (__thiscall **)(int *))(v3 + 12))(v5);
    (*(void (__thiscall **)(int *, int, int))(*v4 + 8))(v4, v6, 0);
    v7 = (void *)v4[1];
    *v4 = &vt_VectorClass_KamikazeControl;
    if ( v7 && *((char *)(v4) + 13) )
  {
    __3_YAXPAX_Z(v7);
    v4[1] = 0;
  }
    *((char *)(v4) + 13) = 0;
    v4[2] = 0;
}
}

// ==== BACKFILL 0x0054E7B0  LoadGame::LoadPointArray  cls=LoadGame  sig=csp  renamed_refs=0  residual=- ====
int LoadGame::LoadPointArray(int a2)
{
{
    int v3;
    int *v4;
    int v5;
    int *v6;
    int v7;
    int v8;
    int v9;
    int v11;
    int *v12;
    int v13;
    v12 = this;
    v3 = (*(int (__stdcall **)(int, int *, int, int))(*(int *)(a2) + 12))(a2, &v11, 4, 0);
    if ( v3 >= 0 )
  {
    v13 = 0;
    while ( v13 < v11 )
    {
    v4 = (int *)__2_YAPAXI_Z(8u);
    v3 = (*(int (__stdcall **)(int, int *, int, int))(*(int *)(a2) + 12))(a2, v4, 8, 0);
    if ( v3 < 0 )
    break;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 1);
    v5 = v12[5];
    v6 = v12 + 3;
    if ( v12[7] >= v5 )
      {
    if ( !*((char *)(v12) + 25) && v5 )
    continue;
    v7 = v12[8];
    if ( v7 <= 0 || !(*(unsigned char (__thiscall **)(int *, int, int))(*v6 + 8))(v12 + 3, v5 + v7, 0) )
    continue;
      }
    v8 = v6[4];
    v9 = v6[1];
    v6[4] = v8 + 1;
    *(int *)(v9 + 4 * v8) = v4;
    ++v13;
    }
  }
    return v3;
}
}

// ==== BACKFILL 0x0054EBF0  sub_54EBF0  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_54EBF0::sub_54EBF0(int a2, int a3)
{
{
    this->M4 = 0;
    this->M8 = a2;
    this->M12 = 1;
    this->M13 = 0;
    *(void**)this = &vt_VectorClass_KamikazeControl;
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

// ==== BACKFILL 0x0054F5C0  Mouse::IsButtonDown  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL Mouse::IsButtonDown(unsigned char a1)
{
{
    unsigned short v1;
    v1 = a1;
    if ( (a1 == 1 || a1 == 2) && GetSystemMetrics(23) == 1 )
    v1 = 2 - (a1 != 1);
    return (unsigned short)Mouse::GetKeyState(v1) != 0;
}
}

// ==== BACKFILL 0x0054F6B0  EventQueue::CheckPosition  cls=EventQueue  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { bool EventQueue::CheckPosition() {
{
    return (this->q318 + 1) % 256 == this->q314;
}
} }

// ==== BACKFILL 0x0054F6D0  sub_54F6D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool E4Recv_54F6D0::sub_54F6D0()
{
{
    return this->M788 == this->M792;
}
}
