// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00710000  FootClass::FootClass_ImbueLocomotor  this=TechnoClass  sig=csp ====
void __userpurge FootClass::FootClass_ImbueLocomotor(
        int *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        _DWORD *ppv,
        IID rclsid,
        int a6)
{
  _DWORD *v6; // esi
  _DWORD *v7; // ecx
  _DWORD *v8; // ecx
  int v9; // eax
  _DWORD *v10; // edi
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int *v21; // ebx
  int v22; // ebp
  int v23; // ecx
  int Member; // eax
  _DWORD *v25; // ecx
  _DWORD *v26; // ebx
  int v27; // [esp+60h] [ebp-1Ch] BYREF
  int v28; // [esp+64h] [ebp-18h] BYREF
  int v29; // [esp+68h] [ebp-14h] BYREF
  int *v30; // [esp+6Ch] [ebp-10h]
  int v31; // [esp+70h] [ebp-Ch] BYREF
  int v32; // [esp+78h] [ebp-4h]

  v6 = ppv; /*0x710006*/
  v30 = a1; /*0x71000d*/
  if ( ppv )
  {
    v7 = (_DWORD *)ppv[180]; /*0x710017*/
    if ( v7 ) /*0x71001f*/
      TaskManager::Update(v7); /*0x710021*/
    v8 = (_DWORD *)v6[421]; /*0x710026*/
    if ( v8 && v8[423] && *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v8 + 132))(v8) + 3278) ) /*0x710042*/
      BuildingClass::Deploy(*(_DWORD *)(v6[421] + 1692), a2, a3); /*0x710058*/
    v9 = v6[413]; /*0x71005d*/
    v10 = v6 + 413; /*0x710063*/
    v27 = 0; /*0x71006b*/
    if ( v9 ) /*0x710073*/
    {
      v11 = StreamClass::Set(&v27, v6 + 413); /*0x71007a*/
      if ( v11 < 0 && v11 != -2147467262 ) /*0x710088*/
        WinAPI::Wrapper(v11); /*0x71008b*/
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v6 + 132))(v6) + 1516)
      && v27
      && !v6[172]
      && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v27 + 28))(v27) )
    {
      if ( !v27 ) /*0x7100d6*/
        WinAPI::Wrapper(-2147467261); /*0x7100dd*/
      v12 = (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v27 + 20))(v27) == 0; /*0x7100ec*/
      v13 = *v10; /*0x7100ee*/
      if ( v12 ) /*0x7100f0*/
      {
        if ( !v13 ) /*0x710126*/
          WinAPI::Wrapper(-2147467261); /*0x71012d*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v10 + 72))(*v10); /*0x710137*/
        (*(void (__thiscall **)(_DWORD *, int))(*v6 + 496))(v6, -1); /*0x710140*/
        (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 488))(v6, 13, 0); /*0x71014e*/
      }
      else
      {
        if ( v13 ) /*0x7100f4*/
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v13 + 8))(*v10); /*0x7100f9*/
        v14 = v27; /*0x7100fc*/
        *v10 = 0; /*0x710100*/
        if ( !v14 ) /*0x710108*/
          WinAPI::Wrapper(-2147467261); /*0x71010f*/
        (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v14 + 16))(v14, v6 + 413); /*0x71011c*/
      }
    }
    else
    {
      if ( !*v10 ) /*0x710159*/
        WinAPI::Wrapper(-2147467261); /*0x710163*/
      (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*v10 + 156))(*v10, 0); /*0x71016f*/
      v12 = *v10 == 0; /*0x710189*/
      v32 = MEMORY[0xB0EA98]; /*0x71018b*/
      if ( v12 ) /*0x71018f*/
        WinAPI::Wrapper(-2147467261); /*0x710196*/
      (*(void (__stdcall **)(_DWORD, int, int, int, int))(*(_DWORD *)*v10 + 112))( /*0x7101b3*/
        *v10,
        -1,
        MEMORY[0xB0EA90],
        MEMORY[0xB0EA94],
        v32);
      v15 = *v6; /*0x7101b6*/
      v16 = (*(int (__thiscall **)(_DWORD *, int *))(*v6 + 72))(v6, &v31); /*0x7101bf*/
      (*(void (__thiscall **)(_DWORD *, int))(v15 + 244))(v6, v16); /*0x7101c5*/
      v17 = *v6; /*0x7101cb*/
      *((_BYTE *)v6 + 1718) = 1; /*0x7101cf*/
      (*(void (__thiscall **)(_DWORD *))(v17 + 976))(v6); /*0x7101d6*/
      v12 = *v10 == 0; /*0x7101e0*/
      v28 = 0; /*0x7101e2*/
      if ( !v12 ) /*0x7101e6*/
      {
        v18 = StreamClass::Set(&v28, v6 + 413); /*0x7101ed*/
        if ( v18 < 0 && v18 != -2147467262 ) /*0x7101fb*/
          WinAPI::Wrapper(v18); /*0x7101fe*/
      }
      ppv = 0; /*0x71020f*/
      v19 = CreateInstanceCOM((LPVOID *)&ppv, &rclsid, 0, 7u); /*0x710213*/
      if ( v19 < 0 && v19 != -2147467262 ) /*0x710221*/
        WinAPI::Wrapper(v19); /*0x710224*/
      if ( !ppv ) /*0x71022f*/
        WinAPI::Wrapper(-2147467261); /*0x710236*/
      (*(void (__stdcall **)(_DWORD *, _DWORD *))(*ppv + 12))(ppv, v6); /*0x710243*/
      v29 = 0; /*0x71024a*/
      if ( ppv ) /*0x710250*/
      {
        v20 = StreamClass::Set(&v29, &ppv); /*0x71025b*/
        if ( v20 < 0 && v20 != -2147467262 ) /*0x710269*/
          WinAPI::Wrapper(v20); /*0x71026c*/
      }
      COMObject::SwapReference(&v28, v29); /*0x71027a*/
      if ( v29 ) /*0x710285*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v29 + 8))(v29); /*0x71028a*/
      if ( v28 )
      {
        v21 = v30; /*0x710297*/
        if ( v30[171] ) /*0x71029b*/
          TechnoClass::EjectPassengers(v30, 0); /*0x7102a6*/
        if ( v6[171] ) /*0x7102ab*/
          TechnoClass::EjectPassengers(v6, 1); /*0x7102b7*/
        if ( !v28 ) /*0x7102c4*/
          WinAPI::Wrapper(-2147467261); /*0x7102cb*/
        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v28 + 12))(v28, *v10); /*0x7102d8*/
        v22 = *v10; /*0x7102db*/
        if ( (_DWORD *)*v10 != ppv ) /*0x7102e3*/
        {
          *v10 = ppv; /*0x7102e7*/
          SuperClass::SetFieldX(v6 + 413); /*0x7102e9*/
          if ( v22 ) /*0x7102f0*/
            (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 8))(v22); /*0x7102f6*/
        }
        v21[171] = (v6[5] & 1) != 0 ? (unsigned int)v6 : 0;
        *((v6[5] & 1) != 0 ? v6 + 172 : (_DWORD *)688) = v21;
        (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v21[171] + 1152))(v21[171], v21, 1); /*0x710326*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v21[171] + 336))(v21[171]); /*0x710334*/
        v23 = v6[373]; /*0x71033a*/
        if ( v23 ) /*0x710342*/
          TeamClass::LiberateMember_Start(v23, (int)v6, 0xFFFFFFFF, 0); /*0x710349*/
        *((_BYTE *)v6 + 1709) = 1; /*0x710352*/
        Member = Team::GetMember(v6, 0); /*0x710359*/
        if ( Member && (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 ) /*0x71036c*/
          (*(void (__thiscall **)(_DWORD *, int))(*v6 + 640))(v6, 3); /*0x710374*/
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v21[171] + 488))(v21[171], 5, 1); /*0x710386*/
        v25 = (_DWORD *)v21[171]; /*0x71038c*/
        if ( !*(_BYTE *)(v25[135] + 492) && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v25 + 132))(v25) + 1516) ) /*0x7103aa*/
        {
          v26 = (_DWORD *)v21[171]; /*0x7103b4*/
          if ( !*(_BYTE *)(*(_DWORD *)(v26[135] + 52) + 422) ) /*0x7103c3*/
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v26 + 488))(v26, 15, 0); /*0x7103d5*/
        }
      }
      if ( ppv ) /*0x7103e1*/
        (*(void (__stdcall **)(_DWORD *))(*ppv + 8))(ppv); /*0x7103e6*/
      if ( v28 ) /*0x7103ef*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v28 + 8))(v28); /*0x7103f4*/
    }
    if ( v27 ) /*0x7103fd*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v27 + 8))(v27); /*0x710402*/
  }
}


// ==== 0x00710410  ObjectClass::ClearPointerRefs  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::ClearPointerRefs(#377 *this)
{
  int v2; // [esp+4h] [ebp+4h]

  if ( v2 == this->behindAnim ) /*0x71041f*/
    this->behindAnim = 0; /*0x710421*/
  if ( v2 == this->alignmentPadding75 ) /*0x71042d*/
    this->alignmentPadding75 = 0; /*0x71042f*/
  if ( v2 == this->mindControlRingAnim ) /*0x71043b*/
    this->mindControlRingAnim = 0; /*0x71043d*/
  if ( v2 == this->u32_4C ) /*0x71044c*/
    this->u32_4C = 0; /*0x71044e*/
  return ObjectClass::ResetPointerIfMatch(this); /*0x71045a*/
}


// ==== 0x00710460  TechnoClass::FreeCaptureManager  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::FreeCaptureManager(#377 *this)
{
  _DWORD *v1; // ecx
  int result; // eax

  v1 = (_DWORD *)this->captureManager; /*0x710460*/
  if ( v1 ) /*0x710468*/
    return CaptureManager::FreeAll(v1); /*0x71046a*/
  return result; /*0x71046f*/
}


// ==== 0x00710470  TechnoClass::EnteredOpenTopped  this=IUnknown  sig=csp ====
char __stdcall TechnoClass::EnteredOpenTopped(ObjectClass *aP0)
{
  int v1; // eax
  char result; // al

  if ( aP0 ) /*0x710477*/
  {
    v1 = *(_DWORD *)aP0->__pad_0; /*0x710479*/
    aP0->inOpenToppedTransport = 1; /*0x71047d*/
    (*(void (__thiscall **)(ObjectClass *))(v1 + 976))(aP0); /*0x710484*/
    return ObjectClass::SetDeployState(aP0, 0); /*0x710492*/
  }
  return result; /*0x710497*/
}


// ==== 0x007104A0  TechnoClass::ExitedOpenTopped  this=AbstractClass  sig=csp ====
int __stdcall TechnoClass::ExitedOpenTopped(TechnoClass *aP0)
{
  TechnoClass *result; // eax

  result = aP0; /*0x7104a0*/
  if ( aP0 ) /*0x7104a6*/
    aP0->inOpenToppedTransport = 0; /*0x7104a8*/
  return (int)result->__pad_0; /*0x7104af*/
}


// ==== 0x007104C0  TechnoClass::MarkPassengersAsExited  this=AbstractClass  sig=csp ====
int __thiscall TechnoClass::MarkPassengersAsExited(_DWORD *this)
{
  int result; // eax

  result = CCINIClass::GetDB(this + 69); /*0x7104c6*/
  if ( result ) /*0x7104cf*/
  {
    do /*0x7104e7*/
    {
      *(_BYTE *)(result + 130) = 0; /*0x7104d7*/
      result = *(_DWORD *)(result + 48); /*0x7104dd*/
    }
    while ( result && (*(_BYTE *)(result + 20) & 4) != 0 ); /*0x7104e7*/
  }
  return result; /*0x7104e9*/
}


// ==== 0x007104F0  FootClass::UpdatePassengerCoords  this=FootClass  sig=csp ====
int __thiscall FootClass::UpdatePassengerCoords(int *this)
{
  int *v1; // edi
  int DB; // esi
  int result; // eax
  _DWORD v4[3]; // [esp+8h] [ebp-Ch] BYREF

  v1 = this + 39; /*0x710502*/
  DB = CCINIClass::GetDB(this + 69); /*0x710508*/
  result = *v1; /*0x71050c*/
  v4[0] = *v1; /*0x71050e*/
  v4[1] = v1[1]; /*0x710515*/
  v4[2] = v1[2]; /*0x71051c*/
  if ( DB ) /*0x710520*/
  {
    do /*0x71053c*/
    {
      result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)DB + 436))(DB, v4); /*0x71052b*/
      DB = *(_DWORD *)(DB + 48); /*0x710531*/
    }
    while ( DB && (*(_BYTE *)(DB + 20) & 4) != 0 ); /*0x71053c*/
  }
  return result; /*0x71053e*/
}


// ==== 0x00710550  CCINIClass::IterateNodes  this=IUnknown  sig=csp ====
int __thiscall CCINIClass::IterateNodes(_DWORD *this, IUnknown *aP1)
{
  int result; // eax
  int v3; // esi

  result = CCINIClass::GetDB(this + 69); /*0x710558*/
  v3 = result; /*0x71055d*/
  if ( result ) /*0x710561*/
  {
    do /*0x71057d*/
    {
      result = (*(int (__thiscall **)(int, IUnknown *))(*(_DWORD *)v3 + 968))(v3, aP1); /*0x71056c*/
      v3 = *(_DWORD *)(v3 + 48); /*0x710572*/
    }
    while ( v3 && (*(_BYTE *)(v3 + 20) & 4) != 0 ); /*0x71057d*/
  }
  return result; /*0x71057f*/
}


// ==== 0x007105E0  BuildingClass::IsBeingRepairedOrCaptured  this=BuildingClass  sig=csp ====
BOOL __thiscall BuildingClass::IsBeingRepairedOrCaptured(int this)
{
  return *(_DWORD *)(this + 704) || *(_BYTE *)(this + 708); /*0x7105f6*/
}


// ==== 0x00710670  TechnoClass::OnCellPlacementComplete  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt229(#377 *this)
{
  int result; // eax
  int v3; // edx
  int v4; // eax
  _DWORD v5[3]; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v6; // [esp+18h] [ebp+4h]

  CellClass::AddObject((_DWORD *)this + 69, v6); /*0x710682*/
  if ( v6 ) /*0x710689*/
  {
    result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x71068f*/
    if ( *(_DWORD *)(result + 1380) != -1 ) /*0x71069c*/
    {
      v5[0] = this->q027; /*0x7106ac*/
      v3 = *(_DWORD *)this; /*0x7106b0*/
      v5[1] = this->owningHouseIndex; /*0x7106b5*/
      v5[2] = this->locationZ; /*0x7106bc*/
      v4 = (*(int (__thiscall **)(#377 *))(v3 + 132))(this); /*0x7106c2*/
      return PlayAudioAt2(*(_DWORD *)(v4 + 1380), v5, 0); /*0x7106d0*/
    }
  }
  return result; /*0x7106d5*/
}


// ==== 0x007106E0  TechnoClass::ScalarDtor  this=TechnoClass  sig=csp ====
TechnoClass *__thiscall TechnoClass::ScalarDtor(void *Block, char a2)
{
  TechnoClass::DTOR((int)Block); /*0x7106e3*/
  if ( (a2 & 1) != 0 ) /*0x7106ed*/
    __3_YAXPAX_Z(Block); /*0x7106f0*/
  return (TechnoClass *)Block; /*0x7106fa*/
}


// ==== 0x00710700  Coord::Divide  this=AbstractClass  sig=csp ====
int *__thiscall Coord_Divide(_DWORD *this, int *a2, int a3)
{
  int v4; // ebx
  int v5; // eax

  if ( a3 ) /*0x710708*/
  {
    v4 = this->vtable2 / a3; /*0x71072f*/
    v5 = this->vtable3 / a3; /*0x710735*/
    *a2 = *this / a3; /*0x71073d*/
    a2[1] = v4; /*0x71073f*/
    a2[2] = v5; /*0x710745*/
  }
  else
  {
    *a2 = 0; /*0x710714*/
    a2[1] = 0; /*0x710716*/
    a2[2] = 0; /*0x710719*/
  }
  return a2; /*0x71071c*/
}


// ==== 0x00710750  ObjectClass::Object_Helper  this=TechnoClass  sig=csp ====
char __thiscall sub_710750(int this, int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x71075c*/
    return 0; /*0x71075c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *(_DWORD *)(this + 8))); /*0x710770*/
  if ( !v3 ) /*0x710777*/
    return 0; /*0x7107d0*/
  for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v3[v5 + 4] = v6[1] ) /*0x710785*/
  {
    v5 = 8 * i; /*0x710789*/
    v6 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x710792*/
    *(_DWORD *)&v3[v5] = *v6; /*0x710797*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x7107ab*/
  v7 = a2 + *(_DWORD *)(this + 8); /*0x7107b6*/
  *(_DWORD *)this = v3; /*0x7107b8*/
  *(_DWORD *)(this + 8) = v7; /*0x7107ba*/
  *(_DWORD *)(this + 16) = 0; /*0x7107bd*/
  return 1; /*0x7107c4*/
}


// ==== 0x007107E0  SortedStateVector::BinarySearch  this=SortedStateVector  sig=csp ====
size_t __thiscall SortedStateVector::BinarySearch(char **this, IUnknown *aP1)
{
  size_t result; // eax
  ObjectClass *v4; // edi
  ObjectClass *v5; // ebx
  int v6; // ecx
  ObjectClass *v7; // esi

  result = (size_t)this->q001; /*0x7107e3*/
  if ( result ) /*0x7107e8*/
  {
    if ( !*((_BYTE *)this + 12) ) /*0x7107ee*/
    {
      qsort(*this, result, 8u, sub_710860); /*0x710800*/
      this->q004 = 0; /*0x710808*/
      *((_BYTE *)this + 12) = 1; /*0x71080f*/
    }
    v4 = (ObjectClass *)*this; /*0x710819*/
    v5 = (ObjectClass *)aP1->field_0; /*0x71081b*/
    v6 = (int)this->q001; /*0x71081d*/
    if ( v6 <= 0 ) /*0x710822*/
      return 0; /*0x71084e*/
    while ( 1 ) /*0x71082b*/
    {
      v7 = *(ObjectClass **)&v4->__pad_0[8 * (v6 / 2)]; /*0x71082b*/
      if ( (int)v7 <= (int)v5 ) /*0x710833*/
      {
        if ( v7 == v5 ) /*0x710839*/
          return (size_t)v4 + 8 * (v6 / 2); /*0x710853*/
        v4 = (ObjectClass *)((char *)v4 + 8 * (v6 / 2) + 8); /*0x71083b*/
        v6 += -1 - v6 / 2; /*0x710843*/
      }
      else
      {
        v6 /= 2; /*0x710835*/
      }
      if ( v6 <= 0 ) /*0x710847*/
        return 0; /*0x710847*/
    }
  }
  return result; /*0x7107ea*/
}


// ==== 0x00710860  sub_710860  this=-  sig=ida-proto ====
int __cdecl sub_710860(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x710870*/
  else
    return *a1 >= *a2 ? 1 : -1;
}


// ==== 0x00710890  Object_Helper  this=-  sig=csp ====
int __fastcall sub_710890(int a1, int a2, int *a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a2; /*0x710895*/
  if ( a2 <= 0 ) /*0x710897*/
    return 0; /*0x7108c9*/
  v4 = *a3; /*0x71089d*/
  while ( 1 ) /*0x7108a6*/
  {
    v5 = *(_DWORD *)(a1 + 8 * (v3 / 2)); /*0x7108a6*/
    if ( v5 <= v4 ) /*0x7108ae*/
      break; /*0x7108ae*/
    v3 /= 2; /*0x7108b0*/
LABEL_7:
    if ( v3 <= 0 ) /*0x7108c2*/
      return 0; /*0x7108c2*/
  }
  if ( v5 != v4 ) /*0x7108b4*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x7108b6*/
    v3 += -1 - v3 / 2; /*0x7108be*/
    goto LABEL_7; /*0x7108be*/
  }
  return a1 + 8 * (v3 / 2); /*0x7108c4*/
}


// ==== 0x007108E0  sub_7108E0  this=-  sig=ida-proto ====
void sub_7108E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7108ec*/
  MEMORY[0xB0EB60] = Math::Sqrt(v0 + v0); /*0x7108fe*/
}


// ==== 0x00710910  sub_710910  this=-  sig=ida-proto ====
void sub_710910()
{
  MEMORY[0xB0EBB0] = MEMORY[0xB0EB60] / 60.0; /*0x71091c*/
}


// ==== 0x00710930  sub_710930  this=-  sig=ida-proto ====
void sub_710930()
{
  MEMORY[0xB0EB98] = 1.0 / MEMORY[0xB0EBB0]; /*0x71093c*/
}


// ==== 0x00710950  sub_710950  this=-  sig=ida-proto ====
void sub_710950()
{
  MEMORY[0xB0EB90] = 0.0174532925199433 * 45.0; /*0x71095c*/
}


// ==== 0x00710970  sub_710970  this=-  sig=ida-proto ====
void sub_710970()
{
  MEMORY[0xB0EB68] = 0.0174532925199433 * 60.0; /*0x71097c*/
}


// ==== 0x00710990  sub_710990  this=-  sig=ida-proto ====
void sub_710990()
{
  MEMORY[0xB0EB40] = 0.0174532925199433 * 90.0; /*0x71099c*/
}


// ==== 0x007109B0  sub_7109B0  this=-  sig=ida-proto ====
__int64 sub_7109B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0EB40] - MEMORY[0xB0EB68]); /*0x7109c2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0EB60] * 0.5); /*0x7109d6*/
  MEMORY[0xB0EBB8] = result; /*0x7109db*/
  return result; /*0x7109e0*/
}


// ==== 0x007109F0  sub_7109F0  this=-  sig=ida-proto ====
void sub_7109F0()
{
  MEMORY[0xB0EB70] = Math::ArcTan((double)MEMORY[0xB0EBB8] * 0.00390625); /*0x710a07*/
}


// ==== 0x00710A20  sub_710A20  this=-  sig=ida-proto ====
void sub_710A20()
{
  MEMORY[0xB0EB88] = Math::ArcTan((double)(2 * MEMORY[0xB0EBB8]) / MEMORY[0xB0EB60]); /*0x710a42*/
}


// ==== 0x00710A50  sub_710A50  this=-  sig=ida-proto ====
__int64 sub_710A50()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0EBB8]) + 0.5); /*0x710a6b*/
  MEMORY[0xB0EBAC] = result; /*0x710a70*/
  return result; /*0x710a76*/
}


// ==== 0x00710A80  sub_710A80  this=-  sig=ida-proto ====
int sub_710A80()
{
  MEMORY[0xB0EB58] = 0; /*0x710a82*/
  MEMORY[0xB0EB5A] = 0; /*0x710a88*/
  return 0; /*0x710a8e*/
}


// ==== 0x00710A90  sub_710A90  this=-  sig=ida-proto ====
int sub_710A90()
{
  MEMORY[0xB0EB78] = 0; /*0x710a92*/
  MEMORY[0xB0EB7C] = 0; /*0x710a97*/
  MEMORY[0xB0EB80] = 0; /*0x710a9c*/
  return 0; /*0x710aa1*/
}


// ==== 0x00710AB0  sub_710AB0  this=-  sig=ida-proto ====
int sub_710AB0()
{
  MEMORY[0xB0EBA8] = 0; /*0x710ab5*/
  MEMORY[0xB0EBA0] = 128; /*0x710abf*/
  MEMORY[0xB0EBA4] = 128; /*0x710ac4*/
  return 128; /*0x710ac9*/
}


// ==== 0x00710AD0  sub_710AD0  this=-  sig=ida-proto ====
int sub_710AD0()
{
  MEMORY[0xB0EB48] = 0; /*0x710ad2*/
  MEMORY[0xB0EB4C] = 0; /*0x710ad7*/
  MEMORY[0xB0EB50] = 0; /*0x710adc*/
  MEMORY[0xB0EB54] = 0; /*0x710ae1*/
  return 0; /*0x710ae6*/
}


// ==== 0x00710AF0  TechnoTypeClass::ReadINI  this=TechnoTypeClass  sig=csp ====
char *__thiscall TechnoTypeClass_ConstructorFull(char *this, char *Source, int a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  int v11; // ecx
  _DWORD *v12; // edi
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax

  ObjectTypeClass::ConstructFull((int)this, Source); /*0x710afb*/
  this->armed = 1; /*0x710b02*/
  this->weaponCount = 0; /*0x710b0e*/
  this->weapon1 = 0; /*0x710b14*/
  this->ImageAllocated = 0; /*0x710b1c*/
  this->q0A9 = 0; /*0x710b28*/
  this->q0AA = 0; /*0x710b2f*/
  this->q156 = 0; /*0x710b36*/
  *(_DWORD *)(this + 686) = 0; /*0x710b3d*/
  *(_DWORD *)(this + 690) = 0; /*0x710b43*/
  *(_DWORD *)(this + 694) = 0; /*0x710b4b*/
  *(_DWORD *)(this + 698) = 0; /*0x710b51*/
  this->VoiceHarvest = 0; /*0x710b57*/
  this->MainVoxel = 0; /*0x710b5e*/
  this->techLevel = 0; /*0x710b64*/
  this->pipScale = 0; /*0x710b6a*/
  this->speed = 0; /*0x710b70*/
  this->TurretVoxel = 0; /*0x710b76*/
  this->threatPosed = 0; /*0x710b7c*/
  this->threatAvoidValue = 0; /*0x710b82*/
  this->u32_2DC = 0; /*0x710b88*/
  this->q0B8 = 0; /*0x710b8e*/
  this->q0B9 = 0; /*0x710b94*/
  this->buildLimit = 0; /*0x710b9a*/
  this->u32_2EC = 0; /*0x710ba0*/
  this->ChargerTurrets = 0; /*0x710ba6*/
  this->u32_2F4 = 0; /*0x710bac*/
  this->q2F8 = 500; /*0x710bb2*/
  this->q0C0 = -755914244; /*0x710bbc*/
  this->u32_304 = 1063281229; /*0x710bc6*/
  this->AccelerationFactor = -343597384; /*0x710bd0*/
  this->q0C3 = 1067366481; /*0x710bda*/
  this->u32_C4 = 7; /*0x710be4*/
  VoxelAnimTypeVector::Constructor(0, 0); /*0x710bee*/
  this->q324 = 0; /*0x710bf8*/
  this->q328 = 10; /*0x710bfb*/
  this->DebrisTypes = &vt_TypeList_VoxelAnimTypeClass_const; /*0x710bfe*/
  VectorClass::Construct((_DWORD *)this + 204, 0, 0); /*0x710c0f*/
  this->q344 = 10; /*0x710c14*/
  this->q034 = 0; /*0x710c17*/
  this->DebrisMaximums = &vt_TypeList_int; /*0x710c1a*/
  this->Locomotor = 1247291207; /*0x710c2d*/
  this->u32_D4 = 298948665; /*0x710c39*/
  this->JumpjetCrash = -1610610249; /*0x710c42*/
  this->qD60 = -777003740; /*0x710c4b*/
  this->unknown_double_360 = 0; /*0x710c4e*/
  this->q364 = 0; /*0x710c54*/
  this->unknown_double_368 = 0; /*0x710c5a*/
  this->qDB0 = 0; /*0x710c60*/
  this->u32_DC = 0; /*0x710c6b*/
  this->q374 = 1072693248; /*0x710c71*/
  this->PhysicalSize = 0; /*0x710c77*/
  this->u32_37C = 0x40000000; /*0x710c7d*/
  this->Size = 0; /*0x710c87*/
  this->q384 = 1072693248; /*0x710c8d*/
  this->SizeLimit = 0; /*0x710c93*/
  this->q38C = 0; /*0x710c99*/
  this->HoverAttack = 0; /*0x710c9f*/
  this->VHPScan = 0; /*0x710ca5*/
  this->unknown_int_398 = 15; /*0x710cab*/
  this->RollAngle = 942502757; /*0x710cb5*/
  this->u32_3A4 = 1071694162; /*0x710cbf*/
  this->PitchSpeed = 0; /*0x710cc9*/
  this->q3AC = 1070596096; /*0x710ccf*/
  this->q0EC = 1256670343; /*0x710cd9*/
  this->u32_3B4 = 1071011608; /*0x710ce3*/
  this->BuildLimit = 0x7FFFFFFF; /*0x710cf0*/
  this->Category = -1; /*0x710cfa*/
  this->unknown_3C0 = 0; /*0x710d00*/
  this->DeployTime = 0; /*0x710d06*/
  this->u8_F3 = 0; /*0x710d0c*/
  this->FireAngle = 8; /*0x710d12*/
  this->PipScale = 0; /*0x710d1c*/
  this->PipsDrawForAll = 0; /*0x710d22*/
  this->q0F7 = 70; /*0x710d28*/
  this->u32_F8 = 0; /*0x710d33*/
  this->q0F9 = 0; /*0x710d40*/
  VectorClass::BuildingTypeConstructor((_DWORD *)this + 250, 0, 0); /*0x710d46*/
  *((_DWORD *)this + 255) = 10; /*0x710d4b*/
  *((_DWORD *)this + 254) = 0; /*0x710d51*/
  this->Dock = &vt_TypeList_BuildingTypeClass_const; /*0x710d57*/
  this->DeploysInto = 0; /*0x710d61*/
  this->UndeploysInto = 0; /*0x710d67*/
  this->PowersUnit = 0; /*0x710d6e*/
  this->PoweredUnit = 0; /*0x710d7b*/
  VectorClass::Construct((_DWORD *)this + 261, 0, 0); /*0x710d81*/
  this->q428 = 10; /*0x710d8e*/
  *((_DWORD *)this + 265) = 0; /*0x710d94*/
  this->VoiceSelect = &vt_TypeList_int; /*0x710d9a*/
  VectorClass::Construct((_DWORD *)this + 268, 0, 0); /*0x710da4*/
  this->q111 = 10; /*0x710db1*/
  this->q440 = 0; /*0x710db7*/
  this->q10C = &vt_TypeList_int; /*0x710dbd*/
  VectorClass::Construct((_DWORD *)this + 275, 0, 0); /*0x710dc7*/
  this->u32_118 = 10; /*0x710dd4*/
  *((_DWORD *)this + 279) = 0; /*0x710dda*/
  this->VoiceSelectDeactivated = &vt_TypeList_int; /*0x710de0*/
  VectorClass::Construct((_DWORD *)this + 282, 0, 0); /*0x710dea*/
  this->u32_47C = 10; /*0x710df7*/
  *((_DWORD *)this + 286) = 0; /*0x710dfd*/
  this->VoiceMove = &vt_TypeList_int; /*0x710e03*/
  VectorClass::Construct((_DWORD *)this + 289, 0, 0); /*0x710e0d*/
  *((_DWORD *)this + 294) = 10; /*0x710e1a*/
  *((_DWORD *)this + 293) = 0; /*0x710e20*/
  this->VoiceAttack = &vt_TypeList_int; /*0x710e26*/
  VectorClass::Construct((_DWORD *)this + 296, 0, 0); /*0x710e30*/
  *((_DWORD *)this + 301) = 10; /*0x710e3d*/
  this->q12C = 0; /*0x710e43*/
  this->q128 = &vt_TypeList_int; /*0x710e49*/
  VectorClass::Construct((_DWORD *)this + 303, 0, 0); /*0x710e53*/
  this->q134 = 10; /*0x710e58*/
  *((_DWORD *)this + 307) = 0; /*0x710e5e*/
  this->u8_12F = &vt_TypeList_int; /*0x710e6c*/
  VectorClass::Construct((_DWORD *)this + 310, 0, 0); /*0x710e76*/
  *((_DWORD *)this + 315) = 10; /*0x710e83*/
  *((_DWORD *)this + 314) = 0; /*0x710e89*/
  this->VoiceFeedback = &vt_TypeList_int; /*0x710e8f*/
  VectorClass::Construct((_DWORD *)this + 317, 0, 0); /*0x710e99*/
  this->q508 = 10; /*0x710ea6*/
  this->q504 = 0; /*0x710eac*/
  this->MoveSound = &vt_TypeList_int; /*0x710eb2*/
  VectorClass::Construct((_DWORD *)this + 324, 0, 0); /*0x710ebc*/
  this->q149 = 10; /*0x710ec1*/
  this->u32_148 = 0; /*0x710ec7*/
  this->u32_144 = &vt_TypeList_int; /*0x710ecd*/
  this->AuxSound1 = -1; /*0x710ed7*/
  this->NoSpawnAlt = -1; /*0x710edd*/
  this->q14D = -1; /*0x710ee3*/
  this->DamageSound = -1; /*0x710ee9*/
  this->ImpactWaterSound = -1; /*0x710eef*/
  this->q150 = -1; /*0x710ef5*/
  this->u8_151 = -1; /*0x710efb*/
  this->q152 = -1; /*0x710f01*/
  this->VoiceFalling = -1; /*0x710f07*/
  this->q154 = -1; /*0x710f0d*/
  this->q155 = -1; /*0x710f13*/
  this->q156 = -1; /*0x710f19*/
  this->VoiceCapture = -1; /*0x710f1f*/
  this->u32_158 = -1; /*0x710f25*/
  this->EnterTransportSound = -1; /*0x710f2b*/
  this->LeaveTransportSound = -1; /*0x710f31*/
  this->DeploySound = -1; /*0x710f37*/
  this->u32_15C = -1; /*0x710f3d*/
  this->ChronoInSound = -1; /*0x710f43*/
  this->ChronoOutSound = -1; /*0x710f49*/
  this->VoiceHarvest = -1; /*0x710f4f*/
  this->q160 = -1; /*0x710f55*/
  this->VoicePrimaryEliteWeaponAttack = -1; /*0x710f5b*/
  this->q162 = -1; /*0x710f61*/
  this->VoiceSecondaryEliteWeaponAttack = -1; /*0x710f68*/
  this->q164 = -1; /*0x710f75*/
  this->VoiceUndeploy = -1; /*0x710f7b*/
  this->q166 = -1; /*0x710f81*/
  this->LeaveGrinderSound = -1; /*0x710f87*/
  this->q168 = -1; /*0x710f8d*/
  this->q169 = -1; /*0x710f93*/
  this->ActivateSound = -1; /*0x710f99*/
  this->q16B = -1; /*0x710f9f*/
  this->q16C = -1; /*0x710fa5*/
  this->q16D = 0; /*0x710fab*/
  this->GuardRange = 0; /*0x710fb1*/
  this->q16F = 0; /*0x710fb7*/
  this->q170 = 0; /*0x710fbd*/
  AnimTypeVector::Constructor((_DWORD *)this + 369, 0, 0); /*0x710fc3*/
  this->q176 = 10; /*0x710fc8*/
  this->q1750 = 0; /*0x710fce*/
  this->DebrisAnims = &vt_TypeList_AnimTypeClass_const; /*0x710fd4*/
  this->Passengers = 0; /*0x710fde*/
  this->OpenTopped = 0; /*0x710fe4*/
  this->Sight = 0; /*0x710fea*/
  this->ResourceGatherer = 0; /*0x710ff0*/
  this->ResourceDestination = 0; /*0x710ff6*/
  this->RevealToAll = 0; /*0x710ffc*/
  this->Drainable = 0; /*0x711002*/
  this->SensorsSight = 0; /*0x711008*/
  this->DetectDisguiseRange = 0; /*0x71100e*/
  this->BombSight = 0; /*0x711014*/
  this->LeadershipRating = 5; /*0x71101a*/
  this->q180 = 0; /*0x711024*/
  this->LandTargeting = 0; /*0x71102a*/
  this->BuildTimeMultiplier = 1065353216; /*0x711030*/
  this->MindControlRingOffset = 140; /*0x71103a*/
  this->q184 = 0; /*0x711044*/
  this->Soylent = 0; /*0x71104a*/
  this->FlightLevel = -1; /*0x711050*/
  this->AirstrikeTeam = 0; /*0x711056*/
  this->q188 = 0; /*0x71105c*/
  this->AirstrikeTeamType = 0; /*0x711062*/
  this->EliteAirstrikeTeamType = 0; /*0x711068*/
  this->AirstrikeRechargeTime = 0; /*0x71106e*/
  this->EliteAirstrikeRechargeTime = 0; /*0x711075*/
  this->TechLevel = 255; /*0x711082*/
  VectorClass::Construct((_DWORD *)this + 398, 0, 0); /*0x71108c*/
  *((_DWORD *)this + 403) = 10; /*0x711099*/
  this->q648 = 0; /*0x71109f*/
  this->Prerequisite = &vt_TypeList_int; /*0x7110a5*/
  VectorClass::Construct((_DWORD *)this + 405, 0, 0); /*0x7110af*/
  this->VeteranAbilities = 10; /*0x7110b8*/
  this->q199 = 0; /*0x7110be*/
  this->u8_195 = &vt_TypeList_int; /*0x7110c4*/
  this->ThreatPosed = 0; /*0x7110ce*/
  this->q19D = 0; /*0x7110d4*/
  this->Speed = 0; /*0x7110da*/
  this->SpeedType = a3; /*0x7110e0*/
  this->u32_1A0 = -1; /*0x7110e6*/
  this->q1A1 = -1; /*0x7110ec*/
  this->q1A2 = 0; /*0x7110f2*/
  this->AirRangeBonus = 0; /*0x7110f8*/
  this->BerserkFriendly = 0; /*0x7110fe*/
  this->SprayAttack = 0; /*0x711104*/
  this->Pushy = 0; /*0x71110a*/
  this->Natural = 0; /*0x711110*/
  this->Unnatural = 0; /*0x711116*/
  this->CloseRange = 0; /*0x71111c*/
  this->Reload = 0; /*0x711122*/
  this->q1A7 = -1; /*0x711128*/
  this->ReloadIncrement = 0; /*0x71112e*/
  this->RadialFireSegments = 0; /*0x711134*/
  this->DeployFireWeapon = 1; /*0x71113a*/
  this->DeployFire = 0; /*0x711144*/
  this->DeployToLand = 0; /*0x71114a*/
  this->MobileFire = 1; /*0x711150*/
  this->OpportunityFire = 0; /*0x711157*/
  this->DistributedFire = 0; /*0x71115d*/
  this->DamageReducesReadiness = 0; /*0x711163*/
  this->ReadinessReductionMultiplier = 0; /*0x711169*/
  this->UnloadingClass = 0; /*0x71116f*/
  this->DeployingAnim = 0; /*0x711175*/
  this->AttackFriendlies = 0; /*0x71117b*/
  this->AttackCursorOnFriendlies = 0; /*0x711181*/
  this->q1B1 = -1; /*0x711187*/
  this->PreventAttackMove = 0; /*0x71118d*/
  this->OwnerFlags = 0; /*0x711193*/
  this->AIBasePlanningSide = -1; /*0x71119e*/
  this->StupidHunt = 0; /*0x7111a4*/
  this->AllowedToStartInMultiplayer = 1; /*0x7111ac*/
  if ( &MEMORY[0x889F64] ) /*0x7111b9*/
  {
    strncpy(this + 1750, &MEMORY[0x889F64], 0x18u); /*0x7111c7*/
    this->q6EE = 0; /*0x7111cf*/
  }
  else
  {
    this->CameoFile = 0; /*0x7111bb*/
  }
  this->Cameo = 0; /*0x7111da*/
  this->CameoAllocated = 0; /*0x7111e2*/
  if ( &MEMORY[0x889F64] ) /*0x7111ee*/
  {
    strncpy(this + 1781, &MEMORY[0x889F64], 0x18u); /*0x7111fc*/
    this->q70D = 0; /*0x711204*/
  }
  else
  {
    this->AltCameoFile = 0; /*0x7111f0*/
  }
  this->AltCameo = 0; /*0x71120a*/
  this->AltCameoAllocated = 0; /*0x711210*/
  this->RotCount = 0; /*0x711216*/
  this->ROT = 0; /*0x71121c*/
  this->TurretOffset = 0; /*0x711222*/
  this->CanBeHidden = 1; /*0x711229*/
  this->Points2 = 0; /*0x711237*/
  AnimTypeVector::Constructor((_DWORD *)this + 459, 0, 0); /*0x71123d*/
  *((_DWORD *)this + 464) = 10; /*0x71124a*/
  *((_DWORD *)this + 463) = 0; /*0x711250*/
  this->Explosion = &vt_TypeList_AnimTypeClass_const; /*0x711256*/
  AnimTypeVector::Constructor((_DWORD *)this + 466, 0, 0); /*0x711260*/
  *((_DWORD *)this + 471) = 10; /*0x711265*/
  *((_DWORD *)this + 470) = 0; /*0x71126b*/
  this->DestroyAnim = &vt_TypeList_AnimTypeClass_const; /*0x711271*/
  this->NaturalParticleSystem = 0; /*0x71127b*/
  this->NaturalParticleSystemLocation = 0; /*0x711282*/
  this->u32_76C = 0; /*0x711288*/
  this->ptr_770 = 0; /*0x71128e*/
  this->RefinerySmokeParticleSystem = 0; /*0x71129b*/
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112a1*/
  *((_DWORD *)this + 483) = 10; /*0x7112ae*/
  this->VoxelAnimList_Embed = 0; /*0x7112b4*/
  this->DamageParticleSystems = &vt_TypeList_ParticleSystemTypeClass_const; /*0x7112ba*/
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112c4*/
  *((_DWORD *)this + 490) = 10; /*0x7112c9*/
  this->q1E9 = 0; /*0x7112cf*/
  this->DestroyParticleSystems = &vt_TypeList_ParticleSystemTypeClass_const; /*0x7112d5*/
  this->MaxDimension = 0; /*0x7112df*/
  this->u32_7B4 = 0; /*0x7112e5*/
  this->u32_7B8 = 0; /*0x7112eb*/
  this->DamSmkOffScrnRel = 0; /*0x7112f1*/
  this->CrushSound = 0; /*0x7112f7*/
  this->q7C4 = 0; /*0x7112fd*/
  this->u32_7C8 = 0; /*0x711303*/
  this->RefinerySmokeOffsetOne = 0; /*0x711309*/
  this->AmbientSound = 0; /*0x71130f*/
  this->u32_7D4 = 0; /*0x711315*/
  this->RefinerySmokeOffsetTwo = 0; /*0x71131b*/
  this->u32_7DC = 0; /*0x711321*/
  this->ImageFile = 0; /*0x711327*/
  this->AlternateArcticArt = 0; /*0x71132d*/
  this->ArcticArtInUse = 0; /*0x711333*/
  this->AlphaImageFile_0x19 = 0; /*0x711339*/
  this->Theater = 0; /*0x71133f*/
  this->Crushable = 0; /*0x711345*/
  this->Bombable = 0; /*0x71134b*/
  this->RadarInvisible = 0; /*0x711351*/
  this->Selectable = 0; /*0x711357*/
  this->TurretNotExportedOnGround = 0; /*0x71135d*/
  this->Gunner = 0; /*0x711363*/
  this->HasTurretTooltips = 0; /*0x711369*/
  this->Insignificant = 0; /*0x71136f*/
  this->IsChargeTurret = 0; /*0x711375*/
  this->qA90 = 0; /*0x71137b*/
  this->TypeImmune = 0; /*0x711381*/
  this->MoveToShroud = 1; /*0x711387*/
  this->Trainable = 1; /*0x71138e*/
  this->DamageSparks = 0; /*0x711395*/
  this->TargetLaser = 0; /*0x71139b*/
  this->ImmuneToVeins = 0; /*0x7113a1*/
  this->TiberiumHeal = 0; /*0x7113a7*/
  this->CloakStop = 0; /*0x7113ad*/
  this->IsTrain = 0; /*0x7113b3*/
  this->IsDropship = 0; /*0x7113b9*/
  this->ToProtect = 0; /*0x7113bf*/
  this->Disableable = 1; /*0x7113c5*/
  this->Unbuildable = 0; /*0x7113cc*/
  this->DoubleOwned = 0; /*0x7113d2*/
  this->Invisible = 0; /*0x7113d8*/
  this->RadarVisible = 0; /*0x7113de*/
  this->HasPrimary = 0; /*0x7113e4*/
  this->Sensors = 0; /*0x7113ea*/
  this->Nominal = 0; /*0x7113f0*/
  this->DontScore = 0; /*0x7113f6*/
  this->DamageSelf = 0; /*0x7113fc*/
  this->Turret = 0; /*0x711402*/
  this->TurretRecoil = 0; /*0x711412*/
  this->TurretAnimData = 2; /*0x711418*/
  this->u32_CA8 = 1; /*0x71141e*/
  this->u32_CAC = 1; /*0x711424*/
  this->u32_CB0 = 1; /*0x71142a*/
  this->unknown_bool_CB4 = 0; /*0x711430*/
  this->BarrelAnimData = 2; /*0x711436*/
  this->u32_CBC = 1; /*0x71143c*/
  this->DebrisMaximums = 1; /*0x711442*/
  this->u32_CC4 = 1; /*0x711448*/
  this->unknown_bool_CC8 = 0; /*0x71144e*/
  this->qCCC = 1; /*0x711454*/
  this->qCCD = 0; /*0x71145a*/
  this->qCCE = 0; /*0x711460*/
  this->q333C = 0; /*0x711466*/
  this->q3340 = 0; /*0x71146c*/
  this->Naval = 0; /*0x711472*/
  this->Remapable = 0; /*0x711478*/
  this->Cloakable = 0; /*0x71147e*/
  this->qCD4 = 0; /*0x711484*/
  this->qCD5 = 0; /*0x71148a*/
  this->u32_CD8 = 0; /*0x711490*/
  this->u32_D0C = 0; /*0x711496*/
  this->q344 = 0; /*0x71149c*/
  this->qD14 = 0; /*0x7114a2*/
  this->qD15 = 0; /*0x7114a8*/
  this->SlavesNumber = 0; /*0x7114ae*/
  this->SlaveRegenRate = 1065353216; /*0x7114b4*/
  this->qD20 = 0; /*0x7114be*/
  this->qD21 = 0; /*0x7114c4*/
  this->qD22 = 0; /*0x7114ca*/
  this->qD23 = 0; /*0x7114d0*/
  this->qD24 = 0; /*0x7114d6*/
  this->qD25 = 0; /*0x7114dc*/
  this->qD26 = 0; /*0x7114e2*/
  this->qD27 = 0; /*0x7114e8*/
  this->qD28 = 0; /*0x7114ee*/
  this->qD29 = 0; /*0x7114f4*/
  this->qD2A = 0; /*0x7114fa*/
  this->qD2B = 1; /*0x711500*/
  this->qD2C = 0; /*0x711506*/
  this->qD2D = 0; /*0x71150c*/
  this->qD2F = 0; /*0x711512*/
  this->Locomotor = 0; /*0x711518*/
  this->qD31 = 0; /*0x71151e*/
  this->qD32 = 0; /*0x711524*/
  this->qD33 = 1; /*0x71152a*/
  this->qD34 = 1; /*0x711530*/
  this->qD37 = 0; /*0x711536*/
  this->qD39 = 0; /*0x71153c*/
  this->qD3A = 1; /*0x711542*/
  this->qD3C = 0; /*0x711548*/
  this->qD3D = 0; /*0x71154e*/
  this->BalloonHover = 0; /*0x711554*/
  this->SuppressionThreshold = 0; /*0x71155a*/
  this->JumpjetTurnRate = 0; /*0x711560*/
  this->JumpjetSpeed = 0; /*0x711566*/
  this->JumpjetClimb = 0; /*0x71156c*/
  this->JumpjetCrash = -1; /*0x711572*/
  this->qD54 = 0; /*0x711578*/
  this->u32_164 = 0; /*0x71157e*/
  this->JumpjetWobbles = 0; /*0x711584*/
  this->qD60 = 0; /*0x71158a*/
  this->JumpjetDeviation = 0; /*0x711590*/
  this->qD68 = 0; /*0x711596*/
  this->qD69 = 0; /*0x71159c*/
  this->qD6A = 0; /*0x7115a2*/
  this->qD6C = 0; /*0x7115a8*/
  this->q35C = 4; /*0x7115ae*/
  this->RequiredHouses = 14; /*0x7115b8*/
  this->ForbiddenHouses = 1084227584; /*0x7115c7*/
  this->SecretHouses = 1084227584; /*0x7115cd*/
  this->unknown_double_360 = 500; /*0x7115d3*/
  this->SecondSpawnOffset = 0x40000000; /*0x7115dd*/
  this->u32_D88 = 1041865114; /*0x7115e7*/
  this->qD8C = 0; /*0x7115f1*/
  this->q364 = 40; /*0x7115f7*/
  this->JumpJet = 0; /*0x711601*/
  this->Crashable = 0; /*0x711607*/
  this->q366 = 0; /*0x71160d*/
  this->qD99 = 1; /*0x711613*/
  this->qD9A = 1; /*0x71161a*/
  this->qD9B = 0; /*0x711621*/
  this->qD9C = 0; /*0x711627*/
  this->qD9D = 0; /*0x71162d*/
  this->unknown_double_368 = -1; /*0x711633*/
  this->PaletteFile = -1; /*0x711639*/
  this->u32_DA8 = -1; /*0x71163f*/
  this->qDAC = 0; /*0x711645*/
  this->qDBC = 0; /*0x71164b*/
  this->qDBD = 1; /*0x711651*/
  this->qDBE = 0; /*0x711658*/
  this->qDBF = 0; /*0x71165e*/
  this->Weight = 10; /*0x711664*/
  this->Palette = 5; /*0x71166a*/
  this->qDC8 = 10; /*0x711674*/
  this->qDCC = 0; /*0x71167a*/
  this->u32_37C = 0; /*0x711680*/
  *(_DWORD *)this = &TechnoTypeClass::`vftable'; /*0x711686*/
  this->vtable2 = &TechnoTypeClass::`vftable'; /*0x71168c*/
  this->vtable3 = &TechnoTypeClass::`vftable'; /*0x711693*/
  this->vtable4 = &vt_TechnoTypeClass; /*0x71169a*/
  this->qDD0 = 0; /*0x7116a7*/
  this->q234 = 1; /*0x7116ad*/
  (*(void (__thiscall **)(char *))(this->DebrisTypes + 12))(this + 788); /*0x7116b6*/
  (*(void (__thiscall **)(char *))(this->DebrisAnims + 12))(this + 1476); /*0x7116c5*/
  (*(void (__thiscall **)(char *))(this->DebrisMaximums + 12))(this + 816); /*0x7116d4*/
  (*(void (__thiscall **)(char *))(this->Dock + 12))(this + 1000); /*0x7116e3*/
  v4 = this + 2216; /*0x7116e6*/
  v5 = 18; /*0x7116ec*/
  do /*0x71170f*/
  {
    *(v4 - 4) = 0; /*0x7116f4*/
    v6 = v4 - 3; /*0x7116f7*/
    *v4 = 0; /*0x7116f9*/
    v4[1] = 0; /*0x7116fd*/
    *v6 = 0; /*0x711700*/
    v4 += 7; /*0x711702*/
    --v5; /*0x711705*/
    v6[1] = 0; /*0x711706*/
    v6[2] = 0; /*0x711709*/
    *((_BYTE *)v4 - 20) = 0; /*0x71170c*/
  }
  while ( v5 ); /*0x71170f*/
  v7 = this + 2724; /*0x711711*/
  v8 = 18; /*0x711717*/
  do /*0x71173a*/
  {
    *(v7 - 4) = 0; /*0x71171f*/
    v9 = v7 - 3; /*0x711722*/
    *v7 = 0; /*0x711724*/
    v7[1] = 0; /*0x711728*/
    *v9 = 0; /*0x71172b*/
    v7 += 7; /*0x71172d*/
    --v8; /*0x711730*/
    v9[1] = 0; /*0x711731*/
    v9[2] = 0; /*0x711734*/
    *((_BYTE *)v7 - 20) = 0; /*0x711737*/
  }
  while ( v8 ); /*0x71173a*/
  v10 = this + 2140; /*0x71173c*/
  v11 = 5; /*0x711742*/
  do /*0x711757*/
  {
    v12 = v10; /*0x711747*/
    v10 += 3; /*0x71174b*/
    --v11; /*0x71174e*/
    *v12 = 0; /*0x71174f*/
    v12[1] = 0; /*0x711751*/
    v12[2] = 0; /*0x711754*/
  }
  while ( v11 ); /*0x711757*/
  this->qDB0 = 0; /*0x711763*/
  v13 = this + 3316; /*0x711765*/
  this->u32_DB4 = 0; /*0x71176b*/
  v14 = 6; /*0x71176e*/
  this->u32_DB8 = 0; /*0x711773*/
  do /*0x71177f*/
  {
    *(v13 - 6) = 0; /*0x711776*/
    *v13++ = 0; /*0x711779*/
    --v14; /*0x71177e*/
  }
  while ( v14 ); /*0x71177f*/
  memset(this + 2068, 0xFFu, 0x48u); /*0x71178e*/
  if ( MEMORY[0xB0F680] < MEMORY[0xB0F678] /*0x7117c3*/
    || (MEMORY[0xB0F67D] || !MEMORY[0xB0F678])
    && MEMORY[0xB0F684] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F670] + 8))(
         &MEMORY[0xB0F670],
         MEMORY[0xB0F684] + MEMORY[0xB0F678],
         0) )
  {
    v15 = MEMORY[0xB0F680]++; /*0x7117d0*/
    *((_DWORD *)MEMORY[0xB0F674] + v15) = this; /*0x7117df*/
  }
  if ( MEMORY[0xA8EB10] < MEMORY[0xA8EB08] /*0x711816*/
    || (MEMORY[0xA8EB0D] || !MEMORY[0xA8EB08])
    && MEMORY[0xA8EB14] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8EB00] + 8))(
         &MEMORY[0xA8EB00],
         MEMORY[0xA8EB14] + MEMORY[0xA8EB08],
         0) )
  {
    v16 = MEMORY[0xA8EB10]++; /*0x711823*/
    *((_DWORD *)MEMORY[0xA8EB04] + v16) = this; /*0x711832*/
  }
  return this; /*0x711837*/
}


// ==== 0x00711840  TechnoTypeClass::Construct  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoTypeClass::Construct(int this, ObjectTypeClass *aP1)
{
  int v3; // eax
  int v4; // ecx
  CCINIClass *v5; // edx

  ObjectTypeClass::Construct((_DWORD *)this, aP1); /*0x71184b*/
  TechnoTypeClass::Constructor_0((_DWORD *)(this + 788), aP1); /*0x711859*/
  *(_DWORD *)(this + 788) = &vt_TypeList_VoxelAnimTypeClass_const; /*0x71185e*/
  IntDynamicVector::Construct((_DWORD *)(this + 816), aP1); /*0x71186d*/
  *(_DWORD *)(this + 816) = &vt_TypeList_int; /*0x711872*/
  *(_DWORD *)(this + 960) = 0; /*0x711883*/
  TechnoTypeClass::Constructor_1((_DWORD *)(this + 1000), aP1); /*0x711889*/
  *(_DWORD *)(this + 1000) = &vt_TypeList_BuildingTypeClass_const; /*0x71188e*/
  IntDynamicVector::Construct((_DWORD *)(this + 1044), aP1); /*0x71189e*/
  *(_DWORD *)(this + 1044) = &vt_TypeList_int; /*0x7118a3*/
  IntDynamicVector::Construct((_DWORD *)(this + 1072), aP1); /*0x7118b3*/
  *(_DWORD *)(this + 1072) = &vt_TypeList_int; /*0x7118b8*/
  IntDynamicVector::Construct((_DWORD *)(this + 1100), aP1); /*0x7118c8*/
  *(_DWORD *)(this + 1100) = &vt_TypeList_int; /*0x7118cd*/
  IntDynamicVector::Construct((_DWORD *)(this + 1128), aP1); /*0x7118dd*/
  *(_DWORD *)(this + 1128) = &vt_TypeList_int; /*0x7118e2*/
  IntDynamicVector::Construct((_DWORD *)(this + 1156), aP1); /*0x7118f2*/
  *(_DWORD *)(this + 1156) = &vt_TypeList_int; /*0x7118f7*/
  IntDynamicVector::Construct((_DWORD *)(this + 1184), aP1); /*0x711907*/
  *(_DWORD *)(this + 1184) = &vt_TypeList_int; /*0x71190c*/
  IntDynamicVector::Construct((_DWORD *)(this + 1212), aP1); /*0x71191c*/
  *(_DWORD *)(this + 1212) = &vt_TypeList_int; /*0x711921*/
  IntDynamicVector::Construct((_DWORD *)(this + 1240), aP1); /*0x711931*/
  *(_DWORD *)(this + 1240) = &vt_TypeList_int; /*0x711936*/
  IntDynamicVector::Construct((_DWORD *)(this + 1268), aP1); /*0x711946*/
  *(_DWORD *)(this + 1268) = &vt_TypeList_int; /*0x71194b*/
  IntDynamicVector::Construct((_DWORD *)(this + 1296), aP1); /*0x71195b*/
  *(_DWORD *)(this + 1296) = &vt_TypeList_int; /*0x711960*/
  ObjectTypeClass::CheckFlag((_DWORD *)(this + 1476), aP1); /*0x711970*/
  *(_DWORD *)(this + 1476) = &vt_TypeList_AnimTypeClass_const; /*0x711975*/
  IntDynamicVector::Construct((_DWORD *)(this + 1592), aP1); /*0x711985*/
  *(_DWORD *)(this + 1592) = &vt_TypeList_int; /*0x71198a*/
  IntDynamicVector::Construct((_DWORD *)(this + 1620), aP1); /*0x71199a*/
  *(_DWORD *)(this + 1620) = &vt_TypeList_int; /*0x71199f*/
  *(_BYTE *)(this + 1750) = 0; /*0x7119ac*/
  *(_BYTE *)(this + 1781) = 0; /*0x7119b5*/
  ObjectTypeClass::CheckFlag((_DWORD *)(this + 1836), aP1); /*0x7119bb*/
  *(_DWORD *)(this + 1836) = &vt_TypeList_AnimTypeClass_const; /*0x7119c0*/
  ObjectTypeClass::CheckFlag((_DWORD *)(this + 1864), aP1); /*0x7119d0*/
  *(_DWORD *)(this + 1864) = &vt_TypeList_AnimTypeClass_const; /*0x7119df*/
  TypeList::ParticleConstructor((_DWORD *)(this + 1912), 0, 0); /*0x7119e6*/
  *(_DWORD *)(this + 1912) = &vt_TypeList_ParticleSystemTypeClass_const; /*0x7119eb*/
  TypeList::ParticleConstructor((_DWORD *)(this + 1940), 0, 0); /*0x7119fb*/
  *(_DWORD *)(this + 1940) = &vt_TypeList_ParticleSystemTypeClass_const; /*0x711a0a*/
  *(_DWORD *)(this + 3236) = 2; /*0x711a10*/
  *(_DWORD *)(this + 3240) = 1; /*0x711a16*/
  *(_DWORD *)(this + 3244) = 1; /*0x711a1c*/
  *(_DWORD *)(this + 3248) = 1; /*0x711a22*/
  *(_BYTE *)(this + 3252) = 0; /*0x711a28*/
  *(_DWORD *)(this + 3256) = 2; /*0x711a2e*/
  *(_DWORD *)(this + 3260) = 1; /*0x711a34*/
  *(_DWORD *)(this + 3264) = 1; /*0x711a3a*/
  *(_DWORD *)(this + 3268) = 1; /*0x711a40*/
  *(_BYTE *)(this + 3272) = 0; /*0x711a46*/
  *(_DWORD *)this = &TechnoTypeClass::`vftable'; /*0x711a4c*/
  *(_DWORD *)(this + 4) = &TechnoTypeClass::`vftable'; /*0x711a52*/
  *(_DWORD *)(this + 8) = &TechnoTypeClass::`vftable'; /*0x711a59*/
  *(_DWORD *)(this + 12) = &vt_TechnoTypeClass; /*0x711a60*/
  v3 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[36]; /*0x711a67*/
  v4 = 0; /*0x711a6c*/
  if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[36] <= 0 ) /*0x711a70*/
  {
LABEL_5:
    if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[36] >= *(int *)&MEMORY[0xA8D63C].__pad_14B0[28] ) /*0x711a8c*/
    {
      if ( !MEMORY[0xA8D63C].__pad_14B0[33] && *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[28] /*0x711ab1*/
        || *(int *)&MEMORY[0xA8D63C].__pad_14B0[40] <= 0
        || !(*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[20] + 8))(
              &MEMORY[0xA8D63C].__pad_14B0[20],
              *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[40] + *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[28],
              0) )
      {
        return this; /*0x711ab6*/
      }
      v3 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[36]; /*0x711ab8*/
    }
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[36] = v3 + 1; /*0x711ac6*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[24] + 4 * v3) = this; /*0x711acb*/
    return this; /*0x711acb*/
  }
  v5 = *(CCINIClass **)&MEMORY[0xA8D63C].__pad_14B0[24]; /*0x711a72*/
  while ( *(_DWORD *)v5->__pad_0 != this ) /*0x711a7a*/
  {
    ++v4; /*0x711a7c*/
    v5 = (CCINIClass *)((char *)v5 + 4); /*0x711a7d*/
    if ( v4 >= *(int *)&MEMORY[0xA8D63C].__pad_14B0[36] ) /*0x711a82*/
      goto LABEL_5; /*0x711a82*/
  }
  return this; /*0x711ad0*/
}


// ==== 0x00711AE0  TechnoTypeClass::DTOR  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoTypeClass::DTOR(int this)
{
  char v2; // al
  int v3; // eax
  int v4; // eax
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax
  int v17; // [esp+8h] [ebp-4h] BYREF

  v2 = *(_BYTE *)(this + 1780); /*0x711ae7*/
  *(_DWORD *)this = &TechnoTypeClass::`vftable'; /*0x711aed*/
  *(_DWORD *)(this + 4) = &TechnoTypeClass::`vftable'; /*0x711af5*/
  *(_DWORD *)(this + 8) = &TechnoTypeClass::`vftable'; /*0x711afc*/
  *(_DWORD *)(this + 12) = &vt_TechnoTypeClass; /*0x711b03*/
  if ( v2 && *(_DWORD *)(this + 1776) ) /*0x711b0c*/
  {
    OperatorDelete(*(_DWORD *)(this + 1776)); /*0x711b17*/
    *(_DWORD *)(this + 1776) = 0; /*0x711b1f*/
    *(_BYTE *)(this + 1780) = 0; /*0x711b25*/
  }
  if ( *(_BYTE *)(this + 1812) && *(_DWORD *)(this + 1808) ) /*0x711b33*/
  {
    OperatorDelete(*(_DWORD *)(this + 1808)); /*0x711b3e*/
    *(_DWORD *)(this + 1808) = 0; /*0x711b46*/
    *(_BYTE *)(this + 1812) = 0; /*0x711b4c*/
  }
  v17 = this; /*0x711b62*/
  v3 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v17); /*0x711b66*/
  if ( v3 != -1 ) /*0x711b6c*/
    DynamicVector::RemoveItem(&MEMORY[0xB0F670], v3); /*0x711b74*/
  v17 = this; /*0x711b89*/
  v4 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xA8EB00] + 16))(&MEMORY[0xA8EB00], &v17); /*0x711b8d*/
  if ( v4 != -1 ) /*0x711b93*/
    TechnoTypeClass::RemoveItem(&MEMORY[0xA8EB00], v4); /*0x711b9b*/
  *(_DWORD *)(this + 1940) = &vt_VectorClass_ParticleSystemTypeClass_const; /*0x711ba7*/
  VectorClass::Cleanup(this + 1940); /*0x711bad*/
  *(_DWORD *)(this + 1912) = &vt_VectorClass_ParticleSystemTypeClass_const; /*0x711bb8*/
  VectorClass::Cleanup(this + 1912); /*0x711bbe*/
  *(_DWORD *)(this + 1864) = &vt_VectorClass_AnimTypeClass_const; /*0x711bc9*/
  DynamicVectorClass::Destroy_Alt(this + 1864); /*0x711bcf*/
  *(_DWORD *)(this + 1836) = &vt_VectorClass_AnimTypeClass_const; /*0x711bda*/
  DynamicVectorClass::Destroy_Alt(this + 1836); /*0x711be0*/
  *(_DWORD *)(this + 1620) = &vt_VectorClass_int; /*0x711bf0*/
  VectorClass::Destroy(this + 1620); /*0x711bf2*/
  *(_DWORD *)(this + 1592) = &vt_VectorClass_int; /*0x711bfd*/
  VectorClass::Destroy(this + 1592); /*0x711bff*/
  *(_DWORD *)(this + 1476) = &vt_VectorClass_AnimTypeClass_const; /*0x711c0a*/
  DynamicVectorClass::Destroy_Alt(this + 1476); /*0x711c10*/
  *(_DWORD *)(this + 1296) = &vt_VectorClass_int; /*0x711c1b*/
  VectorClass::Destroy(this + 1296); /*0x711c1d*/
  *(_DWORD *)(this + 1268) = &vt_VectorClass_int; /*0x711c28*/
  VectorClass::Destroy(this + 1268); /*0x711c2a*/
  v5 = *(_DWORD *)(this + 1244); /*0x711c2f*/
  *(_DWORD *)(this + 1240) = &vt_VectorClass_int; /*0x711c35*/
  if ( v5 && *(_BYTE *)(this + 1253) ) /*0x711c3f*/
  {
    OperatorDelete(v5); /*0x711c48*/
    *(_DWORD *)(this + 1244) = 0; /*0x711c50*/
  }
  *(_BYTE *)(this + 1253) = 0; /*0x711c56*/
  *(_DWORD *)(this + 1248) = 0; /*0x711c5c*/
  v6 = *(_DWORD *)(this + 1216); /*0x711c62*/
  *(_DWORD *)(this + 1212) = &vt_VectorClass_int; /*0x711c68*/
  if ( v6 && *(_BYTE *)(this + 1225) ) /*0x711c72*/
  {
    OperatorDelete(v6); /*0x711c7b*/
    *(_DWORD *)(this + 1216) = 0; /*0x711c83*/
  }
  *(_BYTE *)(this + 1225) = 0; /*0x711c89*/
  *(_DWORD *)(this + 1220) = 0; /*0x711c8f*/
  v7 = *(_DWORD *)(this + 1188); /*0x711c95*/
  *(_DWORD *)(this + 1184) = &vt_VectorClass_int; /*0x711c9b*/
  if ( v7 && *(_BYTE *)(this + 1197) ) /*0x711ca5*/
  {
    OperatorDelete(v7); /*0x711cae*/
    *(_DWORD *)(this + 1188) = 0; /*0x711cb6*/
  }
  *(_BYTE *)(this + 1197) = 0; /*0x711cbc*/
  *(_DWORD *)(this + 1192) = 0; /*0x711cc2*/
  v8 = *(_DWORD *)(this + 1160); /*0x711cc8*/
  *(_DWORD *)(this + 1156) = &vt_VectorClass_int; /*0x711cce*/
  if ( v8 && *(_BYTE *)(this + 1169) ) /*0x711cd8*/
  {
    OperatorDelete(v8); /*0x711ce1*/
    *(_DWORD *)(this + 1160) = 0; /*0x711ce9*/
  }
  *(_BYTE *)(this + 1169) = 0; /*0x711cef*/
  *(_DWORD *)(this + 1164) = 0; /*0x711cf5*/
  v9 = *(_DWORD *)(this + 1132); /*0x711cfb*/
  *(_DWORD *)(this + 1128) = &vt_VectorClass_int; /*0x711d01*/
  if ( v9 && *(_BYTE *)(this + 1141) ) /*0x711d0b*/
  {
    OperatorDelete(v9); /*0x711d14*/
    *(_DWORD *)(this + 1132) = 0; /*0x711d1c*/
  }
  *(_BYTE *)(this + 1141) = 0; /*0x711d22*/
  *(_DWORD *)(this + 1136) = 0; /*0x711d28*/
  v10 = *(_DWORD *)(this + 1104); /*0x711d2e*/
  *(_DWORD *)(this + 1100) = &vt_VectorClass_int; /*0x711d34*/
  if ( v10 && *(_BYTE *)(this + 1113) ) /*0x711d3e*/
  {
    OperatorDelete(v10); /*0x711d47*/
    *(_DWORD *)(this + 1104) = 0; /*0x711d4f*/
  }
  *(_BYTE *)(this + 1113) = 0; /*0x711d55*/
  *(_DWORD *)(this + 1108) = 0; /*0x711d5b*/
  v11 = *(_DWORD *)(this + 1076); /*0x711d61*/
  *(_DWORD *)(this + 1072) = &vt_VectorClass_int; /*0x711d67*/
  if ( v11 && *(_BYTE *)(this + 1085) ) /*0x711d71*/
  {
    OperatorDelete(v11); /*0x711d7a*/
    *(_DWORD *)(this + 1076) = 0; /*0x711d82*/
  }
  *(_BYTE *)(this + 1085) = 0; /*0x711d88*/
  *(_DWORD *)(this + 1080) = 0; /*0x711d8e*/
  v12 = *(_DWORD *)(this + 1048); /*0x711d94*/
  *(_DWORD *)(this + 1044) = &vt_VectorClass_int; /*0x711d9a*/
  if ( v12 && *(_BYTE *)(this + 1057) ) /*0x711da4*/
  {
    OperatorDelete(v12); /*0x711dad*/
    *(_DWORD *)(this + 1048) = 0; /*0x711db5*/
  }
  *(_BYTE *)(this + 1057) = 0; /*0x711dbb*/
  *(_DWORD *)(this + 1052) = 0; /*0x711dc1*/
  v13 = *(_DWORD *)(this + 1004); /*0x711dc7*/
  *(_DWORD *)(this + 1000) = &vt_VectorClass_BuildingTypeClass_const; /*0x711dcd*/
  if ( v13 && *(_BYTE *)(this + 1013) ) /*0x711ddb*/
  {
    OperatorDelete(v13); /*0x711de4*/
    *(_DWORD *)(this + 1004) = 0; /*0x711dec*/
  }
  *(_BYTE *)(this + 1013) = 0; /*0x711df2*/
  *(_DWORD *)(this + 1008) = 0; /*0x711df8*/
  v14 = *(_DWORD *)(this + 820); /*0x711dfe*/
  *(_DWORD *)(this + 816) = &vt_VectorClass_int; /*0x711e04*/
  if ( v14 && *(_BYTE *)(this + 829) ) /*0x711e0f*/
  {
    OperatorDelete(v14); /*0x711e18*/
    *(_DWORD *)(this + 820) = 0; /*0x711e20*/
  }
  *(_BYTE *)(this + 829) = 0; /*0x711e26*/
  *(_DWORD *)(this + 824) = 0; /*0x711e2c*/
  v15 = *(_DWORD *)(this + 792); /*0x711e32*/
  *(_DWORD *)(this + 788) = &vt_VectorClass_VoxelAnimTypeClass_const; /*0x711e38*/
  if ( v15 && *(_BYTE *)(this + 801) ) /*0x711e46*/
  {
    OperatorDelete(v15); /*0x711e4f*/
    *(_DWORD *)(this + 792) = 0; /*0x711e57*/
  }
  *(_BYTE *)(this + 801) = 0; /*0x711e5f*/
  *(_DWORD *)(this + 796) = 0; /*0x711e65*/
  return ObjectTypeClass::Destruct(this); /*0x711e70*/
}


// ==== 0x00711E80  TechnoTypeClass::processWeaponFire  this=TechnoTypeClass  sig=csp ====
char __thiscall AbstractClass::processWeaponFire(std::codecvt_base *this)
{
  return 1; /*0x711e82*/
}


// ==== 0x00711E90  TechnoTypeClass::CanAttackMove_IgnoreWeapon  this=TechnoTypeClass  sig=csp ====
bool __thiscall TechnoTypeClass::CanAttackMove_IgnoreWeapon(int this)
{
  return *(_DWORD *)(this + 2200) && !*(_BYTE *)(this + 1736); /*0x711ea6*/
}


// ==== 0x00711EB0  TechnoTypeClass::GetMember388  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoClass_GetMember388(_DWORD *this)
{
  return this->Cost; /*0x711eb6*/
}


// ==== 0x00711EC0  TechnoTypeClass::GetBuildCost  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoClass_GetBuildCost(int this)
{
  int result; // eax

  if ( !*(_BYTE *)(this + 3225) ) /*0x711ec0*/
    return *(_DWORD *)(this + 1740); /*0x711ec0*/
  result = 0x7FFFFFFF; /*0x711ed1*/
  if ( !MEMORY[0xA8B238][0] ) /*0x711ed6*/
    return *(_DWORD *)(this + 1740); /*0x711ed8*/
  return result; /*0x711ede*/
}


// ==== 0x00711EE0  TechnoTypeClass::ComputeBuildTime  this=TechnoTypeClass  sig=csp ====
double __thiscall TechnoTypeClass_ComputeBuildTime(int *this)
{
  double result; // st7

  result = (double)this->q184 * *((double *)MEMORY[0x8871E0] + 745) * 0.9; /*0x711ef1*/
  Math::RoundToInt(result); /*0x711ef7*/
  return result;
}


// ==== 0x00711F00  TechnoTypeClass::ComputeValueSimple  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoTypeClass::ComputeValueSimple(TechnoTypeClass *this, float *a2)
{
  float ThreatMultiplier; // [esp+8h] [ebp-8h]
  float v5; // [esp+Ch] [ebp-4h]
  float *v6; // [esp+14h] [ebp+4h]

  if ( !a2 ) /*0x711f0d*/
    return (*(int (__thiscall **)(TechnoTypeClass *))(*(_DWORD *)this->vtable0 + 172))(this); /*0x711f52*/
  v5 = TechnoTypeClass::Dispatch(a2, this); /*0x711f17*/
  ThreatMultiplier = TechnoTypeClass::GetThreatMultiplier(a2, this); /*0x711f27*/
  v6 = (float *)(*(int (__thiscall **)(TechnoTypeClass *))(*(_DWORD *)this->vtable0 + 172))(this); /*0x711f31*/
  return Math::RoundToInt((double)(int)v6 * ThreatMultiplier * v5); /*0x711f46*/
}


// ==== 0x00711F60  TechnoTypeClass::ComputeValue  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoTypeClass::ComputeValue(TechnoTypeClass *this, #375 *a2, float a3)
{
  int v6; // esi
  float v7; // [esp+8h] [ebp-8h]
  float ThreatMultiplier; // [esp+Ch] [ebp-4h]
  #375 *v9; // [esp+14h] [ebp+4h]
  float v10; // [esp+18h] [ebp+8h]
  int v11; // [esp+18h] [ebp+8h]

  v7 = *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5944); /*0x711f76*/
  if ( LOBYTE(a3) ) /*0x711f7c*/
    v7 = 1.0; /*0x711f7e*/
  if ( a2 ) /*0x711f8c*/
  {
    v10 = TechnoTypeClass::Dispatch(a2, this); /*0x711f9a*/
    ThreatMultiplier = TechnoTypeClass::GetThreatMultiplier((float *)a2, this); /*0x711fac*/
    if ( this->Soylent ) /*0x711fa6*/
    {
      return Math::RoundToInt((double)*((int *)this + 389) * v10); /*0x711fc0*/
    }
    else
    {
      v9 = (#375 *)(*(int (__thiscall **)(TechnoTypeClass *))(*(_DWORD *)this->vtable0 + 172))(this); /*0x711fd7*/
      v6 = Math::RoundToInt((double)(int)v9 * ThreatMultiplier * v10); /*0x711fec*/
      if ( (unsigned __int8)House::IsCurrentPlayer(a2) ) /*0x711ff4*/
        return Math::RoundToInt((double)v6 * v7); /*0x71200a*/
      return v6; /*0x71200c*/
    }
  }
  else
  {
    v11 = (*(int (__thiscall **)(TechnoTypeClass *))(*(_DWORD *)this->vtable0 + 172))(this); /*0x712020*/
    return Math::RoundToInt((double)v11 * v7); /*0x71202c*/
  }
}


// ==== 0x00712040  TechnoTypeClass::SelectArtOrAlt  this=TechnoTypeClass  sig=csp ====
int __thiscall ObjectTypeClass_SelectArtOrAlt(_DWORD *this)
{
  #375 *v1; // eax
  int result; // eax

  v1 = HouseClass_Player; /*0x712040*/
  if ( !HouseClass_Player ) /*0x71204a*/
    return this->Cameo; /*0x7120bf*/
  if ( *((_BYTE *)HouseClass_Player + 703) ) /*0x71204c*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) == 16 ) /*0x712060*/
    {
      result = this->AltCameo; /*0x712062*/
      if ( result ) /*0x71206a*/
      {
        if ( this->Trainable ) /*0x71206c*/
          return result; /*0x712074*/
      }
    }
    v1 = HouseClass_Player; /*0x712076*/
  }
  if ( !v1 /*0x7120a1*/
    || !*((_BYTE *)v1 + 704)
    || (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) != 40
    && ((*(int (__thiscall **)(_DWORD *))(*this + 44))(this) != 7 || !this->UndeploysInto) )
  {
    return this->Cameo; /*0x7120a1*/
  }
  result = this->AltCameo; /*0x7120ab*/
  if ( !result || !this->Trainable ) /*0x7120b5*/
    return this->Cameo; /*0x7120bd*/
  return result; /*0x7120c5*/
}


// ==== 0x007120D0  TechnoTypeClass::ComputeValue  this=TechnoTypeClass  sig=csp ====
int __thiscall ObjectClass_ComputeValue(_DWORD *this)
{
  int v2; // eax
  int result; // eax

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 172))(this); /*0x7120d7*/
  result = Math::RoundToInt((double)(v2 / (this->Strength / *((_DWORD *)MEMORY[0x8871E0] + 1459))) * *((double *)MEMORY[0x8871E0] + 730)); /*0x712107*/
  if ( result <= 1 ) /*0x712111*/
    return 1; /*0x712113*/
  return result; /*0x71210c*/
}


// ==== 0x00712120  TechnoTypeClass::GetGameplayValue  this=TechnoTypeClass  sig=csp ====
int AircraftTypeClass::_vt45()
{
  return MEMORY[0x8871E0][1].?; /*0x71212b*/
}


// ==== 0x00712130  BuildingClass::processCapture  this=BuildingClass  sig=csp ====
char __thiscall sub_712130(_DWORD *this)
{
  int v1; // edx
  int v2; // ecx
  char result; // al

  v1 = this->q898; /*0x712130*/
  if ( !v1 ) /*0x712138*/
    return 0; /*0x712138*/
  v2 = this->q8B4; /*0x71213a*/
  result = 1; /*0x712140*/
  if ( v1 != v2 && *(int *)(v1 + 156) <= 1 && (!v2 || *(int *)(v2 + 156) <= 1) ) /*0x71215f*/
    return 0; /*0x712161*/
  return result; /*0x712163*/
}


// ==== 0x00712170  TechnoTypeClass::LoadExtras  this=TechnoTypeClass  sig=csp ====
char ObjectTypeClass::LoadExtras(CCINIClass *aP0, double _38C, unsigned __int8 ***a2)
{
  int v3; // ecx
  int v4; // ebp
  WeaponTypeClass *v5; // edi
  WeaponTypeClass *v6; // eax
  char Bool_Overwrite; // al
  double Double_Overwrite; // st7
  double v9; // st7
  INIClass *v10; // ecx
  _DWORD *GUID_Overwrite; // eax
  INIClass *v12; // edx
  INIClass *v13; // edx
  INIClass *v14; // ecx
  INIClass *v15; // eax
  INIClass *v16; // edx
  INIClass *v17; // ecx
  INIClass *v18; // eax
  int Int_Overwrite; // eax
  CCINIClass *v11; // eax
  ObjectClass *i; // eax
  int v22; // edx
  int v23; // eax
  INIClass *inited; // eax
  int v25; // eax
  AbstractClass *j; // eax
  int edx29; // edx
  int v28; // eax
  char al29; // al
  CCINIClass *v21; // edi
  WeaponTypeClass *eax33; // eax
  WeaponTypeClass *v32; // eax
  CCINIClass *v24; // ecx
  WeaponTypeClass *v34; // edi
  WeaponTypeClass *eax42; // eax
  CCINIClass *v27; // edi
  void *eax45; // eax
  CCINIClass *v29; // edi
  void *eax48; // eax
  CCINIClass *v31; // edi
  void *eax51; // eax
  INIClass *v33; // eax
  int eax56; // eax
  INIClass *v35; // eax
  int eax56a; // eax
  INIClass *v37; // eax
  int eax56b; // eax
  INIClass *v39; // eax
  int eax56c; // eax
  INIClass *v41; // eax
  int v51; // eax
  INIClass *v43; // eax
  int v53; // eax
  INIClass *v45; // eax
  int v55; // eax
  INIClass *v47; // eax
  int v57; // eax
  CCINIClass *v49; // edi
  CCINIClass *Index; // eax
  int v60; // edi
  int v61; // eax
  int v62; // edi
  int v63; // eax
  int v64; // edi
  int v65; // eax
  int v66; // edi
  int v67; // eax
  int v68; // edi
  int v69; // eax
  int v70; // edi
  int v71; // eax
  int v72; // edi
  int v73; // eax
  int v74; // edi
  int v75; // eax
  int v76; // edi
  int v77; // eax
  int v78; // edi
  int v79; // eax
  int v80; // edi
  int v81; // eax
  int v82; // edi
  int v83; // eax
  int TypeMember_54749E0; // eax
  char *k; // eax
  int v86; // edx
  int v87; // eax
  BuildingTypeClass *v88; // edi
  BuildingTypeClass *v89; // eax
  UnitTypeClass *v90; // edi
  UnitTypeClass *Alt; // eax
  UnitTypeClass *v92; // edi
  UnitTypeClass *eax110; // eax
  char v94; // al
  char al112a; // al
  char v96; // cl
  char al112b; // al
  int v98; // edi
  int v99; // eax
  int v100; // edi
  int v101; // eax
  CCINIClass *v93; // edi
  CCINIClass *v103; // eax
  INIClass *v95; // eax
  int v105; // eax
  INIClass *v97; // eax
  int v107; // eax
  int v108; // edx
  void *v109; // eax
  int v110; // edi
  int v111; // eax
  int v112; // edi
  int v113; // eax
  int v114; // edi
  int v115; // eax
  int v116; // edi
  int v117; // eax
  int v118; // edi
  int v119; // eax
  int v120; // edi
  int v121; // eax
  int v122; // edi
  int v123; // eax
  int v124; // edi
  int v125; // eax
  int v126; // edi
  int v127; // eax
  int v128; // edi
  int v129; // eax
  int v130; // edi
  int v131; // eax
  int v132; // edi
  int v133; // eax
  int v134; // edi
  int v135; // eax
  int v136; // edi
  int v137; // eax
  int v138; // edi
  int v139; // eax
  int v140; // edi
  int v141; // eax
  int v142; // edi
  int v143; // eax
  int v144; // edi
  int v145; // eax
  AbstractClass *m; // eax
  int v147; // ecx
  int v148; // edx
  void *v149; // eax
  AbstractClass *n; // eax
  int v151; // ecx
  int v152; // edx
  void *v153; // eax
  ParticleSystemTypeClass *v154; // edi
  ParticleSystemTypeClass *v155; // eax
  ParticleSystemTypeClass *v156; // edi
  ParticleSystemTypeClass *v157; // eax
  int *Coord2; // eax
  int v159; // ecx
  int v160; // edx
  int v161; // eax
  ObjectClass *ii; // eax
  int v163; // ecx
  int v164; // edx
  void *v165; // eax
  ObjectClass *jj; // eax
  int v167; // ecx
  int v168; // edx
  void *v169; // eax
  int *eax231; // eax
  int edx231; // edx
  char v172; // al
  int *eax231a; // eax
  int *eax231b; // eax
  int *v175; // eax
  int *v176; // eax
  int *eax231e; // eax
  INIClass **v178; // edi
  CCINIClass *v170; // ecx
  INIClass *v171; // eax
  int v181; // eax
  CCINIClass *v173; // eax
  INIClass *v174; // eax
  int v184; // eax
  CCINIClass *v177; // edi
  void *v186; // eax
  int v187; // eax
  int eax246; // eax
  int v189; // edx
  UnitTypeClass *edi252; // edi
  UnitTypeClass *v191; // eax
  AnimTypeClass *edi255; // edi
  AnimTypeClass *eax256; // eax
  int eax258; // eax
  int ecx258; // ecx
  INIClass *v188; // eax
  int edx258; // edx
  INIClass *v190; // eax
  int eax258a; // eax
  INIClass *v192; // eax
  INIClass *v193; // eax
  INIClass *v194; // eax
  INIClass *v195; // eax
  int v204; // edx
  INIClass *v196; // eax
  INIClass *v197; // eax
  int ecx258a; // ecx
  INIClass *v199; // eax
  int edx258b; // edx
  INIClass *v201; // eax
  int eax258b; // eax
  INIClass *v203; // eax
  int ecx258b; // ecx
  INIClass *v205; // eax
  int edx258c; // edx
  INIClass *v207; // eax
  int eax258c; // eax
  INIClass *v209; // eax
  int ecx258c; // ecx
  INIClass *v211; // eax
  int edx258d; // edx
  INIClass *v213; // eax
  int eax258d; // eax
  INIClass *v215; // eax
  int ecx258d; // ecx
  INIClass *v217; // eax
  int edx258e; // edx
  INIClass *v219; // eax
  int eax258e; // eax
  INIClass *v221; // eax
  int ecx258e; // ecx
  INIClass *v223; // eax
  int edx258f; // edx
  INIClass *v225; // eax
  int v235; // eax
  INIClass *v227; // eax
  int ecx258f; // ecx
  INIClass *v229; // eax
  INIClass *v230; // eax
  INIClass *v231; // eax
  INIClass *v232; // eax
  INIClass *v233; // eax
  INIClass *v234; // eax
  int ecx258g; // ecx
  INIClass *v236; // eax
  INIClass *v237; // eax
  INIClass *v238; // eax
  INIClass *v239; // eax
  INIClass *v240; // eax
  int eax258g; // eax
  INIClass *v242; // eax
  int ecx258h; // ecx
  INIClass *v244; // eax
  int edx258g; // edx
  INIClass *v246; // eax
  int eax258h; // eax
  INIClass *v248; // eax
  int ecx258i; // ecx
  INIClass *v250; // eax
  int edx258h; // edx
  INIClass *v252; // eax
  int v262; // eax
  INIClass *v254; // eax
  int ecx258j; // ecx
  INIClass *v256; // eax
  int edx258i; // edx
  INIClass *v258; // eax
  int eax258j; // eax
  INIClass *v260; // eax
  INIClass *v261; // eax
  int v271; // edx
  INIClass *v263; // eax
  INIClass *v264; // eax
  INIClass *v265; // eax
  INIClass *v266; // eax
  INIClass *v267; // eax
  INIClass *v268; // eax
  INIClass *v269; // eax
  INIClass *v270; // eax
  int v280; // eax
  INIClass *v272; // eax
  INIClass *v273; // eax
  int edx258k; // edx
  INIClass *v275; // eax
  int v285; // eax
  INIClass *v277; // eax
  int v287; // ecx
  INIClass *v279; // eax
  int v289; // edx
  INIClass *v281; // eax
  int v291; // eax
  INIClass *v283; // eax
  INIClass *v284; // eax
  int eax258n; // eax
  INIClass *v286; // eax
  int eax258o; // eax
  INIClass *v288; // eax
  int eax258p; // eax
  INIClass *v290; // eax
  int v300; // eax
  INIClass *v292; // eax
  int v302; // eax
  INIClass *v294; // eax
  int eax258s; // eax
  INIClass *v296; // eax
  int eax258t; // eax
  INIClass *v298; // eax
  int v308; // eax
  int ecx258l; // ecx
  INIClass *v301; // eax
  int edx258m; // edx
  INIClass *v303; // eax
  INIClass *v304; // eax
  INIClass *v305; // eax
  INIClass *v306; // eax
  INIClass *v307; // eax
  int v317; // eax
  INIClass *v309; // eax
  CCINIClass *Abilities; // eax
  INIClass *v311; // eax
  CCINIClass *v321; // eax
  int eax260; // eax
  INIClass *v314; // eax
  int v324; // ecx
  INIClass *v316; // eax
  int v326; // edx
  INIClass *v318; // eax
  CCINIClass *v319; // eax
  INIClass *v320; // eax
  int ecx272; // ecx
  INIClass *v322; // eax
  int edx273; // edx
  INIClass *v323; // eax
  int eax273; // eax
  INIClass *v325; // eax
  int ecx273; // ecx
  INIClass *v327; // eax
  ObjectClass *v328; // eax
  INIClass *v329; // eax
  IUnknown *v340; // edx
  INIClass *v330; // eax
  INIClass *v331; // eax
  INIClass *v332; // eax
  int v344; // ecx
  INIClass *v334; // eax
  int v346; // edx
  INIClass *v336; // eax
  int eax283; // eax
  INIClass *v338; // eax
  INIClass *v339; // eax
  int edx283b; // edx
  INIClass *v341; // eax
  int v353; // eax
  INIClass *v343; // eax
  char al283; // al
  INIClass *v345; // eax
  IUnknown *edx283; // edx
  char *v358; // edx
  INIClass *v347; // eax
  IUnknown *v360; // edx
  INIClass *v348; // eax
  char *edx289a; // edx
  INIClass *v350; // eax
  IUnknown *edx289; // edx
  WeaponTypeClass *v351; // edi
  INIClass *v352; // eax
  int *Point3D_Overwrite; // eax
  INIClass *v354; // eax
  INIClass *v355; // eax
  int edx294; // edx
  INIClass *v357; // eax
  char al294; // al
  INIClass *v359; // eax
  int *v374; // eax
  INIClass *v361; // eax
  INIClass *v362; // eax
  int edx294a; // edx
  INIClass *v364; // eax
  CCINIClass *v365; // ecx
  INIClass *v366; // eax
  int *eax296; // eax
  INIClass *v368; // eax
  INIClass *v369; // eax
  INIClass *v370; // eax
  int *v385; // eax
  INIClass *v372; // eax
  INIClass *v373; // eax
  int eax296b; // eax
  INIClass *v375; // eax
  int *eax296c; // eax
  INIClass *v377; // eax
  INIClass *v378; // eax
  INIClass *v379; // eax
  int *v394; // eax
  INIClass *v381; // eax
  INIClass *v382; // eax
  INIClass *v392; // esi
  INIClass *v384; // eax
  int *v399; // eax
  int v400; // ecx
  int v401; // ecx
  INIClass *v388; // eax
  char v403; // al
  INIClass *v390; // eax
  int *v405; // eax
  INIClass *eax299c; // eax
  int TypeMember_5474E40; // eax
  _BYTE *v408; // ecx
  int Info; // eax
  int v410; // ecx
  VectorClass v412; // [esp-14h] [ebp-398h] BYREF
  _BYTE aP3[12]; // [esp-4h] [ebp-388h]
  INIClass *v414; // [esp+8h] [ebp-37Ch]
  int v415; // [esp+Ch] [ebp-378h]
  CCINIClass aP2; // [esp+18h] [ebp-36Ch] BYREF
  INIClass String[2]; // [esp+E4h] [ebp-2A0h] BYREF
  INIClass aP4; // [esp+164h] [ebp-220h] BYREF

  v4 = v3;
  INIClass::ResetSection(aP0);
  if ( !ObjectTypeClass::LoadFromINI((char *)v4, aP0) )
    return 0;
  *(_DWORD *)(v4 + 1540) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[59236],
                             *(INIClass **)(v4 + 1540));
  *(_DWORD *)(v4 + 1536) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[59220],
                             *(INIClass **)(v4 + 1536));
  *(_DWORD *)(v4 + 1660) = ObjectTypeClass::loadTypeMember_476FC0(
                             (unsigned __int8 ***)aP0,
                             (CCINIClass *)(v4 + 36),
                             (unsigned __int8 *)&stru_830620.__pad_579C[59208],
                             *(CCINIClass **)(v4 + 1660));
  *(_BYTE *)(v4 + 1828) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374.__pad_579C[22128],
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[59196],
                            *(_BYTE *)(v4 + 1828));
  *(_BYTE *)(v4 + 3212) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[59184],
                            *(_BYTE *)(v4 + 3212));
  *(_DWORD *)(v4 + 660) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[59172],
                            *(INIClass **)(v4 + 660));
  *(_DWORD *)(v4 + 664) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[59160],
                            *(INIClass **)(v4 + 664));
  *(_BYTE *)(v4 + 3213) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[59144],
                            *(_BYTE *)(v4 + 3213));
  *(_BYTE *)(v4 + 3220) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[59136],
                            *(_BYTE *)(v4 + 3220));
  *(_BYTE *)(v4 + 3225) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[59124],
                            *(_BYTE *)(v4 + 3225));
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 1464);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[59112];
  *(_DWORD *)aP3 = v4 + 36;
  *(_DWORD *)(v4 + 1464) = INIClass::ReadCoord(*(double *)aP3, *(int *)&aP3[8], v414, v415);
  *(_BYTE *)(v4 + 3349) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_14B0[6796],
                            *(_BYTE *)(v4 + 3349));
  v5 = *(WeaponTypeClass **)(v4 + 3352);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[21344],
         (INIClass *)&stru_87C374.__pad_579C[33876],
         String,
         128) )
  {
    v6 = InfantryTypeClass::Find((ObjectClass *)String);
  }
  else
  {
    v6 = v5;
  }
  *(_DWORD *)(v4 + 3352) = v6;
  *(double *)&aP3[4] = *(float *)(v4 + 3356);
  *(float *)(v4 + 3356) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620.__pad_579C[59084],
                            *(INIClass **)&aP3[4]);
  *(_DWORD *)(v4 + 1560) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[27288],
                             *(INIClass **)(v4 + 1560));
  Bool_Overwrite = INIClass::ReadBool_Overwrite(
                     (int)aP0,
                     (unsigned __int8 *)(v4 + 36),
                     (CCINIClass *)&stru_830620.__pad_579C[59072],
                     *(_BYTE *)(v4 + 3221));
  *(_DWORD *)&aP3[8] = -1074790400;
  *(_DWORD *)&aP3[4] = 0;
  *(_DWORD *)aP3 = &stru_830620.__pad_579C[59060];
  *(_DWORD *)&v412.IsInitialized = v4 + 36;
  *(_BYTE *)(v4 + 3221) = Bool_Overwrite;
  Double_Overwrite = INIClass::ReadDouble_Overwrite(
                       (int)aP0,
                       *(INIClass **)&v412.IsInitialized,
                       *(unsigned __int8 **)aP3,
                       *(INIClass **)&aP3[4]);
  if ( Double_Overwrite != -1.0 )
    *(double *)(v4 + 944) = Double_Overwrite * 0.0174532925199433;
  *(_DWORD *)&aP3[8] = -1074790400;
  v9 = INIClass::ReadDouble_Overwrite(
         (int)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[59048],
         0);
  if ( v9 != -1.0 )
    *(double *)(v4 + 928) = v9 * 0.0174532925199433;
  v10 = *(INIClass **)(v4 + 936);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 940);
  *(double *)(v4 + 936) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620.__pad_579C[59036],
                            v10);
  GUID_Overwrite = (_DWORD *)INIClass::ReadGUID_Overwrite(
                               (int)aP0,
                               (int)aP2.sectionHead,
                               (INIClass *)(v4 + 36),
                               (unsigned __int8 *)&stru_830620.__pad_579C[59024],
                               *(_DWORD *)(v4 + 844),
                               *(_DWORD *)(v4 + 848),
                               *(_DWORD *)(v4 + 852),
                               *(_DWORD *)(v4 + 856));
  *(_DWORD *)(v4 + 844) = *GUID_Overwrite;
  *(_DWORD *)(v4 + 848) = GUID_Overwrite[1];
  *(_DWORD *)(v4 + 852) = GUID_Overwrite[2];
  *(_DWORD *)(v4 + 856) = GUID_Overwrite[3];
  *(_DWORD *)(v4 + 784) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[59008],
                            *(INIClass **)(v4 + 784));
  v12 = *(INIClass **)(v4 + 752);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 756);
  *(double *)(v4 + 752) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620.__pad_579C[58980],
                            v12);
  *(_DWORD *)(v4 + 760) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[58960],
                            *(INIClass **)(v4 + 760));
  v13 = *(INIClass **)(v4 + 768);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 772);
  *(double *)(v4 + 768) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620.__pad_579C[58936],
                            v13);
  v14 = *(INIClass **)(v4 + 776);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 780);
  *(double *)(v4 + 776) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620.__pad_579C[58916],
                            v14);
  v15 = *(INIClass **)(v4 + 880);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 884);
  *(double *)(v4 + 880) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620.__pad_579C[58908],
                            v15);
  v16 = *(INIClass **)(v4 + 888);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 892);
  *(double *)(v4 + 888) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620.__pad_579C[58892],
                            v16);
  v17 = *(INIClass **)(v4 + 896);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 900);
  *(double *)(v4 + 896) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)g_INI_Key_Size,
                            v17);
  v18 = *(INIClass **)(v4 + 904);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 908);
  *(double *)(v4 + 904) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620.__pad_579C[58880],
                            v18);
  *(_BYTE *)(v4 + 912) = INIClass::ReadBool_Overwrite(
                           (int)aP0,
                           (unsigned __int8 *)(v4 + 36),
                           (CCINIClass *)&stru_830620.__pad_579C[58868],
                           *(_BYTE *)(v4 + 912));
  *(_DWORD *)(v4 + 916) = ObjectTypeClass::loadTypeMember_5477590(
                            (unsigned __int8 ***)aP0,
                            (CCINIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620.__pad_579C[58860],
                            *(CCINIClass **)(v4 + 916));
  *(_DWORD *)(v4 + 1468) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[58848],
                             *(INIClass **)(v4 + 1468));
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (int)aP0,
                    (unsigned __int8 *)(v4 + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[58836],
                    *(INIClass **)(v4 + 1472));
  *(_DWORD *)(v4 + 1472) = Int_Overwrite;
  if ( Int_Overwrite < 0 )
    *(_DWORD *)(v4 + 1472) = 0;
  v11 = *(CCINIClass **)(v4 + 1472);
  if ( *(_DWORD *)(v4 + 1468) < (int)v11 )
    *(_DWORD *)(v4 + 1468) = v11;
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[58824],
         (INIClass *)&stru_87C374.__pad_579C[33876],
         String,
         128) )
  {
    DynamicVector::Constructor_VoxelAnim(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_VoxelAnimTypeClass_const;
    for ( i = (ObjectClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
          i;
          i = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !i->__pad_0[0] )
        break;
      aP2.headNode[2] = (int)UnitTypeClass::FindOrCreate(i);
      if ( aP2.headNode[2] )
        DynamicVector::Add2(&aP2.unknown30, (VectorClass *)&aP2.headNode[2]);
    }
    TypeList::CopyVoxelAnim(aP2.sectionHead, (VectorClass *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_VoxelAnimTypeClass_const;
    Vector::Cleanup2((int)&aP2.unknown30);
  }
  else
  {
    TypeList::CopyVoxelAnim(aP2.sectionHead, (VectorClass *)(v4 + 788));
  }
  VectorClass::CopyAssign((_DWORD *)(v4 + 788), (VectorClass *)aP2.sectionHead);
  v22 = *(_DWORD *)aP2.__pad_20;
  v23 = *(_DWORD *)&aP2.__pad_20[4];
  *(_DWORD *)(v4 + 812) = *(_DWORD *)&aP2.__pad_20[8];
  *(_DWORD *)(v4 + 804) = v22;
  *(_DWORD *)(v4 + 808) = v23;
  aP2.sectionHead[0] = (int)&vt_VectorClass_VoxelAnimTypeClass_const;
  Vector::Cleanup2((int)aP2.sectionHead);
  aP2.headNode[2] = (int)&v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 816));
  *(_DWORD *)aP2.headNode[2] = &vt_TypeList_int;
  inited = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  aP2.headNode[2] = INIClass::ReadIntList(
                      (unsigned __int8 ***)aP0,
                      (int)aP2.sectionHead,
                      inited,
                      (unsigned __int8 *)&stru_830620.__pad_579C[58808],
                      (void **)v412.vtable0,
                      v412.Items,
                      v412.Capacity,
                      *(__int16 *)&v412.IsInitialized,
                      *(int *)aP3,
                      *(int *)&aP3[4],
                      *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 816), (_DWORD *)aP2.headNode[2]);
  v25 = aP2.headNode[2];
  *(_DWORD *)(v4 + 832) = *(_DWORD *)(aP2.headNode[2] + 16);
  *(_DWORD *)(v4 + 836) = *(_DWORD *)(v25 + 20);
  *(_DWORD *)(v4 + 840) = *(_DWORD *)(v25 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[58796],
         (INIClass *)&stru_87C374.__pad_579C[33876],
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_AnimTypeClass_const;
    for ( j = (AbstractClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
          j;
          j = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !j->__pad_0[0] )
        break;
      aP2.headNode[2] = (int)AnimTypeClass::FindOrCreate(j);
      if ( aP2.headNode[2] )
        DynamicVector::Add_Alt4(&aP2.unknown30, (VectorClass *)&aP2.headNode[2]);
    }
    TypeList::AnimTypeCopy(aP2.sectionHead, (VectorClass *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass::Destroy_Alt((int)&aP2.unknown30);
  }
  else
  {
    TypeList::AnimTypeCopy(aP2.sectionHead, (VectorClass *)(v4 + 1476));
  }
  VectorClass::CopyDefault((_DWORD *)(v4 + 1476), (VectorClass *)aP2.sectionHead);
  edx29 = *(_DWORD *)&aP2.__pad_20[4];
  v28 = *(_DWORD *)&aP2.__pad_20[8];
  *(_DWORD *)(v4 + 1492) = *(_DWORD *)aP2.__pad_20;
  *(_DWORD *)(v4 + 1496) = edx29;
  *(_DWORD *)(v4 + 1500) = v28;
  aP2.sectionHead[0] = (int)&vt_VectorClass_AnimTypeClass_const;
  DynamicVectorClass::Destroy_Alt((int)aP2.sectionHead);
  *(_BYTE *)(v4 + 2054) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[58776],
                            *(_BYTE *)(v4 + 2054));
  *(_DWORD *)(v4 + 2056) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[58764],
                             *(INIClass **)(v4 + 2056));
  *(_DWORD *)(v4 + 2060) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[58752],
                             *(INIClass **)(v4 + 2060));
  *(_BYTE *)(v4 + 2064) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[58736],
                            *(_BYTE *)(v4 + 2064));
  al29 = INIClass::ReadBool_Overwrite(
           (int)aP0,
           (unsigned __int8 *)(v4 + 36),
           (CCINIClass *)&stru_830620.__pad_579C[58720],
           *(_BYTE *)(v4 + 2704));
  *(_BYTE *)(v4 + 2704) = al29;
  if ( *(int *)(v4 + 2056) <= 0 )
  {
    if ( !al29 )
    {
      v34 = *(WeaponTypeClass **)(v4 + 2200);
      if ( INIClass::GetString(
             (unsigned __int8 ***)aP0,
             (INIClass *)(v4 + 36),
             (unsigned __int8 *)&stru_830620.__pad_579C[58684],
             (INIClass *)&stru_87C374.__pad_579C[33876],
             (INIClass *)&aP2.CCINIClass_field_4C,
             128) )
      {
        eax42 = InfantryTypeClass::Find((ObjectClass *)&aP2.CCINIClass_field_4C);
      }
      else
      {
        eax42 = v34;
      }
      *(_DWORD *)&aP3[8] = 128;
      *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
      *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
      *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[58672];
      *(_DWORD *)(v4 + 2200) = eax42;
      v27 = *(CCINIClass **)(v4 + 2228);
      if ( INIClass::GetString(
             (unsigned __int8 ***)aP0,
             (INIClass *)(v4 + 36),
             *(unsigned __int8 **)&v412.IsInitialized,
             *(INIClass **)aP3,
             *(INIClass **)&aP3[4],
             *(int *)&aP3[8]) )
      {
        eax45 = InfantryTypeClass::Find((ObjectClass *)&aP2.CCINIClass_field_4C);
      }
      else
      {
        eax45 = v27;
      }
      *(_DWORD *)(v4 + 2228) = eax45;
      v29 = *(CCINIClass **)(v4 + 2708);
      if ( INIClass::GetString(
             (unsigned __int8 ***)aP0,
             (INIClass *)(v4 + 36),
             (unsigned __int8 *)&stru_830620.__pad_579C[58656],
             (INIClass *)&stru_87C374.__pad_579C[33876],
             (INIClass *)&aP2.CCINIClass_field_4C,
             128) )
      {
        eax48 = InfantryTypeClass::Find((ObjectClass *)&aP2.CCINIClass_field_4C);
      }
      else
      {
        eax48 = v29;
      }
      *(_DWORD *)&aP3[8] = 128;
      *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
      *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
      *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[58640];
      *(_DWORD *)(v4 + 2708) = eax48;
      v31 = *(CCINIClass **)(v4 + 2736);
      if ( INIClass::GetString(
             (unsigned __int8 ***)aP0,
             (INIClass *)(v4 + 36),
             *(unsigned __int8 **)&v412.IsInitialized,
             *(INIClass **)aP3,
             *(INIClass **)&aP3[4],
             *(int *)&aP3[8]) )
      {
        eax51 = InfantryTypeClass::Find((ObjectClass *)&aP2.CCINIClass_field_4C);
      }
      else
      {
        eax51 = v31;
      }
      *(_DWORD *)(v4 + 2736) = eax51;
    }
  }
  else if ( *(int *)(v4 + 2060) > 0 )
  {
    aP2.headNode[2] = 1;
    v21 = (CCINIClass *)(v4 + 2708);
    do
    {
      sprintf((char *const)&aP2.unknown30, (ObjectClass *)&stru_830620.__pad_579C[58708], (INIClass *)aP2.headNode[2]);
      sprintf((char *const)aP2.sectionHead, (ObjectClass *)&stru_830620.__pad_579C[58692], (INIClass *)aP2.headNode[2]);
      *(_DWORD *)aP2.__pad_0 = v21[-6].sectionHead[1];
      if ( INIClass::GetString(
             (unsigned __int8 ***)aP0,
             (INIClass *)(v4 + 36),
             (unsigned __int8 *)&aP2.unknown30,
             (INIClass *)&stru_87C374.__pad_579C[33876],
             String,
             128) )
      {
        eax33 = InfantryTypeClass::Find((ObjectClass *)String);
      }
      else
      {
        eax33 = *(WeaponTypeClass **)aP2.__pad_0;
      }
      v21[-6].sectionHead[1] = (int)eax33;
      *(_DWORD *)aP2.__pad_0 = *(_DWORD *)v21->__pad_0;
      if ( INIClass::GetString(
             (unsigned __int8 ***)aP0,
             (INIClass *)(v4 + 36),
             (unsigned __int8 *)aP2.sectionHead,
             (INIClass *)&stru_87C374.__pad_579C[33876],
             (INIClass *)&aP2.CCINIClass_field_4C,
             128) )
      {
        v32 = InfantryTypeClass::Find((ObjectClass *)&aP2.CCINIClass_field_4C);
      }
      else
      {
        v32 = *(WeaponTypeClass **)aP2.__pad_0;
      }
      *(_DWORD *)v21->__pad_0 = v32;
      v24 = *(CCINIClass **)(v4 + 2060);
      ++aP2.headNode[2];
      v21 = (CCINIClass *)((char *)v21 + 28);
    }
    while ( aP2.headNode[2] - 1 < (int)v24 );
  }
  if ( *(_BYTE *)(v4 + 2704) )
  {
    *(_DWORD *)(v4 + 2200) = 0;
    *(_DWORD *)(v4 + 2228) = 0;
    *(_DWORD *)(v4 + 2708) = 0;
    *(_DWORD *)(v4 + 2736) = 0;
  }
  *(_DWORD *)aP2.__pad_0 = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1128));
  **(_DWORD **)aP2.__pad_0 = &vt_TypeList_int;
  v33 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2.__pad_0 = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v33,
                             (unsigned __int8 *)&stru_830620.__pad_579C[58628],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1128), *(_DWORD **)aP2.__pad_0);
  eax56 = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)(v4 + 1144) = *(_DWORD *)(*(_DWORD *)aP2.__pad_0 + 16);
  *(_DWORD *)(v4 + 1148) = *(_DWORD *)(eax56 + 20);
  *(_DWORD *)(v4 + 1152) = *(_DWORD *)(eax56 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  *(_DWORD *)aP2.__pad_0 = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1044));
  **(_DWORD **)aP2.__pad_0 = &vt_TypeList_int;
  v35 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2.__pad_0 = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v35,
                             (unsigned __int8 *)&stru_830620.__pad_579C[58616],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1044), *(_DWORD **)aP2.__pad_0);
  eax56a = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)(v4 + 1060) = *(_DWORD *)(*(_DWORD *)aP2.__pad_0 + 16);
  *(_DWORD *)(v4 + 1064) = *(_DWORD *)(eax56a + 20);
  *(_DWORD *)(v4 + 1068) = *(_DWORD *)(eax56a + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  *(_DWORD *)aP2.__pad_0 = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1072));
  **(_DWORD **)aP2.__pad_0 = &vt_TypeList_int;
  v37 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2.__pad_0 = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v37,
                             (unsigned __int8 *)&stru_830620.__pad_579C[58596],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1072), *(_DWORD **)aP2.__pad_0);
  eax56b = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)(v4 + 1088) = *(_DWORD *)(*(_DWORD *)aP2.__pad_0 + 16);
  *(_DWORD *)(v4 + 1092) = *(_DWORD *)(eax56b + 20);
  *(_DWORD *)(v4 + 1096) = *(_DWORD *)(eax56b + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  *(_DWORD *)aP2.__pad_0 = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1100));
  **(_DWORD **)aP2.__pad_0 = &vt_TypeList_int;
  v39 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2.__pad_0 = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v39,
                             (unsigned __int8 *)&stru_830620.__pad_579C[58572],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1100), *(_DWORD **)aP2.__pad_0);
  eax56c = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)(v4 + 1116) = *(_DWORD *)(*(_DWORD *)aP2.__pad_0 + 16);
  *(_DWORD *)(v4 + 1120) = *(_DWORD *)(eax56c + 20);
  *(_DWORD *)(v4 + 1124) = *(_DWORD *)(eax56c + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  *(_DWORD *)aP2.__pad_0 = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1156));
  **(_DWORD **)aP2.__pad_0 = &vt_TypeList_int;
  v41 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2.__pad_0 = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v41,
                             (unsigned __int8 *)&stru_830620.__pad_579C[58560],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1156), *(_DWORD **)aP2.__pad_0);
  v51 = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)(v4 + 1172) = *(_DWORD *)(*(_DWORD *)aP2.__pad_0 + 16);
  *(_DWORD *)(v4 + 1176) = *(_DWORD *)(v51 + 20);
  *(_DWORD *)(v4 + 1180) = *(_DWORD *)(v51 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  *(_DWORD *)aP2.__pad_0 = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1184));
  **(_DWORD **)aP2.__pad_0 = &vt_TypeList_int;
  v43 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2.__pad_0 = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v43,
                             (unsigned __int8 *)&stru_830620.__pad_579C[58540],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1184), *(_DWORD **)aP2.__pad_0);
  v53 = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)(v4 + 1200) = *(_DWORD *)(*(_DWORD *)aP2.__pad_0 + 16);
  *(_DWORD *)(v4 + 1204) = *(_DWORD *)(v53 + 20);
  *(_DWORD *)(v4 + 1208) = *(_DWORD *)(v53 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  *(_DWORD *)aP2.__pad_0 = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1212));
  **(_DWORD **)aP2.__pad_0 = &vt_TypeList_int;
  v45 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2.__pad_0 = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v45,
                             (unsigned __int8 *)&stru_830620.__pad_579C[58528],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1212), *(_DWORD **)aP2.__pad_0);
  v55 = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)(v4 + 1228) = *(_DWORD *)(*(_DWORD *)aP2.__pad_0 + 16);
  *(_DWORD *)(v4 + 1232) = *(_DWORD *)(v55 + 20);
  *(_DWORD *)(v4 + 1236) = *(_DWORD *)(v55 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  *(_DWORD *)aP2.__pad_0 = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1240));
  **(_DWORD **)aP2.__pad_0 = &vt_TypeList_int;
  v47 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2.__pad_0 = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v47,
                             (unsigned __int8 *)&stru_830620.__pad_579C[58512],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1240), *(_DWORD **)aP2.__pad_0);
  v57 = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)(v4 + 1256) = *(_DWORD *)(*(_DWORD *)aP2.__pad_0 + 16);
  *(_DWORD *)(v4 + 1260) = *(_DWORD *)(v57 + 20);
  *(_DWORD *)(v4 + 1264) = *(_DWORD *)(v57 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  v49 = *(CCINIClass **)(v4 + 1324);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[58500],
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    Index = (CCINIClass *)VocClass::FindIndex(&aP2.CCINIClass_field_4C);
    if ( Index != (CCINIClass *)-1 )
      v49 = Index;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[58488];
  *(_DWORD *)(v4 + 1324) = v49;
  v60 = *(_DWORD *)(v4 + 1328);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v61 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v61 == -1) )
  {
    v61 = v60;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[58476];
  *(_DWORD *)(v4 + 1328) = v61;
  v62 = *(_DWORD *)(v4 + 1332);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v63 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v63 == -1) )
  {
    v63 = v62;
  }
  *(_DWORD *)(v4 + 1332) = v63;
  v64 = *(_DWORD *)(v4 + 1336);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[58464],
          (INIClass *)&stru_87C374.__pad_579C[33876],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
    || (v65 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v65 == -1) )
  {
    v65 = v64;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[19480];
  *(_DWORD *)(v4 + 1336) = v65;
  v66 = *(_DWORD *)(v4 + 1340);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v67 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v67 == -1) )
  {
    v67 = v66;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[19464];
  *(_DWORD *)(v4 + 1340) = v67;
  v68 = *(_DWORD *)(v4 + 1344);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v69 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v69 == -1) )
  {
    v69 = v68;
  }
  *(_DWORD *)(v4 + 1344) = v69;
  v70 = *(_DWORD *)(v4 + 1348);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[58448],
          (INIClass *)&stru_87C374.__pad_579C[33876],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
    || (v71 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v71 == -1) )
  {
    v71 = v70;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[19448];
  *(_DWORD *)(v4 + 1348) = v71;
  v72 = *(_DWORD *)(v4 + 1352);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v73 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v73 == -1) )
  {
    v73 = v72;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[58432];
  *(_DWORD *)(v4 + 1352) = v73;
  v74 = *(_DWORD *)(v4 + 1356);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v75 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v75 == -1) )
  {
    v75 = v74;
  }
  *(_DWORD *)(v4 + 1356) = v75;
  v76 = *(_DWORD *)(v4 + 1360);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[58416],
          (INIClass *)&stru_87C374.__pad_579C[33876],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
    || (v77 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v77 == -1) )
  {
    v77 = v76;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[58400];
  *(_DWORD *)(v4 + 1360) = v77;
  v78 = *(_DWORD *)(v4 + 1364);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v79 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v79 == -1) )
  {
    v79 = v78;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[58388];
  *(_DWORD *)(v4 + 1364) = v79;
  v80 = *(_DWORD *)(v4 + 1368);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v81 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v81 == -1) )
  {
    v81 = v80;
  }
  *(_DWORD *)(v4 + 1368) = v81;
  v82 = *(_DWORD *)(v4 + 1372);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[58372],
          (INIClass *)&stru_87C374.__pad_579C[33876],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
    || (v83 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v83 == -1) )
  {
    v83 = v82;
  }
  *(_DWORD *)(v4 + 1372) = v83;
  *(_BYTE *)(v4 + 3219) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[58360],
                            *(_BYTE *)(v4 + 3219));
  *(_DWORD *)(v4 + 2048) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[58352],
                             *(INIClass **)(v4 + 2048));
  *(_DWORD *)(v4 + 952) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[58340],
                            *(INIClass **)(v4 + 952));
  TypeMember_54749E0 = ObjectTypeClass::loadTypeMember_54749E0(
                         (unsigned __int8 ***)aP0,
                         (CCINIClass *)(v4 + 36),
                         (unsigned __int8 *)&stru_830620.__pad_579C[58328],
                         *(_DWORD *)(v4 + 956));
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[58320];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 956) = TypeMember_54749E0;
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)v412.Capacity,
         *(unsigned __int8 **)&v412.IsInitialized,
         *(INIClass **)aP3,
         *(INIClass **)&aP3[4],
         *(int *)&aP3[8]) )
  {
    DynamicVectorClass::BuildingTypeConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_BuildingTypeClass_const;
    for ( k = strtok((char *)&aP2.CCINIClass_field_4C, (ObjectClass *)&stru_817F40.nextObject);
          k;
          k = strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !*k )
        break;
      *(_DWORD *)aP2.__pad_0 = BuildingTypeClass::FindOrCreate(k);
      if ( *(_DWORD *)aP2.__pad_0 )
        DynamicVector::Add_Alt3(&aP2.unknown30, (VectorClass *)&aP2);
    }
    TypeList::BuildingTypeCopy(aP2.sectionHead, (VectorClass *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)&aP2.unknown30);
  }
  else
  {
    TypeList::BuildingTypeCopy(aP2.sectionHead, (VectorClass *)(v4 + 1000));
  }
  VectorClass::CopyBuilding((_DWORD *)(v4 + 1000), (VectorClass *)aP2.sectionHead);
  v86 = *(_DWORD *)aP2.__pad_20;
  v87 = *(_DWORD *)&aP2.__pad_20[4];
  *(_DWORD *)(v4 + 1024) = *(_DWORD *)&aP2.__pad_20[8];
  *(_DWORD *)(v4 + 1016) = v86;
  *(_DWORD *)(v4 + 1020) = v87;
  aP2.sectionHead[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
  DynamicVectorClass::Destroy((int)aP2.sectionHead);
  v88 = *(BuildingTypeClass **)(v4 + 1028);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[58308],
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    v89 = BuildingTypeClass::FindOrCreate((char *)&aP2.CCINIClass_field_4C);
  }
  else
  {
    v89 = v88;
  }
  *(_DWORD *)(v4 + 1028) = v89;
  v90 = *(UnitTypeClass **)(v4 + 1032);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[58292],
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    Alt = BuildingTypeClass::FindOrCreateAlt((INIClass *)&aP2.CCINIClass_field_4C);
  }
  else
  {
    Alt = v90;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[58280];
  *(_DWORD *)(v4 + 1032) = Alt;
  v92 = *(UnitTypeClass **)(v4 + 1036);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         *(unsigned __int8 **)&v412.IsInitialized,
         *(INIClass **)aP3,
         *(INIClass **)&aP3[4],
         *(int *)&aP3[8]) )
  {
    eax110 = BuildingTypeClass::FindOrCreateAlt((INIClass *)&aP2.CCINIClass_field_4C);
  }
  else
  {
    eax110 = v92;
  }
  *(_DWORD *)(v4 + 1036) = eax110;
  *(_BYTE *)(v4 + 1040) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[58268],
                            *(_BYTE *)(v4 + 1040));
  *(_BYTE *)(v4 + 3366) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[58252],
                            *(_BYTE *)(v4 + 3366));
  v94 = INIClass::ReadBool_Overwrite(
          (int)aP0,
          (unsigned __int8 *)(v4 + 36),
          (CCINIClass *)&stru_830620.__pad_579C[58236],
          *(_BYTE *)(v4 + 3364));
  aP3[8] = *(_BYTE *)(v4 + 3361);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[58224];
  *(_DWORD *)aP3 = v4 + 36;
  *(_BYTE *)(v4 + 3364) = v94;
  *(_BYTE *)(v4 + 3361) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            *(unsigned __int8 **)aP3,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  al112a = INIClass::ReadBool_Overwrite(
             (int)aP0,
             (unsigned __int8 *)(v4 + 36),
             (CCINIClass *)&stru_830620.__pad_579C[58204],
             *(_BYTE *)(v4 + 3362));
  v96 = *(_BYTE *)(v4 + 3233);
  *(_BYTE *)(v4 + 3362) = al112a;
  al112b = INIClass::ReadBool_Overwrite(
             (int)aP0,
             (unsigned __int8 *)(v4 + 36),
             (CCINIClass *)&stru_830620.__pad_579C[58196],
             v96);
  v98 = *(_DWORD *)(v4 + 1376);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[58176];
  v412.Capacity = v4 + 36;
  *(_BYTE *)(v4 + 3233) = al112b;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v99 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v99 == -1) )
  {
    v99 = v98;
  }
  v100 = *(_DWORD *)(v4 + 1380);
  *(_DWORD *)(v4 + 1376) = v99;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[58156],
          (INIClass *)&stru_87C374.__pad_579C[33876],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
    || (v101 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v101 == -1) )
  {
    v101 = v100;
  }
  v93 = *(CCINIClass **)(v4 + 1384);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[58136];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1380) = v101;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v103 = (CCINIClass *)VocClass::FindIndex(&aP2.CCINIClass_field_4C), v103 == (CCINIClass *)-1) )
  {
    v103 = v93;
  }
  *(_DWORD *)(v4 + 1384) = v103;
  *(_DWORD *)aP2.__pad_0 = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1268));
  **(_DWORD **)aP2.__pad_0 = &vt_TypeList_int;
  v95 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2.__pad_0 = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v95,
                             (unsigned __int8 *)&stru_830620.__pad_579C[58124],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1268), *(_DWORD **)aP2.__pad_0);
  v105 = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)(v4 + 1284) = *(_DWORD *)(*(_DWORD *)aP2.__pad_0 + 16);
  *(_DWORD *)(v4 + 1288) = *(_DWORD *)(v105 + 20);
  *(_DWORD *)(v4 + 1292) = *(_DWORD *)(v105 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  if ( aP2.sectionHead[1] && BYTE1(aP2.sectionCount) )
    __3_YAXPAX_Z((void *)aP2.sectionHead[1]);
  *(_DWORD *)aP2.__pad_0 = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1296));
  **(_DWORD **)aP2.__pad_0 = &vt_TypeList_int;
  v97 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2.__pad_0 = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v97,
                             (unsigned __int8 *)&stru_830620.__pad_579C[58112],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1296), *(_DWORD **)aP2.__pad_0);
  v107 = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)(v4 + 1312) = *(_DWORD *)(*(_DWORD *)aP2.__pad_0 + 16);
  *(_DWORD *)(v4 + 1316) = *(_DWORD *)(v107 + 20);
  v108 = *(_DWORD *)(v107 + 24);
  v109 = (void *)aP2.sectionHead[1];
  *(_DWORD *)(v4 + 1320) = v108;
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  if ( v109 && BYTE1(aP2.sectionCount) )
    __3_YAXPAX_Z(v109);
  v110 = *(_DWORD *)(v4 + 1388);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[58100],
          (INIClass *)&stru_87C374.__pad_579C[33876],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
    || (v111 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v111 == -1) )
  {
    v111 = v110;
  }
  v112 = *(_DWORD *)(v4 + 1392);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[58084];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1388) = v111;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v113 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v113 == -1) )
  {
    v113 = v112;
  }
  v114 = *(_DWORD *)(v4 + 1396);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[19432];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1392) = v113;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v115 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v115 == -1) )
  {
    v115 = v114;
  }
  v116 = *(_DWORD *)(v4 + 1400);
  *(_DWORD *)(v4 + 1396) = v115;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[19416],
          (INIClass *)&stru_87C374.__pad_579C[33876],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
    || (v117 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v117 == -1) )
  {
    v117 = v116;
  }
  v118 = *(_DWORD *)(v4 + 1404);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[58068];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1400) = v117;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v119 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v119 == -1) )
  {
    v119 = v118;
  }
  v120 = *(_DWORD *)(v4 + 1408);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[58040];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1404) = v119;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v121 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v121 == -1) )
  {
    v121 = v120;
  }
  v122 = *(_DWORD *)(v4 + 1412);
  *(_DWORD *)(v4 + 1408) = v121;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[58008],
          (INIClass *)&stru_87C374.__pad_579C[33876],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
    || (v123 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v123 == -1) )
  {
    v123 = v122;
  }
  v124 = *(_DWORD *)(v4 + 1416);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[57980];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1412) = v123;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v125 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v125 == -1) )
  {
    v125 = v124;
  }
  v126 = *(_DWORD *)(v4 + 1420);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[57948];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1416) = v125;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v127 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v127 == -1) )
  {
    v127 = v126;
  }
  v128 = *(_DWORD *)(v4 + 1424);
  *(_DWORD *)(v4 + 1420) = v127;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[57936],
          (INIClass *)&stru_87C374.__pad_579C[33876],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
    || (v129 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v129 == -1) )
  {
    v129 = v128;
  }
  v130 = *(_DWORD *)(v4 + 1428);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[57920];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1424) = v129;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v131 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v131 == -1) )
  {
    v131 = v130;
  }
  v132 = *(_DWORD *)(v4 + 1432);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[18804];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1428) = v131;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v133 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v133 == -1) )
  {
    v133 = v132;
  }
  v134 = *(_DWORD *)(v4 + 1436);
  *(_DWORD *)(v4 + 1432) = v133;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[18784],
          (INIClass *)&stru_87C374.__pad_579C[33876],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
    || (v135 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v135 == -1) )
  {
    v135 = v134;
  }
  v136 = *(_DWORD *)(v4 + 1440);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[18760];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1436) = v135;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v137 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v137 == -1) )
  {
    v137 = v136;
  }
  v138 = *(_DWORD *)(v4 + 1444);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[18736];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1440) = v137;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v139 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v139 == -1) )
  {
    v139 = v138;
  }
  v140 = *(_DWORD *)(v4 + 1448);
  *(_DWORD *)(v4 + 1444) = v139;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620.__pad_579C[18720],
          (INIClass *)&stru_87C374.__pad_579C[33876],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
    || (v141 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v141 == -1) )
  {
    v141 = v140;
  }
  v142 = *(_DWORD *)(v4 + 1452);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[18704];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1448) = v141;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v143 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v143 == -1) )
  {
    v143 = v142;
  }
  v144 = *(_DWORD *)(v4 + 1456);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[18824];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1452) = v143;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v145 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v145 == -1) )
  {
    v145 = v144;
  }
  *(_DWORD *)(v4 + 1456) = v145;
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&g_INI_Key_Speed.needsSave_flag,
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_AnimTypeClass_const;
    for ( m = (AbstractClass *)strtok((char *)&aP2.CCINIClass_field_4C, (ObjectClass *)&stru_817F40.nextObject);
          m;
          m = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !m->__pad_0[0] )
        break;
      *(_DWORD *)aP2.__pad_0 = AnimTypeClass::FindOrCreate(m);
      if ( *(_DWORD *)aP2.__pad_0 )
        DynamicVector::Add_Alt4(&aP2.unknown30, (VectorClass *)&aP2);
    }
    TypeList::AnimTypeCopy(aP2.sectionHead, (VectorClass *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass::Destroy_Alt((int)&aP2.unknown30);
  }
  else
  {
    TypeList::AnimTypeCopy(aP2.sectionHead, (VectorClass *)(v4 + 1836));
  }
  VectorClass::CopyDefault((_DWORD *)(v4 + 1836), (VectorClass *)aP2.sectionHead);
  v147 = *(_DWORD *)&aP2.__pad_20[4];
  v148 = *(_DWORD *)&aP2.__pad_20[8];
  *(_DWORD *)(v4 + 1852) = *(_DWORD *)aP2.__pad_20;
  v149 = (void *)aP2.sectionHead[1];
  *(_DWORD *)(v4 + 1856) = v147;
  *(_DWORD *)(v4 + 1860) = v148;
  aP2.sectionHead[0] = (int)&vt_VectorClass_AnimTypeClass_const;
  if ( v149 && BYTE1(aP2.sectionCount) )
    __3_YAXPAX_Z(v149);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[57908],
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_AnimTypeClass_const;
    for ( n = (AbstractClass *)strtok((char *)&aP2.CCINIClass_field_4C, (ObjectClass *)&stru_817F40.nextObject);
          n;
          n = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !n->__pad_0[0] )
        break;
      *(_DWORD *)aP2.__pad_0 = AnimTypeClass::FindOrCreate(n);
      if ( *(_DWORD *)aP2.__pad_0 )
        DynamicVector::Add_Alt4(&aP2.unknown30, (VectorClass *)&aP2);
    }
    TypeList::AnimTypeCopy(aP2.sectionHead, (VectorClass *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass::Destroy_Alt((int)&aP2.unknown30);
  }
  else
  {
    TypeList::AnimTypeCopy(aP2.sectionHead, (VectorClass *)(v4 + 1864));
  }
  VectorClass::CopyDefault((_DWORD *)(v4 + 1864), (VectorClass *)aP2.sectionHead);
  v151 = *(_DWORD *)&aP2.__pad_20[4];
  v152 = *(_DWORD *)&aP2.__pad_20[8];
  *(_DWORD *)(v4 + 1880) = *(_DWORD *)aP2.__pad_20;
  v153 = (void *)aP2.sectionHead[1];
  *(_DWORD *)(v4 + 1884) = v151;
  *(_DWORD *)(v4 + 1888) = v152;
  aP2.sectionHead[0] = (int)&vt_VectorClass_AnimTypeClass_const;
  if ( v153 && BYTE1(aP2.sectionCount) )
    __3_YAXPAX_Z(v153);
  v154 = *(ParticleSystemTypeClass **)(v4 + 1892);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[57884],
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    v155 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP2.CCINIClass_field_4C);
  }
  else
  {
    v155 = v154;
  }
  v156 = *(ParticleSystemTypeClass **)(v4 + 1908);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[57856];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1892) = v155;
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)v412.Capacity,
         *(unsigned __int8 **)&v412.IsInitialized,
         *(INIClass **)aP3,
         *(INIClass **)&aP3[4],
         *(int *)&aP3[8]) )
  {
    v157 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP2.CCINIClass_field_4C);
  }
  else
  {
    v157 = v156;
  }
  *(_DWORD *)&aP3[8] = v4 + 1896;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[57832];
  *(_DWORD *)aP3 = v4 + 36;
  *(_DWORD *)&v412.IsInitialized = &aP2.unknown30;
  *(_DWORD *)(v4 + 1908) = v157;
  Coord2 = INIClass::GetCoord2(
             (unsigned __int8 ***)aP0,
             *(int **)&v412.IsInitialized,
             *(CCINIClass **)aP3,
             *(unsigned __int8 **)&aP3[4],
             *(int **)&aP3[8]);
  v159 = *Coord2;
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)(v4 + 1896) = v159;
  v160 = Coord2[1];
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)(v4 + 1900) = v160;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  v161 = Coord2[2];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[57808];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1904) = v161;
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)v412.Capacity,
         *(unsigned __int8 **)&v412.IsInitialized,
         *(INIClass **)aP3,
         *(INIClass **)&aP3[4],
         *(int *)&aP3[8]) )
  {
    TypeList::ParticleConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_ParticleSystemTypeClass_const;
    for ( ii = (ObjectClass *)strtok((char *)&aP2.CCINIClass_field_4C, (ObjectClass *)&stru_817F40.nextObject);
          ii;
          ii = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !ii->__pad_0[0] )
        break;
      *(_DWORD *)aP2.__pad_0 = BuildingTypeClass::LoadOrGet(ii);
      if ( *(_DWORD *)aP2.__pad_0 )
        TypeList::PushBack(&aP2.unknown30, (VectorClass *)&aP2);
    }
    VectorClass::CopyParticle(aP2.sectionHead, (DynamicVector *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_ParticleSystemTypeClass_const;
    VectorClass::Cleanup((int)&aP2.unknown30);
  }
  else
  {
    VectorClass::CopyParticle(aP2.sectionHead, (DynamicVector *)(v4 + 1912));
  }
  ObjectTypeClass::loadTypeMember_5717C00((_DWORD *)(v4 + 1912), aP2.sectionHead);
  v163 = *(_DWORD *)aP2.__pad_20;
  v164 = *(_DWORD *)&aP2.__pad_20[4];
  *(_DWORD *)(v4 + 1936) = *(_DWORD *)&aP2.__pad_20[8];
  v165 = (void *)aP2.sectionHead[1];
  *(_DWORD *)(v4 + 1928) = v163;
  *(_DWORD *)(v4 + 1932) = v164;
  aP2.sectionHead[0] = (int)&vt_VectorClass_ParticleSystemTypeClass_const;
  if ( v165 && BYTE1(aP2.sectionCount) )
    __3_YAXPAX_Z(v165);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[57784],
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    TypeList::ParticleConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_ParticleSystemTypeClass_const;
    for ( jj = (ObjectClass *)strtok((char *)&aP2.CCINIClass_field_4C, (ObjectClass *)&stru_817F40.nextObject);
          jj;
          jj = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !jj->__pad_0[0] )
        break;
      *(_DWORD *)aP2.__pad_0 = BuildingTypeClass::LoadOrGet(jj);
      if ( *(_DWORD *)aP2.__pad_0 )
        TypeList::PushBack(&aP2.unknown30, (VectorClass *)&aP2);
    }
    VectorClass::CopyParticle(aP2.sectionHead, (DynamicVector *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_ParticleSystemTypeClass_const;
    VectorClass::Cleanup((int)&aP2.unknown30);
  }
  else
  {
    VectorClass::CopyParticle(aP2.sectionHead, (DynamicVector *)(v4 + 1940));
  }
  ObjectTypeClass::loadTypeMember_5717C00((_DWORD *)(v4 + 1940), aP2.sectionHead);
  v167 = *(_DWORD *)aP2.__pad_20;
  v168 = *(_DWORD *)&aP2.__pad_20[4];
  *(_DWORD *)(v4 + 1964) = *(_DWORD *)&aP2.__pad_20[8];
  v169 = (void *)aP2.sectionHead[1];
  *(_DWORD *)(v4 + 1956) = v167;
  *(_DWORD *)(v4 + 1960) = v168;
  aP2.sectionHead[0] = (int)&vt_VectorClass_ParticleSystemTypeClass_const;
  if ( v169 && BYTE1(aP2.sectionCount) )
    __3_YAXPAX_Z(v169);
  eax231 = INIClass::GetCoord2(
             (unsigned __int8 ***)aP0,
             &aP2.unknown30,
             (CCINIClass *)(v4 + 36),
             (unsigned __int8 *)&stru_830620.__pad_579C[57764],
             (int *)(v4 + 1968));
  *(_DWORD *)(v4 + 1968) = *eax231;
  *(_DWORD *)(v4 + 1972) = eax231[1];
  edx231 = eax231[2];
  aP3[8] = *(_BYTE *)(v4 + 1980);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[57744];
  *(_DWORD *)aP3 = v4 + 36;
  *(_DWORD *)(v4 + 1976) = edx231;
  v172 = INIClass::ReadBool_Overwrite((int)aP0, *(unsigned __int8 **)aP3, *(CCINIClass **)&aP3[4], aP3[8]);
  *(_DWORD *)&aP3[8] = v4 + 1984;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[57724];
  *(_DWORD *)aP3 = v4 + 36;
  *(_DWORD *)&v412.IsInitialized = &aP2.unknown30;
  *(_BYTE *)(v4 + 1980) = v172;
  eax231a = INIClass::GetCoord2(
              (unsigned __int8 ***)aP0,
              *(int **)&v412.IsInitialized,
              *(CCINIClass **)aP3,
              *(unsigned __int8 **)&aP3[4],
              *(int **)&aP3[8]);
  *(_DWORD *)(v4 + 1984) = *eax231a;
  *(_DWORD *)(v4 + 1988) = eax231a[1];
  *(_DWORD *)(v4 + 1992) = eax231a[2];
  eax231b = INIClass::GetCoord2(
              (unsigned __int8 ***)aP0,
              &aP2.unknown30,
              (CCINIClass *)(v4 + 36),
              (unsigned __int8 *)&stru_830620.__pad_579C[57700],
              (int *)(v4 + 1996));
  *(_DWORD *)(v4 + 1996) = *eax231b;
  *(_DWORD *)(v4 + 2000) = eax231b[1];
  *(_DWORD *)(v4 + 2004) = eax231b[2];
  v175 = INIClass::GetCoord2(
           (unsigned __int8 ***)aP0,
           &aP2.unknown30,
           (CCINIClass *)(v4 + 36),
           (unsigned __int8 *)&stru_830620.__pad_579C[57676],
           (int *)(v4 + 2008));
  *(_DWORD *)(v4 + 2008) = *v175;
  *(_DWORD *)(v4 + 2012) = v175[1];
  *(_DWORD *)(v4 + 2016) = v175[2];
  v176 = INIClass::GetCoord2(
           (unsigned __int8 ***)aP0,
           &aP2.unknown30,
           (CCINIClass *)(v4 + 36),
           (unsigned __int8 *)&stru_830620.__pad_579C[57648],
           (int *)(v4 + 2020));
  *(_DWORD *)(v4 + 2020) = *v176;
  *(_DWORD *)(v4 + 2024) = v176[1];
  *(_DWORD *)(v4 + 2028) = v176[2];
  eax231e = INIClass::GetCoord2(
              (unsigned __int8 ***)aP0,
              &aP2.unknown30,
              (CCINIClass *)(v4 + 36),
              (unsigned __int8 *)&stru_830620.__pad_579C[57624],
              (int *)(v4 + 2032));
  *(_DWORD *)(v4 + 2032) = *eax231e;
  *(_DWORD *)(v4 + 2036) = eax231e[1];
  *(_DWORD *)(v4 + 2040) = eax231e[2];
  *(_BYTE *)(v4 + 3230) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57616],
                            *(_BYTE *)(v4 + 3230));
  *(_BYTE *)(v4 + 3231) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57604],
                            *(_BYTE *)(v4 + 3231));
  *(_BYTE *)(v4 + 3232) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57592],
                            *(_BYTE *)(v4 + 3232));
  *(_BYTE *)(v4 + 3280) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57580],
                            *(_BYTE *)(v4 + 3280));
  *(_BYTE *)(v4 + 3281) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57564],
                            *(_BYTE *)(v4 + 3281));
  *(_BYTE *)(v4 + 3282) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57544],
                            (INIClass *)*(char *)(v4 + 3282));
  *(_BYTE *)(v4 + 3283) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57520],
                            (INIClass *)*(char *)(v4 + 3283));
  *(_BYTE *)(v4 + 3284) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57508],
                            *(_BYTE *)(v4 + 3284));
  *(_BYTE *)(v4 + 3229) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57500],
                            *(_BYTE *)(v4 + 3229));
  *(_BYTE *)(v4 + 3285) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57488],
                            *(_BYTE *)(v4 + 3285));
  *(_DWORD *)(v4 + 3288) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[57472],
                             *(INIClass **)(v4 + 3288));
  *(_DWORD *)(v4 + 3340) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[57464],
                             *(INIClass **)(v4 + 3340));
  *(_DWORD *)(v4 + 3344) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[57452],
                             *(INIClass **)(v4 + 3344));
  if ( *(_BYTE *)(v4 + 3285) && *(int *)(v4 + 3288) > 1 )
  {
    aP2.headNode[2] = 1;
    v178 = (INIClass **)(v4 + 3316);
    do
    {
      sprintf(aP2.__pad_0, (ObjectClass *)&stru_830620.__pad_579C[57444], (INIClass *)aP2.headNode[2]);
      sprintf((char *const)&aP2.unknown30, (ObjectClass *)&stru_830620.__pad_579C[57428], (INIClass *)aP2.headNode[2]);
      *(v178 - 6) = (INIClass *)INIClass::ReadInt_Overwrite((int)aP0, (unsigned __int8 *)(v4 + 36), &aP2, *(v178 - 6));
      *v178 = (INIClass *)INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&aP2.unknown30,
                            *v178);
      v170 = *(CCINIClass **)(v4 + 3288);
      ++v178;
      ++aP2.headNode[2];
    }
    while ( aP2.headNode[2] - 1 < (int)v170 );
  }
  *(_DWORD *)(v4 + 980) = ObjectTypeClass::loadTypeMember_5474940(
                            (unsigned __int8 ***)aP0,
                            (CCINIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620.__pad_579C[57416],
                            *(_DWORD *)(v4 + 980));
  *(_BYTE *)(v4 + 984) = INIClass::ReadBool_Overwrite(
                           (int)aP0,
                           (unsigned __int8 *)(v4 + 36),
                           (CCINIClass *)&stru_830620.__pad_579C[57400],
                           *(_BYTE *)(v4 + 984));
  *(_DWORD *)(v4 + 988) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57376],
                            *(INIClass **)(v4 + 988));
  *(_DWORD *)(v4 + 992) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57348],
                            *(INIClass **)(v4 + 992));
  *(_DWORD *)(v4 + 996) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57340],
                            *(INIClass **)(v4 + 996));
  *(_DWORD *)aP2.__pad_0 = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1592));
  **(_DWORD **)aP2.__pad_0 = &vt_TypeList_int;
  v171 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2.__pad_0 = LoadBuildingTypeClassPrerequisites(
                             aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v171,
                             (unsigned __int8 *)&stru_830620.__pad_579C[57324],
                             v412);
  TypeList::Copy((_DWORD *)(v4 + 1592), *(_DWORD **)aP2.__pad_0);
  v181 = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)(v4 + 1608) = *(_DWORD *)(*(_DWORD *)aP2.__pad_0 + 16);
  *(_DWORD *)(v4 + 1612) = *(_DWORD *)(v181 + 20);
  *(_DWORD *)(v4 + 1616) = *(_DWORD *)(v181 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  if ( aP2.sectionHead[1] && BYTE1(aP2.sectionCount) )
    __3_YAXPAX_Z((void *)aP2.sectionHead[1]);
  *(_DWORD *)aP2.__pad_0 = &v412;
  IntVector::Copy(&v412, (VectorClass *)(v4 + 1620));
  v173 = *(CCINIClass **)aP2.__pad_0;
  *(_DWORD *)(*(_DWORD *)aP2.__pad_0 + 16) = *(_DWORD *)(v4 + 1636);
  v173->sectionHead[1] = *(_DWORD *)(v4 + 1640);
  *(_DWORD *)v173->__pad_0 = &vt_TypeList_int;
  v174 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2.__pad_0 = LoadBuildingTypeClassPrerequisites(
                             aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v174,
                             (unsigned __int8 *)&stru_830620.__pad_579C[57300],
                             v412);
  TypeList::Copy((_DWORD *)(v4 + 1620), *(_DWORD **)aP2.__pad_0);
  v184 = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)(v4 + 1636) = *(_DWORD *)(*(_DWORD *)aP2.__pad_0 + 16);
  *(_DWORD *)(v4 + 1640) = *(_DWORD *)(v184 + 20);
  *(_DWORD *)(v4 + 1644) = *(_DWORD *)(v184 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  if ( aP2.sectionHead[1] && BYTE1(aP2.sectionCount) )
    __3_YAXPAX_Z((void *)aP2.sectionHead[1]);
  *(_DWORD *)(v4 + 1512) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[57292],
                             *(INIClass **)(v4 + 1512));
  *(_BYTE *)(v4 + 3388) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57272],
                            *(_BYTE *)(v4 + 3388));
  *(_BYTE *)(v4 + 3389) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57252],
                            *(_BYTE *)(v4 + 3389));
  *(_DWORD *)(v4 + 1520) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[57236],
                             *(INIClass **)(v4 + 1520));
  *(_DWORD *)(v4 + 1524) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[57216],
                             *(INIClass **)(v4 + 1524));
  *(_DWORD *)(v4 + 1528) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[57204],
                             *(INIClass **)(v4 + 1528));
  *(_DWORD *)(v4 + 1532) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[57184],
                             *(INIClass **)(v4 + 1532));
  *(_DWORD *)(v4 + 1548) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[57160],
                             *(INIClass **)(v4 + 1548));
  *(double *)&aP3[4] = *(float *)(v4 + 1544);
  *(float *)(v4 + 1544) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620.__pad_579C[57140],
                            *(INIClass **)&aP3[4]);
  *(_BYTE *)(v4 + 1518) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57128],
                            *(_BYTE *)(v4 + 1518));
  *(_BYTE *)(v4 + 1519) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57116],
                            *(_BYTE *)(v4 + 1519));
  *(_BYTE *)(v4 + 1508) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57104],
                            *(_BYTE *)(v4 + 1508));
  *(_BYTE *)(v4 + 1516) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57084],
                            *(_BYTE *)(v4 + 1516));
  *(_BYTE *)(v4 + 1517) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57064],
                            *(_BYTE *)(v4 + 1517));
  *(_BYTE *)(v4 + 3375) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57052],
                            *(_BYTE *)(v4 + 3375));
  *(_BYTE *)(v4 + 3376) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57036],
                            *(_BYTE *)(v4 + 3376));
  *(_BYTE *)(v4 + 3377) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57020],
                            *(_BYTE *)(v4 + 3377));
  *(_BYTE *)(v4 + 3378) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[57000],
                            *(_BYTE *)(v4 + 3378));
  *(_BYTE *)(v4 + 3481) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56980],
                            *(_BYTE *)(v4 + 3481));
  *(_BYTE *)(v4 + 3482) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56964],
                            *(_BYTE *)(v4 + 3482));
  *(_BYTE *)(v4 + 3379) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56944],
                            *(_BYTE *)(v4 + 3379));
  *(_BYTE *)(v4 + 3380) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56920],
                            *(_BYTE *)(v4 + 3380));
  *(_BYTE *)(v4 + 3483) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56896],
                            *(_BYTE *)(v4 + 3483));
  *(_BYTE *)(v4 + 3484) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56868],
                            *(_BYTE *)(v4 + 3484));
  *(_BYTE *)(v4 + 3485) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56840],
                            *(_BYTE *)(v4 + 3485));
  *(_DWORD *)(v4 + 3488) = INIClass::ParseFlagList(
                             (unsigned __int8 ***)aP0,
                             (CCINIClass *)(v4 + 36),
                             (unsigned __int8 *)&stru_830620.__pad_579C[56824],
                             *(_DWORD *)(v4 + 3488));
  *(_DWORD *)(v4 + 3496) = INIClass::ParseFlagList(
                             (unsigned __int8 ***)aP0,
                             (CCINIClass *)(v4 + 36),
                             (unsigned __int8 *)&stru_830620.__pad_579C[56808],
                             *(_DWORD *)(v4 + 3496));
  *(_DWORD *)(v4 + 3492) = INIClass::ParseFlagList(
                             (unsigned __int8 ***)aP0,
                             (CCINIClass *)(v4 + 36),
                             (unsigned __int8 *)&stru_830620.__pad_579C[56792],
                             *(_DWORD *)(v4 + 3492));
  *(_DWORD *)(v4 + 1588) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             aTechlevel,
                             *(INIClass **)(v4 + 1588));
  *(_DWORD *)&aP3[8] = INIClass::ReadInt_Overwrite(
                         (int)aP0,
                         (unsigned __int8 *)(v4 + 36),
                         (CCINIClass *)&stru_830620.__pad_579C[56776],
                         *(INIClass **)(v4 + 1564));
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[56756];
  *(_DWORD *)aP3 = v4 + 36;
  *(_DWORD *)(v4 + 1564) = *(_DWORD *)&aP3[8];
  *(_DWORD *)(v4 + 1568) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             *(unsigned __int8 **)aP3,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  v177 = *(CCINIClass **)(v4 + 1572);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[56736],
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    v177 = (CCINIClass *)KeywordClass::FindOrCreate((ObjectClass *)&aP2.CCINIClass_field_4C);
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[56712];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1572) = v177;
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)v412.Capacity,
         *(unsigned __int8 **)&v412.IsInitialized,
         *(INIClass **)aP3,
         *(INIClass **)&aP3[4],
         *(int *)&aP3[8]) )
  {
    v186 = KeywordClass::FindOrCreate((ObjectClass *)&aP2.CCINIClass_field_4C);
  }
  else
  {
    v186 = v177;
  }
  *(_DWORD *)(v4 + 1576) = v186;
  *(_DWORD *)&aP3[8] = INIClass::ReadInt_Overwrite(
                         (int)aP0,
                         (unsigned __int8 *)(v4 + 36),
                         (CCINIClass *)&stru_830620.__pad_579C[56688],
                         *(INIClass **)(v4 + 1580));
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[56660];
  *(_DWORD *)aP3 = v4 + 36;
  *(_DWORD *)(v4 + 1580) = *(_DWORD *)&aP3[8];
  v187 = INIClass::ReadInt_Overwrite((int)aP0, *(unsigned __int8 **)aP3, *(CCINIClass **)&aP3[4], *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = -1;
  *(_DWORD *)&aP3[4] = &g_INI_Key_Speed;
  *(_DWORD *)aP3 = v4 + 36;
  *(_DWORD *)(v4 + 1584) = v187;
  eax246 = INIClass::ReadInt_Overwrite(
             (int)aP0,
             *(unsigned __int8 **)aP3,
             *(CCINIClass **)&aP3[4],
             *(INIClass **)&aP3[8]);
  if ( eax246 != -1 )
  {
    if ( eax246 >= 100 )
      eax246 = 100;
    v189 = ((eax246 <= 0 ? 0 : eax246) << 8) / 100;
    if ( v189 >= 255 )
      v189 = 255;
    *(_DWORD *)(v4 + 1656) = v189;
  }
  *(_DWORD *)(v4 + 1552) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_825430.ownsFile,
                             *(INIClass **)(v4 + 1552));
  *(_DWORD *)(v4 + 1556) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[56652],
                             *(INIClass **)(v4 + 1556));
  edi252 = *(UnitTypeClass **)(v4 + 1720);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620.__pad_579C[56636],
         (INIClass *)&stru_87C374.__pad_579C[33876],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    v191 = BuildingTypeClass::FindOrCreateAlt((INIClass *)&aP2.CCINIClass_field_4C);
  }
  else
  {
    v191 = edi252;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = aDeployinganim;
  *(_DWORD *)(v4 + 1720) = v191;
  edi255 = *(AnimTypeClass **)(v4 + 1724);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         *(unsigned __int8 **)&v412.IsInitialized,
         *(INIClass **)aP3,
         *(INIClass **)&aP3[4],
         *(int *)&aP3[8]) )
  {
    eax256 = AnimTypeClass::FindOrCreate((AbstractClass *)&aP2.CCINIClass_field_4C);
  }
  else
  {
    eax256 = edi255;
  }
  *(_DWORD *)(v4 + 1724) = eax256;
  *(_DWORD *)(v4 + 1664) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[56624],
                             *(INIClass **)(v4 + 1664));
  *(_DWORD *)(v4 + 1668) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_81BBC8.sectionHead[2],
                             *(INIClass **)(v4 + 1668));
  *(_DWORD *)(v4 + 1672) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[56616],
                             *(INIClass **)(v4 + 1672));
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 1676);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[56600];
  *(_DWORD *)aP3 = v4 + 36;
  *(_DWORD *)(v4 + 1676) = INIClass::ReadCoord(*(double *)aP3, *(int *)&aP3[8], v414, v415);
  *(_DWORD *)(v4 + 1700) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[56580],
                             *(INIClass **)(v4 + 1700));
  *(_DWORD *)(v4 + 1704) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[56560],
                             *(INIClass **)(v4 + 1704));
  *(_BYTE *)(v4 + 1708) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56548],
                            *(_BYTE *)(v4 + 1708));
  *(_BYTE *)(v4 + 1709) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56532],
                            *(_BYTE *)(v4 + 1709));
  *(_BYTE *)(v4 + 1710) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56520],
                            *(_BYTE *)(v4 + 1710));
  *(_BYTE *)(v4 + 1711) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56504],
                            *(_BYTE *)(v4 + 1711));
  *(_BYTE *)(v4 + 1712) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56488],
                            *(_BYTE *)(v4 + 1712));
  *(_DWORD *)(v4 + 1688) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[56480],
                             *(INIClass **)(v4 + 1688));
  *(_DWORD *)(v4 + 1692) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[56468],
                             *(INIClass **)(v4 + 1692));
  *(_DWORD *)(v4 + 1696) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[56452],
                             *(INIClass **)(v4 + 1696));
  *(_BYTE *)(v4 + 1713) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56428],
                            *(_BYTE *)(v4 + 1713));
  *(double *)&aP3[4] = *(float *)(v4 + 1716);
  *(float *)(v4 + 1716) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620.__pad_579C[56396],
                            *(INIClass **)&aP3[4]);
  *(_BYTE *)(v4 + 1680) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56380],
                            *(_BYTE *)(v4 + 1680));
  *(_BYTE *)(v4 + 1681) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56368],
                            *(_BYTE *)(v4 + 1681));
  *(_BYTE *)(v4 + 1682) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56360],
                            *(_BYTE *)(v4 + 1682));
  *(_BYTE *)(v4 + 1683) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56352],
                            *(_BYTE *)(v4 + 1683));
  *(_BYTE *)(v4 + 1684) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56340],
                            *(_BYTE *)(v4 + 1684));
  *(_BYTE *)(v4 + 1685) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56328],
                            *(_BYTE *)(v4 + 1685));
  *(_BYTE *)(v4 + 1736) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56308],
                            *(_BYTE *)(v4 + 1736));
  eax258 = INIClass::ReadInt_Overwrite(
             (int)aP0,
             (unsigned __int8 *)(v4 + 36),
             (CCINIClass *)&stru_830620.__pad_579C[56300],
             *(INIClass **)(v4 + 1832));
  *(_DWORD *)(v4 + 1832) = eax258;
  *(_DWORD *)(v4 + 1652) = eax258;
  *(_DWORD *)(v4 + 1648) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[56288],
                             *(INIClass **)(v4 + 1648));
  *(_DWORD *)(v4 + 1740) = INIClass::ParseFlagList(
                             (unsigned __int8 ***)aP0,
                             (CCINIClass *)(v4 + 36),
                             (unsigned __int8 *)&stru_830620.__pad_579C[56280],
                             *(_DWORD *)(v4 + 1740));
  *(_DWORD *)(v4 + 1744) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[56260],
                             *(INIClass **)(v4 + 1744));
  *(_BYTE *)(v4 + 3214) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56248],
                            *(_BYTE *)(v4 + 3214));
  *(_BYTE *)(v4 + 3277) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56240],
                            *(_BYTE *)(v4 + 3277));
  *(_BYTE *)(v4 + 2053) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56232],
                            *(_BYTE *)(v4 + 2053));
  *(_BYTE *)(v4 + 3278) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56224],
                            *(_BYTE *)(v4 + 3278));
  *(_BYTE *)(v4 + 3276) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56212],
                            *(_BYTE *)(v4 + 3276));
  *(_BYTE *)(v4 + 3226) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620.__pad_579C[56200],
                            *(_BYTE *)(v4 + 3226));
  LOBYTE(ecx258) = *(_BYTE *)(v4 + 3227);
  *(_DWORD *)&aP3[8] = ecx258;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[56184];
  v188 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3227) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v188,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258) = *(_BYTE *)(v4 + 3348);
  *(_DWORD *)&aP3[8] = edx258;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[56172];
  v190 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3348) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v190,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(eax258a) = *(_BYTE *)(v4 + 3360);
  *(_DWORD *)&aP3[8] = eax258a;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[56160];
  v192 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3360) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v192,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 1820);
  *(_DWORD *)&aP3[4] = &stru_81B138.INIClass_field_2C;
  v193 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 1820) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v193,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 1504);
  *(_DWORD *)&aP3[4] = &stru_81BBC8.headNode[2];
  v194 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 1504) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v194,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 976);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[56148];
  v195 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 976) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v195,
                            *(CCINIClass **)&aP3[4],
                            *(INIClass **)&aP3[8]);
  v204 = *(_DWORD *)(v4 + 968);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 972);
  *(_DWORD *)&aP3[4] = v204;
  *(_DWORD *)aP3 = &stru_830620.__pad_579C[56136];
  v196 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 968) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v196,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 1732);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[56120];
  v197 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 1732) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v197,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  LOBYTE(ecx258a) = *(_BYTE *)(v4 + 3223);
  *(_DWORD *)&aP3[8] = ecx258a;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[56108];
  v199 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3223) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v199,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258b) = *(_BYTE *)(v4 + 3222);
  *(_DWORD *)&aP3[8] = edx258b;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[56096];
  v201 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3222) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v201,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(eax258b) = *(_BYTE *)(v4 + 3218);
  *(_DWORD *)&aP3[8] = eax258b;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[28344];
  v203 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3218) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v203,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx258b) = *(_BYTE *)(v4 + 3217);
  *(_DWORD *)&aP3[8] = ecx258b;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[56080];
  v205 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3217) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v205,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258c) = *(_BYTE *)(v4 + 1749);
  *(_DWORD *)&aP3[8] = edx258c;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[56052];
  v207 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 1749) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v207,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(eax258c) = *(_BYTE *)(v4 + 1748);
  *(_DWORD *)&aP3[8] = eax258c;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[56040];
  v209 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 1748) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v209,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx258c) = *(_BYTE *)(v4 + 3216);
  *(_DWORD *)&aP3[8] = ecx258c;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[56028];
  v211 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3216) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v211,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258d) = *(_BYTE *)(v4 + 3367);
  *(_DWORD *)&aP3[8] = edx258d;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[56012];
  v213 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3367) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v213,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(eax258d) = *(_BYTE *)(v4 + 3368);
  *(_DWORD *)&aP3[8] = eax258d;
  *(_DWORD *)&aP3[4] = &stru_81BB58;
  v215 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3368) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v215,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx258d) = *(_BYTE *)(v4 + 3369);
  *(_DWORD *)&aP3[8] = ecx258d;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[56000];
  v217 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3369) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v217,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258e) = *(_BYTE *)(v4 + 3370);
  *(_DWORD *)&aP3[8] = edx258e;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55980];
  v219 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3370) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v219,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(eax258e) = *(_BYTE *)(v4 + 3373);
  *(_DWORD *)&aP3[8] = eax258e;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[30492];
  v221 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3373) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v221,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx258e) = *(_BYTE *)(v4 + 3383);
  *(_DWORD *)&aP3[8] = ecx258e;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55960];
  v223 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3383) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v223,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258f) = *(_BYTE *)(v4 + 3433);
  *(_DWORD *)&aP3[8] = edx258f;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55948];
  v225 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3433) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v225,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(v235) = *(_BYTE *)(v4 + 3434);
  *(_DWORD *)&aP3[8] = v235;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55932];
  v227 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3434) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v227,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx258f) = *(_BYTE *)(v4 + 3390);
  *(_DWORD *)&aP3[8] = ecx258f;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55924];
  v229 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3390) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v229,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3392);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55912];
  v230 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3392) = GetINIClassInt((unsigned __int8 ***)aP0, v230, *(unsigned __int8 **)&aP3[4], *(int *)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3400);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55896];
  v231 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3400) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v231,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3396);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55880];
  v232 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3396) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v232,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3404);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55864];
  v233 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3404) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v233,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3408);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55844];
  v234 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3408) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v234,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  LOBYTE(ecx258g) = *(_BYTE *)(v4 + 3412);
  *(_DWORD *)&aP3[8] = ecx258g;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55836];
  v236 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3412) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v236,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3416);
  *(_DWORD *)&aP3[4] = &stru_8184C8;
  v237 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3416) = GetINIClassKeyword(
                             (unsigned __int8 ***)aP0,
                             v237,
                             *(unsigned __int8 **)&aP3[4],
                             *(int *)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3424);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55820];
  v238 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3424) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v238,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3420);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55804];
  v239 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3420) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v239,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3428);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55788];
  v240 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258g = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (unsigned __int8 *)v240,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  *(_DWORD *)(v4 + 3428) = eax258g;
  LOBYTE(eax258g) = *(_BYTE *)(v4 + 3432);
  *(_DWORD *)&aP3[8] = eax258g;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55772];
  v242 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3432) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v242,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx258h) = *(_BYTE *)(v4 + 3385);
  *(_DWORD *)&aP3[8] = ecx258h;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55752];
  v244 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3385) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v244,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258g) = *(_BYTE *)(v4 + 3386);
  *(_DWORD *)&aP3[8] = edx258g;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55740];
  v246 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3386) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v246,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(eax258h) = *(_BYTE *)(v4 + 3384);
  *(_DWORD *)&aP3[8] = eax258h;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55724];
  v248 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3384) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v248,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx258i) = *(_BYTE *)(v4 + 3381);
  *(_DWORD *)&aP3[8] = ecx258i;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55704];
  v250 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3381) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v250,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258h) = *(_BYTE *)(v4 + 3382);
  *(_DWORD *)&aP3[8] = edx258h;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55680];
  v252 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3382) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v252,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(v262) = *(_BYTE *)(v4 + 3478);
  *(_DWORD *)&aP3[8] = v262;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55660];
  v254 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3478) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v254,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx258j) = *(_BYTE *)(v4 + 3374);
  *(_DWORD *)&aP3[8] = ecx258j;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55648];
  v256 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3374) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v256,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258i) = *(_BYTE *)(v4 + 3479);
  *(_DWORD *)&aP3[8] = edx258i;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55640];
  v258 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3479) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v258,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(eax258j) = *(_BYTE *)(v4 + 3387);
  *(_DWORD *)&aP3[8] = eax258j;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55624];
  v260 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3387) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v260,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3436);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55600];
  v261 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3436) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v261,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  LOBYTE(v271) = *(_BYTE *)(v4 + 3480);
  *(_DWORD *)&aP3[8] = v271;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55588];
  v263 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3480) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v263,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3440);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55572];
  v264 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3440) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v264,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3444);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55556];
  v265 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3444) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v265,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(double *)&aP3[4] = *(float *)(v4 + 3448);
  *(_DWORD *)aP3 = &stru_830620.__pad_579C[55540];
  v266 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(float *)(v4 + 3448) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v266,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  *(double *)&aP3[4] = *(float *)(v4 + 3452);
  *(_DWORD *)aP3 = &stru_830620.__pad_579C[55524];
  v267 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(float *)(v4 + 3452) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v267,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3456);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55508];
  v268 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3456) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v268,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(double *)&aP3[4] = *(float *)(v4 + 3460);
  *(_DWORD *)aP3 = &stru_830620.__pad_579C[55492];
  v269 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(float *)(v4 + 3460) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v269,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  *(double *)&aP3[4] = *(float *)(v4 + 3464);
  *(_DWORD *)aP3 = &stru_830620.__pad_579C[55476];
  v270 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(float *)(v4 + 3464) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v270,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  LOBYTE(v280) = *(_BYTE *)(v4 + 3468);
  *(_DWORD *)&aP3[8] = v280;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55456];
  v272 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3468) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v272,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3472);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55436];
  v273 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3472) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v273,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  LOBYTE(edx258k) = *(_BYTE *)(v4 + 3476);
  *(_DWORD *)&aP3[8] = edx258k;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55428];
  v275 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3476) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v275,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(v285) = *(_BYTE *)(v4 + 3477);
  *(_DWORD *)&aP3[8] = v285;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55416];
  v277 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3477) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v277,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(v287) = *(_BYTE *)(v4 + 1728);
  *(_DWORD *)&aP3[8] = v287;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55396];
  v279 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 1728) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v279,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(v289) = *(_BYTE *)(v4 + 1729);
  *(_DWORD *)&aP3[8] = v289;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55368];
  v281 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 1729) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v281,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(v291) = *(_BYTE *)(v4 + 3234);
  *(_DWORD *)&aP3[8] = v291;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55352];
  v283 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3234) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v283,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = ReadPointerFromECX4((void *)(v4 + 3236));
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55336];
  v284 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258n = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (unsigned __int8 *)v284,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A30((_DWORD *)(v4 + 3236), eax258n);
  *(_DWORD *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717A70((_DWORD *)(v4 + 3236));
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55312];
  v286 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258o = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (unsigned __int8 *)v286,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A50((_DWORD *)(v4 + 3236), eax258o);
  *(_DWORD *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717AD0((_DWORD *)(v4 + 3236));
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55292];
  v288 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258p = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (unsigned __int8 *)v288,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717AB0((_DWORD *)(v4 + 3236), eax258p);
  *(_DWORD *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717AA0((_DWORD *)(v4 + 3236));
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55272];
  v290 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  v300 = INIClass::ReadInt_Overwrite((int)aP0, (unsigned __int8 *)v290, *(CCINIClass **)&aP3[4], *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A80((_DWORD *)(v4 + 3236), v300);
  qmemcpy((void *)(v4 + 3256), (const void *)(v4 + 3236), 0x14u);
  *(_DWORD *)&aP3[8] = ReadPointerFromECX4((void *)(v4 + 3236));
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55256];
  v292 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  v302 = INIClass::ReadInt_Overwrite((int)aP0, (unsigned __int8 *)v292, *(CCINIClass **)&aP3[4], *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A30((_DWORD *)(v4 + 3256), v302);
  *(_DWORD *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717A70((_DWORD *)(v4 + 3236));
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55232];
  v294 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258s = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (unsigned __int8 *)v294,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A50((_DWORD *)(v4 + 3256), eax258s);
  *(_DWORD *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717AD0((_DWORD *)(v4 + 3236));
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55212];
  v296 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258t = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (unsigned __int8 *)v296,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717AB0((_DWORD *)(v4 + 3256), eax258t);
  *(_DWORD *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717AA0((_DWORD *)(v4 + 3236));
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55192];
  v298 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  v308 = INIClass::ReadInt_Overwrite((int)aP0, (unsigned __int8 *)v298, *(CCINIClass **)&aP3[4], *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A80((_DWORD *)(v4 + 3256), v308);
  LOBYTE(ecx258l) = *(_BYTE *)(v4 + 3371);
  *(_DWORD *)&aP3[8] = ecx258l;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55172];
  v301 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3371) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v301,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258m) = *(_BYTE *)(v4 + 3517);
  *(_DWORD *)&aP3[8] = edx258m;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55160];
  v303 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3517) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v303,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3520);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55148];
  v304 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3520) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v304,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3524);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55132];
  v305 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3524) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v305,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3528);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55116];
  v306 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3528) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v306,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3532);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55100];
  v307 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  v317 = INIClass::ReadInt_Overwrite((int)aP0, (unsigned __int8 *)v307, *(CCINIClass **)&aP3[4], *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = v4 + 668;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55080];
  *(_DWORD *)(v4 + 3532) = v317;
  v309 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  Abilities = (CCINIClass *)INIEntry::ReadAbilities(
                              (unsigned __int8 ***)aP0,
                              (CCINIClass *)&aP2.unknown30,
                              (CCINIClass *)v309,
                              *(unsigned __int8 **)&aP3[4],
                              *(int *)&aP3[8]);
  ObjectTypeClass::loadTypeMember_57179D0((_DWORD *)(v4 + 668), (WeaponTypeClass *)aP2.sectionHead, Abilities);
  nullsub_86();
  nullsub_86();
  *(_DWORD *)&aP3[8] = v4 + 686;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[55064];
  v311 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  v321 = (CCINIClass *)INIEntry::ReadAbilities(
                         (unsigned __int8 ***)aP0,
                         (CCINIClass *)&aP2.unknown30,
                         (CCINIClass *)v311,
                         *(unsigned __int8 **)&aP3[4],
                         *(int *)&aP3[8]);
  ObjectTypeClass::loadTypeMember_57179D0((_DWORD *)(v4 + 686), (WeaponTypeClass *)aP2.sectionHead, v321);
  nullsub_86();
  nullsub_86();
  if ( *(double *)(v4 + 712) == 0.0 )
  {
    *(_DWORD *)aP2.__pad_0 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4160);
    aP2.headNode[0] = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4164);
  }
  else
  {
    eax260 = *(_DWORD *)(v4 + 716);
    *(_DWORD *)aP2.__pad_0 = *(_DWORD *)(v4 + 712);
    aP2.headNode[0] = eax260;
  }
  *(_DWORD *)&aP3[8] = aP2.headNode[0];
  *(_DWORD *)&aP3[4] = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)aP3 = &stru_830620.__pad_579C[55036];
  v314 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 712) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v314,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  if ( *(double *)(v4 + 720) == 0.0 )
  {
    *(_DWORD *)aP2.__pad_0 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4168);
    aP2.headNode[0] = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4172);
  }
  else
  {
    v324 = *(_DWORD *)(v4 + 724);
    *(_DWORD *)aP2.__pad_0 = *(_DWORD *)(v4 + 720);
    aP2.headNode[0] = v324;
  }
  *(_DWORD *)&aP3[8] = aP2.headNode[0];
  *(_DWORD *)&aP3[4] = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)aP3 = &stru_830620.__pad_579C[55004];
  v316 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 720) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v316,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  if ( *(double *)(v4 + 728) == 0.0 )
  {
    *(_DWORD *)aP2.__pad_0 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4176);
    aP2.headNode[0] = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4180);
  }
  else
  {
    v326 = *(_DWORD *)(v4 + 732);
    *(_DWORD *)aP2.__pad_0 = *(_DWORD *)(v4 + 728);
    aP2.headNode[0] = v326;
  }
  *(_DWORD *)&aP3[8] = aP2.headNode[0];
  *(_DWORD *)&aP3[4] = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)aP3 = &stru_830620.__pad_579C[54972];
  v318 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 728) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v318,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  if ( *(double *)(v4 + 736) == 0.0 )
  {
    *(_DWORD *)aP2.__pad_0 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4184);
    aP2.headNode[0] = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4188);
  }
  else
  {
    v319 = *(CCINIClass **)(v4 + 740);
    *(_DWORD *)aP2.__pad_0 = *(_DWORD *)(v4 + 736);
    aP2.headNode[0] = (int)v319;
  }
  *(_DWORD *)&aP3[8] = aP2.headNode[0];
  *(_DWORD *)&aP3[4] = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)aP3 = &stru_830620.__pad_579C[54944];
  v320 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 736) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v320,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  if ( *(double *)(v4 + 744) == 0.0 )
  {
    *(_DWORD *)aP2.__pad_0 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4192);
    aP2.headNode[0] = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4196);
  }
  else
  {
    ecx272 = *(_DWORD *)(v4 + 748);
    *(_DWORD *)aP2.__pad_0 = *(_DWORD *)(v4 + 744);
    aP2.headNode[0] = ecx272;
  }
  *(_DWORD *)&aP3[8] = aP2.headNode[0];
  *(_DWORD *)&aP3[4] = *(_DWORD *)aP2.__pad_0;
  *(_DWORD *)aP3 = &stru_830620.__pad_579C[54916];
  v322 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 744) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v322,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  edx273 = *(_DWORD *)(v4 + 704);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 708);
  *(_DWORD *)&aP3[4] = edx273;
  *(_DWORD *)aP3 = &stru_830620.__pad_579C[54896];
  v323 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 704) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v323,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  LOBYTE(eax273) = *(_BYTE *)(v4 + 3516);
  *(_DWORD *)&aP3[8] = eax273;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54872];
  v325 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3516) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v325,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx273) = *(_BYTE *)(v4 + 3500);
  *(_DWORD *)&aP3[8] = ecx273;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54860];
  v327 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3500) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374.__pad_579C[22128],
                            (unsigned __int8 *)v327,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_BYTE *)(v4 + 3228) = 0;
  v328 = *(ObjectClass **)(v4 + 2200);
  if ( v328 && v328->location[2] > 0 )
    *(_BYTE *)(v4 + 3228) = 1;
  *(_DWORD *)&aP3[8] = Ext;
  v329 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  _makepath(aP4.__pad_20, 0, 0, (ObjectClass *)v329, *(const char **)&aP3[8]);
  if ( *(_BYTE *)(v4 + 168) && *(_DWORD *)(v4 + 164) )
  {
    __3_YAXPAX_Z(*(void **)(v4 + 164));
    *(_DWORD *)(v4 + 164) = 0;
    *(_BYTE *)(v4 + 168) = 0;
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) != 7 )
  {
    LOBYTE(v340) = 0;
    *(_DWORD *)(v4 + 164) = SearchMIXFile(aP4.__pad_20, v340);
  }
  *(_DWORD *)&aP3[8] = 32;
  *(_DWORD *)&aP3[4] = v4 + 3536;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_824238.sectionCount;
  v330 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  INIClass::GetString(
    (unsigned __int8 ***)&stru_87C374.__pad_579C[22128],
    v330,
    *(unsigned __int8 **)&v412.IsInitialized,
    *(INIClass **)aP3,
    *(INIClass **)&aP3[4],
    *(int *)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717820(v4);
  if ( FileSystem::ProcessNextFileExtension() > 1 )
  {
    *(_DWORD *)&aP3[8] = &stru_830620.__pad_579C[54788];
    Debug::Log();
    ExitProgram((void *)0xFFFFFFFF);
  }
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 1824);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54772];
  v331 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(_DWORD *)(v4 + 1824) = INIClass::ReadInt_Overwrite(
                             (int)&stru_87C374.__pad_579C[22128],
                             (unsigned __int8 *)v331,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 1816);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54760];
  v332 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(_DWORD *)(v4 + 1816) = INIClass::ReadInt_Overwrite(
                             (int)&stru_87C374.__pad_579C[22128],
                             (unsigned __int8 *)v332,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  LOBYTE(v344) = *(_BYTE *)(v4 + 3279);
  *(_DWORD *)&aP3[8] = v344;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54748];
  v334 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(_BYTE *)(v4 + 3279) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374.__pad_579C[22128],
                            (unsigned __int8 *)v334,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(v346) = *(_BYTE *)(v4 + 3363);
  *(_DWORD *)&aP3[8] = v346;
  *(_DWORD *)&aP3[4] = &unk_818610;
  v336 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(_BYTE *)(v4 + 3363) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374.__pad_579C[22128],
                            (unsigned __int8 *)v336,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(eax283) = *(_BYTE *)(v4 + 3365);
  *(_DWORD *)&aP3[8] = eax283;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54736];
  v338 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(_BYTE *)(v4 + 3365) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374.__pad_579C[22128],
                            (unsigned __int8 *)v338,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2044);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54724];
  v339 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(_DWORD *)(v4 + 2044) = INIClass::ReadInt_Overwrite(
                             (int)&stru_87C374.__pad_579C[22128],
                             (unsigned __int8 *)v339,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  LOBYTE(edx283b) = *(_BYTE *)(v4 + 3518);
  *(_DWORD *)&aP3[8] = edx283b;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54704];
  v341 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(_BYTE *)(v4 + 3518) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374.__pad_579C[22128],
                            (unsigned __int8 *)v341,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(v353) = *(_BYTE *)(v4 + 3519);
  *(_DWORD *)&aP3[8] = v353;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54684];
  v343 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  al283 = INIClass::ReadBool_Overwrite(
            (int)&stru_87C374.__pad_579C[22128],
            (unsigned __int8 *)v343,
            *(CCINIClass **)&aP3[4],
            aP3[8]);
  *(_DWORD *)&aP3[8] = 25;
  *(_DWORD *)&aP3[4] = &aP4;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[54676];
  *(_BYTE *)(v4 + 3519) = al283;
  v345 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  INIClass::GetString(
    (unsigned __int8 ***)&stru_87C374.__pad_579C[22128],
    v345,
    *(unsigned __int8 **)&v412.IsInitialized,
    *(INIClass **)aP3,
    *(INIClass **)&aP3[4],
    *(int *)&aP3[8]);
  if ( !strlen(aP4.__pad_0) )
    goto LABEL_286;
  v358 = (char *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 1750));
  *(_DWORD *)&aP3[8] = Ext;
  strcpy(v358, aP4.__pad_0);
  v347 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 1750));
  _makepath(aP4.__pad_20, 0, 0, (ObjectClass *)v347, *(const char **)&aP3[8]);
  if ( !*(_DWORD *)(v4 + 1776) )
  {
    LOBYTE(v360) = 0;
    *(_DWORD *)(v4 + 1776) = SearchMIXFile(aP4.__pad_20, v360);
LABEL_286:
    if ( !*(_DWORD *)(v4 + 1776) )
    {
      LOBYTE(edx283) = 0;
      *(_DWORD *)(v4 + 1776) = SearchMIXFile(g_Str_File_XXICON_SHP, edx283);
    }
  }
  *(_DWORD *)&aP3[8] = 25;
  *(_DWORD *)&aP3[4] = &aP4;
  *(_DWORD *)aP3 = &stru_87C374.__pad_579C[33876];
  *(_DWORD *)&v412.IsInitialized = &stru_830620.__pad_579C[54664];
  v348 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  INIClass::GetString(
    (unsigned __int8 ***)&stru_87C374.__pad_579C[22128],
    v348,
    *(unsigned __int8 **)&v412.IsInitialized,
    *(INIClass **)aP3,
    *(INIClass **)&aP3[4],
    *(int *)&aP3[8]);
  if ( strlen(aP4.__pad_0) )
  {
    edx289a = (char *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 1781));
    *(_DWORD *)&aP3[8] = Ext;
    strcpy(edx289a, aP4.__pad_0);
    v350 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 1781));
    _makepath(aP4.__pad_20, 0, 0, (ObjectClass *)v350, *(const char **)&aP3[8]);
    if ( !*(_DWORD *)(v4 + 1808) )
    {
      LOBYTE(edx289) = 0;
      *(_DWORD *)(v4 + 1808) = SearchMIXFile(aP4.__pad_20, edx289);
    }
  }
  if ( HouseClass::HasPower((_DWORD *)v4) )
  {
    if ( *(int *)(v4 + 2060) > 0 )
    {
      aP2.headNode[2] = 1;
      v351 = (WeaponTypeClass *)(v4 + 2204);
      do
      {
        sprintf(
          (char *const)aP2.sectionHead,
          (ObjectClass *)&stru_830620.__pad_579C[58708],
          (INIClass *)aP2.headNode[2]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620.__pad_579C[54656], (INIClass *)aP2.sectionHead);
        *(_DWORD *)&aP3[8] = v351;
        *(_DWORD *)&aP3[4] = String;
        v352 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        Point3D_Overwrite = INIClass::ReadPoint3D_Overwrite(
                              &stru_87C374.__pad_579C[22128],
                              (CCINIClass *)&aP2.unknown30,
                              (unsigned __int8 *)v352,
                              *(int *)&aP3[4],
                              *(_DWORD **)&aP3[8]);
        *(_DWORD *)v351->__pad_0 = *Point3D_Overwrite;
        *(_DWORD *)&v351->__pad_0[4] = Point3D_Overwrite[1];
        *(_DWORD *)&v351->__pad_0[8] = Point3D_Overwrite[2];
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620.__pad_579C[54640], (INIClass *)aP2.sectionHead);
        *(_DWORD *)&aP3[8] = *(_DWORD *)&v351->__pad_0[12];
        *(_DWORD *)&aP3[4] = String;
        v354 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        *(_DWORD *)&v351->__pad_0[12] = INIClass::ReadInt_Overwrite(
                                          (int)&stru_87C374.__pad_579C[22128],
                                          (unsigned __int8 *)v354,
                                          *(CCINIClass **)&aP3[4],
                                          *(INIClass **)&aP3[8]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620.__pad_579C[54620], (INIClass *)aP2.sectionHead);
        *(_DWORD *)&aP3[8] = v351->uniqueId;
        *(_DWORD *)&aP3[4] = String;
        v355 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        v351->uniqueId = INIClass::ReadInt_Overwrite(
                           (int)&stru_87C374.__pad_579C[22128],
                           (unsigned __int8 *)v355,
                           *(CCINIClass **)&aP3[4],
                           *(INIClass **)&aP3[8]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620.__pad_579C[54604], (INIClass *)aP2.sectionHead);
        LOBYTE(edx294) = v351->abstractFlags;
        *(_DWORD *)&aP3[8] = edx294;
        *(_DWORD *)&aP3[4] = String;
        v357 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        al294 = INIClass::ReadBool_Overwrite(
                  (int)&stru_87C374.__pad_579C[22128],
                  (unsigned __int8 *)v357,
                  *(CCINIClass **)&aP3[4],
                  aP3[8]);
        *(_DWORD *)&aP3[8] = aP2.headNode[2];
        *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[58692];
        *(_DWORD *)aP3 = aP2.sectionHead;
        LOBYTE(v351->abstractFlags) = al294;
        sprintf(*(char *const *)aP3, *(ObjectClass **)&aP3[4], *(INIClass **)&aP3[8]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620.__pad_579C[54656], (INIClass *)aP2.sectionHead);
        *(_DWORD *)&aP3[8] = v351;
        *(_DWORD *)&aP3[4] = String;
        v359 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        v374 = INIClass::ReadPoint3D_Overwrite(
                 &stru_87C374.__pad_579C[22128],
                 &aP2,
                 (unsigned __int8 *)v359,
                 *(int *)&aP3[4],
                 *(_DWORD **)&aP3[8]);
        *(_DWORD *)&v351[1].CellRangefinding = *v374;
        *(_DWORD *)&v351[1].TerrainFire = v374[1];
        v351[1].DisguiseFakeBlinkTime = v374[2];
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620.__pad_579C[54640], (INIClass *)aP2.sectionHead);
        *(_DWORD *)&aP3[8] = *(_DWORD *)&v351->__pad_0[12];
        *(_DWORD *)&aP3[4] = String;
        v361 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        *(_DWORD *)&v351[1].InfiniteMindControl = INIClass::ReadInt_Overwrite(
                                                    (int)&stru_87C374.__pad_579C[22128],
                                                    (unsigned __int8 *)v361,
                                                    *(CCINIClass **)&aP3[4],
                                                    *(INIClass **)&aP3[8]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620.__pad_579C[54620], (INIClass *)aP2.sectionHead);
        *(_DWORD *)&aP3[8] = v351->uniqueId;
        *(_DWORD *)&aP3[4] = String;
        v362 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        *(_DWORD *)&v351[1].Suicide = INIClass::ReadInt_Overwrite(
                                        (int)&stru_87C374.__pad_579C[22128],
                                        (unsigned __int8 *)v362,
                                        *(CCINIClass **)&aP3[4],
                                        *(INIClass **)&aP3[8]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620.__pad_579C[54604], (INIClass *)aP2.sectionHead);
        LOBYTE(edx294a) = v351->abstractFlags;
        *(_DWORD *)&aP3[8] = edx294a;
        *(_DWORD *)&aP3[4] = String;
        v364 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        v351[1].Charges = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374.__pad_579C[22128],
                            (unsigned __int8 *)v364,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
        v365 = *(CCINIClass **)(v4 + 2060);
        ++aP2.headNode[2];
        v351 = (WeaponTypeClass *)((char *)v351 + 28);
      }
      while ( aP2.headNode[2] - 1 < (int)v365 );
    }
  }
  else
  {
    *(_DWORD *)&aP3[8] = v4 + 2204;
    *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54588];
    v366 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    eax296 = INIClass::ReadPoint3D_Overwrite(
               &stru_87C374.__pad_579C[22128],
               (CCINIClass *)&aP2.unknown30,
               (unsigned __int8 *)v366,
               *(int *)&aP3[4],
               *(_DWORD **)&aP3[8]);
    *(_DWORD *)(v4 + 2204) = *eax296;
    *(_DWORD *)(v4 + 2208) = eax296[1];
    *(_DWORD *)(v4 + 2212) = eax296[2];
    *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2216);
    *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54572];
    v368 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(_DWORD *)(v4 + 2216) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374.__pad_579C[22128],
                               (unsigned __int8 *)v368,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2220);
    *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54552];
    v369 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(_DWORD *)(v4 + 2220) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374.__pad_579C[22128],
                               (unsigned __int8 *)v369,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(_DWORD *)&aP3[8] = v4 + 2232;
    *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54532];
    v370 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    v385 = INIClass::ReadPoint3D_Overwrite(
             &stru_87C374.__pad_579C[22128],
             (CCINIClass *)&aP2.unknown30,
             (unsigned __int8 *)v370,
             *(int *)&aP3[4],
             *(_DWORD **)&aP3[8]);
    *(_DWORD *)(v4 + 2232) = *v385;
    *(_DWORD *)(v4 + 2236) = v385[1];
    *(_DWORD *)(v4 + 2240) = v385[2];
    *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2244);
    *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54516];
    v372 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(_DWORD *)(v4 + 2244) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374.__pad_579C[22128],
                               (unsigned __int8 *)v372,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2248);
    *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54496];
    v373 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    eax296b = INIClass::ReadInt_Overwrite(
                (int)&stru_87C374.__pad_579C[22128],
                (unsigned __int8 *)v373,
                *(CCINIClass **)&aP3[4],
                *(INIClass **)&aP3[8]);
    *(_DWORD *)&aP3[8] = v4 + 2204;
    *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54476];
    *(_DWORD *)(v4 + 2248) = eax296b;
    v375 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    eax296c = INIClass::ReadPoint3D_Overwrite(
                &stru_87C374.__pad_579C[22128],
                (CCINIClass *)&aP2.unknown30,
                (unsigned __int8 *)v375,
                *(int *)&aP3[4],
                *(_DWORD **)&aP3[8]);
    *(_DWORD *)(v4 + 2712) = *eax296c;
    *(_DWORD *)(v4 + 2716) = eax296c[1];
    *(_DWORD *)(v4 + 2720) = eax296c[2];
    *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2216);
    *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54456];
    v377 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(_DWORD *)(v4 + 2724) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374.__pad_579C[22128],
                               (unsigned __int8 *)v377,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2220);
    *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54432];
    v378 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(_DWORD *)(v4 + 2728) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374.__pad_579C[22128],
                               (unsigned __int8 *)v378,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(_DWORD *)&aP3[8] = v4 + 2232;
    *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54408];
    v379 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    v394 = INIClass::ReadPoint3D_Overwrite(
             &stru_87C374.__pad_579C[22128],
             (CCINIClass *)&aP2.unknown30,
             (unsigned __int8 *)v379,
             *(int *)&aP3[4],
             *(_DWORD **)&aP3[8]);
    *(_DWORD *)(v4 + 2740) = *v394;
    *(_DWORD *)(v4 + 2744) = v394[1];
    *(_DWORD *)(v4 + 2748) = v394[2];
    *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2244);
    *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54388];
    v381 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(_DWORD *)(v4 + 2752) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374.__pad_579C[22128],
                               (unsigned __int8 *)v381,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2248);
    *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54364];
    v382 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(_DWORD *)(v4 + 2756) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374.__pad_579C[22128],
                               (unsigned __int8 *)v382,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
  }
  v392 = 0;
  aP2.headNode[2] = v4 + 2140;
  do
  {
    sprintf((char *const)aP2.sectionHead, (ObjectClass *)&stru_830620.__pad_579C[54348], v392);
    *(_DWORD *)&aP3[8] = v4 + 2204;
    *(_DWORD *)&aP3[4] = aP2.sectionHead;
    v384 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    v399 = INIClass::ReadPoint3D_Overwrite(
             &stru_87C374.__pad_579C[22128],
             (CCINIClass *)&aP2.unknown30,
             (unsigned __int8 *)v384,
             *(int *)&aP3[4],
             *(_DWORD **)&aP3[8]);
    v400 = aP2.headNode[2];
    v392 = (INIClass *)((char *)v392 + 1);
    *(_DWORD *)aP2.headNode[2] = *v399;
    *(_DWORD *)(v400 + 4) = v399[1];
    *(_DWORD *)(v400 + 8) = v399[2];
    v401 = v400 + 12;
    aP2.headNode[2] = v401;
  }
  while ( (int)v392 < 5 );
  LOBYTE(v401) = *(_BYTE *)(v4 + 2052);
  *(_DWORD *)&aP3[8] = v401;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54320];
  v388 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  v403 = INIClass::ReadBool_Overwrite(
           (int)&stru_87C374.__pad_579C[22128],
           (unsigned __int8 *)v388,
           *(CCINIClass **)&aP3[4],
           aP3[8]);
  *(_DWORD *)&aP3[8] = v4 + 3504;
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54300];
  *(_BYTE *)(v4 + 2052) = v403;
  v390 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  v405 = INIClass::ReadPoint3D_Overwrite(
           &stru_87C374.__pad_579C[22128],
           (CCINIClass *)&aP2.unknown30,
           (unsigned __int8 *)v390,
           *(int *)&aP3[4],
           *(_DWORD **)&aP3[8]);
  *(_DWORD *)(v4 + 3504) = *v405;
  *(_DWORD *)(v4 + 3508) = v405[1];
  *(_DWORD *)(v4 + 3512) = v405[2];
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 1460);
  *(_DWORD *)&aP3[4] = &stru_830620.__pad_579C[54284];
  eax299c = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  TypeMember_5474E40 = ObjectTypeClass::loadTypeMember_5474E40(
                         (unsigned __int8 ***)aP0,
                         eax299c,
                         *(unsigned __int8 **)&aP3[4],
                         *(int *)&aP3[8]);
  *(_DWORD *)(v4 + 1460) = TypeMember_5474E40;
  *(_BYTE *)(v4 + 3372) = TypeMember_5474E40 == 6;
  if ( *(_BYTE *)(v4 + 566) )
  {
    VoxelAnimType::LoadAnim((char *)v4);
  }
  else if ( *(_BYTE *)(v4 + 3233) )
  {
    Turret::LoadVoxelTurretAndBarrel((void *)v4);
  }
  v408 = *(_BYTE **)(v4 + 176);
  if ( v408 )
  {
    if ( ObjectTypeClass::loadTypeMember_5717AE0(v408) )
    {
      Info = VoxelSection::GetInfo(*(_DWORD **)(v4 + 176), 0, 0);
      *(_DWORD *)&aP3[8] = 0;
      v410 = *(unsigned __int8 *)(Info + 161);
      *(_DWORD *)&aP3[4] = 0;
      *(_DWORD *)aP2.__pad_0 = v410;
      *(double *)(v4 + 864) = (double)v410 * 0.5 + 0.5;
      *(_DWORD *)aP2.__pad_0 = *(unsigned __int8 *)(VoxelSection::GetInfo(
                                                      *(_DWORD **)(v4 + 176),
                                                      *(SomeVoxelCache **)&aP3[4],
                                                      *(SomeVoxelCache **)&aP3[8])
                                                  + 160);
      *(double *)(v4 + 872) = (double)*(int *)aP2.__pad_0 * 0.5;
    }
  }
  return 1;
}



// ==== 0x00716150  TechnoTypeClass::ValidatePath  this=TechnoTypeClass  sig=csp ====
char __thiscall BuildingClass::ValidatePath(IUnknown *this, _WORD *a2, IUnknown *aP3)
{
  _WORD *v6; // esi
  bool v7; // bl
  _WORD *v8; // eax
  void *v9; // eax
  void *v10; // eax
  int v11; // [esp-24h] [ebp-38h]
  IUnknown *v12; // [esp-14h] [ebp-28h]
  char v13; // [esp+Bh] [ebp-9h]
  int v14; // [esp+Ch] [ebp-8h]
  int v15; // [esp+10h] [ebp-4h] BYREF
  char v16; // [esp+18h] [ebp+4h]

  if ( *a2 == *(_WORD *)&MEMORY[0xB077F8].__pad_579C[7108] && a2[1] == *(_WORD *)&MEMORY[0xB077F8].__pad_579C[7110] ) /*0x716173*/
    return 0; /*0x71617c*/
  v6 = (_WORD *)(*(int (__thiscall **)(IUnknown *, int))(this->field_0 + 144))(this, 1); /*0x71618d*/
  v13 = 0; /*0x716199*/
  v7 = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 44))(this) == 7; /*0x71619e*/
  v16 = 0; /*0x7161a3*/
  while ( v6 ) /*0x7161a8*/
  {
    if ( *v6 == 0x7FFF && v6[1] == 0x7FFF ) /*0x7161bb*/
      break; /*0x7161bb*/
    v8 = v6; /*0x7161c5*/
    v6 += 2; /*0x7161c7*/
    LOWORD(v14) = *v8 + *a2; /*0x7161d5*/
    HIWORD(v14) = a2[1] + v8[1]; /*0x7161da*/
    v15 = v14; /*0x7161e5*/
    if ( v7 ) /*0x7161e9*/
    {
      v12 = *(IUnknown **)&this->__pad_524[344]; /*0x7161fb*/
      v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v15); /*0x716202*/
      if ( CellClass::IsPassable((int)v9, v12, this, aP3) ) /*0x716209*/
        goto LABEL_12; /*0x716210*/
      v13 = 1; /*0x716212*/
    }
    else
    {
      v11 = *(_DWORD *)&this->__pad_524[344]; /*0x71622f*/
      v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v15); /*0x716236*/
      if ( Cell::IsBuildable((int)v10, v11, 0, 0, (IUnknown *)0xFFFFFFFF, 0, (IUnknown *)0xFFFFFFFF, (IUnknown *)1) ) /*0x71623d*/
      {
LABEL_12:
        v16 = 1; /*0x71624d*/
        continue; /*0x71624d*/
      }
      v13 = 1; /*0x716246*/
    }
  }
  if ( v7 && *(_DWORD *)&this->__pad_DFC[92] ) /*0x716260*/
    return v16; /*0x71626a*/
  else
    return v13 == 0; /*0x716280*/
}


// ==== 0x00716290  TechnoTypeClass::GetModeSpecificValue  this=TechnoTypeClass  sig=csp ====
int __thiscall ObjectClass_GetModeSpecificValue(int *this)
{
  int result; // eax

  switch ( this->PipScale )
  {
    case 1:
      result = this->q1A1; /*0x7162a9*/
      break; /*0x7162af*/
    case 2:
      result = (*(int (__thiscall **)(int *))(*this + 44))(this) != 16 ? 5 : 3;
      break; /*0x7162cf*/
    case 3:
      result = this->Passengers; /*0x7162d0*/
      break; /*0x7162d6*/
    case 4:
      result = 10; /*0x7162a3*/
      break; /*0x7162a8*/
    case 5:
      result = *(_DWORD *)(this->Weapon + 164); /*0x7162b6*/
      break; /*0x7162bc*/
    default:
      result = 0; /*0x7162d7*/
      break; /*0x7162d7*/
  }
  return result; /*0x7162a8*/
}


// ==== 0x007162F0  TechnoTypeClass::SaveLoad_Prefix  this=TechnoTypeClass  sig=csp ====
int __stdcall TechnoTypeClass::SaveLoad_Prefix(ObjectTypeClass *aP0, int aP1)
{
  char *v3; // ebp
  int result; // eax
  int j; // ebp
  int k; // ebx
  int m; // ebx
  int n; // ebx
  int ii; // ebx
  int jj; // ebx
  int kk; // ebx
  int mm; // ebx
  int nn; // ebx
  int i1; // ebx
  int i2; // ebx
  int i3; // ebx
  int i4; // ebx
  int i5; // ebx
  int i6; // ebx
  int i7; // ebx
  int i8; // ebx
  int i9; // ebx
  int i10; // ebx
  int i11; // esi
  int i12; // esi
  int i13; // esi
  int i14; // esi
  int i15; // esi
  MouseClass *v29; // esi
  int v30; // ebx
  MouseClass *v31; // esi
  int v32; // ebx
  int i16; // esi
  int i17; // esi
  IUnknown *v35; // edx
  IUnknown *v36; // edx
  int v37; // eax
  IUnknown *v38; // edx
  IUnknown *v39; // edx
  int v40; // [esp+280h] [ebp-210h] BYREF
  int v41; // [esp+284h] [ebp-20Ch] BYREF
  int i; // [esp+288h] [ebp-208h]
  ObjectClass Filename; // [esp+28Ch] [ebp-204h] BYREF
  char Buffer[260]; // [esp+38Ch] [ebp-104h] BYREF

  v3 = &aP0[1].__pad_14D[7]; /*0x716307*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[1].__pad_14D[7] + 12))(&aP0[1].__pad_14D[7]); /*0x71630f*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[1].Name[28] + 12))(&aP0[1].Name[28]); /*0x716320*/
  (*(void (__thiscall **)(Armor *))(aP0[2].Armor + 12))(&aP0[2].Armor); /*0x71632f*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[1].__pad_14D[51] + 12))(&aP0[1].__pad_14D[51]); /*0x71633e*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[1].__pad_14D[79] + 12))(&aP0[1].__pad_14D[79]); /*0x71634d*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[1].__pad_14D[107] + 12))(&aP0[1].__pad_14D[107]); /*0x71635c*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[1].__pad_14D[135] + 12))(&aP0[1].__pad_14D[135]); /*0x71636b*/
  (*(void (__thiscall **)(int *))(aP0[1].CrushSound + 12))(&aP0[1].CrushSound); /*0x71637a*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[1].ImageFile[20] + 12))(&aP0[1].ImageFile[20]); /*0x716389*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[1].AlphaImageFile[21] + 12))(&aP0[1].AlphaImageFile[21]); /*0x716398*/
  (*(void (__thiscall **)(int *))(aP0[1].VoxelCaches[0] + 12))(aP0[1].VoxelCaches); /*0x7163a7*/
  (*(void (__thiscall **)(int *))(aP0[1].VoxelCaches[7] + 12))(&aP0[1].VoxelCaches[7]); /*0x7163b6*/
  (*(void (__thiscall **)(int *))(aP0[1].VoxelCaches[14] + 12))(&aP0[1].VoxelCaches[14]); /*0x7163c5*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[2].ImageFile[12] + 12))(&aP0[2].ImageFile[12]); /*0x7163d4*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&aP0[2].AlphaImageFile[13] + 12))(&aP0[2].AlphaImageFile[13]); /*0x7163e3*/
  (*(void (__thiscall **)(int *))(aP0[2].ChargerBarrels[3] + 12))(&aP0[2].ChargerBarrels[3]); /*0x7163f2*/
  (*(void (__thiscall **)(int *))(aP0[2].ChargerBarrels[10] + 12))(&aP0[2].ChargerBarrels[10]); /*0x716401*/
  (*(void (__thiscall **)(Armor *))(aP0[1].Armor + 12))(&aP0[1].Armor); /*0x716410*/
  result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1); /*0x71641c*/
  if ( result >= 0 ) /*0x716423*/
  {
    ObjectPtr::RegisterForTracking( /*0x716435*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_14D[35]);
    ObjectPtr::RegisterForTracking( /*0x716446*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_14D[39]);
    ObjectPtr::RegisterForTracking( /*0x716457*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_14D[43]);
    ObjectPtr::RegisterForTracking( /*0x716468*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].LineTrailColor[1]);
    ObjectPtr::RegisterForTracking( /*0x716479*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].VoxelCaches[2]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[5].Name[16]); /*0x71648a*/
    ObjectPtr::RegisterForTracking( /*0x71649b*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[5].UINameLabel[31]);
    ObjectPtr::RegisterForTracking( /*0x7164ac*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[5].__pad_24[16]);
    ObjectPtr::RegisterForTracking( /*0x7164bd*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].ChargerTurrets[16]);
    ObjectPtr::RegisterForTracking( /*0x7164ce*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].ChargerTurrets[17]);
    ObjectPtr::RegisterForTracking( /*0x7164df*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].__pad_14D[67]);
    ObjectPtr::RegisterForTracking( /*0x7164f0*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].__pad_14D[71]);
    if ( aP0 != (ObjectTypeClass *)-1000 ) /*0x7164f7*/
      TypeList::BuildingTypeConstructor(v3); /*0x7164fb*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x71650c*/
    for ( i = 0; i < v40; ++i ) /*0x71651d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x71652b*/
      DynamicVector::Add_Alt3(v3, (VectorClass *)&v41); /*0x716535*/
    }
    if ( aP0 != (ObjectTypeClass *)-788 ) /*0x71654d*/
      TypeList::VoxelAnimConstructor(&aP0[1].Name[28]); /*0x716551*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x716562*/
    for ( j = 0; j < v40; ++j ) /*0x71656d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x71657b*/
      DynamicVector::Add2(&aP0[1].Name[28], (VectorClass *)&v41); /*0x716585*/
    }
    if ( aP0 != (ObjectTypeClass *)-1476 ) /*0x716599*/
      AnimTypeList::Constructor(&aP0[2].Armor); /*0x71659d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x7165ae*/
    for ( k = 0; k < v40; ++k ) /*0x7165b9*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x7165c7*/
      DynamicVector::Add_Alt4(&aP0[2].Armor, (VectorClass *)&v41); /*0x7165d1*/
    }
    if ( aP0 != (ObjectTypeClass *)-1044 ) /*0x7165e5*/
      TypeList::Construct(&aP0[1].__pad_14D[51]); /*0x7165e9*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x7165fa*/
    for ( m = 0; m < v40; ++m ) /*0x716605*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x716613*/
      DynamicVector::Add_Alt(&aP0[1].__pad_14D[51], (VectorClass *)&v41); /*0x71661d*/
    }
    if ( aP0 != (ObjectTypeClass *)-1072 ) /*0x716631*/
      TypeList::Construct(&aP0[1].__pad_14D[79]); /*0x716635*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x716646*/
    for ( n = 0; n < v40; ++n ) /*0x716651*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x71665f*/
      DynamicVector::Add_Alt(&aP0[1].__pad_14D[79], (VectorClass *)&v41); /*0x716669*/
    }
    if ( aP0 != (ObjectTypeClass *)-1100 ) /*0x71667d*/
      TypeList::Construct(&aP0[1].__pad_14D[107]); /*0x716681*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x716692*/
    for ( ii = 0; ii < v40; ++ii ) /*0x71669d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x7166ab*/
      DynamicVector::Add_Alt(&aP0[1].__pad_14D[107], (VectorClass *)&v41); /*0x7166b5*/
    }
    if ( aP0 != (ObjectTypeClass *)-1128 ) /*0x7166c9*/
      TypeList::Construct(&aP0[1].__pad_14D[135]); /*0x7166cd*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x7166de*/
    for ( jj = 0; jj < v40; ++jj ) /*0x7166e9*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x7166f7*/
      DynamicVector::Add_Alt(&aP0[1].__pad_14D[135], (VectorClass *)&v41); /*0x716701*/
    }
    if ( aP0 != (ObjectTypeClass *)-1156 ) /*0x716715*/
      TypeList::Construct(&aP0[1].CrushSound); /*0x716719*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x71672a*/
    for ( kk = 0; kk < v40; ++kk ) /*0x716735*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x716743*/
      DynamicVector::Add_Alt(&aP0[1].CrushSound, (VectorClass *)&v41); /*0x71674d*/
    }
    if ( aP0 != (ObjectTypeClass *)-1184 ) /*0x716761*/
      TypeList::Construct(&aP0[1].ImageFile[20]); /*0x716765*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x716776*/
    for ( mm = 0; mm < v40; ++mm ) /*0x716781*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x71678f*/
      DynamicVector::Add_Alt(&aP0[1].ImageFile[20], (VectorClass *)&v41); /*0x716799*/
    }
    if ( aP0 != (ObjectTypeClass *)-1212 ) /*0x7167ad*/
      TypeList::Construct(&aP0[1].AlphaImageFile[21]); /*0x7167b1*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x7167c2*/
    for ( nn = 0; nn < v40; ++nn ) /*0x7167cd*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x7167db*/
      DynamicVector::Add_Alt(&aP0[1].AlphaImageFile[21], (VectorClass *)&v41); /*0x7167e5*/
    }
    if ( aP0 != (ObjectTypeClass *)-1240 ) /*0x7167f9*/
      TypeList::Construct(aP0[1].VoxelCaches); /*0x7167fd*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x71680e*/
    for ( i1 = 0; i1 < v40; ++i1 ) /*0x716819*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x716827*/
      DynamicVector::Add_Alt(aP0[1].VoxelCaches, (VectorClass *)&v41); /*0x716831*/
    }
    if ( aP0 != (ObjectTypeClass *)-1268 ) /*0x716845*/
      TypeList::Construct(&aP0[1].VoxelCaches[7]); /*0x716849*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x71685a*/
    for ( i2 = 0; i2 < v40; ++i2 ) /*0x716865*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x716873*/
      DynamicVector::Add_Alt(&aP0[1].VoxelCaches[7], (VectorClass *)&v41); /*0x71687d*/
    }
    if ( aP0 != (ObjectTypeClass *)-1296 ) /*0x716891*/
      TypeList::Construct(&aP0[1].VoxelCaches[14]); /*0x716895*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x7168a6*/
    for ( i3 = 0; i3 < v40; ++i3 ) /*0x7168b1*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x7168bf*/
      DynamicVector::Add_Alt(&aP0[1].VoxelCaches[14], (VectorClass *)&v41); /*0x7168c9*/
    }
    if ( aP0 != (ObjectTypeClass *)-1836 ) /*0x7168dd*/
      AnimTypeList::Constructor(&aP0[2].ImageFile[12]); /*0x7168e1*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x7168f2*/
    for ( i4 = 0; i4 < v40; ++i4 ) /*0x7168fd*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x71690b*/
      DynamicVector::Add_Alt4(&aP0[2].ImageFile[12], (VectorClass *)&v41); /*0x716915*/
    }
    if ( aP0 != (ObjectTypeClass *)-1864 ) /*0x716929*/
      AnimTypeList::Constructor(&aP0[2].AlphaImageFile[13]); /*0x71692d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x71693e*/
    for ( i5 = 0; i5 < v40; ++i5 ) /*0x716949*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x716957*/
      DynamicVector::Add_Alt4(&aP0[2].AlphaImageFile[13], (VectorClass *)&v41); /*0x716961*/
    }
    if ( aP0 != (ObjectTypeClass *)-816 ) /*0x716975*/
      TypeList::Construct(&aP0[1].Armor); /*0x716979*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x71698a*/
    for ( i6 = 0; i6 < v40; ++i6 ) /*0x716995*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x7169a3*/
      DynamicVector::Add_Alt(&aP0[1].Armor, (VectorClass *)&v41); /*0x7169ad*/
    }
    if ( aP0 != (ObjectTypeClass *)-1592 ) /*0x7169c1*/
      TypeList::Construct(&aP0[2].ChargerBarrels[3]); /*0x7169c5*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x7169d6*/
    for ( i7 = 0; i7 < v40; ++i7 ) /*0x7169e1*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x7169ef*/
      DynamicVector::Add_Alt(&aP0[2].ChargerBarrels[3], (VectorClass *)&v41); /*0x7169f9*/
    }
    if ( aP0 != (ObjectTypeClass *)-1620 ) /*0x716a0d*/
      TypeList::Construct(&aP0[2].ChargerBarrels[10]); /*0x716a11*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x716a22*/
    for ( i8 = 0; i8 < v40; ++i8 ) /*0x716a2d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x716a3b*/
      DynamicVector::Add_Alt(&aP0[2].ChargerBarrels[10], (VectorClass *)&v41); /*0x716a45*/
    }
    if ( aP0 != (ObjectTypeClass *)-1912 ) /*0x716a59*/
      TechnoTypeClass::Constructor(&aP0[2].VoxelCaches[3]); /*0x716a5d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x716a6e*/
    for ( i9 = 0; i9 < v40; ++i9 ) /*0x716a79*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x716a87*/
      TypeList::PushBack(&aP0[2].VoxelCaches[3], (VectorClass *)&v41); /*0x716a91*/
    }
    if ( aP0 != (ObjectTypeClass *)-1940 ) /*0x716aa5*/
      TechnoTypeClass::Constructor(&aP0[2].VoxelCaches[10]); /*0x716aa9*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v40, 4, 0); /*0x716aba*/
    for ( i10 = 0; i10 < v40; ++i10 ) /*0x716ac5*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v41, 4, 0); /*0x716ad3*/
      TypeList::PushBack(&aP0[2].VoxelCaches[10], (VectorClass *)&v41); /*0x716add*/
    }
    for ( i11 = 0; i11 < *(_DWORD *)&aP0[1].__pad_14D[23]; ++i11 ) /*0x716af3*/
      ObjectPtr::RegisterForTracking( /*0x716b04*/
        (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
        (MouseClass *)(*(_DWORD *)&aP0[1].__pad_14D[11] + 4 * i11));
    for ( i12 = 0; i12 < *(_DWORD *)&aP0[2].AlphaImageFile[1]; ++i12 ) /*0x716b1e*/
      ObjectPtr::RegisterForTracking( /*0x716b2f*/
        (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
        (MouseClass *)(*(_DWORD *)&aP0[2].ImageFile[16] + 4 * i12));
    for ( i13 = 0; i13 < *(_DWORD *)&aP0[2].Selectable; ++i13 ) /*0x716b49*/
      ObjectPtr::RegisterForTracking( /*0x716b5a*/
        (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
        (MouseClass *)(*(_DWORD *)&aP0[2].AlphaImageFile[17] + 4 * i13));
    for ( i14 = 0; i14 < *(_DWORD *)&aP0[1].Name[44]; ++i14 ) /*0x716b74*/
      ObjectPtr::RegisterForTracking( /*0x716b85*/
        (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
        (MouseClass *)(*(_DWORD *)&aP0[1].Name[32] + 4 * i14));
    for ( i15 = 0; i15 < (int)aP0[2].AlphaImage; ++i15 ) /*0x716b9f*/
      ObjectPtr::RegisterForTracking( /*0x716bb0*/
        (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
        (MouseClass *)(aP0[2].Strength + 4 * i15));
    v29 = (MouseClass *)&aP0[3].ChargerTurrets[8]; /*0x716bc0*/
    v30 = 18; /*0x716bc6*/
    do /*0x716bda*/
    {
      ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], v29); /*0x716bd1*/
      v29 = (MouseClass *)((char *)v29 + 28); /*0x716bd6*/
      --v30; /*0x716bd9*/
    }
    while ( v30 ); /*0x716bda*/
    v31 = (MouseClass *)&aP0[4].UINameLabel[7]; /*0x716bdc*/
    v32 = 18; /*0x716be2*/
    do /*0x716bf6*/
    {
      ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], v31); /*0x716bed*/
      v31 = (MouseClass *)((char *)v31 + 28); /*0x716bf2*/
      --v32; /*0x716bf5*/
    }
    while ( v32 ); /*0x716bf6*/
    for ( i16 = 0; i16 < aP0[2].VoxelCaches[7]; ++i16 ) /*0x716c04*/
      ObjectPtr::RegisterForTracking( /*0x716c15*/
        (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
        (MouseClass *)(aP0[2].VoxelCaches[4] + 4 * i16));
    for ( i17 = 0; i17 < aP0[2].VoxelCaches[14]; ++i17 ) /*0x716c2f*/
      ObjectPtr::RegisterForTracking( /*0x716c40*/
        (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
        (MouseClass *)(aP0[2].VoxelCaches[11] + 4 * i17));
    _makepath(Buffer, 0, 0, (ObjectClass *)aP0->ImageFile, Ext); /*0x716c66*/
    LOBYTE(v35) = 0; /*0x716c6e*/
    aP0->Image = (void *)SearchMIXFile(Buffer, v35); /*0x716c96*/
    INIClass::GetString( /*0x716c9c*/
      (unsigned __int8 ***)&stru_87C374.__pad_579C[22128],
      (INIClass *)aP0->ImageFile,
      (unsigned __int8 *)&stru_830620.__pad_579C[54676],
      (INIClass *)&stru_830620.__pad_579C[59252],
      (INIClass *)&Filename,
      256);
    if ( !_strcmpi(&Filename, &stru_830620.__pad_579C[59252]) ) /*0x716cab*/
      INIClass::GetString( /*0x716cd4*/
        (unsigned __int8 ***)&stru_87C374.__pad_579C[22128],
        (INIClass *)aP0->__pad_24,
        (unsigned __int8 *)&stru_830620.__pad_579C[54676],
        (INIClass *)&stru_830620.__pad_579C[59252],
        (INIClass *)&Filename,
        256);
    _makepath(Buffer, 0, 0, &Filename, Ext); /*0x716ced*/
    LOBYTE(v36) = 0; /*0x716cf5*/
    *(_DWORD *)&aP0[2].__pad_14D[123] = 0; /*0x716cfe*/
    v37 = SearchMIXFile(Buffer, v36); /*0x716d04*/
    *(_DWORD *)&aP0[2].__pad_14D[123] = v37; /*0x716d0b*/
    if ( !v37 ) /*0x716d11*/
    {
      LOBYTE(v38) = 0; /*0x716d13*/
      *(_DWORD *)&aP0[2].__pad_14D[123] = SearchMIXFile(g_Str_File_XXICON_SHP, v38); /*0x716d1f*/
    }
    INIClass::GetString( /*0x716d3f*/
      (unsigned __int8 ***)&stru_87C374.__pad_579C[22128],
      (INIClass *)aP0->ImageFile,
      (unsigned __int8 *)&stru_830620.__pad_579C[54664],
      (INIClass *)&stru_87C374.__pad_579C[33876],
      (INIClass *)&Filename,
      256);
    _makepath(Buffer, 0, 0, &Filename, Ext); /*0x716d58*/
    LOBYTE(v39) = 0; /*0x716d60*/
    *(_DWORD *)&aP0[2].__pad_14D[155] = 0; /*0x716d69*/
    *(_DWORD *)&aP0[2].__pad_14D[155] = SearchMIXFile(Buffer, v39); /*0x716d8d*/
    INIClass::GetString( /*0x716d93*/
      (unsigned __int8 ***)&stru_87C374.__pad_579C[22128],
      (INIClass *)aP0->ImageFile,
      (unsigned __int8 *)&stru_824238.sectionCount,
      (INIClass *)&stru_87C374.__pad_579C[33876],
      (INIClass *)&aP0[5].ChargerTurrets[12],
      32);
    if ( LOBYTE(aP0[5].ChargerTurrets[12]) ) /*0x716d98*/
      aP0[5].ChargerBarrels[2] = FileExtension::MapHandler((ObjectClass *)&aP0[5].ChargerTurrets[12]); /*0x716da4*/
    return 0; /*0x716daa*/
  }
  return result; /*0x716dac*/
}


// ==== 0x00716DC0  TechnoTypeClass::SaveLoad_Prefix_0  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoTypeClass::SaveLoad_Prefix_0(
        TechnoTypeClass *this,
        void *a1,
        TechnoTypeClass *aP2,
        TechnoTypeClass *aP3)
{
  int v4; // ebx
  int result; // eax
  int v6; // edx
  int i; // ebx
  int v8; // edx
  int j; // ebx
  int v10; // edx
  int k; // ebx
  int v12; // edx
  int m; // ebx
  int v14; // edx
  int n; // ebx
  int v16; // edx
  int ii; // ebx
  int v18; // edx
  int jj; // ebx
  int v20; // edx
  int kk; // ebx
  int v22; // edx
  int mm; // ebx
  int v24; // [esp+124h] [ebp+10h] BYREF

  result = AbstractClass::SaveLoad_PrefixWrapper((int)a1, (int)aP2, (int)aP3); /*0x716dd1*/
  if ( result >= 0 ) /*0x716dd8*/
  {
    v6 = *(_DWORD *)aP2->vtable0; /*0x716de4*/
    aP3 = (TechnoTypeClass *)*((_DWORD *)a1 + 254); /*0x716df1*/
    (*(void (__stdcall **)(TechnoTypeClass *, TechnoTypeClass **, int, _DWORD, int))(v6 + 16))(aP2, &aP3, 4, 0, v4); /*0x716df5*/
    for ( i = 0; i < v24; ++i ) /*0x716e00*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x716e13*/
        aP2,
        *((_DWORD *)a1 + 251) + 4 * i,
        4,
        0);
    v8 = *(_DWORD *)aP2->vtable0; /*0x716e23*/
    v24 = *((_DWORD *)a1 + 201); /*0x716e2f*/
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v8 + 16))(aP2, &v24, 4, 0); /*0x716e33*/
    for ( j = 0; j < v24; ++j ) /*0x716e3e*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x716e51*/
        aP2,
        *((_DWORD *)a1 + 198) + 4 * j,
        4,
        0);
    v10 = *(_DWORD *)aP2->vtable0; /*0x716e61*/
    v24 = *((_DWORD *)a1 + 373); /*0x716e6d*/
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v10 + 16))(aP2, &v24, 4, 0); /*0x716e71*/
    for ( k = 0; k < v24; ++k ) /*0x716e7c*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x716e8f*/
        aP2,
        *((_DWORD *)a1 + 370) + 4 * k,
        4,
        0);
    v12 = *(_DWORD *)aP2->vtable0; /*0x716e9f*/
    v24 = *((_DWORD *)a1 + 265); /*0x716eab*/
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v12 + 16))(aP2, &v24, 4, 0); /*0x716eaf*/
    for ( m = 0; m < v24; ++m ) /*0x716eba*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x716ecd*/
        aP2,
        *((_DWORD *)a1 + 262) + 4 * m,
        4,
        0);
    v14 = *(_DWORD *)aP2->vtable0; /*0x716edd*/
    v24 = *((_DWORD *)a1 + 272); /*0x716ee9*/
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v14 + 16))(aP2, &v24, 4, 0); /*0x716eed*/
    for ( n = 0; n < v24; ++n ) /*0x716ef8*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x716f0b*/
        aP2,
        *((_DWORD *)a1 + 269) + 4 * n,
        4,
        0);
    v16 = *(_DWORD *)aP2->vtable0; /*0x716f1b*/
    v24 = *((_DWORD *)a1 + 279); /*0x716f27*/
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v16 + 16))(aP2, &v24, 4, 0); /*0x716f2b*/
    for ( ii = 0; ii < v24; ++ii ) /*0x716f36*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x716f49*/
        aP2,
        *((_DWORD *)a1 + 276) + 4 * ii,
        4,
        0);
    v18 = *(_DWORD *)aP2->vtable0; /*0x716f59*/
    v24 = *((_DWORD *)a1 + 286); /*0x716f65*/
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v18 + 16))(aP2, &v24, 4, 0); /*0x716f69*/
    for ( jj = 0; jj < v24; ++jj ) /*0x716f74*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x716f87*/
        aP2,
        *((_DWORD *)a1 + 283) + 4 * jj,
        4,
        0);
    v20 = *(_DWORD *)aP2->vtable0; /*0x716f97*/
    v24 = *((_DWORD *)a1 + 293); /*0x716fa3*/
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v20 + 16))(aP2, &v24, 4, 0); /*0x716fa7*/
    for ( kk = 0; kk < v24; ++kk ) /*0x716fb2*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x716fc5*/
        aP2,
        *((_DWORD *)a1 + 290) + 4 * kk,
        4,
        0);
    v22 = *(_DWORD *)aP2->vtable0; /*0x716fd5*/
    v24 = *((_DWORD *)a1 + 300); /*0x716fe1*/
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int))(v22 + 16))(aP2, &v24, 4); /*0x716fe5*/
    for ( mm = 0; mm < (int)aP3; ++mm ) /*0x716ff0*/
      (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP2->vtable0 + 16))( /*0x717003*/
        aP2,
        *((_DWORD *)a1 + 297) + 4 * mm,
        4,
        0);
    DynamicVector::Read((_DWORD *)a1 + 303, aP2); /*0x717014*/
    DynamicVector::Read((_DWORD *)a1 + 310, aP2); /*0x717020*/
    DynamicVector::Read((_DWORD *)a1 + 317, aP2); /*0x71702c*/
    DynamicVector::Read((_DWORD *)a1 + 324, aP2); /*0x717038*/
    Stream::WriteIntArray((_DWORD *)a1 + 459, aP2); /*0x717044*/
    Stream::WriteIntArray((_DWORD *)a1 + 466, aP2); /*0x717050*/
    DynamicVector::Read((_DWORD *)a1 + 204, aP2); /*0x71705c*/
    DynamicVector::Read((_DWORD *)a1 + 398, aP2); /*0x717068*/
    DynamicVector::Read((_DWORD *)a1 + 405, aP2); /*0x717074*/
    TechnoTypeClass::SaveLoadDataArray((_DWORD *)a1 + 478, aP2); /*0x717080*/
    TechnoTypeClass::SaveLoadDataArray((_DWORD *)a1 + 485, aP2); /*0x71708c*/
    return 0; /*0x717091*/
  }
  return result; /*0x717094*/
}


// ==== 0x007170A0  TechnoTypeClass::DeserializeArrays  this=TechnoTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::DeserializeArrays(#376 *this)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // [esp+Ch] [ebp+4h]
  int *v20; // [esp+10h] [ebp+8h]

  result = COMObject::GetSizeMaxWrapper((int)v19, v20); /*0x7170ac*/
  if ( result >= 0 ) /*0x7170b3*/
  {
    v2 = 4 * v19[265] + 4 + *v20; /*0x7170c8*/
    *v20 = v2; /*0x7170ca*/
    v3 = v2 + 4 * v19[272] + 4; /*0x7170d2*/
    *v20 = v3; /*0x7170d6*/
    v4 = v3 + 4 * v19[279] + 4; /*0x7170de*/
    *v20 = v4; /*0x7170e2*/
    v5 = v4 + 4 * v19[286] + 4; /*0x7170ea*/
    *v20 = v5; /*0x7170ee*/
    v6 = v5 + 4 * v19[293] + 4; /*0x7170f6*/
    *v20 = v6; /*0x7170fa*/
    v7 = v6 + 4 * v19[300] + 4; /*0x717102*/
    *v20 = v7; /*0x717106*/
    v8 = v7 + 4 * v19[307] + 4; /*0x71710e*/
    *v20 = v8; /*0x717112*/
    v9 = v8 + 4 * v19[314] + 4; /*0x71711a*/
    *v20 = v9; /*0x71711e*/
    v10 = v9 + 4 * v19[321] + 4; /*0x717126*/
    *v20 = v10; /*0x71712a*/
    v11 = v10 + 4 * v19[328] + 4; /*0x717132*/
    *v20 = v11; /*0x717136*/
    v12 = v11 + 4 * v19[463] + 4; /*0x71713e*/
    *v20 = v12; /*0x717142*/
    v13 = v12 + 4 * v19[470] + 4; /*0x71714a*/
    *v20 = v13; /*0x71714e*/
    v14 = v13 + 4 * v19[201] + 4; /*0x717156*/
    *v20 = v14; /*0x71715a*/
    v15 = v14 + 4 * v19[373] + 4; /*0x717162*/
    *v20 = v15; /*0x717166*/
    v16 = v15 + 4 * v19[254] + 4; /*0x71716e*/
    *v20 = v16; /*0x717172*/
    v17 = v16 + 4 * v19[208] + 4; /*0x71717a*/
    *v20 = v17; /*0x71717e*/
    v18 = v17 + 4 * v19[482] + 4; /*0x717186*/
    *v20 = v18; /*0x71718a*/
    *v20 = v18 + 4 * v19[489] + 4; /*0x717196*/
    return 0; /*0x717198*/
  }
  return result; /*0x71719a*/
}


// ==== 0x007171A0  BuildingTypeClass::ProcessPower  this=TechnoTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::ProcessPower(int this, AbstractClass *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // ecx

  AbstractTypeClass::ProcessPower((char *)this, aP1); /*0x7171a9*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 752), *(AbstractClass **)(this + 756)); /*0x7171be*/
  Power::TimerProcess(aP1); /*0x7171cc*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 768), *(AbstractClass **)(this + 772)); /*0x7171e1*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 776), *(AbstractClass **)(this + 780)); /*0x7171f6*/
  Power::TimerProcess(aP1); /*0x717204*/
  Power::TimerProcess(aP1); /*0x717212*/
  Power::TimerProcess(aP1); /*0x717220*/
  Power::TimerProcess(aP1); /*0x71722e*/
  Power::TimerProcess(aP1); /*0x71723c*/
  Checksummer::Add_Buffer((unsigned int *)aP1, (unsigned __int8 *)(this + 844), (IUnknown *)0x10); /*0x71724c*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 864), *(AbstractClass **)(this + 868)); /*0x717261*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 872), *(AbstractClass **)(this + 876)); /*0x717276*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 880), *(AbstractClass **)(this + 884)); /*0x71728b*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 888), *(AbstractClass **)(this + 892)); /*0x7172a0*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 896), *(AbstractClass **)(this + 900)); /*0x7172b5*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 904), *(AbstractClass **)(this + 908)); /*0x7172ca*/
  LOBYTE(v3) = *(_BYTE *)(this + 912); /*0x7172cf*/
  Power::FlagProcess(aP1, v3); /*0x7172d8*/
  v4 = Power::TimerProcess(aP1); /*0x7172e6*/
  LOBYTE(v4) = *(_BYTE *)(this + 3217); /*0x7172eb*/
  Power::FlagProcess(aP1, v4); /*0x7172f4*/
  LOBYTE(v5) = *(_BYTE *)(this + 3218); /*0x7172f9*/
  Power::FlagProcess(aP1, v5); /*0x717302*/
  LOBYTE(v6) = *(_BYTE *)(this + 3216); /*0x717307*/
  Power::FlagProcess(aP1, v6); /*0x717310*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 928), *(AbstractClass **)(this + 932)); /*0x717325*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 944), *(AbstractClass **)(this + 948)); /*0x71733a*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 936), *(AbstractClass **)(this + 940)); /*0x71734f*/
  Power::TimerProcess(aP1); /*0x71735d*/
  Power::TimerProcess(aP1); /*0x71736b*/
  Power::TimerProcess(aP1); /*0x717379*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 968), *(AbstractClass **)(this + 972)); /*0x71738e*/
  Power::TimerProcess(aP1); /*0x71739c*/
  Power::TimerProcess(aP1); /*0x7173aa*/
  Power::TimerProcess(aP1); /*0x7173b8*/
  Power::TimerProcess(aP1); /*0x7173c6*/
  Power::TimerProcess(aP1); /*0x7173d4*/
  Power::TimerProcess(aP1); /*0x7173e2*/
  Power::TimerProcess(aP1); /*0x7173f0*/
  Power::TimerProcess(aP1); /*0x7173fe*/
  Power::TimerProcess(aP1); /*0x71740c*/
  Power::TimerProcess(aP1); /*0x71741a*/
  Power::TimerProcess(aP1); /*0x717428*/
  Power::TimerProcess(aP1); /*0x717436*/
  Power::TimerProcess(aP1); /*0x717444*/
  Power::TimerProcess(aP1); /*0x717452*/
  Power::TimerProcess(aP1); /*0x717460*/
  Power::TimerProcess(aP1); /*0x71746e*/
  Power::TimerProcess(aP1); /*0x71747c*/
  Power::TimerProcess(aP1); /*0x71748a*/
  Power::TimerProcess(aP1); /*0x717498*/
  Power::TimerProcess(aP1); /*0x7174a6*/
  Power::TimerProcess(aP1); /*0x7174b4*/
  Power::TimerProcess(aP1); /*0x7174c2*/
  Power::TimerProcess(aP1); /*0x7174d0*/
  Power::TimerProcess(aP1); /*0x7174de*/
  Power::TimerProcess(aP1); /*0x7174ec*/
  Power::TimerProcess(aP1); /*0x7174fa*/
  Power::TimerProcess(aP1); /*0x717508*/
  Power::TimerProcess(aP1); /*0x717516*/
  Power::TimerProcess(aP1); /*0x717524*/
  Power::TimerProcess(aP1); /*0x717532*/
  Power::TimerProcess(aP1); /*0x717540*/
  Power::TimerProcess(aP1); /*0x71754e*/
  Power::TimerProcess(aP1); /*0x71755c*/
  Power::TimerProcess(aP1); /*0x71756a*/
  Power::TimerProcess(aP1); /*0x717578*/
  Power::TimerProcess(aP1); /*0x717586*/
  Power::TimerProcess(aP1); /*0x717594*/
  Power::TimerProcess(aP1); /*0x7175a2*/
  Power::TimerProcess(aP1); /*0x7175b0*/
  v7 = Power::TimerProcess(aP1); /*0x7175be*/
  LOBYTE(v7) = *(_BYTE *)(this + 3220); /*0x7175c3*/
  Power::FlagProcess(aP1, v7); /*0x7175cc*/
  LOBYTE(v8) = *(_BYTE *)(this + 3221); /*0x7175d1*/
  Power::FlagProcess(aP1, v8); /*0x7175da*/
  LOBYTE(v9) = *(_BYTE *)(this + 3222); /*0x7175df*/
  v10 = Power::FlagProcess(aP1, v9); /*0x7175e8*/
  LOBYTE(v10) = *(_BYTE *)(this + 3223); /*0x7175ed*/
  Power::FlagProcess(aP1, v10); /*0x7175f6*/
  LOBYTE(v11) = *(_BYTE *)(this + 3224); /*0x7175fb*/
  Power::FlagProcess(aP1, v11); /*0x717604*/
  LOBYTE(v12) = *(_BYTE *)(this + 3225); /*0x717609*/
  v13 = Power::FlagProcess(aP1, v12); /*0x717612*/
  LOBYTE(v13) = *(_BYTE *)(this + 3226); /*0x717617*/
  Power::FlagProcess(aP1, v13); /*0x717620*/
  LOBYTE(v14) = *(_BYTE *)(this + 3227); /*0x717625*/
  Power::FlagProcess(aP1, v14); /*0x71762e*/
  LOBYTE(v15) = *(_BYTE *)(this + 3228); /*0x717633*/
  v16 = Power::FlagProcess(aP1, v15); /*0x71763c*/
  LOBYTE(v16) = *(_BYTE *)(this + 3229); /*0x717641*/
  Power::FlagProcess(aP1, v16); /*0x71764a*/
  LOBYTE(v17) = *(_BYTE *)(this + 3230); /*0x71764f*/
  Power::FlagProcess(aP1, v17); /*0x717658*/
  LOBYTE(v18) = *(_BYTE *)(this + 3231); /*0x71765d*/
  v19 = Power::FlagProcess(aP1, v18); /*0x717666*/
  LOBYTE(v19) = *(_BYTE *)(this + 3232); /*0x71766b*/
  Power::FlagProcess(aP1, v19); /*0x717674*/
  LOBYTE(v20) = *(_BYTE *)(this + 3233); /*0x717679*/
  Power::FlagProcess(aP1, v20); /*0x717682*/
  LOBYTE(v21) = *(_BYTE *)(this + 3276); /*0x717687*/
  v22 = Power::FlagProcess(aP1, v21); /*0x717690*/
  LOBYTE(v22) = *(_BYTE *)(this + 3277); /*0x717695*/
  Power::FlagProcess(aP1, v22); /*0x71769e*/
  LOBYTE(v23) = *(_BYTE *)(this + 3279); /*0x7176a3*/
  Power::FlagProcess(aP1, v23); /*0x7176ac*/
  LOBYTE(v24) = *(_BYTE *)(this + 3280); /*0x7176b1*/
  v25 = Power::FlagProcess(aP1, v24); /*0x7176ba*/
  LOBYTE(v25) = *(_BYTE *)(this + 3281); /*0x7176bf*/
  Power::FlagProcess(aP1, v25); /*0x7176c8*/
  LOBYTE(v26) = *(_BYTE *)(this + 3282); /*0x7176cd*/
  Power::FinalizeDrain(aP1, v26); /*0x7176d6*/
  LOBYTE(v27) = *(_BYTE *)(this + 3283); /*0x7176db*/
  v28 = Power::FinalizeDrain(aP1, v27); /*0x7176e4*/
  LOBYTE(v28) = *(_BYTE *)(this + 3284); /*0x7176e9*/
  Power::FlagProcess(aP1, v28); /*0x7176f2*/
  LOBYTE(v29) = *(_BYTE *)(this + 3348); /*0x7176f7*/
  Power::FlagProcess(aP1, v29); /*0x717700*/
  LOBYTE(v30) = *(_BYTE *)(this + 3349); /*0x717705*/
  v31 = Power::FlagProcess(aP1, v30); /*0x71770e*/
  LOBYTE(v31) = *(_BYTE *)(this + 3360); /*0x717713*/
  Power::FlagProcess(aP1, v31); /*0x71771c*/
  LOBYTE(v32) = *(_BYTE *)(this + 3361); /*0x717721*/
  Power::FlagProcess(aP1, v32); /*0x71772a*/
  LOBYTE(v33) = *(_BYTE *)(this + 3363); /*0x71772f*/
  v34 = Power::FlagProcess(aP1, v33); /*0x717738*/
  LOBYTE(v34) = *(_BYTE *)(this + 3364); /*0x71773d*/
  Power::FlagProcess(aP1, v34); /*0x717746*/
  LOBYTE(v35) = *(_BYTE *)(this + 3365); /*0x71774b*/
  Power::FlagProcess(aP1, v35); /*0x717754*/
  LOBYTE(v36) = *(_BYTE *)(this + 3366); /*0x717759*/
  v37 = Power::FlagProcess(aP1, v36); /*0x717762*/
  LOBYTE(v37) = *(_BYTE *)(this + 3518); /*0x717767*/
  Power::FlagProcess(aP1, v37); /*0x717770*/
  LOBYTE(v38) = *(_BYTE *)(this + 3519); /*0x717775*/
  Power::FlagProcess(aP1, v38); /*0x71777e*/
  LOBYTE(v39) = *(_BYTE *)(this + 1710); /*0x717783*/
  v40 = Power::FlagProcess(aP1, v39); /*0x71778c*/
  LOBYTE(v40) = *(_BYTE *)(this + 1711); /*0x717791*/
  Power::FlagProcess(aP1, v40); /*0x71779a*/
  LOBYTE(v41) = *(_BYTE *)(this + 1712); /*0x71779f*/
  return Power::FlagProcess(aP1, v41); /*0x7177ad*/
}


// ==== 0x007177C0  TechnoClass::GetAudioEntry  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass_GetAudioEntry(void *this, int a2)
{
  return (int)this + 28 * a2 + 2200; /*0x7177d4*/
}


// ==== 0x007177E0  TechnoClass::processSpyAction  this=TechnoClass  sig=csp ====
int __thiscall sub_7177E0(void *this, int a2)
{
  return (int)this + 28 * a2 + 2708; /*0x7177f4*/
}


// ==== 0x00717800  TechnoTypeClass::GetSightRange  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoClass_GetSightRange(_DWORD *this)
{
  int result; // eax

  result = this->FlightLevel; /*0x717800*/
  if ( result == -1 ) /*0x717809*/
    return *((_DWORD *)MEMORY[0x8871E0] + 493); /*0x717810*/
  return result; /*0x717816*/
}


// ==== 0x00717820  ObjectTypeClass::loadTypeMember  this=ObjectTypeClass  sig=csp ====
char __thiscall sub_717820(int this)
{
  int v2; // eax
  const char *v3; // ecx

  LOBYTE(v2) = *(_BYTE *)(this + 3536); /*0x717823*/
  v3 = (const char *)(this + 3536); /*0x717829*/
  if ( (_BYTE)v2 ) /*0x717831*/
  {
    v2 = FileExtension::MapHandler(v3); /*0x717833*/
    *(_DWORD *)(this + 3568) = v2; /*0x717838*/
  }
  return v2; /*0x71783e*/
}


// ==== 0x00717840  LoadTheaterClassMIX_Load_717840  this=-  sig=ida-proto ====
int sub_717840()
{
  int result; // eax
  int i; // edi
  int v2; // esi

  result = MEMORY[0xA8EB10]; /*0x717840*/
  for ( i = 0; i < MEMORY[0xA8EB10]; ++i ) /*0x71784a*/
  {
    v2 = *((_DWORD *)MEMORY[0xA8EB04] + i); /*0x717852*/
    if ( *(_BYTE *)(v2 + 3536) ) /*0x717855*/
      *(_DWORD *)(v2 + 3568) = FileExtension::MapHandler((const char *)(v2 + 3536)); /*0x71786a*/
    result = MEMORY[0xA8EB10]; /*0x717870*/
  }
  return result; /*0x71787b*/
}


// ==== 0x00717880  HouseClass::HasPower  this=IUnknown  sig=csp ====
BOOL __thiscall HouseClass_HasPower(_DWORD *this)
{
  return this->q202 > 0; /*0x71788d*/
}


// ==== 0x00717890  BuildingClass::SetSlot  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass_SetSlot(_DWORD *this, int a2, int a3)
{
  *(this + a3 + 517) = a2; /*0x717898*/
  return a3; /*0x71789f*/
}


// ==== 0x007178B0  UnitClass::processEnterTarget  this=UnitClass  sig=csp ====
int __thiscall sub_7178B0(_DWORD *this, int a2)
{
  return *(this + a2 + 517); /*0x7178bb*/
}


// ==== 0x007178C0  BuildingTypeClass::GetUpgradeOffset  this=BuildingTypeClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass_GetUpgradeOffset(int this, _DWORD *a2)
{
  int v3; // eax
  int v4; // ecx
  int *v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // ebp
  int v9; // edi
  double v10; // st7
  int v11; // eax
  int v12; // ebx
  int v14[3]; // [esp+18h] [ebp-14h] BYREF
  int v15[2]; // [esp+24h] [ebp-8h] BYREF

  if ( *(_BYTE *)(this + 1980) ) /*0x7178c6*/
  {
    v3 = *(_DWORD *)(this + 1968); /*0x7178d4*/
    v4 = *(_DWORD *)(this + 1972); /*0x7178da*/
    v15[0] = v3; /*0x7178e1*/
    v15[1] = v4; /*0x7178e6*/
    v5 = World::ToScreen((float *)MEMORY[0x887324], v14, v15); /*0x7178fb*/
    v6 = *v5; /*0x717900*/
    v7 = v5[1]; /*0x717905*/
    v14[0] = 10 * *(_DWORD *)(this + 1976); /*0x71791b*/
    v8 = v6 - v14[0]; /*0x717927*/
    v9 = v7 - v14[0]; /*0x717929*/
    v10 = Math::Sqrt((double)v14[0] * (double)v14[0] + (double)v14[0] * (double)v14[0]); /*0x717936*/
    v11 = Math::RoundToInt(v10 * 0.58); /*0x717944*/
    if ( *(int *)(this + 1976) >= 0 ) /*0x717951*/
      v12 = -v11; /*0x717957*/
    else
      v12 = v11; /*0x717953*/
    *a2 = v8; /*0x71795f*/
    a2[1] = v9; /*0x717961*/
    a2[2] = v12; /*0x717966*/
    return a2; /*0x717959*/
  }
  else
  {
    *a2 = *(_DWORD *)(this + 1968); /*0x71797f*/
    a2[1] = *(_DWORD *)(this + 1972); /*0x717984*/
    a2[2] = *(_DWORD *)(this + 1976); /*0x71798b*/
    return a2; /*0x717971*/
  }
}


// ==== 0x007179A0  TechnoTypeClass::ddtor  this=TechnoTypeClass  sig=csp ====
TechnoTypeClass *__thiscall TechnoTypeClass::ddtor(void *Block, char a2)
{
  TechnoTypeClass::DTOR((int)Block); /*0x7179a3*/
  if ( (a2 & 1) != 0 ) /*0x7179ad*/
    __3_YAXPAX_Z(Block); /*0x7179b0*/
  return (TechnoTypeClass *)Block; /*0x7179ba*/
}


// ==== 0x007179C0  ObjectClass::nullsub_86  this=ObjectClass  sig=csp ====
void nullsub_86()
{
  ; /*0x7179c0*/
}


// ==== 0x007179D0  ObjectTypeClass::loadTypeMember_57179D0  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_57179D0(_DWORD *this, WeaponTypeClass *aP1, CCINIClass *aP2)
{
  if ( this != (_DWORD *)aP2 ) /*0x7179d7*/
  {
    *this = *(_DWORD *)aP2->__pad_0; /*0x7179dd*/
    this->vtable2 = aP2->headNode[0]; /*0x7179e2*/
    this->vtable3 = aP2->headNode[1]; /*0x7179e8*/
    this->vtable4 = aP2->headNode[2]; /*0x7179ee*/
    this->NeedsSaveOrLink = aP2->sectionHead[0]; /*0x7179f5*/
  }
  *(_DWORD *)aP1->__pad_0 = *this; /*0x717a01*/
  *(_DWORD *)&aP1->__pad_0[4] = this->vtable2; /*0x717a06*/
  *(_DWORD *)&aP1->__pad_0[8] = this->vtable3; /*0x717a0c*/
  *(_DWORD *)&aP1->__pad_0[12] = this->vtable4; /*0x717a12*/
  LOWORD(aP1->uniqueId) = this->NeedsSaveOrLink; /*0x717a1a*/
  return (int)aP1->__pad_0; /*0x717a19*/
}


// ==== 0x00717A30  ObjectTypeClass::loadTypeMember_5717A30  this=Turret  sig=csp ====
int __thiscall sub_717A30(_DWORD *this, int a2)
{
  *this = a2; /*0x717a34*/
  return a2; /*0x717a36*/
}


// ==== 0x00717A40  ObjectClass::ReadPointerFromECX4  this=Turret  sig=csp ====
int __thiscall ReadPointerFromECX4(void *this)
{
  return *(_DWORD *)this; /*0x717a42*/
}


// ==== 0x00717A50  ObjectTypeClass::loadTypeMember_5717A50  this=Turret  sig=csp ====
int __thiscall sub_717A50(_DWORD *this, int a2)
{
  int result; // eax

  result = a2; /*0x717a50*/
  if ( a2 <= 0 ) /*0x717a56*/
    result = 1; /*0x717a58*/
  this->__pad_004 = result; /*0x717a5d*/
  return result; /*0x717a60*/
}


// ==== 0x00717A70  ObjectTypeClass::loadTypeMember_5717A70  this=Turret  sig=csp ====
int __thiscall sub_717A70(_DWORD *this)
{
  return this->__pad_004; /*0x717a73*/
}


// ==== 0x00717A80  ObjectTypeClass::loadTypeMember_5717A80  this=Turret  sig=csp ====
int __thiscall sub_717A80(_DWORD *this, int a2)
{
  int result; // eax

  result = a2; /*0x717a80*/
  if ( a2 <= 0 ) /*0x717a86*/
    result = 1; /*0x717a88*/
  *(this + 2) = result; /*0x717a8d*/
  return result; /*0x717a90*/
}


// ==== 0x00717AA0  ObjectTypeClass::loadTypeMember_5717AA0  this=Turret  sig=csp ====
int __thiscall sub_717AA0(_DWORD *this)
{
  return *(this + 2); /*0x717aa3*/
}


// ==== 0x00717AB0  ObjectTypeClass::loadTypeMember_5717AB0  this=Turret  sig=csp ====
int __thiscall sub_717AB0(_DWORD *this, int a2)
{
  int result; // eax

  result = a2; /*0x717ab0*/
  if ( a2 <= 0 ) /*0x717ab6*/
    result = 1; /*0x717ab8*/
  *(this + 3) = result; /*0x717abd*/
  return result; /*0x717ac0*/
}


// ==== 0x00717AD0  ObjectTypeClass::loadTypeMember_5717AD0  this=Turret  sig=csp ====
int __thiscall sub_717AD0(_DWORD *this)
{
  return *(this + 3); /*0x717ad3*/
}


// ==== 0x00717AE0  ObjectTypeClass::loadTypeMember_5717AE0  this=ObjectTypeClass  sig=csp ====
BOOL __thiscall sub_717AE0(_BYTE *this)
{
  return *this == 0; /*0x717ae9*/
}


// ==== 0x00717AF0  TechnoTypeClass::Constructor  this=TypeList  sig=csp ====
_DWORD *__thiscall sub_717AF0(_DWORD *this)
{
  this->Items = 0; /*0x717af4*/
  this->Capacity = 0; /*0x717af7*/
  this->IsInitialized = 1; /*0x717afa*/
  this->IsAllocated = 0; /*0x717afe*/
  this->CapacityIncrement = 10; /*0x717b01*/
  this->Count = 0; /*0x717b08*/
  *this = &vt_TypeList_ParticleSystemTypeClass_const; /*0x717b0b*/
  return this; /*0x717b11*/
}


// ==== 0x00717B20  TechnoTypeClass::SaveLoadDataArray  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoTypeClass::SaveLoadDataArray(_DWORD *this, TechnoTypeClass *aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(_DWORD *)aP1->vtable0; /*0x717b2c*/
  v6 = this->uniqueId; /*0x717b39*/
  (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x717b3d*/
  result = v6; /*0x717b40*/
  for ( i = 0; i < v6; ++i ) /*0x717b48*/
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))( /*0x717b58*/
      aP1,
      this->vtable2 + 4 * i,
      4,
      0);
    result = v6; /*0x717b5b*/
  }
  return result; /*0x717b64*/
}


// ==== 0x00717B70  _TypeList_PBVParticleSystemTypeClass::QueryInterface  this=TypeList  sig=csp ====
TypeList *__thiscall TypeList_cptr_ParticleSystemTypeClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x717b73*/
  *Block = &vt_VectorClass_ParticleSystemTypeClass_const; /*0x717b76*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x717b80*/
  {
    __3_YAXPAX_Z(v3); /*0x717b88*/
    *(Block + 1) = 0; /*0x717b90*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x717b9b*/
  *(Block + 2) = 0; /*0x717ba1*/
  if ( (a2 & 1) != 0 ) /*0x717ba8*/
    __3_YAXPAX_Z(Block); /*0x717bab*/
  return (TypeList *)Block; /*0x717bb5*/
}


// ==== 0x00717BC0  TechnoTypeClass::Constructor_0  this=DynamicVector  sig=csp ====
_DWORD *__thiscall TechnoTypeClass::Constructor_0(_DWORD *this, ObjectTypeClass *aP1)
{
  *this = &vt_DynamicVectorClass_VoxelAnimTypeClass_const; /*0x717bc2*/
  return this; /*0x717bc8*/
}


// ==== 0x00717BD0  IntDynamicVector::Construct  this=DynamicVector  sig=csp ====
_DWORD *__thiscall IntDynamicVector::Construct(_DWORD *this, ObjectTypeClass *aP1)
{
  *this = &vt_DynamicVectorClass_int; /*0x717bd2*/
  return this; /*0x717bd8*/
}


// ==== 0x00717BE0  TechnoTypeClass::Constructor_1  this=DynamicVector  sig=csp ====
VectorClass *__thiscall TechnoTypeClass::Constructor_1(_DWORD *this, ObjectTypeClass *aP1)
{
  *this = &vt_DynamicVectorClass_BuildingTypeClass_const; /*0x717be2*/
  return (VectorClass *)this; /*0x717be8*/
}


// ==== 0x00717BF0  ObjectTypeClass::CheckFlag  this=DynamicVector  sig=csp ====
_DWORD *__thiscall ObjectTypeClass::CheckFlag(_DWORD *this, ObjectTypeClass *aP1)
{
  *this = &vt_DynamicVectorClass_AnimTypeClass_const; /*0x717bf2*/
  return this; /*0x717bf8*/
}


// ==== 0x00717C00  ObjectTypeClass::loadTypeMember_5717C00  this=ObjectTypeClass  sig=csp ====
_DWORD *__thiscall sub_717C00(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == a2 ) /*0x717c0a*/
    return this; /*0x717c0a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x717c0e*/
  v3 = a2[2]; /*0x717c11*/
  this->vtable3 = v3; /*0x717c16*/
  if ( !v3 ) /*0x717c19*/
  {
    this->vtable2 = 0; /*0x717c5a*/
    this->u8_34 = 0; /*0x717c61*/
    return this; /*0x717c65*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x717c23*/
  this->vtable2 = v4; /*0x717c2b*/
  if ( !v4 ) /*0x717c30*/
    return this; /*0x717c30*/
  v5 = this->vtable3; /*0x717c32*/
  v6 = 0; /*0x717c35*/
  this->u8_34 = 1; /*0x717c39*/
  if ( v5 <= 0 ) /*0x717c3d*/
    return this; /*0x717c3d*/
  do /*0x717c51*/
  {
    *(_DWORD *)(this->vtable2 + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x717c48*/
    ++v6; /*0x717c4e*/
  }
  while ( v6 < this->vtable3 ); /*0x717c51*/
  return this; /*0x717c55*/
}


// ==== 0x00717C70  TypeList::ParticleConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList_Particle_Constructor(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x717c79*/
  this->Capacity = a2; /*0x717c80*/
  this->q030 = 1; /*0x717c83*/
  this->q034 = 0; /*0x717c87*/
  *this = &vt_VectorClass_ParticleSystemTypeClass_const; /*0x717c8b*/
  if ( a2 ) /*0x717c91*/
  {
    if ( a3 ) /*0x717c99*/
    {
      this->Items = a3; /*0x717c9b*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x717cac*/
      this->q034 = 1; /*0x717caf*/
    }
  }
  *this = &vt_DynamicVectorClass_ParticleSystemTypeClass_const; /*0x717cb3*/
  this->u32_14 = 10; /*0x717cb9*/
  this->q010 = 0; /*0x717cc0*/
  return this; /*0x717cc9*/
}


// ==== 0x00717CD0  TypeList::PushBack  this=TypeList  sig=csp ====
char __thiscall TypeList::PushBack(_DWORD *this, VectorClass *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->Capacity; /*0x717cd3*/
  if ( this->Count >= v3 ) /*0x717cdb*/
  {
    if ( !this->IsAllocated && v3 ) /*0x717ce6*/
      return 0; /*0x717ce6*/
    v4 = this->CapacityIncrement; /*0x717ce8*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x717cf8*/
      return 0; /*0x717cff*/
  }
  v6 = this->Count; /*0x717d05*/
  v7 = this->Items; /*0x717d08*/
  this->Count = v6 + 1; /*0x717d0e*/
  *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)aP1->vtable0; /*0x717d18*/
  return 1; /*0x717d01*/
}


// ==== 0x00717D20  VectorClass::CopyParticle  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopyParticle(_DWORD *this, DynamicVector *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x717d2d*/
  this->Capacity = 0; /*0x717d30*/
  this->q030 = 1; /*0x717d33*/
  this->q034 = 0; /*0x717d37*/
  *this = &vt_VectorClass_ParticleSystemTypeClass_const; /*0x717d3a*/
  if ( this != (_DWORD *)aP1 ) /*0x717d40*/
  {
    VectorClass::Cleanup((int)this); /*0x717d42*/
    v3 = aP1->field_8; /*0x717d48*/
    this->Capacity = v3; /*0x717d4d*/
    if ( v3 ) /*0x717d50*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x717d56*/
      this->Items = v4; /*0x717d60*/
      if ( v4 ) /*0x717d63*/
      {
        v5 = this->Capacity; /*0x717d65*/
        v6 = 0; /*0x717d68*/
        this->q034 = 1; /*0x717d6c*/
        if ( v5 > 0 ) /*0x717d70*/
        {
          do /*0x717d84*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->field_1[3] + 4 * v6); /*0x717d7b*/
            ++v6; /*0x717d81*/
          }
          while ( v6 < this->Capacity ); /*0x717d84*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x717d88*/
      this->q034 = 0; /*0x717d8b*/
    }
  }
  this->q010 = aP1->field_10; /*0x717d91*/
  this->u32_14 = *(_DWORD *)aP1->__pad_14; /*0x717d97*/
  *this = &vt_TypeList_ParticleSystemTypeClass_const; /*0x717d9a*/
  return this; /*0x717da2*/
}


// ==== 0x00717DB0  TechnoTypeClass::RemoveItem  this=TechnoTypeClass  sig=csp ====
char __thiscall sub_717DB0(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->uniqueId; /*0x717db0*/
  v3 = a2; /*0x717db3*/
  if ( a2 >= v2 ) /*0x717db9*/
    return 0; /*0x717ddc*/
  v4 = v2 - 1; /*0x717dbb*/
  this->uniqueId = v4; /*0x717dbe*/
  if ( a2 < v4 ) /*0x717dc1*/
  {
    do /*0x717dd4*/
    {
      ++v3; /*0x717dc7*/
      *(_DWORD *)(this->vtable2 + 4 * v3 - 4) = *(_DWORD *)(this->vtable2 + 4 * v3); /*0x717dcb*/
    }
    while ( v3 < this->uniqueId ); /*0x717dd4*/
  }
  return 1; /*0x717dd9*/
}


// ==== 0x00717DF0  sub_717DF0  this=-  sig=ida-proto ====
void sub_717DF0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x717dfc*/
  MEMORY[0xB0EBE0] = Math::Sqrt(v0 + v0); /*0x717e0e*/
}


// ==== 0x00717E20  sub_717E20  this=-  sig=ida-proto ====
void sub_717E20()
{
  MEMORY[0xB0EC30] = MEMORY[0xB0EBE0] / 60.0; /*0x717e2c*/
}


// ==== 0x00717E40  sub_717E40  this=-  sig=ida-proto ====
void sub_717E40()
{
  MEMORY[0xB0EC18] = 1.0 / MEMORY[0xB0EC30]; /*0x717e4c*/
}


// ==== 0x00717E60  sub_717E60  this=-  sig=ida-proto ====
void sub_717E60()
{
  MEMORY[0xB0EC10] = 0.0174532925199433 * 45.0; /*0x717e6c*/
}


// ==== 0x00717E80  sub_717E80  this=-  sig=ida-proto ====
void sub_717E80()
{
  MEMORY[0xB0EBE8] = 0.0174532925199433 * 60.0; /*0x717e8c*/
}


// ==== 0x00717EA0  sub_717EA0  this=-  sig=ida-proto ====
void sub_717EA0()
{
  MEMORY[0xB0EBC0] = 0.0174532925199433 * 90.0; /*0x717eac*/
}


// ==== 0x00717EC0  sub_717EC0  this=-  sig=ida-proto ====
__int64 sub_717EC0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0EBC0] - MEMORY[0xB0EBE8]); /*0x717ed2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0EBE0] * 0.5); /*0x717ee6*/
  MEMORY[0xB0EC38] = result; /*0x717eeb*/
  return result; /*0x717ef0*/
}


// ==== 0x00717F00  sub_717F00  this=-  sig=ida-proto ====
void sub_717F00()
{
  MEMORY[0xB0EBF0] = Math::ArcTan((double)MEMORY[0xB0EC38] * 0.00390625); /*0x717f17*/
}


// ==== 0x00717F30  sub_717F30  this=-  sig=ida-proto ====
void sub_717F30()
{
  MEMORY[0xB0EC08] = Math::ArcTan((double)(2 * MEMORY[0xB0EC38]) / MEMORY[0xB0EBE0]); /*0x717f52*/
}


// ==== 0x00717F60  sub_717F60  this=-  sig=ida-proto ====
__int64 sub_717F60()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0EC38]) + 0.5); /*0x717f7b*/
  MEMORY[0xB0EC2C] = result; /*0x717f80*/
  return result; /*0x717f86*/
}


// ==== 0x00717F90  sub_717F90  this=-  sig=ida-proto ====
int sub_717F90()
{
  MEMORY[0xB0EBD8] = 0; /*0x717f92*/
  return 0; /*0x717f9e*/
}


// ==== 0x00717FA0  sub_717FA0  this=-  sig=ida-proto ====
int sub_717FA0()
{
  MEMORY[0xB0EBF8] = 0; /*0x717fa2*/
  MEMORY[0xB0EBFC] = 0; /*0x717fa7*/
  MEMORY[0xB0EC00] = 0; /*0x717fac*/
  return 0; /*0x717fb1*/
}


// ==== 0x00717FC0  sub_717FC0  this=-  sig=ida-proto ====
int sub_717FC0()
{
  MEMORY[0xB0EC28] = 0; /*0x717fc5*/
  MEMORY[0xB0EC20] = 128; /*0x717fcf*/
  MEMORY[0xB0EC24] = 128; /*0x717fd4*/
  return 128; /*0x717fd9*/
}


// ==== 0x00717FE0  sub_717FE0  this=-  sig=ida-proto ====
int sub_717FE0()
{
  MEMORY[0xB0EBC8] = 0; /*0x717fe2*/
  MEMORY[0xB0EBCC] = 0; /*0x717fe7*/
  MEMORY[0xB0EBD0] = 0; /*0x717fec*/
  MEMORY[0xB0EBD4] = 0; /*0x717ff1*/
  return 0; /*0x717ff6*/
}


// ==== 0x00718000  TeleportLocomotionClass::TeleportLocomotionClass  this=TeleportLocomotionClass  sig=csp ====
int __thiscall TeleportLocomotionClass::TeleportLocomotionClass(int this)
{
  wchar_t *v2; // ecx

  LocomotionClass::Init((_DWORD *)this); /*0x718003*/
  *(_DWORD *)(this + 28) = MEMORY[0xB0EBF8]; /*0x718011*/
  *(_DWORD *)(this + 32) = MEMORY[0xB0EBFC]; /*0x71801a*/
  *(_DWORD *)(this + 36) = MEMORY[0xB0EC00]; /*0x718026*/
  *(_DWORD *)(this + 40) = MEMORY[0xB0EBF8]; /*0x71802e*/
  *(_DWORD *)(this + 44) = MEMORY[0xB0EBFC]; /*0x718036*/
  *(_DWORD *)(this + 48) = MEMORY[0xB0EC00]; /*0x71803e*/
  *(_BYTE *)(this + 52) = 0; /*0x718043*/
  *(_BYTE *)(this + 53) = 0; /*0x718046*/
  *(_BYTE *)(this + 54) = 0; /*0x718049*/
  *(_DWORD *)(this + 56) = 0; /*0x71804c*/
  v2 = MEMORY[0xA8ED84]; /*0x71804f*/
  *(_DWORD *)(this + 68) = 0; /*0x718055*/
  *(_DWORD *)(this + 60) = v2; /*0x718058*/
  *(_DWORD *)(this + 72) = 0; /*0x71805b*/
  *(_DWORD *)this = &TeleportLocomotionClass::`vftable'; /*0x71805e*/
  *(_DWORD *)(this + 4) = &TeleportLocomotionClass::`vftable'; /*0x718064*/
  *(_DWORD *)(this + 24) = &vt_TeleportLocomotionClass; /*0x71806b*/
  return this; /*0x718074*/
}


// ==== 0x00718080  JumpjetLocomotionClass::ShortFunc  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_718080(int a1)
{
  return *(_BYTE *)(a1 + 48) == 1; /*0x71808b*/
}


// ==== 0x00718090  TeleportLocomotionClass::ShortFunc  this=TeleportLocomotionClass  sig=csp ====
bool __thiscall JumpjetLocomotionClass::sub_718090(_DWORD *this)
{
  return (*(unsigned __int8 (__stdcall **)(_DWORD *))(this->vtable2 + 16))(this + 1) == 0; /*0x71809e*/
}


// ==== 0x007180A0  JumpjetLocomotionClass::GetCoordinateConditional  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_7180A0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // esi

  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) ) /*0x7180a9*/
  {
    result = a2; /*0x7180b0*/
    v3 = a1[6]; /*0x7180b4*/
    v4 = a1[7]; /*0x7180b7*/
    v5 = a1[8]; /*0x7180ba*/
  }
  else
  {
    v3 = *(_DWORD *)(a1[2] + 156); /*0x7180d7*/
    v4 = *(_DWORD *)(a1[2] + 160); /*0x7180d9*/
    v5 = *(_DWORD *)(a1[2] + 164); /*0x7180dc*/
    result = a2; /*0x7180df*/
  }
  *a2 = v3; /*0x7180bf*/
  a2[1] = v4; /*0x7180c1*/
  a2[2] = v5; /*0x7180c4*/
  return result; /*0x7180c7*/
}


// ==== 0x00718100  TeleportLocomotionClass::ProcessFactoryExit  this=TeleportLocomotionClass  sig=csp ====
_DWORD *__userpurge JumpjetLocomotionClass::sub_718100@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3,
        int a4,
        int a5,
        int a6)
{
  _DWORD *result; // eax
  _BYTE *v7; // ecx
  _DWORD *v8; // eax
  int v9; // [esp+0h] [ebp-10h]
  int v10[3]; // [esp+4h] [ebp-Ch] BYREF

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 8) + 892))(*(_DWORD *)(a3 + 8)); /*0x71810d*/
  if ( (_BYTE)result /*0x71814e*/
    || (result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 8) + 896))(*(_DWORD *)(a3 + 8)),
        (_BYTE)result)
    || (result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 8) + 468))(*(_DWORD *)(a3 + 8)),
        (_BYTE)result)
    || (result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 8) + 472))(*(_DWORD *)(a3 + 8)),
        (_BYTE)result) )
  {
    *(_DWORD *)(*(_DWORD *)(a3 + 8) + 1444) = 0; /*0x718213*/
  }
  else
  {
    v10[1] = a5; /*0x718160*/
    v7 = *(_BYTE **)(a3 + 8); /*0x718164*/
    v10[0] = a4; /*0x718167*/
    v10[2] = a6; /*0x71816b*/
    if ( v7[504] && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 44))(v7) == 15 ) /*0x718181*/
    {
      v8 = Coord::To_Cell(&MEMORY[0x87F7E8], v10); /*0x71818d*/
      Cell::ApplyDamage(v8, (int)&MEMORY[0xB0EBF8], 1, 1, 0); /*0x71819f*/
    }
    Factory::CalculateExitCell((_DWORD *)(a3 - 4), a1, a2, v10, v9, v10[0]); /*0x7181ac*/
    result = (_DWORD *)(a3 + 36); /*0x7181ba*/
    if ( *(_DWORD *)(a3 + 36) == MEMORY[0xB0EBF8] /*0x7181d9*/
      && *(_DWORD *)(a3 + 40) == MEMORY[0xB0EBFC]
      && *(_DWORD *)(a3 + 44) == MEMORY[0xB0EC00] )
    {
      return (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a3 + 8) + 1152))( /*0x718202*/
                         *(_DWORD *)(a3 + 8),
                         0,
                         1);
    }
    else
    {
      *(_BYTE *)(a3 + 48) = 1; /*0x7181db*/
      *(_DWORD *)(a3 + 24) = *result; /*0x7181e4*/
      *(_DWORD *)(a3 + 28) = *(_DWORD *)(a3 + 40); /*0x7181e9*/
      *(_DWORD *)(a3 + 32) = *(_DWORD *)(a3 + 44); /*0x7181ef*/
    }
  }
  return result; /*0x7181f2*/
}


// ==== 0x00718230  TeleportLocomotionClass::ResetMovementState  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_718230(int a1)
{
  *(_DWORD *)(a1 + 24) = MEMORY[0xB0EBF8]; /*0x71823d*/
  *(_DWORD *)(a1 + 28) = MEMORY[0xB0EBFC]; /*0x718246*/
  *(_DWORD *)(a1 + 32) = MEMORY[0xB0EC00]; /*0x71824f*/
  *(_BYTE *)(a1 + 48) = 0; /*0x718254*/
  *(_BYTE *)(a1 + 50) = 0; /*0x718257*/
  return a1; /*0x71825a*/
}


// ==== 0x00718260  ObjectClass::FindPlacementPosition  this=ObjectClass  sig=csp ====
char __thiscall ObjectClass_FindPlacementPosition(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int *v6; // esi
  int v7; // ebx
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // esi
  int v15; // eax
  int TileIndex; // eax
  int v17; // edx
  void *v18; // eax
  _DWORD *v19; // eax
  int v20; // esi
  int v21; // edi
  int v22; // ebx
  void *v23; // eax
  _DWORD *v24; // eax
  int v25; // esi
  _DWORD *v26; // edx
  int v27; // ecx
  int v28; // eax
  _DWORD *v30; // esi
  _DWORD *v31; // ecx
  _DWORD *v32; // eax
  int v33; // eax
  int *v34; // eax
  int *v35; // ebp
  int v36; // edx
  int v37; // [esp-28h] [ebp-60h]
  int v38; // [esp+14h] [ebp-24h] BYREF
  int v39; // [esp+18h] [ebp-20h] BYREF
  int v40; // [esp+1Ch] [ebp-1Ch] BYREF
  __int16 *v41; // [esp+20h] [ebp-18h]
  int v42; // [esp+24h] [ebp-14h] BYREF
  int v43; // [esp+28h] [ebp-10h] BYREF
  int v44; // [esp+2Ch] [ebp-Ch] BYREF
  int v45; // [esp+30h] [ebp-8h]
  int v46; // [esp+34h] [ebp-4h]

  if ( (_BYTE)a5 ) /*0x71826f*/
  {
    v30 = this + 10; /*0x718664*/
    if ( this->owningHouseIndex == MEMORY[0xB0EBF8] && this->fallRate == MEMORY[0xB0EBFC] && this->nextObject == MEMORY[0xB0EC00] ) /*0x718681*/
    {
      v31 = (_DWORD *)this->vtable4; /*0x71868b*/
      v44 = v31[39]; /*0x71869a*/
      v45 = v31[40]; /*0x7186a1*/
      v46 = v31[41]; /*0x7186a8*/
      (*(void (__stdcall **)(int *))(*v31 + 244))(&v44); /*0x7186b3*/
    }
    else
    {
      (*(void (__stdcall **)(_DWORD *))(*(_DWORD *)this->vtable4 + 244))(this + 10); /*0x718689*/
    }
    v32 = (_DWORD *)(this->vtable4 + 648); /*0x7186be*/
    *v30 = *v32; /*0x7186c6*/
    this->fallRate = v32[1]; /*0x7186cb*/
    this->nextObject = v32[2]; /*0x7186d1*/
    this->nextObject = Cell::GetGroundHeight(this + 10); /*0x7186e4*/
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], this + 10) + 80) & 0x100) == 0 /*0x7186fa*/
      || (v33 = this->vtable4, *(_BYTE *)(v33 + 140)) )
    {
      *(_BYTE *)(this->vtable4 + 140) = 0; /*0x718719*/
    }
    else
    {
      *(_BYTE *)(v33 + 140) = 1; /*0x718704*/
      this->nextObject += MEMORY[0xB0EC2C]; /*0x718711*/
    }
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this->vtable4 + 240))(this->vtable4, this + 10); /*0x718726*/
  }
  else
  {
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 80) & 0x100) != 0 ) /*0x71828d*/
      v6 = (int *)*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 58); /*0x71829e*/
    else
      v6 = (int *)*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 57); /*0x7182b5*/
    v7 = *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 17); /*0x7182ca*/
    for ( LOBYTE(a5) = 0; v6; v6 = (int *)v6[12] ) /*0x7182d6*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int *))(*v6 + 352))(v6) /*0x718305*/
        && (*(int (__thiscall **)(int *))(*v6 + 44))(v6) == 15
        && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->vtable4 + 44))(this->vtable4) == 15 )
      {
        v8 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*v6 + 72))(v6, &v44); /*0x718310*/
        if ( a2 == *v8 && a3 == v8[1] && a4 == v8[2] ) /*0x718339*/
        {
          v9 = (*(int (__thiscall **)(int *))(*v6 + 132))(v6); /*0x718343*/
          v10 = *v6; /*0x718354*/
          v38 = *(_DWORD *)(v9 + 160); /*0x718357*/
          (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v10 + 364))( /*0x71836e*/
            v6,
            &v38,
            0,
            *((_DWORD *)MEMORY[0x8871E0] + 1002),
            0,
            1,
            0,
            0);
        }
      }
      else if ( (*(unsigned __int8 (__thiscall **)(int *))(*v6 + 352))(v6) || (v6[5] & 4) == 0 ) /*0x718397*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(int *))(*v6 + 352))(v6) ) /*0x7183d4*/
        {
          v40 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->vtable4 + 132))(this->vtable4) + 160); /*0x7183f5*/
          (*(void (__thiscall **)(_DWORD, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)this->vtable4 /*0x71840f*/
                                                                                             + 364))(
            this->vtable4,
            &v40,
            0,
            *((_DWORD *)MEMORY[0x8871E0] + 1002),
            0,
            1,
            0,
            0);
        }
        else if ( (v6[5] & 4) == 0 ) /*0x718428*/
        {
          LOBYTE(a5) = 1; /*0x71842a*/
        }
      }
      else
      {
        v11 = (*(int (__thiscall **)(int *))(*v6 + 132))(v6); /*0x71839d*/
        v12 = *v6; /*0x7183a9*/
        v39 = *(_DWORD *)(v11 + 160); /*0x7183ab*/
        (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v12 + 364))( /*0x7183c8*/
          v6,
          &v39,
          0,
          *((_DWORD *)MEMORY[0x8871E0] + 1002),
          0,
          1,
          0,
          0);
      }
    }
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 80) & 0x100) != 0 /*0x71846c*/
      && (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 80) & 0x200) == 0 )
    {
      LOBYTE(a5) = 1; /*0x71846e*/
    }
    v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->vtable4 + 72))(this->vtable4, &v44); /*0x71847d*/
    LOWORD(v38) = *v13 / 256; /*0x718490*/
    HIWORD(v38) = v13[1] / 256; /*0x7184a8*/
    v40 = v38; /*0x7184b1*/
    v41 = (__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v40); /*0x7184c0*/
    LOBYTE(v39) = ObjectClass::processPointerInvalid != 0; /*0x7184d1*/
    if ( v7 != -1 && !*(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84] + v7) + 681) && !ObjectClass::processPointerInvalid /*0x7184f4*/
      || (_BYTE)a5 )
    {
      v14 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->vtable4 + 132))(this->vtable4) + 1460); /*0x718505*/
      switch ( v14 ) /*0x71850e*/
      {
        case 9: /*0x71850e*/
          v14 = 0; /*0x718510*/
          break;
        case 2: /*0x71850e*/
          v14 = 0; /*0x718519*/
          break;
        case 3: /*0x71850e*/
          v14 = 5; /*0x718522*/
          break;
      }
      v38 = 0; /*0x71852b*/
      LOWORD(a5) = a2 / 256; /*0x71855c*/
      HIWORD(a5) = a3 / 256; /*0x718561*/
      v40 = a5; /*0x71857b*/
      v15 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v40) + 80) >> 8; /*0x7185ad*/
      LOBYTE(v15) = v15 & 1; /*0x7185b0*/
      v37 = v15; /*0x7185b5*/
      TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], v41 + 18, v14, v39); /*0x7185bf*/
      v42 = *LayerClass::Pathfinding_Find( /*0x7185e6*/
               &MEMORY[0x87F7E8],
               v17,
               &v43,
               (__int16 *)&a5,
               1,
               TileIndex,
               v14,
               v37,
               1,
               1,
               0,
               0,
               0,
               1,
               (__int16 *)&v38,
               0,
               0);
      v18 = Coord::To_Cell(&MEMORY[0x87F7E8], &a2); /*0x7185ea*/
      v19 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v18 + 72))(v18, &v44); /*0x7185f8*/
      v20 = a2 - *v19; /*0x71860b*/
      v21 = a3 - v19[1]; /*0x718611*/
      v22 = a4 - v19[2]; /*0x718617*/
      v23 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v42); /*0x71861f*/
      v24 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v23 + 72))(v23, &v44); /*0x71862d*/
      v25 = *v24 + v20; /*0x718635*/
      v26 = (_DWORD *)(this->vtable4 + 648); /*0x71863d*/
      v27 = v21 + v24[1]; /*0x718643*/
      v28 = v22 + v24[2]; /*0x718645*/
      *v26 = v25; /*0x718647*/
      v26[1] = v27; /*0x71864c*/
      v26[2] = v28; /*0x718650*/
      return 0; /*0x718658*/
    }
  }
  v34 = this + 10; /*0x718735*/
  if ( this->owningHouseIndex == MEMORY[0xB0EBF8] && this->fallRate == MEMORY[0xB0EBFC] && this->nextObject == MEMORY[0xB0EC00] ) /*0x718754*/
  {
    v35 = (int *)this->vtable4; /*0x71875e*/
    v44 = v35[39]; /*0x71876d*/
    v45 = v35[40]; /*0x718774*/
    v46 = v35[41]; /*0x71877b*/
    v36 = *v35; /*0x71877f*/
    v34 = &v44; /*0x718782*/
  }
  else
  {
    v35 = (int *)this->vtable4; /*0x718756*/
    v36 = *v35; /*0x718759*/
  }
  (*(void (__thiscall **)(int *, int *))(v36 + 240))(v35, v34); /*0x718789*/
  return 1; /*0x718649*/
}


// ==== 0x007187A0  ObjectClass::ProcessUnitDeploymentAtCell  this=RecoilData  sig=csp ====
char __thiscall ProcessUnitDeploymentAtCell(int **this, int a2, int a3, int a4)
{
  _DWORD *i; // edi
  bool v6; // bl
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  int v10; // ecx
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  int *v13; // ecx
  int v14; // edi
  void *v15; // eax
  int *v16; // eax
  _DWORD *v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  char v22; // [esp+31h] [ebp-5h]
  int v23; // [esp+32h] [ebp-4h] BYREF

  for ( i = (_DWORD *)*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 57); i; i = (_DWORD *)i[12] ) /*0x7187bf*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*i + 352))(i) ) /*0x7187c5*/
    {
      v23 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)) + 160); /*0x7187e7*/
      (*(void (__thiscall **)(_DWORD, int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(**(this + 3) + 364))( /*0x718804*/
        *(this + 3),
        &v23,
        0,
        MEMORY[0x8871E0]->?[5],
        0,
        1,
        0,
        0);
    }
  }
  v22 = 0; /*0x718814*/
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)) + 3278) /*0x71885d*/
    && ((*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 80) & 0x100) != 0
     || *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 59) == 1) )
  {
    v22 = 1; /*0x71885f*/
  }
  v6 = 0; /*0x718867*/
  if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)) + 1660) == 3 ) /*0x718878*/
  {
    v6 = 1; /*0x71887d*/
    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)) + 1040) ) /*0x718887*/
    {
      v7 = (*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)); /*0x718896*/
      v6 = (unsigned __int8)HouseClass::GainedPoweredCenter(v7) != 0; /*0x7188af*/
    }
  }
  LOWORD(v23) = a2 / 256; /*0x7188c1*/
  HIWORD(v23) = a3 / 256; /*0x7188da*/
  if ( *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v23) + 59) != 2 /*0x718962*/
    || v6
    || *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)) + 3278)
    || (*(int (__thiscall **)(_DWORD))(**(this + 3) + 44))(*(this + 3)) == 15
    || (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 80) & 0x100) != 0
    || *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 59) == 1 )
  {
    v13 = *(this + 3); /*0x718a01*/
    LOWORD(v23) = a2 / 256; /*0x718a14*/
    HIWORD(v23) = a3 / 256; /*0x718a2f*/
    v14 = *v13; /*0x718a3c*/
    v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v23); /*0x718a46*/
    if ( (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD, int))(v14 + 428))(*(this + 3), v15, -1, -1, 0, 1) == 7 /*0x718a60*/
      || (LOBYTE(v12) = v22) != 0 )
    {
      LOWORD(v23) = a2 / 256; /*0x718a80*/
      HIWORD(v23) = a3 / 256; /*0x718a95*/
      v16 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v23); /*0x718aa2*/
      if ( !Cell::IsGroundTypeRange(v16) || (*(int (__thiscall **)(_DWORD))(**(this + 3) + 44))(*(this + 3)) == 15 ) /*0x718abd*/
      {
        v19 = (*(int (__thiscall **)(_DWORD))(**(this + 3) + 132))(*(this + 3)); /*0x718b23*/
        v20 = (int)*(this + 3); /*0x718b2f*/
        v23 = *(_DWORD *)(v19 + 160); /*0x718b32*/
        LOBYTE(v12) = (*(int (__thiscall **)(int, int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v20 + 364))( /*0x718b53*/
                        v20,
                        &v23,
                        0,
                        MEMORY[0x8871E0]->?[5],
                        0,
                        1,
                        0,
                        0);
      }
      else
      {
        *((_BYTE *)*(this + 3) + 973) = 1; /*0x718ac2*/
        (*(void (__thiscall **)(_DWORD))(**(this + 3) + 928))(*(this + 3)); /*0x718ace*/
        v12 = *(this + 3); /*0x718ad4*/
        v17 = (_DWORD *)v12[182]; /*0x718ad7*/
        if ( v17 ) /*0x718adf*/
        {
          TechnoClass::MutateAll(v17, v12[266], v12[267]); /*0x718aef*/
          v18 = (*(this + 3))[182]; /*0x718af7*/
          if ( v18 ) /*0x718aff*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v18 + 32))(v18, 1); /*0x718b05*/
          v12 = *(this + 3); /*0x718b08*/
          v12[182] = 0; /*0x718b0e*/
        }
      }
    }
  }
  else
  {
    *((_BYTE *)*(this + 3) + 973) = 1; /*0x71896b*/
    (*(void (__thiscall **)(_DWORD))(**(this + 3) + 928))(*(this + 3)); /*0x718977*/
    v8 = *(this + 3); /*0x71897d*/
    v9 = (_DWORD *)v8[182]; /*0x718980*/
    if ( v9 ) /*0x718988*/
    {
      TechnoClass::MutateAll(v9, v8[266], v8[267]); /*0x718998*/
      v10 = (*(this + 3))[182]; /*0x7189a0*/
      if ( v10 ) /*0x7189a8*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 32))(v10, 1); /*0x7189ae*/
      (*(this + 3))[182] = 0; /*0x7189b4*/
    }
    v11 = *(this + 3); /*0x7189be*/
    if ( v11[266] ) /*0x7189c1*/
    {
      LOBYTE(v12) = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v11 + 224))(v11, v11[266]); /*0x7189ce*/
    }
    else
    {
      v12 = (_DWORD *)v11[267]; /*0x7189dd*/
      if ( v12 ) /*0x7189e5*/
        LOBYTE(v12) = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v11 + 228))(v11, v11[267]); /*0x7189ee*/
    }
  }
  return (char)v12; /*0x7189d4*/
}


// ==== 0x00718B70  Factory::CalculateExitCell  this=Factory  sig=csp ====
char __userpurge Factory_CalculateExitCell@<al>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int *a4, int a5, char a6)
{
  int *v7; // edi
  _DWORD *v8; // ecx
  int *v9; // ebx
  int v10; // ecx
  int *v11; // edx
  int v12; // ebp
  int v13; // ecx
  int v14; // kr20_4
  __int16 *v15; // ecx
  int v16; // kr24_4
  int v17; // edx
  int v18; // edx
  _DWORD *v19; // ebp
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  int *v22; // eax
  int *v23; // edx
  int v24; // ebx
  void *v25; // eax
  void *v26; // eax
  _DWORD *v27; // ecx
  _BYTE *v28; // ebx
  int v29; // ebp
  _DWORD *v30; // eax
  int v31; // ecx
  _DWORD *v32; // eax
  __int16 *v33; // eax
  int v34; // ecx
  int v35; // ebx
  int v36; // ecx
  int v37; // eax
  void *v38; // eax
  _DWORD *v39; // eax
  int *v40; // eax
  _BYTE *v41; // ecx
  int v42; // ebp
  int v43; // ecx
  int v44; // eax
  int v45; // ebx
  void *v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  void *v50; // eax
  _DWORD *v51; // ebp
  int v52; // eax
  int GroundHeight; // eax
  int v54; // ecx
  _DWORD *v56; // ecx
  int TileIndex; // [esp-8h] [ebp-8Ch]
  int v58; // [esp-8h] [ebp-8Ch]
  int v59; // [esp+0h] [ebp-84h]
  _DWORD *v60; // [esp+18h] [ebp-6Ch]
  char v61; // [esp+1Ch] [ebp-68h]
  char v62; // [esp+24h] [ebp-60h]
  int v65; // [esp+38h] [ebp-4Ch]
  int v66; // [esp+3Ch] [ebp-48h] BYREF
  __int16 *v67; // [esp+40h] [ebp-44h] BYREF
  __int16 *v68; // [esp+44h] [ebp-40h] BYREF
  char v69; // [esp+48h] [ebp-3Ch]
  unsigned __int16 v70; // [esp+4Ah] [ebp-3Ah]
  __int16 *v71; // [esp+4Ch] [ebp-38h] BYREF
  int v72; // [esp+50h] [ebp-34h] BYREF
  _DWORD v73[2]; // [esp+54h] [ebp-30h] BYREF
  int v74; // [esp+5Ch] [ebp-28h] BYREF
  int v75; // [esp+60h] [ebp-24h] BYREF
  int v76; // [esp+64h] [ebp-20h] BYREF
  int v77; // [esp+68h] [ebp-1Ch]
  int v78; // [esp+6Ch] [ebp-18h] BYREF
  int v79; // [esp+70h] [ebp-14h] BYREF
  int v80; // [esp+74h] [ebp-10h] BYREF
  int v81[3]; // [esp+78h] [ebp-Ch] BYREF

  v7 = a1 + 10; /*0x718b80*/
  if ( a1[10] == MEMORY[0xB0EBF8] && a1[11] == MEMORY[0xB0EBFC] && a1[12] == MEMORY[0xB0EC00] ) /*0x718b9d*/
  {
    v8 = (_DWORD *)a1[3]; /*0x718ba7*/
    v75 = v8[39]; /*0x718bb6*/
    v76 = v8[40]; /*0x718bbd*/
    v77 = v8[41]; /*0x718bc4*/
    (*(void (__stdcall **)(int *))(*v8 + 244))(&v75); /*0x718bcf*/
  }
  else
  {
    (*(void (__stdcall **)(_DWORD *))(*(_DWORD *)a1[3] + 244))(a1 + 10); /*0x718ba5*/
  }
  v9 = a4; /*0x718bd6*/
  v73[0] = *a4; /*0x718bdf*/
  v10 = *a4; /*0x718be3*/
  v73[1] = a4[1]; /*0x718be8*/
  v74 = a4[2]; /*0x718bef*/
  if ( v10 == MEMORY[0xB0EBF8] && a4[1] == MEMORY[0xB0EBFC] && a4[2] == MEMORY[0xB0EC00] ) /*0x718c13*/
  {
    *v7 = *a4; /*0x71923b*/
    a1[11] = v9[1]; /*0x719240*/
    a1[12] = v9[2]; /*0x719246*/
  }
  else
  {
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v73) + 80) & 0x100) == 0 /*0x718c6e*/
      || (v11 = (int *)(a1[3] + 156),
          v75 = *v11,
          v76 = v11[1],
          v12 = v11[2],
          LOBYTE(v65) = 1,
          v12 <= 3 * MEMORY[0xB0EC38] + Cell::GetGroundHeight(v73)) )
    {
      LOBYTE(v65) = 0; /*0x718c70*/
    }
    if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 44))(a1[3]) == 15 ) /*0x718c80*/
    {
      v13 = a1[3]; /*0x718c86*/
      LOBYTE(a4) = 0; /*0x718c89*/
      if ( (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)v13 + 512))(v13, a3, a2) ) /*0x718c90*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 492))(a1[3]); /*0x718c9f*/
      if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 388))(a1[3]) == 8 /*0x718ce3*/
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 388))(a1[3]) == 9
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 388))(a1[3]) == 7
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 388))(a1[3]) == 25 )
      {
        v71 = *(__int16 **)(a1[3] + 1444); /*0x718cf4*/
        if ( v71 ) /*0x718cf8*/
        {
          if ( (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v71 + 44))(v71) == 1 ) /*0x718d02*/
          {
            v14 = *v9; /*0x718d13*/
            v70 = v9[1] / 256; /*0x718d28*/
            if ( *(_DWORD *)(*(int (__thiscall **)(__int16 *, _DWORD *))(*(_DWORD *)v71 + 440))(v71, v73) == __PAIR32__(v70, v14 / 256) ) /*0x718d3c*/
              a6 = 1; /*0x718d49*/
          }
        }
        v15 = *(__int16 **)(a1[3] + 1444); /*0x718d51*/
        v71 = v15; /*0x718d59*/
        if ( v15 ) /*0x718d5d*/
        {
          if ( (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v15 + 44))(v15) == 2 ) /*0x718d67*/
          {
            v16 = *v9; /*0x718d78*/
            v17 = *(_DWORD *)v71; /*0x718d86*/
            v70 = v9[1] / 256; /*0x718d8b*/
            if ( *(_DWORD *)(*(int (__stdcall **)(_DWORD *))(v17 + 440))(v73) == __PAIR32__(v70, v16 / 256) ) /*0x718da1*/
              a6 = 1; /*0x718dae*/
          }
        }
        v18 = a1[3]; /*0x718db3*/
        v19 = *(_DWORD **)(v18 + 1444); /*0x718db6*/
        if ( v19 ) /*0x718dbe*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(*v19 + 44))(*(_DWORD *)(v18 + 1444)) == 6 ) /*0x718dcb*/
          {
            v20 = Coord::To_Cell(&MEMORY[0x87F7E8], v9); /*0x718dd3*/
            if ( Cell::IsBridge(v20) == v19 ) /*0x718de1*/
              a6 = 1; /*0x718de3*/
          }
        }
      }
      v77 = *v7; /*0x718dee*/
      v78 = a1[11]; /*0x718dfa*/
      v62 = a6; /*0x718e05*/
      v79 = a1[12]; /*0x718e06*/
      v21 = Coord::To_Cell(&MEMORY[0x87F7E8], &v74); /*0x718e1e*/
      v22 = ObjectPlacement::CalcPosition(v21, &v80, &v74, v62, (char)v67, 0); /*0x718e25*/
      *v7 = *v22; /*0x718e32*/
      a1[11] = v22[1]; /*0x718e3b*/
      a1[12] = v22[2]; /*0x718e41*/
      LOWORD(v68) = *v7 / 256; /*0x718e52*/
      v23 = (int *)a1[3]; /*0x718e63*/
      HIWORD(v68) = a1[11] / 256; /*0x718e69*/
      v71 = v68; /*0x718e76*/
      v24 = *v23; /*0x718e7a*/
      v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v71); /*0x718e82*/
      if ( (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD))(v24 + 428))(a1[3], v25, -1, -1, 0) ) /*0x718e8b*/
      {
        *v7 = MEMORY[0xB0EBF8]; /*0x718e9d*/
        a1[11] = MEMORY[0xB0EBFC]; /*0x718ea4*/
        a1[12] = MEMORY[0xB0EC00]; /*0x718ead*/
      }
      v26 = Coord::To_Cell(&MEMORY[0x87F7E8], &v76); /*0x718eba*/
      (*(void (__thiscall **)(void *, int *))(*(_DWORD *)v26 + 72))(v26, &v79); /*0x718ec8*/
      if ( *v7 == MEMORY[0xB0EBF8] && a1[11] == MEMORY[0xB0EBFC] && a1[12] == MEMORY[0xB0EC00] ) /*0x718ef5*/
      {
        v27 = (_DWORD *)a1[3]; /*0x718efb*/
        v28 = (_BYTE *)v27[361]; /*0x718efe*/
        if ( v28 ) /*0x718f06*/
        {
          if ( (v28[20] & 2) != 0 ) /*0x718f10*/
          {
            v29 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v27 + 132))(v27) + 1460); /*0x718f1e*/
            v30 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *, _DWORD))(*(_DWORD *)v28 + 76))(v28, &v78, 0); /*0x718f2f*/
            LOWORD(v67) = *v30 / 256; /*0x718f45*/
            v31 = a1[3]; /*0x718f54*/
            HIWORD(v67) = v30[1] / 256; /*0x718f5c*/
            v68 = v67; /*0x718f65*/
            v32 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v31 + 76))(v31, &v78, 0); /*0x718f70*/
            v33 = (__int16 *)Coord::To_Cell(&MEMORY[0x87F7E8], v32); /*0x718f79*/
            v34 = a1[3]; /*0x718f7e*/
            v71 = v33; /*0x718f81*/
            v69 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v34 + 188))(v34, 0); /*0x718f8e*/
            v67 = 0; /*0x718fae*/
            v35 = a1[3]; /*0x718fb8*/
            v36 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v68) + 80) >> 8; /*0x718fd4*/
            LOBYTE(v36) = v36 & 1; /*0x718fd7*/
            v59 = v36; /*0x718fdd*/
            TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], v71 + 18, v29, v69); /*0x718fee*/
            v37 = (*(int (__thiscall **)(int))(*(_DWORD *)v35 + 132))(v35); /*0x718ff1*/
            v66 = *LayerClass::Pathfinding_Find( /*0x71901b*/
                     &MEMORY[0x87F7E8],
                     (int)&v72,
                     &v72,
                     (__int16 *)&v68,
                     *(_DWORD *)(v37 + 1660),
                     TileIndex,
                     v29,
                     v59,
                     1,
                     1,
                     0,
                     1,
                     0,
                     1,
                     (__int16 *)&v67,
                     0,
                     0);
            if ( v66 != MEMORY[0xB0EBD8] ) /*0x71901f*/
            {
              v38 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v66); /*0x71903d*/
              v61 = (char)a4; /*0x71904f*/
              v60 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v38 + 72))(v38, &v78); /*0x71905a*/
              v39 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v66); /*0x71906a*/
              v40 = ObjectPlacement::CalcPosition(v39, v81, v60, v61, v65, 0); /*0x719071*/
              *v7 = *v40; /*0x71907a*/
              a1[11] = v40[1]; /*0x71907f*/
              a1[12] = v40[2]; /*0x719085*/
            }
          }
        }
      }
    }
    else
    {
      v41 = (_BYTE *)a1[3]; /*0x71908d*/
      if ( v41[636] ) /*0x719090*/
      {
        (*(void (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v41 + 240))(v41, a1 + 10); /*0x71909d*/
      }
      else
      {
        v42 = *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v41 + 132))(v41) + 1460); /*0x7190b0*/
        v43 = *v9 / 256; /*0x7190cf*/
        v44 = v9[1] / 256; /*0x7190d2*/
        LOWORD(a4) = v43; /*0x7190dc*/
        HIWORD(a4) = v44; /*0x7190e1*/
        if ( __PAIR32__(v44, v43) != MEMORY[0xB0EBD8] ) /*0x7190ee*/
        {
          v45 = *(_DWORD *)a1[3]; /*0x719106*/
          v46 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a4); /*0x719114*/
          if ( (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD, int))(v45 + 428))(a1[3], v46, -1, -1, 0, 1) ) /*0x71911d*/
          {
            v47 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&a4, v42, v65); /*0x719137*/
            v48 = a1[3]; /*0x71913e*/
            v68 = 0; /*0x719142*/
            v58 = v47; /*0x719163*/
            v49 = (*(int (__thiscall **)(int))(*(_DWORD *)v48 + 132))(v48); /*0x719166*/
            a4 = (int *)*LayerClass::Pathfinding_Find( /*0x71918c*/
                           &MEMORY[0x87F7E8],
                           (int)&a4,
                           &v72,
                           (__int16 *)&a4,
                           *(_DWORD *)(v49 + 1660),
                           v58,
                           v42,
                           v65,
                           1,
                           1,
                           0,
                           0,
                           0,
                           1,
                           (__int16 *)&v68,
                           0,
                           0);
          }
        }
        if ( a4 != (int *)MEMORY[0xB0EBD8] ) /*0x71919c*/
        {
          (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)a1[3] + 244))(a1[3], a1 + 10); /*0x7191b5*/
          v50 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a4); /*0x7191c5*/
          v51 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v50 + 72))(v50, v81); /*0x7191d6*/
          v52 = (__int16)(v51[1] / 256) << 8; /*0x71920c*/
          *v7 = ((__int16)(*v51 / 256) << 8) + 128; /*0x71920f*/
          a1[11] = v52 + 128; /*0x71921b*/
          a1[12] = 0; /*0x71921e*/
          GroundHeight = Cell::GetGroundHeight(a1 + 10); /*0x719221*/
          v54 = a1[3]; /*0x719226*/
          a1[12] = GroundHeight; /*0x719229*/
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v54 + 240))(v54, a1 + 10); /*0x71922f*/
        }
      }
    }
  }
  if ( *v7 == MEMORY[0xB0EBF8] && a1[11] == MEMORY[0xB0EBFC] && a1[12] == MEMORY[0xB0EC00] ) /*0x71926e*/
  {
    v56 = (_DWORD *)a1[3]; /*0x719286*/
    v75 = v56[39]; /*0x719295*/
    v76 = v56[40]; /*0x71929c*/
    v77 = v56[41]; /*0x7192a3*/
    (*(void (__thiscall **)(_DWORD *, int *))(*v56 + 240))(v56, &v75); /*0x7192ae*/
    return 0; /*0x7192b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)a1[3] + 240))(a1[3], a1 + 10); /*0x719276*/
    return 1; /*0x71927d*/
  }
}


// ==== 0x007192C0  TeleportLocomotionClass::UpdateFacingDirection_3  this=TeleportLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_7192C0(int a1, int a2)
{
  return FacingClass::Update((char *)(*(_DWORD *)(a1 + 8) + 904), &a2); /*0x7192df*/
}


// ==== 0x007192F0  TeleportLocomotionClass::Deploy  this=TeleportLocomotionClass  sig=csp ====
char __stdcall UnitClass::Deploy(_DWORD *a1)
{
  _DWORD *v1; // esi
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  _DWORD *v6; // ecx
  _DWORD *v7; // ebp
  int i; // edi
  int v9; // ecx
  void **v10; // eax
  int *v11; // ecx
  _DWORD *v12; // eax
  int v13; // edi
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  double v17; // st7
  int *v18; // edi
  int v19; // edx
  int v20; // ebx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // ebx
  int *v25; // eax
  _DWORD *v26; // edx
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  int *v30; // edi
  int v31; // eax
  int *v32; // edi
  _DWORD *v33; // ebx
  int *v34; // edi
  int v35; // eax
  int *v36; // edi
  void **v37; // eax
  int *v38; // ecx
  void **v39; // eax
  int *v40; // edx
  int *v41; // edi
  int v42; // eax
  int *v43; // edi
  char PlacementPosition; // al
  int v45; // edi
  int *v46; // ebp
  int *v47; // edi
  int v48; // eax
  int *v49; // edi
  __int16 *v50; // eax
  _BYTE *v51; // ecx
  int v52; // ecx
  void **v53; // eax
  int *v54; // ecx
  _DWORD *v55; // [esp+28h] [ebp-20h] BYREF
  int v56; // [esp+2Ch] [ebp-1Ch] BYREF
  int v57; // [esp+30h] [ebp-18h]
  int v58; // [esp+34h] [ebp-14h]
  char v59[4]; // [esp+38h] [ebp-10h] BYREF
  int v60; // [esp+3Ch] [ebp-Ch]
  int v61; // [esp+44h] [ebp-4h]

  v1 = a1; /*0x7192f6*/
  v2 = a1[2]; /*0x7192fd*/
  v61 = 0; /*0x719300*/
  if ( *(_BYTE *)(v2 + 625) && !a1[13] && !*(_DWORD *)(v2 + 640) ) /*0x719313*/
    goto LABEL_82; /*0x719319*/
  v3 = a1[13]; /*0x719331*/
  if ( !v3 ) /*0x719336*/
  {
    v4 = *(_DWORD *)(v2 + 640); /*0x719338*/
    if ( v4 ) /*0x719340*/
    {
      a1[13] = v4; /*0x719342*/
      return 0; /*0x71934e*/
    }
  }
  if ( *(_BYTE *)(v2 + 636) ) /*0x719351*/
  {
    if ( !v3 ) /*0x7197ce*/
    {
      *(_BYTE *)(v2 + 624) = 1; /*0x7197d0*/
      v1[14] = dword_A8ED54[12]; /*0x7197e4*/
      v1[15] = v60; /*0x7197ea*/
      v1[16] = 60; /*0x7197ed*/
      ++v1[13]; /*0x7197f4*/
      return 0; /*0x719800*/
    }
  }
  else if ( v3 <= 0 ) /*0x719361*/
  {
    if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) ) /*0x71936a*/
    {
      v6 = (_DWORD *)v1[2]; /*0x719375*/
      v7 = v1 + 9; /*0x719378*/
      if ( v6[39] == v1[9] && v6[40] == v1[10] && v6[41] == v1[11] /*0x7193c1*/
        || *v7 == dword_A8ED54[130985] && v1[10] == dword_A8ED54[130986] && v1[11] == dword_A8ED54[130987] )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v6 + 1152))(v6, 0, 1); /*0x7197b4*/
        (*(void (__stdcall **)(_DWORD *))(*v1 + 72))(v1); /*0x7197bd*/
        return 0; /*0x7197c0*/
      }
      else
      {
        AbstractClass::ClearTargetToMeClearManagerTarget((int)v6); /*0x7193c7*/
        for ( i = dword_A8ED50 - 1; i >= 0; --i ) /*0x7193d6*/
        {
          v9 = *((_DWORD *)unk_A8ED44 + i); /*0x7193e1*/
          if ( *(_DWORD *)(v9 + 268) == v1[2] ) /*0x7193ec*/
            BulletClass::LoseTarget((_DWORD **)v9); /*0x7193ee*/
        }
        v10 = (void **)__2_YAPAXI_Z(456); /*0x7193fb*/
        if ( v10 ) /*0x719405*/
        {
          v11 = (int *)(v1[2] + 156); /*0x71940b*/
          v56 = *v11; /*0x71941c*/
          v57 = v11[1]; /*0x719423*/
          v58 = v11[2]; /*0x71942f*/
          AnimClass::ctor(v10, *(void **)(MEMORY[0x87F7E8][7806] + 828), &v56, 0, 1, (void *)0x600, 0, 0); /*0x719442*/
        }
        v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)v1[2] + 72))(v1[2], v59); /*0x719451*/
        v13 = v1[11]; /*0x719459*/
        v14 = *v12 - *v7; /*0x71945c*/
        v15 = v12[1]; /*0x71945e*/
        v16 = v12[2]; /*0x719461*/
        v56 = v14; /*0x719464*/
        v57 = v15 - v1[10]; /*0x71946f*/
        v58 = v16 - v13; /*0x719473*/
        v17 = Math::Sqrt((double)v14 * (double)v14 + (double)(v16 - v13) * (double)(v16 - v13) + (double)v57 /*0x71949f*/
                                                                                               * (double)v57);
        v18 = v1 + 14; /*0x7194ac*/
        v19 = Math::RoundToInt(v17); /*0x7194af*/
        a1 = (_DWORD *)v19; /*0x7194ba*/
        v1[14] = dword_A8ED54[12]; /*0x7194be*/
        v1[15] = v60; /*0x7194c4*/
        v1[16] = 0; /*0x7194c7*/
        v20 = MEMORY[0x87F7E8][7806]; /*0x7194ca*/
        if ( *(_BYTE *)(MEMORY[0x87F7E8][7806] + 3064) ) /*0x7194d0*/
        {
          v21 = v19 / *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3060); /*0x7194e3*/
          *v18 = dword_A8ED54[12]; /*0x7194eb*/
          v1[15] = v60; /*0x7194f1*/
          v1[16] = v21; /*0x7194f4*/
          v20 = MEMORY[0x87F7E8][7806]; /*0x7194f7*/
        }
        v22 = *v18; /*0x7194fd*/
        v23 = v1[16]; /*0x7194ff*/
        if ( *v18 != -1 ) /*0x719505*/
        {
          if ( dword_A8ED54[12] - v22 >= v23 ) /*0x719511*/
            v23 = 0; /*0x719517*/
          else
            v23 -= dword_A8ED54[12] - v22; /*0x719513*/
        }
        v24 = *(_DWORD *)(v20 + 3068); /*0x719519*/
        if ( v23 <= v24 ) /*0x719521*/
        {
          v58 = v24; /*0x71952d*/
          v56 = dword_A8ED54[12]; /*0x719531*/
          v25 = &v56; /*0x719535*/
        }
        else
        {
          v25 = v1 + 14; /*0x719523*/
        }
        *v18 = *v25; /*0x71953d*/
        v1[15] = v25[1]; /*0x719542*/
        v26 = a1; /*0x719548*/
        v1[16] = v25[2]; /*0x71954c*/
        if ( (int)v26 < *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3072) ) /*0x71955b*/
        {
          v27 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3068); /*0x719562*/
          *v18 = dword_A8ED54[12]; /*0x71956a*/
          v1[15] = v60; /*0x719570*/
          v1[16] = v27; /*0x719573*/
        }
        *(_BYTE *)(v1[2] + 625) = 1; /*0x719579*/
        if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v1[2] + 44))(v1[2]) == 1 /*0x719596*/
          && *(_BYTE *)(*(_DWORD *)(v1[2] + 1732) + 3598) )
        {
          v28 = v60; /*0x7195a5*/
          *v18 = dword_A8ED54[12]; /*0x7195ab*/
          v1[15] = v28; /*0x7195ad*/
          v1[16] = 0; /*0x7195b0*/
          *(_BYTE *)(v1[2] + 625) = 0; /*0x7195b6*/
        }
        v29 = *(_DWORD *)(v1[2] + 1684); /*0x7195bf*/
        if ( v29 ) /*0x7195c7*/
          BuildingClass::Deploy(*(_DWORD *)(v29 + 1692), (int)v7, (int)v18); /*0x7195cf*/
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v1[2] + 292))(v1[2], 0); /*0x7195db*/
        v30 = (int *)v1[2]; /*0x7195e1*/
        v31 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v30 + 132))(v30) + 1400); /*0x7195ee*/
        if ( v31 != -1 || (v31 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 540), v31 != -1) ) /*0x719608*/
        {
          v32 = v30 + 39; /*0x71960a*/
          v56 = *v32; /*0x719614*/
          v57 = v32[1]; /*0x71961b*/
          v58 = v32[2]; /*0x719624*/
          StartAudioControllerAt(v31, (int)&v56, 0); /*0x71962c*/
        }
        (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v1[2] + 436))(v1[2], v1 + 9); /*0x719637*/
        LOWORD(a1) = *v7 / 256; /*0x71964c*/
        HIWORD(a1) = v1[10] / 256; /*0x719664*/
        v55 = a1; /*0x71966d*/
        v33 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v55); /*0x71967f*/
        (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v1[2] + 436))(v1[2], v1 + 9); /*0x719684*/
        *(_BYTE *)(v1[2] + 140) = (v33[80] & 0x100) != 0; /*0x719698*/
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v1[2] + 460))(v1[2], 0); /*0x7196b2*/
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v1[2] + 292))(v1[2], 1); /*0x7196bf*/
        v34 = (int *)v1[2]; /*0x7196c5*/
        v35 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v34 + 132))(v34) + 1396); /*0x7196d2*/
        if ( v35 != -1 || (v35 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 536), v35 != -1) ) /*0x7196ec*/
        {
          v36 = v34 + 39; /*0x7196ee*/
          v56 = *v36; /*0x7196f8*/
          v57 = v36[1]; /*0x7196ff*/
          v58 = v36[2]; /*0x719708*/
          StartAudioControllerAt(v35, (int)&v56, 0); /*0x719710*/
        }
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v1[2] + 396))(v1[2], 2); /*0x71971c*/
        (*(void (__stdcall **)(_DWORD *))(*v1 + 72))(v1); /*0x719725*/
        CrateClass::ProcessPickup(v33, (int *)v1[2]); /*0x71972e*/
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)v1[2] + 1152))(v1[2], 0, 1); /*0x71973c*/
        v37 = (void **)__2_YAPAXI_Z(456); /*0x719747*/
        if ( v37 ) /*0x719751*/
        {
          v38 = (int *)(v1[2] + 156); /*0x719758*/
          v56 = *v38; /*0x71976b*/
          v57 = v38[1]; /*0x719772*/
          v58 = v38[2]; /*0x71977e*/
          AnimClass::ctor(v37, *(void **)(MEMORY[0x87F7E8][7806] + 828), &v56, 0, 1, (void *)0x600, 0, 0); /*0x719791*/
        }
        *(_DWORD *)(v1[2] + 640) = 0; /*0x719799*/
        return 0; /*0x7197a3*/
      }
    }
    return 0; /*0x719be5*/
  }
  switch ( v3 ) /*0x719806*/
  {
    case 1: /*0x719806*/
LABEL_82:
      (*(void (__stdcall **)(_DWORD *))(*(a1 - 1) + 40))(a1 - 1); /*0x719b99*/
      return 0; /*0x719bac*/
    case 2: /*0x719806*/
      v39 = (void **)__2_YAPAXI_Z(456); /*0x71982c*/
      if ( v39 ) /*0x719836*/
      {
        v40 = (int *)(v1[2] + 156); /*0x71983c*/
        v56 = *v40; /*0x71984d*/
        v57 = v40[1]; /*0x719854*/
        v58 = v40[2]; /*0x719860*/
        AnimClass::ctor(v39, *(void **)(MEMORY[0x87F7E8][7806] + 828), &v56, 0, 1, (void *)0x600, 0, 0); /*0x719873*/
      }
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v1[2] + 292))(v1[2], 0); /*0x71987e*/
      v41 = (int *)v1[2]; /*0x719884*/
      v42 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v41 + 132))(v41) + 1400); /*0x719891*/
      if ( v42 != -1 || (v42 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 540), v42 != -1) ) /*0x7198ab*/
      {
        v43 = v41 + 39; /*0x7198ad*/
        v56 = *v43; /*0x7198b6*/
        v57 = v43[1]; /*0x7198bd*/
        v58 = v43[2]; /*0x7198c6*/
        StartAudioControllerAt(v42, (int)&v56, 0); /*0x7198ce*/
      }
      *(_BYTE *)(v1[2] + 625) = 1; /*0x7198da*/
      *(_BYTE *)(v1[2] + 636) = 0; /*0x7198e4*/
      *(_BYTE *)(v1[2] + 624) = 0; /*0x7198ee*/
      *(_BYTE *)(v1[2] + 140) = 0; /*0x7198fa*/
      PlacementPosition = ObjectClass::FindPlacementPosition( /*0x71991d*/
                            v1 - 1,
                            *(_DWORD *)(v1[2] + 648),
                            *(_DWORD *)(v1[2] + 652),
                            *(_DWORD *)(v1[2] + 656),
                            0);
      v45 = v1[13] + 1; /*0x719925*/
      v1[13] = v45; /*0x719928*/
      if ( PlacementPosition ) /*0x71992d*/
      {
        v1[13] = v45 + 1; /*0x719936*/
        return 0; /*0x719940*/
      }
      return 0; /*0x71992d*/
    case 3: /*0x719806*/
      if ( ObjectClass::FindPlacementPosition( /*0x719967*/
             a1 - 1,
             *(_DWORD *)(v2 + 648),
             *(_DWORD *)(v2 + 652),
             *(_DWORD *)(v2 + 656),
             0) )
      {
        ++v1[13]; /*0x719970*/
      }
      *(_DWORD *)(v1[2] + 644) = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3052); /*0x719983*/
      return 0; /*0x719990*/
    case 4: /*0x719806*/
      ObjectClass::FindPlacementPosition(a1 - 1, *(_DWORD *)(v2 + 648), *(_DWORD *)(v2 + 652), *(_DWORD *)(v2 + 656), 1); /*0x7199b8*/
      (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v1[2] + 436))(v1[2], v1 + 9); /*0x7199c6*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v1[2] + 460))(v1[2], 0); /*0x7199d2*/
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v1[2] + 292))(v1[2], 1); /*0x7199df*/
      ++v1[13]; /*0x7199e9*/
      return 0; /*0x7199f5*/
  }
  if ( v3 != 5 ) /*0x7199fb*/
  {
    if ( v3 != 6 ) /*0x719b97*/
    {
      if ( v3 == 7 ) /*0x719bb2*/
      {
        *(_BYTE *)(v2 + 625) = 0; /*0x719bb4*/
        TechnoClass::SetFocus((_DWORD *)v1[2], 0); /*0x719bbf*/
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)v1[2] + 1152))(v1[2], 0, 1); /*0x719bcc*/
        *((_BYTE *)v1 + 48) = 0; /*0x719bd2*/
        *(_DWORD *)(v1[2] + 640) = 0; /*0x719bd9*/
        v1[13] = 0; /*0x719bdf*/
      }
      return 0; /*0x719bdf*/
    }
    goto LABEL_82; /*0x719b97*/
  }
  v46 = a1 + 9; /*0x719a03*/
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v2 + 436))(v2, a1 + 9); /*0x719a07*/
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v1[2] + 460))(v1[2], 0); /*0x719a13*/
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v1[2] + 292))(v1[2], 1); /*0x719a20*/
  v47 = (int *)v1[2]; /*0x719a26*/
  v48 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v47 + 132))(v47) + 1396); /*0x719a33*/
  if ( v48 != -1 || (v48 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 536), v48 != -1) ) /*0x719a4d*/
  {
    v49 = v47 + 39; /*0x719a4f*/
    v56 = *v49; /*0x719a58*/
    v57 = v49[1]; /*0x719a5f*/
    v58 = v49[2]; /*0x719a68*/
    StartAudioControllerAt(v48, (int)&v56, 0); /*0x719a70*/
  }
  v50 = (__int16 *)(*(int (__thiscall **)(_DWORD, _DWORD **))(*(_DWORD *)v1[2] + 440))(v1[2], &a1); /*0x719a81*/
  if ( !LayerClass::IsWithinUsableArea(MEMORY[0x87F7E8], v50, 1) ) /*0x719a8d*/
    *(_BYTE *)(v1[2] + 981) = 0; /*0x719a99*/
  if ( !*(_DWORD *)(v1[2] + 640) ) /*0x719aa3*/
    ProcessUnitDeploymentAtCell((int **)v1 - 1, *v46, v1[10], v1[11]); /*0x719ac4*/
  v51 = (_BYTE *)v1[2]; /*0x719ac9*/
  if ( !v51[144] ) /*0x719ad4*/
    return 0; /*0x719ad4*/
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v51 + 396))(v51, 2); /*0x719ade*/
  (*(void (__stdcall **)(_DWORD *))(*v1 + 72))(v1); /*0x719ae7*/
  *(_DWORD *)(v1[2] + 1064) = 0; /*0x719aee*/
  *(_DWORD *)(v1[2] + 1068) = 0; /*0x719af7*/
  TechnoClass::SetFocus((_DWORD *)v1[2], 0); /*0x719b00*/
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)v1[2] + 1152))(v1[2], 0, 1); /*0x719b0d*/
  v52 = *(_DWORD *)(v1[2] + 644); /*0x719b23*/
  v1[14] = dword_A8ED54[12]; /*0x719b29*/
  v1[15] = v60; /*0x719b2f*/
  v1[16] = v52; /*0x719b32*/
  v53 = (void **)__2_YAPAXI_Z(456); /*0x719b35*/
  if ( v53 ) /*0x719b3f*/
  {
    v54 = (int *)(v1[2] + 156); /*0x719b45*/
    v56 = *v54; /*0x719b56*/
    v57 = v54[1]; /*0x719b5d*/
    v58 = v54[2]; /*0x719b69*/
    AnimClass::ctor(v53, *(void **)(MEMORY[0x87F7E8][7806] + 828), &v56, 0, 1, (void *)0x600, 0, 0); /*0x719b7c*/
  }
  ++v1[13]; /*0x719b85*/
  return 0; /*0x719327*/
}


// ==== 0x00719BF0  TeleportLocomotionClass::SetCoordinateField  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_719BF0(_DWORD *a1)
{
  int v1; // edx
  int result; // eax
  _DWORD *v3; // ecx

  v1 = a1[15]; /*0x719bf5*/
  result = a1[17]; /*0x719bf8*/
  if ( v1 == -1 ) /*0x719bfe*/
  {
LABEL_4:
    if ( result ) /*0x719c10*/
      return result; /*0x719c10*/
    goto LABEL_5; /*0x719c10*/
  }
  if ( (int)MEMORY[0xA8ED84] - v1 < result ) /*0x719c0a*/
  {
    result -= (int)MEMORY[0xA8ED84] - v1; /*0x719c0c*/
    goto LABEL_4; /*0x719c0c*/
  }
LABEL_5:
  *(_BYTE *)(a1[3] + 625) = 0; /*0x719c12*/
  v3 = (_DWORD *)a1[3]; /*0x719c1c*/
  if ( !v3[173] ) /*0x719c1f*/
  {
    Mission::GetMissionDelay(v3); /*0x719c29*/
    if ( !JumpjetLocomotionClass::StubReturnZero_16((_DWORD *)a1[3]) ) /*0x719c31*/
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)a1[3] + 1156))(a1[3], 0, 1); /*0x719c43*/
  }
  result = a1[14]; /*0x719c49*/
  if ( result > 0 ) /*0x719c4e*/
    a1[14] = ++result; /*0x719c51*/
  return result; /*0x719c54*/
}


// ==== 0x00719C60  TeleportLocomotionClass::StubReturnZero_17  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_719C60(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x719c66*/
    return -2147467261; /*0x719c68*/
  *a2 = 1247291207; /*0x719c76*/
  a2[1] = 298948665; /*0x719c7e*/
  a2[2] = -1610610249; /*0x719c87*/
  a2[3] = -777003740; /*0x719c90*/
  return 0; /*0x719c6d*/
}


// ==== 0x00719CA0  TeleportLocomotionClass::InitMultiFieldArray_0  this=TeleportLocomotionClass  sig=csp ====
HRESULT __stdcall JumpjetLocomotionClass::sub_719CA0(int *a1, int *pStm)
{
  IStream *v2; // edi
  int v3; // ebp
  wchar_t *v4; // eax
  int v5; // eax
  LPVOID *v6; // esi

  v2 = (IStream *)pStm; /*0x719ca7*/
  v3 = SwizzleManager::SaveLoad(a1, pStm); /*0x719cb2*/
  if ( v3 < 0 ) /*0x719cb6*/
    return v3; /*0x719cb6*/
  if ( a1 ) /*0x719cba*/
  {
    *a1 = (int)&LocomotionClass::`vftable'; /*0x719cbc*/
    a1[1] = (int)&vt_LocomotionClass; /*0x719cc2*/
    v4 = MEMORY[0xA8ED84]; /*0x719cc9*/
    a1[17] = 0; /*0x719cce*/
    a1[15] = (int)v4; /*0x719cd5*/
    a1[18] = 0; /*0x719cd8*/
    *a1 = (int)&TeleportLocomotionClass::`vftable'; /*0x719cdf*/
    a1[1] = (int)&TeleportLocomotionClass::`vftable'; /*0x719ce5*/
    a1[6] = (int)&vt_TeleportLocomotionClass; /*0x719cec*/
  }
  v2->__pad_0->Read(v2, &pStm, 1, 0); /*0x719cff*/
  if ( !(_BYTE)pStm ) /*0x719d08*/
    return v3; /*0x719d34*/
  v5 = a1[18]; /*0x719d0a*/
  v6 = (LPVOID *)(a1 + 18); /*0x719d0d*/
  if ( v5 ) /*0x719d12*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 8))(v5); /*0x719d17*/
  *v6 = 0; /*0x719d21*/
  return OleLoadFromStream(v2, &IID_ILocomotion, v6); /*0x719d2d*/
}


// ==== 0x00719D40  TeleportLocomotionClass::CheckWindowsErrorWrapper_2  this=TeleportLocomotionClass  sig=csp ====
HRESULT __stdcall JumpjetLocomotionClass::CheckWindowsErrorWrapper_2(int *a1, int *pPStm, int a3)
{
  IStream *v3; // esi
  int *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  int (__stdcall ***v7)(_DWORD, void *, int **); // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x719d46*/
  v4 = a1; /*0x719d4b*/
  IPersistStream = LoadIPersistStream(a1, pPStm, a3); /*0x719d57*/
  if ( IPersistStream < 0 ) /*0x719d5b*/
    return IPersistStream; /*0x719d5b*/
  if ( !v4[18] ) /*0x719d66*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x719e03*/
    LOBYTE(a3) = 0; /*0x719e0f*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x719e14*/
    return IPersistStream; /*0x719e18*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x719d6c*/
  LOBYTE(a3) = 1; /*0x719d78*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x719d7d*/
  v7 = (int (__stdcall ***)(_DWORD, void *, int **))v4[18]; /*0x719d80*/
  pPStm = 0; /*0x719d83*/
  if ( v7 ) /*0x719d8d*/
  {
    v8 = (**v7)(v7, &unk_820270, &a1); /*0x719d9e*/
    if ( v8 >= 0 ) /*0x719da2*/
    {
      v9 = a1; /*0x719dbb*/
      if ( pPStm ) /*0x719dc1*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x719dc6*/
      pPStm = v9; /*0x719dc9*/
    }
    else
    {
      Function::Method_4B4D60((int *)&pPStm); /*0x719da8*/
      pPStm = 0; /*0x719dad*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x719dd7*/
      WinAPI::Wrapper(v8); /*0x719dda*/
  }
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x719deb*/
  if ( pPStm ) /*0x719df3*/
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x719df8*/
  return v10; /*0x719dfd*/
}


// ==== 0x00719E20  TeleportLocomotionClass::SmallStub_719E20  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_719E20(int a1)
{
  return 2; /*0x719e25*/
}


// ==== 0x00719E30  TeleportLocomotionClass::UpdateAltitude  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_719E30(int a1, const void *a2, int *a3)
{
  int result; // eax
  int v4; // eax

  result = LocomotionClass::QueryInterface(a1, a2, a3); /*0x719e42*/
  if ( result == -2147467262 ) /*0x719e4c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x719e5b*/
    {
      if ( a1 ) /*0x719e62*/
        v4 = a1 + 24; /*0x719e64*/
      else
        v4 = 0; /*0x719e69*/
      *a3 = v4; /*0x719e6b*/
    }
    if ( *a3 ) /*0x719e6e*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x719e82*/
      return 0; /*0x719e85*/
    }
    else
    {
      return -2147467262; /*0x719e76*/
    }
  }
  return result; /*0x719e74*/
}


// ==== 0x00719E90  JumpjetLocomotionClass::StubReturnZero_18  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_719E90(int a1, int a2)
{
  if ( !a2 ) /*0x719e96*/
    return -2147467261; /*0x719e98*/
  if ( *(_DWORD *)(a1 + 48) ) /*0x719ea4*/
    return -2147467259; /*0x719ecb*/
  *(_DWORD *)(a1 + 48) = a2; /*0x719eb2*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x719eb8*/
  return 0; /*0x719e9d*/
}


// ==== 0x00719EE0  JumpjetLocomotionClass::StubReturnZero_19  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_719EE0(int a1, _DWORD *a2)
{
  int v3; // ecx
  int v4; // ecx

  if ( !a2 ) /*0x719ee9*/
    return -2147467261; /*0x719eeb*/
  v3 = *(_DWORD *)(a1 - 12); /*0x719ef8*/
  if ( v3 ) /*0x719efd*/
  {
    *(_DWORD *)(v3 + 1064) = 0; /*0x719eff*/
    *(_DWORD *)(*(_DWORD *)(a1 - 12) + 1068) = 0; /*0x719f08*/
  }
  v4 = *(_DWORD *)(a1 + 48); /*0x719f0e*/
  if ( !v4 ) /*0x719f13*/
    return 1; /*0x719f20*/
  *a2 = v4; /*0x719f15*/
  *(_DWORD *)(a1 + 48) = 0; /*0x719f17*/
  return 0; /*0x719ef0*/
}


// ==== 0x00719F30  JumpjetLocomotionClass::StubReturnTrue_7  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_719F30(int a1)
{
  int v1; // eax
  bool result; // al

  result = 0; /*0x719f75*/
  if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(a1 - 20) + 16))(a1 - 20) ) /*0x719f3c*/
  {
    if ( *(_DWORD *)(a1 + 48) ) /*0x719f43*/
    {
      if ( !*(_BYTE *)(a1 + 29) ) /*0x719f4a*/
      {
        v1 = *(_DWORD *)(a1 - 12); /*0x719f51*/
        if ( !*(_BYTE *)(v1 + 636) && !*(_DWORD *)(a1 + 32) && !*(_BYTE *)(v1 + 1709) ) /*0x719f65*/
          return 1; /*0x719f41*/
      }
    }
  }
  return result; /*0x719f71*/
}


// ==== 0x00719F80  JumpjetLocomotionClass::LoadLocomotionFromStream_3  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_719F80(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // ebp
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edi

  v2 = a2; /*0x719f81*/
  if ( !a2 ) /*0x719f88*/
    return -2147467261; /*0x719f91*/
  v4 = a1 + 12; /*0x719f9b*/
  if ( a1[12] ) /*0x719f98*/
  {
    a1 = 0; /*0x719fa4*/
    v5 = StreamClass::Set2(&a1, v4); /*0x719fb5*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x719fc3*/
      WinAPI::Wrapper(v5); /*0x719fc6*/
    if ( !a1 ) /*0x719fd1*/
      return -2147467259; /*0x719fda*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*a1 + 12))(a1, v2); /*0x719fe4*/
    if ( a1 ) /*0x719fec*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a1 + 8))(a1); /*0x719ff5*/
      return v6; /*0x719ffc*/
    }
  }
  else
  {
    a2 = 0; /*0x71a002*/
    if ( a1 == (_DWORD *)24 ) /*0x71a00c*/
      return -2147467259; /*0x71a00c*/
    v7 = (*(int (__stdcall **)(_DWORD *, void *, _DWORD **))*(a1 - 6))(a1 - 6, &unk_818858, &a1); /*0x71a01d*/
    if ( v7 >= 0 ) /*0x71a021*/
    {
      v9 = a1; /*0x71a035*/
      ComPtr::Release_Alt((int *)&a2); /*0x71a03d*/
      v8 = v9; /*0x71a042*/
      a2 = v9; /*0x71a045*/
    }
    else
    {
      ComPtr::Release_Alt((int *)&a2); /*0x71a027*/
      v8 = 0; /*0x71a02c*/
      a2 = 0; /*0x71a02e*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x71a053*/
      WinAPI::Wrapper(v7); /*0x71a056*/
    if ( !v8 ) /*0x71a061*/
      return -2147467259; /*0x71a06a*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v8 + 12))(v8, v2); /*0x71a074*/
    if ( a2 ) /*0x71a07c*/
      (*(void (__stdcall **)(_DWORD *))(*a2 + 8))(a2); /*0x71a081*/
  }
  return v6; /*0x719f8a*/
}


// ==== 0x0071A090  TeleportLocomotionClass::DispatchVirtualCall_7  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_71A090(_DWORD *a1, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x71a090*/
  if ( !a2 ) /*0x71a099*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(_DWORD *, _BYTE *))(*a1 + 24))(a1, v6); /*0x71a0a8*/
    v5[0] = *v3; /*0x71a0ad*/
    v5[1] = v3[1]; /*0x71a0b4*/
    v4 = a1[2]; /*0x71a0bb*/
    v5[2] = v3[2]; /*0x71a0be*/
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 244))(v4, v5); /*0x71a0c9*/
  }
  return result; /*0x71a0d0*/
}


// ==== 0x0071A0E0  TeleportLocomotionClass::IUnknownAddRef  this=TeleportLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_71A0E0(int a1)
{
  return COM::AddRef(a1); /*0x71a0ea*/
}


// ==== 0x0071A0F0  TeleportLocomotionClass::IUnknownRelease  this=TeleportLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_71A0F0(volatile LONG *a1)
{
  return COM::ReleaseRef(a1); /*0x71a0fa*/
}


// ==== 0x0071A100  JumpjetLocomotionClass::ShortFunc_71A100  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_71A100(int a1)
{
  return *(_DWORD *)(a1 + 48) != 0; /*0x71a10e*/
}


// ==== 0x0071A120  TeleportLocomotionClass::SmallStub_71A120  this=TeleportLocomotionClass  sig=csp ====
int JumpjetLocomotionClass::sub_71A120()
{
  return 76; /*0x71a125*/
}


// ==== 0x0071A130  TeleportLocomotionClass::ConstructLocomotor  this=TeleportLocomotionClass  sig=csp ====
TeleportLocomotionClass *__thiscall JumpjetLocomotionClass::ConstructLocomotor(ILocomotion **Block, char a2)
{
  ILocomotion *v3; // eax

  v3 = *(Block + 18); /*0x71a133*/
  if ( v3 ) /*0x71a138*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)v3 + 8))(v3); /*0x71a13d*/
  LocomotionClass::Construct(Block); /*0x71a142*/
  if ( (a2 & 1) != 0 ) /*0x71a14c*/
    __3_YAXPAX_Z(Block); /*0x71a14f*/
  return (TeleportLocomotionClass *)Block; /*0x71a159*/
}


// ==== 0x0071A160  JumpjetLocomotionClass::SmallStub_71A160  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_71A160(int a1, const void *a2, int *a3)
{
  return JumpjetLocomotionClass::UpdateAltitude(a1 - 4, a2, a3);
}


// ==== 0x0071A170  JumpjetLocomotionClass::SmallStub_71A170  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_71A170(int a1)
{
  return JumpjetLocomotionClass::IUnknownAddRef(a1 - 4);
}


// ==== 0x0071A180  JumpjetLocomotionClass::SmallStub_71A180  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_71A180(int a1)
{
  return JumpjetLocomotionClass::IUnknownRelease((volatile LONG *)(a1 - 4));
}


// ==== 0x0071A190  JumpjetLocomotionClass::SmallStub_71A190  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_71A190(int a1, const void *a2, int *a3)
{
  return JumpjetLocomotionClass::UpdateAltitude(a1 - 24, a2, a3);
}


// ==== 0x0071A1A0  JumpjetLocomotionClass::SmallStub_71A1A0  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_71A1A0(int a1)
{
  return JumpjetLocomotionClass::IUnknownAddRef(a1 - 24);
}


// ==== 0x0071A1B0  JumpjetLocomotionClass::SmallStub_71A1B0  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_71A1B0(int a1)
{
  return JumpjetLocomotionClass::IUnknownRelease((volatile LONG *)(a1 - 24));
}


// ==== 0x0071A1C0  sub_71A1C0  this=-  sig=ida-proto ====
void sub_71A1C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71a1cc*/
  MEMORY[0xB0EC78] = Math::Sqrt(v0 + v0); /*0x71a1de*/
}


// ==== 0x0071A1F0  sub_71A1F0  this=-  sig=ida-proto ====
void sub_71A1F0()
{
  MEMORY[0xB0ECC8] = MEMORY[0xB0EC78] / 60.0; /*0x71a1fc*/
}


// ==== 0x0071A210  sub_71A210  this=-  sig=ida-proto ====
void sub_71A210()
{
  MEMORY[0xB0ECB0] = 1.0 / MEMORY[0xB0ECC8]; /*0x71a21c*/
}


// ==== 0x0071A230  sub_71A230  this=-  sig=ida-proto ====
void sub_71A230()
{
  MEMORY[0xB0ECA8] = 0.0174532925199433 * 45.0; /*0x71a23c*/
}


// ==== 0x0071A250  sub_71A250  this=-  sig=ida-proto ====
void sub_71A250()
{
  MEMORY[0xB0EC80] = 0.0174532925199433 * 60.0; /*0x71a25c*/
}


// ==== 0x0071A270  sub_71A270  this=-  sig=ida-proto ====
void sub_71A270()
{
  MEMORY[0xB0EC40] = 0.0174532925199433 * 90.0; /*0x71a27c*/
}


// ==== 0x0071A290  sub_71A290  this=-  sig=ida-proto ====
__int64 sub_71A290()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0EC40] - MEMORY[0xB0EC80]); /*0x71a2a2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0EC78] * 0.5); /*0x71a2b6*/
  MEMORY[0xB0ECD0] = result; /*0x71a2bb*/
  return result; /*0x71a2c0*/
}


// ==== 0x0071A2D0  sub_71A2D0  this=-  sig=ida-proto ====
void sub_71A2D0()
{
  MEMORY[0xB0EC88] = Math::ArcTan((double)MEMORY[0xB0ECD0] * 0.00390625); /*0x71a2e7*/
}


// ==== 0x0071A300  sub_71A300  this=-  sig=ida-proto ====
void sub_71A300()
{
  MEMORY[0xB0ECA0] = Math::ArcTan((double)(2 * MEMORY[0xB0ECD0]) / MEMORY[0xB0EC78]); /*0x71a322*/
}


// ==== 0x0071A330  sub_71A330  this=-  sig=ida-proto ====
__int64 sub_71A330()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0ECD0]) + 0.5); /*0x71a34b*/
  MEMORY[0xB0ECC4] = result; /*0x71a350*/
  return result; /*0x71a356*/
}


// ==== 0x0071A360  sub_71A360  this=-  sig=ida-proto ====
int sub_71A360()
{
  MEMORY[0xB0EC58] = 0; /*0x71a362*/
  MEMORY[0xB0EC5A] = 0; /*0x71a368*/
  return 0; /*0x71a36e*/
}


// ==== 0x0071A370  sub_71A370  this=-  sig=ida-proto ====
int sub_71A370()
{
  MEMORY[0xB0EC90] = 0; /*0x71a372*/
  MEMORY[0xB0EC94] = 0; /*0x71a377*/
  MEMORY[0xB0EC98] = 0; /*0x71a37c*/
  return 0; /*0x71a381*/
}


// ==== 0x0071A390  sub_71A390  this=-  sig=ida-proto ====
int sub_71A390()
{
  MEMORY[0xB0ECC0] = 0; /*0x71a395*/
  MEMORY[0xB0ECB8] = 128; /*0x71a39f*/
  MEMORY[0xB0ECBC] = 128; /*0x71a3a4*/
  return 128; /*0x71a3a9*/
}


// ==== 0x0071A3B0  sub_71A3B0  this=-  sig=ida-proto ====
int sub_71A3B0()
{
  MEMORY[0xB0EC48] = 0; /*0x71a3b2*/
  MEMORY[0xB0EC4C] = 0; /*0x71a3b7*/
  MEMORY[0xB0EC50] = 0; /*0x71a3bc*/
  MEMORY[0xB0EC54] = 0; /*0x71a3c1*/
  return 0; /*0x71a3c6*/
}


// ==== 0x0071A3D0  sub_71A3D0  this=-  sig=ida-proto ====
int sub_71A3D0()
{
  MEMORY[0xB0EC64] = 0; /*0x71a3d7*/
  MEMORY[0xB0EC68] = 0; /*0x71a3dc*/
  MEMORY[0xB0EC6C] = 1; /*0x71a3e1*/
  MEMORY[0xB0EC6D] = 0; /*0x71a3e8*/
  MEMORY[0xB0EC60] = (int)&vt_DynamicVectorClass_TemporalClass; /*0x71a3ed*/
  MEMORY[0xB0EC74] = 10; /*0x71a3f7*/
  MEMORY[0xB0EC70] = 0; /*0x71a401*/
  return atexit(sub_71A410); /*0x71a40c*/
}


// ==== 0x0071A410  sub_71A410  this=-  sig=ida-proto ====
void __cdecl sub_71A410()
{
  MEMORY[0xB0EC60] = (int)&vt_VectorClass_TemporalClass; /*0x71a418*/
  if ( MEMORY[0xB0EC64] && MEMORY[0xB0EC6D] ) /*0x71a42c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0EC64]); /*0x71a42f*/
    MEMORY[0xB0EC64] = 0; /*0x71a437*/
  }
  MEMORY[0xB0EC6D] = 0; /*0x71a43d*/
  MEMORY[0xB0EC68] = 0; /*0x71a443*/
}


// ==== 0x0071A450  TemporalClass::Constructor  this=TemporalClass  sig=csp ====
int __thiscall sub_71A450(int this)
{
  wchar_t *v2; // eax
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x71a453*/
  v2 = MEMORY[0xA8ED84]; /*0x71a458*/
  *(_DWORD *)(this + 52) = 0; /*0x71a45d*/
  *(_DWORD *)(this + 44) = v2; /*0x71a464*/
  *(_DWORD *)this = &TemporalClass::`vftable'; /*0x71a467*/
  *(_DWORD *)(this + 4) = &TemporalClass::`vftable'; /*0x71a46d*/
  *(_DWORD *)(this + 8) = &TemporalClass::`vftable'; /*0x71a474*/
  *(_DWORD *)(this + 12) = &vt_TemporalClass; /*0x71a47b*/
  if ( MEMORY[0xB0EC70] < MEMORY[0xB0EC68] /*0x71a4b7*/
    || (MEMORY[0xB0EC6D] || !MEMORY[0xB0EC68])
    && MEMORY[0xB0EC74] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0EC60] + 8))(
         &MEMORY[0xB0EC60],
         MEMORY[0xB0EC68] + MEMORY[0xB0EC74],
         0) )
  {
    v3 = MEMORY[0xB0EC70]++; /*0x71a4c4*/
    *((_DWORD *)MEMORY[0xB0EC64] + v3) = this; /*0x71a4d3*/
  }
  return this; /*0x71a4d8*/
}


// ==== 0x0071A4E0  TemporalClass::TemporalClass  this=TemporalClass  sig=csp ====
_DWORD *__thiscall TemporalClass::TemporalClass(_DWORD *this, TechnoClass *aP1)
{
  int v3; // eax
  int v5; // [esp+Ch] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x71a4e7*/
  this->q02C = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x71a4fb*/
  this->TemporalClass_field_34 = 0; /*0x71a4fe*/
  *this = &TemporalClass::`vftable'; /*0x71a501*/
  this->vtable2 = &TemporalClass::`vftable'; /*0x71a507*/
  this->vtable3 = &TemporalClass::`vftable'; /*0x71a50e*/
  this->vtable4 = &vt_TemporalClass; /*0x71a515*/
  this->creationFrame = aP1; /*0x71a51c*/
  this->q028 = 0; /*0x71a51f*/
  this->q02C = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x71a529*/
  this->TemporalClass_field_30 = v5; /*0x71a52c*/
  this->TemporalClass_field_34 = 0; /*0x71a52f*/
  this->uniqueId = 0; /*0x71a532*/
  this->q044 = 0; /*0x71a535*/
  if ( *(int *)&stru_B05488.__pad_579C[16460] < *(int *)&stru_B05488.__pad_579C[16452] /*0x71a569*/
    || (stru_B05488.__pad_579C[16457] || !*(_DWORD *)&stru_B05488.__pad_579C[16452])
    && *(int *)&stru_B05488.__pad_579C[16464] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[16444] + 8))(
         &stru_B05488.__pad_579C[16444],
         *(_DWORD *)&stru_B05488.__pad_579C[16452] + *(_DWORD *)&stru_B05488.__pad_579C[16464],
         0) )
  {
    v3 = (*(_DWORD *)&stru_B05488.__pad_579C[16460])++; /*0x71a576*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[16448] + 4 * v3) = this; /*0x71a585*/
  }
  this->q048 = 0; /*0x71a588*/
  this->q04C = 0; /*0x71a58b*/
  this->q038 = 0; /*0x71a58e*/
  this->q03C = 0; /*0x71a591*/
  return this; /*0x71a596*/
}


// ==== 0x0071A650  TemporalClass::SetTarget  this=TemporalClass  sig=csp ====
int __thiscall TemporalClass::SetTarget(void *this, AbstractClass *aP1)
{
  return AbstractClass::ProcessPower((#378 *)this); /*0x71a65a*/
}


// ==== 0x0071A660  TemporalClass::LoadTemporal  this=TemporalClass  sig=csp ====
int __stdcall TemporalClass::LoadTemporal(AbstractClass *aP0, int aP1)
{
  AbstractClass *Prefix_0; // edi

  Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x71a671*/
  if ( (int)Prefix_0 >= 0 ) /*0x71a675*/
  {
    if ( aP0 ) /*0x71a679*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x71a682*/
      *(_DWORD *)aP0->__pad_0 = &TemporalClass::`vftable'; /*0x71a687*/
      *(_DWORD *)&aP0->__pad_0[4] = &TemporalClass::`vftable'; /*0x71a68d*/
      *(_DWORD *)&aP0->__pad_0[8] = &TemporalClass::`vftable'; /*0x71a694*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_TemporalClass; /*0x71a69b*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]); /*0x71a6ab*/
    ObjectPtr::RegisterForTracking( /*0x71a6b9*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x71a6c7*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].referenceCount);
    ObjectPtr::RegisterForTracking( /*0x71a6d5*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].NeedsSaveOrLink);
    ObjectPtr::RegisterForTracking( /*0x71a6e3*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].abstractFlags);
    ObjectPtr::RegisterForTracking( /*0x71a6f1*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].nextArrayIndex);
  }
  return (int)Prefix_0->__pad_0; /*0x71a6f8*/
}


// ==== 0x0071A700  TemporalClass::SaveTemporal  this=TemporalClass  sig=csp ====
int __stdcall TemporalClass::SaveTemporal(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x71a714*/
}


// ==== 0x0071A720  TemporalClass::ddtor  this=TemporalClass  sig=csp ====
int __stdcall TemporalClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x71a726*/
    return -2147467261; /*0x71a728*/
  *a2 = -1810815964; /*0x71a736*/
  a2[1] = 299099139; /*0x71a73e*/
  a2[2] = 1342205582; /*0x71a747*/
  a2[3] = -72177148; /*0x71a750*/
  return 0; /*0x71a72d*/
}


// ==== 0x0071A760  TemporalClass::ProcessTimeWarp  this=TemporalClass  sig=csp ====
void **__thiscall TemporalClass::_vt23(int *this)
{
  _DWORD *v2; // ecx
  void **result; // eax
  int v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  int v7; // ebp
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  double v12; // st7
  int **v13; // ecx
  int WarpPerStep; // ebp
  int *v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int *v22; // ecx
  int v23; // edi
  int v24; // ebp
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // ebp
  int v28; // eax
  int v29; // ecx
  _DWORD *v30; // edi
  _DWORD *v31; // eax
  _DWORD *v32; // ecx
  int v33; // edx
  int v34; // edi
  int *v35; // eax
  _DWORD *v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // [esp+Ch] [ebp-38h]
  int v40; // [esp+20h] [ebp-24h] BYREF
  int v41; // [esp+24h] [ebp-20h]
  int v42; // [esp+28h] [ebp-1Ch]
  _BYTE v43[12]; // [esp+2Ch] [ebp-18h] BYREF
  _BYTE v44[12]; // [esp+38h] [ebp-Ch] BYREF

  v2 = (_DWORD *)this->q028; /*0x71a76b*/
  if ( v2 && (int *)v2[158] == this && this->uniqueId )
  {
    v2[158] = 0; /*0x71a77f*/
    *(_BYTE *)(this->q028 + 624) = 0; /*0x71a78a*/
    return (void **)TagClass::Unlink(this); /*0x71a790*/
  }
  else
  {
    v4 = this->creationFrame; /*0x71a79d*/
    if ( !v4 ) /*0x71a7a2*/
      goto LABEL_10; /*0x71a7a2*/
    if ( !*(_BYTE *)(v4 + 130) ) /*0x71a7a8*/
      goto LABEL_10; /*0x71a7a8*/
    if ( !v2 ) /*0x71a7b6*/
      goto LABEL_10; /*0x71a7b6*/
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v2 + 72))(v2, v43); /*0x71a7c9*/
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this->creationFrame + 72))(this->creationFrame, v44); /*0x71a7d2*/
    v7 = v5[1]; /*0x71a7d9*/
    v8 = *v6 - *v5; /*0x71a7dc*/
    v9 = v6[1]; /*0x71a7de*/
    v10 = v6[2]; /*0x71a7e1*/
    v40 = v8; /*0x71a7e4*/
    v11 = v10 - v5[2]; /*0x71a7ed*/
    v41 = v9 - v7; /*0x71a7ef*/
    v42 = v11; /*0x71a7f3*/
    v12 = Math::Sqrt((double)v8 * (double)v8 + (double)v11 * (double)v11 + (double)(v9 - v7) * (double)(v9 - v7)); /*0x71a81f*/
    if ( (int)Math::RoundToInt(v12) > MEMORY[0x8871E0]->? << 8 )
    {
      return (void **)FactoryClass::CompleteItem(this); /*0x71a841*/
    }
    else
    {
LABEL_10:
      v13 = (int **)this->q011; /*0x71a84e*/
      WarpPerStep = 0; /*0x71a851*/
      if ( v13 ) /*0x71a855*/
        WarpPerStep = TemporalClass::GetWarpPerStep(v13, 1); /*0x71a85e*/
      v15 = (int *)this->creationFrame; /*0x71a860*/
      v16 = *v15; /*0x71a864*/
      v17 = (*(int (__thiscall **)(int *, _DWORD))(*v15 + 740))(v15, 0); /*0x71a866*/
      v18 = (*(int (__thiscall **)(_DWORD, int))(v16 + 1016))(this->creationFrame, v17); /*0x71a870*/
      v19 = this->q012; /*0x71a878*/
      v20 = *(_DWORD *)(*(_DWORD *)v18 + 164); /*0x71a87b*/
      this->q04C = v20; /*0x71a881*/
      result = (void **)(v19 - (WarpPerStep + v20)); /*0x71a888*/
      this->q012 = (int)result; /*0x71a88a*/
      if ( (int)result <= 0 )
      {
        if ( this->q028 ) /*0x71a895*/
        {
          result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x71a8c2*/
          if ( result ) /*0x71a8cc*/
          {
            v22 = (int *)(this->q028 + 156); /*0x71a8d2*/
            v40 = *v22; /*0x71a8e3*/
            v41 = v22[1]; /*0x71a8ea*/
            v42 = v22[2]; /*0x71a8f6*/
            result = AnimClass::ctor(result, (void *)MEMORY[0x8871E0]->?[1], &v40, 0, 1, (void *)0x600, 0, 0); /*0x71a909*/
          }
        }
        else
        {
          v21 = this->creationFrame; /*0x71a89a*/
          this->q028 = 0; /*0x71a89d*/
          this->q011 = 0; /*0x71a8a2*/
          this->uniqueId = 0; /*0x71a8a5*/
          this->q03C = 0; /*0x71a8a8*/
          this->q038 = 0; /*0x71a8ab*/
          if ( v21 ) /*0x71a8ae*/
            result = (void **)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v21 + 1156))(v21, 0, 1); /*0x71a8b5*/
        }
        if ( this->q028 )
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->creationFrame + 132))(this->creationFrame) + 3214) ) /*0x71a922*/
          {
            v23 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q028 + 132))(this->q028); /*0x71a938*/
            v24 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->creationFrame + 132))(this->creationFrame); /*0x71a944*/
            v39 = *(_DWORD *)(this->q028 + 540); /*0x71a94f*/
            v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 132))(v23); /*0x71a952*/
            v26 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v24 + 132))( /*0x71a968*/
                    v24,
                    *(_DWORD *)(this->creationFrame + 540),
                    v25);
            VeterancyStruct::Accumulate((float *)(this->creationFrame + 336), v26, v39); /*0x71a978*/
          }
          if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q028 + 44))(this->q028) == 6 )
          {
            v27 = (_DWORD *)this->q028; /*0x71a98e*/
            if ( v27 ) /*0x71a993*/
            {
              if ( (*(int (__thiscall **)(_DWORD))(*v27 + 1032))(this->q028) > 0 ) /*0x71a9a2*/
                BuildingClass::AnimateUnloadUnits(v27, 0); /*0x71a9a7*/
              if ( !MEMORY[0xA8E7AC] && v27[70] ) /*0x71a9b4*/
              {
                do /*0x71a9d6*/
                {
                  v28 = LinkedList::Pop(v27 + 69); /*0x71a9c4*/
                  if ( v28 ) /*0x71a9cb*/
                    (*(void (__thiscall **)(int, int))(*(_DWORD *)v28 + 32))(v28, 1); /*0x71a9d3*/
                }
                while ( v27[70] ); /*0x71a9d6*/
              }
            }
            v29 = this->q03C; /*0x71a9de*/
            if ( v29 ) /*0x71a9e3*/
            {
              SuperClass::SetOnHold(v29, 0); /*0x71a9e6*/
              this->q03C = 0; /*0x71a9eb*/
            }
            v30 = (_DWORD *)this->q028; /*0x71a9ee*/
            if ( v30[185] )
            {
              if ( v30 )
                v31 = (*(int (__thiscall **)(_DWORD))(*v30 + 44))(this->q028) == 6 ? v30 : 0;
              else
                v31 = 0; /*0x71a9fd*/
              BuildingClass::RemoveLimpet(v31); /*0x71aa15*/
            }
            v32 = *(_DWORD **)(this->q028 + 728); /*0x71aa1d*/
            if ( v32 ) /*0x71aa25*/
              TechnoClass::MutateAll(v32, this->creationFrame, 0); /*0x71aa2c*/
            (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this->q028 + 952))(this->q028, this->creationFrame); /*0x71aa3a*/
            (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this->q028 + 224))(this->q028, this->creationFrame); /*0x71aa49*/
            result = (void **)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q028 + 248))(this->q028); /*0x71aa54*/
            *(_BYTE *)(v27[135] + 508) = 1; /*0x71aa60*/
          }
          else
          {
            v33 = this->q028; /*0x71aa69*/
            v34 = *(_DWORD *)(v33 + 740); /*0x71aa6c*/
            if ( v34 )
            {
              v35 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v34 + 44))(*(_DWORD *)(v33 + 740)) == 6 ? (int *)v34 : 0;
              BuildingClass::UpdateDamageAnim(v35); /*0x71aa90*/
            }
            v36 = *(_DWORD **)(this->q028 + 728); /*0x71aa98*/
            if ( v36 ) /*0x71aaa0*/
              TechnoClass::MutateAll(v36, this->creationFrame, 0); /*0x71aaa7*/
            (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this->q028 + 952))(this->q028, this->creationFrame); /*0x71aab5*/
            (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this->q028 + 224))(this->q028, this->creationFrame); /*0x71aac4*/
            result = (void **)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q028 + 248))(this->q028); /*0x71aacf*/
          }
          v37 = this->creationFrame; /*0x71aad5*/
          if ( v37 ) /*0x71aada*/
            result = (void **)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v37 + 1156))(v37, 0, 1); /*0x71aae1*/
        }
        v38 = this->creationFrame; /*0x71aae7*/
        this->q028 = 0; /*0x71aaea*/
        this->q011 = 0; /*0x71aaef*/
        this->uniqueId = 0; /*0x71aaf2*/
        this->q03C = 0; /*0x71aaf5*/
        this->q038 = 0; /*0x71aaf8*/
        if ( v38 ) /*0x71aafb*/
          return (void **)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v38 + 1156))(v38, 0, 1); /*0x71ab02*/
      }
    }
  }
  return result; /*0x71a795*/
}


// ==== 0x0071AB10  TemporalClass::GetWarpPerStep  this=TechnoClass  sig=csp ====
int __thiscall TemporalClass::GetWarpPerStep(int **this, int a2)
{
  int WarpPerStep; // ebx
  int *v4; // ecx
  int v5; // edi
  int v6; // eax
  int *v7; // eax

  WarpPerStep = 0; /*0x71ab14*/
  if ( this->u32_44 && a2 <= 50 ) /*0x71ab25*/
    WarpPerStep = TemporalClass::GetWarpPerStep(a2 + 1); /*0x71ab2e*/
  v4 = this->objectTypeFlags; /*0x71ab30*/
  v5 = *v4; /*0x71ab35*/
  v6 = (*(int (__thiscall **)(int *, _DWORD))(*v4 + 740))(v4, 0); /*0x71ab37*/
  v7 = *(int **)(*(_DWORD *)(*(int (__thiscall **)(_DWORD, int))(v5 + 1016))(this->objectTypeFlags, v6) + 164); /*0x71ab4a*/
  this->u32_4C = v7; /*0x71ab50*/
  return (int)v7 + WarpPerStep; /*0x71ab49*/
}


// ==== 0x0071AB60  ObjectClass::UnlinkFromFactory  this=TechnoClass  sig=csp ====
_DWORD *__thiscall sub_71AB60(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // ecx

  result = a2; /*0x71ab60*/
  v4 = (_DWORD *)this->objectTypeFlags; /*0x71ab68*/
  if ( a2 == v4 ) /*0x71ab6d*/
  {
    result = (_DWORD *)this->owningHouseIndex; /*0x71ab6f*/
    if ( result ) /*0x71ab76*/
    {
      result = FactoryClass::CompleteItem(this); /*0x71ab7a*/
      this->owningHouseIndex = 0; /*0x71ab7f*/
    }
  }
  else if ( a2 == (_DWORD *)this->owningHouseIndex ) /*0x71ab8a*/
  {
    this->owningHouseIndex = 0; /*0x71ab90*/
    this->u32_44 = 0; /*0x71ab93*/
    this->q040 = 0; /*0x71ab96*/
    this->ambientSoundController = 0; /*0x71ab99*/
    this->attachedBomb = 0; /*0x71ab9c*/
    if ( v4 ) /*0x71ab9f*/
      return (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v4 + 1156))(v4, 0, 1); /*0x71aba6*/
  }
  return result; /*0x71ab82*/
}


// ==== 0x0071ABC0  FactoryClass::CompleteItem  this=TechnoClass  sig=csp ====
_DWORD *__thiscall FactoryClass_CompleteItem(_DWORD *this)
{
  _DWORD *result; // eax
  int v3; // ecx
  int v4; // edi

  result = (_DWORD *)this->q040; /*0x71abc6*/
  v3 = this->u32_44; /*0x71abc9*/
  if ( result ) /*0x71abce*/
  {
    if ( v3 ) /*0x71ac71*/
    {
      *(_DWORD *)(v3 + 64) = result; /*0x71ac73*/
      result = (_DWORD *)this->q040; /*0x71ac76*/
      if ( result ) /*0x71ac7b*/
      {
        result[17] = this->u32_44; /*0x71ac80*/
        this->owningHouseIndex = 0; /*0x71ac83*/
        this->u32_44 = 0; /*0x71ac86*/
        this->q040 = 0; /*0x71ac89*/
        this->ambientSoundController = 0; /*0x71ac8c*/
        this->attachedBomb = 0; /*0x71ac8f*/
        return result; /*0x71ac94*/
      }
    }
    else
    {
      result[17] = 0; /*0x71ac95*/
    }
    goto LABEL_14; /*0x71ac7b*/
  }
  result = (_DWORD *)this->owningHouseIndex; /*0x71abd4*/
  if ( v3 ) /*0x71abd9*/
  {
    if ( result ) /*0x71abdd*/
      result[158] = v3; /*0x71abdf*/
    result = (_DWORD *)this->u32_44; /*0x71abe5*/
    result[16] = 0; /*0x71abe8*/
    *(_DWORD *)(this->u32_44 + 72) = this->u32_48; /*0x71abf1*/
    this->owningHouseIndex = 0; /*0x71abf4*/
    this->u32_44 = 0; /*0x71abf7*/
    this->q040 = 0; /*0x71abfa*/
    this->ambientSoundController = 0; /*0x71abfd*/
    this->attachedBomb = 0; /*0x71ac00*/
    return result; /*0x71ac05*/
  }
  if ( !result ) /*0x71ac08*/
  {
LABEL_14:
    this->owningHouseIndex = 0; /*0x71ac98*/
    this->u32_44 = 0; /*0x71ac9b*/
    this->q040 = 0; /*0x71ac9e*/
    this->ambientSoundController = 0; /*0x71aca1*/
    this->attachedBomb = 0; /*0x71aca4*/
    return result; /*0x71aca4*/
  }
  result[158] = 0; /*0x71ac0e*/
  *(_BYTE *)(this->owningHouseIndex + 624) = 0; /*0x71ac17*/
  if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->owningHouseIndex + 44))(this->owningHouseIndex) == 6 ) /*0x71ac28*/
  {
    v4 = this->owningHouseIndex; /*0x71ac2b*/
    *(_BYTE *)(*(_DWORD *)(v4 + 540) + 22392) = 1; /*0x71ac36*/
    BuildingClass::EnableTogglePower(v4); /*0x71ac3d*/
    *(_BYTE *)(*(_DWORD *)(v4 + 540) + 508) = 1; /*0x71ac49*/
  }
  result = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)this->owningHouseIndex + 292))(this->owningHouseIndex, 2); /*0x71ac57*/
  this->owningHouseIndex = 0; /*0x71ac5d*/
  this->u32_44 = 0; /*0x71ac60*/
  this->q040 = 0; /*0x71ac63*/
  this->ambientSoundController = 0; /*0x71ac66*/
  this->attachedBomb = 0; /*0x71ac69*/
  return result; /*0x71ac03*/
}


// ==== 0x0071AD30  nullsub_246  this=-  sig=ida-proto ====
void nullsub_246()
{
  ; /*0x71ad30*/
}


// ==== 0x0071AD40  TriggerClass::UnlinkTags  this=TriggerClass  sig=csp ====
int __thiscall TriggerClass_UnlinkTags(int this)
{
  int v2; // eax
  int v3; // eax
  int result; // eax

  v2 = *(_DWORD *)(this + 40); /*0x71ad46*/
  if ( v2 ) /*0x71ad4b*/
  {
    *(_BYTE *)(v2 + 624) = 0; /*0x71ad4d*/
    *(_DWORD *)(*(_DWORD *)(this + 40) + 632) = 0; /*0x71ad56*/
    *(_DWORD *)(this + 40) = 0; /*0x71ad5c*/
  }
  v3 = *(_DWORD *)(this + 68); /*0x71ad5f*/
  if ( v3 ) /*0x71ad64*/
  {
    if ( *(_DWORD *)(v3 + 64) == this ) /*0x71ad69*/
      *(_DWORD *)(v3 + 64) = 0; /*0x71ad6b*/
    TagClass::Unlink(*(int **)(this + 68)); /*0x71ad71*/
    *(_DWORD *)(this + 68) = 0; /*0x71ad76*/
  }
  result = *(_DWORD *)(this + 64); /*0x71ad79*/
  if ( result ) /*0x71ad7e*/
  {
    if ( *(_DWORD *)(result + 68) == this ) /*0x71ad83*/
      *(_DWORD *)(result + 68) = 0; /*0x71ad85*/
    result = TagClass::Unlink(*(int **)(this + 64)); /*0x71ad8b*/
    *(_DWORD *)(this + 64) = 0; /*0x71ad90*/
  }
  *(_DWORD *)(this + 68) = 0; /*0x71ad93*/
  *(_DWORD *)(this + 64) = 0; /*0x71ad96*/
  *(_DWORD *)(this + 60) = 0; /*0x71ad99*/
  *(_DWORD *)(this + 56) = 0; /*0x71ad9c*/
  return result; /*0x71ad9f*/
}


// ==== 0x0071ADE0  TagClass::Unlink  this=TemporalClass  sig=csp ====
int __thiscall TagClass_Unlink(int *this)
{
  int v2; // eax
  int result; // eax
  int v4; // ecx

  *(_BYTE *)(this->q028 + 624) = 0; /*0x71ade9*/
  *(_DWORD *)(this->q028 + 632) = 0; /*0x71adf2*/
  v2 = this->q011; /*0x71adf8*/
  this->q028 = 0; /*0x71adfd*/
  if ( v2 ) /*0x71ae00*/
  {
    if ( *(int **)(v2 + 64) == this ) /*0x71ae05*/
      *(_DWORD *)(v2 + 64) = 0; /*0x71ae07*/
    TagClass::Unlink(this->q011); /*0x71ae0d*/
  }
  result = this->uniqueId; /*0x71ae12*/
  if ( result ) /*0x71ae17*/
  {
    if ( *(int **)(result + 68) == this ) /*0x71ae1c*/
      *(_DWORD *)(result + 68) = 0; /*0x71ae1e*/
    result = TagClass::Unlink(this->uniqueId); /*0x71ae24*/
  }
  v4 = this->creationFrame; /*0x71ae29*/
  this->q011 = 0; /*0x71ae2c*/
  this->uniqueId = 0; /*0x71ae31*/
  this->q03C = 0; /*0x71ae34*/
  this->q038 = 0; /*0x71ae37*/
  if ( v4 ) /*0x71ae3a*/
    return (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v4 + 1156))(v4, 0, 1); /*0x71ae41*/
  return result; /*0x71ae47*/
}


// ==== 0x0071AE50  TemporalClass::CanWarpTarget  this=TemporalClass  sig=csp ====
char __stdcall TemporalClass::CanWarpTarget(_DWORD *a1)
{
  int Member; // eax
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  _DWORD v5[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !a1 ) /*0x71ae5b*/
    return 0; /*0x71ae5e*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a1 + 132))(a1) + 3386) ) /*0x71ae71*/
    return 0; /*0x71ae7c*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 352))(a1) ) /*0x71ae89*/
    return 0; /*0x71ae94*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 1 ) /*0x71aea7*/
  {
    Member = Team::GetMember(a1, 0); /*0x71aead*/
    v3 = (_DWORD *)Member; /*0x71aeb2*/
    if ( Member ) /*0x71aeb6*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 ) /*0x71aec2*/
      {
        if ( *(_BYTE *)(v3[328] + 5821) ) /*0x71aeca*/
        {
          v5[0] = a1[39]; /*0x71aedc*/
          v5[1] = a1[40]; /*0x71aeed*/
          v5[2] = a1[41]; /*0x71aef4*/
          v4 = Coord::To_Cell(&MEMORY[0x87F7E8], v5); /*0x71aef8*/
          if ( Cell::IsBridge(v4) == v3 ) /*0x71af06*/
            return 0; /*0x71af09*/
        }
      }
    }
  }
  return 1; /*0x71ae5d*/
}


// ==== 0x0071AF20  OreManagerClass::AssignMinerToRefinery  this=OreManagerClass  sig=csp ====
#375 *__thiscall OreManagerClass::AssignMinerToRefinery(int this, _DWORD *a2)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // ecx
  _DWORD *v5; // ecx
  #375 *result; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  #375 **v12; // ecx
  _DWORD *v13; // eax
  __int64 v14; // rax
  _DWORD *v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // edi
  _DWORD *v19; // ecx
  _BYTE v20[12]; // [esp+8h] [ebp-Ch] BYREF
  int v21; // [esp+18h] [ebp+4h]

  if ( a2 ) /*0x71af2d*/
  {
    v3 = (_DWORD *)a2[180]; /*0x71af2f*/
    if ( v3 ) /*0x71af37*/
      TaskManager::Update(v3); /*0x71af39*/
    v4 = (_DWORD *)a2[175]; /*0x71af3e*/
    if ( v4 ) /*0x71af46*/
      CaptureManager::FreeAll(v4); /*0x71af48*/
  }
  v5 = *(_DWORD **)(*(_DWORD *)(this + 36) + 628); /*0x71af50*/
  if ( v5 && v5[10] ) /*0x71af5a*/
    FactoryClass::CompleteItem(v5); /*0x71af61*/
  result = (#375 *)TemporalClass::CanWarpTarget(a2); /*0x71af69*/
  if ( (_BYTE)result )
  {
    result = *(#375 **)(*(_DWORD *)(this + 36) + 632); /*0x71af79*/
    if ( !result )
    {
      *(_DWORD *)(this + 40) = a2; /*0x71af87*/
      v7 = a2[158]; /*0x71af8a*/
      if ( v7 )
      {
        *(_DWORD *)(this + 64) = v7; /*0x71b0d1*/
        *(_DWORD *)(this + 68) = *(_DWORD *)(v7 + 68); /*0x71b0d7*/
        *(_DWORD *)(v7 + 68) = this; /*0x71b0da*/
        v17 = *(_DWORD *)(this + 68); /*0x71b0dd*/
        if ( v17 ) /*0x71b0e2*/
          *(_DWORD *)(v17 + 64) = this; /*0x71b0e4*/
      }
      else
      {
        a2[158] = this; /*0x71af98*/
        v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 132))(*(_DWORD *)(this + 40)); /*0x71afa3*/
        v9 = *(_DWORD *)(this + 40); /*0x71afaf*/
        *(_DWORD *)(this + 72) = 10 * *(_DWORD *)(v8 + 160); /*0x71afb9*/
        if ( v9 && (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 44))(v9) == 1 )
        {
          v10 = *(_DWORD *)(this + 40); /*0x71afd0*/
          v11 = v10 ? ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v10 + 44))(*(_DWORD *)(this + 40)) == 1 ? v10 : 0) : 0;
          if ( *(_BYTE *)(*(_DWORD *)(v11 + 1732) + 3598) ) /*0x71aff1*/
          {
            v12 = *(#375 ***)(this + 40); /*0x71affb*/
            if ( v12[135] == HouseClass_Player ) /*0x71b00b*/
            {
              v13 = (_DWORD *)(*((int (__thiscall **)(#375 **, _BYTE *, _DWORD))*v12 + 19))(v12, v20, 0); /*0x71b016*/
              LOWORD(v21) = *v13 / 256; /*0x71b029*/
              v14 = (int)v13[1]; /*0x71b031*/
              HIWORD(v21) = (int)v14 / 256; /*0x71b042*/
              if ( CreateTriggerClassIfFarEnough(4, BYTE4(v14), v21) ) /*0x71b04c*/
                VoxClass::FindAndPlay(g_Str_EVA_OreMinerUnderAttack, -1); /*0x71b05f*/
            }
          }
        }
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 44))(*(_DWORD *)(this + 40)) == 6
          && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 132))(*(_DWORD *)(this + 40)) + 562)
          && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 128))(*(_DWORD *)(this + 40)) )
        {
          v15 = *(_DWORD **)(this + 40); /*0x71b095*/
          if ( v15 )
          {
            v16 = (*(int (__thiscall **)(_DWORD))(*v15 + 44))(*(_DWORD *)(this + 40)); /*0x71b0b2*/
            HouseClass::NotifyUnderAttack(*(#375 **)(*(_DWORD *)(this + 40) + 540), v16 == 6 ? v15 : 0);
          }
          else
          {
            HouseClass::NotifyUnderAttack(MEMORY[0x21C], 0); /*0x71b0a7*/
          }
        }
      }
      *(_BYTE *)(*(_DWORD *)(this + 40) + 624) = 1; /*0x71b0ea*/
      if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 132))(*(_DWORD *)(this + 40)) + 3285) ) /*0x71b0fc*/
        TechnoClass::DrainAmmo(*(char **)(this + 40), 1); /*0x71b10b*/
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 44))(*(_DWORD *)(this + 40)) == 6 ) /*0x71b11b*/
      {
        v18 = *(_DWORD *)(this + 40); /*0x71b11d*/
        *(_BYTE *)(*(_DWORD *)(v18 + 540) + 22392) = 1; /*0x71b126*/
        BuildingClass::DisableTemporal(v18); /*0x71b12f*/
        *(_BYTE *)(*(_DWORD *)(v18 + 540) + 508) = 1; /*0x71b13a*/
      }
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 40) + 292))(*(_DWORD *)(this + 40), 2); /*0x71b148*/
      v19 = *(_DWORD **)(*(_DWORD *)(this + 40) + 628); /*0x71b151*/
      if ( v19 && v19[10] ) /*0x71b15b*/
        FactoryClass::CompleteItem(v19); /*0x71b162*/
      result = HouseClass_Player; /*0x71b167*/
      if ( HouseClass_Player ) /*0x71b16e*/
        return (#375 *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 336))(*(_DWORD *)(this + 40)); /*0x71b175*/
    }
  }
  return result; /*0x71b17b*/
}


// ==== 0x0071B190  TemporalClass::StubReturn80  this=TemporalClass  sig=csp ====
int TemporalClass::_vt12()
{
  return 80; /*0x71b195*/
}


// ==== 0x0071B1A0  TemporalClass::StubReturn70  this=TemporalClass  sig=csp ====
int TemporalClass::_vt11()
{
  return 70; /*0x71b1a5*/
}


// ==== 0x0071B1B0  TemporalClass::ProcessEvent  this=TemporalClass  sig=csp ====
TemporalClass *__thiscall TemporalClass::ProcessEvent(_DWORD *Block, char a2)
{
  int v3; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &TemporalClass::`vftable'; /*0x71b1bd*/
  *(Block + 1) = &TemporalClass::`vftable'; /*0x71b1c3*/
  *(Block + 2) = &TemporalClass::`vftable'; /*0x71b1ca*/
  *(Block + 3) = &vt_TemporalClass; /*0x71b1d1*/
  v5 = Block; /*0x71b1df*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xB0EC60] + 16))(&MEMORY[0xB0EC60], &v5); /*0x71b1e3*/
  if ( v3 != -1 && v3 < MEMORY[0xB0EC70] && v3 < --MEMORY[0xB0EC70] ) /*0x71b1fe*/
  {
    do /*0x71b216*/
    {
      ++v3; /*0x71b206*/
      *((_DWORD *)MEMORY[0xB0EC64] + v3 - 1) = *((_DWORD *)MEMORY[0xB0EC64] + v3); /*0x71b20a*/
    }
    while ( v3 < MEMORY[0xB0EC70] ); /*0x71b216*/
  }
  AbstractClass::DTOR(Block); /*0x71b21a*/
  if ( (a2 & 1) != 0 ) /*0x71b224*/
    __3_YAXPAX_Z(Block); /*0x71b227*/
  return (TemporalClass *)Block; /*0x71b231*/
}


// ==== 0x0071B240  _DynamicVectorClass_PAVTemporalClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TemporalClass::sub_71B240(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x71b246*/
  *(_DWORD *)(this + 16) = 0; /*0x71b249*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x71b250*/
  {
    __3_YAXPAX_Z(v2); /*0x71b256*/
    *(_DWORD *)(this + 4) = 0; /*0x71b25e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x71b261*/
  *(_DWORD *)(this + 8) = 0; /*0x71b264*/
}


// ==== 0x0071B270  _DynamicVectorClass_PAVTemporalClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TemporalClass::sub_71B270(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x71b270*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x71b285*/
  else
    return 0; /*0x71b277*/
}


// ==== 0x0071B290  _VectorClass_PAVTemporalClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TemporalClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x71b29a*/
}


// ==== 0x0071B2A0  _VectorClass_PAVTemporalClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TemporalClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x71b2a2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x71b2ad*/
  {
    v3 = 0; /*0x71b2af*/
    if ( v2 <= 0 ) /*0x71b2b3*/
      return 1; /*0x71b2d3*/
    v4 = (_DWORD *)this->Items; /*0x71b2b5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x71b2bb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x71b2c4*/
    {
      ++v3; /*0x71b2c6*/
      ++v4; /*0x71b2c7*/
      if ( v3 >= v2 ) /*0x71b2cc*/
        return 1; /*0x71b2cc*/
    }
  }
  return 0; /*0x71b2ce*/
}


// ==== 0x0071B2E0  _VectorClass_PAVTemporalClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TemporalClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x71b2ec*/
  {
    this->IsInitialized = 0; /*0x71b2f6*/
    if ( a3 ) /*0x71b2fc*/
      v4 = a3; /*0x71b312*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x71b30e*/
    this->IsInitialized = 1; /*0x71b316*/
    if ( v4 ) /*0x71b31a*/
    {
      if ( this->Items ) /*0x71b325*/
      {
        v6 = this->Capacity; /*0x71b32c*/
        if ( a2 < v6 ) /*0x71b331*/
          v6 = a2; /*0x71b333*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x71b339*/
          ++i; /*0x71b33e*/
        if ( this->IsAllocated ) /*0x71b34b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x71b356*/
          this->Items = 0; /*0x71b35e*/
        }
      }
      this->Items = v4; /*0x71b367*/
      this->Capacity = a2; /*0x71b36f*/
      this->IsAllocated = a3 == 0; /*0x71b372*/
      return 1; /*0x71b378*/
    }
    else
    {
      return 0; /*0x71b31f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x71b382*/
    return 1; /*0x71b388*/
  }
}


// ==== 0x0071B390  _VectorClass_PAVTemporalClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TemporalClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x71b39d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x71b3a3*/
    *(_DWORD *)(this + 4) = 0; /*0x71b3ab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x71b3ae*/
  *(_DWORD *)(this + 8) = 0; /*0x71b3b1*/
}


// ==== 0x0071B3C0  _VectorClass_PAVTemporalClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TemporalClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x71b3c0*/
    return 0; /*0x71b3c8*/
  v3 = *(_DWORD *)(this + 8); /*0x71b3ce*/
  result = 0; /*0x71b3d1*/
  if ( v3 <= 0 ) /*0x71b3d5*/
    return -1; /*0x71b3ec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x71b3db*/
  {
    if ( ++result >= v3 ) /*0x71b3ea*/
      return -1; /*0x71b3ea*/
  }
  return result; /*0x71b3ca*/
}


// ==== 0x0071B400  _VectorClass_PAVTemporalClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TemporalClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x71b400*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x71b415*/
  else
    return 0; /*0x71b407*/
}


// ==== 0x0071B420  _DynamicVectorClass_PAVTemporalClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TemporalClass::sub_71B420(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x71b42c*/
  {
    this->IsInitialized = 0; /*0x71b432*/
    if ( a3 ) /*0x71b438*/
      v4 = a3; /*0x71b44e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x71b44a*/
    this->IsInitialized = 1; /*0x71b452*/
    if ( !v4 ) /*0x71b456*/
      return 0; /*0x71b4ca*/
    if ( this->Items ) /*0x71b458*/
    {
      v5 = this->q008; /*0x71b45f*/
      if ( a2 < v5 ) /*0x71b464*/
        v5 = a2; /*0x71b466*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x71b46c*/
        ++i; /*0x71b471*/
      if ( this->IsAllocated ) /*0x71b47e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x71b489*/
        this->Items = 0; /*0x71b491*/
      }
    }
    this->Items = v4; /*0x71b49a*/
    this->q008 = a2; /*0x71b4a2*/
    this->IsAllocated = a3 == 0; /*0x71b4a5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x71b4ae*/
  }
  v7 = this->q008; /*0x71b4b1*/
  if ( v7 < this->Items ) /*0x71b4b9*/
    this->Items = v7; /*0x71b4bb*/
  return 1; /*0x71b4be*/
}


// ==== 0x0071B4D0  _DynamicVectorClass_PAVTemporalClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TemporalClass::sub_71B4D0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x71b4d0*/
  result = 0; /*0x71b4d3*/
  if ( v2 <= 0 ) /*0x71b4d8*/
    return -1; /*0x71b4ef*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x71b4de*/
  {
    if ( ++result >= v2 ) /*0x71b4ed*/
      return -1; /*0x71b4ed*/
  }
  return result; /*0x71b4f2*/
}


// ==== 0x0071B500  _VectorClass_PAVTemporalClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_TemporalClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x71b503*/
  *Block = &vt_VectorClass_TemporalClass; /*0x71b506*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x71b510*/
  {
    __3_YAXPAX_Z(v3); /*0x71b518*/
    *(Block + 1) = 0; /*0x71b520*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x71b52b*/
  *(Block + 2) = 0; /*0x71b531*/
  if ( (a2 & 1) != 0 ) /*0x71b538*/
    __3_YAXPAX_Z(Block); /*0x71b53b*/
  return (VectorClass *)Block; /*0x71b545*/
}


// ==== 0x0071B550  _DynamicVectorClass_PAVTemporalClass::Constructor_VectorClass_TemporalClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_TemporalClass::Constructor_VectorClass_TemporalClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x71b553*/
  *Block = &vt_VectorClass_TemporalClass; /*0x71b556*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x71b560*/
  {
    __3_YAXPAX_Z(v3); /*0x71b568*/
    *(Block + 1) = 0; /*0x71b570*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x71b57b*/
  *(Block + 2) = 0; /*0x71b581*/
  if ( (a2 & 1) != 0 ) /*0x71b588*/
    __3_YAXPAX_Z(Block); /*0x71b58b*/
  return (DynamicVector *)Block; /*0x71b595*/
}


// ==== 0x0071B5A0  sub_71B5A0  this=-  sig=ida-proto ====
void sub_71B5A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71b5ac*/
  MEMORY[0xB0ECF8] = Math::Sqrt(v0 + v0); /*0x71b5be*/
}


// ==== 0x0071B5D0  sub_71B5D0  this=-  sig=ida-proto ====
void sub_71B5D0()
{
  MEMORY[0xB0ED48] = MEMORY[0xB0ECF8] / 60.0; /*0x71b5dc*/
}


// ==== 0x0071B5F0  sub_71B5F0  this=-  sig=ida-proto ====
void sub_71B5F0()
{
  MEMORY[0xB0ED30] = 1.0 / MEMORY[0xB0ED48]; /*0x71b5fc*/
}


// ==== 0x0071B610  sub_71B610  this=-  sig=ida-proto ====
void sub_71B610()
{
  MEMORY[0xB0ED28] = 0.0174532925199433 * 45.0; /*0x71b61c*/
}


// ==== 0x0071B630  sub_71B630  this=-  sig=ida-proto ====
void sub_71B630()
{
  MEMORY[0xB0ED00] = 0.0174532925199433 * 60.0; /*0x71b63c*/
}


// ==== 0x0071B650  sub_71B650  this=-  sig=ida-proto ====
void sub_71B650()
{
  MEMORY[0xB0ECD8] = 0.0174532925199433 * 90.0; /*0x71b65c*/
}


// ==== 0x0071B670  sub_71B670  this=-  sig=ida-proto ====
__int64 sub_71B670()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0ECD8] - MEMORY[0xB0ED00]); /*0x71b682*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0ECF8] * 0.5); /*0x71b696*/
  MEMORY[0xB0ED50] = result; /*0x71b69b*/
  return result; /*0x71b6a0*/
}


// ==== 0x0071B6B0  sub_71B6B0  this=-  sig=ida-proto ====
void sub_71B6B0()
{
  MEMORY[0xB0ED08] = Math::ArcTan((double)MEMORY[0xB0ED50] * 0.00390625); /*0x71b6c7*/
}


// ==== 0x0071B6E0  sub_71B6E0  this=-  sig=ida-proto ====
void sub_71B6E0()
{
  MEMORY[0xB0ED20] = Math::ArcTan((double)(2 * MEMORY[0xB0ED50]) / MEMORY[0xB0ECF8]); /*0x71b702*/
}


// ==== 0x0071B710  sub_71B710  this=-  sig=ida-proto ====
__int64 sub_71B710()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0ED50]) + 0.5); /*0x71b72b*/
  MEMORY[0xB0ED44] = result; /*0x71b730*/
  return result; /*0x71b736*/
}


// ==== 0x0071B740  sub_71B740  this=-  sig=ida-proto ====
int sub_71B740()
{
  MEMORY[0xB0ECF0] = 0; /*0x71b742*/
  MEMORY[0xB0ECF2] = 0; /*0x71b748*/
  return 0; /*0x71b74e*/
}


// ==== 0x0071B750  sub_71B750  this=-  sig=ida-proto ====
int sub_71B750()
{
  MEMORY[0xB0ED10] = 0; /*0x71b752*/
  MEMORY[0xB0ED14] = 0; /*0x71b757*/
  MEMORY[0xB0ED18] = 0; /*0x71b75c*/
  return 0; /*0x71b761*/
}


// ==== 0x0071B770  sub_71B770  this=-  sig=ida-proto ====
int sub_71B770()
{
  MEMORY[0xB0ED40] = 0; /*0x71b775*/
  MEMORY[0xB0ED38] = 128; /*0x71b77f*/
  MEMORY[0xB0ED3C] = 128; /*0x71b784*/
  return 128; /*0x71b789*/
}


// ==== 0x0071B790  sub_71B790  this=-  sig=ida-proto ====
int sub_71B790()
{
  MEMORY[0xB0ECE0] = 0; /*0x71b792*/
  MEMORY[0xB0ECE4] = 0; /*0x71b797*/
  MEMORY[0xB0ECE8] = 0; /*0x71b79c*/
  MEMORY[0xB0ECEC] = 0; /*0x71b7a1*/
  return 0; /*0x71b7a6*/
}


// ==== 0x0071B7B0  TerrainClass::CleanupMembers  this=TerrainClass  sig=csp ====
int __thiscall sub_71B7B0(int this)
{
  int v2; // edi
  int v3; // eax
  int Vtable3; // eax
  int v5; // edx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  signed int v9; // ecx
  size_t i; // eax
  _DWORD *v11; // eax
  int v13[2]; // [esp+8h] [ebp-8h] BYREF

  v2 = this + 4; /*0x71b7b9*/
  *(_DWORD *)this = &TerrainClass::`vftable'; /*0x71b7bc*/
  *(_DWORD *)(this + 8) = &TerrainClass::`vftable'; /*0x71b7c2*/
  *(_DWORD *)(this + 12) = &vt_TerrainClass; /*0x71b7c9*/
  *(_DWORD *)(this + 4) = &off_7F5200; /*0x71b7d0*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x71b7d6*/
  v13[0] = this; /*0x71b7eb*/
  v3 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xA8E988] + 16))(&MEMORY[0xA8E988], v13); /*0x71b7ef*/
  if ( v3 != -1 && v3 < MEMORY[0xA8E998] && v3 < --MEMORY[0xA8E998] ) /*0x71b80a*/
  {
    do /*0x71b822*/
    {
      ++v3; /*0x71b812*/
      *((_DWORD *)MEMORY[0xA8E98C] + v3 - 1) = *((_DWORD *)MEMORY[0xA8E98C] + v3); /*0x71b816*/
    }
    while ( v3 < MEMORY[0xA8E998] ); /*0x71b822*/
  }
  if ( MEMORY[0xA8E9A0] && *(_DWORD *)(this + 200) ) /*0x71b82d*/
  {
    *(_BYTE *)(this + 144) = 1; /*0x71b839*/
    TerrainClass::ApplyCellModifications((#374 *)this); /*0x71b840*/
  }
  Vtable3 = AbstractClass::GetVtable3(v2); /*0x71b846*/
  v5 = MEMORY[0xB0E844]; /*0x71b84b*/
  v6 = Vtable3; /*0x71b851*/
  if ( MEMORY[0xB0E844] ) /*0x71b855*/
  {
    if ( !MEMORY[0xB0E84C] ) /*0x71b862*/
    {
      qsort(MEMORY[0xB0E840], MEMORY[0xB0E844], 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction); /*0x71b872*/
      v5 = MEMORY[0xB0E844]; /*0x71b877*/
      MEMORY[0xB0E850] = 0; /*0x71b880*/
      MEMORY[0xB0E84C] = 1; /*0x71b88a*/
    }
    v13[0] = v6; /*0x71b895*/
    v7 = BinaryArraySearch((int)MEMORY[0xB0E840], v5, v13); /*0x71b8a0*/
    if ( v7 ) /*0x71b8a7*/
    {
      v8 = (v7 - (int)MEMORY[0xB0E840]) >> 3; /*0x71b8af*/
      if ( v8 != -1 ) /*0x71b8b5*/
      {
        v9 = v8 + 1; /*0x71b8b7*/
        for ( i = MEMORY[0xB0E844]; v9 < (int)MEMORY[0xB0E844]; i = MEMORY[0xB0E844] ) /*0x71b8c1*/
        {
          v11 = (_DWORD *)((char *)MEMORY[0xB0E840] + 8 * v9++); /*0x71b8c9*/
          *(v11 - 2) = *v11; /*0x71b8cf*/
          *(v11 - 1) = v11[1]; /*0x71b8d5*/
        }
        MEMORY[0xB0E844] = i - 1; /*0x71b8ea*/
        *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844]) = 0; /*0x71b8ef*/
        *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844] + 1) = 0; /*0x71b8ff*/
        MEMORY[0xB0E850] = 0; /*0x71b903*/
      }
    }
  }
  return ObjectClass::Dtor((_DWORD *)this); /*0x71b910*/
}


// ==== 0x0071B920  TerrainClass::UpdateAnims  this=TerrainClass  sig=csp ====
TerrainClass *__thiscall TerrainClass::Construct(void **this, TerrainTypeClass *aP1, TerrainClass *aP2)
{
  IUnknown *v4; // eax
  int v5; // eax
  IUnknown *v6; // eax
  int v7; // eax
  int v8; // ebp
  AbstractClass *v9; // edi
  int i; // eax
  _DWORD *v11; // ecx
  int a1; // [esp+10h] [ebp-Ch] BYREF
  void *v14; // [esp+14h] [ebp-8h]
  AbstractClass *v15; // [esp+18h] [ebp-4h]
  TerrainClass *aP2a; // [esp+24h] [ebp+8h]

  ObjectClass::ctor(this); /*0x71bb99*/
  this->q02B = 0; /*0x71bba4*/
  this->q0B0 = 0; /*0x71bbaa*/
  v4 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x71bbb0*/
  this->height = 0; /*0x71bbb5*/
  this->Type = v4; /*0x71bbbb*/
  this->nextObject = 0; /*0x71bbc1*/
  this->q031 = (void *)1; /*0x71bbc7*/
  this->q032 = aP1; /*0x71bbd4*/
  this->q0CC = 0; /*0x71bbda*/
  this->q0CD = 0; /*0x71bbe0*/
  this->attachedTag = 0; /*0x71bbe6*/
  this->q0D4 = 0; /*0x71bbec*/
  this->occupant = 0; /*0x71bbf2*/
  this->q037 = 0; /*0x71bbf8*/
  *this = &TerrainClass::`vftable'; /*0x71bbff*/
  this->vtable2 = &off_7F5200; /*0x71bc05*/
  this->vtable3 = &TerrainClass::`vftable'; /*0x71bc0b*/
  this->vtable4 = &vt_TerrainClass; /*0x71bc12*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x71bc19*/
  this->health = (void *)*((_DWORD *)this->q032 + 40); /*0x71bc2e*/
  if ( *(_WORD *)aP2->__pad_0 != *(_WORD *)&stru_B05488.__pad_579C[16588] /*0x71bc48*/
    || *(_WORD *)&aP2->__pad_0[2] != *(_WORD *)&stru_B05488.__pad_579C[16590] )
  {
    v5 = (*(__int16 *)aP2->__pad_0 << 8) + 128; /*0x71bc61*/
    v14 = (void *)((*(__int16 *)&aP2->__pad_0[2] << 8) + 128); /*0x71bc66*/
    a1 = v5; /*0x71bc6e*/
    v15 = 0; /*0x71bc72*/
    if ( !TerrainClass::ProcessSpawnAnim((int)this, &a1, 0) ) /*0x71bc76*/
      ObjectClass::Destroy((#374 *)this); /*0x71bc81*/
  }
  v6 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x71bc86*/
  this->nextObject = 0; /*0x71bc93*/
  this->Type = v6; /*0x71bc99*/
  this->IsBurning = v14; /*0x71bc9f*/
  this->height = 0; /*0x71bca2*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22244] < *(int *)&HouseClass_Player.__pad_5568[22236] /*0x71bcd7*/
    || (HouseClass_Player.__pad_5568[22241] || !*(_DWORD *)&HouseClass_Player.__pad_5568[22236])
    && *(int *)&HouseClass_Player.__pad_5568[22248] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[22228] + 8))(
         &HouseClass_Player.__pad_5568[22228],
         *(_DWORD *)&HouseClass_Player.__pad_5568[22236] + *(_DWORD *)&HouseClass_Player.__pad_5568[22248],
         0) )
  {
    v7 = (*(_DWORD *)&HouseClass_Player.__pad_5568[22244])++; /*0x71bce4*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22232] + 4 * v7) = this; /*0x71bcf3*/
  }
  aP2a = (TerrainClass *)AbstractClass::GetVtable3((AbstractClass *)(this + 1)); /*0x71bd02*/
  if ( *(_DWORD *)&stru_B05488.__pad_579C[15392] + 1 <= *(int *)&stru_B05488.__pad_579C[15396] ) /*0x71bd0e*/
    goto LABEL_19; /*0x71bd0e*/
  if ( *(_DWORD *)&stru_B05488.__pad_579C[15396] ) /*0x71bd16*/
  {
    v8 = *(_DWORD *)&stru_B05488.__pad_579C[15396]; /*0x71bd1f*/
    if ( *(int *)&stru_B05488.__pad_579C[15396] < 0 ) /*0x71bd23*/
      return (TerrainClass *)this; /*0x71bd23*/
  }
  else
  {
    v8 = 10; /*0x71bd18*/
  }
  v9 = (AbstractClass *)__2_YAPAXI_Z(8 * (v8 + *(_DWORD *)&stru_B05488.__pad_579C[15396])); /*0x71bd38*/
  if ( v9 ) /*0x71bd3f*/
  {
    for ( i = 0; i < *(int *)&stru_B05488.__pad_579C[15392]; *(_DWORD *)&v9->__pad_0[8 * i - 4] = v11[1] ) /*0x71bd58*/
    {
      v11 = (_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * i++); /*0x71bd60*/
      *(_DWORD *)&v9->__pad_0[8 * i - 8] = *v11; /*0x71bd66*/
    }
    __3_YAXPAX_Z(*(void **)&stru_B05488.__pad_579C[15388]); /*0x71bd82*/
    *(_DWORD *)&stru_B05488.__pad_579C[15388] = v9; /*0x71bd91*/
    *(_DWORD *)&stru_B05488.__pad_579C[15396] += v8; /*0x71bd97*/
    *(_DWORD *)&stru_B05488.__pad_579C[15404] = 0; /*0x71bd9c*/
LABEL_19:
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392]) = aP2a; /*0x71bda2*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392] + 4) = this; /*0x71bdc0*/
    stru_B05488.__pad_579C[15400] = 0; /*0x71bdca*/
    ++*(_DWORD *)&stru_B05488.__pad_579C[15392]; /*0x71bdd0*/
  }
  return (TerrainClass *)this; /*0x71bdd7*/
}


// ==== 0x0071BB90  TerrainClass::Construct  this=TerrainClass  sig=csp ====
TerrainClass *__thiscall TerrainClass::Construct(void **this, TerrainTypeClass *aP1, TerrainClass *aP2)
{
  IUnknown *v4; // eax
  int v5; // eax
  IUnknown *v6; // eax
  int v7; // eax
  int v8; // ebp
  AbstractClass *v9; // edi
  int i; // eax
  _DWORD *v11; // ecx
  int a1; // [esp+10h] [ebp-Ch] BYREF
  void *v14; // [esp+14h] [ebp-8h]
  AbstractClass *v15; // [esp+18h] [ebp-4h]
  TerrainClass *aP2a; // [esp+24h] [ebp+8h]

  ObjectClass::ctor(this); /*0x71bb99*/
  this->q02B = 0; /*0x71bba4*/
  this->q0B0 = 0; /*0x71bbaa*/
  v4 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x71bbb0*/
  this->height = 0; /*0x71bbb5*/
  this->Type = v4; /*0x71bbbb*/
  this->nextObject = 0; /*0x71bbc1*/
  this->q031 = (void *)1; /*0x71bbc7*/
  this->q032 = aP1; /*0x71bbd4*/
  this->q0CC = 0; /*0x71bbda*/
  this->q0CD = 0; /*0x71bbe0*/
  this->attachedTag = 0; /*0x71bbe6*/
  this->q0D4 = 0; /*0x71bbec*/
  this->occupant = 0; /*0x71bbf2*/
  this->q037 = 0; /*0x71bbf8*/
  *this = &TerrainClass::`vftable'; /*0x71bbff*/
  this->vtable2 = &off_7F5200; /*0x71bc05*/
  this->vtable3 = &TerrainClass::`vftable'; /*0x71bc0b*/
  this->vtable4 = &vt_TerrainClass; /*0x71bc12*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x71bc19*/
  this->health = (void *)*((_DWORD *)this->q032 + 40); /*0x71bc2e*/
  if ( *(_WORD *)aP2->__pad_0 != *(_WORD *)&stru_B05488.__pad_579C[16588] /*0x71bc48*/
    || *(_WORD *)&aP2->__pad_0[2] != *(_WORD *)&stru_B05488.__pad_579C[16590] )
  {
    v5 = (*(__int16 *)aP2->__pad_0 << 8) + 128; /*0x71bc61*/
    v14 = (void *)((*(__int16 *)&aP2->__pad_0[2] << 8) + 128); /*0x71bc66*/
    a1 = v5; /*0x71bc6e*/
    v15 = 0; /*0x71bc72*/
    if ( !TerrainClass::ProcessSpawnAnim((int)this, &a1, 0) ) /*0x71bc76*/
      ObjectClass::Destroy((#374 *)this); /*0x71bc81*/
  }
  v6 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x71bc86*/
  this->nextObject = 0; /*0x71bc93*/
  this->Type = v6; /*0x71bc99*/
  this->IsBurning = v14; /*0x71bc9f*/
  this->height = 0; /*0x71bca2*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22244] < *(int *)&HouseClass_Player.__pad_5568[22236] /*0x71bcd7*/
    || (HouseClass_Player.__pad_5568[22241] || !*(_DWORD *)&HouseClass_Player.__pad_5568[22236])
    && *(int *)&HouseClass_Player.__pad_5568[22248] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[22228] + 8))(
         &HouseClass_Player.__pad_5568[22228],
         *(_DWORD *)&HouseClass_Player.__pad_5568[22236] + *(_DWORD *)&HouseClass_Player.__pad_5568[22248],
         0) )
  {
    v7 = (*(_DWORD *)&HouseClass_Player.__pad_5568[22244])++; /*0x71bce4*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22232] + 4 * v7) = this; /*0x71bcf3*/
  }
  aP2a = (TerrainClass *)AbstractClass::GetVtable3((AbstractClass *)(this + 1)); /*0x71bd02*/
  if ( *(_DWORD *)&stru_B05488.__pad_579C[15392] + 1 <= *(int *)&stru_B05488.__pad_579C[15396] ) /*0x71bd0e*/
    goto LABEL_19; /*0x71bd0e*/
  if ( *(_DWORD *)&stru_B05488.__pad_579C[15396] ) /*0x71bd16*/
  {
    v8 = *(_DWORD *)&stru_B05488.__pad_579C[15396]; /*0x71bd1f*/
    if ( *(int *)&stru_B05488.__pad_579C[15396] < 0 ) /*0x71bd23*/
      return (TerrainClass *)this; /*0x71bd23*/
  }
  else
  {
    v8 = 10; /*0x71bd18*/
  }
  v9 = (AbstractClass *)__2_YAPAXI_Z(8 * (v8 + *(_DWORD *)&stru_B05488.__pad_579C[15396])); /*0x71bd38*/
  if ( v9 ) /*0x71bd3f*/
  {
    for ( i = 0; i < *(int *)&stru_B05488.__pad_579C[15392]; *(_DWORD *)&v9->__pad_0[8 * i - 4] = v11[1] ) /*0x71bd58*/
    {
      v11 = (_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * i++); /*0x71bd60*/
      *(_DWORD *)&v9->__pad_0[8 * i - 8] = *v11; /*0x71bd66*/
    }
    __3_YAXPAX_Z(*(void **)&stru_B05488.__pad_579C[15388]); /*0x71bd82*/
    *(_DWORD *)&stru_B05488.__pad_579C[15388] = v9; /*0x71bd91*/
    *(_DWORD *)&stru_B05488.__pad_579C[15396] += v8; /*0x71bd97*/
    *(_DWORD *)&stru_B05488.__pad_579C[15404] = 0; /*0x71bd9c*/
LABEL_19:
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392]) = aP2a; /*0x71bda2*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15388] + 8 * *(_DWORD *)&stru_B05488.__pad_579C[15392] + 4) = this; /*0x71bdc0*/
    stru_B05488.__pad_579C[15400] = 0; /*0x71bdca*/
    ++*(_DWORD *)&stru_B05488.__pad_579C[15392]; /*0x71bdd0*/
  }
  return (TerrainClass *)this; /*0x71bdd7*/
}


// ==== 0x0071BDF0  ObjectClass::ProcessFoggedState  this=TerrainClass  sig=csp ====
int __thiscall sub_71BDF0(int this)
{
  wchar_t *v2; // eax
  int v3; // eax
  int v4; // ebp
  #374 *v5; // edi
  signed int i; // eax
  _DWORD *v7; // ecx
  int Vtable3; // [esp+14h] [ebp-4h]

  ObjectClass::ctor((_DWORD *)this); /*0x71bdf9*/
  *(_DWORD *)(this + 172) = 0; /*0x71be03*/
  *(_BYTE *)(this + 176) = 0; /*0x71be09*/
  v2 = MEMORY[0xA8ED84]; /*0x71be0f*/
  *(_DWORD *)(this + 188) = 0; /*0x71be14*/
  *(_DWORD *)(this + 180) = v2; /*0x71be1a*/
  *(_DWORD *)(this + 192) = 0; /*0x71be20*/
  *(_DWORD *)(this + 196) = 1; /*0x71be26*/
  *(_DWORD *)(this + 200) = 0; /*0x71be30*/
  *(_BYTE *)(this + 204) = 0; /*0x71be36*/
  *(_BYTE *)(this + 205) = 0; /*0x71be3c*/
  *(_DWORD *)(this + 208) = 0; /*0x71be42*/
  *(_DWORD *)(this + 212) = 0; /*0x71be48*/
  *(_DWORD *)(this + 216) = 0; /*0x71be4e*/
  *(_DWORD *)(this + 220) = 0; /*0x71be54*/
  *(_DWORD *)this = &TerrainClass::`vftable'; /*0x71be5a*/
  *(_DWORD *)(this + 4) = &off_7F5200; /*0x71be60*/
  *(_DWORD *)(this + 8) = &TerrainClass::`vftable'; /*0x71be66*/
  *(_DWORD *)(this + 12) = &vt_TerrainClass; /*0x71be6d*/
  if ( MEMORY[0xA8E998] < MEMORY[0xA8E990] /*0x71bea8*/
    || (MEMORY[0xA8E995] || !MEMORY[0xA8E990])
    && MEMORY[0xA8E99C] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8E988] + 8))(
         &MEMORY[0xA8E988],
         MEMORY[0xA8E990] + MEMORY[0xA8E99C],
         0) )
  {
    v3 = MEMORY[0xA8E998]++; /*0x71beb5*/
    *((_DWORD *)MEMORY[0xA8E98C] + v3) = this; /*0x71bec4*/
  }
  Vtable3 = AbstractClass::GetVtable3(this + 4); /*0x71bed3*/
  if ( (int)(MEMORY[0xB0E844] + 1) <= MEMORY[0xB0E848] ) /*0x71bedf*/
    goto LABEL_15; /*0x71bedf*/
  if ( MEMORY[0xB0E848] ) /*0x71bee7*/
  {
    v4 = MEMORY[0xB0E848]; /*0x71bef0*/
    if ( MEMORY[0xB0E848] < 0 ) /*0x71bef4*/
      return this; /*0x71bef4*/
  }
  else
  {
    v4 = 10; /*0x71bee9*/
  }
  v5 = (#374 *)__2_YAPAXI_Z(8 * (v4 + MEMORY[0xB0E848])); /*0x71bf09*/
  if ( v5 ) /*0x71bf10*/
  {
    for ( i = 0; i < (int)MEMORY[0xB0E844]; *((_DWORD *)v5 + 2 * i - 1) = v7[1] ) /*0x71bf29*/
    {
      v7 = (_DWORD *)((char *)MEMORY[0xB0E840] + 8 * i++); /*0x71bf31*/
      *((_DWORD *)v5 + 2 * i - 2) = *v7; /*0x71bf37*/
    }
    __3_YAXPAX_Z(MEMORY[0xB0E840]); /*0x71bf53*/
    MEMORY[0xB0E840] = v5; /*0x71bf62*/
    MEMORY[0xB0E848] += v4; /*0x71bf68*/
    MEMORY[0xB0E850] = 0; /*0x71bf6d*/
LABEL_15:
    *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844]) = Vtable3; /*0x71bf73*/
    *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844] + 1) = this; /*0x71bf91*/
    MEMORY[0xB0E84C] = 0; /*0x71bf9b*/
    ++MEMORY[0xB0E844]; /*0x71bfa1*/
  }
  return this; /*0x71bfa8*/
}


// ==== 0x0071BFB0  TerrainClass::CheckNearbyObjects  this=TerrainClass  sig=csp ====
char __userpurge TerrainClass::CheckNearbyObjects@<al>(int this@<ecx>, MouseClass aP1)
{
  SmudgeClass *v2; // esi
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // ecx
  _BYTE v8[4]; // [esp+8h] [ebp-10h] BYREF
  _BYTE v9[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = (SmudgeClass *)aP1.field_0; /*0x71bfb4*/
  if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay((#374 *)this) ) /*0x71bfbc*/
    return 0; /*0x71c063*/
  aP1.field_0 = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(this->q6E0)(this, v8); /*0x71bfdf*/
  if ( v2 ) /*0x71bfe3*/
  {
    if ( v2 == (SmudgeClass *)1 || v2 == (SmudgeClass *)3 ) /*0x71bfeb*/
    {
      MapClass::FillRevealBuffer(&MEMORY[0x87F7E8], &aP1, (IUnknown *)this); /*0x71bff8*/
      v4 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(this->Animation)(this, v9); /*0x71c00d*/
      Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], v4, (IUnknown *)(this + 216)); /*0x71c01a*/
      v5 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 180); /*0x71c02d*/
      v6 = *(_DWORD *)(this + 220); /*0x71c035*/
      *(_DWORD *)(this + 216) += *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 176); /*0x71c03a*/
      *(_DWORD *)(this + 220) = v5 + v6; /*0x71c03c*/
      return 1; /*0x71c045*/
    }
  }
  else
  {
    MapClass::ApplyOverlayReveal(&MEMORY[0x87F7E8], &aP1, (BuildingClass *)this); /*0x71c053*/
  }
  return 1; /*0x71c026*/
}


// ==== 0x0071C070  TerrainClass::ClearCellFlags  this=TerrainClass  sig=csp ====
_BYTE *__thiscall TerrainClass::_vt61(_DWORD *this, _DWORD *a2)
{
  int v2; // ebx
  _DWORD *v3; // ecx
  _BYTE *result; // eax

  if ( *((_DWORD *)MEMORY[0xA8B230] + 1174) == 1 ) /*0x71c07d*/
    v2 = *(_DWORD *)(this->q0C8 + 684); /*0x71c093*/
  else
    v2 = *(_DWORD *)(this->q0C8 + 680); /*0x71c085*/
  v3 = a2; /*0x71c099*/
  LOWORD(a2) = *a2 / 256; /*0x71c0ab*/
  HIWORD(a2) = v3[1] / 256; /*0x71c0c4*/
  result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x71c0d6*/
  if ( (v2 & 1) != 0 ) /*0x71c0de*/
    result[292] &= ~4u; /*0x71c0e0*/
  if ( (v2 & 2) != 0 ) /*0x71c0ea*/
    result[292] &= ~8u; /*0x71c0ec*/
  if ( (v2 & 4) != 0 ) /*0x71c0f7*/
    result[292] &= ~0x10u; /*0x71c0f9*/
  return result; /*0x71c0f6*/
}


// ==== 0x0071C110  TerrainClass::SetOccupyBit_PassableTerrain  this=TerrainClass  sig=csp ====
_BYTE *__thiscall TerrainClass::SetOccupyBit_PassableTerrain(_DWORD *this, _DWORD *a2)
{
  int v2; // ebx
  _DWORD *v3; // ecx
  _BYTE *result; // eax

  if ( *((_DWORD *)MEMORY[0xA8B230] + 1174) == 1 ) /*0x71c11d*/
    v2 = *(_DWORD *)(this->q0C8 + 684); /*0x71c133*/
  else
    v2 = *(_DWORD *)(this->q0C8 + 680); /*0x71c125*/
  v3 = a2; /*0x71c139*/
  LOWORD(a2) = *a2 / 256; /*0x71c14b*/
  HIWORD(a2) = v3[1] / 256; /*0x71c164*/
  result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x71c176*/
  if ( (v2 & 1) != 0 ) /*0x71c17e*/
    result[292] |= 4u; /*0x71c180*/
  if ( (v2 & 2) != 0 ) /*0x71c18a*/
    result[292] |= 8u; /*0x71c18c*/
  if ( (v2 & 4) != 0 ) /*0x71c197*/
    result[292] |= 0x10u; /*0x71c199*/
  return result; /*0x71c196*/
}


// ==== 0x0071C1B0  TerrainClass::Draw  this=TerrainClass  sig=csp ====
void __thiscall TerrainClass::Draw(unsigned int *this, int *a2, int *a3)
{
  _DWORD *v4; // eax
  unsigned int v5; // edx
  int v6; // ebp
  unsigned int v7; // ebx
  int v8; // edx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // edx
  int v14; // ebp
  int v15; // esi
  int v16; // [esp+10h] [ebp-14h]
  int v17; // [esp+14h] [ebp-10h] BYREF
  _DWORD *v18; // [esp+18h] [ebp-Ch] BYREF
  int v19; // [esp+1Ch] [ebp-8h] BYREF
  int v20; // [esp+20h] [ebp-4h]

  v17 = *(_DWORD *)(*(int (__thiscall **)(unsigned int *, _DWORD **))(*this + 440))(this, &v18); /*0x71c1d4*/
  v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v17); /*0x71c1d8*/
  v5 = *this; /*0x71c1dd*/
  v6 = (int)v4; /*0x71c1df*/
  v18 = v4; /*0x71c1e3*/
  v16 = (*(int (__thiscall **)(unsigned int *))(v5 + 108))(this); /*0x71c1ec*/
  if ( v16 ) /*0x71c1f0*/
  {
    if ( *(_BYTE *)(this->q032 + 691) ) /*0x71c1fe*/
    {
      v7 = this->q02B; /*0x71c208*/
    }
    else if ( this->q0CD ) /*0x71c210*/
    {
      v7 = *((unsigned __int8 *)this + 205) + this->q02B; /*0x71c225*/
    }
    else
    {
      v7 = (int)this->health < 2; /*0x71c22f*/
    }
    v8 = a2[1]; /*0x71c23a*/
    v9 = *this; /*0x71c23d*/
    v19 = *a2; /*0x71c23f*/
    v20 = v8; /*0x71c245*/
    v10 = (*(int (__thiscall **)(unsigned int *))(v9 + 464))(this); /*0x71c249*/
    v11 = -(int)ZCoordToScreenY(v10); /*0x71c25b*/
    if ( !*(_DWORD *)(v6 + 52) ) /*0x71c258*/
      TacticalClass::SetView(v6, 0, 0x10000, 0, 1000, 1000, 1000); /*0x71c27b*/
    v12 = this->q032; /*0x71c280*/
    if ( *(_BYTE *)(v12 + 689) ) /*0x71c286*/
    {
      v13 = MEMORY[0x87F6BC]; /*0x71c294*/
      v14 = *(__int16 *)(v6 + 266); /*0x71c29a*/
      v20 -= 16; /*0x71c2ac*/
    }
    else
    {
      v13 = *(_DWORD *)(v6 + 52); /*0x71c2b2*/
      v14 = *(__int16 *)(v6 + 268); /*0x71c2b5*/
    }
    if ( *(_BYTE *)(v12 + 691) || this->q0CD ) /*0x71c2c6*/
      v15 = 11776; /*0x71c2d0*/
    else
      v15 = 19968; /*0x71c2d7*/
    DrawToSurfaceSHP(MEMORY[0x887314], v13, v16, v7, &v19, a3, v15, 0, v11 - 12, 2, v14, 0, 0, 0, 0, 0); /*0x71c304*/
    if ( byte_822CF1 ) /*0x71c310*/
      DrawToSurfaceSHP( /*0x71c34e*/
        MEMORY[0x887314],
        v18[13],
        v16,
        v7 + *(__int16 *)(v16 + 6) / 2,
        &v19,
        a3,
        v15 | 1,
        0,
        v11 - 3,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
  }
}


// ==== 0x0071C360  TerrainClass::ProcessDestructionAnim  this=TerrainClass  sig=csp ====
void __thiscall TerrainClass::_vt70(unsigned __int8 *this, int *a2, int *a3)
{
  _DWORD *v4; // ebx
  int v5; // ebp
  unsigned __int8 v6; // al
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // edx
  int v12; // esi
  unsigned int v13; // [esp+10h] [ebp-10h] BYREF
  int v14; // [esp+14h] [ebp-Ch] BYREF
  int v15; // [esp+18h] [ebp-8h] BYREF
  int v16; // [esp+1Ch] [ebp-4h]

  v14 = *(_DWORD *)(*(int (__thiscall **)(unsigned __int8 *, unsigned int *))(this->q6E0)(this, &v13); /*0x71c384*/
  v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14); /*0x71c391*/
  v5 = (*(int (__thiscall **)(unsigned __int8 *))(this->health)(this); /*0x71c396*/
  if ( v5 ) /*0x71c39a*/
  {
    v6 = this->q0CD; /*0x71c3a0*/
    v13 = 0; /*0x71c3a6*/
    if ( v6 ) /*0x71c3b0*/
      v13 = v6 + this->q02B; /*0x71c3bf*/
    v7 = a2[1]; /*0x71c3c9*/
    v8 = *(_DWORD *)this; /*0x71c3cc*/
    v15 = *a2; /*0x71c3ce*/
    v16 = v7; /*0x71c3d4*/
    v9 = (*(int (__thiscall **)(unsigned __int8 *))(v8 + 464))(this); /*0x71c3d8*/
    v10 = -(int)ZCoordToScreenY(v9); /*0x71c3ea*/
    if ( !v4[13] ) /*0x71c3e7*/
      TacticalClass::SetView((int)v4, 0, 0x10000, 0, 1000, 1000, 1000); /*0x71c40a*/
    if ( *(_BYTE *)(this->q032 + 689) ) /*0x71c415*/
    {
      v11 = MEMORY[0x87F6BC]; /*0x71c423*/
      v12 = *((__int16 *)v4 + 133); /*0x71c429*/
      v16 -= 16; /*0x71c43b*/
    }
    else
    {
      v11 = v4[13]; /*0x71c441*/
      v12 = *((__int16 *)v4 + 134); /*0x71c444*/
    }
    DrawToSurfaceSHP(MEMORY[0x887314], v11, v5, v13, &v15, a3, 3584, 0, v10 - 4, 2, v12, 0, 0, 0, 0, 0); /*0x71c477*/
    if ( byte_822CF1 ) /*0x71c483*/
      DrawToSurfaceSHP( /*0x71c4be*/
        MEMORY[0x887314],
        v4[13],
        v5,
        v13 + *(__int16 *)(v5 + 6) / 2,
        &v15,
        a3,
        1537,
        0,
        v10 - 2,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
  }
}


// ==== 0x0071C4D0  TerrainClass::IsPlacementValid  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::_vt107(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  _WORD *v7; // esi
  int v8; // edi
  _WORD *v9; // eax
  __int16 v10; // dx
  void *v11; // eax
  __int16 v12; // dx
  __int16 v13; // ax
  int v15; // [esp-Ch] [ebp-24h]
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h] BYREF
  int v18; // [esp+1Ch] [ebp+4h]

  v7 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 264))(this, 0); /*0x71c4e8*/
  v8 = *(_DWORD *)(a2 + 36); /*0x71c4ea*/
  while ( *v7 != 0x7FFF || v7[1] != 0x7FFF ) /*0x71c503*/
  {
    v9 = v7; /*0x71c517*/
    if ( *(_BYTE *)(this->q0C8 + 688) ) /*0x71c50f*/
    {
      v10 = v7[1]; /*0x71c51e*/
      v7 += 2; /*0x71c522*/
      LOWORD(v18) = v8 + *v9; /*0x71c52b*/
      HIWORD(v18) = HIWORD(v8) + v10; /*0x71c530*/
      v15 = 5; /*0x71c541*/
      v17 = v18; /*0x71c543*/
    }
    else
    {
      v12 = *v7; /*0x71c55f*/
      v13 = v7[1]; /*0x71c562*/
      v7 += 2; /*0x71c566*/
      LOWORD(v16) = v8 + v12; /*0x71c56f*/
      HIWORD(v16) = HIWORD(v8) + v13; /*0x71c574*/
      v15 = 1; /*0x71c585*/
      v17 = v16; /*0x71c587*/
    }
    v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v17); /*0x71c54d*/
    if ( !CellClass::IsPassable((int)v11, v15, 0, 0) ) /*0x71c55b*/
      return 7; /*0x71c59a*/
  }
  return 0; /*0x71c58e*/
}


// ==== 0x0071C5B0  TerrainClass::PlayAmbientAnimation  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::PlayAmbientAnimation(IUnknown *this)
{
  int v2; // eax
  char v3; // si
  void **v4; // ebx
  int *v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  AnimClass *v9; // eax
  AnimClass *v10; // esi
  CoordStruct aP2; // [esp+4h] [ebp-18h] BYREF
  char v13[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( this->__pad_A8[37] ) /*0x71c5b6*/
    return 0; /*0x71c5b6*/
  if ( this->__pad_A8[36] ) /*0x71c5c4*/
    return 0; /*0x71c5c4*/
  v2 = *(_DWORD *)&this->__pad_A8[32]; /*0x71c5d2*/
  if ( *(_DWORD *)(v2 + 156) != 6 || *(_BYTE *)(v2 + 689) ) /*0x71c5e5*/
    return 0; /*0x71c69d*/
  v3 = Random::State(&MEMORY[0xA8B230]->random[1]); /*0x71c60a*/
  v4 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x71c611*/
  if ( v4 ) /*0x71c618*/
  {
    v5 = (int *)(*(int (__thiscall **)(IUnknown *, char *))(this->field_0 + 72))(this, v13); /*0x71c623*/
    v6 = *v5; /*0x71c626*/
    v7 = v5[1]; /*0x71c628*/
    v8 = v5[2]; /*0x71c62b*/
    aP2.Y = v7; /*0x71c62e*/
    aP2.X = v6; /*0x71c63f*/
    aP2.Z = v8 + 80; /*0x71c643*/
    v9 = AnimClass::ctor( /*0x71c667*/
           v4,
           *(CoordStruct **)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2964) + 4 * (v3 & 1)),
           &aP2,
           0,
           (CoordStruct *)0xFF,
           (void *)0x600,
           0,
           0);
    v10 = v9; /*0x71c66c*/
    if ( v9 ) /*0x71c670*/
      BuildingClass::AimTurret(v9, this); /*0x71c675*/
  }
  else
  {
    v10 = 0; /*0x71c699*/
  }
  v10->field_100 -= 20; /*0x71c683*/
  this->__pad_A8[36] = 1; /*0x71c68a*/
  return 1; /*0x71c694*/
}


// ==== 0x0071C6B0  TerrainClass::ProcessTick  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::_vt95(void *this)
{
  wchar_t *v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  LOBYTE(v2) = this->q0CC; /*0x71c6b6*/
  if ( (_BYTE)v2 ) /*0x71c6be*/
  {
    LOBYTE(v2) = this->q0CD; /*0x71c6c0*/
    this->q0CC = 0; /*0x71c6c6*/
    if ( !(_BYTE)v2 ) /*0x71c6cf*/
    {
      v2 = (wchar_t *)this->health; /*0x71c6d1*/
      if ( !v2 ) /*0x71c6d6*/
      {
        (*(void (__thiscall **)(void *, int))(this->q0DC)(this, 1); /*0x71c6dc*/
        (*(void (__thiscall **)(void *, int))(this->q124)(this, 2); /*0x71c6e8*/
        LOBYTE(v2) = this->q0CD; /*0x71c6ee*/
        if ( !(_BYTE)v2 ) /*0x71c6f6*/
        {
          this->q0CD = 1; /*0x71c6f8*/
          v2 = MEMORY[0xA8ED84]; /*0x71c6ff*/
          this->nextObject = 2; /*0x71c70f*/
          this->Type = v2; /*0x71c715*/
          this->IsBurning = v4; /*0x71c71b*/
          this->height = 2; /*0x71c71e*/
          this->q02B = 0; /*0x71c721*/
          LOBYTE(v2) = v4; /*0x71c717*/
        }
      }
    }
  }
  return (char)v2; /*0x71c72b*/
}


// ==== 0x0071C730  TerrainClass::Update  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::Update(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  wchar_t *v5; // ecx
  int result; // eax
  int v7; // ecx
  int v8; // edi
  _BYTE *v9; // ecx
  int v10; // edi
  wchar_t *v11; // eax
  wchar_t **v12; // edx
  int *v13; // esi
  int v14; // [esp+10h] [ebp-Ch] BYREF
  wchar_t *v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h]

  ObjectClass::DetectCloaked((#374 *)this); /*0x71c738*/
  if ( *(_BYTE *)(*(_DWORD *)(this + 200) + 691) ) /*0x71c745*/
  {
    if ( !*(_DWORD *)(this + 192) ) /*0x71c74d*/
    {
      v2 = Random::State((_DWORD *)MEMORY[0xA8B230] + 134); /*0x71c761*/
      v3 = *(_DWORD *)(this + 200); /*0x71c773*/
      if ( (double)((int)abs32(v2) % 1000000) * 0.000001 < *(float *)(v3 + 676) ) /*0x71c796*/
      {
        *(_DWORD *)(this + 172) = 0; /*0x71c798*/
        v4 = *(_DWORD *)(v3 + 672); /*0x71c79e*/
        v5 = MEMORY[0xA8ED84]; /*0x71c7a4*/
        *(_DWORD *)(this + 192) = v4; /*0x71c7b0*/
        *(_DWORD *)(this + 180) = v5; /*0x71c7b6*/
        *(_DWORD *)(this + 184) = v15; /*0x71c7bc*/
        *(_DWORD *)(this + 188) = v4; /*0x71c7bf*/
      }
    }
  }
  result = CDTimerClass::TimeRemaining((int *)(this + 180)); /*0x71c7ca*/
  if ( result || (result = *(_DWORD *)(this + 192)) == 0 ) /*0x71c7db*/
  {
    *(_BYTE *)(this + 176) = 0; /*0x71c840*/
  }
  else
  {
    v7 = *(_DWORD *)(this + 196) + *(_DWORD *)(this + 172); /*0x71c7e9*/
    *(_BYTE *)(this + 176) = 1; /*0x71c7eb*/
    *(_DWORD *)(this + 172) = v7; /*0x71c7f2*/
    *(_DWORD *)(this + 180) = MEMORY[0xA8ED84]; /*0x71c7fe*/
    *(_DWORD *)(this + 184) = v15; /*0x71c804*/
    *(_DWORD *)(this + 188) = result; /*0x71c807*/
    if ( *(_BYTE *)(this + 205) /*0x71c82d*/
      && (v8 = *(_DWORD *)(this + 172),
          result = *(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 200) + 156))(*(_DWORD *)(this + 200))
                              + 6)
                 - 1,
          v8 == result) )
    {
      return (*(int (__thiscall **)(int))(this->q0F8)(this); /*0x71c833*/
    }
    else
    {
      v9 = *(_BYTE **)(this + 200); /*0x71c84d*/
      if ( v9[689] && v9[691] ) /*0x71c85b*/
      {
        v10 = *(_DWORD *)(this + 172); /*0x71c865*/
        result = *(__int16 *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 156))(v9) + 6) / 2; /*0x71c878*/
        if ( v10 == result ) /*0x71c87c*/
        {
          *(_DWORD *)(this + 172) = 0; /*0x71c87e*/
          v11 = MEMORY[0xA8ED84]; /*0x71c884*/
          v12 = (wchar_t **)(this + 180); /*0x71c889*/
          *(_DWORD *)(this + 192) = 0; /*0x71c88f*/
          v13 = (int *)(this + 156); /*0x71c897*/
          *v12 = v11; /*0x71c89d*/
          v12[1] = v15; /*0x71c8a5*/
          v12[2] = 0; /*0x71c8a8*/
          v14 = *v13; /*0x71c8ad*/
          v15 = (wchar_t *)v13[1]; /*0x71c8be*/
          v16 = v13[2]; /*0x71c8c5*/
          Coord::To_Cell(&MEMORY[0x87F7E8], &v14); /*0x71c8c9*/
          return CellClass::SpawnTiberiumTree(1); /*0x71c8d0*/
        }
      }
    }
  }
  return result; /*0x71c839*/
}


// ==== 0x0071C8E0  ObjectClass::method_71C8E0  this=ObjectClass  sig=csp ====
char __thiscall sub_71C8E0(int this)
{
  char result; // al
  int v2; // [esp+4h] [ebp-8h]

  result = *(_BYTE *)(this + 205); /*0x71c8e0*/
  if ( !result ) /*0x71c8eb*/
  {
    *(_BYTE *)(this + 205) = 1; /*0x71c8ee*/
    *(_DWORD *)(this + 180) = MEMORY[0xA8ED84]; /*0x71c905*/
    *(_DWORD *)(this + 192) = 2; /*0x71c90b*/
    *(_DWORD *)(this + 184) = v2; /*0x71c911*/
    *(_DWORD *)(this + 188) = 2; /*0x71c914*/
    *(_DWORD *)(this + 172) = 0; /*0x71c917*/
    return v2; /*0x71c907*/
  }
  return result; /*0x71c922*/
}


// ==== 0x0071C930  TerrainClass::ApplyCellModifications  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::ApplyCellModifications(#374 *this)
{
  int v2; // ebx
  int v3; // esi
  int v4; // edx
  __int16 v5; // cx
  _BYTE *v6; // eax
  _DWORD *v7; // eax
  char v8; // bl
  void *v9; // eax
  int v11; // [esp+8h] [ebp-18h] BYREF
  int v12; // [esp+Ch] [ebp-14h]
  int v13; // [esp+10h] [ebp-10h] BYREF
  _DWORD v14[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( !this->inLimbo ) /*0x71c937*/
  {
    v2 = *(_DWORD *)(*(int (__thiscall **)(#374 *, int *))(this->q6E0)(this, &v13); /*0x71c956*/
    v3 = 0; /*0x71c958*/
    v12 = v2; /*0x71c95a*/
    do /*0x71c9b8*/
    {
      v4 = v3 & 7; /*0x71c968*/
      v5 = LOWORD(MEMORY[0x89F688][v4]) + v2; /*0x71c96b*/
      LOWORD(v4) = HIWORD(MEMORY[0x89F688][v4]); /*0x71c97a*/
      LOWORD(v12) = v5; /*0x71c982*/
      HIWORD(v12) = HIWORD(v2) + v4; /*0x71c98e*/
      v13 = v12; /*0x71c99d*/
      v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v13); /*0x71c9a1*/
      ++v3; /*0x71c9ae*/
      --v6[290]; /*0x71c9b2*/
    }
    while ( v3 < 8 ); /*0x71c9b8*/
    v14[0] = this->q027; /*0x71c9c6*/
    v14[1] = this->owningHouseIndex; /*0x71c9d2*/
    v14[2] = this->q029; /*0x71c9de*/
    v7 = Coord::To_Cell(&MEMORY[0x87F7E8], v14); /*0x71c9e2*/
    v7[73] &= ~0x40u; /*0x71c9f6*/
  }
  v11 = *(_DWORD *)(*(int (__thiscall **)(#374 *, int *))(this->q6E0)(this, &v13); /*0x71ca0a*/
  v8 = ObjectClass::Undeploy(this); /*0x71ca21*/
  v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v11); /*0x71ca23*/
  House::AnnounceUpgrade((int)v9, -1); /*0x71ca2a*/
  if ( !MEMORY[0xA8E7AC] ) /*0x71ca36*/
  {
    Cell::SetRadar(&MEMORY[0x87F7E8].field_0, (__int16 *)&v11); /*0x71ca42*/
    Radar::Update(&MEMORY[0x87F7E8], (__int16 *)&v11); /*0x71ca51*/
    BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)&v11); /*0x71ca60*/
  }
  return v8; /*0x71ca67*/
}


// ==== 0x0071CA70  CCINIClass::LoadTypeFromINI  this=IUnknown  sig=csp ====
int __thiscall CCINIClass::LoadTypeFromINI(char *this)
{
  int result; // eax
  CCINIClass *v3; // ebp
  unsigned __int8 *StringByIndex; // esi
  TerrainTypeClass *v5; // ebx
  int v6; // eax
  int v7; // eax
  void **v8; // eax
  int v9; // [esp+8h] [ebp-90h] BYREF
  CCINIClass *v10; // [esp+Ch] [ebp-8Ch]
  int v11; // [esp+10h] [ebp-88h]
  int i; // [esp+14h] [ebp-84h]
  INIClass Destination[2]; // [esp+18h] [ebp-80h] BYREF

  INIClass::ResetSection(this); /*0x71ca7a*/
  result = INIClass::GetKeyCount(this, (INIClass *)aTerrain); /*0x71ca87*/
  v3 = 0; /*0x71ca8c*/
  for ( i = result; (int)v3 < i; v3 = (CCINIClass *)((char *)v3 + 1) ) /*0x71ca94*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this, (CCINIClass *)aTerrain, v3); /*0x71caaf*/
    if ( INIClass::GetString( /*0x71cac5*/
           (unsigned __int8 ***)this,
           (INIClass *)aTerrain,
           StringByIndex,
           (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
           Destination,
           128) )
    {
      v5 = TerrainTypeClass::FindOrCreate(Destination[0].__pad_0); /*0x71cad7*/
    }
    else
    {
      v5 = 0; /*0x71cadb*/
    }
    if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[656] < 4 ) /*0x71cae6*/
    {
      v7 = atoi((const char *)StringByIndex); /*0x71cb1f*/
      LOWORD(v11) = v7 % 128; /*0x71cb36*/
      HIWORD(v11) = v7 / 128; /*0x71cb44*/
      v9 = v11; /*0x71cb4d*/
    }
    else
    {
      v6 = atoi((const char *)StringByIndex); /*0x71cae8*/
      LOWORD(v10) = v6 % 1000; /*0x71caff*/
      HIWORD(v10) = v6 / 1000; /*0x71cb10*/
      v9 = (int)v10; /*0x71cb19*/
    }
    if ( v5 ) /*0x71cb53*/
    {
      v8 = (void **)__2_YAPAXI_Z(0xE0u); /*0x71cb5a*/
      if ( v8 ) /*0x71cb64*/
        TerrainClass::Construct(v8, v5, (__int16 *)&v9); /*0x71cb6e*/
    }
    result = i; /*0x71cb73*/
  }
  return result; /*0x71cb82*/
}


// ==== 0x0071CB90  ObjectTypeClass::ReadDestroyAnim  this=INIClass  sig=csp ====
int __thiscall ObjectTypeClass::ReadDestroyAnim(char *this)
{
  int result; // eax
  int i; // ebx
  int v4; // esi
  int v5; // [esp+8h] [ebp-14h]
  char v6[4]; // [esp+Ch] [ebp-10h] BYREF
  char Buffer[12]; // [esp+10h] [ebp-Ch] BYREF

  INIClass::ClearSection((int)this, (INIClass *)aTerrain, 0); /*0x71cb9f*/
  result = *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[260]; /*0x71cba4*/
  for ( i = 0; i < *(int *)&MEMORY[0xA8D63C].__pad_1258[260]; ++i ) /*0x71cbad*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[248] + 4 * i); /*0x71cbba*/
    if ( v4 && !*(_BYTE *)(v4 + 129) ) /*0x71cbc1*/
    {
      if ( *(_BYTE *)(v4 + 144) ) /*0x71cbcb*/
      {
        v5 = *(_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v4 + 440))(v4, v6); /*0x71cbe6*/
        sprintf(Buffer, MEMORY[0x817F6C], (__int16)v5 + 1000 * SHIWORD(v5)); /*0x71cc09*/
        INIClass::SetString(this, (INIClass *)aTerrain, (INIClass *)Buffer, (INIClass *)(*(_DWORD *)(v4 + 200) + 36)); /*0x71cc29*/
      }
    }
    result = *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[260]; /*0x71cc2e*/
  }
  return result; /*0x71cc3d*/
}


// ==== 0x0071CC50  TerrainClass::CheckSpawnConditions  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::_vt65(_BYTE *this, int *a2, char a3, int a4)
{
  int *v5; // eax
  int v6; // ebx
  int v7; // ebp
  _DWORD *v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // ebx
  int v12; // eax
  int v13; // ebp
  int v14; // ebx
  _DWORD *v15; // eax
  int v16; // ecx
  int v18; // [esp+10h] [ebp-18h] BYREF
  int v19; // [esp+14h] [ebp-14h]
  _DWORD v20[4]; // [esp+18h] [ebp-10h] BYREF

  if ( !MEMORY[0xA8ED6B] && g_hWnd && (!a3 && !this->needsRedraw || !this->isOnMap || this->inLimbo) ) /*0x71cc8c*/
    return 0; /*0x71cc8c*/
  this->needsRedraw = 0; /*0x71ccad*/
  v5 = ClipRectIntersection(v20, a2, &MEMORY[0x886FA0], 0, 0); /*0x71ccb4*/
  *a2 = *v5; /*0x71ccbd*/
  a2[1] = v5[1]; /*0x71ccc2*/
  a2[2] = v5[2]; /*0x71ccc8*/
  a2[3] = v5[3]; /*0x71ccce*/
  v6 = MEMORY[0x886FA0]; /*0x71ccd3*/
  v7 = MEMORY[0x886FA4]; /*0x71ccd9*/
  v8 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(this->q12C)(this, v20); /*0x71cce6*/
  v9 = v8[1]; /*0x71ccee*/
  v10 = v6 + *v8; /*0x71ccf1*/
  v11 = v8[2]; /*0x71ccf3*/
  v12 = v8[3]; /*0x71ccf6*/
  v13 = v9 + v7; /*0x71ccf9*/
  if ( *a2 >= v10 + v11 ) /*0x71cd01*/
    return 0; /*0x71cd01*/
  v14 = a2[1]; /*0x71cd07*/
  if ( v14 >= v13 + v12 || *a2 + a2[2] <= v10 || v14 + a2[3] <= v13 ) /*0x71cd20*/
    return 0; /*0x71cd90*/
  v15 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(this->Animation)(this, v20); /*0x71cd30*/
  Coord::To_Screen(MEMORY[0x887324], v15, &v18); /*0x71cd3d*/
  if ( *a2 > MEMORY[0x886FA0] ) /*0x71cd4b*/
    v18 += MEMORY[0x886FA0] - *a2; /*0x71cd55*/
  v16 = a2[1]; /*0x71cd59*/
  if ( v16 > MEMORY[0x886FA4] ) /*0x71cd63*/
    v19 += MEMORY[0x886FA4] - v16; /*0x71cd6d*/
  (*(void (__thiscall **)(_BYTE *, int *, int *))(this->q114)(this, &v18, a2); /*0x71cd7b*/
  return 1; /*0x71cd81*/
}


// ==== 0x0071CDA0  TerrainClass::LoadFromStream  this=TerrainClass  sig=csp ====
int __stdcall TerrainClass::LoadFromStream(_DWORD *a1, int a2)
{
  _DWORD *v2; // ebp
  _DWORD *v3; // esi
  int v4; // eax
  #374 *v5; // ecx
  int v6; // edx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  signed int v10; // ecx
  size_t i; // eax
  _DWORD *v12; // eax
  int Register; // edi
  int v14; // esi
  int v15; // eax
  int v17; // [esp+Ch] [ebp-8h] BYREF

  v2 = a1; /*0x71cda4*/
  v3 = a1 + 1; /*0x71cdad*/
  v4 = (*(int (__stdcall **)(_DWORD *))(a1[1] + 16))(a1 + 1); /*0x71cdb1*/
  v6 = MEMORY[0xB0E844]; /*0x71cdb4*/
  v7 = v4; /*0x71cdba*/
  if ( MEMORY[0xB0E844] ) /*0x71cdbe*/
  {
    if ( !MEMORY[0xB0E84C] ) /*0x71cdcb*/
    {
      qsort(MEMORY[0xB0E840], MEMORY[0xB0E844], 8u, CompareFunction); /*0x71cddc*/
      v6 = MEMORY[0xB0E844]; /*0x71cde1*/
      MEMORY[0xB0E850] = 0; /*0x71cdea*/
      MEMORY[0xB0E84C] = 1; /*0x71cdf4*/
    }
    v17 = v7; /*0x71ce06*/
    v8 = BinaryArraySearch((int)MEMORY[0xB0E840], v6, &v17); /*0x71ce0a*/
    if ( v8 ) /*0x71ce11*/
    {
      v9 = (v8 - (int)MEMORY[0xB0E840]) >> 3; /*0x71ce19*/
      if ( v9 != -1 ) /*0x71ce1f*/
      {
        v10 = v9 + 1; /*0x71ce21*/
        for ( i = MEMORY[0xB0E844]; v10 < (int)MEMORY[0xB0E844]; i = MEMORY[0xB0E844] ) /*0x71ce2b*/
        {
          v12 = (_DWORD *)((char *)MEMORY[0xB0E840] + 8 * v10++); /*0x71ce33*/
          *(v12 - 2) = *v12; /*0x71ce39*/
          *(v12 - 1) = v12[1]; /*0x71ce3f*/
        }
        MEMORY[0xB0E844] = i - 1; /*0x71ce54*/
        *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844]) = 0; /*0x71ce59*/
        v5 = MEMORY[0xB0E840]; /*0x71ce61*/
        *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844] + 1) = 0; /*0x71ce69*/
        MEMORY[0xB0E850] = 0; /*0x71ce6d*/
      }
    }
  }
  Register = BuildingClass::SaveLoad_Register(v5); /*0x71ce7e*/
  if ( Register >= 0 ) /*0x71ce82*/
  {
    if ( v2 ) /*0x71ce8a*/
    {
      ObjectClass::Init(v2, (int)&a1); /*0x71ce93*/
      *v2 = &TerrainClass::`vftable'; /*0x71ce98*/
      *v3 = &off_7F5200; /*0x71ce9f*/
      v2[2] = &TerrainClass::`vftable'; /*0x71cea5*/
      v2[3] = &vt_TerrainClass; /*0x71ceac*/
    }
    v14 = (*(int (__stdcall **)(_DWORD *))(*v3 + 16))(v3); /*0x71cebf*/
    v15 = MEMORY[0xB0E848]; /*0x71cec1*/
    if ( (int)(MEMORY[0xB0E844] + 1) <= MEMORY[0xB0E848] ) /*0x71cec9*/
      goto LABEL_16; /*0x71cec9*/
    if ( !MEMORY[0xB0E848] ) /*0x71cecd*/
      v15 = 10; /*0x71cecf*/
    if ( BuildingTypeClass::Enqueue((int)&MEMORY[0xB0E840], v15) ) /*0x71ceda*/
    {
LABEL_16:
      *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844]) = v14; /*0x71ceee*/
      *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844] + 1) = v2; /*0x71cefc*/
      MEMORY[0xB0E84C] = 0; /*0x71cf06*/
      ++MEMORY[0xB0E844]; /*0x71cf0d*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 50); /*0x71cf1e*/
  }
  return Register; /*0x71cf25*/
}


// ==== 0x0071CF30  TerrainClass::CheckFrameUpdate  this=TerrainClass  sig=csp ====
int __stdcall TerrainClass::CheckFrameUpdate(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x71cf44*/
}


// ==== 0x0071CF50  TerrainClass::PowerDrainUpdate  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // eax

  HouseClass::ProcessPower((#374 *)this); /*0x71cf59*/
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 200) + 44))(*(_DWORD *)(this + 200)); /*0x71cf66*/
  Power::TimerProcess(v3); /*0x71cf6c*/
  v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 200) + 4) + 16))(*(_DWORD *)(this + 200) + 4); /*0x71cf7d*/
  Power::TimerProcess(v4); /*0x71cf83*/
  LOBYTE(v5) = *(_BYTE *)(this + 204); /*0x71cf88*/
  v6 = Power::FlagProcess(a2, v5); /*0x71cf91*/
  LOBYTE(v6) = *(_BYTE *)(this + 205); /*0x71cf96*/
  Power::FlagProcess(a2, v6); /*0x71cf9f*/
  Power::TimerProcess(*(_DWORD *)(this + 208)); /*0x71cfad*/
  return Power::TimerProcess(*(_DWORD *)(this + 212)); /*0x71cfc0*/
}


// ==== 0x0071CFD0  TerrainClass::ProcessFrameStep  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::ProcessFrameStep(int this, int a2, ParticleSystemClass *aP2)
{
  int result; // eax

  result = Object::Unlink((#374 *)this); /*0x71cfde*/
  if ( *(_DWORD *)(this + 200) == a2 ) /*0x71cfe9*/
    *(_DWORD *)(this + 200) = 0; /*0x71cfeb*/
  return result; /*0x71cff5*/
}


// ==== 0x0071D000  TerrainClass::ProcessSpawnAnim  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::ProcessSpawnAnim(int this, _DWORD *a1, AbstractClass *aP2)
{
  IUnknown *v3; // ebp
  IUnknown *v4; // edi
  IUnknown *v5; // ebx
  IUnknown *i; // esi
  int v7; // ecx
  __int16 v8; // ax
  _BYTE *v9; // eax
  _DWORD *v10; // eax
  int v11; // edi
  char v14[12]; // [esp+8h] [ebp-Ch] BYREF

  v3 = (IUnknown *)a1; /*0x71d008*/
  if ( !(unsigned __int8)ObjectClass::Deploy((#374 *)this) ) /*0x71d012*/
    return 0; /*0x71d13e*/
  v4 = (IUnknown *)(v3->field_0 / 256); /*0x71d03e*/
  v5 = (IUnknown *)(v3->field_4 / 256); /*0x71d041*/
  for ( i = 0; (int)i < 8; i = (IUnknown *)((char *)i + 1) ) /*0x71d044*/
  {
    v7 = (unsigned __int8)i & 7; /*0x71d048*/
    v8 = *((_WORD *)&MEMORY[0x89F68A] + 2 * v7); /*0x71d05d*/
    LOWORD(aP2) = (_WORD)v4 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v7); /*0x71d061*/
    HIWORD(aP2) = (_WORD)v5 + v8; /*0x71d06d*/
    a1 = aP2->__pad_0; /*0x71d076*/
    v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x71d080*/
    ++v9[290]; /*0x71d091*/
  }
  v10 = (_DWORD *)(*(int (__stdcall **)(char *))(this->Animation)(v14); /*0x71d0ab*/
  Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], v10, (IUnknown *)(this + 216)); /*0x71d0b8*/
  v11 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 180) + *(_DWORD *)(this + 220); /*0x71d0d6*/
  *(_DWORD *)(this + 216) += *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 176); /*0x71d0dd*/
  *(_DWORD *)(this + 220) = v11; /*0x71d0df*/
  if ( *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v3) + 17) != -1 ) /*0x71d0ef*/
  {
    if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v3) + 17)] /*0x71d108*/
                  + 681) )
    {
      *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v3) + 17) = -1; /*0x71d123*/
      *((_BYTE *)Coord::To_Cell(&MEMORY[0x87F7E8], v3) + 286) = 0; /*0x71d12b*/
    }
  }
  return 1; /*0x71d137*/
}


// ==== 0x0071D150  TerrainClass::GetOffset  this=TerrainClass  sig=csp ====
unsigned int __thiscall IRTTITypeInfo::GetOffset(Concurrency::details::SchedulerBase *this)
{
  return this->q032; /*0x71d156*/
}


// ==== 0x0071D160  TerrainClass::Export  this=TerrainClass  sig=csp ====
_DWORD *__thiscall TerrainClass::Export(int this, _DWORD *a2)
{
  __int16 *HasC4; // esi
  int *FoundationSize; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // edx
  int v8; // eax
  int *v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  int v15; // edi
  int v16; // [esp+4h] [ebp-40h]
  int v17; // [esp+8h] [ebp-3Ch]
  unsigned int v18; // [esp+Ch] [ebp-38h]
  unsigned int v19; // [esp+10h] [ebp-34h]
  int v20; // [esp+14h] [ebp-30h] BYREF
  int v21; // [esp+18h] [ebp-2Ch]
  int v22; // [esp+1Ch] [ebp-28h]
  int v23; // [esp+20h] [ebp-24h]
  int v24; // [esp+28h] [ebp-1Ch]
  int v25; // [esp+30h] [ebp-14h]
  _DWORD v26[4]; // [esp+34h] [ebp-10h] BYREF

  v18 = *(_DWORD *)(this + 216) - (unsigned int)MEMORY[0x887324][44].__tail_0; /*0x71d17d*/
  v19 = *(_DWORD *)(this + 220) - (unsigned int)MEMORY[0x887324][45].__tail_0; /*0x71d189*/
  HasC4 = (__int16 *)ObjectClass::HasC4((#374 *)this); /*0x71d192*/
  if ( HasC4 ) /*0x71d196*/
  {
    FoundationSize = Building::GetFoundationSize(&v20, 0); /*0x71d1d4*/
    v5 = *FoundationSize; /*0x71d1d9*/
    v24 = FoundationSize[1]; /*0x71d1de*/
    v6 = FoundationSize[2]; /*0x71d1e4*/
    v7 = FoundationSize[3]; /*0x71d1e7*/
    v8 = HasC4[3]; /*0x71d1ea*/
    v25 = v7; /*0x71d1ee*/
    v9 = Building::GetFoundationSize(v26, v8 / 2); /*0x71d1fd*/
    v10 = *v9; /*0x71d206*/
    v21 = v9[1]; /*0x71d20c*/
    v11 = v9[2]; /*0x71d210*/
    v22 = v11; /*0x71d213*/
    v23 = v9[3]; /*0x71d21a*/
    v16 = HasC4[1]; /*0x71d226*/
    v17 = HasC4[2]; /*0x71d22a*/
    if ( v6 <= 0 || v25 <= 0 ) /*0x71d236*/
    {
      v13 = *v9; /*0x71d2a6*/
      v12 = v9[1]; /*0x71d2a8*/
      v6 = v9[2]; /*0x71d2ab*/
      v15 = v9[3]; /*0x71d2ae*/
    }
    else if ( v11 <= 0 || v23 <= 0 ) /*0x71d242*/
    {
      v12 = v24; /*0x71d29c*/
      v13 = v5; /*0x71d2a0*/
      v15 = v25; /*0x71d2a2*/
    }
    else
    {
      v12 = v24; /*0x71d244*/
      v13 = v5; /*0x71d24a*/
      v14 = v25; /*0x71d24c*/
      if ( v5 > v10 ) /*0x71d24e*/
      {
        v13 = v10; /*0x71d252*/
        v6 += v5 - v10; /*0x71d256*/
      }
      if ( v24 > v21 ) /*0x71d25e*/
      {
        v14 = v24 - v21 + v25; /*0x71d262*/
        v12 = v21; /*0x71d264*/
      }
      if ( v6 + v13 < v10 + v22 ) /*0x71d271*/
        v6 = v22 - v13 + v10 + 1; /*0x71d279*/
      if ( v14 + v12 < v21 + v23 ) /*0x71d28c*/
        v14 = v21 - v12 + v23 + 1; /*0x71d294*/
      v15 = v14; /*0x71d298*/
    }
    *a2 = v18 + v13 - v16 / 2; /*0x71d2d9*/
    a2[1] = v19 + v12 - v17 / 2; /*0x71d2db*/
    a2[2] = v6; /*0x71d2de*/
    a2[3] = v15; /*0x71d2e1*/
    return a2; /*0x71d2d3*/
  }
  else
  {
    *a2 = MEMORY[0xB0ECE0]; /*0x71d1a5*/
    a2[1] = MEMORY[0xB0ECE4]; /*0x71d1ad*/
    a2[2] = MEMORY[0xB0ECE8]; /*0x71d1b6*/
    a2[3] = MEMORY[0xB0ECEC]; /*0x71d1bf*/
    return a2; /*0x71d198*/
  }
}


// ==== 0x0071D2F0  TerrainClass::MissionStubReturnZero  this=TerrainClass  sig=csp ====
int TerrainClass::_vt12()
{
  return 224; /*0x71d2f5*/
}


// ==== 0x0071D300  TerrainClass::MissionStubReturnZero2  this=TerrainClass  sig=csp ====
int TerrainClass::_vt11()
{
  return 36; /*0x71d305*/
}


// ==== 0x0071D310  TerrainClass::MissionStubReturnZero3  this=TerrainClass  sig=csp ====
int __stdcall TerrainClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x71d316*/
    return -2147467261; /*0x71d318*/
  *a2 = 237448654; /*0x71d326*/
  a2[1] = 298949647; /*0x71d32e*/
  a2[2] = -1610610249; /*0x71d337*/
  a2[3] = -777003740; /*0x71d340*/
  return 0; /*0x71d31d*/
}


// ==== 0x0071D350  TerrainClass::MissionStubReturnZero4  this=TerrainClass  sig=csp ====
TerrainClass *__thiscall TerrainClass::MissionStubReturnZero4(void *Block, char a2)
{
  TerrainClass::CleanupMembers((int)Block); /*0x71d353*/
  if ( (a2 & 1) != 0 ) /*0x71d35d*/
    __3_YAXPAX_Z(Block); /*0x71d360*/
  return (TerrainClass *)Block; /*0x71d36a*/
}


// ==== 0x0071D370  sub_71D370  this=-  sig=ida-proto ====
int sub_71D370()
{
  MEMORY[0xB0ED68] = 0; /*0x71d372*/
  MEMORY[0xB0ED6C] = 0; /*0x71d377*/
  MEMORY[0xB0ED70] = 0; /*0x71d37c*/
  MEMORY[0xB0ED74] = 0; /*0x71d381*/
  return 0; /*0x71d386*/
}


// ==== 0x0071D390  sub_71D390  this=-  sig=ida-proto ====
void sub_71D390()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71d39c*/
  MEMORY[0xB0ED80] = Math::Sqrt(v0 + v0); /*0x71d3ae*/
}


// ==== 0x0071D3C0  sub_71D3C0  this=-  sig=ida-proto ====
void sub_71D3C0()
{
  MEMORY[0xB0F140] = MEMORY[0xB0ED80] / 60.0; /*0x71d3cc*/
}


// ==== 0x0071D3E0  sub_71D3E0  this=-  sig=ida-proto ====
void sub_71D3E0()
{
  MEMORY[0xB0EDB8] = 1.0 / MEMORY[0xB0F140]; /*0x71d3ec*/
}


// ==== 0x0071D400  sub_71D400  this=-  sig=ida-proto ====
void sub_71D400()
{
  MEMORY[0xB0EDB0] = 0.0174532925199433 * 45.0; /*0x71d40c*/
}


// ==== 0x0071D420  sub_71D420  this=-  sig=ida-proto ====
void sub_71D420()
{
  MEMORY[0xB0ED88] = 0.0174532925199433 * 60.0; /*0x71d42c*/
}


// ==== 0x0071D440  sub_71D440  this=-  sig=ida-proto ====
void sub_71D440()
{
  MEMORY[0xB0ED58] = 0.0174532925199433 * 90.0; /*0x71d44c*/
}


// ==== 0x0071D460  sub_71D460  this=-  sig=ida-proto ====
__int64 sub_71D460()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0ED58] - MEMORY[0xB0ED88]); /*0x71d472*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0ED80] * 0.5); /*0x71d486*/
  MEMORY[0xB0F148] = result; /*0x71d48b*/
  return result; /*0x71d490*/
}


// ==== 0x0071D4A0  sub_71D4A0  this=-  sig=ida-proto ====
void sub_71D4A0()
{
  MEMORY[0xB0ED90] = Math::ArcTan((double)MEMORY[0xB0F148] * 0.00390625); /*0x71d4b7*/
}


// ==== 0x0071D4D0  sub_71D4D0  this=-  sig=ida-proto ====
void sub_71D4D0()
{
  MEMORY[0xB0EDA8] = Math::ArcTan((double)(2 * MEMORY[0xB0F148]) / MEMORY[0xB0ED80]); /*0x71d4f2*/
}


// ==== 0x0071D500  sub_71D500  this=-  sig=ida-proto ====
__int64 sub_71D500()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F148]) + 0.5); /*0x71d51b*/
  MEMORY[0xB0F13C] = result; /*0x71d520*/
  return result; /*0x71d526*/
}


// ==== 0x0071D530  sub_71D530  this=-  sig=ida-proto ====
int sub_71D530()
{
  MEMORY[0xB0ED7C] = 0; /*0x71d532*/
  MEMORY[0xB0ED7E] = 0; /*0x71d538*/
  return 0; /*0x71d53e*/
}


// ==== 0x0071D540  sub_71D540  this=-  sig=ida-proto ====
int sub_71D540()
{
  MEMORY[0xB0ED98] = 0; /*0x71d542*/
  MEMORY[0xB0ED9C] = 0; /*0x71d547*/
  MEMORY[0xB0EDA0] = 0; /*0x71d54c*/
  return 0; /*0x71d551*/
}


// ==== 0x0071D560  sub_71D560  this=-  sig=ida-proto ====
int sub_71D560()
{
  MEMORY[0xB0F138] = 0; /*0x71d565*/
  MEMORY[0xB0F130] = 128; /*0x71d56f*/
  MEMORY[0xB0F134] = 128; /*0x71d574*/
  return 128; /*0x71d579*/
}


// ==== 0x0071D580  InitializeCellSpreadTables  this=-  sig=ida-proto ====
int InitializeCellSpreadTables()
{
  int v0; // eax
  int v1; // edx
  int v2; // ecx
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0; /*0x71d582*/
  MEMORY[0xB0EDC0] = 0; /*0x71d5a2*/
  MEMORY[0xB0EDC4] = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d5b3*/
  memset(&MEMORY[0xB0EDC8], 0, 0x20u); /*0x71d5c9*/
  Array::ForEach((int)&MEMORY[0xB0EDC8], 4, 8, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d5d0*/
  MEMORY[0xB0EDE8] = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d5ec*/
  MEMORY[0xB0EDEC] = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d607*/
  MEMORY[0xB0EDF0] = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d618*/
  memset(&MEMORY[0xB0EDF4], 0, 0x1Cu); /*0x71d62e*/
  Array::ForEach((int)&MEMORY[0xB0EDF4], 4, 7, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d635*/
  MEMORY[0xB0EE10] = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d651*/
  MEMORY[0xB0EE14] = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d66c*/
  MEMORY[0xB0EE18] = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d67d*/
  memset(&MEMORY[0xB0EE1C], 0, 0x1Cu); /*0x71d693*/
  Array::ForEach((int)&MEMORY[0xB0EE1C], 4, 7, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d69a*/
  MEMORY[0xB0EE38] = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d6b0*/
  MEMORY[0xB0EE3C] = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d6cb*/
  MEMORY[0xB0EE40] = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d6d9*/
  MEMORY[0xB0EE44] = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d6fa*/
  v0 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d705*/
  MEMORY[0xB0EE4C] = 0; /*0x71d709*/
  MEMORY[0xB0EE50] = 0; /*0x71d714*/
  MEMORY[0xB0EE54] = 0; /*0x71d71c*/
  MEMORY[0xB0EE58] = 0; /*0x71d724*/
  MEMORY[0xB0EE48] = v0; /*0x71d72f*/
  MEMORY[0xB0EE5C] = 0; /*0x71d734*/
  Array::ForEach((int)&MEMORY[0xB0EE4C], 4, 5, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d73a*/
  MEMORY[0xB0EE60] = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d756*/
  MEMORY[0xB0EE64] = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d76b*/
  MEMORY[0xB0EE68] = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d779*/
  MEMORY[0xB0EE6C] = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d794*/
  MEMORY[0xB0EE70] = *(_DWORD *)CellStruct::Set(&v4, 0, 2); /*0x71d7a9*/
  MEMORY[0xB0EE74] = *(_DWORD *)CellStruct::Set(&v4, 1, 2); /*0x71d7ba*/
  v1 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d7ce*/
  MEMORY[0xB0EE7C] = 0; /*0x71d7d2*/
  MEMORY[0xB0EE78] = v1; /*0x71d7d7*/
  MEMORY[0xB0EE80] = 0; /*0x71d7dd*/
  MEMORY[0xB0EE84] = 0; /*0x71d7e7*/
  Array::ForEach((int)&MEMORY[0xB0EE7C], 4, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d7f5*/
  MEMORY[0xB0EE88] = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d80b*/
  MEMORY[0xB0EE8C] = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d826*/
  MEMORY[0xB0EE90] = *(_DWORD *)CellStruct::Set(&v4, 2, 0); /*0x71d83b*/
  MEMORY[0xB0EE94] = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d849*/
  MEMORY[0xB0EE98] = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d864*/
  MEMORY[0xB0EE9C] = *(_DWORD *)CellStruct::Set(&v4, 2, 1); /*0x71d87f*/
  v2 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d889*/
  MEMORY[0xB0EEA4] = 0; /*0x71d88d*/
  MEMORY[0xB0EEA8] = 0; /*0x71d89a*/
  MEMORY[0xB0EEA0] = v2; /*0x71d8a7*/
  MEMORY[0xB0EEAC] = 0; /*0x71d8ad*/
  Array::ForEach((int)&MEMORY[0xB0EEA4], 4, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d8b3*/
  MEMORY[0xB0EEB0] = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d8cf*/
  MEMORY[0xB0EEB4] = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d8dd*/
  MEMORY[0xB0EEB8] = *(_DWORD *)CellStruct::Set(&v4, 2, 0); /*0x71d8f8*/
  MEMORY[0xB0EEBC] = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d907*/
  MEMORY[0xB0EEC0] = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d91b*/
  MEMORY[0xB0EEC4] = *(_DWORD *)CellStruct::Set(&v4, 2, 1); /*0x71d936*/
  MEMORY[0xB0EEC8] = *(_DWORD *)CellStruct::Set(&v4, 0, 2); /*0x71d94b*/
  MEMORY[0xB0EECC] = *(_DWORD *)CellStruct::Set(&v4, 1, 2); /*0x71d959*/
  MEMORY[0xB0EED0] = *(_DWORD *)CellStruct::Set(&v4, 2, 2); /*0x71d97a*/
  MEMORY[0xB0EED4] = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d98f*/
  MEMORY[0xB0EED8] = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d99d*/
  MEMORY[0xB0EEDC] = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d9b8*/
  MEMORY[0xB0EEE0] = *(_DWORD *)CellStruct::Set(&v4, 2, 0); /*0x71d9cd*/
  MEMORY[0xB0EEE4] = *(_DWORD *)CellStruct::Set(&v4, 3, 0); /*0x71d9db*/
  MEMORY[0xB0EEE8] = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d9f6*/
  MEMORY[0xB0EEEC] = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71da0b*/
  MEMORY[0xB0EEF0] = *(_DWORD *)CellStruct::Set(&v4, 2, 1); /*0x71da19*/
  MEMORY[0xB0EEF4] = *(_DWORD *)CellStruct::Set(&v4, 3, 1); /*0x71da3a*/
  MEMORY[0xB0EEF8] = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71da4c*/
  MEMORY[0xB0EEFC] = 0; /*0x71da62*/
  memset(&MEMORY[0xB0EF00], 0, 0x230u); /*0x71da73*/
  return Array::ForEach((int)&MEMORY[0xB0EEFC], 4, 141, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71da7a*/
}


// ==== 0x0071DA80  TerrainTypeClass::TerrainTypeClass  this=TerrainTypeClass  sig=csp ====
_DWORD *__thiscall TerrainTypeClass::TerrainTypeClass(_DWORD *this, ObjectClass *aP1)
{
  TerrainTypeClass *v3; // eax
  bool v4; // zf
  int v5; // ecx
  CCINIClass *v6; // edx

  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x71da89*/
  this->ArrayIndex = -1; /*0x71da90*/
  this->Foundation = 0; /*0x71da9a*/
  this->RadarColor = 0; /*0x71daa5*/
  this->q29D = 0; /*0x71daab*/
  this->q29E = 0; /*0x71dab1*/
  this->TemperateOccupationBits = 7; /*0x71dab7*/
  this->SnowOccupationBits = 7; /*0x71dabd*/
  this->AnimationRate = 0; /*0x71dac7*/
  this->AnimationProbability = 0; /*0x71dacd*/
  this->WaterBound = 0; /*0x71dad3*/
  this->q2B1 = 0; /*0x71dad9*/
  this->q2B2 = 0; /*0x71dadf*/
  this->q2B3 = 0; /*0x71dae5*/
  this->IsVeinhole = 0; /*0x71daeb*/
  this->q2B8 = 0; /*0x71daf1*/
  *this = &TerrainTypeClass::`vftable'; /*0x71daf7*/
  this->vtable2 = &TerrainTypeClass::`vftable'; /*0x71dafd*/
  this->vtable3 = &TerrainTypeClass::`vftable'; /*0x71db03*/
  this->vtable4 = &vt_TerrainTypeClass; /*0x71db0a*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x71db11*/
  this->Selectable = 0; /*0x71db18*/
  this->q234 = 1; /*0x71db1e*/
  this->q22F = 1; /*0x71db24*/
  this->LegalTarget = 0; /*0x71db2a*/
  this->Insignificant = 1; /*0x71db30*/
  v3 = *(TerrainTypeClass **)&HouseClass_Player.__pad_5568[20596]; /*0x71db36*/
  if ( *(int *)&HouseClass_Player.__pad_5568[20596] < *(int *)&HouseClass_Player.__pad_5568[20588] /*0x71db74*/
    || (HouseClass_Player.__pad_5568[20593] || !*(_DWORD *)&HouseClass_Player.__pad_5568[20588])
    && *(int *)&HouseClass_Player.__pad_5568[20600] > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[20580] + 8))(
               &HouseClass_Player.__pad_5568[20580],
               *(_DWORD *)&HouseClass_Player.__pad_5568[20588] + *(_DWORD *)&HouseClass_Player.__pad_5568[20600],
               0) == 0,
        v3 = *(TerrainTypeClass **)&HouseClass_Player.__pad_5568[20596],
        !v4) )
  {
    *(_DWORD *)&HouseClass_Player.__pad_5568[20596] = &v3->__pad_0[1]; /*0x71db79*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20584] + 4 * (_DWORD)v3) = this; /*0x71db83*/
    v3 = *(TerrainTypeClass **)&HouseClass_Player.__pad_5568[20596]; /*0x71db86*/
  }
  v5 = 0; /*0x71db8b*/
  if ( (int)v3 <= 0 ) /*0x71db8f*/
  {
LABEL_11:
    v5 = -1; /*0x71dba3*/
  }
  else
  {
    v6 = *(CCINIClass **)&HouseClass_Player.__pad_5568[20584]; /*0x71db91*/
    while ( *(_DWORD **)v6->__pad_0 != this ) /*0x71db99*/
    {
      ++v5; /*0x71db9b*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x71db9c*/
      if ( v5 >= (int)v3 ) /*0x71dba1*/
        goto LABEL_11; /*0x71dba1*/
    }
  }
  this->ArrayIndex = v5; /*0x71dba6*/
  this->Strength = -1; /*0x71dbac*/
  this->Armor = 6; /*0x71dbb6*/
  return this; /*0x71dbc2*/
}


// ==== 0x0071DCA0  LoadObjectTypeClassTheaterSHP  this=-  sig=ida-proto ====
int __fastcall ObjectTypeClass_LoadTheaterSHP(int a1)
{
  int result; // eax
  int i; // edi
  int v4; // esi
  _DWORD v5[22]; // [esp+Ch] [ebp-26Ch] BYREF
  _BYTE v6[12]; // [esp+64h] [ebp-214h] BYREF
  int v7; // [esp+70h] [ebp-208h]
  char Buffer[512]; // [esp+78h] [ebp-200h] BYREF

  result = MEMORY[0xA8E328]; /*0x71dca0*/
  for ( i = 0; i < MEMORY[0xA8E328]; ++i ) /*0x71dcb6*/
  {
    v4 = *((_DWORD *)MEMORY[0xA8E31C] + i); /*0x71dcc2*/
    if ( *(_BYTE *)(v4 + 556) ) /*0x71dcc5*/
    {
      _makepath(Buffer, 0, 0, (const char *)(v4 + 36), (const char *)&off_7E1BC6 + 112 * a1); /*0x71dcef*/
      if ( *(_BYTE *)(v4 + 168) ) /*0x71dcf4*/
      {
        if ( *(_DWORD *)(v4 + 164) ) /*0x71dd01*/
          __3_YAXPAX_Z(*(void **)(v4 + 164)); /*0x71dd0c*/
      }
      *(_DWORD *)(v4 + 164) = 0; /*0x71dd18*/
      *(_BYTE *)(v4 + 168) = 0; /*0x71dd23*/
      CCFileClass::Construct(v5, Buffer); /*0x71dd29*/
      *(_DWORD *)(v4 + 164) = CCFileClass::ReadEntireFile(v5); /*0x71dd3b*/
      v5[0] = &vt_CCFileClass; /*0x71dd41*/
      v7 = 0; /*0x71dd49*/
      Vector::Clear((int)v6); /*0x71dd4d*/
      v5[0] = &off_7E1668; /*0x71dd56*/
      BufferIOFileClass::Dtor(v5); /*0x71dd5e*/
    }
    result = MEMORY[0xA8E328]; /*0x71dd63*/
  }
  return result; /*0x71dd72*/
}


// ==== 0x0071DD80  Terrain::LookupByName  this=Terrain  sig=csp ====
int __thiscall Terrain::LookupByName(void *this)
{
  int v2; // esi

  if ( !this ) /*0x71dd86*/
    return -1; /*0x71dd86*/
  v2 = 0; /*0x71dd8d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[20596] <= 0 ) /*0x71dd91*/
    return -1; /*0x71ddb6*/
  while ( _strcmpi(this, (const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20584] + 4 * v2) + 36)) ) /*0x71ddaa*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[20596] ) /*0x71ddb4*/
      return -1; /*0x71ddb4*/
  }
  return v2; /*0x71ddb6*/
}


// ==== 0x0071DDD0  TerrainTypeClass::GetHeight  this=TerrainTypeClass  sig=csp ====
bool __thiscall TerrainTypeClass::GetHeight(TerrainTypeClass *this, TerrainClass *aP2, int a3)
{
  void **v4; // eax

  v4 = (void **)__2_YAPAXI_Z(0xE0u); /*0x71ddd8*/
  return v4 && TerrainClass::Construct(v4, this, aP2); /*0x71ddf7*/
}


// ==== 0x0071DE10  TerrainTypeClass::GetTileIndex  this=TerrainTypeClass  sig=csp ====
TerrainClass *__thiscall TerrainTypeClass::GetTileIndex(TerrainTypeClass *this, int a2)
{
  void **v3; // eax

  v3 = (void **)__2_YAPAXI_Z(0xE0u); /*0x71de18*/
  if ( v3 ) /*0x71de22*/
    return TerrainClass::Construct(v3, this, (TerrainClass *)&stru_B05488.__pad_579C[16728]); /*0x71de2c*/
  else
    return 0; /*0x71de35*/
}


// ==== 0x0071DE40  TerrainTypeClass::SingletonGetter  this=TerrainTypeClass  sig=csp ====
int *__thiscall GlobalInit_SingletonGetter(int **this, int a2)
{
  int *result; // eax

  result = this->q2B8; /*0x71de41*/
  if ( !result ) /*0x71de49*/
  {
    if ( (MEMORY[0xB0ED60] & 1) == 0 ) /*0x71de55*/
    {
      MEMORY[0xB0ED60] |= 1u; /*0x71de73*/
      MEMORY[0xB0ED78] = 2147450879; /*0x71de79*/
      atexit(nullsub_247); /*0x71de7e*/
    }
    return &MEMORY[0xB0ED78]; /*0x71de86*/
  }
  return result; /*0x71de8c*/
}


// ==== 0x0071DE90  nullsub_247  this=-  sig=ida-proto ====
void __cdecl nullsub_247()
{
  ; /*0x71de90*/
}


// ==== 0x0071DEA0  TerrainTypeClass::LoadFromINI  this=TerrainTypeClass  sig=csp ====
char __thiscall TerrainTypeClass::LoadFromINI(int this, unsigned __int8 ***aP1)
{
  char Bool_Overwrite; // al
  char v4; // al
  char v5; // cl
  char v6; // al
  Color *v7; // eax
  int v8; // ecx
  char **v9; // eax
  int PixelData; // eax
  int Coord; // eax
  char v12; // cl
  char v13; // al
  int Int_Overwrite; // eax
  double aP3; // st7
  double Double_Overwrite; // st7
  CCINIClass *v16; // eax
  int v18; // eax
  INIClass *v19; // ecx
  char aP3_4; // [esp+4h] [ebp-218h]
  INIClass *aP3_4a; // [esp+4h] [ebp-218h]
  CCINIClass v23; // [esp+18h] [ebp-204h] BYREF

  INIClass::ResetSection(aP1); /*0x71deb3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x71debb*/
    return 0; /*0x71e0b5*/
  if ( *(_DWORD *)(this + 160) == -1 ) /*0x71decf*/
    *(_DWORD *)(this + 160) = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4420); /*0x71dedc*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x71def6*/
                     (int)aP1,
                     (unsigned __int8 *)(this + 36),
                     (CCINIClass *)&stru_830620.__pad_579C[59592],
                     *(_BYTE *)(this + 692));
  *(_BYTE *)(this + 692) = Bool_Overwrite; /*0x71defd*/
  if ( Bool_Overwrite ) /*0x71df03*/
  {
    *(_BYTE *)(this + 564) = 0; /*0x71df05*/
    *(_BYTE *)(this + 561) = 1; /*0x71df0c*/
  }
  v4 = INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &stru_81AE4C, *(_BYTE *)(this + 688)); /*0x71df22*/
  v5 = *(_BYTE *)(this + 689); /*0x71df27*/
  *(_BYTE *)(this + 688) = v4; /*0x71df2d*/
  v6 = INIClass::ReadBool_Overwrite( /*0x71df3c*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620.__pad_579C[59576],
         v5);
  aP3_4 = *(_BYTE *)(this + 690); /*0x71df49*/
  *(_BYTE *)(this + 689) = v6; /*0x71df50*/
  *(_BYTE *)(this + 690) = INIClass::ReadBool_Overwrite( /*0x71df5b*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[59564],
                             aP3_4);
  v7 = (Color *)INIClass::LookupEnum( /*0x71df79*/
                  (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
                  (unsigned __int8 *)(this + 504),
                  (unsigned __int8 *)g_INI_Key_Foundation,
                  *(_DWORD *)(this + 664));
  v8 = 5 * (_DWORD)v7; /*0x71df7e*/
  *(_DWORD *)(this + 664) = v7; /*0x71df81*/
  LOBYTE(v7) = *(_BYTE *)(this + 556); /*0x71df87*/
  *(_DWORD *)(this + 696) = 8 * v8 + 11595200; /*0x71df96*/
  if ( !(_BYTE)v7 ) /*0x71df9c*/
  {
    _makepath((char *)v23.headNode, 0, 0, (const char *)(this + 504), Ext); /*0x71dfad*/
    *(_DWORD *)(this + 164) = SearchMIXFile((char *)v23.headNode, 0); /*0x71dfc0*/
  }
  v9 = (char **)(*(int (__thiscall **)(int))(this->Armor)(this); /*0x71dfca*/
  if ( v9 ) /*0x71dfd2*/
  {
    PixelData = MixFileClass::GetPixelData(v9, (int)&v23, 0); /*0x71dfdd*/
    *(_WORD *)(this + 668) = *(_WORD *)PixelData; /*0x71dfeb*/
    *(_BYTE *)(this + 670) = *(_BYTE *)(PixelData + 2); /*0x71dff5*/
  }
  Coord = INIClass::GetCoord( /*0x71e00c*/
            aP1,
            &v23,
            (INIClass *)(this + 36),
            (Color *)&stru_830620.__pad_14B0[6744],
            (Color *)(this + 668));
  v12 = *(_BYTE *)(this + 691); /*0x71e014*/
  *(_WORD *)(this + 668) = *(_WORD *)Coord; /*0x71e01a*/
  *(_BYTE *)(this + 670) = *(_BYTE *)(Coord + 2); /*0x71e02a*/
  v13 = INIClass::ReadBool_Overwrite( /*0x71e02d*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[59552],
          v12);
  aP3_4a = *(INIClass **)(this + 672); /*0x71e03a*/
  *(_BYTE *)(this + 691) = v13; /*0x71e041*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x71e047*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[59536],
                    aP3_4a);
  aP3 = *(float *)(this + 676); /*0x71e04c*/
  *(_DWORD *)(this + 672) = Int_Overwrite; /*0x71e057*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x71e066*/
                       (int)aP1,
                       (INIClass *)(this + 36),
                       (unsigned __int8 *)&stru_830620.__pad_579C[59512],
                       (INIClass *)LODWORD(aP3));
  v16 = *(CCINIClass **)(this + 680); /*0x71e06b*/
  *(float *)(this + 676) = Double_Overwrite; /*0x71e073*/
  v18 = INIClass::ReadInt_Overwrite( /*0x71e080*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[59488],
          (INIClass *)v16);
  v19 = *(INIClass **)(this + 684); /*0x71e085*/
  *(_DWORD *)(this + 680) = v18; /*0x71e08b*/
  *(_DWORD *)(this + 684) = INIClass::ReadInt_Overwrite( /*0x71e0a0*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[59468],
                              v19);
  return 1; /*0x71e0a7*/
}


// ==== 0x0071E0D0  TerrainTypeClass::GetWidth  this=TerrainTypeClass  sig=csp ====
_DWORD *__stdcall TerrainTypeClass::_vt27(_DWORD *a1, int *a2)
{
  int GroundHeight; // eax
  int v3; // ecx
  int v5; // [esp+0h] [ebp-Ch] BYREF
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = *a2; /*0x71e0d9*/
  v6 = a2[1]; /*0x71e0ea*/
  v7 = a2[2]; /*0x71e0f1*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x71e0f5*/
  v3 = v7; /*0x71e0fa*/
  if ( v7 < GroundHeight ) /*0x71e100*/
    v3 = Cell::GetGroundHeight(&v5); /*0x71e111*/
  *a1 = v5; /*0x71e11e*/
  a1[1] = v6; /*0x71e124*/
  a1[2] = v3; /*0x71e128*/
  return a1; /*0x71e12b*/
}


// ==== 0x0071E140  TerrainTypeClass::PowerDrainUpdate  this=TerrainTypeClass  sig=csp ====
int __thiscall TerrainTypeClass::_vt13(int this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // edx

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x71e149*/
  Power::TimerProcess(*(_DWORD *)(this + 660)); /*0x71e157*/
  LOBYTE(v3) = *(_BYTE *)(this + 688); /*0x71e15c*/
  Power::FlagProcess(a2, v3); /*0x71e165*/
  LOBYTE(v4) = *(_BYTE *)(this + 689); /*0x71e16a*/
  v5 = Power::FlagProcess(a2, v4); /*0x71e173*/
  LOBYTE(v5) = *(_BYTE *)(this + 690); /*0x71e178*/
  Power::FlagProcess(a2, v5); /*0x71e181*/
  Power::TimerProcess(*(_DWORD *)(this + 664)); /*0x71e18f*/
  LOBYTE(v6) = *(_BYTE *)(this + 691); /*0x71e194*/
  Power::FlagProcess(a2, v6); /*0x71e19d*/
  Power::TimerProcess(*(_DWORD *)(this + 672)); /*0x71e1ab*/
  return Checksummer::Add_float((unsigned int *)a2, *(_DWORD *)(this + 676)); /*0x71e1be*/
}


// ==== 0x0071E1D0  TerrainTypeClass::SaveLoad_Prefix  this=TerrainTypeClass  sig=csp ====
int __stdcall TerrainTypeClass::SaveLoad_Prefix(ObjectTypeClass *aP0, int aP1)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1); /*0x71e1db*/
  if ( result >= 0 ) /*0x71e1e2*/
  {
    if ( aP0 ) /*0x71e1e6*/
    {
      ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1); /*0x71e1ef*/
      *(_DWORD *)aP0->__pad_0 = &TerrainTypeClass::`vftable'; /*0x71e1f4*/
      *(_DWORD *)&aP0->__pad_0[4] = &TerrainTypeClass::`vftable'; /*0x71e1fa*/
      *(_DWORD *)&aP0->__pad_0[8] = &TerrainTypeClass::`vftable'; /*0x71e201*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_TerrainTypeClass; /*0x71e208*/
    }
    VoxelAnimType::LoadAnim(aP0->__pad_0); /*0x71e211*/
    ObjectTypeClass::Load2DArt(aP0->__pad_0); /*0x71e218*/
    *(_DWORD *)aP0[1].__pad_24 = 40 * *(_DWORD *)&aP0[1].__pad_0[4] + 11595200; /*0x71e22d*/
    return 0; /*0x71e233*/
  }
  return result; /*0x71e235*/
}


// ==== 0x0071E240  TerrainTypeClass::SaveLoad_Prefix_0  this=TerrainTypeClass  sig=csp ====
int __stdcall TerrainTypeClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, ObjectTypeClass *aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2); /*0x71e24f*/
  if ( result >= 0 ) /*0x71e256*/
    return 0; /*0x71e258*/
  return result; /*0x71e25a*/
}


// ==== 0x0071E260  TerrainTypeClass::GetClassIdentifier  this=TerrainTypeClass  sig=csp ====
int __stdcall TerrainTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x71e266*/
    return -2147467261; /*0x71e268*/
  *a2 = 1525862011; /*0x71e276*/
  a2[1] = 298976820; /*0x71e27e*/
  a2[2] = 1610654892; /*0x71e287*/
  a2[3] = -1252326136; /*0x71e290*/
  return 0; /*0x71e26d*/
}


// ==== 0x0071E2A0  TerrainTypeClass::FindOrCreate  this=IUnknown  sig=csp ====
TerrainTypeClass *__thiscall TerrainTypeClass::FindOrCreate(ObjectClass *Source)
{
  int v2; // esi
  _DWORD *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x71e2bc*/
    return 0; /*0x71e31f*/
  v2 = 0; /*0x71e2cd*/
  if ( *(int *)&HouseClass_Player.__pad_5568[20596] <= 0 ) /*0x71e2d1*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0x2BCu); /*0x71e2f6*/
    if ( v3 ) /*0x71e305*/
      return (TerrainTypeClass *)TerrainTypeClass::TerrainTypeClass(v3, Source); /*0x71e311*/
    return 0; /*0x71e305*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20584] + 4 * v2) + 36), Source) ) /*0x71e2ea*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[20596] ) /*0x71e2f4*/
      goto LABEL_6; /*0x71e2f4*/
  }
  return *(TerrainTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[20584] + 4 * v2); /*0x71e30f*/
}


// ==== 0x0071E330  TerrainTypeClass::GetTypeIdentifier  this=TerrainTypeClass  sig=csp ====
int TerrainTypeClass::_vt11()
{
  return 37; /*0x71e335*/
}


// ==== 0x0071E340  TerrainTypeClass::GetObjectSize  this=TerrainTypeClass  sig=csp ====
int TerrainTypeClass::_vt12()
{
  return 700; /*0x71e345*/
}


// ==== 0x0071E350  TerrainTypeClass::GetAuxField  this=TerrainTypeClass  sig=csp ====
int __thiscall TerrainTypeClass::_vt16(_DWORD *this)
{
  return this->ArrayIndex; /*0x71e356*/
}


// ==== 0x0071E360  TerrainTypeClass::ddtor  this=TerrainTypeClass  sig=csp ====
TerrainTypeClass *__fastcall TerrainTypeClass::ddtor(void **this, AbstractClass *a2, char a3)
{
  CCINIClass *v3; // eax
  int v5; // eax
  void **v7; // [esp+4h] [ebp-4h] BYREF

  v3 = (CCINIClass *)this->Image; /*0x71e364*/
  *this = &TerrainTypeClass::`vftable'; /*0x71e36a*/
  this->vtable2 = &TerrainTypeClass::`vftable'; /*0x71e372*/
  this->vtable3 = &TerrainTypeClass::`vftable'; /*0x71e379*/
  this->vtable4 = &vt_TerrainTypeClass; /*0x71e380*/
  if ( v3 ) /*0x71e387*/
  {
    OperatorDelete(v3); /*0x71e38a*/
    this->Image = 0; /*0x71e392*/
  }
  LOBYTE(a2) = 1; /*0x71e39c*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, a2); /*0x71e3a0*/
  v7 = this; /*0x71e3b5*/
  v5 = (*(int (__thiscall **)(char *, void ***))(*(_DWORD *)&HouseClass_Player.__pad_5568[20580] + 16))( /*0x71e3b9*/
         &HouseClass_Player.__pad_5568[20580],
         &v7);
  if ( v5 != -1 && v5 < *(int *)&HouseClass_Player.__pad_5568[20596] ) /*0x71e3c9*/
  {
    --*(_DWORD *)&HouseClass_Player.__pad_5568[20596]; /*0x71e3ce*/
    for ( ; /*0x71e3d4*/
          v5 < *(int *)&HouseClass_Player.__pad_5568[20596];
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20584] + 4 * v5 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20584]
                                                                                                + 4 * v5) )
    {
      ++v5; /*0x71e3dc*/
    }
  }
  ObjectTypeClass::Destruct((int)this); /*0x71e3f0*/
  if ( (a3 & 1) != 0 ) /*0x71e3fa*/
    OperatorDelete(this); /*0x71e3fd*/
  return (TerrainTypeClass *)this; /*0x71e407*/
}


// ==== 0x0071E410  sub_71E410  this=-  sig=ida-proto ====
void sub_71E410()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71e41c*/
  MEMORY[0xB0F170] = Math::Sqrt(v0 + v0); /*0x71e42e*/
}


// ==== 0x0071E440  sub_71E440  this=-  sig=ida-proto ====
void sub_71E440()
{
  MEMORY[0xB0F1D8] = MEMORY[0xB0F170] / 60.0; /*0x71e44c*/
}


// ==== 0x0071E460  sub_71E460  this=-  sig=ida-proto ====
void sub_71E460()
{
  MEMORY[0xB0F1C0] = 1.0 / MEMORY[0xB0F1D8]; /*0x71e46c*/
}


// ==== 0x0071E480  sub_71E480  this=-  sig=ida-proto ====
void sub_71E480()
{
  MEMORY[0xB0F1B8] = 0.0174532925199433 * 45.0; /*0x71e48c*/
}


// ==== 0x0071E4A0  sub_71E4A0  this=-  sig=ida-proto ====
void sub_71E4A0()
{
  MEMORY[0xB0F178] = 0.0174532925199433 * 60.0; /*0x71e4ac*/
}


// ==== 0x0071E4C0  sub_71E4C0  this=-  sig=ida-proto ====
void sub_71E4C0()
{
  MEMORY[0xB0F150] = 0.0174532925199433 * 90.0; /*0x71e4cc*/
}


// ==== 0x0071E4E0  sub_71E4E0  this=-  sig=ida-proto ====
__int64 sub_71E4E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0F150] - MEMORY[0xB0F178]); /*0x71e4f2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0F170] * 0.5); /*0x71e506*/
  MEMORY[0xB0F1E0] = result; /*0x71e50b*/
  return result; /*0x71e510*/
}


// ==== 0x0071E520  sub_71E520  this=-  sig=ida-proto ====
void sub_71E520()
{
  MEMORY[0xB0F180] = Math::ArcTan((double)MEMORY[0xB0F1E0] * 0.00390625); /*0x71e537*/
}


// ==== 0x0071E550  sub_71E550  this=-  sig=ida-proto ====
void sub_71E550()
{
  MEMORY[0xB0F198] = Math::ArcTan((double)(2 * MEMORY[0xB0F1E0]) / MEMORY[0xB0F170]); /*0x71e572*/
}


// ==== 0x0071E580  sub_71E580  this=-  sig=ida-proto ====
__int64 sub_71E580()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0F1E0]) + 0.5); /*0x71e59b*/
  MEMORY[0xB0F1D4] = result; /*0x71e5a0*/
  return result; /*0x71e5a6*/
}


// ==== 0x0071E5B0  sub_71E5B0  this=-  sig=ida-proto ====
int sub_71E5B0()
{
  MEMORY[0xB0F168] = 0; /*0x71e5b2*/
  MEMORY[0xB0F16A] = 0; /*0x71e5b8*/
  return 0; /*0x71e5be*/
}


// ==== 0x0071E5C0  sub_71E5C0  this=-  sig=ida-proto ====
int sub_71E5C0()
{
  MEMORY[0xB0F188] = 0; /*0x71e5c2*/
  MEMORY[0xB0F18C] = 0; /*0x71e5c7*/
  MEMORY[0xB0F190] = 0; /*0x71e5cc*/
  return 0; /*0x71e5d1*/
}


// ==== 0x0071E5E0  sub_71E5E0  this=-  sig=ida-proto ====
int sub_71E5E0()
{
  MEMORY[0xB0F1D0] = 0; /*0x71e5e5*/
  MEMORY[0xB0F1C8] = 128; /*0x71e5ef*/
  MEMORY[0xB0F1CC] = 128; /*0x71e5f4*/
  return 128; /*0x71e5f9*/
}


// ==== 0x0071E600  sub_71E600  this=-  sig=ida-proto ====
int sub_71E600()
{
  MEMORY[0xB0F158] = 0; /*0x71e602*/
  MEMORY[0xB0F15C] = 0; /*0x71e607*/
  MEMORY[0xB0F160] = 0; /*0x71e60c*/
  MEMORY[0xB0F164] = 0; /*0x71e611*/
  return 0; /*0x71e616*/
}


// ==== 0x0071E620  sub_71E620  this=-  sig=ida-proto ====
int sub_71E620()
{
  MEMORY[0xB0F1A4] = 0; /*0x71e627*/
  MEMORY[0xB0F1A8] = 0; /*0x71e62c*/
  MEMORY[0xB0F1AC] = 1; /*0x71e631*/
  MEMORY[0xB0F1AD] = 0; /*0x71e638*/
  MEMORY[0xB0F1A0] = (int)&vt_DynamicVectorClass_TEventClass; /*0x71e63d*/
  MEMORY[0xB0F1B4] = 10; /*0x71e647*/
  MEMORY[0xB0F1B0] = 0; /*0x71e651*/
  return atexit(sub_71E660); /*0x71e65c*/
}


// ==== 0x0071E660  sub_71E660  this=-  sig=ida-proto ====
void __cdecl sub_71E660()
{
  MEMORY[0xB0F1A0] = (int)&vt_VectorClass_TEventClass; /*0x71e668*/
  if ( MEMORY[0xB0F1A4] && MEMORY[0xB0F1AD] ) /*0x71e67c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0F1A4]); /*0x71e67f*/
    MEMORY[0xB0F1A4] = 0; /*0x71e687*/
  }
  MEMORY[0xB0F1AD] = 0; /*0x71e68d*/
  MEMORY[0xB0F1A8] = 0; /*0x71e693*/
}


// ==== 0x0071E6A0  TActionClass::TActionClass  this=TEventClass  sig=csp ====
int __thiscall TActionClass::TActionClass(int this)
{
  int v2; // ecx
  char v3; // al
  int v4; // eax
  _DWORD *v5; // edx
  int v6; // eax
  int v7; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x71e6a4*/
  *(_DWORD *)(this + 36) = -1; /*0x71e6ab*/
  *(_DWORD *)(this + 40) = 0; /*0x71e6b2*/
  *(_DWORD *)(this + 44) = 0; /*0x71e6b5*/
  *(_DWORD *)(this + 48) = 0; /*0x71e6b8*/
  *(_BYTE *)(this + 56) = 0; /*0x71e6bb*/
  *(_DWORD *)(this + 84) = 0; /*0x71e6be*/
  *(_DWORD *)this = &TEventClass::`vftable'; /*0x71e6c1*/
  *(_DWORD *)(this + 4) = &TEventClass::`vftable'; /*0x71e6c7*/
  *(_DWORD *)(this + 8) = &TEventClass::`vftable'; /*0x71e6ce*/
  *(_DWORD *)(this + 12) = &vt_TEventClass; /*0x71e6d5*/
  v2 = MEMORY[0xB0F1B0]; /*0x71e6dc*/
  if ( MEMORY[0xB0F1B0] < MEMORY[0xB0F1A8] /*0x71e71a*/
    || (MEMORY[0xB0F1AD] || !MEMORY[0xB0F1A8])
    && MEMORY[0xB0F1B4] > 0
    && (v3 = (*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F1A0] + 8))(
               &MEMORY[0xB0F1A0],
               MEMORY[0xB0F1A8] + MEMORY[0xB0F1B4],
               0),
        v2 = MEMORY[0xB0F1B0],
        v3) )
  {
    MEMORY[0xB0F1B0] = v2 + 1; /*0x71e71f*/
    *((_DWORD *)MEMORY[0xB0F1A4] + v2) = this; /*0x71e72b*/
    v2 = MEMORY[0xB0F1B0]; /*0x71e72e*/
  }
  v4 = 0; /*0x71e734*/
  if ( v2 <= 0 ) /*0x71e738*/
  {
LABEL_11:
    v4 = -1; /*0x71e74c*/
  }
  else
  {
    v5 = MEMORY[0xB0F1A4]; /*0x71e73a*/
    while ( *v5 != this ) /*0x71e742*/
    {
      ++v4; /*0x71e744*/
      ++v5; /*0x71e745*/
      if ( v4 >= v2 ) /*0x71e74a*/
        goto LABEL_11; /*0x71e74a*/
    }
  }
  *(_DWORD *)(this + 36) = v4; /*0x71e74f*/
  if ( MEMORY[0xB0F668] < MEMORY[0xB0F660] /*0x71e786*/
    || (MEMORY[0xB0F665] || !MEMORY[0xB0F660])
    && MEMORY[0xB0F66C] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F658] + 8))(
         &MEMORY[0xB0F658],
         MEMORY[0xB0F660] + MEMORY[0xB0F66C],
         0) )
  {
    v6 = MEMORY[0xB0F668]++; /*0x71e793*/
    *((_DWORD *)MEMORY[0xB0F65C] + v6) = this; /*0x71e7a2*/
  }
  if ( MEMORY[0xB0F680] < MEMORY[0xB0F678] /*0x71e7d9*/
    || (MEMORY[0xB0F67D] || !MEMORY[0xB0F678])
    && MEMORY[0xB0F684] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F670] + 8))(
         &MEMORY[0xB0F670],
         MEMORY[0xB0F678] + MEMORY[0xB0F684],
         0) )
  {
    v7 = MEMORY[0xB0F680]++; /*0x71e7e6*/
    *((_DWORD *)MEMORY[0xB0F674] + v7) = this; /*0x71e7f5*/
  }
  *(_DWORD *)(this + 52) = 0; /*0x71e7f8*/
  return this; /*0x71e7fd*/
}


// ==== 0x0071E940  TEventClass::Execute  this=TEventClass  sig=csp ====
char __thiscall TEventClass::Execute(_DWORD *this, int a2, int a3, int a4, int *a5, int a6, int a7)
{
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  const char *v11; // edx
  char *v12; // ebp
  int v13; // edi
  int v14; // ebx
  int v15; // ebp
  int v16; // esi
  int v18; // eax
  int v19; // edi
  const char *v20; // edx
  char *v21; // ebp
  int v22; // edi
  int v23; // esi
  int v24; // edx
  int v25; // eax
  int v26; // edx
  int v27; // eax
  void *v28; // ecx
  int v29; // esi
  int v30; // esi
  int *WorldCoords; // eax
  int v32; // esi
  int v33; // edi
  int v34; // ebx
  int *v35; // eax
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  double v39; // st7
  int v40; // esi
  int v41; // edx
  char *v42; // ecx
  int v43; // eax
  int v44; // esi
  int v45; // edx
  int *v46; // eax
  int v47; // ecx
  int v48; // eax
  int Owner; // esi
  int v50; // eax
  void *v51; // ecx
  void *v52; // edi
  int v53; // ebx
  _DWORD v55[3]; // [esp+20h] [ebp-18h] BYREF
  _BYTE v56[12]; // [esp+2Ch] [ebp-Ch] BYREF

  v8 = this->TEventClass_field_2C; /*0x71e94d*/
  switch ( v8 ) /*0x71e964*/
  {
    case 13: /*0x71e964*/
    case 51: /*0x71e964*/
      v26 = *a5; /*0x71ec37*/
      v27 = a5[2]; /*0x71ec39*/
      if ( *a5 == -1 ) /*0x71ec3f*/
        goto LABEL_44; /*0x71ec3f*/
      if ( (int)MEMORY[0xA8ED84] - v26 < v27 ) /*0x71ec4b*/
      {
        v27 -= (int)MEMORY[0xA8ED84] - v26; /*0x71ec4d*/
LABEL_44:
        if ( v27 ) /*0x71ec51*/
          return 0; /*0x71ec51*/
      }
      return 1; /*0x71ec60*/
    case 14: /*0x71e964*/
      if ( *((_DWORD *)MEMORY[0xA8B230] + 1146) == -1 ) /*0x71ebf6*/
        return 0; /*0x71ebf6*/
      v24 = *((_DWORD *)MEMORY[0xA8B230] + 1146); /*0x71ebfc*/
      v25 = *((_DWORD *)MEMORY[0xA8B230] + 1148); /*0x71ec02*/
      if ( v24 == -1 ) /*0x71ec0b*/
        return !v25; /*0x71ec0b*/
      if ( (int)MEMORY[0xA8ED84] - v24 >= v25 ) /*0x71ec17*/
        return 1; /*0x71ec17*/
      v25 -= (int)MEMORY[0xA8ED84] - v24; /*0x71ec1d*/
      return !v25; /*0x71ec21*/
    case 27: /*0x71e964*/
      ScenarioClass::GetGlobalStateByID(MEMORY[0xA8B230], this->TEventClass_field_34, &a6); /*0x71eb62*/
      return a6; /*0x71eb72*/
    case 28: /*0x71e964*/
      ScenarioClass::GetGlobalStateByID(MEMORY[0xA8B230], this->TEventClass_field_34, &a6); /*0x71eb84*/
      return (_BYTE)a6 == 0; /*0x71eb9b*/
    case 36: /*0x71e964*/
      ScenarioClass::GetLocalStateByID(MEMORY[0xA8B230], this->TEventClass_field_34, &a6); /*0x71ebad*/
      return a6; /*0x71ebbd*/
    case 37: /*0x71e964*/
      ScenarioClass::GetLocalStateByID(MEMORY[0xA8B230], this->TEventClass_field_34, &a6); /*0x71ebcf*/
      return (_BYTE)a6 == 0; /*0x71ebe6*/
    case 45: /*0x71e964*/
      return *((_DWORD *)MEMORY[0xA8B230] + 3403) <= this->TEventClass_field_34; /*0x71eb03*/
    case 46: /*0x71e964*/
      return *((_DWORD *)MEMORY[0xA8B230] + 3403) >= this->TEventClass_field_34; /*0x71eb25*/
    case 47: /*0x71e964*/
      return this->TEventClass_field_34 <= (int)MEMORY[0xA8ED84] / 15; /*0x71eb50*/
    case 60: /*0x71e964*/
      v9 = -1; /*0x71e971*/
      v10 = MEMORY[0xA8EB10] - 1; /*0x71e974*/
      a6 = -1; /*0x71e975*/
      if ( MEMORY[0xA8EB10] - 1 < 0 ) /*0x71e97b*/
        goto LABEL_8; /*0x71e97b*/
      v11 = (const char *)(this + 14); /*0x71e982*/
      v12 = (char *)MEMORY[0xA8EB04] + 4 * v10; /*0x71e985*/
      while ( strcmp((const char *)(*(_DWORD *)v12 + 36), v11) ) /*0x71e9bb*/
      {
        --v10; /*0x71e9bd*/
        v12 -= 4; /*0x71e9be*/
        if ( v10 < 0 ) /*0x71e9c3*/
        {
          v9 = a6; /*0x71e9c5*/
          goto LABEL_8; /*0x71e9c9*/
        }
      }
      v9 = v10; /*0x71e9cb*/
LABEL_8:
      if ( v9 >= MEMORY[0xA8EB10] ) /*0x71e9d3*/
        return 0; /*0x71e9d3*/
      if ( v9 < 0 ) /*0x71e9db*/
        return 0; /*0x71e9db*/
      v13 = 0; /*0x71e9eb*/
      v14 = *((_DWORD *)MEMORY[0xA8EB04] + v9); /*0x71e9ed*/
      v15 = this->TEventClass_field_34; /*0x71e9f5*/
      v16 = MEMORY[0xA8EC88] - 1; /*0x71e9f8*/
      if ( MEMORY[0xA8EC88] - 1 < 0 ) /*0x71e9fd*/
        return 0; /*0x71e9fd*/
      while ( 1 ) /*0x71ea03*/
      {
        if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)MEMORY[0xA8EC7C] + v16) + 132))(*((_DWORD *)MEMORY[0xA8EC7C] /*0x71ea16*/
                                                                                           + v16)) == v14 )
          ++v13; /*0x71ea18*/
        if ( v13 >= v15 ) /*0x71ea1b*/
          break; /*0x71ea1b*/
        if ( --v16 < 0 ) /*0x71ea22*/
          return 0; /*0x71ea2d*/
      }
      return 1; /*0x71ea1b*/
    case 61: /*0x71e964*/
      v18 = -1; /*0x71ea36*/
      v19 = MEMORY[0xA8EB10] - 1; /*0x71ea39*/
      a6 = -1; /*0x71ea3a*/
      if ( MEMORY[0xA8EB10] - 1 < 0 ) /*0x71ea40*/
        goto LABEL_22; /*0x71ea40*/
      v20 = (const char *)(this + 14); /*0x71ea47*/
      v21 = (char *)MEMORY[0xA8EB04] + 4 * v19; /*0x71ea4a*/
      while ( strcmp((const char *)(*(_DWORD *)v21 + 36), v20) ) /*0x71ea80*/
      {
        --v19; /*0x71ea82*/
        v21 -= 4; /*0x71ea83*/
        if ( v19 < 0 ) /*0x71ea88*/
        {
          v18 = a6; /*0x71ea8a*/
          goto LABEL_22; /*0x71ea8e*/
        }
      }
      v18 = v19; /*0x71ea90*/
LABEL_22:
      if ( v18 >= MEMORY[0xA8EB10] || v18 < 0 ) /*0x71eaa0*/
        return 0; /*0x71eaa0*/
      v22 = *((_DWORD *)MEMORY[0xA8EB04] + v18); /*0x71eab2*/
      v23 = MEMORY[0xA8EC88] - 1; /*0x71eab5*/
      if ( MEMORY[0xA8EC88] - 1 < 0 ) /*0x71eaba*/
        return 1; /*0x71eaba*/
      while ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)MEMORY[0xA8EC7C] + v23) + 132))(*((_DWORD *)MEMORY[0xA8EC7C] /*0x71ead2*/
                                                                                            + v23)) != v22 )
      {
        if ( --v23 < 0 ) /*0x71ead9*/
          return 1; /*0x71eae4*/
      }
      return 0; /*0x71ead2*/
    default:
      if ( !v8 ) /*0x71ec65*/
        return 0; /*0x71ec65*/
      if ( v8 != 19 && v8 != 20 && v8 != 21 && v8 != 22 ) /*0x71ec81*/
      {
        switch ( v8 ) /*0x71ec93*/
        {
          case 1: /*0x71ec93*/
          case 2: /*0x71ec93*/
          case 3: /*0x71ec93*/
          case 4: /*0x71ec93*/
          case 6: /*0x71ec93*/
          case 7: /*0x71ec93*/
          case 18: /*0x71ec93*/
          case 19: /*0x71ec93*/
          case 20: /*0x71ec93*/
          case 21: /*0x71ec93*/
          case 22: /*0x71ec93*/
          case 23: /*0x71ec93*/
          case 24: /*0x71ec93*/
          case 25: /*0x71ec93*/
          case 26: /*0x71ec93*/
          case 29: /*0x71ec93*/
          case 31: /*0x71ec93*/
          case 33: /*0x71ec93*/
          case 34: /*0x71ec93*/
          case 35: /*0x71ec93*/
          case 38: /*0x71ec93*/
          case 39: /*0x71ec93*/
          case 40: /*0x71ec93*/
          case 41: /*0x71ec93*/
          case 42: /*0x71ec93*/
          case 43: /*0x71ec93*/
          case 44: /*0x71ec93*/
          case 48: /*0x71ec93*/
          case 49: /*0x71ec93*/
          case 50: /*0x71ec93*/
          case 53: /*0x71ec93*/
          case 54: /*0x71ec93*/
          case 59: /*0x71ec93*/
            if ( a2 == v8 && !MEMORY[0xA8ED6B] ) /*0x71eca9*/
              break; /*0x71eca9*/
            return 0; /*0x71eca9*/
          default:
            break;
        }
      }
      switch ( v8 ) /*0x71ecd6*/
      {
        case 1: /*0x71ecd6*/
        case 25: /*0x71ecd6*/
        case 26: /*0x71ecd6*/
        case 24: /*0x71ecd6*/
        case 59: /*0x71ecd6*/
          if ( a2 == v8 ) /*0x71f1bf*/
          {
            v51 = (void *)this->TEventClass_field_34; /*0x71f1c1*/
            if ( v51 == (void *)-1 || HouseClass::FindOwner(v51) ) /*0x71f1c9*/
            {
              if ( a4 ) /*0x71f1d8*/
              {
                v52 = (void *)this->TEventClass_field_34; /*0x71f1da*/
                if ( v52 == (void *)-1 /*0x71f1f5*/
                  || (v53 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 56))(a4),
                      v53 == *(_DWORD *)(HouseClass::FindOwner(v52) + 48)) )
                {
                  *(_BYTE *)a6 = 1; /*0x71f1ff*/
                  this->TEventClass_field_54 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 60))(a4); /*0x71f209*/
                  return 1; /*0x71f20f*/
                }
              }
            }
          }
          return 0; /*0x71f16c*/
        case 53: /*0x71ecd6*/
          if ( a2 == 53 ) /*0x71ece3*/
          {
            if ( a4 ) /*0x71ecef*/
            {
              v28 = (void *)this->TEventClass_field_34; /*0x71ecf5*/
              if ( v28 != (void *)-1 ) /*0x71ecfb*/
              {
                if ( HouseClass::FindOwner(v28) ) /*0x71ed01*/
                {
                  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 208))(a4, 1) ) /*0x71ed14*/
                  {
                    v29 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 208))(a4, 1); /*0x71ed31*/
                    if ( *(_DWORD *)(v29 + 48) == *(_DWORD *)(HouseClass::FindOwner((void *)this->TEventClass_field_34) + 48) ) /*0x71ed40*/
                    {
                      *(_BYTE *)a6 = 1; /*0x71ed4d*/
                      return 1; /*0x71ed56*/
                    }
                  }
                }
              }
            }
          }
          return 0; /*0x71ed40*/
        case 54: /*0x71ecd6*/
          if ( a2 == 54 ) /*0x71ed60*/
          {
            if ( a4 ) /*0x71ed6c*/
            {
              v30 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 204))(a4, 1); /*0x71ed7c*/
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v30 + 44))(v30) == 16 /*0x71eda2*/
                && this->TEventClass_field_34 != -1
                && (*(int (__thiscall **)(int))(*(_DWORD *)v30 + 64))(v30) == this->TEventClass_field_34 )
              {
                *(_BYTE *)a6 = 1; /*0x71edaf*/
                return 1; /*0x71edb8*/
              }
            }
          }
          return 0; /*0x71eda2*/
        case 34: /*0x71ecd6*/
          if ( a2 == 34 ) /*0x71edc6*/
          {
            WorldCoords = Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], v55, this->TEventClass_field_34); /*0x71eddb*/
            v32 = *WorldCoords; /*0x71ede0*/
            v33 = WorldCoords[1]; /*0x71ede6*/
            v34 = WorldCoords[2]; /*0x71edeb*/
            v35 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a4 + 72))(a4, v56); /*0x71edf3*/
            v36 = v35[1]; /*0x71edf6*/
            v37 = *v35; /*0x71edf9*/
            v38 = v35[2]; /*0x71edfb*/
            v55[1] = v36 - v33; /*0x71ee00*/
            v55[2] = v38 - v34; /*0x71ee0c*/
            v55[0] = v37 - v32; /*0x71ee14*/
            v39 = Math::Sqrt( /*0x71ee38*/
                    (double)(v37 - v32) * (double)(v37 - v32)
                  + (double)(v38 - v34) * (double)(v38 - v34)
                  + (double)(v36 - v33) * (double)(v36 - v33));
            return (int)Math::RoundToInt(v39) <= 1280; /*0x71ee54*/
          }
          return 0; /*0x71edc6*/
      }
      if ( v8 == 44 && (a2 != 44 || !a7 || this->TEventClass_field_34 != *(_DWORD *)(*(_DWORD *)(a7 + 540) + 48)) ) /*0x71ee7c*/
        return 0; /*0x71ee7c*/
      if ( a3 ) /*0x71ee88*/
      {
        switch ( v8 ) /*0x71eea2*/
        {
          case 12: /*0x71eea2*/
            if ( (*(int (__stdcall **)(int))(*(_DWORD *)(a3 + 36) + 24))(a3 + 36) >= this->TEventClass_field_34 ) /*0x71ef0e*/
              goto LABEL_122; /*0x71ef0e*/
            return 0; /*0x71ef1d*/
          case 15: /*0x71eea2*/
            if ( *(_DWORD *)(a3 + 21640) >= this->TEventClass_field_34 ) /*0x71f04a*/
              goto LABEL_122; /*0x71f04a*/
            return 0; /*0x71f055*/
          case 16: /*0x71eea2*/
            if ( *(_DWORD *)(a3 + 21556) >= this->TEventClass_field_34 ) /*0x71f063*/
              goto LABEL_122; /*0x71f063*/
            return 0; /*0x71f063*/
          case 17: /*0x71eea2*/
            if ( *(int *)(a3 + 752) <= 0 ) /*0x71ef47*/
              goto LABEL_122; /*0x71ef47*/
            v44 = *(_DWORD *)(a3 + 120); /*0x71ef4d*/
            v45 = 0; /*0x71ef50*/
            if ( v44 <= 0 ) /*0x71ef54*/
              goto LABEL_122; /*0x71ef54*/
            v46 = *(int **)(a3 + 108); /*0x71ef5a*/
            while ( 1 ) /*0x71ef5d*/
            {
              v47 = *v46; /*0x71ef5d*/
              if ( *v46 ) /*0x71ef5d*/
              {
                if ( !*(_BYTE *)(v47 + 129) && *(_DWORD *)(*(_DWORD *)(v47 + 1312) + 3768) ) /*0x71ef73*/
                  return 0; /*0x71ef7b*/
              }
              ++v45; /*0x71ef81*/
              ++v46; /*0x71ef82*/
              if ( v45 >= v44 ) /*0x71ef87*/
                goto LABEL_122; /*0x71ef87*/
            }
          case 18: /*0x71eea2*/
            if ( *(_BYTE *)(a3 + 505) ) /*0x71ef8e*/
              goto LABEL_122; /*0x71ef96*/
            return 0; /*0x71efa5*/
          case 19: /*0x71eea2*/
            v48 = *(_DWORD *)(a3 + 620); /*0x71efeb*/
            goto LABEL_112; /*0x71efeb*/
          case 20: /*0x71eea2*/
            if ( *(_DWORD *)(a3 + 628) != this->TEventClass_field_34 ) /*0x71f00e*/
              return 0; /*0x71f00e*/
            *(_BYTE *)a6 = 1; /*0x71f018*/
            goto LABEL_122; /*0x71f01b*/
          case 21: /*0x71eea2*/
            if ( *(_DWORD *)(a3 + 624) != this->TEventClass_field_34 ) /*0x71f028*/
              return 0; /*0x71f028*/
            *(_BYTE *)a6 = 1; /*0x71f032*/
            goto LABEL_122; /*0x71f035*/
          case 22: /*0x71eea2*/
            v48 = *(_DWORD *)(a3 + 632); /*0x71f037*/
LABEL_112:
            if ( v48 != this->TEventClass_field_34 ) /*0x71eff4*/
              return 0; /*0x71eff4*/
            *(_BYTE *)a6 = 1; /*0x71effe*/
            goto LABEL_122; /*0x71f001*/
          case 23: /*0x71eea2*/
            v40 = MEMORY[0x8B40F8]; /*0x71eea9*/
            v41 = 0; /*0x71eeaf*/
            if ( MEMORY[0x8B40F8] <= 0 ) /*0x71eeb3*/
              goto LABEL_91; /*0x71eeb3*/
            v42 = (char *)MEMORY[0x8B40EC]; /*0x71eeb8*/
            break; /*0x71eeb8*/
          case 32: /*0x71eea2*/
            if ( !DynamicVector::GetOrGrow((_DWORD *)(a3 + 21840), this->TEventClass_field_34) ) /*0x71efb9*/
              return 0; /*0x71efb9*/
            *(_BYTE *)a6 = 1; /*0x71efc3*/
            goto LABEL_122; /*0x71efc6*/
          case 52: /*0x71eea2*/
            if ( (*(int (__stdcall **)(int))(*(_DWORD *)(a3 + 36) + 24))(a3 + 36) <= this->TEventClass_field_34 ) /*0x71ef2d*/
              goto LABEL_122; /*0x71ef2d*/
            return 0; /*0x71ef3c*/
          case 57: /*0x71eea2*/
            if ( DynamicVector::GetOrGrow((_DWORD *)(a3 + 21840), this->TEventClass_field_34) ) /*0x71efd5*/
              return 0; /*0x71efdc*/
            *(_BYTE *)a6 = 1; /*0x71efe6*/
            goto LABEL_122; /*0x71efe9*/
          default:
            goto LABEL_122;
        }
        while ( 1 ) /*0x71eebe*/
        {
          v43 = *(_DWORD *)v42; /*0x71eebe*/
          if ( *(_DWORD *)(*(_DWORD *)v42 + 36) == this->TEventClass_field_30 && !*(_DWORD *)(v43 + 84) && *(_BYTE *)(v43 + 130) ) /*0x71eecc*/
            break; /*0x71eecc*/
          ++v41; /*0x71eed6*/
          v42 += 4; /*0x71eed7*/
          if ( v41 >= MEMORY[0x8B40F8] ) /*0x71eedc*/
            goto LABEL_91; /*0x71eedc*/
        }
        *(_BYTE *)a6 = 1; /*0x71eee4*/
        v40 = MEMORY[0x8B40F8]; /*0x71eee7*/
LABEL_91:
        if ( v41 == v40 ) /*0x71eeef*/
          return 0; /*0x71eefe*/
      }
LABEL_122:
      Owner = HouseClass::FindOwner((void *)this->TEventClass_field_34); /*0x71f069*/
      if ( Owner ) /*0x71f075*/
      {
        switch ( this->TEventClass_field_2C ) /*0x71f092*/
        {
          case 3: /*0x71f092*/
            return *(_BYTE *)(Owner + 580) != 0; /*0x71f0f8*/
          case 5: /*0x71f092*/
            return *(_BYTE *)(Owner + 500) != 0; /*0x71f112*/
          case 9: /*0x71f092*/
            if ( VectorClass::GetCount((_DWORD *)(Owner + 21860)) > 0 ) /*0x71f13c*/
              return 0; /*0x71f13c*/
            return VectorClass::GetCount((_DWORD *)(Owner + 21880)) <= 0; /*0x71f156*/
          case 0xA: /*0x71f092*/
            return *(int *)(Owner + 752) <= 0; /*0x71f12c*/
          case 0xB: /*0x71f092*/
            return *(int *)(Owner + 752) <= 0 /*0x71f1af*/
                && VectorClass::GetCount((_DWORD *)(Owner + 21860)) <= 0
                && VectorClass::GetCount((_DWORD *)(Owner + 21880)) <= 0;
          case 0x1E: /*0x71f092*/
            return HouseClass::GetPowerRatio((int *)Owner) < 1.0; /*0x71f0ba*/
          case 0x37: /*0x71f092*/
            v50 = *(_DWORD *)(Owner + 748); /*0x71f159*/
            return v50 <= 0; /*0x71f159*/
          case 0x38: /*0x71f092*/
            if ( *(_DWORD *)(Owner + 744) - *(_DWORD *)(Owner + 748) > 0 ) /*0x71f17f*/
              return 0; /*0x71f17f*/
            v50 = *(_DWORD *)(Owner + 756); /*0x71f181*/
            return v50 <= 0; /*0x71f161*/
          case 0x3A: /*0x71f092*/
            return HouseClass::GetPowerRatio((int *)Owner) >= 1.0; /*0x71f0de*/
          default:
            return 1;
        }
      }
      return 1;
  }
}


// ==== 0x0071F390  TEventClass::PrepareSaveToINI  this=TEventClass  sig=csp ====
int __thiscall TEventClass::PrepareSaveToINI(int *this, const char *a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // esi
  const CHAR *v6; // [esp-10h] [ebp-18h]
  int v7; // [esp-Ch] [ebp-14h]
  int v8; // [esp-8h] [ebp-10h]
  int v9; // [esp-4h] [ebp-Ch]

  v2 = this->TEventClass_field_2C; /*0x71f390*/
  switch ( v2 ) /*0x71f3a8*/
  {
    case 1: /*0x71f3a8*/
    case 3: /*0x71f3a8*/
    case 5: /*0x71f3a8*/
    case 9: /*0x71f3a8*/
    case 10: /*0x71f3a8*/
    case 11: /*0x71f3a8*/
    case 24: /*0x71f3a8*/
    case 25: /*0x71f3a8*/
    case 26: /*0x71f3a8*/
    case 30: /*0x71f3a8*/
    case 44: /*0x71f3a8*/
    case 53: /*0x71f3a8*/
    case 55: /*0x71f3a8*/
    case 56: /*0x71f3a8*/
    case 58: /*0x71f3a8*/
    case 59: /*0x71f3a8*/
      v3 = 13; /*0x71f3af*/
      break; /*0x71f3b4*/
    case 12: /*0x71f3a8*/
    case 13: /*0x71f3a8*/
    case 15: /*0x71f3a8*/
    case 16: /*0x71f3a8*/
    case 45: /*0x71f3a8*/
    case 46: /*0x71f3a8*/
    case 47: /*0x71f3a8*/
    case 51: /*0x71f3a8*/
    case 52: /*0x71f3a8*/
      v3 = 10; /*0x71f3b6*/
      break; /*0x71f3bb*/
    case 19: /*0x71f3a8*/
    case 32: /*0x71f3a8*/
    case 57: /*0x71f3a8*/
      v3 = 8; /*0x71f3cb*/
      break; /*0x71f3d0*/
    case 20: /*0x71f3a8*/
      v3 = 6; /*0x71f3d2*/
      break; /*0x71f3d7*/
    case 21: /*0x71f3a8*/
    case 54: /*0x71f3a8*/
      v3 = 5; /*0x71f3d9*/
      break; /*0x71f3de*/
    case 22: /*0x71f3a8*/
      v3 = 7; /*0x71f3e0*/
      break; /*0x71f3e5*/
    case 23: /*0x71f3a8*/
      v3 = 12; /*0x71f3e7*/
      break; /*0x71f3ec*/
    case 27: /*0x71f3a8*/
    case 28: /*0x71f3a8*/
      v3 = 22; /*0x71f3bd*/
      break; /*0x71f3c2*/
    case 34: /*0x71f3a8*/
      v3 = 9; /*0x71f3ee*/
      break; /*0x71f3f3*/
    case 36: /*0x71f3a8*/
    case 37: /*0x71f3a8*/
      v3 = 29; /*0x71f3c4*/
      break; /*0x71f3c9*/
    case 60: /*0x71f3a8*/
    case 61: /*0x71f3a8*/
      v3 = 43; /*0x71f3f5*/
      break; /*0x71f3fa*/
    default:
      v3 = 0; /*0x71f3fc*/
      break; /*0x71f3fc*/
  }
  v4 = this->vtable4; /*0x71f3fe*/
  if ( v4 ) /*0x71f403*/
  {
    v9 = v4 + 36; /*0x71f408*/
    v8 = 1; /*0x71f409*/
    v7 = this->TEventClass_field_2C; /*0x71f40b*/
    v6 = MEMORY[0x844714]; /*0x71f40c*/
  }
  else
  {
    if ( v3 == 43 ) /*0x71f416*/
      return wsprintfA((LPSTR)&a2[strlen(a2)], MEMORY[0x8258DC], v2, 2, this->TEventClass_field_34, this + 14); /*0x71f443*/
    v9 = this->TEventClass_field_34; /*0x71f446*/
    v8 = 0; /*0x71f447*/
    v7 = this->TEventClass_field_2C; /*0x71f449*/
    v6 = MEMORY[0x8189B0]; /*0x71f44a*/
  }
  return wsprintfA((LPSTR)&a2[strlen(a2)], v6, v7, v8, v9); /*0x71f441*/
}


// ==== 0x0071F4E0  TriggerTypeClass::ParseActionData  this=TriggerTypeClass  sig=csp ====
char *__thiscall sub_71F4E0(int this)
{
  char *v2; // eax
  char *v3; // eax
  int v4; // edi
  char *v5; // ebp
  int v6; // ebx
  char *result; // eax
  int v8; // edi
  char Destination[24]; // [esp+10h] [ebp-1Ch] BYREF
  char v10; // [esp+28h] [ebp-4h]

  *(_DWORD *)(this + 52) = 0; /*0x71f4f0*/
  v2 = strtok(0, MEMORY[0x817F70]); /*0x71f4f7*/
  *(_DWORD *)(this + 44) = atoi(v2); /*0x71f509*/
  v3 = strtok(0, MEMORY[0x817F70]); /*0x71f50c*/
  v4 = atoi(v3); /*0x71f51e*/
  v5 = strtok(0, MEMORY[0x817F70]); /*0x71f525*/
  v6 = atoi(v5); /*0x71f52d*/
  result = 0; /*0x71f532*/
  if ( v4 == 2 ) /*0x71f537*/
    result = strtok(0, MEMORY[0x817F70]); /*0x71f53f*/
  if ( v4 ) /*0x71f54a*/
  {
    v8 = v4 - 1; /*0x71f54c*/
    if ( v8 ) /*0x71f54d*/
    {
      if ( v8 == 1 ) /*0x71f550*/
      {
        *(_DWORD *)(this + 52) = v6; /*0x71f554*/
        if ( result ) /*0x71f557*/
        {
          result = strncpy(Destination, result, 0x18u); /*0x71f567*/
          v10 = 0; /*0x71f56f*/
        }
        else
        {
          Destination[0] = 0; /*0x71f559*/
        }
        if ( Destination != (char *)(this + 56) ) /*0x71f57d*/
        {
          qmemcpy((void *)(this + 56), Destination, 0x18u); /*0x71f588*/
          *(_BYTE *)(this + 80) = v10; /*0x71f58a*/
        }
      }
    }
    else
    {
      result = (char *)TeamTypeClass::FindByName(v5); /*0x71f595*/
      *(_DWORD *)(this + 48) = result; /*0x71f59a*/
    }
  }
  else
  {
    *(_DWORD *)(this + 52) = v6; /*0x71f5a5*/
  }
  return result; /*0x71f58b*/
}


// ==== 0x0071F680  TriggerTypeClass::GetActionCategoryFlags  this=TriggerTypeClass  sig=csp ====
int __thiscall sub_71F680(void *this)
{
  int v1; // esi

  v1 = 0; /*0x71f681*/
  switch ( (unsigned int)this ) /*0x71f690*/
  {
    case 0u: /*0x71f690*/
    case 1u: /*0x71f690*/
    case 4u: /*0x71f690*/
    case 8u: /*0x71f690*/
    case 0x18u: /*0x71f690*/
    case 0x19u: /*0x71f690*/
    case 0x1Au: /*0x71f690*/
    case 0x1Fu: /*0x71f690*/
    case 0x35u: /*0x71f690*/
    case 0x36u: /*0x71f690*/
    case 0x3Bu: /*0x71f690*/
      v1 = 1; /*0x71f697*/
      break; /*0x71f697*/
    default:
      break;
  }
  switch ( (unsigned int)this ) /*0x71f6a9*/
  {
    case 0u: /*0x71f6a9*/
    case 1u: /*0x71f6a9*/
    case 2u: /*0x71f6a9*/
    case 4u: /*0x71f6a9*/
    case 6u: /*0x71f6a9*/
    case 7u: /*0x71f6a9*/
    case 8u: /*0x71f6a9*/
    case 0x1Du: /*0x71f6a9*/
    case 0x21u: /*0x71f6a9*/
    case 0x22u: /*0x71f6a9*/
    case 0x23u: /*0x71f6a9*/
    case 0x26u: /*0x71f6a9*/
    case 0x27u: /*0x71f6a9*/
    case 0x28u: /*0x71f6a9*/
    case 0x29u: /*0x71f6a9*/
    case 0x2Au: /*0x71f6a9*/
    case 0x2Bu: /*0x71f6a9*/
    case 0x2Cu: /*0x71f6a9*/
    case 0x30u: /*0x71f6a9*/
    case 0x31u: /*0x71f6a9*/
      v1 |= 2u; /*0x71f6b0*/
      break; /*0x71f6b0*/
    default:
      break;
  }
  if ( this == (void *)8 || this == (void *)24 ) /*0x71f6bb*/
    v1 |= 4u; /*0x71f6bd*/
  switch ( (unsigned int)this ) /*0x71f6d0*/
  {
    case 3u: /*0x71f6d0*/
    case 5u: /*0x71f6d0*/
    case 8u: /*0x71f6d0*/
    case 9u: /*0x71f6d0*/
    case 0xAu: /*0x71f6d0*/
    case 0xBu: /*0x71f6d0*/
    case 0xCu: /*0x71f6d0*/
    case 0xFu: /*0x71f6d0*/
    case 0x10u: /*0x71f6d0*/
    case 0x11u: /*0x71f6d0*/
    case 0x12u: /*0x71f6d0*/
    case 0x13u: /*0x71f6d0*/
    case 0x14u: /*0x71f6d0*/
    case 0x15u: /*0x71f6d0*/
    case 0x16u: /*0x71f6d0*/
    case 0x1Eu: /*0x71f6d0*/
    case 0x20u: /*0x71f6d0*/
    case 0x34u: /*0x71f6d0*/
    case 0x37u: /*0x71f6d0*/
    case 0x38u: /*0x71f6d0*/
    case 0x39u: /*0x71f6d0*/
    case 0x3Au: /*0x71f6d0*/
      v1 |= 8u; /*0x71f6d7*/
      break; /*0x71f6d7*/
    default:
      break;
  }
  switch ( (unsigned int)this ) /*0x71f6ea*/
  {
    case 8u: /*0x71f6ea*/
    case 0xDu: /*0x71f6ea*/
    case 0xEu: /*0x71f6ea*/
    case 0x17u: /*0x71f6ea*/
    case 0x1Bu: /*0x71f6ea*/
    case 0x1Cu: /*0x71f6ea*/
    case 0x24u: /*0x71f6ea*/
    case 0x25u: /*0x71f6ea*/
    case 0x2Du: /*0x71f6ea*/
    case 0x2Eu: /*0x71f6ea*/
    case 0x2Fu: /*0x71f6ea*/
    case 0x32u: /*0x71f6ea*/
    case 0x33u: /*0x71f6ea*/
    case 0x3Cu: /*0x71f6ea*/
    case 0x3Du: /*0x71f6ea*/
      v1 |= 0x10u; /*0x71f6f1*/
      break; /*0x71f6f1*/
    default:
      return v1;
  }
  return v1; /*0x71f6f6*/
}


// ==== 0x0071F800  TEventClass::CheckConditions  this=TEventClass  sig=csp ====
int __thiscall TEventClass::_vt10(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = this->TEventClass_field_28; /*0x71f800*/
  if ( result == a2 ) /*0x71f809*/
  {
    result = *(_DWORD *)(result + 40); /*0x71f80b*/
    this->TEventClass_field_28 = result; /*0x71f80e*/
  }
  if ( this->TEventClass_field_30 == a2 ) /*0x71f814*/
    this->TEventClass_field_30 = 0; /*0x71f816*/
  return result; /*0x71f81d*/
}


// ==== 0x0071F820  TEventClass::ProcessEvent  this=TEventClass  sig=csp ====
int __thiscall TEventClass::_vt13(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  AbstractClass::ProcessPower((#378 *)this); /*0x71f829*/
  v3 = *(_DWORD *)(this + 40); /*0x71f82e*/
  if ( v3 ) /*0x71f833*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x71f83c*/
    Power::TimerProcess(v4); /*0x71f842*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 44)); /*0x71f84d*/
  v5 = *(_DWORD *)(this + 48); /*0x71f852*/
  if ( v5 ) /*0x71f857*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x71f860*/
    Power::TimerProcess(v6); /*0x71f866*/
  }
  return Power::TimerProcess(*(_DWORD *)(this + 52)); /*0x71f876*/
}


// ==== 0x0071F880  TEventClass::ddtor  this=TEventClass  sig=csp ====
int __stdcall TEventClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x71f886*/
    return -2147467261; /*0x71f888*/
  *a2 = 1326367635; /*0x71f896*/
  a2[1] = 298977877; /*0x71f89e*/
  a2[2] = 1610655660; /*0x71f8a7*/
  a2[3] = -1252326136; /*0x71f8b0*/
  return 0; /*0x71f88d*/
}


// ==== 0x0071F8C0  TEventClass::SaveLoad_Prefix  this=TEventClass  sig=csp ====
int __stdcall TEventClass::SaveLoad_Prefix(AbstractClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x71f8cb*/
  if ( result >= 0 ) /*0x71f8d2*/
  {
    if ( aP0 ) /*0x71f8d6*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x71f8df*/
      *(_DWORD *)aP0->__pad_0 = &TEventClass::`vftable'; /*0x71f8e4*/
      *(_DWORD *)&aP0->__pad_0[4] = &TEventClass::`vftable'; /*0x71f8ea*/
      *(_DWORD *)&aP0->__pad_0[8] = &TEventClass::`vftable'; /*0x71f8f1*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_TEventClass; /*0x71f8f8*/
    }
    ObjectPtr::RegisterForTracking( /*0x71f908*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x71f916*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[12]);
    ObjectPtr::RegisterForTracking( /*0x71f924*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].__pad_0[12]);
    return 0; /*0x71f929*/
  }
  return result; /*0x71f92b*/
}


// ==== 0x0071F930  TEventClass::SaveLoad_Prefix_0  this=TEventClass  sig=csp ====
int __stdcall TEventClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x71f93f*/
  if ( result >= 0 ) /*0x71f946*/
    return 0; /*0x71f948*/
  return result; /*0x71f94a*/
}


// ==== 0x0071F950  TEventClass::GetStateA  this=TEventClass  sig=csp ====
char __thiscall TEventClass::GetStateA(_DWORD *this)
{
  char result; // al

  switch ( this->TEventClass_field_2C ) /*0x71f963*/
  {
    case 1: /*0x71f963*/
    case 2: /*0x71f963*/
    case 3: /*0x71f963*/
    case 4: /*0x71f963*/
    case 6: /*0x71f963*/
    case 7: /*0x71f963*/
    case 0x12: /*0x71f963*/
    case 0x13: /*0x71f963*/
    case 0x14: /*0x71f963*/
    case 0x15: /*0x71f963*/
    case 0x16: /*0x71f963*/
    case 0x17: /*0x71f963*/
    case 0x18: /*0x71f963*/
    case 0x19: /*0x71f963*/
    case 0x1A: /*0x71f963*/
    case 0x1D: /*0x71f963*/
    case 0x1F: /*0x71f963*/
    case 0x21: /*0x71f963*/
    case 0x22: /*0x71f963*/
    case 0x23: /*0x71f963*/
    case 0x26: /*0x71f963*/
    case 0x27: /*0x71f963*/
    case 0x28: /*0x71f963*/
    case 0x29: /*0x71f963*/
    case 0x2A: /*0x71f963*/
    case 0x2B: /*0x71f963*/
    case 0x2C: /*0x71f963*/
    case 0x30: /*0x71f963*/
    case 0x31: /*0x71f963*/
    case 0x32: /*0x71f963*/
    case 0x35: /*0x71f963*/
    case 0x36: /*0x71f963*/
    case 0x3B: /*0x71f963*/
      result = 1; /*0x71f96a*/
      break; /*0x71f96c*/
    default:
      result = 0; /*0x71f96d*/
      break; /*0x71f96d*/
  }
  return result; /*0x71f96c*/
}


// ==== 0x0071F9C0  TEventClass::GetStateB_SpyEvent  this=TEventClass  sig=csp ====
char __thiscall TEventClass::GetStateB_SpyEvent(_DWORD *this)
{
  char result; // al

  switch ( this->TEventClass_field_2C ) /*0x71f9d3*/
  {
    case 1: /*0x71f9d3*/
    case 6: /*0x71f9d3*/
    case 0x1F: /*0x71f9d3*/
    case 0x2C: /*0x71f9d3*/
    case 0x3B: /*0x71f9d3*/
      result = 0; /*0x71f9da*/
      break; /*0x71f9dc*/
    default:
      result = 1; /*0x71f9dd*/
      break; /*0x71f9dd*/
  }
  return result; /*0x71f9dc*/
}


// ==== 0x0071FA30  TriggerClass::GetValue  this=TriggerClass  sig=csp ====
int __thiscall sub_71FA30(_DWORD *this)
{
  return this->u32_54; /*0x71fa33*/
}


// ==== 0x0071FA40  ObjectClass::method_71FA40  this=ObjectClass  sig=csp ====
int __thiscall sub_71FA40(_DWORD *this, int a2)
{
  this->q054 = a2; /*0x71fa44*/
  return a2; /*0x71fa47*/
}


// ==== 0x0071FA50  TEventClass::StubReturn88  this=TEventClass  sig=csp ====
int TEventClass::_vt12()
{
  return 88; /*0x71fa55*/
}


// ==== 0x0071FA60  TEventClass::StubReturn48  this=TEventClass  sig=csp ====
int TEventClass::_vt11()
{
  return 48; /*0x71fa65*/
}


// ==== 0x0071FA70  TEventClass::Stub  this=TEventClass  sig=csp ====
int __thiscall TEventClass::_vt16(_DWORD *this)
{
  return this->eventType; /*0x71fa73*/
}


// ==== 0x0071FA80  TEventClass::Fire  this=TEventClass  sig=csp ====
TEventClass *__thiscall TEventClass::Fire(void **Block, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  void **v7; // [esp+8h] [ebp-4h] BYREF

  *Block = &TEventClass::`vftable'; /*0x71fa86*/
  *(Block + 1) = &TEventClass::`vftable'; /*0x71fa8c*/
  *(Block + 2) = &TEventClass::`vftable'; /*0x71fa93*/
  *(Block + 3) = &vt_TEventClass; /*0x71fa9a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x71faa1*/
  v7 = Block; /*0x71fab6*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xB0F658] + 16))(&MEMORY[0xB0F658], &v7); /*0x71faba*/
  if ( v3 != -1 && v3 < MEMORY[0xB0F668] && v3 < --MEMORY[0xB0F668] ) /*0x71fad5*/
  {
    do /*0x71faed*/
    {
      ++v3; /*0x71fadd*/
      *((_DWORD *)MEMORY[0xB0F65C] + v3 - 1) = *((_DWORD *)MEMORY[0xB0F65C] + v3); /*0x71fae1*/
    }
    while ( v3 < MEMORY[0xB0F668] ); /*0x71faed*/
  }
  v7 = Block; /*0x71faff*/
  v4 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v7); /*0x71fb03*/
  if ( v4 != -1 && v4 < MEMORY[0xB0F680] && v4 < --MEMORY[0xB0F680] ) /*0x71fb1e*/
  {
    do /*0x71fb36*/
    {
      ++v4; /*0x71fb26*/
      *((_DWORD *)MEMORY[0xB0F674] + v4 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v4); /*0x71fb2a*/
    }
    while ( v4 < MEMORY[0xB0F680] ); /*0x71fb36*/
  }
  v7 = Block; /*0x71fb48*/
  v5 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xB0F1A0] + 16))(&MEMORY[0xB0F1A0], &v7); /*0x71fb4c*/
  if ( v5 != -1 && v5 < MEMORY[0xB0F1B0] && v5 < --MEMORY[0xB0F1B0] ) /*0x71fb67*/
  {
    do /*0x71fb7f*/
    {
      ++v5; /*0x71fb6f*/
      *((_DWORD *)MEMORY[0xB0F1A4] + v5 - 1) = *((_DWORD *)MEMORY[0xB0F1A4] + v5); /*0x71fb73*/
    }
    while ( v5 < MEMORY[0xB0F1B0] ); /*0x71fb7f*/
  }
  AbstractClass::DTOR(Block); /*0x71fb83*/
  if ( (a2 & 1) != 0 ) /*0x71fb8d*/
    __3_YAXPAX_Z(Block); /*0x71fb90*/
  return (TEventClass *)Block; /*0x71fb9a*/
}


// ==== 0x0071FBA0  _DynamicVectorClass_PAVTEventClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TEventClass::sub_71FBA0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x71fba6*/
  *(_DWORD *)(this + 16) = 0; /*0x71fba9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x71fbb0*/
  {
    __3_YAXPAX_Z(v2); /*0x71fbb6*/
    *(_DWORD *)(this + 4) = 0; /*0x71fbbe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x71fbc1*/
  *(_DWORD *)(this + 8) = 0; /*0x71fbc4*/
}


// ==== 0x0071FBD0  _DynamicVectorClass_PAVTEventClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TEventClass::sub_71FBD0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x71fbd0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x71fbe5*/
  else
    return 0; /*0x71fbd7*/
}


// ==== 0x0071FBF0  _VectorClass_PAVTEventClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TEventClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x71fbfa*/
}


// ==== 0x0071FC00  _VectorClass_PAVTEventClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TEventClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x71fc02*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x71fc0d*/
  {
    v3 = 0; /*0x71fc0f*/
    if ( v2 <= 0 ) /*0x71fc13*/
      return 1; /*0x71fc33*/
    v4 = (_DWORD *)this->Items; /*0x71fc15*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x71fc1b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x71fc24*/
    {
      ++v3; /*0x71fc26*/
      ++v4; /*0x71fc27*/
      if ( v3 >= v2 ) /*0x71fc2c*/
        return 1; /*0x71fc2c*/
    }
  }
  return 0; /*0x71fc2e*/
}


// ==== 0x0071FC40  _VectorClass_PAVTEventClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TEventClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x71fc4c*/
  {
    this->IsInitialized = 0; /*0x71fc56*/
    if ( a3 ) /*0x71fc5c*/
      v4 = a3; /*0x71fc72*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x71fc6e*/
    this->IsInitialized = 1; /*0x71fc76*/
    if ( v4 ) /*0x71fc7a*/
    {
      if ( this->Items ) /*0x71fc85*/
      {
        v6 = this->Capacity; /*0x71fc8c*/
        if ( a2 < v6 ) /*0x71fc91*/
          v6 = a2; /*0x71fc93*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x71fc99*/
          ++i; /*0x71fc9e*/
        if ( this->IsAllocated ) /*0x71fcab*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x71fcb6*/
          this->Items = 0; /*0x71fcbe*/
        }
      }
      this->Items = v4; /*0x71fcc7*/
      this->Capacity = a2; /*0x71fccf*/
      this->IsAllocated = a3 == 0; /*0x71fcd2*/
      return 1; /*0x71fcd8*/
    }
    else
    {
      return 0; /*0x71fc7f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x71fce2*/
    return 1; /*0x71fce8*/
  }
}


// ==== 0x0071FCF0  _VectorClass_PAVTEventClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TEventClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x71fcfd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x71fd03*/
    *(_DWORD *)(this + 4) = 0; /*0x71fd0b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x71fd0e*/
  *(_DWORD *)(this + 8) = 0; /*0x71fd11*/
}


// ==== 0x0071FD20  _VectorClass_PAVTEventClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TEventClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x71fd20*/
    return 0; /*0x71fd28*/
  v3 = *(_DWORD *)(this + 8); /*0x71fd2e*/
  result = 0; /*0x71fd31*/
  if ( v3 <= 0 ) /*0x71fd35*/
    return -1; /*0x71fd4c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x71fd3b*/
  {
    if ( ++result >= v3 ) /*0x71fd4a*/
      return -1; /*0x71fd4a*/
  }
  return result; /*0x71fd2a*/
}


// ==== 0x0071FD60  _VectorClass_PAVTEventClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TEventClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x71fd60*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x71fd75*/
  else
    return 0; /*0x71fd67*/
}


// ==== 0x0071FD80  _DynamicVectorClass_PAVTEventClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TEventClass::sub_71FD80(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x71fd8c*/
  {
    this->IsInitialized = 0; /*0x71fd92*/
    if ( a3 ) /*0x71fd98*/
      v4 = a3; /*0x71fdae*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x71fdaa*/
    this->IsInitialized = 1; /*0x71fdb2*/
    if ( !v4 ) /*0x71fdb6*/
      return 0; /*0x71fe2a*/
    if ( this->Items ) /*0x71fdb8*/
    {
      v5 = this->q008; /*0x71fdbf*/
      if ( a2 < v5 ) /*0x71fdc4*/
        v5 = a2; /*0x71fdc6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x71fdcc*/
        ++i; /*0x71fdd1*/
      if ( this->IsAllocated ) /*0x71fdde*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x71fde9*/
        this->Items = 0; /*0x71fdf1*/
      }
    }
    this->Items = v4; /*0x71fdfa*/
    this->q008 = a2; /*0x71fe02*/
    this->IsAllocated = a3 == 0; /*0x71fe05*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x71fe0e*/
  }
  v7 = this->q008; /*0x71fe11*/
  if ( v7 < this->Items ) /*0x71fe19*/
    this->Items = v7; /*0x71fe1b*/
  return 1; /*0x71fe1e*/
}


// ==== 0x0071FE30  _DynamicVectorClass_PAVTEventClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TEventClass::sub_71FE30(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x71fe30*/
  result = 0; /*0x71fe33*/
  if ( v2 <= 0 ) /*0x71fe38*/
    return -1; /*0x71fe4f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x71fe3e*/
  {
    if ( ++result >= v2 ) /*0x71fe4d*/
      return -1; /*0x71fe4d*/
  }
  return result; /*0x71fe52*/
}


// ==== 0x0071FE60  _VectorClass_PAVTEventClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_TEventClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x71fe63*/
  *Block = &vt_VectorClass_TEventClass; /*0x71fe66*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x71fe70*/
  {
    __3_YAXPAX_Z(v3); /*0x71fe78*/
    *(Block + 1) = 0; /*0x71fe80*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x71fe8b*/
  *(Block + 2) = 0; /*0x71fe91*/
  if ( (a2 & 1) != 0 ) /*0x71fe98*/
    __3_YAXPAX_Z(Block); /*0x71fe9b*/
  return (VectorClass *)Block; /*0x71fea5*/
}


// ==== 0x0071FEB0  _DynamicVectorClass_PAVTEventClass::Constructor_VectorClass_TEventClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_TEventClass::Constructor_VectorClass_TEventClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x71feb3*/
  *Block = &vt_VectorClass_TEventClass; /*0x71feb6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x71fec0*/
  {
    __3_YAXPAX_Z(v3); /*0x71fec8*/
    *(Block + 1) = 0; /*0x71fed0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x71fedb*/
  *(Block + 2) = 0; /*0x71fee1*/
  if ( (a2 & 1) != 0 ) /*0x71fee8*/
    __3_YAXPAX_Z(Block); /*0x71feeb*/
  return (DynamicVector *)Block; /*0x71fef5*/
}


// ==== 0x0071FF00  sub_71FF00  this=-  sig=ida-proto ====
int sub_71FF00()
{
  MEMORY[0xB0F1E8] = 0; /*0x71ff02*/
  MEMORY[0xB0F1EC] = 0; /*0x71ff07*/
  MEMORY[0xB0F1F0] = 0; /*0x71ff0c*/
  MEMORY[0xB0F1F4] = 0; /*0x71ff11*/
  return 0; /*0x71ff16*/
}


// ==== 0x0071FF20  TextButtonClass::method_71FF20  this=TextButtonClass  sig=csp ====
int __thiscall sub_71FF20(
        TextButtonClass *this,
        int aP1,
        int a3,
        int a4,
        int aP2,
        int aP3,
        int aP4,
        int aP5,
        char a9,
        ShapeButtonClass *aP9)
{
  ControlClass *Instance; // ebx

  ToggleClass::Construct( /*0x71ff41*/
    (int)this,
    (ControlClass *)aP1,
    (ControlClass *)aP2,
    (ControlClass *)aP3,
    (ControlClass *)aP4,
    (ControlClass *)aP5);
  this->__pad_0[53] = (char)aP9; /*0x71ff52*/
  this->__pad_0[52] = a9; /*0x71ff5c*/
  this->field_38 = a3; /*0x71ff5f*/
  *((_DWORD *)this + 15) = a4; /*0x71ff62*/
  *(_DWORD *)this->__pad_0 = &vt_TextButtonClass; /*0x71ff65*/
  if ( aP4 == -1 || aP5 == -1 ) /*0x71ff70*/
  {
    Instance = (ControlClass *)TextRenderer::GetInstance(); /*0x71ff7a*/
    if ( aP4 == -1 ) /*0x71ff7c*/
      *(_DWORD *)&this->__pad_0[20] = Text::MeasureWidth(this->field_38, 0) + 8; /*0x71ff8e*/
    if ( aP5 == -1 ) /*0x71ff94*/
      *(_DWORD *)&this->__pad_0[24] = Instance[1].ControlClass_field_0x0C + 2; /*0x71ff9c*/
  }
  return (int)this->__pad_0; /*0x71ffa1*/
}


// ==== 0x0071FFE0  TextButtonClass::checkWeaponCooldown  this=TextButtonClass  sig=csp ====
int __thiscall AbstractClass::checkWeaponCooldown(TextButtonClass *this, int a2)
{
  if ( !Control::DispatchClick(this, (ControlClass *)a2) ) /*0x71ffe8*/
    return 0; /*0x720012*/
  (*(void (__thiscall **)(TextButtonClass *))(*(_DWORD *)this->__pad_0 + 144))(this); /*0x71fff5*/
  (*(void (__thiscall **)(TextButtonClass *, int))(*(_DWORD *)this->__pad_0 + 148))(this, this->field_38); /*0x720003*/
  return 1; /*0x72000e*/
}

