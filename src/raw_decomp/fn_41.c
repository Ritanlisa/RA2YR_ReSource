// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00410070  sub_410070  this=-  sig=ida-proto ====
void sub_410070()
{
  dbl_887678 = Math::ArcTan((double)dword_8876C0 * 0.00390625); /*0x410087*/
}



// ==== 0x004100A0  sub_4100A0  this=-  sig=ida-proto ====
void sub_4100A0()
{
  dbl_887690 = Math::ArcTan((double)(2 * dword_8876C0) / dbl_887668); /*0x4100c2*/
}



// ==== 0x004100D0  sub_4100D0  this=-  sig=ida-proto ====
__int64 sub_4100D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8876C0) + 0.5); /*0x4100eb*/
  dword_8876B4 = result; /*0x4100f0*/
  return result; /*0x4100f6*/
}



// ==== 0x00410100  AbstractClass::initVtableBase  this=AbstractClass  sig=ida-proto ====
int AbstractClass::sub_410100()
{
  word_887660 = 0; /*0x410102*/
  word_887662 = 0; /*0x410108*/
  return 0; /*0x41010e*/
}



// ==== 0x00410110  sub_410110  this=-  sig=ida-proto ====
int sub_410110()
{
  dword_887680 = 0; /*0x410112*/
  dword_887684 = 0; /*0x410117*/
  dword_887688 = 0; /*0x41011c*/
  return 0; /*0x410121*/
}



// ==== 0x00410130  sub_410130  this=-  sig=ida-proto ====
int sub_410130()
{
  dword_8876B0 = 0; /*0x410135*/
  dword_8876A8 = 128; /*0x41013f*/
  dword_8876AC = 128; /*0x410144*/
  return 128; /*0x410149*/
}



// ==== 0x00410150  sub_410150  this=-  sig=ida-proto ====
int sub_410150()
{
  dword_887650 = 0; /*0x410152*/
  dword_887654 = 0; /*0x410157*/
  dword_887658 = 0; /*0x41015c*/
  dword_88765C = 0; /*0x410161*/
  return 0; /*0x410166*/
}



// ==== 0x00410170  AbstractClass::Constructor  this=AbstractClass  sig=csp ====
AbstractClass *__thiscall AbstractClass::Constructor(AbstractClass *this)
{
  AbstractClass *result; // eax
  char v2; // cl

  result = this; /*0x410170*/
  this->ptr_8 = &INoticeSink::`vftable'; /*0x410174*/
  this->ptr_C = &INoticeSource::`vftable'; /*0x41017b*/
  this->nextArrayIndex = 0; /*0x410182*/
  this->referenceCount = 0; /*0x410185*/
  LOBYTE(this->NeedsSaveOrLink) = 0; /*0x410188*/
  v2 = this->abstractFlags & 0xF8; /*0x41018e*/
  result->uniqueId = -1; /*0x410191*/
  result->ptr_0 = &AbstractClass::`vftable'; /*0x410198*/
  result->ptr_4 = &AbstractClass::`vftable'; /*0x41019e*/
  result->ptr_8 = &AbstractClass::`vftable'; /*0x4101a5*/
  result->ptr_C = &AbstractClass::`vftable'; /*0x4101ac*/
  LOBYTE(result->abstractFlags) = v2; /*0x4101b3*/
  return result; /*0x4101b6*/
}



// ==== 0x004101C0  AbstractClass::InitVtables  this=AbstractClass  sig=csp ====
_DWORD *__thiscall AbstractClass::InitVtables(AbstractClass *this, int a2)
{
  this->ptr_8 = &INoticeSink::`vftable'; /*0x4101c2*/
  this->ptr_C = &INoticeSource::`vftable'; /*0x4101c9*/
  this->ptr_0 = &AbstractClass::`vftable'; /*0x4101d0*/
  this->ptr_4 = &AbstractClass::`vftable'; /*0x4101d6*/
  this->ptr_8 = &AbstractClass::`vftable'; /*0x4101dd*/
  this->ptr_C = &AbstractClass::`vftable'; /*0x4101e4*/
  return &this->ptr_0; /*0x4101eb*/
}



// ==== 0x004101F0  AbstractClass::DTOR  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::DTOR(AbstractClass *this)
{
  int result; // eax

  this->ptr_0 = &AbstractClass::`vftable'; /*0x4101f0*/
  this->ptr_4 = &AbstractClass::`vftable'; /*0x4101f6*/
  this->ptr_8 = &AbstractClass::`vftable'; /*0x4101fd*/
  this->ptr_C = &AbstractClass::`vftable'; /*0x410204*/
  return result; /*0x41020b*/
}



// ==== 0x00410210  AbstractClass::Dispatch  this=AbstractClass  sig=csp ====
int __stdcall INoticeSink::Dispatch(AbstractClass *this)
{
  return (*(int (__thiscall **)(char *))(*((_DWORD *)this - 1) + 44))((char *)this - 4); /*0x41021d*/
}



// ==== 0x00410220  AbstractClass::GetVtable3  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::GetVtable3(AbstractClass *this)
{
  return (int)this->ptr_C; /*0x410227*/
}



// ==== 0x00410230  AbstractClass::GenerateUniqueID  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::GenerateUniqueID(AbstractClass *this)
{
  int result; // eax

  if ( dword_A8B230 ) /*0x410238*/
  {
    result = AbstractClass::updateAITimer(dword_A8B230); /*0x410246*/
    this->ptr_C = (void *)result; /*0x41024f*/
  }
  else
  {
    this->ptr_C = 0; /*0x410240*/
    return 0; /*0x41023e*/
  }
  return result; /*0x410243*/
}



// ==== 0x00410260  AbstractClass::QueryInterface  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::QueryInterface(AbstractClass *this)
{
  void **p_vtable1; // ecx
  AbstractClass *thisa; // [esp+8h] [ebp+4h]
  const void *iid; // [esp+Ch] [ebp+8h]
  void **ppv; // [esp+10h] [ebp+Ch]

  if ( !ppv ) /*0x410267*/
    return -2147467261; /*0x410269*/
  *ppv = 0; /*0x410286*/
  if ( !memcmp(iid, &IID_IUnknown, 0x10u) ) /*0x410290*/
    *ppv = thisa; /*0x410294*/
  if ( !memcmp(iid, &IID_IPersistStream, 0x10u) ) /*0x4102a5*/
    *ppv = thisa; /*0x4102a9*/
  if ( !memcmp(iid, &IID_IPersist, 0x10u) ) /*0x4102b9*/
    *ppv = thisa; /*0x4102be*/
  if ( !memcmp(iid, &IID_IRTTITypeInfo, 0x10u) ) /*0x4102ce*/
  {
    if ( thisa ) /*0x4102d6*/
      p_vtable1 = &thisa->ptr_4; /*0x4102d8*/
    else
      p_vtable1 = 0; /*0x4102dd*/
    *ppv = p_vtable1; /*0x4102df*/
  }
  if ( !*ppv ) /*0x4102e1*/
    return -2147467262; /*0x4102e6*/
  (*((void (__stdcall **)(AbstractClass *))thisa->ptr_0 + 1))(thisa); /*0x4102f2*/
  return 0; /*0x41026e*/
}



// ==== 0x00410300  AbstractClass::COMStub_AddRef  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_AddRef(AbstractClass *this)
{
  return 1; /*0x410305*/
}



// ==== 0x00410310  AbstractClass::COMStub_Release  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Release(AbstractClass *this)
{
  return 1; /*0x410315*/
}



// ==== 0x00410320  AbstractClass::SaveLoad_Prefix  this=ObjectTypeClass  sig=csp ====
int __stdcall AbstractClass::SaveLoad_Prefix(int *a1, int *a2, int a3)
{
  int *v3; // esi
  int result; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int *v8; // [esp-4h] [ebp-18h]

  v3 = a2; /*0x410321*/
  if ( !a2 ) /*0x410328*/
    return -2147467261; /*0x41032b*/
  v5 = *a2; /*0x410338*/
  v8 = a2; /*0x410343*/
  a2 = a1; /*0x410344*/
  result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v5 + 16))(v8, &a2, 4, 0); /*0x410348*/
  if ( result >= 0 ) /*0x41034d*/
  {
    v6 = *v3; /*0x410352*/
    v7 = (*(int (__thiscall **)(int *, _DWORD))(*a1 + 48))(a1, 0); /*0x410358*/
    result = (*(int (__stdcall **)(int *, int *, int))(v6 + 16))(v3, a1, v7); /*0x41035e*/
    if ( result >= 0 ) /*0x410364*/
    {
      if ( a3 ) /*0x41036c*/
        *((_BYTE *)a1 + 32) = 0; /*0x41036e*/
    }
  }
  return result; /*0x41032a*/
}



// ==== 0x00410380  AbstractClass::SaveLoad_Prefix_0  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::SaveLoad_Prefix_0(_DWORD *a1, int a2)
{
  int *v2; // edi
  int result; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // eax

  v2 = (int *)a2; /*0x410381*/
  if ( !a2 ) /*0x410387*/
    return -2147467261; /*0x410389*/
  result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &a2, 4, 0); /*0x41039e*/
  if ( result >= 0 ) /*0x4103a3*/
  {
    SwizzleManagerClass::Here_I_Am((int)&SwizzleManagerClass_Instance, a2, (int)a1); /*0x4103b7*/
    v4 = a1[7]; /*0x4103be*/
    v5 = *v2; /*0x4103c1*/
    v6 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 48))(a1, 0); /*0x4103c7*/
    result = (*(int (__stdcall **)(int *, _DWORD *, int))(v5 + 12))(v2, a1, v6); /*0x4103cd*/
    a1[7] = v4; /*0x4103d0*/
  }
  return result; /*0x41038e*/
}



// ==== 0x004103E0  AbstractClass::GetSizeMax  this=AbstractClass  sig=csp ====
int __thiscall ObjectClass::GetSizeMax(AbstractClass *this)
{
  int v2; // [esp+8h] [ebp+4h]
  _DWORD *v3; // [esp+Ch] [ebp+8h]

  if ( !v3 ) /*0x4103e7*/
    return -2147467261; /*0x4103e9*/
  *v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 48))(v2) + 4; /*0x4103fe*/
  v3[1] = 0; /*0x410400*/
  return 0; /*0x4103ee*/
}



// ==== 0x00410410  AbstractClass::ProcessPower  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::ProcessPower(AbstractClass *this)
{
  int v2; // ecx
  Power *v4; // [esp+Ch] [ebp+4h]

  Power::TimerProcess(this->uniqueId); /*0x41041e*/
  LOBYTE(v2) = this->NeedsSaveOrLink; /*0x410423*/
  return Power::FlagProcess(v4, v2); /*0x41042e*/
}



// ==== 0x00410440  AbstractClass::computeDistance  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::computeDistance(AbstractClass *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x410440*/
  return result; /*0x410442*/
}



// ==== 0x00410450  AbstractClass::IsClean  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::IsClean(AbstractClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return *(_BYTE *)(v2 + 32) == 0; /*0x41045e*/
}



// ==== 0x00410470  AbstractClass::StubReturnFalse  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::StubReturnFalse(AbstractClass *this)
{
  int result; // eax

  return result; /*0x410470*/
}



// ==== 0x00410480  AbstractClass::COMStub_Return0_10  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_10(AbstractClass *this)
{
  int result; // eax

  return result; /*0x410480*/
}



// ==== 0x00410490  AbstractClass::computeDistanceSquared  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::computeDistanceSquared(AbstractClass *this)
{
  return -1; /*0x410493*/
}



// ==== 0x004104A0  AbstractClass::COMStub_Return0_15  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_15(AbstractClass *this)
{
  return 0; /*0x4104a2*/
}



// ==== 0x004104B0  AbstractClass::COMStub_Return0_16  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_16(AbstractClass *this)
{
  return 0; /*0x4104b2*/
}



// ==== 0x004104C0  AbstractClass::GetInvalidCoord  this=AbstractClass  sig=csp ====
int __thiscall Map::GetInvalidCoord(AbstractClass *this)
{
  _DWORD *v2; // [esp+4h] [ebp+4h]

  *v2 = dword_887680; /*0x4104cc*/
  v2[1] = dword_887684; /*0x4104d4*/
  v2[2] = dword_887688; /*0x4104dd*/
  return (int)v2; /*0x4104e0*/
}



// ==== 0x004104F0  AbstractClass::GetCoordsEx  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::GetCoordsEx(AbstractClass *this)
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))this->ptr_0 + 18))(this, v3); /*0x4104fe*/
  *v4 = *v1; /*0x410508*/
  v4[1] = v1[1]; /*0x41050d*/
  v4[2] = v1[2]; /*0x410514*/
  return (int)v4; /*0x410510*/
}



// ==== 0x00410520  AbstractClass::COMStub_Return0_20  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_20(AbstractClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x410520*/
  return result; /*0x410522*/
}



// ==== 0x00410530  AbstractClass::COMStub_Return0_21  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_21(AbstractClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x410530*/
  return result; /*0x410532*/
}



// ==== 0x00410540  AbstractClass::GetCoords  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::GetCoords(AbstractClass *this)
{
  int *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  CoordStruct *out; // [esp+14h] [ebp+4h]

  v1 = (int *)(*(int (__thiscall **)(AbstractClass *, _BYTE *))(this->ptr_0 + 72))(this, v3); /*0x41054e*/
  out->vfptr = (void *)*v1; /*0x410558*/
  out[1].vfptr = (void *)v1[1]; /*0x41055d*/
  out[2].vfptr = (void *)v1[2]; /*0x410564*/
  return (int)out; /*0x410560*/
}



// ==== 0x00410570  AbstractClass::COMStub_Return0_23  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_23(AbstractClass *this)
{
  int result; // eax

  return result; /*0x410570*/
}



// ==== 0x00410580  AbstractClass::Stub1INoticeSink  this=AbstractClass  sig=csp ====
char __stdcall INoticeSink_Stub1(int a1, int a2)
{
  return 0; /*0x410582*/
}



// ==== 0x00410590  AbstractClass::COM_Stub_Return0  this=AbstractClass  sig=csp ====
void __stdcall COM_Stub_Return0(int a1)
{
  ; /*0x410590*/
}



// ==== 0x004105A0  AbstractClass::COMStub_8  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_8(AbstractClass *this)
{
  char v3; // [esp+8h] [ebp+4h]

  this->ptr_0 = &AbstractClass::`vftable'; /*0x4105a9*/
  this->ptr_4 = &AbstractClass::`vftable'; /*0x4105af*/
  this->ptr_8 = &AbstractClass::`vftable'; /*0x4105b6*/
  this->ptr_C = &AbstractClass::`vftable'; /*0x4105bd*/
  if ( (v3 & 1) != 0 ) /*0x4105c4*/
    __3_YAXPAX_Z(this); /*0x4105c7*/
  return (int)this; /*0x4105d1*/
}



// ==== 0x004105E0  AbstractClass::QueryInterface  this=AbstractClass  sig=csp ====
int __stdcall IRTTITypeInfo::QueryInterface(AbstractClass *this, const void *a2, _DWORD *a3)
{
  AbstractClass *v3; // ecx

  return AbstractClass::QueryInterface(v3);
}



// ==== 0x004105F0  AbstractClass::Dispatch  this=AbstractClass  sig=csp ====
int __stdcall INoticeSource::Dispatch(AbstractClass *this)
{
  AbstractClass *v1; // ecx

  return AbstractClass::COMStub_AddRef(v1);
}



// ==== 0x00410600  AbstractClass::g_var_326827  this=AbstractClass  sig=csp ====
int __stdcall XSurface::g_var_326827(AbstractClass *this)
{
  AbstractClass *v1; // ecx

  return AbstractClass::COMStub_Release(v1);
}



// ==== 0x00410610  sub_410610  this=-  sig=ida-proto ====
void sub_410610()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41061c*/
  dbl_8876D8 = Math::Sqrt(v0 + v0); /*0x41062e*/
}



// ==== 0x00410640  sub_410640  this=-  sig=ida-proto ====
void sub_410640()
{
  dbl_887728 = dbl_8876D8 / 60.0; /*0x41064c*/
}



// ==== 0x00410660  sub_410660  this=-  sig=ida-proto ====
void sub_410660()
{
  dbl_887710 = 1.0 / dbl_887728; /*0x41066c*/
}



// ==== 0x00410680  sub_410680  this=-  sig=ida-proto ====
void sub_410680()
{
  dbl_887708 = 0.0174532925199433 * 45.0; /*0x41068c*/
}



// ==== 0x004106A0  sub_4106A0  this=-  sig=ida-proto ====
void sub_4106A0()
{
  dbl_8876E0 = 0.0174532925199433 * 60.0; /*0x4106ac*/
}



// ==== 0x004106C0  sub_4106C0  this=-  sig=ida-proto ====
void sub_4106C0()
{
  dbl_8876C8 = 0.0174532925199433 * 90.0; /*0x4106cc*/
}



// ==== 0x004106E0  sub_4106E0  this=-  sig=ida-proto ====
__int64 sub_4106E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8876C8 - dbl_8876E0); /*0x4106f2*/
  result = Math::RoundToInt(v0 * dbl_8876D8 * 0.5); /*0x410706*/
  dword_887730 = result; /*0x41070b*/
  return result; /*0x410710*/
}



// ==== 0x00410720  sub_410720  this=-  sig=ida-proto ====
void sub_410720()
{
  dbl_8876E8 = Math::ArcTan((double)dword_887730 * 0.00390625); /*0x410737*/
}



// ==== 0x00410750  sub_410750  this=-  sig=ida-proto ====
void sub_410750()
{
  dbl_887700 = Math::ArcTan((double)(2 * dword_887730) / dbl_8876D8); /*0x410772*/
}



// ==== 0x00410780  sub_410780  this=-  sig=ida-proto ====
__int64 sub_410780()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_887730) + 0.5); /*0x41079b*/
  dword_887724 = result; /*0x4107a0*/
  return result; /*0x4107a6*/
}



// ==== 0x004107B0  sub_4107B0  this=-  sig=ida-proto ====
int sub_4107B0()
{
  word_8876D0 = 0; /*0x4107b2*/
  word_8876D2 = 0; /*0x4107b8*/
  return 0; /*0x4107be*/
}



// ==== 0x004107C0  sub_4107C0  this=-  sig=ida-proto ====
int sub_4107C0()
{
  dword_8876F0 = 0; /*0x4107c2*/
  dword_8876F4 = 0; /*0x4107c7*/
  dword_8876F8 = 0; /*0x4107cc*/
  return 0; /*0x4107d1*/
}



// ==== 0x004107E0  sub_4107E0  this=-  sig=ida-proto ====
int sub_4107E0()
{
  dword_887720 = 0; /*0x4107e5*/
  dword_887718 = 128; /*0x4107ef*/
  dword_88771C = 128; /*0x4107f4*/
  return 128; /*0x4107f9*/
}



// ==== 0x00410800  AbstractTypeClass::Constructor  this=CCFileClass  sig=csp ====
int __thiscall AbstractTypeClass::Constructor(int *this, char *Source)
{
  char *v3; // ebx
  int v4; // eax
  char Buffer[16]; // [esp+10h] [ebp-44h] BYREF
  char Destination[48]; // [esp+20h] [ebp-34h] BYREF
  char v8; // [esp+50h] [ebp-4h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x410809*/
  v3 = (char *)(this + 9); /*0x410812*/
  this->BufferOffset = 0; /*0x410817*/
  *((_BYTE *)this + 61) = 0; /*0x41081a*/
  this->tail_19 = 0; /*0x41081e*/
  *this = (int)&AbstractTypeClass::`vftable'; /*0x410822*/
  this->FilePointer = (int)&AbstractTypeClass::`vftable'; /*0x410829*/
  this->FileSize = (int)&AbstractTypeClass::`vftable'; /*0x410830*/
  this->Handle = (int)&AbstractTypeClass::`vftable'; /*0x410837*/
  if ( Source ) /*0x41083e*/
  {
    strncpy(Destination, Source, 0x18u); /*0x410895*/
    Destination[24] = 0; /*0x4108a3*/
    if ( Destination == v3 ) /*0x4108a8*/
      goto LABEL_9; /*0x4108a8*/
    goto LABEL_8; /*0x4108a8*/
  }
  sprintf(Buffer, "%08X", this); /*0x41084b*/
  if ( Buffer ) /*0x410859*/
  {
    strncpy(Destination, Buffer, 0x18u); /*0x41086d*/
    Destination[24] = 0; /*0x410875*/
  }
  else
  {
    Destination[0] = 0; /*0x41085b*/
  }
  if ( Destination != v3 ) /*0x410880*/
  {
LABEL_8:
    qmemcpy(v3, Destination, 0x18u); /*0x4108b5*/
    this->BufferMaxSize = Destination[24]; /*0x4108b7*/
  }
LABEL_9:
  if ( this == (int *)-36 ) /*0x4108ba*/
  {
    Destination[0] = 0; /*0x4108bc*/
  }
  else
  {
    strncpy(Destination, (const char *)this + 36, 0x30u); /*0x4108ca*/
    v8 = 0; /*0x4108d2*/
  }
  if ( Destination != (char *)(this + 25) ) /*0x4108e0*/
  {
    qmemcpy(this + 25, Destination, 0x30u); /*0x4108eb*/
    *((_BYTE *)this + 148) = v8; /*0x4108ed*/
  }
  this->FileNameAllocated = (int)&g_TypeClass_DefaultString; /*0x4108ee*/
  if ( dword_A8E978 < dword_A8E970 /*0x410929*/
    || (byte_A8E975 || !dword_A8E970)
    && dword_A8E97C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8E968 + 8))(
         &dword_A8E968,
         dword_A8E970 + dword_A8E97C,
         0) )
  {
    v4 = dword_A8E978++; /*0x410936*/
    *((_DWORD *)dword_A8E96C + v4) = this; /*0x410945*/
  }
  return (int)this; /*0x410948*/
}



// ==== 0x00410960  AbstractTypeClass::Init  this=AbstractTypeClass  sig=csp ====
int __thiscall AbstractTypeClass_Init(int this, int a2)
{
  char v3; // al

  AbstractClass::InitVtables((_DWORD *)this, a2); /*0x410968*/
  v3 = *(_BYTE *)(this + 61); /*0x41096d*/
  *(_DWORD *)this = &AbstractTypeClass::`vftable'; /*0x410975*/
  *(_DWORD *)(this + 4) = &AbstractTypeClass::`vftable'; /*0x41097b*/
  *(_DWORD *)(this + 8) = &AbstractTypeClass::`vftable'; /*0x410982*/
  *(_DWORD *)(this + 12) = &AbstractTypeClass::`vftable'; /*0x410989*/
  if ( v3 ) /*0x410990*/
    *(_DWORD *)(this + 96) = GetStringCSF((wchar_t *)(this + 61), 0, aDRa2mdpostAbst, 127); /*0x4109a0*/
  else
    *(_DWORD *)(this + 96) = &g_TypeClass_DefaultString; /*0x4109a9*/
  return this; /*0x4109a5*/
}



// ==== 0x004109C0  AbstractTypeClass::Dtor  this=AbstractTypeClass  sig=csp ====
int __thiscall AbstractTypeClass::Dtor(AbstractTypeClass *this)
{
  int v2; // eax
  AbstractTypeClass *v4; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &AbstractTypeClass::`vftable'; /*0x4109cd*/
  this->? = &AbstractTypeClass::`vftable'; /*0x4109d3*/
  this->? = &AbstractTypeClass::`vftable'; /*0x4109da*/
  this->? = &AbstractTypeClass::`vftable'; /*0x4109e1*/
  v4 = this; /*0x4109ef*/
  v2 = (*(int (__thiscall **)(_DWORD *, AbstractTypeClass **))(dword_A8E968 + 16))(&dword_A8E968, &v4); /*0x4109f3*/
  if ( v2 != -1 && v2 < dword_A8E978 && v2 < --dword_A8E978 ) /*0x410a0e*/
  {
    do /*0x410a26*/
    {
      ++v2; /*0x410a16*/
      *((_DWORD *)dword_A8E96C + v2 - 1) = *((_DWORD *)dword_A8E96C + v2); /*0x410a1a*/
    }
    while ( v2 < dword_A8E978 ); /*0x410a26*/
  }
  return AbstractClass::DTOR((AbstractClass *)this); /*0x410a2f*/
}



// ==== 0x00410A40  AbstractTypeClass::NameEquals  this=BuildingClass  sig=csp ====
BOOL __thiscall AbstractTypeClass::NameEquals(int this, void *a2)
{
  return _strcmpi(a2, (const void *)(this + 36)) == 0; /*0x410a56*/
}



// ==== 0x00410A60  AbstractTypeClass::LoadFromINI  this=AbstractTypeClass  sig=csp ====
int __thiscall AbstractTypeClass::LoadFromINI(AbstractTypeClass *this, unsigned __int8 ***a2)
{
  int result; // eax
  char *Name; // edi
  char *UINameLabel; // ebp
  char Destination[48]; // [esp+Ch] [ebp-434h] BYREF
  char v7; // [esp+3Ch] [ebp-404h]
  char Source[1024]; // [esp+40h] [ebp-400h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x410a74*/
  result = INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)this->__pad_24); /*0x410a7f*/
  if ( result ) /*0x410a86*/
  {
    Name = this->Name; /*0x410a91*/
    INIClass::GetString( /*0x410aa0*/
      (INIClass *)a2,
      (unsigned __int8 *)this->__pad_24,
      (unsigned __int8 *)g_INI_Key_Name,
      this->Name,
      Source,
      49);
    if ( Source ) /*0x410aab*/
    {
      strncpy(Destination, Source, 0x30u); /*0x410abf*/
      v7 = 0; /*0x410ac7*/
    }
    else
    {
      Destination[0] = (unsigned __int8)Source; /*0x410aad*/
    }
    if ( Destination != Name ) /*0x410ad2*/
    {
      qmemcpy(Name, Destination, 0x30u); /*0x410add*/
      this->Name[48] = v7; /*0x410adf*/
    }
    UINameLabel = this->UINameLabel; /*0x410aeb*/
    INIClass::GetString( /*0x410afb*/
      (INIClass *)a2,
      (unsigned __int8 *)this->__pad_24,
      (unsigned __int8 *)g_INI_Key_UIName,
      this->UINameLabel,
      Source,
      32);
    if ( Source ) /*0x410b06*/
    {
      strncpy(Destination, Source, 0x1Fu); /*0x410b1a*/
      Destination[31] = 0; /*0x410b22*/
    }
    else
    {
      Destination[0] = (unsigned __int8)Source; /*0x410b08*/
    }
    result = (int)Destination; /*0x410b27*/
    if ( Destination != UINameLabel ) /*0x410b2d*/
      qmemcpy(UINameLabel, Destination, 0x20u); /*0x410b3a*/
    if ( *UINameLabel ) /*0x410b3c*/
    {
      result = (int)GetStringCSF((wchar_t *)this->UINameLabel, 0, aDRa2mdpostAbst, 215); /*0x410b52*/
      this->UIName = (void *)result; /*0x410b58*/
    }
    else
    {
      this->UIName = &g_TypeClass_DefaultString; /*0x410b69*/
    }
    LOBYTE(result) = 1; /*0x410b5c*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x410b7f*/
  }
  return result; /*0x410b57*/
}



// ==== 0x00410B90  AbstractTypeClass::WriteINI  this=AbstractTypeClass  sig=csp ====
char __thiscall AbstractTypeClass::WriteINI(AbstractTypeClass *this, char *a2)
{
  unsigned __int8 *pad_24; // edi

  pad_24 = (unsigned __int8 *)this->__pad_24; /*0x410b9b*/
  INIClass::ClearSection((int *)a2, (int)this->__pad_24, 0); /*0x410ba1*/
  INIClass::SetString(a2, pad_24, g_INI_Key_Name, this->Name); /*0x410bb2*/
  if ( this->UINameLabel[0] ) /*0x410bb7*/
    INIClass::SetString(a2, pad_24, g_INI_Key_UIName, this->UINameLabel); /*0x410bca*/
  return 1; /*0x410bcf*/
}



// ==== 0x00410BE0  AbstractTypeClass::ProcessPower  this=AbstractTypeClass  sig=csp ====
int __thiscall AbstractTypeClass::ProcessPower(AbstractTypeClass *this, int *a2)
{
  AbstractClass::ProcessPower((AbstractClass *)this); /*0x410be9*/
  Checksum::AddString((Checksum *)a2, (unsigned __int8 *)this->__pad_24); /*0x410bf4*/
  Checksum::AddString((Checksum *)a2, (unsigned __int8 *)this->Name); /*0x410bff*/
  return Checksum::AddString((Checksum *)a2, (unsigned __int8 *)this->UINameLabel); /*0x410c0f*/
}



// ==== 0x00410C20  AbstractTypeClass::StubReturnFalse  this=AbstractTypeClass  sig=csp ====
int __thiscall AbstractTypeClass::StubReturnFalse(AbstractTypeClass *this)
{
  int result; // eax

  return result; /*0x410c20*/
}



// ==== 0x00410C30  AbstractTypeClass::ddtor  this=AbstractTypeClass  sig=csp ====
_DWORD *__thiscall AbstractTypeClass::ddtor(AbstractTypeClass *this, char a2)
{
  int v3; // eax
  AbstractTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &AbstractTypeClass::`vftable'; /*0x410c3d*/
  this->? = &AbstractTypeClass::`vftable'; /*0x410c43*/
  this->? = &AbstractTypeClass::`vftable'; /*0x410c4a*/
  this->? = &AbstractTypeClass::`vftable'; /*0x410c51*/
  v5 = this; /*0x410c5f*/
  v3 = (*(int (__thiscall **)(_DWORD *, AbstractTypeClass **))(dword_A8E968 + 16))(&dword_A8E968, &v5); /*0x410c63*/
  if ( v3 != -1 && v3 < dword_A8E978 && v3 < --dword_A8E978 ) /*0x410c7e*/
  {
    do /*0x410c96*/
    {
      ++v3; /*0x410c86*/
      *((_DWORD *)dword_A8E96C + v3 - 1) = *((_DWORD *)dword_A8E96C + v3); /*0x410c8a*/
    }
    while ( v3 < dword_A8E978 ); /*0x410c96*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x410c9a*/
  if ( (a2 & 1) != 0 ) /*0x410ca4*/
    __3_YAXPAX_Z(this); /*0x410ca7*/
  return &this->AbstractClass; /*0x410cb1*/
}



// ==== 0x00410CC0  sub_410CC0  this=-  sig=ida-proto ====
int sub_410CC0()
{
  dword_887738 = 0; /*0x410cc2*/
  dword_88773C = 0; /*0x410cc7*/
  dword_887740 = 0; /*0x410ccc*/
  dword_887744 = 0; /*0x410cd1*/
  return 0; /*0x410cd6*/
}



// ==== 0x00410CE0  BSurface::Construct  this=BSurface  sig=csp ====
_DWORD *__thiscall BSurface::Construct(BSurface *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  void *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  void *Buffer; // ecx

  v6 = a2; /*0x410ce5*/
  v7 = a4; /*0x410ce9*/
  v8 = a5; /*0x410cef*/
  this->q00B = a5; /*0x410cf3*/
  *(_DWORD *)this->XSurface = v6; /*0x410cf8*/
  v9 = a3; /*0x410cfa*/
  this->q00A = v7; /*0x410cfe*/
  this->? = v9; /*0x410d01*/
  this->? = v7; /*0x410d04*/
  this->? = v8; /*0x410d07*/
  this->Height = 2 * v7 * v8; /*0x410d0f*/
  v10 = __2_YAPAXI_Z(0x20u); /*0x410d17*/
  if ( v10 ) /*0x410d20*/
  {
    v11 = this->q00A; /*0x410d22*/
    v12 = this->q00B; /*0x410d25*/
    *(_DWORD *)(v10 + 4) = v11; /*0x410d28*/
    *(_DWORD *)(v10 + 8) = v12; /*0x410d30*/
    *(_DWORD *)(v10 + 12) = 0; /*0x410d38*/
    *(_DWORD *)v10 = &XSurface_Vtable; /*0x410d3b*/
    *(_DWORD *)(v10 + 16) = 2; /*0x410d41*/
    Buffer::Init((Buffer *)(v10 + 20), 0, 2 * v12 * v11); /*0x410d48*/
    *(_DWORD *)v10 = &BSurface_Vtable; /*0x410d4d*/
    v13 = (void *)v10; /*0x410d53*/
  }
  else
  {
    v13 = 0; /*0x410d57*/
  }
  v14 = this->q00A; /*0x410d5c*/
  a5 = this->q00B; /*0x410d5f*/
  this->Buffer = v13; /*0x410d63*/
  a2 = 0; /*0x410d66*/
  a3 = 0; /*0x410d6a*/
  a4 = v14; /*0x410d6e*/
  (*(void (__thiscall **)(void *, int *, int))(*(_DWORD *)v13 + 20))(v13, &a2, 127); /*0x410d7b*/
  v15 = (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this->Buffer + 92))(this->Buffer, 0, 0); /*0x410d89*/
  v16 = this->q00B; /*0x410d8c*/
  *((_DWORD *)this + 6) = v15; /*0x410d8f*/
  v17 = this->q00A * v16; /*0x410d92*/
  this->BytesPerPixel = 0; /*0x410d96*/
  *((_DWORD *)this + 9) = 0x8000; /*0x410d99*/
  v18 = v15 + 2 * v17; /*0x410da0*/
  Buffer = this->Buffer; /*0x410da3*/
  *((_DWORD *)this + 7) = v18; /*0x410da6*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)Buffer + 96))(Buffer); /*0x410dab*/
  return this->XSurface; /*0x410db0*/
}



// ==== 0x00410DC0  ObjectClass::method_410DC0  this=ObjectClass  sig=csp ====
int __thiscall sub_410DC0(ObjectClass *this, int a2, int a3, int a4, int a5, int a6)
{
  _WORD *v8; // edi
  __int16 *v9; // esi
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  __int16 v14; // dx
  int v16; // [esp+14h] [ebp+4h]

  v8 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 92))(a2, a3, a4); /*0x410de2*/
  v9 = (__int16 *)(this->? + this->?); /*0x410de9*/
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x410deb*/
  v11 = a5; /*0x410df1*/
  v12 = v10 / 2 - a5; /*0x410df7*/
  if ( v8 && a6 > 0 ) /*0x410e03*/
  {
    v16 = a6; /*0x410e05*/
    do /*0x410e38*/
    {
      if ( v11 > 0 ) /*0x410e0b*/
      {
        v13 = v11; /*0x410e0d*/
        do /*0x410e26*/
        {
          v14 = *v9++; /*0x410e0f*/
          *v8++ = v14; /*0x410e15*/
          if ( (unsigned int)v9 >= this->? ) /*0x410e20*/
            v9 = (__int16 *)((char *)v9 - (unsigned int)this->?); /*0x410e22*/
          --v13; /*0x410e25*/
        }
        while ( v13 ); /*0x410e26*/
        v11 = a5; /*0x410e28*/
      }
      v8 += v12; /*0x410e30*/
      --v16; /*0x410e34*/
    }
    while ( v16 ); /*0x410e38*/
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x410e42*/
}



// ==== 0x00410E50  StreamObj::Release  this=StreamObj  sig=csp ====
int __thiscall StreamObj::Release(StreamObj *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = (int (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 5); /*0x410e53*/
  if ( v2 ) /*0x410e58*/
    result = (**v2)(v2, 1); /*0x410e5e*/
  *((_DWORD *)this + 5) = 0; /*0x410e60*/
  return result; /*0x410e67*/
}



// ==== 0x00410E70  sub_410E70  this=-  sig=csp ====
char *__stdcall sub_410E70(char *a1, int a2, unsigned __int16 a3)
{
  char *v3; // edx
  int v4; // ebx
  char *result; // eax
  unsigned int v6; // esi

  v3 = a1; /*0x410e70*/
  v4 = a2; /*0x410e75*/
  if ( ((unsigned __int8)a1 & 2) != 0 && a2 ) /*0x410e86*/
  {
    *(_WORD *)a1 = a3; /*0x410e88*/
    v3 = a1 + 2; /*0x410e8b*/
    v4 = a2 - 1; /*0x410e8e*/
  }
  result = 0; /*0x410e91*/
  v6 = v4 >> 1; /*0x410e96*/
  if ( v4 >> 1 ) /*0x410e96*/
  {
    memset32(v3, 65537 * a3, v6); /*0x410eae*/
    result = &v3[4 * v6]; /*0x410eb0*/
  }
  if ( (v4 & 1) != 0 ) /*0x410eb7*/
  {
    if ( result ) /*0x410ebb*/
      *(_WORD *)result = a3; /*0x410ebd*/
  }
  return result; /*0x410ec0*/
}



// ==== 0x00410ED0  Buffer::FillCircularBufferScroll  this=Buffer  sig=csp ====
char *__thiscall Buffer::FillCircularBufferScroll(Buffer *this, int a2, int a3, unsigned __int16 a4)
{
  signed int v5; // ebx
  char *result; // eax
  int v8; // edi
  unsigned int Buffer_field_18; // edx
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // edi
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int Buffer_field_10; // ecx
  int v25; // ebx
  int v26; // edx
  int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // edx
  unsigned int v30; // ebx
  char *v31; // edx
  int v32; // eax
  unsigned __int16 *v33; // ecx
  unsigned int v34; // ebx
  int v35; // ecx
  __int64 v36; // rax
  int v37; // edx
  int v38; // ebx
  signed int v39; // eax
  unsigned __int16 *v40; // ebx
  int v41; // edx
  unsigned int v42; // esi
  bool v43; // zf
  int v44; // eax
  __int64 v45; // rax
  unsigned __int16 *v46; // edx
  int v47; // ebx
  unsigned __int16 *v48; // eax
  unsigned int v49; // esi
  int v50; // ecx
  int Buffer_field_14; // ecx
  int v52; // [esp+10h] [ebp-14h]
  int v53; // [esp+14h] [ebp-10h] BYREF
  int v54; // [esp+18h] [ebp-Ch]
  int v55; // [esp+1Ch] [ebp-8h]
  int v56; // [esp+20h] [ebp-4h]
  int v57; // [esp+2Ch] [ebp+8h]
  int v58; // [esp+30h] [ebp+Ch]

  v5 = *((_DWORD *)this + 10); /*0x410ee0*/
  v52 = this->Buffer_field_10 / 2 % v5; /*0x410ef2*/
  if ( (int)abs32(a2) > v5 || (result = (char *)abs32(a3), (int)result > *((_DWORD *)this + 11)) ) /*0x410f0e*/
  {
    v50 = *((_DWORD *)this + 11); /*0x411286*/
    v53 = 0; /*0x41128b*/
    v54 = 0; /*0x41128f*/
    v56 = v50; /*0x411297*/
    Buffer_field_14 = this->Buffer_field_14; /*0x41129b*/
    v55 = v5; /*0x4112a4*/
    result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)Buffer_field_14 + 20))( /*0x4112af*/
                       Buffer_field_14,
                       &v53,
                       a4);
    this->Buffer_field_24 = 0x8000; /*0x4112b2*/
    return result; /*0x4112b2*/
  }
  v8 = a2 + this->Buffer_field_10 / 2 % v5; /*0x410f18*/
  if ( a2 ) /*0x410f1c*/
  {
    Buffer_field_18 = this->Buffer_field_18; /*0x410f25*/
    v10 = this->Buffer_field_10 + 2 * a2; /*0x410f28*/
    this->Buffer_field_10 = v10; /*0x410f2b*/
    v11 = Buffer_field_18 + v10; /*0x410f2e*/
    if ( v11 < Buffer_field_18 ) /*0x410f32*/
      v11 += this->Buffer_field_20; /*0x410f34*/
    if ( v11 >= this->Buffer_field_1C ) /*0x410f3a*/
      v11 -= this->Buffer_field_20; /*0x410f3c*/
    this->Buffer_field_10 = v11 - this->Buffer_field_18; /*0x410f44*/
    if ( a2 >= 0 ) /*0x410f47*/
    {
      v53 = v52; /*0x410fee*/
      if ( v8 < v5 ) /*0x410fe4*/
      {
        v54 = 0; /*0x41104f*/
        v23 = *((_DWORD *)this + 11); /*0x411053*/
        v55 = a2; /*0x411056*/
        v22 = this->Buffer_field_14; /*0x41105a*/
        v56 = v23; /*0x411063*/
      }
      else
      {
        v18 = *((_DWORD *)this + 11); /*0x410ff2*/
        v55 = v5 - v52; /*0x410ff5*/
        v54 = 0; /*0x410ff9*/
        v19 = this->Buffer_field_14; /*0x410ffd*/
        v56 = v18; /*0x411002*/
        (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v19 + 20))(v19, &v53, a4); /*0x411014*/
        v20 = v8 - *((_DWORD *)this + 10); /*0x41101e*/
        v21 = *((_DWORD *)this + 11); /*0x411020*/
        v54 = 0; /*0x411023*/
        v22 = this->Buffer_field_14; /*0x411027*/
        v53 = 0; /*0x41102a*/
        v55 = v20; /*0x41102e*/
        v56 = v21; /*0x411032*/
      }
      result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v22 + 20))(v22, &v53, a4); /*0x41103e*/
    }
    else if ( v8 >= 0 ) /*0x410f4f*/
    {
      v53 = v8; /*0x410fb3*/
      v54 = 0; /*0x410fb7*/
      v56 = *((_DWORD *)this + 11); /*0x410fbe*/
      v55 = -a2; /*0x410fc6*/
      result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)this->Buffer_field_14 + 20))( /*0x410fda*/
                         this->Buffer_field_14,
                         &v53,
                         a4);
    }
    else
    {
      v53 = 0; /*0x410f55*/
      v55 = v52; /*0x410f5d*/
      v12 = *((_DWORD *)this + 11); /*0x410f61*/
      v54 = 0; /*0x410f64*/
      v13 = this->Buffer_field_14; /*0x410f68*/
      v56 = v12; /*0x410f6d*/
      (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v13 + 20))(v13, &v53, a4); /*0x410f7f*/
      v14 = *((_DWORD *)this + 10); /*0x410f82*/
      v15 = *((_DWORD *)this + 11); /*0x410f85*/
      v16 = v14 + v8; /*0x410f88*/
      v54 = 0; /*0x410f8e*/
      v17 = this->Buffer_field_14; /*0x410f92*/
      v55 = v14 - v16; /*0x410f95*/
      v53 = v16; /*0x410f99*/
      v56 = v15; /*0x410f9d*/
      result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v17 + 20))(v17, &v53, a4); /*0x410fa9*/
    }
  }
  if ( a3 ) /*0x411078*/
  {
    Buffer_field_10 = this->Buffer_field_10; /*0x41107e*/
    v25 = *((_DWORD *)this + 10); /*0x411081*/
    this->Buffer_field_24 -= a3; /*0x411096*/
    v26 = Buffer_field_10 + 2 * a3 * v25; /*0x411099*/
    this->Buffer_field_10 = v26; /*0x41109c*/
    v27 = a3 + Buffer_field_10 / 2 / v25; /*0x41109f*/
    v28 = this->Buffer_field_18; /*0x4110a1*/
    v29 = v28 + v26; /*0x4110a4*/
    v58 = v27; /*0x4110a6*/
    if ( v29 < v28 ) /*0x4110ac*/
      v29 += this->Buffer_field_20; /*0x4110ae*/
    if ( v29 >= this->Buffer_field_1C ) /*0x4110b4*/
      v29 -= this->Buffer_field_20; /*0x4110b6*/
    v30 = v29 - v28; /*0x4110bf*/
    this->Buffer_field_10 = v29 - v28; /*0x4110c3*/
    if ( a3 >= 0 ) /*0x4110c6*/
    {
      v44 = *((_DWORD *)this + 11); /*0x41119d*/
      if ( v58 >= v44 ) /*0x4111a6*/
      {
        v45 = 2 * *((_DWORD *)this + 10) * v44 - Buffer_field_10; /*0x4111b4*/
        LODWORD(v45) = v45 - HIDWORD(v45); /*0x4111b5*/
        v46 = (unsigned __int16 *)(v28 + Buffer_field_10); /*0x4111b7*/
        v47 = (int)v45 >> 1; /*0x4111bc*/
        if ( (((_BYTE)v28 + (_BYTE)Buffer_field_10) & 2) != 0 && v47 ) /*0x4111c5*/
        {
          *v46++ = a4; /*0x4111c7*/
          --v47; /*0x4111cd*/
        }
        v48 = 0; /*0x4111d0*/
        if ( v47 >> 1 ) /*0x4111d5*/
        {
          memset32(v46, 65537 * a4, v47 >> 1); /*0x4111f0*/
          v48 = &v46[2 * (v47 >> 1)]; /*0x4111f6*/
        }
        if ( (v47 & 1) != 0 && v48 ) /*0x411200*/
          *v48 = a4; /*0x411202*/
        v37 = this->Buffer_field_18; /*0x41120b*/
        v38 = this->Buffer_field_10 / 2; /*0x411210*/
        if ( (v37 & 2) != 0 && v38 ) /*0x411219*/
        {
          *(_WORD *)v37 = a4; /*0x41121b*/
          v37 += 2; /*0x41121e*/
          --v38; /*0x411221*/
        }
        result = 0; /*0x411224*/
        v49 = v38 >> 1; /*0x411229*/
        if ( !(v38 >> 1) ) /*0x41122b*/
          goto LABEL_54; /*0x41122b*/
LABEL_53:
        memset32((void *)v37, 65537 * a4, v49); /*0x411240*/
        result = (char *)(v37 + 4 * v49); /*0x411242*/
LABEL_54:
        v43 = (v38 & 1) == 0; /*0x411245*/
LABEL_55:
        if ( !v43 ) /*0x411248*/
        {
          if ( result ) /*0x41124c*/
            *(_WORD *)result = a4; /*0x41124f*/
        }
        return result; /*0x411258*/
      }
      v37 = v28 + Buffer_field_10; /*0x411262*/
      v38 = (int)(v30 - Buffer_field_10) / 2; /*0x411267*/
      if ( (((_BYTE)v28 + (_BYTE)Buffer_field_10) & 2) != 0 && v38 ) /*0x411270*/
        goto LABEL_60; /*0x411270*/
    }
    else
    {
      if ( v27 >= 0 ) /*0x4110d0*/
      {
        v39 = Buffer_field_10 - v30; /*0x411157*/
        v40 = (unsigned __int16 *)v29; /*0x411159*/
        v41 = v39 / 2; /*0x411160*/
        if ( ((unsigned __int8)v40 & 2) != 0 && v41 ) /*0x411169*/
        {
          *v40++ = a4; /*0x41116b*/
          --v41; /*0x411171*/
        }
        result = 0; /*0x411174*/
        v42 = v41 >> 1; /*0x411179*/
        if ( v41 >> 1 ) /*0x411179*/
        {
          memset32(v40, 65537 * a4, v42); /*0x411190*/
          result = (char *)&v40[2 * v42]; /*0x411192*/
        }
        v43 = (v41 & 1) == 0; /*0x411195*/
        goto LABEL_55; /*0x411198*/
      }
      v31 = (char *)v28; /*0x4110d9*/
      v32 = Buffer_field_10 / 2; /*0x4110db*/
      v57 = Buffer_field_10 / 2; /*0x4110e0*/
      if ( (v28 & 2) != 0 && v32 ) /*0x4110e8*/
      {
        *(_WORD *)v28 = a4; /*0x4110ea*/
        v31 = (char *)(v28 + 2); /*0x4110ed*/
        LOBYTE(v57) = --v32; /*0x4110f1*/
      }
      v33 = 0; /*0x4110f7*/
      v34 = v32 >> 1; /*0x4110fc*/
      if ( v32 >> 1 ) /*0x4110fc*/
      {
        memset32(v31, 65537 * a4, v34); /*0x411113*/
        LOBYTE(v32) = v57; /*0x411115*/
        v33 = (unsigned __int16 *)&v31[4 * v34]; /*0x411119*/
      }
      if ( (v32 & 1) != 0 && v33 ) /*0x411122*/
        *v33 = a4; /*0x411124*/
      v35 = this->Buffer_field_10; /*0x41112a*/
      v36 = 2 * *((_DWORD *)this + 10) * *((_DWORD *)this + 11) - v35; /*0x411135*/
      LODWORD(v36) = v36 - HIDWORD(v36); /*0x411136*/
      v37 = v35 + this->Buffer_field_18; /*0x41113d*/
      v38 = (int)v36 >> 1; /*0x41113f*/
      if ( (v37 & 2) != 0 && v38 ) /*0x41114c*/
      {
LABEL_60:
        *(_WORD *)v37 = a4; /*0x411272*/
        v37 += 2; /*0x411275*/
        --v38; /*0x411278*/
      }
    }
    result = 0; /*0x411279*/
    v49 = v38 >> 1; /*0x411280*/
    if ( !(v38 >> 1) ) /*0x411282*/
      goto LABEL_54; /*0x411282*/
    goto LABEL_53; /*0x411282*/
  }
  return result; /*0x41124e*/
}



// ==== 0x004112D0  MapClass::isLocationShrouded  this=MapClass  sig=csp ====
int __thiscall MapClass::isLocationShrouded(MapClass *this, unsigned __int16 a2)
{
  void *MapClass_field_0x28; // eax
  void *MapClass_field_0x14; // ecx
  _DWORD v5[4]; // [esp+0h] [ebp-10h] BYREF

  v5[3] = this->MapClass_field_0x2C; /*0x4112d8*/
  v5[0] = 0; /*0x4112e0*/
  v5[1] = 0; /*0x4112e4*/
  MapClass_field_0x28 = this->MapClass_field_0x28; /*0x4112e8*/
  MapClass_field_0x14 = this->MapClass_field_0x14; /*0x4112eb*/
  v5[2] = MapClass_field_0x28; /*0x4112f4*/
  return (*(int (__thiscall **)(void *, _DWORD *, _DWORD))(*(_DWORD *)MapClass_field_0x14 + 20))( /*0x411303*/
           MapClass_field_0x14,
           v5,
           a2);
}



// ==== 0x00411310  StreamClass::WriteBytes  this=StreamClass  sig=csp ====
int __thiscall StreamClass::WriteBytes(StreamClass *this, unsigned __int16 a2, char a3, int a4, int a5, int a6)
{
  return (*(int (__thiscall **)(_DWORD, char *, _DWORD))(**((_DWORD **)this + 5) + 20))(*((_DWORD *)this + 5), &a3, a2); /*0x411328*/
}



// ==== 0x00411330  TacticalClass::FillScanlinesTransparent  this=TacticalClass  sig=csp ====
unsigned int __thiscall TacticalClass::FillScanlinesTransparent(TacticalClass *this, int a2, int a3, int a4, int a5)
{
  TacticalClass *v5; // edi
  int v6; // esi
  unsigned int result; // eax
  unsigned int v8; // edx
  int v9; // ecx
  char *v10; // ebp
  unsigned int v11; // eax
  char *v12; // edi
  unsigned int v13; // esi
  int v14; // eax
  int nextArrayIndex; // ebx
  _WORD *v16; // ecx
  unsigned int v17; // esi
  int v18; // ebx
  char *v19; // ebp
  char *v20; // eax
  unsigned int v21; // esi
  int v23; // [esp+Ch] [ebp-Ch]
  int v24; // [esp+Ch] [ebp-Ch]
  char v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  v5 = this; /*0x41133d*/
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)this->? + 92))(this->?, a2, a3); /*0x411350*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v5->? + 96))(v5->?); /*0x411354*/
  result = v5->?; /*0x41135a*/
  v8 = v6 + v5->?; /*0x41135d*/
  if ( v8 >= result ) /*0x411361*/
    v8 -= (unsigned int)v5->?; /*0x411363*/
  if ( a5 > 0 ) /*0x41136c*/
  {
    v26 = a5; /*0x411374*/
    do /*0x411453*/
    {
      v9 = a4; /*0x411378*/
      if ( v8 + 2 * a4 < result ) /*0x411381*/
      {
        v18 = a4; /*0x411466*/
        v19 = (char *)v8; /*0x411468*/
        if ( (v8 & 2) != 0 && a4 ) /*0x41146e*/
        {
          *(_WORD *)v8 = 127; /*0x411470*/
          v19 = (char *)(v8 + 2); /*0x411475*/
          v18 = a4 - 1; /*0x411478*/
        }
        v20 = 0; /*0x41147d*/
        v21 = v18 >> 1; /*0x411482*/
        if ( v18 >> 1 ) /*0x411482*/
        {
          memset32(v19, 8323199, v21); /*0x41148f*/
          v5 = this; /*0x411491*/
          v20 = &v19[4 * v21]; /*0x411495*/
        }
        if ( (v18 & 1) != 0 && v20 ) /*0x4114a0*/
          *(_WORD *)v20 = 127; /*0x4114a2*/
      }
      else
      {
        v10 = (char *)v8; /*0x411389*/
        v11 = (result - v8) >> 1; /*0x41138b*/
        v23 = v11; /*0x411392*/
        if ( (v8 & 2) != 0 && v11 ) /*0x41139a*/
        {
          *(_WORD *)v8 = 127; /*0x41139f*/
          v10 = (char *)(v8 + 2); /*0x4113a4*/
          v23 = v11 - 1; /*0x4113a7*/
        }
        v12 = 0; /*0x4113af*/
        v13 = v23 >> 1; /*0x4113b4*/
        if ( v23 >> 1 ) /*0x4113b4*/
        {
          memset32(v10, 8323199, v13); /*0x4113c1*/
          v9 = a4; /*0x4113c3*/
          v12 = &v10[4 * v13]; /*0x4113c7*/
        }
        if ( (v23 & 1) != 0 && v12 ) /*0x4113d4*/
          *(_WORD *)v12 = 127; /*0x4113d6*/
        v14 = v9 - v11; /*0x4113e1*/
        nextArrayIndex = this->?; /*0x4113e3*/
        v25 = v14; /*0x4113e6*/
        v24 = nextArrayIndex; /*0x4113ed*/
        if ( (nextArrayIndex & 2) != 0 && v14 ) /*0x4113f5*/
        {
          *(_WORD *)nextArrayIndex = 127; /*0x4113f7*/
          nextArrayIndex += 2; /*0x4113fc*/
          --v14; /*0x4113ff*/
          v24 = nextArrayIndex; /*0x411400*/
          v25 = v14; /*0x411404*/
        }
        v16 = 0; /*0x41140a*/
        v17 = v14 >> 1; /*0x41140f*/
        if ( v14 >> 1 ) /*0x41140f*/
        {
          memset32((void *)nextArrayIndex, 8323199, v17); /*0x41141c*/
          v16 = (_WORD *)(v24 + 4 * v17); /*0x411422*/
          LOBYTE(v14) = v25; /*0x411425*/
        }
        if ( (v14 & 1) != 0 && v16 ) /*0x41142f*/
          *v16 = 127; /*0x411431*/
        v5 = this; /*0x411436*/
      }
      result = v5->?; /*0x41143d*/
      v8 += 2 * v5->field28; /*0x411440*/
      if ( v8 >= result ) /*0x411445*/
        v8 -= (unsigned int)v5->?; /*0x411447*/
      --v26; /*0x41144f*/
    }
    while ( v26 ); /*0x411453*/
  }
  return result; /*0x41145b*/
}



// ==== 0x004114B0  StreamClass::ReadAndSeek  this=BSurface  sig=csp ====
int __thiscall StreamClass::ReadAndSeek(int *this, int a2, int a3)
{
  int v4; // edi
  int result; // eax

  v4 = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)this->Buffer + 92))(this->Buffer, a2, a3); /*0x4114c9*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this->Buffer + 96))(this->Buffer); /*0x4114cd*/
  result = v4 + this->Width; /*0x4114d6*/
  if ( result >= (unsigned int)*(this + 7) ) /*0x4114da*/
    result -= this->Height; /*0x4114dc*/
  return result; /*0x4114df*/
}



// ==== 0x004114F0  Surface::Stub  this=Surface  sig=csp ====
char __stdcall BSurface::Stub(Surface *this, int a2)
{
  return 1; /*0x4114f2*/
}



// ==== 0x00411500  Surface::entry_68_  this=Surface  sig=csp ====
char __stdcall XSurface::entry_68_(Surface *this, int a2)
{
  return 1; /*0x411502*/
}



// ==== 0x00411510  Surface::GetRect  this=Surface  sig=csp ====
_DWORD *__thiscall Surface::GetRect(Surface *this, _DWORD *a2)
{
  int Width; // edi
  int Height; // ecx

  Width = this->Width; /*0x411517*/
  Height = this->Height; /*0x41151a*/
  *a2 = 0; /*0x411523*/
  a2[1] = 0; /*0x411525*/
  a2[2] = Width; /*0x411528*/
  a2[3] = Height; /*0x41152d*/
  return a2; /*0x41152b*/
}



// ==== 0x00411540  Surface::GetWidth  this=Surface  sig=csp ====
int __thiscall Surface::GetWidth(Surface *this)
{
  return this->Width; /*0x411543*/
}



// ==== 0x00411550  Surface::GetHeight  this=Surface  sig=csp ====
int __thiscall Surface::GetHeight(Surface *this)
{
  return this->Height; /*0x411553*/
}



// ==== 0x00411560  XSurface::Lock  this=XSurface  sig=csp ====
int __thiscall XSurface::Lock(XSurface *this, int a2, int a3)
{
  ++this->LockCount; /*0x411564*/
  return 0; /*0x411569*/
}



// ==== 0x00411570  XSurface::Unlock  this=XSurface  sig=csp ====
char __thiscall XSurface::Unlock(XSurface *this)
{
  --this->LockCount; /*0x411574*/
  return 1; /*0x411579*/
}



// ==== 0x00411580  XSurface::IsLocked  this=XSurface  sig=csp ====
BOOL __thiscall Surface::IsLocked(XSurface *this)
{
  return this->LockCount != 0; /*0x41158a*/
}



// ==== 0x00411590  XSurface::StubReturnFalse  this=XSurface  sig=csp ====
char XSurface::StubReturnFalse(XSurface *this)
{
  return 0; /*0x411592*/
}



// ==== 0x004115A0  XSurface::ScalarDtor  this=XSurface  sig=csp ====
std::locale::facet *__thiscall XSurface::ScalarDtor(XSurface *this, char a2)
{
  *(_DWORD *)this->Surface = &Surface_Vtable; /*0x4115a9*/
  if ( (a2 & 1) != 0 ) /*0x4115af*/
    __3_YAXPAX_Z(this); /*0x4115b2*/
  return (std::locale::facet *)this; /*0x4115bc*/
}



// ==== 0x004115C0  Surface::StubReturnFalse  this=Surface  sig=csp ====
char Surface::StubReturnFalse(Surface *this)
{
  return 0; /*0x4115c2*/
}



// ==== 0x004115D0  Surface::getObjectValue  this=Surface  sig=csp ====
std::locale::facet *__thiscall AbstractClass::getObjectValue(Surface *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &Surface_Vtable; /*0x4115d9*/
  if ( (a2 & 1) != 0 ) /*0x4115df*/
    __3_YAXPAX_Z(this); /*0x4115e2*/
  return (std::locale::facet *)this; /*0x4115ec*/
}



// ==== 0x004115F0  BSurface::Lock  this=BSurface  sig=csp ====
void *__thiscall BSurface::Lock(BSurface *this, int a2, int a3)
{
  int v4; // eax
  char *Buffer; // edi
  int v6; // ebx

  v4 = *(_DWORD *)this->XSurface; /*0x4115f8*/
  ++this->?; /*0x4115fb*/
  Buffer = (char *)this->Buffer; /*0x4115fe*/
  v6 = a2 * (*(int (__thiscall **)(BSurface *))(v4 + 112))(this); /*0x411608*/
  return &Buffer[v6 + a3 * (*(int (__thiscall **)(BSurface *))(*(_DWORD *)this->XSurface + 116))(this)]; /*0x41161b*/
}



// ==== 0x00411630  BSurface::GetBytesPerPixel  this=BSurface  sig=csp ====
int __thiscall BSurface::GetBytesPerPixel(BSurface *this)
{
  return this->BytesPerPixel; /*0x411633*/
}



// ==== 0x00411640  BSurface::GetPitch  this=BSurface  sig=csp ====
int __thiscall BSurface::GetPitch(BSurface *this)
{
  return this->BytesPerPixel * (*(int (__thiscall **)(BSurface *))(*(_DWORD *)this->XSurface + 124))(this); /*0x41164c*/
}



// ==== 0x00411650  BSurface::ScalarDtor  this=BSurface  sig=csp ====
char *__thiscall BSurface::ScalarDtor(BSurface *this, char a2)
{
  Vector::Clear((int)&this->Buffer); /*0x411656*/
  *(_DWORD *)this->XSurface = &Surface_Vtable; /*0x41165f*/
  if ( (a2 & 1) != 0 ) /*0x411667*/
    __3_YAXPAX_Z(this); /*0x41166a*/
  return this->XSurface; /*0x411674*/
}



// ==== 0x00411680  sub_411680  this=-  sig=ida-proto ====
int sub_411680()
{
  dword_887748 = 0; /*0x411682*/
  dword_88774C = 0; /*0x411687*/
  dword_887750 = 0; /*0x41168c*/
  dword_887754 = 0; /*0x411691*/
  return 0; /*0x411696*/
}



// ==== 0x004116A0  sub_4116A0  this=-  sig=ida-proto ====
int __cdecl sub_4116A0(unsigned int a1)
{
  unsigned int v1; // edi
  int v2; // eax
  int v3; // esi
  int result; // eax
  unsigned int v5; // ebp
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // ecx
  int v15; // ecx
  int v16; // [esp+Ch] [ebp-10h]
  unsigned int v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]
  _BYTE v19[4]; // [esp+18h] [ebp-4h] BYREF

  v1 = a1; /*0x4116a5*/
  v2 = *(_DWORD *)(a1 + 52); /*0x4116a9*/
  v3 = 188 * v2 + 8943480; /*0x4116bd*/
  if ( (dword_8877A0[47 * v2] & 1) != 0 ) /*0x4116c4*/
  {
    Debug::Log(); /*0x4116cf*/
    return *(_DWORD *)(v3 + 32); /*0x4116df*/
  }
  v5 = Time::GetElapsedMS() - *((_DWORD *)&unk_887794 + 47 * v2); /*0x4116f2*/
  v17 = *(_DWORD *)(v3 + 144); /*0x4116f4*/
  EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 160)); /*0x4116ff*/
  v6 = *(_DWORD *)(v3 + 140); /*0x41170b*/
  v7 = *(_DWORD *)(v1 + 156) * *(_DWORD *)(v3 + 148); /*0x41171a*/
  v18 = *(_DWORD *)(v1 + 56); /*0x411723*/
  v16 = *(_DWORD *)(v3 + 152); /*0x411727*/
  if ( v6 && !(*(int (__stdcall **)(int, unsigned int *, _BYTE *))(*(_DWORD *)v6 + 16))(v6, &a1, v19) ) /*0x41173a*/
  {
    if ( v16 ) /*0x411747*/
    {
      v8 = a1; /*0x411749*/
LABEL_11:
      v7 += v8; /*0x411769*/
      goto LABEL_12; /*0x411769*/
    }
    v9 = v17 >> 1; /*0x411757*/
    if ( a1 >= v17 >> 1 ) /*0x41175b*/
    {
      v7 += a1 - v9; /*0x41175f*/
      goto LABEL_12; /*0x411761*/
    }
    if ( v7 ) /*0x411765*/
    {
      v8 = a1 + v9; /*0x411767*/
      goto LABEL_11; /*0x411767*/
    }
  }
LABEL_12:
  LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 160)); /*0x41176b*/
  v10 = v18 * *(_DWORD *)(v1 + 156); /*0x411780*/
  v11 = v7 - v10; /*0x411785*/
  if ( v7 - v10 > v7 ) /*0x411789*/
  {
    v11 = 0; /*0x41178b*/
LABEL_14:
    *(_DWORD *)(v3 + 20) = v11; /*0x41178d*/
    *(_DWORD *)(v3 + 24) = v5; /*0x411792*/
    v12 = 60 /*0x4117ba*/
        * (v11
         / (*(unsigned __int8 *)(v1 + 62)
          * (*(unsigned __int8 *)(v1 + 63) >> 3)))
        / *(unsigned __int16 *)(v1 + 60);
    *(_DWORD *)(v3 + 32) = v12; /*0x4117bc*/
    v13 = *(_DWORD *)(v1 + 196); /*0x4117bf*/
    if ( v12 >= v13 ) /*0x4117c7*/
    {
      result = v12 - v13; /*0x4117c9*/
      *(_DWORD *)(v3 + 32) = result; /*0x4117cd*/
      return result; /*0x4117d5*/
    }
    *(_DWORD *)(v3 + 32) = 0; /*0x4117ff*/
    return *(_DWORD *)(v3 + 32); /*0x4117ff*/
  }
  if ( !v11 || v11 > *(_DWORD *)(v3 + 20) ) /*0x4117dd*/
    goto LABEL_14; /*0x4117dd*/
  v14 = *(_DWORD *)(v3 + 24); /*0x4117df*/
  if ( v5 > v14 ) /*0x4117e4*/
  {
    *(_DWORD *)(v3 + 24) = v5; /*0x4117e8*/
    v15 = v5 - v14 + *(_DWORD *)(v3 + 32); /*0x4117f0*/
    *(_DWORD *)(v3 + 32) = v15; /*0x4117f4*/
    return v15; /*0x4117fe*/
  }
  return *(_DWORD *)(v3 + 32); /*0x4116da*/
}



// ==== 0x00411820  ManageMultimediaTimer  this=-  sig=ida-proto ====
int __cdecl ManageMultimediaTimer(struct _RTL_CRITICAL_SECTION *dwUser, int a2, int a3, int a4)
{
  int result; // eax
  LONG LockCount; // eax
  int v6; // ebp
  int v7; // esi
  LONG v8; // eax
  int v9; // esi
  struct _RTL_CRITICAL_SECTION *v10; // edi
  int v11; // eax
  LONG v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // esi

  result = -1; /*0x411824*/
  switch ( a2 ) /*0x411835*/
  {
    case 1: /*0x411835*/
      dwUser[3].RecursionCount = (LONG)j_Time_GetElapsedMS; /*0x411843*/
      dwUser[5].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)60; /*0x41184a*/
      break; /*0x411852*/
    case 2: /*0x411835*/
      result = sub_411B20((DWORD_PTR)dwUser, a3, a4); /*0x411862*/
      break; /*0x41186e*/
    case 3: /*0x411835*/
      Debug::Log(); /*0x411874*/
      LockCount = dwUser[2].LockCount; /*0x411880*/
      v6 = 188 * LockCount + 8943480; /*0x411894*/
      if ( byte_887778[188 * LockCount] == 1 ) /*0x41189b*/
      {
        if ( dword_887804[47 * LockCount] ) /*0x4118a1*/
        {
          Debug::Log(); /*0x4118b2*/
          v7 = 188 * dwUser[2].LockCount + 8943480; /*0x4118ce*/
          if ( dword_887804[47 * dwUser[2].LockCount] ) /*0x4118c5*/
          {
            EnterCriticalSection((LPCRITICAL_SECTION)(188 * dwUser[2].LockCount + 8943640)); /*0x4118de*/
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v7 + 140) + 72))(*(_DWORD *)(v7 + 140)); /*0x4118ed*/
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v7 + 140) + 8))(*(_DWORD *)(v7 + 140)); /*0x4118f9*/
            *(_DWORD *)(v7 + 140) = 0; /*0x411901*/
            *(_DWORD *)(v7 + 64) = 0; /*0x411907*/
            *(_DWORD *)(v7 + 68) = 0; /*0x41190a*/
            *(_DWORD *)(v7 + 72) = 0; /*0x41190d*/
            *(_DWORD *)(v7 + 76) = 0; /*0x411910*/
            LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 160)); /*0x411913*/
          }
        }
        Debug::Log(); /*0x41191e*/
        timeKillEvent(*(_DWORD *)(v6 + 96)); /*0x41192a*/
        *(_DWORD *)(v6 + 96) = 0; /*0x411935*/
        Debug::Log(); /*0x411938*/
        timeEndPeriod(0x10u); /*0x411942*/
        *(_BYTE *)v6 = 0; /*0x41194d*/
        Debug::Log(); /*0x411950*/
        DeleteCriticalSection((LPCRITICAL_SECTION)(v6 + 160)); /*0x41195f*/
      }
      Debug::Log(); /*0x41196a*/
      result = -1; /*0x411972*/
      break; /*0x411979*/
    case 4: /*0x411835*/
      result = InitializeSoundBufferPlayback(dwUser); /*0x41197f*/
      break; /*0x41198b*/
    case 5: /*0x411835*/
      result = SubmitDirectSoundBufferData(dwUser, a3, a4); /*0x41199b*/
      break; /*0x4119a7*/
    case 6: /*0x411835*/
      v8 = dwUser[2].LockCount; /*0x4119ac*/
      v9 = 188 * v8 + 8943480; /*0x4119b7*/
      v10 = (struct _RTL_CRITICAL_SECTION *)(188 * v8 + 8943640); /*0x4119be*/
      EnterCriticalSection(v10); /*0x4119c5*/
      if ( *(_BYTE *)v9 == 1 ) /*0x4119ce*/
      {
        v11 = *(_DWORD *)(v9 + 140); /*0x4119d0*/
        if ( v11 ) /*0x4119d8*/
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v11 + 72))(*(_DWORD *)(v9 + 140)); /*0x4119dd*/
      }
      *(_DWORD *)(v9 + 40) |= 1u; /*0x4119e7*/
      LeaveCriticalSection(v10); /*0x4119ea*/
      result = -1; /*0x4119f3*/
      break; /*0x4119f7*/
    case 7: /*0x411835*/
      v15 = 188 * dwUser[2].LockCount + 8943480; /*0x411aad*/
      if ( dword_887804[47 * dwUser[2].LockCount] ) /*0x411aa4*/
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(188 * dwUser[2].LockCount + 8943640)); /*0x411abd*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v15 + 140) + 72))(*(_DWORD *)(v15 + 140)); /*0x411acc*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v15 + 140) + 8))(*(_DWORD *)(v15 + 140)); /*0x411ad8*/
        *(_DWORD *)(v15 + 140) = 0; /*0x411ae0*/
        *(_DWORD *)(v15 + 64) = 0; /*0x411ae6*/
        *(_DWORD *)(v15 + 68) = 0; /*0x411ae9*/
        *(_DWORD *)(v15 + 72) = 0; /*0x411aec*/
        *(_DWORD *)(v15 + 76) = 0; /*0x411aef*/
        LeaveCriticalSection((LPCRITICAL_SECTION)(v15 + 160)); /*0x411af2*/
      }
      result = -1; /*0x411af8*/
      break; /*0x411af8*/
    case 8: /*0x411835*/
      v12 = dwUser[2].LockCount; /*0x4119fe*/
      v13 = 188 * v12 + 8943480; /*0x411a12*/
      if ( byte_887778[188 * v12] && dword_887804[47 * v12] ) /*0x411a1b*/
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(188 * v12 + 8943640)); /*0x411a2a*/
        if ( (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v13 + 140) + 48))( /*0x411a3d*/
               *(_DWORD *)(v13 + 140),
               0,
               0,
               1) )
        {
          LeaveCriticalSection((LPCRITICAL_SECTION)(v13 + 160)); /*0x411a7c*/
          result = -13; /*0x411a82*/
        }
        else
        {
          *(_DWORD *)(v13 + 28) = Time::GetElapsedMS() - *(_DWORD *)(v13 + 24); /*0x411a52*/
          Debug::Log(); /*0x411a55*/
          v14 = *(_DWORD *)(v13 + 40); /*0x411a5a*/
          LOBYTE(v14) = v14 & 0xFE; /*0x411a60*/
          *(_DWORD *)(v13 + 40) = v14; /*0x411a62*/
          LeaveCriticalSection((LPCRITICAL_SECTION)(v13 + 160)); /*0x411a69*/
          result = -1; /*0x411a6f*/
        }
      }
      else
      {
        result = -13; /*0x411a8c*/
      }
      break; /*0x411a75*/
    default:
      return result;
  }
  return result; /*0x411840*/
}



// ==== 0x00411B20  sub_411B20  this=-  sig=csp ====
int __cdecl sub_411B20(DWORD_PTR dwUser, unsigned __int16 *a2, int a3)
{
  int v3; // eax
  char *v4; // ecx
  _BYTE *v5; // esi
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ecx
  LPDIRECTSOUND DirectSound; // [esp+8h] [ebp-64h]
  _DWORD v11[24]; // [esp+Ch] [ebp-60h] BYREF

  DirectSound = Audio::GetDirectSound(); /*0x411b2f*/
  Debug::Log(); /*0x411b33*/
  GetCurrentThreadId(); /*0x411b3b*/
  Debug::Log(); /*0x411b47*/
  if ( !Audio::IsSoundEnabled() ) /*0x411b4f*/
    return -13; /*0x411b4f*/
  v3 = 0; /*0x411b5c*/
  v4 = byte_887778; /*0x411b5e*/
  do /*0x411b75*/
  {
    if ( !*v4 ) /*0x411b63*/
      break; /*0x411b66*/
    v4 += 188; /*0x411b68*/
    ++v3; /*0x411b6e*/
  }
  while ( (int)v4 < (int)byte_887834 ); /*0x411b75*/
  if ( v3 == 1 || a3 != 16 ) /*0x411b85*/
    return -13; /*0x411b85*/
  *(_DWORD *)(dwUser + 52) = v3; /*0x411b99*/
  v5 = (_BYTE *)(188 * v3 + 8943480); /*0x411b9c*/
  memset(v5, 0, 0xBCu); /*0x411bac*/
  *v5 = 1; /*0x411bae*/
  *((_DWORD *)v5 + 1) = *(_DWORD *)(dwUser + 164); /*0x411bbd*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(188 * v3 + 8943640)); /*0x411bc1*/
  v6 = *(_DWORD *)(dwUser + 160); /*0x411bc7*/
  if ( v6 == -1 )
  {
    v7 = *(_DWORD *)(dwUser + 112); /*0x411bdf*/
    v8 = *(unsigned __int16 *)(dwUser + 14); /*0x411be4*/
    *((_WORD *)v5 + 4) = v7 == (unsigned __int16)v8 ? *a2 : v7 * (unsigned int)*a2 / v8;
  }
  else
  {
    *((_WORD *)v5 + 4) = v6; /*0x411bd9*/
  }
  memset(v11, 0, sizeof(v11)); /*0x411c16*/
  v11[0] = 96; /*0x411c1c*/
  DirectSound->lpVtbl->GetCaps(DirectSound, (LPDSCAPS)v11); /*0x411c28*/
  if ( (v11[1] & 0x20) != 0 ) /*0x411c30*/
    Debug::Log(); /*0x411c3e*/
  else
    *(_DWORD *)(dwUser + 196) = 0; /*0x411c48*/
  v5[10] = *((_BYTE *)a2 + 2); /*0x411c5a*/
  v5[11] = *((_BYTE *)a2 + 3); /*0x411c60*/
  *((_DWORD *)v5 + 9) = *((_DWORD *)a2 + 1); /*0x411c66*/
  dword_88776C = (int (__cdecl *)(_DWORD))*((_DWORD *)a2 + 2); /*0x411c6c*/
  dword_887770 = (int (__cdecl *)(_DWORD, _DWORD))*((_DWORD *)a2 + 3); /*0x411c75*/
  Debug::Log(); /*0x411c7b*/
  if ( timeBeginPeriod(0x10u) == 97 ) /*0x411c90*/
    return -13; /*0x411cd5*/
  Debug::Log(); /*0x411c97*/
  *((_DWORD *)v5 + 24) = timeSetEvent(0x10u, 1u, fptc, dwUser, 1u); /*0x411cb6*/
  Debug::Log(); /*0x411cb9*/
  return *((_DWORD *)v5 + 24) != 0 ? -1 : -13;
}



// ==== 0x00411DF0  InitializeSoundBufferPlayback  this=-  sig=csp ====
int __cdecl InitializeSoundBufferPlayback(LPCRITICAL_SECTION lpCriticalSection)
{
  LONG LockCount; // eax
  int v3; // esi
  int v4; // eax
  int v6; // eax
  int **v7; // edi
  unsigned __int16 v8; // ax
  __int16 v9; // dx
  int v10; // ecx
  unsigned __int16 v11; // ax
  LPDIRECTSOUND DirectSoundAudio; // eax
  int *v13; // eax
  int v14; // eax
  int *v15; // edx
  int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // eax
  struct _RTL_CRITICAL_SECTION *lpCriticalSectiona; // [esp+38h] [ebp+4h]

  LockCount = lpCriticalSection[2].LockCount; /*0x411df7*/
  v3 = 188 * LockCount + 8943480; /*0x411e0c*/
  if ( (dword_8877A0[47 * LockCount] & 1) == 0 ) /*0x411e13*/
  {
    lpCriticalSectiona = (struct _RTL_CRITICAL_SECTION *)(188 * LockCount + 8943640); /*0x411e9b*/
    EnterCriticalSection(lpCriticalSectiona); /*0x411e9f*/
    v6 = *(_DWORD *)(v3 + 140); /*0x411ea5*/
    v7 = (int **)(v3 + 140); /*0x411eab*/
    if ( v6 ) /*0x411eb3*/
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 72))(*(_DWORD *)(v3 + 140)); /*0x411eb8*/
      (*(void (__stdcall **)(int *))(**v7 + 8))(*v7); /*0x411ec0*/
      *v7 = 0; /*0x411ec3*/
    }
    *(_DWORD *)(v3 + 144) = 2 * (int)lpCriticalSection[6].OwningThread; /*0x411ed8*/
    *(_DWORD *)(v3 + 100) = 0; /*0x411ede*/
    *(_DWORD *)(v3 + 104) = 0; /*0x411ee0*/
    *(_DWORD *)(v3 + 108) = 0; /*0x411ee3*/
    *(_DWORD *)(v3 + 112) = 0; /*0x411ee6*/
    *(_DWORD *)(v3 + 116) = 0; /*0x411ee9*/
    *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 144); /*0x411ef2*/
    *(_DWORD *)(v3 + 100) = 20; /*0x411efa*/
    *(_DWORD *)(v3 + 104) = 65760; /*0x411f01*/
    *(_DWORD *)(v3 + 116) = v3 + 120; /*0x411f08*/
    *(_DWORD *)(v3 + 120) = 0; /*0x411f0b*/
    *(_DWORD *)(v3 + 124) = 0; /*0x411f0d*/
    *(_DWORD *)(v3 + 128) = 0; /*0x411f10*/
    *(_DWORD *)(v3 + 132) = 0; /*0x411f13*/
    *(_WORD *)(v3 + 136) = 0; /*0x411f16*/
    *(_WORD *)(v3 + 120) = 1; /*0x411f1a*/
    v8 = *(unsigned __int8 *)(v3 + 11); /*0x411f1f*/
    v9 = *(unsigned __int8 *)(v3 + 10); /*0x411f24*/
    *(_WORD *)(v3 + 134) = v8; /*0x411f29*/
    v10 = *(unsigned __int16 *)(v3 + 8); /*0x411f30*/
    v11 = v9 * (v8 >> 3); /*0x411f38*/
    *(_WORD *)(v3 + 132) = v11; /*0x411f3b*/
    *(_DWORD *)(v3 + 124) = v10; /*0x411f4a*/
    *(_WORD *)(v3 + 122) = v9; /*0x411f4d*/
    *(_DWORD *)(v3 + 128) = v10 * v11; /*0x411f51*/
    DirectSoundAudio = Audio::GetDirectSound(); /*0x411f57*/
    DirectSoundAudio->lpVtbl->CreateSoundBuffer( /*0x411f63*/
      DirectSoundAudio,
      (LPCDSBUFFERDESC)(v3 + 100),
      (LPDIRECTSOUNDBUFFER *)(v3 + 140),
      0);
    if ( *v7 ) /*0x411f66*/
    {
      dword_88776C(lpCriticalSection); /*0x411f84*/
      dword_88776C(lpCriticalSection); /*0x411f8b*/
      v13 = *v7; /*0x411f91*/
      *(_DWORD *)(v3 + 68) = 0; /*0x411f96*/
      *(_DWORD *)(v3 + 156) = 0; /*0x411f99*/
      *(_DWORD *)(v3 + 148) = 0; /*0x411f9f*/
      (*(void (__stdcall **)(int *, _DWORD))(*v13 + 52))(v13, 0); /*0x411fa9*/
      v14 = Math::RoundToInt(*(float *)&flt_A8EB9C * 255.0); /*0x411fb8*/
      v15 = *v7; /*0x411fbd*/
      *(_DWORD *)(v3 + 4) = v14; /*0x411fc1*/
      v16 = *v15; /*0x411fca*/
      v17 = sub_40A900((unsigned __int8)v14); /*0x411fcc*/
      (*(void (__stdcall **)(int *, int))(v16 + 60))(*v7, v17); /*0x411fd5*/
      v18 = (*(int (__stdcall **)(int *, _DWORD, _DWORD, int))(**v7 + 48))(*v7, 0, 0, 1); /*0x411fe8*/
      LeaveCriticalSection(lpCriticalSectiona); /*0x411feb*/
      v19 = -(v18 != 0); /*0x411ff6*/
      LOBYTE(v19) = v19 & 0xF4; /*0x411ff9*/
      return v19 - 1; /*0x411ffc*/
    }
    LeaveCriticalSection(lpCriticalSectiona); /*0x411f73*/
    return -13; /*0x411f82*/
  }
  if ( !byte_887778[188 * LockCount] || !dword_887804[47 * LockCount] ) /*0x411e1e*/
    return -13; /*0x411e26*/
  EnterCriticalSection((LPCRITICAL_SECTION)(188 * LockCount + 8943640)); /*0x411e33*/
  if ( (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v3 + 140) + 48))( /*0x411e48*/
         *(_DWORD *)(v3 + 140),
         0,
         0,
         1) )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 160)); /*0x411e87*/
    return -13; /*0x411e8d*/
  }
  else
  {
    *(_DWORD *)(v3 + 28) = Time::GetElapsedMS() - *(_DWORD *)(v3 + 24); /*0x411e5d*/
    Debug::Log(); /*0x411e60*/
    v4 = *(_DWORD *)(v3 + 40); /*0x411e65*/
    LOBYTE(v4) = v4 & 0xFE; /*0x411e6b*/
    *(_DWORD *)(v3 + 40) = v4; /*0x411e6d*/
    LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 160)); /*0x411e74*/
    return -1; /*0x411e7a*/
  }
}



// ==== 0x00412000  SubmitDirectSoundBufferData  this=-  sig=csp ====
int __cdecl SubmitDirectSoundBufferData(unsigned int a1, char *a2, char *a3)
{
  unsigned int v3; // edi
  char *v4; // ebx
  int v5; // ebp
  int *v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // esi
  char *v12; // edx
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  char *v18; // esi
  char *v19; // edi
  char *v20; // esi
  char *v21; // edi
  unsigned int v22; // edx
  unsigned int v23; // ecx
  char *v24; // edi
  char *v25; // esi
  char v26; // cl
  char v27; // al
  unsigned int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // eax
  int v34; // esi
  struct _RTL_CRITICAL_SECTION *v35; // eax
  unsigned int v36; // [esp+38h] [ebp-18h] BYREF
  int v37; // [esp+3Ch] [ebp-14h]
  int v38; // [esp+40h] [ebp-10h]
  LPCRITICAL_SECTION lpCriticalSection; // [esp+44h] [ebp-Ch]
  __int64 v40; // [esp+48h] [ebp-8h]

  v3 = a1; /*0x412007*/
  v4 = a2; /*0x41200b*/
  v5 = 188 * *(_DWORD *)(a1 + 52) + 8943480; /*0x41201c*/
  if ( !a2 || !a3 ) /*0x41202f*/
    return -13; /*0x41202f*/
  lpCriticalSection = (LPCRITICAL_SECTION)(188 * *(_DWORD *)(a1 + 52) + 8943640); /*0x41203c*/
  EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 160)); /*0x412040*/
  if ( v5 ) /*0x412048*/
  {
    v6 = *(int **)(v5 + 140); /*0x41204a*/
    if ( v6 ) /*0x412052*/
    {
      v40 = *(unsigned int *)(v5 + 4); /*0x41205f*/
      if ( *(float *)&flt_A8EB9C * 256.0 != (double)v40 ) /*0x41207a*/
      {
        v7 = Math::RoundToInt(*(float *)&flt_A8EB9C * 255.0); /*0x412088*/
        *(_DWORD *)(v5 + 4) = v7; /*0x41208f*/
        v8 = *v6; /*0x412092*/
        v9 = sub_40A900((unsigned __int8)v7); /*0x41209a*/
        (*(void (__stdcall **)(_DWORD, int))(v8 + 60))(*(_DWORD *)(v5 + 140), v9); /*0x4120a7*/
      }
    }
  }
  v10 = *(_DWORD *)(v5 + 64); /*0x4120aa*/
  v38 = v10; /*0x4120b2*/
  if ( *(_DWORD *)(v5 + 4 * v10 + 72) == 1 ) /*0x4120ba*/
  {
    LeaveCriticalSection(lpCriticalSection); /*0x4120c1*/
    return -13; /*0x4120d3*/
  }
  v12 = a3; /*0x4120d4*/
  *(_DWORD *)(v5 + 4 * v10 + 80) = v4; /*0x4120d8*/
  *(_DWORD *)(v5 + 4 * v10 + 88) = v12; /*0x4120dc*/
  *(_DWORD *)(v5 + 4 * v10 + 72) = 1; /*0x4120e0*/
  v13 = dword_887804[47 * *(_DWORD *)(v3 + 52)]; /*0x4120ef*/
  v14 = 188 * *(_DWORD *)(v3 + 52) + 8943480; /*0x4120f8*/
  if ( v13 ) /*0x4120ff*/
  {
    v37 = *((_DWORD *)&unk_887814 + 47 * *(_DWORD *)(v3 + 52)); /*0x41210d*/
    if ( !(*(int (__stdcall **)(int, int, _DWORD, char **, unsigned int *, char **, unsigned int *, _DWORD))(*(_DWORD *)v13 + 44))( /*0x412134*/
            v13,
            v37,
            *(_DWORD *)(v3 + 156),
            &a2,
            &a1,
            &a3,
            &v36,
            0) )
    {
      v15 = *(_DWORD *)(v14 + 64); /*0x41213f*/
      LODWORD(v40) = v15; /*0x412146*/
      v16 = *(_DWORD *)(v14 + 4 * v15 + 88); /*0x41214a*/
      if ( v16 <= a1 ) /*0x412150*/
      {
        v18 = *(char **)(v14 + 4 * v15 + 80); /*0x412199*/
        v19 = a2; /*0x41219d*/
      }
      else
      {
        qmemcpy(a2, *(const void **)(v14 + 4 * v15 + 80), a1); /*0x41215f*/
        v17 = *(_DWORD *)(v14 + 4 * v15 + 88) - a1; /*0x412174*/
        if ( v17 <= v36 ) /*0x412178*/
        {
          v20 = *(char **)(v14 + 4 * v15 + 80); /*0x412186*/
          v21 = a3; /*0x41218a*/
          v22 = *(_DWORD *)(v14 + 4 * v15 + 88) - a1; /*0x41218e*/
          v23 = v17 >> 2; /*0x412190*/
          qmemcpy(a3, v20, 4 * v23); /*0x412193*/
          v25 = &v20[4 * v23]; /*0x412193*/
          v24 = &v21[4 * v23]; /*0x412193*/
          v26 = v22; /*0x412195*/
LABEL_18:
          qmemcpy(v24, v25, v26 & 3); /*0x4121aa*/
          (*(void (__stdcall **)(_DWORD, char *, unsigned int, char *, unsigned int))(**(_DWORD **)(v14 + 140) + 76))( /*0x4121cc*/
            *(_DWORD *)(v14 + 140),
            a2,
            a1,
            a3,
            v36);
          v29 = v37; /*0x4121cf*/
          v30 = v40; /*0x4121d3*/
          *(_DWORD *)(v14 + 152) = v37; /*0x4121d7*/
          v31 = *(_DWORD *)(v14 + 4 * v30 + 88); /*0x4121dd*/
          v32 = *(_DWORD *)(v14 + 144); /*0x4121e1*/
          v33 = v31 + v29; /*0x4121e7*/
          *(_DWORD *)(v14 + 156) = v33; /*0x4121eb*/
          if ( v33 >= v32 ) /*0x4121f1*/
            *(_DWORD *)(v14 + 156) = 0; /*0x4121f3*/
          v10 = v38; /*0x4121fd*/
          goto LABEL_21; /*0x4121fd*/
        }
        v18 = *(char **)(v14 + 4 * v15 + 80); /*0x41217a*/
        v19 = a3; /*0x41217e*/
        v16 = v36; /*0x412182*/
      }
      v27 = v16; /*0x4121a1*/
      v28 = v16 >> 2; /*0x4121a3*/
      qmemcpy(v19, v18, 4 * v28); /*0x4121a6*/
      v25 = &v18[4 * v28]; /*0x4121a6*/
      v24 = &v19[4 * v28]; /*0x4121a6*/
      v26 = v27; /*0x4121a8*/
      goto LABEL_18; /*0x4121a8*/
    }
  }
LABEL_21:
  v34 = v10 + 1; /*0x412201*/
  if ( v34 >= 2 ) /*0x412205*/
    v34 = 0; /*0x412207*/
  v35 = lpCriticalSection; /*0x412209*/
  *(_DWORD *)(v5 + 64) = v34; /*0x41220d*/
  LeaveCriticalSection(v35); /*0x412211*/
  return -1; /*0x4120c7*/
}



// ==== 0x004123A0  fptc  this=-  sig=csp ====
void __stdcall fptc(UINT uTimerID, UINT uMsg, DWORD_PTR dwUser, DWORD_PTR dw1, DWORD_PTR dw2)
{
  int v5; // eax
  int v6; // esi
  volatile LONG *v7; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // edi
  int v9; // eax
  char v10; // bl
  unsigned int v11; // eax
  int v12; // eax
  int v13; // edi
  char v14; // [esp+2Bh] [ebp-11h]
  _BYTE v15[4]; // [esp+2Ch] [ebp-10h] BYREF
  unsigned int v16; // [esp+30h] [ebp-Ch] BYREF
  volatile LONG *lpAddend; // [esp+34h] [ebp-8h]
  _BYTE v18[4]; // [esp+38h] [ebp-4h] BYREF

  v14 = 0; /*0x4123ab*/
  v5 = *(_DWORD *)(dwUser + 52); /*0x4123b0*/
  v6 = 188 * v5 + 8943480; /*0x4123bb*/
  v7 = (volatile LONG *)(188 * v5 + 8943664); /*0x4123c2*/
  lpAddend = v7; /*0x4123c9*/
  if ( InterlockedIncrement(v7) != 1 || (*(_BYTE *)(v6 + 40) & 1) != 0 ) /*0x4123e0*/
    goto LABEL_21; /*0x4123e0*/
  v8 = (struct _RTL_CRITICAL_SECTION *)(v6 + 160); /*0x4123e6*/
  EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 160)); /*0x4123f1*/
  v9 = *(_DWORD *)(v6 + 140); /*0x4123f7*/
  if ( !v9 /*0x412424*/
    || *(_DWORD *)(v6 + 96) != uTimerID
    || ((*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v9 + 36))(v9, v15), (v15[0] & 5) == 0) )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 160)); /*0x412529*/
LABEL_21:
    InterlockedDecrement(v7); /*0x41252f*/
    return; /*0x412530*/
  }
  v10 = 0; /*0x41243d*/
  if ( (*(int (__stdcall **)(_DWORD, unsigned int *, _BYTE *))(**(_DWORD **)(v6 + 140) + 16))( /*0x412447*/
         *(_DWORD *)(v6 + 140),
         &v16,
         v18) == -2005401450 )
  {
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v6 + 140) + 80))(*(_DWORD *)(v6 + 140)); /*0x412452*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v6 + 140) + 72))(*(_DWORD *)(v6 + 140)); /*0x41245e*/
    v10 = 1; /*0x412467*/
    v14 = 1; /*0x41246d*/
    (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(v6 + 140) + 52))(*(_DWORD *)(v6 + 140), 0); /*0x412472*/
    *(_DWORD *)(v6 + 152) = 0; /*0x412475*/
    *(_DWORD *)(v6 + 156) = 0; /*0x41247b*/
  }
  v11 = *(_DWORD *)(v6 + 156); /*0x412483*/
  if ( v16 < v11 || v16 >= *(_DWORD *)(v6 + 144) >> 1 && !v11 || v10 == 1 ) /*0x4124a4*/
  {
    dword_887770(dwUser, *(_DWORD *)(v6 + 4 * *(_DWORD *)(v6 + 68) + 80)); /*0x4124af*/
    v12 = *(_DWORD *)(v6 + 68); /*0x4124b5*/
    v13 = v12 + 1; /*0x4124c2*/
    ++*(_DWORD *)(v6 + 148); /*0x4124c5*/
    if ( v12 + 1 >= 2 ) /*0x4124ce*/
      v13 = 0; /*0x4124d0*/
    *(_DWORD *)(v6 + 4 * v12 + 72) = 0; /*0x4124d3*/
    dword_88776C(dwUser); /*0x4124db*/
    if ( *(_DWORD *)(v6 + 4 * v13 + 72) ) /*0x4124e1*/
      *(_DWORD *)(v6 + 68) = v13; /*0x4124ec*/
    if ( v14 == 1 ) /*0x4124f4*/
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v6 + 140) + 48))( /*0x412505*/
        *(_DWORD *)(v6 + 140),
        0,
        0,
        1);
    v8 = (struct _RTL_CRITICAL_SECTION *)(v6 + 160); /*0x412508*/
  }
  LeaveCriticalSection(v8); /*0x41250d*/
  InterlockedDecrement(lpAddend); /*0x412518*/
}



// ==== 0x00412540  j_Time_GetElapsedMS  this=-  sig=ida-proto ====
// attributes: thunk
int j_Time_GetElapsedMS()
{
  return Time::GetElapsedMS();
}



// ==== 0x004125F0  sub_4125F0  this=-  sig=ida-proto ====
int sub_4125F0()
{
  return 1; /*0x4125f5*/
}



// ==== 0x00412600  sub_412600  this=-  sig=ida-proto ====
int sub_412600()
{
  return 1; /*0x412605*/
}



// ==== 0x00412610  ObjectClass::method  this=INIClass  sig=csp ====
int __thiscall sub_412610(char *this)
{
  char *v1; // edi
  int v2; // esi
  char v3; // al
  int v4; // esi

  v1 = this; /*0x412612*/
  v2 = 0; /*0x412614*/
  while ( v1 ) /*0x412618*/
  {
    if ( !isxdigit(*v1) ) /*0x41261e*/
      break; /*0x412628*/
    v3 = *v1; /*0x41262a*/
    v4 = 16 * v2; /*0x41262c*/
    ++v1; /*0x41262f*/
    if ( v3 < 48 || v3 > 57 ) /*0x412636*/
      v2 = v4 + toupper(v3) - 55; /*0x41264d*/
    else
      v2 = v4 + v3 - 48; /*0x41263b*/
  }
  return v2; /*0x412657*/
}



// ==== 0x00412660  sub_412660  this=-  sig=ida-proto ====
void sub_412660()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41266c*/
  dbl_887858 = Math::Sqrt(v0 + v0); /*0x41267e*/
}



// ==== 0x00412690  sub_412690  this=-  sig=ida-proto ====
void sub_412690()
{
  dbl_889E40 = dbl_887858 / 60.0; /*0x41269c*/
}



// ==== 0x004126B0  sub_4126B0  this=-  sig=ida-proto ====
void sub_4126B0()
{
  dbl_889E28 = 1.0 / dbl_889E40; /*0x4126bc*/
}



// ==== 0x004126D0  sub_4126D0  this=-  sig=ida-proto ====
void sub_4126D0()
{
  dbl_889E20 = 0.0174532925199433 * 45.0; /*0x4126dc*/
}



// ==== 0x004126F0  sub_4126F0  this=-  sig=ida-proto ====
void sub_4126F0()
{
  dbl_887860 = 0.0174532925199433 * 60.0; /*0x4126fc*/
}



// ==== 0x00412710  sub_412710  this=-  sig=ida-proto ====
void sub_412710()
{
  dbl_887838 = 0.0174532925199433 * 90.0; /*0x41271c*/
}



// ==== 0x00412730  sub_412730  this=-  sig=ida-proto ====
__int64 sub_412730()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_887838 - dbl_887860); /*0x412742*/
  result = Math::RoundToInt(v0 * dbl_887858 * 0.5); /*0x412756*/
  dword_889E48 = result; /*0x41275b*/
  return result; /*0x412760*/
}



// ==== 0x00412770  sub_412770  this=-  sig=ida-proto ====
void sub_412770()
{
  dbl_887868 = Math::ArcTan((double)dword_889E48 * 0.00390625); /*0x412787*/
}



// ==== 0x004127A0  sub_4127A0  this=-  sig=ida-proto ====
void sub_4127A0()
{
  dbl_887880 = Math::ArcTan((double)(2 * dword_889E48) / dbl_887858); /*0x4127c2*/
}



// ==== 0x004127D0  sub_4127D0  this=-  sig=ida-proto ====
__int64 sub_4127D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_889E48) + 0.5); /*0x4127eb*/
  dword_889E3C = result; /*0x4127f0*/
  return result; /*0x4127f6*/
}



// ==== 0x00412800  sub_412800  this=-  sig=ida-proto ====
int sub_412800()
{
  dword_887850 = 0; /*0x412802*/
  return 0; /*0x41280e*/
}



// ==== 0x00412810  sub_412810  this=-  sig=ida-proto ====
int sub_412810()
{
  dword_887870 = 0; /*0x412812*/
  dword_887874 = 0; /*0x412817*/
  dword_887878 = 0; /*0x41281c*/
  return 0; /*0x412821*/
}



// ==== 0x00412830  sub_412830  this=-  sig=ida-proto ====
int sub_412830()
{
  dword_889E38 = 0; /*0x412835*/
  dword_889E30 = 128; /*0x41283f*/
  dword_889E34 = 128; /*0x412844*/
  return 128; /*0x412849*/
}



// ==== 0x00412850  sub_412850  this=-  sig=ida-proto ====
int sub_412850()
{
  dword_887840 = 0; /*0x412852*/
  dword_887844 = 0; /*0x412857*/
  dword_887848 = 0; /*0x41285c*/
  dword_88784C = 0; /*0x412861*/
  return 0; /*0x412866*/
}



// ==== 0x00412870  sub_412870  this=-  sig=ida-proto ====
int sub_412870()
{
  _DWORD *v0; // esi
  int v1; // edi

  v0 = g_CellClassManager; /*0x412873*/
  v1 = 400; /*0x412878*/
  do /*0x41289c*/
  {
    EventClass::resetEvent(v0, 0, 0); /*0x412883*/
    *v0 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x412888*/
    v0[5] = 10; /*0x41288e*/
    v0[4] = 0; /*0x412895*/
    v0 += 6; /*0x412898*/
    --v1; /*0x41289b*/
  }
  while ( v1 ); /*0x41289c*/
  dword_889E0C = 0; /*0x4128a3*/
  dword_889E10 = 0; /*0x4128a9*/
  byte_889E14 = 1; /*0x4128af*/
  byte_889E15 = 0; /*0x4128b6*/
  dword_889E08 = (int)&DynamicVectorClass<TechnoClass *>::`vftable'; /*0x4128bc*/
  dword_889E1C = 10; /*0x4128c6*/
  dword_889E18 = 0; /*0x4128d0*/
  return atexit(sub_4128F0); /*0x4128de*/
}



// ==== 0x004128F0  sub_4128F0  this=-  sig=ida-proto ====
void __cdecl sub_4128F0()
{
  _DWORD *v0; // esi
  int v1; // ebp
  int v2; // edi
  int v3; // esi
  void **v4; // esi
  int v5; // edi
  void *v6; // eax

  v0 = g_CellClassManager; /*0x4128f4*/
  v1 = 400; /*0x4128f9*/
  do /*0x412917*/
  {
    v2 = v0[2]; /*0x412902*/
    (*(void (__thiscall **)(_DWORD *))(*v0 + 12))(v0); /*0x412907*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v0 + 8))(v0, v2, 0); /*0x412910*/
    v0 += 6; /*0x412913*/
    --v1; /*0x412916*/
  }
  while ( v1 ); /*0x412917*/
  v3 = dword_889E10; /*0x41291e*/
  (*(void (__thiscall **)(int *))(dword_889E08 + 12))(&dword_889E08); /*0x412929*/
  (*(void (__thiscall **)(int *, int, _DWORD))(dword_889E08 + 8))(&dword_889E08, v3, 0); /*0x412939*/
  dword_889E08 = (int)&VectorClass<TechnoClass *>::`vftable'; /*0x412948*/
  if ( dword_889E0C && byte_889E15 ) /*0x412956*/
  {
    __3_YAXPAX_Z(dword_889E0C); /*0x412959*/
    dword_889E0C = 0; /*0x412961*/
  }
  byte_889E15 = 0; /*0x412967*/
  dword_889E10 = 0; /*0x41296d*/
  v4 = &dword_889E0C; /*0x412973*/
  v5 = 400; /*0x412978*/
  do /*0x4129a1*/
  {
    v6 = *(v4 - 6); /*0x41297d*/
    v4 -= 6; /*0x412980*/
    *(v4 - 1) = &VectorClass<TechnoClass *>::`vftable'; /*0x412985*/
    if ( v6 ) /*0x412988*/
    {
      if ( *((_BYTE *)v4 + 9) ) /*0x41298a*/
      {
        __3_YAXPAX_Z(v6); /*0x412990*/
        *v4 = 0; /*0x412998*/
      }
    }
    --v5; /*0x41299a*/
    *((_BYTE *)v4 + 9) = 0; /*0x41299b*/
    v4[1] = 0; /*0x41299e*/
  }
  while ( v5 ); /*0x4129a1*/
}



// ==== 0x004129C0  DynamicArray::AddFromList  this=DynamicArray  sig=csp ====
int __thiscall DynamicArray_AddFromList(char *this, int a2)
{
  int v2; // ebx
  char *v3; // edi
  int result; // eax
  char *v5; // esi
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // [esp+Ch] [ebp+4h]

  v2 = 0; /*0x4129c6*/
  v3 = this + 24 * a2; /*0x4129cb*/
  result = *((_DWORD *)v3 + 4); /*0x4129ce*/
  v11 = result; /*0x4129d4*/
  if ( result > 0 ) /*0x4129d8*/
  {
    v5 = this + 9600; /*0x4129dc*/
    do /*0x412a2e*/
    {
      v6 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)v3 + 24))(v3, v2); /*0x4129ed*/
      v7 = *((_DWORD *)v5 + 2); /*0x4129ef*/
      if ( *((_DWORD *)v5 + 4) < v7 /*0x412a11*/
        || (v5[13] || !v7)
        && (v8 = *((_DWORD *)v5 + 5), v8 > 0)
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v5 + 8))(v5, v7 + v8, 0) )
      {
        v9 = *((_DWORD *)v5 + 4); /*0x412a18*/
        v10 = *((_DWORD *)v5 + 1); /*0x412a1b*/
        *((_DWORD *)v5 + 4) = v9 + 1; /*0x412a21*/
        *(_DWORD *)(v10 + 4 * v9) = v6; /*0x412a24*/
      }
      result = v11; /*0x412a27*/
      ++v2; /*0x412a2b*/
    }
    while ( v2 < v11 ); /*0x412a2e*/
  }
  return result; /*0x412a32*/
}



// ==== 0x00412A40  Slider::CalcPosition  this=Slider  sig=csp ====
int __stdcall Slider_CalcPosition(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  v3 = a1 / 20; /*0x412a64*/
  v4 = a2 + a1 % 20; /*0x412a66*/
  if ( v4 < 20 )
    v5 = v4 < 0 ? 0 : v4;
  else
    v5 = 19; /*0x412a73*/
  v6 = v3 + a3; /*0x412a88*/
  if ( v3 + a3 < 0 || v6 <= 19 )
    return v5 + 20 * (v6 < 0 ? 0 : v6);
  else
    return v5 + 380; /*0x412a9b*/
}



// ==== 0x00412B40  AircraftTrackerClass::FillCurrentVector  this=AircraftTrackerClass  sig=csp ====
int __thiscall AircraftTrackerClass::FillCurrentVector(int this, int a2, int a3)
{
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // esi
  int v14; // ebx
  int v15; // edi
  _DWORD *v16; // ebp
  int v17; // edi
  int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  int i; // esi
  int v23; // edi
  int v24; // ebp
  int v25; // edx
  int v26; // eax
  int v27; // esi
  __int16 v28; // ax
  int v29; // esi
  int v30; // edi
  int v31; // eax
  int v32; // esi
  int v33; // eax
  int v34; // eax
  int j; // esi
  int v36; // edi
  int v37; // ebp
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // eax
  __int16 v42; // ax
  int v43; // esi
  int v44; // edi
  int v45; // eax
  int v46; // esi
  int v47; // eax
  int v48; // eax
  int k; // esi
  int v50; // edi
  int v51; // ebp
  int v52; // ecx
  int v53; // edx
  int v54; // eax
  int v55; // eax
  int v56; // esi
  int v57; // edi
  int v58; // eax
  int v59; // esi
  int v60; // eax
  int v61; // eax
  int m; // esi
  int v63; // edi
  int v64; // ebp
  int v65; // edx
  int v66; // eax
  int v67; // esi
  int v68; // eax
  int v69; // esi
  int v70; // edx
  int v71; // eax
  int v72; // esi
  int v73; // eax
  int v74; // eax
  int v75; // edi
  int v76; // ebp
  int v77; // ebp
  int v78; // edx
  int v79; // eax
  int v80; // ecx
  int v81; // eax
  int v82; // eax
  int v83; // esi
  int v84; // ecx
  int v85; // ebx
  int v86; // edi
  int v87; // eax
  int v88; // ecx
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // ecx
  int v93; // ebp
  int v94; // edi
  char *v95; // esi
  int v96; // ebx
  int v97; // eax
  int v98; // eax
  int result; // eax
  int v100; // ebp
  int v101; // ebx
  int v102; // eax
  int v103; // eax
  int v104; // ebp
  int v105; // ebx
  int v106; // eax
  int v107; // eax
  int v109; // [esp+24h] [ebp-30h] BYREF
  int v110; // [esp+28h] [ebp-2Ch]
  int v111; // [esp+2Ch] [ebp-28h]
  int v112; // [esp+30h] [ebp-24h]
  int v113; // [esp+34h] [ebp-20h] BYREF
  int v114; // [esp+38h] [ebp-1Ch]
  int v115; // [esp+40h] [ebp-14h] BYREF
  int v116; // [esp+44h] [ebp-10h]
  _DWORD v117[3]; // [esp+48h] [ebp-Ch] BYREF
  int v118; // [esp+58h] [ebp+4h]

  if ( a3 <= 1 ) /*0x412b58*/
    a3 = 1; /*0x412b5a*/
  v4 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 72))(a2, v117); /*0x412b6e*/
  v5 = *Coord::ToCell(v4, &v115); /*0x412b78*/
  v114 = v5; /*0x412b7d*/
  if ( (v5 & 0x8000u) == 0 ) /*0x412b81*/
    v6 = (__int16)v5; /*0x412b87*/
  else
    v6 = 0; /*0x412b83*/
  if ( v114 >= 0 ) /*0x412b91*/
    v7 = SHIWORD(v114); /*0x412b97*/
  else
    v7 = 0; /*0x412b93*/
  v8 = v6; /*0x412ba7*/
  v9 = 19; /*0x412bae*/
  v10 = v8 / (dword_87F914 / 20); /*0x412bb9*/
  if ( v10 <= 19 ) /*0x412bbe*/
    v9 = v10; /*0x412bc0*/
  v11 = v7 / (dword_87F918 / 20); /*0x412bdc*/
  if ( v11 > 19 ) /*0x412be1*/
    v11 = 19; /*0x412be3*/
  v12 = v9 + 20 * v11; /*0x412beb*/
  v13 = 0; /*0x412bee*/
  v118 = v12; /*0x412bf0*/
  v14 = *(_DWORD *)(this + 24 * v12 + 16); /*0x412bf7*/
  v15 = this + 24 * v12; /*0x412bfb*/
  if ( v14 > 0 ) /*0x412c01*/
  {
    v16 = (_DWORD *)(this + 9600); /*0x412c03*/
    do /*0x412c24*/
    {
      v113 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v15 + 24))(v15, v13); /*0x412c15*/
      DynamicVector::AddItem(v16, &v113); /*0x412c1c*/
      ++v13; /*0x412c21*/
    }
    while ( v13 < v14 ); /*0x412c24*/
  }
  v109 = v114; /*0x412c2e*/
  v17 = 0; /*0x412c32*/
  v111 = 0; /*0x412c36*/
  v113 = 0; /*0x412c3d*/
  v112 = 0; /*0x412c41*/
  v110 = 0; /*0x412c45*/
  if ( (__int16)(a3 + v114) >= 0 ) /*0x412c49*/
    v18 = (__int16)(a3 + v114); /*0x412c4f*/
  else
    v18 = 0; /*0x412c4b*/
  if ( v109 >= 0 ) /*0x412c5a*/
    v17 = SHIWORD(v109); /*0x412c5c*/
  v19 = v18 / (dword_87F914 / 20); /*0x412c79*/
  v20 = 19; /*0x412c7b*/
  if ( v19 <= 19 ) /*0x412c83*/
    v20 = v19; /*0x412c85*/
  v21 = v17 / (dword_87F918 / 20); /*0x412ca1*/
  if ( v21 > 19 ) /*0x412ca6*/
    v21 = 19; /*0x412ca8*/
  for ( i = v20 + 20 * v21; i != v118; i = v27 + 20 * v25 )
  {
    v23 = 0; /*0x412cc8*/
    ++v112; /*0x412cca*/
    v24 = *(_DWORD *)(this + 24 * i + 16); /*0x412cd1*/
    if ( v24 > 0 ) /*0x412cda*/
    {
      do /*0x412cff*/
      {
        v109 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 24 * i) + 24))(this + 24 * i, v23); /*0x412ced*/
        DynamicVector::AddItem((_DWORD *)(this + 9600), &v109); /*0x412cf7*/
        ++v23; /*0x412cfc*/
      }
      while ( v23 < v24 ); /*0x412cff*/
    }
    v25 = i / 20; /*0x412d1c*/
    v26 = i % 20 - 1; /*0x412d1e*/
    if ( v26 < 20 )
      v27 = v26 < 0 ? 0 : v26;
    else
      v27 = 19; /*0x412d2a*/
    if ( v25 < 0 ) /*0x412d3f*/
    {
      v25 = 0; /*0x412d4d*/
    }
    else if ( v25 > 19 ) /*0x412d44*/
    {
      v25 = 19; /*0x412d46*/
    }
  }
  v109 = v114; /*0x412d69*/
  v28 = HIWORD(v114) - a3; /*0x412d76*/
  if ( (v114 & 0x8000u) == 0 ) /*0x412d7b*/
    v29 = (__int16)v114; /*0x412d81*/
  else
    v29 = 0; /*0x412d7d*/
  if ( v28 >= 0 ) /*0x412d87*/
    v30 = v28; /*0x412d8d*/
  else
    v30 = 0; /*0x412d89*/
  v31 = v29; /*0x412d9d*/
  v32 = 19; /*0x412da4*/
  v33 = v31 / (dword_87F914 / 20); /*0x412daf*/
  if ( v33 <= 19 ) /*0x412db4*/
    v32 = v33; /*0x412db6*/
  v34 = v30 / (dword_87F918 / 20); /*0x412dd2*/
  if ( v34 > 19 ) /*0x412dd7*/
    v34 = 19; /*0x412dd9*/
  for ( j = v32 + 20 * v34; j != v118; j = v38 + 20 * v41 )
  {
    v36 = 0; /*0x412dfc*/
    ++v111; /*0x412dfe*/
    v37 = *(_DWORD *)(this + 24 * j + 16); /*0x412e02*/
    if ( v37 > 0 ) /*0x412e0b*/
    {
      do /*0x412e30*/
      {
        v109 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 24 * j) + 24))(this + 24 * j, v36); /*0x412e19*/
        DynamicVector::AddItem((_DWORD *)(this + 9600), &v109); /*0x412e28*/
        ++v36; /*0x412e2d*/
      }
      while ( v36 < v37 ); /*0x412e30*/
    }
    v38 = j % 20; /*0x412e41*/
    v39 = j / 20; /*0x412e4d*/
    if ( j % 20 < 0 ) /*0x412e51*/
    {
      v38 = 0; /*0x412e5f*/
    }
    else if ( v38 > 19 ) /*0x412e56*/
    {
      v38 = 19; /*0x412e58*/
    }
    v40 = v39 + 1; /*0x412e61*/
    if ( v39 + 1 < 0 || v40 <= 19 )
      v41 = v40 < 0 ? 0 : v40;
    else
      v41 = 19; /*0x412e6d*/
  }
  v42 = a3 + HIWORD(v114); /*0x412e9c*/
  v109 = v114; /*0x412ea1*/
  if ( (v114 & 0x8000u) == 0 ) /*0x412ea5*/
    v43 = (__int16)v114; /*0x412eab*/
  else
    v43 = 0; /*0x412ea7*/
  if ( v42 >= 0 ) /*0x412eb1*/
    v44 = v42; /*0x412eb7*/
  else
    v44 = 0; /*0x412eb3*/
  v45 = v43; /*0x412ec7*/
  v46 = 19; /*0x412ece*/
  v47 = v45 / (dword_87F914 / 20); /*0x412ed9*/
  if ( v47 <= 19 ) /*0x412ede*/
    v46 = v47; /*0x412ee0*/
  v48 = v44 / (dword_87F918 / 20); /*0x412efc*/
  if ( v48 > 19 ) /*0x412f01*/
    v48 = 19; /*0x412f03*/
  for ( k = v46 + 20 * v48; k != v118; k = v52 + 20 * v55 )
  {
    v50 = 0; /*0x412f26*/
    ++v113; /*0x412f28*/
    v51 = *(_DWORD *)(this + 24 * k + 16); /*0x412f2c*/
    if ( v51 > 0 ) /*0x412f35*/
    {
      do /*0x412f5a*/
      {
        v109 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 24 * k) + 24))(this + 24 * k, v50); /*0x412f43*/
        DynamicVector::AddItem((_DWORD *)(this + 9600), &v109); /*0x412f52*/
        ++v50; /*0x412f57*/
      }
      while ( v50 < v51 ); /*0x412f5a*/
    }
    v52 = k % 20; /*0x412f6b*/
    v53 = k / 20; /*0x412f77*/
    if ( k % 20 < 0 ) /*0x412f7b*/
    {
      v52 = 0; /*0x412f89*/
    }
    else if ( v52 > 19 ) /*0x412f80*/
    {
      v52 = 19; /*0x412f82*/
    }
    v54 = v53 - 1; /*0x412f8b*/
    if ( v53 - 1 < 0 || v54 <= 19 )
      v55 = v54 < 0 ? 0 : v54;
    else
      v55 = 19; /*0x412f97*/
  }
  v109 = v114; /*0x412fc2*/
  if ( (__int16)(v114 - a3) >= 0 ) /*0x412fcb*/
    v56 = (__int16)(v114 - a3); /*0x412fd1*/
  else
    v56 = 0; /*0x412fcd*/
  if ( v109 >= 0 ) /*0x412fdc*/
    v57 = SHIWORD(v109); /*0x412fe2*/
  else
    v57 = 0; /*0x412fde*/
  v58 = v56; /*0x412ff2*/
  v59 = 19; /*0x412ff9*/
  v60 = v58 / (dword_87F914 / 20); /*0x413004*/
  if ( v60 <= 19 ) /*0x413009*/
    v59 = v60; /*0x41300b*/
  v61 = v57 / (dword_87F918 / 20); /*0x413027*/
  if ( v61 > 19 ) /*0x41302c*/
    v61 = 19; /*0x41302e*/
  for ( m = v59 + 20 * v61; m != v118; m = v67 + 20 * v65 )
  {
    v63 = 0; /*0x413051*/
    ++v110; /*0x413053*/
    v64 = *(_DWORD *)(this + 24 * m + 16); /*0x413057*/
    if ( v64 > 0 ) /*0x413060*/
    {
      do /*0x413085*/
      {
        a3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 24 * m) + 24))(this + 24 * m, v63); /*0x41306e*/
        DynamicVector::AddItem((_DWORD *)(this + 9600), &a3); /*0x41307d*/
        ++v63; /*0x413082*/
      }
      while ( v63 < v64 ); /*0x413085*/
    }
    v65 = m / 20; /*0x4130a2*/
    v66 = m % 20 + 1; /*0x4130a4*/
    if ( v66 < 20 )
      v67 = v66 < 0 ? 0 : v66;
    else
      v67 = 19; /*0x4130b0*/
    if ( v65 < 0 ) /*0x4130c5*/
    {
      v65 = 0; /*0x4130d3*/
    }
    else if ( v65 > 19 ) /*0x4130ca*/
    {
      v65 = 19; /*0x4130cc*/
    }
  }
  if ( v111 )
  {
    v68 = v110; /*0x4130f3*/
    if ( v110 )
    {
      if ( v111 < v110 ) /*0x413105*/
        v68 = v111; /*0x413107*/
      v69 = v118; /*0x413109*/
      if ( v68 > 0 )
      {
        a3 = v68; /*0x413115*/
        do
        {
          v70 = v69 / 20; /*0x413134*/
          v71 = v69 % 20 - 1; /*0x413136*/
          if ( v71 < 20 )
            v72 = v71 < 0 ? 0 : v71;
          else
            v72 = 19; /*0x413142*/
          v73 = v70 - 1; /*0x413155*/
          if ( v70 - 1 < 0 || v73 <= 19 )
            v74 = v73 < 0 ? 0 : v73;
          else
            v74 = 19; /*0x413161*/
          v75 = 0; /*0x413179*/
          v69 = v72 + 20 * v74; /*0x41317b*/
          v76 = *(_DWORD *)(this + 24 * v69 + 16); /*0x413181*/
          if ( v76 > 0 ) /*0x41318a*/
          {
            do /*0x4131af*/
            {
              v109 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 24 * v69) + 24))(this + 24 * v69, v75); /*0x41319d*/
              DynamicVector::AddItem((_DWORD *)(this + 9600), &v109); /*0x4131a7*/
              ++v75; /*0x4131ac*/
            }
            while ( v75 < v76 ); /*0x4131af*/
          }
          --a3; /*0x4131b6*/
        }
        while ( a3 );
      }
      if ( v111 >= 2 && v110 >= 2 )
      {
        v77 = v118 % 20; /*0x4131ee*/
        v109 = v118 % 20; /*0x4131f7*/
        v78 = v118 / 20; /*0x4131fe*/
        v79 = v118 % 20 - 2; /*0x413200*/
        v114 = v118 / 20; /*0x413205*/
        if ( v79 < 20 )
          v80 = v79 < 0 ? 0 : v79;
        else
          v80 = 19; /*0x413210*/
        v81 = v78 - 1; /*0x413221*/
        if ( v78 - 1 < 0 || v81 <= 19 )
          v82 = v81 < 0 ? 0 : v81;
        else
          v82 = 19; /*0x41322d*/
        v83 = 0; /*0x413241*/
        v84 = 3 * (v80 + 20 * v82); /*0x413246*/
        v85 = *(_DWORD *)(this + 8 * v84 + 16); /*0x41324d*/
        v86 = this + 8 * v84; /*0x413251*/
        if ( v85 > 0 ) /*0x413256*/
        {
          do /*0x41327b*/
          {
            a3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v86 + 24))(v86, v83); /*0x413268*/
            DynamicVector::AddItem((_DWORD *)(this + 9600), &a3); /*0x413273*/
            ++v83; /*0x413278*/
          }
          while ( v83 < v85 ); /*0x41327b*/
          v77 = v109; /*0x41327d*/
          v78 = v114; /*0x413281*/
        }
        v87 = v77 - 1; /*0x413285*/
        if ( v77 - 1 < 0 || v87 <= 19 )
          v88 = v87 < 0 ? 0 : v87;
        else
          v88 = 19; /*0x413291*/
        v89 = v78 - 2; /*0x4132a2*/
        if ( v78 - 2 < 0 || v89 <= 19 )
          v90 = v89 < 0 ? 0 : v89;
        else
          v90 = 19; /*0x4132ae*/
        DynamicArray::AddFromList((char *)this, v88 + 20 * v90); /*0x4132ca*/
      }
    }
  }
  v91 = v113; /*0x4132cf*/
  if ( v113 && (v92 = v110) != 0 ) /*0x4132e1*/
  {
    v93 = v113; /*0x4132e5*/
    if ( v113 >= v110 ) /*0x4132e7*/
      v93 = v110; /*0x4132e9*/
    v94 = v118; /*0x4132eb*/
    v95 = (char *)this; /*0x4132ef*/
    v96 = v118; /*0x4132f5*/
    if ( v93 > 0 ) /*0x4132f7*/
    {
      do /*0x413316*/
      {
        v96 = Slider::CalcPosition(v96, -1, 1); /*0x41330b*/
        DynamicArray::AddFromList((char *)this, v96); /*0x413310*/
        --v93; /*0x413315*/
      }
      while ( v93 ); /*0x413316*/
      v91 = v113; /*0x413318*/
      v92 = v110; /*0x41331c*/
    }
    if ( v91 >= 2 && v92 >= 2 ) /*0x413328*/
    {
      v97 = Slider::CalcPosition(v118, -2, 1); /*0x413339*/
      DynamicArray::AddFromList((char *)this, v97); /*0x413341*/
      v98 = Slider::CalcPosition(v118, -1, 2); /*0x413353*/
      DynamicArray::AddFromList((char *)this, v98); /*0x41335b*/
    }
  }
  else
  {
    v95 = (char *)this; /*0x413362*/
    v94 = v118; /*0x413366*/
  }
  result = v111; /*0x41336a*/
  if ( v111 ) /*0x413370*/
  {
    v100 = v112; /*0x413372*/
    if ( v112 ) /*0x413378*/
    {
      if ( v111 < v112 ) /*0x41337c*/
        v100 = v111; /*0x41337e*/
      v101 = v94; /*0x413382*/
      if ( v100 > 0 ) /*0x413384*/
      {
        do /*0x4133a3*/
        {
          v101 = Slider::CalcPosition(v101, 1, -1); /*0x413398*/
          DynamicArray::AddFromList(v95, v101); /*0x41339d*/
          --v100; /*0x4133a2*/
        }
        while ( v100 ); /*0x4133a3*/
        result = v111; /*0x4133a5*/
      }
      if ( result >= 2 && v112 >= 2 ) /*0x4133b3*/
      {
        v102 = Slider::CalcPosition(v94, 2, -1); /*0x4133c2*/
        DynamicArray::AddFromList(v95, v102); /*0x4133ca*/
        v103 = Slider::CalcPosition(v94, 1, -2); /*0x4133de*/
        result = DynamicArray::AddFromList(v95, v103); /*0x4133e6*/
      }
    }
  }
  v104 = v113; /*0x4133eb*/
  if ( v113 ) /*0x4133f1*/
  {
    result = v112; /*0x4133f7*/
    if ( v112 ) /*0x4133fd*/
    {
      if ( v113 >= v112 ) /*0x413401*/
        v104 = v112; /*0x413403*/
      v105 = v94; /*0x413407*/
      if ( v104 > 0 ) /*0x413409*/
      {
        v116 = 1; /*0x41340b*/
        do /*0x413431*/
        {
          v105 = Slider::CalcPosition(v105, 1, v116); /*0x413426*/
          DynamicArray::AddFromList(v95, v105); /*0x41342b*/
          --v104; /*0x413430*/
        }
        while ( v104 ); /*0x413431*/
        result = v112; /*0x413433*/
      }
      if ( v113 >= 2 && result >= 2 ) /*0x413441*/
      {
        v106 = Slider::CalcPosition(v94, 2, 1); /*0x413452*/
        DynamicArray::AddFromList(v95, v106); /*0x41345a*/
        v107 = Slider::CalcPosition(v94, 1, 2); /*0x41346e*/
        return DynamicArray::AddFromList(v95, v107); /*0x413476*/
      }
    }
  }
  return result; /*0x41347b*/
}



// ==== 0x00413490  nullsub_3  this=-  sig=csp ====
void __stdcall nullsub_3(int a1)
{
  ; /*0x413490*/
}



// ==== 0x004134A0  GadgetGrid::InsertItem  this=GadgetGrid  sig=csp ====
int __thiscall GadgetGrid::InsertItem(GadgetGrid *this, int a2)
{
  int *v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int result; // eax
  GadgetGrid *v12; // esi
  int v13; // ecx
  int GadgetGrid_field_0x04; // edx
  char v15[4]; // [esp+Ch] [ebp-4h] BYREF
  int v16; // [esp+14h] [ebp+4h]

  v4 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 440))(a2, v15); /*0x4134b3*/
  v5 = *v4; /*0x4134b9*/
  v16 = *v4; /*0x4134c0*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 760))(a2, *v4); /*0x4134c4*/
  if ( (v5 & 0x8000u) == 0 ) /*0x4134cd*/
    v5 = (__int16)v5; /*0x4134d3*/
  else
    v5 = 0; /*0x4134cf*/
  if ( v16 >= 0 ) /*0x4134df*/
    v6 = SHIWORD(v16); /*0x4134e5*/
  else
    v6 = 0; /*0x4134e1*/
  v7 = v5 / (*(_DWORD *)&stru_87F5F0.__pad_58[716] / 20); /*0x413504*/
  v8 = 19; /*0x413506*/
  if ( v7 <= 19 ) /*0x41350e*/
    v8 = v7; /*0x413510*/
  v9 = v6 / (*(_DWORD *)&stru_87F5F0.__pad_58[720] / 20); /*0x41352f*/
  if ( v9 > 19 ) /*0x413534*/
    v9 = 19; /*0x413536*/
  v10 = 3 * (v8 + 20 * v9); /*0x413541*/
  result = *((_DWORD *)this + 120 * v9 + 6 * v8 + 2); /*0x413544*/
  v12 = this + v10; /*0x413548*/
  if ( *(_DWORD *)v12[2].__pad_0 < result /*0x413574*/
    || (BYTE1(v12[1].GadgetGrid_field_0x04) || !result)
    && (v13 = v12[2].GadgetGrid_field_0x04, v13 > 0)
    && (result = (*(int (__thiscall **)(GadgetGrid *, int, _DWORD))(*(_DWORD *)v12->__pad_0 + 8))(v12, result + v13, 0),
        (_BYTE)result) )
  {
    result = *(_DWORD *)v12[2].__pad_0; /*0x413576*/
    GadgetGrid_field_0x04 = v12->GadgetGrid_field_0x04; /*0x413579*/
    *(_DWORD *)v12[2].__pad_0 = result + 1; /*0x41357f*/
    *(_DWORD *)(GadgetGrid_field_0x04 + 4 * result) = a2; /*0x413582*/
  }
  return result; /*0x413585*/
}



// ==== 0x00413590  sub_413590  this=-  sig=ida-proto ====
int sub_413590()
{
  return 750; /*0x413595*/
}



// ==== 0x004135A0  ObjectClass::HasLinkedObject  this=ObjectClass  sig=csp ====
int __stdcall ObjectClass::HasLinkedObject(int a1)
{
  int result; // eax

  result = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1) + 224); /*0x4135af*/
  LOBYTE(result) = result && result != a1; /*0x4135c3*/
  return result; /*0x4135bf*/
}



// ==== 0x004135D0  GadgetGrid::RemoveItem  this=GadgetGrid  sig=csp ====
int __thiscall GadgetGrid::RemoveItem(GadgetGrid *this, int a2)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // edx
  GadgetGrid *v9; // esi
  int result; // eax
  int v11; // ecx
  int v12; // ecx
  __int16 v13; // [esp+Ah] [ebp-6h]
  char v14[4]; // [esp+Ch] [ebp-4h] BYREF

  v3 = *(_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 756))(a2, v14); /*0x4135ec*/
  v13 = HIWORD(v3); /*0x4135f4*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 760))(a2, dword_887850); /*0x4135fb*/
  if ( (v3 & 0x8000u) == 0 ) /*0x413604*/
    v3 = (__int16)v3; /*0x41360a*/
  else
    v3 = 0; /*0x413606*/
  if ( v13 >= 0 ) /*0x413616*/
    v4 = v13; /*0x41361c*/
  else
    v4 = 0; /*0x413618*/
  v5 = v3 / (*(_DWORD *)&stru_87F5F0.__pad_58[716] / 20); /*0x41363b*/
  v6 = 19; /*0x41363d*/
  if ( v5 <= 19 ) /*0x413645*/
    v6 = v5; /*0x413647*/
  v7 = v4 / (*(_DWORD *)&stru_87F5F0.__pad_58[720] / 20); /*0x413666*/
  if ( v7 > 19 ) /*0x41366b*/
    v7 = 19; /*0x41366d*/
  v8 = *(_DWORD *)&this->__pad_0[480 * v7 + 24 * v6]; /*0x413680*/
  v9 = this + 60 * v7 + 3 * v6; /*0x413683*/
  result = (*(int (__thiscall **)(GadgetGrid *, int *))(v8 + 16))(v9, &a2); /*0x413688*/
  if ( result != -1 ) /*0x41368e*/
  {
    v11 = *(_DWORD *)v9[2].__pad_0; /*0x413690*/
    if ( result < v11 ) /*0x413695*/
    {
      v12 = v11 - 1; /*0x413697*/
      for ( *(_DWORD *)v9[2].__pad_0 = v12; /*0x41369d*/
            result < *(_DWORD *)v9[2].__pad_0;
            *(_DWORD *)(v9->GadgetGrid_field_0x04 + 4 * result - 4) = *(_DWORD *)(v9->GadgetGrid_field_0x04 + 4 * result) )
      {
        ++result; /*0x4136a2*/
      }
    }
  }
  return result; /*0x4136b1*/
}



// ==== 0x004136C0  LoadGame::LoadIteratedData  this=LoadGame  sig=csp ====
int __thiscall sub_4136C0(char *this, int a2)
{
  int v2; // ebx
  char *i; // esi
  int result; // eax
  int v5; // eax
  int v6; // edi
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // [esp+28h] [ebp-8h]
  int v13; // [esp+2Ch] [ebp-4h] BYREF

  v2 = a2; /*0x4136c4*/
  v12 = 0; /*0x4136cb*/
  for ( i = this + 8; ; i += 24 ) /*0x4136d3*/
  {
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0); /*0x4136e2*/
    if ( result < 0 ) /*0x4136e7*/
      break; /*0x4136e7*/
    v5 = a2; /*0x4136ed*/
    v6 = 0; /*0x4136f1*/
    if ( a2 > 0 ) /*0x4136f5*/
    {
      do /*0x413703*/
      {
        result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v13, 4, 0); /*0x413703*/
        if ( result < 0 ) /*0x413708*/
          return result; /*0x413708*/
        v7 = *(_DWORD *)i; /*0x41370e*/
        if ( *((_DWORD *)i + 2) < *(_DWORD *)i /*0x413734*/
          || (i[5] || !v7)
          && (v8 = *((_DWORD *)i + 3), v8 > 0)
          && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)i - 2) + 8))(i - 8, v7 + v8, 0) )
        {
          v9 = *((_DWORD *)i + 2); /*0x41373b*/
          v10 = *((_DWORD *)i - 1); /*0x41373e*/
          *((_DWORD *)i + 2) = v9 + 1; /*0x413744*/
          *(_DWORD *)(v10 + 4 * v9) = v13; /*0x41374b*/
        }
        v5 = a2; /*0x41374e*/
      }
      while ( ++v6 < a2 ); /*0x413703*/
    }
    v11 = 0; /*0x413757*/
    if ( v5 > 0 ) /*0x41375b*/
    {
      do /*0x413775*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*((_DWORD *)i - 1) + 4 * v11++)); /*0x413769*/
      while ( v11 < a2 ); /*0x413775*/
    }
    if ( ++v12 >= 400 ) /*0x413788*/
      return 0; /*0x41378e*/
  }
  return result; /*0x413790*/
}



// ==== 0x004137A0  VectorClass::RemoveObjectById  this=VectorClass  sig=csp ====
int __thiscall VectorClass::RemoveObjectById(VectorClass *this)
{
  VectorClass *v2; // esi
  int v3; // eax
  int v4; // eax
  char *ptr_0; // ecx
  char *v6; // ecx
  VectorClass *v7; // [esp+4h] [ebp-4h] BYREF

  v7 = this; /*0x4137a0*/
  if ( !*((_DWORD *)this + 2404) ) /*0x4137a1*/
    return 0; /*0x4137ab*/
  v2 = this + 600; /*0x4137b6*/
  v3 = *((_DWORD *)this + 2400); /*0x4137c3*/
  v7 = (VectorClass *)**((_DWORD **)this + 2401); /*0x4137c7*/
  v4 = (*(int (__thiscall **)(VectorClass *, VectorClass **))(v3 + 16))(this + 600, &v7); /*0x4137cb*/
  if ( v4 != -1 ) /*0x4137d1*/
  {
    ptr_0 = (char *)v2[1].ptr_0; /*0x4137d3*/
    if ( v4 < (int)ptr_0 ) /*0x4137d8*/
    {
      v6 = ptr_0 - 1; /*0x4137da*/
      for ( v2[1].ptr_0 = v6; v4 < (int)v2[1].ptr_0; *((_DWORD *)v2->Items + v4 - 1) = *((_DWORD *)v2->Items + v4) ) /*0x4137e0*/
        ++v4; /*0x4137e5*/
    }
  }
  return (int)v7; /*0x4137ae*/
}



// ==== 0x00413800  LoadGame::ClearAllSlots  this=LoadGame  sig=csp ====
int __thiscall LoadGame::ClearAllSlots(LoadGame *this)
{
  LoadGame *v2; // esi
  int v3; // ebx
  int LoadGame_field_0x08; // edi
  int v5; // edi

  v2 = this; /*0x413806*/
  v3 = 400; /*0x413808*/
  do /*0x413825*/
  {
    LoadGame_field_0x08 = v2->LoadGame_field_0x08; /*0x41380f*/
    (*(void (__thiscall **)(LoadGame *))(*(_DWORD *)v2->__pad_0 + 12))(v2); /*0x413814*/
    (*(void (__thiscall **)(LoadGame *, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 8))(v2, LoadGame_field_0x08, 0); /*0x41381e*/
    v2 = (LoadGame *)((char *)v2 + 24); /*0x413821*/
    --v3; /*0x413824*/
  }
  while ( v3 ); /*0x413825*/
  v5 = *((_DWORD *)this + 2402); /*0x41382d*/
  (*(void (__thiscall **)(LoadGame *))(*((_DWORD *)this + 2400) + 12))(this + 200); /*0x41383b*/
  return (*(int (__thiscall **)(LoadGame *, int, _DWORD))(*((_DWORD *)this + 2400) + 8))(this + 200, v5, 0); /*0x413848*/
}



// ==== 0x00413850  SaveGame::SaveIteratedData  this=SaveGame  sig=csp ====
int __thiscall SaveGame::SaveIteratedData(SaveGame *this, int a2)
{
  int v2; // esi
  int v3; // ebp
  char *i; // edi
  int v5; // ecx
  int result; // eax
  int v7; // ebx

  v2 = a2; /*0x413853*/
  v3 = 0; /*0x413858*/
  for ( i = &this->__pad_0[4]; ; i += 24 ) /*0x41385a*/
  {
    v5 = *(_DWORD *)v2; /*0x413860*/
    a2 = *((_DWORD *)i + 3); /*0x41386c*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v5 + 16))(v2, &a2, 4, 0); /*0x413870*/
    if ( result < 0 ) /*0x413875*/
      break; /*0x413875*/
    v7 = 0; /*0x41387b*/
    if ( a2 > 0 ) /*0x41387f*/
    {
      do /*0x41388e*/
      {
        result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, *(_DWORD *)i + 4 * v7, 4, 0); /*0x41388e*/
        if ( result < 0 ) /*0x413893*/
          return result; /*0x413893*/
      }
      while ( ++v7 < a2 ); /*0x41388e*/
    }
    if ( ++v3 >= 400 ) /*0x4138a8*/
      return 0; /*0x4138aa*/
  }
  return result; /*0x4138ac*/
}



// ==== 0x004138C0  Coord::ToGridIndex  this=Coord  sig=csp ====
int __thiscall Coord::ToGridIndex(char *this, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int result; // eax
  int v16; // edi
  char *v17; // esi
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  char *v21; // esi
  int v22; // ecx
  int v23; // edx

  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 760))(a2, a4); /*0x4138d4*/
  if ( (a3 & 0x8000u) == 0 ) /*0x4138e1*/
    v4 = (__int16)a3; /*0x4138e7*/
  else
    v4 = 0; /*0x4138e3*/
  if ( a3 >= 0 ) /*0x4138f2*/
    v5 = SHIWORD(a3); /*0x4138f8*/
  else
    v5 = 0; /*0x4138f4*/
  v6 = 19; /*0x41390d*/
  if ( v4 / (*(_DWORD *)&stru_87F5F0.__pad_58[716] / 20) <= 19 ) /*0x413921*/
    v6 = v4 / (*(_DWORD *)&stru_87F5F0.__pad_58[716] / 20); /*0x413923*/
  v7 = *(_DWORD *)&stru_87F5F0.__pad_58[720] / 20; /*0x41393e*/
  v8 = v5 / (*(_DWORD *)&stru_87F5F0.__pad_58[720] / 20); /*0x413941*/
  if ( v8 > 19 ) /*0x413946*/
    v8 = 19; /*0x413948*/
  v9 = v6 + 20 * v8; /*0x413957*/
  if ( (a4 & 0x8000u) == 0 ) /*0x41395a*/
    v10 = (__int16)a4; /*0x413960*/
  else
    v10 = 0; /*0x41395c*/
  if ( a4 >= 0 ) /*0x41396b*/
    v11 = SHIWORD(a4); /*0x413971*/
  else
    v11 = 0; /*0x41396d*/
  v12 = v10 / (*(_DWORD *)&stru_87F5F0.__pad_58[716] / 20); /*0x413975*/
  v13 = 19; /*0x413977*/
  if ( v12 <= 19 ) /*0x41397f*/
    v13 = v12; /*0x413981*/
  v14 = v11 / v7; /*0x413986*/
  if ( v11 / v7 > 19 ) /*0x41398b*/
    v14 = 19; /*0x41398d*/
  result = 5 * v14; /*0x413992*/
  v16 = v13 + 4 * result; /*0x413995*/
  if ( v9 != v16 ) /*0x41399a*/
  {
    v17 = this + 24 * v9; /*0x4139ae*/
    v18 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)v17 + 16))(v17, &a2); /*0x4139b4*/
    if ( v18 != -1 ) /*0x4139ba*/
    {
      v19 = *((_DWORD *)v17 + 4); /*0x4139bc*/
      if ( v18 < v19 ) /*0x4139c1*/
      {
        v20 = v19 - 1; /*0x4139c3*/
        for ( *((_DWORD *)v17 + 4) = v20; /*0x4139c9*/
              v18 < *((_DWORD *)v17 + 4);
              *(_DWORD *)(*((_DWORD *)v17 + 1) + 4 * v18 - 4) = *(_DWORD *)(*((_DWORD *)v17 + 1) + 4 * v18) )
        {
          ++v18; /*0x4139ce*/
        }
      }
    }
    v21 = this + 24 * v16; /*0x4139e4*/
    result = *((_DWORD *)v21 + 2); /*0x4139e7*/
    if ( *((_DWORD *)v21 + 4) < result /*0x413a0f*/
      || (v21[13] || !result)
      && (v22 = *((_DWORD *)v21 + 5), v22 > 0)
      && (result = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v21 + 8))(this + 24 * v16, result + v22, 0),
          (_BYTE)result) )
    {
      result = *((_DWORD *)v21 + 4); /*0x413a11*/
      v23 = *((_DWORD *)v21 + 1); /*0x413a14*/
      *((_DWORD *)v21 + 4) = result + 1; /*0x413a1a*/
      *(_DWORD *)(v23 + 4 * result) = a2; /*0x413a21*/
    }
  }
  return result; /*0x413a24*/
}



// ==== 0x00413A30  Coord::ToCell  this=Coord  sig=csp ====
_DWORD *__thiscall Coord::ToCell(Coord *this, _DWORD *a2)
{
  int v3; // [esp+0h] [ebp-4h]

  LOWORD(v3) = *(_DWORD *)this->__pad_0 / 256; /*0x413a3f*/
  HIWORD(v3) = *(_DWORD *)&this->Coord_field_0x2[2] / 256; /*0x413a53*/
  *a2 = v3; /*0x413a60*/
  return a2; /*0x413a63*/
}



// ==== 0x00413A70  DynamicVector::AddItem  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::AddItem(DynamicVector *this, _DWORD *a2)
{
  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x413a73*/
  result = (int)this->DynamicVector_field_0x10; /*0x413a76*/
  if ( result < DynamicVector_field_0x8 /*0x413a9d*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(_DWORD *)this->__pad_14, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x413aa5*/
    v5 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x413aa8*/
    this->DynamicVector_field_0x10 = (void *)(result + 1); /*0x413aae*/
    *(_DWORD *)(v5 + 4 * result) = *a2; /*0x413ab8*/
    LOBYTE(result) = 1; /*0x413abb*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x413a9f*/
  }
  return result; /*0x413aa1*/
}



// ==== 0x00413AC0  sub_413AC0  this=-  sig=ida-proto ====
void sub_413AC0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x413acc*/
  dbl_889E70 = Math::Sqrt(v0 + v0); /*0x413ade*/
}



// ==== 0x00413AF0  sub_413AF0  this=-  sig=ida-proto ====
void sub_413AF0()
{
  dbl_889EC0 = dbl_889E70 / 60.0; /*0x413afc*/
}



// ==== 0x00413B10  sub_413B10  this=-  sig=ida-proto ====
void sub_413B10()
{
  dbl_889EA8 = 1.0 / dbl_889EC0; /*0x413b1c*/
}



// ==== 0x00413B30  sub_413B30  this=-  sig=ida-proto ====
void sub_413B30()
{
  dbl_889EA0 = 0.0174532925199433 * 45.0; /*0x413b3c*/
}



// ==== 0x00413B50  sub_413B50  this=-  sig=ida-proto ====
void sub_413B50()
{
  dbl_889E78 = 0.0174532925199433 * 60.0; /*0x413b5c*/
}



// ==== 0x00413B70  sub_413B70  this=-  sig=ida-proto ====
void sub_413B70()
{
  dbl_889E50 = 0.0174532925199433 * 90.0; /*0x413b7c*/
}



// ==== 0x00413B90  sub_413B90  this=-  sig=ida-proto ====
__int64 sub_413B90()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_889E50 - dbl_889E78); /*0x413ba2*/
  result = Math::RoundToInt(v0 * dbl_889E70 * 0.5); /*0x413bb6*/
  dword_889EC8 = result; /*0x413bbb*/
  return result; /*0x413bc0*/
}



// ==== 0x00413BD0  sub_413BD0  this=-  sig=ida-proto ====
void sub_413BD0()
{
  dbl_889E80 = Math::ArcTan((double)dword_889EC8 * 0.00390625); /*0x413be7*/
}



// ==== 0x00413C00  sub_413C00  this=-  sig=ida-proto ====
void sub_413C00()
{
  dbl_889E98 = Math::ArcTan((double)(2 * dword_889EC8) / dbl_889E70); /*0x413c22*/
}



// ==== 0x00413C30  sub_413C30  this=-  sig=ida-proto ====
__int64 sub_413C30()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_889EC8) + 0.5); /*0x413c4b*/
  dword_889EBC = result; /*0x413c50*/
  return result; /*0x413c56*/
}



// ==== 0x00413C60  sub_413C60  this=-  sig=ida-proto ====
int sub_413C60()
{
  g_AircraftStatusFlag = 0; /*0x413c62*/
  return 0; /*0x413c6e*/
}



// ==== 0x00413C70  sub_413C70  this=-  sig=ida-proto ====
int sub_413C70()
{
  dword_889E88 = 0; /*0x413c72*/
  dword_889E8C = 0; /*0x413c77*/
  dword_889E90 = 0; /*0x413c7c*/
  return 0; /*0x413c81*/
}



// ==== 0x00413C90  sub_413C90  this=-  sig=ida-proto ====
int sub_413C90()
{
  dword_889EB8 = 0; /*0x413c95*/
  dword_889EB0 = 128; /*0x413c9f*/
  dword_889EB4 = 128; /*0x413ca4*/
  return 128; /*0x413ca9*/
}



// ==== 0x00413CB0  sub_413CB0  this=-  sig=ida-proto ====
int sub_413CB0()
{
  dword_889E58 = 0; /*0x413cb2*/
  dword_889E5C = 0; /*0x413cb7*/
  dword_889E60 = 0; /*0x413cbc*/
  dword_889E64 = 0; /*0x413cc1*/
  return 0; /*0x413cc6*/
}



// ==== 0x00413CD0  sub_413CD0  this=JumpjetLocomotionClass  sig=ida-proto ====
bool __fastcall sub_413CD0(int a1)
{
  int v2; // eax

  if ( !a1 ) /*0x413cd5*/
    return 0; /*0x413cd7*/
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 15 ? a1 : 0;
  if ( !v2 ) /*0x413ced*/
    return 0; /*0x413cef*/
  if ( *(_BYTE *)(*(_DWORD *)(v2 + 1728) + 3777) ) /*0x413cf9*/
    return *(_BYTE *)(v2 + 1753) == 0; /*0x413d10*/
  return 0; /*0x413cd9*/
}



// ==== 0x00413D20  AircraftClass::Construct  this=AircraftClass  sig=csp ====
int __userpurge AircraftClass::Construct@<eax>(int this@<ecx>, int a2@<edi>, int a3, IUnknown *ppv)
{
  int v5; // eax
  int *v6; // edi
  const IID *v7; // ebx
  int v8; // eax
  int v9; // eax
  int ptr_8; // ebp
  _DWORD *v11; // edi
  int i; // eax
  _DWORD *v13; // edx
  AircraftClass *v15; // [esp+10h] [ebp-10h]

  FootClass::Construct((FootClass *)this, (int)ppv); /*0x413d2b*/
  *(_DWORD *)(this + 1732) = a3; /*0x413d3a*/
  *(_BYTE *)(this + 1736) = 0; /*0x413d40*/
  *(_BYTE *)(this + 1737) = 0; /*0x413d47*/
  *(_BYTE *)(this + 1738) = 0; /*0x413d4e*/
  *(_DWORD *)(this + 1740) = 0; /*0x413d55*/
  *(_BYTE *)(this + 1744) = 0; /*0x413d5f*/
  *(_BYTE *)(this + 1745) = 0; /*0x413d66*/
  *(_BYTE *)(this + 1746) = 0; /*0x413d6d*/
  *(_BYTE *)(this + 1747) = 5; /*0x413d74*/
  *(_BYTE *)(this + 1748) = 1; /*0x413d7b*/
  *(_BYTE *)(this + 1749) = 1; /*0x413d81*/
  *(_DWORD *)this = &AircraftClass::`vftable'; /*0x413d87*/
  *(_DWORD *)(this + 4) = &AircraftClass::`vftable'; /*0x413d8d*/
  *(_DWORD *)(this + 8) = &AircraftClass::`vftable'; /*0x413d94*/
  *(_DWORD *)(this + 12) = &AircraftClass::`vftable'; /*0x413d9b*/
  *(_DWORD *)(this + 1728) = &AircraftClass::`vftable'; /*0x413da2*/
  AbstractClass::GenerateUniqueID((AbstractClass *)(this + 4)); /*0x413dac*/
  v5 = *(_DWORD *)(this + 1732); /*0x413db1*/
  if ( v5 ) /*0x413db9*/
  {
    v6 = (int *)(this + 1652); /*0x413dbb*/
    v7 = (const IID *)(v5 + 844); /*0x413dc1*/
    v8 = *(_DWORD *)(this + 1652); /*0x413dc7*/
    if ( v8 ) /*0x413dcb*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v8 + 8))(*(_DWORD *)(this + 1652)); /*0x413dd0*/
    if ( CoCreateInstance(v7, 0, 7u, &riid, (LPVOID *)&ppv) >= 0 ) /*0x413dea*/
    {
      if ( OleRun(ppv) >= 0 ) /*0x413df9*/
        (*(void (__stdcall **)(IUnknown *, IID *, int))ppv->field_0)(ppv, &stru_817BB0, this + 1652); /*0x413e08*/
      (*(void (__stdcall **)(IUnknown *))(ppv->field_0 + 8))(ppv); /*0x413e11*/
    }
    if ( !*v6 ) /*0x413e14*/
      WinAPI::Wrapper(-2147467261); /*0x413e1e*/
    a2 = *v6; /*0x413e23*/
    (*(void (__stdcall **)(int, int))(*(_DWORD *)a2 + 12))(a2, this); /*0x413e29*/
  }
  AircraftClass::Update(v15, a2); /*0x413e2e*/
  if ( dword_A8E3A0 < dword_A8E398 /*0x413e69*/
    || (byte_A8E39D || !dword_A8E398)
    && dword_A8E3A4 > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E390 + 8))(
         &dword_A8E390,
         dword_A8E398 + dword_A8E3A4,
         0) )
  {
    v9 = dword_A8E3A0++; /*0x413e76*/
    *((_DWORD *)dword_A8E394 + v9) = this; /*0x413e85*/
  }
  ppv = (IUnknown *)AbstractClass::GetVtable3((AbstractClass *)(this + 4)); /*0x413e94*/
  if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x413ea0*/
    goto LABEL_25; /*0x413ea0*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x413ea8*/
  {
    ptr_8 = (int)g_BuildingLoadQueue_Array.?; /*0x413eb1*/
    if ( (int)g_BuildingLoadQueue_Array.? < 0 ) /*0x413eb5*/
      return this; /*0x413eb5*/
  }
  else
  {
    ptr_8 = 10; /*0x413eaa*/
  }
  v11 = (_DWORD *)__2_YAPAXI_Z(8 * ((int)g_BuildingLoadQueue_Array.? + ptr_8)); /*0x413ecb*/
  if ( v11 ) /*0x413ed2*/
  {
    for ( i = 0; i < (int)g_BuildingLoadQueue_Array.?; v11[2 * i - 1] = v13[1] ) /*0x413ee7*/
    {
      v13 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * i++; /*0x413eef*/
      v11[2 * i - 2] = *v13; /*0x413ef5*/
    }
    __3_YAXPAX_Z(g_BuildingLoadQueue_Array.TechnoTypeClass); /*0x413f10*/
    g_BuildingLoadQueue_Array.TechnoTypeClass = v11; /*0x413f1f*/
    g_BuildingLoadQueue_Array.? = (char *)g_BuildingLoadQueue_Array.? + ptr_8; /*0x413f25*/
    g_BuildingLoadQueue_Array.? = 0; /*0x413f2a*/
LABEL_25:
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = ppv; /*0x413f34*/
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = this; /*0x413f52*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x413f5c*/
    ++g_BuildingLoadQueue_Array.?; /*0x413f63*/
  }
  return this; /*0x413f6a*/
}



// ==== 0x00413F80  AircraftClass::Update  this=AircraftClass  sig=csp ====
_DWORD *__usercall AircraftClass::Update@<eax>(AircraftClass *this, int a2@<edi>)
{
  int *v2; // ecx
  int *v3; // esi
  _DWORD *result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  _DWORD *v10; // eax
  _DWORD *Value; // eax
  int v12; // edi
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // ecx
  BuildingClass *v16; // ecx
  TechnoClass *v17; // [esp+0h] [ebp-Ch]
  int v18; // [esp+8h] [ebp-4h] BYREF

  v3 = v2; /*0x413f83*/
  result = TechnoClass::Update(v17, a2); /*0x413f85*/
  v5 = v3[433]; /*0x413f8a*/
  if ( v5 ) /*0x413f92*/
  {
    v6 = v3[135]; /*0x413f98*/
    if ( v6 ) /*0x413fa1*/
    {
      v7 = 0; /*0x413fa6*/
      v8 = *(_DWORD *)(v6 + 52) + 388; /*0x413fa8*/
      v9 = *(_DWORD *)(v8 + 16); /*0x413fad*/
      if ( v9 > 0 ) /*0x413fb2*/
      {
        v10 = *(_DWORD **)(v8 + 4); /*0x413fb4*/
        while ( *v10 != v5 ) /*0x413fb9*/
        {
          ++v7; /*0x413fbb*/
          ++v10; /*0x413fbc*/
          if ( v7 >= v9 ) /*0x413fc1*/
            goto LABEL_9; /*0x413fc1*/
        }
        Power::ChangedHouse((Power *)v3 + 21, 1); /*0x413fcd*/
      }
    }
LABEL_9:
    BuildingTypeClass::GetPowerOutput((BuildingTypeClass *)(v3 + 226), *(_DWORD *)(v3[433] + 1820)); /*0x413fd2*/
    BuildingTypeClass::GetPowerOutput((BuildingTypeClass *)(v3 + 232), *(_DWORD *)(v3[433] + 1820)); /*0x414001*/
    Value = ProgressTimer::GetValue((ProgressTimer *)(v3 + 226), &v18); /*0x41400d*/
    FacingClass::Set_SyncLog((char *)v3 + 928, Value); /*0x414015*/
    v12 = *v3; /*0x414020*/
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v3[433] + 188))(v3[433]); /*0x414024*/
    (*(void (__thiscall **)(int *, int))(v12 + 460))(v3, v13); /*0x41402d*/
    v14 = (_DWORD *)v3[433]; /*0x414033*/
    v15 = v14[416]; /*0x41403a*/
    if ( v15 == -1 ) /*0x414043*/
      v15 = v14[417]; /*0x414045*/
    v3[191] = v15; /*0x41404b*/
    result = (_DWORD *)v14[40]; /*0x414051*/
    v3[27] = (int)result; /*0x414057*/
    v3[28] = (int)result; /*0x41405a*/
  }
  v16 = (BuildingClass *)v3[135]; /*0x41405d*/
  if ( v16 ) /*0x414065*/
    return (_DWORD *)BuildingClass::PowerUpdate(v16, v3); /*0x414068*/
  return result; /*0x41406d*/
}



// ==== 0x00414080  AircraftClass::Destruct  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::Destruct(AircraftClass *this)
{
  AbstractClass *p_vtable1; // esi
  AircraftTypeClass *Type; // eax
  int *team; // ecx
  int v5; // eax
  int Vtable3; // eax
  char *ptr_4; // ebx
  _DWORD *ptr_0; // ebp
  int v9; // esi
  AircraftClass *v10; // edx
  char *v11; // ecx
  signed int v12; // ecx
  int v13; // ecx
  _DWORD *v14; // eax
  AircraftClass *v16; // [esp+10h] [ebp-4h] BYREF

  p_vtable1 = (AbstractClass *)&this->?; /*0x414087*/
  this->FootClass = &AircraftClass::`vftable'; /*0x41408a*/
  this->? = &AircraftClass::`vftable'; /*0x414090*/
  this->? = &AircraftClass::`vftable'; /*0x414097*/
  this->? = &AircraftClass::`vftable'; /*0x41409e*/
  *(_DWORD *)this->__pad_6C0 = &AircraftClass::`vftable'; /*0x4140a4*/
  if ( byte_A8E9A0 ) /*0x4140b5*/
  {
    Type = this->Type; /*0x4140b7*/
    if ( Type ) /*0x4140c1*/
    {
      if ( HouseClass::CanBuild(this->?, (int)Type, 0, 0) == -1 ) /*0x4140d4*/
        this->?->recheckTechTree = 1; /*0x4140dc*/
      TechnoClass::CleanupAll((TechnoClass *)this, 0); /*0x4140e6*/
      team = (int *)this->?; /*0x4140eb*/
      if ( team ) /*0x4140f3*/
      {
        TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x4140f9*/
        this->? = 0; /*0x4140fe*/
      }
      HouseClass::DecrementUnitCount(this->?, this); /*0x41410b*/
      TechnoClass::CleanupDirection((FootClass *)this); /*0x414112*/
      this->Type = 0; /*0x414117*/
    }
  }
  AbstractClass::AnnounceExpiredPointer(&this->FootClass, 1); /*0x414125*/
  v16 = this; /*0x41413a*/
  v5 = (*(int (__thiscall **)(_DWORD *, AircraftClass **))(dword_A8E390 + 16))(&dword_A8E390, &v16); /*0x41413e*/
  if ( v5 != -1 && v5 < dword_A8E3A0 && v5 < --dword_A8E3A0 ) /*0x414159*/
  {
    do /*0x414171*/
    {
      ++v5; /*0x414161*/
      *((_DWORD *)dword_A8E394 + v5 - 1) = *((_DWORD *)dword_A8E394 + v5); /*0x414165*/
    }
    while ( v5 < dword_A8E3A0 ); /*0x414171*/
  }
  Vtable3 = AbstractClass::GetVtable3(p_vtable1); /*0x414174*/
  ptr_4 = (char *)g_BuildingLoadQueue_Array.?; /*0x414179*/
  v16 = (AircraftClass *)Vtable3; /*0x41417f*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x414185*/
  {
    if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x414192*/
    {
      qsort( /*0x4141a2*/
        g_BuildingLoadQueue_Array.TechnoTypeClass,
        (size_t)g_BuildingLoadQueue_Array.?,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      ptr_4 = (char *)g_BuildingLoadQueue_Array.?; /*0x4141a7*/
      g_BuildingLoadQueue_Array.? = 0; /*0x4141b0*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x4141b6*/
    }
    ptr_0 = g_BuildingLoadQueue_Array.TechnoTypeClass; /*0x4141bd*/
    v9 = (int)ptr_4; /*0x4141c3*/
    while ( v9 > 0 ) /*0x4141c7*/
    {
      v10 = (AircraftClass *)ptr_0[2 * (v9 / 2)]; /*0x4141d4*/
      v11 = (char *)&ptr_0[2 * (v9 / 2)]; /*0x4141d8*/
      if ( (int)v16 >= (int)v10 ) /*0x4141e0*/
      {
        if ( v10 == v16 ) /*0x4141ea*/
        {
          if ( v11 ) /*0x414210*/
          {
            v12 = (v11 - (char *)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x414218*/
            if ( v12 != -1 ) /*0x41421e*/
            {
              v13 = v12 + 1; /*0x414220*/
              if ( v13 < (int)ptr_4 ) /*0x414223*/
              {
                do /*0x414242*/
                {
                  v14 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v13++; /*0x41422b*/
                  *(v14 - 2) = *v14; /*0x414231*/
                  *(v14 - 1) = v14[1]; /*0x414237*/
                  ptr_4 = (char *)g_BuildingLoadQueue_Array.?; /*0x41423a*/
                }
                while ( v13 < (int)g_BuildingLoadQueue_Array.? ); /*0x414242*/
              }
              g_BuildingLoadQueue_Array.? = ptr_4 - 1; /*0x41424f*/
              *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x414255*/
              *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x414263*/
              g_BuildingLoadQueue_Array.? = 0; /*0x414267*/
            }
          }
          break; /*0x414267*/
        }
        ptr_0 = v11 + 8; /*0x4141ec*/
        v9 += -1 - v9 / 2; /*0x4141f4*/
      }
      else
      {
        v9 /= 2; /*0x4141e2*/
      }
    }
  }
  this->? = 0; /*0x41426d*/
  return FootClass::Destruct((FootClass *)this); /*0x414208*/
}



// ==== 0x00414290  AircraftClass::QueryInterface  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::QueryInterface(AircraftClass *this, AbstractClass *a2, void *iid, void **ppv)
{
  int result; // eax

  result = AbstractClass::QueryInterface((AbstractClass *)this); /*0x4142a2*/
  if ( result < 0 ) /*0x4142a9*/
  {
    if ( !memcmp(iid, &IID_IFlyControl, 0x10u) ) /*0x4142b8*/
    {
      if ( a2 ) /*0x4142bf*/
      {
        *ppv = &a2[48]; /*0x4142c8*/
        (*((void (__stdcall **)(AbstractClass *))a2->ptr_0 + 1))(a2); /*0x4142cf*/
        return 0; /*0x4142d7*/
      }
      *ppv = 0; /*0x4142dc*/
    }
    (*((void (__stdcall **)(AbstractClass *))a2->ptr_0 + 1))(a2); /*0x4142e4*/
    return 0; /*0x4142e7*/
  }
  return result; /*0x4142d4*/
}



// ==== 0x004142F0  AircraftClass::AddRef  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::AddRef(AircraftClass *this, int a2)
{
  return AbstractClass::COMStub_AddRef((AbstractClass *)this); /*0x4142fa*/
}



// ==== 0x00414300  AircraftClass::Release  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::Release(AircraftClass *this, int a2)
{
  return AbstractClass::COMStub_Release((AbstractClass *)this); /*0x41430a*/
}



// ==== 0x00414310  AircraftClass::MoveTo  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::MoveTo(AircraftClass *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // ebx
  int Type; // ecx
  int v6; // edi
  int GroundHeight; // ebx
  char v8; // bl
  int result; // eax
  int v10; // eax
  __int16 v11; // dx
  int v12; // eax
  int v13; // ecx
  int v14; // edi
  int v15; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  v3 = a2; /*0x414314*/
  v15 = *a2; /*0x414320*/
  Type = this->Type; /*0x414324*/
  v16 = a2[1]; /*0x41432d*/
  v17 = a2[2]; /*0x414334*/
  if ( !*(_BYTE *)(Type + 3432) ) /*0x414338*/
  {
    if ( this->isALoaner[0] || !(unsigned __int8)IsCoordVisibleMap((ObjectClass *)&dword_87F7E8, a2) ) /*0x414352*/
    {
      v6 = this->Type; /*0x41436c*/
      GroundHeight = Cell::GetGroundHeight(v3); /*0x414381*/
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 188))(v6) + GroundHeight; /*0x41438b*/
    }
    else
    {
      v17 = Cell::GetGroundHeight(v3); /*0x414366*/
    }
  }
  v8 = a3; /*0x41438f*/
  if ( FootClass::DispatchInput((double *)&this->ptr_0, (int)&v15, a3) ) /*0x41439b*/
  {
    v10 = this->Type; /*0x4143a8*/
    if ( !*(_BYTE *)(v10 + 560) /*0x4143e1*/
      || !*(_BYTE *)(v10 + 3594)
      || *(_DWORD *)(*(int (__thiscall **)(AircraftClass *, _DWORD))(this->ptr_0 + 1016))(this, 0)
      && *(_BYTE *)(*(_DWORD *)(*(int (__thiscall **)(AircraftClass *, _DWORD))(this->ptr_0 + 1016))(this, 0) + 327) )
    {
      this->isALoaner[0] = 1; /*0x4143eb*/
    }
    if ( this->passengers[1] ) /*0x4143f2*/
      this->HasPassengers[0] = 1; /*0x4143fc*/
    LOBYTE(v11) = 0; /*0x414403*/
    HIBYTE(v11) = v8; /*0x414409*/
    LOWORD(a2) = v11; /*0x414412*/
    FacingClass::Set_SyncLog((char *)this->secondaryFacing, &a2); /*0x414417*/
    this->animation[2] = (int)dword_A8ED84; /*0x41442c*/
    v12 = v16; /*0x41442e*/
    this->animation[5] = 1; /*0x414432*/
    this->animation[3] = v12; /*0x414438*/
    this->animation[4] = 1; /*0x41443b*/
    v13 = this->Type; /*0x41443e*/
    this->animation[0] = 0; /*0x414444*/
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 188))(v13); /*0x414456*/
    if ( (*(int (__thiscall **)(AircraftClass *))(this->ptr_0 + 456))(this) == v14 ) /*0x414464*/
      result = (*(int (__thiscall **)(AircraftClass *, _DWORD, int))(this->ptr_0 + 1348))(this, 0, 1072693248); /*0x414471*/
    else
      result = (*(int (__thiscall **)(AircraftClass *, _DWORD, _DWORD))(this->ptr_0 + 1348))(this, 0, 0); /*0x41448a*/
    LOBYTE(result) = 1; /*0x414479*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x41449d*/
  }
  return result; /*0x414477*/
}



// ==== 0x004144B0  AircraftClass::Draw  this=AircraftClass  sig=csp ====
int __userpurge AircraftClass::Draw@<eax>(
        AircraftClass *this,
        int a2@<ebx>,
        int a3@<edi>,
        int *a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // ecx
  int v8; // ebp
  int *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // edx
  int v13; // eax
  int result; // eax
  int v15; // esi
  int v16; // edx
  FootClass *v17; // esi
  int v18; // eax
  int v19; // edi
  void *ptr_0; // edx
  int *v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int DB; // eax
  int v27; // eax
  _DWORD *v28; // eax
  int v29; // ebx
  int v30; // edx
  int v31; // ebx
  char v32; // al
  int v33; // edx
  int v34; // eax
  Cell *v35; // esi
  void *Cell_field_0x140; // eax
  int v37; // eax
  const void *v38; // eax
  char v39; // al
  int v40; // esi
  float *inited; // eax
  float *v42; // eax
  int v43; // eax
  int v44; // eax
  const void *v45; // eax
  int v46; // esi
  int v47; // edi
  float *v48; // eax
  int v50; // [esp+40h] [ebp-D0h]
  int v51; // [esp+40h] [ebp-D0h]
  char v52[4]; // [esp+50h] [ebp-C0h] BYREF
  int v53; // [esp+54h] [ebp-BCh] BYREF
  char *ptr_4; // [esp+58h] [ebp-B8h] BYREF
  int v55[2]; // [esp+5Ch] [ebp-B4h] BYREF
  int v56; // [esp+64h] [ebp-ACh] BYREF
  int v57; // [esp+68h] [ebp-A8h]
  int GroundHeight; // [esp+6Ch] [ebp-A4h] BYREF
  int v59; // [esp+70h] [ebp-A0h] BYREF
  int v60; // [esp+74h] [ebp-9Ch]
  int v61; // [esp+78h] [ebp-98h] BYREF
  int v62; // [esp+7Ch] [ebp-94h]
  _BYTE v63[104]; // [esp+80h] [ebp-90h] BYREF
  AudioConfig v64; // [esp+E8h] [ebp-28h] BYREF

  v8 = v7; /*0x4144bf*/
  if ( stru_A8EB00.?[391] || !g_hWnd || ((int)dword_A8B230->ptr_0 & 0x1000) == 0 ) /*0x4144de*/
    goto LABEL_9; /*0x4144de*/
  if ( !*(_DWORD *)(v7 + 1652) ) /*0x4144e4*/
    WinAPI::Wrapper(-2147467261); /*0x4144f3*/
  v9 = (int *)(*(int (__stdcall **)(_DWORD, int *))(**(_DWORD **)(v7 + 1652) + 24))(*(_DWORD *)(v7 + 1652), &v59); /*0x414506*/
  v10 = *v9; /*0x414509*/
  v11 = v9[1]; /*0x41450b*/
  GroundHeight = v9[2]; /*0x414517*/
  v56 = v10; /*0x41451d*/
  v57 = v11; /*0x414521*/
  v59 = *(_DWORD *)(v8 + 156); /*0x414527*/
  v60 = *(_DWORD *)(v8 + 160); /*0x414533*/
  GroundHeight = *(_DWORD *)(v8 + 164); /*0x41453a*/
  if ( !(unsigned __int8)Game::Stub3((int)&v56) /*0x414580*/
    || (v12 = *(_DWORD *)(v8 + 160),
        v13 = *(_DWORD *)(v8 + 164),
        v59 = *(_DWORD *)(v8 + 156),
        v60 = v12,
        v61 = v13,
        !(unsigned __int8)Game::Stub3((int)&v59))
    || (result = House::IsHumanPlayer(*(House **)(v8 + 540)), (_BYTE)result) )
  {
LABEL_9:
    v15 = *(_DWORD *)(v8 + 1732); /*0x41458e*/
    if ( !(*(unsigned __int8 (__thiscall **)(int, Object *))(*(_DWORD *)v8 + 1088))(v8, dword_A83D4C) ) /*0x414597*/
      v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 204))(v8, 1); /*0x4145ae*/
    v16 = *(_DWORD *)(v8 + 1336) % *(_DWORD *)(*(_DWORD *)(v15 + 180) + 8); /*0x4145bd*/
    v17 = (FootClass *)this; /*0x4145c0*/
    ptr_4 = (char *)this->?; /*0x4145cb*/
    v18 = *(_DWORD *)(v8 + 1652); /*0x4145cf*/
    v19 = v16; /*0x4145d7*/
    ptr_0 = this->FootClass; /*0x4145d9*/
    v62 = v19; /*0x4145db*/
    v53 = (int)ptr_0; /*0x4145df*/
    if ( !v18 ) /*0x4145e3*/
      WinAPI::Wrapper(-2147467261); /*0x4145ea*/
    v21 = (int *)(*(int (__stdcall **)(_DWORD, int *, int))(**(_DWORD **)(v8 + 1652) + 44))( /*0x4145fd*/
                   *(_DWORD *)(v8 + 1652),
                   v55,
                   a3);
    v22 = *v21; /*0x414600*/
    v23 = v21[1]; /*0x414606*/
    ptr_4 += v22; /*0x41460f*/
    v24 = v23 + v55[0]; /*0x414613*/
    v25 = *(_DWORD *)(v8 + 280); /*0x414615*/
    v55[0] = v24; /*0x41461d*/
    if ( v25 && *(_BYTE *)(*(_DWORD *)(v8 + 1732) + 3580) ) /*0x414629*/
    {
      DB = CCINIClass::GetDB((CCINIClass *)(v8 + 276)); /*0x414639*/
      (*(void (__thiscall **)(int, char **, int))(*(_DWORD *)DB + 276))(DB, &ptr_4, a5); /*0x41464f*/
    }
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)v8 + 440))(v8, v52); /*0x41465f*/
    v27 = *(_DWORD *)(v8 + 1732); /*0x414665*/
    if ( !*(_BYTE *)(v27 + 566) || !*(_DWORD *)(v27 + 176) ) /*0x414679*/
      goto LABEL_40; /*0x414681*/
    v56 = *(_DWORD *)(v8 + 156); /*0x414691*/
    v57 = *(_DWORD *)(v8 + 160); /*0x41469d*/
    GroundHeight = *(_DWORD *)(v8 + 164); /*0x4146a4*/
    GroundHeight = Cell::GetGroundHeight(&v56); /*0x4146b2*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v56, v55); /*0x4146c6*/
    if ( !*(_DWORD *)(v8 + 1652) ) /*0x4146cb*/
      WinAPI::Wrapper(-2147467261); /*0x4146da*/
    v28 = (_DWORD *)(*(int (__stdcall **)(_DWORD, int *, int, int))(**(_DWORD **)(v8 + 1652) + 48))( /*0x4146ee*/
                      *(_DWORD *)(v8 + 1652),
                      &v59,
                      a2,
                      v50);
    v29 = *v28 + v56; /*0x414700*/
    v57 += v28[1]; /*0x414702*/
    v30 = *(_DWORD *)v8; /*0x414706*/
    v56 = v29; /*0x41470b*/
    v53 = 0; /*0x41470f*/
    v31 = (*(int (__thiscall **)(int))(v30 + 456))(v8); /*0x41471d*/
    if ( v53 != -1 ) /*0x414726*/
      v53 = v19 & 0x1F | (32 * v53); /*0x414730*/
    v32 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 192))(v8); /*0x414739*/
    v33 = *(_DWORD *)(v8 + 160); /*0x414741*/
    v61 = *(_DWORD *)(v8 + 156); /*0x414744*/
    HIBYTE(ptr_4) = v32; /*0x41474c*/
    v34 = *(_DWORD *)(v8 + 164); /*0x414750*/
    *(_BYTE *)(v8 + 1718) = 0; /*0x414759*/
    v62 = v33; /*0x414760*/
    *(_DWORD *)v63 = v34; /*0x414764*/
    v35 = (Cell *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v61); /*0x41476d*/
    if ( *(_BYTE *)(v8 + 140) ) /*0x41476f*/
    {
      if ( v31 < 0 ) /*0x414787*/
        goto LABEL_32; /*0x414787*/
    }
    else if ( v31 < dword_889EBC ) /*0x41477f*/
    {
      goto LABEL_32; /*0x41477f*/
    }
    Cell_field_0x140 = v35->Cell_field_0x140; /*0x414789*/
    if ( ((unsigned __int16)Cell_field_0x140 & 0x100) != 0 /*0x4147c8*/
      && ((BYTE1(Cell_field_0x140) & 8) != 0 && (*((_DWORD *)Cell::GetNeighbourContent(v35, 0) + 80) & 0x100) != 0
       || ((int)v35->Cell_field_0x140 & 0x800) == 0
       && (*((_DWORD *)Cell::GetNeighbourContent(v35, 6u) + 80) & 0x100) != 0) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 460))(v8, dword_889EBC); /*0x4147d5*/
      v37 = ZCoordToScreenY(dword_889EBC); /*0x4147e1*/
      v57 -= v37; /*0x4147e6*/
LABEL_33:
      if ( !*(_DWORD *)(v8 + 1652) ) /*0x4147f9*/
        WinAPI::Wrapper(-2147467261); /*0x414808*/
      v38 = (const void *)(*(int (__stdcall **)(_DWORD, AudioConfig *, int *))(**(_DWORD **)(v8 + 1652) + 40))( /*0x414823*/
                            *(_DWORD *)(v8 + 1652),
                            &v64,
                            &v53);
      Transform::Copy((Transform *)&v63[8], v38); /*0x41482b*/
      v39 = *(_BYTE *)(v8 + 973); /*0x414830*/
      qmemcpy(&v63[56], &v63[8], 0x30u); /*0x414845*/
      if ( !v39 ) /*0x414847*/
      {
        v40 = *(_DWORD *)(v8 + 1732); /*0x414849*/
        inited = (float *)AudioConfig::InitDefault(&v64); /*0x414866*/
        v42 = MultiplyMatrix3x4((float *)&v63[8], inited, (float *)&v63[56]); /*0x414871*/
        TechnoClass::QueueDrawVoiceResponse( /*0x4148a0*/
          (TechnoClass *)v8,
          (_BYTE **)(v40 + 176),
          *(_DWORD *)(v40 + 2044),
          v53,
          v40 + 620,
          a6,
          &v56,
          (int)v42,
          1u,
          0,
          0,
          0);
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 460))(v8, v31); /*0x4148ab*/
      v43 = v55[0]; /*0x4148b9*/
      v51 = v55[1]; /*0x4148bd*/
      *(_BYTE *)(v8 + 1718) = HIBYTE(ptr_4); /*0x4148be*/
      TacticalClass::AddToDrawQueue((TacticalClass *)g_TacticalClass_Instance, v8, v43, v51); /*0x4148cc*/
      LightningStorm::IsActive(); /*0x4148d1*/
      (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 456))(v8); /*0x4148f9*/
      Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &GroundHeight); /*0x414919*/
      v44 = *(_DWORD *)(v8 + 1652); /*0x414930*/
      v53 = v63[4] & 0x1F; /*0x414943*/
      if ( !v44 ) /*0x414947*/
        WinAPI::Wrapper(-2147467261); /*0x41494e*/
      v45 = (const void *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)(v8 + 1652) + 36))(*(_DWORD *)(v8 + 1652)); /*0x414969*/
      Transform::Copy((Transform *)v63, v45); /*0x414971*/
      qmemcpy(&v63[48], v63, 0x30u); /*0x414985*/
      v46 = *(_DWORD *)(v8 + 1732); /*0x414987*/
      v47 = *(_DWORD *)v8; /*0x41498d*/
      v48 = (float *)AudioConfig::InitDefault((AudioConfig *)&v63[96]); /*0x41499f*/
      MultiplyMatrix3x4((float *)v63, v48, (float *)&v63[48]); /*0x4149aa*/
      (*(void (__thiscall **)(int, int, int))(v47 + 1296))(v8, v46 + 176, v62); /*0x4149d7*/
      v17 = (FootClass *)this; /*0x4149dd*/
LABEL_40:
      AbstractClass::COMStub_Return0_69(v17, (int)a4); /*0x4149e5*/
      return result; /*0x4149f0*/
    }
LABEL_32:
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 460))(v8, 0); /*0x4147ec*/
    goto LABEL_33; /*0x4147f3*/
  }
  return result; /*0x4149f6*/
}



// ==== 0x00414A10  nullsub_71  this=-  sig=csp ====
void __stdcall nullsub_71(int a1, int a2)
{
  ; /*0x414a10*/
}



// ==== 0x00414A80  AircraftClass::ProcessMissionTimeout  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::ProcessMissionTimeout(AircraftClass *this)
{
  int *team; // ecx
  char *MissionControl; // eax
  int v4; // eax
  int (__thiscall **ptr_0)(AircraftClass *, int, int *, _DWORD); // edi
  int v7; // eax
  void *v8; // edi
  int v9; // eax
  int v10; // [esp+10h] [ebp-Ch] BYREF
  int v11; // [esp+14h] [ebp-8h]
  int v12; // [esp+18h] [ebp-4h]

  if ( this->? ) /*0x414a86*/
  {
    if ( this->? ) /*0x414ae5*/
      goto LABEL_12; /*0x414ae5*/
    if ( *(_DWORD *)&dword_A8B238 ) /*0x414afb*/
    {
      ptr_0 = (int (__thiscall **)(AircraftClass *, int, int *, _DWORD))this->FootClass; /*0x414b03*/
      v10 = this->?[0]; /*0x414b09*/
      v11 = this->?[1]; /*0x414b15*/
      v12 = this->?[2]; /*0x414b20*/
      v7 = ptr_0[241](this, 64, &v10, 0); /*0x414b24*/
      ((void (__thiscall *)(AircraftClass *, int))ptr_0[242])(this, v7); /*0x414b2d*/
    }
    if ( !this->? ) /*0x414b33*/
    {
      v8 = this->FootClass; /*0x414b43*/
      v10 = this->?[0]; /*0x414b49*/
      v11 = this->?[1]; /*0x414b57*/
      v12 = this->?[2]; /*0x414b5e*/
      v9 = (*((int (__thiscall **)(AircraftClass *, _DWORD, int *, _DWORD))v8 + 241))(this, 0, &v10, 0); /*0x414b64*/
      (*((void (__thiscall **)(AircraftClass *, int))v8 + 242))(this, v9); /*0x414b6d*/
    }
    if ( this->? ) /*0x414b73*/
    {
LABEL_12:
      (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 1, 0); /*0x414b9e*/
      return 1; /*0x414ba4*/
    }
    else
    {
      (*((void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 289))(this, 0, 1); /*0x414b86*/
      return 1; /*0x414b8c*/
    }
  }
  else
  {
    team = (int *)this->?; /*0x414a90*/
    if ( team ) /*0x414a98*/
      TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x414a9f*/
    (*((void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 289))(this, 0, 1); /*0x414aac*/
    MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x414ab4*/
    LOWORD(v4) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x414ac2*/
    return v4 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x414ade*/
  }
}



// ==== 0x00414BB0  TechnoClass::SmokeUpdate  this=AircraftClass  sig=csp ====
char __usercall TechnoClass::SmokeUpdate@<al>(TechnoClass *this, double a2@<st0>)
{
  int v2; // ecx
  int *v3; // esi
  int v4; // ecx
  AnimClass *v5; // eax
  int v6; // eax
  int v7; // ecx
  _BYTE *v8; // eax
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // ebp
  int v12; // ebx
  int v13; // eax
  int v14; // edi
  int v15; // edx
  AnimClass *v16; // eax
  int v17; // ecx
  AnimClass *v18; // eax
  int v19; // eax
  __int16 *v20; // eax
  __int16 *v21; // eax
  int v22; // eax
  int v23; // edi
  AnimClass *v24; // edi
  int Index; // eax
  int v26; // ecx
  int v27; // edx
  int DB; // eax
  int v30; // [esp+40h] [ebp-28h] BYREF
  int v31; // [esp+44h] [ebp-24h] BYREF
  int v32; // [esp+48h] [ebp-20h]
  int v33; // [esp+4Ch] [ebp-1Ch]
  int v34; // [esp+50h] [ebp-18h] BYREF
  int v35; // [esp+54h] [ebp-14h]
  int v36; // [esp+58h] [ebp-10h]
  int v37[3]; // [esp+5Ch] [ebp-Ch] BYREF

  v3 = (int *)v2; /*0x414bb6*/
  switch ( *(_DWORD *)(v2 + 172) ) /*0x414bcd*/
  {
    case 1: /*0x414bcd*/
    case 0x1B: /*0x414bcd*/
    case 0x1E: /*0x414bcd*/
    case 0x1F: /*0x414bcd*/
      break;
    default:
      *(_BYTE *)(v2 + 1746) = 0; /*0x414bd4*/
      break; /*0x414bd4*/
  }
  v4 = *(_DWORD *)(v2 + 632); /*0x414bdb*/
  if ( v4 ) /*0x414be3*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 92))(v4); /*0x414be7*/
  if ( ((*(unsigned __int8 (__usercall **)@<al>(int *@<ecx>, double@<st0>))(*v3 + 468))(v3, a2) /*0x414c11*/
     || (*(unsigned __int8 (__thiscall **)(int *))(*v3 + 472))(v3))
    && !(*(_DWORD *)&stru_A8EB00.?[416] % 24) )
  {
    if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 836) ) /*0x414c1d*/
    {
      v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x414c2c*/
      if ( v5 ) /*0x414c36*/
      {
        v31 = v3[39]; /*0x414c4b*/
        v32 = v3[40]; /*0x414c54*/
        v33 = v3[41]; /*0x414c60*/
        AnimClass::ctor( /*0x414c73*/
          v5,
          *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 836),
          &v31,
          0,
          1,
          (void *)0x600,
          0,
          0);
      }
    }
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*v3 + 472))(v3) /*0x414c94*/
    && (!(*(unsigned __int8 (__thiscall **)(int *))(*v3 + 468))(v3) || !*((_BYTE *)v3 + 636)) )
  {
    goto LABEL_70; /*0x414c94*/
  }
  if ( !v3[413] ) /*0x414c9e*/
    WinAPI::Wrapper(-2147467261); /*0x414cad*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v3[413] + 64))(v3[413]); /*0x414cbb*/
  LOBYTE(v6) = *((_BYTE *)v3 + 144); /*0x414cbe*/
  if ( (_BYTE)v6 )
  {
LABEL_70:
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*v3 + 472))(v3) && v3[158]
      || (*(unsigned __int8 (__thiscall **)(int *))(*v3 + 468))(v3) )
    {
      if ( v3[173] ) /*0x414cf2*/
        (*(void (__thiscall **)(int *, _DWORD))(*v3 + 968))(v3, 0); /*0x414d02*/
      v6 = v3[361]; /*0x414d08*/
      if ( v6 ) /*0x414d10*/
        LOBYTE(v6) = (*(char (__thiscall **)(int *, _DWORD, int))(*v3 + 1152))(v3, 0, 1); /*0x414d1e*/
    }
    else
    {
      v7 = v3[173]; /*0x414d2c*/
      if ( v7 ) /*0x414d34*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 84))(v7) /*0x414d8b*/
          || (v8 = (_BYTE *)v3[173]) != 0
          && (v8[20] & 1) != 0
          && !(unsigned __int8)Object::IsAlliedWithObjectSimpleHouse((Object *)v3[135], v8)
          && (v9 = (_DWORD *)v3[173], v9[136] == 2)
          && !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*v9 + 812))(v9, v3[135]) )
        {
          (*(void (__thiscall **)(int *, _DWORD))(*v3 + 968))(v3, 0); /*0x414d9b*/
        }
      }
      FootClass::MovementAI((FootClass *)v3); /*0x414da3*/
      LOBYTE(v6) = *((_BYTE *)v3 + 144); /*0x414da8*/
      if ( (_BYTE)v6 )
      {
        if ( *((_BYTE *)v3 + 973) ) /*0x414db6*/
        {
          v31 = v3[39]; /*0x414dce*/
          v34 = v31; /*0x414dd2*/
          v10 = *v3; /*0x414dd9*/
          v32 = v3[40]; /*0x414ddb*/
          v35 = v32; /*0x414ddf*/
          v33 = v3[41]; /*0x414dea*/
          v36 = v33 - 5; /*0x414df4*/
          (*(void (__thiscall **)(int *, int *))(v10 + 436))(v3, &v34); /*0x414df8*/
          if ( (*(int (__thiscall **)(int *))(*v3 + 456))(v3) < -400 ) /*0x414e0d*/
          {
            (*(void (__thiscall **)(int *, _DWORD))(*v3 + 224))(v3, 0); /*0x414e15*/
            LOBYTE(v6) = (*(char (__thiscall **)(int *))(*v3 + 248))(v3); /*0x414e1f*/
            return v6; /*0x414e2c*/
          }
          if ( (stru_A8EB00.?[416] & 3) == 0 ) /*0x414e34*/
          {
            v11 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -170, 170); /*0x414e6a*/
            v12 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -170, 170); /*0x414e75*/
            v13 = (*(int (__thiscall **)(int *))(*v3 + 456))(v3); /*0x414e77*/
            v14 = v3[41]; /*0x414e82*/
            v15 = v11 + v3[40]; /*0x414e89*/
            v31 = v12 + v3[39]; /*0x414e92*/
            v32 = v15; /*0x414e96*/
            v33 = v14 - v13; /*0x414e9a*/
            v16 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x414e9e*/
            if ( v16 ) /*0x414ea8*/
              AnimClass::ctor( /*0x414ecb*/
                v16,
                *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 148),
                &v31,
                0,
                1,
                (void *)0x600,
                0,
                0);
          }
        }
        v37[0] = v3[39]; /*0x414ede*/
        v37[1] = v3[40]; /*0x414ee5*/
        v17 = v3[433]; /*0x414ee9*/
        v37[2] = v3[41]; /*0x414ef2*/
        if ( *(_DWORD *)(v17 + 3584) ) /*0x414ef6*/
        {
          if ( !(*(_DWORD *)&stru_A8EB00.?[416] % *(_DWORD *)(v17 + 3588)) ) /*0x414f06*/
          {
            v18 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x414f15*/
            if ( v18 ) /*0x414f1f*/
              AnimClass::ctor(v18, *(void **)(v3[433] + 3584), v37, (void *)1, 1, (void *)0x600, 0, 0); /*0x414f42*/
          }
        }
        v19 = v3[433]; /*0x414f47*/
        if ( (*(_BYTE *)(v19 + 3595)
           || *(_BYTE *)(v19 + 3596)
           || (v20 = (__int16 *)(*(int (__thiscall **)(int *, int *))(*v3 + 440))(v3, &v30),
               (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v20, 1))
           || !(*(unsigned __int8 (__thiscall **)(int *))(*v3 + 1244))(v3))
          && ((v21 = (__int16 *)(*(int (__thiscall **)(int *, int *))(*v3 + 440))(v3, &v30),
               (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v21))
           || !(*(unsigned __int8 (__thiscall **)(int *))(*v3 + 1244))(v3)) )
        {
          if ( (int *)v3[361] == &g_MissionQueueFrame.briefing[130] ) /*0x414fec*/
          {
            (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1152))(v3, 0, 1); /*0x414ff6*/
            (*(void (__thiscall **)(int *, _DWORD))(*v3 + 968))(v3, 0); /*0x415002*/
            (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1156))(v3, 0, 1); /*0x415010*/
          }
          if ( (int *)v3[173] == &g_MissionQueueFrame.briefing[130] ) /*0x41501c*/
          {
            (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1152))(v3, 0, 1); /*0x415026*/
            (*(void (__thiscall **)(int *, _DWORD))(*v3 + 968))(v3, 0); /*0x415032*/
            (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1156))(v3, 0, 1); /*0x415040*/
          }
          if ( (*(unsigned __int8 (__thiscall **)(int *))(*v3 + 512))(v3) ) /*0x41504a*/
            (*(void (__thiscall **)(int *))(*v3 + 492))(v3); /*0x415058*/
          if ( *((_BYTE *)v3 + 1736) && v3[43] != 1 ) /*0x41506f*/
          {
            v22 = v3[191]; /*0x415071*/
            *((_BYTE *)v3 + 1736) = 0; /*0x415077*/
            v3[191] = v22 - 1; /*0x41507f*/
          }
          BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x415087*/
          if ( a2 < *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5896)
            && (*(int (__thiscall **)(int *))(*v3 + 456))(v3) > 0 )
          {
            v23 = v3[27] != 0 ? 10 : 80;
            if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < v23 ) /*0x4150d4*/
            {
              v24 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4150e0*/
              if ( v24 ) /*0x4150e7*/
              {
                v34 = v3[39]; /*0x4150eb*/
                v35 = v3[40]; /*0x4150f7*/
                v36 = v3[41]; /*0x4150fe*/
                Index = AnimTypeClass::FindIndex(&stru_817BD0); /*0x415102*/
                AnimClass::ctor(v24, *(void **)(FootClass_Array.?[3] + 4 * Index), &v34, 0, 1, (void *)0x600, 0, 0); /*0x415127*/
              }
            }
          }
          v6 = v3[70]; /*0x41512c*/
          if ( v6 ) /*0x415134*/
          {
            LOBYTE(v6) = *(_BYTE *)(v3[433] + 3580); /*0x41513c*/
            if ( (_BYTE)v6 ) /*0x415144*/
            {
              qmemcpy((void *)(CCINIClass::GetDB((CCINIClass *)(v3 + 69)) + 904), v3 + 232, 0x18u); /*0x415168*/
              qmemcpy((void *)(CCINIClass::GetDB((CCINIClass *)(v3 + 69)) + 928), v3 + 232, 0x18u); /*0x415184*/
              v26 = v3[40]; /*0x415188*/
              v34 = v3[39]; /*0x41518b*/
              v27 = v3[41]; /*0x41518f*/
              v35 = v26; /*0x415192*/
              v36 = v27; /*0x415198*/
              DB = CCINIClass::GetDB((CCINIClass *)(v3 + 69)); /*0x41519c*/
              LOBYTE(v6) = (*(char (__thiscall **)(int, int *))(*(_DWORD *)DB + 436))(DB, &v34); /*0x4151aa*/
            }
          }
        }
        else
        {
          LOBYTE(v6) = (*(char (__thiscall **)(int *))(*v3 + 248))(v3); /*0x414f93*/
        }
      }
    }
  }
  return v6; /*0x414d24*/
}



// ==== 0x004151E0  AircraftClass::Mission_Harvest  this=AircraftClass  sig=csp ====
int __thiscall UnitClass::Mission_Harvest(AircraftClass *this)
{
  AbstractClass *movementDestination; // ecx
  int v3; // edi
  int v4; // ebp
  int v5; // ebx
  _DWORD *v6; // eax
  char *MissionControl; // eax
  int v8; // eax
  int v10; // eax
  void (__thiscall **v11)(AircraftClass *, void *, int); // edi
  void *ClosestPlacementCell; // eax
  int DB; // eax
  int v14; // edi
  int v15; // eax
  void (__thiscall **ptr_0)(AircraftClass *, void *, int); // ebx
  __int16 *WaypointCoords; // eax
  void *v18; // eax
  void *NearbyCell; // eax
  void (__thiscall **v20)(AircraftClass *, void *, int); // edi
  __int16 *Waypoint_Location; // eax
  void *v22; // eax
  void *v23; // eax
  TeamClass *team; // ecx
  int v25; // edi
  int v26; // edi
  _WORD *v27; // eax
  _WORD *v28; // eax
  char *v29; // [esp+0h] [ebp-30h]
  int v30; // [esp+10h] [ebp-20h] BYREF
  int v31; // [esp+14h] [ebp-1Ch] BYREF
  int v32; // [esp+18h] [ebp-18h] BYREF
  _BYTE v33[4]; // [esp+1Ch] [ebp-14h] BYREF
  _BYTE v34[4]; // [esp+20h] [ebp-10h] BYREF
  _BYTE v35[12]; // [esp+24h] [ebp-Ch] BYREF

  switch ( this->? )
  {
    case 0:
      if ( !(*((int (__thiscall **)(AircraftClass *))this->FootClass + 114))(this)
        && this->? == 0.0
        && ((movementDestination = this->?) == 0
         || (v3 = this->?[0],
             v4 = this->?[1],
             v5 = this->?[2],
             v6 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))movementDestination->ptr_0 + 18))(
                              movementDestination,
                              v35),
             v3 == *v6)
         && v4 == v6[1]
         && v5 == v6[2]) )
      {
        this->? = 3; /*0x415250*/
      }
      else if ( this->?
             || !this->Type->TechnoTypeClass[3221]
             || (*((int (__thiscall **)(AircraftClass *))this->FootClass + 114))(this) <= 0 )
      {
        if ( this->? )
        {
          if ( (*((unsigned __int8 (__thiscall **)(AircraftClass *, AbstractClass *))this->FootClass + 340))(
                 this,
                 this->?) )
          {
            DB = CCINIClass::GetDB((CCINIClass *)this->?); /*0x415334*/
            v14 = DB; /*0x415339*/
            if ( DB /*0x415360*/
              && (v15 = *(_DWORD *)(DB + 1492)) != 0
              && *TechnoClass::GetWaypointCoords(*(TechnoClass **)(v15 + 36), &v30) != g_AircraftStatusFlag )
            {
              ptr_0 = (void (__thiscall **)(AircraftClass *, void *, int))this->FootClass; /*0x415375*/
              WaypointCoords = (__int16 *)TechnoClass::GetWaypointCoords( /*0x415381*/
                                            *(TechnoClass **)(*(_DWORD *)(v14 + 1492) + 36),
                                            &v31);
              v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], WaypointCoords); /*0x41538c*/
              NearbyCell = InfantryClass::FindNearbyCell((InfantryClass *)this, (int)v18); /*0x415394*/
              ptr_0[288](this, NearbyCell, 1); /*0x41539c*/
            }
            else
            {
              v20 = (void (__thiscall **)(AircraftClass *, void *, int))this->FootClass; /*0x4153ad*/
              Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v32, 700); /*0x4153bb*/
              v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], Waypoint_Location); /*0x4153c6*/
              v23 = InfantryClass::FindNearbyCell((InfantryClass *)this, (int)v22); /*0x4153ce*/
              v20[288](this, v23, 1); /*0x4153d6*/
              team = this->?; /*0x4153dc*/
              if ( team ) /*0x4153e4*/
                TeamClass::SelectMember((int)team, (int)this->?); /*0x4153f1*/
            }
          }
          else
          {
            v25 = (*(int (__thiscall **)(AircraftTypeClass *))(*(_DWORD *)this->Type + 188))(this->Type); /*0x41540d*/
            this->? = v25 != (*((int (__thiscall **)(AircraftClass *))this->FootClass + 114))(this) ? 4 : 1;
          }
        }
        else
        {
          this->? = 2; /*0x41530c*/
        }
      }
      else
      {
        v10 = (*((int (__thiscall **)(AircraftClass *, _BYTE *, _DWORD, _DWORD))this->FootClass + 330))( /*0x4152cd*/
                this,
                &this->Type->TechnoTypeClass[1000],
                0,
                0);
        if ( v10 ) /*0x4152d5*/
        {
          (*((void (__thiscall **)(AircraftClass *, int, int))this->FootClass + 288))(this, v10, 1); /*0x4152de*/
        }
        else
        {
          v11 = (void (__thiscall **)(AircraftClass *, void *, int))this->FootClass; /*0x4152e9*/
          ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((TechnoClass *)this); /*0x4152ef*/
          v11[288](this, ClosestPlacementCell, 1); /*0x4152f7*/
        }
      }
      goto LABEL_9; /*0x415250*/
    case 1:
      if ( !this->?[0] ) /*0x41542a*/
        WinAPI::Wrapper(-2147467261); /*0x415439*/
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x415447*/
        this->? = 2; /*0x41544e*/
      if ( !(*((unsigned __int8 (__thiscall **)(AircraftClass *, AbstractClass *))this->FootClass + 340))(this, this->?) ) /*0x415463*/
        this->? = 0; /*0x415471*/
      goto LABEL_9; /*0x41547b*/
    case 2:
      if ( !this->?[0] ) /*0x415480*/
        WinAPI::Wrapper(-2147467261); /*0x41548f*/
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x41549d*/
        this->? = 3; /*0x4154a4*/
      return 1; /*0x4154ba*/
    case 3:
      if ( !this->? ) /*0x4154bb*/
      {
        if ( this->?[1] ) /*0x4154c9*/
        {
          if ( this->Type[1].TechnoTypeClass[300] ) /*0x4154dd*/
          {
            (*((void (__thiscall **)(AircraftClass *, _DWORD))this->FootClass + 73))(this, 0); /*0x4154ed*/
            FootClass::MissionMoveCarryallLand((FootClass *)this); /*0x4154f5*/
            (*((void (__thiscall **)(AircraftClass *, int))this->FootClass + 73))(this, 1); /*0x415500*/
          }
          else
          {
            v26 = LinkedList::Pop((LinkedList *)this->?); /*0x41551a*/
            v27 = (_WORD *)(*((int (__thiscall **)(AircraftClass *, _BYTE *, AircraftClass *))this->FootClass + 110))( /*0x415522*/
                             this,
                             v33,
                             this);
            MapClass::ApplyOverlayReveal((MapClass *)&stru_87F5F0.__pad_58[416], v27, v29); /*0x41552e*/
            if ( (*((int (__thiscall **)(AircraftClass *, int))this->FootClass + 64))(this, v26) ) /*0x41553e*/
              *(_BYTE *)(v26 + 1060) = 0; /*0x415548*/
            v28 = (_WORD *)(*((int (__thiscall **)(AircraftClass *, _BYTE *))this->FootClass + 110))(this, v34); /*0x415559*/
            MapClass::FillRevealBuffer((MapClass *)&stru_87F5F0.__pad_58[416], v28, this); /*0x415565*/
            if ( !*(_BYTE *)(v26 + 1060) && *(_DWORD *)(v26 + 1492) ) /*0x415574*/
              TeamClass::AddMember((int *)this->?, v26, 0); /*0x415587*/
            if ( !this->?[1] ) /*0x41558c*/
              (*((void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 289))(this, 0, 1); /*0x4155a2*/
          }
        }
        else
        {
          (*((void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 289))(this, 0, 1); /*0x4155b5*/
        }
      }
      goto LABEL_9; /*0x415506*/
    case 4:
      this->? = 0; /*0x4155c0*/
      return 1; /*0x4155cd*/
    default:
LABEL_9:
      MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x41525a*/
      LOWORD(v8) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x41526a*/
      return v8 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2);
  }
}



// ==== 0x004155F0  TechnoClass::ApplyIronCurtain  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ApplyIronCurtain(TechnoClass *this)
{
  double v1; // st7
  int v3; // ebx
  AbstractClass *target; // eax
  void *ptr_0; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  TechnoClass *owner; // ecx
  int *v11; // eax
  void (__thiscall **v12)(TechnoClass *, void *, int); // edi
  void *v13; // eax
  int v15; // [esp+28h] [ebp-20h]
  __int16 v16[2]; // [esp+34h] [ebp-14h] BYREF
  int v17; // [esp+38h] [ebp-10h] BYREF
  int v18; // [esp+3Ch] [ebp-Ch] BYREF
  int v19; // [esp+40h] [ebp-8h]
  int v20; // [esp+44h] [ebp-4h]

  v3 = ObjectClass::ComputeDistance((ObjectClass *)this, (int)this->target); /*0x415604*/
  target = this->target; /*0x415606*/
  if ( target ) /*0x41560e*/
  {
    if ( *((_DWORD *)this + 361) ) /*0x415630*/
    {
      if ( v3 <= *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0) /*0x415660*/
                           + 180) )
      {
        (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD, _DWORD))this->RadioClass + 291))( /*0x415672*/
          this,
          0,
          0,
          0,
          0);
        ptr_0 = this->RadioClass; /*0x415678*/
        v6 = (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0); /*0x41567e*/
        (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))ptr_0 + 290))( /*0x415697*/
          this,
          0,
          0,
          0,
          0,
          *(_DWORD *)(*(_DWORD *)v6 + 164));
        v18 = this->?[0]; /*0x4156a9*/
        v7 = this->lastSightRange + 3; /*0x4156b6*/
        v19 = this->?[1]; /*0x4156b9*/
        v20 = this->?[2]; /*0x4156cd*/
        MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], &v18, 0, v7, 0); /*0x4156d1*/
        v8 = this->?[0]; /*0x4156d9*/
        v9 = this->?[2]; /*0x4156db*/
        v19 = this->?[1]; /*0x4156de*/
        v18 = v8; /*0x4156e7*/
        v20 = v9; /*0x4156eb*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 640), &v18, 0); /*0x4156fb*/
      }
    }
    else
    {
      (*((void (__thiscall **)(TechnoClass *, AbstractClass *, int))this->RadioClass + 288))(this, target, 1); /*0x415641*/
    }
  }
  else
  {
    (*((void (__thiscall **)(TechnoClass *, _DWORD, int))this->RadioClass + 288))(this, 0, 1); /*0x415617*/
    (*((void (__thiscall **)(TechnoClass *, int, _DWORD))this->RadioClass + 122))(this, 4, 0); /*0x415625*/
  }
  if ( v3 > 768 ) /*0x415706*/
    return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 656); /*0x4157a0*/
  (*((void (__thiscall **)(TechnoClass *, int, _DWORD))this->RadioClass + 122))(this, 31, 0); /*0x415714*/
  owner = (TechnoClass *)this->owner; /*0x41571a*/
  *((_BYTE *)this + 1746) = 1; /*0x415720*/
  v11 = (int *)TechnoClass::MapHouseRelationIndex(owner); /*0x415727*/
  *(_DWORD *)v16 = *CellClass::FindOpenNeighbor( /*0x415755*/
                      (CellClass *)&v17,
                      v1,
                      v11,
                      (int)&g_AircraftStatusFlag,
                      (int)&g_AircraftStatusFlag,
                      4,
                      1,
                      0,
                      v15);
  if ( *(_DWORD *)v16 != g_AircraftStatusFlag ) /*0x415759*/
  {
    v12 = (void (__thiscall **)(TechnoClass *, void *, int))this->RadioClass; /*0x415769*/
    v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x415777*/
    v12[288](this, v13, 1); /*0x41577f*/
  }
  return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 656); /*0x41578a*/
}



// ==== 0x004157C0  TechnoClass::ReturnToBase  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ReturnToBase(TechnoClass *this)
{
  double v1; // st7
  int v3; // edi
  void *ptr_0; // edi
  int v5; // eax
  int v6; // eax
  int *v7; // eax
  void (__thiscall **v8)(TechnoClass *, void *, int); // edi
  void *v9; // eax
  int v11; // [esp+24h] [ebp-1Ch]
  __int16 v12[2]; // [esp+2Ch] [ebp-14h] BYREF
  int v13; // [esp+30h] [ebp-10h] BYREF
  int v14[3]; // [esp+34h] [ebp-Ch] BYREF

  v3 = ObjectClass::ComputeDistance((ObjectClass *)this, (int)this->target); /*0x4157d9*/
  if ( v3 <= *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0) /*0x4157e9*/
                       + 180) )
  {
    (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD, _DWORD))this->RadioClass + 291))(this, 0, 0, 0, 0); /*0x4157f7*/
    ptr_0 = this->RadioClass; /*0x4157fd*/
    v5 = (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0); /*0x415803*/
    (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))ptr_0 + 290))( /*0x41581c*/
      this,
      0,
      0,
      0,
      0,
      *(_DWORD *)(*(_DWORD *)v5 + 164));
    v14[0] = this->?[0]; /*0x41582c*/
    v6 = this->lastSightRange + 3; /*0x415839*/
    v14[1] = this->?[1]; /*0x41583c*/
    v14[2] = this->?[2]; /*0x415850*/
    MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], v14, 0, v6, 0); /*0x415854*/
  }
  if ( !*((_DWORD *)this + 361) ) /*0x415859*/
  {
    v7 = (int *)TechnoClass::MapHouseRelationIndex((TechnoClass *)this->owner); /*0x415869*/
    *(_DWORD *)v12 = *CellClass::FindOpenNeighbor( /*0x415897*/
                        (CellClass *)&v13,
                        v1,
                        v7,
                        (int)&g_AircraftStatusFlag,
                        (int)&g_AircraftStatusFlag,
                        4,
                        1,
                        0,
                        v11);
    if ( *(_DWORD *)v12 != g_AircraftStatusFlag ) /*0x41589b*/
    {
      v8 = (void (__thiscall **)(TechnoClass *, void *, int))this->RadioClass; /*0x4158ab*/
      v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x4158b9*/
      v8[288](this, v9, 1); /*0x4158c1*/
    }
  }
  return 3; /*0x4158c7*/
}



// ==== 0x004158E0  TechnoClass::ReturnToBaseAndReload  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ReturnToBaseAndReload(TechnoClass *this)
{
  int target; // eax

  target = this->target; /*0x4158e3*/
  if ( target ) /*0x4158eb*/
  {
    if ( *((_DWORD *)this + 361) ) /*0x41590e*/
    {
      if ( ObjectClass::ComputeDistance(this, target) <= *(_DWORD *)&dword_8871E0->__pad_240[780] ) /*0x415940*/
      {
        (*(void (__thiscall **)(TechnoClass *, int, _DWORD))(this->ptr_0 + 488))(this, 27, 0); /*0x41594a*/
        --*((_BYTE *)this + 1747); /*0x415950*/
      }
      return 3; /*0x415956*/
    }
    else
    {
      (*(void (__thiscall **)(TechnoClass *, int, int))(this->ptr_0 + 1152))(this, target, 1); /*0x41591f*/
      return 3; /*0x415925*/
    }
  }
  else
  {
    (*(void (__thiscall **)(TechnoClass *, _DWORD, int))(this->ptr_0 + 1152))(this, 0, 1); /*0x4158f3*/
    (*(void (__thiscall **)(TechnoClass *, int, _DWORD))(this->ptr_0 + 488))(this, 4, 0); /*0x415901*/
    return 3; /*0x415907*/
  }
}



// ==== 0x00415960  TechnoClass::ScatterFromThreat  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ScatterFromThreat(TechnoClass *this)
{
  int target; // eax
  char v3; // al
  _DWORD v5[3]; // [esp+4h] [ebp-Ch] BYREF

  target = this->target; /*0x415966*/
  *((_BYTE *)this + 1746) = 1; /*0x41596c*/
  if ( !target || !this->passengers[1] ) /*0x41597b*/
  {
    *((_BYTE *)this + 1746) = 0; /*0x415a0a*/
LABEL_9:
    (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->ptr_0 + 968))(this, 0); /*0x415a11*/
    (*(void (__thiscall **)(TechnoClass *, _DWORD, int))(this->ptr_0 + 1152))(this, 0, 1); /*0x415a25*/
    (*(void (__thiscall **)(TechnoClass *, int, _DWORD))(this->ptr_0 + 488))(this, 4, 0); /*0x415a33*/
    return 5; /*0x415a33*/
  }
  if ( ObjectClass::ComputeDistance(this, target) > *(_DWORD *)&dword_8871E0->__pad_240[780] ) /*0x41599d*/
  {
    v3 = *((_BYTE *)this + 1747); /*0x41599f*/
    *((_BYTE *)this + 1746) = 0; /*0x4159a5*/
    if ( v3 > 0 ) /*0x4159ae*/
    {
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD))(this->ptr_0 + 488))(this, 26, 0); /*0x4159b8*/
      return 5; /*0x4159c7*/
    }
    goto LABEL_9; /*0x4159ae*/
  }
  v5[0] = this->location[0]; /*0x4159d4*/
  v5[1] = this->location[1]; /*0x4159e0*/
  v5[2] = this->location[2]; /*0x4159e7*/
  if ( (unsigned __int8)IsCoordVisibleMap((ObjectClass *)&dword_87F7E8, v5) ) /*0x4159f0*/
  {
    ProcessTechnoMovementAction((char *)this); /*0x4159fb*/
    return 5; /*0x415a09*/
  }
  return 5; /*0x4159c3*/
}



// ==== 0x00415A50  AircraftClass::ProcessReturnToBase  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::ProcessReturnToBase(AircraftClass *this)
{
  double v1; // st7
  HouseClass *owner; // ecx
  int *TransitionCount; // eax
  void (__thiscall **ptr_0)(AircraftClass *, void *, int); // edi
  void *v6; // eax
  int v8; // [esp+0h] [ebp-Ch]
  __int16 v9[2]; // [esp+4h] [ebp-8h] BYREF
  int v10; // [esp+8h] [ebp-4h] BYREF

  if ( this->? ) /*0x415a56*/
  {
    if ( this->? == (AbstractClass *)(*((int (__thiscall **)(AircraftClass *))this->FootClass + 111))(this) ) /*0x415aef*/
      (*((void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 288))(this, 0, 1); /*0x415af9*/
  }
  else
  {
    owner = this->?; /*0x415a60*/
    TransitionCount = *(int **)&owner->__pad_13C[164]; /*0x415a66*/
    if ( (unsigned int)TransitionCount >= 4 ) /*0x415a6e*/
      TransitionCount = (int *)HouseClass::GetTransitionCount(owner); /*0x415a75*/
    *(_DWORD *)v9 = *CellClass::FindOpenNeighbor( /*0x415aa3*/
                       (CellClass *)&v10,
                       v1,
                       TransitionCount,
                       (int)&g_AircraftStatusFlag,
                       (int)&g_AircraftStatusFlag,
                       4,
                       1,
                       0,
                       v8);
    if ( *(_DWORD *)v9 != g_AircraftStatusFlag ) /*0x415aa7*/
    {
      ptr_0 = (void (__thiscall **)(AircraftClass *, void *, int))this->FootClass; /*0x415ab8*/
      v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x415ac6*/
      ptr_0[288](this, v6, 1); /*0x415ace*/
      return 3; /*0x415ade*/
    }
  }
  return 3; /*0x415ada*/
}



// ==== 0x00415B10  AircraftClass::FindLandingCell  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::FindLandingCell(AircraftClass *this, int *a2, int a3)
{
  int *v5; // ebp
  int v6; // esi
  _WORD *v7; // eax
  int v8; // esi
  int v9; // ecx
  __int16 v10; // dx
  int v11; // esi
  void *v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // esi
  void *v16; // eax
  int *v18; // [esp+28h] [ebp-18h] BYREF
  int v19; // [esp+2Ch] [ebp-14h]
  char v20[4]; // [esp+30h] [ebp-10h] BYREF
  _DWORD v21[3]; // [esp+34h] [ebp-Ch] BYREF
  int *v22; // [esp+44h] [ebp+4h]

  v18 = 0; /*0x415b1f*/
  v19 = 0; /*0x415b29*/
  v5 = dword_817A58; /*0x415b2d*/
  do /*0x415bab*/
  {
    v6 = *v5; /*0x415b34*/
    v7 = (_WORD *)(*((int (__thiscall **)(AircraftClass *, char *))this->FootClass + 110))(this, v20); /*0x415b3e*/
    v8 = v6 & 7; /*0x415b44*/
    v9 = 4 * v8 + 9041544; /*0x415b55*/
    v10 = *v7 + LOWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x415b5c*/
    v11 = *a2; /*0x415b5f*/
    LOWORD(v22) = v10; /*0x415b6b*/
    HIWORD(v22) = v7[1] + *(_WORD *)(v9 + 2); /*0x415b74*/
    v18 = v22; /*0x415b83*/
    v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v18); /*0x415b87*/
    if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v11 + 428))(a2, v12, -1, -1, 0, 1) ) /*0x415b8f*/
      break; /*0x415b97*/
    ++v5; /*0x415b9d*/
    ++v19; /*0x415ba7*/
  }
  while ( (int)v5 < (int)dword_817A78 ); /*0x415bab*/
  LOWORD(v22) = (unsigned __int16)dword_817A58[v19] << 13; /*0x415bc3*/
  v13 = this->?[1]; /*0x415bc8*/
  v21[0] = this->?[0]; /*0x415bcb*/
  v14 = this->?[2]; /*0x415bd3*/
  v21[1] = v13; /*0x415bd6*/
  v21[2] = v14; /*0x415bda*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(*a2 + 216))( /*0x415bf3*/
          a2,
          v21,
          (unsigned __int8)((((unsigned int)v22 >> 7) + 1) >> 1)) )
    return 0; /*0x415c57*/
  (*(void (__thiscall **)(int *, int, _DWORD))(*a2 + 488))(a2, 2, 0); /*0x415c05*/
  v15 = *a2; /*0x415c0b*/
  v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v18); /*0x415c19*/
  (*(void (__thiscall **)(int *, void *, int))(v15 + 1152))(a2, v16, 1); /*0x415c21*/
  if ( (*((int (__thiscall **)(AircraftClass *, int, int *))this->FootClass + 158))(this, 2, a2) == 1 ) /*0x415c37*/
    (*((void (__thiscall **)(AircraftClass *, int))this->FootClass + 157))(this, 9); /*0x415c3f*/
  return 1; /*0x415c45*/
}



// ==== 0x00415C60  ObjectClass::ProcessTechnoMovementAction  this=TechnoClass  sig=csp ====
int __thiscall ProcessTechnoMovementAction(char *this)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // ebx
  unsigned int v7; // ebp
  double v8; // st7
  double v9; // st7
  int v10; // eax
  _DWORD *v11; // ebx
  int *v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  void *v16; // eax
  _DWORD *v17; // eax
  wchar_t *v18; // eax
  double v20; // [esp+20h] [ebp-20h] BYREF
  double v21; // [esp+28h] [ebp-18h] BYREF
  int v22; // [esp+30h] [ebp-10h]
  int v23; // [esp+34h] [ebp-Ch] BYREF
  int v24; // [esp+38h] [ebp-8h]
  int v25; // [esp+3Ch] [ebp-4h]

  v2 = (_DWORD *)LinkedList::Pop((_DWORD *)this + 69); /*0x415c73*/
  if ( !v2 ) /*0x415c77*/
    return 0; /*0x415c77*/
  v3 = *(_DWORD *)this; /*0x415c83*/
  --this->q0BF; /*0x415c8d*/
  v4 = (*(int (__thiscall **)(char *, double *))(v3 + 72))(this, &v21); /*0x415c93*/
  v23 = *(_DWORD *)v4; /*0x415c98*/
  v24 = *(_DWORD *)(v4 + 4); /*0x415c9f*/
  v5 = *(_DWORD *)(v4 + 8); /*0x415ca3*/
  LOBYTE(v4) = this->ammo; /*0x415ca6*/
  v25 = v5; /*0x415cae*/
  if ( (v4 & 1) != 0 ) /*0x415cb2*/
    LOWORD(v20) = *(_WORD *)ProgressTimer::GetValue((_WORD *)this + 452, &v20) - 0x3FFF; /*0x415ccc*/
  else
    LOWORD(v20) = *(_WORD *)ProgressTimer::GetValue((_WORD *)this + 452, &v20) + 0x3FFF; /*0x415cee*/
  v6 = v25; /*0x415d00*/
  LODWORD(v20) = SLOWORD(v20) - 0x3FFF; /*0x415d04*/
  v21 = (double)SLODWORD(v20) * -0.00009587672516830327; /*0x415d13*/
  v7 = HIDWORD(v21); /*0x415d1b*/
  v20 = (double)v24; /*0x415d25*/
  v8 = Math::SinCos(v21); /*0x415d29*/
  LODWORD(v20) = Math::RoundToInt(v20 - v8 * 128.0); /*0x415d3d*/
  v9 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v7, LODWORD(v21)))); /*0x415d47*/
  v10 = Math::RoundToInt(v9 * 128.0 + (double)v23); /*0x415d59*/
  v24 = LODWORD(v20); /*0x415d66*/
  v23 = v10; /*0x415d70*/
  v25 = v6; /*0x415d74*/
  v11 = Coord::To_Cell(&dword_87F7E8, &v23); /*0x415d81*/
  if ( (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, _DWORD, int))(*v2 + 428))(v2, v11, -1, -1, 0, 1) /*0x415de8*/
    || (v12 = ObjectPlacement::CalcPosition(v11, (int *)&v21, &v23, 0, 0, 0),
        v13 = *v12,
        v14 = v12[1],
        v15 = v12[2],
        v13 == dword_889E88)
    && v14 == dword_889E8C
    && v15 == dword_889E90
    || (v24 = v14, v23 = v13, !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *))(*v2 + 232))(v2, &v23)) )
  {
    CellClass::AddObject((_DWORD *)this + 69, v2); /*0x415eb8*/
    (*(void (__thiscall **)(_DWORD *))(*v2 + 284))(v2); /*0x415ec1*/
    ++this->q0BF; /*0x415ec7*/
    return 0; /*0x415ecf*/
  }
  v21 = *(double *)(this + 156); /*0x415e00*/
  v22 = this->locationZ; /*0x415e13*/
  StartAudioControllerAt(dword_8871E0->?[2], (int)&v21, 0); /*0x415e21*/
  v16 = Coord::To_Cell(&dword_87F7E8, &v23); /*0x415e30*/
  v17 = (_DWORD *)(*(int (__thiscall **)(void *, double *))(*(_DWORD *)v16 + 72))(v16, &v21); /*0x415e3e*/
  LOWORD(v20) = *v17 / 256; /*0x415e51*/
  WORD1(v20) = v17[1] / 256; /*0x415e65*/
  v2[343] = LODWORD(v20); /*0x415e6e*/
  if ( this->q175 ) /*0x415e74*/
    TeamClass::LiberateMember_Start(v2, -1, 0); /*0x415e83*/
  v18 = dword_A8ED84; /*0x415e88*/
  *(this + 1747) = 5; /*0x415e93*/
  this->diskLaserTimer = v18; /*0x415e9c*/
  this->missionStatus = v24; /*0x415ea4*/
  this->q2F4 = 0; /*0x415eaa*/
  return 0; /*0x415ea2*/
}



// ==== 0x00415EE0  BulletClass::FlightUpdate  this=TechnoClass  sig=csp ====
double __thiscall BulletClass::FlightUpdate(Class_7E22A4 *this, double a2, int a3, int a4)
{
  double result; // st7
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  unsigned int v14; // ebx
  _DWORD *Value; // ebx
  int v21; // edx
  _DWORD *v24; // esi
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  int v27; // edx
  int v28; // eax
  __int16 v29; // bx
  unsigned int v31; // ebx
  __int16 v34; // bx
  __int64 v38; // rcx
  Class_7E22A4 *v46; // esi
  _DWORD *v47; // eax
  _DWORD *v48; // eax
  _DWORD *v49; // eax
  _DWORD *v50; // eax
  _DWORD *v51; // eax
  void *v52; // edx
  int v53; // eax
  int v54; // edx
  void *v55; // eax
  double v56; // [esp+4h] [ebp-90h]
  double v57; // [esp+Ch] [ebp-88h]
  double v58; // [esp+Ch] [ebp-88h]
  double v59; // [esp+Ch] [ebp-88h]
  double v60; // [esp+Ch] [ebp-88h]
  double v61; // [esp+14h] [ebp-80h]
  double v62; // [esp+14h] [ebp-80h]
  double v63; // [esp+14h] [ebp-80h]
  _WORD *v64; // [esp+1Ch] [ebp-78h]
  double *v65; // [esp+2Ch] [ebp-68h]
  int v66; // [esp+30h] [ebp-64h] BYREF
  _BYTE v67[12]; // [esp+34h] [ebp-60h] BYREF
  double v68; // [esp+44h] [ebp-50h] BYREF
  int v69; // [esp+4Ch] [ebp-48h]
  double v70; // [esp+58h] [ebp-3Ch] BYREF
  _DWORD v71[3]; // [esp+60h] [ebp-34h] BYREF
  double v72; // [esp+6Ch] [ebp-28h]
  int v73[2]; // [esp+7Ch] [ebp-18h] BYREF
  double v74; // [esp+84h] [ebp-10h]
  double v75; // [esp+8Ch] [ebp-8h]

  if ( this->q118 ) /*0x415eee*/
  {
    ProcessTechnoMovementAction((char *)this); /*0x415ef8*/
  }
  else
  {
    v6 = LODWORD(a2); /*0x415f0b*/
    v7 = TechnoClass::FireWeapon((TechnoClass *)this); /*0x415f12*/
    v8 = v7; /*0x415f17*/
    v65 = (double *)v7; /*0x415f1b*/
    if ( v7 ) /*0x415f1f*/
    {
      if ( !*(_DWORD *)(*(_DWORD *)(v7 + 172) + 732) ) /*0x415f2b*/
      {
        if ( !*((_DWORD *)this + 413) ) /*0x415f39*/
          WinAPI::Wrapper(-2147467261); /*0x415f48*/
        v66 = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 132))(*((_DWORD *)this + 413)); /*0x415f5c*/
        _ESI = (double *)(v8 + 232); /*0x415f60*/
        __asm { fild [esp+78h+var_64] } /*0x415f66*/
        __asm { fstp qword ptr [esp+78h+var_54+4] }
        BulletClass::NormalizeZeroVector(_ESI); /*0x415f70*/
        Vector3::Magnitude((int *)_ESI); /*0x415f77*/
        __asm { fdivr qword ptr [esp+78h+var_54+4] } /*0x415f7c*/
        __asm
        {
          fld st
          fmul qword ptr [esi]
          fstp qword ptr [esi]
        }
        *_ESI = _RT1; /*0x415f8b*/
        __asm /*0x415f8d*/
        {
          fld st
          fmul qword ptr [esi+8]
          fstp qword ptr [esi+8]
        }
        _ESI[1] = _RT1; /*0x415f92*/
        __asm /*0x415f95*/
        {
          fmul qword ptr [esi+10h]
          fstp qword ptr [esi+10h]
        }
        _ESI[2] = _RT1; /*0x415f98*/
        v66 = *(__int16 *)Vector::ToFacingMath(&v66, v64) - 0x3FFF; /*0x415fa9*/
        __asm /*0x415faf*/
        {
          fild [esp+78h+var_64]
          fmul ds:dbl_7E2810
          fstp qword ptr [esp+78h+var_64+4]
        }
        Vector3::Magnitude((int *)_ESI); /*0x415fbd*/
        __asm /*0x415fc2*/
        {
          fstp qword ptr [esp+78h+var_54+4]
          fld qword ptr [esp+78h+var_64+4]
          fcomp ds:dbl_7E2800
          fnstsw ax
        }
        if ( (_AX & 0x4000) == 0 ) /*0x415fd5*/
        {
          v14 = *(_DWORD *)&v67[4]; /*0x415fd7*/
          Math::ArcTan2(*(double *)v67); /*0x415fe1*/
          __asm { fdivr qword ptr [esi] } /*0x415fe6*/
          v57 = COERCE_DOUBLE(__PAIR64__(v14, *(unsigned int *)v67)); /*0x415fed*/
          __asm { fstp qword ptr [esi] } /*0x415fee*/
          *_ESI = _RT1; /*0x415fee*/
          Math::ArcTan2(v57); /*0x415ff0*/
          __asm { fdivr qword ptr [esi+8] } /*0x415ff5*/
          __asm { fstp qword ptr [esi+8] }
          _ESI[1] = _RT1; /*0x415ffb*/
        }
        Math::ArcTan2(-0.00009587672516830327); /*0x416008*/
        __asm { fmul qword ptr [esi] } /*0x41600d*/
        __asm { fstp qword ptr [esi] }
        *_ESI = _RT1; /*0x416019*/
        Math::ArcTan2(-0.00009587672516830327); /*0x41601b*/
        __asm { fmul qword ptr [esi+8] } /*0x416020*/
        __asm { fstp qword ptr [esi+8] }
        _ESI[1] = _RT1; /*0x41602d*/
        Math::SinCos(-0.00009587672516830327); /*0x416030*/
        __asm { fmul qword ptr [esp+90h+var_54+4] } /*0x416035*/
        __asm { fstp qword ptr [esi+10h] }
        _ESI[2] = _RT1; /*0x416047*/
        Value = ProgressTimer::GetValue((ProgressTimer *)(this + 928), v67); /*0x416051*/
        Vector2::NormalizeNonZero((int *)_ESI); /*0x416053*/
        Function::41C430(_ESI); /*0x41605a*/
        v21 = *(__int16 *)Value; /*0x41605f*/
        __asm { fstp qword ptr [esp+78h+var_54+4] } /*0x416062*/
        v66 = v21 - 0x3FFF; /*0x41606f*/
        __asm /*0x416073*/
        {
          fild [esp+80h+var_64]
          fmul ds:dbl_7E2810
          fstp qword ptr [esp+80h+var_84+4]; double
        }
        Math::ArcTan2(v61); /*0x416080*/
        __asm /*0x416085*/
        {
          fmul qword ptr [esp+80h+var_54+4]
          fstp qword ptr [esi]
        }
        *_ESI = _RT1; /*0x416089*/
        v66 = *(__int16 *)Value - 0x3FFF; /*0x416093*/
        __asm /*0x416097*/
        {
          fild [esp+80h+var_64]
          fmul ds:dbl_7E2810
          fstp qword ptr [esp+80h+var_84+4]; double
        }
        Math::SinCos(v62); /*0x4160a4*/
        __asm { fmul qword ptr [esp+80h+var_54+4] } /*0x4160a9*/
        v6 = LODWORD(a2); /*0x4160ad*/
        __asm /*0x4160b3*/
        {
          fchs
          fstp qword ptr [esi+8]
        }
        _ESI[1] = _RT1; /*0x4160b5*/
        v8 = (int)v65; /*0x4160b8*/
      }
      if ( *(_DWORD *)(*(_DWORD *)(v8 + 172) + 732) == 1 ) /*0x4160c9*/
      {
        v24 = (_DWORD *)(*(int (__thiscall **)(Class_7E22A4 *, _BYTE *))(this->u32_48)(this, v67); /*0x4160dd*/
        v25 = (_DWORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v6 + 72))(v6, &v70); /*0x4160e6*/
        v26 = Coord::Subtract((Coord *)&v71[1], *v25 - *v24, v25[1] - v24[1], v25[2] - v24[2]); /*0x416106*/
        LODWORD(v68) = *v26; /*0x41610d*/
        v27 = v26[1]; /*0x416111*/
        __asm { fild [esp+78h+var_54+4] } /*0x416114*/
        v28 = v26[2]; /*0x416118*/
        HIDWORD(v68) = v27; /*0x41611b*/
        v69 = v28; /*0x41611f*/
        __asm /*0x416123*/
        {
          fstp qword ptr [esp+78h+var_34+4]
          fild [esp+78h+var_4C]
        }
        __asm
        {
          fstp qword ptr [esp+58h]
          fild [esp+80h+var_48]
        }
        v74 = v72; /*0x416144*/
        __asm /*0x41614c*/
        {
          fstp [esp+88h+var_8]
          fld [esp+88h+var_28]
          fchs
          fstp [esp+88h+var_8C+4]; double
        }
        *(_QWORD *)v73 = *(_QWORD *)&v71[1]; /*0x41615c*/
        Math::CalcAngle(v58, *(double *)&v71[1]); /*0x416168*/
        __asm { fsub ds:dbl_7E2820 } /*0x41616d*/
        __asm { fmul ds:dbl_7E2818 }
        v29 = Math::RoundToInt(result); /*0x416181*/
        _ESI = v65 + 29; /*0x416188*/
        Vector2::NormalizeNonZero((int *)v65 + 58); /*0x416190*/
        Function::41C430(v65 + 29); /*0x416197*/
        __asm { fstp qword ptr [esp+78h+var_54+4] } /*0x41619c*/
        v66 = v29 - 0x3FFF; /*0x4161a9*/
        __asm /*0x4161ad*/
        {
          fild [esp+78h+var_64]
          fmul ds:dbl_7E2810
          fstp qword ptr [esp+78h+var_64+4]
        }
        v31 = *(_DWORD *)&v67[4]; /*0x4161bb*/
        Math::ArcTan2(*(double *)v67); /*0x4161c5*/
        __asm { fmul qword ptr [esp+80h+var_54+4] } /*0x4161ca*/
        __asm { fstp qword ptr [esi] }
        *_ESI = _RT1; /*0x4161cf*/
        Math::SinCos(COERCE_DOUBLE(__PAIR64__(v31, *(unsigned int *)v67))); /*0x4161d6*/
        __asm { fmul qword ptr [esp+88h+var_54+4] } /*0x4161db*/
        __asm
        {
          fchs
          fstp qword ptr [esi+8]
        }
        _ESI[1] = _RT1; /*0x4161e8*/
        Math::Hypotenuse2D(v73); /*0x4161eb*/
        __asm { fstp qword ptr [esp+80h+var_84+4]; double } /*0x4161fb*/
        Math::CalcAngle(v75, v63); /*0x416200*/
        __asm { fsub ds:dbl_7E2820 } /*0x416205*/
        __asm { fmul ds:dbl_7E2818 }
        v34 = Math::RoundToInt(result); /*0x416219*/
        v66 = *(__int16 *)Vector::ToFacingMath((int *)v67, v64) - 0x3FFF; /*0x416231*/
        __asm /*0x416237*/
        {
          fild [esp+78h+var_64]
          fmul ds:dbl_7E2810
          fstp qword ptr [esp+78h+var_64+4]
        }
        Vector3::Magnitude((int *)v65 + 58); /*0x416245*/
        __asm /*0x41624a*/
        {
          fstp qword ptr [esp+78h+var_54+4]
          fld qword ptr [esp+78h+var_64+4]
          fcomp ds:dbl_7E2800
          fnstsw ax
        }
        if ( (_AX & 0x4000) == 0 ) /*0x41625d*/
        {
          Math::ArcTan2(*(double *)v67); /*0x416269*/
          __asm { fdivr qword ptr [esi] } /*0x41626e*/
          v59 = *(double *)v67; /*0x416279*/
          __asm { fstp qword ptr [esi] } /*0x41627a*/
          *_ESI = _RT1; /*0x41627a*/
          Math::ArcTan2(v59); /*0x41627c*/
          __asm { fdivr qword ptr [esi+8] } /*0x416281*/
          __asm { fstp qword ptr [esi+8] }
          v65[30] = _RT1; /*0x416287*/
        }
        v66 = v34 - 0x3FFF; /*0x416292*/
        __asm /*0x416296*/
        {
          fild [esp+78h+var_64]
          fmul ds:dbl_7E2810
          fstp qword ptr [esp+78h+var_64+4]
        }
        v38 = *(_QWORD *)v67; /*0x4162a8*/
        Math::ArcTan2(*(double *)v67); /*0x4162ae*/
        __asm { fmul qword ptr [esi] } /*0x4162b3*/
        v60 = COERCE_DOUBLE(__PAIR64__(HIDWORD(v38), *(unsigned int *)v67)); /*0x4162ba*/
        __asm { fstp qword ptr [esi] } /*0x4162bb*/
        *_ESI = _RT1; /*0x4162bb*/
        Math::ArcTan2(v60); /*0x4162bd*/
        __asm { fmul qword ptr [esi+8] } /*0x4162c2*/
        v56 = COERCE_DOUBLE(__PAIR64__(HIDWORD(v38), *(unsigned int *)v67)); /*0x4162ca*/
        __asm { fstp qword ptr [esi+8] } /*0x4162cb*/
        v65[30] = _RT1; /*0x4162cb*/
        Math::SinCos(v56); /*0x4162ce*/
        __asm { fmul qword ptr [esp+90h+var_54+4] } /*0x4162d3*/
        __asm { fstp qword ptr [esi+10h] }
        v65[31] = _RT1; /*0x4162de*/
        _EAX = *(_DWORD *)(*(int (__thiscall **)(Class_7E22A4 *, _DWORD))(this->q3F8)(this, 0); /*0x4162e9*/
        __asm /*0x4162ed*/
        {
          fild dword ptr [eax+0A8h]
          fstp qword ptr [esp+78h+var_54+4]
        }
        BulletClass::NormalizeZeroVector(_ESI); /*0x4162f7*/
        Vector3::Magnitude((int *)_ESI); /*0x4162fe*/
        __asm /*0x416303*/
        {
          fdivr qword ptr [esp+78h+var_54+4]
          fld st
          fmul qword ptr [esi]
          fstp qword ptr [esi]
        }
        *_ESI = _RT1; /*0x41630b*/
        __asm /*0x41630d*/
        {
          fld st
          fmul qword ptr [esi+8]
          fstp qword ptr [esi+8]
        }
        v65[30] = _RT1; /*0x416312*/
        __asm /*0x416315*/
        {
          fmul qword ptr [esi+10h]
          fstp qword ptr [esi+10h]
        }
        v65[31] = _RT1; /*0x416318*/
      }
      if ( (unsigned __int8)House::IsHumanPlayer(*((House **)this + 135)) ) /*0x416325*/
      {
        v46 = this + 156; /*0x416332*/
        v68 = *(double *)(this + 156); /*0x41633c*/
        v69 = this->locationZ; /*0x41634f*/
        if ( (unsigned __int8)Cell::IsPassable(&v68) ) /*0x416358*/
          goto LABEL_21; /*0x416358*/
        Coord::Subtract((Coord *)&v68, 512, 512, 0); /*0x416375*/
        v47 = Coord::Subtract( /*0x41639d*/
                (Coord *)&v71[1],
                *(_DWORD *)v46 + LODWORD(v68),
                this->owningHouseIndex + HIDWORD(v68),
                this->locationZ + v69);
        *(_DWORD *)v67 = *v47; /*0x4163a4*/
        *(_QWORD *)&v67[4] = *(_QWORD *)(v47 + 1); /*0x4163ab*/
        if ( (unsigned __int8)Cell::IsPassable(v67) ) /*0x4163c0*/
          goto LABEL_21; /*0x4163c0*/
        Coord::Subtract((Coord *)&v68, -512, -512, 0); /*0x4163dd*/
        v48 = Coord::Subtract( /*0x416405*/
                (Coord *)&v71[1],
                *(_DWORD *)v46 + LODWORD(v68),
                this->owningHouseIndex + HIDWORD(v68),
                this->locationZ + v69);
        *(_DWORD *)v67 = *v48; /*0x41640c*/
        *(_QWORD *)&v67[4] = *(_QWORD *)(v48 + 1); /*0x416413*/
        if ( (unsigned __int8)Cell::IsPassable(v67) ) /*0x416428*/
          goto LABEL_21; /*0x416428*/
        Coord::Subtract((Coord *)&v68, 512, -512, 0); /*0x416445*/
        v49 = Coord::Subtract( /*0x41646d*/
                (Coord *)&v71[1],
                *(_DWORD *)v46 + LODWORD(v68),
                this->owningHouseIndex + HIDWORD(v68),
                this->locationZ + v69);
        *(_DWORD *)v67 = *v49; /*0x416474*/
        *(_QWORD *)&v67[4] = *(_QWORD *)(v49 + 1); /*0x41647b*/
        if ( (unsigned __int8)Cell::IsPassable(v67) /*0x416514*/
          || (Coord::Subtract((Coord *)&v68, 512, -512, 0),
              v50 = Coord::Subtract(
                      (Coord *)&v71[1],
                      *(_DWORD *)v46 + LODWORD(v68),
                      this->owningHouseIndex + HIDWORD(v68),
                      this->locationZ + v69),
              *(_DWORD *)v67 = *v50,
              *(_QWORD *)&v67[4] = *(_QWORD *)(v50 + 1),
              (unsigned __int8)Cell::IsPassable(v67))
          || (v51 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)LODWORD(a2) + 72))(
                                LODWORD(a2),
                                &v71[1]),
              (unsigned __int8)Cell::IsPassable(v51)) )
        {
LABEL_21:
          LODWORD(v68) = *(_DWORD *)v46; /*0x416529*/
          v52 = (void *)this->owner; /*0x41652d*/
          HIDWORD(v68) = this->owningHouseIndex; /*0x416538*/
          v69 = this->locationZ; /*0x416545*/
          MapClass::RevealArea1( /*0x416557*/
            (MapClass *)&dword_87F7E8,
            (int *)&v68,
            dword_8871E0->AttackingAircraftSightRange,
            v52,
            0,
            0,
            0,
            1,
            0);
          v53 = *(_DWORD *)v46; /*0x41655f*/
          v54 = this->locationZ; /*0x416561*/
          HIDWORD(v68) = this->owningHouseIndex; /*0x416566*/
          LODWORD(v68) = v53; /*0x416572*/
          v55 = (void *)this->owner; /*0x416576*/
          v69 = v54; /*0x416580*/
          MapClass::RevealArea1( /*0x416595*/
            (MapClass *)&dword_87F7E8,
            (int *)&v68,
            dword_8871E0->AttackingAircraftSightRange,
            v55,
            0,
            0,
            0,
            1,
            1);
        }
      }
    }
    if ( *((_BYTE *)this + 1738) ) /*0x41659e*/
      return ((double (__thiscall *)(Class_7E22A4 *))*(_DWORD *)(this->q0F8)(this); /*0x4165ac*/
  }
  return result; /*0x415eff*/
}



// ==== 0x004165C0  AircraftClass::DeployWithAnim  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::DeployWithAnim(
        AircraftClass *this,
        int a2,
        int a3,
        int *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void *a10)
{
  int v11; // ebp
  AnimClass *v13; // ebx
  void *v14; // edi
  int *v15; // eax
  char v16; // [esp+0h] [ebp-14h]
  __int64 v17; // [esp+4h] [ebp-10h]
  _BYTE v18[8]; // [esp+Ch] [ebp-8h] BYREF

  v11 = FootClass::ProcessDeploy( /*0x4165f1*/
          this,
          a2,
          COERCE_DOUBLE(__PAIR64__((unsigned int)a4, a3)),
          (int *)a5,
          a6,
          a7,
          (void *)a8,
          v16,
          v17);
  if ( v11 == 4 ) /*0x4165f6*/
  {
    (*(void (__thiscall **)(AircraftClass *, _DWORD))(this->ptr_0 + 952))(this, 0); /*0x416613*/
    if ( *(int *)(this->Type + 1852) > 0 ) /*0x416627*/
    {
      v13 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x416633*/
      if ( v13 ) /*0x41663a*/
      {
        v14 = *(void **)(*(_DWORD *)(this->Type + 1840) /*0x416671*/
                       + 4
                       * ((unsigned int)Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)
                        % *(_DWORD *)(this->Type + 1852)));
        v15 = (int *)(*(int (__thiscall **)(AircraftClass *, _BYTE *))(this->ptr_0 + 164))(this, v18); /*0x41667b*/
        AnimClass::ctor(v13, v14, v15, 0, 1, (void *)0x600, 0, 0); /*0x416685*/
      }
    }
    if ( !(*(unsigned __int8 (__thiscall **)(AircraftClass *, int))(this->ptr_0 + 988))(this, a6) ) /*0x416694*/
      (*(void (__thiscall **)(AircraftClass *))(this->ptr_0 + 248))(this); /*0x4166a3*/
  }
  else if ( v11 == 5 ) /*0x4165f9*/
  {
    return 5; /*0x416609*/
  }
  return v11; /*0x4165ff*/
}



// ==== 0x004166C0  AircraftClass::Mission_Enter  this=AircraftClass  sig=csp ====
int __usercall AircraftClass::Mission_Enter@<eax>(
        AircraftClass *this,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5@<esi>)
{
  Carryall *v5; // ecx
  int result; // eax
  int v7; // esi
  int Carryall_field_00; // eax
  char *MissionControl; // eax
  int v10; // eax
  Carryall v11; // edi
  void *NearbyCell; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // ecx
  int *v16; // eax
  int v17; // edx
  int v18; // edi
  _DWORD *v19; // eax
  int Element; // eax
  int *v21; // eax
  int v22; // ecx
  _DWORD *v23; // eax
  int v24; // edi
  int v25; // ebx
  _WORD *v26; // eax
  int v27; // ecx
  _DWORD *v28; // eax
  int v29; // ecx
  _DWORD *v30; // eax
  int v31; // edi
  int v32; // ebx
  _WORD *v33; // eax
  int v34; // ecx
  _DWORD *v35; // eax
  int v36; // [esp+0h] [ebp-60h]
  int v37; // [esp+4h] [ebp-5Ch]
  int v40; // [esp+1Ch] [ebp-44h]
  int v41; // [esp+1Ch] [ebp-44h]
  __int16 v42[2]; // [esp+20h] [ebp-40h] BYREF
  __int16 v43[2]; // [esp+24h] [ebp-3Ch] BYREF
  _BYTE v44[4]; // [esp+28h] [ebp-38h] BYREF
  int v45; // [esp+2Ch] [ebp-34h] BYREF
  _DWORD v46[2]; // [esp+30h] [ebp-30h] BYREF
  int v47; // [esp+38h] [ebp-28h]
  _BYTE v48[12]; // [esp+3Ch] [ebp-24h] BYREF
  _BYTE v49[12]; // [esp+48h] [ebp-18h] BYREF
  _DWORD v50[3]; // [esp+54h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(v5[433].Carryall_field_00 + 3580) ) /*0x4166c6*/
    return Carryall::MissionStateMachine(v5); /*0x4166d0*/
  v7 = (int)v5; /*0x4166e6*/
  switch ( v5[47].Carryall_field_00 ) /*0x4166f4*/
  {
    case 0: /*0x4166f4*/
      Carryall_field_00 = v5[361].Carryall_field_00; /*0x4166fb*/
      if ( Carryall_field_00 ) /*0x416703*/
      {
        v11.Carryall_field_00 = v5->Carryall_field_00; /*0x416748*/
        NearbyCell = InfantryClass::FindNearbyCell((InfantryClass *)v5, Carryall_field_00); /*0x41674f*/
        (*(void (__thiscall **)(int, void *, int))(v11.Carryall_field_00 + 1152))(v7, NearbyCell, 1); /*0x416757*/
        *(_DWORD *)(v7 + 188) = 1; /*0x41675d*/
      }
      else
      {
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(v5->Carryall_field_00 + 1156))(v5, 0, 1); /*0x41670d*/
      }
      goto LABEL_6; /*0x41670d*/
    case 1: /*0x4166f4*/
      v13 = v5[361].Carryall_field_00; /*0x416769*/
      if ( !v13 ) /*0x416771*/
        goto LABEL_29; /*0x416771*/
      v14 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, int, int, int, int, int))(*(_DWORD *)v13 + 76))( /*0x41677f*/
                        v13,
                        v48,
                        v7,
                        a4,
                        a5,
                        a3,
                        a2);
      if ( !*(_DWORD *)(v7 + 1652) ) /*0x41678a*/
        WinAPI::Wrapper(-2147467261); /*0x416799*/
      (*(void (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(v7 + 1652) + 68))(*(_DWORD *)(v7 + 1652), *v14); /*0x4167b4*/
      *(_DWORD *)(v7 + 188) = 2; /*0x4167b7*/
      return 1; /*0x4167cd*/
    case 2: /*0x4166f4*/
      if ( v5[328].Carryall_field_00 != -1 ) /*0x4167d5*/
      {
        v15 = v5[361].Carryall_field_00; /*0x4167db*/
        if ( !v15 ) /*0x4167e3*/
          goto LABEL_15; /*0x4167e3*/
        v16 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v15 + 72))(v15, v49); /*0x4167ec*/
        v17 = *v16; /*0x4167ef*/
        v18 = v16[1]; /*0x4167fb*/
        v47 = v16[2]; /*0x416801*/
        a2 = *(_DWORD *)(v7 + 164); /*0x41680e*/
        v37 = *(_DWORD *)(v7 + 160) - v18; /*0x416811*/
        v36 = *(_DWORD *)(v7 + 156) - v17; /*0x416812*/
        v47 = a2; /*0x416817*/
        v19 = Coord::Subtract((Coord *)v50, v36, v37, 0); /*0x41681b*/
        v46[0] = *v19; /*0x416822*/
        v46[1] = v19[1]; /*0x416829*/
        v47 = v19[2]; /*0x416834*/
        if ( (int)Coord::Length((Coord *)v46) < 256 ) /*0x416847*/
        {
LABEL_15:
          Element = Array::GetElement( /*0x416864*/
                      *(Array **)&dword_A83D4C->__pad_140[4 * *(_DWORD *)(v7 + 1312) + 208],
                      *(char *)(v7 + 1670));
          v21 = (int *)VectorClass::GetAtChecked( /*0x41687d*/
                         *(VectorClass **)&dword_A83D4C->__pad_140[4 * *(_DWORD *)(v7 + 1312) + 208],
                         Element);
          BuildingClass::ValidateFoundation_0(v7, a2, a3, v21, a4, a5); /*0x416885*/
        }
      }
      if ( !*(_DWORD *)(v7 + 1652) ) /*0x41688a*/
        WinAPI::Wrapper(-2147467261); /*0x416899*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v7 + 1652) + 16))(*(_DWORD *)(v7 + 1652)) ) /*0x4168a7*/
        goto LABEL_40; /*0x4168a7*/
      v22 = *(_DWORD *)(v7 + 1444); /*0x4168b2*/
      if ( v22 ) /*0x4168ba*/
      {
        v23 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v22 + 76))(v22, v50, v7); /*0x4168c4*/
        v24 = *v23 / 256; /*0x4168ed*/
        v25 = v23[1] / 256; /*0x4168f0*/
        v26 = (_WORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v7 + 440))(v7, v44); /*0x4168f3*/
        if ( (_WORD)v24 == *v26 && (_WORD)v25 == v26[1] ) /*0x416902*/
          goto LABEL_40; /*0x416902*/
      }
      v27 = *(_DWORD *)(v7 + 1444); /*0x416908*/
      if ( v27 ) /*0x416910*/
      {
        v28 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v27 + 76))(v27, v50, v7); /*0x41691a*/
        LOWORD(v40) = *v28 / 256; /*0x41692f*/
        HIWORD(v40) = v28[1] / 256; /*0x416947*/
        *(_DWORD *)v42 = v40; /*0x416950*/
        if ( !Cell::IsOccupied((Cell *)v7, v42, 1) ) /*0x416957*/
          goto LABEL_24; /*0x41695e*/
      }
      *(_DWORD *)(v7 + 188) = 4; /*0x416977*/
      return 1; /*0x41698d*/
    case 3: /*0x4166f4*/
      if ( !v5[413].Carryall_field_00 ) /*0x41698e*/
        WinAPI::Wrapper(-2147467261); /*0x41699d*/
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v5[413].Carryall_field_00 + 16))(v5[413].Carryall_field_00) ) /*0x4169ab*/
LABEL_29:
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v7 + 1156))(v7, 0, 1); /*0x4169b2*/
      return 1; /*0x4169cc*/
    case 4: /*0x4166f4*/
      if ( !v5[413].Carryall_field_00 ) /*0x4169cd*/
        WinAPI::Wrapper(-2147467261); /*0x4169dc*/
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v5[413].Carryall_field_00 + 16))(v5[413].Carryall_field_00) /*0x416a45*/
        || (v29 = *(_DWORD *)(v7 + 1444)) != 0
        && (v30 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v29 + 76))(v29, v50, v7),
            v31 = *v30 / 256,
            v32 = v30[1] / 256,
            v33 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v7 + 440))(v7, &v45),
            (_WORD)v31 == *v33)
        && (_WORD)v32 == v33[1] )
      {
LABEL_40:
        *(_DWORD *)(v7 + 188) = 3; /*0x416ab6*/
      }
      else
      {
        v34 = *(_DWORD *)(v7 + 1444); /*0x416a47*/
        if ( v34 ) /*0x416a4f*/
        {
          v35 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v34 + 76))(v34, v50, v7); /*0x416a59*/
          LOWORD(v41) = *v35 / 256; /*0x416a6e*/
          HIWORD(v41) = v35[1] / 256; /*0x416a86*/
          *(_DWORD *)v43 = v41; /*0x416a8f*/
          if ( !Cell::IsOccupied((Cell *)v7, v43, 1) ) /*0x416a96*/
          {
LABEL_24:
            *(_DWORD *)(v7 + 188) = 0; /*0x416960*/
            return 1; /*0x416976*/
          }
        }
      }
      result = 1; /*0x416ac3*/
      break; /*0x416ac3*/
    default:
LABEL_6:
      MissionControl = MissionClass::GetMissionControl((MissionClass *)v7); /*0x416713*/
      LOWORD(v10) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x416723*/
      return v10 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x416747*/
  }
  return result; /*0x416747*/
}



// ==== 0x00416AF0  FootClass::MissionMoveCarryallLand  this=FootClass  sig=csp ====
void __thiscall FootClass::MissionMoveCarryallLand(FootClass *this)
{
  _DWORD *v2; // esi
  int v3; // eax
  int InstanceCOM; // eax
  LPVOID v5; // ebx
  LPVOID v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  void (__thiscall **ptr_0)(FootClass *, void *, int); // esi
  void *v12; // eax
  LPVOID ppv; // [esp+4Ch] [ebp-20h] BYREF
  CellClass *passengers; // [esp+50h] [ebp-1Ch] BYREF
  _DWORD v15[2]; // [esp+54h] [ebp-18h] BYREF
  int GroundHeight; // [esp+5Ch] [ebp-10h]
  int v17[3]; // [esp+60h] [ebp-Ch] BYREF

  Debug::Log(); /*0x416afd*/
  passengers = (CellClass *)this->?; /*0x416b0b*/
  v2 = (_DWORD *)LinkedList::Pop((LinkedList *)this->?); /*0x416b1a*/
  v15[0] = this->?[0]; /*0x416b20*/
  v15[1] = this->?[1]; /*0x416b31*/
  GroundHeight = this->?[2]; /*0x416b38*/
  GroundHeight = Cell::GetGroundHeight(v15); /*0x416b4b*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v15)->flags[0] & 0x100) != 0 ) /*0x416b5d*/
  {
    GroundHeight += dword_889EBC; /*0x416b6a*/
    *((_BYTE *)v2 + 140) = 1; /*0x416b6e*/
  }
  else
  {
    *((_BYTE *)v2 + 140) = 0; /*0x416b77*/
  }
  if ( !v2[413] ) /*0x416b7e*/
    WinAPI::Wrapper(-2147467261); /*0x416b90*/
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2[413] + 8))(v2[413]); /*0x416b9e*/
  v2[413] = 0; /*0x416ba1*/
  v3 = (*(int (__thiscall **)(_DWORD *))(*v2 + 132))(v2); /*0x416bab*/
  ppv = 0; /*0x416bbe*/
  InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)(v3 + 844), 0, 7u); /*0x416bc2*/
  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x416bd0*/
    WinAPI::Wrapper(InstanceCOM); /*0x416bd3*/
  v5 = (LPVOID)v2[413]; /*0x416bd8*/
  v6 = ppv; /*0x416bde*/
  if ( v5 != ppv ) /*0x416be4*/
  {
    v2[413] = ppv; /*0x416be8*/
    if ( v6 ) /*0x416bee*/
    {
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v6 + 4))(v6); /*0x416bf3*/
      v6 = ppv; /*0x416bf6*/
    }
    if ( v5 ) /*0x416bfc*/
    {
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v5 + 8))(v5); /*0x416c01*/
      v6 = ppv; /*0x416c04*/
    }
  }
  if ( v6 ) /*0x416c0b*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v6 + 8))(v6); /*0x416c10*/
  if ( !v2[413] ) /*0x416c13*/
    WinAPI::Wrapper(-2147467261); /*0x416c22*/
  (*(void (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)v2[413] + 12))(v2[413], v2); /*0x416c31*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*v2 + 216))(v2, v15, 0) ) /*0x416c3f*/
  {
    v7 = *v2; /*0x416c5a*/
    *((_BYTE *)v2 + 1060) = 0; /*0x416c66*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(v7 + 1164))(v2, 0, 0, 0, 0); /*0x416c6d*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v2 + 1160))(v2, 0, 0, 0, 0, 0); /*0x416c81*/
    v8 = this->?[0]; /*0x416c8a*/
    v9 = this->?[1]; /*0x416c8d*/
    v17[2] = this->?[2]; /*0x416c90*/
    v10 = v2[152]; /*0x416c94*/
    v17[0] = v8; /*0x416c9a*/
    v17[1] = v9; /*0x416c9e*/
    MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], v17, v10 - 3, v10 + 3, 0); /*0x416cb6*/
    ppv = (LPVOID)*MapClass::FindPlacementCellsAlt((char *)this, &passengers, 0); /*0x416ccd*/
    if ( (_DWORD *)Team::GetMember((Team *)this, 0) == v2 ) /*0x416cda*/
    {
      (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 157))(this, 25); /*0x416ce2*/
      (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 157))(this, 3); /*0x416cee*/
    }
    if ( ppv == (LPVOID)g_AircraftStatusFlag ) /*0x416d00*/
    {
      (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x416d3b*/
    }
    else
    {
      ptr_0 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x416d10*/
      v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&ppv); /*0x416d1e*/
      ptr_0[288](this, v12, 1); /*0x416d26*/
    }
  }
  else
  {
    CellClass::AddObject(passengers, v2); /*0x416c4e*/
  }
}



// ==== 0x00416D50  Carryall::MissionStateMachine  this=Carryall  sig=csp ====
int __thiscall Carryall::MissionStateMachine(Carryall *this)
{
  AbstractClass *v2; // ecx
  char *MissionControl; // eax
  int v4; // eax
  _BYTE *v6; // edi
  Object *v7; // eax
  int Carryall_field_00; // edi
  void *NearbyCell; // eax
  int v10; // ecx
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // ecx
  int v19; // eax
  int v20; // ebx
  int v21; // ecx
  int v22; // edx
  CellClass *v23; // eax
  _BYTE *Building; // edi
  int v25; // eax
  char v26; // [esp-4h] [ebp-48h]
  _DWORD v27[3]; // [esp+14h] [ebp-30h] BYREF
  _DWORD v28[3]; // [esp+20h] [ebp-24h] BYREF
  _BYTE v29[20]; // [esp+2Ch] [ebp-18h] BYREF
  int v30; // [esp+40h] [ebp-4h]

  switch ( *((_DWORD *)this + 47) ) /*0x416d64*/
  {
    case 0: /*0x416d64*/
      Debug::Log(); /*0x416d70*/
      v2 = (AbstractClass *)*((_DWORD *)this + 361); /*0x416d75*/
      if ( !v2 ) /*0x416d80*/
      {
        Debug::Log(); /*0x416d87*/
LABEL_4:
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(this->Carryall_field_00 + 1156))(this, 0, 1); /*0x416d8f*/
        goto LABEL_5; /*0x416d97*/
      }
      v6 = AbstractClass::IsTechnoType(v2); /*0x416dd8*/
      if ( !v6 ) /*0x416ddc*/
        goto LABEL_18; /*0x416ddc*/
      if ( *((_DWORD *)this + 70) ) /*0x416de2*/
        goto LABEL_18; /*0x416de2*/
      if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse(*((Object **)this + 135), (int)v6) ) /*0x416df7*/
        goto LABEL_18; /*0x416df7*/
      if ( (v6[20] & 1) != 0 ) /*0x416e0e*/
      {
        v7 = (Object *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 60))(v6); /*0x416e15*/
        if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse(v7, (int)this) ) /*0x416e1a*/
          goto LABEL_18; /*0x416e1a*/
      }
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 44))(v6) != 1 ) /*0x416e31*/
        goto LABEL_18; /*0x416e31*/
      Debug::Log(); /*0x416e3c*/
      if ( (_BYTE *)Team::GetMember((Team *)this, 0) != v6 ) /*0x416e4f*/
        (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 3); /*0x416e57*/
      if ( (*(int (__thiscall **)(Carryall *, int, _BYTE *))(this->Carryall_field_00 + 632))(this, 2, v6) != 1 ) /*0x416e6d*/
      {
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(this->Carryall_field_00 + 1152))(this, 0, 1); /*0x416f1e*/
        goto LABEL_4; /*0x416f24*/
      }
      Debug::Log(); /*0x416e78*/
      if ( (*(int (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 36) == 1 ) /*0x416e8f*/
      {
        (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 7); /*0x416ec3*/
LABEL_18:
        Carryall_field_00 = this->Carryall_field_00; /*0x416ec9*/
        NearbyCell = InfantryClass::FindNearbyCell((InfantryClass *)this, *((_DWORD *)this + 361)); /*0x416ed6*/
        (*(void (__thiscall **)(Carryall *, void *, int))(Carryall_field_00 + 1152))(this, NearbyCell, 1); /*0x416ede*/
        v10 = *((_DWORD *)this + 373); /*0x416ee4*/
        if ( v10 ) /*0x416eec*/
          TeamClass::SelectMember(v10, *((_DWORD *)this + 361)); /*0x416ef5*/
        *((_DWORD *)this + 47) = 1; /*0x416eff*/
        Debug::Log(); /*0x416f09*/
      }
      else
      {
        Debug::Log(); /*0x416e96*/
        (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 3); /*0x416ea4*/
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(this->Carryall_field_00 + 1156))(this, 0, 1); /*0x416eb2*/
      }
LABEL_5:
      MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x416d9d*/
      LOWORD(v4) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x416dad*/
      return v4 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2);
    case 1: /*0x416d64*/
      v11 = *((_DWORD *)this + 361); /*0x416f29*/
      if ( v11 ) /*0x416f31*/
      {
        v12 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v11 + 72))(v11, v29); /*0x416f54*/
        if ( !*((_DWORD *)this + 413) ) /*0x416f5f*/
          WinAPI::Wrapper(-2147467261); /*0x416f6e*/
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 413) + 68))( /*0x416f89*/
          *((_DWORD *)this + 413),
          *v12,
          v12[1],
          v12[2]);
        *((_DWORD *)this + 47) = 2; /*0x416f8c*/
        return 1; /*0x416f96*/
      }
      else
      {
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(this->Carryall_field_00 + 1156))(this, 0, 1); /*0x416f3a*/
        return 1; /*0x416f40*/
      }
    case 2: /*0x416d64*/
      v13 = *((_DWORD *)this + 361); /*0x416fa3*/
      if ( v13 /*0x416fc7*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) != 11
        && Team::GetMember((Team *)this, 0) != *((_DWORD *)this + 361) )
      {
        Debug::Log(); /*0x416fce*/
        *((_DWORD *)this + 47) = 0; /*0x416fd6*/
        return 1; /*0x416fe8*/
      }
      v14 = *((_DWORD *)this + 361); /*0x416fe9*/
      if ( v14 /*0x417008*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) == 11
        && !(*(unsigned __int8 (__thiscall **)(Carryall *, _DWORD))(this->Carryall_field_00 + 1360))(
              this,
              *((_DWORD *)this + 361)) )
      {
        *((_DWORD *)this + 47) = 0; /*0x417012*/
        return 1; /*0x417024*/
      }
      if ( !*((_DWORD *)this + 413) ) /*0x417025*/
        WinAPI::Wrapper(-2147467261); /*0x417032*/
      if ( (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 144))(*((_DWORD *)this + 413)) != 1 ) /*0x417049*/
        goto LABEL_44; /*0x417049*/
      Debug::Log(); /*0x417054*/
      v15 = *((_DWORD *)this + 361); /*0x417059*/
      if ( !v15 /*0x4170e9*/
        || (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 44))(v15) != 1
        || (v16 = *((_DWORD *)this + 39),
            v17 = *((_DWORD *)this + 40),
            v30 = *((_DWORD *)this + 41),
            v18 = v16 / 256,
            v19 = *(_DWORD *)(*((_DWORD *)this + 361) + 156),
            v20 = *(_DWORD *)(*((_DWORD *)this + 361) + 160),
            v30 = *(_DWORD *)(*((_DWORD *)this + 361) + 164),
            (unsigned __int16)(v19 / 256) == (_WORD)v18)
        && (unsigned __int16)(v20 / 256) == (unsigned __int16)(v17 / 256) )
      {
        *((_BYTE *)this + 1748) = 0; /*0x41710f*/
LABEL_44:
        if ( !*((_DWORD *)this + 413) ) /*0x417116*/
          WinAPI::Wrapper(-2147467261); /*0x417125*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 16))(*((_DWORD *)this + 413)) ) /*0x417133*/
        {
          Debug::Log(); /*0x41713f*/
          *((_DWORD *)this + 47) = 3; /*0x417147*/
        }
        return 1; /*0x417151*/
      }
      else
      {
        *((_DWORD *)this + 47) = 0; /*0x4170f0*/
        Debug::Log(); /*0x4170fa*/
        return 1; /*0x417102*/
      }
    case 3: /*0x416d64*/
      Debug::Log(); /*0x417163*/
      if ( *((_DWORD *)this + 70) ) /*0x417168*/
      {
        if ( *((_DWORD *)this + 320) ) /*0x417177*/
        {
          *((_BYTE *)this + 1748) = 1; /*0x41717f*/
        }
        else
        {
          (*(void (__thiscall **)(Carryall *, _DWORD))(this->Carryall_field_00 + 292))(this, 0); /*0x41719c*/
          FootClass::MissionMoveCarryallLand((FootClass *)this); /*0x4171a4*/
          (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 292))(this, 1); /*0x4171af*/
          *((_DWORD *)this + 47) = 0; /*0x4171b5*/
        }
        return 1; /*0x417186*/
      }
      else
      {
        Debug::Log(); /*0x4171cd*/
        (*(void (__thiscall **)(Carryall *, _DWORD))(this->Carryall_field_00 + 292))(this, 0); /*0x4171da*/
        v27[0] = *(this + 39); /*0x4171ea*/
        v27[1] = *(this + 40); /*0x4171f1*/
        v21 = *((_DWORD *)this + 41); /*0x4171f7*/
        v28[0] = *(this + 39); /*0x4171fa*/
        v22 = *((_DWORD *)this + 41); /*0x4171fe*/
        v27[2] = v21; /*0x417201*/
        v28[1] = *(this + 40); /*0x41720c*/
        v28[2] = v22; /*0x417216*/
        v26 = BYTE1(Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v27)->flags[0]) & 1; /*0x41722f*/
        v23 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v28); /*0x417236*/
        Building = CellClass::FindBuilding(v23, v26); /*0x417242*/
        if ( Building /*0x417270*/
          && Building == (_BYTE *)Team::GetMember((Team *)this, 0)
          && (Debug::Log(), (*(int (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 19) == 1) )
        {
          Debug::Log(); /*0x417277*/
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)Building + 212))(Building); /*0x417283*/
          Building[140] = 0; /*0x417290*/
          Building[1060] = 1; /*0x417297*/
          CellClass::AddObject((CellClass *)(this + 69), Building); /*0x41729e*/
        }
        else
        {
          *((_DWORD *)this + 47) = 0; /*0x4172a5*/
        }
        (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 3); /*0x4172b1*/
        (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 292))(this, 1); /*0x4172bd*/
        v25 = this->Carryall_field_00; /*0x4172c3*/
        *((_BYTE *)this + 1748) = 1; /*0x4172ca*/
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(v25 + 1156))(this, 0, 1); /*0x4172d1*/
        return 1; /*0x4172da*/
      }
    default:
      goto LABEL_5;
  }
}



// ==== 0x00417BD0  AircraftClass::ValidateMovement  this=AircraftClass  sig=csp ====
char __thiscall AircraftClass::ValidateMovement(AircraftClass *this, int a2, int *a3, int a4)
{
  int v5; // eax
  char result; // al

  v5 = ((__int64 (__thiscall *)(AircraftClass *, int *, int))*((_DWORD *)this->FootClass + 29))(this, a3, a4); /*0x417be1*/
  switch ( v5 ) /*0x417bf4*/
  {
    case 2: /*0x417bf4*/
      result = 0; /*0x417c14*/
      break; /*0x417c17*/
    case 3: /*0x417bf4*/
      result = (*((char (__thiscall **)(AircraftClass *, int, _DWORD, int *, _DWORD))this->FootClass + 222))( /*0x417c25*/
                 this,
                 7,
                 0,
                 a3,
                 0);
      break; /*0x417c2e*/
    case 4: /*0x417bf4*/
      result = (*((char (__thiscall **)(AircraftClass *, int, _DWORD, _DWORD, _DWORD))this->FootClass + 222))( /*0x417c3d*/
                 this,
                 16,
                 0,
                 0,
                 0);
      break; /*0x417c46*/
    case 17: /*0x417bf4*/
      result = (*((char (__thiscall **)(AircraftClass *, int, _DWORD, int *, _DWORD))this->FootClass + 222))( /*0x417c06*/
                 this,
                 2,
                 0,
                 a3,
                 0);
      break; /*0x417c0f*/
    default:
      result = FootClass::ValidateMove((FootClass *)this, v5, a3, a4); /*0x417c4e*/
      break; /*0x417c4e*/
  }
  return result; /*0x417c0c*/
}



// ==== 0x00417C80  ObjectClass::g_var_c16898  this=AircraftClass  sig=csp ====
char __thiscall ObjectClass::g_var_c16898(ObjectClass *this, int a2, __int16 *a3, __int16 *a4, void **a5)
{
  return ObjectClass::SpawnInfantry(this, a2, a3, a4, a5); /*0x417c99*/
}



// ==== 0x00417CA0  TechnoClass::ExecuteMissionCommand  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ExecuteMissionCommand(TechnoClass *this, int a2, int a3, int a4, int a5)
{
  return ScriptAction::ExecuteMissionCmd(this); /*0x417cb9*/
}



// ==== 0x00417CC0  AircraftClass::GetCursorOverObject  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::GetCursorOverObject(AircraftClass *this, int *a2, int *a3)
{
  int *v3; // ebp
  int *v4; // edi
  int result; // eax
  int v7; // ebx
  Object *v8; // eax
  _DWORD *v9; // eax
  int (__thiscall **ptr_0)(AircraftClass *, int **, _DWORD, int *); // eax
  int v11; // ebp
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // eax
  Cell *v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  char v18[12]; // [esp+10h] [ebp-Ch] BYREF

  v3 = a3; /*0x417cc5*/
  v4 = a2; /*0x417ccb*/
  result = InfantryClass::GetCursorOverObject((FootClass *)this, (int)a2, (char)a3); /*0x417cd3*/
  v7 = result; /*0x417cd8*/
  if ( result == 8 ) /*0x417cdd*/
    return result; /*0x417cdd*/
  if ( result == 26 && this->Type[1].TechnoTypeClass[317] ) /*0x417cf4*/
    v7 = 0; /*0x417cfe*/
  if ( this->Type[1].TechnoTypeClass[300] && (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x417d16*/
  {
    if ( v7 != 7 && v7 ) /*0x417d26*/
      goto LABEL_18; /*0x417d26*/
    if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v4) ) /*0x417d33*/
    {
      if ( !v4 /*0x417d56*/
        || (LOBYTE(a3) = v4[5] & 1, !(_BYTE)a3)
        || (v8 = (Object *)(*(int (__thiscall **)(int *))(*v4 + 60))(v4),
            (unsigned __int8)Object::IsAlliedWithObjectHouse(v8, (int)this)) )
      {
        if ( !this->?[1] && (*(int (__thiscall **)(int *))(*v4 + 44))(v4) == 1 ) /*0x417d73*/
        {
          v7 = 17; /*0x417d75*/
          goto LABEL_24; /*0x417d7a*/
        }
      }
    }
  }
  if ( !v7 ) /*0x417d7e*/
  {
    v9 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*v4 + 72))(v4, v18); /*0x417d89*/
    LOWORD(a3) = *v9 / 256; /*0x417d9e*/
    HIWORD(a3) = v9[1] / 256; /*0x417db7*/
    ptr_0 = (int (__thiscall **)(AircraftClass *, int **, _DWORD, int *))this->FootClass; /*0x417dc0*/
    a2 = a3; /*0x417dc4*/
    v7 = ptr_0[28](this, &a2, 0, v3); /*0x417dcb*/
  }
LABEL_18:
  if ( v7 == 4 ) /*0x417dd0*/
  {
    if ( this->?[0] ) /*0x417dd2*/
      goto LABEL_24; /*0x417dda*/
LABEL_23:
    v7 = 0; /*0x417df4*/
    goto LABEL_24; /*0x417df4*/
  }
  if ( v7 == 5 && !*(_DWORD *)(*((int (__thiscall **)(AircraftClass *, _DWORD))this->FootClass + 254))(this, 0) ) /*0x417def*/
    goto LABEL_23; /*0x417df2*/
LABEL_24:
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x417dfc*/
  {
    if ( v7 == 7 && (*(int (__thiscall **)(int *))(*v4 + 44))(v4) == 6 ) /*0x417e14*/
    {
      v11 = v4[328]; /*0x417e16*/
      if ( *(_BYTE *)(v11 + 5801) ) /*0x417e1c*/
      {
        v12 = 0; /*0x417e2c*/
        v13 = *(_DWORD *)&this->Type->TechnoTypeClass[1016]; /*0x417e33*/
        if ( v13 <= 0 ) /*0x417e38*/
          goto LABEL_36; /*0x417e38*/
        v14 = *(_DWORD **)&this->Type->TechnoTypeClass[1004]; /*0x417e3a*/
        while ( *v14 != v11 ) /*0x417e3f*/
        {
          ++v12; /*0x417e41*/
          ++v14; /*0x417e42*/
          if ( v12 >= v13 ) /*0x417e47*/
            goto LABEL_36; /*0x417e47*/
        }
        if ( !(unsigned __int8)Array::ContainsValue((Array *)v4, (int)this) /*0x417e76*/
          || v4[70]
          || (v7 = 3, (*((int (__thiscall **)(AircraftClass *, int, int *))this->FootClass + 158))(this, 15, v4) != 1) )
        {
LABEL_36:
          v7 = 31; /*0x417e78*/
        }
      }
    }
  }
  if ( this->Type[1].TechnoTypeClass[300] && v7 == 17 ) /*0x417e90*/
  {
    a3 = *(int **)(*(int (__thiscall **)(int *, int **))(*v4 + 440))(v4, &a2); /*0x417eaa*/
    if ( a3 != (int *)g_AircraftStatusFlag ) /*0x417eae*/
    {
      v15 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x417ecc*/
      v16 = Cell::IsBridge(v15); /*0x417ed3*/
      if ( v16 ) /*0x417eda*/
      {
        if ( *(_BYTE *)(v16[328] + 5821) ) /*0x417ee6*/
          return 0; /*0x417efb*/
      }
    }
  }
  else if ( v7 == 2 ) /*0x417f01*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*v4 + 196))(v4) ) /*0x417f07*/
    {
      if ( !(*(int (__thiscall **)(int *, int))(*v4 + 208))(v4, 1) ) /*0x417f17*/
      {
        v17 = (*(int (__thiscall **)(int *, int))(*v4 + 204))(v4, 1); /*0x417f27*/
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 44))(v17) == 21 ) /*0x417f37*/
          return 1; /*0x417f47*/
      }
    }
  }
  else if ( v7 == 5 && *(_BYTE *)((*(int (__thiscall **)(int *))(*v4 + 136))(v4) + 563) ) /*0x417f59*/
  {
    return 2; /*0x417f63*/
  }
  return v7; /*0x417cdf*/
}



// ==== 0x00417F80  AircraftClass::CanEnterCell  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::CanEnterCell(AircraftClass *this, __int16 *a2, char a3, char a4)
{
  int v6; // edi

  if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x417f89*/
    return 0; /*0x417f92*/
  v6 = FootClass::HandleCursorWithCheck((FootClass *)this, a2, a3, a4); /*0x417faf*/
  if ( v6 == 5 && !*(_DWORD *)(*((int (__thiscall **)(AircraftClass *, _DWORD))this->FootClass + 254))(this, 0) ) /*0x417fc2*/
    return 0; /*0x417fc7*/
  return v6; /*0x417f94*/
}



// ==== 0x00417FD0  AbstractClass::GetField9  this=AbstractClass  sig=ida-proto ====
int AbstractClass::GetField9()
{
  return dword_8871E0->PoseDir; /*0x417fd8*/
}



// ==== 0x00417FE0  AircraftClass::Mission_Attack  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::Mission_Attack(AircraftClass *this)
{
  double v1; // st7
  int target; // eax
  int v4; // eax
  int result; // eax
  char v6; // al
  int ammo; // eax
  int v8; // eax
  int ptr_0; // edi
  void *SpiralMoveTarget; // eax
  int v11; // eax
  int v12; // eax
  char *pad_6C0; // edi
  int v14; // edi
  int v15; // edi
  int *v16; // eax
  int v17; // edx
  char *v20; // ebx
  int *v21; // eax
  int *v22; // eax
  int v23; // edi
  int v24; // eax
  int v25; // edi
  int v26; // ebp
  int v27; // eax
  int v28; // edi
  int v29; // eax
  int v30; // edi
  int v31; // eax
  _DWORD *v32; // eax
  CellClass *v33; // eax
  int v34; // edx
  int v35; // eax
  bool v36; // zf
  bool v37; // sf
  int v38; // eax
  int *v39; // eax
  int *v40; // eax
  int v41; // edi
  int v42; // eax
  int v43; // eax
  int v44; // edi
  int v45; // eax
  _DWORD *v46; // eax
  CellClass *v47; // eax
  int v48; // eax
  int v49; // edi
  int v50; // eax
  int v51; // edi
  int v5... [27577 chars total]



// ==== 0x00418E20  InfantryClass::FindNearbyCell  this=InfantryClass  sig=csp ====
void *__thiscall InfantryClass::FindNearbyCell(InfantryClass *this, int a2)
{
  double v2; // st7
  void *v3; // esi
  TeamClass *team; // ecx
  _DWORD *v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  double v11; // rdi
  __int16 v12; // bx
  void *v13; // edi
  Cell *v14; // esi
  int v15; // eax
  __int16 v17[2]; // [esp+14h] [ebp-44h] BYREF
  double v18; // [esp+18h] [ebp-40h]
  int v19; // [esp+20h] [ebp-38h]
  __int16 v20[2]; // [esp+24h] [ebp-34h] BYREF
  double v21; // [esp+28h] [ebp-30h]
  int v22; // [esp+30h] [ebp-28h]
  Cell *v23; // [esp+34h] [ebp-24h]
  double v26; // [esp+48h] [ebp-10h] BYREF
  int v27; // [esp+50h] [ebp-8h]

  v3 = (void *)a2; /*0x418e2b*/
  v23 = (Cell *)this; /*0x418e35*/
  if ( a2 ) /*0x418e39*/
  {
    team = this->?; /*0x418e3f*/
    if ( !team || !(unsigned __int8)TechnoClass::IsWaypointHidden((TechnoClass *)team) ) /*0x418e49*/
    {
      if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *, int))this->FootClass + 340))(this, a2) /*0x418eab*/
        || (v6 = (_DWORD *)(*(int (__thiscall **)(int, double *, _DWORD))(*(_DWORD *)a2 + 76))(a2, &v26, 0),
            LOWORD(v19) = *v6 / 256,
            HIWORD(v19) = v6[1] / 256,
            *(_DWORD *)v20 = v19,
            !Cell::IsOccupied((Cell *)this, v20, 0)) )
      {
        v7 = (int *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)a2 + 72))(a2, &v26); /*0x418ec1*/
        v8 = *v7; /*0x418ec4*/
        v9 = v7[1]; /*0x418ec6*/
        v27 = v7[2]; /*0x418ed3*/
        if ( !dword_A8E7AC ) /*0x418ed7*/
        {
          v19 = 0; /*0x418ee2*/
          if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5240) / 256 > 0 ) /*0x418efa*/
          {
            *(_DWORD *)v20 = (__int16)(v9 / 256); /*0x418f21*/
            __asm { fild dword ptr [esp+50h+var_34] } /*0x418f25*/
            __asm { fstp [esp+50h+var_18] }
            *(_DWORD *)v20 = (__int16)(v8 / 256); /*0x418f30*/
            __asm /*0x418f34*/
            {
              fild dword ptr [esp+50h+var_34]
              fstp [esp+50h+var_10]
            }
            while ( 2 ) /*0x418f40*/
            {
              v10 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x418f40*/
              LODWORD(v21) = (__int16)v19; /*0x418f59*/
              v22 = v10; /*0x418f5d*/
              __asm { fild dword ptr [esp+50h+var_30] } /*0x418f61*/
              v18 = 0.0; /*0x418f65*/
              __asm { fstp [esp+50h+var_20] } /*0x418f73*/
              do /*0x419063*/
              {
                LODWORD(v21) = ((__int16)((WORD2(v18) + (_WORD)v22) << 13) & 0xFFFFE000) - 0x3FFF; /*0x418f93*/
                __asm /*0x418f97*/
                {
                  fild dword ptr [esp+50h+var_30]
                  fmul ds:dbl_7E2810
                  fstp [esp+50h+var_30]
                }
                v11 = v21; /*0x418fa9*/
                Math::SinCos(v21); /*0x418faf*/
                __asm /*0x418fb4*/
                {
                  fmul [esp+58h+var_20]
                  fsubr [esp+58h+var_18]
                }
                v12 = Math::RoundToInt(v2); /*0x418fc3*/
                Math::ArcTan2(v11); /*0x418fc5*/
                __asm { fmul [esp+60h+var_20] } /*0x418fca*/
                __asm { fadd [esp+50h+var_10] }
                v20[0] = Math::RoundToInt(v2); /*0x418fde*/
                v20[1] = v12; /*0x418fe3*/
                *(_DWORD *)v17 = *(_DWORD *)v20; /*0x418ff4*/
                if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v17, 1) ) /*0x418ff8*/
                {
                  v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17); /*0x419010*/
                  if ( *(_DWORD *)v17 != LODWORD(v18) ) /*0x41901c*/
                  {
                    v14 = v23; /*0x41902a*/
                    if ( (*(unsigned __int8 (__thiscall **)(Cell *, void *))(v23->Cell_field_0x0 + 1360))(v23, v13) ) /*0x419033*/
                    {
                      if ( Cell::IsOccupied(v14, v17, 0) ) /*0x419046*/
                        return v13; /*0x4190a0*/
                    }
                  }
                  LODWORD(v18) = *(_DWORD *)v17; /*0x419053*/
                }
                ++HIDWORD(v18); /*0x41905f*/
              }
              while ( SHIDWORD(v18) < 8 ); /*0x419063*/
              v15 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5240); /*0x419074*/
              if ( ++v19 < v15 / 256 ) /*0x41908c*/
                continue; /*0x41908c*/
              break;
            }
            return (void *)a2; /*0x419092*/
          }
        }
      }
    }
  }
  return v3; /*0x419097*/
}



// ==== 0x004190B0  AircraftClass::MissionDispatch  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::MissionDispatch(AircraftClass *this, _DWORD *a2, int a3, void **a4)
{
  int result; // eax
  void (__thiscall **v6)(AircraftClass *, void *, int); // ebx
  void *ClosestPlacementCell; // eax
  AbstractClass *v8; // edi
  int (__thiscall **ptr_0)(AircraftClass *, int, void *); // ebx
  void *v10; // eax
  AbstractClass *movementDestination; // ecx
  AircraftTypeClass *Type; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int Member; // eax
  int v16; // eax
  _DWORD *v17; // [esp+0h] [ebp-10h]

  switch ( this->? )
  {
    case 4:
    case 0x1A:
    case 0x1B:
    case 0x1E:
    case 0x1F:
      if ( this->? ) /*0x4190d3*/
        goto LABEL_4; /*0x4190db*/
LABEL_3:
      result = 0; /*0x4190dd*/
      break; /*0x4190e3*/
    default:
LABEL_4:
      switch ( a3 )
      {
        case 8:
          if ( !this->Type[1].TechnoTypeClass[300] /*0x419519*/
            || (*((int (__thiscall **)(AircraftClass *))this->FootClass + 97))(this) != 2
            || !this->?
            || (!this->?[1] || (_DWORD *)CCINIClass::GetDB((CCINIClass *)this->?) != a2)
            && this->? != (AbstractClass *)a2 )
          {
            return FootClass::MissionDispatch((FootClass *)a2, a3, (_DWORD *)a3, (int)a4, v17); /*0x419519*/
          }
          return 10; /*0x419519*/
        case 14:
          v14 = *(_DWORD *)&this->Type->TechnoTypeClass[1504]; /*0x41939d*/
          if ( v14 <= 0 || this->?[0] >= v14 ) /*0x4193b1*/
            return FootClass::MissionDispatch((FootClass *)a2, a3, (_DWORD *)a3, (int)a4, v17); /*0x4193b1*/
          FootClass::MissionDispatch((FootClass *)a2, a3, (_DWORD *)a3, (int)a4, v17); /*0x4193c4*/
          if ( !this->?[0] ) /*0x4193c9*/
            WinAPI::Wrapper(-2147467261); /*0x4193d8*/
          if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x4193e6*/
            return 1; /*0x4193e6*/
          RateScaler::Init((RateScaler *)this->?, *(double *)&this->Type->TechnoTypeClass[968]); /*0x419407*/
          if ( (*((int (__thiscall **)(AircraftClass *, int, _DWORD *))this->FootClass + 158))(this, 19, a2) != 1 ) /*0x41941c*/
            return 1; /*0x41941c*/
          *a4 = this; /*0x41941e*/
          if ( (*((int (__thiscall **)(AircraftClass *, int, void **, _DWORD *))this->FootClass + 159))( /*0x419431*/
                 this,
                 18,
                 a4,
                 a2) == 1 )
          {
            Member = Team::GetMember((Team *)this, 0); /*0x419450*/
            (*(void (__thiscall **)(int))(*(_DWORD *)Member + 336))(Member); /*0x419459*/
            return 1; /*0x41945f*/
          }
          else
          {
            (*((void (__thiscall **)(AircraftClass *, int, _DWORD *))this->FootClass + 158))(this, 3, a2); /*0x41943a*/
            return 1; /*0x419443*/
          }
        case 15:
          if ( !*(_DWORD *)&this->Type->TechnoTypeClass[1504] /*0x419492*/
            || !a2
            || !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)a2) )
          {
            goto LABEL_3; /*0x419499*/
          }
          v16 = (this->?[0] >= *(_DWORD *)&this->Type->TechnoTypeClass[1504]) - 1; /*0x4194b9*/
          LOBYTE(v16) = v16 & 0xF7; /*0x4194bb*/
          return v16 + 10; /*0x4194c2*/
        case 18:
          FootClass::MissionDispatch((FootClass *)a2, a3, (_DWORD *)a3, (int)a4, v17); /*0x4191ff*/
          v8 = (AbstractClass *)*a4; /*0x419204*/
          if ( *a4 && (*((int (__thiscall **)(AbstractClass *))v8->ptr_0 + 11))(v8) == 6 ) /*0x419214*/
          {
            ptr_0 = (int (__thiscall **)(AircraftClass *, int, void *))this->FootClass; /*0x419216*/
            v10 = AbstractClass::IsTechnoType(v8); /*0x41921a*/
            if ( ptr_0[158](this, 15, v10) != 1 ) /*0x41922d*/
              return 10; /*0x419238*/
            (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 7, 0); /*0x419241*/
          }
          else
          {
            (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 2, 0); /*0x41924b*/
          }
          (*((void (__thiscall **)(AircraftClass *, AbstractClass *, int))this->FootClass + 288))(this, v8, 1); /*0x419258*/
          (*((void (__thiscall **)(AircraftClass *))this->FootClass + 123))(this); /*0x419262*/
          result = 1; /*0x41926b*/
          break; /*0x419271*/
        case 19:
          FootClass::MissionDispatch((FootClass *)a2, a3, (_DWORD *)a3, (int)a4, v17); /*0x419281*/
          if ( !this->?[0] ) /*0x419286*/
            WinAPI::Wrapper(-2147467261); /*0x419295*/
          if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x4192a3*/
            return 1; /*0x4192a3*/
          movementDestination = this->?; /*0x4192ae*/
          if ( !movementDestination ) /*0x4192b6*/
            return 1; /*0x4192b6*/
          if ( this->Type[1].TechnoTypeClass[317] /*0x4192ee*/
            && (*((int (__thiscall **)(AbstractClass *))movementDestination->ptr_0 + 11))(movementDestination) == 11
            && this->? == (AbstractClass *)(*((int (__thiscall **)(AircraftClass *))this->FootClass + 111))(this) )
          {
            return 1; /*0x4192f7*/
          }
          else
          {
            return 10; /*0x41951f*/
          }
        case 21:
          Type = this->Type; /*0x419300*/
          if ( this->?[0] == *(_DWORD *)&Type->TechnoTypeClass[1504] ) /*0x419312*/
            Timer::StartDouble((Timer *)this->?, *(double *)&Type->TechnoTypeClass[968]); /*0x419328*/
          if ( a2 )
          {
            v13 = (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) == 15 ? a2 : 0;
            if ( v13 ) /*0x419347*/
            {
              if ( *(_BYTE *)(v13[432] + 3777) && !*((_BYTE *)v13 + 1753) ) /*0x419359*/
              {
                (*((void (__thiscall **)(AircraftClass *, _DWORD))this->FootClass + 242))(this, 0); /*0x419369*/
                (*((void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 288))(this, 0, 1); /*0x419377*/
                (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 4, 0); /*0x419385*/
              }
            }
          }
          return 5; /*0x419394*/
        case 23:
          (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 2, 0); /*0x4191b7*/
          v6 = (void (__thiscall **)(AircraftClass *, void *, int))this->FootClass; /*0x4191bd*/
          ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((TechnoClass *)this); /*0x4191c3*/
          v6[288](this, ClosestPlacementCell, 1); /*0x4191cb*/
          (*((void (__thiscall **)(AircraftClass *, int))this->FootClass + 157))(this, 3); /*0x4191d7*/
          return FootClass::MissionDispatch((FootClass *)a2, a3, (_DWORD *)a3, (int)a4, v17); /*0x4191d7*/
        case 29:
          if ( this->? )
            return 10; /*0x419160*/
          else
            return *(_DWORD *)&this->Type->TechnoTypeClass[1668] != this->? ? 10 : 1;
        case 31:
          if ( this->? < *(_DWORD *)&this->Type->TechnoTypeClass[1668] / 2 || !this->? ) /*0x419124*/
            return FootClass::MissionDispatch((FootClass *)a2, a3, (_DWORD *)a3, (int)a4, v17); /*0x41912c*/
          return 1; /*0x419137*/
        case 33:
          return *(_DWORD *)&this->Type->TechnoTypeClass[1668] != this->? ? 10 : 1;
        default:
          return FootClass::MissionDispatch((FootClass *)a2, a3, (_DWORD *)a3, (int)a4, v17); /*0x4191ef*/
      }
      break; /*0x4191ef*/
  }
  return result; /*0x4190dd*/
}



// ==== 0x004195A0  TechnoClass::FindNearbyBuildCell  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::FindNearbyBuildCell(TechnoClass *this, int a2, __int16 *a3)
{
  _DWORD *v4; // eax
  int *v5; // ebx
  int v6; // ebp
  int v7; // edi
  int v8; // ecx
  int *v9; // eax
  int v10; // kr08_4
  int v11; // eax
  bool *v12; // eax
  __int16 v14; // [esp+12h] [ebp-Eh]
  _BYTE v15[12]; // [esp+14h] [ebp-Ch] BYREF
  __int16 *v16; // [esp+28h] [ebp+8h]

  *(_DWORD *)a3 = g_AircraftStatusFlag; /*0x4195b0*/
  v4 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v15); /*0x4195b9*/
  v5 = dword_817A78; /*0x4195be*/
  v6 = *v4 / 256; /*0x4195de*/
  v7 = v4[1] / 256; /*0x4195e1*/
  v14 = v7; /*0x4195e4*/
  while ( 1 ) /*0x4195ec*/
  {
    v8 = *v5 & 7; /*0x4195ec*/
    LOWORD(v16) = v6 + LOWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x419605*/
    HIWORD(v16) = v7 + HIWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x41960d*/
    *(_DWORD *)a3 = v16; /*0x419616*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], a3) ) /*0x41961d*/
      break; /*0x41961d*/
LABEL_7:
    if ( (int)++v5 >= (int)&IFlyControl `RTTI Type Descriptor' ) /*0x419692*/
      return 0; /*0x419692*/
  }
  v9 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v15); /*0x419631*/
  v10 = *v9; /*0x419641*/
  v11 = v9[1] / 256; /*0x419652*/
  if ( (unsigned __int16)(v10 / 256) != *a3 || (_WORD)v11 != a3[1] ) /*0x41965e*/
  {
    v12 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a3); /*0x419674*/
    if ( !(unsigned __int8)Cell::IsBuildable(v12, 0, 0, 0, -1, 0, -1, 1) ) /*0x41967b*/
    {
      LOWORD(v7) = v14; /*0x419684*/
      goto LABEL_7; /*0x419684*/
    }
  }
  return 0; /*0x419698*/
}



// ==== 0x004196B0  AircraftClass::ValidateLandingCell  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::ValidateLandingCell(AircraftClass *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  TeamClass *team; // ecx
  int v8; // esi
  _DWORD *v10; // eax
  _BYTE v11[12]; // [esp+Ch] [ebp-Ch] BYREF

  team = this->?; /*0x4196bc*/
  if ( team /*0x4196d7*/
    && (unsigned __int8)TechnoClass::IsWaypointHidden((TechnoClass *)team)
    && !(unsigned __int8)Type::CheckAmbiguity((Type *)&stru_87F5F0.__pad_58[416], (int)a2, 1) )
  {
    return 0; /*0x4196d7*/
  }
  v8 = a2[57]; /*0x4196e4*/
  if ( (!v8 /*0x41974d*/
     || (*(_BYTE *)(v8 + 20) & 1) == 0
     || (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v8 + 540), (#375 *)this->?)
     || *(_DWORD *)(v8 + 544) != 2
     && !dword_A8E7AC
     && ((*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8) != 6 || !*(_BYTE *)(*(_DWORD *)(v8 + 1312) + 3226)))
    && !(unsigned __int8)Cell::IsBuildable((bool *)a2, 4, 0, 0, -1, 0, -1, 1) )
  {
    return 7; /*0x419761*/
  }
  if ( *(_DWORD *)&dword_A8B238 ) /*0x41976b*/
    return 0; /*0x41976b*/
  if ( !this->? ) /*0x41976d*/
    return 0; /*0x41976d*/
  if ( this->? ) /*0x419777*/
    return 0; /*0x419777*/
  v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 72))(a2, v11); /*0x41978a*/
  if ( !(unsigned __int8)Cell::IsPassable(v10) ) /*0x419793*/
    return 0; /*0x4197ac*/
  else
    return 7; /*0x41979e*/
}



// ==== 0x004197C0  ObjectClass::FindSpiralMoveTarget  this=ObjectClass  sig=csp ====
void *__thiscall FindSpiralMoveTarget(TechnoClass *this, int a2)
{
  double v2; // st7
  int v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int *v9; // eax
  __int16 v10; // cx
  unsigned int v11; // edi
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // edi
  Cell *v17; // ebx
  double v18; // rdi
  int *v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  double v23; // [esp+14h] [ebp-90h]
  __int16 v24[2]; // [esp+28h] [ebp-7Ch] BYREF
  int v25; // [esp+2Ch] [ebp-78h]
  __int16 v26[2]; // [esp+30h] [ebp-74h] BYREF
  int v27; // [esp+34h] [ebp-70h]
  int v28; // [esp+38h] [ebp-6Ch]
  __int16 v29[4]; // [esp+3Ch] [ebp-68h] BYREF
  Cell *v30; // [esp+44h] [ebp-60h]
  int v31; // [esp+48h] [ebp-5Ch]
  double v32; // [esp+4Ch] [ebp-58h]
  double v33; // [esp+54h] [ebp-50h]
  int v34; // [esp+5Ch] [ebp-48h]
  int v35; // [esp+60h] [ebp-44h]
  double v37[2]; // [esp+6Ch] [ebp-38h] BYREF
  double v38; // [esp+7Ch] [ebp-28h]
  int v39; // [esp+84h] [ebp-20h]
  int v40; // [esp+8Ch] [ebp-18h] BYREF
  int v41; // [esp+90h] [ebp-14h]
  int v42; // [esp+94h] [ebp-10h]
  char v43[12]; // [esp+98h] [ebp-Ch] BYREF

  v30 = (Cell *)this; /*0x4197d3*/
  if ( !a2 ) /*0x4197d7*/
    return 0; /*0x4197d7*/
  if ( (*(int (__stdcall **)(char *))(this->health + 24))((char *)this + 1728) ) /*0x4197ea*/
    return (void *)a2; /*0x4197f9*/
  v5 = (*(int (__thiscall **)(TechnoClass *, _DWORD))(this->ptr_0 + 360))(this, 0); /*0x41980c*/
  v6 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)a2 + 72))(a2, &v40); /*0x419813*/
  v38 = *(double *)v6; /*0x419818*/
  v7 = *(_DWORD *)(v6 + 8); /*0x419829*/
  *(_DWORD *)v26 = g_AircraftStatusFlag; /*0x419831*/
  *(_DWORD *)v29 = g_AircraftStatusFlag; /*0x419835*/
  v39 = v7; /*0x41983c*/
  v25 = -1; /*0x419846*/
  v31 = -1; /*0x41984a*/
  v40 = dword_889E88; /*0x419853*/
  LOBYTE(v6) = *(_BYTE *)(a2 + 20); /*0x419857*/
  v41 = dword_889E8C; /*0x41985c*/
  v42 = dword_889E90; /*0x419860*/
  if ( (v6 & 4) != 0 ) /*0x419864*/
  {
    v8 = *(_DWORD *)(a2 + 1444); /*0x419866*/
    if ( v8 ) /*0x41986e*/
    {
      v9 = (int *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v8 + 72))(v8, v37); /*0x419877*/
      v40 = *v9; /*0x41987c*/
      v41 = v9[1]; /*0x419883*/
      v42 = v9[2]; /*0x41988a*/
    }
  }
  v28 = v5 - 256; /*0x419899*/
  if ( v5 - 256 <= 256 ) /*0x41989d*/
    goto LABEL_27; /*0x41989d*/
  __asm /*0x4198a3*/
  {
    fild [esp+88h+var_24]
    fstp [esp+88h+var_38]
    fild [esp+88h+var_28]
    fstp qword ptr [esp+88h+var_28]
  }
  do /*0x419a87*/
  {
    __asm { fild [esp+88h+var_6C] } /*0x4198b3*/
    v27 = 0; /*0x4198b7*/
    __asm { fstp [esp+88h+var_40] } /*0x4198bf*/
    do /*0x419a68*/
    {
      LOBYTE(v10) = 0; /*0x4198c3*/
      HIBYTE(v10) = v27; /*0x4198c5*/
      LODWORD(v32) = v10 - 0x3FFF; /*0x4198d2*/
      __asm /*0x4198d6*/
      {
        fild dword ptr [esp+88h+var_58]
        fmul ds:dbl_7E2810
        fstp [esp+88h+var_58]
      }
      v11 = HIDWORD(v32); /*0x4198e4*/
      v12 = LODWORD(v32); /*0x4198ec*/
      Math::SinCos(v32); /*0x4198ee*/
      __asm /*0x4198f3*/
      {
        fmul [esp+90h+var_40]
        fsubr [esp+90h+var_38]
      }
      LOWORD(v13) = Math::RoundToInt(v2); /*0x4198fb*/
      v14 = v13; /*0x419902*/
      Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v11, v12))); /*0x419904*/
      __asm { fmul [esp+98h+var_40] } /*0x419909*/
      __asm { fadd qword ptr [esp+88h+var_28] }
      LOWORD(v15) = Math::RoundToInt(v2); /*0x419914*/
      v16 = v15; /*0x419919*/
      v29[2] = v15 / 256; /*0x41992e*/
      v29[3] = v14 / 256; /*0x419946*/
      *(_DWORD *)v24 = *(_DWORD *)&v29[2]; /*0x41994f*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, v24, 1) ) /*0x419953*/
      {
        v17 = v30; /*0x419965*/
        if ( *(_DWORD *)&dword_A8B238 /*0x41998d*/
          || v30[1].__pad_130[4]
          || (*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v24) + 300) & 0x10) != 0 )
        {
          if ( Cell::IsOccupied(v17, v24, 1) ) /*0x41999c*/
          {
            if ( v40 == dword_889E88 && v41 == dword_889E8C && v42 == dword_889E90 ) /*0x4199d1*/
            {
              v19 = (int *)(*(int (__thiscall **)(Cell *, char *))(v17->Cell_field_0x0 + 72))(v17, v43); /*0x4199f6*/
              v20 = *v19; /*0x4199f9*/
              v35 = v19[1] - v14; /*0x419a02*/
              v34 = v20 - v16; /*0x419a06*/
              __asm /*0x419a0a*/
              {
                fild [esp+88h+var_44]
                fild [esp+88h+var_48]
              }
            }
            else
            {
              LODWORD(v18) = v16 - v40; /*0x4199d7*/
              HIDWORD(v18) = v14 - v41; /*0x4199d9*/
              v33 = v18; /*0x4199db*/
              __asm /*0x4199e3*/
              {
                fild dword ptr [esp+88h+var_50+4]
                fild dword ptr [esp+88h+var_50]
              }
            }
            __asm /*0x419a12*/
            {
              fld st
              fmul st, st(1)
              fld st(2)
              fmul st, st(3)
            }
            __asm
            {
              faddp st(1), st
              fstp [esp+90h+var_90]; double
              fstp st
              fstp st
            }
            Math::Sqrt(v23); /*0x419a26*/
            LOWORD(v21) = Math::RoundToInt(v2); /*0x419a2e*/
            v22 = v25; /*0x419a33*/
            if ( v25 == -1 || v21 < v25 ) /*0x419a3e*/
            {
              v25 = v21; /*0x419a44*/
              v31 = v22; /*0x419a4c*/
              *(_DWORD *)v29 = *(_DWORD *)v26; /*0x419a50*/
              *(_DWORD *)v26 = *(_DWORD *)v24; /*0x419a54*/
            }
          }
        }
      }
      v27 += 16; /*0x419a64*/
    }
    while ( v27 < 255 ); /*0x419a68*/
    if ( v25 != -1 ) /*0x419a73*/
      break; /*0x419a73*/
    v28 -= 256; /*0x419a83*/
  }
  while ( v28 > 256 ); /*0x419a87*/
  if ( v31 == -1 ) /*0x419a92*/
LABEL_27:
    *(_DWORD *)v29 = *(_DWORD *)v26; /*0x419a98*/
  if ( v25 == -1 ) /*0x419aa1*/
    return 0; /*0x419aef*/
  if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 50 ) /*0x419abb*/
    return CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v29); /*0x419adf*/
  return CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v26); /*0x4197f3*/
}



// ==== 0x00419B00  Cell::IsOccupied  this=Cell  sig=csp ====
char __thiscall Cell::IsOccupied(Cell *this, __int16 *a2, char a3)
{
  Object *v5; // eax
  _DWORD *ClosestObjectCell; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  Cell *v10; // esi
  _WORD *v11; // eax
  void *v14; // [esp+10h] [ebp-Ch]
  _DWORD v15[2]; // [esp+14h] [ebp-8h] BYREF
  char v16; // [esp+20h] [ebp+4h]

  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a2, 1) ) /*0x419b18*/
    return 1; /*0x419b18*/
  if ( *(_BYTE *)(*((_DWORD *)this + 433) + 3412) ) /*0x419b2b*/
  {
    v15[0] = 0; /*0x419b44*/
    v15[1] = 0; /*0x419b4c*/
    v5 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x419b54*/
    ClosestObjectCell = (_DWORD *)Object::FindClosestObjectCell(v5, v15, 0, 0); /*0x419b5b*/
    if ( ClosestObjectCell ) /*0x419b62*/
    {
      if ( ClosestObjectCell[180] /*0x419b7c*/
        || *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*ClosestObjectCell + 132))(ClosestObjectCell) + 3412) )
      {
        return 1; /*0x419b7c*/
      }
    }
  }
  v7 = *((_DWORD *)this + 433); /*0x419b8a*/
  if ( *(_BYTE *)(v7 + 3597) ) /*0x419b90*/
    return 1; /*0x419b90*/
  if ( !*(_BYTE *)(v7 + 3580) /*0x419bbf*/
    || (v8 = *((_DWORD *)this + 361)) == 0
    || (v16 = 1, (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8) != 1) )
  {
    v16 = 0; /*0x419bc1*/
  }
  v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x419bd1*/
  v9 = 0; /*0x419bda*/
  if ( FootClass_Array.? <= 0 ) /*0x419bde*/
    return 1; /*0x419c6b*/
  while ( 1 ) /*0x419bea*/
  {
    v10 = (Cell *)*((_DWORD *)FootClass_Array.? + v9); /*0x419bea*/
    if ( v10 && (!v16 || *((Cell **)this + 361) != v10) && (a3 || v10 != this) && !v10->__pad_70[17] && v10->__pad_70[4] ) /*0x419c1d*/
    {
      v11 = (_WORD *)(*(int (__thiscall **)(Cell *, _DWORD *))(v10->Cell_field_0x0 + 440))(v10, v15); /*0x419c2d*/
      if ( *v11 == *a2 && v11[1] == a2[1] ) /*0x419c44*/
        break; /*0x419c44*/
      if ( *(void **)&v10[2].__pad_3C[40] == v14 ) /*0x419c52*/
        break; /*0x419c52*/
    }
    if ( ++v9 >= FootClass_Array.? ) /*0x419c5c*/
      return 1; /*0x419c5c*/
  }
  return 0; /*0x419c60*/
}



// ==== 0x00419C80  AircraftClass::Mission_Transport  this=AircraftClass  sig=csp ====
int __usercall AircraftClass::Mission_Transport@<eax>(AircraftClass *this, int a2@<ebp>)
{
  int *v2; // ecx
  int *v3; // esi
  _DWORD *v4; // edi
  Cell *v5; // eax
  _DWORD *v6; // eax
  int v7; // edx
  int result; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // edi
  int *v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edi
  int v19; // edx
  int v20; // edi
  int v21; // edx
  int v22; // edx
  int v23; // eax
  int Member; // eax
  int v25; // ebx
  _DWORD *v26; // edi
  int v27; // edi
  void *ClosestPlacementCell; // eax
  _DWORD v29[3]; // [esp+Ch] [ebp-30h] BYREF
  _BYTE v30[12]; // [esp+18h] [ebp-24h] BYREF
  _BYTE v31[20]; // [esp+24h] [ebp-18h] BYREF
  int v32; // [esp+38h] [ebp-4h]

  v3 = v2; /*0x419c85*/
  if ( (*(int (**)(void))(*v2 + 456))()
    || !*(_BYTE *)(v3[433] + 3597)
    || !v3[361]
    || (v4 = (_DWORD *)v3[361], v5 = (Cell *)(*(int (__thiscall **)(int *))(*v3 + 444))(v3), v4 == Cell::IsBridge(v5)) )
  {
    if ( (*(int (__thiscall **)(int *))(*v3 + 456))(v3) > 0 )
    {
      v9 = v3[361]; /*0x419d19*/
      if ( v3[435] != v9 && v9 && (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 44))(v9) == 6 )
      {
        v10 = v3[361]; /*0x419d37*/
        if ( v10 )
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 44))(v3[361]) == 6 ? v10 : 0;
        else
          v11 = 0; /*0x419d41*/
        v3[435] = v11; /*0x419d57*/
      }
    }
    if ( v3[361] /*0x419d86*/
      || (*(int (__thiscall **)(int *))(*v3 + 120))(v3) == 2
      || (*(int (__thiscall **)(int *, int))(*v3 + 628))(v3, 14) == 1
      || TechnoClass::PlaceAtCell((TechnoClass *)v3) )
    {
      switch ( v3[47] ) /*0x419dbc*/
      {
        case 0: /*0x419dbc*/
          v3[47] = 6; /*0x419dc3*/
          goto LABEL_24; /*0x419dc3*/
        case 1: /*0x419dbc*/
        case 2: /*0x419dbc*/
        case 3: /*0x419dbc*/
        case 4: /*0x419dbc*/
        case 5: /*0x419dbc*/
LABEL_24:
          *((_BYTE *)v3 + 1748) = 1; /*0x419dcd*/
          return 1; /*0x419ddf*/
        case 6: /*0x419dbc*/
          if ( *(_BYTE *)(v3[433] + 3597) && (*(int (__thiscall **)(int *))(*v3 + 456))(v3) ) /*0x419df4*/
            (*(void (__thiscall **)(int *, int))(*v3 + 628))(v3, 14); /*0x419e04*/
          if ( (unsigned __int8)Team::AllMembersValid((Team *)v3) ) /*0x419e0c*/
          {
            if ( !v3[413] ) /*0x419eaa*/
              WinAPI::Wrapper(-2147467261); /*0x419eb9*/
            if ( (*(int (__stdcall **)(int))(*(_DWORD *)v3[413] + 144))(v3[413]) == 1 /*0x419ee6*/
              || *(_BYTE *)(v3[433] + 3597) && !(*(int (__thiscall **)(int *))(*v3 + 456))(v3) )
            {
              v3[47] = 7; /*0x419ef0*/
              *((_BYTE *)v3 + 1748) = 0; /*0x419ef6*/
            }
            result = 3; /*0x419eff*/
          }
          else
          {
            if ( !TechnoClass::PlaceAtCell((TechnoClass *)v3) ) /*0x419e1b*/
            {
              if ( !v3[413] ) /*0x419e24*/
                WinAPI::Wrapper(-2147467261); /*0x419e33*/
              if ( (*(int (__stdcall **)(int))(*(_DWORD *)v3[413] + 144))(v3[413]) == 1 ) /*0x419e4a*/
              {
                v3[47] = 7; /*0x419e4c*/
                *((_BYTE *)v3 + 1748) = 1; /*0x419e52*/
              }
              if ( v3[45] == -1 ) /*0x419e5f*/
              {
                (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1152))(v3, 0, 1); /*0x419e69*/
                (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1156))(v3, 0, 1); /*0x419e77*/
                *((_BYTE *)v3 + 1748) = 1; /*0x419e7d*/
                return 1; /*0x419e8f*/
              }
              *((_BYTE *)v3 + 1748) = 1; /*0x419e90*/
            }
            *((_BYTE *)v3 + 1748) = 1; /*0x419e97*/
            result = 1; /*0x419ea0*/
          }
          break; /*0x419ea9*/
        case 7: /*0x419dbc*/
          if ( !v3[413] ) /*0x419f09*/
            WinAPI::Wrapper(-2147467261); /*0x419f18*/
          if ( (*(int (__stdcall **)(int))(*(_DWORD *)v3[413] + 144))(v3[413]) == 1 ) /*0x419f2f*/
          {
            v12 = v3[361]; /*0x419f35*/
            if ( v12 ) /*0x419f3d*/
            {
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v3[361]) == 6 ) /*0x419f4d*/
                v13 = (int *)(*(int (__thiscall **)(int, _BYTE *, int *))(*(_DWORD *)v12 + 168))(v12, v30, v3); /*0x419f59*/
              else
                v13 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3[361] + 72))(v3[361], v31); /*0x419f6e*/
              v14 = *v13; /*0x419f71*/
              v15 = v13[1]; /*0x419f73*/
              v32 = v13[2]; /*0x419f79*/
              v16 = v3[39]; /*0x419f85*/
              v17 = v14 - v16; /*0x419f87*/
              v18 = v3[40]; /*0x419f89*/
              v19 = v15 - v18; /*0x419f8c*/
              v29[2] = v3[41]; /*0x419f93*/
              if ( v17 <= 0 ) /*0x419f97*/
              {
                if ( v17 < -5 ) /*0x419fa8*/
                  v17 = -5; /*0x419faa*/
              }
              else if ( v17 > 5 ) /*0x419f9c*/
              {
                v17 = 5; /*0x419f9e*/
              }
              if ( v19 <= 0 ) /*0x419fb1*/
              {
                if ( v19 < -5 ) /*0x419fc2*/
                  v19 = -5; /*0x419fc4*/
              }
              else if ( v19 > 5 ) /*0x419fb6*/
              {
                v19 = 5; /*0x419fb8*/
              }
              v20 = v19 + v18; /*0x419fcb*/
              v21 = *v3; /*0x419fcd*/
              v29[0] = v17 + v16; /*0x419fcf*/
              v29[1] = v20; /*0x419fda*/
              (*(void (__thiscall **)(int *, _DWORD *))(v21 + 436))(v3, v29); /*0x419fde*/
            }
            *((_BYTE *)v3 + 1748) = 1; /*0x419fe4*/
            return 1; /*0x419fed*/
          }
          else
          {
            v22 = *v3; /*0x419ff7*/
            *((_BYTE *)v3 + 1748) = 1; /*0x419ffd*/
            v23 = (*(int (__thiscall **)(int *, int))(v22 + 628))(v3, 21) - 1; /*0x41a00a*/
            if ( v23 ) /*0x41a00b*/
            {
              if ( v23 == 4 ) /*0x41a010*/
              {
                (*(void (__thiscall **)(int *))(*v3 + 212))(v3); /*0x41a030*/
                Member = Team::GetMember((Team *)v3, 0); /*0x41a03b*/
                CellClass::AddObject((CellClass *)(Member + 276), v3); /*0x41a048*/
              }
              else
              {
                (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1156))(v3, 0, 1); /*0x41a01a*/
              }
              return 1; /*0x41a022*/
            }
            else if ( *(_BYTE *)(v3[433] + 3580) && v3[70] ) /*0x41a06d*/
            {
              v25 = Team::GetMember((Team *)v3, 0); /*0x41a08b*/
              v26 = (_DWORD *)LinkedList::Pop((LinkedList *)v3 + 23); /*0x41a09a*/
              (*(void (__thiscall **)(int *, int, int))(*v3 + 628))(v3, 3, a2); /*0x41a09c*/
              if ( (*(int (__thiscall **)(_DWORD *, int, int))(*v26 + 632))(v26, 2, v25) == 1 ) /*0x41a0b2*/
              {
                CellClass::AddObject((CellClass *)(v3 + 69), v26); /*0x41a0b7*/
                (*(void (__thiscall **)(int *, _DWORD))(*v3 + 292))(v3, 0); /*0x41a0c2*/
                FootClass::MissionMoveCarryallLand((FootClass *)v3); /*0x41a0ca*/
                (*(void (__thiscall **)(int *, int))(*v3 + 292))(v3, 1); /*0x41a0d5*/
              }
              else
              {
                v27 = *v3; /*0x41a0f6*/
                ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((TechnoClass *)v3); /*0x41a0fc*/
                (*(void (__thiscall **)(int *, void *))(v27 + 1152))(v3, ClosestPlacementCell); /*0x41a104*/
              }
              (*(void (__thiscall **)(int *, int, _DWORD))(*v3 + 488))(v3, 2, 0); /*0x41a0e3*/
              return 1; /*0x41a0ec*/
            }
            else
            {
              (*(void (__thiscall **)(int *, int, _DWORD))(*v3 + 488))(v3, 5, 0); /*0x41a12d*/
              return 1; /*0x41a133*/
            }
          }
        default:
          return 1;
      }
    }
    else
    {
      (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1156))(v3, 0, 1); /*0x419d97*/
      return 1; /*0x419d9f*/
    }
  }
  else
  {
    if ( v4 )
      v6 = (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) == 6 ? v4 : 0;
    else
      v6 = 0; /*0x419cc9*/
    v7 = *v3; /*0x419cdf*/
    v3[435] = (int)v6; /*0x419ce5*/
    (*(void (__thiscall **)(int *, int))(v7 + 628))(v3, 3); /*0x419ceb*/
    (*(void (__thiscall **)(int *, int, int))(*v3 + 488))(v3, 2, 1); /*0x419cf9*/
    return 1; /*0x419d01*/
  }
  return result; /*0x419cff*/
}



// ==== 0x0041A160  TechnoClass::FindClosestPlacementCell  this=TechnoClass  sig=csp ====
void *__thiscall TechnoClass::FindClosestPlacementCell(TechnoClass *this)
{
  double v1; // st7
  int v3; // eax
  int v4; // esi
  _DWORD *v5; // ebp
  _DWORD *v6; // eax
  int *v7; // eax
  int v8; // ebp
  int TileIndex; // eax
  int v10; // eax
  int (__thiscall **ptr_0)(TechnoClass *, _DWORD *); // eax
  __int16 *v12; // eax
  __int64 v13; // rax
  int v15; // eax
  TechnoClass *v16; // eax
  TechnoClass *v17; // esi
  _DWORD *v18; // ebp
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ebp
  int v26; // eax
  int v27; // eax
  int *location; // edi
  int v29; // [esp-20h] [ebp-90h]
  int v30; // [esp+20h] [ebp-50h]
  int v31; // [esp+24h] [ebp-4Ch]
  int v32; // [esp+24h] [ebp-4Ch]
  __int16 v33[2]; // [esp+28h] [ebp-48h] BYREF
  __int16 v34[2]; // [esp+2Ch] [ebp-44h] BYREF
  __int16 v35; // [esp+30h] [ebp-40h] BYREF
  __int16 v36; // [esp+32h] [ebp-3Eh]
  __int16 v37[2]; // [esp+34h] [ebp-3Ch] BYREF
  int v38; // [esp+38h] [ebp-38h] BYREF
  int v39; // [esp+3Ch] [ebp-34h] BYREF
  int v40; // [esp+40h] [ebp-30h] BYREF
  int v41; // [esp+44h] [ebp-2Ch]
  int v42; // [esp+48h] [ebp-28h]
  char v43[12]; // [esp+4Ch] [ebp-24h] BYREF
  _BYTE v44[12]; // [esp+58h] [ebp-18h] BYREF
  _DWORD v45[3]; // [esp+64h] [ebp-Ch] BYREF

  v34[0] = 0; /*0x41a171*/
  v34[1] = 0; /*0x41a176*/
  v30 = -1; /*0x41a189*/
  if ( *(int *)(*((_DWORD *)this + 433) + 1016) > 0 ) /*0x41a197*/
  {
    v3 = 0; /*0x41a1a3*/
    v31 = 0; /*0x41a1a5*/
    *(_DWORD *)v37 = this->owner->bunkersCount; /*0x41a1ae*/
    if ( *(int *)v37 > 0 ) /*0x41a1b2*/
    {
      do /*0x41a2f9*/
      {
        v4 = *(_DWORD *)(this->owner->absorbersCount + 4 * v3); /*0x41a1c1*/
        if ( v4 && !*(_BYTE *)(v4 + 129) ) /*0x41a1cc*/
        {
          v5 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v4 + 72))(v4, v43); /*0x41a1e6*/
          v6 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v44); /*0x41a1ef*/
          v7 = Coord::Subtract((Coord *)v45, *v6 - *v5, v6[1] - v5[1], v6[2] - v5[2]); /*0x41a210*/
          v40 = *v7; /*0x41a217*/
          v41 = v7[1]; /*0x41a222*/
          v42 = v7[2]; /*0x41a229*/
          v8 = Coord::Length((Coord *)&v40); /*0x41a238*/
          if ( *(_DWORD *)(v4 + 1312) == **(_DWORD **)(*((_DWORD *)this + 433) + 1004) ) /*0x41a248*/
            v8 /= 4; /*0x41a255*/
          if ( v30 == -1 || v8 < v30 ) /*0x41a262*/
          {
            *(_DWORD *)v33 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v4 + 440))(v4, &v38); /*0x41a287*/
            v35 = 0; /*0x41a2a0*/
            v36 = 0; /*0x41a2a5*/
            TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v33, 0, 0); /*0x41a2aa*/
            v10 = *LayerClass::Pathfinding_Find( /*0x41a2c5*/
                     &stru_87F5F0.__pad_58[416],
                     (int)&v39,
                     &v39,
                     v33,
                     0,
                     TileIndex,
                     0,
                     0,
                     3,
                     3,
                     0,
                     0,
                     0,
                     1,
                     &v35,
                     0,
                     0);
            *(_DWORD *)v33 = v10; /*0x41a2ce*/
            if ( v10 != g_AircraftStatusFlag ) /*0x41a2d2*/
            {
              v30 = v8; /*0x41a2e2*/
              *(_DWORD *)v34 = v10; /*0x41a2e6*/
            }
          }
        }
        v3 = ++v31; /*0x41a2f2*/
      }
      while ( v31 < *(int *)v37 ); /*0x41a2f9*/
      if ( v30 != -1 ) /*0x41a306*/
      {
        if ( v30 < 256 ) /*0x41a311*/
        {
          ptr_0 = (int (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass; /*0x41a327*/
          v35 = 0; /*0x41a334*/
          v36 = 0; /*0x41a339*/
          v12 = (__int16 *)ptr_0[110](this, &v39); /*0x41a33e*/
          v29 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v12, 0, 0); /*0x41a351*/
          v13 = ((__int64 (__thiscall *)(TechnoClass *, int *))*((_DWORD *)this->RadioClass + 110))(this, &v38); /*0x41a35a*/
          *(_DWORD *)v37 = *LayerClass::Pathfinding_Find( /*0x41a37c*/
                              &stru_87F5F0.__pad_58[416],
                              SHIDWORD(v13),
                              v33,
                              (__int16 *)v13,
                              0,
                              v29,
                              0,
                              0,
                              1,
                              1,
                              0,
                              0,
                              0,
                              1,
                              &v35,
                              0,
                              0);
          return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v37); /*0x41a38c*/
        }
        return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v34); /*0x41a311*/
      }
    }
  }
  v15 = 0; /*0x41a3aa*/
  v32 = 0; /*0x41a3ae*/
  if ( dword_A8E370 > 0 ) /*0x41a3b2*/
  {
    do /*0x41a50f*/
    {
      v16 = (TechnoClass *)AbstractClass::IsTechnoType(*((AbstractClass **)dword_A8E364 + v15)); /*0x41a3c1*/
      v17 = v16; /*0x41a3c6*/
      if ( v16 ) /*0x41a3ca*/
      {
        if ( !v16->? && v16->owner == this->owner && v16 != this ) /*0x41a3f2*/
        {
          v18 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD *))v16->RadioClass + 18))(v16, v45); /*0x41a406*/
          v19 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v44); /*0x41a40f*/
          v20 = *v19 - *v18; /*0x41a417*/
          v21 = v19[1]; /*0x41a419*/
          v22 = v19[2]; /*0x41a41c*/
          v40 = v20; /*0x41a41f*/
          v23 = v18[2]; /*0x41a42b*/
          v41 = v21 - v18[1]; /*0x41a42e*/
          v42 = v22 - v23; /*0x41a438*/
          Math::Sqrt((double)v40 * (double)v40 + (double)(v22 - v23) * (double)(v22 - v23) + (double)v41 * (double)v41); /*0x41a45d*/
          LOWORD(v24) = Math::RoundToInt(v1); /*0x41a465*/
          v25 = v24; /*0x41a46a*/
          if ( v30 == -1 || v24 < v30 ) /*0x41a477*/
          {
            *(_DWORD *)v33 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *))v17->RadioClass + 110))(v17, &v39); /*0x41a49b*/
            v35 = 0; /*0x41a4b4*/
            v36 = 0; /*0x41a4b9*/
            v26 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v33, 0, 0); /*0x41a4be*/
            v27 = *LayerClass::Pathfinding_Find( /*0x41a4d9*/
                     &stru_87F5F0.__pad_58[416],
                     (int)&v38,
                     &v38,
                     v33,
                     0,
                     v26,
                     0,
                     0,
                     1,
                     1,
                     0,
                     0,
                     0,
                     1,
                     &v35,
                     0,
                     0);
            *(_DWORD *)v33 = v27; /*0x41a4e2*/
            if ( v27 != g_AircraftStatusFlag ) /*0x41a4e6*/
            {
              v30 = v25; /*0x41a4f6*/
              *(_DWORD *)v34 = v27; /*0x41a4fa*/
            }
          }
        }
      }
      v15 = ++v32; /*0x41a508*/
    }
    while ( v32 < dword_A8E370 ); /*0x41a50f*/
    if ( v30 != -1 ) /*0x41a51a*/
      return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v34); /*0x41a532*/
  }
  location = this->?; /*0x41a533*/
  v40 = *location; /*0x41a53b*/
  v41 = location[1]; /*0x41a547*/
  v42 = location[2]; /*0x41a553*/
  return Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v40); /*0x41a385*/
}



// ==== 0x0041A570  TechnoClass::GetTurretFacing  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::GetTurretFacing(TechnoClass *this, _DWORD *a2)
{
  int v2; // ecx
  TechnoClass *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x41a570*/
  v2 = *ProgressTimer::GetValue((ProgressTimer *)this->secondaryFacing, &v4); /*0x41a581*/
  *a2 = v2; /*0x41a587*/
  return a2; /*0x41a58a*/
}



// ==== 0x0041A590  AircraftClass::CheckLandingClearance  this=AircraftClass  sig=csp ====
char *__thiscall AircraftClass::CheckLandingClearance(AircraftClass *this, int a2, int a3, int a4)
{
  char *result; // eax

  result = MissionClass::GetMissionControl((MissionClass *)this); /*0x41a593*/
  if ( result[9] ) /*0x41a598*/
    return (*((char *(__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 289))(this, 0, 1); /*0x41a5a7*/
  return result; /*0x41a5ad*/
}



// ==== 0x0041A5C0  AircraftClass::GetMissionTimer  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::GetMissionTimer(AircraftClass *this)
{
  int v2; // edi
  void (__thiscall **ptr_0)(AircraftClass *, int, _DWORD); // eax
  char *MissionControl; // eax
  int result; // eax
  void (__thiscall **v6)(AircraftClass *, CellClass *, int); // edi
  CellClass *v7; // eax
  void (__thiscall **v8)(AircraftClass *, _DWORD, int); // eax
  int ammo; // ecx
  int Member; // eax
  int v11; // edi
  CellClass *owner; // ecx
  _DWORD *v13; // eax
  char *v14; // eax
  int v15; // eax
  int v16; // [esp+8h] [ebp-Ch] BYREF
  int v17; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h]

  v2 = (*(int (__thiscall **)(AircraftTypeClass *))(*(_DWORD *)this->Type + 188))(this->Type); /*0x41a5d9*/
  if ( (*((int (__thiscall **)(AircraftClass *))this->FootClass + 114))(this) == v2 ) /*0x41a5e3*/
  {
    if ( this->? ) /*0x41a5e9*/
    {
      if ( this->? ) /*0x41a5f3*/
      {
        ptr_0 = (void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass; /*0x41a5fd*/
        this->AircraftClass_field_bool_6D4 = 1; /*0x41a605*/
        ptr_0[122](this, 2, 0); /*0x41a60c*/
      }
      MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x41a614*/
      LOWORD(result) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x41a622*/
    }
    else if ( *(_DWORD *)(*((int (__thiscall **)(AircraftClass *, _DWORD))this->FootClass + 254))(this, 0) ) /*0x41a639*/
    {
      if ( !this->? ) /*0x41a68d*/
      {
        v8 = (void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass; /*0x41a697*/
        this->AircraftClass_field_bool_6D4 = 1; /*0x41a69f*/
        v8[289](this, 0, 1); /*0x41a6a6*/
      }
      return 1; /*0x41a6ad*/
    }
    else
    {
      v6 = (void (__thiscall **)(AircraftClass *, CellClass *, int))this->FootClass; /*0x41a644*/
      v16 = this->?[0]; /*0x41a64a*/
      v17 = this->?[1]; /*0x41a65b*/
      v18 = this->?[2]; /*0x41a662*/
      v7 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v16); /*0x41a666*/
      v6[288](this, v7, 1); /*0x41a66e*/
      (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 2, 0); /*0x41a67c*/
      return 1; /*0x41a683*/
    }
    return result; /*0x41a62c*/
  }
  if ( byte_889ECC ) /*0x41a6be*/
  {
    if ( this->? || !(*((unsigned __int8 (__thiscall **)(AircraftClass *))this->FootClass + 171))(this) ) /*0x41a6d2*/
      goto LABEL_14; /*0x41a6da*/
LABEL_26:
    if ( !(unsigned __int8)Team::AllMembersValid((Team *)this) ) /*0x41a7bf*/
    {
      v11 = (*((int (__thiscall **)(AircraftClass *, _BYTE *, _DWORD, _DWORD))this->FootClass + 330))( /*0x41a7e6*/
              this,
              &this->Type->TechnoTypeClass[1000],
              0,
              0);
      if ( v11 ) /*0x41a7ea*/
      {
        (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 7, 0); /*0x41a7f8*/
        (*((void (__thiscall **)(AircraftClass *, int, int))this->FootClass + 288))(this, v11, 1); /*0x41a805*/
        (*((void (__thiscall **)(AircraftClass *, _DWORD))this->FootClass + 242))(this, 0); /*0x41a811*/
        return 1; /*0x41a821*/
      }
    }
    goto LABEL_14; /*0x41a7ea*/
  }
  if ( byte_889ECD ) /*0x41a75f*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(AircraftClass *))this->FootClass + 171))(this) /*0x41a78c*/
      && this->? < *(_DWORD *)&this->Type->TechnoTypeClass[1668] / 2 )
    {
      goto LABEL_26; /*0x41a78c*/
    }
  }
  else if ( (*((unsigned __int8 (__thiscall **)(AircraftClass *))this->FootClass + 171))(this) /*0x41a7b7*/
         && this->? < *(_DWORD *)&this->Type->TechnoTypeClass[1668] )
  {
    goto LABEL_26; /*0x41a7b7*/
  }
LABEL_14:
  ammo = this->?; /*0x41a6e0*/
  if ( ammo != -1 && ammo < *(_DWORD *)&this->Type->TechnoTypeClass[1668] / 2 ) /*0x41a702*/
  {
    if ( (unsigned __int8)Team::AllMembersValid((Team *)this) ) /*0x41a70a*/
    {
      Member = Team::GetMember((Team *)this, 0); /*0x41a71b*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 ) /*0x41a72a*/
      {
        if ( *(_BYTE *)(*(_DWORD *)(Team::GetMember((Team *)this, 0) + 1312) + 5802) ) /*0x41a73f*/
          return 1; /*0x41a74e*/
      }
    }
  }
  if ( this->? ) /*0x41a822*/
  {
    (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 1, 0); /*0x41a834*/
    return 1; /*0x41a83b*/
  }
  else if ( (*((unsigned __int8 (__thiscall **)(AircraftClass *))this->FootClass + 171))(this) ) /*0x41a849*/
  {
    if ( (*((int (__thiscall **)(AircraftClass *))this->FootClass + 114))(this) /*0x41a86e*/
      || (unsigned __int8)Team::AllMembersValid((Team *)this) )
    {
      if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x41a888*/
      {
        v16 = this->?[0]; /*0x41a89d*/
        owner = (CellClass *)this->?; /*0x41a8a9*/
        v17 = this->?[1]; /*0x41a8af*/
        v18 = this->?[2]; /*0x41a8b6*/
        v13 = CellClass::ScanOccupiers(owner, &v16); /*0x41a8ba*/
        if ( v13 ) /*0x41a8c1*/
        {
          (*((void (__thiscall **)(AircraftClass *, _DWORD *))this->FootClass + 242))(this, v13); /*0x41a8c8*/
          (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 1, 0); /*0x41a8d6*/
        }
      }
      if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) /*0x41a8ef*/
        || (*((unsigned __int8 (__thiscall **)(AircraftClass *))this->FootClass + 21))(this) )
      {
        return FootClass::FindMovePosition((FootClass *)this); /*0x41a92b*/
      }
      else
      {
        v14 = MissionClass::GetMissionControl((MissionClass *)this); /*0x41a8f8*/
        LOWORD(v15) = Math::RoundToInt(*((double *)v14 + 2) * 900.0); /*0x41a906*/
        return v15 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x41a921*/
      }
    }
    else
    {
      return 45; /*0x41a878*/
    }
  }
  else
  {
    return 45; /*0x41a854*/
  }
}



// ==== 0x0041A940  AircraftClass::EvaluateTargetingState  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::EvaluateTargetingState(AircraftClass *this)
{
  int v2; // edi

  v2 = (*(int (__thiscall **)(AircraftTypeClass *))(*(_DWORD *)this->Type + 188))(this->Type); /*0x41a956*/
  if ( (*((int (__thiscall **)(AircraftClass *))this->FootClass + 114))(this) == v2 ) /*0x41a960*/
  {
    if ( !this->? ) /*0x41a962*/
      (*((void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 289))(this, 0, 1); /*0x41a974*/
    return 1; /*0x41a97b*/
  }
  else
  {
    if ( !this->? /*0x41a99c*/
      && (*((unsigned __int8 (__thiscall **)(AircraftClass *))this->FootClass + 171))(this)
      && !(unsigned __int8)Team::AllMembersValid((Team *)this) )
    {
      (*((void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 289))(this, 0, 1); /*0x41a9ad*/
    }
    if ( this->? ) /*0x41a9b3*/
    {
      (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 1, 0); /*0x41a9c5*/
      return 1; /*0x41a9cc*/
    }
    else
    {
      return FootClass::FindAITarget((FootClass *)this); /*0x41a9d5*/
    }
  }
}



// ==== 0x0041A9E0  TechnoClass::CanFireAtTarget  this=TechnoClass  sig=csp ====
int __fastcall TechnoClass::CanFireAtTarget(TechnoClass *this, int a2, _BYTE *a3, int a4, char a5)
{
  int result; // eax
  int v7; // edi

  result = TriggerTypeClass::ReadINI(this, a2, a3, a4, a5); /*0x41a9f6*/
  if ( !result ) /*0x41a9fd*/
  {
    if ( !*((_BYTE *)this + 1737) || this->passengers[1] ) /*0x41aa09*/
    {
      v7 = *ProgressTimer::GetValue((ProgressTimer *)this->secondaryFacing, &a5); /*0x41aa2e*/
      if ( (*(int (__stdcall **)(char *))(this->airstrikeTimer + 28))((char *)this + 1728) /*0x41aa6a*/
        || abs16(v7 - *(_WORD *)ObjectClass::CalcTargetFacing((ObjectClass *)this, (int *)&a5, (int)a3)) <= 0x800u )
      {
        return 0; /*0x41aa77*/
      }
      else
      {
        return 2; /*0x41aa6e*/
      }
    }
    else
    {
      return 1; /*0x41aa15*/
    }
  }
  return result; /*0x41aa13*/
}



// ==== 0x0041AA80  AircraftClass::AssignDestination_SyncLog  this=FootClass  sig=csp ====
char __thiscall AircraftClass::AssignDestination_SyncLog(Class_7E22A4 *this, int a2, AbstractClass *a3, int a4)
{
  void *ClosestPlacementCell; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  Array *v10; // eax
  Array *v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax

  ClosestPlacementCell = (void *)a2; /*0x41aa83*/
  if ( !a2 ) /*0x41aa8b*/
  {
LABEL_53:
    LOBYTE(v6) = FootClass::AssignDestination((FootClass *)this, (int)ClosestPlacementCell, (int)a3); /*0x41adac*/
    return v6; /*0x41adb4*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 84))(a2) ) /*0x41aa9a*/
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)(a2 + 4) + 12))(a2 + 4) != 6 /*0x41aada*/
      || (*(int (__thiscall **)(Class_7E22A4 *))(this->q184)(this) != 7 && this->queuedMission != 7 )
    {
      goto LABEL_35; /*0x41aada*/
    }
    if ( (unsigned __int8)Team::AllMembersValid((Team *)this) ) /*0x41aae8*/
    {
      v10 = (Array *)AbstractClass::IsTechnoType((AbstractClass *)a2); /*0x41ac4e*/
      v11 = v10; /*0x41ac53*/
      if ( !v10 ) /*0x41ac57*/
        goto LABEL_35; /*0x41ac57*/
      if ( (unsigned __int8)Array::ContainsValue(v10, (int)this) ) /*0x41ac5c*/
      {
        if ( (unsigned __int8)Array::Contains(v11, (int)this) ) /*0x41ac72*/
          goto LABEL_35; /*0x41ac72*/
        v6 = (*(int (__thiscall **)(Class_7E22A4 *, int))(this->temporalUsing)(this, 14); /*0x41ac81*/
        if ( v6 == 1 ) /*0x41ac8a*/
          return v6; /*0x41ac8a*/
        (*(void (__thiscall **)(Class_7E22A4 *, int))(this->temporalUsing)(this, 3); /*0x41ac96*/
        v12 = *(_DWORD *)(a2 + 1312); /*0x41ac9c*/
        if ( !*(_BYTE *)(v12 + 5801) && !*(_BYTE *)(v12 + 5802) ) /*0x41acac*/
          goto LABEL_35; /*0x41acb4*/
        TechnoClass::SetFocus((TechnoClass *)this, a2); /*0x41acb9*/
        goto LABEL_34; /*0x41acb9*/
      }
    }
    else
    {
      if ( !(unsigned __int8)Array::ContainsValue((Array *)a2, (int)this) ) /*0x41aaf8*/
      {
        TechnoClass::SetFocus((TechnoClass *)this, a2); /*0x41ab09*/
        if ( *(_BYTE *)(*(_DWORD *)(a2 + 1312) + 5835) ) /*0x41ab1a*/
        {
          ClosestPlacementCell = (void *)(*(int (__thiscall **)(Class_7E22A4 *, int, _DWORD, _DWORD))(this->FootClass_field_528)( /*0x41ab4a*/
                                           this,
                                           this->q1B1 + 1000,
                                           0,
                                           0);
          (*(void (__thiscall **)(Class_7E22A4 *, _DWORD, int))(this->q480)(this, 0, 1); /*0x41ab4c*/
          v7 = 2; /*0x41ab54*/
          if ( ClosestPlacementCell /*0x41ab6b*/
            && (*(int (__thiscall **)(Class_7E22A4 *, int, void *))(this->temporalTargetingMe)(
                 this,
                 15,
                 ClosestPlacementCell) == 1 )
          {
            (*(void (__thiscall **)(Class_7E22A4 *, int, void *))(this->temporalTargetingMe)(this, 2, ClosestPlacementCell); /*0x41ab73*/
            v7 = 7; /*0x41ab79*/
          }
          else
          {
            ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((TechnoClass *)this); /*0x41ab87*/
          }
          (*(void (__thiscall **)(Class_7E22A4 *, int))(this->q1E8)(this, v7); /*0x41ab90*/
          if ( (*(unsigned __int8 (__thiscall **)(Class_7E22A4 *))(this->reloadTimer)(this) ) /*0x41ab9a*/
            (*(void (__thiscall **)(Class_7E22A4 *))(this->disguiseBlinkTimer)(this); /*0x41aba8*/
        }
        if ( *(_BYTE *)(*(_DWORD *)(a2 + 1312) + 5801) ) /*0x41abb2*/
        {
          this->currentRank = a2; /*0x41abc4*/
LABEL_34:
          ClosestPlacementCell = 0; /*0x41acbe*/
        }
LABEL_35:
        v13 = (*(int (__thiscall **)(Class_7E22A4 *))(this->q1BC)(this); /*0x41acc0*/
        if ( (*(_DWORD *)(v13 + 320) & 0x100) == 0 ) /*0x41acd3*/
        {
          v14 = *(_DWORD *)(v13 + 228); /*0x41acd9*/
          if ( v14 ) /*0x41ace1*/
          {
            while ( (Class_7E22A4 *)v14 == this || (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) != 6 ) /*0x41acf5*/
            {
              v14 = *(_DWORD *)(v14 + 48); /*0x41acf7*/
              if ( !v14 ) /*0x41acfc*/
                goto LABEL_53; /*0x41acfc*/
            }
            v15 = *(_DWORD *)(v14 + 1312); /*0x41ad19*/
            if ( *(_BYTE *)(v15 + 5801) || *(_BYTE *)(v15 + 5802) ) /*0x41ad29*/
            {
              if ( !this->Locomotor ) /*0x41ad33*/
                WinAPI::Wrapper(-2147467261); /*0x41ad42*/
              if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 96))(this->Locomotor) /*0x41ad5d*/
                && !HouseClass::IonSensitivesShouldBeOffline() )
              {
                if ( !this->Locomotor ) /*0x41ad66*/
                  WinAPI::Wrapper(-2147467261); /*0x41ad75*/
                (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 88))(this->Locomotor); /*0x41ad83*/
              }
              if ( Team::GetMember((Team *)this, 0) == v14 /*0x41ad9e*/
                && ClosestPlacementCell != (void *)Team::GetMember((Team *)this, 0) )
              {
                (*(void (__thiscall **)(Class_7E22A4 *, int))(this->temporalUsing)(this, 3); /*0x41ada6*/
              }
            }
          }
        }
        goto LABEL_53; /*0x41ada6*/
      }
      if ( (*(int (__thiscall **)(Class_7E22A4 *, int, int))(this->temporalTargetingMe)(this, 14, a2) != 1 ) /*0x41abdf*/
      {
        (*(void (__thiscall **)(Class_7E22A4 *, int))(this->temporalUsing)(this, 3); /*0x41abe7*/
        v8 = *(_DWORD *)(a2 + 1312); /*0x41abed*/
        if ( *(_BYTE *)(v8 + 5801) || *(_BYTE *)(v8 + 5802) ) /*0x41abfd*/
        {
          TechnoClass::SetFocus((TechnoClass *)this, a2); /*0x41ac0a*/
          ClosestPlacementCell = 0; /*0x41ac0f*/
        }
      }
      v9 = *(_DWORD *)(a2 + 1312); /*0x41ac11*/
      if ( *(_BYTE *)(v9 + 5801) || *(_BYTE *)(v9 + 5802) ) /*0x41ac21*/
      {
        if ( this->FootClass_field_5A4 ) /*0x41ac38*/
          TechnoClass::SetFocus((TechnoClass *)this, this->FootClass_field_5A4); /*0x41ac45*/
        goto LABEL_35; /*0x41ac4a*/
      }
    }
    TechnoClass::SetFocus((TechnoClass *)this, (int)ClosestPlacementCell); /*0x41ac2e*/
    goto LABEL_35; /*0x41ac33*/
  }
  LOBYTE(v6) = FootClass::AssignDestination((FootClass *)this, 0, (int)a3); /*0x41aaa6*/
  return v6; /*0x41aaab*/
}



// ==== 0x0041ADC0  AircraftClass::ProcessDockCheck  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::ProcessDockCheck(AircraftClass *this)
{
  if ( !this->?[0] ) /*0x41adc3*/
    WinAPI::Wrapper(-2147467261); /*0x41add2*/
  return (*(int (__stdcall **)(int))(*(_DWORD *)this->?[0] + 116))(this->?[0]); /*0x41ade3*/
}



// ==== 0x0041ADF0  AircraftClass::RevealSight  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::RevealSight(AircraftClass *this, int a2, int a3)
{
  int v4; // ebx
  HouseClass *owner; // edx
  int v6; // edx
  int v7; // eax
  HouseClass *v8; // edx
  int result; // eax
  int v10; // ebx
  int (__thiscall **ptr_0)(AircraftClass *); // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int (__thiscall **v15)(AircraftClass *); // eax
  int v16; // eax
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v4 = *(_DWORD *)&this->Type->TechnoTypeClass[1512]; /*0x41ae00*/
  if ( !(*((int (__thiscall **)(AircraftClass *))this->FootClass + 114))(this) ) /*0x41ae06*/
  {
    v4 = 1; /*0x41ae10*/
LABEL_4:
    v17 = this->?[0]; /*0x41ae1f*/
    v18 = this->?[1]; /*0x41ae40*/
    owner = this->?; /*0x41ae44*/
    v19 = this->?[2]; /*0x41ae4e*/
    MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], &v17, v4, owner, a2, a3, 0, 1, 0); /*0x41ae5e*/
    v6 = this->?[1]; /*0x41ae65*/
    v7 = this->?[2]; /*0x41ae68*/
    v17 = this->?[0]; /*0x41ae6d*/
    v18 = v6; /*0x41ae77*/
    v8 = this->?; /*0x41ae7b*/
    v19 = v7; /*0x41ae84*/
    return MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], &v17, v4, v8, a2, a3, 0, 1, 1); /*0x41aea1*/
  }
  if ( v4 ) /*0x41ae19*/
    goto LABEL_4; /*0x41ae19*/
  result = (int)dword_A8B230->ptr_0; /*0x41aeaa*/
  if ( ((int)dword_A8B230->ptr_0 & 0x1000) != 0 ) /*0x41aeaf*/
  {
    v10 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 244); /*0x41aec5*/
    v17 = this->?[0]; /*0x41aecd*/
    v18 = this->?[1]; /*0x41aed6*/
    ptr_0 = (int (__thiscall **)(AircraftClass *))this->FootClass; /*0x41aeda*/
    v19 = this->?[2]; /*0x41aedf*/
    v12 = ptr_0[114](this); /*0x41aee3*/
    MapClass::RevealArea1( /*0x41af1a*/
      (MapClass *)&stru_87F5F0.__pad_58[416],
      &v17,
      v10,
      this->?,
      0,
      0,
      1,
      v12 < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1972) / 2,
      0);
    v13 = this->?[1]; /*0x41af21*/
    v14 = this->?[2]; /*0x41af24*/
    v17 = this->?[0]; /*0x41af27*/
    v15 = (int (__thiscall **)(AircraftClass *))this->FootClass; /*0x41af2b*/
    v18 = v13; /*0x41af2d*/
    v19 = v14; /*0x41af35*/
    v16 = v15[114](this); /*0x41af39*/
    return MapClass::RevealArea1( /*0x41af70*/
             (MapClass *)&stru_87F5F0.__pad_58[416],
             &v17,
             v10,
             this->?,
             0,
             0,
             1,
             v16 < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1972) / 2,
             1);
  }
  return result; /*0x41ae9b*/
}



// ==== 0x0041AF80  ObjectClass::SaveAircraftToINI  this=ObjectClass  sig=csp ====
int __thiscall SaveAircraftToINI(char *this)
{
  int result; // eax
  int v2; // esi
  int v3; // eax
  _DWORD *Value; // eax
  int v5; // edi
  const char *v6; // ebx
  const char *v7; // ebp
  int v8; // eax
  int v9; // eax
  char *v10; // eax
  int v11; // eax
  double HealthRatio; // st7
  int v13; // eax
  int v14; // [esp-2Ch] [ebp-D8h]
  int v15; // [esp-28h] [ebp-D4h]
  int v16; // [esp-24h] [ebp-D0h]
  const char *v17; // [esp-20h] [ebp-CCh]
  const char *v18; // [esp-1Ch] [ebp-C8h]
  int v19; // [esp-18h] [ebp-C4h]
  int v20; // [esp-14h] [ebp-C0h]
  int v21; // [esp-10h] [ebp-BCh]
  int v22; // [esp-Ch] [ebp-B8h]
  int i; // [esp+8h] [ebp-A4h]
  char *v24; // [esp+Ch] [ebp-A0h]
  int v26; // [esp+14h] [ebp-98h] BYREF
  _BYTE v27[4]; // [esp+1Ch] [ebp-90h] BYREF
  char Buffer[4]; // [esp+20h] [ebp-8Ch] BYREF
  _BYTE v29[8]; // [esp+24h] [ebp-88h] BYREF
  char Source[128]; // [esp+2Ch] [ebp-80h] BYREF

  INIClass::ClearSection((int)this, (int)aAircraft, 0); /*0x41af92*/
  result = 0; /*0x41af9d*/
  for ( i = 0; result < dword_A8E3A0; i = result ) /*0x41afa5*/
  {
    v2 = *((_DWORD *)dword_A8E394 + result); /*0x41afb5*/
    if ( v2 && !*(_BYTE *)(v2 + 129) && *(_BYTE *)(v2 + 144) ) /*0x41afce*/
    {
      sprintf(Buffer, "%d", result); /*0x41afe7*/
      v3 = *(_DWORD *)(v2 + 52); /*0x41afec*/
      if ( v3 ) /*0x41aff4*/
        v24 = (char *)(*(_DWORD *)(v3 + 36) + 36); /*0x41affc*/
      else
        v24 = g_INI_Key_None; /*0x41b002*/
      Value = ProgressTimer::GetValue((_WORD *)(v2 + 904), &v26); /*0x41b015*/
      v22 = *(unsigned __int8 *)(v2 + 1058); /*0x41b042*/
      v5 = (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1); /*0x41b04d*/
      v6 = (const char *)(*(_DWORD *)(v2 + 1732) + 36); /*0x41b053*/
      v7 = (const char *)(*(_DWORD *)(v2 + 540) + 90100); /*0x41b056*/
      v8 = FootClass::GetField(v2 + 336, *(_DWORD *)(v2 + 532), *(unsigned __int8 *)(v2 + 1057)); /*0x41b05c*/
      v9 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)v2 + 388))(v2, v24, v8); /*0x41b06b*/
      v10 = FromNameIndex(v9); /*0x41b073*/
      v11 = (*(int (__thiscall **)(int, _BYTE *, int, char *))(*(_DWORD *)v2 + 440))(v2, v29, v5, v10); /*0x41b083*/
      v14 = *(__int16 *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v2 + 440))( /*0x41b0a0*/
                          v2,
                          v27,
                          *(__int16 *)(v11 + 2));
      HealthRatio = BuildingClass::GetHealthRatio((int *)v2); /*0x41b0a3*/
      v13 = Math::RoundToInt(HealthRatio * 256.0); /*0x41b0ae*/
      sprintf(Source, "%s,%s,%d,%d,%d,%d,%s,%s,%d,%d,%d,%d", v7, v6, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22); /*0x41b0c0*/
      INIClass::SetString(this, (unsigned __int8 *)aAircraft, Buffer, Source); /*0x41b0dc*/
      result = i; /*0x41b0e1*/
    }
    ++result; /*0x41b0eb*/
  }
  return result; /*0x41b0fc*/
}



// ==== 0x0041B110  ObjectClass::PlaceAircraftFromINI  this=ObjectClass  sig=csp ====
int __usercall PlaceAircraftFromINI@<eax>(INIClass *a1@<ecx>, int a2@<edi>)
{
  int result; // eax
  int v4; // ecx
  unsigned __int8 *StringByIndex; // eax
  char *v6; // eax
  int v7; // esi
  TypeClass *v8; // eax
  int v9; // edi
  IUnknown *v10; // esi
  int v11; // eax
  int v12; // esi
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  int v16; // eax
  char *v17; // eax
  int v18; // eax
  char *v19; // eax
  int v20; // edi
  char *v21; // eax
  int v22; // ebx
  char *v23; // eax
  TeamClass *v24; // eax
  int v25; // eax
  char *v26; // eax
  int v27; // eax
  char *v28; // eax
  char *v29; // eax
  char *v30; // eax
  int v31; // edi
  int v32; // eax
  int v33; // edi
  int v34; // eax
  int i; // [esp+Ch] [ebp-A4h]
  int v37; // [esp+14h] [ebp-9Ch]
  int v38; // [esp+18h] [ebp-98h]
  int v39; // [esp+20h] [ebp-90h]
  _DWORD v40[3]; // [esp+24h] [ebp-8Ch] BYREF
  char String[128]; // [esp+30h] [ebp-80h] BYREF

  INIClass::ResetSection(a1); /*0x41b119*/
  result = INIClass::GetKeyCount(a1->__pad_0, aAircraft); /*0x41b126*/
  v4 = 0; /*0x41b12b*/
  v39 = result; /*0x41b12f*/
  for ( i = 0; i < v39; ++i ) /*0x41b137*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1->__pad_0, aAircraft, v4); /*0x41b14a*/
    INIClass::GetString(a1, aAircraft, StringByIndex, 0, String, 128); /*0x41b164*/
    v6 = strtok(String, Str); /*0x41b173*/
    v7 = HouseClass::FindByName(v6); /*0x41b182*/
    if ( v7 != -1 ) /*0x41b187*/
    {
      v8 = (TypeClass *)strtok(0, Str); /*0x41b194*/
      v9 = TypeClass::FindByName(v8); /*0x41b1a3*/
      if ( v9 != -1 ) /*0x41b1a8*/
      {
        v10 = (IUnknown *)*((_DWORD *)stru_A80220.? + v7); /*0x41b1b9*/
        v11 = __2_YAPAXI_Z(0x6D8u); /*0x41b1bc*/
        if ( v11 ) /*0x41b1c6*/
        {
          v12 = AircraftClass::Construct(v11, v9, *((_DWORD *)dword_A8B21C + v9), v10); /*0x41b1de*/
          if ( v12 ) /*0x41b1e2*/
          {
            v13 = strtok(0, Str); /*0x41b1ef*/
            atoi(v13); /*0x41b1f5*/
            if ( *(int *)&stru_A8EB00.?[408] < 4 ) /*0x41b210*/
            {
              v17 = strtok(0, Str); /*0x41b242*/
              v18 = atoi(v17); /*0x41b248*/
              LOWORD(v37) = v18 % 128; /*0x41b263*/
              HIWORD(v37) = v18 / 128; /*0x41b26d*/
              v16 = v37; /*0x41b272*/
            }
            else
            {
              v14 = strtok(0, Str); /*0x41b212*/
              LOWORD(v38) = atoi(v14); /*0x41b224*/
              v15 = strtok(0, Str); /*0x41b229*/
              HIWORD(v38) = atoi(v15); /*0x41b234*/
              v16 = v38; /*0x41b239*/
            }
            v40[0] = ((__int16)v16 << 8) + 128; /*0x41b29b*/
            v40[1] = (SHIWORD(v16) << 8) + 128; /*0x41b29f*/
            v40[2] = 0; /*0x41b2a3*/
            v19 = strtok(0, Str); /*0x41b2a7*/
            v20 = atoi(v19); /*0x41b2b9*/
            v21 = strtok(0, Str); /*0x41b2bb*/
            v22 = LookupWaypointName((ObjectClass *)v21); /*0x41b2ca*/
            v23 = strtok(0, Str); /*0x41b2d3*/
            v24 = (TeamClass *)ObjectTypeClass::FindByName((ObjectTypeClass *)v23); /*0x41b2dd*/
            if ( v24 ) /*0x41b2e4*/
            {
              v25 = TeamClass::FindOrCreate(v24); /*0x41b2e8*/
              if ( v25 ) /*0x41b2ef*/
                ObjectClass::SetReference((ObjectClass *)v12, v25); /*0x41b2f4*/
            }
            v26 = strtok(0, Str); /*0x41b300*/
            if ( v26 ) /*0x41b30a*/
            {
              v27 = atoi(v26); /*0x41b30d*/
              FootClass::SetField((int *)(v12 + 336), v27); /*0x41b31c*/
            }
            v28 = strtok(0, Str); /*0x41b328*/
            if ( v28 ) /*0x41b332*/
              *(_DWORD *)(v12 + 532) = atoi(v28); /*0x41b33d*/
            v29 = strtok(0, Str); /*0x41b34a*/
            if ( v29 ) /*0x41b354*/
              *(_BYTE *)(v12 + 1057) = atoi(v29) != 0; /*0x41b364*/
            v30 = strtok(0, Str); /*0x41b371*/
            if ( v30 ) /*0x41b37b*/
              *(_BYTE *)(v12 + 1058) = atoi(v30) != 0; /*0x41b38b*/
            if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)v12 + 216))(v12, v40, v20, a2) ) /*0x41b39b*/
            {
              v31 = *(_DWORD *)(v12 + 1732); /*0x41b3a9*/
              LOWORD(v32) = Math::RoundToInt((double)v39 * (double)*(int *)(v31 + 160) * 0.00390625); /*0x41b3bb*/
              *(_DWORD *)(v12 + 108) = v32; /*0x41b3c0*/
              v33 = *(_DWORD *)(v31 + 160); /*0x41b3c3*/
              if ( v32 > v33 - 3 ) /*0x41b3ce*/
                *(_DWORD *)(v12 + 108) = v33; /*0x41b3d0*/
              if ( !*(_DWORD *)(v12 + 108) ) /*0x41b3d3*/
                *(_DWORD *)(v12 + 108) = 1; /*0x41b3da*/
              v34 = *(_DWORD *)v12; /*0x41b3e4*/
              a2 = 0; /*0x41b3e6*/
              *(_DWORD *)(v12 + 112) = *(_DWORD *)(v12 + 108); /*0x41b3eb*/
              (*(void (__thiscall **)(int, int))(v34 + 488))(v12, v22); /*0x41b3ee*/
              (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 492))(v12); /*0x41b3f8*/
            }
            else
            {
              a2 = 1; /*0x41b402*/
              (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 32))(v12); /*0x41b406*/
            }
          }
        }
      }
    }
    result = v39; /*0x41b40d*/
    v4 = i + 1; /*0x41b411*/
  }
  return result; /*0x41b421*/
}



// ==== 0x0041B430  AircraftClass::LoadFromStream  this=AircraftClass  sig=csp ====
int __stdcall AircraftClass::LoadFromStream(AircraftClass *this, LPSTREAM pStm)
{
  AircraftClass *v2; // esi
  void **p_vtable1; // ebx
  int v4; // eax
  signed int v5; // eax
  int v6; // ecx
  char *i; // eax
  _DWORD *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // edi
  int ptr_8; // eax

  v2 = this; /*0x41b432*/
  p_vtable1 = &this->?; /*0x41b43a*/
  this = (AircraftClass *)(*((int (__stdcall **)(void **))this->? + 4))(&this->?); /*0x41b44b*/
  v4 = BuildingTypeClass::Dequeue(&g_BuildingLoadQueue_Array, (int *)&this); /*0x41b44f*/
  if ( v4 ) /*0x41b456*/
  {
    v5 = (signed int)(v4 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x41b45e*/
    if ( v5 != -1 ) /*0x41b464*/
    {
      v6 = v5 + 1; /*0x41b466*/
      for ( i = (char *)g_BuildingLoadQueue_Array.?; /*0x41b470*/
            v6 < (int)g_BuildingLoadQueue_Array.?;
            i = (char *)g_BuildingLoadQueue_Array.? )
      {
        v8 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v6++; /*0x41b478*/
        *(v8 - 2) = *v8; /*0x41b47e*/
        *(v8 - 1) = v8[1]; /*0x41b484*/
      }
      g_BuildingLoadQueue_Array.? = i - 1; /*0x41b499*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x41b49e*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x41b4ae*/
      g_BuildingLoadQueue_Array.? = 0; /*0x41b4b2*/
    }
  }
  result = ObjectClass::LoadFromStream_Common((int)v2, pStm); /*0x41b4be*/
  if ( result >= 0 ) /*0x41b4c5*/
  {
    v10 = v2->?[0]; /*0x41b4cb*/
    if ( v2 ) /*0x41b4d3*/
    {
      FootClass::PostLoadInit((FootClass *)v2, (int)&this); /*0x41b4dc*/
      v2->FootClass = &AircraftClass::`vftable'; /*0x41b4e1*/
      *p_vtable1 = &AircraftClass::`vftable'; /*0x41b4e7*/
      v2->? = &AircraftClass::`vftable'; /*0x41b4ed*/
      v2->? = &AircraftClass::`vftable'; /*0x41b4f4*/
      *(_DWORD *)v2->__pad_6C0 = &AircraftClass::`vftable'; /*0x41b4fb*/
    }
    v11 = v2->?[0]; /*0x41b506*/
    if ( v11 != v10 ) /*0x41b50e*/
    {
      v2->?[0] = v10; /*0x41b512*/
      if ( v10 ) /*0x41b518*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x41b51d*/
      if ( v11 ) /*0x41b522*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x41b528*/
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x41b52e*/
    v12 = (*((int (__stdcall **)(void **))*p_vtable1 + 4))(p_vtable1); /*0x41b53d*/
    ptr_8 = (int)g_BuildingLoadQueue_Array.?; /*0x41b53f*/
    if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x41b548*/
      goto LABEL_18; /*0x41b548*/
    if ( !g_BuildingLoadQueue_Array.? ) /*0x41b54c*/
      ptr_8 = 10; /*0x41b54e*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, ptr_8) ) /*0x41b559*/
    {
LABEL_18:
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = v12; /*0x41b56d*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = v2; /*0x41b57b*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x41b585*/
      ++g_BuildingLoadQueue_Array.?; /*0x41b58c*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->Type); /*0x41b59d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->AircraftClass_field_6CC); /*0x41b5ae*/
    return 0; /*0x41b5b3*/
  }
  return result; /*0x41b5b5*/
}



// ==== 0x0041B5C0  AircraftClass::CheckPassengerCount  this=AircraftClass  sig=csp ====
int __stdcall AircraftClass::CheckPassengerCount(
        AircraftClass *this,
        LPPERSISTSTREAM pPStm,
        struct IPersistStreamVtbl *a3)
{
  return ObjectClass::SaveToStream_Common((ObjectClass *)this, pPStm, a3); /*0x41b5d4*/
}



// ==== 0x0041B5E0  AircraftClass::g_var_1fa6c5  this=AircraftClass  sig=csp ====
bool __thiscall MissionClass::g_var_1fa6c5(AircraftClass *this)
{
  int currentMission; // eax

  currentMission = this->?; /*0x41b5e0*/
  return currentMission != 6 /*0x41b60a*/
      && currentMission != 21
      && (!this->AircraftClass_field_bool_6D2 || currentMission == 30)
      && this->AircraftClass_field_bool_6D4 != 0;
}



// ==== 0x0041B610  AircraftClass::PowerDrainUpdate  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::PowerDrainUpdate(AircraftClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx

  v3 = FootClass::BeginPowerUpdate((FootClass *)this, a2); /*0x41b619*/
  LOBYTE(v3) = this->HasPassengers; /*0x41b61e*/
  Power::FlagProcess((Power *)a2, v3); /*0x41b627*/
  LOBYTE(v4) = this->AircraftClass_field_bool_6D0; /*0x41b62c*/
  Power::FlagProcess((Power *)a2, v4); /*0x41b635*/
  LOBYTE(v5) = this->AircraftClass_field_bool_6D1; /*0x41b63a*/
  Power::FlagProcess((Power *)a2, v5); /*0x41b643*/
  return Power::TimerProcess(this->AircraftClass_field_char_6D3); /*0x41b657*/
}



// ==== 0x0041B660  AircraftClass::HandleTargetDestroyed  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::HandleTargetDestroyed(AircraftClass *this, int *a2, int *a3)
{
  int result; // eax

  FootClass::HandleTargetDestroyed((FootClass *)this, a2, a3); /*0x41b66e*/
  result = 0; /*0x41b679*/
  if ( (int *)this->AircraftClass_field_6CC == a2 ) /*0x41b67d*/
    this->AircraftClass_field_6CC = 0; /*0x41b67f*/
  if ( (int *)this->Type == a2 ) /*0x41b68b*/
    this->Type = 0; /*0x41b68d*/
  return result; /*0x41b693*/
}



// ==== 0x0041B6A0  TechnoClass::ComputeTeamAttackPriority  this=TechnoClass  sig=csp ====
int __stdcall TechnoClass::ComputeTeamAttackPriority(TechnoClass *this)
{
  _DWORD *v1; // edi
  int v2; // edi

  if ( *((_BYTE *)this->? + 3580) ) /*0x41b6aa*/
  {
    if ( !*((_DWORD *)this - 362) ) /*0x41b6b4*/
    {
      if ( (unsigned __int8)Team::AllMembersValid((Team *)((char *)this - 1728)) ) /*0x41b6c6*/
      {
        v1 = (_DWORD *)Array::Get((Array *)((char *)this - 1728), 0); /*0x41b6dc*/
        if ( (*(int (__thiscall **)(char *))(*((_DWORD *)this - 432) + 388))((char *)this - 1728) == 7 ) /*0x41b6e7*/
        {
          if ( v1 ) /*0x41b6eb*/
          {
            if ( (*(int (__thiscall **)(_DWORD *))(*v1 + 44))(v1) == 6 ) /*0x41b6f7*/
            {
              v2 = v1[328]; /*0x41b6f9*/
              if ( *(_BYTE *)(v2 + 5801) || *(_BYTE *)(v2 + 5835) ) /*0x41b709*/
                return 0; /*0x41b709*/
            }
          }
        }
      }
    }
  }
  if ( (!(unsigned __int8)Team::AllMembersValid((Team *)((char *)this - 1728)) || !*((_BYTE *)this->? + 3580)) /*0x41b73c*/
    && (!*((_DWORD *)this - 362) || !*((_BYTE *)this->? + 3580)) )
  {
    return 0; /*0x41b753*/
  }
  else
  {
    return 100; /*0x41b748*/
  }
}



// ==== 0x0041B760  TechnoClass::GetAutoFireDirection  this=TechnoClass  sig=csp ====
int __stdcall TechnoClass::GetAutoFireDirection(TechnoClass *this)
{
  TechnoClass *v1; // edi
  Array *v2; // esi
  int v3; // eax
  _DWORD *Value; // eax

  v1 = this; /*0x41b762*/
  v2 = (Array *)((char *)this - 1728); /*0x41b766*/
  if ( (unsigned __int8)Team::AllMembersValid((Team *)((char *)this - 1728)) ) /*0x41b76e*/
  {
    v3 = Array::Get(v2, 0); /*0x41b77b*/
    Value = ProgressTimer::GetValue((ProgressTimer *)(v3 + 904), &this); /*0x41b78b*/
    return ((unsigned int)((*Value >> 12) + 1) >> 1) & 7; /*0x41b7b4*/
  }
  if ( v1[-2].turretRotateSoundController[4] ) /*0x41b78d*/
  {
    Value = ProgressTimer::GetValue((ProgressTimer *)&v1[-1].reloadTimer[1], &this); /*0x41b7a2*/
    return ((unsigned int)((*Value >> 12) + 1) >> 1) & 7; /*0x41b7a2*/
  }
  return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 68); /*0x41b7a9*/
}



// ==== 0x0041B7D0  TechnoClass::processDamageAnimation  this=TechnoClass  sig=csp ====
BOOL __stdcall TechnoClass::processDamageAnimation(TechnoClass *this)
{
  return *((_DWORD *)this - 362) != 0; /*0x41b7e4*/
}



// ==== 0x0041B7F0  TechnoClass::HasOnlyOneGarrisonSlot  this=TechnoClass  sig=csp ====
_DWORD *__stdcall TechnoClass::HasOnlyOneGarrisonSlot(TechnoClass *this)
{
  _DWORD *result; // eax
  int v2; // eax

  result = (_DWORD *)(*(int (__thiscall **)(char *, _DWORD))(*((_DWORD *)this - 432) + 1016))((char *)this - 1728, 0); /*0x41b802*/
  if ( result ) /*0x41b80a*/
  {
    result = (_DWORD *)*result; /*0x41b80f*/
    if ( result ) /*0x41b813*/
    {
      v2 = result[40]; /*0x41b818*/
      return (_DWORD *)(*(int *)(v2 + 732) <= 1 && *(_BYTE *)(v2 + 670) == 0); /*0x41b839*/
    }
  }
  return result; /*0x41b80c*/
}



// ==== 0x0041B840  TechnoClass::updateWeaponCooldown  this=TechnoClass  sig=csp ====
BOOL __stdcall TechnoClass::updateWeaponCooldown(TechnoClass *this)
{
  return *((_BYTE *)this->? + 3598) != 0; /*0x41b854*/
}



// ==== 0x0041B860  TechnoClass::checkAmmo  this=AircraftClass  sig=csp ====
int __stdcall TechnoClass::sub_41B860(int a1)
{
  return *(unsigned __int8 *)(a1 + 18); /*0x41b869*/
}



// ==== 0x0041B870  AircraftClass::ProcessPassengerEjection  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::ProcessPassengerEjection(AircraftClass *this)
{
  if ( this->? != 30 ) /*0x41b877*/
    this->AircraftClass_field_bool_6D2 = 0; /*0x41b879*/
  return MissionClass::AdvanceState((MissionClass *)this);
}



// ==== 0x0041B900  TacticalClass::StubReturnTrue  this=TacticalClass  sig=csp ====
void __thiscall TacticalClass::StubReturnTrue(Class_7E22A4 *this)
{
  ; /*0x41b900*/
}



// ==== 0x0041B910  AircraftClass::MissionStubReturnZero  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::MissionStubReturnZero(AircraftClass *this)
{
  return (*((int (__thiscall **)(AircraftClass *))this->FootClass + 20))(this);
}



// ==== 0x0041B920  AircraftClass::IsHeightAboveThreshold  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::IsHeightAboveThreshold(AircraftClass *this)
{
  AircraftTypeClass *Type; // eax

  Type = this->Type; /*0x41b929*/
  if ( Type != *(AircraftTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1248) /*0x41b93d*/
    && Type != *(AircraftTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1300) )
  {
    return ObjectClass::IsHeightAboveThreshold_0((ObjectClass *)this); /*0x41b941*/
  }
  if ( !this->?[0] ) /*0x41b948*/
    WinAPI::Wrapper(-2147467261); /*0x41b957*/
  return (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 128))(this->?[0]) != 0; /*0x41b946*/
}



// ==== 0x0041B980  AircraftClass::IsBelowScreen  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::IsBelowScreen(AircraftClass *this)
{
  AircraftTypeClass *Type; // eax

  Type = this->Type; /*0x41b989*/
  if ( Type != *(AircraftTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1248) /*0x41b99d*/
    && Type != *(AircraftTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1300) )
  {
    return ObjectClass::IsBelowScreen((IUnknown *)this); /*0x41b9a1*/
  }
  if ( !this->?[0] ) /*0x41b9a8*/
    WinAPI::Wrapper(-2147467261); /*0x41b9b7*/
  return (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 128))(this->?[0]) == 0; /*0x41b9a6*/
}



// ==== 0x0041B9E0  TechnoClass::updateROFTimer  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::updateROFTimer(TechnoClass *this)
{
  return *((_BYTE *)this + 1749); /*0x41b9e6*/
}



// ==== 0x0041B9F0  AircraftClass::UpdateDocking  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::UpdateDocking(AircraftClass *this, int a2)
{
  int result; // eax

  switch ( this->? ) /*0x41ba0b*/
  {
    case 4: /*0x41ba0b*/
    case 0x1A: /*0x41ba0b*/
    case 0x1B: /*0x41ba0b*/
    case 0x1E: /*0x41ba0b*/
    case 0x1F: /*0x41ba0b*/
      if ( this->? ) /*0x41ba12*/
        goto LABEL_4; /*0x41ba1a*/
      result = a2 - 4; /*0x41ba1c*/
      switch ( a2 ) /*0x41ba2c*/
      {
        case 4: /*0x41ba2c*/
        case 26: /*0x41ba2c*/
        case 27: /*0x41ba2c*/
        case 30: /*0x41ba2c*/
        case 31: /*0x41ba2c*/
          goto LABEL_4;
        default:
          return result;
      }
    default:
LABEL_4:
      result = MissionClass::SetState((MissionClass *)this); /*0x41ba33*/
      break; /*0x41ba34*/
  }
  return result; /*0x41ba39*/
}



// ==== 0x0041BA90  AircraftClass::ProcessLanding  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::ProcessLanding(AircraftClass *this, int a2, int a3)
{
  int result; // eax

  switch ( this->? ) /*0x41baab*/
  {
    case 4: /*0x41baab*/
    case 0x1A: /*0x41baab*/
    case 0x1B: /*0x41baab*/
    case 0x1E: /*0x41baab*/
    case 0x1F: /*0x41baab*/
      if ( this->? ) /*0x41bab2*/
        goto LABEL_4; /*0x41baba*/
      result = a2 - 4; /*0x41babc*/
      switch ( a2 ) /*0x41bacc*/
      {
        case 4: /*0x41bacc*/
        case 26: /*0x41bacc*/
        case 27: /*0x41bacc*/
        case 30: /*0x41bacc*/
        case 31: /*0x41bacc*/
          goto LABEL_4;
        default:
          return result;
      }
    default:
LABEL_4:
      result = ParticleClass::MissionDispatch((MissionClass *)this); /*0x41bad3*/
      break; /*0x41bad9*/
  }
  return result; /*0x41bade*/
}



// ==== 0x0041BB30  AircraftClass::OverrideMission_SyncLog  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::OverrideMission_SyncLog(AircraftClass *this, int a2, int a3, int a4)
{
  int result; // eax

  switch ( this->? ) /*0x41bb4b*/
  {
    case 4: /*0x41bb4b*/
    case 0x1A: /*0x41bb4b*/
    case 0x1B: /*0x41bb4b*/
    case 0x1E: /*0x41bb4b*/
    case 0x1F: /*0x41bb4b*/
      if ( this->? ) /*0x41bb52*/
        goto LABEL_4; /*0x41bb5a*/
      result = a2 - 4; /*0x41bb5c*/
      switch ( a2 ) /*0x41bb6c*/
      {
        case 4: /*0x41bb6c*/
        case 26: /*0x41bb6c*/
        case 27: /*0x41bb6c*/
        case 30: /*0x41bb6c*/
        case 31: /*0x41bb6c*/
          goto LABEL_4;
        default:
          return result;
      }
    default:
LABEL_4:
      result = FootClass::OverrideMission_SyncLog((FootClass *)this, a2, a3, a4); /*0x41bb73*/
      break; /*0x41bb7e*/
  }
  return result; /*0x41bb83*/
}



// ==== 0x0041BC30  TechnoClass::CreateWarheadDamageEffect  this=TechnoClass  sig=csp ====
char __userpurge TechnoClass::CreateWarheadDamageEffect@<al>(TechnoClass *this, int a2@<ebp>, int a3, int a4)
{
  int v4; // ecx
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ebp
  int v9; // esi
  int v10; // ebx
  char *UIObjectCOM; // edi
  int *v12; // eax
  int v13; // edx
  int v14; // eax
  int *v15; // eax
  int v16; // eax
  char *v17; // edi
  int v20; // [esp+8h] [ebp-20h]
  int v21; // [esp+Ch] [ebp-1Ch]
  int v22; // [esp+10h] [ebp-18h] BYREF
  int v23; // [esp+14h] [ebp-14h] BYREF
  int v24; // [esp+18h] [ebp-10h]
  int v25; // [esp+1Ch] [ebp-Ch] BYREF
  _BYTE v26[8]; // [esp+20h] [ebp-8h] BYREF

  v5 = v4; /*0x41bc34*/
  v21 = v4; /*0x41bc36*/
  if ( !*(_BYTE *)(v4 + 1701) ) /*0x41bc3a*/
    return 0; /*0x41bdc3*/
  v6 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x41bc49*/
  if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3944) ) /*0x41bc4f*/
    v20 = *(_DWORD *)(v4 + 100); /*0x41bc5c*/
  else
    v20 = *(_DWORD *)(*(_DWORD *)(v4 + 1724) + 160); /*0x41bc6e*/
  LOWORD(v7) = Math::RoundToInt((double)v20 * *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3940)); /*0x41bc7e*/
  v8 = v7; /*0x41bc83*/
  if ( v7 < 0 ) /*0x41bc87*/
    v8 = 0; /*0x41bc89*/
  v9 = v5 - 8; /*0x41bc8f*/
  v10 = v9; /*0x41bc92*/
  if ( *(_DWORD *)(v21 + 1056) ) /*0x41bc94*/
    v10 = *(_DWORD *)(v21 + 1056); /*0x41bc9e*/
  UIObjectCOM = (char *)CreateUIObjectCOM( /*0x41bcc2*/
                          *(_DWORD *)(*(_DWORD *)(v6 + 4060) + 160),
                          v9,
                          v10,
                          v8,
                          *(_DWORD *)(v6 + 4008),
                          0,
                          1);
  v12 = (int *)(*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v9 + 72))(v9, &v25, a2); /*0x41bccb*/
  v23 = *v12; /*0x41bcd0*/
  v24 = v12[1]; /*0x41bcd9*/
  v13 = *(_DWORD *)v9; /*0x41bcdd*/
  v25 = v12[2]; /*0x41bce2*/
  v14 = (*(int (__thiscall **)(int))(v13 + 456))(v9); /*0x41bce6*/
  v25 -= v14; /*0x41bcf4*/
  if ( UIObjectCOM ) /*0x41bcf8*/
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)UIObjectCOM + 212))(UIObjectCOM); /*0x41bcfe*/
    Warhead::ApplyDamage(UIObjectCOM, &v23); /*0x41bd0b*/
    (*(void (__stdcall **)(char *))(*(_DWORD *)UIObjectCOM + 8))(UIObjectCOM); /*0x41bd13*/
  }
  if ( *(_DWORD *)(v22 + 1056) ) /*0x41bd1a*/
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 224))(v9, *(_DWORD *)(v22 + 1056)); /*0x41bd29*/
  }
  else if ( *(_DWORD *)(v22 + 1060) ) /*0x41bd31*/
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 228))(v9, *(_DWORD *)(v22 + 1060)); /*0x41bd40*/
  }
  v15 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 72))(v9, v26); /*0x41bd4f*/
  v22 = *v15; /*0x41bd56*/
  v23 = v15[1]; /*0x41bd5f*/
  v24 = v15[2]; /*0x41bd6b*/
  v16 = CreateUIObjectCOM( /*0x41bd86*/
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4060) + 160),
          v9,
          v10,
          v8,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          1);
  v17 = (char *)v16; /*0x41bd8b*/
  if ( v16 ) /*0x41bd91*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 212))(v16); /*0x41bd97*/
    Warhead::ApplyDamage(v17, &v22); /*0x41bda4*/
    (*(void (__stdcall **)(char *))(*(_DWORD *)v17 + 8))(v17); /*0x41bdac*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 248))(v9); /*0x41bdb3*/
  return 1; /*0x41bdbc*/
}



// ==== 0x0041BDD0  IUnknown::GetCoordsThunk1  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCoordsThunk1(IUnknown *this)
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(this->field_0 + 72))(this, v3); /*0x41bdde*/
  *v4 = *v1; /*0x41bde8*/
  v4[1] = v1[1]; /*0x41bded*/
  v4[2] = v1[2]; /*0x41bdf4*/
  return (int)v4; /*0x41bdf0*/
}



// ==== 0x0041BE00  IUnknown::GetCoordsThunk2  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCoordsThunk2(IUnknown *this)
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(this->field_0 + 72))(this, v3); /*0x41be0e*/
  *v4 = *v1; /*0x41be18*/
  v4[1] = v1[1]; /*0x41be1d*/
  v4[2] = v1[2]; /*0x41be24*/
  return (int)v4; /*0x41be20*/
}



// ==== 0x0041BE30  IUnknown::GetCoordsThunk3  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCoordsThunk3(IUnknown *this)
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(this->field_0 + 72))(this, v3); /*0x41be3e*/
  *v4 = *v1; /*0x41be48*/
  v4[1] = v1[1]; /*0x41be4d*/
  v4[2] = v1[2]; /*0x41be54*/
  return (int)v4; /*0x41be50*/
}



// ==== 0x0041BE60  IUnknown::LandingCheckStub  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::LandingCheckStub(IUnknown *this)
{
  return 0; /*0x41be62*/
}



// ==== 0x0041BE70  IUnknown::StubReturnFalse2  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::StubReturnFalse2(IUnknown *this)
{
  return 0; /*0x41be72*/
}



// ==== 0x0041BE80  IUnknown::CheckStateFlag  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::CheckStateFlag(IUnknown *this)
{
  int result; // eax

  return result; /*0x41be80*/
}



// ==== 0x0041BE90  IUnknown::CheckStateFlag2  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::CheckStateFlag2(IUnknown *this)
{
  int result; // eax

  return result; /*0x41be90*/
}



// ==== 0x0041BEA0  IUnknown::GetCellCoords_Alt  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCellCoords_Alt(IUnknown *this)
{
  int v2; // [esp+0h] [ebp-4h]
  _DWORD *v3; // [esp+8h] [ebp+4h]

  LOWORD(v2) = this->field_9C / 256; /*0x41beb3*/
  HIWORD(v2) = *(_DWORD *)this->__pad_A0 / 256; /*0x41beca*/
  *v3 = v2; /*0x41bed7*/
  return (int)v3; /*0x41beda*/
}



// ==== 0x0041BEE0  TechnoClass::StubReturnFalse  this=TechnoClass  sig=csp ====
char TacticalClass::StubReturnFalse(TechnoClass *this)
{
  return 0; /*0x41bee2*/
}



// ==== 0x0041BEF0  TechnoClass::selectTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::selectTarget(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x41bef0*/
  return result; /*0x41bef2*/
}



// ==== 0x0041BF00  TechnoClass::StubReturnFalse2  this=TechnoClass  sig=csp ====
int TacticalClass::StubReturnFalse2(TechnoClass *this)
{
  return 0; /*0x41bf02*/
}



// ==== 0x0041BF10  TechnoClass::StubReturnFalse3  this=TechnoClass  sig=csp ====
int TacticalClass::StubReturnFalse3(TechnoClass *this)
{
  return 0; /*0x41bf12*/
}



// ==== 0x0041BF20  TechnoClass::StubReturnFalse4  this=TechnoClass  sig=csp ====
int TacticalClass::StubReturnFalse4(TechnoClass *this)
{
  return 0; /*0x41bf22*/
}



// ==== 0x0041BF30  TechnoClass::g_var_a00e37  this=TechnoClass  sig=csp ====
int __thiscall MissionClass::g_var_a00e37(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x41bf30*/
  return result; /*0x41bf32*/
}



// ==== 0x0041BF40  TechnoClass::HasRemaining  this=TechnoClass  sig=csp ====
int __thiscall FrameTimer::HasRemaining(TechnoClass *this)
{
  int v1; // edx
  int result; // eax

  v1 = *(_DWORD *)this->__pad_18C; /*0x41bf40*/
  result = this->ironCurtainTimer[1]; /*0x41bf46*/
  if ( v1 != -1 ) /*0x41bf4f*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v1 < result ) /*0x41bf5b*/
    {
      result -= *(_DWORD *)&stru_A8EB00.?[416] - v1; /*0x41bf5d*/
      LOBYTE(result) = result > 0; /*0x41bf66*/
      return result; /*0x41bf68*/
    }
    result = 0; /*0x41bf69*/
  }
  LOBYTE(result) = result > 0; /*0x41bf72*/
  return result; /*0x41bf68*/
}



// ==== 0x0041BF80  TechnoClass::StubReturnFalse5  this=TechnoClass  sig=csp ====
int __thiscall TacticalClass::StubReturnFalse5(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x41bf80*/
  return result; /*0x41bf82*/
}



// ==== 0x0041BF90  TechnoClass::StubReturnFalse6  this=TechnoClass  sig=csp ====
int __thiscall TacticalClass::StubReturnFalse6(TechnoClass *this)
{
  int result; // eax

  return result; /*0x41bf90*/
}



// ==== 0x0041BFA0  TechnoClass::ProcessFrame  this=TechnoClass  sig=csp ====
char __thiscall TacticalClass::ProcessFrame(TechnoClass *this)
{
  return *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3233); /*0x41bfae*/
}



// ==== 0x0041BFB0  TechnoClass::StubReturnFalse7  this=TechnoClass  sig=csp ====
char TacticalClass::StubReturnFalse7(TechnoClass *this)
{
  return 0; /*0x41bfb2*/
}



// ==== 0x0041BFC0  TechnoClass::StubReturnFalse8  this=TechnoClass  sig=csp ====
int TacticalClass::StubReturnFalse8(TechnoClass *this)
{
  return 0; /*0x41bfc2*/
}



// ==== 0x0041BFD0  TechnoClass::StubReturnFalse9  this=TechnoClass  sig=csp ====
int TacticalClass::StubReturnFalse9(TechnoClass *this)
{
  return 0; /*0x41bfd2*/
}



// ==== 0x0041BFE0  TechnoClass::g_var_6a4733  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::g_var_6a4733(TechnoClass *this)
{
  int result; // eax

  return result; /*0x41bfe0*/
}



// ==== 0x0041BFF0  TechnoClass::g_var_845aa8  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::g_var_845aa8(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x41bff0*/
  return result; /*0x41bff2*/
}



// ==== 0x0041C000  TechnoClass::StubReturnTrue2  this=TechnoClass  sig=csp ====
void TacticalClass::StubReturnTrue2(TechnoClass *this)
{
  ; /*0x41c000*/
}



// ==== 0x0041C010  TechnoClass::CheckReloadState  this=TechnoClass  sig=csp ====
int __thiscall AircraftClass::CheckReloadState(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = this->isDisguisedFlag; /*0x41c010*/
  return result; /*0x41c016*/
}



// ==== 0x0041C020  TechnoClass::CheckReloadTimer  this=TechnoClass  sig=csp ====
int __thiscall AircraftClass::CheckReloadTimer(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = this->isDisguisedFlag; /*0x41c020*/
  return result; /*0x41c026*/
}



// ==== 0x0041C030  TechnoClass::CheckAction  this=TechnoClass  sig=csp ====
int __thiscall TacticalClass::CheckAction(TechnoClass *this)
{
  int result; // eax

  this->isDisguisedFlag = 0; /*0x41c030*/
  return result; /*0x41c037*/
}



// ==== 0x0041C040  TechnoClass::StubReturnFalse10  this=TechnoClass  sig=csp ====
int __thiscall TacticalClass::StubReturnFalse10(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x41c040*/
  return result; /*0x41c042*/
}



// ==== 0x0041C050  FootClass::ProcessTick  this=FootClass  sig=csp ====
BOOL __thiscall TacticalClass::ProcessTick(FootClass *this)
{
  return this->team != 0; /*0x41c05d*/
}



// ==== 0x0041C060  FootClass::g_var_3b7240  this=FootClass  sig=csp ====
char BuildingClass::g_var_3b7240(FootClass *this)
{
  return 0; /*0x41c062*/
}



// ==== 0x0041C070  FootClass::CheckDockState  this=FootClass  sig=csp ====
char __thiscall AircraftClass::CheckDockState(FootClass *this)
{
  return this->frozenStill; /*0x41c076*/
}



// ==== 0x0041C080  FootClass::g_var_d19fc3  this=FootClass  sig=csp ====
char FootClass::g_var_d19fc3(FootClass *this)
{
  return 0; /*0x41c082*/
}



// ==== 0x0041C090  FootClass::Destru_vt323  this=FootClass  sig=csp ====
int __stdcall FootClass::Destru_vt323(
        FootClass *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  return ((int (__stdcall *)(FootClass *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))loc_705E00)( /*0x41c0e5*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16);
}



// ==== 0x0041C0F0  FootClass::g_var_3c6d93  this=FootClass  sig=csp ====
void FootClass::g_var_3c6d93(FootClass *this)
{
  ; /*0x41c0f0*/
}



// ==== 0x0041C100  FootClass::StubReturnFalse  this=FootClass  sig=csp ====
void FootClass::StubReturnFalse(FootClass *this)
{
  ; /*0x41c100*/
}



// ==== 0x0041C110  FootClass::StubReturnVoid  this=FootClass  sig=csp ====
void FootClass::StubReturnVoid(FootClass *this)
{
  ; /*0x41c110*/
}



// ==== 0x0041C120  FootClass::Stub  this=FootClass  sig=csp ====
void __stdcall FootClass::Stub(FootClass *this)
{
  ; /*0x41c120*/
}



// ==== 0x0041C130  FootClass::g_var_a270fc  this=FootClass  sig=csp ====
void __stdcall FootClass::g_var_a270fc(FootClass *this, int a2)
{
  ; /*0x41c130*/
}



// ==== 0x0041C140  FootClass::g_var_122519  this=FootClass  sig=csp ====
void __stdcall FootClass::g_var_122519(FootClass *this)
{
  ; /*0x41c140*/
}



// ==== 0x0041C150  FootClass::ProcessTick2  this=FootClass  sig=csp ====
_DWORD *__thiscall TacticalClass::ProcessTick2(FootClass *this, _DWORD *a2)
{
  *a2 = this->lastJumpjetMapCoords[0]; /*0x41c15a*/
  return a2; /*0x41c15c*/
}



// ==== 0x0041C160  FootClass::ProcessTick3  this=FootClass  sig=csp ====
int __thiscall TacticalClass::ProcessTick3(FootClass *this, int a2)
{
  this->lastJumpjetMapCoords[0] = a2; /*0x41c164*/
  return a2; /*0x41c16a*/
}



// ==== 0x0041C170  AircraftClass::MissionStubReturnZero2  this=AircraftClass  sig=csp ====
int AircraftClass::MissionStubReturnZero2(AircraftClass *this)
{
  return 1752; /*0x41c175*/
}



// ==== 0x0041C180  AircraftClass::MissionStubReturnZero3  this=AircraftClass  sig=csp ====
int AircraftClass::MissionStubReturnZero3(AircraftClass *this)
{
  return 2; /*0x41c185*/
}



// ==== 0x0041C190  AircraftClass::PowerDrainProcess  this=AircraftClass  sig=csp ====
int __stdcall AircraftClass::PowerDrainProcess(AircraftClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x41c196*/
    return -2147467261; /*0x41c198*/
  *a2 = 237448642; /*0x41c1a6*/
  a2[1] = 298949647; /*0x41c1ae*/
  a2[2] = -1610610249; /*0x41c1b7*/
  a2[3] = unk_7E966C; /*0x41c1c0*/
  return 0; /*0x41c19d*/
}



// ==== 0x0041C1D0  AircraftClass::CheckMissionAbort  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::CheckMissionAbort(AircraftClass *this)
{
  return *(_DWORD *)&this->Type->TechnoTypeClass[96]; /*0x41c1d9*/
}



// ==== 0x0041C1E0  TechnoClass::GetBodyFacing  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::GetBodyFacing(TechnoClass *this, _DWORD *a2)
{
  int v2; // ecx
  TechnoClass *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x41c1e0*/
  v2 = *ProgressTimer::GetValue((ProgressTimer *)this->secondaryFacing, &v4); /*0x41c1f1*/
  *a2 = v2; /*0x41c1f7*/
  return a2; /*0x41c1fa*/
}



// ==== 0x0041C200  AircraftClass::CheckMissionFail  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::CheckMissionFail(AircraftClass *this)
{
  return (int)this->Type; /*0x41c206*/
}



// ==== 0x0041C210  AircraftClass::CheckActionStatus  this=AircraftClass  sig=csp ====
void **__thiscall AircraftClass::CheckActionStatus(AircraftClass *this, char a2)
{
  AircraftClass::Destruct(this); /*0x41c213*/
  if ( (a2 & 1) != 0 ) /*0x41c21d*/
    __3_YAXPAX_Z(this); /*0x41c220*/
  return &this->FootClass; /*0x41c22a*/
}



// ==== 0x0041C230  Coord::Subtract  this=Coord  sig=csp ====
_DWORD *__thiscall Coord::Subtract(Coord *this, int a2, int a3, int a4)
{
  *(_DWORD *)this->__pad_0 = a2; /*0x41c23a*/
  *(_DWORD *)&this->Coord_field_0x2[2] = a3; /*0x41c240*/
  this->Coord_field_0x8 = (void *)a4; /*0x41c243*/
  return this->__pad_0; /*0x41c246*/
}



// ==== 0x0041C250  ObjectClass::CreateInstanceCOM  this=ObjectClass  sig=csp ====
int __thiscall CreateInstanceCOM(ObjectClass *this, IID *rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext)
{
  int result; // eax
  HRESULT v6; // esi

  if ( this->AbstractClass ) /*0x41c254*/
    (*(void (__stdcall **)(void *))(*(_DWORD *)this->AbstractClass + 8))(this->AbstractClass); /*0x41c25d*/
  if ( (dwClsContext & 0x14) == 0 ) /*0x41c266*/
    return CoCreateInstance(rclsid, pUnkOuter, dwClsContext, &stru_817BB0, &this->AbstractClass); /*0x41c2cb*/
  result = CoCreateInstance(rclsid, pUnkOuter, dwClsContext, &riid, (LPVOID *)&pUnkOuter); /*0x41c27d*/
  if ( result >= 0 ) /*0x41c285*/
  {
    v6 = OleRun(pUnkOuter); /*0x41c292*/
    if ( v6 >= 0 ) /*0x41c296*/
      v6 = (*(int (__stdcall **)(LPUNKNOWN, IID *, ObjectClass *))pUnkOuter->field_0)(pUnkOuter, &stru_817BB0, this); /*0x41c2a7*/
    (*(void (__stdcall **)(LPUNKNOWN))(pUnkOuter->field_0 + 8))(pUnkOuter); /*0x41c2b0*/
    return v6; /*0x41c2b3*/
  }
  return result; /*0x41c2b5*/
}



// ==== 0x0041C2E0  Vector::ToFacingMath  this=Vector  sig=csp ====
int Vector::ToFacingMath(int *this, _WORD *a2)
{
  int v2; // ecx
  double v3; // st7
  double v6; // [esp+0h] [ebp-14h]
  double v7; // [esp+Ch] [ebp-8h]

  _ESI = v2; /*0x41c2e4*/
  __asm /*0x41c2e9*/
  {
    fld qword ptr [esi+8]
    fld qword ptr [esi]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+14h+var_14]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v6); /*0x41c2ff*/
  __asm { fstp [esp+14h+var_8] } /*0x41c307*/
  Math::CalcAngle(*(double *)(_ESI + 16), v7); /*0x41c31a*/
  __asm { fsub ds:dbl_7E2820 } /*0x41c31f*/
  __asm { fmul ds:dbl_7E2818 }
  *(_WORD *)this = Math::RoundToInt(v3); /*0x41c338*/
  return (int)this; /*0x41c337*/
}



// ==== 0x0041C350  Math::Hypotenuse2D  this=RecoilData  sig=csp ====
int __thiscall Math::Hypotenuse2D(int *this)
{
  return Math::Sqrt(*(double *)this * *(double *)this + *((double *)this + 1) * *((double *)this + 1)); /*0x41c36e*/
}



// ==== 0x0041C380  Coord::Length  this=Coord  sig=csp ====
__int64 __thiscall Coord::Length(Coord *this)
{
  double Coord_field_0x8; // st7
  __int64 result; // rax
  int v3; // kr00_4

  Coord_field_0x8 = (double)(int)this->Coord_field_0x8; /*0x41c380*/
  Math::Sqrt( /*0x41c3a4*/
    (double)*(int *)this->__pad_0 * (double)*(int *)this->__pad_0
  + (double)*(int *)&this->Coord_field_0x2[2] * (double)*(int *)&this->Coord_field_0x2[2]
  + Coord_field_0x8 * Coord_field_0x8);
  v3 = Math::RoundToInt(Coord_field_0x8); /*0x41c3ac*/
  WORD2(result) = HIWORD(v3); /*0x41c3ac*/
  LOWORD(result) = v3; /*0x41c3ac*/
  return result; /*0x41c3a9*/
}



// ==== 0x0041C3C0  Vector3::Magnitude  this=Vector3  sig=csp ====
int __thiscall Vector3::Magnitude(int *this)
{
  return Math::Sqrt( /*0x41c3e9*/
           *(double *)this * *(double *)this
         + *((double *)this + 1) * *((double *)this + 1)
         + *((double *)this + 2) * *((double *)this + 2));
}



// ==== 0x0041C3F0  BulletClass::NormalizeZeroVector  this=BulletClass  sig=csp ====
void __thiscall sub_41C3F0(double *this)
{
  if ( *this == 0.0 && this->ptr_8 == 0.0 && this->ptr_C == 0.0 ) /*0x41c41d*/
  {
    *(_DWORD *)this = 0; /*0x41c41f*/
    this->ptr_8 = 1079574528; /*0x41c425*/
  }
}



// ==== 0x0041C430  Function::41C430  this=RecoilData  sig=csp ====
void __thiscall Function::41C430(double *this)
{
  Math::Sqrt(*this * *this + this->u32_4 * this->u32_4); /*0x41c449*/
}



// ==== 0x0041C460  Vector2::NormalizeNonZero  this=RecoilData  sig=csp ====
int __thiscall Vector2::NormalizeNonZero(int *this)
{
  __int16 v1; // fps
  double v2; // st7
  bool v3; // c0
  char v4; // c2
  bool v5; // c3
  int result; // eax
  __int16 v7; // fps
  double v8; // st7
  bool v9; // c0
  char v10; // c2
  bool v11; // c3

  v2 = *(double *)this; /*0x41c460*/
  v3 = v2 < 0.0; /*0x41c462*/
  v4 = 0; /*0x41c462*/
  v5 = v2 == 0.0; /*0x41c462*/
  LOWORD(result) = v1; /*0x41c468*/
  if ( v2 == 0.0 ) /*0x41c46d*/
  {
    v8 = *((double *)this + 1); /*0x41c46f*/
    v9 = v8 < 0.0; /*0x41c472*/
    v10 = 0; /*0x41c472*/
    v11 = v8 == 0.0; /*0x41c472*/
    LOWORD(result) = v7; /*0x41c478*/
    if ( v8 == 0.0 ) /*0x41c47d*/
    {
      *this = 0; /*0x41c47f*/
      this->u32_4 = 1079574528; /*0x41c485*/
    }
  }
  return result; /*0x41c48c*/
}



// ==== 0x0041C490  AbstractClass::processCleanup  this=AbstractClass  sig=csp ====
char *__thiscall AbstractClass::processCleanup(AbstractClass *this, char a2)
{
  int v3; // eax
  char *v4; // ebp
  int v5; // ecx
  int v6; // eax
  void **v7; // esi
  int v8; // edi

  if ( (a2 & 2) != 0 ) /*0x41c49b*/
  {
    v3 = *((_DWORD *)this - 1); /*0x41c49d*/
    v4 = (char *)this - 4; /*0x41c4a1*/
    v5 = 3 * v3; /*0x41c4a4*/
    v6 = v3 - 1; /*0x41c4a7*/
    v7 = &this->ptr_0 + v5; /*0x41c4a8*/
    if ( v6 >= 0 ) /*0x41c4ab*/
    {
      v8 = v6 + 1; /*0x41c4ae*/
      do /*0x41c4bc*/
      {
        v7 -= 3; /*0x41c4b1*/
        nullsub_84(); /*0x41c4b6*/
        --v8; /*0x41c4bb*/
      }
      while ( v8 ); /*0x41c4bc*/
    }
    if ( (a2 & 1) != 0 ) /*0x41c4c2*/
      __3_YAXPAX_Z(v4); /*0x41c4c5*/
    return v4; /*0x41c4cd*/
  }
  else
  {
    nullsub_84(); /*0x41c4d7*/
    if ( (a2 & 1) != 0 ) /*0x41c4df*/
      __3_YAXPAX_Z(this); /*0x41c4e2*/
    return (char *)this; /*0x41c4ea*/
  }
}



// ==== 0x0041C500  BuildingTypeClass::Enqueue  this=BuildingTypeClass  sig=csp ====
char __thiscall BuildingTypeClass_Enqueue(int this, int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x41c50c*/
    return 0; /*0x41c50c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *(_DWORD *)(this + 8))); /*0x41c520*/
  if ( !v3 ) /*0x41c527*/
    return 0; /*0x41c580*/
  for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v3[v5 + 4] = v6[1] ) /*0x41c535*/
  {
    v5 = 8 * i; /*0x41c539*/
    v6 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x41c542*/
    *(_DWORD *)&v3[v5] = *v6; /*0x41c547*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x41c55b*/
  v7 = a2 + *(_DWORD *)(this + 8); /*0x41c566*/
  *(_DWORD *)this = v3; /*0x41c568*/
  *(_DWORD *)(this + 8) = v7; /*0x41c56a*/
  *(_DWORD *)(this + 16) = 0; /*0x41c56d*/
  return 1; /*0x41c574*/
}



// ==== 0x0041C590  BuildingTypeClass::Dequeue  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::Dequeue(BuildingTypeClass *this, int *a2)
{
  int result; // eax
  char *ptr_0; // edi
  int v5; // ebx
  int ptr_4; // ecx
  int v7; // esi

  result = (int)this->?; /*0x41c593*/
  if ( result ) /*0x41c598*/
  {
    if ( !LOBYTE(this->?) ) /*0x41c59e*/
    {
      qsort(this->TechnoTypeClass, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction); /*0x41c5b0*/
      this->? = 0; /*0x41c5b8*/
      LOBYTE(this->?) = 1; /*0x41c5bf*/
    }
    ptr_0 = (char *)this->TechnoTypeClass; /*0x41c5c9*/
    v5 = *a2; /*0x41c5cb*/
    ptr_4 = (int)this->?; /*0x41c5cd*/
    if ( ptr_4 <= 0 ) /*0x41c5d2*/
      return 0; /*0x41c5fe*/
    while ( 1 ) /*0x41c5db*/
    {
      v7 = *(_DWORD *)&ptr_0[8 * (ptr_4 / 2)]; /*0x41c5db*/
      if ( v7 <= v5 ) /*0x41c5e3*/
      {
        if ( v7 == v5 ) /*0x41c5e9*/
          return (int)&ptr_0[8 * (ptr_4 / 2)]; /*0x41c603*/
        ptr_0 += 8 * (ptr_4 / 2) + 8; /*0x41c5eb*/
        ptr_4 += -1 - ptr_4 / 2; /*0x41c5f3*/
      }
      else
      {
        ptr_4 /= 2; /*0x41c5e5*/
      }
      if ( ptr_4 <= 0 ) /*0x41c5f7*/
        return 0; /*0x41c5f7*/
    }
  }
  return result; /*0x41c59a*/
}



// ==== 0x0041C610  CompareFunction  this=-  sig=ida-proto ====
int __cdecl CompareFunction(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x41c620*/
  else
    return *a1 >= *a2 ? 1 : -1;
}



// ==== 0x0041C640  TechnoClass::processIdleState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::processIdleState(TechnoClass *this, int a2, void *a3, void **a4)
{
  return AircraftClass::QueryInterface((AircraftClass *)this, (AbstractClass *)(a2 - 4), a3, a4);
}



// ==== 0x0041C650  TechnoClass::processGuardState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::processGuardState(TechnoClass *this, int a2)
{
  return AircraftClass::AddRef((AircraftClass *)this, a2 - 4);
}



// ==== 0x0041C660  TechnoClass::processAttackState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::processAttackState(TechnoClass *this, int a2)
{
  return AircraftClass::Release((AircraftClass *)this, a2 - 4);
}



// ==== 0x0041C670  TechnoClass::processMoveState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::processMoveState(TechnoClass *this, int a2, void *a3, void **a4)
{
  return AircraftClass::QueryInterface((AircraftClass *)this, (AbstractClass *)(a2 - 1728), a3, a4);
}



// ==== 0x0041C680  TechnoClass::processHarvestState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::processHarvestState(TechnoClass *this, int a2)
{
  return AircraftClass::AddRef((AircraftClass *)this, a2 - 1728);
}



// ==== 0x0041C690  TechnoClass::processDeployState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::processDeployState(TechnoClass *this, int a2)
{
  return AircraftClass::Release((AircraftClass *)this, a2 - 1728);
}



// ==== 0x0041C6A0  sub_41C6A0  this=-  sig=ida-proto ====
void sub_41C6A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41c6ac*/
  dbl_889EF0 = Math::Sqrt(v0 + v0); /*0x41c6be*/
}



// ==== 0x0041C6D0  sub_41C6D0  this=-  sig=ida-proto ====
void sub_41C6D0()
{
  dbl_889F50 = dbl_889EF0 / 60.0; /*0x41c6dc*/
}



// ==== 0x0041C6F0  sub_41C6F0  this=-  sig=ida-proto ====
void sub_41C6F0()
{
  dbl_889F30 = 1.0 / dbl_889F50; /*0x41c6fc*/
}



// ==== 0x0041C710  sub_41C710  this=-  sig=ida-proto ====
void sub_41C710()
{
  dbl_889F28 = 0.0174532925199433 * 45.0; /*0x41c71c*/
}



// ==== 0x0041C730  sub_41C730  this=-  sig=ida-proto ====
void sub_41C730()
{
  dbl_889EF8 = 0.0174532925199433 * 60.0; /*0x41c73c*/
}



// ==== 0x0041C750  sub_41C750  this=-  sig=ida-proto ====
void sub_41C750()
{
  dbl_889ED0 = 0.0174532925199433 * 90.0; /*0x41c75c*/
}



// ==== 0x0041C770  sub_41C770  this=-  sig=ida-proto ====
__int64 sub_41C770()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_889ED0 - dbl_889EF8); /*0x41c782*/
  result = Math::RoundToInt(v0 * dbl_889EF0 * 0.5); /*0x41c796*/
  dword_889F58 = result; /*0x41c79b*/
  return result; /*0x41c7a0*/
}



// ==== 0x0041C7B0  sub_41C7B0  this=-  sig=ida-proto ====
void sub_41C7B0()
{
  dbl_889F00 = Math::ArcTan((double)dword_889F58 * 0.00390625); /*0x41c7c7*/
}



// ==== 0x0041C7E0  sub_41C7E0  this=-  sig=ida-proto ====
void sub_41C7E0()
{
  dbl_889F18 = Math::ArcTan((double)(2 * dword_889F58) / dbl_889EF0); /*0x41c802*/
}



// ==== 0x0041C810  sub_41C810  this=-  sig=ida-proto ====
__int64 sub_41C810()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_889F58) + 0.5); /*0x41c82b*/
  dword_889F4C = result; /*0x41c830*/
  return result; /*0x41c836*/
}



// ==== 0x0041C840  sub_41C840  this=-  sig=ida-proto ====
int sub_41C840()
{
  word_889EE8 = 0; /*0x41c842*/
  word_889EEA = 0; /*0x41c848*/
  return 0; /*0x41c84e*/
}



// ==== 0x0041C850  sub_41C850  this=-  sig=ida-proto ====
int sub_41C850()
{
  dword_889F08 = 0; /*0x41c852*/
  dword_889F0C = 0; /*0x41c857*/
  dword_889F10 = 0; /*0x41c85c*/
  return 0; /*0x41c861*/
}



// ==== 0x0041C870  sub_41C870  this=-  sig=ida-proto ====
int sub_41C870()
{
  dword_889F48 = 0; /*0x41c875*/
  dword_889F40 = 128; /*0x41c87f*/
  dword_889F44 = 128; /*0x41c884*/
  return 128; /*0x41c889*/
}



// ==== 0x0041C890  sub_41C890  this=-  sig=ida-proto ====
int sub_41C890()
{
  dword_889ED8 = 0; /*0x41c892*/
  dword_889EDC = 0; /*0x41c897*/
  dword_889EE0 = 0; /*0x41c89c*/
  dword_889EE4 = 0; /*0x41c8a1*/
  return 0; /*0x41c8a6*/
}



// ==== 0x0041C8B0  AircraftTypeClass::AircraftTypeClass  this=AircraftTypeClass  sig=csp ====
int __thiscall AircraftTypeClass::AircraftTypeClass(int this, char *Source)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  _DWORD *v6; // edx

  TechnoTypeClass::ReadINI((char *)this, Source, 4); /*0x41c8bb*/
  *(_DWORD *)(this + 3576) = -1; /*0x41c8c6*/
  *(_BYTE *)(this + 3580) = 0; /*0x41c8d0*/
  *(_BYTE *)(this + 3592) = 0; /*0x41c8d6*/
  *(_BYTE *)(this + 3593) = 0; /*0x41c8dc*/
  *(_BYTE *)(this + 3594) = 0; /*0x41c8e2*/
  *(_BYTE *)(this + 3595) = 0; /*0x41c8e8*/
  *(_BYTE *)(this + 3596) = 0; /*0x41c8ee*/
  *(_BYTE *)(this + 3597) = 0; /*0x41c8f4*/
  *(_BYTE *)(this + 3598) = 0; /*0x41c8fa*/
  *(_DWORD *)this = &AircraftTypeClass::`vftable'; /*0x41c900*/
  *(_DWORD *)(this + 4) = &AircraftTypeClass::`vftable'; /*0x41c906*/
  *(_DWORD *)(this + 8) = &AircraftTypeClass::`vftable'; /*0x41c90c*/
  *(_DWORD *)(this + 12) = &AircraftTypeClass::`vftable'; /*0x41c913*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x41c91a*/
  v3 = dword_A8B228; /*0x41c91f*/
  if ( dword_A8B228 < dword_A8B220 /*0x41c95d*/
    || (byte_A8B225 || !dword_A8B220)
    && dword_A8B22C > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8B218 + 8))(
               &dword_A8B218,
               dword_A8B220 + dword_A8B22C,
               0) == 0,
        v3 = dword_A8B228,
        !v4) )
  {
    dword_A8B228 = v3 + 1; /*0x41c962*/
    *((_DWORD *)dword_A8B21C + v3) = this; /*0x41c96c*/
    v3 = dword_A8B228; /*0x41c96f*/
  }
  v5 = 0; /*0x41c974*/
  if ( v3 <= 0 ) /*0x41c978*/
  {
LABEL_11:
    v5 = -1; /*0x41c98c*/
  }
  else
  {
    v6 = dword_A8B21C; /*0x41c97a*/
    while ( *v6 != this ) /*0x41c982*/
    {
      ++v5; /*0x41c984*/
      ++v6; /*0x41c985*/
      if ( v5 >= v3 ) /*0x41c98a*/
        goto LABEL_11; /*0x41c98a*/
    }
  }
  *(_DWORD *)(this + 3576) = v5; /*0x41c991*/
  *(_BYTE *)(this + 3384) = 1; /*0x41c997*/
  *(_BYTE *)(this + 3478) = 1; /*0x41c99d*/
  *(_BYTE *)(this + 3213) = 0; /*0x41c9a3*/
  *(_DWORD *)(this + 1816) = 32; /*0x41c9a9*/
  *(_DWORD *)(this + 3584) = 0; /*0x41c9b3*/
  *(_DWORD *)(this + 3588) = 3; /*0x41c9b9*/
  *(_BYTE *)(this + 3381) = 0; /*0x41c9c3*/
  *(_BYTE *)(this + 3382) = 0; /*0x41c9c9*/
  *(_BYTE *)(this + 3387) = 0; /*0x41c9cf*/
  *(_BYTE *)(this + 3479) = 0; /*0x41c9d5*/
  *(_BYTE *)(this + 3374) = 0; /*0x41c9db*/
  return this; /*0x41c9e3*/
}



// ==== 0x0041CAA0  TypeClass::FindByName  this=TypeClass  sig=csp ====
int __thiscall TypeClass::FindByName(TypeClass *this)
{
  int v2; // esi

  if ( !this ) /*0x41caa6*/
    return -1; /*0x41caa6*/
  v2 = 0; /*0x41caad*/
  if ( dword_A8B228 <= 0 ) /*0x41cab1*/
    return -1; /*0x41cad6*/
  while ( _strcmpi((char *)(*((_DWORD *)dword_A8B21C + v2) + 36), (char *)this) ) /*0x41caca*/
  {
    if ( ++v2 >= dword_A8B228 ) /*0x41cad4*/
      return -1; /*0x41cad4*/
  }
  return v2; /*0x41cad6*/
}



// ==== 0x0041CAF0  InitRotorArt  this=-  sig=ida-proto ====
int sub_41CAF0()
{
  int result; // eax

  dword_889F5C = SearchMIXFile(aLrotorShp, 0); /*0x41cb03*/
  result = SearchMIXFile(aRrotorShp, 0); /*0x41cb08*/
  dword_889F60 = result; /*0x41cb0d*/
  return result; /*0x41cb12*/
}



// ==== 0x0041CB20  AircraftTypeClass::ConstructAircraft  this=AircraftTypeClass  sig=csp ====
AircraftClass *__thiscall AircraftTypeClass::ConstructAircraft(AircraftTypeClass *this, IUnknown *ppv)
{
  int v2; // edi
  int v4; // eax

  v4 = __2_YAPAXI_Z(0x6D8u); /*0x41cb28*/
  if ( v4 ) /*0x41cb32*/
    return (AircraftClass *)AircraftClass::Construct(v4, v2, (int)this, ppv); /*0x41cb3c*/
  else
    return 0; /*0x41cb45*/
}



// ==== 0x0041CB50  AircraftTypeClass::g_var_3d23dc  this=AircraftTypeClass  sig=csp ====
char TechnoTypeClass::g_var_3d23dc(AircraftTypeClass *this)
{
  return 0; /*0x41cb52*/
}



// ==== 0x0041CB60  AircraftTypeClass::StubReturnFalse  this=AircraftTypeClass  sig=csp ====
char AircraftTypeClass::StubReturnFalse(AircraftTypeClass *this)
{
  return 0; /*0x41cb62*/
}



// ==== 0x0041CB70  AircraftTypeClass::CreateAircraft  this=AircraftTypeClass  sig=csp ====
int *__stdcall AircraftTypeClass::CreateAircraft(AircraftTypeClass *this)
{
  if ( (byte_889F38 & 1) == 0 ) /*0x41cb7b*/
  {
    byte_889F38 |= 1u; /*0x41cb96*/
    dword_889F20 = 0; /*0x41cb9c*/
    dword_889F24 = 2147450879; /*0x41cbb4*/
    atexit(nullsub_85); /*0x41cbba*/
  }
  return &dword_889F20; /*0x41cbc8*/
}



// ==== 0x0041CBD0  nullsub_85  this=-  sig=ida-proto ====
void __cdecl nullsub_85()
{
  ; /*0x41cbd0*/
}



// ==== 0x0041CBE0  AircraftTypeClass::GetDimensions  this=AircraftTypeClass  sig=csp ====
char __stdcall AircraftTypeClass::GetDimensions(AircraftTypeClass *this, int a2)
{
  return 0; /*0x41cbe2*/
}



// ==== 0x0041CBF0  AircraftTypeClass::g_var_773e90  this=AircraftTypeClass  sig=csp ====
_DWORD *__stdcall ObjectTypeClass::g_var_773e90(AircraftTypeClass *this)
{
  int v1; // esi

  v1 = 2 * dword_889F58; /*0x41cbfc*/
  *(_DWORD *)this->TechnoTypeClass = 256; /*0x41cc07*/
  *(_DWORD *)&this->TechnoTypeClass[4] = 256; /*0x41cc09*/
  *(_DWORD *)&this->TechnoTypeClass[8] = v1; /*0x41cc0c*/
  return this->TechnoTypeClass; /*0x41cc0f*/
}



// ==== 0x0041CC20  AircraftTypeClass::LoadTypeData  this=AircraftTypeClass  sig=csp ====
char __userpurge AircraftTypeClass::LoadTypeData@<al>(AircraftTypeClass *this, double a2@<st0>, unsigned __int8 ***a3)
{
  int v3; // ecx
  int v4; // esi
  char Bool_Overwrite; // al
  char v6; // cl
  char v7; // al
  char v8; // al
  char v9; // al
  int v10; // eax
  char v11; // al
  char v12; // cl
  char v14; // [esp-Ch] [ebp-98h]
  char v15; // [esp-Ch] [ebp-98h]
  char v16; // [esp-Ch] [ebp-98h]
  int v17; // [esp-Ch] [ebp-98h]
  unsigned __int8 ***v18; // [esp+0h] [ebp-8Ch]
  int v19; // [esp+8h] [ebp-84h]
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = v3; /*0x41cc2f*/
  INIClass::ResetSection((INIClass *)this); /*0x41cc33*/
  if ( !(unsigned __int8)ObjectTypeClass::LoadExtras((TechnoTypeClass *)this, a2, v18) ) /*0x41cc3b*/
    return 0; /*0x41cd98*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x41cc5c*/
                     (int *)this,
                     (unsigned __int8 *)(v4 + 36),
                     aLandable,
                     *(_BYTE *)(v4 + 3594));
  v6 = *(_BYTE *)(v4 + 3597); /*0x41cc61*/
  *(_BYTE *)(v4 + 3594) = Bool_Overwrite; /*0x41cc67*/
  v7 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aAirportbound, v6); /*0x41cc76*/
  v14 = *(_BYTE *)(v4 + 3598); /*0x41cc83*/
  *(_BYTE *)(v4 + 3597) = v7; /*0x41cc8a*/
  *(_BYTE *)(v4 + 3598) = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aFighter, v14); /*0x41cc95*/
  v8 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aCarryall, *(_BYTE *)(v4 + 3580)); /*0x41ccaa*/
  v15 = *(_BYTE *)(v4 + 3592); /*0x41ccbb*/
  *(_BYTE *)(v4 + 3580) = v8; /*0x41ccc7*/
  v9 = INIClass::ReadBool_Overwrite( /*0x41cccd*/
         (int *)&DSurface_ViewBounds.__pad_FC[228],
         (unsigned __int8 *)(v4 + 504),
         aRotors,
         v15);
  v16 = *(_BYTE *)(v4 + 3593); /*0x41ccdd*/
  *(_BYTE *)(v4 + 3592) = v9; /*0x41cce4*/
  *(_BYTE *)(v4 + 3593) = INIClass::ReadBool_Overwrite( /*0x41ccf9*/
                            (int *)&DSurface_ViewBounds.__pad_FC[228],
                            (unsigned __int8 *)(v4 + 504),
                            aCustomrotor,
                            v16);
  v19 = *(_DWORD *)(v4 + 3584); /*0x41cd15*/
  if ( INIClass::GetString( /*0x41cd19*/
         (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
         (unsigned __int8 *)(v4 + 504),
         aTrailer,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v10 = AnimTypeClass::FindOrCreate(Destination); /*0x41cd26*/
  }
  else
  {
    v10 = v19; /*0x41cd2d*/
  }
  v17 = *(_DWORD *)(v4 + 3588); /*0x41cd3c*/
  *(_DWORD *)(v4 + 3584) = v10; /*0x41cd43*/
  *(_DWORD *)(v4 + 3588) = INIClass::ReadInt_Overwrite( /*0x41cd4e*/
                             (bool *)&DSurface_ViewBounds.__pad_FC[228],
                             (unsigned __int8 *)(v4 + 504),
                             aSpawndelay,
                             v17);
  v11 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aFlyby, *(_BYTE *)(v4 + 3595)); /*0x41cd63*/
  v12 = *(_BYTE *)(v4 + 3596); /*0x41cd68*/
  *(_BYTE *)(v4 + 3595) = v11; /*0x41cd6e*/
  *(_BYTE *)(v4 + 3596) = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aFlyback, v12); /*0x41cd83*/
  return 1; /*0x41cd8a*/
}



// ==== 0x0041CDB0  AircraftTypeClass::PowerDrainUpdate  this=AircraftTypeClass  sig=csp ====
int __thiscall AircraftTypeClass::PowerDrainUpdate(AircraftTypeClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx

  v3 = BuildingTypeClass::ProcessPower((int)this, a2); /*0x41cdb9*/
  LOBYTE(v3) = this->qE08; /*0x41cdbe*/
  Power::FlagProcess((Power *)a2, v3); /*0x41cdc7*/
  LOBYTE(v4) = this->qE09; /*0x41cdcc*/
  Power::FlagProcess((Power *)a2, v4); /*0x41cdd5*/
  LOBYTE(v5) = this->qE0A; /*0x41cdda*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x41cde3*/
  LOBYTE(v6) = this->qE0D; /*0x41cde8*/
  Power::FlagProcess((Power *)a2, v6); /*0x41cdf1*/
  LOBYTE(v7) = this->qE0E; /*0x41cdf6*/
  Power::FlagProcess((Power *)a2, v7); /*0x41cdff*/
  return Power::TimerProcess(this->ArrayIndex); /*0x41ce12*/
}



// ==== 0x0041CE20  AircraftTypeClass::LoadFromINI  this=AircraftTypeClass  sig=csp ====
int __stdcall AircraftTypeClass::LoadFromINI(AircraftTypeClass *this, int a2)
{
  int result; // eax

  result = TechnoTypeClass::SaveLoad_Prefix((TechnoTypeClass *)this, a2); /*0x41ce2b*/
  if ( result >= 0 ) /*0x41ce32*/
  {
    if ( this ) /*0x41ce36*/
    {
      TechnoTypeClass::Construct((int)this, (int)&a2); /*0x41ce3f*/
      *(_DWORD *)this->TechnoTypeClass = &AircraftTypeClass::`vftable'; /*0x41ce44*/
      *(_DWORD *)&this->TechnoTypeClass[4] = &AircraftTypeClass::`vftable'; /*0x41ce4a*/
      *(_DWORD *)&this->TechnoTypeClass[8] = &AircraftTypeClass::`vftable'; /*0x41ce51*/
      *(_DWORD *)&this->TechnoTypeClass[12] = &AircraftTypeClass::`vftable'; /*0x41ce58*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 896); /*0x41ce6b*/
    VoxelAnimType::LoadAnim(this->TechnoTypeClass); /*0x41ce72*/
    ObjectTypeClass::Load2DArt(this->TechnoTypeClass); /*0x41ce79*/
    return 0; /*0x41ce7e*/
  }
  return result; /*0x41ce80*/
}



// ==== 0x0041CEB0  AircraftTypeClass::GetClassIdentifier  this=AircraftTypeClass  sig=csp ====
int __stdcall AircraftTypeClass::GetClassIdentifier(AircraftTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x41ceb6*/
    return -2147467261; /*0x41ceb8*/
  *a2 = -1366608935; /*0x41cec6*/
  a2[1] = 298976796; /*0x41cece*/
  a2[2] = 1610654892; /*0x41ced7*/
  a2[3] = unk_7E95BC; /*0x41cee0*/
  return 0; /*0x41cebd*/
}



// ==== 0x0041CEF0  KeywordClass::FindOrCreate  this=KeywordClass  sig=csp ====
int __thiscall KeywordClass_FindOrCreate(char *Source)
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x41cf0c*/
    return 0; /*0x41cf6f*/
  v2 = 0; /*0x41cf1d*/
  if ( dword_A8B228 <= 0 ) /*0x41cf21*/
  {
LABEL_6:
    if ( __2_YAPAXI_Z(0xE10u) ) /*0x41cf4b*/
      return AircraftTypeClass::AircraftTypeClass(Source); /*0x41cf61*/
    return 0; /*0x41cf55*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_A8B21C + v2) + 36), Source) ) /*0x41cf3a*/
  {
    if ( ++v2 >= dword_A8B228 ) /*0x41cf44*/
      goto LABEL_6; /*0x41cf44*/
  }
  return *((_DWORD *)dword_A8B21C + v2); /*0x41cf5f*/
}



// ==== 0x0041CF80  ObjectTypeClass::Copy  this=ObjectTypeClass  sig=csp ====
_DWORD *__stdcall ObjectTypeClass::Copy(ObjectTypeClass *this, _DWORD *a2)
{
  this->AbstractTypeClass = (void *)*a2; /*0x41cf8d*/
  this->? = (void *)a2[1]; /*0x41cf92*/
  this->? = (void *)a2[2]; /*0x41cf99*/
  return &this->AbstractTypeClass; /*0x41cf95*/
}



// ==== 0x0041CFA0  ObjectTypeClass::GetMember41_2  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectClass::GetMember41_2(ObjectTypeClass *this)
{
  return (int)this->Image; /*0x41cfa6*/
}



// ==== 0x0041CFB0  AircraftTypeClass::GetTypeIdentifier  this=AircraftTypeClass  sig=csp ====
int AircraftTypeClass::GetTypeIdentifier(AircraftTypeClass *this)
{
  return 3; /*0x41cfb5*/
}



// ==== 0x0041CFC0  AircraftTypeClass::GetObjectSize  this=AircraftTypeClass  sig=csp ====
int AircraftTypeClass::GetObjectSize(AircraftTypeClass *this)
{
  return 3600; /*0x41cfc5*/
}



// ==== 0x0041CFD0  AircraftTypeClass::GetAuxField  this=AircraftTypeClass  sig=csp ====
int __thiscall AircraftTypeClass::GetAuxField(AircraftTypeClass *this)
{
  return this->ArrayIndex; /*0x41cfd6*/
}



// ==== 0x0041CFE0  AircraftTypeClass::ddtor  this=AircraftTypeClass  sig=csp ====
void **__thiscall AircraftTypeClass::ddtor(AircraftTypeClass *this, char a2)
{
  int v3; // eax
  AircraftTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->TechnoTypeClass = &AircraftTypeClass::`vftable'; /*0x41cfe6*/
  *(_DWORD *)&this->TechnoTypeClass[4] = &AircraftTypeClass::`vftable'; /*0x41cfec*/
  *(_DWORD *)&this->TechnoTypeClass[8] = &AircraftTypeClass::`vftable'; /*0x41cff3*/
  *(_DWORD *)&this->TechnoTypeClass[12] = &AircraftTypeClass::`vftable'; /*0x41cffa*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x41d001*/
  v5 = this; /*0x41d016*/
  v3 = (*(int (__thiscall **)(_DWORD *, AircraftTypeClass **))(dword_A8B218 + 16))(&dword_A8B218, &v5); /*0x41d01a*/
  if ( v3 != -1 && v3 < dword_A8B228 && v3 < --dword_A8B228 ) /*0x41d035*/
  {
    do /*0x41d04d*/
    {
      ++v3; /*0x41d03d*/
      *((_DWORD *)dword_A8B21C + v3 - 1) = *((_DWORD *)dword_A8B21C + v3); /*0x41d041*/
    }
    while ( v3 < dword_A8B228 ); /*0x41d04d*/
  }
  TechnoTypeClass::DTOR((int)this); /*0x41d051*/
  if ( (a2 & 1) != 0 ) /*0x41d05b*/
    __3_YAXPAX_Z(this); /*0x41d05e*/
  return (void **)this; /*0x41d068*/
}



// ==== 0x0041D070  sub_41D070  this=-  sig=ida-proto ====
void sub_41D070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41d07c*/
  dbl_889F88 = Math::Sqrt(v0 + v0); /*0x41d08e*/
}



// ==== 0x0041D0A0  sub_41D0A0  this=-  sig=ida-proto ====
void sub_41D0A0()
{
  dbl_889FF0 = dbl_889F88 / 60.0; /*0x41d0ac*/
}



// ==== 0x0041D0C0  sub_41D0C0  this=-  sig=ida-proto ====
void sub_41D0C0()
{
  dbl_889FD8 = 1.0 / dbl_889FF0; /*0x41d0cc*/
}



// ==== 0x0041D0E0  sub_41D0E0  this=-  sig=ida-proto ====
void sub_41D0E0()
{
  dbl_889FD0 = 0.0174532925199433 * 45.0; /*0x41d0ec*/
}



// ==== 0x0041D100  sub_41D100  this=-  sig=ida-proto ====
void sub_41D100()
{
  dbl_889F90 = 0.0174532925199433 * 60.0; /*0x41d10c*/
}



// ==== 0x0041D120  sub_41D120  this=-  sig=ida-proto ====
void sub_41D120()
{
  *(double *)(&g_INI_DefaultBuffer + 4) = 0.0174532925199433 * 90.0; /*0x41d12c*/
}



// ==== 0x0041D140  sub_41D140  this=-  sig=ida-proto ====
__int64 sub_41D140()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(*(double *)(&g_INI_DefaultBuffer + 4) - dbl_889F90); /*0x41d152*/
  result = Math::RoundToInt(v0 * dbl_889F88 * 0.5); /*0x41d166*/
  dword_889FF8 = result; /*0x41d16b*/
  return result; /*0x41d170*/
}



// ==== 0x0041D180  sub_41D180  this=-  sig=ida-proto ====
void sub_41D180()
{
  dbl_889F98 = Math::ArcTan((double)dword_889FF8 * 0.00390625); /*0x41d197*/
}



// ==== 0x0041D1B0  sub_41D1B0  this=-  sig=ida-proto ====
void sub_41D1B0()
{
  dbl_889FB0 = Math::ArcTan((double)(2 * dword_889FF8) / dbl_889F88); /*0x41d1d2*/
}



// ==== 0x0041D1E0  sub_41D1E0  this=-  sig=ida-proto ====
__int64 sub_41D1E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_889FF8) + 0.5); /*0x41d1fb*/
  dword_889FEC = result; /*0x41d200*/
  return result; /*0x41d206*/
}



// ==== 0x0041D210  sub_41D210  this=-  sig=ida-proto ====
int sub_41D210()
{
  *((_DWORD *)&g_INI_DefaultBuffer + 7) = 0; /*0x41d212*/
  return 0; /*0x41d21e*/
}



// ==== 0x0041D220  sub_41D220  this=-  sig=ida-proto ====
int sub_41D220()
{
  dword_889FA0 = 0; /*0x41d222*/
  dword_889FA4 = 0; /*0x41d227*/
  dword_889FA8 = 0; /*0x41d22c*/
  return 0; /*0x41d231*/
}



// ==== 0x0041D240  sub_41D240  this=-  sig=ida-proto ====
int sub_41D240()
{
  dword_889FE8 = 0; /*0x41d245*/
  dword_889FE0 = 128; /*0x41d24f*/
  dword_889FE4 = 128; /*0x41d254*/
  return 128; /*0x41d259*/
}



// ==== 0x0041D260  sub_41D260  this=-  sig=ida-proto ====
int sub_41D260()
{
  *(_QWORD *)(&g_INI_DefaultBuffer + 12) = 0; /*0x41d262*/
  *(_QWORD *)(&g_INI_DefaultBuffer + 20) = 0; /*0x41d26c*/
  return 0; /*0x41d276*/
}



// ==== 0x0041D280  sub_41D280  this=-  sig=ida-proto ====
int sub_41D280()
{
  dword_889FBC = 0; /*0x41d287*/
  dword_889FC0 = 0; /*0x41d28c*/
  byte_889FC4 = 1; /*0x41d291*/
  byte_889FC5 = 0; /*0x41d298*/
  dword_889FB8 = (int)&DynamicVectorClass<AirstrikeClass *>::`vftable'; /*0x41d29d*/
  dword_889FCC = 10; /*0x41d2a7*/
  dword_889FC8 = 0; /*0x41d2b1*/
  return atexit(sub_41D2C0); /*0x41d2bc*/
}



// ==== 0x0041D2C0  sub_41D2C0  this=-  sig=ida-proto ====
void __cdecl sub_41D2C0()
{
  dword_889FB8 = (int)&VectorClass<AirstrikeClass *>::`vftable'; /*0x41d2c8*/
  if ( dword_889FBC && byte_889FC5 ) /*0x41d2dc*/
  {
    __3_YAXPAX_Z(dword_889FBC); /*0x41d2df*/
    dword_889FBC = 0; /*0x41d2e7*/
  }
  byte_889FC5 = 0; /*0x41d2ed*/
  dword_889FC0 = 0; /*0x41d2f3*/
}



// ==== 0x0041D300  AbstractClass::Create  this=AirstrikeClass  sig=csp ====
AbstractClass *__thiscall AbstractClass::Create(AbstractClass *this)
{
  int v2; // eax

  AbstractClass::Constructor(this); /*0x41d303*/
  this->ptr_0 = &AirstrikeClass::`vftable'; /*0x41d308*/
  this->ptr_4 = &AirstrikeClass::`vftable'; /*0x41d30e*/
  this->ptr_8 = &AirstrikeClass::`vftable'; /*0x41d315*/
  this->ptr_C = &AirstrikeClass::`vftable'; /*0x41d31c*/
  if ( dword_889FC8 < dword_889FC0 /*0x41d359*/
    || (byte_889FC5 || !dword_889FC0)
    && dword_889FCC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_889FB8 + 8))(
         &dword_889FB8,
         dword_889FC0 + dword_889FCC,
         0) )
  {
    v2 = dword_889FC8++; /*0x41d366*/
    *((_DWORD *)dword_889FBC + v2) = this; /*0x41d375*/
  }
  return this; /*0x41d37a*/
}



// ==== 0x0041D380  AirstrikeClass::AirstrikeClass  this=AirstrikeClass  sig=csp ====
int __thiscall AirstrikeClass::AirstrikeClass(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x41d384*/
  *(_DWORD *)this = &AirstrikeClass::`vftable'; /*0x41d389*/
  *(_DWORD *)(this + 4) = &AirstrikeClass::`vftable'; /*0x41d38f*/
  *(_DWORD *)(this + 8) = &AirstrikeClass::`vftable'; /*0x41d396*/
  *(_DWORD *)(this + 12) = &AirstrikeClass::`vftable'; /*0x41d39d*/
  if ( dword_889FC8 < dword_889FC0 /*0x41d3d9*/
    || (byte_889FC5 || !dword_889FC0)
    && dword_889FCC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_889FB8 + 8))(
         &dword_889FB8,
         dword_889FC0 + dword_889FCC,
         0) )
  {
    v3 = dword_889FC8++; /*0x41d3e6*/
    *((_DWORD *)dword_889FBC + v3) = this; /*0x41d3f5*/
  }
  *(_BYTE *)(this + 60) = 0; /*0x41d3fc*/
  *(_DWORD *)(this + 76) = a2; /*0x41d3ff*/
  *(_BYTE *)(this + 61) = 0; /*0x41d402*/
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x41d407*/
  v5 = *(_DWORD *)(this + 76); /*0x41d413*/
  *(_DWORD *)(this + 36) = *(_DWORD *)(v4 + 1564); /*0x41d416*/
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5); /*0x41d41b*/
  v7 = *(_DWORD *)(this + 76); /*0x41d427*/
  *(_DWORD *)(this + 40) = *(_DWORD *)(v6 + 1568); /*0x41d42a*/
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 132))(v7); /*0x41d42f*/
  v9 = *(_DWORD *)(this + 76); /*0x41d43b*/
  *(_DWORD *)(this + 68) = *(_DWORD *)(v8 + 1580); /*0x41d43e*/
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 132))(v9); /*0x41d443*/
  v11 = *(_DWORD *)(this + 76); /*0x41d44f*/
  *(_DWORD *)(this + 72) = *(_DWORD *)(v10 + 1584); /*0x41d452*/
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11); /*0x41d457*/
  v13 = *(_DWORD *)(this + 76); /*0x41d463*/
  *(_DWORD *)(this + 84) = *(_DWORD *)(v12 + 1572); /*0x41d466*/
  v14 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 1576); /*0x41d471*/
  *(_DWORD *)(this + 92) = 0; /*0x41d477*/
  *(_DWORD *)(this + 88) = v14; /*0x41d47a*/
  *(_DWORD *)(this + 80) = 0; /*0x41d47d*/
  return this; /*0x41d482*/
}



// ==== 0x0041D540  ObjectClass::CleanupAirstrikeTarget  this=WTFMode  sig=csp ====
char __thiscall ObjectClass::CleanupAirstrikeTarget(int this, int a2)
{
  int v3; // ebp
  int v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  int i; // eax
  int j; // esi
  _DWORD v10[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( byte_A8E9A0 )
  {
    if ( a2 )
    {
      v3 = (*(_BYTE *)(a2 + 20) & 4) != 0 ? a2 : 0;
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ? a2 : 0;
    }
    else
    {
      v3 = 0; /*0x41d560*/
      v4 = 0; /*0x41d562*/
    }
    v5 = *(_DWORD *)(this + 76); /*0x41d585*/
    if ( a2 == v5 )
    {
      if ( *(_BYTE *)(this + 61) /*0x41d5a5*/
        && v5
        && *(_DWORD *)(this + 92)
        && (unsigned __int8)House::IsHumanPlayer(*(House **)(v5 + 540)) )
      {
        v6 = (_DWORD *)(*(_DWORD *)(this + 92) + 156); /*0x41d5b2*/
        v10[0] = *v6; /*0x41d5b9*/
        v10[1] = v6[1]; /*0x41d5c6*/
        v10[2] = v6[2]; /*0x41d5d1*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 604), v10, 0); /*0x41d5db*/
      }
      WTFMode::ResetUnitFlags((WTFMode *)this); /*0x41d5e2*/
      for ( i = *(_DWORD *)(this + 92); i; i = *(_DWORD *)(this + 92) ) /*0x41d5ec*/
        AirstrikeClass::RemoveAircraft((int *)this, i); /*0x41d5f1*/
      v4 = *(_DWORD *)(this + 80); /*0x41d5fd*/
      if ( v4 && (*(_BYTE *)(v4 + 20) & 1) != 0 )
      {
        v4 = (*(_BYTE *)(v4 + 20) & 1) != 0 ? v4 : 0;
        *(_DWORD *)(v4 + 660) = 0; /*0x41d62e*/
      }
      *(_DWORD *)(this + 80) = 0; /*0x41d634*/
    }
    else if ( v3 && *(_DWORD *)(v3 + 660) == this ) /*0x41d64a*/
    {
      LOBYTE(v4) = AirstrikeClass::RemoveAircraft((int *)this, v3); /*0x41d64f*/
    }
    else if ( v4 && *(_DWORD *)(v4 + 660) == this && (*(int *)(v4 + 108) <= 0 || !*(_BYTE *)(v4 + 144)) ) /*0x41d66e*/
    {
      LOBYTE(v4) = WTFMode::ResetUnitFlags((WTFMode *)this); /*0x41d678*/
    }
  }
  else
  {
    LOBYTE(v4) = a2; /*0x41d686*/
    if ( a2 == *(_DWORD *)(this + 76) ) /*0x41d68f*/
    {
      for ( j = *(_DWORD *)(this + 92); j; j = *(_DWORD *)(j + 1496) ) /*0x41d696*/
        *(_DWORD *)(j + 660) = 0; /*0x41d698*/
    }
    else if ( a2 && (*(_BYTE *)(a2 + 20) & 4) != 0 && *(_DWORD *)(a2 + 660) == this ) /*0x41d6c1*/
    {
      LOBYTE(v4) = AirstrikeClass::RemoveAircraft((int *)this, a2); /*0x41d6c6*/
    }
  }
  return v4; /*0x41d619*/
}



// ==== 0x0041D6E0  AirstrikeClass::Stat  this=AirstrikeClass  sig=csp ====
int __thiscall AirstrikeClass::Stat(AirstrikeClass *this, int a2)
{
  return AbstractClass::ProcessPower((AbstractClass *)this); /*0x41d6ea*/
}



// ==== 0x0041D6F0  AirstrikeClass::Write  this=AirstrikeClass  sig=csp ====
int __stdcall AirstrikeClass::Write(AirstrikeClass *this, int a2)
{
  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x41d701*/
  if ( Prefix_0 >= 0 ) /*0x41d705*/
  {
    if ( this ) /*0x41d709*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x41d712*/
      this->AbstractClass = &AirstrikeClass::`vftable'; /*0x41d717*/
      this->? = &AirstrikeClass::`vftable'; /*0x41d71d*/
      this->? = &AirstrikeClass::`vftable'; /*0x41d724*/
      this->? = &AirstrikeClass::`vftable'; /*0x41d72b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->owner); /*0x41d73b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->AirstrikeClass_field_50); /*0x41d749*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->AirstrikeClass_field_54); /*0x41d757*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->AirstrikeClass_field_58); /*0x41d765*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->AirstrikeClass_field_5C); /*0x41d773*/
  }
  return Prefix_0; /*0x41d77a*/
}



// ==== 0x0041D780  AirstrikeClass::Seek  this=AirstrikeClass  sig=csp ====
int __stdcall AirstrikeClass::Seek(AirstrikeClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x41d794*/
}



// ==== 0x0041D7A0  AirstrikeClass::ddtor  this=AirstrikeClass  sig=csp ====
int __stdcall AirstrikeClass::ddtor(AirstrikeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x41d7a6*/
    return -2147467261; /*0x41d7a8*/
  *a2 = 1893611809; /*0x41d7b6*/
  a2[1] = 299179558; /*0x41d7be*/
  a2[2] = -1610574449; /*0x41d7c7*/
  a2[3] = unk_7E98EC; /*0x41d7d0*/
  return 0; /*0x41d7ad*/
}



// ==== 0x0041D7E0  Warhead::GetWarheadSound  this=Warhead  sig=csp ====
bool __thiscall Warhead::GetWarheadSound(bool *this, int a2)
{
  int v3; // eax

  if ( (unsigned __int8)Audio::IsLoud((int *)(this->q013 + 336)) ) /*0x41d7ec*/
    v3 = this->q048; /*0x41d7f5*/
  else
    v3 = this->q044; /*0x41d7fa*/
  return !this->u8_3C && v3 + this->u32_10 <= (int)dword_A8ED84 || a2 != this->u32_14; /*0x41d814*/
}



// ==== 0x0041D830  AirstrikeClass::StartMission  this=AirstrikeClass  sig=csp ====
char __thiscall AirstrikeClass::StartMission(int this, int *a2)
{
  char result; // al

  result = (char)a2; /*0x41d835*/
  if ( !*(_BYTE *)(this + 60) ) /*0x41d830*/
    return AirstrikeClass::SpawnAircraft(this, a2); /*0x41d83c*/
  if ( a2 != *(int **)(this + 80) ) /*0x41d847*/
    return AirstrikeClass::ReassignTarget(this, (int)a2); /*0x41d84a*/
  return result; /*0x41d841*/
}



// ==== 0x0041D860  AirstrikeClass::SpawnAircraft  this=AirstrikeClass  sig=csp ====
int __thiscall sub_41D860(int this, int *a2)
{
  int v3; // eax
  int v4; // ebp
  int v5; // ebx
  _DWORD *v7; // eax
  void *v8; // eax
  unsigned int *v9; // eax
  int result; // eax
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [esp-14h] [ebp-38h]
  int v15; // [esp-Ch] [ebp-30h]
  int v16; // [esp+10h] [ebp-14h] BYREF
  int v17; // [esp+14h] [ebp-10h]
  _DWORD v18[3]; // [esp+18h] [ebp-Ch] BYREF
  int v19; // [esp+28h] [ebp+4h]

  v3 = *(_DWORD *)(this + 84); /*0x41d869*/
  *(_BYTE *)(this + 60) = 1; /*0x41d86c*/
  *(_BYTE *)(this + 61) = 1; /*0x41d870*/
  *(_DWORD *)(this + 52) = 0; /*0x41d874*/
  v4 = *(_DWORD *)(v3 + 3576); /*0x41d881*/
  v17 = *(_DWORD *)(*(_DWORD *)dword_8871E0->? + 3576); /*0x41d895*/
  if ( Audio::IsLoud((float *)(*(_DWORD *)(this + 76) + 336)) ) /*0x41d8a2*/
  {
    v5 = *(_DWORD *)(this + 40); /*0x41d8ae*/
    v4 = *(_DWORD *)(*(_DWORD *)(this + 88) + 3576); /*0x41d8b1*/
  }
  else
  {
    v5 = *(_DWORD *)(this + 36); /*0x41d8b9*/
  }
  v7 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*a2 + 72))(a2, v18); /*0x41d8c9*/
  LOWORD(v19) = *v7 / 256; /*0x41d8dc*/
  HIWORD(v19) = v7[1] / 256; /*0x41d8f5*/
  v16 = v19; /*0x41d902*/
  v8 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v16); /*0x41d907*/
  v15 = v17; /*0x41d916*/
  v14 = (int)v8; /*0x41d919*/
  v9 = (unsigned int *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 76) + 60))(*(_DWORD *)(this + 76)); /*0x41d91f*/
  result = PlaceAircraftOnMap(v9, v4, v5, 1, v14, 0, v15, 0, this); /*0x41d926*/
  *(_DWORD *)(this + 44) = result; /*0x41d92d*/
  *(_DWORD *)(this + 48) = result; /*0x41d930*/
  if ( result ) /*0x41d933*/
  {
    result = *(_DWORD *)(this + 92); /*0x41d939*/
    if ( result ) /*0x41d93e*/
    {
      v11 = (_DWORD *)(result + 156); /*0x41d940*/
      v18[0] = *v11; /*0x41d949*/
      v18[1] = v11[1]; /*0x41d956*/
      v18[2] = v11[2]; /*0x41d961*/
      result = StartAudioControllerAt(dword_8871E0->?, (int)v18, 0); /*0x41d96b*/
    }
    *(_DWORD *)(this + 80) = a2; /*0x41d972*/
    if ( a2 ) /*0x41d975*/
    {
      result = (*(int (__thiscall **)(int *))(*a2 + 44))(a2); /*0x41d97f*/
      if ( result == 6 ) /*0x41d985*/
      {
        v12 = *a2; /*0x41d98b*/
        a2[165] = this; /*0x41d994*/
        (*(void (__thiscall **)(int *, int))(v12 + 348))(a2, 100000); /*0x41d99a*/
        *((_BYTE *)a2 + 1784) = *((_BYTE *)&dword_8871E0[1].?[12] + 2 * dword_8871E0[1].?[10] + dword_8871E0[1].?[10]); /*0x41d9b8*/
        *((_BYTE *)a2 + 1785) = *((_BYTE *)&dword_8871E0[1].?[12] + 2 * dword_8871E0[1].?[10] /*0x41d9d5*/
                                                                  + dword_8871E0[1].?[10]
                                                                  + 1);
        v13 = *a2; /*0x41d9f1*/
        *((_BYTE *)a2 + 1786) = *((_BYTE *)&dword_8871E0[1].?[12] + 2 * dword_8871E0[1].?[10] /*0x41d9f5*/
                                                                  + dword_8871E0[1].?[10]
                                                                  + 2);
        a2[447] = 1; /*0x41d9fb*/
        return (*(int (__thiscall **)(int *, int))(v13 + 292))(a2, 2); /*0x41da05*/
      }
    }
  }
  return result; /*0x41da0b*/
}



// ==== 0x0041DA20  AirstrikeClass::ReassignTarget  this=WTFMode  sig=csp ====
char __thiscall AirstrikeClass::ReassignTarget(int this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  _DWORD *v7; // edi
  int v8; // eax
  _DWORD *v9; // esi
  int v10; // eax
  int v11; // eax
  int *v12; // esi
  int v13; // edi

  v3 = *(_DWORD *)(this + 92); /*0x41da26*/
  if ( v3 && (v4 = *(_DWORD *)(v3 + 1496)) != 0 )
  {
    v5 = *(_DWORD *)(v3 + 764); /*0x41da37*/
    while ( *(_DWORD *)(v4 + 764) == v5 ) /*0x41da43*/
    {
      v4 = *(_DWORD *)(v4 + 1496); /*0x41da45*/
      if ( !v4 ) /*0x41da4d*/
        goto LABEL_6; /*0x41da4d*/
    }
    LOBYTE(v8) = WTFMode::ResetUnitFlags((WTFMode *)this); /*0x41da5c*/
  }
  else
  {
LABEL_6:
    v6 = *(_DWORD *)(this + 80); /*0x41da4f*/
    if ( v6 )
      v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 44))(*(_DWORD *)(this + 80)) == 6 ? (_DWORD *)v6 : 0;
    else
      v7 = 0; /*0x41da56*/
    if ( a2 )
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ? (_DWORD *)a2 : 0;
    else
      v9 = 0; /*0x41da84*/
    if ( v7 ) /*0x41da9e*/
    {
      v10 = *v7; /*0x41daa0*/
      v7[165] = 0; /*0x41daa4*/
      (*(void (__thiscall **)(_DWORD *))(v10 + 344))(v7); /*0x41daae*/
      (*(void (__thiscall **)(_DWORD *, int))(*v7 + 292))(v7, 2); /*0x41daba*/
    }
    *(_DWORD *)(this + 80) = 0; /*0x41dac2*/
    if ( v9 ) /*0x41dac9*/
    {
      v11 = *v9; /*0x41dacb*/
      v9[165] = this; /*0x41dad4*/
      (*(void (__thiscall **)(_DWORD *, int))(v11 + 348))(v9, 100000); /*0x41dada*/
      (*(void (__thiscall **)(_DWORD *, int))(*v9 + 292))(v9, 2); /*0x41dae6*/
    }
    v8 = *(_DWORD *)(this + 48); /*0x41daec*/
    v12 = *(int **)(this + 92); /*0x41daef*/
    v13 = 0; /*0x41daf2*/
    for ( *(_DWORD *)(this + 80) = a2; v13 < v8; ++v13 ) /*0x41daf9*/
    {
      if ( v12 ) /*0x41dafd*/
      {
        if ( v12[191] > 0 ) /*0x41db07*/
        {
          (*(void (__thiscall **)(int *, int))(*v12 + 968))(v12, a2); /*0x41db0e*/
          (*(void (__thiscall **)(int *, int, _DWORD))(*v12 + 488))(v12, 1, 0); /*0x41db1c*/
          *(_BYTE *)(this + 61) = 1; /*0x41db22*/
        }
        v12 = (int *)v12[374]; /*0x41db26*/
      }
      v8 = *(_DWORD *)(this + 48); /*0x41db2c*/
    }
  }
  return v8; /*0x41da61*/
}



// ==== 0x0041DB40  WTFMode::ResetUnitFlags  this=WTFMode  sig=csp ====
char __thiscall WTFMode::ResetUnitFlags(WTFMode *this)
{
  WTFMode *v1; // eax
  int v3; // ecx
  _DWORD *v4; // esi
  int v5; // edi
  _DWORD *v6; // esi
  WTFMode *v7; // edx
  WTFMode **v8; // ecx
  int v9; // edi

  LOBYTE(v1) = byte_A8E9A0; /*0x41db40*/
  if ( byte_A8E9A0 ) /*0x41db4d*/
  {
    v3 = this->q05C; /*0x41db53*/
    v1 = (WTFMode *)this->q05C; /*0x41db56*/
    if ( v1 ) /*0x41db5a*/
    {
      while ( *(_DWORD *)&v1[764] ) /*0x41db62*/
      {
        v1 = *(WTFMode **)&v1[1496]; /*0x41db64*/
        if ( !v1 ) /*0x41db6c*/
          goto LABEL_8; /*0x41db6c*/
      }
      v1 = (WTFMode *)this->q05C; /*0x41db74*/
      if ( v3 ) /*0x41db78*/
      {
        do /*0x41db88*/
        {
          *(_DWORD *)&v1[764] = 0; /*0x41db7a*/
          v1 = *(WTFMode **)&v1[1496]; /*0x41db80*/
        }
        while ( v1 ); /*0x41db88*/
      }
    }
LABEL_8:
    v4 = (_DWORD *)this->q05C; /*0x41db8a*/
    v5 = 0; /*0x41db8f*/
    if ( v4 ) /*0x41db93*/
    {
      do /*0x41dbc8*/
      {
        (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 488))(v4, 4, 0); /*0x41db9c*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v4 + 968))(v4, 0); /*0x41dba7*/
        LOBYTE(v1) = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v4 + 1152))(v4, 0, 1); /*0x41dbb4*/
        v4 = (_DWORD *)v4[374]; /*0x41dbba*/
        ++v5; /*0x41dbc0*/
      }
      while ( v5 <= 100 && v4 ); /*0x41dbc8*/
    }
    v6 = (_DWORD *)this->q050; /*0x41dbca*/
    this->u8_3D = 0; /*0x41dbcd*/
    if ( v6 ) /*0x41dbd2*/
    {
      v1 = (WTFMode *)(*(int (__thiscall **)(_DWORD *))(*v6 + 44))(v6); /*0x41dbd8*/
      if ( v1 == (WTFMode *)6 && (WTFMode *)v6[165] == this ) /*0x41dbe6*/
      {
        LOBYTE(v1) = dword_889FC8; /*0x41dbe8*/
        v7 = 0; /*0x41dbed*/
        if ( dword_889FC8 > 0 ) /*0x41dbf1*/
        {
          v8 = (WTFMode **)dword_889FBC; /*0x41dbf3*/
          v9 = dword_889FC8; /*0x41dbf9*/
          do /*0x41dc0c*/
          {
            v1 = *v8; /*0x41dbfb*/
            if ( *v8 != this && *(_DWORD **)&v1[80] == v6 ) /*0x41dc04*/
              v7 = *v8; /*0x41dc06*/
            ++v8; /*0x41dc08*/
            --v9; /*0x41dc0b*/
          }
          while ( v9 ); /*0x41dc0c*/
        }
        v6[165] = v7; /*0x41dc10*/
        if ( !v7 && byte_A8E9A0 ) /*0x41dc1e*/
          LOBYTE(v1) = (*(int (__thiscall **)(_DWORD *, int))(*v6 + 292))(v6, 2); /*0x41dc26*/
        if ( (WTFMode *)v6[165] == this ) /*0x41dc32*/
          v6[165] = 0; /*0x41dc34*/
      }
    }
    this->q050 = 0; /*0x41dc3b*/
  }
  return (char)v1; /*0x41dc3f*/
}



// ==== 0x0041DC50  AirstrikeClass::StubReturnFalse  this=AirstrikeClass  sig=csp ====
void AirstrikeClass::StubReturnFalse(AirstrikeClass *this)
{
  ; /*0x41dc50*/
}



// ==== 0x0041DC80  AirstrikeClass::RemoveAircraft  this=WTFMode  sig=csp ====
int __thiscall AirstrikeClass::RemoveAircraft(int *this, int a2)
{
  int result; // eax
  int v3; // edi
  wchar_t *v4; // edx

  result = this->q05C; /*0x41dc80*/
  v3 = 0; /*0x41dc8c*/
  if ( result == a2 ) /*0x41dc90*/
  {
    this->q05C = *(_DWORD *)(a2 + 1496); /*0x41dc98*/
    *(_DWORD *)(a2 + 1496) = 0; /*0x41dc9b*/
    result = this->u32_30 - 1; /*0x41dca4*/
    this->u32_30 = result; /*0x41dca5*/
    *(_DWORD *)(a2 + 660) = 0; /*0x41dca8*/
  }
  else if ( result ) /*0x41dcb2*/
  {
    do /*0x41dceb*/
    {
      if ( *(_DWORD *)(result + 1496) == a2 ) /*0x41dcbc*/
      {
        *(_DWORD *)(result + 1496) = *(_DWORD *)(a2 + 1496); /*0x41dcc4*/
        *(_DWORD *)(a2 + 1496) = 0; /*0x41dcca*/
        result = 0; /*0x41dcd3*/
        --this->u32_30; /*0x41dcd6*/
        *(_DWORD *)(a2 + 660) = 0; /*0x41dcd9*/
      }
      else
      {
        result = *(_DWORD *)(result + 1496); /*0x41dce1*/
      }
      ++v3; /*0x41dce3*/
    }
    while ( v3 <= 100 && result ); /*0x41dceb*/
  }
  if ( this->u32_30 <= 0 ) /*0x41dcf0*/
  {
    v4 = dword_A8ED84; /*0x41dcf2*/
    this->u32_3C = 0; /*0x41dcf8*/
    this->q040 = (int)v4; /*0x41dcfb*/
    this->u8_3D = 0; /*0x41dcfe*/
  }
  return result; /*0x41dd01*/
}



// ==== 0x0041DD10  ObjectClass::method_41DD10  this=ObjectClass  sig=csp ====
char __thiscall sub_41DD10(ObjectClass *this)
{
  this->ambientSoundController[1] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x41dd15*/
  LOBYTE(this->ambientSoundController[0]) = 0; /*0x41dd1a*/
  BYTE1(this->ambientSoundController[0]) = 0; /*0x41dd1d*/
  return 0; /*0x41dd20*/
}



// ==== 0x0041DD30  AirstrikeClass::StubReturn96  this=AirstrikeClass  sig=csp ====
int AirstrikeClass::StubReturn96(AirstrikeClass *this)
{
  return 96; /*0x41dd35*/
}



// ==== 0x0041DD40  AirstrikeClass::StubReturn71  this=AirstrikeClass  sig=csp ====
int AirstrikeClass::StubReturn71(AirstrikeClass *this)
{
  return 71; /*0x41dd45*/
}



// ==== 0x0041DD50  AirstrikeClass::CopyTo  this=AirstrikeClass  sig=csp ====
_DWORD *__thiscall AirstrikeClass::CopyTo(AirstrikeClass *this, char a2)
{
  int v3; // eax
  AirstrikeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &AirstrikeClass::`vftable'; /*0x41dd5d*/
  this->? = &AirstrikeClass::`vftable'; /*0x41dd63*/
  this->? = &AirstrikeClass::`vftable'; /*0x41dd6a*/
  this->? = &AirstrikeClass::`vftable'; /*0x41dd71*/
  v5 = this; /*0x41dd7f*/
  v3 = (*(int (__thiscall **)(int *, AirstrikeClass **))(dword_889FB8 + 16))(&dword_889FB8, &v5); /*0x41dd83*/
  if ( v3 != -1 && v3 < dword_889FC8 && v3 < --dword_889FC8 ) /*0x41dd9e*/
  {
    do /*0x41ddb6*/
    {
      ++v3; /*0x41dda6*/
      *((_DWORD *)dword_889FBC + v3 - 1) = *((_DWORD *)dword_889FBC + v3); /*0x41ddaa*/
    }
    while ( v3 < dword_889FC8 ); /*0x41ddb6*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x41ddba*/
  if ( (a2 & 1) != 0 ) /*0x41ddc4*/
    __3_YAXPAX_Z(this); /*0x41ddc7*/
  return &this->AbstractClass; /*0x41ddd1*/
}



// ==== 0x0041DDE0  _DynamicVectorClass_PAVAirstrikeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_AirstrikeClass::Destroy(_DynamicVectorClass_PAVAirstrikeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x41dde6*/
  this->m_10 = 0; /*0x41dde9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x41ddf0*/
  {
    __3_YAXPAX_Z(v2); /*0x41ddf6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x41ddfe*/
  }
  BYTE1(this->m_C) = 0; /*0x41de01*/
  this->m_8 = 0; /*0x41de04*/
}



// ==== 0x0041DE10  _DynamicVectorClass_PAVAirstrikeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AirstrikeClass::GetItemIndex(
        _DynamicVectorClass_PAVAirstrikeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x41de10*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x41de25*/
  else
    return 0; /*0x41de17*/
}



// ==== 0x0041DE30  _VectorClass_PAVAirstrikeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AirstrikeClass::Get(_VectorClass_PAVAirstrikeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x41de3a*/
}



// ==== 0x0041DE40  _VectorClass_PAVAirstrikeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AirstrikeClass::Add(_VectorClass_PAVAirstrikeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x41de42*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x41de4d*/
  {
    v3 = 0; /*0x41de4f*/
    if ( m_8 <= 0 ) /*0x41de53*/
      return 1; /*0x41de73*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x41de55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x41de5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x41de64*/
    {
      ++v3; /*0x41de66*/
      ++v4; /*0x41de67*/
      if ( v3 >= m_8 ) /*0x41de6c*/
        return 1; /*0x41de6c*/
    }
  }
  return 0; /*0x41de6e*/
}



// ==== 0x0041DE80  _VectorClass_PAVAirstrikeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AirstrikeClass::Release(_VectorClass_PAVAirstrikeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x41de8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x41de96*/
    if ( a3 ) /*0x41de9c*/
      v4 = a3; /*0x41deb2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x41deae*/
    LOBYTE(this->m_C) = 1; /*0x41deb6*/
    if ( v4 ) /*0x41deba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x41dec5*/
      {
        m_8 = this->m_8; /*0x41decc*/
        if ( a2 < m_8 ) /*0x41ded1*/
          m_8 = a2; /*0x41ded3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x41ded9*/
          ++i; /*0x41dede*/
        if ( BYTE1(this->m_C) ) /*0x41deeb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x41def6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x41defe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x41df07*/
      this->m_8 = a2; /*0x41df0f*/
      BYTE1(this->m_C) = a3 == 0; /*0x41df12*/
      return 1; /*0x41df18*/
    }
    else
    {
      return 0; /*0x41debf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVAirstrikeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x41df22*/
    return 1; /*0x41df28*/
  }
}



// ==== 0x0041DF30  _VectorClass_PAVAirstrikeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_AirstrikeClass::Remove(_VectorClass_PAVAirstrikeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x41df3d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x41df43*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x41df4b*/
  }
  BYTE1(this->m_C) = 0; /*0x41df4e*/
  this->m_8 = 0; /*0x41df51*/
}



// ==== 0x0041DF60  _VectorClass_PAVAirstrikeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AirstrikeClass::GetSize(_VectorClass_PAVAirstrikeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x41df60*/
    return 0; /*0x41df68*/
  m_8 = this->m_8; /*0x41df6e*/
  result = 0; /*0x41df71*/
  if ( m_8 <= 0 ) /*0x41df75*/
    return -1; /*0x41df8c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x41df7b*/
  {
    if ( ++result >= m_8 ) /*0x41df8a*/
      return -1; /*0x41df8a*/
  }
  return result; /*0x41df6a*/
}



// ==== 0x0041DFA0  _VectorClass_PAVAirstrikeClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AirstrikeClass::GetCapacity(_VectorClass_PAVAirstrikeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x41dfa0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x41dfb5*/
  else
    return 0; /*0x41dfa7*/
}



// ==== 0x0041DFC0  _DynamicVectorClass_PAVAirstrikeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_AirstrikeClass::SetCapacity(
        _DynamicVectorClass_PAVAirstrikeClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x41dfcc*/
  {
    LOBYTE(this->m_C) = 0; /*0x41dfd2*/
    if ( a3 ) /*0x41dfd8*/
      v4 = a3; /*0x41dfee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x41dfea*/
    LOBYTE(this->m_C) = 1; /*0x41dff2*/
    if ( !v4 ) /*0x41dff6*/
      return 0; /*0x41e06a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x41dff8*/
    {
      m_8 = this->m_8; /*0x41dfff*/
      if ( a2 < m_8 ) /*0x41e004*/
        m_8 = a2; /*0x41e006*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x41e00c*/
        ++i; /*0x41e011*/
      if ( BYTE1(this->m_C) ) /*0x41e01e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x41e029*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x41e031*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x41e03a*/
    this->m_8 = a2; /*0x41e042*/
    BYTE1(this->m_C) = a3 == 0; /*0x41e045*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVAirstrikeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x41e04e*/
  }
  v7 = this->m_8; /*0x41e051*/
  if ( v7 < this->m_10 ) /*0x41e059*/
    this->m_10 = v7; /*0x41e05b*/
  return 1; /*0x41e05e*/
}



// ==== 0x0041E070  _DynamicVectorClass_PAVAirstrikeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_AirstrikeClass::FindItemIndex(_DynamicVectorClass_PAVAirstrikeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x41e070*/
  result = 0; /*0x41e073*/
  if ( m_10 <= 0 ) /*0x41e078*/
    return -1; /*0x41e08f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x41e07e*/
  {
    if ( ++result >= m_10 ) /*0x41e08d*/
      return -1; /*0x41e08d*/
  }
  return result; /*0x41e092*/
}



// ==== 0x0041E0A0  _VectorClass_PAVAirstrikeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_AirstrikeClass::QueryInterface(_VectorClass_PAVAirstrikeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x41e0a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AirstrikeClass *>::`vftable'; /*0x41e0a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x41e0b0*/
  {
    __3_YAXPAX_Z(v3); /*0x41e0b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x41e0c0*/
  }
  BYTE1(this->m_C) = 0; /*0x41e0cb*/
  this->m_8 = 0; /*0x41e0d1*/
  if ( (a2 & 1) != 0 ) /*0x41e0d8*/
    __3_YAXPAX_Z(this); /*0x41e0db*/
  return this->__pad_0; /*0x41e0e5*/
}



// ==== 0x0041E0F0  _DynamicVectorClass_PAVAirstrikeClass::Constructor_VectorClass_AirstrikeClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_AirstrikeClass::Constructor_VectorClass_AirstrikeClass___(
        _DynamicVectorClass_PAVAirstrikeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x41e0f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AirstrikeClass *>::`vftable'; /*0x41e0f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x41e100*/
  {
    __3_YAXPAX_Z(v3); /*0x41e108*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x41e110*/
  }
  BYTE1(this->m_C) = 0; /*0x41e11b*/
  this->m_8 = 0; /*0x41e121*/
  if ( (a2 & 1) != 0 ) /*0x41e128*/
    __3_YAXPAX_Z(this); /*0x41e12b*/
  return this->__pad_0; /*0x41e135*/
}



// ==== 0x0041E140  sub_41E140  this=-  sig=ida-proto ====
int sub_41E140()
{
  dword_88A008 = 0; /*0x41e142*/
  dword_88A00C = 0; /*0x41e147*/
  dword_88A010 = 0; /*0x41e14c*/
  dword_88A014 = 0; /*0x41e151*/
  return 0; /*0x41e156*/
}



// ==== 0x0041E160  sub_41E160  this=-  sig=ida-proto ====
void sub_41E160()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41e16c*/
  dbl_88A020 = Math::Sqrt(v0 + v0); /*0x41e17e*/
}



// ==== 0x0041E190  sub_41E190  this=-  sig=ida-proto ====
void sub_41E190()
{
  dbl_88A070 = dbl_88A020 / 60.0; /*0x41e19c*/
}



// ==== 0x0041E1B0  sub_41E1B0  this=-  sig=ida-proto ====
void sub_41E1B0()
{
  dbl_88A058 = 1.0 / dbl_88A070; /*0x41e1bc*/
}



// ==== 0x0041E1D0  sub_41E1D0  this=-  sig=ida-proto ====
void sub_41E1D0()
{
  dbl_88A050 = 0.0174532925199433 * 45.0; /*0x41e1dc*/
}



// ==== 0x0041E1F0  sub_41E1F0  this=-  sig=ida-proto ====
void sub_41E1F0()
{
  dbl_88A028 = 0.0174532925199433 * 60.0; /*0x41e1fc*/
}



// ==== 0x0041E210  sub_41E210  this=-  sig=ida-proto ====
void sub_41E210()
{
  dbl_88A000 = 0.0174532925199433 * 90.0; /*0x41e21c*/
}



// ==== 0x0041E230  sub_41E230  this=-  sig=ida-proto ====
__int64 sub_41E230()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_88A000 - dbl_88A028); /*0x41e242*/
  result = Math::RoundToInt(v0 * dbl_88A020 * 0.5); /*0x41e256*/
  dword_88A078 = result; /*0x41e25b*/
  return result; /*0x41e260*/
}



// ==== 0x0041E270  sub_41E270  this=-  sig=ida-proto ====
void sub_41E270()
{
  dbl_88A030 = Math::ArcTan((double)dword_88A078 * 0.00390625); /*0x41e287*/
}



// ==== 0x0041E2A0  sub_41E2A0  this=-  sig=ida-proto ====
void sub_41E2A0()
{
  dbl_88A048 = Math::ArcTan((double)(2 * dword_88A078) / dbl_88A020); /*0x41e2c2*/
}



// ==== 0x0041E2D0  sub_41E2D0  this=-  sig=ida-proto ====
__int64 sub_41E2D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_88A078) + 0.5); /*0x41e2eb*/
  dword_88A06C = result; /*0x41e2f0*/
  return result; /*0x41e2f6*/
}



// ==== 0x0041E300  sub_41E300  this=-  sig=ida-proto ====
int sub_41E300()
{
  word_88A018 = 0; /*0x41e302*/
  word_88A01A = 0; /*0x41e308*/
  return 0; /*0x41e30e*/
}



// ==== 0x0041E310  sub_41E310  this=-  sig=ida-proto ====
int sub_41E310()
{
  dword_88A038 = 0; /*0x41e312*/
  dword_88A03C = 0; /*0x41e317*/
  dword_88A040 = 0; /*0x41e31c*/
  return 0; /*0x41e321*/
}



// ==== 0x0041E330  sub_41E330  this=-  sig=ida-proto ====
int sub_41E330()
{
  dword_88A068 = 0; /*0x41e335*/
  dword_88A060 = 128; /*0x41e33f*/
  dword_88A064 = 128; /*0x41e344*/
  return 128; /*0x41e349*/
}



// ==== 0x0041E350  AnimTypeClass::Construct2  this=AITriggerTypeClass  sig=csp ====
_DWORD *__thiscall AnimTypeClass::Construct2(AnimTypeClass *this, char *Source)
{
  int v3; // eax

  AbstractTypeClass::Constructor((int *)this, Source); /*0x41e359*/
  *(_DWORD *)this->? = -1; /*0x41e363*/
  *(_DWORD *)&this->? = -1; /*0x41e369*/
  this->?[0] = 0; /*0x41e374*/
  this->?[1] = 0; /*0x41e37a*/
  this->?[3] = 0; /*0x41e380*/
  this->?[0] = 1072693248; /*0x41e386*/
  this->?[2] = 1072693248; /*0x41e38c*/
  this->?[4] = 1072693248; /*0x41e392*/
  BYTE2(this->?[5]) = 1; /*0x41e39a*/
  HIBYTE(this->?[5]) = 1; /*0x41e3a0*/
  LOBYTE(this->?[6]) = 1; /*0x41e3a6*/
  this->?[0] = 0; /*0x41e3b9*/
  this->? = 0; /*0x41e3bf*/
  LOBYTE(this->?) = 0; /*0x41e3c5*/
  this->? = 0; /*0x41e3cb*/
  this->?[0] = 0; /*0x41e3d1*/
  LOBYTE(this->?[5]) = 0; /*0x41e3d7*/
  BYTE1(this->?[5]) = 0; /*0x41e3dd*/
  this->?[7] = 0; /*0x41e3e3*/
  this->?[8] = 0; /*0x41e3e9*/
  this->?[9] = 0; /*0x41e3ef*/
  this->?[0] = 0; /*0x41e3f5*/
  this->?[1] = 0; /*0x41e3fb*/
  this->ObjectTypeClass = &AITriggerTypeClass::`vftable'; /*0x41e401*/
  this->? = &AITriggerTypeClass::`vftable'; /*0x41e407*/
  this->? = &AITriggerTypeClass::`vftable'; /*0x41e40e*/
  this->? = &AITriggerTypeClass::`vftable'; /*0x41e415*/
  memset(&this->?[10], 0, 0x20u); /*0x41e41c*/
  if ( dword_A8B210 < dword_A8B208 /*0x41e452*/
    || (byte_A8B20D || !dword_A8B208)
    && dword_A8B214 > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8B200 + 8))(
         &dword_A8B200,
         dword_A8B208 + dword_A8B214,
         0) )
  {
    v3 = dword_A8B210++; /*0x41e45f*/
    *((_DWORD *)dword_A8B204 + v3) = this; /*0x41e46e*/
  }
  return &this->ObjectTypeClass; /*0x41e473*/
}



// ==== 0x0041E500  AITriggerTypeClass::GetClassIdentifier  this=AITriggerTypeClass  sig=csp ====
int __stdcall AITriggerTypeClass::GetClassIdentifier(AITriggerTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x41e506*/
    return -2147467261; /*0x41e508*/
  *a2 = -1173801692; /*0x41e516*/
  a2[1] = 298994932; /*0x41e51e*/
  a2[2] = 268445372; /*0x41e527*/
  a2[3] = unk_7E996C; /*0x41e530*/
  return 0; /*0x41e50d*/
}



// ==== 0x0041E540  AITriggerTypeClass::LoadTypeData  this=AITriggerTypeClass  sig=csp ====
int __stdcall AITriggerTypeClass::LoadTypeData(AITriggerTypeClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x41e54b*/
  if ( result >= 0 ) /*0x41e552*/
  {
    if ( this ) /*0x41e556*/
    {
      AbstractTypeClass::Init((int)this, (int)&a2); /*0x41e55f*/
      *(_DWORD *)this->__pad_0 = &AITriggerTypeClass::`vftable'; /*0x41e564*/
      this->AITriggerTypeClass_field_0x04 = (int)&AITriggerTypeClass::`vftable'; /*0x41e56a*/
      this->AITriggerTypeClass_field_0x08 = (int)&AITriggerTypeClass::`vftable'; /*0x41e571*/
      this->AITriggerTypeClass_field_0x0C = (int)&AITriggerTypeClass::`vftable'; /*0x41e578*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 54); /*0x41e58b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 55); /*0x41e59c*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 56); /*0x41e5ad*/
    return 0; /*0x41e5b2*/
  }
  return result; /*0x41e5b4*/
}



// ==== 0x0041E5C0  AITriggerTypeClass::SaveToINI  this=AITriggerTypeClass  sig=csp ====
int __stdcall AITriggerTypeClass::SaveToINI(AITriggerTypeClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x41e5cf*/
  if ( result >= 0 ) /*0x41e5d6*/
    return 0; /*0x41e5d8*/
  return result; /*0x41e5da*/
}



// ==== 0x0041E5E0  AITriggerTypeClass::ProcessPower  this=AITriggerTypeClass  sig=csp ====
int __thiscall AITriggerTypeClass::ProcessPower(AITriggerTypeClass *this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x41e5e9*/
  Power::TimerProcess(*((_DWORD *)this + 38)); /*0x41e5f7*/
  Power::TimerProcess(*((_DWORD *)this + 39)); /*0x41e605*/
  Power::TimerProcess(this->u32_28); /*0x41e613*/
  Power::TimerProcess(*((_DWORD *)this + 42)); /*0x41e621*/
  Power::TimerProcess(this->q02C); /*0x41e62f*/
  switch ( *((_DWORD *)this + 38) ) /*0x41e63f*/
  {
    case 0: /*0x41e63f*/
    case 1: /*0x41e63f*/
    case 4: /*0x41e63f*/
    case 7: /*0x41e63f*/
      Power::TimerProcess(*((_DWORD *)this + 57)); /*0x41e64f*/
      Power::TimerProcess(this->q03A); /*0x41e65d*/
      break; /*0x41e65d*/
    default:
      break;
  }
  Checksummer::Add_double((Checksummer *)a2, *((_DWORD *)this + 46), *((_DWORD *)this + 47)); /*0x41e662*/
  Checksummer::Add_double((Checksummer *)a2, this->q030, this->q031); /*0x41e687*/
  Checksummer::Add_double((Checksummer *)a2, *((_DWORD *)this + 50), this->alignmentPadding); /*0x41e69c*/
  LOBYTE(v3) = this->q034; /*0x41e6a1*/
  Power::FlagProcess((Power *)a2, v3); /*0x41e6aa*/
  LOBYTE(v4) = *((_BYTE *)this + 210); /*0x41e6af*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x41e6b8*/
  LOBYTE(v5) = *((_BYTE *)this + 211); /*0x41e6bd*/
  Power::FlagProcess((Power *)a2, v5); /*0x41e6c6*/
  LOBYTE(v6) = *((_BYTE *)this + 212); /*0x41e6cb*/
  Power::FlagProcess((Power *)a2, v6); /*0x41e6d4*/
  v7 = Power::TimerProcess(this->q02B); /*0x41e6e2*/
  LOBYTE(v7) = *((_BYTE *)this + 209); /*0x41e6e7*/
  return Power::FlagProcess((Power *)a2, v7); /*0x41e6f5*/
}



// ==== 0x0041E720  TriggerClass::EvaluateCondition  this=TriggerClass  sig=csp ====
char __thiscall TriggerClass::EvaluateCondition(int this, TriggerClass *a2, _DWORD *a3, char a4)
{
  int v5; // ecx
  int v6; // eax
  bool v7; // dl
  TriggerClass *v8; // edi
  char result; // al
  void *ptr_0; // eax
  int referenceCount; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  bool v15; // al
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // [esp+1Ch] [ebp+Ch]
  int v20; // [esp+1Ch] [ebp+Ch]

  v5 = *(_DWORD *)(this + 220); /*0x41e726*/
  v7 = 1; /*0x41e74e*/
  if ( !v5 || !*(_BYTE *)(v5 + 246) ) /*0x41e730*/
  {
    v6 = *(_DWORD *)(this + 224); /*0x41e73a*/
    if ( !v6 || !*(_BYTE *)(v6 + 246) ) /*0x41e744*/
      v7 = 0; /*0x41e738*/
  }
  if ( !v5 ) /*0x41e756*/
    return 0; /*0x41e756*/
  if ( a3 ) /*0x41e762*/
  {
    v8 = a2; /*0x41e769*/
    if ( !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6131) /*0x41e78c*/
      || a2[307].? >= *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5012) + 4 * a2[5].?) )
    {
      if ( !v7 ) /*0x41e7a3*/
        goto LABEL_17; /*0x41e7a3*/
      goto LABEL_16; /*0x41e7a3*/
    }
  }
  else
  {
    v8 = a2; /*0x41e790*/
  }
  if ( !v7 ) /*0x41e796*/
    return 0; /*0x41e79e*/
LABEL_16:
  if ( a4 ) /*0x41e7ab*/
    return 0; /*0x41e7ab*/
LABEL_17:
  if ( *(_DWORD *)(this + 156) == 1 && LOBYTE(dword_A8B230[374].referenceCount) == 1 || !*(_BYTE *)(this + 164) ) /*0x41e7cd*/
    return 0; /*0x41e7d5*/
  if ( *(_DWORD *)&dword_A8B238 ) /*0x41e7df*/
  {
    if ( !*(_BYTE *)(this + 208) ) /*0x41e7e1*/
      return 0; /*0x41e7f1*/
    referenceCount = v8[5].?; /*0x41e809*/
    if ( !referenceCount ) /*0x41e811*/
    {
LABEL_28:
      if ( !*(_BYTE *)(this + 212) ) /*0x41e813*/
        return 0; /*0x41e823*/
      goto LABEL_36; /*0x41e81b*/
    }
    if ( referenceCount == 1 ) /*0x41e828*/
      goto LABEL_31; /*0x41e828*/
    if ( referenceCount != 2 ) /*0x41e840*/
      goto LABEL_36; /*0x41e840*/
    goto LABEL_34; /*0x41e840*/
  }
  ptr_0 = dword_A8B230[43].ptr_0; /*0x41e7f4*/
  if ( !ptr_0 ) /*0x41e7fc*/
  {
LABEL_34:
    if ( *(_BYTE *)(this + 210) ) /*0x41e842*/
      goto LABEL_36; /*0x41e84a*/
    return 0; /*0x41e852*/
  }
  if ( ptr_0 != (void *)1 ) /*0x41e800*/
  {
    if ( ptr_0 != (void *)2 ) /*0x41e805*/
      goto LABEL_36; /*0x41e805*/
    goto LABEL_28; /*0x41e805*/
  }
LABEL_31:
  if ( !*(_BYTE *)(this + 211) ) /*0x41e82a*/
    return 0; /*0x41e83a*/
LABEL_36:
  v12 = *(_DWORD *)(this + 160); /*0x41e855*/
  if ( !v12 ) /*0x41e85d*/
    return 0; /*0x41e865*/
  if ( v12 == 1 && *(_DWORD *)(v8->timer[0] + 184) != *(_DWORD *)(this + 168) ) /*0x41e882*/
    return 0; /*0x41e88a*/
  v13 = *(_DWORD *)(this + 172); /*0x41e88d*/
  if ( v13 == 1 ) /*0x41e895*/
  {
    if ( v8[6].timer[1] ) /*0x41e897*/
      return 0; /*0x41e8a7*/
  }
  else if ( v13 == 2 ) /*0x41e8ad*/
  {
    if ( v8[6].timer[1] != 1 ) /*0x41e8b5*/
      return 0; /*0x41e8bd*/
  }
  else if ( v13 == 3 && v8[6].timer[1] != 2 ) /*0x41e8cc*/
  {
    return 0; /*0x41e8d4*/
  }
  if ( *(_DWORD *)(this + 176) > (int)v8[6].buildingType ) /*0x41e8e5*/
    return 0; /*0x41e8ea*/
  v14 = *(_DWORD *)(this + 152); /*0x41e8f0*/
  if ( a3 ) /*0x41e8f8*/
  {
    switch ( v14 ) /*0x41e908*/
    {
      case -1: /*0x41e908*/
        goto LABEL_70;
      case 0: /*0x41e908*/
        v15 = AITriggerTypeClass::EnemyHouseOwns((AITriggerTypeClass *)this, (int)v8, a3); /*0x41e913*/
        break; /*0x41e918*/
      case 1: /*0x41e908*/
        v15 = AITriggerTypeClass::OwnerHouseOwns((AITriggerTypeClass *)this, v8, (int)a3); /*0x41e921*/
        break; /*0x41e926*/
      case 2: /*0x41e908*/
        v19 = (*(int (__stdcall **)(_DWORD *))(a3[9] + 36))(a3 + 9); /*0x41e93b*/
        if ( (double)((*(int (__stdcall **)(_DWORD *))(a3[9] + 32))(a3 + 9) - v19) >= 100.0 ) /*0x41e95b*/
          goto LABEL_58; /*0x41e95b*/
        v15 = 1; /*0x41e95d*/
        break; /*0x41e95f*/
      case 3: /*0x41e908*/
        v20 = (*(int (__stdcall **)(_DWORD *))(a3[9] + 36))(a3 + 9); /*0x41e975*/
        if ( (double)((*(int (__stdcall **)(_DWORD *))(a3[9] + 32))(a3 + 9) - v20) >= 0.0 ) /*0x41e995*/
LABEL_58:
          v15 = 0; /*0x41e961*/
        else
          v15 = 1; /*0x41e997*/
        break; /*0x41e999*/
      case 4: /*0x41e908*/
        v15 = AITriggerTypeClass::HouseCredits((AITriggerTypeClass *)this, (int)v8, (int)a3); /*0x41e99f*/
        break; /*0x41e9a4*/
      case 5: /*0x41e908*/
        v15 = AITriggerTypeClass::IronCurtainCharged((int)v8, (int)a3); /*0x41e9aa*/
        break; /*0x41e9af*/
      case 6: /*0x41e908*/
        v15 = AITriggerTypeClass::ChronoSphereCharged((int)v8, (int)a3); /*0x41e9b5*/
        break; /*0x41e9ba*/
      case 7: /*0x41e908*/
        v15 = AITriggerTypeClass::CivilianHouseOwns((AITriggerTypeClass *)this, (int)v8, (int)a3); /*0x41e9c0*/
        break; /*0x41e9c5*/
      default:
        return 0;
    }
  }
  else if ( v14 == 1 ) /*0x41e9c9*/
  {
    v15 = AITriggerTypeClass::OwnerHouseOwns((AITriggerTypeClass *)this, v8, 0); /*0x41e9d0*/
  }
  else
  {
    v15 = v14 == -1; /*0x41e9da*/
  }
  if ( !v15 ) /*0x41e9df*/
    return 0; /*0x41e9e1*/
LABEL_70:
  result = globalHelper_01FEE0(*(_DWORD *)(this + 220), v8, a3); /*0x41e9ea*/
  if ( result ) /*0x41e9fc*/
  {
    v16 = *(_DWORD *)(this + 224); /*0x41ea05*/
    if ( !v16 || (result = globalHelper_01FEE0(v16, v8, a3)) != 0 ) /*0x41ea1b*/
    {
      result = TriggerClass::ValidateTeamTriggerConditions(v8, *(_DWORD *)(this + 220)); /*0x41ea2d*/
      if ( result ) /*0x41ea34*/
      {
        if ( !*(_DWORD *)(this + 224) /*0x41ea51*/
          || (result = TriggerClass::ValidateTeamTriggerConditions(v8, *(_DWORD *)(this + 224))) != 0 )
        {
          v17 = *(_DWORD *)(this + 220); /*0x41ea5a*/
          if ( v17 /*0x41ea82*/
            && *(int *)(v17 + 184) >= 0
            && TeamClass::CountActiveTeamsForType((TeamClass *)v8, *(_DWORD *)(this + 220)) >= *(_DWORD *)(*(_DWORD *)(this + 220) + 184) )
          {
            return 0; /*0x41ea87*/
          }
          else
          {
            v18 = *(_DWORD *)(this + 224); /*0x41ea8d*/
            return !v18 /*0x41eaba*/
                || *(int *)(v18 + 184) < 0
                || TeamClass::CountActiveTeamsForType((TeamClass *)v8, *(_DWORD *)(this + 224)) < *(_DWORD *)(*(_DWORD *)(this + 224) + 184);
          }
        }
      }
    }
  }
  return result; /*0x41e798*/
}



// ==== 0x0041EAF0  AITriggerTypeClass::EnemyHouseOwns  this=AITriggerTypeClass  sig=csp ====
bool __thiscall AITriggerTypeClass::EnemyHouseOwns(AITriggerTypeClass *this, int a2, _DWORD *a3)
{
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int v7; // eax
  bool result; // al
  bool v9; // [esp+7h] [ebp-1h]

  v9 = 0; /*0x41eafa*/
  if ( !a3 ) /*0x41eaff*/
    return v9; /*0x41ec2b*/
  v4 = *((_DWORD *)this + 54); /*0x41eb06*/
  if ( v4 ) /*0x41eb0e*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 64))(v4); /*0x41eb21*/
    v6 = 0; /*0x41eb23*/
    switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) ) /*0x41eb38*/
    {
      case 3: /*0x41eb38*/
        v6 = DynamicVector::GetOrGrow((DynamicVector *)(a3 + 5475), v5); /*0x41eb91*/
        goto LABEL_8; /*0x41eb91*/
      case 7: /*0x41eb38*/
        v7 = DynamicVector::GetOrGrow((DynamicVector *)(a3 + 5460), v5); /*0x41eb4a*/
        break; /*0x41eb53*/
      case 16: /*0x41eb38*/
        v7 = DynamicVector::GetOrGrow((DynamicVector *)(a3 + 5470), v5); /*0x41eb76*/
        break; /*0x41eb7f*/
      case 40: /*0x41eb38*/
        v7 = DynamicVector::GetOrGrow((DynamicVector *)(a3 + 5465), v5); /*0x41eb60*/
        break; /*0x41eb69*/
      default:
LABEL_8:
        v7 = v6; /*0x41eb93*/
        break; /*0x41eb97*/
    }
  }
  else
  {
    v7 = 0; /*0x41eb99*/
  }
  switch ( this->q03A ) /*0x41ebab*/
  {
    case 0: /*0x41ebab*/
      result = v7 < *((_DWORD *)this + 57); /*0x41ebc0*/
      break; /*0x41ebc5*/
    case 1: /*0x41ebab*/
      result = v7 <= *((_DWORD *)this + 57); /*0x41ebd6*/
      break; /*0x41ebdb*/
    case 2: /*0x41ebab*/
      result = v7 == *((_DWORD *)this + 57); /*0x41ebec*/
      break; /*0x41ebf1*/
    case 3: /*0x41ebab*/
      result = v7 >= *((_DWORD *)this + 57); /*0x41ec02*/
      break; /*0x41ec07*/
    case 4: /*0x41ebab*/
      result = v7 > *((_DWORD *)this + 57); /*0x41ec18*/
      break; /*0x41ec1d*/
    case 5: /*0x41ebab*/
      return v7 != *((_DWORD *)this + 57); /*0x41ec26*/
    default:
      return v9;
  }
  return result; /*0x41ebb8*/
}



// ==== 0x0041EC90  AITriggerTypeClass::CivilianHouseOwns  this=AITriggerTypeClass  sig=csp ====
bool __thiscall AITriggerTypeClass::CivilianHouseOwns(AITriggerTypeClass *this, int a2, int a3)
{
  AITriggerTypeClass *v3; // edi
  int v4; // esi
  bool result; // al
  int v6; // ebx
  int AITriggerTypeClass_field_0x18; // esi
  int v8; // ebp
  int v9; // edi
  int v10; // eax
  bool v11; // [esp+Fh] [ebp-5h]

  v3 = this; /*0x41ec9b*/
  v4 = 0; /*0x41ec9d*/
  v11 = 0; /*0x41eca5*/
  if ( stru_A80220.? <= 0 ) /*0x41ecaa*/
    return v11; /*0x41ecaa*/
  while ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)stru_A80220.? + v4) + 52) + 188) != HouseTypeClass::Find(&g_INI_Key_Civilian) ) /*0x41eccc*/
  {
    if ( ++v4 >= stru_A80220.? ) /*0x41ecd6*/
      return 0; /*0x41ece2*/
  }
  v6 = *((_DWORD *)stru_A80220.? + v4); /*0x41ece5*/
  if ( !v6 ) /*0x41ecea*/
    return v11; /*0x41ee23*/
  AITriggerTypeClass_field_0x18 = v3[3].AITriggerTypeClass_field_0x18; /*0x41ecf0*/
  if ( AITriggerTypeClass_field_0x18 ) /*0x41ecf8*/
  {
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)AITriggerTypeClass_field_0x18 + 64))(AITriggerTypeClass_field_0x18); /*0x41ed0a*/
    v9 = 0; /*0x41ed0c*/
    switch ( (*(int (__thiscall **)(int))(*(_DWORD *)AITriggerTypeClass_field_0x18 + 44))(AITriggerTypeClass_field_0x18) ) /*0x41ed21*/
    {
      case 3: /*0x41ed21*/
        v9 = DynamicVector::GetOrGrow((DynamicVector *)(v6 + 21900), v8); /*0x41ed73*/
        goto LABEL_12; /*0x41ed73*/
      case 7: /*0x41ed21*/
        v10 = DynamicVector::GetOrGrow((DynamicVector *)(v6 + 21840), v8); /*0x41ed2f*/
        v3 = this; /*0x41ed37*/
        break; /*0x41ed3b*/
      case 16: /*0x41ed21*/
        v10 = DynamicVector::GetOrGrow((DynamicVector *)(v6 + 21880), v8); /*0x41ed59*/
        v3 = this; /*0x41ed61*/
        break; /*0x41ed65*/
      case 40: /*0x41ed21*/
        v10 = DynamicVector::GetOrGrow((DynamicVector *)(v6 + 21860), v8); /*0x41ed44*/
        v3 = this; /*0x41ed4c*/
        break; /*0x41ed50*/
      default:
LABEL_12:
        v10 = v9; /*0x41ed75*/
        v3 = this; /*0x41ed77*/
        break; /*0x41ed7c*/
    }
  }
  else
  {
    v10 = 0; /*0x41ed7e*/
  }
  switch ( v3[3].AITriggerTypeClass_field_0x28 ) /*0x41ed8f*/
  {
    case 0: /*0x41ed8f*/
      result = v10 < v3[3].AITriggerTypeClass_field_0x24; /*0x41eda5*/
      break; /*0x41edad*/
    case 1: /*0x41ed8f*/
      result = v10 <= v3[3].AITriggerTypeClass_field_0x24; /*0x41edbf*/
      break; /*0x41edc7*/
    case 2: /*0x41ed8f*/
      result = v10 == v3[3].AITriggerTypeClass_field_0x24; /*0x41edd9*/
      break; /*0x41ede1*/
    case 3: /*0x41ed8f*/
      result = v10 >= v3[3].AITriggerTypeClass_field_0x24; /*0x41edf3*/
      break; /*0x41edfb*/
    case 4: /*0x41ed8f*/
      result = v10 > v3[3].AITriggerTypeClass_field_0x24; /*0x41ee0d*/
      break; /*0x41ee15*/
    case 5: /*0x41ed8f*/
      return v10 != v3[3].AITriggerTypeClass_field_0x24; /*0x41ee1e*/
    default:
      return v11;
  }
  return result; /*0x41ecdc*/
}



// ==== 0x0041EE90  AITriggerTypeClass::OwnerHouseOwns  this=AITriggerTypeClass  sig=csp ====
bool __thiscall AITriggerTypeClass::OwnerHouseOwns(AITriggerTypeClass *this, _DWORD *a2, int a3)
{
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int v7; // eax
  bool result; // al
  bool v9; // [esp+7h] [ebp-1h]

  v9 = 0; /*0x41ee9a*/
  if ( !a2 ) /*0x41ee9f*/
    return v9; /*0x41efcb*/
  v4 = *((_DWORD *)this + 54); /*0x41eea6*/
  if ( v4 ) /*0x41eeae*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 64))(v4); /*0x41eec1*/
    v6 = 0; /*0x41eec3*/
    switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) ) /*0x41eed8*/
    {
      case 3: /*0x41eed8*/
        v6 = DynamicVector::GetOrGrow((DynamicVector *)(a2 + 5475), v5); /*0x41ef31*/
        goto LABEL_8; /*0x41ef31*/
      case 7: /*0x41eed8*/
        v7 = DynamicVector::GetOrGrow((DynamicVector *)(a2 + 5460), v5); /*0x41eeea*/
        break; /*0x41eef3*/
      case 16: /*0x41eed8*/
        v7 = DynamicVector::GetOrGrow((DynamicVector *)(a2 + 5470), v5); /*0x41ef16*/
        break; /*0x41ef1f*/
      case 40: /*0x41eed8*/
        v7 = DynamicVector::GetOrGrow((DynamicVector *)(a2 + 5465), v5); /*0x41ef00*/
        break; /*0x41ef09*/
      default:
LABEL_8:
        v7 = v6; /*0x41ef33*/
        break; /*0x41ef37*/
    }
  }
  else
  {
    v7 = 0; /*0x41ef39*/
  }
  switch ( this->q03A ) /*0x41ef4b*/
  {
    case 0: /*0x41ef4b*/
      result = v7 < *((_DWORD *)this + 57); /*0x41ef60*/
      break; /*0x41ef65*/
    case 1: /*0x41ef4b*/
      result = v7 <= *((_DWORD *)this + 57); /*0x41ef76*/
      break; /*0x41ef7b*/
    case 2: /*0x41ef4b*/
      result = v7 == *((_DWORD *)this + 57); /*0x41ef8c*/
      break; /*0x41ef91*/
    case 3: /*0x41ef4b*/
      result = v7 >= *((_DWORD *)this + 57); /*0x41efa2*/
      break; /*0x41efa7*/
    case 4: /*0x41ef4b*/
      result = v7 > *((_DWORD *)this + 57); /*0x41efb8*/
      break; /*0x41efbd*/
    case 5: /*0x41ef4b*/
      return v7 != *((_DWORD *)this + 57); /*0x41efc6*/
    default:
      return v9;
  }
  return result; /*0x41ef58*/
}



// ==== 0x0041F0D0  AITriggerTypeClass::IronCurtainCharged  this=AITriggerTypeClass  sig=csp ====
bool __stdcall AITriggerTypeClass::IronCurtainCharged(int a1, int a2)
{
  int v2; // edx
  int v3; // eax
  int i; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // [esp+8h] [ebp+4h]

  if ( !a1 ) /*0x41f0d9*/
    return 0; /*0x41f0d9*/
  v2 = *(_DWORD *)(a1 + 612); /*0x41f0db*/
  v3 = 0; /*0x41f0e1*/
  if ( v2 <= 0 ) /*0x41f0e5*/
    return 0; /*0x41f0e5*/
  for ( i = *(_DWORD *)(a1 + 600); *(_DWORD *)(*(_DWORD *)(*(_DWORD *)i + 40) + 180) != 1; i += 4 ) /*0x41f0ed*/
  {
    if ( ++v3 >= v2 ) /*0x41f103*/
      return 0; /*0x41f103*/
  }
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 600) + 4 * v3); /*0x41f10d*/
  if ( !v6 || !*(_BYTE *)(v6 + 109) ) /*0x41f114*/
    return 0; /*0x41f119*/
  v7 = *(_DWORD *)(v6 + 48); /*0x41f11b*/
  v8 = *(_DWORD *)(v6 + 56); /*0x41f11e*/
  if ( v7 == -1 ) /*0x41f124*/
    goto LABEL_12; /*0x41f124*/
  if ( (int)dword_A8ED84 - v7 < v8 ) /*0x41f130*/
  {
    v8 -= (int)dword_A8ED84 - v7; /*0x41f132*/
LABEL_12:
    v9 = v8; /*0x41f134*/
    return 1.0 - *(float *)&dword_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((_DWORD *)v6); /*0x41f134*/
  }
  v9 = 0; /*0x41f171*/
  return 1.0 - *(float *)&dword_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((_DWORD *)v6); /*0x41f167*/
}



// ==== 0x0041F180  AITriggerTypeClass::ChronoSphereCharged  this=AITriggerTypeClass  sig=csp ====
bool __stdcall AITriggerTypeClass::ChronoSphereCharged(int a1, int a2)
{
  int v2; // edx
  int v3; // eax
  int i; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // [esp+8h] [ebp+4h]

  if ( !a1 ) /*0x41f189*/
    return 0; /*0x41f189*/
  v2 = *(_DWORD *)(a1 + 612); /*0x41f18b*/
  v3 = 0; /*0x41f191*/
  if ( v2 <= 0 ) /*0x41f195*/
    return 0; /*0x41f195*/
  for ( i = *(_DWORD *)(a1 + 600); *(_DWORD *)(*(_DWORD *)(*(_DWORD *)i + 40) + 180) != 3; i += 4 ) /*0x41f19d*/
  {
    if ( ++v3 >= v2 ) /*0x41f1b3*/
      return 0; /*0x41f1b3*/
  }
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 600) + 4 * v3); /*0x41f1bd*/
  if ( !v6 || !*(_BYTE *)(v6 + 109) ) /*0x41f1c4*/
    return 0; /*0x41f1c9*/
  v7 = *(_DWORD *)(v6 + 48); /*0x41f1cb*/
  v8 = *(_DWORD *)(v6 + 56); /*0x41f1ce*/
  if ( v7 == -1 ) /*0x41f1d4*/
    goto LABEL_12; /*0x41f1d4*/
  if ( (int)dword_A8ED84 - v7 < v8 ) /*0x41f1e0*/
  {
    v8 -= (int)dword_A8ED84 - v7; /*0x41f1e2*/
LABEL_12:
    v9 = v8; /*0x41f1e4*/
    return 1.0 - *(float *)&dword_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((_DWORD *)v6); /*0x41f1e4*/
  }
  v9 = 0; /*0x41f221*/
  return 1.0 - *(float *)&dword_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((_DWORD *)v6); /*0x41f217*/
}



// ==== 0x0041F230  AITriggerTypeClass::HouseCredits  this=AITriggerTypeClass  sig=csp ====
bool __thiscall AITriggerTypeClass::HouseCredits(AITriggerTypeClass *this, int a2, int a3)
{
  bool v3; // bl
  int v5; // eax
  bool result; // al

  v3 = 0; /*0x41f235*/
  if ( !a3 ) /*0x41f23c*/
    return v3; /*0x41f2bd*/
  v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(a3 + 36) + 24))(a3 + 36); /*0x41f245*/
  switch ( this->q03A ) /*0x41f253*/
  {
    case 0: /*0x41f253*/
      result = v5 < *((_DWORD *)this + 57); /*0x41f266*/
      break; /*0x41f269*/
    case 1: /*0x41f253*/
      result = v5 <= *((_DWORD *)this + 57); /*0x41f278*/
      break; /*0x41f27b*/
    case 2: /*0x41f253*/
      result = v5 == *((_DWORD *)this + 57); /*0x41f28a*/
      break; /*0x41f28d*/
    case 3: /*0x41f253*/
      result = v5 >= *((_DWORD *)this + 57); /*0x41f29c*/
      break; /*0x41f29f*/
    case 4: /*0x41f253*/
      result = v5 > *((_DWORD *)this + 57); /*0x41f2ae*/
      break; /*0x41f2b1*/
    case 5: /*0x41f253*/
      return v5 != *((_DWORD *)this + 57); /*0x41f2ba*/
    default:
      return v3;
  }
  return result; /*0x41f260*/
}



// ==== 0x0041F2E0  CCINIClass::ReadTypeList  this=INIClass  sig=csp ====
int __fastcall CCINIClass::ReadTypeList(char *a1, int a2)
{
  int v2; // edi
  int result; // eax
  int v5; // ebp
  char *StringByIndex; // esi
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // ebp
  char *v11; // edi
  int v12; // esi
  int v13; // esi
  int v14; // [esp+10h] [ebp-8h]
  int i; // [esp+10h] [ebp-8h]

  v2 = a2; /*0x41f2ec*/
  result = INIClass::GetKeyCount(a1, (unsigned __int8 *)aAitriggertypes); /*0x41f2f5*/
  v5 = 0; /*0x41f2fa*/
  v14 = result; /*0x41f2fe*/
  while ( v5 < v14 ) /*0x41f302*/
  {
    StringByIndex = (char *)INIClass::GetStringByIndex(a1, (unsigned __int8 *)aAitriggertypes, v5); /*0x41f317*/
    if ( _strcmpi(g_Str__none_, StringByIndex) ) /*0x41f31f*/
    {
      if ( _strcmpi(g_Str_none, StringByIndex) ) /*0x41f335*/
      {
        v8 = 0; /*0x41f34a*/
        if ( dword_A8B210 > 0 ) /*0x41f34e*/
        {
          while ( _strcmpi((char *)(*((_DWORD *)dword_A8B204 + v8) + 36), StringByIndex) ) /*0x41f368*/
          {
            if ( ++v8 >= dword_A8B210 ) /*0x41f376*/
              goto LABEL_9; /*0x41f376*/
          }
          v7 = (_DWORD *)*((_DWORD *)dword_A8B204 + v8); /*0x41f431*/
          goto LABEL_11; /*0x41f434*/
        }
LABEL_9:
        v9 = (_DWORD *)__2_YAPAXI_Z(0x110u); /*0x41f378*/
        if ( v9 ) /*0x41f387*/
        {
          v7 = AnimTypeClass::Construct2(v9, StringByIndex); /*0x41f391*/
LABEL_11:
          if ( v7 ) /*0x41f395*/
          {
            (*(void (__thiscall **)(_DWORD *, char *))(*v7 + 100))(v7, a1); /*0x41f39c*/
            v7[39] = a2; /*0x41f3a3*/
          }
          goto LABEL_13; /*0x41f3a3*/
        }
      }
      v7 = 0; /*0x41f341*/
    }
    else
    {
      v7 = 0; /*0x41f32b*/
    }
LABEL_13:
    v2 = a2; /*0x41f3a9*/
    if ( a2 == 1 ) /*0x41f3b0*/
      *((_BYTE *)v7 + 164) = 1; /*0x41f3b2*/
    result = v14; /*0x41f3b9*/
    ++v5; /*0x41f3bd*/
  }
  if ( !v2 ) /*0x41f3c8*/
  {
    result = INIClass::GetKeyCount(a1, (unsigned __int8 *)aAitriggertypes_0); /*0x41f3d7*/
    v10 = 0; /*0x41f3dc*/
    for ( i = result; v10 < i; ++v10 ) /*0x41f3e4*/
    {
      v11 = (char *)INIClass::GetStringByIndex(a1, (unsigned __int8 *)aAitriggertypes_0, v10); /*0x41f3f9*/
      v12 = 0; /*0x41f400*/
      if ( dword_A8B210 > 0 ) /*0x41f404*/
      {
        while ( _strcmpi((char *)(*((_DWORD *)dword_A8B204 + v12) + 36), v11) ) /*0x41f41d*/
        {
          if ( ++v12 >= dword_A8B210 ) /*0x41f427*/
            goto LABEL_28; /*0x41f427*/
        }
        v13 = *((_DWORD *)dword_A8B204 + v12); /*0x41f43f*/
        if ( v13 ) /*0x41f444*/
          *(_BYTE *)(v13 + 164) = (unsigned __int8)INIClass::ReadBool_Overwrite( /*0x41f46c*/
                                                     (int *)a1,
                                                     (unsigned __int8 *)aAitriggertypes_0,
                                                     (unsigned __int8 *)v11,
                                                     0)
                               || dword_A8B238[0];
      }
LABEL_28:
      result = i; /*0x41f473*/
    }
  }
  return result; /*0x41f480*/
}



// ==== 0x0041F490  CCINIClass::ReadInfantryTypeList  this=CCINIClass  sig=csp ====
int __fastcall CCINIClass::ReadInfantryTypeList(INIClass *a1, int a2)
{
  int KeyCount; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // eax
  int result; // eax
  int j; // edi
  _DWORD *v9; // ecx
  int k; // edi
  char Destination[32]; // [esp+10h] [ebp-20h] BYREF

  KeyCount = INIClass::GetKeyCount(a1->__pad_0, (unsigned __int8 *)aAitriggertypes); /*0x41f4a6*/
  for ( i = 0; i < KeyCount; ++i ) /*0x41f4ac*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1->__pad_0, (unsigned __int8 *)aAitriggertypes, i); /*0x41f4b8*/
    INIClass::GetString(a1, (unsigned __int8 *)aAitriggertypes, StringByIndex, &g_INI_DefaultBuffer, Destination, 32); /*0x41f4d2*/
    INIClass::ClearSection((int *)a1->__pad_0, (int)Destination, 0); /*0x41f4e0*/
  }
  INIClass::ClearSection((int *)a1->__pad_0, (int)aAitriggertypes, 0); /*0x41f4f5*/
  result = dword_A8B210; /*0x41f4fa*/
  for ( j = 0; j < dword_A8B210; ++j ) /*0x41f503*/
  {
    v9 = (_DWORD *)*((_DWORD *)dword_A8B204 + j); /*0x41f50a*/
    if ( v9[39] == a2 ) /*0x41f513*/
      (*(void (__thiscall **)(_DWORD *, INIClass *))(*v9 + 104))(v9, a1); /*0x41f518*/
    result = dword_A8B210; /*0x41f51b*/
  }
  if ( !a2 ) /*0x41f527*/
  {
    INIClass::ClearSection((int *)a1->__pad_0, (int)aAitriggertypes_0, 0); /*0x41f532*/
    result = dword_A8B210; /*0x41f537*/
    for ( k = 0; k < dword_A8B210; ++k ) /*0x41f540*/
    {
      INIClass::SetBool( /*0x41f55e*/
        a1->__pad_0,
        (unsigned __int8 *)aAitriggertypes_0,
        (char *)(*((_DWORD *)dword_A8B204 + k) + 36),
        *(_BYTE *)(*((_DWORD *)dword_A8B204 + k) + 164));
      result = dword_A8B210; /*0x41f563*/
    }
  }
  return result; /*0x41f56d*/
}



// ==== 0x0041F580  AITriggerTypeClass::LoadFromINI  this=AITriggerTypeClass  sig=csp ====
char __thiscall AITriggerTypeClass::LoadFromINI(AITriggerTypeClass *this, unsigned __int8 ***a2)
{
  double v2; // st7
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  int v7; // eax
  char *v8; // eax
  char *v9; // eax
  int v10; // esi
  int ExitCellByName; // eax
  int Index; // eax
  _DWORD *v13; // edx
  int v14; // eax
  char *v15; // eax
  unsigned int v16; // edi
  bool v17; // zf
  char *v18; // esi
  int v19; // ecx
  char v20; // dl
  char v21; // al
  char *v22; // eax
  unsigned int v23; // eax
  char *v25; // eax
  unsigned int v26; // eax
  char *v28; // eax
  unsigned int v29; // eax
  char *v31; // eax
  char *v32; // eax
  char *v33; // eax
  char *v34; // eax
  char *v35; // eax
  char *v36; // eax
  char *v37; // eax
  int v38; // eax
  int v39; // esi
  int MaxBuildLevel; // eax
  int v41; // eax
  int v42; // esi
  char v44[4]; // [esp+10h] [ebp-270h] BYREF
  __int64 v45; // [esp+14h] [ebp-26Ch] BYREF
  SuperWeaponTypeClass v46[2]; // [esp+1Ch] [ebp-264h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x41f595*/
  if ( !INIClass::GetString( /*0x41f5b9*/
          (INIClass *)a2,
          (unsigned __int8 *)aAitriggertypes,
          (unsigned __int8 *)&this->AITriggerTypeClass_field_0x24,
          &g_INI_DefaultBuffer,
          v46[0].?,
          512) )
    return 0; /*0x41f5b9*/
  v4 = strtok(v46[0].?, Str); /*0x41f5d3*/
  if ( !v4 ) /*0x41f5df*/
    return 0; /*0x41f5df*/
  strncpy(&v46[0].?[8], v4, 0x30u); /*0x41f5ed*/
  LOBYTE(v46[0].?) = 0; /*0x41f5fe*/
  if ( &v46[0].?[8] != (char *)this + 100 ) /*0x41f602*/
  {
    qmemcpy((char *)this + 100, &v46[0].?[8], 0x30u); /*0x41f60d*/
    *((_BYTE *)this + 148) = v46[0].?; /*0x41f60f*/
  }
  v5 = strtok(0, Str); /*0x41f616*/
  if ( !v5 ) /*0x41f620*/
    return 0; /*0x41f620*/
  strncpy((char *)v46, v5, 0x18u); /*0x41f62e*/
  HIBYTE(v46[0].?) = 0; /*0x41f63a*/
  String::Trim((char *)v46); /*0x41f63e*/
  *((_DWORD *)this + 55) = 0; /*0x41f643*/
  if ( _strcmpi((char *)v46, (char *)off_818114) ) /*0x41f655*/
    *((_DWORD *)this + 55) = TeamTypeClass::FindByName((TeamTypeClass *)v46); /*0x41f66a*/
  v6 = strtok(0, Str); /*0x41f676*/
  if ( !v6 ) /*0x41f680*/
    return 0; /*0x41f680*/
  strncpy((char *)v46, v6, 0x18u); /*0x41f68e*/
  HIBYTE(v46[0].?) = 0; /*0x41f69a*/
  String::Trim((char *)v46); /*0x41f69e*/
  this->u32_28 = 0; /*0x41f6a3*/
  *((_DWORD *)this + 42) = -1; /*0x41f6a9*/
  if ( _strcmpi((char *)v46, (char *)off_818118) ) /*0x41f6bf*/
  {
    if ( _strcmpi((char *)v46, (char *)off_818114) ) /*0x41f6e2*/
    {
      v7 = SuperWeaponTypeClass::FindByName(v46); /*0x41f6f2*/
      *((_DWORD *)this + 42) = v7; /*0x41f6fa*/
      if ( v7 != -1 ) /*0x41f700*/
        this->u32_28 = 1; /*0x41f702*/
    }
  }
  else
  {
    this->u32_28 = 2; /*0x41f6cb*/
  }
  if ( !strtok(0, Str) ) /*0x41f712*/
    return 0; /*0x41f712*/
  this->q02C = 0; /*0x41f728*/
  v8 = strtok(0, Str); /*0x41f72e*/
  if ( !v8 ) /*0x41f738*/
    return 0; /*0x41f738*/
  *((_DWORD *)this + 38) = atoi(v8); /*0x41f74a*/
  v9 = strtok(0, Str); /*0x41f750*/
  if ( !v9 ) /*0x41f75a*/
    return 0; /*0x41f75a*/
  strncpy((char *)v46, v9, 0x18u); /*0x41f768*/
  HIBYTE(v46[0].?) = 0; /*0x41f774*/
  String::Trim((char *)v46); /*0x41f778*/
  v10 = 0; /*0x41f781*/
  ExitCellByName = Factory::FindExitCellByName((Factory *)v46); /*0x41f783*/
  if ( ExitCellByName != -1 ) /*0x41f78b*/
  {
    v10 = *((_DWORD *)dword_A8E34C + ExitCellByName); /*0x41f793*/
    goto LABEL_26; /*0x41f796*/
  }
  Index = BuildingTypeClass::FindIndex((BuildingTypeClass *)v46); /*0x41f79c*/
  if ( Index != -1 ) /*0x41f7a4*/
  {
    v13 = dword_A83CE4; /*0x41f7a6*/
LABEL_25:
    v10 = v13[Index]; /*0x41f7db*/
    goto LABEL_26; /*0x41f7db*/
  }
  v14 = TypeClass::FindByName((TypeClass *)v46); /*0x41f7b2*/
  if ( v14 != -1 ) /*0x41f7ba*/
  {
    v10 = *((_DWORD *)dword_A8B21C + v14); /*0x41f7c2*/
    goto LABEL_26; /*0x41f7c5*/
  }
  Index = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)v46); /*0x41f7cb*/
  if ( Index != -1 ) /*0x41f7d3*/
  {
    v13 = dword_A83C6C; /*0x41f7d5*/
    goto LABEL_25; /*0x41f7d5*/
  }
LABEL_26:
  *((_DWORD *)this + 54) = v10; /*0x41f7de*/
  v15 = strtok(0, Str); /*0x41f7ea*/
  if ( !v15 ) /*0x41f7f4*/
    return 0; /*0x41faf5*/
  strcpy(v44, "00"); /*0x41f807*/
  v16 = 0; /*0x41f80e*/
  v17 = *v15 == 0; /*0x41f810*/
  v18 = v15; /*0x41f812*/
  LODWORD(v45) = 0; /*0x41f818*/
  if ( !v17 ) /*0x41f81c*/
  {
    do /*0x41f876*/
    {
      if ( isspace(*v18) ) /*0x41f822*/
      {
        do /*0x41f834*/
          v19 = *++v18; /*0x41f82e*/
        while ( isspace(v19) ); /*0x41f834*/
      }
      v20 = *v18; /*0x41f840*/
      v21 = *++v18; /*0x41f842*/
      v44[0] = v20; /*0x41f848*/
      if ( v21 ) /*0x41f84c*/
      {
        v44[1] = v21; /*0x41f84e*/
        ++v18; /*0x41f852*/
      }
      else
      {
        v44[1] = 0; /*0x41f855*/
      }
      if ( v16 >= 0x20 ) /*0x41f85c*/
        break; /*0x41f85c*/
      *((_BYTE *)this + v16 + 228) = globalHelper_0C9DBD((int)v44, (int)&v45, 16); /*0x41f86f*/
      ++v16; /*0x41f87b*/
    }
    while ( *v18 ); /*0x41f876*/
  }
  v22 = strtok(0, Str); /*0x41f886*/
  if ( v22 ) /*0x41f890*/
  {
    atof(v22); /*0x41f893*/
    LOWORD(v23) = Math::RoundToInt(v2); /*0x41f89b*/
    v45 = v23; /*0x41f8a0*/
    __asm /*0x41f8a8*/
    {
      fild [esp+280h+var_26C]
      fstp qword ptr [ebp+0B8h]
    }
    *((double *)this + 23) = _RT1; /*0x41f8ac*/
  }
  v25 = strtok(0, Str); /*0x41f8b8*/
  if ( v25 ) /*0x41f8c2*/
  {
    atof(v25); /*0x41f8c5*/
    LOWORD(v26) = Math::RoundToInt(v2); /*0x41f8cd*/
    v45 = v26; /*0x41f8d2*/
    __asm /*0x41f8da*/
    {
      fild [esp+280h+var_26C]
      fstp qword ptr [ebp+0C0h]
    }
    *((double *)this + 24) = _RT1; /*0x41f8de*/
  }
  v28 = strtok(0, Str); /*0x41f8ea*/
  if ( v28 ) /*0x41f8f4*/
  {
    atof(v28); /*0x41f8f7*/
    LOWORD(v29) = Math::RoundToInt(v2); /*0x41f8ff*/
    v45 = v29; /*0x41f904*/
    __asm /*0x41f90c*/
    {
      fild [esp+280h+var_26C]
      fstp qword ptr [ebp+0C8h]
    }
    *((double *)this + 25) = _RT1; /*0x41f910*/
  }
  v31 = strtok(0, Str); /*0x41f91c*/
  if ( v31 ) /*0x41f926*/
    this->q034 = atoi(v31) != 0; /*0x41f936*/
  strtok(0, Str); /*0x41f942*/
  v32 = strtok(0, Str); /*0x41f94d*/
  if ( v32 ) /*0x41f957*/
    this->q02B = atoi(v32); /*0x41f962*/
  v33 = strtok(0, Str); /*0x41f96e*/
  if ( v33 ) /*0x41f978*/
    *((_BYTE *)this + 209) = atoi(v33) != 0; /*0x41f988*/
  v34 = strtok(0, Str); /*0x41f994*/
  if ( v34 ) /*0x41f99e*/
  {
    strncpy((char *)&v46[0].?, v34, 0x18u); /*0x41f9a8*/
    v46[0].?[7] = 0; /*0x41f9b4*/
    String::Trim((char *)&v46[0].?); /*0x41f9b8*/
    this->q038 = 0; /*0x41f9bd*/
    if ( _strcmpi((char *)&v46[0].?, (char *)off_818114) ) /*0x41f9cf*/
      this->q038 = TeamTypeClass::FindByName((TeamTypeClass *)&v46[0].?); /*0x41f9e4*/
  }
  v35 = strtok(0, Str); /*0x41f9f0*/
  if ( v35 ) /*0x41f9fa*/
    *((_BYTE *)this + 210) = atoi(v35) != 0; /*0x41fa0a*/
  v36 = strtok(0, Str); /*0x41fa16*/
  if ( v36 ) /*0x41fa20*/
    *((_BYTE *)this + 211) = atoi(v36) != 0; /*0x41fa30*/
  v37 = strtok(0, Str); /*0x41fa3c*/
  if ( v37 ) /*0x41fa46*/
    *((_BYTE *)this + 212) = atoi(v37) != 0; /*0x41fa56*/
  v38 = *((_DWORD *)this + 55); /*0x41fa5c*/
  if ( v38 ) /*0x41fa64*/
  {
    v39 = this->q02C; /*0x41fa6c*/
    if ( v39 <= HouseClass::GetMaxBuildLevel(*(HouseClass **)(v38 + 228)) ) /*0x41fa79*/
      MaxBuildLevel = HouseClass::GetMaxBuildLevel(*(HouseClass **)(*((_DWORD *)this + 55) + 228)); /*0x41fa8b*/
    else
      MaxBuildLevel = v39; /*0x41fa7b*/
    this->q02C = MaxBuildLevel; /*0x41fa90*/
  }
  v41 = this->q038; /*0x41fa96*/
  if ( v41 ) /*0x41fa9e*/
  {
    v42 = this->q02C; /*0x41faa6*/
    if ( v42 > HouseClass::GetMaxBuildLevel(*(HouseClass **)(v41 + 228)) ) /*0x41fab3*/
    {
      this->q02C = v42; /*0x41fab8*/
      return 1; /*0x41fac9*/
    }
    this->q02C = HouseClass::GetMaxBuildLevel(*(HouseClass **)(this->q038 + 228)); /*0x41fadd*/
  }
  return 1; /*0x41fab7*/
}



// ==== 0x0041FB10  AITriggerTypeClass::SaveToINI  this=AITriggerTypeClass  sig=csp ====
char __thiscall TriggerTypeClass::SaveToINI(AITriggerTypeClass *this, char *a2)
{
  void *v3; // ebp
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // edi
  char *v9; // ebx
  bool v10; // zf
  void *v12; // [esp+10h] [ebp-40Ch]
  void *v13; // [esp+14h] [ebp-408h]
  void *v14; // [esp+18h] [ebp-404h]
  char Buffer[512]; // [esp+1Ch] [ebp-400h] BYREF
  char Source[512]; // [esp+21Ch] [ebp-200h] BYREF

  v12 = off_818114; /*0x41fb20*/
  v13 = off_818114; /*0x41fb24*/
  v3 = off_818114; /*0x41fb28*/
  v14 = off_818114; /*0x41fb2a*/
  v4 = *((_DWORD *)this + 55); /*0x41fb2e*/
  if ( v4 ) /*0x41fb37*/
    v12 = (void *)(v4 + 36); /*0x41fb3c*/
  v5 = this->q038; /*0x41fb40*/
  if ( v5 ) /*0x41fb48*/
    v13 = (void *)(v5 + 36); /*0x41fb4d*/
  if ( this->u32_28 == 1 ) /*0x41fb58*/
  {
    v6 = *((_DWORD *)this + 42); /*0x41fb65*/
    if ( v6 != -1 ) /*0x41fb6e*/
      v3 = (void *)(*((_DWORD *)dword_A83C9C + v6) + 36); /*0x41fb79*/
  }
  else if ( this->u32_28 == 2 ) /*0x41fb5b*/
  {
    v3 = off_818118; /*0x41fb5d*/
  }
  v7 = *((_DWORD *)this + 54); /*0x41fb7c*/
  if ( v7 ) /*0x41fb84*/
    v14 = (void *)(v7 + 36); /*0x41fb89*/
  v8 = 0; /*0x41fb8d*/
  v9 = Buffer; /*0x41fb8f*/
  do /*0x41fbb2*/
  {
    sprintf(v9, &g_INI_Key_Civilian.uiNameLabel[15], *((unsigned __int8 *)this + v8++ + 228)); /*0x41fba3*/
    v9 += 2; /*0x41fbac*/
  }
  while ( v8 < 0x20 ); /*0x41fbb2*/
  v10 = *((_BYTE *)this + 212) == 0; /*0x41fbbc*/
  *v9 = 0; /*0x41fbbe*/
  sprintf( /*0x41fc64*/
    Source,
    (const char *const)&g_INI_Key_Civilian.?,
    (char *)this + 100,
    v12,
    v3,
    this->q02C,
    *((_DWORD *)this + 38),
    v14,
    Buffer,
    *((_DWORD *)this + 46),
    *((_DWORD *)this + 47),
    this->q030,
    this->q031,
    *((_DWORD *)this + 50),
    this->alignmentPadding,
    this->q034 != 0,
    0,
    this->q02B,
    *((_BYTE *)this + 209) != 0,
    v13,
    *((_BYTE *)this + 210) != 0,
    *((_BYTE *)this + 211) != 0,
    !v10);
  return INIClass::SetString( /*0x41fc8a*/
           a2,
           (unsigned __int8 *)aAitriggertypes,
           (char *)&this->AITriggerTypeClass_field_0x24,
           Source);
}



// ==== 0x0041FD30  ObjectClass::method_41FD30  this=ObjectClass  sig=csp ====
int __thiscall sub_41FD30(_DWORD *this, int a2)
{
  this->occupant = a2; /*0x41fd34*/
  return a2; /*0x41fd3a*/
}



// ==== 0x0041FD40  ObjectClass::method_41FD40  this=ObjectClass  sig=csp ====
int __thiscall sub_41FD40(_DWORD *this, int a2)
{
  *(this + 55) = a2; /*0x41fd44*/
  return a2; /*0x41fd4a*/
}



// ==== 0x0041FD50  ObjectClass::method_41FD50  this=ObjectClass  sig=csp ====
int __thiscall sub_41FD50(_DWORD *this, int a2)
{
  this->attachedBomb = a2; /*0x41fd54*/
  return a2; /*0x41fd5a*/
}



// ==== 0x0041FD60  AITriggerTypeClass::RegisterSuccess  this=AITriggerTypeClass  sig=csp ====
int __thiscall AITriggerTypeClass::RegisterSuccess(AITriggerTypeClass *this)
{
  int v1; // edx
  double v2; // st7
  double v3; // st7
  int result; // eax

  v1 = *((_DWORD *)this + 66); /*0x41fd61*/
  v2 = 0.0; /*0x41fd67*/
  if ( v1 > 0 ) /*0x41fd73*/
  {
    v2 = (double)*((int *)this + 66) * ((double)*((int *)this + 65) / (double)*((int *)this + 66) - 0.5); /*0x41fd89*/
    if ( v2 < 0.0 ) /*0x41fd96*/
      v2 = 0.0; /*0x41fd9a*/
  }
  v3 = v2 + *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 192) + *((double *)this + 23); /*0x41fdb1*/
  *((double *)this + 23) = v3; /*0x41fdb3*/
  if ( v3 < *((double *)this + 24) ) /*0x41fdc4*/
  {
    *((_DWORD *)this + 46) = this->q030; /*0x41fdcc*/
    *((_DWORD *)this + 47) = this->q031; /*0x41fdd8*/
  }
  if ( *((double *)this + 23) > *((double *)this + 25) ) /*0x41fdef*/
  {
    *((_DWORD *)this + 46) = *((_DWORD *)this + 50); /*0x41fdf7*/
    *((_DWORD *)this + 47) = this->alignmentPadding; /*0x41fe03*/
  }
  result = *((_DWORD *)this + 65) + 1; /*0x41fe0f*/
  *((_DWORD *)this + 65) = result; /*0x41fe11*/
  *((_DWORD *)this + 66) = v1 + 1; /*0x41fe17*/
  return result; /*0x41fe1e*/
}



// ==== 0x0041FE20  AITriggerTypeClass::RegisterFailure  this=AITriggerTypeClass  sig=csp ====
int __thiscall AITriggerTypeClass::RegisterFailure(AITriggerTypeClass *this)
{
  int v1; // edx
  double v2; // st7
  double v3; // st7
  int result; // eax
  __int16 v5; // fps
  double v6; // st7
  bool v7; // c0
  char v8; // c2
  bool v9; // c3

  v1 = *((_DWORD *)this + 66); /*0x41fe21*/
  v2 = 0.0; /*0x41fe28*/
  if ( v1 > 0 ) /*0x41fe3a*/
  {
    v2 = (double)v1 /*0x41fe56*/
       * (((double)*((int *)this + 65) / (double)v1 - 0.5)
        * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 208));
    if ( v2 > 0.0 ) /*0x41fe63*/
      v2 = 0.0; /*0x41fe67*/
  }
  v3 = v2 + *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 200) + *((double *)this + 23); /*0x41fe7a*/
  *((double *)this + 23) = v3; /*0x41fe7c*/
  if ( v3 < *((double *)this + 24) ) /*0x41fe8d*/
  {
    *((_DWORD *)this + 46) = this->q030; /*0x41fe95*/
    result = this->q031; /*0x41fe9b*/
    *((_DWORD *)this + 47) = result; /*0x41fea1*/
  }
  v6 = *((double *)this + 23); /*0x41fea7*/
  v7 = v6 < *((double *)this + 25); /*0x41fead*/
  v8 = 0; /*0x41fead*/
  v9 = v6 == *((double *)this + 25); /*0x41fead*/
  LOWORD(result) = v5; /*0x41feb3*/
  if ( v6 > *((double *)this + 25) ) /*0x41feb8*/
  {
    *((_DWORD *)this + 46) = *((_DWORD *)this + 50); /*0x41fec0*/
    result = this->alignmentPadding; /*0x41fec6*/
    *((_DWORD *)this + 47) = result; /*0x41fecc*/
  }
  *((_DWORD *)this + 66) = v1 + 1; /*0x41fed3*/
  return result; /*0x41fed9*/
}



// ==== 0x0041FEE0  globalHelper_01FEE0  this=-  sig=csp ====
bool __stdcall sub_41FEE0(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // edi
  _DWORD *v4; // esi
  int *CurrentOption; // eax
  int v6; // esi
  int v7; // edi
  int v8; // esi
  int TileIndex; // edi

  v3 = a1; /*0x41fee2*/
  if ( *(_BYTE *)(a1 + 240) ) /*0x41fee6*/
  {
    v4 = a3; /*0x41fef4*/
    if ( a3 ) /*0x41fefa*/
    {
      a3 = (_DWORD *)*HouseClass::GetCurrentOption(a2, &a2); /*0x41ff14*/
      CurrentOption = HouseClass::GetCurrentOption(v4, &a2); /*0x41ff1b*/
      v6 = *(_DWORD *)(v3 + 236); /*0x41ff22*/
      a1 = *CurrentOption; /*0x41ff28*/
      if ( !*(_BYTE *)(v3 + 241) ) /*0x41ff37*/
      {
        TileIndex = MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&a1, v6, 0); /*0x41ffa2*/
        return MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&a3, v6, 0) == TileIndex; /*0x41ffbd*/
      }
      v7 = MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&a1, v6, 0); /*0x41ff55*/
      if ( MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&a3, v6, 0) == v7 ) /*0x41ff5e*/
        return 0; /*0x41ff5e*/
      v8 = MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&a1, 5, 0); /*0x41ff81*/
      if ( MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&a3, 5, 0) != v8 ) /*0x41ff8a*/
        return 0; /*0x41ff90*/
    }
  }
  return 1; /*0x41ff8c*/
}



// ==== 0x0041FFD0  AITriggerTypeClass::GetTypeIdentifier  this=AITriggerTypeClass  sig=csp ====
int AITriggerTypeClass::GetTypeIdentifier(AITriggerTypeClass *this)
{
  return 59; /*0x41ffd5*/
}



// ==== 0x0041FFE0  AITriggerTypeClass::GetObjectSize  this=AITriggerTypeClass  sig=csp ====
int AITriggerTypeClass::GetObjectSize(AITriggerTypeClass *this)
{
  return 272; /*0x41ffe5*/
}



// ==== 0x0041FFF0  AITriggerTypeClass::ddtor  this=AITriggerTypeClass  sig=csp ====
_DWORD *__thiscall AITriggerTypeClass::ddtor(AITriggerTypeClass *this, char a2)
{
  int v3; // eax
  AITriggerTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &AITriggerTypeClass::`vftable'; /*0x41fffd*/
  this->AITriggerTypeClass_field_0x04 = (int)&AITriggerTypeClass::`vftable'; /*0x420003*/
  this->AITriggerTypeClass_field_0x08 = (int)&AITriggerTypeClass::`vftable'; /*0x42000a*/
  this->AITriggerTypeClass_field_0x0C = (int)&AITriggerTypeClass::`vftable'; /*0x420011*/
  v5 = this; /*0x42001f*/
  v3 = (*(int (__thiscall **)(_DWORD *, AITriggerTypeClass **))(dword_A8B200 + 16))(&dword_A8B200, &v5); /*0x420023*/
  if ( v3 != -1 && v3 < dword_A8B210 && v3 < --dword_A8B210 ) /*0x42003e*/
  {
    do /*0x420056*/
    {
      ++v3; /*0x420046*/
      *((_DWORD *)dword_A8B204 + v3 - 1) = *((_DWORD *)dword_A8B204 + v3); /*0x42004a*/
    }
    while ( v3 < dword_A8B210 ); /*0x420056*/
  }
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x42005a*/
  if ( (a2 & 1) != 0 ) /*0x420064*/
    __3_YAXPAX_Z(this); /*0x420067*/
  return this->__pad_0; /*0x420071*/
}



// ==== 0x00410070  sub_410070  this=-  sig=ida-proto ====
void sub_410070()
{
  dbl_887678 = Math::ArcTan((double)dword_8876C0 * 0.00390625); /*0x410087*/
}



// ==== 0x004100A0  sub_4100A0  this=-  sig=ida-proto ====
void sub_4100A0()
{
  dbl_887690 = Math::ArcTan((double)(2 * dword_8876C0) / dbl_887668); /*0x4100c2*/
}



// ==== 0x004100D0  sub_4100D0  this=-  sig=ida-proto ====
__int64 sub_4100D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8876C0) + 0.5); /*0x4100eb*/
  dword_8876B4 = result; /*0x4100f0*/
  return result; /*0x4100f6*/
}



// ==== 0x00410100  AbstractClass::initVtableBase  this=AbstractClass  sig=ida-proto ====
int AbstractClass::sub_410100()
{
  word_887660 = 0; /*0x410102*/
  word_887662 = 0; /*0x410108*/
  return 0; /*0x41010e*/
}



// ==== 0x00410110  sub_410110  this=-  sig=ida-proto ====
int sub_410110()
{
  dword_887680 = 0; /*0x410112*/
  dword_887684 = 0; /*0x410117*/
  dword_887688 = 0; /*0x41011c*/
  return 0; /*0x410121*/
}



// ==== 0x00410130  sub_410130  this=-  sig=ida-proto ====
int sub_410130()
{
  dword_8876B0 = 0; /*0x410135*/
  dword_8876A8 = 128; /*0x41013f*/
  dword_8876AC = 128; /*0x410144*/
  return 128; /*0x410149*/
}



// ==== 0x00410150  sub_410150  this=-  sig=ida-proto ====
int sub_410150()
{
  dword_887650 = 0; /*0x410152*/
  dword_887654 = 0; /*0x410157*/
  dword_887658 = 0; /*0x41015c*/
  dword_88765C = 0; /*0x410161*/
  return 0; /*0x410166*/
}



// ==== 0x00410170  AbstractClass::Constructor  this=AbstractClass  sig=csp ====
AbstractClass *__thiscall AbstractClass::Constructor(AbstractClass *this)
{
  AbstractClass *result; // eax
  char v2; // cl

  result = this; /*0x410170*/
  this->ptr_8 = &INoticeSink::`vftable'; /*0x410174*/
  this->ptr_C = &INoticeSource::`vftable'; /*0x41017b*/
  this->nextArrayIndex = 0; /*0x410182*/
  this->referenceCount = 0; /*0x410185*/
  LOBYTE(this->NeedsSaveOrLink) = 0; /*0x410188*/
  v2 = this->abstractFlags & 0xF8; /*0x41018e*/
  result->uniqueId = -1; /*0x410191*/
  result->ptr_0 = &AbstractClass::`vftable'; /*0x410198*/
  result->ptr_4 = &AbstractClass::`vftable'; /*0x41019e*/
  result->ptr_8 = &AbstractClass::`vftable'; /*0x4101a5*/
  result->ptr_C = &AbstractClass::`vftable'; /*0x4101ac*/
  LOBYTE(result->abstractFlags) = v2; /*0x4101b3*/
  return result; /*0x4101b6*/
}



// ==== 0x004101C0  AbstractClass::InitVtables  this=AbstractClass  sig=csp ====
_DWORD *__thiscall AbstractClass::InitVtables(AbstractClass *this, int a2)
{
  this->ptr_8 = &INoticeSink::`vftable'; /*0x4101c2*/
  this->ptr_C = &INoticeSource::`vftable'; /*0x4101c9*/
  this->ptr_0 = &AbstractClass::`vftable'; /*0x4101d0*/
  this->ptr_4 = &AbstractClass::`vftable'; /*0x4101d6*/
  this->ptr_8 = &AbstractClass::`vftable'; /*0x4101dd*/
  this->ptr_C = &AbstractClass::`vftable'; /*0x4101e4*/
  return &this->ptr_0; /*0x4101eb*/
}



// ==== 0x004101F0  AbstractClass::DTOR  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::DTOR(AbstractClass *this)
{
  int result; // eax

  this->ptr_0 = &AbstractClass::`vftable'; /*0x4101f0*/
  this->ptr_4 = &AbstractClass::`vftable'; /*0x4101f6*/
  this->ptr_8 = &AbstractClass::`vftable'; /*0x4101fd*/
  this->ptr_C = &AbstractClass::`vftable'; /*0x410204*/
  return result; /*0x41020b*/
}



// ==== 0x00410210  AbstractClass::Dispatch  this=AbstractClass  sig=csp ====
int __stdcall INoticeSink::Dispatch(AbstractClass *this)
{
  return (*(int (__thiscall **)(char *))(*((_DWORD *)this - 1) + 44))((char *)this - 4); /*0x41021d*/
}



// ==== 0x00410220  AbstractClass::GetVtable3  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::GetVtable3(AbstractClass *this)
{
  return (int)this->ptr_C; /*0x410227*/
}



// ==== 0x00410230  AbstractClass::GenerateUniqueID  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::GenerateUniqueID(AbstractClass *this)
{
  int result; // eax

  if ( dword_A8B230 ) /*0x410238*/
  {
    result = AbstractClass::updateAITimer(dword_A8B230); /*0x410246*/
    this->ptr_C = (void *)result; /*0x41024f*/
  }
  else
  {
    this->ptr_C = 0; /*0x410240*/
    return 0; /*0x41023e*/
  }
  return result; /*0x410243*/
}



// ==== 0x00410260  AbstractClass::QueryInterface  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::QueryInterface(AbstractClass *this)
{
  void **p_vtable1; // ecx
  AbstractClass *thisa; // [esp+8h] [ebp+4h]
  const void *iid; // [esp+Ch] [ebp+8h]
  void **ppv; // [esp+10h] [ebp+Ch]

  if ( !ppv ) /*0x410267*/
    return -2147467261; /*0x410269*/
  *ppv = 0; /*0x410286*/
  if ( !memcmp(iid, &IID_IUnknown, 0x10u) ) /*0x410290*/
    *ppv = thisa; /*0x410294*/
  if ( !memcmp(iid, &IID_IPersistStream, 0x10u) ) /*0x4102a5*/
    *ppv = thisa; /*0x4102a9*/
  if ( !memcmp(iid, &IID_IPersist, 0x10u) ) /*0x4102b9*/
    *ppv = thisa; /*0x4102be*/
  if ( !memcmp(iid, &IID_IRTTITypeInfo, 0x10u) ) /*0x4102ce*/
  {
    if ( thisa ) /*0x4102d6*/
      p_vtable1 = &thisa->ptr_4; /*0x4102d8*/
    else
      p_vtable1 = 0; /*0x4102dd*/
    *ppv = p_vtable1; /*0x4102df*/
  }
  if ( !*ppv ) /*0x4102e1*/
    return -2147467262; /*0x4102e6*/
  (*((void (__stdcall **)(AbstractClass *))thisa->ptr_0 + 1))(thisa); /*0x4102f2*/
  return 0; /*0x41026e*/
}



// ==== 0x00410300  AbstractClass::COMStub_AddRef  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_AddRef(AbstractClass *this)
{
  return 1; /*0x410305*/
}



// ==== 0x00410310  AbstractClass::COMStub_Release  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Release(AbstractClass *this)
{
  return 1; /*0x410315*/
}



// ==== 0x00410320  AbstractClass::SaveLoad_Prefix  this=ObjectTypeClass  sig=csp ====
int __stdcall AbstractClass::SaveLoad_Prefix(int *a1, int *a2, int a3)
{
  int *v3; // esi
  int result; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int *v8; // [esp-4h] [ebp-18h]

  v3 = a2; /*0x410321*/
  if ( !a2 ) /*0x410328*/
    return -2147467261; /*0x41032b*/
  v5 = *a2; /*0x410338*/
  v8 = a2; /*0x410343*/
  a2 = a1; /*0x410344*/
  result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v5 + 16))(v8, &a2, 4, 0); /*0x410348*/
  if ( result >= 0 ) /*0x41034d*/
  {
    v6 = *v3; /*0x410352*/
    v7 = (*(int (__thiscall **)(int *, _DWORD))(*a1 + 48))(a1, 0); /*0x410358*/
    result = (*(int (__stdcall **)(int *, int *, int))(v6 + 16))(v3, a1, v7); /*0x41035e*/
    if ( result >= 0 ) /*0x410364*/
    {
      if ( a3 ) /*0x41036c*/
        *((_BYTE *)a1 + 32) = 0; /*0x41036e*/
    }
  }
  return result; /*0x41032a*/
}



// ==== 0x00410380  AbstractClass::SaveLoad_Prefix_0  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::SaveLoad_Prefix_0(_DWORD *a1, int a2)
{
  int *v2; // edi
  int result; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // eax

  v2 = (int *)a2; /*0x410381*/
  if ( !a2 ) /*0x410387*/
    return -2147467261; /*0x410389*/
  result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &a2, 4, 0); /*0x41039e*/
  if ( result >= 0 ) /*0x4103a3*/
  {
    SwizzleManagerClass::Here_I_Am((int)&SwizzleManagerClass_Instance, a2, (int)a1); /*0x4103b7*/
    v4 = a1[7]; /*0x4103be*/
    v5 = *v2; /*0x4103c1*/
    v6 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 48))(a1, 0); /*0x4103c7*/
    result = (*(int (__stdcall **)(int *, _DWORD *, int))(v5 + 12))(v2, a1, v6); /*0x4103cd*/
    a1[7] = v4; /*0x4103d0*/
  }
  return result; /*0x41038e*/
}



// ==== 0x004103E0  AbstractClass::GetSizeMax  this=AbstractClass  sig=csp ====
int __thiscall ObjectClass::GetSizeMax(AbstractClass *this)
{
  int v2; // [esp+8h] [ebp+4h]
  _DWORD *v3; // [esp+Ch] [ebp+8h]

  if ( !v3 ) /*0x4103e7*/
    return -2147467261; /*0x4103e9*/
  *v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 48))(v2) + 4; /*0x4103fe*/
  v3[1] = 0; /*0x410400*/
  return 0; /*0x4103ee*/
}



// ==== 0x00410410  AbstractClass::ProcessPower  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::ProcessPower(AbstractClass *this)
{
  int v2; // ecx
  Power *v4; // [esp+Ch] [ebp+4h]

  Power::TimerProcess(this->uniqueId); /*0x41041e*/
  LOBYTE(v2) = this->NeedsSaveOrLink; /*0x410423*/
  return Power::FlagProcess(v4, v2); /*0x41042e*/
}



// ==== 0x00410440  AbstractClass::computeDistance  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::computeDistance(AbstractClass *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x410440*/
  return result; /*0x410442*/
}



// ==== 0x00410450  AbstractClass::IsClean  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::IsClean(AbstractClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return *(_BYTE *)(v2 + 32) == 0; /*0x41045e*/
}



// ==== 0x00410470  AbstractClass::StubReturnFalse  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::StubReturnFalse(AbstractClass *this)
{
  int result; // eax

  return result; /*0x410470*/
}



// ==== 0x00410480  AbstractClass::COMStub_Return0_10  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_10(AbstractClass *this)
{
  int result; // eax

  return result; /*0x410480*/
}



// ==== 0x00410490  AbstractClass::computeDistanceSquared  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::computeDistanceSquared(AbstractClass *this)
{
  return -1; /*0x410493*/
}



// ==== 0x004104A0  AbstractClass::COMStub_Return0_15  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_15(AbstractClass *this)
{
  return 0; /*0x4104a2*/
}



// ==== 0x004104B0  AbstractClass::COMStub_Return0_16  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_16(AbstractClass *this)
{
  return 0; /*0x4104b2*/
}



// ==== 0x004104C0  AbstractClass::GetInvalidCoord  this=AbstractClass  sig=csp ====
int __thiscall Map::GetInvalidCoord(AbstractClass *this)
{
  _DWORD *v2; // [esp+4h] [ebp+4h]

  *v2 = dword_887680; /*0x4104cc*/
  v2[1] = dword_887684; /*0x4104d4*/
  v2[2] = dword_887688; /*0x4104dd*/
  return (int)v2; /*0x4104e0*/
}



// ==== 0x004104F0  AbstractClass::GetCoordsEx  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::GetCoordsEx(AbstractClass *this)
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))this->ptr_0 + 18))(this, v3); /*0x4104fe*/
  *v4 = *v1; /*0x410508*/
  v4[1] = v1[1]; /*0x41050d*/
  v4[2] = v1[2]; /*0x410514*/
  return (int)v4; /*0x410510*/
}



// ==== 0x00410520  AbstractClass::COMStub_Return0_20  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_20(AbstractClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x410520*/
  return result; /*0x410522*/
}



// ==== 0x00410530  AbstractClass::COMStub_Return0_21  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_21(AbstractClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x410530*/
  return result; /*0x410532*/
}



// ==== 0x00410540  AbstractClass::GetCoords  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::GetCoords(AbstractClass *this)
{
  int *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  CoordStruct *out; // [esp+14h] [ebp+4h]

  v1 = (int *)(*(int (__thiscall **)(AbstractClass *, _BYTE *))(this->ptr_0 + 72))(this, v3); /*0x41054e*/
  out->vfptr = (void *)*v1; /*0x410558*/
  out[1].vfptr = (void *)v1[1]; /*0x41055d*/
  out[2].vfptr = (void *)v1[2]; /*0x410564*/
  return (int)out; /*0x410560*/
}



// ==== 0x00410570  AbstractClass::COMStub_Return0_23  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_23(AbstractClass *this)
{
  int result; // eax

  return result; /*0x410570*/
}



// ==== 0x00410580  AbstractClass::Stub1INoticeSink  this=AbstractClass  sig=csp ====
char __stdcall INoticeSink_Stub1(int a1, int a2)
{
  return 0; /*0x410582*/
}



// ==== 0x00410590  AbstractClass::COM_Stub_Return0  this=AbstractClass  sig=csp ====
void __stdcall COM_Stub_Return0(int a1)
{
  ; /*0x410590*/
}



// ==== 0x004105A0  AbstractClass::COMStub_8  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_8(AbstractClass *this)
{
  char v3; // [esp+8h] [ebp+4h]

  this->ptr_0 = &AbstractClass::`vftable'; /*0x4105a9*/
  this->ptr_4 = &AbstractClass::`vftable'; /*0x4105af*/
  this->ptr_8 = &AbstractClass::`vftable'; /*0x4105b6*/
  this->ptr_C = &AbstractClass::`vftable'; /*0x4105bd*/
  if ( (v3 & 1) != 0 ) /*0x4105c4*/
    __3_YAXPAX_Z(this); /*0x4105c7*/
  return (int)this; /*0x4105d1*/
}



// ==== 0x004105E0  AbstractClass::QueryInterface  this=AbstractClass  sig=csp ====
int __stdcall IRTTITypeInfo::QueryInterface(AbstractClass *this, const void *a2, _DWORD *a3)
{
  AbstractClass *v3; // ecx

  return AbstractClass::QueryInterface(v3);
}



// ==== 0x004105F0  AbstractClass::Dispatch  this=AbstractClass  sig=csp ====
int __stdcall INoticeSource::Dispatch(AbstractClass *this)
{
  AbstractClass *v1; // ecx

  return AbstractClass::COMStub_AddRef(v1);
}



// ==== 0x00410600  AbstractClass::g_var_326827  this=AbstractClass  sig=csp ====
int __stdcall XSurface::g_var_326827(AbstractClass *this)
{
  AbstractClass *v1; // ecx

  return AbstractClass::COMStub_Release(v1);
}



// ==== 0x00410610  sub_410610  this=-  sig=ida-proto ====
void sub_410610()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41061c*/
  dbl_8876D8 = Math::Sqrt(v0 + v0); /*0x41062e*/
}



// ==== 0x00410640  sub_410640  this=-  sig=ida-proto ====
void sub_410640()
{
  dbl_887728 = dbl_8876D8 / 60.0; /*0x41064c*/
}



// ==== 0x00410660  sub_410660  this=-  sig=ida-proto ====
void sub_410660()
{
  dbl_887710 = 1.0 / dbl_887728; /*0x41066c*/
}



// ==== 0x00410680  sub_410680  this=-  sig=ida-proto ====
void sub_410680()
{
  dbl_887708 = 0.0174532925199433 * 45.0; /*0x41068c*/
}



// ==== 0x004106A0  sub_4106A0  this=-  sig=ida-proto ====
void sub_4106A0()
{
  dbl_8876E0 = 0.0174532925199433 * 60.0; /*0x4106ac*/
}



// ==== 0x004106C0  sub_4106C0  this=-  sig=ida-proto ====
void sub_4106C0()
{
  dbl_8876C8 = 0.0174532925199433 * 90.0; /*0x4106cc*/
}



// ==== 0x004106E0  sub_4106E0  this=-  sig=ida-proto ====
__int64 sub_4106E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8876C8 - dbl_8876E0); /*0x4106f2*/
  result = Math::RoundToInt(v0 * dbl_8876D8 * 0.5); /*0x410706*/
  dword_887730 = result; /*0x41070b*/
  return result; /*0x410710*/
}



// ==== 0x00410720  sub_410720  this=-  sig=ida-proto ====
void sub_410720()
{
  dbl_8876E8 = Math::ArcTan((double)dword_887730 * 0.00390625); /*0x410737*/
}



// ==== 0x00410750  sub_410750  this=-  sig=ida-proto ====
void sub_410750()
{
  dbl_887700 = Math::ArcTan((double)(2 * dword_887730) / dbl_8876D8); /*0x410772*/
}



// ==== 0x00410780  sub_410780  this=-  sig=ida-proto ====
__int64 sub_410780()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_887730) + 0.5); /*0x41079b*/
  dword_887724 = result; /*0x4107a0*/
  return result; /*0x4107a6*/
}



// ==== 0x004107B0  sub_4107B0  this=-  sig=ida-proto ====
int sub_4107B0()
{
  word_8876D0 = 0; /*0x4107b2*/
  word_8876D2 = 0; /*0x4107b8*/
  return 0; /*0x4107be*/
}



// ==== 0x004107C0  sub_4107C0  this=-  sig=ida-proto ====
int sub_4107C0()
{
  dword_8876F0 = 0; /*0x4107c2*/
  dword_8876F4 = 0; /*0x4107c7*/
  dword_8876F8 = 0; /*0x4107cc*/
  return 0; /*0x4107d1*/
}



// ==== 0x004107E0  sub_4107E0  this=-  sig=ida-proto ====
int sub_4107E0()
{
  dword_887720 = 0; /*0x4107e5*/
  dword_887718 = 128; /*0x4107ef*/
  dword_88771C = 128; /*0x4107f4*/
  return 128; /*0x4107f9*/
}



// ==== 0x00410800  AbstractTypeClass::Constructor  this=CCFileClass  sig=csp ====
int __thiscall AbstractTypeClass::Constructor(int *this, char *Source)
{
  char *v3; // ebx
  int v4; // eax
  char Buffer[16]; // [esp+10h] [ebp-44h] BYREF
  char Destination[48]; // [esp+20h] [ebp-34h] BYREF
  char v8; // [esp+50h] [ebp-4h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x410809*/
  v3 = (char *)(this + 9); /*0x410812*/
  this->BufferOffset = 0; /*0x410817*/
  *((_BYTE *)this + 61) = 0; /*0x41081a*/
  this->tail_19 = 0; /*0x41081e*/
  *this = (int)&AbstractTypeClass::`vftable'; /*0x410822*/
  this->FilePointer = (int)&AbstractTypeClass::`vftable'; /*0x410829*/
  this->FileSize = (int)&AbstractTypeClass::`vftable'; /*0x410830*/
  this->Handle = (int)&AbstractTypeClass::`vftable'; /*0x410837*/
  if ( Source ) /*0x41083e*/
  {
    strncpy(Destination, Source, 0x18u); /*0x410895*/
    Destination[24] = 0; /*0x4108a3*/
    if ( Destination == v3 ) /*0x4108a8*/
      goto LABEL_9; /*0x4108a8*/
    goto LABEL_8; /*0x4108a8*/
  }
  sprintf(Buffer, "%08X", this); /*0x41084b*/
  if ( Buffer ) /*0x410859*/
  {
    strncpy(Destination, Buffer, 0x18u); /*0x41086d*/
    Destination[24] = 0; /*0x410875*/
  }
  else
  {
    Destination[0] = 0; /*0x41085b*/
  }
  if ( Destination != v3 ) /*0x410880*/
  {
LABEL_8:
    qmemcpy(v3, Destination, 0x18u); /*0x4108b5*/
    this->BufferMaxSize = Destination[24]; /*0x4108b7*/
  }
LABEL_9:
  if ( this == (int *)-36 ) /*0x4108ba*/
  {
    Destination[0] = 0; /*0x4108bc*/
  }
  else
  {
    strncpy(Destination, (const char *)this + 36, 0x30u); /*0x4108ca*/
    v8 = 0; /*0x4108d2*/
  }
  if ( Destination != (char *)(this + 25) ) /*0x4108e0*/
  {
    qmemcpy(this + 25, Destination, 0x30u); /*0x4108eb*/
    *((_BYTE *)this + 148) = v8; /*0x4108ed*/
  }
  this->FileNameAllocated = (int)&g_TypeClass_DefaultString; /*0x4108ee*/
  if ( dword_A8E978 < dword_A8E970 /*0x410929*/
    || (byte_A8E975 || !dword_A8E970)
    && dword_A8E97C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8E968 + 8))(
         &dword_A8E968,
         dword_A8E970 + dword_A8E97C,
         0) )
  {
    v4 = dword_A8E978++; /*0x410936*/
    *((_DWORD *)dword_A8E96C + v4) = this; /*0x410945*/
  }
  return (int)this; /*0x410948*/
}



// ==== 0x00410960  AbstractTypeClass::Init  this=AbstractTypeClass  sig=csp ====
int __thiscall AbstractTypeClass_Init(int this, int a2)
{
  char v3; // al

  AbstractClass::InitVtables((_DWORD *)this, a2); /*0x410968*/
  v3 = *(_BYTE *)(this + 61); /*0x41096d*/
  *(_DWORD *)this = &AbstractTypeClass::`vftable'; /*0x410975*/
  *(_DWORD *)(this + 4) = &AbstractTypeClass::`vftable'; /*0x41097b*/
  *(_DWORD *)(this + 8) = &AbstractTypeClass::`vftable'; /*0x410982*/
  *(_DWORD *)(this + 12) = &AbstractTypeClass::`vftable'; /*0x410989*/
  if ( v3 ) /*0x410990*/
    *(_DWORD *)(this + 96) = GetStringCSF((wchar_t *)(this + 61), 0, aDRa2mdpostAbst, 127); /*0x4109a0*/
  else
    *(_DWORD *)(this + 96) = &g_TypeClass_DefaultString; /*0x4109a9*/
  return this; /*0x4109a5*/
}



// ==== 0x004109C0  AbstractTypeClass::Dtor  this=AbstractTypeClass  sig=csp ====
int __thiscall AbstractTypeClass::Dtor(AbstractTypeClass *this)
{
  int v2; // eax
  AbstractTypeClass *v4; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &AbstractTypeClass::`vftable'; /*0x4109cd*/
  this->? = &AbstractTypeClass::`vftable'; /*0x4109d3*/
  this->? = &AbstractTypeClass::`vftable'; /*0x4109da*/
  this->? = &AbstractTypeClass::`vftable'; /*0x4109e1*/
  v4 = this; /*0x4109ef*/
  v2 = (*(int (__thiscall **)(_DWORD *, AbstractTypeClass **))(dword_A8E968 + 16))(&dword_A8E968, &v4); /*0x4109f3*/
  if ( v2 != -1 && v2 < dword_A8E978 && v2 < --dword_A8E978 ) /*0x410a0e*/
  {
    do /*0x410a26*/
    {
      ++v2; /*0x410a16*/
      *((_DWORD *)dword_A8E96C + v2 - 1) = *((_DWORD *)dword_A8E96C + v2); /*0x410a1a*/
    }
    while ( v2 < dword_A8E978 ); /*0x410a26*/
  }
  return AbstractClass::DTOR((AbstractClass *)this); /*0x410a2f*/
}



// ==== 0x00410A40  AbstractTypeClass::NameEquals  this=BuildingClass  sig=csp ====
BOOL __thiscall AbstractTypeClass::NameEquals(int this, void *a2)
{
  return _strcmpi(a2, (const void *)(this + 36)) == 0; /*0x410a56*/
}



// ==== 0x00410A60  AbstractTypeClass::LoadFromINI  this=AbstractTypeClass  sig=csp ====
int __thiscall AbstractTypeClass::LoadFromINI(AbstractTypeClass *this, unsigned __int8 ***a2)
{
  int result; // eax
  char *Name; // edi
  char *UINameLabel; // ebp
  char Destination[48]; // [esp+Ch] [ebp-434h] BYREF
  char v7; // [esp+3Ch] [ebp-404h]
  char Source[1024]; // [esp+40h] [ebp-400h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x410a74*/
  result = INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)this->__pad_24); /*0x410a7f*/
  if ( result ) /*0x410a86*/
  {
    Name = this->Name; /*0x410a91*/
    INIClass::GetString( /*0x410aa0*/
      (INIClass *)a2,
      (unsigned __int8 *)this->__pad_24,
      (unsigned __int8 *)g_INI_Key_Name,
      this->Name,
      Source,
      49);
    if ( Source ) /*0x410aab*/
    {
      strncpy(Destination, Source, 0x30u); /*0x410abf*/
      v7 = 0; /*0x410ac7*/
    }
    else
    {
      Destination[0] = (unsigned __int8)Source; /*0x410aad*/
    }
    if ( Destination != Name ) /*0x410ad2*/
    {
      qmemcpy(Name, Destination, 0x30u); /*0x410add*/
      this->Name[48] = v7; /*0x410adf*/
    }
    UINameLabel = this->UINameLabel; /*0x410aeb*/
    INIClass::GetString( /*0x410afb*/
      (INIClass *)a2,
      (unsigned __int8 *)this->__pad_24,
      (unsigned __int8 *)g_INI_Key_UIName,
      this->UINameLabel,
      Source,
      32);
    if ( Source ) /*0x410b06*/
    {
      strncpy(Destination, Source, 0x1Fu); /*0x410b1a*/
      Destination[31] = 0; /*0x410b22*/
    }
    else
    {
      Destination[0] = (unsigned __int8)Source; /*0x410b08*/
    }
    result = (int)Destination; /*0x410b27*/
    if ( Destination != UINameLabel ) /*0x410b2d*/
      qmemcpy(UINameLabel, Destination, 0x20u); /*0x410b3a*/
    if ( *UINameLabel ) /*0x410b3c*/
    {
      result = (int)GetStringCSF((wchar_t *)this->UINameLabel, 0, aDRa2mdpostAbst, 215); /*0x410b52*/
      this->UIName = (void *)result; /*0x410b58*/
    }
    else
    {
      this->UIName = &g_TypeClass_DefaultString; /*0x410b69*/
    }
    LOBYTE(result) = 1; /*0x410b5c*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x410b7f*/
  }
  return result; /*0x410b57*/
}



// ==== 0x00410B90  AbstractTypeClass::WriteINI  this=AbstractTypeClass  sig=csp ====
char __thiscall AbstractTypeClass::WriteINI(AbstractTypeClass *this, char *a2)
{
  unsigned __int8 *pad_24; // edi

  pad_24 = (unsigned __int8 *)this->__pad_24; /*0x410b9b*/
  INIClass::ClearSection((int *)a2, (int)this->__pad_24, 0); /*0x410ba1*/
  INIClass::SetString(a2, pad_24, g_INI_Key_Name, this->Name); /*0x410bb2*/
  if ( this->UINameLabel[0] ) /*0x410bb7*/
    INIClass::SetString(a2, pad_24, g_INI_Key_UIName, this->UINameLabel); /*0x410bca*/
  return 1; /*0x410bcf*/
}



// ==== 0x00410BE0  AbstractTypeClass::ProcessPower  this=AbstractTypeClass  sig=csp ====
int __thiscall AbstractTypeClass::ProcessPower(AbstractTypeClass *this, int *a2)
{
  AbstractClass::ProcessPower((AbstractClass *)this); /*0x410be9*/
  Checksum::AddString((Checksum *)a2, (unsigned __int8 *)this->__pad_24); /*0x410bf4*/
  Checksum::AddString((Checksum *)a2, (unsigned __int8 *)this->Name); /*0x410bff*/
  return Checksum::AddString((Checksum *)a2, (unsigned __int8 *)this->UINameLabel); /*0x410c0f*/
}



// ==== 0x00410C20  AbstractTypeClass::StubReturnFalse  this=AbstractTypeClass  sig=csp ====
int __thiscall AbstractTypeClass::StubReturnFalse(AbstractTypeClass *this)
{
  int result; // eax

  return result; /*0x410c20*/
}



// ==== 0x00410C30  AbstractTypeClass::ddtor  this=AbstractTypeClass  sig=csp ====
_DWORD *__thiscall AbstractTypeClass::ddtor(AbstractTypeClass *this, char a2)
{
  int v3; // eax
  AbstractTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &AbstractTypeClass::`vftable'; /*0x410c3d*/
  this->? = &AbstractTypeClass::`vftable'; /*0x410c43*/
  this->? = &AbstractTypeClass::`vftable'; /*0x410c4a*/
  this->? = &AbstractTypeClass::`vftable'; /*0x410c51*/
  v5 = this; /*0x410c5f*/
  v3 = (*(int (__thiscall **)(_DWORD *, AbstractTypeClass **))(dword_A8E968 + 16))(&dword_A8E968, &v5); /*0x410c63*/
  if ( v3 != -1 && v3 < dword_A8E978 && v3 < --dword_A8E978 ) /*0x410c7e*/
  {
    do /*0x410c96*/
    {
      ++v3; /*0x410c86*/
      *((_DWORD *)dword_A8E96C + v3 - 1) = *((_DWORD *)dword_A8E96C + v3); /*0x410c8a*/
    }
    while ( v3 < dword_A8E978 ); /*0x410c96*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x410c9a*/
  if ( (a2 & 1) != 0 ) /*0x410ca4*/
    __3_YAXPAX_Z(this); /*0x410ca7*/
  return &this->AbstractClass; /*0x410cb1*/
}



// ==== 0x00410CC0  sub_410CC0  this=-  sig=ida-proto ====
int sub_410CC0()
{
  dword_887738 = 0; /*0x410cc2*/
  dword_88773C = 0; /*0x410cc7*/
  dword_887740 = 0; /*0x410ccc*/
  dword_887744 = 0; /*0x410cd1*/
  return 0; /*0x410cd6*/
}



// ==== 0x00410CE0  BSurface::Construct  this=BSurface  sig=csp ====
_DWORD *__thiscall BSurface::Construct(BSurface *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  void *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  void *Buffer; // ecx

  v6 = a2; /*0x410ce5*/
  v7 = a4; /*0x410ce9*/
  v8 = a5; /*0x410cef*/
  this->q00B = a5; /*0x410cf3*/
  *(_DWORD *)this->XSurface = v6; /*0x410cf8*/
  v9 = a3; /*0x410cfa*/
  this->q00A = v7; /*0x410cfe*/
  this->? = v9; /*0x410d01*/
  this->? = v7; /*0x410d04*/
  this->? = v8; /*0x410d07*/
  this->Height = 2 * v7 * v8; /*0x410d0f*/
  v10 = __2_YAPAXI_Z(0x20u); /*0x410d17*/
  if ( v10 ) /*0x410d20*/
  {
    v11 = this->q00A; /*0x410d22*/
    v12 = this->q00B; /*0x410d25*/
    *(_DWORD *)(v10 + 4) = v11; /*0x410d28*/
    *(_DWORD *)(v10 + 8) = v12; /*0x410d30*/
    *(_DWORD *)(v10 + 12) = 0; /*0x410d38*/
    *(_DWORD *)v10 = &XSurface_Vtable; /*0x410d3b*/
    *(_DWORD *)(v10 + 16) = 2; /*0x410d41*/
    Buffer::Init((Buffer *)(v10 + 20), 0, 2 * v12 * v11); /*0x410d48*/
    *(_DWORD *)v10 = &BSurface_Vtable; /*0x410d4d*/
    v13 = (void *)v10; /*0x410d53*/
  }
  else
  {
    v13 = 0; /*0x410d57*/
  }
  v14 = this->q00A; /*0x410d5c*/
  a5 = this->q00B; /*0x410d5f*/
  this->Buffer = v13; /*0x410d63*/
  a2 = 0; /*0x410d66*/
  a3 = 0; /*0x410d6a*/
  a4 = v14; /*0x410d6e*/
  (*(void (__thiscall **)(void *, int *, int))(*(_DWORD *)v13 + 20))(v13, &a2, 127); /*0x410d7b*/
  v15 = (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this->Buffer + 92))(this->Buffer, 0, 0); /*0x410d89*/
  v16 = this->q00B; /*0x410d8c*/
  *((_DWORD *)this + 6) = v15; /*0x410d8f*/
  v17 = this->q00A * v16; /*0x410d92*/
  this->BytesPerPixel = 0; /*0x410d96*/
  *((_DWORD *)this + 9) = 0x8000; /*0x410d99*/
  v18 = v15 + 2 * v17; /*0x410da0*/
  Buffer = this->Buffer; /*0x410da3*/
  *((_DWORD *)this + 7) = v18; /*0x410da6*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)Buffer + 96))(Buffer); /*0x410dab*/
  return this->XSurface; /*0x410db0*/
}



// ==== 0x00410DC0  ObjectClass::method_410DC0  this=ObjectClass  sig=csp ====
int __thiscall sub_410DC0(ObjectClass *this, int a2, int a3, int a4, int a5, int a6)
{
  _WORD *v8; // edi
  __int16 *v9; // esi
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  __int16 v14; // dx
  int v16; // [esp+14h] [ebp+4h]

  v8 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 92))(a2, a3, a4); /*0x410de2*/
  v9 = (__int16 *)(this->? + this->?); /*0x410de9*/
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x410deb*/
  v11 = a5; /*0x410df1*/
  v12 = v10 / 2 - a5; /*0x410df7*/
  if ( v8 && a6 > 0 ) /*0x410e03*/
  {
    v16 = a6; /*0x410e05*/
    do /*0x410e38*/
    {
      if ( v11 > 0 ) /*0x410e0b*/
      {
        v13 = v11; /*0x410e0d*/
        do /*0x410e26*/
        {
          v14 = *v9++; /*0x410e0f*/
          *v8++ = v14; /*0x410e15*/
          if ( (unsigned int)v9 >= this->? ) /*0x410e20*/
            v9 = (__int16 *)((char *)v9 - (unsigned int)this->?); /*0x410e22*/
          --v13; /*0x410e25*/
        }
        while ( v13 ); /*0x410e26*/
        v11 = a5; /*0x410e28*/
      }
      v8 += v12; /*0x410e30*/
      --v16; /*0x410e34*/
    }
    while ( v16 ); /*0x410e38*/
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x410e42*/
}



// ==== 0x00410E50  StreamObj::Release  this=StreamObj  sig=csp ====
int __thiscall StreamObj::Release(StreamObj *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = (int (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 5); /*0x410e53*/
  if ( v2 ) /*0x410e58*/
    result = (**v2)(v2, 1); /*0x410e5e*/
  *((_DWORD *)this + 5) = 0; /*0x410e60*/
  return result; /*0x410e67*/
}



// ==== 0x00410E70  sub_410E70  this=-  sig=csp ====
char *__stdcall sub_410E70(char *a1, int a2, unsigned __int16 a3)
{
  char *v3; // edx
  int v4; // ebx
  char *result; // eax
  unsigned int v6; // esi

  v3 = a1; /*0x410e70*/
  v4 = a2; /*0x410e75*/
  if ( ((unsigned __int8)a1 & 2) != 0 && a2 ) /*0x410e86*/
  {
    *(_WORD *)a1 = a3; /*0x410e88*/
    v3 = a1 + 2; /*0x410e8b*/
    v4 = a2 - 1; /*0x410e8e*/
  }
  result = 0; /*0x410e91*/
  v6 = v4 >> 1; /*0x410e96*/
  if ( v4 >> 1 ) /*0x410e96*/
  {
    memset32(v3, 65537 * a3, v6); /*0x410eae*/
    result = &v3[4 * v6]; /*0x410eb0*/
  }
  if ( (v4 & 1) != 0 ) /*0x410eb7*/
  {
    if ( result ) /*0x410ebb*/
      *(_WORD *)result = a3; /*0x410ebd*/
  }
  return result; /*0x410ec0*/
}



// ==== 0x00410ED0  Buffer::FillCircularBufferScroll  this=Buffer  sig=csp ====
char *__thiscall Buffer::FillCircularBufferScroll(Buffer *this, int a2, int a3, unsigned __int16 a4)
{
  signed int v5; // ebx
  char *result; // eax
  int v8; // edi
  unsigned int Buffer_field_18; // edx
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // edi
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int Buffer_field_10; // ecx
  int v25; // ebx
  int v26; // edx
  int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // edx
  unsigned int v30; // ebx
  char *v31; // edx
  int v32; // eax
  unsigned __int16 *v33; // ecx
  unsigned int v34; // ebx
  int v35; // ecx
  __int64 v36; // rax
  int v37; // edx
  int v38; // ebx
  signed int v39; // eax
  unsigned __int16 *v40; // ebx
  int v41; // edx
  unsigned int v42; // esi
  bool v43; // zf
  int v44; // eax
  __int64 v45; // rax
  unsigned __int16 *v46; // edx
  int v47; // ebx
  unsigned __int16 *v48; // eax
  unsigned int v49; // esi
  int v50; // ecx
  int Buffer_field_14; // ecx
  int v52; // [esp+10h] [ebp-14h]
  int v53; // [esp+14h] [ebp-10h] BYREF
  int v54; // [esp+18h] [ebp-Ch]
  int v55; // [esp+1Ch] [ebp-8h]
  int v56; // [esp+20h] [ebp-4h]
  int v57; // [esp+2Ch] [ebp+8h]
  int v58; // [esp+30h] [ebp+Ch]

  v5 = *((_DWORD *)this + 10); /*0x410ee0*/
  v52 = this->Buffer_field_10 / 2 % v5; /*0x410ef2*/
  if ( (int)abs32(a2) > v5 || (result = (char *)abs32(a3), (int)result > *((_DWORD *)this + 11)) ) /*0x410f0e*/
  {
    v50 = *((_DWORD *)this + 11); /*0x411286*/
    v53 = 0; /*0x41128b*/
    v54 = 0; /*0x41128f*/
    v56 = v50; /*0x411297*/
    Buffer_field_14 = this->Buffer_field_14; /*0x41129b*/
    v55 = v5; /*0x4112a4*/
    result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)Buffer_field_14 + 20))( /*0x4112af*/
                       Buffer_field_14,
                       &v53,
                       a4);
    this->Buffer_field_24 = 0x8000; /*0x4112b2*/
    return result; /*0x4112b2*/
  }
  v8 = a2 + this->Buffer_field_10 / 2 % v5; /*0x410f18*/
  if ( a2 ) /*0x410f1c*/
  {
    Buffer_field_18 = this->Buffer_field_18; /*0x410f25*/
    v10 = this->Buffer_field_10 + 2 * a2; /*0x410f28*/
    this->Buffer_field_10 = v10; /*0x410f2b*/
    v11 = Buffer_field_18 + v10; /*0x410f2e*/
    if ( v11 < Buffer_field_18 ) /*0x410f32*/
      v11 += this->Buffer_field_20; /*0x410f34*/
    if ( v11 >= this->Buffer_field_1C ) /*0x410f3a*/
      v11 -= this->Buffer_field_20; /*0x410f3c*/
    this->Buffer_field_10 = v11 - this->Buffer_field_18; /*0x410f44*/
    if ( a2 >= 0 ) /*0x410f47*/
    {
      v53 = v52; /*0x410fee*/
      if ( v8 < v5 ) /*0x410fe4*/
      {
        v54 = 0; /*0x41104f*/
        v23 = *((_DWORD *)this + 11); /*0x411053*/
        v55 = a2; /*0x411056*/
        v22 = this->Buffer_field_14; /*0x41105a*/
        v56 = v23; /*0x411063*/
      }
      else
      {
        v18 = *((_DWORD *)this + 11); /*0x410ff2*/
        v55 = v5 - v52; /*0x410ff5*/
        v54 = 0; /*0x410ff9*/
        v19 = this->Buffer_field_14; /*0x410ffd*/
        v56 = v18; /*0x411002*/
        (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v19 + 20))(v19, &v53, a4); /*0x411014*/
        v20 = v8 - *((_DWORD *)this + 10); /*0x41101e*/
        v21 = *((_DWORD *)this + 11); /*0x411020*/
        v54 = 0; /*0x411023*/
        v22 = this->Buffer_field_14; /*0x411027*/
        v53 = 0; /*0x41102a*/
        v55 = v20; /*0x41102e*/
        v56 = v21; /*0x411032*/
      }
      result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v22 + 20))(v22, &v53, a4); /*0x41103e*/
    }
    else if ( v8 >= 0 ) /*0x410f4f*/
    {
      v53 = v8; /*0x410fb3*/
      v54 = 0; /*0x410fb7*/
      v56 = *((_DWORD *)this + 11); /*0x410fbe*/
      v55 = -a2; /*0x410fc6*/
      result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)this->Buffer_field_14 + 20))( /*0x410fda*/
                         this->Buffer_field_14,
                         &v53,
                         a4);
    }
    else
    {
      v53 = 0; /*0x410f55*/
      v55 = v52; /*0x410f5d*/
      v12 = *((_DWORD *)this + 11); /*0x410f61*/
      v54 = 0; /*0x410f64*/
      v13 = this->Buffer_field_14; /*0x410f68*/
      v56 = v12; /*0x410f6d*/
      (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v13 + 20))(v13, &v53, a4); /*0x410f7f*/
      v14 = *((_DWORD *)this + 10); /*0x410f82*/
      v15 = *((_DWORD *)this + 11); /*0x410f85*/
      v16 = v14 + v8; /*0x410f88*/
      v54 = 0; /*0x410f8e*/
      v17 = this->Buffer_field_14; /*0x410f92*/
      v55 = v14 - v16; /*0x410f95*/
      v53 = v16; /*0x410f99*/
      v56 = v15; /*0x410f9d*/
      result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v17 + 20))(v17, &v53, a4); /*0x410fa9*/
    }
  }
  if ( a3 ) /*0x411078*/
  {
    Buffer_field_10 = this->Buffer_field_10; /*0x41107e*/
    v25 = *((_DWORD *)this + 10); /*0x411081*/
    this->Buffer_field_24 -= a3; /*0x411096*/
    v26 = Buffer_field_10 + 2 * a3 * v25; /*0x411099*/
    this->Buffer_field_10 = v26; /*0x41109c*/
    v27 = a3 + Buffer_field_10 / 2 / v25; /*0x41109f*/
    v28 = this->Buffer_field_18; /*0x4110a1*/
    v29 = v28 + v26; /*0x4110a4*/
    v58 = v27; /*0x4110a6*/
    if ( v29 < v28 ) /*0x4110ac*/
      v29 += this->Buffer_field_20; /*0x4110ae*/
    if ( v29 >= this->Buffer_field_1C ) /*0x4110b4*/
      v29 -= this->Buffer_field_20; /*0x4110b6*/
    v30 = v29 - v28; /*0x4110bf*/
    this->Buffer_field_10 = v29 - v28; /*0x4110c3*/
    if ( a3 >= 0 ) /*0x4110c6*/
    {
      v44 = *((_DWORD *)this + 11); /*0x41119d*/
      if ( v58 >= v44 ) /*0x4111a6*/
      {
        v45 = 2 * *((_DWORD *)this + 10) * v44 - Buffer_field_10; /*0x4111b4*/
        LODWORD(v45) = v45 - HIDWORD(v45); /*0x4111b5*/
        v46 = (unsigned __int16 *)(v28 + Buffer_field_10); /*0x4111b7*/
        v47 = (int)v45 >> 1; /*0x4111bc*/
        if ( (((_BYTE)v28 + (_BYTE)Buffer_field_10) & 2) != 0 && v47 ) /*0x4111c5*/
        {
          *v46++ = a4; /*0x4111c7*/
          --v47; /*0x4111cd*/
        }
        v48 = 0; /*0x4111d0*/
        if ( v47 >> 1 ) /*0x4111d5*/
        {
          memset32(v46, 65537 * a4, v47 >> 1); /*0x4111f0*/
          v48 = &v46[2 * (v47 >> 1)]; /*0x4111f6*/
        }
        if ( (v47 & 1) != 0 && v48 ) /*0x411200*/
          *v48 = a4; /*0x411202*/
        v37 = this->Buffer_field_18; /*0x41120b*/
        v38 = this->Buffer_field_10 / 2; /*0x411210*/
        if ( (v37 & 2) != 0 && v38 ) /*0x411219*/
        {
          *(_WORD *)v37 = a4; /*0x41121b*/
          v37 += 2; /*0x41121e*/
          --v38; /*0x411221*/
        }
        result = 0; /*0x411224*/
        v49 = v38 >> 1; /*0x411229*/
        if ( !(v38 >> 1) ) /*0x41122b*/
          goto LABEL_54; /*0x41122b*/
LABEL_53:
        memset32((void *)v37, 65537 * a4, v49); /*0x411240*/
        result = (char *)(v37 + 4 * v49); /*0x411242*/
LABEL_54:
        v43 = (v38 & 1) == 0; /*0x411245*/
LABEL_55:
        if ( !v43 ) /*0x411248*/
        {
          if ( result ) /*0x41124c*/
            *(_WORD *)result = a4; /*0x41124f*/
        }
        return result; /*0x411258*/
      }
      v37 = v28 + Buffer_field_10; /*0x411262*/
      v38 = (int)(v30 - Buffer_field_10) / 2; /*0x411267*/
      if ( (((_BYTE)v28 + (_BYTE)Buffer_field_10) & 2) != 0 && v38 ) /*0x411270*/
        goto LABEL_60; /*0x411270*/
    }
    else
    {
      if ( v27 >= 0 ) /*0x4110d0*/
      {
        v39 = Buffer_field_10 - v30; /*0x411157*/
        v40 = (unsigned __int16 *)v29; /*0x411159*/
        v41 = v39 / 2; /*0x411160*/
        if ( ((unsigned __int8)v40 & 2) != 0 && v41 ) /*0x411169*/
        {
          *v40++ = a4; /*0x41116b*/
          --v41; /*0x411171*/
        }
        result = 0; /*0x411174*/
        v42 = v41 >> 1; /*0x411179*/
        if ( v41 >> 1 ) /*0x411179*/
        {
          memset32(v40, 65537 * a4, v42); /*0x411190*/
          result = (char *)&v40[2 * v42]; /*0x411192*/
        }
        v43 = (v41 & 1) == 0; /*0x411195*/
        goto LABEL_55; /*0x411198*/
      }
      v31 = (char *)v28; /*0x4110d9*/
      v32 = Buffer_field_10 / 2; /*0x4110db*/
      v57 = Buffer_field_10 / 2; /*0x4110e0*/
      if ( (v28 & 2) != 0 && v32 ) /*0x4110e8*/
      {
        *(_WORD *)v28 = a4; /*0x4110ea*/
        v31 = (char *)(v28 + 2); /*0x4110ed*/
        LOBYTE(v57) = --v32; /*0x4110f1*/
      }
      v33 = 0; /*0x4110f7*/
      v34 = v32 >> 1; /*0x4110fc*/
      if ( v32 >> 1 ) /*0x4110fc*/
      {
        memset32(v31, 65537 * a4, v34); /*0x411113*/
        LOBYTE(v32) = v57; /*0x411115*/
        v33 = (unsigned __int16 *)&v31[4 * v34]; /*0x411119*/
      }
      if ( (v32 & 1) != 0 && v33 ) /*0x411122*/
        *v33 = a4; /*0x411124*/
      v35 = this->Buffer_field_10; /*0x41112a*/
      v36 = 2 * *((_DWORD *)this + 10) * *((_DWORD *)this + 11) - v35; /*0x411135*/
      LODWORD(v36) = v36 - HIDWORD(v36); /*0x411136*/
      v37 = v35 + this->Buffer_field_18; /*0x41113d*/
      v38 = (int)v36 >> 1; /*0x41113f*/
      if ( (v37 & 2) != 0 && v38 ) /*0x41114c*/
      {
LABEL_60:
        *(_WORD *)v37 = a4; /*0x411272*/
        v37 += 2; /*0x411275*/
        --v38; /*0x411278*/
      }
    }
    result = 0; /*0x411279*/
    v49 = v38 >> 1; /*0x411280*/
    if ( !(v38 >> 1) ) /*0x411282*/
      goto LABEL_54; /*0x411282*/
    goto LABEL_53; /*0x411282*/
  }
  return result; /*0x41124e*/
}



// ==== 0x004112D0  MapClass::isLocationShrouded  this=MapClass  sig=csp ====
int __thiscall MapClass::isLocationShrouded(MapClass *this, unsigned __int16 a2)
{
  void *MapClass_field_0x28; // eax
  void *MapClass_field_0x14; // ecx
  _DWORD v5[4]; // [esp+0h] [ebp-10h] BYREF

  v5[3] = this->MapClass_field_0x2C; /*0x4112d8*/
  v5[0] = 0; /*0x4112e0*/
  v5[1] = 0; /*0x4112e4*/
  MapClass_field_0x28 = this->MapClass_field_0x28; /*0x4112e8*/
  MapClass_field_0x14 = this->MapClass_field_0x14; /*0x4112eb*/
  v5[2] = MapClass_field_0x28; /*0x4112f4*/
  return (*(int (__thiscall **)(void *, _DWORD *, _DWORD))(*(_DWORD *)MapClass_field_0x14 + 20))( /*0x411303*/
           MapClass_field_0x14,
           v5,
           a2);
}



// ==== 0x00411310  StreamClass::WriteBytes  this=StreamClass  sig=csp ====
int __thiscall StreamClass::WriteBytes(StreamClass *this, unsigned __int16 a2, char a3, int a4, int a5, int a6)
{
  return (*(int (__thiscall **)(_DWORD, char *, _DWORD))(**((_DWORD **)this + 5) + 20))(*((_DWORD *)this + 5), &a3, a2); /*0x411328*/
}



// ==== 0x00411330  TacticalClass::FillScanlinesTransparent  this=TacticalClass  sig=csp ====
unsigned int __thiscall TacticalClass::FillScanlinesTransparent(TacticalClass *this, int a2, int a3, int a4, int a5)
{
  TacticalClass *v5; // edi
  int v6; // esi
  unsigned int result; // eax
  unsigned int v8; // edx
  int v9; // ecx
  char *v10; // ebp
  unsigned int v11; // eax
  char *v12; // edi
  unsigned int v13; // esi
  int v14; // eax
  int nextArrayIndex; // ebx
  _WORD *v16; // ecx
  unsigned int v17; // esi
  int v18; // ebx
  char *v19; // ebp
  char *v20; // eax
  unsigned int v21; // esi
  int v23; // [esp+Ch] [ebp-Ch]
  int v24; // [esp+Ch] [ebp-Ch]
  char v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  v5 = this; /*0x41133d*/
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)this->? + 92))(this->?, a2, a3); /*0x411350*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v5->? + 96))(v5->?); /*0x411354*/
  result = v5->?; /*0x41135a*/
  v8 = v6 + v5->?; /*0x41135d*/
  if ( v8 >= result ) /*0x411361*/
    v8 -= (unsigned int)v5->?; /*0x411363*/
  if ( a5 > 0 ) /*0x41136c*/
  {
    v26 = a5; /*0x411374*/
    do /*0x411453*/
    {
      v9 = a4; /*0x411378*/
      if ( v8 + 2 * a4 < result ) /*0x411381*/
      {
        v18 = a4; /*0x411466*/
        v19 = (char *)v8; /*0x411468*/
        if ( (v8 & 2) != 0 && a4 ) /*0x41146e*/
        {
          *(_WORD *)v8 = 127; /*0x411470*/
          v19 = (char *)(v8 + 2); /*0x411475*/
          v18 = a4 - 1; /*0x411478*/
        }
        v20 = 0; /*0x41147d*/
        v21 = v18 >> 1; /*0x411482*/
        if ( v18 >> 1 ) /*0x411482*/
        {
          memset32(v19, 8323199, v21); /*0x41148f*/
          v5 = this; /*0x411491*/
          v20 = &v19[4 * v21]; /*0x411495*/
        }
        if ( (v18 & 1) != 0 && v20 ) /*0x4114a0*/
          *(_WORD *)v20 = 127; /*0x4114a2*/
      }
      else
      {
        v10 = (char *)v8; /*0x411389*/
        v11 = (result - v8) >> 1; /*0x41138b*/
        v23 = v11; /*0x411392*/
        if ( (v8 & 2) != 0 && v11 ) /*0x41139a*/
        {
          *(_WORD *)v8 = 127; /*0x41139f*/
          v10 = (char *)(v8 + 2); /*0x4113a4*/
          v23 = v11 - 1; /*0x4113a7*/
        }
        v12 = 0; /*0x4113af*/
        v13 = v23 >> 1; /*0x4113b4*/
        if ( v23 >> 1 ) /*0x4113b4*/
        {
          memset32(v10, 8323199, v13); /*0x4113c1*/
          v9 = a4; /*0x4113c3*/
          v12 = &v10[4 * v13]; /*0x4113c7*/
        }
        if ( (v23 & 1) != 0 && v12 ) /*0x4113d4*/
          *(_WORD *)v12 = 127; /*0x4113d6*/
        v14 = v9 - v11; /*0x4113e1*/
        nextArrayIndex = this->?; /*0x4113e3*/
        v25 = v14; /*0x4113e6*/
        v24 = nextArrayIndex; /*0x4113ed*/
        if ( (nextArrayIndex & 2) != 0 && v14 ) /*0x4113f5*/
        {
          *(_WORD *)nextArrayIndex = 127; /*0x4113f7*/
          nextArrayIndex += 2; /*0x4113fc*/
          --v14; /*0x4113ff*/
          v24 = nextArrayIndex; /*0x411400*/
          v25 = v14; /*0x411404*/
        }
        v16 = 0; /*0x41140a*/
        v17 = v14 >> 1; /*0x41140f*/
        if ( v14 >> 1 ) /*0x41140f*/
        {
          memset32((void *)nextArrayIndex, 8323199, v17); /*0x41141c*/
          v16 = (_WORD *)(v24 + 4 * v17); /*0x411422*/
          LOBYTE(v14) = v25; /*0x411425*/
        }
        if ( (v14 & 1) != 0 && v16 ) /*0x41142f*/
          *v16 = 127; /*0x411431*/
        v5 = this; /*0x411436*/
      }
      result = v5->?; /*0x41143d*/
      v8 += 2 * v5->field28; /*0x411440*/
      if ( v8 >= result ) /*0x411445*/
        v8 -= (unsigned int)v5->?; /*0x411447*/
      --v26; /*0x41144f*/
    }
    while ( v26 ); /*0x411453*/
  }
  return result; /*0x41145b*/
}



// ==== 0x004114B0  StreamClass::ReadAndSeek  this=BSurface  sig=csp ====
int __thiscall StreamClass::ReadAndSeek(int *this, int a2, int a3)
{
  int v4; // edi
  int result; // eax

  v4 = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)this->Buffer + 92))(this->Buffer, a2, a3); /*0x4114c9*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this->Buffer + 96))(this->Buffer); /*0x4114cd*/
  result = v4 + this->Width; /*0x4114d6*/
  if ( result >= (unsigned int)*(this + 7) ) /*0x4114da*/
    result -= this->Height; /*0x4114dc*/
  return result; /*0x4114df*/
}



// ==== 0x004114F0  Surface::Stub  this=Surface  sig=csp ====
char __stdcall BSurface::Stub(Surface *this, int a2)
{
  return 1; /*0x4114f2*/
}



// ==== 0x00411500  Surface::entry_68_  this=Surface  sig=csp ====
char __stdcall XSurface::entry_68_(Surface *this, int a2)
{
  return 1; /*0x411502*/
}



// ==== 0x00411510  Surface::GetRect  this=Surface  sig=csp ====
_DWORD *__thiscall Surface::GetRect(Surface *this, _DWORD *a2)
{
  int Width; // edi
  int Height; // ecx

  Width = this->Width; /*0x411517*/
  Height = this->Height; /*0x41151a*/
  *a2 = 0; /*0x411523*/
  a2[1] = 0; /*0x411525*/
  a2[2] = Width; /*0x411528*/
  a2[3] = Height; /*0x41152d*/
  return a2; /*0x41152b*/
}



// ==== 0x00411540  Surface::GetWidth  this=Surface  sig=csp ====
int __thiscall Surface::GetWidth(Surface *this)
{
  return this->Width; /*0x411543*/
}



// ==== 0x00411550  Surface::GetHeight  this=Surface  sig=csp ====
int __thiscall Surface::GetHeight(Surface *this)
{
  return this->Height; /*0x411553*/
}



// ==== 0x00411560  XSurface::Lock  this=XSurface  sig=csp ====
int __thiscall XSurface::Lock(XSurface *this, int a2, int a3)
{
  ++this->LockCount; /*0x411564*/
  return 0; /*0x411569*/
}



// ==== 0x00411570  XSurface::Unlock  this=XSurface  sig=csp ====
char __thiscall XSurface::Unlock(XSurface *this)
{
  --this->LockCount; /*0x411574*/
  return 1; /*0x411579*/
}



// ==== 0x00411580  XSurface::IsLocked  this=XSurface  sig=csp ====
BOOL __thiscall Surface::IsLocked(XSurface *this)
{
  return this->LockCount != 0; /*0x41158a*/
}



// ==== 0x00411590  XSurface::StubReturnFalse  this=XSurface  sig=csp ====
char XSurface::StubReturnFalse(XSurface *this)
{
  return 0; /*0x411592*/
}



// ==== 0x004115A0  XSurface::ScalarDtor  this=XSurface  sig=csp ====
std::locale::facet *__thiscall XSurface::ScalarDtor(XSurface *this, char a2)
{
  *(_DWORD *)this->Surface = &Surface_Vtable; /*0x4115a9*/
  if ( (a2 & 1) != 0 ) /*0x4115af*/
    __3_YAXPAX_Z(this); /*0x4115b2*/
  return (std::locale::facet *)this; /*0x4115bc*/
}



// ==== 0x004115C0  Surface::StubReturnFalse  this=Surface  sig=csp ====
char Surface::StubReturnFalse(Surface *this)
{
  return 0; /*0x4115c2*/
}



// ==== 0x004115D0  Surface::getObjectValue  this=Surface  sig=csp ====
std::locale::facet *__thiscall AbstractClass::getObjectValue(Surface *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &Surface_Vtable; /*0x4115d9*/
  if ( (a2 & 1) != 0 ) /*0x4115df*/
    __3_YAXPAX_Z(this); /*0x4115e2*/
  return (std::locale::facet *)this; /*0x4115ec*/
}



// ==== 0x004115F0  BSurface::Lock  this=BSurface  sig=csp ====
void *__thiscall BSurface::Lock(BSurface *this, int a2, int a3)
{
  int v4; // eax
  char *Buffer; // edi
  int v6; // ebx

  v4 = *(_DWORD *)this->XSurface; /*0x4115f8*/
  ++this->?; /*0x4115fb*/
  Buffer = (char *)this->Buffer; /*0x4115fe*/
  v6 = a2 * (*(int (__thiscall **)(BSurface *))(v4 + 112))(this); /*0x411608*/
  return &Buffer[v6 + a3 * (*(int (__thiscall **)(BSurface *))(*(_DWORD *)this->XSurface + 116))(this)]; /*0x41161b*/
}



// ==== 0x00411630  BSurface::GetBytesPerPixel  this=BSurface  sig=csp ====
int __thiscall BSurface::GetBytesPerPixel(BSurface *this)
{
  return this->BytesPerPixel; /*0x411633*/
}



// ==== 0x00411640  BSurface::GetPitch  this=BSurface  sig=csp ====
int __thiscall BSurface::GetPitch(BSurface *this)
{
  return this->BytesPerPixel * (*(int (__thiscall **)(BSurface *))(*(_DWORD *)this->XSurface + 124))(this); /*0x41164c*/
}



// ==== 0x00411650  BSurface::ScalarDtor  this=BSurface  sig=csp ====
char *__thiscall BSurface::ScalarDtor(BSurface *this, char a2)
{
  Vector::Clear((int)&this->Buffer); /*0x411656*/
  *(_DWORD *)this->XSurface = &Surface_Vtable; /*0x41165f*/
  if ( (a2 & 1) != 0 ) /*0x411667*/
    __3_YAXPAX_Z(this); /*0x41166a*/
  return this->XSurface; /*0x411674*/
}



// ==== 0x00411680  sub_411680  this=-  sig=ida-proto ====
int sub_411680()
{
  dword_887748 = 0; /*0x411682*/
  dword_88774C = 0; /*0x411687*/
  dword_887750 = 0; /*0x41168c*/
  dword_887754 = 0; /*0x411691*/
  return 0; /*0x411696*/
}



// ==== 0x004116A0  sub_4116A0  this=-  sig=ida-proto ====
int __cdecl sub_4116A0(unsigned int a1)
{
  unsigned int v1; // edi
  int v2; // eax
  int v3; // esi
  int result; // eax
  unsigned int v5; // ebp
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // ecx
  int v15; // ecx
  int v16; // [esp+Ch] [ebp-10h]
  unsigned int v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]
  _BYTE v19[4]; // [esp+18h] [ebp-4h] BYREF

  v1 = a1; /*0x4116a5*/
  v2 = *(_DWORD *)(a1 + 52); /*0x4116a9*/
  v3 = 188 * v2 + 8943480; /*0x4116bd*/
  if ( (dword_8877A0[47 * v2] & 1) != 0 ) /*0x4116c4*/
  {
    Debug::Log(); /*0x4116cf*/
    return *(_DWORD *)(v3 + 32); /*0x4116df*/
  }
  v5 = Time::GetElapsedMS() - *((_DWORD *)&unk_887794 + 47 * v2); /*0x4116f2*/
  v17 = *(_DWORD *)(v3 + 144); /*0x4116f4*/
  EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 160)); /*0x4116ff*/
  v6 = *(_DWORD *)(v3 + 140); /*0x41170b*/
  v7 = *(_DWORD *)(v1 + 156) * *(_DWORD *)(v3 + 148); /*0x41171a*/
  v18 = *(_DWORD *)(v1 + 56); /*0x411723*/
  v16 = *(_DWORD *)(v3 + 152); /*0x411727*/
  if ( v6 && !(*(int (__stdcall **)(int, unsigned int *, _BYTE *))(*(_DWORD *)v6 + 16))(v6, &a1, v19) ) /*0x41173a*/
  {
    if ( v16 ) /*0x411747*/
    {
      v8 = a1; /*0x411749*/
LABEL_11:
      v7 += v8; /*0x411769*/
      goto LABEL_12; /*0x411769*/
    }
    v9 = v17 >> 1; /*0x411757*/
    if ( a1 >= v17 >> 1 ) /*0x41175b*/
    {
      v7 += a1 - v9; /*0x41175f*/
      goto LABEL_12; /*0x411761*/
    }
    if ( v7 ) /*0x411765*/
    {
      v8 = a1 + v9; /*0x411767*/
      goto LABEL_11; /*0x411767*/
    }
  }
LABEL_12:
  LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 160)); /*0x41176b*/
  v10 = v18 * *(_DWORD *)(v1 + 156); /*0x411780*/
  v11 = v7 - v10; /*0x411785*/
  if ( v7 - v10 > v7 ) /*0x411789*/
  {
    v11 = 0; /*0x41178b*/
LABEL_14:
    *(_DWORD *)(v3 + 20) = v11; /*0x41178d*/
    *(_DWORD *)(v3 + 24) = v5; /*0x411792*/
    v12 = 60 /*0x4117ba*/
        * (v11
         / (*(unsigned __int8 *)(v1 + 62)
          * (*(unsigned __int8 *)(v1 + 63) >> 3)))
        / *(unsigned __int16 *)(v1 + 60);
    *(_DWORD *)(v3 + 32) = v12; /*0x4117bc*/
    v13 = *(_DWORD *)(v1 + 196); /*0x4117bf*/
    if ( v12 >= v13 ) /*0x4117c7*/
    {
      result = v12 - v13; /*0x4117c9*/
      *(_DWORD *)(v3 + 32) = result; /*0x4117cd*/
      return result; /*0x4117d5*/
    }
    *(_DWORD *)(v3 + 32) = 0; /*0x4117ff*/
    return *(_DWORD *)(v3 + 32); /*0x4117ff*/
  }
  if ( !v11 || v11 > *(_DWORD *)(v3 + 20) ) /*0x4117dd*/
    goto LABEL_14; /*0x4117dd*/
  v14 = *(_DWORD *)(v3 + 24); /*0x4117df*/
  if ( v5 > v14 ) /*0x4117e4*/
  {
    *(_DWORD *)(v3 + 24) = v5; /*0x4117e8*/
    v15 = v5 - v14 + *(_DWORD *)(v3 + 32); /*0x4117f0*/
    *(_DWORD *)(v3 + 32) = v15; /*0x4117f4*/
    return v15; /*0x4117fe*/
  }
  return *(_DWORD *)(v3 + 32); /*0x4116da*/
}



// ==== 0x00411820  ManageMultimediaTimer  this=-  sig=ida-proto ====
int __cdecl ManageMultimediaTimer(struct _RTL_CRITICAL_SECTION *dwUser, int a2, int a3, int a4)
{
  int result; // eax
  LONG LockCount; // eax
  int v6; // ebp
  int v7; // esi
  LONG v8; // eax
  int v9; // esi
  struct _RTL_CRITICAL_SECTION *v10; // edi
  int v11; // eax
  LONG v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // esi

  result = -1; /*0x411824*/
  switch ( a2 ) /*0x411835*/
  {
    case 1: /*0x411835*/
      dwUser[3].RecursionCount = (LONG)j_Time_GetElapsedMS; /*0x411843*/
      dwUser[5].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)60; /*0x41184a*/
      break; /*0x411852*/
    case 2: /*0x411835*/
      result = sub_411B20((DWORD_PTR)dwUser, a3, a4); /*0x411862*/
      break; /*0x41186e*/
    case 3: /*0x411835*/
      Debug::Log(); /*0x411874*/
      LockCount = dwUser[2].LockCount; /*0x411880*/
      v6 = 188 * LockCount + 8943480; /*0x411894*/
      if ( byte_887778[188 * LockCount] == 1 ) /*0x41189b*/
      {
        if ( dword_887804[47 * LockCount] ) /*0x4118a1*/
        {
          Debug::Log(); /*0x4118b2*/
          v7 = 188 * dwUser[2].LockCount + 8943480; /*0x4118ce*/
          if ( dword_887804[47 * dwUser[2].LockCount] ) /*0x4118c5*/
          {
            EnterCriticalSection((LPCRITICAL_SECTION)(188 * dwUser[2].LockCount + 8943640)); /*0x4118de*/
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v7 + 140) + 72))(*(_DWORD *)(v7 + 140)); /*0x4118ed*/
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v7 + 140) + 8))(*(_DWORD *)(v7 + 140)); /*0x4118f9*/
            *(_DWORD *)(v7 + 140) = 0; /*0x411901*/
            *(_DWORD *)(v7 + 64) = 0; /*0x411907*/
            *(_DWORD *)(v7 + 68) = 0; /*0x41190a*/
            *(_DWORD *)(v7 + 72) = 0; /*0x41190d*/
            *(_DWORD *)(v7 + 76) = 0; /*0x411910*/
            LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 160)); /*0x411913*/
          }
        }
        Debug::Log(); /*0x41191e*/
        timeKillEvent(*(_DWORD *)(v6 + 96)); /*0x41192a*/
        *(_DWORD *)(v6 + 96) = 0; /*0x411935*/
        Debug::Log(); /*0x411938*/
        timeEndPeriod(0x10u); /*0x411942*/
        *(_BYTE *)v6 = 0; /*0x41194d*/
        Debug::Log(); /*0x411950*/
        DeleteCriticalSection((LPCRITICAL_SECTION)(v6 + 160)); /*0x41195f*/
      }
      Debug::Log(); /*0x41196a*/
      result = -1; /*0x411972*/
      break; /*0x411979*/
    case 4: /*0x411835*/
      result = InitializeSoundBufferPlayback(dwUser); /*0x41197f*/
      break; /*0x41198b*/
    case 5: /*0x411835*/
      result = SubmitDirectSoundBufferData(dwUser, a3, a4); /*0x41199b*/
      break; /*0x4119a7*/
    case 6: /*0x411835*/
      v8 = dwUser[2].LockCount; /*0x4119ac*/
      v9 = 188 * v8 + 8943480; /*0x4119b7*/
      v10 = (struct _RTL_CRITICAL_SECTION *)(188 * v8 + 8943640); /*0x4119be*/
      EnterCriticalSection(v10); /*0x4119c5*/
      if ( *(_BYTE *)v9 == 1 ) /*0x4119ce*/
      {
        v11 = *(_DWORD *)(v9 + 140); /*0x4119d0*/
        if ( v11 ) /*0x4119d8*/
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v11 + 72))(*(_DWORD *)(v9 + 140)); /*0x4119dd*/
      }
      *(_DWORD *)(v9 + 40) |= 1u; /*0x4119e7*/
      LeaveCriticalSection(v10); /*0x4119ea*/
      result = -1; /*0x4119f3*/
      break; /*0x4119f7*/
    case 7: /*0x411835*/
      v15 = 188 * dwUser[2].LockCount + 8943480; /*0x411aad*/
      if ( dword_887804[47 * dwUser[2].LockCount] ) /*0x411aa4*/
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(188 * dwUser[2].LockCount + 8943640)); /*0x411abd*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v15 + 140) + 72))(*(_DWORD *)(v15 + 140)); /*0x411acc*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v15 + 140) + 8))(*(_DWORD *)(v15 + 140)); /*0x411ad8*/
        *(_DWORD *)(v15 + 140) = 0; /*0x411ae0*/
        *(_DWORD *)(v15 + 64) = 0; /*0x411ae6*/
        *(_DWORD *)(v15 + 68) = 0; /*0x411ae9*/
        *(_DWORD *)(v15 + 72) = 0; /*0x411aec*/
        *(_DWORD *)(v15 + 76) = 0; /*0x411aef*/
        LeaveCriticalSection((LPCRITICAL_SECTION)(v15 + 160)); /*0x411af2*/
      }
      result = -1; /*0x411af8*/
      break; /*0x411af8*/
    case 8: /*0x411835*/
      v12 = dwUser[2].LockCount; /*0x4119fe*/
      v13 = 188 * v12 + 8943480; /*0x411a12*/
      if ( byte_887778[188 * v12] && dword_887804[47 * v12] ) /*0x411a1b*/
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(188 * v12 + 8943640)); /*0x411a2a*/
        if ( (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v13 + 140) + 48))( /*0x411a3d*/
               *(_DWORD *)(v13 + 140),
               0,
               0,
               1) )
        {
          LeaveCriticalSection((LPCRITICAL_SECTION)(v13 + 160)); /*0x411a7c*/
          result = -13; /*0x411a82*/
        }
        else
        {
          *(_DWORD *)(v13 + 28) = Time::GetElapsedMS() - *(_DWORD *)(v13 + 24); /*0x411a52*/
          Debug::Log(); /*0x411a55*/
          v14 = *(_DWORD *)(v13 + 40); /*0x411a5a*/
          LOBYTE(v14) = v14 & 0xFE; /*0x411a60*/
          *(_DWORD *)(v13 + 40) = v14; /*0x411a62*/
          LeaveCriticalSection((LPCRITICAL_SECTION)(v13 + 160)); /*0x411a69*/
          result = -1; /*0x411a6f*/
        }
      }
      else
      {
        result = -13; /*0x411a8c*/
      }
      break; /*0x411a75*/
    default:
      return result;
  }
  return result; /*0x411840*/
}



// ==== 0x00411B20  sub_411B20  this=-  sig=csp ====
int __cdecl sub_411B20(DWORD_PTR dwUser, unsigned __int16 *a2, int a3)
{
  int v3; // eax
  char *v4; // ecx
  _BYTE *v5; // esi
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ecx
  LPDIRECTSOUND DirectSound; // [esp+8h] [ebp-64h]
  _DWORD v11[24]; // [esp+Ch] [ebp-60h] BYREF

  DirectSound = Audio::GetDirectSound(); /*0x411b2f*/
  Debug::Log(); /*0x411b33*/
  GetCurrentThreadId(); /*0x411b3b*/
  Debug::Log(); /*0x411b47*/
  if ( !Audio::IsSoundEnabled() ) /*0x411b4f*/
    return -13; /*0x411b4f*/
  v3 = 0; /*0x411b5c*/
  v4 = byte_887778; /*0x411b5e*/
  do /*0x411b75*/
  {
    if ( !*v4 ) /*0x411b63*/
      break; /*0x411b66*/
    v4 += 188; /*0x411b68*/
    ++v3; /*0x411b6e*/
  }
  while ( (int)v4 < (int)byte_887834 ); /*0x411b75*/
  if ( v3 == 1 || a3 != 16 ) /*0x411b85*/
    return -13; /*0x411b85*/
  *(_DWORD *)(dwUser + 52) = v3; /*0x411b99*/
  v5 = (_BYTE *)(188 * v3 + 8943480); /*0x411b9c*/
  memset(v5, 0, 0xBCu); /*0x411bac*/
  *v5 = 1; /*0x411bae*/
  *((_DWORD *)v5 + 1) = *(_DWORD *)(dwUser + 164); /*0x411bbd*/
  InitializeCriticalSection((LPCRITICAL_SECTION)(188 * v3 + 8943640)); /*0x411bc1*/
  v6 = *(_DWORD *)(dwUser + 160); /*0x411bc7*/
  if ( v6 == -1 )
  {
    v7 = *(_DWORD *)(dwUser + 112); /*0x411bdf*/
    v8 = *(unsigned __int16 *)(dwUser + 14); /*0x411be4*/
    *((_WORD *)v5 + 4) = v7 == (unsigned __int16)v8 ? *a2 : v7 * (unsigned int)*a2 / v8;
  }
  else
  {
    *((_WORD *)v5 + 4) = v6; /*0x411bd9*/
  }
  memset(v11, 0, sizeof(v11)); /*0x411c16*/
  v11[0] = 96; /*0x411c1c*/
  DirectSound->lpVtbl->GetCaps(DirectSound, (LPDSCAPS)v11); /*0x411c28*/
  if ( (v11[1] & 0x20) != 0 ) /*0x411c30*/
    Debug::Log(); /*0x411c3e*/
  else
    *(_DWORD *)(dwUser + 196) = 0; /*0x411c48*/
  v5[10] = *((_BYTE *)a2 + 2); /*0x411c5a*/
  v5[11] = *((_BYTE *)a2 + 3); /*0x411c60*/
  *((_DWORD *)v5 + 9) = *((_DWORD *)a2 + 1); /*0x411c66*/
  dword_88776C = (int (__cdecl *)(_DWORD))*((_DWORD *)a2 + 2); /*0x411c6c*/
  dword_887770 = (int (__cdecl *)(_DWORD, _DWORD))*((_DWORD *)a2 + 3); /*0x411c75*/
  Debug::Log(); /*0x411c7b*/
  if ( timeBeginPeriod(0x10u) == 97 ) /*0x411c90*/
    return -13; /*0x411cd5*/
  Debug::Log(); /*0x411c97*/
  *((_DWORD *)v5 + 24) = timeSetEvent(0x10u, 1u, fptc, dwUser, 1u); /*0x411cb6*/
  Debug::Log(); /*0x411cb9*/
  return *((_DWORD *)v5 + 24) != 0 ? -1 : -13;
}



// ==== 0x00411DF0  InitializeSoundBufferPlayback  this=-  sig=csp ====
int __cdecl InitializeSoundBufferPlayback(LPCRITICAL_SECTION lpCriticalSection)
{
  LONG LockCount; // eax
  int v3; // esi
  int v4; // eax
  int v6; // eax
  int **v7; // edi
  unsigned __int16 v8; // ax
  __int16 v9; // dx
  int v10; // ecx
  unsigned __int16 v11; // ax
  LPDIRECTSOUND DirectSoundAudio; // eax
  int *v13; // eax
  int v14; // eax
  int *v15; // edx
  int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // eax
  struct _RTL_CRITICAL_SECTION *lpCriticalSectiona; // [esp+38h] [ebp+4h]

  LockCount = lpCriticalSection[2].LockCount; /*0x411df7*/
  v3 = 188 * LockCount + 8943480; /*0x411e0c*/
  if ( (dword_8877A0[47 * LockCount] & 1) == 0 ) /*0x411e13*/
  {
    lpCriticalSectiona = (struct _RTL_CRITICAL_SECTION *)(188 * LockCount + 8943640); /*0x411e9b*/
    EnterCriticalSection(lpCriticalSectiona); /*0x411e9f*/
    v6 = *(_DWORD *)(v3 + 140); /*0x411ea5*/
    v7 = (int **)(v3 + 140); /*0x411eab*/
    if ( v6 ) /*0x411eb3*/
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 72))(*(_DWORD *)(v3 + 140)); /*0x411eb8*/
      (*(void (__stdcall **)(int *))(**v7 + 8))(*v7); /*0x411ec0*/
      *v7 = 0; /*0x411ec3*/
    }
    *(_DWORD *)(v3 + 144) = 2 * (int)lpCriticalSection[6].OwningThread; /*0x411ed8*/
    *(_DWORD *)(v3 + 100) = 0; /*0x411ede*/
    *(_DWORD *)(v3 + 104) = 0; /*0x411ee0*/
    *(_DWORD *)(v3 + 108) = 0; /*0x411ee3*/
    *(_DWORD *)(v3 + 112) = 0; /*0x411ee6*/
    *(_DWORD *)(v3 + 116) = 0; /*0x411ee9*/
    *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 144); /*0x411ef2*/
    *(_DWORD *)(v3 + 100) = 20; /*0x411efa*/
    *(_DWORD *)(v3 + 104) = 65760; /*0x411f01*/
    *(_DWORD *)(v3 + 116) = v3 + 120; /*0x411f08*/
    *(_DWORD *)(v3 + 120) = 0; /*0x411f0b*/
    *(_DWORD *)(v3 + 124) = 0; /*0x411f0d*/
    *(_DWORD *)(v3 + 128) = 0; /*0x411f10*/
    *(_DWORD *)(v3 + 132) = 0; /*0x411f13*/
    *(_WORD *)(v3 + 136) = 0; /*0x411f16*/
    *(_WORD *)(v3 + 120) = 1; /*0x411f1a*/
    v8 = *(unsigned __int8 *)(v3 + 11); /*0x411f1f*/
    v9 = *(unsigned __int8 *)(v3 + 10); /*0x411f24*/
    *(_WORD *)(v3 + 134) = v8; /*0x411f29*/
    v10 = *(unsigned __int16 *)(v3 + 8); /*0x411f30*/
    v11 = v9 * (v8 >> 3); /*0x411f38*/
    *(_WORD *)(v3 + 132) = v11; /*0x411f3b*/
    *(_DWORD *)(v3 + 124) = v10; /*0x411f4a*/
    *(_WORD *)(v3 + 122) = v9; /*0x411f4d*/
    *(_DWORD *)(v3 + 128) = v10 * v11; /*0x411f51*/
    DirectSoundAudio = Audio::GetDirectSound(); /*0x411f57*/
    DirectSoundAudio->lpVtbl->CreateSoundBuffer( /*0x411f63*/
      DirectSoundAudio,
      (LPCDSBUFFERDESC)(v3 + 100),
      (LPDIRECTSOUNDBUFFER *)(v3 + 140),
      0);
    if ( *v7 ) /*0x411f66*/
    {
      dword_88776C(lpCriticalSection); /*0x411f84*/
      dword_88776C(lpCriticalSection); /*0x411f8b*/
      v13 = *v7; /*0x411f91*/
      *(_DWORD *)(v3 + 68) = 0; /*0x411f96*/
      *(_DWORD *)(v3 + 156) = 0; /*0x411f99*/
      *(_DWORD *)(v3 + 148) = 0; /*0x411f9f*/
      (*(void (__stdcall **)(int *, _DWORD))(*v13 + 52))(v13, 0); /*0x411fa9*/
      v14 = Math::RoundToInt(*(float *)&flt_A8EB9C * 255.0); /*0x411fb8*/
      v15 = *v7; /*0x411fbd*/
      *(_DWORD *)(v3 + 4) = v14; /*0x411fc1*/
      v16 = *v15; /*0x411fca*/
      v17 = sub_40A900((unsigned __int8)v14); /*0x411fcc*/
      (*(void (__stdcall **)(int *, int))(v16 + 60))(*v7, v17); /*0x411fd5*/
      v18 = (*(int (__stdcall **)(int *, _DWORD, _DWORD, int))(**v7 + 48))(*v7, 0, 0, 1); /*0x411fe8*/
      LeaveCriticalSection(lpCriticalSectiona); /*0x411feb*/
      v19 = -(v18 != 0); /*0x411ff6*/
      LOBYTE(v19) = v19 & 0xF4; /*0x411ff9*/
      return v19 - 1; /*0x411ffc*/
    }
    LeaveCriticalSection(lpCriticalSectiona); /*0x411f73*/
    return -13; /*0x411f82*/
  }
  if ( !byte_887778[188 * LockCount] || !dword_887804[47 * LockCount] ) /*0x411e1e*/
    return -13; /*0x411e26*/
  EnterCriticalSection((LPCRITICAL_SECTION)(188 * LockCount + 8943640)); /*0x411e33*/
  if ( (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v3 + 140) + 48))( /*0x411e48*/
         *(_DWORD *)(v3 + 140),
         0,
         0,
         1) )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 160)); /*0x411e87*/
    return -13; /*0x411e8d*/
  }
  else
  {
    *(_DWORD *)(v3 + 28) = Time::GetElapsedMS() - *(_DWORD *)(v3 + 24); /*0x411e5d*/
    Debug::Log(); /*0x411e60*/
    v4 = *(_DWORD *)(v3 + 40); /*0x411e65*/
    LOBYTE(v4) = v4 & 0xFE; /*0x411e6b*/
    *(_DWORD *)(v3 + 40) = v4; /*0x411e6d*/
    LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 160)); /*0x411e74*/
    return -1; /*0x411e7a*/
  }
}



// ==== 0x00412000  SubmitDirectSoundBufferData  this=-  sig=csp ====
int __cdecl SubmitDirectSoundBufferData(unsigned int a1, char *a2, char *a3)
{
  unsigned int v3; // edi
  char *v4; // ebx
  int v5; // ebp
  int *v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // esi
  char *v12; // edx
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  char *v18; // esi
  char *v19; // edi
  char *v20; // esi
  char *v21; // edi
  unsigned int v22; // edx
  unsigned int v23; // ecx
  char *v24; // edi
  char *v25; // esi
  char v26; // cl
  char v27; // al
  unsigned int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // eax
  int v34; // esi
  struct _RTL_CRITICAL_SECTION *v35; // eax
  unsigned int v36; // [esp+38h] [ebp-18h] BYREF
  int v37; // [esp+3Ch] [ebp-14h]
  int v38; // [esp+40h] [ebp-10h]
  LPCRITICAL_SECTION lpCriticalSection; // [esp+44h] [ebp-Ch]
  __int64 v40; // [esp+48h] [ebp-8h]

  v3 = a1; /*0x412007*/
  v4 = a2; /*0x41200b*/
  v5 = 188 * *(_DWORD *)(a1 + 52) + 8943480; /*0x41201c*/
  if ( !a2 || !a3 ) /*0x41202f*/
    return -13; /*0x41202f*/
  lpCriticalSection = (LPCRITICAL_SECTION)(188 * *(_DWORD *)(a1 + 52) + 8943640); /*0x41203c*/
  EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 160)); /*0x412040*/
  if ( v5 ) /*0x412048*/
  {
    v6 = *(int **)(v5 + 140); /*0x41204a*/
    if ( v6 ) /*0x412052*/
    {
      v40 = *(unsigned int *)(v5 + 4); /*0x41205f*/
      if ( *(float *)&flt_A8EB9C * 256.0 != (double)v40 ) /*0x41207a*/
      {
        v7 = Math::RoundToInt(*(float *)&flt_A8EB9C * 255.0); /*0x412088*/
        *(_DWORD *)(v5 + 4) = v7; /*0x41208f*/
        v8 = *v6; /*0x412092*/
        v9 = sub_40A900((unsigned __int8)v7); /*0x41209a*/
        (*(void (__stdcall **)(_DWORD, int))(v8 + 60))(*(_DWORD *)(v5 + 140), v9); /*0x4120a7*/
      }
    }
  }
  v10 = *(_DWORD *)(v5 + 64); /*0x4120aa*/
  v38 = v10; /*0x4120b2*/
  if ( *(_DWORD *)(v5 + 4 * v10 + 72) == 1 ) /*0x4120ba*/
  {
    LeaveCriticalSection(lpCriticalSection); /*0x4120c1*/
    return -13; /*0x4120d3*/
  }
  v12 = a3; /*0x4120d4*/
  *(_DWORD *)(v5 + 4 * v10 + 80) = v4; /*0x4120d8*/
  *(_DWORD *)(v5 + 4 * v10 + 88) = v12; /*0x4120dc*/
  *(_DWORD *)(v5 + 4 * v10 + 72) = 1; /*0x4120e0*/
  v13 = dword_887804[47 * *(_DWORD *)(v3 + 52)]; /*0x4120ef*/
  v14 = 188 * *(_DWORD *)(v3 + 52) + 8943480; /*0x4120f8*/
  if ( v13 ) /*0x4120ff*/
  {
    v37 = *((_DWORD *)&unk_887814 + 47 * *(_DWORD *)(v3 + 52)); /*0x41210d*/
    if ( !(*(int (__stdcall **)(int, int, _DWORD, char **, unsigned int *, char **, unsigned int *, _DWORD))(*(_DWORD *)v13 + 44))( /*0x412134*/
            v13,
            v37,
            *(_DWORD *)(v3 + 156),
            &a2,
            &a1,
            &a3,
            &v36,
            0) )
    {
      v15 = *(_DWORD *)(v14 + 64); /*0x41213f*/
      LODWORD(v40) = v15; /*0x412146*/
      v16 = *(_DWORD *)(v14 + 4 * v15 + 88); /*0x41214a*/
      if ( v16 <= a1 ) /*0x412150*/
      {
        v18 = *(char **)(v14 + 4 * v15 + 80); /*0x412199*/
        v19 = a2; /*0x41219d*/
      }
      else
      {
        qmemcpy(a2, *(const void **)(v14 + 4 * v15 + 80), a1); /*0x41215f*/
        v17 = *(_DWORD *)(v14 + 4 * v15 + 88) - a1; /*0x412174*/
        if ( v17 <= v36 ) /*0x412178*/
        {
          v20 = *(char **)(v14 + 4 * v15 + 80); /*0x412186*/
          v21 = a3; /*0x41218a*/
          v22 = *(_DWORD *)(v14 + 4 * v15 + 88) - a1; /*0x41218e*/
          v23 = v17 >> 2; /*0x412190*/
          qmemcpy(a3, v20, 4 * v23); /*0x412193*/
          v25 = &v20[4 * v23]; /*0x412193*/
          v24 = &v21[4 * v23]; /*0x412193*/
          v26 = v22; /*0x412195*/
LABEL_18:
          qmemcpy(v24, v25, v26 & 3); /*0x4121aa*/
          (*(void (__stdcall **)(_DWORD, char *, unsigned int, char *, unsigned int))(**(_DWORD **)(v14 + 140) + 76))( /*0x4121cc*/
            *(_DWORD *)(v14 + 140),
            a2,
            a1,
            a3,
            v36);
          v29 = v37; /*0x4121cf*/
          v30 = v40; /*0x4121d3*/
          *(_DWORD *)(v14 + 152) = v37; /*0x4121d7*/
          v31 = *(_DWORD *)(v14 + 4 * v30 + 88); /*0x4121dd*/
          v32 = *(_DWORD *)(v14 + 144); /*0x4121e1*/
          v33 = v31 + v29; /*0x4121e7*/
          *(_DWORD *)(v14 + 156) = v33; /*0x4121eb*/
          if ( v33 >= v32 ) /*0x4121f1*/
            *(_DWORD *)(v14 + 156) = 0; /*0x4121f3*/
          v10 = v38; /*0x4121fd*/
          goto LABEL_21; /*0x4121fd*/
        }
        v18 = *(char **)(v14 + 4 * v15 + 80); /*0x41217a*/
        v19 = a3; /*0x41217e*/
        v16 = v36; /*0x412182*/
      }
      v27 = v16; /*0x4121a1*/
      v28 = v16 >> 2; /*0x4121a3*/
      qmemcpy(v19, v18, 4 * v28); /*0x4121a6*/
      v25 = &v18[4 * v28]; /*0x4121a6*/
      v24 = &v19[4 * v28]; /*0x4121a6*/
      v26 = v27; /*0x4121a8*/
      goto LABEL_18; /*0x4121a8*/
    }
  }
LABEL_21:
  v34 = v10 + 1; /*0x412201*/
  if ( v34 >= 2 ) /*0x412205*/
    v34 = 0; /*0x412207*/
  v35 = lpCriticalSection; /*0x412209*/
  *(_DWORD *)(v5 + 64) = v34; /*0x41220d*/
  LeaveCriticalSection(v35); /*0x412211*/
  return -1; /*0x4120c7*/
}



// ==== 0x004123A0  fptc  this=-  sig=csp ====
void __stdcall fptc(UINT uTimerID, UINT uMsg, DWORD_PTR dwUser, DWORD_PTR dw1, DWORD_PTR dw2)
{
  int v5; // eax
  int v6; // esi
  volatile LONG *v7; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // edi
  int v9; // eax
  char v10; // bl
  unsigned int v11; // eax
  int v12; // eax
  int v13; // edi
  char v14; // [esp+2Bh] [ebp-11h]
  _BYTE v15[4]; // [esp+2Ch] [ebp-10h] BYREF
  unsigned int v16; // [esp+30h] [ebp-Ch] BYREF
  volatile LONG *lpAddend; // [esp+34h] [ebp-8h]
  _BYTE v18[4]; // [esp+38h] [ebp-4h] BYREF

  v14 = 0; /*0x4123ab*/
  v5 = *(_DWORD *)(dwUser + 52); /*0x4123b0*/
  v6 = 188 * v5 + 8943480; /*0x4123bb*/
  v7 = (volatile LONG *)(188 * v5 + 8943664); /*0x4123c2*/
  lpAddend = v7; /*0x4123c9*/
  if ( InterlockedIncrement(v7) != 1 || (*(_BYTE *)(v6 + 40) & 1) != 0 ) /*0x4123e0*/
    goto LABEL_21; /*0x4123e0*/
  v8 = (struct _RTL_CRITICAL_SECTION *)(v6 + 160); /*0x4123e6*/
  EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 160)); /*0x4123f1*/
  v9 = *(_DWORD *)(v6 + 140); /*0x4123f7*/
  if ( !v9 /*0x412424*/
    || *(_DWORD *)(v6 + 96) != uTimerID
    || ((*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v9 + 36))(v9, v15), (v15[0] & 5) == 0) )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 160)); /*0x412529*/
LABEL_21:
    InterlockedDecrement(v7); /*0x41252f*/
    return; /*0x412530*/
  }
  v10 = 0; /*0x41243d*/
  if ( (*(int (__stdcall **)(_DWORD, unsigned int *, _BYTE *))(**(_DWORD **)(v6 + 140) + 16))( /*0x412447*/
         *(_DWORD *)(v6 + 140),
         &v16,
         v18) == -2005401450 )
  {
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v6 + 140) + 80))(*(_DWORD *)(v6 + 140)); /*0x412452*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v6 + 140) + 72))(*(_DWORD *)(v6 + 140)); /*0x41245e*/
    v10 = 1; /*0x412467*/
    v14 = 1; /*0x41246d*/
    (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(v6 + 140) + 52))(*(_DWORD *)(v6 + 140), 0); /*0x412472*/
    *(_DWORD *)(v6 + 152) = 0; /*0x412475*/
    *(_DWORD *)(v6 + 156) = 0; /*0x41247b*/
  }
  v11 = *(_DWORD *)(v6 + 156); /*0x412483*/
  if ( v16 < v11 || v16 >= *(_DWORD *)(v6 + 144) >> 1 && !v11 || v10 == 1 ) /*0x4124a4*/
  {
    dword_887770(dwUser, *(_DWORD *)(v6 + 4 * *(_DWORD *)(v6 + 68) + 80)); /*0x4124af*/
    v12 = *(_DWORD *)(v6 + 68); /*0x4124b5*/
    v13 = v12 + 1; /*0x4124c2*/
    ++*(_DWORD *)(v6 + 148); /*0x4124c5*/
    if ( v12 + 1 >= 2 ) /*0x4124ce*/
      v13 = 0; /*0x4124d0*/
    *(_DWORD *)(v6 + 4 * v12 + 72) = 0; /*0x4124d3*/
    dword_88776C(dwUser); /*0x4124db*/
    if ( *(_DWORD *)(v6 + 4 * v13 + 72) ) /*0x4124e1*/
      *(_DWORD *)(v6 + 68) = v13; /*0x4124ec*/
    if ( v14 == 1 ) /*0x4124f4*/
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v6 + 140) + 48))( /*0x412505*/
        *(_DWORD *)(v6 + 140),
        0,
        0,
        1);
    v8 = (struct _RTL_CRITICAL_SECTION *)(v6 + 160); /*0x412508*/
  }
  LeaveCriticalSection(v8); /*0x41250d*/
  InterlockedDecrement(lpAddend); /*0x412518*/
}



// ==== 0x00412540  j_Time_GetElapsedMS  this=-  sig=ida-proto ====
// attributes: thunk
int j_Time_GetElapsedMS()
{
  return Time::GetElapsedMS();
}



// ==== 0x004125F0  sub_4125F0  this=-  sig=ida-proto ====
int sub_4125F0()
{
  return 1; /*0x4125f5*/
}



// ==== 0x00412600  sub_412600  this=-  sig=ida-proto ====
int sub_412600()
{
  return 1; /*0x412605*/
}



// ==== 0x00412610  ObjectClass::method  this=INIClass  sig=csp ====
int __thiscall sub_412610(char *this)
{
  char *v1; // edi
  int v2; // esi
  char v3; // al
  int v4; // esi

  v1 = this; /*0x412612*/
  v2 = 0; /*0x412614*/
  while ( v1 ) /*0x412618*/
  {
    if ( !isxdigit(*v1) ) /*0x41261e*/
      break; /*0x412628*/
    v3 = *v1; /*0x41262a*/
    v4 = 16 * v2; /*0x41262c*/
    ++v1; /*0x41262f*/
    if ( v3 < 48 || v3 > 57 ) /*0x412636*/
      v2 = v4 + toupper(v3) - 55; /*0x41264d*/
    else
      v2 = v4 + v3 - 48; /*0x41263b*/
  }
  return v2; /*0x412657*/
}



// ==== 0x00412660  sub_412660  this=-  sig=ida-proto ====
void sub_412660()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41266c*/
  dbl_887858 = Math::Sqrt(v0 + v0); /*0x41267e*/
}



// ==== 0x00412690  sub_412690  this=-  sig=ida-proto ====
void sub_412690()
{
  dbl_889E40 = dbl_887858 / 60.0; /*0x41269c*/
}



// ==== 0x004126B0  sub_4126B0  this=-  sig=ida-proto ====
void sub_4126B0()
{
  dbl_889E28 = 1.0 / dbl_889E40; /*0x4126bc*/
}



// ==== 0x004126D0  sub_4126D0  this=-  sig=ida-proto ====
void sub_4126D0()
{
  dbl_889E20 = 0.0174532925199433 * 45.0; /*0x4126dc*/
}



// ==== 0x004126F0  sub_4126F0  this=-  sig=ida-proto ====
void sub_4126F0()
{
  dbl_887860 = 0.0174532925199433 * 60.0; /*0x4126fc*/
}



// ==== 0x00412710  sub_412710  this=-  sig=ida-proto ====
void sub_412710()
{
  dbl_887838 = 0.0174532925199433 * 90.0; /*0x41271c*/
}



// ==== 0x00412730  sub_412730  this=-  sig=ida-proto ====
__int64 sub_412730()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_887838 - dbl_887860); /*0x412742*/
  result = Math::RoundToInt(v0 * dbl_887858 * 0.5); /*0x412756*/
  dword_889E48 = result; /*0x41275b*/
  return result; /*0x412760*/
}



// ==== 0x00412770  sub_412770  this=-  sig=ida-proto ====
void sub_412770()
{
  dbl_887868 = Math::ArcTan((double)dword_889E48 * 0.00390625); /*0x412787*/
}



// ==== 0x004127A0  sub_4127A0  this=-  sig=ida-proto ====
void sub_4127A0()
{
  dbl_887880 = Math::ArcTan((double)(2 * dword_889E48) / dbl_887858); /*0x4127c2*/
}



// ==== 0x004127D0  sub_4127D0  this=-  sig=ida-proto ====
__int64 sub_4127D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_889E48) + 0.5); /*0x4127eb*/
  dword_889E3C = result; /*0x4127f0*/
  return result; /*0x4127f6*/
}



// ==== 0x00412800  sub_412800  this=-  sig=ida-proto ====
int sub_412800()
{
  dword_887850 = 0; /*0x412802*/
  return 0; /*0x41280e*/
}



// ==== 0x00412810  sub_412810  this=-  sig=ida-proto ====
int sub_412810()
{
  dword_887870 = 0; /*0x412812*/
  dword_887874 = 0; /*0x412817*/
  dword_887878 = 0; /*0x41281c*/
  return 0; /*0x412821*/
}



// ==== 0x00412830  sub_412830  this=-  sig=ida-proto ====
int sub_412830()
{
  dword_889E38 = 0; /*0x412835*/
  dword_889E30 = 128; /*0x41283f*/
  dword_889E34 = 128; /*0x412844*/
  return 128; /*0x412849*/
}



// ==== 0x00412850  sub_412850  this=-  sig=ida-proto ====
int sub_412850()
{
  dword_887840 = 0; /*0x412852*/
  dword_887844 = 0; /*0x412857*/
  dword_887848 = 0; /*0x41285c*/
  dword_88784C = 0; /*0x412861*/
  return 0; /*0x412866*/
}



// ==== 0x00412870  sub_412870  this=-  sig=ida-proto ====
int sub_412870()
{
  _DWORD *v0; // esi
  int v1; // edi

  v0 = g_CellClassManager; /*0x412873*/
  v1 = 400; /*0x412878*/
  do /*0x41289c*/
  {
    EventClass::resetEvent(v0, 0, 0); /*0x412883*/
    *v0 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x412888*/
    v0[5] = 10; /*0x41288e*/
    v0[4] = 0; /*0x412895*/
    v0 += 6; /*0x412898*/
    --v1; /*0x41289b*/
  }
  while ( v1 ); /*0x41289c*/
  dword_889E0C = 0; /*0x4128a3*/
  dword_889E10 = 0; /*0x4128a9*/
  byte_889E14 = 1; /*0x4128af*/
  byte_889E15 = 0; /*0x4128b6*/
  dword_889E08 = (int)&DynamicVectorClass<TechnoClass *>::`vftable'; /*0x4128bc*/
  dword_889E1C = 10; /*0x4128c6*/
  dword_889E18 = 0; /*0x4128d0*/
  return atexit(sub_4128F0); /*0x4128de*/
}



// ==== 0x004128F0  sub_4128F0  this=-  sig=ida-proto ====
void __cdecl sub_4128F0()
{
  _DWORD *v0; // esi
  int v1; // ebp
  int v2; // edi
  int v3; // esi
  void **v4; // esi
  int v5; // edi
  void *v6; // eax

  v0 = g_CellClassManager; /*0x4128f4*/
  v1 = 400; /*0x4128f9*/
  do /*0x412917*/
  {
    v2 = v0[2]; /*0x412902*/
    (*(void (__thiscall **)(_DWORD *))(*v0 + 12))(v0); /*0x412907*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v0 + 8))(v0, v2, 0); /*0x412910*/
    v0 += 6; /*0x412913*/
    --v1; /*0x412916*/
  }
  while ( v1 ); /*0x412917*/
  v3 = dword_889E10; /*0x41291e*/
  (*(void (__thiscall **)(int *))(dword_889E08 + 12))(&dword_889E08); /*0x412929*/
  (*(void (__thiscall **)(int *, int, _DWORD))(dword_889E08 + 8))(&dword_889E08, v3, 0); /*0x412939*/
  dword_889E08 = (int)&VectorClass<TechnoClass *>::`vftable'; /*0x412948*/
  if ( dword_889E0C && byte_889E15 ) /*0x412956*/
  {
    __3_YAXPAX_Z(dword_889E0C); /*0x412959*/
    dword_889E0C = 0; /*0x412961*/
  }
  byte_889E15 = 0; /*0x412967*/
  dword_889E10 = 0; /*0x41296d*/
  v4 = &dword_889E0C; /*0x412973*/
  v5 = 400; /*0x412978*/
  do /*0x4129a1*/
  {
    v6 = *(v4 - 6); /*0x41297d*/
    v4 -= 6; /*0x412980*/
    *(v4 - 1) = &VectorClass<TechnoClass *>::`vftable'; /*0x412985*/
    if ( v6 ) /*0x412988*/
    {
      if ( *((_BYTE *)v4 + 9) ) /*0x41298a*/
      {
        __3_YAXPAX_Z(v6); /*0x412990*/
        *v4 = 0; /*0x412998*/
      }
    }
    --v5; /*0x41299a*/
    *((_BYTE *)v4 + 9) = 0; /*0x41299b*/
    v4[1] = 0; /*0x41299e*/
  }
  while ( v5 ); /*0x4129a1*/
}



// ==== 0x004129C0  DynamicArray::AddFromList  this=DynamicArray  sig=csp ====
int __thiscall DynamicArray_AddFromList(char *this, int a2)
{
  int v2; // ebx
  char *v3; // edi
  int result; // eax
  char *v5; // esi
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // [esp+Ch] [ebp+4h]

  v2 = 0; /*0x4129c6*/
  v3 = this + 24 * a2; /*0x4129cb*/
  result = *((_DWORD *)v3 + 4); /*0x4129ce*/
  v11 = result; /*0x4129d4*/
  if ( result > 0 ) /*0x4129d8*/
  {
    v5 = this + 9600; /*0x4129dc*/
    do /*0x412a2e*/
    {
      v6 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)v3 + 24))(v3, v2); /*0x4129ed*/
      v7 = *((_DWORD *)v5 + 2); /*0x4129ef*/
      if ( *((_DWORD *)v5 + 4) < v7 /*0x412a11*/
        || (v5[13] || !v7)
        && (v8 = *((_DWORD *)v5 + 5), v8 > 0)
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v5 + 8))(v5, v7 + v8, 0) )
      {
        v9 = *((_DWORD *)v5 + 4); /*0x412a18*/
        v10 = *((_DWORD *)v5 + 1); /*0x412a1b*/
        *((_DWORD *)v5 + 4) = v9 + 1; /*0x412a21*/
        *(_DWORD *)(v10 + 4 * v9) = v6; /*0x412a24*/
      }
      result = v11; /*0x412a27*/
      ++v2; /*0x412a2b*/
    }
    while ( v2 < v11 ); /*0x412a2e*/
  }
  return result; /*0x412a32*/
}



// ==== 0x00412A40  Slider::CalcPosition  this=Slider  sig=csp ====
int __stdcall Slider_CalcPosition(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  v3 = a1 / 20; /*0x412a64*/
  v4 = a2 + a1 % 20; /*0x412a66*/
  if ( v4 < 20 )
    v5 = v4 < 0 ? 0 : v4;
  else
    v5 = 19; /*0x412a73*/
  v6 = v3 + a3; /*0x412a88*/
  if ( v3 + a3 < 0 || v6 <= 19 )
    return v5 + 20 * (v6 < 0 ? 0 : v6);
  else
    return v5 + 380; /*0x412a9b*/
}



// ==== 0x00412B40  AircraftTrackerClass::FillCurrentVector  this=AircraftTrackerClass  sig=csp ====
int __thiscall AircraftTrackerClass::FillCurrentVector(int this, int a2, int a3)
{
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // esi
  int v14; // ebx
  int v15; // edi
  _DWORD *v16; // ebp
  int v17; // edi
  int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  int i; // esi
  int v23; // edi
  int v24; // ebp
  int v25; // edx
  int v26; // eax
  int v27; // esi
  __int16 v28; // ax
  int v29; // esi
  int v30; // edi
  int v31; // eax
  int v32; // esi
  int v33; // eax
  int v34; // eax
  int j; // esi
  int v36; // edi
  int v37; // ebp
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // eax
  __int16 v42; // ax
  int v43; // esi
  int v44; // edi
  int v45; // eax
  int v46; // esi
  int v47; // eax
  int v48; // eax
  int k; // esi
  int v50; // edi
  int v51; // ebp
  int v52; // ecx
  int v53; // edx
  int v54; // eax
  int v55; // eax
  int v56; // esi
  int v57; // edi
  int v58; // eax
  int v59; // esi
  int v60; // eax
  int v61; // eax
  int m; // esi
  int v63; // edi
  int v64; // ebp
  int v65; // edx
  int v66; // eax
  int v67; // esi
  int v68; // eax
  int v69; // esi
  int v70; // edx
  int v71; // eax
  int v72; // esi
  int v73; // eax
  int v74; // eax
  int v75; // edi
  int v76; // ebp
  int v77; // ebp
  int v78; // edx
  int v79; // eax
  int v80; // ecx
  int v81; // eax
  int v82; // eax
  int v83; // esi
  int v84; // ecx
  int v85; // ebx
  int v86; // edi
  int v87; // eax
  int v88; // ecx
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // ecx
  int v93; // ebp
  int v94; // edi
  char *v95; // esi
  int v96; // ebx
  int v97; // eax
  int v98; // eax
  int result; // eax
  int v100; // ebp
  int v101; // ebx
  int v102; // eax
  int v103; // eax
  int v104; // ebp
  int v105; // ebx
  int v106; // eax
  int v107; // eax
  int v109; // [esp+24h] [ebp-30h] BYREF
  int v110; // [esp+28h] [ebp-2Ch]
  int v111; // [esp+2Ch] [ebp-28h]
  int v112; // [esp+30h] [ebp-24h]
  int v113; // [esp+34h] [ebp-20h] BYREF
  int v114; // [esp+38h] [ebp-1Ch]
  int v115; // [esp+40h] [ebp-14h] BYREF
  int v116; // [esp+44h] [ebp-10h]
  _DWORD v117[3]; // [esp+48h] [ebp-Ch] BYREF
  int v118; // [esp+58h] [ebp+4h]

  if ( a3 <= 1 ) /*0x412b58*/
    a3 = 1; /*0x412b5a*/
  v4 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 72))(a2, v117); /*0x412b6e*/
  v5 = *Coord::ToCell(v4, &v115); /*0x412b78*/
  v114 = v5; /*0x412b7d*/
  if ( (v5 & 0x8000u) == 0 ) /*0x412b81*/
    v6 = (__int16)v5; /*0x412b87*/
  else
    v6 = 0; /*0x412b83*/
  if ( v114 >= 0 ) /*0x412b91*/
    v7 = SHIWORD(v114); /*0x412b97*/
  else
    v7 = 0; /*0x412b93*/
  v8 = v6; /*0x412ba7*/
  v9 = 19; /*0x412bae*/
  v10 = v8 / (dword_87F914 / 20); /*0x412bb9*/
  if ( v10 <= 19 ) /*0x412bbe*/
    v9 = v10; /*0x412bc0*/
  v11 = v7 / (dword_87F918 / 20); /*0x412bdc*/
  if ( v11 > 19 ) /*0x412be1*/
    v11 = 19; /*0x412be3*/
  v12 = v9 + 20 * v11; /*0x412beb*/
  v13 = 0; /*0x412bee*/
  v118 = v12; /*0x412bf0*/
  v14 = *(_DWORD *)(this + 24 * v12 + 16); /*0x412bf7*/
  v15 = this + 24 * v12; /*0x412bfb*/
  if ( v14 > 0 ) /*0x412c01*/
  {
    v16 = (_DWORD *)(this + 9600); /*0x412c03*/
    do /*0x412c24*/
    {
      v113 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v15 + 24))(v15, v13); /*0x412c15*/
      DynamicVector::AddItem(v16, &v113); /*0x412c1c*/
      ++v13; /*0x412c21*/
    }
    while ( v13 < v14 ); /*0x412c24*/
  }
  v109 = v114; /*0x412c2e*/
  v17 = 0; /*0x412c32*/
  v111 = 0; /*0x412c36*/
  v113 = 0; /*0x412c3d*/
  v112 = 0; /*0x412c41*/
  v110 = 0; /*0x412c45*/
  if ( (__int16)(a3 + v114) >= 0 ) /*0x412c49*/
    v18 = (__int16)(a3 + v114); /*0x412c4f*/
  else
    v18 = 0; /*0x412c4b*/
  if ( v109 >= 0 ) /*0x412c5a*/
    v17 = SHIWORD(v109); /*0x412c5c*/
  v19 = v18 / (dword_87F914 / 20); /*0x412c79*/
  v20 = 19; /*0x412c7b*/
  if ( v19 <= 19 ) /*0x412c83*/
    v20 = v19; /*0x412c85*/
  v21 = v17 / (dword_87F918 / 20); /*0x412ca1*/
  if ( v21 > 19 ) /*0x412ca6*/
    v21 = 19; /*0x412ca8*/
  for ( i = v20 + 20 * v21; i != v118; i = v27 + 20 * v25 )
  {
    v23 = 0; /*0x412cc8*/
    ++v112; /*0x412cca*/
    v24 = *(_DWORD *)(this + 24 * i + 16); /*0x412cd1*/
    if ( v24 > 0 ) /*0x412cda*/
    {
      do /*0x412cff*/
      {
        v109 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 24 * i) + 24))(this + 24 * i, v23); /*0x412ced*/
        DynamicVector::AddItem((_DWORD *)(this + 9600), &v109); /*0x412cf7*/
        ++v23; /*0x412cfc*/
      }
      while ( v23 < v24 ); /*0x412cff*/
    }
    v25 = i / 20; /*0x412d1c*/
    v26 = i % 20 - 1; /*0x412d1e*/
    if ( v26 < 20 )
      v27 = v26 < 0 ? 0 : v26;
    else
      v27 = 19; /*0x412d2a*/
    if ( v25 < 0 ) /*0x412d3f*/
    {
      v25 = 0; /*0x412d4d*/
    }
    else if ( v25 > 19 ) /*0x412d44*/
    {
      v25 = 19; /*0x412d46*/
    }
  }
  v109 = v114; /*0x412d69*/
  v28 = HIWORD(v114) - a3; /*0x412d76*/
  if ( (v114 & 0x8000u) == 0 ) /*0x412d7b*/
    v29 = (__int16)v114; /*0x412d81*/
  else
    v29 = 0; /*0x412d7d*/
  if ( v28 >= 0 ) /*0x412d87*/
    v30 = v28; /*0x412d8d*/
  else
    v30 = 0; /*0x412d89*/
  v31 = v29; /*0x412d9d*/
  v32 = 19; /*0x412da4*/
  v33 = v31 / (dword_87F914 / 20); /*0x412daf*/
  if ( v33 <= 19 ) /*0x412db4*/
    v32 = v33; /*0x412db6*/
  v34 = v30 / (dword_87F918 / 20); /*0x412dd2*/
  if ( v34 > 19 ) /*0x412dd7*/
    v34 = 19; /*0x412dd9*/
  for ( j = v32 + 20 * v34; j != v118; j = v38 + 20 * v41 )
  {
    v36 = 0; /*0x412dfc*/
    ++v111; /*0x412dfe*/
    v37 = *(_DWORD *)(this + 24 * j + 16); /*0x412e02*/
    if ( v37 > 0 ) /*0x412e0b*/
    {
      do /*0x412e30*/
      {
        v109 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 24 * j) + 24))(this + 24 * j, v36); /*0x412e19*/
        DynamicVector::AddItem((_DWORD *)(this + 9600), &v109); /*0x412e28*/
        ++v36; /*0x412e2d*/
      }
      while ( v36 < v37 ); /*0x412e30*/
    }
    v38 = j % 20; /*0x412e41*/
    v39 = j / 20; /*0x412e4d*/
    if ( j % 20 < 0 ) /*0x412e51*/
    {
      v38 = 0; /*0x412e5f*/
    }
    else if ( v38 > 19 ) /*0x412e56*/
    {
      v38 = 19; /*0x412e58*/
    }
    v40 = v39 + 1; /*0x412e61*/
    if ( v39 + 1 < 0 || v40 <= 19 )
      v41 = v40 < 0 ? 0 : v40;
    else
      v41 = 19; /*0x412e6d*/
  }
  v42 = a3 + HIWORD(v114); /*0x412e9c*/
  v109 = v114; /*0x412ea1*/
  if ( (v114 & 0x8000u) == 0 ) /*0x412ea5*/
    v43 = (__int16)v114; /*0x412eab*/
  else
    v43 = 0; /*0x412ea7*/
  if ( v42 >= 0 ) /*0x412eb1*/
    v44 = v42; /*0x412eb7*/
  else
    v44 = 0; /*0x412eb3*/
  v45 = v43; /*0x412ec7*/
  v46 = 19; /*0x412ece*/
  v47 = v45 / (dword_87F914 / 20); /*0x412ed9*/
  if ( v47 <= 19 ) /*0x412ede*/
    v46 = v47; /*0x412ee0*/
  v48 = v44 / (dword_87F918 / 20); /*0x412efc*/
  if ( v48 > 19 ) /*0x412f01*/
    v48 = 19; /*0x412f03*/
  for ( k = v46 + 20 * v48; k != v118; k = v52 + 20 * v55 )
  {
    v50 = 0; /*0x412f26*/
    ++v113; /*0x412f28*/
    v51 = *(_DWORD *)(this + 24 * k + 16); /*0x412f2c*/
    if ( v51 > 0 ) /*0x412f35*/
    {
      do /*0x412f5a*/
      {
        v109 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 24 * k) + 24))(this + 24 * k, v50); /*0x412f43*/
        DynamicVector::AddItem((_DWORD *)(this + 9600), &v109); /*0x412f52*/
        ++v50; /*0x412f57*/
      }
      while ( v50 < v51 ); /*0x412f5a*/
    }
    v52 = k % 20; /*0x412f6b*/
    v53 = k / 20; /*0x412f77*/
    if ( k % 20 < 0 ) /*0x412f7b*/
    {
      v52 = 0; /*0x412f89*/
    }
    else if ( v52 > 19 ) /*0x412f80*/
    {
      v52 = 19; /*0x412f82*/
    }
    v54 = v53 - 1; /*0x412f8b*/
    if ( v53 - 1 < 0 || v54 <= 19 )
      v55 = v54 < 0 ? 0 : v54;
    else
      v55 = 19; /*0x412f97*/
  }
  v109 = v114; /*0x412fc2*/
  if ( (__int16)(v114 - a3) >= 0 ) /*0x412fcb*/
    v56 = (__int16)(v114 - a3); /*0x412fd1*/
  else
    v56 = 0; /*0x412fcd*/
  if ( v109 >= 0 ) /*0x412fdc*/
    v57 = SHIWORD(v109); /*0x412fe2*/
  else
    v57 = 0; /*0x412fde*/
  v58 = v56; /*0x412ff2*/
  v59 = 19; /*0x412ff9*/
  v60 = v58 / (dword_87F914 / 20); /*0x413004*/
  if ( v60 <= 19 ) /*0x413009*/
    v59 = v60; /*0x41300b*/
  v61 = v57 / (dword_87F918 / 20); /*0x413027*/
  if ( v61 > 19 ) /*0x41302c*/
    v61 = 19; /*0x41302e*/
  for ( m = v59 + 20 * v61; m != v118; m = v67 + 20 * v65 )
  {
    v63 = 0; /*0x413051*/
    ++v110; /*0x413053*/
    v64 = *(_DWORD *)(this + 24 * m + 16); /*0x413057*/
    if ( v64 > 0 ) /*0x413060*/
    {
      do /*0x413085*/
      {
        a3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 24 * m) + 24))(this + 24 * m, v63); /*0x41306e*/
        DynamicVector::AddItem((_DWORD *)(this + 9600), &a3); /*0x41307d*/
        ++v63; /*0x413082*/
      }
      while ( v63 < v64 ); /*0x413085*/
    }
    v65 = m / 20; /*0x4130a2*/
    v66 = m % 20 + 1; /*0x4130a4*/
    if ( v66 < 20 )
      v67 = v66 < 0 ? 0 : v66;
    else
      v67 = 19; /*0x4130b0*/
    if ( v65 < 0 ) /*0x4130c5*/
    {
      v65 = 0; /*0x4130d3*/
    }
    else if ( v65 > 19 ) /*0x4130ca*/
    {
      v65 = 19; /*0x4130cc*/
    }
  }
  if ( v111 )
  {
    v68 = v110; /*0x4130f3*/
    if ( v110 )
    {
      if ( v111 < v110 ) /*0x413105*/
        v68 = v111; /*0x413107*/
      v69 = v118; /*0x413109*/
      if ( v68 > 0 )
      {
        a3 = v68; /*0x413115*/
        do
        {
          v70 = v69 / 20; /*0x413134*/
          v71 = v69 % 20 - 1; /*0x413136*/
          if ( v71 < 20 )
            v72 = v71 < 0 ? 0 : v71;
          else
            v72 = 19; /*0x413142*/
          v73 = v70 - 1; /*0x413155*/
          if ( v70 - 1 < 0 || v73 <= 19 )
            v74 = v73 < 0 ? 0 : v73;
          else
            v74 = 19; /*0x413161*/
          v75 = 0; /*0x413179*/
          v69 = v72 + 20 * v74; /*0x41317b*/
          v76 = *(_DWORD *)(this + 24 * v69 + 16); /*0x413181*/
          if ( v76 > 0 ) /*0x41318a*/
          {
            do /*0x4131af*/
            {
              v109 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 24 * v69) + 24))(this + 24 * v69, v75); /*0x41319d*/
              DynamicVector::AddItem((_DWORD *)(this + 9600), &v109); /*0x4131a7*/
              ++v75; /*0x4131ac*/
            }
            while ( v75 < v76 ); /*0x4131af*/
          }
          --a3; /*0x4131b6*/
        }
        while ( a3 );
      }
      if ( v111 >= 2 && v110 >= 2 )
      {
        v77 = v118 % 20; /*0x4131ee*/
        v109 = v118 % 20; /*0x4131f7*/
        v78 = v118 / 20; /*0x4131fe*/
        v79 = v118 % 20 - 2; /*0x413200*/
        v114 = v118 / 20; /*0x413205*/
        if ( v79 < 20 )
          v80 = v79 < 0 ? 0 : v79;
        else
          v80 = 19; /*0x413210*/
        v81 = v78 - 1; /*0x413221*/
        if ( v78 - 1 < 0 || v81 <= 19 )
          v82 = v81 < 0 ? 0 : v81;
        else
          v82 = 19; /*0x41322d*/
        v83 = 0; /*0x413241*/
        v84 = 3 * (v80 + 20 * v82); /*0x413246*/
        v85 = *(_DWORD *)(this + 8 * v84 + 16); /*0x41324d*/
        v86 = this + 8 * v84; /*0x413251*/
        if ( v85 > 0 ) /*0x413256*/
        {
          do /*0x41327b*/
          {
            a3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v86 + 24))(v86, v83); /*0x413268*/
            DynamicVector::AddItem((_DWORD *)(this + 9600), &a3); /*0x413273*/
            ++v83; /*0x413278*/
          }
          while ( v83 < v85 ); /*0x41327b*/
          v77 = v109; /*0x41327d*/
          v78 = v114; /*0x413281*/
        }
        v87 = v77 - 1; /*0x413285*/
        if ( v77 - 1 < 0 || v87 <= 19 )
          v88 = v87 < 0 ? 0 : v87;
        else
          v88 = 19; /*0x413291*/
        v89 = v78 - 2; /*0x4132a2*/
        if ( v78 - 2 < 0 || v89 <= 19 )
          v90 = v89 < 0 ? 0 : v89;
        else
          v90 = 19; /*0x4132ae*/
        DynamicArray::AddFromList((char *)this, v88 + 20 * v90); /*0x4132ca*/
      }
    }
  }
  v91 = v113; /*0x4132cf*/
  if ( v113 && (v92 = v110) != 0 ) /*0x4132e1*/
  {
    v93 = v113; /*0x4132e5*/
    if ( v113 >= v110 ) /*0x4132e7*/
      v93 = v110; /*0x4132e9*/
    v94 = v118; /*0x4132eb*/
    v95 = (char *)this; /*0x4132ef*/
    v96 = v118; /*0x4132f5*/
    if ( v93 > 0 ) /*0x4132f7*/
    {
      do /*0x413316*/
      {
        v96 = Slider::CalcPosition(v96, -1, 1); /*0x41330b*/
        DynamicArray::AddFromList((char *)this, v96); /*0x413310*/
        --v93; /*0x413315*/
      }
      while ( v93 ); /*0x413316*/
      v91 = v113; /*0x413318*/
      v92 = v110; /*0x41331c*/
    }
    if ( v91 >= 2 && v92 >= 2 ) /*0x413328*/
    {
      v97 = Slider::CalcPosition(v118, -2, 1); /*0x413339*/
      DynamicArray::AddFromList((char *)this, v97); /*0x413341*/
      v98 = Slider::CalcPosition(v118, -1, 2); /*0x413353*/
      DynamicArray::AddFromList((char *)this, v98); /*0x41335b*/
    }
  }
  else
  {
    v95 = (char *)this; /*0x413362*/
    v94 = v118; /*0x413366*/
  }
  result = v111; /*0x41336a*/
  if ( v111 ) /*0x413370*/
  {
    v100 = v112; /*0x413372*/
    if ( v112 ) /*0x413378*/
    {
      if ( v111 < v112 ) /*0x41337c*/
        v100 = v111; /*0x41337e*/
      v101 = v94; /*0x413382*/
      if ( v100 > 0 ) /*0x413384*/
      {
        do /*0x4133a3*/
        {
          v101 = Slider::CalcPosition(v101, 1, -1); /*0x413398*/
          DynamicArray::AddFromList(v95, v101); /*0x41339d*/
          --v100; /*0x4133a2*/
        }
        while ( v100 ); /*0x4133a3*/
        result = v111; /*0x4133a5*/
      }
      if ( result >= 2 && v112 >= 2 ) /*0x4133b3*/
      {
        v102 = Slider::CalcPosition(v94, 2, -1); /*0x4133c2*/
        DynamicArray::AddFromList(v95, v102); /*0x4133ca*/
        v103 = Slider::CalcPosition(v94, 1, -2); /*0x4133de*/
        result = DynamicArray::AddFromList(v95, v103); /*0x4133e6*/
      }
    }
  }
  v104 = v113; /*0x4133eb*/
  if ( v113 ) /*0x4133f1*/
  {
    result = v112; /*0x4133f7*/
    if ( v112 ) /*0x4133fd*/
    {
      if ( v113 >= v112 ) /*0x413401*/
        v104 = v112; /*0x413403*/
      v105 = v94; /*0x413407*/
      if ( v104 > 0 ) /*0x413409*/
      {
        v116 = 1; /*0x41340b*/
        do /*0x413431*/
        {
          v105 = Slider::CalcPosition(v105, 1, v116); /*0x413426*/
          DynamicArray::AddFromList(v95, v105); /*0x41342b*/
          --v104; /*0x413430*/
        }
        while ( v104 ); /*0x413431*/
        result = v112; /*0x413433*/
      }
      if ( v113 >= 2 && result >= 2 ) /*0x413441*/
      {
        v106 = Slider::CalcPosition(v94, 2, 1); /*0x413452*/
        DynamicArray::AddFromList(v95, v106); /*0x41345a*/
        v107 = Slider::CalcPosition(v94, 1, 2); /*0x41346e*/
        return DynamicArray::AddFromList(v95, v107); /*0x413476*/
      }
    }
  }
  return result; /*0x41347b*/
}



// ==== 0x00413490  nullsub_3  this=-  sig=csp ====
void __stdcall nullsub_3(int a1)
{
  ; /*0x413490*/
}



// ==== 0x004134A0  GadgetGrid::InsertItem  this=GadgetGrid  sig=csp ====
int __thiscall GadgetGrid::InsertItem(GadgetGrid *this, int a2)
{
  int *v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int result; // eax
  GadgetGrid *v12; // esi
  int v13; // ecx
  int GadgetGrid_field_0x04; // edx
  char v15[4]; // [esp+Ch] [ebp-4h] BYREF
  int v16; // [esp+14h] [ebp+4h]

  v4 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 440))(a2, v15); /*0x4134b3*/
  v5 = *v4; /*0x4134b9*/
  v16 = *v4; /*0x4134c0*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 760))(a2, *v4); /*0x4134c4*/
  if ( (v5 & 0x8000u) == 0 ) /*0x4134cd*/
    v5 = (__int16)v5; /*0x4134d3*/
  else
    v5 = 0; /*0x4134cf*/
  if ( v16 >= 0 ) /*0x4134df*/
    v6 = SHIWORD(v16); /*0x4134e5*/
  else
    v6 = 0; /*0x4134e1*/
  v7 = v5 / (*(_DWORD *)&stru_87F5F0.__pad_58[716] / 20); /*0x413504*/
  v8 = 19; /*0x413506*/
  if ( v7 <= 19 ) /*0x41350e*/
    v8 = v7; /*0x413510*/
  v9 = v6 / (*(_DWORD *)&stru_87F5F0.__pad_58[720] / 20); /*0x41352f*/
  if ( v9 > 19 ) /*0x413534*/
    v9 = 19; /*0x413536*/
  v10 = 3 * (v8 + 20 * v9); /*0x413541*/
  result = *((_DWORD *)this + 120 * v9 + 6 * v8 + 2); /*0x413544*/
  v12 = this + v10; /*0x413548*/
  if ( *(_DWORD *)v12[2].__pad_0 < result /*0x413574*/
    || (BYTE1(v12[1].GadgetGrid_field_0x04) || !result)
    && (v13 = v12[2].GadgetGrid_field_0x04, v13 > 0)
    && (result = (*(int (__thiscall **)(GadgetGrid *, int, _DWORD))(*(_DWORD *)v12->__pad_0 + 8))(v12, result + v13, 0),
        (_BYTE)result) )
  {
    result = *(_DWORD *)v12[2].__pad_0; /*0x413576*/
    GadgetGrid_field_0x04 = v12->GadgetGrid_field_0x04; /*0x413579*/
    *(_DWORD *)v12[2].__pad_0 = result + 1; /*0x41357f*/
    *(_DWORD *)(GadgetGrid_field_0x04 + 4 * result) = a2; /*0x413582*/
  }
  return result; /*0x413585*/
}



// ==== 0x00413590  sub_413590  this=-  sig=ida-proto ====
int sub_413590()
{
  return 750; /*0x413595*/
}



// ==== 0x004135A0  ObjectClass::HasLinkedObject  this=ObjectClass  sig=csp ====
int __stdcall ObjectClass::HasLinkedObject(int a1)
{
  int result; // eax

  result = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1) + 224); /*0x4135af*/
  LOBYTE(result) = result && result != a1; /*0x4135c3*/
  return result; /*0x4135bf*/
}



// ==== 0x004135D0  GadgetGrid::RemoveItem  this=GadgetGrid  sig=csp ====
int __thiscall GadgetGrid::RemoveItem(GadgetGrid *this, int a2)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // edx
  GadgetGrid *v9; // esi
  int result; // eax
  int v11; // ecx
  int v12; // ecx
  __int16 v13; // [esp+Ah] [ebp-6h]
  char v14[4]; // [esp+Ch] [ebp-4h] BYREF

  v3 = *(_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 756))(a2, v14); /*0x4135ec*/
  v13 = HIWORD(v3); /*0x4135f4*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 760))(a2, dword_887850); /*0x4135fb*/
  if ( (v3 & 0x8000u) == 0 ) /*0x413604*/
    v3 = (__int16)v3; /*0x41360a*/
  else
    v3 = 0; /*0x413606*/
  if ( v13 >= 0 ) /*0x413616*/
    v4 = v13; /*0x41361c*/
  else
    v4 = 0; /*0x413618*/
  v5 = v3 / (*(_DWORD *)&stru_87F5F0.__pad_58[716] / 20); /*0x41363b*/
  v6 = 19; /*0x41363d*/
  if ( v5 <= 19 ) /*0x413645*/
    v6 = v5; /*0x413647*/
  v7 = v4 / (*(_DWORD *)&stru_87F5F0.__pad_58[720] / 20); /*0x413666*/
  if ( v7 > 19 ) /*0x41366b*/
    v7 = 19; /*0x41366d*/
  v8 = *(_DWORD *)&this->__pad_0[480 * v7 + 24 * v6]; /*0x413680*/
  v9 = this + 60 * v7 + 3 * v6; /*0x413683*/
  result = (*(int (__thiscall **)(GadgetGrid *, int *))(v8 + 16))(v9, &a2); /*0x413688*/
  if ( result != -1 ) /*0x41368e*/
  {
    v11 = *(_DWORD *)v9[2].__pad_0; /*0x413690*/
    if ( result < v11 ) /*0x413695*/
    {
      v12 = v11 - 1; /*0x413697*/
      for ( *(_DWORD *)v9[2].__pad_0 = v12; /*0x41369d*/
            result < *(_DWORD *)v9[2].__pad_0;
            *(_DWORD *)(v9->GadgetGrid_field_0x04 + 4 * result - 4) = *(_DWORD *)(v9->GadgetGrid_field_0x04 + 4 * result) )
      {
        ++result; /*0x4136a2*/
      }
    }
  }
  return result; /*0x4136b1*/
}



// ==== 0x004136C0  LoadGame::LoadIteratedData  this=LoadGame  sig=csp ====
int __thiscall sub_4136C0(char *this, int a2)
{
  int v2; // ebx
  char *i; // esi
  int result; // eax
  int v5; // eax
  int v6; // edi
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // [esp+28h] [ebp-8h]
  int v13; // [esp+2Ch] [ebp-4h] BYREF

  v2 = a2; /*0x4136c4*/
  v12 = 0; /*0x4136cb*/
  for ( i = this + 8; ; i += 24 ) /*0x4136d3*/
  {
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0); /*0x4136e2*/
    if ( result < 0 ) /*0x4136e7*/
      break; /*0x4136e7*/
    v5 = a2; /*0x4136ed*/
    v6 = 0; /*0x4136f1*/
    if ( a2 > 0 ) /*0x4136f5*/
    {
      do /*0x413703*/
      {
        result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v13, 4, 0); /*0x413703*/
        if ( result < 0 ) /*0x413708*/
          return result; /*0x413708*/
        v7 = *(_DWORD *)i; /*0x41370e*/
        if ( *((_DWORD *)i + 2) < *(_DWORD *)i /*0x413734*/
          || (i[5] || !v7)
          && (v8 = *((_DWORD *)i + 3), v8 > 0)
          && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)i - 2) + 8))(i - 8, v7 + v8, 0) )
        {
          v9 = *((_DWORD *)i + 2); /*0x41373b*/
          v10 = *((_DWORD *)i - 1); /*0x41373e*/
          *((_DWORD *)i + 2) = v9 + 1; /*0x413744*/
          *(_DWORD *)(v10 + 4 * v9) = v13; /*0x41374b*/
        }
        v5 = a2; /*0x41374e*/
      }
      while ( ++v6 < a2 ); /*0x413703*/
    }
    v11 = 0; /*0x413757*/
    if ( v5 > 0 ) /*0x41375b*/
    {
      do /*0x413775*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*((_DWORD *)i - 1) + 4 * v11++)); /*0x413769*/
      while ( v11 < a2 ); /*0x413775*/
    }
    if ( ++v12 >= 400 ) /*0x413788*/
      return 0; /*0x41378e*/
  }
  return result; /*0x413790*/
}



// ==== 0x004137A0  VectorClass::RemoveObjectById  this=VectorClass  sig=csp ====
int __thiscall VectorClass::RemoveObjectById(VectorClass *this)
{
  VectorClass *v2; // esi
  int v3; // eax
  int v4; // eax
  char *ptr_0; // ecx
  char *v6; // ecx
  VectorClass *v7; // [esp+4h] [ebp-4h] BYREF

  v7 = this; /*0x4137a0*/
  if ( !*((_DWORD *)this + 2404) ) /*0x4137a1*/
    return 0; /*0x4137ab*/
  v2 = this + 600; /*0x4137b6*/
  v3 = *((_DWORD *)this + 2400); /*0x4137c3*/
  v7 = (VectorClass *)**((_DWORD **)this + 2401); /*0x4137c7*/
  v4 = (*(int (__thiscall **)(VectorClass *, VectorClass **))(v3 + 16))(this + 600, &v7); /*0x4137cb*/
  if ( v4 != -1 ) /*0x4137d1*/
  {
    ptr_0 = (char *)v2[1].ptr_0; /*0x4137d3*/
    if ( v4 < (int)ptr_0 ) /*0x4137d8*/
    {
      v6 = ptr_0 - 1; /*0x4137da*/
      for ( v2[1].ptr_0 = v6; v4 < (int)v2[1].ptr_0; *((_DWORD *)v2->Items + v4 - 1) = *((_DWORD *)v2->Items + v4) ) /*0x4137e0*/
        ++v4; /*0x4137e5*/
    }
  }
  return (int)v7; /*0x4137ae*/
}



// ==== 0x00413800  LoadGame::ClearAllSlots  this=LoadGame  sig=csp ====
int __thiscall LoadGame::ClearAllSlots(LoadGame *this)
{
  LoadGame *v2; // esi
  int v3; // ebx
  int LoadGame_field_0x08; // edi
  int v5; // edi

  v2 = this; /*0x413806*/
  v3 = 400; /*0x413808*/
  do /*0x413825*/
  {
    LoadGame_field_0x08 = v2->LoadGame_field_0x08; /*0x41380f*/
    (*(void (__thiscall **)(LoadGame *))(*(_DWORD *)v2->__pad_0 + 12))(v2); /*0x413814*/
    (*(void (__thiscall **)(LoadGame *, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 8))(v2, LoadGame_field_0x08, 0); /*0x41381e*/
    v2 = (LoadGame *)((char *)v2 + 24); /*0x413821*/
    --v3; /*0x413824*/
  }
  while ( v3 ); /*0x413825*/
  v5 = *((_DWORD *)this + 2402); /*0x41382d*/
  (*(void (__thiscall **)(LoadGame *))(*((_DWORD *)this + 2400) + 12))(this + 200); /*0x41383b*/
  return (*(int (__thiscall **)(LoadGame *, int, _DWORD))(*((_DWORD *)this + 2400) + 8))(this + 200, v5, 0); /*0x413848*/
}



// ==== 0x00413850  SaveGame::SaveIteratedData  this=SaveGame  sig=csp ====
int __thiscall SaveGame::SaveIteratedData(SaveGame *this, int a2)
{
  int v2; // esi
  int v3; // ebp
  char *i; // edi
  int v5; // ecx
  int result; // eax
  int v7; // ebx

  v2 = a2; /*0x413853*/
  v3 = 0; /*0x413858*/
  for ( i = &this->__pad_0[4]; ; i += 24 ) /*0x41385a*/
  {
    v5 = *(_DWORD *)v2; /*0x413860*/
    a2 = *((_DWORD *)i + 3); /*0x41386c*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v5 + 16))(v2, &a2, 4, 0); /*0x413870*/
    if ( result < 0 ) /*0x413875*/
      break; /*0x413875*/
    v7 = 0; /*0x41387b*/
    if ( a2 > 0 ) /*0x41387f*/
    {
      do /*0x41388e*/
      {
        result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, *(_DWORD *)i + 4 * v7, 4, 0); /*0x41388e*/
        if ( result < 0 ) /*0x413893*/
          return result; /*0x413893*/
      }
      while ( ++v7 < a2 ); /*0x41388e*/
    }
    if ( ++v3 >= 400 ) /*0x4138a8*/
      return 0; /*0x4138aa*/
  }
  return result; /*0x4138ac*/
}



// ==== 0x004138C0  Coord::ToGridIndex  this=Coord  sig=csp ====
int __thiscall Coord::ToGridIndex(char *this, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int result; // eax
  int v16; // edi
  char *v17; // esi
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  char *v21; // esi
  int v22; // ecx
  int v23; // edx

  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 760))(a2, a4); /*0x4138d4*/
  if ( (a3 & 0x8000u) == 0 ) /*0x4138e1*/
    v4 = (__int16)a3; /*0x4138e7*/
  else
    v4 = 0; /*0x4138e3*/
  if ( a3 >= 0 ) /*0x4138f2*/
    v5 = SHIWORD(a3); /*0x4138f8*/
  else
    v5 = 0; /*0x4138f4*/
  v6 = 19; /*0x41390d*/
  if ( v4 / (*(_DWORD *)&stru_87F5F0.__pad_58[716] / 20) <= 19 ) /*0x413921*/
    v6 = v4 / (*(_DWORD *)&stru_87F5F0.__pad_58[716] / 20); /*0x413923*/
  v7 = *(_DWORD *)&stru_87F5F0.__pad_58[720] / 20; /*0x41393e*/
  v8 = v5 / (*(_DWORD *)&stru_87F5F0.__pad_58[720] / 20); /*0x413941*/
  if ( v8 > 19 ) /*0x413946*/
    v8 = 19; /*0x413948*/
  v9 = v6 + 20 * v8; /*0x413957*/
  if ( (a4 & 0x8000u) == 0 ) /*0x41395a*/
    v10 = (__int16)a4; /*0x413960*/
  else
    v10 = 0; /*0x41395c*/
  if ( a4 >= 0 ) /*0x41396b*/
    v11 = SHIWORD(a4); /*0x413971*/
  else
    v11 = 0; /*0x41396d*/
  v12 = v10 / (*(_DWORD *)&stru_87F5F0.__pad_58[716] / 20); /*0x413975*/
  v13 = 19; /*0x413977*/
  if ( v12 <= 19 ) /*0x41397f*/
    v13 = v12; /*0x413981*/
  v14 = v11 / v7; /*0x413986*/
  if ( v11 / v7 > 19 ) /*0x41398b*/
    v14 = 19; /*0x41398d*/
  result = 5 * v14; /*0x413992*/
  v16 = v13 + 4 * result; /*0x413995*/
  if ( v9 != v16 ) /*0x41399a*/
  {
    v17 = this + 24 * v9; /*0x4139ae*/
    v18 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)v17 + 16))(v17, &a2); /*0x4139b4*/
    if ( v18 != -1 ) /*0x4139ba*/
    {
      v19 = *((_DWORD *)v17 + 4); /*0x4139bc*/
      if ( v18 < v19 ) /*0x4139c1*/
      {
        v20 = v19 - 1; /*0x4139c3*/
        for ( *((_DWORD *)v17 + 4) = v20; /*0x4139c9*/
              v18 < *((_DWORD *)v17 + 4);
              *(_DWORD *)(*((_DWORD *)v17 + 1) + 4 * v18 - 4) = *(_DWORD *)(*((_DWORD *)v17 + 1) + 4 * v18) )
        {
          ++v18; /*0x4139ce*/
        }
      }
    }
    v21 = this + 24 * v16; /*0x4139e4*/
    result = *((_DWORD *)v21 + 2); /*0x4139e7*/
    if ( *((_DWORD *)v21 + 4) < result /*0x413a0f*/
      || (v21[13] || !result)
      && (v22 = *((_DWORD *)v21 + 5), v22 > 0)
      && (result = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v21 + 8))(this + 24 * v16, result + v22, 0),
          (_BYTE)result) )
    {
      result = *((_DWORD *)v21 + 4); /*0x413a11*/
      v23 = *((_DWORD *)v21 + 1); /*0x413a14*/
      *((_DWORD *)v21 + 4) = result + 1; /*0x413a1a*/
      *(_DWORD *)(v23 + 4 * result) = a2; /*0x413a21*/
    }
  }
  return result; /*0x413a24*/
}



// ==== 0x00413A30  Coord::ToCell  this=Coord  sig=csp ====
_DWORD *__thiscall Coord::ToCell(Coord *this, _DWORD *a2)
{
  int v3; // [esp+0h] [ebp-4h]

  LOWORD(v3) = *(_DWORD *)this->__pad_0 / 256; /*0x413a3f*/
  HIWORD(v3) = *(_DWORD *)&this->Coord_field_0x2[2] / 256; /*0x413a53*/
  *a2 = v3; /*0x413a60*/
  return a2; /*0x413a63*/
}



// ==== 0x00413A70  DynamicVector::AddItem  this=DynamicVector  sig=csp ====
int __thiscall DynamicVector::AddItem(DynamicVector *this, _DWORD *a2)
{
  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x413a73*/
  result = (int)this->DynamicVector_field_0x10; /*0x413a76*/
  if ( result < DynamicVector_field_0x8 /*0x413a9d*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(_DWORD *)this->__pad_14, result > 0)
    && (result = (*(int (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (_BYTE)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x413aa5*/
    v5 = *(_DWORD *)&this->DynamicVector_field_0x1[3]; /*0x413aa8*/
    this->DynamicVector_field_0x10 = (void *)(result + 1); /*0x413aae*/
    *(_DWORD *)(v5 + 4 * result) = *a2; /*0x413ab8*/
    LOBYTE(result) = 1; /*0x413abb*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x413a9f*/
  }
  return result; /*0x413aa1*/
}



// ==== 0x00413AC0  sub_413AC0  this=-  sig=ida-proto ====
void sub_413AC0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x413acc*/
  dbl_889E70 = Math::Sqrt(v0 + v0); /*0x413ade*/
}



// ==== 0x00413AF0  sub_413AF0  this=-  sig=ida-proto ====
void sub_413AF0()
{
  dbl_889EC0 = dbl_889E70 / 60.0; /*0x413afc*/
}



// ==== 0x00413B10  sub_413B10  this=-  sig=ida-proto ====
void sub_413B10()
{
  dbl_889EA8 = 1.0 / dbl_889EC0; /*0x413b1c*/
}



// ==== 0x00413B30  sub_413B30  this=-  sig=ida-proto ====
void sub_413B30()
{
  dbl_889EA0 = 0.0174532925199433 * 45.0; /*0x413b3c*/
}



// ==== 0x00413B50  sub_413B50  this=-  sig=ida-proto ====
void sub_413B50()
{
  dbl_889E78 = 0.0174532925199433 * 60.0; /*0x413b5c*/
}



// ==== 0x00413B70  sub_413B70  this=-  sig=ida-proto ====
void sub_413B70()
{
  dbl_889E50 = 0.0174532925199433 * 90.0; /*0x413b7c*/
}



// ==== 0x00413B90  sub_413B90  this=-  sig=ida-proto ====
__int64 sub_413B90()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_889E50 - dbl_889E78); /*0x413ba2*/
  result = Math::RoundToInt(v0 * dbl_889E70 * 0.5); /*0x413bb6*/
  dword_889EC8 = result; /*0x413bbb*/
  return result; /*0x413bc0*/
}



// ==== 0x00413BD0  sub_413BD0  this=-  sig=ida-proto ====
void sub_413BD0()
{
  dbl_889E80 = Math::ArcTan((double)dword_889EC8 * 0.00390625); /*0x413be7*/
}



// ==== 0x00413C00  sub_413C00  this=-  sig=ida-proto ====
void sub_413C00()
{
  dbl_889E98 = Math::ArcTan((double)(2 * dword_889EC8) / dbl_889E70); /*0x413c22*/
}



// ==== 0x00413C30  sub_413C30  this=-  sig=ida-proto ====
__int64 sub_413C30()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_889EC8) + 0.5); /*0x413c4b*/
  dword_889EBC = result; /*0x413c50*/
  return result; /*0x413c56*/
}



// ==== 0x00413C60  sub_413C60  this=-  sig=ida-proto ====
int sub_413C60()
{
  g_AircraftStatusFlag = 0; /*0x413c62*/
  return 0; /*0x413c6e*/
}



// ==== 0x00413C70  sub_413C70  this=-  sig=ida-proto ====
int sub_413C70()
{
  dword_889E88 = 0; /*0x413c72*/
  dword_889E8C = 0; /*0x413c77*/
  dword_889E90 = 0; /*0x413c7c*/
  return 0; /*0x413c81*/
}



// ==== 0x00413C90  sub_413C90  this=-  sig=ida-proto ====
int sub_413C90()
{
  dword_889EB8 = 0; /*0x413c95*/
  dword_889EB0 = 128; /*0x413c9f*/
  dword_889EB4 = 128; /*0x413ca4*/
  return 128; /*0x413ca9*/
}



// ==== 0x00413CB0  sub_413CB0  this=-  sig=ida-proto ====
int sub_413CB0()
{
  dword_889E58 = 0; /*0x413cb2*/
  dword_889E5C = 0; /*0x413cb7*/
  dword_889E60 = 0; /*0x413cbc*/
  dword_889E64 = 0; /*0x413cc1*/
  return 0; /*0x413cc6*/
}



// ==== 0x00413CD0  sub_413CD0  this=JumpjetLocomotionClass  sig=ida-proto ====
bool __fastcall sub_413CD0(int a1)
{
  int v2; // eax

  if ( !a1 ) /*0x413cd5*/
    return 0; /*0x413cd7*/
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 15 ? a1 : 0;
  if ( !v2 ) /*0x413ced*/
    return 0; /*0x413cef*/
  if ( *(_BYTE *)(*(_DWORD *)(v2 + 1728) + 3777) ) /*0x413cf9*/
    return *(_BYTE *)(v2 + 1753) == 0; /*0x413d10*/
  return 0; /*0x413cd9*/
}



// ==== 0x00413D20  AircraftClass::Construct  this=AircraftClass  sig=csp ====
int __userpurge AircraftClass::Construct@<eax>(int this@<ecx>, int a2@<edi>, int a3, IUnknown *ppv)
{
  int v5; // eax
  int *v6; // edi
  const IID *v7; // ebx
  int v8; // eax
  int v9; // eax
  int ptr_8; // ebp
  _DWORD *v11; // edi
  int i; // eax
  _DWORD *v13; // edx
  AircraftClass *v15; // [esp+10h] [ebp-10h]

  FootClass::Construct((FootClass *)this, (int)ppv); /*0x413d2b*/
  *(_DWORD *)(this + 1732) = a3; /*0x413d3a*/
  *(_BYTE *)(this + 1736) = 0; /*0x413d40*/
  *(_BYTE *)(this + 1737) = 0; /*0x413d47*/
  *(_BYTE *)(this + 1738) = 0; /*0x413d4e*/
  *(_DWORD *)(this + 1740) = 0; /*0x413d55*/
  *(_BYTE *)(this + 1744) = 0; /*0x413d5f*/
  *(_BYTE *)(this + 1745) = 0; /*0x413d66*/
  *(_BYTE *)(this + 1746) = 0; /*0x413d6d*/
  *(_BYTE *)(this + 1747) = 5; /*0x413d74*/
  *(_BYTE *)(this + 1748) = 1; /*0x413d7b*/
  *(_BYTE *)(this + 1749) = 1; /*0x413d81*/
  *(_DWORD *)this = &AircraftClass::`vftable'; /*0x413d87*/
  *(_DWORD *)(this + 4) = &AircraftClass::`vftable'; /*0x413d8d*/
  *(_DWORD *)(this + 8) = &AircraftClass::`vftable'; /*0x413d94*/
  *(_DWORD *)(this + 12) = &AircraftClass::`vftable'; /*0x413d9b*/
  *(_DWORD *)(this + 1728) = &AircraftClass::`vftable'; /*0x413da2*/
  AbstractClass::GenerateUniqueID((AbstractClass *)(this + 4)); /*0x413dac*/
  v5 = *(_DWORD *)(this + 1732); /*0x413db1*/
  if ( v5 ) /*0x413db9*/
  {
    v6 = (int *)(this + 1652); /*0x413dbb*/
    v7 = (const IID *)(v5 + 844); /*0x413dc1*/
    v8 = *(_DWORD *)(this + 1652); /*0x413dc7*/
    if ( v8 ) /*0x413dcb*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v8 + 8))(*(_DWORD *)(this + 1652)); /*0x413dd0*/
    if ( CoCreateInstance(v7, 0, 7u, &riid, (LPVOID *)&ppv) >= 0 ) /*0x413dea*/
    {
      if ( OleRun(ppv) >= 0 ) /*0x413df9*/
        (*(void (__stdcall **)(IUnknown *, IID *, int))ppv->field_0)(ppv, &stru_817BB0, this + 1652); /*0x413e08*/
      (*(void (__stdcall **)(IUnknown *))(ppv->field_0 + 8))(ppv); /*0x413e11*/
    }
    if ( !*v6 ) /*0x413e14*/
      WinAPI::Wrapper(-2147467261); /*0x413e1e*/
    a2 = *v6; /*0x413e23*/
    (*(void (__stdcall **)(int, int))(*(_DWORD *)a2 + 12))(a2, this); /*0x413e29*/
  }
  AircraftClass::Update(v15, a2); /*0x413e2e*/
  if ( dword_A8E3A0 < dword_A8E398 /*0x413e69*/
    || (byte_A8E39D || !dword_A8E398)
    && dword_A8E3A4 > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E390 + 8))(
         &dword_A8E390,
         dword_A8E398 + dword_A8E3A4,
         0) )
  {
    v9 = dword_A8E3A0++; /*0x413e76*/
    *((_DWORD *)dword_A8E394 + v9) = this; /*0x413e85*/
  }
  ppv = (IUnknown *)AbstractClass::GetVtable3((AbstractClass *)(this + 4)); /*0x413e94*/
  if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x413ea0*/
    goto LABEL_25; /*0x413ea0*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x413ea8*/
  {
    ptr_8 = (int)g_BuildingLoadQueue_Array.?; /*0x413eb1*/
    if ( (int)g_BuildingLoadQueue_Array.? < 0 ) /*0x413eb5*/
      return this; /*0x413eb5*/
  }
  else
  {
    ptr_8 = 10; /*0x413eaa*/
  }
  v11 = (_DWORD *)__2_YAPAXI_Z(8 * ((int)g_BuildingLoadQueue_Array.? + ptr_8)); /*0x413ecb*/
  if ( v11 ) /*0x413ed2*/
  {
    for ( i = 0; i < (int)g_BuildingLoadQueue_Array.?; v11[2 * i - 1] = v13[1] ) /*0x413ee7*/
    {
      v13 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * i++; /*0x413eef*/
      v11[2 * i - 2] = *v13; /*0x413ef5*/
    }
    __3_YAXPAX_Z(g_BuildingLoadQueue_Array.TechnoTypeClass); /*0x413f10*/
    g_BuildingLoadQueue_Array.TechnoTypeClass = v11; /*0x413f1f*/
    g_BuildingLoadQueue_Array.? = (char *)g_BuildingLoadQueue_Array.? + ptr_8; /*0x413f25*/
    g_BuildingLoadQueue_Array.? = 0; /*0x413f2a*/
LABEL_25:
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = ppv; /*0x413f34*/
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = this; /*0x413f52*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x413f5c*/
    ++g_BuildingLoadQueue_Array.?; /*0x413f63*/
  }
  return this; /*0x413f6a*/
}



// ==== 0x00413F80  AircraftClass::Update  this=AircraftClass  sig=csp ====
_DWORD *__usercall AircraftClass::Update@<eax>(AircraftClass *this, int a2@<edi>)
{
  int *v2; // ecx
  int *v3; // esi
  _DWORD *result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  _DWORD *v10; // eax
  _DWORD *Value; // eax
  int v12; // edi
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // ecx
  BuildingClass *v16; // ecx
  TechnoClass *v17; // [esp+0h] [ebp-Ch]
  int v18; // [esp+8h] [ebp-4h] BYREF

  v3 = v2; /*0x413f83*/
  result = TechnoClass::Update(v17, a2); /*0x413f85*/
  v5 = v3[433]; /*0x413f8a*/
  if ( v5 ) /*0x413f92*/
  {
    v6 = v3[135]; /*0x413f98*/
    if ( v6 ) /*0x413fa1*/
    {
      v7 = 0; /*0x413fa6*/
      v8 = *(_DWORD *)(v6 + 52) + 388; /*0x413fa8*/
      v9 = *(_DWORD *)(v8 + 16); /*0x413fad*/
      if ( v9 > 0 ) /*0x413fb2*/
      {
        v10 = *(_DWORD **)(v8 + 4); /*0x413fb4*/
        while ( *v10 != v5 ) /*0x413fb9*/
        {
          ++v7; /*0x413fbb*/
          ++v10; /*0x413fbc*/
          if ( v7 >= v9 ) /*0x413fc1*/
            goto LABEL_9; /*0x413fc1*/
        }
        Power::ChangedHouse((Power *)v3 + 21, 1); /*0x413fcd*/
      }
    }
LABEL_9:
    BuildingTypeClass::GetPowerOutput((BuildingTypeClass *)(v3 + 226), *(_DWORD *)(v3[433] + 1820)); /*0x413fd2*/
    BuildingTypeClass::GetPowerOutput((BuildingTypeClass *)(v3 + 232), *(_DWORD *)(v3[433] + 1820)); /*0x414001*/
    Value = ProgressTimer::GetValue((ProgressTimer *)(v3 + 226), &v18); /*0x41400d*/
    FacingClass::Set_SyncLog((char *)v3 + 928, Value); /*0x414015*/
    v12 = *v3; /*0x414020*/
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v3[433] + 188))(v3[433]); /*0x414024*/
    (*(void (__thiscall **)(int *, int))(v12 + 460))(v3, v13); /*0x41402d*/
    v14 = (_DWORD *)v3[433]; /*0x414033*/
    v15 = v14[416]; /*0x41403a*/
    if ( v15 == -1 ) /*0x414043*/
      v15 = v14[417]; /*0x414045*/
    v3[191] = v15; /*0x41404b*/
    result = (_DWORD *)v14[40]; /*0x414051*/
    v3[27] = (int)result; /*0x414057*/
    v3[28] = (int)result; /*0x41405a*/
  }
  v16 = (BuildingClass *)v3[135]; /*0x41405d*/
  if ( v16 ) /*0x414065*/
    return (_DWORD *)BuildingClass::PowerUpdate(v16, v3); /*0x414068*/
  return result; /*0x41406d*/
}



// ==== 0x00414080  AircraftClass::Destruct  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::Destruct(AircraftClass *this)
{
  AbstractClass *p_vtable1; // esi
  AircraftTypeClass *Type; // eax
  int *team; // ecx
  int v5; // eax
  int Vtable3; // eax
  char *ptr_4; // ebx
  _DWORD *ptr_0; // ebp
  int v9; // esi
  AircraftClass *v10; // edx
  char *v11; // ecx
  signed int v12; // ecx
  int v13; // ecx
  _DWORD *v14; // eax
  AircraftClass *v16; // [esp+10h] [ebp-4h] BYREF

  p_vtable1 = (AbstractClass *)&this->?; /*0x414087*/
  this->FootClass = &AircraftClass::`vftable'; /*0x41408a*/
  this->? = &AircraftClass::`vftable'; /*0x414090*/
  this->? = &AircraftClass::`vftable'; /*0x414097*/
  this->? = &AircraftClass::`vftable'; /*0x41409e*/
  *(_DWORD *)this->__pad_6C0 = &AircraftClass::`vftable'; /*0x4140a4*/
  if ( byte_A8E9A0 ) /*0x4140b5*/
  {
    Type = this->Type; /*0x4140b7*/
    if ( Type ) /*0x4140c1*/
    {
      if ( HouseClass::CanBuild(this->?, (int)Type, 0, 0) == -1 ) /*0x4140d4*/
        this->?->recheckTechTree = 1; /*0x4140dc*/
      TechnoClass::CleanupAll((TechnoClass *)this, 0); /*0x4140e6*/
      team = (int *)this->?; /*0x4140eb*/
      if ( team ) /*0x4140f3*/
      {
        TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x4140f9*/
        this->? = 0; /*0x4140fe*/
      }
      HouseClass::DecrementUnitCount(this->?, this); /*0x41410b*/
      TechnoClass::CleanupDirection((FootClass *)this); /*0x414112*/
      this->Type = 0; /*0x414117*/
    }
  }
  AbstractClass::AnnounceExpiredPointer(&this->FootClass, 1); /*0x414125*/
  v16 = this; /*0x41413a*/
  v5 = (*(int (__thiscall **)(_DWORD *, AircraftClass **))(dword_A8E390 + 16))(&dword_A8E390, &v16); /*0x41413e*/
  if ( v5 != -1 && v5 < dword_A8E3A0 && v5 < --dword_A8E3A0 ) /*0x414159*/
  {
    do /*0x414171*/
    {
      ++v5; /*0x414161*/
      *((_DWORD *)dword_A8E394 + v5 - 1) = *((_DWORD *)dword_A8E394 + v5); /*0x414165*/
    }
    while ( v5 < dword_A8E3A0 ); /*0x414171*/
  }
  Vtable3 = AbstractClass::GetVtable3(p_vtable1); /*0x414174*/
  ptr_4 = (char *)g_BuildingLoadQueue_Array.?; /*0x414179*/
  v16 = (AircraftClass *)Vtable3; /*0x41417f*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x414185*/
  {
    if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x414192*/
    {
      qsort( /*0x4141a2*/
        g_BuildingLoadQueue_Array.TechnoTypeClass,
        (size_t)g_BuildingLoadQueue_Array.?,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      ptr_4 = (char *)g_BuildingLoadQueue_Array.?; /*0x4141a7*/
      g_BuildingLoadQueue_Array.? = 0; /*0x4141b0*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x4141b6*/
    }
    ptr_0 = g_BuildingLoadQueue_Array.TechnoTypeClass; /*0x4141bd*/
    v9 = (int)ptr_4; /*0x4141c3*/
    while ( v9 > 0 ) /*0x4141c7*/
    {
      v10 = (AircraftClass *)ptr_0[2 * (v9 / 2)]; /*0x4141d4*/
      v11 = (char *)&ptr_0[2 * (v9 / 2)]; /*0x4141d8*/
      if ( (int)v16 >= (int)v10 ) /*0x4141e0*/
      {
        if ( v10 == v16 ) /*0x4141ea*/
        {
          if ( v11 ) /*0x414210*/
          {
            v12 = (v11 - (char *)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x414218*/
            if ( v12 != -1 ) /*0x41421e*/
            {
              v13 = v12 + 1; /*0x414220*/
              if ( v13 < (int)ptr_4 ) /*0x414223*/
              {
                do /*0x414242*/
                {
                  v14 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v13++; /*0x41422b*/
                  *(v14 - 2) = *v14; /*0x414231*/
                  *(v14 - 1) = v14[1]; /*0x414237*/
                  ptr_4 = (char *)g_BuildingLoadQueue_Array.?; /*0x41423a*/
                }
                while ( v13 < (int)g_BuildingLoadQueue_Array.? ); /*0x414242*/
              }
              g_BuildingLoadQueue_Array.? = ptr_4 - 1; /*0x41424f*/
              *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x414255*/
              *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x414263*/
              g_BuildingLoadQueue_Array.? = 0; /*0x414267*/
            }
          }
          break; /*0x414267*/
        }
        ptr_0 = v11 + 8; /*0x4141ec*/
        v9 += -1 - v9 / 2; /*0x4141f4*/
      }
      else
      {
        v9 /= 2; /*0x4141e2*/
      }
    }
  }
  this->? = 0; /*0x41426d*/
  return FootClass::Destruct((FootClass *)this); /*0x414208*/
}



// ==== 0x00414290  AircraftClass::QueryInterface  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::QueryInterface(AircraftClass *this, AbstractClass *a2, void *iid, void **ppv)
{
  int result; // eax

  result = AbstractClass::QueryInterface((AbstractClass *)this); /*0x4142a2*/
  if ( result < 0 ) /*0x4142a9*/
  {
    if ( !memcmp(iid, &IID_IFlyControl, 0x10u) ) /*0x4142b8*/
    {
      if ( a2 ) /*0x4142bf*/
      {
        *ppv = &a2[48]; /*0x4142c8*/
        (*((void (__stdcall **)(AbstractClass *))a2->ptr_0 + 1))(a2); /*0x4142cf*/
        return 0; /*0x4142d7*/
      }
      *ppv = 0; /*0x4142dc*/
    }
    (*((void (__stdcall **)(AbstractClass *))a2->ptr_0 + 1))(a2); /*0x4142e4*/
    return 0; /*0x4142e7*/
  }
  return result; /*0x4142d4*/
}



// ==== 0x004142F0  AircraftClass::AddRef  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::AddRef(AircraftClass *this, int a2)
{
  return AbstractClass::COMStub_AddRef((AbstractClass *)this); /*0x4142fa*/
}



// ==== 0x00414300  AircraftClass::Release  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::Release(AircraftClass *this, int a2)
{
  return AbstractClass::COMStub_Release((AbstractClass *)this); /*0x41430a*/
}



// ==== 0x00414310  AircraftClass::MoveTo  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::MoveTo(AircraftClass *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // ebx
  int Type; // ecx
  int v6; // edi
  int GroundHeight; // ebx
  char v8; // bl
  int result; // eax
  int v10; // eax
  __int16 v11; // dx
  int v12; // eax
  int v13; // ecx
  int v14; // edi
  int v15; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  v3 = a2; /*0x414314*/
  v15 = *a2; /*0x414320*/
  Type = this->Type; /*0x414324*/
  v16 = a2[1]; /*0x41432d*/
  v17 = a2[2]; /*0x414334*/
  if ( !*(_BYTE *)(Type + 3432) ) /*0x414338*/
  {
    if ( this->isALoaner[0] || !(unsigned __int8)IsCoordVisibleMap((ObjectClass *)&dword_87F7E8, a2) ) /*0x414352*/
    {
      v6 = this->Type; /*0x41436c*/
      GroundHeight = Cell::GetGroundHeight(v3); /*0x414381*/
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 188))(v6) + GroundHeight; /*0x41438b*/
    }
    else
    {
      v17 = Cell::GetGroundHeight(v3); /*0x414366*/
    }
  }
  v8 = a3; /*0x41438f*/
  if ( FootClass::DispatchInput((double *)&this->ptr_0, (int)&v15, a3) ) /*0x41439b*/
  {
    v10 = this->Type; /*0x4143a8*/
    if ( !*(_BYTE *)(v10 + 560) /*0x4143e1*/
      || !*(_BYTE *)(v10 + 3594)
      || *(_DWORD *)(*(int (__thiscall **)(AircraftClass *, _DWORD))(this->ptr_0 + 1016))(this, 0)
      && *(_BYTE *)(*(_DWORD *)(*(int (__thiscall **)(AircraftClass *, _DWORD))(this->ptr_0 + 1016))(this, 0) + 327) )
    {
      this->isALoaner[0] = 1; /*0x4143eb*/
    }
    if ( this->passengers[1] ) /*0x4143f2*/
      this->HasPassengers[0] = 1; /*0x4143fc*/
    LOBYTE(v11) = 0; /*0x414403*/
    HIBYTE(v11) = v8; /*0x414409*/
    LOWORD(a2) = v11; /*0x414412*/
    FacingClass::Set_SyncLog((char *)this->secondaryFacing, &a2); /*0x414417*/
    this->animation[2] = (int)dword_A8ED84; /*0x41442c*/
    v12 = v16; /*0x41442e*/
    this->animation[5] = 1; /*0x414432*/
    this->animation[3] = v12; /*0x414438*/
    this->animation[4] = 1; /*0x41443b*/
    v13 = this->Type; /*0x41443e*/
    this->animation[0] = 0; /*0x414444*/
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 188))(v13); /*0x414456*/
    if ( (*(int (__thiscall **)(AircraftClass *))(this->ptr_0 + 456))(this) == v14 ) /*0x414464*/
      result = (*(int (__thiscall **)(AircraftClass *, _DWORD, int))(this->ptr_0 + 1348))(this, 0, 1072693248); /*0x414471*/
    else
      result = (*(int (__thiscall **)(AircraftClass *, _DWORD, _DWORD))(this->ptr_0 + 1348))(this, 0, 0); /*0x41448a*/
    LOBYTE(result) = 1; /*0x414479*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x41449d*/
  }
  return result; /*0x414477*/
}



// ==== 0x004144B0  AircraftClass::Draw  this=AircraftClass  sig=csp ====
int __userpurge AircraftClass::Draw@<eax>(
        AircraftClass *this,
        int a2@<ebx>,
        int a3@<edi>,
        int *a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // ecx
  int v8; // ebp
  int *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // edx
  int v13; // eax
  int result; // eax
  int v15; // esi
  int v16; // edx
  FootClass *v17; // esi
  int v18; // eax
  int v19; // edi
  void *ptr_0; // edx
  int *v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int DB; // eax
  int v27; // eax
  _DWORD *v28; // eax
  int v29; // ebx
  int v30; // edx
  int v31; // ebx
  char v32; // al
  int v33; // edx
  int v34; // eax
  Cell *v35; // esi
  void *Cell_field_0x140; // eax
  int v37; // eax
  const void *v38; // eax
  char v39; // al
  int v40; // esi
  float *inited; // eax
  float *v42; // eax
  int v43; // eax
  int v44; // eax
  const void *v45; // eax
  int v46; // esi
  int v47; // edi
  float *v48; // eax
  int v50; // [esp+40h] [ebp-D0h]
  int v51; // [esp+40h] [ebp-D0h]
  char v52[4]; // [esp+50h] [ebp-C0h] BYREF
  int v53; // [esp+54h] [ebp-BCh] BYREF
  char *ptr_4; // [esp+58h] [ebp-B8h] BYREF
  int v55[2]; // [esp+5Ch] [ebp-B4h] BYREF
  int v56; // [esp+64h] [ebp-ACh] BYREF
  int v57; // [esp+68h] [ebp-A8h]
  int GroundHeight; // [esp+6Ch] [ebp-A4h] BYREF
  int v59; // [esp+70h] [ebp-A0h] BYREF
  int v60; // [esp+74h] [ebp-9Ch]
  int v61; // [esp+78h] [ebp-98h] BYREF
  int v62; // [esp+7Ch] [ebp-94h]
  _BYTE v63[104]; // [esp+80h] [ebp-90h] BYREF
  AudioConfig v64; // [esp+E8h] [ebp-28h] BYREF

  v8 = v7; /*0x4144bf*/
  if ( stru_A8EB00.?[391] || !g_hWnd || ((int)dword_A8B230->ptr_0 & 0x1000) == 0 ) /*0x4144de*/
    goto LABEL_9; /*0x4144de*/
  if ( !*(_DWORD *)(v7 + 1652) ) /*0x4144e4*/
    WinAPI::Wrapper(-2147467261); /*0x4144f3*/
  v9 = (int *)(*(int (__stdcall **)(_DWORD, int *))(**(_DWORD **)(v7 + 1652) + 24))(*(_DWORD *)(v7 + 1652), &v59); /*0x414506*/
  v10 = *v9; /*0x414509*/
  v11 = v9[1]; /*0x41450b*/
  GroundHeight = v9[2]; /*0x414517*/
  v56 = v10; /*0x41451d*/
  v57 = v11; /*0x414521*/
  v59 = *(_DWORD *)(v8 + 156); /*0x414527*/
  v60 = *(_DWORD *)(v8 + 160); /*0x414533*/
  GroundHeight = *(_DWORD *)(v8 + 164); /*0x41453a*/
  if ( !(unsigned __int8)Game::Stub3((int)&v56) /*0x414580*/
    || (v12 = *(_DWORD *)(v8 + 160),
        v13 = *(_DWORD *)(v8 + 164),
        v59 = *(_DWORD *)(v8 + 156),
        v60 = v12,
        v61 = v13,
        !(unsigned __int8)Game::Stub3((int)&v59))
    || (result = House::IsHumanPlayer(*(House **)(v8 + 540)), (_BYTE)result) )
  {
LABEL_9:
    v15 = *(_DWORD *)(v8 + 1732); /*0x41458e*/
    if ( !(*(unsigned __int8 (__thiscall **)(int, Object *))(*(_DWORD *)v8 + 1088))(v8, dword_A83D4C) ) /*0x414597*/
      v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 204))(v8, 1); /*0x4145ae*/
    v16 = *(_DWORD *)(v8 + 1336) % *(_DWORD *)(*(_DWORD *)(v15 + 180) + 8); /*0x4145bd*/
    v17 = (FootClass *)this; /*0x4145c0*/
    ptr_4 = (char *)this->?; /*0x4145cb*/
    v18 = *(_DWORD *)(v8 + 1652); /*0x4145cf*/
    v19 = v16; /*0x4145d7*/
    ptr_0 = this->FootClass; /*0x4145d9*/
    v62 = v19; /*0x4145db*/
    v53 = (int)ptr_0; /*0x4145df*/
    if ( !v18 ) /*0x4145e3*/
      WinAPI::Wrapper(-2147467261); /*0x4145ea*/
    v21 = (int *)(*(int (__stdcall **)(_DWORD, int *, int))(**(_DWORD **)(v8 + 1652) + 44))( /*0x4145fd*/
                   *(_DWORD *)(v8 + 1652),
                   v55,
                   a3);
    v22 = *v21; /*0x414600*/
    v23 = v21[1]; /*0x414606*/
    ptr_4 += v22; /*0x41460f*/
    v24 = v23 + v55[0]; /*0x414613*/
    v25 = *(_DWORD *)(v8 + 280); /*0x414615*/
    v55[0] = v24; /*0x41461d*/
    if ( v25 && *(_BYTE *)(*(_DWORD *)(v8 + 1732) + 3580) ) /*0x414629*/
    {
      DB = CCINIClass::GetDB((CCINIClass *)(v8 + 276)); /*0x414639*/
      (*(void (__thiscall **)(int, char **, int))(*(_DWORD *)DB + 276))(DB, &ptr_4, a5); /*0x41464f*/
    }
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)v8 + 440))(v8, v52); /*0x41465f*/
    v27 = *(_DWORD *)(v8 + 1732); /*0x414665*/
    if ( !*(_BYTE *)(v27 + 566) || !*(_DWORD *)(v27 + 176) ) /*0x414679*/
      goto LABEL_40; /*0x414681*/
    v56 = *(_DWORD *)(v8 + 156); /*0x414691*/
    v57 = *(_DWORD *)(v8 + 160); /*0x41469d*/
    GroundHeight = *(_DWORD *)(v8 + 164); /*0x4146a4*/
    GroundHeight = Cell::GetGroundHeight(&v56); /*0x4146b2*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v56, v55); /*0x4146c6*/
    if ( !*(_DWORD *)(v8 + 1652) ) /*0x4146cb*/
      WinAPI::Wrapper(-2147467261); /*0x4146da*/
    v28 = (_DWORD *)(*(int (__stdcall **)(_DWORD, int *, int, int))(**(_DWORD **)(v8 + 1652) + 48))( /*0x4146ee*/
                      *(_DWORD *)(v8 + 1652),
                      &v59,
                      a2,
                      v50);
    v29 = *v28 + v56; /*0x414700*/
    v57 += v28[1]; /*0x414702*/
    v30 = *(_DWORD *)v8; /*0x414706*/
    v56 = v29; /*0x41470b*/
    v53 = 0; /*0x41470f*/
    v31 = (*(int (__thiscall **)(int))(v30 + 456))(v8); /*0x41471d*/
    if ( v53 != -1 ) /*0x414726*/
      v53 = v19 & 0x1F | (32 * v53); /*0x414730*/
    v32 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 192))(v8); /*0x414739*/
    v33 = *(_DWORD *)(v8 + 160); /*0x414741*/
    v61 = *(_DWORD *)(v8 + 156); /*0x414744*/
    HIBYTE(ptr_4) = v32; /*0x41474c*/
    v34 = *(_DWORD *)(v8 + 164); /*0x414750*/
    *(_BYTE *)(v8 + 1718) = 0; /*0x414759*/
    v62 = v33; /*0x414760*/
    *(_DWORD *)v63 = v34; /*0x414764*/
    v35 = (Cell *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v61); /*0x41476d*/
    if ( *(_BYTE *)(v8 + 140) ) /*0x41476f*/
    {
      if ( v31 < 0 ) /*0x414787*/
        goto LABEL_32; /*0x414787*/
    }
    else if ( v31 < dword_889EBC ) /*0x41477f*/
    {
      goto LABEL_32; /*0x41477f*/
    }
    Cell_field_0x140 = v35->Cell_field_0x140; /*0x414789*/
    if ( ((unsigned __int16)Cell_field_0x140 & 0x100) != 0 /*0x4147c8*/
      && ((BYTE1(Cell_field_0x140) & 8) != 0 && (*((_DWORD *)Cell::GetNeighbourContent(v35, 0) + 80) & 0x100) != 0
       || ((int)v35->Cell_field_0x140 & 0x800) == 0
       && (*((_DWORD *)Cell::GetNeighbourContent(v35, 6u) + 80) & 0x100) != 0) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 460))(v8, dword_889EBC); /*0x4147d5*/
      v37 = ZCoordToScreenY(dword_889EBC); /*0x4147e1*/
      v57 -= v37; /*0x4147e6*/
LABEL_33:
      if ( !*(_DWORD *)(v8 + 1652) ) /*0x4147f9*/
        WinAPI::Wrapper(-2147467261); /*0x414808*/
      v38 = (const void *)(*(int (__stdcall **)(_DWORD, AudioConfig *, int *))(**(_DWORD **)(v8 + 1652) + 40))( /*0x414823*/
                            *(_DWORD *)(v8 + 1652),
                            &v64,
                            &v53);
      Transform::Copy((Transform *)&v63[8], v38); /*0x41482b*/
      v39 = *(_BYTE *)(v8 + 973); /*0x414830*/
      qmemcpy(&v63[56], &v63[8], 0x30u); /*0x414845*/
      if ( !v39 ) /*0x414847*/
      {
        v40 = *(_DWORD *)(v8 + 1732); /*0x414849*/
        inited = (float *)AudioConfig::InitDefault(&v64); /*0x414866*/
        v42 = MultiplyMatrix3x4((float *)&v63[8], inited, (float *)&v63[56]); /*0x414871*/
        TechnoClass::QueueDrawVoiceResponse( /*0x4148a0*/
          (TechnoClass *)v8,
          (_BYTE **)(v40 + 176),
          *(_DWORD *)(v40 + 2044),
          v53,
          v40 + 620,
          a6,
          &v56,
          (int)v42,
          1u,
          0,
          0,
          0);
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 460))(v8, v31); /*0x4148ab*/
      v43 = v55[0]; /*0x4148b9*/
      v51 = v55[1]; /*0x4148bd*/
      *(_BYTE *)(v8 + 1718) = HIBYTE(ptr_4); /*0x4148be*/
      TacticalClass::AddToDrawQueue((TacticalClass *)g_TacticalClass_Instance, v8, v43, v51); /*0x4148cc*/
      LightningStorm::IsActive(); /*0x4148d1*/
      (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 456))(v8); /*0x4148f9*/
      Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &GroundHeight); /*0x414919*/
      v44 = *(_DWORD *)(v8 + 1652); /*0x414930*/
      v53 = v63[4] & 0x1F; /*0x414943*/
      if ( !v44 ) /*0x414947*/
        WinAPI::Wrapper(-2147467261); /*0x41494e*/
      v45 = (const void *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)(v8 + 1652) + 36))(*(_DWORD *)(v8 + 1652)); /*0x414969*/
      Transform::Copy((Transform *)v63, v45); /*0x414971*/
      qmemcpy(&v63[48], v63, 0x30u); /*0x414985*/
      v46 = *(_DWORD *)(v8 + 1732); /*0x414987*/
      v47 = *(_DWORD *)v8; /*0x41498d*/
      v48 = (float *)AudioConfig::InitDefault((AudioConfig *)&v63[96]); /*0x41499f*/
      MultiplyMatrix3x4((float *)v63, v48, (float *)&v63[48]); /*0x4149aa*/
      (*(void (__thiscall **)(int, int, int))(v47 + 1296))(v8, v46 + 176, v62); /*0x4149d7*/
      v17 = (FootClass *)this; /*0x4149dd*/
LABEL_40:
      AbstractClass::COMStub_Return0_69(v17, (int)a4); /*0x4149e5*/
      return result; /*0x4149f0*/
    }
LABEL_32:
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 460))(v8, 0); /*0x4147ec*/
    goto LABEL_33; /*0x4147f3*/
  }
  return result; /*0x4149f6*/
}



// ==== 0x00414A10  nullsub_71  this=-  sig=csp ====
void __stdcall nullsub_71(int a1, int a2)
{
  ; /*0x414a10*/
}



// ==== 0x00414A80  AircraftClass::ProcessMissionTimeout  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::ProcessMissionTimeout(AircraftClass *this)
{
  int *team; // ecx
  char *MissionControl; // eax
  int v4; // eax
  int (__thiscall **ptr_0)(AircraftClass *, int, int *, _DWORD); // edi
  int v7; // eax
  void *v8; // edi
  int v9; // eax
  int v10; // [esp+10h] [ebp-Ch] BYREF
  int v11; // [esp+14h] [ebp-8h]
  int v12; // [esp+18h] [ebp-4h]

  if ( this->? ) /*0x414a86*/
  {
    if ( this->? ) /*0x414ae5*/
      goto LABEL_12; /*0x414ae5*/
    if ( *(_DWORD *)&dword_A8B238 ) /*0x414afb*/
    {
      ptr_0 = (int (__thiscall **)(AircraftClass *, int, int *, _DWORD))this->FootClass; /*0x414b03*/
      v10 = this->?[0]; /*0x414b09*/
      v11 = this->?[1]; /*0x414b15*/
      v12 = this->?[2]; /*0x414b20*/
      v7 = ptr_0[241](this, 64, &v10, 0); /*0x414b24*/
      ((void (__thiscall *)(AircraftClass *, int))ptr_0[242])(this, v7); /*0x414b2d*/
    }
    if ( !this->? ) /*0x414b33*/
    {
      v8 = this->FootClass; /*0x414b43*/
      v10 = this->?[0]; /*0x414b49*/
      v11 = this->?[1]; /*0x414b57*/
      v12 = this->?[2]; /*0x414b5e*/
      v9 = (*((int (__thiscall **)(AircraftClass *, _DWORD, int *, _DWORD))v8 + 241))(this, 0, &v10, 0); /*0x414b64*/
      (*((void (__thiscall **)(AircraftClass *, int))v8 + 242))(this, v9); /*0x414b6d*/
    }
    if ( this->? ) /*0x414b73*/
    {
LABEL_12:
      (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 1, 0); /*0x414b9e*/
      return 1; /*0x414ba4*/
    }
    else
    {
      (*((void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 289))(this, 0, 1); /*0x414b86*/
      return 1; /*0x414b8c*/
    }
  }
  else
  {
    team = (int *)this->?; /*0x414a90*/
    if ( team ) /*0x414a98*/
      TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x414a9f*/
    (*((void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 289))(this, 0, 1); /*0x414aac*/
    MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x414ab4*/
    LOWORD(v4) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x414ac2*/
    return v4 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x414ade*/
  }
}



// ==== 0x00414BB0  TechnoClass::SmokeUpdate  this=AircraftClass  sig=csp ====
char __usercall TechnoClass::SmokeUpdate@<al>(TechnoClass *this, double a2@<st0>)
{
  int v2; // ecx
  int *v3; // esi
  int v4; // ecx
  AnimClass *v5; // eax
  int v6; // eax
  int v7; // ecx
  _BYTE *v8; // eax
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // ebp
  int v12; // ebx
  int v13; // eax
  int v14; // edi
  int v15; // edx
  AnimClass *v16; // eax
  int v17; // ecx
  AnimClass *v18; // eax
  int v19; // eax
  __int16 *v20; // eax
  __int16 *v21; // eax
  int v22; // eax
  int v23; // edi
  AnimClass *v24; // edi
  int Index; // eax
  int v26; // ecx
  int v27; // edx
  int DB; // eax
  int v30; // [esp+40h] [ebp-28h] BYREF
  int v31; // [esp+44h] [ebp-24h] BYREF
  int v32; // [esp+48h] [ebp-20h]
  int v33; // [esp+4Ch] [ebp-1Ch]
  int v34; // [esp+50h] [ebp-18h] BYREF
  int v35; // [esp+54h] [ebp-14h]
  int v36; // [esp+58h] [ebp-10h]
  int v37[3]; // [esp+5Ch] [ebp-Ch] BYREF

  v3 = (int *)v2; /*0x414bb6*/
  switch ( *(_DWORD *)(v2 + 172) ) /*0x414bcd*/
  {
    case 1: /*0x414bcd*/
    case 0x1B: /*0x414bcd*/
    case 0x1E: /*0x414bcd*/
    case 0x1F: /*0x414bcd*/
      break;
    default:
      *(_BYTE *)(v2 + 1746) = 0; /*0x414bd4*/
      break; /*0x414bd4*/
  }
  v4 = *(_DWORD *)(v2 + 632); /*0x414bdb*/
  if ( v4 ) /*0x414be3*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 92))(v4); /*0x414be7*/
  if ( ((*(unsigned __int8 (__usercall **)@<al>(int *@<ecx>, double@<st0>))(*v3 + 468))(v3, a2) /*0x414c11*/
     || (*(unsigned __int8 (__thiscall **)(int *))(*v3 + 472))(v3))
    && !(*(_DWORD *)&stru_A8EB00.?[416] % 24) )
  {
    if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 836) ) /*0x414c1d*/
    {
      v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x414c2c*/
      if ( v5 ) /*0x414c36*/
      {
        v31 = v3[39]; /*0x414c4b*/
        v32 = v3[40]; /*0x414c54*/
        v33 = v3[41]; /*0x414c60*/
        AnimClass::ctor( /*0x414c73*/
          v5,
          *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 836),
          &v31,
          0,
          1,
          (void *)0x600,
          0,
          0);
      }
    }
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*v3 + 472))(v3) /*0x414c94*/
    && (!(*(unsigned __int8 (__thiscall **)(int *))(*v3 + 468))(v3) || !*((_BYTE *)v3 + 636)) )
  {
    goto LABEL_70; /*0x414c94*/
  }
  if ( !v3[413] ) /*0x414c9e*/
    WinAPI::Wrapper(-2147467261); /*0x414cad*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v3[413] + 64))(v3[413]); /*0x414cbb*/
  LOBYTE(v6) = *((_BYTE *)v3 + 144); /*0x414cbe*/
  if ( (_BYTE)v6 )
  {
LABEL_70:
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*v3 + 472))(v3) && v3[158]
      || (*(unsigned __int8 (__thiscall **)(int *))(*v3 + 468))(v3) )
    {
      if ( v3[173] ) /*0x414cf2*/
        (*(void (__thiscall **)(int *, _DWORD))(*v3 + 968))(v3, 0); /*0x414d02*/
      v6 = v3[361]; /*0x414d08*/
      if ( v6 ) /*0x414d10*/
        LOBYTE(v6) = (*(char (__thiscall **)(int *, _DWORD, int))(*v3 + 1152))(v3, 0, 1); /*0x414d1e*/
    }
    else
    {
      v7 = v3[173]; /*0x414d2c*/
      if ( v7 ) /*0x414d34*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 84))(v7) /*0x414d8b*/
          || (v8 = (_BYTE *)v3[173]) != 0
          && (v8[20] & 1) != 0
          && !(unsigned __int8)Object::IsAlliedWithObjectSimpleHouse((Object *)v3[135], v8)
          && (v9 = (_DWORD *)v3[173], v9[136] == 2)
          && !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*v9 + 812))(v9, v3[135]) )
        {
          (*(void (__thiscall **)(int *, _DWORD))(*v3 + 968))(v3, 0); /*0x414d9b*/
        }
      }
      FootClass::MovementAI((FootClass *)v3); /*0x414da3*/
      LOBYTE(v6) = *((_BYTE *)v3 + 144); /*0x414da8*/
      if ( (_BYTE)v6 )
      {
        if ( *((_BYTE *)v3 + 973) ) /*0x414db6*/
        {
          v31 = v3[39]; /*0x414dce*/
          v34 = v31; /*0x414dd2*/
          v10 = *v3; /*0x414dd9*/
          v32 = v3[40]; /*0x414ddb*/
          v35 = v32; /*0x414ddf*/
          v33 = v3[41]; /*0x414dea*/
          v36 = v33 - 5; /*0x414df4*/
          (*(void (__thiscall **)(int *, int *))(v10 + 436))(v3, &v34); /*0x414df8*/
          if ( (*(int (__thiscall **)(int *))(*v3 + 456))(v3) < -400 ) /*0x414e0d*/
          {
            (*(void (__thiscall **)(int *, _DWORD))(*v3 + 224))(v3, 0); /*0x414e15*/
            LOBYTE(v6) = (*(char (__thiscall **)(int *))(*v3 + 248))(v3); /*0x414e1f*/
            return v6; /*0x414e2c*/
          }
          if ( (stru_A8EB00.?[416] & 3) == 0 ) /*0x414e34*/
          {
            v11 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -170, 170); /*0x414e6a*/
            v12 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -170, 170); /*0x414e75*/
            v13 = (*(int (__thiscall **)(int *))(*v3 + 456))(v3); /*0x414e77*/
            v14 = v3[41]; /*0x414e82*/
            v15 = v11 + v3[40]; /*0x414e89*/
            v31 = v12 + v3[39]; /*0x414e92*/
            v32 = v15; /*0x414e96*/
            v33 = v14 - v13; /*0x414e9a*/
            v16 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x414e9e*/
            if ( v16 ) /*0x414ea8*/
              AnimClass::ctor( /*0x414ecb*/
                v16,
                *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 148),
                &v31,
                0,
                1,
                (void *)0x600,
                0,
                0);
          }
        }
        v37[0] = v3[39]; /*0x414ede*/
        v37[1] = v3[40]; /*0x414ee5*/
        v17 = v3[433]; /*0x414ee9*/
        v37[2] = v3[41]; /*0x414ef2*/
        if ( *(_DWORD *)(v17 + 3584) ) /*0x414ef6*/
        {
          if ( !(*(_DWORD *)&stru_A8EB00.?[416] % *(_DWORD *)(v17 + 3588)) ) /*0x414f06*/
          {
            v18 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x414f15*/
            if ( v18 ) /*0x414f1f*/
              AnimClass::ctor(v18, *(void **)(v3[433] + 3584), v37, (void *)1, 1, (void *)0x600, 0, 0); /*0x414f42*/
          }
        }
        v19 = v3[433]; /*0x414f47*/
        if ( (*(_BYTE *)(v19 + 3595)
           || *(_BYTE *)(v19 + 3596)
           || (v20 = (__int16 *)(*(int (__thiscall **)(int *, int *))(*v3 + 440))(v3, &v30),
               (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v20, 1))
           || !(*(unsigned __int8 (__thiscall **)(int *))(*v3 + 1244))(v3))
          && ((v21 = (__int16 *)(*(int (__thiscall **)(int *, int *))(*v3 + 440))(v3, &v30),
               (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v21))
           || !(*(unsigned __int8 (__thiscall **)(int *))(*v3 + 1244))(v3)) )
        {
          if ( (int *)v3[361] == &g_MissionQueueFrame.briefing[130] ) /*0x414fec*/
          {
            (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1152))(v3, 0, 1); /*0x414ff6*/
            (*(void (__thiscall **)(int *, _DWORD))(*v3 + 968))(v3, 0); /*0x415002*/
            (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1156))(v3, 0, 1); /*0x415010*/
          }
          if ( (int *)v3[173] == &g_MissionQueueFrame.briefing[130] ) /*0x41501c*/
          {
            (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1152))(v3, 0, 1); /*0x415026*/
            (*(void (__thiscall **)(int *, _DWORD))(*v3 + 968))(v3, 0); /*0x415032*/
            (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1156))(v3, 0, 1); /*0x415040*/
          }
          if ( (*(unsigned __int8 (__thiscall **)(int *))(*v3 + 512))(v3) ) /*0x41504a*/
            (*(void (__thiscall **)(int *))(*v3 + 492))(v3); /*0x415058*/
          if ( *((_BYTE *)v3 + 1736) && v3[43] != 1 ) /*0x41506f*/
          {
            v22 = v3[191]; /*0x415071*/
            *((_BYTE *)v3 + 1736) = 0; /*0x415077*/
            v3[191] = v22 - 1; /*0x41507f*/
          }
          BuildingClass::GetHealthRatio((BuildingClass *)v3); /*0x415087*/
          if ( a2 < *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5896)
            && (*(int (__thiscall **)(int *))(*v3 + 456))(v3) > 0 )
          {
            v23 = v3[27] != 0 ? 10 : 80;
            if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < v23 ) /*0x4150d4*/
            {
              v24 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4150e0*/
              if ( v24 ) /*0x4150e7*/
              {
                v34 = v3[39]; /*0x4150eb*/
                v35 = v3[40]; /*0x4150f7*/
                v36 = v3[41]; /*0x4150fe*/
                Index = AnimTypeClass::FindIndex(&stru_817BD0); /*0x415102*/
                AnimClass::ctor(v24, *(void **)(FootClass_Array.?[3] + 4 * Index), &v34, 0, 1, (void *)0x600, 0, 0); /*0x415127*/
              }
            }
          }
          v6 = v3[70]; /*0x41512c*/
          if ( v6 ) /*0x415134*/
          {
            LOBYTE(v6) = *(_BYTE *)(v3[433] + 3580); /*0x41513c*/
            if ( (_BYTE)v6 ) /*0x415144*/
            {
              qmemcpy((void *)(CCINIClass::GetDB((CCINIClass *)(v3 + 69)) + 904), v3 + 232, 0x18u); /*0x415168*/
              qmemcpy((void *)(CCINIClass::GetDB((CCINIClass *)(v3 + 69)) + 928), v3 + 232, 0x18u); /*0x415184*/
              v26 = v3[40]; /*0x415188*/
              v34 = v3[39]; /*0x41518b*/
              v27 = v3[41]; /*0x41518f*/
              v35 = v26; /*0x415192*/
              v36 = v27; /*0x415198*/
              DB = CCINIClass::GetDB((CCINIClass *)(v3 + 69)); /*0x41519c*/
              LOBYTE(v6) = (*(char (__thiscall **)(int, int *))(*(_DWORD *)DB + 436))(DB, &v34); /*0x4151aa*/
            }
          }
        }
        else
        {
          LOBYTE(v6) = (*(char (__thiscall **)(int *))(*v3 + 248))(v3); /*0x414f93*/
        }
      }
    }
  }
  return v6; /*0x414d24*/
}



// ==== 0x004151E0  AircraftClass::Mission_Harvest  this=AircraftClass  sig=csp ====
int __thiscall UnitClass::Mission_Harvest(AircraftClass *this)
{
  AbstractClass *movementDestination; // ecx
  int v3; // edi
  int v4; // ebp
  int v5; // ebx
  _DWORD *v6; // eax
  char *MissionControl; // eax
  int v8; // eax
  int v10; // eax
  void (__thiscall **v11)(AircraftClass *, void *, int); // edi
  void *ClosestPlacementCell; // eax
  int DB; // eax
  int v14; // edi
  int v15; // eax
  void (__thiscall **ptr_0)(AircraftClass *, void *, int); // ebx
  __int16 *WaypointCoords; // eax
  void *v18; // eax
  void *NearbyCell; // eax
  void (__thiscall **v20)(AircraftClass *, void *, int); // edi
  __int16 *Waypoint_Location; // eax
  void *v22; // eax
  void *v23; // eax
  TeamClass *team; // ecx
  int v25; // edi
  int v26; // edi
  _WORD *v27; // eax
  _WORD *v28; // eax
  char *v29; // [esp+0h] [ebp-30h]
  int v30; // [esp+10h] [ebp-20h] BYREF
  int v31; // [esp+14h] [ebp-1Ch] BYREF
  int v32; // [esp+18h] [ebp-18h] BYREF
  _BYTE v33[4]; // [esp+1Ch] [ebp-14h] BYREF
  _BYTE v34[4]; // [esp+20h] [ebp-10h] BYREF
  _BYTE v35[12]; // [esp+24h] [ebp-Ch] BYREF

  switch ( this->? )
  {
    case 0:
      if ( !(*((int (__thiscall **)(AircraftClass *))this->FootClass + 114))(this)
        && this->? == 0.0
        && ((movementDestination = this->?) == 0
         || (v3 = this->?[0],
             v4 = this->?[1],
             v5 = this->?[2],
             v6 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))movementDestination->ptr_0 + 18))(
                              movementDestination,
                              v35),
             v3 == *v6)
         && v4 == v6[1]
         && v5 == v6[2]) )
      {
        this->? = 3; /*0x415250*/
      }
      else if ( this->?
             || !this->Type->TechnoTypeClass[3221]
             || (*((int (__thiscall **)(AircraftClass *))this->FootClass + 114))(this) <= 0 )
      {
        if ( this->? )
        {
          if ( (*((unsigned __int8 (__thiscall **)(AircraftClass *, AbstractClass *))this->FootClass + 340))(
                 this,
                 this->?) )
          {
            DB = CCINIClass::GetDB((CCINIClass *)this->?); /*0x415334*/
            v14 = DB; /*0x415339*/
            if ( DB /*0x415360*/
              && (v15 = *(_DWORD *)(DB + 1492)) != 0
              && *TechnoClass::GetWaypointCoords(*(TechnoClass **)(v15 + 36), &v30) != g_AircraftStatusFlag )
            {
              ptr_0 = (void (__thiscall **)(AircraftClass *, void *, int))this->FootClass; /*0x415375*/
              WaypointCoords = (__int16 *)TechnoClass::GetWaypointCoords( /*0x415381*/
                                            *(TechnoClass **)(*(_DWORD *)(v14 + 1492) + 36),
                                            &v31);
              v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], WaypointCoords); /*0x41538c*/
              NearbyCell = InfantryClass::FindNearbyCell((InfantryClass *)this, (int)v18); /*0x415394*/
              ptr_0[288](this, NearbyCell, 1); /*0x41539c*/
            }
            else
            {
              v20 = (void (__thiscall **)(AircraftClass *, void *, int))this->FootClass; /*0x4153ad*/
              Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v32, 700); /*0x4153bb*/
              v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], Waypoint_Location); /*0x4153c6*/
              v23 = InfantryClass::FindNearbyCell((InfantryClass *)this, (int)v22); /*0x4153ce*/
              v20[288](this, v23, 1); /*0x4153d6*/
              team = this->?; /*0x4153dc*/
              if ( team ) /*0x4153e4*/
                TeamClass::SelectMember((int)team, (int)this->?); /*0x4153f1*/
            }
          }
          else
          {
            v25 = (*(int (__thiscall **)(AircraftTypeClass *))(*(_DWORD *)this->Type + 188))(this->Type); /*0x41540d*/
            this->? = v25 != (*((int (__thiscall **)(AircraftClass *))this->FootClass + 114))(this) ? 4 : 1;
          }
        }
        else
        {
          this->? = 2; /*0x41530c*/
        }
      }
      else
      {
        v10 = (*((int (__thiscall **)(AircraftClass *, _BYTE *, _DWORD, _DWORD))this->FootClass + 330))( /*0x4152cd*/
                this,
                &this->Type->TechnoTypeClass[1000],
                0,
                0);
        if ( v10 ) /*0x4152d5*/
        {
          (*((void (__thiscall **)(AircraftClass *, int, int))this->FootClass + 288))(this, v10, 1); /*0x4152de*/
        }
        else
        {
          v11 = (void (__thiscall **)(AircraftClass *, void *, int))this->FootClass; /*0x4152e9*/
          ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((TechnoClass *)this); /*0x4152ef*/
          v11[288](this, ClosestPlacementCell, 1); /*0x4152f7*/
        }
      }
      goto LABEL_9; /*0x415250*/
    case 1:
      if ( !this->?[0] ) /*0x41542a*/
        WinAPI::Wrapper(-2147467261); /*0x415439*/
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x415447*/
        this->? = 2; /*0x41544e*/
      if ( !(*((unsigned __int8 (__thiscall **)(AircraftClass *, AbstractClass *))this->FootClass + 340))(this, this->?) ) /*0x415463*/
        this->? = 0; /*0x415471*/
      goto LABEL_9; /*0x41547b*/
    case 2:
      if ( !this->?[0] ) /*0x415480*/
        WinAPI::Wrapper(-2147467261); /*0x41548f*/
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x41549d*/
        this->? = 3; /*0x4154a4*/
      return 1; /*0x4154ba*/
    case 3:
      if ( !this->? ) /*0x4154bb*/
      {
        if ( this->?[1] ) /*0x4154c9*/
        {
          if ( this->Type[1].TechnoTypeClass[300] ) /*0x4154dd*/
          {
            (*((void (__thiscall **)(AircraftClass *, _DWORD))this->FootClass + 73))(this, 0); /*0x4154ed*/
            FootClass::MissionMoveCarryallLand((FootClass *)this); /*0x4154f5*/
            (*((void (__thiscall **)(AircraftClass *, int))this->FootClass + 73))(this, 1); /*0x415500*/
          }
          else
          {
            v26 = LinkedList::Pop((LinkedList *)this->?); /*0x41551a*/
            v27 = (_WORD *)(*((int (__thiscall **)(AircraftClass *, _BYTE *, AircraftClass *))this->FootClass + 110))( /*0x415522*/
                             this,
                             v33,
                             this);
            MapClass::ApplyOverlayReveal((MapClass *)&stru_87F5F0.__pad_58[416], v27, v29); /*0x41552e*/
            if ( (*((int (__thiscall **)(AircraftClass *, int))this->FootClass + 64))(this, v26) ) /*0x41553e*/
              *(_BYTE *)(v26 + 1060) = 0; /*0x415548*/
            v28 = (_WORD *)(*((int (__thiscall **)(AircraftClass *, _BYTE *))this->FootClass + 110))(this, v34); /*0x415559*/
            MapClass::FillRevealBuffer((MapClass *)&stru_87F5F0.__pad_58[416], v28, this); /*0x415565*/
            if ( !*(_BYTE *)(v26 + 1060) && *(_DWORD *)(v26 + 1492) ) /*0x415574*/
              TeamClass::AddMember((int *)this->?, v26, 0); /*0x415587*/
            if ( !this->?[1] ) /*0x41558c*/
              (*((void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 289))(this, 0, 1); /*0x4155a2*/
          }
        }
        else
        {
          (*((void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 289))(this, 0, 1); /*0x4155b5*/
        }
      }
      goto LABEL_9; /*0x415506*/
    case 4:
      this->? = 0; /*0x4155c0*/
      return 1; /*0x4155cd*/
    default:
LABEL_9:
      MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x41525a*/
      LOWORD(v8) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x41526a*/
      return v8 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2);
  }
}



// ==== 0x004155F0  TechnoClass::ApplyIronCurtain  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ApplyIronCurtain(TechnoClass *this)
{
  double v1; // st7
  int v3; // ebx
  AbstractClass *target; // eax
  void *ptr_0; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  TechnoClass *owner; // ecx
  int *v11; // eax
  void (__thiscall **v12)(TechnoClass *, void *, int); // edi
  void *v13; // eax
  int v15; // [esp+28h] [ebp-20h]
  __int16 v16[2]; // [esp+34h] [ebp-14h] BYREF
  int v17; // [esp+38h] [ebp-10h] BYREF
  int v18; // [esp+3Ch] [ebp-Ch] BYREF
  int v19; // [esp+40h] [ebp-8h]
  int v20; // [esp+44h] [ebp-4h]

  v3 = ObjectClass::ComputeDistance((ObjectClass *)this, (int)this->target); /*0x415604*/
  target = this->target; /*0x415606*/
  if ( target ) /*0x41560e*/
  {
    if ( *((_DWORD *)this + 361) ) /*0x415630*/
    {
      if ( v3 <= *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0) /*0x415660*/
                           + 180) )
      {
        (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD, _DWORD))this->RadioClass + 291))( /*0x415672*/
          this,
          0,
          0,
          0,
          0);
        ptr_0 = this->RadioClass; /*0x415678*/
        v6 = (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0); /*0x41567e*/
        (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))ptr_0 + 290))( /*0x415697*/
          this,
          0,
          0,
          0,
          0,
          *(_DWORD *)(*(_DWORD *)v6 + 164));
        v18 = this->?[0]; /*0x4156a9*/
        v7 = this->lastSightRange + 3; /*0x4156b6*/
        v19 = this->?[1]; /*0x4156b9*/
        v20 = this->?[2]; /*0x4156cd*/
        MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], &v18, 0, v7, 0); /*0x4156d1*/
        v8 = this->?[0]; /*0x4156d9*/
        v9 = this->?[2]; /*0x4156db*/
        v19 = this->?[1]; /*0x4156de*/
        v18 = v8; /*0x4156e7*/
        v20 = v9; /*0x4156eb*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 640), &v18, 0); /*0x4156fb*/
      }
    }
    else
    {
      (*((void (__thiscall **)(TechnoClass *, AbstractClass *, int))this->RadioClass + 288))(this, target, 1); /*0x415641*/
    }
  }
  else
  {
    (*((void (__thiscall **)(TechnoClass *, _DWORD, int))this->RadioClass + 288))(this, 0, 1); /*0x415617*/
    (*((void (__thiscall **)(TechnoClass *, int, _DWORD))this->RadioClass + 122))(this, 4, 0); /*0x415625*/
  }
  if ( v3 > 768 ) /*0x415706*/
    return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 656); /*0x4157a0*/
  (*((void (__thiscall **)(TechnoClass *, int, _DWORD))this->RadioClass + 122))(this, 31, 0); /*0x415714*/
  owner = (TechnoClass *)this->owner; /*0x41571a*/
  *((_BYTE *)this + 1746) = 1; /*0x415720*/
  v11 = (int *)TechnoClass::MapHouseRelationIndex(owner); /*0x415727*/
  *(_DWORD *)v16 = *CellClass::FindOpenNeighbor( /*0x415755*/
                      (CellClass *)&v17,
                      v1,
                      v11,
                      (int)&g_AircraftStatusFlag,
                      (int)&g_AircraftStatusFlag,
                      4,
                      1,
                      0,
                      v15);
  if ( *(_DWORD *)v16 != g_AircraftStatusFlag ) /*0x415759*/
  {
    v12 = (void (__thiscall **)(TechnoClass *, void *, int))this->RadioClass; /*0x415769*/
    v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x415777*/
    v12[288](this, v13, 1); /*0x41577f*/
  }
  return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 656); /*0x41578a*/
}



// ==== 0x004157C0  TechnoClass::ReturnToBase  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ReturnToBase(TechnoClass *this)
{
  double v1; // st7
  int v3; // edi
  void *ptr_0; // edi
  int v5; // eax
  int v6; // eax
  int *v7; // eax
  void (__thiscall **v8)(TechnoClass *, void *, int); // edi
  void *v9; // eax
  int v11; // [esp+24h] [ebp-1Ch]
  __int16 v12[2]; // [esp+2Ch] [ebp-14h] BYREF
  int v13; // [esp+30h] [ebp-10h] BYREF
  int v14[3]; // [esp+34h] [ebp-Ch] BYREF

  v3 = ObjectClass::ComputeDistance((ObjectClass *)this, (int)this->target); /*0x4157d9*/
  if ( v3 <= *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0) /*0x4157e9*/
                       + 180) )
  {
    (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD, _DWORD))this->RadioClass + 291))(this, 0, 0, 0, 0); /*0x4157f7*/
    ptr_0 = this->RadioClass; /*0x4157fd*/
    v5 = (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0); /*0x415803*/
    (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))ptr_0 + 290))( /*0x41581c*/
      this,
      0,
      0,
      0,
      0,
      *(_DWORD *)(*(_DWORD *)v5 + 164));
    v14[0] = this->?[0]; /*0x41582c*/
    v6 = this->lastSightRange + 3; /*0x415839*/
    v14[1] = this->?[1]; /*0x41583c*/
    v14[2] = this->?[2]; /*0x415850*/
    MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], v14, 0, v6, 0); /*0x415854*/
  }
  if ( !*((_DWORD *)this + 361) ) /*0x415859*/
  {
    v7 = (int *)TechnoClass::MapHouseRelationIndex((TechnoClass *)this->owner); /*0x415869*/
    *(_DWORD *)v12 = *CellClass::FindOpenNeighbor( /*0x415897*/
                        (CellClass *)&v13,
                        v1,
                        v7,
                        (int)&g_AircraftStatusFlag,
                        (int)&g_AircraftStatusFlag,
                        4,
                        1,
                        0,
                        v11);
    if ( *(_DWORD *)v12 != g_AircraftStatusFlag ) /*0x41589b*/
    {
      v8 = (void (__thiscall **)(TechnoClass *, void *, int))this->RadioClass; /*0x4158ab*/
      v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x4158b9*/
      v8[288](this, v9, 1); /*0x4158c1*/
    }
  }
  return 3; /*0x4158c7*/
}



// ==== 0x004158E0  TechnoClass::ReturnToBaseAndReload  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ReturnToBaseAndReload(TechnoClass *this)
{
  int target; // eax

  target = this->target; /*0x4158e3*/
  if ( target ) /*0x4158eb*/
  {
    if ( *((_DWORD *)this + 361) ) /*0x41590e*/
    {
      if ( ObjectClass::ComputeDistance(this, target) <= *(_DWORD *)&dword_8871E0->__pad_240[780] ) /*0x415940*/
      {
        (*(void (__thiscall **)(TechnoClass *, int, _DWORD))(this->ptr_0 + 488))(this, 27, 0); /*0x41594a*/
        --*((_BYTE *)this + 1747); /*0x415950*/
      }
      return 3; /*0x415956*/
    }
    else
    {
      (*(void (__thiscall **)(TechnoClass *, int, int))(this->ptr_0 + 1152))(this, target, 1); /*0x41591f*/
      return 3; /*0x415925*/
    }
  }
  else
  {
    (*(void (__thiscall **)(TechnoClass *, _DWORD, int))(this->ptr_0 + 1152))(this, 0, 1); /*0x4158f3*/
    (*(void (__thiscall **)(TechnoClass *, int, _DWORD))(this->ptr_0 + 488))(this, 4, 0); /*0x415901*/
    return 3; /*0x415907*/
  }
}



// ==== 0x00415960  TechnoClass::ScatterFromThreat  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ScatterFromThreat(TechnoClass *this)
{
  int target; // eax
  char v3; // al
  _DWORD v5[3]; // [esp+4h] [ebp-Ch] BYREF

  target = this->target; /*0x415966*/
  *((_BYTE *)this + 1746) = 1; /*0x41596c*/
  if ( !target || !this->passengers[1] ) /*0x41597b*/
  {
    *((_BYTE *)this + 1746) = 0; /*0x415a0a*/
LABEL_9:
    (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->ptr_0 + 968))(this, 0); /*0x415a11*/
    (*(void (__thiscall **)(TechnoClass *, _DWORD, int))(this->ptr_0 + 1152))(this, 0, 1); /*0x415a25*/
    (*(void (__thiscall **)(TechnoClass *, int, _DWORD))(this->ptr_0 + 488))(this, 4, 0); /*0x415a33*/
    return 5; /*0x415a33*/
  }
  if ( ObjectClass::ComputeDistance(this, target) > *(_DWORD *)&dword_8871E0->__pad_240[780] ) /*0x41599d*/
  {
    v3 = *((_BYTE *)this + 1747); /*0x41599f*/
    *((_BYTE *)this + 1746) = 0; /*0x4159a5*/
    if ( v3 > 0 ) /*0x4159ae*/
    {
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD))(this->ptr_0 + 488))(this, 26, 0); /*0x4159b8*/
      return 5; /*0x4159c7*/
    }
    goto LABEL_9; /*0x4159ae*/
  }
  v5[0] = this->location[0]; /*0x4159d4*/
  v5[1] = this->location[1]; /*0x4159e0*/
  v5[2] = this->location[2]; /*0x4159e7*/
  if ( (unsigned __int8)IsCoordVisibleMap((ObjectClass *)&dword_87F7E8, v5) ) /*0x4159f0*/
  {
    ProcessTechnoMovementAction((char *)this); /*0x4159fb*/
    return 5; /*0x415a09*/
  }
  return 5; /*0x4159c3*/
}



// ==== 0x00415A50  AircraftClass::ProcessReturnToBase  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::ProcessReturnToBase(AircraftClass *this)
{
  double v1; // st7
  HouseClass *owner; // ecx
  int *TransitionCount; // eax
  void (__thiscall **ptr_0)(AircraftClass *, void *, int); // edi
  void *v6; // eax
  int v8; // [esp+0h] [ebp-Ch]
  __int16 v9[2]; // [esp+4h] [ebp-8h] BYREF
  int v10; // [esp+8h] [ebp-4h] BYREF

  if ( this->? ) /*0x415a56*/
  {
    if ( this->? == (AbstractClass *)(*((int (__thiscall **)(AircraftClass *))this->FootClass + 111))(this) ) /*0x415aef*/
      (*((void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 288))(this, 0, 1); /*0x415af9*/
  }
  else
  {
    owner = this->?; /*0x415a60*/
    TransitionCount = *(int **)&owner->__pad_13C[164]; /*0x415a66*/
    if ( (unsigned int)TransitionCount >= 4 ) /*0x415a6e*/
      TransitionCount = (int *)HouseClass::GetTransitionCount(owner); /*0x415a75*/
    *(_DWORD *)v9 = *CellClass::FindOpenNeighbor( /*0x415aa3*/
                       (CellClass *)&v10,
                       v1,
                       TransitionCount,
                       (int)&g_AircraftStatusFlag,
                       (int)&g_AircraftStatusFlag,
                       4,
                       1,
                       0,
                       v8);
    if ( *(_DWORD *)v9 != g_AircraftStatusFlag ) /*0x415aa7*/
    {
      ptr_0 = (void (__thiscall **)(AircraftClass *, void *, int))this->FootClass; /*0x415ab8*/
      v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x415ac6*/
      ptr_0[288](this, v6, 1); /*0x415ace*/
      return 3; /*0x415ade*/
    }
  }
  return 3; /*0x415ada*/
}



// ==== 0x00415B10  AircraftClass::FindLandingCell  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::FindLandingCell(AircraftClass *this, int *a2, int a3)
{
  int *v5; // ebp
  int v6; // esi
  _WORD *v7; // eax
  int v8; // esi
  int v9; // ecx
  __int16 v10; // dx
  int v11; // esi
  void *v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // esi
  void *v16; // eax
  int *v18; // [esp+28h] [ebp-18h] BYREF
  int v19; // [esp+2Ch] [ebp-14h]
  char v20[4]; // [esp+30h] [ebp-10h] BYREF
  _DWORD v21[3]; // [esp+34h] [ebp-Ch] BYREF
  int *v22; // [esp+44h] [ebp+4h]

  v18 = 0; /*0x415b1f*/
  v19 = 0; /*0x415b29*/
  v5 = dword_817A58; /*0x415b2d*/
  do /*0x415bab*/
  {
    v6 = *v5; /*0x415b34*/
    v7 = (_WORD *)(*((int (__thiscall **)(AircraftClass *, char *))this->FootClass + 110))(this, v20); /*0x415b3e*/
    v8 = v6 & 7; /*0x415b44*/
    v9 = 4 * v8 + 9041544; /*0x415b55*/
    v10 = *v7 + LOWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x415b5c*/
    v11 = *a2; /*0x415b5f*/
    LOWORD(v22) = v10; /*0x415b6b*/
    HIWORD(v22) = v7[1] + *(_WORD *)(v9 + 2); /*0x415b74*/
    v18 = v22; /*0x415b83*/
    v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v18); /*0x415b87*/
    if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v11 + 428))(a2, v12, -1, -1, 0, 1) ) /*0x415b8f*/
      break; /*0x415b97*/
    ++v5; /*0x415b9d*/
    ++v19; /*0x415ba7*/
  }
  while ( (int)v5 < (int)dword_817A78 ); /*0x415bab*/
  LOWORD(v22) = (unsigned __int16)dword_817A58[v19] << 13; /*0x415bc3*/
  v13 = this->?[1]; /*0x415bc8*/
  v21[0] = this->?[0]; /*0x415bcb*/
  v14 = this->?[2]; /*0x415bd3*/
  v21[1] = v13; /*0x415bd6*/
  v21[2] = v14; /*0x415bda*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(*a2 + 216))( /*0x415bf3*/
          a2,
          v21,
          (unsigned __int8)((((unsigned int)v22 >> 7) + 1) >> 1)) )
    return 0; /*0x415c57*/
  (*(void (__thiscall **)(int *, int, _DWORD))(*a2 + 488))(a2, 2, 0); /*0x415c05*/
  v15 = *a2; /*0x415c0b*/
  v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v18); /*0x415c19*/
  (*(void (__thiscall **)(int *, void *, int))(v15 + 1152))(a2, v16, 1); /*0x415c21*/
  if ( (*((int (__thiscall **)(AircraftClass *, int, int *))this->FootClass + 158))(this, 2, a2) == 1 ) /*0x415c37*/
    (*((void (__thiscall **)(AircraftClass *, int))this->FootClass + 157))(this, 9); /*0x415c3f*/
  return 1; /*0x415c45*/
}



// ==== 0x00415C60  ObjectClass::ProcessTechnoMovementAction  this=TechnoClass  sig=csp ====
int __thiscall ProcessTechnoMovementAction(char *this)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // ebx
  unsigned int v7; // ebp
  double v8; // st7
  double v9; // st7
  int v10; // eax
  _DWORD *v11; // ebx
  int *v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  void *v16; // eax
  _DWORD *v17; // eax
  wchar_t *v18; // eax
  double v20; // [esp+20h] [ebp-20h] BYREF
  double v21; // [esp+28h] [ebp-18h] BYREF
  int v22; // [esp+30h] [ebp-10h]
  int v23; // [esp+34h] [ebp-Ch] BYREF
  int v24; // [esp+38h] [ebp-8h]
  int v25; // [esp+3Ch] [ebp-4h]

  v2 = (_DWORD *)LinkedList::Pop((_DWORD *)this + 69); /*0x415c73*/
  if ( !v2 ) /*0x415c77*/
    return 0; /*0x415c77*/
  v3 = *(_DWORD *)this; /*0x415c83*/
  --this->q0BF; /*0x415c8d*/
  v4 = (*(int (__thiscall **)(char *, double *))(v3 + 72))(this, &v21); /*0x415c93*/
  v23 = *(_DWORD *)v4; /*0x415c98*/
  v24 = *(_DWORD *)(v4 + 4); /*0x415c9f*/
  v5 = *(_DWORD *)(v4 + 8); /*0x415ca3*/
  LOBYTE(v4) = this->ammo; /*0x415ca6*/
  v25 = v5; /*0x415cae*/
  if ( (v4 & 1) != 0 ) /*0x415cb2*/
    LOWORD(v20) = *(_WORD *)ProgressTimer::GetValue((_WORD *)this + 452, &v20) - 0x3FFF; /*0x415ccc*/
  else
    LOWORD(v20) = *(_WORD *)ProgressTimer::GetValue((_WORD *)this + 452, &v20) + 0x3FFF; /*0x415cee*/
  v6 = v25; /*0x415d00*/
  LODWORD(v20) = SLOWORD(v20) - 0x3FFF; /*0x415d04*/
  v21 = (double)SLODWORD(v20) * -0.00009587672516830327; /*0x415d13*/
  v7 = HIDWORD(v21); /*0x415d1b*/
  v20 = (double)v24; /*0x415d25*/
  v8 = Math::SinCos(v21); /*0x415d29*/
  LODWORD(v20) = Math::RoundToInt(v20 - v8 * 128.0); /*0x415d3d*/
  v9 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v7, LODWORD(v21)))); /*0x415d47*/
  v10 = Math::RoundToInt(v9 * 128.0 + (double)v23); /*0x415d59*/
  v24 = LODWORD(v20); /*0x415d66*/
  v23 = v10; /*0x415d70*/
  v25 = v6; /*0x415d74*/
  v11 = Coord::To_Cell(&dword_87F7E8, &v23); /*0x415d81*/
  if ( (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, _DWORD, int))(*v2 + 428))(v2, v11, -1, -1, 0, 1) /*0x415de8*/
    || (v12 = ObjectPlacement::CalcPosition(v11, (int *)&v21, &v23, 0, 0, 0),
        v13 = *v12,
        v14 = v12[1],
        v15 = v12[2],
        v13 == dword_889E88)
    && v14 == dword_889E8C
    && v15 == dword_889E90
    || (v24 = v14, v23 = v13, !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *))(*v2 + 232))(v2, &v23)) )
  {
    CellClass::AddObject((_DWORD *)this + 69, v2); /*0x415eb8*/
    (*(void (__thiscall **)(_DWORD *))(*v2 + 284))(v2); /*0x415ec1*/
    ++this->q0BF; /*0x415ec7*/
    return 0; /*0x415ecf*/
  }
  v21 = *(double *)(this + 156); /*0x415e00*/
  v22 = this->locationZ; /*0x415e13*/
  StartAudioControllerAt(dword_8871E0->?[2], (int)&v21, 0); /*0x415e21*/
  v16 = Coord::To_Cell(&dword_87F7E8, &v23); /*0x415e30*/
  v17 = (_DWORD *)(*(int (__thiscall **)(void *, double *))(*(_DWORD *)v16 + 72))(v16, &v21); /*0x415e3e*/
  LOWORD(v20) = *v17 / 256; /*0x415e51*/
  WORD1(v20) = v17[1] / 256; /*0x415e65*/
  v2[343] = LODWORD(v20); /*0x415e6e*/
  if ( this->q175 ) /*0x415e74*/
    TeamClass::LiberateMember_Start(v2, -1, 0); /*0x415e83*/
  v18 = dword_A8ED84; /*0x415e88*/
  *(this + 1747) = 5; /*0x415e93*/
  this->diskLaserTimer = v18; /*0x415e9c*/
  this->missionStatus = v24; /*0x415ea4*/
  this->q2F4 = 0; /*0x415eaa*/
  return 0; /*0x415ea2*/
}



// ==== 0x00415EE0  BulletClass::FlightUpdate  this=TechnoClass  sig=csp ====
double __thiscall BulletClass::FlightUpdate(Class_7E22A4 *this, double a2, int a3, int a4)
{
  double result; // st7
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  unsigned int v14; // ebx
  _DWORD *Value; // ebx
  int v21; // edx
  _DWORD *v24; // esi
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  int v27; // edx
  int v28; // eax
  __int16 v29; // bx
  unsigned int v31; // ebx
  __int16 v34; // bx
  __int64 v38; // rcx
  Class_7E22A4 *v46; // esi
  _DWORD *v47; // eax
  _DWORD *v48; // eax
  _DWORD *v49; // eax
  _DWORD *v50; // eax
  _DWORD *v51; // eax
  void *v52; // edx
  int v53; // eax
  int v54; // edx
  void *v55; // eax
  double v56; // [esp+4h] [ebp-90h]
  double v57; // [esp+Ch] [ebp-88h]
  double v58; // [esp+Ch] [ebp-88h]
  double v59; // [esp+Ch] [ebp-88h]
  double v60; // [esp+Ch] [ebp-88h]
  double v61; // [esp+14h] [ebp-80h]
  double v62; // [esp+14h] [ebp-80h]
  double v63; // [esp+14h] [ebp-80h]
  _WORD *v64; // [esp+1Ch] [ebp-78h]
  double *v65; // [esp+2Ch] [ebp-68h]
  int v66; // [esp+30h] [ebp-64h] BYREF
  _BYTE v67[12]; // [esp+34h] [ebp-60h] BYREF
  double v68; // [esp+44h] [ebp-50h] BYREF
  int v69; // [esp+4Ch] [ebp-48h]
  double v70; // [esp+58h] [ebp-3Ch] BYREF
  _DWORD v71[3]; // [esp+60h] [ebp-34h] BYREF
  double v72; // [esp+6Ch] [ebp-28h]
  int v73[2]; // [esp+7Ch] [ebp-18h] BYREF
  double v74; // [esp+84h] [ebp-10h]
  double v75; // [esp+8Ch] [ebp-8h]

  if ( this->q118 ) /*0x415eee*/
  {
    ProcessTechnoMovementAction((char *)this); /*0x415ef8*/
  }
  else
  {
    v6 = LODWORD(a2); /*0x415f0b*/
    v7 = TechnoClass::FireWeapon((TechnoClass *)this); /*0x415f12*/
    v8 = v7; /*0x415f17*/
    v65 = (double *)v7; /*0x415f1b*/
    if ( v7 ) /*0x415f1f*/
    {
      if ( !*(_DWORD *)(*(_DWORD *)(v7 + 172) + 732) ) /*0x415f2b*/
      {
        if ( !*((_DWORD *)this + 413) ) /*0x415f39*/
          WinAPI::Wrapper(-2147467261); /*0x415f48*/
        v66 = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 132))(*((_DWORD *)this + 413)); /*0x415f5c*/
        _ESI = (double *)(v8 + 232); /*0x415f60*/
        __asm { fild [esp+78h+var_64] } /*0x415f66*/
        __asm { fstp qword ptr [esp+78h+var_54+4] }
        BulletClass::NormalizeZeroVector(_ESI); /*0x415f70*/
        Vector3::Magnitude((int *)_ESI); /*0x415f77*/
        __asm { fdivr qword ptr [esp+78h+var_54+4] } /*0x415f7c*/
        __asm
        {
          fld st
          fmul qword ptr [esi]
          fstp qword ptr [esi]
        }
        *_ESI = _RT1; /*0x415f8b*/
        __asm /*0x415f8d*/
        {
          fld st
          fmul qword ptr [esi+8]
          fstp qword ptr [esi+8]
        }
        _ESI[1] = _RT1; /*0x415f92*/
        __asm /*0x415f95*/
        {
          fmul qword ptr [esi+10h]
          fstp qword ptr [esi+10h]
        }
        _ESI[2] = _RT1; /*0x415f98*/
        v66 = *(__int16 *)Vector::ToFacingMath(&v66, v64) - 0x3FFF; /*0x415fa9*/
        __asm /*0x415faf*/
        {
          fild [esp+78h+var_64]
          fmul ds:dbl_7E2810
          fstp qword ptr [esp+78h+var_64+4]
        }
        Vector3::Magnitude((int *)_ESI); /*0x415fbd*/
        __asm /*0x415fc2*/
        {
          fstp qword ptr [esp+78h+var_54+4]
          fld qword ptr [esp+78h+var_64+4]
          fcomp ds:dbl_7E2800
          fnstsw ax
        }
        if ( (_AX & 0x4000) == 0 ) /*0x415fd5*/
        {
          v14 = *(_DWORD *)&v67[4]; /*0x415fd7*/
          Math::ArcTan2(*(double *)v67); /*0x415fe1*/
          __asm { fdivr qword ptr [esi] } /*0x415fe6*/
          v57 = COERCE_DOUBLE(__PAIR64__(v14, *(unsigned int *)v67)); /*0x415fed*/
          __asm { fstp qword ptr [esi] } /*0x415fee*/
          *_ESI = _RT1; /*0x415fee*/
          Math::ArcTan2(v57); /*0x415ff0*/
          __asm { fdivr qword ptr [esi+8] } /*0x415ff5*/
          __asm { fstp qword ptr [esi+8] }
          _ESI[1] = _RT1; /*0x415ffb*/
        }
        Math::ArcTan2(-0.00009587672516830327); /*0x416008*/
        __asm { fmul qword ptr [esi] } /*0x41600d*/
        __asm { fstp qword ptr [esi] }
        *_ESI = _RT1; /*0x416019*/
        Math::ArcTan2(-0.00009587672516830327); /*0x41601b*/
        __asm { fmul qword ptr [esi+8] } /*0x416020*/
        __asm { fstp qword ptr [esi+8] }
        _ESI[1] = _RT1; /*0x41602d*/
        Math::SinCos(-0.00009587672516830327); /*0x416030*/
        __asm { fmul qword ptr [esp+90h+var_54+4] } /*0x416035*/
        __asm { fstp qword ptr [esi+10h] }
        _ESI[2] = _RT1; /*0x416047*/
        Value = ProgressTimer::GetValue((ProgressTimer *)(this + 928), v67); /*0x416051*/
        Vector2::NormalizeNonZero((int *)_ESI); /*0x416053*/
        Function::41C430(_ESI); /*0x41605a*/
        v21 = *(__int16 *)Value; /*0x41605f*/
        __asm { fstp qword ptr [esp+78h+var_54+4] } /*0x416062*/
        v66 = v21 - 0x3FFF; /*0x41606f*/
        __asm /*0x416073*/
        {
          fild [esp+80h+var_64]
          fmul ds:dbl_7E2810
          fstp qword ptr [esp+80h+var_84+4]; double
        }
        Math::ArcTan2(v61); /*0x416080*/
        __asm /*0x416085*/
        {
          fmul qword ptr [esp+80h+var_54+4]
          fstp qword ptr [esi]
        }
        *_ESI = _RT1; /*0x416089*/
        v66 = *(__int16 *)Value - 0x3FFF; /*0x416093*/
        __asm /*0x416097*/
        {
          fild [esp+80h+var_64]
          fmul ds:dbl_7E2810
          fstp qword ptr [esp+80h+var_84+4]; double
        }
        Math::SinCos(v62); /*0x4160a4*/
        __asm { fmul qword ptr [esp+80h+var_54+4] } /*0x4160a9*/
        v6 = LODWORD(a2); /*0x4160ad*/
        __asm /*0x4160b3*/
        {
          fchs
          fstp qword ptr [esi+8]
        }
        _ESI[1] = _RT1; /*0x4160b5*/
        v8 = (int)v65; /*0x4160b8*/
      }
      if ( *(_DWORD *)(*(_DWORD *)(v8 + 172) + 732) == 1 ) /*0x4160c9*/
      {
        v24 = (_DWORD *)(*(int (__thiscall **)(Class_7E22A4 *, _BYTE *))(this->u32_48)(this, v67); /*0x4160dd*/
        v25 = (_DWORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v6 + 72))(v6, &v70); /*0x4160e6*/
        v26 = Coord::Subtract((Coord *)&v71[1], *v25 - *v24, v25[1] - v24[1], v25[2] - v24[2]); /*0x416106*/
        LODWORD(v68) = *v26; /*0x41610d*/
        v27 = v26[1]; /*0x416111*/
        __asm { fild [esp+78h+var_54+4] } /*0x416114*/
        v28 = v26[2]; /*0x416118*/
        HIDWORD(v68) = v27; /*0x41611b*/
        v69 = v28; /*0x41611f*/
        __asm /*0x416123*/
        {
          fstp qword ptr [esp+78h+var_34+4]
          fild [esp+78h+var_4C]
        }
        __asm
        {
          fstp qword ptr [esp+58h]
          fild [esp+80h+var_48]
        }
        v74 = v72; /*0x416144*/
        __asm /*0x41614c*/
        {
          fstp [esp+88h+var_8]
          fld [esp+88h+var_28]
          fchs
          fstp [esp+88h+var_8C+4]; double
        }
        *(_QWORD *)v73 = *(_QWORD *)&v71[1]; /*0x41615c*/
        Math::CalcAngle(v58, *(double *)&v71[1]); /*0x416168*/
        __asm { fsub ds:dbl_7E2820 } /*0x41616d*/
        __asm { fmul ds:dbl_7E2818 }
        v29 = Math::RoundToInt(result); /*0x416181*/
        _ESI = v65 + 29; /*0x416188*/
        Vector2::NormalizeNonZero((int *)v65 + 58); /*0x416190*/
        Function::41C430(v65 + 29); /*0x416197*/
        __asm { fstp qword ptr [esp+78h+var_54+4] } /*0x41619c*/
        v66 = v29 - 0x3FFF; /*0x4161a9*/
        __asm /*0x4161ad*/
        {
          fild [esp+78h+var_64]
          fmul ds:dbl_7E2810
          fstp qword ptr [esp+78h+var_64+4]
        }
        v31 = *(_DWORD *)&v67[4]; /*0x4161bb*/
        Math::ArcTan2(*(double *)v67); /*0x4161c5*/
        __asm { fmul qword ptr [esp+80h+var_54+4] } /*0x4161ca*/
        __asm { fstp qword ptr [esi] }
        *_ESI = _RT1; /*0x4161cf*/
        Math::SinCos(COERCE_DOUBLE(__PAIR64__(v31, *(unsigned int *)v67))); /*0x4161d6*/
        __asm { fmul qword ptr [esp+88h+var_54+4] } /*0x4161db*/
        __asm
        {
          fchs
          fstp qword ptr [esi+8]
        }
        _ESI[1] = _RT1; /*0x4161e8*/
        Math::Hypotenuse2D(v73); /*0x4161eb*/
        __asm { fstp qword ptr [esp+80h+var_84+4]; double } /*0x4161fb*/
        Math::CalcAngle(v75, v63); /*0x416200*/
        __asm { fsub ds:dbl_7E2820 } /*0x416205*/
        __asm { fmul ds:dbl_7E2818 }
        v34 = Math::RoundToInt(result); /*0x416219*/
        v66 = *(__int16 *)Vector::ToFacingMath((int *)v67, v64) - 0x3FFF; /*0x416231*/
        __asm /*0x416237*/
        {
          fild [esp+78h+var_64]
          fmul ds:dbl_7E2810
          fstp qword ptr [esp+78h+var_64+4]
        }
        Vector3::Magnitude((int *)v65 + 58); /*0x416245*/
        __asm /*0x41624a*/
        {
          fstp qword ptr [esp+78h+var_54+4]
          fld qword ptr [esp+78h+var_64+4]
          fcomp ds:dbl_7E2800
          fnstsw ax
        }
        if ( (_AX & 0x4000) == 0 ) /*0x41625d*/
        {
          Math::ArcTan2(*(double *)v67); /*0x416269*/
          __asm { fdivr qword ptr [esi] } /*0x41626e*/
          v59 = *(double *)v67; /*0x416279*/
          __asm { fstp qword ptr [esi] } /*0x41627a*/
          *_ESI = _RT1; /*0x41627a*/
          Math::ArcTan2(v59); /*0x41627c*/
          __asm { fdivr qword ptr [esi+8] } /*0x416281*/
          __asm { fstp qword ptr [esi+8] }
          v65[30] = _RT1; /*0x416287*/
        }
        v66 = v34 - 0x3FFF; /*0x416292*/
        __asm /*0x416296*/
        {
          fild [esp+78h+var_64]
          fmul ds:dbl_7E2810
          fstp qword ptr [esp+78h+var_64+4]
        }
        v38 = *(_QWORD *)v67; /*0x4162a8*/
        Math::ArcTan2(*(double *)v67); /*0x4162ae*/
        __asm { fmul qword ptr [esi] } /*0x4162b3*/
        v60 = COERCE_DOUBLE(__PAIR64__(HIDWORD(v38), *(unsigned int *)v67)); /*0x4162ba*/
        __asm { fstp qword ptr [esi] } /*0x4162bb*/
        *_ESI = _RT1; /*0x4162bb*/
        Math::ArcTan2(v60); /*0x4162bd*/
        __asm { fmul qword ptr [esi+8] } /*0x4162c2*/
        v56 = COERCE_DOUBLE(__PAIR64__(HIDWORD(v38), *(unsigned int *)v67)); /*0x4162ca*/
        __asm { fstp qword ptr [esi+8] } /*0x4162cb*/
        v65[30] = _RT1; /*0x4162cb*/
        Math::SinCos(v56); /*0x4162ce*/
        __asm { fmul qword ptr [esp+90h+var_54+4] } /*0x4162d3*/
        __asm { fstp qword ptr [esi+10h] }
        v65[31] = _RT1; /*0x4162de*/
        _EAX = *(_DWORD *)(*(int (__thiscall **)(Class_7E22A4 *, _DWORD))(this->q3F8)(this, 0); /*0x4162e9*/
        __asm /*0x4162ed*/
        {
          fild dword ptr [eax+0A8h]
          fstp qword ptr [esp+78h+var_54+4]
        }
        BulletClass::NormalizeZeroVector(_ESI); /*0x4162f7*/
        Vector3::Magnitude((int *)_ESI); /*0x4162fe*/
        __asm /*0x416303*/
        {
          fdivr qword ptr [esp+78h+var_54+4]
          fld st
          fmul qword ptr [esi]
          fstp qword ptr [esi]
        }
        *_ESI = _RT1; /*0x41630b*/
        __asm /*0x41630d*/
        {
          fld st
          fmul qword ptr [esi+8]
          fstp qword ptr [esi+8]
        }
        v65[30] = _RT1; /*0x416312*/
        __asm /*0x416315*/
        {
          fmul qword ptr [esi+10h]
          fstp qword ptr [esi+10h]
        }
        v65[31] = _RT1; /*0x416318*/
      }
      if ( (unsigned __int8)House::IsHumanPlayer(*((House **)this + 135)) ) /*0x416325*/
      {
        v46 = this + 156; /*0x416332*/
        v68 = *(double *)(this + 156); /*0x41633c*/
        v69 = this->locationZ; /*0x41634f*/
        if ( (unsigned __int8)Cell::IsPassable(&v68) ) /*0x416358*/
          goto LABEL_21; /*0x416358*/
        Coord::Subtract((Coord *)&v68, 512, 512, 0); /*0x416375*/
        v47 = Coord::Subtract( /*0x41639d*/
                (Coord *)&v71[1],
                *(_DWORD *)v46 + LODWORD(v68),
                this->owningHouseIndex + HIDWORD(v68),
                this->locationZ + v69);
        *(_DWORD *)v67 = *v47; /*0x4163a4*/
        *(_QWORD *)&v67[4] = *(_QWORD *)(v47 + 1); /*0x4163ab*/
        if ( (unsigned __int8)Cell::IsPassable(v67) ) /*0x4163c0*/
          goto LABEL_21; /*0x4163c0*/
        Coord::Subtract((Coord *)&v68, -512, -512, 0); /*0x4163dd*/
        v48 = Coord::Subtract( /*0x416405*/
                (Coord *)&v71[1],
                *(_DWORD *)v46 + LODWORD(v68),
                this->owningHouseIndex + HIDWORD(v68),
                this->locationZ + v69);
        *(_DWORD *)v67 = *v48; /*0x41640c*/
        *(_QWORD *)&v67[4] = *(_QWORD *)(v48 + 1); /*0x416413*/
        if ( (unsigned __int8)Cell::IsPassable(v67) ) /*0x416428*/
          goto LABEL_21; /*0x416428*/
        Coord::Subtract((Coord *)&v68, 512, -512, 0); /*0x416445*/
        v49 = Coord::Subtract( /*0x41646d*/
                (Coord *)&v71[1],
                *(_DWORD *)v46 + LODWORD(v68),
                this->owningHouseIndex + HIDWORD(v68),
                this->locationZ + v69);
        *(_DWORD *)v67 = *v49; /*0x416474*/
        *(_QWORD *)&v67[4] = *(_QWORD *)(v49 + 1); /*0x41647b*/
        if ( (unsigned __int8)Cell::IsPassable(v67) /*0x416514*/
          || (Coord::Subtract((Coord *)&v68, 512, -512, 0),
              v50 = Coord::Subtract(
                      (Coord *)&v71[1],
                      *(_DWORD *)v46 + LODWORD(v68),
                      this->owningHouseIndex + HIDWORD(v68),
                      this->locationZ + v69),
              *(_DWORD *)v67 = *v50,
              *(_QWORD *)&v67[4] = *(_QWORD *)(v50 + 1),
              (unsigned __int8)Cell::IsPassable(v67))
          || (v51 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)LODWORD(a2) + 72))(
                                LODWORD(a2),
                                &v71[1]),
              (unsigned __int8)Cell::IsPassable(v51)) )
        {
LABEL_21:
          LODWORD(v68) = *(_DWORD *)v46; /*0x416529*/
          v52 = (void *)this->owner; /*0x41652d*/
          HIDWORD(v68) = this->owningHouseIndex; /*0x416538*/
          v69 = this->locationZ; /*0x416545*/
          MapClass::RevealArea1( /*0x416557*/
            (MapClass *)&dword_87F7E8,
            (int *)&v68,
            dword_8871E0->AttackingAircraftSightRange,
            v52,
            0,
            0,
            0,
            1,
            0);
          v53 = *(_DWORD *)v46; /*0x41655f*/
          v54 = this->locationZ; /*0x416561*/
          HIDWORD(v68) = this->owningHouseIndex; /*0x416566*/
          LODWORD(v68) = v53; /*0x416572*/
          v55 = (void *)this->owner; /*0x416576*/
          v69 = v54; /*0x416580*/
          MapClass::RevealArea1( /*0x416595*/
            (MapClass *)&dword_87F7E8,
            (int *)&v68,
            dword_8871E0->AttackingAircraftSightRange,
            v55,
            0,
            0,
            0,
            1,
            1);
        }
      }
    }
    if ( *((_BYTE *)this + 1738) ) /*0x41659e*/
      return ((double (__thiscall *)(Class_7E22A4 *))*(_DWORD *)(this->q0F8)(this); /*0x4165ac*/
  }
  return result; /*0x415eff*/
}



// ==== 0x004165C0  AircraftClass::DeployWithAnim  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::DeployWithAnim(
        AircraftClass *this,
        int a2,
        int a3,
        int *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void *a10)
{
  int v11; // ebp
  AnimClass *v13; // ebx
  void *v14; // edi
  int *v15; // eax
  char v16; // [esp+0h] [ebp-14h]
  __int64 v17; // [esp+4h] [ebp-10h]
  _BYTE v18[8]; // [esp+Ch] [ebp-8h] BYREF

  v11 = FootClass::ProcessDeploy( /*0x4165f1*/
          this,
          a2,
          COERCE_DOUBLE(__PAIR64__((unsigned int)a4, a3)),
          (int *)a5,
          a6,
          a7,
          (void *)a8,
          v16,
          v17);
  if ( v11 == 4 ) /*0x4165f6*/
  {
    (*(void (__thiscall **)(AircraftClass *, _DWORD))(this->ptr_0 + 952))(this, 0); /*0x416613*/
    if ( *(int *)(this->Type + 1852) > 0 ) /*0x416627*/
    {
      v13 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x416633*/
      if ( v13 ) /*0x41663a*/
      {
        v14 = *(void **)(*(_DWORD *)(this->Type + 1840) /*0x416671*/
                       + 4
                       * ((unsigned int)Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)
                        % *(_DWORD *)(this->Type + 1852)));
        v15 = (int *)(*(int (__thiscall **)(AircraftClass *, _BYTE *))(this->ptr_0 + 164))(this, v18); /*0x41667b*/
        AnimClass::ctor(v13, v14, v15, 0, 1, (void *)0x600, 0, 0); /*0x416685*/
      }
    }
    if ( !(*(unsigned __int8 (__thiscall **)(AircraftClass *, int))(this->ptr_0 + 988))(this, a6) ) /*0x416694*/
      (*(void (__thiscall **)(AircraftClass *))(this->ptr_0 + 248))(this); /*0x4166a3*/
  }
  else if ( v11 == 5 ) /*0x4165f9*/
  {
    return 5; /*0x416609*/
  }
  return v11; /*0x4165ff*/
}



// ==== 0x004166C0  AircraftClass::Mission_Enter  this=AircraftClass  sig=csp ====
int __usercall AircraftClass::Mission_Enter@<eax>(
        AircraftClass *this,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5@<esi>)
{
  Carryall *v5; // ecx
  int result; // eax
  int v7; // esi
  int Carryall_field_00; // eax
  char *MissionControl; // eax
  int v10; // eax
  Carryall v11; // edi
  void *NearbyCell; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // ecx
  int *v16; // eax
  int v17; // edx
  int v18; // edi
  _DWORD *v19; // eax
  int Element; // eax
  int *v21; // eax
  int v22; // ecx
  _DWORD *v23; // eax
  int v24; // edi
  int v25; // ebx
  _WORD *v26; // eax
  int v27; // ecx
  _DWORD *v28; // eax
  int v29; // ecx
  _DWORD *v30; // eax
  int v31; // edi
  int v32; // ebx
  _WORD *v33; // eax
  int v34; // ecx
  _DWORD *v35; // eax
  int v36; // [esp+0h] [ebp-60h]
  int v37; // [esp+4h] [ebp-5Ch]
  int v40; // [esp+1Ch] [ebp-44h]
  int v41; // [esp+1Ch] [ebp-44h]
  __int16 v42[2]; // [esp+20h] [ebp-40h] BYREF
  __int16 v43[2]; // [esp+24h] [ebp-3Ch] BYREF
  _BYTE v44[4]; // [esp+28h] [ebp-38h] BYREF
  int v45; // [esp+2Ch] [ebp-34h] BYREF
  _DWORD v46[2]; // [esp+30h] [ebp-30h] BYREF
  int v47; // [esp+38h] [ebp-28h]
  _BYTE v48[12]; // [esp+3Ch] [ebp-24h] BYREF
  _BYTE v49[12]; // [esp+48h] [ebp-18h] BYREF
  _DWORD v50[3]; // [esp+54h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(v5[433].Carryall_field_00 + 3580) ) /*0x4166c6*/
    return Carryall::MissionStateMachine(v5); /*0x4166d0*/
  v7 = (int)v5; /*0x4166e6*/
  switch ( v5[47].Carryall_field_00 ) /*0x4166f4*/
  {
    case 0: /*0x4166f4*/
      Carryall_field_00 = v5[361].Carryall_field_00; /*0x4166fb*/
      if ( Carryall_field_00 ) /*0x416703*/
      {
        v11.Carryall_field_00 = v5->Carryall_field_00; /*0x416748*/
        NearbyCell = InfantryClass::FindNearbyCell((InfantryClass *)v5, Carryall_field_00); /*0x41674f*/
        (*(void (__thiscall **)(int, void *, int))(v11.Carryall_field_00 + 1152))(v7, NearbyCell, 1); /*0x416757*/
        *(_DWORD *)(v7 + 188) = 1; /*0x41675d*/
      }
      else
      {
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(v5->Carryall_field_00 + 1156))(v5, 0, 1); /*0x41670d*/
      }
      goto LABEL_6; /*0x41670d*/
    case 1: /*0x4166f4*/
      v13 = v5[361].Carryall_field_00; /*0x416769*/
      if ( !v13 ) /*0x416771*/
        goto LABEL_29; /*0x416771*/
      v14 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, int, int, int, int, int))(*(_DWORD *)v13 + 76))( /*0x41677f*/
                        v13,
                        v48,
                        v7,
                        a4,
                        a5,
                        a3,
                        a2);
      if ( !*(_DWORD *)(v7 + 1652) ) /*0x41678a*/
        WinAPI::Wrapper(-2147467261); /*0x416799*/
      (*(void (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(v7 + 1652) + 68))(*(_DWORD *)(v7 + 1652), *v14); /*0x4167b4*/
      *(_DWORD *)(v7 + 188) = 2; /*0x4167b7*/
      return 1; /*0x4167cd*/
    case 2: /*0x4166f4*/
      if ( v5[328].Carryall_field_00 != -1 ) /*0x4167d5*/
      {
        v15 = v5[361].Carryall_field_00; /*0x4167db*/
        if ( !v15 ) /*0x4167e3*/
          goto LABEL_15; /*0x4167e3*/
        v16 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v15 + 72))(v15, v49); /*0x4167ec*/
        v17 = *v16; /*0x4167ef*/
        v18 = v16[1]; /*0x4167fb*/
        v47 = v16[2]; /*0x416801*/
        a2 = *(_DWORD *)(v7 + 164); /*0x41680e*/
        v37 = *(_DWORD *)(v7 + 160) - v18; /*0x416811*/
        v36 = *(_DWORD *)(v7 + 156) - v17; /*0x416812*/
        v47 = a2; /*0x416817*/
        v19 = Coord::Subtract((Coord *)v50, v36, v37, 0); /*0x41681b*/
        v46[0] = *v19; /*0x416822*/
        v46[1] = v19[1]; /*0x416829*/
        v47 = v19[2]; /*0x416834*/
        if ( (int)Coord::Length((Coord *)v46) < 256 ) /*0x416847*/
        {
LABEL_15:
          Element = Array::GetElement( /*0x416864*/
                      *(Array **)&dword_A83D4C->__pad_140[4 * *(_DWORD *)(v7 + 1312) + 208],
                      *(char *)(v7 + 1670));
          v21 = (int *)VectorClass::GetAtChecked( /*0x41687d*/
                         *(VectorClass **)&dword_A83D4C->__pad_140[4 * *(_DWORD *)(v7 + 1312) + 208],
                         Element);
          BuildingClass::ValidateFoundation_0(v7, a2, a3, v21, a4, a5); /*0x416885*/
        }
      }
      if ( !*(_DWORD *)(v7 + 1652) ) /*0x41688a*/
        WinAPI::Wrapper(-2147467261); /*0x416899*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v7 + 1652) + 16))(*(_DWORD *)(v7 + 1652)) ) /*0x4168a7*/
        goto LABEL_40; /*0x4168a7*/
      v22 = *(_DWORD *)(v7 + 1444); /*0x4168b2*/
      if ( v22 ) /*0x4168ba*/
      {
        v23 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v22 + 76))(v22, v50, v7); /*0x4168c4*/
        v24 = *v23 / 256; /*0x4168ed*/
        v25 = v23[1] / 256; /*0x4168f0*/
        v26 = (_WORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v7 + 440))(v7, v44); /*0x4168f3*/
        if ( (_WORD)v24 == *v26 && (_WORD)v25 == v26[1] ) /*0x416902*/
          goto LABEL_40; /*0x416902*/
      }
      v27 = *(_DWORD *)(v7 + 1444); /*0x416908*/
      if ( v27 ) /*0x416910*/
      {
        v28 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v27 + 76))(v27, v50, v7); /*0x41691a*/
        LOWORD(v40) = *v28 / 256; /*0x41692f*/
        HIWORD(v40) = v28[1] / 256; /*0x416947*/
        *(_DWORD *)v42 = v40; /*0x416950*/
        if ( !Cell::IsOccupied((Cell *)v7, v42, 1) ) /*0x416957*/
          goto LABEL_24; /*0x41695e*/
      }
      *(_DWORD *)(v7 + 188) = 4; /*0x416977*/
      return 1; /*0x41698d*/
    case 3: /*0x4166f4*/
      if ( !v5[413].Carryall_field_00 ) /*0x41698e*/
        WinAPI::Wrapper(-2147467261); /*0x41699d*/
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v5[413].Carryall_field_00 + 16))(v5[413].Carryall_field_00) ) /*0x4169ab*/
LABEL_29:
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v7 + 1156))(v7, 0, 1); /*0x4169b2*/
      return 1; /*0x4169cc*/
    case 4: /*0x4166f4*/
      if ( !v5[413].Carryall_field_00 ) /*0x4169cd*/
        WinAPI::Wrapper(-2147467261); /*0x4169dc*/
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v5[413].Carryall_field_00 + 16))(v5[413].Carryall_field_00) /*0x416a45*/
        || (v29 = *(_DWORD *)(v7 + 1444)) != 0
        && (v30 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v29 + 76))(v29, v50, v7),
            v31 = *v30 / 256,
            v32 = v30[1] / 256,
            v33 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v7 + 440))(v7, &v45),
            (_WORD)v31 == *v33)
        && (_WORD)v32 == v33[1] )
      {
LABEL_40:
        *(_DWORD *)(v7 + 188) = 3; /*0x416ab6*/
      }
      else
      {
        v34 = *(_DWORD *)(v7 + 1444); /*0x416a47*/
        if ( v34 ) /*0x416a4f*/
        {
          v35 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v34 + 76))(v34, v50, v7); /*0x416a59*/
          LOWORD(v41) = *v35 / 256; /*0x416a6e*/
          HIWORD(v41) = v35[1] / 256; /*0x416a86*/
          *(_DWORD *)v43 = v41; /*0x416a8f*/
          if ( !Cell::IsOccupied((Cell *)v7, v43, 1) ) /*0x416a96*/
          {
LABEL_24:
            *(_DWORD *)(v7 + 188) = 0; /*0x416960*/
            return 1; /*0x416976*/
          }
        }
      }
      result = 1; /*0x416ac3*/
      break; /*0x416ac3*/
    default:
LABEL_6:
      MissionControl = MissionClass::GetMissionControl((MissionClass *)v7); /*0x416713*/
      LOWORD(v10) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x416723*/
      return v10 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x416747*/
  }
  return result; /*0x416747*/
}



// ==== 0x00416AF0  FootClass::MissionMoveCarryallLand  this=FootClass  sig=csp ====
void __thiscall FootClass::MissionMoveCarryallLand(FootClass *this)
{
  _DWORD *v2; // esi
  int v3; // eax
  int InstanceCOM; // eax
  LPVOID v5; // ebx
  LPVOID v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  void (__thiscall **ptr_0)(FootClass *, void *, int); // esi
  void *v12; // eax
  LPVOID ppv; // [esp+4Ch] [ebp-20h] BYREF
  CellClass *passengers; // [esp+50h] [ebp-1Ch] BYREF
  _DWORD v15[2]; // [esp+54h] [ebp-18h] BYREF
  int GroundHeight; // [esp+5Ch] [ebp-10h]
  int v17[3]; // [esp+60h] [ebp-Ch] BYREF

  Debug::Log(); /*0x416afd*/
  passengers = (CellClass *)this->?; /*0x416b0b*/
  v2 = (_DWORD *)LinkedList::Pop((LinkedList *)this->?); /*0x416b1a*/
  v15[0] = this->?[0]; /*0x416b20*/
  v15[1] = this->?[1]; /*0x416b31*/
  GroundHeight = this->?[2]; /*0x416b38*/
  GroundHeight = Cell::GetGroundHeight(v15); /*0x416b4b*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v15)->flags[0] & 0x100) != 0 ) /*0x416b5d*/
  {
    GroundHeight += dword_889EBC; /*0x416b6a*/
    *((_BYTE *)v2 + 140) = 1; /*0x416b6e*/
  }
  else
  {
    *((_BYTE *)v2 + 140) = 0; /*0x416b77*/
  }
  if ( !v2[413] ) /*0x416b7e*/
    WinAPI::Wrapper(-2147467261); /*0x416b90*/
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2[413] + 8))(v2[413]); /*0x416b9e*/
  v2[413] = 0; /*0x416ba1*/
  v3 = (*(int (__thiscall **)(_DWORD *))(*v2 + 132))(v2); /*0x416bab*/
  ppv = 0; /*0x416bbe*/
  InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)(v3 + 844), 0, 7u); /*0x416bc2*/
  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x416bd0*/
    WinAPI::Wrapper(InstanceCOM); /*0x416bd3*/
  v5 = (LPVOID)v2[413]; /*0x416bd8*/
  v6 = ppv; /*0x416bde*/
  if ( v5 != ppv ) /*0x416be4*/
  {
    v2[413] = ppv; /*0x416be8*/
    if ( v6 ) /*0x416bee*/
    {
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v6 + 4))(v6); /*0x416bf3*/
      v6 = ppv; /*0x416bf6*/
    }
    if ( v5 ) /*0x416bfc*/
    {
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v5 + 8))(v5); /*0x416c01*/
      v6 = ppv; /*0x416c04*/
    }
  }
  if ( v6 ) /*0x416c0b*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v6 + 8))(v6); /*0x416c10*/
  if ( !v2[413] ) /*0x416c13*/
    WinAPI::Wrapper(-2147467261); /*0x416c22*/
  (*(void (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)v2[413] + 12))(v2[413], v2); /*0x416c31*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*v2 + 216))(v2, v15, 0) ) /*0x416c3f*/
  {
    v7 = *v2; /*0x416c5a*/
    *((_BYTE *)v2 + 1060) = 0; /*0x416c66*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(v7 + 1164))(v2, 0, 0, 0, 0); /*0x416c6d*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v2 + 1160))(v2, 0, 0, 0, 0, 0); /*0x416c81*/
    v8 = this->?[0]; /*0x416c8a*/
    v9 = this->?[1]; /*0x416c8d*/
    v17[2] = this->?[2]; /*0x416c90*/
    v10 = v2[152]; /*0x416c94*/
    v17[0] = v8; /*0x416c9a*/
    v17[1] = v9; /*0x416c9e*/
    MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], v17, v10 - 3, v10 + 3, 0); /*0x416cb6*/
    ppv = (LPVOID)*MapClass::FindPlacementCellsAlt((char *)this, &passengers, 0); /*0x416ccd*/
    if ( (_DWORD *)Team::GetMember((Team *)this, 0) == v2 ) /*0x416cda*/
    {
      (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 157))(this, 25); /*0x416ce2*/
      (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 157))(this, 3); /*0x416cee*/
    }
    if ( ppv == (LPVOID)g_AircraftStatusFlag ) /*0x416d00*/
    {
      (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x416d3b*/
    }
    else
    {
      ptr_0 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x416d10*/
      v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&ppv); /*0x416d1e*/
      ptr_0[288](this, v12, 1); /*0x416d26*/
    }
  }
  else
  {
    CellClass::AddObject(passengers, v2); /*0x416c4e*/
  }
}



// ==== 0x00416D50  Carryall::MissionStateMachine  this=Carryall  sig=csp ====
int __thiscall Carryall::MissionStateMachine(Carryall *this)
{
  AbstractClass *v2; // ecx
  char *MissionControl; // eax
  int v4; // eax
  _BYTE *v6; // edi
  Object *v7; // eax
  int Carryall_field_00; // edi
  void *NearbyCell; // eax
  int v10; // ecx
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // ecx
  int v19; // eax
  int v20; // ebx
  int v21; // ecx
  int v22; // edx
  CellClass *v23; // eax
  _BYTE *Building; // edi
  int v25; // eax
  char v26; // [esp-4h] [ebp-48h]
  _DWORD v27[3]; // [esp+14h] [ebp-30h] BYREF
  _DWORD v28[3]; // [esp+20h] [ebp-24h] BYREF
  _BYTE v29[20]; // [esp+2Ch] [ebp-18h] BYREF
  int v30; // [esp+40h] [ebp-4h]

  switch ( *((_DWORD *)this + 47) ) /*0x416d64*/
  {
    case 0: /*0x416d64*/
      Debug::Log(); /*0x416d70*/
      v2 = (AbstractClass *)*((_DWORD *)this + 361); /*0x416d75*/
      if ( !v2 ) /*0x416d80*/
      {
        Debug::Log(); /*0x416d87*/
LABEL_4:
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(this->Carryall_field_00 + 1156))(this, 0, 1); /*0x416d8f*/
        goto LABEL_5; /*0x416d97*/
      }
      v6 = AbstractClass::IsTechnoType(v2); /*0x416dd8*/
      if ( !v6 ) /*0x416ddc*/
        goto LABEL_18; /*0x416ddc*/
      if ( *((_DWORD *)this + 70) ) /*0x416de2*/
        goto LABEL_18; /*0x416de2*/
      if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse(*((Object **)this + 135), (int)v6) ) /*0x416df7*/
        goto LABEL_18; /*0x416df7*/
      if ( (v6[20] & 1) != 0 ) /*0x416e0e*/
      {
        v7 = (Object *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 60))(v6); /*0x416e15*/
        if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse(v7, (int)this) ) /*0x416e1a*/
          goto LABEL_18; /*0x416e1a*/
      }
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 44))(v6) != 1 ) /*0x416e31*/
        goto LABEL_18; /*0x416e31*/
      Debug::Log(); /*0x416e3c*/
      if ( (_BYTE *)Team::GetMember((Team *)this, 0) != v6 ) /*0x416e4f*/
        (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 3); /*0x416e57*/
      if ( (*(int (__thiscall **)(Carryall *, int, _BYTE *))(this->Carryall_field_00 + 632))(this, 2, v6) != 1 ) /*0x416e6d*/
      {
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(this->Carryall_field_00 + 1152))(this, 0, 1); /*0x416f1e*/
        goto LABEL_4; /*0x416f24*/
      }
      Debug::Log(); /*0x416e78*/
      if ( (*(int (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 36) == 1 ) /*0x416e8f*/
      {
        (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 7); /*0x416ec3*/
LABEL_18:
        Carryall_field_00 = this->Carryall_field_00; /*0x416ec9*/
        NearbyCell = InfantryClass::FindNearbyCell((InfantryClass *)this, *((_DWORD *)this + 361)); /*0x416ed6*/
        (*(void (__thiscall **)(Carryall *, void *, int))(Carryall_field_00 + 1152))(this, NearbyCell, 1); /*0x416ede*/
        v10 = *((_DWORD *)this + 373); /*0x416ee4*/
        if ( v10 ) /*0x416eec*/
          TeamClass::SelectMember(v10, *((_DWORD *)this + 361)); /*0x416ef5*/
        *((_DWORD *)this + 47) = 1; /*0x416eff*/
        Debug::Log(); /*0x416f09*/
      }
      else
      {
        Debug::Log(); /*0x416e96*/
        (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 3); /*0x416ea4*/
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(this->Carryall_field_00 + 1156))(this, 0, 1); /*0x416eb2*/
      }
LABEL_5:
      MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x416d9d*/
      LOWORD(v4) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x416dad*/
      return v4 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2);
    case 1: /*0x416d64*/
      v11 = *((_DWORD *)this + 361); /*0x416f29*/
      if ( v11 ) /*0x416f31*/
      {
        v12 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v11 + 72))(v11, v29); /*0x416f54*/
        if ( !*((_DWORD *)this + 413) ) /*0x416f5f*/
          WinAPI::Wrapper(-2147467261); /*0x416f6e*/
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 413) + 68))( /*0x416f89*/
          *((_DWORD *)this + 413),
          *v12,
          v12[1],
          v12[2]);
        *((_DWORD *)this + 47) = 2; /*0x416f8c*/
        return 1; /*0x416f96*/
      }
      else
      {
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(this->Carryall_field_00 + 1156))(this, 0, 1); /*0x416f3a*/
        return 1; /*0x416f40*/
      }
    case 2: /*0x416d64*/
      v13 = *((_DWORD *)this + 361); /*0x416fa3*/
      if ( v13 /*0x416fc7*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) != 11
        && Team::GetMember((Team *)this, 0) != *((_DWORD *)this + 361) )
      {
        Debug::Log(); /*0x416fce*/
        *((_DWORD *)this + 47) = 0; /*0x416fd6*/
        return 1; /*0x416fe8*/
      }
      v14 = *((_DWORD *)this + 361); /*0x416fe9*/
      if ( v14 /*0x417008*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) == 11
        && !(*(unsigned __int8 (__thiscall **)(Carryall *, _DWORD))(this->Carryall_field_00 + 1360))(
              this,
              *((_DWORD *)this + 361)) )
      {
        *((_DWORD *)this + 47) = 0; /*0x417012*/
        return 1; /*0x417024*/
      }
      if ( !*((_DWORD *)this + 413) ) /*0x417025*/
        WinAPI::Wrapper(-2147467261); /*0x417032*/
      if ( (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 144))(*((_DWORD *)this + 413)) != 1 ) /*0x417049*/
        goto LABEL_44; /*0x417049*/
      Debug::Log(); /*0x417054*/
      v15 = *((_DWORD *)this + 361); /*0x417059*/
      if ( !v15 /*0x4170e9*/
        || (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 44))(v15) != 1
        || (v16 = *((_DWORD *)this + 39),
            v17 = *((_DWORD *)this + 40),
            v30 = *((_DWORD *)this + 41),
            v18 = v16 / 256,
            v19 = *(_DWORD *)(*((_DWORD *)this + 361) + 156),
            v20 = *(_DWORD *)(*((_DWORD *)this + 361) + 160),
            v30 = *(_DWORD *)(*((_DWORD *)this + 361) + 164),
            (unsigned __int16)(v19 / 256) == (_WORD)v18)
        && (unsigned __int16)(v20 / 256) == (unsigned __int16)(v17 / 256) )
      {
        *((_BYTE *)this + 1748) = 0; /*0x41710f*/
LABEL_44:
        if ( !*((_DWORD *)this + 413) ) /*0x417116*/
          WinAPI::Wrapper(-2147467261); /*0x417125*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 16))(*((_DWORD *)this + 413)) ) /*0x417133*/
        {
          Debug::Log(); /*0x41713f*/
          *((_DWORD *)this + 47) = 3; /*0x417147*/
        }
        return 1; /*0x417151*/
      }
      else
      {
        *((_DWORD *)this + 47) = 0; /*0x4170f0*/
        Debug::Log(); /*0x4170fa*/
        return 1; /*0x417102*/
      }
    case 3: /*0x416d64*/
      Debug::Log(); /*0x417163*/
      if ( *((_DWORD *)this + 70) ) /*0x417168*/
      {
        if ( *((_DWORD *)this + 320) ) /*0x417177*/
        {
          *((_BYTE *)this + 1748) = 1; /*0x41717f*/
        }
        else
        {
          (*(void (__thiscall **)(Carryall *, _DWORD))(this->Carryall_field_00 + 292))(this, 0); /*0x41719c*/
          FootClass::MissionMoveCarryallLand((FootClass *)this); /*0x4171a4*/
          (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 292))(this, 1); /*0x4171af*/
          *((_DWORD *)this + 47) = 0; /*0x4171b5*/
        }
        return 1; /*0x417186*/
      }
      else
      {
        Debug::Log(); /*0x4171cd*/
        (*(void (__thiscall **)(Carryall *, _DWORD))(this->Carryall_field_00 + 292))(this, 0); /*0x4171da*/
        v27[0] = *(this + 39); /*0x4171ea*/
        v27[1] = *(this + 40); /*0x4171f1*/
        v21 = *((_DWORD *)this + 41); /*0x4171f7*/
        v28[0] = *(this + 39); /*0x4171fa*/
        v22 = *((_DWORD *)this + 41); /*0x4171fe*/
        v27[2] = v21; /*0x417201*/
        v28[1] = *(this + 40); /*0x41720c*/
        v28[2] = v22; /*0x417216*/
        v26 = BYTE1(Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v27)->flags[0]) & 1; /*0x41722f*/
        v23 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v28); /*0x417236*/
        Building = CellClass::FindBuilding(v23, v26); /*0x417242*/
        if ( Building /*0x417270*/
          && Building == (_BYTE *)Team::GetMember((Team *)this, 0)
          && (Debug::Log(), (*(int (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 19) == 1) )
        {
          Debug::Log(); /*0x417277*/
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)Building + 212))(Building); /*0x417283*/
          Building[140] = 0; /*0x417290*/
          Building[1060] = 1; /*0x417297*/
          CellClass::AddObject((CellClass *)(this + 69), Building); /*0x41729e*/
        }
        else
        {
          *((_DWORD *)this + 47) = 0; /*0x4172a5*/
        }
        (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 628))(this, 3); /*0x4172b1*/
        (*(void (__thiscall **)(Carryall *, int))(this->Carryall_field_00 + 292))(this, 1); /*0x4172bd*/
        v25 = this->Carryall_field_00; /*0x4172c3*/
        *((_BYTE *)this + 1748) = 1; /*0x4172ca*/
        (*(void (__thiscall **)(Carryall *, _DWORD, int))(v25 + 1156))(this, 0, 1); /*0x4172d1*/
        return 1; /*0x4172da*/
      }
    default:
      goto LABEL_5;
  }
}



// ==== 0x00417BD0  AircraftClass::ValidateMovement  this=AircraftClass  sig=csp ====
char __thiscall AircraftClass::ValidateMovement(AircraftClass *this, int a2, int *a3, int a4)
{
  int v5; // eax
  char result; // al

  v5 = ((__int64 (__thiscall *)(AircraftClass *, int *, int))*((_DWORD *)this->FootClass + 29))(this, a3, a4); /*0x417be1*/
  switch ( v5 ) /*0x417bf4*/
  {
    case 2: /*0x417bf4*/
      result = 0; /*0x417c14*/
      break; /*0x417c17*/
    case 3: /*0x417bf4*/
      result = (*((char (__thiscall **)(AircraftClass *, int, _DWORD, int *, _DWORD))this->FootClass + 222))( /*0x417c25*/
                 this,
                 7,
                 0,
                 a3,
                 0);
      break; /*0x417c2e*/
    case 4: /*0x417bf4*/
      result = (*((char (__thiscall **)(AircraftClass *, int, _DWORD, _DWORD, _DWORD))this->FootClass + 222))( /*0x417c3d*/
                 this,
                 16,
                 0,
                 0,
                 0);
      break; /*0x417c46*/
    case 17: /*0x417bf4*/
      result = (*((char (__thiscall **)(AircraftClass *, int, _DWORD, int *, _DWORD))this->FootClass + 222))( /*0x417c06*/
                 this,
                 2,
                 0,
                 a3,
                 0);
      break; /*0x417c0f*/
    default:
      result = FootClass::ValidateMove((FootClass *)this, v5, a3, a4); /*0x417c4e*/
      break; /*0x417c4e*/
  }
  return result; /*0x417c0c*/
}



// ==== 0x00417C80  ObjectClass::g_var_c16898  this=AircraftClass  sig=csp ====
char __thiscall ObjectClass::g_var_c16898(ObjectClass *this, int a2, __int16 *a3, __int16 *a4, void **a5)
{
  return ObjectClass::SpawnInfantry(this, a2, a3, a4, a5); /*0x417c99*/
}



// ==== 0x00417CA0  TechnoClass::ExecuteMissionCommand  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ExecuteMissionCommand(TechnoClass *this, int a2, int a3, int a4, int a5)
{
  return ScriptAction::ExecuteMissionCmd(this); /*0x417cb9*/
}



// ==== 0x00417CC0  AircraftClass::GetCursorOverObject  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::GetCursorOverObject(AircraftClass *this, int *a2, int *a3)
{
  int *v3; // ebp
  int *v4; // edi
  int result; // eax
  int v7; // ebx
  Object *v8; // eax
  _DWORD *v9; // eax
  int (__thiscall **ptr_0)(AircraftClass *, int **, _DWORD, int *); // eax
  int v11; // ebp
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // eax
  Cell *v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  char v18[12]; // [esp+10h] [ebp-Ch] BYREF

  v3 = a3; /*0x417cc5*/
  v4 = a2; /*0x417ccb*/
  result = InfantryClass::GetCursorOverObject((FootClass *)this, (int)a2, (char)a3); /*0x417cd3*/
  v7 = result; /*0x417cd8*/
  if ( result == 8 ) /*0x417cdd*/
    return result; /*0x417cdd*/
  if ( result == 26 && this->Type[1].TechnoTypeClass[317] ) /*0x417cf4*/
    v7 = 0; /*0x417cfe*/
  if ( this->Type[1].TechnoTypeClass[300] && (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x417d16*/
  {
    if ( v7 != 7 && v7 ) /*0x417d26*/
      goto LABEL_18; /*0x417d26*/
    if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v4) ) /*0x417d33*/
    {
      if ( !v4 /*0x417d56*/
        || (LOBYTE(a3) = v4[5] & 1, !(_BYTE)a3)
        || (v8 = (Object *)(*(int (__thiscall **)(int *))(*v4 + 60))(v4),
            (unsigned __int8)Object::IsAlliedWithObjectHouse(v8, (int)this)) )
      {
        if ( !this->?[1] && (*(int (__thiscall **)(int *))(*v4 + 44))(v4) == 1 ) /*0x417d73*/
        {
          v7 = 17; /*0x417d75*/
          goto LABEL_24; /*0x417d7a*/
        }
      }
    }
  }
  if ( !v7 ) /*0x417d7e*/
  {
    v9 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*v4 + 72))(v4, v18); /*0x417d89*/
    LOWORD(a3) = *v9 / 256; /*0x417d9e*/
    HIWORD(a3) = v9[1] / 256; /*0x417db7*/
    ptr_0 = (int (__thiscall **)(AircraftClass *, int **, _DWORD, int *))this->FootClass; /*0x417dc0*/
    a2 = a3; /*0x417dc4*/
    v7 = ptr_0[28](this, &a2, 0, v3); /*0x417dcb*/
  }
LABEL_18:
  if ( v7 == 4 ) /*0x417dd0*/
  {
    if ( this->?[0] ) /*0x417dd2*/
      goto LABEL_24; /*0x417dda*/
LABEL_23:
    v7 = 0; /*0x417df4*/
    goto LABEL_24; /*0x417df4*/
  }
  if ( v7 == 5 && !*(_DWORD *)(*((int (__thiscall **)(AircraftClass *, _DWORD))this->FootClass + 254))(this, 0) ) /*0x417def*/
    goto LABEL_23; /*0x417df2*/
LABEL_24:
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x417dfc*/
  {
    if ( v7 == 7 && (*(int (__thiscall **)(int *))(*v4 + 44))(v4) == 6 ) /*0x417e14*/
    {
      v11 = v4[328]; /*0x417e16*/
      if ( *(_BYTE *)(v11 + 5801) ) /*0x417e1c*/
      {
        v12 = 0; /*0x417e2c*/
        v13 = *(_DWORD *)&this->Type->TechnoTypeClass[1016]; /*0x417e33*/
        if ( v13 <= 0 ) /*0x417e38*/
          goto LABEL_36; /*0x417e38*/
        v14 = *(_DWORD **)&this->Type->TechnoTypeClass[1004]; /*0x417e3a*/
        while ( *v14 != v11 ) /*0x417e3f*/
        {
          ++v12; /*0x417e41*/
          ++v14; /*0x417e42*/
          if ( v12 >= v13 ) /*0x417e47*/
            goto LABEL_36; /*0x417e47*/
        }
        if ( !(unsigned __int8)Array::ContainsValue((Array *)v4, (int)this) /*0x417e76*/
          || v4[70]
          || (v7 = 3, (*((int (__thiscall **)(AircraftClass *, int, int *))this->FootClass + 158))(this, 15, v4) != 1) )
        {
LABEL_36:
          v7 = 31; /*0x417e78*/
        }
      }
    }
  }
  if ( this->Type[1].TechnoTypeClass[300] && v7 == 17 ) /*0x417e90*/
  {
    a3 = *(int **)(*(int (__thiscall **)(int *, int **))(*v4 + 440))(v4, &a2); /*0x417eaa*/
    if ( a3 != (int *)g_AircraftStatusFlag ) /*0x417eae*/
    {
      v15 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x417ecc*/
      v16 = Cell::IsBridge(v15); /*0x417ed3*/
      if ( v16 ) /*0x417eda*/
      {
        if ( *(_BYTE *)(v16[328] + 5821) ) /*0x417ee6*/
          return 0; /*0x417efb*/
      }
    }
  }
  else if ( v7 == 2 ) /*0x417f01*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*v4 + 196))(v4) ) /*0x417f07*/
    {
      if ( !(*(int (__thiscall **)(int *, int))(*v4 + 208))(v4, 1) ) /*0x417f17*/
      {
        v17 = (*(int (__thiscall **)(int *, int))(*v4 + 204))(v4, 1); /*0x417f27*/
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 44))(v17) == 21 ) /*0x417f37*/
          return 1; /*0x417f47*/
      }
    }
  }
  else if ( v7 == 5 && *(_BYTE *)((*(int (__thiscall **)(int *))(*v4 + 136))(v4) + 563) ) /*0x417f59*/
  {
    return 2; /*0x417f63*/
  }
  return v7; /*0x417cdf*/
}



// ==== 0x00417F80  AircraftClass::CanEnterCell  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::CanEnterCell(AircraftClass *this, __int16 *a2, char a3, char a4)
{
  int v6; // edi

  if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x417f89*/
    return 0; /*0x417f92*/
  v6 = FootClass::HandleCursorWithCheck((FootClass *)this, a2, a3, a4); /*0x417faf*/
  if ( v6 == 5 && !*(_DWORD *)(*((int (__thiscall **)(AircraftClass *, _DWORD))this->FootClass + 254))(this, 0) ) /*0x417fc2*/
    return 0; /*0x417fc7*/
  return v6; /*0x417f94*/
}



// ==== 0x00417FD0  AbstractClass::GetField9  this=AbstractClass  sig=ida-proto ====
int AbstractClass::GetField9()
{
  return dword_8871E0->PoseDir; /*0x417fd8*/
}



// ==== 0x00417FE0  AircraftClass::Mission_Attack  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::Mission_Attack(AircraftClass *this)
{
  double v1; // st7
  int target; // eax
  int v4; // eax
  int result; // eax
  char v6; // al
  int ammo; // eax
  int v8; // eax
  int ptr_0; // edi
  void *SpiralMoveTarget; // eax
  int v11; // eax
  int v12; // eax
  char *pad_6C0; // edi
  int v14; // edi
  int v15; // edi
  int *v16; // eax
  int v17; // edx
  char *v20; // ebx
  int *v21; // eax
  int *v22; // eax
  int v23; // edi
  int v24; // eax
  int v25; // edi
  int v26; // ebp
  int v27; // eax
  int v28; // edi
  int v29; // eax
  int v30; // edi
  int v31; // eax
  _DWORD *v32; // eax
  CellClass *v33; // eax
  int v34; // edx
  int v35; // eax
  bool v36; // zf
  bool v37; // sf
  int v38; // eax
  int *v39; // eax
  int *v40; // eax
  int v41; // edi
  int v42; // eax
  int v43; // eax
  int v44; // edi
  int v45; // eax
  _DWORD *v46; // eax
  CellClass *v47; // eax
  int v48; // eax
  int v49; // edi
  int v50; // eax
  int v51; // edi
  int v5... [27577 chars total]



// ==== 0x00418E20  InfantryClass::FindNearbyCell  this=InfantryClass  sig=csp ====
void *__thiscall InfantryClass::FindNearbyCell(InfantryClass *this, int a2)
{
  double v2; // st7
  void *v3; // esi
  TeamClass *team; // ecx
  _DWORD *v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  double v11; // rdi
  __int16 v12; // bx
  void *v13; // edi
  Cell *v14; // esi
  int v15; // eax
  __int16 v17[2]; // [esp+14h] [ebp-44h] BYREF
  double v18; // [esp+18h] [ebp-40h]
  int v19; // [esp+20h] [ebp-38h]
  __int16 v20[2]; // [esp+24h] [ebp-34h] BYREF
  double v21; // [esp+28h] [ebp-30h]
  int v22; // [esp+30h] [ebp-28h]
  Cell *v23; // [esp+34h] [ebp-24h]
  double v26; // [esp+48h] [ebp-10h] BYREF
  int v27; // [esp+50h] [ebp-8h]

  v3 = (void *)a2; /*0x418e2b*/
  v23 = (Cell *)this; /*0x418e35*/
  if ( a2 ) /*0x418e39*/
  {
    team = this->?; /*0x418e3f*/
    if ( !team || !(unsigned __int8)TechnoClass::IsWaypointHidden((TechnoClass *)team) ) /*0x418e49*/
    {
      if ( !(*((unsigned __int8 (__thiscall **)(InfantryClass *, int))this->FootClass + 340))(this, a2) /*0x418eab*/
        || (v6 = (_DWORD *)(*(int (__thiscall **)(int, double *, _DWORD))(*(_DWORD *)a2 + 76))(a2, &v26, 0),
            LOWORD(v19) = *v6 / 256,
            HIWORD(v19) = v6[1] / 256,
            *(_DWORD *)v20 = v19,
            !Cell::IsOccupied((Cell *)this, v20, 0)) )
      {
        v7 = (int *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)a2 + 72))(a2, &v26); /*0x418ec1*/
        v8 = *v7; /*0x418ec4*/
        v9 = v7[1]; /*0x418ec6*/
        v27 = v7[2]; /*0x418ed3*/
        if ( !dword_A8E7AC ) /*0x418ed7*/
        {
          v19 = 0; /*0x418ee2*/
          if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5240) / 256 > 0 ) /*0x418efa*/
          {
            *(_DWORD *)v20 = (__int16)(v9 / 256); /*0x418f21*/
            __asm { fild dword ptr [esp+50h+var_34] } /*0x418f25*/
            __asm { fstp [esp+50h+var_18] }
            *(_DWORD *)v20 = (__int16)(v8 / 256); /*0x418f30*/
            __asm /*0x418f34*/
            {
              fild dword ptr [esp+50h+var_34]
              fstp [esp+50h+var_10]
            }
            while ( 2 ) /*0x418f40*/
            {
              v10 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x418f40*/
              LODWORD(v21) = (__int16)v19; /*0x418f59*/
              v22 = v10; /*0x418f5d*/
              __asm { fild dword ptr [esp+50h+var_30] } /*0x418f61*/
              v18 = 0.0; /*0x418f65*/
              __asm { fstp [esp+50h+var_20] } /*0x418f73*/
              do /*0x419063*/
              {
                LODWORD(v21) = ((__int16)((WORD2(v18) + (_WORD)v22) << 13) & 0xFFFFE000) - 0x3FFF; /*0x418f93*/
                __asm /*0x418f97*/
                {
                  fild dword ptr [esp+50h+var_30]
                  fmul ds:dbl_7E2810
                  fstp [esp+50h+var_30]
                }
                v11 = v21; /*0x418fa9*/
                Math::SinCos(v21); /*0x418faf*/
                __asm /*0x418fb4*/
                {
                  fmul [esp+58h+var_20]
                  fsubr [esp+58h+var_18]
                }
                v12 = Math::RoundToInt(v2); /*0x418fc3*/
                Math::ArcTan2(v11); /*0x418fc5*/
                __asm { fmul [esp+60h+var_20] } /*0x418fca*/
                __asm { fadd [esp+50h+var_10] }
                v20[0] = Math::RoundToInt(v2); /*0x418fde*/
                v20[1] = v12; /*0x418fe3*/
                *(_DWORD *)v17 = *(_DWORD *)v20; /*0x418ff4*/
                if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v17, 1) ) /*0x418ff8*/
                {
                  v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17); /*0x419010*/
                  if ( *(_DWORD *)v17 != LODWORD(v18) ) /*0x41901c*/
                  {
                    v14 = v23; /*0x41902a*/
                    if ( (*(unsigned __int8 (__thiscall **)(Cell *, void *))(v23->Cell_field_0x0 + 1360))(v23, v13) ) /*0x419033*/
                    {
                      if ( Cell::IsOccupied(v14, v17, 0) ) /*0x419046*/
                        return v13; /*0x4190a0*/
                    }
                  }
                  LODWORD(v18) = *(_DWORD *)v17; /*0x419053*/
                }
                ++HIDWORD(v18); /*0x41905f*/
              }
              while ( SHIDWORD(v18) < 8 ); /*0x419063*/
              v15 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5240); /*0x419074*/
              if ( ++v19 < v15 / 256 ) /*0x41908c*/
                continue; /*0x41908c*/
              break;
            }
            return (void *)a2; /*0x419092*/
          }
        }
      }
    }
  }
  return v3; /*0x419097*/
}



// ==== 0x004190B0  AircraftClass::MissionDispatch  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::MissionDispatch(AircraftClass *this, _DWORD *a2, int a3, void **a4)
{
  int result; // eax
  void (__thiscall **v6)(AircraftClass *, void *, int); // ebx
  void *ClosestPlacementCell; // eax
  AbstractClass *v8; // edi
  int (__thiscall **ptr_0)(AircraftClass *, int, void *); // ebx
  void *v10; // eax
  AbstractClass *movementDestination; // ecx
  AircraftTypeClass *Type; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int Member; // eax
  int v16; // eax
  _DWORD *v17; // [esp+0h] [ebp-10h]

  switch ( this->? )
  {
    case 4:
    case 0x1A:
    case 0x1B:
    case 0x1E:
    case 0x1F:
      if ( this->? ) /*0x4190d3*/
        goto LABEL_4; /*0x4190db*/
LABEL_3:
      result = 0; /*0x4190dd*/
      break; /*0x4190e3*/
    default:
LABEL_4:
      switch ( a3 )
      {
        case 8:
          if ( !this->Type[1].TechnoTypeClass[300] /*0x419519*/
            || (*((int (__thiscall **)(AircraftClass *))this->FootClass + 97))(this) != 2
            || !this->?
            || (!this->?[1] || (_DWORD *)CCINIClass::GetDB((CCINIClass *)this->?) != a2)
            && this->? != (AbstractClass *)a2 )
          {
            return FootClass::MissionDispatch((FootClass *)a2, a3, (_DWORD *)a3, (int)a4, v17); /*0x419519*/
          }
          return 10; /*0x419519*/
        case 14:
          v14 = *(_DWORD *)&this->Type->TechnoTypeClass[1504]; /*0x41939d*/
          if ( v14 <= 0 || this->?[0] >= v14 ) /*0x4193b1*/
            return FootClass::MissionDispatch((FootClass *)a2, a3, (_DWORD *)a3, (int)a4, v17); /*0x4193b1*/
          FootClass::MissionDispatch((FootClass *)a2, a3, (_DWORD *)a3, (int)a4, v17); /*0x4193c4*/
          if ( !this->?[0] ) /*0x4193c9*/
            WinAPI::Wrapper(-2147467261); /*0x4193d8*/
          if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x4193e6*/
            return 1; /*0x4193e6*/
          RateScaler::Init((RateScaler *)this->?, *(double *)&this->Type->TechnoTypeClass[968]); /*0x419407*/
          if ( (*((int (__thiscall **)(AircraftClass *, int, _DWORD *))this->FootClass + 158))(this, 19, a2) != 1 ) /*0x41941c*/
            return 1; /*0x41941c*/
          *a4 = this; /*0x41941e*/
          if ( (*((int (__thiscall **)(AircraftClass *, int, void **, _DWORD *))this->FootClass + 159))( /*0x419431*/
                 this,
                 18,
                 a4,
                 a2) == 1 )
          {
            Member = Team::GetMember((Team *)this, 0); /*0x419450*/
            (*(void (__thiscall **)(int))(*(_DWORD *)Member + 336))(Member); /*0x419459*/
            return 1; /*0x41945f*/
          }
          else
          {
            (*((void (__thiscall **)(AircraftClass *, int, _DWORD *))this->FootClass + 158))(this, 3, a2); /*0x41943a*/
            return 1; /*0x419443*/
          }
        case 15:
          if ( !*(_DWORD *)&this->Type->TechnoTypeClass[1504] /*0x419492*/
            || !a2
            || !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)a2) )
          {
            goto LABEL_3; /*0x419499*/
          }
          v16 = (this->?[0] >= *(_DWORD *)&this->Type->TechnoTypeClass[1504]) - 1; /*0x4194b9*/
          LOBYTE(v16) = v16 & 0xF7; /*0x4194bb*/
          return v16 + 10; /*0x4194c2*/
        case 18:
          FootClass::MissionDispatch((FootClass *)a2, a3, (_DWORD *)a3, (int)a4, v17); /*0x4191ff*/
          v8 = (AbstractClass *)*a4; /*0x419204*/
          if ( *a4 && (*((int (__thiscall **)(AbstractClass *))v8->ptr_0 + 11))(v8) == 6 ) /*0x419214*/
          {
            ptr_0 = (int (__thiscall **)(AircraftClass *, int, void *))this->FootClass; /*0x419216*/
            v10 = AbstractClass::IsTechnoType(v8); /*0x41921a*/
            if ( ptr_0[158](this, 15, v10) != 1 ) /*0x41922d*/
              return 10; /*0x419238*/
            (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 7, 0); /*0x419241*/
          }
          else
          {
            (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 2, 0); /*0x41924b*/
          }
          (*((void (__thiscall **)(AircraftClass *, AbstractClass *, int))this->FootClass + 288))(this, v8, 1); /*0x419258*/
          (*((void (__thiscall **)(AircraftClass *))this->FootClass + 123))(this); /*0x419262*/
          result = 1; /*0x41926b*/
          break; /*0x419271*/
        case 19:
          FootClass::MissionDispatch((FootClass *)a2, a3, (_DWORD *)a3, (int)a4, v17); /*0x419281*/
          if ( !this->?[0] ) /*0x419286*/
            WinAPI::Wrapper(-2147467261); /*0x419295*/
          if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 16))(this->?[0]) ) /*0x4192a3*/
            return 1; /*0x4192a3*/
          movementDestination = this->?; /*0x4192ae*/
          if ( !movementDestination ) /*0x4192b6*/
            return 1; /*0x4192b6*/
          if ( this->Type[1].TechnoTypeClass[317] /*0x4192ee*/
            && (*((int (__thiscall **)(AbstractClass *))movementDestination->ptr_0 + 11))(movementDestination) == 11
            && this->? == (AbstractClass *)(*((int (__thiscall **)(AircraftClass *))this->FootClass + 111))(this) )
          {
            return 1; /*0x4192f7*/
          }
          else
          {
            return 10; /*0x41951f*/
          }
        case 21:
          Type = this->Type; /*0x419300*/
          if ( this->?[0] == *(_DWORD *)&Type->TechnoTypeClass[1504] ) /*0x419312*/
            Timer::StartDouble((Timer *)this->?, *(double *)&Type->TechnoTypeClass[968]); /*0x419328*/
          if ( a2 )
          {
            v13 = (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) == 15 ? a2 : 0;
            if ( v13 ) /*0x419347*/
            {
              if ( *(_BYTE *)(v13[432] + 3777) && !*((_BYTE *)v13 + 1753) ) /*0x419359*/
              {
                (*((void (__thiscall **)(AircraftClass *, _DWORD))this->FootClass + 242))(this, 0); /*0x419369*/
                (*((void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 288))(this, 0, 1); /*0x419377*/
                (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 4, 0); /*0x419385*/
              }
            }
          }
          return 5; /*0x419394*/
        case 23:
          (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 2, 0); /*0x4191b7*/
          v6 = (void (__thiscall **)(AircraftClass *, void *, int))this->FootClass; /*0x4191bd*/
          ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((TechnoClass *)this); /*0x4191c3*/
          v6[288](this, ClosestPlacementCell, 1); /*0x4191cb*/
          (*((void (__thiscall **)(AircraftClass *, int))this->FootClass + 157))(this, 3); /*0x4191d7*/
          return FootClass::MissionDispatch((FootClass *)a2, a3, (_DWORD *)a3, (int)a4, v17); /*0x4191d7*/
        case 29:
          if ( this->? )
            return 10; /*0x419160*/
          else
            return *(_DWORD *)&this->Type->TechnoTypeClass[1668] != this->? ? 10 : 1;
        case 31:
          if ( this->? < *(_DWORD *)&this->Type->TechnoTypeClass[1668] / 2 || !this->? ) /*0x419124*/
            return FootClass::MissionDispatch((FootClass *)a2, a3, (_DWORD *)a3, (int)a4, v17); /*0x41912c*/
          return 1; /*0x419137*/
        case 33:
          return *(_DWORD *)&this->Type->TechnoTypeClass[1668] != this->? ? 10 : 1;
        default:
          return FootClass::MissionDispatch((FootClass *)a2, a3, (_DWORD *)a3, (int)a4, v17); /*0x4191ef*/
      }
      break; /*0x4191ef*/
  }
  return result; /*0x4190dd*/
}



// ==== 0x004195A0  TechnoClass::FindNearbyBuildCell  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::FindNearbyBuildCell(TechnoClass *this, int a2, __int16 *a3)
{
  _DWORD *v4; // eax
  int *v5; // ebx
  int v6; // ebp
  int v7; // edi
  int v8; // ecx
  int *v9; // eax
  int v10; // kr08_4
  int v11; // eax
  bool *v12; // eax
  __int16 v14; // [esp+12h] [ebp-Eh]
  _BYTE v15[12]; // [esp+14h] [ebp-Ch] BYREF
  __int16 *v16; // [esp+28h] [ebp+8h]

  *(_DWORD *)a3 = g_AircraftStatusFlag; /*0x4195b0*/
  v4 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v15); /*0x4195b9*/
  v5 = dword_817A78; /*0x4195be*/
  v6 = *v4 / 256; /*0x4195de*/
  v7 = v4[1] / 256; /*0x4195e1*/
  v14 = v7; /*0x4195e4*/
  while ( 1 ) /*0x4195ec*/
  {
    v8 = *v5 & 7; /*0x4195ec*/
    LOWORD(v16) = v6 + LOWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x419605*/
    HIWORD(v16) = v7 + HIWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x41960d*/
    *(_DWORD *)a3 = v16; /*0x419616*/
    if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], a3) ) /*0x41961d*/
      break; /*0x41961d*/
LABEL_7:
    if ( (int)++v5 >= (int)&IFlyControl `RTTI Type Descriptor' ) /*0x419692*/
      return 0; /*0x419692*/
  }
  v9 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v15); /*0x419631*/
  v10 = *v9; /*0x419641*/
  v11 = v9[1] / 256; /*0x419652*/
  if ( (unsigned __int16)(v10 / 256) != *a3 || (_WORD)v11 != a3[1] ) /*0x41965e*/
  {
    v12 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a3); /*0x419674*/
    if ( !(unsigned __int8)Cell::IsBuildable(v12, 0, 0, 0, -1, 0, -1, 1) ) /*0x41967b*/
    {
      LOWORD(v7) = v14; /*0x419684*/
      goto LABEL_7; /*0x419684*/
    }
  }
  return 0; /*0x419698*/
}



// ==== 0x004196B0  AircraftClass::ValidateLandingCell  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::ValidateLandingCell(AircraftClass *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  TeamClass *team; // ecx
  int v8; // esi
  _DWORD *v10; // eax
  _BYTE v11[12]; // [esp+Ch] [ebp-Ch] BYREF

  team = this->?; /*0x4196bc*/
  if ( team /*0x4196d7*/
    && (unsigned __int8)TechnoClass::IsWaypointHidden((TechnoClass *)team)
    && !(unsigned __int8)Type::CheckAmbiguity((Type *)&stru_87F5F0.__pad_58[416], (int)a2, 1) )
  {
    return 0; /*0x4196d7*/
  }
  v8 = a2[57]; /*0x4196e4*/
  if ( (!v8 /*0x41974d*/
     || (*(_BYTE *)(v8 + 20) & 1) == 0
     || (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v8 + 540), (#375 *)this->?)
     || *(_DWORD *)(v8 + 544) != 2
     && !dword_A8E7AC
     && ((*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8) != 6 || !*(_BYTE *)(*(_DWORD *)(v8 + 1312) + 3226)))
    && !(unsigned __int8)Cell::IsBuildable((bool *)a2, 4, 0, 0, -1, 0, -1, 1) )
  {
    return 7; /*0x419761*/
  }
  if ( *(_DWORD *)&dword_A8B238 ) /*0x41976b*/
    return 0; /*0x41976b*/
  if ( !this->? ) /*0x41976d*/
    return 0; /*0x41976d*/
  if ( this->? ) /*0x419777*/
    return 0; /*0x419777*/
  v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 72))(a2, v11); /*0x41978a*/
  if ( !(unsigned __int8)Cell::IsPassable(v10) ) /*0x419793*/
    return 0; /*0x4197ac*/
  else
    return 7; /*0x41979e*/
}



// ==== 0x004197C0  ObjectClass::FindSpiralMoveTarget  this=ObjectClass  sig=csp ====
void *__thiscall FindSpiralMoveTarget(TechnoClass *this, int a2)
{
  double v2; // st7
  int v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int *v9; // eax
  __int16 v10; // cx
  unsigned int v11; // edi
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // edi
  Cell *v17; // ebx
  double v18; // rdi
  int *v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  double v23; // [esp+14h] [ebp-90h]
  __int16 v24[2]; // [esp+28h] [ebp-7Ch] BYREF
  int v25; // [esp+2Ch] [ebp-78h]
  __int16 v26[2]; // [esp+30h] [ebp-74h] BYREF
  int v27; // [esp+34h] [ebp-70h]
  int v28; // [esp+38h] [ebp-6Ch]
  __int16 v29[4]; // [esp+3Ch] [ebp-68h] BYREF
  Cell *v30; // [esp+44h] [ebp-60h]
  int v31; // [esp+48h] [ebp-5Ch]
  double v32; // [esp+4Ch] [ebp-58h]
  double v33; // [esp+54h] [ebp-50h]
  int v34; // [esp+5Ch] [ebp-48h]
  int v35; // [esp+60h] [ebp-44h]
  double v37[2]; // [esp+6Ch] [ebp-38h] BYREF
  double v38; // [esp+7Ch] [ebp-28h]
  int v39; // [esp+84h] [ebp-20h]
  int v40; // [esp+8Ch] [ebp-18h] BYREF
  int v41; // [esp+90h] [ebp-14h]
  int v42; // [esp+94h] [ebp-10h]
  char v43[12]; // [esp+98h] [ebp-Ch] BYREF

  v30 = (Cell *)this; /*0x4197d3*/
  if ( !a2 ) /*0x4197d7*/
    return 0; /*0x4197d7*/
  if ( (*(int (__stdcall **)(char *))(this->health + 24))((char *)this + 1728) ) /*0x4197ea*/
    return (void *)a2; /*0x4197f9*/
  v5 = (*(int (__thiscall **)(TechnoClass *, _DWORD))(this->ptr_0 + 360))(this, 0); /*0x41980c*/
  v6 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)a2 + 72))(a2, &v40); /*0x419813*/
  v38 = *(double *)v6; /*0x419818*/
  v7 = *(_DWORD *)(v6 + 8); /*0x419829*/
  *(_DWORD *)v26 = g_AircraftStatusFlag; /*0x419831*/
  *(_DWORD *)v29 = g_AircraftStatusFlag; /*0x419835*/
  v39 = v7; /*0x41983c*/
  v25 = -1; /*0x419846*/
  v31 = -1; /*0x41984a*/
  v40 = dword_889E88; /*0x419853*/
  LOBYTE(v6) = *(_BYTE *)(a2 + 20); /*0x419857*/
  v41 = dword_889E8C; /*0x41985c*/
  v42 = dword_889E90; /*0x419860*/
  if ( (v6 & 4) != 0 ) /*0x419864*/
  {
    v8 = *(_DWORD *)(a2 + 1444); /*0x419866*/
    if ( v8 ) /*0x41986e*/
    {
      v9 = (int *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v8 + 72))(v8, v37); /*0x419877*/
      v40 = *v9; /*0x41987c*/
      v41 = v9[1]; /*0x419883*/
      v42 = v9[2]; /*0x41988a*/
    }
  }
  v28 = v5 - 256; /*0x419899*/
  if ( v5 - 256 <= 256 ) /*0x41989d*/
    goto LABEL_27; /*0x41989d*/
  __asm /*0x4198a3*/
  {
    fild [esp+88h+var_24]
    fstp [esp+88h+var_38]
    fild [esp+88h+var_28]
    fstp qword ptr [esp+88h+var_28]
  }
  do /*0x419a87*/
  {
    __asm { fild [esp+88h+var_6C] } /*0x4198b3*/
    v27 = 0; /*0x4198b7*/
    __asm { fstp [esp+88h+var_40] } /*0x4198bf*/
    do /*0x419a68*/
    {
      LOBYTE(v10) = 0; /*0x4198c3*/
      HIBYTE(v10) = v27; /*0x4198c5*/
      LODWORD(v32) = v10 - 0x3FFF; /*0x4198d2*/
      __asm /*0x4198d6*/
      {
        fild dword ptr [esp+88h+var_58]
        fmul ds:dbl_7E2810
        fstp [esp+88h+var_58]
      }
      v11 = HIDWORD(v32); /*0x4198e4*/
      v12 = LODWORD(v32); /*0x4198ec*/
      Math::SinCos(v32); /*0x4198ee*/
      __asm /*0x4198f3*/
      {
        fmul [esp+90h+var_40]
        fsubr [esp+90h+var_38]
      }
      LOWORD(v13) = Math::RoundToInt(v2); /*0x4198fb*/
      v14 = v13; /*0x419902*/
      Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v11, v12))); /*0x419904*/
      __asm { fmul [esp+98h+var_40] } /*0x419909*/
      __asm { fadd qword ptr [esp+88h+var_28] }
      LOWORD(v15) = Math::RoundToInt(v2); /*0x419914*/
      v16 = v15; /*0x419919*/
      v29[2] = v15 / 256; /*0x41992e*/
      v29[3] = v14 / 256; /*0x419946*/
      *(_DWORD *)v24 = *(_DWORD *)&v29[2]; /*0x41994f*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, v24, 1) ) /*0x419953*/
      {
        v17 = v30; /*0x419965*/
        if ( *(_DWORD *)&dword_A8B238 /*0x41998d*/
          || v30[1].__pad_130[4]
          || (*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v24) + 300) & 0x10) != 0 )
        {
          if ( Cell::IsOccupied(v17, v24, 1) ) /*0x41999c*/
          {
            if ( v40 == dword_889E88 && v41 == dword_889E8C && v42 == dword_889E90 ) /*0x4199d1*/
            {
              v19 = (int *)(*(int (__thiscall **)(Cell *, char *))(v17->Cell_field_0x0 + 72))(v17, v43); /*0x4199f6*/
              v20 = *v19; /*0x4199f9*/
              v35 = v19[1] - v14; /*0x419a02*/
              v34 = v20 - v16; /*0x419a06*/
              __asm /*0x419a0a*/
              {
                fild [esp+88h+var_44]
                fild [esp+88h+var_48]
              }
            }
            else
            {
              LODWORD(v18) = v16 - v40; /*0x4199d7*/
              HIDWORD(v18) = v14 - v41; /*0x4199d9*/
              v33 = v18; /*0x4199db*/
              __asm /*0x4199e3*/
              {
                fild dword ptr [esp+88h+var_50+4]
                fild dword ptr [esp+88h+var_50]
              }
            }
            __asm /*0x419a12*/
            {
              fld st
              fmul st, st(1)
              fld st(2)
              fmul st, st(3)
            }
            __asm
            {
              faddp st(1), st
              fstp [esp+90h+var_90]; double
              fstp st
              fstp st
            }
            Math::Sqrt(v23); /*0x419a26*/
            LOWORD(v21) = Math::RoundToInt(v2); /*0x419a2e*/
            v22 = v25; /*0x419a33*/
            if ( v25 == -1 || v21 < v25 ) /*0x419a3e*/
            {
              v25 = v21; /*0x419a44*/
              v31 = v22; /*0x419a4c*/
              *(_DWORD *)v29 = *(_DWORD *)v26; /*0x419a50*/
              *(_DWORD *)v26 = *(_DWORD *)v24; /*0x419a54*/
            }
          }
        }
      }
      v27 += 16; /*0x419a64*/
    }
    while ( v27 < 255 ); /*0x419a68*/
    if ( v25 != -1 ) /*0x419a73*/
      break; /*0x419a73*/
    v28 -= 256; /*0x419a83*/
  }
  while ( v28 > 256 ); /*0x419a87*/
  if ( v31 == -1 ) /*0x419a92*/
LABEL_27:
    *(_DWORD *)v29 = *(_DWORD *)v26; /*0x419a98*/
  if ( v25 == -1 ) /*0x419aa1*/
    return 0; /*0x419aef*/
  if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) >= 50 ) /*0x419abb*/
    return CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v29); /*0x419adf*/
  return CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v26); /*0x4197f3*/
}



// ==== 0x00419B00  Cell::IsOccupied  this=Cell  sig=csp ====
char __thiscall Cell::IsOccupied(Cell *this, __int16 *a2, char a3)
{
  Object *v5; // eax
  _DWORD *ClosestObjectCell; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  Cell *v10; // esi
  _WORD *v11; // eax
  void *v14; // [esp+10h] [ebp-Ch]
  _DWORD v15[2]; // [esp+14h] [ebp-8h] BYREF
  char v16; // [esp+20h] [ebp+4h]

  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a2, 1) ) /*0x419b18*/
    return 1; /*0x419b18*/
  if ( *(_BYTE *)(*((_DWORD *)this + 433) + 3412) ) /*0x419b2b*/
  {
    v15[0] = 0; /*0x419b44*/
    v15[1] = 0; /*0x419b4c*/
    v5 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x419b54*/
    ClosestObjectCell = (_DWORD *)Object::FindClosestObjectCell(v5, v15, 0, 0); /*0x419b5b*/
    if ( ClosestObjectCell ) /*0x419b62*/
    {
      if ( ClosestObjectCell[180] /*0x419b7c*/
        || *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*ClosestObjectCell + 132))(ClosestObjectCell) + 3412) )
      {
        return 1; /*0x419b7c*/
      }
    }
  }
  v7 = *((_DWORD *)this + 433); /*0x419b8a*/
  if ( *(_BYTE *)(v7 + 3597) ) /*0x419b90*/
    return 1; /*0x419b90*/
  if ( !*(_BYTE *)(v7 + 3580) /*0x419bbf*/
    || (v8 = *((_DWORD *)this + 361)) == 0
    || (v16 = 1, (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8) != 1) )
  {
    v16 = 0; /*0x419bc1*/
  }
  v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x419bd1*/
  v9 = 0; /*0x419bda*/
  if ( FootClass_Array.? <= 0 ) /*0x419bde*/
    return 1; /*0x419c6b*/
  while ( 1 ) /*0x419bea*/
  {
    v10 = (Cell *)*((_DWORD *)FootClass_Array.? + v9); /*0x419bea*/
    if ( v10 && (!v16 || *((Cell **)this + 361) != v10) && (a3 || v10 != this) && !v10->__pad_70[17] && v10->__pad_70[4] ) /*0x419c1d*/
    {
      v11 = (_WORD *)(*(int (__thiscall **)(Cell *, _DWORD *))(v10->Cell_field_0x0 + 440))(v10, v15); /*0x419c2d*/
      if ( *v11 == *a2 && v11[1] == a2[1] ) /*0x419c44*/
        break; /*0x419c44*/
      if ( *(void **)&v10[2].__pad_3C[40] == v14 ) /*0x419c52*/
        break; /*0x419c52*/
    }
    if ( ++v9 >= FootClass_Array.? ) /*0x419c5c*/
      return 1; /*0x419c5c*/
  }
  return 0; /*0x419c60*/
}



// ==== 0x00419C80  AircraftClass::Mission_Transport  this=AircraftClass  sig=csp ====
int __usercall AircraftClass::Mission_Transport@<eax>(AircraftClass *this, int a2@<ebp>)
{
  int *v2; // ecx
  int *v3; // esi
  _DWORD *v4; // edi
  Cell *v5; // eax
  _DWORD *v6; // eax
  int v7; // edx
  int result; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // edi
  int *v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edi
  int v19; // edx
  int v20; // edi
  int v21; // edx
  int v22; // edx
  int v23; // eax
  int Member; // eax
  int v25; // ebx
  _DWORD *v26; // edi
  int v27; // edi
  void *ClosestPlacementCell; // eax
  _DWORD v29[3]; // [esp+Ch] [ebp-30h] BYREF
  _BYTE v30[12]; // [esp+18h] [ebp-24h] BYREF
  _BYTE v31[20]; // [esp+24h] [ebp-18h] BYREF
  int v32; // [esp+38h] [ebp-4h]

  v3 = v2; /*0x419c85*/
  if ( (*(int (**)(void))(*v2 + 456))()
    || !*(_BYTE *)(v3[433] + 3597)
    || !v3[361]
    || (v4 = (_DWORD *)v3[361], v5 = (Cell *)(*(int (__thiscall **)(int *))(*v3 + 444))(v3), v4 == Cell::IsBridge(v5)) )
  {
    if ( (*(int (__thiscall **)(int *))(*v3 + 456))(v3) > 0 )
    {
      v9 = v3[361]; /*0x419d19*/
      if ( v3[435] != v9 && v9 && (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 44))(v9) == 6 )
      {
        v10 = v3[361]; /*0x419d37*/
        if ( v10 )
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 44))(v3[361]) == 6 ? v10 : 0;
        else
          v11 = 0; /*0x419d41*/
        v3[435] = v11; /*0x419d57*/
      }
    }
    if ( v3[361] /*0x419d86*/
      || (*(int (__thiscall **)(int *))(*v3 + 120))(v3) == 2
      || (*(int (__thiscall **)(int *, int))(*v3 + 628))(v3, 14) == 1
      || TechnoClass::PlaceAtCell((TechnoClass *)v3) )
    {
      switch ( v3[47] ) /*0x419dbc*/
      {
        case 0: /*0x419dbc*/
          v3[47] = 6; /*0x419dc3*/
          goto LABEL_24; /*0x419dc3*/
        case 1: /*0x419dbc*/
        case 2: /*0x419dbc*/
        case 3: /*0x419dbc*/
        case 4: /*0x419dbc*/
        case 5: /*0x419dbc*/
LABEL_24:
          *((_BYTE *)v3 + 1748) = 1; /*0x419dcd*/
          return 1; /*0x419ddf*/
        case 6: /*0x419dbc*/
          if ( *(_BYTE *)(v3[433] + 3597) && (*(int (__thiscall **)(int *))(*v3 + 456))(v3) ) /*0x419df4*/
            (*(void (__thiscall **)(int *, int))(*v3 + 628))(v3, 14); /*0x419e04*/
          if ( (unsigned __int8)Team::AllMembersValid((Team *)v3) ) /*0x419e0c*/
          {
            if ( !v3[413] ) /*0x419eaa*/
              WinAPI::Wrapper(-2147467261); /*0x419eb9*/
            if ( (*(int (__stdcall **)(int))(*(_DWORD *)v3[413] + 144))(v3[413]) == 1 /*0x419ee6*/
              || *(_BYTE *)(v3[433] + 3597) && !(*(int (__thiscall **)(int *))(*v3 + 456))(v3) )
            {
              v3[47] = 7; /*0x419ef0*/
              *((_BYTE *)v3 + 1748) = 0; /*0x419ef6*/
            }
            result = 3; /*0x419eff*/
          }
          else
          {
            if ( !TechnoClass::PlaceAtCell((TechnoClass *)v3) ) /*0x419e1b*/
            {
              if ( !v3[413] ) /*0x419e24*/
                WinAPI::Wrapper(-2147467261); /*0x419e33*/
              if ( (*(int (__stdcall **)(int))(*(_DWORD *)v3[413] + 144))(v3[413]) == 1 ) /*0x419e4a*/
              {
                v3[47] = 7; /*0x419e4c*/
                *((_BYTE *)v3 + 1748) = 1; /*0x419e52*/
              }
              if ( v3[45] == -1 ) /*0x419e5f*/
              {
                (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1152))(v3, 0, 1); /*0x419e69*/
                (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1156))(v3, 0, 1); /*0x419e77*/
                *((_BYTE *)v3 + 1748) = 1; /*0x419e7d*/
                return 1; /*0x419e8f*/
              }
              *((_BYTE *)v3 + 1748) = 1; /*0x419e90*/
            }
            *((_BYTE *)v3 + 1748) = 1; /*0x419e97*/
            result = 1; /*0x419ea0*/
          }
          break; /*0x419ea9*/
        case 7: /*0x419dbc*/
          if ( !v3[413] ) /*0x419f09*/
            WinAPI::Wrapper(-2147467261); /*0x419f18*/
          if ( (*(int (__stdcall **)(int))(*(_DWORD *)v3[413] + 144))(v3[413]) == 1 ) /*0x419f2f*/
          {
            v12 = v3[361]; /*0x419f35*/
            if ( v12 ) /*0x419f3d*/
            {
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v3[361]) == 6 ) /*0x419f4d*/
                v13 = (int *)(*(int (__thiscall **)(int, _BYTE *, int *))(*(_DWORD *)v12 + 168))(v12, v30, v3); /*0x419f59*/
              else
                v13 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3[361] + 72))(v3[361], v31); /*0x419f6e*/
              v14 = *v13; /*0x419f71*/
              v15 = v13[1]; /*0x419f73*/
              v32 = v13[2]; /*0x419f79*/
              v16 = v3[39]; /*0x419f85*/
              v17 = v14 - v16; /*0x419f87*/
              v18 = v3[40]; /*0x419f89*/
              v19 = v15 - v18; /*0x419f8c*/
              v29[2] = v3[41]; /*0x419f93*/
              if ( v17 <= 0 ) /*0x419f97*/
              {
                if ( v17 < -5 ) /*0x419fa8*/
                  v17 = -5; /*0x419faa*/
              }
              else if ( v17 > 5 ) /*0x419f9c*/
              {
                v17 = 5; /*0x419f9e*/
              }
              if ( v19 <= 0 ) /*0x419fb1*/
              {
                if ( v19 < -5 ) /*0x419fc2*/
                  v19 = -5; /*0x419fc4*/
              }
              else if ( v19 > 5 ) /*0x419fb6*/
              {
                v19 = 5; /*0x419fb8*/
              }
              v20 = v19 + v18; /*0x419fcb*/
              v21 = *v3; /*0x419fcd*/
              v29[0] = v17 + v16; /*0x419fcf*/
              v29[1] = v20; /*0x419fda*/
              (*(void (__thiscall **)(int *, _DWORD *))(v21 + 436))(v3, v29); /*0x419fde*/
            }
            *((_BYTE *)v3 + 1748) = 1; /*0x419fe4*/
            return 1; /*0x419fed*/
          }
          else
          {
            v22 = *v3; /*0x419ff7*/
            *((_BYTE *)v3 + 1748) = 1; /*0x419ffd*/
            v23 = (*(int (__thiscall **)(int *, int))(v22 + 628))(v3, 21) - 1; /*0x41a00a*/
            if ( v23 ) /*0x41a00b*/
            {
              if ( v23 == 4 ) /*0x41a010*/
              {
                (*(void (__thiscall **)(int *))(*v3 + 212))(v3); /*0x41a030*/
                Member = Team::GetMember((Team *)v3, 0); /*0x41a03b*/
                CellClass::AddObject((CellClass *)(Member + 276), v3); /*0x41a048*/
              }
              else
              {
                (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1156))(v3, 0, 1); /*0x41a01a*/
              }
              return 1; /*0x41a022*/
            }
            else if ( *(_BYTE *)(v3[433] + 3580) && v3[70] ) /*0x41a06d*/
            {
              v25 = Team::GetMember((Team *)v3, 0); /*0x41a08b*/
              v26 = (_DWORD *)LinkedList::Pop((LinkedList *)v3 + 23); /*0x41a09a*/
              (*(void (__thiscall **)(int *, int, int))(*v3 + 628))(v3, 3, a2); /*0x41a09c*/
              if ( (*(int (__thiscall **)(_DWORD *, int, int))(*v26 + 632))(v26, 2, v25) == 1 ) /*0x41a0b2*/
              {
                CellClass::AddObject((CellClass *)(v3 + 69), v26); /*0x41a0b7*/
                (*(void (__thiscall **)(int *, _DWORD))(*v3 + 292))(v3, 0); /*0x41a0c2*/
                FootClass::MissionMoveCarryallLand((FootClass *)v3); /*0x41a0ca*/
                (*(void (__thiscall **)(int *, int))(*v3 + 292))(v3, 1); /*0x41a0d5*/
              }
              else
              {
                v27 = *v3; /*0x41a0f6*/
                ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((TechnoClass *)v3); /*0x41a0fc*/
                (*(void (__thiscall **)(int *, void *))(v27 + 1152))(v3, ClosestPlacementCell); /*0x41a104*/
              }
              (*(void (__thiscall **)(int *, int, _DWORD))(*v3 + 488))(v3, 2, 0); /*0x41a0e3*/
              return 1; /*0x41a0ec*/
            }
            else
            {
              (*(void (__thiscall **)(int *, int, _DWORD))(*v3 + 488))(v3, 5, 0); /*0x41a12d*/
              return 1; /*0x41a133*/
            }
          }
        default:
          return 1;
      }
    }
    else
    {
      (*(void (__thiscall **)(int *, _DWORD, int))(*v3 + 1156))(v3, 0, 1); /*0x419d97*/
      return 1; /*0x419d9f*/
    }
  }
  else
  {
    if ( v4 )
      v6 = (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) == 6 ? v4 : 0;
    else
      v6 = 0; /*0x419cc9*/
    v7 = *v3; /*0x419cdf*/
    v3[435] = (int)v6; /*0x419ce5*/
    (*(void (__thiscall **)(int *, int))(v7 + 628))(v3, 3); /*0x419ceb*/
    (*(void (__thiscall **)(int *, int, int))(*v3 + 488))(v3, 2, 1); /*0x419cf9*/
    return 1; /*0x419d01*/
  }
  return result; /*0x419cff*/
}



// ==== 0x0041A160  TechnoClass::FindClosestPlacementCell  this=TechnoClass  sig=csp ====
void *__thiscall TechnoClass::FindClosestPlacementCell(TechnoClass *this)
{
  double v1; // st7
  int v3; // eax
  int v4; // esi
  _DWORD *v5; // ebp
  _DWORD *v6; // eax
  int *v7; // eax
  int v8; // ebp
  int TileIndex; // eax
  int v10; // eax
  int (__thiscall **ptr_0)(TechnoClass *, _DWORD *); // eax
  __int16 *v12; // eax
  __int64 v13; // rax
  int v15; // eax
  TechnoClass *v16; // eax
  TechnoClass *v17; // esi
  _DWORD *v18; // ebp
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ebp
  int v26; // eax
  int v27; // eax
  int *location; // edi
  int v29; // [esp-20h] [ebp-90h]
  int v30; // [esp+20h] [ebp-50h]
  int v31; // [esp+24h] [ebp-4Ch]
  int v32; // [esp+24h] [ebp-4Ch]
  __int16 v33[2]; // [esp+28h] [ebp-48h] BYREF
  __int16 v34[2]; // [esp+2Ch] [ebp-44h] BYREF
  __int16 v35; // [esp+30h] [ebp-40h] BYREF
  __int16 v36; // [esp+32h] [ebp-3Eh]
  __int16 v37[2]; // [esp+34h] [ebp-3Ch] BYREF
  int v38; // [esp+38h] [ebp-38h] BYREF
  int v39; // [esp+3Ch] [ebp-34h] BYREF
  int v40; // [esp+40h] [ebp-30h] BYREF
  int v41; // [esp+44h] [ebp-2Ch]
  int v42; // [esp+48h] [ebp-28h]
  char v43[12]; // [esp+4Ch] [ebp-24h] BYREF
  _BYTE v44[12]; // [esp+58h] [ebp-18h] BYREF
  _DWORD v45[3]; // [esp+64h] [ebp-Ch] BYREF

  v34[0] = 0; /*0x41a171*/
  v34[1] = 0; /*0x41a176*/
  v30 = -1; /*0x41a189*/
  if ( *(int *)(*((_DWORD *)this + 433) + 1016) > 0 ) /*0x41a197*/
  {
    v3 = 0; /*0x41a1a3*/
    v31 = 0; /*0x41a1a5*/
    *(_DWORD *)v37 = this->owner->bunkersCount; /*0x41a1ae*/
    if ( *(int *)v37 > 0 ) /*0x41a1b2*/
    {
      do /*0x41a2f9*/
      {
        v4 = *(_DWORD *)(this->owner->absorbersCount + 4 * v3); /*0x41a1c1*/
        if ( v4 && !*(_BYTE *)(v4 + 129) ) /*0x41a1cc*/
        {
          v5 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v4 + 72))(v4, v43); /*0x41a1e6*/
          v6 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v44); /*0x41a1ef*/
          v7 = Coord::Subtract((Coord *)v45, *v6 - *v5, v6[1] - v5[1], v6[2] - v5[2]); /*0x41a210*/
          v40 = *v7; /*0x41a217*/
          v41 = v7[1]; /*0x41a222*/
          v42 = v7[2]; /*0x41a229*/
          v8 = Coord::Length((Coord *)&v40); /*0x41a238*/
          if ( *(_DWORD *)(v4 + 1312) == **(_DWORD **)(*((_DWORD *)this + 433) + 1004) ) /*0x41a248*/
            v8 /= 4; /*0x41a255*/
          if ( v30 == -1 || v8 < v30 ) /*0x41a262*/
          {
            *(_DWORD *)v33 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v4 + 440))(v4, &v38); /*0x41a287*/
            v35 = 0; /*0x41a2a0*/
            v36 = 0; /*0x41a2a5*/
            TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v33, 0, 0); /*0x41a2aa*/
            v10 = *LayerClass::Pathfinding_Find( /*0x41a2c5*/
                     &stru_87F5F0.__pad_58[416],
                     (int)&v39,
                     &v39,
                     v33,
                     0,
                     TileIndex,
                     0,
                     0,
                     3,
                     3,
                     0,
                     0,
                     0,
                     1,
                     &v35,
                     0,
                     0);
            *(_DWORD *)v33 = v10; /*0x41a2ce*/
            if ( v10 != g_AircraftStatusFlag ) /*0x41a2d2*/
            {
              v30 = v8; /*0x41a2e2*/
              *(_DWORD *)v34 = v10; /*0x41a2e6*/
            }
          }
        }
        v3 = ++v31; /*0x41a2f2*/
      }
      while ( v31 < *(int *)v37 ); /*0x41a2f9*/
      if ( v30 != -1 ) /*0x41a306*/
      {
        if ( v30 < 256 ) /*0x41a311*/
        {
          ptr_0 = (int (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass; /*0x41a327*/
          v35 = 0; /*0x41a334*/
          v36 = 0; /*0x41a339*/
          v12 = (__int16 *)ptr_0[110](this, &v39); /*0x41a33e*/
          v29 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v12, 0, 0); /*0x41a351*/
          v13 = ((__int64 (__thiscall *)(TechnoClass *, int *))*((_DWORD *)this->RadioClass + 110))(this, &v38); /*0x41a35a*/
          *(_DWORD *)v37 = *LayerClass::Pathfinding_Find( /*0x41a37c*/
                              &stru_87F5F0.__pad_58[416],
                              SHIDWORD(v13),
                              v33,
                              (__int16 *)v13,
                              0,
                              v29,
                              0,
                              0,
                              1,
                              1,
                              0,
                              0,
                              0,
                              1,
                              &v35,
                              0,
                              0);
          return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v37); /*0x41a38c*/
        }
        return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v34); /*0x41a311*/
      }
    }
  }
  v15 = 0; /*0x41a3aa*/
  v32 = 0; /*0x41a3ae*/
  if ( dword_A8E370 > 0 ) /*0x41a3b2*/
  {
    do /*0x41a50f*/
    {
      v16 = (TechnoClass *)AbstractClass::IsTechnoType(*((AbstractClass **)dword_A8E364 + v15)); /*0x41a3c1*/
      v17 = v16; /*0x41a3c6*/
      if ( v16 ) /*0x41a3ca*/
      {
        if ( !v16->? && v16->owner == this->owner && v16 != this ) /*0x41a3f2*/
        {
          v18 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD *))v16->RadioClass + 18))(v16, v45); /*0x41a406*/
          v19 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v44); /*0x41a40f*/
          v20 = *v19 - *v18; /*0x41a417*/
          v21 = v19[1]; /*0x41a419*/
          v22 = v19[2]; /*0x41a41c*/
          v40 = v20; /*0x41a41f*/
          v23 = v18[2]; /*0x41a42b*/
          v41 = v21 - v18[1]; /*0x41a42e*/
          v42 = v22 - v23; /*0x41a438*/
          Math::Sqrt((double)v40 * (double)v40 + (double)(v22 - v23) * (double)(v22 - v23) + (double)v41 * (double)v41); /*0x41a45d*/
          LOWORD(v24) = Math::RoundToInt(v1); /*0x41a465*/
          v25 = v24; /*0x41a46a*/
          if ( v30 == -1 || v24 < v30 ) /*0x41a477*/
          {
            *(_DWORD *)v33 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *))v17->RadioClass + 110))(v17, &v39); /*0x41a49b*/
            v35 = 0; /*0x41a4b4*/
            v36 = 0; /*0x41a4b9*/
            v26 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v33, 0, 0); /*0x41a4be*/
            v27 = *LayerClass::Pathfinding_Find( /*0x41a4d9*/
                     &stru_87F5F0.__pad_58[416],
                     (int)&v38,
                     &v38,
                     v33,
                     0,
                     v26,
                     0,
                     0,
                     1,
                     1,
                     0,
                     0,
                     0,
                     1,
                     &v35,
                     0,
                     0);
            *(_DWORD *)v33 = v27; /*0x41a4e2*/
            if ( v27 != g_AircraftStatusFlag ) /*0x41a4e6*/
            {
              v30 = v25; /*0x41a4f6*/
              *(_DWORD *)v34 = v27; /*0x41a4fa*/
            }
          }
        }
      }
      v15 = ++v32; /*0x41a508*/
    }
    while ( v32 < dword_A8E370 ); /*0x41a50f*/
    if ( v30 != -1 ) /*0x41a51a*/
      return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v34); /*0x41a532*/
  }
  location = this->?; /*0x41a533*/
  v40 = *location; /*0x41a53b*/
  v41 = location[1]; /*0x41a547*/
  v42 = location[2]; /*0x41a553*/
  return Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v40); /*0x41a385*/
}



// ==== 0x0041A570  TechnoClass::GetTurretFacing  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::GetTurretFacing(TechnoClass *this, _DWORD *a2)
{
  int v2; // ecx
  TechnoClass *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x41a570*/
  v2 = *ProgressTimer::GetValue((ProgressTimer *)this->secondaryFacing, &v4); /*0x41a581*/
  *a2 = v2; /*0x41a587*/
  return a2; /*0x41a58a*/
}



// ==== 0x0041A590  AircraftClass::CheckLandingClearance  this=AircraftClass  sig=csp ====
char *__thiscall AircraftClass::CheckLandingClearance(AircraftClass *this, int a2, int a3, int a4)
{
  char *result; // eax

  result = MissionClass::GetMissionControl((MissionClass *)this); /*0x41a593*/
  if ( result[9] ) /*0x41a598*/
    return (*((char *(__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 289))(this, 0, 1); /*0x41a5a7*/
  return result; /*0x41a5ad*/
}



// ==== 0x0041A5C0  AircraftClass::GetMissionTimer  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::GetMissionTimer(AircraftClass *this)
{
  int v2; // edi
  void (__thiscall **ptr_0)(AircraftClass *, int, _DWORD); // eax
  char *MissionControl; // eax
  int result; // eax
  void (__thiscall **v6)(AircraftClass *, CellClass *, int); // edi
  CellClass *v7; // eax
  void (__thiscall **v8)(AircraftClass *, _DWORD, int); // eax
  int ammo; // ecx
  int Member; // eax
  int v11; // edi
  CellClass *owner; // ecx
  _DWORD *v13; // eax
  char *v14; // eax
  int v15; // eax
  int v16; // [esp+8h] [ebp-Ch] BYREF
  int v17; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h]

  v2 = (*(int (__thiscall **)(AircraftTypeClass *))(*(_DWORD *)this->Type + 188))(this->Type); /*0x41a5d9*/
  if ( (*((int (__thiscall **)(AircraftClass *))this->FootClass + 114))(this) == v2 ) /*0x41a5e3*/
  {
    if ( this->? ) /*0x41a5e9*/
    {
      if ( this->? ) /*0x41a5f3*/
      {
        ptr_0 = (void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass; /*0x41a5fd*/
        this->AircraftClass_field_bool_6D4 = 1; /*0x41a605*/
        ptr_0[122](this, 2, 0); /*0x41a60c*/
      }
      MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x41a614*/
      LOWORD(result) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x41a622*/
    }
    else if ( *(_DWORD *)(*((int (__thiscall **)(AircraftClass *, _DWORD))this->FootClass + 254))(this, 0) ) /*0x41a639*/
    {
      if ( !this->? ) /*0x41a68d*/
      {
        v8 = (void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass; /*0x41a697*/
        this->AircraftClass_field_bool_6D4 = 1; /*0x41a69f*/
        v8[289](this, 0, 1); /*0x41a6a6*/
      }
      return 1; /*0x41a6ad*/
    }
    else
    {
      v6 = (void (__thiscall **)(AircraftClass *, CellClass *, int))this->FootClass; /*0x41a644*/
      v16 = this->?[0]; /*0x41a64a*/
      v17 = this->?[1]; /*0x41a65b*/
      v18 = this->?[2]; /*0x41a662*/
      v7 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v16); /*0x41a666*/
      v6[288](this, v7, 1); /*0x41a66e*/
      (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 2, 0); /*0x41a67c*/
      return 1; /*0x41a683*/
    }
    return result; /*0x41a62c*/
  }
  if ( byte_889ECC ) /*0x41a6be*/
  {
    if ( this->? || !(*((unsigned __int8 (__thiscall **)(AircraftClass *))this->FootClass + 171))(this) ) /*0x41a6d2*/
      goto LABEL_14; /*0x41a6da*/
LABEL_26:
    if ( !(unsigned __int8)Team::AllMembersValid((Team *)this) ) /*0x41a7bf*/
    {
      v11 = (*((int (__thiscall **)(AircraftClass *, _BYTE *, _DWORD, _DWORD))this->FootClass + 330))( /*0x41a7e6*/
              this,
              &this->Type->TechnoTypeClass[1000],
              0,
              0);
      if ( v11 ) /*0x41a7ea*/
      {
        (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 7, 0); /*0x41a7f8*/
        (*((void (__thiscall **)(AircraftClass *, int, int))this->FootClass + 288))(this, v11, 1); /*0x41a805*/
        (*((void (__thiscall **)(AircraftClass *, _DWORD))this->FootClass + 242))(this, 0); /*0x41a811*/
        return 1; /*0x41a821*/
      }
    }
    goto LABEL_14; /*0x41a7ea*/
  }
  if ( byte_889ECD ) /*0x41a75f*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(AircraftClass *))this->FootClass + 171))(this) /*0x41a78c*/
      && this->? < *(_DWORD *)&this->Type->TechnoTypeClass[1668] / 2 )
    {
      goto LABEL_26; /*0x41a78c*/
    }
  }
  else if ( (*((unsigned __int8 (__thiscall **)(AircraftClass *))this->FootClass + 171))(this) /*0x41a7b7*/
         && this->? < *(_DWORD *)&this->Type->TechnoTypeClass[1668] )
  {
    goto LABEL_26; /*0x41a7b7*/
  }
LABEL_14:
  ammo = this->?; /*0x41a6e0*/
  if ( ammo != -1 && ammo < *(_DWORD *)&this->Type->TechnoTypeClass[1668] / 2 ) /*0x41a702*/
  {
    if ( (unsigned __int8)Team::AllMembersValid((Team *)this) ) /*0x41a70a*/
    {
      Member = Team::GetMember((Team *)this, 0); /*0x41a71b*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 ) /*0x41a72a*/
      {
        if ( *(_BYTE *)(*(_DWORD *)(Team::GetMember((Team *)this, 0) + 1312) + 5802) ) /*0x41a73f*/
          return 1; /*0x41a74e*/
      }
    }
  }
  if ( this->? ) /*0x41a822*/
  {
    (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 1, 0); /*0x41a834*/
    return 1; /*0x41a83b*/
  }
  else if ( (*((unsigned __int8 (__thiscall **)(AircraftClass *))this->FootClass + 171))(this) ) /*0x41a849*/
  {
    if ( (*((int (__thiscall **)(AircraftClass *))this->FootClass + 114))(this) /*0x41a86e*/
      || (unsigned __int8)Team::AllMembersValid((Team *)this) )
    {
      if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x41a888*/
      {
        v16 = this->?[0]; /*0x41a89d*/
        owner = (CellClass *)this->?; /*0x41a8a9*/
        v17 = this->?[1]; /*0x41a8af*/
        v18 = this->?[2]; /*0x41a8b6*/
        v13 = CellClass::ScanOccupiers(owner, &v16); /*0x41a8ba*/
        if ( v13 ) /*0x41a8c1*/
        {
          (*((void (__thiscall **)(AircraftClass *, _DWORD *))this->FootClass + 242))(this, v13); /*0x41a8c8*/
          (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 1, 0); /*0x41a8d6*/
        }
      }
      if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) /*0x41a8ef*/
        || (*((unsigned __int8 (__thiscall **)(AircraftClass *))this->FootClass + 21))(this) )
      {
        return FootClass::FindMovePosition((FootClass *)this); /*0x41a92b*/
      }
      else
      {
        v14 = MissionClass::GetMissionControl((MissionClass *)this); /*0x41a8f8*/
        LOWORD(v15) = Math::RoundToInt(*((double *)v14 + 2) * 900.0); /*0x41a906*/
        return v15 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x41a921*/
      }
    }
    else
    {
      return 45; /*0x41a878*/
    }
  }
  else
  {
    return 45; /*0x41a854*/
  }
}



// ==== 0x0041A940  AircraftClass::EvaluateTargetingState  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::EvaluateTargetingState(AircraftClass *this)
{
  int v2; // edi

  v2 = (*(int (__thiscall **)(AircraftTypeClass *))(*(_DWORD *)this->Type + 188))(this->Type); /*0x41a956*/
  if ( (*((int (__thiscall **)(AircraftClass *))this->FootClass + 114))(this) == v2 ) /*0x41a960*/
  {
    if ( !this->? ) /*0x41a962*/
      (*((void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 289))(this, 0, 1); /*0x41a974*/
    return 1; /*0x41a97b*/
  }
  else
  {
    if ( !this->? /*0x41a99c*/
      && (*((unsigned __int8 (__thiscall **)(AircraftClass *))this->FootClass + 171))(this)
      && !(unsigned __int8)Team::AllMembersValid((Team *)this) )
    {
      (*((void (__thiscall **)(AircraftClass *, _DWORD, int))this->FootClass + 289))(this, 0, 1); /*0x41a9ad*/
    }
    if ( this->? ) /*0x41a9b3*/
    {
      (*((void (__thiscall **)(AircraftClass *, int, _DWORD))this->FootClass + 122))(this, 1, 0); /*0x41a9c5*/
      return 1; /*0x41a9cc*/
    }
    else
    {
      return FootClass::FindAITarget((FootClass *)this); /*0x41a9d5*/
    }
  }
}



// ==== 0x0041A9E0  TechnoClass::CanFireAtTarget  this=TechnoClass  sig=csp ====
int __fastcall TechnoClass::CanFireAtTarget(TechnoClass *this, int a2, _BYTE *a3, int a4, char a5)
{
  int result; // eax
  int v7; // edi

  result = TriggerTypeClass::ReadINI(this, a2, a3, a4, a5); /*0x41a9f6*/
  if ( !result ) /*0x41a9fd*/
  {
    if ( !*((_BYTE *)this + 1737) || this->passengers[1] ) /*0x41aa09*/
    {
      v7 = *ProgressTimer::GetValue((ProgressTimer *)this->secondaryFacing, &a5); /*0x41aa2e*/
      if ( (*(int (__stdcall **)(char *))(this->airstrikeTimer + 28))((char *)this + 1728) /*0x41aa6a*/
        || abs16(v7 - *(_WORD *)ObjectClass::CalcTargetFacing((ObjectClass *)this, (int *)&a5, (int)a3)) <= 0x800u )
      {
        return 0; /*0x41aa77*/
      }
      else
      {
        return 2; /*0x41aa6e*/
      }
    }
    else
    {
      return 1; /*0x41aa15*/
    }
  }
  return result; /*0x41aa13*/
}



// ==== 0x0041AA80  AircraftClass::AssignDestination_SyncLog  this=FootClass  sig=csp ====
char __thiscall AircraftClass::AssignDestination_SyncLog(Class_7E22A4 *this, int a2, AbstractClass *a3, int a4)
{
  void *ClosestPlacementCell; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  Array *v10; // eax
  Array *v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax

  ClosestPlacementCell = (void *)a2; /*0x41aa83*/
  if ( !a2 ) /*0x41aa8b*/
  {
LABEL_53:
    LOBYTE(v6) = FootClass::AssignDestination((FootClass *)this, (int)ClosestPlacementCell, (int)a3); /*0x41adac*/
    return v6; /*0x41adb4*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 84))(a2) ) /*0x41aa9a*/
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)(a2 + 4) + 12))(a2 + 4) != 6 /*0x41aada*/
      || (*(int (__thiscall **)(Class_7E22A4 *))(this->q184)(this) != 7 && this->queuedMission != 7 )
    {
      goto LABEL_35; /*0x41aada*/
    }
    if ( (unsigned __int8)Team::AllMembersValid((Team *)this) ) /*0x41aae8*/
    {
      v10 = (Array *)AbstractClass::IsTechnoType((AbstractClass *)a2); /*0x41ac4e*/
      v11 = v10; /*0x41ac53*/
      if ( !v10 ) /*0x41ac57*/
        goto LABEL_35; /*0x41ac57*/
      if ( (unsigned __int8)Array::ContainsValue(v10, (int)this) ) /*0x41ac5c*/
      {
        if ( (unsigned __int8)Array::Contains(v11, (int)this) ) /*0x41ac72*/
          goto LABEL_35; /*0x41ac72*/
        v6 = (*(int (__thiscall **)(Class_7E22A4 *, int))(this->temporalUsing)(this, 14); /*0x41ac81*/
        if ( v6 == 1 ) /*0x41ac8a*/
          return v6; /*0x41ac8a*/
        (*(void (__thiscall **)(Class_7E22A4 *, int))(this->temporalUsing)(this, 3); /*0x41ac96*/
        v12 = *(_DWORD *)(a2 + 1312); /*0x41ac9c*/
        if ( !*(_BYTE *)(v12 + 5801) && !*(_BYTE *)(v12 + 5802) ) /*0x41acac*/
          goto LABEL_35; /*0x41acb4*/
        TechnoClass::SetFocus((TechnoClass *)this, a2); /*0x41acb9*/
        goto LABEL_34; /*0x41acb9*/
      }
    }
    else
    {
      if ( !(unsigned __int8)Array::ContainsValue((Array *)a2, (int)this) ) /*0x41aaf8*/
      {
        TechnoClass::SetFocus((TechnoClass *)this, a2); /*0x41ab09*/
        if ( *(_BYTE *)(*(_DWORD *)(a2 + 1312) + 5835) ) /*0x41ab1a*/
        {
          ClosestPlacementCell = (void *)(*(int (__thiscall **)(Class_7E22A4 *, int, _DWORD, _DWORD))(this->FootClass_field_528)( /*0x41ab4a*/
                                           this,
                                           this->q1B1 + 1000,
                                           0,
                                           0);
          (*(void (__thiscall **)(Class_7E22A4 *, _DWORD, int))(this->q480)(this, 0, 1); /*0x41ab4c*/
          v7 = 2; /*0x41ab54*/
          if ( ClosestPlacementCell /*0x41ab6b*/
            && (*(int (__thiscall **)(Class_7E22A4 *, int, void *))(this->temporalTargetingMe)(
                 this,
                 15,
                 ClosestPlacementCell) == 1 )
          {
            (*(void (__thiscall **)(Class_7E22A4 *, int, void *))(this->temporalTargetingMe)(this, 2, ClosestPlacementCell); /*0x41ab73*/
            v7 = 7; /*0x41ab79*/
          }
          else
          {
            ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((TechnoClass *)this); /*0x41ab87*/
          }
          (*(void (__thiscall **)(Class_7E22A4 *, int))(this->q1E8)(this, v7); /*0x41ab90*/
          if ( (*(unsigned __int8 (__thiscall **)(Class_7E22A4 *))(this->reloadTimer)(this) ) /*0x41ab9a*/
            (*(void (__thiscall **)(Class_7E22A4 *))(this->disguiseBlinkTimer)(this); /*0x41aba8*/
        }
        if ( *(_BYTE *)(*(_DWORD *)(a2 + 1312) + 5801) ) /*0x41abb2*/
        {
          this->currentRank = a2; /*0x41abc4*/
LABEL_34:
          ClosestPlacementCell = 0; /*0x41acbe*/
        }
LABEL_35:
        v13 = (*(int (__thiscall **)(Class_7E22A4 *))(this->q1BC)(this); /*0x41acc0*/
        if ( (*(_DWORD *)(v13 + 320) & 0x100) == 0 ) /*0x41acd3*/
        {
          v14 = *(_DWORD *)(v13 + 228); /*0x41acd9*/
          if ( v14 ) /*0x41ace1*/
          {
            while ( (Class_7E22A4 *)v14 == this || (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) != 6 ) /*0x41acf5*/
            {
              v14 = *(_DWORD *)(v14 + 48); /*0x41acf7*/
              if ( !v14 ) /*0x41acfc*/
                goto LABEL_53; /*0x41acfc*/
            }
            v15 = *(_DWORD *)(v14 + 1312); /*0x41ad19*/
            if ( *(_BYTE *)(v15 + 5801) || *(_BYTE *)(v15 + 5802) ) /*0x41ad29*/
            {
              if ( !this->Locomotor ) /*0x41ad33*/
                WinAPI::Wrapper(-2147467261); /*0x41ad42*/
              if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 96))(this->Locomotor) /*0x41ad5d*/
                && !HouseClass::IonSensitivesShouldBeOffline() )
              {
                if ( !this->Locomotor ) /*0x41ad66*/
                  WinAPI::Wrapper(-2147467261); /*0x41ad75*/
                (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 88))(this->Locomotor); /*0x41ad83*/
              }
              if ( Team::GetMember((Team *)this, 0) == v14 /*0x41ad9e*/
                && ClosestPlacementCell != (void *)Team::GetMember((Team *)this, 0) )
              {
                (*(void (__thiscall **)(Class_7E22A4 *, int))(this->temporalUsing)(this, 3); /*0x41ada6*/
              }
            }
          }
        }
        goto LABEL_53; /*0x41ada6*/
      }
      if ( (*(int (__thiscall **)(Class_7E22A4 *, int, int))(this->temporalTargetingMe)(this, 14, a2) != 1 ) /*0x41abdf*/
      {
        (*(void (__thiscall **)(Class_7E22A4 *, int))(this->temporalUsing)(this, 3); /*0x41abe7*/
        v8 = *(_DWORD *)(a2 + 1312); /*0x41abed*/
        if ( *(_BYTE *)(v8 + 5801) || *(_BYTE *)(v8 + 5802) ) /*0x41abfd*/
        {
          TechnoClass::SetFocus((TechnoClass *)this, a2); /*0x41ac0a*/
          ClosestPlacementCell = 0; /*0x41ac0f*/
        }
      }
      v9 = *(_DWORD *)(a2 + 1312); /*0x41ac11*/
      if ( *(_BYTE *)(v9 + 5801) || *(_BYTE *)(v9 + 5802) ) /*0x41ac21*/
      {
        if ( this->FootClass_field_5A4 ) /*0x41ac38*/
          TechnoClass::SetFocus((TechnoClass *)this, this->FootClass_field_5A4); /*0x41ac45*/
        goto LABEL_35; /*0x41ac4a*/
      }
    }
    TechnoClass::SetFocus((TechnoClass *)this, (int)ClosestPlacementCell); /*0x41ac2e*/
    goto LABEL_35; /*0x41ac33*/
  }
  LOBYTE(v6) = FootClass::AssignDestination((FootClass *)this, 0, (int)a3); /*0x41aaa6*/
  return v6; /*0x41aaab*/
}



// ==== 0x0041ADC0  AircraftClass::ProcessDockCheck  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::ProcessDockCheck(AircraftClass *this)
{
  if ( !this->?[0] ) /*0x41adc3*/
    WinAPI::Wrapper(-2147467261); /*0x41add2*/
  return (*(int (__stdcall **)(int))(*(_DWORD *)this->?[0] + 116))(this->?[0]); /*0x41ade3*/
}



// ==== 0x0041ADF0  AircraftClass::RevealSight  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::RevealSight(AircraftClass *this, int a2, int a3)
{
  int v4; // ebx
  HouseClass *owner; // edx
  int v6; // edx
  int v7; // eax
  HouseClass *v8; // edx
  int result; // eax
  int v10; // ebx
  int (__thiscall **ptr_0)(AircraftClass *); // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int (__thiscall **v15)(AircraftClass *); // eax
  int v16; // eax
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v4 = *(_DWORD *)&this->Type->TechnoTypeClass[1512]; /*0x41ae00*/
  if ( !(*((int (__thiscall **)(AircraftClass *))this->FootClass + 114))(this) ) /*0x41ae06*/
  {
    v4 = 1; /*0x41ae10*/
LABEL_4:
    v17 = this->?[0]; /*0x41ae1f*/
    v18 = this->?[1]; /*0x41ae40*/
    owner = this->?; /*0x41ae44*/
    v19 = this->?[2]; /*0x41ae4e*/
    MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], &v17, v4, owner, a2, a3, 0, 1, 0); /*0x41ae5e*/
    v6 = this->?[1]; /*0x41ae65*/
    v7 = this->?[2]; /*0x41ae68*/
    v17 = this->?[0]; /*0x41ae6d*/
    v18 = v6; /*0x41ae77*/
    v8 = this->?; /*0x41ae7b*/
    v19 = v7; /*0x41ae84*/
    return MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], &v17, v4, v8, a2, a3, 0, 1, 1); /*0x41aea1*/
  }
  if ( v4 ) /*0x41ae19*/
    goto LABEL_4; /*0x41ae19*/
  result = (int)dword_A8B230->ptr_0; /*0x41aeaa*/
  if ( ((int)dword_A8B230->ptr_0 & 0x1000) != 0 ) /*0x41aeaf*/
  {
    v10 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 244); /*0x41aec5*/
    v17 = this->?[0]; /*0x41aecd*/
    v18 = this->?[1]; /*0x41aed6*/
    ptr_0 = (int (__thiscall **)(AircraftClass *))this->FootClass; /*0x41aeda*/
    v19 = this->?[2]; /*0x41aedf*/
    v12 = ptr_0[114](this); /*0x41aee3*/
    MapClass::RevealArea1( /*0x41af1a*/
      (MapClass *)&stru_87F5F0.__pad_58[416],
      &v17,
      v10,
      this->?,
      0,
      0,
      1,
      v12 < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1972) / 2,
      0);
    v13 = this->?[1]; /*0x41af21*/
    v14 = this->?[2]; /*0x41af24*/
    v17 = this->?[0]; /*0x41af27*/
    v15 = (int (__thiscall **)(AircraftClass *))this->FootClass; /*0x41af2b*/
    v18 = v13; /*0x41af2d*/
    v19 = v14; /*0x41af35*/
    v16 = v15[114](this); /*0x41af39*/
    return MapClass::RevealArea1( /*0x41af70*/
             (MapClass *)&stru_87F5F0.__pad_58[416],
             &v17,
             v10,
             this->?,
             0,
             0,
             1,
             v16 < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1972) / 2,
             1);
  }
  return result; /*0x41ae9b*/
}



// ==== 0x0041AF80  ObjectClass::SaveAircraftToINI  this=ObjectClass  sig=csp ====
int __thiscall SaveAircraftToINI(char *this)
{
  int result; // eax
  int v2; // esi
  int v3; // eax
  _DWORD *Value; // eax
  int v5; // edi
  const char *v6; // ebx
  const char *v7; // ebp
  int v8; // eax
  int v9; // eax
  char *v10; // eax
  int v11; // eax
  double HealthRatio; // st7
  int v13; // eax
  int v14; // [esp-2Ch] [ebp-D8h]
  int v15; // [esp-28h] [ebp-D4h]
  int v16; // [esp-24h] [ebp-D0h]
  const char *v17; // [esp-20h] [ebp-CCh]
  const char *v18; // [esp-1Ch] [ebp-C8h]
  int v19; // [esp-18h] [ebp-C4h]
  int v20; // [esp-14h] [ebp-C0h]
  int v21; // [esp-10h] [ebp-BCh]
  int v22; // [esp-Ch] [ebp-B8h]
  int i; // [esp+8h] [ebp-A4h]
  char *v24; // [esp+Ch] [ebp-A0h]
  int v26; // [esp+14h] [ebp-98h] BYREF
  _BYTE v27[4]; // [esp+1Ch] [ebp-90h] BYREF
  char Buffer[4]; // [esp+20h] [ebp-8Ch] BYREF
  _BYTE v29[8]; // [esp+24h] [ebp-88h] BYREF
  char Source[128]; // [esp+2Ch] [ebp-80h] BYREF

  INIClass::ClearSection((int)this, (int)aAircraft, 0); /*0x41af92*/
  result = 0; /*0x41af9d*/
  for ( i = 0; result < dword_A8E3A0; i = result ) /*0x41afa5*/
  {
    v2 = *((_DWORD *)dword_A8E394 + result); /*0x41afb5*/
    if ( v2 && !*(_BYTE *)(v2 + 129) && *(_BYTE *)(v2 + 144) ) /*0x41afce*/
    {
      sprintf(Buffer, "%d", result); /*0x41afe7*/
      v3 = *(_DWORD *)(v2 + 52); /*0x41afec*/
      if ( v3 ) /*0x41aff4*/
        v24 = (char *)(*(_DWORD *)(v3 + 36) + 36); /*0x41affc*/
      else
        v24 = g_INI_Key_None; /*0x41b002*/
      Value = ProgressTimer::GetValue((_WORD *)(v2 + 904), &v26); /*0x41b015*/
      v22 = *(unsigned __int8 *)(v2 + 1058); /*0x41b042*/
      v5 = (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1); /*0x41b04d*/
      v6 = (const char *)(*(_DWORD *)(v2 + 1732) + 36); /*0x41b053*/
      v7 = (const char *)(*(_DWORD *)(v2 + 540) + 90100); /*0x41b056*/
      v8 = FootClass::GetField(v2 + 336, *(_DWORD *)(v2 + 532), *(unsigned __int8 *)(v2 + 1057)); /*0x41b05c*/
      v9 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)v2 + 388))(v2, v24, v8); /*0x41b06b*/
      v10 = FromNameIndex(v9); /*0x41b073*/
      v11 = (*(int (__thiscall **)(int, _BYTE *, int, char *))(*(_DWORD *)v2 + 440))(v2, v29, v5, v10); /*0x41b083*/
      v14 = *(__int16 *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v2 + 440))( /*0x41b0a0*/
                          v2,
                          v27,
                          *(__int16 *)(v11 + 2));
      HealthRatio = BuildingClass::GetHealthRatio((int *)v2); /*0x41b0a3*/
      v13 = Math::RoundToInt(HealthRatio * 256.0); /*0x41b0ae*/
      sprintf(Source, "%s,%s,%d,%d,%d,%d,%s,%s,%d,%d,%d,%d", v7, v6, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22); /*0x41b0c0*/
      INIClass::SetString(this, (unsigned __int8 *)aAircraft, Buffer, Source); /*0x41b0dc*/
      result = i; /*0x41b0e1*/
    }
    ++result; /*0x41b0eb*/
  }
  return result; /*0x41b0fc*/
}



// ==== 0x0041B110  ObjectClass::PlaceAircraftFromINI  this=ObjectClass  sig=csp ====
int __usercall PlaceAircraftFromINI@<eax>(INIClass *a1@<ecx>, int a2@<edi>)
{
  int result; // eax
  int v4; // ecx
  unsigned __int8 *StringByIndex; // eax
  char *v6; // eax
  int v7; // esi
  TypeClass *v8; // eax
  int v9; // edi
  IUnknown *v10; // esi
  int v11; // eax
  int v12; // esi
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  int v16; // eax
  char *v17; // eax
  int v18; // eax
  char *v19; // eax
  int v20; // edi
  char *v21; // eax
  int v22; // ebx
  char *v23; // eax
  TeamClass *v24; // eax
  int v25; // eax
  char *v26; // eax
  int v27; // eax
  char *v28; // eax
  char *v29; // eax
  char *v30; // eax
  int v31; // edi
  int v32; // eax
  int v33; // edi
  int v34; // eax
  int i; // [esp+Ch] [ebp-A4h]
  int v37; // [esp+14h] [ebp-9Ch]
  int v38; // [esp+18h] [ebp-98h]
  int v39; // [esp+20h] [ebp-90h]
  _DWORD v40[3]; // [esp+24h] [ebp-8Ch] BYREF
  char String[128]; // [esp+30h] [ebp-80h] BYREF

  INIClass::ResetSection(a1); /*0x41b119*/
  result = INIClass::GetKeyCount(a1->__pad_0, aAircraft); /*0x41b126*/
  v4 = 0; /*0x41b12b*/
  v39 = result; /*0x41b12f*/
  for ( i = 0; i < v39; ++i ) /*0x41b137*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1->__pad_0, aAircraft, v4); /*0x41b14a*/
    INIClass::GetString(a1, aAircraft, StringByIndex, 0, String, 128); /*0x41b164*/
    v6 = strtok(String, Str); /*0x41b173*/
    v7 = HouseClass::FindByName(v6); /*0x41b182*/
    if ( v7 != -1 ) /*0x41b187*/
    {
      v8 = (TypeClass *)strtok(0, Str); /*0x41b194*/
      v9 = TypeClass::FindByName(v8); /*0x41b1a3*/
      if ( v9 != -1 ) /*0x41b1a8*/
      {
        v10 = (IUnknown *)*((_DWORD *)stru_A80220.? + v7); /*0x41b1b9*/
        v11 = __2_YAPAXI_Z(0x6D8u); /*0x41b1bc*/
        if ( v11 ) /*0x41b1c6*/
        {
          v12 = AircraftClass::Construct(v11, v9, *((_DWORD *)dword_A8B21C + v9), v10); /*0x41b1de*/
          if ( v12 ) /*0x41b1e2*/
          {
            v13 = strtok(0, Str); /*0x41b1ef*/
            atoi(v13); /*0x41b1f5*/
            if ( *(int *)&stru_A8EB00.?[408] < 4 ) /*0x41b210*/
            {
              v17 = strtok(0, Str); /*0x41b242*/
              v18 = atoi(v17); /*0x41b248*/
              LOWORD(v37) = v18 % 128; /*0x41b263*/
              HIWORD(v37) = v18 / 128; /*0x41b26d*/
              v16 = v37; /*0x41b272*/
            }
            else
            {
              v14 = strtok(0, Str); /*0x41b212*/
              LOWORD(v38) = atoi(v14); /*0x41b224*/
              v15 = strtok(0, Str); /*0x41b229*/
              HIWORD(v38) = atoi(v15); /*0x41b234*/
              v16 = v38; /*0x41b239*/
            }
            v40[0] = ((__int16)v16 << 8) + 128; /*0x41b29b*/
            v40[1] = (SHIWORD(v16) << 8) + 128; /*0x41b29f*/
            v40[2] = 0; /*0x41b2a3*/
            v19 = strtok(0, Str); /*0x41b2a7*/
            v20 = atoi(v19); /*0x41b2b9*/
            v21 = strtok(0, Str); /*0x41b2bb*/
            v22 = LookupWaypointName((ObjectClass *)v21); /*0x41b2ca*/
            v23 = strtok(0, Str); /*0x41b2d3*/
            v24 = (TeamClass *)ObjectTypeClass::FindByName((ObjectTypeClass *)v23); /*0x41b2dd*/
            if ( v24 ) /*0x41b2e4*/
            {
              v25 = TeamClass::FindOrCreate(v24); /*0x41b2e8*/
              if ( v25 ) /*0x41b2ef*/
                ObjectClass::SetReference((ObjectClass *)v12, v25); /*0x41b2f4*/
            }
            v26 = strtok(0, Str); /*0x41b300*/
            if ( v26 ) /*0x41b30a*/
            {
              v27 = atoi(v26); /*0x41b30d*/
              FootClass::SetField((int *)(v12 + 336), v27); /*0x41b31c*/
            }
            v28 = strtok(0, Str); /*0x41b328*/
            if ( v28 ) /*0x41b332*/
              *(_DWORD *)(v12 + 532) = atoi(v28); /*0x41b33d*/
            v29 = strtok(0, Str); /*0x41b34a*/
            if ( v29 ) /*0x41b354*/
              *(_BYTE *)(v12 + 1057) = atoi(v29) != 0; /*0x41b364*/
            v30 = strtok(0, Str); /*0x41b371*/
            if ( v30 ) /*0x41b37b*/
              *(_BYTE *)(v12 + 1058) = atoi(v30) != 0; /*0x41b38b*/
            if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)v12 + 216))(v12, v40, v20, a2) ) /*0x41b39b*/
            {
              v31 = *(_DWORD *)(v12 + 1732); /*0x41b3a9*/
              LOWORD(v32) = Math::RoundToInt((double)v39 * (double)*(int *)(v31 + 160) * 0.00390625); /*0x41b3bb*/
              *(_DWORD *)(v12 + 108) = v32; /*0x41b3c0*/
              v33 = *(_DWORD *)(v31 + 160); /*0x41b3c3*/
              if ( v32 > v33 - 3 ) /*0x41b3ce*/
                *(_DWORD *)(v12 + 108) = v33; /*0x41b3d0*/
              if ( !*(_DWORD *)(v12 + 108) ) /*0x41b3d3*/
                *(_DWORD *)(v12 + 108) = 1; /*0x41b3da*/
              v34 = *(_DWORD *)v12; /*0x41b3e4*/
              a2 = 0; /*0x41b3e6*/
              *(_DWORD *)(v12 + 112) = *(_DWORD *)(v12 + 108); /*0x41b3eb*/
              (*(void (__thiscall **)(int, int))(v34 + 488))(v12, v22); /*0x41b3ee*/
              (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 492))(v12); /*0x41b3f8*/
            }
            else
            {
              a2 = 1; /*0x41b402*/
              (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 32))(v12); /*0x41b406*/
            }
          }
        }
      }
    }
    result = v39; /*0x41b40d*/
    v4 = i + 1; /*0x41b411*/
  }
  return result; /*0x41b421*/
}



// ==== 0x0041B430  AircraftClass::LoadFromStream  this=AircraftClass  sig=csp ====
int __stdcall AircraftClass::LoadFromStream(AircraftClass *this, LPSTREAM pStm)
{
  AircraftClass *v2; // esi
  void **p_vtable1; // ebx
  int v4; // eax
  signed int v5; // eax
  int v6; // ecx
  char *i; // eax
  _DWORD *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // edi
  int ptr_8; // eax

  v2 = this; /*0x41b432*/
  p_vtable1 = &this->?; /*0x41b43a*/
  this = (AircraftClass *)(*((int (__stdcall **)(void **))this->? + 4))(&this->?); /*0x41b44b*/
  v4 = BuildingTypeClass::Dequeue(&g_BuildingLoadQueue_Array, (int *)&this); /*0x41b44f*/
  if ( v4 ) /*0x41b456*/
  {
    v5 = (signed int)(v4 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x41b45e*/
    if ( v5 != -1 ) /*0x41b464*/
    {
      v6 = v5 + 1; /*0x41b466*/
      for ( i = (char *)g_BuildingLoadQueue_Array.?; /*0x41b470*/
            v6 < (int)g_BuildingLoadQueue_Array.?;
            i = (char *)g_BuildingLoadQueue_Array.? )
      {
        v8 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v6++; /*0x41b478*/
        *(v8 - 2) = *v8; /*0x41b47e*/
        *(v8 - 1) = v8[1]; /*0x41b484*/
      }
      g_BuildingLoadQueue_Array.? = i - 1; /*0x41b499*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x41b49e*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x41b4ae*/
      g_BuildingLoadQueue_Array.? = 0; /*0x41b4b2*/
    }
  }
  result = ObjectClass::LoadFromStream_Common((int)v2, pStm); /*0x41b4be*/
  if ( result >= 0 ) /*0x41b4c5*/
  {
    v10 = v2->?[0]; /*0x41b4cb*/
    if ( v2 ) /*0x41b4d3*/
    {
      FootClass::PostLoadInit((FootClass *)v2, (int)&this); /*0x41b4dc*/
      v2->FootClass = &AircraftClass::`vftable'; /*0x41b4e1*/
      *p_vtable1 = &AircraftClass::`vftable'; /*0x41b4e7*/
      v2->? = &AircraftClass::`vftable'; /*0x41b4ed*/
      v2->? = &AircraftClass::`vftable'; /*0x41b4f4*/
      *(_DWORD *)v2->__pad_6C0 = &AircraftClass::`vftable'; /*0x41b4fb*/
    }
    v11 = v2->?[0]; /*0x41b506*/
    if ( v11 != v10 ) /*0x41b50e*/
    {
      v2->?[0] = v10; /*0x41b512*/
      if ( v10 ) /*0x41b518*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x41b51d*/
      if ( v11 ) /*0x41b522*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x41b528*/
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x41b52e*/
    v12 = (*((int (__stdcall **)(void **))*p_vtable1 + 4))(p_vtable1); /*0x41b53d*/
    ptr_8 = (int)g_BuildingLoadQueue_Array.?; /*0x41b53f*/
    if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x41b548*/
      goto LABEL_18; /*0x41b548*/
    if ( !g_BuildingLoadQueue_Array.? ) /*0x41b54c*/
      ptr_8 = 10; /*0x41b54e*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, ptr_8) ) /*0x41b559*/
    {
LABEL_18:
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = v12; /*0x41b56d*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = v2; /*0x41b57b*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x41b585*/
      ++g_BuildingLoadQueue_Array.?; /*0x41b58c*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->Type); /*0x41b59d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->AircraftClass_field_6CC); /*0x41b5ae*/
    return 0; /*0x41b5b3*/
  }
  return result; /*0x41b5b5*/
}



// ==== 0x0041B5C0  AircraftClass::CheckPassengerCount  this=AircraftClass  sig=csp ====
int __stdcall AircraftClass::CheckPassengerCount(
        AircraftClass *this,
        LPPERSISTSTREAM pPStm,
        struct IPersistStreamVtbl *a3)
{
  return ObjectClass::SaveToStream_Common((ObjectClass *)this, pPStm, a3); /*0x41b5d4*/
}



// ==== 0x0041B5E0  AircraftClass::g_var_1fa6c5  this=AircraftClass  sig=csp ====
bool __thiscall MissionClass::g_var_1fa6c5(AircraftClass *this)
{
  int currentMission; // eax

  currentMission = this->?; /*0x41b5e0*/
  return currentMission != 6 /*0x41b60a*/
      && currentMission != 21
      && (!this->AircraftClass_field_bool_6D2 || currentMission == 30)
      && this->AircraftClass_field_bool_6D4 != 0;
}



// ==== 0x0041B610  AircraftClass::PowerDrainUpdate  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::PowerDrainUpdate(AircraftClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx

  v3 = FootClass::BeginPowerUpdate((FootClass *)this, a2); /*0x41b619*/
  LOBYTE(v3) = this->HasPassengers; /*0x41b61e*/
  Power::FlagProcess((Power *)a2, v3); /*0x41b627*/
  LOBYTE(v4) = this->AircraftClass_field_bool_6D0; /*0x41b62c*/
  Power::FlagProcess((Power *)a2, v4); /*0x41b635*/
  LOBYTE(v5) = this->AircraftClass_field_bool_6D1; /*0x41b63a*/
  Power::FlagProcess((Power *)a2, v5); /*0x41b643*/
  return Power::TimerProcess(this->AircraftClass_field_char_6D3); /*0x41b657*/
}



// ==== 0x0041B660  AircraftClass::HandleTargetDestroyed  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::HandleTargetDestroyed(AircraftClass *this, int *a2, int *a3)
{
  int result; // eax

  FootClass::HandleTargetDestroyed((FootClass *)this, a2, a3); /*0x41b66e*/
  result = 0; /*0x41b679*/
  if ( (int *)this->AircraftClass_field_6CC == a2 ) /*0x41b67d*/
    this->AircraftClass_field_6CC = 0; /*0x41b67f*/
  if ( (int *)this->Type == a2 ) /*0x41b68b*/
    this->Type = 0; /*0x41b68d*/
  return result; /*0x41b693*/
}



// ==== 0x0041B6A0  TechnoClass::ComputeTeamAttackPriority  this=TechnoClass  sig=csp ====
int __stdcall TechnoClass::ComputeTeamAttackPriority(TechnoClass *this)
{
  _DWORD *v1; // edi
  int v2; // edi

  if ( *((_BYTE *)this->? + 3580) ) /*0x41b6aa*/
  {
    if ( !*((_DWORD *)this - 362) ) /*0x41b6b4*/
    {
      if ( (unsigned __int8)Team::AllMembersValid((Team *)((char *)this - 1728)) ) /*0x41b6c6*/
      {
        v1 = (_DWORD *)Array::Get((Array *)((char *)this - 1728), 0); /*0x41b6dc*/
        if ( (*(int (__thiscall **)(char *))(*((_DWORD *)this - 432) + 388))((char *)this - 1728) == 7 ) /*0x41b6e7*/
        {
          if ( v1 ) /*0x41b6eb*/
          {
            if ( (*(int (__thiscall **)(_DWORD *))(*v1 + 44))(v1) == 6 ) /*0x41b6f7*/
            {
              v2 = v1[328]; /*0x41b6f9*/
              if ( *(_BYTE *)(v2 + 5801) || *(_BYTE *)(v2 + 5835) ) /*0x41b709*/
                return 0; /*0x41b709*/
            }
          }
        }
      }
    }
  }
  if ( (!(unsigned __int8)Team::AllMembersValid((Team *)((char *)this - 1728)) || !*((_BYTE *)this->? + 3580)) /*0x41b73c*/
    && (!*((_DWORD *)this - 362) || !*((_BYTE *)this->? + 3580)) )
  {
    return 0; /*0x41b753*/
  }
  else
  {
    return 100; /*0x41b748*/
  }
}



// ==== 0x0041B760  TechnoClass::GetAutoFireDirection  this=TechnoClass  sig=csp ====
int __stdcall TechnoClass::GetAutoFireDirection(TechnoClass *this)
{
  TechnoClass *v1; // edi
  Array *v2; // esi
  int v3; // eax
  _DWORD *Value; // eax

  v1 = this; /*0x41b762*/
  v2 = (Array *)((char *)this - 1728); /*0x41b766*/
  if ( (unsigned __int8)Team::AllMembersValid((Team *)((char *)this - 1728)) ) /*0x41b76e*/
  {
    v3 = Array::Get(v2, 0); /*0x41b77b*/
    Value = ProgressTimer::GetValue((ProgressTimer *)(v3 + 904), &this); /*0x41b78b*/
    return ((unsigned int)((*Value >> 12) + 1) >> 1) & 7; /*0x41b7b4*/
  }
  if ( v1[-2].turretRotateSoundController[4] ) /*0x41b78d*/
  {
    Value = ProgressTimer::GetValue((ProgressTimer *)&v1[-1].reloadTimer[1], &this); /*0x41b7a2*/
    return ((unsigned int)((*Value >> 12) + 1) >> 1) & 7; /*0x41b7a2*/
  }
  return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 68); /*0x41b7a9*/
}



// ==== 0x0041B7D0  TechnoClass::processDamageAnimation  this=TechnoClass  sig=csp ====
BOOL __stdcall TechnoClass::processDamageAnimation(TechnoClass *this)
{
  return *((_DWORD *)this - 362) != 0; /*0x41b7e4*/
}



// ==== 0x0041B7F0  TechnoClass::HasOnlyOneGarrisonSlot  this=TechnoClass  sig=csp ====
_DWORD *__stdcall TechnoClass::HasOnlyOneGarrisonSlot(TechnoClass *this)
{
  _DWORD *result; // eax
  int v2; // eax

  result = (_DWORD *)(*(int (__thiscall **)(char *, _DWORD))(*((_DWORD *)this - 432) + 1016))((char *)this - 1728, 0); /*0x41b802*/
  if ( result ) /*0x41b80a*/
  {
    result = (_DWORD *)*result; /*0x41b80f*/
    if ( result ) /*0x41b813*/
    {
      v2 = result[40]; /*0x41b818*/
      return (_DWORD *)(*(int *)(v2 + 732) <= 1 && *(_BYTE *)(v2 + 670) == 0); /*0x41b839*/
    }
  }
  return result; /*0x41b80c*/
}



// ==== 0x0041B840  TechnoClass::updateWeaponCooldown  this=TechnoClass  sig=csp ====
BOOL __stdcall TechnoClass::updateWeaponCooldown(TechnoClass *this)
{
  return *((_BYTE *)this->? + 3598) != 0; /*0x41b854*/
}



// ==== 0x0041B860  TechnoClass::checkAmmo  this=AircraftClass  sig=csp ====
int __stdcall TechnoClass::sub_41B860(int a1)
{
  return *(unsigned __int8 *)(a1 + 18); /*0x41b869*/
}



// ==== 0x0041B870  AircraftClass::ProcessPassengerEjection  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::ProcessPassengerEjection(AircraftClass *this)
{
  if ( this->? != 30 ) /*0x41b877*/
    this->AircraftClass_field_bool_6D2 = 0; /*0x41b879*/
  return MissionClass::AdvanceState((MissionClass *)this);
}



// ==== 0x0041B900  TacticalClass::StubReturnTrue  this=TacticalClass  sig=csp ====
void __thiscall TacticalClass::StubReturnTrue(Class_7E22A4 *this)
{
  ; /*0x41b900*/
}



// ==== 0x0041B910  AircraftClass::MissionStubReturnZero  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::MissionStubReturnZero(AircraftClass *this)
{
  return (*((int (__thiscall **)(AircraftClass *))this->FootClass + 20))(this);
}



// ==== 0x0041B920  AircraftClass::IsHeightAboveThreshold  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::IsHeightAboveThreshold(AircraftClass *this)
{
  AircraftTypeClass *Type; // eax

  Type = this->Type; /*0x41b929*/
  if ( Type != *(AircraftTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1248) /*0x41b93d*/
    && Type != *(AircraftTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1300) )
  {
    return ObjectClass::IsHeightAboveThreshold_0((ObjectClass *)this); /*0x41b941*/
  }
  if ( !this->?[0] ) /*0x41b948*/
    WinAPI::Wrapper(-2147467261); /*0x41b957*/
  return (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 128))(this->?[0]) != 0; /*0x41b946*/
}



// ==== 0x0041B980  AircraftClass::IsBelowScreen  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::IsBelowScreen(AircraftClass *this)
{
  AircraftTypeClass *Type; // eax

  Type = this->Type; /*0x41b989*/
  if ( Type != *(AircraftTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1248) /*0x41b99d*/
    && Type != *(AircraftTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1300) )
  {
    return ObjectClass::IsBelowScreen((IUnknown *)this); /*0x41b9a1*/
  }
  if ( !this->?[0] ) /*0x41b9a8*/
    WinAPI::Wrapper(-2147467261); /*0x41b9b7*/
  return (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->?[0] + 128))(this->?[0]) == 0; /*0x41b9a6*/
}



// ==== 0x0041B9E0  TechnoClass::updateROFTimer  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::updateROFTimer(TechnoClass *this)
{
  return *((_BYTE *)this + 1749); /*0x41b9e6*/
}



// ==== 0x0041B9F0  AircraftClass::UpdateDocking  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::UpdateDocking(AircraftClass *this, int a2)
{
  int result; // eax

  switch ( this->? ) /*0x41ba0b*/
  {
    case 4: /*0x41ba0b*/
    case 0x1A: /*0x41ba0b*/
    case 0x1B: /*0x41ba0b*/
    case 0x1E: /*0x41ba0b*/
    case 0x1F: /*0x41ba0b*/
      if ( this->? ) /*0x41ba12*/
        goto LABEL_4; /*0x41ba1a*/
      result = a2 - 4; /*0x41ba1c*/
      switch ( a2 ) /*0x41ba2c*/
      {
        case 4: /*0x41ba2c*/
        case 26: /*0x41ba2c*/
        case 27: /*0x41ba2c*/
        case 30: /*0x41ba2c*/
        case 31: /*0x41ba2c*/
          goto LABEL_4;
        default:
          return result;
      }
    default:
LABEL_4:
      result = MissionClass::SetState((MissionClass *)this); /*0x41ba33*/
      break; /*0x41ba34*/
  }
  return result; /*0x41ba39*/
}



// ==== 0x0041BA90  AircraftClass::ProcessLanding  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::ProcessLanding(AircraftClass *this, int a2, int a3)
{
  int result; // eax

  switch ( this->? ) /*0x41baab*/
  {
    case 4: /*0x41baab*/
    case 0x1A: /*0x41baab*/
    case 0x1B: /*0x41baab*/
    case 0x1E: /*0x41baab*/
    case 0x1F: /*0x41baab*/
      if ( this->? ) /*0x41bab2*/
        goto LABEL_4; /*0x41baba*/
      result = a2 - 4; /*0x41babc*/
      switch ( a2 ) /*0x41bacc*/
      {
        case 4: /*0x41bacc*/
        case 26: /*0x41bacc*/
        case 27: /*0x41bacc*/
        case 30: /*0x41bacc*/
        case 31: /*0x41bacc*/
          goto LABEL_4;
        default:
          return result;
      }
    default:
LABEL_4:
      result = ParticleClass::MissionDispatch((MissionClass *)this); /*0x41bad3*/
      break; /*0x41bad9*/
  }
  return result; /*0x41bade*/
}



// ==== 0x0041BB30  AircraftClass::OverrideMission_SyncLog  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::OverrideMission_SyncLog(AircraftClass *this, int a2, int a3, int a4)
{
  int result; // eax

  switch ( this->? ) /*0x41bb4b*/
  {
    case 4: /*0x41bb4b*/
    case 0x1A: /*0x41bb4b*/
    case 0x1B: /*0x41bb4b*/
    case 0x1E: /*0x41bb4b*/
    case 0x1F: /*0x41bb4b*/
      if ( this->? ) /*0x41bb52*/
        goto LABEL_4; /*0x41bb5a*/
      result = a2 - 4; /*0x41bb5c*/
      switch ( a2 ) /*0x41bb6c*/
      {
        case 4: /*0x41bb6c*/
        case 26: /*0x41bb6c*/
        case 27: /*0x41bb6c*/
        case 30: /*0x41bb6c*/
        case 31: /*0x41bb6c*/
          goto LABEL_4;
        default:
          return result;
      }
    default:
LABEL_4:
      result = FootClass::OverrideMission_SyncLog((FootClass *)this, a2, a3, a4); /*0x41bb73*/
      break; /*0x41bb7e*/
  }
  return result; /*0x41bb83*/
}



// ==== 0x0041BC30  TechnoClass::CreateWarheadDamageEffect  this=TechnoClass  sig=csp ====
char __userpurge TechnoClass::CreateWarheadDamageEffect@<al>(TechnoClass *this, int a2@<ebp>, int a3, int a4)
{
  int v4; // ecx
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ebp
  int v9; // esi
  int v10; // ebx
  char *UIObjectCOM; // edi
  int *v12; // eax
  int v13; // edx
  int v14; // eax
  int *v15; // eax
  int v16; // eax
  char *v17; // edi
  int v20; // [esp+8h] [ebp-20h]
  int v21; // [esp+Ch] [ebp-1Ch]
  int v22; // [esp+10h] [ebp-18h] BYREF
  int v23; // [esp+14h] [ebp-14h] BYREF
  int v24; // [esp+18h] [ebp-10h]
  int v25; // [esp+1Ch] [ebp-Ch] BYREF
  _BYTE v26[8]; // [esp+20h] [ebp-8h] BYREF

  v5 = v4; /*0x41bc34*/
  v21 = v4; /*0x41bc36*/
  if ( !*(_BYTE *)(v4 + 1701) ) /*0x41bc3a*/
    return 0; /*0x41bdc3*/
  v6 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x41bc49*/
  if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3944) ) /*0x41bc4f*/
    v20 = *(_DWORD *)(v4 + 100); /*0x41bc5c*/
  else
    v20 = *(_DWORD *)(*(_DWORD *)(v4 + 1724) + 160); /*0x41bc6e*/
  LOWORD(v7) = Math::RoundToInt((double)v20 * *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3940)); /*0x41bc7e*/
  v8 = v7; /*0x41bc83*/
  if ( v7 < 0 ) /*0x41bc87*/
    v8 = 0; /*0x41bc89*/
  v9 = v5 - 8; /*0x41bc8f*/
  v10 = v9; /*0x41bc92*/
  if ( *(_DWORD *)(v21 + 1056) ) /*0x41bc94*/
    v10 = *(_DWORD *)(v21 + 1056); /*0x41bc9e*/
  UIObjectCOM = (char *)CreateUIObjectCOM( /*0x41bcc2*/
                          *(_DWORD *)(*(_DWORD *)(v6 + 4060) + 160),
                          v9,
                          v10,
                          v8,
                          *(_DWORD *)(v6 + 4008),
                          0,
                          1);
  v12 = (int *)(*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v9 + 72))(v9, &v25, a2); /*0x41bccb*/
  v23 = *v12; /*0x41bcd0*/
  v24 = v12[1]; /*0x41bcd9*/
  v13 = *(_DWORD *)v9; /*0x41bcdd*/
  v25 = v12[2]; /*0x41bce2*/
  v14 = (*(int (__thiscall **)(int))(v13 + 456))(v9); /*0x41bce6*/
  v25 -= v14; /*0x41bcf4*/
  if ( UIObjectCOM ) /*0x41bcf8*/
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)UIObjectCOM + 212))(UIObjectCOM); /*0x41bcfe*/
    Warhead::ApplyDamage(UIObjectCOM, &v23); /*0x41bd0b*/
    (*(void (__stdcall **)(char *))(*(_DWORD *)UIObjectCOM + 8))(UIObjectCOM); /*0x41bd13*/
  }
  if ( *(_DWORD *)(v22 + 1056) ) /*0x41bd1a*/
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 224))(v9, *(_DWORD *)(v22 + 1056)); /*0x41bd29*/
  }
  else if ( *(_DWORD *)(v22 + 1060) ) /*0x41bd31*/
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 228))(v9, *(_DWORD *)(v22 + 1060)); /*0x41bd40*/
  }
  v15 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 72))(v9, v26); /*0x41bd4f*/
  v22 = *v15; /*0x41bd56*/
  v23 = v15[1]; /*0x41bd5f*/
  v24 = v15[2]; /*0x41bd6b*/
  v16 = CreateUIObjectCOM( /*0x41bd86*/
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4060) + 160),
          v9,
          v10,
          v8,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          1);
  v17 = (char *)v16; /*0x41bd8b*/
  if ( v16 ) /*0x41bd91*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 212))(v16); /*0x41bd97*/
    Warhead::ApplyDamage(v17, &v22); /*0x41bda4*/
    (*(void (__stdcall **)(char *))(*(_DWORD *)v17 + 8))(v17); /*0x41bdac*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 248))(v9); /*0x41bdb3*/
  return 1; /*0x41bdbc*/
}



// ==== 0x0041BDD0  IUnknown::GetCoordsThunk1  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCoordsThunk1(IUnknown *this)
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(this->field_0 + 72))(this, v3); /*0x41bdde*/
  *v4 = *v1; /*0x41bde8*/
  v4[1] = v1[1]; /*0x41bded*/
  v4[2] = v1[2]; /*0x41bdf4*/
  return (int)v4; /*0x41bdf0*/
}



// ==== 0x0041BE00  IUnknown::GetCoordsThunk2  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCoordsThunk2(IUnknown *this)
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(this->field_0 + 72))(this, v3); /*0x41be0e*/
  *v4 = *v1; /*0x41be18*/
  v4[1] = v1[1]; /*0x41be1d*/
  v4[2] = v1[2]; /*0x41be24*/
  return (int)v4; /*0x41be20*/
}



// ==== 0x0041BE30  IUnknown::GetCoordsThunk3  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCoordsThunk3(IUnknown *this)
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(this->field_0 + 72))(this, v3); /*0x41be3e*/
  *v4 = *v1; /*0x41be48*/
  v4[1] = v1[1]; /*0x41be4d*/
  v4[2] = v1[2]; /*0x41be54*/
  return (int)v4; /*0x41be50*/
}



// ==== 0x0041BE60  IUnknown::LandingCheckStub  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::LandingCheckStub(IUnknown *this)
{
  return 0; /*0x41be62*/
}



// ==== 0x0041BE70  IUnknown::StubReturnFalse2  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::StubReturnFalse2(IUnknown *this)
{
  return 0; /*0x41be72*/
}



// ==== 0x0041BE80  IUnknown::CheckStateFlag  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::CheckStateFlag(IUnknown *this)
{
  int result; // eax

  return result; /*0x41be80*/
}



// ==== 0x0041BE90  IUnknown::CheckStateFlag2  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::CheckStateFlag2(IUnknown *this)
{
  int result; // eax

  return result; /*0x41be90*/
}



// ==== 0x0041BEA0  IUnknown::GetCellCoords_Alt  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCellCoords_Alt(IUnknown *this)
{
  int v2; // [esp+0h] [ebp-4h]
  _DWORD *v3; // [esp+8h] [ebp+4h]

  LOWORD(v2) = this->field_9C / 256; /*0x41beb3*/
  HIWORD(v2) = *(_DWORD *)this->__pad_A0 / 256; /*0x41beca*/
  *v3 = v2; /*0x41bed7*/
  return (int)v3; /*0x41beda*/
}



// ==== 0x0041BEE0  TechnoClass::StubReturnFalse  this=TechnoClass  sig=csp ====
char TacticalClass::StubReturnFalse(TechnoClass *this)
{
  return 0; /*0x41bee2*/
}



// ==== 0x0041BEF0  TechnoClass::selectTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::selectTarget(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x41bef0*/
  return result; /*0x41bef2*/
}



// ==== 0x0041BF00  TechnoClass::StubReturnFalse2  this=TechnoClass  sig=csp ====
int TacticalClass::StubReturnFalse2(TechnoClass *this)
{
  return 0; /*0x41bf02*/
}



// ==== 0x0041BF10  TechnoClass::StubReturnFalse3  this=TechnoClass  sig=csp ====
int TacticalClass::StubReturnFalse3(TechnoClass *this)
{
  return 0; /*0x41bf12*/
}



// ==== 0x0041BF20  TechnoClass::StubReturnFalse4  this=TechnoClass  sig=csp ====
int TacticalClass::StubReturnFalse4(TechnoClass *this)
{
  return 0; /*0x41bf22*/
}



// ==== 0x0041BF30  TechnoClass::g_var_a00e37  this=TechnoClass  sig=csp ====
int __thiscall MissionClass::g_var_a00e37(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x41bf30*/
  return result; /*0x41bf32*/
}



// ==== 0x0041BF40  TechnoClass::HasRemaining  this=TechnoClass  sig=csp ====
int __thiscall FrameTimer::HasRemaining(TechnoClass *this)
{
  int v1; // edx
  int result; // eax

  v1 = *(_DWORD *)this->__pad_18C; /*0x41bf40*/
  result = this->ironCurtainTimer[1]; /*0x41bf46*/
  if ( v1 != -1 ) /*0x41bf4f*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v1 < result ) /*0x41bf5b*/
    {
      result -= *(_DWORD *)&stru_A8EB00.?[416] - v1; /*0x41bf5d*/
      LOBYTE(result) = result > 0; /*0x41bf66*/
      return result; /*0x41bf68*/
    }
    result = 0; /*0x41bf69*/
  }
  LOBYTE(result) = result > 0; /*0x41bf72*/
  return result; /*0x41bf68*/
}



// ==== 0x0041BF80  TechnoClass::StubReturnFalse5  this=TechnoClass  sig=csp ====
int __thiscall TacticalClass::StubReturnFalse5(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x41bf80*/
  return result; /*0x41bf82*/
}



// ==== 0x0041BF90  TechnoClass::StubReturnFalse6  this=TechnoClass  sig=csp ====
int __thiscall TacticalClass::StubReturnFalse6(TechnoClass *this)
{
  int result; // eax

  return result; /*0x41bf90*/
}



// ==== 0x0041BFA0  TechnoClass::ProcessFrame  this=TechnoClass  sig=csp ====
char __thiscall TacticalClass::ProcessFrame(TechnoClass *this)
{
  return *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3233); /*0x41bfae*/
}



// ==== 0x0041BFB0  TechnoClass::StubReturnFalse7  this=TechnoClass  sig=csp ====
char TacticalClass::StubReturnFalse7(TechnoClass *this)
{
  return 0; /*0x41bfb2*/
}



// ==== 0x0041BFC0  TechnoClass::StubReturnFalse8  this=TechnoClass  sig=csp ====
int TacticalClass::StubReturnFalse8(TechnoClass *this)
{
  return 0; /*0x41bfc2*/
}



// ==== 0x0041BFD0  TechnoClass::StubReturnFalse9  this=TechnoClass  sig=csp ====
int TacticalClass::StubReturnFalse9(TechnoClass *this)
{
  return 0; /*0x41bfd2*/
}



// ==== 0x0041BFE0  TechnoClass::g_var_6a4733  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::g_var_6a4733(TechnoClass *this)
{
  int result; // eax

  return result; /*0x41bfe0*/
}



// ==== 0x0041BFF0  TechnoClass::g_var_845aa8  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::g_var_845aa8(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x41bff0*/
  return result; /*0x41bff2*/
}



// ==== 0x0041C000  TechnoClass::StubReturnTrue2  this=TechnoClass  sig=csp ====
void TacticalClass::StubReturnTrue2(TechnoClass *this)
{
  ; /*0x41c000*/
}



// ==== 0x0041C010  TechnoClass::CheckReloadState  this=TechnoClass  sig=csp ====
int __thiscall AircraftClass::CheckReloadState(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = this->isDisguisedFlag; /*0x41c010*/
  return result; /*0x41c016*/
}



// ==== 0x0041C020  TechnoClass::CheckReloadTimer  this=TechnoClass  sig=csp ====
int __thiscall AircraftClass::CheckReloadTimer(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = this->isDisguisedFlag; /*0x41c020*/
  return result; /*0x41c026*/
}



// ==== 0x0041C030  TechnoClass::CheckAction  this=TechnoClass  sig=csp ====
int __thiscall TacticalClass::CheckAction(TechnoClass *this)
{
  int result; // eax

  this->isDisguisedFlag = 0; /*0x41c030*/
  return result; /*0x41c037*/
}



// ==== 0x0041C040  TechnoClass::StubReturnFalse10  this=TechnoClass  sig=csp ====
int __thiscall TacticalClass::StubReturnFalse10(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x41c040*/
  return result; /*0x41c042*/
}



// ==== 0x0041C050  FootClass::ProcessTick  this=FootClass  sig=csp ====
BOOL __thiscall TacticalClass::ProcessTick(FootClass *this)
{
  return this->team != 0; /*0x41c05d*/
}



// ==== 0x0041C060  FootClass::g_var_3b7240  this=FootClass  sig=csp ====
char BuildingClass::g_var_3b7240(FootClass *this)
{
  return 0; /*0x41c062*/
}



// ==== 0x0041C070  FootClass::CheckDockState  this=FootClass  sig=csp ====
char __thiscall AircraftClass::CheckDockState(FootClass *this)
{
  return this->frozenStill; /*0x41c076*/
}



// ==== 0x0041C080  FootClass::g_var_d19fc3  this=FootClass  sig=csp ====
char FootClass::g_var_d19fc3(FootClass *this)
{
  return 0; /*0x41c082*/
}



// ==== 0x0041C090  FootClass::Destru_vt323  this=FootClass  sig=csp ====
int __stdcall FootClass::Destru_vt323(
        FootClass *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  return ((int (__stdcall *)(FootClass *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))loc_705E00)( /*0x41c0e5*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16);
}



// ==== 0x0041C0F0  FootClass::g_var_3c6d93  this=FootClass  sig=csp ====
void FootClass::g_var_3c6d93(FootClass *this)
{
  ; /*0x41c0f0*/
}



// ==== 0x0041C100  FootClass::StubReturnFalse  this=FootClass  sig=csp ====
void FootClass::StubReturnFalse(FootClass *this)
{
  ; /*0x41c100*/
}



// ==== 0x0041C110  FootClass::StubReturnVoid  this=FootClass  sig=csp ====
void FootClass::StubReturnVoid(FootClass *this)
{
  ; /*0x41c110*/
}



// ==== 0x0041C120  FootClass::Stub  this=FootClass  sig=csp ====
void __stdcall FootClass::Stub(FootClass *this)
{
  ; /*0x41c120*/
}



// ==== 0x0041C130  FootClass::g_var_a270fc  this=FootClass  sig=csp ====
void __stdcall FootClass::g_var_a270fc(FootClass *this, int a2)
{
  ; /*0x41c130*/
}



// ==== 0x0041C140  FootClass::g_var_122519  this=FootClass  sig=csp ====
void __stdcall FootClass::g_var_122519(FootClass *this)
{
  ; /*0x41c140*/
}



// ==== 0x0041C150  FootClass::ProcessTick2  this=FootClass  sig=csp ====
_DWORD *__thiscall TacticalClass::ProcessTick2(FootClass *this, _DWORD *a2)
{
  *a2 = this->lastJumpjetMapCoords[0]; /*0x41c15a*/
  return a2; /*0x41c15c*/
}



// ==== 0x0041C160  FootClass::ProcessTick3  this=FootClass  sig=csp ====
int __thiscall TacticalClass::ProcessTick3(FootClass *this, int a2)
{
  this->lastJumpjetMapCoords[0] = a2; /*0x41c164*/
  return a2; /*0x41c16a*/
}



// ==== 0x0041C170  AircraftClass::MissionStubReturnZero2  this=AircraftClass  sig=csp ====
int AircraftClass::MissionStubReturnZero2(AircraftClass *this)
{
  return 1752; /*0x41c175*/
}



// ==== 0x0041C180  AircraftClass::MissionStubReturnZero3  this=AircraftClass  sig=csp ====
int AircraftClass::MissionStubReturnZero3(AircraftClass *this)
{
  return 2; /*0x41c185*/
}



// ==== 0x0041C190  AircraftClass::PowerDrainProcess  this=AircraftClass  sig=csp ====
int __stdcall AircraftClass::PowerDrainProcess(AircraftClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x41c196*/
    return -2147467261; /*0x41c198*/
  *a2 = 237448642; /*0x41c1a6*/
  a2[1] = 298949647; /*0x41c1ae*/
  a2[2] = -1610610249; /*0x41c1b7*/
  a2[3] = unk_7E966C; /*0x41c1c0*/
  return 0; /*0x41c19d*/
}



// ==== 0x0041C1D0  AircraftClass::CheckMissionAbort  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::CheckMissionAbort(AircraftClass *this)
{
  return *(_DWORD *)&this->Type->TechnoTypeClass[96]; /*0x41c1d9*/
}



// ==== 0x0041C1E0  TechnoClass::GetBodyFacing  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::GetBodyFacing(TechnoClass *this, _DWORD *a2)
{
  int v2; // ecx
  TechnoClass *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x41c1e0*/
  v2 = *ProgressTimer::GetValue((ProgressTimer *)this->secondaryFacing, &v4); /*0x41c1f1*/
  *a2 = v2; /*0x41c1f7*/
  return a2; /*0x41c1fa*/
}



// ==== 0x0041C200  AircraftClass::CheckMissionFail  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::CheckMissionFail(AircraftClass *this)
{
  return (int)this->Type; /*0x41c206*/
}



// ==== 0x0041C210  AircraftClass::CheckActionStatus  this=AircraftClass  sig=csp ====
void **__thiscall AircraftClass::CheckActionStatus(AircraftClass *this, char a2)
{
  AircraftClass::Destruct(this); /*0x41c213*/
  if ( (a2 & 1) != 0 ) /*0x41c21d*/
    __3_YAXPAX_Z(this); /*0x41c220*/
  return &this->FootClass; /*0x41c22a*/
}



// ==== 0x0041C230  Coord::Subtract  this=Coord  sig=csp ====
_DWORD *__thiscall Coord::Subtract(Coord *this, int a2, int a3, int a4)
{
  *(_DWORD *)this->__pad_0 = a2; /*0x41c23a*/
  *(_DWORD *)&this->Coord_field_0x2[2] = a3; /*0x41c240*/
  this->Coord_field_0x8 = (void *)a4; /*0x41c243*/
  return this->__pad_0; /*0x41c246*/
}



// ==== 0x0041C250  ObjectClass::CreateInstanceCOM  this=ObjectClass  sig=csp ====
int __thiscall CreateInstanceCOM(ObjectClass *this, IID *rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext)
{
  int result; // eax
  HRESULT v6; // esi

  if ( this->AbstractClass ) /*0x41c254*/
    (*(void (__stdcall **)(void *))(*(_DWORD *)this->AbstractClass + 8))(this->AbstractClass); /*0x41c25d*/
  if ( (dwClsContext & 0x14) == 0 ) /*0x41c266*/
    return CoCreateInstance(rclsid, pUnkOuter, dwClsContext, &stru_817BB0, &this->AbstractClass); /*0x41c2cb*/
  result = CoCreateInstance(rclsid, pUnkOuter, dwClsContext, &riid, (LPVOID *)&pUnkOuter); /*0x41c27d*/
  if ( result >= 0 ) /*0x41c285*/
  {
    v6 = OleRun(pUnkOuter); /*0x41c292*/
    if ( v6 >= 0 ) /*0x41c296*/
      v6 = (*(int (__stdcall **)(LPUNKNOWN, IID *, ObjectClass *))pUnkOuter->field_0)(pUnkOuter, &stru_817BB0, this); /*0x41c2a7*/
    (*(void (__stdcall **)(LPUNKNOWN))(pUnkOuter->field_0 + 8))(pUnkOuter); /*0x41c2b0*/
    return v6; /*0x41c2b3*/
  }
  return result; /*0x41c2b5*/
}



// ==== 0x0041C2E0  Vector::ToFacingMath  this=Vector  sig=csp ====
int Vector::ToFacingMath(int *this, _WORD *a2)
{
  int v2; // ecx
  double v3; // st7
  double v6; // [esp+0h] [ebp-14h]
  double v7; // [esp+Ch] [ebp-8h]

  _ESI = v2; /*0x41c2e4*/
  __asm /*0x41c2e9*/
  {
    fld qword ptr [esi+8]
    fld qword ptr [esi]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+14h+var_14]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v6); /*0x41c2ff*/
  __asm { fstp [esp+14h+var_8] } /*0x41c307*/
  Math::CalcAngle(*(double *)(_ESI + 16), v7); /*0x41c31a*/
  __asm { fsub ds:dbl_7E2820 } /*0x41c31f*/
  __asm { fmul ds:dbl_7E2818 }
  *(_WORD *)this = Math::RoundToInt(v3); /*0x41c338*/
  return (int)this; /*0x41c337*/
}



// ==== 0x0041C350  Math::Hypotenuse2D  this=RecoilData  sig=csp ====
int __thiscall Math::Hypotenuse2D(int *this)
{
  return Math::Sqrt(*(double *)this * *(double *)this + *((double *)this + 1) * *((double *)this + 1)); /*0x41c36e*/
}



// ==== 0x0041C380  Coord::Length  this=Coord  sig=csp ====
__int64 __thiscall Coord::Length(Coord *this)
{
  double Coord_field_0x8; // st7
  __int64 result; // rax
  int v3; // kr00_4

  Coord_field_0x8 = (double)(int)this->Coord_field_0x8; /*0x41c380*/
  Math::Sqrt( /*0x41c3a4*/
    (double)*(int *)this->__pad_0 * (double)*(int *)this->__pad_0
  + (double)*(int *)&this->Coord_field_0x2[2] * (double)*(int *)&this->Coord_field_0x2[2]
  + Coord_field_0x8 * Coord_field_0x8);
  v3 = Math::RoundToInt(Coord_field_0x8); /*0x41c3ac*/
  WORD2(result) = HIWORD(v3); /*0x41c3ac*/
  LOWORD(result) = v3; /*0x41c3ac*/
  return result; /*0x41c3a9*/
}



// ==== 0x0041C3C0  Vector3::Magnitude  this=Vector3  sig=csp ====
int __thiscall Vector3::Magnitude(int *this)
{
  return Math::Sqrt( /*0x41c3e9*/
           *(double *)this * *(double *)this
         + *((double *)this + 1) * *((double *)this + 1)
         + *((double *)this + 2) * *((double *)this + 2));
}



// ==== 0x0041C3F0  BulletClass::NormalizeZeroVector  this=BulletClass  sig=csp ====
void __thiscall sub_41C3F0(double *this)
{
  if ( *this == 0.0 && this->ptr_8 == 0.0 && this->ptr_C == 0.0 ) /*0x41c41d*/
  {
    *(_DWORD *)this = 0; /*0x41c41f*/
    this->ptr_8 = 1079574528; /*0x41c425*/
  }
}



// ==== 0x0041C430  Function::41C430  this=RecoilData  sig=csp ====
void __thiscall Function::41C430(double *this)
{
  Math::Sqrt(*this * *this + this->u32_4 * this->u32_4); /*0x41c449*/
}



// ==== 0x0041C460  Vector2::NormalizeNonZero  this=RecoilData  sig=csp ====
int __thiscall Vector2::NormalizeNonZero(int *this)
{
  __int16 v1; // fps
  double v2; // st7
  bool v3; // c0
  char v4; // c2
  bool v5; // c3
  int result; // eax
  __int16 v7; // fps
  double v8; // st7
  bool v9; // c0
  char v10; // c2
  bool v11; // c3

  v2 = *(double *)this; /*0x41c460*/
  v3 = v2 < 0.0; /*0x41c462*/
  v4 = 0; /*0x41c462*/
  v5 = v2 == 0.0; /*0x41c462*/
  LOWORD(result) = v1; /*0x41c468*/
  if ( v2 == 0.0 ) /*0x41c46d*/
  {
    v8 = *((double *)this + 1); /*0x41c46f*/
    v9 = v8 < 0.0; /*0x41c472*/
    v10 = 0; /*0x41c472*/
    v11 = v8 == 0.0; /*0x41c472*/
    LOWORD(result) = v7; /*0x41c478*/
    if ( v8 == 0.0 ) /*0x41c47d*/
    {
      *this = 0; /*0x41c47f*/
      this->u32_4 = 1079574528; /*0x41c485*/
    }
  }
  return result; /*0x41c48c*/
}



// ==== 0x0041C490  AbstractClass::processCleanup  this=AbstractClass  sig=csp ====
char *__thiscall AbstractClass::processCleanup(AbstractClass *this, char a2)
{
  int v3; // eax
  char *v4; // ebp
  int v5; // ecx
  int v6; // eax
  void **v7; // esi
  int v8; // edi

  if ( (a2 & 2) != 0 ) /*0x41c49b*/
  {
    v3 = *((_DWORD *)this - 1); /*0x41c49d*/
    v4 = (char *)this - 4; /*0x41c4a1*/
    v5 = 3 * v3; /*0x41c4a4*/
    v6 = v3 - 1; /*0x41c4a7*/
    v7 = &this->ptr_0 + v5; /*0x41c4a8*/
    if ( v6 >= 0 ) /*0x41c4ab*/
    {
      v8 = v6 + 1; /*0x41c4ae*/
      do /*0x41c4bc*/
      {
        v7 -= 3; /*0x41c4b1*/
        nullsub_84(); /*0x41c4b6*/
        --v8; /*0x41c4bb*/
      }
      while ( v8 ); /*0x41c4bc*/
    }
    if ( (a2 & 1) != 0 ) /*0x41c4c2*/
      __3_YAXPAX_Z(v4); /*0x41c4c5*/
    return v4; /*0x41c4cd*/
  }
  else
  {
    nullsub_84(); /*0x41c4d7*/
    if ( (a2 & 1) != 0 ) /*0x41c4df*/
      __3_YAXPAX_Z(this); /*0x41c4e2*/
    return (char *)this; /*0x41c4ea*/
  }
}



// ==== 0x0041C500  BuildingTypeClass::Enqueue  this=BuildingTypeClass  sig=csp ====
char __thiscall BuildingTypeClass_Enqueue(int this, int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x41c50c*/
    return 0; /*0x41c50c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *(_DWORD *)(this + 8))); /*0x41c520*/
  if ( !v3 ) /*0x41c527*/
    return 0; /*0x41c580*/
  for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v3[v5 + 4] = v6[1] ) /*0x41c535*/
  {
    v5 = 8 * i; /*0x41c539*/
    v6 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x41c542*/
    *(_DWORD *)&v3[v5] = *v6; /*0x41c547*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x41c55b*/
  v7 = a2 + *(_DWORD *)(this + 8); /*0x41c566*/
  *(_DWORD *)this = v3; /*0x41c568*/
  *(_DWORD *)(this + 8) = v7; /*0x41c56a*/
  *(_DWORD *)(this + 16) = 0; /*0x41c56d*/
  return 1; /*0x41c574*/
}



// ==== 0x0041C590  BuildingTypeClass::Dequeue  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::Dequeue(BuildingTypeClass *this, int *a2)
{
  int result; // eax
  char *ptr_0; // edi
  int v5; // ebx
  int ptr_4; // ecx
  int v7; // esi

  result = (int)this->?; /*0x41c593*/
  if ( result ) /*0x41c598*/
  {
    if ( !LOBYTE(this->?) ) /*0x41c59e*/
    {
      qsort(this->TechnoTypeClass, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction); /*0x41c5b0*/
      this->? = 0; /*0x41c5b8*/
      LOBYTE(this->?) = 1; /*0x41c5bf*/
    }
    ptr_0 = (char *)this->TechnoTypeClass; /*0x41c5c9*/
    v5 = *a2; /*0x41c5cb*/
    ptr_4 = (int)this->?; /*0x41c5cd*/
    if ( ptr_4 <= 0 ) /*0x41c5d2*/
      return 0; /*0x41c5fe*/
    while ( 1 ) /*0x41c5db*/
    {
      v7 = *(_DWORD *)&ptr_0[8 * (ptr_4 / 2)]; /*0x41c5db*/
      if ( v7 <= v5 ) /*0x41c5e3*/
      {
        if ( v7 == v5 ) /*0x41c5e9*/
          return (int)&ptr_0[8 * (ptr_4 / 2)]; /*0x41c603*/
        ptr_0 += 8 * (ptr_4 / 2) + 8; /*0x41c5eb*/
        ptr_4 += -1 - ptr_4 / 2; /*0x41c5f3*/
      }
      else
      {
        ptr_4 /= 2; /*0x41c5e5*/
      }
      if ( ptr_4 <= 0 ) /*0x41c5f7*/
        return 0; /*0x41c5f7*/
    }
  }
  return result; /*0x41c59a*/
}



// ==== 0x0041C610  CompareFunction  this=-  sig=ida-proto ====
int __cdecl CompareFunction(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x41c620*/
  else
    return *a1 >= *a2 ? 1 : -1;
}



// ==== 0x0041C640  TechnoClass::processIdleState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::processIdleState(TechnoClass *this, int a2, void *a3, void **a4)
{
  return AircraftClass::QueryInterface((AircraftClass *)this, (AbstractClass *)(a2 - 4), a3, a4);
}



// ==== 0x0041C650  TechnoClass::processGuardState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::processGuardState(TechnoClass *this, int a2)
{
  return AircraftClass::AddRef((AircraftClass *)this, a2 - 4);
}



// ==== 0x0041C660  TechnoClass::processAttackState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::processAttackState(TechnoClass *this, int a2)
{
  return AircraftClass::Release((AircraftClass *)this, a2 - 4);
}



// ==== 0x0041C670  TechnoClass::processMoveState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::processMoveState(TechnoClass *this, int a2, void *a3, void **a4)
{
  return AircraftClass::QueryInterface((AircraftClass *)this, (AbstractClass *)(a2 - 1728), a3, a4);
}



// ==== 0x0041C680  TechnoClass::processHarvestState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::processHarvestState(TechnoClass *this, int a2)
{
  return AircraftClass::AddRef((AircraftClass *)this, a2 - 1728);
}



// ==== 0x0041C690  TechnoClass::processDeployState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::processDeployState(TechnoClass *this, int a2)
{
  return AircraftClass::Release((AircraftClass *)this, a2 - 1728);
}



// ==== 0x0041C6A0  sub_41C6A0  this=-  sig=ida-proto ====
void sub_41C6A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41c6ac*/
  dbl_889EF0 = Math::Sqrt(v0 + v0); /*0x41c6be*/
}



// ==== 0x0041C6D0  sub_41C6D0  this=-  sig=ida-proto ====
void sub_41C6D0()
{
  dbl_889F50 = dbl_889EF0 / 60.0; /*0x41c6dc*/
}



// ==== 0x0041C6F0  sub_41C6F0  this=-  sig=ida-proto ====
void sub_41C6F0()
{
  dbl_889F30 = 1.0 / dbl_889F50; /*0x41c6fc*/
}



// ==== 0x0041C710  sub_41C710  this=-  sig=ida-proto ====
void sub_41C710()
{
  dbl_889F28 = 0.0174532925199433 * 45.0; /*0x41c71c*/
}



// ==== 0x0041C730  sub_41C730  this=-  sig=ida-proto ====
void sub_41C730()
{
  dbl_889EF8 = 0.0174532925199433 * 60.0; /*0x41c73c*/
}



// ==== 0x0041C750  sub_41C750  this=-  sig=ida-proto ====
void sub_41C750()
{
  dbl_889ED0 = 0.0174532925199433 * 90.0; /*0x41c75c*/
}



// ==== 0x0041C770  sub_41C770  this=-  sig=ida-proto ====
__int64 sub_41C770()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_889ED0 - dbl_889EF8); /*0x41c782*/
  result = Math::RoundToInt(v0 * dbl_889EF0 * 0.5); /*0x41c796*/
  dword_889F58 = result; /*0x41c79b*/
  return result; /*0x41c7a0*/
}



// ==== 0x0041C7B0  sub_41C7B0  this=-  sig=ida-proto ====
void sub_41C7B0()
{
  dbl_889F00 = Math::ArcTan((double)dword_889F58 * 0.00390625); /*0x41c7c7*/
}



// ==== 0x0041C7E0  sub_41C7E0  this=-  sig=ida-proto ====
void sub_41C7E0()
{
  dbl_889F18 = Math::ArcTan((double)(2 * dword_889F58) / dbl_889EF0); /*0x41c802*/
}



// ==== 0x0041C810  sub_41C810  this=-  sig=ida-proto ====
__int64 sub_41C810()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_889F58) + 0.5); /*0x41c82b*/
  dword_889F4C = result; /*0x41c830*/
  return result; /*0x41c836*/
}



// ==== 0x0041C840  sub_41C840  this=-  sig=ida-proto ====
int sub_41C840()
{
  word_889EE8 = 0; /*0x41c842*/
  word_889EEA = 0; /*0x41c848*/
  return 0; /*0x41c84e*/
}



// ==== 0x0041C850  sub_41C850  this=-  sig=ida-proto ====
int sub_41C850()
{
  dword_889F08 = 0; /*0x41c852*/
  dword_889F0C = 0; /*0x41c857*/
  dword_889F10 = 0; /*0x41c85c*/
  return 0; /*0x41c861*/
}



// ==== 0x0041C870  sub_41C870  this=-  sig=ida-proto ====
int sub_41C870()
{
  dword_889F48 = 0; /*0x41c875*/
  dword_889F40 = 128; /*0x41c87f*/
  dword_889F44 = 128; /*0x41c884*/
  return 128; /*0x41c889*/
}



// ==== 0x0041C890  sub_41C890  this=-  sig=ida-proto ====
int sub_41C890()
{
  dword_889ED8 = 0; /*0x41c892*/
  dword_889EDC = 0; /*0x41c897*/
  dword_889EE0 = 0; /*0x41c89c*/
  dword_889EE4 = 0; /*0x41c8a1*/
  return 0; /*0x41c8a6*/
}



// ==== 0x0041C8B0  AircraftTypeClass::AircraftTypeClass  this=AircraftTypeClass  sig=csp ====
int __thiscall AircraftTypeClass::AircraftTypeClass(int this, char *Source)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  _DWORD *v6; // edx

  TechnoTypeClass::ReadINI((char *)this, Source, 4); /*0x41c8bb*/
  *(_DWORD *)(this + 3576) = -1; /*0x41c8c6*/
  *(_BYTE *)(this + 3580) = 0; /*0x41c8d0*/
  *(_BYTE *)(this + 3592) = 0; /*0x41c8d6*/
  *(_BYTE *)(this + 3593) = 0; /*0x41c8dc*/
  *(_BYTE *)(this + 3594) = 0; /*0x41c8e2*/
  *(_BYTE *)(this + 3595) = 0; /*0x41c8e8*/
  *(_BYTE *)(this + 3596) = 0; /*0x41c8ee*/
  *(_BYTE *)(this + 3597) = 0; /*0x41c8f4*/
  *(_BYTE *)(this + 3598) = 0; /*0x41c8fa*/
  *(_DWORD *)this = &AircraftTypeClass::`vftable'; /*0x41c900*/
  *(_DWORD *)(this + 4) = &AircraftTypeClass::`vftable'; /*0x41c906*/
  *(_DWORD *)(this + 8) = &AircraftTypeClass::`vftable'; /*0x41c90c*/
  *(_DWORD *)(this + 12) = &AircraftTypeClass::`vftable'; /*0x41c913*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x41c91a*/
  v3 = dword_A8B228; /*0x41c91f*/
  if ( dword_A8B228 < dword_A8B220 /*0x41c95d*/
    || (byte_A8B225 || !dword_A8B220)
    && dword_A8B22C > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8B218 + 8))(
               &dword_A8B218,
               dword_A8B220 + dword_A8B22C,
               0) == 0,
        v3 = dword_A8B228,
        !v4) )
  {
    dword_A8B228 = v3 + 1; /*0x41c962*/
    *((_DWORD *)dword_A8B21C + v3) = this; /*0x41c96c*/
    v3 = dword_A8B228; /*0x41c96f*/
  }
  v5 = 0; /*0x41c974*/
  if ( v3 <= 0 ) /*0x41c978*/
  {
LABEL_11:
    v5 = -1; /*0x41c98c*/
  }
  else
  {
    v6 = dword_A8B21C; /*0x41c97a*/
    while ( *v6 != this ) /*0x41c982*/
    {
      ++v5; /*0x41c984*/
      ++v6; /*0x41c985*/
      if ( v5 >= v3 ) /*0x41c98a*/
        goto LABEL_11; /*0x41c98a*/
    }
  }
  *(_DWORD *)(this + 3576) = v5; /*0x41c991*/
  *(_BYTE *)(this + 3384) = 1; /*0x41c997*/
  *(_BYTE *)(this + 3478) = 1; /*0x41c99d*/
  *(_BYTE *)(this + 3213) = 0; /*0x41c9a3*/
  *(_DWORD *)(this + 1816) = 32; /*0x41c9a9*/
  *(_DWORD *)(this + 3584) = 0; /*0x41c9b3*/
  *(_DWORD *)(this + 3588) = 3; /*0x41c9b9*/
  *(_BYTE *)(this + 3381) = 0; /*0x41c9c3*/
  *(_BYTE *)(this + 3382) = 0; /*0x41c9c9*/
  *(_BYTE *)(this + 3387) = 0; /*0x41c9cf*/
  *(_BYTE *)(this + 3479) = 0; /*0x41c9d5*/
  *(_BYTE *)(this + 3374) = 0; /*0x41c9db*/
  return this; /*0x41c9e3*/
}



// ==== 0x0041CAA0  TypeClass::FindByName  this=TypeClass  sig=csp ====
int __thiscall TypeClass::FindByName(TypeClass *this)
{
  int v2; // esi

  if ( !this ) /*0x41caa6*/
    return -1; /*0x41caa6*/
  v2 = 0; /*0x41caad*/
  if ( dword_A8B228 <= 0 ) /*0x41cab1*/
    return -1; /*0x41cad6*/
  while ( _strcmpi((char *)(*((_DWORD *)dword_A8B21C + v2) + 36), (char *)this) ) /*0x41caca*/
  {
    if ( ++v2 >= dword_A8B228 ) /*0x41cad4*/
      return -1; /*0x41cad4*/
  }
  return v2; /*0x41cad6*/
}



// ==== 0x0041CAF0  InitRotorArt  this=-  sig=ida-proto ====
int sub_41CAF0()
{
  int result; // eax

  dword_889F5C = SearchMIXFile(aLrotorShp, 0); /*0x41cb03*/
  result = SearchMIXFile(aRrotorShp, 0); /*0x41cb08*/
  dword_889F60 = result; /*0x41cb0d*/
  return result; /*0x41cb12*/
}



// ==== 0x0041CB20  AircraftTypeClass::ConstructAircraft  this=AircraftTypeClass  sig=csp ====
AircraftClass *__thiscall AircraftTypeClass::ConstructAircraft(AircraftTypeClass *this, IUnknown *ppv)
{
  int v2; // edi
  int v4; // eax

  v4 = __2_YAPAXI_Z(0x6D8u); /*0x41cb28*/
  if ( v4 ) /*0x41cb32*/
    return (AircraftClass *)AircraftClass::Construct(v4, v2, (int)this, ppv); /*0x41cb3c*/
  else
    return 0; /*0x41cb45*/
}



// ==== 0x0041CB50  AircraftTypeClass::g_var_3d23dc  this=AircraftTypeClass  sig=csp ====
char TechnoTypeClass::g_var_3d23dc(AircraftTypeClass *this)
{
  return 0; /*0x41cb52*/
}



// ==== 0x0041CB60  AircraftTypeClass::StubReturnFalse  this=AircraftTypeClass  sig=csp ====
char AircraftTypeClass::StubReturnFalse(AircraftTypeClass *this)
{
  return 0; /*0x41cb62*/
}



// ==== 0x0041CB70  AircraftTypeClass::CreateAircraft  this=AircraftTypeClass  sig=csp ====
int *__stdcall AircraftTypeClass::CreateAircraft(AircraftTypeClass *this)
{
  if ( (byte_889F38 & 1) == 0 ) /*0x41cb7b*/
  {
    byte_889F38 |= 1u; /*0x41cb96*/
    dword_889F20 = 0; /*0x41cb9c*/
    dword_889F24 = 2147450879; /*0x41cbb4*/
    atexit(nullsub_85); /*0x41cbba*/
  }
  return &dword_889F20; /*0x41cbc8*/
}



// ==== 0x0041CBD0  nullsub_85  this=-  sig=ida-proto ====
void __cdecl nullsub_85()
{
  ; /*0x41cbd0*/
}



// ==== 0x0041CBE0  AircraftTypeClass::GetDimensions  this=AircraftTypeClass  sig=csp ====
char __stdcall AircraftTypeClass::GetDimensions(AircraftTypeClass *this, int a2)
{
  return 0; /*0x41cbe2*/
}



// ==== 0x0041CBF0  AircraftTypeClass::g_var_773e90  this=AircraftTypeClass  sig=csp ====
_DWORD *__stdcall ObjectTypeClass::g_var_773e90(AircraftTypeClass *this)
{
  int v1; // esi

  v1 = 2 * dword_889F58; /*0x41cbfc*/
  *(_DWORD *)this->TechnoTypeClass = 256; /*0x41cc07*/
  *(_DWORD *)&this->TechnoTypeClass[4] = 256; /*0x41cc09*/
  *(_DWORD *)&this->TechnoTypeClass[8] = v1; /*0x41cc0c*/
  return this->TechnoTypeClass; /*0x41cc0f*/
}



// ==== 0x0041CC20  AircraftTypeClass::LoadTypeData  this=AircraftTypeClass  sig=csp ====
char __userpurge AircraftTypeClass::LoadTypeData@<al>(AircraftTypeClass *this, double a2@<st0>, unsigned __int8 ***a3)
{
  int v3; // ecx
  int v4; // esi
  char Bool_Overwrite; // al
  char v6; // cl
  char v7; // al
  char v8; // al
  char v9; // al
  int v10; // eax
  char v11; // al
  char v12; // cl
  char v14; // [esp-Ch] [ebp-98h]
  char v15; // [esp-Ch] [ebp-98h]
  char v16; // [esp-Ch] [ebp-98h]
  int v17; // [esp-Ch] [ebp-98h]
  unsigned __int8 ***v18; // [esp+0h] [ebp-8Ch]
  int v19; // [esp+8h] [ebp-84h]
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = v3; /*0x41cc2f*/
  INIClass::ResetSection((INIClass *)this); /*0x41cc33*/
  if ( !(unsigned __int8)ObjectTypeClass::LoadExtras((TechnoTypeClass *)this, a2, v18) ) /*0x41cc3b*/
    return 0; /*0x41cd98*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x41cc5c*/
                     (int *)this,
                     (unsigned __int8 *)(v4 + 36),
                     aLandable,
                     *(_BYTE *)(v4 + 3594));
  v6 = *(_BYTE *)(v4 + 3597); /*0x41cc61*/
  *(_BYTE *)(v4 + 3594) = Bool_Overwrite; /*0x41cc67*/
  v7 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aAirportbound, v6); /*0x41cc76*/
  v14 = *(_BYTE *)(v4 + 3598); /*0x41cc83*/
  *(_BYTE *)(v4 + 3597) = v7; /*0x41cc8a*/
  *(_BYTE *)(v4 + 3598) = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aFighter, v14); /*0x41cc95*/
  v8 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aCarryall, *(_BYTE *)(v4 + 3580)); /*0x41ccaa*/
  v15 = *(_BYTE *)(v4 + 3592); /*0x41ccbb*/
  *(_BYTE *)(v4 + 3580) = v8; /*0x41ccc7*/
  v9 = INIClass::ReadBool_Overwrite( /*0x41cccd*/
         (int *)&DSurface_ViewBounds.__pad_FC[228],
         (unsigned __int8 *)(v4 + 504),
         aRotors,
         v15);
  v16 = *(_BYTE *)(v4 + 3593); /*0x41ccdd*/
  *(_BYTE *)(v4 + 3592) = v9; /*0x41cce4*/
  *(_BYTE *)(v4 + 3593) = INIClass::ReadBool_Overwrite( /*0x41ccf9*/
                            (int *)&DSurface_ViewBounds.__pad_FC[228],
                            (unsigned __int8 *)(v4 + 504),
                            aCustomrotor,
                            v16);
  v19 = *(_DWORD *)(v4 + 3584); /*0x41cd15*/
  if ( INIClass::GetString( /*0x41cd19*/
         (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
         (unsigned __int8 *)(v4 + 504),
         aTrailer,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v10 = AnimTypeClass::FindOrCreate(Destination); /*0x41cd26*/
  }
  else
  {
    v10 = v19; /*0x41cd2d*/
  }
  v17 = *(_DWORD *)(v4 + 3588); /*0x41cd3c*/
  *(_DWORD *)(v4 + 3584) = v10; /*0x41cd43*/
  *(_DWORD *)(v4 + 3588) = INIClass::ReadInt_Overwrite( /*0x41cd4e*/
                             (bool *)&DSurface_ViewBounds.__pad_FC[228],
                             (unsigned __int8 *)(v4 + 504),
                             aSpawndelay,
                             v17);
  v11 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aFlyby, *(_BYTE *)(v4 + 3595)); /*0x41cd63*/
  v12 = *(_BYTE *)(v4 + 3596); /*0x41cd68*/
  *(_BYTE *)(v4 + 3595) = v11; /*0x41cd6e*/
  *(_BYTE *)(v4 + 3596) = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(v4 + 36), aFlyback, v12); /*0x41cd83*/
  return 1; /*0x41cd8a*/
}



// ==== 0x0041CDB0  AircraftTypeClass::PowerDrainUpdate  this=AircraftTypeClass  sig=csp ====
int __thiscall AircraftTypeClass::PowerDrainUpdate(AircraftTypeClass *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx

  v3 = BuildingTypeClass::ProcessPower((int)this, a2); /*0x41cdb9*/
  LOBYTE(v3) = this->qE08; /*0x41cdbe*/
  Power::FlagProcess((Power *)a2, v3); /*0x41cdc7*/
  LOBYTE(v4) = this->qE09; /*0x41cdcc*/
  Power::FlagProcess((Power *)a2, v4); /*0x41cdd5*/
  LOBYTE(v5) = this->qE0A; /*0x41cdda*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x41cde3*/
  LOBYTE(v6) = this->qE0D; /*0x41cde8*/
  Power::FlagProcess((Power *)a2, v6); /*0x41cdf1*/
  LOBYTE(v7) = this->qE0E; /*0x41cdf6*/
  Power::FlagProcess((Power *)a2, v7); /*0x41cdff*/
  return Power::TimerProcess(this->ArrayIndex); /*0x41ce12*/
}



// ==== 0x0041CE20  AircraftTypeClass::LoadFromINI  this=AircraftTypeClass  sig=csp ====
int __stdcall AircraftTypeClass::LoadFromINI(AircraftTypeClass *this, int a2)
{
  int result; // eax

  result = TechnoTypeClass::SaveLoad_Prefix((TechnoTypeClass *)this, a2); /*0x41ce2b*/
  if ( result >= 0 ) /*0x41ce32*/
  {
    if ( this ) /*0x41ce36*/
    {
      TechnoTypeClass::Construct((int)this, (int)&a2); /*0x41ce3f*/
      *(_DWORD *)this->TechnoTypeClass = &AircraftTypeClass::`vftable'; /*0x41ce44*/
      *(_DWORD *)&this->TechnoTypeClass[4] = &AircraftTypeClass::`vftable'; /*0x41ce4a*/
      *(_DWORD *)&this->TechnoTypeClass[8] = &AircraftTypeClass::`vftable'; /*0x41ce51*/
      *(_DWORD *)&this->TechnoTypeClass[12] = &AircraftTypeClass::`vftable'; /*0x41ce58*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 896); /*0x41ce6b*/
    VoxelAnimType::LoadAnim(this->TechnoTypeClass); /*0x41ce72*/
    ObjectTypeClass::Load2DArt(this->TechnoTypeClass); /*0x41ce79*/
    return 0; /*0x41ce7e*/
  }
  return result; /*0x41ce80*/
}



// ==== 0x0041CE90  AircraftTypeClass::SaveToINI  this=AircraftTypeClass  sig=csp ====
int __stdcall AircraftTypeClass::SaveToINI(void *a0, TechnoTypeClass *aP1, int a3)
{
  int result; // eax

  result = TechnoTypeClass::SaveLoad_Prefix_0(aP1, a0, aP1, (TechnoTypeClass *)a3); /*0x41ce9f*/
  if ( result >= 0 ) /*0x41cea6*/
    return 0; /*0x41cea8*/
  return result; /*0x41ceaa*/
}


// ==== 0x0041CEB0  AircraftTypeClass::GetClassIdentifier  this=AircraftTypeClass  sig=csp ====
int __stdcall AircraftTypeClass::GetClassIdentifier(AircraftTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x41ceb6*/
    return -2147467261; /*0x41ceb8*/
  *a2 = -1366608935; /*0x41cec6*/
  a2[1] = 298976796; /*0x41cece*/
  a2[2] = 1610654892; /*0x41ced7*/
  a2[3] = unk_7E95BC; /*0x41cee0*/
  return 0; /*0x41cebd*/
}



// ==== 0x0041CEF0  KeywordClass::FindOrCreate  this=KeywordClass  sig=csp ====
int __thiscall KeywordClass_FindOrCreate(char *Source)
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x41cf0c*/
    return 0; /*0x41cf6f*/
  v2 = 0; /*0x41cf1d*/
  if ( dword_A8B228 <= 0 ) /*0x41cf21*/
  {
LABEL_6:
    if ( __2_YAPAXI_Z(0xE10u) ) /*0x41cf4b*/
      return AircraftTypeClass::AircraftTypeClass(Source); /*0x41cf61*/
    return 0; /*0x41cf55*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_A8B21C + v2) + 36), Source) ) /*0x41cf3a*/
  {
    if ( ++v2 >= dword_A8B228 ) /*0x41cf44*/
      goto LABEL_6; /*0x41cf44*/
  }
  return *((_DWORD *)dword_A8B21C + v2); /*0x41cf5f*/
}



// ==== 0x0041CF80  ObjectTypeClass::Copy  this=ObjectTypeClass  sig=csp ====
_DWORD *__stdcall ObjectTypeClass::Copy(ObjectTypeClass *this, _DWORD *a2)
{
  this->AbstractTypeClass = (void *)*a2; /*0x41cf8d*/
  this->? = (void *)a2[1]; /*0x41cf92*/
  this->? = (void *)a2[2]; /*0x41cf99*/
  return &this->AbstractTypeClass; /*0x41cf95*/
}



// ==== 0x0041CFA0  ObjectTypeClass::GetMember41_2  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectClass::GetMember41_2(ObjectTypeClass *this)
{
  return (int)this->Image; /*0x41cfa6*/
}



// ==== 0x0041CFB0  AircraftTypeClass::GetTypeIdentifier  this=AircraftTypeClass  sig=csp ====
int AircraftTypeClass::GetTypeIdentifier(AircraftTypeClass *this)
{
  return 3; /*0x41cfb5*/
}



// ==== 0x0041CFC0  AircraftTypeClass::GetObjectSize  this=AircraftTypeClass  sig=csp ====
int AircraftTypeClass::GetObjectSize(AircraftTypeClass *this)
{
  return 3600; /*0x41cfc5*/
}



// ==== 0x0041CFD0  AircraftTypeClass::GetAuxField  this=AircraftTypeClass  sig=csp ====
int __thiscall AircraftTypeClass::GetAuxField(AircraftTypeClass *this)
{
  return this->ArrayIndex; /*0x41cfd6*/
}



// ==== 0x0041CFE0  AircraftTypeClass::ddtor  this=AircraftTypeClass  sig=csp ====
void **__thiscall AircraftTypeClass::ddtor(AircraftTypeClass *this, char a2)
{
  int v3; // eax
  AircraftTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->TechnoTypeClass = &AircraftTypeClass::`vftable'; /*0x41cfe6*/
  *(_DWORD *)&this->TechnoTypeClass[4] = &AircraftTypeClass::`vftable'; /*0x41cfec*/
  *(_DWORD *)&this->TechnoTypeClass[8] = &AircraftTypeClass::`vftable'; /*0x41cff3*/
  *(_DWORD *)&this->TechnoTypeClass[12] = &AircraftTypeClass::`vftable'; /*0x41cffa*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x41d001*/
  v5 = this; /*0x41d016*/
  v3 = (*(int (__thiscall **)(_DWORD *, AircraftTypeClass **))(dword_A8B218 + 16))(&dword_A8B218, &v5); /*0x41d01a*/
  if ( v3 != -1 && v3 < dword_A8B228 && v3 < --dword_A8B228 ) /*0x41d035*/
  {
    do /*0x41d04d*/
    {
      ++v3; /*0x41d03d*/
      *((_DWORD *)dword_A8B21C + v3 - 1) = *((_DWORD *)dword_A8B21C + v3); /*0x41d041*/
    }
    while ( v3 < dword_A8B228 ); /*0x41d04d*/
  }
  TechnoTypeClass::DTOR((int)this); /*0x41d051*/
  if ( (a2 & 1) != 0 ) /*0x41d05b*/
    __3_YAXPAX_Z(this); /*0x41d05e*/
  return (void **)this; /*0x41d068*/
}



// ==== 0x0041D070  sub_41D070  this=-  sig=ida-proto ====
void sub_41D070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41d07c*/
  dbl_889F88 = Math::Sqrt(v0 + v0); /*0x41d08e*/
}



// ==== 0x0041D0A0  sub_41D0A0  this=-  sig=ida-proto ====
void sub_41D0A0()
{
  dbl_889FF0 = dbl_889F88 / 60.0; /*0x41d0ac*/
}



// ==== 0x0041D0C0  sub_41D0C0  this=-  sig=ida-proto ====
void sub_41D0C0()
{
  dbl_889FD8 = 1.0 / dbl_889FF0; /*0x41d0cc*/
}



// ==== 0x0041D0E0  sub_41D0E0  this=-  sig=ida-proto ====
void sub_41D0E0()
{
  dbl_889FD0 = 0.0174532925199433 * 45.0; /*0x41d0ec*/
}



// ==== 0x0041D100  sub_41D100  this=-  sig=ida-proto ====
void sub_41D100()
{
  dbl_889F90 = 0.0174532925199433 * 60.0; /*0x41d10c*/
}



// ==== 0x0041D120  sub_41D120  this=-  sig=ida-proto ====
void sub_41D120()
{
  *(double *)(&g_INI_DefaultBuffer + 4) = 0.0174532925199433 * 90.0; /*0x41d12c*/
}



// ==== 0x0041D140  sub_41D140  this=-  sig=ida-proto ====
__int64 sub_41D140()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(*(double *)(&g_INI_DefaultBuffer + 4) - dbl_889F90); /*0x41d152*/
  result = Math::RoundToInt(v0 * dbl_889F88 * 0.5); /*0x41d166*/
  dword_889FF8 = result; /*0x41d16b*/
  return result; /*0x41d170*/
}



// ==== 0x0041D180  sub_41D180  this=-  sig=ida-proto ====
void sub_41D180()
{
  dbl_889F98 = Math::ArcTan((double)dword_889FF8 * 0.00390625); /*0x41d197*/
}



// ==== 0x0041D1B0  sub_41D1B0  this=-  sig=ida-proto ====
void sub_41D1B0()
{
  dbl_889FB0 = Math::ArcTan((double)(2 * dword_889FF8) / dbl_889F88); /*0x41d1d2*/
}



// ==== 0x0041D1E0  sub_41D1E0  this=-  sig=ida-proto ====
__int64 sub_41D1E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_889FF8) + 0.5); /*0x41d1fb*/
  dword_889FEC = result; /*0x41d200*/
  return result; /*0x41d206*/
}



// ==== 0x0041D210  sub_41D210  this=-  sig=ida-proto ====
int sub_41D210()
{
  *((_DWORD *)&g_INI_DefaultBuffer + 7) = 0; /*0x41d212*/
  return 0; /*0x41d21e*/
}



// ==== 0x0041D220  sub_41D220  this=-  sig=ida-proto ====
int sub_41D220()
{
  dword_889FA0 = 0; /*0x41d222*/
  dword_889FA4 = 0; /*0x41d227*/
  dword_889FA8 = 0; /*0x41d22c*/
  return 0; /*0x41d231*/
}



// ==== 0x0041D240  sub_41D240  this=-  sig=ida-proto ====
int sub_41D240()
{
  dword_889FE8 = 0; /*0x41d245*/
  dword_889FE0 = 128; /*0x41d24f*/
  dword_889FE4 = 128; /*0x41d254*/
  return 128; /*0x41d259*/
}



// ==== 0x0041D260  sub_41D260  this=-  sig=ida-proto ====
int sub_41D260()
{
  *(_QWORD *)(&g_INI_DefaultBuffer + 12) = 0; /*0x41d262*/
  *(_QWORD *)(&g_INI_DefaultBuffer + 20) = 0; /*0x41d26c*/
  return 0; /*0x41d276*/
}



// ==== 0x0041D280  sub_41D280  this=-  sig=ida-proto ====
int sub_41D280()
{
  dword_889FBC = 0; /*0x41d287*/
  dword_889FC0 = 0; /*0x41d28c*/
  byte_889FC4 = 1; /*0x41d291*/
  byte_889FC5 = 0; /*0x41d298*/
  dword_889FB8 = (int)&DynamicVectorClass<AirstrikeClass *>::`vftable'; /*0x41d29d*/
  dword_889FCC = 10; /*0x41d2a7*/
  dword_889FC8 = 0; /*0x41d2b1*/
  return atexit(sub_41D2C0); /*0x41d2bc*/
}



// ==== 0x0041D2C0  sub_41D2C0  this=-  sig=ida-proto ====
void __cdecl sub_41D2C0()
{
  dword_889FB8 = (int)&VectorClass<AirstrikeClass *>::`vftable'; /*0x41d2c8*/
  if ( dword_889FBC && byte_889FC5 ) /*0x41d2dc*/
  {
    __3_YAXPAX_Z(dword_889FBC); /*0x41d2df*/
    dword_889FBC = 0; /*0x41d2e7*/
  }
  byte_889FC5 = 0; /*0x41d2ed*/
  dword_889FC0 = 0; /*0x41d2f3*/
}



// ==== 0x0041D300  AbstractClass::Create  this=AirstrikeClass  sig=csp ====
AbstractClass *__thiscall AbstractClass::Create(AbstractClass *this)
{
  int v2; // eax

  AbstractClass::Constructor(this); /*0x41d303*/
  this->ptr_0 = &AirstrikeClass::`vftable'; /*0x41d308*/
  this->ptr_4 = &AirstrikeClass::`vftable'; /*0x41d30e*/
  this->ptr_8 = &AirstrikeClass::`vftable'; /*0x41d315*/
  this->ptr_C = &AirstrikeClass::`vftable'; /*0x41d31c*/
  if ( dword_889FC8 < dword_889FC0 /*0x41d359*/
    || (byte_889FC5 || !dword_889FC0)
    && dword_889FCC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_889FB8 + 8))(
         &dword_889FB8,
         dword_889FC0 + dword_889FCC,
         0) )
  {
    v2 = dword_889FC8++; /*0x41d366*/
    *((_DWORD *)dword_889FBC + v2) = this; /*0x41d375*/
  }
  return this; /*0x41d37a*/
}



// ==== 0x0041D380  AirstrikeClass::AirstrikeClass  this=AirstrikeClass  sig=csp ====
int __thiscall AirstrikeClass::AirstrikeClass(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x41d384*/
  *(_DWORD *)this = &AirstrikeClass::`vftable'; /*0x41d389*/
  *(_DWORD *)(this + 4) = &AirstrikeClass::`vftable'; /*0x41d38f*/
  *(_DWORD *)(this + 8) = &AirstrikeClass::`vftable'; /*0x41d396*/
  *(_DWORD *)(this + 12) = &AirstrikeClass::`vftable'; /*0x41d39d*/
  if ( dword_889FC8 < dword_889FC0 /*0x41d3d9*/
    || (byte_889FC5 || !dword_889FC0)
    && dword_889FCC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_889FB8 + 8))(
         &dword_889FB8,
         dword_889FC0 + dword_889FCC,
         0) )
  {
    v3 = dword_889FC8++; /*0x41d3e6*/
    *((_DWORD *)dword_889FBC + v3) = this; /*0x41d3f5*/
  }
  *(_BYTE *)(this + 60) = 0; /*0x41d3fc*/
  *(_DWORD *)(this + 76) = a2; /*0x41d3ff*/
  *(_BYTE *)(this + 61) = 0; /*0x41d402*/
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2); /*0x41d407*/
  v5 = *(_DWORD *)(this + 76); /*0x41d413*/
  *(_DWORD *)(this + 36) = *(_DWORD *)(v4 + 1564); /*0x41d416*/
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5); /*0x41d41b*/
  v7 = *(_DWORD *)(this + 76); /*0x41d427*/
  *(_DWORD *)(this + 40) = *(_DWORD *)(v6 + 1568); /*0x41d42a*/
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 132))(v7); /*0x41d42f*/
  v9 = *(_DWORD *)(this + 76); /*0x41d43b*/
  *(_DWORD *)(this + 68) = *(_DWORD *)(v8 + 1580); /*0x41d43e*/
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 132))(v9); /*0x41d443*/
  v11 = *(_DWORD *)(this + 76); /*0x41d44f*/
  *(_DWORD *)(this + 72) = *(_DWORD *)(v10 + 1584); /*0x41d452*/
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 132))(v11); /*0x41d457*/
  v13 = *(_DWORD *)(this + 76); /*0x41d463*/
  *(_DWORD *)(this + 84) = *(_DWORD *)(v12 + 1572); /*0x41d466*/
  v14 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 1576); /*0x41d471*/
  *(_DWORD *)(this + 92) = 0; /*0x41d477*/
  *(_DWORD *)(this + 88) = v14; /*0x41d47a*/
  *(_DWORD *)(this + 80) = 0; /*0x41d47d*/
  return this; /*0x41d482*/
}



// ==== 0x0041D540  ObjectClass::CleanupAirstrikeTarget  this=WTFMode  sig=csp ====
char __thiscall ObjectClass::CleanupAirstrikeTarget(int this, int a2)
{
  int v3; // ebp
  int v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  int i; // eax
  int j; // esi
  _DWORD v10[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( byte_A8E9A0 )
  {
    if ( a2 )
    {
      v3 = (*(_BYTE *)(a2 + 20) & 4) != 0 ? a2 : 0;
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ? a2 : 0;
    }
    else
    {
      v3 = 0; /*0x41d560*/
      v4 = 0; /*0x41d562*/
    }
    v5 = *(_DWORD *)(this + 76); /*0x41d585*/
    if ( a2 == v5 )
    {
      if ( *(_BYTE *)(this + 61) /*0x41d5a5*/
        && v5
        && *(_DWORD *)(this + 92)
        && (unsigned __int8)House::IsHumanPlayer(*(House **)(v5 + 540)) )
      {
        v6 = (_DWORD *)(*(_DWORD *)(this + 92) + 156); /*0x41d5b2*/
        v10[0] = *v6; /*0x41d5b9*/
        v10[1] = v6[1]; /*0x41d5c6*/
        v10[2] = v6[2]; /*0x41d5d1*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 604), v10, 0); /*0x41d5db*/
      }
      WTFMode::ResetUnitFlags((WTFMode *)this); /*0x41d5e2*/
      for ( i = *(_DWORD *)(this + 92); i; i = *(_DWORD *)(this + 92) ) /*0x41d5ec*/
        AirstrikeClass::RemoveAircraft((int *)this, i); /*0x41d5f1*/
      v4 = *(_DWORD *)(this + 80); /*0x41d5fd*/
      if ( v4 && (*(_BYTE *)(v4 + 20) & 1) != 0 )
      {
        v4 = (*(_BYTE *)(v4 + 20) & 1) != 0 ? v4 : 0;
        *(_DWORD *)(v4 + 660) = 0; /*0x41d62e*/
      }
      *(_DWORD *)(this + 80) = 0; /*0x41d634*/
    }
    else if ( v3 && *(_DWORD *)(v3 + 660) == this ) /*0x41d64a*/
    {
      LOBYTE(v4) = AirstrikeClass::RemoveAircraft((int *)this, v3); /*0x41d64f*/
    }
    else if ( v4 && *(_DWORD *)(v4 + 660) == this && (*(int *)(v4 + 108) <= 0 || !*(_BYTE *)(v4 + 144)) ) /*0x41d66e*/
    {
      LOBYTE(v4) = WTFMode::ResetUnitFlags((WTFMode *)this); /*0x41d678*/
    }
  }
  else
  {
    LOBYTE(v4) = a2; /*0x41d686*/
    if ( a2 == *(_DWORD *)(this + 76) ) /*0x41d68f*/
    {
      for ( j = *(_DWORD *)(this + 92); j; j = *(_DWORD *)(j + 1496) ) /*0x41d696*/
        *(_DWORD *)(j + 660) = 0; /*0x41d698*/
    }
    else if ( a2 && (*(_BYTE *)(a2 + 20) & 4) != 0 && *(_DWORD *)(a2 + 660) == this ) /*0x41d6c1*/
    {
      LOBYTE(v4) = AirstrikeClass::RemoveAircraft((int *)this, a2); /*0x41d6c6*/
    }
  }
  return v4; /*0x41d619*/
}



// ==== 0x0041D6E0  AirstrikeClass::Stat  this=AirstrikeClass  sig=csp ====
int __thiscall AirstrikeClass::Stat(AirstrikeClass *this, int a2)
{
  return AbstractClass::ProcessPower((AbstractClass *)this); /*0x41d6ea*/
}



// ==== 0x0041D6F0  AirstrikeClass::Write  this=AirstrikeClass  sig=csp ====
int __stdcall AirstrikeClass::Write(AirstrikeClass *this, int a2)
{
  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x41d701*/
  if ( Prefix_0 >= 0 ) /*0x41d705*/
  {
    if ( this ) /*0x41d709*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x41d712*/
      this->AbstractClass = &AirstrikeClass::`vftable'; /*0x41d717*/
      this->? = &AirstrikeClass::`vftable'; /*0x41d71d*/
      this->? = &AirstrikeClass::`vftable'; /*0x41d724*/
      this->? = &AirstrikeClass::`vftable'; /*0x41d72b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->owner); /*0x41d73b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->AirstrikeClass_field_50); /*0x41d749*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->AirstrikeClass_field_54); /*0x41d757*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->AirstrikeClass_field_58); /*0x41d765*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->AirstrikeClass_field_5C); /*0x41d773*/
  }
  return Prefix_0; /*0x41d77a*/
}



// ==== 0x0041D780  AirstrikeClass::Seek  this=AirstrikeClass  sig=csp ====
int __stdcall AirstrikeClass::Seek(AirstrikeClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x41d794*/
}



// ==== 0x0041D7A0  AirstrikeClass::ddtor  this=AirstrikeClass  sig=csp ====
int __stdcall AirstrikeClass::ddtor(AirstrikeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x41d7a6*/
    return -2147467261; /*0x41d7a8*/
  *a2 = 1893611809; /*0x41d7b6*/
  a2[1] = 299179558; /*0x41d7be*/
  a2[2] = -1610574449; /*0x41d7c7*/
  a2[3] = unk_7E98EC; /*0x41d7d0*/
  return 0; /*0x41d7ad*/
}



// ==== 0x0041D7E0  Warhead::GetWarheadSound  this=Warhead  sig=csp ====
bool __thiscall Warhead::GetWarheadSound(bool *this, int a2)
{
  int v3; // eax

  if ( (unsigned __int8)Audio::IsLoud((int *)(this->q013 + 336)) ) /*0x41d7ec*/
    v3 = this->q048; /*0x41d7f5*/
  else
    v3 = this->q044; /*0x41d7fa*/
  return !this->u8_3C && v3 + this->u32_10 <= (int)dword_A8ED84 || a2 != this->u32_14; /*0x41d814*/
}



// ==== 0x0041D830  AirstrikeClass::StartMission  this=AirstrikeClass  sig=csp ====
char __thiscall AirstrikeClass::StartMission(int this, int *a2)
{
  char result; // al

  result = (char)a2; /*0x41d835*/
  if ( !*(_BYTE *)(this + 60) ) /*0x41d830*/
    return AirstrikeClass::SpawnAircraft(this, a2); /*0x41d83c*/
  if ( a2 != *(int **)(this + 80) ) /*0x41d847*/
    return AirstrikeClass::ReassignTarget(this, (int)a2); /*0x41d84a*/
  return result; /*0x41d841*/
}



// ==== 0x0041D860  AirstrikeClass::SpawnAircraft  this=AirstrikeClass  sig=csp ====
int __thiscall sub_41D860(int this, int *a2)
{
  int v3; // eax
  int v4; // ebp
  int v5; // ebx
  _DWORD *v7; // eax
  void *v8; // eax
  unsigned int *v9; // eax
  int result; // eax
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [esp-14h] [ebp-38h]
  int v15; // [esp-Ch] [ebp-30h]
  int v16; // [esp+10h] [ebp-14h] BYREF
  int v17; // [esp+14h] [ebp-10h]
  _DWORD v18[3]; // [esp+18h] [ebp-Ch] BYREF
  int v19; // [esp+28h] [ebp+4h]

  v3 = *(_DWORD *)(this + 84); /*0x41d869*/
  *(_BYTE *)(this + 60) = 1; /*0x41d86c*/
  *(_BYTE *)(this + 61) = 1; /*0x41d870*/
  *(_DWORD *)(this + 52) = 0; /*0x41d874*/
  v4 = *(_DWORD *)(v3 + 3576); /*0x41d881*/
  v17 = *(_DWORD *)(*(_DWORD *)dword_8871E0->? + 3576); /*0x41d895*/
  if ( Audio::IsLoud((float *)(*(_DWORD *)(this + 76) + 336)) ) /*0x41d8a2*/
  {
    v5 = *(_DWORD *)(this + 40); /*0x41d8ae*/
    v4 = *(_DWORD *)(*(_DWORD *)(this + 88) + 3576); /*0x41d8b1*/
  }
  else
  {
    v5 = *(_DWORD *)(this + 36); /*0x41d8b9*/
  }
  v7 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*a2 + 72))(a2, v18); /*0x41d8c9*/
  LOWORD(v19) = *v7 / 256; /*0x41d8dc*/
  HIWORD(v19) = v7[1] / 256; /*0x41d8f5*/
  v16 = v19; /*0x41d902*/
  v8 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v16); /*0x41d907*/
  v15 = v17; /*0x41d916*/
  v14 = (int)v8; /*0x41d919*/
  v9 = (unsigned int *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 76) + 60))(*(_DWORD *)(this + 76)); /*0x41d91f*/
  result = PlaceAircraftOnMap(v9, v4, v5, 1, v14, 0, v15, 0, this); /*0x41d926*/
  *(_DWORD *)(this + 44) = result; /*0x41d92d*/
  *(_DWORD *)(this + 48) = result; /*0x41d930*/
  if ( result ) /*0x41d933*/
  {
    result = *(_DWORD *)(this + 92); /*0x41d939*/
    if ( result ) /*0x41d93e*/
    {
      v11 = (_DWORD *)(result + 156); /*0x41d940*/
      v18[0] = *v11; /*0x41d949*/
      v18[1] = v11[1]; /*0x41d956*/
      v18[2] = v11[2]; /*0x41d961*/
      result = StartAudioControllerAt(dword_8871E0->?, (int)v18, 0); /*0x41d96b*/
    }
    *(_DWORD *)(this + 80) = a2; /*0x41d972*/
    if ( a2 ) /*0x41d975*/
    {
      result = (*(int (__thiscall **)(int *))(*a2 + 44))(a2); /*0x41d97f*/
      if ( result == 6 ) /*0x41d985*/
      {
        v12 = *a2; /*0x41d98b*/
        a2[165] = this; /*0x41d994*/
        (*(void (__thiscall **)(int *, int))(v12 + 348))(a2, 100000); /*0x41d99a*/
        *((_BYTE *)a2 + 1784) = *((_BYTE *)&dword_8871E0[1].?[12] + 2 * dword_8871E0[1].?[10] + dword_8871E0[1].?[10]); /*0x41d9b8*/
        *((_BYTE *)a2 + 1785) = *((_BYTE *)&dword_8871E0[1].?[12] + 2 * dword_8871E0[1].?[10] /*0x41d9d5*/
                                                                  + dword_8871E0[1].?[10]
                                                                  + 1);
        v13 = *a2; /*0x41d9f1*/
        *((_BYTE *)a2 + 1786) = *((_BYTE *)&dword_8871E0[1].?[12] + 2 * dword_8871E0[1].?[10] /*0x41d9f5*/
                                                                  + dword_8871E0[1].?[10]
                                                                  + 2);
        a2[447] = 1; /*0x41d9fb*/
        return (*(int (__thiscall **)(int *, int))(v13 + 292))(a2, 2); /*0x41da05*/
      }
    }
  }
  return result; /*0x41da0b*/
}



// ==== 0x0041DA20  AirstrikeClass::ReassignTarget  this=WTFMode  sig=csp ====
char __thiscall AirstrikeClass::ReassignTarget(int this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  _DWORD *v7; // edi
  int v8; // eax
  _DWORD *v9; // esi
  int v10; // eax
  int v11; // eax
  int *v12; // esi
  int v13; // edi

  v3 = *(_DWORD *)(this + 92); /*0x41da26*/
  if ( v3 && (v4 = *(_DWORD *)(v3 + 1496)) != 0 )
  {
    v5 = *(_DWORD *)(v3 + 764); /*0x41da37*/
    while ( *(_DWORD *)(v4 + 764) == v5 ) /*0x41da43*/
    {
      v4 = *(_DWORD *)(v4 + 1496); /*0x41da45*/
      if ( !v4 ) /*0x41da4d*/
        goto LABEL_6; /*0x41da4d*/
    }
    LOBYTE(v8) = WTFMode::ResetUnitFlags((WTFMode *)this); /*0x41da5c*/
  }
  else
  {
LABEL_6:
    v6 = *(_DWORD *)(this + 80); /*0x41da4f*/
    if ( v6 )
      v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 44))(*(_DWORD *)(this + 80)) == 6 ? (_DWORD *)v6 : 0;
    else
      v7 = 0; /*0x41da56*/
    if ( a2 )
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 6 ? (_DWORD *)a2 : 0;
    else
      v9 = 0; /*0x41da84*/
    if ( v7 ) /*0x41da9e*/
    {
      v10 = *v7; /*0x41daa0*/
      v7[165] = 0; /*0x41daa4*/
      (*(void (__thiscall **)(_DWORD *))(v10 + 344))(v7); /*0x41daae*/
      (*(void (__thiscall **)(_DWORD *, int))(*v7 + 292))(v7, 2); /*0x41daba*/
    }
    *(_DWORD *)(this + 80) = 0; /*0x41dac2*/
    if ( v9 ) /*0x41dac9*/
    {
      v11 = *v9; /*0x41dacb*/
      v9[165] = this; /*0x41dad4*/
      (*(void (__thiscall **)(_DWORD *, int))(v11 + 348))(v9, 100000); /*0x41dada*/
      (*(void (__thiscall **)(_DWORD *, int))(*v9 + 292))(v9, 2); /*0x41dae6*/
    }
    v8 = *(_DWORD *)(this + 48); /*0x41daec*/
    v12 = *(int **)(this + 92); /*0x41daef*/
    v13 = 0; /*0x41daf2*/
    for ( *(_DWORD *)(this + 80) = a2; v13 < v8; ++v13 ) /*0x41daf9*/
    {
      if ( v12 ) /*0x41dafd*/
      {
        if ( v12[191] > 0 ) /*0x41db07*/
        {
          (*(void (__thiscall **)(int *, int))(*v12 + 968))(v12, a2); /*0x41db0e*/
          (*(void (__thiscall **)(int *, int, _DWORD))(*v12 + 488))(v12, 1, 0); /*0x41db1c*/
          *(_BYTE *)(this + 61) = 1; /*0x41db22*/
        }
        v12 = (int *)v12[374]; /*0x41db26*/
      }
      v8 = *(_DWORD *)(this + 48); /*0x41db2c*/
    }
  }
  return v8; /*0x41da61*/
}



// ==== 0x0041DB40  WTFMode::ResetUnitFlags  this=WTFMode  sig=csp ====
char __thiscall WTFMode::ResetUnitFlags(WTFMode *this)
{
  WTFMode *v1; // eax
  int v3; // ecx
  _DWORD *v4; // esi
  int v5; // edi
  _DWORD *v6; // esi
  WTFMode *v7; // edx
  WTFMode **v8; // ecx
  int v9; // edi

  LOBYTE(v1) = byte_A8E9A0; /*0x41db40*/
  if ( byte_A8E9A0 ) /*0x41db4d*/
  {
    v3 = this->q05C; /*0x41db53*/
    v1 = (WTFMode *)this->q05C; /*0x41db56*/
    if ( v1 ) /*0x41db5a*/
    {
      while ( *(_DWORD *)&v1[764] ) /*0x41db62*/
      {
        v1 = *(WTFMode **)&v1[1496]; /*0x41db64*/
        if ( !v1 ) /*0x41db6c*/
          goto LABEL_8; /*0x41db6c*/
      }
      v1 = (WTFMode *)this->q05C; /*0x41db74*/
      if ( v3 ) /*0x41db78*/
      {
        do /*0x41db88*/
        {
          *(_DWORD *)&v1[764] = 0; /*0x41db7a*/
          v1 = *(WTFMode **)&v1[1496]; /*0x41db80*/
        }
        while ( v1 ); /*0x41db88*/
      }
    }
LABEL_8:
    v4 = (_DWORD *)this->q05C; /*0x41db8a*/
    v5 = 0; /*0x41db8f*/
    if ( v4 ) /*0x41db93*/
    {
      do /*0x41dbc8*/
      {
        (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 488))(v4, 4, 0); /*0x41db9c*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v4 + 968))(v4, 0); /*0x41dba7*/
        LOBYTE(v1) = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v4 + 1152))(v4, 0, 1); /*0x41dbb4*/
        v4 = (_DWORD *)v4[374]; /*0x41dbba*/
        ++v5; /*0x41dbc0*/
      }
      while ( v5 <= 100 && v4 ); /*0x41dbc8*/
    }
    v6 = (_DWORD *)this->q050; /*0x41dbca*/
    this->u8_3D = 0; /*0x41dbcd*/
    if ( v6 ) /*0x41dbd2*/
    {
      v1 = (WTFMode *)(*(int (__thiscall **)(_DWORD *))(*v6 + 44))(v6); /*0x41dbd8*/
      if ( v1 == (WTFMode *)6 && (WTFMode *)v6[165] == this ) /*0x41dbe6*/
      {
        LOBYTE(v1) = dword_889FC8; /*0x41dbe8*/
        v7 = 0; /*0x41dbed*/
        if ( dword_889FC8 > 0 ) /*0x41dbf1*/
        {
          v8 = (WTFMode **)dword_889FBC; /*0x41dbf3*/
          v9 = dword_889FC8; /*0x41dbf9*/
          do /*0x41dc0c*/
          {
            v1 = *v8; /*0x41dbfb*/
            if ( *v8 != this && *(_DWORD **)&v1[80] == v6 ) /*0x41dc04*/
              v7 = *v8; /*0x41dc06*/
            ++v8; /*0x41dc08*/
            --v9; /*0x41dc0b*/
          }
          while ( v9 ); /*0x41dc0c*/
        }
        v6[165] = v7; /*0x41dc10*/
        if ( !v7 && byte_A8E9A0 ) /*0x41dc1e*/
          LOBYTE(v1) = (*(int (__thiscall **)(_DWORD *, int))(*v6 + 292))(v6, 2); /*0x41dc26*/
        if ( (WTFMode *)v6[165] == this ) /*0x41dc32*/
          v6[165] = 0; /*0x41dc34*/
      }
    }
    this->q050 = 0; /*0x41dc3b*/
  }
  return (char)v1; /*0x41dc3f*/
}



// ==== 0x0041DC50  AirstrikeClass::StubReturnFalse  this=AirstrikeClass  sig=csp ====
void AirstrikeClass::StubReturnFalse(AirstrikeClass *this)
{
  ; /*0x41dc50*/
}



// ==== 0x0041DC80  AirstrikeClass::RemoveAircraft  this=WTFMode  sig=csp ====
int __thiscall AirstrikeClass::RemoveAircraft(int *this, int a2)
{
  int result; // eax
  int v3; // edi
  wchar_t *v4; // edx

  result = this->q05C; /*0x41dc80*/
  v3 = 0; /*0x41dc8c*/
  if ( result == a2 ) /*0x41dc90*/
  {
    this->q05C = *(_DWORD *)(a2 + 1496); /*0x41dc98*/
    *(_DWORD *)(a2 + 1496) = 0; /*0x41dc9b*/
    result = this->u32_30 - 1; /*0x41dca4*/
    this->u32_30 = result; /*0x41dca5*/
    *(_DWORD *)(a2 + 660) = 0; /*0x41dca8*/
  }
  else if ( result ) /*0x41dcb2*/
  {
    do /*0x41dceb*/
    {
      if ( *(_DWORD *)(result + 1496) == a2 ) /*0x41dcbc*/
      {
        *(_DWORD *)(result + 1496) = *(_DWORD *)(a2 + 1496); /*0x41dcc4*/
        *(_DWORD *)(a2 + 1496) = 0; /*0x41dcca*/
        result = 0; /*0x41dcd3*/
        --this->u32_30; /*0x41dcd6*/
        *(_DWORD *)(a2 + 660) = 0; /*0x41dcd9*/
      }
      else
      {
        result = *(_DWORD *)(result + 1496); /*0x41dce1*/
      }
      ++v3; /*0x41dce3*/
    }
    while ( v3 <= 100 && result ); /*0x41dceb*/
  }
  if ( this->u32_30 <= 0 ) /*0x41dcf0*/
  {
    v4 = dword_A8ED84; /*0x41dcf2*/
    this->u32_3C = 0; /*0x41dcf8*/
    this->q040 = (int)v4; /*0x41dcfb*/
    this->u8_3D = 0; /*0x41dcfe*/
  }
  return result; /*0x41dd01*/
}



// ==== 0x0041DD10  ObjectClass::method_41DD10  this=ObjectClass  sig=csp ====
char __thiscall sub_41DD10(ObjectClass *this)
{
  this->ambientSoundController[1] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x41dd15*/
  LOBYTE(this->ambientSoundController[0]) = 0; /*0x41dd1a*/
  BYTE1(this->ambientSoundController[0]) = 0; /*0x41dd1d*/
  return 0; /*0x41dd20*/
}



// ==== 0x0041DD30  AirstrikeClass::StubReturn96  this=AirstrikeClass  sig=csp ====
int AirstrikeClass::StubReturn96(AirstrikeClass *this)
{
  return 96; /*0x41dd35*/
}



// ==== 0x0041DD40  AirstrikeClass::StubReturn71  this=AirstrikeClass  sig=csp ====
int AirstrikeClass::StubReturn71(AirstrikeClass *this)
{
  return 71; /*0x41dd45*/
}



// ==== 0x0041DD50  AirstrikeClass::CopyTo  this=AirstrikeClass  sig=csp ====
_DWORD *__thiscall AirstrikeClass::CopyTo(AirstrikeClass *this, char a2)
{
  int v3; // eax
  AirstrikeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &AirstrikeClass::`vftable'; /*0x41dd5d*/
  this->? = &AirstrikeClass::`vftable'; /*0x41dd63*/
  this->? = &AirstrikeClass::`vftable'; /*0x41dd6a*/
  this->? = &AirstrikeClass::`vftable'; /*0x41dd71*/
  v5 = this; /*0x41dd7f*/
  v3 = (*(int (__thiscall **)(int *, AirstrikeClass **))(dword_889FB8 + 16))(&dword_889FB8, &v5); /*0x41dd83*/
  if ( v3 != -1 && v3 < dword_889FC8 && v3 < --dword_889FC8 ) /*0x41dd9e*/
  {
    do /*0x41ddb6*/
    {
      ++v3; /*0x41dda6*/
      *((_DWORD *)dword_889FBC + v3 - 1) = *((_DWORD *)dword_889FBC + v3); /*0x41ddaa*/
    }
    while ( v3 < dword_889FC8 ); /*0x41ddb6*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x41ddba*/
  if ( (a2 & 1) != 0 ) /*0x41ddc4*/
    __3_YAXPAX_Z(this); /*0x41ddc7*/
  return &this->AbstractClass; /*0x41ddd1*/
}



// ==== 0x0041DDE0  _DynamicVectorClass_PAVAirstrikeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_AirstrikeClass::Destroy(_DynamicVectorClass_PAVAirstrikeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x41dde6*/
  this->m_10 = 0; /*0x41dde9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x41ddf0*/
  {
    __3_YAXPAX_Z(v2); /*0x41ddf6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x41ddfe*/
  }
  BYTE1(this->m_C) = 0; /*0x41de01*/
  this->m_8 = 0; /*0x41de04*/
}



// ==== 0x0041DE10  _DynamicVectorClass_PAVAirstrikeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AirstrikeClass::GetItemIndex(
        _DynamicVectorClass_PAVAirstrikeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x41de10*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x41de25*/
  else
    return 0; /*0x41de17*/
}



// ==== 0x0041DE30  _VectorClass_PAVAirstrikeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AirstrikeClass::Get(_VectorClass_PAVAirstrikeClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x41de3a*/
}



// ==== 0x0041DE40  _VectorClass_PAVAirstrikeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AirstrikeClass::Add(_VectorClass_PAVAirstrikeClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x41de42*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x41de4d*/
  {
    v3 = 0; /*0x41de4f*/
    if ( m_8 <= 0 ) /*0x41de53*/
      return 1; /*0x41de73*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x41de55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x41de5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x41de64*/
    {
      ++v3; /*0x41de66*/
      ++v4; /*0x41de67*/
      if ( v3 >= m_8 ) /*0x41de6c*/
        return 1; /*0x41de6c*/
    }
  }
  return 0; /*0x41de6e*/
}



// ==== 0x0041DE80  _VectorClass_PAVAirstrikeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AirstrikeClass::Release(_VectorClass_PAVAirstrikeClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x41de8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x41de96*/
    if ( a3 ) /*0x41de9c*/
      v4 = a3; /*0x41deb2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x41deae*/
    LOBYTE(this->m_C) = 1; /*0x41deb6*/
    if ( v4 ) /*0x41deba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x41dec5*/
      {
        m_8 = this->m_8; /*0x41decc*/
        if ( a2 < m_8 ) /*0x41ded1*/
          m_8 = a2; /*0x41ded3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x41ded9*/
          ++i; /*0x41dede*/
        if ( BYTE1(this->m_C) ) /*0x41deeb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x41def6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x41defe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x41df07*/
      this->m_8 = a2; /*0x41df0f*/
      BYTE1(this->m_C) = a3 == 0; /*0x41df12*/
      return 1; /*0x41df18*/
    }
    else
    {
      return 0; /*0x41debf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVAirstrikeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x41df22*/
    return 1; /*0x41df28*/
  }
}



// ==== 0x0041DF30  _VectorClass_PAVAirstrikeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_AirstrikeClass::Remove(_VectorClass_PAVAirstrikeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x41df3d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x41df43*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x41df4b*/
  }
  BYTE1(this->m_C) = 0; /*0x41df4e*/
  this->m_8 = 0; /*0x41df51*/
}



// ==== 0x0041DF60  _VectorClass_PAVAirstrikeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AirstrikeClass::GetSize(_VectorClass_PAVAirstrikeClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x41df60*/
    return 0; /*0x41df68*/
  m_8 = this->m_8; /*0x41df6e*/
  result = 0; /*0x41df71*/
  if ( m_8 <= 0 ) /*0x41df75*/
    return -1; /*0x41df8c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x41df7b*/
  {
    if ( ++result >= m_8 ) /*0x41df8a*/
      return -1; /*0x41df8a*/
  }
  return result; /*0x41df6a*/
}



// ==== 0x0041DFA0  _VectorClass_PAVAirstrikeClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AirstrikeClass::GetCapacity(_VectorClass_PAVAirstrikeClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x41dfa0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x41dfb5*/
  else
    return 0; /*0x41dfa7*/
}



// ==== 0x0041DFC0  _DynamicVectorClass_PAVAirstrikeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_AirstrikeClass::SetCapacity(
        _DynamicVectorClass_PAVAirstrikeClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x41dfcc*/
  {
    LOBYTE(this->m_C) = 0; /*0x41dfd2*/
    if ( a3 ) /*0x41dfd8*/
      v4 = a3; /*0x41dfee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x41dfea*/
    LOBYTE(this->m_C) = 1; /*0x41dff2*/
    if ( !v4 ) /*0x41dff6*/
      return 0; /*0x41e06a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x41dff8*/
    {
      m_8 = this->m_8; /*0x41dfff*/
      if ( a2 < m_8 ) /*0x41e004*/
        m_8 = a2; /*0x41e006*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x41e00c*/
        ++i; /*0x41e011*/
      if ( BYTE1(this->m_C) ) /*0x41e01e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x41e029*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x41e031*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x41e03a*/
    this->m_8 = a2; /*0x41e042*/
    BYTE1(this->m_C) = a3 == 0; /*0x41e045*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVAirstrikeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x41e04e*/
  }
  v7 = this->m_8; /*0x41e051*/
  if ( v7 < this->m_10 ) /*0x41e059*/
    this->m_10 = v7; /*0x41e05b*/
  return 1; /*0x41e05e*/
}



// ==== 0x0041E070  _DynamicVectorClass_PAVAirstrikeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_AirstrikeClass::FindItemIndex(_DynamicVectorClass_PAVAirstrikeClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x41e070*/
  result = 0; /*0x41e073*/
  if ( m_10 <= 0 ) /*0x41e078*/
    return -1; /*0x41e08f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x41e07e*/
  {
    if ( ++result >= m_10 ) /*0x41e08d*/
      return -1; /*0x41e08d*/
  }
  return result; /*0x41e092*/
}



// ==== 0x0041E0A0  _VectorClass_PAVAirstrikeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_AirstrikeClass::QueryInterface(_VectorClass_PAVAirstrikeClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x41e0a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AirstrikeClass *>::`vftable'; /*0x41e0a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x41e0b0*/
  {
    __3_YAXPAX_Z(v3); /*0x41e0b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x41e0c0*/
  }
  BYTE1(this->m_C) = 0; /*0x41e0cb*/
  this->m_8 = 0; /*0x41e0d1*/
  if ( (a2 & 1) != 0 ) /*0x41e0d8*/
    __3_YAXPAX_Z(this); /*0x41e0db*/
  return this->__pad_0; /*0x41e0e5*/
}



// ==== 0x0041E0F0  _DynamicVectorClass_PAVAirstrikeClass::Constructor_VectorClass_AirstrikeClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_AirstrikeClass::Constructor_VectorClass_AirstrikeClass___(
        _DynamicVectorClass_PAVAirstrikeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x41e0f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<AirstrikeClass *>::`vftable'; /*0x41e0f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x41e100*/
  {
    __3_YAXPAX_Z(v3); /*0x41e108*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x41e110*/
  }
  BYTE1(this->m_C) = 0; /*0x41e11b*/
  this->m_8 = 0; /*0x41e121*/
  if ( (a2 & 1) != 0 ) /*0x41e128*/
    __3_YAXPAX_Z(this); /*0x41e12b*/
  return this->__pad_0; /*0x41e135*/
}



// ==== 0x0041E140  sub_41E140  this=-  sig=ida-proto ====
int sub_41E140()
{
  dword_88A008 = 0; /*0x41e142*/
  dword_88A00C = 0; /*0x41e147*/
  dword_88A010 = 0; /*0x41e14c*/
  dword_88A014 = 0; /*0x41e151*/
  return 0; /*0x41e156*/
}



// ==== 0x0041E160  sub_41E160  this=-  sig=ida-proto ====
void sub_41E160()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41e16c*/
  dbl_88A020 = Math::Sqrt(v0 + v0); /*0x41e17e*/
}



// ==== 0x0041E190  sub_41E190  this=-  sig=ida-proto ====
void sub_41E190()
{
  dbl_88A070 = dbl_88A020 / 60.0; /*0x41e19c*/
}



// ==== 0x0041E1B0  sub_41E1B0  this=-  sig=ida-proto ====
void sub_41E1B0()
{
  dbl_88A058 = 1.0 / dbl_88A070; /*0x41e1bc*/
}



// ==== 0x0041E1D0  sub_41E1D0  this=-  sig=ida-proto ====
void sub_41E1D0()
{
  dbl_88A050 = 0.0174532925199433 * 45.0; /*0x41e1dc*/
}



// ==== 0x0041E1F0  sub_41E1F0  this=-  sig=ida-proto ====
void sub_41E1F0()
{
  dbl_88A028 = 0.0174532925199433 * 60.0; /*0x41e1fc*/
}



// ==== 0x0041E210  sub_41E210  this=-  sig=ida-proto ====
void sub_41E210()
{
  dbl_88A000 = 0.0174532925199433 * 90.0; /*0x41e21c*/
}



// ==== 0x0041E230  sub_41E230  this=-  sig=ida-proto ====
__int64 sub_41E230()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_88A000 - dbl_88A028); /*0x41e242*/
  result = Math::RoundToInt(v0 * dbl_88A020 * 0.5); /*0x41e256*/
  dword_88A078 = result; /*0x41e25b*/
  return result; /*0x41e260*/
}



// ==== 0x0041E270  sub_41E270  this=-  sig=ida-proto ====
void sub_41E270()
{
  dbl_88A030 = Math::ArcTan((double)dword_88A078 * 0.00390625); /*0x41e287*/
}



// ==== 0x0041E2A0  sub_41E2A0  this=-  sig=ida-proto ====
void sub_41E2A0()
{
  dbl_88A048 = Math::ArcTan((double)(2 * dword_88A078) / dbl_88A020); /*0x41e2c2*/
}



// ==== 0x0041E2D0  sub_41E2D0  this=-  sig=ida-proto ====
__int64 sub_41E2D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_88A078) + 0.5); /*0x41e2eb*/
  dword_88A06C = result; /*0x41e2f0*/
  return result; /*0x41e2f6*/
}



// ==== 0x0041E300  sub_41E300  this=-  sig=ida-proto ====
int sub_41E300()
{
  word_88A018 = 0; /*0x41e302*/
  word_88A01A = 0; /*0x41e308*/
  return 0; /*0x41e30e*/
}



// ==== 0x0041E310  sub_41E310  this=-  sig=ida-proto ====
int sub_41E310()
{
  dword_88A038 = 0; /*0x41e312*/
  dword_88A03C = 0; /*0x41e317*/
  dword_88A040 = 0; /*0x41e31c*/
  return 0; /*0x41e321*/
}



// ==== 0x0041E330  sub_41E330  this=-  sig=ida-proto ====
int sub_41E330()
{
  dword_88A068 = 0; /*0x41e335*/
  dword_88A060 = 128; /*0x41e33f*/
  dword_88A064 = 128; /*0x41e344*/
  return 128; /*0x41e349*/
}



// ==== 0x0041E350  AnimTypeClass::Construct2  this=AITriggerTypeClass  sig=csp ====
_DWORD *__thiscall AnimTypeClass::Construct2(AnimTypeClass *this, char *Source)
{
  int v3; // eax

  AbstractTypeClass::Constructor((int *)this, Source); /*0x41e359*/
  *(_DWORD *)this->? = -1; /*0x41e363*/
  *(_DWORD *)&this->? = -1; /*0x41e369*/
  this->?[0] = 0; /*0x41e374*/
  this->?[1] = 0; /*0x41e37a*/
  this->?[3] = 0; /*0x41e380*/
  this->?[0] = 1072693248; /*0x41e386*/
  this->?[2] = 1072693248; /*0x41e38c*/
  this->?[4] = 1072693248; /*0x41e392*/
  BYTE2(this->?[5]) = 1; /*0x41e39a*/
  HIBYTE(this->?[5]) = 1; /*0x41e3a0*/
  LOBYTE(this->?[6]) = 1; /*0x41e3a6*/
  this->?[0] = 0; /*0x41e3b9*/
  this->? = 0; /*0x41e3bf*/
  LOBYTE(this->?) = 0; /*0x41e3c5*/
  this->? = 0; /*0x41e3cb*/
  this->?[0] = 0; /*0x41e3d1*/
  LOBYTE(this->?[5]) = 0; /*0x41e3d7*/
  BYTE1(this->?[5]) = 0; /*0x41e3dd*/
  this->?[7] = 0; /*0x41e3e3*/
  this->?[8] = 0; /*0x41e3e9*/
  this->?[9] = 0; /*0x41e3ef*/
  this->?[0] = 0; /*0x41e3f5*/
  this->?[1] = 0; /*0x41e3fb*/
  this->ObjectTypeClass = &AITriggerTypeClass::`vftable'; /*0x41e401*/
  this->? = &AITriggerTypeClass::`vftable'; /*0x41e407*/
  this->? = &AITriggerTypeClass::`vftable'; /*0x41e40e*/
  this->? = &AITriggerTypeClass::`vftable'; /*0x41e415*/
  memset(&this->?[10], 0, 0x20u); /*0x41e41c*/
  if ( dword_A8B210 < dword_A8B208 /*0x41e452*/
    || (byte_A8B20D || !dword_A8B208)
    && dword_A8B214 > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8B200 + 8))(
         &dword_A8B200,
         dword_A8B208 + dword_A8B214,
         0) )
  {
    v3 = dword_A8B210++; /*0x41e45f*/
    *((_DWORD *)dword_A8B204 + v3) = this; /*0x41e46e*/
  }
  return &this->ObjectTypeClass; /*0x41e473*/
}



// ==== 0x0041E500  AITriggerTypeClass::GetClassIdentifier  this=AITriggerTypeClass  sig=csp ====
int __stdcall AITriggerTypeClass::GetClassIdentifier(AITriggerTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x41e506*/
    return -2147467261; /*0x41e508*/
  *a2 = -1173801692; /*0x41e516*/
  a2[1] = 298994932; /*0x41e51e*/
  a2[2] = 268445372; /*0x41e527*/
  a2[3] = unk_7E996C; /*0x41e530*/
  return 0; /*0x41e50d*/
}



// ==== 0x0041E540  AITriggerTypeClass::LoadTypeData  this=AITriggerTypeClass  sig=csp ====
int __stdcall AITriggerTypeClass::LoadTypeData(AITriggerTypeClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x41e54b*/
  if ( result >= 0 ) /*0x41e552*/
  {
    if ( this ) /*0x41e556*/
    {
      AbstractTypeClass::Init((int)this, (int)&a2); /*0x41e55f*/
      *(_DWORD *)this->__pad_0 = &AITriggerTypeClass::`vftable'; /*0x41e564*/
      this->AITriggerTypeClass_field_0x04 = (int)&AITriggerTypeClass::`vftable'; /*0x41e56a*/
      this->AITriggerTypeClass_field_0x08 = (int)&AITriggerTypeClass::`vftable'; /*0x41e571*/
      this->AITriggerTypeClass_field_0x0C = (int)&AITriggerTypeClass::`vftable'; /*0x41e578*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 54); /*0x41e58b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 55); /*0x41e59c*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 56); /*0x41e5ad*/
    return 0; /*0x41e5b2*/
  }
  return result; /*0x41e5b4*/
}



// ==== 0x0041E5C0  AITriggerTypeClass::SaveToINI  this=AITriggerTypeClass  sig=csp ====
int __stdcall AITriggerTypeClass::SaveToINI(AITriggerTypeClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x41e5cf*/
  if ( result >= 0 ) /*0x41e5d6*/
    return 0; /*0x41e5d8*/
  return result; /*0x41e5da*/
}



// ==== 0x0041E5E0  AITriggerTypeClass::ProcessPower  this=AITriggerTypeClass  sig=csp ====
int __thiscall AITriggerTypeClass::ProcessPower(AITriggerTypeClass *this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x41e5e9*/
  Power::TimerProcess(*((_DWORD *)this + 38)); /*0x41e5f7*/
  Power::TimerProcess(*((_DWORD *)this + 39)); /*0x41e605*/
  Power::TimerProcess(this->u32_28); /*0x41e613*/
  Power::TimerProcess(*((_DWORD *)this + 42)); /*0x41e621*/
  Power::TimerProcess(this->q02C); /*0x41e62f*/
  switch ( *((_DWORD *)this + 38) ) /*0x41e63f*/
  {
    case 0: /*0x41e63f*/
    case 1: /*0x41e63f*/
    case 4: /*0x41e63f*/
    case 7: /*0x41e63f*/
      Power::TimerProcess(*((_DWORD *)this + 57)); /*0x41e64f*/
      Power::TimerProcess(this->q03A); /*0x41e65d*/
      break; /*0x41e65d*/
    default:
      break;
  }
  Checksummer::Add_double((Checksummer *)a2, *((_DWORD *)this + 46), *((_DWORD *)this + 47)); /*0x41e662*/
  Checksummer::Add_double((Checksummer *)a2, this->q030, this->q031); /*0x41e687*/
  Checksummer::Add_double((Checksummer *)a2, *((_DWORD *)this + 50), this->alignmentPadding); /*0x41e69c*/
  LOBYTE(v3) = this->q034; /*0x41e6a1*/
  Power::FlagProcess((Power *)a2, v3); /*0x41e6aa*/
  LOBYTE(v4) = *((_BYTE *)this + 210); /*0x41e6af*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x41e6b8*/
  LOBYTE(v5) = *((_BYTE *)this + 211); /*0x41e6bd*/
  Power::FlagProcess((Power *)a2, v5); /*0x41e6c6*/
  LOBYTE(v6) = *((_BYTE *)this + 212); /*0x41e6cb*/
  Power::FlagProcess((Power *)a2, v6); /*0x41e6d4*/
  v7 = Power::TimerProcess(this->q02B); /*0x41e6e2*/
  LOBYTE(v7) = *((_BYTE *)this + 209); /*0x41e6e7*/
  return Power::FlagProcess((Power *)a2, v7); /*0x41e6f5*/
}



// ==== 0x0041E720  TriggerClass::EvaluateCondition  this=TriggerClass  sig=csp ====
char __thiscall TriggerClass::EvaluateCondition(int this, TriggerClass *a2, _DWORD *a3, char a4)
{
  int v5; // ecx
  int v6; // eax
  bool v7; // dl
  TriggerClass *v8; // edi
  char result; // al
  void *ptr_0; // eax
  int referenceCount; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  bool v15; // al
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // [esp+1Ch] [ebp+Ch]
  int v20; // [esp+1Ch] [ebp+Ch]

  v5 = *(_DWORD *)(this + 220); /*0x41e726*/
  v7 = 1; /*0x41e74e*/
  if ( !v5 || !*(_BYTE *)(v5 + 246) ) /*0x41e730*/
  {
    v6 = *(_DWORD *)(this + 224); /*0x41e73a*/
    if ( !v6 || !*(_BYTE *)(v6 + 246) ) /*0x41e744*/
      v7 = 0; /*0x41e738*/
  }
  if ( !v5 ) /*0x41e756*/
    return 0; /*0x41e756*/
  if ( a3 ) /*0x41e762*/
  {
    v8 = a2; /*0x41e769*/
    if ( !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6131) /*0x41e78c*/
      || a2[307].? >= *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5012) + 4 * a2[5].?) )
    {
      if ( !v7 ) /*0x41e7a3*/
        goto LABEL_17; /*0x41e7a3*/
      goto LABEL_16; /*0x41e7a3*/
    }
  }
  else
  {
    v8 = a2; /*0x41e790*/
  }
  if ( !v7 ) /*0x41e796*/
    return 0; /*0x41e79e*/
LABEL_16:
  if ( a4 ) /*0x41e7ab*/
    return 0; /*0x41e7ab*/
LABEL_17:
  if ( *(_DWORD *)(this + 156) == 1 && LOBYTE(dword_A8B230[374].referenceCount) == 1 || !*(_BYTE *)(this + 164) ) /*0x41e7cd*/
    return 0; /*0x41e7d5*/
  if ( *(_DWORD *)&dword_A8B238 ) /*0x41e7df*/
  {
    if ( !*(_BYTE *)(this + 208) ) /*0x41e7e1*/
      return 0; /*0x41e7f1*/
    referenceCount = v8[5].?; /*0x41e809*/
    if ( !referenceCount ) /*0x41e811*/
    {
LABEL_28:
      if ( !*(_BYTE *)(this + 212) ) /*0x41e813*/
        return 0; /*0x41e823*/
      goto LABEL_36; /*0x41e81b*/
    }
    if ( referenceCount == 1 ) /*0x41e828*/
      goto LABEL_31; /*0x41e828*/
    if ( referenceCount != 2 ) /*0x41e840*/
      goto LABEL_36; /*0x41e840*/
    goto LABEL_34; /*0x41e840*/
  }
  ptr_0 = dword_A8B230[43].ptr_0; /*0x41e7f4*/
  if ( !ptr_0 ) /*0x41e7fc*/
  {
LABEL_34:
    if ( *(_BYTE *)(this + 210) ) /*0x41e842*/
      goto LABEL_36; /*0x41e84a*/
    return 0; /*0x41e852*/
  }
  if ( ptr_0 != (void *)1 ) /*0x41e800*/
  {
    if ( ptr_0 != (void *)2 ) /*0x41e805*/
      goto LABEL_36; /*0x41e805*/
    goto LABEL_28; /*0x41e805*/
  }
LABEL_31:
  if ( !*(_BYTE *)(this + 211) ) /*0x41e82a*/
    return 0; /*0x41e83a*/
LABEL_36:
  v12 = *(_DWORD *)(this + 160); /*0x41e855*/
  if ( !v12 ) /*0x41e85d*/
    return 0; /*0x41e865*/
  if ( v12 == 1 && *(_DWORD *)(v8->timer[0] + 184) != *(_DWORD *)(this + 168) ) /*0x41e882*/
    return 0; /*0x41e88a*/
  v13 = *(_DWORD *)(this + 172); /*0x41e88d*/
  if ( v13 == 1 ) /*0x41e895*/
  {
    if ( v8[6].timer[1] ) /*0x41e897*/
      return 0; /*0x41e8a7*/
  }
  else if ( v13 == 2 ) /*0x41e8ad*/
  {
    if ( v8[6].timer[1] != 1 ) /*0x41e8b5*/
      return 0; /*0x41e8bd*/
  }
  else if ( v13 == 3 && v8[6].timer[1] != 2 ) /*0x41e8cc*/
  {
    return 0; /*0x41e8d4*/
  }
  if ( *(_DWORD *)(this + 176) > (int)v8[6].buildingType ) /*0x41e8e5*/
    return 0; /*0x41e8ea*/
  v14 = *(_DWORD *)(this + 152); /*0x41e8f0*/
  if ( a3 ) /*0x41e8f8*/
  {
    switch ( v14 ) /*0x41e908*/
    {
      case -1: /*0x41e908*/
        goto LABEL_70;
      case 0: /*0x41e908*/
        v15 = AITriggerTypeClass::EnemyHouseOwns((AITriggerTypeClass *)this, (int)v8, a3); /*0x41e913*/
        break; /*0x41e918*/
      case 1: /*0x41e908*/
        v15 = AITriggerTypeClass::OwnerHouseOwns((AITriggerTypeClass *)this, v8, (int)a3); /*0x41e921*/
        break; /*0x41e926*/
      case 2: /*0x41e908*/
        v19 = (*(int (__stdcall **)(_DWORD *))(a3[9] + 36))(a3 + 9); /*0x41e93b*/
        if ( (double)((*(int (__stdcall **)(_DWORD *))(a3[9] + 32))(a3 + 9) - v19) >= 100.0 ) /*0x41e95b*/
          goto LABEL_58; /*0x41e95b*/
        v15 = 1; /*0x41e95d*/
        break; /*0x41e95f*/
      case 3: /*0x41e908*/
        v20 = (*(int (__stdcall **)(_DWORD *))(a3[9] + 36))(a3 + 9); /*0x41e975*/
        if ( (double)((*(int (__stdcall **)(_DWORD *))(a3[9] + 32))(a3 + 9) - v20) >= 0.0 ) /*0x41e995*/
LABEL_58:
          v15 = 0; /*0x41e961*/
        else
          v15 = 1; /*0x41e997*/
        break; /*0x41e999*/
      case 4: /*0x41e908*/
        v15 = AITriggerTypeClass::HouseCredits((AITriggerTypeClass *)this, (int)v8, (int)a3); /*0x41e99f*/
        break; /*0x41e9a4*/
      case 5: /*0x41e908*/
        v15 = AITriggerTypeClass::IronCurtainCharged((int)v8, (int)a3); /*0x41e9aa*/
        break; /*0x41e9af*/
      case 6: /*0x41e908*/
        v15 = AITriggerTypeClass::ChronoSphereCharged((int)v8, (int)a3); /*0x41e9b5*/
        break; /*0x41e9ba*/
      case 7: /*0x41e908*/
        v15 = AITriggerTypeClass::CivilianHouseOwns((AITriggerTypeClass *)this, (int)v8, (int)a3); /*0x41e9c0*/
        break; /*0x41e9c5*/
      default:
        return 0;
    }
  }
  else if ( v14 == 1 ) /*0x41e9c9*/
  {
    v15 = AITriggerTypeClass::OwnerHouseOwns((AITriggerTypeClass *)this, v8, 0); /*0x41e9d0*/
  }
  else
  {
    v15 = v14 == -1; /*0x41e9da*/
  }
  if ( !v15 ) /*0x41e9df*/
    return 0; /*0x41e9e1*/
LABEL_70:
  result = globalHelper_01FEE0(*(_DWORD *)(this + 220), v8, a3); /*0x41e9ea*/
  if ( result ) /*0x41e9fc*/
  {
    v16 = *(_DWORD *)(this + 224); /*0x41ea05*/
    if ( !v16 || (result = globalHelper_01FEE0(v16, v8, a3)) != 0 ) /*0x41ea1b*/
    {
      result = TriggerClass::ValidateTeamTriggerConditions(v8, *(_DWORD *)(this + 220)); /*0x41ea2d*/
      if ( result ) /*0x41ea34*/
      {
        if ( !*(_DWORD *)(this + 224) /*0x41ea51*/
          || (result = TriggerClass::ValidateTeamTriggerConditions(v8, *(_DWORD *)(this + 224))) != 0 )
        {
          v17 = *(_DWORD *)(this + 220); /*0x41ea5a*/
          if ( v17 /*0x41ea82*/
            && *(int *)(v17 + 184) >= 0
            && TeamClass::CountActiveTeamsForType((TeamClass *)v8, *(_DWORD *)(this + 220)) >= *(_DWORD *)(*(_DWORD *)(this + 220) + 184) )
          {
            return 0; /*0x41ea87*/
          }
          else
          {
            v18 = *(_DWORD *)(this + 224); /*0x41ea8d*/
            return !v18 /*0x41eaba*/
                || *(int *)(v18 + 184) < 0
                || TeamClass::CountActiveTeamsForType((TeamClass *)v8, *(_DWORD *)(this + 224)) < *(_DWORD *)(*(_DWORD *)(this + 224) + 184);
          }
        }
      }
    }
  }
  return result; /*0x41e798*/
}



// ==== 0x0041EAF0  AITriggerTypeClass::EnemyHouseOwns  this=AITriggerTypeClass  sig=csp ====
bool __thiscall AITriggerTypeClass::EnemyHouseOwns(AITriggerTypeClass *this, int a2, _DWORD *a3)
{
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int v7; // eax
  bool result; // al
  bool v9; // [esp+7h] [ebp-1h]

  v9 = 0; /*0x41eafa*/
  if ( !a3 ) /*0x41eaff*/
    return v9; /*0x41ec2b*/
  v4 = *((_DWORD *)this + 54); /*0x41eb06*/
  if ( v4 ) /*0x41eb0e*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 64))(v4); /*0x41eb21*/
    v6 = 0; /*0x41eb23*/
    switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) ) /*0x41eb38*/
    {
      case 3: /*0x41eb38*/
        v6 = DynamicVector::GetOrGrow((DynamicVector *)(a3 + 5475), v5); /*0x41eb91*/
        goto LABEL_8; /*0x41eb91*/
      case 7: /*0x41eb38*/
        v7 = DynamicVector::GetOrGrow((DynamicVector *)(a3 + 5460), v5); /*0x41eb4a*/
        break; /*0x41eb53*/
      case 16: /*0x41eb38*/
        v7 = DynamicVector::GetOrGrow((DynamicVector *)(a3 + 5470), v5); /*0x41eb76*/
        break; /*0x41eb7f*/
      case 40: /*0x41eb38*/
        v7 = DynamicVector::GetOrGrow((DynamicVector *)(a3 + 5465), v5); /*0x41eb60*/
        break; /*0x41eb69*/
      default:
LABEL_8:
        v7 = v6; /*0x41eb93*/
        break; /*0x41eb97*/
    }
  }
  else
  {
    v7 = 0; /*0x41eb99*/
  }
  switch ( this->q03A ) /*0x41ebab*/
  {
    case 0: /*0x41ebab*/
      result = v7 < *((_DWORD *)this + 57); /*0x41ebc0*/
      break; /*0x41ebc5*/
    case 1: /*0x41ebab*/
      result = v7 <= *((_DWORD *)this + 57); /*0x41ebd6*/
      break; /*0x41ebdb*/
    case 2: /*0x41ebab*/
      result = v7 == *((_DWORD *)this + 57); /*0x41ebec*/
      break; /*0x41ebf1*/
    case 3: /*0x41ebab*/
      result = v7 >= *((_DWORD *)this + 57); /*0x41ec02*/
      break; /*0x41ec07*/
    case 4: /*0x41ebab*/
      result = v7 > *((_DWORD *)this + 57); /*0x41ec18*/
      break; /*0x41ec1d*/
    case 5: /*0x41ebab*/
      return v7 != *((_DWORD *)this + 57); /*0x41ec26*/
    default:
      return v9;
  }
  return result; /*0x41ebb8*/
}



// ==== 0x0041EC90  AITriggerTypeClass::CivilianHouseOwns  this=AITriggerTypeClass  sig=csp ====
bool __thiscall AITriggerTypeClass::CivilianHouseOwns(AITriggerTypeClass *this, int a2, int a3)
{
  AITriggerTypeClass *v3; // edi
  int v4; // esi
  bool result; // al
  int v6; // ebx
  int AITriggerTypeClass_field_0x18; // esi
  int v8; // ebp
  int v9; // edi
  int v10; // eax
  bool v11; // [esp+Fh] [ebp-5h]

  v3 = this; /*0x41ec9b*/
  v4 = 0; /*0x41ec9d*/
  v11 = 0; /*0x41eca5*/
  if ( stru_A80220.? <= 0 ) /*0x41ecaa*/
    return v11; /*0x41ecaa*/
  while ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)stru_A80220.? + v4) + 52) + 188) != HouseTypeClass::Find(&g_INI_Key_Civilian) ) /*0x41eccc*/
  {
    if ( ++v4 >= stru_A80220.? ) /*0x41ecd6*/
      return 0; /*0x41ece2*/
  }
  v6 = *((_DWORD *)stru_A80220.? + v4); /*0x41ece5*/
  if ( !v6 ) /*0x41ecea*/
    return v11; /*0x41ee23*/
  AITriggerTypeClass_field_0x18 = v3[3].AITriggerTypeClass_field_0x18; /*0x41ecf0*/
  if ( AITriggerTypeClass_field_0x18 ) /*0x41ecf8*/
  {
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)AITriggerTypeClass_field_0x18 + 64))(AITriggerTypeClass_field_0x18); /*0x41ed0a*/
    v9 = 0; /*0x41ed0c*/
    switch ( (*(int (__thiscall **)(int))(*(_DWORD *)AITriggerTypeClass_field_0x18 + 44))(AITriggerTypeClass_field_0x18) ) /*0x41ed21*/
    {
      case 3: /*0x41ed21*/
        v9 = DynamicVector::GetOrGrow((DynamicVector *)(v6 + 21900), v8); /*0x41ed73*/
        goto LABEL_12; /*0x41ed73*/
      case 7: /*0x41ed21*/
        v10 = DynamicVector::GetOrGrow((DynamicVector *)(v6 + 21840), v8); /*0x41ed2f*/
        v3 = this; /*0x41ed37*/
        break; /*0x41ed3b*/
      case 16: /*0x41ed21*/
        v10 = DynamicVector::GetOrGrow((DynamicVector *)(v6 + 21880), v8); /*0x41ed59*/
        v3 = this; /*0x41ed61*/
        break; /*0x41ed65*/
      case 40: /*0x41ed21*/
        v10 = DynamicVector::GetOrGrow((DynamicVector *)(v6 + 21860), v8); /*0x41ed44*/
        v3 = this; /*0x41ed4c*/
        break; /*0x41ed50*/
      default:
LABEL_12:
        v10 = v9; /*0x41ed75*/
        v3 = this; /*0x41ed77*/
        break; /*0x41ed7c*/
    }
  }
  else
  {
    v10 = 0; /*0x41ed7e*/
  }
  switch ( v3[3].AITriggerTypeClass_field_0x28 ) /*0x41ed8f*/
  {
    case 0: /*0x41ed8f*/
      result = v10 < v3[3].AITriggerTypeClass_field_0x24; /*0x41eda5*/
      break; /*0x41edad*/
    case 1: /*0x41ed8f*/
      result = v10 <= v3[3].AITriggerTypeClass_field_0x24; /*0x41edbf*/
      break; /*0x41edc7*/
    case 2: /*0x41ed8f*/
      result = v10 == v3[3].AITriggerTypeClass_field_0x24; /*0x41edd9*/
      break; /*0x41ede1*/
    case 3: /*0x41ed8f*/
      result = v10 >= v3[3].AITriggerTypeClass_field_0x24; /*0x41edf3*/
      break; /*0x41edfb*/
    case 4: /*0x41ed8f*/
      result = v10 > v3[3].AITriggerTypeClass_field_0x24; /*0x41ee0d*/
      break; /*0x41ee15*/
    case 5: /*0x41ed8f*/
      return v10 != v3[3].AITriggerTypeClass_field_0x24; /*0x41ee1e*/
    default:
      return v11;
  }
  return result; /*0x41ecdc*/
}



// ==== 0x0041EE90  AITriggerTypeClass::OwnerHouseOwns  this=AITriggerTypeClass  sig=csp ====
bool __thiscall AITriggerTypeClass::OwnerHouseOwns(AITriggerTypeClass *this, _DWORD *a2, int a3)
{
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int v7; // eax
  bool result; // al
  bool v9; // [esp+7h] [ebp-1h]

  v9 = 0; /*0x41ee9a*/
  if ( !a2 ) /*0x41ee9f*/
    return v9; /*0x41efcb*/
  v4 = *((_DWORD *)this + 54); /*0x41eea6*/
  if ( v4 ) /*0x41eeae*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 64))(v4); /*0x41eec1*/
    v6 = 0; /*0x41eec3*/
    switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) ) /*0x41eed8*/
    {
      case 3: /*0x41eed8*/
        v6 = DynamicVector::GetOrGrow((DynamicVector *)(a2 + 5475), v5); /*0x41ef31*/
        goto LABEL_8; /*0x41ef31*/
      case 7: /*0x41eed8*/
        v7 = DynamicVector::GetOrGrow((DynamicVector *)(a2 + 5460), v5); /*0x41eeea*/
        break; /*0x41eef3*/
      case 16: /*0x41eed8*/
        v7 = DynamicVector::GetOrGrow((DynamicVector *)(a2 + 5470), v5); /*0x41ef16*/
        break; /*0x41ef1f*/
      case 40: /*0x41eed8*/
        v7 = DynamicVector::GetOrGrow((DynamicVector *)(a2 + 5465), v5); /*0x41ef00*/
        break; /*0x41ef09*/
      default:
LABEL_8:
        v7 = v6; /*0x41ef33*/
        break; /*0x41ef37*/
    }
  }
  else
  {
    v7 = 0; /*0x41ef39*/
  }
  switch ( this->q03A ) /*0x41ef4b*/
  {
    case 0: /*0x41ef4b*/
      result = v7 < *((_DWORD *)this + 57); /*0x41ef60*/
      break; /*0x41ef65*/
    case 1: /*0x41ef4b*/
      result = v7 <= *((_DWORD *)this + 57); /*0x41ef76*/
      break; /*0x41ef7b*/
    case 2: /*0x41ef4b*/
      result = v7 == *((_DWORD *)this + 57); /*0x41ef8c*/
      break; /*0x41ef91*/
    case 3: /*0x41ef4b*/
      result = v7 >= *((_DWORD *)this + 57); /*0x41efa2*/
      break; /*0x41efa7*/
    case 4: /*0x41ef4b*/
      result = v7 > *((_DWORD *)this + 57); /*0x41efb8*/
      break; /*0x41efbd*/
    case 5: /*0x41ef4b*/
      return v7 != *((_DWORD *)this + 57); /*0x41efc6*/
    default:
      return v9;
  }
  return result; /*0x41ef58*/
}



// ==== 0x0041F0D0  AITriggerTypeClass::IronCurtainCharged  this=AITriggerTypeClass  sig=csp ====
bool __stdcall AITriggerTypeClass::IronCurtainCharged(int a1, int a2)
{
  int v2; // edx
  int v3; // eax
  int i; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // [esp+8h] [ebp+4h]

  if ( !a1 ) /*0x41f0d9*/
    return 0; /*0x41f0d9*/
  v2 = *(_DWORD *)(a1 + 612); /*0x41f0db*/
  v3 = 0; /*0x41f0e1*/
  if ( v2 <= 0 ) /*0x41f0e5*/
    return 0; /*0x41f0e5*/
  for ( i = *(_DWORD *)(a1 + 600); *(_DWORD *)(*(_DWORD *)(*(_DWORD *)i + 40) + 180) != 1; i += 4 ) /*0x41f0ed*/
  {
    if ( ++v3 >= v2 ) /*0x41f103*/
      return 0; /*0x41f103*/
  }
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 600) + 4 * v3); /*0x41f10d*/
  if ( !v6 || !*(_BYTE *)(v6 + 109) ) /*0x41f114*/
    return 0; /*0x41f119*/
  v7 = *(_DWORD *)(v6 + 48); /*0x41f11b*/
  v8 = *(_DWORD *)(v6 + 56); /*0x41f11e*/
  if ( v7 == -1 ) /*0x41f124*/
    goto LABEL_12; /*0x41f124*/
  if ( (int)dword_A8ED84 - v7 < v8 ) /*0x41f130*/
  {
    v8 -= (int)dword_A8ED84 - v7; /*0x41f132*/
LABEL_12:
    v9 = v8; /*0x41f134*/
    return 1.0 - *(float *)&dword_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((_DWORD *)v6); /*0x41f134*/
  }
  v9 = 0; /*0x41f171*/
  return 1.0 - *(float *)&dword_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((_DWORD *)v6); /*0x41f167*/
}



// ==== 0x0041F180  AITriggerTypeClass::ChronoSphereCharged  this=AITriggerTypeClass  sig=csp ====
bool __stdcall AITriggerTypeClass::ChronoSphereCharged(int a1, int a2)
{
  int v2; // edx
  int v3; // eax
  int i; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // [esp+8h] [ebp+4h]

  if ( !a1 ) /*0x41f189*/
    return 0; /*0x41f189*/
  v2 = *(_DWORD *)(a1 + 612); /*0x41f18b*/
  v3 = 0; /*0x41f191*/
  if ( v2 <= 0 ) /*0x41f195*/
    return 0; /*0x41f195*/
  for ( i = *(_DWORD *)(a1 + 600); *(_DWORD *)(*(_DWORD *)(*(_DWORD *)i + 40) + 180) != 3; i += 4 ) /*0x41f19d*/
  {
    if ( ++v3 >= v2 ) /*0x41f1b3*/
      return 0; /*0x41f1b3*/
  }
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 600) + 4 * v3); /*0x41f1bd*/
  if ( !v6 || !*(_BYTE *)(v6 + 109) ) /*0x41f1c4*/
    return 0; /*0x41f1c9*/
  v7 = *(_DWORD *)(v6 + 48); /*0x41f1cb*/
  v8 = *(_DWORD *)(v6 + 56); /*0x41f1ce*/
  if ( v7 == -1 ) /*0x41f1d4*/
    goto LABEL_12; /*0x41f1d4*/
  if ( (int)dword_A8ED84 - v7 < v8 ) /*0x41f1e0*/
  {
    v8 -= (int)dword_A8ED84 - v7; /*0x41f1e2*/
LABEL_12:
    v9 = v8; /*0x41f1e4*/
    return 1.0 - *(float *)&dword_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((_DWORD *)v6); /*0x41f1e4*/
  }
  v9 = 0; /*0x41f221*/
  return 1.0 - *(float *)&dword_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((_DWORD *)v6); /*0x41f217*/
}



// ==== 0x0041F230  AITriggerTypeClass::HouseCredits  this=AITriggerTypeClass  sig=csp ====
bool __thiscall AITriggerTypeClass::HouseCredits(AITriggerTypeClass *this, int a2, int a3)
{
  bool v3; // bl
  int v5; // eax
  bool result; // al

  v3 = 0; /*0x41f235*/
  if ( !a3 ) /*0x41f23c*/
    return v3; /*0x41f2bd*/
  v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(a3 + 36) + 24))(a3 + 36); /*0x41f245*/
  switch ( this->q03A ) /*0x41f253*/
  {
    case 0: /*0x41f253*/
      result = v5 < *((_DWORD *)this + 57); /*0x41f266*/
      break; /*0x41f269*/
    case 1: /*0x41f253*/
      result = v5 <= *((_DWORD *)this + 57); /*0x41f278*/
      break; /*0x41f27b*/
    case 2: /*0x41f253*/
      result = v5 == *((_DWORD *)this + 57); /*0x41f28a*/
      break; /*0x41f28d*/
    case 3: /*0x41f253*/
      result = v5 >= *((_DWORD *)this + 57); /*0x41f29c*/
      break; /*0x41f29f*/
    case 4: /*0x41f253*/
      result = v5 > *((_DWORD *)this + 57); /*0x41f2ae*/
      break; /*0x41f2b1*/
    case 5: /*0x41f253*/
      return v5 != *((_DWORD *)this + 57); /*0x41f2ba*/
    default:
      return v3;
  }
  return result; /*0x41f260*/
}



// ==== 0x0041F2E0  CCINIClass::ReadTypeList  this=INIClass  sig=csp ====
int __fastcall CCINIClass::ReadTypeList(char *a1, int a2)
{
  int v2; // edi
  int result; // eax
  int v5; // ebp
  char *StringByIndex; // esi
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // ebp
  char *v11; // edi
  int v12; // esi
  int v13; // esi
  int v14; // [esp+10h] [ebp-8h]
  int i; // [esp+10h] [ebp-8h]

  v2 = a2; /*0x41f2ec*/
  result = INIClass::GetKeyCount(a1, (unsigned __int8 *)aAitriggertypes); /*0x41f2f5*/
  v5 = 0; /*0x41f2fa*/
  v14 = result; /*0x41f2fe*/
  while ( v5 < v14 ) /*0x41f302*/
  {
    StringByIndex = (char *)INIClass::GetStringByIndex(a1, (unsigned __int8 *)aAitriggertypes, v5); /*0x41f317*/
    if ( _strcmpi(g_Str__none_, StringByIndex) ) /*0x41f31f*/
    {
      if ( _strcmpi(g_Str_none, StringByIndex) ) /*0x41f335*/
      {
        v8 = 0; /*0x41f34a*/
        if ( dword_A8B210 > 0 ) /*0x41f34e*/
        {
          while ( _strcmpi((char *)(*((_DWORD *)dword_A8B204 + v8) + 36), StringByIndex) ) /*0x41f368*/
          {
            if ( ++v8 >= dword_A8B210 ) /*0x41f376*/
              goto LABEL_9; /*0x41f376*/
          }
          v7 = (_DWORD *)*((_DWORD *)dword_A8B204 + v8); /*0x41f431*/
          goto LABEL_11; /*0x41f434*/
        }
LABEL_9:
        v9 = (_DWORD *)__2_YAPAXI_Z(0x110u); /*0x41f378*/
        if ( v9 ) /*0x41f387*/
        {
          v7 = AnimTypeClass::Construct2(v9, StringByIndex); /*0x41f391*/
LABEL_11:
          if ( v7 ) /*0x41f395*/
          {
            (*(void (__thiscall **)(_DWORD *, char *))(*v7 + 100))(v7, a1); /*0x41f39c*/
            v7[39] = a2; /*0x41f3a3*/
          }
          goto LABEL_13; /*0x41f3a3*/
        }
      }
      v7 = 0; /*0x41f341*/
    }
    else
    {
      v7 = 0; /*0x41f32b*/
    }
LABEL_13:
    v2 = a2; /*0x41f3a9*/
    if ( a2 == 1 ) /*0x41f3b0*/
      *((_BYTE *)v7 + 164) = 1; /*0x41f3b2*/
    result = v14; /*0x41f3b9*/
    ++v5; /*0x41f3bd*/
  }
  if ( !v2 ) /*0x41f3c8*/
  {
    result = INIClass::GetKeyCount(a1, (unsigned __int8 *)aAitriggertypes_0); /*0x41f3d7*/
    v10 = 0; /*0x41f3dc*/
    for ( i = result; v10 < i; ++v10 ) /*0x41f3e4*/
    {
      v11 = (char *)INIClass::GetStringByIndex(a1, (unsigned __int8 *)aAitriggertypes_0, v10); /*0x41f3f9*/
      v12 = 0; /*0x41f400*/
      if ( dword_A8B210 > 0 ) /*0x41f404*/
      {
        while ( _strcmpi((char *)(*((_DWORD *)dword_A8B204 + v12) + 36), v11) ) /*0x41f41d*/
        {
          if ( ++v12 >= dword_A8B210 ) /*0x41f427*/
            goto LABEL_28; /*0x41f427*/
        }
        v13 = *((_DWORD *)dword_A8B204 + v12); /*0x41f43f*/
        if ( v13 ) /*0x41f444*/
          *(_BYTE *)(v13 + 164) = (unsigned __int8)INIClass::ReadBool_Overwrite( /*0x41f46c*/
                                                     (int *)a1,
                                                     (unsigned __int8 *)aAitriggertypes_0,
                                                     (unsigned __int8 *)v11,
                                                     0)
                               || dword_A8B238[0];
      }
LABEL_28:
      result = i; /*0x41f473*/
    }
  }
  return result; /*0x41f480*/
}



// ==== 0x0041F490  CCINIClass::ReadInfantryTypeList  this=CCINIClass  sig=csp ====
int __fastcall CCINIClass::ReadInfantryTypeList(INIClass *a1, int a2)
{
  int KeyCount; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // eax
  int result; // eax
  int j; // edi
  _DWORD *v9; // ecx
  int k; // edi
  char Destination[32]; // [esp+10h] [ebp-20h] BYREF

  KeyCount = INIClass::GetKeyCount(a1->__pad_0, (unsigned __int8 *)aAitriggertypes); /*0x41f4a6*/
  for ( i = 0; i < KeyCount; ++i ) /*0x41f4ac*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1->__pad_0, (unsigned __int8 *)aAitriggertypes, i); /*0x41f4b8*/
    INIClass::GetString(a1, (unsigned __int8 *)aAitriggertypes, StringByIndex, &g_INI_DefaultBuffer, Destination, 32); /*0x41f4d2*/
    INIClass::ClearSection((int *)a1->__pad_0, (int)Destination, 0); /*0x41f4e0*/
  }
  INIClass::ClearSection((int *)a1->__pad_0, (int)aAitriggertypes, 0); /*0x41f4f5*/
  result = dword_A8B210; /*0x41f4fa*/
  for ( j = 0; j < dword_A8B210; ++j ) /*0x41f503*/
  {
    v9 = (_DWORD *)*((_DWORD *)dword_A8B204 + j); /*0x41f50a*/
    if ( v9[39] == a2 ) /*0x41f513*/
      (*(void (__thiscall **)(_DWORD *, INIClass *))(*v9 + 104))(v9, a1); /*0x41f518*/
    result = dword_A8B210; /*0x41f51b*/
  }
  if ( !a2 ) /*0x41f527*/
  {
    INIClass::ClearSection((int *)a1->__pad_0, (int)aAitriggertypes_0, 0); /*0x41f532*/
    result = dword_A8B210; /*0x41f537*/
    for ( k = 0; k < dword_A8B210; ++k ) /*0x41f540*/
    {
      INIClass::SetBool( /*0x41f55e*/
        a1->__pad_0,
        (unsigned __int8 *)aAitriggertypes_0,
        (char *)(*((_DWORD *)dword_A8B204 + k) + 36),
        *(_BYTE *)(*((_DWORD *)dword_A8B204 + k) + 164));
      result = dword_A8B210; /*0x41f563*/
    }
  }
  return result; /*0x41f56d*/
}



// ==== 0x0041F580  AITriggerTypeClass::LoadFromINI  this=AITriggerTypeClass  sig=csp ====
char __thiscall AITriggerTypeClass::LoadFromINI(AITriggerTypeClass *this, unsigned __int8 ***a2)
{
  double v2; // st7
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  int v7; // eax
  char *v8; // eax
  char *v9; // eax
  int v10; // esi
  int ExitCellByName; // eax
  int Index; // eax
  _DWORD *v13; // edx
  int v14; // eax
  char *v15; // eax
  unsigned int v16; // edi
  bool v17; // zf
  char *v18; // esi
  int v19; // ecx
  char v20; // dl
  char v21; // al
  char *v22; // eax
  unsigned int v23; // eax
  char *v25; // eax
  unsigned int v26; // eax
  char *v28; // eax
  unsigned int v29; // eax
  char *v31; // eax
  char *v32; // eax
  char *v33; // eax
  char *v34; // eax
  char *v35; // eax
  char *v36; // eax
  char *v37; // eax
  int v38; // eax
  int v39; // esi
  int MaxBuildLevel; // eax
  int v41; // eax
  int v42; // esi
  char v44[4]; // [esp+10h] [ebp-270h] BYREF
  __int64 v45; // [esp+14h] [ebp-26Ch] BYREF
  SuperWeaponTypeClass v46[2]; // [esp+1Ch] [ebp-264h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x41f595*/
  if ( !INIClass::GetString( /*0x41f5b9*/
          (INIClass *)a2,
          (unsigned __int8 *)aAitriggertypes,
          (unsigned __int8 *)&this->AITriggerTypeClass_field_0x24,
          &g_INI_DefaultBuffer,
          v46[0].?,
          512) )
    return 0; /*0x41f5b9*/
  v4 = strtok(v46[0].?, Str); /*0x41f5d3*/
  if ( !v4 ) /*0x41f5df*/
    return 0; /*0x41f5df*/
  strncpy(&v46[0].?[8], v4, 0x30u); /*0x41f5ed*/
  LOBYTE(v46[0].?) = 0; /*0x41f5fe*/
  if ( &v46[0].?[8] != (char *)this + 100 ) /*0x41f602*/
  {
    qmemcpy((char *)this + 100, &v46[0].?[8], 0x30u); /*0x41f60d*/
    *((_BYTE *)this + 148) = v46[0].?; /*0x41f60f*/
  }
  v5 = strtok(0, Str); /*0x41f616*/
  if ( !v5 ) /*0x41f620*/
    return 0; /*0x41f620*/
  strncpy((char *)v46, v5, 0x18u); /*0x41f62e*/
  HIBYTE(v46[0].?) = 0; /*0x41f63a*/
  String::Trim((char *)v46); /*0x41f63e*/
  *((_DWORD *)this + 55) = 0; /*0x41f643*/
  if ( _strcmpi((char *)v46, (char *)off_818114) ) /*0x41f655*/
    *((_DWORD *)this + 55) = TeamTypeClass::FindByName((TeamTypeClass *)v46); /*0x41f66a*/
  v6 = strtok(0, Str); /*0x41f676*/
  if ( !v6 ) /*0x41f680*/
    return 0; /*0x41f680*/
  strncpy((char *)v46, v6, 0x18u); /*0x41f68e*/
  HIBYTE(v46[0].?) = 0; /*0x41f69a*/
  String::Trim((char *)v46); /*0x41f69e*/
  this->u32_28 = 0; /*0x41f6a3*/
  *((_DWORD *)this + 42) = -1; /*0x41f6a9*/
  if ( _strcmpi((char *)v46, (char *)off_818118) ) /*0x41f6bf*/
  {
    if ( _strcmpi((char *)v46, (char *)off_818114) ) /*0x41f6e2*/
    {
      v7 = SuperWeaponTypeClass::FindByName(v46); /*0x41f6f2*/
      *((_DWORD *)this + 42) = v7; /*0x41f6fa*/
      if ( v7 != -1 ) /*0x41f700*/
        this->u32_28 = 1; /*0x41f702*/
    }
  }
  else
  {
    this->u32_28 = 2; /*0x41f6cb*/
  }
  if ( !strtok(0, Str) ) /*0x41f712*/
    return 0; /*0x41f712*/
  this->q02C = 0; /*0x41f728*/
  v8 = strtok(0, Str); /*0x41f72e*/
  if ( !v8 ) /*0x41f738*/
    return 0; /*0x41f738*/
  *((_DWORD *)this + 38) = atoi(v8); /*0x41f74a*/
  v9 = strtok(0, Str); /*0x41f750*/
  if ( !v9 ) /*0x41f75a*/
    return 0; /*0x41f75a*/
  strncpy((char *)v46, v9, 0x18u); /*0x41f768*/
  HIBYTE(v46[0].?) = 0; /*0x41f774*/
  String::Trim((char *)v46); /*0x41f778*/
  v10 = 0; /*0x41f781*/
  ExitCellByName = Factory::FindExitCellByName((Factory *)v46); /*0x41f783*/
  if ( ExitCellByName != -1 ) /*0x41f78b*/
  {
    v10 = *((_DWORD *)dword_A8E34C + ExitCellByName); /*0x41f793*/
    goto LABEL_26; /*0x41f796*/
  }
  Index = BuildingTypeClass::FindIndex((BuildingTypeClass *)v46); /*0x41f79c*/
  if ( Index != -1 ) /*0x41f7a4*/
  {
    v13 = dword_A83CE4; /*0x41f7a6*/
LABEL_25:
    v10 = v13[Index]; /*0x41f7db*/
    goto LABEL_26; /*0x41f7db*/
  }
  v14 = TypeClass::FindByName((TypeClass *)v46); /*0x41f7b2*/
  if ( v14 != -1 ) /*0x41f7ba*/
  {
    v10 = *((_DWORD *)dword_A8B21C + v14); /*0x41f7c2*/
    goto LABEL_26; /*0x41f7c5*/
  }
  Index = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)v46); /*0x41f7cb*/
  if ( Index != -1 ) /*0x41f7d3*/
  {
    v13 = dword_A83C6C; /*0x41f7d5*/
    goto LABEL_25; /*0x41f7d5*/
  }
LABEL_26:
  *((_DWORD *)this + 54) = v10; /*0x41f7de*/
  v15 = strtok(0, Str); /*0x41f7ea*/
  if ( !v15 ) /*0x41f7f4*/
    return 0; /*0x41faf5*/
  strcpy(v44, "00"); /*0x41f807*/
  v16 = 0; /*0x41f80e*/
  v17 = *v15 == 0; /*0x41f810*/
  v18 = v15; /*0x41f812*/
  LODWORD(v45) = 0; /*0x41f818*/
  if ( !v17 ) /*0x41f81c*/
  {
    do /*0x41f876*/
    {
      if ( isspace(*v18) ) /*0x41f822*/
      {
        do /*0x41f834*/
          v19 = *++v18; /*0x41f82e*/
        while ( isspace(v19) ); /*0x41f834*/
      }
      v20 = *v18; /*0x41f840*/
      v21 = *++v18; /*0x41f842*/
      v44[0] = v20; /*0x41f848*/
      if ( v21 ) /*0x41f84c*/
      {
        v44[1] = v21; /*0x41f84e*/
        ++v18; /*0x41f852*/
      }
      else
      {
        v44[1] = 0; /*0x41f855*/
      }
      if ( v16 >= 0x20 ) /*0x41f85c*/
        break; /*0x41f85c*/
      *((_BYTE *)this + v16 + 228) = globalHelper_0C9DBD((int)v44, (int)&v45, 16); /*0x41f86f*/
      ++v16; /*0x41f87b*/
    }
    while ( *v18 ); /*0x41f876*/
  }
  v22 = strtok(0, Str); /*0x41f886*/
  if ( v22 ) /*0x41f890*/
  {
    atof(v22); /*0x41f893*/
    LOWORD(v23) = Math::RoundToInt(v2); /*0x41f89b*/
    v45 = v23; /*0x41f8a0*/
    __asm /*0x41f8a8*/
    {
      fild [esp+280h+var_26C]
      fstp qword ptr [ebp+0B8h]
    }
    *((double *)this + 23) = _RT1; /*0x41f8ac*/
  }
  v25 = strtok(0, Str); /*0x41f8b8*/
  if ( v25 ) /*0x41f8c2*/
  {
    atof(v25); /*0x41f8c5*/
    LOWORD(v26) = Math::RoundToInt(v2); /*0x41f8cd*/
    v45 = v26; /*0x41f8d2*/
    __asm /*0x41f8da*/
    {
      fild [esp+280h+var_26C]
      fstp qword ptr [ebp+0C0h]
    }
    *((double *)this + 24) = _RT1; /*0x41f8de*/
  }
  v28 = strtok(0, Str); /*0x41f8ea*/
  if ( v28 ) /*0x41f8f4*/
  {
    atof(v28); /*0x41f8f7*/
    LOWORD(v29) = Math::RoundToInt(v2); /*0x41f8ff*/
    v45 = v29; /*0x41f904*/
    __asm /*0x41f90c*/
    {
      fild [esp+280h+var_26C]
      fstp qword ptr [ebp+0C8h]
    }
    *((double *)this + 25) = _RT1; /*0x41f910*/
  }
  v31 = strtok(0, Str); /*0x41f91c*/
  if ( v31 ) /*0x41f926*/
    this->q034 = atoi(v31) != 0; /*0x41f936*/
  strtok(0, Str); /*0x41f942*/
  v32 = strtok(0, Str); /*0x41f94d*/
  if ( v32 ) /*0x41f957*/
    this->q02B = atoi(v32); /*0x41f962*/
  v33 = strtok(0, Str); /*0x41f96e*/
  if ( v33 ) /*0x41f978*/
    *((_BYTE *)this + 209) = atoi(v33) != 0; /*0x41f988*/
  v34 = strtok(0, Str); /*0x41f994*/
  if ( v34 ) /*0x41f99e*/
  {
    strncpy((char *)&v46[0].?, v34, 0x18u); /*0x41f9a8*/
    v46[0].?[7] = 0; /*0x41f9b4*/
    String::Trim((char *)&v46[0].?); /*0x41f9b8*/
    this->q038 = 0; /*0x41f9bd*/
    if ( _strcmpi((char *)&v46[0].?, (char *)off_818114) ) /*0x41f9cf*/
      this->q038 = TeamTypeClass::FindByName((TeamTypeClass *)&v46[0].?); /*0x41f9e4*/
  }
  v35 = strtok(0, Str); /*0x41f9f0*/
  if ( v35 ) /*0x41f9fa*/
    *((_BYTE *)this + 210) = atoi(v35) != 0; /*0x41fa0a*/
  v36 = strtok(0, Str); /*0x41fa16*/
  if ( v36 ) /*0x41fa20*/
    *((_BYTE *)this + 211) = atoi(v36) != 0; /*0x41fa30*/
  v37 = strtok(0, Str); /*0x41fa3c*/
  if ( v37 ) /*0x41fa46*/
    *((_BYTE *)this + 212) = atoi(v37) != 0; /*0x41fa56*/
  v38 = *((_DWORD *)this + 55); /*0x41fa5c*/
  if ( v38 ) /*0x41fa64*/
  {
    v39 = this->q02C; /*0x41fa6c*/
    if ( v39 <= HouseClass::GetMaxBuildLevel(*(HouseClass **)(v38 + 228)) ) /*0x41fa79*/
      MaxBuildLevel = HouseClass::GetMaxBuildLevel(*(HouseClass **)(*((_DWORD *)this + 55) + 228)); /*0x41fa8b*/
    else
      MaxBuildLevel = v39; /*0x41fa7b*/
    this->q02C = MaxBuildLevel; /*0x41fa90*/
  }
  v41 = this->q038; /*0x41fa96*/
  if ( v41 ) /*0x41fa9e*/
  {
    v42 = this->q02C; /*0x41faa6*/
    if ( v42 > HouseClass::GetMaxBuildLevel(*(HouseClass **)(v41 + 228)) ) /*0x41fab3*/
    {
      this->q02C = v42; /*0x41fab8*/
      return 1; /*0x41fac9*/
    }
    this->q02C = HouseClass::GetMaxBuildLevel(*(HouseClass **)(this->q038 + 228)); /*0x41fadd*/
  }
  return 1; /*0x41fab7*/
}



// ==== 0x0041FB10  AITriggerTypeClass::SaveToINI  this=AITriggerTypeClass  sig=csp ====
char __thiscall TriggerTypeClass::SaveToINI(AITriggerTypeClass *this, char *a2)
{
  void *v3; // ebp
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // edi
  char *v9; // ebx
  bool v10; // zf
  void *v12; // [esp+10h] [ebp-40Ch]
  void *v13; // [esp+14h] [ebp-408h]
  void *v14; // [esp+18h] [ebp-404h]
  char Buffer[512]; // [esp+1Ch] [ebp-400h] BYREF
  char Source[512]; // [esp+21Ch] [ebp-200h] BYREF

  v12 = off_818114; /*0x41fb20*/
  v13 = off_818114; /*0x41fb24*/
  v3 = off_818114; /*0x41fb28*/
  v14 = off_818114; /*0x41fb2a*/
  v4 = *((_DWORD *)this + 55); /*0x41fb2e*/
  if ( v4 ) /*0x41fb37*/
    v12 = (void *)(v4 + 36); /*0x41fb3c*/
  v5 = this->q038; /*0x41fb40*/
  if ( v5 ) /*0x41fb48*/
    v13 = (void *)(v5 + 36); /*0x41fb4d*/
  if ( this->u32_28 == 1 ) /*0x41fb58*/
  {
    v6 = *((_DWORD *)this + 42); /*0x41fb65*/
    if ( v6 != -1 ) /*0x41fb6e*/
      v3 = (void *)(*((_DWORD *)dword_A83C9C + v6) + 36); /*0x41fb79*/
  }
  else if ( this->u32_28 == 2 ) /*0x41fb5b*/
  {
    v3 = off_818118; /*0x41fb5d*/
  }
  v7 = *((_DWORD *)this + 54); /*0x41fb7c*/
  if ( v7 ) /*0x41fb84*/
    v14 = (void *)(v7 + 36); /*0x41fb89*/
  v8 = 0; /*0x41fb8d*/
  v9 = Buffer; /*0x41fb8f*/
  do /*0x41fbb2*/
  {
    sprintf(v9, &g_INI_Key_Civilian.uiNameLabel[15], *((unsigned __int8 *)this + v8++ + 228)); /*0x41fba3*/
    v9 += 2; /*0x41fbac*/
  }
  while ( v8 < 0x20 ); /*0x41fbb2*/
  v10 = *((_BYTE *)this + 212) == 0; /*0x41fbbc*/
  *v9 = 0; /*0x41fbbe*/
  sprintf( /*0x41fc64*/
    Source,
    (const char *const)&g_INI_Key_Civilian.?,
    (char *)this + 100,
    v12,
    v3,
    this->q02C,
    *((_DWORD *)this + 38),
    v14,
    Buffer,
    *((_DWORD *)this + 46),
    *((_DWORD *)this + 47),
    this->q030,
    this->q031,
    *((_DWORD *)this + 50),
    this->alignmentPadding,
    this->q034 != 0,
    0,
    this->q02B,
    *((_BYTE *)this + 209) != 0,
    v13,
    *((_BYTE *)this + 210) != 0,
    *((_BYTE *)this + 211) != 0,
    !v10);
  return INIClass::SetString( /*0x41fc8a*/
           a2,
           (unsigned __int8 *)aAitriggertypes,
           (char *)&this->AITriggerTypeClass_field_0x24,
           Source);
}



// ==== 0x0041FD30  ObjectClass::method_41FD30  this=ObjectClass  sig=csp ====
int __thiscall sub_41FD30(_DWORD *this, int a2)
{
  this->occupant = a2; /*0x41fd34*/
  return a2; /*0x41fd3a*/
}



// ==== 0x0041FD40  ObjectClass::method_41FD40  this=ObjectClass  sig=csp ====
int __thiscall sub_41FD40(_DWORD *this, int a2)
{
  *(this + 55) = a2; /*0x41fd44*/
  return a2; /*0x41fd4a*/
}



// ==== 0x0041FD50  ObjectClass::method_41FD50  this=ObjectClass  sig=csp ====
int __thiscall sub_41FD50(_DWORD *this, int a2)
{
  this->attachedBomb = a2; /*0x41fd54*/
  return a2; /*0x41fd5a*/
}



// ==== 0x0041FD60  AITriggerTypeClass::RegisterSuccess  this=AITriggerTypeClass  sig=csp ====
int __thiscall AITriggerTypeClass::RegisterSuccess(AITriggerTypeClass *this)
{
  int v1; // edx
  double v2; // st7
  double v3; // st7
  int result; // eax

  v1 = *((_DWORD *)this + 66); /*0x41fd61*/
  v2 = 0.0; /*0x41fd67*/
  if ( v1 > 0 ) /*0x41fd73*/
  {
    v2 = (double)*((int *)this + 66) * ((double)*((int *)this + 65) / (double)*((int *)this + 66) - 0.5); /*0x41fd89*/
    if ( v2 < 0.0 ) /*0x41fd96*/
      v2 = 0.0; /*0x41fd9a*/
  }
  v3 = v2 + *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 192) + *((double *)this + 23); /*0x41fdb1*/
  *((double *)this + 23) = v3; /*0x41fdb3*/
  if ( v3 < *((double *)this + 24) ) /*0x41fdc4*/
  {
    *((_DWORD *)this + 46) = this->q030; /*0x41fdcc*/
    *((_DWORD *)this + 47) = this->q031; /*0x41fdd8*/
  }
  if ( *((double *)this + 23) > *((double *)this + 25) ) /*0x41fdef*/
  {
    *((_DWORD *)this + 46) = *((_DWORD *)this + 50); /*0x41fdf7*/
    *((_DWORD *)this + 47) = this->alignmentPadding; /*0x41fe03*/
  }
  result = *((_DWORD *)this + 65) + 1; /*0x41fe0f*/
  *((_DWORD *)this + 65) = result; /*0x41fe11*/
  *((_DWORD *)this + 66) = v1 + 1; /*0x41fe17*/
  return result; /*0x41fe1e*/
}



// ==== 0x0041FE20  AITriggerTypeClass::RegisterFailure  this=AITriggerTypeClass  sig=csp ====
int __thiscall AITriggerTypeClass::RegisterFailure(AITriggerTypeClass *this)
{
  int v1; // edx
  double v2; // st7
  double v3; // st7
  int result; // eax
  __int16 v5; // fps
  double v6; // st7
  bool v7; // c0
  char v8; // c2
  bool v9; // c3

  v1 = *((_DWORD *)this + 66); /*0x41fe21*/
  v2 = 0.0; /*0x41fe28*/
  if ( v1 > 0 ) /*0x41fe3a*/
  {
    v2 = (double)v1 /*0x41fe56*/
       * (((double)*((int *)this + 65) / (double)v1 - 0.5)
        * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 208));
    if ( v2 > 0.0 ) /*0x41fe63*/
      v2 = 0.0; /*0x41fe67*/
  }
  v3 = v2 + *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 200) + *((double *)this + 23); /*0x41fe7a*/
  *((double *)this + 23) = v3; /*0x41fe7c*/
  if ( v3 < *((double *)this + 24) ) /*0x41fe8d*/
  {
    *((_DWORD *)this + 46) = this->q030; /*0x41fe95*/
    result = this->q031; /*0x41fe9b*/
    *((_DWORD *)this + 47) = result; /*0x41fea1*/
  }
  v6 = *((double *)this + 23); /*0x41fea7*/
  v7 = v6 < *((double *)this + 25); /*0x41fead*/
  v8 = 0; /*0x41fead*/
  v9 = v6 == *((double *)this + 25); /*0x41fead*/
  LOWORD(result) = v5; /*0x41feb3*/
  if ( v6 > *((double *)this + 25) ) /*0x41feb8*/
  {
    *((_DWORD *)this + 46) = *((_DWORD *)this + 50); /*0x41fec0*/
    result = this->alignmentPadding; /*0x41fec6*/
    *((_DWORD *)this + 47) = result; /*0x41fecc*/
  }
  *((_DWORD *)this + 66) = v1 + 1; /*0x41fed3*/
  return result; /*0x41fed9*/
}



// ==== 0x0041FEE0  globalHelper_01FEE0  this=-  sig=csp ====
bool __stdcall sub_41FEE0(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // edi
  _DWORD *v4; // esi
  int *CurrentOption; // eax
  int v6; // esi
  int v7; // edi
  int v8; // esi
  int TileIndex; // edi

  v3 = a1; /*0x41fee2*/
  if ( *(_BYTE *)(a1 + 240) ) /*0x41fee6*/
  {
    v4 = a3; /*0x41fef4*/
    if ( a3 ) /*0x41fefa*/
    {
      a3 = (_DWORD *)*HouseClass::GetCurrentOption(a2, &a2); /*0x41ff14*/
      CurrentOption = HouseClass::GetCurrentOption(v4, &a2); /*0x41ff1b*/
      v6 = *(_DWORD *)(v3 + 236); /*0x41ff22*/
      a1 = *CurrentOption; /*0x41ff28*/
      if ( !*(_BYTE *)(v3 + 241) ) /*0x41ff37*/
      {
        TileIndex = MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&a1, v6, 0); /*0x41ffa2*/
        return MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&a3, v6, 0) == TileIndex; /*0x41ffbd*/
      }
      v7 = MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&a1, v6, 0); /*0x41ff55*/
      if ( MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&a3, v6, 0) == v7 ) /*0x41ff5e*/
        return 0; /*0x41ff5e*/
      v8 = MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&a1, 5, 0); /*0x41ff81*/
      if ( MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)&a3, 5, 0) != v8 ) /*0x41ff8a*/
        return 0; /*0x41ff90*/
    }
  }
  return 1; /*0x41ff8c*/
}



// ==== 0x0041FFD0  AITriggerTypeClass::GetTypeIdentifier  this=AITriggerTypeClass  sig=csp ====
int AITriggerTypeClass::GetTypeIdentifier(AITriggerTypeClass *this)
{
  return 59; /*0x41ffd5*/
}



// ==== 0x0041FFE0  AITriggerTypeClass::GetObjectSize  this=AITriggerTypeClass  sig=csp ====
int AITriggerTypeClass::GetObjectSize(AITriggerTypeClass *this)
{
  return 272; /*0x41ffe5*/
}



// ==== 0x0041FFF0  AITriggerTypeClass::ddtor  this=AITriggerTypeClass  sig=csp ====
_DWORD *__thiscall AITriggerTypeClass::ddtor(AITriggerTypeClass *this, char a2)
{
  int v3; // eax
  AITriggerTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &AITriggerTypeClass::`vftable'; /*0x41fffd*/
  this->AITriggerTypeClass_field_0x04 = (int)&AITriggerTypeClass::`vftable'; /*0x420003*/
  this->AITriggerTypeClass_field_0x08 = (int)&AITriggerTypeClass::`vftable'; /*0x42000a*/
  this->AITriggerTypeClass_field_0x0C = (int)&AITriggerTypeClass::`vftable'; /*0x420011*/
  v5 = this; /*0x42001f*/
  v3 = (*(int (__thiscall **)(_DWORD *, AITriggerTypeClass **))(dword_A8B200 + 16))(&dword_A8B200, &v5); /*0x420023*/
  if ( v3 != -1 && v3 < dword_A8B210 && v3 < --dword_A8B210 ) /*0x42003e*/
  {
    do /*0x420056*/
    {
      ++v3; /*0x420046*/
      *((_DWORD *)dword_A8B204 + v3 - 1) = *((_DWORD *)dword_A8B204 + v3); /*0x42004a*/
    }
    while ( v3 < dword_A8B210 ); /*0x420056*/
  }
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x42005a*/
  if ( (a2 & 1) != 0 ) /*0x420064*/
    __3_YAXPAX_Z(this); /*0x420067*/
  return this->__pad_0; /*0x420071*/
}


