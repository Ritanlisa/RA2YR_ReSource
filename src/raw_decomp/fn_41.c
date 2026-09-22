// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00410070  sub_410070  this=-  sig=ida-proto ====
void sub_410070()
{
  MEMORY[0x887678] = Math::ArcTan((double)MEMORY[0x8876C0] * 0.00390625); /*0x410087*/
}


// ==== 0x004100A0  sub_4100A0  this=-  sig=ida-proto ====
void sub_4100A0()
{
  MEMORY[0x887690] = Math::ArcTan((double)(2 * MEMORY[0x8876C0]) / MEMORY[0x887668]); /*0x4100c2*/
}


// ==== 0x004100D0  sub_4100D0  this=-  sig=ida-proto ====
__int64 sub_4100D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8876C0]) + 0.5); /*0x4100eb*/
  MEMORY[0x8876B4] = result; /*0x4100f0*/
  return result; /*0x4100f6*/
}


// ==== 0x00410100  AbstractClass::initVtableBase  this=AbstractClass  sig=ida-proto ====
int AbstractClass::sub_410100()
{
  MEMORY[0x887660] = 0; /*0x410102*/
  MEMORY[0x887662] = 0; /*0x410108*/
  return 0; /*0x41010e*/
}


// ==== 0x00410110  sub_410110  this=-  sig=ida-proto ====
int sub_410110()
{
  MEMORY[0x887680] = 0; /*0x410112*/
  MEMORY[0x887684] = 0; /*0x410117*/
  MEMORY[0x887688] = 0; /*0x41011c*/
  return 0; /*0x410121*/
}


// ==== 0x00410130  sub_410130  this=-  sig=ida-proto ====
int sub_410130()
{
  MEMORY[0x8876B0] = 0; /*0x410135*/
  MEMORY[0x8876A8] = 128; /*0x41013f*/
  MEMORY[0x8876AC] = 128; /*0x410144*/
  return 128; /*0x410149*/
}


// ==== 0x00410150  sub_410150  this=-  sig=ida-proto ====
int sub_410150()
{
  MEMORY[0x887650] = 0; /*0x410152*/
  MEMORY[0x887654] = 0; /*0x410157*/
  MEMORY[0x887658] = 0; /*0x41015c*/
  MEMORY[0x88765C] = 0; /*0x410161*/
  return 0; /*0x410166*/
}


// ==== 0x00410170  AbstractClass::Constructor  this=AbstractClass  sig=csp ====
AbstractClass *__thiscall AbstractClass_Constructor(AbstractClass *this)
{
  AbstractClass *result; // eax
  char v2; // cl

  result = this; /*0x410170*/
  this->? = &vt_INoticeSink; /*0x410174*/
  this->? = &vt_INoticeSource; /*0x41017b*/
  this->nextArrayIndex = 0; /*0x410182*/
  this->referenceCount = 0; /*0x410185*/
  this->NeedsSaveOrLink = 0; /*0x410188*/
  v2 = this->abstractFlags & 0xF8; /*0x41018e*/
  result->uniqueId = -1; /*0x410191*/
  result->__pad_0 = &AbstractClass::`vftable'; /*0x410198*/
  result->? = &AbstractClass::`vftable'; /*0x41019e*/
  result->? = &AbstractClass::`vftable'; /*0x4101a5*/
  result->? = &vt_AbstractClass; /*0x4101ac*/
  LOBYTE(result->abstractFlags) = v2; /*0x4101b3*/
  return result; /*0x4101b6*/
}


// ==== 0x004101C0  AbstractClass::InitVtables  this=AbstractClass  sig=csp ====
_DWORD *__thiscall AbstractClass::InitVtables(_DWORD *this, IUnknown *aP1)
{
  this->vtable3 = &vt_INoticeSink; /*0x4101c2*/
  this->vtable4 = &vt_INoticeSource; /*0x4101c9*/
  *this = &AbstractClass::`vftable'; /*0x4101d0*/
  this->vtable2 = &AbstractClass::`vftable'; /*0x4101d6*/
  this->vtable3 = &AbstractClass::`vftable'; /*0x4101dd*/
  this->vtable4 = &vt_AbstractClass; /*0x4101e4*/
  return this; /*0x4101eb*/
}


// ==== 0x004101F0  AbstractClass::DTOR  this=AbstractClass  sig=csp ====
void __thiscall AbstractClass::DTOR(_DWORD *this)
{
  *this = &AbstractClass::`vftable'; /*0x4101f0*/
  this->vtable2 = &AbstractClass::`vftable'; /*0x4101f6*/
  this->vtable3 = &AbstractClass::`vftable'; /*0x4101fd*/
  this->vtable4 = &vt_AbstractClass; /*0x410204*/
}


// ==== 0x00410210  AbstractClass::Dispatch  this=AbstractClass  sig=csp ====
int __stdcall INoticeSink_Dispatch(int a1)
{
  return (*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 4) + 44))(a1 - 4); /*0x41021d*/
}


// ==== 0x00410220  AbstractClass::GetVtable3  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::GetVtable3(AbstractClass *aP0)
{
  return *(_DWORD *)&aP0->__pad_0[12]; /*0x410227*/
}


// ==== 0x00410230  AbstractClass::GenerateUniqueID  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass_GenerateUniqueID(int a1)
{
  int result; // eax

  if ( MEMORY[0xA8B230] ) /*0x410238*/
  {
    result = AbstractClass::updateAITimer(); /*0x410246*/
    *(_DWORD *)(a1 + 12) = result; /*0x41024f*/
  }
  else
  {
    *(_DWORD *)(a1 + 12) = 0; /*0x410240*/
    return 0; /*0x41023e*/
  }
  return result; /*0x410243*/
}


// ==== 0x00410260  AbstractClass::QueryInterface  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::QueryInterface(#374 *this)
{
  int *v2; // ecx
  #373 *thisa; // [esp+8h] [ebp+4h]
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
      v2 = (int *)((char *)thisa + 4); /*0x4102d8*/
    else
      v2 = 0; /*0x4102dd*/
    *ppv = v2; /*0x4102df*/
  }
  if ( !*ppv ) /*0x4102e1*/
    return -2147467262; /*0x4102e6*/
  (*(void (__stdcall **)(#373 *))(*(_DWORD *)thisa + 4))(thisa); /*0x4102f2*/
  return 0; /*0x41026e*/
}


// ==== 0x00410300  AbstractClass::COMStub_AddRef  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::_vt1(#374 *this)
{
  return 1; /*0x410305*/
}


// ==== 0x00410310  AbstractClass::COMStub_Release  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::_vt2(#374 *this)
{
  return 1; /*0x410315*/
}


// ==== 0x00410320  AbstractClass::SaveLoad_Prefix  this=ObjectTypeClass  sig=csp ====
int __stdcall AbstractClass::SaveLoad_Prefix(ObjectTypeClass *aP0, ObjectTypeClass *aP1, ObjectTypeClass *aP2)
{
  ObjectTypeClass *v3; // esi
  int result; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  ObjectTypeClass *v8; // [esp-4h] [ebp-18h]

  v3 = aP1; /*0x410321*/
  if ( !aP1 ) /*0x410328*/
    return -2147467261; /*0x41032b*/
  v5 = *(_DWORD *)aP1->__pad_0; /*0x410338*/
  v8 = aP1; /*0x410343*/
  aP1 = aP0; /*0x410344*/
  result = (*(int (__stdcall **)(ObjectTypeClass *, ObjectTypeClass **, int, _DWORD))(v5 + 16))(v8, &aP1, 4, 0); /*0x410348*/
  if ( result >= 0 ) /*0x41034d*/
  {
    v6 = *(_DWORD *)v3->__pad_0; /*0x410352*/
    v7 = (*(int (__thiscall **)(ObjectTypeClass *, _DWORD))(*(_DWORD *)aP0->__pad_0 + 48))(aP0, 0); /*0x410358*/
    result = (*(int (__stdcall **)(ObjectTypeClass *, ObjectTypeClass *, int))(v6 + 16))(v3, aP0, v7); /*0x41035e*/
    if ( result >= 0 ) /*0x410364*/
    {
      if ( aP2 ) /*0x41036c*/
        LOBYTE(aP0->NeedsSaveOrLink) = 0; /*0x41036e*/
    }
  }
  return result; /*0x41032a*/
}


// ==== 0x00410380  AbstractClass::SaveLoad_Prefix_0  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::SaveLoad_Prefix_0(AbstractClass *aP0, AbstractClass *aP1)
{
  AbstractClass *v2; // edi
  int result; // eax
  int referenceCount; // ebx
  int v5; // ebp
  int v6; // eax

  v2 = aP1; /*0x410381*/
  if ( !aP1 ) /*0x410387*/
    return -2147467261; /*0x410389*/
  result = (*(int (__stdcall **)(AbstractClass *, AbstractClass **, int, _DWORD))(*(_DWORD *)aP1->__pad_0 + 12))( /*0x41039e*/
             aP1,
             &aP1,
             4,
             0);
  if ( result >= 0 ) /*0x4103a3*/
  {
    SwizzleManagerClass::Here_I_Am((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], aP1, aP0); /*0x4103b7*/
    referenceCount = aP0->referenceCount; /*0x4103be*/
    v5 = *(_DWORD *)v2->__pad_0; /*0x4103c1*/
    v6 = (*(int (__thiscall **)(AbstractClass *, _DWORD))(*(_DWORD *)aP0->__pad_0 + 48))(aP0, 0); /*0x4103c7*/
    result = (*(int (__stdcall **)(AbstractClass *, AbstractClass *, int))(v5 + 12))(v2, aP0, v6); /*0x4103cd*/
    aP0->referenceCount = referenceCount; /*0x4103d0*/
  }
  return result; /*0x41038e*/
}


// ==== 0x004103E0  AbstractClass::GetSizeMax  this=AbstractClass  sig=csp ====
int __thiscall ObjectClass::GetSizeMax(#374 *this)
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
int __thiscall AbstractClass::ProcessPower(#378 *this)
{
  int v2; // ecx
  int *v4; // [esp+Ch] [ebp+4h]

  Power::TimerProcess(this->vtable2); /*0x41041e*/
  LOBYTE(v2) = this->needsSave; /*0x410423*/
  return Power::FlagProcess(v4, v2); /*0x41042e*/
}


// ==== 0x00410440  AbstractClass::computeDistance  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::computeDistance(#378 *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x410440*/
  return result; /*0x410442*/
}


// ==== 0x00410450  AbstractClass::IsClean  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::IsClean(#374 *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return *(_BYTE *)(v2 + 32) == 0; /*0x41045e*/
}


// ==== 0x00410470  AbstractClass::StubReturnFalse  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::StubReturnFalse(#374 *this)
{
  int result; // eax

  return result; /*0x410470*/
}


// ==== 0x00410480  AbstractClass::COMStub_Return0_10  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_10(#378 *this)
{
  int result; // eax

  return result; /*0x410480*/
}


// ==== 0x00410490  AbstractClass::computeDistanceSquared  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::computeDistanceSquared(#374 *this)
{
  return -1; /*0x410493*/
}


// ==== 0x004104A0  AbstractClass::COMStub_Return0_15  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::_vt15(#374 *this)
{
  return 0; /*0x4104a2*/
}


// ==== 0x004104B0  AbstractClass::COMStub_Return0_16  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::_vt16(#374 *this)
{
  return 0; /*0x4104b2*/
}


// ==== 0x004104C0  AbstractClass::GetInvalidCoord  this=AbstractClass  sig=csp ====
int __thiscall Map::GetInvalidCoord(#376 *this)
{
  _DWORD *v2; // [esp+4h] [ebp+4h]

  *v2 = MEMORY[0x887680]; /*0x4104cc*/
  v2[1] = MEMORY[0x887684]; /*0x4104d4*/
  v2[2] = MEMORY[0x887688]; /*0x4104dd*/
  return (int)v2; /*0x4104e0*/
}


// ==== 0x004104F0  AbstractClass::GetCoordsEx  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::GetCoordsEx(#374 *this)
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *))(this->q048)(this, v3); /*0x4104fe*/
  *v4 = *v1; /*0x410508*/
  v4[1] = v1[1]; /*0x41050d*/
  v4[2] = v1[2]; /*0x410514*/
  return (int)v4; /*0x410510*/
}


// ==== 0x00410520  AbstractClass::COMStub_Return0_20  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::_vt20(#376 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x410520*/
  return result; /*0x410522*/
}


// ==== 0x00410530  AbstractClass::COMStub_Return0_21  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::_vt21(#378 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x410530*/
  return result; /*0x410532*/
}


// ==== 0x00410540  AbstractClass::GetCoords  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::GetCoords(#374 *this)
{
  int *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  #363 *out; // [esp+14h] [ebp+4h]

  v1 = (int *)(*(int (__thiscall **)(#374 *, _BYTE *))(this->q048)(this, v3); /*0x41054e*/
  *(_DWORD *)out = *v1; /*0x410558*/
  *((_DWORD *)out + 1) = v1[1]; /*0x41055d*/
  *((_DWORD *)out + 2) = v1[2]; /*0x410564*/
  return (int)out; /*0x410560*/
}


// ==== 0x00410570  AbstractClass::COMStub_Return0_23  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_23(#378 *this)
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

  *(_DWORD *)this->__pad_0 = &AbstractClass::`vftable'; /*0x4105a9*/
  *(_DWORD *)&this->__pad_0[4] = &AbstractClass::`vftable'; /*0x4105af*/
  *(_DWORD *)&this->__pad_0[8] = &AbstractClass::`vftable'; /*0x4105b6*/
  *(_DWORD *)&this->__pad_0[12] = &vt_AbstractClass; /*0x4105bd*/
  if ( (v3 & 1) != 0 ) /*0x4105c4*/
    __3_YAXPAX_Z(this); /*0x4105c7*/
  return (int)this->__pad_0; /*0x4105d1*/
}


// ==== 0x004105E0  AbstractClass::QueryInterface  this=AbstractClass  sig=csp ====
int __stdcall IRTTITypeInfo_QueryInterface(int a1, const void *a2, _DWORD *a3)
{
  return AbstractClass::QueryInterface(a1 - 4, a2, a3);
}


// ==== 0x004105F0  AbstractClass::Dispatch  this=AbstractClass  sig=csp ====
int __stdcall INoticeSource_Dispatch(int a1)
{
  return AbstractClass::COMStub_AddRef(a1 - 4);
}


// ==== 0x00410600  AbstractClass::vt_entry_40  this=AbstractClass  sig=csp ====
int __stdcall INoticeSource_Stub1(int a1)
{
  return AbstractClass::COMStub_Release(a1 - 4);
}


// ==== 0x00410610  sub_410610  this=-  sig=ida-proto ====
void sub_410610()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41061c*/
  MEMORY[0x8876D8] = Math::Sqrt(v0 + v0); /*0x41062e*/
}


// ==== 0x00410640  sub_410640  this=-  sig=ida-proto ====
void sub_410640()
{
  MEMORY[0x887728] = MEMORY[0x8876D8] / 60.0; /*0x41064c*/
}


// ==== 0x00410660  sub_410660  this=-  sig=ida-proto ====
void sub_410660()
{
  MEMORY[0x887710] = 1.0 / MEMORY[0x887728]; /*0x41066c*/
}


// ==== 0x00410680  sub_410680  this=-  sig=ida-proto ====
void sub_410680()
{
  MEMORY[0x887708] = 0.0174532925199433 * 45.0; /*0x41068c*/
}


// ==== 0x004106A0  sub_4106A0  this=-  sig=ida-proto ====
void sub_4106A0()
{
  MEMORY[0x8876E0] = 0.0174532925199433 * 60.0; /*0x4106ac*/
}


// ==== 0x004106C0  sub_4106C0  this=-  sig=ida-proto ====
void sub_4106C0()
{
  MEMORY[0x8876C8] = 0.0174532925199433 * 90.0; /*0x4106cc*/
}


// ==== 0x004106E0  sub_4106E0  this=-  sig=ida-proto ====
__int64 sub_4106E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8876C8] - MEMORY[0x8876E0]); /*0x4106f2*/
  result = Math::RoundToInt(v0 * MEMORY[0x8876D8] * 0.5); /*0x410706*/
  MEMORY[0x887730] = result; /*0x41070b*/
  return result; /*0x410710*/
}


// ==== 0x00410720  sub_410720  this=-  sig=ida-proto ====
void sub_410720()
{
  MEMORY[0x8876E8] = Math::ArcTan((double)MEMORY[0x887730] * 0.00390625); /*0x410737*/
}


// ==== 0x00410750  sub_410750  this=-  sig=ida-proto ====
void sub_410750()
{
  MEMORY[0x887700] = Math::ArcTan((double)(2 * MEMORY[0x887730]) / MEMORY[0x8876D8]); /*0x410772*/
}


// ==== 0x00410780  sub_410780  this=-  sig=ida-proto ====
__int64 sub_410780()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x887730]) + 0.5); /*0x41079b*/
  MEMORY[0x887724] = result; /*0x4107a0*/
  return result; /*0x4107a6*/
}


// ==== 0x004107B0  sub_4107B0  this=-  sig=ida-proto ====
int sub_4107B0()
{
  MEMORY[0x8876D0] = 0; /*0x4107b2*/
  MEMORY[0x8876D2] = 0; /*0x4107b8*/
  return 0; /*0x4107be*/
}


// ==== 0x004107C0  sub_4107C0  this=-  sig=ida-proto ====
int sub_4107C0()
{
  MEMORY[0x8876F0] = 0; /*0x4107c2*/
  MEMORY[0x8876F4] = 0; /*0x4107c7*/
  MEMORY[0x8876F8] = 0; /*0x4107cc*/
  return 0; /*0x4107d1*/
}


// ==== 0x004107E0  sub_4107E0  this=-  sig=ida-proto ====
int sub_4107E0()
{
  MEMORY[0x887720] = 0; /*0x4107e5*/
  MEMORY[0x887718] = 128; /*0x4107ef*/
  MEMORY[0x88771C] = 128; /*0x4107f4*/
  return 128; /*0x4107f9*/
}


// ==== 0x00410800  AbstractTypeClass::Constructor  this=INIClass  sig=csp ====
int __thiscall AbstractTypeClass::Constructor(int this, AbstractClass *aP1)
{
  RandomStruct *v3; // ebx
  int v4; // eax
  char Buffer[16]; // [esp+10h] [ebp-44h] BYREF
  char Destination[48]; // [esp+20h] [ebp-34h] BYREF
  char v8; // [esp+50h] [ebp-4h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x410809*/
  v3 = (RandomStruct *)(this + 36); /*0x410812*/
  *(_BYTE *)(this + 36) = 0; /*0x410817*/
  *(_BYTE *)(this + 61) = 0; /*0x41081a*/
  *(_BYTE *)(this + 100) = 0; /*0x41081e*/
  *(_DWORD *)this = &AbstractTypeClass::`vftable'; /*0x410822*/
  *(_DWORD *)(this + 4) = &AbstractTypeClass::`vftable'; /*0x410829*/
  *(_DWORD *)(this + 8) = &AbstractTypeClass::`vftable'; /*0x410830*/
  *(_DWORD *)(this + 12) = &vt_AbstractTypeClass; /*0x410837*/
  if ( aP1 ) /*0x41083e*/
  {
    strncpy(Destination, aP1->__pad_0, (IUnknown *)0x18); /*0x410895*/
    Destination[24] = 0; /*0x4108a3*/
    if ( Destination == (char *)v3 ) /*0x4108a8*/
      goto LABEL_9; /*0x4108a8*/
    goto LABEL_8; /*0x4108a8*/
  }
  sprintf(Buffer, &stru_817828, (INIClass *)this); /*0x41084b*/
  if ( Buffer ) /*0x410859*/
  {
    strncpy(Destination, Buffer, (IUnknown *)0x18); /*0x41086d*/
    Destination[24] = 0; /*0x410875*/
  }
  else
  {
    Destination[0] = 0; /*0x41085b*/
  }
  if ( Destination != (char *)v3 ) /*0x410880*/
  {
LABEL_8:
    qmemcpy(v3, Destination, 0x18u); /*0x4108b5*/
    *(_BYTE *)(this + 60) = Destination[24]; /*0x4108b7*/
  }
LABEL_9:
  if ( this == -36 ) /*0x4108ba*/
  {
    Destination[0] = 0; /*0x4108bc*/
  }
  else
  {
    strncpy(Destination, (const char *)(this + 36), (IUnknown *)0x30); /*0x4108ca*/
    v8 = 0; /*0x4108d2*/
  }
  if ( Destination != (char *)(this + 100) ) /*0x4108e0*/
  {
    qmemcpy((void *)(this + 100), Destination, 0x30u); /*0x4108eb*/
    *(_BYTE *)(this + 148) = v8; /*0x4108ed*/
  }
  *(_DWORD *)(this + 96) = &stru_87C374.__pad_579C[23588]; /*0x4108ee*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22212] < *(int *)&HouseClass_Player.__pad_5568[22204] /*0x410929*/
    || (HouseClass_Player.__pad_5568[22209] || !*(_DWORD *)&HouseClass_Player.__pad_5568[22204])
    && *(int *)&HouseClass_Player.__pad_5568[22216] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[22196] + 8))(
         &HouseClass_Player.__pad_5568[22196],
         *(_DWORD *)&HouseClass_Player.__pad_5568[22204] + *(_DWORD *)&HouseClass_Player.__pad_5568[22216],
         0) )
  {
    v4 = (*(_DWORD *)&HouseClass_Player.__pad_5568[22212])++; /*0x410936*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22200] + 4 * v4) = this; /*0x410945*/
  }
  return this; /*0x410948*/
}


// ==== 0x00410960  AbstractTypeClass::Init  this=AbstractTypeClass  sig=csp ====
int __thiscall AbstractTypeClass::Init(int this, AbstractTypeClass *aP1)
{
  char v3; // al

  AbstractClass::InitVtables((_DWORD *)this, (int)aP1); /*0x410968*/
  v3 = *(_BYTE *)(this + 61); /*0x41096d*/
  *(_DWORD *)this = &AbstractTypeClass::`vftable'; /*0x410975*/
  *(_DWORD *)(this + 4) = &AbstractTypeClass::`vftable'; /*0x41097b*/
  *(_DWORD *)(this + 8) = &AbstractTypeClass::`vftable'; /*0x410982*/
  *(_DWORD *)(this + 12) = &vt_AbstractTypeClass; /*0x410989*/
  if ( v3 ) /*0x410990*/
    *(_DWORD *)(this + 96) = GetStringCSF((wchar_t *)(this + 61), 0, MEMORY[0x817830], 127); /*0x4109a0*/
  else
    *(_DWORD *)(this + 96) = &MEMORY[0x87F8E4].__pad_5568[10472]; /*0x4109a9*/
  return this; /*0x4109a5*/
}


// ==== 0x004109C0  AbstractTypeClass::Dtor  this=AbstractTypeClass  sig=csp ====
int __thiscall AbstractTypeClass_Dtor(_DWORD *this)
{
  int v2; // eax
  _DWORD *v4; // [esp+4h] [ebp-4h] BYREF

  *this = &AbstractTypeClass::`vftable'; /*0x4109cd*/
  this->vtable2 = &AbstractTypeClass::`vftable'; /*0x4109d3*/
  this->vtable3 = &AbstractTypeClass::`vftable'; /*0x4109da*/
  this->vtable4 = &vt_AbstractTypeClass; /*0x4109e1*/
  v4 = this; /*0x4109ef*/
  v2 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xA8E968] + 16))(&MEMORY[0xA8E968], &v4); /*0x4109f3*/
  if ( v2 != -1 && v2 < MEMORY[0xA8E978] && v2 < --MEMORY[0xA8E978] ) /*0x410a0e*/
  {
    do /*0x410a26*/
    {
      ++v2; /*0x410a16*/
      *((_DWORD *)MEMORY[0xA8E96C] + v2 - 1) = *((_DWORD *)MEMORY[0xA8E96C] + v2); /*0x410a1a*/
    }
    while ( v2 < MEMORY[0xA8E978] ); /*0x410a26*/
  }
  return AbstractClass::DTOR(this); /*0x410a2f*/
}


// ==== 0x00410A40  AbstractTypeClass::NameEquals  this=char*  sig=csp ====
BOOL __thiscall AbstractTypeClass::NameEquals(int this, void *a2)
{
  return _strcmpi(a2, (const void *)(this + 36)) == 0; /*0x410a56*/
}


// ==== 0x00410A60  AbstractTypeClass::LoadFromINI  this=AbstractTypeClass  sig=csp ====
char __thiscall AbstractTypeClass::LoadFromINI(int this, AbstractTypeClass *aP1)
{
  CCINIClass *v3; // edi
  char *v4; // ebp
  char Destination[48]; // [esp+Ch] [ebp-434h] BYREF
  char v7; // [esp+3Ch] [ebp-404h]
  INIClass Source[16]; // [esp+40h] [ebp-400h] BYREF

  INIClass::ResetSection(aP1); /*0x410a74*/
  if ( !INIClass::BinarySearchSection((int)aP1, (INIClass *)(this + 36)) ) /*0x410a7f*/
    return 0; /*0x410b7f*/
  v3 = (CCINIClass *)(this + 100); /*0x410a91*/
  INIClass::GetString( /*0x410aa0*/
    (unsigned __int8 ***)aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&MEMORY[0x81784C].headNode[1],
    (INIClass *)(this + 100),
    Source,
    49);
  if ( Source ) /*0x410aab*/
  {
    strncpy(Destination, Source[0].__pad_0, 0x30u); /*0x410abf*/
    v7 = 0; /*0x410ac7*/
  }
  else
  {
    Destination[0] = (unsigned __int8)Source; /*0x410aad*/
  }
  if ( Destination != (char *)v3 ) /*0x410ad2*/
  {
    qmemcpy(v3, Destination, 0x30u); /*0x410add*/
    *(_BYTE *)(this + 148) = v7; /*0x410adf*/
  }
  v4 = (char *)(this + 61); /*0x410aeb*/
  INIClass::GetString( /*0x410afb*/
    (unsigned __int8 ***)aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&MEMORY[0x81784C],
    (INIClass *)(this + 61),
    Source,
    32);
  if ( Source ) /*0x410b06*/
  {
    strncpy(Destination, Source[0].__pad_0, 0x1Fu); /*0x410b1a*/
    Destination[31] = 0; /*0x410b22*/
  }
  else
  {
    Destination[0] = (unsigned __int8)Source; /*0x410b08*/
  }
  if ( Destination != v4 ) /*0x410b2d*/
    qmemcpy(v4, Destination, 0x20u); /*0x410b3a*/
  if ( *v4 ) /*0x410b3c*/
    *(_DWORD *)(this + 96) = GetStringCSF((wchar_t *)(this + 61), 0, MEMORY[0x817830], 215); /*0x410b58*/
  else
    *(_DWORD *)(this + 96) = &MEMORY[0x87F8E4].__pad_5568[10472]; /*0x410b69*/
  return 1; /*0x410b57*/
}


// ==== 0x00410B90  AbstractTypeClass::WriteINI  this=AbstractTypeClass  sig=csp ====
char __thiscall AbstractTypeClass::WriteINI(char *this, CCINIClass *aP1)
{
  INIClass *v3; // edi

  v3 = (INIClass *)(this + 36); /*0x410b9b*/
  INIClass::ClearSection((int)aP1, (INIClass *)(this + 36), 0); /*0x410ba1*/
  INIClass::SetString(aP1->__pad_0, v3, (INIClass *)&stru_817828.fallRate, (INIClass *)(this + 100)); /*0x410bb2*/
  if ( this->UINameLabel ) /*0x410bb7*/
    INIClass::SetString(aP1->__pad_0, v3, (INIClass *)&stru_817828.objectTypeFlags, (INIClass *)(this + 61)); /*0x410bca*/
  return 1; /*0x410bcf*/
}


// ==== 0x00410BE0  AbstractTypeClass::ProcessPower  this=AbstractTypeClass  sig=csp ====
int __thiscall AbstractTypeClass::ProcessPower(char *this, AbstractClass *aP1)
{
  AbstractClass::ProcessPower((#378 *)this); /*0x410be9*/
  Checksum::AddString((unsigned int *)aP1, (AbstractClass *)this + 1); /*0x410bf4*/
  Checksum::AddString((unsigned int *)aP1, (AbstractClass *)(this + 100)); /*0x410bff*/
  return Checksum::AddString((unsigned int *)aP1, (AbstractClass *)(this + 61)); /*0x410c0f*/
}


// ==== 0x00410C20  AbstractTypeClass::StubReturnFalse  this=AbstractTypeClass  sig=csp ====
int __thiscall AbstractTypeClass::StubReturnFalse(#376 *this)
{
  int result; // eax

  return result; /*0x410c20*/
}


// ==== 0x00410C30  AbstractTypeClass::ddtor  this=AbstractTypeClass  sig=csp ====
AbstractTypeClass *__thiscall AbstractTypeClass::ddtor(_DWORD *Block, char a2)
{
  int v3; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &AbstractTypeClass::`vftable'; /*0x410c3d*/
  *(Block + 1) = &AbstractTypeClass::`vftable'; /*0x410c43*/
  *(Block + 2) = &AbstractTypeClass::`vftable'; /*0x410c4a*/
  *(Block + 3) = &vt_AbstractTypeClass; /*0x410c51*/
  v5 = Block; /*0x410c5f*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xA8E968] + 16))(&MEMORY[0xA8E968], &v5); /*0x410c63*/
  if ( v3 != -1 && v3 < MEMORY[0xA8E978] && v3 < --MEMORY[0xA8E978] ) /*0x410c7e*/
  {
    do /*0x410c96*/
    {
      ++v3; /*0x410c86*/
      *((_DWORD *)MEMORY[0xA8E96C] + v3 - 1) = *((_DWORD *)MEMORY[0xA8E96C] + v3); /*0x410c8a*/
    }
    while ( v3 < MEMORY[0xA8E978] ); /*0x410c96*/
  }
  AbstractClass::DTOR(Block); /*0x410c9a*/
  if ( (a2 & 1) != 0 ) /*0x410ca4*/
    OperatorDelete(Block); /*0x410ca7*/
  return (AbstractTypeClass *)Block; /*0x410cb1*/
}


// ==== 0x00410CC0  sub_410CC0  this=-  sig=ida-proto ====
int sub_410CC0()
{
  MEMORY[0x887738] = 0; /*0x410cc2*/
  MEMORY[0x88773C] = 0; /*0x410cc7*/
  MEMORY[0x887740] = 0; /*0x410ccc*/
  MEMORY[0x887744] = 0; /*0x410cd1*/
  return 0; /*0x410cd6*/
}


// ==== 0x00410CE0  BSurface::Construct  this=MouseClass  sig=csp ====
_DWORD *__thiscall BSurface_Constructor(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // edi
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx

  v6 = a2; /*0x410ce5*/
  v7 = a4; /*0x410ce9*/
  v8 = a5; /*0x410cef*/
  this->q02C = a5; /*0x410cf3*/
  *this = v6; /*0x410cf8*/
  v9 = a3; /*0x410cfa*/
  this->q028 = v7; /*0x410cfe*/
  this->q004 = v9; /*0x410d01*/
  this->q008 = v7; /*0x410d04*/
  this->q00C = v8; /*0x410d07*/
  this->q020 = 2 * v7 * v8; /*0x410d0f*/
  v10 = __2_YAPAXI_Z(0x20u); /*0x410d17*/
  if ( v10 ) /*0x410d20*/
  {
    v11 = this->q028; /*0x410d22*/
    v12 = this->q02C; /*0x410d25*/
    v10[1] = v11; /*0x410d28*/
    v10[2] = v12; /*0x410d30*/
    v10[3] = 0; /*0x410d38*/
    *v10 = &XSurface_Vtable; /*0x410d3b*/
    v10[4] = 2; /*0x410d41*/
    Buffer::Init(v10 + 5, 0, 2 * v12 * v11); /*0x410d48*/
    *v10 = &BSurface_Vtable; /*0x410d4d*/
    v13 = v10; /*0x410d53*/
  }
  else
  {
    v13 = 0; /*0x410d57*/
  }
  v14 = this->q028; /*0x410d5c*/
  a5 = this->q02C; /*0x410d5f*/
  this->q014 = v13; /*0x410d63*/
  a2 = 0; /*0x410d66*/
  a3 = 0; /*0x410d6a*/
  a4 = v14; /*0x410d6e*/
  (*(void (__thiscall **)(_DWORD *, int *, int))(*v13 + 20))(v13, &a2, 127); /*0x410d7b*/
  v15 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)this->q014 + 92))(this->q014, 0, 0); /*0x410d89*/
  v16 = this->q02C; /*0x410d8c*/
  this->q018 = v15; /*0x410d8f*/
  v17 = this->q028 * v16; /*0x410d92*/
  this->q010 = 0; /*0x410d96*/
  this->q024 = 0x8000; /*0x410d99*/
  v18 = v15 + 2 * v17; /*0x410da0*/
  v19 = this->q014; /*0x410da3*/
  this->q01C = v18; /*0x410da6*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 96))(v19); /*0x410dab*/
  return this; /*0x410db0*/
}


// ==== 0x00410DC0  ObjectClass::method_410DC0  this=ObjectClass  sig=csp ====
int __thiscall sub_410DC0(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
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
  v9 = (__int16 *)(this->uniqueId + this->nextArrayIndex); /*0x410de9*/
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
          if ( (unsigned int)v9 >= this->referenceCount ) /*0x410e20*/
            v9 = (__int16 *)((char *)v9 - this->NeedsSaveOrLink); /*0x410e22*/
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


// ==== 0x00410E50  StreamObj::Release  this=IUnknown  sig=csp ====
int __thiscall StreamObj_Release(_DWORD *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = (int (__thiscall ***)(_DWORD, int))this->q005; /*0x410e53*/
  if ( v2 ) /*0x410e58*/
    result = (**v2)(v2, 1); /*0x410e5e*/
  this->q005 = 0; /*0x410e60*/
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


// ==== 0x00410ED0  Buffer::FillCircularBufferScroll  this=MouseClass  sig=csp ====
char *__thiscall CircularBuffer_ScrollFill(signed int *this, int a2, int a3, unsigned __int16 a4)
{
  signed int v5; // ebx
  char *result; // eax
  int v8; // edi
  unsigned int v9; // edx
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
  int v24; // ecx
  int v25; // ebx
  signed int v26; // edx
  int v27; // eax
  char *v28; // edi
  char *v29; // edx
  int v30; // ebx
  char *v31; // edx
  int v32; // eax
  char *v33; // ecx
  unsigned int v34; // ebx
  int v35; // ecx
  __int64 v36; // rax
  char *v37; // edx
  int v38; // ebx
  int v39; // eax
  char *v40; // ebx
  int v41; // edx
  unsigned int v42; // esi
  bool v43; // zf
  int v44; // eax
  __int64 v45; // rax
  char *v46; // edx
  int v47; // ebx
  unsigned __int16 *v48; // eax
  unsigned int v49; // esi
  int v50; // ecx
  int v51; // ecx
  int v52; // [esp+10h] [ebp-14h]
  int v53; // [esp+14h] [ebp-10h] BYREF
  int v54; // [esp+18h] [ebp-Ch]
  int v55; // [esp+1Ch] [ebp-8h]
  int v56; // [esp+20h] [ebp-4h]
  int v57; // [esp+2Ch] [ebp+8h]
  int v58; // [esp+30h] [ebp+Ch]

  v5 = this->q028; /*0x410ee0*/
  v52 = this->q004 / 2 % v5; /*0x410ef2*/
  if ( (int)abs32(a2) > v5 || (result = (char *)abs32(a3), (int)result > this->q02C) ) /*0x410f0e*/
  {
    v50 = this->q02C; /*0x411286*/
    v53 = 0; /*0x41128b*/
    v54 = 0; /*0x41128f*/
    v56 = v50; /*0x411297*/
    v51 = this->q005; /*0x41129b*/
    v55 = v5; /*0x4112a4*/
    result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v51 + 20))(v51, &v53, a4); /*0x4112af*/
    this->q024 = 0x8000; /*0x4112b2*/
    return result; /*0x4112b2*/
  }
  v8 = a2 + this->q004 / 2 % v5; /*0x410f18*/
  if ( a2 ) /*0x410f1c*/
  {
    v9 = this->q018; /*0x410f25*/
    v10 = this->q004 + 2 * a2; /*0x410f28*/
    this->q004 = v10; /*0x410f2b*/
    v11 = v9 + v10; /*0x410f2e*/
    if ( v11 < v9 ) /*0x410f32*/
      v11 += this->q008; /*0x410f34*/
    if ( v11 >= this->q01C ) /*0x410f3a*/
      v11 -= this->q008; /*0x410f3c*/
    this->q004 = v11 - this->q018; /*0x410f44*/
    if ( a2 >= 0 ) /*0x410f47*/
    {
      v53 = v52; /*0x410fee*/
      if ( v8 < v5 ) /*0x410fe4*/
      {
        v54 = 0; /*0x41104f*/
        v23 = this->q02C; /*0x411053*/
        v55 = a2; /*0x411056*/
        v22 = this->q005; /*0x41105a*/
        v56 = v23; /*0x411063*/
      }
      else
      {
        v18 = this->q02C; /*0x410ff2*/
        v55 = v5 - v52; /*0x410ff5*/
        v54 = 0; /*0x410ff9*/
        v19 = this->q005; /*0x410ffd*/
        v56 = v18; /*0x411002*/
        (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v19 + 20))(v19, &v53, a4); /*0x411014*/
        v20 = v8 - this->q028; /*0x41101e*/
        v21 = this->q02C; /*0x411020*/
        v54 = 0; /*0x411023*/
        v22 = this->q005; /*0x411027*/
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
      v56 = this->q02C; /*0x410fbe*/
      v55 = -a2; /*0x410fc6*/
      result = (char *)(*(int (__thiscall **)(_DWORD, int *, _DWORD))(*(_DWORD *)this->q005 + 20))( /*0x410fda*/
                         this->q005,
                         &v53,
                         a4);
    }
    else
    {
      v53 = 0; /*0x410f55*/
      v55 = v52; /*0x410f5d*/
      v12 = this->q02C; /*0x410f61*/
      v54 = 0; /*0x410f64*/
      v13 = this->q005; /*0x410f68*/
      v56 = v12; /*0x410f6d*/
      (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v13 + 20))(v13, &v53, a4); /*0x410f7f*/
      v14 = this->q028; /*0x410f82*/
      v15 = this->q02C; /*0x410f85*/
      v16 = v14 + v8; /*0x410f88*/
      v54 = 0; /*0x410f8e*/
      v17 = this->q005; /*0x410f92*/
      v55 = v14 - v16; /*0x410f95*/
      v53 = v16; /*0x410f99*/
      v56 = v15; /*0x410f9d*/
      result = (char *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v17 + 20))(v17, &v53, a4); /*0x410fa9*/
    }
  }
  if ( a3 ) /*0x411078*/
  {
    v24 = this->q004; /*0x41107e*/
    v25 = this->q028; /*0x411081*/
    this->q024 -= a3; /*0x411096*/
    v26 = v24 + 2 * a3 * v25; /*0x411099*/
    this->q004 = v26; /*0x41109c*/
    v27 = a3 + v24 / 2 / v25; /*0x41109f*/
    v28 = (char *)this->q018; /*0x4110a1*/
    v29 = &v28[v26]; /*0x4110a4*/
    v58 = v27; /*0x4110a6*/
    if ( v29 < v28 ) /*0x4110ac*/
      v29 += this->q008; /*0x4110ae*/
    if ( (unsigned int)v29 >= this->q01C ) /*0x4110b4*/
      v29 -= this->q008; /*0x4110b6*/
    v30 = v29 - v28; /*0x4110bf*/
    this->q004 = v29 - v28; /*0x4110c3*/
    if ( a3 >= 0 ) /*0x4110c6*/
    {
      v44 = this->q02C; /*0x41119d*/
      if ( v58 >= v44 ) /*0x4111a6*/
      {
        v45 = 2 * this->q028 * v44 - v24; /*0x4111b4*/
        LODWORD(v45) = v45 - HIDWORD(v45); /*0x4111b5*/
        v46 = &v28[v24]; /*0x4111b7*/
        v47 = (int)v45 >> 1; /*0x4111bc*/
        if ( (((_BYTE)v28 + (_BYTE)v24) & 2) != 0 && v47 ) /*0x4111c5*/
        {
          *(_WORD *)v46 = a4; /*0x4111c7*/
          v46 += 2; /*0x4111ca*/
          --v47; /*0x4111cd*/
        }
        v48 = 0; /*0x4111d0*/
        if ( v47 >> 1 ) /*0x4111d5*/
        {
          memset32(v46, 65537 * a4, v47 >> 1); /*0x4111f0*/
          v48 = (unsigned __int16 *)&v46[4 * (v47 >> 1)]; /*0x4111f6*/
        }
        if ( (v47 & 1) != 0 && v48 ) /*0x411200*/
          *v48 = a4; /*0x411202*/
        v37 = (char *)this->q018; /*0x41120b*/
        v38 = this->q004 / 2; /*0x411210*/
        if ( ((unsigned __int8)v37 & 2) != 0 && v38 ) /*0x411219*/
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
        memset32(v37, 65537 * a4, v49); /*0x411240*/
        result = &v37[4 * v49]; /*0x411242*/
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
      v37 = &v28[v24]; /*0x411262*/
      v38 = (v30 - v24) / 2; /*0x411267*/
      if ( (((_BYTE)v28 + (_BYTE)v24) & 2) != 0 && v38 ) /*0x411270*/
        goto LABEL_60; /*0x411270*/
    }
    else
    {
      if ( v27 >= 0 ) /*0x4110d0*/
      {
        v39 = v24 - v30; /*0x411157*/
        v40 = v29; /*0x411159*/
        v41 = v39 / 2; /*0x411160*/
        if ( ((unsigned __int8)v40 & 2) != 0 && v41 ) /*0x411169*/
        {
          *(_WORD *)v40 = a4; /*0x41116b*/
          v40 += 2; /*0x41116e*/
          --v41; /*0x411171*/
        }
        result = 0; /*0x411174*/
        v42 = v41 >> 1; /*0x411179*/
        if ( v41 >> 1 ) /*0x411179*/
        {
          memset32(v40, 65537 * a4, v42); /*0x411190*/
          result = &v40[4 * v42]; /*0x411192*/
        }
        v43 = (v41 & 1) == 0; /*0x411195*/
        goto LABEL_55; /*0x411198*/
      }
      v31 = v28; /*0x4110d9*/
      v32 = v24 / 2; /*0x4110db*/
      v57 = v24 / 2; /*0x4110e0*/
      if ( ((unsigned __int8)v28 & 2) != 0 && v32 ) /*0x4110e8*/
      {
        *(_WORD *)v28 = a4; /*0x4110ea*/
        v31 = v28 + 2; /*0x4110ed*/
        LOBYTE(v57) = --v32; /*0x4110f1*/
      }
      v33 = 0; /*0x4110f7*/
      v34 = v32 >> 1; /*0x4110fc*/
      if ( v32 >> 1 ) /*0x4110fc*/
      {
        memset32(v31, 65537 * a4, v34); /*0x411113*/
        LOBYTE(v32) = v57; /*0x411115*/
        v33 = &v31[4 * v34]; /*0x411119*/
      }
      if ( (v32 & 1) != 0 && v33 ) /*0x411122*/
        *(_WORD *)v33 = a4; /*0x411124*/
      v35 = this->q004; /*0x41112a*/
      v36 = 2 * this->q028 * this->q02C - v35; /*0x411135*/
      LODWORD(v36) = v36 - HIDWORD(v36); /*0x411136*/
      v37 = (char *)(v35 + this->q018); /*0x41113d*/
      v38 = (int)v36 >> 1; /*0x41113f*/
      if ( ((unsigned __int8)v37 & 2) != 0 && v38 ) /*0x41114c*/
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


// ==== 0x004112D0  MapClass::isLocationShrouded  this=MouseClass  sig=csp ====
int __thiscall sub_4112D0(_DWORD *this, unsigned __int16 a2)
{
  int v2; // eax
  int v3; // ecx
  _DWORD v5[4]; // [esp+0h] [ebp-10h] BYREF

  v5[3] = this->q02C; /*0x4112d8*/
  v5[0] = 0; /*0x4112e0*/
  v5[1] = 0; /*0x4112e4*/
  v2 = this->q028; /*0x4112e8*/
  v3 = this->q014; /*0x4112eb*/
  v5[2] = v2; /*0x4112f4*/
  return (*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v3 + 20))(v3, v5, a2); /*0x411303*/
}


// ==== 0x00411310  StreamClass::WriteBytes  this=MouseClass  sig=csp ====
int __thiscall StreamClass_WriteBytes(_DWORD **this, unsigned __int16 a2, char a3, int a4, int a5, int a6)
{
  return (*(int (__thiscall **)(_DWORD, char *, _DWORD))(*this->q005 + 20))(this->q005, &a3, a2); /*0x411328*/
}


// ==== 0x00411330  TacticalClass::FillScanlinesTransparent  this=TacticalClass  sig=csp ====
unsigned int __thiscall sub_411330(int this, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // esi
  unsigned int result; // eax
  char *v8; // edx
  int v9; // ecx
  char *v10; // ebp
  unsigned int v11; // eax
  char *v12; // edi
  unsigned int v13; // esi
  int v14; // eax
  _WORD *v15; // ebx
  _WORD *v16; // ecx
  unsigned int v17; // esi
  int v18; // ebx
  char *v19; // ebp
  char *v20; // eax
  unsigned int v21; // esi
  int v23; // [esp+Ch] [ebp-Ch]
  _WORD *v24; // [esp+Ch] [ebp-Ch]
  char v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  v5 = this; /*0x41133d*/
  v6 = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 20) + 92))(*(_DWORD *)(this + 20), a2, a3); /*0x411350*/
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 20) + 96))(*(_DWORD *)(v5 + 20)); /*0x411354*/
  result = *(_DWORD *)(v5 + 28); /*0x41135a*/
  v8 = (char *)(v6 + *(_DWORD *)(v5 + 16)); /*0x41135d*/
  if ( (unsigned int)v8 >= result ) /*0x411361*/
    v8 -= *(_DWORD *)(v5 + 32); /*0x411363*/
  if ( a5 > 0 ) /*0x41136c*/
  {
    v26 = a5; /*0x411374*/
    do /*0x411453*/
    {
      v9 = a4; /*0x411378*/
      if ( (unsigned int)&v8[2 * a4] < result ) /*0x411381*/
      {
        v18 = a4; /*0x411466*/
        v19 = v8; /*0x411468*/
        if ( ((unsigned __int8)v8 & 2) != 0 && a4 ) /*0x41146e*/
        {
          *(_WORD *)v8 = 127; /*0x411470*/
          v19 = v8 + 2; /*0x411475*/
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
        v10 = v8; /*0x411389*/
        v11 = (result - (unsigned int)v8) >> 1; /*0x41138b*/
        v23 = v11; /*0x411392*/
        if ( ((unsigned __int8)v8 & 2) != 0 && v11 ) /*0x41139a*/
        {
          *(_WORD *)v8 = 127; /*0x41139f*/
          v10 = v8 + 2; /*0x4113a4*/
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
        v15 = *(_WORD **)(this + 24); /*0x4113e3*/
        v25 = v14; /*0x4113e6*/
        v24 = v15; /*0x4113ed*/
        if ( ((unsigned __int8)v15 & 2) != 0 && v14 ) /*0x4113f5*/
        {
          *v15++ = 127; /*0x4113f7*/
          --v14; /*0x4113ff*/
          v24 = v15; /*0x411400*/
          v25 = v14; /*0x411404*/
        }
        v16 = 0; /*0x41140a*/
        v17 = v14 >> 1; /*0x41140f*/
        if ( v14 >> 1 ) /*0x41140f*/
        {
          memset32(v15, 8323199, v17); /*0x41141c*/
          v16 = &v24[2 * v17]; /*0x411422*/
          LOBYTE(v14) = v25; /*0x411425*/
        }
        if ( (v14 & 1) != 0 && v16 ) /*0x41142f*/
          *v16 = 127; /*0x411431*/
        v5 = this; /*0x411436*/
      }
      result = *(_DWORD *)(v5 + 28); /*0x41143d*/
      v8 += 2 * *(_DWORD *)(v5 + 40); /*0x411440*/
      if ( (unsigned int)v8 >= result ) /*0x411445*/
        v8 -= *(_DWORD *)(v5 + 32); /*0x411447*/
      --v26; /*0x41144f*/
    }
    while ( v26 ); /*0x411453*/
  }
  return result; /*0x41145b*/
}


// ==== 0x004114B0  StreamClass::ReadAndSeek  this=StreamClass  sig=csp ====
unsigned int __thiscall StreamClass::ReadAndSeek(int this, MouseClass *aP1, MouseClass *aP2)
{
  int v4; // edi
  unsigned int result; // eax

  v4 = (*(int (__thiscall **)(_DWORD, MouseClass *, MouseClass *))(**(_DWORD **)(this + 20) + 92))( /*0x4114c9*/
         *(_DWORD *)(this + 20),
         aP1,
         aP2);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 96))(*(_DWORD *)(this + 20)); /*0x4114cd*/
  result = v4 + *(_DWORD *)(this + 16); /*0x4114d6*/
  if ( result >= *(_DWORD *)(this + 28) ) /*0x4114da*/
    result -= *(_DWORD *)(this + 32); /*0x4114dc*/
  return result; /*0x4114df*/
}


// ==== 0x004114F0  Surface::Stub  this=Surface  sig=csp ====
char __stdcall Surface_CanLock_Stub(int a1, int a2)
{
  return 1; /*0x4114f2*/
}


// ==== 0x00411500  Surface::entry_68_  this=Surface  sig=csp ====
char __stdcall Surface_vt_entry_68(int a1, int a2)
{
  return 1; /*0x411502*/
}


// ==== 0x00411510  Surface::GetRect  this=Surface  sig=csp ====
_DWORD *__thiscall Surface_GetRect(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // ecx

  v3 = this->Width; /*0x411517*/
  v4 = this->Height; /*0x41151a*/
  *a2 = 0; /*0x411523*/
  a2[1] = 0; /*0x411525*/
  a2[2] = v3; /*0x411528*/
  a2[3] = v4; /*0x41152d*/
  return a2; /*0x41152b*/
}


// ==== 0x00411540  Surface::GetWidth  this=Surface  sig=csp ====
int __thiscall Surface_GetWidth(_DWORD *this)
{
  return this->Width; /*0x411543*/
}


// ==== 0x00411550  Surface::GetHeight  this=Surface  sig=csp ====
int __thiscall Surface_GetHeight(_DWORD *this)
{
  return this->Height; /*0x411553*/
}


// ==== 0x00411560  XSurface::Lock  this=XSurface  sig=csp ====
int __thiscall XSurface_Lock(_DWORD *this, int a2, int a3)
{
  ++this->LockCount; /*0x411564*/
  return 0; /*0x411569*/
}


// ==== 0x00411570  XSurface::Unlock  this=XSurface  sig=csp ====
char __thiscall XSurface_Unlock(_DWORD *this)
{
  --this->LockCount; /*0x411574*/
  return 1; /*0x411579*/
}


// ==== 0x00411580  XSurface::IsLocked  this=XSurface  sig=csp ====
BOOL __thiscall Surface_IsLocked(_DWORD *this)
{
  return this->LockCount != 0; /*0x41158a*/
}


// ==== 0x00411590  XSurface::StubReturnFalse  this=XSurface  sig=csp ====
char XSurface::_vt33()
{
  return 0; /*0x411592*/
}


// ==== 0x004115A0  XSurface::ScalarDtor  this=XSurface  sig=csp ====
XSurface *__thiscall XSurface::ScalarDtor(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &Surface_Vtable; /*0x4115a9*/
  if ( (a2 & 1) != 0 ) /*0x4115af*/
    __3_YAXPAX_Z(this); /*0x4115b2*/
  return (XSurface *)this; /*0x4115bc*/
}


// ==== 0x004115C0  Surface::StubReturnFalse  this=Surface  sig=csp ====
char Surface::_vt33()
{
  return 0; /*0x4115c2*/
}


// ==== 0x004115D0  Surface::getObjectValue  this=Surface  sig=csp ====
Surface *__thiscall AbstractClass::getObjectValue(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &Surface_Vtable; /*0x4115d9*/
  if ( (a2 & 1) != 0 ) /*0x4115df*/
    __3_YAXPAX_Z(this); /*0x4115e2*/
  return (Surface *)this; /*0x4115ec*/
}


// ==== 0x004115F0  BSurface::Lock  this=BSurface  sig=csp ====
int __thiscall BSurface_Lock(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // ebx

  v4 = *this; /*0x4115f8*/
  ++this->LockCount; /*0x4115fb*/
  v5 = this->Buffer; /*0x4115fe*/
  v6 = a2 * (*(int (__thiscall **)(_DWORD *))(v4 + 112))(this); /*0x411608*/
  return v6 + v5 + a3 * (*(int (__thiscall **)(_DWORD *))(*this + 116))(this); /*0x41161b*/
}


// ==== 0x00411630  BSurface::GetBytesPerPixel  this=BSurface  sig=csp ====
int __thiscall BSurface_GetBytesPerPixel(_DWORD *this)
{
  return this->BytesPerPixel; /*0x411633*/
}


// ==== 0x00411640  BSurface::GetPitch  this=BSurface  sig=csp ====
int __thiscall BSurface_GetPitch(_DWORD *this)
{
  return this->BytesPerPixel * (*(int (__thiscall **)(_DWORD *))(*this + 124))(this); /*0x41164c*/
}


// ==== 0x00411650  BSurface::ScalarDtor  this=BSurface  sig=csp ====
BSurface *__thiscall BSurface::ScalarDtor(char *Block, char a2)
{
  Vector::Clear((int)(Block + 20)); /*0x411656*/
  *(_DWORD *)Block = &Surface_Vtable; /*0x41165f*/
  if ( (a2 & 1) != 0 ) /*0x411667*/
    __3_YAXPAX_Z(Block); /*0x41166a*/
  return (BSurface *)Block; /*0x411674*/
}


// ==== 0x00411680  sub_411680  this=-  sig=ida-proto ====
int sub_411680()
{
  MEMORY[0x887748] = 0; /*0x411682*/
  MEMORY[0x88774C] = 0; /*0x411687*/
  MEMORY[0x887750] = 0; /*0x41168c*/
  MEMORY[0x887754] = 0; /*0x411691*/
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
  if ( (MEMORY[0x8877A0][47 * v2] & 1) != 0 ) /*0x4116c4*/
  {
    Debug::Log(); /*0x4116cf*/
    return *(_DWORD *)(v3 + 32); /*0x4116df*/
  }
  v5 = Time::GetElapsedMS() - *((_DWORD *)&MEMORY[0x887794] + 47 * v2); /*0x4116f2*/
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
      if ( MEMORY[0x887778][188 * LockCount] == 1 ) /*0x41189b*/
      {
        if ( MEMORY[0x887804][47 * LockCount] ) /*0x4118a1*/
        {
          Debug::Log(); /*0x4118b2*/
          v7 = 188 * dwUser[2].LockCount + 8943480; /*0x4118ce*/
          if ( MEMORY[0x887804][47 * dwUser[2].LockCount] ) /*0x4118c5*/
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
      if ( MEMORY[0x887804][47 * dwUser[2].LockCount] ) /*0x411aa4*/
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
      if ( MEMORY[0x887778][188 * v12] && MEMORY[0x887804][47 * v12] ) /*0x411a1b*/
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
int __cdecl sub_411B20(DWORD_PTR dwUser, AnimClass *aP1, int a3)
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
  v4 = &stru_87C374.__pad_579C[23656]; /*0x411b5e*/
  do /*0x411b75*/
  {
    if ( !*v4 ) /*0x411b63*/
      break; /*0x411b66*/
    v4 += 188; /*0x411b68*/
    ++v3; /*0x411b6e*/
  }
  while ( (int)v4 < (int)&stru_87C374.__pad_579C[23844] ); /*0x411b75*/
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
    *((_WORD *)v5 + 4) = v7 == (unsigned __int16)v8
                       ? LOWORD(aP1->field_0)
                       : v7 * (unsigned int)LOWORD(aP1->field_0) / v8;
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
  v5[10] = BYTE2(aP1->field_0); /*0x411c5a*/
  v5[11] = HIBYTE(aP1->field_0); /*0x411c60*/
  *((_DWORD *)v5 + 9) = aP1->field_4; /*0x411c66*/
  *(_DWORD *)&stru_87C374.__pad_579C[23644] = aP1->field_8; /*0x411c6c*/
  *(_DWORD *)&stru_87C374.__pad_579C[23648] = *(_DWORD *)aP1->__pad_C; /*0x411c75*/
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
  if ( (MEMORY[0x8877A0][47 * LockCount] & 1) == 0 ) /*0x411e13*/
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
      MEMORY[0x88776C](lpCriticalSection); /*0x411f84*/
      MEMORY[0x88776C](lpCriticalSection); /*0x411f8b*/
      v13 = *v7; /*0x411f91*/
      *(_DWORD *)(v3 + 68) = 0; /*0x411f96*/
      *(_DWORD *)(v3 + 156) = 0; /*0x411f99*/
      *(_DWORD *)(v3 + 148) = 0; /*0x411f9f*/
      (*(void (__stdcall **)(int *, _DWORD))(*v13 + 52))(v13, 0); /*0x411fa9*/
      v14 = Math::RoundToInt(*(float *)&MEMORY[0xA8EB9C] * 255.0); /*0x411fb8*/
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
  if ( !MEMORY[0x887778][188 * LockCount] || !MEMORY[0x887804][47 * LockCount] ) /*0x411e1e*/
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
      if ( *(float *)&MEMORY[0xA8EB9C] * 256.0 != (double)v40 ) /*0x41207a*/
      {
        v7 = Math::RoundToInt(*(float *)&MEMORY[0xA8EB9C] * 255.0); /*0x412088*/
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
  v13 = MEMORY[0x887804][47 * *(_DWORD *)(v3 + 52)]; /*0x4120ef*/
  v14 = 188 * *(_DWORD *)(v3 + 52) + 8943480; /*0x4120f8*/
  if ( v13 ) /*0x4120ff*/
  {
    v37 = *((_DWORD *)&MEMORY[0x887814] + 47 * *(_DWORD *)(v3 + 52)); /*0x41210d*/
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
    (*(void (__cdecl **)(DWORD_PTR, _DWORD))&MEMORY[0x87F8E4].__pad_5568[10532])( /*0x4124af*/
      dwUser,
      *(_DWORD *)(v6 + 4 * *(_DWORD *)(v6 + 68) + 80));
    v12 = *(_DWORD *)(v6 + 68); /*0x4124b5*/
    v13 = v12 + 1; /*0x4124c2*/
    ++*(_DWORD *)(v6 + 148); /*0x4124c5*/
    if ( v12 + 1 >= 2 ) /*0x4124ce*/
      v13 = 0; /*0x4124d0*/
    *(_DWORD *)(v6 + 4 * v12 + 72) = 0; /*0x4124d3*/
    (*(void (__cdecl **)(DWORD_PTR))&MEMORY[0x87F8E4].__pad_5568[10528])(dwUser); /*0x4124db*/
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
unsigned int j_Time_GetElapsedMS()
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


// ==== 0x00412610  ObjectClass::method  this=ObjectClass  sig=csp ====
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
  MEMORY[0x887858] = Math::Sqrt(v0 + v0); /*0x41267e*/
}


// ==== 0x00412690  sub_412690  this=-  sig=ida-proto ====
void sub_412690()
{
  MEMORY[0x889E40] = MEMORY[0x887858] / 60.0; /*0x41269c*/
}


// ==== 0x004126B0  sub_4126B0  this=-  sig=ida-proto ====
void sub_4126B0()
{
  MEMORY[0x889E28] = 1.0 / MEMORY[0x889E40]; /*0x4126bc*/
}


// ==== 0x004126D0  sub_4126D0  this=-  sig=ida-proto ====
void sub_4126D0()
{
  MEMORY[0x889E20] = 0.0174532925199433 * 45.0; /*0x4126dc*/
}


// ==== 0x004126F0  sub_4126F0  this=-  sig=ida-proto ====
void sub_4126F0()
{
  MEMORY[0x887860] = 0.0174532925199433 * 60.0; /*0x4126fc*/
}


// ==== 0x00412710  sub_412710  this=-  sig=ida-proto ====
void sub_412710()
{
  MEMORY[0x887838] = 0.0174532925199433 * 90.0; /*0x41271c*/
}


// ==== 0x00412730  sub_412730  this=-  sig=ida-proto ====
__int64 sub_412730()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x887838] - MEMORY[0x887860]); /*0x412742*/
  result = Math::RoundToInt(v0 * MEMORY[0x887858] * 0.5); /*0x412756*/
  MEMORY[0x889E48] = result; /*0x41275b*/
  return result; /*0x412760*/
}


// ==== 0x00412770  sub_412770  this=-  sig=ida-proto ====
void sub_412770()
{
  MEMORY[0x887868] = Math::ArcTan((double)MEMORY[0x889E48] * 0.00390625); /*0x412787*/
}


// ==== 0x004127A0  sub_4127A0  this=-  sig=ida-proto ====
void sub_4127A0()
{
  MEMORY[0x887880] = Math::ArcTan((double)(2 * MEMORY[0x889E48]) / MEMORY[0x887858]); /*0x4127c2*/
}


// ==== 0x004127D0  sub_4127D0  this=-  sig=ida-proto ====
__int64 sub_4127D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x889E48]) + 0.5); /*0x4127eb*/
  MEMORY[0x889E3C] = result; /*0x4127f0*/
  return result; /*0x4127f6*/
}


// ==== 0x00412800  sub_412800  this=-  sig=ida-proto ====
int sub_412800()
{
  MEMORY[0x887850] = 0; /*0x412802*/
  return 0; /*0x41280e*/
}


// ==== 0x00412810  sub_412810  this=-  sig=ida-proto ====
int sub_412810()
{
  MEMORY[0x887870] = 0; /*0x412812*/
  MEMORY[0x887874] = 0; /*0x412817*/
  MEMORY[0x887878] = 0; /*0x41281c*/
  return 0; /*0x412821*/
}


// ==== 0x00412830  sub_412830  this=-  sig=ida-proto ====
int sub_412830()
{
  MEMORY[0x889E38] = 0; /*0x412835*/
  MEMORY[0x889E30] = 128; /*0x41283f*/
  MEMORY[0x889E34] = 128; /*0x412844*/
  return 128; /*0x412849*/
}


// ==== 0x00412850  sub_412850  this=-  sig=ida-proto ====
int sub_412850()
{
  MEMORY[0x887840] = 0; /*0x412852*/
  MEMORY[0x887844] = 0; /*0x412857*/
  MEMORY[0x887848] = 0; /*0x41285c*/
  MEMORY[0x88784C] = 0; /*0x412861*/
  return 0; /*0x412866*/
}


// ==== 0x00412870  sub_412870  this=-  sig=ida-proto ====
int sub_412870()
{
  _DWORD *v0; // esi
  int v1; // edi

  v0 = MEMORY[0x887888]; /*0x412873*/
  v1 = 400; /*0x412878*/
  do /*0x41289c*/
  {
    EventClass::resetEvent(v0, 0, 0); /*0x412883*/
    *v0 = &vt_DynamicVectorClass_TechnoClass; /*0x412888*/
    v0[5] = 10; /*0x41288e*/
    v0[4] = 0; /*0x412895*/
    v0 += 6; /*0x412898*/
    --v1; /*0x41289b*/
  }
  while ( v1 ); /*0x41289c*/
  MEMORY[0x889E0C] = 0; /*0x4128a3*/
  MEMORY[0x889E10] = 0; /*0x4128a9*/
  MEMORY[0x889E14] = 1; /*0x4128af*/
  MEMORY[0x889E15] = 0; /*0x4128b6*/
  MEMORY[0x889E08] = (int)&vt_DynamicVectorClass_TechnoClass; /*0x4128bc*/
  MEMORY[0x889E1C] = 10; /*0x4128c6*/
  MEMORY[0x889E18] = 0; /*0x4128d0*/
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

  v0 = MEMORY[0x887888]; /*0x4128f4*/
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
  v3 = MEMORY[0x889E10]; /*0x41291e*/
  (*(void (__thiscall **)(int *))(MEMORY[0x889E08] + 12))(&MEMORY[0x889E08]); /*0x412929*/
  (*(void (__thiscall **)(int *, int, _DWORD))(MEMORY[0x889E08] + 8))(&MEMORY[0x889E08], v3, 0); /*0x412939*/
  MEMORY[0x889E08] = (int)&vt_VectorClass_TechnoClass; /*0x412948*/
  if ( MEMORY[0x889E0C] && MEMORY[0x889E15] ) /*0x412956*/
  {
    __3_YAXPAX_Z(MEMORY[0x889E0C]); /*0x412959*/
    MEMORY[0x889E0C] = 0; /*0x412961*/
  }
  MEMORY[0x889E15] = 0; /*0x412967*/
  MEMORY[0x889E10] = 0; /*0x41296d*/
  v4 = &MEMORY[0x889E0C]; /*0x412973*/
  v5 = 400; /*0x412978*/
  do /*0x4129a1*/
  {
    v6 = *(v4 - 6); /*0x41297d*/
    v4 -= 6; /*0x412980*/
    *(v4 - 1) = &vt_VectorClass_TechnoClass; /*0x412985*/
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


// ==== 0x00412B40  AircraftTrackerClass::FillCurrentVector  this=VectorClass  sig=csp ====
int __thiscall AircraftTrackerClass::FillCurrentVector(int this, VectorClass *aP1, int a3)
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
  int aP1a; // [esp+58h] [ebp+4h]

  if ( a3 <= 1 ) /*0x412b58*/
    a3 = 1; /*0x412b5a*/
  v4 = (_DWORD *)(*(int (__thiscall **)(VectorClass *, _DWORD *))(*(_DWORD *)aP1->vtable0 + 72))(aP1, v117); /*0x412b6e*/
  v5 = *Coord::ToCell(v4, (IUnknown *)&v115); /*0x412b78*/
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
  v10 = v8 / (*(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] / 20); /*0x412bb9*/
  if ( v10 <= 19 ) /*0x412bbe*/
    v9 = v10; /*0x412bc0*/
  v11 = v7 / (*(_DWORD *)&MEMORY[0x87F8E4].__pad_31[3] / 20); /*0x412bdc*/
  if ( v11 > 19 ) /*0x412be1*/
    v11 = 19; /*0x412be3*/
  v12 = v9 + 20 * v11; /*0x412beb*/
  v13 = 0; /*0x412bee*/
  aP1a = v12; /*0x412bf0*/
  v14 = *(_DWORD *)(this + 24 * v12 + 16); /*0x412bf7*/
  v15 = this + 24 * v12; /*0x412bfb*/
  if ( v14 > 0 ) /*0x412c01*/
  {
    v16 = (_DWORD *)(this + 9600); /*0x412c03*/
    do /*0x412c24*/
    {
      v113 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v15 + 24))(v15, v13); /*0x412c15*/
      DynamicVector::AddItem(v16, (VectorClass *)&v113); /*0x412c1c*/
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
  v19 = v18 / (*(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] / 20); /*0x412c79*/
  v20 = 19; /*0x412c7b*/
  if ( v19 <= 19 ) /*0x412c83*/
    v20 = v19; /*0x412c85*/
  v21 = v17 / (*(_DWORD *)&MEMORY[0x87F8E4].__pad_31[3] / 20); /*0x412ca1*/
  if ( v21 > 19 ) /*0x412ca6*/
    v21 = 19; /*0x412ca8*/
  for ( i = v20 + 20 * v21; i != aP1a; i = v27 + 20 * v25 )
  {
    v23 = 0; /*0x412cc8*/
    ++v112; /*0x412cca*/
    v24 = *(_DWORD *)(this + 24 * i + 16); /*0x412cd1*/
    if ( v24 > 0 ) /*0x412cda*/
    {
      do /*0x412cff*/
      {
        v109 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 24 * i) + 24))(this + 24 * i, v23); /*0x412ced*/
        DynamicVector::AddItem((_DWORD *)(this + 9600), (VectorClass *)&v109); /*0x412cf7*/
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
  v33 = v31 / (*(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] / 20); /*0x412daf*/
  if ( v33 <= 19 ) /*0x412db4*/
    v32 = v33; /*0x412db6*/
  v34 = v30 / (*(_DWORD *)&MEMORY[0x87F8E4].__pad_31[3] / 20); /*0x412dd2*/
  if ( v34 > 19 ) /*0x412dd7*/
    v34 = 19; /*0x412dd9*/
  for ( j = v32 + 20 * v34; j != aP1a; j = v38 + 20 * v41 )
  {
    v36 = 0; /*0x412dfc*/
    ++v111; /*0x412dfe*/
    v37 = *(_DWORD *)(this + 24 * j + 16); /*0x412e02*/
    if ( v37 > 0 ) /*0x412e0b*/
    {
      do /*0x412e30*/
      {
        v109 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 24 * j) + 24))(this + 24 * j, v36); /*0x412e19*/
        DynamicVector::AddItem((_DWORD *)(this + 9600), (VectorClass *)&v109); /*0x412e28*/
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
  v47 = v45 / (*(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] / 20); /*0x412ed9*/
  if ( v47 <= 19 ) /*0x412ede*/
    v46 = v47; /*0x412ee0*/
  v48 = v44 / (*(_DWORD *)&MEMORY[0x87F8E4].__pad_31[3] / 20); /*0x412efc*/
  if ( v48 > 19 ) /*0x412f01*/
    v48 = 19; /*0x412f03*/
  for ( k = v46 + 20 * v48; k != aP1a; k = v52 + 20 * v55 )
  {
    v50 = 0; /*0x412f26*/
    ++v113; /*0x412f28*/
    v51 = *(_DWORD *)(this + 24 * k + 16); /*0x412f2c*/
    if ( v51 > 0 ) /*0x412f35*/
    {
      do /*0x412f5a*/
      {
        v109 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 24 * k) + 24))(this + 24 * k, v50); /*0x412f43*/
        DynamicVector::AddItem((_DWORD *)(this + 9600), (VectorClass *)&v109); /*0x412f52*/
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
  v60 = v58 / (*(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] / 20); /*0x413004*/
  if ( v60 <= 19 ) /*0x413009*/
    v59 = v60; /*0x41300b*/
  v61 = v57 / (*(_DWORD *)&MEMORY[0x87F8E4].__pad_31[3] / 20); /*0x413027*/
  if ( v61 > 19 ) /*0x41302c*/
    v61 = 19; /*0x41302e*/
  for ( m = v59 + 20 * v61; m != aP1a; m = v67 + 20 * v65 )
  {
    v63 = 0; /*0x413051*/
    ++v110; /*0x413053*/
    v64 = *(_DWORD *)(this + 24 * m + 16); /*0x413057*/
    if ( v64 > 0 ) /*0x413060*/
    {
      do /*0x413085*/
      {
        a3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 24 * m) + 24))(this + 24 * m, v63); /*0x41306e*/
        DynamicVector::AddItem((_DWORD *)(this + 9600), (VectorClass *)&a3); /*0x41307d*/
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
      v69 = aP1a; /*0x413109*/
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
              DynamicVector::AddItem((_DWORD *)(this + 9600), (VectorClass *)&v109); /*0x4131a7*/
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
        v77 = aP1a % 20; /*0x4131ee*/
        v109 = aP1a % 20; /*0x4131f7*/
        v78 = aP1a / 20; /*0x4131fe*/
        v79 = aP1a % 20 - 2; /*0x413200*/
        v114 = aP1a / 20; /*0x413205*/
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
            DynamicVector::AddItem((_DWORD *)(this + 9600), (VectorClass *)&a3); /*0x413273*/
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
    v94 = aP1a; /*0x4132eb*/
    v95 = (char *)this; /*0x4132ef*/
    v96 = aP1a; /*0x4132f5*/
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
      v97 = Slider::CalcPosition(aP1a, -2, 1); /*0x413339*/
      DynamicArray::AddFromList((char *)this, v97); /*0x413341*/
      v98 = Slider::CalcPosition(aP1a, -1, 2); /*0x413353*/
      DynamicArray::AddFromList((char *)this, v98); /*0x41335b*/
    }
  }
  else
  {
    v95 = (char *)this; /*0x413362*/
    v94 = aP1a; /*0x413366*/
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


// ==== 0x00413490  nullsub_3  this=VectorClass  sig=csp ====
void __stdcall nullsub_3(AbstractClass *aP0)
{
  ; /*0x413490*/
}


// ==== 0x004134A0  GadgetGrid::InsertItem  this=VectorClass  sig=csp ====
int __thiscall GadgetGrid_InsertItem(_DWORD *this, int a2)
{
  _DWORD *v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int result; // eax
  char *v12; // esi
  int v13; // ecx
  int v14; // edx
  char v15[4]; // [esp+Ch] [ebp-4h] BYREF
  int v16; // [esp+14h] [ebp+4h]

  v4 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 440))(a2, v15); /*0x4134b3*/
  v5 = *v4; /*0x4134b9*/
  v16 = *v4; /*0x4134c0*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 760))(a2, *v4); /*0x4134c4*/
  if ( (v5 & 0x8000u) == 0 ) /*0x4134cd*/
    v5 = (__int16)v5; /*0x4134d3*/
  else
    v5 = 0; /*0x4134cf*/
  if ( v16 >= 0 ) /*0x4134df*/
    v6 = SHIWORD(v16); /*0x4134e5*/
  else
    v6 = 0; /*0x4134e1*/
  v7 = v5 / (MEMORY[0x87F914] / 20); /*0x413504*/
  v8 = 19; /*0x413506*/
  if ( v7 <= 19 ) /*0x41350e*/
    v8 = v7; /*0x413510*/
  v9 = v6 / (MEMORY[0x87F918] / 20); /*0x41352f*/
  if ( v9 > 19 ) /*0x413534*/
    v9 = 19; /*0x413536*/
  v10 = 3 * (v8 + 20 * v9); /*0x413541*/
  result = *(this + 120 * v9 + 6 * v8 + 2); /*0x413544*/
  v12 = (char *)(this + 2 * v10); /*0x413548*/
  if ( *((_DWORD *)v12 + 4) < result /*0x413574*/
    || (v12[13] || !result)
    && (v13 = *((_DWORD *)v12 + 5), v13 > 0)
    && (result = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v12 + 8))(v12, result + v13, 0), (_BYTE)result) )
  {
    result = *((_DWORD *)v12 + 4); /*0x413576*/
    v14 = *((_DWORD *)v12 + 1); /*0x413579*/
    *((_DWORD *)v12 + 4) = result + 1; /*0x41357f*/
    *(_DWORD *)(v14 + 4 * result) = a2; /*0x413582*/
  }
  return result; /*0x413585*/
}


// ==== 0x00413590  sub_413590  this=-  sig=ida-proto ====
int sub_413590()
{
  return 750; /*0x413595*/
}


// ==== 0x004135A0  ObjectClass::HasLinkedObject  this=VectorClass  sig=csp ====
bool __stdcall ObjectClass::HasLinkedObject(VectorClass *aP0)
{
  VectorClass *v1; // eax

  v1 = *(VectorClass **)((*(int (__thiscall **)(VectorClass *))(*(_DWORD *)aP0->vtable0 + 444))(aP0) + 224); /*0x4135af*/
  return v1 && v1 != aP0; /*0x4135bf*/
}


// ==== 0x004135D0  GadgetGrid::RemoveItem  this=VectorClass  sig=csp ====
int __thiscall GadgetGrid_RemoveItem(_DWORD *this, int a2)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // edx
  char *v9; // esi
  int result; // eax
  int v11; // ecx
  int v12; // ecx
  __int16 v13; // [esp+Ah] [ebp-6h]
  char v14[4]; // [esp+Ch] [ebp-4h] BYREF

  v3 = *(_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a2 + 756))(a2, v14); /*0x4135ec*/
  v13 = HIWORD(v3); /*0x4135f4*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 760))(a2, MEMORY[0x887850]); /*0x4135fb*/
  if ( (v3 & 0x8000u) == 0 ) /*0x413604*/
    v3 = (__int16)v3; /*0x41360a*/
  else
    v3 = 0; /*0x413606*/
  if ( v13 >= 0 ) /*0x413616*/
    v4 = v13; /*0x41361c*/
  else
    v4 = 0; /*0x413618*/
  v5 = v3 / (MEMORY[0x87F914] / 20); /*0x41363b*/
  v6 = 19; /*0x41363d*/
  if ( v5 <= 19 ) /*0x413645*/
    v6 = v5; /*0x413647*/
  v7 = v4 / (MEMORY[0x87F918] / 20); /*0x413666*/
  if ( v7 > 19 ) /*0x41366b*/
    v7 = 19; /*0x41366d*/
  v8 = *(this + 120 * v7 + 6 * v6); /*0x413680*/
  v9 = (char *)(this + 120 * v7 + 6 * v6); /*0x413683*/
  result = (*(int (__thiscall **)(char *, int *))(v8 + 16))(v9, &a2); /*0x413688*/
  if ( result != -1 ) /*0x41368e*/
  {
    v11 = *((_DWORD *)v9 + 4); /*0x413690*/
    if ( result < v11 ) /*0x413695*/
    {
      v12 = v11 - 1; /*0x413697*/
      for ( *((_DWORD *)v9 + 4) = v12; /*0x41369d*/
            result < *((_DWORD *)v9 + 4);
            *(_DWORD *)(*((_DWORD *)v9 + 1) + 4 * result - 4) = *(_DWORD *)(*((_DWORD *)v9 + 1) + 4 * result) )
      {
        ++result; /*0x4136a2*/
      }
    }
  }
  return result; /*0x4136b1*/
}


// ==== 0x004136C0  LoadGame::LoadIteratedData  this=VectorClass  sig=csp ====
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
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(*((_DWORD *)i - 1) + 4 * v11++)); /*0x413769*/
      while ( v11 < a2 ); /*0x413775*/
    }
    if ( ++v12 >= 400 ) /*0x413788*/
      return 0; /*0x41378e*/
  }
  return result; /*0x413790*/
}


// ==== 0x004137A0  VectorClass::RemoveObjectById  this=VectorClass  sig=csp ====
int __thiscall VectorClass_RemoveObjectById(int this)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // [esp+4h] [ebp-4h] BYREF

  v7 = this; /*0x4137a0*/
  if ( !*(_DWORD *)(this + 9616) ) /*0x4137a1*/
    return 0; /*0x4137ab*/
  v2 = this + 9600; /*0x4137b6*/
  v3 = *(_DWORD *)(this + 9600); /*0x4137c3*/
  v7 = **(_DWORD **)(this + 9604); /*0x4137c7*/
  v4 = (*(int (__thiscall **)(int, int *))(v3 + 16))(this + 9600, &v7); /*0x4137cb*/
  if ( v4 != -1 ) /*0x4137d1*/
  {
    v5 = *(_DWORD *)(v2 + 16); /*0x4137d3*/
    if ( v4 < v5 ) /*0x4137d8*/
    {
      v6 = v5 - 1; /*0x4137da*/
      for ( *(_DWORD *)(v2 + 16) = v6; /*0x4137e0*/
            v4 < *(_DWORD *)(v2 + 16);
            *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * v4) )
      {
        ++v4; /*0x4137e5*/
      }
    }
  }
  return v7; /*0x4137ae*/
}


// ==== 0x00413800  LoadGame::ClearAllSlots  this=VectorClass  sig=csp ====
int __thiscall sub_413800(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // ebx
  int v4; // edi
  int v5; // edi

  v2 = this; /*0x413806*/
  v3 = 400; /*0x413808*/
  do /*0x413825*/
  {
    v4 = v2[2]; /*0x41380f*/
    (*(void (__thiscall **)(_DWORD *))(*v2 + 12))(v2); /*0x413814*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v4, 0); /*0x41381e*/
    v2 += 6; /*0x413821*/
    --v3; /*0x413824*/
  }
  while ( v3 ); /*0x413825*/
  v5 = this->q2588; /*0x41382d*/
  (*(void (__thiscall **)(_DWORD *))(this->q960 + 12))(this + 2400); /*0x41383b*/
  return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(this->q960 + 8))(this + 2400, v5, 0); /*0x413848*/
}


// ==== 0x00413850  SaveGame::SaveIteratedData  this=VectorClass  sig=csp ====
int __thiscall sub_413850(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // ebp
  _DWORD *i; // edi
  int v5; // ecx
  int result; // eax
  int v7; // ebx

  v2 = a2; /*0x413853*/
  v3 = 0; /*0x413858*/
  for ( i = this + 1; ; i += 6 ) /*0x41385a*/
  {
    v5 = *(_DWORD *)v2; /*0x413860*/
    a2 = i[3]; /*0x41386c*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v5 + 16))(v2, &a2, 4, 0); /*0x413870*/
    if ( result < 0 ) /*0x413875*/
      break; /*0x413875*/
    v7 = 0; /*0x41387b*/
    if ( a2 > 0 ) /*0x41387f*/
    {
      do /*0x41388e*/
      {
        result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, *i + 4 * v7, 4, 0); /*0x41388e*/
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


// ==== 0x004138C0  Coord::ToGridIndex  this=VectorClass  sig=csp ====
int __thiscall Coord::ToGridIndex(char *this, VectorClass *aP1, VectorClass *aP2, VectorClass *aP3)
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

  (*(void (__thiscall **)(VectorClass *, VectorClass *))(*(_DWORD *)aP1->vtable0 + 760))(aP1, aP3); /*0x4138d4*/
  if ( (__int16)aP2 >= 0 ) /*0x4138e1*/
    v4 = (__int16)aP2; /*0x4138e7*/
  else
    v4 = 0; /*0x4138e3*/
  if ( SHIWORD(aP2) >= 0 ) /*0x4138f2*/
    v5 = SHIWORD(aP2); /*0x4138f8*/
  else
    v5 = 0; /*0x4138f4*/
  v6 = 19; /*0x41390d*/
  if ( v4 / (*(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] / 20) <= 19 ) /*0x413921*/
    v6 = v4 / (*(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] / 20); /*0x413923*/
  v7 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_31[3] / 20; /*0x41393e*/
  v8 = v5 / (*(_DWORD *)&MEMORY[0x87F8E4].__pad_31[3] / 20); /*0x413941*/
  if ( v8 > 19 ) /*0x413946*/
    v8 = 19; /*0x413948*/
  v9 = v6 + 20 * v8; /*0x413957*/
  if ( (__int16)aP3 >= 0 ) /*0x41395a*/
    v10 = (__int16)aP3; /*0x413960*/
  else
    v10 = 0; /*0x41395c*/
  if ( SHIWORD(aP3) >= 0 ) /*0x41396b*/
    v11 = SHIWORD(aP3); /*0x413971*/
  else
    v11 = 0; /*0x41396d*/
  v12 = v10 / (*(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] / 20); /*0x413975*/
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
    v18 = (*(int (__thiscall **)(char *, VectorClass **))(*(_DWORD *)v17 + 16))(v17, &aP1); /*0x4139b4*/
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
      *(_DWORD *)(v23 + 4 * result) = aP1; /*0x413a21*/
    }
  }
  return result; /*0x413a24*/
}


// ==== 0x00413A30  Coord::ToCell  this=Coord  sig=csp ====
_DWORD *__thiscall Coord::ToCell(_DWORD *this, IUnknown *aP1)
{
  int v3; // [esp+0h] [ebp-4h]

  LOWORD(v3) = *this / 256; /*0x413a3f*/
  HIWORD(v3) = this->q004 / 256; /*0x413a53*/
  aP1->field_0 = v3; /*0x413a60*/
  return &aP1->field_0; /*0x413a63*/
}


// ==== 0x00413A70  DynamicVector::AddItem  this=DynamicVector  sig=csp ====
char __thiscall DynamicVector::AddItem(_DWORD *this, VectorClass *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->q008; /*0x413a73*/
  if ( this->q010 >= v3 ) /*0x413a7b*/
  {
    if ( !this->IsAllocated && v3 ) /*0x413a86*/
      return 0; /*0x413a86*/
    v4 = this->CapacityIncrement; /*0x413a88*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x413a98*/
      return 0; /*0x413a9f*/
  }
  v6 = this->q010; /*0x413aa5*/
  v7 = this->Items; /*0x413aa8*/
  this->q010 = v6 + 1; /*0x413aae*/
  *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)aP1->vtable0; /*0x413ab8*/
  return 1; /*0x413aa1*/
}


// ==== 0x00413AC0  sub_413AC0  this=-  sig=ida-proto ====
void sub_413AC0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x413acc*/
  MEMORY[0x889E70] = Math::Sqrt(v0 + v0); /*0x413ade*/
}


// ==== 0x00413AF0  sub_413AF0  this=-  sig=ida-proto ====
void sub_413AF0()
{
  MEMORY[0x889EC0] = MEMORY[0x889E70] / 60.0; /*0x413afc*/
}


// ==== 0x00413B10  sub_413B10  this=-  sig=ida-proto ====
void sub_413B10()
{
  MEMORY[0x889EA8] = 1.0 / MEMORY[0x889EC0]; /*0x413b1c*/
}


// ==== 0x00413B30  sub_413B30  this=-  sig=ida-proto ====
void sub_413B30()
{
  MEMORY[0x889EA0] = 0.0174532925199433 * 45.0; /*0x413b3c*/
}


// ==== 0x00413B50  sub_413B50  this=-  sig=ida-proto ====
void sub_413B50()
{
  MEMORY[0x889E78] = 0.0174532925199433 * 60.0; /*0x413b5c*/
}


// ==== 0x00413B70  sub_413B70  this=-  sig=ida-proto ====
void sub_413B70()
{
  MEMORY[0x889E50] = 0.0174532925199433 * 90.0; /*0x413b7c*/
}


// ==== 0x00413B90  sub_413B90  this=-  sig=ida-proto ====
__int64 sub_413B90()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x889E50] - MEMORY[0x889E78]); /*0x413ba2*/
  result = Math::RoundToInt(v0 * MEMORY[0x889E70] * 0.5); /*0x413bb6*/
  MEMORY[0x889EC8] = result; /*0x413bbb*/
  return result; /*0x413bc0*/
}


// ==== 0x00413BD0  sub_413BD0  this=-  sig=ida-proto ====
void sub_413BD0()
{
  MEMORY[0x889E80] = Math::ArcTan((double)MEMORY[0x889EC8] * 0.00390625); /*0x413be7*/
}


// ==== 0x00413C00  sub_413C00  this=-  sig=ida-proto ====
void sub_413C00()
{
  MEMORY[0x889E98] = Math::ArcTan((double)(2 * MEMORY[0x889EC8]) / MEMORY[0x889E70]); /*0x413c22*/
}


// ==== 0x00413C30  sub_413C30  this=-  sig=ida-proto ====
__int64 sub_413C30()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x889EC8]) + 0.5); /*0x413c4b*/
  MEMORY[0x889EBC] = result; /*0x413c50*/
  return result; /*0x413c56*/
}


// ==== 0x00413C60  sub_413C60  this=-  sig=ida-proto ====
int sub_413C60()
{
  MEMORY[0x889E68] = 0; /*0x413c62*/
  return 0; /*0x413c6e*/
}


// ==== 0x00413C70  sub_413C70  this=-  sig=ida-proto ====
int sub_413C70()
{
  MEMORY[0x889E88] = 0; /*0x413c72*/
  MEMORY[0x889E8C] = 0; /*0x413c77*/
  MEMORY[0x889E90] = 0; /*0x413c7c*/
  return 0; /*0x413c81*/
}


// ==== 0x00413C90  sub_413C90  this=-  sig=ida-proto ====
int sub_413C90()
{
  MEMORY[0x889EB8] = 0; /*0x413c95*/
  MEMORY[0x889EB0] = 128; /*0x413c9f*/
  MEMORY[0x889EB4] = 128; /*0x413ca4*/
  return 128; /*0x413ca9*/
}


// ==== 0x00413CB0  sub_413CB0  this=-  sig=ida-proto ====
int sub_413CB0()
{
  MEMORY[0x889E58] = 0; /*0x413cb2*/
  MEMORY[0x889E5C] = 0; /*0x413cb7*/
  MEMORY[0x889E60] = 0; /*0x413cbc*/
  MEMORY[0x889E64] = 0; /*0x413cc1*/
  return 0; /*0x413cc6*/
}


// ==== 0x00413CD0  sub_413CD0  this=IUnknown  sig=ida-proto ====
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
int __userpurge AircraftClass::Construct@<eax>(int this@<ecx>, int a2@<edi>, int a3, #37 *ppv)
{
  int v5; // eax
  int *v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // ebp
  int v11; // edi
  int i; // eax
  _DWORD *v13; // edx

  FootClass::Construct((_DWORD *)this, (int)ppv); /*0x413d2b*/
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
  AbstractClass::GenerateUniqueID(this + 4); /*0x413dac*/
  v5 = *(_DWORD *)(this + 1732); /*0x413db1*/
  if ( v5 ) /*0x413db9*/
  {
    v6 = (int *)(this + 1652); /*0x413dbb*/
    v7 = v5 + 844; /*0x413dc1*/
    v8 = *(_DWORD *)(this + 1652); /*0x413dc7*/
    if ( v8 ) /*0x413dcb*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v8 + 8))(*(_DWORD *)(this + 1652)); /*0x413dd0*/
    if ( ((int (__stdcall *)(int, _DWORD, int, void *, #37 **))CoCreateInstance)(v7, 0, 7, &riid, &ppv) >= 0 ) /*0x413dea*/
    {
      if ( ((int (__stdcall *)(#37 *))OleRun)(ppv) >= 0 ) /*0x413df9*/
        (**(void (__stdcall ***)(#37 *, void *, int))ppv)(ppv, &stru_817BB0, this + 1652); /*0x413e08*/
      (*(void (__stdcall **)(#37 *))(*(_DWORD *)ppv + 8))(ppv); /*0x413e11*/
    }
    if ( !*v6 ) /*0x413e14*/
      WinAPI::Wrapper(-2147467261); /*0x413e1e*/
    a2 = *v6; /*0x413e23*/
    (*(void (__stdcall **)(int, int))(*(_DWORD *)a2 + 12))(a2, this); /*0x413e29*/
  }
  AircraftClass::Update(this, a2); /*0x413e2e*/
  if ( MEMORY[0x87F7E8][539374] < MEMORY[0x87F7E8][539372] /*0x413e69*/
    || (BYTE1(MEMORY[0x87F7E8][539373]) || !MEMORY[0x87F7E8][539372])
    && MEMORY[0x87F7E8][539375] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(MEMORY[0x87F7E8][539370] + 8))(
         &MEMORY[0x87F7E8][539370],
         MEMORY[0x87F7E8][539372] + MEMORY[0x87F7E8][539375],
         0) )
  {
    v9 = MEMORY[0x87F7E8][539374]++; /*0x413e76*/
    *(_DWORD *)(MEMORY[0x87F7E8][539371] + 4 * v9) = this; /*0x413e85*/
  }
  ppv = (#37 *)AbstractClass::GetVtable3(this + 4); /*0x413e94*/
  if ( dword_A8ED54[130748] + 1 <= dword_A8ED54[130749] ) /*0x413ea0*/
    goto LABEL_25; /*0x413ea0*/
  if ( dword_A8ED54[130749] ) /*0x413ea8*/
  {
    v10 = dword_A8ED54[130749]; /*0x413eb1*/
    if ( dword_A8ED54[130749] < 0 ) /*0x413eb5*/
      return this; /*0x413eb5*/
  }
  else
  {
    v10 = 10; /*0x413eaa*/
  }
  v11 = __2_YAPAXI_Z(8 * (dword_A8ED54[130749] + v10)); /*0x413ecb*/
  if ( v11 ) /*0x413ed2*/
  {
    for ( i = 0; i < dword_A8ED54[130748]; *(_DWORD *)(v11 + 8 * i - 4) = v13[1] ) /*0x413ee7*/
    {
      v13 = (_DWORD *)(dword_A8ED54[130747] + 8 * i++); /*0x413eef*/
      *(_DWORD *)(v11 + 8 * i - 8) = *v13; /*0x413ef5*/
    }
    __3_YAXPAX_Z((void *)dword_A8ED54[130747]); /*0x413f10*/
    dword_A8ED54[130747] = v11; /*0x413f1f*/
    dword_A8ED54[130749] += v10; /*0x413f25*/
    dword_A8ED54[130751] = 0; /*0x413f2a*/
LABEL_25:
    *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748]) = ppv; /*0x413f34*/
    *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748] + 4) = this; /*0x413f52*/
    LOBYTE(dword_A8ED54[130750]) = 0; /*0x413f5c*/
    ++dword_A8ED54[130748]; /*0x413f63*/
  }
  return this; /*0x413f6a*/
}


// ==== 0x00413F80  AircraftClass::Update  this=AircraftClass  sig=csp ====
_DWORD *__thiscall AircraftClass::Update(int *this)
{
  _DWORD *result; // eax
  AircraftTypeClass *v4; // edi
  HouseClass *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  AircraftTypeClass **v9; // eax
  DirStruct *Value; // eax
  int v11; // edi
  int v12; // eax
  AircraftTypeClass *v13; // eax
  int v14; // ecx
  HouseClass *v15; // ecx
  BuildingClass *v16; // [esp+0h] [ebp-Ch]
  FootClass *v17; // [esp+4h] [ebp-8h]
  _BYTE v18[4]; // [esp+8h] [ebp-4h] BYREF

  result = TechnoClass::Update(v16, v17); /*0x413f85*/
  v4 = (AircraftTypeClass *)this[433]; /*0x413f8a*/
  if ( v4 ) /*0x413f92*/
  {
    v5 = (HouseClass *)this[135]; /*0x413f98*/
    if ( v5 ) /*0x413fa1*/
    {
      v6 = 0; /*0x413fa6*/
      v7 = v5->relatedTagsCapacity + 388; /*0x413fa8*/
      v8 = *(_DWORD *)(v7 + 16); /*0x413fad*/
      if ( v8 > 0 ) /*0x413fb2*/
      {
        v9 = *(AircraftTypeClass ***)(v7 + 4); /*0x413fb4*/
        while ( *v9 != v4 ) /*0x413fb9*/
        {
          ++v6; /*0x413fbb*/
          ++v9; /*0x413fbc*/
          if ( v6 >= v8 ) /*0x413fc1*/
            goto LABEL_9; /*0x413fc1*/
        }
        Power::ChangedHouse(this + 84, 1); /*0x413fcd*/
      }
    }
LABEL_9:
    BuildingTypeClass::GetPowerOutput((_WORD *)this + 452, *(ObjectClass **)(this[433] + 1820)); /*0x413fd2*/
    BuildingTypeClass::GetPowerOutput((_WORD *)this + 464, *(ObjectClass **)(this[433] + 1820)); /*0x414001*/
    Value = (DirStruct *)ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)v18); /*0x41400d*/
    FacingClass::Set_SyncLog((FacingClass *)(this + 232), Value); /*0x414015*/
    v11 = *this; /*0x414020*/
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)this[433] + 188))(this[433]); /*0x414024*/
    (*(void (__thiscall **)(int *, int))(v11 + 460))(this, v12); /*0x41402d*/
    v13 = (AircraftTypeClass *)this[433]; /*0x414033*/
    v14 = *(_DWORD *)&v13[2].Name[28]; /*0x41403a*/
    if ( v14 == -1 ) /*0x414043*/
      v14 = *(_DWORD *)&v13[2].Name[32]; /*0x414045*/
    this[191] = v14; /*0x41404b*/
    result = (_DWORD *)v13->Strength; /*0x414051*/
    this[27] = (int)result; /*0x414057*/
    this[28] = (int)result; /*0x41405a*/
  }
  v15 = (HouseClass *)this[135]; /*0x41405d*/
  if ( v15 ) /*0x414065*/
    return (_DWORD *)BuildingClass::PowerUpdate(v15, (TechnoClass *)this); /*0x414068*/
  return result; /*0x41406d*/
}


// ==== 0x00414080  AircraftClass::Destruct  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::Destruct(void **this)
{
  void **v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int Vtable3; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // esi
  void **v10; // edx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  _DWORD *v14; // eax
  void **v16; // [esp+10h] [ebp-4h] BYREF

  v2 = this + 1; /*0x414087*/
  *this = &AircraftClass::`vftable'; /*0x41408a*/
  this->vtable3 = &AircraftClass::`vftable'; /*0x414090*/
  this->vtable4 = &AircraftClass::`vftable'; /*0x414097*/
  this->vtable2 = &AircraftClass::`vftable'; /*0x41409e*/
  this->q1B0 = &AircraftClass::`vftable'; /*0x4140a4*/
  if ( LOBYTE(MEMORY[0x87F7E8][539758]) ) /*0x4140b5*/
  {
    v3 = (int)this->q1B1; /*0x4140b7*/
    if ( v3 ) /*0x4140c1*/
    {
      if ( HouseClass::CanBuild(this->focus, v3, 0, 0) == -1 ) /*0x4140d4*/
        *((_BYTE *)this->focus + 508) = 1; /*0x4140dc*/
      TechnoClass::CleanupAll(this, 0); /*0x4140e6*/
      v4 = (int)this->q175; /*0x4140eb*/
      if ( v4 ) /*0x4140f3*/
      {
        TeamClass::LiberateMember_Start(v4, (int)this, 0xFFFFFFFF, 0); /*0x4140f9*/
        this->q175 = 0; /*0x4140fe*/
      }
      HouseClass::DecrementUnitCount(this->focus, this); /*0x41410b*/
      TechnoClass::CleanupDirection(this); /*0x414112*/
      this->q1B1 = 0; /*0x414117*/
    }
  }
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x414125*/
  v16 = this; /*0x41413a*/
  v5 = (*(int (__thiscall **)(_DWORD *, void ***))(MEMORY[0x87F7E8][539370] + 16))(&MEMORY[0x87F7E8][539370], &v16); /*0x41413e*/
  if ( v5 != -1 && v5 < MEMORY[0x87F7E8][539374] ) /*0x41414e*/
  {
    --MEMORY[0x87F7E8][539374]; /*0x414153*/
    for ( ; /*0x414159*/
          v5 < MEMORY[0x87F7E8][539374];
          *(_DWORD *)(MEMORY[0x87F7E8][539371] + 4 * v5 - 4) = *(_DWORD *)(MEMORY[0x87F7E8][539371] + 4 * v5) )
    {
      ++v5; /*0x414161*/
    }
  }
  Vtable3 = AbstractClass::GetVtable3((int)v2); /*0x414174*/
  v7 = dword_A8ED54[130748]; /*0x414179*/
  v16 = (void **)Vtable3; /*0x41417f*/
  if ( dword_A8ED54[130748] ) /*0x414185*/
  {
    if ( !LOBYTE(dword_A8ED54[130750]) ) /*0x414192*/
    {
      qsort((void *)dword_A8ED54[130747], dword_A8ED54[130748], 8, CompareFunction); /*0x4141a2*/
      v7 = dword_A8ED54[130748]; /*0x4141a7*/
      dword_A8ED54[130751] = 0; /*0x4141b0*/
      LOBYTE(dword_A8ED54[130750]) = 1; /*0x4141b6*/
    }
    v8 = dword_A8ED54[130747]; /*0x4141bd*/
    v9 = v7; /*0x4141c3*/
    while ( v9 > 0 ) /*0x4141c7*/
    {
      v10 = *(void ***)(v8 + 8 * (v9 / 2)); /*0x4141d4*/
      v11 = v8 + 8 * (v9 / 2); /*0x4141d8*/
      if ( (int)v16 >= (int)v10 ) /*0x4141e0*/
      {
        if ( v10 == v16 ) /*0x4141ea*/
        {
          if ( v11 ) /*0x414210*/
          {
            v12 = (v11 - dword_A8ED54[130747]) >> 3; /*0x414218*/
            if ( v12 != -1 ) /*0x41421e*/
            {
              v13 = v12 + 1; /*0x414220*/
              if ( v13 < v7 ) /*0x414223*/
              {
                do /*0x414242*/
                {
                  v14 = (_DWORD *)(dword_A8ED54[130747] + 8 * v13++); /*0x41422b*/
                  *(v14 - 2) = *v14; /*0x414231*/
                  *(v14 - 1) = v14[1]; /*0x414237*/
                  v7 = dword_A8ED54[130748]; /*0x41423a*/
                }
                while ( v13 < dword_A8ED54[130748] ); /*0x414242*/
              }
              dword_A8ED54[130748] = v7 - 1; /*0x41424f*/
              *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748]) = 0; /*0x414255*/
              *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748] + 4) = 0; /*0x414263*/
              dword_A8ED54[130751] = 0; /*0x414267*/
            }
          }
          break; /*0x414267*/
        }
        v8 = v11 + 8; /*0x4141ec*/
        v9 += -1 - v9 / 2; /*0x4141f4*/
      }
      else
      {
        v9 /= 2; /*0x4141e2*/
      }
    }
  }
  this->isAliveFlag = 0; /*0x41426d*/
  return FootClass::Destruct(this); /*0x414208*/
}


// ==== 0x00414290  AircraftClass::QueryInterface  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::_vt00(#374 *this, AbstractClass *a2, void *iid, void **ppv)
{
  int result; // eax

  result = AbstractClass::QueryInterface(this); /*0x4142a2*/
  if ( result < 0 ) /*0x4142a9*/
  {
    if ( !memcmp(iid, &IID_IFlyControl, 0x10u) ) /*0x4142b8*/
    {
      if ( a2 ) /*0x4142bf*/
      {
        *ppv = (char *)&a2[42].__pad_0[1] + 2; /*0x4142c8*/
        (*(void (__stdcall **)(AbstractClass *))(a2->__pad_0[0] + 4))(a2); /*0x4142cf*/
        return 0; /*0x4142d7*/
      }
      *ppv = 0; /*0x4142dc*/
    }
    (*(void (__stdcall **)(AbstractClass *))(a2->__pad_0[0] + 4))(a2); /*0x4142e4*/
    return 0; /*0x4142e7*/
  }
  return result; /*0x4142d4*/
}


// ==== 0x004142F0  AircraftClass::AddRef  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::_vt01(#374 *this, int a2)
{
  return AbstractClass::COMStub_AddRef(this); /*0x4142fa*/
}


// ==== 0x00414300  AircraftClass::Release  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::_vt02(#374 *this, int a2)
{
  return AbstractClass::COMStub_Release(this); /*0x41430a*/
}


// ==== 0x00414310  AircraftClass::MoveTo  this=AircraftClass  sig=csp ====
char __thiscall sub_414310(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // ebx
  int v5; // ecx
  int v6; // edi
  int v7; // ebx
  char v8; // bl
  int v9; // eax
  __int16 v10; // dx
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  int v15; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  v3 = a2; /*0x414314*/
  v15 = *a2; /*0x414320*/
  v5 = this->Type; /*0x414324*/
  v16 = a2[1]; /*0x41432d*/
  v17 = a2[2]; /*0x414334*/
  if ( !*(_BYTE *)(v5 + 3432) ) /*0x414338*/
  {
    if ( this->isALoaner || !(unsigned __int8)IsCoordVisibleMap(a2) ) /*0x414352*/
    {
      v6 = this->Type; /*0x41436c*/
      v7 = Cell::GetGroundHeight(v3); /*0x414381*/
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 188))(v6) + v7; /*0x41438b*/
    }
    else
    {
      v17 = Cell::GetGroundHeight(v3); /*0x414366*/
    }
  }
  v8 = a3; /*0x41438f*/
  if ( !(unsigned __int8)FootClass::DispatchInput(&v15, a3) ) /*0x41439b*/
    return 0; /*0x41449d*/
  v9 = this->Type; /*0x4143a8*/
  if ( !*(_BYTE *)(v9 + 560) /*0x4143e1*/
    || !*(_BYTE *)(v9 + 3594)
    || *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1016))(this, 0)
    && *(_BYTE *)(*(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1016))(this, 0) + 327) )
  {
    this->isALoaner = 1; /*0x4143eb*/
  }
  if ( this->q118 ) /*0x4143f2*/
    this->HasPassengers = 1; /*0x4143fc*/
  LOBYTE(v10) = 0; /*0x414403*/
  HIBYTE(v10) = v8; /*0x414409*/
  LOWORD(a2) = v10; /*0x414412*/
  FacingClass::Set_SyncLog(&a2); /*0x414417*/
  this->turretChargeTimer = MEMORY[0xA8ED84]; /*0x41442c*/
  v11 = v16; /*0x41442e*/
  this->behindAnim = 1; /*0x414432*/
  this->currentTurretNumber = v11; /*0x414438*/
  this->secondaryTurretIndex = 1; /*0x41443b*/
  v12 = this->Type; /*0x41443e*/
  this->radioContact = 0; /*0x414444*/
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 188))(v12); /*0x414456*/
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 456))(this) == v13 ) /*0x414464*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1348))(this, 0, 1072693248); /*0x414471*/
  else
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 1348))(this, 0, 0); /*0x41448a*/
  return 1; /*0x414477*/
}


// ==== 0x004144B0  AircraftClass::Draw  this=AircraftClass  sig=csp ====
void __userpurge AircraftClass::Draw(
        AbstractClass *ecx0@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        TechnoClass **a4,
        AbstractClass *a5,
        int a6,
        int a7)
{
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // edx
  int v12; // eax
  AircraftTypeClass *v14; // esi
  int edx11; // edx
  int *v15; // esi
  void *NeedsSaveOrLink; // eax
  int v17; // edi
  TechnoClass *v18; // edx
  int *v19; // eax
  int v20; // ecx
  int v21; // eax
  AbstractClass *v22; // ecx
  int referenceCount; // eax
  int DB; // eax
  AircraftTypeClass *v26; // eax
  _DWORD *eax20; // eax
  int v27; // ebx
  int v28; // edx
  int v29; // ebx
  char v30; // al
  int v31; // edx
  int v32; // eax
  VectorClass *v34; // esi
  void *vtable0; // eax
  int v35; // eax
  const void *v36; // eax
  char v37; // al
  AircraftTypeClass *v39; // esi
  float *inited; // eax
  float *v40; // eax
  Tactical *v42; // eax
  void *eax37; // eax
  const void *v43; // eax
  AircraftTypeClass *v45; // esi
  int edi39; // edi
  float *v46; // eax
  int v48; // [esp+40h] [ebp-D0h]
  MouseClass *v49; // [esp+40h] [ebp-D0h]
  char v50[4]; // [esp+50h] [ebp-C0h] BYREF
  TechnoClass *aP3; // [esp+54h] [ebp-BCh] BYREF
  int v52; // [esp+58h] [ebp-B8h] BYREF
  AbstractClass *aP2[2]; // [esp+5Ch] [ebp-B4h] BYREF
  int a1; // [esp+64h] [ebp-ACh] BYREF
  int v55; // [esp+68h] [ebp-A8h]
  int abstractFlags; // [esp+6Ch] [ebp-A4h] BYREF
  int v57; // [esp+70h] [ebp-A0h] BYREF
  int uniqueId; // [esp+74h] [ebp-9Ch]
  int v59; // [esp+78h] [ebp-98h] BYREF
  int v60; // [esp+7Ch] [ebp-94h]
  _BYTE v61[104]; // [esp+80h] [ebp-90h] BYREF
  _BYTE v62[40]; // [esp+E8h] [ebp-28h] BYREF

  if ( HouseClass_Player.__pad_5568[23223] /*0x4144de*/
    || !g_hWnd
    || (**(_DWORD **)&HouseClass_Player.__pad_5568[8060] & 0x1000) == 0 )
  {
    goto LABEL_9; /*0x4144de*/
  }
  if ( !ecx0[45].NeedsSaveOrLink ) /*0x4144e4*/
    WinAPI::Wrapper(-2147467261); /*0x4144f3*/
  v8 = (int *)(*(int (__stdcall **)(void *, int *))(*(_DWORD *)ecx0[45].NeedsSaveOrLink + 24))( /*0x414506*/
                ecx0[45].NeedsSaveOrLink,
                &v57);
  v9 = *v8; /*0x414509*/
  v10 = v8[1]; /*0x41450b*/
  abstractFlags = v8[2]; /*0x414517*/
  a1 = v9; /*0x41451d*/
  v55 = v10; /*0x414521*/
  v57 = *(_DWORD *)&ecx0[4].__pad_0[12]; /*0x414527*/
  uniqueId = ecx0[4].uniqueId; /*0x414533*/
  abstractFlags = ecx0[4].abstractFlags; /*0x41453a*/
  if ( !Game::Stub3((IUnknown *)&a1) /*0x414579*/
    || (v11 = ecx0[4].uniqueId,
        v12 = ecx0[4].abstractFlags,
        v57 = *(_DWORD *)&ecx0[4].__pad_0[12],
        uniqueId = v11,
        v59 = v12,
        !Game::Stub3((IUnknown *)&v57))
    || (unsigned __int8)House::IsHumanPlayer(*(#375 **)ecx0[15].__pad_0) )
  {
LABEL_9:
    v14 = *(AircraftTypeClass **)&ecx0[48].__pad_0[4]; /*0x41458e*/
    if ( !(*(unsigned __int8 (__thiscall **)(AbstractClass *, int))(*(_DWORD *)ecx0->__pad_0 + 1088))( /*0x414597*/
            ecx0,
            HouseClass_Player.field_0) )
      v14 = (AircraftTypeClass *)(*(int (__thiscall **)(AbstractClass *, int))(*(_DWORD *)ecx0->__pad_0 + 204))(ecx0, 1); /*0x4145ae*/
    edx11 = *(_DWORD *)&ecx0[37].__pad_0[4] % *(_DWORD *)(v14->TurretVoxel[0] + 8); /*0x4145bd*/
    v15 = (int *)a4; /*0x4145c0*/
    v52 = (int)a4[1]; /*0x4145cb*/
    NeedsSaveOrLink = ecx0[45].NeedsSaveOrLink; /*0x4145cf*/
    v17 = edx11; /*0x4145d7*/
    v18 = *a4; /*0x4145d9*/
    v60 = v17; /*0x4145db*/
    aP3 = v18; /*0x4145df*/
    if ( !NeedsSaveOrLink ) /*0x4145e3*/
      WinAPI::Wrapper(-2147467261); /*0x4145ea*/
    v19 = (int *)(*(int (__stdcall **)(void *, AbstractClass **, int))(*(_DWORD *)ecx0[45].NeedsSaveOrLink + 44))( /*0x4145fd*/
                   ecx0[45].NeedsSaveOrLink,
                   aP2,
                   a3);
    v20 = *v19; /*0x414600*/
    v21 = v19[1]; /*0x414606*/
    v52 += v20; /*0x41460f*/
    v22 = (AbstractClass *)((char *)aP2[0] + v21); /*0x414613*/
    referenceCount = ecx0[7].referenceCount; /*0x414615*/
    aP2[0] = v22; /*0x41461d*/
    if ( referenceCount && *(_BYTE *)(*(_DWORD *)&ecx0[48].__pad_0[4] + 3580) ) /*0x414629*/
    {
      DB = CCINIClass::GetDB(&ecx0[7].nextArrayIndex); /*0x414639*/
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)DB + 276))(DB, &v52, a6); /*0x41464f*/
    }
    (*(void (__thiscall **)(AbstractClass *, char *))(*(_DWORD *)ecx0->__pad_0 + 440))(ecx0, v50); /*0x41465f*/
    v26 = *(AircraftTypeClass **)&ecx0[48].__pad_0[4]; /*0x414665*/
    if ( !v26->Voxel || !v26->MainVoxel[0] ) /*0x414679*/
      goto LABEL_40; /*0x414681*/
    a1 = *(_DWORD *)&ecx0[4].__pad_0[12]; /*0x414691*/
    v55 = ecx0[4].uniqueId; /*0x41469d*/
    abstractFlags = ecx0[4].abstractFlags; /*0x4146a4*/
    abstractFlags = Cell::GetGroundHeight((IUnknown *)&a1); /*0x4146b2*/
    Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], &a1, (IUnknown *)aP2); /*0x4146c6*/
    if ( !ecx0[45].NeedsSaveOrLink ) /*0x4146cb*/
      WinAPI::Wrapper(-2147467261); /*0x4146da*/
    eax20 = (_DWORD *)(*(int (__stdcall **)(void *, int *, int, int))(*(_DWORD *)ecx0[45].NeedsSaveOrLink + 48))( /*0x4146ee*/
                        ecx0[45].NeedsSaveOrLink,
                        &v57,
                        a2,
                        v48);
    v27 = *eax20 + a1; /*0x414700*/
    v55 += eax20[1]; /*0x414702*/
    v28 = *(_DWORD *)ecx0->__pad_0; /*0x414706*/
    a1 = v27; /*0x41470b*/
    aP3 = 0; /*0x41470f*/
    v29 = (*(int (__thiscall **)(AbstractClass *))(v28 + 456))(ecx0); /*0x41471d*/
    if ( aP3 != (TechnoClass *)-1 ) /*0x414726*/
      aP3 = (TechnoClass *)(v17 & 0x1F | (32 * (_DWORD)aP3)); /*0x414730*/
    v30 = (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)ecx0->__pad_0 + 192))(ecx0); /*0x414739*/
    v31 = ecx0[4].uniqueId; /*0x414741*/
    v59 = *(_DWORD *)&ecx0[4].__pad_0[12]; /*0x414744*/
    HIBYTE(v52) = v30; /*0x41474c*/
    v32 = ecx0[4].abstractFlags; /*0x414750*/
    BYTE2(ecx0[47].nextArrayIndex) = 0; /*0x414759*/
    v60 = v31; /*0x414760*/
    *(_DWORD *)v61 = v32; /*0x414764*/
    v34 = (VectorClass *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v59); /*0x41476d*/
    if ( LOBYTE(ecx0[3].NeedsSaveOrLink) ) /*0x41476f*/
    {
      if ( v29 < 0 ) /*0x414787*/
        goto LABEL_32; /*0x414787*/
    }
    else if ( v29 < *(int *)&stru_87C374.__pad_579C[33708] ) /*0x41477f*/
    {
      goto LABEL_32; /*0x41477f*/
    }
    vtable0 = v34[20].vtable0; /*0x414789*/
    if ( ((unsigned __int16)vtable0 & 0x100) != 0 /*0x4147c8*/
      && ((BYTE1(vtable0) & 8) != 0 && (*((_DWORD *)Cell::GetNeighbourContent(v34, 0) + 80) & 0x100) != 0
       || ((int)v34[20].vtable0 & 0x800) == 0 && (*((_DWORD *)Cell::GetNeighbourContent(v34, 6u) + 80) & 0x100) != 0) )
    {
      (*(void (__thiscall **)(AbstractClass *, _DWORD))(*(_DWORD *)ecx0->__pad_0 + 460))( /*0x4147d5*/
        ecx0,
        *(_DWORD *)&stru_87C374.__pad_579C[33708]);
      v35 = ZCoordToScreenY((IUnknown *)*(int *)&stru_87C374.__pad_579C[33708]); /*0x4147e1*/
      v55 -= v35; /*0x4147e6*/
LABEL_33:
      if ( !ecx0[45].NeedsSaveOrLink ) /*0x4147f9*/
        WinAPI::Wrapper(-2147467261); /*0x414808*/
      v36 = (const void *)(*(int (__stdcall **)(void *, _BYTE *, TechnoClass **))(*(_DWORD *)ecx0[45].NeedsSaveOrLink /*0x414823*/
                                                                                + 40))(
                            ecx0[45].NeedsSaveOrLink,
                            v62,
                            &aP3);
      Transform::Copy(&v61[8], v36); /*0x41482b*/
      v37 = ecx0[27].__pad_0[1]; /*0x414830*/
      qmemcpy(&v61[56], &v61[8], 0x30u); /*0x414845*/
      if ( !v37 ) /*0x414847*/
      {
        v39 = *(AircraftTypeClass **)&ecx0[48].__pad_0[4]; /*0x414849*/
        inited = (float *)AudioConfig::InitDefault(v62); /*0x414866*/
        v40 = MultiplyMatrix3x4((ObjectClass *)&v61[8], inited, (float *)&v61[56]); /*0x414871*/
        TechnoClass::QueueDrawVoiceResponse( /*0x4148a0*/
          (int *)ecx0->__pad_0,
          (_BYTE **)v39->MainVoxel,
          v39->ShadowIndex,
          aP3,
          (int)&v39->VoxelCaches[10],
          a7,
          (TechnoClass *)&a1,
          (int)v40,
          1u,
          0,
          0,
          0);
      }
      (*(void (__thiscall **)(AbstractClass *, int))(*(_DWORD *)ecx0->__pad_0 + 460))(ecx0, v29); /*0x4148ab*/
      v42 = (Tactical *)aP2[0]; /*0x4148b9*/
      v49 = (MouseClass *)aP2[1]; /*0x4148bd*/
      BYTE2(ecx0[47].nextArrayIndex) = HIBYTE(v52); /*0x4148be*/
      TacticalClass::AddToDrawQueue(*(_DWORD **)&stru_87C374.__pad_579C[22548], ecx0, (AbstractClass *)v42, v49); /*0x4148cc*/
      LightningStorm::IsActive(); /*0x4148d1*/
      (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)ecx0->__pad_0 + 456))(ecx0); /*0x4148f9*/
      Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&abstractFlags); /*0x414919*/
      eax37 = ecx0[45].NeedsSaveOrLink; /*0x414930*/
      aP3 = (TechnoClass *)(v61[4] & 0x1F); /*0x414943*/
      if ( !eax37 ) /*0x414947*/
        WinAPI::Wrapper(-2147467261); /*0x41494e*/
      v43 = (const void *)(*(int (__stdcall **)(void *))(*(_DWORD *)ecx0[45].NeedsSaveOrLink + 36))(ecx0[45].NeedsSaveOrLink); /*0x414969*/
      Transform::Copy(v61, v43); /*0x414971*/
      qmemcpy(&v61[48], v61, 0x30u); /*0x414985*/
      v45 = *(AircraftTypeClass **)&ecx0[48].__pad_0[4]; /*0x414987*/
      edi39 = *(_DWORD *)ecx0->__pad_0; /*0x41498d*/
      v46 = (float *)AudioConfig::InitDefault(&v61[96]); /*0x41499f*/
      MultiplyMatrix3x4((ObjectClass *)v61, v46, (float *)&v61[48]); /*0x4149aa*/
      (*(void (__thiscall **)(AbstractClass *, int *, int))(edi39 + 1296))(ecx0, v45->MainVoxel, v60); /*0x4149d7*/
      v15 = (int *)a4; /*0x4149dd*/
LABEL_40:
      AbstractClass::COMStub_Return0_69((Tactical *)v15, a5); /*0x4149e5*/
      return; /*0x4149f0*/
    }
LABEL_32:
    (*(void (__thiscall **)(AbstractClass *, _DWORD))(*(_DWORD *)ecx0->__pad_0 + 460))(ecx0, 0); /*0x4147ec*/
    goto LABEL_33; /*0x4147f3*/
  }
}


// ==== 0x00414A10  nullsub_71  this=-  sig=csp ====
void __stdcall nullsub_71(int a1, int a2)
{
  ; /*0x414a10*/
}


// ==== 0x00414A80  AircraftClass::ProcessMissionTimeout  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::ProcessMissionTimeout(_DWORD *this)
{
  char *MissionControl; // eax
  int v3; // esi
  int v5; // edi
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // [esp+10h] [ebp-Ch] BYREF
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]

  if ( this->pitchAngle ) /*0x414a86*/
  {
    if ( this->q2B4 ) /*0x414ae5*/
      goto LABEL_12; /*0x414ae5*/
    if ( MEMORY[0xA8B238][0] ) /*0x414afb*/
    {
      v5 = *this; /*0x414b03*/
      v9 = this->location; /*0x414b09*/
      v10 = this->q0A0; /*0x414b15*/
      v11 = this->q0A4; /*0x414b20*/
      v6 = (*(int (__thiscall **)(_DWORD *, int, int *, _DWORD))(v5 + 964))(this, 64, &v9, 0); /*0x414b24*/
      (*(void (__thiscall **)(_DWORD *, int))(v5 + 968))(this, v6); /*0x414b2d*/
    }
    if ( !this->q2B4 ) /*0x414b33*/
    {
      v7 = *this; /*0x414b43*/
      v9 = this->location; /*0x414b49*/
      v10 = this->q0A0; /*0x414b57*/
      v11 = this->q0A4; /*0x414b5e*/
      v8 = (*(int (__thiscall **)(_DWORD *, _DWORD, int *, _DWORD))(v7 + 964))(this, 0, &v9, 0); /*0x414b64*/
      (*(void (__thiscall **)(_DWORD *, int))(v7 + 968))(this, v8); /*0x414b6d*/
    }
    if ( this->q2B4 ) /*0x414b73*/
    {
LABEL_12:
      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 1, 0); /*0x414b9e*/
      return 1; /*0x414ba4*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x414b86*/
      return 1; /*0x414b8c*/
    }
  }
  else
  {
    if ( this->team ) /*0x414a90*/
      TeamClass::LiberateMember_Start(this, -1, 0); /*0x414a9f*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x414aac*/
    MissionControl = MissionClass::GetMissionControl(this); /*0x414ab4*/
    v3 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x414ad7*/
    return v3 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x414ade*/
  }
}


// ==== 0x00414BB0  TechnoClass::SmokeUpdate  this=AircraftClass  sig=csp ====
char __thiscall TechnoClass_SmokeUpdate(char *this)
{
  int v2; // ecx
  void **v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // edi
  int v13; // edx
  void **v14; // eax
  int v15; // ecx
  void **v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edi
  void **v22; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v28; // [esp+40h] [ebp-28h] BYREF
  int v29; // [esp+44h] [ebp-24h] BYREF
  int v30; // [esp+48h] [ebp-20h]
  int v31; // [esp+4Ch] [ebp-1Ch]
  int v32; // [esp+50h] [ebp-18h] BYREF
  int v33; // [esp+54h] [ebp-14h]
  int v34; // [esp+58h] [ebp-10h]
  int v35[3]; // [esp+5Ch] [ebp-Ch] BYREF

  switch ( this->q02B ) /*0x414bcd*/
  {
    case 1: /*0x414bcd*/
    case 0x1B: /*0x414bcd*/
    case 0x1E: /*0x414bcd*/
    case 0x1F: /*0x414bcd*/
      break;
    default:
      this->AircraftClass_field_bool_6D2 = 0; /*0x414bd4*/
      break; /*0x414bd4*/
  }
  v2 = this->temporalTargetingMe; /*0x414bdb*/
  if ( v2 ) /*0x414be3*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 92))(v2); /*0x414be7*/
  if ( ((*(unsigned __int8 (__thiscall **)(char *))(this->drainingMe)(this) /*0x414c11*/
     || (*(unsigned __int8 (__thiscall **)(char *))(this->isDisguisedFlag)(this))
    && !((int)MEMORY[0xA8ED84] % 24) )
  {
    if ( *((_DWORD *)MEMORY[0x8871E0] + 209) ) /*0x414c1d*/
    {
      v3 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x414c2c*/
      if ( v3 ) /*0x414c36*/
      {
        v29 = this->q027; /*0x414c4b*/
        v30 = this->owningHouseIndex; /*0x414c54*/
        v31 = this->q029; /*0x414c60*/
        AnimClass::ctor(v3, *((void **)MEMORY[0x8871E0] + 209), (int)&v29, 0, 1, (void *)0x600, 0, 0); /*0x414c73*/
      }
    }
  }
  if ( !(*(unsigned __int8 (__thiscall **)(char *))(this->isDisguisedFlag)(this) /*0x414c94*/
    && (!(*(unsigned __int8 (__thiscall **)(char *))(this->drainingMe)(this) || !this->isImmobilized) )
  {
    goto LABEL_70; /*0x414c94*/
  }
  if ( !this->locomotor ) /*0x414c9e*/
    WinAPI::Wrapper(-2147467261); /*0x414cad*/
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 64))(this->locomotor); /*0x414cbb*/
  LOBYTE(v4) = this->isAliveFlag; /*0x414cbe*/
  if ( (_BYTE)v4 )
  {
LABEL_70:
    if ( (*(unsigned __int8 (__thiscall **)(char *))(this->isDisguisedFlag)(this) && this->temporalTargetingMe
      || (*(unsigned __int8 (__thiscall **)(char *))(this->drainingMe)(this) )
    {
      if ( this->q2B4 ) /*0x414cf2*/
        (*(void (__thiscall **)(char *, _DWORD))(this->unknown_short_3C8)(this, 0); /*0x414d02*/
      v4 = this->q169; /*0x414d08*/
      if ( v4 ) /*0x414d10*/
        LOBYTE(v4) = (*(int (__thiscall **)(char *, _DWORD, int))(this->q120)(this, 0, 1); /*0x414d1e*/
    }
    else
    {
      v5 = this->q2B4; /*0x414d2c*/
      if ( v5 ) /*0x414d34*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 84))(v5) /*0x414d8b*/
          || (v6 = this->q2B4) != 0
          && (*(_BYTE *)(v6 + 20) & 1) != 0
          && !(unsigned __int8)Object::IsAlliedWithObjectSimpleHouse(v6)
          && (v7 = (_DWORD *)this->q2B4, v7[136] == 2)
          && !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v7 + 812))(v7, this->focus) )
        {
          (*(void (__thiscall **)(char *, _DWORD))(this->unknown_short_3C8)(this, 0); /*0x414d9b*/
        }
      }
      FootClass::MovementAI(this); /*0x414da3*/
      LOBYTE(v4) = this->isAliveFlag; /*0x414da8*/
      if ( (_BYTE)v4 )
      {
        if ( this->isSinking ) /*0x414db6*/
        {
          v29 = this->q027; /*0x414dce*/
          v32 = v29; /*0x414dd2*/
          v8 = *(_DWORD *)this; /*0x414dd9*/
          v30 = this->owningHouseIndex; /*0x414ddb*/
          v33 = v30; /*0x414ddf*/
          v31 = this->q029; /*0x414dea*/
          v34 = v31 - 5; /*0x414df4*/
          (*(void (__thiscall **)(char *, int *))(v8 + 436))(this, &v32); /*0x414df8*/
          if ( (*(int (__thiscall **)(char *))(this->forceShielded)(this) < -400 ) /*0x414e0d*/
          {
            (*(void (__thiscall **)(char *, _DWORD))(this->radioLinks)(this, 0); /*0x414e15*/
            LOBYTE(v4) = (*(int (__thiscall **)(char *))(this->radioContact)(this); /*0x414e1f*/
            return v4; /*0x414e2c*/
          }
          if ( ((unsigned __int8)MEMORY[0xA8ED84] & 3) == 0 ) /*0x414e34*/
          {
            v9 = Random::Range(-170, 170); /*0x414e6a*/
            v10 = Random::Range(-170, 170); /*0x414e75*/
            v11 = (*(int (__thiscall **)(char *))(this->forceShielded)(this); /*0x414e77*/
            v12 = this->q029; /*0x414e82*/
            v13 = v9 + this->owningHouseIndex; /*0x414e89*/
            v29 = v10 + this->q027; /*0x414e92*/
            v30 = v13; /*0x414e96*/
            v31 = v12 - v11; /*0x414e9a*/
            v14 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x414e9e*/
            if ( v14 ) /*0x414ea8*/
              AnimClass::ctor(v14, *((void **)MEMORY[0x8871E0] + 37), (int)&v29, 0, 1, (void *)0x600, 0, 0); /*0x414ecb*/
          }
        }
        v35[0] = this->q027; /*0x414ede*/
        v35[1] = this->owningHouseIndex; /*0x414ee5*/
        v15 = this->q1B1; /*0x414ee9*/
        v35[2] = this->q029; /*0x414ef2*/
        if ( *(_DWORD *)(v15 + 3584) ) /*0x414ef6*/
        {
          if ( !((int)MEMORY[0xA8ED84] % *(_DWORD *)(v15 + 3588)) ) /*0x414f06*/
          {
            v16 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x414f15*/
            if ( v16 ) /*0x414f1f*/
              AnimClass::ctor( /*0x414f42*/
                v16,
                *(void **)(this->q1B1 + 3584),
                (int)v35,
                (void *)1,
                1,
                (void *)0x600,
                0,
                0);
          }
        }
        v17 = this->q1B1; /*0x414f47*/
        if ( (*(_BYTE *)(v17 + 3595)
           || *(_BYTE *)(v17 + 3596)
           || (v18 = (*(int (__thiscall **)(char *, int *))(this->airstrikeTintTimer)(this, &v28),
               (unsigned __int8)LayerClass::IsWithinUsableArea(v18, 1))
           || !(*(unsigned __int8 (__thiscall **)(char *))(this->queuedVoiceSoundController)(this))
          && ((v19 = (*(int (__thiscall **)(char *, int *))(this->airstrikeTintTimer)(this, &v28),
               (unsigned __int8)LayerClass::CoordinatesLegal(v19))
           || !(*(unsigned __int8 (__thiscall **)(char *))(this->queuedVoiceSoundController)(this)) )
        {
          if ( *((_UNKNOWN **)this + 361) == &g_CellClassArray ) /*0x414fec*/
          {
            (*(void (__thiscall **)(char *, _DWORD, int))(this->q120)(this, 0, 1); /*0x414ff6*/
            (*(void (__thiscall **)(char *, _DWORD))(this->unknown_short_3C8)(this, 0); /*0x415002*/
            (*(void (__thiscall **)(char *, _DWORD, int))(this->q121)(this, 0, 1); /*0x415010*/
          }
          if ( *((_UNKNOWN **)this + 173) == &g_CellClassArray ) /*0x41501c*/
          {
            (*(void (__thiscall **)(char *, _DWORD, int))(this->q120)(this, 0, 1); /*0x415026*/
            (*(void (__thiscall **)(char *, _DWORD))(this->unknown_short_3C8)(this, 0); /*0x415032*/
            (*(void (__thiscall **)(char *, _DWORD, int))(this->q121)(this, 0, 1); /*0x415040*/
          }
          if ( (*(unsigned __int8 (__thiscall **)(char *))(this->reloadTimer)(this) ) /*0x41504a*/
            (*(void (__thiscall **)(char *))(this->disguiseBlinkTimer)(this); /*0x415058*/
          if ( this->AircraftClass_field_bool_6C8 && this->q02B != 1 ) /*0x41506f*/
          {
            v20 = this->q0BF; /*0x415071*/
            this->AircraftClass_field_bool_6C8 = 0; /*0x415077*/
            this->q0BF = v20 - 1; /*0x41507f*/
          }
          if ( BuildingClass::GetHealthRatio(this) < *((double *)MEMORY[0x8871E0] + 737)
            && (*(int (__thiscall **)(char *))(this->forceShielded)(this) > 0 )
          {
            v21 = this->health != 0 ? 10 : 80;
            if ( Random::Range(0, 99) < v21 ) /*0x4150d4*/
            {
              v22 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4150e0*/
              if ( v22 ) /*0x4150e7*/
              {
                v32 = this->q027; /*0x4150eb*/
                v33 = this->owningHouseIndex; /*0x4150f7*/
                v34 = this->q029; /*0x4150fe*/
                v23 = AnimTypeClass::FindIndex(aSgrysmk1); /*0x415102*/
                AnimClass::ctor(v22, *((void **)MEMORY[0x8B4154] + v23), (int)&v32, 0, 1, (void *)0x600, 0, 0); /*0x415127*/
              }
            }
          }
          v4 = this->q118; /*0x41512c*/
          if ( v4 ) /*0x415134*/
          {
            LOBYTE(v4) = *(_BYTE *)(this->q1B1 + 3580); /*0x41513c*/
            if ( (_BYTE)v4 ) /*0x415144*/
            {
              qmemcpy((void *)(CCINIClass::GetDB(this + 276) + 904), this + 928, 0x18u); /*0x415168*/
              qmemcpy((void *)(CCINIClass::GetDB(this + 276) + 928), this + 928, 0x18u); /*0x415184*/
              v24 = this->owningHouseIndex; /*0x415188*/
              v32 = this->q027; /*0x41518b*/
              v25 = this->q029; /*0x41518f*/
              v33 = v24; /*0x415192*/
              v34 = v25; /*0x415198*/
              v26 = CCINIClass::GetDB(this + 276); /*0x41519c*/
              LOBYTE(v4) = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v26 + 436))(v26, &v32); /*0x4151aa*/
            }
          }
        }
        else
        {
          LOBYTE(v4) = (*(int (__thiscall **)(char *))(this->radioContact)(this); /*0x414f93*/
        }
      }
    }
  }
  return v4; /*0x414d24*/
}


// ==== 0x004151E0  AircraftClass::Mission_Harvest  this=AircraftClass  sig=csp ====
int __thiscall UnitClass::Mission_Harvest(int *this)
{
  int v2; // ecx
  int v3; // edi
  int v4; // ebp
  int v5; // ebx
  _DWORD *v6; // eax
  char *MissionControl; // eax
  int v8; // esi
  int v10; // eax
  int v11; // edi
  void *ClosestPlacementCell; // eax
  int DB; // eax
  int v14; // edi
  int v15; // eax
  int v16; // ebx
  __int16 *WaypointCoords; // eax
  void *v18; // eax
  void *NearbyCell; // eax
  int v20; // edi
  __int16 *Waypoint_Location; // eax
  void *v22; // eax
  void *v23; // eax
  int v24; // ecx
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

  switch ( this->missionStatus )
  {
    case 0:
      if ( !(*(int (__thiscall **)(int *))(*this + 456))(this)
        && *((float *)this + 186) == 0.0
        && ((v2 = this->q169) == 0
         || (v3 = this->q027,
             v4 = this->owningHouseIndex,
             v5 = this->q029,
             v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 72))(v2, v35),
             v3 == *v6)
         && v4 == v6[1]
         && v5 == v6[2]) )
      {
        this->missionStatus = 3; /*0x415250*/
      }
      else if ( this->q169
             || !*(_BYTE *)(this->q1B1 + 3221)
             || (*(int (__thiscall **)(int *))(*this + 456))(this) <= 0 )
      {
        if ( this->q169 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*this + 1360))(this, this->q169) )
          {
            DB = CCINIClass::GetDB(this + 69); /*0x415334*/
            v14 = DB; /*0x415339*/
            if ( DB /*0x415360*/
              && (v15 = *(_DWORD *)(DB + 1492)) != 0
              && *TechnoClass::GetWaypointCoords(*(_DWORD **)(v15 + 36), &v30) != MEMORY[0x87F7E8][10656] )
            {
              v16 = *this; /*0x415375*/
              WaypointCoords = (__int16 *)TechnoClass::GetWaypointCoords( /*0x415381*/
                                            *(_DWORD **)(*(_DWORD *)(v14 + 1492) + 36),
                                            &v31);
              v18 = CellCoord::To_CellObj(MEMORY[0x87F7E8], WaypointCoords); /*0x41538c*/
              NearbyCell = InfantryClass::FindNearbyCell(this, (int)v18); /*0x415394*/
              (*(void (__thiscall **)(int *, void *, int))(v16 + 1152))(this, NearbyCell, 1); /*0x41539c*/
            }
            else
            {
              v20 = *this; /*0x4153ad*/
              Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location( /*0x4153bb*/
                                               (char *)MEMORY[0x87F7E8][536210],
                                               &v32,
                                               700);
              v22 = CellCoord::To_CellObj(MEMORY[0x87F7E8], Waypoint_Location); /*0x4153c6*/
              v23 = InfantryClass::FindNearbyCell(this, (int)v22); /*0x4153ce*/
              (*(void (__thiscall **)(int *, void *, int))(v20 + 1152))(this, v23, 1); /*0x4153d6*/
              v24 = this->q175; /*0x4153dc*/
              if ( v24 ) /*0x4153e4*/
                TeamClass::SelectMember(v24, this->q169); /*0x4153f1*/
            }
          }
          else
          {
            v25 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q1B1 + 188))(this->q1B1); /*0x41540d*/
            this->missionStatus = v25 != (*(int (__thiscall **)(int *))(*this + 456))(this) ? 4 : 1;
          }
        }
        else
        {
          this->missionStatus = 2; /*0x41530c*/
        }
      }
      else
      {
        v10 = (*(int (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1320))(this, this->q1B1 + 1000, 0, 0); /*0x4152cd*/
        if ( v10 ) /*0x4152d5*/
        {
          (*(void (__thiscall **)(int *, int, int))(*this + 1152))(this, v10, 1); /*0x4152de*/
        }
        else
        {
          v11 = *this; /*0x4152e9*/
          ClosestPlacementCell = TechnoClass::FindClosestPlacementCell(this); /*0x4152ef*/
          (*(void (__thiscall **)(int *, void *, int))(v11 + 1152))(this, ClosestPlacementCell, 1); /*0x4152f7*/
        }
      }
      goto LABEL_9; /*0x415250*/
    case 1:
      if ( !this->locomotor ) /*0x41542a*/
        WinAPI::Wrapper(-2147467261); /*0x415439*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->locomotor + 16))(this->locomotor) ) /*0x415447*/
        this->missionStatus = 2; /*0x41544e*/
      if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*this + 1360))(this, this->q169) ) /*0x415463*/
        this->missionStatus = 0; /*0x415471*/
      goto LABEL_9; /*0x41547b*/
    case 2:
      if ( !this->locomotor ) /*0x415480*/
        WinAPI::Wrapper(-2147467261); /*0x41548f*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->locomotor + 16))(this->locomotor) ) /*0x41549d*/
        this->missionStatus = 3; /*0x4154a4*/
      return 1; /*0x4154ba*/
    case 3:
      if ( !this->isTether ) /*0x4154bb*/
      {
        if ( this->q118 ) /*0x4154c9*/
        {
          if ( *(_BYTE *)(this->q1B1 + 3580) ) /*0x4154dd*/
          {
            (*(void (__thiscall **)(int *, _DWORD))(*this + 292))(this, 0); /*0x4154ed*/
            FootClass::MissionMoveCarryallLand(this); /*0x4154f5*/
            (*(void (__thiscall **)(int *, int))(*this + 292))(this, 1); /*0x415500*/
          }
          else
          {
            v26 = LinkedList::Pop(this + 69); /*0x41551a*/
            v27 = (_WORD *)(*(int (__thiscall **)(int *, _BYTE *, int *))(*this + 440))(this, v33, this); /*0x415522*/
            MapClass::ApplyOverlayReveal(MEMORY[0x87F7E8], v27, v29); /*0x41552e*/
            if ( (*(int (__thiscall **)(int *, int))(*this + 256))(this, v26) ) /*0x41553e*/
              *(_BYTE *)(v26 + 1060) = 0; /*0x415548*/
            v28 = (_WORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 440))(this, v34); /*0x415559*/
            MapClass::FillRevealBuffer(MEMORY[0x87F7E8], v28, this); /*0x415565*/
            if ( !*(_BYTE *)(v26 + 1060) && *(_DWORD *)(v26 + 1492) ) /*0x415574*/
              TeamClass::AddMember(this->q175, v26, 0); /*0x415587*/
            if ( !this->q118 ) /*0x41558c*/
              (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x4155a2*/
          }
        }
        else
        {
          (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x4155b5*/
        }
      }
      goto LABEL_9; /*0x415506*/
    case 4:
      this->missionStatus = 0; /*0x4155c0*/
      return 1; /*0x4155cd*/
    default:
LABEL_9:
      MissionControl = MissionClass::GetMissionControl(this); /*0x41525a*/
      v8 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x41527f*/
      return v8 + Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 2);
  }
}


// ==== 0x004155F0  TechnoClass::ApplyIronCurtain  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass_ApplyIronCurtain(_DWORD *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // edi
  void *v12; // eax
  int v14; // [esp+34h] [ebp-14h] BYREF
  int v15; // [esp+38h] [ebp-10h] BYREF
  int v16; // [esp+3Ch] [ebp-Ch] BYREF
  int v17; // [esp+40h] [ebp-8h]
  int v18; // [esp+44h] [ebp-4h]

  v2 = ObjectClass::ComputeDistance(this->target); /*0x415604*/
  v3 = this->target; /*0x415606*/
  if ( v3 ) /*0x41560e*/
  {
    if ( this->q5A4 ) /*0x415630*/
    {
      if ( v2 <= *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1016))(this, 0) + 180) ) /*0x415660*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 1164))(this, 0, 0, 0, 0); /*0x415672*/
        v4 = *this; /*0x415678*/
        v5 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1016))(this, 0); /*0x41567e*/
        (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v4 + 1160))( /*0x415697*/
          this,
          0,
          0,
          0,
          0,
          *(_DWORD *)(*(_DWORD *)v5 + 164));
        v16 = this->location; /*0x4156a9*/
        v6 = this->lastSightRange + 3; /*0x4156b6*/
        v17 = this->locationY; /*0x4156b9*/
        v18 = this->locationZ; /*0x4156cd*/
        MapClass::RevealArea2(&v16, 0, v6, 0); /*0x4156d1*/
        v7 = this->location; /*0x4156d9*/
        v8 = this->locationZ; /*0x4156db*/
        v17 = this->locationY; /*0x4156de*/
        v16 = v7; /*0x4156e7*/
        v18 = v8; /*0x4156eb*/
        StartAudioControllerAt(*((_DWORD *)MEMORY[0x8871E0] + 160), (int)&v16, 0); /*0x4156fb*/
      }
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(*this + 1152))(this, v3, 1); /*0x415641*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, 0, 1); /*0x415617*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 4, 0); /*0x415625*/
  }
  if ( v2 > 768 ) /*0x415706*/
    return *((_DWORD *)MEMORY[0x8871E0] + 164); /*0x4157a0*/
  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 31, 0); /*0x415714*/
  v9 = this->owner; /*0x41571a*/
  this->q6D2 = 1; /*0x415720*/
  v10 = TechnoClass::MapHouseRelationIndex(v9); /*0x415727*/
  v14 = *CellClass::FindOpenNeighbor( /*0x415755*/
           (int *)&MEMORY[0x87F7E8],
           &v15,
           v10,
           (int)&MEMORY[0x889E68],
           (int)&MEMORY[0x889E68],
           4,
           1,
           0);
  if ( v14 != MEMORY[0x889E68] ) /*0x415759*/
  {
    v11 = *this; /*0x415769*/
    v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14); /*0x415777*/
    (*(void (__thiscall **)(_DWORD *, void *, int))(v11 + 1152))(this, v12, 1); /*0x41577f*/
  }
  return *((_DWORD *)MEMORY[0x8871E0] + 164); /*0x41578a*/
}


// ==== 0x004157C0  TechnoClass::ReturnToBase  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_4157C0(int *this)
{
  int v2; // edi
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edi
  void *v8; // eax
  int v10; // [esp+2Ch] [ebp-14h] BYREF
  int v11; // [esp+30h] [ebp-10h] BYREF
  int v12[3]; // [esp+34h] [ebp-Ch] BYREF

  v2 = ObjectClass::ComputeDistance(this, this->target); /*0x4157d9*/
  if ( v2 <= *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(*this + 1016))(this, 0) + 180) ) /*0x4157e9*/
  {
    (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 1164))(this, 0, 0, 0, 0); /*0x4157f7*/
    v3 = *this; /*0x4157fd*/
    v4 = (*(int (__thiscall **)(int *, _DWORD))(*this + 1016))(this, 0); /*0x415803*/
    (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v3 + 1160))( /*0x41581c*/
      this,
      0,
      0,
      0,
      0,
      *(_DWORD *)(*(_DWORD *)v4 + 164));
    v12[0] = this->q027; /*0x41582c*/
    v5 = this->isInLogic + 3; /*0x415839*/
    v12[1] = this->owningHouseIndex; /*0x41583c*/
    v12[2] = this->q029; /*0x415850*/
    MapClass::RevealArea2(&MEMORY[0x87F7E8], v12, 0, v5, 0); /*0x415854*/
  }
  if ( !this->q169 ) /*0x415859*/
  {
    v6 = TechnoClass::MapHouseRelationIndex((_DWORD *)this->owner); /*0x415869*/
    v10 = *CellClass::FindOpenNeighbor( /*0x415897*/
             (int *)&MEMORY[0x87F7E8],
             &v11,
             v6,
             (int)&MEMORY[0x889E68],
             (int)&MEMORY[0x889E68],
             4,
             1,
             0);
    if ( v10 != MEMORY[0x889E68] ) /*0x41589b*/
    {
      v7 = *this; /*0x4158ab*/
      v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v10); /*0x4158b9*/
      (*(void (__thiscall **)(int *, void *, int))(v7 + 1152))(this, v8, 1); /*0x4158c1*/
    }
  }
  return 3; /*0x4158c7*/
}


// ==== 0x004158E0  TechnoClass::ReturnToBaseAndReload  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ReturnToBaseAndReload(int *this)
{
  TechnoClass *v2; // eax

  v2 = (TechnoClass *)this->target; /*0x4158e3*/
  if ( v2 ) /*0x4158eb*/
  {
    if ( this->q169 ) /*0x41590e*/
    {
      if ( ObjectClass::ComputeDistance(this, v2) <= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1356) ) /*0x415940*/
      {
        (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 27, 0); /*0x41594a*/
        --this->q6D3; /*0x415950*/
      }
      return 3; /*0x415956*/
    }
    else
    {
      (*(void (__thiscall **)(int *, TechnoClass *, int))(*this + 1152))(this, v2, 1); /*0x41591f*/
      return 3; /*0x415925*/
    }
  }
  else
  {
    (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, 0, 1); /*0x4158f3*/
    (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 4, 0); /*0x415901*/
    return 3; /*0x415907*/
  }
}


// ==== 0x00415960  TechnoClass::ScatterFromThreat  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ScatterFromThreat(_DWORD *this)
{
  TechnoClass *v2; // eax
  char v3; // al
  _DWORD v5[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = (TechnoClass *)this->target; /*0x415966*/
  this->q6D2 = 1; /*0x41596c*/
  if ( !v2 || !this->q118 ) /*0x41597b*/
  {
    this->q6D2 = 0; /*0x415a0a*/
LABEL_9:
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, 0); /*0x415a11*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, 0, 1); /*0x415a25*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 4, 0); /*0x415a33*/
    return 5; /*0x415a33*/
  }
  if ( ObjectClass::ComputeDistance(this, v2) > *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1356) ) /*0x41599d*/
  {
    v3 = this->q6D3; /*0x41599f*/
    this->q6D2 = 0; /*0x4159a5*/
    if ( v3 > 0 ) /*0x4159ae*/
    {
      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 26, 0); /*0x4159b8*/
      return 5; /*0x4159c7*/
    }
    goto LABEL_9; /*0x4159ae*/
  }
  v5[0] = this->location; /*0x4159d4*/
  v5[1] = this->locationY; /*0x4159e0*/
  v5[2] = this->locationZ; /*0x4159e7*/
  if ( IsCoordVisibleMap(&MEMORY[0x87F7E8], (IUnknown *)v5) ) /*0x4159f0*/
  {
    ProcessTechnoMovementAction((char *)this); /*0x4159fb*/
    return 5; /*0x415a09*/
  }
  return 5; /*0x4159c3*/
}


// ==== 0x00415A50  AircraftClass::ProcessReturnToBase  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::_vt140(unsigned int **this)
{
  unsigned int *v2; // ecx
  unsigned int TransitionCount; // eax
  unsigned int *v4; // edi
  void *v5; // eax
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  if ( this->q169 ) /*0x415a56*/
  {
    if ( this->q169 == (unsigned int *)((int (__thiscall *)(unsigned int **))(*this)[111])(this) ) /*0x415aef*/
      ((void (__thiscall *)(unsigned int **, _DWORD, int))(*this)[288])(this, 0, 1); /*0x415af9*/
  }
  else
  {
    v2 = this->focus; /*0x415a60*/
    TransitionCount = v2[120]; /*0x415a66*/
    if ( TransitionCount >= 4 ) /*0x415a6e*/
      TransitionCount = HouseClass::GetTransitionCount(v2); /*0x415a75*/
    v7 = *CellClass::FindOpenNeighbor( /*0x415aa3*/
            (int *)&MEMORY[0x87F7E8],
            &v8,
            TransitionCount,
            (int)&MEMORY[0x889E68],
            (int)&MEMORY[0x889E68],
            4,
            1,
            0);
    if ( v7 != MEMORY[0x889E68] ) /*0x415aa7*/
    {
      v4 = *this; /*0x415ab8*/
      v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v7); /*0x415ac6*/
      ((void (__thiscall *)(unsigned int **, void *, int))v4[288])(this, v5, 1); /*0x415ace*/
      return 3; /*0x415ade*/
    }
  }
  return 3; /*0x415ada*/
}


// ==== 0x00415B10  AircraftClass::FindLandingCell  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::FindLandingCell(_DWORD *this, int *a2, int a3)
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
  unsigned int v18; // [esp+28h] [ebp-18h] BYREF
  int v19; // [esp+2Ch] [ebp-14h]
  char v20[4]; // [esp+30h] [ebp-10h] BYREF
  _DWORD v21[3]; // [esp+34h] [ebp-Ch] BYREF
  unsigned int v22; // [esp+44h] [ebp+4h]

  v18 = 0; /*0x415b1f*/
  v19 = 0; /*0x415b29*/
  v5 = dword_817A58; /*0x415b2d*/
  do /*0x415bab*/
  {
    v6 = *v5; /*0x415b34*/
    v7 = (_WORD *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 440))(this, v20); /*0x415b3e*/
    v8 = v6 & 7; /*0x415b44*/
    v9 = 4 * v8 + 9041544; /*0x415b55*/
    v10 = *v7 + LOWORD(MEMORY[0x89F688][v8]); /*0x415b5c*/
    v11 = *a2; /*0x415b5f*/
    LOWORD(v22) = v10; /*0x415b6b*/
    HIWORD(v22) = v7[1] + *(_WORD *)(v9 + 2); /*0x415b74*/
    v18 = v22; /*0x415b83*/
    v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v18); /*0x415b87*/
    if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v11 + 428))(a2, v12, -1, -1, 0, 1) ) /*0x415b8f*/
      break; /*0x415b97*/
    ++v5; /*0x415b9d*/
    ++v19; /*0x415ba7*/
  }
  while ( (int)v5 < (int)dword_817A78 ); /*0x415bab*/
  LOWORD(v22) = (unsigned __int16)dword_817A58[v19] << 13; /*0x415bc3*/
  v13 = this->q0A0; /*0x415bc8*/
  v21[0] = this->location; /*0x415bcb*/
  v14 = this->q0A4; /*0x415bd3*/
  v21[1] = v13; /*0x415bd6*/
  v21[2] = v14; /*0x415bda*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(*a2 + 216))( /*0x415bf3*/
          a2,
          v21,
          (unsigned __int8)(((v22 >> 7) + 1) >> 1)) )
    return 0; /*0x415c57*/
  (*(void (__thiscall **)(int *, int, _DWORD))(*a2 + 488))(a2, 2, 0); /*0x415c05*/
  v15 = *a2; /*0x415c0b*/
  v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v18); /*0x415c19*/
  (*(void (__thiscall **)(int *, void *, int))(v15 + 1152))(a2, v16, 1); /*0x415c21*/
  if ( (*(int (__thiscall **)(_DWORD *, int, int *))(*this + 632))(this, 2, a2) == 1 ) /*0x415c37*/
    (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 9); /*0x415c3f*/
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
  v11 = Coord::To_Cell(&MEMORY[0x87F7E8], &v23); /*0x415d81*/
  if ( (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, _DWORD, int))(*v2 + 428))(v2, v11, -1, -1, 0, 1) /*0x415de8*/
    || (v12 = ObjectPlacement::CalcPosition(v11, (int *)&v21, &v23, 0, 0, 0),
        v13 = *v12,
        v14 = v12[1],
        v15 = v12[2],
        v13 == MEMORY[0x889E88])
    && v14 == MEMORY[0x889E8C]
    && v15 == MEMORY[0x889E90]
    || (v24 = v14, v23 = v13, !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *))(*v2 + 232))(v2, &v23)) )
  {
    CellClass::AddObject((_DWORD *)this + 69, v2); /*0x415eb8*/
    (*(void (__thiscall **)(_DWORD *))(*v2 + 284))(v2); /*0x415ec1*/
    ++this->q0BF; /*0x415ec7*/
    return 0; /*0x415ecf*/
  }
  v21 = *(double *)(this + 156); /*0x415e00*/
  v22 = this->q029; /*0x415e13*/
  StartAudioControllerAt(MEMORY[0x8871E0]->?[2], (int)&v21, 0); /*0x415e21*/
  v16 = Coord::To_Cell(&MEMORY[0x87F7E8], &v23); /*0x415e30*/
  v17 = (_DWORD *)(*(int (__thiscall **)(void *, double *))(*(_DWORD *)v16 + 72))(v16, &v21); /*0x415e3e*/
  LOWORD(v20) = *v17 / 256; /*0x415e51*/
  WORD1(v20) = v17[1] / 256; /*0x415e65*/
  v2[343] = LODWORD(v20); /*0x415e6e*/
  if ( this->q175 ) /*0x415e74*/
    TeamClass::LiberateMember_Start(v2, -1, 0); /*0x415e83*/
  v18 = MEMORY[0xA8ED84]; /*0x415e88*/
  this->q6D3 = 5; /*0x415e93*/
  this->diskLaserTimer = v18; /*0x415e9c*/
  this->missionStatus = v24; /*0x415ea4*/
  this->q2F4 = 0; /*0x415eaa*/
  return 0; /*0x415ea2*/
}


// ==== 0x00415EE0  BulletClass::FlightUpdate  this=TechnoClass  sig=csp ====
double *__thiscall BulletClass::FlightUpdate(#377 *this, int a2, int a3)
{
  int v5; // ebx
  int v6; // eax
  double *v7; // esi
  double *v8; // esi
  double v9; // st7
  double v10; // st7
  unsigned int v11; // ebx
  double v12; // st7
  double v13; // st7
  _DWORD *Value; // ebx
  int v15; // edx
  double v16; // st7
  double v17; // st7
  _DWORD *v18; // esi
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  int v21; // edx
  int v22; // eax
  double v23; // st7
  __int16 v24; // bx
  double *v25; // esi
  unsigned int v26; // ebx
  double v27; // st7
  double v28; // st7
  __int16 v29; // bx
  double v30; // st7
  double v31; // st7
  unsigned int v32; // ebx
  double v33; // st7
  double v34; // st7
  double v35; // st7
  double v36; // st7
  _DWORD *v37; // esi
  _DWORD *v38; // eax
  _DWORD *v39; // eax
  _DWORD *v40; // eax
  _DWORD *v41; // eax
  _DWORD *v42; // eax
  #375 *v43; // edx
  int v44; // eax
  int v45; // edx
  #375 *v46; // eax
  double v47; // [esp+4h] [ebp-90h]
  double v48; // [esp+Ch] [ebp-88h]
  double v49; // [esp+Ch] [ebp-88h]
  double v50; // [esp+Ch] [ebp-88h]
  double *v51; // [esp+2Ch] [ebp-68h]
  int v52; // [esp+30h] [ebp-64h] BYREF
  _BYTE v53[12]; // [esp+34h] [ebp-60h] BYREF
  double v54; // [esp+44h] [ebp-50h] BYREF
  int v55; // [esp+4Ch] [ebp-48h]
  double v56; // [esp+58h] [ebp-3Ch] BYREF
  _DWORD v57[3]; // [esp+60h] [ebp-34h] BYREF
  double v58; // [esp+6Ch] [ebp-28h]
  double v59[2]; // [esp+7Ch] [ebp-18h] BYREF
  double v60; // [esp+8Ch] [ebp-8h]

  if ( this->q118 ) /*0x415eee*/
  {
    ((void (*)(void))ProcessTechnoMovementAction)(); /*0x415ef8*/
    return 0; /*0x415efd*/
  }
  else
  {
    v5 = a2; /*0x415f0b*/
    v6 = TechnoClass::FireWeapon(this); /*0x415f12*/
    v7 = (double *)v6; /*0x415f17*/
    v51 = (double *)v6; /*0x415f1b*/
    if ( v6 ) /*0x415f1f*/
    {
      if ( !*(_DWORD *)(*(_DWORD *)(v6 + 172) + 732) ) /*0x415f2b*/
      {
        if ( !this->q674 ) /*0x415f39*/
          WinAPI::Wrapper(-2147467261); /*0x415f48*/
        v52 = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 132))(this->q674); /*0x415f5c*/
        v8 = v7 + 29; /*0x415f60*/
        v54 = (double)v52; /*0x415f6c*/
        BulletClass::NormalizeZeroVector(v8); /*0x415f70*/
        Vector3::Magnitude(v8); /*0x415f77*/
        v9 = v54 / v54; /*0x415f7c*/
        *v8 = v54 / v54 * *v8; /*0x415f8b*/
        v8[1] = v9 * v8[1]; /*0x415f92*/
        v8[2] = v9 * v8[2]; /*0x415f98*/
        v52 = (__int16)*Vector::ToFacingMath(v8, &v52) - 0x3FFF; /*0x415fa9*/
        v10 = (double)v52 * -0.00009587672516830327; /*0x415fb3*/
        *(double *)v53 = v10; /*0x415fb9*/
        Vector3::Magnitude(v8); /*0x415fbd*/
        v54 = v10; /*0x415fc2*/
        if ( *(double *)v53 != 0.0 ) /*0x415fd5*/
        {
          v11 = *(_DWORD *)&v53[4]; /*0x415fd7*/
          v12 = Math::ArcTan2(*(double *)v53); /*0x415fe1*/
          v48 = COERCE_DOUBLE(__PAIR64__(v11, *(unsigned int *)v53)); /*0x415fed*/
          *v8 = *v8 / v12; /*0x415fee*/
          v8[1] = v8[1] / Math::ArcTan2(v48); /*0x415ffb*/
        }
        *v8 = Math::ArcTan2(-0.00009587672516830327) * *v8; /*0x416019*/
        v8[1] = Math::ArcTan2(-0.00009587672516830327) * v8[1]; /*0x41602d*/
        v13 = Math::SinCos(-0.00009587672516830327) * v54; /*0x416035*/
        v8[2] = v13; /*0x416047*/
        Value = ProgressTimer::GetValue((_WORD *)this + 464, v53); /*0x416051*/
        Vector2::NormalizeNonZero(v8); /*0x416053*/
        Function::41C430(v8); /*0x41605a*/
        v15 = *(__int16 *)Value; /*0x41605f*/
        v54 = v13; /*0x416062*/
        v52 = v15 - 0x3FFF; /*0x41606f*/
        v16 = Math::ArcTan2((double)(v15 - 0x3FFF) * -0.00009587672516830327); /*0x416080*/
        *v8 = v16 * v54; /*0x416089*/
        v52 = *(__int16 *)Value - 0x3FFF; /*0x416093*/
        v17 = Math::SinCos((double)v52 * -0.00009587672516830327); /*0x4160a4*/
        v5 = a2; /*0x4160ad*/
        v8[1] = -(v17 * v54); /*0x4160b5*/
        v7 = v51; /*0x4160b8*/
      }
      if ( *(_DWORD *)(*((_DWORD *)v7 + 43) + 732) == 1 ) /*0x4160c9*/
      {
        v18 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v53); /*0x4160dd*/
        v19 = (_DWORD *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v5 + 72))(v5, &v56); /*0x4160e6*/
        v20 = Coord::Subtract(&v57[1], *v19 - *v18, v19[1] - v18[1], v19[2] - v18[2]); /*0x416106*/
        LODWORD(v54) = *v20; /*0x41610d*/
        v21 = v20[1]; /*0x416111*/
        v22 = v20[2]; /*0x416118*/
        HIDWORD(v54) = v21; /*0x41611b*/
        v55 = v22; /*0x41611f*/
        *(double *)&v57[1] = (double)SLODWORD(v54); /*0x416123*/
        v59[1] = (double)v21; /*0x416148*/
        v58 = (double)v21; /*0x416135*/
        v60 = (double)v22; /*0x41614c*/
        v59[0] = *(double *)&v57[1]; /*0x41615c*/
        v23 = (Math::CalcAngle(-(double)v21, *(double *)&v57[1]) - 1.570796326794897) * -10430.06004058427; /*0x416176*/
        v24 = Math::RoundToInt(v23); /*0x416181*/
        v25 = v51 + 29; /*0x416188*/
        Vector2::NormalizeNonZero(v51 + 29); /*0x416190*/
        Function::41C430(v51 + 29); /*0x416197*/
        v54 = v23; /*0x41619c*/
        v52 = v24 - 0x3FFF; /*0x4161a9*/
        *(double *)v53 = (double)v52 * -0.00009587672516830327; /*0x4161b7*/
        v26 = *(_DWORD *)&v53[4]; /*0x4161bb*/
        v51[29] = Math::ArcTan2(*(double *)v53) * v23; /*0x4161cf*/
        v27 = -(Math::SinCos(COERCE_DOUBLE(__PAIR64__(v26, *(unsigned int *)v53))) * v54); /*0x4161e6*/
        v51[30] = v27; /*0x4161e8*/
        Math::Hypotenuse2D(v59); /*0x4161eb*/
        v28 = Math::CalcAngle(v60, v27); /*0x416200*/
        v29 = Math::RoundToInt((v28 - 1.570796326794897) * -10430.06004058427); /*0x416219*/
        v52 = (__int16)*Vector::ToFacingMath(v51 + 29, v53) - 0x3FFF; /*0x416231*/
        v30 = (double)v52 * -0.00009587672516830327; /*0x41623b*/
        *(double *)v53 = v30; /*0x416241*/
        Vector3::Magnitude(v51 + 29); /*0x416245*/
        v54 = v30; /*0x41624a*/
        if ( *(double *)v53 != 0.0 ) /*0x41625d*/
        {
          v31 = Math::ArcTan2(*(double *)v53); /*0x416269*/
          v49 = *(double *)v53; /*0x416279*/
          *v25 = *v25 / v31; /*0x41627a*/
          v51[30] = v51[30] / Math::ArcTan2(v49); /*0x416287*/
        }
        v52 = v29 - 0x3FFF; /*0x416292*/
        *(double *)v53 = (double)v52 * -0.00009587672516830327; /*0x4162a0*/
        v32 = *(_DWORD *)&v53[4]; /*0x4162a8*/
        v33 = Math::ArcTan2(*(double *)v53); /*0x4162ae*/
        v50 = COERCE_DOUBLE(__PAIR64__(v32, *(unsigned int *)v53)); /*0x4162ba*/
        *v25 = v33 * *v25; /*0x4162bb*/
        v34 = Math::ArcTan2(v50); /*0x4162bd*/
        v47 = COERCE_DOUBLE(__PAIR64__(v32, *(unsigned int *)v53)); /*0x4162ca*/
        v51[30] = v34 * v51[30]; /*0x4162cb*/
        v51[31] = Math::SinCos(v47) * v54; /*0x4162de*/
        v35 = (double)*(int *)(*(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(this->q3F8)(this, 0) + 168); /*0x4162ed*/
        v54 = v35; /*0x4162f3*/
        BulletClass::NormalizeZeroVector(v25); /*0x4162f7*/
        Vector3::Magnitude(v25); /*0x4162fe*/
        v36 = v54 / v35; /*0x416303*/
        *v25 = v36 * *v25; /*0x41630b*/
        v51[30] = v36 * v51[30]; /*0x416312*/
        v51[31] = v36 * v51[31]; /*0x416318*/
        v7 = v51; /*0x41631b*/
      }
      if ( (unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) ) /*0x416325*/
      {
        v37 = (_DWORD *)((char *)this + 156); /*0x416332*/
        v54 = *(double *)((char *)this + 156); /*0x41633c*/
        v55 = this->q029; /*0x41634f*/
        if ( Cell::IsPassable(&v54) ) /*0x416358*/
          goto LABEL_21; /*0x416358*/
        Coord::Subtract(&v54, 512, 512, 0); /*0x416375*/
        v38 = Coord::Subtract( /*0x41639d*/
                &v57[1],
                *v37 + LODWORD(v54),
                this->owningHouseIndex + HIDWORD(v54),
                this->q029 + v55);
        *(_DWORD *)v53 = *v38; /*0x4163a4*/
        *(_QWORD *)&v53[4] = *(_QWORD *)(v38 + 1); /*0x4163ab*/
        if ( Cell::IsPassable(v53) ) /*0x4163c0*/
          goto LABEL_21; /*0x4163c0*/
        Coord::Subtract(&v54, -512, -512, 0); /*0x4163dd*/
        v39 = Coord::Subtract( /*0x416405*/
                &v57[1],
                *v37 + LODWORD(v54),
                this->owningHouseIndex + HIDWORD(v54),
                this->q029 + v55);
        *(_DWORD *)v53 = *v39; /*0x41640c*/
        *(_QWORD *)&v53[4] = *(_QWORD *)(v39 + 1); /*0x416413*/
        if ( Cell::IsPassable(v53) ) /*0x416428*/
          goto LABEL_21; /*0x416428*/
        Coord::Subtract(&v54, 512, -512, 0); /*0x416445*/
        v40 = Coord::Subtract( /*0x41646d*/
                &v57[1],
                *v37 + LODWORD(v54),
                this->owningHouseIndex + HIDWORD(v54),
                this->q029 + v55);
        *(_DWORD *)v53 = *v40; /*0x416474*/
        *(_QWORD *)&v53[4] = *(_QWORD *)(v40 + 1); /*0x41647b*/
        if ( Cell::IsPassable(v53) /*0x416514*/
          || (Coord::Subtract(&v54, 512, -512, 0),
              v41 = Coord::Subtract(
                      &v57[1],
                      *v37 + LODWORD(v54),
                      this->owningHouseIndex + HIDWORD(v54),
                      this->q029 + v55),
              *(_DWORD *)v53 = *v41,
              *(_QWORD *)&v53[4] = *(_QWORD *)(v41 + 1),
              Cell::IsPassable(v53))
          || (v42 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 72))(a2, &v57[1]),
              Cell::IsPassable(v42)) )
        {
LABEL_21:
          LODWORD(v54) = *v37; /*0x416529*/
          v43 = (#375 *)this->owner; /*0x41652d*/
          HIDWORD(v54) = this->owningHouseIndex; /*0x416538*/
          v55 = this->q029; /*0x416545*/
          ((void (__stdcall *)(double *, _DWORD, #375 *, _DWORD, _DWORD, char, char, _DWORD))MapClass::RevealArea1)( /*0x416557*/
            &v54,
            *(_DWORD *)(MEMORY[0x87F7E8][7806] + 24),
            v43,
            0,
            0,
            0,
            1,
            0);
          v44 = *v37; /*0x41655f*/
          v45 = this->q029; /*0x416561*/
          HIDWORD(v54) = this->owningHouseIndex; /*0x416566*/
          LODWORD(v54) = v44; /*0x416572*/
          v46 = (#375 *)this->owner; /*0x416576*/
          v55 = v45; /*0x416580*/
          ((void (__stdcall *)(double *, _DWORD, #375 *, _DWORD, _DWORD, char, char, int))MapClass::RevealArea1)( /*0x416595*/
            &v54,
            *(_DWORD *)(MEMORY[0x87F7E8][7806] + 24),
            v46,
            0,
            0,
            0,
            1,
            1);
        }
        v7 = v51; /*0x41659a*/
      }
    }
    if ( *((_BYTE *)this + 1738) ) /*0x41659e*/
      (*(void (__thiscall **)(#377 *))(this->q0F8)(this); /*0x4165ac*/
    return v7; /*0x4165b2*/
  }
}


// ==== 0x004165C0  AircraftClass::DeployWithAnim  this=AircraftClass  sig=csp ====
int __userpurge AircraftClass::DeployWithAnim@<eax>(
        _DWORD *a1@<ecx>,
        int a2@<ebx>,
        IUnknown *aP0,
        FootClass *aP1,
        FootClass *aP2,
        FootClass *aP3,
        FootClass *aP4,
        FootClass *aP5,
        FootClass *aP6)
{
  int v11; // ebp
  AircraftTypeClass *v13; // ebx
  CoordStruct *v14; // edi
  CoordStruct *v15; // eax
  AircraftClass *v16; // [esp+0h] [ebp-14h]
  _BYTE v17[8]; // [esp+Ch] [ebp-8h] BYREF

  v11 = FootClass::ProcessDeploy(aP0, aP1, aP2, aP3, aP4, aP5, aP6, v16); /*0x4165f1*/
  if ( v11 == 4 ) /*0x4165f6*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*a1 + 952))(a1, 0, a2); /*0x416613*/
    if ( *(int *)(a1[433] + 1852) > 0 ) /*0x416627*/
    {
      v13 = (AircraftTypeClass *)__2_YAPAXI_Z(0x1C8u); /*0x416633*/
      if ( v13 ) /*0x41663a*/
      {
        v14 = *(CoordStruct **)(*(_DWORD *)(a1[433] + 1840) /*0x416671*/
                              + 4
                              * ((unsigned int)Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060]
                                                                      + 536))
                               % *(_DWORD *)(a1[433] + 1852)));
        v15 = (CoordStruct *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 164))(a1, v17); /*0x41667b*/
        AnimClass::ctor((void **)v13, v14, v15, 0, (CoordStruct *)1, (void *)0x600, 0, 0); /*0x416685*/
      }
    }
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, FootClass *))(*a1 + 988))(a1, aP4) ) /*0x416694*/
      (*(void (__thiscall **)(_DWORD *))(*a1 + 248))(a1); /*0x4166a3*/
  }
  else if ( v11 == 5 ) /*0x4165f9*/
  {
    return 5; /*0x416609*/
  }
  return v11; /*0x4165ff*/
}


// ==== 0x004166C0  AircraftClass::Mission_Enter  this=AircraftClass  sig=csp ====
int __usercall AircraftClass::_vt139@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, int a5@<esi>)
{
  int result; // eax
  int v7; // eax
  char *MissionControl; // eax
  int v9; // esi
  int v10; // edi
  void *NearbyCell; // eax
  int v12; // ecx
  _DWORD *v13; // eax
  int v14; // ecx
  int *v15; // eax
  int v16; // edx
  int v17; // edi
  int *v18; // eax
  int Element; // eax
  int *v20; // eax
  int v21; // ecx
  _DWORD *v22; // eax
  int v23; // edi
  int v24; // ebx
  _WORD *v25; // eax
  int v26; // ecx
  _DWORD *v27; // eax
  int v28; // ecx
  _DWORD *v29; // eax
  int v30; // edi
  int v31; // ebx
  _WORD *v32; // eax
  int v33; // ecx
  _DWORD *v34; // eax
  int v35; // [esp+0h] [ebp-60h]
  int v36; // [esp+4h] [ebp-5Ch]
  int v39; // [esp+1Ch] [ebp-44h]
  int v40; // [esp+1Ch] [ebp-44h]
  int v41; // [esp+20h] [ebp-40h] BYREF
  int v42; // [esp+24h] [ebp-3Ch] BYREF
  _BYTE v43[4]; // [esp+28h] [ebp-38h] BYREF
  int v44; // [esp+2Ch] [ebp-34h] BYREF
  int v45[2]; // [esp+30h] [ebp-30h] BYREF
  int v46; // [esp+38h] [ebp-28h]
  _BYTE v47[12]; // [esp+3Ch] [ebp-24h] BYREF
  _BYTE v48[12]; // [esp+48h] [ebp-18h] BYREF
  _DWORD v49[3]; // [esp+54h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3580) ) /*0x4166c6*/
    return Carryall::MissionStateMachine(a1); /*0x4166d0*/
  switch ( *(_DWORD *)(a1 + 188) ) /*0x4166f4*/
  {
    case 0: /*0x4166f4*/
      v7 = *(_DWORD *)(a1 + 1444); /*0x4166fb*/
      if ( v7 ) /*0x416703*/
      {
        v10 = *(_DWORD *)a1; /*0x416748*/
        NearbyCell = InfantryClass::FindNearbyCell((_DWORD *)a1, v7); /*0x41674f*/
        (*(void (__thiscall **)(int, void *, int))(v10 + 1152))(a1, NearbyCell, 1); /*0x416757*/
        *(_DWORD *)(a1 + 188) = 1; /*0x41675d*/
      }
      else
      {
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1156))(a1, 0, 1); /*0x41670d*/
      }
      goto LABEL_6; /*0x41670d*/
    case 1: /*0x4166f4*/
      v12 = *(_DWORD *)(a1 + 1444); /*0x416769*/
      if ( !v12 ) /*0x416771*/
        goto LABEL_29; /*0x416771*/
      v13 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, int, int, int, int, int))(*(_DWORD *)v12 + 76))( /*0x41677f*/
                        v12,
                        v47,
                        a1,
                        a4,
                        a5,
                        a3,
                        a2);
      if ( !*(_DWORD *)(a1 + 1652) ) /*0x41678a*/
        WinAPI::Wrapper(-2147467261); /*0x416799*/
      (*(void (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 1652) + 68))(*(_DWORD *)(a1 + 1652), *v13); /*0x4167b4*/
      *(_DWORD *)(a1 + 188) = 2; /*0x4167b7*/
      return 1; /*0x4167cd*/
    case 2: /*0x4166f4*/
      if ( *(_DWORD *)(a1 + 1312) != -1 ) /*0x4167d5*/
      {
        v14 = *(_DWORD *)(a1 + 1444); /*0x4167db*/
        if ( !v14 ) /*0x4167e3*/
          goto LABEL_15; /*0x4167e3*/
        v15 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v14 + 72))(v14, v48); /*0x4167ec*/
        v16 = *v15; /*0x4167ef*/
        v17 = v15[1]; /*0x4167fb*/
        v46 = v15[2]; /*0x416801*/
        a2 = *(_DWORD *)(a1 + 164); /*0x41680e*/
        v36 = *(_DWORD *)(a1 + 160) - v17; /*0x416811*/
        v35 = *(_DWORD *)(a1 + 156) - v16; /*0x416812*/
        v46 = a2; /*0x416817*/
        v18 = Coord::Subtract(v49, v35, v36, 0); /*0x41681b*/
        v45[0] = *v18; /*0x416822*/
        v45[1] = v18[1]; /*0x416829*/
        v46 = v18[2]; /*0x416834*/
        if ( (int)Coord::Length(v45) < 256 ) /*0x416847*/
        {
LABEL_15:
          Element = Array::GetElement( /*0x416864*/
                      *((_DWORD **)MEMORY[0xA83D4C] + *(_DWORD *)(a1 + 1312) + 132),
                      *(char *)(a1 + 1670));
          v20 = (int *)VectorClass::GetAtChecked(*((int **)MEMORY[0xA83D4C] + *(_DWORD *)(a1 + 1312) + 132), Element); /*0x41687d*/
          BuildingClass::ValidateFoundation_0(a1, a2, a3, v20, a4, a5); /*0x416885*/
        }
      }
      if ( !*(_DWORD *)(a1 + 1652) ) /*0x41688a*/
        WinAPI::Wrapper(-2147467261); /*0x416899*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 16))(*(_DWORD *)(a1 + 1652)) ) /*0x4168a7*/
        goto LABEL_40; /*0x4168a7*/
      v21 = *(_DWORD *)(a1 + 1444); /*0x4168b2*/
      if ( v21 ) /*0x4168ba*/
      {
        v22 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v21 + 76))(v21, v49, a1); /*0x4168c4*/
        v23 = *v22 / 256; /*0x4168ed*/
        v24 = v22[1] / 256; /*0x4168f0*/
        v25 = (_WORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 440))(a1, v43); /*0x4168f3*/
        if ( (_WORD)v23 == *v25 && (_WORD)v24 == v25[1] ) /*0x416902*/
          goto LABEL_40; /*0x416902*/
      }
      v26 = *(_DWORD *)(a1 + 1444); /*0x416908*/
      if ( v26 ) /*0x416910*/
      {
        v27 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v26 + 76))(v26, v49, a1); /*0x41691a*/
        LOWORD(v39) = *v27 / 256; /*0x41692f*/
        HIWORD(v39) = v27[1] / 256; /*0x416947*/
        v41 = v39; /*0x416950*/
        if ( !Cell::IsOccupied((void **)a1, (__int16 *)&v41, 1) ) /*0x416957*/
          goto LABEL_24; /*0x41695e*/
      }
      *(_DWORD *)(a1 + 188) = 4; /*0x416977*/
      return 1; /*0x41698d*/
    case 3: /*0x4166f4*/
      if ( !*(_DWORD *)(a1 + 1652) ) /*0x41698e*/
        WinAPI::Wrapper(-2147467261); /*0x41699d*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 16))(*(_DWORD *)(a1 + 1652)) ) /*0x4169ab*/
LABEL_29:
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1156))(a1, 0, 1); /*0x4169b2*/
      return 1; /*0x4169cc*/
    case 4: /*0x4166f4*/
      if ( !*(_DWORD *)(a1 + 1652) ) /*0x4169cd*/
        WinAPI::Wrapper(-2147467261); /*0x4169dc*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 16))(*(_DWORD *)(a1 + 1652)) /*0x416a45*/
        || (v28 = *(_DWORD *)(a1 + 1444)) != 0
        && (v29 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v28 + 76))(v28, v49, a1),
            v30 = *v29 / 256,
            v31 = v29[1] / 256,
            v32 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 440))(a1, &v44),
            (_WORD)v30 == *v32)
        && (_WORD)v31 == v32[1] )
      {
LABEL_40:
        *(_DWORD *)(a1 + 188) = 3; /*0x416ab6*/
      }
      else
      {
        v33 = *(_DWORD *)(a1 + 1444); /*0x416a47*/
        if ( v33 ) /*0x416a4f*/
        {
          v34 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v33 + 76))(v33, v49, a1); /*0x416a59*/
          LOWORD(v40) = *v34 / 256; /*0x416a6e*/
          HIWORD(v40) = v34[1] / 256; /*0x416a86*/
          v42 = v40; /*0x416a8f*/
          if ( !Cell::IsOccupied((void **)a1, (__int16 *)&v42, 1) ) /*0x416a96*/
          {
LABEL_24:
            *(_DWORD *)(a1 + 188) = 0; /*0x416960*/
            return 1; /*0x416976*/
          }
        }
      }
      result = 1; /*0x416ac3*/
      break; /*0x416ac3*/
    default:
LABEL_6:
      MissionControl = MissionClass::GetMissionControl((_DWORD *)a1); /*0x416713*/
      v9 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x416728*/
      return v9 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x416747*/
  }
  return result; /*0x416747*/
}


// ==== 0x00416AF0  FootClass::MissionMoveCarryallLand  this=TechnoClass  sig=csp ====
void __thiscall FootClass::MissionMoveCarryallLand(int *this)
{
  BuildingTypeClass *v2; // esi
  int v3; // eax
  int v4; // eax
  LPVOID v5; // ebx
  LPVOID v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  BuildingTypeClass *v11; // esi
  void *v12; // eax
  LPVOID ppv; // [esp+4Ch] [ebp-20h] BYREF
  _DWORD *v14; // [esp+50h] [ebp-1Ch] BYREF
  _DWORD v15[2]; // [esp+54h] [ebp-18h] BYREF
  int GroundHeight; // [esp+5Ch] [ebp-10h]
  _DWORD v17[3]; // [esp+60h] [ebp-Ch] BYREF

  Debug::Log(); /*0x416afd*/
  v14 = this + 69; /*0x416b0b*/
  v2 = (BuildingTypeClass *)LinkedList::Pop(this + 69); /*0x416b1a*/
  v15[0] = this->q027; /*0x416b20*/
  v15[1] = this->owningHouseIndex; /*0x416b31*/
  GroundHeight = this->q029; /*0x416b38*/
  GroundHeight = Cell::GetGroundHeight((IUnknown *)v15); /*0x416b4b*/
  if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v15) + 80) & 0x100) != 0 ) /*0x416b5d*/
  {
    GroundHeight += *(_DWORD *)&stru_87C374.__pad_579C[33708]; /*0x416b6a*/
    v2->Name[40] = 1; /*0x416b6e*/
  }
  else
  {
    v2->Name[40] = 0; /*0x416b77*/
  }
  if ( !*(_DWORD *)&v2->DebrisTypes[864] ) /*0x416b7e*/
    WinAPI::Wrapper(-2147467261); /*0x416b90*/
  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)&v2->DebrisTypes[864] + 8))(*(_DWORD *)&v2->DebrisTypes[864]); /*0x416b9e*/
  *(_DWORD *)&v2->DebrisTypes[864] = 0; /*0x416ba1*/
  v3 = (*(int (__thiscall **)(BuildingTypeClass *))(*(_DWORD *)v2->vtable0 + 132))(v2); /*0x416bab*/
  ppv = 0; /*0x416bbe*/
  v4 = CreateInstanceCOM(&ppv, (IID *)(v3 + 844), 0, 7u); /*0x416bc2*/
  if ( v4 < 0 && v4 != -2147467262 ) /*0x416bd0*/
    WinAPI::Wrapper(v4); /*0x416bd3*/
  v5 = *(LPVOID *)&v2->DebrisTypes[864]; /*0x416bd8*/
  v6 = ppv; /*0x416bde*/
  if ( v5 != ppv ) /*0x416be4*/
  {
    *(_DWORD *)&v2->DebrisTypes[864] = ppv; /*0x416be8*/
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
  if ( !*(_DWORD *)&v2->DebrisTypes[864] ) /*0x416c13*/
    WinAPI::Wrapper(-2147467261); /*0x416c22*/
  (*(void (__stdcall **)(_DWORD, BuildingTypeClass *))(**(_DWORD **)&v2->DebrisTypes[864] + 12))( /*0x416c31*/
    *(_DWORD *)&v2->DebrisTypes[864],
    v2);
  if ( (*(unsigned __int8 (__thiscall **)(BuildingTypeClass *, _DWORD *, _DWORD))(*(_DWORD *)v2->vtable0 + 216))( /*0x416c3f*/
         v2,
         v15,
         0) )
  {
    v7 = *(_DWORD *)v2->vtable0; /*0x416c5a*/
    v2->DebrisTypes[272] = 0; /*0x416c66*/
    (*(void (__thiscall **)(BuildingTypeClass *, _DWORD, _DWORD, _DWORD, _DWORD))(v7 + 1164))(v2, 0, 0, 0, 0); /*0x416c6d*/
    (*(void (__thiscall **)(BuildingTypeClass *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v2->vtable0 + 1160))( /*0x416c81*/
      v2,
      0,
      0,
      0,
      0,
      0);
    v8 = this->q027; /*0x416c8a*/
    v9 = this->owningHouseIndex; /*0x416c8d*/
    v17[2] = this->q029; /*0x416c90*/
    v10 = v2->VoxelCaches[7]; /*0x416c94*/
    v17[0] = v8; /*0x416c9a*/
    v17[1] = v9; /*0x416c9e*/
    MapClass::RevealArea2( /*0x416cb6*/
      &stru_87C374.__pad_14B0[8132],
      (IUnknown *)v17,
      (MouseClass *)(v10 - 3),
      (MouseClass *)(v10 + 3),
      0);
    ppv = (LPVOID)*MapClass::FindPlacementCellsAlt((char *)this, (IUnknown *)&v14, 0); /*0x416ccd*/
    if ( (BuildingTypeClass *)Team::GetMember(this, 0) == v2 ) /*0x416cda*/
    {
      (*(void (__thiscall **)(int *, int))(*this + 628))(this, 25); /*0x416ce2*/
      (*(void (__thiscall **)(int *, int))(*this + 628))(this, 3); /*0x416cee*/
    }
    if ( ppv == *(LPVOID *)&stru_87C374.__pad_579C[33624] ) /*0x416d00*/
    {
      (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, 0, 1); /*0x416d3b*/
    }
    else
    {
      v11 = (BuildingTypeClass *)*this; /*0x416d10*/
      v12 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&ppv); /*0x416d1e*/
      (*(void (__thiscall **)(int *, void *, int))&v11->DebrisTypes[364])(this, v12, 1); /*0x416d26*/
    }
  }
  else
  {
    CellClass::AddObject(v14, (IUnknown *)v2); /*0x416c4e*/
  }
}


// ==== 0x00416D50  Carryall::MissionStateMachine  this=Carryall  sig=csp ====
int __thiscall Carryall::MissionStateMachine(FootClass **this)
{
  FootClass *v2; // ecx
  char *MissionControl; // eax
  int v4; // esi
  TechnoClass *v6; // edi
  _DWORD *v7; // eax
  FootClass *v8; // edi
  void *NearbyCell; // eax
  int v10; // ecx
  FootClass *v11; // ecx
  _DWORD *v12; // eax
  FootClass *v13; // ecx
  FootClass *v14; // ecx
  FootClass *v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // ecx
  int v19; // eax
  int v20; // ebx
  int v21; // ecx
  int v22; // edx
  _DWORD *v23; // eax
  IUnknown *Building; // edi
  FootClass *v25; // eax
  char v26; // [esp-4h] [ebp-48h]
  _DWORD v27[3]; // [esp+14h] [ebp-30h] BYREF
  _DWORD v28[3]; // [esp+20h] [ebp-24h] BYREF
  _BYTE v29[20]; // [esp+2Ch] [ebp-18h] BYREF
  int v30; // [esp+40h] [ebp-4h]

  switch ( (unsigned int)this->q0BC ) /*0x416d64*/
  {
    case 0u: /*0x416d64*/
      Debug::Log(); /*0x416d70*/
      v2 = this->q5A4; /*0x416d75*/
      if ( !v2 ) /*0x416d80*/
      {
        Debug::Log(); /*0x416d87*/
LABEL_4:
        ((void (__thiscall *)(FootClass **, _DWORD, int))(*this)->audioController4[2])(this, 0, 1); /*0x416d8f*/
        goto LABEL_5; /*0x416d97*/
      }
      v6 = (TechnoClass *)AbstractClass::IsTechnoType(v2); /*0x416dd8*/
      if ( !v6 ) /*0x416ddc*/
        goto LABEL_18; /*0x416ddc*/
      if ( this->q046 ) /*0x416de2*/
        goto LABEL_18; /*0x416de2*/
      if ( !Object::IsAlliedWithObjectHouse(this->q087, (IUnknown *)v6) ) /*0x416df7*/
        goto LABEL_18; /*0x416df7*/
      if ( (v6->abstractFlags & 1) != 0 ) /*0x416e0e*/
      {
        v7 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v6->__pad_0 + 60))(v6); /*0x416e15*/
        if ( !Object::IsAlliedWithObjectHouse(v7, (IUnknown *)this) ) /*0x416e1a*/
          goto LABEL_18; /*0x416e1a*/
      }
      if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v6->__pad_0 + 44))(v6) != 1 ) /*0x416e31*/
        goto LABEL_18; /*0x416e31*/
      Debug::Log(); /*0x416e3c*/
      if ( (TechnoClass *)Team::GetMember(this, 0) != v6 ) /*0x416e4f*/
        (*(void (__thiscall **)(FootClass **, int))&(*this)->__pad_26A[10])(this, 3); /*0x416e57*/
      if ( (*(int (__thiscall **)(FootClass **, int, TechnoClass *))&(*this)->__pad_26A[14])(this, 2, v6) != 1 ) /*0x416e6d*/
      {
        ((void (__thiscall *)(FootClass **, _DWORD, int))(*this)->audioController4[1])(this, 0, 1); /*0x416f1e*/
        goto LABEL_4; /*0x416f24*/
      }
      Debug::Log(); /*0x416e78*/
      if ( (*(int (__thiscall **)(FootClass **, int))&(*this)->__pad_26A[10])(this, 36) == 1 ) /*0x416e8f*/
      {
        (*(void (__thiscall **)(FootClass **, int))&(*this)->__pad_26A[10])(this, 7); /*0x416ec3*/
LABEL_18:
        v8 = *this; /*0x416ec9*/
        NearbyCell = InfantryClass::FindNearbyCell(this, (IUnknown *)this->q5A4); /*0x416ed6*/
        ((void (__thiscall *)(FootClass **, void *, int))v8->audioController4[1])(this, NearbyCell, 1); /*0x416ede*/
        v10 = (int)this->q175; /*0x416ee4*/
        if ( v10 ) /*0x416eec*/
          TeamClass::SelectMember(v10, (AbstractClass *)this->q5A4); /*0x416ef5*/
        this->q0BC = (FootClass *)1; /*0x416eff*/
        Debug::Log(); /*0x416f09*/
      }
      else
      {
        Debug::Log(); /*0x416e96*/
        (*(void (__thiscall **)(FootClass **, int))&(*this)->__pad_26A[10])(this, 3); /*0x416ea4*/
        ((void (__thiscall *)(FootClass **, _DWORD, int))(*this)->audioController4[2])(this, 0, 1); /*0x416eb2*/
      }
LABEL_5:
      MissionControl = MissionClass::GetMissionControl(this); /*0x416d9d*/
      v4 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x416dc2*/
      return v4 + Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)2);
    case 1u: /*0x416d64*/
      v11 = this->q5A4; /*0x416f29*/
      if ( v11 ) /*0x416f31*/
      {
        v12 = (_DWORD *)(*(int (__thiscall **)(FootClass *, _BYTE *))(*(_DWORD *)v11->__pad_0 + 72))(v11, v29); /*0x416f54*/
        if ( !this->q19D ) /*0x416f5f*/
          WinAPI::Wrapper(-2147467261); /*0x416f6e*/
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(this->q19D)->__pad_0 + 68))( /*0x416f89*/
          this->q19D,
          *v12,
          v12[1],
          v12[2]);
        this->q0BC = (FootClass *)2; /*0x416f8c*/
        return 1; /*0x416f96*/
      }
      else
      {
        ((void (__thiscall *)(FootClass **, _DWORD, int))(*this)->audioController4[2])(this, 0, 1); /*0x416f3a*/
        return 1; /*0x416f40*/
      }
    case 2u: /*0x416d64*/
      v13 = this->q5A4; /*0x416fa3*/
      if ( v13 /*0x416fc7*/
        && (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v13->__pad_0 + 44))(v13) != 11
        && (FootClass *)Team::GetMember(this, 0) != this->q5A4 )
      {
        Debug::Log(); /*0x416fce*/
        this->q0BC = 0; /*0x416fd6*/
        return 1; /*0x416fe8*/
      }
      v14 = this->q5A4; /*0x416fe9*/
      if ( v14 /*0x417008*/
        && (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v14->__pad_0 + 44))(v14) == 11
        && !((unsigned __int8 (__thiscall *)(FootClass **, _DWORD))(*this)->audioController7[3])(this, this->q5A4) )
      {
        this->q0BC = 0; /*0x417012*/
        return 1; /*0x417024*/
      }
      if ( !this->q19D ) /*0x417025*/
        WinAPI::Wrapper(-2147467261); /*0x417032*/
      if ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)(this->q19D)->__pad_0 + 144))(this->q19D) != 1 ) /*0x417049*/
        goto LABEL_44; /*0x417049*/
      Debug::Log(); /*0x417054*/
      v15 = this->q5A4; /*0x417059*/
      if ( !v15 /*0x4170e9*/
        || (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v15->__pad_0 + 44))(v15) != 1
        || (v16 = (int)this->q027,
            v17 = (int)this->q028,
            v30 = (int)this->q029,
            v18 = v16 / 256,
            v19 = (this->q5A4)->location[0],
            v20 = (this->q5A4)->location[1],
            v30 = (this->q5A4)->location[2],
            (unsigned __int16)(v19 / 256) == (_WORD)v18)
        && (unsigned __int16)(v20 / 256) == (unsigned __int16)(v17 / 256) )
      {
        *((_BYTE *)this + 1748) = 0; /*0x41710f*/
LABEL_44:
        if ( !this->q19D ) /*0x417116*/
          WinAPI::Wrapper(-2147467261); /*0x417125*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)(this->q19D)->__pad_0 + 16))(this->q19D) ) /*0x417133*/
        {
          Debug::Log(); /*0x41713f*/
          this->q0BC = (FootClass *)3; /*0x417147*/
        }
        return 1; /*0x417151*/
      }
      else
      {
        this->q0BC = 0; /*0x4170f0*/
        Debug::Log(); /*0x4170fa*/
        return 1; /*0x417102*/
      }
    case 3u: /*0x416d64*/
      Debug::Log(); /*0x417163*/
      if ( this->q046 ) /*0x417168*/
      {
        if ( this->q140 ) /*0x417177*/
        {
          *((_BYTE *)this + 1748) = 1; /*0x41717f*/
        }
        else
        {
          (*(void (__thiscall **)(FootClass **, _DWORD))&(*this)->__pad_115[15])(this, 0); /*0x41719c*/
          FootClass::MissionMoveCarryallLand((int *)this); /*0x4171a4*/
          (*(void (__thiscall **)(FootClass **, int))&(*this)->__pad_115[15])(this, 1); /*0x4171af*/
          this->q0BC = 0; /*0x4171b5*/
        }
        return 1; /*0x417186*/
      }
      else
      {
        Debug::Log(); /*0x4171cd*/
        (*(void (__thiscall **)(FootClass **, _DWORD))&(*this)->__pad_115[15])(this, 0); /*0x4171da*/
        v27[0] = this->q027; /*0x4171ea*/
        v27[1] = this->q028; /*0x4171f1*/
        v21 = (int)this->q029; /*0x4171f7*/
        v28[0] = this->q027; /*0x4171fa*/
        v22 = (int)this->q029; /*0x4171fe*/
        v27[2] = v21; /*0x417201*/
        v28[1] = this->q028; /*0x41720c*/
        v28[2] = v22; /*0x417216*/
        v26 = BYTE1(*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v27) + 80)) & 1; /*0x41722f*/
        v23 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v28); /*0x417236*/
        Building = (IUnknown *)CellClass::FindBuilding(v23, v26); /*0x417242*/
        if ( Building /*0x417270*/
          && Building == (IUnknown *)Team::GetMember(this, 0)
          && (Debug::Log(), (*(int (__thiscall **)(FootClass **, int))&(*this)->__pad_26A[10])(this, 19) == 1) )
        {
          Debug::Log(); /*0x417277*/
          (*(void (__thiscall **)(IUnknown *))(Building->field_0 + 212))(Building); /*0x417283*/
          Building->__pad_8C[0] = 0; /*0x417290*/
          Building->__pad_3BC[104] = 1; /*0x417297*/
          CellClass::AddObject(this + 69, Building); /*0x41729e*/
        }
        else
        {
          this->q0BC = 0; /*0x4172a5*/
        }
        (*(void (__thiscall **)(FootClass **, int))&(*this)->__pad_26A[10])(this, 3); /*0x4172b1*/
        (*(void (__thiscall **)(FootClass **, int))&(*this)->__pad_115[15])(this, 1); /*0x4172bd*/
        v25 = *this; /*0x4172c3*/
        *((_BYTE *)this + 1748) = 1; /*0x4172ca*/
        ((void (__thiscall *)(FootClass **, _DWORD, int))v25->audioController4[2])(this, 0, 1); /*0x4172d1*/
        return 1; /*0x4172da*/
      }
    default:
      goto LABEL_5;
  }
}


// ==== 0x00417BD0  AircraftClass::ValidateMovement  this=AircraftClass  sig=csp ====
char __thiscall AircraftClass::_vt81(_DWORD *this, int a2, int *a3, int a4)
{
  int v5; // eax
  char result; // al

  v5 = ((__int64 (__thiscall *)(_DWORD *, int *, int))*(_DWORD *)(*this + 116))(this, a3, a4); /*0x417be1*/
  switch ( v5 ) /*0x417bf4*/
  {
    case 2: /*0x417bf4*/
      result = 0; /*0x417c14*/
      break; /*0x417c17*/
    case 3: /*0x417bf4*/
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD, int *, _DWORD))(*this + 888))(this, 7, 0, a3, 0); /*0x417c25*/
      break; /*0x417c2e*/
    case 4: /*0x417bf4*/
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD))(*this + 888))(this, 16, 0, 0, 0); /*0x417c3d*/
      break; /*0x417c46*/
    case 17: /*0x417bf4*/
      result = (*(int (__thiscall **)(_DWORD *, int, _DWORD, int *, _DWORD))(*this + 888))(this, 2, 0, a3, 0); /*0x417c06*/
      break; /*0x417c0f*/
    default:
      result = FootClass::ValidateMove(this, v5, a3, a4); /*0x417c4e*/
      break; /*0x417c4e*/
  }
  return result; /*0x417c0c*/
}


// ==== 0x00417C80  ObjectClass::vt_entry_140  this=AircraftClass  sig=csp ====
char __thiscall ObjectClass::vt_entry_140(_BYTE *this, int aP1, FootClass *aP2, __int16 *a3, void **a4)
{
  return ObjectClass::SpawnInfantry(this, (FootClass *)aP1, aP2, (FootClass *)a3, (FootClass *)a4); /*0x417c99*/
}


// ==== 0x00417CA0  TechnoClass::ExecuteMissionCommand  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_417CA0(#377 *this, int a2, int a3, int a4, int a5)
{
  return ScriptAction::ExecuteMissionCmd(this); /*0x417cb9*/
}


// ==== 0x00417CC0  AircraftClass::GetCursorOverObject  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::GetCursorOverObject(IUnknown *this, IUnknown *aP1, IUnknown *a3)
{
  IUnknown *v3; // ebp
  IUnknown *v4; // edi
  int result; // eax
  int v7; // ebx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  char v18[12]; // [esp+10h] [ebp-Ch] BYREF

  v3 = a3; /*0x417cc5*/
  v4 = aP1; /*0x417ccb*/
  result = InfantryClass::GetCursorOverObject(this, aP1, (char)a3); /*0x417cd3*/
  v7 = result; /*0x417cd8*/
  if ( result == 8 ) /*0x417cdd*/
    return result; /*0x417cdd*/
  if ( result == 26 && *(_BYTE *)(*(_DWORD *)&this->__pad_690[52] + 3597) ) /*0x417cf4*/
    v7 = 0; /*0x417cfe*/
  if ( *(_BYTE *)(*(_DWORD *)&this->__pad_690[52] + 3580) /*0x417d16*/
    && (unsigned __int8)House::IsHumanPlayer((#375 *)this->field_21C) )
  {
    if ( v7 != 7 && v7 ) /*0x417d26*/
      goto LABEL_18; /*0x417d26*/
    if ( Object::IsAlliedWithObjectHouse((_DWORD *)this->field_21C, v4) ) /*0x417d33*/
    {
      if ( !v4 /*0x417d56*/
        || (LOBYTE(a3) = v4->__pad_10[4] & 1, !(_BYTE)a3)
        || (v8 = (_DWORD *)(*(int (__thiscall **)(IUnknown *))(v4->field_0 + 60))(v4),
            Object::IsAlliedWithObjectHouse(v8, this)) )
      {
        if ( !this->field_118 && (*(int (__thiscall **)(IUnknown *))(v4->field_0 + 44))(v4) == 1 ) /*0x417d73*/
        {
          v7 = 17; /*0x417d75*/
          goto LABEL_24; /*0x417d7a*/
        }
      }
    }
  }
  if ( !v7 ) /*0x417d7e*/
  {
    v9 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, char *))(v4->field_0 + 72))(v4, v18); /*0x417d89*/
    LOWORD(a3) = *v9 / 256; /*0x417d9e*/
    HIWORD(a3) = v9[1] / 256; /*0x417db7*/
    v10 = this->field_0; /*0x417dc0*/
    aP1 = a3; /*0x417dc4*/
    v7 = (*(int (__thiscall **)(IUnknown *, IUnknown **, _DWORD, IUnknown *))(v10 + 112))(this, &aP1, 0, v3); /*0x417dcb*/
  }
LABEL_18:
  if ( v7 == 4 ) /*0x417dd0*/
  {
    if ( *(_DWORD *)&this->__pad_FC[24] ) /*0x417dd2*/
      goto LABEL_24; /*0x417dda*/
LABEL_23:
    v7 = 0; /*0x417df4*/
    goto LABEL_24; /*0x417df4*/
  }
  if ( v7 == 5 && !*(_DWORD *)(*(int (__thiscall **)(IUnknown *, _DWORD))(this->field_0 + 1016))(this, 0) ) /*0x417def*/
    goto LABEL_23; /*0x417df2*/
LABEL_24:
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)this->field_21C) ) /*0x417dfc*/
  {
    if ( v7 == 7 && (*(int (__thiscall **)(IUnknown *))(v4->field_0 + 44))(v4) == 6 ) /*0x417e14*/
    {
      v11 = v4->field_520; /*0x417e16*/
      if ( *(_BYTE *)(v11 + 5801) ) /*0x417e1c*/
      {
        v12 = 0; /*0x417e2c*/
        v13 = *(_DWORD *)(*(_DWORD *)&this->__pad_690[52] + 1016); /*0x417e33*/
        if ( v13 <= 0 ) /*0x417e38*/
          goto LABEL_36; /*0x417e38*/
        v14 = *(_DWORD **)(*(_DWORD *)&this->__pad_690[52] + 1004); /*0x417e3a*/
        while ( *v14 != v11 ) /*0x417e3f*/
        {
          ++v12; /*0x417e41*/
          ++v14; /*0x417e42*/
          if ( v12 >= v13 ) /*0x417e47*/
            goto LABEL_36; /*0x417e47*/
        }
        if ( !Array::ContainsValue(&v4->field_0, this) /*0x417e76*/
          || v4->field_118
          || (v7 = 3, (*(int (__thiscall **)(IUnknown *, int, IUnknown *))(this->field_0 + 632))(this, 15, v4) != 1) )
        {
LABEL_36:
          v7 = 31; /*0x417e78*/
        }
      }
    }
  }
  if ( *(_BYTE *)(*(_DWORD *)&this->__pad_690[52] + 3580) && v7 == 17 ) /*0x417e90*/
  {
    a3 = *(IUnknown **)(*(int (__thiscall **)(IUnknown *, IUnknown **))(v4->field_0 + 440))(v4, &aP1); /*0x417eaa*/
    if ( a3 != *(IUnknown **)&MEMORY[0x87F8E4].__pad_5568[20508] ) /*0x417eae*/
    {
      v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x417ecc*/
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
    if ( (*(unsigned __int8 (__thiscall **)(IUnknown *))(v4->field_0 + 196))(v4) ) /*0x417f07*/
    {
      if ( !(*(int (__thiscall **)(IUnknown *, int))(v4->field_0 + 208))(v4, 1) ) /*0x417f17*/
      {
        v17 = (*(int (__thiscall **)(IUnknown *, int))(v4->field_0 + 204))(v4, 1); /*0x417f27*/
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 44))(v17) == 21 ) /*0x417f37*/
          return 1; /*0x417f47*/
      }
    }
  }
  else if ( v7 == 5 && *(_BYTE *)((*(int (__thiscall **)(IUnknown *))(v4->field_0 + 136))(v4) + 563) ) /*0x417f59*/
  {
    return 2; /*0x417f63*/
  }
  return v7; /*0x417cdf*/
}


// ==== 0x00417F80  AircraftClass::CanEnterCell  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::CanEnterCell(int this, __int16 *a1, IUnknown *aP2, InfantryClass *aP3)
{
  int v6; // edi

  if ( !(unsigned __int8)House::IsHumanPlayer(*(#375 **)(this + 540)) ) /*0x417f89*/
    return 0; /*0x417f92*/
  v6 = FootClass::HandleCursorWithCheck((int *)this, a1, aP2, aP3); /*0x417faf*/
  if ( v6 == 5 && !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(this->barrelRecoil)(this, 0) ) /*0x417fc2*/
    return 0; /*0x417fc7*/
  return v6; /*0x417f94*/
}


// ==== 0x00417FD0  AbstractClass::GetField9  this=IUnknown  sig=ida-proto ====
int AbstractClass::GetField9()
{
  return MEMORY[0x8871E0]->PoseDir; /*0x417fd8*/
}


// ==== 0x00417FE0  AircraftClass::Mission_Attack  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::Mission_Attack(int *this)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  char v5; // al
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int *v12; // edi
  int v13; // edi
  int v14; // edi
  int *v15; // eax
  int v16; // edx
  int *v17; // edi
  int *v18; // eax
  double v19; // st7
  int *v20; // ebx
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
  _DWORD *v33; // eax
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
  _DWORD *v47; // eax
  int v48; // eax
  int v49; // edi
  int v50; // eax
  int v51; // edi
  int v52; // ecx
  _DWORD *v53; // eax
  _DWORD *v54; // eax
  int v55; // edx
  int v56; // eax
  int v57; // edi
  int v58; // eax
  int v59; // edi
  _DWORD *v60; // eax
  _DWORD *v61; // eax
  int v62; // edx
  int v63; // eax
  int v64; // edi
  int v65; // eax
  int v66; // edi
  _DWORD *v67; // eax
  _DWORD *v68; // eax
  int v69; // edx
  int v70; // eax
  int v71; // edi
  int v72; // eax
  int v73; // edi
  int v74; // ecx
  _DWORD *v75; // eax
  _DWORD *v76; // eax
  int v77; // edx
  char v78; // al
  int v79; // eax
  unsigned int *v80; // ecx
  unsigned int TransitionCount; // eax
  int *OpenNeighbor; // eax
  int v83; // edi
  void *v84; // eax
  int v85; // eax
  char *MissionControl; // eax
  int v87; // esi
  int v88; // [esp+28h] [ebp-E4h]
  int v89; // [esp+2Ch] [ebp-E0h]
  int v90; // [esp+2Ch] [ebp-E0h]
  int v91; // [esp+2Ch] [ebp-E0h]
  int v92; // [esp+2Ch] [ebp-E0h]
  int v93; // [esp+30h] [ebp-DCh]
  int v94; // [esp+30h] [ebp-DCh]
  int v95; // [esp+30h] [ebp-DCh]
  int v96; // [esp+30h] [ebp-DCh]
  int v97; // [esp+30h] [ebp-DCh]
  int v98; // [esp+34h] [ebp-D8h]
  char v99; // [esp+38h] [ebp-D4h]
  int v100; // [esp+44h] [ebp-C8h] BYREF
  _DWORD v101[2]; // [esp+48h] [ebp-C4h] BYREF
  _DWORD v102[5]; // [esp+50h] [ebp-BCh] BYREF
  _DWORD v103[3]; // [esp+64h] [ebp-A8h] BYREF
  int v104; // [esp+70h] [ebp-9Ch] BYREF
  int v105; // [esp+74h] [ebp-98h] BYREF
  int v106; // [esp+78h] [ebp-94h]
  int v107; // [esp+7Ch] [ebp-90h]
  _DWORD v108[5]; // [esp+80h] [ebp-8Ch] BYREF
  int v109; // [esp+94h] [ebp-78h] BYREF
  int v110; // [esp+98h] [ebp-74h] BYREF
  int v111; // [esp+9Ch] [ebp-70h] BYREF
  int v112; // [esp+A0h] [ebp-6Ch] BYREF
  int v113; // [esp+A4h] [ebp-68h] BYREF
  int v114; // [esp+A8h] [ebp-64h] BYREF
  _BYTE v115[4]; // [esp+ACh] [ebp-60h] BYREF
  _BYTE v116[20]; // [esp+B0h] [ebp-5Ch] BYREF
  _BYTE v117[4]; // [esp+C4h] [ebp-48h] BYREF
  _BYTE v118[24]; // [esp+C8h] [ebp-44h] BYREF
  _BYTE v119[20]; // [esp+E0h] [ebp-2Ch] BYREF
  _BYTE v120[24]; // [esp+F4h] [ebp-18h] BYREF

  switch ( this->missionStatus )
  {
    case 0:
      v2 = this->q2B4; /*0x418006*/
      this->AircraftClass_field_bool_6D2 = 0; /*0x41800c*/
      v3 = -(v2 != 0); /*0x418015*/
      LOBYTE(v3) = v3 & 0xF7; /*0x418017*/
      this->missionStatus = v3 + 10; /*0x41801b*/
      return 1; /*0x418030*/
    case 1:
      v5 = this->AircraftClass_field_bool_6C8; /*0x418031*/
      this->AircraftClass_field_bool_6D2 = 0; /*0x418037*/
      if ( v5 ) /*0x418040*/
      {
        v6 = this->q0BF; /*0x418042*/
        this->AircraftClass_field_bool_6C8 = 0; /*0x418048*/
        this->q0BF = v6 - 1; /*0x418050*/
      }
      v7 = this->q2B4; /*0x418056*/
      if ( v7 && this->q0BF )
      {
        v8 = *this; /*0x418072*/
        v9 = ((int (__stdcall *)(int))FindSpiralMoveTarget)(v7); /*0x418079*/
        (*(void (__thiscall **)(int *, int, int))(v8 + 1152))(this, v9, 1); /*0x418081*/
        this->missionStatus = this->q169 != 0 ? 3 : 10;
      }
      else
      {
LABEL_107:
        this->missionStatus = 10; /*0x418d17*/
      }
      goto LABEL_108; /*0x41809c*/
    case 3:
      if ( this->AircraftClass_field_bool_6C8 ) /*0x4180a1*/
      {
        v10 = this->q0BF; /*0x4180ad*/
        this->AircraftClass_field_bool_6C8 = 0; /*0x4180b3*/
        this->q0BF = v10 - 1; /*0x4180ba*/
      }
      v11 = this->q2B4; /*0x4180c0*/
      this->AircraftClass_field_bool_6D2 = 0; /*0x4180c6*/
      if ( !v11 || !this->q0BF ) /*0x4180d4*/
        goto LABEL_83; /*0x4180da*/
      v12 = this + 432; /*0x4180e6*/
      if ( (*(int (__stdcall **)(int *))(this->q1B0 + 24))(this + 432) ) /*0x4180ed*/
      {
        v13 = *(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(*this + 1016))(this, 0); /*0x418105*/
        if ( ObjectClass::ComputeDistance(this, this->q2B4) < *(_DWORD *)(v13 + 180) ) /*0x418115*/
        {
LABEL_14:
          this->missionStatus = 4; /*0x418117*/
          return 1; /*0x418130*/
        }
        (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, this->q2B4, 1); /*0x41813e*/
      }
      else
      {
        if ( (*(int (__stdcall **)(int *))(*v12 + 28))(this + 432) ) /*0x418149*/
          goto LABEL_14; /*0x418149*/
        if ( !this->locomotor ) /*0x418150*/
          WinAPI::Wrapper(-2147467261); /*0x41815d*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->locomotor + 128))(this->locomotor) ) /*0x41816b*/
          goto LABEL_14; /*0x418173*/
      }
      if ( this->q169 ) /*0x418175*/
      {
        v14 = ObjectClass::ComputeDistance(this, this->q169); /*0x41819d*/
        if ( v14 >= 512 ) /*0x4181a5*/
        {
          v17 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this->q169 + 72))(this->q169, v117); /*0x418212*/
          v18 = (int *)(*(int (__thiscall **)(int *, _BYTE *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 176))( /*0x418229*/
                         this,
                         v115,
                         0,
                         0,
                         0,
                         0);
          if ( *v18 == *v17 && v18[1] == v17[1] ) /*0x41823f*/
            LOWORD(v100) = 0; /*0x418241*/
          v19 = Math::CalcAngle((double)v18[1] - (double)v17[1], (double)*v17 - (double)*v18); /*0x41825d*/
          LOWORD(v100) = Math::RoundToInt((v19 - 1.570796326794897) * -10430.06004058427); /*0x41827a*/
          FacingClass::Update((char *)this + 928, &v100); /*0x41828e*/
          return 1; /*0x418293*/
        }
        else
        {
          v15 = ObjectClass::CalcTargetFacing(this, &v113, this->q2B4); /*0x4181b5*/
          FacingClass::Update((char *)this + 928, v15); /*0x4181c1*/
          if ( v14 >= 16 ) /*0x4181c9*/
          {
            return 1; /*0x418bdc*/
          }
          else
          {
            v16 = *this; /*0x4181cf*/
            this->missionStatus = 4; /*0x4181d6*/
            (*(void (__thiscall **)(int *, _DWORD, int))(v16 + 1152))(this, 0, 1); /*0x4181e0*/
            return 1; /*0x4181e6*/
          }
        }
      }
      else
      {
        this->missionStatus = 1; /*0x418184*/
        return 1; /*0x41817f*/
      }
    case 4:
      if ( !this->q2B4 || !this->q0BF ) /*0x4182b1*/
        goto LABEL_83; /*0x4182b9*/
      v20 = this + 432; /*0x4182c5*/
      if ( !(*(int (__stdcall **)(int *))(this->q1B0 + 24))(this + 432) ) /*0x4182cc*/
      {
        v21 = ObjectClass::CalcTargetFacing(this, &v109, this->q2B4); /*0x4182e1*/
        FacingClass::Update((char *)this + 904, v21); /*0x4182ed*/
        v22 = ObjectClass::CalcTargetFacing(this, &v112, this->q2B4); /*0x418300*/
        FacingClass::Update((char *)this + 928, v22); /*0x41830c*/
      }
      v23 = *this; /*0x418317*/
      v24 = (*(int (__thiscall **)(int *, _DWORD, int))(*this + 740))(this, this->q2B4, 1); /*0x41831e*/
      switch ( (*(int (__thiscall **)(int *, _DWORD, int))(v23 + 960))(this, this->q2B4, v24) )
      {
        case 0:
          v25 = *this; /*0x418409*/
          v93 = this->q2B4; /*0x41840b*/
          this->AircraftClass_field_bool_6C8 = 1; /*0x41840e*/
          v26 = 0; /*0x418415*/
          v27 = (*(int (__thiscall **)(int *, int))(v25 + 740))(this, v93); /*0x418417*/
          if ( *(int *)(*(_DWORD *)(*(int (__thiscall **)(int *, int))(v25 + 1016))(this, v27) + 156) > 0 ) /*0x418430*/
          {
            do /*0x418476*/
            {
              v28 = *this; /*0x418438*/
              v29 = (*(int (__thiscall **)(int *, _DWORD))(*this + 740))(this, this->q2B4); /*0x41843d*/
              (*(void (__thiscall **)(int *, _DWORD, int))(v28 + 972))(this, this->q2B4, v29); /*0x41844d*/
              v30 = *this; /*0x418459*/
              ++v26; /*0x41845e*/
              v31 = (*(int (__thiscall **)(int *, _DWORD))(*this + 740))(this, this->q2B4); /*0x41845f*/
            }
            while ( v26 < *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, int))(v30 + 1016))(this, v31) + 156) ); /*0x418476*/
          }
          v103[0] = this->q027; /*0x418486*/
          v103[1] = this->owningHouseIndex; /*0x418492*/
          v103[2] = this->q029; /*0x4184a1*/
          v32 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD *))(*(_DWORD *)this->q2B4 + 72))( /*0x4184ad*/
                            this->q2B4,
                            v120,
                            v103);
          v33 = Coord::To_Cell(MEMORY[0x87F7E8], v32); /*0x4184b6*/
          Cell::ApplyDamage(v33, 1, 0, 0, v98); /*0x4184bd*/
          if ( (*(int (__cdecl **)(int *))(*v20 + 24))(this + 432) ) /*0x4184c5*/
          {
            v34 = *this; /*0x4184cc*/
            this->missionStatus = 6; /*0x4184d2*/
            this->AircraftClass_field_bool_6D2 = 1; /*0x4184dc*/
            return *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(v34 + 1016))(this, 0) + 176); /*0x4184fb*/
          }
          if ( !(*(int (__stdcall **)(int *))(*v20 + 28))(this + 432) ) /*0x418504*/
            goto LABEL_54; /*0x418504*/
          v35 = this->q0BF; /*0x418506*/
          v36 = v35 == 0; /*0x41850e*/
          v37 = v35 < 0; /*0x41850e*/
          v38 = *this; /*0x418510*/
          this->AircraftClass_field_bool_6D2 = 1; /*0x41851d*/
          this->missionStatus = !v37 && !v36 ? 1 : 10;
          return *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(v38 + 1016))(this, 0) + 176); /*0x418543*/
        case 2:
          if ( !this->q0BF ) /*0x418368*/
          {
            this->missionStatus = 10; /*0x418372*/
            return 1; /*0x418387*/
          }
          if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*this + 940))(this, this->q2B4)
            || (*(int (__stdcall **)(int *))(*v20 + 24))(this + 432) )
          {
            this->missionStatus = 1; /*0x4183db*/
          }
          else if ( (*(int (__stdcall **)(int *))(*v20 + 28))(this + 432) )
          {
            this->missionStatus = 4; /*0x4183b1*/
          }
          else
          {
            this->missionStatus = *(_BYTE *)(MEMORY[0x87F7E8][7806] + 6113) != 0 ? 1 : 4;
          }
          if ( !(*(int (__stdcall **)(int *))(*v20 + 24))(this + 432) ) /*0x4183ed*/
            return 1; /*0x4183ed*/
          return 45; /*0x418402*/
        case 3:
          return 1;
        case 9:
          (*(void (__thiscall **)(int *, _DWORD))(*this + 1116))(this, 0); /*0x418352*/
          return 1; /*0x418367*/
        default:
          if ( !this->q0BF ) /*0x418544*/
          {
            this->missionStatus = 10; /*0x41854e*/
            return 1; /*0x418563*/
          }
          if ( (*(int (__stdcall **)(int *))(*v20 + 24))(this + 432) ) /*0x418567*/
            return 1; /*0x41856c*/
LABEL_54:
          this->missionStatus = 5; /*0x418572*/
          result = 1; /*0x41857c*/
          break; /*0x41858b*/
      }
      return result; /*0x41858b*/
    case 5:
      if ( this->q2B4 )
      {
        v39 = ObjectClass::CalcTargetFacing(this, &v114, this->q2B4); /*0x4185b4*/
        FacingClass::Update((char *)this + 904, v39); /*0x4185c0*/
        v40 = ObjectClass::CalcTargetFacing(this, &v111, this->q2B4); /*0x4185d3*/
        FacingClass::Update((char *)this + 928, v40); /*0x4185df*/
        v41 = *this; /*0x4185ea*/
        v42 = (*(int (__thiscall **)(int *, _DWORD, int))(*this + 740))(this, this->q2B4, 1); /*0x4185f5*/
        switch ( (*(unsigned int (__thiscall **)(int *, _DWORD, int))(v41 + 960))(this, this->q2B4, v42) )
        {
          case 0u:
            v44 = *this; /*0x4186bc*/
            v45 = (*(int (__thiscall **)(int *, _DWORD))(*this + 740))(this, this->q2B4); /*0x4186c1*/
            (*(void (__thiscall **)(int *, _DWORD, int))(v44 + 972))(this, this->q2B4, v45); /*0x4186d1*/
            v105 = this->q027; /*0x4186e4*/
            v106 = this->owningHouseIndex; /*0x4186f0*/
            v107 = this->q029; /*0x4186ff*/
            v46 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q2B4 + 72))(this->q2B4); /*0x41870b*/
            v47 = Coord::To_Cell(MEMORY[0x87F7E8], v46); /*0x418714*/
            Cell::ApplyDamage(v47, (int)v119, (int)&v105, 1, 0); /*0x41871b*/
            if ( !this->q0BF ) /*0x418728*/
              goto LABEL_107; /*0x418728*/
            this->missionStatus = *(_BYTE *)(MEMORY[0x87F7E8][7806] + 6113) != 0 ? 1 : 4;
            goto LABEL_108; /*0x418749*/
          case 2u:
            if ( !this->q0BF ) /*0x41863c*/
              goto LABEL_107; /*0x41863c*/
            if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*this + 940))(this, this->q2B4) /*0x418664*/
              || (*(int (__stdcall **)(int *))(this->q1B0 + 24))(this + 432) )
            {
              this->missionStatus = 1; /*0x418688*/
            }
            else
            {
              v43 = -(*(_BYTE *)(MEMORY[0x87F7E8][7806] + 6113) != 0); /*0x418679*/
              LOBYTE(v43) = v43 & 0xFD; /*0x41867b*/
              this->missionStatus = v43 + 4; /*0x418680*/
            }
            if ( !(*(int (__stdcall **)(int *))(this->q1B0 + 24))(this + 432) ) /*0x4186a0*/
              goto LABEL_108; /*0x4186a0*/
            result = 45; /*0x4186a6*/
            break; /*0x4186b5*/
          case 3u:
            goto LABEL_108;
          case 9u:
            (*(void (__thiscall **)(int *, _DWORD))(*this + 1116))(this, 0); /*0x418629*/
            goto LABEL_108; /*0x41862f*/
          default:
            if ( !this->q0BF ) /*0x418756*/
              goto LABEL_107; /*0x418756*/
            if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*this + 940))(this, this->q2B4) )
              this->missionStatus = *(_BYTE *)(MEMORY[0x87F7E8][7806] + 6113) != 0 ? 1 : 4;
            else
              this->missionStatus = 1; /*0x418771*/
            goto LABEL_108; /*0x418777*/
        }
      }
      else
      {
        this->missionStatus = 10; /*0x418596*/
        return 1; /*0x41859c*/
      }
      return result; /*0x4185ab*/
    case 6:
      v48 = this->q2B4; /*0x41879d*/
      if ( v48 ) /*0x4187a5*/
      {
        v49 = *this; /*0x4187bd*/
        v50 = (*(int (__thiscall **)(int *, int, int))(*this + 740))(this, v48, 1); /*0x4187c4*/
        switch ( (*(int (__thiscall **)(int *, _DWORD, int))(v49 + 960))(this, this->q2B4, v50) ) /*0x4187eb*/
        {
          case 0: /*0x4187eb*/
          case 2: /*0x4187eb*/
          case 9: /*0x4187eb*/
            break;
          case 8: /*0x4187eb*/
            (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, this->q2B4, 1); /*0x4187ff*/
            break; /*0x4187ff*/
          default:
            goto LABEL_91;
        }
        v51 = *this; /*0x418805*/
        v94 = (*(int (__thiscall **)(int *, _DWORD))(*this + 740))(this, this->q2B4); /*0x41881c*/
        v89 = this->q2B4; /*0x41881d*/
        (*(void (__thiscall **)(int *))(v51 + 972))(this); /*0x418820*/
        v100 = this->q027; /*0x418834*/
        v52 = this->q2B4; /*0x418838*/
        v101[0] = this->owningHouseIndex; /*0x418841*/
        v101[1] = this->q029; /*0x41884d*/
        v53 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, int *, int, _DWORD, _DWORD))(*(_DWORD *)v52 + 72))( /*0x41885b*/
                          v52,
                          v116,
                          &v100,
                          1,
                          0,
                          0);
        v54 = Coord::To_Cell(MEMORY[0x87F7E8], v53); /*0x418864*/
        Cell::ApplyDamage(v54, v89, v94, v98, v99); /*0x41886b*/
        (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, this->q2B4, 1); /*0x41887d*/
        v55 = *this; /*0x418883*/
        this->missionStatus = 7; /*0x418889*/
        return *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(v55 + 1016))(this, 0) + 176); /*0x41889b*/
      }
      else
      {
        this->missionStatus = 10; /*0x4187a7*/
        return 1; /*0x4187ad*/
      }
    case 7:
      v56 = this->q2B4; /*0x4188ac*/
      if ( v56 ) /*0x4188b4*/
      {
        v57 = *this; /*0x4188cc*/
        v58 = (*(int (__thiscall **)(int *, int, int))(*this + 740))(this, v56, 1); /*0x4188d3*/
        switch ( (*(unsigned int (__thiscall **)(int *, _DWORD, int))(v57 + 960))(this, this->q2B4, v58) ) /*0x4188fa*/
        {
          case 0u: /*0x4188fa*/
          case 2u: /*0x4188fa*/
          case 9u: /*0x4188fa*/
            break;
          case 8u: /*0x4188fa*/
            (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, this->q2B4, 1); /*0x41890e*/
            break; /*0x41890e*/
          default:
            goto LABEL_91;
        }
        v59 = *this; /*0x418914*/
        v95 = (*(int (__thiscall **)(int *, _DWORD))(*this + 740))(this, this->q2B4); /*0x418925*/
        v90 = this->q2B4; /*0x41892c*/
        (*(void (__thiscall **)(int *))(v59 + 972))(this); /*0x41892f*/
        v108[0] = this->q027; /*0x418943*/
        v108[1] = this->owningHouseIndex; /*0x41894f*/
        v108[2] = this->q029; /*0x41895e*/
        v60 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)this->q2B4 /*0x41896a*/
                                                                                              + 72))(
                          this->q2B4,
                          v118,
                          v108,
                          1,
                          0,
                          0);
        v61 = Coord::To_Cell(MEMORY[0x87F7E8], v60); /*0x418973*/
        Cell::ApplyDamage(v61, v90, v95, v98, v99); /*0x41897a*/
        (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, this->q2B4, 1); /*0x41898c*/
        v62 = *this; /*0x418992*/
        this->missionStatus = 8; /*0x418998*/
        return *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(v62 + 1016))(this, 0) + 176); /*0x4189aa*/
      }
      else
      {
        this->missionStatus = 10; /*0x4188b6*/
        return 1; /*0x4188bc*/
      }
    case 8:
      v63 = this->q2B4; /*0x4189bb*/
      if ( v63 ) /*0x4189c3*/
      {
        v64 = *this; /*0x4189db*/
        v65 = (*(int (__thiscall **)(int *, int, int))(*this + 740))(this, v63, 1); /*0x4189e2*/
        switch ( (*(unsigned int (__thiscall **)(int *, _DWORD, int))(v64 + 960))(this, this->q2B4, v65) ) /*0x418a09*/
        {
          case 0u: /*0x418a09*/
          case 2u: /*0x418a09*/
          case 9u: /*0x418a09*/
            break;
          case 8u: /*0x418a09*/
            (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, this->q2B4, 1); /*0x418a1d*/
            break; /*0x418a1d*/
          default:
            goto LABEL_91;
        }
        v66 = *this; /*0x418a23*/
        v96 = (*(int (__thiscall **)(int *, _DWORD))(*this + 740))(this, this->q2B4); /*0x418a34*/
        v91 = this->q2B4; /*0x418a3b*/
        (*(void (__thiscall **)(int *))(v66 + 972))(this); /*0x418a3e*/
        v102[0] = this->q027; /*0x418a52*/
        v102[1] = this->owningHouseIndex; /*0x418a5e*/
        v102[2] = this->q029; /*0x418a6d*/
        v67 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)this->q2B4 /*0x418a79*/
                                                                                              + 72))(
                          this->q2B4,
                          v119,
                          v102,
                          1,
                          0,
                          0);
        v68 = Coord::To_Cell(MEMORY[0x87F7E8], v67); /*0x418a82*/
        Cell::ApplyDamage(v68, v91, v96, v98, v99); /*0x418a89*/
        (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, this->q2B4, 1); /*0x418a9b*/
        v69 = *this; /*0x418aa1*/
        this->missionStatus = 9; /*0x418aa7*/
        return *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(v69 + 1016))(this, 0) + 176); /*0x418ab9*/
      }
      else
      {
LABEL_83:
        this->missionStatus = 10; /*0x4189c5*/
        return 1; /*0x4189cb*/
      }
    case 9:
      v70 = this->q2B4; /*0x418aca*/
      if ( v70 ) /*0x418ad2*/
      {
        v71 = *this; /*0x418aea*/
        v72 = (*(int (__thiscall **)(int *, int, int))(*this + 740))(this, v70, 1); /*0x418af1*/
        switch ( (*(unsigned int (__thiscall **)(int *, _DWORD, int))(v71 + 960))(this, this->q2B4, v72) ) /*0x418b18*/
        {
          case 0u: /*0x418b18*/
          case 2u: /*0x418b18*/
          case 8u: /*0x418b18*/
          case 9u: /*0x418b18*/
            v73 = *this; /*0x418b25*/
            v97 = this->q2B4; /*0x418b27*/
            v92 = (*(int (__thiscall **)(int *))(*this + 740))(this); /*0x418b36*/
            v88 = this->q2B4; /*0x418b37*/
            (*(void (__thiscall **)(int *))(v73 + 972))(this); /*0x418b3a*/
            v104 = this->q027; /*0x418b4e*/
            v105 = this->owningHouseIndex; /*0x418b5a*/
            v74 = this->q2B4; /*0x418b5e*/
            v106 = this->q029; /*0x418b6e*/
            v75 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, int *, int, _DWORD, _DWORD))(*(_DWORD *)v74 + 72))( /*0x418b75*/
                              v74,
                              v120,
                              &v104,
                              1,
                              0,
                              0);
            v76 = Coord::To_Cell(MEMORY[0x87F7E8], v75); /*0x418b7e*/
            Cell::ApplyDamage(v76, v88, v92, v97, v98); /*0x418b85*/
            v77 = *this; /*0x418b8a*/
            this->missionStatus = 3; /*0x418b90*/
            result = (*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(v77 + 1016))(this, 0) + 180) + 1024) /*0x418bb4*/
                   / *(_DWORD *)(this->q1B1 + 1656);
            break; /*0x418bc4*/
          default:
LABEL_91:
            if ( !this->q0BF ) /*0x418bc5*/
            {
              this->missionStatus = 10; /*0x418bcf*/
              this->AircraftClass_field_bool_6D2 = 0; /*0x418bd5*/
            }
            return 1; /*0x418bd5*/
        }
      }
      else
      {
        this->missionStatus = 10; /*0x418ad4*/
        return 1; /*0x418ada*/
      }
      return result; /*0x418ae9*/
    case 10:
      v78 = this->AircraftClass_field_bool_6C8; /*0x418bec*/
      this->AircraftClass_field_bool_6D2 = 0; /*0x418bf6*/
      if ( v78 ) /*0x418bfc*/
      {
        v79 = this->q0BF; /*0x418bfe*/
        this->AircraftClass_field_bool_6C8 = 0; /*0x418c04*/
        if ( v79 > 0 ) /*0x418c0c*/
          this->q0BF = v79 - 1; /*0x418c0f*/
      }
      if ( this->q0BF ) /*0x418c15*/
      {
        if ( this->q2B4 ) /*0x418cd1*/
        {
          this->missionStatus = 1; /*0x418ce2*/
          return 1; /*0x418cf2*/
        }
      }
      else if ( this->isALoaner || (unsigned __int8)House::IsCurrentPlayer((#375 *)this->focus) ) /*0x418c2f*/
      {
        (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0); /*0x418c3d*/
      }
      v80 = (unsigned int *)this->focus; /*0x418c43*/
      this->AircraftClass_field_bool_6D2 = 0; /*0x418c49*/
      TransitionCount = HouseClass::GetTransitionCount(v80); /*0x418c4f*/
      OpenNeighbor = CellClass::FindOpenNeighbor( /*0x418c6e*/
                       MEMORY[0x87F7E8],
                       &v110,
                       TransitionCount,
                       (int)&MEMORY[0x87F7E8][10656],
                       (int)&MEMORY[0x87F7E8][10656],
                       4,
                       1,
                       0);
      v83 = *this; /*0x418c75*/
      v101[0] = *OpenNeighbor; /*0x418c7b*/
      v84 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)v101); /*0x418c87*/
      (*(void (__thiscall **)(int *, void *, int))(v83 + 1152))(this, v84, 1); /*0x418c8f*/
      v85 = this->airstrike; /*0x418c95*/
      this->AircraftClass_field_bool_6D5 = 0; /*0x418c9b*/
      if ( v85 && this->q0BF > 0 ) /*0x418cab*/
      {
        (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 4, 0); /*0x418cb4*/
        this->AircraftClass_field_bool_6D5 = 1; /*0x418cba*/
        return 1; /*0x418cc1*/
      }
      else
      {
        (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x418cfa*/
        this->AircraftClass_field_bool_6D5 = 1; /*0x418d00*/
        return 1; /*0x418d07*/
      }
    default:
LABEL_108:
      MissionControl = MissionClass::GetMissionControl(this); /*0x418d1d*/
      v87 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x418d32*/
      return v87 + Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 2); /*0x418d48*/
  }
}


// ==== 0x00418E20  InfantryClass::FindNearbyCell  this=IUnknown  sig=csp ====
void *__thiscall InfantryClass_FindNearbyCell(_DWORD *this, int a2)
{
  int v2; // esi
  _DWORD *v4; // eax
  int *v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  double v9; // rdi
  double v10; // st7
  __int16 v11; // bx
  double v12; // st7
  void *v13; // edi
  int v14; // eax
  int v16; // [esp+14h] [ebp-44h] BYREF
  double v17; // [esp+18h] [ebp-40h]
  int v18; // [esp+20h] [ebp-38h]
  int v19; // [esp+24h] [ebp-34h] BYREF
  double v20; // [esp+28h] [ebp-30h]
  int v21; // [esp+30h] [ebp-28h]
  _DWORD *v22; // [esp+34h] [ebp-24h]
  double v23; // [esp+38h] [ebp-20h]
  double v24; // [esp+40h] [ebp-18h]
  double v25; // [esp+48h] [ebp-10h] BYREF
  int v26; // [esp+50h] [ebp-8h]

  v2 = a2; /*0x418e2b*/
  v22 = this; /*0x418e35*/
  if ( a2 && (!*(this + 373) || !(unsigned __int8)TechnoClass::IsWaypointHidden()) ) /*0x418e49*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 1360))(this, a2) /*0x418eab*/
      || (v4 = (_DWORD *)(*(int (__thiscall **)(int, double *, _DWORD))(*(_DWORD *)a2 + 76))(a2, &v25, 0),
          LOWORD(v18) = *v4 / 256,
          HIWORD(v18) = v4[1] / 256,
          v19 = v18,
          !(unsigned __int8)Cell::IsOccupied(&v19, 0)) )
    {
      v5 = (int *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)a2 + 72))(a2, &v25); /*0x418ec1*/
      v6 = *v5; /*0x418ec4*/
      v7 = v5[1]; /*0x418ec6*/
      v26 = v5[2]; /*0x418ed3*/
      if ( !MEMORY[0xA8E7AC] ) /*0x418ed7*/
      {
        v18 = 0; /*0x418ee2*/
        if ( *((_DWORD *)MEMORY[0x8871E0] + 1310) / 256 > 0 ) /*0x418efa*/
        {
          v19 = (__int16)(v7 / 256); /*0x418f21*/
          v24 = (double)v19; /*0x418f2c*/
          v19 = (__int16)(v6 / 256); /*0x418f30*/
          v25 = (double)v19; /*0x418f38*/
          while ( 2 ) /*0x418f40*/
          {
            v8 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7); /*0x418f40*/
            LODWORD(v20) = (__int16)v18; /*0x418f59*/
            v21 = v8; /*0x418f5d*/
            v17 = 0.0; /*0x418f65*/
            v23 = (double)(__int16)v18; /*0x418f73*/
            do /*0x419063*/
            {
              v20 = (double)(int)(((__int16)((WORD2(v17) + (_WORD)v21) << 13) & 0xFFFFE000) - 0x3FFF) /*0x418fa1*/
                  * -0.00009587672516830327;
              v9 = v20; /*0x418fa9*/
              v10 = Math::SinCos(v20); /*0x418faf*/
              v11 = Math::RoundToInt(v24 - v10 * v23); /*0x418fc3*/
              v12 = Math::ArcTan2(v9); /*0x418fc5*/
              LOWORD(v19) = Math::RoundToInt(v12 * v23 + v25); /*0x418fde*/
              HIWORD(v19) = v11; /*0x418fe3*/
              v16 = v19; /*0x418ff4*/
              if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v16, 1) ) /*0x418ff8*/
              {
                v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x419010*/
                if ( v16 != LODWORD(v17) /*0x419046*/
                  && (*(unsigned __int8 (__thiscall **)(_DWORD *, void *))(*v22 + 1360))(v22, v13)
                  && (unsigned __int8)Cell::IsOccupied(&v16, 0) )
                {
                  return v13; /*0x4190a0*/
                }
                LODWORD(v17) = v16; /*0x419053*/
              }
              ++HIDWORD(v17); /*0x41905f*/
            }
            while ( SHIDWORD(v17) < 8 ); /*0x419063*/
            v14 = *((_DWORD *)MEMORY[0x8871E0] + 1310); /*0x419074*/
            if ( ++v18 < v14 / 256 ) /*0x41908c*/
              continue; /*0x41908c*/
            break;
          }
          return (void *)a2; /*0x419092*/
        }
      }
    }
  }
  return (void *)v2; /*0x419097*/
}


// ==== 0x004190B0  AircraftClass::MissionDispatch  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::MissionDispatch(int this, _DWORD *a2, int a3, void **a4)
{
  int result; // eax
  int v6; // ebx
  void *ClosestPlacementCell; // eax
  void *v8; // edi
  int v9; // ebx
  void *v10; // eax
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int Member; // eax
  int v16; // eax

  switch ( *(_DWORD *)(this + 172) )
  {
    case 4:
    case 0x1A:
    case 0x1B:
    case 0x1E:
    case 0x1F:
      if ( *(_DWORD *)(this + 660) ) /*0x4190d3*/
        goto LABEL_4; /*0x4190db*/
LABEL_3:
      result = 0; /*0x4190dd*/
      break; /*0x4190e3*/
    default:
LABEL_4:
      switch ( a3 )
      {
        case 8:
          if ( !*(_BYTE *)(*(_DWORD *)(this + 1732) + 3580) /*0x419519*/
            || (*(int (__thiscall **)(int))(this->q184)(this) != 2
            || !*(_BYTE *)(this + 1048)
            || (!*(_DWORD *)(this + 280) || (_DWORD *)CCINIClass::GetDB((_DWORD *)(this + 276)) != a2)
            && *(_DWORD **)(this + 1444) != a2 )
          {
            return FootClass::MissionDispatch((int *)this, a2, a3, a4); /*0x419519*/
          }
          return 10; /*0x419519*/
        case 14:
          v14 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1504); /*0x41939d*/
          if ( v14 <= 0 || *(_DWORD *)(this + 276) >= v14 ) /*0x4193b1*/
            return FootClass::MissionDispatch((int *)this, a2, a3, a4); /*0x4193b1*/
          FootClass::MissionDispatch((int *)this, a2, a3, a4); /*0x4193c4*/
          if ( !*(_DWORD *)(this + 1652) ) /*0x4193c9*/
            WinAPI::Wrapper(-2147467261); /*0x4193d8*/
          if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) ) /*0x4193e6*/
            return 1; /*0x4193e6*/
          RateScaler::Init((_BYTE *)(this + 848), *(double *)(*(_DWORD *)(this + 1732) + 968)); /*0x419407*/
          if ( (*(int (__thiscall **)(int, int, _DWORD *))(this->temporalTargetingMe)(this, 19, a2) != 1 ) /*0x41941c*/
            return 1; /*0x41941c*/
          *a4 = (void *)this; /*0x41941e*/
          if ( (*(int (__thiscall **)(int, int, void **, _DWORD *))(this->isImmobilized)(this, 18, a4, a2) == 1 ) /*0x419431*/
          {
            Member = Team::GetMember((_DWORD *)this, 0); /*0x419450*/
            (*(void (__thiscall **)(int))(*(_DWORD *)Member + 336))(Member); /*0x419459*/
            return 1; /*0x41945f*/
          }
          else
          {
            (*(void (__thiscall **)(int, int, _DWORD *))(this->temporalTargetingMe)(this, 3, a2); /*0x41943a*/
            return 1; /*0x419443*/
          }
        case 15:
          if ( !*(_DWORD *)(*(_DWORD *)(this + 1732) + 1504) /*0x419492*/
            || !a2
            || !Object::IsAlliedWithObjectHouse(*(_DWORD **)(this + 540), (int)a2) )
          {
            goto LABEL_3; /*0x419499*/
          }
          v16 = (*(_DWORD *)(this + 276) >= *(_DWORD *)(*(_DWORD *)(this + 1732) + 1504)) - 1; /*0x4194b9*/
          LOBYTE(v16) = v16 & 0xF7; /*0x4194bb*/
          return v16 + 10; /*0x4194c2*/
        case 18:
          FootClass::MissionDispatch((int *)this, a2, a3, a4); /*0x4191ff*/
          v8 = *a4; /*0x419204*/
          if ( *a4 && (*(int (__thiscall **)(void *))(*(_DWORD *)v8 + 44))(v8) == 6 ) /*0x419214*/
          {
            v9 = *(_DWORD *)this; /*0x419216*/
            v10 = AbstractClass::IsTechnoType(v8); /*0x41921a*/
            if ( (*(int (__thiscall **)(int, int, void *))(v9 + 632))(this, 15, v10) != 1 ) /*0x41922d*/
              return 10; /*0x419238*/
            (*(void (__thiscall **)(int, int, _DWORD))(this->q7A0)(this, 7, 0); /*0x419241*/
          }
          else
          {
            (*(void (__thiscall **)(int, int, _DWORD))(this->q7A0)(this, 2, 0); /*0x41924b*/
          }
          (*(void (__thiscall **)(int, void *, int))(this->q120)(this, v8, 1); /*0x419258*/
          (*(void (__thiscall **)(int))(this->disguiseBlinkTimer)(this); /*0x419262*/
          result = 1; /*0x41926b*/
          break; /*0x419271*/
        case 19:
          FootClass::MissionDispatch((int *)this, a2, a3, a4); /*0x419281*/
          if ( !*(_DWORD *)(this + 1652) ) /*0x419286*/
            WinAPI::Wrapper(-2147467261); /*0x419295*/
          if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) ) /*0x4192a3*/
            return 1; /*0x4192a3*/
          v11 = *(_DWORD *)(this + 1444); /*0x4192ae*/
          if ( !v11 ) /*0x4192b6*/
            return 1; /*0x4192b6*/
          if ( *(_BYTE *)(*(_DWORD *)(this + 1732) + 3597) /*0x4192ee*/
            && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 11
            && *(_DWORD *)(this + 1444) == (*(int (__thiscall **)(int))(this->q1BC)(this) )
          {
            return 1; /*0x4192f7*/
          }
          else
          {
            return 10; /*0x41951f*/
          }
        case 21:
          v12 = *(_DWORD *)(this + 1732); /*0x419300*/
          if ( *(_DWORD *)(this + 276) == *(_DWORD *)(v12 + 1504) ) /*0x419312*/
            Timer::StartDouble((_BYTE *)(this + 848), *(double *)(v12 + 968)); /*0x419328*/
          if ( a2 )
          {
            v13 = (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2) == 15 ? a2 : 0;
            if ( v13 ) /*0x419347*/
            {
              if ( *(_BYTE *)(v13[432] + 3777) && !*((_BYTE *)v13 + 1753) ) /*0x419359*/
              {
                (*(void (__thiscall **)(int, _DWORD))(this->unknown_short_3C8)(this, 0); /*0x419369*/
                (*(void (__thiscall **)(int, _DWORD, int))(this->q120)(this, 0, 1); /*0x419377*/
                (*(void (__thiscall **)(int, int, _DWORD))(this->q7A0)(this, 4, 0); /*0x419385*/
              }
            }
          }
          return 5; /*0x419394*/
        case 23:
          (*(void (__thiscall **)(int, int, _DWORD))(this->q7A0)(this, 2, 0); /*0x4191b7*/
          v6 = *(_DWORD *)this; /*0x4191bd*/
          ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((int *)this); /*0x4191c3*/
          (*(void (__thiscall **)(int, void *, int))(v6 + 1152))(this, ClosestPlacementCell, 1); /*0x4191cb*/
          (*(void (__thiscall **)(int, int))(this->temporalUsing)(this, 3); /*0x4191d7*/
          return FootClass::MissionDispatch((int *)this, a2, a3, a4); /*0x4191d7*/
        case 29:
          if ( *(_DWORD *)(this + 692) )
            return 10; /*0x419160*/
          else
            return *(_DWORD *)(*(_DWORD *)(this + 1732) + 1668) != *(_DWORD *)(this + 764) ? 10 : 1;
        case 31:
          if ( *(_DWORD *)(this + 764) >= *(_DWORD *)(*(_DWORD *)(this + 1732) + 1668) / 2 && *(_DWORD *)(this + 692) ) /*0x419124*/
            return 1; /*0x419131*/
          else
            return FootClass::MissionDispatch((int *)this, a2, a3, a4); /*0x419147*/
        case 33:
          return *(_DWORD *)(*(_DWORD *)(this + 1732) + 1668) != *(_DWORD *)(this + 764) ? 10 : 1;
        default:
          return FootClass::MissionDispatch((int *)this, a2, a3, a4); /*0x4191ef*/
      }
      break; /*0x4191ef*/
  }
  return result; /*0x4190dd*/
}


// ==== 0x004195A0  TechnoClass::FindNearbyBuildCell  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_4195A0(void *this, int a2, __int16 *a3)
{
  _DWORD *v4; // eax
  int *v5; // ebx
  int v6; // ebp
  int v7; // edi
  int v8; // ecx
  int *v9; // eax
  int v10; // kr08_4
  int v11; // eax
  void *v12; // eax
  __int16 v14; // [esp+12h] [ebp-Eh]
  _BYTE v15[12]; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+28h] [ebp+8h]

  *(_DWORD *)a3 = MEMORY[0x889E68]; /*0x4195b0*/
  v4 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(this->q048)(this, v15); /*0x4195b9*/
  v5 = dword_817A78; /*0x4195be*/
  v6 = *v4 / 256; /*0x4195de*/
  v7 = v4[1] / 256; /*0x4195e1*/
  v14 = v7; /*0x4195e4*/
  while ( 1 ) /*0x4195ec*/
  {
    v8 = *v5 & 7; /*0x4195ec*/
    LOWORD(v16) = v6 + LOWORD(MEMORY[0x89F688][v8]); /*0x419605*/
    HIWORD(v16) = v7 + HIWORD(MEMORY[0x89F688][v8]); /*0x41960d*/
    *(_DWORD *)a3 = v16; /*0x419616*/
    if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], a3) ) /*0x41961d*/
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
    v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a3); /*0x419674*/
    if ( !Cell::IsBuildable((int)v12, 0, 0, 0, -1, 0, -1, 1) ) /*0x41967b*/
    {
      LOWORD(v7) = v14; /*0x419684*/
      goto LABEL_7; /*0x419684*/
    }
  }
  return 0; /*0x419698*/
}


// ==== 0x004196B0  AircraftClass::ValidateLandingCell  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::ValidateLandingCell(int this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // ecx
  int v8; // esi
  _DWORD *v10; // eax
  _BYTE v11[12]; // [esp+Ch] [ebp-Ch] BYREF

  v7 = *(_DWORD *)(this + 1492); /*0x4196bc*/
  if ( v7 && TechnoClass::IsWaypointHidden(v7) && !Type::CheckAmbiguity(&MEMORY[0x87F7E8], (int)a2, 1) ) /*0x4196d7*/
    return 0; /*0x4196d7*/
  v8 = a2[57]; /*0x4196e4*/
  if ( (!v8 /*0x41974d*/
     || (*(_BYTE *)(v8 + 20) & 1) == 0
     || (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v8 + 540), *(#375 **)(this + 540))
     || *(_DWORD *)(v8 + 544) != 2
     && !MEMORY[0xA8E7AC]
     && ((*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8) != 6 || !*(_BYTE *)(*(_DWORD *)(v8 + 1312) + 3226)))
    && !Cell::IsBuildable((int)a2, 4, 0, 0, -1, 0, -1, 1) )
  {
    return 7; /*0x419761*/
  }
  if ( MEMORY[0xA8B238][0] ) /*0x41976b*/
    return 0; /*0x41976b*/
  if ( !*(_BYTE *)(this + 1050) ) /*0x41976d*/
    return 0; /*0x41976d*/
  if ( *(_BYTE *)(this + 980) ) /*0x419777*/
    return 0; /*0x419777*/
  v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 72))(a2, v11); /*0x41978a*/
  if ( !Cell::IsPassable(v10) ) /*0x419793*/
    return 0; /*0x4197ac*/
  else
    return 7; /*0x41979e*/
}


// ==== 0x004197C0  ObjectClass::FindSpiralMoveTarget  this=TechnoClass  sig=csp ====
void *__thiscall FindSpiralMoveTarget(void **this, ObjectClass *aP1)
{
  ObjectClass *v4; // edi
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int *v8; // eax
  __int16 v9; // cx
  ObjectClass *v10; // edi
  unsigned int v11; // ebx
  double v12; // st7
  int v13; // esi
  double v14; // st7
  int v15; // edi
  TechnoClass *v16; // ebx
  double v17; // rdi
  double v18; // st7
  double v19; // st6
  int *v20; // eax
  int v21; // ecx
  double v22; // st7
  TechnoClass *v23; // eax
  BuildingTypeClass *v24; // ecx
  BuildingTypeClass *v25; // [esp+28h] [ebp-7Ch] BYREF
  TechnoClass *v26; // [esp+2Ch] [ebp-78h]
  BuildingTypeClass *v27; // [esp+30h] [ebp-74h] BYREF
  int v28; // [esp+34h] [ebp-70h]
  int v29; // [esp+38h] [ebp-6Ch]
  BuildingTypeClass *v30; // [esp+3Ch] [ebp-68h] BYREF
  BuildingTypeClass *v31; // [esp+40h] [ebp-64h]
  void **v32; // [esp+44h] [ebp-60h]
  BuildingTypeClass *v33; // [esp+48h] [ebp-5Ch]
  double v34; // [esp+4Ch] [ebp-58h]
  double v35; // [esp+54h] [ebp-50h]
  int v36; // [esp+5Ch] [ebp-48h]
  int v37; // [esp+60h] [ebp-44h]
  double v38; // [esp+64h] [ebp-40h]
  double v39[2]; // [esp+6Ch] [ebp-38h] BYREF
  double v40; // [esp+7Ch] [ebp-28h]
  int v41; // [esp+84h] [ebp-20h]
  int v42; // [esp+8Ch] [ebp-18h] BYREF
  int v43; // [esp+90h] [ebp-14h]
  int v44; // [esp+94h] [ebp-10h]
  char v45[12]; // [esp+98h] [ebp-Ch] BYREF

  v32 = this; /*0x4197d3*/
  if ( !aP1 ) /*0x4197d7*/
    return 0; /*0x4197d7*/
  if ( (*((int (__stdcall **)(void **))this->airstrikeTimer + 6))(this + 432) ) /*0x4197ea*/
    return aP1; /*0x4197f9*/
  v4 = (ObjectClass *)(*((int (__thiscall **)(void **, _DWORD))*this + 90))(this, 0); /*0x41980c*/
  v5 = (*(int (__thiscall **)(ObjectClass *, int *))(*(_DWORD *)aP1->__pad_0 + 72))(aP1, &v42); /*0x419813*/
  v40 = *(double *)v5; /*0x419818*/
  v6 = *(_DWORD *)(v5 + 8); /*0x419829*/
  v27 = *(BuildingTypeClass **)&MEMORY[0x87F8E4].__pad_5568[20508]; /*0x419831*/
  v30 = *(BuildingTypeClass **)&MEMORY[0x87F8E4].__pad_5568[20508]; /*0x419835*/
  v41 = v6; /*0x41983c*/
  v26 = (TechnoClass *)-1; /*0x419846*/
  v33 = (BuildingTypeClass *)-1; /*0x41984a*/
  v42 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[20540]; /*0x419853*/
  LOBYTE(v5) = aP1->abstractFlags; /*0x419857*/
  v43 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[20544]; /*0x41985c*/
  v44 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[20548]; /*0x419860*/
  if ( (v5 & 4) != 0 ) /*0x419864*/
  {
    v7 = aP1[8].ambientSoundController[2]; /*0x419866*/
    if ( v7 ) /*0x41986e*/
    {
      v8 = (int *)(*(int (__thiscall **)(int, double *))(*(_DWORD *)v7 + 72))(v7, v39); /*0x419877*/
      v42 = *v8; /*0x41987c*/
      v43 = v8[1]; /*0x419883*/
      v44 = v8[2]; /*0x41988a*/
    }
  }
  v29 = (int)&v4[-2].customSound_controller[2]; /*0x419899*/
  if ( (int)&v4[-2].customSound_controller[2] <= 256 ) /*0x41989d*/
    goto LABEL_27; /*0x41989d*/
  v39[0] = (double)SHIDWORD(v40); /*0x4198a7*/
  v40 = (double)SLODWORD(v40); /*0x4198af*/
  do /*0x419a87*/
  {
    v28 = 0; /*0x4198b7*/
    v38 = (double)v29; /*0x4198bf*/
    do /*0x419a68*/
    {
      LOBYTE(v9) = 0; /*0x4198c3*/
      HIBYTE(v9) = v28; /*0x4198c5*/
      LODWORD(v34) = v9 - 0x3FFF; /*0x4198d2*/
      v34 = (double)SLODWORD(v34) * -0.00009587672516830327; /*0x4198e0*/
      v10 = (ObjectClass *)HIDWORD(v34); /*0x4198e4*/
      v11 = LODWORD(v34); /*0x4198e8*/
      v12 = Math::SinCos(v34); /*0x4198ee*/
      v13 = Math::RoundToInt(v39[0] - v12 * v38); /*0x419902*/
      v14 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__((unsigned int)v10, v11))); /*0x419904*/
      v15 = Math::RoundToInt(v14 * v38 + v40); /*0x419919*/
      LOWORD(v31) = v15 / 256; /*0x41992e*/
      HIWORD(v31) = v13 / 256; /*0x419946*/
      v25 = v31; /*0x41994f*/
      if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&v25, (TechnoClass *)1) ) /*0x419953*/
      {
        v16 = (TechnoClass *)v32; /*0x419965*/
        if ( MEMORY[0xA8B238] /*0x41998d*/
          || *((_BYTE *)v32 + 980)
          || (*((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25) + 300) & 0x10) != 0 )
        {
          if ( Cell::IsOccupied((void **)v16, (__int16 *)&v25, 1) ) /*0x41999c*/
          {
            if ( v42 == *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[20540] /*0x4199d1*/
              && v43 == *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[20544]
              && v44 == *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[20548] )
            {
              v20 = (int *)(*(int (__thiscall **)(TechnoClass *, char *))(*(_DWORD *)v16->__pad_0 + 72))(v16, v45); /*0x4199f6*/
              v21 = *v20; /*0x4199f9*/
              v37 = v20[1] - v13; /*0x419a02*/
              v36 = v21 - v15; /*0x419a06*/
              v18 = (double)v37; /*0x419a0a*/
              v19 = (double)(v21 - v15); /*0x419a0e*/
            }
            else
            {
              LODWORD(v17) = v15 - v42; /*0x4199d7*/
              HIDWORD(v17) = v13 - v43; /*0x4199d9*/
              v35 = v17; /*0x4199db*/
              v18 = (double)SHIDWORD(v17); /*0x4199e3*/
              v19 = (double)SLODWORD(v17); /*0x4199e7*/
            }
            v22 = Math::Sqrt(v19 * v19 + v18 * v18); /*0x419a26*/
            v23 = (TechnoClass *)Math::RoundToInt(v22); /*0x419a2e*/
            v24 = (BuildingTypeClass *)v26; /*0x419a33*/
            if ( v26 == (TechnoClass *)-1 || (int)v23 < (int)v26 ) /*0x419a3e*/
            {
              v26 = v23; /*0x419a44*/
              v33 = v24; /*0x419a4c*/
              v30 = v27; /*0x419a50*/
              v27 = v25; /*0x419a54*/
            }
          }
        }
      }
      v28 += 16; /*0x419a64*/
    }
    while ( v28 < 255 ); /*0x419a68*/
    if ( v26 != (TechnoClass *)-1 ) /*0x419a73*/
      break; /*0x419a73*/
    v29 -= 256; /*0x419a83*/
  }
  while ( v29 > 256 ); /*0x419a87*/
  if ( v33 == (BuildingTypeClass *)-1 ) /*0x419a92*/
LABEL_27:
    v30 = v27; /*0x419a98*/
  if ( v26 == (TechnoClass *)-1 ) /*0x419aa1*/
    return 0; /*0x419aef*/
  if ( Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x63) >= 50 ) /*0x419abb*/
    return CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v30); /*0x419adf*/
  return CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v27); /*0x4197f3*/
}


// ==== 0x00419B00  Cell::IsOccupied  this=IUnknown  sig=csp ====
char __thiscall Cell_IsOccupied(void **this, __int16 *a2, char a3)
{
  _DWORD *v5; // eax
  _DWORD *ClosestObject; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  void **v10; // esi
  _WORD *v11; // eax
  void *v14; // [esp+10h] [ebp-Ch]
  _DWORD v15[2]; // [esp+14h] [ebp-8h] BYREF
  char v16; // [esp+20h] [ebp+4h]

  if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], a2, 1) ) /*0x419b18*/
    return 1; /*0x419b18*/
  if ( *((_BYTE *)this->q1B1 + 3412) ) /*0x419b2b*/
  {
    v15[0] = 0; /*0x419b44*/
    v15[1] = 0; /*0x419b4c*/
    v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2); /*0x419b54*/
    ClosestObject = (_DWORD *)Object::FindClosestObjectCell(v5, v15, 0, 0); /*0x419b5b*/
    if ( ClosestObject ) /*0x419b62*/
    {
      if ( ClosestObject[180] /*0x419b7c*/
        || *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*ClosestObject + 132))(ClosestObject) + 3412) )
      {
        return 1; /*0x419b7c*/
      }
    }
  }
  v7 = (int)this->q1B1; /*0x419b8a*/
  if ( *(_BYTE *)(v7 + 3597) ) /*0x419b90*/
    return 1; /*0x419b90*/
  if ( !*(_BYTE *)(v7 + 3580) /*0x419bbf*/
    || (v8 = (int)this->q169) == 0
    || (v16 = 1, (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8) != 1) )
  {
    v16 = 0; /*0x419bc1*/
  }
  v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2); /*0x419bd1*/
  v9 = 0; /*0x419bda*/
  if ( MEMORY[0x8B3DD0] <= 0 ) /*0x419bde*/
    return 1; /*0x419c6b*/
  while ( 1 ) /*0x419bea*/
  {
    v10 = (void **)*((_DWORD *)MEMORY[0x8B3DC4] + v9); /*0x419bea*/
    if ( v10 && (!v16 || this->q169 != v10) && (a3 || v10 != this) && !*((_BYTE *)v10 + 129) && *((_BYTE *)v10 + 116) ) /*0x419c1d*/
    {
      v11 = (_WORD *)(*((int (__thiscall **)(void **, _DWORD *))*v10 + 110))(v10, v15); /*0x419c2d*/
      if ( *v11 == *a2 && v11[1] == a2[1] ) /*0x419c44*/
        break; /*0x419c44*/
      if ( v10[361] == v14 ) /*0x419c52*/
        break; /*0x419c52*/
    }
    if ( ++v9 >= MEMORY[0x8B3DD0] ) /*0x419c5c*/
      return 1; /*0x419c5c*/
  }
  return 0; /*0x419c60*/
}


// ==== 0x00419C80  AircraftClass::Mission_Transport  this=AircraftClass  sig=csp ====
int __usercall AircraftClass::Mission_Transport@<eax>(int a1@<ecx>, int a2@<ebp>)
{
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // edx
  int result; // eax
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  int v11; // edi
  int *v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // edx
  int v19; // edi
  int v20; // edx
  int v21; // edx
  int v22; // eax
  int Member; // eax
  int v24; // ebx
  _DWORD *v25; // edi
  int v26; // edi
  void *ClosestPlacementCell; // eax
  _DWORD v28[3]; // [esp+Ch] [ebp-30h] BYREF
  _BYTE v29[12]; // [esp+18h] [ebp-24h] BYREF
  _BYTE v30[20]; // [esp+24h] [ebp-18h] BYREF
  int v31; // [esp+38h] [ebp-4h]

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1)
    || !*(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3597)
    || !*(_DWORD *)(a1 + 1444)
    || (v3 = *(_DWORD **)(a1 + 1444),
        v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1),
        v3 == Cell::IsBridge(v4)) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1) > 0 )
    {
      v8 = *(_DWORD *)(a1 + 1444); /*0x419d19*/
      if ( *(_DWORD *)(a1 + 1740) != v8 && v8 && (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8) == 6 )
      {
        v9 = *(_DWORD *)(a1 + 1444); /*0x419d37*/
        if ( v9 )
          v10 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v9 + 44))(*(_DWORD *)(a1 + 1444)) == 6 ? v9 : 0;
        else
          v10 = 0; /*0x419d41*/
        *(_DWORD *)(a1 + 1740) = v10; /*0x419d57*/
      }
    }
    if ( *(_DWORD *)(a1 + 1444) /*0x419d86*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 120))(a1) == 2
      || (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 14) == 1
      || TechnoClass::PlaceAtCell((int *)a1) )
    {
      switch ( *(_DWORD *)(a1 + 188) ) /*0x419dbc*/
      {
        case 0: /*0x419dbc*/
          *(_DWORD *)(a1 + 188) = 6; /*0x419dc3*/
          goto LABEL_24; /*0x419dc3*/
        case 1: /*0x419dbc*/
        case 2: /*0x419dbc*/
        case 3: /*0x419dbc*/
        case 4: /*0x419dbc*/
        case 5: /*0x419dbc*/
LABEL_24:
          *(_BYTE *)(a1 + 1748) = 1; /*0x419dcd*/
          return 1; /*0x419ddf*/
        case 6: /*0x419dbc*/
          if ( *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3597) && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1) ) /*0x419df4*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 14); /*0x419e04*/
          if ( Team::AllMembersValid((int *)a1) ) /*0x419e0c*/
          {
            if ( !*(_DWORD *)(a1 + 1652) ) /*0x419eaa*/
              WinAPI::Wrapper(-2147467261); /*0x419eb9*/
            if ( (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 144))(*(_DWORD *)(a1 + 1652)) == 1 /*0x419ee6*/
              || *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3597) && !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1) )
            {
              *(_DWORD *)(a1 + 188) = 7; /*0x419ef0*/
              *(_BYTE *)(a1 + 1748) = 0; /*0x419ef6*/
            }
            result = 3; /*0x419eff*/
          }
          else
          {
            if ( !TechnoClass::PlaceAtCell((int *)a1) ) /*0x419e1b*/
            {
              if ( !*(_DWORD *)(a1 + 1652) ) /*0x419e24*/
                WinAPI::Wrapper(-2147467261); /*0x419e33*/
              if ( (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 144))(*(_DWORD *)(a1 + 1652)) == 1 ) /*0x419e4a*/
              {
                *(_DWORD *)(a1 + 188) = 7; /*0x419e4c*/
                *(_BYTE *)(a1 + 1748) = 1; /*0x419e52*/
              }
              if ( *(_DWORD *)(a1 + 180) == -1 ) /*0x419e5f*/
              {
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1152))(a1, 0, 1); /*0x419e69*/
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1156))(a1, 0, 1); /*0x419e77*/
                *(_BYTE *)(a1 + 1748) = 1; /*0x419e7d*/
                return 1; /*0x419e8f*/
              }
              *(_BYTE *)(a1 + 1748) = 1; /*0x419e90*/
            }
            *(_BYTE *)(a1 + 1748) = 1; /*0x419e97*/
            result = 1; /*0x419ea0*/
          }
          break; /*0x419ea9*/
        case 7: /*0x419dbc*/
          if ( !*(_DWORD *)(a1 + 1652) ) /*0x419f09*/
            WinAPI::Wrapper(-2147467261); /*0x419f18*/
          if ( (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 144))(*(_DWORD *)(a1 + 1652)) == 1 ) /*0x419f2f*/
          {
            v11 = *(_DWORD *)(a1 + 1444); /*0x419f35*/
            if ( v11 ) /*0x419f3d*/
            {
              if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v11 + 44))(*(_DWORD *)(a1 + 1444)) == 6 ) /*0x419f4d*/
                v12 = (int *)(*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v11 + 168))(v11, v29, a1); /*0x419f59*/
              else
                v12 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(a1 + 1444) + 72))( /*0x419f6e*/
                               *(_DWORD *)(a1 + 1444),
                               v30);
              v13 = *v12; /*0x419f71*/
              v14 = v12[1]; /*0x419f73*/
              v31 = v12[2]; /*0x419f79*/
              v15 = *(_DWORD *)(a1 + 156); /*0x419f85*/
              v16 = v13 - v15; /*0x419f87*/
              v17 = *(_DWORD *)(a1 + 160); /*0x419f89*/
              v18 = v14 - v17; /*0x419f8c*/
              v28[2] = *(_DWORD *)(a1 + 164); /*0x419f93*/
              if ( v16 <= 0 ) /*0x419f97*/
              {
                if ( v16 < -5 ) /*0x419fa8*/
                  v16 = -5; /*0x419faa*/
              }
              else if ( v16 > 5 ) /*0x419f9c*/
              {
                v16 = 5; /*0x419f9e*/
              }
              if ( v18 <= 0 ) /*0x419fb1*/
              {
                if ( v18 < -5 ) /*0x419fc2*/
                  v18 = -5; /*0x419fc4*/
              }
              else if ( v18 > 5 ) /*0x419fb6*/
              {
                v18 = 5; /*0x419fb8*/
              }
              v19 = v18 + v17; /*0x419fcb*/
              v20 = *(_DWORD *)a1; /*0x419fcd*/
              v28[0] = v16 + v15; /*0x419fcf*/
              v28[1] = v19; /*0x419fda*/
              (*(void (__thiscall **)(int, _DWORD *))(v20 + 436))(a1, v28); /*0x419fde*/
            }
            *(_BYTE *)(a1 + 1748) = 1; /*0x419fe4*/
            return 1; /*0x419fed*/
          }
          else
          {
            v21 = *(_DWORD *)a1; /*0x419ff7*/
            *(_BYTE *)(a1 + 1748) = 1; /*0x419ffd*/
            v22 = (*(int (__thiscall **)(int, int))(v21 + 628))(a1, 21) - 1; /*0x41a00a*/
            if ( v22 ) /*0x41a00b*/
            {
              if ( v22 == 4 ) /*0x41a010*/
              {
                (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 212))(a1); /*0x41a030*/
                Member = Team::GetMember((_DWORD *)a1, 0); /*0x41a03b*/
                CellClass::AddObject((_DWORD *)(Member + 276), (_DWORD *)a1); /*0x41a048*/
              }
              else
              {
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1156))(a1, 0, 1); /*0x41a01a*/
              }
              return 1; /*0x41a022*/
            }
            else if ( *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3580) && *(_DWORD *)(a1 + 280) ) /*0x41a06d*/
            {
              v24 = Team::GetMember((_DWORD *)a1, 0); /*0x41a08b*/
              v25 = (_DWORD *)LinkedList::Pop((_DWORD *)(a1 + 276)); /*0x41a09a*/
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 628))(a1, 3, a2); /*0x41a09c*/
              if ( (*(int (__thiscall **)(_DWORD *, int, int))(*v25 + 632))(v25, 2, v24) == 1 ) /*0x41a0b2*/
              {
                CellClass::AddObject((_DWORD *)(a1 + 276), v25); /*0x41a0b7*/
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 292))(a1, 0); /*0x41a0c2*/
                FootClass::MissionMoveCarryallLand((int *)a1); /*0x41a0ca*/
                (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 292))(a1, 1); /*0x41a0d5*/
              }
              else
              {
                v26 = *(_DWORD *)a1; /*0x41a0f6*/
                ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((int *)a1); /*0x41a0fc*/
                (*(void (__thiscall **)(int, void *))(v26 + 1152))(a1, ClosestPlacementCell); /*0x41a104*/
              }
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 488))(a1, 2, 0); /*0x41a0e3*/
              return 1; /*0x41a0ec*/
            }
            else
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 488))(a1, 5, 0); /*0x41a12d*/
              return 1; /*0x41a133*/
            }
          }
        default:
          return 1;
      }
    }
    else
    {
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1156))(a1, 0, 1); /*0x419d97*/
      return 1; /*0x419d9f*/
    }
  }
  else
  {
    if ( v3 )
      v5 = (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3) == 6 ? v3 : 0;
    else
      v5 = 0; /*0x419cc9*/
    v6 = *(_DWORD *)a1; /*0x419cdf*/
    *(_DWORD *)(a1 + 1740) = v5; /*0x419ce5*/
    (*(void (__thiscall **)(int, int))(v6 + 628))(a1, 3); /*0x419ceb*/
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 488))(a1, 2, 1); /*0x419cf9*/
    return 1; /*0x419d01*/
  }
  return result; /*0x419cff*/
}


// ==== 0x0041A160  TechnoClass::FindClosestPlacementCell  this=IUnknown  sig=csp ====
void *__thiscall TechnoClass_FindClosestPlacementCell(int *this)
{
  int v2; // eax
  int v3; // esi
  _DWORD *v4; // ebp
  _DWORD *v5; // eax
  int *v6; // eax
  int v7; // ebp
  int TileIndex; // eax
  int v9; // eax
  int v10; // eax
  __int16 *v11; // eax
  __int64 v12; // rax
  int v14; // eax
  int *v15; // eax
  int *v16; // esi
  _DWORD *v17; // ebp
  _DWORD *v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  double v23; // st7
  int v24; // ebp
  int v25; // eax
  int v26; // eax
  int *v27; // edi
  int v28; // [esp-20h] [ebp-90h]
  int v29; // [esp+20h] [ebp-50h]
  int v30; // [esp+24h] [ebp-4Ch]
  int v31; // [esp+24h] [ebp-4Ch]
  int v32; // [esp+28h] [ebp-48h] BYREF
  int v33; // [esp+2Ch] [ebp-44h] BYREF
  __int16 v34; // [esp+30h] [ebp-40h] BYREF
  __int16 v35; // [esp+32h] [ebp-3Eh]
  int v36; // [esp+34h] [ebp-3Ch] BYREF
  int v37; // [esp+38h] [ebp-38h] BYREF
  int v38; // [esp+3Ch] [ebp-34h] BYREF
  int v39; // [esp+40h] [ebp-30h] BYREF
  int v40; // [esp+44h] [ebp-2Ch]
  int v41; // [esp+48h] [ebp-28h]
  char v42[12]; // [esp+4Ch] [ebp-24h] BYREF
  _BYTE v43[12]; // [esp+58h] [ebp-18h] BYREF
  _DWORD v44[3]; // [esp+64h] [ebp-Ch] BYREF

  v33 = 0; /*0x41a171*/
  v29 = -1; /*0x41a189*/
  if ( *(int *)(this->q1B1 + 1016) > 0 ) /*0x41a197*/
  {
    v2 = 0; /*0x41a1a3*/
    v30 = 0; /*0x41a1a5*/
    v36 = *(_DWORD *)(this->q21C + 120); /*0x41a1ae*/
    if ( v36 > 0 ) /*0x41a1b2*/
    {
      do /*0x41a2f9*/
      {
        v3 = *(_DWORD *)(*(_DWORD *)(this->q21C + 108) + 4 * v2); /*0x41a1c1*/
        if ( v3 && !*(_BYTE *)(v3 + 129) ) /*0x41a1cc*/
        {
          v4 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v3 + 72))(v3, v42); /*0x41a1e6*/
          v5 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 72))(this, v43); /*0x41a1ef*/
          v6 = Coord::Subtract(v44, *v5 - *v4, v5[1] - v4[1], v5[2] - v4[2]); /*0x41a210*/
          v39 = *v6; /*0x41a217*/
          v40 = v6[1]; /*0x41a222*/
          v41 = v6[2]; /*0x41a229*/
          v7 = Coord::Length(&v39); /*0x41a238*/
          if ( *(_DWORD *)(v3 + 1312) == **(_DWORD **)(this->q1B1 + 1004) ) /*0x41a248*/
            v7 /= 4; /*0x41a255*/
          if ( v29 == -1 || v7 < v29 ) /*0x41a262*/
          {
            v32 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v3 + 440))(v3, &v37); /*0x41a287*/
            v34 = 0; /*0x41a2a0*/
            v35 = 0; /*0x41a2a5*/
            TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v32, 0, 0); /*0x41a2aa*/
            v9 = *LayerClass::Pathfinding_Find( /*0x41a2c5*/
                    &MEMORY[0x87F7E8],
                    (int)&v38,
                    &v38,
                    (__int16 *)&v32,
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
                    &v34,
                    0,
                    0);
            v32 = v9; /*0x41a2ce*/
            if ( v9 != MEMORY[0x889E68] ) /*0x41a2d2*/
            {
              v29 = v7; /*0x41a2e2*/
              v33 = v9; /*0x41a2e6*/
            }
          }
        }
        v2 = ++v30; /*0x41a2f2*/
      }
      while ( v30 < v36 ); /*0x41a2f9*/
      if ( v29 != -1 ) /*0x41a306*/
      {
        if ( v29 < 256 ) /*0x41a311*/
        {
          v10 = *this; /*0x41a327*/
          v34 = 0; /*0x41a334*/
          v35 = 0; /*0x41a339*/
          v11 = (__int16 *)(*(int (__thiscall **)(int *, int *))(v10 + 440))(this, &v38); /*0x41a33e*/
          v28 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], v11, 0, 0); /*0x41a351*/
          v12 = ((__int64 (__thiscall *)(int *, int *))*(_DWORD *)(*this + 440))(this, &v37); /*0x41a35a*/
          v36 = *LayerClass::Pathfinding_Find( /*0x41a37c*/
                   &MEMORY[0x87F7E8],
                   SHIDWORD(v12),
                   &v32,
                   (__int16 *)v12,
                   0,
                   v28,
                   0,
                   0,
                   1,
                   1,
                   0,
                   0,
                   0,
                   1,
                   &v34,
                   0,
                   0);
          return CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v36); /*0x41a38c*/
        }
        return CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v33); /*0x41a311*/
      }
    }
  }
  v14 = 0; /*0x41a3aa*/
  v31 = 0; /*0x41a3ae*/
  if ( MEMORY[0xA8E370] > 0 ) /*0x41a3b2*/
  {
    do /*0x41a50f*/
    {
      v15 = (int *)AbstractClass::IsTechnoType(*((void **)MEMORY[0xA8E364] + v14)); /*0x41a3c1*/
      v16 = v15; /*0x41a3c6*/
      if ( v15 ) /*0x41a3ca*/
      {
        if ( !*((_BYTE *)v15 + 129) && v15[135] == this->q21C && v15 != this ) /*0x41a3f2*/
        {
          v17 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*v15 + 72))(v15, v44); /*0x41a406*/
          v18 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 72))(this, v43); /*0x41a40f*/
          v19 = *v18 - *v17; /*0x41a417*/
          v20 = v18[1]; /*0x41a419*/
          v21 = v18[2]; /*0x41a41c*/
          v39 = v19; /*0x41a41f*/
          v22 = v17[2]; /*0x41a42b*/
          v40 = v20 - v17[1]; /*0x41a42e*/
          v41 = v21 - v22; /*0x41a438*/
          v23 = Math::Sqrt((double)v39 * (double)v39 + (double)(v21 - v22) * (double)(v21 - v22) + (double)v40 /*0x41a45d*/
                                                                                                 * (double)v40);
          v24 = Math::RoundToInt(v23); /*0x41a46a*/
          if ( v29 == -1 || v24 < v29 ) /*0x41a477*/
          {
            v32 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(*v16 + 440))(v16, &v38); /*0x41a49b*/
            v34 = 0; /*0x41a4b4*/
            v35 = 0; /*0x41a4b9*/
            v25 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v32, 0, 0); /*0x41a4be*/
            v26 = *LayerClass::Pathfinding_Find( /*0x41a4d9*/
                     &MEMORY[0x87F7E8],
                     (int)&v37,
                     &v37,
                     (__int16 *)&v32,
                     0,
                     v25,
                     0,
                     0,
                     1,
                     1,
                     0,
                     0,
                     0,
                     1,
                     &v34,
                     0,
                     0);
            v32 = v26; /*0x41a4e2*/
            if ( v26 != MEMORY[0x889E68] ) /*0x41a4e6*/
            {
              v29 = v24; /*0x41a4f6*/
              v33 = v26; /*0x41a4fa*/
            }
          }
        }
      }
      v14 = ++v31; /*0x41a508*/
    }
    while ( v31 < MEMORY[0xA8E370] ); /*0x41a50f*/
    if ( v29 != -1 ) /*0x41a51a*/
      return CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v33); /*0x41a532*/
  }
  v27 = this + 39; /*0x41a533*/
  v39 = *v27; /*0x41a53b*/
  v40 = v27[1]; /*0x41a547*/
  v41 = v27[2]; /*0x41a553*/
  return Coord::To_Cell(&MEMORY[0x87F7E8], &v39); /*0x41a385*/
}


// ==== 0x0041A570  TechnoClass::GetTurretFacing  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::sub_41A570(_WORD *this, _DWORD *a2)
{
  int v2; // ecx
  _WORD *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x41a570*/
  v2 = *ProgressTimer::GetValue(this + 464, &v4); /*0x41a581*/
  *a2 = v2; /*0x41a587*/
  return a2; /*0x41a58a*/
}


// ==== 0x0041A590  AircraftClass::CheckLandingClearance  this=AircraftClass  sig=csp ====
char *__thiscall AircraftClass::_vt93(_DWORD *this, int a2, int a3, int a4)
{
  char *result; // eax

  result = MissionClass::GetMissionControl(this); /*0x41a593*/
  if ( result[9] ) /*0x41a598*/
    return (char *)(*(int (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x41a5a7*/
  return result; /*0x41a5ad*/
}


// ==== 0x0041A5C0  AircraftClass::GetMissionTimer  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::GetMissionTimer(int this)
{
  int v2; // edi
  int v3; // eax
  char *MissionControl; // eax
  int v6; // edi
  void *v7; // eax
  int v8; // eax
  int v9; // ecx
  int Member; // eax
  int v11; // edi
  int v12; // eax
  char *v13; // eax
  int v14; // esi
  int v15; // [esp+8h] [ebp-Ch] BYREF
  int v16; // [esp+Ch] [ebp-8h]
  int v17; // [esp+10h] [ebp-4h]

  v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1732) + 188))(*(_DWORD *)(this + 1732)); /*0x41a5d9*/
  if ( (*(int (__thiscall **)(int))(this->forceShielded)(this) == v2 ) /*0x41a5e3*/
  {
    if ( *(_DWORD *)(this + 1492) ) /*0x41a5e9*/
    {
      if ( *(_DWORD *)(this + 1444) ) /*0x41a5f3*/
      {
        v3 = *(_DWORD *)this; /*0x41a5fd*/
        *(_BYTE *)(this + 1748) = 1; /*0x41a605*/
        (*(void (__thiscall **)(int, int, _DWORD))(v3 + 488))(this, 2, 0); /*0x41a60c*/
      }
      MissionControl = MissionClass::GetMissionControl((_DWORD *)this); /*0x41a614*/
      return Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x41a622*/
    }
    else if ( *(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(this->barrelRecoil)(this, 0) ) /*0x41a639*/
    {
      if ( !*(_DWORD *)(this + 1492) ) /*0x41a68d*/
      {
        v8 = *(_DWORD *)this; /*0x41a697*/
        *(_BYTE *)(this + 1748) = 1; /*0x41a69f*/
        (*(void (__thiscall **)(int, _DWORD, int))(v8 + 1156))(this, 0, 1); /*0x41a6a6*/
      }
      return 1; /*0x41a6ad*/
    }
    else
    {
      v6 = *(_DWORD *)this; /*0x41a644*/
      v15 = *(_DWORD *)(this + 156); /*0x41a64a*/
      v16 = *(_DWORD *)(this + 160); /*0x41a65b*/
      v17 = *(_DWORD *)(this + 164); /*0x41a662*/
      v7 = Coord::To_Cell(&MEMORY[0x87F7E8], &v15); /*0x41a666*/
      (*(void (__thiscall **)(int, void *, int))(v6 + 1152))(this, v7, 1); /*0x41a66e*/
      (*(void (__thiscall **)(int, int, _DWORD))(this->q7A0)(this, 2, 0); /*0x41a67c*/
      return 1; /*0x41a683*/
    }
  }
  if ( MEMORY[0x889ECC] ) /*0x41a6be*/
  {
    if ( *(_DWORD *)(this + 764) || !(*(unsigned __int8 (__thiscall **)(int))(this->isBerserk)(this) ) /*0x41a6d2*/
      goto LABEL_14; /*0x41a6da*/
LABEL_26:
    if ( !Team::AllMembersValid((int *)this) ) /*0x41a7bf*/
    {
      v11 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD))(this->unknownShort528)( /*0x41a7e6*/
              this,
              *(_DWORD *)(this + 1732) + 1000,
              0,
              0);
      if ( v11 ) /*0x41a7ea*/
      {
        (*(void (__thiscall **)(int, int, _DWORD))(this->q7A0)(this, 7, 0); /*0x41a7f8*/
        (*(void (__thiscall **)(int, int, int))(this->q120)(this, v11, 1); /*0x41a805*/
        (*(void (__thiscall **)(int, _DWORD))(this->unknown_short_3C8)(this, 0); /*0x41a811*/
        return 1; /*0x41a821*/
      }
    }
    goto LABEL_14; /*0x41a7ea*/
  }
  if ( MEMORY[0x889ECD] ) /*0x41a75f*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(this->isBerserk)(this) /*0x41a78c*/
      && *(_DWORD *)(this + 764) < *(_DWORD *)(*(_DWORD *)(this + 1732) + 1668) / 2 )
    {
      goto LABEL_26; /*0x41a78c*/
    }
  }
  else if ( (*(unsigned __int8 (__thiscall **)(int))(this->isBerserk)(this) /*0x41a7b7*/
         && *(_DWORD *)(this + 764) < *(_DWORD *)(*(_DWORD *)(this + 1732) + 1668) )
  {
    goto LABEL_26; /*0x41a7b7*/
  }
LABEL_14:
  v9 = *(_DWORD *)(this + 764); /*0x41a6e0*/
  if ( v9 != -1 && v9 < *(_DWORD *)(*(_DWORD *)(this + 1732) + 1668) / 2 ) /*0x41a702*/
  {
    if ( Team::AllMembersValid((int *)this) ) /*0x41a70a*/
    {
      Member = Team::GetMember((_DWORD *)this, 0); /*0x41a71b*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 ) /*0x41a72a*/
      {
        if ( *(_BYTE *)(*(_DWORD *)(Team::GetMember((_DWORD *)this, 0) + 1312) + 5802) ) /*0x41a73f*/
          return 1; /*0x41a74e*/
      }
    }
  }
  if ( *(_DWORD *)(this + 692) ) /*0x41a822*/
  {
    (*(void (__thiscall **)(int, int, _DWORD))(this->q7A0)(this, 1, 0); /*0x41a834*/
    return 1; /*0x41a83b*/
  }
  else if ( (*(unsigned __int8 (__thiscall **)(int))(this->isBerserk)(this) ) /*0x41a849*/
  {
    if ( (*(int (__thiscall **)(int))(this->forceShielded)(this) || Team::AllMembersValid((int *)this) ) /*0x41a86e*/
    {
      if ( !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) ) /*0x41a888*/
      {
        v15 = *(_DWORD *)(this + 156); /*0x41a89d*/
        v16 = *(_DWORD *)(this + 160); /*0x41a8af*/
        v17 = *(_DWORD *)(this + 164); /*0x41a8b6*/
        v12 = CellClass::ScanOccupiers(&v15); /*0x41a8ba*/
        if ( v12 ) /*0x41a8c1*/
        {
          (*(void (__thiscall **)(int, int))(this->unknown_short_3C8)(this, v12); /*0x41a8c8*/
          (*(void (__thiscall **)(int, int, _DWORD))(this->q7A0)(this, 1, 0); /*0x41a8d6*/
        }
      }
      if ( !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) /*0x41a8ef*/
        || (*(unsigned __int8 (__thiscall **)(int))(this->q054)(this) )
      {
        return FootClass::FindMovePosition(this); /*0x41a92b*/
      }
      else
      {
        v13 = MissionClass::GetMissionControl((_DWORD *)this); /*0x41a8f8*/
        v14 = Math::RoundToInt(*((double *)v13 + 2) * 900.0); /*0x41a90b*/
        return v14 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x41a921*/
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
int __thiscall AircraftClass::_vt136(int *this)
{
  int v2; // edi

  v2 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q1B1 + 188))(this->q1B1); /*0x41a956*/
  if ( (*(int (__thiscall **)(int *))(*this + 456))(this) == v2 ) /*0x41a960*/
  {
    if ( !this->q175 ) /*0x41a962*/
      (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x41a974*/
    return 1; /*0x41a97b*/
  }
  else
  {
    if ( !this->q0BF /*0x41a99c*/
      && (*(unsigned __int8 (__thiscall **)(int *))(*this + 684))(this)
      && !Team::AllMembersValid(this) )
    {
      (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x41a9ad*/
    }
    if ( this->q2B4 ) /*0x41a9b3*/
    {
      (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 1, 0); /*0x41a9c5*/
      return 1; /*0x41a9cc*/
    }
    else
    {
      return FootClass::FindAITarget(this); /*0x41a9d5*/
    }
  }
}


// ==== 0x0041A9E0  TechnoClass::CanFireAtTarget  this=TechnoClass  sig=csp ====
int __userpurge TechnoClass::CanFireAtTarget@<eax>(
        int a1@<ecx>,
        TechnoClass *a2@<edx>,
        ObjectClass *aP2,
        int a4,
        IUnknown aP1)
{
  int result; // eax
  int v7; // edi

  result = TriggerTypeClass::ReadINI((_DWORD *)a1, a2, (TechnoClass *)aP2, a4, (TechnoClass *)aP1.field_0); /*0x41a9f6*/
  if ( !result ) /*0x41a9fd*/
  {
    if ( !*(_BYTE *)(a1 + 1737) || *(_DWORD *)(a1 + 280) ) /*0x41aa09*/
    {
      v7 = *ProgressTimer::GetValue((_WORD *)(a1 + 928), &aP1); /*0x41aa2e*/
      if ( (*(int (__stdcall **)(int))(*(_DWORD *)(a1 + 1728) + 28))(a1 + 1728) /*0x41aa6a*/
        || abs16(v7 - *(_WORD *)ObjectClass::CalcTargetFacing((void *)a1, &aP1, aP2)) <= 0x800u )
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
char __userpurge AircraftClass::AssignDestination_SyncLog@<al>(
        IUnknown *a1@<ecx>,
        int a2@<ebp>,
        IUnknown *aP1,
        TechnoClass *aP2)
{
  IUnknown *ClosestPlacementCell; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  ObjectClass *v10; // eax
  ObjectClass *v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax

  ClosestPlacementCell = aP1; /*0x41aa83*/
  if ( !aP1 ) /*0x41aa8b*/
  {
LABEL_53:
    LOBYTE(v6) = FootClass::AssignDestination((int)a1, (int)ClosestPlacementCell, aP2); /*0x41adac*/
    return v6; /*0x41adb4*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(IUnknown *))(aP1->field_0 + 84))(aP1) ) /*0x41aa9a*/
  {
    if ( (*(int (__stdcall **)(int *))(aP1->field_4 + 12))(&aP1->field_4) != 6 /*0x41aada*/
      || (*(int (__thiscall **)(IUnknown *))(a1->field_0 + 388))(a1) != 7 && *(_DWORD *)&a1->__pad_A8[12] != 7 )
    {
      goto LABEL_35; /*0x41aada*/
    }
    if ( Team::AllMembersValid(&a1->field_0) ) /*0x41aae8*/
    {
      v10 = (ObjectClass *)AbstractClass::IsTechnoType(aP1); /*0x41ac4e*/
      v11 = v10; /*0x41ac53*/
      if ( !v10 ) /*0x41ac57*/
        goto LABEL_35; /*0x41ac57*/
      if ( Array::ContainsValue((int *)v10->__pad_0, a1) ) /*0x41ac5c*/
      {
        if ( Array::Contains((int *)v11->__pad_0, a1) ) /*0x41ac72*/
          goto LABEL_35; /*0x41ac72*/
        v6 = (*(int (__thiscall **)(IUnknown *, int))(a1->field_0 + 628))(a1, 14); /*0x41ac81*/
        if ( v6 == 1 ) /*0x41ac8a*/
          return v6; /*0x41ac8a*/
        (*(void (__thiscall **)(IUnknown *, int))(a1->field_0 + 628))(a1, 3); /*0x41ac96*/
        v12 = aP1->field_520; /*0x41ac9c*/
        if ( !*(_BYTE *)(v12 + 5801) && !*(_BYTE *)(v12 + 5802) ) /*0x41acac*/
          goto LABEL_35; /*0x41acb4*/
        TechnoClass::SetFocus(a1, aP1); /*0x41acb9*/
        goto LABEL_34; /*0x41acb9*/
      }
    }
    else
    {
      if ( !Array::ContainsValue(&aP1->field_0, a1) ) /*0x41aaf8*/
      {
        TechnoClass::SetFocus(a1, aP1); /*0x41ab09*/
        if ( *(_BYTE *)(aP1->field_520 + 5835) ) /*0x41ab1a*/
        {
          ClosestPlacementCell = (IUnknown *)(*(int (__thiscall **)(IUnknown *, int, _DWORD, _DWORD, int))(a1->field_0 + 1320))( /*0x41ab4a*/
                                               a1,
                                               *(_DWORD *)&a1->__pad_690[52] + 1000,
                                               0,
                                               0,
                                               a2);
          (*(void (__thiscall **)(IUnknown *, _DWORD, int))(a1->field_0 + 1152))(a1, 0, 1); /*0x41ab4c*/
          v7 = 2; /*0x41ab54*/
          if ( ClosestPlacementCell /*0x41ab6b*/
            && (*(int (__thiscall **)(IUnknown *, int, IUnknown *))(a1->field_0 + 632))(a1, 15, ClosestPlacementCell) == 1 )
          {
            (*(void (__thiscall **)(IUnknown *, int, IUnknown *))(a1->field_0 + 632))(a1, 2, ClosestPlacementCell); /*0x41ab73*/
            v7 = 7; /*0x41ab79*/
          }
          else
          {
            ClosestPlacementCell = (IUnknown *)TechnoClass::FindClosestPlacementCell(&a1->field_0); /*0x41ab87*/
          }
          (*(void (__thiscall **)(IUnknown *, int))(a1->field_0 + 488))(a1, v7); /*0x41ab90*/
          if ( (*(unsigned __int8 (__thiscall **)(IUnknown *))(a1->field_0 + 512))(a1) ) /*0x41ab9a*/
            (*(void (__thiscall **)(IUnknown *))(a1->field_0 + 492))(a1); /*0x41aba8*/
        }
        if ( *(_BYTE *)(aP1->field_520 + 5801) ) /*0x41abb2*/
        {
          *(_DWORD *)&a1->__pad_430[208] = aP1; /*0x41abc4*/
LABEL_34:
          ClosestPlacementCell = 0; /*0x41acbe*/
        }
LABEL_35:
        v13 = (*(int (__thiscall **)(IUnknown *))(a1->field_0 + 444))(a1); /*0x41acc0*/
        if ( (*(_DWORD *)(v13 + 320) & 0x100) == 0 ) /*0x41acd3*/
        {
          v14 = *(_DWORD *)(v13 + 228); /*0x41acd9*/
          if ( v14 ) /*0x41ace1*/
          {
            while ( (IUnknown *)v14 == a1 || (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) != 6 ) /*0x41acf5*/
            {
              v14 = *(_DWORD *)(v14 + 48); /*0x41acf7*/
              if ( !v14 ) /*0x41acfc*/
                goto LABEL_53; /*0x41acfc*/
            }
            v15 = *(_DWORD *)(v14 + 1312); /*0x41ad19*/
            if ( *(_BYTE *)(v15 + 5801) || *(_BYTE *)(v15 + 5802) ) /*0x41ad29*/
            {
              if ( !*(_DWORD *)&a1->__pad_524[336] ) /*0x41ad33*/
                WinAPI::Wrapper(-2147467261); /*0x41ad42*/
              if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)&a1->__pad_524[336] + 96))(*(_DWORD *)&a1->__pad_524[336]) /*0x41ad5d*/
                && !HouseClass::IonSensitivesShouldBeOffline() )
              {
                if ( !*(_DWORD *)&a1->__pad_524[336] ) /*0x41ad66*/
                  WinAPI::Wrapper(-2147467261); /*0x41ad75*/
                (*(void (__stdcall **)(_DWORD))(**(_DWORD **)&a1->__pad_524[336] + 88))(*(_DWORD *)&a1->__pad_524[336]); /*0x41ad83*/
              }
              if ( Team::GetMember(a1, 0) == v14 && ClosestPlacementCell != (IUnknown *)Team::GetMember(a1, 0) ) /*0x41ad9e*/
                (*(void (__thiscall **)(IUnknown *, int))(a1->field_0 + 628))(a1, 3); /*0x41ada6*/
            }
          }
        }
        goto LABEL_53; /*0x41ada6*/
      }
      if ( (*(int (__thiscall **)(IUnknown *, int, IUnknown *))(a1->field_0 + 632))(a1, 14, aP1) != 1 ) /*0x41abdf*/
      {
        (*(void (__thiscall **)(IUnknown *, int))(a1->field_0 + 628))(a1, 3); /*0x41abe7*/
        v8 = aP1->field_520; /*0x41abed*/
        if ( *(_BYTE *)(v8 + 5801) || *(_BYTE *)(v8 + 5802) ) /*0x41abfd*/
        {
          TechnoClass::SetFocus(a1, aP1); /*0x41ac0a*/
          ClosestPlacementCell = 0; /*0x41ac0f*/
        }
      }
      v9 = aP1->field_520; /*0x41ac11*/
      if ( *(_BYTE *)(v9 + 5801) || *(_BYTE *)(v9 + 5802) ) /*0x41ac21*/
      {
        if ( *(_DWORD *)&a1->__pad_524[128] ) /*0x41ac38*/
          TechnoClass::SetFocus(a1, *(IUnknown **)&a1->__pad_524[128]); /*0x41ac45*/
        goto LABEL_35; /*0x41ac4a*/
      }
    }
    TechnoClass::SetFocus(a1, ClosestPlacementCell); /*0x41ac2e*/
    goto LABEL_35; /*0x41ac33*/
  }
  LOBYTE(v6) = FootClass::AssignDestination((int)a1, 0, aP2); /*0x41aaa6*/
  return v6; /*0x41aaab*/
}


// ==== 0x0041ADC0  AircraftClass::ProcessDockCheck  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::_vt30(_DWORD *this)
{
  if ( !this->locomotor ) /*0x41adc3*/
    WinAPI::Wrapper(-2147467261); /*0x41add2*/
  return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->locomotor + 116))(this->locomotor); /*0x41ade3*/
}


// ==== 0x0041ADF0  AircraftClass::RevealSight  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::RevealSight(int *this, int a2, int a3)
{
  int v4; // ebx
  #375 *v5; // edx
  int v6; // edx
  int v7; // eax
  #375 *v8; // edx
  int result; // eax
  int CrateImg; // ebx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v4 = *(_DWORD *)(this->q1B1 + 1512); /*0x41ae00*/
  if ( !(*(int (__thiscall **)(int *))(*this + 456))(this) ) /*0x41ae06*/
  {
    v4 = 1; /*0x41ae10*/
LABEL_4:
    v17 = this->q027; /*0x41ae1f*/
    v18 = this->owningHouseIndex; /*0x41ae40*/
    v5 = (#375 *)this->focus; /*0x41ae44*/
    v19 = this->q029; /*0x41ae4e*/
    MapClass::RevealArea1(&v17, v4, v5, a2, a3, 0, 1, 0); /*0x41ae5e*/
    v6 = this->owningHouseIndex; /*0x41ae65*/
    v7 = this->q029; /*0x41ae68*/
    v17 = this->q027; /*0x41ae6d*/
    v18 = v6; /*0x41ae77*/
    v8 = (#375 *)this->focus; /*0x41ae7b*/
    v19 = v7; /*0x41ae84*/
    return MapClass::RevealArea1(&v17, v4, v8, a2, a3, 0, 1, 1); /*0x41aea1*/
  }
  if ( v4 ) /*0x41ae19*/
    goto LABEL_4; /*0x41ae19*/
  result = *(_DWORD *)MEMORY[0xA8B230]; /*0x41aeaa*/
  if ( (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) != 0 ) /*0x41aeaf*/
  {
    CrateImg = MEMORY[0x8871E0]->GUIMainButtonSound; /*0x41aec5*/
    v17 = this->q027; /*0x41aecd*/
    v18 = this->owningHouseIndex; /*0x41aed6*/
    v11 = *this; /*0x41aeda*/
    v19 = this->q029; /*0x41aedf*/
    v12 = (*(int (__thiscall **)(int *))(v11 + 456))(this); /*0x41aee3*/
    MapClass::RevealArea1( /*0x41af1a*/
      &v17,
      CrateImg,
      (#375 *)this->focus,
      0,
      0,
      1,
      v12 < MEMORY[0x8871E0]->BuildWeapons[3] / 2,
      0);
    v13 = this->owningHouseIndex; /*0x41af21*/
    v14 = this->q029; /*0x41af24*/
    v17 = this->q027; /*0x41af27*/
    v15 = *this; /*0x41af2b*/
    v18 = v13; /*0x41af2d*/
    v19 = v14; /*0x41af35*/
    v16 = (*(int (__thiscall **)(int *))(v15 + 456))(this); /*0x41af39*/
    return MapClass::RevealArea1( /*0x41af70*/
             &v17,
             CrateImg,
             (#375 *)this->focus,
             0,
             0,
             1,
             v16 < MEMORY[0x8871E0]->BuildWeapons[3] / 2,
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

  INIClass::ClearSection((int)this, (int)stru_817460, 0); /*0x41af92*/
  result = 0; /*0x41af9d*/
  for ( i = 0; result < MEMORY[0xA8E3A0]; i = result ) /*0x41afa5*/
  {
    v2 = *((_DWORD *)MEMORY[0xA8E394] + result); /*0x41afb5*/
    if ( v2 && !*(_BYTE *)(v2 + 129) && *(_BYTE *)(v2 + 144) ) /*0x41afce*/
    {
      sprintf(Buffer, MEMORY[0x817F6C], result); /*0x41afe7*/
      v3 = *(_DWORD *)(v2 + 52); /*0x41afec*/
      if ( v3 ) /*0x41aff4*/
        v24 = (char *)(*(_DWORD *)(v3 + 36) + 36); /*0x41affc*/
      else
        v24 = MEMORY[0x817F64]; /*0x41b002*/
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
      sprintf(Source, stru_817F40, v7, v6, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22); /*0x41b0c0*/
      INIClass::SetString(this, (unsigned __int8 *)stru_817460, Buffer, Source); /*0x41b0dc*/
      result = i; /*0x41b0e1*/
    }
    ++result; /*0x41b0eb*/
  }
  return result; /*0x41b0fc*/
}


// ==== 0x0041B110  ObjectClass::PlaceAircraftFromINI  this=IUnknown  sig=csp ====
CCINIClass *__usercall PlaceAircraftFromINI@<eax>(char *a1@<ecx>, int a2@<edi>)
{
  CCINIClass *result; // eax
  CCINIClass *v4; // ecx
  unsigned __int8 *StringByIndex; // eax
  char *v6; // eax
  INIClass *v7; // esi
  char *v8; // eax
  INIClass *v9; // edi
  AbstractClass *v10; // esi
  int v11; // eax
  FootClass *v12; // esi
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  CCINIClass *v16; // eax
  char *v17; // eax
  int v18; // eax
  char *v19; // eax
  CCINIClass *v20; // edi
  char *v21; // eax
  CCINIClass *v22; // ebx
  char *v23; // eax
  void *v24; // eax
  int v25; // eax
  char *v26; // eax
  CCINIClass *v27; // eax
  char *v28; // eax
  char *v29; // eax
  char *v30; // eax
  int v31; // edi
  int v32; // eax
  int v33; // edi
  int v34; // eax
  int i; // [esp+Ch] [ebp-A4h]
  CCINIClass *v37; // [esp+14h] [ebp-9Ch]
  CCINIClass *v38; // [esp+18h] [ebp-98h]
  CCINIClass *v39; // [esp+20h] [ebp-90h]
  _DWORD v40[3]; // [esp+24h] [ebp-8Ch] BYREF
  INIClass String[2]; // [esp+30h] [ebp-80h] BYREF

  INIClass::ResetSection(a1); /*0x41b119*/
  result = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)&stru_817460); /*0x41b126*/
  v4 = 0; /*0x41b12b*/
  v39 = result; /*0x41b12f*/
  for ( i = 0; i < (int)v39; ++i ) /*0x41b137*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1, &stru_817460, v4); /*0x41b14a*/
    INIClass::GetString((unsigned __int8 ***)a1, (INIClass *)&stru_817460, StringByIndex, 0, String, 128); /*0x41b164*/
    v6 = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x41b173*/
    v7 = (INIClass *)HouseClass::FindByName(v6); /*0x41b182*/
    if ( v7 != (INIClass *)-1 ) /*0x41b187*/
    {
      v8 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b194*/
      v9 = (INIClass *)TypeClass::FindByName(v8); /*0x41b1a3*/
      if ( v9 != (INIClass *)-1 ) /*0x41b1a8*/
      {
        v10 = *(AbstractClass **)&HouseClass_Array->__pad_0[4 * (_DWORD)v7]; /*0x41b1b9*/
        v11 = __2_YAPAXI_Z(0x6D8u); /*0x41b1bc*/
        if ( v11 ) /*0x41b1c6*/
        {
          v12 = (FootClass *)AircraftClass::Construct( /*0x41b1de*/
                               v11,
                               *(IUnknown **)&MEMORY[0xA8B21C]->__pad_0[4 * (_DWORD)v9],
                               v10);
          if ( v12 ) /*0x41b1e2*/
          {
            v13 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b1ef*/
            atoi(v13); /*0x41b1f5*/
            if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[656] < 4 ) /*0x41b210*/
            {
              v17 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b242*/
              v18 = atoi(v17); /*0x41b248*/
              LOWORD(v37) = v18 % 128; /*0x41b263*/
              HIWORD(v37) = v18 / 128; /*0x41b26d*/
              v16 = v37; /*0x41b272*/
            }
            else
            {
              v14 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b212*/
              LOWORD(v38) = atoi(v14); /*0x41b224*/
              v15 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b229*/
              HIWORD(v38) = atoi(v15); /*0x41b234*/
              v16 = v38; /*0x41b239*/
            }
            v40[0] = ((__int16)v16 << 8) + 128; /*0x41b29b*/
            v40[1] = (SHIWORD(v16) << 8) + 128; /*0x41b29f*/
            v40[2] = 0; /*0x41b2a3*/
            v19 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b2a7*/
            v20 = (CCINIClass *)atoi(v19); /*0x41b2b9*/
            v21 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b2bb*/
            v22 = (CCINIClass *)LookupWaypointName(v21); /*0x41b2ca*/
            v23 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b2d3*/
            v24 = (void *)ObjectTypeClass::FindByName(v23); /*0x41b2dd*/
            if ( v24 ) /*0x41b2e4*/
            {
              v25 = TeamClass::FindOrCreate(v24); /*0x41b2e8*/
              if ( v25 ) /*0x41b2ef*/
                ObjectClass::SetReference(v12, v25); /*0x41b2f4*/
            }
            v26 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b300*/
            if ( v26 ) /*0x41b30a*/
            {
              v27 = (CCINIClass *)atoi(v26); /*0x41b30d*/
              FootClass::SetField((float *)&v12->initialOwner, v27); /*0x41b31c*/
            }
            v28 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b328*/
            if ( v28 ) /*0x41b332*/
              v12->displayProductionTo[0] = atoi(v28); /*0x41b33d*/
            v29 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b34a*/
            if ( v29 ) /*0x41b354*/
              v12->__pad_3F7[42] = atoi(v29) != 0; /*0x41b364*/
            v30 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x41b371*/
            if ( v30 ) /*0x41b37b*/
              v12->__pad_3F7[43] = atoi(v30) != 0; /*0x41b38b*/
            if ( (*(unsigned __int8 (__thiscall **)(FootClass *, _DWORD *, CCINIClass *, int))(*(_DWORD *)v12->__pad_0 /*0x41b39b*/
                                                                                             + 216))(
                   v12,
                   v40,
                   v20,
                   a2) )
            {
              v31 = *(_DWORD *)&v12[1].__pad_0[4]; /*0x41b3a9*/
              v32 = Math::RoundToInt((double)(int)v39 * (double)*(int *)(v31 + 160) * 0.00390625); /*0x41b3bb*/
              v12->health = v32; /*0x41b3c0*/
              v33 = *(_DWORD *)(v31 + 160); /*0x41b3c3*/
              if ( v32 > v33 - 3 ) /*0x41b3ce*/
                v12->health = v33; /*0x41b3d0*/
              if ( !v12->health ) /*0x41b3d3*/
                v12->health = 1; /*0x41b3da*/
              v34 = *(_DWORD *)v12->__pad_0; /*0x41b3e4*/
              a2 = 0; /*0x41b3e6*/
              v12->estimatedHealth = v12->health; /*0x41b3eb*/
              (*(void (__thiscall **)(FootClass *, CCINIClass *))(v34 + 488))(v12, v22); /*0x41b3ee*/
              (*(void (__thiscall **)(FootClass *))(*(_DWORD *)v12->__pad_0 + 492))(v12); /*0x41b3f8*/
            }
            else
            {
              a2 = 1; /*0x41b402*/
              (*(void (__thiscall **)(FootClass *))(*(_DWORD *)v12->__pad_0 + 32))(v12); /*0x41b406*/
            }
          }
        }
      }
    }
    result = v39; /*0x41b40d*/
    v4 = (CCINIClass *)(i + 1); /*0x41b411*/
  }
  return result; /*0x41b421*/
}


// ==== 0x0041B430  AircraftClass::LoadFromStream  this=AircraftClass  sig=csp ====
int __stdcall AircraftClass::LoadFromStream(_DWORD *a0, FootClass *aP1)
{
  FootClass *v2; // esi
  _DWORD *v3; // ebx
  size_t v4; // eax
  int v5; // eax
  int v6; // ecx
  IUnknown *i; // eax
  _DWORD *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // edi
  AbstractClass *v13; // eax

  v2 = (FootClass *)a0; /*0x41b432*/
  v3 = a0 + 1; /*0x41b43a*/
  a0 = (_DWORD *)(*(int (__stdcall **)(_DWORD *))(a0[1] + 16))(a0 + 1); /*0x41b44b*/
  v4 = BuildingTypeClass::Dequeue((char **)&stru_B05488.__pad_579C[15388], (BuildingClass *)&a0); /*0x41b44f*/
  if ( v4 ) /*0x41b456*/
  {
    v5 = (int)(v4 - *(_DWORD *)&stru_B05488.__pad_579C[15388]) >> 3; /*0x41b45e*/
    if ( v5 != -1 ) /*0x41b464*/
    {
      v6 = v5 + 1; /*0x41b466*/
      for ( i = *(IUnknown **)&stru_B05488.__pad_579C[15392]; /*0x41b470*/
            v6 < *(int *)&stru_B05488.__pad_579C[15392];
            i = *(IUnknown **)&stru_B05488.__pad_579C[15392] )
      {
        v8 = (_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * v6++); /*0x41b478*/
        *(v8 - 2) = *v8; /*0x41b47e*/
        *(v8 - 1) = v8[1]; /*0x41b484*/
      }
      *(_DWORD *)&stru_B05488.__pad_579C[15392] = (char *)i - 1; /*0x41b499*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392]) = 0; /*0x41b49e*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392] + 4) = 0; /*0x41b4ae*/
      *(_DWORD *)&stru_B05488.__pad_579C[15404] = 0; /*0x41b4b2*/
    }
  }
  result = ObjectClass::LoadFromStream_Common(v2, (LPSTREAM)aP1); /*0x41b4be*/
  if ( result >= 0 ) /*0x41b4c5*/
  {
    v10 = v2->locomotor[0]; /*0x41b4cb*/
    if ( v2 ) /*0x41b4d3*/
    {
      FootClass::PostLoadInit(v2, (int)&a0); /*0x41b4dc*/
      *(_DWORD *)v2->__pad_0 = &AircraftClass::`vftable'; /*0x41b4e1*/
      *v3 = &AircraftClass::`vftable'; /*0x41b4e7*/
      *(_DWORD *)&v2->__pad_0[8] = &AircraftClass::`vftable'; /*0x41b4ed*/
      *(_DWORD *)&v2->__pad_0[12] = &AircraftClass::`vftable'; /*0x41b4f4*/
      *(_DWORD *)v2[1].__pad_0 = &vt_AircraftClass; /*0x41b4fb*/
    }
    v11 = v2->locomotor[0]; /*0x41b506*/
    if ( v11 != v10 ) /*0x41b50e*/
    {
      v2->locomotor[0] = v10; /*0x41b512*/
      if ( v10 ) /*0x41b518*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x41b51d*/
      if ( v11 ) /*0x41b522*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x41b528*/
    }
    (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x41b52e*/
    v12 = (*(int (__stdcall **)(_DWORD *))(*v3 + 16))(v3); /*0x41b53d*/
    v13 = *(AbstractClass **)&stru_B05488.__pad_579C[15396]; /*0x41b53f*/
    if ( *(_DWORD *)&stru_B05488.__pad_579C[15392] + 1 <= *(int *)&stru_B05488.__pad_579C[15396] ) /*0x41b548*/
      goto LABEL_18; /*0x41b548*/
    if ( !*(_DWORD *)&stru_B05488.__pad_579C[15396] ) /*0x41b54c*/
      v13 = (AbstractClass *)10; /*0x41b54e*/
    if ( BuildingTypeClass::Enqueue((int)&stru_B05488.__pad_579C[15388], (int)v13) ) /*0x41b559*/
    {
LABEL_18:
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392]) = v12; /*0x41b56d*/
      *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392] + 4) = v2; /*0x41b57b*/
      stru_B05488.__pad_579C[15400] = 0; /*0x41b585*/
      ++*(_DWORD *)&stru_B05488.__pad_579C[15392]; /*0x41b58c*/
    }
    ObjectPtr::RegisterForTracking( /*0x41b59d*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&v2[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x41b5ae*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&v2[1].__pad_0[12]);
    return 0; /*0x41b5b3*/
  }
  return result; /*0x41b5b5*/
}


// ==== 0x0041B5C0  AircraftClass::CheckPassengerCount  this=AircraftClass  sig=csp ====
int __stdcall AircraftClass::CheckPassengerCount(int a1, int pPStm, int a3)
{
  return ObjectClass::SaveToStream_Common(a1, pPStm, a3); /*0x41b5d4*/
}


// ==== 0x0041B5E0  AircraftClass::vt_entry_200  this=AircraftClass  sig=csp ====
bool __thiscall MissionClass::vt_entry_200(int this)
{
  int v1; // eax

  v1 = *(_DWORD *)(this + 172); /*0x41b5e0*/
  return v1 != 6 && v1 != 21 && (!*(_BYTE *)(this + 1746) || v1 == 30) && *(_BYTE *)(this + 1748) != 0; /*0x41b60a*/
}


// ==== 0x0041B610  AircraftClass::PowerDrainUpdate  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::_vt13(_BYTE *this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx

  v3 = FootClass::BeginPowerUpdate((int)this, a2); /*0x41b619*/
  LOBYTE(v3) = this->HasPassengers; /*0x41b61e*/
  Power::FlagProcess(a2, v3); /*0x41b627*/
  LOBYTE(v4) = this->AircraftClass_field_bool_6D0; /*0x41b62c*/
  Power::FlagProcess(a2, v4); /*0x41b635*/
  LOBYTE(v5) = this->AircraftClass_field_bool_6D1; /*0x41b63a*/
  Power::FlagProcess(a2, v5); /*0x41b643*/
  return Power::TimerProcess((char)this->AircraftClass_field_char_6D3); /*0x41b657*/
}


// ==== 0x0041B660  AircraftClass::HandleTargetDestroyed  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::_vt10(int *this, int *a2, int *a3)
{
  int result; // eax

  FootClass::HandleTargetDestroyed(this, a2, a3); /*0x41b66e*/
  result = 0; /*0x41b679*/
  if ( (int *)this->AircraftClass_field_6CC == a2 ) /*0x41b67d*/
    this->AircraftClass_field_6CC = 0; /*0x41b67f*/
  if ( (int *)this->q1B1 == a2 ) /*0x41b68b*/
    this->q1B1 = 0; /*0x41b68d*/
  return result; /*0x41b693*/
}


// ==== 0x0041B6A0  TechnoClass::ComputeTeamAttackPriority  this=TechnoClass  sig=csp ====
int __stdcall TechnoClass::sub_41B6A0(int a1)
{
  _DWORD *v1; // edi
  int v2; // edi

  if ( *(_BYTE *)(*(_DWORD *)(a1 + 4) + 3580) ) /*0x41b6aa*/
  {
    if ( !*(_DWORD *)(a1 - 1448) ) /*0x41b6b4*/
    {
      if ( Team::AllMembersValid((int *)(a1 - 1728)) ) /*0x41b6c6*/
      {
        v1 = (_DWORD *)Array::Get((_DWORD *)(a1 - 1728), 0); /*0x41b6dc*/
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)(a1 - 1728) + 388))(a1 - 1728) == 7 ) /*0x41b6e7*/
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
  if ( (!Team::AllMembersValid((int *)(a1 - 1728)) || !*(_BYTE *)(*(_DWORD *)(a1 + 4) + 3580)) /*0x41b73c*/
    && (!*(_DWORD *)(a1 - 1448) || !*(_BYTE *)(*(_DWORD *)(a1 + 4) + 3580)) )
  {
    return 0; /*0x41b753*/
  }
  else
  {
    return 100; /*0x41b748*/
  }
}


// ==== 0x0041B760  TechnoClass::GetAutoFireDirection  this=TechnoClass  sig=csp ====
int __stdcall TechnoClass::sub_41B760(int a1)
{
  int v1; // edi
  _DWORD *v2; // esi
  int v3; // eax
  _DWORD *Value; // eax

  v1 = a1; /*0x41b762*/
  v2 = (_DWORD *)(a1 - 1728); /*0x41b766*/
  if ( Team::AllMembersValid((int *)(a1 - 1728)) ) /*0x41b76e*/
  {
    v3 = Array::Get(v2, 0); /*0x41b77b*/
    Value = ProgressTimer::GetValue((_WORD *)(v3 + 904), &a1); /*0x41b78b*/
    return ((unsigned int)((*Value >> 12) + 1) >> 1) & 7; /*0x41b7b4*/
  }
  if ( *(_DWORD *)(v1 - 1448) ) /*0x41b78d*/
  {
    Value = ProgressTimer::GetValue((_WORD *)(v1 - 800), &a1); /*0x41b7a2*/
    return ((unsigned int)((*Value >> 12) + 1) >> 1) & 7; /*0x41b7a2*/
  }
  return MEMORY[0x8871E0]->PoseDir; /*0x41b7a9*/
}


// ==== 0x0041B7D0  TechnoClass::processDamageAnimation  this=TechnoClass  sig=csp ====
BOOL __stdcall TechnoClass::sub_41B7D0(int a1)
{
  return *(_DWORD *)(a1 - 1448) != 0; /*0x41b7e4*/
}


// ==== 0x0041B7F0  TechnoClass::HasOnlyOneGarrisonSlot  this=TechnoClass  sig=csp ====
_DWORD *__stdcall TechnoClass::sub_41B7F0(int a1)
{
  _DWORD *result; // eax
  int v2; // eax

  result = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)(a1 - 1728) + 1016))(a1 - 1728, 0); /*0x41b802*/
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
BOOL __stdcall TechnoClass::sub_41B840(int a1)
{
  return *(_BYTE *)(*(_DWORD *)(a1 + 4) + 3598) != 0; /*0x41b854*/
}


// ==== 0x0041B860  TechnoClass::checkAmmo  this=AircraftClass  sig=csp ====
int __stdcall TechnoClass::checkAmmo(AircraftClass *aP0)
{
  return BYTE2(aP0->uniqueId); /*0x41b869*/
}


// ==== 0x0041B870  AircraftClass::ProcessPassengerEjection  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::_vt123(#377 *this)
{
  if ( this->q02B != 30 ) /*0x41b877*/
    this->AircraftClass_field_bool_6D2 = 0; /*0x41b879*/
  return MissionClass::AdvanceState(this);
}


// ==== 0x0041B900  TacticalClass::StubReturnTrue  this=TacticalClass  sig=csp ====
void TacticalClass::StubReturnTrue()
{
  ; /*0x41b900*/
}


// ==== 0x0041B910  AircraftClass::MissionStubReturnZero  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::_vt32(void *this)
{
  return (*(int (__thiscall **)(void *))(this->customSound_controller)(this);
}


// ==== 0x0041B920  AircraftClass::IsHeightAboveThreshold  this=AircraftClass  sig=csp ====
bool __thiscall AircraftClass::_vt21(_BYTE *this)
{
  int v1; // eax

  v1 = this->q1B1; /*0x41b929*/
  if ( v1 != *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1248) && v1 != *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1300) ) /*0x41b93d*/
    return ObjectClass::IsHeightAboveThreshold_0((#374 *)this); /*0x41b941*/
  if ( !this->locomotor ) /*0x41b948*/
    WinAPI::Wrapper(-2147467261); /*0x41b957*/
  return (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 128))(this->locomotor) != 0; /*0x41b946*/
}


// ==== 0x0041B980  AircraftClass::IsBelowScreen  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::IsBelowScreen(#374 *this)
{
  AircraftTypeClass *v1; // eax

  v1 = (AircraftTypeClass *)this->q1B1; /*0x41b989*/
  if ( v1 != *(AircraftTypeClass **)&MEMORY[0x8871E0]->__pad_240[672] /*0x41b99d*/
    && v1 != *(AircraftTypeClass **)&MEMORY[0x8871E0]->__pad_240[724] )
  {
    return ObjectClass::IsBelowScreen(this); /*0x41b9a1*/
  }
  if ( !this->locomotor ) /*0x41b9a8*/
    WinAPI::Wrapper(-2147467261); /*0x41b9b7*/
  return (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 128))(this->locomotor) == 0; /*0x41b9a6*/
}


// ==== 0x0041B9E0  TechnoClass::updateROFTimer  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::sub_41B9E0(_BYTE *this)
{
  return this->q6D5; /*0x41b9e6*/
}


// ==== 0x0041B9F0  AircraftClass::UpdateDocking  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::_vt124(int this, int a2)
{
  int result; // eax

  switch ( *(_DWORD *)(this + 172) ) /*0x41ba0b*/
  {
    case 4: /*0x41ba0b*/
    case 0x1A: /*0x41ba0b*/
    case 0x1B: /*0x41ba0b*/
    case 0x1E: /*0x41ba0b*/
    case 0x1F: /*0x41ba0b*/
      if ( *(_DWORD *)(this + 660) ) /*0x41ba12*/
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
      result = MissionClass::SetState((#377 *)this); /*0x41ba33*/
      break; /*0x41ba34*/
  }
  return result; /*0x41ba39*/
}


// ==== 0x0041BA90  AircraftClass::ProcessLanding  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::_vt122(int this, int a2, int a3)
{
  int result; // eax

  switch ( *(_DWORD *)(this + 172) ) /*0x41baab*/
  {
    case 4: /*0x41baab*/
    case 0x1A: /*0x41baab*/
    case 0x1B: /*0x41baab*/
    case 0x1E: /*0x41baab*/
    case 0x1F: /*0x41baab*/
      if ( *(_DWORD *)(this + 660) ) /*0x41bab2*/
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
      result = ParticleClass::MissionDispatch((#377 *)this); /*0x41bad3*/
      break; /*0x41bad9*/
  }
  return result; /*0x41bade*/
}


// ==== 0x0041BB30  AircraftClass::OverrideMission_SyncLog  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::OverrideMission_SyncLog(int this, int a2, int a3, int a4)
{
  int result; // eax

  switch ( *(_DWORD *)(this + 172) ) /*0x41bb4b*/
  {
    case 4: /*0x41bb4b*/
    case 0x1A: /*0x41bb4b*/
    case 0x1B: /*0x41bb4b*/
    case 0x1E: /*0x41bb4b*/
    case 0x1F: /*0x41bb4b*/
      if ( *(_DWORD *)(this + 660) ) /*0x41bb52*/
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
      result = FootClass::OverrideMission_SyncLog((#377 *)this, a2, a3, a4); /*0x41bb73*/
      break; /*0x41bb7e*/
  }
  return result; /*0x41bb83*/
}


// ==== 0x0041BC30  TechnoClass::CreateWarheadDamageEffect  this=TechnoClass  sig=csp ====
char TechnoClass::CreateWarheadDamageEffect(int a1, TechnoClass *aP1, int a3, int a4)
{
  int v4; // ecx
  int v5; // ebp
  TechnoClass *v6; // esi
  int v7; // edi
  AbstractClass *v8; // ebp
  AbstractClass *p_disguiseAsType; // esi
  AbstractClass *v10; // ebx
  BulletClass *UIObjectCOM; // edi
  int *v12; // eax
  int v13; // edx
  int eax9a; // eax
  int *eax15; // eax
  BulletClass *v14; // eax
  BulletClass *v15; // edi
  int v19; // [esp-8h] [ebp-30h]
  int v20; // [esp+8h] [ebp-20h]
  int v21; // [esp+Ch] [ebp-1Ch]
  int v22; // [esp+10h] [ebp-18h] BYREF
  int v23; // [esp+14h] [ebp-14h] BYREF
  int v24; // [esp+18h] [ebp-10h]
  int v25; // [esp+1Ch] [ebp-Ch] BYREF
  _BYTE v26[8]; // [esp+20h] [ebp-8h] BYREF

  v6 = (TechnoClass *)v4; /*0x41bc34*/
  v21 = v4; /*0x41bc36*/
  if ( !*(_BYTE *)(v4 + 1701) ) /*0x41bc3a*/
    return 0; /*0x41bdc3*/
  v7 = *(_DWORD *)&stru_87C374.__pad_579C[22224]; /*0x41bc49*/
  if ( *(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3944) ) /*0x41bc4f*/
    v20 = *(_DWORD *)(v4 + 100); /*0x41bc5c*/
  else
    v20 = *(_DWORD *)(*(_DWORD *)(v4 + 1724) + 160); /*0x41bc6e*/
  v19 = v5; /*0x41bc77*/
  v8 = (AbstractClass *)Math::RoundToInt((double)v20 * *(float *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3940)); /*0x41bc83*/
  if ( (int)v8 < 0 ) /*0x41bc87*/
    v8 = 0; /*0x41bc89*/
  p_disguiseAsType = (AbstractClass *)&v6[-1].disguiseAsType; /*0x41bc8f*/
  v10 = p_disguiseAsType; /*0x41bc92*/
  if ( *(_DWORD *)(v21 + 1056) ) /*0x41bc94*/
    v10 = *(AbstractClass **)(v21 + 1056); /*0x41bc9e*/
  UIObjectCOM = (BulletClass *)CreateUIObjectCOM( /*0x41bcc2*/
                                 *(IUnknown **)(*(_DWORD *)(v7 + 4060) + 160),
                                 p_disguiseAsType,
                                 v10,
                                 v8,
                                 *(AbstractClass **)(v7 + 4008),
                                 0,
                                 (AbstractClass *)1);
  v12 = (int *)(*(int (__thiscall **)(AbstractClass *, int *, int))(*(_DWORD *)p_disguiseAsType->__pad_0 + 72))( /*0x41bccb*/
                 p_disguiseAsType,
                 &v25,
                 v19);
  v23 = *v12; /*0x41bcd0*/
  v24 = v12[1]; /*0x41bcd9*/
  v13 = *(_DWORD *)p_disguiseAsType->__pad_0; /*0x41bcdd*/
  v25 = v12[2]; /*0x41bce2*/
  eax9a = (*(int (__thiscall **)(AbstractClass *))(v13 + 456))(p_disguiseAsType); /*0x41bce6*/
  v25 -= eax9a; /*0x41bcf4*/
  if ( UIObjectCOM ) /*0x41bcf8*/
  {
    (*(void (__thiscall **)(BulletClass *))(*(_DWORD *)UIObjectCOM->__pad_0 + 212))(UIObjectCOM); /*0x41bcfe*/
    Warhead::ApplyDamage(UIObjectCOM->__pad_0, (ObjectClass *)&v23); /*0x41bd0b*/
    (*(void (__stdcall **)(BulletClass *))(*(_DWORD *)UIObjectCOM->__pad_0 + 8))(UIObjectCOM); /*0x41bd13*/
  }
  if ( *(_DWORD *)(v22 + 1056) ) /*0x41bd1a*/
  {
    (*(void (__thiscall **)(AbstractClass *, _DWORD))(*(_DWORD *)p_disguiseAsType->__pad_0 + 224))( /*0x41bd29*/
      p_disguiseAsType,
      *(_DWORD *)(v22 + 1056));
  }
  else if ( *(_DWORD *)(v22 + 1060) ) /*0x41bd31*/
  {
    (*(void (__thiscall **)(AbstractClass *, _DWORD))(*(_DWORD *)p_disguiseAsType->__pad_0 + 228))( /*0x41bd40*/
      p_disguiseAsType,
      *(_DWORD *)(v22 + 1060));
  }
  eax15 = (int *)(*(int (__thiscall **)(AbstractClass *, _BYTE *))(*(_DWORD *)p_disguiseAsType->__pad_0 + 72))( /*0x41bd4f*/
                   p_disguiseAsType,
                   v26);
  v22 = *eax15; /*0x41bd56*/
  v23 = eax15[1]; /*0x41bd5f*/
  v24 = eax15[2]; /*0x41bd6b*/
  v14 = (BulletClass *)CreateUIObjectCOM( /*0x41bd86*/
                         *(IUnknown **)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4060) + 160),
                         p_disguiseAsType,
                         v10,
                         v8,
                         *(AbstractClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008),
                         0,
                         (AbstractClass *)1);
  v15 = v14; /*0x41bd8b*/
  if ( v14 ) /*0x41bd91*/
  {
    (*(void (__thiscall **)(BulletClass *))(*(_DWORD *)v14->__pad_0 + 212))(v14); /*0x41bd97*/
    Warhead::ApplyDamage(v15->__pad_0, (ObjectClass *)&v22); /*0x41bda4*/
    (*(void (__stdcall **)(BulletClass *))(*(_DWORD *)v15->__pad_0 + 8))(v15); /*0x41bdac*/
  }
  (*(void (__thiscall **)(AbstractClass *))(*(_DWORD *)p_disguiseAsType->__pad_0 + 248))(p_disguiseAsType); /*0x41bdb3*/
  return 1; /*0x41bdbc*/
}


// ==== 0x0041BDD0  IUnknown::GetCoordsThunk1  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCoordsThunk1(#374 *this)
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *))(this->q012)(this, v3); /*0x41bdde*/
  *v4 = *v1; /*0x41bde8*/
  v4[1] = v1[1]; /*0x41bded*/
  v4[2] = v1[2]; /*0x41bdf4*/
  return (int)v4; /*0x41bdf0*/
}


// ==== 0x0041BE00  IUnknown::GetCoordsThunk2  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCoordsThunk2(#374 *this)
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *))(this->q012)(this, v3); /*0x41be0e*/
  *v4 = *v1; /*0x41be18*/
  v4[1] = v1[1]; /*0x41be1d*/
  v4[2] = v1[2]; /*0x41be24*/
  return (int)v4; /*0x41be20*/
}


// ==== 0x0041BE30  IUnknown::GetCoordsThunk3  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCoordsThunk3(#374 *this)
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *))(this->q012)(this, v3); /*0x41be3e*/
  *v4 = *v1; /*0x41be48*/
  v4[1] = v1[1]; /*0x41be4d*/
  v4[2] = v1[2]; /*0x41be54*/
  return (int)v4; /*0x41be50*/
}


// ==== 0x0041BE60  IUnknown::LandingCheckStub  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::_vt51(#374 *this)
{
  return 0; /*0x41be62*/
}


// ==== 0x0041BE70  IUnknown::StubReturnFalse2  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::_vt52(#374 *this)
{
  return 0; /*0x41be72*/
}


// ==== 0x0041BE80  IUnknown::CheckStateFlag  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::CheckStateFlag(#374 *this)
{
  int result; // eax

  return result; /*0x41be80*/
}


// ==== 0x0041BE90  IUnknown::CheckStateFlag2  this=IUnknown  sig=csp ====
int __thiscall AircraftClass::CheckStateFlag2(#374 *this)
{
  int result; // eax

  return result; /*0x41be90*/
}


// ==== 0x0041BEA0  IUnknown::GetCellCoords_Alt  this=IUnknown  sig=csp ====
int __thiscall ObjectClass::GetCellCoords_Alt(#374 *this)
{
  int v2; // [esp+0h] [ebp-4h]
  _DWORD *v3; // [esp+8h] [ebp+4h]

  LOWORD(v2) = this->q09C / 256; /*0x41beb3*/
  HIWORD(v2) = this->q028 / 256; /*0x41beca*/
  *v3 = v2; /*0x41bed7*/
  return (int)v3; /*0x41beda*/
}


// ==== 0x0041BEE0  TechnoClass::StubReturnFalse  this=TechnoClass  sig=csp ====
char NullStub_RetFalse()
{
  return 0; /*0x41bee2*/
}


// ==== 0x0041BEF0  TechnoClass::selectTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::selectTarget(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x41bef0*/
  return result; /*0x41bef2*/
}


// ==== 0x0041BF00  TechnoClass::StubReturnFalse2  this=TechnoClass  sig=csp ====
int NullStub_RetZero()
{
  return 0; /*0x41bf02*/
}


// ==== 0x0041BF10  TechnoClass::StubReturnFalse3  this=TechnoClass  sig=csp ====
int NullStub_RetZero_1()
{
  return 0; /*0x41bf12*/
}


// ==== 0x0041BF20  TechnoClass::StubReturnFalse4  this=TechnoClass  sig=csp ====
int NullStub_RetZero_2()
{
  return 0; /*0x41bf22*/
}


// ==== 0x0041BF30  TechnoClass::vt_entry_1FC  this=TechnoClass  sig=csp ====
int __thiscall MissionClass::vt_entry_1FC(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x41bf30*/
  return result; /*0x41bf32*/
}


// ==== 0x0041BF40  TechnoClass::HasRemaining  this=TechnoClass  sig=csp ====
int __thiscall FrameTimer::HasRemaining(#377 *this)
{
  int v1; // edx
  int result; // eax

  v1 = this->q18C; /*0x41bf40*/
  result = this->q194; /*0x41bf46*/
  if ( v1 != -1 ) /*0x41bf4f*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 < result ) /*0x41bf5b*/
    {
      result -= (int)MEMORY[0xA8ED84] - v1; /*0x41bf5d*/
      LOBYTE(result) = result > 0; /*0x41bf66*/
      return result; /*0x41bf68*/
    }
    result = 0; /*0x41bf69*/
  }
  LOBYTE(result) = result > 0; /*0x41bf72*/
  return result; /*0x41bf68*/
}


// ==== 0x0041BF80  TechnoClass::StubReturnFalse5  this=TechnoClass  sig=csp ====
int __thiscall TacticalClass::_vt73(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x41bf80*/
  return result; /*0x41bf82*/
}


// ==== 0x0041BF90  TechnoClass::StubReturnFalse6  this=TechnoClass  sig=csp ====
int __thiscall TacticalClass::StubReturnFalse6(#377 *this)
{
  int result; // eax

  return result; /*0x41bf90*/
}


// ==== 0x0041BFA0  TechnoClass::ProcessFrame  this=TechnoClass  sig=csp ====
char __thiscall TacticalClass::_vt103(void *this)
{
  return *(_BYTE *)((*(int (__thiscall **)(void *))(this->hasParachute)(this) + 3233); /*0x41bfae*/
}


// ==== 0x0041BFB0  TechnoClass::StubReturnFalse7  this=TechnoClass  sig=csp ====
char NullStub_RetFalse_3()
{
  return 0; /*0x41bfb2*/
}


// ==== 0x0041BFC0  TechnoClass::StubReturnFalse8  this=TechnoClass  sig=csp ====
int NullStub_RetZero_3()
{
  return 0; /*0x41bfc2*/
}


// ==== 0x0041BFD0  TechnoClass::StubReturnFalse9  this=TechnoClass  sig=csp ====
int NullStub_RetZero_4()
{
  return 0; /*0x41bfd2*/
}


// ==== 0x0041BFE0  TechnoClass::vt_entry_428  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::vt_entry_428(#377 *this)
{
  int result; // eax

  return result; /*0x41bfe0*/
}


// ==== 0x0041BFF0  TechnoClass::vt_entry_434  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::vt_entry_434(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x41bff0*/
  return result; /*0x41bff2*/
}


// ==== 0x0041C000  TechnoClass::StubReturnTrue2  this=TechnoClass  sig=csp ====
void TacticalClass::StubReturnTrue2()
{
  ; /*0x41c000*/
}


// ==== 0x0041C010  TechnoClass::CheckReloadState  this=TechnoClass  sig=csp ====
int __thiscall AircraftClass::_vt49(#377 *this)
{
  int result; // eax

  LOBYTE(result) = this->isDisguisedFlag; /*0x41c010*/
  return result; /*0x41c016*/
}


// ==== 0x0041C020  TechnoClass::CheckReloadTimer  this=TechnoClass  sig=csp ====
int __thiscall AircraftClass::_vt50(#377 *this)
{
  int result; // eax

  LOBYTE(result) = this->isDisguisedFlag; /*0x41c020*/
  return result; /*0x41c026*/
}


// ==== 0x0041C030  TechnoClass::CheckAction  this=TechnoClass  sig=csp ====
int __thiscall TacticalClass::_vt132(#377 *this)
{
  int result; // eax

  this->isDisguisedFlag = 0; /*0x41c030*/
  return result; /*0x41c037*/
}


// ==== 0x0041C040  TechnoClass::StubReturnFalse10  this=TechnoClass  sig=csp ====
int __thiscall TacticalClass::_vt134(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x41c040*/
  return result; /*0x41c042*/
}


// ==== 0x0041C050  FootClass::ProcessTick  this=FootClass  sig=csp ====
BOOL __thiscall MiniStub_41c050(_DWORD *this)
{
  return this->FootClass_field_5D4 != 0; /*0x41c05d*/
}


// ==== 0x0041C060  FootClass::vt_entry_4E4  this=FootClass  sig=csp ====
char BuildingClass::vt_entry_4E4()
{
  return 0; /*0x41c062*/
}


// ==== 0x0041C070  FootClass::CheckDockState  this=FootClass  sig=csp ====
char __thiscall MiniStub_41c070(_BYTE *this)
{
  return this->FootClass_field_6B6; /*0x41c076*/
}


// ==== 0x0041C080  FootClass::vt_entry_4F8  this=FootClass  sig=csp ====
char FootClass::vt_entry_4F8()
{
  return 0; /*0x41c082*/
}


// ==== 0x0041C090  FootClass::Destru_vt323  this=FootClass  sig=csp ====
int __stdcall FootClass::Destru_vt323(
        int a1,
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
  return ((int (__stdcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))loc_705E00)( /*0x41c0e5*/
           a1,
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


// ==== 0x0041C0F0  FootClass::vt_entry_514  this=FootClass  sig=csp ====
void FootClass::vt_entry_514()
{
  ; /*0x41c0f0*/
}


// ==== 0x0041C100  FootClass::StubReturnFalse  this=FootClass  sig=csp ====
void FootClass::StubReturnFalse()
{
  ; /*0x41c100*/
}


// ==== 0x0041C110  FootClass::StubReturnVoid  this=FootClass  sig=csp ====
void FootClass::StubReturnVoid()
{
  ; /*0x41c110*/
}


// ==== 0x0041C120  FootClass::Stub  this=FootClass  sig=csp ====
void __stdcall FootClass::Stub(int a1)
{
  ; /*0x41c120*/
}


// ==== 0x0041C130  FootClass::vt_entry_534  this=FootClass  sig=csp ====
void __stdcall FootClass::vt_entry_534(int a1, int a2)
{
  ; /*0x41c130*/
}


// ==== 0x0041C140  FootClass::vt_entry_540  this=FootClass  sig=csp ====
void __stdcall FootClass::vt_entry_540(int a1)
{
  ; /*0x41c140*/
}


// ==== 0x0041C150  FootClass::ProcessTick2  this=FootClass  sig=csp ====
_DWORD *__thiscall MiniStub_41c150(_DWORD *this, _DWORD *a2)
{
  *a2 = this->FootClass_field_560; /*0x41c15a*/
  return a2; /*0x41c15c*/
}


// ==== 0x0041C160  FootClass::ProcessTick3  this=FootClass  sig=csp ====
int __thiscall MiniStub_41c160(_DWORD *this, int a2)
{
  this->FootClass_field_560 = a2; /*0x41c164*/
  return a2; /*0x41c16a*/
}


// ==== 0x0041C170  AircraftClass::MissionStubReturnZero2  this=AircraftClass  sig=csp ====
int AircraftClass::_vt12()
{
  return 1752; /*0x41c175*/
}


// ==== 0x0041C180  AircraftClass::MissionStubReturnZero3  this=AircraftClass  sig=csp ====
int AircraftClass::_vt11()
{
  return 2; /*0x41c185*/
}


// ==== 0x0041C190  AircraftClass::PowerDrainProcess  this=AircraftClass  sig=csp ====
int __stdcall AircraftClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x41c196*/
    return -2147467261; /*0x41c198*/
  *a2 = 237448642; /*0x41c1a6*/
  a2[1] = 298949647; /*0x41c1ae*/
  a2[2] = -1610610249; /*0x41c1b7*/
  a2[3] = -777003740; /*0x41c1c0*/
  return 0; /*0x41c19d*/
}


// ==== 0x0041C1D0  AircraftClass::CheckMissionAbort  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::_vt36(_DWORD *this)
{
  return *(_DWORD *)(this->Type + 96); /*0x41c1d9*/
}


// ==== 0x0041C1E0  TechnoClass::GetBodyFacing  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::sub_41C1E0(_WORD *this, _DWORD *a2)
{
  int v2; // ecx
  _WORD *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x41c1e0*/
  v2 = *ProgressTimer::GetValue(this + 464, &v4); /*0x41c1f1*/
  *a2 = v2; /*0x41c1f7*/
  return a2; /*0x41c1fa*/
}


// ==== 0x0041C200  AircraftClass::CheckMissionFail  this=AircraftClass  sig=csp ====
int __thiscall AircraftClass::_vt34(_DWORD *this)
{
  return this->Type; /*0x41c206*/
}


// ==== 0x0041C210  AircraftClass::CheckActionStatus  this=AircraftClass  sig=csp ====
AircraftClass *__thiscall AircraftClass::CheckActionStatus(void **Block, char a2)
{
  AircraftClass::Destruct(Block); /*0x41c213*/
  if ( (a2 & 1) != 0 ) /*0x41c21d*/
    __3_YAXPAX_Z(Block); /*0x41c220*/
  return (AircraftClass *)Block; /*0x41c22a*/
}


// ==== 0x0041C230  Coord::Subtract  this=IUnknown  sig=csp ====
IUnknown *__thiscall Coord::Subtract(_DWORD *this, IUnknown *aP1, IUnknown *aP2, IUnknown *aP3)
{
  *this = aP1; /*0x41c23a*/
  this->q004 = aP2; /*0x41c240*/
  this->q008 = aP3; /*0x41c243*/
  return (IUnknown *)this; /*0x41c246*/
}


// ==== 0x0041C250  ObjectClass::CreateInstanceCOM  this=ObjectClass  sig=csp ====
int __thiscall CreateInstanceCOM(LPVOID *ppv, IID *rclsid, ILocomotion *aP2, DWORD dwClsContext)
{
  int result; // eax
  HRESULT v6; // esi

  if ( *ppv ) /*0x41c254*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)*ppv + 8))(*ppv); /*0x41c25d*/
  if ( (dwClsContext & 0x14) == 0 ) /*0x41c266*/
    return CoCreateInstance(rclsid, (LPUNKNOWN)aP2, dwClsContext, &stru_817BB0, ppv); /*0x41c2cb*/
  result = CoCreateInstance(rclsid, (LPUNKNOWN)aP2, dwClsContext, &riid, (LPVOID *)&aP2); /*0x41c27d*/
  if ( result >= 0 ) /*0x41c285*/
  {
    v6 = OleRun((LPUNKNOWN)aP2); /*0x41c292*/
    if ( v6 >= 0 ) /*0x41c296*/
      v6 = (**(int (__stdcall ***)(ILocomotion *, IID *, LPVOID *))aP2)(aP2, &stru_817BB0, ppv); /*0x41c2a7*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)aP2 + 8))(aP2); /*0x41c2b0*/
    return v6; /*0x41c2b3*/
  }
  return result; /*0x41c2b5*/
}


// ==== 0x0041C2E0  Vector::ToFacingMath  this=Vector  sig=csp ====
_WORD *__thiscall Math_VectorToFacing(double *this, _WORD *a2)
{
  double v3; // st7
  double v5; // [esp+Ch] [ebp-8h]

  v5 = Math::Sqrt(*this * *this + this->q004 * this->q004); /*0x41c307*/
  v3 = Math::CalcAngle(this->q008, v5); /*0x41c31a*/
  *a2 = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427); /*0x41c338*/
  return a2; /*0x41c337*/
}


// ==== 0x0041C350  Math::Hypotenuse2D  this=RecoilData  sig=csp ====
void __thiscall Math_Hypotenuse2D(double *this)
{
  Math::Sqrt(*this * *this + *(this + 1) * *(this + 1)); /*0x41c369*/
}


// ==== 0x0041C380  Coord::Length  this=Coord  sig=csp ====
double __thiscall Coord::Length(int *this)
{
  double result; // st7

  result = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x41c3a4*/
                                         (double)*this * (double)*this
                                       + (double)this->q004 * (double)this->q004
                                       + (double)this->__pad_002 * (double)this->__pad_002));
  Math::RoundToInt(result); /*0x41c3ac*/
  return result; /*0x41c3a9*/
}


// ==== 0x0041C3C0  Vector3::Magnitude  this=Vector3  sig=csp ====
void __thiscall Vector3::Magnitude(double *this)
{
  Math::Sqrt(*this * *this + this->q004 * this->q004 + this->q008 * this->q008); /*0x41c3e4*/
}


// ==== 0x0041C3F0  BulletClass::NormalizeZeroVector  this=BulletClass  sig=csp ====
void __thiscall sub_41C3F0(double *this)
{
  if ( *this == 0.0 && this->vtable2 == 0.0 && this->vtable3 == 0.0 ) /*0x41c41d*/
  {
    *(_DWORD *)this = 0; /*0x41c41f*/
    this->vtable2 = 1079574528; /*0x41c425*/
  }
}


// ==== 0x0041C430  Function::41C430  this=RecoilData  sig=csp ====
void __thiscall Function::41C430(double *this)
{
  Math::Sqrt(*this * *this + *(this + 1) * *(this + 1)); /*0x41c449*/
}


// ==== 0x0041C460  Vector2::NormalizeNonZero  this=RecoilData  sig=csp ====
void __thiscall Vector2::NormalizeNonZero(double *this)
{
  if ( *this == 0.0 && *(this + 1) == 0.0 ) /*0x41c47d*/
  {
    *(_DWORD *)this = 0; /*0x41c47f*/
    *((_DWORD *)this + 1) = 1079574528; /*0x41c485*/
  }
}


// ==== 0x0041C490  AbstractClass::processCleanup  this=AbstractClass  sig=csp ====
char *__thiscall AbstractClass::processCleanup(_DWORD *Block, char a2)
{
  int v3; // eax
  _DWORD *v4; // ebp
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // edi

  if ( (a2 & 2) != 0 ) /*0x41c49b*/
  {
    v3 = *(Block - 1); /*0x41c49d*/
    v4 = Block - 1; /*0x41c4a1*/
    v5 = 3 * v3; /*0x41c4a4*/
    v6 = v3 - 1; /*0x41c4a7*/
    v7 = Block + v5; /*0x41c4a8*/
    if ( v6 >= 0 ) /*0x41c4ab*/
    {
      v8 = v6 + 1; /*0x41c4ae*/
      do /*0x41c4bc*/
      {
        v7 -= 3; /*0x41c4b1*/
        nullsub_84(v7); /*0x41c4b6*/
        --v8; /*0x41c4bb*/
      }
      while ( v8 ); /*0x41c4bc*/
    }
    if ( (a2 & 1) != 0 ) /*0x41c4c2*/
      __3_YAXPAX_Z(v4); /*0x41c4c5*/
    return (char *)v4; /*0x41c4cd*/
  }
  else
  {
    nullsub_84(Block); /*0x41c4d7*/
    if ( (a2 & 1) != 0 ) /*0x41c4df*/
      __3_YAXPAX_Z(Block); /*0x41c4e2*/
    return (char *)Block; /*0x41c4ea*/
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
size_t __thiscall BuildingTypeClass::Dequeue(char **this, BuildingClass *aP1)
{
  size_t result; // eax
  ObjectClass *v4; // edi
  ObjectClass *v5; // ebx
  int v6; // ecx
  ObjectClass *v7; // esi

  result = (size_t)this->vtable2; /*0x41c593*/
  if ( result ) /*0x41c598*/
  {
    if ( !this->vtable4 ) /*0x41c59e*/
    {
      qsort(*this, result, 8u, CompareFunction); /*0x41c5b0*/
      this->vtable2 = 0; /*0x41c5b8*/
      this->vtable4 = 1; /*0x41c5bf*/
    }
    v4 = (ObjectClass *)*this; /*0x41c5c9*/
    v5 = *(ObjectClass **)aP1->__pad_0; /*0x41c5cb*/
    v6 = (int)this->vtable2; /*0x41c5cd*/
    if ( v6 <= 0 ) /*0x41c5d2*/
      return 0; /*0x41c5fe*/
    while ( 1 ) /*0x41c5db*/
    {
      v7 = *(ObjectClass **)&v4->__pad_0[8 * (v6 / 2)]; /*0x41c5db*/
      if ( (int)v7 <= (int)v5 ) /*0x41c5e3*/
      {
        if ( v7 == v5 ) /*0x41c5e9*/
          return (size_t)v4 + 8 * (v6 / 2); /*0x41c603*/
        v4 = (ObjectClass *)((char *)v4 + 8 * (v6 / 2) + 8); /*0x41c5eb*/
        v6 += -1 - v6 / 2; /*0x41c5f3*/
      }
      else
      {
        v6 /= 2; /*0x41c5e5*/
      }
      if ( v6 <= 0 ) /*0x41c5f7*/
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
int __thiscall TechnoClass::sub_41C640(#374 *this, int a2, void *a3, void **a4)
{
  return AircraftClass::QueryInterface(this, (AbstractClass *)(a2 - 4), a3, a4);
}


// ==== 0x0041C650  TechnoClass::processGuardState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_41C650(#374 *this, int a2)
{
  return AircraftClass::AddRef(this, a2 - 4);
}


// ==== 0x0041C660  TechnoClass::processAttackState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_41C660(#374 *this, int a2)
{
  return AircraftClass::Release(this, a2 - 4);
}


// ==== 0x0041C670  TechnoClass::processMoveState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_41C670(#374 *this, int a2, void *a3, void **a4)
{
  return AircraftClass::QueryInterface(this, (AbstractClass *)(a2 - 1728), a3, a4);
}


// ==== 0x0041C680  TechnoClass::processHarvestState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_41C680(#374 *this, int a2)
{
  return AircraftClass::AddRef(this, a2 - 1728);
}


// ==== 0x0041C690  TechnoClass::processDeployState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_41C690(#374 *this, int a2)
{
  return AircraftClass::Release(this, a2 - 1728);
}


// ==== 0x0041C6A0  sub_41C6A0  this=-  sig=ida-proto ====
void sub_41C6A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41c6ac*/
  MEMORY[0x889EF0] = Math::Sqrt(v0 + v0); /*0x41c6be*/
}


// ==== 0x0041C6D0  sub_41C6D0  this=-  sig=ida-proto ====
void sub_41C6D0()
{
  MEMORY[0x889F50] = MEMORY[0x889EF0] / 60.0; /*0x41c6dc*/
}


// ==== 0x0041C6F0  sub_41C6F0  this=-  sig=ida-proto ====
void sub_41C6F0()
{
  MEMORY[0x889F30] = 1.0 / MEMORY[0x889F50]; /*0x41c6fc*/
}


// ==== 0x0041C710  sub_41C710  this=-  sig=ida-proto ====
void sub_41C710()
{
  MEMORY[0x889F28] = 0.0174532925199433 * 45.0; /*0x41c71c*/
}


// ==== 0x0041C730  sub_41C730  this=-  sig=ida-proto ====
void sub_41C730()
{
  MEMORY[0x889EF8] = 0.0174532925199433 * 60.0; /*0x41c73c*/
}


// ==== 0x0041C750  sub_41C750  this=-  sig=ida-proto ====
void sub_41C750()
{
  MEMORY[0x889ED0] = 0.0174532925199433 * 90.0; /*0x41c75c*/
}


// ==== 0x0041C770  sub_41C770  this=-  sig=ida-proto ====
__int64 sub_41C770()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x889ED0] - MEMORY[0x889EF8]); /*0x41c782*/
  result = Math::RoundToInt(v0 * MEMORY[0x889EF0] * 0.5); /*0x41c796*/
  MEMORY[0x889F58] = result; /*0x41c79b*/
  return result; /*0x41c7a0*/
}


// ==== 0x0041C7B0  sub_41C7B0  this=-  sig=ida-proto ====
void sub_41C7B0()
{
  MEMORY[0x889F00] = Math::ArcTan((double)MEMORY[0x889F58] * 0.00390625); /*0x41c7c7*/
}


// ==== 0x0041C7E0  sub_41C7E0  this=-  sig=ida-proto ====
void sub_41C7E0()
{
  MEMORY[0x889F18] = Math::ArcTan((double)(2 * MEMORY[0x889F58]) / MEMORY[0x889EF0]); /*0x41c802*/
}


// ==== 0x0041C810  sub_41C810  this=-  sig=ida-proto ====
__int64 sub_41C810()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x889F58]) + 0.5); /*0x41c82b*/
  MEMORY[0x889F4C] = result; /*0x41c830*/
  return result; /*0x41c836*/
}


// ==== 0x0041C840  sub_41C840  this=-  sig=ida-proto ====
int sub_41C840()
{
  MEMORY[0x889EE8] = 0; /*0x41c842*/
  MEMORY[0x889EEA] = 0; /*0x41c848*/
  return 0; /*0x41c84e*/
}


// ==== 0x0041C850  sub_41C850  this=-  sig=ida-proto ====
int sub_41C850()
{
  MEMORY[0x889F08] = 0; /*0x41c852*/
  MEMORY[0x889F0C] = 0; /*0x41c857*/
  MEMORY[0x889F10] = 0; /*0x41c85c*/
  return 0; /*0x41c861*/
}


// ==== 0x0041C870  sub_41C870  this=-  sig=ida-proto ====
int sub_41C870()
{
  MEMORY[0x889F48] = 0; /*0x41c875*/
  MEMORY[0x889F40] = 128; /*0x41c87f*/
  MEMORY[0x889F44] = 128; /*0x41c884*/
  return 128; /*0x41c889*/
}


// ==== 0x0041C890  sub_41C890  this=-  sig=ida-proto ====
int sub_41C890()
{
  MEMORY[0x889ED8] = 0; /*0x41c892*/
  MEMORY[0x889EDC] = 0; /*0x41c897*/
  MEMORY[0x889EE0] = 0; /*0x41c89c*/
  MEMORY[0x889EE4] = 0; /*0x41c8a1*/
  return 0; /*0x41c8a6*/
}


// ==== 0x0041C8B0  AircraftTypeClass::AircraftTypeClass  this=AircraftTypeClass  sig=csp ====
int __thiscall AircraftTypeClass::AircraftTypeClass(int this, ObjectClass *aP1)
{
  AircraftTypeClass *v3; // eax
  bool v4; // zf
  int v5; // ecx
  CCINIClass *v6; // edx

  TechnoTypeClass::ReadINI((char *)this, aP1->__pad_0, 4); /*0x41c8bb*/
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
  *(_DWORD *)(this + 12) = &vt_AircraftTypeClass; /*0x41c913*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x41c91a*/
  v3 = MEMORY[0xA8B228]; /*0x41c91f*/
  if ( (int)MEMORY[0xA8B228] < MEMORY[0xA8B220] /*0x41c95d*/
    || (MEMORY[0xA8B225] || !MEMORY[0xA8B220])
    && MEMORY[0xA8B22C] > 0
    && (v4 = ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))MEMORY[0xA8B218]->field_8)(
               &MEMORY[0xA8B218],
               MEMORY[0xA8B220] + MEMORY[0xA8B22C],
               0) == 0,
        v3 = MEMORY[0xA8B228],
        !v4) )
  {
    MEMORY[0xA8B228] = (AircraftTypeClass *)&v3->vtable0[1]; /*0x41c962*/
    *(_DWORD *)&MEMORY[0xA8B21C]->__pad_0[4 * (_DWORD)v3] = this; /*0x41c96c*/
    v3 = MEMORY[0xA8B228]; /*0x41c96f*/
  }
  v5 = 0; /*0x41c974*/
  if ( (int)v3 <= 0 ) /*0x41c978*/
  {
LABEL_11:
    v5 = -1; /*0x41c98c*/
  }
  else
  {
    v6 = MEMORY[0xA8B21C]; /*0x41c97a*/
    while ( *(_DWORD *)v6->__pad_0 != this ) /*0x41c982*/
    {
      ++v5; /*0x41c984*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x41c985*/
      if ( v5 >= (int)v3 ) /*0x41c98a*/
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


// ==== 0x0041CAA0  TypeClass::FindByName  this=INIClass  sig=csp ====
int __thiscall TypeClass::FindByName(void *this)
{
  int v2; // esi

  if ( !this ) /*0x41caa6*/
    return -1; /*0x41caa6*/
  v2 = 0; /*0x41caad*/
  if ( *(int *)&HouseClass_Player.__pad_5568[8052] <= 0 ) /*0x41cab1*/
    return -1; /*0x41cad6*/
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8040] + 4 * v2) + 36), this) ) /*0x41caca*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[8052] ) /*0x41cad4*/
      return -1; /*0x41cad4*/
  }
  return v2; /*0x41cad6*/
}


// ==== 0x0041CAF0  InitRotorArt  this=-  sig=ida-proto ====
int sub_41CAF0()
{
  int result; // eax

  MEMORY[0x889F5C] = SearchMIXFile(MEMORY[0x817FE4], 0); /*0x41cb03*/
  result = SearchMIXFile(MEMORY[0x817FD8], 0); /*0x41cb08*/
  MEMORY[0x889F60] = result; /*0x41cb0d*/
  return result; /*0x41cb12*/
}


// ==== 0x0041CB20  AircraftTypeClass::ConstructAircraft  this=AircraftTypeClass  sig=csp ====
AircraftClass *__thiscall AircraftTypeClass::ConstructAircraft(IUnknown *this, AbstractClass *ppv)
{
  int v3; // eax

  v3 = __2_YAPAXI_Z(0x6D8u); /*0x41cb28*/
  if ( v3 ) /*0x41cb32*/
    return (AircraftClass *)AircraftClass::Construct(v3, this, ppv); /*0x41cb3c*/
  else
    return 0; /*0x41cb45*/
}


// ==== 0x0041CB50  AircraftTypeClass::vt_entry_A0  this=AircraftTypeClass  sig=csp ====
char TechnoTypeClass::vt_entry_A0()
{
  return 0; /*0x41cb52*/
}


// ==== 0x0041CB60  AircraftTypeClass::StubReturnFalse  this=AircraftTypeClass  sig=csp ====
char AircraftTypeClass::_vt41()
{
  return 0; /*0x41cb62*/
}


// ==== 0x0041CB70  AircraftTypeClass::CreateAircraft  this=AircraftTypeClass  sig=csp ====
int *__stdcall AircraftTypeClass::_vt36(int a1)
{
  if ( (MEMORY[0x889F38] & 1) == 0 ) /*0x41cb7b*/
  {
    MEMORY[0x889F38] |= 1u; /*0x41cb96*/
    MEMORY[0x889F20] = 0; /*0x41cb9c*/
    MEMORY[0x889F24] = 2147450879; /*0x41cbb4*/
    atexit(nullsub_85); /*0x41cbba*/
  }
  return &MEMORY[0x889F20]; /*0x41cbc8*/
}


// ==== 0x0041CBD0  nullsub_85  this=-  sig=ida-proto ====
void __cdecl nullsub_85()
{
  ; /*0x41cbd0*/
}


// ==== 0x0041CBE0  AircraftTypeClass::GetDimensions  this=AircraftTypeClass  sig=csp ====
char __stdcall AircraftTypeClass::_vt32(int a1, int a2)
{
  return 0; /*0x41cbe2*/
}


// ==== 0x0041CBF0  AircraftTypeClass::vt_entry_7C  this=AircraftTypeClass  sig=csp ====
_DWORD *__stdcall ObjectTypeClass::vt_entry_7C(_DWORD *a1)
{
  int v1; // esi

  v1 = 2 * MEMORY[0x889F58]; /*0x41cbfc*/
  *a1 = 256; /*0x41cc07*/
  a1[1] = 256; /*0x41cc09*/
  a1[2] = v1; /*0x41cc0c*/
  return a1; /*0x41cc0f*/
}


// ==== 0x0041CC20  AircraftTypeClass::LoadTypeData  this=AircraftTypeClass  sig=csp ====
char __userpurge AircraftTypeClass::vt_25_@<al>(int a1@<ecx>, double a2@<st0>, unsigned __int8 ***a3)
{
  char Bool_Overwrite; // al
  char v5; // cl
  char v6; // al
  char v7; // al
  char v8; // al
  int v9; // eax
  char v10; // al
  char v11; // cl
  char v13; // [esp-Ch] [ebp-98h]
  char v14; // [esp-Ch] [ebp-98h]
  char v15; // [esp-Ch] [ebp-98h]
  int v16; // [esp-Ch] [ebp-98h]
  int v17; // [esp+8h] [ebp-84h]
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF

  INIClass::ResetSection(a3); /*0x41cc33*/
  if ( !ObjectTypeClass::LoadExtras(a1, a2, a3) ) /*0x41cc3b*/
    return 0; /*0x41cd98*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, unk_81804C, *(_BYTE *)(a1 + 3594)); /*0x41cc5c*/
  v5 = *(_BYTE *)(a1 + 3597); /*0x41cc61*/
  *(_BYTE *)(a1 + 3594) = Bool_Overwrite; /*0x41cc67*/
  v6 = INIClass::ReadBool_Overwrite(a1 + 36, unk_81803C, v5); /*0x41cc76*/
  v13 = *(_BYTE *)(a1 + 3598); /*0x41cc83*/
  *(_BYTE *)(a1 + 3597) = v6; /*0x41cc8a*/
  *(_BYTE *)(a1 + 3598) = INIClass::ReadBool_Overwrite(a1 + 36, unk_818034, v13); /*0x41cc95*/
  v7 = INIClass::ReadBool_Overwrite(a1 + 36, unk_818028, *(_BYTE *)(a1 + 3580)); /*0x41ccaa*/
  v14 = *(_BYTE *)(a1 + 3592); /*0x41ccbb*/
  *(_BYTE *)(a1 + 3580) = v7; /*0x41ccc7*/
  v8 = INIClass::ReadBool_Overwrite(a1 + 504, unk_818020, v14); /*0x41cccd*/
  v15 = *(_BYTE *)(a1 + 3593); /*0x41ccdd*/
  *(_BYTE *)(a1 + 3592) = v8; /*0x41cce4*/
  *(_BYTE *)(a1 + 3593) = INIClass::ReadBool_Overwrite(a1 + 504, unk_818014, v15); /*0x41ccf9*/
  v17 = *(_DWORD *)(a1 + 3584); /*0x41cd15*/
  if ( INIClass::GetString( /*0x41cd19*/
         (unsigned __int8 ***)&MEMORY[0x887180],
         (unsigned __int8 *)(a1 + 504),
         (unsigned __int8 *)unk_81800C,
         &MEMORY[0x889F64],
         Destination,
         128) )
  {
    v9 = AnimTypeClass::FindOrCreate(Destination); /*0x41cd26*/
  }
  else
  {
    v9 = v17; /*0x41cd2d*/
  }
  v16 = *(_DWORD *)(a1 + 3588); /*0x41cd3c*/
  *(_DWORD *)(a1 + 3584) = v9; /*0x41cd43*/
  *(_DWORD *)(a1 + 3588) = INIClass::ReadInt_Overwrite(a1 + 504, unk_818000, v16); /*0x41cd4e*/
  v10 = INIClass::ReadBool_Overwrite(a1 + 36, unk_817FF8, *(_BYTE *)(a1 + 3595)); /*0x41cd63*/
  v11 = *(_BYTE *)(a1 + 3596); /*0x41cd68*/
  *(_BYTE *)(a1 + 3595) = v10; /*0x41cd6e*/
  *(_BYTE *)(a1 + 3596) = INIClass::ReadBool_Overwrite(a1 + 36, unk_817FF0, v11); /*0x41cd83*/
  return 1; /*0x41cd8a*/
}


// ==== 0x0041CDB0  AircraftTypeClass::PowerDrainUpdate  this=AircraftTypeClass  sig=csp ====
int __thiscall AircraftTypeClass::_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx

  v3 = BuildingTypeClass::ProcessPower(this, a2); /*0x41cdb9*/
  LOBYTE(v3) = *(_BYTE *)(this + 3592); /*0x41cdbe*/
  Power::FlagProcess(a2, v3); /*0x41cdc7*/
  LOBYTE(v4) = *(_BYTE *)(this + 3593); /*0x41cdcc*/
  Power::FlagProcess(a2, v4); /*0x41cdd5*/
  LOBYTE(v5) = *(_BYTE *)(this + 3594); /*0x41cdda*/
  v6 = Power::FlagProcess(a2, v5); /*0x41cde3*/
  LOBYTE(v6) = *(_BYTE *)(this + 3597); /*0x41cde8*/
  Power::FlagProcess(a2, v6); /*0x41cdf1*/
  LOBYTE(v7) = *(_BYTE *)(this + 3598); /*0x41cdf6*/
  Power::FlagProcess(a2, v7); /*0x41cdff*/
  return Power::TimerProcess(*(_DWORD *)(this + 3576)); /*0x41ce12*/
}


// ==== 0x0041CE20  AircraftTypeClass::LoadFromINI  this=AircraftTypeClass  sig=csp ====
int __stdcall AircraftTypeClass::LoadFromINI(ObjectTypeClass *aP0, int aP1)
{
  int result; // eax

  result = TechnoTypeClass::SaveLoad_Prefix(aP0, aP1); /*0x41ce2b*/
  if ( result >= 0 ) /*0x41ce32*/
  {
    if ( aP0 ) /*0x41ce36*/
    {
      TechnoTypeClass::Construct((int)aP0, (ObjectTypeClass *)&aP1); /*0x41ce3f*/
      *(_DWORD *)aP0->__pad_0 = &AircraftTypeClass::`vftable'; /*0x41ce44*/
      *(_DWORD *)&aP0->__pad_0[4] = &AircraftTypeClass::`vftable'; /*0x41ce4a*/
      *(_DWORD *)&aP0->__pad_0[8] = &AircraftTypeClass::`vftable'; /*0x41ce51*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_AircraftTypeClass; /*0x41ce58*/
    }
    ObjectPtr::RegisterForTracking( /*0x41ce6b*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[5].ChargerBarrels[6]);
    VoxelAnimType::LoadAnim(aP0->__pad_0); /*0x41ce72*/
    ObjectTypeClass::Load2DArt(aP0->__pad_0); /*0x41ce79*/
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
int __stdcall AircraftTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x41ceb6*/
    return -2147467261; /*0x41ceb8*/
  *a2 = -1366608935; /*0x41cec6*/
  a2[1] = 298976796; /*0x41cece*/
  a2[2] = 1610654892; /*0x41ced7*/
  a2[3] = -1252326136; /*0x41cee0*/
  return 0; /*0x41cebd*/
}


// ==== 0x0041CEF0  KeywordClass::FindOrCreate  this=IUnknown  sig=csp ====
AircraftTypeClass *__thiscall KeywordClass::FindOrCreate(ObjectClass *Source)
{
  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x41cf0c*/
    return 0; /*0x41cf6f*/
  v2 = 0; /*0x41cf1d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[8052] <= 0 ) /*0x41cf21*/
  {
LABEL_6:
    v3 = __2_YAPAXI_Z(0xE10u); /*0x41cf46*/
    if ( v3 ) /*0x41cf55*/
      return (AircraftTypeClass *)AircraftTypeClass::AircraftTypeClass(v3, Source); /*0x41cf61*/
    return 0; /*0x41cf55*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8040] + 4 * v2) + 36), Source) ) /*0x41cf3a*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[8052] ) /*0x41cf44*/
      goto LABEL_6; /*0x41cf44*/
  }
  return *(AircraftTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[8040] + 4 * v2); /*0x41cf5f*/
}


// ==== 0x0041CF80  ObjectTypeClass::Copy  this=ObjectTypeClass  sig=csp ====
_DWORD *__stdcall ObjectTypeClass::Copy(_DWORD *a0, ObjectTypeClass *aP1)
{
  *a0 = *(_DWORD *)aP1->__pad_0; /*0x41cf8d*/
  a0[1] = *(_DWORD *)&aP1->__pad_0[4]; /*0x41cf92*/
  a0[2] = *(_DWORD *)&aP1->__pad_0[8]; /*0x41cf99*/
  return a0; /*0x41cf95*/
}


// ==== 0x0041CFA0  ObjectTypeClass::GetMember41_2  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectClass_GetMember41_2(_DWORD *this)
{
  return this->Image; /*0x41cfa6*/
}


// ==== 0x0041CFB0  AircraftTypeClass::GetTypeIdentifier  this=AircraftTypeClass  sig=csp ====
int AircraftTypeClass::_vt11()
{
  return 3; /*0x41cfb5*/
}


// ==== 0x0041CFC0  AircraftTypeClass::GetObjectSize  this=AircraftTypeClass  sig=csp ====
int AircraftTypeClass::_vt12()
{
  return 3600; /*0x41cfc5*/
}


// ==== 0x0041CFD0  AircraftTypeClass::GetAuxField  this=AircraftTypeClass  sig=csp ====
int __thiscall AircraftTypeClass::_vt16(_DWORD *this)
{
  return this->ArrayIndex; /*0x41cfd6*/
}


// ==== 0x0041CFE0  AircraftTypeClass::ddtor  this=AircraftTypeClass  sig=csp ====
AircraftTypeClass *__thiscall AircraftTypeClass::ddtor(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &AircraftTypeClass::`vftable'; /*0x41cfe6*/
  *(Block + 1) = &AircraftTypeClass::`vftable'; /*0x41cfec*/
  *(Block + 2) = &AircraftTypeClass::`vftable'; /*0x41cff3*/
  *(Block + 3) = &vt_AircraftTypeClass; /*0x41cffa*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x41d001*/
  v5 = Block; /*0x41d016*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA8B218] + 16))(&MEMORY[0xA8B218], &v5); /*0x41d01a*/
  if ( v3 != -1 && v3 < MEMORY[0xA8B228] && v3 < --MEMORY[0xA8B228] ) /*0x41d035*/
  {
    do /*0x41d04d*/
    {
      ++v3; /*0x41d03d*/
      *((_DWORD *)MEMORY[0xA8B21C] + v3 - 1) = *((_DWORD *)MEMORY[0xA8B21C] + v3); /*0x41d041*/
    }
    while ( v3 < MEMORY[0xA8B228] ); /*0x41d04d*/
  }
  TechnoTypeClass::DTOR((int)Block); /*0x41d051*/
  if ( (a2 & 1) != 0 ) /*0x41d05b*/
    OperatorDelete(Block); /*0x41d05e*/
  return (AircraftTypeClass *)Block; /*0x41d068*/
}


// ==== 0x0041D070  sub_41D070  this=-  sig=ida-proto ====
void sub_41D070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41d07c*/
  MEMORY[0x889F88] = Math::Sqrt(v0 + v0); /*0x41d08e*/
}


// ==== 0x0041D0A0  sub_41D0A0  this=-  sig=ida-proto ====
void sub_41D0A0()
{
  MEMORY[0x889FF0] = MEMORY[0x889F88] / 60.0; /*0x41d0ac*/
}


// ==== 0x0041D0C0  sub_41D0C0  this=-  sig=ida-proto ====
void sub_41D0C0()
{
  MEMORY[0x889FD8] = 1.0 / MEMORY[0x889FF0]; /*0x41d0cc*/
}


// ==== 0x0041D0E0  sub_41D0E0  this=-  sig=ida-proto ====
void sub_41D0E0()
{
  MEMORY[0x889FD0] = 0.0174532925199433 * 45.0; /*0x41d0ec*/
}


// ==== 0x0041D100  sub_41D100  this=-  sig=ida-proto ====
void sub_41D100()
{
  MEMORY[0x889F90] = 0.0174532925199433 * 60.0; /*0x41d10c*/
}


// ==== 0x0041D120  sub_41D120  this=-  sig=ida-proto ====
void sub_41D120()
{
  *(double *)(&MEMORY[0x889F64] + 4) = 0.0174532925199433 * 90.0; /*0x41d12c*/
}


// ==== 0x0041D140  sub_41D140  this=-  sig=ida-proto ====
__int64 sub_41D140()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(*(double *)(&MEMORY[0x889F64] + 4) - MEMORY[0x889F90]); /*0x41d152*/
  result = Math::RoundToInt(v0 * MEMORY[0x889F88] * 0.5); /*0x41d166*/
  MEMORY[0x889FF8] = result; /*0x41d16b*/
  return result; /*0x41d170*/
}


// ==== 0x0041D180  sub_41D180  this=-  sig=ida-proto ====
void sub_41D180()
{
  MEMORY[0x889F98] = Math::ArcTan((double)MEMORY[0x889FF8] * 0.00390625); /*0x41d197*/
}


// ==== 0x0041D1B0  sub_41D1B0  this=-  sig=ida-proto ====
void sub_41D1B0()
{
  MEMORY[0x889FB0] = Math::ArcTan((double)(2 * MEMORY[0x889FF8]) / MEMORY[0x889F88]); /*0x41d1d2*/
}


// ==== 0x0041D1E0  sub_41D1E0  this=-  sig=ida-proto ====
__int64 sub_41D1E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x889FF8]) + 0.5); /*0x41d1fb*/
  MEMORY[0x889FEC] = result; /*0x41d200*/
  return result; /*0x41d206*/
}


// ==== 0x0041D210  sub_41D210  this=-  sig=ida-proto ====
int sub_41D210()
{
  *((_DWORD *)&MEMORY[0x889F64] + 7) = 0; /*0x41d212*/
  return 0; /*0x41d21e*/
}


// ==== 0x0041D220  sub_41D220  this=-  sig=ida-proto ====
int sub_41D220()
{
  MEMORY[0x889FA0] = 0; /*0x41d222*/
  MEMORY[0x889FA4] = 0; /*0x41d227*/
  MEMORY[0x889FA8] = 0; /*0x41d22c*/
  return 0; /*0x41d231*/
}


// ==== 0x0041D240  sub_41D240  this=-  sig=ida-proto ====
int sub_41D240()
{
  MEMORY[0x889FE8] = 0; /*0x41d245*/
  MEMORY[0x889FE0] = 128; /*0x41d24f*/
  MEMORY[0x889FE4] = 128; /*0x41d254*/
  return 128; /*0x41d259*/
}


// ==== 0x0041D260  sub_41D260  this=-  sig=ida-proto ====
int sub_41D260()
{
  *(_QWORD *)(&MEMORY[0x889F64] + 12) = 0; /*0x41d262*/
  *(_QWORD *)(&MEMORY[0x889F64] + 20) = 0; /*0x41d26c*/
  return 0; /*0x41d276*/
}


// ==== 0x0041D280  sub_41D280  this=-  sig=ida-proto ====
int sub_41D280()
{
  MEMORY[0x889FBC] = 0; /*0x41d287*/
  MEMORY[0x889FC0] = 0; /*0x41d28c*/
  MEMORY[0x889FC4] = 1; /*0x41d291*/
  MEMORY[0x889FC5] = 0; /*0x41d298*/
  MEMORY[0x889FB8] = (int)&vt_DynamicVectorClass_AirstrikeClass; /*0x41d29d*/
  MEMORY[0x889FCC] = 10; /*0x41d2a7*/
  MEMORY[0x889FC8] = 0; /*0x41d2b1*/
  return atexit(sub_41D2C0); /*0x41d2bc*/
}


// ==== 0x0041D2C0  sub_41D2C0  this=-  sig=ida-proto ====
void __cdecl sub_41D2C0()
{
  MEMORY[0x889FB8] = (int)&vt_VectorClass_AirstrikeClass; /*0x41d2c8*/
  if ( MEMORY[0x889FBC] && MEMORY[0x889FC5] ) /*0x41d2dc*/
  {
    __3_YAXPAX_Z(MEMORY[0x889FBC]); /*0x41d2df*/
    MEMORY[0x889FBC] = 0; /*0x41d2e7*/
  }
  MEMORY[0x889FC5] = 0; /*0x41d2ed*/
  MEMORY[0x889FC0] = 0; /*0x41d2f3*/
}


// ==== 0x0041D300  AbstractClass::Create  this=AirstrikeClass  sig=csp ====
AbstractClass *__thiscall sub_41D300(AbstractClass *this)
{
  int v2; // eax

  AbstractClass::Constructor(this); /*0x41d303*/
  this->__pad_0[0] = (int)&AirstrikeClass::`vftable'; /*0x41d308*/
  this->__pad_0[1] = (int)&AirstrikeClass::`vftable'; /*0x41d30e*/
  this->__pad_0[2] = (int)&AirstrikeClass::`vftable'; /*0x41d315*/
  this->__pad_0[3] = (int)&vt_AirstrikeClass; /*0x41d31c*/
  if ( MEMORY[0x889FC8] < MEMORY[0x889FC0] /*0x41d359*/
    || (MEMORY[0x889FC5] || !MEMORY[0x889FC0])
    && MEMORY[0x889FCC] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x889FB8] + 8))(
         &MEMORY[0x889FB8],
         MEMORY[0x889FC0] + MEMORY[0x889FCC],
         0) )
  {
    v2 = MEMORY[0x889FC8]++; /*0x41d366*/
    *((_DWORD *)MEMORY[0x889FBC] + v2) = this; /*0x41d375*/
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

  AbstractClass::Constructor((#373 *)this); /*0x41d384*/
  *(_DWORD *)this = &AirstrikeClass::`vftable'; /*0x41d389*/
  *(_DWORD *)(this + 4) = &AirstrikeClass::`vftable'; /*0x41d38f*/
  *(_DWORD *)(this + 8) = &AirstrikeClass::`vftable'; /*0x41d396*/
  *(_DWORD *)(this + 12) = &AirstrikeClass::`vftable'; /*0x41d39d*/
  if ( MEMORY[0x889FC8] < MEMORY[0x889FC0] /*0x41d3d9*/
    || (MEMORY[0x889FC5] || !MEMORY[0x889FC0])
    && MEMORY[0x889FCC] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x889FB8] + 8))(
         &MEMORY[0x889FB8],
         MEMORY[0x889FC0] + MEMORY[0x889FCC],
         0) )
  {
    v3 = MEMORY[0x889FC8]++; /*0x41d3e6*/
    *((_DWORD *)MEMORY[0x889FBC] + v3) = this; /*0x41d3f5*/
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
char __thiscall ObjectClass::CleanupAirstrikeTarget(int this, AudioController *aP1)
{
  int v3; // ebp
  int v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  AudioController *i; // eax
  AudioController *j; // esi
  _DWORD v10[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( MEMORY[0xA8D63C].__pad_1258[268] )
  {
    if ( aP1 )
    {
      v3 = (aP1->__pad_10[4] & 4) != 0 ? (unsigned int)aP1 : 0;
      v4 = (*(int (__thiscall **)(AudioController *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) == 6 ? (unsigned int)aP1 : 0;
    }
    else
    {
      v3 = 0; /*0x41d560*/
      v4 = 0; /*0x41d562*/
    }
    v5 = *(_DWORD *)(this + 76); /*0x41d585*/
    if ( aP1 == (AudioController *)v5 )
    {
      if ( *(_BYTE *)(this + 61) /*0x41d5a5*/
        && v5
        && *(_DWORD *)(this + 92)
        && (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v5 + 540)) )
      {
        v6 = (_DWORD *)(*(_DWORD *)(this + 92) + 156); /*0x41d5b2*/
        v10[0] = *v6; /*0x41d5b9*/
        v10[1] = v6[1]; /*0x41d5c6*/
        v10[2] = v6[2]; /*0x41d5d1*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 604), (int)v10, 0); /*0x41d5db*/
      }
      WTFMode::ResetUnitFlags(this); /*0x41d5e2*/
      for ( i = *(AudioController **)(this + 92); i; i = *(AudioController **)(this + 92) ) /*0x41d5ec*/
        AirstrikeClass::RemoveAircraft(this, i); /*0x41d5f1*/
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
      LOBYTE(v4) = AirstrikeClass::RemoveAircraft(this, (AudioController *)v3); /*0x41d64f*/
    }
    else if ( v4 && *(_DWORD *)(v4 + 660) == this && (*(int *)(v4 + 108) <= 0 || !*(_BYTE *)(v4 + 144)) ) /*0x41d66e*/
    {
      LOBYTE(v4) = WTFMode::ResetUnitFlags(this); /*0x41d678*/
    }
  }
  else
  {
    LOBYTE(v4) = (_BYTE)aP1; /*0x41d686*/
    if ( aP1 == *(AudioController **)(this + 76) ) /*0x41d68f*/
    {
      for ( j = *(AudioController **)(this + 92); j; j = *(AudioController **)&j[7].__pad_94[4] ) /*0x41d696*/
        *(_DWORD *)&j[3].__pad_10[68] = 0; /*0x41d698*/
    }
    else if ( aP1 && (aP1->__pad_10[4] & 4) != 0 && *(_DWORD *)&aP1[3].__pad_10[68] == this ) /*0x41d6c1*/
    {
      LOBYTE(v4) = AirstrikeClass::RemoveAircraft(this, aP1); /*0x41d6c6*/
    }
  }
  return v4; /*0x41d619*/
}


// ==== 0x0041D6E0  AirstrikeClass::Stat  this=AirstrikeClass  sig=csp ====
int __thiscall AirstrikeClass::Stat(void *this, AbstractClass *aP1)
{
  return AbstractClass::ProcessPower((#378 *)this); /*0x41d6ea*/
}


// ==== 0x0041D6F0  AirstrikeClass::Write  this=AirstrikeClass  sig=csp ====
int __stdcall AirstrikeClass::Write(AbstractClass *aP0, int aP1)
{
  AbstractClass *Prefix_0; // edi

  Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x41d701*/
  if ( (int)Prefix_0 >= 0 ) /*0x41d705*/
  {
    if ( aP0 ) /*0x41d709*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x41d712*/
      *(_DWORD *)aP0->__pad_0 = &AirstrikeClass::`vftable'; /*0x41d717*/
      *(_DWORD *)&aP0->__pad_0[4] = &AirstrikeClass::`vftable'; /*0x41d71d*/
      *(_DWORD *)&aP0->__pad_0[8] = &AirstrikeClass::`vftable'; /*0x41d724*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_AirstrikeClass; /*0x41d72b*/
    }
    ObjectPtr::RegisterForTracking( /*0x41d73b*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x41d749*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].__pad_0[8]);
    ObjectPtr::RegisterForTracking( /*0x41d757*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].__pad_0[12]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[2].uniqueId); /*0x41d765*/
    ObjectPtr::RegisterForTracking( /*0x41d773*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].abstractFlags);
  }
  return (int)Prefix_0->__pad_0; /*0x41d77a*/
}


// ==== 0x0041D780  AirstrikeClass::Seek  this=AirstrikeClass  sig=csp ====
int __stdcall AirstrikeClass::Seek(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x41d794*/
}


// ==== 0x0041D7A0  AirstrikeClass::ddtor  this=AirstrikeClass  sig=csp ====
int __stdcall AirstrikeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x41d7a6*/
    return -2147467261; /*0x41d7a8*/
  *a2 = 1893611809; /*0x41d7b6*/
  a2[1] = 299179558; /*0x41d7be*/
  a2[2] = -1610574449; /*0x41d7c7*/
  a2[3] = -1672772828; /*0x41d7d0*/
  return 0; /*0x41d7ad*/
}


// ==== 0x0041D7E0  Warhead::GetWarheadSound  this=Warhead  sig=csp ====
bool __thiscall sub_41D7E0(int this, int a2)
{
  int v3; // eax

  if ( VeterancyStruct::IsElite((float *)(*(_DWORD *)(this + 76) + 336)) ) /*0x41d7ec*/
    v3 = *(_DWORD *)(this + 72); /*0x41d7f5*/
  else
    v3 = *(_DWORD *)(this + 68); /*0x41d7fa*/
  return !*(_BYTE *)(this + 60) && v3 + *(_DWORD *)(this + 64) <= (int)MEMORY[0xA8ED84] || a2 != *(_DWORD *)(this + 80); /*0x41d814*/
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
  v17 = *(_DWORD *)(*(_DWORD *)MEMORY[0x8871E0]->? + 3576); /*0x41d895*/
  if ( VeterancyStruct::IsElite((float *)(*(_DWORD *)(this + 76) + 336)) ) /*0x41d8a2*/
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
  v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x41d907*/
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
      result = StartAudioControllerAt(MEMORY[0x8871E0]->?, (int)v18, 0); /*0x41d96b*/
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
        *((_BYTE *)a2 + 1784) = *((_BYTE *)&MEMORY[0x8871E0][1].?[12] /*0x41d9b8*/
                                + 2 * MEMORY[0x8871E0][1].?[10]
                                + MEMORY[0x8871E0][1].?[10]);
        *((_BYTE *)a2 + 1785) = *((_BYTE *)&MEMORY[0x8871E0][1].?[12] /*0x41d9d5*/
                                + 2 * MEMORY[0x8871E0][1].?[10]
                                + MEMORY[0x8871E0][1].?[10]
                                + 1);
        v13 = *a2; /*0x41d9f1*/
        *((_BYTE *)a2 + 1786) = *((_BYTE *)&MEMORY[0x8871E0][1].?[12] /*0x41d9f5*/
                                + 2 * MEMORY[0x8871E0][1].?[10]
                                + MEMORY[0x8871E0][1].?[10]
                                + 2);
        a2[447] = 1; /*0x41d9fb*/
        return (*(int (__thiscall **)(int *, int))(v13 + 292))(a2, 2); /*0x41da05*/
      }
    }
  }
  return result; /*0x41da0b*/
}


// ==== 0x0041DA20  AirstrikeClass::ReassignTarget  this=WTFMode  sig=csp ====
char __thiscall sub_41DA20(int this, int a2)
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
    LOBYTE(v8) = WTFMode::ResetUnitFlags(this); /*0x41da5c*/
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
char __thiscall WTFMode_ResetUnitFlags(int this)
{
  _DWORD *v1; // eax
  int v3; // ecx
  _DWORD *v4; // esi
  int v5; // edi
  _DWORD *v6; // esi
  _DWORD *v7; // edx
  _DWORD *v8; // ecx
  int v9; // edi

  LOBYTE(v1) = MEMORY[0xA8E9A0]; /*0x41db40*/
  if ( MEMORY[0xA8E9A0] ) /*0x41db4d*/
  {
    v3 = *(_DWORD *)(this + 92); /*0x41db53*/
    v1 = *(_DWORD **)(this + 92); /*0x41db56*/
    if ( v1 ) /*0x41db5a*/
    {
      while ( v1[191] ) /*0x41db62*/
      {
        v1 = (_DWORD *)v1[374]; /*0x41db64*/
        if ( !v1 ) /*0x41db6c*/
          goto LABEL_8; /*0x41db6c*/
      }
      v1 = *(_DWORD **)(this + 92); /*0x41db74*/
      if ( v3 ) /*0x41db78*/
      {
        do /*0x41db88*/
        {
          v1[191] = 0; /*0x41db7a*/
          v1 = (_DWORD *)v1[374]; /*0x41db80*/
        }
        while ( v1 ); /*0x41db88*/
      }
    }
LABEL_8:
    v4 = *(_DWORD **)(this + 92); /*0x41db8a*/
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
    v6 = *(_DWORD **)(this + 80); /*0x41dbca*/
    *(_BYTE *)(this + 61) = 0; /*0x41dbcd*/
    if ( v6 ) /*0x41dbd2*/
    {
      v1 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v6 + 44))(v6); /*0x41dbd8*/
      if ( v1 == (_DWORD *)6 && v6[165] == this ) /*0x41dbe6*/
      {
        LOBYTE(v1) = MEMORY[0x889FC8]; /*0x41dbe8*/
        v7 = 0; /*0x41dbed*/
        if ( MEMORY[0x889FC8] > 0 ) /*0x41dbf1*/
        {
          v8 = MEMORY[0x889FBC]; /*0x41dbf3*/
          v9 = MEMORY[0x889FC8]; /*0x41dbf9*/
          do /*0x41dc0c*/
          {
            v1 = (_DWORD *)*v8; /*0x41dbfb*/
            if ( *v8 != this && (_DWORD *)v1[20] == v6 ) /*0x41dc04*/
              v7 = (_DWORD *)*v8; /*0x41dc06*/
            ++v8; /*0x41dc08*/
            --v9; /*0x41dc0b*/
          }
          while ( v9 ); /*0x41dc0c*/
        }
        v6[165] = v7; /*0x41dc10*/
        if ( !v7 && MEMORY[0xA8E9A0] ) /*0x41dc1e*/
          LOBYTE(v1) = (*(int (__thiscall **)(_DWORD *, int))(*v6 + 292))(v6, 2); /*0x41dc26*/
        if ( v6[165] == this ) /*0x41dc32*/
          v6[165] = 0; /*0x41dc34*/
      }
    }
    *(_DWORD *)(this + 80) = 0; /*0x41dc3b*/
  }
  return (char)v1; /*0x41dc3f*/
}


// ==== 0x0041DC50  AirstrikeClass::StubReturnFalse  this=AirstrikeClass  sig=csp ====
void AirstrikeClass::StubReturnFalse()
{
  ; /*0x41dc50*/
}


// ==== 0x0041DC80  AirstrikeClass::RemoveAircraft  this=WTFMode  sig=csp ====
int __thiscall AirstrikeClass::RemoveAircraft(int this, AudioController *aP1)
{
  int result; // eax
  int v3; // edi
  IUnknown *v4; // edx

  result = *(_DWORD *)(this + 92); /*0x41dc80*/
  v3 = 0; /*0x41dc8c*/
  if ( (AudioController *)result == aP1 ) /*0x41dc90*/
  {
    *(_DWORD *)(this + 92) = *(_DWORD *)&aP1[7].__pad_94[4]; /*0x41dc98*/
    *(_DWORD *)&aP1[7].__pad_94[4] = 0; /*0x41dc9b*/
    result = *(_DWORD *)(this + 48) - 1; /*0x41dca4*/
    *(_DWORD *)(this + 48) = result; /*0x41dca5*/
    *(_DWORD *)&aP1[3].__pad_10[68] = 0; /*0x41dca8*/
  }
  else if ( result ) /*0x41dcb2*/
  {
    do /*0x41dceb*/
    {
      if ( *(AudioController **)(result + 1496) == aP1 ) /*0x41dcbc*/
      {
        *(_DWORD *)(result + 1496) = *(_DWORD *)&aP1[7].__pad_94[4]; /*0x41dcc4*/
        *(_DWORD *)&aP1[7].__pad_94[4] = 0; /*0x41dcca*/
        result = 0; /*0x41dcd3*/
        --*(_DWORD *)(this + 48); /*0x41dcd6*/
        *(_DWORD *)&aP1[3].__pad_10[68] = 0; /*0x41dcd9*/
      }
      else
      {
        result = *(_DWORD *)(result + 1496); /*0x41dce1*/
      }
      ++v3; /*0x41dce3*/
    }
    while ( v3 <= 100 && result ); /*0x41dceb*/
  }
  if ( *(int *)(this + 48) <= 0 ) /*0x41dcf0*/
  {
    v4 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x41dcf2*/
    *(_BYTE *)(this + 60) = 0; /*0x41dcf8*/
    *(_DWORD *)(this + 64) = v4; /*0x41dcfb*/
    *(_BYTE *)(this + 61) = 0; /*0x41dcfe*/
  }
  return result; /*0x41dd01*/
}


// ==== 0x0041DD10  ObjectClass::method_41DD10  this=ObjectClass  sig=csp ====
char __thiscall sub_41DD10(int this)
{
  *(_DWORD *)(this + 64) = MEMORY[0xA8ED84]; /*0x41dd15*/
  *(_BYTE *)(this + 60) = 0; /*0x41dd1a*/
  *(_BYTE *)(this + 61) = 0; /*0x41dd1d*/
  return 0; /*0x41dd20*/
}


// ==== 0x0041DD30  AirstrikeClass::StubReturn96  this=AirstrikeClass  sig=csp ====
int AirstrikeClass::_vt12()
{
  return 96; /*0x41dd35*/
}


// ==== 0x0041DD40  AirstrikeClass::StubReturn71  this=AirstrikeClass  sig=csp ====
int AirstrikeClass::_vt11()
{
  return 71; /*0x41dd45*/
}


// ==== 0x0041DD50  AirstrikeClass::CopyTo  this=AirstrikeClass  sig=csp ====
AirstrikeClass *__thiscall AirstrikeClass::CopyTo(_DWORD *Block, char a2)
{
  int v3; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &AirstrikeClass::`vftable'; /*0x41dd5d*/
  *(Block + 1) = &AirstrikeClass::`vftable'; /*0x41dd63*/
  *(Block + 2) = &AirstrikeClass::`vftable'; /*0x41dd6a*/
  *(Block + 3) = &vt_AirstrikeClass; /*0x41dd71*/
  v5 = Block; /*0x41dd7f*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0x889FB8] + 16))(&MEMORY[0x889FB8], &v5); /*0x41dd83*/
  if ( v3 != -1 && v3 < MEMORY[0x889FC8] && v3 < --MEMORY[0x889FC8] ) /*0x41dd9e*/
  {
    do /*0x41ddb6*/
    {
      ++v3; /*0x41dda6*/
      *((_DWORD *)MEMORY[0x889FBC] + v3 - 1) = *((_DWORD *)MEMORY[0x889FBC] + v3); /*0x41ddaa*/
    }
    while ( v3 < MEMORY[0x889FC8] ); /*0x41ddb6*/
  }
  AbstractClass::DTOR(Block); /*0x41ddba*/
  if ( (a2 & 1) != 0 ) /*0x41ddc4*/
    __3_YAXPAX_Z(Block); /*0x41ddc7*/
  return (AirstrikeClass *)Block; /*0x41ddd1*/
}


// ==== 0x0041DDE0  _DynamicVectorClass_PAVAirstrikeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_AirstrikeClass::sub_41DDE0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x41dde6*/
  *(_DWORD *)(this + 16) = 0; /*0x41dde9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x41ddf0*/
  {
    __3_YAXPAX_Z(v2); /*0x41ddf6*/
    *(_DWORD *)(this + 4) = 0; /*0x41ddfe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x41de01*/
  *(_DWORD *)(this + 8) = 0; /*0x41de04*/
}


// ==== 0x0041DE10  _DynamicVectorClass_PAVAirstrikeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AirstrikeClass::sub_41DE10(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x41de10*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x41de25*/
  else
    return 0; /*0x41de17*/
}


// ==== 0x0041DE30  _VectorClass_PAVAirstrikeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AirstrikeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x41de3a*/
}


// ==== 0x0041DE40  _VectorClass_PAVAirstrikeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AirstrikeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x41de42*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x41de4d*/
  {
    v3 = 0; /*0x41de4f*/
    if ( v2 <= 0 ) /*0x41de53*/
      return 1; /*0x41de73*/
    v4 = (_DWORD *)this->Items; /*0x41de55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x41de5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x41de64*/
    {
      ++v3; /*0x41de66*/
      ++v4; /*0x41de67*/
      if ( v3 >= v2 ) /*0x41de6c*/
        return 1; /*0x41de6c*/
    }
  }
  return 0; /*0x41de6e*/
}


// ==== 0x0041DE80  _VectorClass_PAVAirstrikeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_AirstrikeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x41de8c*/
  {
    this->IsInitialized = 0; /*0x41de96*/
    if ( a3 ) /*0x41de9c*/
      v4 = a3; /*0x41deb2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x41deae*/
    this->IsInitialized = 1; /*0x41deb6*/
    if ( v4 ) /*0x41deba*/
    {
      if ( this->Items ) /*0x41dec5*/
      {
        v6 = this->Capacity; /*0x41decc*/
        if ( a2 < v6 ) /*0x41ded1*/
          v6 = a2; /*0x41ded3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x41ded9*/
          ++i; /*0x41dede*/
        if ( this->IsAllocated ) /*0x41deeb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x41def6*/
          this->Items = 0; /*0x41defe*/
        }
      }
      this->Items = v4; /*0x41df07*/
      this->Capacity = a2; /*0x41df0f*/
      this->IsAllocated = a3 == 0; /*0x41df12*/
      return 1; /*0x41df18*/
    }
    else
    {
      return 0; /*0x41debf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x41df22*/
    return 1; /*0x41df28*/
  }
}


// ==== 0x0041DF30  _VectorClass_PAVAirstrikeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_AirstrikeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x41df3d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x41df43*/
    *(_DWORD *)(this + 4) = 0; /*0x41df4b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x41df4e*/
  *(_DWORD *)(this + 8) = 0; /*0x41df51*/
}


// ==== 0x0041DF60  _VectorClass_PAVAirstrikeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_AirstrikeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x41df60*/
    return 0; /*0x41df68*/
  v3 = *(_DWORD *)(this + 8); /*0x41df6e*/
  result = 0; /*0x41df71*/
  if ( v3 <= 0 ) /*0x41df75*/
    return -1; /*0x41df8c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x41df7b*/
  {
    if ( ++result >= v3 ) /*0x41df8a*/
      return -1; /*0x41df8a*/
  }
  return result; /*0x41df6a*/
}


// ==== 0x0041DFA0  _VectorClass_PAVAirstrikeClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_AirstrikeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x41dfa0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x41dfb5*/
  else
    return 0; /*0x41dfa7*/
}


// ==== 0x0041DFC0  _DynamicVectorClass_PAVAirstrikeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_AirstrikeClass::sub_41DFC0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x41dfcc*/
  {
    this->IsInitialized = 0; /*0x41dfd2*/
    if ( a3 ) /*0x41dfd8*/
      v4 = a3; /*0x41dfee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x41dfea*/
    this->IsInitialized = 1; /*0x41dff2*/
    if ( !v4 ) /*0x41dff6*/
      return 0; /*0x41e06a*/
    if ( this->Items ) /*0x41dff8*/
    {
      v5 = this->q008; /*0x41dfff*/
      if ( a2 < v5 ) /*0x41e004*/
        v5 = a2; /*0x41e006*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x41e00c*/
        ++i; /*0x41e011*/
      if ( this->IsAllocated ) /*0x41e01e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x41e029*/
        this->Items = 0; /*0x41e031*/
      }
    }
    this->Items = v4; /*0x41e03a*/
    this->q008 = a2; /*0x41e042*/
    this->IsAllocated = a3 == 0; /*0x41e045*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x41e04e*/
  }
  v7 = this->q008; /*0x41e051*/
  if ( v7 < this->Items ) /*0x41e059*/
    this->Items = v7; /*0x41e05b*/
  return 1; /*0x41e05e*/
}


// ==== 0x0041E070  _DynamicVectorClass_PAVAirstrikeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_AirstrikeClass::sub_41E070(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x41e070*/
  result = 0; /*0x41e073*/
  if ( v2 <= 0 ) /*0x41e078*/
    return -1; /*0x41e08f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x41e07e*/
  {
    if ( ++result >= v2 ) /*0x41e08d*/
      return -1; /*0x41e08d*/
  }
  return result; /*0x41e092*/
}


// ==== 0x0041E0A0  _VectorClass_PAVAirstrikeClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_AirstrikeClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x41e0a3*/
  *Block = &vt_VectorClass_AirstrikeClass; /*0x41e0a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x41e0b0*/
  {
    __3_YAXPAX_Z(v3); /*0x41e0b8*/
    *(Block + 1) = 0; /*0x41e0c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x41e0cb*/
  *(Block + 2) = 0; /*0x41e0d1*/
  if ( (a2 & 1) != 0 ) /*0x41e0d8*/
    __3_YAXPAX_Z(Block); /*0x41e0db*/
  return (VectorClass *)Block; /*0x41e0e5*/
}


// ==== 0x0041E0F0  _DynamicVectorClass_PAVAirstrikeClass::Constructor_VectorClass_AirstrikeClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_AirstrikeClass::Constructor_VectorClass_AirstrikeClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x41e0f3*/
  *Block = &vt_VectorClass_AirstrikeClass; /*0x41e0f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x41e100*/
  {
    __3_YAXPAX_Z(v3); /*0x41e108*/
    *(Block + 1) = 0; /*0x41e110*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x41e11b*/
  *(Block + 2) = 0; /*0x41e121*/
  if ( (a2 & 1) != 0 ) /*0x41e128*/
    __3_YAXPAX_Z(Block); /*0x41e12b*/
  return (DynamicVector *)Block; /*0x41e135*/
}


// ==== 0x0041E140  sub_41E140  this=-  sig=ida-proto ====
int sub_41E140()
{
  MEMORY[0x88A008] = 0; /*0x41e142*/
  MEMORY[0x88A00C] = 0; /*0x41e147*/
  MEMORY[0x88A010] = 0; /*0x41e14c*/
  MEMORY[0x88A014] = 0; /*0x41e151*/
  return 0; /*0x41e156*/
}


// ==== 0x0041E160  sub_41E160  this=-  sig=ida-proto ====
void sub_41E160()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x41e16c*/
  MEMORY[0x88A020] = Math::Sqrt(v0 + v0); /*0x41e17e*/
}


// ==== 0x0041E190  sub_41E190  this=-  sig=ida-proto ====
void sub_41E190()
{
  MEMORY[0x88A070] = MEMORY[0x88A020] / 60.0; /*0x41e19c*/
}


// ==== 0x0041E1B0  sub_41E1B0  this=-  sig=ida-proto ====
void sub_41E1B0()
{
  MEMORY[0x88A058] = 1.0 / MEMORY[0x88A070]; /*0x41e1bc*/
}


// ==== 0x0041E1D0  sub_41E1D0  this=-  sig=ida-proto ====
void sub_41E1D0()
{
  MEMORY[0x88A050] = 0.0174532925199433 * 45.0; /*0x41e1dc*/
}


// ==== 0x0041E1F0  sub_41E1F0  this=-  sig=ida-proto ====
void sub_41E1F0()
{
  MEMORY[0x88A028] = 0.0174532925199433 * 60.0; /*0x41e1fc*/
}


// ==== 0x0041E210  sub_41E210  this=-  sig=ida-proto ====
void sub_41E210()
{
  MEMORY[0x88A000] = 0.0174532925199433 * 90.0; /*0x41e21c*/
}


// ==== 0x0041E230  sub_41E230  this=-  sig=ida-proto ====
__int64 sub_41E230()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x88A000] - MEMORY[0x88A028]); /*0x41e242*/
  result = Math::RoundToInt(v0 * MEMORY[0x88A020] * 0.5); /*0x41e256*/
  MEMORY[0x88A078] = result; /*0x41e25b*/
  return result; /*0x41e260*/
}


// ==== 0x0041E270  sub_41E270  this=-  sig=ida-proto ====
void sub_41E270()
{
  MEMORY[0x88A030] = Math::ArcTan((double)MEMORY[0x88A078] * 0.00390625); /*0x41e287*/
}


// ==== 0x0041E2A0  sub_41E2A0  this=-  sig=ida-proto ====
void sub_41E2A0()
{
  MEMORY[0x88A048] = Math::ArcTan((double)(2 * MEMORY[0x88A078]) / MEMORY[0x88A020]); /*0x41e2c2*/
}


// ==== 0x0041E2D0  sub_41E2D0  this=-  sig=ida-proto ====
__int64 sub_41E2D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x88A078]) + 0.5); /*0x41e2eb*/
  MEMORY[0x88A06C] = result; /*0x41e2f0*/
  return result; /*0x41e2f6*/
}


// ==== 0x0041E300  sub_41E300  this=-  sig=ida-proto ====
int sub_41E300()
{
  MEMORY[0x88A018] = 0; /*0x41e302*/
  MEMORY[0x88A01A] = 0; /*0x41e308*/
  return 0; /*0x41e30e*/
}


// ==== 0x0041E310  sub_41E310  this=-  sig=ida-proto ====
int sub_41E310()
{
  MEMORY[0x88A038] = 0; /*0x41e312*/
  MEMORY[0x88A03C] = 0; /*0x41e317*/
  MEMORY[0x88A040] = 0; /*0x41e31c*/
  return 0; /*0x41e321*/
}


// ==== 0x0041E330  sub_41E330  this=-  sig=ida-proto ====
int sub_41E330()
{
  MEMORY[0x88A068] = 0; /*0x41e335*/
  MEMORY[0x88A060] = 128; /*0x41e33f*/
  MEMORY[0x88A064] = 128; /*0x41e344*/
  return 128; /*0x41e349*/
}


// ==== 0x0041E350  AnimTypeClass::Construct2  this=AITriggerTypeClass  sig=csp ====
_DWORD *__thiscall AnimTypeClass_Constructor2(_DWORD *this, char *Source)
{
  int v3; // eax

  AbstractTypeClass::Constructor((int)this, Source); /*0x41e359*/
  this->q098 = -1; /*0x41e363*/
  this->q0A8 = -1; /*0x41e369*/
  this->q0B8 = 0; /*0x41e374*/
  this->q0C0 = 0; /*0x41e37a*/
  this->q0C8 = 0; /*0x41e380*/
  this->q0BC = 1072693248; /*0x41e386*/
  this->q0C4 = 1072693248; /*0x41e38c*/
  this->q0CC = 1072693248; /*0x41e392*/
  *((_BYTE *)this + 210) = 1; /*0x41e39a*/
  *((_BYTE *)this + 211) = 1; /*0x41e3a0*/
  *((_BYTE *)this + 212) = 1; /*0x41e3a6*/
  this->q09C = 0; /*0x41e3b9*/
  this->q0A0 = 0; /*0x41e3bf*/
  this->q0A4 = 0; /*0x41e3c5*/
  this->q0AC = 0; /*0x41e3cb*/
  this->q0B0 = 0; /*0x41e3d1*/
  this->q0D0 = 0; /*0x41e3d7*/
  *((_BYTE *)this + 209) = 0; /*0x41e3dd*/
  this->q036 = 0; /*0x41e3e3*/
  this->q0DC = 0; /*0x41e3e9*/
  this->q0E0 = 0; /*0x41e3ef*/
  this->q104 = 0; /*0x41e3f5*/
  this->q108 = 0; /*0x41e3fb*/
  *this = &AITriggerTypeClass::`vftable'; /*0x41e401*/
  this->vtable2 = &AITriggerTypeClass::`vftable'; /*0x41e407*/
  this->vtable3 = &AITriggerTypeClass::`vftable'; /*0x41e40e*/
  this->vtable4 = &AITriggerTypeClass::`vftable'; /*0x41e415*/
  memset(this + 57, 0, 0x20u); /*0x41e41c*/
  if ( MEMORY[0xA8B210] < MEMORY[0xA8B208] /*0x41e452*/
    || (MEMORY[0xA8B20D] || !MEMORY[0xA8B208])
    && MEMORY[0xA8B214] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8B200] + 8))(
         &MEMORY[0xA8B200],
         MEMORY[0xA8B208] + MEMORY[0xA8B214],
         0) )
  {
    v3 = MEMORY[0xA8B210]++; /*0x41e45f*/
    *((_DWORD *)MEMORY[0xA8B204] + v3) = this; /*0x41e46e*/
  }
  return this; /*0x41e473*/
}


// ==== 0x0041E500  AITriggerTypeClass::GetClassIdentifier  this=AITriggerTypeClass  sig=csp ====
int __stdcall AITriggerTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x41e506*/
    return -2147467261; /*0x41e508*/
  *a2 = -1173801692; /*0x41e516*/
  a2[1] = 298994932; /*0x41e51e*/
  a2[2] = 268445372; /*0x41e527*/
  a2[3] = 1303416651; /*0x41e530*/
  return 0; /*0x41e50d*/
}


// ==== 0x0041E540  AITriggerTypeClass::LoadTypeData  this=AITriggerTypeClass  sig=csp ====
int __stdcall AITriggerTypeClass::LoadTypeData(AbstractTypeClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1); /*0x41e54b*/
  if ( result >= 0 ) /*0x41e552*/
  {
    if ( aP0 ) /*0x41e556*/
    {
      AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1); /*0x41e55f*/
      *(_DWORD *)aP0->__pad_0 = &AITriggerTypeClass::`vftable'; /*0x41e564*/
      *(_DWORD *)&aP0->__pad_0[4] = &AITriggerTypeClass::`vftable'; /*0x41e56a*/
      *(_DWORD *)&aP0->__pad_0[8] = &AITriggerTypeClass::`vftable'; /*0x41e571*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_AITriggerTypeClass; /*0x41e578*/
    }
    ObjectPtr::RegisterForTracking( /*0x41e58b*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[3]);
    ObjectPtr::RegisterForTracking( /*0x41e59c*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[7]);
    ObjectPtr::RegisterForTracking( /*0x41e5ad*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[11]);
    return 0; /*0x41e5b2*/
  }
  return result; /*0x41e5b4*/
}


// ==== 0x0041E5C0  AITriggerTypeClass::SaveToINI  this=AITriggerTypeClass  sig=csp ====
int __stdcall AITriggerTypeClass::SaveToINI(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x41e5cf*/
  if ( result >= 0 ) /*0x41e5d6*/
    return 0; /*0x41e5d8*/
  return result; /*0x41e5da*/
}


// ==== 0x0041E5E0  AITriggerTypeClass::ProcessPower  this=AITriggerTypeClass  sig=csp ====
int __thiscall AITriggerTypeClass::ProcessPower(int this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x41e5e9*/
  Power::TimerProcess(*(_DWORD *)(this + 152)); /*0x41e5f7*/
  Power::TimerProcess(*(_DWORD *)(this + 156)); /*0x41e605*/
  Power::TimerProcess(*(_DWORD *)(this + 160)); /*0x41e613*/
  Power::TimerProcess(*(_DWORD *)(this + 168)); /*0x41e621*/
  Power::TimerProcess(*(_DWORD *)(this + 176)); /*0x41e62f*/
  switch ( *(_DWORD *)(this + 152) ) /*0x41e63f*/
  {
    case 0: /*0x41e63f*/
    case 1: /*0x41e63f*/
    case 4: /*0x41e63f*/
    case 7: /*0x41e63f*/
      Power::TimerProcess(*(_DWORD *)(this + 228)); /*0x41e64f*/
      Power::TimerProcess(*(_DWORD *)(this + 232)); /*0x41e65d*/
      break; /*0x41e65d*/
    default:
      break;
  }
  Checksummer::Add_double(*(_DWORD *)(this + 184), *(_DWORD *)(this + 188)); /*0x41e662*/
  Checksummer::Add_double(*(_DWORD *)(this + 192), *(_DWORD *)(this + 196)); /*0x41e687*/
  Checksummer::Add_double(*(_DWORD *)(this + 200), *(_DWORD *)(this + 204)); /*0x41e69c*/
  LOBYTE(v3) = *(_BYTE *)(this + 208); /*0x41e6a1*/
  Power::FlagProcess(a2, v3); /*0x41e6aa*/
  LOBYTE(v4) = *(_BYTE *)(this + 210); /*0x41e6af*/
  v5 = Power::FlagProcess(a2, v4); /*0x41e6b8*/
  LOBYTE(v5) = *(_BYTE *)(this + 211); /*0x41e6bd*/
  Power::FlagProcess(a2, v5); /*0x41e6c6*/
  LOBYTE(v6) = *(_BYTE *)(this + 212); /*0x41e6cb*/
  Power::FlagProcess(a2, v6); /*0x41e6d4*/
  v7 = Power::TimerProcess(*(_DWORD *)(this + 172)); /*0x41e6e2*/
  LOBYTE(v7) = *(_BYTE *)(this + 209); /*0x41e6e7*/
  return Power::FlagProcess(a2, v7); /*0x41e6f5*/
}


// ==== 0x0041E720  TriggerClass::EvaluateCondition  this=TriggerClass  sig=csp ====
char __thiscall TriggerClass_EvaluateCondition(int this, _DWORD *a2, int a3, char a4)
{
  int v5; // ecx
  int v6; // eax
  bool v7; // dl
  _DWORD *v8; // edi
  char result; // al
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  char v15; // al
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
    if ( !HIBYTE(MEMORY[0x8871E0][1].?) || a2[5531] >= *(_DWORD *)(HIDWORD(MEMORY[0x8871E0]->?) + 4 * a2[97]) ) /*0x41e78c*/
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
  if ( *(_DWORD *)(this + 156) == 1 && *((_BYTE *)MEMORY[0xA8B230] + 13492) == 1 || !*(_BYTE *)(this + 164) ) /*0x41e7cd*/
    return 0; /*0x41e7d5*/
  if ( MEMORY[0xA8B238][0] ) /*0x41e7df*/
  {
    if ( !*(_BYTE *)(this + 208) ) /*0x41e7e1*/
      return 0; /*0x41e7f1*/
    v11 = v8[97]; /*0x41e809*/
    if ( !v11 ) /*0x41e811*/
    {
LABEL_28:
      if ( !*(_BYTE *)(this + 212) ) /*0x41e813*/
        return 0; /*0x41e823*/
      goto LABEL_36; /*0x41e81b*/
    }
    if ( v11 == 1 ) /*0x41e828*/
      goto LABEL_31; /*0x41e828*/
    if ( v11 != 2 ) /*0x41e840*/
      goto LABEL_36; /*0x41e840*/
    goto LABEL_34; /*0x41e840*/
  }
  v10 = *((_DWORD *)MEMORY[0xA8B230] + 387); /*0x41e7f4*/
  if ( !v10 ) /*0x41e7fc*/
  {
LABEL_34:
    if ( *(_BYTE *)(this + 210) ) /*0x41e842*/
      goto LABEL_36; /*0x41e84a*/
    return 0; /*0x41e852*/
  }
  if ( v10 != 1 ) /*0x41e800*/
  {
    if ( v10 != 2 ) /*0x41e805*/
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
  if ( v12 == 1 && *(_DWORD *)(v8[13] + 184) != *(_DWORD *)(this + 168) ) /*0x41e882*/
    return 0; /*0x41e88a*/
  v13 = *(_DWORD *)(this + 172); /*0x41e88d*/
  if ( v13 == 1 ) /*0x41e895*/
  {
    if ( v8[122] ) /*0x41e897*/
      return 0; /*0x41e8a7*/
  }
  else if ( v13 == 2 ) /*0x41e8ad*/
  {
    if ( v8[122] != 1 ) /*0x41e8b5*/
      return 0; /*0x41e8bd*/
  }
  else if ( v13 == 3 && v8[122] != 2 ) /*0x41e8cc*/
  {
    return 0; /*0x41e8d4*/
  }
  if ( *(_DWORD *)(this + 176) > v8[117] ) /*0x41e8e5*/
    return 0; /*0x41e8ea*/
  v14 = *(_DWORD *)(this + 152); /*0x41e8f0*/
  if ( a3 ) /*0x41e8f8*/
  {
    switch ( v14 ) /*0x41e908*/
    {
      case -1: /*0x41e908*/
        goto LABEL_70;
      case 0: /*0x41e908*/
        v15 = AITriggerTypeClass::EnemyHouseOwns(v8, a3); /*0x41e913*/
        break; /*0x41e918*/
      case 1: /*0x41e908*/
        v15 = AITriggerTypeClass::OwnerHouseOwns(v8, a3); /*0x41e921*/
        break; /*0x41e926*/
      case 2: /*0x41e908*/
        v19 = (*(int (__stdcall **)(int))(*(_DWORD *)(a3 + 36) + 36))(a3 + 36); /*0x41e93b*/
        if ( (double)((*(int (__stdcall **)(int))(*(_DWORD *)(a3 + 36) + 32))(a3 + 36) - v19) >= 100.0 ) /*0x41e95b*/
          goto LABEL_58; /*0x41e95b*/
        v15 = 1; /*0x41e95d*/
        break; /*0x41e95f*/
      case 3: /*0x41e908*/
        v20 = (*(int (__stdcall **)(int))(*(_DWORD *)(a3 + 36) + 36))(a3 + 36); /*0x41e975*/
        if ( (double)((*(int (__stdcall **)(int))(*(_DWORD *)(a3 + 36) + 32))(a3 + 36) - v20) >= 0.0 ) /*0x41e995*/
LABEL_58:
          v15 = 0; /*0x41e961*/
        else
          v15 = 1; /*0x41e997*/
        break; /*0x41e999*/
      case 4: /*0x41e908*/
        v15 = AITriggerTypeClass::HouseCredits(v8, a3); /*0x41e99f*/
        break; /*0x41e9a4*/
      case 5: /*0x41e908*/
        v15 = AITriggerTypeClass::IronCurtainCharged(v8, a3); /*0x41e9aa*/
        break; /*0x41e9af*/
      case 6: /*0x41e908*/
        v15 = AITriggerTypeClass::ChronoSphereCharged(v8, a3); /*0x41e9b5*/
        break; /*0x41e9ba*/
      case 7: /*0x41e908*/
        v15 = AITriggerTypeClass::CivilianHouseOwns(v8, a3); /*0x41e9c0*/
        break; /*0x41e9c5*/
      default:
        return 0;
    }
  }
  else if ( v14 == 1 ) /*0x41e9c9*/
  {
    v15 = AITriggerTypeClass::OwnerHouseOwns(v8, 0); /*0x41e9d0*/
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
      result = TriggerClass::ValidateTeamTriggerConditions(*(_DWORD *)(this + 220)); /*0x41ea2d*/
      if ( result ) /*0x41ea34*/
      {
        if ( !*(_DWORD *)(this + 224) /*0x41ea51*/
          || (result = TriggerClass::ValidateTeamTriggerConditions(*(_DWORD *)(this + 224))) != 0 )
        {
          v17 = *(_DWORD *)(this + 220); /*0x41ea5a*/
          if ( v17 /*0x41ea82*/
            && *(int *)(v17 + 184) >= 0
            && TeamClass::CountActiveTeamsForType(*(_DWORD *)(this + 220)) >= *(_DWORD *)(*(_DWORD *)(this + 220) + 184) )
          {
            return 0; /*0x41ea87*/
          }
          else
          {
            v18 = *(_DWORD *)(this + 224); /*0x41ea8d*/
            return !v18 /*0x41eaba*/
                || *(int *)(v18 + 184) < 0
                || TeamClass::CountActiveTeamsForType(*(_DWORD *)(this + 224)) < *(_DWORD *)(*(_DWORD *)(this + 224)
                                                                                           + 184);
          }
        }
      }
    }
  }
  return result; /*0x41e798*/
}


// ==== 0x0041EAF0  AITriggerTypeClass::EnemyHouseOwns  this=AITriggerTypeClass  sig=csp ====
bool __thiscall AITriggerTypeClass::EnemyHouseOwns(_DWORD *this, int a2, _DWORD *a3)
{
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int v7; // eax
  bool result; // al
  char v9; // [esp+7h] [ebp-1h]

  v9 = 0; /*0x41eafa*/
  if ( !a3 ) /*0x41eaff*/
    return v9; /*0x41ec2b*/
  v4 = this->q036; /*0x41eb06*/
  if ( v4 ) /*0x41eb0e*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 64))(v4); /*0x41eb21*/
    v6 = 0; /*0x41eb23*/
    switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) ) /*0x41eb38*/
    {
      case 3: /*0x41eb38*/
        v6 = DynamicVector::GetOrGrow(a3 + 5475, v5); /*0x41eb91*/
        goto LABEL_8; /*0x41eb91*/
      case 7: /*0x41eb38*/
        v7 = DynamicVector::GetOrGrow(a3 + 5460, v5); /*0x41eb4a*/
        break; /*0x41eb53*/
      case 16: /*0x41eb38*/
        v7 = DynamicVector::GetOrGrow(a3 + 5470, v5); /*0x41eb76*/
        break; /*0x41eb7f*/
      case 40: /*0x41eb38*/
        v7 = DynamicVector::GetOrGrow(a3 + 5465, v5); /*0x41eb60*/
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
  switch ( this->q0E8 ) /*0x41ebab*/
  {
    case 0: /*0x41ebab*/
      result = v7 < this->q0E4; /*0x41ebc0*/
      break; /*0x41ebc5*/
    case 1: /*0x41ebab*/
      result = v7 <= this->q0E4; /*0x41ebd6*/
      break; /*0x41ebdb*/
    case 2: /*0x41ebab*/
      result = v7 == this->q0E4; /*0x41ebec*/
      break; /*0x41ebf1*/
    case 3: /*0x41ebab*/
      result = v7 >= this->q0E4; /*0x41ec02*/
      break; /*0x41ec07*/
    case 4: /*0x41ebab*/
      result = v7 > this->q0E4; /*0x41ec18*/
      break; /*0x41ec1d*/
    case 5: /*0x41ebab*/
      return v7 != this->q0E4; /*0x41ec26*/
    default:
      return v9;
  }
  return result; /*0x41ebb8*/
}


// ==== 0x0041EC90  AITriggerTypeClass::CivilianHouseOwns  this=AITriggerTypeClass  sig=csp ====
bool __thiscall AITriggerTypeClass::CivilianHouseOwns(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // edi
  int v4; // esi
  bool result; // al
  _DWORD *v6; // ebx
  int v7; // esi
  int v8; // ebp
  int v9; // edi
  int v10; // eax
  char v11; // [esp+Fh] [ebp-5h]

  v3 = this; /*0x41ec9b*/
  v4 = 0; /*0x41ec9d*/
  v11 = 0; /*0x41eca5*/
  if ( HouseClass_Count <= 0 ) /*0x41ecaa*/
    return v11; /*0x41ecaa*/
  while ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v4] + 52) + 188) != HouseTypeClass::Find(MEMORY[0x818164]) ) /*0x41eccc*/
  {
    if ( ++v4 >= HouseClass_Count ) /*0x41ecd6*/
      return 0; /*0x41ece2*/
  }
  v6 = *(_DWORD **)&HouseClass_Array->__pad_0[4 * v4]; /*0x41ece5*/
  if ( !v6 ) /*0x41ecea*/
    return v11; /*0x41ee23*/
  v7 = v3[54]; /*0x41ecf0*/
  if ( v7 ) /*0x41ecf8*/
  {
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 64))(v7); /*0x41ed0a*/
    v9 = 0; /*0x41ed0c*/
    switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7) ) /*0x41ed21*/
    {
      case 3: /*0x41ed21*/
        v9 = DynamicVector::GetOrGrow(v6 + 5475, v8); /*0x41ed73*/
        goto LABEL_12; /*0x41ed73*/
      case 7: /*0x41ed21*/
        v10 = DynamicVector::GetOrGrow(v6 + 5460, v8); /*0x41ed2f*/
        v3 = this; /*0x41ed37*/
        break; /*0x41ed3b*/
      case 16: /*0x41ed21*/
        v10 = DynamicVector::GetOrGrow(v6 + 5470, v8); /*0x41ed59*/
        v3 = this; /*0x41ed61*/
        break; /*0x41ed65*/
      case 40: /*0x41ed21*/
        v10 = DynamicVector::GetOrGrow(v6 + 5465, v8); /*0x41ed44*/
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
  switch ( v3[58] ) /*0x41ed8f*/
  {
    case 0: /*0x41ed8f*/
      result = v10 < v3[57]; /*0x41eda5*/
      break; /*0x41edad*/
    case 1: /*0x41ed8f*/
      result = v10 <= v3[57]; /*0x41edbf*/
      break; /*0x41edc7*/
    case 2: /*0x41ed8f*/
      result = v10 == v3[57]; /*0x41edd9*/
      break; /*0x41ede1*/
    case 3: /*0x41ed8f*/
      result = v10 >= v3[57]; /*0x41edf3*/
      break; /*0x41edfb*/
    case 4: /*0x41ed8f*/
      result = v10 > v3[57]; /*0x41ee0d*/
      break; /*0x41ee15*/
    case 5: /*0x41ed8f*/
      return v10 != v3[57]; /*0x41ee1e*/
    default:
      return v11;
  }
  return result; /*0x41ecdc*/
}


// ==== 0x0041EE90  AITriggerTypeClass::OwnerHouseOwns  this=AITriggerTypeClass  sig=csp ====
bool __thiscall AITriggerTypeClass::OwnerHouseOwns(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int v7; // eax
  bool result; // al
  char v9; // [esp+7h] [ebp-1h]

  v9 = 0; /*0x41ee9a*/
  if ( !a2 ) /*0x41ee9f*/
    return v9; /*0x41efcb*/
  v4 = this->q036; /*0x41eea6*/
  if ( v4 ) /*0x41eeae*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 64))(v4); /*0x41eec1*/
    v6 = 0; /*0x41eec3*/
    switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) ) /*0x41eed8*/
    {
      case 3: /*0x41eed8*/
        v6 = DynamicVector::GetOrGrow(a2 + 5475, v5); /*0x41ef31*/
        goto LABEL_8; /*0x41ef31*/
      case 7: /*0x41eed8*/
        v7 = DynamicVector::GetOrGrow(a2 + 5460, v5); /*0x41eeea*/
        break; /*0x41eef3*/
      case 16: /*0x41eed8*/
        v7 = DynamicVector::GetOrGrow(a2 + 5470, v5); /*0x41ef16*/
        break; /*0x41ef1f*/
      case 40: /*0x41eed8*/
        v7 = DynamicVector::GetOrGrow(a2 + 5465, v5); /*0x41ef00*/
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
  switch ( this->q0E8 ) /*0x41ef4b*/
  {
    case 0: /*0x41ef4b*/
      result = v7 < this->q0E4; /*0x41ef60*/
      break; /*0x41ef65*/
    case 1: /*0x41ef4b*/
      result = v7 <= this->q0E4; /*0x41ef76*/
      break; /*0x41ef7b*/
    case 2: /*0x41ef4b*/
      result = v7 == this->q0E4; /*0x41ef8c*/
      break; /*0x41ef91*/
    case 3: /*0x41ef4b*/
      result = v7 >= this->q0E4; /*0x41efa2*/
      break; /*0x41efa7*/
    case 4: /*0x41ef4b*/
      result = v7 > this->q0E4; /*0x41efb8*/
      break; /*0x41efbd*/
    case 5: /*0x41ef4b*/
      return v7 != this->q0E4; /*0x41efc6*/
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
  if ( (int)MEMORY[0xA8ED84] - v7 < v8 ) /*0x41f130*/
  {
    v8 -= (int)MEMORY[0xA8ED84] - v7; /*0x41f132*/
LABEL_12:
    v9 = v8; /*0x41f134*/
    return 1.0 - *(float *)&MEMORY[0x8871E0]->? >= (double)v9 / (double)Super::GetDefaultTimer((_DWORD *)v6); /*0x41f134*/
  }
  v9 = 0; /*0x41f171*/
  return 1.0 - *(float *)&MEMORY[0x8871E0]->? >= (double)v9 / (double)Super::GetDefaultTimer((_DWORD *)v6); /*0x41f167*/
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
  if ( (int)MEMORY[0xA8ED84] - v7 < v8 ) /*0x41f1e0*/
  {
    v8 -= (int)MEMORY[0xA8ED84] - v7; /*0x41f1e2*/
LABEL_12:
    v9 = v8; /*0x41f1e4*/
    return 1.0 - *(float *)&MEMORY[0x8871E0]->? >= (double)v9 / (double)Super::GetDefaultTimer((_DWORD *)v6); /*0x41f1e4*/
  }
  v9 = 0; /*0x41f221*/
  return 1.0 - *(float *)&MEMORY[0x8871E0]->? >= (double)v9 / (double)Super::GetDefaultTimer((_DWORD *)v6); /*0x41f217*/
}


// ==== 0x0041F230  AITriggerTypeClass::HouseCredits  this=AITriggerTypeClass  sig=csp ====
bool __thiscall AITriggerTypeClass::HouseCredits(_DWORD *this, int a2, int a3)
{
  char v3; // bl
  int v5; // eax
  bool result; // al

  v3 = 0; /*0x41f235*/
  if ( !a3 ) /*0x41f23c*/
    return v3; /*0x41f2bd*/
  v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(a3 + 36) + 24))(a3 + 36); /*0x41f245*/
  switch ( this->q0E8 ) /*0x41f253*/
  {
    case 0: /*0x41f253*/
      result = v5 < this->q0E4; /*0x41f266*/
      break; /*0x41f269*/
    case 1: /*0x41f253*/
      result = v5 <= this->q0E4; /*0x41f278*/
      break; /*0x41f27b*/
    case 2: /*0x41f253*/
      result = v5 == this->q0E4; /*0x41f28a*/
      break; /*0x41f28d*/
    case 3: /*0x41f253*/
      result = v5 >= this->q0E4; /*0x41f29c*/
      break; /*0x41f29f*/
    case 4: /*0x41f253*/
      result = v5 > this->q0E4; /*0x41f2ae*/
      break; /*0x41f2b1*/
    case 5: /*0x41f253*/
      return v5 != this->q0E4; /*0x41f2ba*/
    default:
      return v3;
  }
  return result; /*0x41f260*/
}


// ==== 0x0041F2E0  CCINIClass::ReadTypeList  this=IUnknown  sig=csp ====
int __fastcall CCINIClass::ReadTypeList(char *a1, CCINIClass *a2)
{
  CCINIClass *v2; // edi
  int result; // eax
  CCINIClass *v5; // ebp
  CCINIClass *StringByIndex; // esi
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // eax
  CCINIClass *v10; // ebp
  CCINIClass *v11; // edi
  int v12; // esi
  int v13; // esi
  int v14; // [esp+10h] [ebp-8h]
  int i; // [esp+10h] [ebp-8h]

  v2 = a2; /*0x41f2ec*/
  result = INIClass::GetKeyCount(a1, (INIClass *)aAitriggertypes); /*0x41f2f5*/
  v5 = 0; /*0x41f2fa*/
  v14 = result; /*0x41f2fe*/
  while ( (int)v5 < v14 ) /*0x41f302*/
  {
    StringByIndex = (CCINIClass *)INIClass::GetStringByIndex(a1, (CCINIClass *)aAitriggertypes, v5); /*0x41f317*/
    if ( _strcmpi((char *)&stru_817460.sectionHead[1], StringByIndex->__pad_0) ) /*0x41f31f*/
    {
      if ( _strcmpi(g_Str_none, StringByIndex->__pad_0) ) /*0x41f335*/
      {
        v8 = 0; /*0x41f34a*/
        if ( (int)MEMORY[0xA8B210] > 0 ) /*0x41f34e*/
        {
          while ( _strcmpi((char *)(*(_DWORD *)&MEMORY[0xA8B204]->__pad_0[4 * v8] + 36), StringByIndex->__pad_0) ) /*0x41f368*/
          {
            if ( ++v8 >= (int)MEMORY[0xA8B210] ) /*0x41f376*/
              goto LABEL_9; /*0x41f376*/
          }
          v7 = *(_DWORD **)&MEMORY[0xA8B204]->__pad_0[4 * v8]; /*0x41f431*/
          goto LABEL_11; /*0x41f434*/
        }
LABEL_9:
        v9 = (_DWORD *)__2_YAPAXI_Z(0x110u); /*0x41f378*/
        if ( v9 ) /*0x41f387*/
        {
          v7 = AnimTypeClass::Construct2(v9, StringByIndex->__pad_0); /*0x41f391*/
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
    if ( a2 == (CCINIClass *)1 ) /*0x41f3b0*/
      *((_BYTE *)v7 + 164) = 1; /*0x41f3b2*/
    result = v14; /*0x41f3b9*/
    v5 = (CCINIClass *)((char *)v5 + 1); /*0x41f3bd*/
  }
  if ( !v2 ) /*0x41f3c8*/
  {
    result = INIClass::GetKeyCount(a1, (INIClass *)aAitriggertypes_0); /*0x41f3d7*/
    v10 = 0; /*0x41f3dc*/
    for ( i = result; (int)v10 < i; v10 = (CCINIClass *)((char *)v10 + 1) ) /*0x41f3e4*/
    {
      v11 = (CCINIClass *)INIClass::GetStringByIndex(a1, (CCINIClass *)aAitriggertypes_0, v10); /*0x41f3f9*/
      v12 = 0; /*0x41f400*/
      if ( (int)MEMORY[0xA8B210] > 0 ) /*0x41f404*/
      {
        while ( _strcmpi((char *)(*(_DWORD *)&MEMORY[0xA8B204]->__pad_0[4 * v12] + 36), v11->__pad_0) ) /*0x41f41d*/
        {
          if ( ++v12 >= (int)MEMORY[0xA8B210] ) /*0x41f427*/
            goto LABEL_28; /*0x41f427*/
        }
        v13 = *(_DWORD *)&MEMORY[0xA8B204]->__pad_0[4 * v12]; /*0x41f43f*/
        if ( v13 ) /*0x41f444*/
          *(_BYTE *)(v13 + 164) = INIClass::ReadBool_Overwrite((int)a1, (unsigned __int8 *)aAitriggertypes_0, v11, 0) /*0x41f46c*/
                               || MEMORY[0xA8B238];
      }
LABEL_28:
      result = i; /*0x41f473*/
    }
  }
  return result; /*0x41f480*/
}


// ==== 0x0041F490  CCINIClass::ReadInfantryTypeList  this=CCINIClass  sig=csp ====
AITriggerTypeClass *__fastcall CCINIClass::ReadInfantryTypeList(char *a1, int a2)
{
  CCINIClass *KeyCount; // ebx
  CCINIClass *i; // edi
  unsigned __int8 *StringByIndex; // eax
  AITriggerTypeClass *result; // eax
  int j; // edi
  _DWORD *v9; // ecx
  INIClass *v10; // edx
  int k; // edi
  int v12; // eax
  char Destination[32]; // [esp+10h] [ebp-20h] BYREF

  KeyCount = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)aAitriggertypes); /*0x41f4a6*/
  for ( i = 0; (int)i < (int)KeyCount; i = (CCINIClass *)((char *)i + 1) ) /*0x41f4ac*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1, (CCINIClass *)aAitriggertypes, i); /*0x41f4b8*/
    INIClass::GetString( /*0x41f4d2*/
      (unsigned __int8 ***)a1,
      (INIClass *)aAitriggertypes,
      StringByIndex,
      (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
      (INIClass *)Destination,
      32);
    INIClass::ClearSection((int)a1, (INIClass *)Destination, 0); /*0x41f4e0*/
  }
  INIClass::ClearSection((int)a1, (INIClass *)aAitriggertypes, 0); /*0x41f4f5*/
  result = MEMORY[0xA8B210]; /*0x41f4fa*/
  for ( j = 0; j < (int)MEMORY[0xA8B210]; ++j ) /*0x41f503*/
  {
    v9 = *(_DWORD **)&MEMORY[0xA8B204]->__pad_0[4 * j]; /*0x41f50a*/
    if ( v9[39] == a2 ) /*0x41f513*/
      (*(void (__thiscall **)(_DWORD *, char *))(*v9 + 104))(v9, a1); /*0x41f518*/
    result = MEMORY[0xA8B210]; /*0x41f51b*/
  }
  if ( !a2 ) /*0x41f527*/
  {
    INIClass::ClearSection((int)a1, (INIClass *)aAitriggertypes_0, 0); /*0x41f532*/
    result = MEMORY[0xA8B210]; /*0x41f537*/
    for ( k = 0; k < (int)MEMORY[0xA8B210]; ++k ) /*0x41f540*/
    {
      v12 = *(_DWORD *)&MEMORY[0xA8B204]->__pad_0[4 * k]; /*0x41f548*/
      LOBYTE(v10) = *(_BYTE *)(v12 + 164); /*0x41f54d*/
      INIClass::SetBool(a1, (INIClass *)aAitriggertypes_0, (char *)(v12 + 36), v10); /*0x41f55e*/
      result = MEMORY[0xA8B210]; /*0x41f563*/
    }
  }
  return result; /*0x41f56d*/
}


// ==== 0x0041F580  AITriggerTypeClass::LoadFromINI  this=AITriggerTypeClass  sig=csp ====
char __thiscall AITriggerTypeClass::vt_25_(int this, unsigned __int8 ***a2)
{
  char *v3; // eax
  char *v4; // eax
  char *v5; // eax
  int v6; // eax
  char *v7; // eax
  char *v8; // eax
  int v9; // esi
  int ExitCellByName; // eax
  int Index; // eax
  _DWORD *v12; // edx
  int v13; // eax
  char *v14; // eax
  unsigned int v15; // edi
  bool v16; // zf
  char *v17; // esi
  int v18; // ecx
  char v19; // dl
  char v20; // al
  char *v21; // eax
  double v22; // st7
  char *v23; // eax
  double v24; // st7
  char *v25; // eax
  double v26; // st7
  char *v27; // eax
  char *v28; // eax
  char *v29; // eax
  char *v30; // eax
  char *v31; // eax
  char *v32; // eax
  char *v33; // eax
  int v34; // eax
  int v35; // esi
  int MaxBuildLevel; // eax
  int v37; // eax
  int v38; // esi
  char v40[4]; // [esp+10h] [ebp-270h] BYREF
  __int64 v41; // [esp+14h] [ebp-26Ch] BYREF
  char v42[23]; // [esp+1Ch] [ebp-264h] BYREF
  char v43; // [esp+33h] [ebp-24Dh]
  char v44[24]; // [esp+34h] [ebp-24Ch] BYREF
  char Destination[48]; // [esp+4Ch] [ebp-234h] BYREF
  char v46; // [esp+7Ch] [ebp-204h]
  char String[512]; // [esp+80h] [ebp-200h] BYREF

  INIClass::ResetSection(a2); /*0x41f595*/
  if ( !INIClass::GetString( /*0x41f5b9*/
          a2,
          (unsigned __int8 *)aAitriggertypes,
          (unsigned __int8 *)(this + 36),
          &MEMORY[0x889F64],
          String,
          512) )
    return 0; /*0x41f5b9*/
  v3 = strtok(String, MEMORY[0x817F70]); /*0x41f5d3*/
  if ( !v3 ) /*0x41f5df*/
    return 0; /*0x41f5df*/
  strncpy(Destination, v3, 0x30u); /*0x41f5ed*/
  v46 = 0; /*0x41f5fe*/
  if ( Destination != (char *)(this + 100) ) /*0x41f602*/
  {
    qmemcpy((void *)(this + 100), Destination, 0x30u); /*0x41f60d*/
    *(_BYTE *)(this + 148) = v46; /*0x41f60f*/
  }
  v4 = strtok(0, MEMORY[0x817F70]); /*0x41f616*/
  if ( !v4 ) /*0x41f620*/
    return 0; /*0x41f620*/
  strncpy(v42, v4, 0x18u); /*0x41f62e*/
  v43 = 0; /*0x41f63a*/
  String::Trim(v42); /*0x41f63e*/
  *(_DWORD *)(this + 220) = 0; /*0x41f643*/
  if ( _strcmpi(v42, off_818114) ) /*0x41f655*/
    *(_DWORD *)(this + 220) = TeamTypeClass::FindByName(v42); /*0x41f66a*/
  v5 = strtok(0, MEMORY[0x817F70]); /*0x41f676*/
  if ( !v5 ) /*0x41f680*/
    return 0; /*0x41f680*/
  strncpy(v42, v5, 0x18u); /*0x41f68e*/
  v43 = 0; /*0x41f69a*/
  String::Trim(v42); /*0x41f69e*/
  *(_DWORD *)(this + 160) = 0; /*0x41f6a3*/
  *(_DWORD *)(this + 168) = -1; /*0x41f6a9*/
  if ( _strcmpi(v42, off_818118) ) /*0x41f6bf*/
  {
    if ( _strcmpi(v42, off_818114) ) /*0x41f6e2*/
    {
      v6 = SuperWeaponTypeClass::FindByName(v42); /*0x41f6f2*/
      *(_DWORD *)(this + 168) = v6; /*0x41f6fa*/
      if ( v6 != -1 ) /*0x41f700*/
        *(_DWORD *)(this + 160) = 1; /*0x41f702*/
    }
  }
  else
  {
    *(_DWORD *)(this + 160) = 2; /*0x41f6cb*/
  }
  if ( !strtok(0, MEMORY[0x817F70]) ) /*0x41f712*/
    return 0; /*0x41f712*/
  *(_DWORD *)(this + 176) = 0; /*0x41f728*/
  v7 = strtok(0, MEMORY[0x817F70]); /*0x41f72e*/
  if ( !v7 ) /*0x41f738*/
    return 0; /*0x41f738*/
  *(_DWORD *)(this + 152) = atoi(v7); /*0x41f74a*/
  v8 = strtok(0, MEMORY[0x817F70]); /*0x41f750*/
  if ( !v8 ) /*0x41f75a*/
    return 0; /*0x41f75a*/
  strncpy(v42, v8, 0x18u); /*0x41f768*/
  v43 = 0; /*0x41f774*/
  String::Trim(v42); /*0x41f778*/
  v9 = 0; /*0x41f781*/
  ExitCellByName = Factory::FindExitCellByName(v42); /*0x41f783*/
  if ( ExitCellByName != -1 ) /*0x41f78b*/
  {
    v9 = *((_DWORD *)MEMORY[0xA8E34C] + ExitCellByName); /*0x41f793*/
    goto LABEL_26; /*0x41f796*/
  }
  Index = BuildingTypeClass::FindIndex(v42); /*0x41f79c*/
  if ( Index != -1 ) /*0x41f7a4*/
  {
    v12 = g_UnitTypeCount2; /*0x41f7a6*/
LABEL_25:
    v9 = v12[Index]; /*0x41f7db*/
    goto LABEL_26; /*0x41f7db*/
  }
  v13 = TypeClass::FindByName(v42); /*0x41f7b2*/
  if ( v13 != -1 ) /*0x41f7ba*/
  {
    v9 = *((_DWORD *)MEMORY[0xA8B21C] + v13); /*0x41f7c2*/
    goto LABEL_26; /*0x41f7c5*/
  }
  Index = BuildingTypeClass::FindIndexByName(v42); /*0x41f7cb*/
  if ( Index != -1 ) /*0x41f7d3*/
  {
    v12 = g_TriggerTypeCount; /*0x41f7d5*/
    goto LABEL_25; /*0x41f7d5*/
  }
LABEL_26:
  *(_DWORD *)(this + 216) = v9; /*0x41f7de*/
  v14 = strtok(0, MEMORY[0x817F70]); /*0x41f7ea*/
  if ( !v14 ) /*0x41f7f4*/
    return 0; /*0x41faf5*/
  strcpy(v40, "00"); /*0x41f807*/
  v15 = 0; /*0x41f80e*/
  v16 = *v14 == 0; /*0x41f810*/
  v17 = v14; /*0x41f812*/
  LODWORD(v41) = 0; /*0x41f818*/
  if ( !v16 ) /*0x41f81c*/
  {
    do /*0x41f876*/
    {
      if ( isspace(*v17) ) /*0x41f822*/
      {
        do /*0x41f834*/
          v18 = *++v17; /*0x41f82e*/
        while ( isspace(v18) ); /*0x41f834*/
      }
      v19 = *v17; /*0x41f840*/
      v20 = *++v17; /*0x41f842*/
      v40[0] = v19; /*0x41f848*/
      if ( v20 ) /*0x41f84c*/
      {
        v40[1] = v20; /*0x41f84e*/
        ++v17; /*0x41f852*/
      }
      else
      {
        v40[1] = 0; /*0x41f855*/
      }
      if ( v15 >= 0x20 ) /*0x41f85c*/
        break; /*0x41f85c*/
      *(_BYTE *)(v15 + this + 228) = globalHelper_0C9DBD(v40, &v41, 16); /*0x41f86f*/
      ++v15; /*0x41f87b*/
    }
    while ( *v17 ); /*0x41f876*/
  }
  v21 = strtok(0, MEMORY[0x817F70]); /*0x41f886*/
  if ( v21 ) /*0x41f890*/
  {
    v22 = atof(v21); /*0x41f893*/
    v41 = (unsigned int)Math::RoundToInt(v22); /*0x41f8a0*/
    *(double *)(this + 184) = (double)v41; /*0x41f8ac*/
  }
  v23 = strtok(0, MEMORY[0x817F70]); /*0x41f8b8*/
  if ( v23 ) /*0x41f8c2*/
  {
    v24 = atof(v23); /*0x41f8c5*/
    v41 = (unsigned int)Math::RoundToInt(v24); /*0x41f8d2*/
    *(double *)(this + 192) = (double)v41; /*0x41f8de*/
  }
  v25 = strtok(0, MEMORY[0x817F70]); /*0x41f8ea*/
  if ( v25 ) /*0x41f8f4*/
  {
    v26 = atof(v25); /*0x41f8f7*/
    v41 = (unsigned int)Math::RoundToInt(v26); /*0x41f904*/
    *(double *)(this + 200) = (double)v41; /*0x41f910*/
  }
  v27 = strtok(0, MEMORY[0x817F70]); /*0x41f91c*/
  if ( v27 ) /*0x41f926*/
    *(_BYTE *)(this + 208) = atoi(v27) != 0; /*0x41f936*/
  strtok(0, MEMORY[0x817F70]); /*0x41f942*/
  v28 = strtok(0, MEMORY[0x817F70]); /*0x41f94d*/
  if ( v28 ) /*0x41f957*/
    *(_DWORD *)(this + 172) = atoi(v28); /*0x41f962*/
  v29 = strtok(0, MEMORY[0x817F70]); /*0x41f96e*/
  if ( v29 ) /*0x41f978*/
    *(_BYTE *)(this + 209) = atoi(v29) != 0; /*0x41f988*/
  v30 = strtok(0, MEMORY[0x817F70]); /*0x41f994*/
  if ( v30 ) /*0x41f99e*/
  {
    strncpy(v44, v30, 0x18u); /*0x41f9a8*/
    v44[23] = 0; /*0x41f9b4*/
    String::Trim(v44); /*0x41f9b8*/
    *(_DWORD *)(this + 224) = 0; /*0x41f9bd*/
    if ( _strcmpi(v44, off_818114) ) /*0x41f9cf*/
      *(_DWORD *)(this + 224) = TeamTypeClass::FindByName(v44); /*0x41f9e4*/
  }
  v31 = strtok(0, MEMORY[0x817F70]); /*0x41f9f0*/
  if ( v31 ) /*0x41f9fa*/
    *(_BYTE *)(this + 210) = atoi(v31) != 0; /*0x41fa0a*/
  v32 = strtok(0, MEMORY[0x817F70]); /*0x41fa16*/
  if ( v32 ) /*0x41fa20*/
    *(_BYTE *)(this + 211) = atoi(v32) != 0; /*0x41fa30*/
  v33 = strtok(0, MEMORY[0x817F70]); /*0x41fa3c*/
  if ( v33 ) /*0x41fa46*/
    *(_BYTE *)(this + 212) = atoi(v33) != 0; /*0x41fa56*/
  v34 = *(_DWORD *)(this + 220); /*0x41fa5c*/
  if ( v34 ) /*0x41fa64*/
  {
    v35 = *(_DWORD *)(this + 176); /*0x41fa6c*/
    if ( v35 <= HouseClass::GetMaxBuildLevel(*(int **)(v34 + 228)) ) /*0x41fa79*/
      MaxBuildLevel = HouseClass::GetMaxBuildLevel(*(int **)(*(_DWORD *)(this + 220) + 228)); /*0x41fa8b*/
    else
      MaxBuildLevel = v35; /*0x41fa7b*/
    *(_DWORD *)(this + 176) = MaxBuildLevel; /*0x41fa90*/
  }
  v37 = *(_DWORD *)(this + 224); /*0x41fa96*/
  if ( v37 ) /*0x41fa9e*/
  {
    v38 = *(_DWORD *)(this + 176); /*0x41faa6*/
    if ( v38 > HouseClass::GetMaxBuildLevel(*(int **)(v37 + 228)) ) /*0x41fab3*/
    {
      *(_DWORD *)(this + 176) = v38; /*0x41fab8*/
      return 1; /*0x41fac9*/
    }
    *(_DWORD *)(this + 176) = HouseClass::GetMaxBuildLevel(*(int **)(*(_DWORD *)(this + 224) + 228)); /*0x41fadd*/
  }
  return 1; /*0x41fab7*/
}


// ==== 0x0041FB10  AITriggerTypeClass::SaveToINI  this=AITriggerTypeClass  sig=csp ====
char __thiscall TriggerTypeClass_SaveToINI(int this, char *a2)
{
  const char *v3; // ebp
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // edi
  char *v9; // ebx
  bool v10; // zf
  const char *v12; // [esp+10h] [ebp-40Ch]
  const char *v13; // [esp+14h] [ebp-408h]
  const char *v14; // [esp+18h] [ebp-404h]
  char Buffer[512]; // [esp+1Ch] [ebp-400h] BYREF
  char Source[512]; // [esp+21Ch] [ebp-200h] BYREF

  v12 = (const char *)off_818114; /*0x41fb20*/
  v13 = (const char *)off_818114; /*0x41fb24*/
  v3 = (const char *)off_818114; /*0x41fb28*/
  v14 = (const char *)off_818114; /*0x41fb2a*/
  v4 = *(_DWORD *)(this + 220); /*0x41fb2e*/
  if ( v4 ) /*0x41fb37*/
    v12 = (const char *)(v4 + 36); /*0x41fb3c*/
  v5 = *(_DWORD *)(this + 224); /*0x41fb40*/
  if ( v5 ) /*0x41fb48*/
    v13 = (const char *)(v5 + 36); /*0x41fb4d*/
  if ( *(_DWORD *)(this + 160) == 1 ) /*0x41fb58*/
  {
    v6 = *(_DWORD *)(this + 168); /*0x41fb65*/
    if ( v6 != -1 ) /*0x41fb6e*/
      v3 = (const char *)(*((_DWORD *)g_SuperWeaponTypeCount + v6) + 36); /*0x41fb79*/
  }
  else if ( *(_DWORD *)(this + 160) == 2 ) /*0x41fb5b*/
  {
    v3 = (const char *)off_818118; /*0x41fb5d*/
  }
  v7 = *(_DWORD *)(this + 216); /*0x41fb7c*/
  if ( v7 ) /*0x41fb84*/
    v14 = (const char *)(v7 + 36); /*0x41fb89*/
  v8 = 0; /*0x41fb8d*/
  v9 = Buffer; /*0x41fb8f*/
  do /*0x41fbb2*/
  {
    sprintf(v9, MEMORY[0x8181B0], *(unsigned __int8 *)(this + v8++ + 228)); /*0x41fba3*/
    v9 += 2; /*0x41fbac*/
  }
  while ( v8 < 0x20 ); /*0x41fbb2*/
  v10 = *(_BYTE *)(this + 212) == 0; /*0x41fbbc*/
  *v9 = 0; /*0x41fbbe*/
  sprintf( /*0x41fc64*/
    Source,
    stru_818174,
    (const char *)(this + 100),
    v12,
    v3,
    *(_DWORD *)(this + 176),
    *(_DWORD *)(this + 152),
    v14,
    Buffer,
    *(long double *)(this + 184),
    *(long double *)(this + 192),
    *(long double *)(this + 200),
    *(_BYTE *)(this + 208) != 0,
    0,
    *(_DWORD *)(this + 172),
    *(_BYTE *)(this + 209) != 0,
    v13,
    *(_BYTE *)(this + 210) != 0,
    *(_BYTE *)(this + 211) != 0,
    !v10);
  return INIClass::SetString(a2, (unsigned __int8 *)aAitriggertypes, (char *)(this + 36), Source); /*0x41fc8a*/
}


// ==== 0x0041FD30  ObjectClass::method_41FD30  this=ObjectClass  sig=csp ====
int __thiscall sub_41FD30(_DWORD *this, int a2)
{
  this->q0D8 = a2; /*0x41fd34*/
  return a2; /*0x41fd3a*/
}


// ==== 0x0041FD40  ObjectClass::method_41FD40  this=ObjectClass  sig=csp ====
int __thiscall sub_41FD40(_DWORD *this, int a2)
{
  this->q0DC = a2; /*0x41fd44*/
  return a2; /*0x41fd4a*/
}


// ==== 0x0041FD50  ObjectClass::method_41FD50  this=ObjectClass  sig=csp ====
int __thiscall sub_41FD50(_DWORD *this, int a2)
{
  this->q0E0 = a2; /*0x41fd54*/
  return a2; /*0x41fd5a*/
}


// ==== 0x0041FD60  AITriggerTypeClass::RegisterSuccess  this=AITriggerTypeClass  sig=csp ====
int __thiscall AITriggerTypeClass::RegisterSuccess(int this)
{
  int v1; // edx
  double v2; // st7
  double v3; // st7
  int result; // eax

  v1 = *(_DWORD *)(this + 264); /*0x41fd61*/
  v2 = 0.0; /*0x41fd67*/
  if ( v1 > 0 ) /*0x41fd73*/
  {
    v2 = (double)*(int *)(this + 264) * ((double)*(int *)(this + 260) / (double)*(int *)(this + 264) - 0.5); /*0x41fd89*/
    if ( v2 < 0.0 ) /*0x41fd96*/
      v2 = 0.0; /*0x41fd9a*/
  }
  v3 = v2 + *(double *)&MEMORY[0x8871E0]->AITriggerSuccessWeightDelta + *(double *)(this + 184); /*0x41fdb1*/
  *(double *)(this + 184) = v3; /*0x41fdb3*/
  if ( v3 < *(double *)(this + 192) ) /*0x41fdc4*/
  {
    *(_DWORD *)(this + 184) = *(_DWORD *)(this + 192); /*0x41fdcc*/
    *(_DWORD *)(this + 188) = *(_DWORD *)(this + 196); /*0x41fdd8*/
  }
  if ( *(double *)(this + 184) > *(double *)(this + 200) ) /*0x41fdef*/
  {
    *(_DWORD *)(this + 184) = *(_DWORD *)(this + 200); /*0x41fdf7*/
    *(_DWORD *)(this + 188) = *(_DWORD *)(this + 204); /*0x41fe03*/
  }
  result = *(_DWORD *)(this + 260) + 1; /*0x41fe0f*/
  *(_DWORD *)(this + 260) = result; /*0x41fe11*/
  *(_DWORD *)(this + 264) = v1 + 1; /*0x41fe17*/
  return result; /*0x41fe1e*/
}


// ==== 0x0041FE20  AITriggerTypeClass::RegisterFailure  this=AITriggerTypeClass  sig=csp ====
int __thiscall AITriggerTypeClass::RegisterFailure(int this)
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

  v1 = *(_DWORD *)(this + 264); /*0x41fe21*/
  v2 = 0.0; /*0x41fe28*/
  if ( v1 > 0 ) /*0x41fe3a*/
  {
    v2 = (double)v1 /*0x41fe56*/
       * (((double)*(int *)(this + 260) / (double)v1 - 0.5)
        * *(double *)&MEMORY[0x8871E0]->AITriggerTrackRecordCoefficient);
    if ( v2 > 0.0 ) /*0x41fe63*/
      v2 = 0.0; /*0x41fe67*/
  }
  v3 = v2 + *(double *)&MEMORY[0x8871E0]->AITriggerFailureWeightDelta + *(double *)(this + 184); /*0x41fe7a*/
  *(double *)(this + 184) = v3; /*0x41fe7c*/
  if ( v3 < *(double *)(this + 192) ) /*0x41fe8d*/
  {
    *(_DWORD *)(this + 184) = *(_DWORD *)(this + 192); /*0x41fe95*/
    result = *(_DWORD *)(this + 196); /*0x41fe9b*/
    *(_DWORD *)(this + 188) = result; /*0x41fea1*/
  }
  v6 = *(double *)(this + 184); /*0x41fea7*/
  v7 = v6 < *(double *)(this + 200); /*0x41fead*/
  v8 = 0; /*0x41fead*/
  v9 = v6 == *(double *)(this + 200); /*0x41fead*/
  LOWORD(result) = v5; /*0x41feb3*/
  if ( v6 > *(double *)(this + 200) ) /*0x41feb8*/
  {
    *(_DWORD *)(this + 184) = *(_DWORD *)(this + 200); /*0x41fec0*/
    result = *(_DWORD *)(this + 204); /*0x41fec6*/
    *(_DWORD *)(this + 188) = result; /*0x41fecc*/
  }
  *(_DWORD *)(this + 264) = v1 + 1; /*0x41fed3*/
  return result; /*0x41fed9*/
}


// ==== 0x0041FEE0  globalHelper_01FEE0  this=-  sig=csp ====
bool __stdcall globalHelper_01FEE0(IUnknown *aP0, _DWORD *a1, _DWORD *a2)
{
  IUnknown *v3; // edi
  AbstractClass *v4; // esi
  ObjectClass *CurrentOption; // eax
  MouseClass *v6; // esi
  int v7; // edi
  MouseClass *v8; // esi
  MouseClass *TileIndex; // edi

  v3 = aP0; /*0x41fee2*/
  if ( aP0->__pad_EC[4] ) /*0x41fee6*/
  {
    v4 = (AbstractClass *)a2; /*0x41fef4*/
    if ( a2 ) /*0x41fefa*/
    {
      a2 = *(_DWORD **)HouseClass::GetCurrentOption(a1, (IUnknown *)&a1)->__pad_0; /*0x41ff14*/
      CurrentOption = HouseClass::GetCurrentOption(v4, (IUnknown *)&a1); /*0x41ff1b*/
      v6 = *(MouseClass **)v3->__pad_EC; /*0x41ff22*/
      aP0 = *(IUnknown **)CurrentOption->__pad_0; /*0x41ff28*/
      if ( !v3->__pad_EC[5] ) /*0x41ff37*/
      {
        TileIndex = (MouseClass *)MapClass::GetTileIndex( /*0x41ffa2*/
                                    &stru_87C374.__pad_14B0[8132],
                                    (IUnknown *)&aP0,
                                    (IUnknown *)v6,
                                    0);
        return MapClass::GetTileIndex(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a2, (IUnknown *)v6, 0) == (_DWORD)TileIndex; /*0x41ffbd*/
      }
      v7 = MapClass::GetTileIndex(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP0, (IUnknown *)v6, 0); /*0x41ff55*/
      if ( MapClass::GetTileIndex(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a2, (IUnknown *)v6, 0) == v7 ) /*0x41ff5e*/
        return 0; /*0x41ff5e*/
      v8 = (MouseClass *)MapClass::GetTileIndex(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP0, (IUnknown *)5, 0); /*0x41ff81*/
      if ( (MouseClass *)MapClass::GetTileIndex(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a2, (IUnknown *)5, 0) != v8 ) /*0x41ff8a*/
        return 0; /*0x41ff90*/
    }
  }
  return 1; /*0x41ff8c*/
}


// ==== 0x0041FFD0  AITriggerTypeClass::GetTypeIdentifier  this=AITriggerTypeClass  sig=csp ====
int AITriggerTypeClass::_vt11()
{
  return 59; /*0x41ffd5*/
}


// ==== 0x0041FFE0  AITriggerTypeClass::GetObjectSize  this=AITriggerTypeClass  sig=csp ====
int AITriggerTypeClass::_vt12()
{
  return 272; /*0x41ffe5*/
}


// ==== 0x0041FFF0  AITriggerTypeClass::ddtor  this=AITriggerTypeClass  sig=csp ====
AITriggerTypeClass *__thiscall AITriggerTypeClass::ddtor(_DWORD *Block, char a2)
{
  int v3; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &AITriggerTypeClass::`vftable'; /*0x41fffd*/
  *(Block + 1) = &AITriggerTypeClass::`vftable'; /*0x420003*/
  *(Block + 2) = &AITriggerTypeClass::`vftable'; /*0x42000a*/
  *(Block + 3) = &vt_AITriggerTypeClass; /*0x420011*/
  v5 = Block; /*0x42001f*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xA8B200] + 16))(&MEMORY[0xA8B200], &v5); /*0x420023*/
  if ( v3 != -1 && v3 < MEMORY[0xA8B210] && v3 < --MEMORY[0xA8B210] ) /*0x42003e*/
  {
    do /*0x420056*/
    {
      ++v3; /*0x420046*/
      *((_DWORD *)MEMORY[0xA8B204] + v3 - 1) = *((_DWORD *)MEMORY[0xA8B204] + v3); /*0x42004a*/
    }
    while ( v3 < MEMORY[0xA8B210] ); /*0x420056*/
  }
  AbstractTypeClass::Dtor(Block); /*0x42005a*/
  if ( (a2 & 1) != 0 ) /*0x420064*/
    OperatorDelete(Block); /*0x420067*/
  return (AITriggerTypeClass *)Block; /*0x420071*/
}

