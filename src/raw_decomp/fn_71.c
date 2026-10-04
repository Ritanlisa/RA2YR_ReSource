// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00710000  FootClass::FootClass_ImbueLocomotor  this=FootClass  sig=csp ====
void __thiscall FootClass::FootClass_ImbueLocomotor(FootClass *this, int ppv, int rclsid, ObjectClass rclsid_4)
{
  int v4; // ebp
  int v5; // edi
  int *v6; // esi
  TaskManager *v7; // ecx
  _DWORD *v8; // ecx
  int v9; // eax
  int *v10; // edi
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int InstanceCOM; // eax
  int v20; // eax
  int m_Size; // ebx
  int v22; // ebp
  int *v23; // ecx
  int Member; // eax
  _DWORD *v25; // ecx
  _DWORD *v26; // ebx
  BuildingClass *v27; // [esp+50h] [ebp-2Ch]
  StreamClass v28; // [esp+60h] [ebp-1Ch] BYREF
  int v29; // [esp+78h] [ebp-4h]

  v6 = (int *)ppv; /*0x710006*/
  v28.m_Size = (int)this; /*0x71000d*/
  if ( ppv )
  {
    v7 = *(TaskManager **)(ppv + 720); /*0x710017*/
    if ( v7 ) /*0x71001f*/
      TaskManager::Update(v7); /*0x710021*/
    v8 = (_DWORD *)v6[421]; /*0x710026*/
    if ( v8 && v8[423] && *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v8 + 132))(v8) + 3278) ) /*0x710042*/
      BuildingClass::Deploy(v27, v4, v5); /*0x710058*/
    v9 = v6[413]; /*0x71005d*/
    v10 = v6 + 413; /*0x710063*/
    *(_DWORD *)v28.__pad_0 = 0; /*0x71006b*/
    if ( v9 ) /*0x710073*/
    {
      v11 = StreamClass::Set(&v28, v6 + 413); /*0x71007a*/
      if ( v11 < 0 && v11 != -2147467262 ) /*0x710088*/
        WinAPI::Wrapper(v11); /*0x71008b*/
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*v6 + 132))(v6) + 1516)
      && *(_DWORD *)v28.__pad_0
      && !v6[172]
      && (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)v28.__pad_0 + 28))(*(_DWORD *)v28.__pad_0) )
    {
      if ( !*(_DWORD *)v28.__pad_0 ) /*0x7100d6*/
        WinAPI::Wrapper(-2147467261); /*0x7100dd*/
      v12 = (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)v28.__pad_0 + 20))(*(_DWORD *)v28.__pad_0) == 0; /*0x7100ec*/
      v13 = *v10; /*0x7100ee*/
      if ( v12 ) /*0x7100f0*/
      {
        if ( !v13 ) /*0x710126*/
          WinAPI::Wrapper(-2147467261); /*0x71012d*/
        (*(void (__stdcall **)(int))(*(_DWORD *)*v10 + 72))(*v10); /*0x710137*/
        (*(void (__thiscall **)(int *, int))(*v6 + 496))(v6, -1); /*0x710140*/
        (*(void (__thiscall **)(int *, int, _DWORD))(*v6 + 488))(v6, 13, 0); /*0x71014e*/
      }
      else
      {
        if ( v13 ) /*0x7100f4*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 8))(*v10); /*0x7100f9*/
        v14 = *(_DWORD *)v28.__pad_0; /*0x7100fc*/
        *v10 = 0; /*0x710100*/
        if ( !v14 ) /*0x710108*/
          WinAPI::Wrapper(-2147467261); /*0x71010f*/
        (*(void (__stdcall **)(int, int *))(*(_DWORD *)v14 + 16))(v14, v6 + 413); /*0x71011c*/
      }
    }
    else
    {
      if ( !*v10 ) /*0x710159*/
        WinAPI::Wrapper(-2147467261); /*0x710163*/
      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*v10 + 156))(*v10, 0); /*0x71016f*/
      v12 = *v10 == 0; /*0x710189*/
      v29 = dword_B0EA98; /*0x71018b*/
      if ( v12 ) /*0x71018f*/
        WinAPI::Wrapper(-2147467261); /*0x710196*/
      (*(void (__stdcall **)(int, int, _DWORD, int, int))(*(_DWORD *)*v10 + 112))( /*0x7101b3*/
        *v10,
        -1,
        dword_B0EA90,
        dword_B0EA94,
        v29);
      v15 = *v6; /*0x7101b6*/
      v16 = (*(int (__thiscall **)(int *, int *))(*v6 + 72))(v6, &v28.StreamClass_field_0C); /*0x7101bf*/
      (*(void (__thiscall **)(int *, int))(v15 + 244))(v6, v16); /*0x7101c5*/
      v17 = *v6; /*0x7101cb*/
      *((_BYTE *)v6 + 1718) = 1; /*0x7101cf*/
      (*(void (__thiscall **)(int *))(v17 + 976))(v6); /*0x7101d6*/
      v12 = *v10 == 0; /*0x7101e0*/
      v28.m_Data = 0; /*0x7101e2*/
      if ( !v12 ) /*0x7101e6*/
      {
        v18 = StreamClass::Set((StreamClass *)&v28.m_Data, v6 + 413); /*0x7101ed*/
        if ( v18 < 0 && v18 != -2147467262 ) /*0x7101fb*/
          WinAPI::Wrapper(v18); /*0x7101fe*/
      }
      ppv = 0; /*0x71020f*/
      InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&rclsid, 0, 7u); /*0x710213*/
      if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x710221*/
        WinAPI::Wrapper(InstanceCOM); /*0x710224*/
      if ( !ppv ) /*0x71022f*/
        WinAPI::Wrapper(-2147467261); /*0x710236*/
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)ppv + 12))(ppv, v6); /*0x710243*/
      v28.m_Position = 0; /*0x71024a*/
      if ( ppv ) /*0x710250*/
      {
        v20 = StreamClass::Set((StreamClass *)&v28.m_Position, &ppv); /*0x71025b*/
        if ( v20 < 0 && v20 != -2147467262 ) /*0x710269*/
          WinAPI::Wrapper(v20); /*0x71026c*/
      }
      COMObject::SwapReference((COMObject *)&v28.m_Data, v28.m_Position); /*0x71027a*/
      if ( v28.m_Position ) /*0x710285*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v28.m_Position + 8))(v28.m_Position); /*0x71028a*/
      if ( v28.m_Data )
      {
        m_Size = v28.m_Size; /*0x710297*/
        if ( *(_DWORD *)(v28.m_Size + 684) ) /*0x71029b*/
          TechnoClass::EjectPassengers((TechnoClass *)v28.m_Size, 0); /*0x7102a6*/
        if ( v6[171] ) /*0x7102ab*/
          TechnoClass::EjectPassengers((TechnoClass *)v6, 1); /*0x7102b7*/
        if ( !v28.m_Data ) /*0x7102c4*/
          WinAPI::Wrapper(-2147467261); /*0x7102cb*/
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v28.m_Data + 12))(v28.m_Data, *v10); /*0x7102d8*/
        v22 = *v10; /*0x7102db*/
        if ( *v10 != ppv ) /*0x7102e3*/
        {
          *v10 = ppv; /*0x7102e7*/
          SuperClass::SetFieldX((SuperClass *)(v6 + 413)); /*0x7102e9*/
          if ( v22 ) /*0x7102f0*/
            (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 8))(v22); /*0x7102f6*/
        }
        *(_DWORD *)(m_Size + 684) = (v6[5] & 1) != 0 ? v6 : 0;
        *((v6[5] & 1) != 0 ? v6 + 172 : (int *)688) = m_Size;
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(m_Size + 684) + 1152))( /*0x710326*/
          *(_DWORD *)(m_Size + 684),
          m_Size,
          1);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(m_Size + 684) + 336))(*(_DWORD *)(m_Size + 684)); /*0x710334*/
        v23 = (int *)v6[373]; /*0x71033a*/
        if ( v23 ) /*0x710342*/
          TeamClass::LiberateMember_Start(v23, (int)v6, 0xFFFFFFFF, 0); /*0x710349*/
        *((_BYTE *)v6 + 1709) = 1; /*0x710352*/
        Member = Team::GetMember((Team *)v6, 0); /*0x710359*/
        if ( Member && (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 ) /*0x71036c*/
          (*(void (__thiscall **)(int *, int))(*v6 + 640))(v6, 3); /*0x710374*/
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(m_Size + 684) + 488))(*(_DWORD *)(m_Size + 684), 5, 1); /*0x710386*/
        v25 = *(_DWORD **)(m_Size + 684); /*0x71038c*/
        if ( !*(_BYTE *)(v25[135] + 492) && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v25 + 132))(v25) + 1516) ) /*0x7103aa*/
        {
          v26 = *(_DWORD **)(m_Size + 684); /*0x7103b4*/
          if ( !*(_BYTE *)(*(_DWORD *)(v26[135] + 52) + 422) ) /*0x7103c3*/
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v26 + 488))(v26, 15, 0); /*0x7103d5*/
        }
      }
      if ( ppv ) /*0x7103e1*/
        (*(void (__stdcall **)(int))(*(_DWORD *)ppv + 8))(ppv); /*0x7103e6*/
      if ( v28.m_Data ) /*0x7103ef*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v28.m_Data + 8))(v28.m_Data); /*0x7103f4*/
    }
    if ( *(_DWORD *)v28.__pad_0 ) /*0x7103fd*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v28.__pad_0 + 8))(*(_DWORD *)v28.__pad_0); /*0x710402*/
  }
}



// ==== 0x00710410  ObjectClass::ClearPointerRefs  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::ClearPointerRefs(TechnoClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  if ( v2 == this->behindAnim ) /*0x71041f*/
    this->behindAnim = 0; /*0x710421*/
  if ( v2 == this->drainAnim ) /*0x71042d*/
    this->drainAnim = 0; /*0x71042f*/
  if ( v2 == this->mindControlRingAnim ) /*0x71043b*/
    this->mindControlRingAnim = 0; /*0x71043d*/
  if ( v2 == this->deployAnim ) /*0x71044c*/
    this->deployAnim = 0; /*0x71044e*/
  return ObjectClass::ResetPointerIfMatch(this); /*0x71045a*/
}



// ==== 0x00710460  TechnoClass::FreeCaptureManager  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::FreeCaptureManager(TechnoClass *this)
{
  CaptureManagerClass *captureManager; // ecx
  int result; // eax

  captureManager = this->captureManager; /*0x710460*/
  if ( captureManager ) /*0x710468*/
    return CaptureManager::FreeAll((CaptureManager *)captureManager); /*0x71046a*/
  return result; /*0x71046f*/
}



// ==== 0x00710470  TechnoClass::EnteredOpenTopped  this=TechnoClass  sig=csp ====
char __stdcall TechnoClass::EnteredOpenTopped(int a1)
{
  int v1; // eax
  char result; // al

  if ( a1 ) /*0x710477*/
  {
    v1 = *(_DWORD *)a1; /*0x710479*/
    *(_BYTE *)(a1 + 130) = 1; /*0x71047d*/
    (*(void (__thiscall **)(int))(v1 + 976))(a1); /*0x710484*/
    return ObjectClass::SetDeployState(a1, 0); /*0x710492*/
  }
  return result; /*0x710497*/
}



// ==== 0x007104A0  TechnoClass::ExitedOpenTopped  this=ObjectClass  sig=csp ====
int __stdcall TechnoClass::ExitedOpenTopped(int a1)
{
  int result; // eax

  result = a1; /*0x7104a0*/
  if ( a1 ) /*0x7104a6*/
    *(_BYTE *)(a1 + 130) = 0; /*0x7104a8*/
  return result; /*0x7104af*/
}



// ==== 0x007104C0  TechnoClass::MarkPassengersAsExited  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::MarkPassengersAsExited(TechnoClass *this)
{
  int result; // eax

  result = CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x7104c6*/
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
int __thiscall FootClass::UpdatePassengerCoords(FootClass *this)
{
  int *location; // edi
  int DB; // esi
  int result; // eax
  _DWORD v4[3]; // [esp+8h] [ebp-Ch] BYREF

  location = this->?; /*0x710502*/
  DB = CCINIClass::GetDB((CCINIClass *)this->?); /*0x710508*/
  result = *location; /*0x71050c*/
  v4[0] = *location; /*0x71050e*/
  v4[1] = location[1]; /*0x710515*/
  v4[2] = location[2]; /*0x71051c*/
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



// ==== 0x00710550  CCINIClass::IterateNodes  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::IterateNodes(CCINIClass *this, int a2)
{
  int result; // eax
  int v3; // esi

  result = CCINIClass::GetDB((CCINIClass *)((char *)this + 276)); /*0x710558*/
  v3 = result; /*0x71055d*/
  if ( result ) /*0x710561*/
  {
    do /*0x71057d*/
    {
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 968))(v3, a2); /*0x71056c*/
      v3 = *(_DWORD *)(v3 + 48); /*0x710572*/
    }
    while ( v3 && (*(_BYTE *)(v3 + 20) & 4) != 0 ); /*0x71057d*/
  }
  return result; /*0x71057f*/
}



// ==== 0x007105E0  BuildingClass::IsBeingRepairedOrCaptured  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsBeingRepairedOrCaptured(BuildingClass *this)
{
  return this->? || this->?; /*0x7105f6*/
}



// ==== 0x00710670  TechnoClass::OnCellPlacementComplete  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::OnCellPlacementComplete(TechnoClass *this)
{
  int result; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v4; // eax
  _DWORD v5[3]; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v6; // [esp+18h] [ebp+4h]

  CellClass::AddObject((CellClass *)this->passengers, v6); /*0x710682*/
  if ( v6 ) /*0x710689*/
  {
    result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x71068f*/
    if ( *(_DWORD *)(result + 1380) != -1 ) /*0x71069c*/
    {
      v5[0] = this->?[0]; /*0x7106ac*/
      vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x7106b0*/
      v5[1] = this->?[1]; /*0x7106b5*/
      v5[2] = this->?[2]; /*0x7106bc*/
      v4 = vtable0[33](this); /*0x7106c2*/
      return (int)PlayAudioAt2(*(_DWORD *)(v4 + 1380), v5, 0); /*0x7106d0*/
    }
  }
  return result; /*0x7106d5*/
}



// ==== 0x007106E0  TechnoClass::ScalarDtor  this=TechnoClass  sig=csp ====
void *__thiscall TechnoClass::ScalarDtor(TechnoClass *this, char a2)
{
  TechnoClass::DTOR((int)this); /*0x7106e3*/
  if ( (a2 & 1) != 0 ) /*0x7106ed*/
    __3_YAXPAX_Z(this); /*0x7106f0*/
  return this; /*0x7106fa*/
}



// ==== 0x00710700  Coord::Divide  this=Coord  sig=csp ====
int *__thiscall Coord::Divide(Coord *this, int *a2, int a3)
{
  int v4; // ebx
  int v5; // eax

  if ( a3 ) /*0x710708*/
  {
    v4 = *(_DWORD *)&this->Coord_field_0x2[2] / a3; /*0x71072f*/
    v5 = (int)this->Coord_field_0x8 / a3; /*0x710735*/
    *a2 = *(_DWORD *)this->__pad_0 / a3; /*0x71073d*/
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
int __thiscall SortedStateVector::BinarySearch(SortedStateVector *this, int *a2)
{
  int result; // eax
  SortedStateVector v4; // edi
  int v5; // ebx
  int v6; // ecx
  int v7; // esi

  result = *((_DWORD *)this + 1); /*0x7107e3*/
  if ( result ) /*0x7107e8*/
  {
    if ( !*((_BYTE *)this + 12) ) /*0x7107ee*/
    {
      qsort(*(void **)this, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_710860); /*0x710800*/
      *((_DWORD *)this + 4) = 0; /*0x710808*/
      *((_BYTE *)this + 12) = 1; /*0x71080f*/
    }
    v4 = *this; /*0x710819*/
    v5 = *a2; /*0x71081b*/
    v6 = *((_DWORD *)this + 1); /*0x71081d*/
    if ( v6 <= 0 ) /*0x710822*/
      return 0; /*0x71084e*/
    while ( 1 ) /*0x71082b*/
    {
      v7 = *(_DWORD *)(*(_DWORD *)&v4 + 8 * (v6 / 2)); /*0x71082b*/
      if ( v7 <= v5 ) /*0x710833*/
      {
        if ( v7 == v5 ) /*0x710839*/
          return *(_DWORD *)&v4 + 8 * (v6 / 2); /*0x710853*/
        *(_DWORD *)&v4 += 8 * (v6 / 2) + 8; /*0x71083b*/
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
  dbl_B0EB60 = Math::Sqrt(v0 + v0); /*0x7108fe*/
}



// ==== 0x00710910  sub_710910  this=-  sig=ida-proto ====
void sub_710910()
{
  dbl_B0EBB0 = dbl_B0EB60 / 60.0; /*0x71091c*/
}



// ==== 0x00710930  sub_710930  this=-  sig=ida-proto ====
void sub_710930()
{
  dbl_B0EB98 = 1.0 / dbl_B0EBB0; /*0x71093c*/
}



// ==== 0x00710950  sub_710950  this=-  sig=ida-proto ====
void sub_710950()
{
  dbl_B0EB90 = 0.0174532925199433 * 45.0; /*0x71095c*/
}



// ==== 0x00710970  sub_710970  this=-  sig=ida-proto ====
void sub_710970()
{
  dbl_B0EB68 = 0.0174532925199433 * 60.0; /*0x71097c*/
}



// ==== 0x00710990  sub_710990  this=-  sig=ida-proto ====
void sub_710990()
{
  dbl_B0EB40 = 0.0174532925199433 * 90.0; /*0x71099c*/
}



// ==== 0x007109B0  sub_7109B0  this=-  sig=ida-proto ====
__int64 sub_7109B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0EB40 - dbl_B0EB68); /*0x7109c2*/
  result = Math::RoundToInt(v0 * dbl_B0EB60 * 0.5); /*0x7109d6*/
  dword_B0EBB8 = result; /*0x7109db*/
  return result; /*0x7109e0*/
}



// ==== 0x007109F0  sub_7109F0  this=-  sig=ida-proto ====
void sub_7109F0()
{
  dbl_B0EB70 = Math::ArcTan((double)dword_B0EBB8 * 0.00390625); /*0x710a07*/
}



// ==== 0x00710A20  sub_710A20  this=-  sig=ida-proto ====
void sub_710A20()
{
  dbl_B0EB88 = Math::ArcTan((double)(2 * dword_B0EBB8) / dbl_B0EB60); /*0x710a42*/
}



// ==== 0x00710A50  sub_710A50  this=-  sig=ida-proto ====
__int64 sub_710A50()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0EBB8) + 0.5); /*0x710a6b*/
  dword_B0EBAC = result; /*0x710a70*/
  return result; /*0x710a76*/
}



// ==== 0x00710A80  sub_710A80  this=-  sig=ida-proto ====
int sub_710A80()
{
  word_B0EB58 = 0; /*0x710a82*/
  word_B0EB5A = 0; /*0x710a88*/
  return 0; /*0x710a8e*/
}



// ==== 0x00710A90  sub_710A90  this=-  sig=ida-proto ====
int sub_710A90()
{
  dword_B0EB78 = 0; /*0x710a92*/
  dword_B0EB7C = 0; /*0x710a97*/
  dword_B0EB80 = 0; /*0x710a9c*/
  return 0; /*0x710aa1*/
}



// ==== 0x00710AB0  sub_710AB0  this=-  sig=ida-proto ====
int sub_710AB0()
{
  dword_B0EBA8 = 0; /*0x710ab5*/
  dword_B0EBA0 = 128; /*0x710abf*/
  dword_B0EBA4 = 128; /*0x710ac4*/
  return 128; /*0x710ac9*/
}



// ==== 0x00710AD0  sub_710AD0  this=-  sig=ida-proto ====
int sub_710AD0()
{
  dword_B0EB48 = 0; /*0x710ad2*/
  dword_B0EB4C = 0; /*0x710ad7*/
  dword_B0EB50 = 0; /*0x710adc*/
  dword_B0EB54 = 0; /*0x710ae1*/
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
  this->u8_A5 = 1; /*0x710b02*/
  this->u8_A6 = 0; /*0x710b0e*/
  this->u8_A7 = 0; /*0x710b14*/
  this->ImageAllocated = 0; /*0x710b1c*/
  this->q0A9 = 0; /*0x710b28*/
  this->q0AA = 0; /*0x710b2f*/
  this->VoiceEnter = 0; /*0x710b36*/
  *(_DWORD *)(this + 686) = 0; /*0x710b3d*/
  *(_DWORD *)(this + 690) = 0; /*0x710b43*/
  *(_DWORD *)(this + 694) = 0; /*0x710b4b*/
  *(_DWORD *)(this + 698) = 0; /*0x710b51*/
  this->VoiceHarvest = 0; /*0x710b57*/
  this->MainVoxel = 0; /*0x710b5e*/
  this->u8_B1 = 0; /*0x710b64*/
  this->u8_B2 = 0; /*0x710b6a*/
  this->u8_B3 = 0; /*0x710b70*/
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
  this->q304 = 1063281229; /*0x710bc6*/
  this->AccelerationFactor = -343597384; /*0x710bd0*/
  this->q0C3 = 1067366481; /*0x710bda*/
  this->u32_C4 = 7; /*0x710be4*/
  VoxelAnimTypeVector::Constructor(0, 0); /*0x710bee*/
  this->q324 = 0; /*0x710bf8*/
  this->q328 = 10; /*0x710bfb*/
  this->DebrisTypes = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x710bfe*/
  VectorClass::Construct((_DWORD *)this + 204, 0, 0); /*0x710c0f*/
  this->q344 = 10; /*0x710c14*/
  this->q0D0 = 0; /*0x710c17*/
  this->q0CC = &TypeList<int>::`vftable'; /*0x710c1a*/
  this->Locomotor = 1247291207; /*0x710c2d*/
  this->u32_D4 = 298948665; /*0x710c39*/
  this->q354 = -1610610249; /*0x710c42*/
  this->q358 = -777003740; /*0x710c4b*/
  this->q0D8 = 0; /*0x710c4e*/
  this->q364 = 0; /*0x710c54*/
  this->unknown_double_368 = 0; /*0x710c5a*/
  this->q36C = 0; /*0x710c60*/
  this->u32_DC = 0; /*0x710c6b*/
  this->q374 = 1072693248; /*0x710c71*/
  this->PhysicalSize = 0; /*0x710c77*/
  this->u32_37C = 0x40000000; /*0x710c7d*/
  this->q0E0 = 0; /*0x710c87*/
  this->q384 = 1072693248; /*0x710c8d*/
  this->SizeLimit = 0; /*0x710c93*/
  this->q38C = 0; /*0x710c99*/
  this->HoverAttack = 0; /*0x710c9f*/
  this->VHPScan = 0; /*0x710ca5*/
  this->unknown_int_398 = 15; /*0x710cab*/
  this->q0E8 = 942502757; /*0x710cb5*/
  this->u32_3A4 = 1071694162; /*0x710cbf*/
  this->PitchSpeed = 0; /*0x710cc9*/
  this->q3AC = 1070596096; /*0x710ccf*/
  this->q0EC = 1256670343; /*0x710cd9*/
  this->u32_3B4 = 1071011608; /*0x710ce3*/
  this->BuildLimit = 0x7FFFFFFF; /*0x710cf0*/
  this->Category = -1; /*0x710cfa*/
  this->q0F0 = 0; /*0x710d00*/
  this->u8_F2 = 0; /*0x710d06*/
  this->u8_F3 = 0; /*0x710d0c*/
  this->q0F4 = 8; /*0x710d12*/
  this->u8_F5 = 0; /*0x710d1c*/
  this->PipsDrawForAll = 0; /*0x710d22*/
  this->q0F7 = 70; /*0x710d28*/
  this->q0F8 = 0; /*0x710d33*/
  this->q0F9 = 0; /*0x710d40*/
  VectorClass::BuildingTypeConstructor((_DWORD *)this + 250, 0, 0); /*0x710d46*/
  this->u32_3FC = 10; /*0x710d4b*/
  this->u32_3F8 = 0; /*0x710d51*/
  this->Dock = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x710d57*/
  this->DeploysInto = 0; /*0x710d61*/
  this->UndeploysInto = 0; /*0x710d67*/
  this->PowersUnit = 0; /*0x710d6e*/
  this->PoweredUnit = 0; /*0x710d7b*/
  VectorClass::Construct((_DWORD *)this + 261, 0, 0); /*0x710d81*/
  this->q428 = 10; /*0x710d8e*/
  this->ptr_424 = 0; /*0x710d94*/
  this->VoiceSelect = &TypeList<int>::`vftable'; /*0x710d9a*/
  VectorClass::Construct((_DWORD *)this + 268, 0, 0); /*0x710da4*/
  this->q111 = 10; /*0x710db1*/
  this->q110 = 0; /*0x710db7*/
  this->q10C = &TypeList<int>::`vftable'; /*0x710dbd*/
  VectorClass::Construct((_DWORD *)this + 275, 0, 0); /*0x710dc7*/
  this->q118 = 10; /*0x710dd4*/
  this->q45C = 0; /*0x710dda*/
  this->VoiceSelectDeactivated = &TypeList<int>::`vftable'; /*0x710de0*/
  VectorClass::Construct((_DWORD *)this + 282, 0, 0); /*0x710dea*/
  this->u32_47C = 10; /*0x710df7*/
  this->q478 = 0; /*0x710dfd*/
  this->VoiceMove = &TypeList<int>::`vftable'; /*0x710e03*/
  VectorClass::Construct((_DWORD *)this + 289, 0, 0); /*0x710e0d*/
  this->q498 = 10; /*0x710e1a*/
  this->ptr_494 = 0; /*0x710e20*/
  this->VoiceAttack = &TypeList<int>::`vftable'; /*0x710e26*/
  VectorClass::Construct((_DWORD *)this + 296, 0, 0); /*0x710e30*/
  this->q4B4 = 10; /*0x710e3d*/
  this->q12C = 0; /*0x710e43*/
  this->q128 = &TypeList<int>::`vftable'; /*0x710e49*/
  VectorClass::Construct((_DWORD *)this + 303, 0, 0); /*0x710e53*/
  this->q134 = 10; /*0x710e58*/
  this->q4CC = 0; /*0x710e5e*/
  this->VoiceDie = &TypeList<int>::`vftable'; /*0x710e6c*/
  VectorClass::Construct((_DWORD *)this + 310, 0, 0); /*0x710e76*/
  this->u32_4EC = 10; /*0x710e83*/
  this->u32_4E8 = 0; /*0x710e89*/
  this->VoiceFeedback = &TypeList<int>::`vftable'; /*0x710e8f*/
  VectorClass::Construct((_DWORD *)this + 317, 0, 0); /*0x710e99*/
  this->q508 = 10; /*0x710ea6*/
  this->q504 = 0; /*0x710eac*/
  this->MoveSound = &TypeList<int>::`vftable'; /*0x710eb2*/
  VectorClass::Construct((_DWORD *)this + 324, 0, 0); /*0x710ebc*/
  this->q524 = 10; /*0x710ec1*/
  this->q148 = 0; /*0x710ec7*/
  this->q144 = &TypeList<int>::`vftable'; /*0x710ecd*/
  this->AuxSound1 = -1; /*0x710ed7*/
  this->NoSpawnAlt = -1; /*0x710edd*/
  this->q14D = -1; /*0x710ee3*/
  this->DamageSound = -1; /*0x710ee9*/
  this->ImpactWaterSound = -1; /*0x710eef*/
  this->q150 = -1; /*0x710ef5*/
  this->CrashingSound = -1; /*0x710efb*/
  this->SinkingSound = -1; /*0x710f01*/
  this->VoiceFalling = -1; /*0x710f07*/
  this->q154 = -1; /*0x710f0d*/
  this->VoiceSinking = -1; /*0x710f13*/
  this->VoiceEnter = -1; /*0x710f19*/
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
  this->EnterGrinderSound = -1; /*0x710f81*/
  this->LeaveGrinderSound = -1; /*0x710f87*/
  this->q168 = -1; /*0x710f8d*/
  this->LeaveBioReactorSound = -1; /*0x710f93*/
  this->ActivateSound = -1; /*0x710f99*/
  this->q16B = -1; /*0x710f9f*/
  this->q16C = -1; /*0x710fa5*/
  this->q16D = 0; /*0x710fab*/
  this->GuardRange = 0; /*0x710fb1*/
  this->q16F = 0; /*0x710fb7*/
  this->q170 = 0; /*0x710fbd*/
  AnimTypeVector::Constructor((_DWORD *)this + 369, 0, 0); /*0x710fc3*/
  this->q5D8 = 10; /*0x710fc8*/
  this->q5D4 = 0; /*0x710fce*/
  this->DebrisAnims = &TypeList<AnimTypeClass const *>::`vftable'; /*0x710fd4*/
  this->q178 = 0; /*0x710fde*/
  this->OpenTopped = 0; /*0x710fe4*/
  this->Sight = 0; /*0x710fea*/
  this->ResourceGatherer = 0; /*0x710ff0*/
  this->ResourceDestination = 0; /*0x710ff6*/
  this->RevealToAll = 0; /*0x710ffc*/
  this->Drainable = 0; /*0x711002*/
  this->q17C = 0; /*0x711008*/
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
  this->q18C = 0; /*0x711075*/
  this->TechLevel = 255; /*0x711082*/
  VectorClass::Construct((_DWORD *)this + 398, 0, 0); /*0x71108c*/
  this->q64C = 10; /*0x711099*/
  this->q648 = 0; /*0x71109f*/
  this->Prerequisite = &TypeList<int>::`vftable'; /*0x7110a5*/
  VectorClass::Construct((_DWORD *)this + 405, 0, 0); /*0x7110af*/
  this->VeteranAbilities = 10; /*0x7110b8*/
  this->q199 = 0; /*0x7110be*/
  this->PrerequisiteOverride = &TypeList<int>::`vftable'; /*0x7110c4*/
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
  if ( &g_INI_DefaultBuffer ) /*0x7111b9*/
  {
    strncpy(this + 1750, &g_INI_DefaultBuffer, 0x18u); /*0x7111c7*/
    this->q6EE = 0; /*0x7111cf*/
  }
  else
  {
    this->CameoFile = 0; /*0x7111bb*/
  }
  this->u32_1BC = 0; /*0x7111da*/
  this->CameoAllocated = 0; /*0x7111e2*/
  if ( &g_INI_DefaultBuffer ) /*0x7111ee*/
  {
    strncpy(this + 1781, &g_INI_DefaultBuffer, 0x18u); /*0x7111fc*/
    this->q70D = 0; /*0x711204*/
  }
  else
  {
    this->AltCameoFile = 0; /*0x7111f0*/
  }
  this->u32_1C4 = 0; /*0x71120a*/
  this->AltCameoAllocated = 0; /*0x711210*/
  this->RotCount = 0; /*0x711216*/
  this->ROT = 0; /*0x71121c*/
  this->u32_1C8 = 0; /*0x711222*/
  this->CanBeHidden = 1; /*0x711229*/
  this->Points2 = 0; /*0x711237*/
  AnimTypeVector::Constructor((_DWORD *)this + 459, 0, 0); /*0x71123d*/
  this->u32_1D0 = 10; /*0x71124a*/
  this->u32_73C = 0; /*0x711250*/
  this->Explosion = &TypeList<AnimTypeClass const *>::`vftable'; /*0x711256*/
  AnimTypeVector::Constructor((_DWORD *)this + 466, 0, 0); /*0x711260*/
  this->q75C = 10; /*0x711265*/
  this->ptr_758 = 0; /*0x71126b*/
  this->DestroyAnim = &TypeList<AnimTypeClass const *>::`vftable'; /*0x711271*/
  this->NaturalParticleSystem = 0; /*0x71127b*/
  this->NaturalParticleSystemLocation = 0; /*0x711282*/
  this->u32_76C = 0; /*0x711288*/
  this->u32_1DC = 0; /*0x71128e*/
  this->RefinerySmokeParticleSystem = 0; /*0x71129b*/
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112a1*/
  this->q78C = 10; /*0x7112ae*/
  this->VoxelAnimList_Embed = 0; /*0x7112b4*/
  this->DamageParticleSystems = &TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x7112ba*/
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112c4*/
  this->q7A8 = 10; /*0x7112c9*/
  this->q1E9 = 0; /*0x7112cf*/
  this->DestroyParticleSystems = &TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x7112d5*/
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
  this->q32C = 1; /*0x71142a*/
  this->unknown_bool_CB4 = 0; /*0x711430*/
  this->BarrelAnimData = 2; /*0x711436*/
  this->u32_CBC = 1; /*0x71143c*/
  this->DebrisMaximums = 1; /*0x711442*/
  this->u32_CC4 = 1; /*0x711448*/
  this->unknown_bool_CC8 = 0; /*0x71144e*/
  this->qCCC = 1; /*0x711454*/
  this->qCCD = 0; /*0x71145a*/
  this->qCCE = 0; /*0x711460*/
  this->u32_CCF = 0; /*0x711466*/
  this->IntList_A_Items = 0; /*0x71146c*/
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
  this->u32_350 = 0; /*0x71155a*/
  this->JumpjetTurnRate = 0; /*0x711560*/
  this->JumpjetSpeed = 0; /*0x711566*/
  this->JumpjetClimb = 0; /*0x71156c*/
  this->q354 = -1; /*0x711572*/
  this->qD54 = 0; /*0x711578*/
  this->JumpjetAccel = 0; /*0x71157e*/
  this->JumpjetWobbles = 0; /*0x711584*/
  this->q358 = 0; /*0x71158a*/
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
  this->vtable4 = &TechnoTypeClass::`vftable'; /*0x71169a*/
  this->qDD0 = 0; /*0x7116a7*/
  this->q234 = 1; /*0x7116ad*/
  (*(void (__thiscall **)(char *))(this->DebrisTypes + 12))(this + 788); /*0x7116b6*/
  (*(void (__thiscall **)(char *))(this->DebrisAnims + 12))(this + 1476); /*0x7116c5*/
  (*(void (__thiscall **)(char *))(this->q0CC + 12))(this + 816); /*0x7116d4*/
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
  this->q36C = 0; /*0x711763*/
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
  if ( dword_B0F680 < dword_B0F678 /*0x7117c3*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F684 + dword_B0F678,
         0) )
  {
    v15 = dword_B0F680++; /*0x7117d0*/
    *((_DWORD *)dword_B0F674 + v15) = this; /*0x7117df*/
  }
  if ( dword_A8EB10 < dword_A8EB08 /*0x711816*/
    || (byte_A8EB0D || !dword_A8EB08)
    && dword_A8EB14 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_A8EB00 + 8))(
         &stru_A8EB00,
         dword_A8EB14 + dword_A8EB08,
         0) )
  {
    v16 = dword_A8EB10++; /*0x711823*/
    *((_DWORD *)dword_A8EB04 + v16) = this; /*0x711832*/
  }
  return this; /*0x711837*/
}



// ==== 0x00711840  TechnoTypeClass::Construct  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoTypeClass_Constructor(int this, int a2)
{
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // edx

  ObjectTypeClass::Construct((_DWORD *)this, a2); /*0x71184b*/
  TechnoTypeClass::Constructor_0(a2); /*0x711859*/
  *(_DWORD *)(this + 788) = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x71185e*/
  IntDynamicVector::Construct((_DWORD *)(this + 816), a2); /*0x71186d*/
  *(_DWORD *)(this + 816) = &TypeList<int>::`vftable'; /*0x711872*/
  *(_DWORD *)(this + 960) = 0; /*0x711883*/
  TechnoTypeClass::Constructor_1(a2); /*0x711889*/
  *(_DWORD *)(this + 1000) = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x71188e*/
  IntDynamicVector::Construct((_DWORD *)(this + 1044), a2); /*0x71189e*/
  *(_DWORD *)(this + 1044) = &TypeList<int>::`vftable'; /*0x7118a3*/
  IntDynamicVector::Construct((_DWORD *)(this + 1072), a2); /*0x7118b3*/
  *(_DWORD *)(this + 1072) = &TypeList<int>::`vftable'; /*0x7118b8*/
  IntDynamicVector::Construct((_DWORD *)(this + 1100), a2); /*0x7118c8*/
  *(_DWORD *)(this + 1100) = &TypeList<int>::`vftable'; /*0x7118cd*/
  IntDynamicVector::Construct((_DWORD *)(this + 1128), a2); /*0x7118dd*/
  *(_DWORD *)(this + 1128) = &TypeList<int>::`vftable'; /*0x7118e2*/
  IntDynamicVector::Construct((_DWORD *)(this + 1156), a2); /*0x7118f2*/
  *(_DWORD *)(this + 1156) = &TypeList<int>::`vftable'; /*0x7118f7*/
  IntDynamicVector::Construct((_DWORD *)(this + 1184), a2); /*0x711907*/
  *(_DWORD *)(this + 1184) = &TypeList<int>::`vftable'; /*0x71190c*/
  IntDynamicVector::Construct((_DWORD *)(this + 1212), a2); /*0x71191c*/
  *(_DWORD *)(this + 1212) = &TypeList<int>::`vftable'; /*0x711921*/
  IntDynamicVector::Construct((_DWORD *)(this + 1240), a2); /*0x711931*/
  *(_DWORD *)(this + 1240) = &TypeList<int>::`vftable'; /*0x711936*/
  IntDynamicVector::Construct((_DWORD *)(this + 1268), a2); /*0x711946*/
  *(_DWORD *)(this + 1268) = &TypeList<int>::`vftable'; /*0x71194b*/
  IntDynamicVector::Construct((_DWORD *)(this + 1296), a2); /*0x71195b*/
  *(_DWORD *)(this + 1296) = &TypeList<int>::`vftable'; /*0x711960*/
  ObjectTypeClass::CheckFlag(a2); /*0x711970*/
  *(_DWORD *)(this + 1476) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x711975*/
  IntDynamicVector::Construct((_DWORD *)(this + 1592), a2); /*0x711985*/
  *(_DWORD *)(this + 1592) = &TypeList<int>::`vftable'; /*0x71198a*/
  IntDynamicVector::Construct((_DWORD *)(this + 1620), a2); /*0x71199a*/
  *(_DWORD *)(this + 1620) = &TypeList<int>::`vftable'; /*0x71199f*/
  *(_BYTE *)(this + 1750) = 0; /*0x7119ac*/
  *(_BYTE *)(this + 1781) = 0; /*0x7119b5*/
  ObjectTypeClass::CheckFlag(a2); /*0x7119bb*/
  *(_DWORD *)(this + 1836) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x7119c0*/
  ObjectTypeClass::CheckFlag(a2); /*0x7119d0*/
  *(_DWORD *)(this + 1864) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x7119df*/
  TypeList::ParticleConstructor(0, 0); /*0x7119e6*/
  *(_DWORD *)(this + 1912) = &TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x7119eb*/
  TypeList::ParticleConstructor(0, 0); /*0x7119fb*/
  *(_DWORD *)(this + 1940) = &TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x711a0a*/
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
  *(_DWORD *)(this + 12) = &TechnoTypeClass::`vftable'; /*0x711a60*/
  v3 = dword_A8EB10; /*0x711a67*/
  v4 = 0; /*0x711a6c*/
  if ( dword_A8EB10 <= 0 ) /*0x711a70*/
  {
LABEL_5:
    if ( dword_A8EB10 >= dword_A8EB08 ) /*0x711a8c*/
    {
      if ( !byte_A8EB0D && dword_A8EB08 /*0x711ab1*/
        || dword_A8EB14 <= 0
        || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_A8EB00 + 8))(
              &stru_A8EB00,
              dword_A8EB14 + dword_A8EB08,
              0) )
      {
        return this; /*0x711ab6*/
      }
      v3 = dword_A8EB10; /*0x711ab8*/
    }
    dword_A8EB10 = v3 + 1; /*0x711ac6*/
    *((_DWORD *)dword_A8EB04 + v3) = this; /*0x711acb*/
    return this; /*0x711acb*/
  }
  v5 = dword_A8EB04; /*0x711a72*/
  while ( *v5 != this ) /*0x711a7a*/
  {
    ++v4; /*0x711a7c*/
    ++v5; /*0x711a7d*/
    if ( v4 >= dword_A8EB10 ) /*0x711a82*/
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
  *(_DWORD *)(this + 12) = &TechnoTypeClass::`vftable'; /*0x711b03*/
  if ( v2 && *(_DWORD *)(this + 1776) ) /*0x711b0c*/
  {
    __3_YAXPAX_Z(*(void **)(this + 1776)); /*0x711b17*/
    *(_DWORD *)(this + 1776) = 0; /*0x711b1f*/
    *(_BYTE *)(this + 1780) = 0; /*0x711b25*/
  }
  if ( *(_BYTE *)(this + 1812) && *(_DWORD *)(this + 1808) ) /*0x711b33*/
  {
    __3_YAXPAX_Z(*(void **)(this + 1808)); /*0x711b3e*/
    *(_DWORD *)(this + 1808) = 0; /*0x711b46*/
    *(_BYTE *)(this + 1812) = 0; /*0x711b4c*/
  }
  v17 = this; /*0x711b62*/
  v3 = (*(int (__thiscall **)(int *, int *))(dword_B0F670 + 16))(&dword_B0F670, &v17); /*0x711b66*/
  if ( v3 != -1 ) /*0x711b6c*/
    DynamicVector::RemoveItem(&dword_B0F670, v3); /*0x711b74*/
  v17 = this; /*0x711b89*/
  v4 = (*(int (__thiscall **)(int *, int *))(stru_A8EB00 + 16))(&stru_A8EB00, &v17); /*0x711b8d*/
  if ( v4 != -1 ) /*0x711b93*/
    TechnoTypeClass::RemoveItem(&stru_A8EB00, v4); /*0x711b9b*/
  *(_DWORD *)(this + 1940) = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x711ba7*/
  VectorClass::Cleanup(this + 1940); /*0x711bad*/
  *(_DWORD *)(this + 1912) = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x711bb8*/
  VectorClass::Cleanup(this + 1912); /*0x711bbe*/
  *(_DWORD *)(this + 1864) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x711bc9*/
  DynamicVectorClass::Destroy_Alt(this + 1864); /*0x711bcf*/
  *(_DWORD *)(this + 1836) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x711bda*/
  DynamicVectorClass::Destroy_Alt(this + 1836); /*0x711be0*/
  *(_DWORD *)(this + 1620) = &VectorClass<int>::`vftable'; /*0x711bf0*/
  VectorClass::Destroy(this + 1620); /*0x711bf2*/
  *(_DWORD *)(this + 1592) = &VectorClass<int>::`vftable'; /*0x711bfd*/
  VectorClass::Destroy(this + 1592); /*0x711bff*/
  *(_DWORD *)(this + 1476) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x711c0a*/
  DynamicVectorClass::Destroy_Alt(this + 1476); /*0x711c10*/
  *(_DWORD *)(this + 1296) = &VectorClass<int>::`vftable'; /*0x711c1b*/
  VectorClass::Destroy(this + 1296); /*0x711c1d*/
  *(_DWORD *)(this + 1268) = &VectorClass<int>::`vftable'; /*0x711c28*/
  VectorClass::Destroy(this + 1268); /*0x711c2a*/
  v5 = *(void **)(this + 1244); /*0x711c2f*/
  *(_DWORD *)(this + 1240) = &VectorClass<int>::`vftable'; /*0x711c35*/
  if ( v5 && *(_BYTE *)(this + 1253) ) /*0x711c3f*/
  {
    __3_YAXPAX_Z(v5); /*0x711c48*/
    *(_DWORD *)(this + 1244) = 0; /*0x711c50*/
  }
  *(_BYTE *)(this + 1253) = 0; /*0x711c56*/
  *(_DWORD *)(this + 1248) = 0; /*0x711c5c*/
  v6 = *(void **)(this + 1216); /*0x711c62*/
  *(_DWORD *)(this + 1212) = &VectorClass<int>::`vftable'; /*0x711c68*/
  if ( v6 && *(_BYTE *)(this + 1225) ) /*0x711c72*/
  {
    __3_YAXPAX_Z(v6); /*0x711c7b*/
    *(_DWORD *)(this + 1216) = 0; /*0x711c83*/
  }
  *(_BYTE *)(this + 1225) = 0; /*0x711c89*/
  *(_DWORD *)(this + 1220) = 0; /*0x711c8f*/
  v7 = *(void **)(this + 1188); /*0x711c95*/
  *(_DWORD *)(this + 1184) = &VectorClass<int>::`vftable'; /*0x711c9b*/
  if ( v7 && *(_BYTE *)(this + 1197) ) /*0x711ca5*/
  {
    __3_YAXPAX_Z(v7); /*0x711cae*/
    *(_DWORD *)(this + 1188) = 0; /*0x711cb6*/
  }
  *(_BYTE *)(this + 1197) = 0; /*0x711cbc*/
  *(_DWORD *)(this + 1192) = 0; /*0x711cc2*/
  v8 = *(void **)(this + 1160); /*0x711cc8*/
  *(_DWORD *)(this + 1156) = &VectorClass<int>::`vftable'; /*0x711cce*/
  if ( v8 && *(_BYTE *)(this + 1169) ) /*0x711cd8*/
  {
    __3_YAXPAX_Z(v8); /*0x711ce1*/
    *(_DWORD *)(this + 1160) = 0; /*0x711ce9*/
  }
  *(_BYTE *)(this + 1169) = 0; /*0x711cef*/
  *(_DWORD *)(this + 1164) = 0; /*0x711cf5*/
  v9 = *(void **)(this + 1132); /*0x711cfb*/
  *(_DWORD *)(this + 1128) = &VectorClass<int>::`vftable'; /*0x711d01*/
  if ( v9 && *(_BYTE *)(this + 1141) ) /*0x711d0b*/
  {
    __3_YAXPAX_Z(v9); /*0x711d14*/
    *(_DWORD *)(this + 1132) = 0; /*0x711d1c*/
  }
  *(_BYTE *)(this + 1141) = 0; /*0x711d22*/
  *(_DWORD *)(this + 1136) = 0; /*0x711d28*/
  v10 = *(void **)(this + 1104); /*0x711d2e*/
  *(_DWORD *)(this + 1100) = &VectorClass<int>::`vftable'; /*0x711d34*/
  if ( v10 && *(_BYTE *)(this + 1113) ) /*0x711d3e*/
  {
    __3_YAXPAX_Z(v10); /*0x711d47*/
    *(_DWORD *)(this + 1104) = 0; /*0x711d4f*/
  }
  *(_BYTE *)(this + 1113) = 0; /*0x711d55*/
  *(_DWORD *)(this + 1108) = 0; /*0x711d5b*/
  v11 = *(void **)(this + 1076); /*0x711d61*/
  *(_DWORD *)(this + 1072) = &VectorClass<int>::`vftable'; /*0x711d67*/
  if ( v11 && *(_BYTE *)(this + 1085) ) /*0x711d71*/
  {
    __3_YAXPAX_Z(v11); /*0x711d7a*/
    *(_DWORD *)(this + 1076) = 0; /*0x711d82*/
  }
  *(_BYTE *)(this + 1085) = 0; /*0x711d88*/
  *(_DWORD *)(this + 1080) = 0; /*0x711d8e*/
  v12 = *(void **)(this + 1048); /*0x711d94*/
  *(_DWORD *)(this + 1044) = &VectorClass<int>::`vftable'; /*0x711d9a*/
  if ( v12 && *(_BYTE *)(this + 1057) ) /*0x711da4*/
  {
    __3_YAXPAX_Z(v12); /*0x711dad*/
    *(_DWORD *)(this + 1048) = 0; /*0x711db5*/
  }
  *(_BYTE *)(this + 1057) = 0; /*0x711dbb*/
  *(_DWORD *)(this + 1052) = 0; /*0x711dc1*/
  v13 = *(void **)(this + 1004); /*0x711dc7*/
  *(_DWORD *)(this + 1000) = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x711dcd*/
  if ( v13 && *(_BYTE *)(this + 1013) ) /*0x711ddb*/
  {
    __3_YAXPAX_Z(v13); /*0x711de4*/
    *(_DWORD *)(this + 1004) = 0; /*0x711dec*/
  }
  *(_BYTE *)(this + 1013) = 0; /*0x711df2*/
  *(_DWORD *)(this + 1008) = 0; /*0x711df8*/
  v14 = *(void **)(this + 820); /*0x711dfe*/
  *(_DWORD *)(this + 816) = &VectorClass<int>::`vftable'; /*0x711e04*/
  if ( v14 && *(_BYTE *)(this + 829) ) /*0x711e0f*/
  {
    __3_YAXPAX_Z(v14); /*0x711e18*/
    *(_DWORD *)(this + 820) = 0; /*0x711e20*/
  }
  *(_BYTE *)(this + 829) = 0; /*0x711e26*/
  *(_DWORD *)(this + 824) = 0; /*0x711e2c*/
  v15 = *(void **)(this + 792); /*0x711e32*/
  *(_DWORD *)(this + 788) = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x711e38*/
  if ( v15 && *(_BYTE *)(this + 801) ) /*0x711e46*/
  {
    __3_YAXPAX_Z(v15); /*0x711e4f*/
    *(_DWORD *)(this + 792) = 0; /*0x711e57*/
  }
  *(_BYTE *)(this + 801) = 0; /*0x711e5f*/
  *(_DWORD *)(this + 796) = 0; /*0x711e65*/
  return ObjectTypeClass::Destruct(this); /*0x711e70*/
}



// ==== 0x00711E80  TechnoTypeClass::processWeaponFire  this=TechnoTypeClass  sig=csp ====
char __thiscall AbstractClass::processWeaponFire(TechnoTypeClass *this)
{
  return 1; /*0x711e82*/
}



// ==== 0x00711E90  TechnoTypeClass::CanAttackMove_IgnoreWeapon  this=TechnoTypeClass  sig=csp ====
bool __thiscall TechnoTypeClass::CanAttackMove_IgnoreWeapon(TechnoTypeClass *this)
{
  return *(_DWORD *)&this->?[1972] && !this->?[1508]; /*0x711ea6*/
}



// ==== 0x00711EB0  TechnoTypeClass::GetMember388  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoClass::GetMember388(TechnoTypeClass *this)
{
  return *(_DWORD *)&this->?[1324]; /*0x711eb6*/
}



// ==== 0x00711EC0  TechnoTypeClass::GetBuildCost  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoClass::GetBuildCost(TechnoTypeClass *this)
{
  int result; // eax

  if ( !this->?[2997] ) /*0x711ec0*/
    return *(_DWORD *)&this->?[1512]; /*0x711ec0*/
  result = 0x7FFFFFFF; /*0x711ed1*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x711ed6*/
    return *(_DWORD *)&this->?[1512]; /*0x711ed8*/
  return result; /*0x711ede*/
}



// ==== 0x00711EE0  TechnoTypeClass::ComputeBuildTime  this=TechnoTypeClass  sig=csp ====
double __thiscall TechnoTypeClass::ComputeBuildTime(TechnoTypeClass *this)
{
  double result; // st7

  result = (double)*(int *)&this->?[1324] * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5960) * 0.9; /*0x711ef1*/
  Math::RoundToInt(result); /*0x711ef7*/
  return result;
}



// ==== 0x00711F00  TechnoTypeClass::ComputeValueSimple  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoTypeClass::ComputeValueSimple(TechnoTypeClass *this, int a2)
{
  int result; // eax
  float ThreatMultiplier; // [esp+8h] [ebp-8h]
  float v5; // [esp+Ch] [ebp-4h]
  TechnoTypeClass *v6; // [esp+14h] [ebp+4h]

  if ( !a2 ) /*0x711f0d*/
    return (*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x711f52*/
  v5 = TechnoTypeClass::Dispatch((TechnoTypeClass *)a2, this); /*0x711f17*/
  ThreatMultiplier = TechnoTypeClass::GetThreatMultiplier((float *)a2, this); /*0x711f27*/
  v6 = (TechnoTypeClass *)(*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x711f31*/
  LOWORD(result) = Math::RoundToInt((double)(int)v6 * ThreatMultiplier * v5); /*0x711f41*/
  return result; /*0x711f46*/
}



// ==== 0x00711F60  TechnoTypeClass::ComputeValue  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoTypeClass::ComputeValue(TechnoTypeClass *this, void *a2, float a3)
{
  int result; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  float v9; // [esp+8h] [ebp-8h]
  float ThreatMultiplier; // [esp+Ch] [ebp-4h]
  TechnoTypeClass *v11; // [esp+14h] [ebp+4h]
  float v12; // [esp+18h] [ebp+8h]
  int v13; // [esp+18h] [ebp+8h]
  int v14; // [esp+18h] [ebp+8h]

  v9 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5944); /*0x711f76*/
  if ( LOBYTE(a3) ) /*0x711f7c*/
    v9 = 1.0; /*0x711f7e*/
  if ( a2 ) /*0x711f8c*/
  {
    v12 = TechnoTypeClass::Dispatch((TechnoTypeClass *)a2, this); /*0x711f9a*/
    ThreatMultiplier = TechnoTypeClass::GetThreatMultiplier((float *)a2, this); /*0x711fac*/
    if ( *(_DWORD *)&this->?[1328] ) /*0x711fa6*/
    {
      LOWORD(result) = Math::RoundToInt((double)*(int *)&this->?[1328] * v12); /*0x711fc0*/
    }
    else
    {
      v11 = (TechnoTypeClass *)(*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x711fd7*/
      LOWORD(v6) = Math::RoundToInt((double)(int)v11 * ThreatMultiplier * v12); /*0x711fe7*/
      v7 = v6; /*0x711fec*/
      v13 = v6; /*0x711ff0*/
      if ( (unsigned __int8)House::IsCurrentPlayer((House *)a2) ) /*0x711ff4*/
      {
        LOWORD(v8) = Math::RoundToInt((double)v13 * v9); /*0x712005*/
        return v8; /*0x71200a*/
      }
      return v7; /*0x71200c*/
    }
  }
  else
  {
    v14 = (*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x712020*/
    LOWORD(result) = Math::RoundToInt((double)v14 * v9); /*0x71202c*/
  }
  return result; /*0x711fc5*/
}



// ==== 0x00712040  TechnoTypeClass::SelectArtOrAlt  this=TechnoTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::SelectArtOrAlt(TechnoTypeClass *this)
{
  Object *v1; // eax
  int result; // eax

  v1 = dword_A83D4C; /*0x712040*/
  if ( !dword_A83D4C ) /*0x71204a*/
    return *(_DWORD *)&this->?[1548]; /*0x7120bf*/
  if ( dword_A83D4C[1].__pad_C[19] ) /*0x71204c*/
  {
    if ( (*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 44))(this) == 16 ) /*0x712060*/
    {
      result = *(_DWORD *)&this->?[1580]; /*0x712062*/
      if ( result ) /*0x71206a*/
      {
        if ( this->?[2986] ) /*0x71206c*/
          return result; /*0x712074*/
      }
    }
    v1 = dword_A83D4C; /*0x712076*/
  }
  if ( !v1 /*0x7120a1*/
    || !v1[1].__pad_C[20]
    || (*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 44))(this) != 40
    && ((*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 44))(this) != 7
     || !*(_DWORD *)&this->?[804]) )
  {
    return *(_DWORD *)&this->?[1548]; /*0x7120a1*/
  }
  result = *(_DWORD *)&this->?[1580]; /*0x7120ab*/
  if ( !result || !this->?[2986] ) /*0x7120b5*/
    return *(_DWORD *)&this->?[1548]; /*0x7120bd*/
  return result; /*0x7120c5*/
}



// ==== 0x007120D0  TechnoTypeClass::ComputeValue  this=TechnoTypeClass  sig=csp ====
int __thiscall ObjectClass::ComputeValue(TechnoTypeClass *this)
{
  int v2; // eax
  int result; // eax

  v2 = (*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x7120d7*/
  LOWORD(result) = Math::RoundToInt( /*0x712107*/
                     (double)(v2
                            / (this->ObjectTypeClass[40]
                             / *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5836)))
                   * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5840));
  if ( result <= 1 ) /*0x712111*/
    return 1; /*0x712113*/
  return result; /*0x71210c*/
}



// ==== 0x00712120  TechnoTypeClass::GetGameplayValue  this=TechnoTypeClass  sig=csp ====
int AircraftTypeClass::GetGameplayValue(TechnoTypeClass *this)
{
  return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5836); /*0x71212b*/
}



// ==== 0x00712130  BuildingClass::processCapture  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::processCapture(BuildingClass *this)
{
  int v1; // edx
  int v2; // ecx
  char result; // al

  v1 = *((_DWORD *)this + 550); /*0x712130*/
  if ( !v1 ) /*0x712138*/
    return 0; /*0x712138*/
  v2 = *((_DWORD *)this + 557); /*0x71213a*/
  result = 1; /*0x712140*/
  if ( v1 != v2 && *(int *)(v1 + 156) <= 1 && (!v2 || *(int *)(v2 + 156) <= 1) ) /*0x71215f*/
    return 0; /*0x712161*/
  return result; /*0x712163*/
}



// ==== 0x00712170  TechnoTypeClass::LoadExtras  this=TechnoTypeClass  sig=csp ====
int __userpurge ObjectTypeClass::LoadExtras@<eax>(TechnoTypeClass *this, double a2@<st0>, unsigned __int8 ***a3)
{
  int v3; // ecx
  int result; // eax
  int v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  char Bool_Overwrite; // al
  _DWORD *GUID_Overwrite; // eax
  int Int_Overwrite; // eax
  int v25; // eax
  char *i; // eax
  int Count; // edx
  int CapacityIncrement; // eax
  unsigned __int8 *inited; // eax
  int v30; // eax
  char *j; // eax
  int v32; // edx
  int unknown_18; // eax
  char v34; // al
  _DWORD *v35; // edi
  _DWORD *v36; // eax
  _DWORD *v37; // eax
  int v38; // ecx
  _DWORD *v39; // edi
  _DWORD *v40; // eax
  _DWORD *v41; // edi
  _DWORD *v42; // eax
  _DWORD *v43; // edi
  _DWORD *v44; // eax
  _DWORD *v45; // edi
  _DWORD *v46; // eax
  unsigned __int8 *v47; // eax
  int v48; // eax
  unsigned __int8 *v49; // eax
  int v50; // eax
  unsigned __int8 *v51; // eax
  int v52; // eax
  unsigned __int8 *v53; // eax
  int v54; // eax
  unsigned __int8 *v55;... [174146 chars total]



// ==== 0x00716150  TechnoTypeClass::ValidatePath  this=TechnoTypeClass  sig=csp ====
char __thiscall BuildingClass::ValidatePath(TechnoTypeClass *this, _WORD *a2, int a3)
{
  _WORD *v6; // esi
  bool v7; // bl
  _WORD *v8; // eax
  int *v9; // eax
  bool *v10; // eax
  int v11; // [esp-24h] [ebp-38h]
  int v12; // [esp-14h] [ebp-28h]
  char v13; // [esp+Bh] [ebp-9h]
  int v14; // [esp+Ch] [ebp-8h]
  __int16 v15[2]; // [esp+10h] [ebp-4h] BYREF
  char v16; // [esp+18h] [ebp+4h]

  if ( *(_DWORD *)a2 == *(_DWORD *)&word_B0EB58 ) /*0x716166*/
    return 0; /*0x71617c*/
  v6 = (_WORD *)(*(int (__thiscall **)(TechnoTypeClass *, int))(this->vtable0 + 144))(this, 1); /*0x71618d*/
  v13 = 0; /*0x716199*/
  v7 = (*(int (__thiscall **)(TechnoTypeClass *))(this->vtable0 + 44))(this) == 7; /*0x71619e*/
  v16 = 0; /*0x7161a3*/
  while ( v6 ) /*0x7161a8*/
  {
    if ( *v6 == 0x7FFF && v6[1] == 0x7FFF ) /*0x7161bb*/
      break; /*0x7161bb*/
    v8 = v6; /*0x7161c5*/
    v6 += 2; /*0x7161c7*/
    LOWORD(v14) = *v8 + *a2; /*0x7161d5*/
    HIWORD(v14) = a2[1] + v8[1]; /*0x7161da*/
    *(_DWORD *)v15 = v14; /*0x7161e5*/
    if ( v7 ) /*0x7161e9*/
    {
      v12 = this->SpeedType; /*0x7161fb*/
      v9 = (int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v15); /*0x716202*/
      if ( (unsigned __int8)CellClass::IsPassable(v9, v12, (int)this, a3) ) /*0x716209*/
        goto LABEL_11; /*0x716210*/
      v13 = 1; /*0x716212*/
    }
    else
    {
      v11 = this->SpeedType; /*0x71622f*/
      v10 = (bool *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v15); /*0x716236*/
      if ( (unsigned __int8)Cell::IsBuildable(v10, v11, 0, 0, -1, 0, -1, 1) ) /*0x71623d*/
      {
LABEL_11:
        v16 = 1; /*0x71624d*/
        continue; /*0x71624d*/
      }
      v13 = 1; /*0x716246*/
    }
  }
  if ( v7 && *((_DWORD *)this + 918) ) /*0x716260*/
    return v16; /*0x71626a*/
  else
    return v13 == 0; /*0x716280*/
}



// ==== 0x00716290  TechnoTypeClass::GetModeSpecificValue  this=TechnoTypeClass  sig=csp ====
int __thiscall ObjectClass::GetModeSpecificValue(TechnoTypeClass *this)
{
  int result; // eax

  switch ( *(_DWORD *)&this->?[752] )
  {
    case 1:
      result = *(_DWORD *)&this->?[1440]; /*0x7162a9*/
      break; /*0x7162af*/
    case 2:
      result = (*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 44))(this) != 16 ? 5 : 3;
      break; /*0x7162cf*/
    case 3:
      result = *(_DWORD *)&this->?[1276]; /*0x7162d0*/
      break; /*0x7162d6*/
    case 4:
      result = 10; /*0x7162a3*/
      break; /*0x7162a8*/
    case 5:
      result = *(_DWORD *)(*(_DWORD *)&this->?[1972] + 164); /*0x7162b6*/
      break; /*0x7162bc*/
    default:
      result = 0; /*0x7162d7*/
      break; /*0x7162d7*/
  }
  return result; /*0x7162a8*/
}



// ==== 0x007162F0  TechnoTypeClass::SaveLoad_Prefix  this=TechnoTypeClass  sig=csp ====
int __stdcall TechnoTypeClass::SaveLoad_Prefix(TechnoTypeClass *this, int a2)
{
  TypeList *v3; // ebp
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
  int *v29; // esi
  int v30; // ebx
  int *v31; // esi
  int v32; // ebx
  int i16; // esi
  int i17; // esi
  void *v35; // eax
  int v36; // [esp+280h] [ebp-210h] BYREF
  int v37; // [esp+284h] [ebp-20Ch] BYREF
  int i; // [esp+288h] [ebp-208h]
  char Filename[256]; // [esp+28Ch] [ebp-204h] BYREF
  char Buffer[260]; // [esp+38Ch] [ebp-104h] BYREF

  v3 = (TypeList *)&this->?[772]; /*0x716307*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[772] + 12))(&this->?[772]); /*0x71630f*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[560] + 12))(&this->?[560]); /*0x716320*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[1248] + 12))(&this->?[1248]); /*0x71632f*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[816] + 12))(&this->?[816]); /*0x71633e*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[844] + 12))(&this->?[844]); /*0x71634d*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[872] + 12))(&this->?[872]); /*0x71635c*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[900] + 12))(&this->?[900]); /*0x71636b*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[928] + 12))(&this->?[928]); /*0x71637a*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[956] + 12))(&this->?[956]); /*0x716389*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[984] + 12))(&this->?[984]); /*0x716398*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[1012] + 12))(&this->?[1012]); /*0x7163a7*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[1040] + 12))(&this->?[1040]); /*0x7163b6*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[1068] + 12))(&this->?[1068]); /*0x7163c5*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[1608] + 12))(&this->?[1608]); /*0x7163d4*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[1636] + 12))(&this->?[1636]); /*0x7163e3*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[1364] + 12))(&this->?[1364]); /*0x7163f2*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[1392] + 12))(&this->?[1392]); /*0x716401*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[588] + 12))(&this->?[588]); /*0x716410*/
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x71641c*/
  if ( result >= 0 ) /*0x716423*/
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[800]); /*0x716435*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[804]); /*0x716446*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[808]); /*0x716457*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[1664]); /*0x716468*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[1680]); /*0x716479*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this->JumpjetAccel); /*0x71648a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this->SuppressionThreshold); /*0x71649b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->?[1]); /*0x7164ac*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[1344]); /*0x7164bd*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[1348]); /*0x7164ce*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[1492]); /*0x7164df*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[1496]); /*0x7164f0*/
    if ( this != (TechnoTypeClass *)-1000 ) /*0x7164f7*/
      TypeList::BuildingTypeConstructor(v3); /*0x7164fb*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x71650c*/
    for ( i = 0; i < v36; ++i ) /*0x71651d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x71652b*/
      DynamicVector::Add_Alt3((DynamicVector *)v3, &v37); /*0x716535*/
    }
    if ( this != (TechnoTypeClass *)-788 ) /*0x71654d*/
      TypeList::VoxelAnimConstructor((TypeList *)&this->?[560]); /*0x716551*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x716562*/
    for ( j = 0; j < v36; ++j ) /*0x71656d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x71657b*/
      DynamicVector::Add2((DynamicVector *)&this->?[560], &v37); /*0x716585*/
    }
    if ( this != (TechnoTypeClass *)-1476 ) /*0x716599*/
      AnimTypeList::Constructor((AnimTypeList *)&this->?[1248]); /*0x71659d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x7165ae*/
    for ( k = 0; k < v36; ++k ) /*0x7165b9*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x7165c7*/
      DynamicVector::Add_Alt4((DynamicVector *)&this->?[1248], &v37); /*0x7165d1*/
    }
    if ( this != (TechnoTypeClass *)-1044 ) /*0x7165e5*/
      TypeList::Construct((TypeList *)&this->?[816]); /*0x7165e9*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x7165fa*/
    for ( m = 0; m < v36; ++m ) /*0x716605*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x716613*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[816], &v37); /*0x71661d*/
    }
    if ( this != (TechnoTypeClass *)-1072 ) /*0x716631*/
      TypeList::Construct((TypeList *)&this->?[844]); /*0x716635*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x716646*/
    for ( n = 0; n < v36; ++n ) /*0x716651*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x71665f*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[844], &v37); /*0x716669*/
    }
    if ( this != (TechnoTypeClass *)-1100 ) /*0x71667d*/
      TypeList::Construct((TypeList *)&this->?[872]); /*0x716681*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x716692*/
    for ( ii = 0; ii < v36; ++ii ) /*0x71669d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x7166ab*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[872], &v37); /*0x7166b5*/
    }
    if ( this != (TechnoTypeClass *)-1128 ) /*0x7166c9*/
      TypeList::Construct((TypeList *)&this->?[900]); /*0x7166cd*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x7166de*/
    for ( jj = 0; jj < v36; ++jj ) /*0x7166e9*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x7166f7*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[900], &v37); /*0x716701*/
    }
    if ( this != (TechnoTypeClass *)-1156 ) /*0x716715*/
      TypeList::Construct((TypeList *)&this->?[928]); /*0x716719*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x71672a*/
    for ( kk = 0; kk < v36; ++kk ) /*0x716735*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x716743*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[928], &v37); /*0x71674d*/
    }
    if ( this != (TechnoTypeClass *)-1184 ) /*0x716761*/
      TypeList::Construct((TypeList *)&this->?[956]); /*0x716765*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x716776*/
    for ( mm = 0; mm < v36; ++mm ) /*0x716781*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x71678f*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[956], &v37); /*0x716799*/
    }
    if ( this != (TechnoTypeClass *)-1212 ) /*0x7167ad*/
      TypeList::Construct((TypeList *)&this->?[984]); /*0x7167b1*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x7167c2*/
    for ( nn = 0; nn < v36; ++nn ) /*0x7167cd*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x7167db*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[984], &v37); /*0x7167e5*/
    }
    if ( this != (TechnoTypeClass *)-1240 ) /*0x7167f9*/
      TypeList::Construct((TypeList *)&this->?[1012]); /*0x7167fd*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x71680e*/
    for ( i1 = 0; i1 < v36; ++i1 ) /*0x716819*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x716827*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[1012], &v37); /*0x716831*/
    }
    if ( this != (TechnoTypeClass *)-1268 ) /*0x716845*/
      TypeList::Construct((TypeList *)&this->?[1040]); /*0x716849*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x71685a*/
    for ( i2 = 0; i2 < v36; ++i2 ) /*0x716865*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x716873*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[1040], &v37); /*0x71687d*/
    }
    if ( this != (TechnoTypeClass *)-1296 ) /*0x716891*/
      TypeList::Construct((TypeList *)&this->?[1068]); /*0x716895*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x7168a6*/
    for ( i3 = 0; i3 < v36; ++i3 ) /*0x7168b1*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x7168bf*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[1068], &v37); /*0x7168c9*/
    }
    if ( this != (TechnoTypeClass *)-1836 ) /*0x7168dd*/
      AnimTypeList::Constructor((AnimTypeList *)&this->?[1608]); /*0x7168e1*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x7168f2*/
    for ( i4 = 0; i4 < v36; ++i4 ) /*0x7168fd*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x71690b*/
      DynamicVector::Add_Alt4((DynamicVector *)&this->?[1608], &v37); /*0x716915*/
    }
    if ( this != (TechnoTypeClass *)-1864 ) /*0x716929*/
      AnimTypeList::Constructor((AnimTypeList *)&this->?[1636]); /*0x71692d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x71693e*/
    for ( i5 = 0; i5 < v36; ++i5 ) /*0x716949*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x716957*/
      DynamicVector::Add_Alt4((DynamicVector *)&this->?[1636], &v37); /*0x716961*/
    }
    if ( this != (TechnoTypeClass *)-816 ) /*0x716975*/
      TypeList::Construct((TypeList *)&this->?[588]); /*0x716979*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x71698a*/
    for ( i6 = 0; i6 < v36; ++i6 ) /*0x716995*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x7169a3*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[588], &v37); /*0x7169ad*/
    }
    if ( this != (TechnoTypeClass *)-1592 ) /*0x7169c1*/
      TypeList::Construct((TypeList *)&this->?[1364]); /*0x7169c5*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x7169d6*/
    for ( i7 = 0; i7 < v36; ++i7 ) /*0x7169e1*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x7169ef*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[1364], &v37); /*0x7169f9*/
    }
    if ( this != (TechnoTypeClass *)-1620 ) /*0x716a0d*/
      TypeList::Construct((TypeList *)&this->?[1392]); /*0x716a11*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x716a22*/
    for ( i8 = 0; i8 < v36; ++i8 ) /*0x716a2d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x716a3b*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[1392], &v37); /*0x716a45*/
    }
    if ( this != (TechnoTypeClass *)-1912 ) /*0x716a59*/
      TechnoTypeClass::Constructor((TechnoTypeClass *)&this->?[1684]); /*0x716a5d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x716a6e*/
    for ( i9 = 0; i9 < v36; ++i9 ) /*0x716a79*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x716a87*/
      TypeList::PushBack((TypeList *)&this->?[1684], &v37); /*0x716a91*/
    }
    if ( this != (TechnoTypeClass *)-1940 ) /*0x716aa5*/
      TechnoTypeClass::Constructor((TechnoTypeClass *)&this->?[1712]); /*0x716aa9*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x716aba*/
    for ( i10 = 0; i10 < v36; ++i10 ) /*0x716ac5*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x716ad3*/
      TypeList::PushBack((TypeList *)&this->?[1712], &v37); /*0x716add*/
    }
    for ( i11 = 0; i11 < *(_DWORD *)&this->?[788]; ++i11 ) /*0x716af3*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&this->?[776] + 4 * i11)); /*0x716b04*/
    for ( i12 = 0; i12 < *(_DWORD *)&this->?[1624]; ++i12 ) /*0x716b1e*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&this->?[1612] + 4 * i12)); /*0x716b2f*/
    for ( i13 = 0; i13 < *(_DWORD *)&this->?[1652]; ++i13 ) /*0x716b49*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&this->?[1640] + 4 * i13)); /*0x716b5a*/
    for ( i14 = 0; i14 < *(_DWORD *)&this->?[576]; ++i14 ) /*0x716b74*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&this->?[564] + 4 * i14)); /*0x716b85*/
    for ( i15 = 0; i15 < *(_DWORD *)&this->?[1264]; ++i15 ) /*0x716b9f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&this->?[1252] + 4 * i15)); /*0x716bb0*/
    v29 = (int *)&this->?[1972]; /*0x716bc0*/
    v30 = 18; /*0x716bc6*/
    do /*0x716bda*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v29); /*0x716bd1*/
      v29 += 7; /*0x716bd6*/
      --v30; /*0x716bd9*/
    }
    while ( v30 ); /*0x716bda*/
    v31 = (int *)&this->?[2480]; /*0x716bdc*/
    v32 = 18; /*0x716be2*/
    do /*0x716bf6*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v31); /*0x716bed*/
      v31 += 7; /*0x716bf2*/
      --v32; /*0x716bf5*/
    }
    while ( v32 ); /*0x716bf6*/
    for ( i16 = 0; i16 < *(_DWORD *)&this->?[1700]; ++i16 ) /*0x716c04*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&this->?[1688] + 4 * i16)); /*0x716c15*/
    for ( i17 = 0; i17 < *(_DWORD *)&this->?[1728]; ++i17 ) /*0x716c2f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&this->?[1716] + 4 * i17)); /*0x716c40*/
    _makepath(Buffer, 0, 0, &this->?[276], Ext); /*0x716c66*/
    this->ObjectTypeClass[41] = (int)SearchMIXFile(Buffer, 0); /*0x716c96*/
    INIClass::GetString( /*0x716c9c*/
      (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
      &this->?[276],
      (unsigned __int8 *)&g_INI_Key_TRUCKA.?,
      &g_INI_Key_TRUCKA.__pad_1714[80],
      Filename,
      256);
    if ( !_strcmpi(Filename, &g_INI_Key_TRUCKA.__pad_1714[80]) ) /*0x716cab*/
      INIClass::GetString( /*0x716cd4*/
        (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
        (unsigned __int8 *)&this->ObjectTypeClass[9],
        (unsigned __int8 *)&g_INI_Key_TRUCKA.?,
        &g_INI_Key_TRUCKA.__pad_1714[80],
        Filename,
        256);
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x716ced*/
    *(_DWORD *)&this->?[1548] = 0; /*0x716cfe*/
    v35 = SearchMIXFile(Buffer, 0); /*0x716d04*/
    *(_DWORD *)&this->?[1548] = v35; /*0x716d0b*/
    if ( !v35 ) /*0x716d11*/
      *(_DWORD *)&this->?[1548] = SearchMIXFile(&stru_820320.?[143], 0); /*0x716d1f*/
    INIClass::GetString( /*0x716d3f*/
      (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
      &this->?[276],
      (unsigned __int8 *)&g_INI_Key_TRUCKA.?,
      &g_INI_DefaultBuffer,
      Filename,
      256);
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x716d58*/
    *(_DWORD *)&this->?[1580] = 0; /*0x716d69*/
    *(_DWORD *)&this->?[1580] = SearchMIXFile(Buffer, 0); /*0x716d8d*/
    INIClass::GetString( /*0x716d93*/
      (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
      &this->?[276],
      (unsigned __int8 *)g_INI_Key_Palette,
      &g_INI_DefaultBuffer,
      (char *)&this->? + 1,
      32);
    if ( BYTE1(this->?) ) /*0x716d98*/
      *(int *)((char *)&this->? + 1) = FileExtension::MapHandler((const char *)&this->? + 1); /*0x716da4*/
    return 0; /*0x716daa*/
  }
  return result; /*0x716dac*/
}



// ==== 0x00716DC0  TechnoTypeClass::SaveLoad_Prefix_0  this=TechnoTypeClass  sig=csp ====
int __userpurge TechnoTypeClass::SaveLoad_Prefix_0@<eax>(TechnoTypeClass *this, _DWORD *a2, int *a3, int a4, int a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx
  int v13; // edx
  int m; // ebx
  int v15; // edx
  int n; // ebx
  int v17; // edx
  int ii; // ebx
  int v19; // edx
  int jj; // ebx
  int v21; // edx
  int kk; // ebx
  int v23; // edx
  int mm; // ebx

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, (int)a2, (int)a3); /*0x716dd1*/
  if ( result >= 0 ) /*0x716dd8*/
  {
    v7 = *a2; /*0x716de4*/
    a3 = *(int **)&this->?[788]; /*0x716df1*/
    (*(void (__stdcall **)(_DWORD *, int **, int, _DWORD, int))(v7 + 16))(a2, &a3, 4, 0, v5); /*0x716df5*/
    for ( i = 0; i < a4; ++i ) /*0x716e00*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[776] + 4 * i, 4, 0); /*0x716e13*/
    v9 = *a2; /*0x716e23*/
    a4 = *(_DWORD *)&this->?[576]; /*0x716e2f*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v9 + 16))(a2, &a4, 4, 0); /*0x716e33*/
    for ( j = 0; j < a4; ++j ) /*0x716e3e*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[564] + 4 * j, 4, 0); /*0x716e51*/
    v11 = *a2; /*0x716e61*/
    a4 = *(_DWORD *)&this->?[1264]; /*0x716e6d*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v11 + 16))(a2, &a4, 4, 0); /*0x716e71*/
    for ( k = 0; k < a4; ++k ) /*0x716e7c*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[1252] + 4 * k, 4, 0); /*0x716e8f*/
    v13 = *a2; /*0x716e9f*/
    a4 = *(_DWORD *)&this->?[832]; /*0x716eab*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v13 + 16))(a2, &a4, 4, 0); /*0x716eaf*/
    for ( m = 0; m < a4; ++m ) /*0x716eba*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[820] + 4 * m, 4, 0); /*0x716ecd*/
    v15 = *a2; /*0x716edd*/
    a4 = *(_DWORD *)&this->?[860]; /*0x716ee9*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v15 + 16))(a2, &a4, 4, 0); /*0x716eed*/
    for ( n = 0; n < a4; ++n ) /*0x716ef8*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[848] + 4 * n, 4, 0); /*0x716f0b*/
    v17 = *a2; /*0x716f1b*/
    a4 = *(_DWORD *)&this->?[888]; /*0x716f27*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v17 + 16))(a2, &a4, 4, 0); /*0x716f2b*/
    for ( ii = 0; ii < a4; ++ii ) /*0x716f36*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[876] + 4 * ii, 4, 0); /*0x716f49*/
    v19 = *a2; /*0x716f59*/
    a4 = *(_DWORD *)&this->?[916]; /*0x716f65*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v19 + 16))(a2, &a4, 4, 0); /*0x716f69*/
    for ( jj = 0; jj < a4; ++jj ) /*0x716f74*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[904] + 4 * jj, 4, 0); /*0x716f87*/
    v21 = *a2; /*0x716f97*/
    a4 = *(_DWORD *)&this->?[944]; /*0x716fa3*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v21 + 16))(a2, &a4, 4, 0); /*0x716fa7*/
    for ( kk = 0; kk < a4; ++kk ) /*0x716fb2*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[932] + 4 * kk, 4, 0); /*0x716fc5*/
    v23 = *a2; /*0x716fd5*/
    a4 = *(_DWORD *)&this->?[972]; /*0x716fe1*/
    (*(void (__stdcall **)(_DWORD *, int *, int))(v23 + 16))(a2, &a4, 4); /*0x716fe5*/
    for ( mm = 0; mm < (int)a3; ++mm ) /*0x716ff0*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[960] + 4 * mm, 4, 0); /*0x717003*/
    DynamicVector::Read((DynamicVector *)&this->?[984], a2); /*0x717014*/
    DynamicVector::Read((DynamicVector *)&this->?[1012], a2); /*0x717020*/
    DynamicVector::Read((DynamicVector *)&this->?[1040], a2); /*0x71702c*/
    DynamicVector::Read((DynamicVector *)&this->?[1068], a2); /*0x717038*/
    Stream::WriteIntArray((Stream *)&this->?[1608], a2); /*0x717044*/
    Stream::WriteIntArray((Stream *)&this->?[1636], a2); /*0x717050*/
    DynamicVector::Read((DynamicVector *)&this->?[588], a2); /*0x71705c*/
    DynamicVector::Read((DynamicVector *)&this->?[1364], a2); /*0x717068*/
    DynamicVector::Read((DynamicVector *)&this->?[1392], a2); /*0x717074*/
    TechnoTypeClass::SaveLoadDataArray((TechnoTypeClass *)&this->?[1684], a2); /*0x717080*/
    TechnoTypeClass::SaveLoadDataArray((TechnoTypeClass *)&this->?[1712], a2); /*0x71708c*/
    return 0; /*0x717091*/
  }
  return result; /*0x717094*/
}



// ==== 0x007170A0  TechnoTypeClass::DeserializeArrays  this=TechnoTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::DeserializeArrays(TechnoTypeClass *this)
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
  ObjectTypeClass *v19; // [esp+Ch] [ebp+4h]
  int *v20; // [esp+10h] [ebp+8h]

  result = COMObject::GetSizeMaxWrapper(v19, v20); /*0x7170ac*/
  if ( result >= 0 ) /*0x7170b3*/
  {
    v2 = 4 * *(_DWORD *)&v19[1].__pad_14D[67] + 4 + *v20; /*0x7170c8*/
    *v20 = v2; /*0x7170ca*/
    v3 = v2 + 4 * *(_DWORD *)&v19[1].__pad_14D[95] + 4; /*0x7170d2*/
    *v20 = v3; /*0x7170d6*/
    v4 = v3 + 4 * *(_DWORD *)&v19[1].__pad_14D[123] + 4; /*0x7170de*/
    *v20 = v4; /*0x7170e2*/
    v5 = v4 + 4 * *(_DWORD *)&v19[1].__pad_14D[151] + 4; /*0x7170ea*/
    *v20 = v5; /*0x7170ee*/
    v6 = v5 + 4 * *(_DWORD *)&v19[1].ImageFile[8] + 4; /*0x7170f6*/
    *v20 = v6; /*0x7170fa*/
    v7 = v6 + 4 * *(_DWORD *)&v19[1].AlphaImageFile[9] + 4; /*0x717102*/
    *v20 = v7; /*0x717106*/
    v8 = v7 + 4 * *(_DWORD *)&v19[1].HasRadialIndicator + 4; /*0x71710e*/
    *v20 = v8; /*0x717112*/
    v9 = v8 + 4 * v19[1].VoxelCaches[4] + 4; /*0x71711a*/
    *v20 = v9; /*0x71711e*/
    v10 = v9 + 4 * v19[1].VoxelCaches[11] + 4; /*0x717126*/
    *v20 = v10; /*0x71712a*/
    v11 = v10 + 4 * v19[1].VoxelCaches[18] + 4; /*0x717132*/
    *v20 = v11; /*0x717136*/
    v12 = v11 + 4 * *(_DWORD *)&v19[2].AlphaImageFile[1] + 4; /*0x71713e*/
    *v20 = v12; /*0x717142*/
    v13 = v12 + 4 * *(_DWORD *)&v19[2].Selectable + 4; /*0x71714a*/
    *v20 = v13; /*0x71714e*/
    v14 = v13 + 4 * *(_DWORD *)&v19[1].?[44] + 4; /*0x717156*/
    *v20 = v14; /*0x71715a*/
    v15 = v14 + 4 * (int)v19[2].AlphaImage + 4; /*0x717162*/
    *v20 = v15; /*0x717166*/
    v16 = v15 + 4 * *(_DWORD *)&v19[1].__pad_14D[23] + 4; /*0x71716e*/
    *v20 = v16; /*0x717172*/
    v17 = v16 + 4 * (int)v19[1].AlphaImage + 4; /*0x71717a*/
    *v20 = v17; /*0x71717e*/
    v18 = v17 + 4 * v19[2].VoxelCaches[7] + 4; /*0x717186*/
    *v20 = v18; /*0x71718a*/
    *v20 = v18 + 4 * v19[2].VoxelCaches[14] + 4; /*0x717196*/
    return 0; /*0x717198*/
  }
  return result; /*0x71719a*/
}



// ==== 0x007171A0  BuildingTypeClass::ProcessPower  this=TechnoTypeClass  sig=csp ====
int __thiscall sub_7171A0(int this, int *a2)
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

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x7171a9*/
  Checksummer::Add_double(*(_DWORD *)(this + 752), *(_DWORD *)(this + 756)); /*0x7171be*/
  Power::TimerProcess(*(_DWORD *)(this + 760)); /*0x7171cc*/
  Checksummer::Add_double(*(_DWORD *)(this + 768), *(_DWORD *)(this + 772)); /*0x7171e1*/
  Checksummer::Add_double(*(_DWORD *)(this + 776), *(_DWORD *)(this + 780)); /*0x7171f6*/
  Power::TimerProcess(*(_DWORD *)(this + 784)); /*0x717204*/
  Power::TimerProcess(*(_DWORD *)(this + 804)); /*0x717212*/
  Power::TimerProcess(*(_DWORD *)(this + 1492)); /*0x717220*/
  Power::TimerProcess(*(_DWORD *)(this + 1016)); /*0x71722e*/
  Power::TimerProcess(*(_DWORD *)(this + 832)); /*0x71723c*/
  Checksummer::Add_Buffer((unsigned int *)a2, (unsigned __int8 *)(this + 844), 16); /*0x71724c*/
  Checksummer::Add_double(*(_DWORD *)(this + 864), *(_DWORD *)(this + 868)); /*0x717261*/
  Checksummer::Add_double(*(_DWORD *)(this + 872), *(_DWORD *)(this + 876)); /*0x717276*/
  Checksummer::Add_double(*(_DWORD *)(this + 880), *(_DWORD *)(this + 884)); /*0x71728b*/
  Checksummer::Add_double(*(_DWORD *)(this + 888), *(_DWORD *)(this + 892)); /*0x7172a0*/
  Checksummer::Add_double(*(_DWORD *)(this + 896), *(_DWORD *)(this + 900)); /*0x7172b5*/
  Checksummer::Add_double(*(_DWORD *)(this + 904), *(_DWORD *)(this + 908)); /*0x7172ca*/
  LOBYTE(v3) = *(_BYTE *)(this + 912); /*0x7172cf*/
  Power::FlagProcess(a2, v3); /*0x7172d8*/
  v4 = Power::TimerProcess(*(_DWORD *)(this + 920)); /*0x7172e6*/
  LOBYTE(v4) = *(_BYTE *)(this + 3217); /*0x7172eb*/
  Power::FlagProcess(a2, v4); /*0x7172f4*/
  LOBYTE(v5) = *(_BYTE *)(this + 3218); /*0x7172f9*/
  Power::FlagProcess(a2, v5); /*0x717302*/
  LOBYTE(v6) = *(_BYTE *)(this + 3216); /*0x717307*/
  Power::FlagProcess(a2, v6); /*0x717310*/
  Checksummer::Add_double(*(_DWORD *)(this + 928), *(_DWORD *)(this + 932)); /*0x717325*/
  Checksummer::Add_double(*(_DWORD *)(this + 944), *(_DWORD *)(this + 948)); /*0x71733a*/
  Checksummer::Add_double(*(_DWORD *)(this + 936), *(_DWORD *)(this + 940)); /*0x71734f*/
  Power::TimerProcess(*(_DWORD *)(this + 1560)); /*0x71735d*/
  Power::TimerProcess(*(_DWORD *)(this + 952)); /*0x71736b*/
  Power::TimerProcess(*(_DWORD *)(this + 956)); /*0x717379*/
  Checksummer::Add_double(*(_DWORD *)(this + 968), *(_DWORD *)(this + 972)); /*0x71738e*/
  Power::TimerProcess(*(_DWORD *)(this + 976)); /*0x71739c*/
  Power::TimerProcess(*(_DWORD *)(this + 980)); /*0x7173aa*/
  Power::TimerProcess(*(_DWORD *)(this + 1060)); /*0x7173b8*/
  Power::TimerProcess(*(_DWORD *)(this + 1088)); /*0x7173c6*/
  Power::TimerProcess(*(_DWORD *)(this + 1144)); /*0x7173d4*/
  Power::TimerProcess(*(_DWORD *)(this + 1172)); /*0x7173e2*/
  Power::TimerProcess(*(_DWORD *)(this + 1200)); /*0x7173f0*/
  Power::TimerProcess(*(_DWORD *)(this + 1228)); /*0x7173fe*/
  Power::TimerProcess(*(_DWORD *)(this + 1256)); /*0x71740c*/
  Power::TimerProcess(*(_DWORD *)(this + 1284)); /*0x71741a*/
  Power::TimerProcess(*(_DWORD *)(this + 1312)); /*0x717428*/
  Power::TimerProcess(*(_DWORD *)(this + 1928)); /*0x717436*/
  Power::TimerProcess(*(_DWORD *)(this + 1956)); /*0x717444*/
  Power::TimerProcess(*(_DWORD *)(this + 1460)); /*0x717452*/
  Power::TimerProcess(*(_DWORD *)(this + 1464)); /*0x717460*/
  Power::TimerProcess(*(_DWORD *)(this + 1468)); /*0x71746e*/
  Power::TimerProcess(*(_DWORD *)(this + 1472)); /*0x71747c*/
  Power::TimerProcess(*(_DWORD *)(this + 1504)); /*0x71748a*/
  Power::TimerProcess(*(_DWORD *)(this + 1512)); /*0x717498*/
  Power::TimerProcess(*(_DWORD *)(this + 1552)); /*0x7174a6*/
  Power::TimerProcess(*(_DWORD *)(this + 1556)); /*0x7174b4*/
  Power::TimerProcess(*(_DWORD *)(this + 1588)); /*0x7174c2*/
  Power::TimerProcess(*(_DWORD *)(this + 1608)); /*0x7174d0*/
  Power::TimerProcess(*(_DWORD *)(this + 1636)); /*0x7174de*/
  Power::TimerProcess(*(_DWORD *)(this + 1648)); /*0x7174ec*/
  Power::TimerProcess(*(_DWORD *)(this + 1652)); /*0x7174fa*/
  Power::TimerProcess(*(_DWORD *)(this + 1656)); /*0x717508*/
  Power::TimerProcess(*(_DWORD *)(this + 1660)); /*0x717516*/
  Power::TimerProcess(*(_DWORD *)(this + 1668)); /*0x717524*/
  Power::TimerProcess(*(_DWORD *)(this + 1676)); /*0x717532*/
  Power::TimerProcess(*(_DWORD *)(this + 1740)); /*0x717540*/
  Power::TimerProcess(*(_DWORD *)(this + 1744)); /*0x71754e*/
  Power::TimerProcess(*(_DWORD *)(this + 1816)); /*0x71755c*/
  Power::TimerProcess(*(_DWORD *)(this + 1820)); /*0x71756a*/
  Power::TimerProcess(*(_DWORD *)(this + 1824)); /*0x717578*/
  Power::TimerProcess(*(_DWORD *)(this + 1832)); /*0x717586*/
  Power::TimerProcess(*(_DWORD *)(this + 1852)); /*0x717594*/
  Power::TimerProcess(*(_DWORD *)(this + 1880)); /*0x7175a2*/
  Power::TimerProcess(*(_DWORD *)(this + 2044)); /*0x7175b0*/
  v7 = Power::TimerProcess(*(_DWORD *)(this + 2048)); /*0x7175be*/
  LOBYTE(v7) = *(_BYTE *)(this + 3220); /*0x7175c3*/
  Power::FlagProcess(a2, v7); /*0x7175cc*/
  LOBYTE(v8) = *(_BYTE *)(this + 3221); /*0x7175d1*/
  Power::FlagProcess(a2, v8); /*0x7175da*/
  LOBYTE(v9) = *(_BYTE *)(this + 3222); /*0x7175df*/
  v10 = Power::FlagProcess(a2, v9); /*0x7175e8*/
  LOBYTE(v10) = *(_BYTE *)(this + 3223); /*0x7175ed*/
  Power::FlagProcess(a2, v10); /*0x7175f6*/
  LOBYTE(v11) = *(_BYTE *)(this + 3224); /*0x7175fb*/
  Power::FlagProcess(a2, v11); /*0x717604*/
  LOBYTE(v12) = *(_BYTE *)(this + 3225); /*0x717609*/
  v13 = Power::FlagProcess(a2, v12); /*0x717612*/
  LOBYTE(v13) = *(_BYTE *)(this + 3226); /*0x717617*/
  Power::FlagProcess(a2, v13); /*0x717620*/
  LOBYTE(v14) = *(_BYTE *)(this + 3227); /*0x717625*/
  Power::FlagProcess(a2, v14); /*0x71762e*/
  LOBYTE(v15) = *(_BYTE *)(this + 3228); /*0x717633*/
  v16 = Power::FlagProcess(a2, v15); /*0x71763c*/
  LOBYTE(v16) = *(_BYTE *)(this + 3229); /*0x717641*/
  Power::FlagProcess(a2, v16); /*0x71764a*/
  LOBYTE(v17) = *(_BYTE *)(this + 3230); /*0x71764f*/
  Power::FlagProcess(a2, v17); /*0x717658*/
  LOBYTE(v18) = *(_BYTE *)(this + 3231); /*0x71765d*/
  v19 = Power::FlagProcess(a2, v18); /*0x717666*/
  LOBYTE(v19) = *(_BYTE *)(this + 3232); /*0x71766b*/
  Power::FlagProcess(a2, v19); /*0x717674*/
  LOBYTE(v20) = *(_BYTE *)(this + 3233); /*0x717679*/
  Power::FlagProcess(a2, v20); /*0x717682*/
  LOBYTE(v21) = *(_BYTE *)(this + 3276); /*0x717687*/
  v22 = Power::FlagProcess(a2, v21); /*0x717690*/
  LOBYTE(v22) = *(_BYTE *)(this + 3277); /*0x717695*/
  Power::FlagProcess(a2, v22); /*0x71769e*/
  LOBYTE(v23) = *(_BYTE *)(this + 3279); /*0x7176a3*/
  Power::FlagProcess(a2, v23); /*0x7176ac*/
  LOBYTE(v24) = *(_BYTE *)(this + 3280); /*0x7176b1*/
  v25 = Power::FlagProcess(a2, v24); /*0x7176ba*/
  LOBYTE(v25) = *(_BYTE *)(this + 3281); /*0x7176bf*/
  Power::FlagProcess(a2, v25); /*0x7176c8*/
  LOBYTE(v26) = *(_BYTE *)(this + 3282); /*0x7176cd*/
  Power::FinalizeDrain(a2, v26); /*0x7176d6*/
  LOBYTE(v27) = *(_BYTE *)(this + 3283); /*0x7176db*/
  v28 = Power::FinalizeDrain(a2, v27); /*0x7176e4*/
  LOBYTE(v28) = *(_BYTE *)(this + 3284); /*0x7176e9*/
  Power::FlagProcess(a2, v28); /*0x7176f2*/
  LOBYTE(v29) = *(_BYTE *)(this + 3348); /*0x7176f7*/
  Power::FlagProcess(a2, v29); /*0x717700*/
  LOBYTE(v30) = *(_BYTE *)(this + 3349); /*0x717705*/
  v31 = Power::FlagProcess(a2, v30); /*0x71770e*/
  LOBYTE(v31) = *(_BYTE *)(this + 3360); /*0x717713*/
  Power::FlagProcess(a2, v31); /*0x71771c*/
  LOBYTE(v32) = *(_BYTE *)(this + 3361); /*0x717721*/
  Power::FlagProcess(a2, v32); /*0x71772a*/
  LOBYTE(v33) = *(_BYTE *)(this + 3363); /*0x71772f*/
  v34 = Power::FlagProcess(a2, v33); /*0x717738*/
  LOBYTE(v34) = *(_BYTE *)(this + 3364); /*0x71773d*/
  Power::FlagProcess(a2, v34); /*0x717746*/
  LOBYTE(v35) = *(_BYTE *)(this + 3365); /*0x71774b*/
  Power::FlagProcess(a2, v35); /*0x717754*/
  LOBYTE(v36) = *(_BYTE *)(this + 3366); /*0x717759*/
  v37 = Power::FlagProcess(a2, v36); /*0x717762*/
  LOBYTE(v37) = *(_BYTE *)(this + 3518); /*0x717767*/
  Power::FlagProcess(a2, v37); /*0x717770*/
  LOBYTE(v38) = *(_BYTE *)(this + 3519); /*0x717775*/
  Power::FlagProcess(a2, v38); /*0x71777e*/
  LOBYTE(v39) = *(_BYTE *)(this + 1710); /*0x717783*/
  v40 = Power::FlagProcess(a2, v39); /*0x71778c*/
  LOBYTE(v40) = *(_BYTE *)(this + 1711); /*0x717791*/
  Power::FlagProcess(a2, v40); /*0x71779a*/
  LOBYTE(v41) = *(_BYTE *)(this + 1712); /*0x71779f*/
  return Power::FlagProcess(a2, v41); /*0x7177ad*/
}



// ==== 0x007177C0  TechnoClass::GetAudioEntry  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetAudioEntry(TechnoClass *this, int a2)
{
  return (int)this + 28 * a2 + 2200; /*0x7177d4*/
}



// ==== 0x007177E0  TechnoClass::processSpyAction  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::processSpyAction(TechnoClass *this, int a2)
{
  return (int)this + 28 * a2 + 2708; /*0x7177f4*/
}



// ==== 0x00717800  TechnoTypeClass::GetSightRange  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoClass::GetSightRange(TechnoTypeClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->?[1332]; /*0x717800*/
  if ( result == -1 ) /*0x717809*/
    return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1972); /*0x717810*/
  return result; /*0x717816*/
}



// ==== 0x00717820  ObjectTypeClass::loadTypeMember  this=ObjectTypeClass  sig=csp ====
char __thiscall ObjectTypeClass::loadTypeMember_5717820(TechnoTypeClass *this)
{
  int v2; // eax
  const char *v3; // ecx

  LOBYTE(v2) = this->__pad_DC8[8]; /*0x717823*/
  v3 = &this->__pad_DC8[8]; /*0x717829*/
  if ( (_BYTE)v2 ) /*0x717831*/
  {
    v2 = FileExtension::MapHandler(v3); /*0x717833*/
    *(_DWORD *)&this->__pad_DC8[40] = v2; /*0x717838*/
  }
  return v2; /*0x71783e*/
}



// ==== 0x00717840  LoadTheaterClassMIX_Load_717840  this=-  sig=ida-proto ====
int sub_717840()
{
  int result; // eax
  int i; // edi
  int v2; // esi

  result = dword_A8EB10; /*0x717840*/
  for ( i = 0; i < dword_A8EB10; ++i ) /*0x71784a*/
  {
    v2 = *((_DWORD *)dword_A8EB04 + i); /*0x717852*/
    if ( *(_BYTE *)(v2 + 3536) ) /*0x717855*/
      *(_DWORD *)(v2 + 3568) = FileExtension::MapHandler((const char *)(v2 + 3536)); /*0x71786a*/
    result = dword_A8EB10; /*0x717870*/
  }
  return result; /*0x71787b*/
}



// ==== 0x00717880  HouseClass::HasPower  this=HouseClass  sig=csp ====
int __thiscall HouseClass::HasPower(HouseClass *this)
{
  return this->builtInfantryTypes[312] > 0; /*0x71788d*/
}



// ==== 0x00717890  BuildingClass::SetSlot  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SetSlot(BuildingClass *this, int a2, int a3)
{
  *((_DWORD *)this + a3 + 517) = a2; /*0x717898*/
  return a3; /*0x71789f*/
}



// ==== 0x007178B0  UnitClass::processEnterTarget  this=UnitClass  sig=csp ====
int __thiscall UnitClass::processEnterTarget(UnitClass *this, int a2)
{
  return this->ToolTipText[a2 + 75]; /*0x7178bb*/
}



// ==== 0x007178C0  BuildingTypeClass::GetUpgradeOffset  this=BuildingTypeClass  sig=csp ====
_DWORD *__userpurge BuildingTypeClass::GetUpgradeOffset@<eax>(
        BuildingTypeClass *this,
        int *a2@<edi>,
        double a3@<st0>,
        _DWORD *a4)
{
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int *v8; // eax
  int v9; // ecx
  int v10; // edi
  void *v11; // ebp
  void *v12; // edi
  int v13; // eax
  int v14; // ebx
  double v16; // [esp+0h] [ebp-2Ch]
  int v17[3]; // [esp+18h] [ebp-14h] BYREF
  _DWORD v18[2]; // [esp+24h] [ebp-8h] BYREF

  v5 = v4; /*0x7178c4*/
  if ( *(_BYTE *)(v4 + 1980) ) /*0x7178c6*/
  {
    v6 = *(_DWORD *)(v4 + 1968); /*0x7178d4*/
    v7 = *(_DWORD *)(v4 + 1972); /*0x7178da*/
    v18[0] = v6; /*0x7178e1*/
    v18[1] = v7; /*0x7178e6*/
    v8 = (int *)World::ToScreen(v17, v18, a2); /*0x7178fb*/
    v9 = *v8; /*0x717900*/
    v10 = v8[1]; /*0x717905*/
    v17[0] = 10 * *(_DWORD *)(v5 + 1976); /*0x71791b*/
    __asm { fild [esp+2Ch+var_14] } /*0x717921*/
    v11 = (void *)(v9 - v17[0]); /*0x717927*/
    v12 = (void *)(v10 - v17[0]); /*0x717929*/
    __asm /*0x71792b*/
    {
      fld st
      fmul st, st(1)
      fadd st, st
      fstp [esp+2Ch+var_2C]; double
      fstp st
    }
    Math::Sqrt(v16); /*0x717936*/
    __asm { fmul ds:dbl_7F4FC0 } /*0x71793b*/
    LOWORD(v13) = Math::RoundToInt(a3); /*0x717944*/
    if ( *(int *)(v5 + 1976) >= 0 ) /*0x717951*/
      v14 = -v13; /*0x717957*/
    else
      v14 = v13; /*0x717953*/
    this->TechnoTypeClass = v11; /*0x71795f*/
    this->? = v12; /*0x717961*/
    this->? = (void *)v14; /*0x717966*/
    return &this->TechnoTypeClass; /*0x717959*/
  }
  else
  {
    this->TechnoTypeClass = *(void **)(v4 + 1968); /*0x71797f*/
    this->? = *(void **)(v4 + 1972); /*0x717984*/
    this->? = *(void **)(v4 + 1976); /*0x71798b*/
    return &this->TechnoTypeClass; /*0x717971*/
  }
}



// ==== 0x007179A0  TechnoTypeClass::ddtor  this=TechnoTypeClass  sig=csp ====
void *__thiscall TechnoTypeClass::ddtor(TechnoTypeClass *this, char a2)
{
  TechnoTypeClass::DTOR((int)this); /*0x7179a3*/
  if ( (a2 & 1) != 0 ) /*0x7179ad*/
    __3_YAXPAX_Z(this); /*0x7179b0*/
  return this; /*0x7179ba*/
}



// ==== 0x007179C0  ObjectClass::nullsub_86  this=ObjectClass  sig=csp ====
void nullsub_86(ObjectClass *this)
{
  ; /*0x7179c0*/
}



// ==== 0x007179D0  ObjectTypeClass::loadTypeMember_57179D0  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_57179D0(ObjectTypeClass *this, int a2, _DWORD *a3)
{
  if ( this != (ObjectTypeClass *)a3 ) /*0x7179d7*/
  {
    this->AbstractTypeClass = (void *)*a3; /*0x7179dd*/
    this->? = (void *)a3[1]; /*0x7179e2*/
    this->? = (void *)a3[2]; /*0x7179e8*/
    this->? = (void *)a3[3]; /*0x7179ee*/
    LOWORD(this->?) = *((_WORD *)a3 + 8); /*0x7179f5*/
  }
  *(_DWORD *)a2 = this->AbstractTypeClass; /*0x717a01*/
  *(_DWORD *)(a2 + 4) = this->?; /*0x717a06*/
  *(_DWORD *)(a2 + 8) = this->?; /*0x717a0c*/
  *(_DWORD *)(a2 + 12) = this->?; /*0x717a12*/
  *(_WORD *)(a2 + 16) = this->?; /*0x717a1a*/
  return a2; /*0x717a19*/
}



// ==== 0x00717A30  ObjectTypeClass::loadTypeMember_5717A30  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5717A30(ObjectTypeClass *this, int a2)
{
  this->AbstractTypeClass = (void *)a2; /*0x717a34*/
  return a2; /*0x717a36*/
}



// ==== 0x00717A40  ObjectClass::ReadPointerFromECX4  this=ObjectClass  sig=csp ====
int __thiscall ReadPointerFromECX4(ObjectClass *this)
{
  return (int)this->AbstractClass; /*0x717a42*/
}



// ==== 0x00717A50  ObjectTypeClass::loadTypeMember_5717A50  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5717A50(ObjectTypeClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x717a50*/
  if ( a2 <= 0 ) /*0x717a56*/
    result = 1; /*0x717a58*/
  this->? = (void *)result; /*0x717a5d*/
  return result; /*0x717a60*/
}



// ==== 0x00717A70  ObjectTypeClass::loadTypeMember_5717A70  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5717A70(ObjectTypeClass *this)
{
  return (int)this->?; /*0x717a73*/
}



// ==== 0x00717A80  ObjectTypeClass::loadTypeMember_5717A80  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5717A80(ObjectTypeClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x717a80*/
  if ( a2 <= 0 ) /*0x717a86*/
    result = 1; /*0x717a88*/
  this->? = (void *)result; /*0x717a8d*/
  return result; /*0x717a90*/
}



// ==== 0x00717AA0  ObjectTypeClass::loadTypeMember_5717AA0  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5717AA0(ObjectTypeClass *this)
{
  return (int)this->?; /*0x717aa3*/
}



// ==== 0x00717AB0  ObjectTypeClass::loadTypeMember_5717AB0  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5717AB0(ObjectTypeClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x717ab0*/
  if ( a2 <= 0 ) /*0x717ab6*/
    result = 1; /*0x717ab8*/
  this->? = (void *)result; /*0x717abd*/
  return result; /*0x717ac0*/
}



// ==== 0x00717AD0  ObjectTypeClass::loadTypeMember_5717AD0  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5717AD0(ObjectTypeClass *this)
{
  return (int)this->?; /*0x717ad3*/
}



// ==== 0x00717AE0  ObjectTypeClass::loadTypeMember_5717AE0  this=ObjectTypeClass  sig=csp ====
BOOL __thiscall ObjectTypeClass::loadTypeMember_5717AE0(ObjectTypeClass *this)
{
  return LOBYTE(this->AbstractTypeClass) == 0; /*0x717ae9*/
}



// ==== 0x00717AF0  TechnoTypeClass::Constructor  this=TypeList  sig=csp ====
_DWORD *__thiscall TechnoTypeClass::Constructor(TechnoTypeClass *this)
{
  this->ObjectTypeClass[1] = 0; /*0x717af4*/
  this->ObjectTypeClass[2] = 0; /*0x717af7*/
  LOBYTE(this->ObjectTypeClass[3]) = 1; /*0x717afa*/
  BYTE1(this->ObjectTypeClass[3]) = 0; /*0x717afe*/
  this->ObjectTypeClass[5] = 10; /*0x717b01*/
  this->ObjectTypeClass[4] = 0; /*0x717b08*/
  this->ObjectTypeClass[0] = (int)&TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x717b0b*/
  return this->ObjectTypeClass; /*0x717b11*/
}



// ==== 0x00717B20  TechnoTypeClass::SaveLoadDataArray  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoTypeClass::SaveLoadDataArray(TechnoTypeClass *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x717b2c*/
  v6 = this->ObjectTypeClass[4]; /*0x717b39*/
  (*(void (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &v6, 4, 0); /*0x717b3d*/
  result = v6; /*0x717b40*/
  for ( i = 0; i < v6; ++i ) /*0x717b48*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->ObjectTypeClass[1] + 4 * i, 4, 0); /*0x717b58*/
    result = v6; /*0x717b5b*/
  }
  return result; /*0x717b64*/
}



// ==== 0x00717B70  _TypeList_PBVParticleSystemTypeClass::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList_cptr_ParticleSystemTypeClass::QueryInterface(
        _TypeList_PBVParticleSystemTypeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x717b73*/
  *(_DWORD *)this = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x717b76*/
  if ( v3 && this->IsAllocated ) /*0x717b80*/
  {
    __3_YAXPAX_Z(v3); /*0x717b88*/
    this->Items = 0; /*0x717b90*/
  }
  this->IsAllocated = 0; /*0x717b9b*/
  this->Capacity = 0; /*0x717ba1*/
  if ( (a2 & 1) != 0 ) /*0x717ba8*/
    __3_YAXPAX_Z(this); /*0x717bab*/
  return this; /*0x717bb5*/
}



// ==== 0x00717BC0  TechnoTypeClass::Constructor_0  this=DynamicVector  sig=csp ====
_DWORD *__thiscall TechnoTypeClass::Constructor_0(TechnoTypeClass *this, int a2)
{
  this->ObjectTypeClass[0] = (int)&DynamicVectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x717bc2*/
  return this->ObjectTypeClass; /*0x717bc8*/
}



// ==== 0x00717BD0  IntDynamicVector::Construct  this=DynamicVector  sig=csp ====
_DWORD *__thiscall IntDynamicVector::Construct(IntDynamicVector *this, int a2)
{
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<int>::`vftable'; /*0x717bd2*/
  return this->__pad_0; /*0x717bd8*/
}



// ==== 0x00717BE0  TechnoTypeClass::Constructor_1  this=DynamicVector  sig=csp ====
_DWORD *__thiscall TechnoTypeClass::Constructor_1(TechnoTypeClass *this, int a2)
{
  this->ObjectTypeClass[0] = (int)&DynamicVectorClass<BuildingTypeClass const *>::`vftable'; /*0x717be2*/
  return this->ObjectTypeClass; /*0x717be8*/
}



// ==== 0x00717BF0  ObjectTypeClass::CheckFlag  this=DynamicVector  sig=csp ====
_DWORD *__thiscall ObjectTypeClass::CheckFlag(ObjectTypeClass *this, int a2)
{
  this->AbstractTypeClass = &DynamicVectorClass<AnimTypeClass const *>::`vftable'; /*0x717bf2*/
  return &this->AbstractTypeClass; /*0x717bf8*/
}



// ==== 0x00717C00  ObjectTypeClass::loadTypeMember_5717C00  this=ObjectTypeClass  sig=csp ====
_DWORD *__thiscall ObjectTypeClass::loadTypeMember_5717C00(ObjectTypeClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (ObjectTypeClass *)a2 ) /*0x717c0a*/
    return &this->AbstractTypeClass; /*0x717c0a*/
  (*((void (__thiscall **)(ObjectTypeClass *))this->AbstractTypeClass + 3))(this); /*0x717c0e*/
  v3 = (void *)a2[2]; /*0x717c11*/
  this->? = v3; /*0x717c16*/
  if ( !v3 ) /*0x717c19*/
  {
    this->? = 0; /*0x717c5a*/
    BYTE1(this->?) = 0; /*0x717c61*/
    return &this->AbstractTypeClass; /*0x717c65*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x717c23*/
  this->? = v4; /*0x717c2b*/
  if ( !v4 ) /*0x717c30*/
    return &this->AbstractTypeClass; /*0x717c30*/
  vtable2 = this->?; /*0x717c32*/
  v6 = 0; /*0x717c35*/
  BYTE1(this->?) = 1; /*0x717c39*/
  if ( (int)vtable2 <= 0 ) /*0x717c3d*/
    return &this->AbstractTypeClass; /*0x717c3d*/
  do /*0x717c51*/
  {
    *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x717c48*/
    ++v6; /*0x717c4e*/
  }
  while ( v6 < (int)this->? ); /*0x717c51*/
  return &this->AbstractTypeClass; /*0x717c55*/
}



// ==== 0x00717C70  TypeList::ParticleConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList::ParticleConstructor(TypeList *this, int a2, int a3)
{
  this->? = 0; /*0x717c79*/
  this->? = a2; /*0x717c80*/
  this->? = 1; /*0x717c83*/
  this->? = 0; /*0x717c87*/
  this->DynamicVectorClass = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x717c8b*/
  if ( a2 ) /*0x717c91*/
  {
    if ( a3 ) /*0x717c99*/
    {
      this->? = (void *)a3; /*0x717c9b*/
    }
    else
    {
      this->? = (void *)__2_YAPAXI_Z(4 * a2); /*0x717cac*/
      this->? = 1; /*0x717caf*/
    }
  }
  this->DynamicVectorClass = &DynamicVectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x717cb3*/
  this->? = 10; /*0x717cb9*/
  this->? = 0; /*0x717cc0*/
  return &this->DynamicVectorClass; /*0x717cc9*/
}



// ==== 0x00717CD0  TypeList::PushBack  this=TypeList  sig=csp ====
char __thiscall TypeList::PushBack(TypeList *this, _DWORD *a2)
{
  int Capacity; // ecx
  int CapacityIncrement; // eax
  int Count; // eax
  _DWORD *Items; // edx

  Capacity = this->?; /*0x717cd3*/
  if ( this->? >= Capacity ) /*0x717cdb*/
  {
    if ( !this->? && Capacity ) /*0x717ce6*/
      return 0; /*0x717ce6*/
    CapacityIncrement = this->?; /*0x717ce8*/
    if ( CapacityIncrement <= 0 /*0x717cf8*/
      || !(*((unsigned __int8 (__thiscall **)(TypeList *, int, _DWORD))this->DynamicVectorClass + 2))(
            this,
            Capacity + CapacityIncrement,
            0) )
    {
      return 0; /*0x717cff*/
    }
  }
  Count = this->?; /*0x717d05*/
  Items = this->?; /*0x717d08*/
  this->? = Count + 1; /*0x717d0e*/
  Items[Count] = *a2; /*0x717d18*/
  return 1; /*0x717d01*/
}



// ==== 0x00717D20  VectorClass::CopyParticle  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopyParticle(DynamicVectorClass *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int Capacity; // ecx
  int v6; // eax

  this->Items = 0; /*0x717d2d*/
  this->Capacity = 0; /*0x717d30*/
  this->IsInitialized[0] = 1; /*0x717d33*/
  this->IsAllocated[0] = 0; /*0x717d37*/
  this->vtable0 = (int)&VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x717d3a*/
  if ( this != (DynamicVectorClass *)a2 ) /*0x717d40*/
  {
    VectorClass::Cleanup((int)this); /*0x717d42*/
    v3 = a2[2]; /*0x717d48*/
    this->Capacity = v3; /*0x717d4d*/
    if ( v3 ) /*0x717d50*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x717d56*/
      this->Items = v4; /*0x717d60*/
      if ( v4 ) /*0x717d63*/
      {
        Capacity = this->Capacity; /*0x717d65*/
        v6 = 0; /*0x717d68*/
        this->IsAllocated[0] = 1; /*0x717d6c*/
        if ( Capacity > 0 ) /*0x717d70*/
        {
          do /*0x717d84*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x717d7b*/
            ++v6; /*0x717d81*/
          }
          while ( v6 < this->Capacity ); /*0x717d84*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x717d88*/
      this->IsAllocated[0] = 0; /*0x717d8b*/
    }
  }
  this->Count = a2[4]; /*0x717d91*/
  this->CapacityIncrement = a2[5]; /*0x717d97*/
  this->vtable0 = (int)&TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x717d9a*/
  return &this->vtable0; /*0x717da2*/
}



// ==== 0x00717DB0  TechnoTypeClass::RemoveItem  this=TechnoTypeClass  sig=csp ====
char __thiscall TechnoTypeClass::RemoveItem(TechnoTypeClass *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->ObjectTypeClass[4]; /*0x717db0*/
  v3 = a2; /*0x717db3*/
  if ( a2 >= v2 ) /*0x717db9*/
    return 0; /*0x717ddc*/
  v4 = v2 - 1; /*0x717dbb*/
  this->ObjectTypeClass[4] = v4; /*0x717dbe*/
  if ( a2 < v4 ) /*0x717dc1*/
  {
    do /*0x717dd4*/
    {
      ++v3; /*0x717dc7*/
      *(_DWORD *)(this->ObjectTypeClass[1] + 4 * v3 - 4) = *(_DWORD *)(this->ObjectTypeClass[1] + 4 * v3); /*0x717dcb*/
    }
    while ( v3 < this->ObjectTypeClass[4] ); /*0x717dd4*/
  }
  return 1; /*0x717dd9*/
}



// ==== 0x00717DF0  sub_717DF0  this=-  sig=ida-proto ====
void sub_717DF0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x717dfc*/
  dbl_B0EBE0 = Math::Sqrt(v0 + v0); /*0x717e0e*/
}



// ==== 0x00717E20  sub_717E20  this=-  sig=ida-proto ====
void sub_717E20()
{
  dbl_B0EC30 = dbl_B0EBE0 / 60.0; /*0x717e2c*/
}



// ==== 0x00717E40  sub_717E40  this=-  sig=ida-proto ====
void sub_717E40()
{
  dbl_B0EC18 = 1.0 / dbl_B0EC30; /*0x717e4c*/
}



// ==== 0x00717E60  sub_717E60  this=-  sig=ida-proto ====
void sub_717E60()
{
  dbl_B0EC10 = 0.0174532925199433 * 45.0; /*0x717e6c*/
}



// ==== 0x00717E80  sub_717E80  this=-  sig=ida-proto ====
void sub_717E80()
{
  dbl_B0EBE8 = 0.0174532925199433 * 60.0; /*0x717e8c*/
}



// ==== 0x00717EA0  sub_717EA0  this=-  sig=ida-proto ====
void sub_717EA0()
{
  dbl_B0EBC0 = 0.0174532925199433 * 90.0; /*0x717eac*/
}



// ==== 0x00717EC0  sub_717EC0  this=-  sig=ida-proto ====
__int64 sub_717EC0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0EBC0 - dbl_B0EBE8); /*0x717ed2*/
  result = Math::RoundToInt(v0 * dbl_B0EBE0 * 0.5); /*0x717ee6*/
  dword_B0EC38 = result; /*0x717eeb*/
  return result; /*0x717ef0*/
}



// ==== 0x00717F00  sub_717F00  this=-  sig=ida-proto ====
void sub_717F00()
{
  dbl_B0EBF0 = Math::ArcTan((double)dword_B0EC38 * 0.00390625); /*0x717f17*/
}



// ==== 0x00717F30  sub_717F30  this=-  sig=ida-proto ====
void sub_717F30()
{
  dbl_B0EC08 = Math::ArcTan((double)(2 * dword_B0EC38) / dbl_B0EBE0); /*0x717f52*/
}



// ==== 0x00717F60  sub_717F60  this=-  sig=ida-proto ====
__int64 sub_717F60()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0EC38) + 0.5); /*0x717f7b*/
  dword_B0EC2C = result; /*0x717f80*/
  return result; /*0x717f86*/
}



// ==== 0x00717F90  sub_717F90  this=-  sig=ida-proto ====
int sub_717F90()
{
  word_B0EBD8 = 0; /*0x717f92*/
  return 0; /*0x717f9e*/
}



// ==== 0x00717FA0  sub_717FA0  this=-  sig=ida-proto ====
int sub_717FA0()
{
  dword_B0EBF8 = 0; /*0x717fa2*/
  dword_B0EBFC = 0; /*0x717fa7*/
  dword_B0EC00 = 0; /*0x717fac*/
  return 0; /*0x717fb1*/
}



// ==== 0x00717FC0  sub_717FC0  this=-  sig=ida-proto ====
int sub_717FC0()
{
  dword_B0EC28 = 0; /*0x717fc5*/
  dword_B0EC20 = 128; /*0x717fcf*/
  dword_B0EC24 = 128; /*0x717fd4*/
  return 128; /*0x717fd9*/
}



// ==== 0x00717FE0  sub_717FE0  this=-  sig=ida-proto ====
int sub_717FE0()
{
  dword_B0EBC8 = 0; /*0x717fe2*/
  dword_B0EBCC = 0; /*0x717fe7*/
  dword_B0EBD0 = 0; /*0x717fec*/
  dword_B0EBD4 = 0; /*0x717ff1*/
  return 0; /*0x717ff6*/
}



// ==== 0x00718000  TeleportLocomotionClass::TeleportLocomotionClass  this=TeleportLocomotionClass  sig=csp ====
int __thiscall TeleportLocomotionClass::TeleportLocomotionClass(TeleportLocomotionClass *this)
{
  int v2; // ecx

  LocomotionClass::Init((LocomotionClass *)this); /*0x718003*/
  this->MovingDestination[0] = g_BuildingLoadQueue_Array.?; /*0x718011*/
  this->MovingDestination[1] = g_BuildingLoadQueue_Array.?[0]; /*0x71801a*/
  this->MovingDestination[2] = g_BuildingLoadQueue_Array.?[0]; /*0x718026*/
  this->LastCoords[0] = g_BuildingLoadQueue_Array.?; /*0x71802e*/
  this->LastCoords[1] = g_BuildingLoadQueue_Array.?[0]; /*0x718036*/
  this->LastCoords[2] = g_BuildingLoadQueue_Array.?[0]; /*0x71803e*/
  this->Moving = 0; /*0x718043*/
  this->TeleportLocomotionClass_field_bool_35 = 0; /*0x718046*/
  this->TeleportLocomotionClass_field_bool_36 = 0; /*0x718049*/
  this->State = 0; /*0x71804c*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71804f*/
  this->Timer[2] = 0; /*0x718055*/
  this->Timer[0] = v2; /*0x718058*/
  this->Piggybackee = 0; /*0x71805b*/
  *(_DWORD *)this->LocomotionClass = &TeleportLocomotionClass::`vftable'; /*0x71805e*/
  *(_DWORD *)&this->LocomotionClass[4] = &TeleportLocomotionClass::`vftable'; /*0x718064*/
  *(_DWORD *)this->__pad_18 = &TeleportLocomotionClass::`vftable'; /*0x71806b*/
  return (int)this->LocomotionClass; /*0x718074*/
}



// ==== 0x00718080  JumpjetLocomotionClass::ShortFunc  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::ShortFunc_718080(JumpjetLocomotionClass *this)
{
  return LOBYTE(this->Wobbles) == 1; /*0x71808b*/
}



// ==== 0x00718090  TeleportLocomotionClass::ShortFunc  this=TeleportLocomotionClass  sig=csp ====
int __thiscall JumpjetLocomotionClass::ShortFunc_718090(TeleportLocomotionClass *this)
{
  int result; // eax

  result = (*(int (__stdcall **)(char *))(*(_DWORD *)&this->LocomotionClass[4] + 16))(&this->LocomotionClass[4]); /*0x718096*/
  LOBYTE(result) = (_BYTE)result == 0; /*0x71809b*/
  return result; /*0x71809e*/
}



// ==== 0x007180A0  JumpjetLocomotionClass::GetCoordinateConditional  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetCoordinateConditional(JumpjetLocomotionClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int TurnRate; // ecx
  int Speed; // edx
  float Climb; // esi

  if ( (*(unsigned __int8 (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 16))(this) ) /*0x7180a9*/
  {
    result = a2; /*0x7180b0*/
    TurnRate = this->TurnRate; /*0x7180b4*/
    Speed = this->Speed; /*0x7180b7*/
    Climb = this->Climb; /*0x7180ba*/
  }
  else
  {
    TurnRate = this->?->?[0]; /*0x7180d7*/
    Speed = this->?->?[1]; /*0x7180d9*/
    Climb = *(float *)&this->?->?[2]; /*0x7180dc*/
    result = a2; /*0x7180df*/
  }
  *a2 = TurnRate; /*0x7180bf*/
  a2[1] = Speed; /*0x7180c1*/
  *((float *)a2 + 2) = Climb; /*0x7180c4*/
  return result; /*0x7180c7*/
}



// ==== 0x00718100  TeleportLocomotionClass::ProcessFactoryExit  this=TeleportLocomotionClass  sig=csp ====
_DWORD *__userpurge JumpjetLocomotionClass::ProcessFactoryExit@<eax>(
        TeleportLocomotionClass *this,
        int a2@<ebp>,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // ebx
  _DWORD *result; // eax
  FootClass *Owner; // ecx
  CellClass *v9; // eax
  int *v10; // [esp+0h] [ebp-10h]
  int v11; // [esp+4h] [ebp-Ch] BYREF
  char v12[4]; // [esp+8h] [ebp-8h]
  int v13; // [esp+Ch] [ebp-4h]

  result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 223))(this->?); /*0x71810d*/
  if ( (_BYTE)result /*0x71814e*/
    || (result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 224))(this->?), (_BYTE)result)
    || (result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 117))(this->?), (_BYTE)result)
    || (result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 118))(this->?), (_BYTE)result) )
  {
    this->?->movementDestination = 0; /*0x718213*/
  }
  else
  {
    *(_DWORD *)v12 = a4; /*0x718160*/
    Owner = this->?; /*0x718164*/
    v11 = a3; /*0x718167*/
    v13 = a5; /*0x71816b*/
    if ( Owner->? && (*((int (__thiscall **)(FootClass *))Owner->TechnoClass + 11))(Owner) == 15 ) /*0x718181*/
    {
      v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v11); /*0x71818d*/
      Cell::ApplyDamage((Cell *)v9, (int)&g_BuildingLoadQueue_Array.?, 1, 1, 0); /*0x71819f*/
    }
    Factory::CalculateExitCell((Factory *)&v11, v6, a2, v10, v11, v12[0]); /*0x7181ac*/
    result = &this->MovingDestination[2]; /*0x7181ba*/
    if ( this->MovingDestination[2] == g_BuildingLoadQueue_Array.? /*0x7181d9*/
      && this->LastCoords[0] == g_BuildingLoadQueue_Array.?[0]
      && this->LastCoords[1] == g_BuildingLoadQueue_Array.?[0] )
    {
      return (*((_DWORD *(__thiscall **)(FootClass *, _DWORD, int))this->?->TechnoClass + 288))(this->?, 0, 1); /*0x718202*/
    }
    else
    {
      LOBYTE(this->LastCoords[2]) = 1; /*0x7181db*/
      *(_DWORD *)this->__pad_18 = *result; /*0x7181e4*/
      this->MovingDestination[0] = this->LastCoords[0]; /*0x7181e9*/
      this->MovingDestination[1] = this->LastCoords[1]; /*0x7181ef*/
    }
  }
  return result; /*0x7181f2*/
}



// ==== 0x00718230  TeleportLocomotionClass::ResetMovementState  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ResetMovementState(TeleportLocomotionClass *this)
{
  *(_DWORD *)this->__pad_18 = g_BuildingLoadQueue_Array.?; /*0x71823d*/
  this->MovingDestination[0] = g_BuildingLoadQueue_Array.?[0]; /*0x718246*/
  this->MovingDestination[1] = g_BuildingLoadQueue_Array.?[0]; /*0x71824f*/
  LOBYTE(this->LastCoords[2]) = 0; /*0x718254*/
  BYTE2(this->LastCoords[2]) = 0; /*0x718257*/
  return (int)this->LocomotionClass; /*0x71825a*/
}



// ==== 0x00718260  ObjectClass::FindPlacementPosition  this=ObjectClass  sig=csp ====
char __thiscall ObjectClass::FindPlacementPosition(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  ObjectClass *altObject; // esi
  int v7; // ebx
  _DWORD *v8; // eax
  int v9; // eax
  void *vtable0; // edx
  int v11; // eax
  void *v12; // edx
  _DWORD *v13; // eax
  int v14; // esi
  int TileIndex; // eax
  int v16; // edx
  CellClass *v17; // eax
  _DWORD *v18; // eax
  int v19; // esi
  int v20; // edi
  int v21; // ebx
  void *v22; // eax
  _DWORD *v23; // eax
  int v24; // esi
  int *v25; // edx
  int v26; // ecx
  int v27; // eax
  int *p_owningHouseIndex; // esi
  _DWORD *vtable3; // ecx
  char *v31; // eax
  _BYTE *v32; // eax
  int *v33; // eax
  int *v34; // ebp
  int v35; // edx
  char v36; // [esp-28h] [ebp-60h]
  int v37; // [esp+14h] [ebp-24h] BYREF
  char v38[4]; // [esp+18h] [ebp-20h] BYREF
  __int16 v39[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  __int16 *v40; // [esp+20h] [ebp-18h]
  __int16 v41[2]; // [esp+24h] [ebp-14h] BYREF
  int v42; // [esp+28h] [ebp-10h] BYREF
  int v43; // [esp+2Ch] [ebp-Ch] BYREF
  int v44; // [esp+30h] [ebp-8h]
  int v45; // [esp+34h] [ebp-4h]

  if ( (_BYTE)a5 ) /*0x71826f*/
  {
    p_owningHouseIndex = &this->owningHouseIndex; /*0x718664*/
    if ( this->owningHouseIndex == g_BuildingLoadQueue_Array.? /*0x718681*/
      && this->fallRate == g_BuildingLoadQueue_Array.?[0]
      && this->nextObject == (ObjectClass *)g_BuildingLoadQueue_Array.?[0] )
    {
      vtable3 = this->?; /*0x71868b*/
      v43 = vtable3[39]; /*0x71869a*/
      v44 = vtable3[40]; /*0x7186a1*/
      v45 = vtable3[41]; /*0x7186a8*/
      (*(void (__stdcall **)(int *))(*vtable3 + 244))(&v43); /*0x7186b3*/
    }
    else
    {
      (*(void (__stdcall **)(int *))(*(_DWORD *)this->? + 244))(&this->owningHouseIndex); /*0x718689*/
    }
    v31 = (char *)this->? + 648; /*0x7186be*/
    *p_owningHouseIndex = *(_DWORD *)v31; /*0x7186c6*/
    this->fallRate = *((_DWORD *)v31 + 1); /*0x7186cb*/
    this->nextObject = (ObjectClass *)*((_DWORD *)v31 + 2); /*0x7186d1*/
    this->nextObject = (ObjectClass *)Cell::GetGroundHeight(&this->owningHouseIndex); /*0x7186e4*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &this->owningHouseIndex)->flags[0] & 0x100) == 0 /*0x7186fa*/
      || (v32 = this->?, v32[140]) )
    {
      *((_BYTE *)this->? + 140) = 0; /*0x718719*/
    }
    else
    {
      v32[140] = 1; /*0x718704*/
      this->nextObject = (ObjectClass *)((char *)this->nextObject + g_BuildingLoadQueue_Array.?[1]); /*0x718711*/
    }
    (*(void (__thiscall **)(void *, int *))(*(_DWORD *)this->? + 240))(this->?, &this->owningHouseIndex); /*0x718726*/
  }
  else
  {
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2)->flags[0] & 0x100) != 0 ) /*0x71828d*/
      altObject = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2)->altObject; /*0x71829e*/
    else
      altObject = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2)->firstObject; /*0x7182b5*/
    v7 = *(_DWORD *)&Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2)->__pad_28[28]; /*0x7182ca*/
    for ( LOBYTE(a5) = 0; altObject; altObject = altObject->nextObject ) /*0x7182d6*/
    {
      if ( !(*((unsigned __int8 (__thiscall **)(ObjectClass *))altObject->AbstractClass + 88))(altObject) /*0x718305*/
        && (*((int (__thiscall **)(ObjectClass *))altObject->AbstractClass + 11))(altObject) == 15
        && (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 44))(this->?) == 15 )
      {
        v8 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, int *))altObject->AbstractClass + 18))(altObject, &v43); /*0x718310*/
        if ( a2 == *v8 && a3 == v8[1] && a4 == v8[2] ) /*0x718339*/
        {
          v9 = (*((int (__thiscall **)(ObjectClass *))altObject->AbstractClass + 33))(altObject); /*0x718343*/
          vtable0 = altObject->AbstractClass; /*0x718354*/
          v37 = *(_DWORD *)(v9 + 160); /*0x718357*/
          (*((void (__thiscall **)(ObjectClass *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))vtable0 + 91))( /*0x71836e*/
            altObject,
            &v37,
            0,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1,
            0,
            0);
        }
      }
      else if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *))altObject->AbstractClass + 88))(altObject) /*0x718397*/
             || (altObject->? & 4) == 0 )
      {
        if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *))altObject->AbstractClass + 88))(altObject) ) /*0x7183d4*/
        {
          *(_DWORD *)v39 = *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 132))(this->?) + 160); /*0x7183f5*/
          (*(void (__thiscall **)(void *, __int16 *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)this->? /*0x71840f*/
                                                                                                 + 364))(
            this->?,
            v39,
            0,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1,
            0,
            0);
        }
        else if ( (altObject->? & 4) == 0 ) /*0x718428*/
        {
          LOBYTE(a5) = 1; /*0x71842a*/
        }
      }
      else
      {
        v11 = (*((int (__thiscall **)(ObjectClass *))altObject->AbstractClass + 33))(altObject); /*0x71839d*/
        v12 = altObject->AbstractClass; /*0x7183a9*/
        *(_DWORD *)v38 = *(_DWORD *)(v11 + 160); /*0x7183ab*/
        (*((void (__thiscall **)(ObjectClass *, char *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v12 + 91))( /*0x7183c8*/
          altObject,
          v38,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          1,
          0,
          0);
      }
    }
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2)->flags[0] & 0x100) != 0 /*0x71846c*/
      && (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2)->flags[0] & 0x200) == 0 )
    {
      LOBYTE(a5) = 1; /*0x71846e*/
    }
    v13 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)this->? + 72))(this->?, &v43); /*0x71847d*/
    LOWORD(v37) = *v13 / 256; /*0x718490*/
    HIWORD(v37) = v13[1] / 256; /*0x7184a8*/
    *(_DWORD *)v39 = v37; /*0x7184b1*/
    v40 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v39); /*0x7184c0*/
    v38[0] = ObjectClass::processPointerInvalid != 0; /*0x7184d1*/
    if ( v7 != -1 /*0x7184f4*/
      && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v7) + 681)
      && !ObjectClass::processPointerInvalid
      || (_BYTE)a5 )
    {
      v14 = *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 132))(this->?) + 1460); /*0x718505*/
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
      v37 = 0; /*0x71852b*/
      LOWORD(a5) = a2 / 256; /*0x71855c*/
      HIWORD(a5) = a3 / 256; /*0x718561*/
      *(_DWORD *)v39 = a5; /*0x71857b*/
      v36 = BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v39) + 80)) & 1; /*0x7185b5*/
      TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v40 + 18, v14, v38[0]); /*0x7185bf*/
      *(_DWORD *)v41 = *LayerClass::Pathfinding_Find( /*0x7185e6*/
                          (Type *)&stru_87F5F0.__pad_58[416],
                          v16,
                          &v42,
                          (__int16 *)&a5,
                          1,
                          TileIndex,
                          v14,
                          v36,
                          1,
                          1,
                          0,
                          0,
                          0,
                          1,
                          (__int16 *)&v37,
                          0,
                          0);
      v17 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x7185ea*/
      v18 = (_DWORD *)(*(int (__thiscall **)(CellClass *, int *))(v17->mapCoords[0] + 72))(v17, &v43); /*0x7185f8*/
      v19 = a2 - *v18; /*0x71860b*/
      v20 = a3 - v18[1]; /*0x718611*/
      v21 = a4 - v18[2]; /*0x718617*/
      v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v41); /*0x71861f*/
      v23 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v22 + 72))(v22, &v43); /*0x71862d*/
      v24 = *v23 + v19; /*0x718635*/
      v25 = (int *)((char *)this->? + 648); /*0x71863d*/
      v26 = v20 + v23[1]; /*0x718643*/
      v27 = v21 + v23[2]; /*0x718645*/
      *v25 = v24; /*0x718647*/
      v25[1] = v26; /*0x71864c*/
      v25[2] = v27; /*0x718650*/
      return 0; /*0x718658*/
    }
  }
  v33 = &this->owningHouseIndex; /*0x718735*/
  if ( this->owningHouseIndex == g_BuildingLoadQueue_Array.? /*0x718754*/
    && this->fallRate == g_BuildingLoadQueue_Array.?[0]
    && this->nextObject == (ObjectClass *)g_BuildingLoadQueue_Array.?[0] )
  {
    v34 = (int *)this->?; /*0x71875e*/
    v43 = v34[39]; /*0x71876d*/
    v44 = v34[40]; /*0x718774*/
    v45 = v34[41]; /*0x71877b*/
    v35 = *v34; /*0x71877f*/
    v33 = &v43; /*0x718782*/
  }
  else
  {
    v34 = (int *)this->?; /*0x718756*/
    v35 = *v34; /*0x718759*/
  }
  (*(void (__thiscall **)(int *, int *))(v35 + 240))(v34, v33); /*0x718789*/
  return 1; /*0x718649*/
}



// ==== 0x007187A0  ObjectClass::ProcessUnitDeploymentAtCell  this=ObjectClass  sig=csp ====
char __thiscall ProcessUnitDeploymentAtCell(TechnoClass *this, int a2, int a3, int a4)
{
  _DWORD *i; // edi
  bool v6; // bl
  int v7; // eax
  _DWORD *v8; // eax
  TechnoClass *v9; // ecx
  int v10; // ecx
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  int *vtable3; // ecx
  int v14; // edi
  void *v15; // eax
  Cell *v16; // eax
  TechnoClass *v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  char v22; // [esp+31h] [ebp-5h]
  __int16 v23[2]; // [esp+32h] [ebp-4h] BYREF

  for ( i = (_DWORD *)Coord::To_Cell((Coord *)&dword_87F7E8, &a2)->firstObject; i; i = (_DWORD *)i[12] ) /*0x7187bf*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*i + 352))(i) ) /*0x7187c5*/
    {
      *(_DWORD *)v23 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 132))(this->vtable3) + 160); /*0x7187e7*/
      (*(void (__thiscall **)(int, __int16 *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)this->vtable3 /*0x718804*/
                                                                                          + 364))(
        this->vtable3,
        v23,
        0,
        *(_DWORD *)&dword_8871E0->__pad_C3C[876],
        0,
        1,
        0,
        0);
    }
  }
  v22 = 0; /*0x718814*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 132))(this->vtable3) + 3278) /*0x71885d*/
    && ((Coord::To_Cell((Coord *)&dword_87F7E8, &a2)->flags & 0x100) != 0
     || Coord::To_Cell((Coord *)&dword_87F7E8, &a2)->landType == 1) )
  {
    v22 = 1; /*0x71885f*/
  }
  v6 = 0; /*0x718867*/
  if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 132))(this->vtable3) + 1660) == 3 ) /*0x718878*/
  {
    v6 = 1; /*0x71887d*/
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 132))(this->vtable3) + 1040) ) /*0x718887*/
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 132))(this->vtable3); /*0x718896*/
      v6 = HouseClass::GainedPoweredCenter(*(HouseClass **)(this->vtable3 + 540), v7); /*0x7188af*/
    }
  }
  v23[0] = a2 / 256; /*0x7188c1*/
  v23[1] = a3 / 256; /*0x7188da*/
  if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v23) + 59) != 2 /*0x718962*/
    || v6
    || *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 132))(this->vtable3) + 3278)
    || (*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 44))(this->vtable3) == 15
    || (Coord::To_Cell((Coord *)&dword_87F7E8, &a2)->flags & 0x100) != 0
    || Coord::To_Cell((Coord *)&dword_87F7E8, &a2)->landType == 1 )
  {
    vtable3 = (int *)this->vtable3; /*0x718a01*/
    v23[0] = a2 / 256; /*0x718a14*/
    v23[1] = a3 / 256; /*0x718a2f*/
    v14 = *vtable3; /*0x718a3c*/
    v15 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v23); /*0x718a46*/
    if ( (*(int (__thiscall **)(int, void *, int, int, _DWORD, int))(v14 + 428))(this->vtable3, v15, -1, -1, 0, 1) == 7 /*0x718a60*/
      || (LOBYTE(v12) = v22) != 0 )
    {
      v23[0] = a2 / 256; /*0x718a80*/
      v23[1] = a3 / 256; /*0x718a95*/
      v16 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v23); /*0x718aa2*/
      if ( !(unsigned __int8)Cell::IsGroundTypeRange(v16) /*0x718abd*/
        || (*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 44))(this->vtable3) == 15 )
      {
        v19 = (*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 132))(this->vtable3); /*0x718b23*/
        v20 = this->vtable3; /*0x718b2f*/
        *(_DWORD *)v23 = *(_DWORD *)(v19 + 160); /*0x718b32*/
        LOBYTE(v12) = (*(char (__thiscall **)(int, __int16 *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v20 + 364))( /*0x718b53*/
                        v20,
                        v23,
                        0,
                        *(_DWORD *)&dword_8871E0->__pad_C3C[876],
                        0,
                        1,
                        0,
                        0);
      }
      else
      {
        *(_BYTE *)(this->vtable3 + 973) = 1; /*0x718ac2*/
        (*(void (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 928))(this->vtable3); /*0x718ace*/
        v12 = (_DWORD *)this->vtable3; /*0x718ad4*/
        v17 = (TechnoClass *)v12[182]; /*0x718ad7*/
        if ( v17 ) /*0x718adf*/
        {
          TechnoClass::MutateAll(v17, v12[266], v12[267]); /*0x718aef*/
          v18 = *(_DWORD *)(this->vtable3 + 728); /*0x718af7*/
          if ( v18 ) /*0x718aff*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v18 + 32))(v18, 1); /*0x718b05*/
          v12 = (_DWORD *)this->vtable3; /*0x718b08*/
          v12[182] = 0; /*0x718b0e*/
        }
      }
    }
  }
  else
  {
    *(_BYTE *)(this->vtable3 + 973) = 1; /*0x71896b*/
    (*(void (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 928))(this->vtable3); /*0x718977*/
    v8 = (_DWORD *)this->vtable3; /*0x71897d*/
    v9 = (TechnoClass *)v8[182]; /*0x718980*/
    if ( v9 ) /*0x718988*/
    {
      TechnoClass::MutateAll(v9, v8[266], v8[267]); /*0x718998*/
      v10 = *(_DWORD *)(this->vtable3 + 728); /*0x7189a0*/
      if ( v10 ) /*0x7189a8*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 32))(v10, 1); /*0x7189ae*/
      *(_DWORD *)(this->vtable3 + 728) = 0; /*0x7189b4*/
    }
    v11 = (_DWORD *)this->vtable3; /*0x7189be*/
    if ( v11[266] ) /*0x7189c1*/
    {
      LOBYTE(v12) = (*(char (__thiscall **)(_DWORD *, _DWORD))(*v11 + 224))(v11, v11[266]); /*0x7189ce*/
    }
    else
    {
      v12 = (_DWORD *)v11[267]; /*0x7189dd*/
      if ( v12 ) /*0x7189e5*/
        LOBYTE(v12) = (*(char (__thiscall **)(_DWORD *, _DWORD))(*v11 + 228))(v11, v11[267]); /*0x7189ee*/
    }
  }
  return (char)v12; /*0x7189d4*/
}



// ==== 0x00718B70  Factory::CalculateExitCell  this=Factory  sig=csp ====
char __userpurge Factory::CalculateExitCell@<al>(Factory *this, int a2@<ebx>, int a3@<ebp>, int *a4, int a5, char a6)
{
  _DWORD *v6; // ecx
  _DWORD *v7; // esi
  int *v8; // edi
  _DWORD *v9; // ecx
  Factory *v10; // ebx
  int v11; // ecx
  int *v12; // edx
  signed int v13; // ebp
  int v14; // ecx
  int v15; // kr20_4
  int v16; // ecx
  int v17; // kr24_4
  int v18; // edx
  int v19; // edx
  _DWORD *v20; // ebp
  CellClass *v21; // eax
  CellClass *v22; // eax
  int *v23; // eax
  int *v24; // edx
  int v25; // ebx
  void *v26; // eax
  CellClass *v27; // eax
  _DWORD *v28; // ecx
  _BYTE *v29; // ebx
  int v30; // ebp
  _DWORD *v31; // eax
  int v32; // ecx
  _DWORD *v33; // eax
  CellClass *v34; // eax
  int v35; // ecx
  int v36; // ebx
  int v37; // eax
  void *v38; // eax
  ObjectPlacement *v39; // eax
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
  char v59; // [esp+0h] [ebp-84h]
  _DWORD *v60; // [esp+18h] [ebp-6Ch]
  char v61; // [esp+1Ch] [ebp-68h]
  char v62; // [esp+24h] [ebp-60h]
  char v65; // [esp+38h] [ebp-4Ch]
  __int16 v66[2]; // [esp+3Ch] [ebp-48h] BYREF
  char v67[4]; // [esp+40h] [ebp-44h] BYREF
  int v68; // [esp+44h] [ebp-40h] BYREF
  char v69; // [esp+48h] [ebp-3Ch]
  unsigned __int16 v70; // [esp+4Ah] [ebp-3Ah]
  __int16 v71[2]; // [esp+4Ch] [ebp-38h] BYREF
  int v72; // [esp+50h] [ebp-34h] BYREF
  _DWORD v73[2]; // [esp+54h] [ebp-30h] BYREF
  void *v74; // [esp+5Ch] [ebp-28h] BYREF
  int v75; // [esp+60h] [ebp-24h] BYREF
  int v76; // [esp+64h] [ebp-20h] BYREF
  int v77; // [esp+68h] [ebp-1Ch]
  int v78; // [esp+6Ch] [ebp-18h] BYREF
  int v79; // [esp+70h] [ebp-14h] BYREF
  int v80; // [esp+74h] [ebp-10h] BYREF
  int v81[3]; // [esp+78h] [ebp-Ch] BYREF

  v7 = v6; /*0x718b74*/
  v8 = v6 + 10; /*0x718b80*/
  if ( v6[10] == g_BuildingLoadQueue_Array.? /*0x718b9d*/
    && v6[11] == g_BuildingLoadQueue_Array.?[0]
    && v6[12] == g_BuildingLoadQueue_Array.?[0] )
  {
    v9 = (_DWORD *)v6[3]; /*0x718ba7*/
    v75 = v9[39]; /*0x718bb6*/
    v76 = v9[40]; /*0x718bbd*/
    v77 = v9[41]; /*0x718bc4*/
    (*(void (__stdcall **)(int *))(*v9 + 244))(&v75); /*0x718bcf*/
  }
  else
  {
    (*(void (__stdcall **)(_DWORD *))(*(_DWORD *)v6[3] + 244))(v6 + 10); /*0x718ba5*/
  }
  v10 = this; /*0x718bd6*/
  v73[0] = *(_DWORD *)this->__pad_0; /*0x718bdf*/
  v11 = *(_DWORD *)this->__pad_0; /*0x718be3*/
  v73[1] = this->field_4; /*0x718be8*/
  v74 = this->field_8; /*0x718bef*/
  if ( v11 == g_BuildingLoadQueue_Array.? /*0x718c13*/
    && this->field_4 == (void *)g_BuildingLoadQueue_Array.?[0]
    && this->field_8 == (void *)g_BuildingLoadQueue_Array.?[0] )
  {
    *v8 = *(_DWORD *)this->__pad_0; /*0x71923b*/
    v7[11] = v10->field_4; /*0x719240*/
    v7[12] = v10->field_8; /*0x719246*/
  }
  else
  {
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v73)->flags[0] & 0x100) == 0 /*0x718c6e*/
      || (v12 = (int *)(v7[3] + 156),
          v75 = *v12,
          v76 = v12[1],
          v13 = v12[2],
          v65 = 1,
          v13 <= (int)(3 * g_BuildingLoadQueue_Array.?[4] + Cell::GetGroundHeight(v73))) )
    {
      v65 = 0; /*0x718c70*/
    }
    if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v7[3] + 44))(v7[3]) == 15 ) /*0x718c80*/
    {
      v14 = v7[3]; /*0x718c86*/
      LOBYTE(this) = 0; /*0x718c89*/
      if ( (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 512))(v14, a3, a2) ) /*0x718c90*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v7[3] + 492))(v7[3]); /*0x718c9f*/
      if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v7[3] + 388))(v7[3]) == 8 /*0x718ce3*/
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v7[3] + 388))(v7[3]) == 9
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v7[3] + 388))(v7[3]) == 7
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v7[3] + 388))(v7[3]) == 25 )
      {
        *(_DWORD *)v71 = *(_DWORD *)(v7[3] + 1444); /*0x718cf4*/
        if ( *(_DWORD *)v71 ) /*0x718cf8*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v71 + 44))(*(_DWORD *)v71) == 1 ) /*0x718d02*/
          {
            v15 = *(_DWORD *)v10->__pad_0; /*0x718d13*/
            v70 = (int)v10->field_4 / 256; /*0x718d28*/
            if ( *(_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)v71 + 440))(*(_DWORD *)v71, v73) == __PAIR32__(v70, v15 / 256) ) /*0x718d3c*/
              LOBYTE(a5) = 1; /*0x718d49*/
          }
        }
        v16 = *(_DWORD *)(v7[3] + 1444); /*0x718d51*/
        *(_DWORD *)v71 = v16; /*0x718d59*/
        if ( v16 ) /*0x718d5d*/
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 44))(v16) == 2 ) /*0x718d67*/
          {
            v17 = *(_DWORD *)v10->__pad_0; /*0x718d78*/
            v18 = **(_DWORD **)v71; /*0x718d86*/
            v70 = (int)v10->field_4 / 256; /*0x718d8b*/
            if ( *(_DWORD *)(*(int (__stdcall **)(_DWORD *))(v18 + 440))(v73) == __PAIR32__(v70, v17 / 256) ) /*0x718da1*/
              LOBYTE(a5) = 1; /*0x718dae*/
          }
        }
        v19 = v7[3]; /*0x718db3*/
        v20 = *(_DWORD **)(v19 + 1444); /*0x718db6*/
        if ( v20 ) /*0x718dbe*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(*v20 + 44))(*(_DWORD *)(v19 + 1444)) == 6 ) /*0x718dcb*/
          {
            v21 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v10); /*0x718dd3*/
            if ( Cell::IsBridge((Cell *)v21) == v20 ) /*0x718de1*/
              LOBYTE(a5) = 1; /*0x718de3*/
          }
        }
      }
      v77 = *v8; /*0x718dee*/
      v78 = v7[11]; /*0x718dfa*/
      v62 = a5; /*0x718e05*/
      v79 = v7[12]; /*0x718e06*/
      v22 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v74); /*0x718e1e*/
      v23 = ObjectPlacement::CalcPosition((ObjectPlacement *)v22, &v80, &v74, v62, v67[0], 0); /*0x718e25*/
      *v8 = *v23; /*0x718e32*/
      v7[11] = v23[1]; /*0x718e3b*/
      v7[12] = v23[2]; /*0x718e41*/
      LOWORD(v68) = *v8 / 256; /*0x718e52*/
      v24 = (int *)v7[3]; /*0x718e63*/
      HIWORD(v68) = v7[11] / 256; /*0x718e69*/
      *(_DWORD *)v71 = v68; /*0x718e76*/
      v25 = *v24; /*0x718e7a*/
      v26 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v71); /*0x718e82*/
      if ( (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD))(v25 + 428))(v7[3], v26, -1, -1, 0) ) /*0x718e8b*/
      {
        *v8 = g_BuildingLoadQueue_Array.?; /*0x718e9d*/
        v7[11] = g_BuildingLoadQueue_Array.?[0]; /*0x718ea4*/
        v7[12] = g_BuildingLoadQueue_Array.?[0]; /*0x718ead*/
      }
      v27 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v76); /*0x718eba*/
      (*(void (__thiscall **)(CellClass *, int *))(v27->mapCoords[0] + 72))(v27, &v79); /*0x718ec8*/
      if ( *v8 == g_BuildingLoadQueue_Array.? /*0x718ef5*/
        && v7[11] == g_BuildingLoadQueue_Array.?[0]
        && v7[12] == g_BuildingLoadQueue_Array.?[0] )
      {
        v28 = (_DWORD *)v7[3]; /*0x718efb*/
        v29 = (_BYTE *)v28[361]; /*0x718efe*/
        if ( v29 ) /*0x718f06*/
        {
          if ( (v29[20] & 2) != 0 ) /*0x718f10*/
          {
            v30 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v28 + 132))(v28) + 1460); /*0x718f1e*/
            v31 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *, _DWORD))(*(_DWORD *)v29 + 76))(v29, &v78, 0); /*0x718f2f*/
            *(_WORD *)v67 = *v31 / 256; /*0x718f45*/
            v32 = v7[3]; /*0x718f54*/
            *(_WORD *)&v67[2] = v31[1] / 256; /*0x718f5c*/
            v68 = *(_DWORD *)v67; /*0x718f65*/
            v33 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v32 + 76))(v32, &v78, 0); /*0x718f70*/
            v34 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v33); /*0x718f79*/
            v35 = v7[3]; /*0x718f7e*/
            *(_DWORD *)v71 = v34; /*0x718f81*/
            v69 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v35 + 188))(v35, 0); /*0x718f8e*/
            memset(v67, 0, sizeof(v67)); /*0x718fae*/
            v36 = v7[3]; /*0x718fb8*/
            v59 = BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v68) + 80)) /*0x718fdd*/
                & 1;
            TileIndex = MapClass::GetTileIndex( /*0x718fee*/
                          (MapClass *)&stru_87F5F0.__pad_58[416],
                          (__int16 *)(*(_DWORD *)v71 + 36),
                          v30,
                          v69);
            v37 = (*(int (__thiscall **)(int))(*(_DWORD *)v36 + 132))(v36); /*0x718ff1*/
            *(_DWORD *)v66 = *LayerClass::Pathfinding_Find( /*0x71901b*/
                                (Type *)&stru_87F5F0.__pad_58[416],
                                (int)&v72,
                                &v72,
                                (__int16 *)&v68,
                                *(_DWORD *)(v37 + 1660),
                                TileIndex,
                                v30,
                                v59,
                                1,
                                1,
                                0,
                                1,
                                0,
                                1,
                                (__int16 *)v67,
                                0,
                                0);
            if ( *(_DWORD *)v66 != g_BuildingLoadQueue_Array.? ) /*0x71901f*/
            {
              v38 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v66); /*0x71903d*/
              v61 = (char)this; /*0x71904f*/
              v60 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v38 + 72))(v38, &v78); /*0x71905a*/
              v39 = (ObjectPlacement *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v66); /*0x71906a*/
              v40 = ObjectPlacement::CalcPosition(v39, v81, v60, v61, v65, 0); /*0x719071*/
              *v8 = *v40; /*0x71907a*/
              v7[11] = v40[1]; /*0x71907f*/
              v7[12] = v40[2]; /*0x719085*/
            }
          }
        }
      }
    }
    else
    {
      v41 = (_BYTE *)v7[3]; /*0x71908d*/
      if ( v41[636] ) /*0x719090*/
      {
        (*(void (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v41 + 240))(v41, v7 + 10); /*0x71909d*/
      }
      else
      {
        v42 = *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v41 + 132))(v41) + 1460); /*0x7190b0*/
        v43 = *(_DWORD *)v10->__pad_0 / 256; /*0x7190cf*/
        v44 = (int)v10->field_4 / 256; /*0x7190d2*/
        LOWORD(this) = v43; /*0x7190dc*/
        HIWORD(this) = v44; /*0x7190e1*/
        if ( __PAIR32__(v44, v43) != g_BuildingLoadQueue_Array.? ) /*0x7190ee*/
        {
          v45 = *(_DWORD *)v7[3]; /*0x719106*/
          v46 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&this); /*0x719114*/
          if ( (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD, int))(v45 + 428))(v7[3], v46, -1, -1, 0, 1) ) /*0x71911d*/
          {
            v47 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&this, v42, v65); /*0x719137*/
            v48 = v7[3]; /*0x71913e*/
            v68 = 0; /*0x719142*/
            v58 = v47; /*0x719163*/
            v49 = (*(int (__thiscall **)(int))(*(_DWORD *)v48 + 132))(v48); /*0x719166*/
            this = (Factory *)*LayerClass::Pathfinding_Find( /*0x71918c*/
                                 (Type *)&stru_87F5F0.__pad_58[416],
                                 (int)&this,
                                 &v72,
                                 (__int16 *)&this,
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
        if ( this != (Factory *)g_BuildingLoadQueue_Array.? ) /*0x71919c*/
        {
          (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v7[3] + 244))(v7[3], v7 + 10); /*0x7191b5*/
          v50 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&this); /*0x7191c5*/
          v51 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v50 + 72))(v50, v81); /*0x7191d6*/
          v52 = (__int16)(v51[1] / 256) << 8; /*0x71920c*/
          *v8 = ((__int16)(*v51 / 256) << 8) + 128; /*0x71920f*/
          v7[11] = v52 + 128; /*0x71921b*/
          v7[12] = 0; /*0x71921e*/
          GroundHeight = Cell::GetGroundHeight(v7 + 10); /*0x719221*/
          v54 = v7[3]; /*0x719226*/
          v7[12] = GroundHeight; /*0x719229*/
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v54 + 240))(v54, v7 + 10); /*0x71922f*/
        }
      }
    }
  }
  if ( *v8 == g_BuildingLoadQueue_Array.? /*0x71926e*/
    && v7[11] == g_BuildingLoadQueue_Array.?[0]
    && v7[12] == g_BuildingLoadQueue_Array.?[0] )
  {
    v56 = (_DWORD *)v7[3]; /*0x719286*/
    v75 = v56[39]; /*0x719295*/
    v76 = v56[40]; /*0x71929c*/
    v77 = v56[41]; /*0x7192a3*/
    (*(void (__thiscall **)(_DWORD *, int *))(*v56 + 240))(v56, &v75); /*0x7192ae*/
    return 0; /*0x7192b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v7[3] + 240))(v7[3], v7 + 10); /*0x719276*/
    return 1; /*0x71927d*/
  }
}



// ==== 0x007192C0  TeleportLocomotionClass::UpdateFacingDirection_3  this=TeleportLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::UpdateFacingDirection_3(TeleportLocomotionClass *this, int a2)
{
  return FacingClass::Update((char *)this->?->?, &a2); /*0x7192df*/
}



// ==== 0x007192F0  TeleportLocomotionClass::Deploy  this=TeleportLocomotionClass  sig=csp ====
char __stdcall UnitClass::Deploy(TeleportLocomotionClass *this)
{
  double v1; // st7
  TeleportLocomotionClass *v2; // esi
  FootClass *Owner; // ecx
  int v4; // eax
  int owningHouseIndex0; // edx
  FootClass *v7; // ecx
  int *v8; // ebp
  int i; // edi
  BulletClass *v10; // ecx
  AnimClass *v11; // eax
  int *location; // ecx
  _DWORD *v13; // eax
  int v14; // edi
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  TeleportLocomotionClass *v18; // eax
  int *p_State; // edi
  int v20; // ebx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // ebx
  int *v25; // eax
  TeleportLocomotionClass *v26; // edx
  int v27; // ecx
  int v28; // edx
  FootClass *v29; // edi
  int v30; // eax
  int *v31; // edi
  CrateClass *v32; // ebx
  FootClass *v33; // edi
  int v34; // eax
  int *v35; // edi
  AnimClass *v36; // eax
  int *v37; // ecx
  AnimClass *v38; // eax
  int *v39; // edx
  FootClass *v40; // edi
  int v41; // eax
  int *v42; // edi
  char PlacementPosition; // al
  int v44; // edi
  int *v45; // ebp
  FootClass *v46; // edi
  int v47; // eax
  int *v48; // edi
  __int16 *v49; // eax
  FootClass *v50; // ecx
  int chronoLockRemaining; // ecx
  AnimClass *v52; // eax
  int *v53; // ecx
  BuildingClass *v54; // [esp+18h] [ebp-30h]
  __int16 v55[2]; // [esp+28h] [ebp-20h] BYREF
  int v56; // [esp+2Ch] [ebp-1Ch] BYREF
  int v57; // [esp+30h] [ebp-18h]
  int v58; // [esp+34h] [ebp-14h]
  char v59[4]; // [esp+38h] [ebp-10h] BYREF
  int v60; // [esp+3Ch] [ebp-Ch]
  int v61; // [esp+44h] [ebp-4h]

  v2 = this; /*0x7192f6*/
  Owner = this->?; /*0x7192fd*/
  v61 = 0; /*0x719300*/
  if ( Owner->? && !*(_DWORD *)&this->Moving && !Owner->? ) /*0x719313*/
    goto LABEL_82; /*0x719319*/
  v4 = *(_DWORD *)&this->Moving; /*0x719331*/
  if ( !v4 ) /*0x719336*/
  {
    owningHouseIndex0 = Owner->?; /*0x719338*/
    if ( owningHouseIndex0 ) /*0x719340*/
    {
      *(_DWORD *)&this->Moving = owningHouseIndex0; /*0x719342*/
      return 0; /*0x71934e*/
    }
  }
  if ( Owner->? ) /*0x719351*/
  {
    if ( !v4 ) /*0x7197ce*/
    {
      Owner->? = 1; /*0x7197d0*/
      v2->State = *(_DWORD *)&stru_A8EB00.?[416]; /*0x7197e4*/
      v2->Timer[0] = v60; /*0x7197ea*/
      v2->Timer[1] = 60; /*0x7197ed*/
      ++*(_DWORD *)&v2->Moving; /*0x7197f4*/
      return 0; /*0x719800*/
    }
  }
  else if ( v4 <= 0 ) /*0x719361*/
  {
    if ( (*(unsigned __int8 (__stdcall **)(TeleportLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) ) /*0x71936a*/
    {
      v7 = v2->?; /*0x719375*/
      v8 = &v2->MovingDestination[2]; /*0x719378*/
      if ( v7->?[0] == v2->MovingDestination[2] && v7->?[1] == v2->LastCoords[0] && v7->?[2] == v2->LastCoords[1] /*0x7193c1*/
        || *v8 == g_BuildingLoadQueue_Array.?
        && v2->LastCoords[0] == g_BuildingLoadQueue_Array.?[0]
        && v2->LastCoords[1] == g_BuildingLoadQueue_Array.?[0] )
      {
        (*((void (__thiscall **)(FootClass *, _DWORD, int))v7->TechnoClass + 288))(v7, 0, 1); /*0x7197b4*/
        (*(void (__stdcall **)(TeleportLocomotionClass *))(*(_DWORD *)v2->LocomotionClass + 72))(v2); /*0x7197bd*/
        return 0; /*0x7197c0*/
      }
      else
      {
        AbstractClass::ClearTargetToMeClearManagerTarget((int)v7); /*0x7193c7*/
        for ( i = *(_DWORD *)&stru_A8EB00.?[364] - 1; i >= 0; --i ) /*0x7193d6*/
        {
          v10 = *(BulletClass **)(*(_DWORD *)&stru_A8EB00.?[352] + 4 * i); /*0x7193e1*/
          if ( v10->BulletClass_field_0x10C == v2->? ) /*0x7193ec*/
            BulletClass::LoseTarget(v10); /*0x7193ee*/
        }
        v11 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x7193fb*/
        if ( v11 ) /*0x719405*/
        {
          location = v2->?->?; /*0x71940b*/
          v56 = *location; /*0x71941c*/
          v57 = location[1]; /*0x719423*/
          v58 = location[2]; /*0x71942f*/
          AnimClass::ctor( /*0x719442*/
            v11,
            *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 828),
            &v56,
            0,
            1,
            (void *)0x600,
            0,
            0);
        }
        v13 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *))v2->?->TechnoClass + 18))(v2->?, v59); /*0x719451*/
        v14 = v2->LastCoords[1]; /*0x719459*/
        v15 = *v13 - *v8; /*0x71945c*/
        v16 = v13[1]; /*0x71945e*/
        v17 = v13[2]; /*0x719461*/
        v56 = v15; /*0x719464*/
        v57 = v16 - v2->LastCoords[0]; /*0x71946f*/
        v58 = v17 - v14; /*0x719473*/
        Math::Sqrt((double)v15 * (double)v15 + (double)(v17 - v14) * (double)(v17 - v14) + (double)v57 * (double)v57); /*0x71949f*/
        LOWORD(v18) = Math::RoundToInt(v1); /*0x7194a7*/
        p_State = &v2->State; /*0x7194ac*/
        this = v18; /*0x7194ba*/
        v2->State = *(_DWORD *)&stru_A8EB00.?[416]; /*0x7194be*/
        v2->Timer[0] = v60; /*0x7194c4*/
        v2->Timer[1] = 0; /*0x7194c7*/
        v20 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x7194ca*/
        if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3064) ) /*0x7194d0*/
        {
          v21 = (int)v18 / *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3060); /*0x7194e3*/
          *p_State = *(_DWORD *)&stru_A8EB00.?[416]; /*0x7194eb*/
          v2->Timer[0] = v60; /*0x7194f1*/
          v2->Timer[1] = v21; /*0x7194f4*/
          v20 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x7194f7*/
        }
        v22 = *p_State; /*0x7194fd*/
        v23 = v2->Timer[1]; /*0x7194ff*/
        if ( *p_State != -1 ) /*0x719505*/
        {
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v22 >= v23 ) /*0x719511*/
            v23 = 0; /*0x719517*/
          else
            v23 -= *(_DWORD *)&stru_A8EB00.?[416] - v22; /*0x719513*/
        }
        v24 = *(_DWORD *)(v20 + 3068); /*0x719519*/
        if ( v23 <= v24 ) /*0x719521*/
        {
          v58 = v24; /*0x71952d*/
          v56 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x719531*/
          v25 = &v56; /*0x719535*/
        }
        else
        {
          v25 = &v2->State; /*0x719523*/
        }
        *p_State = *v25; /*0x71953d*/
        v2->Timer[0] = v25[1]; /*0x719542*/
        v26 = this; /*0x719548*/
        v2->Timer[1] = v25[2]; /*0x71954c*/
        if ( (int)v26 < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3072) ) /*0x71955b*/
        {
          v27 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3068); /*0x719562*/
          *p_State = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71956a*/
          v2->Timer[0] = v60; /*0x719570*/
          v2->Timer[1] = v27; /*0x719573*/
        }
        v2->?->? = 1; /*0x719579*/
        if ( (*((int (__thiscall **)(FootClass *))v2->?->TechnoClass + 11))(v2->?) == 1 && *((_BYTE *)v2->?[1].? + 3598) ) /*0x719596*/
        {
          v28 = v60; /*0x7195a5*/
          *p_State = *(_DWORD *)&stru_A8EB00.?[416]; /*0x7195ab*/
          v2->Timer[0] = v28; /*0x7195ad*/
          v2->Timer[1] = 0; /*0x7195b0*/
          v2->?->? = 0; /*0x7195b6*/
        }
        if ( v2->?->parasiteEatingMe ) /*0x7195bf*/
          BuildingClass::Deploy(v54, (int)v8, (int)p_State); /*0x7195cf*/
        (*((void (__thiscall **)(FootClass *, _DWORD))v2->?->TechnoClass + 73))(v2->?, 0); /*0x7195db*/
        v29 = v2->?; /*0x7195e1*/
        v30 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))v29->TechnoClass + 33))(v29) + 1400); /*0x7195ee*/
        if ( v30 != -1 || (v30 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 540), v30 != -1) ) /*0x719608*/
        {
          v31 = v29->?; /*0x71960a*/
          v56 = *v31; /*0x719614*/
          v57 = v31[1]; /*0x71961b*/
          v58 = v31[2]; /*0x719624*/
          StartAudioControllerAt(v30, &v56, 0); /*0x71962c*/
        }
        (*((void (__thiscall **)(FootClass *, int *))v2->?->TechnoClass + 109))(v2->?, &v2->MovingDestination[2]); /*0x719637*/
        LOWORD(this) = *v8 / 256; /*0x71964c*/
        HIWORD(this) = v2->LastCoords[0] / 256; /*0x719664*/
        *(_DWORD *)v55 = this; /*0x71966d*/
        v32 = (CrateClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v55); /*0x71967f*/
        (*((void (__thiscall **)(FootClass *, int *))v2->?->TechnoClass + 109))(v2->?, &v2->MovingDestination[2]); /*0x719684*/
        v2->?->? = (v32[26].CrateClass_field_0x08 & 0x100) != 0; /*0x719698*/
        (*((void (__thiscall **)(FootClass *, _DWORD))v2->?->TechnoClass + 115))(v2->?, 0); /*0x7196b2*/
        (*((void (__thiscall **)(FootClass *, int))v2->?->TechnoClass + 73))(v2->?, 1); /*0x7196bf*/
        v33 = v2->?; /*0x7196c5*/
        v34 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))v33->TechnoClass + 33))(v33) + 1396); /*0x7196d2*/
        if ( v34 != -1 || (v34 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 536), v34 != -1) ) /*0x7196ec*/
        {
          v35 = v33->?; /*0x7196ee*/
          v56 = *v35; /*0x7196f8*/
          v57 = v35[1]; /*0x7196ff*/
          v58 = v35[2]; /*0x719708*/
          StartAudioControllerAt(v34, &v56, 0); /*0x719710*/
        }
        (*((void (__thiscall **)(FootClass *, int))v2->?->TechnoClass + 99))(v2->?, 2); /*0x71971c*/
        (*(void (__stdcall **)(TeleportLocomotionClass *))(*(_DWORD *)v2->LocomotionClass + 72))(v2); /*0x719725*/
        CrateClass::ProcessPickup(v32, (int)v2->?); /*0x71972e*/
        (*((void (__thiscall **)(FootClass *, _DWORD, int))v2->?->TechnoClass + 288))(v2->?, 0, 1); /*0x71973c*/
        v36 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x719747*/
        if ( v36 ) /*0x719751*/
        {
          v37 = v2->?->?; /*0x719758*/
          v56 = *v37; /*0x71976b*/
          v57 = v37[1]; /*0x719772*/
          v58 = v37[2]; /*0x71977e*/
          AnimClass::ctor( /*0x719791*/
            v36,
            *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 828),
            &v56,
            0,
            1,
            (void *)0x600,
            0,
            0);
        }
        v2->?->? = 0; /*0x719799*/
        return 0; /*0x7197a3*/
      }
    }
    return 0; /*0x719be5*/
  }
  switch ( v4 ) /*0x719806*/
  {
    case 1: /*0x719806*/
LABEL_82:
      (*(void (__stdcall **)(char *))(*((_DWORD *)this - 1) + 40))((char *)this - 4); /*0x719b99*/
      return 0; /*0x719bac*/
    case 2: /*0x719806*/
      v38 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x71982c*/
      if ( v38 ) /*0x719836*/
      {
        v39 = v2->?->?; /*0x71983c*/
        v56 = *v39; /*0x71984d*/
        v57 = v39[1]; /*0x719854*/
        v58 = v39[2]; /*0x719860*/
        AnimClass::ctor( /*0x719873*/
          v38,
          *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 828),
          &v56,
          0,
          1,
          (void *)0x600,
          0,
          0);
      }
      (*((void (__thiscall **)(FootClass *, _DWORD))v2->?->TechnoClass + 73))(v2->?, 0); /*0x71987e*/
      v40 = v2->?; /*0x719884*/
      v41 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))v40->TechnoClass + 33))(v40) + 1400); /*0x719891*/
      if ( v41 != -1 || (v41 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 540), v41 != -1) ) /*0x7198ab*/
      {
        v42 = v40->?; /*0x7198ad*/
        v56 = *v42; /*0x7198b6*/
        v57 = v42[1]; /*0x7198bd*/
        v58 = v42[2]; /*0x7198c6*/
        StartAudioControllerAt(v41, &v56, 0); /*0x7198ce*/
      }
      v2->?->? = 1; /*0x7198da*/
      v2->?->? = 0; /*0x7198e4*/
      v2->?->? = 0; /*0x7198ee*/
      v2->?->? = 0; /*0x7198fa*/
      PlacementPosition = ObjectClass::FindPlacementPosition( /*0x71991d*/
                            (ObjectClass *)&v2[-1].Piggybackee,
                            v2->?->?[0],
                            v2->?->?[1],
                            v2->?->?[2],
                            0);
      v44 = *(_DWORD *)&v2->Moving + 1; /*0x719925*/
      *(_DWORD *)&v2->Moving = v44; /*0x719928*/
      if ( PlacementPosition ) /*0x71992d*/
      {
        *(_DWORD *)&v2->Moving = v44 + 1; /*0x719936*/
        return 0; /*0x719940*/
      }
      return 0; /*0x71992d*/
    case 3: /*0x719806*/
      if ( ObjectClass::FindPlacementPosition( /*0x719967*/
             (ObjectClass *)((char *)this - 4),
             Owner->?[0],
             Owner->?[1],
             Owner->?[2],
             0) )
      {
        ++*(_DWORD *)&v2->Moving; /*0x719970*/
      }
      v2->?->? = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3052); /*0x719983*/
      return 0; /*0x719990*/
    case 4: /*0x719806*/
      ObjectClass::FindPlacementPosition((ObjectClass *)((char *)this - 4), Owner->?[0], Owner->?[1], Owner->?[2], 1); /*0x7199b8*/
      (*((void (__thiscall **)(FootClass *, int *))v2->?->TechnoClass + 109))(v2->?, &v2->MovingDestination[2]); /*0x7199c6*/
      (*((void (__thiscall **)(FootClass *, _DWORD))v2->?->TechnoClass + 115))(v2->?, 0); /*0x7199d2*/
      (*((void (__thiscall **)(FootClass *, int))v2->?->TechnoClass + 73))(v2->?, 1); /*0x7199df*/
      ++*(_DWORD *)&v2->Moving; /*0x7199e9*/
      return 0; /*0x7199f5*/
  }
  if ( v4 != 5 ) /*0x7199fb*/
  {
    if ( v4 != 6 ) /*0x719b97*/
    {
      if ( v4 == 7 ) /*0x719bb2*/
      {
        Owner->? = 0; /*0x719bb4*/
        TechnoClass::SetFocus((TechnoClass *)v2->?, 0); /*0x719bbf*/
        (*((void (__thiscall **)(FootClass *, _DWORD, int))v2->?->TechnoClass + 288))(v2->?, 0, 1); /*0x719bcc*/
        LOBYTE(v2->LastCoords[2]) = 0; /*0x719bd2*/
        v2->?->? = 0; /*0x719bd9*/
        *(_DWORD *)&v2->Moving = 0; /*0x719bdf*/
      }
      return 0; /*0x719bdf*/
    }
    goto LABEL_82; /*0x719b97*/
  }
  v45 = &this->MovingDestination[2]; /*0x719a03*/
  (*((void (__thiscall **)(FootClass *, int *))Owner->TechnoClass + 109))(Owner, &this->MovingDestination[2]); /*0x719a07*/
  (*((void (__thiscall **)(FootClass *, _DWORD))v2->?->TechnoClass + 115))(v2->?, 0); /*0x719a13*/
  (*((void (__thiscall **)(FootClass *, int))v2->?->TechnoClass + 73))(v2->?, 1); /*0x719a20*/
  v46 = v2->?; /*0x719a26*/
  v47 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))v46->TechnoClass + 33))(v46) + 1396); /*0x719a33*/
  if ( v47 != -1 || (v47 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 536), v47 != -1) ) /*0x719a4d*/
  {
    v48 = v46->?; /*0x719a4f*/
    v56 = *v48; /*0x719a58*/
    v57 = v48[1]; /*0x719a5f*/
    v58 = v48[2]; /*0x719a68*/
    StartAudioControllerAt(v47, &v56, 0); /*0x719a70*/
  }
  v49 = (__int16 *)(*((int (__thiscall **)(FootClass *, TeleportLocomotionClass **))v2->?->TechnoClass + 110))( /*0x719a81*/
                     v2->?,
                     &this);
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v49, 1) ) /*0x719a8d*/
    v2->?->? = 0; /*0x719a99*/
  if ( !v2->?->? ) /*0x719aa3*/
    ProcessUnitDeploymentAtCell((ObjectClass *)&v2[-1].Piggybackee, *v45, v2->LastCoords[0], v2->LastCoords[1]); /*0x719ac4*/
  v50 = v2->?; /*0x719ac9*/
  if ( !v50->? ) /*0x719ad4*/
    return 0; /*0x719ad4*/
  (*((void (__thiscall **)(FootClass *, int))v50->TechnoClass + 99))(v50, 2); /*0x719ade*/
  (*(void (__stdcall **)(TeleportLocomotionClass *))(*(_DWORD *)v2->LocomotionClass + 72))(v2); /*0x719ae7*/
  v2->?->? = 0; /*0x719aee*/
  v2->?->? = 0; /*0x719af7*/
  TechnoClass::SetFocus((TechnoClass *)v2->?, 0); /*0x719b00*/
  (*((void (__thiscall **)(FootClass *, _DWORD, int))v2->?->TechnoClass + 288))(v2->?, 0, 1); /*0x719b0d*/
  chronoLockRemaining = v2->?->?; /*0x719b23*/
  v2->State = *(_DWORD *)&stru_A8EB00.?[416]; /*0x719b29*/
  v2->Timer[0] = v60; /*0x719b2f*/
  v2->Timer[1] = chronoLockRemaining; /*0x719b32*/
  v52 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x719b35*/
  if ( v52 ) /*0x719b3f*/
  {
    v53 = v2->?->?; /*0x719b45*/
    v56 = *v53; /*0x719b56*/
    v57 = v53[1]; /*0x719b5d*/
    v58 = v53[2]; /*0x719b69*/
    AnimClass::ctor( /*0x719b7c*/
      v52,
      *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 828),
      &v56,
      0,
      1,
      (void *)0x600,
      0,
      0);
  }
  ++*(_DWORD *)&v2->Moving; /*0x719b85*/
  return 0; /*0x719327*/
}



// ==== 0x00719BF0  TeleportLocomotionClass::SetCoordinateField  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SetCoordinateField(TeleportLocomotionClass *this)
{
  int v1; // edx
  int result; // eax
  FootClass *LinkedTo; // ecx

  v1 = this->Timer[0]; /*0x719bf5*/
  result = this->Timer[2]; /*0x719bf8*/
  if ( v1 == -1 ) /*0x719bfe*/
  {
LABEL_4:
    if ( result ) /*0x719c10*/
      return result; /*0x719c10*/
    goto LABEL_5; /*0x719c10*/
  }
  if ( *(_DWORD *)&stru_A8EB00.?[416] - v1 < result ) /*0x719c0a*/
  {
    result -= *(_DWORD *)&stru_A8EB00.?[416] - v1; /*0x719c0c*/
    goto LABEL_4; /*0x719c0c*/
  }
LABEL_5:
  this->?->? = 0; /*0x719c12*/
  LinkedTo = this->?; /*0x719c1c*/
  if ( !LinkedTo->? ) /*0x719c1f*/
  {
    Mission::GetMissionDelay((Mission *)LinkedTo); /*0x719c29*/
    if ( !JumpjetLocomotionClass::StubReturnZero_16((JumpjetLocomotionClass *)this->?) ) /*0x719c31*/
      (*((void (__thiscall **)(FootClass *, _DWORD, int))this->?->TechnoClass + 289))(this->?, 0, 1); /*0x719c43*/
  }
  result = this->State; /*0x719c49*/
  if ( result > 0 ) /*0x719c4e*/
    this->State = ++result; /*0x719c51*/
  return result; /*0x719c54*/
}



// ==== 0x00719C60  TeleportLocomotionClass::StubReturnZero_17  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_17(TeleportLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x719c66*/
    return -2147467261; /*0x719c68*/
  *(IID *)a2 = g_CLSID_HoverLocomotion; /*0x719c76*/
  a2[3] = unk_7E9A9C; /*0x719c90*/
  return 0; /*0x719c6d*/
}



// ==== 0x00719CA0  TeleportLocomotionClass::InitMultiFieldArray_0  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::InitMultiFieldArray_0(TeleportLocomotionClass *this, int *pStm)
{
  int *v2; // edi
  int v3; // ebp
  int v4; // eax
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = pStm; /*0x719ca7*/
  v3 = SwizzleManager::SaveLoad((int *)this->LocomotionClass, pStm); /*0x719cb2*/
  if ( v3 < 0 ) /*0x719cb6*/
    return v3; /*0x719cb6*/
  if ( this ) /*0x719cba*/
  {
    *(_DWORD *)this->LocomotionClass = &LocomotionClass::`vftable'; /*0x719cbc*/
    *(_DWORD *)&this->LocomotionClass[4] = &LocomotionClass::`vftable'; /*0x719cc2*/
    v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x719cc9*/
    this->Timer[2] = 0; /*0x719cce*/
    this->Timer[0] = v4; /*0x719cd5*/
    this->Piggybackee = 0; /*0x719cd8*/
    *(_DWORD *)this->LocomotionClass = &TeleportLocomotionClass::`vftable'; /*0x719cdf*/
    *(_DWORD *)&this->LocomotionClass[4] = &TeleportLocomotionClass::`vftable'; /*0x719ce5*/
    *(_DWORD *)this->__pad_18 = &TeleportLocomotionClass::`vftable'; /*0x719cec*/
  }
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v2 + 12))(v2, &pStm, 1, 0); /*0x719cff*/
  if ( !(_BYTE)pStm ) /*0x719d08*/
    return v3; /*0x719d34*/
  Piggybackee = this->Piggybackee; /*0x719d0a*/
  p_Piggybackee = (LPVOID *)&this->Piggybackee; /*0x719d0d*/
  if ( Piggybackee ) /*0x719d12*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x719d17*/
  *p_Piggybackee = 0; /*0x719d21*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x719d2d*/
}



// ==== 0x00719D40  TeleportLocomotionClass::CheckWindowsErrorWrapper_2  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckWindowsErrorWrapper_2(TeleportLocomotionClass *this, int *pPStm, int a3)
{
  IStream *v3; // esi
  TeleportLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x719d46*/
  v4 = this; /*0x719d4b*/
  IPersistStream = LoadIPersistStream((LocomotionClass *)this, pPStm, a3); /*0x719d57*/
  if ( IPersistStream < 0 ) /*0x719d5b*/
    return IPersistStream; /*0x719d5b*/
  if ( !v4->Piggybackee ) /*0x719d66*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x719e03*/
    LOBYTE(a3) = 0; /*0x719e0f*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x719e14*/
    return IPersistStream; /*0x719e18*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x719d6c*/
  LOBYTE(a3) = 1; /*0x719d78*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x719d7d*/
  Piggybackee = v4->Piggybackee; /*0x719d80*/
  pPStm = 0; /*0x719d83*/
  if ( Piggybackee ) /*0x719d8d*/
  {
    v8 = (**(int (__stdcall ***)(ILocomotion *, void *, TeleportLocomotionClass **))Piggybackee)( /*0x719d9e*/
           Piggybackee,
           &unk_820270,
           &this);
    if ( v8 >= 0 ) /*0x719da2*/
    {
      v9 = (int *)this; /*0x719dbb*/
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
int __stdcall JumpjetLocomotionClass::SmallStub_719E20(TeleportLocomotionClass *this)
{
  return 2; /*0x719e25*/
}



// ==== 0x00719E30  TeleportLocomotionClass::UpdateAltitude  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::UpdateAltitude(TeleportLocomotionClass *this, const void *a2, int *a3)
{
  int result; // eax
  char *pad_18; // eax

  result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x719e42*/
  if ( result == -2147467262 ) /*0x719e4c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x719e5b*/
    {
      if ( this ) /*0x719e62*/
        pad_18 = this->__pad_18; /*0x719e64*/
      else
        pad_18 = 0; /*0x719e69*/
      *a3 = (int)pad_18; /*0x719e6b*/
    }
    if ( *a3 ) /*0x719e6e*/
    {
      (*(void (__stdcall **)(TeleportLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 4))(this); /*0x719e82*/
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
int __stdcall JumpjetLocomotionClass::StubReturnZero_18(JumpjetLocomotionClass *this, int a2)
{
  if ( !a2 ) /*0x719e96*/
    return -2147467261; /*0x719e98*/
  if ( LODWORD(this->Wobbles) ) /*0x719ea4*/
    return -2147467259; /*0x719ecb*/
  LODWORD(this->Wobbles) = a2; /*0x719eb2*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x719eb8*/
  return 0; /*0x719e9d*/
}



// ==== 0x00719EE0  JumpjetLocomotionClass::StubReturnZero_19  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_19(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v3; // ecx
  float Wobbles; // ecx

  if ( !a2 ) /*0x719ee9*/
    return -2147467261; /*0x719eeb*/
  v3 = *((_DWORD *)this - 3); /*0x719ef8*/
  if ( v3 ) /*0x719efd*/
  {
    *(_DWORD *)(v3 + 1064) = 0; /*0x719eff*/
    *(_DWORD *)(*((_DWORD *)this - 3) + 1068) = 0; /*0x719f08*/
  }
  Wobbles = this->Wobbles; /*0x719f0e*/
  if ( Wobbles == 0.0 ) /*0x719f13*/
    return 1; /*0x719f20*/
  *(float *)a2 = Wobbles; /*0x719f15*/
  this->Wobbles = 0.0; /*0x719f17*/
  return 0; /*0x719ef0*/
}



// ==== 0x00719F30  JumpjetLocomotionClass::StubReturnTrue_7  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_7(JumpjetLocomotionClass *this)
{
  int v1; // eax
  bool result; // al

  result = 0; /*0x719f75*/
  if ( !(*(unsigned __int8 (__stdcall **)(char *))(*((_DWORD *)this - 5) + 16))((char *)this - 20) ) /*0x719f3c*/
  {
    if ( LODWORD(this->Wobbles) ) /*0x719f43*/
    {
      if ( !BYTE1(this->Speed) ) /*0x719f4a*/
      {
        v1 = *((_DWORD *)this - 3); /*0x719f51*/
        if ( !*(_BYTE *)(v1 + 636) && !LODWORD(this->Climb) && !*(_BYTE *)(v1 + 1709) ) /*0x719f65*/
          return 1; /*0x719f41*/
      }
    }
  }
  return result; /*0x719f71*/
}



// ==== 0x00719F80  JumpjetLocomotionClass::LoadLocomotionFromStream_3  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::LoadLocomotionFromStream_3(JumpjetLocomotionClass *this, _DWORD *pad_0)
{
  _DWORD *v2; // ebp
  float *p_Wobbles; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = pad_0; /*0x719f81*/
  if ( !pad_0 ) /*0x719f88*/
    return -2147467261; /*0x719f91*/
  p_Wobbles = &this->Wobbles; /*0x719f9b*/
  if ( LODWORD(this->Wobbles) ) /*0x719f98*/
  {
    this = 0; /*0x719fa4*/
    v5 = StreamClass::Set2((StreamClass *)&this, p_Wobbles); /*0x719fb5*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x719fc3*/
      WinAPI::Wrapper(v5); /*0x719fc6*/
    if ( !this ) /*0x719fd1*/
      return -2147467259; /*0x719fda*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(this->LocomotionClass[0] + 12))(this, v2); /*0x719fe4*/
    if ( this ) /*0x719fec*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 8))(this); /*0x719ff5*/
      return v6; /*0x719ffc*/
    }
  }
  else
  {
    pad_0 = 0; /*0x71a002*/
    if ( this == (JumpjetLocomotionClass *)24 ) /*0x71a00c*/
      return -2147467259; /*0x71a00c*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))this - 6))( /*0x71a01d*/
           (char *)this - 24,
           &unk_818858,
           &this);
    if ( v7 >= 0 ) /*0x71a021*/
    {
      v9 = this; /*0x71a035*/
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x71a03d*/
      v8 = v9; /*0x71a042*/
      pad_0 = v9->LocomotionClass; /*0x71a045*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x71a027*/
      v8 = 0; /*0x71a02c*/
      pad_0 = 0; /*0x71a02e*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x71a053*/
      WinAPI::Wrapper(v7); /*0x71a056*/
    if ( !v8 ) /*0x71a061*/
      return -2147467259; /*0x71a06a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x71a074*/
    if ( pad_0 ) /*0x71a07c*/
      (*(void (__stdcall **)(_DWORD *))(*pad_0 + 8))(pad_0); /*0x71a081*/
  }
  return v6; /*0x719f8a*/
}



// ==== 0x0071A090  TeleportLocomotionClass::DispatchVirtualCall_7  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_7(TeleportLocomotionClass *this, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  FootClass *Owner; // ecx
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x71a090*/
  if ( !a2 ) /*0x71a099*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(TeleportLocomotionClass *, _BYTE *))(*(_DWORD *)this->LocomotionClass + 24))( /*0x71a0a8*/
                     this,
                     v6);
    v5[0] = *v3; /*0x71a0ad*/
    v5[1] = v3[1]; /*0x71a0b4*/
    Owner = this->?; /*0x71a0bb*/
    v5[2] = v3[2]; /*0x71a0be*/
    return (*((int (__thiscall **)(FootClass *, _DWORD *))Owner->TechnoClass + 61))(Owner, v5); /*0x71a0c9*/
  }
  return result; /*0x71a0d0*/
}



// ==== 0x0071A0E0  TeleportLocomotionClass::IUnknownAddRef  this=TeleportLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::IUnknownAddRef(TeleportLocomotionClass *this)
{
  return COM::AddRef((LocomotionClass *)this); /*0x71a0ea*/
}



// ==== 0x0071A0F0  TeleportLocomotionClass::IUnknownRelease  this=TeleportLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::IUnknownRelease(TeleportLocomotionClass *this)
{
  return COM::ReleaseRef((LocomotionClass *)this); /*0x71a0fa*/
}



// ==== 0x0071A100  JumpjetLocomotionClass::ShortFunc_71A100  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_71A100(int a1)
{
  return *(_DWORD *)(a1 + 48) != 0; /*0x71a10e*/
}



// ==== 0x0071A120  TeleportLocomotionClass::SmallStub_71A120  this=TeleportLocomotionClass  sig=csp ====
int JumpjetLocomotionClass::SmallStub_71A120(TeleportLocomotionClass *this)
{
  return 76; /*0x71a125*/
}



// ==== 0x0071A130  TeleportLocomotionClass::ConstructLocomotor  this=TeleportLocomotionClass  sig=csp ====
_DWORD *__thiscall JumpjetLocomotionClass::ConstructLocomotor(TeleportLocomotionClass *this, char a2)
{
  ILocomotion *Piggybackee; // eax

  Piggybackee = this->Piggybackee; /*0x71a133*/
  if ( Piggybackee ) /*0x71a138*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x71a13d*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x71a142*/
  if ( (a2 & 1) != 0 ) /*0x71a14c*/
    __3_YAXPAX_Z(this); /*0x71a14f*/
  return this->LocomotionClass; /*0x71a159*/
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
  dbl_B0EC78 = Math::Sqrt(v0 + v0); /*0x71a1de*/
}



// ==== 0x0071A1F0  sub_71A1F0  this=-  sig=ida-proto ====
void sub_71A1F0()
{
  dbl_B0ECC8 = dbl_B0EC78 / 60.0; /*0x71a1fc*/
}



// ==== 0x0071A210  sub_71A210  this=-  sig=ida-proto ====
void sub_71A210()
{
  dbl_B0ECB0 = 1.0 / dbl_B0ECC8; /*0x71a21c*/
}



// ==== 0x0071A230  sub_71A230  this=-  sig=ida-proto ====
void sub_71A230()
{
  dbl_B0ECA8 = 0.0174532925199433 * 45.0; /*0x71a23c*/
}



// ==== 0x0071A250  sub_71A250  this=-  sig=ida-proto ====
void sub_71A250()
{
  dbl_B0EC80 = 0.0174532925199433 * 60.0; /*0x71a25c*/
}



// ==== 0x0071A270  sub_71A270  this=-  sig=ida-proto ====
void sub_71A270()
{
  dbl_B0EC40 = 0.0174532925199433 * 90.0; /*0x71a27c*/
}



// ==== 0x0071A290  sub_71A290  this=-  sig=ida-proto ====
__int64 sub_71A290()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0EC40 - dbl_B0EC80); /*0x71a2a2*/
  result = Math::RoundToInt(v0 * dbl_B0EC78 * 0.5); /*0x71a2b6*/
  dword_B0ECD0 = result; /*0x71a2bb*/
  return result; /*0x71a2c0*/
}



// ==== 0x0071A2D0  sub_71A2D0  this=-  sig=ida-proto ====
void sub_71A2D0()
{
  dbl_B0EC88 = Math::ArcTan((double)dword_B0ECD0 * 0.00390625); /*0x71a2e7*/
}



// ==== 0x0071A300  sub_71A300  this=-  sig=ida-proto ====
void sub_71A300()
{
  dbl_B0ECA0 = Math::ArcTan((double)(2 * dword_B0ECD0) / dbl_B0EC78); /*0x71a322*/
}



// ==== 0x0071A330  sub_71A330  this=-  sig=ida-proto ====
__int64 sub_71A330()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0ECD0) + 0.5); /*0x71a34b*/
  dword_B0ECC4 = result; /*0x71a350*/
  return result; /*0x71a356*/
}



// ==== 0x0071A360  sub_71A360  this=-  sig=ida-proto ====
int sub_71A360()
{
  word_B0EC58 = 0; /*0x71a362*/
  word_B0EC5A = 0; /*0x71a368*/
  return 0; /*0x71a36e*/
}



// ==== 0x0071A370  sub_71A370  this=-  sig=ida-proto ====
int sub_71A370()
{
  dword_B0EC90 = 0; /*0x71a372*/
  dword_B0EC94 = 0; /*0x71a377*/
  dword_B0EC98 = 0; /*0x71a37c*/
  return 0; /*0x71a381*/
}



// ==== 0x0071A390  sub_71A390  this=-  sig=ida-proto ====
int sub_71A390()
{
  dword_B0ECC0 = 0; /*0x71a395*/
  dword_B0ECB8 = 128; /*0x71a39f*/
  dword_B0ECBC = 128; /*0x71a3a4*/
  return 128; /*0x71a3a9*/
}



// ==== 0x0071A3B0  sub_71A3B0  this=-  sig=ida-proto ====
int sub_71A3B0()
{
  dword_B0EC48 = 0; /*0x71a3b2*/
  dword_B0EC4C = 0; /*0x71a3b7*/
  dword_B0EC50 = 0; /*0x71a3bc*/
  dword_B0EC54 = 0; /*0x71a3c1*/
  return 0; /*0x71a3c6*/
}



// ==== 0x0071A3D0  sub_71A3D0  this=-  sig=ida-proto ====
int sub_71A3D0()
{
  dword_B0EC64 = 0; /*0x71a3d7*/
  dword_B0EC68 = 0; /*0x71a3dc*/
  byte_B0EC6C = 1; /*0x71a3e1*/
  byte_B0EC6D = 0; /*0x71a3e8*/
  dword_B0EC60 = (int)&DynamicVectorClass<TemporalClass *>::`vftable'; /*0x71a3ed*/
  dword_B0EC74 = 10; /*0x71a3f7*/
  dword_B0EC70 = 0; /*0x71a401*/
  return atexit(sub_71A410); /*0x71a40c*/
}



// ==== 0x0071A410  sub_71A410  this=-  sig=ida-proto ====
void __cdecl sub_71A410()
{
  dword_B0EC60 = (int)&VectorClass<TemporalClass *>::`vftable'; /*0x71a418*/
  if ( dword_B0EC64 && byte_B0EC6D ) /*0x71a42c*/
  {
    __3_YAXPAX_Z(dword_B0EC64); /*0x71a42f*/
    dword_B0EC64 = 0; /*0x71a437*/
  }
  byte_B0EC6D = 0; /*0x71a43d*/
  dword_B0EC68 = 0; /*0x71a443*/
}



// ==== 0x0071A450  TemporalClass::Constructor  this=TemporalClass  sig=csp ====
int __thiscall TemporalClass::Constructor(TemporalClass *this)
{
  int v2; // eax
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x71a453*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71a458*/
  this->TemporalClass_field_34 = 0; /*0x71a45d*/
  *(_DWORD *)&this->__pad_28[4] = v2; /*0x71a464*/
  this->AbstractClass = &TemporalClass::`vftable'; /*0x71a467*/
  this->? = &TemporalClass::`vftable'; /*0x71a46d*/
  this->? = &TemporalClass::`vftable'; /*0x71a474*/
  this->? = &TemporalClass::`vftable'; /*0x71a47b*/
  if ( g_BuildingLoadQueue_Array.?[0] < g_BuildingLoadQueue_Array.?[5] /*0x71a4b7*/
    || (BYTE1(g_BuildingLoadQueue_Array.?[6]) || !g_BuildingLoadQueue_Array.?[5])
    && g_BuildingLoadQueue_Array.?[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[3] + 8))(
         &g_BuildingLoadQueue_Array.?[3],
         g_BuildingLoadQueue_Array.?[5] + g_BuildingLoadQueue_Array.?[1],
         0) )
  {
    v3 = g_BuildingLoadQueue_Array.?[0]++; /*0x71a4c4*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[4] + 4 * v3) = this; /*0x71a4d3*/
  }
  return (int)this; /*0x71a4d8*/
}



// ==== 0x0071A4E0  TemporalClass::TemporalClass  this=TemporalClass  sig=csp ====
_DWORD *__thiscall TemporalClass::TemporalClass(TemporalClass *this, int a2)
{
  int v3; // eax
  int v5; // [esp+Ch] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x71a4e7*/
  *(_DWORD *)&this->__pad_28[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71a4fb*/
  this->TemporalClass_field_34 = 0; /*0x71a4fe*/
  this->AbstractClass = &TemporalClass::`vftable'; /*0x71a501*/
  this->? = &TemporalClass::`vftable'; /*0x71a507*/
  this->? = &TemporalClass::`vftable'; /*0x71a50e*/
  this->? = &TemporalClass::`vftable'; /*0x71a515*/
  this->creationFrame = a2; /*0x71a51c*/
  *(_DWORD *)this->__pad_28 = 0; /*0x71a51f*/
  *(_DWORD *)&this->__pad_28[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71a529*/
  this->TemporalClass_field_30 = v5; /*0x71a52c*/
  this->TemporalClass_field_34 = 0; /*0x71a52f*/
  this->uniqueId = 0; /*0x71a532*/
  this->q011 = 0; /*0x71a535*/
  if ( g_BuildingLoadQueue_Array.?[0] < g_BuildingLoadQueue_Array.?[5] /*0x71a569*/
    || (BYTE1(g_BuildingLoadQueue_Array.?[6]) || !g_BuildingLoadQueue_Array.?[5])
    && g_BuildingLoadQueue_Array.?[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[3] + 8))(
         &g_BuildingLoadQueue_Array.?[3],
         g_BuildingLoadQueue_Array.?[5] + g_BuildingLoadQueue_Array.?[1],
         0) )
  {
    v3 = g_BuildingLoadQueue_Array.?[0]++; /*0x71a576*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[4] + 4 * v3) = this; /*0x71a585*/
  }
  *((_DWORD *)this + 18) = 0; /*0x71a588*/
  this->IsAllocated = 0; /*0x71a58b*/
  *((_DWORD *)this + 14) = 0; /*0x71a58e*/
  *((_DWORD *)this + 15) = 0; /*0x71a591*/
  return &this->AbstractClass; /*0x71a596*/
}



// ==== 0x0071A650  TemporalClass::SetTarget  this=TemporalClass  sig=csp ====
int __thiscall TemporalClass::SetTarget(TemporalClass *this, int a2)
{
  return AbstractClass::ProcessPower((AbstractClass *)this); /*0x71a65a*/
}



// ==== 0x0071A660  TemporalClass::LoadTemporal  this=TemporalClass  sig=csp ====
int __stdcall TemporalClass::LoadTemporal(TemporalClass *this, int a2)
{
  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x71a671*/
  if ( Prefix_0 >= 0 ) /*0x71a675*/
  {
    if ( this ) /*0x71a679*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x71a682*/
      this->AbstractClass = &TemporalClass::`vftable'; /*0x71a687*/
      this->? = &TemporalClass::`vftable'; /*0x71a68d*/
      this->? = &TemporalClass::`vftable'; /*0x71a694*/
      this->? = &TemporalClass::`vftable'; /*0x71a69b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->creationFrame); /*0x71a6ab*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this->__pad_28); /*0x71a6b9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 16); /*0x71a6c7*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 17); /*0x71a6d5*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 14); /*0x71a6e3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 15); /*0x71a6f1*/
  }
  return Prefix_0; /*0x71a6f8*/
}



// ==== 0x0071A700  TemporalClass::SaveTemporal  this=TemporalClass  sig=csp ====
int __stdcall TemporalClass::SaveTemporal(TemporalClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x71a714*/
}



// ==== 0x0071A720  TemporalClass::ddtor  this=TemporalClass  sig=csp ====
int __stdcall TemporalClass::ddtor(TemporalClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x71a726*/
    return -2147467261; /*0x71a728*/
  *a2 = -1810815964; /*0x71a736*/
  a2[1] = 299099139; /*0x71a73e*/
  a2[2] = 1342205582; /*0x71a747*/
  a2[3] = unk_7E98DC; /*0x71a750*/
  return 0; /*0x71a72d*/
}



// ==== 0x0071A760  TemporalClass::ProcessTimeWarp  this=TemporalClass  sig=csp ====
void **__thiscall TemporalClass::ProcessTimeWarp(TemporalClass *this)
{
  double v1; // st7
  _DWORD *v3; // ecx
  void **result; // eax
  int creationFrame; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  TemporalClass *v14; // ecx
  int WarpPerStep; // ebp
  int v16; // ecx
  int v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int *v23; // ecx
  int v24; // edi
  int v25; // ebp
  int v26; // eax
  int v27; // eax
  int v28; // ebp
  int v29; // eax
  int v30; // ecx
  _DWORD *v31; // edi
  BuildingClass *v32; // eax
  TechnoClass *v33; // ecx
  int v34; // edx
  int v35; // edi
  BuildingClass *v36; // eax
  TechnoClass *v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // [esp+Ch] [ebp-38h]
  int v41; // [esp+20h] [ebp-24h] BYREF
  int v42; // [esp+24h] [ebp-20h]
  int v43; // [esp+28h] [ebp-1Ch]
  _BYTE v44[12]; // [esp+2Ch] [ebp-18h] BYREF
  _BYTE v45[12]; // [esp+38h] [ebp-Ch] BYREF

  v3 = *(_DWORD **)this->__pad_28; /*0x71a76b*/
  if ( v3 && (TemporalClass *)v3[158] == this && this->uniqueId )
  {
    v3[158] = 0; /*0x71a77f*/
    *(_BYTE *)(*(_DWORD *)this->__pad_28 + 624) = 0; /*0x71a78a*/
    return (void **)TagClass::Unlink((TagClass *)this); /*0x71a790*/
  }
  else
  {
    creationFrame = this->creationFrame; /*0x71a79d*/
    if ( !creationFrame ) /*0x71a7a2*/
      goto LABEL_10; /*0x71a7a2*/
    if ( !*(_BYTE *)(creationFrame + 130) ) /*0x71a7a8*/
      goto LABEL_10; /*0x71a7a8*/
    if ( !v3 ) /*0x71a7b6*/
      goto LABEL_10; /*0x71a7b6*/
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v3 + 72))(v3, v44); /*0x71a7c9*/
    v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->creationFrame + 72))(this->creationFrame, v45); /*0x71a7d2*/
    v8 = v6[1]; /*0x71a7d9*/
    v9 = *v7 - *v6; /*0x71a7dc*/
    v10 = v7[1]; /*0x71a7de*/
    v11 = v7[2]; /*0x71a7e1*/
    v41 = v9; /*0x71a7e4*/
    v12 = v11 - v6[2]; /*0x71a7ed*/
    v42 = v10 - v8; /*0x71a7ef*/
    v43 = v12; /*0x71a7f3*/
    Math::Sqrt((double)v9 * (double)v9 + (double)v12 * (double)v12 + (double)(v10 - v8) * (double)(v10 - v8)); /*0x71a81f*/
    LOWORD(v13) = Math::RoundToInt(v1); /*0x71a827*/
    if ( v13 > *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3936) << 8 )
    {
      return (void **)FactoryClass::CompleteItem((FactoryClass *)this); /*0x71a841*/
    }
    else
    {
LABEL_10:
      v14 = (TemporalClass *)this->q011; /*0x71a84e*/
      WarpPerStep = 0; /*0x71a851*/
      if ( v14 ) /*0x71a855*/
        WarpPerStep = TemporalClass::GetWarpPerStep(v14, 1); /*0x71a85e*/
      v16 = this->creationFrame; /*0x71a860*/
      v17 = *(_DWORD *)v16; /*0x71a864*/
      v18 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 740))(v16, 0); /*0x71a866*/
      v19 = (*(int (__thiscall **)(int, int))(v17 + 1016))(this->creationFrame, v18); /*0x71a870*/
      v20 = *((_DWORD *)this + 18); /*0x71a878*/
      v21 = *(_DWORD *)(*(_DWORD *)v19 + 164); /*0x71a87b*/
      this->IsAllocated = v21; /*0x71a881*/
      result = (void **)(v20 - (WarpPerStep + v21)); /*0x71a888*/
      *((_DWORD *)this + 18) = result; /*0x71a88a*/
      if ( (int)result <= 0 )
      {
        if ( *(_DWORD *)this->__pad_28 ) /*0x71a895*/
        {
          result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x71a8c2*/
          if ( result ) /*0x71a8cc*/
          {
            v23 = (int *)(*(_DWORD *)this->__pad_28 + 156); /*0x71a8d2*/
            v41 = *v23; /*0x71a8e3*/
            v42 = v23[1]; /*0x71a8ea*/
            v43 = v23[2]; /*0x71a8f6*/
            result = AnimClass::ctor( /*0x71a909*/
                       (AnimClass *)result,
                       *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 832),
                       &v41,
                       0,
                       1,
                       (void *)0x600,
                       0,
                       0);
          }
        }
        else
        {
          v22 = this->creationFrame; /*0x71a89a*/
          *(_DWORD *)this->__pad_28 = 0; /*0x71a89d*/
          this->q011 = 0; /*0x71a8a2*/
          this->uniqueId = 0; /*0x71a8a5*/
          *((_DWORD *)this + 15) = 0; /*0x71a8a8*/
          *((_DWORD *)this + 14) = 0; /*0x71a8ab*/
          if ( v22 ) /*0x71a8ae*/
            result = (void **)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v22 + 1156))(v22, 0, 1); /*0x71a8b5*/
        }
        if ( *(_DWORD *)this->__pad_28 )
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 132))(this->creationFrame) + 3214) ) /*0x71a922*/
          {
            v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 132))(*(_DWORD *)this->__pad_28); /*0x71a938*/
            v25 = (*(int (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 132))(this->creationFrame); /*0x71a944*/
            v40 = *(_DWORD *)(*(_DWORD *)this->__pad_28 + 540); /*0x71a94f*/
            v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 132))(v24); /*0x71a952*/
            v27 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v25 + 132))( /*0x71a968*/
                    v25,
                    *(_DWORD *)(this->creationFrame + 540),
                    v26);
            HouseClass::AccumulateScore((int *)(this->creationFrame + 336), v27, v40); /*0x71a978*/
          }
          if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 44))(*(_DWORD *)this->__pad_28) == 6 )
          {
            v28 = *(_DWORD *)this->__pad_28; /*0x71a98e*/
            if ( v28 ) /*0x71a993*/
            {
              if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v28 + 1032))(*(_DWORD *)this->__pad_28) > 0 ) /*0x71a9a2*/
                BuildingClass::AnimateUnloadUnits((BuildingClass *)v28, 0); /*0x71a9a7*/
              if ( !dword_A8E7AC && *(_DWORD *)(v28 + 280) ) /*0x71a9b4*/
              {
                do /*0x71a9d6*/
                {
                  v29 = LinkedList::Pop((LinkedList *)(v28 + 276)); /*0x71a9c4*/
                  if ( v29 ) /*0x71a9cb*/
                    (*(void (__thiscall **)(int, int))(*(_DWORD *)v29 + 32))(v29, 1); /*0x71a9d3*/
                }
                while ( *(_DWORD *)(v28 + 280) ); /*0x71a9d6*/
              }
            }
            v30 = *((_DWORD *)this + 15); /*0x71a9de*/
            if ( v30 ) /*0x71a9e3*/
            {
              SuperClass::SetOnHold(v30, 0); /*0x71a9e6*/
              *((_DWORD *)this + 15) = 0; /*0x71a9eb*/
            }
            v31 = *(_DWORD **)this->__pad_28; /*0x71a9ee*/
            if ( v31[185] )
            {
              if ( v31 )
                v32 = (*(int (__thiscall **)(_DWORD))(*v31 + 44))(*(_DWORD *)this->__pad_28) == 6
                    ? (BuildingClass *)v31
                    : 0;
              else
                v32 = 0; /*0x71a9fd*/
              BuildingClass::RemoveLimpet(v32); /*0x71aa15*/
            }
            v33 = *(TechnoClass **)(*(_DWORD *)this->__pad_28 + 728); /*0x71aa1d*/
            if ( v33 ) /*0x71aa25*/
              TechnoClass::MutateAll(v33, this->creationFrame, 0); /*0x71aa2c*/
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)this->__pad_28 + 952))( /*0x71aa3a*/
              *(_DWORD *)this->__pad_28,
              this->creationFrame);
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)this->__pad_28 + 224))( /*0x71aa49*/
              *(_DWORD *)this->__pad_28,
              this->creationFrame);
            result = (void **)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 248))(*(_DWORD *)this->__pad_28); /*0x71aa54*/
            *(_BYTE *)(*(_DWORD *)(v28 + 540) + 508) = 1; /*0x71aa60*/
          }
          else
          {
            v34 = *(_DWORD *)this->__pad_28; /*0x71aa69*/
            v35 = *(_DWORD *)(v34 + 740); /*0x71aa6c*/
            if ( v35 )
            {
              v36 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v35 + 44))(*(_DWORD *)(v34 + 740)) == 6
                  ? (BuildingClass *)v35
                  : 0;
              BuildingClass::UpdateDamageAnim(v36); /*0x71aa90*/
            }
            v37 = *(TechnoClass **)(*(_DWORD *)this->__pad_28 + 728); /*0x71aa98*/
            if ( v37 ) /*0x71aaa0*/
              TechnoClass::MutateAll(v37, this->creationFrame, 0); /*0x71aaa7*/
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)this->__pad_28 + 952))( /*0x71aab5*/
              *(_DWORD *)this->__pad_28,
              this->creationFrame);
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)this->__pad_28 + 224))( /*0x71aac4*/
              *(_DWORD *)this->__pad_28,
              this->creationFrame);
            result = (void **)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 248))(*(_DWORD *)this->__pad_28); /*0x71aacf*/
          }
          v38 = this->creationFrame; /*0x71aad5*/
          if ( v38 ) /*0x71aada*/
            result = (void **)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v38 + 1156))(v38, 0, 1); /*0x71aae1*/
        }
        v39 = this->creationFrame; /*0x71aae7*/
        *(_DWORD *)this->__pad_28 = 0; /*0x71aaea*/
        this->q011 = 0; /*0x71aaef*/
        this->uniqueId = 0; /*0x71aaf2*/
        *((_DWORD *)this + 15) = 0; /*0x71aaf5*/
        *((_DWORD *)this + 14) = 0; /*0x71aaf8*/
        if ( v39 ) /*0x71aafb*/
          return (*(void **(__thiscall **)(int, _DWORD, int))(*(_DWORD *)v39 + 1156))(v39, 0, 1); /*0x71ab02*/
      }
    }
  }
  return result; /*0x71a795*/
}



// ==== 0x0071AB10  TemporalClass::GetWarpPerStep  this=TemporalClass  sig=csp ====
int __thiscall TemporalClass::GetWarpPerStep(TemporalClass *this, int a2)
{
  int WarpPerStep; // ebx
  TemporalClass *v4; // ecx
  int creationFrame; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // eax

  WarpPerStep = 0; /*0x71ab14*/
  v4 = (TemporalClass *)this->q011; /*0x71ab17*/
  if ( v4 && a2 <= 50 ) /*0x71ab25*/
    WarpPerStep = TemporalClass::GetWarpPerStep(v4, a2 + 1); /*0x71ab2e*/
  creationFrame = this->creationFrame; /*0x71ab30*/
  v6 = *(_DWORD *)creationFrame; /*0x71ab35*/
  v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)creationFrame + 740))(creationFrame, 0); /*0x71ab37*/
  v8 = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, int))(v6 + 1016))(this->creationFrame, v7) + 164); /*0x71ab4a*/
  this->IsAllocated = v8; /*0x71ab50*/
  return WarpPerStep + v8; /*0x71ab49*/
}



// ==== 0x0071AB60  ObjectClass::UnlinkFromFactory  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ObjectClass::UnlinkFromFactory(ObjectClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *occupant; // ecx

  result = a2; /*0x71ab60*/
  occupant = (_DWORD *)this->occupant; /*0x71ab68*/
  if ( a2 == occupant ) /*0x71ab6d*/
  {
    result = (_DWORD *)this->owningHouseIndex; /*0x71ab6f*/
    if ( result ) /*0x71ab76*/
    {
      result = FactoryClass::CompleteItem((FactoryClass *)this); /*0x71ab7a*/
      this->owningHouseIndex = 0; /*0x71ab7f*/
    }
  }
  else if ( a2 == (_DWORD *)this->owningHouseIndex ) /*0x71ab8a*/
  {
    this->owningHouseIndex = 0; /*0x71ab90*/
    this->ambientSoundController[2] = 0; /*0x71ab93*/
    this->ambientSoundController[1] = 0; /*0x71ab96*/
    this->ambientSoundController[0] = 0; /*0x71ab99*/
    this->attachedBomb = 0; /*0x71ab9c*/
    if ( occupant ) /*0x71ab9f*/
      return (*(_DWORD *(__thiscall **)(_DWORD *, _DWORD, int))(*occupant + 1156))(occupant, 0, 1); /*0x71aba6*/
  }
  return result; /*0x71ab82*/
}



// ==== 0x0071ABC0  FactoryClass::CompleteItem  this=FactoryClass  sig=csp ====
_DWORD *__thiscall FactoryClass::CompleteItem(FactoryClass *this)
{
  _DWORD *result; // eax
  int v3; // ecx
  BuildingClass *v4; // edi

  result = *(_DWORD **)&this->onHold; /*0x71abc6*/
  v3 = *(_DWORD *)&this->__pad_42[2]; /*0x71abc9*/
  if ( result ) /*0x71abce*/
  {
    if ( v3 ) /*0x71ac71*/
    {
      *(_DWORD *)(v3 + 64) = result; /*0x71ac73*/
      result = *(_DWORD **)&this->onHold; /*0x71ac76*/
      if ( result ) /*0x71ac7b*/
      {
        result[17] = *(_DWORD *)&this->__pad_42[2]; /*0x71ac80*/
        this->production[1] = 0; /*0x71ac83*/
        *(_DWORD *)&this->__pad_42[2] = 0; /*0x71ac86*/
        *(_DWORD *)&this->onHold = 0; /*0x71ac89*/
        this->object = 0; /*0x71ac8c*/
        this->queuedCapacity = 0; /*0x71ac8f*/
        return result; /*0x71ac94*/
      }
    }
    else
    {
      result[17] = 0; /*0x71ac95*/
    }
    goto LABEL_14; /*0x71ac7b*/
  }
  result = (_DWORD *)this->production[1]; /*0x71abd4*/
  if ( v3 ) /*0x71abd9*/
  {
    if ( result ) /*0x71abdd*/
      result[158] = v3; /*0x71abdf*/
    result = *(_DWORD **)&this->__pad_42[2]; /*0x71abe5*/
    result[16] = 0; /*0x71abe8*/
    *(_DWORD *)(*(_DWORD *)&this->__pad_42[2] + 72) = *(_DWORD *)&this->__pad_42[6]; /*0x71abf1*/
    this->production[1] = 0; /*0x71abf4*/
    *(_DWORD *)&this->__pad_42[2] = 0; /*0x71abf7*/
    *(_DWORD *)&this->onHold = 0; /*0x71abfa*/
    this->object = 0; /*0x71abfd*/
    this->queuedCapacity = 0; /*0x71ac00*/
    return result; /*0x71ac05*/
  }
  if ( !result ) /*0x71ac08*/
  {
LABEL_14:
    this->production[1] = 0; /*0x71ac98*/
    *(_DWORD *)&this->__pad_42[2] = 0; /*0x71ac9b*/
    *(_DWORD *)&this->onHold = 0; /*0x71ac9e*/
    this->object = 0; /*0x71aca1*/
    this->queuedCapacity = 0; /*0x71aca4*/
    return result; /*0x71aca4*/
  }
  result[158] = 0; /*0x71ac0e*/
  *(_BYTE *)(this->production[1] + 624) = 0; /*0x71ac17*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this->production[1] + 44))(this->production[1]) == 6 ) /*0x71ac28*/
  {
    v4 = (BuildingClass *)this->production[1]; /*0x71ac2b*/
    LOBYTE(v4->?->HouseClass_field_timer_B[2]) = 1; /*0x71ac36*/
    BuildingClass::EnableTogglePower(v4); /*0x71ac3d*/
    v4->?->recheckTechTree = 1; /*0x71ac49*/
  }
  result = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)this->production[1] + 292))(this->production[1], 2); /*0x71ac57*/
  this->production[1] = 0; /*0x71ac5d*/
  *(_DWORD *)&this->__pad_42[2] = 0; /*0x71ac60*/
  *(_DWORD *)&this->onHold = 0; /*0x71ac63*/
  this->object = 0; /*0x71ac66*/
  this->queuedCapacity = 0; /*0x71ac69*/
  return result; /*0x71ac03*/
}



// ==== 0x0071AD30  nullsub_246  this=-  sig=ida-proto ====
void nullsub_246()
{
  ; /*0x71ad30*/
}



// ==== 0x0071AD40  TriggerClass::UnlinkTags  this=TriggerClass  sig=csp ====
int __thiscall TriggerClass::UnlinkTags(TriggerClass *this)
{
  TriggerClass *nextTrigger; // eax
  int v3; // eax
  int result; // eax

  nextTrigger = this->nextTrigger; /*0x71ad46*/
  if ( nextTrigger ) /*0x71ad4b*/
  {
    nextTrigger[8].destroyed = 0; /*0x71ad4d*/
    this->nextTrigger[8].timer[1] = 0; /*0x71ad56*/
    this->nextTrigger = 0; /*0x71ad5c*/
  }
  v3 = *(_DWORD *)&this->enabled; /*0x71ad5f*/
  if ( v3 ) /*0x71ad64*/
  {
    if ( *(TriggerClass **)(v3 + 64) == this ) /*0x71ad69*/
      *(_DWORD *)(v3 + 64) = 0; /*0x71ad6b*/
    TagClass::Unlink(*(TagClass **)&this->enabled); /*0x71ad71*/
    *(_DWORD *)&this->enabled = 0; /*0x71ad76*/
  }
  result = this->occuredEvents; /*0x71ad79*/
  if ( result ) /*0x71ad7e*/
  {
    if ( *(TriggerClass **)(result + 68) == this ) /*0x71ad83*/
      *(_DWORD *)(result + 68) = 0; /*0x71ad85*/
    result = TagClass::Unlink((TagClass *)this->occuredEvents); /*0x71ad8b*/
    this->occuredEvents = 0; /*0x71ad90*/
  }
  *(_DWORD *)&this->enabled = 0; /*0x71ad93*/
  this->occuredEvents = 0; /*0x71ad96*/
  this->timer[2] = 0; /*0x71ad99*/
  this->timer[1] = 0; /*0x71ad9c*/
  return result; /*0x71ad9f*/
}



// ==== 0x0071ADE0  TagClass::Unlink  this=TagClass  sig=csp ====
int __thiscall TagClass::Unlink(TagClass *this)
{
  int v2; // eax
  int result; // eax
  TagTypeClass *buildingType; // ecx

  this->firstTrigger[8].destroyed = 0; /*0x71ade9*/
  this->firstTrigger[8].timer[1] = 0; /*0x71adf2*/
  v2 = this->q011; /*0x71adf8*/
  this->firstTrigger = 0; /*0x71adfd*/
  if ( v2 ) /*0x71ae00*/
  {
    if ( *(TagClass **)(v2 + 64) == this ) /*0x71ae05*/
      *(_DWORD *)(v2 + 64) = 0; /*0x71ae07*/
    TagClass::Unlink(*((TagClass **)this + 17)); /*0x71ae0d*/
  }
  result = this->uniqueId; /*0x71ae12*/
  if ( result ) /*0x71ae17*/
  {
    if ( *(TagClass **)(result + 68) == this ) /*0x71ae1c*/
      *(_DWORD *)(result + 68) = 0; /*0x71ae1e*/
    result = TagClass::Unlink(*((TagClass **)this + 16)); /*0x71ae24*/
  }
  buildingType = this->buildingType; /*0x71ae29*/
  this->q011 = 0; /*0x71ae2c*/
  this->uniqueId = 0; /*0x71ae31*/
  *((_DWORD *)this + 15) = 0; /*0x71ae34*/
  *((_DWORD *)this + 14) = 0; /*0x71ae37*/
  if ( buildingType ) /*0x71ae3a*/
    return (*((int (__thiscall **)(TagTypeClass *, _DWORD, int))buildingType->AbstractClass + 289))(buildingType, 0, 1); /*0x71ae41*/
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
          v4 = Coord::To_Cell(&dword_87F7E8, v5); /*0x71aef8*/
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
            if ( v12[135] == dword_A83D4C ) /*0x71b00b*/
            {
              v13 = (_DWORD *)(*((int (__thiscall **)(#375 **, _BYTE *, _DWORD))*v12 + 19))(v12, v20, 0); /*0x71b016*/
              LOWORD(v21) = *v13 / 256; /*0x71b029*/
              v14 = (int)v13[1]; /*0x71b031*/
              HIWORD(v21) = (int)v14 / 256; /*0x71b042*/
              if ( CreateTriggerClassIfFarEnough(4, BYTE4(v14), v21) ) /*0x71b04c*/
                VoxClass::FindAndPlay(aEvaOreminerund, -1); /*0x71b05f*/
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
      result = dword_A83D4C; /*0x71b167*/
      if ( dword_A83D4C ) /*0x71b16e*/
        return (#375 *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 336))(*(_DWORD *)(this + 40)); /*0x71b175*/
    }
  }
  return result; /*0x71b17b*/
}



// ==== 0x0071B190  TemporalClass::StubReturn80  this=TemporalClass  sig=csp ====
int TemporalClass::StubReturn80(TemporalClass *this)
{
  return 80; /*0x71b195*/
}



// ==== 0x0071B1A0  TemporalClass::StubReturn70  this=TemporalClass  sig=csp ====
int TemporalClass::StubReturn70(TemporalClass *this)
{
  return 70; /*0x71b1a5*/
}



// ==== 0x0071B1B0  TemporalClass::ProcessEvent  this=TemporalClass  sig=csp ====
_DWORD *__thiscall TemporalClass::ProcessEvent(TemporalClass *this, char a2)
{
  int v3; // eax
  TemporalClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &TemporalClass::`vftable'; /*0x71b1bd*/
  this->? = &TemporalClass::`vftable'; /*0x71b1c3*/
  this->? = &TemporalClass::`vftable'; /*0x71b1ca*/
  this->? = &TemporalClass::`vftable'; /*0x71b1d1*/
  v5 = this; /*0x71b1df*/
  v3 = (*(int (__thiscall **)(int *, TemporalClass **))(g_BuildingLoadQueue_Array.?[3] + 16))( /*0x71b1e3*/
         &g_BuildingLoadQueue_Array.?[3],
         &v5);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.?[0] ) /*0x71b1f3*/
  {
    --g_BuildingLoadQueue_Array.?[0]; /*0x71b1f8*/
    for ( ; /*0x71b1fe*/
          v3 < g_BuildingLoadQueue_Array.?[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.?[4] + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[4] + 4 * v3) )
    {
      ++v3; /*0x71b206*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x71b21a*/
  if ( (a2 & 1) != 0 ) /*0x71b224*/
    __3_YAXPAX_Z(this); /*0x71b227*/
  return &this->AbstractClass; /*0x71b231*/
}



// ==== 0x0071B240  _DynamicVectorClass_PAVTemporalClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TemporalClass::Destroy(_DynamicVectorClass_PAVTemporalClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x71b246*/
  this->m_10 = 0; /*0x71b249*/
  if ( v2 && BYTE1(this->m_C) ) /*0x71b250*/
  {
    __3_YAXPAX_Z(v2); /*0x71b256*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71b25e*/
  }
  BYTE1(this->m_C) = 0; /*0x71b261*/
  this->m_8 = 0; /*0x71b264*/
}



// ==== 0x0071B270  _DynamicVectorClass_PAVTemporalClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TemporalClass::GetItemIndex(_DynamicVectorClass_PAVTemporalClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x71b270*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x71b285*/
  else
    return 0; /*0x71b277*/
}



// ==== 0x0071B290  _VectorClass_PAVTemporalClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TemporalClass::Get(_VectorClass_PAVTemporalClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x71b29a*/
}



// ==== 0x0071B2A0  _VectorClass_PAVTemporalClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TemporalClass::Add(_VectorClass_PAVTemporalClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x71b2a2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x71b2ad*/
  {
    v3 = 0; /*0x71b2af*/
    if ( m_8 <= 0 ) /*0x71b2b3*/
      return 1; /*0x71b2d3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x71b2b5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x71b2bb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x71b2c4*/
    {
      ++v3; /*0x71b2c6*/
      ++v4; /*0x71b2c7*/
      if ( v3 >= m_8 ) /*0x71b2cc*/
        return 1; /*0x71b2cc*/
    }
  }
  return 0; /*0x71b2ce*/
}



// ==== 0x0071B2E0  _VectorClass_PAVTemporalClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TemporalClass::Release(_VectorClass_PAVTemporalClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x71b2ec*/
  {
    LOBYTE(this->m_C) = 0; /*0x71b2f6*/
    if ( a3 ) /*0x71b2fc*/
      v4 = a3; /*0x71b312*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x71b30e*/
    LOBYTE(this->m_C) = 1; /*0x71b316*/
    if ( v4 ) /*0x71b31a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x71b325*/
      {
        m_8 = this->m_8; /*0x71b32c*/
        if ( a2 < m_8 ) /*0x71b331*/
          m_8 = a2; /*0x71b333*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x71b339*/
          ++i; /*0x71b33e*/
        if ( BYTE1(this->m_C) ) /*0x71b34b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x71b356*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x71b35e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x71b367*/
      this->m_8 = a2; /*0x71b36f*/
      BYTE1(this->m_C) = a3 == 0; /*0x71b372*/
      return 1; /*0x71b378*/
    }
    else
    {
      return 0; /*0x71b31f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVTemporalClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x71b382*/
    return 1; /*0x71b388*/
  }
}



// ==== 0x0071B390  _VectorClass_PAVTemporalClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TemporalClass::Remove(_VectorClass_PAVTemporalClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x71b39d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x71b3a3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71b3ab*/
  }
  BYTE1(this->m_C) = 0; /*0x71b3ae*/
  this->m_8 = 0; /*0x71b3b1*/
}



// ==== 0x0071B3C0  _VectorClass_PAVTemporalClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TemporalClass::GetSize(_VectorClass_PAVTemporalClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x71b3c0*/
    return 0; /*0x71b3c8*/
  m_8 = this->m_8; /*0x71b3ce*/
  result = 0; /*0x71b3d1*/
  if ( m_8 <= 0 ) /*0x71b3d5*/
    return -1; /*0x71b3ec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x71b3db*/
  {
    if ( ++result >= m_8 ) /*0x71b3ea*/
      return -1; /*0x71b3ea*/
  }
  return result; /*0x71b3ca*/
}



// ==== 0x0071B400  _VectorClass_PAVTemporalClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TemporalClass::GetCapacity(_VectorClass_PAVTemporalClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x71b400*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x71b415*/
  else
    return 0; /*0x71b407*/
}



// ==== 0x0071B420  _DynamicVectorClass_PAVTemporalClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TemporalClass::SetCapacity(
        _DynamicVectorClass_PAVTemporalClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x71b42c*/
  {
    LOBYTE(this->m_C) = 0; /*0x71b432*/
    if ( a3 ) /*0x71b438*/
      v4 = a3; /*0x71b44e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x71b44a*/
    LOBYTE(this->m_C) = 1; /*0x71b452*/
    if ( !v4 ) /*0x71b456*/
      return 0; /*0x71b4ca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x71b458*/
    {
      m_8 = this->m_8; /*0x71b45f*/
      if ( a2 < m_8 ) /*0x71b464*/
        m_8 = a2; /*0x71b466*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x71b46c*/
        ++i; /*0x71b471*/
      if ( BYTE1(this->m_C) ) /*0x71b47e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x71b489*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x71b491*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x71b49a*/
    this->m_8 = a2; /*0x71b4a2*/
    BYTE1(this->m_C) = a3 == 0; /*0x71b4a5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVTemporalClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x71b4ae*/
  }
  v7 = this->m_8; /*0x71b4b1*/
  if ( v7 < this->m_10 ) /*0x71b4b9*/
    this->m_10 = v7; /*0x71b4bb*/
  return 1; /*0x71b4be*/
}



// ==== 0x0071B4D0  _DynamicVectorClass_PAVTemporalClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TemporalClass::FindItemIndex(_DynamicVectorClass_PAVTemporalClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x71b4d0*/
  result = 0; /*0x71b4d3*/
  if ( m_10 <= 0 ) /*0x71b4d8*/
    return -1; /*0x71b4ef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x71b4de*/
  {
    if ( ++result >= m_10 ) /*0x71b4ed*/
      return -1; /*0x71b4ed*/
  }
  return result; /*0x71b4f2*/
}



// ==== 0x0071B500  _VectorClass_PAVTemporalClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TemporalClass::QueryInterface(_VectorClass_PAVTemporalClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x71b503*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TemporalClass *>::`vftable'; /*0x71b506*/
  if ( v3 && BYTE1(this->m_C) ) /*0x71b510*/
  {
    __3_YAXPAX_Z(v3); /*0x71b518*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71b520*/
  }
  BYTE1(this->m_C) = 0; /*0x71b52b*/
  this->m_8 = 0; /*0x71b531*/
  if ( (a2 & 1) != 0 ) /*0x71b538*/
    __3_YAXPAX_Z(this); /*0x71b53b*/
  return this->__pad_0; /*0x71b545*/
}



// ==== 0x0071B550  _DynamicVectorClass_PAVTemporalClass::Constructor_VectorClass_TemporalClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TemporalClass::Constructor_VectorClass_TemporalClass___(
        _DynamicVectorClass_PAVTemporalClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x71b553*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TemporalClass *>::`vftable'; /*0x71b556*/
  if ( v3 && BYTE1(this->m_C) ) /*0x71b560*/
  {
    __3_YAXPAX_Z(v3); /*0x71b568*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71b570*/
  }
  BYTE1(this->m_C) = 0; /*0x71b57b*/
  this->m_8 = 0; /*0x71b581*/
  if ( (a2 & 1) != 0 ) /*0x71b588*/
    __3_YAXPAX_Z(this); /*0x71b58b*/
  return this->__pad_0; /*0x71b595*/
}



// ==== 0x0071B5A0  sub_71B5A0  this=-  sig=ida-proto ====
void sub_71B5A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71b5ac*/
  dbl_B0ECF8 = Math::Sqrt(v0 + v0); /*0x71b5be*/
}



// ==== 0x0071B5D0  sub_71B5D0  this=-  sig=ida-proto ====
void sub_71B5D0()
{
  dbl_B0ED48 = dbl_B0ECF8 / 60.0; /*0x71b5dc*/
}



// ==== 0x0071B5F0  sub_71B5F0  this=-  sig=ida-proto ====
void sub_71B5F0()
{
  dbl_B0ED30 = 1.0 / dbl_B0ED48; /*0x71b5fc*/
}



// ==== 0x0071B610  sub_71B610  this=-  sig=ida-proto ====
void sub_71B610()
{
  dbl_B0ED28 = 0.0174532925199433 * 45.0; /*0x71b61c*/
}



// ==== 0x0071B630  sub_71B630  this=-  sig=ida-proto ====
void sub_71B630()
{
  dbl_B0ED00 = 0.0174532925199433 * 60.0; /*0x71b63c*/
}



// ==== 0x0071B650  sub_71B650  this=-  sig=ida-proto ====
void sub_71B650()
{
  dbl_B0ECD8 = 0.0174532925199433 * 90.0; /*0x71b65c*/
}



// ==== 0x0071B670  sub_71B670  this=-  sig=ida-proto ====
__int64 sub_71B670()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0ECD8 - dbl_B0ED00); /*0x71b682*/
  result = Math::RoundToInt(v0 * dbl_B0ECF8 * 0.5); /*0x71b696*/
  dword_B0ED50 = result; /*0x71b69b*/
  return result; /*0x71b6a0*/
}



// ==== 0x0071B6B0  sub_71B6B0  this=-  sig=ida-proto ====
void sub_71B6B0()
{
  dbl_B0ED08 = Math::ArcTan((double)dword_B0ED50 * 0.00390625); /*0x71b6c7*/
}



// ==== 0x0071B6E0  sub_71B6E0  this=-  sig=ida-proto ====
void sub_71B6E0()
{
  dbl_B0ED20 = Math::ArcTan((double)(2 * dword_B0ED50) / dbl_B0ECF8); /*0x71b702*/
}



// ==== 0x0071B710  sub_71B710  this=-  sig=ida-proto ====
__int64 sub_71B710()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0ED50) + 0.5); /*0x71b72b*/
  dword_B0ED44 = result; /*0x71b730*/
  return result; /*0x71b736*/
}



// ==== 0x0071B740  sub_71B740  this=-  sig=ida-proto ====
int sub_71B740()
{
  word_B0ECF0 = 0; /*0x71b742*/
  word_B0ECF2 = 0; /*0x71b748*/
  return 0; /*0x71b74e*/
}



// ==== 0x0071B750  sub_71B750  this=-  sig=ida-proto ====
int sub_71B750()
{
  dword_B0ED10 = 0; /*0x71b752*/
  dword_B0ED14 = 0; /*0x71b757*/
  dword_B0ED18 = 0; /*0x71b75c*/
  return 0; /*0x71b761*/
}



// ==== 0x0071B770  sub_71B770  this=-  sig=ida-proto ====
int sub_71B770()
{
  dword_B0ED40 = 0; /*0x71b775*/
  dword_B0ED38 = 128; /*0x71b77f*/
  dword_B0ED3C = 128; /*0x71b784*/
  return 128; /*0x71b789*/
}



// ==== 0x0071B790  sub_71B790  this=-  sig=ida-proto ====
int sub_71B790()
{
  dword_B0ECE0 = 0; /*0x71b792*/
  dword_B0ECE4 = 0; /*0x71b797*/
  dword_B0ECE8 = 0; /*0x71b79c*/
  dword_B0ECEC = 0; /*0x71b7a1*/
  return 0; /*0x71b7a6*/
}



// ==== 0x0071B7B0  TerrainClass::CleanupMembers  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::CleanupMembers(int this)
{
  AbstractClass *v2; // edi
  int v3; // eax
  int Vtable3; // eax
  void *vtable1; // edx
  int v6; // edi
  int v7; // eax
  signed int v8; // eax
  int v9; // ecx
  char *i; // eax
  _DWORD *v11; // eax
  int v13[2]; // [esp+8h] [ebp-8h] BYREF

  v2 = (AbstractClass *)(this + 4); /*0x71b7b9*/
  *(_DWORD *)this = &TerrainClass::`vftable'; /*0x71b7bc*/
  *(_DWORD *)(this + 8) = &TerrainClass::`vftable'; /*0x71b7c2*/
  *(_DWORD *)(this + 12) = &TerrainClass::`vftable'; /*0x71b7c9*/
  *(_DWORD *)(this + 4) = &off_7F5200; /*0x71b7d0*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x71b7d6*/
  v13[0] = this; /*0x71b7eb*/
  v3 = (*(int (__thiscall **)(_DWORD *, int *))(dword_A8E988 + 16))(&dword_A8E988, v13); /*0x71b7ef*/
  if ( v3 != -1 && v3 < dword_A8E998 && v3 < --dword_A8E998 ) /*0x71b80a*/
  {
    do /*0x71b822*/
    {
      ++v3; /*0x71b812*/
      *((_DWORD *)dword_A8E98C + v3 - 1) = *((_DWORD *)dword_A8E98C + v3); /*0x71b816*/
    }
    while ( v3 < dword_A8E998 ); /*0x71b822*/
  }
  if ( byte_A8E9A0 && *(_DWORD *)(this + 200) ) /*0x71b82d*/
  {
    *(_BYTE *)(this + 144) = 1; /*0x71b839*/
    TerrainClass::ApplyCellModifications((TerrainClass *)this); /*0x71b840*/
  }
  Vtable3 = AbstractClass::GetVtable3(v2); /*0x71b846*/
  vtable1 = g_BuildingLoadQueue_Array.?; /*0x71b84b*/
  v6 = Vtable3; /*0x71b851*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x71b855*/
  {
    if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x71b862*/
    {
      qsort( /*0x71b872*/
        g_BuildingLoadQueue_Array.TechnoTypeClass,
        (size_t)g_BuildingLoadQueue_Array.?,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      vtable1 = g_BuildingLoadQueue_Array.?; /*0x71b877*/
      g_BuildingLoadQueue_Array.? = 0; /*0x71b880*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x71b88a*/
    }
    v13[0] = v6; /*0x71b895*/
    v7 = BinaryArraySearch((int)g_BuildingLoadQueue_Array.TechnoTypeClass, (int)vtable1, v13); /*0x71b8a0*/
    if ( v7 ) /*0x71b8a7*/
    {
      v8 = (signed int)(v7 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x71b8af*/
      if ( v8 != -1 ) /*0x71b8b5*/
      {
        v9 = v8 + 1; /*0x71b8b7*/
        for ( i = (char *)g_BuildingLoadQueue_Array.?; /*0x71b8c1*/
              v9 < (int)g_BuildingLoadQueue_Array.?;
              i = (char *)g_BuildingLoadQueue_Array.? )
        {
          v11 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v9++; /*0x71b8c9*/
          *(v11 - 2) = *v11; /*0x71b8cf*/
          *(v11 - 1) = v11[1]; /*0x71b8d5*/
        }
        g_BuildingLoadQueue_Array.? = i - 1; /*0x71b8ea*/
        *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x71b8ef*/
        *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x71b8ff*/
        g_BuildingLoadQueue_Array.? = 0; /*0x71b903*/
      }
    }
  }
  return ObjectClass::Dtor((ObjectClass *)this); /*0x71b910*/
}



// ==== 0x0071B920  TerrainClass::UpdateAnims  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::UpdateAnims(
        TerrainClass *this,
        int a2,
        int a3,
        int landType,
        int a5,
        int a6,
        int a7,
        void **a8)
{
  int result; // eax
  int v10; // edi
  int v11; // ebx
  int v12; // ebp
  int v13; // edx
  int v14; // eax
  void *WarheadVersusMultiplier; // eax
  wchar_t *v16; // eax
  int *v17; // eax
  void *v18; // [esp-8h] [ebp-44h]
  ObjectClass *v19; // [esp+0h] [ebp-3Ch]
  int v20; // [esp+10h] [ebp-2Ch]
  _DWORD v21[3]; // [esp+14h] [ebp-28h] BYREF
  int v22[3]; // [esp+20h] [ebp-1Ch] BYREF
  int v23; // [esp+2Ch] [ebp-10h] BYREF
  int v24; // [esp+30h] [ebp-Ch]
  int v25; // [esp+34h] [ebp-8h]

  result = landType; /*0x71b923*/
  v20 = 0; /*0x71b92f*/
  if ( landType ) /*0x71b937*/
  {
    if ( *(_BYTE *)(landType + 327) && !*(_BYTE *)(*(_DWORD *)&this->__pad_C0[8] + 563) ) /*0x71b957*/
    {
      result = TechnoClass::CreateDestructionEffect((TechnoClass *)this); /*0x71b986*/
      v20 = result; /*0x71b98e*/
      if ( result == 5 ) /*0x71b992*/
        return result; /*0x71b992*/
      if ( result == 4 ) /*0x71b9a1*/
      {
        if ( *(_BYTE *)(*(_DWORD *)&this->__pad_C0[8] + 689) ) /*0x71b9ad*/
        {
          a8 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x71b9c8*/
          if ( a8 ) /*0x71b9ce*/
          {
            v11 = this->location[1]; /*0x71b9e0*/
            v12 = this->location[2]; /*0x71b9e3*/
            v22[0] = this->location[0]; /*0x71b9e8*/
            v10 = v22[0]; /*0x71b9de*/
            v22[1] = this->location[1]; /*0x71b9ef*/
            v22[2] = this->location[2]; /*0x71b9f8*/
            v23 = this->location[0]; /*0x71b9fe*/
            v24 = this->location[1]; /*0x71ba05*/
            v13 = this->location[2]; /*0x71ba0b*/
            v21[0] = this->location[0]; /*0x71ba0e*/
            v25 = v13; /*0x71ba12*/
            v14 = this->location[2]; /*0x71ba19*/
            v21[1] = this->location[1]; /*0x71ba26*/
            v21[2] = v14; /*0x71ba2a*/
            landType = Coord::To_Cell((Coord *)&dword_87F7E8, v21)->landType; /*0x71ba3e*/
            v18 = (void *)Return::HRESULT_Fail(v10, v11, v12); /*0x71ba51*/
            WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier( /*0x71ba7b*/
                                                100,
                                                *(_DWORD *)&dword_8871E0->__pad_C3C[876],
                                                landType,
                                                &v23);
            AnimClass::ctor((AnimClass *)a8, WarheadVersusMultiplier, v22, 0, 1, (void *)0x2600, v18, 0); /*0x71ba85*/
          }
          v23 = this->location[0]; /*0x71ba96*/
          v24 = this->location[1]; /*0x71baa2*/
          v25 = this->location[2]; /*0x71baa9*/
          PlaySoundEffectAt(&v23, 100, 0, *(_DWORD *)&dword_8871E0->__pad_C3C[876], 1, 0); /*0x71babf*/
          (*(void (__thiscall **)(TerrainClass *, int *))(this->vtable0 + 440))(this, &landType); /*0x71bacd*/
          CellChainReact(v19); /*0x71bad5*/
        }
        else if ( this->__pad_C0[12] ) /*0x71badc*/
        {
          TerrainClass::ClearAnimationLinkFlags(this); /*0x71bae8*/
        }
        else if ( !this->__pad_C0[13] ) /*0x71baef*/
        {
          this->__pad_C0[13] = 1; /*0x71baf9*/
          v16 = dword_A8ED84; /*0x71bb00*/
          *(_DWORD *)this->__pad_C0 = 2; /*0x71bb10*/
          this->Type = (int)v16; /*0x71bb16*/
          *(_DWORD *)this->IsBurning = v24; /*0x71bb1c*/
          this->height = 2; /*0x71bb1f*/
          this->Animation[0] = 0; /*0x71bb22*/
        }
        v17 = (int *)(*(int (__thiscall **)(TerrainClass *, int *, _DWORD))(this->vtable0 + 300))(this, &v23, 0); /*0x71bb37*/
        Cell::CreateCrater(*v17, v17[1], v17[2], v17[3], (char)v19); /*0x71bb5e*/
        (*(void (__thiscall **)(TerrainClass *, int))(this->vtable0 + 220))(this, 1); /*0x71bb69*/
        (*(void (__thiscall **)(TerrainClass *))(this->vtable0 + 248))(this); /*0x71bb73*/
      }
    }
    return v20; /*0x71bb79*/
  }
  return result; /*0x71b939*/
}



// ==== 0x0071BB90  TerrainClass::Construct  this=TerrainClass  sig=csp ====
void **__thiscall TerrainClass::Construct(TerrainClass *this, void *a2, __int16 *a3)
{
  TerrainTypeClass *v4; // eax
  int v5; // eax
  TerrainTypeClass *v6; // eax
  int v7; // eax
  int vtable2; // ebp
  _DWORD *v9; // edi
  int i; // eax
  _DWORD *v11; // ecx
  int v13; // [esp+10h] [ebp-Ch] BYREF
  int v14; // [esp+14h] [ebp-8h]
  int v15; // [esp+18h] [ebp-4h]
  __int16 *Vtable3; // [esp+24h] [ebp+8h]

  ObjectClass::ctor((ObjectClass *)this); /*0x71bb99*/
  this->Animation[0] = 0; /*0x71bba4*/
  LOBYTE(this->Animation[1]) = 0; /*0x71bbaa*/
  v4 = *(TerrainTypeClass **)&stru_A8EB00.?[416]; /*0x71bbb0*/
  this->height = 0; /*0x71bbb5*/
  this->Type = v4; /*0x71bbbb*/
  *(_DWORD *)this->__pad_C0 = 0; /*0x71bbc1*/
  *(_DWORD *)&this->__pad_C0[4] = 1; /*0x71bbc7*/
  *(_DWORD *)&this->__pad_C0[8] = a2; /*0x71bbd4*/
  this->__pad_C0[12] = 0; /*0x71bbda*/
  this->__pad_C0[13] = 0; /*0x71bbe0*/
  this->TerrainClass_field_rect_D0[0] = 0; /*0x71bbe6*/
  this->TerrainClass_field_rect_D0[1] = 0; /*0x71bbec*/
  this->TerrainClass_field_rect_D0[2] = 0; /*0x71bbf2*/
  this->TerrainClass_field_rect_D0[3] = 0; /*0x71bbf8*/
  this->ObjectClass = &TerrainClass::`vftable'; /*0x71bbff*/
  this->? = &off_7F5200; /*0x71bc05*/
  this->? = &TerrainClass::`vftable'; /*0x71bc0b*/
  this->? = &TerrainClass::`vftable'; /*0x71bc12*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x71bc19*/
  this->? = *(_DWORD *)(*(_DWORD *)&this->__pad_C0[8] + 160); /*0x71bc2e*/
  if ( *(_DWORD *)a3 != g_BuildingLoadQueue_Array.?[4] ) /*0x71bc3b*/
  {
    v5 = (*a3 << 8) + 128; /*0x71bc61*/
    v14 = (a3[1] << 8) + 128; /*0x71bc66*/
    v13 = v5; /*0x71bc6e*/
    v15 = 0; /*0x71bc72*/
    if ( !TerrainClass::ProcessSpawnAnim(this, &v13, 0) ) /*0x71bc76*/
      ObjectClass::Destroy((ObjectClass *)this); /*0x71bc81*/
  }
  v6 = *(TerrainTypeClass **)&stru_A8EB00.?[416]; /*0x71bc86*/
  *(_DWORD *)this->__pad_C0 = 0; /*0x71bc93*/
  this->Type = v6; /*0x71bc99*/
  *(_DWORD *)&this->IsBurning = v14; /*0x71bc9f*/
  this->height = 0; /*0x71bca2*/
  if ( dword_A8E998 < dword_A8E990 /*0x71bcd7*/
    || (byte_A8E995 || !dword_A8E990)
    && dword_A8E99C > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E988 + 8))(
         &dword_A8E988,
         dword_A8E990 + dword_A8E99C,
         0) )
  {
    v7 = dword_A8E998++; /*0x71bce4*/
    *((_DWORD *)dword_A8E98C + v7) = this; /*0x71bcf3*/
  }
  Vtable3 = (__int16 *)AbstractClass::GetVtable3((AbstractClass *)&this->?); /*0x71bd02*/
  if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x71bd0e*/
    goto LABEL_18; /*0x71bd0e*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x71bd16*/
  {
    vtable2 = (int)g_BuildingLoadQueue_Array.?; /*0x71bd1f*/
    if ( (int)g_BuildingLoadQueue_Array.? < 0 ) /*0x71bd23*/
      return &this->ObjectClass; /*0x71bd23*/
  }
  else
  {
    vtable2 = 10; /*0x71bd18*/
  }
  v9 = (_DWORD *)__2_YAPAXI_Z(8 * ((int)g_BuildingLoadQueue_Array.? + vtable2)); /*0x71bd38*/
  if ( v9 ) /*0x71bd3f*/
  {
    for ( i = 0; i < (int)g_BuildingLoadQueue_Array.?; v9[2 * i - 1] = v11[1] ) /*0x71bd58*/
    {
      v11 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * i++; /*0x71bd60*/
      v9[2 * i - 2] = *v11; /*0x71bd66*/
    }
    __3_YAXPAX_Z(g_BuildingLoadQueue_Array.TechnoTypeClass); /*0x71bd82*/
    g_BuildingLoadQueue_Array.TechnoTypeClass = v9; /*0x71bd91*/
    g_BuildingLoadQueue_Array.? = (char *)g_BuildingLoadQueue_Array.? + vtable2; /*0x71bd97*/
    g_BuildingLoadQueue_Array.? = 0; /*0x71bd9c*/
LABEL_18:
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = Vtable3; /*0x71bda2*/
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = this; /*0x71bdc0*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x71bdca*/
    ++g_BuildingLoadQueue_Array.?; /*0x71bdd0*/
  }
  return &this->ObjectClass; /*0x71bdd7*/
}



// ==== 0x0071BDF0  ObjectClass::ProcessFoggedState  this=TerrainClass  sig=csp ====
int __thiscall ObjectClass::ProcessFoggedState(ObjectClass *this)
{
  int v2; // eax
  int v3; // eax
  int vtable2; // ebp
  _DWORD *v5; // edi
  int i; // eax
  _DWORD *v7; // ecx
  int Vtable3; // [esp+14h] [ebp-4h]

  ObjectClass::ctor(this); /*0x71bdf9*/
  this->q02B = 0; /*0x71be03*/
  this->q0B0 = 0; /*0x71be09*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71be0f*/
  this->height = 0; /*0x71be14*/
  this->Type = v2; /*0x71be1a*/
  this->nextObject = 0; /*0x71be20*/
  this->q031 = 1; /*0x71be26*/
  this->q0C8 = 0; /*0x71be30*/
  this->q0CC = 0; /*0x71be36*/
  this->q0CD = 0; /*0x71be3c*/
  this->attachedTag = 0; /*0x71be42*/
  this->q0D4 = 0; /*0x71be48*/
  this->occupant = 0; /*0x71be4e*/
  this->q0DC = 0; /*0x71be54*/
  this->AbstractClass = &TerrainClass::`vftable'; /*0x71be5a*/
  this->? = &off_7F5200; /*0x71be60*/
  this->? = &TerrainClass::`vftable'; /*0x71be66*/
  this->? = &TerrainClass::`vftable'; /*0x71be6d*/
  if ( dword_A8E998 < dword_A8E990 /*0x71bea8*/
    || (byte_A8E995 || !dword_A8E990)
    && dword_A8E99C > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E988 + 8))(
         &dword_A8E988,
         dword_A8E990 + dword_A8E99C,
         0) )
  {
    v3 = dword_A8E998++; /*0x71beb5*/
    *((_DWORD *)dword_A8E98C + v3) = this; /*0x71bec4*/
  }
  Vtable3 = AbstractClass::GetVtable3((AbstractClass *)&this->?); /*0x71bed3*/
  if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x71bedf*/
    goto LABEL_15; /*0x71bedf*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x71bee7*/
  {
    vtable2 = (int)g_BuildingLoadQueue_Array.?; /*0x71bef0*/
    if ( (int)g_BuildingLoadQueue_Array.? < 0 ) /*0x71bef4*/
      return (int)this; /*0x71bef4*/
  }
  else
  {
    vtable2 = 10; /*0x71bee9*/
  }
  v5 = (_DWORD *)__2_YAPAXI_Z(8 * ((int)g_BuildingLoadQueue_Array.? + vtable2)); /*0x71bf09*/
  if ( v5 ) /*0x71bf10*/
  {
    for ( i = 0; i < (int)g_BuildingLoadQueue_Array.?; v5[2 * i - 1] = v7[1] ) /*0x71bf29*/
    {
      v7 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * i++; /*0x71bf31*/
      v5[2 * i - 2] = *v7; /*0x71bf37*/
    }
    __3_YAXPAX_Z(g_BuildingLoadQueue_Array.TechnoTypeClass); /*0x71bf53*/
    g_BuildingLoadQueue_Array.TechnoTypeClass = v5; /*0x71bf62*/
    g_BuildingLoadQueue_Array.? = (char *)g_BuildingLoadQueue_Array.? + vtable2; /*0x71bf68*/
    g_BuildingLoadQueue_Array.? = 0; /*0x71bf6d*/
LABEL_15:
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = Vtable3; /*0x71bf73*/
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = this; /*0x71bf91*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x71bf9b*/
    ++g_BuildingLoadQueue_Array.?; /*0x71bfa1*/
  }
  return (int)this; /*0x71bfa8*/
}



// ==== 0x0071BFB0  TerrainClass::CheckNearbyObjects  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::CheckNearbyObjects(TerrainClass *this, int a2)
{
  int v2; // esi
  _DWORD *v4; // eax
  IPersistStream v5; // eax
  int v6; // ecx
  _BYTE v8[4]; // [esp+8h] [ebp-10h] BYREF
  _BYTE v9[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = a2; /*0x71bfb4*/
  if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay((ObjectClass *)this) ) /*0x71bfbc*/
    return 0; /*0x71c063*/
  a2 = *(_DWORD *)(*((int (__thiscall **)(TerrainClass *, _BYTE *))this->ObjectClass + 110))(this, v8); /*0x71bfdf*/
  if ( v2 ) /*0x71bfe3*/
  {
    if ( v2 == 1 || v2 == 3 ) /*0x71bfeb*/
    {
      MapClass::FillRevealBuffer((MapClass *)&stru_87F5F0.__pad_58[416], &a2, this); /*0x71bff8*/
      v4 = (_DWORD *)(*((int (__thiscall **)(TerrainClass *, _BYTE *))this->ObjectClass + 43))(this, v9); /*0x71c00d*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v4, &this->TerrainClass_field_rect_D0[2]); /*0x71c01a*/
      v5 = g_TacticalClass_Instance[45]; /*0x71c02d*/
      v6 = this->TerrainClass_field_rect_D0[3]; /*0x71c035*/
      this->TerrainClass_field_rect_D0[2] += *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x71c03a*/
      this->TerrainClass_field_rect_D0[3] = *(_DWORD *)&v5 + v6; /*0x71c03c*/
      return 1; /*0x71c045*/
    }
  }
  else
  {
    MapClass::ApplyOverlayReveal((MapClass *)&stru_87F5F0.__pad_58[416], &a2, (char *)this); /*0x71c053*/
  }
  return 1; /*0x71c026*/
}



// ==== 0x0071C070  TerrainClass::ClearCellFlags  this=TerrainClass  sig=csp ====
_BYTE *__thiscall TerrainClass::ClearCellFlags(TerrainClass *this, _DWORD *a2)
{
  int v2; // ebx
  _DWORD *v3; // ecx
  _BYTE *result; // eax

  if ( dword_A8B230[130].uniqueId == 1 ) /*0x71c07d*/
    v2 = *(_DWORD *)(*(_DWORD *)&this->__pad_C0[8] + 684); /*0x71c093*/
  else
    v2 = *(_DWORD *)(*(_DWORD *)&this->__pad_C0[8] + 680); /*0x71c085*/
  v3 = a2; /*0x71c099*/
  LOWORD(a2) = *a2 / 256; /*0x71c0ab*/
  HIWORD(a2) = v3[1] / 256; /*0x71c0c4*/
  result = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x71c0d6*/
  if ( (v2 & 1) != 0 ) /*0x71c0de*/
    result[292] &= ~4u; /*0x71c0e0*/
  if ( (v2 & 2) != 0 ) /*0x71c0ea*/
    result[292] &= ~8u; /*0x71c0ec*/
  if ( (v2 & 4) != 0 ) /*0x71c0f7*/
    result[292] &= ~0x10u; /*0x71c0f9*/
  return result; /*0x71c0f6*/
}



// ==== 0x0071C110  TerrainClass::SetOccupyBit_PassableTerrain  this=TerrainClass  sig=csp ====
_BYTE *__thiscall TerrainClass::SetOccupyBit_PassableTerrain(TerrainClass *this, _DWORD *a2)
{
  int v2; // ebx
  _DWORD *v3; // ecx
  _BYTE *result; // eax

  if ( dword_A8B230[130].uniqueId == 1 ) /*0x71c11d*/
    v2 = *(_DWORD *)(*(_DWORD *)&this->__pad_C0[8] + 684); /*0x71c133*/
  else
    v2 = *(_DWORD *)(*(_DWORD *)&this->__pad_C0[8] + 680); /*0x71c125*/
  v3 = a2; /*0x71c139*/
  LOWORD(a2) = *a2 / 256; /*0x71c14b*/
  HIWORD(a2) = v3[1] / 256; /*0x71c164*/
  result = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x71c176*/
  if ( (v2 & 1) != 0 ) /*0x71c17e*/
    result[292] |= 4u; /*0x71c180*/
  if ( (v2 & 2) != 0 ) /*0x71c18a*/
    result[292] |= 8u; /*0x71c18c*/
  if ( (v2 & 4) != 0 ) /*0x71c197*/
    result[292] |= 0x10u; /*0x71c199*/
  return result; /*0x71c196*/
}



// ==== 0x0071C1B0  TerrainClass::Draw  this=TerrainClass  sig=csp ====
void __thiscall TerrainClass::Draw(TerrainClass *this, int *a2, int *a3)
{
  int *v4; // eax
  int (__thiscall **vtable0)(TerrainClass *); // edx
  int *v6; // ebp
  unsigned int v7; // ebx
  int v8; // edx
  int (__thiscall **v9)(TerrainClass *); // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // edx
  int v14; // ebp
  int v15; // esi
  int v16; // [esp+10h] [ebp-14h]
  __int16 v17[2]; // [esp+14h] [ebp-10h] BYREF
  int *v18; // [esp+18h] [ebp-Ch] BYREF
  int v19; // [esp+1Ch] [ebp-8h] BYREF
  int v20; // [esp+20h] [ebp-4h]

  *(_DWORD *)v17 = *(_DWORD *)(*((int (__thiscall **)(TerrainClass *, int **))this->ObjectClass + 110))(this, &v18); /*0x71c1d4*/
  v4 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17); /*0x71c1d8*/
  vtable0 = (int (__thiscall **)(TerrainClass *))this->ObjectClass; /*0x71c1dd*/
  v6 = v4; /*0x71c1df*/
  v18 = v4; /*0x71c1e3*/
  v16 = vtable0[27](this); /*0x71c1ec*/
  if ( v16 ) /*0x71c1f0*/
  {
    if ( *(_BYTE *)(*(_DWORD *)&this->__pad_C0[8] + 691) ) /*0x71c1fe*/
    {
      v7 = this->Animation[0]; /*0x71c208*/
    }
    else if ( this->__pad_C0[13] ) /*0x71c210*/
    {
      v7 = (unsigned __int8)this->__pad_C0[13] + this->Animation[0]; /*0x71c225*/
    }
    else
    {
      v7 = this->? < 2; /*0x71c22f*/
    }
    v8 = a2[1]; /*0x71c23a*/
    v9 = (int (__thiscall **)(TerrainClass *))this->ObjectClass; /*0x71c23d*/
    v19 = *a2; /*0x71c23f*/
    v20 = v8; /*0x71c245*/
    v10 = v9[116](this); /*0x71c249*/
    v11 = -ZCoordToScreenY(v10); /*0x71c25b*/
    if ( !v6[13] ) /*0x71c258*/
      TacticalClass::SetView(v6, 0, 0x10000, 0, 1000, 1000, 1000); /*0x71c27b*/
    v12 = *(_DWORD *)&this->__pad_C0[8]; /*0x71c280*/
    if ( *(_BYTE *)(v12 + 689) ) /*0x71c286*/
    {
      v13 = *(_DWORD *)&stru_87F5F0.__pad_58[116]; /*0x71c294*/
      v14 = *((__int16 *)v6 + 133); /*0x71c29a*/
      v20 -= 16; /*0x71c2ac*/
    }
    else
    {
      v13 = v6[13]; /*0x71c2b2*/
      v14 = *((__int16 *)v6 + 134); /*0x71c2b5*/
    }
    if ( *(_BYTE *)(v12 + 691) || this->__pad_C0[13] ) /*0x71c2c6*/
      v15 = 11776; /*0x71c2d0*/
    else
      v15 = 19968; /*0x71c2d7*/
    DrawToSurfaceSHP((int)g_DSurface_Hidden_2, v13, v16, v7, &v19, a3, v15, 0, v11 - 12, 2, v14, 0, 0, 0, 0, 0); /*0x71c304*/
    if ( byte_822CF1 ) /*0x71c310*/
      DrawToSurfaceSHP( /*0x71c34e*/
        (int)g_DSurface_Hidden_2,
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
void __thiscall TerrainClass::ProcessDestructionAnim(TerrainClass *this, int *a2, int *a3)
{
  int *v4; // ebx
  int v5; // ebp
  unsigned __int8 v6; // al
  int v7; // edx
  int (__thiscall **vtable0)(TerrainClass *); // eax
  int v9; // eax
  int v10; // edi
  int v11; // edx
  int v12; // esi
  unsigned int v13; // [esp+10h] [ebp-10h] BYREF
  __int16 v14[2]; // [esp+14h] [ebp-Ch] BYREF
  int v15; // [esp+18h] [ebp-8h] BYREF
  int v16; // [esp+1Ch] [ebp-4h]

  *(_DWORD *)v14 = *(_DWORD *)(*((int (__thiscall **)(TerrainClass *, unsigned int *))this->ObjectClass + 110))( /*0x71c384*/
                                this,
                                &v13);
  v4 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14); /*0x71c391*/
  v5 = (*((int (__thiscall **)(TerrainClass *))this->ObjectClass + 27))(this); /*0x71c396*/
  if ( v5 ) /*0x71c39a*/
  {
    v6 = this->__pad_C0[13]; /*0x71c3a0*/
    v13 = 0; /*0x71c3a6*/
    if ( v6 ) /*0x71c3b0*/
      v13 = v6 + this->Animation[0]; /*0x71c3bf*/
    v7 = a2[1]; /*0x71c3c9*/
    vtable0 = (int (__thiscall **)(TerrainClass *))this->ObjectClass; /*0x71c3cc*/
    v15 = *a2; /*0x71c3ce*/
    v16 = v7; /*0x71c3d4*/
    v9 = vtable0[116](this); /*0x71c3d8*/
    v10 = -ZCoordToScreenY(v9); /*0x71c3ea*/
    if ( !v4[13] ) /*0x71c3e7*/
      TacticalClass::SetView(v4, 0, 0x10000, 0, 1000, 1000, 1000); /*0x71c40a*/
    if ( *(_BYTE *)(*(_DWORD *)&this->__pad_C0[8] + 689) ) /*0x71c415*/
    {
      v11 = *(_DWORD *)&stru_87F5F0.__pad_58[116]; /*0x71c423*/
      v12 = *((__int16 *)v4 + 133); /*0x71c429*/
      v16 -= 16; /*0x71c43b*/
    }
    else
    {
      v11 = v4[13]; /*0x71c441*/
      v12 = *((__int16 *)v4 + 134); /*0x71c444*/
    }
    DrawToSurfaceSHP((int)g_DSurface_Hidden_2, v11, v5, v13, &v15, a3, 3584, 0, v10 - 4, 2, v12, 0, 0, 0, 0, 0); /*0x71c477*/
    if ( byte_822CF1 ) /*0x71c483*/
      DrawToSurfaceSHP( /*0x71c4be*/
        (int)g_DSurface_Hidden_2,
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
int __thiscall TerrainClass::IsPlacementValid(TerrainClass *this, int a2, int a3, int a4, int a5, int a6)
{
  _WORD *v7; // esi
  int v8; // edi
  _WORD *v9; // eax
  __int16 v10; // dx
  int *v11; // eax
  __int16 v12; // dx
  __int16 v13; // ax
  int v15; // [esp-Ch] [ebp-24h]
  int v16; // [esp+10h] [ebp-8h]
  __int16 v17[2]; // [esp+14h] [ebp-4h] BYREF
  int v18; // [esp+1Ch] [ebp+4h]

  v7 = (_WORD *)(*((int (__thiscall **)(TerrainClass *, _DWORD))this->ObjectClass + 66))(this, 0); /*0x71c4e8*/
  v8 = *(_DWORD *)(a2 + 36); /*0x71c4ea*/
  while ( *v7 != 0x7FFF || v7[1] != 0x7FFF ) /*0x71c503*/
  {
    v9 = v7; /*0x71c517*/
    if ( *(_BYTE *)(*(_DWORD *)&this->__pad_C0[8] + 688) ) /*0x71c50f*/
    {
      v10 = v7[1]; /*0x71c51e*/
      v7 += 2; /*0x71c522*/
      LOWORD(v18) = v8 + *v9; /*0x71c52b*/
      HIWORD(v18) = HIWORD(v8) + v10; /*0x71c530*/
      v15 = 5; /*0x71c541*/
      *(_DWORD *)v17 = v18; /*0x71c543*/
    }
    else
    {
      v12 = *v7; /*0x71c55f*/
      v13 = v7[1]; /*0x71c562*/
      v7 += 2; /*0x71c566*/
      LOWORD(v16) = v8 + v12; /*0x71c56f*/
      HIWORD(v16) = HIWORD(v8) + v13; /*0x71c574*/
      v15 = 1; /*0x71c585*/
      *(_DWORD *)v17 = v16; /*0x71c587*/
    }
    v11 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17); /*0x71c54d*/
    if ( !(unsigned __int8)CellClass::IsPassable(v11, v15, 0, 0) ) /*0x71c55b*/
      return 7; /*0x71c59a*/
  }
  return 0; /*0x71c58e*/
}



// ==== 0x0071C5B0  TerrainClass::PlayAmbientAnimation  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::PlayAmbientAnimation(TerrainClass *this)
{
  int v2; // eax
  char v3; // si
  AnimClass *v4; // ebx
  int *v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  BuildingClass *v9; // eax
  BuildingClass *v10; // esi
  int v12[3]; // [esp+4h] [ebp-18h] BYREF
  char v13[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( this->__pad_C0[13] ) /*0x71c5b6*/
    return 0; /*0x71c5b6*/
  if ( this->__pad_C0[12] ) /*0x71c5c4*/
    return 0; /*0x71c5c4*/
  v2 = *(_DWORD *)&this->__pad_C0[8]; /*0x71c5d2*/
  if ( *(_DWORD *)(v2 + 156) != 6 || *(_BYTE *)(v2 + 689) ) /*0x71c5e5*/
    return 0; /*0x71c69d*/
  v3 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x71c60a*/
  v4 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x71c611*/
  if ( v4 ) /*0x71c618*/
  {
    v5 = (int *)(*((int (__thiscall **)(TerrainClass *, char *))this->ObjectClass + 18))(this, v13); /*0x71c623*/
    v6 = *v5; /*0x71c626*/
    v7 = v5[1]; /*0x71c628*/
    v8 = v5[2]; /*0x71c62b*/
    v12[1] = v7; /*0x71c62e*/
    v12[0] = v6; /*0x71c63f*/
    v12[2] = v8 + 80; /*0x71c643*/
    v9 = (BuildingClass *)AnimClass::ctor( /*0x71c667*/
                            v4,
                            *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2964) + 4 * (v3 & 1)),
                            v12,
                            0,
                            255,
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
  v10->?[2] -= 20; /*0x71c683*/
  this->__pad_C0[12] = 1; /*0x71c68a*/
  return 1; /*0x71c694*/
}



// ==== 0x0071C6B0  TerrainClass::ProcessTick  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::ProcessTick(TerrainClass *this)
{
  TerrainTypeClass *health; // eax
  int v4; // [esp+8h] [ebp-8h]

  LOBYTE(health) = this->__pad_C0[12]; /*0x71c6b6*/
  if ( (_BYTE)health ) /*0x71c6be*/
  {
    LOBYTE(health) = this->__pad_C0[13]; /*0x71c6c0*/
    this->__pad_C0[12] = 0; /*0x71c6c6*/
    if ( !(_BYTE)health ) /*0x71c6cf*/
    {
      health = (TerrainTypeClass *)this->?; /*0x71c6d1*/
      if ( !health ) /*0x71c6d6*/
      {
        (*((void (__thiscall **)(TerrainClass *, int))this->ObjectClass + 55))(this, 1); /*0x71c6dc*/
        (*((void (__thiscall **)(TerrainClass *, int))this->ObjectClass + 73))(this, 2); /*0x71c6e8*/
        LOBYTE(health) = this->__pad_C0[13]; /*0x71c6ee*/
        if ( !(_BYTE)health ) /*0x71c6f6*/
        {
          this->__pad_C0[13] = 1; /*0x71c6f8*/
          health = *(TerrainTypeClass **)&stru_A8EB00.?[416]; /*0x71c6ff*/
          *(_DWORD *)this->__pad_C0 = 2; /*0x71c70f*/
          this->Type = health; /*0x71c715*/
          *(_DWORD *)&this->IsBurning = v4; /*0x71c71b*/
          this->height = 2; /*0x71c71e*/
          this->Animation[0] = 0; /*0x71c721*/
          LOBYTE(health) = v4; /*0x71c717*/
        }
      }
    }
  }
  return (char)health; /*0x71c72b*/
}



// ==== 0x0071C730  TerrainClass::Update  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::Update(TerrainClass *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  TerrainTypeClass *v5; // ecx
  int result; // eax
  int v7; // ecx
  int v8; // edi
  _BYTE *v9; // ecx
  int v10; // edi
  TerrainTypeClass *v11; // eax
  TerrainTypeClass **p_Type; // edx
  int *location; // esi
  CellClass *v14; // eax
  int v15; // [esp+10h] [ebp-Ch] BYREF
  TerrainTypeClass *v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+18h] [ebp-4h]

  ObjectClass::DetectCloaked((ObjectClass *)this); /*0x71c738*/
  if ( *(_BYTE *)(*(_DWORD *)&this->__pad_C0[8] + 691) ) /*0x71c745*/
  {
    if ( !*(_DWORD *)this->__pad_C0 ) /*0x71c74d*/
    {
      v2 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x71c761*/
      v3 = *(_DWORD *)&this->__pad_C0[8]; /*0x71c773*/
      if ( (double)((int)abs32(v2) % 1000000) * 0.000001 < *(float *)(v3 + 676) ) /*0x71c796*/
      {
        this->Animation[0] = 0; /*0x71c798*/
        v4 = *(_DWORD *)(v3 + 672); /*0x71c79e*/
        v5 = *(TerrainTypeClass **)&stru_A8EB00.?[416]; /*0x71c7a4*/
        *(_DWORD *)this->__pad_C0 = v4; /*0x71c7b0*/
        this->Type = v5; /*0x71c7b6*/
        *(_DWORD *)&this->IsBurning = v16; /*0x71c7bc*/
        this->height = v4; /*0x71c7bf*/
      }
    }
  }
  result = Locomotor::GetSpeed((Locomotor *)&this->Type); /*0x71c7ca*/
  if ( result || (result = *(_DWORD *)this->__pad_C0) == 0 ) /*0x71c7db*/
  {
    LOBYTE(this->Animation[1]) = 0; /*0x71c840*/
  }
  else
  {
    v7 = *(_DWORD *)&this->__pad_C0[4] + this->Animation[0]; /*0x71c7e9*/
    LOBYTE(this->Animation[1]) = 1; /*0x71c7eb*/
    this->Animation[0] = v7; /*0x71c7f2*/
    this->Type = *(TerrainTypeClass **)&stru_A8EB00.?[416]; /*0x71c7fe*/
    *(_DWORD *)&this->IsBurning = v16; /*0x71c804*/
    this->height = result; /*0x71c807*/
    if ( this->__pad_C0[13] /*0x71c82d*/
      && (v8 = this->Animation[0],
          result = *(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C0[8] + 156))(*(_DWORD *)&this->__pad_C0[8])
                              + 6)
                 - 1,
          v8 == result) )
    {
      return (*((int (__thiscall **)(TerrainClass *))this->ObjectClass + 62))(this); /*0x71c833*/
    }
    else
    {
      v9 = *(_BYTE **)&this->__pad_C0[8]; /*0x71c84d*/
      if ( v9[689] && v9[691] ) /*0x71c85b*/
      {
        v10 = this->Animation[0]; /*0x71c865*/
        result = *(__int16 *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 156))(v9) + 6) / 2; /*0x71c878*/
        if ( v10 == result ) /*0x71c87c*/
        {
          this->Animation[0] = 0; /*0x71c87e*/
          v11 = *(TerrainTypeClass **)&stru_A8EB00.?[416]; /*0x71c884*/
          p_Type = &this->Type; /*0x71c889*/
          *(_DWORD *)this->__pad_C0 = 0; /*0x71c88f*/
          location = this->?; /*0x71c897*/
          *p_Type = v11; /*0x71c89d*/
          p_Type[1] = v16; /*0x71c8a5*/
          p_Type[2] = 0; /*0x71c8a8*/
          v15 = *location; /*0x71c8ad*/
          v16 = (TerrainTypeClass *)location[1]; /*0x71c8be*/
          v17 = location[2]; /*0x71c8c5*/
          v14 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v15); /*0x71c8c9*/
          LOBYTE(result) = CellClass::SpawnTiberiumTree(v14, 1); /*0x71c8d0*/
        }
      }
    }
  }
  return result; /*0x71c839*/
}



// ==== 0x0071C8E0  ObjectClass::method_71C8E0  this=ObjectClass  sig=csp ====
char __thiscall sub_71C8E0(ObjectClass *this)
{
  char result; // al
  int v2; // [esp+4h] [ebp-8h]

  result = *((_BYTE *)this + 205); /*0x71c8e0*/
  if ( !result ) /*0x71c8eb*/
  {
    *((_BYTE *)this + 205) = 1; /*0x71c8ee*/
    this->u32_2D = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71c905*/
    this->nextObject = 2; /*0x71c90b*/
    this->u32_2E = v2; /*0x71c911*/
    this->u32_2F = 2; /*0x71c914*/
    this->q02B = 0; /*0x71c917*/
    return v2; /*0x71c907*/
  }
  return result; /*0x71c922*/
}



// ==== 0x0071C930  TerrainClass::ApplyCellModifications  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::ApplyCellModifications(TerrainClass *this)
{
  int v2; // ebx
  int v3; // esi
  int v4; // edx
  __int16 v5; // cx
  _BYTE *v6; // eax
  CellClass *v7; // eax
  char v8; // bl
  void *v9; // eax
  __int16 v11[2]; // [esp+8h] [ebp-18h] BYREF
  int v12; // [esp+Ch] [ebp-14h]
  __int16 v13[2]; // [esp+10h] [ebp-10h] BYREF
  _DWORD v14[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( !this->? ) /*0x71c937*/
  {
    v2 = *(_DWORD *)(*((int (__thiscall **)(TerrainClass *, __int16 *))this->ObjectClass + 110))(this, v13); /*0x71c956*/
    v3 = 0; /*0x71c958*/
    v12 = v2; /*0x71c95a*/
    do /*0x71c9b8*/
    {
      v4 = v3 & 7; /*0x71c968*/
      v5 = LOWORD(g_DDrawSurfaceManager.scenario[v4 + 82]) + v2; /*0x71c96b*/
      LOWORD(v4) = HIWORD(g_DDrawSurfaceManager.scenario[v4 + 82]); /*0x71c97a*/
      LOWORD(v12) = v5; /*0x71c982*/
      HIWORD(v12) = HIWORD(v2) + v4; /*0x71c98e*/
      *(_DWORD *)v13 = v12; /*0x71c99d*/
      v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x71c9a1*/
      ++v3; /*0x71c9ae*/
      --v6[290]; /*0x71c9b2*/
    }
    while ( v3 < 8 ); /*0x71c9b8*/
    v14[0] = this->?[0]; /*0x71c9c6*/
    v14[1] = this->?[1]; /*0x71c9d2*/
    v14[2] = this->?[2]; /*0x71c9de*/
    v7 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v14); /*0x71c9e2*/
    v7->occupationFlags &= ~0x40u; /*0x71c9f6*/
  }
  *(_DWORD *)v11 = *(_DWORD *)(*((int (__thiscall **)(TerrainClass *, __int16 *))this->ObjectClass + 110))(this, v13); /*0x71ca0a*/
  v8 = ObjectClass::Undeploy((ObjectClass *)this); /*0x71ca21*/
  v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11); /*0x71ca23*/
  House::AnnounceUpgrade((int)v9, -1); /*0x71ca2a*/
  if ( !dword_A8E7AC ) /*0x71ca36*/
  {
    Cell::SetRadar((Cell *)&stru_87F5F0.__pad_58[416], v11); /*0x71ca42*/
    Radar::Update((Radar *)&stru_87F5F0.__pad_58[416], v11); /*0x71ca51*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v11); /*0x71ca60*/
  }
  return v8; /*0x71ca67*/
}



// ==== 0x0071CA70  CCINIClass::LoadTypeFromINI  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::LoadTypeFromINI(INIClass *this)
{
  int result; // eax
  int v3; // ebp
  unsigned __int8 *StringByIndex; // esi
  void *v5; // ebx
  int v6; // eax
  int v7; // eax
  TerrainClass *v8; // eax
  __int16 v9[2]; // [esp+8h] [ebp-90h] BYREF
  int v10; // [esp+Ch] [ebp-8Ch]
  int v11; // [esp+10h] [ebp-88h]
  int i; // [esp+14h] [ebp-84h]
  char Destination[128]; // [esp+18h] [ebp-80h] BYREF

  INIClass::ResetSection(this); /*0x71ca7a*/
  result = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)aTerrain); /*0x71ca87*/
  v3 = 0; /*0x71ca8c*/
  for ( i = result; v3 < i; ++v3 ) /*0x71ca94*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this->__pad_0, (unsigned __int8 *)aTerrain, v3); /*0x71caaf*/
    if ( INIClass::GetString(this, (unsigned __int8 *)aTerrain, StringByIndex, &g_INI_DefaultBuffer, Destination, 128) ) /*0x71cac5*/
      v5 = (void *)TerrainTypeClass::FindOrCreate(Destination); /*0x71cad7*/
    else
      v5 = 0; /*0x71cadb*/
    if ( *(int *)&stru_A8EB00.?[408] < 4 ) /*0x71cae6*/
    {
      v7 = atoi((const char *)StringByIndex); /*0x71cb1f*/
      LOWORD(v11) = v7 % 128; /*0x71cb36*/
      HIWORD(v11) = v7 / 128; /*0x71cb44*/
      *(_DWORD *)v9 = v11; /*0x71cb4d*/
    }
    else
    {
      v6 = atoi((const char *)StringByIndex); /*0x71cae8*/
      LOWORD(v10) = v6 % 1000; /*0x71caff*/
      HIWORD(v10) = v6 / 1000; /*0x71cb10*/
      *(_DWORD *)v9 = v10; /*0x71cb19*/
    }
    if ( v5 ) /*0x71cb53*/
    {
      v8 = (TerrainClass *)__2_YAPAXI_Z(0xE0u); /*0x71cb5a*/
      if ( v8 ) /*0x71cb64*/
        TerrainClass::Construct(v8, v5, v9); /*0x71cb6e*/
    }
    result = i; /*0x71cb73*/
  }
  return result; /*0x71cb82*/
}



// ==== 0x0071CB90  ObjectTypeClass::ReadDestroyAnim  this=INIClass  sig=csp ====
int __thiscall sub_71CB90(char *this)
{
  int result; // eax
  int i; // ebx
  int v4; // esi
  int v5; // [esp+8h] [ebp-14h]
  _BYTE v6[4]; // [esp+Ch] [ebp-10h] BYREF
  char Buffer[12]; // [esp+10h] [ebp-Ch] BYREF

  INIClass::ClearSection((int)this, (int)aTerrain, 0); /*0x71cb9f*/
  result = dword_A8E998; /*0x71cba4*/
  for ( i = 0; i < dword_A8E998; ++i ) /*0x71cbad*/
  {
    v4 = *((_DWORD *)dword_A8E98C + i); /*0x71cbba*/
    if ( v4 && !*(_BYTE *)(v4 + 129) ) /*0x71cbc1*/
    {
      if ( *(_BYTE *)(v4 + 144) ) /*0x71cbcb*/
      {
        v5 = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 440))(v4, v6); /*0x71cbe6*/
        sprintf(Buffer, "%d", (__int16)v5 + 1000 * SHIWORD(v5)); /*0x71cc09*/
        INIClass::SetString(this, (unsigned __int8 *)aTerrain, Buffer, (char *)(*(_DWORD *)(v4 + 200) + 36)); /*0x71cc29*/
      }
    }
    result = dword_A8E998; /*0x71cc2e*/
  }
  return result; /*0x71cc3d*/
}



// ==== 0x0071CC50  TerrainClass::CheckSpawnConditions  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::CheckSpawnConditions(TerrainClass *this, int *a2, char a3, int a4)
{
  int *v5; // eax
  int v6; // ebx
  char *v7; // ebp
  _DWORD *v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // ebx
  int v12; // eax
  char *v13; // ebp
  int v14; // ebx
  _DWORD *v15; // eax
  int v16; // ecx
  int v18; // [esp+10h] [ebp-18h] BYREF
  int v19; // [esp+14h] [ebp-14h]
  _DWORD v20[4]; // [esp+18h] [ebp-10h] BYREF

  if ( !stru_A8EB00.?[391] && g_hWnd && (!a3 && !this->? || !this->? || this->?) ) /*0x71cc8c*/
    return 0; /*0x71cc8c*/
  this->? = 0; /*0x71ccad*/
  v5 = ClipRectIntersection(v20, a2, &DSurface_ViewBounds.field_0, 0, 0); /*0x71ccb4*/
  *a2 = *v5; /*0x71ccbd*/
  a2[1] = v5[1]; /*0x71ccc2*/
  a2[2] = v5[2]; /*0x71ccc8*/
  a2[3] = v5[3]; /*0x71ccce*/
  v6 = DSurface_ViewBounds.field_0; /*0x71ccd3*/
  v7 = (char *)DSurface_ViewBounds.field_4; /*0x71ccd9*/
  v8 = (_DWORD *)(*((int (__thiscall **)(TerrainClass *, _DWORD *))this->ObjectClass + 75))(this, v20); /*0x71cce6*/
  v9 = v8[1]; /*0x71ccee*/
  v10 = v6 + *v8; /*0x71ccf1*/
  v11 = v8[2]; /*0x71ccf3*/
  v12 = v8[3]; /*0x71ccf6*/
  v13 = &v7[v9]; /*0x71ccf9*/
  if ( *a2 >= v10 + v11 ) /*0x71cd01*/
    return 0; /*0x71cd01*/
  v14 = a2[1]; /*0x71cd07*/
  if ( v14 >= (int)&v13[v12] || *a2 + a2[2] <= v10 || v14 + a2[3] <= (int)v13 ) /*0x71cd20*/
    return 0; /*0x71cd90*/
  v15 = (_DWORD *)(*((int (__thiscall **)(TerrainClass *, _DWORD *))this->ObjectClass + 43))(this, v20); /*0x71cd30*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v15, &v18); /*0x71cd3d*/
  if ( *a2 > DSurface_ViewBounds.field_0 ) /*0x71cd4b*/
    v18 += DSurface_ViewBounds.field_0 - *a2; /*0x71cd55*/
  v16 = a2[1]; /*0x71cd59*/
  if ( v16 > (int)DSurface_ViewBounds.field_4 ) /*0x71cd63*/
    v19 += (int)DSurface_ViewBounds.field_4 - v16; /*0x71cd6d*/
  (*((void (__thiscall **)(TerrainClass *, int *, int *))this->ObjectClass + 69))(this, &v18, a2); /*0x71cd7b*/
  return 1; /*0x71cd81*/
}



// ==== 0x0071CDA0  TerrainClass::LoadFromStream  this=TerrainClass  sig=csp ====
int __stdcall TerrainClass::LoadFromStream(TerrainClass *this, int a2)
{
  ObjectClass *v2; // ebp
  void **p_vtable1; // esi
  int v4; // eax
  ObjectClass *vtable0; // ecx
  void *vtable1; // edx
  int v7; // edi
  int v8; // eax
  signed int v9; // eax
  int v10; // ecx
  char *i; // eax
  _DWORD *v12; // eax
  int Register; // edi
  int v14; // esi
  int vtable2; // eax
  int v17; // [esp+Ch] [ebp-8h] BYREF

  v2 = (ObjectClass *)this; /*0x71cda4*/
  p_vtable1 = &this->?; /*0x71cdad*/
  v4 = (*((int (__stdcall **)(void **))this->? + 4))(&this->?); /*0x71cdb1*/
  vtable1 = g_BuildingLoadQueue_Array.?; /*0x71cdb4*/
  v7 = v4; /*0x71cdba*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x71cdbe*/
  {
    if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x71cdcb*/
    {
      qsort( /*0x71cddc*/
        g_BuildingLoadQueue_Array.TechnoTypeClass,
        (size_t)g_BuildingLoadQueue_Array.?,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      vtable1 = g_BuildingLoadQueue_Array.?; /*0x71cde1*/
      g_BuildingLoadQueue_Array.? = 0; /*0x71cdea*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x71cdf4*/
    }
    v17 = v7; /*0x71ce06*/
    v8 = BinaryArraySearch((int)g_BuildingLoadQueue_Array.TechnoTypeClass, (int)vtable1, &v17); /*0x71ce0a*/
    if ( v8 ) /*0x71ce11*/
    {
      v9 = (signed int)(v8 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x71ce19*/
      if ( v9 != -1 ) /*0x71ce1f*/
      {
        v10 = v9 + 1; /*0x71ce21*/
        for ( i = (char *)g_BuildingLoadQueue_Array.?; /*0x71ce2b*/
              v10 < (int)g_BuildingLoadQueue_Array.?;
              i = (char *)g_BuildingLoadQueue_Array.? )
        {
          v12 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v10++; /*0x71ce33*/
          *(v12 - 2) = *v12; /*0x71ce39*/
          *(v12 - 1) = v12[1]; /*0x71ce3f*/
        }
        g_BuildingLoadQueue_Array.? = i - 1; /*0x71ce54*/
        *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x71ce59*/
        vtable0 = (ObjectClass *)g_BuildingLoadQueue_Array.TechnoTypeClass; /*0x71ce61*/
        *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x71ce69*/
        g_BuildingLoadQueue_Array.? = 0; /*0x71ce6d*/
      }
    }
  }
  Register = BuildingClass::SaveLoad_Register(vtable0); /*0x71ce7e*/
  if ( Register >= 0 ) /*0x71ce82*/
  {
    if ( v2 ) /*0x71ce8a*/
    {
      ObjectClass::Init(v2, (int)&this); /*0x71ce93*/
      v2->AbstractClass = &TerrainClass::`vftable'; /*0x71ce98*/
      *p_vtable1 = &off_7F5200; /*0x71ce9f*/
      v2->? = &TerrainClass::`vftable'; /*0x71cea5*/
      v2->? = &TerrainClass::`vftable'; /*0x71ceac*/
    }
    v14 = (*((int (__stdcall **)(void **))*p_vtable1 + 4))(p_vtable1); /*0x71cebf*/
    vtable2 = (int)g_BuildingLoadQueue_Array.?; /*0x71cec1*/
    if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x71cec9*/
      goto LABEL_16; /*0x71cec9*/
    if ( !g_BuildingLoadQueue_Array.? ) /*0x71cecd*/
      vtable2 = 10; /*0x71cecf*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, vtable2) ) /*0x71ceda*/
    {
LABEL_16:
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = v14; /*0x71ceee*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = v2; /*0x71cefc*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x71cf06*/
      ++g_BuildingLoadQueue_Array.?; /*0x71cf0d*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2[1].?); /*0x71cf1e*/
  }
  return Register; /*0x71cf25*/
}



// ==== 0x0071CF30  TerrainClass::CheckFrameUpdate  this=TerrainClass  sig=csp ====
int __stdcall TerrainClass::CheckFrameUpdate(TerrainClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x71cf44*/
}



// ==== 0x0071CF50  TerrainClass::PowerDrainUpdate  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::PowerDrainUpdate(TerrainClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // eax

  HouseClass::ProcessPower((ObjectClass *)this); /*0x71cf59*/
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C0[8] + 44))(*(_DWORD *)&this->__pad_C0[8]); /*0x71cf66*/
  Power::TimerProcess(v3); /*0x71cf6c*/
  v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)&this->__pad_C0[8] + 4) + 16))(*(_DWORD *)&this->__pad_C0[8] + 4); /*0x71cf7d*/
  Power::TimerProcess(v4); /*0x71cf83*/
  LOBYTE(v5) = this->__pad_C0[12]; /*0x71cf88*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x71cf91*/
  LOBYTE(v6) = this->__pad_C0[13]; /*0x71cf96*/
  Power::FlagProcess((Power *)a2, v6); /*0x71cf9f*/
  Power::TimerProcess(this->TerrainClass_field_rect_D0[0]); /*0x71cfad*/
  return Power::TimerProcess(this->TerrainClass_field_rect_D0[1]); /*0x71cfc0*/
}



// ==== 0x0071CFD0  TerrainClass::ProcessFrameStep  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::ProcessFrameStep(TerrainClass *this, int a2, int a3)
{
  int result; // eax

  result = Object::Unlink((ObjectClass *)this); /*0x71cfde*/
  if ( *(_DWORD *)&this->__pad_C0[8] == a2 ) /*0x71cfe9*/
    *(_DWORD *)&this->__pad_C0[8] = 0; /*0x71cfeb*/
  return result; /*0x71cff5*/
}



// ==== 0x0071D000  TerrainClass::ProcessSpawnAnim  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::ProcessSpawnAnim(TerrainClass *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ebp
  int v4; // edi
  int v5; // ebx
  int i; // esi
  int v7; // ecx
  __int16 v8; // ax
  _BYTE *v9; // eax
  _DWORD *v10; // eax
  int v11; // edi
  char v14[12]; // [esp+8h] [ebp-Ch] BYREF

  v3 = a2; /*0x71d008*/
  if ( !(unsigned __int8)ObjectClass::Deploy((ObjectClass *)this) ) /*0x71d012*/
    return 0; /*0x71d13e*/
  v4 = *v3 / 256; /*0x71d03e*/
  v5 = v3[1] / 256; /*0x71d041*/
  for ( i = 0; i < 8; ++i ) /*0x71d044*/
  {
    v7 = i & 7; /*0x71d048*/
    v8 = HIWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x71d05d*/
    LOWORD(a3) = v4 + LOWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x71d061*/
    HIWORD(a3) = v5 + v8; /*0x71d06d*/
    a2 = a3; /*0x71d076*/
    v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x71d080*/
    ++v9[290]; /*0x71d091*/
  }
  v10 = (_DWORD *)(*((int (__stdcall **)(char *))this->ObjectClass + 43))(v14); /*0x71d0ab*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v10, &this->TerrainClass_field_rect_D0[2]); /*0x71d0b8*/
  v11 = *(_DWORD *)&g_TacticalClass_Instance[45] + this->TerrainClass_field_rect_D0[3]; /*0x71d0d6*/
  this->TerrainClass_field_rect_D0[2] += *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x71d0dd*/
  this->TerrainClass_field_rect_D0[3] = v11; /*0x71d0df*/
  if ( *(_DWORD *)&Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v3)->__pad_28[28] != -1 ) /*0x71d0ef*/
  {
    if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 /*0x71d108*/
                              + 4 * *(_DWORD *)&Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v3)->__pad_28[28])
                  + 681) )
    {
      *(_DWORD *)&Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v3)->__pad_28[28] = -1; /*0x71d123*/
      Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v3)->powerup = 0; /*0x71d12b*/
    }
  }
  return 1; /*0x71d137*/
}



// ==== 0x0071D150  TerrainClass::GetOffset  this=TerrainClass  sig=csp ====
unsigned int __thiscall IRTTITypeInfo::GetOffset(TerrainClass *this)
{
  return *(_DWORD *)&this->__pad_C0[8]; /*0x71d156*/
}



// ==== 0x0071D160  TerrainClass::Export  this=TerrainClass  sig=csp ====
_DWORD *__thiscall TerrainClass::Export(TerrainClass *this, _DWORD *a2)
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
  int v18; // [esp+Ch] [ebp-38h]
  int v19; // [esp+10h] [ebp-34h]
  int v20; // [esp+14h] [ebp-30h] BYREF
  int v21; // [esp+18h] [ebp-2Ch]
  int v22; // [esp+1Ch] [ebp-28h]
  int v23; // [esp+20h] [ebp-24h]
  int v24; // [esp+28h] [ebp-1Ch]
  int v25; // [esp+30h] [ebp-14h]
  _DWORD v26[4]; // [esp+34h] [ebp-10h] BYREF

  v18 = this->TerrainClass_field_rect_D0[2] - *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x71d17d*/
  v19 = this->TerrainClass_field_rect_D0[3] - *(_DWORD *)&g_TacticalClass_Instance[45]; /*0x71d189*/
  HasC4 = (__int16 *)ObjectClass::HasC4((ObjectClass *)this); /*0x71d192*/
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
    *a2 = g_BuildingLoadQueue_Array.?[0]; /*0x71d1a5*/
    a2[1] = g_BuildingLoadQueue_Array.?[1]; /*0x71d1ad*/
    a2[2] = g_BuildingLoadQueue_Array.?[2]; /*0x71d1b6*/
    a2[3] = g_BuildingLoadQueue_Array.?[3]; /*0x71d1bf*/
    return a2; /*0x71d198*/
  }
}



// ==== 0x0071D2F0  TerrainClass::MissionStubReturnZero  this=TerrainClass  sig=csp ====
int TerrainClass::MissionStubReturnZero(TerrainClass *this)
{
  return 224; /*0x71d2f5*/
}



// ==== 0x0071D300  TerrainClass::MissionStubReturnZero2  this=TerrainClass  sig=csp ====
int TerrainClass::MissionStubReturnZero2(TerrainClass *this)
{
  return 36; /*0x71d305*/
}



// ==== 0x0071D310  TerrainClass::MissionStubReturnZero3  this=TerrainClass  sig=csp ====
int __stdcall TerrainClass::MissionStubReturnZero3(TerrainClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x71d316*/
    return -2147467261; /*0x71d318*/
  *a2 = 237448654; /*0x71d326*/
  a2[1] = 298949647; /*0x71d32e*/
  a2[2] = -1610610249; /*0x71d337*/
  a2[3] = unk_7E974C; /*0x71d340*/
  return 0; /*0x71d31d*/
}



// ==== 0x0071D350  TerrainClass::MissionStubReturnZero4  this=TerrainClass  sig=csp ====
void *__thiscall TerrainClass::MissionStubReturnZero4(TerrainClass *this, char a2)
{
  TerrainClass::CleanupMembers((int)this); /*0x71d353*/
  if ( (a2 & 1) != 0 ) /*0x71d35d*/
    __3_YAXPAX_Z(this); /*0x71d360*/
  return this; /*0x71d36a*/
}



// ==== 0x0071D370  sub_71D370  this=-  sig=ida-proto ====
int sub_71D370()
{
  dword_B0ED68 = 0; /*0x71d372*/
  dword_B0ED6C = 0; /*0x71d377*/
  dword_B0ED70 = 0; /*0x71d37c*/
  dword_B0ED74 = 0; /*0x71d381*/
  return 0; /*0x71d386*/
}



// ==== 0x0071D390  sub_71D390  this=-  sig=ida-proto ====
void sub_71D390()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71d39c*/
  dbl_B0ED80 = Math::Sqrt(v0 + v0); /*0x71d3ae*/
}



// ==== 0x0071D3C0  sub_71D3C0  this=-  sig=ida-proto ====
void sub_71D3C0()
{
  dbl_B0F140 = dbl_B0ED80 / 60.0; /*0x71d3cc*/
}



// ==== 0x0071D3E0  sub_71D3E0  this=-  sig=ida-proto ====
void sub_71D3E0()
{
  dbl_B0EDB8 = 1.0 / dbl_B0F140; /*0x71d3ec*/
}



// ==== 0x0071D400  sub_71D400  this=-  sig=ida-proto ====
void sub_71D400()
{
  dbl_B0EDB0 = 0.0174532925199433 * 45.0; /*0x71d40c*/
}



// ==== 0x0071D420  sub_71D420  this=-  sig=ida-proto ====
void sub_71D420()
{
  dbl_B0ED88 = 0.0174532925199433 * 60.0; /*0x71d42c*/
}



// ==== 0x0071D440  sub_71D440  this=-  sig=ida-proto ====
void sub_71D440()
{
  dbl_B0ED58 = 0.0174532925199433 * 90.0; /*0x71d44c*/
}



// ==== 0x0071D460  sub_71D460  this=-  sig=ida-proto ====
__int64 sub_71D460()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0ED58 - dbl_B0ED88); /*0x71d472*/
  result = Math::RoundToInt(v0 * dbl_B0ED80 * 0.5); /*0x71d486*/
  dword_B0F148 = result; /*0x71d48b*/
  return result; /*0x71d490*/
}



// ==== 0x0071D4A0  sub_71D4A0  this=-  sig=ida-proto ====
void sub_71D4A0()
{
  dbl_B0ED90 = Math::ArcTan((double)dword_B0F148 * 0.00390625); /*0x71d4b7*/
}



// ==== 0x0071D4D0  sub_71D4D0  this=-  sig=ida-proto ====
void sub_71D4D0()
{
  dbl_B0EDA8 = Math::ArcTan((double)(2 * dword_B0F148) / dbl_B0ED80); /*0x71d4f2*/
}



// ==== 0x0071D500  sub_71D500  this=-  sig=ida-proto ====
__int64 sub_71D500()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F148) + 0.5); /*0x71d51b*/
  dword_B0F13C = result; /*0x71d520*/
  return result; /*0x71d526*/
}



// ==== 0x0071D530  sub_71D530  this=-  sig=ida-proto ====
int sub_71D530()
{
  word_B0ED7C = 0; /*0x71d532*/
  word_B0ED7E = 0; /*0x71d538*/
  return 0; /*0x71d53e*/
}



// ==== 0x0071D540  sub_71D540  this=-  sig=ida-proto ====
int sub_71D540()
{
  dword_B0ED98 = 0; /*0x71d542*/
  dword_B0ED9C = 0; /*0x71d547*/
  dword_B0EDA0 = 0; /*0x71d54c*/
  return 0; /*0x71d551*/
}



// ==== 0x0071D560  sub_71D560  this=-  sig=ida-proto ====
int sub_71D560()
{
  dword_B0F138 = 0; /*0x71d565*/
  dword_B0F130 = 128; /*0x71d56f*/
  dword_B0F134 = 128; /*0x71d574*/
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
  dword_B0EDC0 = 0; /*0x71d5a2*/
  dword_B0EDC4 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d5b3*/
  memset(&unk_B0EDC8, 0, 0x20u); /*0x71d5c9*/
  Array::ForEach((int)&unk_B0EDC8, 4, 8, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d5d0*/
  dword_B0EDE8 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d5ec*/
  dword_B0EDEC = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d607*/
  dword_B0EDF0 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d618*/
  memset(&unk_B0EDF4, 0, 0x1Cu); /*0x71d62e*/
  Array::ForEach((int)&unk_B0EDF4, 4, 7, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d635*/
  dword_B0EE10 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d651*/
  dword_B0EE14 = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d66c*/
  dword_B0EE18 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d67d*/
  memset(&unk_B0EE1C, 0, 0x1Cu); /*0x71d693*/
  Array::ForEach((int)&unk_B0EE1C, 4, 7, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d69a*/
  dword_B0EE38 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d6b0*/
  dword_B0EE3C = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d6cb*/
  dword_B0EE40 = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d6d9*/
  dword_B0EE44 = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d6fa*/
  v0 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d705*/
  dword_B0EE4C = 0; /*0x71d709*/
  dword_B0EE50 = 0; /*0x71d714*/
  dword_B0EE54 = 0; /*0x71d71c*/
  dword_B0EE58 = 0; /*0x71d724*/
  dword_B0EE48 = v0; /*0x71d72f*/
  dword_B0EE5C = 0; /*0x71d734*/
  Array::ForEach((int)&dword_B0EE4C, 4, 5, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d73a*/
  dword_B0EE60 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d756*/
  dword_B0EE64 = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d76b*/
  dword_B0EE68 = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d779*/
  dword_B0EE6C = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d794*/
  dword_B0EE70 = *(_DWORD *)CellStruct::Set(&v4, 0, 2); /*0x71d7a9*/
  dword_B0EE74 = *(_DWORD *)CellStruct::Set(&v4, 1, 2); /*0x71d7ba*/
  v1 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d7ce*/
  dword_B0EE7C = 0; /*0x71d7d2*/
  dword_B0EE78 = v1; /*0x71d7d7*/
  dword_B0EE80 = 0; /*0x71d7dd*/
  dword_B0EE84 = 0; /*0x71d7e7*/
  Array::ForEach((int)&dword_B0EE7C, 4, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d7f5*/
  dword_B0EE88 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d80b*/
  dword_B0EE8C = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d826*/
  dword_B0EE90 = *(_DWORD *)CellStruct::Set(&v4, 2, 0); /*0x71d83b*/
  dword_B0EE94 = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d849*/
  dword_B0EE98 = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d864*/
  dword_B0EE9C = *(_DWORD *)CellStruct::Set(&v4, 2, 1); /*0x71d87f*/
  v2 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d889*/
  dword_B0EEA4 = 0; /*0x71d88d*/
  dword_B0EEA8 = 0; /*0x71d89a*/
  dword_B0EEA0 = v2; /*0x71d8a7*/
  dword_B0EEAC = 0; /*0x71d8ad*/
  Array::ForEach((int)&dword_B0EEA4, 4, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d8b3*/
  dword_B0EEB0 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d8cf*/
  dword_B0EEB4 = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d8dd*/
  dword_B0EEB8 = *(_DWORD *)CellStruct::Set(&v4, 2, 0); /*0x71d8f8*/
  dword_B0EEBC = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d907*/
  dword_B0EEC0 = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d91b*/
  dword_B0EEC4 = *(_DWORD *)CellStruct::Set(&v4, 2, 1); /*0x71d936*/
  dword_B0EEC8 = *(_DWORD *)CellStruct::Set(&v4, 0, 2); /*0x71d94b*/
  dword_B0EECC = *(_DWORD *)CellStruct::Set(&v4, 1, 2); /*0x71d959*/
  dword_B0EED0 = *(_DWORD *)CellStruct::Set(&v4, 2, 2); /*0x71d97a*/
  dword_B0EED4 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d98f*/
  dword_B0EED8 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d99d*/
  dword_B0EEDC = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d9b8*/
  dword_B0EEE0 = *(_DWORD *)CellStruct::Set(&v4, 2, 0); /*0x71d9cd*/
  dword_B0EEE4 = *(_DWORD *)CellStruct::Set(&v4, 3, 0); /*0x71d9db*/
  dword_B0EEE8 = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d9f6*/
  dword_B0EEEC = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71da0b*/
  dword_B0EEF0 = *(_DWORD *)CellStruct::Set(&v4, 2, 1); /*0x71da19*/
  dword_B0EEF4 = *(_DWORD *)CellStruct::Set(&v4, 3, 1); /*0x71da3a*/
  dword_B0EEF8 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71da4c*/
  dword_B0EEFC = 0; /*0x71da62*/
  memset(&unk_B0EF00, 0, 0x230u); /*0x71da73*/
  return Array::ForEach((int)&dword_B0EEFC, 4, 141, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71da7a*/
}



// ==== 0x0071DA80  TerrainTypeClass::TerrainTypeClass  this=TerrainTypeClass  sig=csp ====
_DWORD *__thiscall TerrainTypeClass::TerrainTypeClass(TerrainTypeClass *this, char *Source)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  TerrainTypeClass **v6; // edx

  ObjectTypeClass::ConstructFull((int *)this, Source); /*0x71da89*/
  this->ArrayIndex = -1; /*0x71da90*/
  this->Foundation = 0; /*0x71da9a*/
  this->RadarColor[0] = 0; /*0x71daa5*/
  this->RadarColor[1] = 0; /*0x71daab*/
  this->RadarColor[2] = 0; /*0x71dab1*/
  this->TemperateOccupationBits = 7; /*0x71dab7*/
  this->SnowOccupationBits = 7; /*0x71dabd*/
  this->AnimationRate = 0; /*0x71dac7*/
  this->AnimationProbability = 0.0; /*0x71dacd*/
  this->WaterBound = 0; /*0x71dad3*/
  this->SpawnsTiberium = 0; /*0x71dad9*/
  this->IsFlammable = 0; /*0x71dadf*/
  this->IsAnimated = 0; /*0x71dae5*/
  this->IsVeinhole = 0; /*0x71daeb*/
  this->FoundationData = 0; /*0x71daf1*/
  this->ObjectTypeClass = &TerrainTypeClass::`vftable'; /*0x71daf7*/
  this->? = &TerrainTypeClass::`vftable'; /*0x71dafd*/
  this->? = &TerrainTypeClass::`vftable'; /*0x71db03*/
  this->? = &TerrainTypeClass::`vftable'; /*0x71db0a*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x71db11*/
  this->? = 0; /*0x71db18*/
  this->? = 1; /*0x71db1e*/
  this->? = 1; /*0x71db24*/
  this->? = 0; /*0x71db2a*/
  this->? = 1; /*0x71db30*/
  v3 = dword_A8E328; /*0x71db36*/
  if ( dword_A8E328 < dword_A8E320 /*0x71db74*/
    || (byte_A8E325 || !dword_A8E320)
    && dword_A8E32C > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E318 + 8))(
               &dword_A8E318,
               dword_A8E320 + dword_A8E32C,
               0) == 0,
        v3 = dword_A8E328,
        !v4) )
  {
    dword_A8E328 = v3 + 1; /*0x71db79*/
    *((_DWORD *)dword_A8E31C + v3) = this; /*0x71db83*/
    v3 = dword_A8E328; /*0x71db86*/
  }
  v5 = 0; /*0x71db8b*/
  if ( v3 <= 0 ) /*0x71db8f*/
  {
LABEL_11:
    v5 = -1; /*0x71dba3*/
  }
  else
  {
    v6 = (TerrainTypeClass **)dword_A8E31C; /*0x71db91*/
    while ( *v6 != this ) /*0x71db99*/
    {
      ++v5; /*0x71db9b*/
      ++v6; /*0x71db9c*/
      if ( v5 >= v3 ) /*0x71dba1*/
        goto LABEL_11; /*0x71dba1*/
    }
  }
  this->ArrayIndex = v5; /*0x71dba6*/
  this->? = -1; /*0x71dbac*/
  this->?[0] = 6; /*0x71dbb6*/
  return &this->ObjectTypeClass; /*0x71dbc2*/
}



// ==== 0x0071DCA0  LoadObjectTypeClassTheaterSHP  this=BuildingTypeClass  sig=ida-proto ====
int __fastcall ObjectTypeClass_LoadTheaterSHP(int a1)
{
  int result; // eax
  int i; // edi
  int v4; // esi
  _DWORD v5[22]; // [esp+Ch] [ebp-26Ch] BYREF
  _BYTE v6[12]; // [esp+64h] [ebp-214h] BYREF
  int v7; // [esp+70h] [ebp-208h]
  char Buffer[512]; // [esp+78h] [ebp-200h] BYREF

  result = dword_A8E328; /*0x71dca0*/
  for ( i = 0; i < dword_A8E328; ++i ) /*0x71dcb6*/
  {
    v4 = *((_DWORD *)dword_A8E31C + i); /*0x71dcc2*/
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
      v5[0] = &CCFileClass::`vftable'; /*0x71dd41*/
      v7 = 0; /*0x71dd49*/
      Vector::Clear((int)v6); /*0x71dd4d*/
      v5[0] = &off_7E1668; /*0x71dd56*/
      BufferIOFileClass::Dtor(v5); /*0x71dd5e*/
    }
    result = dword_A8E328; /*0x71dd63*/
  }
  return result; /*0x71dd72*/
}



// ==== 0x0071DD80  Terrain::LookupByName  this=Terrain  sig=csp ====
int __thiscall Terrain::LookupByName(Terrain *this)
{
  int v2; // esi

  if ( !this ) /*0x71dd86*/
    return -1; /*0x71dd86*/
  v2 = 0; /*0x71dd8d*/
  if ( dword_A8E328 <= 0 ) /*0x71dd91*/
    return -1; /*0x71ddb6*/
  while ( _strcmpi(this->__pad_0, (char *)(*((_DWORD *)dword_A8E31C + v2) + 36)) ) /*0x71ddaa*/
  {
    if ( ++v2 >= dword_A8E328 ) /*0x71ddb4*/
      return -1; /*0x71ddb4*/
  }
  return v2; /*0x71ddb6*/
}



// ==== 0x0071DDD0  TerrainTypeClass::GetHeight  this=TerrainTypeClass  sig=csp ====
bool __thiscall TerrainTypeClass::GetHeight(TerrainTypeClass *this, __int16 *a2, int a3)
{
  TerrainClass *v4; // eax

  v4 = (TerrainClass *)__2_YAPAXI_Z(0xE0u); /*0x71ddd8*/
  return v4 && TerrainClass::Construct(v4, this, a2); /*0x71ddf7*/
}



// ==== 0x0071DE10  TerrainTypeClass::GetTileIndex  this=TerrainTypeClass  sig=csp ====
void **__thiscall TerrainTypeClass::GetTileIndex(TerrainTypeClass *this, int a2)
{
  TerrainClass *v3; // eax

  v3 = (TerrainClass *)__2_YAPAXI_Z(0xE0u); /*0x71de18*/
  if ( v3 ) /*0x71de22*/
    return TerrainClass::Construct(v3, this, (__int16 *)&g_BuildingLoadQueue_Array.?); /*0x71de2c*/
  else
    return 0; /*0x71de35*/
}



// ==== 0x0071DE40  TerrainTypeClass::SingletonGetter  this=TerrainTypeClass  sig=csp ====
int *__thiscall GlobalInit::SingletonGetter(TerrainTypeClass *this, int a2)
{
  int *result; // eax

  result = &this->FoundationData->field_0; /*0x71de41*/
  if ( !result ) /*0x71de49*/
  {
    if ( (g_BuildingLoadQueue_Array.?[4] & 1) == 0 ) /*0x71de55*/
    {
      LOBYTE(g_BuildingLoadQueue_Array.?[4]) |= 1u; /*0x71de73*/
      g_BuildingLoadQueue_Array.? = 2147450879; /*0x71de79*/
      atexit(nullsub_247); /*0x71de7e*/
    }
    return &g_BuildingLoadQueue_Array.?; /*0x71de86*/
  }
  return result; /*0x71de8c*/
}



// ==== 0x0071DE90  nullsub_247  this=-  sig=ida-proto ====
void __cdecl nullsub_247()
{
  ; /*0x71de90*/
}



// ==== 0x0071DEA0  TerrainTypeClass::LoadFromINI  this=TerrainTypeClass  sig=csp ====
int __thiscall TerrainTypeClass::LoadFromINI(TerrainTypeClass *this, unsigned __int8 ***a2)
{
  double v2; // st7
  int result; // eax
  char Bool_Overwrite; // al
  char v6; // al
  char SpawnsTiberium; // cl
  char v8; // al
  int v9; // eax
  int v10; // ecx
  MixFileClass *v11; // eax
  int PixelData; // eax
  int Coord; // eax
  char IsAnimated; // cl
  char v15; // al
  int Int_Overwrite; // eax
  double AnimationProbability; // st6
  int TemperateOccupationBits; // eax
  int v19; // eax
  int SnowOccupationBits; // ecx
  char IsFlammable; // [esp+4h] [ebp-218h]
  int AnimationRate; // [esp+4h] [ebp-218h]
  int v23; // [esp+18h] [ebp-204h] BYREF
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x71deb3*/
  if ( ObjectTypeClass::LoadFromINI((ObjectTypeClass *)this, a2) ) /*0x71debb*/
  {
    if ( this->? == -1 ) /*0x71decf*/
      this->? = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4420); /*0x71dedc*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aIsveinhole, this->IsVeinhole); /*0x71def6*/
    this->IsVeinhole = Bool_Overwrite; /*0x71defd*/
    if ( Bool_Overwrite ) /*0x71df03*/
    {
      this->? = 0; /*0x71df05*/
      this->? = 1; /*0x71df0c*/
    }
    v6 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aWaterbound, this->WaterBound); /*0x71df22*/
    SpawnsTiberium = this->SpawnsTiberium; /*0x71df27*/
    this->WaterBound = v6; /*0x71df2d*/
    v8 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aSpawnstiberium, SpawnsTiberium); /*0x71df3c*/
    IsFlammable = this->IsFlammable; /*0x71df49*/
    this->SpawnsTiberium = v8; /*0x71df50*/
    this->IsFlammable = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aIsflammable, IsFlammable); /*0x71df5b*/
    v9 = INIClass::LookupEnum( /*0x71df79*/
           (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
           (unsigned __int8 *)this->?,
           g_INI_Key_Foundation,
           this->Foundation);
    v10 = 5 * v9; /*0x71df7e*/
    this->Foundation = v9; /*0x71df81*/
    LOBYTE(v9) = this->?; /*0x71df87*/
    this->FoundationData = (CellStruct *)(8 * v10 + 11595200); /*0x71df96*/
    if ( !(_BYTE)v9 ) /*0x71df9c*/
    {
      _makepath(Buffer, 0, 0, this->?, Ext); /*0x71dfad*/
      this->? = (SHPStruct *)SearchMIXFile(Buffer, 0); /*0x71dfc0*/
    }
    v11 = (MixFileClass *)(*((int (__thiscall **)(TerrainTypeClass *))this->ObjectTypeClass + 39))(this); /*0x71dfca*/
    if ( v11 ) /*0x71dfd2*/
    {
      PixelData = MixFileClass::GetPixelData(v11, (int)&v23, 0); /*0x71dfdd*/
      *(_WORD *)this->RadarColor = *(_WORD *)PixelData; /*0x71dfeb*/
      this->RadarColor[2] = *(_BYTE *)(PixelData + 2); /*0x71dff5*/
    }
    Coord = INIClass::GetCoord( /*0x71e00c*/
              (INIClass *)a2,
              (int)&v23,
              (unsigned __int8 *)this->?,
              aRadarcolor,
              (unsigned __int8 *)this->RadarColor);
    IsAnimated = this->IsAnimated; /*0x71e014*/
    *(_WORD *)this->RadarColor = *(_WORD *)Coord; /*0x71e01a*/
    this->RadarColor[2] = *(_BYTE *)(Coord + 2); /*0x71e02a*/
    v15 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aIsanimated, IsAnimated); /*0x71e02d*/
    AnimationRate = this->AnimationRate; /*0x71e03a*/
    this->IsAnimated = v15; /*0x71e041*/
    Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)this->?, aAnimationrate, AnimationRate); /*0x71e047*/
    AnimationProbability = this->AnimationProbability; /*0x71e04c*/
    this->AnimationRate = Int_Overwrite; /*0x71e057*/
    INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)this->?, aAnimationproba, AnimationProbability); /*0x71e066*/
    TemperateOccupationBits = this->TemperateOccupationBits; /*0x71e06b*/
    this->AnimationProbability = v2; /*0x71e073*/
    v19 = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)this->?, aTemperateoccup, TemperateOccupationBits); /*0x71e080*/
    SnowOccupationBits = this->SnowOccupationBits; /*0x71e085*/
    this->TemperateOccupationBits = v19; /*0x71e08b*/
    result = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)this->?, aSnowoccupation, SnowOccupationBits); /*0x71e09a*/
    this->SnowOccupationBits = result; /*0x71e0a0*/
    LOBYTE(result) = 1; /*0x71e0a8*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x71e0b5*/
  }
  return result; /*0x71e0a7*/
}



// ==== 0x0071E0D0  TerrainTypeClass::GetWidth  this=TerrainTypeClass  sig=csp ====
_DWORD *__stdcall TerrainTypeClass::GetWidth(TerrainTypeClass *this, int *a2)
{
  int GroundHeight; // eax
  void *v3; // ecx
  void *v5; // [esp+0h] [ebp-Ch] BYREF
  void *v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = (void *)*a2; /*0x71e0d9*/
  v6 = (void *)a2[1]; /*0x71e0ea*/
  v7 = a2[2]; /*0x71e0f1*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x71e0f5*/
  v3 = (void *)v7; /*0x71e0fa*/
  if ( v7 < GroundHeight ) /*0x71e100*/
    v3 = (void *)Cell::GetGroundHeight(&v5); /*0x71e111*/
  this->ObjectTypeClass = v5; /*0x71e11e*/
  this->? = v6; /*0x71e124*/
  this->? = v3; /*0x71e128*/
  return &this->ObjectTypeClass; /*0x71e12b*/
}



// ==== 0x0071E140  TerrainTypeClass::PowerDrainUpdate  this=TerrainTypeClass  sig=csp ====
int __thiscall TerrainTypeClass::PowerDrainUpdate(TerrainTypeClass *this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // edx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x71e149*/
  Power::TimerProcess(this->ArrayIndex); /*0x71e157*/
  LOBYTE(v3) = this->WaterBound; /*0x71e15c*/
  Power::FlagProcess((Power *)a2, v3); /*0x71e165*/
  LOBYTE(v4) = this->SpawnsTiberium; /*0x71e16a*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x71e173*/
  LOBYTE(v5) = this->IsFlammable; /*0x71e178*/
  Power::FlagProcess((Power *)a2, v5); /*0x71e181*/
  Power::TimerProcess(this->Foundation); /*0x71e18f*/
  LOBYTE(v6) = this->IsAnimated; /*0x71e194*/
  Power::FlagProcess((Power *)a2, v6); /*0x71e19d*/
  Power::TimerProcess(this->AnimationRate); /*0x71e1ab*/
  return Checksummer::Add_float((Checksummer *)a2, LODWORD(this->AnimationProbability)); /*0x71e1be*/
}



// ==== 0x0071E1D0  TerrainTypeClass::SaveLoad_Prefix  this=TerrainTypeClass  sig=csp ====
int __stdcall TerrainTypeClass::SaveLoad_Prefix(TerrainTypeClass *this, int a2)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x71e1db*/
  if ( result >= 0 ) /*0x71e1e2*/
  {
    if ( this ) /*0x71e1e6*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)&a2); /*0x71e1ef*/
      this->ObjectTypeClass = &TerrainTypeClass::`vftable'; /*0x71e1f4*/
      this->? = &TerrainTypeClass::`vftable'; /*0x71e1fa*/
      this->? = &TerrainTypeClass::`vftable'; /*0x71e201*/
      this->? = &TerrainTypeClass::`vftable'; /*0x71e208*/
    }
    VoxelAnimType::LoadAnim((char *)this); /*0x71e211*/
    ObjectTypeClass::Load2DArt((char *)this); /*0x71e218*/
    this->FoundationData = (CellStruct *)(40 * this->Foundation + 11595200); /*0x71e22d*/
    return 0; /*0x71e233*/
  }
  return result; /*0x71e235*/
}



// ==== 0x0071E240  TerrainTypeClass::SaveLoad_Prefix_0  this=TerrainTypeClass  sig=csp ====
int __stdcall TerrainTypeClass::SaveLoad_Prefix_0(TerrainTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, a2, a3); /*0x71e24f*/
  if ( result >= 0 ) /*0x71e256*/
    return 0; /*0x71e258*/
  return result; /*0x71e25a*/
}



// ==== 0x0071E260  TerrainTypeClass::GetClassIdentifier  this=TerrainTypeClass  sig=csp ====
int __stdcall TerrainTypeClass::GetClassIdentifier(TerrainTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x71e266*/
    return -2147467261; /*0x71e268*/
  *a2 = 1525862011; /*0x71e276*/
  a2[1] = 298976820; /*0x71e27e*/
  a2[2] = 1610654892; /*0x71e287*/
  a2[3] = unk_7E95EC; /*0x71e290*/
  return 0; /*0x71e26d*/
}



// ==== 0x0071E2A0  TerrainTypeClass::FindOrCreate  this=IUnknown  sig=csp ====
_DWORD *__thiscall TerrainTypeClass::FindOrCreate(char *Source)
{
  int v2; // esi
  TerrainTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x71e2bc*/
    return 0; /*0x71e31f*/
  v2 = 0; /*0x71e2cd*/
  if ( dword_A8E328 <= 0 ) /*0x71e2d1*/
  {
LABEL_6:
    v3 = (TerrainTypeClass *)__2_YAPAXI_Z(0x2BCu); /*0x71e2f6*/
    if ( v3 ) /*0x71e305*/
      return TerrainTypeClass::TerrainTypeClass(v3, Source); /*0x71e311*/
    return 0; /*0x71e305*/
  }
  while ( _strcmpi((char *)(*((_DWORD *)dword_A8E31C + v2) + 36), Source) ) /*0x71e2ea*/
  {
    if ( ++v2 >= dword_A8E328 ) /*0x71e2f4*/
      goto LABEL_6; /*0x71e2f4*/
  }
  return (_DWORD *)*((_DWORD *)dword_A8E31C + v2); /*0x71e30f*/
}



// ==== 0x0071E330  TerrainTypeClass::GetTypeIdentifier  this=TerrainTypeClass  sig=csp ====
int TerrainTypeClass::GetTypeIdentifier(TerrainTypeClass *this)
{
  return 37; /*0x71e335*/
}



// ==== 0x0071E340  TerrainTypeClass::GetObjectSize  this=TerrainTypeClass  sig=csp ====
int TerrainTypeClass::GetObjectSize(TerrainTypeClass *this)
{
  return 700; /*0x71e345*/
}



// ==== 0x0071E350  TerrainTypeClass::GetAuxField  this=TerrainTypeClass  sig=csp ====
int __thiscall TerrainTypeClass::GetAuxField(TerrainTypeClass *this)
{
  return this->ArrayIndex; /*0x71e356*/
}



// ==== 0x0071E360  TerrainTypeClass::ddtor  this=TerrainTypeClass  sig=csp ====
void **__thiscall TerrainTypeClass::ddtor(TerrainTypeClass *this, char a2)
{
  SHPStruct *Image; // eax
  int v4; // eax
  TerrainTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  Image = this->?; /*0x71e364*/
  this->ObjectTypeClass = &TerrainTypeClass::`vftable'; /*0x71e36a*/
  this->? = &TerrainTypeClass::`vftable'; /*0x71e372*/
  this->? = &TerrainTypeClass::`vftable'; /*0x71e379*/
  this->? = &TerrainTypeClass::`vftable'; /*0x71e380*/
  if ( Image ) /*0x71e387*/
  {
    __3_YAXPAX_Z(Image); /*0x71e38a*/
    this->? = 0; /*0x71e392*/
  }
  AbstractClass::AnnounceExpiredPointer(&this->ObjectTypeClass, 1); /*0x71e3a0*/
  v6 = this; /*0x71e3b5*/
  v4 = (*(int (__thiscall **)(_DWORD *, TerrainTypeClass **))(dword_A8E318 + 16))(&dword_A8E318, &v6); /*0x71e3b9*/
  if ( v4 != -1 && v4 < dword_A8E328 && v4 < --dword_A8E328 ) /*0x71e3d4*/
  {
    do /*0x71e3ec*/
    {
      ++v4; /*0x71e3dc*/
      *((_DWORD *)dword_A8E31C + v4 - 1) = *((_DWORD *)dword_A8E31C + v4); /*0x71e3e0*/
    }
    while ( v4 < dword_A8E328 ); /*0x71e3ec*/
  }
  ObjectTypeClass::Destruct((int)this); /*0x71e3f0*/
  if ( (a2 & 1) != 0 ) /*0x71e3fa*/
    __3_YAXPAX_Z(this); /*0x71e3fd*/
  return &this->ObjectTypeClass; /*0x71e407*/
}



// ==== 0x0071E410  sub_71E410  this=-  sig=ida-proto ====
void sub_71E410()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71e41c*/
  dbl_B0F170 = Math::Sqrt(v0 + v0); /*0x71e42e*/
}



// ==== 0x0071E440  sub_71E440  this=-  sig=ida-proto ====
void sub_71E440()
{
  dbl_B0F1D8 = dbl_B0F170 / 60.0; /*0x71e44c*/
}



// ==== 0x0071E460  sub_71E460  this=-  sig=ida-proto ====
void sub_71E460()
{
  dbl_B0F1C0 = 1.0 / dbl_B0F1D8; /*0x71e46c*/
}



// ==== 0x0071E480  sub_71E480  this=-  sig=ida-proto ====
void sub_71E480()
{
  dbl_B0F1B8 = 0.0174532925199433 * 45.0; /*0x71e48c*/
}



// ==== 0x0071E4A0  sub_71E4A0  this=-  sig=ida-proto ====
void sub_71E4A0()
{
  dbl_B0F178 = 0.0174532925199433 * 60.0; /*0x71e4ac*/
}



// ==== 0x0071E4C0  sub_71E4C0  this=-  sig=ida-proto ====
void sub_71E4C0()
{
  dbl_B0F150 = 0.0174532925199433 * 90.0; /*0x71e4cc*/
}



// ==== 0x0071E4E0  sub_71E4E0  this=-  sig=ida-proto ====
__int64 sub_71E4E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F150 - dbl_B0F178); /*0x71e4f2*/
  result = Math::RoundToInt(v0 * dbl_B0F170 * 0.5); /*0x71e506*/
  dword_B0F1E0 = result; /*0x71e50b*/
  return result; /*0x71e510*/
}



// ==== 0x0071E520  sub_71E520  this=-  sig=ida-proto ====
void sub_71E520()
{
  dbl_B0F180 = Math::ArcTan((double)dword_B0F1E0 * 0.00390625); /*0x71e537*/
}



// ==== 0x0071E550  sub_71E550  this=-  sig=ida-proto ====
void sub_71E550()
{
  dbl_B0F198 = Math::ArcTan((double)(2 * dword_B0F1E0) / dbl_B0F170); /*0x71e572*/
}



// ==== 0x0071E580  sub_71E580  this=-  sig=ida-proto ====
__int64 sub_71E580()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F1E0) + 0.5); /*0x71e59b*/
  dword_B0F1D4 = result; /*0x71e5a0*/
  return result; /*0x71e5a6*/
}



// ==== 0x0071E5B0  sub_71E5B0  this=-  sig=ida-proto ====
int sub_71E5B0()
{
  word_B0F168 = 0; /*0x71e5b2*/
  word_B0F16A = 0; /*0x71e5b8*/
  return 0; /*0x71e5be*/
}



// ==== 0x0071E5C0  sub_71E5C0  this=-  sig=ida-proto ====
int sub_71E5C0()
{
  dword_B0F188 = 0; /*0x71e5c2*/
  dword_B0F18C = 0; /*0x71e5c7*/
  dword_B0F190 = 0; /*0x71e5cc*/
  return 0; /*0x71e5d1*/
}



// ==== 0x0071E5E0  sub_71E5E0  this=-  sig=ida-proto ====
int sub_71E5E0()
{
  dword_B0F1D0 = 0; /*0x71e5e5*/
  dword_B0F1C8 = 128; /*0x71e5ef*/
  dword_B0F1CC = 128; /*0x71e5f4*/
  return 128; /*0x71e5f9*/
}



// ==== 0x0071E600  sub_71E600  this=-  sig=ida-proto ====
int sub_71E600()
{
  dword_B0F158 = 0; /*0x71e602*/
  dword_B0F15C = 0; /*0x71e607*/
  dword_B0F160 = 0; /*0x71e60c*/
  dword_B0F164 = 0; /*0x71e611*/
  return 0; /*0x71e616*/
}



// ==== 0x0071E620  sub_71E620  this=-  sig=ida-proto ====
int sub_71E620()
{
  dword_B0F1A4 = 0; /*0x71e627*/
  dword_B0F1A8 = 0; /*0x71e62c*/
  byte_B0F1AC = 1; /*0x71e631*/
  byte_B0F1AD = 0; /*0x71e638*/
  dword_B0F1A0 = (int)&DynamicVectorClass<TEventClass *>::`vftable'; /*0x71e63d*/
  dword_B0F1B4 = 10; /*0x71e647*/
  dword_B0F1B0 = 0; /*0x71e651*/
  return atexit(sub_71E660); /*0x71e65c*/
}



// ==== 0x0071E660  sub_71E660  this=-  sig=ida-proto ====
void __cdecl sub_71E660()
{
  dword_B0F1A0 = (int)&VectorClass<TEventClass *>::`vftable'; /*0x71e668*/
  if ( dword_B0F1A4 && byte_B0F1AD ) /*0x71e67c*/
  {
    __3_YAXPAX_Z(dword_B0F1A4); /*0x71e67f*/
    dword_B0F1A4 = 0; /*0x71e687*/
  }
  byte_B0F1AD = 0; /*0x71e68d*/
  dword_B0F1A8 = 0; /*0x71e693*/
}



// ==== 0x0071E6A0  TActionClass::TActionClass  this=TEventClass  sig=csp ====
int __thiscall TActionClass::TActionClass(TActionClass *this)
{
  int v2; // ecx
  char v3; // al
  int v4; // eax
  TActionClass **v5; // edx
  int v6; // eax
  int v7; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x71e6a4*/
  this->idxArray = -1; /*0x71e6ab*/
  this->TActionClass_field_28 = 0; /*0x71e6b2*/
  this->TActionClass_field_2C = 0; /*0x71e6b5*/
  this->TActionClass_field_30 = 0; /*0x71e6b8*/
  LOBYTE(this->TActionClass_field_38) = 0; /*0x71e6bb*/
  *(_DWORD *)&this->TActionClass_field_54 = 0; /*0x71e6be*/
  this->AbstractClass = &TEventClass::`vftable'; /*0x71e6c1*/
  this->? = &TEventClass::`vftable'; /*0x71e6c7*/
  this->? = &TEventClass::`vftable'; /*0x71e6ce*/
  this->? = &TEventClass::`vftable'; /*0x71e6d5*/
  v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e6dc*/
  if ( g_BuildingLoadQueue_Array.?[54] < g_BuildingLoadQueue_Array.?[52] /*0x71e71a*/
    || (BYTE1(g_BuildingLoadQueue_Array.?[53]) || !g_BuildingLoadQueue_Array.?[52])
    && g_BuildingLoadQueue_Array.?[55] > 0
    && (v3 = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[50] + 8))(
               &g_BuildingLoadQueue_Array.?[50],
               g_BuildingLoadQueue_Array.?[52] + g_BuildingLoadQueue_Array.?[55],
               0),
        v2 = g_BuildingLoadQueue_Array.?[54],
        v3) )
  {
    g_BuildingLoadQueue_Array.?[54] = v2 + 1; /*0x71e71f*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[51] + 4 * v2) = this; /*0x71e72b*/
    v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e72e*/
  }
  v4 = 0; /*0x71e734*/
  if ( v2 <= 0 ) /*0x71e738*/
  {
LABEL_11:
    v4 = -1; /*0x71e74c*/
  }
  else
  {
    v5 = (TActionClass **)g_BuildingLoadQueue_Array.?[51]; /*0x71e73a*/
    while ( *v5 != this ) /*0x71e742*/
    {
      ++v4; /*0x71e744*/
      ++v5; /*0x71e745*/
      if ( v4 >= v2 ) /*0x71e74a*/
        goto LABEL_11; /*0x71e74a*/
    }
  }
  this->idxArray = v4; /*0x71e74f*/
  if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x71e786*/
    || (BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
    && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
         0) )
  {
    v6 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x71e793*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v6) = this; /*0x71e7a2*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x71e7d9*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x71e7e6*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x71e7f5*/
  }
  this->TActionClass_field_34 = 0; /*0x71e7f8*/
  return (int)this; /*0x71e7fd*/
}



// ==== 0x0071E940  TEventClass::Execute  this=TEventClass  sig=csp ====
char __thiscall TEventClass::Execute(TEventClass *this, int a2, int a3, int a4, int *a5, int a6, int a7)
{
  double v7; // st7
  int TEventClass_field_2C; // ecx
  int v10; // eax
  int v11; // edi
  int *TEventClass_field_38; // edx
  int v13; // ebp
  int v14; // edi
  int v15; // ebx
  int TEventClass_field_34; // ebp
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // edi
  int *v21; // edx
  int v22; // ebp
  int v23; // edi
  int v24; // esi
  void *vtable3; // edx
  int abstractFlags; // eax
  int v27; // edx
  int v28; // eax
  HouseClass *v29; // ecx
  int v30; // esi
  int v31; // esi
  int *WorldCoords; // eax
  int v33; // esi
  int v34; // edi
  int v35; // ebx
  int *v36; // eax
  int v37; // edx
  int v38; // ecx
  int v39; // eax
  WaveClass *waveEffect; // esi
  int v41; // edx
  ParticleSystemClass *auxParticles1; // ecx
  _DWORD *vtable0; // eax
  int v44; // esi
  int v45; // edx
  int *v46; // eax
  int v47; // ecx
  int v48; // eax
  int Owner; // esi
  int v52; // eax
  HouseClass *v53; // ecx
  HouseClass *v54; // edi
  int v55; // ebx
  double v57; // [esp+4h] [ebp-34h]
  int v59; // [esp+20h] [ebp-18h] BYREF
  int v60; // [esp+24h] [ebp-14h]
  int v61; // [esp+28h] [ebp-10h]
  _BYTE v62[12]; // [esp+2Ch] [ebp-Ch] BYREF

  TEventClass_field_2C = this->TEventClass_field_2C; /*0x71e94d*/
  switch ( TEventClass_field_2C ) /*0x71e964*/
  {
    case 13: /*0x71e964*/
    case 51: /*0x71e964*/
      v27 = *a5; /*0x71ec37*/
      v28 = a5[2]; /*0x71ec39*/
      if ( *a5 == -1 ) /*0x71ec3f*/
        goto LABEL_44; /*0x71ec3f*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v27 < v28 ) /*0x71ec4b*/
      {
        v28 -= *(_DWORD *)&stru_A8EB00.?[416] - v27; /*0x71ec4d*/
LABEL_44:
        if ( v28 ) /*0x71ec51*/
          goto LABEL_139; /*0x71ec51*/
      }
      LOBYTE(v18) = 1; /*0x71ec5a*/
      return v18; /*0x71ec60*/
    case 14: /*0x71e964*/
      if ( dword_A8B230[127].vtable3 == (void *)-1 ) /*0x71ebf6*/
        goto LABEL_139; /*0x71ebf6*/
      vtable3 = dword_A8B230[127].vtable3; /*0x71ebfc*/
      abstractFlags = dword_A8B230[127].abstractFlags; /*0x71ec02*/
      if ( vtable3 == (void *)-1 ) /*0x71ec0b*/
        goto LABEL_39; /*0x71ec0b*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)vtable3 >= abstractFlags ) /*0x71ec17*/
        goto LABEL_153; /*0x71ec17*/
      abstractFlags -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)vtable3; /*0x71ec1d*/
LABEL_39:
      if ( abstractFlags ) /*0x71ec21*/
        goto LABEL_139; /*0x71ec21*/
      LOBYTE(v18) = 1; /*0x71ec2a*/
      return v18; /*0x71ec30*/
    case 27: /*0x71e964*/
      ScenarioClass::GetGlobalStateByID((ScenarioClass *)dword_A8B230, this->TEventClass_field_34, &a6); /*0x71eb62*/
      LOBYTE(v18) = a6; /*0x71eb67*/
      return v18; /*0x71eb72*/
    case 28: /*0x71e964*/
      ScenarioClass::GetGlobalStateByID((ScenarioClass *)dword_A8B230, this->TEventClass_field_34, &a6); /*0x71eb84*/
      LOBYTE(v18) = (_BYTE)a6 == 0; /*0x71eb95*/
      return v18; /*0x71eb9b*/
    case 36: /*0x71e964*/
      ScenarioClass::GetLocalStateByID((ScenarioClass *)dword_A8B230, this->TEventClass_field_34, &a6); /*0x71ebad*/
      LOBYTE(v18) = a6; /*0x71ebb2*/
      return v18; /*0x71ebbd*/
    case 37: /*0x71e964*/
      ScenarioClass::GetLocalStateByID((ScenarioClass *)dword_A8B230, this->TEventClass_field_34, &a6); /*0x71ebcf*/
      LOBYTE(v18) = (_BYTE)a6 == 0; /*0x71ebe0*/
      return v18; /*0x71ebe6*/
    case 45: /*0x71e964*/
      return (int)dword_A8B230[378].vtable1 <= this->TEventClass_field_34; /*0x71eb03*/
    case 46: /*0x71e964*/
      LOBYTE(v18) = (int)dword_A8B230[378].vtable1 >= this->TEventClass_field_34; /*0x71eb1f*/
      return v18; /*0x71eb25*/
    case 47: /*0x71e964*/
      LOBYTE(v18) = this->TEventClass_field_34 <= *(_DWORD *)&stru_A8EB00.?[416] / 15; /*0x71eb49*/
      return v18; /*0x71eb50*/
    case 60: /*0x71e964*/
      v10 = -1; /*0x71e971*/
      v11 = stru_A8EB00.ObjectTypeClass[4] - 1; /*0x71e974*/
      a6 = -1; /*0x71e975*/
      if ( stru_A8EB00.ObjectTypeClass[4] - 1 < 0 ) /*0x71e97b*/
        goto LABEL_8; /*0x71e97b*/
      TEventClass_field_38 = this->TEventClass_field_38; /*0x71e982*/
      v13 = stru_A8EB00.ObjectTypeClass[1] + 4 * v11; /*0x71e985*/
      while ( strcmp((const char *)(*(_DWORD *)v13 + 36), (const char *)TEventClass_field_38) ) /*0x71e9bb*/
      {
        --v11; /*0x71e9bd*/
        v13 -= 4; /*0x71e9be*/
        if ( v11 < 0 ) /*0x71e9c3*/
        {
          v10 = a6; /*0x71e9c5*/
          goto LABEL_8; /*0x71e9c9*/
        }
      }
      v10 = v11; /*0x71e9cb*/
LABEL_8:
      if ( v10 >= stru_A8EB00.ObjectTypeClass[4] ) /*0x71e9d3*/
        goto LABEL_139; /*0x71e9d3*/
      if ( v10 < 0 ) /*0x71e9db*/
        goto LABEL_139; /*0x71e9db*/
      v14 = 0; /*0x71e9eb*/
      v15 = *(_DWORD *)(stru_A8EB00.ObjectTypeClass[1] + 4 * v10); /*0x71e9ed*/
      TEventClass_field_34 = this->TEventClass_field_34; /*0x71e9f5*/
      v17 = *(_DWORD *)&stru_A8EB00.?[164] - 1; /*0x71e9f8*/
      if ( *(_DWORD *)&stru_A8EB00.?[164] - 1 < 0 ) /*0x71e9fd*/
        goto LABEL_139; /*0x71e9fd*/
      while ( 1 ) /*0x71ea03*/
      {
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v17) + 132))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v17)) == v15 ) /*0x71ea16*/
          ++v14; /*0x71ea18*/
        if ( v14 >= TEventClass_field_34 ) /*0x71ea1b*/
          break; /*0x71ea1b*/
        if ( --v17 < 0 ) /*0x71ea22*/
        {
          LOBYTE(v18) = 0; /*0x71ea27*/
          return v18; /*0x71ea2d*/
        }
      }
      goto LABEL_153; /*0x71ea1b*/
    case 61: /*0x71e964*/
      v19 = -1; /*0x71ea36*/
      v20 = stru_A8EB00.ObjectTypeClass[4] - 1; /*0x71ea39*/
      a6 = -1; /*0x71ea3a*/
      if ( stru_A8EB00.ObjectTypeClass[4] - 1 < 0 ) /*0x71ea40*/
        goto LABEL_22; /*0x71ea40*/
      v21 = this->TEventClass_field_38; /*0x71ea47*/
      v22 = stru_A8EB00.ObjectTypeClass[1] + 4 * v20; /*0x71ea4a*/
      while ( strcmp((const char *)(*(_DWORD *)v22 + 36), (const char *)v21) ) /*0x71ea80*/
      {
        --v20; /*0x71ea82*/
        v22 -= 4; /*0x71ea83*/
        if ( v20 < 0 ) /*0x71ea88*/
        {
          v19 = a6; /*0x71ea8a*/
          goto LABEL_22; /*0x71ea8e*/
        }
      }
      v19 = v20; /*0x71ea90*/
LABEL_22:
      if ( v19 >= stru_A8EB00.ObjectTypeClass[4] || v19 < 0 ) /*0x71eaa0*/
        goto LABEL_139; /*0x71eaa0*/
      v23 = *(_DWORD *)(stru_A8EB00.ObjectTypeClass[1] + 4 * v19); /*0x71eab2*/
      v24 = *(_DWORD *)&stru_A8EB00.?[164] - 1; /*0x71eab5*/
      if ( *(_DWORD *)&stru_A8EB00.?[164] - 1 < 0 ) /*0x71eaba*/
        goto LABEL_153; /*0x71eaba*/
      while ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v24) + 132))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v24)) != v23 ) /*0x71ead2*/
      {
        if ( --v24 < 0 ) /*0x71ead9*/
        {
          LOBYTE(v18) = 1; /*0x71eade*/
          return v18; /*0x71eae4*/
        }
      }
      goto LABEL_139; /*0x71ead2*/
    default:
      if ( !TEventClass_field_2C ) /*0x71ec65*/
        goto LABEL_139; /*0x71ec65*/
      if ( TEventClass_field_2C != 19 /*0x71ec81*/
        && TEventClass_field_2C != 20
        && TEventClass_field_2C != 21
        && TEventClass_field_2C != 22 )
      {
        switch ( TEventClass_field_2C ) /*0x71ec93*/
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
            if ( a2 == TEventClass_field_2C && !stru_A8EB00.?[391] ) /*0x71eca9*/
              break; /*0x71eca9*/
            goto LABEL_139; /*0x71eca9*/
          default:
            break;
        }
      }
      switch ( TEventClass_field_2C ) /*0x71ecd6*/
      {
        case 1: /*0x71ecd6*/
        case 25: /*0x71ecd6*/
        case 26: /*0x71ecd6*/
        case 24: /*0x71ecd6*/
        case 59: /*0x71ecd6*/
          if ( a2 == TEventClass_field_2C ) /*0x71f1bf*/
          {
            v53 = (HouseClass *)this->TEventClass_field_34; /*0x71f1c1*/
            if ( v53 == (HouseClass *)-1 || HouseClass::FindOwner(v53) ) /*0x71f1c9*/
            {
              if ( a4 ) /*0x71f1d8*/
              {
                v54 = (HouseClass *)this->TEventClass_field_34; /*0x71f1da*/
                if ( v54 == (HouseClass *)-1 /*0x71f1f5*/
                  || (v55 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 56))(a4),
                      v55 == *(_DWORD *)(HouseClass::FindOwner(v54) + 48)) )
                {
                  *(_BYTE *)a6 = 1; /*0x71f1ff*/
                  this->TEventClass_field_54 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 60))(a4); /*0x71f209*/
LABEL_153:
                  LOBYTE(v18) = 1; /*0x71f20c*/
                  return v18; /*0x71f20f*/
                }
              }
            }
          }
LABEL_139:
          LOBYTE(v18) = 0; /*0x71f163*/
          return v18; /*0x71f16c*/
        case 53: /*0x71ecd6*/
          if ( a2 == 53 ) /*0x71ece3*/
          {
            if ( a4 ) /*0x71ecef*/
            {
              v29 = (HouseClass *)this->TEventClass_field_34; /*0x71ecf5*/
              if ( v29 != (HouseClass *)-1 ) /*0x71ecfb*/
              {
                if ( HouseClass::FindOwner(v29) ) /*0x71ed01*/
                {
                  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 208))(a4, 1) ) /*0x71ed14*/
                  {
                    v30 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 208))(a4, 1); /*0x71ed31*/
                    if ( *(_DWORD *)(v30 + 48) == *(_DWORD *)(HouseClass::FindOwner((HouseClass *)this->TEventClass_field_34) /*0x71ed40*/
                                                            + 48) )
                    {
                      *(_BYTE *)a6 = 1; /*0x71ed4d*/
                      LOBYTE(v18) = 1; /*0x71ed50*/
                      return v18; /*0x71ed56*/
                    }
                  }
                }
              }
            }
          }
          goto LABEL_139; /*0x71ed40*/
        case 54: /*0x71ecd6*/
          if ( a2 == 54 ) /*0x71ed60*/
          {
            if ( a4 ) /*0x71ed6c*/
            {
              v31 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 204))(a4, 1); /*0x71ed7c*/
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 44))(v31) == 16 /*0x71eda2*/
                && this->TEventClass_field_34 != -1
                && (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 64))(v31) == this->TEventClass_field_34 )
              {
                *(_BYTE *)a6 = 1; /*0x71edaf*/
                LOBYTE(v18) = 1; /*0x71edb2*/
                return v18; /*0x71edb8*/
              }
            }
          }
          goto LABEL_139; /*0x71eda2*/
        case 34: /*0x71ecd6*/
          if ( a2 == 34 ) /*0x71edc6*/
          {
            WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, &v59, this->TEventClass_field_34); /*0x71eddb*/
            v33 = *WorldCoords; /*0x71ede0*/
            v34 = WorldCoords[1]; /*0x71ede6*/
            v35 = WorldCoords[2]; /*0x71edeb*/
            v36 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a4 + 72))(a4, v62); /*0x71edf3*/
            v37 = v36[1]; /*0x71edf6*/
            v38 = *v36; /*0x71edf9*/
            v39 = v36[2]; /*0x71edfb*/
            v60 = v37 - v34; /*0x71ee00*/
            __asm { fild [esp+2Ch+var_14] } /*0x71ee06*/
            v61 = v39 - v35; /*0x71ee0c*/
            __asm { fild [esp+2Ch+var_10] } /*0x71ee10*/
            v59 = v38 - v33; /*0x71ee14*/
            __asm /*0x71ee1b*/
            {
              fild [esp+34h+var_18]
              fld st
              fmul st, st(1)
              fld st(2)
              fmul st, st(3)
              faddp st(1), st
              fld st(3)
              fmul st, st(4)
              faddp st(1), st
              fstp [esp+34h+var_38+4]; double
              fstp st
              fstp st
              fstp st
            }
            Math::Sqrt(v57); /*0x71ee38*/
            LOWORD(v18) = Math::RoundToInt(v7); /*0x71ee40*/
            LOBYTE(v18) = v18 <= 1280; /*0x71ee4d*/
            return v18; /*0x71ee54*/
          }
          goto LABEL_139; /*0x71edc6*/
      }
      if ( TEventClass_field_2C == 44 /*0x71ee7c*/
        && (a2 != 44 || !a7 || this->TEventClass_field_34 != *(_DWORD *)(*(_DWORD *)(a7 + 540) + 48)) )
      {
        goto LABEL_139; /*0x71ee7c*/
      }
      if ( a3 ) /*0x71ee88*/
      {
        switch ( TEventClass_field_2C ) /*0x71eea2*/
        {
          case 12: /*0x71eea2*/
            if ( (*(int (__stdcall **)(int))(*(_DWORD *)(a3 + 36) + 24))(a3 + 36) >= this->TEventClass_field_34 ) /*0x71ef0e*/
              goto LABEL_122; /*0x71ef0e*/
            LOBYTE(v18) = 0; /*0x71ef17*/
            return v18; /*0x71ef1d*/
          case 15: /*0x71eea2*/
            if ( *(_DWORD *)(a3 + 21640) >= this->TEventClass_field_34 ) /*0x71f04a*/
              goto LABEL_122; /*0x71f04a*/
            LOBYTE(v18) = 0; /*0x71f04f*/
            return v18; /*0x71f055*/
          case 16: /*0x71eea2*/
            if ( *(_DWORD *)(a3 + 21556) >= this->TEventClass_field_34 ) /*0x71f063*/
              goto LABEL_122; /*0x71f063*/
            goto LABEL_139; /*0x71f063*/
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
                  goto LABEL_139; /*0x71ef7b*/
              }
              ++v45; /*0x71ef81*/
              ++v46; /*0x71ef82*/
              if ( v45 >= v44 ) /*0x71ef87*/
                goto LABEL_122; /*0x71ef87*/
            }
          case 18: /*0x71eea2*/
            if ( *(_BYTE *)(a3 + 505) ) /*0x71ef8e*/
              goto LABEL_122; /*0x71ef96*/
            LOBYTE(v18) = 0; /*0x71ef9f*/
            return v18; /*0x71efa5*/
          case 19: /*0x71eea2*/
            v48 = *(_DWORD *)(a3 + 620); /*0x71efeb*/
            goto LABEL_112; /*0x71efeb*/
          case 20: /*0x71eea2*/
            if ( *(_DWORD *)(a3 + 628) != this->TEventClass_field_34 ) /*0x71f00e*/
              goto LABEL_139; /*0x71f00e*/
            *(_BYTE *)a6 = 1; /*0x71f018*/
            goto LABEL_122; /*0x71f01b*/
          case 21: /*0x71eea2*/
            if ( *(_DWORD *)(a3 + 624) != this->TEventClass_field_34 ) /*0x71f028*/
              goto LABEL_139; /*0x71f028*/
            *(_BYTE *)a6 = 1; /*0x71f032*/
            goto LABEL_122; /*0x71f035*/
          case 22: /*0x71eea2*/
            v48 = *(_DWORD *)(a3 + 632); /*0x71f037*/
LABEL_112:
            if ( v48 != this->TEventClass_field_34 ) /*0x71eff4*/
              goto LABEL_139; /*0x71eff4*/
            *(_BYTE *)a6 = 1; /*0x71effe*/
            goto LABEL_122; /*0x71f001*/
          case 23: /*0x71eea2*/
            waveEffect = FootClass_Array.?; /*0x71eea9*/
            v41 = 0; /*0x71eeaf*/
            if ( (int)FootClass_Array.? <= 0 ) /*0x71eeb3*/
              goto LABEL_91; /*0x71eeb3*/
            auxParticles1 = FootClass_Array.?; /*0x71eeb8*/
            break; /*0x71eeb8*/
          case 32: /*0x71eea2*/
            if ( !DynamicVector::GetOrGrow((DynamicVector *)(a3 + 21840), this->TEventClass_field_34) ) /*0x71efb9*/
              goto LABEL_139; /*0x71efb9*/
            *(_BYTE *)a6 = 1; /*0x71efc3*/
            goto LABEL_122; /*0x71efc6*/
          case 52: /*0x71eea2*/
            if ( (*(int (__stdcall **)(int))(*(_DWORD *)(a3 + 36) + 24))(a3 + 36) <= this->TEventClass_field_34 ) /*0x71ef2d*/
              goto LABEL_122; /*0x71ef2d*/
            LOBYTE(v18) = 0; /*0x71ef36*/
            return v18; /*0x71ef3c*/
          case 57: /*0x71eea2*/
            if ( DynamicVector::GetOrGrow((DynamicVector *)(a3 + 21840), this->TEventClass_field_34) ) /*0x71efd5*/
              goto LABEL_139; /*0x71efdc*/
            *(_BYTE *)a6 = 1; /*0x71efe6*/
            goto LABEL_122; /*0x71efe9*/
          default:
            goto LABEL_122;
        }
        while ( 1 ) /*0x71eebe*/
        {
          vtable0 = auxParticles1->ObjectClass; /*0x71eebe*/
          if ( *((_DWORD *)auxParticles1->ObjectClass + 9) == this->TEventClass_field_30 /*0x71eecc*/
            && !vtable0[21]
            && *((_BYTE *)vtable0 + 130) )
          {
            break; /*0x71eecc*/
          }
          ++v41; /*0x71eed6*/
          auxParticles1 = (ParticleSystemClass *)((char *)auxParticles1 + 4); /*0x71eed7*/
          if ( v41 >= (int)FootClass_Array.? ) /*0x71eedc*/
            goto LABEL_91; /*0x71eedc*/
        }
        *(_BYTE *)a6 = 1; /*0x71eee4*/
        waveEffect = FootClass_Array.?; /*0x71eee7*/
LABEL_91:
        if ( (WaveClass *)v41 == waveEffect ) /*0x71eeef*/
        {
          LOBYTE(v18) = 0; /*0x71eef8*/
          return v18; /*0x71eefe*/
        }
      }
LABEL_122:
      Owner = HouseClass::FindOwner((HouseClass *)this->TEventClass_field_34); /*0x71f069*/
      if ( Owner ) /*0x71f075*/
      {
        switch ( this->TEventClass_field_2C ) /*0x71f092*/
        {
          case 3: /*0x71f092*/
            if ( *(_BYTE *)(Owner + 580) ) /*0x71f0e1*/
              break; /*0x71f0e9*/
            LOBYTE(v18) = 0; /*0x71f0f2*/
            return v18; /*0x71f0f8*/
          case 5: /*0x71f092*/
            if ( *(_BYTE *)(Owner + 500) ) /*0x71f0fb*/
              break; /*0x71f103*/
            LOBYTE(v18) = 0; /*0x71f10c*/
            return v18; /*0x71f112*/
          case 9: /*0x71f092*/
            if ( VectorClass::GetCount((VectorClass *)(Owner + 21860)) > 0 ) /*0x71f13c*/
              goto LABEL_139; /*0x71f13c*/
            if ( VectorClass::GetCount((VectorClass *)(Owner + 21880)) <= 0 ) /*0x71f14b*/
              break; /*0x71f14b*/
            LOBYTE(v18) = 0; /*0x71f150*/
            return v18; /*0x71f156*/
          case 0xA: /*0x71f092*/
            if ( *(int *)(Owner + 752) <= 0 ) /*0x71f11d*/
              break; /*0x71f11d*/
            LOBYTE(v18) = 0; /*0x71f126*/
            return v18; /*0x71f12c*/
          case 0xB: /*0x71f092*/
            if ( *(int *)(Owner + 752) <= 0 /*0x71f1af*/
              && VectorClass::GetCount((VectorClass *)(Owner + 21860)) <= 0
              && VectorClass::GetCount((VectorClass *)(Owner + 21880)) <= 0 )
            {
              break; /*0x71f1af*/
            }
            goto LABEL_139; /*0x71f1af*/
          case 0x1E: /*0x71f092*/
            HouseClass::GetPowerRatio((HouseClass *)Owner); /*0x71f09b*/
            __asm /*0x71f0a0*/
            {
              fcomp ds:dbl_7E1718
              fnstsw ax
            }
            if ( (_AX & 0x100) != 0 ) /*0x71f0ab*/
              break; /*0x71f0ab*/
            LOBYTE(v18) = 0; /*0x71f0b4*/
            return v18; /*0x71f0ba*/
          case 0x37: /*0x71f092*/
            v52 = *(_DWORD *)(Owner + 748); /*0x71f159*/
            goto LABEL_138; /*0x71f159*/
          case 0x38: /*0x71f092*/
            if ( *(_DWORD *)(Owner + 744) - *(_DWORD *)(Owner + 748) > 0 ) /*0x71f17f*/
              goto LABEL_139; /*0x71f17f*/
            v52 = *(_DWORD *)(Owner + 756); /*0x71f181*/
LABEL_138:
            if ( v52 > 0 ) /*0x71f161*/
              goto LABEL_139; /*0x71f161*/
            break; /*0x71f161*/
          case 0x3A: /*0x71f092*/
            HouseClass::GetPowerRatio((HouseClass *)Owner); /*0x71f0bf*/
            __asm /*0x71f0c4*/
            {
              fcomp ds:dbl_7E1718
              fnstsw ax
            }
            if ( (_AX & 0x100) == 0 ) /*0x71f0cf*/
              break; /*0x71f0cf*/
            LOBYTE(v18) = 0; /*0x71f0d8*/
            return v18; /*0x71f0de*/
          default:
            break;
        }
      }
      LOBYTE(v18) = 1; /*0x71f1b1*/
      return v18;
  }
}



// ==== 0x0071F390  TEventClass::PrepareSaveToINI  this=TEventClass  sig=csp ====
int __thiscall TEventClass::PrepareSaveToINI(TEventClass *this, const char *a2)
{
  int TEventClass_field_2C; // edx
  int v3; // eax
  int TEventClass_field_30; // esi
  const CHAR *v6; // [esp-10h] [ebp-18h]
  int v7; // [esp-Ch] [ebp-14h]
  int v8; // [esp-8h] [ebp-10h]
  int TEventClass_field_34; // [esp-4h] [ebp-Ch]

  TEventClass_field_2C = this->TEventClass_field_2C; /*0x71f390*/
  switch ( TEventClass_field_2C ) /*0x71f3a8*/
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
  TEventClass_field_30 = this->TEventClass_field_30; /*0x71f3fe*/
  if ( TEventClass_field_30 ) /*0x71f403*/
  {
    TEventClass_field_34 = TEventClass_field_30 + 36; /*0x71f408*/
    v8 = 1; /*0x71f409*/
    v7 = this->TEventClass_field_2C; /*0x71f40b*/
    v6 = aDDS; /*0x71f40c*/
  }
  else
  {
    if ( v3 == 43 ) /*0x71f416*/
      return wsprintfA( /*0x71f443*/
               (LPSTR)&a2[strlen(a2)],
               aDDDS,
               TEventClass_field_2C,
               2,
               this->TEventClass_field_34,
               this->TEventClass_field_38);
    TEventClass_field_34 = this->TEventClass_field_34; /*0x71f446*/
    v8 = 0; /*0x71f447*/
    v7 = this->TEventClass_field_2C; /*0x71f449*/
    v6 = g_Str_Trace__d__d; /*0x71f44a*/
  }
  return wsprintfA((LPSTR)&a2[strlen(a2)], v6, v7, v8, TEventClass_field_34); /*0x71f441*/
}



// ==== 0x0071F4E0  TriggerTypeClass::ParseActionData  this=TriggerTypeClass  sig=csp ====
char *__thiscall TriggerTypeClass::ParseActionData(TriggerTypeClass *this)
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

  this->__pad_24[4] = 0; /*0x71f4f0*/
  v2 = strtok(0, Str); /*0x71f4f7*/
  this->__pad_24[2] = atoi(v2); /*0x71f509*/
  v3 = strtok(0, Str); /*0x71f50c*/
  v4 = atoi(v3); /*0x71f51e*/
  v5 = strtok(0, Str); /*0x71f525*/
  v6 = atoi(v5); /*0x71f52d*/
  result = 0; /*0x71f532*/
  if ( v4 == 2 ) /*0x71f537*/
    result = strtok(0, Str); /*0x71f53f*/
  if ( v4 ) /*0x71f54a*/
  {
    v8 = v4 - 1; /*0x71f54c*/
    if ( v8 ) /*0x71f54d*/
    {
      if ( v8 == 1 ) /*0x71f550*/
      {
        this->__pad_24[4] = v6; /*0x71f554*/
        if ( result ) /*0x71f557*/
        {
          result = strncpy(Destination, result, 0x18u); /*0x71f567*/
          v10 = 0; /*0x71f56f*/
        }
        else
        {
          Destination[0] = 0; /*0x71f559*/
        }
        if ( Destination != (char *)&this->__pad_24[5] ) /*0x71f57d*/
        {
          qmemcpy(&this->__pad_24[5], Destination, 0x18u); /*0x71f588*/
          this->UINameLabel[19] = v10; /*0x71f58a*/
        }
      }
    }
    else
    {
      result = (char *)TeamTypeClass::FindByName((TeamTypeClass *)v5); /*0x71f595*/
      this->__pad_24[3] = (int)result; /*0x71f59a*/
    }
  }
  else
  {
    this->__pad_24[4] = v6; /*0x71f5a5*/
  }
  return result; /*0x71f58b*/
}



// ==== 0x0071F680  TriggerTypeClass::GetActionCategoryFlags  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerTypeClass::GetActionCategoryFlags(TriggerTypeClass *this)
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
  if ( this == (TriggerTypeClass *)8 || this == (TriggerTypeClass *)24 ) /*0x71f6bb*/
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
int __thiscall TEventClass::CheckConditions(TEventClass *this, int a2, int a3)
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
int __thiscall TEventClass::ProcessEvent(TEventClass *this, int a2)
{
  int TEventClass_field_28; // eax
  int v4; // eax
  int TEventClass_field_30; // eax
  int v6; // eax

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x71f829*/
  TEventClass_field_28 = this->TEventClass_field_28; /*0x71f82e*/
  if ( TEventClass_field_28 ) /*0x71f833*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(TEventClass_field_28 + 4) + 16))(TEventClass_field_28 + 4); /*0x71f83c*/
    Power::TimerProcess(v4); /*0x71f842*/
  }
  Power::TimerProcess(this->TEventClass_field_2C); /*0x71f84d*/
  TEventClass_field_30 = this->TEventClass_field_30; /*0x71f852*/
  if ( TEventClass_field_30 ) /*0x71f857*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(TEventClass_field_30 + 4) + 16))(TEventClass_field_30 + 4); /*0x71f860*/
    Power::TimerProcess(v6); /*0x71f866*/
  }
  return Power::TimerProcess(this->TEventClass_field_34); /*0x71f876*/
}



// ==== 0x0071F880  TEventClass::ddtor  this=TEventClass  sig=csp ====
int __stdcall TEventClass::ddtor(TEventClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x71f886*/
    return -2147467261; /*0x71f888*/
  *a2 = 1326367635; /*0x71f896*/
  a2[1] = 298977877; /*0x71f89e*/
  a2[2] = 1610655660; /*0x71f8a7*/
  a2[3] = unk_7E981C; /*0x71f8b0*/
  return 0; /*0x71f88d*/
}



// ==== 0x0071F8C0  TEventClass::SaveLoad_Prefix  this=TEventClass  sig=csp ====
int __stdcall TEventClass::SaveLoad_Prefix(TEventClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x71f8cb*/
  if ( result >= 0 ) /*0x71f8d2*/
  {
    if ( this ) /*0x71f8d6*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x71f8df*/
      this->AbstractClass = &TEventClass::`vftable'; /*0x71f8e4*/
      this->? = &TEventClass::`vftable'; /*0x71f8ea*/
      this->? = &TEventClass::`vftable'; /*0x71f8f1*/
      this->? = &TEventClass::`vftable'; /*0x71f8f8*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->TEventClass_field_28); /*0x71f908*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->TEventClass_field_30); /*0x71f916*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->TEventClass_field_54); /*0x71f924*/
    return 0; /*0x71f929*/
  }
  return result; /*0x71f92b*/
}



// ==== 0x0071F930  TEventClass::SaveLoad_Prefix_0  this=TEventClass  sig=csp ====
int __stdcall TEventClass::SaveLoad_Prefix_0(TEventClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x71f93f*/
  if ( result >= 0 ) /*0x71f946*/
    return 0; /*0x71f948*/
  return result; /*0x71f94a*/
}



// ==== 0x0071F950  TEventClass::GetStateA  this=TEventClass  sig=csp ====
char __thiscall TEventClass::GetStateA(TEventClass *this)
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
char __thiscall TEventClass::GetStateB_SpyEvent(TEventClass *this)
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
int __thiscall TriggerClass::GetValue(TriggerClass *this)
{
  return *((_DWORD *)this + 21); /*0x71fa33*/
}



// ==== 0x0071FA40  ObjectClass::method_71FA40  this=ObjectClass  sig=csp ====
int __thiscall sub_71FA40(_DWORD *this, int a2)
{
  this->q054 = a2; /*0x71fa44*/
  return a2; /*0x71fa47*/
}



// ==== 0x0071FA50  TEventClass::StubReturn88  this=TEventClass  sig=csp ====
int TEventClass::StubReturn88(TEventClass *this)
{
  return 88; /*0x71fa55*/
}



// ==== 0x0071FA60  TEventClass::StubReturn48  this=TEventClass  sig=csp ====
int TEventClass::StubReturn48(TEventClass *this)
{
  return 48; /*0x71fa65*/
}



// ==== 0x0071FA70  TEventClass::Stub  this=TEventClass  sig=csp ====
int __thiscall TEventClass::Stub(TEventClass *this)
{
  return this->eventType; /*0x71fa73*/
}



// ==== 0x0071FA80  TEventClass::Fire  this=TEventClass  sig=csp ====
void **__thiscall TEventClass::Fire(TEventClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  TEventClass *v7; // [esp+8h] [ebp-4h] BYREF

  this->AbstractClass = &TEventClass::`vftable'; /*0x71fa86*/
  this->? = &TEventClass::`vftable'; /*0x71fa8c*/
  this->? = &TEventClass::`vftable'; /*0x71fa93*/
  this->? = &TEventClass::`vftable'; /*0x71fa9a*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x71faa1*/
  v7 = this; /*0x71fab6*/
  v3 = (*(int (__thiscall **)(int *, TEventClass **))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 16))( /*0x71faba*/
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
         &v7);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.GateCloseDelay[0] ) /*0x71faca*/
  {
    --g_BuildingLoadQueue_Array.GateCloseDelay[0]; /*0x71facf*/
    for ( ; /*0x71fad5*/
          v3 < g_BuildingLoadQueue_Array.GateCloseDelay[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v3) )
    {
      ++v3; /*0x71fadd*/
    }
  }
  v7 = this; /*0x71faff*/
  v4 = (*(int (__thiscall **)(int *, TEventClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x71fb03*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v7);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x71fb13*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x71fb18*/
    for ( ; /*0x71fb1e*/
          v4 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v4) )
    {
      ++v4; /*0x71fb26*/
    }
  }
  v7 = this; /*0x71fb48*/
  v5 = (*(int (__thiscall **)(int *, TEventClass **))(g_BuildingLoadQueue_Array.?[50] + 16))( /*0x71fb4c*/
         &g_BuildingLoadQueue_Array.?[50],
         &v7);
  if ( v5 != -1 && v5 < g_BuildingLoadQueue_Array.?[54] ) /*0x71fb5c*/
  {
    --g_BuildingLoadQueue_Array.?[54]; /*0x71fb61*/
    for ( ; /*0x71fb67*/
          v5 < g_BuildingLoadQueue_Array.?[54];
          *(_DWORD *)(g_BuildingLoadQueue_Array.?[51] + 4 * v5 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[51]
                                                                                + 4 * v5) )
    {
      ++v5; /*0x71fb6f*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x71fb83*/
  if ( (a2 & 1) != 0 ) /*0x71fb8d*/
    __3_YAXPAX_Z(this); /*0x71fb90*/
  return &this->AbstractClass; /*0x71fb9a*/
}



// ==== 0x0071FBA0  _DynamicVectorClass_PAVTEventClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TEventClass::Destroy(_DynamicVectorClass_PAVTEventClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x71fba6*/
  this->m_10 = 0; /*0x71fba9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x71fbb0*/
  {
    __3_YAXPAX_Z(v2); /*0x71fbb6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71fbbe*/
  }
  BYTE1(this->m_C) = 0; /*0x71fbc1*/
  this->m_8 = 0; /*0x71fbc4*/
}



// ==== 0x0071FBD0  _DynamicVectorClass_PAVTEventClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TEventClass::GetItemIndex(_DynamicVectorClass_PAVTEventClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x71fbd0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x71fbe5*/
  else
    return 0; /*0x71fbd7*/
}



// ==== 0x0071FBF0  _VectorClass_PAVTEventClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TEventClass::Get(_VectorClass_PAVTEventClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x71fbfa*/
}



// ==== 0x0071FC00  _VectorClass_PAVTEventClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TEventClass::Add(_VectorClass_PAVTEventClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x71fc02*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x71fc0d*/
  {
    v3 = 0; /*0x71fc0f*/
    if ( m_8 <= 0 ) /*0x71fc13*/
      return 1; /*0x71fc33*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x71fc15*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x71fc1b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x71fc24*/
    {
      ++v3; /*0x71fc26*/
      ++v4; /*0x71fc27*/
      if ( v3 >= m_8 ) /*0x71fc2c*/
        return 1; /*0x71fc2c*/
    }
  }
  return 0; /*0x71fc2e*/
}



// ==== 0x0071FC40  _VectorClass_PAVTEventClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TEventClass::Release(_VectorClass_PAVTEventClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x71fc4c*/
  {
    LOBYTE(this->m_C) = 0; /*0x71fc56*/
    if ( a3 ) /*0x71fc5c*/
      v4 = a3; /*0x71fc72*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x71fc6e*/
    LOBYTE(this->m_C) = 1; /*0x71fc76*/
    if ( v4 ) /*0x71fc7a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x71fc85*/
      {
        m_8 = this->m_8; /*0x71fc8c*/
        if ( a2 < m_8 ) /*0x71fc91*/
          m_8 = a2; /*0x71fc93*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x71fc99*/
          ++i; /*0x71fc9e*/
        if ( BYTE1(this->m_C) ) /*0x71fcab*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x71fcb6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x71fcbe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x71fcc7*/
      this->m_8 = a2; /*0x71fccf*/
      BYTE1(this->m_C) = a3 == 0; /*0x71fcd2*/
      return 1; /*0x71fcd8*/
    }
    else
    {
      return 0; /*0x71fc7f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVTEventClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x71fce2*/
    return 1; /*0x71fce8*/
  }
}



// ==== 0x0071FCF0  _VectorClass_PAVTEventClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TEventClass::Remove(_VectorClass_PAVTEventClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x71fcfd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x71fd03*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71fd0b*/
  }
  BYTE1(this->m_C) = 0; /*0x71fd0e*/
  this->m_8 = 0; /*0x71fd11*/
}



// ==== 0x0071FD20  _VectorClass_PAVTEventClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TEventClass::GetSize(_VectorClass_PAVTEventClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x71fd20*/
    return 0; /*0x71fd28*/
  m_8 = this->m_8; /*0x71fd2e*/
  result = 0; /*0x71fd31*/
  if ( m_8 <= 0 ) /*0x71fd35*/
    return -1; /*0x71fd4c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x71fd3b*/
  {
    if ( ++result >= m_8 ) /*0x71fd4a*/
      return -1; /*0x71fd4a*/
  }
  return result; /*0x71fd2a*/
}



// ==== 0x0071FD60  _VectorClass_PAVTEventClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TEventClass::GetCapacity(_VectorClass_PAVTEventClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x71fd60*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x71fd75*/
  else
    return 0; /*0x71fd67*/
}



// ==== 0x0071FD80  _DynamicVectorClass_PAVTEventClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TEventClass::SetCapacity(_DynamicVectorClass_PAVTEventClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x71fd8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x71fd92*/
    if ( a3 ) /*0x71fd98*/
      v4 = a3; /*0x71fdae*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x71fdaa*/
    LOBYTE(this->m_C) = 1; /*0x71fdb2*/
    if ( !v4 ) /*0x71fdb6*/
      return 0; /*0x71fe2a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x71fdb8*/
    {
      m_8 = this->m_8; /*0x71fdbf*/
      if ( a2 < m_8 ) /*0x71fdc4*/
        m_8 = a2; /*0x71fdc6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x71fdcc*/
        ++i; /*0x71fdd1*/
      if ( BYTE1(this->m_C) ) /*0x71fdde*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x71fde9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x71fdf1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x71fdfa*/
    this->m_8 = a2; /*0x71fe02*/
    BYTE1(this->m_C) = a3 == 0; /*0x71fe05*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVTEventClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x71fe0e*/
  }
  v7 = this->m_8; /*0x71fe11*/
  if ( v7 < this->m_10 ) /*0x71fe19*/
    this->m_10 = v7; /*0x71fe1b*/
  return 1; /*0x71fe1e*/
}



// ==== 0x0071FE30  _DynamicVectorClass_PAVTEventClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TEventClass::FindItemIndex(_DynamicVectorClass_PAVTEventClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x71fe30*/
  result = 0; /*0x71fe33*/
  if ( m_10 <= 0 ) /*0x71fe38*/
    return -1; /*0x71fe4f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x71fe3e*/
  {
    if ( ++result >= m_10 ) /*0x71fe4d*/
      return -1; /*0x71fe4d*/
  }
  return result; /*0x71fe52*/
}



// ==== 0x0071FE60  _VectorClass_PAVTEventClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TEventClass::QueryInterface(_VectorClass_PAVTEventClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x71fe63*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TEventClass *>::`vftable'; /*0x71fe66*/
  if ( v3 && BYTE1(this->m_C) ) /*0x71fe70*/
  {
    __3_YAXPAX_Z(v3); /*0x71fe78*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71fe80*/
  }
  BYTE1(this->m_C) = 0; /*0x71fe8b*/
  this->m_8 = 0; /*0x71fe91*/
  if ( (a2 & 1) != 0 ) /*0x71fe98*/
    __3_YAXPAX_Z(this); /*0x71fe9b*/
  return this->__pad_0; /*0x71fea5*/
}



// ==== 0x0071FEB0  _DynamicVectorClass_PAVTEventClass::Constructor_VectorClass_TEventClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TEventClass::Constructor_VectorClass_TEventClass___(
        _DynamicVectorClass_PAVTEventClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x71feb3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TEventClass *>::`vftable'; /*0x71feb6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x71fec0*/
  {
    __3_YAXPAX_Z(v3); /*0x71fec8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71fed0*/
  }
  BYTE1(this->m_C) = 0; /*0x71fedb*/
  this->m_8 = 0; /*0x71fee1*/
  if ( (a2 & 1) != 0 ) /*0x71fee8*/
    __3_YAXPAX_Z(this); /*0x71feeb*/
  return this->__pad_0; /*0x71fef5*/
}



// ==== 0x0071FF00  sub_71FF00  this=-  sig=ida-proto ====
int sub_71FF00()
{
  dword_B0F1E8 = 0; /*0x71ff02*/
  dword_B0F1EC = 0; /*0x71ff07*/
  dword_B0F1F0 = 0; /*0x71ff0c*/
  dword_B0F1F4 = 0; /*0x71ff11*/
  return 0; /*0x71ff16*/
}



// ==== 0x0071FF20  TextButtonClass::method_71FF20  this=TextButtonClass  sig=csp ====
int __thiscall sub_71FF20(
        TextButtonClass *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10)
{
  int Instance; // ebx

  ToggleClass::Construct((int)this, a2, a5, a6, a7, a8); /*0x71ff41*/
  this->__pad_0[53] = a10; /*0x71ff52*/
  this->__pad_0[52] = a9; /*0x71ff5c*/
  this->field_38 = a3; /*0x71ff5f*/
  this->u32_3C = a4; /*0x71ff62*/
  *(_DWORD *)this->__pad_0 = &TextButtonClass::`vftable'; /*0x71ff65*/
  if ( a7 == -1 || a8 == -1 ) /*0x71ff70*/
  {
    Instance = TextRenderer::GetInstance(); /*0x71ff7a*/
    if ( a7 == -1 ) /*0x71ff7c*/
      *(_DWORD *)&this->__pad_0[20] = Text::MeasureWidth(this->field_38, 0) + 8; /*0x71ff8e*/
    if ( a8 == -1 ) /*0x71ff94*/
      *(_DWORD *)&this->__pad_0[24] = *(_DWORD *)(Instance + 28) + 2; /*0x71ff9c*/
  }
  return (int)this->__pad_0; /*0x71ffa1*/
}



// ==== 0x0071FFE0  TextButtonClass::checkWeaponCooldown  this=TextButtonClass  sig=csp ====
int __thiscall AbstractClass::checkWeaponCooldown(TextButtonClass *this, int a2)
{
  if ( !Control::DispatchClick((ControlClass *)this, a2) ) /*0x71ffe8*/
    return 0; /*0x720012*/
  (*(void (__thiscall **)(TextButtonClass *))(*(_DWORD *)this->__pad_0 + 144))(this); /*0x71fff5*/
  (*(void (__thiscall **)(TextButtonClass *, int))(*(_DWORD *)this->__pad_0 + 148))(this, this->field_38); /*0x720003*/
  return 1; /*0x72000e*/
}



// ==== 0x00710000  FootClass::FootClass_ImbueLocomotor  this=FootClass  sig=csp ====
void __thiscall FootClass::FootClass_ImbueLocomotor(FootClass *this, int ppv, int rclsid, ObjectClass rclsid_4)
{
  int v4; // ebp
  int v5; // edi
  int *v6; // esi
  TaskManager *v7; // ecx
  _DWORD *v8; // ecx
  int v9; // eax
  int *v10; // edi
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int InstanceCOM; // eax
  int v20; // eax
  int m_Size; // ebx
  int v22; // ebp
  int *v23; // ecx
  int Member; // eax
  _DWORD *v25; // ecx
  _DWORD *v26; // ebx
  BuildingClass *v27; // [esp+50h] [ebp-2Ch]
  StreamClass v28; // [esp+60h] [ebp-1Ch] BYREF
  int v29; // [esp+78h] [ebp-4h]

  v6 = (int *)ppv; /*0x710006*/
  v28.m_Size = (int)this; /*0x71000d*/
  if ( ppv )
  {
    v7 = *(TaskManager **)(ppv + 720); /*0x710017*/
    if ( v7 ) /*0x71001f*/
      TaskManager::Update(v7); /*0x710021*/
    v8 = (_DWORD *)v6[421]; /*0x710026*/
    if ( v8 && v8[423] && *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v8 + 132))(v8) + 3278) ) /*0x710042*/
      BuildingClass::Deploy(v27, v4, v5); /*0x710058*/
    v9 = v6[413]; /*0x71005d*/
    v10 = v6 + 413; /*0x710063*/
    *(_DWORD *)v28.__pad_0 = 0; /*0x71006b*/
    if ( v9 ) /*0x710073*/
    {
      v11 = StreamClass::Set(&v28, v6 + 413); /*0x71007a*/
      if ( v11 < 0 && v11 != -2147467262 ) /*0x710088*/
        WinAPI::Wrapper(v11); /*0x71008b*/
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*v6 + 132))(v6) + 1516)
      && *(_DWORD *)v28.__pad_0
      && !v6[172]
      && (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)v28.__pad_0 + 28))(*(_DWORD *)v28.__pad_0) )
    {
      if ( !*(_DWORD *)v28.__pad_0 ) /*0x7100d6*/
        WinAPI::Wrapper(-2147467261); /*0x7100dd*/
      v12 = (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)v28.__pad_0 + 20))(*(_DWORD *)v28.__pad_0) == 0; /*0x7100ec*/
      v13 = *v10; /*0x7100ee*/
      if ( v12 ) /*0x7100f0*/
      {
        if ( !v13 ) /*0x710126*/
          WinAPI::Wrapper(-2147467261); /*0x71012d*/
        (*(void (__stdcall **)(int))(*(_DWORD *)*v10 + 72))(*v10); /*0x710137*/
        (*(void (__thiscall **)(int *, int))(*v6 + 496))(v6, -1); /*0x710140*/
        (*(void (__thiscall **)(int *, int, _DWORD))(*v6 + 488))(v6, 13, 0); /*0x71014e*/
      }
      else
      {
        if ( v13 ) /*0x7100f4*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 8))(*v10); /*0x7100f9*/
        v14 = *(_DWORD *)v28.__pad_0; /*0x7100fc*/
        *v10 = 0; /*0x710100*/
        if ( !v14 ) /*0x710108*/
          WinAPI::Wrapper(-2147467261); /*0x71010f*/
        (*(void (__stdcall **)(int, int *))(*(_DWORD *)v14 + 16))(v14, v6 + 413); /*0x71011c*/
      }
    }
    else
    {
      if ( !*v10 ) /*0x710159*/
        WinAPI::Wrapper(-2147467261); /*0x710163*/
      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*v10 + 156))(*v10, 0); /*0x71016f*/
      v12 = *v10 == 0; /*0x710189*/
      v29 = dword_B0EA98; /*0x71018b*/
      if ( v12 ) /*0x71018f*/
        WinAPI::Wrapper(-2147467261); /*0x710196*/
      (*(void (__stdcall **)(int, int, _DWORD, int, int))(*(_DWORD *)*v10 + 112))( /*0x7101b3*/
        *v10,
        -1,
        dword_B0EA90,
        dword_B0EA94,
        v29);
      v15 = *v6; /*0x7101b6*/
      v16 = (*(int (__thiscall **)(int *, int *))(*v6 + 72))(v6, &v28.StreamClass_field_0C); /*0x7101bf*/
      (*(void (__thiscall **)(int *, int))(v15 + 244))(v6, v16); /*0x7101c5*/
      v17 = *v6; /*0x7101cb*/
      *((_BYTE *)v6 + 1718) = 1; /*0x7101cf*/
      (*(void (__thiscall **)(int *))(v17 + 976))(v6); /*0x7101d6*/
      v12 = *v10 == 0; /*0x7101e0*/
      v28.m_Data = 0; /*0x7101e2*/
      if ( !v12 ) /*0x7101e6*/
      {
        v18 = StreamClass::Set((StreamClass *)&v28.m_Data, v6 + 413); /*0x7101ed*/
        if ( v18 < 0 && v18 != -2147467262 ) /*0x7101fb*/
          WinAPI::Wrapper(v18); /*0x7101fe*/
      }
      ppv = 0; /*0x71020f*/
      InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&rclsid, 0, 7u); /*0x710213*/
      if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x710221*/
        WinAPI::Wrapper(InstanceCOM); /*0x710224*/
      if ( !ppv ) /*0x71022f*/
        WinAPI::Wrapper(-2147467261); /*0x710236*/
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)ppv + 12))(ppv, v6); /*0x710243*/
      v28.m_Position = 0; /*0x71024a*/
      if ( ppv ) /*0x710250*/
      {
        v20 = StreamClass::Set((StreamClass *)&v28.m_Position, &ppv); /*0x71025b*/
        if ( v20 < 0 && v20 != -2147467262 ) /*0x710269*/
          WinAPI::Wrapper(v20); /*0x71026c*/
      }
      COMObject::SwapReference((COMObject *)&v28.m_Data, v28.m_Position); /*0x71027a*/
      if ( v28.m_Position ) /*0x710285*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v28.m_Position + 8))(v28.m_Position); /*0x71028a*/
      if ( v28.m_Data )
      {
        m_Size = v28.m_Size; /*0x710297*/
        if ( *(_DWORD *)(v28.m_Size + 684) ) /*0x71029b*/
          TechnoClass::EjectPassengers((TechnoClass *)v28.m_Size, 0); /*0x7102a6*/
        if ( v6[171] ) /*0x7102ab*/
          TechnoClass::EjectPassengers((TechnoClass *)v6, 1); /*0x7102b7*/
        if ( !v28.m_Data ) /*0x7102c4*/
          WinAPI::Wrapper(-2147467261); /*0x7102cb*/
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v28.m_Data + 12))(v28.m_Data, *v10); /*0x7102d8*/
        v22 = *v10; /*0x7102db*/
        if ( *v10 != ppv ) /*0x7102e3*/
        {
          *v10 = ppv; /*0x7102e7*/
          SuperClass::SetFieldX((SuperClass *)(v6 + 413)); /*0x7102e9*/
          if ( v22 ) /*0x7102f0*/
            (*(void (__stdcall **)(int))(*(_DWORD *)v22 + 8))(v22); /*0x7102f6*/
        }
        *(_DWORD *)(m_Size + 684) = (v6[5] & 1) != 0 ? v6 : 0;
        *((v6[5] & 1) != 0 ? v6 + 172 : (int *)688) = m_Size;
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(m_Size + 684) + 1152))( /*0x710326*/
          *(_DWORD *)(m_Size + 684),
          m_Size,
          1);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(m_Size + 684) + 336))(*(_DWORD *)(m_Size + 684)); /*0x710334*/
        v23 = (int *)v6[373]; /*0x71033a*/
        if ( v23 ) /*0x710342*/
          TeamClass::LiberateMember_Start(v23, (int)v6, 0xFFFFFFFF, 0); /*0x710349*/
        *((_BYTE *)v6 + 1709) = 1; /*0x710352*/
        Member = Team::GetMember((Team *)v6, 0); /*0x710359*/
        if ( Member && (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 ) /*0x71036c*/
          (*(void (__thiscall **)(int *, int))(*v6 + 640))(v6, 3); /*0x710374*/
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(m_Size + 684) + 488))(*(_DWORD *)(m_Size + 684), 5, 1); /*0x710386*/
        v25 = *(_DWORD **)(m_Size + 684); /*0x71038c*/
        if ( !*(_BYTE *)(v25[135] + 492) && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v25 + 132))(v25) + 1516) ) /*0x7103aa*/
        {
          v26 = *(_DWORD **)(m_Size + 684); /*0x7103b4*/
          if ( !*(_BYTE *)(*(_DWORD *)(v26[135] + 52) + 422) ) /*0x7103c3*/
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v26 + 488))(v26, 15, 0); /*0x7103d5*/
        }
      }
      if ( ppv ) /*0x7103e1*/
        (*(void (__stdcall **)(int))(*(_DWORD *)ppv + 8))(ppv); /*0x7103e6*/
      if ( v28.m_Data ) /*0x7103ef*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v28.m_Data + 8))(v28.m_Data); /*0x7103f4*/
    }
    if ( *(_DWORD *)v28.__pad_0 ) /*0x7103fd*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v28.__pad_0 + 8))(*(_DWORD *)v28.__pad_0); /*0x710402*/
  }
}



// ==== 0x00710410  ObjectClass::ClearPointerRefs  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::ClearPointerRefs(TechnoClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  if ( v2 == this->behindAnim ) /*0x71041f*/
    this->behindAnim = 0; /*0x710421*/
  if ( v2 == this->drainAnim ) /*0x71042d*/
    this->drainAnim = 0; /*0x71042f*/
  if ( v2 == this->mindControlRingAnim ) /*0x71043b*/
    this->mindControlRingAnim = 0; /*0x71043d*/
  if ( v2 == this->deployAnim ) /*0x71044c*/
    this->deployAnim = 0; /*0x71044e*/
  return ObjectClass::ResetPointerIfMatch(this); /*0x71045a*/
}



// ==== 0x00710460  TechnoClass::FreeCaptureManager  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::FreeCaptureManager(TechnoClass *this)
{
  CaptureManagerClass *captureManager; // ecx
  int result; // eax

  captureManager = this->captureManager; /*0x710460*/
  if ( captureManager ) /*0x710468*/
    return CaptureManager::FreeAll((CaptureManager *)captureManager); /*0x71046a*/
  return result; /*0x71046f*/
}



// ==== 0x00710470  TechnoClass::EnteredOpenTopped  this=TechnoClass  sig=csp ====
char __stdcall TechnoClass::EnteredOpenTopped(int a1)
{
  int v1; // eax
  char result; // al

  if ( a1 ) /*0x710477*/
  {
    v1 = *(_DWORD *)a1; /*0x710479*/
    *(_BYTE *)(a1 + 130) = 1; /*0x71047d*/
    (*(void (__thiscall **)(int))(v1 + 976))(a1); /*0x710484*/
    return ObjectClass::SetDeployState(a1, 0); /*0x710492*/
  }
  return result; /*0x710497*/
}



// ==== 0x007104A0  TechnoClass::ExitedOpenTopped  this=ObjectClass  sig=csp ====
int __stdcall TechnoClass::ExitedOpenTopped(int a1)
{
  int result; // eax

  result = a1; /*0x7104a0*/
  if ( a1 ) /*0x7104a6*/
    *(_BYTE *)(a1 + 130) = 0; /*0x7104a8*/
  return result; /*0x7104af*/
}



// ==== 0x007104C0  TechnoClass::MarkPassengersAsExited  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::MarkPassengersAsExited(TechnoClass *this)
{
  int result; // eax

  result = CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x7104c6*/
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
int __thiscall FootClass::UpdatePassengerCoords(FootClass *this)
{
  int *location; // edi
  int DB; // esi
  int result; // eax
  _DWORD v4[3]; // [esp+8h] [ebp-Ch] BYREF

  location = this->?; /*0x710502*/
  DB = CCINIClass::GetDB((CCINIClass *)this->?); /*0x710508*/
  result = *location; /*0x71050c*/
  v4[0] = *location; /*0x71050e*/
  v4[1] = location[1]; /*0x710515*/
  v4[2] = location[2]; /*0x71051c*/
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



// ==== 0x00710550  CCINIClass::IterateNodes  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::IterateNodes(CCINIClass *this, int a2)
{
  int result; // eax
  int v3; // esi

  result = CCINIClass::GetDB((CCINIClass *)((char *)this + 276)); /*0x710558*/
  v3 = result; /*0x71055d*/
  if ( result ) /*0x710561*/
  {
    do /*0x71057d*/
    {
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 968))(v3, a2); /*0x71056c*/
      v3 = *(_DWORD *)(v3 + 48); /*0x710572*/
    }
    while ( v3 && (*(_BYTE *)(v3 + 20) & 4) != 0 ); /*0x71057d*/
  }
  return result; /*0x71057f*/
}



// ==== 0x007105E0  BuildingClass::IsBeingRepairedOrCaptured  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsBeingRepairedOrCaptured(BuildingClass *this)
{
  return this->? || this->?; /*0x7105f6*/
}



// ==== 0x00710670  TechnoClass::OnCellPlacementComplete  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::OnCellPlacementComplete(TechnoClass *this)
{
  int result; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v4; // eax
  _DWORD v5[3]; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v6; // [esp+18h] [ebp+4h]

  CellClass::AddObject((CellClass *)this->passengers, v6); /*0x710682*/
  if ( v6 ) /*0x710689*/
  {
    result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x71068f*/
    if ( *(_DWORD *)(result + 1380) != -1 ) /*0x71069c*/
    {
      v5[0] = this->?[0]; /*0x7106ac*/
      vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x7106b0*/
      v5[1] = this->?[1]; /*0x7106b5*/
      v5[2] = this->?[2]; /*0x7106bc*/
      v4 = vtable0[33](this); /*0x7106c2*/
      return (int)PlayAudioAt2(*(_DWORD *)(v4 + 1380), v5, 0); /*0x7106d0*/
    }
  }
  return result; /*0x7106d5*/
}



// ==== 0x007106E0  TechnoClass::ScalarDtor  this=TechnoClass  sig=csp ====
void *__thiscall TechnoClass::ScalarDtor(TechnoClass *this, char a2)
{
  TechnoClass::DTOR((int)this); /*0x7106e3*/
  if ( (a2 & 1) != 0 ) /*0x7106ed*/
    __3_YAXPAX_Z(this); /*0x7106f0*/
  return this; /*0x7106fa*/
}



// ==== 0x00710700  Coord::Divide  this=Coord  sig=csp ====
int *__thiscall Coord::Divide(Coord *this, int *a2, int a3)
{
  int v4; // ebx
  int v5; // eax

  if ( a3 ) /*0x710708*/
  {
    v4 = *(_DWORD *)&this->Coord_field_0x2[2] / a3; /*0x71072f*/
    v5 = (int)this->Coord_field_0x8 / a3; /*0x710735*/
    *a2 = *(_DWORD *)this->__pad_0 / a3; /*0x71073d*/
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
int __thiscall SortedStateVector::BinarySearch(SortedStateVector *this, int *a2)
{
  int result; // eax
  SortedStateVector v4; // edi
  int v5; // ebx
  int v6; // ecx
  int v7; // esi

  result = *((_DWORD *)this + 1); /*0x7107e3*/
  if ( result ) /*0x7107e8*/
  {
    if ( !*((_BYTE *)this + 12) ) /*0x7107ee*/
    {
      qsort(*(void **)this, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_710860); /*0x710800*/
      *((_DWORD *)this + 4) = 0; /*0x710808*/
      *((_BYTE *)this + 12) = 1; /*0x71080f*/
    }
    v4 = *this; /*0x710819*/
    v5 = *a2; /*0x71081b*/
    v6 = *((_DWORD *)this + 1); /*0x71081d*/
    if ( v6 <= 0 ) /*0x710822*/
      return 0; /*0x71084e*/
    while ( 1 ) /*0x71082b*/
    {
      v7 = *(_DWORD *)(*(_DWORD *)&v4 + 8 * (v6 / 2)); /*0x71082b*/
      if ( v7 <= v5 ) /*0x710833*/
      {
        if ( v7 == v5 ) /*0x710839*/
          return *(_DWORD *)&v4 + 8 * (v6 / 2); /*0x710853*/
        *(_DWORD *)&v4 += 8 * (v6 / 2) + 8; /*0x71083b*/
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
  dbl_B0EB60 = Math::Sqrt(v0 + v0); /*0x7108fe*/
}



// ==== 0x00710910  sub_710910  this=-  sig=ida-proto ====
void sub_710910()
{
  dbl_B0EBB0 = dbl_B0EB60 / 60.0; /*0x71091c*/
}



// ==== 0x00710930  sub_710930  this=-  sig=ida-proto ====
void sub_710930()
{
  dbl_B0EB98 = 1.0 / dbl_B0EBB0; /*0x71093c*/
}



// ==== 0x00710950  sub_710950  this=-  sig=ida-proto ====
void sub_710950()
{
  dbl_B0EB90 = 0.0174532925199433 * 45.0; /*0x71095c*/
}



// ==== 0x00710970  sub_710970  this=-  sig=ida-proto ====
void sub_710970()
{
  dbl_B0EB68 = 0.0174532925199433 * 60.0; /*0x71097c*/
}



// ==== 0x00710990  sub_710990  this=-  sig=ida-proto ====
void sub_710990()
{
  dbl_B0EB40 = 0.0174532925199433 * 90.0; /*0x71099c*/
}



// ==== 0x007109B0  sub_7109B0  this=-  sig=ida-proto ====
__int64 sub_7109B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0EB40 - dbl_B0EB68); /*0x7109c2*/
  result = Math::RoundToInt(v0 * dbl_B0EB60 * 0.5); /*0x7109d6*/
  dword_B0EBB8 = result; /*0x7109db*/
  return result; /*0x7109e0*/
}



// ==== 0x007109F0  sub_7109F0  this=-  sig=ida-proto ====
void sub_7109F0()
{
  dbl_B0EB70 = Math::ArcTan((double)dword_B0EBB8 * 0.00390625); /*0x710a07*/
}



// ==== 0x00710A20  sub_710A20  this=-  sig=ida-proto ====
void sub_710A20()
{
  dbl_B0EB88 = Math::ArcTan((double)(2 * dword_B0EBB8) / dbl_B0EB60); /*0x710a42*/
}



// ==== 0x00710A50  sub_710A50  this=-  sig=ida-proto ====
__int64 sub_710A50()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0EBB8) + 0.5); /*0x710a6b*/
  dword_B0EBAC = result; /*0x710a70*/
  return result; /*0x710a76*/
}



// ==== 0x00710A80  sub_710A80  this=-  sig=ida-proto ====
int sub_710A80()
{
  word_B0EB58 = 0; /*0x710a82*/
  word_B0EB5A = 0; /*0x710a88*/
  return 0; /*0x710a8e*/
}



// ==== 0x00710A90  sub_710A90  this=-  sig=ida-proto ====
int sub_710A90()
{
  dword_B0EB78 = 0; /*0x710a92*/
  dword_B0EB7C = 0; /*0x710a97*/
  dword_B0EB80 = 0; /*0x710a9c*/
  return 0; /*0x710aa1*/
}



// ==== 0x00710AB0  sub_710AB0  this=-  sig=ida-proto ====
int sub_710AB0()
{
  dword_B0EBA8 = 0; /*0x710ab5*/
  dword_B0EBA0 = 128; /*0x710abf*/
  dword_B0EBA4 = 128; /*0x710ac4*/
  return 128; /*0x710ac9*/
}



// ==== 0x00710AD0  sub_710AD0  this=-  sig=ida-proto ====
int sub_710AD0()
{
  dword_B0EB48 = 0; /*0x710ad2*/
  dword_B0EB4C = 0; /*0x710ad7*/
  dword_B0EB50 = 0; /*0x710adc*/
  dword_B0EB54 = 0; /*0x710ae1*/
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
  this->u8_A5 = 1; /*0x710b02*/
  this->u8_A6 = 0; /*0x710b0e*/
  this->u8_A7 = 0; /*0x710b14*/
  this->ImageAllocated = 0; /*0x710b1c*/
  this->q0A9 = 0; /*0x710b28*/
  this->q0AA = 0; /*0x710b2f*/
  this->VoiceEnter = 0; /*0x710b36*/
  *(_DWORD *)(this + 686) = 0; /*0x710b3d*/
  *(_DWORD *)(this + 690) = 0; /*0x710b43*/
  *(_DWORD *)(this + 694) = 0; /*0x710b4b*/
  *(_DWORD *)(this + 698) = 0; /*0x710b51*/
  this->VoiceHarvest = 0; /*0x710b57*/
  this->MainVoxel = 0; /*0x710b5e*/
  this->u8_B1 = 0; /*0x710b64*/
  this->u8_B2 = 0; /*0x710b6a*/
  this->u8_B3 = 0; /*0x710b70*/
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
  this->q304 = 1063281229; /*0x710bc6*/
  this->AccelerationFactor = -343597384; /*0x710bd0*/
  this->q0C3 = 1067366481; /*0x710bda*/
  this->u32_C4 = 7; /*0x710be4*/
  VoxelAnimTypeVector::Constructor(0, 0); /*0x710bee*/
  this->q324 = 0; /*0x710bf8*/
  this->q328 = 10; /*0x710bfb*/
  this->DebrisTypes = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x710bfe*/
  VectorClass::Construct((_DWORD *)this + 204, 0, 0); /*0x710c0f*/
  this->q344 = 10; /*0x710c14*/
  this->q0D0 = 0; /*0x710c17*/
  this->q0CC = &TypeList<int>::`vftable'; /*0x710c1a*/
  this->Locomotor = 1247291207; /*0x710c2d*/
  this->u32_D4 = 298948665; /*0x710c39*/
  this->q354 = -1610610249; /*0x710c42*/
  this->q358 = -777003740; /*0x710c4b*/
  this->q0D8 = 0; /*0x710c4e*/
  this->q364 = 0; /*0x710c54*/
  this->unknown_double_368 = 0; /*0x710c5a*/
  this->q36C = 0; /*0x710c60*/
  this->u32_DC = 0; /*0x710c6b*/
  this->q374 = 1072693248; /*0x710c71*/
  this->PhysicalSize = 0; /*0x710c77*/
  this->u32_37C = 0x40000000; /*0x710c7d*/
  this->q0E0 = 0; /*0x710c87*/
  this->q384 = 1072693248; /*0x710c8d*/
  this->SizeLimit = 0; /*0x710c93*/
  this->q38C = 0; /*0x710c99*/
  this->HoverAttack = 0; /*0x710c9f*/
  this->VHPScan = 0; /*0x710ca5*/
  this->unknown_int_398 = 15; /*0x710cab*/
  this->q0E8 = 942502757; /*0x710cb5*/
  this->u32_3A4 = 1071694162; /*0x710cbf*/
  this->PitchSpeed = 0; /*0x710cc9*/
  this->q3AC = 1070596096; /*0x710ccf*/
  this->q0EC = 1256670343; /*0x710cd9*/
  this->u32_3B4 = 1071011608; /*0x710ce3*/
  this->BuildLimit = 0x7FFFFFFF; /*0x710cf0*/
  this->Category = -1; /*0x710cfa*/
  this->q0F0 = 0; /*0x710d00*/
  this->u8_F2 = 0; /*0x710d06*/
  this->u8_F3 = 0; /*0x710d0c*/
  this->q0F4 = 8; /*0x710d12*/
  this->u8_F5 = 0; /*0x710d1c*/
  this->PipsDrawForAll = 0; /*0x710d22*/
  this->q0F7 = 70; /*0x710d28*/
  this->q0F8 = 0; /*0x710d33*/
  this->q0F9 = 0; /*0x710d40*/
  VectorClass::BuildingTypeConstructor((_DWORD *)this + 250, 0, 0); /*0x710d46*/
  this->u32_3FC = 10; /*0x710d4b*/
  this->u32_3F8 = 0; /*0x710d51*/
  this->Dock = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x710d57*/
  this->DeploysInto = 0; /*0x710d61*/
  this->UndeploysInto = 0; /*0x710d67*/
  this->PowersUnit = 0; /*0x710d6e*/
  this->PoweredUnit = 0; /*0x710d7b*/
  VectorClass::Construct((_DWORD *)this + 261, 0, 0); /*0x710d81*/
  this->q428 = 10; /*0x710d8e*/
  this->ptr_424 = 0; /*0x710d94*/
  this->VoiceSelect = &TypeList<int>::`vftable'; /*0x710d9a*/
  VectorClass::Construct((_DWORD *)this + 268, 0, 0); /*0x710da4*/
  this->q111 = 10; /*0x710db1*/
  this->q110 = 0; /*0x710db7*/
  this->q10C = &TypeList<int>::`vftable'; /*0x710dbd*/
  VectorClass::Construct((_DWORD *)this + 275, 0, 0); /*0x710dc7*/
  this->q118 = 10; /*0x710dd4*/
  this->q45C = 0; /*0x710dda*/
  this->VoiceSelectDeactivated = &TypeList<int>::`vftable'; /*0x710de0*/
  VectorClass::Construct((_DWORD *)this + 282, 0, 0); /*0x710dea*/
  this->u32_47C = 10; /*0x710df7*/
  this->q478 = 0; /*0x710dfd*/
  this->VoiceMove = &TypeList<int>::`vftable'; /*0x710e03*/
  VectorClass::Construct((_DWORD *)this + 289, 0, 0); /*0x710e0d*/
  this->q498 = 10; /*0x710e1a*/
  this->ptr_494 = 0; /*0x710e20*/
  this->VoiceAttack = &TypeList<int>::`vftable'; /*0x710e26*/
  VectorClass::Construct((_DWORD *)this + 296, 0, 0); /*0x710e30*/
  this->q4B4 = 10; /*0x710e3d*/
  this->q12C = 0; /*0x710e43*/
  this->q128 = &TypeList<int>::`vftable'; /*0x710e49*/
  VectorClass::Construct((_DWORD *)this + 303, 0, 0); /*0x710e53*/
  this->q134 = 10; /*0x710e58*/
  this->q4CC = 0; /*0x710e5e*/
  this->VoiceDie = &TypeList<int>::`vftable'; /*0x710e6c*/
  VectorClass::Construct((_DWORD *)this + 310, 0, 0); /*0x710e76*/
  this->u32_4EC = 10; /*0x710e83*/
  this->u32_4E8 = 0; /*0x710e89*/
  this->VoiceFeedback = &TypeList<int>::`vftable'; /*0x710e8f*/
  VectorClass::Construct((_DWORD *)this + 317, 0, 0); /*0x710e99*/
  this->q508 = 10; /*0x710ea6*/
  this->q504 = 0; /*0x710eac*/
  this->MoveSound = &TypeList<int>::`vftable'; /*0x710eb2*/
  VectorClass::Construct((_DWORD *)this + 324, 0, 0); /*0x710ebc*/
  this->q524 = 10; /*0x710ec1*/
  this->q148 = 0; /*0x710ec7*/
  this->q144 = &TypeList<int>::`vftable'; /*0x710ecd*/
  this->AuxSound1 = -1; /*0x710ed7*/
  this->NoSpawnAlt = -1; /*0x710edd*/
  this->q14D = -1; /*0x710ee3*/
  this->DamageSound = -1; /*0x710ee9*/
  this->ImpactWaterSound = -1; /*0x710eef*/
  this->q150 = -1; /*0x710ef5*/
  this->CrashingSound = -1; /*0x710efb*/
  this->SinkingSound = -1; /*0x710f01*/
  this->VoiceFalling = -1; /*0x710f07*/
  this->q154 = -1; /*0x710f0d*/
  this->VoiceSinking = -1; /*0x710f13*/
  this->VoiceEnter = -1; /*0x710f19*/
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
  this->EnterGrinderSound = -1; /*0x710f81*/
  this->LeaveGrinderSound = -1; /*0x710f87*/
  this->q168 = -1; /*0x710f8d*/
  this->LeaveBioReactorSound = -1; /*0x710f93*/
  this->ActivateSound = -1; /*0x710f99*/
  this->q16B = -1; /*0x710f9f*/
  this->q16C = -1; /*0x710fa5*/
  this->q16D = 0; /*0x710fab*/
  this->GuardRange = 0; /*0x710fb1*/
  this->q16F = 0; /*0x710fb7*/
  this->q170 = 0; /*0x710fbd*/
  AnimTypeVector::Constructor((_DWORD *)this + 369, 0, 0); /*0x710fc3*/
  this->q5D8 = 10; /*0x710fc8*/
  this->q5D4 = 0; /*0x710fce*/
  this->DebrisAnims = &TypeList<AnimTypeClass const *>::`vftable'; /*0x710fd4*/
  this->q178 = 0; /*0x710fde*/
  this->OpenTopped = 0; /*0x710fe4*/
  this->Sight = 0; /*0x710fea*/
  this->ResourceGatherer = 0; /*0x710ff0*/
  this->ResourceDestination = 0; /*0x710ff6*/
  this->RevealToAll = 0; /*0x710ffc*/
  this->Drainable = 0; /*0x711002*/
  this->q17C = 0; /*0x711008*/
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
  this->q18C = 0; /*0x711075*/
  this->TechLevel = 255; /*0x711082*/
  VectorClass::Construct((_DWORD *)this + 398, 0, 0); /*0x71108c*/
  this->q64C = 10; /*0x711099*/
  this->q648 = 0; /*0x71109f*/
  this->Prerequisite = &TypeList<int>::`vftable'; /*0x7110a5*/
  VectorClass::Construct((_DWORD *)this + 405, 0, 0); /*0x7110af*/
  this->VeteranAbilities = 10; /*0x7110b8*/
  this->q199 = 0; /*0x7110be*/
  this->PrerequisiteOverride = &TypeList<int>::`vftable'; /*0x7110c4*/
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
  if ( &g_INI_DefaultBuffer ) /*0x7111b9*/
  {
    strncpy(this + 1750, &g_INI_DefaultBuffer, 0x18u); /*0x7111c7*/
    this->q6EE = 0; /*0x7111cf*/
  }
  else
  {
    this->CameoFile = 0; /*0x7111bb*/
  }
  this->u32_1BC = 0; /*0x7111da*/
  this->CameoAllocated = 0; /*0x7111e2*/
  if ( &g_INI_DefaultBuffer ) /*0x7111ee*/
  {
    strncpy(this + 1781, &g_INI_DefaultBuffer, 0x18u); /*0x7111fc*/
    this->q70D = 0; /*0x711204*/
  }
  else
  {
    this->AltCameoFile = 0; /*0x7111f0*/
  }
  this->u32_1C4 = 0; /*0x71120a*/
  this->AltCameoAllocated = 0; /*0x711210*/
  this->RotCount = 0; /*0x711216*/
  this->ROT = 0; /*0x71121c*/
  this->u32_1C8 = 0; /*0x711222*/
  this->CanBeHidden = 1; /*0x711229*/
  this->Points2 = 0; /*0x711237*/
  AnimTypeVector::Constructor((_DWORD *)this + 459, 0, 0); /*0x71123d*/
  this->u32_1D0 = 10; /*0x71124a*/
  this->u32_73C = 0; /*0x711250*/
  this->Explosion = &TypeList<AnimTypeClass const *>::`vftable'; /*0x711256*/
  AnimTypeVector::Constructor((_DWORD *)this + 466, 0, 0); /*0x711260*/
  this->q75C = 10; /*0x711265*/
  this->ptr_758 = 0; /*0x71126b*/
  this->DestroyAnim = &TypeList<AnimTypeClass const *>::`vftable'; /*0x711271*/
  this->NaturalParticleSystem = 0; /*0x71127b*/
  this->NaturalParticleSystemLocation = 0; /*0x711282*/
  this->u32_76C = 0; /*0x711288*/
  this->u32_1DC = 0; /*0x71128e*/
  this->RefinerySmokeParticleSystem = 0; /*0x71129b*/
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112a1*/
  this->q78C = 10; /*0x7112ae*/
  this->VoxelAnimList_Embed = 0; /*0x7112b4*/
  this->DamageParticleSystems = &TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x7112ba*/
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112c4*/
  this->q7A8 = 10; /*0x7112c9*/
  this->q1E9 = 0; /*0x7112cf*/
  this->DestroyParticleSystems = &TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x7112d5*/
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
  this->q32C = 1; /*0x71142a*/
  this->unknown_bool_CB4 = 0; /*0x711430*/
  this->BarrelAnimData = 2; /*0x711436*/
  this->u32_CBC = 1; /*0x71143c*/
  this->DebrisMaximums = 1; /*0x711442*/
  this->u32_CC4 = 1; /*0x711448*/
  this->unknown_bool_CC8 = 0; /*0x71144e*/
  this->qCCC = 1; /*0x711454*/
  this->qCCD = 0; /*0x71145a*/
  this->qCCE = 0; /*0x711460*/
  this->u32_CCF = 0; /*0x711466*/
  this->IntList_A_Items = 0; /*0x71146c*/
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
  this->u32_350 = 0; /*0x71155a*/
  this->JumpjetTurnRate = 0; /*0x711560*/
  this->JumpjetSpeed = 0; /*0x711566*/
  this->JumpjetClimb = 0; /*0x71156c*/
  this->q354 = -1; /*0x711572*/
  this->qD54 = 0; /*0x711578*/
  this->JumpjetAccel = 0; /*0x71157e*/
  this->JumpjetWobbles = 0; /*0x711584*/
  this->q358 = 0; /*0x71158a*/
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
  this->vtable4 = &TechnoTypeClass::`vftable'; /*0x71169a*/
  this->qDD0 = 0; /*0x7116a7*/
  this->q234 = 1; /*0x7116ad*/
  (*(void (__thiscall **)(char *))(this->DebrisTypes + 12))(this + 788); /*0x7116b6*/
  (*(void (__thiscall **)(char *))(this->DebrisAnims + 12))(this + 1476); /*0x7116c5*/
  (*(void (__thiscall **)(char *))(this->q0CC + 12))(this + 816); /*0x7116d4*/
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
  this->q36C = 0; /*0x711763*/
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
  if ( dword_B0F680 < dword_B0F678 /*0x7117c3*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F684 + dword_B0F678,
         0) )
  {
    v15 = dword_B0F680++; /*0x7117d0*/
    *((_DWORD *)dword_B0F674 + v15) = this; /*0x7117df*/
  }
  if ( dword_A8EB10 < dword_A8EB08 /*0x711816*/
    || (byte_A8EB0D || !dword_A8EB08)
    && dword_A8EB14 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_A8EB00 + 8))(
         &stru_A8EB00,
         dword_A8EB14 + dword_A8EB08,
         0) )
  {
    v16 = dword_A8EB10++; /*0x711823*/
    *((_DWORD *)dword_A8EB04 + v16) = this; /*0x711832*/
  }
  return this; /*0x711837*/
}



// ==== 0x00711840  TechnoTypeClass::Construct  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoTypeClass_Constructor(int this, int a2)
{
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // edx

  ObjectTypeClass::Construct((_DWORD *)this, a2); /*0x71184b*/
  TechnoTypeClass::Constructor_0(a2); /*0x711859*/
  *(_DWORD *)(this + 788) = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x71185e*/
  IntDynamicVector::Construct((_DWORD *)(this + 816), a2); /*0x71186d*/
  *(_DWORD *)(this + 816) = &TypeList<int>::`vftable'; /*0x711872*/
  *(_DWORD *)(this + 960) = 0; /*0x711883*/
  TechnoTypeClass::Constructor_1(a2); /*0x711889*/
  *(_DWORD *)(this + 1000) = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x71188e*/
  IntDynamicVector::Construct((_DWORD *)(this + 1044), a2); /*0x71189e*/
  *(_DWORD *)(this + 1044) = &TypeList<int>::`vftable'; /*0x7118a3*/
  IntDynamicVector::Construct((_DWORD *)(this + 1072), a2); /*0x7118b3*/
  *(_DWORD *)(this + 1072) = &TypeList<int>::`vftable'; /*0x7118b8*/
  IntDynamicVector::Construct((_DWORD *)(this + 1100), a2); /*0x7118c8*/
  *(_DWORD *)(this + 1100) = &TypeList<int>::`vftable'; /*0x7118cd*/
  IntDynamicVector::Construct((_DWORD *)(this + 1128), a2); /*0x7118dd*/
  *(_DWORD *)(this + 1128) = &TypeList<int>::`vftable'; /*0x7118e2*/
  IntDynamicVector::Construct((_DWORD *)(this + 1156), a2); /*0x7118f2*/
  *(_DWORD *)(this + 1156) = &TypeList<int>::`vftable'; /*0x7118f7*/
  IntDynamicVector::Construct((_DWORD *)(this + 1184), a2); /*0x711907*/
  *(_DWORD *)(this + 1184) = &TypeList<int>::`vftable'; /*0x71190c*/
  IntDynamicVector::Construct((_DWORD *)(this + 1212), a2); /*0x71191c*/
  *(_DWORD *)(this + 1212) = &TypeList<int>::`vftable'; /*0x711921*/
  IntDynamicVector::Construct((_DWORD *)(this + 1240), a2); /*0x711931*/
  *(_DWORD *)(this + 1240) = &TypeList<int>::`vftable'; /*0x711936*/
  IntDynamicVector::Construct((_DWORD *)(this + 1268), a2); /*0x711946*/
  *(_DWORD *)(this + 1268) = &TypeList<int>::`vftable'; /*0x71194b*/
  IntDynamicVector::Construct((_DWORD *)(this + 1296), a2); /*0x71195b*/
  *(_DWORD *)(this + 1296) = &TypeList<int>::`vftable'; /*0x711960*/
  ObjectTypeClass::CheckFlag(a2); /*0x711970*/
  *(_DWORD *)(this + 1476) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x711975*/
  IntDynamicVector::Construct((_DWORD *)(this + 1592), a2); /*0x711985*/
  *(_DWORD *)(this + 1592) = &TypeList<int>::`vftable'; /*0x71198a*/
  IntDynamicVector::Construct((_DWORD *)(this + 1620), a2); /*0x71199a*/
  *(_DWORD *)(this + 1620) = &TypeList<int>::`vftable'; /*0x71199f*/
  *(_BYTE *)(this + 1750) = 0; /*0x7119ac*/
  *(_BYTE *)(this + 1781) = 0; /*0x7119b5*/
  ObjectTypeClass::CheckFlag(a2); /*0x7119bb*/
  *(_DWORD *)(this + 1836) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x7119c0*/
  ObjectTypeClass::CheckFlag(a2); /*0x7119d0*/
  *(_DWORD *)(this + 1864) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x7119df*/
  TypeList::ParticleConstructor(0, 0); /*0x7119e6*/
  *(_DWORD *)(this + 1912) = &TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x7119eb*/
  TypeList::ParticleConstructor(0, 0); /*0x7119fb*/
  *(_DWORD *)(this + 1940) = &TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x711a0a*/
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
  *(_DWORD *)(this + 12) = &TechnoTypeClass::`vftable'; /*0x711a60*/
  v3 = dword_A8EB10; /*0x711a67*/
  v4 = 0; /*0x711a6c*/
  if ( dword_A8EB10 <= 0 ) /*0x711a70*/
  {
LABEL_5:
    if ( dword_A8EB10 >= dword_A8EB08 ) /*0x711a8c*/
    {
      if ( !byte_A8EB0D && dword_A8EB08 /*0x711ab1*/
        || dword_A8EB14 <= 0
        || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_A8EB00 + 8))(
              &stru_A8EB00,
              dword_A8EB14 + dword_A8EB08,
              0) )
      {
        return this; /*0x711ab6*/
      }
      v3 = dword_A8EB10; /*0x711ab8*/
    }
    dword_A8EB10 = v3 + 1; /*0x711ac6*/
    *((_DWORD *)dword_A8EB04 + v3) = this; /*0x711acb*/
    return this; /*0x711acb*/
  }
  v5 = dword_A8EB04; /*0x711a72*/
  while ( *v5 != this ) /*0x711a7a*/
  {
    ++v4; /*0x711a7c*/
    ++v5; /*0x711a7d*/
    if ( v4 >= dword_A8EB10 ) /*0x711a82*/
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
  *(_DWORD *)(this + 12) = &TechnoTypeClass::`vftable'; /*0x711b03*/
  if ( v2 && *(_DWORD *)(this + 1776) ) /*0x711b0c*/
  {
    __3_YAXPAX_Z(*(void **)(this + 1776)); /*0x711b17*/
    *(_DWORD *)(this + 1776) = 0; /*0x711b1f*/
    *(_BYTE *)(this + 1780) = 0; /*0x711b25*/
  }
  if ( *(_BYTE *)(this + 1812) && *(_DWORD *)(this + 1808) ) /*0x711b33*/
  {
    __3_YAXPAX_Z(*(void **)(this + 1808)); /*0x711b3e*/
    *(_DWORD *)(this + 1808) = 0; /*0x711b46*/
    *(_BYTE *)(this + 1812) = 0; /*0x711b4c*/
  }
  v17 = this; /*0x711b62*/
  v3 = (*(int (__thiscall **)(int *, int *))(dword_B0F670 + 16))(&dword_B0F670, &v17); /*0x711b66*/
  if ( v3 != -1 ) /*0x711b6c*/
    DynamicVector::RemoveItem(&dword_B0F670, v3); /*0x711b74*/
  v17 = this; /*0x711b89*/
  v4 = (*(int (__thiscall **)(int *, int *))(stru_A8EB00 + 16))(&stru_A8EB00, &v17); /*0x711b8d*/
  if ( v4 != -1 ) /*0x711b93*/
    TechnoTypeClass::RemoveItem(&stru_A8EB00, v4); /*0x711b9b*/
  *(_DWORD *)(this + 1940) = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x711ba7*/
  VectorClass::Cleanup(this + 1940); /*0x711bad*/
  *(_DWORD *)(this + 1912) = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x711bb8*/
  VectorClass::Cleanup(this + 1912); /*0x711bbe*/
  *(_DWORD *)(this + 1864) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x711bc9*/
  DynamicVectorClass::Destroy_Alt(this + 1864); /*0x711bcf*/
  *(_DWORD *)(this + 1836) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x711bda*/
  DynamicVectorClass::Destroy_Alt(this + 1836); /*0x711be0*/
  *(_DWORD *)(this + 1620) = &VectorClass<int>::`vftable'; /*0x711bf0*/
  VectorClass::Destroy(this + 1620); /*0x711bf2*/
  *(_DWORD *)(this + 1592) = &VectorClass<int>::`vftable'; /*0x711bfd*/
  VectorClass::Destroy(this + 1592); /*0x711bff*/
  *(_DWORD *)(this + 1476) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x711c0a*/
  DynamicVectorClass::Destroy_Alt(this + 1476); /*0x711c10*/
  *(_DWORD *)(this + 1296) = &VectorClass<int>::`vftable'; /*0x711c1b*/
  VectorClass::Destroy(this + 1296); /*0x711c1d*/
  *(_DWORD *)(this + 1268) = &VectorClass<int>::`vftable'; /*0x711c28*/
  VectorClass::Destroy(this + 1268); /*0x711c2a*/
  v5 = *(void **)(this + 1244); /*0x711c2f*/
  *(_DWORD *)(this + 1240) = &VectorClass<int>::`vftable'; /*0x711c35*/
  if ( v5 && *(_BYTE *)(this + 1253) ) /*0x711c3f*/
  {
    __3_YAXPAX_Z(v5); /*0x711c48*/
    *(_DWORD *)(this + 1244) = 0; /*0x711c50*/
  }
  *(_BYTE *)(this + 1253) = 0; /*0x711c56*/
  *(_DWORD *)(this + 1248) = 0; /*0x711c5c*/
  v6 = *(void **)(this + 1216); /*0x711c62*/
  *(_DWORD *)(this + 1212) = &VectorClass<int>::`vftable'; /*0x711c68*/
  if ( v6 && *(_BYTE *)(this + 1225) ) /*0x711c72*/
  {
    __3_YAXPAX_Z(v6); /*0x711c7b*/
    *(_DWORD *)(this + 1216) = 0; /*0x711c83*/
  }
  *(_BYTE *)(this + 1225) = 0; /*0x711c89*/
  *(_DWORD *)(this + 1220) = 0; /*0x711c8f*/
  v7 = *(void **)(this + 1188); /*0x711c95*/
  *(_DWORD *)(this + 1184) = &VectorClass<int>::`vftable'; /*0x711c9b*/
  if ( v7 && *(_BYTE *)(this + 1197) ) /*0x711ca5*/
  {
    __3_YAXPAX_Z(v7); /*0x711cae*/
    *(_DWORD *)(this + 1188) = 0; /*0x711cb6*/
  }
  *(_BYTE *)(this + 1197) = 0; /*0x711cbc*/
  *(_DWORD *)(this + 1192) = 0; /*0x711cc2*/
  v8 = *(void **)(this + 1160); /*0x711cc8*/
  *(_DWORD *)(this + 1156) = &VectorClass<int>::`vftable'; /*0x711cce*/
  if ( v8 && *(_BYTE *)(this + 1169) ) /*0x711cd8*/
  {
    __3_YAXPAX_Z(v8); /*0x711ce1*/
    *(_DWORD *)(this + 1160) = 0; /*0x711ce9*/
  }
  *(_BYTE *)(this + 1169) = 0; /*0x711cef*/
  *(_DWORD *)(this + 1164) = 0; /*0x711cf5*/
  v9 = *(void **)(this + 1132); /*0x711cfb*/
  *(_DWORD *)(this + 1128) = &VectorClass<int>::`vftable'; /*0x711d01*/
  if ( v9 && *(_BYTE *)(this + 1141) ) /*0x711d0b*/
  {
    __3_YAXPAX_Z(v9); /*0x711d14*/
    *(_DWORD *)(this + 1132) = 0; /*0x711d1c*/
  }
  *(_BYTE *)(this + 1141) = 0; /*0x711d22*/
  *(_DWORD *)(this + 1136) = 0; /*0x711d28*/
  v10 = *(void **)(this + 1104); /*0x711d2e*/
  *(_DWORD *)(this + 1100) = &VectorClass<int>::`vftable'; /*0x711d34*/
  if ( v10 && *(_BYTE *)(this + 1113) ) /*0x711d3e*/
  {
    __3_YAXPAX_Z(v10); /*0x711d47*/
    *(_DWORD *)(this + 1104) = 0; /*0x711d4f*/
  }
  *(_BYTE *)(this + 1113) = 0; /*0x711d55*/
  *(_DWORD *)(this + 1108) = 0; /*0x711d5b*/
  v11 = *(void **)(this + 1076); /*0x711d61*/
  *(_DWORD *)(this + 1072) = &VectorClass<int>::`vftable'; /*0x711d67*/
  if ( v11 && *(_BYTE *)(this + 1085) ) /*0x711d71*/
  {
    __3_YAXPAX_Z(v11); /*0x711d7a*/
    *(_DWORD *)(this + 1076) = 0; /*0x711d82*/
  }
  *(_BYTE *)(this + 1085) = 0; /*0x711d88*/
  *(_DWORD *)(this + 1080) = 0; /*0x711d8e*/
  v12 = *(void **)(this + 1048); /*0x711d94*/
  *(_DWORD *)(this + 1044) = &VectorClass<int>::`vftable'; /*0x711d9a*/
  if ( v12 && *(_BYTE *)(this + 1057) ) /*0x711da4*/
  {
    __3_YAXPAX_Z(v12); /*0x711dad*/
    *(_DWORD *)(this + 1048) = 0; /*0x711db5*/
  }
  *(_BYTE *)(this + 1057) = 0; /*0x711dbb*/
  *(_DWORD *)(this + 1052) = 0; /*0x711dc1*/
  v13 = *(void **)(this + 1004); /*0x711dc7*/
  *(_DWORD *)(this + 1000) = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x711dcd*/
  if ( v13 && *(_BYTE *)(this + 1013) ) /*0x711ddb*/
  {
    __3_YAXPAX_Z(v13); /*0x711de4*/
    *(_DWORD *)(this + 1004) = 0; /*0x711dec*/
  }
  *(_BYTE *)(this + 1013) = 0; /*0x711df2*/
  *(_DWORD *)(this + 1008) = 0; /*0x711df8*/
  v14 = *(void **)(this + 820); /*0x711dfe*/
  *(_DWORD *)(this + 816) = &VectorClass<int>::`vftable'; /*0x711e04*/
  if ( v14 && *(_BYTE *)(this + 829) ) /*0x711e0f*/
  {
    __3_YAXPAX_Z(v14); /*0x711e18*/
    *(_DWORD *)(this + 820) = 0; /*0x711e20*/
  }
  *(_BYTE *)(this + 829) = 0; /*0x711e26*/
  *(_DWORD *)(this + 824) = 0; /*0x711e2c*/
  v15 = *(void **)(this + 792); /*0x711e32*/
  *(_DWORD *)(this + 788) = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x711e38*/
  if ( v15 && *(_BYTE *)(this + 801) ) /*0x711e46*/
  {
    __3_YAXPAX_Z(v15); /*0x711e4f*/
    *(_DWORD *)(this + 792) = 0; /*0x711e57*/
  }
  *(_BYTE *)(this + 801) = 0; /*0x711e5f*/
  *(_DWORD *)(this + 796) = 0; /*0x711e65*/
  return ObjectTypeClass::Destruct(this); /*0x711e70*/
}



// ==== 0x00711E80  TechnoTypeClass::processWeaponFire  this=TechnoTypeClass  sig=csp ====
char __thiscall AbstractClass::processWeaponFire(TechnoTypeClass *this)
{
  return 1; /*0x711e82*/
}



// ==== 0x00711E90  TechnoTypeClass::CanAttackMove_IgnoreWeapon  this=TechnoTypeClass  sig=csp ====
bool __thiscall TechnoTypeClass::CanAttackMove_IgnoreWeapon(TechnoTypeClass *this)
{
  return *(_DWORD *)&this->?[1972] && !this->?[1508]; /*0x711ea6*/
}



// ==== 0x00711EB0  TechnoTypeClass::GetMember388  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoClass::GetMember388(TechnoTypeClass *this)
{
  return *(_DWORD *)&this->?[1324]; /*0x711eb6*/
}



// ==== 0x00711EC0  TechnoTypeClass::GetBuildCost  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoClass::GetBuildCost(TechnoTypeClass *this)
{
  int result; // eax

  if ( !this->?[2997] ) /*0x711ec0*/
    return *(_DWORD *)&this->?[1512]; /*0x711ec0*/
  result = 0x7FFFFFFF; /*0x711ed1*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x711ed6*/
    return *(_DWORD *)&this->?[1512]; /*0x711ed8*/
  return result; /*0x711ede*/
}



// ==== 0x00711EE0  TechnoTypeClass::ComputeBuildTime  this=TechnoTypeClass  sig=csp ====
double __thiscall TechnoTypeClass::ComputeBuildTime(TechnoTypeClass *this)
{
  double result; // st7

  result = (double)*(int *)&this->?[1324] * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5960) * 0.9; /*0x711ef1*/
  Math::RoundToInt(result); /*0x711ef7*/
  return result;
}



// ==== 0x00711F00  TechnoTypeClass::ComputeValueSimple  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoTypeClass::ComputeValueSimple(TechnoTypeClass *this, int a2)
{
  int result; // eax
  float ThreatMultiplier; // [esp+8h] [ebp-8h]
  float v5; // [esp+Ch] [ebp-4h]
  TechnoTypeClass *v6; // [esp+14h] [ebp+4h]

  if ( !a2 ) /*0x711f0d*/
    return (*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x711f52*/
  v5 = TechnoTypeClass::Dispatch((TechnoTypeClass *)a2, this); /*0x711f17*/
  ThreatMultiplier = TechnoTypeClass::GetThreatMultiplier((float *)a2, this); /*0x711f27*/
  v6 = (TechnoTypeClass *)(*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x711f31*/
  LOWORD(result) = Math::RoundToInt((double)(int)v6 * ThreatMultiplier * v5); /*0x711f41*/
  return result; /*0x711f46*/
}



// ==== 0x00711F60  TechnoTypeClass::ComputeValue  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoTypeClass::ComputeValue(TechnoTypeClass *this, void *a2, float a3)
{
  int result; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  float v9; // [esp+8h] [ebp-8h]
  float ThreatMultiplier; // [esp+Ch] [ebp-4h]
  TechnoTypeClass *v11; // [esp+14h] [ebp+4h]
  float v12; // [esp+18h] [ebp+8h]
  int v13; // [esp+18h] [ebp+8h]
  int v14; // [esp+18h] [ebp+8h]

  v9 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5944); /*0x711f76*/
  if ( LOBYTE(a3) ) /*0x711f7c*/
    v9 = 1.0; /*0x711f7e*/
  if ( a2 ) /*0x711f8c*/
  {
    v12 = TechnoTypeClass::Dispatch((TechnoTypeClass *)a2, this); /*0x711f9a*/
    ThreatMultiplier = TechnoTypeClass::GetThreatMultiplier((float *)a2, this); /*0x711fac*/
    if ( *(_DWORD *)&this->?[1328] ) /*0x711fa6*/
    {
      LOWORD(result) = Math::RoundToInt((double)*(int *)&this->?[1328] * v12); /*0x711fc0*/
    }
    else
    {
      v11 = (TechnoTypeClass *)(*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x711fd7*/
      LOWORD(v6) = Math::RoundToInt((double)(int)v11 * ThreatMultiplier * v12); /*0x711fe7*/
      v7 = v6; /*0x711fec*/
      v13 = v6; /*0x711ff0*/
      if ( (unsigned __int8)House::IsCurrentPlayer((House *)a2) ) /*0x711ff4*/
      {
        LOWORD(v8) = Math::RoundToInt((double)v13 * v9); /*0x712005*/
        return v8; /*0x71200a*/
      }
      return v7; /*0x71200c*/
    }
  }
  else
  {
    v14 = (*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x712020*/
    LOWORD(result) = Math::RoundToInt((double)v14 * v9); /*0x71202c*/
  }
  return result; /*0x711fc5*/
}



// ==== 0x00712040  TechnoTypeClass::SelectArtOrAlt  this=TechnoTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::SelectArtOrAlt(TechnoTypeClass *this)
{
  Object *v1; // eax
  int result; // eax

  v1 = dword_A83D4C; /*0x712040*/
  if ( !dword_A83D4C ) /*0x71204a*/
    return *(_DWORD *)&this->?[1548]; /*0x7120bf*/
  if ( dword_A83D4C[1].__pad_C[19] ) /*0x71204c*/
  {
    if ( (*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 44))(this) == 16 ) /*0x712060*/
    {
      result = *(_DWORD *)&this->?[1580]; /*0x712062*/
      if ( result ) /*0x71206a*/
      {
        if ( this->?[2986] ) /*0x71206c*/
          return result; /*0x712074*/
      }
    }
    v1 = dword_A83D4C; /*0x712076*/
  }
  if ( !v1 /*0x7120a1*/
    || !v1[1].__pad_C[20]
    || (*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 44))(this) != 40
    && ((*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 44))(this) != 7
     || !*(_DWORD *)&this->?[804]) )
  {
    return *(_DWORD *)&this->?[1548]; /*0x7120a1*/
  }
  result = *(_DWORD *)&this->?[1580]; /*0x7120ab*/
  if ( !result || !this->?[2986] ) /*0x7120b5*/
    return *(_DWORD *)&this->?[1548]; /*0x7120bd*/
  return result; /*0x7120c5*/
}



// ==== 0x007120D0  TechnoTypeClass::ComputeValue  this=TechnoTypeClass  sig=csp ====
int __thiscall ObjectClass::ComputeValue(TechnoTypeClass *this)
{
  int v2; // eax
  int result; // eax

  v2 = (*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x7120d7*/
  LOWORD(result) = Math::RoundToInt( /*0x712107*/
                     (double)(v2
                            / (this->ObjectTypeClass[40]
                             / *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5836)))
                   * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5840));
  if ( result <= 1 ) /*0x712111*/
    return 1; /*0x712113*/
  return result; /*0x71210c*/
}



// ==== 0x00712120  TechnoTypeClass::GetGameplayValue  this=TechnoTypeClass  sig=csp ====
int AircraftTypeClass::GetGameplayValue(TechnoTypeClass *this)
{
  return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5836); /*0x71212b*/
}



// ==== 0x00712130  BuildingClass::processCapture  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::processCapture(BuildingClass *this)
{
  int v1; // edx
  int v2; // ecx
  char result; // al

  v1 = *((_DWORD *)this + 550); /*0x712130*/
  if ( !v1 ) /*0x712138*/
    return 0; /*0x712138*/
  v2 = *((_DWORD *)this + 557); /*0x71213a*/
  result = 1; /*0x712140*/
  if ( v1 != v2 && *(int *)(v1 + 156) <= 1 && (!v2 || *(int *)(v2 + 156) <= 1) ) /*0x71215f*/
    return 0; /*0x712161*/
  return result; /*0x712163*/
}



// ==== 0x00712170  TechnoTypeClass::LoadExtras  this=TechnoTypeClass  sig=csp ====
int __userpurge ObjectTypeClass::LoadExtras@<eax>(TechnoTypeClass *this, double a2@<st0>, unsigned __int8 ***a3)
{
  int v3; // ecx
  int result; // eax
  int v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  char Bool_Overwrite; // al
  _DWORD *GUID_Overwrite; // eax
  int Int_Overwrite; // eax
  int v25; // eax
  char *i; // eax
  int Count; // edx
  int CapacityIncrement; // eax
  unsigned __int8 *inited; // eax
  int v30; // eax
  char *j; // eax
  int v32; // edx
  int unknown_18; // eax
  char v34; // al
  _DWORD *v35; // edi
  _DWORD *v36; // eax
  _DWORD *v37; // eax
  int v38; // ecx
  _DWORD *v39; // edi
  _DWORD *v40; // eax
  _DWORD *v41; // edi
  _DWORD *v42; // eax
  _DWORD *v43; // edi
  _DWORD *v44; // eax
  _DWORD *v45; // edi
  _DWORD *v46; // eax
  unsigned __int8 *v47; // eax
  int v48; // eax
  unsigned __int8 *v49; // eax
  int v50; // eax
  unsigned __int8 *v51; // eax
  int v52; // eax
  unsigned __int8 *v53; // eax
  int v54; // eax
  unsigned __int8 *v55;... [174146 chars total]



// ==== 0x00716150  TechnoTypeClass::ValidatePath  this=TechnoTypeClass  sig=csp ====
char __thiscall BuildingClass::ValidatePath(TechnoTypeClass *this, _WORD *a2, int a3)
{
  _WORD *v6; // esi
  bool v7; // bl
  _WORD *v8; // eax
  int *v9; // eax
  bool *v10; // eax
  int v11; // [esp-24h] [ebp-38h]
  int v12; // [esp-14h] [ebp-28h]
  char v13; // [esp+Bh] [ebp-9h]
  int v14; // [esp+Ch] [ebp-8h]
  __int16 v15[2]; // [esp+10h] [ebp-4h] BYREF
  char v16; // [esp+18h] [ebp+4h]

  if ( *(_DWORD *)a2 == *(_DWORD *)&word_B0EB58 ) /*0x716166*/
    return 0; /*0x71617c*/
  v6 = (_WORD *)(*(int (__thiscall **)(TechnoTypeClass *, int))(this->vtable0 + 144))(this, 1); /*0x71618d*/
  v13 = 0; /*0x716199*/
  v7 = (*(int (__thiscall **)(TechnoTypeClass *))(this->vtable0 + 44))(this) == 7; /*0x71619e*/
  v16 = 0; /*0x7161a3*/
  while ( v6 ) /*0x7161a8*/
  {
    if ( *v6 == 0x7FFF && v6[1] == 0x7FFF ) /*0x7161bb*/
      break; /*0x7161bb*/
    v8 = v6; /*0x7161c5*/
    v6 += 2; /*0x7161c7*/
    LOWORD(v14) = *v8 + *a2; /*0x7161d5*/
    HIWORD(v14) = a2[1] + v8[1]; /*0x7161da*/
    *(_DWORD *)v15 = v14; /*0x7161e5*/
    if ( v7 ) /*0x7161e9*/
    {
      v12 = this->SpeedType; /*0x7161fb*/
      v9 = (int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v15); /*0x716202*/
      if ( (unsigned __int8)CellClass::IsPassable(v9, v12, (int)this, a3) ) /*0x716209*/
        goto LABEL_11; /*0x716210*/
      v13 = 1; /*0x716212*/
    }
    else
    {
      v11 = this->SpeedType; /*0x71622f*/
      v10 = (bool *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v15); /*0x716236*/
      if ( (unsigned __int8)Cell::IsBuildable(v10, v11, 0, 0, -1, 0, -1, 1) ) /*0x71623d*/
      {
LABEL_11:
        v16 = 1; /*0x71624d*/
        continue; /*0x71624d*/
      }
      v13 = 1; /*0x716246*/
    }
  }
  if ( v7 && *((_DWORD *)this + 918) ) /*0x716260*/
    return v16; /*0x71626a*/
  else
    return v13 == 0; /*0x716280*/
}



// ==== 0x00716290  TechnoTypeClass::GetModeSpecificValue  this=TechnoTypeClass  sig=csp ====
int __thiscall ObjectClass::GetModeSpecificValue(TechnoTypeClass *this)
{
  int result; // eax

  switch ( *(_DWORD *)&this->?[752] )
  {
    case 1:
      result = *(_DWORD *)&this->?[1440]; /*0x7162a9*/
      break; /*0x7162af*/
    case 2:
      result = (*(int (__thiscall **)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 44))(this) != 16 ? 5 : 3;
      break; /*0x7162cf*/
    case 3:
      result = *(_DWORD *)&this->?[1276]; /*0x7162d0*/
      break; /*0x7162d6*/
    case 4:
      result = 10; /*0x7162a3*/
      break; /*0x7162a8*/
    case 5:
      result = *(_DWORD *)(*(_DWORD *)&this->?[1972] + 164); /*0x7162b6*/
      break; /*0x7162bc*/
    default:
      result = 0; /*0x7162d7*/
      break; /*0x7162d7*/
  }
  return result; /*0x7162a8*/
}



// ==== 0x007162F0  TechnoTypeClass::SaveLoad_Prefix  this=TechnoTypeClass  sig=csp ====
int __stdcall TechnoTypeClass::SaveLoad_Prefix(TechnoTypeClass *this, int a2)
{
  TypeList *v3; // ebp
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
  int *v29; // esi
  int v30; // ebx
  int *v31; // esi
  int v32; // ebx
  int i16; // esi
  int i17; // esi
  void *v35; // eax
  int v36; // [esp+280h] [ebp-210h] BYREF
  int v37; // [esp+284h] [ebp-20Ch] BYREF
  int i; // [esp+288h] [ebp-208h]
  char Filename[256]; // [esp+28Ch] [ebp-204h] BYREF
  char Buffer[260]; // [esp+38Ch] [ebp-104h] BYREF

  v3 = (TypeList *)&this->?[772]; /*0x716307*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[772] + 12))(&this->?[772]); /*0x71630f*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[560] + 12))(&this->?[560]); /*0x716320*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[1248] + 12))(&this->?[1248]); /*0x71632f*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[816] + 12))(&this->?[816]); /*0x71633e*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[844] + 12))(&this->?[844]); /*0x71634d*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[872] + 12))(&this->?[872]); /*0x71635c*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[900] + 12))(&this->?[900]); /*0x71636b*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[928] + 12))(&this->?[928]); /*0x71637a*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[956] + 12))(&this->?[956]); /*0x716389*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[984] + 12))(&this->?[984]); /*0x716398*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[1012] + 12))(&this->?[1012]); /*0x7163a7*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[1040] + 12))(&this->?[1040]); /*0x7163b6*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[1068] + 12))(&this->?[1068]); /*0x7163c5*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[1608] + 12))(&this->?[1608]); /*0x7163d4*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[1636] + 12))(&this->?[1636]); /*0x7163e3*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[1364] + 12))(&this->?[1364]); /*0x7163f2*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[1392] + 12))(&this->?[1392]); /*0x716401*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->?[588] + 12))(&this->?[588]); /*0x716410*/
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x71641c*/
  if ( result >= 0 ) /*0x716423*/
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[800]); /*0x716435*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[804]); /*0x716446*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[808]); /*0x716457*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[1664]); /*0x716468*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[1680]); /*0x716479*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this->JumpjetAccel); /*0x71648a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, this->SuppressionThreshold); /*0x71649b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->?[1]); /*0x7164ac*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[1344]); /*0x7164bd*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[1348]); /*0x7164ce*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[1492]); /*0x7164df*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->?[1496]); /*0x7164f0*/
    if ( this != (TechnoTypeClass *)-1000 ) /*0x7164f7*/
      TypeList::BuildingTypeConstructor(v3); /*0x7164fb*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x71650c*/
    for ( i = 0; i < v36; ++i ) /*0x71651d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x71652b*/
      DynamicVector::Add_Alt3((DynamicVector *)v3, &v37); /*0x716535*/
    }
    if ( this != (TechnoTypeClass *)-788 ) /*0x71654d*/
      TypeList::VoxelAnimConstructor((TypeList *)&this->?[560]); /*0x716551*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x716562*/
    for ( j = 0; j < v36; ++j ) /*0x71656d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x71657b*/
      DynamicVector::Add2((DynamicVector *)&this->?[560], &v37); /*0x716585*/
    }
    if ( this != (TechnoTypeClass *)-1476 ) /*0x716599*/
      AnimTypeList::Constructor((AnimTypeList *)&this->?[1248]); /*0x71659d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x7165ae*/
    for ( k = 0; k < v36; ++k ) /*0x7165b9*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x7165c7*/
      DynamicVector::Add_Alt4((DynamicVector *)&this->?[1248], &v37); /*0x7165d1*/
    }
    if ( this != (TechnoTypeClass *)-1044 ) /*0x7165e5*/
      TypeList::Construct((TypeList *)&this->?[816]); /*0x7165e9*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x7165fa*/
    for ( m = 0; m < v36; ++m ) /*0x716605*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x716613*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[816], &v37); /*0x71661d*/
    }
    if ( this != (TechnoTypeClass *)-1072 ) /*0x716631*/
      TypeList::Construct((TypeList *)&this->?[844]); /*0x716635*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x716646*/
    for ( n = 0; n < v36; ++n ) /*0x716651*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x71665f*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[844], &v37); /*0x716669*/
    }
    if ( this != (TechnoTypeClass *)-1100 ) /*0x71667d*/
      TypeList::Construct((TypeList *)&this->?[872]); /*0x716681*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x716692*/
    for ( ii = 0; ii < v36; ++ii ) /*0x71669d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x7166ab*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[872], &v37); /*0x7166b5*/
    }
    if ( this != (TechnoTypeClass *)-1128 ) /*0x7166c9*/
      TypeList::Construct((TypeList *)&this->?[900]); /*0x7166cd*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x7166de*/
    for ( jj = 0; jj < v36; ++jj ) /*0x7166e9*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x7166f7*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[900], &v37); /*0x716701*/
    }
    if ( this != (TechnoTypeClass *)-1156 ) /*0x716715*/
      TypeList::Construct((TypeList *)&this->?[928]); /*0x716719*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x71672a*/
    for ( kk = 0; kk < v36; ++kk ) /*0x716735*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x716743*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[928], &v37); /*0x71674d*/
    }
    if ( this != (TechnoTypeClass *)-1184 ) /*0x716761*/
      TypeList::Construct((TypeList *)&this->?[956]); /*0x716765*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x716776*/
    for ( mm = 0; mm < v36; ++mm ) /*0x716781*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x71678f*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[956], &v37); /*0x716799*/
    }
    if ( this != (TechnoTypeClass *)-1212 ) /*0x7167ad*/
      TypeList::Construct((TypeList *)&this->?[984]); /*0x7167b1*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x7167c2*/
    for ( nn = 0; nn < v36; ++nn ) /*0x7167cd*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x7167db*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[984], &v37); /*0x7167e5*/
    }
    if ( this != (TechnoTypeClass *)-1240 ) /*0x7167f9*/
      TypeList::Construct((TypeList *)&this->?[1012]); /*0x7167fd*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x71680e*/
    for ( i1 = 0; i1 < v36; ++i1 ) /*0x716819*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x716827*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[1012], &v37); /*0x716831*/
    }
    if ( this != (TechnoTypeClass *)-1268 ) /*0x716845*/
      TypeList::Construct((TypeList *)&this->?[1040]); /*0x716849*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x71685a*/
    for ( i2 = 0; i2 < v36; ++i2 ) /*0x716865*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x716873*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[1040], &v37); /*0x71687d*/
    }
    if ( this != (TechnoTypeClass *)-1296 ) /*0x716891*/
      TypeList::Construct((TypeList *)&this->?[1068]); /*0x716895*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x7168a6*/
    for ( i3 = 0; i3 < v36; ++i3 ) /*0x7168b1*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x7168bf*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[1068], &v37); /*0x7168c9*/
    }
    if ( this != (TechnoTypeClass *)-1836 ) /*0x7168dd*/
      AnimTypeList::Constructor((AnimTypeList *)&this->?[1608]); /*0x7168e1*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x7168f2*/
    for ( i4 = 0; i4 < v36; ++i4 ) /*0x7168fd*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x71690b*/
      DynamicVector::Add_Alt4((DynamicVector *)&this->?[1608], &v37); /*0x716915*/
    }
    if ( this != (TechnoTypeClass *)-1864 ) /*0x716929*/
      AnimTypeList::Constructor((AnimTypeList *)&this->?[1636]); /*0x71692d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x71693e*/
    for ( i5 = 0; i5 < v36; ++i5 ) /*0x716949*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x716957*/
      DynamicVector::Add_Alt4((DynamicVector *)&this->?[1636], &v37); /*0x716961*/
    }
    if ( this != (TechnoTypeClass *)-816 ) /*0x716975*/
      TypeList::Construct((TypeList *)&this->?[588]); /*0x716979*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x71698a*/
    for ( i6 = 0; i6 < v36; ++i6 ) /*0x716995*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x7169a3*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[588], &v37); /*0x7169ad*/
    }
    if ( this != (TechnoTypeClass *)-1592 ) /*0x7169c1*/
      TypeList::Construct((TypeList *)&this->?[1364]); /*0x7169c5*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x7169d6*/
    for ( i7 = 0; i7 < v36; ++i7 ) /*0x7169e1*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x7169ef*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[1364], &v37); /*0x7169f9*/
    }
    if ( this != (TechnoTypeClass *)-1620 ) /*0x716a0d*/
      TypeList::Construct((TypeList *)&this->?[1392]); /*0x716a11*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x716a22*/
    for ( i8 = 0; i8 < v36; ++i8 ) /*0x716a2d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x716a3b*/
      DynamicVector::Add_Alt((DynamicVector *)&this->?[1392], &v37); /*0x716a45*/
    }
    if ( this != (TechnoTypeClass *)-1912 ) /*0x716a59*/
      TechnoTypeClass::Constructor((TechnoTypeClass *)&this->?[1684]); /*0x716a5d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x716a6e*/
    for ( i9 = 0; i9 < v36; ++i9 ) /*0x716a79*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x716a87*/
      TypeList::PushBack((TypeList *)&this->?[1684], &v37); /*0x716a91*/
    }
    if ( this != (TechnoTypeClass *)-1940 ) /*0x716aa5*/
      TechnoTypeClass::Constructor((TechnoTypeClass *)&this->?[1712]); /*0x716aa9*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v36, 4, 0); /*0x716aba*/
    for ( i10 = 0; i10 < v36; ++i10 ) /*0x716ac5*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v37, 4, 0); /*0x716ad3*/
      TypeList::PushBack((TypeList *)&this->?[1712], &v37); /*0x716add*/
    }
    for ( i11 = 0; i11 < *(_DWORD *)&this->?[788]; ++i11 ) /*0x716af3*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&this->?[776] + 4 * i11)); /*0x716b04*/
    for ( i12 = 0; i12 < *(_DWORD *)&this->?[1624]; ++i12 ) /*0x716b1e*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&this->?[1612] + 4 * i12)); /*0x716b2f*/
    for ( i13 = 0; i13 < *(_DWORD *)&this->?[1652]; ++i13 ) /*0x716b49*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&this->?[1640] + 4 * i13)); /*0x716b5a*/
    for ( i14 = 0; i14 < *(_DWORD *)&this->?[576]; ++i14 ) /*0x716b74*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&this->?[564] + 4 * i14)); /*0x716b85*/
    for ( i15 = 0; i15 < *(_DWORD *)&this->?[1264]; ++i15 ) /*0x716b9f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&this->?[1252] + 4 * i15)); /*0x716bb0*/
    v29 = (int *)&this->?[1972]; /*0x716bc0*/
    v30 = 18; /*0x716bc6*/
    do /*0x716bda*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v29); /*0x716bd1*/
      v29 += 7; /*0x716bd6*/
      --v30; /*0x716bd9*/
    }
    while ( v30 ); /*0x716bda*/
    v31 = (int *)&this->?[2480]; /*0x716bdc*/
    v32 = 18; /*0x716be2*/
    do /*0x716bf6*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v31); /*0x716bed*/
      v31 += 7; /*0x716bf2*/
      --v32; /*0x716bf5*/
    }
    while ( v32 ); /*0x716bf6*/
    for ( i16 = 0; i16 < *(_DWORD *)&this->?[1700]; ++i16 ) /*0x716c04*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&this->?[1688] + 4 * i16)); /*0x716c15*/
    for ( i17 = 0; i17 < *(_DWORD *)&this->?[1728]; ++i17 ) /*0x716c2f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)&this->?[1716] + 4 * i17)); /*0x716c40*/
    _makepath(Buffer, 0, 0, &this->?[276], Ext); /*0x716c66*/
    this->ObjectTypeClass[41] = (int)SearchMIXFile(Buffer, 0); /*0x716c96*/
    INIClass::GetString( /*0x716c9c*/
      (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
      &this->?[276],
      (unsigned __int8 *)&g_INI_Key_TRUCKA.?,
      &g_INI_Key_TRUCKA.__pad_1714[80],
      Filename,
      256);
    if ( !_strcmpi(Filename, &g_INI_Key_TRUCKA.__pad_1714[80]) ) /*0x716cab*/
      INIClass::GetString( /*0x716cd4*/
        (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
        (unsigned __int8 *)&this->ObjectTypeClass[9],
        (unsigned __int8 *)&g_INI_Key_TRUCKA.?,
        &g_INI_Key_TRUCKA.__pad_1714[80],
        Filename,
        256);
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x716ced*/
    *(_DWORD *)&this->?[1548] = 0; /*0x716cfe*/
    v35 = SearchMIXFile(Buffer, 0); /*0x716d04*/
    *(_DWORD *)&this->?[1548] = v35; /*0x716d0b*/
    if ( !v35 ) /*0x716d11*/
      *(_DWORD *)&this->?[1548] = SearchMIXFile(&stru_820320.?[143], 0); /*0x716d1f*/
    INIClass::GetString( /*0x716d3f*/
      (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
      &this->?[276],
      (unsigned __int8 *)&g_INI_Key_TRUCKA.?,
      &g_INI_DefaultBuffer,
      Filename,
      256);
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x716d58*/
    *(_DWORD *)&this->?[1580] = 0; /*0x716d69*/
    *(_DWORD *)&this->?[1580] = SearchMIXFile(Buffer, 0); /*0x716d8d*/
    INIClass::GetString( /*0x716d93*/
      (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
      &this->?[276],
      (unsigned __int8 *)g_INI_Key_Palette,
      &g_INI_DefaultBuffer,
      (char *)&this->? + 1,
      32);
    if ( BYTE1(this->?) ) /*0x716d98*/
      *(int *)((char *)&this->? + 1) = FileExtension::MapHandler((const char *)&this->? + 1); /*0x716da4*/
    return 0; /*0x716daa*/
  }
  return result; /*0x716dac*/
}



// ==== 0x00716DC0  TechnoTypeClass::SaveLoad_Prefix_0  this=TechnoTypeClass  sig=csp ====
int __userpurge TechnoTypeClass::SaveLoad_Prefix_0@<eax>(TechnoTypeClass *this, _DWORD *a2, int *a3, int a4, int a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx
  int v13; // edx
  int m; // ebx
  int v15; // edx
  int n; // ebx
  int v17; // edx
  int ii; // ebx
  int v19; // edx
  int jj; // ebx
  int v21; // edx
  int kk; // ebx
  int v23; // edx
  int mm; // ebx

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, (int)a2, (int)a3); /*0x716dd1*/
  if ( result >= 0 ) /*0x716dd8*/
  {
    v7 = *a2; /*0x716de4*/
    a3 = *(int **)&this->?[788]; /*0x716df1*/
    (*(void (__stdcall **)(_DWORD *, int **, int, _DWORD, int))(v7 + 16))(a2, &a3, 4, 0, v5); /*0x716df5*/
    for ( i = 0; i < a4; ++i ) /*0x716e00*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[776] + 4 * i, 4, 0); /*0x716e13*/
    v9 = *a2; /*0x716e23*/
    a4 = *(_DWORD *)&this->?[576]; /*0x716e2f*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v9 + 16))(a2, &a4, 4, 0); /*0x716e33*/
    for ( j = 0; j < a4; ++j ) /*0x716e3e*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[564] + 4 * j, 4, 0); /*0x716e51*/
    v11 = *a2; /*0x716e61*/
    a4 = *(_DWORD *)&this->?[1264]; /*0x716e6d*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v11 + 16))(a2, &a4, 4, 0); /*0x716e71*/
    for ( k = 0; k < a4; ++k ) /*0x716e7c*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[1252] + 4 * k, 4, 0); /*0x716e8f*/
    v13 = *a2; /*0x716e9f*/
    a4 = *(_DWORD *)&this->?[832]; /*0x716eab*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v13 + 16))(a2, &a4, 4, 0); /*0x716eaf*/
    for ( m = 0; m < a4; ++m ) /*0x716eba*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[820] + 4 * m, 4, 0); /*0x716ecd*/
    v15 = *a2; /*0x716edd*/
    a4 = *(_DWORD *)&this->?[860]; /*0x716ee9*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v15 + 16))(a2, &a4, 4, 0); /*0x716eed*/
    for ( n = 0; n < a4; ++n ) /*0x716ef8*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[848] + 4 * n, 4, 0); /*0x716f0b*/
    v17 = *a2; /*0x716f1b*/
    a4 = *(_DWORD *)&this->?[888]; /*0x716f27*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v17 + 16))(a2, &a4, 4, 0); /*0x716f2b*/
    for ( ii = 0; ii < a4; ++ii ) /*0x716f36*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[876] + 4 * ii, 4, 0); /*0x716f49*/
    v19 = *a2; /*0x716f59*/
    a4 = *(_DWORD *)&this->?[916]; /*0x716f65*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v19 + 16))(a2, &a4, 4, 0); /*0x716f69*/
    for ( jj = 0; jj < a4; ++jj ) /*0x716f74*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[904] + 4 * jj, 4, 0); /*0x716f87*/
    v21 = *a2; /*0x716f97*/
    a4 = *(_DWORD *)&this->?[944]; /*0x716fa3*/
    (*(void (__stdcall **)(_DWORD *, int *, int, _DWORD))(v21 + 16))(a2, &a4, 4, 0); /*0x716fa7*/
    for ( kk = 0; kk < a4; ++kk ) /*0x716fb2*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[932] + 4 * kk, 4, 0); /*0x716fc5*/
    v23 = *a2; /*0x716fd5*/
    a4 = *(_DWORD *)&this->?[972]; /*0x716fe1*/
    (*(void (__stdcall **)(_DWORD *, int *, int))(v23 + 16))(a2, &a4, 4); /*0x716fe5*/
    for ( mm = 0; mm < (int)a3; ++mm ) /*0x716ff0*/
      (*(void (__stdcall **)(_DWORD *, int, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)&this->?[960] + 4 * mm, 4, 0); /*0x717003*/
    DynamicVector::Read((DynamicVector *)&this->?[984], a2); /*0x717014*/
    DynamicVector::Read((DynamicVector *)&this->?[1012], a2); /*0x717020*/
    DynamicVector::Read((DynamicVector *)&this->?[1040], a2); /*0x71702c*/
    DynamicVector::Read((DynamicVector *)&this->?[1068], a2); /*0x717038*/
    Stream::WriteIntArray((Stream *)&this->?[1608], a2); /*0x717044*/
    Stream::WriteIntArray((Stream *)&this->?[1636], a2); /*0x717050*/
    DynamicVector::Read((DynamicVector *)&this->?[588], a2); /*0x71705c*/
    DynamicVector::Read((DynamicVector *)&this->?[1364], a2); /*0x717068*/
    DynamicVector::Read((DynamicVector *)&this->?[1392], a2); /*0x717074*/
    TechnoTypeClass::SaveLoadDataArray((TechnoTypeClass *)&this->?[1684], a2); /*0x717080*/
    TechnoTypeClass::SaveLoadDataArray((TechnoTypeClass *)&this->?[1712], a2); /*0x71708c*/
    return 0; /*0x717091*/
  }
  return result; /*0x717094*/
}



// ==== 0x007170A0  TechnoTypeClass::DeserializeArrays  this=TechnoTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::DeserializeArrays(TechnoTypeClass *this)
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
  ObjectTypeClass *v19; // [esp+Ch] [ebp+4h]
  int *v20; // [esp+10h] [ebp+8h]

  result = COMObject::GetSizeMaxWrapper(v19, v20); /*0x7170ac*/
  if ( result >= 0 ) /*0x7170b3*/
  {
    v2 = 4 * *(_DWORD *)&v19[1].__pad_14D[67] + 4 + *v20; /*0x7170c8*/
    *v20 = v2; /*0x7170ca*/
    v3 = v2 + 4 * *(_DWORD *)&v19[1].__pad_14D[95] + 4; /*0x7170d2*/
    *v20 = v3; /*0x7170d6*/
    v4 = v3 + 4 * *(_DWORD *)&v19[1].__pad_14D[123] + 4; /*0x7170de*/
    *v20 = v4; /*0x7170e2*/
    v5 = v4 + 4 * *(_DWORD *)&v19[1].__pad_14D[151] + 4; /*0x7170ea*/
    *v20 = v5; /*0x7170ee*/
    v6 = v5 + 4 * *(_DWORD *)&v19[1].ImageFile[8] + 4; /*0x7170f6*/
    *v20 = v6; /*0x7170fa*/
    v7 = v6 + 4 * *(_DWORD *)&v19[1].AlphaImageFile[9] + 4; /*0x717102*/
    *v20 = v7; /*0x717106*/
    v8 = v7 + 4 * *(_DWORD *)&v19[1].HasRadialIndicator + 4; /*0x71710e*/
    *v20 = v8; /*0x717112*/
    v9 = v8 + 4 * v19[1].VoxelCaches[4] + 4; /*0x71711a*/
    *v20 = v9; /*0x71711e*/
    v10 = v9 + 4 * v19[1].VoxelCaches[11] + 4; /*0x717126*/
    *v20 = v10; /*0x71712a*/
    v11 = v10 + 4 * v19[1].VoxelCaches[18] + 4; /*0x717132*/
    *v20 = v11; /*0x717136*/
    v12 = v11 + 4 * *(_DWORD *)&v19[2].AlphaImageFile[1] + 4; /*0x71713e*/
    *v20 = v12; /*0x717142*/
    v13 = v12 + 4 * *(_DWORD *)&v19[2].Selectable + 4; /*0x71714a*/
    *v20 = v13; /*0x71714e*/
    v14 = v13 + 4 * *(_DWORD *)&v19[1].?[44] + 4; /*0x717156*/
    *v20 = v14; /*0x71715a*/
    v15 = v14 + 4 * (int)v19[2].AlphaImage + 4; /*0x717162*/
    *v20 = v15; /*0x717166*/
    v16 = v15 + 4 * *(_DWORD *)&v19[1].__pad_14D[23] + 4; /*0x71716e*/
    *v20 = v16; /*0x717172*/
    v17 = v16 + 4 * (int)v19[1].AlphaImage + 4; /*0x71717a*/
    *v20 = v17; /*0x71717e*/
    v18 = v17 + 4 * v19[2].VoxelCaches[7] + 4; /*0x717186*/
    *v20 = v18; /*0x71718a*/
    *v20 = v18 + 4 * v19[2].VoxelCaches[14] + 4; /*0x717196*/
    return 0; /*0x717198*/
  }
  return result; /*0x71719a*/
}



// ==== 0x007171A0  BuildingTypeClass::ProcessPower  this=TechnoTypeClass  sig=csp ====
int __thiscall sub_7171A0(int this, int *a2)
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

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x7171a9*/
  Checksummer::Add_double(*(_DWORD *)(this + 752), *(_DWORD *)(this + 756)); /*0x7171be*/
  Power::TimerProcess(*(_DWORD *)(this + 760)); /*0x7171cc*/
  Checksummer::Add_double(*(_DWORD *)(this + 768), *(_DWORD *)(this + 772)); /*0x7171e1*/
  Checksummer::Add_double(*(_DWORD *)(this + 776), *(_DWORD *)(this + 780)); /*0x7171f6*/
  Power::TimerProcess(*(_DWORD *)(this + 784)); /*0x717204*/
  Power::TimerProcess(*(_DWORD *)(this + 804)); /*0x717212*/
  Power::TimerProcess(*(_DWORD *)(this + 1492)); /*0x717220*/
  Power::TimerProcess(*(_DWORD *)(this + 1016)); /*0x71722e*/
  Power::TimerProcess(*(_DWORD *)(this + 832)); /*0x71723c*/
  Checksummer::Add_Buffer((unsigned int *)a2, (unsigned __int8 *)(this + 844), 16); /*0x71724c*/
  Checksummer::Add_double(*(_DWORD *)(this + 864), *(_DWORD *)(this + 868)); /*0x717261*/
  Checksummer::Add_double(*(_DWORD *)(this + 872), *(_DWORD *)(this + 876)); /*0x717276*/
  Checksummer::Add_double(*(_DWORD *)(this + 880), *(_DWORD *)(this + 884)); /*0x71728b*/
  Checksummer::Add_double(*(_DWORD *)(this + 888), *(_DWORD *)(this + 892)); /*0x7172a0*/
  Checksummer::Add_double(*(_DWORD *)(this + 896), *(_DWORD *)(this + 900)); /*0x7172b5*/
  Checksummer::Add_double(*(_DWORD *)(this + 904), *(_DWORD *)(this + 908)); /*0x7172ca*/
  LOBYTE(v3) = *(_BYTE *)(this + 912); /*0x7172cf*/
  Power::FlagProcess(a2, v3); /*0x7172d8*/
  v4 = Power::TimerProcess(*(_DWORD *)(this + 920)); /*0x7172e6*/
  LOBYTE(v4) = *(_BYTE *)(this + 3217); /*0x7172eb*/
  Power::FlagProcess(a2, v4); /*0x7172f4*/
  LOBYTE(v5) = *(_BYTE *)(this + 3218); /*0x7172f9*/
  Power::FlagProcess(a2, v5); /*0x717302*/
  LOBYTE(v6) = *(_BYTE *)(this + 3216); /*0x717307*/
  Power::FlagProcess(a2, v6); /*0x717310*/
  Checksummer::Add_double(*(_DWORD *)(this + 928), *(_DWORD *)(this + 932)); /*0x717325*/
  Checksummer::Add_double(*(_DWORD *)(this + 944), *(_DWORD *)(this + 948)); /*0x71733a*/
  Checksummer::Add_double(*(_DWORD *)(this + 936), *(_DWORD *)(this + 940)); /*0x71734f*/
  Power::TimerProcess(*(_DWORD *)(this + 1560)); /*0x71735d*/
  Power::TimerProcess(*(_DWORD *)(this + 952)); /*0x71736b*/
  Power::TimerProcess(*(_DWORD *)(this + 956)); /*0x717379*/
  Checksummer::Add_double(*(_DWORD *)(this + 968), *(_DWORD *)(this + 972)); /*0x71738e*/
  Power::TimerProcess(*(_DWORD *)(this + 976)); /*0x71739c*/
  Power::TimerProcess(*(_DWORD *)(this + 980)); /*0x7173aa*/
  Power::TimerProcess(*(_DWORD *)(this + 1060)); /*0x7173b8*/
  Power::TimerProcess(*(_DWORD *)(this + 1088)); /*0x7173c6*/
  Power::TimerProcess(*(_DWORD *)(this + 1144)); /*0x7173d4*/
  Power::TimerProcess(*(_DWORD *)(this + 1172)); /*0x7173e2*/
  Power::TimerProcess(*(_DWORD *)(this + 1200)); /*0x7173f0*/
  Power::TimerProcess(*(_DWORD *)(this + 1228)); /*0x7173fe*/
  Power::TimerProcess(*(_DWORD *)(this + 1256)); /*0x71740c*/
  Power::TimerProcess(*(_DWORD *)(this + 1284)); /*0x71741a*/
  Power::TimerProcess(*(_DWORD *)(this + 1312)); /*0x717428*/
  Power::TimerProcess(*(_DWORD *)(this + 1928)); /*0x717436*/
  Power::TimerProcess(*(_DWORD *)(this + 1956)); /*0x717444*/
  Power::TimerProcess(*(_DWORD *)(this + 1460)); /*0x717452*/
  Power::TimerProcess(*(_DWORD *)(this + 1464)); /*0x717460*/
  Power::TimerProcess(*(_DWORD *)(this + 1468)); /*0x71746e*/
  Power::TimerProcess(*(_DWORD *)(this + 1472)); /*0x71747c*/
  Power::TimerProcess(*(_DWORD *)(this + 1504)); /*0x71748a*/
  Power::TimerProcess(*(_DWORD *)(this + 1512)); /*0x717498*/
  Power::TimerProcess(*(_DWORD *)(this + 1552)); /*0x7174a6*/
  Power::TimerProcess(*(_DWORD *)(this + 1556)); /*0x7174b4*/
  Power::TimerProcess(*(_DWORD *)(this + 1588)); /*0x7174c2*/
  Power::TimerProcess(*(_DWORD *)(this + 1608)); /*0x7174d0*/
  Power::TimerProcess(*(_DWORD *)(this + 1636)); /*0x7174de*/
  Power::TimerProcess(*(_DWORD *)(this + 1648)); /*0x7174ec*/
  Power::TimerProcess(*(_DWORD *)(this + 1652)); /*0x7174fa*/
  Power::TimerProcess(*(_DWORD *)(this + 1656)); /*0x717508*/
  Power::TimerProcess(*(_DWORD *)(this + 1660)); /*0x717516*/
  Power::TimerProcess(*(_DWORD *)(this + 1668)); /*0x717524*/
  Power::TimerProcess(*(_DWORD *)(this + 1676)); /*0x717532*/
  Power::TimerProcess(*(_DWORD *)(this + 1740)); /*0x717540*/
  Power::TimerProcess(*(_DWORD *)(this + 1744)); /*0x71754e*/
  Power::TimerProcess(*(_DWORD *)(this + 1816)); /*0x71755c*/
  Power::TimerProcess(*(_DWORD *)(this + 1820)); /*0x71756a*/
  Power::TimerProcess(*(_DWORD *)(this + 1824)); /*0x717578*/
  Power::TimerProcess(*(_DWORD *)(this + 1832)); /*0x717586*/
  Power::TimerProcess(*(_DWORD *)(this + 1852)); /*0x717594*/
  Power::TimerProcess(*(_DWORD *)(this + 1880)); /*0x7175a2*/
  Power::TimerProcess(*(_DWORD *)(this + 2044)); /*0x7175b0*/
  v7 = Power::TimerProcess(*(_DWORD *)(this + 2048)); /*0x7175be*/
  LOBYTE(v7) = *(_BYTE *)(this + 3220); /*0x7175c3*/
  Power::FlagProcess(a2, v7); /*0x7175cc*/
  LOBYTE(v8) = *(_BYTE *)(this + 3221); /*0x7175d1*/
  Power::FlagProcess(a2, v8); /*0x7175da*/
  LOBYTE(v9) = *(_BYTE *)(this + 3222); /*0x7175df*/
  v10 = Power::FlagProcess(a2, v9); /*0x7175e8*/
  LOBYTE(v10) = *(_BYTE *)(this + 3223); /*0x7175ed*/
  Power::FlagProcess(a2, v10); /*0x7175f6*/
  LOBYTE(v11) = *(_BYTE *)(this + 3224); /*0x7175fb*/
  Power::FlagProcess(a2, v11); /*0x717604*/
  LOBYTE(v12) = *(_BYTE *)(this + 3225); /*0x717609*/
  v13 = Power::FlagProcess(a2, v12); /*0x717612*/
  LOBYTE(v13) = *(_BYTE *)(this + 3226); /*0x717617*/
  Power::FlagProcess(a2, v13); /*0x717620*/
  LOBYTE(v14) = *(_BYTE *)(this + 3227); /*0x717625*/
  Power::FlagProcess(a2, v14); /*0x71762e*/
  LOBYTE(v15) = *(_BYTE *)(this + 3228); /*0x717633*/
  v16 = Power::FlagProcess(a2, v15); /*0x71763c*/
  LOBYTE(v16) = *(_BYTE *)(this + 3229); /*0x717641*/
  Power::FlagProcess(a2, v16); /*0x71764a*/
  LOBYTE(v17) = *(_BYTE *)(this + 3230); /*0x71764f*/
  Power::FlagProcess(a2, v17); /*0x717658*/
  LOBYTE(v18) = *(_BYTE *)(this + 3231); /*0x71765d*/
  v19 = Power::FlagProcess(a2, v18); /*0x717666*/
  LOBYTE(v19) = *(_BYTE *)(this + 3232); /*0x71766b*/
  Power::FlagProcess(a2, v19); /*0x717674*/
  LOBYTE(v20) = *(_BYTE *)(this + 3233); /*0x717679*/
  Power::FlagProcess(a2, v20); /*0x717682*/
  LOBYTE(v21) = *(_BYTE *)(this + 3276); /*0x717687*/
  v22 = Power::FlagProcess(a2, v21); /*0x717690*/
  LOBYTE(v22) = *(_BYTE *)(this + 3277); /*0x717695*/
  Power::FlagProcess(a2, v22); /*0x71769e*/
  LOBYTE(v23) = *(_BYTE *)(this + 3279); /*0x7176a3*/
  Power::FlagProcess(a2, v23); /*0x7176ac*/
  LOBYTE(v24) = *(_BYTE *)(this + 3280); /*0x7176b1*/
  v25 = Power::FlagProcess(a2, v24); /*0x7176ba*/
  LOBYTE(v25) = *(_BYTE *)(this + 3281); /*0x7176bf*/
  Power::FlagProcess(a2, v25); /*0x7176c8*/
  LOBYTE(v26) = *(_BYTE *)(this + 3282); /*0x7176cd*/
  Power::FinalizeDrain(a2, v26); /*0x7176d6*/
  LOBYTE(v27) = *(_BYTE *)(this + 3283); /*0x7176db*/
  v28 = Power::FinalizeDrain(a2, v27); /*0x7176e4*/
  LOBYTE(v28) = *(_BYTE *)(this + 3284); /*0x7176e9*/
  Power::FlagProcess(a2, v28); /*0x7176f2*/
  LOBYTE(v29) = *(_BYTE *)(this + 3348); /*0x7176f7*/
  Power::FlagProcess(a2, v29); /*0x717700*/
  LOBYTE(v30) = *(_BYTE *)(this + 3349); /*0x717705*/
  v31 = Power::FlagProcess(a2, v30); /*0x71770e*/
  LOBYTE(v31) = *(_BYTE *)(this + 3360); /*0x717713*/
  Power::FlagProcess(a2, v31); /*0x71771c*/
  LOBYTE(v32) = *(_BYTE *)(this + 3361); /*0x717721*/
  Power::FlagProcess(a2, v32); /*0x71772a*/
  LOBYTE(v33) = *(_BYTE *)(this + 3363); /*0x71772f*/
  v34 = Power::FlagProcess(a2, v33); /*0x717738*/
  LOBYTE(v34) = *(_BYTE *)(this + 3364); /*0x71773d*/
  Power::FlagProcess(a2, v34); /*0x717746*/
  LOBYTE(v35) = *(_BYTE *)(this + 3365); /*0x71774b*/
  Power::FlagProcess(a2, v35); /*0x717754*/
  LOBYTE(v36) = *(_BYTE *)(this + 3366); /*0x717759*/
  v37 = Power::FlagProcess(a2, v36); /*0x717762*/
  LOBYTE(v37) = *(_BYTE *)(this + 3518); /*0x717767*/
  Power::FlagProcess(a2, v37); /*0x717770*/
  LOBYTE(v38) = *(_BYTE *)(this + 3519); /*0x717775*/
  Power::FlagProcess(a2, v38); /*0x71777e*/
  LOBYTE(v39) = *(_BYTE *)(this + 1710); /*0x717783*/
  v40 = Power::FlagProcess(a2, v39); /*0x71778c*/
  LOBYTE(v40) = *(_BYTE *)(this + 1711); /*0x717791*/
  Power::FlagProcess(a2, v40); /*0x71779a*/
  LOBYTE(v41) = *(_BYTE *)(this + 1712); /*0x71779f*/
  return Power::FlagProcess(a2, v41); /*0x7177ad*/
}



// ==== 0x007177C0  TechnoClass::GetAudioEntry  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetAudioEntry(TechnoClass *this, int a2)
{
  return (int)this + 28 * a2 + 2200; /*0x7177d4*/
}



// ==== 0x007177E0  TechnoClass::processSpyAction  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::processSpyAction(TechnoClass *this, int a2)
{
  return (int)this + 28 * a2 + 2708; /*0x7177f4*/
}



// ==== 0x00717800  TechnoTypeClass::GetSightRange  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoClass::GetSightRange(TechnoTypeClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->?[1332]; /*0x717800*/
  if ( result == -1 ) /*0x717809*/
    return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1972); /*0x717810*/
  return result; /*0x717816*/
}



// ==== 0x00717820  ObjectTypeClass::loadTypeMember  this=ObjectTypeClass  sig=csp ====
char __thiscall ObjectTypeClass::loadTypeMember_5717820(TechnoTypeClass *this)
{
  int v2; // eax
  const char *v3; // ecx

  LOBYTE(v2) = this->__pad_DC8[8]; /*0x717823*/
  v3 = &this->__pad_DC8[8]; /*0x717829*/
  if ( (_BYTE)v2 ) /*0x717831*/
  {
    v2 = FileExtension::MapHandler(v3); /*0x717833*/
    *(_DWORD *)&this->__pad_DC8[40] = v2; /*0x717838*/
  }
  return v2; /*0x71783e*/
}



// ==== 0x00717840  LoadTheaterClassMIX_Load_717840  this=-  sig=ida-proto ====
int sub_717840()
{
  int result; // eax
  int i; // edi
  int v2; // esi

  result = dword_A8EB10; /*0x717840*/
  for ( i = 0; i < dword_A8EB10; ++i ) /*0x71784a*/
  {
    v2 = *((_DWORD *)dword_A8EB04 + i); /*0x717852*/
    if ( *(_BYTE *)(v2 + 3536) ) /*0x717855*/
      *(_DWORD *)(v2 + 3568) = FileExtension::MapHandler((const char *)(v2 + 3536)); /*0x71786a*/
    result = dword_A8EB10; /*0x717870*/
  }
  return result; /*0x71787b*/
}



// ==== 0x00717880  HouseClass::HasPower  this=HouseClass  sig=csp ====
int __thiscall HouseClass::HasPower(HouseClass *this)
{
  return this->builtInfantryTypes[312] > 0; /*0x71788d*/
}



// ==== 0x00717890  BuildingClass::SetSlot  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SetSlot(BuildingClass *this, int a2, int a3)
{
  *((_DWORD *)this + a3 + 517) = a2; /*0x717898*/
  return a3; /*0x71789f*/
}



// ==== 0x007178B0  UnitClass::processEnterTarget  this=UnitClass  sig=csp ====
int __thiscall UnitClass::processEnterTarget(UnitClass *this, int a2)
{
  return this->ToolTipText[a2 + 75]; /*0x7178bb*/
}



// ==== 0x007178C0  BuildingTypeClass::GetUpgradeOffset  this=BuildingTypeClass  sig=csp ====
_DWORD *__userpurge BuildingTypeClass::GetUpgradeOffset@<eax>(
        BuildingTypeClass *this,
        int *a2@<edi>,
        double a3@<st0>,
        _DWORD *a4)
{
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int *v8; // eax
  int v9; // ecx
  int v10; // edi
  void *v11; // ebp
  void *v12; // edi
  int v13; // eax
  int v14; // ebx
  double v16; // [esp+0h] [ebp-2Ch]
  int v17[3]; // [esp+18h] [ebp-14h] BYREF
  _DWORD v18[2]; // [esp+24h] [ebp-8h] BYREF

  v5 = v4; /*0x7178c4*/
  if ( *(_BYTE *)(v4 + 1980) ) /*0x7178c6*/
  {
    v6 = *(_DWORD *)(v4 + 1968); /*0x7178d4*/
    v7 = *(_DWORD *)(v4 + 1972); /*0x7178da*/
    v18[0] = v6; /*0x7178e1*/
    v18[1] = v7; /*0x7178e6*/
    v8 = (int *)World::ToScreen(v17, v18, a2); /*0x7178fb*/
    v9 = *v8; /*0x717900*/
    v10 = v8[1]; /*0x717905*/
    v17[0] = 10 * *(_DWORD *)(v5 + 1976); /*0x71791b*/
    __asm { fild [esp+2Ch+var_14] } /*0x717921*/
    v11 = (void *)(v9 - v17[0]); /*0x717927*/
    v12 = (void *)(v10 - v17[0]); /*0x717929*/
    __asm /*0x71792b*/
    {
      fld st
      fmul st, st(1)
      fadd st, st
      fstp [esp+2Ch+var_2C]; double
      fstp st
    }
    Math::Sqrt(v16); /*0x717936*/
    __asm { fmul ds:dbl_7F4FC0 } /*0x71793b*/
    LOWORD(v13) = Math::RoundToInt(a3); /*0x717944*/
    if ( *(int *)(v5 + 1976) >= 0 ) /*0x717951*/
      v14 = -v13; /*0x717957*/
    else
      v14 = v13; /*0x717953*/
    this->TechnoTypeClass = v11; /*0x71795f*/
    this->? = v12; /*0x717961*/
    this->? = (void *)v14; /*0x717966*/
    return &this->TechnoTypeClass; /*0x717959*/
  }
  else
  {
    this->TechnoTypeClass = *(void **)(v4 + 1968); /*0x71797f*/
    this->? = *(void **)(v4 + 1972); /*0x717984*/
    this->? = *(void **)(v4 + 1976); /*0x71798b*/
    return &this->TechnoTypeClass; /*0x717971*/
  }
}



// ==== 0x007179A0  TechnoTypeClass::ddtor  this=TechnoTypeClass  sig=csp ====
void *__thiscall TechnoTypeClass::ddtor(TechnoTypeClass *this, char a2)
{
  TechnoTypeClass::DTOR((int)this); /*0x7179a3*/
  if ( (a2 & 1) != 0 ) /*0x7179ad*/
    __3_YAXPAX_Z(this); /*0x7179b0*/
  return this; /*0x7179ba*/
}



// ==== 0x007179C0  ObjectClass::nullsub_86  this=ObjectClass  sig=csp ====
void nullsub_86(ObjectClass *this)
{
  ; /*0x7179c0*/
}



// ==== 0x007179D0  ObjectTypeClass::loadTypeMember_57179D0  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_57179D0(ObjectTypeClass *this, int a2, _DWORD *a3)
{
  if ( this != (ObjectTypeClass *)a3 ) /*0x7179d7*/
  {
    this->AbstractTypeClass = (void *)*a3; /*0x7179dd*/
    this->? = (void *)a3[1]; /*0x7179e2*/
    this->? = (void *)a3[2]; /*0x7179e8*/
    this->? = (void *)a3[3]; /*0x7179ee*/
    LOWORD(this->?) = *((_WORD *)a3 + 8); /*0x7179f5*/
  }
  *(_DWORD *)a2 = this->AbstractTypeClass; /*0x717a01*/
  *(_DWORD *)(a2 + 4) = this->?; /*0x717a06*/
  *(_DWORD *)(a2 + 8) = this->?; /*0x717a0c*/
  *(_DWORD *)(a2 + 12) = this->?; /*0x717a12*/
  *(_WORD *)(a2 + 16) = this->?; /*0x717a1a*/
  return a2; /*0x717a19*/
}



// ==== 0x00717A30  ObjectTypeClass::loadTypeMember_5717A30  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5717A30(ObjectTypeClass *this, int a2)
{
  this->AbstractTypeClass = (void *)a2; /*0x717a34*/
  return a2; /*0x717a36*/
}



// ==== 0x00717A40  ObjectClass::ReadPointerFromECX4  this=ObjectClass  sig=csp ====
int __thiscall ReadPointerFromECX4(ObjectClass *this)
{
  return (int)this->AbstractClass; /*0x717a42*/
}



// ==== 0x00717A50  ObjectTypeClass::loadTypeMember_5717A50  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5717A50(ObjectTypeClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x717a50*/
  if ( a2 <= 0 ) /*0x717a56*/
    result = 1; /*0x717a58*/
  this->? = (void *)result; /*0x717a5d*/
  return result; /*0x717a60*/
}



// ==== 0x00717A70  ObjectTypeClass::loadTypeMember_5717A70  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5717A70(ObjectTypeClass *this)
{
  return (int)this->?; /*0x717a73*/
}



// ==== 0x00717A80  ObjectTypeClass::loadTypeMember_5717A80  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5717A80(ObjectTypeClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x717a80*/
  if ( a2 <= 0 ) /*0x717a86*/
    result = 1; /*0x717a88*/
  this->? = (void *)result; /*0x717a8d*/
  return result; /*0x717a90*/
}



// ==== 0x00717AA0  ObjectTypeClass::loadTypeMember_5717AA0  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5717AA0(ObjectTypeClass *this)
{
  return (int)this->?; /*0x717aa3*/
}



// ==== 0x00717AB0  ObjectTypeClass::loadTypeMember_5717AB0  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5717AB0(ObjectTypeClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x717ab0*/
  if ( a2 <= 0 ) /*0x717ab6*/
    result = 1; /*0x717ab8*/
  this->? = (void *)result; /*0x717abd*/
  return result; /*0x717ac0*/
}



// ==== 0x00717AD0  ObjectTypeClass::loadTypeMember_5717AD0  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_5717AD0(ObjectTypeClass *this)
{
  return (int)this->?; /*0x717ad3*/
}



// ==== 0x00717AE0  ObjectTypeClass::loadTypeMember_5717AE0  this=ObjectTypeClass  sig=csp ====
BOOL __thiscall ObjectTypeClass::loadTypeMember_5717AE0(ObjectTypeClass *this)
{
  return LOBYTE(this->AbstractTypeClass) == 0; /*0x717ae9*/
}



// ==== 0x00717AF0  TechnoTypeClass::Constructor  this=TypeList  sig=csp ====
_DWORD *__thiscall TechnoTypeClass::Constructor(TechnoTypeClass *this)
{
  this->ObjectTypeClass[1] = 0; /*0x717af4*/
  this->ObjectTypeClass[2] = 0; /*0x717af7*/
  LOBYTE(this->ObjectTypeClass[3]) = 1; /*0x717afa*/
  BYTE1(this->ObjectTypeClass[3]) = 0; /*0x717afe*/
  this->ObjectTypeClass[5] = 10; /*0x717b01*/
  this->ObjectTypeClass[4] = 0; /*0x717b08*/
  this->ObjectTypeClass[0] = (int)&TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x717b0b*/
  return this->ObjectTypeClass; /*0x717b11*/
}



// ==== 0x00717B20  TechnoTypeClass::SaveLoadDataArray  this=TechnoTypeClass  sig=csp ====
int __thiscall TechnoTypeClass::SaveLoadDataArray(TechnoTypeClass *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x717b2c*/
  v6 = this->ObjectTypeClass[4]; /*0x717b39*/
  (*(void (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &v6, 4, 0); /*0x717b3d*/
  result = v6; /*0x717b40*/
  for ( i = 0; i < v6; ++i ) /*0x717b48*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->ObjectTypeClass[1] + 4 * i, 4, 0); /*0x717b58*/
    result = v6; /*0x717b5b*/
  }
  return result; /*0x717b64*/
}



// ==== 0x00717B70  _TypeList_PBVParticleSystemTypeClass::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall TypeList_cptr_ParticleSystemTypeClass::QueryInterface(
        _TypeList_PBVParticleSystemTypeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x717b73*/
  *(_DWORD *)this = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x717b76*/
  if ( v3 && this->IsAllocated ) /*0x717b80*/
  {
    __3_YAXPAX_Z(v3); /*0x717b88*/
    this->Items = 0; /*0x717b90*/
  }
  this->IsAllocated = 0; /*0x717b9b*/
  this->Capacity = 0; /*0x717ba1*/
  if ( (a2 & 1) != 0 ) /*0x717ba8*/
    __3_YAXPAX_Z(this); /*0x717bab*/
  return this; /*0x717bb5*/
}



// ==== 0x00717BC0  TechnoTypeClass::Constructor_0  this=DynamicVector  sig=csp ====
_DWORD *__thiscall TechnoTypeClass::Constructor_0(TechnoTypeClass *this, int a2)
{
  this->ObjectTypeClass[0] = (int)&DynamicVectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x717bc2*/
  return this->ObjectTypeClass; /*0x717bc8*/
}



// ==== 0x00717BD0  IntDynamicVector::Construct  this=DynamicVector  sig=csp ====
_DWORD *__thiscall IntDynamicVector::Construct(IntDynamicVector *this, int a2)
{
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<int>::`vftable'; /*0x717bd2*/
  return this->__pad_0; /*0x717bd8*/
}



// ==== 0x00717BE0  TechnoTypeClass::Constructor_1  this=DynamicVector  sig=csp ====
_DWORD *__thiscall TechnoTypeClass::Constructor_1(TechnoTypeClass *this, int a2)
{
  this->ObjectTypeClass[0] = (int)&DynamicVectorClass<BuildingTypeClass const *>::`vftable'; /*0x717be2*/
  return this->ObjectTypeClass; /*0x717be8*/
}



// ==== 0x00717BF0  ObjectTypeClass::CheckFlag  this=DynamicVector  sig=csp ====
_DWORD *__thiscall ObjectTypeClass::CheckFlag(ObjectTypeClass *this, int a2)
{
  this->AbstractTypeClass = &DynamicVectorClass<AnimTypeClass const *>::`vftable'; /*0x717bf2*/
  return &this->AbstractTypeClass; /*0x717bf8*/
}



// ==== 0x00717C00  ObjectTypeClass::loadTypeMember_5717C00  this=ObjectTypeClass  sig=csp ====
_DWORD *__thiscall ObjectTypeClass::loadTypeMember_5717C00(ObjectTypeClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (ObjectTypeClass *)a2 ) /*0x717c0a*/
    return &this->AbstractTypeClass; /*0x717c0a*/
  (*((void (__thiscall **)(ObjectTypeClass *))this->AbstractTypeClass + 3))(this); /*0x717c0e*/
  v3 = (void *)a2[2]; /*0x717c11*/
  this->? = v3; /*0x717c16*/
  if ( !v3 ) /*0x717c19*/
  {
    this->? = 0; /*0x717c5a*/
    BYTE1(this->?) = 0; /*0x717c61*/
    return &this->AbstractTypeClass; /*0x717c65*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x717c23*/
  this->? = v4; /*0x717c2b*/
  if ( !v4 ) /*0x717c30*/
    return &this->AbstractTypeClass; /*0x717c30*/
  vtable2 = this->?; /*0x717c32*/
  v6 = 0; /*0x717c35*/
  BYTE1(this->?) = 1; /*0x717c39*/
  if ( (int)vtable2 <= 0 ) /*0x717c3d*/
    return &this->AbstractTypeClass; /*0x717c3d*/
  do /*0x717c51*/
  {
    *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x717c48*/
    ++v6; /*0x717c4e*/
  }
  while ( v6 < (int)this->? ); /*0x717c51*/
  return &this->AbstractTypeClass; /*0x717c55*/
}



// ==== 0x00717C70  TypeList::ParticleConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall TypeList::ParticleConstructor(TypeList *this, int a2, int a3)
{
  this->? = 0; /*0x717c79*/
  this->? = a2; /*0x717c80*/
  this->? = 1; /*0x717c83*/
  this->? = 0; /*0x717c87*/
  this->DynamicVectorClass = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x717c8b*/
  if ( a2 ) /*0x717c91*/
  {
    if ( a3 ) /*0x717c99*/
    {
      this->? = (void *)a3; /*0x717c9b*/
    }
    else
    {
      this->? = (void *)__2_YAPAXI_Z(4 * a2); /*0x717cac*/
      this->? = 1; /*0x717caf*/
    }
  }
  this->DynamicVectorClass = &DynamicVectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x717cb3*/
  this->? = 10; /*0x717cb9*/
  this->? = 0; /*0x717cc0*/
  return &this->DynamicVectorClass; /*0x717cc9*/
}



// ==== 0x00717CD0  TypeList::PushBack  this=TypeList  sig=csp ====
char __thiscall TypeList::PushBack(TypeList *this, _DWORD *a2)
{
  int Capacity; // ecx
  int CapacityIncrement; // eax
  int Count; // eax
  _DWORD *Items; // edx

  Capacity = this->?; /*0x717cd3*/
  if ( this->? >= Capacity ) /*0x717cdb*/
  {
    if ( !this->? && Capacity ) /*0x717ce6*/
      return 0; /*0x717ce6*/
    CapacityIncrement = this->?; /*0x717ce8*/
    if ( CapacityIncrement <= 0 /*0x717cf8*/
      || !(*((unsigned __int8 (__thiscall **)(TypeList *, int, _DWORD))this->DynamicVectorClass + 2))(
            this,
            Capacity + CapacityIncrement,
            0) )
    {
      return 0; /*0x717cff*/
    }
  }
  Count = this->?; /*0x717d05*/
  Items = this->?; /*0x717d08*/
  this->? = Count + 1; /*0x717d0e*/
  Items[Count] = *a2; /*0x717d18*/
  return 1; /*0x717d01*/
}



// ==== 0x00717D20  VectorClass::CopyParticle  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::CopyParticle(DynamicVectorClass *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int Capacity; // ecx
  int v6; // eax

  this->Items = 0; /*0x717d2d*/
  this->Capacity = 0; /*0x717d30*/
  this->IsInitialized[0] = 1; /*0x717d33*/
  this->IsAllocated[0] = 0; /*0x717d37*/
  this->vtable0 = (int)&VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x717d3a*/
  if ( this != (DynamicVectorClass *)a2 ) /*0x717d40*/
  {
    VectorClass::Cleanup((int)this); /*0x717d42*/
    v3 = a2[2]; /*0x717d48*/
    this->Capacity = v3; /*0x717d4d*/
    if ( v3 ) /*0x717d50*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x717d56*/
      this->Items = v4; /*0x717d60*/
      if ( v4 ) /*0x717d63*/
      {
        Capacity = this->Capacity; /*0x717d65*/
        v6 = 0; /*0x717d68*/
        this->IsAllocated[0] = 1; /*0x717d6c*/
        if ( Capacity > 0 ) /*0x717d70*/
        {
          do /*0x717d84*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x717d7b*/
            ++v6; /*0x717d81*/
          }
          while ( v6 < this->Capacity ); /*0x717d84*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x717d88*/
      this->IsAllocated[0] = 0; /*0x717d8b*/
    }
  }
  this->Count = a2[4]; /*0x717d91*/
  this->CapacityIncrement = a2[5]; /*0x717d97*/
  this->vtable0 = (int)&TypeList<ParticleSystemTypeClass const *>::`vftable'; /*0x717d9a*/
  return &this->vtable0; /*0x717da2*/
}



// ==== 0x00717DB0  TechnoTypeClass::RemoveItem  this=TechnoTypeClass  sig=csp ====
char __thiscall TechnoTypeClass::RemoveItem(TechnoTypeClass *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = this->ObjectTypeClass[4]; /*0x717db0*/
  v3 = a2; /*0x717db3*/
  if ( a2 >= v2 ) /*0x717db9*/
    return 0; /*0x717ddc*/
  v4 = v2 - 1; /*0x717dbb*/
  this->ObjectTypeClass[4] = v4; /*0x717dbe*/
  if ( a2 < v4 ) /*0x717dc1*/
  {
    do /*0x717dd4*/
    {
      ++v3; /*0x717dc7*/
      *(_DWORD *)(this->ObjectTypeClass[1] + 4 * v3 - 4) = *(_DWORD *)(this->ObjectTypeClass[1] + 4 * v3); /*0x717dcb*/
    }
    while ( v3 < this->ObjectTypeClass[4] ); /*0x717dd4*/
  }
  return 1; /*0x717dd9*/
}



// ==== 0x00717DF0  sub_717DF0  this=-  sig=ida-proto ====
void sub_717DF0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x717dfc*/
  dbl_B0EBE0 = Math::Sqrt(v0 + v0); /*0x717e0e*/
}



// ==== 0x00717E20  sub_717E20  this=-  sig=ida-proto ====
void sub_717E20()
{
  dbl_B0EC30 = dbl_B0EBE0 / 60.0; /*0x717e2c*/
}



// ==== 0x00717E40  sub_717E40  this=-  sig=ida-proto ====
void sub_717E40()
{
  dbl_B0EC18 = 1.0 / dbl_B0EC30; /*0x717e4c*/
}



// ==== 0x00717E60  sub_717E60  this=-  sig=ida-proto ====
void sub_717E60()
{
  dbl_B0EC10 = 0.0174532925199433 * 45.0; /*0x717e6c*/
}



// ==== 0x00717E80  sub_717E80  this=-  sig=ida-proto ====
void sub_717E80()
{
  dbl_B0EBE8 = 0.0174532925199433 * 60.0; /*0x717e8c*/
}



// ==== 0x00717EA0  sub_717EA0  this=-  sig=ida-proto ====
void sub_717EA0()
{
  dbl_B0EBC0 = 0.0174532925199433 * 90.0; /*0x717eac*/
}



// ==== 0x00717EC0  sub_717EC0  this=-  sig=ida-proto ====
__int64 sub_717EC0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0EBC0 - dbl_B0EBE8); /*0x717ed2*/
  result = Math::RoundToInt(v0 * dbl_B0EBE0 * 0.5); /*0x717ee6*/
  dword_B0EC38 = result; /*0x717eeb*/
  return result; /*0x717ef0*/
}



// ==== 0x00717F00  sub_717F00  this=-  sig=ida-proto ====
void sub_717F00()
{
  dbl_B0EBF0 = Math::ArcTan((double)dword_B0EC38 * 0.00390625); /*0x717f17*/
}



// ==== 0x00717F30  sub_717F30  this=-  sig=ida-proto ====
void sub_717F30()
{
  dbl_B0EC08 = Math::ArcTan((double)(2 * dword_B0EC38) / dbl_B0EBE0); /*0x717f52*/
}



// ==== 0x00717F60  sub_717F60  this=-  sig=ida-proto ====
__int64 sub_717F60()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0EC38) + 0.5); /*0x717f7b*/
  dword_B0EC2C = result; /*0x717f80*/
  return result; /*0x717f86*/
}



// ==== 0x00717F90  sub_717F90  this=-  sig=ida-proto ====
int sub_717F90()
{
  word_B0EBD8 = 0; /*0x717f92*/
  return 0; /*0x717f9e*/
}



// ==== 0x00717FA0  sub_717FA0  this=-  sig=ida-proto ====
int sub_717FA0()
{
  dword_B0EBF8 = 0; /*0x717fa2*/
  dword_B0EBFC = 0; /*0x717fa7*/
  dword_B0EC00 = 0; /*0x717fac*/
  return 0; /*0x717fb1*/
}



// ==== 0x00717FC0  sub_717FC0  this=-  sig=ida-proto ====
int sub_717FC0()
{
  dword_B0EC28 = 0; /*0x717fc5*/
  dword_B0EC20 = 128; /*0x717fcf*/
  dword_B0EC24 = 128; /*0x717fd4*/
  return 128; /*0x717fd9*/
}



// ==== 0x00717FE0  sub_717FE0  this=-  sig=ida-proto ====
int sub_717FE0()
{
  dword_B0EBC8 = 0; /*0x717fe2*/
  dword_B0EBCC = 0; /*0x717fe7*/
  dword_B0EBD0 = 0; /*0x717fec*/
  dword_B0EBD4 = 0; /*0x717ff1*/
  return 0; /*0x717ff6*/
}



// ==== 0x00718000  TeleportLocomotionClass::TeleportLocomotionClass  this=TeleportLocomotionClass  sig=csp ====
int __thiscall TeleportLocomotionClass::TeleportLocomotionClass(TeleportLocomotionClass *this)
{
  int v2; // ecx

  LocomotionClass::Init((LocomotionClass *)this); /*0x718003*/
  this->MovingDestination[0] = g_BuildingLoadQueue_Array.?; /*0x718011*/
  this->MovingDestination[1] = g_BuildingLoadQueue_Array.?[0]; /*0x71801a*/
  this->MovingDestination[2] = g_BuildingLoadQueue_Array.?[0]; /*0x718026*/
  this->LastCoords[0] = g_BuildingLoadQueue_Array.?; /*0x71802e*/
  this->LastCoords[1] = g_BuildingLoadQueue_Array.?[0]; /*0x718036*/
  this->LastCoords[2] = g_BuildingLoadQueue_Array.?[0]; /*0x71803e*/
  this->Moving = 0; /*0x718043*/
  this->TeleportLocomotionClass_field_bool_35 = 0; /*0x718046*/
  this->TeleportLocomotionClass_field_bool_36 = 0; /*0x718049*/
  this->State = 0; /*0x71804c*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71804f*/
  this->Timer[2] = 0; /*0x718055*/
  this->Timer[0] = v2; /*0x718058*/
  this->Piggybackee = 0; /*0x71805b*/
  *(_DWORD *)this->LocomotionClass = &TeleportLocomotionClass::`vftable'; /*0x71805e*/
  *(_DWORD *)&this->LocomotionClass[4] = &TeleportLocomotionClass::`vftable'; /*0x718064*/
  *(_DWORD *)this->__pad_18 = &TeleportLocomotionClass::`vftable'; /*0x71806b*/
  return (int)this->LocomotionClass; /*0x718074*/
}



// ==== 0x00718080  JumpjetLocomotionClass::ShortFunc  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::ShortFunc_718080(JumpjetLocomotionClass *this)
{
  return LOBYTE(this->Wobbles) == 1; /*0x71808b*/
}



// ==== 0x00718090  TeleportLocomotionClass::ShortFunc  this=TeleportLocomotionClass  sig=csp ====
int __thiscall JumpjetLocomotionClass::ShortFunc_718090(TeleportLocomotionClass *this)
{
  int result; // eax

  result = (*(int (__stdcall **)(char *))(*(_DWORD *)&this->LocomotionClass[4] + 16))(&this->LocomotionClass[4]); /*0x718096*/
  LOBYTE(result) = (_BYTE)result == 0; /*0x71809b*/
  return result; /*0x71809e*/
}



// ==== 0x007180A0  JumpjetLocomotionClass::GetCoordinateConditional  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetCoordinateConditional(JumpjetLocomotionClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int TurnRate; // ecx
  int Speed; // edx
  float Climb; // esi

  if ( (*(unsigned __int8 (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 16))(this) ) /*0x7180a9*/
  {
    result = a2; /*0x7180b0*/
    TurnRate = this->TurnRate; /*0x7180b4*/
    Speed = this->Speed; /*0x7180b7*/
    Climb = this->Climb; /*0x7180ba*/
  }
  else
  {
    TurnRate = this->?->?[0]; /*0x7180d7*/
    Speed = this->?->?[1]; /*0x7180d9*/
    Climb = *(float *)&this->?->?[2]; /*0x7180dc*/
    result = a2; /*0x7180df*/
  }
  *a2 = TurnRate; /*0x7180bf*/
  a2[1] = Speed; /*0x7180c1*/
  *((float *)a2 + 2) = Climb; /*0x7180c4*/
  return result; /*0x7180c7*/
}



// ==== 0x00718100  TeleportLocomotionClass::ProcessFactoryExit  this=TeleportLocomotionClass  sig=csp ====
_DWORD *__userpurge JumpjetLocomotionClass::ProcessFactoryExit@<eax>(
        TeleportLocomotionClass *this,
        int a2@<ebp>,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // ebx
  _DWORD *result; // eax
  FootClass *Owner; // ecx
  CellClass *v9; // eax
  int *v10; // [esp+0h] [ebp-10h]
  int v11; // [esp+4h] [ebp-Ch] BYREF
  char v12[4]; // [esp+8h] [ebp-8h]
  int v13; // [esp+Ch] [ebp-4h]

  result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 223))(this->?); /*0x71810d*/
  if ( (_BYTE)result /*0x71814e*/
    || (result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 224))(this->?), (_BYTE)result)
    || (result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 117))(this->?), (_BYTE)result)
    || (result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 118))(this->?), (_BYTE)result) )
  {
    this->?->movementDestination = 0; /*0x718213*/
  }
  else
  {
    *(_DWORD *)v12 = a4; /*0x718160*/
    Owner = this->?; /*0x718164*/
    v11 = a3; /*0x718167*/
    v13 = a5; /*0x71816b*/
    if ( Owner->? && (*((int (__thiscall **)(FootClass *))Owner->TechnoClass + 11))(Owner) == 15 ) /*0x718181*/
    {
      v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v11); /*0x71818d*/
      Cell::ApplyDamage((Cell *)v9, (int)&g_BuildingLoadQueue_Array.?, 1, 1, 0); /*0x71819f*/
    }
    Factory::CalculateExitCell((Factory *)&v11, v6, a2, v10, v11, v12[0]); /*0x7181ac*/
    result = &this->MovingDestination[2]; /*0x7181ba*/
    if ( this->MovingDestination[2] == g_BuildingLoadQueue_Array.? /*0x7181d9*/
      && this->LastCoords[0] == g_BuildingLoadQueue_Array.?[0]
      && this->LastCoords[1] == g_BuildingLoadQueue_Array.?[0] )
    {
      return (*((_DWORD *(__thiscall **)(FootClass *, _DWORD, int))this->?->TechnoClass + 288))(this->?, 0, 1); /*0x718202*/
    }
    else
    {
      LOBYTE(this->LastCoords[2]) = 1; /*0x7181db*/
      *(_DWORD *)this->__pad_18 = *result; /*0x7181e4*/
      this->MovingDestination[0] = this->LastCoords[0]; /*0x7181e9*/
      this->MovingDestination[1] = this->LastCoords[1]; /*0x7181ef*/
    }
  }
  return result; /*0x7181f2*/
}



// ==== 0x00718230  TeleportLocomotionClass::ResetMovementState  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ResetMovementState(TeleportLocomotionClass *this)
{
  *(_DWORD *)this->__pad_18 = g_BuildingLoadQueue_Array.?; /*0x71823d*/
  this->MovingDestination[0] = g_BuildingLoadQueue_Array.?[0]; /*0x718246*/
  this->MovingDestination[1] = g_BuildingLoadQueue_Array.?[0]; /*0x71824f*/
  LOBYTE(this->LastCoords[2]) = 0; /*0x718254*/
  BYTE2(this->LastCoords[2]) = 0; /*0x718257*/
  return (int)this->LocomotionClass; /*0x71825a*/
}



// ==== 0x00718260  ObjectClass::FindPlacementPosition  this=ObjectClass  sig=csp ====
char __thiscall ObjectClass::FindPlacementPosition(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  ObjectClass *altObject; // esi
  int v7; // ebx
  _DWORD *v8; // eax
  int v9; // eax
  void *vtable0; // edx
  int v11; // eax
  void *v12; // edx
  _DWORD *v13; // eax
  int v14; // esi
  int TileIndex; // eax
  int v16; // edx
  CellClass *v17; // eax
  _DWORD *v18; // eax
  int v19; // esi
  int v20; // edi
  int v21; // ebx
  void *v22; // eax
  _DWORD *v23; // eax
  int v24; // esi
  int *v25; // edx
  int v26; // ecx
  int v27; // eax
  int *p_owningHouseIndex; // esi
  _DWORD *vtable3; // ecx
  char *v31; // eax
  _BYTE *v32; // eax
  int *v33; // eax
  int *v34; // ebp
  int v35; // edx
  char v36; // [esp-28h] [ebp-60h]
  int v37; // [esp+14h] [ebp-24h] BYREF
  char v38[4]; // [esp+18h] [ebp-20h] BYREF
  __int16 v39[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  __int16 *v40; // [esp+20h] [ebp-18h]
  __int16 v41[2]; // [esp+24h] [ebp-14h] BYREF
  int v42; // [esp+28h] [ebp-10h] BYREF
  int v43; // [esp+2Ch] [ebp-Ch] BYREF
  int v44; // [esp+30h] [ebp-8h]
  int v45; // [esp+34h] [ebp-4h]

  if ( (_BYTE)a5 ) /*0x71826f*/
  {
    p_owningHouseIndex = &this->owningHouseIndex; /*0x718664*/
    if ( this->owningHouseIndex == g_BuildingLoadQueue_Array.? /*0x718681*/
      && this->fallRate == g_BuildingLoadQueue_Array.?[0]
      && this->nextObject == (ObjectClass *)g_BuildingLoadQueue_Array.?[0] )
    {
      vtable3 = this->?; /*0x71868b*/
      v43 = vtable3[39]; /*0x71869a*/
      v44 = vtable3[40]; /*0x7186a1*/
      v45 = vtable3[41]; /*0x7186a8*/
      (*(void (__stdcall **)(int *))(*vtable3 + 244))(&v43); /*0x7186b3*/
    }
    else
    {
      (*(void (__stdcall **)(int *))(*(_DWORD *)this->? + 244))(&this->owningHouseIndex); /*0x718689*/
    }
    v31 = (char *)this->? + 648; /*0x7186be*/
    *p_owningHouseIndex = *(_DWORD *)v31; /*0x7186c6*/
    this->fallRate = *((_DWORD *)v31 + 1); /*0x7186cb*/
    this->nextObject = (ObjectClass *)*((_DWORD *)v31 + 2); /*0x7186d1*/
    this->nextObject = (ObjectClass *)Cell::GetGroundHeight(&this->owningHouseIndex); /*0x7186e4*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &this->owningHouseIndex)->flags[0] & 0x100) == 0 /*0x7186fa*/
      || (v32 = this->?, v32[140]) )
    {
      *((_BYTE *)this->? + 140) = 0; /*0x718719*/
    }
    else
    {
      v32[140] = 1; /*0x718704*/
      this->nextObject = (ObjectClass *)((char *)this->nextObject + g_BuildingLoadQueue_Array.?[1]); /*0x718711*/
    }
    (*(void (__thiscall **)(void *, int *))(*(_DWORD *)this->? + 240))(this->?, &this->owningHouseIndex); /*0x718726*/
  }
  else
  {
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2)->flags[0] & 0x100) != 0 ) /*0x71828d*/
      altObject = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2)->altObject; /*0x71829e*/
    else
      altObject = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2)->firstObject; /*0x7182b5*/
    v7 = *(_DWORD *)&Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2)->__pad_28[28]; /*0x7182ca*/
    for ( LOBYTE(a5) = 0; altObject; altObject = altObject->nextObject ) /*0x7182d6*/
    {
      if ( !(*((unsigned __int8 (__thiscall **)(ObjectClass *))altObject->AbstractClass + 88))(altObject) /*0x718305*/
        && (*((int (__thiscall **)(ObjectClass *))altObject->AbstractClass + 11))(altObject) == 15
        && (*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 44))(this->?) == 15 )
      {
        v8 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, int *))altObject->AbstractClass + 18))(altObject, &v43); /*0x718310*/
        if ( a2 == *v8 && a3 == v8[1] && a4 == v8[2] ) /*0x718339*/
        {
          v9 = (*((int (__thiscall **)(ObjectClass *))altObject->AbstractClass + 33))(altObject); /*0x718343*/
          vtable0 = altObject->AbstractClass; /*0x718354*/
          v37 = *(_DWORD *)(v9 + 160); /*0x718357*/
          (*((void (__thiscall **)(ObjectClass *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))vtable0 + 91))( /*0x71836e*/
            altObject,
            &v37,
            0,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1,
            0,
            0);
        }
      }
      else if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *))altObject->AbstractClass + 88))(altObject) /*0x718397*/
             || (altObject->? & 4) == 0 )
      {
        if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *))altObject->AbstractClass + 88))(altObject) ) /*0x7183d4*/
        {
          *(_DWORD *)v39 = *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 132))(this->?) + 160); /*0x7183f5*/
          (*(void (__thiscall **)(void *, __int16 *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)this->? /*0x71840f*/
                                                                                                 + 364))(
            this->?,
            v39,
            0,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1,
            0,
            0);
        }
        else if ( (altObject->? & 4) == 0 ) /*0x718428*/
        {
          LOBYTE(a5) = 1; /*0x71842a*/
        }
      }
      else
      {
        v11 = (*((int (__thiscall **)(ObjectClass *))altObject->AbstractClass + 33))(altObject); /*0x71839d*/
        v12 = altObject->AbstractClass; /*0x7183a9*/
        *(_DWORD *)v38 = *(_DWORD *)(v11 + 160); /*0x7183ab*/
        (*((void (__thiscall **)(ObjectClass *, char *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v12 + 91))( /*0x7183c8*/
          altObject,
          v38,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          1,
          0,
          0);
      }
    }
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2)->flags[0] & 0x100) != 0 /*0x71846c*/
      && (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2)->flags[0] & 0x200) == 0 )
    {
      LOBYTE(a5) = 1; /*0x71846e*/
    }
    v13 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)this->? + 72))(this->?, &v43); /*0x71847d*/
    LOWORD(v37) = *v13 / 256; /*0x718490*/
    HIWORD(v37) = v13[1] / 256; /*0x7184a8*/
    *(_DWORD *)v39 = v37; /*0x7184b1*/
    v40 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v39); /*0x7184c0*/
    v38[0] = ObjectClass::processPointerInvalid != 0; /*0x7184d1*/
    if ( v7 != -1 /*0x7184f4*/
      && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v7) + 681)
      && !ObjectClass::processPointerInvalid
      || (_BYTE)a5 )
    {
      v14 = *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)this->? + 132))(this->?) + 1460); /*0x718505*/
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
      v37 = 0; /*0x71852b*/
      LOWORD(a5) = a2 / 256; /*0x71855c*/
      HIWORD(a5) = a3 / 256; /*0x718561*/
      *(_DWORD *)v39 = a5; /*0x71857b*/
      v36 = BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v39) + 80)) & 1; /*0x7185b5*/
      TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v40 + 18, v14, v38[0]); /*0x7185bf*/
      *(_DWORD *)v41 = *LayerClass::Pathfinding_Find( /*0x7185e6*/
                          (Type *)&stru_87F5F0.__pad_58[416],
                          v16,
                          &v42,
                          (__int16 *)&a5,
                          1,
                          TileIndex,
                          v14,
                          v36,
                          1,
                          1,
                          0,
                          0,
                          0,
                          1,
                          (__int16 *)&v37,
                          0,
                          0);
      v17 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x7185ea*/
      v18 = (_DWORD *)(*(int (__thiscall **)(CellClass *, int *))(v17->mapCoords[0] + 72))(v17, &v43); /*0x7185f8*/
      v19 = a2 - *v18; /*0x71860b*/
      v20 = a3 - v18[1]; /*0x718611*/
      v21 = a4 - v18[2]; /*0x718617*/
      v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v41); /*0x71861f*/
      v23 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v22 + 72))(v22, &v43); /*0x71862d*/
      v24 = *v23 + v19; /*0x718635*/
      v25 = (int *)((char *)this->? + 648); /*0x71863d*/
      v26 = v20 + v23[1]; /*0x718643*/
      v27 = v21 + v23[2]; /*0x718645*/
      *v25 = v24; /*0x718647*/
      v25[1] = v26; /*0x71864c*/
      v25[2] = v27; /*0x718650*/
      return 0; /*0x718658*/
    }
  }
  v33 = &this->owningHouseIndex; /*0x718735*/
  if ( this->owningHouseIndex == g_BuildingLoadQueue_Array.? /*0x718754*/
    && this->fallRate == g_BuildingLoadQueue_Array.?[0]
    && this->nextObject == (ObjectClass *)g_BuildingLoadQueue_Array.?[0] )
  {
    v34 = (int *)this->?; /*0x71875e*/
    v43 = v34[39]; /*0x71876d*/
    v44 = v34[40]; /*0x718774*/
    v45 = v34[41]; /*0x71877b*/
    v35 = *v34; /*0x71877f*/
    v33 = &v43; /*0x718782*/
  }
  else
  {
    v34 = (int *)this->?; /*0x718756*/
    v35 = *v34; /*0x718759*/
  }
  (*(void (__thiscall **)(int *, int *))(v35 + 240))(v34, v33); /*0x718789*/
  return 1; /*0x718649*/
}



// ==== 0x007187A0  ObjectClass::ProcessUnitDeploymentAtCell  this=ObjectClass  sig=csp ====
char __thiscall ProcessUnitDeploymentAtCell(TechnoClass *this, int a2, int a3, int a4)
{
  _DWORD *i; // edi
  bool v6; // bl
  int v7; // eax
  _DWORD *v8; // eax
  TechnoClass *v9; // ecx
  int v10; // ecx
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  int *vtable3; // ecx
  int v14; // edi
  void *v15; // eax
  Cell *v16; // eax
  TechnoClass *v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  char v22; // [esp+31h] [ebp-5h]
  __int16 v23[2]; // [esp+32h] [ebp-4h] BYREF

  for ( i = (_DWORD *)Coord::To_Cell((Coord *)&dword_87F7E8, &a2)->firstObject; i; i = (_DWORD *)i[12] ) /*0x7187bf*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*i + 352))(i) ) /*0x7187c5*/
    {
      *(_DWORD *)v23 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 132))(this->vtable3) + 160); /*0x7187e7*/
      (*(void (__thiscall **)(int, __int16 *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)this->vtable3 /*0x718804*/
                                                                                          + 364))(
        this->vtable3,
        v23,
        0,
        *(_DWORD *)&dword_8871E0->__pad_C3C[876],
        0,
        1,
        0,
        0);
    }
  }
  v22 = 0; /*0x718814*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 132))(this->vtable3) + 3278) /*0x71885d*/
    && ((Coord::To_Cell((Coord *)&dword_87F7E8, &a2)->flags & 0x100) != 0
     || Coord::To_Cell((Coord *)&dword_87F7E8, &a2)->landType == 1) )
  {
    v22 = 1; /*0x71885f*/
  }
  v6 = 0; /*0x718867*/
  if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 132))(this->vtable3) + 1660) == 3 ) /*0x718878*/
  {
    v6 = 1; /*0x71887d*/
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 132))(this->vtable3) + 1040) ) /*0x718887*/
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 132))(this->vtable3); /*0x718896*/
      v6 = HouseClass::GainedPoweredCenter(*(HouseClass **)(this->vtable3 + 540), v7); /*0x7188af*/
    }
  }
  v23[0] = a2 / 256; /*0x7188c1*/
  v23[1] = a3 / 256; /*0x7188da*/
  if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v23) + 59) != 2 /*0x718962*/
    || v6
    || *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 132))(this->vtable3) + 3278)
    || (*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 44))(this->vtable3) == 15
    || (Coord::To_Cell((Coord *)&dword_87F7E8, &a2)->flags & 0x100) != 0
    || Coord::To_Cell((Coord *)&dword_87F7E8, &a2)->landType == 1 )
  {
    vtable3 = (int *)this->vtable3; /*0x718a01*/
    v23[0] = a2 / 256; /*0x718a14*/
    v23[1] = a3 / 256; /*0x718a2f*/
    v14 = *vtable3; /*0x718a3c*/
    v15 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v23); /*0x718a46*/
    if ( (*(int (__thiscall **)(int, void *, int, int, _DWORD, int))(v14 + 428))(this->vtable3, v15, -1, -1, 0, 1) == 7 /*0x718a60*/
      || (LOBYTE(v12) = v22) != 0 )
    {
      v23[0] = a2 / 256; /*0x718a80*/
      v23[1] = a3 / 256; /*0x718a95*/
      v16 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v23); /*0x718aa2*/
      if ( !(unsigned __int8)Cell::IsGroundTypeRange(v16) /*0x718abd*/
        || (*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 44))(this->vtable3) == 15 )
      {
        v19 = (*(int (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 132))(this->vtable3); /*0x718b23*/
        v20 = this->vtable3; /*0x718b2f*/
        *(_DWORD *)v23 = *(_DWORD *)(v19 + 160); /*0x718b32*/
        LOBYTE(v12) = (*(char (__thiscall **)(int, __int16 *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v20 + 364))( /*0x718b53*/
                        v20,
                        v23,
                        0,
                        *(_DWORD *)&dword_8871E0->__pad_C3C[876],
                        0,
                        1,
                        0,
                        0);
      }
      else
      {
        *(_BYTE *)(this->vtable3 + 973) = 1; /*0x718ac2*/
        (*(void (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 928))(this->vtable3); /*0x718ace*/
        v12 = (_DWORD *)this->vtable3; /*0x718ad4*/
        v17 = (TechnoClass *)v12[182]; /*0x718ad7*/
        if ( v17 ) /*0x718adf*/
        {
          TechnoClass::MutateAll(v17, v12[266], v12[267]); /*0x718aef*/
          v18 = *(_DWORD *)(this->vtable3 + 728); /*0x718af7*/
          if ( v18 ) /*0x718aff*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v18 + 32))(v18, 1); /*0x718b05*/
          v12 = (_DWORD *)this->vtable3; /*0x718b08*/
          v12[182] = 0; /*0x718b0e*/
        }
      }
    }
  }
  else
  {
    *(_BYTE *)(this->vtable3 + 973) = 1; /*0x71896b*/
    (*(void (__thiscall **)(int))(*(_DWORD *)this->vtable3 + 928))(this->vtable3); /*0x718977*/
    v8 = (_DWORD *)this->vtable3; /*0x71897d*/
    v9 = (TechnoClass *)v8[182]; /*0x718980*/
    if ( v9 ) /*0x718988*/
    {
      TechnoClass::MutateAll(v9, v8[266], v8[267]); /*0x718998*/
      v10 = *(_DWORD *)(this->vtable3 + 728); /*0x7189a0*/
      if ( v10 ) /*0x7189a8*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 32))(v10, 1); /*0x7189ae*/
      *(_DWORD *)(this->vtable3 + 728) = 0; /*0x7189b4*/
    }
    v11 = (_DWORD *)this->vtable3; /*0x7189be*/
    if ( v11[266] ) /*0x7189c1*/
    {
      LOBYTE(v12) = (*(char (__thiscall **)(_DWORD *, _DWORD))(*v11 + 224))(v11, v11[266]); /*0x7189ce*/
    }
    else
    {
      v12 = (_DWORD *)v11[267]; /*0x7189dd*/
      if ( v12 ) /*0x7189e5*/
        LOBYTE(v12) = (*(char (__thiscall **)(_DWORD *, _DWORD))(*v11 + 228))(v11, v11[267]); /*0x7189ee*/
    }
  }
  return (char)v12; /*0x7189d4*/
}



// ==== 0x00718B70  Factory::CalculateExitCell  this=Factory  sig=csp ====
char __userpurge Factory::CalculateExitCell@<al>(Factory *this, int a2@<ebx>, int a3@<ebp>, int *a4, int a5, char a6)
{
  _DWORD *v6; // ecx
  _DWORD *v7; // esi
  int *v8; // edi
  _DWORD *v9; // ecx
  Factory *v10; // ebx
  int v11; // ecx
  int *v12; // edx
  signed int v13; // ebp
  int v14; // ecx
  int v15; // kr20_4
  int v16; // ecx
  int v17; // kr24_4
  int v18; // edx
  int v19; // edx
  _DWORD *v20; // ebp
  CellClass *v21; // eax
  CellClass *v22; // eax
  int *v23; // eax
  int *v24; // edx
  int v25; // ebx
  void *v26; // eax
  CellClass *v27; // eax
  _DWORD *v28; // ecx
  _BYTE *v29; // ebx
  int v30; // ebp
  _DWORD *v31; // eax
  int v32; // ecx
  _DWORD *v33; // eax
  CellClass *v34; // eax
  int v35; // ecx
  int v36; // ebx
  int v37; // eax
  void *v38; // eax
  ObjectPlacement *v39; // eax
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
  char v59; // [esp+0h] [ebp-84h]
  _DWORD *v60; // [esp+18h] [ebp-6Ch]
  char v61; // [esp+1Ch] [ebp-68h]
  char v62; // [esp+24h] [ebp-60h]
  char v65; // [esp+38h] [ebp-4Ch]
  __int16 v66[2]; // [esp+3Ch] [ebp-48h] BYREF
  char v67[4]; // [esp+40h] [ebp-44h] BYREF
  int v68; // [esp+44h] [ebp-40h] BYREF
  char v69; // [esp+48h] [ebp-3Ch]
  unsigned __int16 v70; // [esp+4Ah] [ebp-3Ah]
  __int16 v71[2]; // [esp+4Ch] [ebp-38h] BYREF
  int v72; // [esp+50h] [ebp-34h] BYREF
  _DWORD v73[2]; // [esp+54h] [ebp-30h] BYREF
  void *v74; // [esp+5Ch] [ebp-28h] BYREF
  int v75; // [esp+60h] [ebp-24h] BYREF
  int v76; // [esp+64h] [ebp-20h] BYREF
  int v77; // [esp+68h] [ebp-1Ch]
  int v78; // [esp+6Ch] [ebp-18h] BYREF
  int v79; // [esp+70h] [ebp-14h] BYREF
  int v80; // [esp+74h] [ebp-10h] BYREF
  int v81[3]; // [esp+78h] [ebp-Ch] BYREF

  v7 = v6; /*0x718b74*/
  v8 = v6 + 10; /*0x718b80*/
  if ( v6[10] == g_BuildingLoadQueue_Array.? /*0x718b9d*/
    && v6[11] == g_BuildingLoadQueue_Array.?[0]
    && v6[12] == g_BuildingLoadQueue_Array.?[0] )
  {
    v9 = (_DWORD *)v6[3]; /*0x718ba7*/
    v75 = v9[39]; /*0x718bb6*/
    v76 = v9[40]; /*0x718bbd*/
    v77 = v9[41]; /*0x718bc4*/
    (*(void (__stdcall **)(int *))(*v9 + 244))(&v75); /*0x718bcf*/
  }
  else
  {
    (*(void (__stdcall **)(_DWORD *))(*(_DWORD *)v6[3] + 244))(v6 + 10); /*0x718ba5*/
  }
  v10 = this; /*0x718bd6*/
  v73[0] = *(_DWORD *)this->__pad_0; /*0x718bdf*/
  v11 = *(_DWORD *)this->__pad_0; /*0x718be3*/
  v73[1] = this->field_4; /*0x718be8*/
  v74 = this->field_8; /*0x718bef*/
  if ( v11 == g_BuildingLoadQueue_Array.? /*0x718c13*/
    && this->field_4 == (void *)g_BuildingLoadQueue_Array.?[0]
    && this->field_8 == (void *)g_BuildingLoadQueue_Array.?[0] )
  {
    *v8 = *(_DWORD *)this->__pad_0; /*0x71923b*/
    v7[11] = v10->field_4; /*0x719240*/
    v7[12] = v10->field_8; /*0x719246*/
  }
  else
  {
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v73)->flags[0] & 0x100) == 0 /*0x718c6e*/
      || (v12 = (int *)(v7[3] + 156),
          v75 = *v12,
          v76 = v12[1],
          v13 = v12[2],
          v65 = 1,
          v13 <= (int)(3 * g_BuildingLoadQueue_Array.?[4] + Cell::GetGroundHeight(v73))) )
    {
      v65 = 0; /*0x718c70*/
    }
    if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v7[3] + 44))(v7[3]) == 15 ) /*0x718c80*/
    {
      v14 = v7[3]; /*0x718c86*/
      LOBYTE(this) = 0; /*0x718c89*/
      if ( (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 512))(v14, a3, a2) ) /*0x718c90*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v7[3] + 492))(v7[3]); /*0x718c9f*/
      if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v7[3] + 388))(v7[3]) == 8 /*0x718ce3*/
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v7[3] + 388))(v7[3]) == 9
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v7[3] + 388))(v7[3]) == 7
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v7[3] + 388))(v7[3]) == 25 )
      {
        *(_DWORD *)v71 = *(_DWORD *)(v7[3] + 1444); /*0x718cf4*/
        if ( *(_DWORD *)v71 ) /*0x718cf8*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v71 + 44))(*(_DWORD *)v71) == 1 ) /*0x718d02*/
          {
            v15 = *(_DWORD *)v10->__pad_0; /*0x718d13*/
            v70 = (int)v10->field_4 / 256; /*0x718d28*/
            if ( *(_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)v71 + 440))(*(_DWORD *)v71, v73) == __PAIR32__(v70, v15 / 256) ) /*0x718d3c*/
              LOBYTE(a5) = 1; /*0x718d49*/
          }
        }
        v16 = *(_DWORD *)(v7[3] + 1444); /*0x718d51*/
        *(_DWORD *)v71 = v16; /*0x718d59*/
        if ( v16 ) /*0x718d5d*/
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 44))(v16) == 2 ) /*0x718d67*/
          {
            v17 = *(_DWORD *)v10->__pad_0; /*0x718d78*/
            v18 = **(_DWORD **)v71; /*0x718d86*/
            v70 = (int)v10->field_4 / 256; /*0x718d8b*/
            if ( *(_DWORD *)(*(int (__stdcall **)(_DWORD *))(v18 + 440))(v73) == __PAIR32__(v70, v17 / 256) ) /*0x718da1*/
              LOBYTE(a5) = 1; /*0x718dae*/
          }
        }
        v19 = v7[3]; /*0x718db3*/
        v20 = *(_DWORD **)(v19 + 1444); /*0x718db6*/
        if ( v20 ) /*0x718dbe*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(*v20 + 44))(*(_DWORD *)(v19 + 1444)) == 6 ) /*0x718dcb*/
          {
            v21 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v10); /*0x718dd3*/
            if ( Cell::IsBridge((Cell *)v21) == v20 ) /*0x718de1*/
              LOBYTE(a5) = 1; /*0x718de3*/
          }
        }
      }
      v77 = *v8; /*0x718dee*/
      v78 = v7[11]; /*0x718dfa*/
      v62 = a5; /*0x718e05*/
      v79 = v7[12]; /*0x718e06*/
      v22 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v74); /*0x718e1e*/
      v23 = ObjectPlacement::CalcPosition((ObjectPlacement *)v22, &v80, &v74, v62, v67[0], 0); /*0x718e25*/
      *v8 = *v23; /*0x718e32*/
      v7[11] = v23[1]; /*0x718e3b*/
      v7[12] = v23[2]; /*0x718e41*/
      LOWORD(v68) = *v8 / 256; /*0x718e52*/
      v24 = (int *)v7[3]; /*0x718e63*/
      HIWORD(v68) = v7[11] / 256; /*0x718e69*/
      *(_DWORD *)v71 = v68; /*0x718e76*/
      v25 = *v24; /*0x718e7a*/
      v26 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v71); /*0x718e82*/
      if ( (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD))(v25 + 428))(v7[3], v26, -1, -1, 0) ) /*0x718e8b*/
      {
        *v8 = g_BuildingLoadQueue_Array.?; /*0x718e9d*/
        v7[11] = g_BuildingLoadQueue_Array.?[0]; /*0x718ea4*/
        v7[12] = g_BuildingLoadQueue_Array.?[0]; /*0x718ead*/
      }
      v27 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v76); /*0x718eba*/
      (*(void (__thiscall **)(CellClass *, int *))(v27->mapCoords[0] + 72))(v27, &v79); /*0x718ec8*/
      if ( *v8 == g_BuildingLoadQueue_Array.? /*0x718ef5*/
        && v7[11] == g_BuildingLoadQueue_Array.?[0]
        && v7[12] == g_BuildingLoadQueue_Array.?[0] )
      {
        v28 = (_DWORD *)v7[3]; /*0x718efb*/
        v29 = (_BYTE *)v28[361]; /*0x718efe*/
        if ( v29 ) /*0x718f06*/
        {
          if ( (v29[20] & 2) != 0 ) /*0x718f10*/
          {
            v30 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v28 + 132))(v28) + 1460); /*0x718f1e*/
            v31 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *, _DWORD))(*(_DWORD *)v29 + 76))(v29, &v78, 0); /*0x718f2f*/
            *(_WORD *)v67 = *v31 / 256; /*0x718f45*/
            v32 = v7[3]; /*0x718f54*/
            *(_WORD *)&v67[2] = v31[1] / 256; /*0x718f5c*/
            v68 = *(_DWORD *)v67; /*0x718f65*/
            v33 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v32 + 76))(v32, &v78, 0); /*0x718f70*/
            v34 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v33); /*0x718f79*/
            v35 = v7[3]; /*0x718f7e*/
            *(_DWORD *)v71 = v34; /*0x718f81*/
            v69 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v35 + 188))(v35, 0); /*0x718f8e*/
            memset(v67, 0, sizeof(v67)); /*0x718fae*/
            v36 = v7[3]; /*0x718fb8*/
            v59 = BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v68) + 80)) /*0x718fdd*/
                & 1;
            TileIndex = MapClass::GetTileIndex( /*0x718fee*/
                          (MapClass *)&stru_87F5F0.__pad_58[416],
                          (__int16 *)(*(_DWORD *)v71 + 36),
                          v30,
                          v69);
            v37 = (*(int (__thiscall **)(int))(*(_DWORD *)v36 + 132))(v36); /*0x718ff1*/
            *(_DWORD *)v66 = *LayerClass::Pathfinding_Find( /*0x71901b*/
                                (Type *)&stru_87F5F0.__pad_58[416],
                                (int)&v72,
                                &v72,
                                (__int16 *)&v68,
                                *(_DWORD *)(v37 + 1660),
                                TileIndex,
                                v30,
                                v59,
                                1,
                                1,
                                0,
                                1,
                                0,
                                1,
                                (__int16 *)v67,
                                0,
                                0);
            if ( *(_DWORD *)v66 != g_BuildingLoadQueue_Array.? ) /*0x71901f*/
            {
              v38 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v66); /*0x71903d*/
              v61 = (char)this; /*0x71904f*/
              v60 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v38 + 72))(v38, &v78); /*0x71905a*/
              v39 = (ObjectPlacement *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v66); /*0x71906a*/
              v40 = ObjectPlacement::CalcPosition(v39, v81, v60, v61, v65, 0); /*0x719071*/
              *v8 = *v40; /*0x71907a*/
              v7[11] = v40[1]; /*0x71907f*/
              v7[12] = v40[2]; /*0x719085*/
            }
          }
        }
      }
    }
    else
    {
      v41 = (_BYTE *)v7[3]; /*0x71908d*/
      if ( v41[636] ) /*0x719090*/
      {
        (*(void (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v41 + 240))(v41, v7 + 10); /*0x71909d*/
      }
      else
      {
        v42 = *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v41 + 132))(v41) + 1460); /*0x7190b0*/
        v43 = *(_DWORD *)v10->__pad_0 / 256; /*0x7190cf*/
        v44 = (int)v10->field_4 / 256; /*0x7190d2*/
        LOWORD(this) = v43; /*0x7190dc*/
        HIWORD(this) = v44; /*0x7190e1*/
        if ( __PAIR32__(v44, v43) != g_BuildingLoadQueue_Array.? ) /*0x7190ee*/
        {
          v45 = *(_DWORD *)v7[3]; /*0x719106*/
          v46 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&this); /*0x719114*/
          if ( (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD, int))(v45 + 428))(v7[3], v46, -1, -1, 0, 1) ) /*0x71911d*/
          {
            v47 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&this, v42, v65); /*0x719137*/
            v48 = v7[3]; /*0x71913e*/
            v68 = 0; /*0x719142*/
            v58 = v47; /*0x719163*/
            v49 = (*(int (__thiscall **)(int))(*(_DWORD *)v48 + 132))(v48); /*0x719166*/
            this = (Factory *)*LayerClass::Pathfinding_Find( /*0x71918c*/
                                 (Type *)&stru_87F5F0.__pad_58[416],
                                 (int)&this,
                                 &v72,
                                 (__int16 *)&this,
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
        if ( this != (Factory *)g_BuildingLoadQueue_Array.? ) /*0x71919c*/
        {
          (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v7[3] + 244))(v7[3], v7 + 10); /*0x7191b5*/
          v50 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&this); /*0x7191c5*/
          v51 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v50 + 72))(v50, v81); /*0x7191d6*/
          v52 = (__int16)(v51[1] / 256) << 8; /*0x71920c*/
          *v8 = ((__int16)(*v51 / 256) << 8) + 128; /*0x71920f*/
          v7[11] = v52 + 128; /*0x71921b*/
          v7[12] = 0; /*0x71921e*/
          GroundHeight = Cell::GetGroundHeight(v7 + 10); /*0x719221*/
          v54 = v7[3]; /*0x719226*/
          v7[12] = GroundHeight; /*0x719229*/
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v54 + 240))(v54, v7 + 10); /*0x71922f*/
        }
      }
    }
  }
  if ( *v8 == g_BuildingLoadQueue_Array.? /*0x71926e*/
    && v7[11] == g_BuildingLoadQueue_Array.?[0]
    && v7[12] == g_BuildingLoadQueue_Array.?[0] )
  {
    v56 = (_DWORD *)v7[3]; /*0x719286*/
    v75 = v56[39]; /*0x719295*/
    v76 = v56[40]; /*0x71929c*/
    v77 = v56[41]; /*0x7192a3*/
    (*(void (__thiscall **)(_DWORD *, int *))(*v56 + 240))(v56, &v75); /*0x7192ae*/
    return 0; /*0x7192b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v7[3] + 240))(v7[3], v7 + 10); /*0x719276*/
    return 1; /*0x71927d*/
  }
}



// ==== 0x007192C0  TeleportLocomotionClass::UpdateFacingDirection_3  this=TeleportLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::UpdateFacingDirection_3(TeleportLocomotionClass *this, int a2)
{
  return FacingClass::Update((char *)this->?->?, &a2); /*0x7192df*/
}



// ==== 0x007192F0  TeleportLocomotionClass::Deploy  this=TeleportLocomotionClass  sig=csp ====
char __stdcall UnitClass::Deploy(TeleportLocomotionClass *this)
{
  double v1; // st7
  TeleportLocomotionClass *v2; // esi
  FootClass *Owner; // ecx
  int v4; // eax
  int owningHouseIndex0; // edx
  FootClass *v7; // ecx
  int *v8; // ebp
  int i; // edi
  BulletClass *v10; // ecx
  AnimClass *v11; // eax
  int *location; // ecx
  _DWORD *v13; // eax
  int v14; // edi
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  TeleportLocomotionClass *v18; // eax
  int *p_State; // edi
  int v20; // ebx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // ebx
  int *v25; // eax
  TeleportLocomotionClass *v26; // edx
  int v27; // ecx
  int v28; // edx
  FootClass *v29; // edi
  int v30; // eax
  int *v31; // edi
  CrateClass *v32; // ebx
  FootClass *v33; // edi
  int v34; // eax
  int *v35; // edi
  AnimClass *v36; // eax
  int *v37; // ecx
  AnimClass *v38; // eax
  int *v39; // edx
  FootClass *v40; // edi
  int v41; // eax
  int *v42; // edi
  char PlacementPosition; // al
  int v44; // edi
  int *v45; // ebp
  FootClass *v46; // edi
  int v47; // eax
  int *v48; // edi
  __int16 *v49; // eax
  FootClass *v50; // ecx
  int chronoLockRemaining; // ecx
  AnimClass *v52; // eax
  int *v53; // ecx
  BuildingClass *v54; // [esp+18h] [ebp-30h]
  __int16 v55[2]; // [esp+28h] [ebp-20h] BYREF
  int v56; // [esp+2Ch] [ebp-1Ch] BYREF
  int v57; // [esp+30h] [ebp-18h]
  int v58; // [esp+34h] [ebp-14h]
  char v59[4]; // [esp+38h] [ebp-10h] BYREF
  int v60; // [esp+3Ch] [ebp-Ch]
  int v61; // [esp+44h] [ebp-4h]

  v2 = this; /*0x7192f6*/
  Owner = this->?; /*0x7192fd*/
  v61 = 0; /*0x719300*/
  if ( Owner->? && !*(_DWORD *)&this->Moving && !Owner->? ) /*0x719313*/
    goto LABEL_82; /*0x719319*/
  v4 = *(_DWORD *)&this->Moving; /*0x719331*/
  if ( !v4 ) /*0x719336*/
  {
    owningHouseIndex0 = Owner->?; /*0x719338*/
    if ( owningHouseIndex0 ) /*0x719340*/
    {
      *(_DWORD *)&this->Moving = owningHouseIndex0; /*0x719342*/
      return 0; /*0x71934e*/
    }
  }
  if ( Owner->? ) /*0x719351*/
  {
    if ( !v4 ) /*0x7197ce*/
    {
      Owner->? = 1; /*0x7197d0*/
      v2->State = *(_DWORD *)&stru_A8EB00.?[416]; /*0x7197e4*/
      v2->Timer[0] = v60; /*0x7197ea*/
      v2->Timer[1] = 60; /*0x7197ed*/
      ++*(_DWORD *)&v2->Moving; /*0x7197f4*/
      return 0; /*0x719800*/
    }
  }
  else if ( v4 <= 0 ) /*0x719361*/
  {
    if ( (*(unsigned __int8 (__stdcall **)(TeleportLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) ) /*0x71936a*/
    {
      v7 = v2->?; /*0x719375*/
      v8 = &v2->MovingDestination[2]; /*0x719378*/
      if ( v7->?[0] == v2->MovingDestination[2] && v7->?[1] == v2->LastCoords[0] && v7->?[2] == v2->LastCoords[1] /*0x7193c1*/
        || *v8 == g_BuildingLoadQueue_Array.?
        && v2->LastCoords[0] == g_BuildingLoadQueue_Array.?[0]
        && v2->LastCoords[1] == g_BuildingLoadQueue_Array.?[0] )
      {
        (*((void (__thiscall **)(FootClass *, _DWORD, int))v7->TechnoClass + 288))(v7, 0, 1); /*0x7197b4*/
        (*(void (__stdcall **)(TeleportLocomotionClass *))(*(_DWORD *)v2->LocomotionClass + 72))(v2); /*0x7197bd*/
        return 0; /*0x7197c0*/
      }
      else
      {
        AbstractClass::ClearTargetToMeClearManagerTarget((int)v7); /*0x7193c7*/
        for ( i = *(_DWORD *)&stru_A8EB00.?[364] - 1; i >= 0; --i ) /*0x7193d6*/
        {
          v10 = *(BulletClass **)(*(_DWORD *)&stru_A8EB00.?[352] + 4 * i); /*0x7193e1*/
          if ( v10->BulletClass_field_0x10C == v2->? ) /*0x7193ec*/
            BulletClass::LoseTarget(v10); /*0x7193ee*/
        }
        v11 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x7193fb*/
        if ( v11 ) /*0x719405*/
        {
          location = v2->?->?; /*0x71940b*/
          v56 = *location; /*0x71941c*/
          v57 = location[1]; /*0x719423*/
          v58 = location[2]; /*0x71942f*/
          AnimClass::ctor( /*0x719442*/
            v11,
            *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 828),
            &v56,
            0,
            1,
            (void *)0x600,
            0,
            0);
        }
        v13 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *))v2->?->TechnoClass + 18))(v2->?, v59); /*0x719451*/
        v14 = v2->LastCoords[1]; /*0x719459*/
        v15 = *v13 - *v8; /*0x71945c*/
        v16 = v13[1]; /*0x71945e*/
        v17 = v13[2]; /*0x719461*/
        v56 = v15; /*0x719464*/
        v57 = v16 - v2->LastCoords[0]; /*0x71946f*/
        v58 = v17 - v14; /*0x719473*/
        Math::Sqrt((double)v15 * (double)v15 + (double)(v17 - v14) * (double)(v17 - v14) + (double)v57 * (double)v57); /*0x71949f*/
        LOWORD(v18) = Math::RoundToInt(v1); /*0x7194a7*/
        p_State = &v2->State; /*0x7194ac*/
        this = v18; /*0x7194ba*/
        v2->State = *(_DWORD *)&stru_A8EB00.?[416]; /*0x7194be*/
        v2->Timer[0] = v60; /*0x7194c4*/
        v2->Timer[1] = 0; /*0x7194c7*/
        v20 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x7194ca*/
        if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3064) ) /*0x7194d0*/
        {
          v21 = (int)v18 / *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3060); /*0x7194e3*/
          *p_State = *(_DWORD *)&stru_A8EB00.?[416]; /*0x7194eb*/
          v2->Timer[0] = v60; /*0x7194f1*/
          v2->Timer[1] = v21; /*0x7194f4*/
          v20 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x7194f7*/
        }
        v22 = *p_State; /*0x7194fd*/
        v23 = v2->Timer[1]; /*0x7194ff*/
        if ( *p_State != -1 ) /*0x719505*/
        {
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v22 >= v23 ) /*0x719511*/
            v23 = 0; /*0x719517*/
          else
            v23 -= *(_DWORD *)&stru_A8EB00.?[416] - v22; /*0x719513*/
        }
        v24 = *(_DWORD *)(v20 + 3068); /*0x719519*/
        if ( v23 <= v24 ) /*0x719521*/
        {
          v58 = v24; /*0x71952d*/
          v56 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x719531*/
          v25 = &v56; /*0x719535*/
        }
        else
        {
          v25 = &v2->State; /*0x719523*/
        }
        *p_State = *v25; /*0x71953d*/
        v2->Timer[0] = v25[1]; /*0x719542*/
        v26 = this; /*0x719548*/
        v2->Timer[1] = v25[2]; /*0x71954c*/
        if ( (int)v26 < *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3072) ) /*0x71955b*/
        {
          v27 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3068); /*0x719562*/
          *p_State = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71956a*/
          v2->Timer[0] = v60; /*0x719570*/
          v2->Timer[1] = v27; /*0x719573*/
        }
        v2->?->? = 1; /*0x719579*/
        if ( (*((int (__thiscall **)(FootClass *))v2->?->TechnoClass + 11))(v2->?) == 1 && *((_BYTE *)v2->?[1].? + 3598) ) /*0x719596*/
        {
          v28 = v60; /*0x7195a5*/
          *p_State = *(_DWORD *)&stru_A8EB00.?[416]; /*0x7195ab*/
          v2->Timer[0] = v28; /*0x7195ad*/
          v2->Timer[1] = 0; /*0x7195b0*/
          v2->?->? = 0; /*0x7195b6*/
        }
        if ( v2->?->parasiteEatingMe ) /*0x7195bf*/
          BuildingClass::Deploy(v54, (int)v8, (int)p_State); /*0x7195cf*/
        (*((void (__thiscall **)(FootClass *, _DWORD))v2->?->TechnoClass + 73))(v2->?, 0); /*0x7195db*/
        v29 = v2->?; /*0x7195e1*/
        v30 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))v29->TechnoClass + 33))(v29) + 1400); /*0x7195ee*/
        if ( v30 != -1 || (v30 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 540), v30 != -1) ) /*0x719608*/
        {
          v31 = v29->?; /*0x71960a*/
          v56 = *v31; /*0x719614*/
          v57 = v31[1]; /*0x71961b*/
          v58 = v31[2]; /*0x719624*/
          StartAudioControllerAt(v30, &v56, 0); /*0x71962c*/
        }
        (*((void (__thiscall **)(FootClass *, int *))v2->?->TechnoClass + 109))(v2->?, &v2->MovingDestination[2]); /*0x719637*/
        LOWORD(this) = *v8 / 256; /*0x71964c*/
        HIWORD(this) = v2->LastCoords[0] / 256; /*0x719664*/
        *(_DWORD *)v55 = this; /*0x71966d*/
        v32 = (CrateClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v55); /*0x71967f*/
        (*((void (__thiscall **)(FootClass *, int *))v2->?->TechnoClass + 109))(v2->?, &v2->MovingDestination[2]); /*0x719684*/
        v2->?->? = (v32[26].CrateClass_field_0x08 & 0x100) != 0; /*0x719698*/
        (*((void (__thiscall **)(FootClass *, _DWORD))v2->?->TechnoClass + 115))(v2->?, 0); /*0x7196b2*/
        (*((void (__thiscall **)(FootClass *, int))v2->?->TechnoClass + 73))(v2->?, 1); /*0x7196bf*/
        v33 = v2->?; /*0x7196c5*/
        v34 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))v33->TechnoClass + 33))(v33) + 1396); /*0x7196d2*/
        if ( v34 != -1 || (v34 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 536), v34 != -1) ) /*0x7196ec*/
        {
          v35 = v33->?; /*0x7196ee*/
          v56 = *v35; /*0x7196f8*/
          v57 = v35[1]; /*0x7196ff*/
          v58 = v35[2]; /*0x719708*/
          StartAudioControllerAt(v34, &v56, 0); /*0x719710*/
        }
        (*((void (__thiscall **)(FootClass *, int))v2->?->TechnoClass + 99))(v2->?, 2); /*0x71971c*/
        (*(void (__stdcall **)(TeleportLocomotionClass *))(*(_DWORD *)v2->LocomotionClass + 72))(v2); /*0x719725*/
        CrateClass::ProcessPickup(v32, (int)v2->?); /*0x71972e*/
        (*((void (__thiscall **)(FootClass *, _DWORD, int))v2->?->TechnoClass + 288))(v2->?, 0, 1); /*0x71973c*/
        v36 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x719747*/
        if ( v36 ) /*0x719751*/
        {
          v37 = v2->?->?; /*0x719758*/
          v56 = *v37; /*0x71976b*/
          v57 = v37[1]; /*0x719772*/
          v58 = v37[2]; /*0x71977e*/
          AnimClass::ctor( /*0x719791*/
            v36,
            *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 828),
            &v56,
            0,
            1,
            (void *)0x600,
            0,
            0);
        }
        v2->?->? = 0; /*0x719799*/
        return 0; /*0x7197a3*/
      }
    }
    return 0; /*0x719be5*/
  }
  switch ( v4 ) /*0x719806*/
  {
    case 1: /*0x719806*/
LABEL_82:
      (*(void (__stdcall **)(char *))(*((_DWORD *)this - 1) + 40))((char *)this - 4); /*0x719b99*/
      return 0; /*0x719bac*/
    case 2: /*0x719806*/
      v38 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x71982c*/
      if ( v38 ) /*0x719836*/
      {
        v39 = v2->?->?; /*0x71983c*/
        v56 = *v39; /*0x71984d*/
        v57 = v39[1]; /*0x719854*/
        v58 = v39[2]; /*0x719860*/
        AnimClass::ctor( /*0x719873*/
          v38,
          *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 828),
          &v56,
          0,
          1,
          (void *)0x600,
          0,
          0);
      }
      (*((void (__thiscall **)(FootClass *, _DWORD))v2->?->TechnoClass + 73))(v2->?, 0); /*0x71987e*/
      v40 = v2->?; /*0x719884*/
      v41 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))v40->TechnoClass + 33))(v40) + 1400); /*0x719891*/
      if ( v41 != -1 || (v41 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 540), v41 != -1) ) /*0x7198ab*/
      {
        v42 = v40->?; /*0x7198ad*/
        v56 = *v42; /*0x7198b6*/
        v57 = v42[1]; /*0x7198bd*/
        v58 = v42[2]; /*0x7198c6*/
        StartAudioControllerAt(v41, &v56, 0); /*0x7198ce*/
      }
      v2->?->? = 1; /*0x7198da*/
      v2->?->? = 0; /*0x7198e4*/
      v2->?->? = 0; /*0x7198ee*/
      v2->?->? = 0; /*0x7198fa*/
      PlacementPosition = ObjectClass::FindPlacementPosition( /*0x71991d*/
                            (ObjectClass *)&v2[-1].Piggybackee,
                            v2->?->?[0],
                            v2->?->?[1],
                            v2->?->?[2],
                            0);
      v44 = *(_DWORD *)&v2->Moving + 1; /*0x719925*/
      *(_DWORD *)&v2->Moving = v44; /*0x719928*/
      if ( PlacementPosition ) /*0x71992d*/
      {
        *(_DWORD *)&v2->Moving = v44 + 1; /*0x719936*/
        return 0; /*0x719940*/
      }
      return 0; /*0x71992d*/
    case 3: /*0x719806*/
      if ( ObjectClass::FindPlacementPosition( /*0x719967*/
             (ObjectClass *)((char *)this - 4),
             Owner->?[0],
             Owner->?[1],
             Owner->?[2],
             0) )
      {
        ++*(_DWORD *)&v2->Moving; /*0x719970*/
      }
      v2->?->? = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3052); /*0x719983*/
      return 0; /*0x719990*/
    case 4: /*0x719806*/
      ObjectClass::FindPlacementPosition((ObjectClass *)((char *)this - 4), Owner->?[0], Owner->?[1], Owner->?[2], 1); /*0x7199b8*/
      (*((void (__thiscall **)(FootClass *, int *))v2->?->TechnoClass + 109))(v2->?, &v2->MovingDestination[2]); /*0x7199c6*/
      (*((void (__thiscall **)(FootClass *, _DWORD))v2->?->TechnoClass + 115))(v2->?, 0); /*0x7199d2*/
      (*((void (__thiscall **)(FootClass *, int))v2->?->TechnoClass + 73))(v2->?, 1); /*0x7199df*/
      ++*(_DWORD *)&v2->Moving; /*0x7199e9*/
      return 0; /*0x7199f5*/
  }
  if ( v4 != 5 ) /*0x7199fb*/
  {
    if ( v4 != 6 ) /*0x719b97*/
    {
      if ( v4 == 7 ) /*0x719bb2*/
      {
        Owner->? = 0; /*0x719bb4*/
        TechnoClass::SetFocus((TechnoClass *)v2->?, 0); /*0x719bbf*/
        (*((void (__thiscall **)(FootClass *, _DWORD, int))v2->?->TechnoClass + 288))(v2->?, 0, 1); /*0x719bcc*/
        LOBYTE(v2->LastCoords[2]) = 0; /*0x719bd2*/
        v2->?->? = 0; /*0x719bd9*/
        *(_DWORD *)&v2->Moving = 0; /*0x719bdf*/
      }
      return 0; /*0x719bdf*/
    }
    goto LABEL_82; /*0x719b97*/
  }
  v45 = &this->MovingDestination[2]; /*0x719a03*/
  (*((void (__thiscall **)(FootClass *, int *))Owner->TechnoClass + 109))(Owner, &this->MovingDestination[2]); /*0x719a07*/
  (*((void (__thiscall **)(FootClass *, _DWORD))v2->?->TechnoClass + 115))(v2->?, 0); /*0x719a13*/
  (*((void (__thiscall **)(FootClass *, int))v2->?->TechnoClass + 73))(v2->?, 1); /*0x719a20*/
  v46 = v2->?; /*0x719a26*/
  v47 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))v46->TechnoClass + 33))(v46) + 1396); /*0x719a33*/
  if ( v47 != -1 || (v47 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 536), v47 != -1) ) /*0x719a4d*/
  {
    v48 = v46->?; /*0x719a4f*/
    v56 = *v48; /*0x719a58*/
    v57 = v48[1]; /*0x719a5f*/
    v58 = v48[2]; /*0x719a68*/
    StartAudioControllerAt(v47, &v56, 0); /*0x719a70*/
  }
  v49 = (__int16 *)(*((int (__thiscall **)(FootClass *, TeleportLocomotionClass **))v2->?->TechnoClass + 110))( /*0x719a81*/
                     v2->?,
                     &this);
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v49, 1) ) /*0x719a8d*/
    v2->?->? = 0; /*0x719a99*/
  if ( !v2->?->? ) /*0x719aa3*/
    ProcessUnitDeploymentAtCell((ObjectClass *)&v2[-1].Piggybackee, *v45, v2->LastCoords[0], v2->LastCoords[1]); /*0x719ac4*/
  v50 = v2->?; /*0x719ac9*/
  if ( !v50->? ) /*0x719ad4*/
    return 0; /*0x719ad4*/
  (*((void (__thiscall **)(FootClass *, int))v50->TechnoClass + 99))(v50, 2); /*0x719ade*/
  (*(void (__stdcall **)(TeleportLocomotionClass *))(*(_DWORD *)v2->LocomotionClass + 72))(v2); /*0x719ae7*/
  v2->?->? = 0; /*0x719aee*/
  v2->?->? = 0; /*0x719af7*/
  TechnoClass::SetFocus((TechnoClass *)v2->?, 0); /*0x719b00*/
  (*((void (__thiscall **)(FootClass *, _DWORD, int))v2->?->TechnoClass + 288))(v2->?, 0, 1); /*0x719b0d*/
  chronoLockRemaining = v2->?->?; /*0x719b23*/
  v2->State = *(_DWORD *)&stru_A8EB00.?[416]; /*0x719b29*/
  v2->Timer[0] = v60; /*0x719b2f*/
  v2->Timer[1] = chronoLockRemaining; /*0x719b32*/
  v52 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x719b35*/
  if ( v52 ) /*0x719b3f*/
  {
    v53 = v2->?->?; /*0x719b45*/
    v56 = *v53; /*0x719b56*/
    v57 = v53[1]; /*0x719b5d*/
    v58 = v53[2]; /*0x719b69*/
    AnimClass::ctor( /*0x719b7c*/
      v52,
      *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 828),
      &v56,
      0,
      1,
      (void *)0x600,
      0,
      0);
  }
  ++*(_DWORD *)&v2->Moving; /*0x719b85*/
  return 0; /*0x719327*/
}



// ==== 0x00719BF0  TeleportLocomotionClass::SetCoordinateField  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SetCoordinateField(TeleportLocomotionClass *this)
{
  int v1; // edx
  int result; // eax
  FootClass *LinkedTo; // ecx

  v1 = this->Timer[0]; /*0x719bf5*/
  result = this->Timer[2]; /*0x719bf8*/
  if ( v1 == -1 ) /*0x719bfe*/
  {
LABEL_4:
    if ( result ) /*0x719c10*/
      return result; /*0x719c10*/
    goto LABEL_5; /*0x719c10*/
  }
  if ( *(_DWORD *)&stru_A8EB00.?[416] - v1 < result ) /*0x719c0a*/
  {
    result -= *(_DWORD *)&stru_A8EB00.?[416] - v1; /*0x719c0c*/
    goto LABEL_4; /*0x719c0c*/
  }
LABEL_5:
  this->?->? = 0; /*0x719c12*/
  LinkedTo = this->?; /*0x719c1c*/
  if ( !LinkedTo->? ) /*0x719c1f*/
  {
    Mission::GetMissionDelay((Mission *)LinkedTo); /*0x719c29*/
    if ( !JumpjetLocomotionClass::StubReturnZero_16((JumpjetLocomotionClass *)this->?) ) /*0x719c31*/
      (*((void (__thiscall **)(FootClass *, _DWORD, int))this->?->TechnoClass + 289))(this->?, 0, 1); /*0x719c43*/
  }
  result = this->State; /*0x719c49*/
  if ( result > 0 ) /*0x719c4e*/
    this->State = ++result; /*0x719c51*/
  return result; /*0x719c54*/
}



// ==== 0x00719C60  TeleportLocomotionClass::StubReturnZero_17  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_17(TeleportLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x719c66*/
    return -2147467261; /*0x719c68*/
  *(IID *)a2 = g_CLSID_HoverLocomotion; /*0x719c76*/
  a2[3] = unk_7E9A9C; /*0x719c90*/
  return 0; /*0x719c6d*/
}



// ==== 0x00719CA0  TeleportLocomotionClass::InitMultiFieldArray_0  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::InitMultiFieldArray_0(TeleportLocomotionClass *this, int *pStm)
{
  int *v2; // edi
  int v3; // ebp
  int v4; // eax
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = pStm; /*0x719ca7*/
  v3 = SwizzleManager::SaveLoad((int *)this->LocomotionClass, pStm); /*0x719cb2*/
  if ( v3 < 0 ) /*0x719cb6*/
    return v3; /*0x719cb6*/
  if ( this ) /*0x719cba*/
  {
    *(_DWORD *)this->LocomotionClass = &LocomotionClass::`vftable'; /*0x719cbc*/
    *(_DWORD *)&this->LocomotionClass[4] = &LocomotionClass::`vftable'; /*0x719cc2*/
    v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x719cc9*/
    this->Timer[2] = 0; /*0x719cce*/
    this->Timer[0] = v4; /*0x719cd5*/
    this->Piggybackee = 0; /*0x719cd8*/
    *(_DWORD *)this->LocomotionClass = &TeleportLocomotionClass::`vftable'; /*0x719cdf*/
    *(_DWORD *)&this->LocomotionClass[4] = &TeleportLocomotionClass::`vftable'; /*0x719ce5*/
    *(_DWORD *)this->__pad_18 = &TeleportLocomotionClass::`vftable'; /*0x719cec*/
  }
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v2 + 12))(v2, &pStm, 1, 0); /*0x719cff*/
  if ( !(_BYTE)pStm ) /*0x719d08*/
    return v3; /*0x719d34*/
  Piggybackee = this->Piggybackee; /*0x719d0a*/
  p_Piggybackee = (LPVOID *)&this->Piggybackee; /*0x719d0d*/
  if ( Piggybackee ) /*0x719d12*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x719d17*/
  *p_Piggybackee = 0; /*0x719d21*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x719d2d*/
}



// ==== 0x00719D40  TeleportLocomotionClass::CheckWindowsErrorWrapper_2  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckWindowsErrorWrapper_2(TeleportLocomotionClass *this, int *pPStm, int a3)
{
  IStream *v3; // esi
  TeleportLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x719d46*/
  v4 = this; /*0x719d4b*/
  IPersistStream = LoadIPersistStream((LocomotionClass *)this, pPStm, a3); /*0x719d57*/
  if ( IPersistStream < 0 ) /*0x719d5b*/
    return IPersistStream; /*0x719d5b*/
  if ( !v4->Piggybackee ) /*0x719d66*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x719e03*/
    LOBYTE(a3) = 0; /*0x719e0f*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x719e14*/
    return IPersistStream; /*0x719e18*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x719d6c*/
  LOBYTE(a3) = 1; /*0x719d78*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x719d7d*/
  Piggybackee = v4->Piggybackee; /*0x719d80*/
  pPStm = 0; /*0x719d83*/
  if ( Piggybackee ) /*0x719d8d*/
  {
    v8 = (**(int (__stdcall ***)(ILocomotion *, void *, TeleportLocomotionClass **))Piggybackee)( /*0x719d9e*/
           Piggybackee,
           &unk_820270,
           &this);
    if ( v8 >= 0 ) /*0x719da2*/
    {
      v9 = (int *)this; /*0x719dbb*/
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
int __stdcall JumpjetLocomotionClass::SmallStub_719E20(TeleportLocomotionClass *this)
{
  return 2; /*0x719e25*/
}



// ==== 0x00719E30  TeleportLocomotionClass::UpdateAltitude  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::UpdateAltitude(TeleportLocomotionClass *this, const void *a2, int *a3)
{
  int result; // eax
  char *pad_18; // eax

  result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x719e42*/
  if ( result == -2147467262 ) /*0x719e4c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x719e5b*/
    {
      if ( this ) /*0x719e62*/
        pad_18 = this->__pad_18; /*0x719e64*/
      else
        pad_18 = 0; /*0x719e69*/
      *a3 = (int)pad_18; /*0x719e6b*/
    }
    if ( *a3 ) /*0x719e6e*/
    {
      (*(void (__stdcall **)(TeleportLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 4))(this); /*0x719e82*/
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
int __stdcall JumpjetLocomotionClass::StubReturnZero_18(JumpjetLocomotionClass *this, int a2)
{
  if ( !a2 ) /*0x719e96*/
    return -2147467261; /*0x719e98*/
  if ( LODWORD(this->Wobbles) ) /*0x719ea4*/
    return -2147467259; /*0x719ecb*/
  LODWORD(this->Wobbles) = a2; /*0x719eb2*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x719eb8*/
  return 0; /*0x719e9d*/
}



// ==== 0x00719EE0  JumpjetLocomotionClass::StubReturnZero_19  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_19(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v3; // ecx
  float Wobbles; // ecx

  if ( !a2 ) /*0x719ee9*/
    return -2147467261; /*0x719eeb*/
  v3 = *((_DWORD *)this - 3); /*0x719ef8*/
  if ( v3 ) /*0x719efd*/
  {
    *(_DWORD *)(v3 + 1064) = 0; /*0x719eff*/
    *(_DWORD *)(*((_DWORD *)this - 3) + 1068) = 0; /*0x719f08*/
  }
  Wobbles = this->Wobbles; /*0x719f0e*/
  if ( Wobbles == 0.0 ) /*0x719f13*/
    return 1; /*0x719f20*/
  *(float *)a2 = Wobbles; /*0x719f15*/
  this->Wobbles = 0.0; /*0x719f17*/
  return 0; /*0x719ef0*/
}



// ==== 0x00719F30  JumpjetLocomotionClass::StubReturnTrue_7  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_7(JumpjetLocomotionClass *this)
{
  int v1; // eax
  bool result; // al

  result = 0; /*0x719f75*/
  if ( !(*(unsigned __int8 (__stdcall **)(char *))(*((_DWORD *)this - 5) + 16))((char *)this - 20) ) /*0x719f3c*/
  {
    if ( LODWORD(this->Wobbles) ) /*0x719f43*/
    {
      if ( !BYTE1(this->Speed) ) /*0x719f4a*/
      {
        v1 = *((_DWORD *)this - 3); /*0x719f51*/
        if ( !*(_BYTE *)(v1 + 636) && !LODWORD(this->Climb) && !*(_BYTE *)(v1 + 1709) ) /*0x719f65*/
          return 1; /*0x719f41*/
      }
    }
  }
  return result; /*0x719f71*/
}



// ==== 0x00719F80  JumpjetLocomotionClass::LoadLocomotionFromStream_3  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::LoadLocomotionFromStream_3(JumpjetLocomotionClass *this, _DWORD *pad_0)
{
  _DWORD *v2; // ebp
  float *p_Wobbles; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = pad_0; /*0x719f81*/
  if ( !pad_0 ) /*0x719f88*/
    return -2147467261; /*0x719f91*/
  p_Wobbles = &this->Wobbles; /*0x719f9b*/
  if ( LODWORD(this->Wobbles) ) /*0x719f98*/
  {
    this = 0; /*0x719fa4*/
    v5 = StreamClass::Set2((StreamClass *)&this, p_Wobbles); /*0x719fb5*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x719fc3*/
      WinAPI::Wrapper(v5); /*0x719fc6*/
    if ( !this ) /*0x719fd1*/
      return -2147467259; /*0x719fda*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(this->LocomotionClass[0] + 12))(this, v2); /*0x719fe4*/
    if ( this ) /*0x719fec*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 8))(this); /*0x719ff5*/
      return v6; /*0x719ffc*/
    }
  }
  else
  {
    pad_0 = 0; /*0x71a002*/
    if ( this == (JumpjetLocomotionClass *)24 ) /*0x71a00c*/
      return -2147467259; /*0x71a00c*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))this - 6))( /*0x71a01d*/
           (char *)this - 24,
           &unk_818858,
           &this);
    if ( v7 >= 0 ) /*0x71a021*/
    {
      v9 = this; /*0x71a035*/
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x71a03d*/
      v8 = v9; /*0x71a042*/
      pad_0 = v9->LocomotionClass; /*0x71a045*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x71a027*/
      v8 = 0; /*0x71a02c*/
      pad_0 = 0; /*0x71a02e*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x71a053*/
      WinAPI::Wrapper(v7); /*0x71a056*/
    if ( !v8 ) /*0x71a061*/
      return -2147467259; /*0x71a06a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x71a074*/
    if ( pad_0 ) /*0x71a07c*/
      (*(void (__stdcall **)(_DWORD *))(*pad_0 + 8))(pad_0); /*0x71a081*/
  }
  return v6; /*0x719f8a*/
}



// ==== 0x0071A090  TeleportLocomotionClass::DispatchVirtualCall_7  this=TeleportLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_7(TeleportLocomotionClass *this, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  FootClass *Owner; // ecx
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x71a090*/
  if ( !a2 ) /*0x71a099*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(TeleportLocomotionClass *, _BYTE *))(*(_DWORD *)this->LocomotionClass + 24))( /*0x71a0a8*/
                     this,
                     v6);
    v5[0] = *v3; /*0x71a0ad*/
    v5[1] = v3[1]; /*0x71a0b4*/
    Owner = this->?; /*0x71a0bb*/
    v5[2] = v3[2]; /*0x71a0be*/
    return (*((int (__thiscall **)(FootClass *, _DWORD *))Owner->TechnoClass + 61))(Owner, v5); /*0x71a0c9*/
  }
  return result; /*0x71a0d0*/
}



// ==== 0x0071A0E0  TeleportLocomotionClass::IUnknownAddRef  this=TeleportLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::IUnknownAddRef(TeleportLocomotionClass *this)
{
  return COM::AddRef((LocomotionClass *)this); /*0x71a0ea*/
}



// ==== 0x0071A0F0  TeleportLocomotionClass::IUnknownRelease  this=TeleportLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::IUnknownRelease(TeleportLocomotionClass *this)
{
  return COM::ReleaseRef((LocomotionClass *)this); /*0x71a0fa*/
}



// ==== 0x0071A100  JumpjetLocomotionClass::ShortFunc_71A100  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_71A100(int a1)
{
  return *(_DWORD *)(a1 + 48) != 0; /*0x71a10e*/
}



// ==== 0x0071A120  TeleportLocomotionClass::SmallStub_71A120  this=TeleportLocomotionClass  sig=csp ====
int JumpjetLocomotionClass::SmallStub_71A120(TeleportLocomotionClass *this)
{
  return 76; /*0x71a125*/
}



// ==== 0x0071A130  TeleportLocomotionClass::ConstructLocomotor  this=TeleportLocomotionClass  sig=csp ====
_DWORD *__thiscall JumpjetLocomotionClass::ConstructLocomotor(TeleportLocomotionClass *this, char a2)
{
  ILocomotion *Piggybackee; // eax

  Piggybackee = this->Piggybackee; /*0x71a133*/
  if ( Piggybackee ) /*0x71a138*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x71a13d*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x71a142*/
  if ( (a2 & 1) != 0 ) /*0x71a14c*/
    __3_YAXPAX_Z(this); /*0x71a14f*/
  return this->LocomotionClass; /*0x71a159*/
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
  dbl_B0EC78 = Math::Sqrt(v0 + v0); /*0x71a1de*/
}



// ==== 0x0071A1F0  sub_71A1F0  this=-  sig=ida-proto ====
void sub_71A1F0()
{
  dbl_B0ECC8 = dbl_B0EC78 / 60.0; /*0x71a1fc*/
}



// ==== 0x0071A210  sub_71A210  this=-  sig=ida-proto ====
void sub_71A210()
{
  dbl_B0ECB0 = 1.0 / dbl_B0ECC8; /*0x71a21c*/
}



// ==== 0x0071A230  sub_71A230  this=-  sig=ida-proto ====
void sub_71A230()
{
  dbl_B0ECA8 = 0.0174532925199433 * 45.0; /*0x71a23c*/
}



// ==== 0x0071A250  sub_71A250  this=-  sig=ida-proto ====
void sub_71A250()
{
  dbl_B0EC80 = 0.0174532925199433 * 60.0; /*0x71a25c*/
}



// ==== 0x0071A270  sub_71A270  this=-  sig=ida-proto ====
void sub_71A270()
{
  dbl_B0EC40 = 0.0174532925199433 * 90.0; /*0x71a27c*/
}



// ==== 0x0071A290  sub_71A290  this=-  sig=ida-proto ====
__int64 sub_71A290()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0EC40 - dbl_B0EC80); /*0x71a2a2*/
  result = Math::RoundToInt(v0 * dbl_B0EC78 * 0.5); /*0x71a2b6*/
  dword_B0ECD0 = result; /*0x71a2bb*/
  return result; /*0x71a2c0*/
}



// ==== 0x0071A2D0  sub_71A2D0  this=-  sig=ida-proto ====
void sub_71A2D0()
{
  dbl_B0EC88 = Math::ArcTan((double)dword_B0ECD0 * 0.00390625); /*0x71a2e7*/
}



// ==== 0x0071A300  sub_71A300  this=-  sig=ida-proto ====
void sub_71A300()
{
  dbl_B0ECA0 = Math::ArcTan((double)(2 * dword_B0ECD0) / dbl_B0EC78); /*0x71a322*/
}



// ==== 0x0071A330  sub_71A330  this=-  sig=ida-proto ====
__int64 sub_71A330()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0ECD0) + 0.5); /*0x71a34b*/
  dword_B0ECC4 = result; /*0x71a350*/
  return result; /*0x71a356*/
}



// ==== 0x0071A360  sub_71A360  this=-  sig=ida-proto ====
int sub_71A360()
{
  word_B0EC58 = 0; /*0x71a362*/
  word_B0EC5A = 0; /*0x71a368*/
  return 0; /*0x71a36e*/
}



// ==== 0x0071A370  sub_71A370  this=-  sig=ida-proto ====
int sub_71A370()
{
  dword_B0EC90 = 0; /*0x71a372*/
  dword_B0EC94 = 0; /*0x71a377*/
  dword_B0EC98 = 0; /*0x71a37c*/
  return 0; /*0x71a381*/
}



// ==== 0x0071A390  sub_71A390  this=-  sig=ida-proto ====
int sub_71A390()
{
  dword_B0ECC0 = 0; /*0x71a395*/
  dword_B0ECB8 = 128; /*0x71a39f*/
  dword_B0ECBC = 128; /*0x71a3a4*/
  return 128; /*0x71a3a9*/
}



// ==== 0x0071A3B0  sub_71A3B0  this=-  sig=ida-proto ====
int sub_71A3B0()
{
  dword_B0EC48 = 0; /*0x71a3b2*/
  dword_B0EC4C = 0; /*0x71a3b7*/
  dword_B0EC50 = 0; /*0x71a3bc*/
  dword_B0EC54 = 0; /*0x71a3c1*/
  return 0; /*0x71a3c6*/
}



// ==== 0x0071A3D0  sub_71A3D0  this=-  sig=ida-proto ====
int sub_71A3D0()
{
  dword_B0EC64 = 0; /*0x71a3d7*/
  dword_B0EC68 = 0; /*0x71a3dc*/
  byte_B0EC6C = 1; /*0x71a3e1*/
  byte_B0EC6D = 0; /*0x71a3e8*/
  dword_B0EC60 = (int)&DynamicVectorClass<TemporalClass *>::`vftable'; /*0x71a3ed*/
  dword_B0EC74 = 10; /*0x71a3f7*/
  dword_B0EC70 = 0; /*0x71a401*/
  return atexit(sub_71A410); /*0x71a40c*/
}



// ==== 0x0071A410  sub_71A410  this=-  sig=ida-proto ====
void __cdecl sub_71A410()
{
  dword_B0EC60 = (int)&VectorClass<TemporalClass *>::`vftable'; /*0x71a418*/
  if ( dword_B0EC64 && byte_B0EC6D ) /*0x71a42c*/
  {
    __3_YAXPAX_Z(dword_B0EC64); /*0x71a42f*/
    dword_B0EC64 = 0; /*0x71a437*/
  }
  byte_B0EC6D = 0; /*0x71a43d*/
  dword_B0EC68 = 0; /*0x71a443*/
}



// ==== 0x0071A450  TemporalClass::Constructor  this=TemporalClass  sig=csp ====
int __thiscall TemporalClass::Constructor(TemporalClass *this)
{
  int v2; // eax
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x71a453*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71a458*/
  this->TemporalClass_field_34 = 0; /*0x71a45d*/
  *(_DWORD *)&this->__pad_28[4] = v2; /*0x71a464*/
  this->AbstractClass = &TemporalClass::`vftable'; /*0x71a467*/
  this->? = &TemporalClass::`vftable'; /*0x71a46d*/
  this->? = &TemporalClass::`vftable'; /*0x71a474*/
  this->? = &TemporalClass::`vftable'; /*0x71a47b*/
  if ( g_BuildingLoadQueue_Array.?[0] < g_BuildingLoadQueue_Array.?[5] /*0x71a4b7*/
    || (BYTE1(g_BuildingLoadQueue_Array.?[6]) || !g_BuildingLoadQueue_Array.?[5])
    && g_BuildingLoadQueue_Array.?[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[3] + 8))(
         &g_BuildingLoadQueue_Array.?[3],
         g_BuildingLoadQueue_Array.?[5] + g_BuildingLoadQueue_Array.?[1],
         0) )
  {
    v3 = g_BuildingLoadQueue_Array.?[0]++; /*0x71a4c4*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[4] + 4 * v3) = this; /*0x71a4d3*/
  }
  return (int)this; /*0x71a4d8*/
}



// ==== 0x0071A4E0  TemporalClass::TemporalClass  this=TemporalClass  sig=csp ====
_DWORD *__thiscall TemporalClass::TemporalClass(TemporalClass *this, int a2)
{
  int v3; // eax
  int v5; // [esp+Ch] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x71a4e7*/
  *(_DWORD *)&this->__pad_28[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71a4fb*/
  this->TemporalClass_field_34 = 0; /*0x71a4fe*/
  this->AbstractClass = &TemporalClass::`vftable'; /*0x71a501*/
  this->? = &TemporalClass::`vftable'; /*0x71a507*/
  this->? = &TemporalClass::`vftable'; /*0x71a50e*/
  this->? = &TemporalClass::`vftable'; /*0x71a515*/
  this->creationFrame = a2; /*0x71a51c*/
  *(_DWORD *)this->__pad_28 = 0; /*0x71a51f*/
  *(_DWORD *)&this->__pad_28[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71a529*/
  this->TemporalClass_field_30 = v5; /*0x71a52c*/
  this->TemporalClass_field_34 = 0; /*0x71a52f*/
  this->uniqueId = 0; /*0x71a532*/
  this->q011 = 0; /*0x71a535*/
  if ( g_BuildingLoadQueue_Array.?[0] < g_BuildingLoadQueue_Array.?[5] /*0x71a569*/
    || (BYTE1(g_BuildingLoadQueue_Array.?[6]) || !g_BuildingLoadQueue_Array.?[5])
    && g_BuildingLoadQueue_Array.?[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[3] + 8))(
         &g_BuildingLoadQueue_Array.?[3],
         g_BuildingLoadQueue_Array.?[5] + g_BuildingLoadQueue_Array.?[1],
         0) )
  {
    v3 = g_BuildingLoadQueue_Array.?[0]++; /*0x71a576*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[4] + 4 * v3) = this; /*0x71a585*/
  }
  *((_DWORD *)this + 18) = 0; /*0x71a588*/
  this->IsAllocated = 0; /*0x71a58b*/
  *((_DWORD *)this + 14) = 0; /*0x71a58e*/
  *((_DWORD *)this + 15) = 0; /*0x71a591*/
  return &this->AbstractClass; /*0x71a596*/
}



// ==== 0x0071A650  TemporalClass::SetTarget  this=TemporalClass  sig=csp ====
int __thiscall TemporalClass::SetTarget(TemporalClass *this, int a2)
{
  return AbstractClass::ProcessPower((AbstractClass *)this); /*0x71a65a*/
}



// ==== 0x0071A660  TemporalClass::LoadTemporal  this=TemporalClass  sig=csp ====
int __stdcall TemporalClass::LoadTemporal(TemporalClass *this, int a2)
{
  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x71a671*/
  if ( Prefix_0 >= 0 ) /*0x71a675*/
  {
    if ( this ) /*0x71a679*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x71a682*/
      this->AbstractClass = &TemporalClass::`vftable'; /*0x71a687*/
      this->? = &TemporalClass::`vftable'; /*0x71a68d*/
      this->? = &TemporalClass::`vftable'; /*0x71a694*/
      this->? = &TemporalClass::`vftable'; /*0x71a69b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->creationFrame); /*0x71a6ab*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this->__pad_28); /*0x71a6b9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 16); /*0x71a6c7*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 17); /*0x71a6d5*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 14); /*0x71a6e3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 15); /*0x71a6f1*/
  }
  return Prefix_0; /*0x71a6f8*/
}



// ==== 0x0071A700  TemporalClass::SaveTemporal  this=TemporalClass  sig=csp ====
int __stdcall TemporalClass::SaveTemporal(TemporalClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x71a714*/
}



// ==== 0x0071A720  TemporalClass::ddtor  this=TemporalClass  sig=csp ====
int __stdcall TemporalClass::ddtor(TemporalClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x71a726*/
    return -2147467261; /*0x71a728*/
  *a2 = -1810815964; /*0x71a736*/
  a2[1] = 299099139; /*0x71a73e*/
  a2[2] = 1342205582; /*0x71a747*/
  a2[3] = unk_7E98DC; /*0x71a750*/
  return 0; /*0x71a72d*/
}



// ==== 0x0071A760  TemporalClass::ProcessTimeWarp  this=TemporalClass  sig=csp ====
void **__thiscall TemporalClass::ProcessTimeWarp(TemporalClass *this)
{
  double v1; // st7
  _DWORD *v3; // ecx
  void **result; // eax
  int creationFrame; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  TemporalClass *v14; // ecx
  int WarpPerStep; // ebp
  int v16; // ecx
  int v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int *v23; // ecx
  int v24; // edi
  int v25; // ebp
  int v26; // eax
  int v27; // eax
  int v28; // ebp
  int v29; // eax
  int v30; // ecx
  _DWORD *v31; // edi
  BuildingClass *v32; // eax
  TechnoClass *v33; // ecx
  int v34; // edx
  int v35; // edi
  BuildingClass *v36; // eax
  TechnoClass *v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // [esp+Ch] [ebp-38h]
  int v41; // [esp+20h] [ebp-24h] BYREF
  int v42; // [esp+24h] [ebp-20h]
  int v43; // [esp+28h] [ebp-1Ch]
  _BYTE v44[12]; // [esp+2Ch] [ebp-18h] BYREF
  _BYTE v45[12]; // [esp+38h] [ebp-Ch] BYREF

  v3 = *(_DWORD **)this->__pad_28; /*0x71a76b*/
  if ( v3 && (TemporalClass *)v3[158] == this && this->uniqueId )
  {
    v3[158] = 0; /*0x71a77f*/
    *(_BYTE *)(*(_DWORD *)this->__pad_28 + 624) = 0; /*0x71a78a*/
    return (void **)TagClass::Unlink((TagClass *)this); /*0x71a790*/
  }
  else
  {
    creationFrame = this->creationFrame; /*0x71a79d*/
    if ( !creationFrame ) /*0x71a7a2*/
      goto LABEL_10; /*0x71a7a2*/
    if ( !*(_BYTE *)(creationFrame + 130) ) /*0x71a7a8*/
      goto LABEL_10; /*0x71a7a8*/
    if ( !v3 ) /*0x71a7b6*/
      goto LABEL_10; /*0x71a7b6*/
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v3 + 72))(v3, v44); /*0x71a7c9*/
    v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->creationFrame + 72))(this->creationFrame, v45); /*0x71a7d2*/
    v8 = v6[1]; /*0x71a7d9*/
    v9 = *v7 - *v6; /*0x71a7dc*/
    v10 = v7[1]; /*0x71a7de*/
    v11 = v7[2]; /*0x71a7e1*/
    v41 = v9; /*0x71a7e4*/
    v12 = v11 - v6[2]; /*0x71a7ed*/
    v42 = v10 - v8; /*0x71a7ef*/
    v43 = v12; /*0x71a7f3*/
    Math::Sqrt((double)v9 * (double)v9 + (double)v12 * (double)v12 + (double)(v10 - v8) * (double)(v10 - v8)); /*0x71a81f*/
    LOWORD(v13) = Math::RoundToInt(v1); /*0x71a827*/
    if ( v13 > *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3936) << 8 )
    {
      return (void **)FactoryClass::CompleteItem((FactoryClass *)this); /*0x71a841*/
    }
    else
    {
LABEL_10:
      v14 = (TemporalClass *)this->q011; /*0x71a84e*/
      WarpPerStep = 0; /*0x71a851*/
      if ( v14 ) /*0x71a855*/
        WarpPerStep = TemporalClass::GetWarpPerStep(v14, 1); /*0x71a85e*/
      v16 = this->creationFrame; /*0x71a860*/
      v17 = *(_DWORD *)v16; /*0x71a864*/
      v18 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 740))(v16, 0); /*0x71a866*/
      v19 = (*(int (__thiscall **)(int, int))(v17 + 1016))(this->creationFrame, v18); /*0x71a870*/
      v20 = *((_DWORD *)this + 18); /*0x71a878*/
      v21 = *(_DWORD *)(*(_DWORD *)v19 + 164); /*0x71a87b*/
      this->IsAllocated = v21; /*0x71a881*/
      result = (void **)(v20 - (WarpPerStep + v21)); /*0x71a888*/
      *((_DWORD *)this + 18) = result; /*0x71a88a*/
      if ( (int)result <= 0 )
      {
        if ( *(_DWORD *)this->__pad_28 ) /*0x71a895*/
        {
          result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x71a8c2*/
          if ( result ) /*0x71a8cc*/
          {
            v23 = (int *)(*(_DWORD *)this->__pad_28 + 156); /*0x71a8d2*/
            v41 = *v23; /*0x71a8e3*/
            v42 = v23[1]; /*0x71a8ea*/
            v43 = v23[2]; /*0x71a8f6*/
            result = AnimClass::ctor( /*0x71a909*/
                       (AnimClass *)result,
                       *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 832),
                       &v41,
                       0,
                       1,
                       (void *)0x600,
                       0,
                       0);
          }
        }
        else
        {
          v22 = this->creationFrame; /*0x71a89a*/
          *(_DWORD *)this->__pad_28 = 0; /*0x71a89d*/
          this->q011 = 0; /*0x71a8a2*/
          this->uniqueId = 0; /*0x71a8a5*/
          *((_DWORD *)this + 15) = 0; /*0x71a8a8*/
          *((_DWORD *)this + 14) = 0; /*0x71a8ab*/
          if ( v22 ) /*0x71a8ae*/
            result = (void **)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v22 + 1156))(v22, 0, 1); /*0x71a8b5*/
        }
        if ( *(_DWORD *)this->__pad_28 )
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 132))(this->creationFrame) + 3214) ) /*0x71a922*/
          {
            v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 132))(*(_DWORD *)this->__pad_28); /*0x71a938*/
            v25 = (*(int (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 132))(this->creationFrame); /*0x71a944*/
            v40 = *(_DWORD *)(*(_DWORD *)this->__pad_28 + 540); /*0x71a94f*/
            v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 132))(v24); /*0x71a952*/
            v27 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v25 + 132))( /*0x71a968*/
                    v25,
                    *(_DWORD *)(this->creationFrame + 540),
                    v26);
            HouseClass::AccumulateScore((int *)(this->creationFrame + 336), v27, v40); /*0x71a978*/
          }
          if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 44))(*(_DWORD *)this->__pad_28) == 6 )
          {
            v28 = *(_DWORD *)this->__pad_28; /*0x71a98e*/
            if ( v28 ) /*0x71a993*/
            {
              if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v28 + 1032))(*(_DWORD *)this->__pad_28) > 0 ) /*0x71a9a2*/
                BuildingClass::AnimateUnloadUnits((BuildingClass *)v28, 0); /*0x71a9a7*/
              if ( !dword_A8E7AC && *(_DWORD *)(v28 + 280) ) /*0x71a9b4*/
              {
                do /*0x71a9d6*/
                {
                  v29 = LinkedList::Pop((LinkedList *)(v28 + 276)); /*0x71a9c4*/
                  if ( v29 ) /*0x71a9cb*/
                    (*(void (__thiscall **)(int, int))(*(_DWORD *)v29 + 32))(v29, 1); /*0x71a9d3*/
                }
                while ( *(_DWORD *)(v28 + 280) ); /*0x71a9d6*/
              }
            }
            v30 = *((_DWORD *)this + 15); /*0x71a9de*/
            if ( v30 ) /*0x71a9e3*/
            {
              SuperClass::SetOnHold(v30, 0); /*0x71a9e6*/
              *((_DWORD *)this + 15) = 0; /*0x71a9eb*/
            }
            v31 = *(_DWORD **)this->__pad_28; /*0x71a9ee*/
            if ( v31[185] )
            {
              if ( v31 )
                v32 = (*(int (__thiscall **)(_DWORD))(*v31 + 44))(*(_DWORD *)this->__pad_28) == 6
                    ? (BuildingClass *)v31
                    : 0;
              else
                v32 = 0; /*0x71a9fd*/
              BuildingClass::RemoveLimpet(v32); /*0x71aa15*/
            }
            v33 = *(TechnoClass **)(*(_DWORD *)this->__pad_28 + 728); /*0x71aa1d*/
            if ( v33 ) /*0x71aa25*/
              TechnoClass::MutateAll(v33, this->creationFrame, 0); /*0x71aa2c*/
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)this->__pad_28 + 952))( /*0x71aa3a*/
              *(_DWORD *)this->__pad_28,
              this->creationFrame);
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)this->__pad_28 + 224))( /*0x71aa49*/
              *(_DWORD *)this->__pad_28,
              this->creationFrame);
            result = (void **)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 248))(*(_DWORD *)this->__pad_28); /*0x71aa54*/
            *(_BYTE *)(*(_DWORD *)(v28 + 540) + 508) = 1; /*0x71aa60*/
          }
          else
          {
            v34 = *(_DWORD *)this->__pad_28; /*0x71aa69*/
            v35 = *(_DWORD *)(v34 + 740); /*0x71aa6c*/
            if ( v35 )
            {
              v36 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v35 + 44))(*(_DWORD *)(v34 + 740)) == 6
                  ? (BuildingClass *)v35
                  : 0;
              BuildingClass::UpdateDamageAnim(v36); /*0x71aa90*/
            }
            v37 = *(TechnoClass **)(*(_DWORD *)this->__pad_28 + 728); /*0x71aa98*/
            if ( v37 ) /*0x71aaa0*/
              TechnoClass::MutateAll(v37, this->creationFrame, 0); /*0x71aaa7*/
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)this->__pad_28 + 952))( /*0x71aab5*/
              *(_DWORD *)this->__pad_28,
              this->creationFrame);
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)this->__pad_28 + 224))( /*0x71aac4*/
              *(_DWORD *)this->__pad_28,
              this->creationFrame);
            result = (void **)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 248))(*(_DWORD *)this->__pad_28); /*0x71aacf*/
          }
          v38 = this->creationFrame; /*0x71aad5*/
          if ( v38 ) /*0x71aada*/
            result = (void **)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v38 + 1156))(v38, 0, 1); /*0x71aae1*/
        }
        v39 = this->creationFrame; /*0x71aae7*/
        *(_DWORD *)this->__pad_28 = 0; /*0x71aaea*/
        this->q011 = 0; /*0x71aaef*/
        this->uniqueId = 0; /*0x71aaf2*/
        *((_DWORD *)this + 15) = 0; /*0x71aaf5*/
        *((_DWORD *)this + 14) = 0; /*0x71aaf8*/
        if ( v39 ) /*0x71aafb*/
          return (*(void **(__thiscall **)(int, _DWORD, int))(*(_DWORD *)v39 + 1156))(v39, 0, 1); /*0x71ab02*/
      }
    }
  }
  return result; /*0x71a795*/
}



// ==== 0x0071AB10  TemporalClass::GetWarpPerStep  this=TemporalClass  sig=csp ====
int __thiscall TemporalClass::GetWarpPerStep(TemporalClass *this, int a2)
{
  int WarpPerStep; // ebx
  TemporalClass *v4; // ecx
  int creationFrame; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // eax

  WarpPerStep = 0; /*0x71ab14*/
  v4 = (TemporalClass *)this->q011; /*0x71ab17*/
  if ( v4 && a2 <= 50 ) /*0x71ab25*/
    WarpPerStep = TemporalClass::GetWarpPerStep(v4, a2 + 1); /*0x71ab2e*/
  creationFrame = this->creationFrame; /*0x71ab30*/
  v6 = *(_DWORD *)creationFrame; /*0x71ab35*/
  v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)creationFrame + 740))(creationFrame, 0); /*0x71ab37*/
  v8 = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, int))(v6 + 1016))(this->creationFrame, v7) + 164); /*0x71ab4a*/
  this->IsAllocated = v8; /*0x71ab50*/
  return WarpPerStep + v8; /*0x71ab49*/
}



// ==== 0x0071AB60  ObjectClass::UnlinkFromFactory  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ObjectClass::UnlinkFromFactory(ObjectClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *occupant; // ecx

  result = a2; /*0x71ab60*/
  occupant = (_DWORD *)this->occupant; /*0x71ab68*/
  if ( a2 == occupant ) /*0x71ab6d*/
  {
    result = (_DWORD *)this->owningHouseIndex; /*0x71ab6f*/
    if ( result ) /*0x71ab76*/
    {
      result = FactoryClass::CompleteItem((FactoryClass *)this); /*0x71ab7a*/
      this->owningHouseIndex = 0; /*0x71ab7f*/
    }
  }
  else if ( a2 == (_DWORD *)this->owningHouseIndex ) /*0x71ab8a*/
  {
    this->owningHouseIndex = 0; /*0x71ab90*/
    this->ambientSoundController[2] = 0; /*0x71ab93*/
    this->ambientSoundController[1] = 0; /*0x71ab96*/
    this->ambientSoundController[0] = 0; /*0x71ab99*/
    this->attachedBomb = 0; /*0x71ab9c*/
    if ( occupant ) /*0x71ab9f*/
      return (*(_DWORD *(__thiscall **)(_DWORD *, _DWORD, int))(*occupant + 1156))(occupant, 0, 1); /*0x71aba6*/
  }
  return result; /*0x71ab82*/
}



// ==== 0x0071ABC0  FactoryClass::CompleteItem  this=FactoryClass  sig=csp ====
_DWORD *__thiscall FactoryClass::CompleteItem(FactoryClass *this)
{
  _DWORD *result; // eax
  int v3; // ecx
  BuildingClass *v4; // edi

  result = *(_DWORD **)&this->onHold; /*0x71abc6*/
  v3 = *(_DWORD *)&this->__pad_42[2]; /*0x71abc9*/
  if ( result ) /*0x71abce*/
  {
    if ( v3 ) /*0x71ac71*/
    {
      *(_DWORD *)(v3 + 64) = result; /*0x71ac73*/
      result = *(_DWORD **)&this->onHold; /*0x71ac76*/
      if ( result ) /*0x71ac7b*/
      {
        result[17] = *(_DWORD *)&this->__pad_42[2]; /*0x71ac80*/
        this->production[1] = 0; /*0x71ac83*/
        *(_DWORD *)&this->__pad_42[2] = 0; /*0x71ac86*/
        *(_DWORD *)&this->onHold = 0; /*0x71ac89*/
        this->object = 0; /*0x71ac8c*/
        this->queuedCapacity = 0; /*0x71ac8f*/
        return result; /*0x71ac94*/
      }
    }
    else
    {
      result[17] = 0; /*0x71ac95*/
    }
    goto LABEL_14; /*0x71ac7b*/
  }
  result = (_DWORD *)this->production[1]; /*0x71abd4*/
  if ( v3 ) /*0x71abd9*/
  {
    if ( result ) /*0x71abdd*/
      result[158] = v3; /*0x71abdf*/
    result = *(_DWORD **)&this->__pad_42[2]; /*0x71abe5*/
    result[16] = 0; /*0x71abe8*/
    *(_DWORD *)(*(_DWORD *)&this->__pad_42[2] + 72) = *(_DWORD *)&this->__pad_42[6]; /*0x71abf1*/
    this->production[1] = 0; /*0x71abf4*/
    *(_DWORD *)&this->__pad_42[2] = 0; /*0x71abf7*/
    *(_DWORD *)&this->onHold = 0; /*0x71abfa*/
    this->object = 0; /*0x71abfd*/
    this->queuedCapacity = 0; /*0x71ac00*/
    return result; /*0x71ac05*/
  }
  if ( !result ) /*0x71ac08*/
  {
LABEL_14:
    this->production[1] = 0; /*0x71ac98*/
    *(_DWORD *)&this->__pad_42[2] = 0; /*0x71ac9b*/
    *(_DWORD *)&this->onHold = 0; /*0x71ac9e*/
    this->object = 0; /*0x71aca1*/
    this->queuedCapacity = 0; /*0x71aca4*/
    return result; /*0x71aca4*/
  }
  result[158] = 0; /*0x71ac0e*/
  *(_BYTE *)(this->production[1] + 624) = 0; /*0x71ac17*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this->production[1] + 44))(this->production[1]) == 6 ) /*0x71ac28*/
  {
    v4 = (BuildingClass *)this->production[1]; /*0x71ac2b*/
    LOBYTE(v4->?->HouseClass_field_timer_B[2]) = 1; /*0x71ac36*/
    BuildingClass::EnableTogglePower(v4); /*0x71ac3d*/
    v4->?->recheckTechTree = 1; /*0x71ac49*/
  }
  result = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)this->production[1] + 292))(this->production[1], 2); /*0x71ac57*/
  this->production[1] = 0; /*0x71ac5d*/
  *(_DWORD *)&this->__pad_42[2] = 0; /*0x71ac60*/
  *(_DWORD *)&this->onHold = 0; /*0x71ac63*/
  this->object = 0; /*0x71ac66*/
  this->queuedCapacity = 0; /*0x71ac69*/
  return result; /*0x71ac03*/
}



// ==== 0x0071AD30  nullsub_246  this=-  sig=ida-proto ====
void nullsub_246()
{
  ; /*0x71ad30*/
}



// ==== 0x0071AD40  TriggerClass::UnlinkTags  this=TriggerClass  sig=csp ====
int __thiscall TriggerClass::UnlinkTags(TriggerClass *this)
{
  TriggerClass *nextTrigger; // eax
  int v3; // eax
  int result; // eax

  nextTrigger = this->nextTrigger; /*0x71ad46*/
  if ( nextTrigger ) /*0x71ad4b*/
  {
    nextTrigger[8].destroyed = 0; /*0x71ad4d*/
    this->nextTrigger[8].timer[1] = 0; /*0x71ad56*/
    this->nextTrigger = 0; /*0x71ad5c*/
  }
  v3 = *(_DWORD *)&this->enabled; /*0x71ad5f*/
  if ( v3 ) /*0x71ad64*/
  {
    if ( *(TriggerClass **)(v3 + 64) == this ) /*0x71ad69*/
      *(_DWORD *)(v3 + 64) = 0; /*0x71ad6b*/
    TagClass::Unlink(*(TagClass **)&this->enabled); /*0x71ad71*/
    *(_DWORD *)&this->enabled = 0; /*0x71ad76*/
  }
  result = this->occuredEvents; /*0x71ad79*/
  if ( result ) /*0x71ad7e*/
  {
    if ( *(TriggerClass **)(result + 68) == this ) /*0x71ad83*/
      *(_DWORD *)(result + 68) = 0; /*0x71ad85*/
    result = TagClass::Unlink((TagClass *)this->occuredEvents); /*0x71ad8b*/
    this->occuredEvents = 0; /*0x71ad90*/
  }
  *(_DWORD *)&this->enabled = 0; /*0x71ad93*/
  this->occuredEvents = 0; /*0x71ad96*/
  this->timer[2] = 0; /*0x71ad99*/
  this->timer[1] = 0; /*0x71ad9c*/
  return result; /*0x71ad9f*/
}



// ==== 0x0071ADE0  TagClass::Unlink  this=TagClass  sig=csp ====
int __thiscall TagClass::Unlink(TagClass *this)
{
  int v2; // eax
  int result; // eax
  TagTypeClass *buildingType; // ecx

  this->firstTrigger[8].destroyed = 0; /*0x71ade9*/
  this->firstTrigger[8].timer[1] = 0; /*0x71adf2*/
  v2 = this->q011; /*0x71adf8*/
  this->firstTrigger = 0; /*0x71adfd*/
  if ( v2 ) /*0x71ae00*/
  {
    if ( *(TagClass **)(v2 + 64) == this ) /*0x71ae05*/
      *(_DWORD *)(v2 + 64) = 0; /*0x71ae07*/
    TagClass::Unlink(*((TagClass **)this + 17)); /*0x71ae0d*/
  }
  result = this->uniqueId; /*0x71ae12*/
  if ( result ) /*0x71ae17*/
  {
    if ( *(TagClass **)(result + 68) == this ) /*0x71ae1c*/
      *(_DWORD *)(result + 68) = 0; /*0x71ae1e*/
    result = TagClass::Unlink(*((TagClass **)this + 16)); /*0x71ae24*/
  }
  buildingType = this->buildingType; /*0x71ae29*/
  this->q011 = 0; /*0x71ae2c*/
  this->uniqueId = 0; /*0x71ae31*/
  *((_DWORD *)this + 15) = 0; /*0x71ae34*/
  *((_DWORD *)this + 14) = 0; /*0x71ae37*/
  if ( buildingType ) /*0x71ae3a*/
    return (*((int (__thiscall **)(TagTypeClass *, _DWORD, int))buildingType->AbstractClass + 289))(buildingType, 0, 1); /*0x71ae41*/
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
          v4 = Coord::To_Cell(&dword_87F7E8, v5); /*0x71aef8*/
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
            if ( v12[135] == dword_A83D4C ) /*0x71b00b*/
            {
              v13 = (_DWORD *)(*((int (__thiscall **)(#375 **, _BYTE *, _DWORD))*v12 + 19))(v12, v20, 0); /*0x71b016*/
              LOWORD(v21) = *v13 / 256; /*0x71b029*/
              v14 = (int)v13[1]; /*0x71b031*/
              HIWORD(v21) = (int)v14 / 256; /*0x71b042*/
              if ( CreateTriggerClassIfFarEnough(4, BYTE4(v14), v21) ) /*0x71b04c*/
                VoxClass::FindAndPlay(aEvaOreminerund, -1); /*0x71b05f*/
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
      result = dword_A83D4C; /*0x71b167*/
      if ( dword_A83D4C ) /*0x71b16e*/
        return (#375 *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 40) + 336))(*(_DWORD *)(this + 40)); /*0x71b175*/
    }
  }
  return result; /*0x71b17b*/
}



// ==== 0x0071B190  TemporalClass::StubReturn80  this=TemporalClass  sig=csp ====
int TemporalClass::StubReturn80(TemporalClass *this)
{
  return 80; /*0x71b195*/
}



// ==== 0x0071B1A0  TemporalClass::StubReturn70  this=TemporalClass  sig=csp ====
int TemporalClass::StubReturn70(TemporalClass *this)
{
  return 70; /*0x71b1a5*/
}



// ==== 0x0071B1B0  TemporalClass::ProcessEvent  this=TemporalClass  sig=csp ====
_DWORD *__thiscall TemporalClass::ProcessEvent(TemporalClass *this, char a2)
{
  int v3; // eax
  TemporalClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &TemporalClass::`vftable'; /*0x71b1bd*/
  this->? = &TemporalClass::`vftable'; /*0x71b1c3*/
  this->? = &TemporalClass::`vftable'; /*0x71b1ca*/
  this->? = &TemporalClass::`vftable'; /*0x71b1d1*/
  v5 = this; /*0x71b1df*/
  v3 = (*(int (__thiscall **)(int *, TemporalClass **))(g_BuildingLoadQueue_Array.?[3] + 16))( /*0x71b1e3*/
         &g_BuildingLoadQueue_Array.?[3],
         &v5);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.?[0] ) /*0x71b1f3*/
  {
    --g_BuildingLoadQueue_Array.?[0]; /*0x71b1f8*/
    for ( ; /*0x71b1fe*/
          v3 < g_BuildingLoadQueue_Array.?[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.?[4] + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[4] + 4 * v3) )
    {
      ++v3; /*0x71b206*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x71b21a*/
  if ( (a2 & 1) != 0 ) /*0x71b224*/
    __3_YAXPAX_Z(this); /*0x71b227*/
  return &this->AbstractClass; /*0x71b231*/
}



// ==== 0x0071B240  _DynamicVectorClass_PAVTemporalClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TemporalClass::Destroy(_DynamicVectorClass_PAVTemporalClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x71b246*/
  this->m_10 = 0; /*0x71b249*/
  if ( v2 && BYTE1(this->m_C) ) /*0x71b250*/
  {
    __3_YAXPAX_Z(v2); /*0x71b256*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71b25e*/
  }
  BYTE1(this->m_C) = 0; /*0x71b261*/
  this->m_8 = 0; /*0x71b264*/
}



// ==== 0x0071B270  _DynamicVectorClass_PAVTemporalClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TemporalClass::GetItemIndex(_DynamicVectorClass_PAVTemporalClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x71b270*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x71b285*/
  else
    return 0; /*0x71b277*/
}



// ==== 0x0071B290  _VectorClass_PAVTemporalClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TemporalClass::Get(_VectorClass_PAVTemporalClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x71b29a*/
}



// ==== 0x0071B2A0  _VectorClass_PAVTemporalClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TemporalClass::Add(_VectorClass_PAVTemporalClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x71b2a2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x71b2ad*/
  {
    v3 = 0; /*0x71b2af*/
    if ( m_8 <= 0 ) /*0x71b2b3*/
      return 1; /*0x71b2d3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x71b2b5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x71b2bb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x71b2c4*/
    {
      ++v3; /*0x71b2c6*/
      ++v4; /*0x71b2c7*/
      if ( v3 >= m_8 ) /*0x71b2cc*/
        return 1; /*0x71b2cc*/
    }
  }
  return 0; /*0x71b2ce*/
}



// ==== 0x0071B2E0  _VectorClass_PAVTemporalClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TemporalClass::Release(_VectorClass_PAVTemporalClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x71b2ec*/
  {
    LOBYTE(this->m_C) = 0; /*0x71b2f6*/
    if ( a3 ) /*0x71b2fc*/
      v4 = a3; /*0x71b312*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x71b30e*/
    LOBYTE(this->m_C) = 1; /*0x71b316*/
    if ( v4 ) /*0x71b31a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x71b325*/
      {
        m_8 = this->m_8; /*0x71b32c*/
        if ( a2 < m_8 ) /*0x71b331*/
          m_8 = a2; /*0x71b333*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x71b339*/
          ++i; /*0x71b33e*/
        if ( BYTE1(this->m_C) ) /*0x71b34b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x71b356*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x71b35e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x71b367*/
      this->m_8 = a2; /*0x71b36f*/
      BYTE1(this->m_C) = a3 == 0; /*0x71b372*/
      return 1; /*0x71b378*/
    }
    else
    {
      return 0; /*0x71b31f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVTemporalClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x71b382*/
    return 1; /*0x71b388*/
  }
}



// ==== 0x0071B390  _VectorClass_PAVTemporalClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TemporalClass::Remove(_VectorClass_PAVTemporalClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x71b39d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x71b3a3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71b3ab*/
  }
  BYTE1(this->m_C) = 0; /*0x71b3ae*/
  this->m_8 = 0; /*0x71b3b1*/
}



// ==== 0x0071B3C0  _VectorClass_PAVTemporalClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TemporalClass::GetSize(_VectorClass_PAVTemporalClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x71b3c0*/
    return 0; /*0x71b3c8*/
  m_8 = this->m_8; /*0x71b3ce*/
  result = 0; /*0x71b3d1*/
  if ( m_8 <= 0 ) /*0x71b3d5*/
    return -1; /*0x71b3ec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x71b3db*/
  {
    if ( ++result >= m_8 ) /*0x71b3ea*/
      return -1; /*0x71b3ea*/
  }
  return result; /*0x71b3ca*/
}



// ==== 0x0071B400  _VectorClass_PAVTemporalClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TemporalClass::GetCapacity(_VectorClass_PAVTemporalClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x71b400*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x71b415*/
  else
    return 0; /*0x71b407*/
}



// ==== 0x0071B420  _DynamicVectorClass_PAVTemporalClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TemporalClass::SetCapacity(
        _DynamicVectorClass_PAVTemporalClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x71b42c*/
  {
    LOBYTE(this->m_C) = 0; /*0x71b432*/
    if ( a3 ) /*0x71b438*/
      v4 = a3; /*0x71b44e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x71b44a*/
    LOBYTE(this->m_C) = 1; /*0x71b452*/
    if ( !v4 ) /*0x71b456*/
      return 0; /*0x71b4ca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x71b458*/
    {
      m_8 = this->m_8; /*0x71b45f*/
      if ( a2 < m_8 ) /*0x71b464*/
        m_8 = a2; /*0x71b466*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x71b46c*/
        ++i; /*0x71b471*/
      if ( BYTE1(this->m_C) ) /*0x71b47e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x71b489*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x71b491*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x71b49a*/
    this->m_8 = a2; /*0x71b4a2*/
    BYTE1(this->m_C) = a3 == 0; /*0x71b4a5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVTemporalClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x71b4ae*/
  }
  v7 = this->m_8; /*0x71b4b1*/
  if ( v7 < this->m_10 ) /*0x71b4b9*/
    this->m_10 = v7; /*0x71b4bb*/
  return 1; /*0x71b4be*/
}



// ==== 0x0071B4D0  _DynamicVectorClass_PAVTemporalClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TemporalClass::FindItemIndex(_DynamicVectorClass_PAVTemporalClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x71b4d0*/
  result = 0; /*0x71b4d3*/
  if ( m_10 <= 0 ) /*0x71b4d8*/
    return -1; /*0x71b4ef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x71b4de*/
  {
    if ( ++result >= m_10 ) /*0x71b4ed*/
      return -1; /*0x71b4ed*/
  }
  return result; /*0x71b4f2*/
}



// ==== 0x0071B500  _VectorClass_PAVTemporalClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TemporalClass::QueryInterface(_VectorClass_PAVTemporalClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x71b503*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TemporalClass *>::`vftable'; /*0x71b506*/
  if ( v3 && BYTE1(this->m_C) ) /*0x71b510*/
  {
    __3_YAXPAX_Z(v3); /*0x71b518*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71b520*/
  }
  BYTE1(this->m_C) = 0; /*0x71b52b*/
  this->m_8 = 0; /*0x71b531*/
  if ( (a2 & 1) != 0 ) /*0x71b538*/
    __3_YAXPAX_Z(this); /*0x71b53b*/
  return this->__pad_0; /*0x71b545*/
}



// ==== 0x0071B550  _DynamicVectorClass_PAVTemporalClass::Constructor_VectorClass_TemporalClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TemporalClass::Constructor_VectorClass_TemporalClass___(
        _DynamicVectorClass_PAVTemporalClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x71b553*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TemporalClass *>::`vftable'; /*0x71b556*/
  if ( v3 && BYTE1(this->m_C) ) /*0x71b560*/
  {
    __3_YAXPAX_Z(v3); /*0x71b568*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71b570*/
  }
  BYTE1(this->m_C) = 0; /*0x71b57b*/
  this->m_8 = 0; /*0x71b581*/
  if ( (a2 & 1) != 0 ) /*0x71b588*/
    __3_YAXPAX_Z(this); /*0x71b58b*/
  return this->__pad_0; /*0x71b595*/
}



// ==== 0x0071B5A0  sub_71B5A0  this=-  sig=ida-proto ====
void sub_71B5A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71b5ac*/
  dbl_B0ECF8 = Math::Sqrt(v0 + v0); /*0x71b5be*/
}



// ==== 0x0071B5D0  sub_71B5D0  this=-  sig=ida-proto ====
void sub_71B5D0()
{
  dbl_B0ED48 = dbl_B0ECF8 / 60.0; /*0x71b5dc*/
}



// ==== 0x0071B5F0  sub_71B5F0  this=-  sig=ida-proto ====
void sub_71B5F0()
{
  dbl_B0ED30 = 1.0 / dbl_B0ED48; /*0x71b5fc*/
}



// ==== 0x0071B610  sub_71B610  this=-  sig=ida-proto ====
void sub_71B610()
{
  dbl_B0ED28 = 0.0174532925199433 * 45.0; /*0x71b61c*/
}



// ==== 0x0071B630  sub_71B630  this=-  sig=ida-proto ====
void sub_71B630()
{
  dbl_B0ED00 = 0.0174532925199433 * 60.0; /*0x71b63c*/
}



// ==== 0x0071B650  sub_71B650  this=-  sig=ida-proto ====
void sub_71B650()
{
  dbl_B0ECD8 = 0.0174532925199433 * 90.0; /*0x71b65c*/
}



// ==== 0x0071B670  sub_71B670  this=-  sig=ida-proto ====
__int64 sub_71B670()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0ECD8 - dbl_B0ED00); /*0x71b682*/
  result = Math::RoundToInt(v0 * dbl_B0ECF8 * 0.5); /*0x71b696*/
  dword_B0ED50 = result; /*0x71b69b*/
  return result; /*0x71b6a0*/
}



// ==== 0x0071B6B0  sub_71B6B0  this=-  sig=ida-proto ====
void sub_71B6B0()
{
  dbl_B0ED08 = Math::ArcTan((double)dword_B0ED50 * 0.00390625); /*0x71b6c7*/
}



// ==== 0x0071B6E0  sub_71B6E0  this=-  sig=ida-proto ====
void sub_71B6E0()
{
  dbl_B0ED20 = Math::ArcTan((double)(2 * dword_B0ED50) / dbl_B0ECF8); /*0x71b702*/
}



// ==== 0x0071B710  sub_71B710  this=-  sig=ida-proto ====
__int64 sub_71B710()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0ED50) + 0.5); /*0x71b72b*/
  dword_B0ED44 = result; /*0x71b730*/
  return result; /*0x71b736*/
}



// ==== 0x0071B740  sub_71B740  this=-  sig=ida-proto ====
int sub_71B740()
{
  word_B0ECF0 = 0; /*0x71b742*/
  word_B0ECF2 = 0; /*0x71b748*/
  return 0; /*0x71b74e*/
}



// ==== 0x0071B750  sub_71B750  this=-  sig=ida-proto ====
int sub_71B750()
{
  dword_B0ED10 = 0; /*0x71b752*/
  dword_B0ED14 = 0; /*0x71b757*/
  dword_B0ED18 = 0; /*0x71b75c*/
  return 0; /*0x71b761*/
}



// ==== 0x0071B770  sub_71B770  this=-  sig=ida-proto ====
int sub_71B770()
{
  dword_B0ED40 = 0; /*0x71b775*/
  dword_B0ED38 = 128; /*0x71b77f*/
  dword_B0ED3C = 128; /*0x71b784*/
  return 128; /*0x71b789*/
}



// ==== 0x0071B790  sub_71B790  this=-  sig=ida-proto ====
int sub_71B790()
{
  dword_B0ECE0 = 0; /*0x71b792*/
  dword_B0ECE4 = 0; /*0x71b797*/
  dword_B0ECE8 = 0; /*0x71b79c*/
  dword_B0ECEC = 0; /*0x71b7a1*/
  return 0; /*0x71b7a6*/
}



// ==== 0x0071B7B0  TerrainClass::CleanupMembers  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::CleanupMembers(int this)
{
  AbstractClass *v2; // edi
  int v3; // eax
  int Vtable3; // eax
  void *vtable1; // edx
  int v6; // edi
  int v7; // eax
  signed int v8; // eax
  int v9; // ecx
  char *i; // eax
  _DWORD *v11; // eax
  int v13[2]; // [esp+8h] [ebp-8h] BYREF

  v2 = (AbstractClass *)(this + 4); /*0x71b7b9*/
  *(_DWORD *)this = &TerrainClass::`vftable'; /*0x71b7bc*/
  *(_DWORD *)(this + 8) = &TerrainClass::`vftable'; /*0x71b7c2*/
  *(_DWORD *)(this + 12) = &TerrainClass::`vftable'; /*0x71b7c9*/
  *(_DWORD *)(this + 4) = &off_7F5200; /*0x71b7d0*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x71b7d6*/
  v13[0] = this; /*0x71b7eb*/
  v3 = (*(int (__thiscall **)(_DWORD *, int *))(dword_A8E988 + 16))(&dword_A8E988, v13); /*0x71b7ef*/
  if ( v3 != -1 && v3 < dword_A8E998 && v3 < --dword_A8E998 ) /*0x71b80a*/
  {
    do /*0x71b822*/
    {
      ++v3; /*0x71b812*/
      *((_DWORD *)dword_A8E98C + v3 - 1) = *((_DWORD *)dword_A8E98C + v3); /*0x71b816*/
    }
    while ( v3 < dword_A8E998 ); /*0x71b822*/
  }
  if ( byte_A8E9A0 && *(_DWORD *)(this + 200) ) /*0x71b82d*/
  {
    *(_BYTE *)(this + 144) = 1; /*0x71b839*/
    TerrainClass::ApplyCellModifications((TerrainClass *)this); /*0x71b840*/
  }
  Vtable3 = AbstractClass::GetVtable3(v2); /*0x71b846*/
  vtable1 = g_BuildingLoadQueue_Array.?; /*0x71b84b*/
  v6 = Vtable3; /*0x71b851*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x71b855*/
  {
    if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x71b862*/
    {
      qsort( /*0x71b872*/
        g_BuildingLoadQueue_Array.TechnoTypeClass,
        (size_t)g_BuildingLoadQueue_Array.?,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      vtable1 = g_BuildingLoadQueue_Array.?; /*0x71b877*/
      g_BuildingLoadQueue_Array.? = 0; /*0x71b880*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x71b88a*/
    }
    v13[0] = v6; /*0x71b895*/
    v7 = BinaryArraySearch((int)g_BuildingLoadQueue_Array.TechnoTypeClass, (int)vtable1, v13); /*0x71b8a0*/
    if ( v7 ) /*0x71b8a7*/
    {
      v8 = (signed int)(v7 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x71b8af*/
      if ( v8 != -1 ) /*0x71b8b5*/
      {
        v9 = v8 + 1; /*0x71b8b7*/
        for ( i = (char *)g_BuildingLoadQueue_Array.?; /*0x71b8c1*/
              v9 < (int)g_BuildingLoadQueue_Array.?;
              i = (char *)g_BuildingLoadQueue_Array.? )
        {
          v11 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v9++; /*0x71b8c9*/
          *(v11 - 2) = *v11; /*0x71b8cf*/
          *(v11 - 1) = v11[1]; /*0x71b8d5*/
        }
        g_BuildingLoadQueue_Array.? = i - 1; /*0x71b8ea*/
        *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x71b8ef*/
        *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x71b8ff*/
        g_BuildingLoadQueue_Array.? = 0; /*0x71b903*/
      }
    }
  }
  return ObjectClass::Dtor((ObjectClass *)this); /*0x71b910*/
}



// ==== 0x0071B920  TerrainClass::UpdateAnims  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::UpdateAnims(
        TerrainClass *this,
        int a2,
        int a3,
        int landType,
        int a5,
        int a6,
        int a7,
        void **a8)
{
  int result; // eax
  int v10; // edi
  int v11; // ebx
  int v12; // ebp
  int v13; // edx
  int v14; // eax
  void *WarheadVersusMultiplier; // eax
  wchar_t *v16; // eax
  int *v17; // eax
  void *v18; // [esp-8h] [ebp-44h]
  ObjectClass *v19; // [esp+0h] [ebp-3Ch]
  int v20; // [esp+10h] [ebp-2Ch]
  _DWORD v21[3]; // [esp+14h] [ebp-28h] BYREF
  int v22[3]; // [esp+20h] [ebp-1Ch] BYREF
  int v23; // [esp+2Ch] [ebp-10h] BYREF
  int v24; // [esp+30h] [ebp-Ch]
  int v25; // [esp+34h] [ebp-8h]

  result = landType; /*0x71b923*/
  v20 = 0; /*0x71b92f*/
  if ( landType ) /*0x71b937*/
  {
    if ( *(_BYTE *)(landType + 327) && !*(_BYTE *)(*(_DWORD *)&this->__pad_C0[8] + 563) ) /*0x71b957*/
    {
      result = TechnoClass::CreateDestructionEffect((TechnoClass *)this); /*0x71b986*/
      v20 = result; /*0x71b98e*/
      if ( result == 5 ) /*0x71b992*/
        return result; /*0x71b992*/
      if ( result == 4 ) /*0x71b9a1*/
      {
        if ( *(_BYTE *)(*(_DWORD *)&this->__pad_C0[8] + 689) ) /*0x71b9ad*/
        {
          a8 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x71b9c8*/
          if ( a8 ) /*0x71b9ce*/
          {
            v11 = this->location[1]; /*0x71b9e0*/
            v12 = this->location[2]; /*0x71b9e3*/
            v22[0] = this->location[0]; /*0x71b9e8*/
            v10 = v22[0]; /*0x71b9de*/
            v22[1] = this->location[1]; /*0x71b9ef*/
            v22[2] = this->location[2]; /*0x71b9f8*/
            v23 = this->location[0]; /*0x71b9fe*/
            v24 = this->location[1]; /*0x71ba05*/
            v13 = this->location[2]; /*0x71ba0b*/
            v21[0] = this->location[0]; /*0x71ba0e*/
            v25 = v13; /*0x71ba12*/
            v14 = this->location[2]; /*0x71ba19*/
            v21[1] = this->location[1]; /*0x71ba26*/
            v21[2] = v14; /*0x71ba2a*/
            landType = Coord::To_Cell((Coord *)&dword_87F7E8, v21)->landType; /*0x71ba3e*/
            v18 = (void *)Return::HRESULT_Fail(v10, v11, v12); /*0x71ba51*/
            WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier( /*0x71ba7b*/
                                                100,
                                                *(_DWORD *)&dword_8871E0->__pad_C3C[876],
                                                landType,
                                                &v23);
            AnimClass::ctor((AnimClass *)a8, WarheadVersusMultiplier, v22, 0, 1, (void *)0x2600, v18, 0); /*0x71ba85*/
          }
          v23 = this->location[0]; /*0x71ba96*/
          v24 = this->location[1]; /*0x71baa2*/
          v25 = this->location[2]; /*0x71baa9*/
          PlaySoundEffectAt(&v23, 100, 0, *(_DWORD *)&dword_8871E0->__pad_C3C[876], 1, 0); /*0x71babf*/
          (*(void (__thiscall **)(TerrainClass *, int *))(this->vtable0 + 440))(this, &landType); /*0x71bacd*/
          CellChainReact(v19); /*0x71bad5*/
        }
        else if ( this->__pad_C0[12] ) /*0x71badc*/
        {
          TerrainClass::ClearAnimationLinkFlags(this); /*0x71bae8*/
        }
        else if ( !this->__pad_C0[13] ) /*0x71baef*/
        {
          this->__pad_C0[13] = 1; /*0x71baf9*/
          v16 = dword_A8ED84; /*0x71bb00*/
          *(_DWORD *)this->__pad_C0 = 2; /*0x71bb10*/
          this->Type = (int)v16; /*0x71bb16*/
          *(_DWORD *)this->IsBurning = v24; /*0x71bb1c*/
          this->height = 2; /*0x71bb1f*/
          this->Animation[0] = 0; /*0x71bb22*/
        }
        v17 = (int *)(*(int (__thiscall **)(TerrainClass *, int *, _DWORD))(this->vtable0 + 300))(this, &v23, 0); /*0x71bb37*/
        Cell::CreateCrater(*v17, v17[1], v17[2], v17[3], (char)v19); /*0x71bb5e*/
        (*(void (__thiscall **)(TerrainClass *, int))(this->vtable0 + 220))(this, 1); /*0x71bb69*/
        (*(void (__thiscall **)(TerrainClass *))(this->vtable0 + 248))(this); /*0x71bb73*/
      }
    }
    return v20; /*0x71bb79*/
  }
  return result; /*0x71b939*/
}



// ==== 0x0071BB90  TerrainClass::Construct  this=TerrainClass  sig=csp ====
void **__thiscall TerrainClass::Construct(TerrainClass *this, void *a2, __int16 *a3)
{
  TerrainTypeClass *v4; // eax
  int v5; // eax
  TerrainTypeClass *v6; // eax
  int v7; // eax
  int vtable2; // ebp
  _DWORD *v9; // edi
  int i; // eax
  _DWORD *v11; // ecx
  int v13; // [esp+10h] [ebp-Ch] BYREF
  int v14; // [esp+14h] [ebp-8h]
  int v15; // [esp+18h] [ebp-4h]
  __int16 *Vtable3; // [esp+24h] [ebp+8h]

  ObjectClass::ctor((ObjectClass *)this); /*0x71bb99*/
  this->Animation[0] = 0; /*0x71bba4*/
  LOBYTE(this->Animation[1]) = 0; /*0x71bbaa*/
  v4 = *(TerrainTypeClass **)&stru_A8EB00.?[416]; /*0x71bbb0*/
  this->height = 0; /*0x71bbb5*/
  this->Type = v4; /*0x71bbbb*/
  *(_DWORD *)this->__pad_C0 = 0; /*0x71bbc1*/
  *(_DWORD *)&this->__pad_C0[4] = 1; /*0x71bbc7*/
  *(_DWORD *)&this->__pad_C0[8] = a2; /*0x71bbd4*/
  this->__pad_C0[12] = 0; /*0x71bbda*/
  this->__pad_C0[13] = 0; /*0x71bbe0*/
  this->TerrainClass_field_rect_D0[0] = 0; /*0x71bbe6*/
  this->TerrainClass_field_rect_D0[1] = 0; /*0x71bbec*/
  this->TerrainClass_field_rect_D0[2] = 0; /*0x71bbf2*/
  this->TerrainClass_field_rect_D0[3] = 0; /*0x71bbf8*/
  this->ObjectClass = &TerrainClass::`vftable'; /*0x71bbff*/
  this->? = &off_7F5200; /*0x71bc05*/
  this->? = &TerrainClass::`vftable'; /*0x71bc0b*/
  this->? = &TerrainClass::`vftable'; /*0x71bc12*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x71bc19*/
  this->? = *(_DWORD *)(*(_DWORD *)&this->__pad_C0[8] + 160); /*0x71bc2e*/
  if ( *(_DWORD *)a3 != g_BuildingLoadQueue_Array.?[4] ) /*0x71bc3b*/
  {
    v5 = (*a3 << 8) + 128; /*0x71bc61*/
    v14 = (a3[1] << 8) + 128; /*0x71bc66*/
    v13 = v5; /*0x71bc6e*/
    v15 = 0; /*0x71bc72*/
    if ( !TerrainClass::ProcessSpawnAnim(this, &v13, 0) ) /*0x71bc76*/
      ObjectClass::Destroy((ObjectClass *)this); /*0x71bc81*/
  }
  v6 = *(TerrainTypeClass **)&stru_A8EB00.?[416]; /*0x71bc86*/
  *(_DWORD *)this->__pad_C0 = 0; /*0x71bc93*/
  this->Type = v6; /*0x71bc99*/
  *(_DWORD *)&this->IsBurning = v14; /*0x71bc9f*/
  this->height = 0; /*0x71bca2*/
  if ( dword_A8E998 < dword_A8E990 /*0x71bcd7*/
    || (byte_A8E995 || !dword_A8E990)
    && dword_A8E99C > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E988 + 8))(
         &dword_A8E988,
         dword_A8E990 + dword_A8E99C,
         0) )
  {
    v7 = dword_A8E998++; /*0x71bce4*/
    *((_DWORD *)dword_A8E98C + v7) = this; /*0x71bcf3*/
  }
  Vtable3 = (__int16 *)AbstractClass::GetVtable3((AbstractClass *)&this->?); /*0x71bd02*/
  if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x71bd0e*/
    goto LABEL_18; /*0x71bd0e*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x71bd16*/
  {
    vtable2 = (int)g_BuildingLoadQueue_Array.?; /*0x71bd1f*/
    if ( (int)g_BuildingLoadQueue_Array.? < 0 ) /*0x71bd23*/
      return &this->ObjectClass; /*0x71bd23*/
  }
  else
  {
    vtable2 = 10; /*0x71bd18*/
  }
  v9 = (_DWORD *)__2_YAPAXI_Z(8 * ((int)g_BuildingLoadQueue_Array.? + vtable2)); /*0x71bd38*/
  if ( v9 ) /*0x71bd3f*/
  {
    for ( i = 0; i < (int)g_BuildingLoadQueue_Array.?; v9[2 * i - 1] = v11[1] ) /*0x71bd58*/
    {
      v11 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * i++; /*0x71bd60*/
      v9[2 * i - 2] = *v11; /*0x71bd66*/
    }
    __3_YAXPAX_Z(g_BuildingLoadQueue_Array.TechnoTypeClass); /*0x71bd82*/
    g_BuildingLoadQueue_Array.TechnoTypeClass = v9; /*0x71bd91*/
    g_BuildingLoadQueue_Array.? = (char *)g_BuildingLoadQueue_Array.? + vtable2; /*0x71bd97*/
    g_BuildingLoadQueue_Array.? = 0; /*0x71bd9c*/
LABEL_18:
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = Vtable3; /*0x71bda2*/
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = this; /*0x71bdc0*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x71bdca*/
    ++g_BuildingLoadQueue_Array.?; /*0x71bdd0*/
  }
  return &this->ObjectClass; /*0x71bdd7*/
}



// ==== 0x0071BDF0  ObjectClass::ProcessFoggedState  this=TerrainClass  sig=csp ====
int __thiscall ObjectClass::ProcessFoggedState(ObjectClass *this)
{
  int v2; // eax
  int v3; // eax
  int vtable2; // ebp
  _DWORD *v5; // edi
  int i; // eax
  _DWORD *v7; // ecx
  int Vtable3; // [esp+14h] [ebp-4h]

  ObjectClass::ctor(this); /*0x71bdf9*/
  this->q02B = 0; /*0x71be03*/
  this->q0B0 = 0; /*0x71be09*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71be0f*/
  this->height = 0; /*0x71be14*/
  this->Type = v2; /*0x71be1a*/
  this->nextObject = 0; /*0x71be20*/
  this->q031 = 1; /*0x71be26*/
  this->q0C8 = 0; /*0x71be30*/
  this->q0CC = 0; /*0x71be36*/
  this->q0CD = 0; /*0x71be3c*/
  this->attachedTag = 0; /*0x71be42*/
  this->q0D4 = 0; /*0x71be48*/
  this->occupant = 0; /*0x71be4e*/
  this->q0DC = 0; /*0x71be54*/
  this->AbstractClass = &TerrainClass::`vftable'; /*0x71be5a*/
  this->? = &off_7F5200; /*0x71be60*/
  this->? = &TerrainClass::`vftable'; /*0x71be66*/
  this->? = &TerrainClass::`vftable'; /*0x71be6d*/
  if ( dword_A8E998 < dword_A8E990 /*0x71bea8*/
    || (byte_A8E995 || !dword_A8E990)
    && dword_A8E99C > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E988 + 8))(
         &dword_A8E988,
         dword_A8E990 + dword_A8E99C,
         0) )
  {
    v3 = dword_A8E998++; /*0x71beb5*/
    *((_DWORD *)dword_A8E98C + v3) = this; /*0x71bec4*/
  }
  Vtable3 = AbstractClass::GetVtable3((AbstractClass *)&this->?); /*0x71bed3*/
  if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x71bedf*/
    goto LABEL_15; /*0x71bedf*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x71bee7*/
  {
    vtable2 = (int)g_BuildingLoadQueue_Array.?; /*0x71bef0*/
    if ( (int)g_BuildingLoadQueue_Array.? < 0 ) /*0x71bef4*/
      return (int)this; /*0x71bef4*/
  }
  else
  {
    vtable2 = 10; /*0x71bee9*/
  }
  v5 = (_DWORD *)__2_YAPAXI_Z(8 * ((int)g_BuildingLoadQueue_Array.? + vtable2)); /*0x71bf09*/
  if ( v5 ) /*0x71bf10*/
  {
    for ( i = 0; i < (int)g_BuildingLoadQueue_Array.?; v5[2 * i - 1] = v7[1] ) /*0x71bf29*/
    {
      v7 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * i++; /*0x71bf31*/
      v5[2 * i - 2] = *v7; /*0x71bf37*/
    }
    __3_YAXPAX_Z(g_BuildingLoadQueue_Array.TechnoTypeClass); /*0x71bf53*/
    g_BuildingLoadQueue_Array.TechnoTypeClass = v5; /*0x71bf62*/
    g_BuildingLoadQueue_Array.? = (char *)g_BuildingLoadQueue_Array.? + vtable2; /*0x71bf68*/
    g_BuildingLoadQueue_Array.? = 0; /*0x71bf6d*/
LABEL_15:
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = Vtable3; /*0x71bf73*/
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = this; /*0x71bf91*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x71bf9b*/
    ++g_BuildingLoadQueue_Array.?; /*0x71bfa1*/
  }
  return (int)this; /*0x71bfa8*/
}



// ==== 0x0071BFB0  TerrainClass::CheckNearbyObjects  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::CheckNearbyObjects(TerrainClass *this, int a2)
{
  int v2; // esi
  _DWORD *v4; // eax
  IPersistStream v5; // eax
  int v6; // ecx
  _BYTE v8[4]; // [esp+8h] [ebp-10h] BYREF
  _BYTE v9[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = a2; /*0x71bfb4*/
  if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay((ObjectClass *)this) ) /*0x71bfbc*/
    return 0; /*0x71c063*/
  a2 = *(_DWORD *)(*((int (__thiscall **)(TerrainClass *, _BYTE *))this->ObjectClass + 110))(this, v8); /*0x71bfdf*/
  if ( v2 ) /*0x71bfe3*/
  {
    if ( v2 == 1 || v2 == 3 ) /*0x71bfeb*/
    {
      MapClass::FillRevealBuffer((MapClass *)&stru_87F5F0.__pad_58[416], &a2, this); /*0x71bff8*/
      v4 = (_DWORD *)(*((int (__thiscall **)(TerrainClass *, _BYTE *))this->ObjectClass + 43))(this, v9); /*0x71c00d*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v4, &this->TerrainClass_field_rect_D0[2]); /*0x71c01a*/
      v5 = g_TacticalClass_Instance[45]; /*0x71c02d*/
      v6 = this->TerrainClass_field_rect_D0[3]; /*0x71c035*/
      this->TerrainClass_field_rect_D0[2] += *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x71c03a*/
      this->TerrainClass_field_rect_D0[3] = *(_DWORD *)&v5 + v6; /*0x71c03c*/
      return 1; /*0x71c045*/
    }
  }
  else
  {
    MapClass::ApplyOverlayReveal((MapClass *)&stru_87F5F0.__pad_58[416], &a2, (char *)this); /*0x71c053*/
  }
  return 1; /*0x71c026*/
}



// ==== 0x0071C070  TerrainClass::ClearCellFlags  this=TerrainClass  sig=csp ====
_BYTE *__thiscall TerrainClass::ClearCellFlags(TerrainClass *this, _DWORD *a2)
{
  int v2; // ebx
  _DWORD *v3; // ecx
  _BYTE *result; // eax

  if ( dword_A8B230[130].uniqueId == 1 ) /*0x71c07d*/
    v2 = *(_DWORD *)(*(_DWORD *)&this->__pad_C0[8] + 684); /*0x71c093*/
  else
    v2 = *(_DWORD *)(*(_DWORD *)&this->__pad_C0[8] + 680); /*0x71c085*/
  v3 = a2; /*0x71c099*/
  LOWORD(a2) = *a2 / 256; /*0x71c0ab*/
  HIWORD(a2) = v3[1] / 256; /*0x71c0c4*/
  result = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x71c0d6*/
  if ( (v2 & 1) != 0 ) /*0x71c0de*/
    result[292] &= ~4u; /*0x71c0e0*/
  if ( (v2 & 2) != 0 ) /*0x71c0ea*/
    result[292] &= ~8u; /*0x71c0ec*/
  if ( (v2 & 4) != 0 ) /*0x71c0f7*/
    result[292] &= ~0x10u; /*0x71c0f9*/
  return result; /*0x71c0f6*/
}



// ==== 0x0071C110  TerrainClass::SetOccupyBit_PassableTerrain  this=TerrainClass  sig=csp ====
_BYTE *__thiscall TerrainClass::SetOccupyBit_PassableTerrain(TerrainClass *this, _DWORD *a2)
{
  int v2; // ebx
  _DWORD *v3; // ecx
  _BYTE *result; // eax

  if ( dword_A8B230[130].uniqueId == 1 ) /*0x71c11d*/
    v2 = *(_DWORD *)(*(_DWORD *)&this->__pad_C0[8] + 684); /*0x71c133*/
  else
    v2 = *(_DWORD *)(*(_DWORD *)&this->__pad_C0[8] + 680); /*0x71c125*/
  v3 = a2; /*0x71c139*/
  LOWORD(a2) = *a2 / 256; /*0x71c14b*/
  HIWORD(a2) = v3[1] / 256; /*0x71c164*/
  result = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x71c176*/
  if ( (v2 & 1) != 0 ) /*0x71c17e*/
    result[292] |= 4u; /*0x71c180*/
  if ( (v2 & 2) != 0 ) /*0x71c18a*/
    result[292] |= 8u; /*0x71c18c*/
  if ( (v2 & 4) != 0 ) /*0x71c197*/
    result[292] |= 0x10u; /*0x71c199*/
  return result; /*0x71c196*/
}



// ==== 0x0071C1B0  TerrainClass::Draw  this=TerrainClass  sig=csp ====
void __thiscall TerrainClass::Draw(TerrainClass *this, int *a2, int *a3)
{
  int *v4; // eax
  int (__thiscall **vtable0)(TerrainClass *); // edx
  int *v6; // ebp
  unsigned int v7; // ebx
  int v8; // edx
  int (__thiscall **v9)(TerrainClass *); // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // edx
  int v14; // ebp
  int v15; // esi
  int v16; // [esp+10h] [ebp-14h]
  __int16 v17[2]; // [esp+14h] [ebp-10h] BYREF
  int *v18; // [esp+18h] [ebp-Ch] BYREF
  int v19; // [esp+1Ch] [ebp-8h] BYREF
  int v20; // [esp+20h] [ebp-4h]

  *(_DWORD *)v17 = *(_DWORD *)(*((int (__thiscall **)(TerrainClass *, int **))this->ObjectClass + 110))(this, &v18); /*0x71c1d4*/
  v4 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17); /*0x71c1d8*/
  vtable0 = (int (__thiscall **)(TerrainClass *))this->ObjectClass; /*0x71c1dd*/
  v6 = v4; /*0x71c1df*/
  v18 = v4; /*0x71c1e3*/
  v16 = vtable0[27](this); /*0x71c1ec*/
  if ( v16 ) /*0x71c1f0*/
  {
    if ( *(_BYTE *)(*(_DWORD *)&this->__pad_C0[8] + 691) ) /*0x71c1fe*/
    {
      v7 = this->Animation[0]; /*0x71c208*/
    }
    else if ( this->__pad_C0[13] ) /*0x71c210*/
    {
      v7 = (unsigned __int8)this->__pad_C0[13] + this->Animation[0]; /*0x71c225*/
    }
    else
    {
      v7 = this->? < 2; /*0x71c22f*/
    }
    v8 = a2[1]; /*0x71c23a*/
    v9 = (int (__thiscall **)(TerrainClass *))this->ObjectClass; /*0x71c23d*/
    v19 = *a2; /*0x71c23f*/
    v20 = v8; /*0x71c245*/
    v10 = v9[116](this); /*0x71c249*/
    v11 = -ZCoordToScreenY(v10); /*0x71c25b*/
    if ( !v6[13] ) /*0x71c258*/
      TacticalClass::SetView(v6, 0, 0x10000, 0, 1000, 1000, 1000); /*0x71c27b*/
    v12 = *(_DWORD *)&this->__pad_C0[8]; /*0x71c280*/
    if ( *(_BYTE *)(v12 + 689) ) /*0x71c286*/
    {
      v13 = *(_DWORD *)&stru_87F5F0.__pad_58[116]; /*0x71c294*/
      v14 = *((__int16 *)v6 + 133); /*0x71c29a*/
      v20 -= 16; /*0x71c2ac*/
    }
    else
    {
      v13 = v6[13]; /*0x71c2b2*/
      v14 = *((__int16 *)v6 + 134); /*0x71c2b5*/
    }
    if ( *(_BYTE *)(v12 + 691) || this->__pad_C0[13] ) /*0x71c2c6*/
      v15 = 11776; /*0x71c2d0*/
    else
      v15 = 19968; /*0x71c2d7*/
    DrawToSurfaceSHP((int)g_DSurface_Hidden_2, v13, v16, v7, &v19, a3, v15, 0, v11 - 12, 2, v14, 0, 0, 0, 0, 0); /*0x71c304*/
    if ( byte_822CF1 ) /*0x71c310*/
      DrawToSurfaceSHP( /*0x71c34e*/
        (int)g_DSurface_Hidden_2,
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
void __thiscall TerrainClass::ProcessDestructionAnim(TerrainClass *this, int *a2, int *a3)
{
  int *v4; // ebx
  int v5; // ebp
  unsigned __int8 v6; // al
  int v7; // edx
  int (__thiscall **vtable0)(TerrainClass *); // eax
  int v9; // eax
  int v10; // edi
  int v11; // edx
  int v12; // esi
  unsigned int v13; // [esp+10h] [ebp-10h] BYREF
  __int16 v14[2]; // [esp+14h] [ebp-Ch] BYREF
  int v15; // [esp+18h] [ebp-8h] BYREF
  int v16; // [esp+1Ch] [ebp-4h]

  *(_DWORD *)v14 = *(_DWORD *)(*((int (__thiscall **)(TerrainClass *, unsigned int *))this->ObjectClass + 110))( /*0x71c384*/
                                this,
                                &v13);
  v4 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14); /*0x71c391*/
  v5 = (*((int (__thiscall **)(TerrainClass *))this->ObjectClass + 27))(this); /*0x71c396*/
  if ( v5 ) /*0x71c39a*/
  {
    v6 = this->__pad_C0[13]; /*0x71c3a0*/
    v13 = 0; /*0x71c3a6*/
    if ( v6 ) /*0x71c3b0*/
      v13 = v6 + this->Animation[0]; /*0x71c3bf*/
    v7 = a2[1]; /*0x71c3c9*/
    vtable0 = (int (__thiscall **)(TerrainClass *))this->ObjectClass; /*0x71c3cc*/
    v15 = *a2; /*0x71c3ce*/
    v16 = v7; /*0x71c3d4*/
    v9 = vtable0[116](this); /*0x71c3d8*/
    v10 = -ZCoordToScreenY(v9); /*0x71c3ea*/
    if ( !v4[13] ) /*0x71c3e7*/
      TacticalClass::SetView(v4, 0, 0x10000, 0, 1000, 1000, 1000); /*0x71c40a*/
    if ( *(_BYTE *)(*(_DWORD *)&this->__pad_C0[8] + 689) ) /*0x71c415*/
    {
      v11 = *(_DWORD *)&stru_87F5F0.__pad_58[116]; /*0x71c423*/
      v12 = *((__int16 *)v4 + 133); /*0x71c429*/
      v16 -= 16; /*0x71c43b*/
    }
    else
    {
      v11 = v4[13]; /*0x71c441*/
      v12 = *((__int16 *)v4 + 134); /*0x71c444*/
    }
    DrawToSurfaceSHP((int)g_DSurface_Hidden_2, v11, v5, v13, &v15, a3, 3584, 0, v10 - 4, 2, v12, 0, 0, 0, 0, 0); /*0x71c477*/
    if ( byte_822CF1 ) /*0x71c483*/
      DrawToSurfaceSHP( /*0x71c4be*/
        (int)g_DSurface_Hidden_2,
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
int __thiscall TerrainClass::IsPlacementValid(TerrainClass *this, int a2, int a3, int a4, int a5, int a6)
{
  _WORD *v7; // esi
  int v8; // edi
  _WORD *v9; // eax
  __int16 v10; // dx
  int *v11; // eax
  __int16 v12; // dx
  __int16 v13; // ax
  int v15; // [esp-Ch] [ebp-24h]
  int v16; // [esp+10h] [ebp-8h]
  __int16 v17[2]; // [esp+14h] [ebp-4h] BYREF
  int v18; // [esp+1Ch] [ebp+4h]

  v7 = (_WORD *)(*((int (__thiscall **)(TerrainClass *, _DWORD))this->ObjectClass + 66))(this, 0); /*0x71c4e8*/
  v8 = *(_DWORD *)(a2 + 36); /*0x71c4ea*/
  while ( *v7 != 0x7FFF || v7[1] != 0x7FFF ) /*0x71c503*/
  {
    v9 = v7; /*0x71c517*/
    if ( *(_BYTE *)(*(_DWORD *)&this->__pad_C0[8] + 688) ) /*0x71c50f*/
    {
      v10 = v7[1]; /*0x71c51e*/
      v7 += 2; /*0x71c522*/
      LOWORD(v18) = v8 + *v9; /*0x71c52b*/
      HIWORD(v18) = HIWORD(v8) + v10; /*0x71c530*/
      v15 = 5; /*0x71c541*/
      *(_DWORD *)v17 = v18; /*0x71c543*/
    }
    else
    {
      v12 = *v7; /*0x71c55f*/
      v13 = v7[1]; /*0x71c562*/
      v7 += 2; /*0x71c566*/
      LOWORD(v16) = v8 + v12; /*0x71c56f*/
      HIWORD(v16) = HIWORD(v8) + v13; /*0x71c574*/
      v15 = 1; /*0x71c585*/
      *(_DWORD *)v17 = v16; /*0x71c587*/
    }
    v11 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17); /*0x71c54d*/
    if ( !(unsigned __int8)CellClass::IsPassable(v11, v15, 0, 0) ) /*0x71c55b*/
      return 7; /*0x71c59a*/
  }
  return 0; /*0x71c58e*/
}



// ==== 0x0071C5B0  TerrainClass::PlayAmbientAnimation  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::PlayAmbientAnimation(TerrainClass *this)
{
  int v2; // eax
  char v3; // si
  AnimClass *v4; // ebx
  int *v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  BuildingClass *v9; // eax
  BuildingClass *v10; // esi
  int v12[3]; // [esp+4h] [ebp-18h] BYREF
  char v13[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( this->__pad_C0[13] ) /*0x71c5b6*/
    return 0; /*0x71c5b6*/
  if ( this->__pad_C0[12] ) /*0x71c5c4*/
    return 0; /*0x71c5c4*/
  v2 = *(_DWORD *)&this->__pad_C0[8]; /*0x71c5d2*/
  if ( *(_DWORD *)(v2 + 156) != 6 || *(_BYTE *)(v2 + 689) ) /*0x71c5e5*/
    return 0; /*0x71c69d*/
  v3 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x71c60a*/
  v4 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x71c611*/
  if ( v4 ) /*0x71c618*/
  {
    v5 = (int *)(*((int (__thiscall **)(TerrainClass *, char *))this->ObjectClass + 18))(this, v13); /*0x71c623*/
    v6 = *v5; /*0x71c626*/
    v7 = v5[1]; /*0x71c628*/
    v8 = v5[2]; /*0x71c62b*/
    v12[1] = v7; /*0x71c62e*/
    v12[0] = v6; /*0x71c63f*/
    v12[2] = v8 + 80; /*0x71c643*/
    v9 = (BuildingClass *)AnimClass::ctor( /*0x71c667*/
                            v4,
                            *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2964) + 4 * (v3 & 1)),
                            v12,
                            0,
                            255,
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
  v10->?[2] -= 20; /*0x71c683*/
  this->__pad_C0[12] = 1; /*0x71c68a*/
  return 1; /*0x71c694*/
}



// ==== 0x0071C6B0  TerrainClass::ProcessTick  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::ProcessTick(TerrainClass *this)
{
  TerrainTypeClass *health; // eax
  int v4; // [esp+8h] [ebp-8h]

  LOBYTE(health) = this->__pad_C0[12]; /*0x71c6b6*/
  if ( (_BYTE)health ) /*0x71c6be*/
  {
    LOBYTE(health) = this->__pad_C0[13]; /*0x71c6c0*/
    this->__pad_C0[12] = 0; /*0x71c6c6*/
    if ( !(_BYTE)health ) /*0x71c6cf*/
    {
      health = (TerrainTypeClass *)this->?; /*0x71c6d1*/
      if ( !health ) /*0x71c6d6*/
      {
        (*((void (__thiscall **)(TerrainClass *, int))this->ObjectClass + 55))(this, 1); /*0x71c6dc*/
        (*((void (__thiscall **)(TerrainClass *, int))this->ObjectClass + 73))(this, 2); /*0x71c6e8*/
        LOBYTE(health) = this->__pad_C0[13]; /*0x71c6ee*/
        if ( !(_BYTE)health ) /*0x71c6f6*/
        {
          this->__pad_C0[13] = 1; /*0x71c6f8*/
          health = *(TerrainTypeClass **)&stru_A8EB00.?[416]; /*0x71c6ff*/
          *(_DWORD *)this->__pad_C0 = 2; /*0x71c70f*/
          this->Type = health; /*0x71c715*/
          *(_DWORD *)&this->IsBurning = v4; /*0x71c71b*/
          this->height = 2; /*0x71c71e*/
          this->Animation[0] = 0; /*0x71c721*/
          LOBYTE(health) = v4; /*0x71c717*/
        }
      }
    }
  }
  return (char)health; /*0x71c72b*/
}



// ==== 0x0071C730  TerrainClass::Update  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::Update(TerrainClass *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  TerrainTypeClass *v5; // ecx
  int result; // eax
  int v7; // ecx
  int v8; // edi
  _BYTE *v9; // ecx
  int v10; // edi
  TerrainTypeClass *v11; // eax
  TerrainTypeClass **p_Type; // edx
  int *location; // esi
  CellClass *v14; // eax
  int v15; // [esp+10h] [ebp-Ch] BYREF
  TerrainTypeClass *v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+18h] [ebp-4h]

  ObjectClass::DetectCloaked((ObjectClass *)this); /*0x71c738*/
  if ( *(_BYTE *)(*(_DWORD *)&this->__pad_C0[8] + 691) ) /*0x71c745*/
  {
    if ( !*(_DWORD *)this->__pad_C0 ) /*0x71c74d*/
    {
      v2 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x71c761*/
      v3 = *(_DWORD *)&this->__pad_C0[8]; /*0x71c773*/
      if ( (double)((int)abs32(v2) % 1000000) * 0.000001 < *(float *)(v3 + 676) ) /*0x71c796*/
      {
        this->Animation[0] = 0; /*0x71c798*/
        v4 = *(_DWORD *)(v3 + 672); /*0x71c79e*/
        v5 = *(TerrainTypeClass **)&stru_A8EB00.?[416]; /*0x71c7a4*/
        *(_DWORD *)this->__pad_C0 = v4; /*0x71c7b0*/
        this->Type = v5; /*0x71c7b6*/
        *(_DWORD *)&this->IsBurning = v16; /*0x71c7bc*/
        this->height = v4; /*0x71c7bf*/
      }
    }
  }
  result = Locomotor::GetSpeed((Locomotor *)&this->Type); /*0x71c7ca*/
  if ( result || (result = *(_DWORD *)this->__pad_C0) == 0 ) /*0x71c7db*/
  {
    LOBYTE(this->Animation[1]) = 0; /*0x71c840*/
  }
  else
  {
    v7 = *(_DWORD *)&this->__pad_C0[4] + this->Animation[0]; /*0x71c7e9*/
    LOBYTE(this->Animation[1]) = 1; /*0x71c7eb*/
    this->Animation[0] = v7; /*0x71c7f2*/
    this->Type = *(TerrainTypeClass **)&stru_A8EB00.?[416]; /*0x71c7fe*/
    *(_DWORD *)&this->IsBurning = v16; /*0x71c804*/
    this->height = result; /*0x71c807*/
    if ( this->__pad_C0[13] /*0x71c82d*/
      && (v8 = this->Animation[0],
          result = *(__int16 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C0[8] + 156))(*(_DWORD *)&this->__pad_C0[8])
                              + 6)
                 - 1,
          v8 == result) )
    {
      return (*((int (__thiscall **)(TerrainClass *))this->ObjectClass + 62))(this); /*0x71c833*/
    }
    else
    {
      v9 = *(_BYTE **)&this->__pad_C0[8]; /*0x71c84d*/
      if ( v9[689] && v9[691] ) /*0x71c85b*/
      {
        v10 = this->Animation[0]; /*0x71c865*/
        result = *(__int16 *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 156))(v9) + 6) / 2; /*0x71c878*/
        if ( v10 == result ) /*0x71c87c*/
        {
          this->Animation[0] = 0; /*0x71c87e*/
          v11 = *(TerrainTypeClass **)&stru_A8EB00.?[416]; /*0x71c884*/
          p_Type = &this->Type; /*0x71c889*/
          *(_DWORD *)this->__pad_C0 = 0; /*0x71c88f*/
          location = this->?; /*0x71c897*/
          *p_Type = v11; /*0x71c89d*/
          p_Type[1] = v16; /*0x71c8a5*/
          p_Type[2] = 0; /*0x71c8a8*/
          v15 = *location; /*0x71c8ad*/
          v16 = (TerrainTypeClass *)location[1]; /*0x71c8be*/
          v17 = location[2]; /*0x71c8c5*/
          v14 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v15); /*0x71c8c9*/
          LOBYTE(result) = CellClass::SpawnTiberiumTree(v14, 1); /*0x71c8d0*/
        }
      }
    }
  }
  return result; /*0x71c839*/
}



// ==== 0x0071C8E0  ObjectClass::method_71C8E0  this=ObjectClass  sig=csp ====
char __thiscall sub_71C8E0(ObjectClass *this)
{
  char result; // al
  int v2; // [esp+4h] [ebp-8h]

  result = *((_BYTE *)this + 205); /*0x71c8e0*/
  if ( !result ) /*0x71c8eb*/
  {
    *((_BYTE *)this + 205) = 1; /*0x71c8ee*/
    this->u32_2D = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71c905*/
    this->nextObject = 2; /*0x71c90b*/
    this->u32_2E = v2; /*0x71c911*/
    this->u32_2F = 2; /*0x71c914*/
    this->q02B = 0; /*0x71c917*/
    return v2; /*0x71c907*/
  }
  return result; /*0x71c922*/
}



// ==== 0x0071C930  TerrainClass::ApplyCellModifications  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::ApplyCellModifications(TerrainClass *this)
{
  int v2; // ebx
  int v3; // esi
  int v4; // edx
  __int16 v5; // cx
  _BYTE *v6; // eax
  CellClass *v7; // eax
  char v8; // bl
  void *v9; // eax
  __int16 v11[2]; // [esp+8h] [ebp-18h] BYREF
  int v12; // [esp+Ch] [ebp-14h]
  __int16 v13[2]; // [esp+10h] [ebp-10h] BYREF
  _DWORD v14[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( !this->? ) /*0x71c937*/
  {
    v2 = *(_DWORD *)(*((int (__thiscall **)(TerrainClass *, __int16 *))this->ObjectClass + 110))(this, v13); /*0x71c956*/
    v3 = 0; /*0x71c958*/
    v12 = v2; /*0x71c95a*/
    do /*0x71c9b8*/
    {
      v4 = v3 & 7; /*0x71c968*/
      v5 = LOWORD(g_DDrawSurfaceManager.scenario[v4 + 82]) + v2; /*0x71c96b*/
      LOWORD(v4) = HIWORD(g_DDrawSurfaceManager.scenario[v4 + 82]); /*0x71c97a*/
      LOWORD(v12) = v5; /*0x71c982*/
      HIWORD(v12) = HIWORD(v2) + v4; /*0x71c98e*/
      *(_DWORD *)v13 = v12; /*0x71c99d*/
      v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x71c9a1*/
      ++v3; /*0x71c9ae*/
      --v6[290]; /*0x71c9b2*/
    }
    while ( v3 < 8 ); /*0x71c9b8*/
    v14[0] = this->?[0]; /*0x71c9c6*/
    v14[1] = this->?[1]; /*0x71c9d2*/
    v14[2] = this->?[2]; /*0x71c9de*/
    v7 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v14); /*0x71c9e2*/
    v7->occupationFlags &= ~0x40u; /*0x71c9f6*/
  }
  *(_DWORD *)v11 = *(_DWORD *)(*((int (__thiscall **)(TerrainClass *, __int16 *))this->ObjectClass + 110))(this, v13); /*0x71ca0a*/
  v8 = ObjectClass::Undeploy((ObjectClass *)this); /*0x71ca21*/
  v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11); /*0x71ca23*/
  House::AnnounceUpgrade((int)v9, -1); /*0x71ca2a*/
  if ( !dword_A8E7AC ) /*0x71ca36*/
  {
    Cell::SetRadar((Cell *)&stru_87F5F0.__pad_58[416], v11); /*0x71ca42*/
    Radar::Update((Radar *)&stru_87F5F0.__pad_58[416], v11); /*0x71ca51*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v11); /*0x71ca60*/
  }
  return v8; /*0x71ca67*/
}



// ==== 0x0071CA70  CCINIClass::LoadTypeFromINI  this=CCINIClass  sig=csp ====
int __thiscall CCINIClass::LoadTypeFromINI(INIClass *this)
{
  int result; // eax
  int v3; // ebp
  unsigned __int8 *StringByIndex; // esi
  void *v5; // ebx
  int v6; // eax
  int v7; // eax
  TerrainClass *v8; // eax
  __int16 v9[2]; // [esp+8h] [ebp-90h] BYREF
  int v10; // [esp+Ch] [ebp-8Ch]
  int v11; // [esp+10h] [ebp-88h]
  int i; // [esp+14h] [ebp-84h]
  char Destination[128]; // [esp+18h] [ebp-80h] BYREF

  INIClass::ResetSection(this); /*0x71ca7a*/
  result = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)aTerrain); /*0x71ca87*/
  v3 = 0; /*0x71ca8c*/
  for ( i = result; v3 < i; ++v3 ) /*0x71ca94*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this->__pad_0, (unsigned __int8 *)aTerrain, v3); /*0x71caaf*/
    if ( INIClass::GetString(this, (unsigned __int8 *)aTerrain, StringByIndex, &g_INI_DefaultBuffer, Destination, 128) ) /*0x71cac5*/
      v5 = (void *)TerrainTypeClass::FindOrCreate(Destination); /*0x71cad7*/
    else
      v5 = 0; /*0x71cadb*/
    if ( *(int *)&stru_A8EB00.?[408] < 4 ) /*0x71cae6*/
    {
      v7 = atoi((const char *)StringByIndex); /*0x71cb1f*/
      LOWORD(v11) = v7 % 128; /*0x71cb36*/
      HIWORD(v11) = v7 / 128; /*0x71cb44*/
      *(_DWORD *)v9 = v11; /*0x71cb4d*/
    }
    else
    {
      v6 = atoi((const char *)StringByIndex); /*0x71cae8*/
      LOWORD(v10) = v6 % 1000; /*0x71caff*/
      HIWORD(v10) = v6 / 1000; /*0x71cb10*/
      *(_DWORD *)v9 = v10; /*0x71cb19*/
    }
    if ( v5 ) /*0x71cb53*/
    {
      v8 = (TerrainClass *)__2_YAPAXI_Z(0xE0u); /*0x71cb5a*/
      if ( v8 ) /*0x71cb64*/
        TerrainClass::Construct(v8, v5, v9); /*0x71cb6e*/
    }
    result = i; /*0x71cb73*/
  }
  return result; /*0x71cb82*/
}



// ==== 0x0071CB90  ObjectTypeClass::ReadDestroyAnim  this=INIClass  sig=csp ====
int __thiscall sub_71CB90(char *this)
{
  int result; // eax
  int i; // ebx
  int v4; // esi
  int v5; // [esp+8h] [ebp-14h]
  _BYTE v6[4]; // [esp+Ch] [ebp-10h] BYREF
  char Buffer[12]; // [esp+10h] [ebp-Ch] BYREF

  INIClass::ClearSection((int)this, (int)aTerrain, 0); /*0x71cb9f*/
  result = dword_A8E998; /*0x71cba4*/
  for ( i = 0; i < dword_A8E998; ++i ) /*0x71cbad*/
  {
    v4 = *((_DWORD *)dword_A8E98C + i); /*0x71cbba*/
    if ( v4 && !*(_BYTE *)(v4 + 129) ) /*0x71cbc1*/
    {
      if ( *(_BYTE *)(v4 + 144) ) /*0x71cbcb*/
      {
        v5 = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 440))(v4, v6); /*0x71cbe6*/
        sprintf(Buffer, "%d", (__int16)v5 + 1000 * SHIWORD(v5)); /*0x71cc09*/
        INIClass::SetString(this, (unsigned __int8 *)aTerrain, Buffer, (char *)(*(_DWORD *)(v4 + 200) + 36)); /*0x71cc29*/
      }
    }
    result = dword_A8E998; /*0x71cc2e*/
  }
  return result; /*0x71cc3d*/
}



// ==== 0x0071CC50  TerrainClass::CheckSpawnConditions  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::CheckSpawnConditions(TerrainClass *this, int *a2, char a3, int a4)
{
  int *v5; // eax
  int v6; // ebx
  char *v7; // ebp
  _DWORD *v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // ebx
  int v12; // eax
  char *v13; // ebp
  int v14; // ebx
  _DWORD *v15; // eax
  int v16; // ecx
  int v18; // [esp+10h] [ebp-18h] BYREF
  int v19; // [esp+14h] [ebp-14h]
  _DWORD v20[4]; // [esp+18h] [ebp-10h] BYREF

  if ( !stru_A8EB00.?[391] && g_hWnd && (!a3 && !this->? || !this->? || this->?) ) /*0x71cc8c*/
    return 0; /*0x71cc8c*/
  this->? = 0; /*0x71ccad*/
  v5 = ClipRectIntersection(v20, a2, &DSurface_ViewBounds.field_0, 0, 0); /*0x71ccb4*/
  *a2 = *v5; /*0x71ccbd*/
  a2[1] = v5[1]; /*0x71ccc2*/
  a2[2] = v5[2]; /*0x71ccc8*/
  a2[3] = v5[3]; /*0x71ccce*/
  v6 = DSurface_ViewBounds.field_0; /*0x71ccd3*/
  v7 = (char *)DSurface_ViewBounds.field_4; /*0x71ccd9*/
  v8 = (_DWORD *)(*((int (__thiscall **)(TerrainClass *, _DWORD *))this->ObjectClass + 75))(this, v20); /*0x71cce6*/
  v9 = v8[1]; /*0x71ccee*/
  v10 = v6 + *v8; /*0x71ccf1*/
  v11 = v8[2]; /*0x71ccf3*/
  v12 = v8[3]; /*0x71ccf6*/
  v13 = &v7[v9]; /*0x71ccf9*/
  if ( *a2 >= v10 + v11 ) /*0x71cd01*/
    return 0; /*0x71cd01*/
  v14 = a2[1]; /*0x71cd07*/
  if ( v14 >= (int)&v13[v12] || *a2 + a2[2] <= v10 || v14 + a2[3] <= (int)v13 ) /*0x71cd20*/
    return 0; /*0x71cd90*/
  v15 = (_DWORD *)(*((int (__thiscall **)(TerrainClass *, _DWORD *))this->ObjectClass + 43))(this, v20); /*0x71cd30*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v15, &v18); /*0x71cd3d*/
  if ( *a2 > DSurface_ViewBounds.field_0 ) /*0x71cd4b*/
    v18 += DSurface_ViewBounds.field_0 - *a2; /*0x71cd55*/
  v16 = a2[1]; /*0x71cd59*/
  if ( v16 > (int)DSurface_ViewBounds.field_4 ) /*0x71cd63*/
    v19 += (int)DSurface_ViewBounds.field_4 - v16; /*0x71cd6d*/
  (*((void (__thiscall **)(TerrainClass *, int *, int *))this->ObjectClass + 69))(this, &v18, a2); /*0x71cd7b*/
  return 1; /*0x71cd81*/
}



// ==== 0x0071CDA0  TerrainClass::LoadFromStream  this=TerrainClass  sig=csp ====
int __stdcall TerrainClass::LoadFromStream(TerrainClass *this, int a2)
{
  ObjectClass *v2; // ebp
  void **p_vtable1; // esi
  int v4; // eax
  ObjectClass *vtable0; // ecx
  void *vtable1; // edx
  int v7; // edi
  int v8; // eax
  signed int v9; // eax
  int v10; // ecx
  char *i; // eax
  _DWORD *v12; // eax
  int Register; // edi
  int v14; // esi
  int vtable2; // eax
  int v17; // [esp+Ch] [ebp-8h] BYREF

  v2 = (ObjectClass *)this; /*0x71cda4*/
  p_vtable1 = &this->?; /*0x71cdad*/
  v4 = (*((int (__stdcall **)(void **))this->? + 4))(&this->?); /*0x71cdb1*/
  vtable1 = g_BuildingLoadQueue_Array.?; /*0x71cdb4*/
  v7 = v4; /*0x71cdba*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x71cdbe*/
  {
    if ( !LOBYTE(g_BuildingLoadQueue_Array.?) ) /*0x71cdcb*/
    {
      qsort( /*0x71cddc*/
        g_BuildingLoadQueue_Array.TechnoTypeClass,
        (size_t)g_BuildingLoadQueue_Array.?,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      vtable1 = g_BuildingLoadQueue_Array.?; /*0x71cde1*/
      g_BuildingLoadQueue_Array.? = 0; /*0x71cdea*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 1; /*0x71cdf4*/
    }
    v17 = v7; /*0x71ce06*/
    v8 = BinaryArraySearch((int)g_BuildingLoadQueue_Array.TechnoTypeClass, (int)vtable1, &v17); /*0x71ce0a*/
    if ( v8 ) /*0x71ce11*/
    {
      v9 = (signed int)(v8 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x71ce19*/
      if ( v9 != -1 ) /*0x71ce1f*/
      {
        v10 = v9 + 1; /*0x71ce21*/
        for ( i = (char *)g_BuildingLoadQueue_Array.?; /*0x71ce2b*/
              v10 < (int)g_BuildingLoadQueue_Array.?;
              i = (char *)g_BuildingLoadQueue_Array.? )
        {
          v12 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v10++; /*0x71ce33*/
          *(v12 - 2) = *v12; /*0x71ce39*/
          *(v12 - 1) = v12[1]; /*0x71ce3f*/
        }
        g_BuildingLoadQueue_Array.? = i - 1; /*0x71ce54*/
        *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x71ce59*/
        vtable0 = (ObjectClass *)g_BuildingLoadQueue_Array.TechnoTypeClass; /*0x71ce61*/
        *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x71ce69*/
        g_BuildingLoadQueue_Array.? = 0; /*0x71ce6d*/
      }
    }
  }
  Register = BuildingClass::SaveLoad_Register(vtable0); /*0x71ce7e*/
  if ( Register >= 0 ) /*0x71ce82*/
  {
    if ( v2 ) /*0x71ce8a*/
    {
      ObjectClass::Init(v2, (int)&this); /*0x71ce93*/
      v2->AbstractClass = &TerrainClass::`vftable'; /*0x71ce98*/
      *p_vtable1 = &off_7F5200; /*0x71ce9f*/
      v2->? = &TerrainClass::`vftable'; /*0x71cea5*/
      v2->? = &TerrainClass::`vftable'; /*0x71ceac*/
    }
    v14 = (*((int (__stdcall **)(void **))*p_vtable1 + 4))(p_vtable1); /*0x71cebf*/
    vtable2 = (int)g_BuildingLoadQueue_Array.?; /*0x71cec1*/
    if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x71cec9*/
      goto LABEL_16; /*0x71cec9*/
    if ( !g_BuildingLoadQueue_Array.? ) /*0x71cecd*/
      vtable2 = 10; /*0x71cecf*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, vtable2) ) /*0x71ceda*/
    {
LABEL_16:
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = v14; /*0x71ceee*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = v2; /*0x71cefc*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x71cf06*/
      ++g_BuildingLoadQueue_Array.?; /*0x71cf0d*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2[1].?); /*0x71cf1e*/
  }
  return Register; /*0x71cf25*/
}



// ==== 0x0071CF30  TerrainClass::CheckFrameUpdate  this=TerrainClass  sig=csp ====
int __stdcall TerrainClass::CheckFrameUpdate(TerrainClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x71cf44*/
}



// ==== 0x0071CF50  TerrainClass::PowerDrainUpdate  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::PowerDrainUpdate(TerrainClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // eax

  HouseClass::ProcessPower((ObjectClass *)this); /*0x71cf59*/
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C0[8] + 44))(*(_DWORD *)&this->__pad_C0[8]); /*0x71cf66*/
  Power::TimerProcess(v3); /*0x71cf6c*/
  v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)&this->__pad_C0[8] + 4) + 16))(*(_DWORD *)&this->__pad_C0[8] + 4); /*0x71cf7d*/
  Power::TimerProcess(v4); /*0x71cf83*/
  LOBYTE(v5) = this->__pad_C0[12]; /*0x71cf88*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x71cf91*/
  LOBYTE(v6) = this->__pad_C0[13]; /*0x71cf96*/
  Power::FlagProcess((Power *)a2, v6); /*0x71cf9f*/
  Power::TimerProcess(this->TerrainClass_field_rect_D0[0]); /*0x71cfad*/
  return Power::TimerProcess(this->TerrainClass_field_rect_D0[1]); /*0x71cfc0*/
}



// ==== 0x0071CFD0  TerrainClass::ProcessFrameStep  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::ProcessFrameStep(TerrainClass *this, int a2, int a3)
{
  int result; // eax

  result = Object::Unlink((ObjectClass *)this); /*0x71cfde*/
  if ( *(_DWORD *)&this->__pad_C0[8] == a2 ) /*0x71cfe9*/
    *(_DWORD *)&this->__pad_C0[8] = 0; /*0x71cfeb*/
  return result; /*0x71cff5*/
}



// ==== 0x0071D000  TerrainClass::ProcessSpawnAnim  this=TerrainClass  sig=csp ====
char __thiscall TerrainClass::ProcessSpawnAnim(TerrainClass *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ebp
  int v4; // edi
  int v5; // ebx
  int i; // esi
  int v7; // ecx
  __int16 v8; // ax
  _BYTE *v9; // eax
  _DWORD *v10; // eax
  int v11; // edi
  char v14[12]; // [esp+8h] [ebp-Ch] BYREF

  v3 = a2; /*0x71d008*/
  if ( !(unsigned __int8)ObjectClass::Deploy((ObjectClass *)this) ) /*0x71d012*/
    return 0; /*0x71d13e*/
  v4 = *v3 / 256; /*0x71d03e*/
  v5 = v3[1] / 256; /*0x71d041*/
  for ( i = 0; i < 8; ++i ) /*0x71d044*/
  {
    v7 = i & 7; /*0x71d048*/
    v8 = HIWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x71d05d*/
    LOWORD(a3) = v4 + LOWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x71d061*/
    HIWORD(a3) = v5 + v8; /*0x71d06d*/
    a2 = a3; /*0x71d076*/
    v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x71d080*/
    ++v9[290]; /*0x71d091*/
  }
  v10 = (_DWORD *)(*((int (__stdcall **)(char *))this->ObjectClass + 43))(v14); /*0x71d0ab*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v10, &this->TerrainClass_field_rect_D0[2]); /*0x71d0b8*/
  v11 = *(_DWORD *)&g_TacticalClass_Instance[45] + this->TerrainClass_field_rect_D0[3]; /*0x71d0d6*/
  this->TerrainClass_field_rect_D0[2] += *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x71d0dd*/
  this->TerrainClass_field_rect_D0[3] = v11; /*0x71d0df*/
  if ( *(_DWORD *)&Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v3)->__pad_28[28] != -1 ) /*0x71d0ef*/
  {
    if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 /*0x71d108*/
                              + 4 * *(_DWORD *)&Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v3)->__pad_28[28])
                  + 681) )
    {
      *(_DWORD *)&Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v3)->__pad_28[28] = -1; /*0x71d123*/
      Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v3)->powerup = 0; /*0x71d12b*/
    }
  }
  return 1; /*0x71d137*/
}



// ==== 0x0071D150  TerrainClass::GetOffset  this=TerrainClass  sig=csp ====
unsigned int __thiscall IRTTITypeInfo::GetOffset(TerrainClass *this)
{
  return *(_DWORD *)&this->__pad_C0[8]; /*0x71d156*/
}



// ==== 0x0071D160  TerrainClass::Export  this=TerrainClass  sig=csp ====
_DWORD *__thiscall TerrainClass::Export(TerrainClass *this, _DWORD *a2)
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
  int v18; // [esp+Ch] [ebp-38h]
  int v19; // [esp+10h] [ebp-34h]
  int v20; // [esp+14h] [ebp-30h] BYREF
  int v21; // [esp+18h] [ebp-2Ch]
  int v22; // [esp+1Ch] [ebp-28h]
  int v23; // [esp+20h] [ebp-24h]
  int v24; // [esp+28h] [ebp-1Ch]
  int v25; // [esp+30h] [ebp-14h]
  _DWORD v26[4]; // [esp+34h] [ebp-10h] BYREF

  v18 = this->TerrainClass_field_rect_D0[2] - *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x71d17d*/
  v19 = this->TerrainClass_field_rect_D0[3] - *(_DWORD *)&g_TacticalClass_Instance[45]; /*0x71d189*/
  HasC4 = (__int16 *)ObjectClass::HasC4((ObjectClass *)this); /*0x71d192*/
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
    *a2 = g_BuildingLoadQueue_Array.?[0]; /*0x71d1a5*/
    a2[1] = g_BuildingLoadQueue_Array.?[1]; /*0x71d1ad*/
    a2[2] = g_BuildingLoadQueue_Array.?[2]; /*0x71d1b6*/
    a2[3] = g_BuildingLoadQueue_Array.?[3]; /*0x71d1bf*/
    return a2; /*0x71d198*/
  }
}



// ==== 0x0071D2F0  TerrainClass::MissionStubReturnZero  this=TerrainClass  sig=csp ====
int TerrainClass::MissionStubReturnZero(TerrainClass *this)
{
  return 224; /*0x71d2f5*/
}



// ==== 0x0071D300  TerrainClass::MissionStubReturnZero2  this=TerrainClass  sig=csp ====
int TerrainClass::MissionStubReturnZero2(TerrainClass *this)
{
  return 36; /*0x71d305*/
}



// ==== 0x0071D310  TerrainClass::MissionStubReturnZero3  this=TerrainClass  sig=csp ====
int __stdcall TerrainClass::MissionStubReturnZero3(TerrainClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x71d316*/
    return -2147467261; /*0x71d318*/
  *a2 = 237448654; /*0x71d326*/
  a2[1] = 298949647; /*0x71d32e*/
  a2[2] = -1610610249; /*0x71d337*/
  a2[3] = unk_7E974C; /*0x71d340*/
  return 0; /*0x71d31d*/
}



// ==== 0x0071D350  TerrainClass::MissionStubReturnZero4  this=TerrainClass  sig=csp ====
void *__thiscall TerrainClass::MissionStubReturnZero4(TerrainClass *this, char a2)
{
  TerrainClass::CleanupMembers((int)this); /*0x71d353*/
  if ( (a2 & 1) != 0 ) /*0x71d35d*/
    __3_YAXPAX_Z(this); /*0x71d360*/
  return this; /*0x71d36a*/
}



// ==== 0x0071D370  sub_71D370  this=-  sig=ida-proto ====
int sub_71D370()
{
  dword_B0ED68 = 0; /*0x71d372*/
  dword_B0ED6C = 0; /*0x71d377*/
  dword_B0ED70 = 0; /*0x71d37c*/
  dword_B0ED74 = 0; /*0x71d381*/
  return 0; /*0x71d386*/
}



// ==== 0x0071D390  sub_71D390  this=-  sig=ida-proto ====
void sub_71D390()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71d39c*/
  dbl_B0ED80 = Math::Sqrt(v0 + v0); /*0x71d3ae*/
}



// ==== 0x0071D3C0  sub_71D3C0  this=-  sig=ida-proto ====
void sub_71D3C0()
{
  dbl_B0F140 = dbl_B0ED80 / 60.0; /*0x71d3cc*/
}



// ==== 0x0071D3E0  sub_71D3E0  this=-  sig=ida-proto ====
void sub_71D3E0()
{
  dbl_B0EDB8 = 1.0 / dbl_B0F140; /*0x71d3ec*/
}



// ==== 0x0071D400  sub_71D400  this=-  sig=ida-proto ====
void sub_71D400()
{
  dbl_B0EDB0 = 0.0174532925199433 * 45.0; /*0x71d40c*/
}



// ==== 0x0071D420  sub_71D420  this=-  sig=ida-proto ====
void sub_71D420()
{
  dbl_B0ED88 = 0.0174532925199433 * 60.0; /*0x71d42c*/
}



// ==== 0x0071D440  sub_71D440  this=-  sig=ida-proto ====
void sub_71D440()
{
  dbl_B0ED58 = 0.0174532925199433 * 90.0; /*0x71d44c*/
}



// ==== 0x0071D460  sub_71D460  this=-  sig=ida-proto ====
__int64 sub_71D460()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0ED58 - dbl_B0ED88); /*0x71d472*/
  result = Math::RoundToInt(v0 * dbl_B0ED80 * 0.5); /*0x71d486*/
  dword_B0F148 = result; /*0x71d48b*/
  return result; /*0x71d490*/
}



// ==== 0x0071D4A0  sub_71D4A0  this=-  sig=ida-proto ====
void sub_71D4A0()
{
  dbl_B0ED90 = Math::ArcTan((double)dword_B0F148 * 0.00390625); /*0x71d4b7*/
}



// ==== 0x0071D4D0  sub_71D4D0  this=-  sig=ida-proto ====
void sub_71D4D0()
{
  dbl_B0EDA8 = Math::ArcTan((double)(2 * dword_B0F148) / dbl_B0ED80); /*0x71d4f2*/
}



// ==== 0x0071D500  sub_71D500  this=-  sig=ida-proto ====
__int64 sub_71D500()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F148) + 0.5); /*0x71d51b*/
  dword_B0F13C = result; /*0x71d520*/
  return result; /*0x71d526*/
}



// ==== 0x0071D530  sub_71D530  this=-  sig=ida-proto ====
int sub_71D530()
{
  word_B0ED7C = 0; /*0x71d532*/
  word_B0ED7E = 0; /*0x71d538*/
  return 0; /*0x71d53e*/
}



// ==== 0x0071D540  sub_71D540  this=-  sig=ida-proto ====
int sub_71D540()
{
  dword_B0ED98 = 0; /*0x71d542*/
  dword_B0ED9C = 0; /*0x71d547*/
  dword_B0EDA0 = 0; /*0x71d54c*/
  return 0; /*0x71d551*/
}



// ==== 0x0071D560  sub_71D560  this=-  sig=ida-proto ====
int sub_71D560()
{
  dword_B0F138 = 0; /*0x71d565*/
  dword_B0F130 = 128; /*0x71d56f*/
  dword_B0F134 = 128; /*0x71d574*/
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
  dword_B0EDC0 = 0; /*0x71d5a2*/
  dword_B0EDC4 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d5b3*/
  memset(&unk_B0EDC8, 0, 0x20u); /*0x71d5c9*/
  Array::ForEach((int)&unk_B0EDC8, 4, 8, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d5d0*/
  dword_B0EDE8 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d5ec*/
  dword_B0EDEC = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d607*/
  dword_B0EDF0 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d618*/
  memset(&unk_B0EDF4, 0, 0x1Cu); /*0x71d62e*/
  Array::ForEach((int)&unk_B0EDF4, 4, 7, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d635*/
  dword_B0EE10 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d651*/
  dword_B0EE14 = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d66c*/
  dword_B0EE18 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d67d*/
  memset(&unk_B0EE1C, 0, 0x1Cu); /*0x71d693*/
  Array::ForEach((int)&unk_B0EE1C, 4, 7, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d69a*/
  dword_B0EE38 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d6b0*/
  dword_B0EE3C = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d6cb*/
  dword_B0EE40 = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d6d9*/
  dword_B0EE44 = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d6fa*/
  v0 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d705*/
  dword_B0EE4C = 0; /*0x71d709*/
  dword_B0EE50 = 0; /*0x71d714*/
  dword_B0EE54 = 0; /*0x71d71c*/
  dword_B0EE58 = 0; /*0x71d724*/
  dword_B0EE48 = v0; /*0x71d72f*/
  dword_B0EE5C = 0; /*0x71d734*/
  Array::ForEach((int)&dword_B0EE4C, 4, 5, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d73a*/
  dword_B0EE60 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d756*/
  dword_B0EE64 = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d76b*/
  dword_B0EE68 = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d779*/
  dword_B0EE6C = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d794*/
  dword_B0EE70 = *(_DWORD *)CellStruct::Set(&v4, 0, 2); /*0x71d7a9*/
  dword_B0EE74 = *(_DWORD *)CellStruct::Set(&v4, 1, 2); /*0x71d7ba*/
  v1 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d7ce*/
  dword_B0EE7C = 0; /*0x71d7d2*/
  dword_B0EE78 = v1; /*0x71d7d7*/
  dword_B0EE80 = 0; /*0x71d7dd*/
  dword_B0EE84 = 0; /*0x71d7e7*/
  Array::ForEach((int)&dword_B0EE7C, 4, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d7f5*/
  dword_B0EE88 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d80b*/
  dword_B0EE8C = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d826*/
  dword_B0EE90 = *(_DWORD *)CellStruct::Set(&v4, 2, 0); /*0x71d83b*/
  dword_B0EE94 = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d849*/
  dword_B0EE98 = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d864*/
  dword_B0EE9C = *(_DWORD *)CellStruct::Set(&v4, 2, 1); /*0x71d87f*/
  v2 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d889*/
  dword_B0EEA4 = 0; /*0x71d88d*/
  dword_B0EEA8 = 0; /*0x71d89a*/
  dword_B0EEA0 = v2; /*0x71d8a7*/
  dword_B0EEAC = 0; /*0x71d8ad*/
  Array::ForEach((int)&dword_B0EEA4, 4, 3, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71d8b3*/
  dword_B0EEB0 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d8cf*/
  dword_B0EEB4 = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d8dd*/
  dword_B0EEB8 = *(_DWORD *)CellStruct::Set(&v4, 2, 0); /*0x71d8f8*/
  dword_B0EEBC = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d907*/
  dword_B0EEC0 = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71d91b*/
  dword_B0EEC4 = *(_DWORD *)CellStruct::Set(&v4, 2, 1); /*0x71d936*/
  dword_B0EEC8 = *(_DWORD *)CellStruct::Set(&v4, 0, 2); /*0x71d94b*/
  dword_B0EECC = *(_DWORD *)CellStruct::Set(&v4, 1, 2); /*0x71d959*/
  dword_B0EED0 = *(_DWORD *)CellStruct::Set(&v4, 2, 2); /*0x71d97a*/
  dword_B0EED4 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71d98f*/
  dword_B0EED8 = *(_DWORD *)CellStruct::Set(&v4, 0, 0); /*0x71d99d*/
  dword_B0EEDC = *(_DWORD *)CellStruct::Set(&v4, 1, 0); /*0x71d9b8*/
  dword_B0EEE0 = *(_DWORD *)CellStruct::Set(&v4, 2, 0); /*0x71d9cd*/
  dword_B0EEE4 = *(_DWORD *)CellStruct::Set(&v4, 3, 0); /*0x71d9db*/
  dword_B0EEE8 = *(_DWORD *)CellStruct::Set(&v4, 0, 1); /*0x71d9f6*/
  dword_B0EEEC = *(_DWORD *)CellStruct::Set(&v4, 1, 1); /*0x71da0b*/
  dword_B0EEF0 = *(_DWORD *)CellStruct::Set(&v4, 2, 1); /*0x71da19*/
  dword_B0EEF4 = *(_DWORD *)CellStruct::Set(&v4, 3, 1); /*0x71da3a*/
  dword_B0EEF8 = *(_DWORD *)CellStruct::Set(&v4, 0x7FFF, 0x7FFF); /*0x71da4c*/
  dword_B0EEFC = 0; /*0x71da62*/
  memset(&unk_B0EF00, 0, 0x230u); /*0x71da73*/
  return Array::ForEach((int)&dword_B0EEFC, 4, 141, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2); /*0x71da7a*/
}



// ==== 0x0071DA80  TerrainTypeClass::TerrainTypeClass  this=TerrainTypeClass  sig=csp ====
_DWORD *__thiscall TerrainTypeClass::TerrainTypeClass(TerrainTypeClass *this, char *Source)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  TerrainTypeClass **v6; // edx

  ObjectTypeClass::ConstructFull((int *)this, Source); /*0x71da89*/
  this->ArrayIndex = -1; /*0x71da90*/
  this->Foundation = 0; /*0x71da9a*/
  this->RadarColor[0] = 0; /*0x71daa5*/
  this->RadarColor[1] = 0; /*0x71daab*/
  this->RadarColor[2] = 0; /*0x71dab1*/
  this->TemperateOccupationBits = 7; /*0x71dab7*/
  this->SnowOccupationBits = 7; /*0x71dabd*/
  this->AnimationRate = 0; /*0x71dac7*/
  this->AnimationProbability = 0.0; /*0x71dacd*/
  this->WaterBound = 0; /*0x71dad3*/
  this->SpawnsTiberium = 0; /*0x71dad9*/
  this->IsFlammable = 0; /*0x71dadf*/
  this->IsAnimated = 0; /*0x71dae5*/
  this->IsVeinhole = 0; /*0x71daeb*/
  this->FoundationData = 0; /*0x71daf1*/
  this->ObjectTypeClass = &TerrainTypeClass::`vftable'; /*0x71daf7*/
  this->? = &TerrainTypeClass::`vftable'; /*0x71dafd*/
  this->? = &TerrainTypeClass::`vftable'; /*0x71db03*/
  this->? = &TerrainTypeClass::`vftable'; /*0x71db0a*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x71db11*/
  this->? = 0; /*0x71db18*/
  this->? = 1; /*0x71db1e*/
  this->? = 1; /*0x71db24*/
  this->? = 0; /*0x71db2a*/
  this->? = 1; /*0x71db30*/
  v3 = dword_A8E328; /*0x71db36*/
  if ( dword_A8E328 < dword_A8E320 /*0x71db74*/
    || (byte_A8E325 || !dword_A8E320)
    && dword_A8E32C > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8E318 + 8))(
               &dword_A8E318,
               dword_A8E320 + dword_A8E32C,
               0) == 0,
        v3 = dword_A8E328,
        !v4) )
  {
    dword_A8E328 = v3 + 1; /*0x71db79*/
    *((_DWORD *)dword_A8E31C + v3) = this; /*0x71db83*/
    v3 = dword_A8E328; /*0x71db86*/
  }
  v5 = 0; /*0x71db8b*/
  if ( v3 <= 0 ) /*0x71db8f*/
  {
LABEL_11:
    v5 = -1; /*0x71dba3*/
  }
  else
  {
    v6 = (TerrainTypeClass **)dword_A8E31C; /*0x71db91*/
    while ( *v6 != this ) /*0x71db99*/
    {
      ++v5; /*0x71db9b*/
      ++v6; /*0x71db9c*/
      if ( v5 >= v3 ) /*0x71dba1*/
        goto LABEL_11; /*0x71dba1*/
    }
  }
  this->ArrayIndex = v5; /*0x71dba6*/
  this->? = -1; /*0x71dbac*/
  this->?[0] = 6; /*0x71dbb6*/
  return &this->ObjectTypeClass; /*0x71dbc2*/
}



// ==== 0x0071DCA0  LoadObjectTypeClassTheaterSHP  this=BuildingTypeClass  sig=ida-proto ====
int __fastcall ObjectTypeClass_LoadTheaterSHP(int a1)
{
  int result; // eax
  int i; // edi
  int v4; // esi
  _DWORD v5[22]; // [esp+Ch] [ebp-26Ch] BYREF
  _BYTE v6[12]; // [esp+64h] [ebp-214h] BYREF
  int v7; // [esp+70h] [ebp-208h]
  char Buffer[512]; // [esp+78h] [ebp-200h] BYREF

  result = dword_A8E328; /*0x71dca0*/
  for ( i = 0; i < dword_A8E328; ++i ) /*0x71dcb6*/
  {
    v4 = *((_DWORD *)dword_A8E31C + i); /*0x71dcc2*/
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
      v5[0] = &CCFileClass::`vftable'; /*0x71dd41*/
      v7 = 0; /*0x71dd49*/
      Vector::Clear((int)v6); /*0x71dd4d*/
      v5[0] = &off_7E1668; /*0x71dd56*/
      BufferIOFileClass::Dtor(v5); /*0x71dd5e*/
    }
    result = dword_A8E328; /*0x71dd63*/
  }
  return result; /*0x71dd72*/
}



// ==== 0x0071DD80  Terrain::LookupByName  this=Terrain  sig=csp ====
int __thiscall Terrain::LookupByName(Terrain *this)
{
  int v2; // esi

  if ( !this ) /*0x71dd86*/
    return -1; /*0x71dd86*/
  v2 = 0; /*0x71dd8d*/
  if ( dword_A8E328 <= 0 ) /*0x71dd91*/
    return -1; /*0x71ddb6*/
  while ( _strcmpi(this->__pad_0, (char *)(*((_DWORD *)dword_A8E31C + v2) + 36)) ) /*0x71ddaa*/
  {
    if ( ++v2 >= dword_A8E328 ) /*0x71ddb4*/
      return -1; /*0x71ddb4*/
  }
  return v2; /*0x71ddb6*/
}



// ==== 0x0071DDD0  TerrainTypeClass::GetHeight  this=TerrainTypeClass  sig=csp ====
bool __thiscall TerrainTypeClass::GetHeight(TerrainTypeClass *this, __int16 *a2, int a3)
{
  TerrainClass *v4; // eax

  v4 = (TerrainClass *)__2_YAPAXI_Z(0xE0u); /*0x71ddd8*/
  return v4 && TerrainClass::Construct(v4, this, a2); /*0x71ddf7*/
}



// ==== 0x0071DE10  TerrainTypeClass::GetTileIndex  this=TerrainTypeClass  sig=csp ====
void **__thiscall TerrainTypeClass::GetTileIndex(TerrainTypeClass *this, int a2)
{
  TerrainClass *v3; // eax

  v3 = (TerrainClass *)__2_YAPAXI_Z(0xE0u); /*0x71de18*/
  if ( v3 ) /*0x71de22*/
    return TerrainClass::Construct(v3, this, (__int16 *)&g_BuildingLoadQueue_Array.?); /*0x71de2c*/
  else
    return 0; /*0x71de35*/
}



// ==== 0x0071DE40  TerrainTypeClass::SingletonGetter  this=TerrainTypeClass  sig=csp ====
int *__thiscall GlobalInit::SingletonGetter(TerrainTypeClass *this, int a2)
{
  int *result; // eax

  result = &this->FoundationData->field_0; /*0x71de41*/
  if ( !result ) /*0x71de49*/
  {
    if ( (g_BuildingLoadQueue_Array.?[4] & 1) == 0 ) /*0x71de55*/
    {
      LOBYTE(g_BuildingLoadQueue_Array.?[4]) |= 1u; /*0x71de73*/
      g_BuildingLoadQueue_Array.? = 2147450879; /*0x71de79*/
      atexit(nullsub_247); /*0x71de7e*/
    }
    return &g_BuildingLoadQueue_Array.?; /*0x71de86*/
  }
  return result; /*0x71de8c*/
}



// ==== 0x0071DE90  nullsub_247  this=-  sig=ida-proto ====
void __cdecl nullsub_247()
{
  ; /*0x71de90*/
}



// ==== 0x0071DEA0  TerrainTypeClass::LoadFromINI  this=TerrainTypeClass  sig=csp ====
int __thiscall TerrainTypeClass::LoadFromINI(TerrainTypeClass *this, unsigned __int8 ***a2)
{
  double v2; // st7
  int result; // eax
  char Bool_Overwrite; // al
  char v6; // al
  char SpawnsTiberium; // cl
  char v8; // al
  int v9; // eax
  int v10; // ecx
  MixFileClass *v11; // eax
  int PixelData; // eax
  int Coord; // eax
  char IsAnimated; // cl
  char v15; // al
  int Int_Overwrite; // eax
  double AnimationProbability; // st6
  int TemperateOccupationBits; // eax
  int v19; // eax
  int SnowOccupationBits; // ecx
  char IsFlammable; // [esp+4h] [ebp-218h]
  int AnimationRate; // [esp+4h] [ebp-218h]
  int v23; // [esp+18h] [ebp-204h] BYREF
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x71deb3*/
  if ( ObjectTypeClass::LoadFromINI((ObjectTypeClass *)this, a2) ) /*0x71debb*/
  {
    if ( this->? == -1 ) /*0x71decf*/
      this->? = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4420); /*0x71dedc*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aIsveinhole, this->IsVeinhole); /*0x71def6*/
    this->IsVeinhole = Bool_Overwrite; /*0x71defd*/
    if ( Bool_Overwrite ) /*0x71df03*/
    {
      this->? = 0; /*0x71df05*/
      this->? = 1; /*0x71df0c*/
    }
    v6 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aWaterbound, this->WaterBound); /*0x71df22*/
    SpawnsTiberium = this->SpawnsTiberium; /*0x71df27*/
    this->WaterBound = v6; /*0x71df2d*/
    v8 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aSpawnstiberium, SpawnsTiberium); /*0x71df3c*/
    IsFlammable = this->IsFlammable; /*0x71df49*/
    this->SpawnsTiberium = v8; /*0x71df50*/
    this->IsFlammable = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aIsflammable, IsFlammable); /*0x71df5b*/
    v9 = INIClass::LookupEnum( /*0x71df79*/
           (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
           (unsigned __int8 *)this->?,
           g_INI_Key_Foundation,
           this->Foundation);
    v10 = 5 * v9; /*0x71df7e*/
    this->Foundation = v9; /*0x71df81*/
    LOBYTE(v9) = this->?; /*0x71df87*/
    this->FoundationData = (CellStruct *)(8 * v10 + 11595200); /*0x71df96*/
    if ( !(_BYTE)v9 ) /*0x71df9c*/
    {
      _makepath(Buffer, 0, 0, this->?, Ext); /*0x71dfad*/
      this->? = (SHPStruct *)SearchMIXFile(Buffer, 0); /*0x71dfc0*/
    }
    v11 = (MixFileClass *)(*((int (__thiscall **)(TerrainTypeClass *))this->ObjectTypeClass + 39))(this); /*0x71dfca*/
    if ( v11 ) /*0x71dfd2*/
    {
      PixelData = MixFileClass::GetPixelData(v11, (int)&v23, 0); /*0x71dfdd*/
      *(_WORD *)this->RadarColor = *(_WORD *)PixelData; /*0x71dfeb*/
      this->RadarColor[2] = *(_BYTE *)(PixelData + 2); /*0x71dff5*/
    }
    Coord = INIClass::GetCoord( /*0x71e00c*/
              (INIClass *)a2,
              (int)&v23,
              (unsigned __int8 *)this->?,
              aRadarcolor,
              (unsigned __int8 *)this->RadarColor);
    IsAnimated = this->IsAnimated; /*0x71e014*/
    *(_WORD *)this->RadarColor = *(_WORD *)Coord; /*0x71e01a*/
    this->RadarColor[2] = *(_BYTE *)(Coord + 2); /*0x71e02a*/
    v15 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aIsanimated, IsAnimated); /*0x71e02d*/
    AnimationRate = this->AnimationRate; /*0x71e03a*/
    this->IsAnimated = v15; /*0x71e041*/
    Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)this->?, aAnimationrate, AnimationRate); /*0x71e047*/
    AnimationProbability = this->AnimationProbability; /*0x71e04c*/
    this->AnimationRate = Int_Overwrite; /*0x71e057*/
    INIClass::ReadDouble_Overwrite((double *)a2, (unsigned __int8 *)this->?, aAnimationproba, AnimationProbability); /*0x71e066*/
    TemperateOccupationBits = this->TemperateOccupationBits; /*0x71e06b*/
    this->AnimationProbability = v2; /*0x71e073*/
    v19 = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)this->?, aTemperateoccup, TemperateOccupationBits); /*0x71e080*/
    SnowOccupationBits = this->SnowOccupationBits; /*0x71e085*/
    this->TemperateOccupationBits = v19; /*0x71e08b*/
    result = INIClass::ReadInt_Overwrite((bool *)a2, (unsigned __int8 *)this->?, aSnowoccupation, SnowOccupationBits); /*0x71e09a*/
    this->SnowOccupationBits = result; /*0x71e0a0*/
    LOBYTE(result) = 1; /*0x71e0a8*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x71e0b5*/
  }
  return result; /*0x71e0a7*/
}



// ==== 0x0071E0D0  TerrainTypeClass::GetWidth  this=TerrainTypeClass  sig=csp ====
_DWORD *__stdcall TerrainTypeClass::GetWidth(TerrainTypeClass *this, int *a2)
{
  int GroundHeight; // eax
  void *v3; // ecx
  void *v5; // [esp+0h] [ebp-Ch] BYREF
  void *v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = (void *)*a2; /*0x71e0d9*/
  v6 = (void *)a2[1]; /*0x71e0ea*/
  v7 = a2[2]; /*0x71e0f1*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x71e0f5*/
  v3 = (void *)v7; /*0x71e0fa*/
  if ( v7 < GroundHeight ) /*0x71e100*/
    v3 = (void *)Cell::GetGroundHeight(&v5); /*0x71e111*/
  this->ObjectTypeClass = v5; /*0x71e11e*/
  this->? = v6; /*0x71e124*/
  this->? = v3; /*0x71e128*/
  return &this->ObjectTypeClass; /*0x71e12b*/
}



// ==== 0x0071E140  TerrainTypeClass::PowerDrainUpdate  this=TerrainTypeClass  sig=csp ====
int __thiscall TerrainTypeClass::PowerDrainUpdate(TerrainTypeClass *this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // edx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x71e149*/
  Power::TimerProcess(this->ArrayIndex); /*0x71e157*/
  LOBYTE(v3) = this->WaterBound; /*0x71e15c*/
  Power::FlagProcess((Power *)a2, v3); /*0x71e165*/
  LOBYTE(v4) = this->SpawnsTiberium; /*0x71e16a*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x71e173*/
  LOBYTE(v5) = this->IsFlammable; /*0x71e178*/
  Power::FlagProcess((Power *)a2, v5); /*0x71e181*/
  Power::TimerProcess(this->Foundation); /*0x71e18f*/
  LOBYTE(v6) = this->IsAnimated; /*0x71e194*/
  Power::FlagProcess((Power *)a2, v6); /*0x71e19d*/
  Power::TimerProcess(this->AnimationRate); /*0x71e1ab*/
  return Checksummer::Add_float((Checksummer *)a2, LODWORD(this->AnimationProbability)); /*0x71e1be*/
}



// ==== 0x0071E1D0  TerrainTypeClass::SaveLoad_Prefix  this=TerrainTypeClass  sig=csp ====
int __stdcall TerrainTypeClass::SaveLoad_Prefix(TerrainTypeClass *this, int a2)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x71e1db*/
  if ( result >= 0 ) /*0x71e1e2*/
  {
    if ( this ) /*0x71e1e6*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)&a2); /*0x71e1ef*/
      this->ObjectTypeClass = &TerrainTypeClass::`vftable'; /*0x71e1f4*/
      this->? = &TerrainTypeClass::`vftable'; /*0x71e1fa*/
      this->? = &TerrainTypeClass::`vftable'; /*0x71e201*/
      this->? = &TerrainTypeClass::`vftable'; /*0x71e208*/
    }
    VoxelAnimType::LoadAnim((char *)this); /*0x71e211*/
    ObjectTypeClass::Load2DArt((char *)this); /*0x71e218*/
    this->FoundationData = (CellStruct *)(40 * this->Foundation + 11595200); /*0x71e22d*/
    return 0; /*0x71e233*/
  }
  return result; /*0x71e235*/
}



// ==== 0x0071E240  TerrainTypeClass::SaveLoad_Prefix_0  this=TerrainTypeClass  sig=csp ====
int __stdcall TerrainTypeClass::SaveLoad_Prefix_0(TerrainTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, a2, a3); /*0x71e24f*/
  if ( result >= 0 ) /*0x71e256*/
    return 0; /*0x71e258*/
  return result; /*0x71e25a*/
}



// ==== 0x0071E260  TerrainTypeClass::GetClassIdentifier  this=TerrainTypeClass  sig=csp ====
int __stdcall TerrainTypeClass::GetClassIdentifier(TerrainTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x71e266*/
    return -2147467261; /*0x71e268*/
  *a2 = 1525862011; /*0x71e276*/
  a2[1] = 298976820; /*0x71e27e*/
  a2[2] = 1610654892; /*0x71e287*/
  a2[3] = unk_7E95EC; /*0x71e290*/
  return 0; /*0x71e26d*/
}



// ==== 0x0071E2A0  TerrainTypeClass::FindOrCreate  this=IUnknown  sig=csp ====
_DWORD *__thiscall TerrainTypeClass::FindOrCreate(char *Source)
{
  int v2; // esi
  TerrainTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x71e2bc*/
    return 0; /*0x71e31f*/
  v2 = 0; /*0x71e2cd*/
  if ( dword_A8E328 <= 0 ) /*0x71e2d1*/
  {
LABEL_6:
    v3 = (TerrainTypeClass *)__2_YAPAXI_Z(0x2BCu); /*0x71e2f6*/
    if ( v3 ) /*0x71e305*/
      return TerrainTypeClass::TerrainTypeClass(v3, Source); /*0x71e311*/
    return 0; /*0x71e305*/
  }
  while ( _strcmpi((char *)(*((_DWORD *)dword_A8E31C + v2) + 36), Source) ) /*0x71e2ea*/
  {
    if ( ++v2 >= dword_A8E328 ) /*0x71e2f4*/
      goto LABEL_6; /*0x71e2f4*/
  }
  return (_DWORD *)*((_DWORD *)dword_A8E31C + v2); /*0x71e30f*/
}



// ==== 0x0071E330  TerrainTypeClass::GetTypeIdentifier  this=TerrainTypeClass  sig=csp ====
int TerrainTypeClass::GetTypeIdentifier(TerrainTypeClass *this)
{
  return 37; /*0x71e335*/
}



// ==== 0x0071E340  TerrainTypeClass::GetObjectSize  this=TerrainTypeClass  sig=csp ====
int TerrainTypeClass::GetObjectSize(TerrainTypeClass *this)
{
  return 700; /*0x71e345*/
}



// ==== 0x0071E350  TerrainTypeClass::GetAuxField  this=TerrainTypeClass  sig=csp ====
int __thiscall TerrainTypeClass::GetAuxField(TerrainTypeClass *this)
{
  return this->ArrayIndex; /*0x71e356*/
}



// ==== 0x0071E360  TerrainTypeClass::ddtor  this=TerrainTypeClass  sig=csp ====
void **__thiscall TerrainTypeClass::ddtor(TerrainTypeClass *this, char a2)
{
  SHPStruct *Image; // eax
  int v4; // eax
  TerrainTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  Image = this->?; /*0x71e364*/
  this->ObjectTypeClass = &TerrainTypeClass::`vftable'; /*0x71e36a*/
  this->? = &TerrainTypeClass::`vftable'; /*0x71e372*/
  this->? = &TerrainTypeClass::`vftable'; /*0x71e379*/
  this->? = &TerrainTypeClass::`vftable'; /*0x71e380*/
  if ( Image ) /*0x71e387*/
  {
    __3_YAXPAX_Z(Image); /*0x71e38a*/
    this->? = 0; /*0x71e392*/
  }
  AbstractClass::AnnounceExpiredPointer(&this->ObjectTypeClass, 1); /*0x71e3a0*/
  v6 = this; /*0x71e3b5*/
  v4 = (*(int (__thiscall **)(_DWORD *, TerrainTypeClass **))(dword_A8E318 + 16))(&dword_A8E318, &v6); /*0x71e3b9*/
  if ( v4 != -1 && v4 < dword_A8E328 && v4 < --dword_A8E328 ) /*0x71e3d4*/
  {
    do /*0x71e3ec*/
    {
      ++v4; /*0x71e3dc*/
      *((_DWORD *)dword_A8E31C + v4 - 1) = *((_DWORD *)dword_A8E31C + v4); /*0x71e3e0*/
    }
    while ( v4 < dword_A8E328 ); /*0x71e3ec*/
  }
  ObjectTypeClass::Destruct((int)this); /*0x71e3f0*/
  if ( (a2 & 1) != 0 ) /*0x71e3fa*/
    __3_YAXPAX_Z(this); /*0x71e3fd*/
  return &this->ObjectTypeClass; /*0x71e407*/
}



// ==== 0x0071E410  sub_71E410  this=-  sig=ida-proto ====
void sub_71E410()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x71e41c*/
  dbl_B0F170 = Math::Sqrt(v0 + v0); /*0x71e42e*/
}



// ==== 0x0071E440  sub_71E440  this=-  sig=ida-proto ====
void sub_71E440()
{
  dbl_B0F1D8 = dbl_B0F170 / 60.0; /*0x71e44c*/
}



// ==== 0x0071E460  sub_71E460  this=-  sig=ida-proto ====
void sub_71E460()
{
  dbl_B0F1C0 = 1.0 / dbl_B0F1D8; /*0x71e46c*/
}



// ==== 0x0071E480  sub_71E480  this=-  sig=ida-proto ====
void sub_71E480()
{
  dbl_B0F1B8 = 0.0174532925199433 * 45.0; /*0x71e48c*/
}



// ==== 0x0071E4A0  sub_71E4A0  this=-  sig=ida-proto ====
void sub_71E4A0()
{
  dbl_B0F178 = 0.0174532925199433 * 60.0; /*0x71e4ac*/
}



// ==== 0x0071E4C0  sub_71E4C0  this=-  sig=ida-proto ====
void sub_71E4C0()
{
  dbl_B0F150 = 0.0174532925199433 * 90.0; /*0x71e4cc*/
}



// ==== 0x0071E4E0  sub_71E4E0  this=-  sig=ida-proto ====
__int64 sub_71E4E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0F150 - dbl_B0F178); /*0x71e4f2*/
  result = Math::RoundToInt(v0 * dbl_B0F170 * 0.5); /*0x71e506*/
  dword_B0F1E0 = result; /*0x71e50b*/
  return result; /*0x71e510*/
}



// ==== 0x0071E520  sub_71E520  this=-  sig=ida-proto ====
void sub_71E520()
{
  dbl_B0F180 = Math::ArcTan((double)dword_B0F1E0 * 0.00390625); /*0x71e537*/
}



// ==== 0x0071E550  sub_71E550  this=-  sig=ida-proto ====
void sub_71E550()
{
  dbl_B0F198 = Math::ArcTan((double)(2 * dword_B0F1E0) / dbl_B0F170); /*0x71e572*/
}



// ==== 0x0071E580  sub_71E580  this=-  sig=ida-proto ====
__int64 sub_71E580()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0F1E0) + 0.5); /*0x71e59b*/
  dword_B0F1D4 = result; /*0x71e5a0*/
  return result; /*0x71e5a6*/
}



// ==== 0x0071E5B0  sub_71E5B0  this=-  sig=ida-proto ====
int sub_71E5B0()
{
  word_B0F168 = 0; /*0x71e5b2*/
  word_B0F16A = 0; /*0x71e5b8*/
  return 0; /*0x71e5be*/
}



// ==== 0x0071E5C0  sub_71E5C0  this=-  sig=ida-proto ====
int sub_71E5C0()
{
  dword_B0F188 = 0; /*0x71e5c2*/
  dword_B0F18C = 0; /*0x71e5c7*/
  dword_B0F190 = 0; /*0x71e5cc*/
  return 0; /*0x71e5d1*/
}



// ==== 0x0071E5E0  sub_71E5E0  this=-  sig=ida-proto ====
int sub_71E5E0()
{
  dword_B0F1D0 = 0; /*0x71e5e5*/
  dword_B0F1C8 = 128; /*0x71e5ef*/
  dword_B0F1CC = 128; /*0x71e5f4*/
  return 128; /*0x71e5f9*/
}



// ==== 0x0071E600  sub_71E600  this=-  sig=ida-proto ====
int sub_71E600()
{
  dword_B0F158 = 0; /*0x71e602*/
  dword_B0F15C = 0; /*0x71e607*/
  dword_B0F160 = 0; /*0x71e60c*/
  dword_B0F164 = 0; /*0x71e611*/
  return 0; /*0x71e616*/
}



// ==== 0x0071E620  sub_71E620  this=-  sig=ida-proto ====
int sub_71E620()
{
  dword_B0F1A4 = 0; /*0x71e627*/
  dword_B0F1A8 = 0; /*0x71e62c*/
  byte_B0F1AC = 1; /*0x71e631*/
  byte_B0F1AD = 0; /*0x71e638*/
  dword_B0F1A0 = (int)&DynamicVectorClass<TEventClass *>::`vftable'; /*0x71e63d*/
  dword_B0F1B4 = 10; /*0x71e647*/
  dword_B0F1B0 = 0; /*0x71e651*/
  return atexit(sub_71E660); /*0x71e65c*/
}



// ==== 0x0071E660  sub_71E660  this=-  sig=ida-proto ====
void __cdecl sub_71E660()
{
  dword_B0F1A0 = (int)&VectorClass<TEventClass *>::`vftable'; /*0x71e668*/
  if ( dword_B0F1A4 && byte_B0F1AD ) /*0x71e67c*/
  {
    __3_YAXPAX_Z(dword_B0F1A4); /*0x71e67f*/
    dword_B0F1A4 = 0; /*0x71e687*/
  }
  byte_B0F1AD = 0; /*0x71e68d*/
  dword_B0F1A8 = 0; /*0x71e693*/
}



// ==== 0x0071E6A0  TActionClass::TActionClass  this=TEventClass  sig=csp ====
int __thiscall TActionClass::TActionClass(TActionClass *this)
{
  int v2; // ecx
  char v3; // al
  int v4; // eax
  TActionClass **v5; // edx
  int v6; // eax
  int v7; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x71e6a4*/
  this->idxArray = -1; /*0x71e6ab*/
  this->TActionClass_field_28 = 0; /*0x71e6b2*/
  this->TActionClass_field_2C = 0; /*0x71e6b5*/
  this->TActionClass_field_30 = 0; /*0x71e6b8*/
  LOBYTE(this->TActionClass_field_38) = 0; /*0x71e6bb*/
  *(_DWORD *)&this->TActionClass_field_54 = 0; /*0x71e6be*/
  this->AbstractClass = &TEventClass::`vftable'; /*0x71e6c1*/
  this->? = &TEventClass::`vftable'; /*0x71e6c7*/
  this->? = &TEventClass::`vftable'; /*0x71e6ce*/
  this->? = &TEventClass::`vftable'; /*0x71e6d5*/
  v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e6dc*/
  if ( g_BuildingLoadQueue_Array.?[54] < g_BuildingLoadQueue_Array.?[52] /*0x71e71a*/
    || (BYTE1(g_BuildingLoadQueue_Array.?[53]) || !g_BuildingLoadQueue_Array.?[52])
    && g_BuildingLoadQueue_Array.?[55] > 0
    && (v3 = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[50] + 8))(
               &g_BuildingLoadQueue_Array.?[50],
               g_BuildingLoadQueue_Array.?[52] + g_BuildingLoadQueue_Array.?[55],
               0),
        v2 = g_BuildingLoadQueue_Array.?[54],
        v3) )
  {
    g_BuildingLoadQueue_Array.?[54] = v2 + 1; /*0x71e71f*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[51] + 4 * v2) = this; /*0x71e72b*/
    v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e72e*/
  }
  v4 = 0; /*0x71e734*/
  if ( v2 <= 0 ) /*0x71e738*/
  {
LABEL_11:
    v4 = -1; /*0x71e74c*/
  }
  else
  {
    v5 = (TActionClass **)g_BuildingLoadQueue_Array.?[51]; /*0x71e73a*/
    while ( *v5 != this ) /*0x71e742*/
    {
      ++v4; /*0x71e744*/
      ++v5; /*0x71e745*/
      if ( v4 >= v2 ) /*0x71e74a*/
        goto LABEL_11; /*0x71e74a*/
    }
  }
  this->idxArray = v4; /*0x71e74f*/
  if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x71e786*/
    || (BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
    && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
         0) )
  {
    v6 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x71e793*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v6) = this; /*0x71e7a2*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x71e7d9*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x71e7e6*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x71e7f5*/
  }
  this->TActionClass_field_34 = 0; /*0x71e7f8*/
  return (int)this; /*0x71e7fd*/
}



// ==== 0x0071E940  TEventClass::Execute  this=TEventClass  sig=csp ====
char __thiscall TEventClass::Execute(TEventClass *this, int a2, int a3, int a4, int *a5, int a6, int a7)
{
  double v7; // st7
  int TEventClass_field_2C; // ecx
  int v10; // eax
  int v11; // edi
  int *TEventClass_field_38; // edx
  int v13; // ebp
  int v14; // edi
  int v15; // ebx
  int TEventClass_field_34; // ebp
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // edi
  int *v21; // edx
  int v22; // ebp
  int v23; // edi
  int v24; // esi
  void *vtable3; // edx
  int abstractFlags; // eax
  int v27; // edx
  int v28; // eax
  HouseClass *v29; // ecx
  int v30; // esi
  int v31; // esi
  int *WorldCoords; // eax
  int v33; // esi
  int v34; // edi
  int v35; // ebx
  int *v36; // eax
  int v37; // edx
  int v38; // ecx
  int v39; // eax
  WaveClass *waveEffect; // esi
  int v41; // edx
  ParticleSystemClass *auxParticles1; // ecx
  _DWORD *vtable0; // eax
  int v44; // esi
  int v45; // edx
  int *v46; // eax
  int v47; // ecx
  int v48; // eax
  int Owner; // esi
  int v52; // eax
  HouseClass *v53; // ecx
  HouseClass *v54; // edi
  int v55; // ebx
  double v57; // [esp+4h] [ebp-34h]
  int v59; // [esp+20h] [ebp-18h] BYREF
  int v60; // [esp+24h] [ebp-14h]
  int v61; // [esp+28h] [ebp-10h]
  _BYTE v62[12]; // [esp+2Ch] [ebp-Ch] BYREF

  TEventClass_field_2C = this->TEventClass_field_2C; /*0x71e94d*/
  switch ( TEventClass_field_2C ) /*0x71e964*/
  {
    case 13: /*0x71e964*/
    case 51: /*0x71e964*/
      v27 = *a5; /*0x71ec37*/
      v28 = a5[2]; /*0x71ec39*/
      if ( *a5 == -1 ) /*0x71ec3f*/
        goto LABEL_44; /*0x71ec3f*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v27 < v28 ) /*0x71ec4b*/
      {
        v28 -= *(_DWORD *)&stru_A8EB00.?[416] - v27; /*0x71ec4d*/
LABEL_44:
        if ( v28 ) /*0x71ec51*/
          goto LABEL_139; /*0x71ec51*/
      }
      LOBYTE(v18) = 1; /*0x71ec5a*/
      return v18; /*0x71ec60*/
    case 14: /*0x71e964*/
      if ( dword_A8B230[127].vtable3 == (void *)-1 ) /*0x71ebf6*/
        goto LABEL_139; /*0x71ebf6*/
      vtable3 = dword_A8B230[127].vtable3; /*0x71ebfc*/
      abstractFlags = dword_A8B230[127].abstractFlags; /*0x71ec02*/
      if ( vtable3 == (void *)-1 ) /*0x71ec0b*/
        goto LABEL_39; /*0x71ec0b*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)vtable3 >= abstractFlags ) /*0x71ec17*/
        goto LABEL_153; /*0x71ec17*/
      abstractFlags -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)vtable3; /*0x71ec1d*/
LABEL_39:
      if ( abstractFlags ) /*0x71ec21*/
        goto LABEL_139; /*0x71ec21*/
      LOBYTE(v18) = 1; /*0x71ec2a*/
      return v18; /*0x71ec30*/
    case 27: /*0x71e964*/
      ScenarioClass::GetGlobalStateByID((ScenarioClass *)dword_A8B230, this->TEventClass_field_34, &a6); /*0x71eb62*/
      LOBYTE(v18) = a6; /*0x71eb67*/
      return v18; /*0x71eb72*/
    case 28: /*0x71e964*/
      ScenarioClass::GetGlobalStateByID((ScenarioClass *)dword_A8B230, this->TEventClass_field_34, &a6); /*0x71eb84*/
      LOBYTE(v18) = (_BYTE)a6 == 0; /*0x71eb95*/
      return v18; /*0x71eb9b*/
    case 36: /*0x71e964*/
      ScenarioClass::GetLocalStateByID((ScenarioClass *)dword_A8B230, this->TEventClass_field_34, &a6); /*0x71ebad*/
      LOBYTE(v18) = a6; /*0x71ebb2*/
      return v18; /*0x71ebbd*/
    case 37: /*0x71e964*/
      ScenarioClass::GetLocalStateByID((ScenarioClass *)dword_A8B230, this->TEventClass_field_34, &a6); /*0x71ebcf*/
      LOBYTE(v18) = (_BYTE)a6 == 0; /*0x71ebe0*/
      return v18; /*0x71ebe6*/
    case 45: /*0x71e964*/
      return (int)dword_A8B230[378].vtable1 <= this->TEventClass_field_34; /*0x71eb03*/
    case 46: /*0x71e964*/
      LOBYTE(v18) = (int)dword_A8B230[378].vtable1 >= this->TEventClass_field_34; /*0x71eb1f*/
      return v18; /*0x71eb25*/
    case 47: /*0x71e964*/
      LOBYTE(v18) = this->TEventClass_field_34 <= *(_DWORD *)&stru_A8EB00.?[416] / 15; /*0x71eb49*/
      return v18; /*0x71eb50*/
    case 60: /*0x71e964*/
      v10 = -1; /*0x71e971*/
      v11 = stru_A8EB00.ObjectTypeClass[4] - 1; /*0x71e974*/
      a6 = -1; /*0x71e975*/
      if ( stru_A8EB00.ObjectTypeClass[4] - 1 < 0 ) /*0x71e97b*/
        goto LABEL_8; /*0x71e97b*/
      TEventClass_field_38 = this->TEventClass_field_38; /*0x71e982*/
      v13 = stru_A8EB00.ObjectTypeClass[1] + 4 * v11; /*0x71e985*/
      while ( strcmp((const char *)(*(_DWORD *)v13 + 36), (const char *)TEventClass_field_38) ) /*0x71e9bb*/
      {
        --v11; /*0x71e9bd*/
        v13 -= 4; /*0x71e9be*/
        if ( v11 < 0 ) /*0x71e9c3*/
        {
          v10 = a6; /*0x71e9c5*/
          goto LABEL_8; /*0x71e9c9*/
        }
      }
      v10 = v11; /*0x71e9cb*/
LABEL_8:
      if ( v10 >= stru_A8EB00.ObjectTypeClass[4] ) /*0x71e9d3*/
        goto LABEL_139; /*0x71e9d3*/
      if ( v10 < 0 ) /*0x71e9db*/
        goto LABEL_139; /*0x71e9db*/
      v14 = 0; /*0x71e9eb*/
      v15 = *(_DWORD *)(stru_A8EB00.ObjectTypeClass[1] + 4 * v10); /*0x71e9ed*/
      TEventClass_field_34 = this->TEventClass_field_34; /*0x71e9f5*/
      v17 = *(_DWORD *)&stru_A8EB00.?[164] - 1; /*0x71e9f8*/
      if ( *(_DWORD *)&stru_A8EB00.?[164] - 1 < 0 ) /*0x71e9fd*/
        goto LABEL_139; /*0x71e9fd*/
      while ( 1 ) /*0x71ea03*/
      {
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v17) + 132))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v17)) == v15 ) /*0x71ea16*/
          ++v14; /*0x71ea18*/
        if ( v14 >= TEventClass_field_34 ) /*0x71ea1b*/
          break; /*0x71ea1b*/
        if ( --v17 < 0 ) /*0x71ea22*/
        {
          LOBYTE(v18) = 0; /*0x71ea27*/
          return v18; /*0x71ea2d*/
        }
      }
      goto LABEL_153; /*0x71ea1b*/
    case 61: /*0x71e964*/
      v19 = -1; /*0x71ea36*/
      v20 = stru_A8EB00.ObjectTypeClass[4] - 1; /*0x71ea39*/
      a6 = -1; /*0x71ea3a*/
      if ( stru_A8EB00.ObjectTypeClass[4] - 1 < 0 ) /*0x71ea40*/
        goto LABEL_22; /*0x71ea40*/
      v21 = this->TEventClass_field_38; /*0x71ea47*/
      v22 = stru_A8EB00.ObjectTypeClass[1] + 4 * v20; /*0x71ea4a*/
      while ( strcmp((const char *)(*(_DWORD *)v22 + 36), (const char *)v21) ) /*0x71ea80*/
      {
        --v20; /*0x71ea82*/
        v22 -= 4; /*0x71ea83*/
        if ( v20 < 0 ) /*0x71ea88*/
        {
          v19 = a6; /*0x71ea8a*/
          goto LABEL_22; /*0x71ea8e*/
        }
      }
      v19 = v20; /*0x71ea90*/
LABEL_22:
      if ( v19 >= stru_A8EB00.ObjectTypeClass[4] || v19 < 0 ) /*0x71eaa0*/
        goto LABEL_139; /*0x71eaa0*/
      v23 = *(_DWORD *)(stru_A8EB00.ObjectTypeClass[1] + 4 * v19); /*0x71eab2*/
      v24 = *(_DWORD *)&stru_A8EB00.?[164] - 1; /*0x71eab5*/
      if ( *(_DWORD *)&stru_A8EB00.?[164] - 1 < 0 ) /*0x71eaba*/
        goto LABEL_153; /*0x71eaba*/
      while ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v24) + 132))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v24)) != v23 ) /*0x71ead2*/
      {
        if ( --v24 < 0 ) /*0x71ead9*/
        {
          LOBYTE(v18) = 1; /*0x71eade*/
          return v18; /*0x71eae4*/
        }
      }
      goto LABEL_139; /*0x71ead2*/
    default:
      if ( !TEventClass_field_2C ) /*0x71ec65*/
        goto LABEL_139; /*0x71ec65*/
      if ( TEventClass_field_2C != 19 /*0x71ec81*/
        && TEventClass_field_2C != 20
        && TEventClass_field_2C != 21
        && TEventClass_field_2C != 22 )
      {
        switch ( TEventClass_field_2C ) /*0x71ec93*/
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
            if ( a2 == TEventClass_field_2C && !stru_A8EB00.?[391] ) /*0x71eca9*/
              break; /*0x71eca9*/
            goto LABEL_139; /*0x71eca9*/
          default:
            break;
        }
      }
      switch ( TEventClass_field_2C ) /*0x71ecd6*/
      {
        case 1: /*0x71ecd6*/
        case 25: /*0x71ecd6*/
        case 26: /*0x71ecd6*/
        case 24: /*0x71ecd6*/
        case 59: /*0x71ecd6*/
          if ( a2 == TEventClass_field_2C ) /*0x71f1bf*/
          {
            v53 = (HouseClass *)this->TEventClass_field_34; /*0x71f1c1*/
            if ( v53 == (HouseClass *)-1 || HouseClass::FindOwner(v53) ) /*0x71f1c9*/
            {
              if ( a4 ) /*0x71f1d8*/
              {
                v54 = (HouseClass *)this->TEventClass_field_34; /*0x71f1da*/
                if ( v54 == (HouseClass *)-1 /*0x71f1f5*/
                  || (v55 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 56))(a4),
                      v55 == *(_DWORD *)(HouseClass::FindOwner(v54) + 48)) )
                {
                  *(_BYTE *)a6 = 1; /*0x71f1ff*/
                  this->TEventClass_field_54 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 60))(a4); /*0x71f209*/
LABEL_153:
                  LOBYTE(v18) = 1; /*0x71f20c*/
                  return v18; /*0x71f20f*/
                }
              }
            }
          }
LABEL_139:
          LOBYTE(v18) = 0; /*0x71f163*/
          return v18; /*0x71f16c*/
        case 53: /*0x71ecd6*/
          if ( a2 == 53 ) /*0x71ece3*/
          {
            if ( a4 ) /*0x71ecef*/
            {
              v29 = (HouseClass *)this->TEventClass_field_34; /*0x71ecf5*/
              if ( v29 != (HouseClass *)-1 ) /*0x71ecfb*/
              {
                if ( HouseClass::FindOwner(v29) ) /*0x71ed01*/
                {
                  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 208))(a4, 1) ) /*0x71ed14*/
                  {
                    v30 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 208))(a4, 1); /*0x71ed31*/
                    if ( *(_DWORD *)(v30 + 48) == *(_DWORD *)(HouseClass::FindOwner((HouseClass *)this->TEventClass_field_34) /*0x71ed40*/
                                                            + 48) )
                    {
                      *(_BYTE *)a6 = 1; /*0x71ed4d*/
                      LOBYTE(v18) = 1; /*0x71ed50*/
                      return v18; /*0x71ed56*/
                    }
                  }
                }
              }
            }
          }
          goto LABEL_139; /*0x71ed40*/
        case 54: /*0x71ecd6*/
          if ( a2 == 54 ) /*0x71ed60*/
          {
            if ( a4 ) /*0x71ed6c*/
            {
              v31 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 204))(a4, 1); /*0x71ed7c*/
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 44))(v31) == 16 /*0x71eda2*/
                && this->TEventClass_field_34 != -1
                && (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 64))(v31) == this->TEventClass_field_34 )
              {
                *(_BYTE *)a6 = 1; /*0x71edaf*/
                LOBYTE(v18) = 1; /*0x71edb2*/
                return v18; /*0x71edb8*/
              }
            }
          }
          goto LABEL_139; /*0x71eda2*/
        case 34: /*0x71ecd6*/
          if ( a2 == 34 ) /*0x71edc6*/
          {
            WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, &v59, this->TEventClass_field_34); /*0x71eddb*/
            v33 = *WorldCoords; /*0x71ede0*/
            v34 = WorldCoords[1]; /*0x71ede6*/
            v35 = WorldCoords[2]; /*0x71edeb*/
            v36 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a4 + 72))(a4, v62); /*0x71edf3*/
            v37 = v36[1]; /*0x71edf6*/
            v38 = *v36; /*0x71edf9*/
            v39 = v36[2]; /*0x71edfb*/
            v60 = v37 - v34; /*0x71ee00*/
            __asm { fild [esp+2Ch+var_14] } /*0x71ee06*/
            v61 = v39 - v35; /*0x71ee0c*/
            __asm { fild [esp+2Ch+var_10] } /*0x71ee10*/
            v59 = v38 - v33; /*0x71ee14*/
            __asm /*0x71ee1b*/
            {
              fild [esp+34h+var_18]
              fld st
              fmul st, st(1)
              fld st(2)
              fmul st, st(3)
              faddp st(1), st
              fld st(3)
              fmul st, st(4)
              faddp st(1), st
              fstp [esp+34h+var_38+4]; double
              fstp st
              fstp st
              fstp st
            }
            Math::Sqrt(v57); /*0x71ee38*/
            LOWORD(v18) = Math::RoundToInt(v7); /*0x71ee40*/
            LOBYTE(v18) = v18 <= 1280; /*0x71ee4d*/
            return v18; /*0x71ee54*/
          }
          goto LABEL_139; /*0x71edc6*/
      }
      if ( TEventClass_field_2C == 44 /*0x71ee7c*/
        && (a2 != 44 || !a7 || this->TEventClass_field_34 != *(_DWORD *)(*(_DWORD *)(a7 + 540) + 48)) )
      {
        goto LABEL_139; /*0x71ee7c*/
      }
      if ( a3 ) /*0x71ee88*/
      {
        switch ( TEventClass_field_2C ) /*0x71eea2*/
        {
          case 12: /*0x71eea2*/
            if ( (*(int (__stdcall **)(int))(*(_DWORD *)(a3 + 36) + 24))(a3 + 36) >= this->TEventClass_field_34 ) /*0x71ef0e*/
              goto LABEL_122; /*0x71ef0e*/
            LOBYTE(v18) = 0; /*0x71ef17*/
            return v18; /*0x71ef1d*/
          case 15: /*0x71eea2*/
            if ( *(_DWORD *)(a3 + 21640) >= this->TEventClass_field_34 ) /*0x71f04a*/
              goto LABEL_122; /*0x71f04a*/
            LOBYTE(v18) = 0; /*0x71f04f*/
            return v18; /*0x71f055*/
          case 16: /*0x71eea2*/
            if ( *(_DWORD *)(a3 + 21556) >= this->TEventClass_field_34 ) /*0x71f063*/
              goto LABEL_122; /*0x71f063*/
            goto LABEL_139; /*0x71f063*/
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
                  goto LABEL_139; /*0x71ef7b*/
              }
              ++v45; /*0x71ef81*/
              ++v46; /*0x71ef82*/
              if ( v45 >= v44 ) /*0x71ef87*/
                goto LABEL_122; /*0x71ef87*/
            }
          case 18: /*0x71eea2*/
            if ( *(_BYTE *)(a3 + 505) ) /*0x71ef8e*/
              goto LABEL_122; /*0x71ef96*/
            LOBYTE(v18) = 0; /*0x71ef9f*/
            return v18; /*0x71efa5*/
          case 19: /*0x71eea2*/
            v48 = *(_DWORD *)(a3 + 620); /*0x71efeb*/
            goto LABEL_112; /*0x71efeb*/
          case 20: /*0x71eea2*/
            if ( *(_DWORD *)(a3 + 628) != this->TEventClass_field_34 ) /*0x71f00e*/
              goto LABEL_139; /*0x71f00e*/
            *(_BYTE *)a6 = 1; /*0x71f018*/
            goto LABEL_122; /*0x71f01b*/
          case 21: /*0x71eea2*/
            if ( *(_DWORD *)(a3 + 624) != this->TEventClass_field_34 ) /*0x71f028*/
              goto LABEL_139; /*0x71f028*/
            *(_BYTE *)a6 = 1; /*0x71f032*/
            goto LABEL_122; /*0x71f035*/
          case 22: /*0x71eea2*/
            v48 = *(_DWORD *)(a3 + 632); /*0x71f037*/
LABEL_112:
            if ( v48 != this->TEventClass_field_34 ) /*0x71eff4*/
              goto LABEL_139; /*0x71eff4*/
            *(_BYTE *)a6 = 1; /*0x71effe*/
            goto LABEL_122; /*0x71f001*/
          case 23: /*0x71eea2*/
            waveEffect = FootClass_Array.?; /*0x71eea9*/
            v41 = 0; /*0x71eeaf*/
            if ( (int)FootClass_Array.? <= 0 ) /*0x71eeb3*/
              goto LABEL_91; /*0x71eeb3*/
            auxParticles1 = FootClass_Array.?; /*0x71eeb8*/
            break; /*0x71eeb8*/
          case 32: /*0x71eea2*/
            if ( !DynamicVector::GetOrGrow((DynamicVector *)(a3 + 21840), this->TEventClass_field_34) ) /*0x71efb9*/
              goto LABEL_139; /*0x71efb9*/
            *(_BYTE *)a6 = 1; /*0x71efc3*/
            goto LABEL_122; /*0x71efc6*/
          case 52: /*0x71eea2*/
            if ( (*(int (__stdcall **)(int))(*(_DWORD *)(a3 + 36) + 24))(a3 + 36) <= this->TEventClass_field_34 ) /*0x71ef2d*/
              goto LABEL_122; /*0x71ef2d*/
            LOBYTE(v18) = 0; /*0x71ef36*/
            return v18; /*0x71ef3c*/
          case 57: /*0x71eea2*/
            if ( DynamicVector::GetOrGrow((DynamicVector *)(a3 + 21840), this->TEventClass_field_34) ) /*0x71efd5*/
              goto LABEL_139; /*0x71efdc*/
            *(_BYTE *)a6 = 1; /*0x71efe6*/
            goto LABEL_122; /*0x71efe9*/
          default:
            goto LABEL_122;
        }
        while ( 1 ) /*0x71eebe*/
        {
          vtable0 = auxParticles1->ObjectClass; /*0x71eebe*/
          if ( *((_DWORD *)auxParticles1->ObjectClass + 9) == this->TEventClass_field_30 /*0x71eecc*/
            && !vtable0[21]
            && *((_BYTE *)vtable0 + 130) )
          {
            break; /*0x71eecc*/
          }
          ++v41; /*0x71eed6*/
          auxParticles1 = (ParticleSystemClass *)((char *)auxParticles1 + 4); /*0x71eed7*/
          if ( v41 >= (int)FootClass_Array.? ) /*0x71eedc*/
            goto LABEL_91; /*0x71eedc*/
        }
        *(_BYTE *)a6 = 1; /*0x71eee4*/
        waveEffect = FootClass_Array.?; /*0x71eee7*/
LABEL_91:
        if ( (WaveClass *)v41 == waveEffect ) /*0x71eeef*/
        {
          LOBYTE(v18) = 0; /*0x71eef8*/
          return v18; /*0x71eefe*/
        }
      }
LABEL_122:
      Owner = HouseClass::FindOwner((HouseClass *)this->TEventClass_field_34); /*0x71f069*/
      if ( Owner ) /*0x71f075*/
      {
        switch ( this->TEventClass_field_2C ) /*0x71f092*/
        {
          case 3: /*0x71f092*/
            if ( *(_BYTE *)(Owner + 580) ) /*0x71f0e1*/
              break; /*0x71f0e9*/
            LOBYTE(v18) = 0; /*0x71f0f2*/
            return v18; /*0x71f0f8*/
          case 5: /*0x71f092*/
            if ( *(_BYTE *)(Owner + 500) ) /*0x71f0fb*/
              break; /*0x71f103*/
            LOBYTE(v18) = 0; /*0x71f10c*/
            return v18; /*0x71f112*/
          case 9: /*0x71f092*/
            if ( VectorClass::GetCount((VectorClass *)(Owner + 21860)) > 0 ) /*0x71f13c*/
              goto LABEL_139; /*0x71f13c*/
            if ( VectorClass::GetCount((VectorClass *)(Owner + 21880)) <= 0 ) /*0x71f14b*/
              break; /*0x71f14b*/
            LOBYTE(v18) = 0; /*0x71f150*/
            return v18; /*0x71f156*/
          case 0xA: /*0x71f092*/
            if ( *(int *)(Owner + 752) <= 0 ) /*0x71f11d*/
              break; /*0x71f11d*/
            LOBYTE(v18) = 0; /*0x71f126*/
            return v18; /*0x71f12c*/
          case 0xB: /*0x71f092*/
            if ( *(int *)(Owner + 752) <= 0 /*0x71f1af*/
              && VectorClass::GetCount((VectorClass *)(Owner + 21860)) <= 0
              && VectorClass::GetCount((VectorClass *)(Owner + 21880)) <= 0 )
            {
              break; /*0x71f1af*/
            }
            goto LABEL_139; /*0x71f1af*/
          case 0x1E: /*0x71f092*/
            HouseClass::GetPowerRatio((HouseClass *)Owner); /*0x71f09b*/
            __asm /*0x71f0a0*/
            {
              fcomp ds:dbl_7E1718
              fnstsw ax
            }
            if ( (_AX & 0x100) != 0 ) /*0x71f0ab*/
              break; /*0x71f0ab*/
            LOBYTE(v18) = 0; /*0x71f0b4*/
            return v18; /*0x71f0ba*/
          case 0x37: /*0x71f092*/
            v52 = *(_DWORD *)(Owner + 748); /*0x71f159*/
            goto LABEL_138; /*0x71f159*/
          case 0x38: /*0x71f092*/
            if ( *(_DWORD *)(Owner + 744) - *(_DWORD *)(Owner + 748) > 0 ) /*0x71f17f*/
              goto LABEL_139; /*0x71f17f*/
            v52 = *(_DWORD *)(Owner + 756); /*0x71f181*/
LABEL_138:
            if ( v52 > 0 ) /*0x71f161*/
              goto LABEL_139; /*0x71f161*/
            break; /*0x71f161*/
          case 0x3A: /*0x71f092*/
            HouseClass::GetPowerRatio((HouseClass *)Owner); /*0x71f0bf*/
            __asm /*0x71f0c4*/
            {
              fcomp ds:dbl_7E1718
              fnstsw ax
            }
            if ( (_AX & 0x100) == 0 ) /*0x71f0cf*/
              break; /*0x71f0cf*/
            LOBYTE(v18) = 0; /*0x71f0d8*/
            return v18; /*0x71f0de*/
          default:
            break;
        }
      }
      LOBYTE(v18) = 1; /*0x71f1b1*/
      return v18;
  }
}



// ==== 0x0071F390  TEventClass::PrepareSaveToINI  this=TEventClass  sig=csp ====
int __thiscall TEventClass::PrepareSaveToINI(TEventClass *this, const char *a2)
{
  int TEventClass_field_2C; // edx
  int v3; // eax
  int TEventClass_field_30; // esi
  const CHAR *v6; // [esp-10h] [ebp-18h]
  int v7; // [esp-Ch] [ebp-14h]
  int v8; // [esp-8h] [ebp-10h]
  int TEventClass_field_34; // [esp-4h] [ebp-Ch]

  TEventClass_field_2C = this->TEventClass_field_2C; /*0x71f390*/
  switch ( TEventClass_field_2C ) /*0x71f3a8*/
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
  TEventClass_field_30 = this->TEventClass_field_30; /*0x71f3fe*/
  if ( TEventClass_field_30 ) /*0x71f403*/
  {
    TEventClass_field_34 = TEventClass_field_30 + 36; /*0x71f408*/
    v8 = 1; /*0x71f409*/
    v7 = this->TEventClass_field_2C; /*0x71f40b*/
    v6 = aDDS; /*0x71f40c*/
  }
  else
  {
    if ( v3 == 43 ) /*0x71f416*/
      return wsprintfA( /*0x71f443*/
               (LPSTR)&a2[strlen(a2)],
               aDDDS,
               TEventClass_field_2C,
               2,
               this->TEventClass_field_34,
               this->TEventClass_field_38);
    TEventClass_field_34 = this->TEventClass_field_34; /*0x71f446*/
    v8 = 0; /*0x71f447*/
    v7 = this->TEventClass_field_2C; /*0x71f449*/
    v6 = g_Str_Trace__d__d; /*0x71f44a*/
  }
  return wsprintfA((LPSTR)&a2[strlen(a2)], v6, v7, v8, TEventClass_field_34); /*0x71f441*/
}



// ==== 0x0071F4E0  TriggerTypeClass::ParseActionData  this=TriggerTypeClass  sig=csp ====
char *__thiscall TriggerTypeClass::ParseActionData(TriggerTypeClass *this)
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

  this->__pad_24[4] = 0; /*0x71f4f0*/
  v2 = strtok(0, Str); /*0x71f4f7*/
  this->__pad_24[2] = atoi(v2); /*0x71f509*/
  v3 = strtok(0, Str); /*0x71f50c*/
  v4 = atoi(v3); /*0x71f51e*/
  v5 = strtok(0, Str); /*0x71f525*/
  v6 = atoi(v5); /*0x71f52d*/
  result = 0; /*0x71f532*/
  if ( v4 == 2 ) /*0x71f537*/
    result = strtok(0, Str); /*0x71f53f*/
  if ( v4 ) /*0x71f54a*/
  {
    v8 = v4 - 1; /*0x71f54c*/
    if ( v8 ) /*0x71f54d*/
    {
      if ( v8 == 1 ) /*0x71f550*/
      {
        this->__pad_24[4] = v6; /*0x71f554*/
        if ( result ) /*0x71f557*/
        {
          result = strncpy(Destination, result, 0x18u); /*0x71f567*/
          v10 = 0; /*0x71f56f*/
        }
        else
        {
          Destination[0] = 0; /*0x71f559*/
        }
        if ( Destination != (char *)&this->__pad_24[5] ) /*0x71f57d*/
        {
          qmemcpy(&this->__pad_24[5], Destination, 0x18u); /*0x71f588*/
          this->UINameLabel[19] = v10; /*0x71f58a*/
        }
      }
    }
    else
    {
      result = (char *)TeamTypeClass::FindByName((TeamTypeClass *)v5); /*0x71f595*/
      this->__pad_24[3] = (int)result; /*0x71f59a*/
    }
  }
  else
  {
    this->__pad_24[4] = v6; /*0x71f5a5*/
  }
  return result; /*0x71f58b*/
}



// ==== 0x0071F680  TriggerTypeClass::GetActionCategoryFlags  this=TriggerTypeClass  sig=csp ====
int __thiscall TriggerTypeClass::GetActionCategoryFlags(TriggerTypeClass *this)
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
  if ( this == (TriggerTypeClass *)8 || this == (TriggerTypeClass *)24 ) /*0x71f6bb*/
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
int __thiscall TEventClass::CheckConditions(TEventClass *this, int a2, int a3)
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
int __thiscall TEventClass::ProcessEvent(TEventClass *this, int a2)
{
  int TEventClass_field_28; // eax
  int v4; // eax
  int TEventClass_field_30; // eax
  int v6; // eax

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x71f829*/
  TEventClass_field_28 = this->TEventClass_field_28; /*0x71f82e*/
  if ( TEventClass_field_28 ) /*0x71f833*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(TEventClass_field_28 + 4) + 16))(TEventClass_field_28 + 4); /*0x71f83c*/
    Power::TimerProcess(v4); /*0x71f842*/
  }
  Power::TimerProcess(this->TEventClass_field_2C); /*0x71f84d*/
  TEventClass_field_30 = this->TEventClass_field_30; /*0x71f852*/
  if ( TEventClass_field_30 ) /*0x71f857*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(TEventClass_field_30 + 4) + 16))(TEventClass_field_30 + 4); /*0x71f860*/
    Power::TimerProcess(v6); /*0x71f866*/
  }
  return Power::TimerProcess(this->TEventClass_field_34); /*0x71f876*/
}



// ==== 0x0071F880  TEventClass::ddtor  this=TEventClass  sig=csp ====
int __stdcall TEventClass::ddtor(TEventClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x71f886*/
    return -2147467261; /*0x71f888*/
  *a2 = 1326367635; /*0x71f896*/
  a2[1] = 298977877; /*0x71f89e*/
  a2[2] = 1610655660; /*0x71f8a7*/
  a2[3] = unk_7E981C; /*0x71f8b0*/
  return 0; /*0x71f88d*/
}



// ==== 0x0071F8C0  TEventClass::SaveLoad_Prefix  this=TEventClass  sig=csp ====
int __stdcall TEventClass::SaveLoad_Prefix(TEventClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x71f8cb*/
  if ( result >= 0 ) /*0x71f8d2*/
  {
    if ( this ) /*0x71f8d6*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x71f8df*/
      this->AbstractClass = &TEventClass::`vftable'; /*0x71f8e4*/
      this->? = &TEventClass::`vftable'; /*0x71f8ea*/
      this->? = &TEventClass::`vftable'; /*0x71f8f1*/
      this->? = &TEventClass::`vftable'; /*0x71f8f8*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->TEventClass_field_28); /*0x71f908*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->TEventClass_field_30); /*0x71f916*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->TEventClass_field_54); /*0x71f924*/
    return 0; /*0x71f929*/
  }
  return result; /*0x71f92b*/
}



// ==== 0x0071F930  TEventClass::SaveLoad_Prefix_0  this=TEventClass  sig=csp ====
int __stdcall TEventClass::SaveLoad_Prefix_0(TEventClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x71f93f*/
  if ( result >= 0 ) /*0x71f946*/
    return 0; /*0x71f948*/
  return result; /*0x71f94a*/
}



// ==== 0x0071F950  TEventClass::GetStateA  this=TEventClass  sig=csp ====
char __thiscall TEventClass::GetStateA(TEventClass *this)
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
char __thiscall TEventClass::GetStateB_SpyEvent(TEventClass *this)
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
int __thiscall TriggerClass::GetValue(TriggerClass *this)
{
  return *((_DWORD *)this + 21); /*0x71fa33*/
}



// ==== 0x0071FA40  ObjectClass::method_71FA40  this=ObjectClass  sig=csp ====
int __thiscall sub_71FA40(_DWORD *this, int a2)
{
  this->q054 = a2; /*0x71fa44*/
  return a2; /*0x71fa47*/
}



// ==== 0x0071FA50  TEventClass::StubReturn88  this=TEventClass  sig=csp ====
int TEventClass::StubReturn88(TEventClass *this)
{
  return 88; /*0x71fa55*/
}



// ==== 0x0071FA60  TEventClass::StubReturn48  this=TEventClass  sig=csp ====
int TEventClass::StubReturn48(TEventClass *this)
{
  return 48; /*0x71fa65*/
}



// ==== 0x0071FA70  TEventClass::Stub  this=TEventClass  sig=csp ====
int __thiscall TEventClass::Stub(TEventClass *this)
{
  return this->eventType; /*0x71fa73*/
}



// ==== 0x0071FA80  TEventClass::Fire  this=TEventClass  sig=csp ====
void **__thiscall TEventClass::Fire(TEventClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  TEventClass *v7; // [esp+8h] [ebp-4h] BYREF

  this->AbstractClass = &TEventClass::`vftable'; /*0x71fa86*/
  this->? = &TEventClass::`vftable'; /*0x71fa8c*/
  this->? = &TEventClass::`vftable'; /*0x71fa93*/
  this->? = &TEventClass::`vftable'; /*0x71fa9a*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x71faa1*/
  v7 = this; /*0x71fab6*/
  v3 = (*(int (__thiscall **)(int *, TEventClass **))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 16))( /*0x71faba*/
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
         &v7);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.GateCloseDelay[0] ) /*0x71faca*/
  {
    --g_BuildingLoadQueue_Array.GateCloseDelay[0]; /*0x71facf*/
    for ( ; /*0x71fad5*/
          v3 < g_BuildingLoadQueue_Array.GateCloseDelay[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v3) )
    {
      ++v3; /*0x71fadd*/
    }
  }
  v7 = this; /*0x71faff*/
  v4 = (*(int (__thiscall **)(int *, TEventClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x71fb03*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v7);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x71fb13*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x71fb18*/
    for ( ; /*0x71fb1e*/
          v4 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v4) )
    {
      ++v4; /*0x71fb26*/
    }
  }
  v7 = this; /*0x71fb48*/
  v5 = (*(int (__thiscall **)(int *, TEventClass **))(g_BuildingLoadQueue_Array.?[50] + 16))( /*0x71fb4c*/
         &g_BuildingLoadQueue_Array.?[50],
         &v7);
  if ( v5 != -1 && v5 < g_BuildingLoadQueue_Array.?[54] ) /*0x71fb5c*/
  {
    --g_BuildingLoadQueue_Array.?[54]; /*0x71fb61*/
    for ( ; /*0x71fb67*/
          v5 < g_BuildingLoadQueue_Array.?[54];
          *(_DWORD *)(g_BuildingLoadQueue_Array.?[51] + 4 * v5 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[51]
                                                                                + 4 * v5) )
    {
      ++v5; /*0x71fb6f*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x71fb83*/
  if ( (a2 & 1) != 0 ) /*0x71fb8d*/
    __3_YAXPAX_Z(this); /*0x71fb90*/
  return &this->AbstractClass; /*0x71fb9a*/
}



// ==== 0x0071FBA0  _DynamicVectorClass_PAVTEventClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TEventClass::Destroy(_DynamicVectorClass_PAVTEventClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x71fba6*/
  this->m_10 = 0; /*0x71fba9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x71fbb0*/
  {
    __3_YAXPAX_Z(v2); /*0x71fbb6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71fbbe*/
  }
  BYTE1(this->m_C) = 0; /*0x71fbc1*/
  this->m_8 = 0; /*0x71fbc4*/
}



// ==== 0x0071FBD0  _DynamicVectorClass_PAVTEventClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TEventClass::GetItemIndex(_DynamicVectorClass_PAVTEventClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x71fbd0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x71fbe5*/
  else
    return 0; /*0x71fbd7*/
}



// ==== 0x0071FBF0  _VectorClass_PAVTEventClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TEventClass::Get(_VectorClass_PAVTEventClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x71fbfa*/
}



// ==== 0x0071FC00  _VectorClass_PAVTEventClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TEventClass::Add(_VectorClass_PAVTEventClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x71fc02*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x71fc0d*/
  {
    v3 = 0; /*0x71fc0f*/
    if ( m_8 <= 0 ) /*0x71fc13*/
      return 1; /*0x71fc33*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x71fc15*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x71fc1b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x71fc24*/
    {
      ++v3; /*0x71fc26*/
      ++v4; /*0x71fc27*/
      if ( v3 >= m_8 ) /*0x71fc2c*/
        return 1; /*0x71fc2c*/
    }
  }
  return 0; /*0x71fc2e*/
}



// ==== 0x0071FC40  _VectorClass_PAVTEventClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TEventClass::Release(_VectorClass_PAVTEventClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x71fc4c*/
  {
    LOBYTE(this->m_C) = 0; /*0x71fc56*/
    if ( a3 ) /*0x71fc5c*/
      v4 = a3; /*0x71fc72*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x71fc6e*/
    LOBYTE(this->m_C) = 1; /*0x71fc76*/
    if ( v4 ) /*0x71fc7a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x71fc85*/
      {
        m_8 = this->m_8; /*0x71fc8c*/
        if ( a2 < m_8 ) /*0x71fc91*/
          m_8 = a2; /*0x71fc93*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x71fc99*/
          ++i; /*0x71fc9e*/
        if ( BYTE1(this->m_C) ) /*0x71fcab*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x71fcb6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x71fcbe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x71fcc7*/
      this->m_8 = a2; /*0x71fccf*/
      BYTE1(this->m_C) = a3 == 0; /*0x71fcd2*/
      return 1; /*0x71fcd8*/
    }
    else
    {
      return 0; /*0x71fc7f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVTEventClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x71fce2*/
    return 1; /*0x71fce8*/
  }
}



// ==== 0x0071FCF0  _VectorClass_PAVTEventClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TEventClass::Remove(_VectorClass_PAVTEventClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x71fcfd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x71fd03*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71fd0b*/
  }
  BYTE1(this->m_C) = 0; /*0x71fd0e*/
  this->m_8 = 0; /*0x71fd11*/
}



// ==== 0x0071FD20  _VectorClass_PAVTEventClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TEventClass::GetSize(_VectorClass_PAVTEventClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x71fd20*/
    return 0; /*0x71fd28*/
  m_8 = this->m_8; /*0x71fd2e*/
  result = 0; /*0x71fd31*/
  if ( m_8 <= 0 ) /*0x71fd35*/
    return -1; /*0x71fd4c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x71fd3b*/
  {
    if ( ++result >= m_8 ) /*0x71fd4a*/
      return -1; /*0x71fd4a*/
  }
  return result; /*0x71fd2a*/
}



// ==== 0x0071FD60  _VectorClass_PAVTEventClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TEventClass::GetCapacity(_VectorClass_PAVTEventClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x71fd60*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x71fd75*/
  else
    return 0; /*0x71fd67*/
}



// ==== 0x0071FD80  _DynamicVectorClass_PAVTEventClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TEventClass::SetCapacity(_DynamicVectorClass_PAVTEventClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x71fd8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x71fd92*/
    if ( a3 ) /*0x71fd98*/
      v4 = a3; /*0x71fdae*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x71fdaa*/
    LOBYTE(this->m_C) = 1; /*0x71fdb2*/
    if ( !v4 ) /*0x71fdb6*/
      return 0; /*0x71fe2a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x71fdb8*/
    {
      m_8 = this->m_8; /*0x71fdbf*/
      if ( a2 < m_8 ) /*0x71fdc4*/
        m_8 = a2; /*0x71fdc6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x71fdcc*/
        ++i; /*0x71fdd1*/
      if ( BYTE1(this->m_C) ) /*0x71fdde*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x71fde9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x71fdf1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x71fdfa*/
    this->m_8 = a2; /*0x71fe02*/
    BYTE1(this->m_C) = a3 == 0; /*0x71fe05*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVTEventClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x71fe0e*/
  }
  v7 = this->m_8; /*0x71fe11*/
  if ( v7 < this->m_10 ) /*0x71fe19*/
    this->m_10 = v7; /*0x71fe1b*/
  return 1; /*0x71fe1e*/
}



// ==== 0x0071FE30  _DynamicVectorClass_PAVTEventClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TEventClass::FindItemIndex(_DynamicVectorClass_PAVTEventClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x71fe30*/
  result = 0; /*0x71fe33*/
  if ( m_10 <= 0 ) /*0x71fe38*/
    return -1; /*0x71fe4f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x71fe3e*/
  {
    if ( ++result >= m_10 ) /*0x71fe4d*/
      return -1; /*0x71fe4d*/
  }
  return result; /*0x71fe52*/
}



// ==== 0x0071FE60  _VectorClass_PAVTEventClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TEventClass::QueryInterface(_VectorClass_PAVTEventClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x71fe63*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TEventClass *>::`vftable'; /*0x71fe66*/
  if ( v3 && BYTE1(this->m_C) ) /*0x71fe70*/
  {
    __3_YAXPAX_Z(v3); /*0x71fe78*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71fe80*/
  }
  BYTE1(this->m_C) = 0; /*0x71fe8b*/
  this->m_8 = 0; /*0x71fe91*/
  if ( (a2 & 1) != 0 ) /*0x71fe98*/
    __3_YAXPAX_Z(this); /*0x71fe9b*/
  return this->__pad_0; /*0x71fea5*/
}



// ==== 0x0071FEB0  _DynamicVectorClass_PAVTEventClass::Constructor_VectorClass_TEventClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TEventClass::Constructor_VectorClass_TEventClass___(
        _DynamicVectorClass_PAVTEventClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x71feb3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<TEventClass *>::`vftable'; /*0x71feb6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x71fec0*/
  {
    __3_YAXPAX_Z(v3); /*0x71fec8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x71fed0*/
  }
  BYTE1(this->m_C) = 0; /*0x71fedb*/
  this->m_8 = 0; /*0x71fee1*/
  if ( (a2 & 1) != 0 ) /*0x71fee8*/
    __3_YAXPAX_Z(this); /*0x71feeb*/
  return this->__pad_0; /*0x71fef5*/
}



// ==== 0x0071FF00  sub_71FF00  this=-  sig=ida-proto ====
int sub_71FF00()
{
  dword_B0F1E8 = 0; /*0x71ff02*/
  dword_B0F1EC = 0; /*0x71ff07*/
  dword_B0F1F0 = 0; /*0x71ff0c*/
  dword_B0F1F4 = 0; /*0x71ff11*/
  return 0; /*0x71ff16*/
}



// ==== 0x0071FF20  TextButtonClass::method_71FF20  this=TextButtonClass  sig=csp ====
int __thiscall sub_71FF20(
        TextButtonClass *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10)
{
  int Instance; // ebx

  ToggleClass::Construct((int)this, a2, a5, a6, a7, a8); /*0x71ff41*/
  this->__pad_0[53] = a10; /*0x71ff52*/
  this->__pad_0[52] = a9; /*0x71ff5c*/
  this->field_38 = a3; /*0x71ff5f*/
  this->u32_3C = a4; /*0x71ff62*/
  *(_DWORD *)this->__pad_0 = &TextButtonClass::`vftable'; /*0x71ff65*/
  if ( a7 == -1 || a8 == -1 ) /*0x71ff70*/
  {
    Instance = TextRenderer::GetInstance(); /*0x71ff7a*/
    if ( a7 == -1 ) /*0x71ff7c*/
      *(_DWORD *)&this->__pad_0[20] = Text::MeasureWidth(this->field_38, 0) + 8; /*0x71ff8e*/
    if ( a8 == -1 ) /*0x71ff94*/
      *(_DWORD *)&this->__pad_0[24] = *(_DWORD *)(Instance + 28) + 2; /*0x71ff9c*/
  }
  return (int)this->__pad_0; /*0x71ffa1*/
}



// ==== 0x0071FFE0  TextButtonClass::checkWeaponCooldown  this=TextButtonClass  sig=csp ====
int __thiscall AbstractClass::checkWeaponCooldown(TextButtonClass *this, int a2)
{
  if ( !Control::DispatchClick((ControlClass *)this, a2) ) /*0x71ffe8*/
    return 0; /*0x720012*/
  (*(void (__thiscall **)(TextButtonClass *))(*(_DWORD *)this->__pad_0 + 144))(this); /*0x71fff5*/
  (*(void (__thiscall **)(TextButtonClass *, int))(*(_DWORD *)this->__pad_0 + 148))(this, this->field_38); /*0x720003*/
  return 1; /*0x72000e*/
}


