// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x004101C0  AbstractClass::InitVtables  cls=AbstractClass  sig=csp  renamed_refs=5  residual=- ====
namespace ra2 { namespace game { void* AbstractClass::InitVtables(int a1) {
{
    this->vtable3 = &vt_INoticeSink;
    this->vtable4 = &vt_INoticeSource;
    *(void**)this = vt_AbstractClass;
    this->vtable2 = (unsigned int)vt_AbstractClass;
    this->vtable3 = (unsigned int)vt_AbstractClass;
    this->vtable4 = &vt_AbstractClass;
    return this;
}
} } }

// ==== BACKFILL 0x004101F0  AbstractClass::DTOR  cls=AbstractClass  sig=csp  renamed_refs=3  residual=- ====
void AbstractClass::DTOR()
{
{
    *(void**)this = vt_AbstractClass;
    this->vtable2 = (unsigned int)vt_AbstractClass;
    this->vtable3 = (unsigned int)vt_AbstractClass;
    this->vtable4 = &vt_AbstractClass;
}
}

// ==== BACKFILL 0x00410210  INoticeSink::Dispatch  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int INoticeSink::Dispatch(int a1)
{
{
    return (*(int (__thiscall **)(int))(*(int *)(a1 - 4) + 44))(a1 - 4);
}
}

// ==== BACKFILL 0x00410220  AbstractClass::GetVtable3  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::GetVtable3(AbstractClass * aP0)
{
{
    return *(int *)&aP0->__pad_0[12];
}
}

// ==== BACKFILL 0x00410230  AbstractClass::GenerateUniqueID  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::GenerateUniqueID(int a1)
{
{
    int result;
    if ( g_ScenarioClass_Instance )
  {
    result = AbstractClass::updateAITimer();
    *(int *)(a1 + 12) = result;
  }
    else
  {
    *(int *)(a1 + 12) = 0;
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x00410260  AbstractClass::QueryInterface  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT AbstractClass::QueryInterface(const IID& iid, void** ppv) {
  if ( !ppv )
    return E_POINTER;
  *ppv = 0;
  if ( !memcmp(&iid, &IID_IUnknown, 0x10u) )
    *ppv = this;
  if ( !memcmp(&iid, &IID_IPersistStream, 0x10u) )
    *ppv = this;
  if ( !memcmp(&iid, &IID_IPersist, 0x10u) )
    *ppv = this;
  if ( !memcmp(&iid, &IID_IRTTITypeInfo, 0x10u) ) {
    // MI interface subobject @ +4
    if ( this )
      *ppv = (IRTTITypeInfo*)this;
    else
      *ppv = 0;
  }
  if ( !*ppv )
    return E_NOINTERFACE;
  this->COMStub_AddRef();  // vtable[0][1] @0x7E1F54 -> 0x410300 (indirect dispatch)
  return S_OK;

/* ASM:
this            = dword ptr  4
iid             = dword ptr  8
ppv             = dword ptr  0Ch

mov     eax, [esp+ppv]

AbstractClass__sub_410264:
push    ebx
test    eax, eax
jnz     short loc_410272
mov     eax, 80004003h

AbstractClass__sub_41026E:
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_410272:                             ; CODE XREF: AbstractClass__QueryInterface+7↑j
mov     edx, [esp+4+iid]
push    esi
push    edi
mov     ecx, 4
mov     edi, offset IID_IUnknown
mov     esi, edx
xor     ebx, ebx
mov     dword ptr [eax], 0
mov     ebx, [esp+0Ch+this]
repe cmpsd
jnz     short loc_410296

AbstractClass__sub_410294:
mov     [eax], ebx

loc_410296:                             ; CODE XREF: AbstractClass__QueryInterface+32↑j
push    ebp
mov     ecx, 4
mov     edi, offset IID_IPersistStream
mov     esi, edx
xor     ebp, ebp
repe cmpsd
jnz     short loc_4102AB
mov     [eax], ebx

loc_4102AB:                             ; CODE XREF: AbstractClass__QueryInterface+47↑j
mov     ecx, 4
mov     edi, offset IID_IPersist
mov     esi, edx
xor     ebp, ebp
repe cmpsd
pop     ebp
jnz     short loc_4102C0
mov     [eax], ebx

loc_4102C0:                             ; CODE XREF: AbstractClass__QueryInterface+5C↑j
mov     esi, edx

AbstractClass__sub_4102C2:
mov     ecx, 4
mov     edi, offset IID_IRTTITypeInfo
xor     edx, edx
repe cmpsd
pop     edi
pop     esi
jnz     short loc_4102E1
test    ebx, ebx

AbstractClass__sub_4102D6:
jz      short loc_4102DD
lea     ecx, [ebx+4]
jmp     short loc_4102DF
; ---------------------------------------------------------------------------

loc_4102DD:                             ; CODE XREF: AbstractClass__QueryInterface:AbstractClass__sub_4102D6↑j
xor     ecx, ecx

loc_4102DF:                             ; CODE XREF: AbstractClass__QueryInterface+7B↑j
mov     [eax], ecx

loc_4102E1:                             ; CODE XREF: AbstractClass__QueryInterface+72↑j
cmp     dword ptr [eax], 0

AbstractClass__sub_4102E4:
jnz     short loc_4102EF
mov     eax, 80004002h
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_4102EF:                             ; CODE XREF: AbstractClass__QueryInterface:AbstractClass__sub_4102E4↑j
mov     eax, [ebx]
push    ebx
call    dword ptr [eax+4]
xor     eax, eax
pop     ebx
retn    0Ch
*/
}

// ==== BACKFILL 0x00410300  AbstractClass::COMStub_AddRef  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::COMStub_AddRef() {
    return 1;

/* ASM:
mov     eax, 1
retn    4
*/
} } }

// ==== BACKFILL 0x00410310  AbstractClass::COMStub_Release  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::COMStub_Release() {
    return 1;

/* ASM:
mov     eax, 1
retn    4
*/
} } }

// ==== BACKFILL 0x00410320  AbstractClass::SaveLoad_Prefix  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::SaveLoad_Prefix(ObjectTypeClass * aP0, ObjectTypeClass * aP1, ObjectTypeClass * aP2)
{
{
    ObjectTypeClass *v3;
    int result;
    int v5;
    int v6;
    int v7;
    ObjectTypeClass *v8;
    v3 = aP1;
    if ( !aP1 )
    return -2147467261;
    v5 = *(int *)aP1->__pad_0;
    v8 = aP1;
    aP1 = aP0;
    result = (*(int (__stdcall **)(ObjectTypeClass *, ObjectTypeClass **, int, int))(v5 + 16))(v8, &aP1, 4, 0);
    if ( result >= 0 )
  {
    v6 = *(int *)v3->__pad_0;
    v7 = (*(int (__thiscall **)(ObjectTypeClass *, int))(*(int *)aP0->__pad_0 + 48))(aP0, 0);
    result = (*(int (__stdcall **)(ObjectTypeClass *, ObjectTypeClass *, int))(v6 + 16))(v3, aP0, v7);
    if ( result >= 0 )
    {
    if ( aP2 )
    LOBYTE(aP0->NeedsSaveOrLink) = 0;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00410380  AbstractClass::SaveLoad_Prefix_0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::SaveLoad_Prefix_0(AbstractClass * aP0, AbstractClass * aP1)
{
{
    AbstractClass *v2;
    int result;
    int referenceCount;
    int v5;
    int v6;
    v2 = aP1;
    if ( !aP1 )
    return -2147467261;
    result = (*(int (__stdcall **)(AbstractClass *, AbstractClass **, int, int))(*(int *)aP1->__pad_0 + 12))( aP1, &aP1, 4, 0);
    if ( result >= 0 )
  {
    SwizzleManagerClass::Here_I_Am((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], aP1, aP0);
    referenceCount = aP0->referenceCount;
    v5 = *(int *)v2->__pad_0;
    v6 = (*(int (__thiscall **)(AbstractClass *, int))(*(int *)aP0->__pad_0 + 48))(aP0, 0);
    result = (*(int (__stdcall **)(AbstractClass *, AbstractClass *, int))(v5 + 12))(v2, aP0, v6);
    aP0->referenceCount = referenceCount;
  }
    return result;
}
}

// ==== BACKFILL 0x004103E0  ObjectClass::GetSizeMax  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::GetSizeMax() {
{
    int v2;
    int *v3;
    if ( !v3 )
    return -2147467261;
    *v3 = (*(int (__thiscall **)(int))(*(int *)(v2) + 48))(v2) + 4;
    v3[1] = 0;
    return 0;
}
} } }

// ==== BACKFILL 0x00410410  AbstractClass::ProcessPower  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::ProcessPower() {
{
    int v2;
    int *v4;
    Power::TimerProcess(this->uniqueId);
    LOBYTE(v2) = this->needsSave;
    return Power::FlagProcess(v4, v2);
}
} } }

// ==== BACKFILL 0x00410440  AbstractClass::computeDistance  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::computeDistance()
{
{
    int result;
    LOBYTE(result) = 1;
    return result;
}
}

// ==== BACKFILL 0x00410450  AbstractClass::IsClean  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::IsClean() {
return !NeedsSaveOrLink;

/* ASM:
mov     ecx, [esp+arg_0]
xor     eax, eax
mov     dl, [ecx+20h]
test    dl, dl
setz    al
retn    4
*/
} } }

// ==== BACKFILL 0x00410470  AbstractClass::StubReturnFalse  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::StubReturnFalse()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x00410480  AbstractClass::COMStub_Return0_10  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_10()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x00410490  AbstractClass::computeDistanceSquared  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::computeDistanceSquared()
{
return -1;
}

// ==== BACKFILL 0x004104A0  AbstractClass::COMStub_Return0_15  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_15()
{
return 0;
}

// ==== BACKFILL 0x004104B0  AbstractClass::COMStub_Return0_16  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_16()
{
return 0;
}

// ==== BACKFILL 0x004104C0  Map::GetInvalidCoord  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { namespace wdt { int Map::GetInvalidCoord() {
{
    int *v2;
    *v2 = DataGlobal_887680;
    v2[1] = DataGlobal_887684;
    v2[2] = DataGlobal_887688;
    return (int)v2;
}
} } }

// ==== BACKFILL 0x004104F0  AbstractClass::GetCoordsEx  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int* AbstractClass::GetCoordsEx(int* outBuffer, AbstractClass* source) {
{
    int *v1;
    char v3[12];
    int *v4;
    v1 = (int *)this->GetExitCoords(v3);
    *v4 = *v1;
    v4[1] = v1[1];
    v4[2] = v1[2];
    return (int)v4;
}
} } }

// ==== BACKFILL 0x00410520  AbstractClass::COMStub_Return0_20  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_20()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x00410530  AbstractClass::COMStub_Return0_21  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_21()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x00410540  AbstractClass::GetCoords  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
CoordStruct* AbstractClass::GetCoords(CoordStruct* out) const {
    CoordStruct buf;
    CoordStruct* v1 = ((ObjectClass*)this)->GetExitCoords(&buf, 0);
    out->X = v1->X;
    out->Y = v1->Y;
    out->Z = v1->Z;
    return out;
}

// ==== BACKFILL 0x00410570  AbstractClass::COMStub_Return0_23  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_23()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x00410580  AbstractClass::Stub1INoticeSink  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char AbstractClass::Stub1INoticeSink(int a1, int a2)
{
return 0;
}

// ==== BACKFILL 0x00410590  AbstractClass::COM_Stub_Return0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::COM_Stub_Return0(int a1)
{
  ;
}

// ==== BACKFILL 0x004105A0  AbstractClass::COMStub_8  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AbstractClass::COMStub_8() {
{
    char v3;
    *(int *)this->__pad_0 = (unsigned int)vt_AbstractClass;
    *(int *)&this->__pad_0[4] = (unsigned int)vt_AbstractClass;
    *(int *)&this->__pad_0[8] = (unsigned int)vt_AbstractClass;
    *(int *)&this->__pad_0[12] = &vt_AbstractClass;
    if ( (v3 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int)this->__pad_0;
}
} } }

// ==== BACKFILL 0x004105E0  IRTTITypeInfo::QueryInterface  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int IRTTITypeInfo::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
{
    return AbstractClass::QueryInterface(a1 - 4, a2, a3);
}
}

// ==== BACKFILL 0x004105F0  INoticeSource::Dispatch  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int INoticeSource::Dispatch(int a1)
{
{
    return AbstractClass::COMStub_AddRef(a1 - 4);
}
}

// ==== BACKFILL 0x00410600  XSurface::vt_entry_40  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int XSurface::vt_entry_40(int a1)
{
{
    return AbstractClass::COMStub_Release(a1 - 4);
}
}

// ==== BACKFILL 0x00410960  AbstractTypeClass::Init  cls=AbstractTypeClass  sig=csp  renamed_refs=5  residual=- ====
int AbstractTypeClass::Init(AbstractTypeClass * aP1)
{
{
    char v3;
    AbstractClass::InitVtables((int *)this, (int)aP1);
    v3 = (unsigned char)this->UINameLabel;
    *(void**)this = vt_AbstractTypeClass;
    this->vtable2 = (unsigned int)vt_AbstractTypeClass;
    this->vtable3 = (unsigned int)vt_AbstractTypeClass;
    this->vtable4 = &vt_AbstractTypeClass;
    if ( v3 )
    this->vtable2 = GetStringCSF((wchar_t *)(this + 61), 0, DataGlobal_817830, 127);
    else
    this->vtable2 = &DataGlobal_87F8E4.__pad_5568[10472];
    return this;
}
}

// ==== BACKFILL 0x00410A40  AbstractTypeClass::NameEquals  cls=AbstractTypeClass  sig=csp  renamed_refs=0  residual=- ====
BOOL AbstractTypeClass::NameEquals(void * a2)
{
{
    return _strcmpi(a2, (const void *)(this + 36)) == 0;
}
}

// ==== BACKFILL 0x00410B90  AbstractTypeClass::WriteINI  cls=AbstractTypeClass  sig=csp  renamed_refs=0  residual=- ====
char AbstractTypeClass::WriteINI(CCINIClass * aP1)
{
{
    INIClass *v3;
    v3 = (INIClass *)(this + 36);
    INIClass::ClearSection((int)aP1, (INIClass *)(this + 36), 0);
    INIClass::SetString(aP1->__pad_0, v3, (INIClass *)&Format.fallRate, (INIClass *)(this + 100));
    if ( this->UINameLabel )
    INIClass::SetString(aP1->__pad_0, v3, (INIClass *)&Format.objectTypeFlags, (INIClass *)(this + 61));
    return 1;
}
}

// ==== BACKFILL 0x00410BE0  AbstractTypeClass::ProcessPower  cls=AbstractTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::ProcessPower(AbstractClass * aP1)
{
{
    AbstractClass::ProcessPower((AbstractClass *)this);
    Checksum::AddString((unsigned int *)aP1, (AbstractClass *)(this) + 1);
    Checksum::AddString((unsigned int *)aP1, (AbstractClass *)(this + 100));
    return Checksum::AddString((unsigned int *)aP1, (AbstractClass *)(this + 61));
}
}

// ==== BACKFILL 0x00410C20  AbstractTypeClass::StubReturnFalse  cls=AbstractTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::StubReturnFalse()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x00410C30  AbstractTypeClass::ddtor  cls=AbstractTypeClass  sig=csp  renamed_refs=0  residual=- ====
AbstractTypeClass * AbstractTypeClass::ddtor(char a2)
{
    AbstractTypeClass* v7 = this;
    DataGlobal_A8E968;
    int v2 = DataGlobal_A8E968.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < g_AbstractTypePool && v2 < --g_AbstractTypePool )
    {
        do
        {
            ++v2;
            *(DataGlobal_A8E96C + v2 - 1) = *(DataGlobal_A8E96C + v2);
        }
        while ( v2 < g_AbstractTypePool );
    }
    AbstractClass::DTOR(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}

// ==== BACKFILL 0x00410DC0  sub_410DC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_410DC0::sub_410DC0(int a2, int a3, int a4, int a5, int a6)
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

// ==== BACKFILL 0x00410E70  sub_410E70  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * sub_410E70(char * a1, int a2, unsigned short a3)
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

// ==== BACKFILL 0x004112D0  MapClass::isLocationShrouded  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::isLocationShrouded(unsigned short a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4112D0(_DWORD *this, unsigned __int16 a2)
{
  int v2; // eax
  int v3; // ecx
  _DWORD v5[4]; // [esp+0h] [ebp-10h] BYREF

  v5[3] = *(this + 11); /*0x4112d8*/
  v5[0] = 0; /*0x4112e0*/
  v5[1] = 0; /*0x4112e4*/
  v2 = *(this + 10); /*0x4112e8*/
  v3 = *(this + 5); /*0x4112eb*/
  v5[2] = v2; /*0x4112f4*/
  return (*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v3 + 20))(v3, v5, a2); /*0x411303*/
}
}

// ==== BACKFILL 0x00411310  StreamClass::WriteBytes  cls=StreamClass  sig=csp  renamed_refs=0  residual=- ====
int StreamClass::WriteBytes(unsigned short a2, char a3, int a4, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall StreamClass_WriteBytes(_DWORD **this, unsigned __int16 a2, char a3, int a4, int a5, int a6)
{
  return (*(int (__thiscall **)(_DWORD, char *, _DWORD))(**(this + 5) + 20))(*(this + 5), &a3, a2); /*0x411328*/
}
}

// ==== BACKFILL 0x00411330  TacticalClass::FillScanlinesTransparent  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TacticalClass::FillScanlinesTransparent(int a1, int a2, int a3, int a4) {
{
      int v5;
      int v6;
      unsigned int result;
      char *v8;
      int v9;
      char *v10;
      unsigned int v11;
      char *v12;
      unsigned int v13;
      int v14;
      _WORD *v15;
      _WORD *v16;
      unsigned int v17;
      int v18;
      char *v19;
      char *v20;
      unsigned int v21;
      int v23;
      _WORD *v24;
      char v25;
      int v26;

      v5 = this;
      v6 = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 20) + 92))(this->abstractFlags, a2, a3);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 20) + 96))(*(_DWORD *)(v5 + 20));
      result = *(_DWORD *)(v5 + 28);
      v8 = (char *)(v6 + *(_DWORD *)(v5 + 16));
      if ( (unsigned int)v8 >= result )
        v8 -= *(_DWORD *)(v5 + 32);
      if ( a5 > 0 )
      {
        v26 = a5;
        do
        {
          v9 = a4;
          if ( (unsigned int)&v8[2 * a4] < result )
          {
            v18 = a4;
            v19 = v8;
            if ( ((unsigned __int8)v8 & 2) != 0 && a4 )
            {
              *(_WORD *)v8 = 127;
              v19 = v8 + 2;
              v18 = a4 - 1;
            }
            v20 = 0;
            v21 = v18 >> 1;
            if ( v18 >> 1 )
            {
              memset32(v19, 8323199, v21);
              v5 = this;
              v20 = &v19[4 * v21];
            }
            if ( (v18 & 1) != 0 && v20 )
              *(_WORD *)v20 = 127;
          }
          else
          {
            v10 = v8;
            v11 = (result - (unsigned int)v8) >> 1;
            v23 = v11;
            if ( ((unsigned __int8)v8 & 2) != 0 && v11 )
            {
              *(_WORD *)v8 = 127;
              v10 = v8 + 2;
              v23 = v11 - 1;
            }
            v12 = 0;
            v13 = v23 >> 1;
            if ( v23 >> 1 )
            {
              memset32(v10, 8323199, v13);
              v9 = a4;
              v12 = &v10[4 * v13];
            }
            if ( (v23 & 1) != 0 && v12 )
              *(_WORD *)v12 = 127;
            v14 = v9 - v11;
            v15 = *(_WORD **)(this + 24);
            v25 = v14;
            v24 = v15;
            if ( ((unsigned __int8)v15 & 2) != 0 && v14 )
            {
              *v15++ = 127;
              --v14;
              v24 = v15;
              v25 = v14;
            }
            v16 = 0;
            v17 = v14 >> 1;
            if ( v14 >> 1 )
            {
              memset32(v15, 8323199, v17);
              v16 = &v24[2 * v17];
              LOBYTE(v14) = v25;
            }
            if ( (v14 & 1) != 0 && v16 )
              *v16 = 127;
            v5 = this;
          }
          result = *(_DWORD *)(v5 + 28);
          v8 += 2 * *(_DWORD *)(v5 + 40);
          if ( (unsigned int)v8 >= result )
            v8 -= *(_DWORD *)(v5 + 32);
          --v26;
        }
        while ( v26 );
      }
      return result;
}
} }

// ==== BACKFILL 0x004114F0  BSurface::Stub  cls=Surface  sig=csp  renamed_refs=0  residual=- ====
char BSurface::Stub(int a1, int a2)
{
return 1;
}

// ==== BACKFILL 0x00411500  XSurface::entry_68_  cls=Surface  sig=csp  renamed_refs=0  residual=- ====
char XSurface::entry_68_(int a1, int a2)
{
return 1;
}

// ==== BACKFILL 0x00411510  Surface::GetRect  cls=Surface  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Surface::GetRect(unsigned int * a2)
{
{
    int v3;
    int v4;
    v3 = this->Width;
    v4 = this->Height;
    *a2 = 0;
    *((int*)(a2) + 1) = 0;
    *((int*)(a2) + 2) = v3;
    *((int*)(a2) + 3) = v4;
    return a2;
}
}

// ==== BACKFILL 0x00411540  Surface::GetWidth  cls=Surface  sig=csp  renamed_refs=0  residual=- ====
int Surface::GetWidth()
{
{
    return this->Width;
}
}

// ==== BACKFILL 0x00411550  Surface::GetHeight  cls=Surface  sig=csp  renamed_refs=0  residual=- ====
int Surface::GetHeight()
{
{
    return this->Height;
}
}

// ==== BACKFILL 0x00411560  XSurface::Lock  cls=XSurface  sig=csp  renamed_refs=0  residual=- ====
int XSurface::Lock(int a2, int a3)
{
{
    ++this->LockCount;
    return 0;
}
}

// ==== BACKFILL 0x00411570  XSurface::Unlock  cls=XSurface  sig=csp  renamed_refs=0  residual=- ====
char XSurface::Unlock()
{
{
    --this->LockCount;
    return 1;
}
}

// ==== BACKFILL 0x00411580  Surface::IsLocked  cls=XSurface  sig=csp  renamed_refs=0  residual=- ====
BOOL Surface::IsLocked()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall Surface_IsLocked(_DWORD *this)
{
  return *(this + 3) != 0; /*0x41158a*/
}
}

// ==== BACKFILL 0x00411590  XSurface::StubReturnFalse  cls=XSurface  sig=csp  renamed_refs=0  residual=- ====
char XSurface::StubReturnFalse()
{
return 0;
}

// ==== BACKFILL 0x004115A0  XSurface::ScalarDtor  cls=XSurface  sig=csp  renamed_refs=0  residual=- ====
XSurface * XSurface::ScalarDtor(char a2)
{
{
    *(int *)this = &Surface_Vtable;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (XSurface *)this;
}
}

// ==== BACKFILL 0x004115C0  Surface::StubReturnFalse  cls=Surface  sig=csp  renamed_refs=0  residual=- ====
char Surface::StubReturnFalse()
{
return 0;
}

// ==== BACKFILL 0x004115D0  AbstractClass::getObjectValue  cls=Surface  sig=csp  renamed_refs=0  residual=- ====
Surface * AbstractClass::getObjectValue(char a2)
{
{
    *(int *)this = &Surface_Vtable;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (Surface *)this;
}
}

// ==== BACKFILL 0x00411630  BSurface::GetBytesPerPixel  cls=BSurface  sig=csp  renamed_refs=0  residual=- ====
int BSurface::GetBytesPerPixel()
{
{
    return this->BytesPerPixel;
}
}

// ==== BACKFILL 0x00411640  BSurface::GetPitch  cls=BSurface  sig=csp  renamed_refs=0  residual=- ====
int BSurface::GetPitch()
{
{
    return this->BytesPerPixel *(void**)this->GetWidth();
}
}

// ==== BACKFILL 0x00411650  BSurface::ScalarDtor  cls=BSurface  sig=csp  renamed_refs=0  residual=- ====
BSurface * BSurface::ScalarDtor(char a2)
{
{
    Vector::Clear((int)(this + 20));
    *(int *)this = &Surface_Vtable;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BSurface *)this;
}
}

// ==== BACKFILL 0x00412610  sub_412610  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_412610::sub_412610()
{
{
    char *v1;
    int v2;
    char v3;
    int v4;
    v1 = this;
    v2 = 0;
    while ( v1 )
  {
    if ( !isxdigit(*v1) )
    break;
    v3 = *v1;
    v4 = 16 * v2;
    ++v1;
    if ( v3 < 48 || v3 > 57 )
    v2 = v4 + toupper(v3) - 55;
    else
    v2 = v4 + v3 - 48;
  }
    return v2;
}
}

// ==== BACKFILL 0x00413490  nullsub_3  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_3(AbstractClass * aP0)
{
  ;
}

// ==== BACKFILL 0x004134A0  GadgetGrid::InsertItem  cls=GadgetGrid  sig=csp  renamed_refs=0  residual=- ====
int GadgetGrid::InsertItem(ObjectClass * aP1)
{
{
    ObjectClass **v4;
    ObjectClass *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int result;
    int *v12;
    int v13;
    int v14;
    char v15[4];
    ObjectClass *aP1a;
    v4 = (ObjectClass **)(*(int (__thiscall **)(ObjectClass *, char *))(*(int *)aP1->__pad_0 + 440))(aP1, v15);
    v5 = *v4;
    aP1a = *v4;
    (*(void (__thiscall **)(ObjectClass *, ObjectClass *))(*(int *)aP1->__pad_0 + 760))(aP1, *v4);
    if ( (short)v5 >= 0 )
    v5 = (ObjectClass *)(short)v5;
    else
    v5 = 0;
    if ( SHIWORD(aP1a) >= 0 )
    v6 = SHIWORD(aP1a);
    else
    v6 = 0;
    v7 = (int)v5 / (*(int *)&DataGlobal_87F8E4.field_2D[3] / 20);
    v8 = 19;
    if ( v7 <= 19 )
    v8 = v7;
    v9 = v6 / (*(int *)&DataGlobal_87F8E4.__pad_31[3] / 20);
    if ( v9 > 19 )
    v9 = 19;
    v10 = 3 * (v8 + 20 * v9);
    result = *(this + 120 * v9 + 6 * v8 + 2);
    v12 = this + 2 * v10;
    if ( v12[4] < result || (*((char *)(v12) + 13) || !result) && (v13 = v12[5], v13 > 0) && (result = (*(int (__thiscall **)(int *, int, int))(*v12 + 8))(v12, result + v13, 0), (char)result) )
  {
    result = v12[4];
    v14 = v12[1];
    v12[4] = result + 1;
    *(int *)(v14 + 4 * result) = aP1;
  }
    return result;
}
}

// ==== BACKFILL 0x004135A0  ObjectClass::HasLinkedObject  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool ObjectClass::HasLinkedObject(VectorClass * aP0)
{
{
    VectorClass *v1;
    v1 = *(VectorClass **)((*(int (__thiscall **)(VectorClass *))(*(int *)aP0->vtable0 + 444))(aP0) + 224);
    return v1 && v1 != aP0;
}
}

// ==== BACKFILL 0x004135D0  GadgetGrid::RemoveItem  cls=GadgetGrid  sig=csp  renamed_refs=0  residual=- ====
int GadgetGrid::RemoveItem(IUnknown * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int *v9;
    int result;
    int v11;
    int v12;
    short v13;
    char v14[4];
    v3 = *(int *)(*(int (__thiscall **)(IUnknown *, char *))(aP1->field_0 + 756))(aP1, v14);
    v13 = HIWORD(v3);
    (*(void (__thiscall **)(IUnknown *, int))(aP1->field_0 + 760))(aP1, *(int *)&DataGlobal_87F8E4.__pad_5568[10756]);
    if ( (v3 & 0x8000u) == 0 )
    v3 = (short)v3;
    else
    v3 = 0;
    if ( v13 >= 0 )
    v4 = v13;
    else
    v4 = 0;
    v5 = v3 / (*(int *)&DataGlobal_87F8E4.field_2D[3] / 20);
    v6 = 19;
    if ( v5 <= 19 )
    v6 = v5;
    v7 = v4 / (*(int *)&DataGlobal_87F8E4.__pad_31[3] / 20);
    if ( v7 > 19 )
    v7 = 19;
    v8 = *(this + 120 * v7 + 6 * v6);
    v9 = this + 120 * v7 + 6 * v6;
    result = (*(int (__thiscall **)(int *, IUnknown **))(v8 + 16))(v9, &aP1);
    if ( result != -1 )
  {
    v11 = v9[4];
    if ( result < v11 )
    {
    v12 = v11 - 1;
    for ( v9[4] = v12; result < v9[4]; *(int *)(v9[1] + 4 * result - 4) = *(int *)(v9[1] + 4 * result) )
    ++result;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00413850  SaveGame::SaveIteratedData  cls=SaveGame  sig=csp  renamed_refs=0  residual=- ====
int SaveGame::SaveIteratedData(int a2)
{
{
    int v2;
    int v3;
    int *i;
    int v5;
    int result;
    int v7;
    v2 = a2;
    v3 = 0;
    for ( i = this + 1; ; i += 6 )
  {
    v5 = *(int *)v2;
    a2 = i[3];
    result = (*(int (__stdcall **)(int, int *, int, int))(v5 + 16))(v2, &a2, 4, 0);
    if ( result < 0 )
    break;
    v7 = 0;
    if ( a2 > 0 )
    {
    do
      {
    result = (*(int (__stdcall **)(int, int, int, int))(*(int *)(v2) + 16))(v2, *i + 4 * v7, 4, 0);
    if ( result < 0 )
    return result;
      }
    while ( ++v7 < a2 );
    }
    if ( ++v3 >= 400 )
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x00413A30  Coord::ToCell  cls=Coord  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Coord::ToCell(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Coord::ToCell(_DWORD *this, IUnknown *aP1)
{
  int v3; // [esp+0h] [ebp-4h]

  LOWORD(v3) = *this / 256; /*0x413a3f*/
  HIWORD(v3) = *(this + 1) / 256; /*0x413a53*/
  aP1->field_0 = v3; /*0x413a60*/
  return &aP1->field_0; /*0x413a63*/
}
}

// ==== BACKFILL 0x00413A70  DynamicVector::AddItem  cls=DynamicVector  sig=csp  renamed_refs=1  residual=- ====
char DynamicVector::AddItem(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->DynamicVector_field_0x8;
    if ( this->DynamicVector_field_0x10 >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->DynamicVector_field_0x10;
    v7 = this->Items;
    this->DynamicVector_field_0x10 = v6 + 1;
    *(int *)(v7 + 4 * v6) = *(int *)aP1->vtable1;
    return 1;
}
}

// ==== BACKFILL 0x00414A10  nullsub_71  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_71(int a1, int a2)
{
  ;
}

// ==== BACKFILL 0x00415A50  AircraftClass::ProcessReturnToBase  cls=AircraftClass  sig=csp  renamed_refs=3  residual=- ====
int AircraftClass::ProcessReturnToBase()
{
{
    unsigned int *v2;
    unsigned int TransitionCount;
    unsigned int *v4;
    void *v5;
    int v7;
    int v8;
    if ( this->movementDestination )
  {
    if ( this->movementDestination == (unsigned int *)((int (__thiscall *)(unsigned int **))(*(void**)this)[111])(this) )
    ((void (__thiscall *)(unsigned int **, int, int))(*(void**)this)[288])(this, 0, 1);
  }
    else
  {
    v2 = this->Owner;
    TransitionCount = v2[120];
    if ( TransitionCount >= 4 )
    TransitionCount = HouseClass::GetTransitionCount(v2);
    v7 = *CellClass::FindOpenNeighbor( (int *)&DataGlobal_87F7E8, &v8, TransitionCount, (int)&g_AircraftStatusFlag, (int)&g_AircraftStatusFlag, 4, 1, 0);
    if ( v7 != g_AircraftStatusFlag )
    {
    v4 = *(void**)this;
    v5 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v7);
    ((void (__thiscall *)(unsigned int **, void *, int))v4[288])(this, v5, 1);
    return 3;
    }
  }
    return 3;
}

/* ASM:
sub     esp, 8
push    esi
mov     esi, ecx
mov     eax, [esi+5A4h]
test    eax, eax
jnz     short loc_415ADF
mov     ecx, [esi+21Ch]
mov     eax, [ecx+1E0h]
test    eax, eax
jl      short loc_415A75
cmp     eax, 3
jle     short loc_415A7A

loc_415A75:                             ; CODE XREF: AircraftClass__ProcessReturnToBase+1E↑j
call    HouseClass__GetTransitionCount

loc_415A7A:                             ; CODE XREF: AircraftClass__ProcessReturnToBase+23↑j
push    0
push    1
push    4
push    889E68h
push    889E68h
push    eax
lea     eax, [esp+24h+var_4]
mov     ecx, 87F7E8h
push    eax
call    CellClass__FindOpenNeighbor
mov     eax, [eax]
cmp     ax, ds:889E68h
mov     [esp+0Ch+var_8], eax
jnz     short loc_415AB7
mov     cx, word ptr [esp+0Ch+var_8+2]
cmp     cx, ds:889E6Ah
jz      short loc_415AFF

loc_415AB7:                             ; CODE XREF: AircraftClass__ProcessReturnToBase+57↑j
push    edi
mov     edi, [esi]
lea     edx, [esp+10h+var_8]
push    1
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, esi
call    dword ptr [edi+480h]
pop     edi
mov     eax, 3
pop     esi
add     esp, 8
retn
; ---------------------------------------------------------------------------

loc_415ADF:                             ; CODE XREF: AircraftClass__ProcessReturnToBase+E↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1BCh]
cmp     [esi+5A4h], eax
jnz     short loc_415AFF
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [edx+480h]

loc_415AFF:                             ; CODE XREF: AircraftClass__ProcessReturnToBase+65↑j
; AircraftClass__ProcessReturnToBase+9F↑j
mov     eax, 3
pop     esi
add     esp, 8
retn
*/
}

// ==== BACKFILL 0x00417BD0  AircraftClass::ValidateMovement  cls=AircraftClass  sig=csp  renamed_refs=0  residual=- ====
char AircraftClass::ValidateMovement(int _10, int * a2, int a4)
{
{
    FootClass *v5;
    char result;
    v5 = (FootClass *)this->GetCursorOverObject(a2, a4);
    switch ( (unsigned int)v5 )
  {
    case 2u: result = 0;
    break;
    case 3u: result = this->ExecuteMissionCommand(7, 0, a2, 0);
    break;
    case 4u: result = this->ExecuteMissionCommand(16, 0, 0, 0);
    break;
    case 0x11u: result = this->ExecuteMissionCommand(2, 0, a2, 0);
    break;
    default: result = FootClass::ValidateMove(this, v5, a2, a4);
    break;
  }
    return result;
}
}

// ==== BACKFILL 0x00417C80  ObjectClass::vt_entry_140  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::vt_entry_140(int a1, void* a2, void* a3, void* a4) {
{
    return ObjectClass::SpawnInfantry(this, (FootClass *)a1, a2, (FootClass *)a3, (FootClass *)a4);
}
} } }

// ==== BACKFILL 0x00417F80  AircraftClass::CanEnterCell  cls=AircraftClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftClass::CanEnterCell(short * a1, IUnknown * aP2, InfantryClass * aP3)
{
{
    int v6;
    if ( !(unsigned char)House::IsHumanPlayer(*(HouseClass **)(this + 540)) )
    return 0;
    v6 = FootClass::HandleCursorWithCheck((int *)this, a1, aP2, aP3);
    if ( v6 == 5 && !*(int *)this->SelectWeaponSlot(0) )
    return 0;
    return v6;
}
}

// ==== BACKFILL 0x0041A590  AircraftClass::CheckLandingClearance  cls=AircraftClass  sig=csp  renamed_refs=0  residual=- ====
char * AircraftClass::CheckLandingClearance(int a2, int a3, int a4)
{
{
    char *result;
    result = MissionClass::GetMissionControl(this);
    if ( result[9] )
    return (char *)this->sub_4176F0(0, 1);
    return result;
}
}

// ==== BACKFILL 0x0041ADC0  AircraftClass::ProcessDockCheck  cls=AircraftClass  sig=csp  renamed_refs=3  residual=- ====
int AircraftClass::ProcessDockCheck()
{
{
    if ( !this->locomotor )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int))(*(int *)this->locomotor + 116))(this->locomotor);
}
}

// ==== BACKFILL 0x0041B5C0  AircraftClass::CheckPassengerCount  cls=AircraftClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT AircraftClass::CheckPassengerCount(IPersistStream * a0, FootClass * aP1, struct IPersistStreamVtbl * a2)
{
{
    return ObjectClass::SaveToStream_Common(a0, aP1, a2);
}
}

// ==== BACKFILL 0x0041B5E0  MissionClass::vt_entry_200  cls=AircraftClass  sig=csp  renamed_refs=2  residual=- ====
namespace ra2 { namespace game { bool MissionClass::vt_entry_200() {
{
      int v1;

      v1 = this->currentMission;
      return v1 != 6 && v1 != 21 && (!this->AircraftClass_field_bool_6D2 || v1 == 30) && this->AircraftClass_field_bool_6D4 != 0;
}
} } }

// ==== BACKFILL 0x0041B7D0  TechnoClass::processDamageAnimation  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
BOOL TechnoClass::processDamageAnimation(int a1)
{
{
    return *(int *)(a1 - 1448) != 0;
}
}

// ==== BACKFILL 0x0041B840  TechnoClass::updateWeaponCooldown  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
BOOL TechnoClass::updateWeaponCooldown(int a1)
{
{
    return *(char *)(*(int *)(a1 + 4) + 3598) != 0;
}
}

// ==== BACKFILL 0x0041B860  TechnoClass::checkAmmo  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::checkAmmo(AircraftClass * aP0)
{
{
    return BYTE2(aP0->uniqueId);
}
}

// ==== BACKFILL 0x0041B900  TacticalClass::StubReturnTrue  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void TacticalClass::StubReturnTrue()
{
  ;
}

// ==== BACKFILL 0x0041B920  AircraftClass::IsHeightAboveThreshold  cls=AircraftClass  sig=csp  renamed_refs=2  residual=- ====
int AircraftClass::IsHeightAboveThreshold()
{
{
    int v1;
    v1 = this->Type;
    if ( v1 != *(int *)(DataGlobal_87F7E8[7806] + 1248) && v1 != *(int *)(DataGlobal_87F7E8[7806] + 1300) )
    return ObjectClass::IsHeightAboveThreshold_0((AnimClass *)this);
    if ( !this->locomotor )
    WinAPI::Wrapper(-2147467261);
    return (*(unsigned char (__stdcall **)(int))(**((int **)(this) + 413) + 128))(this->locomotor) != 0;
}

/* ASM:
push    esi
mov     esi, ecx
mov     ecx, ds:8871E0h
mov     eax, [esi+6C4h]
cmp     eax, [ecx+4E0h]
jz      short loc_41B948
cmp     eax, [ecx+514h]
jz      short loc_41B948
mov     ecx, esi        ; this
call    ObjectClass__IsHeightAboveThreshold_0
pop     esi
retn
; ---------------------------------------------------------------------------

loc_41B948:                             ; CODE XREF: AircraftClass__IsHeightAboveThreshold+15↑j
; AircraftClass__IsHeightAboveThreshold+1D↑j
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_41B95C
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_41B95C:                             ; CODE XREF: AircraftClass__IsHeightAboveThreshold+30↑j
mov     esi, [esi+674h]
push    esi
mov     eax, [esi]
call    dword ptr [eax+80h]
neg     al
sbb     eax, eax
pop     esi
neg     eax
retn
*/
}

// ==== BACKFILL 0x0041B980  AircraftClass::IsBelowScreen  cls=AircraftClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftClass::IsBelowScreen()
{
{
    AircraftTypeClass *v1;
    v1 = (AircraftTypeClass *)this->Type;
    if ( v1 != *(AircraftTypeClass **)&g_RulesClass_Instance->__pad_240[672] && v1 != *(AircraftTypeClass **)&g_RulesClass_Instance->__pad_240[724] )
  {
    return ObjectClass::IsBelowScreen(this);
  }
    if ( !this->locomotor )
    WinAPI::Wrapper(-2147467261);
    return (*(unsigned char (__stdcall **)(int))(**((int **)(this) + 413) + 128))(this->locomotor) == 0;
}
}

// ==== BACKFILL 0x0041BDD0  ObjectClass::GetCoordsThunk1  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::GetCoordsThunk1() {
{
    int *v1;
    char v3[12];
    int *v4;
    v1 = (int *)this->Delete(v3);
    *v4 = *v1;
    v4[1] = v1[1];
    v4[2] = v1[2];
    return (int)v4;
}
} } }

// ==== BACKFILL 0x0041BE00  ObjectClass::GetCoordsThunk2  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetCoordsThunk2()
{
{
    int *v1;
    char v3[12];
    int *v4;
    v1 = (int *)this->Delete(v3);
    *v4 = *v1;
    v4[1] = v1[1];
    v4[2] = v1[2];
    return (int)v4;
}
}

// ==== BACKFILL 0x0041BE30  ObjectClass::GetCoordsThunk3  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::GetCoordsThunk3() {
{
    int *v1;
    char v3[12];
    int *v4;
    v1 = (int *)this->Delete(v3);
    *v4 = *v1;
    v4[1] = v1[1];
    v4[2] = v1[2];
    return (int)v4;
}
} } }

// ==== BACKFILL 0x0041BE60  AircraftClass::LandingCheckStub  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int AircraftClass::LandingCheckStub()
{
return 0;
}

// ==== BACKFILL 0x0041BE70  AircraftClass::StubReturnFalse2  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
bool AircraftClass::StubReturnFalse2() { return false; }

// ==== BACKFILL 0x0041BE80  AircraftClass::CheckStateFlag  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int AircraftClass::CheckStateFlag()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x0041BE90  AircraftClass::CheckStateFlag2  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int AircraftClass::CheckStateFlag2()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x0041BEA0  ObjectClass::GetCellCoords_Alt  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::GetCellCoords_Alt(CellStruct* out) const {
{
    int v2;
    int *v3;
    LOWORD(v2) = this->location / 256;
    HIWORD(v2) = this->WaveClass_field_14C / 256;
    *v3 = v2;
    return (int)v3;
}
} } }

// ==== BACKFILL 0x0041BEE0  TacticalClass::StubReturnFalse  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
char TacticalClass::StubReturnFalse()
{
return 0;
}

// ==== BACKFILL 0x0041BEF0  TechnoClass::selectTarget  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
bool TechnoClass::selectTarget() { return false; }

// ==== BACKFILL 0x0041BF00  TacticalClass::StubReturnFalse2  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::StubReturnFalse2()
{
return 0;
}

// ==== BACKFILL 0x0041BF10  TacticalClass::StubReturnFalse3  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::StubReturnFalse3()
{
return 0;
}

// ==== BACKFILL 0x0041BF20  TacticalClass::StubReturnFalse4  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::StubReturnFalse4()
{
return 0;
}

// ==== BACKFILL 0x0041BF30  MissionClass::vt_entry_1FC  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::vt_entry_1FC()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x0041BF80  TacticalClass::StubReturnFalse5  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::StubReturnFalse5()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x0041BF90  TacticalClass::StubReturnFalse6  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::StubReturnFalse6()
{
{
    int result;
    return result;
}
}

// ==== BACKFILL 0x0041BFA0  TacticalClass::ProcessFrame  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TacticalClass::ProcessFrame() {
{
      return *(_BYTE *)(this->vt33() + 3233);
}
} }

// ==== BACKFILL 0x0041BFB0  TacticalClass::StubReturnFalse7  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
char TacticalClass::StubReturnFalse7()
{
return 0;
}

// ==== BACKFILL 0x0041BFC0  TacticalClass::StubReturnFalse8  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::StubReturnFalse8()
{
return 0;
}

// ==== BACKFILL 0x0041BFD0  TacticalClass::StubReturnFalse9  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::StubReturnFalse9()
{
return 0;
}

// ==== BACKFILL 0x0041BFF0  TechnoClass::vt_entry_434  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::vt_entry_434() { return 0; }

// ==== BACKFILL 0x0041C000  TacticalClass::StubReturnTrue2  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
void TacticalClass::StubReturnTrue2()
{
  ;
}

// ==== BACKFILL 0x0041C020  AircraftClass::CheckReloadTimer  cls=TechnoClass  sig=csp  renamed_refs=1  residual=- ====
int AircraftClass::CheckReloadTimer()
{
{
    int result;
    LOBYTE(result) = (unsigned char)this->drainTarget;
    return result;
}
}

// ==== BACKFILL 0x0041C030  TacticalClass::CheckAction  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TacticalClass::CheckAction() {
{
      int result;

      this->q1D8 = 0;
      return result;
}
} }

// ==== BACKFILL 0x0041C040  TacticalClass::StubReturnFalse10  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::StubReturnFalse10()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}

// ==== BACKFILL 0x0041C060  BuildingClass::vt_entry_4E4  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
bool BuildingClass::vt_entry_4E4()  { return false; }

// ==== BACKFILL 0x0041C070  AircraftClass::CheckDockState  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
char AircraftClass::CheckDockState()
{
{
    return this->FootClass_field_6B6;
}
}

// ==== BACKFILL 0x0041C090  FootClass::Destru_vt323  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
int FootClass::Destru_vt323() { return 0; }

// ==== BACKFILL 0x0041C0F0  FootClass::vt_entry_514  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
void FootClass::vt_entry_514() {}

// ==== BACKFILL 0x0041C110  FootClass::StubReturnVoid  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
void FootClass::StubReturnVoid() {}

// ==== BACKFILL 0x0041C120  FootClass::Stub  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
void FootClass::Stub(int a1)
{
  ;
}

// ==== BACKFILL 0x0041C130  FootClass::vt_entry_534  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
void FootClass::vt_entry_534() {}

// ==== BACKFILL 0x0041C140  FootClass::vt_entry_540  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
void FootClass::vt_entry_540() {}

// ==== BACKFILL 0x0041C150  TacticalClass::ProcessTick2  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
_DWORD *__thiscall MiniStub_41c150(_DWORD *this, _DWORD *a2)
{
  *a2 = *(this + 344); /*0x41c15a*/
  return a2; /*0x41c15c*/
}

// ==== BACKFILL 0x0041C160  TacticalClass::ProcessTick3  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TacticalClass::ProcessTick3(int a1) {
{
      this->q560 = a2;
      return a2;
}
} }

// ==== BACKFILL 0x0041C170  AircraftClass::MissionStubReturnZero2  cls=AircraftClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftClass::MissionStubReturnZero2() { return 0; }

// ==== BACKFILL 0x0041C180  AircraftClass::MissionStubReturnZero3  cls=AircraftClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftClass::MissionStubReturnZero3() { return 0; }

// ==== BACKFILL 0x0041C190  AircraftClass::PowerDrainProcess  cls=AircraftClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftClass::PowerDrainProcess(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448642;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// ==== BACKFILL 0x0041C1D0  AircraftClass::CheckMissionAbort  cls=AircraftClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftClass::CheckMissionAbort()
{
{
    return *(int *)(this->Type + 96);
}
}

// ==== BACKFILL 0x0041C200  AircraftClass::CheckMissionFail  cls=AircraftClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftClass::CheckMissionFail()
{
{
    return this->Type;
}
}

// ==== BACKFILL 0x0041C210  AircraftClass::CheckActionStatus  cls=AircraftClass  sig=csp  renamed_refs=0  residual=- ====
AircraftClass * AircraftClass::CheckActionStatus(char a2)
{
{
    AircraftClass::Destruct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (AircraftClass *)this;
}
}

// ==== BACKFILL 0x0041C2E0  Vector::ToFacingMath  cls=Vector  sig=csp  renamed_refs=3  residual=- ====
unsigned short * Vector::ToFacingMath(unsigned short * a2)
{
{
    double v3;
    double v5;
    v5 = Math::Sqrt(*(void**)this * *(void**)(this) + this->Vector_field_0x4 *(void**)this->Vector_field_0x4);
    v3 = Math::CalcAngle(this->Vector_field_0x8, v5);
    *a2 = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427);
    return a2;
}
}

// ==== BACKFILL 0x0041C350  Math::Hypotenuse2D  cls=Math  sig=csp  renamed_refs=0  residual=- ====
void Math::Hypotenuse2D()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Math_Hypotenuse2D(double *this)
{
  Math::Sqrt(*this * *this + *(this + 1) * *(this + 1)); /*0x41c369*/
}
}

// ==== BACKFILL 0x0041C380  Coord::Length  cls=Coord  sig=csp  renamed_refs=0  residual=- ====
double Coord::Length()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __thiscall Coord::Length(int *this)
{
  double result; // st7

  result = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x41c3a4*/
                                         (double)*this * (double)*this
                                       + (double)*(this + 1) * (double)*(this + 1)
                                       + (double)*(this + 2) * (double)*(this + 2)));
  Math::RoundToInt(result); /*0x41c3ac*/
  return result; /*0x41c3a9*/
}
}

// ==== BACKFILL 0x0041C3F0  BulletClass::NormalizeZeroVector  cls=BulletClass  sig=csp  renamed_refs=3  residual=- ====
namespace gamemd { void BulletClass::NormalizeZeroVector() {
{
    if ( *(void**)this == 0.0 && this->vtable2 == 0.0 && this->vtable3 == 0.0 )
  {
    *(int *)this = 0;
    this->vtable2 = 1079574528;
  }
}
} }

// ==== BACKFILL 0x0041C490  AbstractClass::processCleanup  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* AbstractClass::processCleanup(int a2) {
{
    int v3;
    int *v4;
    int v5;
    int v6;
    int *v7;
    int v8;
    if ( (a2 & 2) != 0 )
  {
    v3 = *(this - 1);
    v4 = this - 1;
    v5 = 3 * v3;
    v6 = v3 - 1;
    v7 = this + v5;
    if ( v6 >= 0 )
    {
    v8 = v6 + 1;
    do
      {
    v7 -= 3;
    nullsub_84(v7);
    --v8;
      }
    while ( v8 );
    }
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(v4);
    return (char *)v4;
  }
    else
  {
    nullsub_84(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (char *)this;
  }
}
} } }

// ==== BACKFILL 0x0041C500  BuildingTypeClass::Enqueue  cls=BuildingTypeClass  sig=csp  renamed_refs=4  residual=- ====
char BuildingTypeClass::Enqueue(int a2)
{
{
    char *v3;
    int i;
    int v5;
    int *v6;
    int v7;
    if ( a2 < 0 )
    return 0;
    v3 = (char *)__2_YAPAXI_Z(8 * (a2 + this->vtable3));
    if ( !v3 )
    return 0;
    for ( i = 0; i < this->vtable2; *(int *)&v3[v5 + 4] = v6[1] )
  {
    v5 = 8 * i;
    v6 = (int *)(*(int *)(this) + 8 * i++);
    *(int *)&v3[v5] = *v6;
  }
    __3_YAXPAX_Z(*(void **)this);
    v7 = a2 + this->vtable3;
    *(int *)this = v3;
    this->vtable3 = v7;
    this->uniqueId = 0;
    return 1;
}
}

// ==== BACKFILL 0x0041C590  BuildingTypeClass::Dequeue  cls=BuildingTypeClass  sig=csp  renamed_refs=4  residual=- ====
size_t BuildingTypeClass::Dequeue(BuildingClass * aP1)
{
{
    size_t result;
    ObjectClass *v4;
    ObjectClass *v5;
    int v6;
    ObjectClass *v7;
    result = (size_t)this->vtable2;
    if ( result )
  {
    if ( !(unsigned char)this->vtable4 )
    {
    qsort(*(void**)this, result, 8u, CompareFunction);
    this->uniqueId = 0;
    this->vtable4 = 1;
    }
    v4 = (ObjectClass *)*(void**)this;
    v5 = *(ObjectClass **)aP1->__pad_0;
    v6 = (int)this->vtable2;
    if ( v6 <= 0 )
    return 0;
    while ( 1 )
    {
    v7 = *(ObjectClass **)&v4->__pad_0[8 * (v6 / 2)];
    if ( (int)v7 <= (int)v5 )
      {
    if ( v7 == v5 )
    return (size_t)v4 + 8 * (v6 / 2);
    v4 = (ObjectClass *)((char *)(v4) + 8 * (v6 / 2) + 8);
    v6 += -1 - v6 / 2;
      }
    else
      {
    v6 /= 2;
      }
    if ( v6 <= 0 )
    return 0;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0041C640  TechnoClass::processIdleState  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int TechnoClass::processIdleState(int a1, void* a2, void* a3) {
{
    return AircraftClass::QueryInterface(this, (AbstractClass *)(a2 - 4), a3, a4);
}
} } }

// ==== BACKFILL 0x0041C650  TechnoClass::processGuardState  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int TechnoClass::processGuardState(int a1) {
{
    return AircraftClass::AddRef(this, a2 - 4);
}
} } }

// ==== BACKFILL 0x0041C660  TechnoClass::processAttackState  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int TechnoClass::processAttackState(int a1) {
{
    return AircraftClass::Release(this, a2 - 4);
}
} } }

// ==== BACKFILL 0x0041C670  TechnoClass::processMoveState  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int TechnoClass::processMoveState(int a1, void* a2, void* a3) {
{
    return AircraftClass::QueryInterface(this, (AbstractClass *)(a2 - 1728), a3, a4);
}
} } }

// ==== BACKFILL 0x0041C680  TechnoClass::processHarvestState  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int TechnoClass::processHarvestState(int a1) {
{
    return AircraftClass::AddRef(this, a2 - 1728);
}
} } }

// ==== BACKFILL 0x0041C690  TechnoClass::processDeployState  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int TechnoClass::processDeployState(int a1) {
{
    return AircraftClass::Release(this, a2 - 1728);
}
} } }

// ==== BACKFILL 0x0041CB20  AircraftTypeClass::ConstructAircraft  cls=AircraftTypeClass  sig=csp  renamed_refs=0  residual=- ====
AircraftClass * AircraftTypeClass::ConstructAircraft(AbstractClass * ppv)
{
{
    int v3;
    v3 = __2_YAPAXI_Z(0x6D8u);
    if ( v3 )
    return (AircraftClass *)AircraftClass::Construct(v3, this, ppv);
    else
    return 0;
}
}

// ==== BACKFILL 0x0041CB50  TechnoTypeClass::vt_entry_A0  cls=AircraftTypeClass  sig=csp  renamed_refs=0  residual=- ====
char TechnoTypeClass::vt_entry_A0()
{
{
    return 0;
}
}

// ==== BACKFILL 0x0041CB60  AircraftTypeClass::StubReturnFalse  cls=AircraftTypeClass  sig=csp  renamed_refs=0  residual=- ====
char AircraftTypeClass::StubReturnFalse()
{
return 0;
}

// ==== BACKFILL 0x0041CB70  AircraftTypeClass::CreateAircraft  cls=AircraftTypeClass  sig=csp  renamed_refs=0  residual=- ====
int * AircraftTypeClass::CreateAircraft(int a1)
{
{
    if ( (DataGlobal_889F38 & 1) == 0 )
  {
    DataGlobal_889F38 |= 1u;
    DataGlobal_889F20 = 0;
    DataGlobal_889F24 = 2147450879;
    atexit(nullsub_85);
  }
    return &DataGlobal_889F20;
}
}

// ==== BACKFILL 0x0041CBE0  AircraftTypeClass::GetDimensions  cls=AircraftTypeClass  sig=csp  renamed_refs=0  residual=- ====
char AircraftTypeClass::GetDimensions(int a1, int a2)
{
return 0;
}

// ==== BACKFILL 0x0041CBF0  ObjectTypeClass::vt_entry_7C  cls=AircraftTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ObjectTypeClass::vt_entry_7C(unsigned int * a1)
{
{
    int v1;
    v1 = 2 * DataGlobal_889F58;
    *a1 = 256;
    *((int*)(a1) + 1) = 256;
    *((int*)(a1) + 2) = v1;
    return a1;
}
}

// ==== BACKFILL 0x0041CDB0  AircraftTypeClass::PowerDrainUpdate  cls=AircraftTypeClass  sig=csp  renamed_refs=5  residual=- ====
int AircraftTypeClass::PowerDrainUpdate(int * a2)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    v3 = BuildingTypeClass::ProcessPower(this, a2);
    LOBYTE(v3) = this->qE08;
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = this->qE09;
    Power::FlagProcess(a2, v4);
    LOBYTE(v5) = this->qE0A;
    v6 = Power::FlagProcess(a2, v5);
    LOBYTE(v6) = this->qE0D;
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = this->qE0E;
    Power::FlagProcess(a2, v7);
    return Power::TimerProcess(this->ArrayIndex);
}
}

// ==== BACKFILL 0x0041CE20  AircraftTypeClass::LoadFromINI  cls=AircraftTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftTypeClass::LoadFromINI(ObjectTypeClass * aP0, int aP1)
{
{
    int result;
    result = TechnoTypeClass::SaveLoad_Prefix(aP0, aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    TechnoTypeClass::Construct((int)aP0, (ObjectTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_AircraftTypeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_AircraftTypeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_AircraftTypeClass;
    *(int *)&aP0->__pad_0[12] = &vt_AircraftTypeClass;
    }
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[5].ChargerBarrels[6]);
    VoxelAnimType::LoadAnim(aP0->__pad_0);
    ObjectTypeClass::Load2DArt(aP0->__pad_0);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x0041CE90  AircraftTypeClass::SaveToINI  cls=AircraftTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftTypeClass::SaveToINI(void * a0, TechnoTypeClass * aP1, int a3)
{
{
    int result;
    result = TechnoTypeClass::SaveLoad_Prefix_0(aP1, a0, aP1, (TechnoTypeClass *)a3);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x0041CEB0  AircraftTypeClass::GetClassIdentifier  cls=AircraftTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1366608935;
  a2[1] = 298976796;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x0041CF80  ObjectTypeClass::Copy  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ObjectTypeClass::Copy(unsigned int * a0, ObjectTypeClass * aP1)
{
{
    *a0 = *(int *)aP1->__pad_0;
    *((int*)(a0) + 1) = *(int *)&aP1->__pad_0[4];
    *((int*)(a0) + 2) = *(int *)&aP1->__pad_0[8];
    return a0;
}
}

// ==== BACKFILL 0x0041CFA0  ObjectClass::GetMember41_2  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::GetMember41_2() {
    return this->location.Z;

/* ASM:
mov     eax, [ecx+0A4h]
retn
*/
} } }

// ==== BACKFILL 0x0041CFB0  AircraftTypeClass::GetTypeIdentifier  cls=AircraftTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftTypeClass::GetTypeIdentifier()
{
return 3;
}

// ==== BACKFILL 0x0041CFC0  AircraftTypeClass::GetObjectSize  cls=AircraftTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftTypeClass::GetObjectSize()
{
return 3600;
}

// ==== BACKFILL 0x0041CFD0  AircraftTypeClass::GetAuxField  cls=AircraftTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftTypeClass::GetAuxField()
{
{
    return this->ArrayIndex;
}
}

// ==== BACKFILL 0x0041CFE0  AircraftTypeClass::ddtor  cls=AircraftTypeClass  sig=csp  renamed_refs=0  residual=- ====
AircraftTypeClass * AircraftTypeClass::ddtor(char a2)
{
    AircraftTypeClass* v7 = this;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    DataGlobal_A8B218;
    int v2 = DataGlobal_A8B218.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < DataGlobal_A8B228 && v2 < --DataGlobal_A8B228 )
    {
        do
        {
            ++v2;
            *(DataGlobal_A8B21C + v2 - 1) = *(DataGlobal_A8B21C + v2);
        }
        while ( v2 < DataGlobal_A8B228 );
    }
    TechnoTypeClass::DTOR(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}

// ==== BACKFILL 0x0041D300  AbstractClass::Create  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* AbstractClass::Create() {
{
      int v2;

      AbstractClass::Constructor(this);
      this->__pad_0[0] = (int)&AirstrikeClass::`vftable';
      this->__pad_0[1] = (int)&AirstrikeClass::`vftable';
      this->__pad_0[2] = (int)&AirstrikeClass::`vftable';
      this->__pad_0[3] = (int)&vt_AirstrikeClass;
      if ( DataGlobal_889FC8 < DataGlobal_889FC0
        || (DataGlobal_889FC5 || !DataGlobal_889FC0)
        && DataGlobal_889FCC > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(DataGlobal_889FB8 + 8))(
             &DataGlobal_889FB8,
             DataGlobal_889FC0 + DataGlobal_889FCC,
             0) )
      {
        v2 = DataGlobal_889FC8++;
        *((_DWORD *)DataGlobal_889FBC + v2) = this;
      }
      return this;
}
} } }

// ==== BACKFILL 0x0041D380  AirstrikeClass::AirstrikeClass  cls=AirstrikeClass  sig=csp  renamed_refs=3  residual=- ====
int AirstrikeClass::AirstrikeClass(TechnoClass * aP1)
{
{
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
    AbstractClass::Constructor((AbstractClass *)this);
    *(void**)this = vt_AirstrikeClass;
    this->vtable2 = (unsigned int)vt_AirstrikeClass;
    this->vtable3 = (unsigned int)vt_AirstrikeClass;
    this->vtable4 = &vt_AirstrikeClass;
    if ( *(int *)&DataGlobal_87F8E4.__pad_5568[20860] < *(int *)&DataGlobal_87F8E4.__pad_5568[20852] || (DataGlobal_87F8E4.__pad_5568[20857] || !*(int *)&DataGlobal_87F8E4.__pad_5568[20852]) && *(int *)&DataGlobal_87F8E4.__pad_5568[20864] > 0 && (*(unsigned char (__thiscall **)(char *, int, int))(*(int *)&DataGlobal_87F8E4.__pad_5568[20844] + 8))( &DataGlobal_87F8E4.__pad_5568[20844], *(int *)&DataGlobal_87F8E4.__pad_5568[20852] + *(int *)&DataGlobal_87F8E4.__pad_5568[20864], 0) )
  {
    v3 = (*(int *)&DataGlobal_87F8E4.__pad_5568[20860])++;
    *(int *)(*(int *)&DataGlobal_87F8E4.__pad_5568[20848] + 4 * v3) = this;
  }
    this->AirstrikeClass_field_3C = 0;
    this->owner = aP1;
    this->AirstrikeClass_field_3D = 0;
    v4 = (*(int (__thiscall **)(TechnoClass *))(*(int *)aP1->__pad_0 + 132))(aP1);
    v5 = this->owner;
    this->AirstrikeClass_field_24 = *(int *)(v4 + 1564);
    v6 = (*(int (__thiscall **)(int))(*(int *)(v5) + 132))(v5);
    v7 = this->owner;
    this->AirstrikeClass_field_28 = *(int *)(v6 + 1568);
    v8 = (*(int (__thiscall **)(int))(*(int *)(v7) + 132))(v7);
    v9 = this->owner;
    this->AirstrikeClass_field_44 = *(int *)(v8 + 1580);
    v10 = (*(int (__thiscall **)(int))(*(int *)(v9) + 132))(v9);
    v11 = this->owner;
    this->AirstrikeClass_field_48 = *(int *)(v10 + 1584);
    v12 = (*(int (__thiscall **)(int))(*(int *)(v11) + 132))(v11);
    v13 = this->owner;
    this->AirstrikeClass_field_54 = *(int *)(v12 + 1572);
    v14 = *(int *)((*(int (__thiscall **)(int))(*(int *)(v13) + 132))(v13) + 1576);
    this->AirstrikeClass_field_5C = 0;
    this->AirstrikeClass_field_58 = v14;
    this->AirstrikeClass_field_50 = 0;
    return this;
}
}

// ==== BACKFILL 0x0041D540  ObjectClass::CleanupAirstrikeTarget  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::CleanupAirstrikeTarget(int a1) {
{
      int v3;
      int v4;
      int v5;
      _DWORD *v6;
      AudioController *i;
      AudioController *j;
      _DWORD v10[3];

      if ( g_NetworkPlayerBuffer.__pad_1258[268] )
      {
        if ( aP1 )
        {
          v3 = (aP1->__pad_10[4] & 4) != 0 ? (unsigned int)aP1 : 0;
          v4 = (*(int (__thiscall **)(AudioController *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) == 6 ? (unsigned int)aP1 : 0;
        }
        else
        {
          v3 = 0;
          v4 = 0;
        }
        v5 = this->q04C;
        if ( aP1 == (AudioController *)v5 )
        {
          if ( this->q03D
            && v5
            && this->q05C
            && (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v5 + 540)) )
          {
            v6 = (_DWORD *)(this->q05C + 156);
            v10[0] = *v6;
            v10[1] = v6[1];
            v10[2] = v6[2];
            StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4.__pad_5568[9108] + 604), (int)v10, 0);
          }
          WTFMode::ResetUnitFlags(this);
          for ( i = *(AudioController **)(this + 92); i; i = *(AudioController **)(this + 92) )
            AirstrikeClass::RemoveAircraft(this, i);
          v4 = this->customSound_controller;
          if ( v4 && (*(_BYTE *)(v4 + 20) & 1) != 0 )
          {
            v4 = (*(_BYTE *)(v4 + 20) & 1) != 0 ? v4 : 0;
            *(_DWORD *)(v4 + 660) = 0;
          }
          this->customSound_controller = 0;
        }
        else if ( v3 && *(_DWORD *)(v3 + 660) == this )
        {
          LOBYTE(v4) = AirstrikeClass::RemoveAircraft(this, (AudioController *)v3);
        }
        else if ( v4 && *(_DWORD *)(v4 + 660) == this && (*(int *)(v4 + 108) <= 0 || !*(_BYTE *)(v4 + 144)) )
        {
          LOBYTE(v4) = WTFMode::ResetUnitFlags(this);
        }
      }
      else
      {
        LOBYTE(v4) = (_BYTE)aP1;
        if ( aP1 == *(AudioController **)(this + 76) )
        {
          for ( j = *(AudioController **)(this + 92); j; j = *(AudioController **)&j[7].__pad_94[4] )
            *(_DWORD *)&j[3].__pad_10[68] = 0;
        }
        else if ( aP1 && (aP1->__pad_10[4] & 4) != 0 && *(_DWORD *)&aP1[3].__pad_10[68] == this )
        {
          LOBYTE(v4) = AirstrikeClass::RemoveAircraft(this, aP1);
        }
      }
      return v4;
}
} } }

// ==== BACKFILL 0x0041D6E0  AirstrikeClass::Stat  cls=AirstrikeClass  sig=csp  renamed_refs=0  residual=- ====
int AirstrikeClass::Stat(AbstractClass * aP1)
{
{
    return AbstractClass::ProcessPower((#378 *)this);
}
}

// ==== BACKFILL 0x0041D6F0  AirstrikeClass::Write  cls=AirstrikeClass  sig=csp  renamed_refs=0  residual=- ====
int AirstrikeClass::Write(AbstractClass * aP0, int aP1)
{
{
    AbstractClass *Prefix_0;
    Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( (int)Prefix_0 >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_AirstrikeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_AirstrikeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_AirstrikeClass;
    *(int *)&aP0->__pad_0[12] = &vt_AirstrikeClass;
    }
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[2].__pad_0[4]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[2].__pad_0[8]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[2].__pad_0[12]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[2].uniqueId);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[2].abstractFlags);
  }
    return (int)Prefix_0->__pad_0;
}
}

// ==== BACKFILL 0x0041D780  AirstrikeClass::Seek  cls=AirstrikeClass  sig=csp  renamed_refs=0  residual=- ====
int AirstrikeClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}

// ==== BACKFILL 0x0041D7A0  AirstrikeClass::ddtor  cls=AirstrikeClass  sig=csp  renamed_refs=0  residual=- ====
int AirstrikeClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1893611809;
  a2[1] = 299179558;
  a2[2] = -1610574449;
  a2[3] = -1672772828;
  return 0;
}

// ==== BACKFILL 0x0041D830  AirstrikeClass::StartMission  cls=AirstrikeClass  sig=csp  renamed_refs=0  residual=- ====
char AirstrikeClass::StartMission(int * a2)
{
{
    char result;
    result = (char)a2;
    if ( !this->AirstrikeClass_field_3C )
    return AirstrikeClass::SpawnAircraft(this, a2);
    if ( a2 != *(int **)(this + 80) )
    return AirstrikeClass::ReassignTarget(this, (int)a2);
    return result;
}
}

// ==== BACKFILL 0x0041DD10  sub_41DD10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_41DD10::sub_41DD10()
{
{
    this->M64 = g_CurrentFrame;
    this->M60 = 0;
    this->M61 = 0;
    return 0;
}
}

// ==== BACKFILL 0x0041DD30  AirstrikeClass::StubReturn96  cls=AirstrikeClass  sig=csp  renamed_refs=0  residual=- ====
int AirstrikeClass::StubReturn96() const { return 96; }

// ==== BACKFILL 0x0041DD40  AirstrikeClass::StubReturn71  cls=AirstrikeClass  sig=csp  renamed_refs=0  residual=- ====
int AirstrikeClass::StubReturn71() const { return 71; }

// ==== BACKFILL 0x0041F490  CCINIClass::ReadInfantryTypeList  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
AITriggerTypeClass * CCINIClass::ReadInfantryTypeList(char * a1, int a2)
{
{
    CCINIClass *KeyCount;
    CCINIClass *i;
    unsigned char *StringByIndex;
    AITriggerTypeClass *result;
    int j;
    int *v9;
    INIClass *v10;
    int k;
    int v12;
    char Destination[32];
    KeyCount = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)aAitriggertypes);
    for ( i = 0; (int)i < (int)KeyCount; i = (CCINIClass *)((char *)(i) + 1) )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(a1, (CCINIClass *)aAitriggertypes, i);
    INIClass::GetString( (unsigned char ***)a1, (INIClass *)aAitriggertypes, StringByIndex, (INIClass *)&DataGlobal_87F8E4.__pad_5568[20760], (INIClass *)Destination, 32);
    INIClass::ClearSection((int)a1, (INIClass *)Destination, 0);
  }
    INIClass::ClearSection((int)a1, (INIClass *)aAitriggertypes, 0);
    result = g_AnimTypeInitQueue;
    for ( j = 0; j < (int)g_AnimTypeInitQueue; ++j )
  {
    v9 = *(int **)&DataGlobal_A8B204->__pad_0[4 * j];
    if ( v9[39] == a2 )
    (*(void (__thiscall **)(int *, char *))(*v9 + 104))(v9, a1);
    result = g_AnimTypeInitQueue;
  }
    if ( !a2 )
  {
    INIClass::ClearSection((int)a1, (INIClass *)aAitriggertypes_0, 0);
    result = g_AnimTypeInitQueue;
    for ( k = 0; k < (int)g_AnimTypeInitQueue; ++k )
    {
    v12 = *(int *)&DataGlobal_A8B204->__pad_0[4 * k];
    LOBYTE(v10) = *(char *)(v12 + 164);
    INIClass::SetBool(a1, (INIClass *)aAitriggertypes_0, (char *)(v12 + 36), v10);
    result = g_AnimTypeInitQueue;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0041FB10  TriggerTypeClass::SaveToINI  cls=AITriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int TriggerTypeClass::SaveToINI(void* a1) {
{
      const char *v3;
      int v4;
      int v5;
      int v6;
      int v7;
      unsigned int v8;
      char *v9;
      bool v10;
      const char *v12;
      const char *v13;
      const char *v14;
      char Buffer[512];
      char Source[512];

      v12 = (const char *)off_818114;
      v13 = (const char *)off_818114;
      v3 = (const char *)off_818114;
      v14 = (const char *)off_818114;
      v4 = this->q0DC;
      if ( v4 )
        v12 = (const char *)(v4 + 36);
      v5 = this->q0E0;
      if ( v5 )
        v13 = (const char *)(v5 + 36);
      if ( this->MustTransfer == 1 )
      {
        v6 = this->NextTrigger;
        if ( v6 != -1 )
          v3 = (const char *)(*((_DWORD *)g_SuperWeaponTypeCount + v6) + 36);
      }
      else if ( this->MustTransfer == 2 )
      {
        v3 = (const char *)off_818118;
      }
      v7 = this->q0D8;
      if ( v7 )
        v14 = (const char *)(v7 + 36);
      v8 = 0;
      v9 = Buffer;
      do
      {
        sprintf(v9, DataGlobal_8181B0, *(unsigned __int8 *)(this + v8++ + 228));
        v9 += 2;
      }
      while ( v8 < 0x20 );
      v10 = this->q0D4 == 0;
      *v9 = 0;
      sprintf(
        Source,
        stru_818174,
        (const char *)(this + 100),
        v12,
        v3,
        this->FirstAction,
        this->ArrayIndex,
        v14,
        Buffer,
        *(long double *)(this + 184),
        *(long double *)(this + 192),
        *(long double *)(this + 200),
        this->q0D0 != 0,
        0,
        this->FirstEvent,
        this->q0D1 != 0,
        v13,
        this->q0D2 != 0,
        this->q0D3 != 0,
        !v10);
      return INIClass::SetString(a2, (unsigned __int8 *)aAitriggertypes, (char *)(this + 36), Source);
}
} }

// ==== BACKFILL 0x0041FD30  sub_41FD30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_41FD30::sub_41FD30(int a2)
{
{
    this->M216 = a2;
    return a2;
}
}

// ==== BACKFILL 0x0041FD40  sub_41FD40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_41FD40::sub_41FD40(int a2)
{
{
    this->M220 = a2;
    return a2;
}
}

// ==== BACKFILL 0x0041FD50  sub_41FD50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_41FD50::sub_41FD50(int a2)
{
{
    this->M224 = a2;
    return a2;
}
}

// ==== BACKFILL 0x0041FEE0  globalHelper_01FEE0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool globalHelper_01FEE0(IUnknown * aP0, unsigned int * a1, unsigned int * a2)
{
{
    IUnknown *v3;
    AbstractClass *v4;
    ObjectClass *CurrentOption;
    MouseClass *v6;
    int v7;
    MouseClass *v8;
    MouseClass *TileIndex;
    v3 = aP0;
    if ( aP0->__pad_EC[4] )
  {
    v4 = (AbstractClass *)a2;
    if ( a2 )
    {
    a2 = *(int **)HouseClass::GetCurrentOption(a1, (IUnknown *)&a1)->__pad_0;
    CurrentOption = HouseClass::GetCurrentOption(v4, (IUnknown *)&a1);
    v6 = *(MouseClass **)v3->__pad_EC;
    aP0 = *(IUnknown **)CurrentOption->__pad_0;
    if ( !v3->__pad_EC[5] )
      {
    TileIndex = (MouseClass *)MapClass::GetTileIndex( &DataGlobal_87C374.__pad_14B0[8132], (IUnknown *)&aP0, (IUnknown *)v6, 0);
    return MapClass::GetTileIndex(&DataGlobal_87C374.__pad_14B0[8132], (IUnknown *)&a2, (IUnknown *)v6, 0) == (int)TileIndex;
      }
    v7 = MapClass::GetTileIndex(&DataGlobal_87C374.__pad_14B0[8132], (IUnknown *)&aP0, (IUnknown *)v6, 0);
    if ( MapClass::GetTileIndex(&DataGlobal_87C374.__pad_14B0[8132], (IUnknown *)&a2, (IUnknown *)v6, 0) == v7 )
    return 0;
    v8 = (MouseClass *)MapClass::GetTileIndex(&DataGlobal_87C374.__pad_14B0[8132], (IUnknown *)&aP0, (IUnknown *)5, 0);
    if ( (MouseClass *)MapClass::GetTileIndex(&DataGlobal_87C374.__pad_14B0[8132], (IUnknown *)&a2, (IUnknown *)5, 0) != v8 )
    return 0;
    }
  }
    return 1;
}
}

// ==== BACKFILL 0x0041FFD0  AITriggerTypeClass::GetTypeIdentifier  cls=AITriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AITriggerTypeClass::GetTypeIdentifier()
{
return 59;
}

// ==== BACKFILL 0x0041FFE0  AITriggerTypeClass::GetObjectSize  cls=AITriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AITriggerTypeClass::GetObjectSize()
{
return 272;
}

// ==== BACKFILL 0x0041FFF0  AITriggerTypeClass::ddtor  cls=AITriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
AITriggerTypeClass * AITriggerTypeClass::ddtor(char a2)
{
    AITriggerTypeClass* v7 = this;
    AITriggerTypeClass_Array;
    int v2 = AITriggerTypeClass_Array.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < g_AnimTypeInitQueue && v2 < --g_AnimTypeInitQueue )
    {
        do
        {
            ++v2;
            *(DataGlobal_A8B204 + v2 - 1) = *(DataGlobal_A8B204 + v2);
        }
        while ( v2 < g_AnimTypeInitQueue );
    }
    AbstractTypeClass::Dtor(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}
