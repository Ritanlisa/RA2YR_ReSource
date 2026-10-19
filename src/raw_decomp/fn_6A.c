// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x006A01A0  WalkLocomotion::MoveTo  this=IUnknown  sig=csp ====
char __thiscall WalkLocomotion::MoveTo(int this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  int *v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v18[2]; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+18h] [ebp-Ch] BYREF
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]

  v3 = a2; /*0x6a01a0*/
  if ( *a2 != g_OverlayTypeConfig || a2[1] != (_DWORD)qword_B077FC || (v5 = a2[2], v5 != HIDWORD(qword_B077FC)) ) /*0x6a01ce*/
  {
    LOBYTE(v5) = *(_BYTE *)(this + 96); /*0x6a01d4*/
    v6 = a3; /*0x6a01d7*/
    if ( !(_BYTE)v5 ) /*0x6a01dd*/
    {
      v5 = *(_DWORD *)(this + 88); /*0x6a01e3*/
      if ( v5 != -1 ) /*0x6a01e9*/
      {
        v5 = byte_7F2A40[12 * v5]; /*0x6a01f2*/
        if ( v5 ) /*0x6a01fc*/
        {
          v7 = 4 * v5; /*0x6a0202*/
          v8 = dword_7F2960[v7]; /*0x6a0205*/
          v5 = dword_7F296C[v7]; /*0x6a020b*/
          if ( v5 > -1 ) /*0x6a0214*/
          {
            v9 = (int *)(v8 + 12 * v5); /*0x6a021d*/
            a3 = v9[2]; /*0x6a0223*/
            if ( *(_DWORD *)(this + 92) < v5 ) /*0x6a022c*/
            {
              v10 = v9[1]; /*0x6a0234*/
              v18[0] = *v9; /*0x6a0237*/
              v18[1] = v10; /*0x6a023f*/
              v5 = (int)WalkLocomotion::TransformCoords((WalkLocomotion *)this, &v19, v18, &a3); /*0x6a0250*/
              v11 = *(_DWORD *)v5; /*0x6a0255*/
              v12 = *(_DWORD *)(v5 + 4); /*0x6a0259*/
              if ( !v6 ) /*0x6a025c*/
              {
                v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(*(_DWORD *)(this + 12)); /*0x6a0263*/
                v14 = *(_DWORD *)(this + 12); /*0x6a0269*/
                v19 = v11; /*0x6a026c*/
                v20 = v12; /*0x6a0270*/
                v21 = v13; /*0x6a0274*/
                (*(void (__thiscall **)(int, int *))(*(_DWORD *)v14 + 244))(v14, &v19); /*0x6a027f*/
                LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 12) + 244))( /*0x6a028f*/
                               *(_DWORD *)(this + 12),
                               a2);
                return v5; /*0x6a029c*/
              }
              if ( v6 == 1 || v6 == 3 ) /*0x6a02a7*/
              {
                v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(*(_DWORD *)(this + 12)); /*0x6a02ae*/
                v16 = *(_DWORD *)(this + 12); /*0x6a02b4*/
                v21 = v15; /*0x6a02b7*/
                v19 = v11; /*0x6a02bb*/
                v20 = v12; /*0x6a02bf*/
                LOBYTE(v5) = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v16 + 240))(v16, &v19); /*0x6a02ca*/
              }
              v3 = a2; /*0x6a02d0*/
            }
          }
        }
      }
    }
    if ( v6 ) /*0x6a02d6*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x6a02f6*/
        LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 12) + 240))( /*0x6a02fe*/
                       *(_DWORD *)(this + 12),
                       v3);
    }
    else
    {
      LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 12) + 244))( /*0x6a02de*/
                     *(_DWORD *)(this + 12),
                     v3);
    }
  }
  return v5; /*0x6a0295*/
}



// ==== 0x006A0310  ShipLocomotionClass::SetWaypointTarget  this=ShipLocomotionClass  sig=csp ====
char __stdcall WalkLocomotionClass::SetWaypointTarget(ShipLocomotionClass *this, int a2, unsigned int a3, __int64 a4)
{
  int v4; // eax
  char *v5; // esi
  int *v6; // edi
  int v7; // ecx
  __int64 v8; // kr08_8
  CellClass *v9; // eax
  int v11; // [esp-4h] [ebp-20h]
  unsigned int v12; // [esp+10h] [ebp-Ch] BYREF
  __int64 v13; // [esp+14h] [ebp-8h]

  this->MovementSpeed[1] = a2; /*0x6a0323*/
  this->TrackNumber = 0; /*0x6a0326*/
  v4 = g_OverlayTypeConfig; /*0x6a032d*/
  if ( a3 != g_OverlayTypeConfig || a4 != qword_B077FC ) /*0x6a0340*/
  {
    v5 = (char *)this - 4; /*0x6a0358*/
    v13 = a4; /*0x6a035f*/
    v6 = &this->Dest[2]; /*0x6a0363*/
    v12 = a3; /*0x6a036a*/
    if ( *v6 != g_OverlayTypeConfig || __PAIR64__(this->HeadToCoord[1], this->HeadToCoord[0]) != qword_B077FC ) /*0x6a0375*/
    {
      *v6 = g_OverlayTypeConfig; /*0x6a0386*/
      this->HeadToCoord[0] = qword_B077FC; /*0x6a038d*/
      v7 = HIDWORD(qword_B077FC); /*0x6a0390*/
      v5[99] = 0; /*0x6a0396*/
      this->HeadToCoord[1] = v7; /*0x6a039a*/
      v4 = g_OverlayTypeConfig; /*0x6a039d*/
    }
    if ( __PAIR64__(a4, a3) != __PAIR64__(qword_B077FC, v4) /*0x6a03be*/
      || (LOBYTE(v4) = BYTE4(qword_B077FC), HIDWORD(a4) != HIDWORD(qword_B077FC)) )
    {
      v8 = v13; /*0x6a03c4*/
      v5[99] = 1; /*0x6a03ca*/
      *v6 = a3; /*0x6a03ce*/
      *(_QWORD *)this->HeadToCoord = v8; /*0x6a03d0*/
      v11 = *((_DWORD *)v5 + 3); /*0x6a03dd*/
      v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12); /*0x6a03e4*/
      if ( !(unsigned __int8)CrateClass::ProcessPickup((CrateClass *)v9, v11) || *(_BYTE *)(*((_DWORD *)v5 + 3) + 129) ) /*0x6a03f7*/
      {
        LOBYTE(v4) = *(_BYTE *)(*((_DWORD *)v5 + 3) + 144); /*0x6a043d*/
        if ( (_BYTE)v4 ) /*0x6a0445*/
        {
          LOBYTE(v4) = g_OverlayTypeConfig; /*0x6a0447*/
          *v6 = g_OverlayTypeConfig; /*0x6a044c*/
          *(_QWORD *)this->HeadToCoord = qword_B077FC; /*0x6a0454*/
          v5[99] = 0; /*0x6a0460*/
        }
      }
      else
      {
        WalkLocomotion::MoveTo((int)this - 4, &v12, 1); /*0x6a040a*/
        LOBYTE(v4) = (_BYTE)this + 48; /*0x6a040f*/
        this->SlopeTimer[3] = a3; /*0x6a041a*/
        *(_QWORD *)this->Dest = a4; /*0x6a041c*/
        this->SpeedAccum = 0; /*0x6a0422*/
        this->MovementSpeed[0] = 1072693248; /*0x6a0429*/
      }
    }
  }
  return v4; /*0x6a0430*/
}



// ==== 0x006A04C0  ObjectClass::method_6A04C0  this=ObjectClass  sig=csp ====
char __thiscall sub_6A04C0(ObjectClass *this, _DWORD *a2)
{
  int v2; // eax
  int *v4; // edi
  int v5; // eax
  int v6; // eax
  CellClass *v7; // eax
  void *ptr_C; // [esp-4h] [ebp-10h]

  v2 = g_OverlayTypeConfig; /*0x6a04c1*/
  v4 = &this->ambientSoundController[1]; /*0x6a04cd*/
  if ( this->ambientSoundController[1] != g_OverlayTypeConfig /*0x6a04df*/
    || *(_QWORD *)&this->ambientSoundController[2] != qword_B077FC )
  {
    *v4 = g_OverlayTypeConfig; /*0x6a04f0*/
    this->ambientSoundController[2] = qword_B077FC; /*0x6a04f8*/
    v5 = HIDWORD(qword_B077FC); /*0x6a04fb*/
    HIBYTE(this->customSound_controller[4]) = 0; /*0x6a0500*/
    this->ambientSoundController[3] = v5; /*0x6a0504*/
    v2 = g_OverlayTypeConfig; /*0x6a0507*/
  }
  if ( *a2 != v2 || *(_QWORD *)(a2 + 1) != qword_B077FC ) /*0x6a0520*/
  {
    *v4 = *a2; /*0x6a0535*/
    this->ambientSoundController[2] = a2[1]; /*0x6a053a*/
    v6 = a2[2]; /*0x6a053d*/
    HIBYTE(this->customSound_controller[4]) = 1; /*0x6a0540*/
    this->ambientSoundController[3] = v6; /*0x6a0544*/
    ptr_C = this->?; /*0x6a054a*/
    v7 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x6a0551*/
    if ( (unsigned __int8)CrateClass::ProcessPickup((CrateClass *)v7, (int)ptr_C) && !*((_BYTE *)this->? + 129) ) /*0x6a0564*/
    {
      WalkLocomotion::MoveTo((int)this, a2, 1); /*0x6a0573*/
      return 1; /*0x6a057d*/
    }
    if ( *((_BYTE *)this->? + 144) ) /*0x6a0583*/
    {
      *v4 = g_OverlayTypeConfig; /*0x6a0593*/
      *(_QWORD *)&this->ambientSoundController[2] = qword_B077FC; /*0x6a059b*/
      HIBYTE(this->customSound_controller[4]) = 0; /*0x6a05a6*/
    }
  }
  return 0; /*0x6a0578*/
}



// ==== 0x006A05C0  ShipLocomotionClass::UpdateFacingDirection_2  this=ShipLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::UpdateFacingDirection_2(ShipLocomotionClass *this, int a2)
{
  return FacingClass::Update((char *)this->?->?, &a2); /*0x6a05df*/
}



// ==== 0x006A05F0  WalkLocomotion::ProcessCollision  this=WalkLocomotion  sig=csp ====
char __userpurge WalkLocomotion::ProcessCollision@<al>(int this@<ecx>, double a2@<st0>, char a3)
{
  int v4; // eax
  int v5; // edx
  bool v6; // al
  int v7; // esi
  int v8; // eax
  _DWORD *v9; // esi
  int v10; // edx
  int v11; // esi
  int v12; // eax
  int *v13; // ecx
  int v14; // esi
  char v15; // bl
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // esi
  int v22; // eax
  _DWORD *v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // edx
  _DWORD *v27; // esi
  int v28; // eax
  int v29; // edx
  _DWORD *v30; // ebx
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  CellClass *v34; // eax
  int *Coords; // eax
  int *v36; // ecx
  int *v37; // ecx
  int GroundHeight; // esi
  int v39; // ebx
  char *v41; // esi
  char v42; // dl
  int v43; // edx
  __int16 v44; // cx
  int v45; // eax
  int v46; // esi
  int v47; // ecx
  _DWORD *v48; // ecx
  int v49; // eax
  int v50; // edx
  int v51; // eax
  int v52... [41340 chars total]



// ==== 0x006A1C80  WalkLocomotion::Update  this=WalkLocomotion  sig=csp ====
char __thiscall WalkLocomotion_Update(int this, _BYTE *a2, int a3, int a4)
{
  int v5; // ecx
  unsigned int v6; // ebx
  int v7; // ecx
  char v8; // al
  char result; // al
  int v10; // ecx
  int v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // eax
  wchar_t *v16; // edi
  int v17; // edx
  wchar_t **v18; // esi
  int v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // ecx
  _DWORD *v22; // ebx
  int v23; // ecx
  char v24; // al
  _DWORD *v25; // ecx
  int v26; // ecx
  _DWORD *v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // ecx
  _DWORD *Value; // edi
  _DWORD *v31; // esi
  int v32; // kr0C_4
  unsigned int v33; // edx
  _DWORD *v34; // eax
  _BYTE *v35; // ecx
  int v36; // edi
  unsigned int v37; // esi
  void *v38; // eax
  int v39; // eax
  int v40; // edx
  _DWORD *v41; // edi
  _DWORD *v42; // ecx
  int v43; // esi
  int GroundHeight; // eax
  int ClosestObject; // eax
  _DWORD *v46; // eax
  _DWORD *v47; // eax
  _DWORD *v48; //... [57624 chars total]



// ==== 0x006A3DA0  nullsub_230  this=-  sig=ida-proto ====
void nullsub_230()
{
  ; /*0x6a3da0*/
}



// ==== 0x006A3DB0  WalkLocomotion::TransformCoords  this=WalkLocomotion  sig=csp ====
_DWORD *__thiscall WalkLocomotion::TransformCoords(WalkLocomotion *this, _DWORD *a2, int *a3, int *a4)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  char *WalkLocomotion_field_0x40; // edx
  char *WalkLocomotion_field_0x44; // ecx

  v4 = *a4; /*0x6a3dbd*/
  v5 = dword_7F2A48[3 * (int)this->WalkLocomotion_field_0x58]; /*0x6a3dc1*/
  v6 = *a3; /*0x6a3dcf*/
  v7 = a3[1]; /*0x6a3dd1*/
  if ( (v5 & 1) != 0 ) /*0x6a3dd4*/
  {
    v6 = a3[1]; /*0x6a3dd8*/
    v7 = *a3; /*0x6a3dda*/
    v4 = (unsigned __int8)(-64 - v4); /*0x6a3de9*/
  }
  if ( (v5 & 2) != 0 ) /*0x6a3dee*/
  {
    v6 = -v6; /*0x6a3df2*/
    v4 = (unsigned __int8)-(char)v4; /*0x6a3df4*/
  }
  if ( (v5 & 4) != 0 ) /*0x6a3dfc*/
  {
    v7 = -v7; /*0x6a3e05*/
    v4 = (unsigned __int8)(0x80 - v4); /*0x6a3e0d*/
  }
  *a4 = v4; /*0x6a3e0f*/
  WalkLocomotion_field_0x40 = (char *)this->WalkLocomotion_field_0x40; /*0x6a3e12*/
  WalkLocomotion_field_0x44 = (char *)this->WalkLocomotion_field_0x44; /*0x6a3e15*/
  *a2 = &WalkLocomotion_field_0x40[v6]; /*0x6a3e22*/
  a2[1] = &WalkLocomotion_field_0x44[v7]; /*0x6a3e25*/
  return a2; /*0x6a3e20*/
}



// ==== 0x006A3E50  ShipLocomotionClass::SmallStub_6A3E50  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_6A3E50(ShipLocomotionClass *this)
{
  return 2; /*0x6a3e55*/
}



// ==== 0x006A3E60  ShipLocomotionClass::ddtor  this=ShipLocomotionClass  sig=csp ====
int __stdcall ShipLocomotionClass::ddtor(ShipLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6a3e66*/
    return -2147467261; /*0x6a3e68*/
  *(IID *)a2 = g_CLSID_DriveLocomotion2; /*0x6a3e76*/
  a2[3] = unk_7E9ABC; /*0x6a3e90*/
  return 0; /*0x6a3e6d*/
}



// ==== 0x006A3EA0  ShipLocomotionClass::StubReturnZero_14  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_14(ShipLocomotionClass *this)
{
  return 0; /*0x6a3ea2*/
}



// ==== 0x006A3EB0  ShipLocomotionClass::DispatchCheckState_6A3EB0  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchCheckState_6A3EB0(ShipLocomotionClass *this)
{
  return JumpjetLocomotionClass::CheckState((LocomotionClass *)this); /*0x6a3eba*/
}



// ==== 0x006A3F00  ShipLocomotionClass::MoveToChecked_0  this=ShipLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::MoveToChecked_0(ShipLocomotionClass *this, int a2)
{
  char result; // al

  result = (_BYTE)this + 60; /*0x6a3f0e*/
  if ( this->Dest[2] != g_OverlayTypeConfig || *(_QWORD *)this->HeadToCoord != qword_B077FC ) /*0x6a3f20*/
    return WalkLocomotion::MoveTo((int)this - 4, &this->Dest[2], a2); /*0x6a3f38*/
  return result; /*0x6a3f3d*/
}



// ==== 0x006A3F50  ShipLocomotionClass::IsAtDestination  this=ShipLocomotionClass  sig=csp ====
bool __stdcall WalkLocomotionClass::IsAtDestination(ShipLocomotionClass *this, int a2, int a3, int a4)
{
  ShipLocomotionClass *v4; // esi
  int *v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int *v15; // eax
  int v16; // ebx
  int v17; // ebp
  int *location; // eax
  int v20[2]; // [esp+Ch] [ebp-20h] BYREF
  _DWORD v21[2]; // [esp+14h] [ebp-18h] BYREF
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch]
  int v24; // [esp+24h] [ebp-8h]
  unsigned int v25; // [esp+28h] [ebp-4h]

  v4 = this; /*0x6a3f55*/
  v5 = (int *)(*(int (__stdcall **)(ShipLocomotionClass *, _DWORD *))(*(_DWORD *)this->LocomotionClass + 24))(this, v21); /*0x6a3f62*/
  v6 = *v5; /*0x6a3f65*/
  v7 = v5[1]; /*0x6a3f67*/
  v8 = v5[2]; /*0x6a3f70*/
  v23 = v6; /*0x6a3f75*/
  v24 = v7; /*0x6a3f79*/
  v25 = v8; /*0x6a3f7d*/
  if ( v6 == g_OverlayTypeConfig && __PAIR64__(v8, v7) == qword_B077FC ) /*0x6a3f89*/
    return 0; /*0x6a3f89*/
  if ( !LOBYTE(v4->TrackIndex) ) /*0x6a3f97*/
  {
    v9 = v4->MovementSpeed[1]; /*0x6a3fa2*/
    if ( v9 != -1 ) /*0x6a3fa8*/
    {
      v10 = byte_7F2A40[12 * v9]; /*0x6a3fb1*/
      if ( v10 ) /*0x6a3fbb*/
      {
        v11 = 4 * v10; /*0x6a3fc1*/
        v12 = dword_7F296C[v11]; /*0x6a3fc4*/
        if ( v12 > -1 ) /*0x6a3fd3*/
        {
          v13 = dword_7F2960[v11] + 12 * v12; /*0x6a3fdc*/
          this = *(ShipLocomotionClass **)(v13 + 8); /*0x6a3fe2*/
          if ( v4->TrackNumber < v12 ) /*0x6a3feb*/
          {
            v14 = *(_DWORD *)(v13 + 4); /*0x6a3ff3*/
            v20[0] = *(_DWORD *)v13; /*0x6a3ff6*/
            v20[1] = v14; /*0x6a3fff*/
            v15 = WalkLocomotion::TransformCoords((WalkLocomotion *)&v4[-1].Piggybackee, v21, v20, (int *)&this); /*0x6a4011*/
            v16 = *v15; /*0x6a4016*/
            v17 = v15[1]; /*0x6a4018*/
            location = v4->?->?; /*0x6a401e*/
            v21[0] = *location; /*0x6a4025*/
            v21[1] = location[1]; /*0x6a402c*/
            v22 = location[2]; /*0x6a4033*/
            if ( (unsigned __int16)(v16 / 256) == (unsigned __int16)(a2 / 256) /*0x6a409b*/
              && (unsigned __int16)(v17 / 256) == (unsigned __int16)(a3 / 256)
              && (int)abs32(v22 - a4) <= dword_B07838 )
            {
              return 1; /*0x6a40a5*/
            }
          }
        }
      }
    }
  }
  return (unsigned __int16)(v23 / 256) == (unsigned __int16)(a2 / 256) /*0x6a411e*/
      && (unsigned __int16)(v24 / 256) == (unsigned __int16)(a3 / 256)
      && (int)abs32(v25 - a4) <= dword_B07838;
}



// ==== 0x006A4130  ShipLocomotionClass::StubReturnZero_15  this=ShipLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::StubReturnZero_15(ShipLocomotionClass *this)
{
  ShipLocomotionClass *v1; // edi
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  __int16 v5; // bx
  int TrackNumber; // edx
  __int16 v7; // dx
  char v8; // al

  v1 = this; /*0x6a4132*/
  v2 = this->?->pathDirections[0]; /*0x6a4139*/
  if ( v2 < -1 || v2 > 8 ) /*0x6a414b*/
    return 0; /*0x6a414b*/
  v3 = 12 * this->MovementSpeed[1] + 8333888; /*0x6a415c*/
  v4 = LOBYTE(this->TrackIndex)
     ? (char)algn_7F2A41[12 * this->MovementSpeed[1]]
     : byte_7F2A40[12 * this->MovementSpeed[1]];
  if ( v2 == 8 ) /*0x6a4173*/
    return 0; /*0x6a4173*/
  if ( v2 == -1 ) /*0x6a417c*/
    return 0; /*0x6a417c*/
  LOBYTE(v5) = 0; /*0x6a4183*/
  HIBYTE(v5) = algn_7F2A41[12 * this->MovementSpeed[1] + 3]; /*0x6a4185*/
  LOWORD(this) = v5; /*0x6a4188*/
  if ( (((((unsigned int)this >> 12) + 1) >> 1) & 7) == v2 ) /*0x6a41a8*/
    return 0; /*0x6a41a8*/
  TrackNumber = v1->TrackNumber; /*0x6a41aa*/
  if ( dword_7F2964[4 * v4] == TrackNumber /*0x6a41f1*/
    && TrackNumber
    && (LOBYTE(v7) = 0,
        HIBYTE(v7) = *(_BYTE *)(v3 + 4),
        LOWORD(this) = v7,
        (v8 = byte_7F2A40[96 * (((((unsigned int)this >> 12) + 1) >> 1) & 7) + 12 * v2]) != 0)
    && dword_7F2968[4 * v8] )
  {
    return 1; /*0x6a41fc*/
  }
  else
  {
    return 0; /*0x6a4203*/
  }
}



// ==== 0x006A4210  ShipLocomotionClass::SetByteField_1  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SetByteField_1(ShipLocomotionClass *this)
{
  this->IsTurretLockedDown = 0; /*0x6a4214*/
  return (int)this->LocomotionClass; /*0x6a4218*/
}



// ==== 0x006A4220  ShipLocomotionClass::SetByteField_2  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SetByteField_2(ShipLocomotionClass *this)
{
  this->IsTurretLockedDown = 1; /*0x6a4224*/
  return (int)this->LocomotionClass; /*0x6a4228*/
}



// ==== 0x006A4230  ShipLocomotionClass::SmallStub_6A4230  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_6A4230(ShipLocomotionClass *this)
{
  return this->MovementSpeed[1]; /*0x6a4237*/
}



// ==== 0x006A4240  ShipLocomotionClass::SmallStub_6A4240  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_6A4240(ShipLocomotionClass *this)
{
  return this->TrackNumber; /*0x6a4247*/
}



// ==== 0x006A4250  ShipLocomotionClass::SmallStub_6A4250  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_6A4250(ShipLocomotionClass *this)
{
  return this->HeadToCoord[2]; /*0x6a4257*/
}



// ==== 0x006A4260  ShipLocomotionClass::AddRef  this=ShipLocomotionClass  sig=csp ====
LONG __stdcall ShipLocomotionClass::AddRef(ShipLocomotionClass *this)
{
  return COM::AddRef((LocomotionClass *)this); /*0x6a426a*/
}



// ==== 0x006A4270  ShipLocomotionClass::Release  this=ShipLocomotionClass  sig=csp ====
LONG __stdcall ShipLocomotionClass::Release(ShipLocomotionClass *this)
{
  return COM::ReleaseRef((LocomotionClass *)this); /*0x6a427a*/
}



// ==== 0x006A4280  JumpjetLocomotionClass::GetLinkedLocomotorPointer_0  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_6A4280(int a1)
{
  return *(_DWORD *)(a1 + 80) != 0; /*0x6a428e*/
}



// ==== 0x006A42A0  ShipLocomotionClass::StubReturn112  this=ShipLocomotionClass  sig=csp ====
int ShipLocomotionClass::StubReturn112(ShipLocomotionClass *this)
{
  return 112; /*0x6a42a5*/
}



// ==== 0x006A42B0  ShipLocomotionClass::ProcessMove  this=ShipLocomotionClass  sig=csp ====
_DWORD *__thiscall ShipLocomotionClass::ProcessMove(ShipLocomotionClass *this, char a2)
{
  ILocomotion *Piggybackee; // eax

  *(_DWORD *)this->LocomotionClass = &ShipLocomotionClass::`vftable'; /*0x6a42b3*/
  *(_DWORD *)&this->LocomotionClass[4] = &ShipLocomotionClass::`vftable'; /*0x6a42b9*/
  *(_DWORD *)this->__pad_18 = &off_7F2D68; /*0x6a42c0*/
  Piggybackee = this->Piggybackee; /*0x6a42c7*/
  if ( Piggybackee ) /*0x6a42cc*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x6a42d1*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x6a42d6*/
  if ( (a2 & 1) != 0 ) /*0x6a42e0*/
    __3_YAXPAX_Z(this); /*0x6a42e3*/
  return this->LocomotionClass; /*0x6a42ed*/
}



// ==== 0x006A4300  JumpjetLocomotionClass::SmallStub_6A4300  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_6A4300(int a1, const void *a2, int *a3)
{
  return ShipLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}



// ==== 0x006A4310  JumpjetLocomotionClass::SmallStub_6A4310  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_6A4310(int a1)
{
  return ShipLocomotionClass::AddRef(a1 - 4);
}



// ==== 0x006A4320  JumpjetLocomotionClass::SmallStub_6A4320  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_6A4320(int a1)
{
  return ShipLocomotionClass::Release((volatile LONG *)(a1 - 4));
}



// ==== 0x006A4360  sub_6A4360  this=-  sig=ida-proto ====
void sub_6A4360()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6a436c*/
  dbl_B07850 = Math::Sqrt(v0 + v0); /*0x6a437e*/
}



// ==== 0x006A4390  sub_6A4390  this=-  sig=ida-proto ====
void sub_6A4390()
{
  dbl_B078A0 = dbl_B07850 / 60.0; /*0x6a439c*/
}



// ==== 0x006A43B0  sub_6A43B0  this=-  sig=ida-proto ====
void sub_6A43B0()
{
  dbl_B07888 = 1.0 / dbl_B078A0; /*0x6a43bc*/
}



// ==== 0x006A43D0  sub_6A43D0  this=-  sig=ida-proto ====
void sub_6A43D0()
{
  dbl_B07880 = 0.0174532925199433 * 45.0; /*0x6a43dc*/
}



// ==== 0x006A43F0  sub_6A43F0  this=-  sig=ida-proto ====
void sub_6A43F0()
{
  dbl_B07858 = 0.0174532925199433 * 60.0; /*0x6a43fc*/
}



// ==== 0x006A4410  sub_6A4410  this=-  sig=ida-proto ====
void sub_6A4410()
{
  dbl_B07840 = 0.0174532925199433 * 90.0; /*0x6a441c*/
}



// ==== 0x006A4430  sub_6A4430  this=-  sig=ida-proto ====
__int64 sub_6A4430()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B07840 - dbl_B07858); /*0x6a4442*/
  result = Math::RoundToInt(v0 * dbl_B07850 * 0.5); /*0x6a4456*/
  dword_B078A8 = result; /*0x6a445b*/
  return result; /*0x6a4460*/
}



// ==== 0x006A4470  sub_6A4470  this=-  sig=ida-proto ====
void sub_6A4470()
{
  dbl_B07860 = Math::ArcTan((double)dword_B078A8 * 0.00390625); /*0x6a4487*/
}



// ==== 0x006A44A0  sub_6A44A0  this=-  sig=ida-proto ====
void sub_6A44A0()
{
  dbl_B07878 = Math::ArcTan((double)(2 * dword_B078A8) / dbl_B07850); /*0x6a44c2*/
}



// ==== 0x006A44D0  sub_6A44D0  this=-  sig=ida-proto ====
__int64 sub_6A44D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B078A8) + 0.5); /*0x6a44eb*/
  dword_B0789C = result; /*0x6a44f0*/
  return result; /*0x6a44f6*/
}



// ==== 0x006A4500  sub_6A4500  this=-  sig=ida-proto ====
int sub_6A4500()
{
  word_B07848 = 0; /*0x6a4502*/
  word_B0784A = 0; /*0x6a4508*/
  return 0; /*0x6a450e*/
}



// ==== 0x006A4510  sub_6A4510  this=-  sig=ida-proto ====
int sub_6A4510()
{
  dword_B07868 = 0; /*0x6a4512*/
  dword_B0786C = 0; /*0x6a4517*/
  dword_B07870 = 0; /*0x6a451c*/
  return 0; /*0x6a4521*/
}



// ==== 0x006A4530  sub_6A4530  this=-  sig=ida-proto ====
int sub_6A4530()
{
  dword_B07898 = 0; /*0x6a4535*/
  dword_B07890 = 128; /*0x6a453f*/
  dword_B07894 = 128; /*0x6a4544*/
  return 128; /*0x6a4549*/
}



// ==== 0x006A4550  SideClass::Construct  this=SideClass  sig=csp ====
_DWORD *__thiscall SideClass::Construct(SideClass *this, char *Source)
{
  int v3; // eax

  AbstractTypeClass::Constructor((int *)this, Source); /*0x6a4559*/
  this->houseTypesCount = 0; /*0x6a4563*/
  this->q028 = 0; /*0x6a4569*/
  *((_BYTE *)this + 164) = 1; /*0x6a456f*/
  *((_BYTE *)this + 165) = 0; /*0x6a4576*/
  this->q02B = 10; /*0x6a457c*/
  *((_DWORD *)this + 42) = 0; /*0x6a4586*/
  this->houseTypes = &TypeList<int>::`vftable'; /*0x6a458c*/
  this->AbstractClass = &SideClass::`vftable'; /*0x6a4597*/
  this->? = &SideClass::`vftable'; /*0x6a459d*/
  this->? = &SideClass::`vftable'; /*0x6a45a3*/
  this->? = &SideClass::`vftable'; /*0x6a45aa*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x6a45b1*/
  if ( FootClass_Array.?[0] < FootClass_Array.?[1] /*0x6a45ea*/
    || (BYTE1(FootClass_Array.?[2]) || !FootClass_Array.?[1])
    && FootClass_Array.?[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.? + 8))(
         &FootClass_Array.?,
         FootClass_Array.?[1] + FootClass_Array.?[1],
         0) )
  {
    v3 = FootClass_Array.?[0]++; /*0x6a45f7*/
    *(_DWORD *)(FootClass_Array.?[0] + 4 * v3) = this; /*0x6a4606*/
  }
  return &this->AbstractClass; /*0x6a460b*/
}



// ==== 0x006A46D0  HouseTypeClass::Find  this=HouseTypeClass  sig=csp ====
int __thiscall HouseTypeClass::Find(HouseTypeClass *this)
{
  int v1; // esi

  v1 = 0; /*0x6a46d6*/
  if ( FootClass_Array.?[0] <= 0 ) /*0x6a46dd*/
    return -1; /*0x6a4702*/
  while ( _strcmpi((char *)(*(_DWORD *)(FootClass_Array.?[0] + 4 * v1) + 36), (char *)this) ) /*0x6a46f6*/
  {
    if ( ++v1 >= FootClass_Array.?[0] ) /*0x6a4700*/
      return -1; /*0x6a4700*/
  }
  return v1; /*0x6a4702*/
}



// ==== 0x006A4710  SideClass::GetCountry  this=SideClass  sig=csp ====
int __thiscall SideClass::GetCountry(SideClass *this, int *a2)
{
  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6a4719*/
  return Power::TimerProcess(*((_DWORD *)this + 42)); /*0x6a472c*/
}



// ==== 0x006A4740  SideClass::ddtor  this=SideClass  sig=csp ====
int __stdcall SideClass::ddtor(SideClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6a4746*/
    return -2147467261; /*0x6a4748*/
  *a2 = -985803918; /*0x6a4756*/
  a2[1] = 298980638; /*0x6a475e*/
  a2[2] = 1610642817; /*0x6a4767*/
  a2[3] = unk_7E991C; /*0x6a4770*/
  return 0; /*0x6a474d*/
}



// ==== 0x006A4780  SideClass::SaveLoad_Prefix  this=SideClass  sig=csp ====
int __stdcall SideClass::SaveLoad_Prefix(SideClass *this, int a2)
{
  SideClass *v2; // esi
  int v3; // edi
  int result; // eax
  void **p_houseTypes; // esi
  int i; // ebp
  void *v7; // eax
  int v8; // ecx
  void *v9; // eax
  _DWORD *v10; // edx

  v2 = this; /*0x6a4782*/
  v3 = a2; /*0x6a4787*/
  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6a478d*/
  if ( result >= 0 ) /*0x6a4796*/
  {
    if ( v2 ) /*0x6a47a4*/
    {
      AbstractTypeClass::Init((int)v2, (int)&a2); /*0x6a47ad*/
      v2->houseTypesCount = 0; /*0x6a47b2*/
      v2[1].AbstractClass = 0; /*0x6a47b8*/
      LOBYTE(v2[1].?) = 1; /*0x6a47be*/
      BYTE1(v2[1].?) = 0; /*0x6a47c5*/
      v2[1].? = (void *)10; /*0x6a47cb*/
      v2[1].? = 0; /*0x6a47d1*/
      v2->houseTypes = &TypeList<int>::`vftable'; /*0x6a47d7*/
      v2->AbstractClass = &SideClass::`vftable'; /*0x6a47e1*/
      v2->? = &SideClass::`vftable'; /*0x6a47e7*/
      v2->? = &SideClass::`vftable'; /*0x6a47ee*/
      v2->? = &SideClass::`vftable'; /*0x6a47f5*/
    }
    p_houseTypes = &v2->houseTypes; /*0x6a47fc*/
    if ( p_houseTypes ) /*0x6a4804*/
    {
      p_houseTypes[1] = 0; /*0x6a4806*/
      p_houseTypes[2] = 0; /*0x6a4809*/
      *((_BYTE *)p_houseTypes + 12) = 1; /*0x6a480c*/
      *((_BYTE *)p_houseTypes + 13) = 0; /*0x6a4810*/
      p_houseTypes[5] = (void *)10; /*0x6a4813*/
      p_houseTypes[4] = 0; /*0x6a4816*/
      *p_houseTypes = &TypeList<int>::`vftable'; /*0x6a4819*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &a2, 4, 0); /*0x6a482a*/
    for ( i = 0; i < a2; ++i ) /*0x6a4833*/
    {
      (*(void (__stdcall **)(int, SideClass **, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &this, 4, 0); /*0x6a4840*/
      v7 = p_houseTypes[2]; /*0x6a4843*/
      if ( (int)p_houseTypes[4] >= (int)v7 ) /*0x6a484b*/
      {
        if ( !*((_BYTE *)p_houseTypes + 13) && v7 ) /*0x6a4854*/
          continue; /*0x6a4854*/
        v8 = (int)p_houseTypes[5]; /*0x6a4856*/
        if ( v8 <= 0 /*0x6a4865*/
          || !(*((unsigned __int8 (__thiscall **)(void **, int, _DWORD))*p_houseTypes + 2))(
                p_houseTypes,
                (int)v7 + v8,
                0) )
        {
          continue; /*0x6a4865*/
        }
      }
      v9 = p_houseTypes[4]; /*0x6a486c*/
      v10 = p_houseTypes[1]; /*0x6a486f*/
      p_houseTypes[4] = (char *)v9 + 1; /*0x6a4875*/
      v10[(_DWORD)v9] = this; /*0x6a487c*/
    }
    return 0; /*0x6a4888*/
  }
  return result; /*0x6a488b*/
}



// ==== 0x006A48A0  SideClass::SaveLoad_Prefix_0  this=SideClass  sig=csp ====
int __stdcall SideClass::SaveLoad_Prefix_0(SideClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int i; // esi

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6a48b1*/
  if ( result >= 0 ) /*0x6a48b8*/
  {
    v4 = *a2; /*0x6a48c0*/
    a3 = *((_DWORD *)this + 42); /*0x6a48cd*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x6a48d1*/
    for ( i = 0; i < a3; ++i ) /*0x6a48dc*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->houseTypesCount + 4 * i, 4, 0); /*0x6a48ef*/
    return 0; /*0x6a48f9*/
  }
  return result; /*0x6a48fc*/
}



// ==== 0x006A4910  SideClass::StubReturn180  this=SideClass  sig=csp ====
int SideClass::StubReturn180(SideClass *this)
{
  return 180; /*0x6a4915*/
}



// ==== 0x006A4920  SideClass::StubReturn28  this=SideClass  sig=csp ====
int SideClass::StubReturn28(SideClass *this)
{
  return 28; /*0x6a4925*/
}



// ==== 0x006A4930  SideClass::Init  this=SideClass  sig=csp ====
void **__thiscall SideClass::Init(SideClass *this, char a2)
{
  int v3; // eax
  void *houseTypesCount; // eax
  SideClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &SideClass::`vftable'; /*0x6a4936*/
  this->? = &SideClass::`vftable'; /*0x6a493c*/
  this->? = &SideClass::`vftable'; /*0x6a4943*/
  this->? = &SideClass::`vftable'; /*0x6a494a*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6a4951*/
  v6 = this; /*0x6a4966*/
  v3 = (*(int (__thiscall **)(int *, SideClass **))(FootClass_Array.? + 16))(&FootClass_Array.?, &v6); /*0x6a496a*/
  if ( v3 != -1 && v3 < FootClass_Array.?[0] ) /*0x6a497a*/
  {
    --FootClass_Array.?[0]; /*0x6a497f*/
    for ( ; /*0x6a4985*/
          v3 < FootClass_Array.?[0];
          *(_DWORD *)(FootClass_Array.?[0] + 4 * v3 - 4) = *(_DWORD *)(FootClass_Array.?[0] + 4 * v3) )
    {
      ++v3; /*0x6a498d*/
    }
  }
  houseTypesCount = (void *)this->houseTypesCount; /*0x6a499f*/
  this->houseTypes = &VectorClass<int>::`vftable'; /*0x6a49a5*/
  if ( houseTypesCount && *((_BYTE *)this + 165) ) /*0x6a49b3*/
  {
    __3_YAXPAX_Z(houseTypesCount); /*0x6a49be*/
    this->houseTypesCount = 0; /*0x6a49c6*/
  }
  *((_BYTE *)this + 165) = 0; /*0x6a49d2*/
  this->q028 = 0; /*0x6a49d9*/
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x6a49e3*/
  if ( (a2 & 1) != 0 ) /*0x6a49ed*/
    __3_YAXPAX_Z(this); /*0x6a49f0*/
  return &this->AbstractClass; /*0x6a49fa*/
}



// ==== 0x006A4A00  sub_6A4A00  this=-  sig=ida-proto ====
int sub_6A4A00()
{
  dword_B07DC8 = 0; /*0x6a4a02*/
  dword_B07DCC = 0; /*0x6a4a07*/
  dword_B07DD0 = 0; /*0x6a4a0c*/
  dword_B07DD4 = 0; /*0x6a4a11*/
  return 0; /*0x6a4a16*/
}



// ==== 0x006A4A20  sub_6A4A20  this=-  sig=ida-proto ====
void sub_6A4A20()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6a4a2c*/
  dbl_B07DE0 = Math::Sqrt(v0 + v0); /*0x6a4a3e*/
}



// ==== 0x006A4A50  sub_6A4A50  this=-  sig=ida-proto ====
void sub_6A4A50()
{
  dbl_B0B398 = dbl_B07DE0 / 60.0; /*0x6a4a5c*/
}



// ==== 0x006A4A70  sub_6A4A70  this=-  sig=ida-proto ====
void sub_6A4A70()
{
  dbl_B0B320 = 1.0 / dbl_B0B398; /*0x6a4a7c*/
}



// ==== 0x006A4A90  sub_6A4A90  this=-  sig=ida-proto ====
void sub_6A4A90()
{
  dbl_B0B318 = 0.0174532925199433 * 45.0; /*0x6a4a9c*/
}



// ==== 0x006A4AB0  sub_6A4AB0  this=-  sig=ida-proto ====
void sub_6A4AB0()
{
  dbl_B07DE8 = 0.0174532925199433 * 60.0; /*0x6a4abc*/
}



// ==== 0x006A4AD0  sub_6A4AD0  this=-  sig=ida-proto ====
void sub_6A4AD0()
{
  dbl_B07BB8 = 0.0174532925199433 * 90.0; /*0x6a4adc*/
}



// ==== 0x006A4AF0  sub_6A4AF0  this=-  sig=ida-proto ====
__int64 sub_6A4AF0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B07BB8 - dbl_B07DE8); /*0x6a4b02*/
  result = Math::RoundToInt(v0 * dbl_B07DE0 * 0.5); /*0x6a4b16*/
  dword_B0B400 = result; /*0x6a4b1b*/
  return result; /*0x6a4b20*/
}



// ==== 0x006A4B30  sub_6A4B30  this=-  sig=ida-proto ====
void sub_6A4B30()
{
  dbl_B07DF0 = Math::ArcTan((double)dword_B0B400 * 0.00390625); /*0x6a4b47*/
}



// ==== 0x006A4B60  sub_6A4B60  this=-  sig=ida-proto ====
void sub_6A4B60()
{
  dbl_B0B310 = Math::ArcTan((double)(2 * dword_B0B400) / dbl_B07DE0); /*0x6a4b82*/
}



// ==== 0x006A4B90  sub_6A4B90  this=-  sig=ida-proto ====
__int64 sub_6A4B90()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B400) + 0.5); /*0x6a4bab*/
  dword_B0B394 = result; /*0x6a4bb0*/
  return result; /*0x6a4bb6*/
}



// ==== 0x006A4BC0  sub_6A4BC0  this=-  sig=ida-proto ====
int sub_6A4BC0()
{
  word_B07DD8 = 0; /*0x6a4bc2*/
  word_B07DDA = 0; /*0x6a4bc8*/
  return 0; /*0x6a4bce*/
}



// ==== 0x006A4BD0  sub_6A4BD0  this=-  sig=ida-proto ====
int sub_6A4BD0()
{
  dword_B0B300 = 0; /*0x6a4bd2*/
  dword_B0B304 = 0; /*0x6a4bd7*/
  dword_B0B308 = 0; /*0x6a4bdc*/
  return 0; /*0x6a4be1*/
}



// ==== 0x006A4BF0  sub_6A4BF0  this=-  sig=ida-proto ====
int sub_6A4BF0()
{
  dword_B0B390 = 0; /*0x6a4bf5*/
  dword_B0B388 = 128; /*0x6a4bff*/
  dword_B0B38C = 128; /*0x6a4c04*/
  return 128; /*0x6a4c09*/
}



// ==== 0x006A4C10  sub_6A4C10  this=-  sig=ida-proto ====
int sub_6A4C10()
{
  GadgetClass::Construct(&stru_B07E58, 0, 0, 1, 1, 8, 0); /*0x6a4c21*/
  stru_B07E58 = (int)&SidebarClass::SBGadgetClass::`vftable'; /*0x6a4c2b*/
  return atexit(sub_6A4C40); /*0x6a4c3b*/
}



// ==== 0x006A4C40  sub_6A4C40  this=-  sig=ida-proto ====
void __cdecl sub_6A4C40()
{
  if ( (byte_B07BB0 & 1) == 0 ) /*0x6a4c4a*/
  {
    byte_B07BB0 |= 1u; /*0x6a4c4e*/
    GadgetClass::Dtor(&stru_B07E58); /*0x6a4c59*/
  }
}



// ==== 0x006A4C60  sub_6A4C60  this=-  sig=ida-proto ====
int sub_6A4C60()
{
  ShapeButtonClass::Init(stru_B07DF8); /*0x6a4c65*/
  return atexit(sub_6A4C80); /*0x6a4c75*/
}



// ==== 0x006A4C80  sub_6A4C80  this=-  sig=ida-proto ====
void __cdecl sub_6A4C80()
{
  if ( (byte_B07BB1 & 1) == 0 ) /*0x6a4c8a*/
  {
    byte_B07BB1 |= 1u; /*0x6a4c8e*/
    ShapeButtonClass::Destructor((int)stru_B07DF8); /*0x6a4c99*/
  }
}



// ==== 0x006A4CA0  sub_6A4CA0  this=-  sig=ida-proto ====
int sub_6A4CA0()
{
  ShapeButtonClass::Init(stru_B0B3A0); /*0x6a4ca5*/
  return atexit(sub_6A4CC0); /*0x6a4cb5*/
}



// ==== 0x006A4CC0  sub_6A4CC0  this=-  sig=ida-proto ====
void __cdecl sub_6A4CC0()
{
  if ( (byte_B07BB1 & 2) == 0 ) /*0x6a4cca*/
  {
    byte_B07BB1 |= 2u; /*0x6a4cce*/
    ShapeButtonClass::Destructor((int)stru_B0B3A0); /*0x6a4cd9*/
  }
}



// ==== 0x006A4CE0  sub_6A4CE0  this=-  sig=ida-proto ====
int sub_6A4CE0()
{
  _BYTE *v0; // esi
  int v1; // edi

  v0 = &stru_B07C48; /*0x6a4ce2*/
  v1 = 4; /*0x6a4ce7*/
  do /*0x6a4cf7*/
  {
    ShapeButtonClass::Init(v0); /*0x6a4cee*/
    v0 += 96; /*0x6a4cf3*/
    --v1; /*0x6a4cf6*/
  }
  while ( v1 ); /*0x6a4cf7*/
  return atexit(sub_6A4D10); /*0x6a4d06*/
}



// ==== 0x006A4D10  sub_6A4D10  this=-  sig=ida-proto ====
void __cdecl sub_6A4D10()
{
  int *v0; // esi
  int v1; // edi

  if ( (byte_B07BB1 & 4) == 0 ) /*0x6a4d1d*/
  {
    byte_B07BB1 |= 4u; /*0x6a4d23*/
    v0 = &dword_B07DC8; /*0x6a4d29*/
    v1 = 4; /*0x6a4d2e*/
    do /*0x6a4d3b*/
    {
      v0 -= 24; /*0x6a4d30*/
      ShapeButtonClass::Destructor((int)v0); /*0x6a4d35*/
      --v1; /*0x6a4d3a*/
    }
    while ( v1 ); /*0x6a4d3b*/
  }
}



// ==== 0x006A4D40  sub_6A4D40  this=-  sig=ida-proto ====
int sub_6A4D40()
{
  ShapeButtonClass::Init(stru_B0B328); /*0x6a4d45*/
  return atexit(sub_6A4D60); /*0x6a4d55*/
}



// ==== 0x006A4D60  sub_6A4D60  this=-  sig=ida-proto ====
void __cdecl sub_6A4D60()
{
  if ( (byte_B07BB1 & 8) == 0 ) /*0x6a4d6a*/
  {
    byte_B07BB1 |= 8u; /*0x6a4d6e*/
    ShapeButtonClass::Destructor((int)stru_B0B328); /*0x6a4d79*/
  }
}



// ==== 0x006A4D80  sub_6A4D80  this=-  sig=ida-proto ====
int sub_6A4D80()
{
  ShapeButtonClass::Init(g_SidebarFlag); /*0x6a4d85*/
  return atexit(sub_6A4DA0); /*0x6a4d95*/
}



// ==== 0x006A4DA0  sub_6A4DA0  this=-  sig=ida-proto ====
void __cdecl sub_6A4DA0()
{
  if ( (byte_B07BB1 & 0x10) == 0 ) /*0x6a4daa*/
  {
    byte_B07BB1 |= 0x10u; /*0x6a4dae*/
    ShapeButtonClass::Destructor((int)g_SidebarFlag); /*0x6a4db9*/
  }
}



// ==== 0x006A4DC0  sub_6A4DC0  this=-  sig=ida-proto ====
int sub_6A4DC0()
{
  _DWORD *v0; // esi
  int v1; // ebx

  v0 = &stru_B07E80; /*0x6a4dc3*/
  v1 = 240; /*0x6a4dc8*/
  do /*0x6a4df0*/
  {
    ControlClass::Construct(v0, 0, 0, 0, 60, 48, 25, 0); /*0x6a4ddb*/
    v0[11] = 0; /*0x6a4de0*/
    v0[12] = 0; /*0x6a4de3*/
    *v0 = &SidebarClass::StripClass::SelectClass::`vftable'; /*0x6a4de6*/
    v0 += 14; /*0x6a4dec*/
    --v1; /*0x6a4def*/
  }
  while ( v1 ); /*0x6a4df0*/
  return atexit(sub_6A4E10); /*0x6a4dff*/
}



// ==== 0x006A4E10  sub_6A4E10  this=-  sig=ida-proto ====
void __cdecl sub_6A4E10()
{
  int *v0; // esi
  int v1; // edi

  if ( (byte_B07BB1 & 0x20) == 0 ) /*0x6a4e1a*/
  {
    byte_B07BB1 |= 0x20u; /*0x6a4e20*/
    v0 = &dword_B0B300; /*0x6a4e26*/
    v1 = 240; /*0x6a4e2b*/
    do /*0x6a4e3b*/
    {
      v0 -= 14; /*0x6a4e30*/
      GadgetClass::Dtor(v0); /*0x6a4e35*/
      --v1; /*0x6a4e3a*/
    }
    while ( v1 ); /*0x6a4e3b*/
  }
}



// ==== 0x006A4E60  SidebarClass::initTabData  this=SidebarClass  sig=csp ====
char *__thiscall sub_6A4E60(char *this)
{
  char *v2; // esi
  int v3; // ebp
  _BYTE *v4; // esi
  int v5; // ebp
  char v7; // [esp+13h] [ebp-1h] BYREF

  RadarClass::Create((int)this); /*0x6a4e67*/
  v2 = this + 5444; /*0x6a4e6c*/
  v3 = 4; /*0x6a4e72*/
  do /*0x6a4eac*/
  {
    *(_DWORD *)v2 = 0; /*0x6a4e79*/
    v2[4] = 0; /*0x6a4e7b*/
    *((_DWORD *)v2 + 2) = dword_A8ED84; /*0x6a4e8f*/
    *((_DWORD *)v2 + 4) = 0; /*0x6a4e92*/
    *((_DWORD *)v2 + 5) = 0; /*0x6a4e96*/
    *((_DWORD *)v2 + 6) = 1; /*0x6a4e99*/
    Array::ForEach((int)(v2 + 88), 52, 75, TabClass::drawTabBackground); /*0x6a4ea0*/
    v2 += 3988; /*0x6a4ea5*/
    --v3; /*0x6a4eab*/
  }
  while ( v3 ); /*0x6a4eac*/
  *((_DWORD *)this + 5351) = 0; /*0x6a4eae*/
  this->q14E8 = 0; /*0x6a4eb4*/
  *(this + 21412) = 0; /*0x6a4eba*/
  *(this + 21413) = 0; /*0x6a4ec0*/
  *(this + 21414) = 1; /*0x6a4ec6*/
  *(this + 21416) = 0; /*0x6a4ecd*/
  *(this + 21780) = 0; /*0x6a4ed3*/
  *(this + 21781) = 0; /*0x6a4ed9*/
  *(_DWORD *)this = &SidebarClass::`vftable'; /*0x6a4edf*/
  v4 = this + 5444; /*0x6a4ee5*/
  v5 = 4; /*0x6a4eeb*/
  do /*0x6a4f07*/
  {
    if ( v4 ) /*0x6a4ef2*/
      TabClass::updateTabProduction(v4, (int)&v7); /*0x6a4efb*/
    v4 += 3988; /*0x6a4f00*/
    --v5; /*0x6a4f06*/
  }
  while ( v5 ); /*0x6a4f07*/
  return this; /*0x6a4f0b*/
}



// ==== 0x006A4F20  RadarClass::UI_Init  this=RadarClass  sig=csp ====
int __thiscall sub_6A4F20(int this, int a2)
{
  _DWORD *v3; // esi
  int v4; // ebp
  int v5; // esi
  int v6; // ebp

  System_Init_6AC840((char *)this, a2); /*0x6a4f2b*/
  DynamicVector::Constructor_Cell((_DWORD *)(this + 4644), 0, 0); /*0x6a4f3a*/
  System_Init_6AC8D0((_DWORD *)(this + 4700), 0, 0); /*0x6a4f47*/
  v3 = (_DWORD *)(this + 4728); /*0x6a4f4c*/
  v4 = 22; /*0x6a4f52*/
  do /*0x6a4f64*/
  {
    System_Init_6AC8D0(v3, 0, 0); /*0x6a4f5b*/
    v3 += 6; /*0x6a4f60*/
    --v4; /*0x6a4f63*/
  }
  while ( v4 ); /*0x6a4f64*/
  Timer::Init((DWORD *)(this + 5376), 0); /*0x6a4f6d*/
  *(_DWORD *)this = &RadarClass::`vftable'; /*0x6a4f78*/
  AudioController::Init((_DWORD *)(this + 5312)); /*0x6a4f7e*/
  *(_DWORD *)(this + 5408) = Timer::GetTicks(); /*0x6a4f8e*/
  *(_DWORD *)(this + 5416) = 0; /*0x6a4f94*/
  *(_DWORD *)this = &PowerClass::`vftable'; /*0x6a4f9a*/
  v5 = this + 5444; /*0x6a4fa0*/
  v6 = 4; /*0x6a4fa6*/
  do /*0x6a4fdf*/
  {
    *(_DWORD *)v5 = 0; /*0x6a4fab*/
    *(_BYTE *)(v5 + 4) = 0; /*0x6a4fad*/
    *(_DWORD *)(v5 + 8) = dword_A8ED84; /*0x6a4fc2*/
    *(_DWORD *)(v5 + 16) = 0; /*0x6a4fc5*/
    *(_DWORD *)(v5 + 20) = 0; /*0x6a4fc9*/
    *(_DWORD *)(v5 + 24) = 1; /*0x6a4fcc*/
    Array::ForEach(v5 + 88, 52, 75, TabClass::drawTabBackground); /*0x6a4fd3*/
    v5 += 3988; /*0x6a4fd8*/
    --v6; /*0x6a4fde*/
  }
  while ( v6 ); /*0x6a4fdf*/
  *(_DWORD *)this = &SidebarClass::`vftable'; /*0x6a4fe1*/
  return this; /*0x6a4fe9*/
}



// ==== 0x006A4FF0  nullsub_36  this=-  sig=csp ====
void __stdcall nullsub_36(int a1)
{
  ; /*0x6a4ff0*/
}



// ==== 0x006A5000  SidebarClass::processDamage  this=SidebarClass  sig=csp ====
int __thiscall ObjectClass::processDamage(SidebarClass *this)
{
  int v1; // esi
  int result; // eax
  int v3; // [esp+0h] [ebp-4h]

  PowerClass::Stub((PowerClass *)this, v3); /*0x6a5001*/
  v1 = 4; /*0x6a5006*/
  do /*0x6a501d*/
  {
    result = (int)SearchMIXFile(aDarkenShp, 0); /*0x6a5012*/
    --v1; /*0x6a5017*/
    dword_B07BC0 = result; /*0x6a5018*/
  }
  while ( v1 ); /*0x6a501d*/
  return result; /*0x6a501f*/
}



// ==== 0x006A5030  SidebarClass::InitSubsystems  this=SidebarClass  sig=csp ====
int __thiscall HouseClass::InitSubsystems(SidebarClass *this)
{
  int *p_SidebarClass_field_0x1544; // edi
  int v3; // ebp
  int (__thiscall **SidebarClass_field_0x0)(SidebarClass *, _DWORD); // eax

  PowerClass::updateDrain((PowerClass *)this); /*0x6a5036*/
  *((_BYTE *)this + 21414) = 1; /*0x6a503d*/
  *((_BYTE *)this + 21781) = 0; /*0x6a5044*/
  *((_BYTE *)this + 21780) = 0; /*0x6a504a*/
  p_SidebarClass_field_0x1544 = &this->SidebarClass_field_0x1544; /*0x6a5050*/
  v3 = 4; /*0x6a5056*/
  do /*0x6a5069*/
  {
    HouseClass::ClearProductionQueue((HouseClass *)p_SidebarClass_field_0x1544); /*0x6a505d*/
    p_SidebarClass_field_0x1544 += 997; /*0x6a5062*/
    --v3; /*0x6a5068*/
  }
  while ( v3 ); /*0x6a5069*/
  SidebarClass_field_0x0 = (int (__thiscall **)(SidebarClass *, _DWORD))this->SidebarClass_field_0x0; /*0x6a506b*/
  *((_DWORD *)this + 5351) = 0; /*0x6a5070*/
  this->q14E8 = 0; /*0x6a5076*/
  return SidebarClass_field_0x0[54](this, 0); /*0x6a5082*/
}



// ==== 0x006A5090  SidebarClass::InitPositions  this=SidebarClass  sig=csp ====
int SidebarClass::InitPositions(SidebarClass *this)
{
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a5095*/
  {
    dword_B0B4E0 = g_DSurface_SidebarBounds + 7; /*0x6a50f4*/
    dword_B0B4EC = g_DSurface_SidebarBounds + 39; /*0x6a50fc*/
    dword_B0B4E4 = 52; /*0x6a5104*/
    dword_B0B4F0 = 32; /*0x6a510e*/
    g_SidebarBounds = g_DSurface_SidebarBounds + 69; /*0x6a5118*/
    dword_B0B4FC = 64; /*0x6a511d*/
    return g_DSurface_SidebarBounds + 69; /*0x6a5101*/
  }
  else
  {
    dword_B0B4E4 = 64; /*0x6a50a5*/
    dword_B0B4F0 = 29; /*0x6a50af*/
    dword_B0B4FC = 63; /*0x6a50b9*/
    dword_B0B4E0 = g_DSurface_SidebarBounds + 8; /*0x6a50c6*/
    dword_B0B4EC = g_DSurface_SidebarBounds + 39; /*0x6a50ce*/
    g_SidebarBounds = g_DSurface_SidebarBounds + 69; /*0x6a50d6*/
    return g_DSurface_SidebarBounds + 69; /*0x6a50d3*/
  }
}



// ==== 0x006A5130  SidebarClass::CalcBounds  this=SidebarClass  sig=csp ====
int __stdcall SidebarClass_CalcBounds(char a1)
{
  int v1; // ebx
  int v2; // eax
  _DWORD *v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // esi
  int v7; // ecx
  int result; // eax
  _BYTE v9[16]; // [esp+8h] [ebp-10h] BYREF

  if ( a1 ) /*0x6a513b*/
  {
    v3 = (_DWORD *)SidebarClass::calcSidebarRect(v9); /*0x6a5199*/
    v4 = v3[1]; /*0x6a51a2*/
    v5 = v3[3]; /*0x6a51a8*/
    v1 = v3[2] + *v3; /*0x6a51ab*/
    dword_886F98 = 168; /*0x6a51bb*/
    DSurface_SidebarBounds = v1; /*0x6a51c0*/
    g_DSurface_SidebarBounds = 158; /*0x6a51c6*/
    v2 = v5 + 32 + v4 - 158; /*0x6a51d0*/
    g_DSurface_ViewBounds = v2; /*0x6a51d7*/
  }
  else if ( byte_A8EB7C ) /*0x6a5144*/
  {
    g_DSurface_SidebarBounds = 158; /*0x6a515b*/
    v1 = dword_886FA8 + DSurface_ViewBounds; /*0x6a5165*/
    dword_886F98 = 168; /*0x6a5173*/
    DSurface_SidebarBounds = dword_886FA8 + DSurface_ViewBounds; /*0x6a5181*/
    v2 = dword_886FAC + 32 + dword_886FA4 - 158; /*0x6a5187*/
    g_DSurface_ViewBounds = v2; /*0x6a518e*/
  }
  else
  {
    v2 = g_DSurface_ViewBounds; /*0x6a51de*/
    v1 = DSurface_SidebarBounds; /*0x6a51e3*/
  }
  v6 = *((_DWORD *)dword_A8B230 + 3374); /*0x6a51ef*/
  dword_B0B500 = 50; /*0x6a51f5*/
  v7 = 26; /*0x6a5205*/
  if ( *((_DWORD *)dword_A8B230 + 3374) ) /*0x6a51ff*/
    v7 = 18; /*0x6a520e*/
  result = 50 * ((v2 - g_SidebarBounds - v7 + g_DSurface_SidebarBounds - 7) / 50); /*0x6a523f*/
  dword_B0B504 = result; /*0x6a5243*/
  if ( v6 ) /*0x6a5248*/
  {
    if ( v6 == 1 ) /*0x6a5263*/
    {
      dword_B0B50C = g_SidebarBounds + result + 7; /*0x6a5269*/
    }
    else
    {
      result += g_SidebarBounds + 7; /*0x6a5271*/
      dword_B0B50C = result; /*0x6a5275*/
    }
    dword_B0B510 = 45; /*0x6a527a*/
  }
  else
  {
    dword_B0B510 = 46; /*0x6a524e*/
    dword_B0B50C = g_SidebarBounds + result + 7; /*0x6a5258*/
  }
  dword_B0B514 = 50; /*0x6a5287*/
  dword_B0B4F4 = v1 + 22; /*0x6a5293*/
  if ( v6 ) /*0x6a529a*/
  {
    if ( v6 != 1 ) /*0x6a52c1*/
      result = v1 + 33; /*0x6a52e6*/
    dword_B0B508 = v1 + 39; /*0x6a52cd*/
    dword_B0B4DC = v1 + 33; /*0x6a52d3*/
    dword_B0B4E8 = v1 + 20; /*0x6a52d9*/
  }
  else
  {
    dword_B0B508 = v1 + 39; /*0x6a52a6*/
    dword_B0B4DC = v1 + 20; /*0x6a52ac*/
    dword_B0B4E8 = v1 + 26; /*0x6a52b2*/
    return v1 + 26; /*0x6a529f*/
  }
  return result; /*0x6a52a5*/
}



// ==== 0x006A5310  SidebarClass::Init  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::Init(SidebarClass *this)
{
  int v2; // eax
  int v3; // ebp
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // ebp
  SidebarClass *v11; // esi
  int v12; // eax
  int v13; // ecx
  int *ptr_C; // edx
  int i; // ebx
  int v16; // esi
  int v17; // eax
  _DWORD *v18; // ecx
  int v19; // edx
  _DWORD *v20; // ecx
  int v21; // edx
  int v22; // eax
  int BuildingAnimByName; // eax
  _DWORD *ProductionData; // eax
  int v25; // ecx
  int v26; // ebx
  int v27; // ecx
  int *v28; // esi
  RadarClass *v30; // [esp+4h] [ebp-Ch]
  SidebarClass *v31; // [esp+4h] [ebp-Ch]
  int v32; // [esp+Ch] [ebp-4h]

  SidebarClass::CreateScrollButtons(v30); /*0x6a5315*/
  SidebarClass::InitPositions(v31); /*0x6a531c*/
  SidebarClass::CalcBounds(0); /*0x6a5326*/
  LOBYTE(v2) = stru_A8EB00.?[391]; /*0x6a532b*/
  if ( !stru_A8EB00.?[391] ) /*0x6a5332*/
  {
    dword_B0B3B0 = dword_B0B4E0; /*0x6a534b*/
    byte_B0B3BD = 1; /*0x6a5360*/
    dword_B0B3C4 = 101; /*0x6a5367*/
    dword_B0B3AC = dword_B0B4DC; /*0x6a5371*/
    dword_B0B3E4 = -480; /*0x6a5376*/
    dword_B0B3E8 = 0; /*0x6a537c*/
    byte_B0B3EC = 1; /*0x6a5382*/
    dword_B0B3F0 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a5389*/
    byte_B0B3CD = 0; /*0x6a538f*/
    dword_B0B3D0 = 1; /*0x6a5395*/
    byte_B0B3E0 = 1; /*0x6a539b*/
    SHA1::Reset((int)&stru_B0B3A0); /*0x6a53a2*/
    dword_B07E04 = dword_B0B3AC + dword_B0B4E4; /*0x6a53bf*/
    byte_B07E15 = 1; /*0x6a53ca*/
    dword_B07E1C = 102; /*0x6a53d1*/
    dword_B07E08 = dword_B0B3B0; /*0x6a53db*/
    dword_B07E3C = -480; /*0x6a53e1*/
    dword_B07E40 = 0; /*0x6a53e7*/
    byte_B07E44 = 1; /*0x6a53ed*/
    dword_B07E48 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a53f4*/
    byte_B07E25 = 0; /*0x6a53f9*/
    dword_B07E28 = 1; /*0x6a53ff*/
    byte_B07E38 = 1; /*0x6a5405*/
    SHA1::Reset((int)&stru_B07DF8); /*0x6a540c*/
    v3 = 0; /*0x6a5411*/
    v4 = &unk_B07C6C; /*0x6a5413*/
    do /*0x6a5484*/
    {
      v5 = dword_B0B4E8; /*0x6a5422*/
      v6 = v3 * dword_B0B4F0; /*0x6a5427*/
      *((_BYTE *)v4 - 7) = 1; /*0x6a5430*/
      v7 = v5 + v6; /*0x6a5434*/
      v8 = dword_B0B4EC; /*0x6a5436*/
      *v4 = v3 + 203; /*0x6a543b*/
      v9 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a543d*/
      *(v4 - 6) = v7; /*0x6a5443*/
      *(v4 - 5) = v8; /*0x6a5446*/
      v4[8] = -480; /*0x6a5449*/
      v4[9] = 0; /*0x6a5450*/
      *((_BYTE *)v4 + 40) = 1; /*0x6a5453*/
      v4[11] = v9; /*0x6a5457*/
      *((_BYTE *)v4 + 9) = 0; /*0x6a545d*/
      v4[3] = 2; /*0x6a5461*/
      *((_BYTE *)v4 + 28) = 1; /*0x6a546a*/
      DialogControl::Show((GadgetClass *)(v4 - 9)); /*0x6a546e*/
      SHA1::Reset((int)(v4 - 9)); /*0x6a5475*/
      v4 += 24; /*0x6a547a*/
      ++v3; /*0x6a547d*/
    }
    while ( (int)v4 < (int)((_DWORD *)&dbl_B07DE8 + 1) ); /*0x6a5484*/
    byte_B0B345 = 1; /*0x6a5496*/
    dword_B0B34C = 201; /*0x6a549d*/
    byte_B0B374 = 1; /*0x6a54a7*/
    dword_B0B378 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a54ae*/
    dword_B0B348 = 85; /*0x6a54b4*/
    SHA1::Reset((int)&stru_B0B328); /*0x6a54ba*/
    byte_B0B425 = 1; /*0x6a54c9*/
    dword_B0B42C = 200; /*0x6a54d0*/
    byte_B0B454 = 1; /*0x6a54da*/
    dword_B0B458 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a54e1*/
    dword_B0B428 = 85; /*0x6a54e6*/
    SHA1::Reset((int)&g_SidebarFlag); /*0x6a54ec*/
    v10 = 0; /*0x6a54f1*/
    v11 = (SidebarClass *)((char *)this + 5480); /*0x6a54f5*/
    do /*0x6a553b*/
    {
      v11[-1].SidebarClass_field_0x1544 = dword_B0B4F4; /*0x6a5502*/
      v11->SidebarClass_field_0x0 = (void *)g_SidebarBounds; /*0x6a550e*/
      v12 = dword_B0B504; /*0x6a5510*/
      v11->SidebarClass_field_0x4 = 0; /*0x6a5519*/
      v11->SidebarClass_field_0x8 = 0; /*0x6a551b*/
      *(_DWORD *)v11->__pad_C = 60; /*0x6a5523*/
      *(_DWORD *)&v11->__pad_C[4] = v12; /*0x6a5529*/
      SidebarClass::InitCameoGrid((SidebarClass *)((char *)v11 - 36), v10++); /*0x6a552c*/
      v11 = (SidebarClass *)((char *)v11 + 3988); /*0x6a5532*/
    }
    while ( v10 < 4 ); /*0x6a553b*/
    (*((void (__thiscall **)(SidebarClass *))this->SidebarClass_field_0x0 + 34))(this); /*0x6a5541*/
    SidebarClass::CalcBounds(1); /*0x6a554b*/
    if ( *((_BYTE *)this + 21413) ) /*0x6a5550*/
    {
      (*((void (__thiscall **)(SidebarClass *, _DWORD))this->SidebarClass_field_0x0 + 54))(this, 0); /*0x6a5560*/
      (*((void (__thiscall **)(SidebarClass *, int))this->SidebarClass_field_0x0 + 54))(this, 1); /*0x6a556c*/
    }
    this->q1544 = 0; /*0x6a5574*/
    LOBYTE(v2) = dword_A8B238; /*0x6a557a*/
    if ( *(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4 ) /*0x6a5587*/
    {
      v13 = 0; /*0x6a5595*/
      if ( stru_A80220.? <= 0 ) /*0x6a5599*/
      {
LABEL_17:
        v2 = 0; /*0x6a55d9*/
      }
      else
      {
        ptr_C = (int *)stru_A80220.?; /*0x6a559b*/
        while ( 1 ) /*0x6a55a5*/
        {
          v2 = *ptr_C; /*0x6a55a5*/
          if ( *ptr_C ) /*0x6a55a5*/
          {
            if ( *(_BYTE *)(*(_DWORD *)(v2 + 52) + 422) != 1 && v2 != HouseClass_Observer && *(_BYTE *)(v2 + 492) ) /*0x6a55bf*/
              break; /*0x6a55bf*/
          }
          ++v13; /*0x6a55cf*/
          ++ptr_C; /*0x6a55d0*/
          if ( v13 >= stru_A80220.? ) /*0x6a55d5*/
            goto LABEL_17; /*0x6a55d5*/
        }
      }
      this->q14EB = v2; /*0x6a55db*/
      for ( i = 0; i < 8; i = this->q1544 ) /*0x6a55e1*/
      {
        v16 = *((_DWORD *)this + i + 5355); /*0x6a55e7*/
        if ( !v16 ) /*0x6a55f0*/
          break; /*0x6a55f0*/
        v17 = 0; /*0x6a55fc*/
        v18 = (_DWORD *)(v16 + 21476); /*0x6a55fe*/
        v19 = 20; /*0x6a5604*/
        do /*0x6a560f*/
        {
          v17 += *v18++; /*0x6a5609*/
          --v19; /*0x6a560e*/
        }
        while ( v19 ); /*0x6a560f*/
        v20 = (_DWORD *)(v16 + 21560); /*0x6a5611*/
        v21 = 20; /*0x6a5617*/
        do /*0x6a5622*/
        {
          v17 += *v20++; /*0x6a561c*/
          --v21; /*0x6a5621*/
        }
        while ( v21 ); /*0x6a5622*/
        *((_DWORD *)this + i + 5363) = v17; /*0x6a5626*/
        *((_DWORD *)this + this->q1544 + 5371) = *(_DWORD *)(v16 + 744) /*0x6a5659*/
                                                            + *(_DWORD *)(v16 + 752)
                                                            + *(_DWORD *)(v16 + 756)
                                                            + *(_DWORD *)(v16 + 760);
        v22 = (*(int (__stdcall **)(int))(*(_DWORD *)(v16 + 36) + 24))(v16 + 36); /*0x6a5669*/
        if ( v22 < 0 ) /*0x6a566e*/
          v22 = 0; /*0x6a5670*/
        *((_DWORD *)this + this->q1544 + 5379) = v22; /*0x6a567a*/
        if ( v16 == HouseClass_Observer ) /*0x6a569a*/
        {
          BuildingAnimByName = FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x6a56a6*/
        }
        else if ( *(_BYTE *)(v16 + 501) ) /*0x6a56ad*/
        {
          BuildingAnimByName = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x6a56c1*/
        }
        else
        {
          BuildingAnimByName = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v16 + 90196)); /*0x6a56d3*/
        }
        *((_DWORD *)this + this->q1544 + 5387) = BuildingAnimByName; /*0x6a56dc*/
        *((_DWORD *)this + this->q1544 + 5395) = 0; /*0x6a56e9*/
        *((_DWORD *)this + this->q1544 + 5403) = 0; /*0x6a56f6*/
        *((_DWORD *)this + this->q1544 + 5411) = 0; /*0x6a5703*/
        *((_DWORD *)this + this->q1544 + 5419) = 0; /*0x6a5710*/
        *((_DWORD *)this + this->q1544 + 5427) = 0; /*0x6a571d*/
        *((_DWORD *)this + this->q1544 + 5435) = 0; /*0x6a572a*/
        if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x6a5739*/
        {
          ProductionData = SidebarClass::FindProductionData((SidebarClass *)(v16 + 90154)); /*0x6a5741*/
          if ( ProductionData ) /*0x6a5748*/
          {
            *((_DWORD *)this + this->q1544 + 5395) = ProductionData[7]; /*0x6a5754*/
            *((_DWORD *)this + this->q1544 + 5403) = ProductionData[4]; /*0x6a5764*/
            *((_DWORD *)this + this->q1544 + 5411) = ProductionData[2]; /*0x6a5774*/
            *((_DWORD *)this + this->q1544 + 5419) = ProductionData[3]; /*0x6a5784*/
            *((_DWORD *)this + this->q1544 + 5427) = ProductionData[8]; /*0x6a5794*/
            *((_DWORD *)this + this->q1544 + 5435) = ProductionData[12]; /*0x6a57a4*/
            __3_YAXPAX_Z(ProductionData); /*0x6a57ab*/
          }
        }
        v32 = 0; /*0x6a57b9*/
        v25 = this->q1544 + 1; /*0x6a57bd*/
        this->q1544 = v25; /*0x6a57be*/
        v26 = v25; /*0x6a57ca*/
        v27 = 0; /*0x6a57cc*/
        if ( stru_A80220.? > 0 ) /*0x6a57d0*/
        {
          v28 = (int *)stru_A80220.?; /*0x6a57d2*/
          do /*0x6a5814*/
          {
            v2 = *v28; /*0x6a57dc*/
            if ( *v28 /*0x6a57f6*/
              && *(_BYTE *)(*(_DWORD *)(v2 + 52) + 422) != 1
              && v2 != HouseClass_Observer
              && *(_BYTE *)(v2 + 492) )
            {
              if ( v32 == v26 ) /*0x6a5805*/
                goto LABEL_44; /*0x6a5805*/
              ++v32; /*0x6a580a*/
            }
            ++v27; /*0x6a580e*/
            ++v28; /*0x6a580f*/
          }
          while ( v27 < stru_A80220.? ); /*0x6a5814*/
        }
        v2 = 0; /*0x6a5818*/
LABEL_44:
        *((_DWORD *)this + v26 + 5355) = v2; /*0x6a581a*/
      }
    }
    *((_BYTE *)this + 21772) = 0; /*0x6a5831*/
  }
  return v2; /*0x6a5839*/
}



// ==== 0x006A5840  SidebarClass::LoadAssets  this=SidebarClass  sig=csp ====
void *SidebarClass::LoadAssets(SidebarClass *this)
{
  PowerClass *v1; // ecx
  ConvertClass *v2; // eax
  void *FileSHP; // eax
  void *v4; // eax
  int v5; // edi
  ShapeButtonClass *v6; // esi
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  ConvertClass *v10; // eax
  void *result; // eax
  char v12; // [esp+Ch] [ebp-704h] BYREF
  char Buffer[256]; // [esp+10h] [ebp-700h] BYREF
  int v14[192]; // [esp+110h] [ebp-600h] BYREF
  int v15[192]; // [esp+410h] [ebp-300h] BYREF

  PowerClass::checkBlackout(v1); /*0x6a5849*/
  qmemcpy(v14, UI_Load_72F4A0(), sizeof(v14)); /*0x6a5863*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_58[132] ) /*0x6a586d*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&stru_87F5F0.__pad_58[132])(*(_DWORD *)&stru_87F5F0.__pad_58[132], 1); /*0x6a5873*/
    *(_DWORD *)&stru_87F5F0.__pad_58[132] = 0; /*0x6a5875*/
  }
  v2 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x6a5880*/
  if ( v2 ) /*0x6a588a*/
    *(_DWORD *)&stru_87F5F0.__pad_58[132] = ConvertClass::Construct( /*0x6a58ad*/
                                              v2,
                                              (int)v14,
                                              (int)v14,
                                              (int)g_DSurface_Primary,
                                              1,
                                              0);
  else
    *(_DWORD *)&stru_87F5F0.__pad_58[132] = 0; /*0x6a58b4*/
  dword_B0B484 = LoadFileSHP(aGclock2Shp, (bool *)&byte_B0B48F); /*0x6a58d4*/
  v12 = 0; /*0x6a58d9*/
  FileSHP = LoadFileSHP(aSellShp, (bool *)&v12); /*0x6a58dd*/
  ShapeButton::SetShape(&stru_B07DF8, (int)FileSHP, 0, 0); /*0x6a58e8*/
  ButtonClass::SetState((ButtonClass *)&stru_B07DF8, v12); /*0x6a58f7*/
  dword_B07E48 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a590c*/
  v4 = LoadFileSHP(aRepairShp, (bool *)&v12); /*0x6a5911*/
  ShapeButton::SetShape(&stru_B0B3A0, (int)v4, 0, 0); /*0x6a591c*/
  ButtonClass::SetState((ButtonClass *)&stru_B0B3A0, v12); /*0x6a592b*/
  v5 = 0; /*0x6a5936*/
  dword_B0B3F0 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a5938*/
  v6 = &stru_B07C48; /*0x6a593e*/
  do /*0x6a598c*/
  {
    sprintf(Buffer, "TAB%02d.SHP", v5); /*0x6a594e*/
    v7 = LoadFileSHP(Buffer, (bool *)&v12); /*0x6a5960*/
    ShapeButton::SetShape(v6, (int)v7, 0, 0); /*0x6a5968*/
    ButtonClass::SetState((ButtonClass *)v6, v12); /*0x6a5974*/
    ++v5; /*0x6a597f*/
    v6[6].ShapeButtonClass_field_0x08 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a5980*/
    v6 += 8; /*0x6a5983*/
  }
  while ( (int)v6 < (int)&dword_B07DC8 ); /*0x6a598c*/
  v8 = LoadFileSHP(aRDnShp, (bool *)&v12); /*0x6a5999*/
  ShapeButton::SetShape(&stru_B0B328, (int)v8, 0, 0); /*0x6a59a4*/
  ButtonClass::SetState((ButtonClass *)&stru_B0B328, v12); /*0x6a59b3*/
  dword_B0B378 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a59bf*/
  v9 = LoadFileSHP(aRUpShp, (bool *)&v12); /*0x6a59cf*/
  ShapeButton::SetShape(&g_SidebarFlag, (int)v9, 0, 0); /*0x6a59da*/
  ButtonClass::SetState((ButtonClass *)&g_SidebarFlag, v12); /*0x6a59e9*/
  dword_B0B458 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a59fd*/
  dword_B0B468 = LoadFileSHP(aSide1Shp, (bool *)&byte_B0B488); /*0x6a5a11*/
  dword_B0B46C = LoadFileSHP(aSide2Shp, (bool *)&byte_B0B489); /*0x6a5a25*/
  dword_B0B470 = LoadFileSHP(aSide3Shp, (bool *)&byte_B0B48A); /*0x6a5a39*/
  dword_B0B474 = LoadFileSHP(aAddonShp, (bool *)&byte_B0B48B); /*0x6a5a43*/
  qmemcpy(v15, UI_Load_72F4E0(), sizeof(v15)); /*0x6a5a5b*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_58[136] ) /*0x6a5a65*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&stru_87F5F0.__pad_58[136])(*(_DWORD *)&stru_87F5F0.__pad_58[136], 1); /*0x6a5a6b*/
    *(_DWORD *)&stru_87F5F0.__pad_58[136] = 0; /*0x6a5a6d*/
  }
  v10 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x6a5a78*/
  if ( v10 ) /*0x6a5a82*/
    *(_DWORD *)&stru_87F5F0.__pad_58[136] = ConvertClass::Construct( /*0x6a5aa5*/
                                              v10,
                                              (int)v15,
                                              (int)v15,
                                              (int)g_DSurface_Primary,
                                              1,
                                              0);
  else
    *(_DWORD *)&stru_87F5F0.__pad_58[136] = 0; /*0x6a5aac*/
  dword_B0B490 = LoadFileSHP(aObsalliShp, (bool *)&byte_B0B4CC); /*0x6a5acb*/
  dword_B0B494 = LoadFileSHP(aObssoviShp, (bool *)&byte_B0B4CD); /*0x6a5adf*/
  dword_B0B498 = LoadFileSHP(aObsyuriShp, (bool *)&byte_B0B4CE); /*0x6a5af3*/
  dword_B0B49C = LoadFileSHP(aRaniShp, (bool *)&byte_B0B4CF); /*0x6a5b07*/
  dword_B0B4A0 = LoadFileSHP(aObsiShp, (bool *)&byte_B0B4D0); /*0x6a5b1b*/
  dword_B0B4A4 = LoadFileSHP(aUsaiShp, (bool *)&byte_B0B4D1); /*0x6a5b2f*/
  dword_B0B4A8 = LoadFileSHP(aJapiShp, (bool *)&byte_B0B4D2); /*0x6a5b43*/
  dword_B0B4AC = LoadFileSHP(aFraiShp, (bool *)&byte_B0B4D3); /*0x6a5b57*/
  dword_B0B4B0 = LoadFileSHP(aGeriShp, (bool *)&byte_B0B4D4); /*0x6a5b6b*/
  dword_B0B4B4 = LoadFileSHP(aGbriShp, (bool *)&byte_B0B4D5); /*0x6a5b7f*/
  dword_B0B4B8 = LoadFileSHP(aDjbiShp, (bool *)&byte_B0B4D6); /*0x6a5b93*/
  dword_B0B4BC = LoadFileSHP(aArbiShp, (bool *)&byte_B0B4D7); /*0x6a5ba7*/
  dword_B0B4C0 = LoadFileSHP(aLatiShp, (bool *)&byte_B0B4D8); /*0x6a5bbb*/
  dword_B0B4C4 = LoadFileSHP(aRusiShp, (bool *)&byte_B0B4D9); /*0x6a5bcf*/
  result = LoadFileSHP(aYriiShp, (bool *)&byte_B0B4DA); /*0x6a5bd4*/
  dword_B0B4C8 = result; /*0x6a5bdb*/
  return result; /*0x6a5bd9*/
}



// ==== 0x006A5BF0  SidebarClass::CleanupSidebarResources  this=SidebarClass  sig=csp ====
void ObjectClass::CleanupSidebarResources(SidebarClass *this)
{
  ScenarioClass *v1; // esi
  PowerClass *v2; // [esp+0h] [ebp-8h]

  PowerClass::checkLowPower(v2); /*0x6a5bf2*/
  if ( byte_B0B488 ) /*0x6a5c00*/
  {
    __3_YAXPAX_Z(dword_B0B468); /*0x6a5c08*/
    byte_B0B488 = 0; /*0x6a5c10*/
  }
  if ( byte_B0B489 ) /*0x6a5c1c*/
  {
    __3_YAXPAX_Z(dword_B0B46C); /*0x6a5c25*/
    byte_B0B489 = 0; /*0x6a5c2d*/
  }
  if ( byte_B0B48A ) /*0x6a5c39*/
  {
    __3_YAXPAX_Z(dword_B0B470); /*0x6a5c42*/
    byte_B0B48A = 0; /*0x6a5c4a*/
  }
  if ( byte_B0B48B ) /*0x6a5c56*/
  {
    __3_YAXPAX_Z(dword_B0B474); /*0x6a5c5e*/
    byte_B0B48B = 0; /*0x6a5c66*/
  }
  if ( byte_B0B48C ) /*0x6a5c72*/
  {
    __3_YAXPAX_Z(dword_B0B478); /*0x6a5c7b*/
    byte_B0B48C = 0; /*0x6a5c83*/
  }
  if ( byte_B0B48D ) /*0x6a5c8f*/
  {
    __3_YAXPAX_Z(dword_B0B47C); /*0x6a5c98*/
    byte_B0B48D = 0; /*0x6a5ca0*/
  }
  if ( byte_B0B48E ) /*0x6a5cac*/
  {
    __3_YAXPAX_Z(dword_B0B480); /*0x6a5cb4*/
    byte_B0B48E = 0; /*0x6a5cbc*/
  }
  if ( byte_B0B48F ) /*0x6a5cc8*/
  {
    __3_YAXPAX_Z(dword_B0B484); /*0x6a5cd1*/
    byte_B0B48F = 0; /*0x6a5cd9*/
  }
  if ( byte_B0B4CC ) /*0x6a5ce5*/
  {
    __3_YAXPAX_Z(dword_B0B490); /*0x6a5cee*/
    byte_B0B4CC = 0; /*0x6a5cf6*/
  }
  if ( byte_B0B4CD ) /*0x6a5d02*/
  {
    __3_YAXPAX_Z(dword_B0B494); /*0x6a5d0a*/
    byte_B0B4CD = 0; /*0x6a5d12*/
  }
  if ( byte_B0B4CE ) /*0x6a5d1e*/
  {
    __3_YAXPAX_Z(dword_B0B498); /*0x6a5d27*/
    byte_B0B4CE = 0; /*0x6a5d2f*/
  }
  if ( byte_B0B4CF ) /*0x6a5d3b*/
  {
    __3_YAXPAX_Z(dword_B0B49C); /*0x6a5d44*/
    byte_B0B4CF = 0; /*0x6a5d4c*/
  }
  if ( byte_B0B4D1 ) /*0x6a5d58*/
  {
    __3_YAXPAX_Z(dword_B0B4A4); /*0x6a5d60*/
    byte_B0B4D1 = 0; /*0x6a5d68*/
  }
  if ( byte_B0B4D2 ) /*0x6a5d74*/
  {
    __3_YAXPAX_Z(dword_B0B4A8); /*0x6a5d7d*/
    byte_B0B4D2 = 0; /*0x6a5d85*/
  }
  if ( byte_B0B4D3 ) /*0x6a5d91*/
  {
    __3_YAXPAX_Z(dword_B0B4AC); /*0x6a5d9a*/
    byte_B0B4D3 = 0; /*0x6a5da2*/
  }
  if ( byte_B0B4D4 ) /*0x6a5dae*/
  {
    __3_YAXPAX_Z(dword_B0B4B0); /*0x6a5db6*/
    byte_B0B4D4 = 0; /*0x6a5dbe*/
  }
  if ( byte_B0B4D5 ) /*0x6a5dca*/
  {
    __3_YAXPAX_Z(dword_B0B4B4); /*0x6a5dd3*/
    byte_B0B4D5 = 0; /*0x6a5ddb*/
  }
  if ( byte_B0B4D6 ) /*0x6a5de7*/
  {
    __3_YAXPAX_Z(dword_B0B4B8); /*0x6a5df0*/
    byte_B0B4D6 = 0; /*0x6a5df8*/
  }
  if ( byte_B0B4D7 ) /*0x6a5e04*/
  {
    __3_YAXPAX_Z(dword_B0B4BC); /*0x6a5e0c*/
    byte_B0B4D7 = 0; /*0x6a5e14*/
  }
  if ( byte_B0B4D8 ) /*0x6a5e20*/
  {
    __3_YAXPAX_Z(dword_B0B4C0); /*0x6a5e29*/
    byte_B0B4D8 = 0; /*0x6a5e31*/
  }
  if ( byte_B0B4D9 ) /*0x6a5e3d*/
  {
    __3_YAXPAX_Z(dword_B0B4C4); /*0x6a5e46*/
    byte_B0B4D9 = 0; /*0x6a5e4e*/
  }
  if ( byte_B0B4D0 ) /*0x6a5e5a*/
  {
    __3_YAXPAX_Z(dword_B0B4A0); /*0x6a5e62*/
    byte_B0B4D0 = 0; /*0x6a5e6a*/
  }
  if ( byte_B0B4DA ) /*0x6a5e76*/
  {
    __3_YAXPAX_Z(dword_B0B4C8); /*0x6a5e7f*/
    byte_B0B4DA = 0; /*0x6a5e87*/
  }
  ScenarioClass::FreeConfig((ScenarioClass *)&stru_B07DF8); /*0x6a5e92*/
  ScenarioClass::FreeConfig((ScenarioClass *)&stru_B0B3A0); /*0x6a5e9c*/
  v1 = (ScenarioClass *)&stru_B07C48; /*0x6a5ea1*/
  do /*0x6a5eb6*/
  {
    ScenarioClass::FreeConfig(v1); /*0x6a5ea8*/
    v1 = (ScenarioClass *)((char *)v1 + 96); /*0x6a5ead*/
  }
  while ( (int)v1 < (int)&dword_B07DC8 ); /*0x6a5eb6*/
  ScenarioClass::FreeConfig((ScenarioClass *)&stru_B0B328); /*0x6a5ebd*/
  ScenarioClass::FreeConfig((ScenarioClass *)&g_SidebarFlag); /*0x6a5ec7*/
}



// ==== 0x006A5F20  SidebarClass::UpdateCameoProductionState  this=SidebarClass  sig=csp ====
char __thiscall sub_6A5F20(int this, _DWORD *a2)
{
  int v3; // eax
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v10; // [esp+14h] [ebp+4h]

  LOBYTE(v3) = *(_BYTE *)(this + 21413); /*0x6a5f26*/
  if ( (_BYTE)v3 ) /*0x6a5f2e*/
  {
    if ( a2 ) /*0x6a5f3a*/
    {
      v10 = (*(int (__thiscall **)(_DWORD *))(*a2 + 132))(a2); /*0x6a5f4b*/
      LOBYTE(v3) = (_BYTE)dword_A83D4C; /*0x6a5f4f*/
      if ( dword_A83D4C ) /*0x6a5f56*/
      {
        v5 = (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2); /*0x6a5f64*/
        v6 = (*(int (__thiscall **)(_DWORD *))(*a2 + 64))(a2); /*0x6a5f6b*/
        switch ( v5 ) /*0x6a5f7b*/
        {
          case 15: /*0x6a5f7b*/
          case 16: /*0x6a5f7b*/
            v3 = 2; /*0x6a5fce*/
            break;
          case 1: /*0x6a5f7b*/
          case 40: /*0x6a5f7b*/
          case 2: /*0x6a5f7b*/
          case 3: /*0x6a5f7b*/
            v3 = 3; /*0x6a5fc7*/
            break;
          case 6: /*0x6a5f7b*/
          case 7: /*0x6a5f7b*/
            v3 = GetHouseTechLevel(v5, v6) == 5; /*0x6a5fc3*/
            break;
          case 57: /*0x6a5f7b*/
          case 32: /*0x6a5f7b*/
          case 31: /*0x6a5f7b*/
            v3 = 1; /*0x6a5fae*/
            break;
          default:
            v3 = -1; /*0x6a5fa9*/
            break;
        }
        v7 = *(_DWORD *)(this + 21404); /*0x6a5fd3*/
        if ( v3 == v7 ) /*0x6a5fdb*/
        {
          LOBYTE(v3) = HouseClass::ShouldDisableCameo(dword_A83D4C, v10); /*0x6a5fe8*/
          if ( (_BYTE)v3 ) /*0x6a5fef*/
          {
            v8 = *(_DWORD *)(this + 21404); /*0x6a5ff5*/
            *(_BYTE *)(this + 21414) = 1; /*0x6a5ffb*/
            *(_BYTE *)(this + 3988 * v8 + 5504) = 1; /*0x6a6015*/
            MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x6a601c*/
            LOBYTE(v3) = (_BYTE)dword_A8ED84; /*0x6a6021*/
            if ( *(_DWORD *)(this + 21408) <= (int)dword_A8ED84 ) /*0x6a602e*/
            {
              LOBYTE(v3) = (_BYTE)dword_A8ED84 + 2; /*0x6a6030*/
              *(_DWORD *)(this + 21408) = dword_A8ED84 + 1; /*0x6a6033*/
            }
          }
        }
        else if ( v5 == 6 ) /*0x6a6043*/
        {
          LOBYTE(v3) = *(_BYTE *)(a2[328] + 5835); /*0x6a604b*/
          if ( (_BYTE)v3 ) /*0x6a6053*/
          {
            if ( v7 == 3 ) /*0x6a6058*/
            {
              *(_BYTE *)(this + 21414) = 1; /*0x6a605a*/
              *(_BYTE *)(this + 17468) = 1; /*0x6a6067*/
              MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x6a606d*/
              LOBYTE(v3) = (_BYTE)dword_A8ED84; /*0x6a6072*/
              if ( *(_DWORD *)(this + 21408) <= (int)dword_A8ED84 ) /*0x6a607f*/
              {
                LOBYTE(v3) = (_BYTE)dword_A8ED84 + 2; /*0x6a6081*/
                *(_DWORD *)(this + 21408) = dword_A8ED84 + 1; /*0x6a6084*/
              }
            }
          }
        }
      }
    }
  }
  return v3; /*0x6a6039*/
}



// ==== 0x006A60A0  Sidebar::ActivateTab  this=Sidebar  sig=csp ====
int __thiscall Sidebar::ActivateTab(int *this, int a2)
{
  int v2; // esi
  int result; // eax

  result = a2; /*0x6a60a0*/
  if ( a2 == *(this + 5351) ) /*0x6a60ac*/
  {
    *((_BYTE *)this + 21414) = 1; /*0x6a60b8*/
    *((_BYTE *)this + 3988 * a2 + 5504) = 1; /*0x6a60c6*/
    return (int)MapClass::MarkForRedraw(&dword_87F7E8, 0, v2); /*0x6a60d2*/
  }
  return result; /*0x6a60d8*/
}



// ==== 0x006A60E0  SuperWeapon::UpdateTargetRedrawState  this=SuperWeapon  sig=csp ====
wchar_t *__thiscall SuperWeapon::UpdateTargetRedrawState(SuperWeapon *this, wchar_t *a2)
{
  wchar_t *result; // eax

  result = (wchar_t *)this->u32_539C; /*0x6a60e7*/
  if ( a2 == result ) /*0x6a60ef*/
  {
    this->q53A6 = 1; /*0x6a60fa*/
    *((_BYTE *)this + 3988 * (_DWORD)result + 5504) = 1; /*0x6a6108*/
    MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x6a6114*/
    result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x6a6119*/
    if ( this->q53A0 <= *(int *)&stru_A8EB00.?[416] ) /*0x6a6126*/
    {
      result = (wchar_t *)(*(_DWORD *)&stru_A8EB00.?[416] + 2); /*0x6a6128*/
      this->q53A0 = *(_DWORD *)&stru_A8EB00.?[416] + 2; /*0x6a612b*/
    }
  }
  return result; /*0x6a6131*/
}



// ==== 0x006A6140  Sidebar::FindProductionType  this=Sidebar  sig=csp ====
char __thiscall Sidebar::FindProductionType(Sidebar *this, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // edx
  int v7; // eax
  char *v8; // ecx
  int v9; // esi
  _DWORD *i; // edx

  switch ( a3 ) /*0x6a6155*/
  {
    case 15: /*0x6a6155*/
    case 16: /*0x6a6155*/
      v5 = 2; /*0x6a61ac*/
      break;
    case 1: /*0x6a6155*/
    case 40: /*0x6a6155*/
    case 2: /*0x6a6155*/
    case 3: /*0x6a6155*/
      v5 = 3; /*0x6a61a5*/
      break;
    case 6: /*0x6a6155*/
    case 7: /*0x6a6155*/
      v5 = GetHouseTechLevel(a3, a4) == 5; /*0x6a61a1*/
      break;
    case 57: /*0x6a6155*/
    case 32: /*0x6a6155*/
    case 31: /*0x6a6155*/
      v5 = 1; /*0x6a6189*/
      break;
    default:
      v5 = -1; /*0x6a6184*/
      break;
  }
  v6 = 997 * v5; /*0x6a61bb*/
  v7 = 0; /*0x6a61be*/
  v8 = (char *)this + 4 * v6 + 5444; /*0x6a61c0*/
  v9 = *((_DWORD *)this + v6 + 1382); /*0x6a61c7*/
  if ( v9 <= 0 ) /*0x6a61d0*/
    return 0; /*0x6a61e6*/
  for ( i = v8 + 88; i[1] != a3 || *i != a4; i += 13 ) /*0x6a61d2*/
  {
    if ( ++v7 >= v9 ) /*0x6a61e4*/
      return 0; /*0x6a61e4*/
  }
  *(_DWORD *)&v8[52 * v7 + 100] = a2; /*0x6a61fa*/
  v8[61] = 1; /*0x6a61fe*/
  v8[60] = 1; /*0x6a6202*/
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x6a620b*/
  return 1; /*0x6a61e6*/
}



// ==== 0x006A6300  SidebarClass::AddCameo  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::AddCameo(SidebarClass *this, int a2, int a3)
{
  int result; // eax
  int v5; // eax
  int *v6; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int *v12; // ecx
  int v13; // ebp
  int *v14; // eax
  int v15; // eax
  int v16; // esi
  char *v17; // ebp
  char *v18; // edi
  int v19; // ebp
  int i; // esi
  int (__thiscall **SidebarClass_field_0x0)(SidebarClass *, _DWORD); // edx
  ObjectClass *v22; // [esp+0h] [ebp-14h]
  int v23; // [esp+10h] [ebp-4h]
  int v24; // [esp+18h] [ebp+4h]

  if ( stru_A8EB00.?[391] ) /*0x6a630e*/
    goto LABEL_57; /*0x6a630e*/
  v5 = 0; /*0x6a6314*/
  v6 = (int *)((char *)this + 5528); /*0x6a6316*/
  while ( *v6 <= 0 ) /*0x6a631f*/
  {
    ++v5; /*0x6a6321*/
    v6 += 997; /*0x6a6322*/
    if ( v5 >= 4 ) /*0x6a632b*/
    {
      v23 = -1; /*0x6a632d*/
      goto LABEL_6; /*0x6a632d*/
    }
  }
  v23 = v5; /*0x6a637e*/
LABEL_6:
  switch ( a2 )
  {
    case 15:
    case 16:
      v24 = 2; /*0x6a63af*/
      break;
    case 1:
    case 40:
    case 2:
    case 3:
      v24 = 3; /*0x6a63a5*/
      break;
    case 6:
    case 7:
      v24 = GetHouseTechLevel(a2, a3) == 5; /*0x6a639f*/
      break;
    default:
      v24 = a2 == 57 || a2 == 32 || a2 == 31 ? 1 : -1;
      break;
  }
  result = v24; /*0x6a63b7*/
  v8 = *((_DWORD *)this + 997 * v24 + 1382); /*0x6a63cf*/
  if ( v8 > 75 ) /*0x6a63d9*/
    goto LABEL_57; /*0x6a63d9*/
  v9 = 0; /*0x6a63df*/
  if ( v8 > 0 ) /*0x6a63e3*/
  {
    result = (int)this + 3988 * v24 + 5532; /*0x6a63e5*/
    while ( *(_DWORD *)(result + 4) != a2 || *(_DWORD *)result != a3 ) /*0x6a63ef*/
    {
      ++v9; /*0x6a63f5*/
      result += 52; /*0x6a63f6*/
      if ( v9 >= v8 ) /*0x6a63fb*/
        goto LABEL_29; /*0x6a63fb*/
    }
LABEL_57:
    LOBYTE(result) = 0; /*0x6a65ff*/
    return result; /*0x6a6602*/
  }
LABEL_29:
  if ( !dword_A8E7AC && a2 != 31 ) /*0x6a6409*/
    VoxClass::FindAndPlay(&stru_83FA64, -1); /*0x6a6415*/
  TabCameoListClass::AddCameo_ReplaceItAll((TabCameoListClass *)&this->__pad_CD2[3988 * v24 + 2162], a2, a3); /*0x6a641e*/
  *((_BYTE *)this + 3988 * v24 + 5504) = 1; /*0x6a6423*/
  v10 = 0; /*0x6a6427*/
  g_CameoRenderFlag = 1; /*0x6a6429*/
  v11 = 0; /*0x6a6430*/
  v12 = (int *)((char *)this + 5528); /*0x6a6432*/
  while ( *v12 <= 0 ) /*0x6a643a*/
  {
    ++v11; /*0x6a643c*/
    v12 += 997; /*0x6a643d*/
    if ( v11 >= 4 ) /*0x6a6446*/
      goto LABEL_37; /*0x6a6446*/
  }
  if ( v11 != -1 ) /*0x6a644d*/
    goto LABEL_39; /*0x6a644d*/
LABEL_37:
  if ( dword_B0B478 ) /*0x6a6455*/
  {
    this->q14E6 = 1; /*0x6a6457*/
    this->q14E5 = 0; /*0x6a6461*/
  }
LABEL_39:
  v13 = v24; /*0x6a6467*/
  if ( !(unsigned __int8)DialogControl::IsHidden((DialogControl *)&stru_B07C48 + 6 * v24) ) /*0x6a647a*/
    DialogControl::Hide((GadgetClass *)(&stru_B07C48 + 8 * v24)); /*0x6a6485*/
  if ( v24 == *((_DWORD *)this + 5351) ) /*0x6a6490*/
    Tactical::UpdateUIVisibility((Tactical *)this); /*0x6a6494*/
  (*((void (__thiscall **)(SidebarClass *, int))this->SidebarClass_field_0x0 + 54))(this, 1); /*0x6a649f*/
  if ( v23 == -1 ) /*0x6a64aa*/
  {
    v14 = (int *)((char *)this + 5528); /*0x6a64b0*/
    while ( *v14 <= 0 ) /*0x6a64b9*/
    {
      ++v10; /*0x6a64bb*/
      v14 += 997; /*0x6a64bc*/
      if ( v10 >= 4 ) /*0x6a64c4*/
      {
        v10 = -1; /*0x6a64c6*/
        break; /*0x6a64c6*/
      }
    }
    v15 = *((_DWORD *)this + 5351); /*0x6a64c9*/
    if ( v10 != v15 ) /*0x6a64d1*/
    {
      GadgetClass::Hide((GadgetClass *)(&stru_B07C48 + 8 * v15)); /*0x6a64e3*/
      v16 = 0; /*0x6a64f5*/
      v17 = &this->__pad_CD2[3988 * *((_DWORD *)this + 5351) + 2162]; /*0x6a64fd*/
      *((_BYTE *)this + 3988 * *((_DWORD *)this + 5351) + 5472) = 0; /*0x6a6504*/
      do /*0x6a652f*/
      {
        Tactical::SelectObject( /*0x6a6526*/
          (GScreenClass *)&stru_87F5F0.__pad_58[416],
          56 * (v16 + 60 * *((_DWORD *)v17 + 14)) + 11566720);
        ++v16; /*0x6a652b*/
      }
      while ( v16 < 60 ); /*0x6a652f*/
      *((_DWORD *)this + 5351) = v10; /*0x6a6534*/
      GadgetClass::Show((GadgetClass *)(&stru_B07C48 + 8 * v10)); /*0x6a6543*/
      v18 = &this->__pad_CD2[3988 * *((_DWORD *)this + 5351) + 2162]; /*0x6a6560*/
      *((_BYTE *)this + 3988 * *((_DWORD *)this + 5351) + 5472) = 1; /*0x6a6567*/
      v19 = UI_Add_6AC430(v22); /*0x6a6570*/
      for ( i = 0; i < v19; ++i ) /*0x6a6576*/
      {
        Hash::Reset((LinkClass *)(56 * (i + 60 * *((_DWORD *)v18 + 14)) + 11566720)); /*0x6a6590*/
        Hash::InsertOrdered( /*0x6a65b3*/
          (GScreenClass *)&stru_87F5F0.__pad_58[416],
          56 * (i + 60 * *((_DWORD *)v18 + 14)) + 11566720);
      }
      g_CameoRenderFlag = 1; /*0x6a65bf*/
      Tactical::UpdateUIVisibility((Tactical *)this); /*0x6a65c6*/
      v13 = v24; /*0x6a65cb*/
      *((_BYTE *)this + 21415) = 1; /*0x6a65cf*/
    }
  }
  SidebarClass_field_0x0 = (int (__thiscall **)(SidebarClass *, _DWORD))this->SidebarClass_field_0x0; /*0x6a65d6*/
  *((_BYTE *)this + 21414) = 1; /*0x6a65dc*/
  result = SidebarClass_field_0x0[14](this, 0); /*0x6a65e3*/
  if ( v13 == *((_DWORD *)this + 5351) ) /*0x6a65ec*/
    g_TooltipActive = 1; /*0x6a65ee*/
  LOBYTE(result) = 1; /*0x6a65f8*/
  return result; /*0x6a65f5*/
}



// ==== 0x006A6610  Tactical::UpdateUIVisibility  this=Tactical  sig=csp ====
int __thiscall Tactical::UpdateUIVisibility(Tactical *this)
{
  int v1; // eax
  int result; // eax
  int v3; // eax

  if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a661d*/
  {
    v3 = 26; /*0x6a66f8*/
    if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a66f0*/
      v3 = 18; /*0x6a66ff*/
    if ( 4 * dword_884CF8 > 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v3 + g_DSurface_SidebarBounds - 7) / 50) ) /*0x6a6743*/
    {
      if ( !(unsigned __int8)DialogControl::IsHidden((DialogControl *)&stru_B0B328) ) /*0x6a6745*/
        DialogControl::Hide((GadgetClass *)&stru_B0B328); /*0x6a6753*/
      result = DialogControl::IsHidden((DialogControl *)&g_SidebarFlag); /*0x6a675d*/
      if ( !(_BYTE)result ) /*0x6a6764*/
        return DialogControl::Hide((GadgetClass *)&g_SidebarFlag); /*0x6a6764*/
      return result; /*0x6a6764*/
    }
    if ( (unsigned __int8)DialogControl::IsHidden((DialogControl *)&stru_B0B328) ) /*0x6a6770*/
      DialogControl::Show((GadgetClass *)&stru_B0B328); /*0x6a677e*/
    result = DialogControl::IsHidden((DialogControl *)&g_SidebarFlag); /*0x6a6788*/
    if ( !(_BYTE)result ) /*0x6a678f*/
      return result; /*0x6a678f*/
    return DialogControl::Show((GadgetClass *)&g_SidebarFlag); /*0x6a6796*/
  }
  v1 = 26; /*0x6a6631*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a6629*/
    v1 = 18; /*0x6a6638*/
  if ( *((_DWORD *)this + 997 * *((_DWORD *)this + 5351) + 1382) <= 2 /*0x6a668a*/
                                                                  * ((g_DSurface_ViewBounds
                                                                    - g_SidebarBounds
                                                                    - v1
                                                                    + g_DSurface_SidebarBounds
                                                                    - 7)
                                                                   / 50) )
  {
    if ( (unsigned __int8)DialogControl::IsHidden((DialogControl *)&stru_B0B328) ) /*0x6a66bb*/
      DialogControl::Show((GadgetClass *)&stru_B0B328); /*0x6a66c9*/
    result = DialogControl::IsHidden((DialogControl *)&g_SidebarFlag); /*0x6a66d3*/
    if ( !(_BYTE)result ) /*0x6a66da*/
      return result; /*0x6a66da*/
    return DialogControl::Show((GadgetClass *)&g_SidebarFlag); /*0x6a66da*/
  }
  if ( !(unsigned __int8)DialogControl::IsHidden((DialogControl *)&stru_B0B328) ) /*0x6a668c*/
    DialogControl::Hide((GadgetClass *)&stru_B0B328); /*0x6a669a*/
  result = DialogControl::IsHidden((DialogControl *)&g_SidebarFlag); /*0x6a66a4*/
  if ( !(_BYTE)result ) /*0x6a66ab*/
    return DialogControl::Hide((GadgetClass *)&g_SidebarFlag); /*0x6a66b1*/
  return result; /*0x6a679b*/
}



// ==== 0x006A6A00  CreateTeamCommand::performAction_245  this=CreateTeamCommand  sig=csp ====
char __thiscall CreateTeamCommand::performAction_245(CreateTeamCommand *this, char a2, int a3)
{
  int v3; // eax
  CreateTeamCommand *v4; // esi
  int v6; // eax
  int v7; // eax

  if ( !*(_DWORD *)&stru_A8EB00.?[424] ) /*0x6a6a09*/
  {
    v3 = a3; /*0x6a6a0f*/
    if ( a3 == -1 ) /*0x6a6a16*/
      v3 = *((_DWORD *)this + 5351); /*0x6a6a18*/
    v4 = (CreateTeamCommand *)((char *)this + 3988 * v3 + 5444); /*0x6a6a2b*/
    if ( a2 ) /*0x6a6a38*/
    {
      if ( *((_DWORD *)this + 997 * v3 + 1378) ) /*0x6a6a3a*/
      {
        --*((_DWORD *)this + 997 * v3 + 1379); /*0x6a6a4b*/
        (*(void (__thiscall **)(CreateTeamCommand *, _DWORD))(*(_DWORD *)this->__pad_0 + 56))(this, 0); /*0x6a6a50*/
        return 1; /*0x6a6a57*/
      }
      return 0; /*0x6a6a3f*/
    }
    v6 = 26; /*0x6a6a68*/
    if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a6a60*/
      v6 = 18; /*0x6a6a6f*/
    v7 = (g_DSurface_ViewBounds - g_SidebarBounds - v6 + g_DSurface_SidebarBounds - 7) / 50; /*0x6a6aa4*/
    if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a6aae*/
    {
      if ( *(_DWORD *)&v4->__pad_14[48] + v7 / 2 < dword_884CF8 ) /*0x6a6ac2*/
        goto LABEL_13; /*0x6a6ac2*/
    }
    else if ( 2 * (v7 + *(_DWORD *)&v4->__pad_14[48]) < *(_DWORD *)&v4->__pad_14[64] ) /*0x6a6ad2*/
    {
LABEL_13:
      ++*(_DWORD *)&v4->__pad_14[52]; /*0x6a6ad4*/
      (*(void (__thiscall **)(CreateTeamCommand *, _DWORD))(*(_DWORD *)this->__pad_0 + 56))(this, 0); /*0x6a6adf*/
      return 1; /*0x6a6ae6*/
    }
  }
  return 0; /*0x6a6a53*/
}



// ==== 0x006A6AF0  ObjectClass::method_6A6AF0  this=ObjectClass  sig=csp ====
char __thiscall sub_6A6AF0(ObjectClass *this, char a2, int a3)
{
  int v3; // eax
  char *v4; // ecx
  int v5; // eax
  void *NeedsSaveOrLink; // ecx
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // esi
  int v12; // [esp+0h] [ebp-8h]
  _DWORD *v14; // [esp+10h] [ebp+8h]

  v3 = a3; /*0x6a6af3*/
  if ( a3 == -1 ) /*0x6a6afe*/
    v3 = *((_DWORD *)this + 5351); /*0x6a6b00*/
  v4 = (char *)this + 3988 * v3 + 5444; /*0x6a6b19*/
  v5 = 26; /*0x6a6b20*/
  v14 = v4; /*0x6a6b25*/
  NeedsSaveOrLink = dword_A8B230[374].NeedsSaveOrLink; /*0x6a6b29*/
  if ( NeedsSaveOrLink ) /*0x6a6b31*/
    v5 = 18; /*0x6a6b33*/
  v12 = (g_DSurface_ViewBounds - g_SidebarBounds - v5 + g_DSurface_SidebarBounds - 7) / 50; /*0x6a6b77*/
  if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a6b7b*/
    v12 = 1; /*0x6a6b7d*/
  if ( !a2 ) /*0x6a6b8b*/
  {
    v9 = 26; /*0x6a6ba9*/
    if ( NeedsSaveOrLink ) /*0x6a6bae*/
      v9 = 18; /*0x6a6bb0*/
    v10 = g_DSurface_ViewBounds - g_SidebarBounds - v9; /*0x6a6bb5*/
    if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a6bd0*/
    {
      v7 = v14; /*0x6a6bdd*/
      if ( v14[17] + (v10 + g_DSurface_SidebarBounds - 7) / 50 / 2 >= dword_884CF8 ) /*0x6a6be8*/
        return 0; /*0x6a6be8*/
    }
    else
    {
      if ( 2 * ((v10 + g_DSurface_SidebarBounds - 7) / 50 + v14[17]) >= v14[21] ) /*0x6a6bfc*/
        return 0; /*0x6a6bfc*/
      v7 = v14; /*0x6a6bfe*/
    }
    v8 = v12 + v7[18]; /*0x6a6c07*/
    goto LABEL_18; /*0x6a6c07*/
  }
  v7 = v14; /*0x6a6b8d*/
  if ( v14[17] ) /*0x6a6b91*/
  {
    v8 = v14[18] - v12; /*0x6a6ba3*/
LABEL_18:
    v7[18] = v8; /*0x6a6c09*/
    (*((void (__thiscall **)(ObjectClass *, _DWORD))this->AbstractClass + 14))(this, 0); /*0x6a6c14*/
    return 1; /*0x6a6c20*/
  }
  return 0; /*0x6a6c1d*/
}



// ==== 0x006A6C30  SidebarClass::Redraw  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::Redraw(SidebarClass *this, char a2)
{
  SidebarClass *v2; // edi
  int v3; // esi
  int v4; // esi
  void *v5; // ebp
  int i; // edi
  int v7; // eax
  ShapeButtonClass *v8; // esi
  char v9; // al
  char v10; // dl
  _BYTE *v11; // eax
  char v12; // al
  unsigned int v14; // [esp-34h] [ebp-64h]
  unsigned int v15; // [esp-34h] [ebp-64h]
  unsigned int v16; // [esp-34h] [ebp-64h]
  unsigned __int8 v17; // [esp+Ch] [ebp-24h]
  AudioStream *v19; // [esp+14h] [ebp-1Ch]
  int v20; // [esp+18h] [ebp-18h] BYREF
  int v21; // [esp+1Ch] [ebp-14h]
  int v22[4]; // [esp+20h] [ebp-10h] BYREF
  char v23; // [esp+34h] [ebp+4h]

  v2 = this; /*0x6a6c3b*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1522] = dword_B07DC8; /*0x6a6c49*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1526] = dword_B07DCC; /*0x6a6c53*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1530] = dword_B07DD0; /*0x6a6c5f*/
  v19 = g_DSurface_Hidden_2; /*0x6a6c65*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1534] = dword_B07DD4; /*0x6a6c6f*/
  g_DSurface_Hidden_2 = (AudioStream *)DSurface_Sidebar; /*0x6a6c74*/
  v17 = 0; /*0x6a6c82*/
  v3 = (*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 32))(DSurface_Sidebar); /*0x6a6c92*/
  v22[2] = (*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 31))(DSurface_Sidebar); /*0x6a6c99*/
  v22[0] = 0; /*0x6a6ca3*/
  v22[1] = 0; /*0x6a6ca7*/
  v22[3] = v3; /*0x6a6cab*/
  if ( a2 || v2[3].__pad_CD2[1788] || (v23 = 0, v2[3].__pad_CD2[1789]) ) /*0x6a6cb9*/
    v23 = 1; /*0x6a6cc7*/
  if ( v2[3].__pad_CD2[1787] && v23 && !stru_A8EB00.?[391] ) /*0x6a6ce8*/
  {
    if ( v2[3].__pad_CD2[1789] ) /*0x6a6cee*/
    {
      v21 = g_DSurface_SidebarBounds; /*0x6a6d1f*/
      v17 = 1; /*0x6a6d39*/
      v20 = 0; /*0x6a6d3e*/
      DrawToSurfaceSHP( /*0x6a6d42*/
        (int)DSurface_Sidebar,
        *(int *)&stru_87F5F0.__pad_58[132],
        (int)dword_B0B468,
        0,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v4 = g_SidebarBounds; /*0x6a6d47*/
      v5 = dword_B0B46C; /*0x6a6d4d*/
      for ( i = 0; ; ++i ) /*0x6a6d53*/
      {
        v7 = 26; /*0x6a6d63*/
        if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a6d5b*/
          v7 = 18; /*0x6a6d6a*/
        if ( i >= (g_DSurface_ViewBounds - g_SidebarBounds - v7 + g_DSurface_SidebarBounds - 7) / 50 ) /*0x6a6d9c*/
          break; /*0x6a6d9c*/
        v20 = 0; /*0x6a6dcc*/
        v21 = v4; /*0x6a6dd0*/
        DrawToSurfaceSHP( /*0x6a6dd4*/
          (int)DSurface_Sidebar,
          *(int *)&stru_87F5F0.__pad_58[132],
          (int)v5,
          0,
          &v20,
          v22,
          1024,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
        v5 = dword_B0B46C; /*0x6a6dd9*/
        v4 += *((__int16 *)dword_B0B46C + 2); /*0x6a6de3*/
      }
      v20 = 0; /*0x6a6e1c*/
      v21 = v4; /*0x6a6e20*/
      DrawToSurfaceSHP( /*0x6a6e24*/
        (int)DSurface_Sidebar,
        *(int *)&stru_87F5F0.__pad_58[132],
        (int)dword_B0B470,
        0,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v21 = v4 + *((__int16 *)dword_B0B470 + 2); /*0x6a6e48*/
      v20 = 0; /*0x6a6e6b*/
      DrawToSurfaceSHP( /*0x6a6e6f*/
        (int)DSurface_Sidebar,
        *(int *)&stru_87F5F0.__pad_58[132],
        (int)dword_B0B474,
        0,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v2 = this; /*0x6a6e74*/
    }
    ShapeButton::Draw(&stru_B07DF8, v17); /*0x6a6e88*/
    ShapeButton::Draw(&stru_B0B3A0, v17); /*0x6a6e93*/
    v8 = &stru_B07C48; /*0x6a6e98*/
    do /*0x6a6eaf*/
    {
      ShapeButton::Draw(v8, 1); /*0x6a6ea1*/
      v8 += 8; /*0x6a6ea6*/
    }
    while ( (int)v8 < (int)&dword_B07DC8 ); /*0x6a6eaf*/
    ShapeButton::Draw(&stru_B0B328, v17); /*0x6a6eb7*/
    ShapeButton::Draw(&g_SidebarFlag, v17); /*0x6a6ec2*/
    if ( *(_DWORD *)&v2[3].__pad_CD2[1774] ) /*0x6a6ec7*/
    {
      v21 = g_SidebarBounds; /*0x6a6eef*/
      v14 = *(_DWORD *)&v2[3].__pad_CD2[1770]; /*0x6a6f0a*/
      v20 = 0; /*0x6a6f18*/
      DrawToSurfaceSHP( /*0x6a6f1c*/
        (int)DSurface_Sidebar,
        *(int *)&stru_87F5F0.__pad_58[132],
        (int)dword_B0B478,
        v14,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v21 = g_SidebarBounds; /*0x6a6f3a*/
      v15 = *(_DWORD *)&v2[3].__pad_CD2[1770]; /*0x6a6f55*/
      v20 = 0; /*0x6a6f63*/
      DrawToSurfaceSHP( /*0x6a6f67*/
        (int)DSurface_Sidebar,
        *(int *)&stru_87F5F0.__pad_58[132],
        (int)dword_B0B47C,
        v15,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v21 = g_SidebarBounds; /*0x6a6f85*/
      v16 = *(_DWORD *)&v2[3].__pad_CD2[1770]; /*0x6a6fa0*/
      v20 = 0; /*0x6a6fae*/
      DrawToSurfaceSHP( /*0x6a6fb2*/
        (int)DSurface_Sidebar,
        *(int *)&stru_87F5F0.__pad_58[132],
        (int)dword_B0B480,
        v16,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
    }
    g_TooltipActive = 1; /*0x6a6fb7*/
  }
  Sidebar::UpdateProductionDisplay( /*0x6a6fdf*/
    (int)&v2->__pad_CD2[3988 * *(_DWORD *)&v2[3].__pad_CD2[1778] + 2162],
    (wchar_t)v2,
    v2[3].__pad_CD2[1789]);
  v9 = v23 || v17; /*0x6a6ff4*/
  Sidebar::Render((PowerClass *)v2, v9); /*0x6a6ffc*/
  if ( byte_B07E4C ) /*0x6a7007*/
  {
    v10 = 1; /*0x6a7009*/
    byte_B07E4C = 0; /*0x6a700b*/
    g_TooltipActive = 1; /*0x6a7011*/
  }
  else
  {
    v10 = g_TooltipActive; /*0x6a7019*/
  }
  if ( byte_B0B3F4 ) /*0x6a7025*/
  {
    v10 = 1; /*0x6a7027*/
    byte_B0B3F4 = 0; /*0x6a7029*/
    g_TooltipActive = 1; /*0x6a702f*/
  }
  v11 = &unk_B07C9C; /*0x6a7035*/
  do /*0x6a704a*/
  {
    if ( *v11 ) /*0x6a703a*/
    {
      v10 = 1; /*0x6a703e*/
      *v11 = 0; /*0x6a7040*/
    }
    v11 += 96; /*0x6a7042*/
  }
  while ( (int)v11 < (int)&dword_B07E1C ); /*0x6a704a*/
  g_TooltipActive = v10; /*0x6a7051*/
  if ( byte_B0B37C ) /*0x6a7059*/
  {
    v10 = 1; /*0x6a705b*/
    byte_B0B37C = 0; /*0x6a705d*/
    g_TooltipActive = 1; /*0x6a7063*/
  }
  if ( byte_B0B45C ) /*0x6a706f*/
  {
    v10 = 1; /*0x6a7071*/
    byte_B0B45C = 0; /*0x6a7073*/
    g_TooltipActive = 1; /*0x6a7079*/
  }
  if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x6a7087*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_88732C.__pad_1C[32] + 12))( /*0x6a708d*/
      *(_DWORD *)&stru_88732C.__pad_1C[32],
      1);
    v10 = g_TooltipActive; /*0x6a7090*/
  }
  v12 = v10 || v2[3].__pad_CD2[1789]; /*0x6a70a6*/
  Sidebar::FlushSidebarTooltip((Sidebar *)v2, v12); /*0x6a70ae*/
  v2[3].__pad_CD2[1788] = 0; /*0x6a70b7*/
  v2[3].__pad_CD2[1789] = 0; /*0x6a70bd*/
  g_DSurface_Hidden_2 = v19; /*0x6a70c5*/
  return (int)v19->__pad_0; /*0x6a70c3*/
}



// ==== 0x006A70E0  Sidebar::FlushSidebarTooltip  this=Sidebar  sig=csp ====
void __thiscall Sidebar::FlushSidebarTooltip(Sidebar *this, char a2)
{
  int v3; // esi
  int v4; // ebp
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // esi
  struct tagPOINT Point; // [esp+1Ch] [ebp-38h] BYREF
  int v10; // [esp+24h] [ebp-30h] BYREF
  LONG y; // [esp+28h] [ebp-2Ch]
  int v12; // [esp+2Ch] [ebp-28h]
  int v13; // [esp+30h] [ebp-24h]
  int v14; // [esp+34h] [ebp-20h] BYREF
  LONG v15; // [esp+38h] [ebp-1Ch]
  int v16; // [esp+3Ch] [ebp-18h]
  int v17; // [esp+40h] [ebp-14h]
  struct tagRECT Rect; // [esp+44h] [ebp-10h] BYREF

  if ( !*((_BYTE *)this + 21413) || !byte_A8E9A0 || !stru_A8EB00.?[376] ) /*0x6a7109*/
    goto LABEL_25; /*0x6a7109*/
  GetClientRect(g_hWnd, &Rect); /*0x6a711b*/
  Point.x = Rect.left; /*0x6a7129*/
  Point.y = Rect.top; /*0x6a7137*/
  ClientToScreen(g_hWnd, &Point); /*0x6a713d*/
  if ( g_TooltipActive || a2 ) /*0x6a7153*/
  {
    g_TooltipActive = 1; /*0x6a723a*/
    goto LABEL_13; /*0x6a723a*/
  }
  g_TooltipActive = 0; /*0x6a7166*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1522] != dword_B07DC8
    || *(_DWORD *)&stru_87F5F0.__pad_E12[1526] != dword_B07DCC
    || *(_DWORD *)&stru_87F5F0.__pad_E12[1530] != dword_B07DD0
    || *(_DWORD *)&stru_87F5F0.__pad_E12[1534] != dword_B07DD4 )
  {
LABEL_13:
    (*(void (__thiscall **)(void *, DSurface *, int))(*(_DWORD *)stru_887598.lineTrailer + 60))( /*0x6a7241*/
      stru_887598.lineTrailer,
      DSurface_Sidebar,
      1);
    if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1522] == dword_B07DC8
      && *(_DWORD *)&stru_87F5F0.__pad_E12[1526] == dword_B07DCC
      && *(_DWORD *)&stru_87F5F0.__pad_E12[1530] == dword_B07DD0
      && *(_DWORD *)&stru_87F5F0.__pad_E12[1534] == dword_B07DD4
      && !a2 )
    {
      if ( *((_BYTE *)this + 21416) )
      {
        y = Point.y; /*0x6a72d1*/
        v10 = Point.x + (LOBYTE(stru_A8EB00.ObjectTypeClass[31]) != 0 ? *(_DWORD *)DSurface_ViewBounds.__pad_8 : 0);
        v14 = 0; /*0x6a72f3*/
        v15 = 0; /*0x6a72f7*/
        v16 = dword_886F98; /*0x6a72fb*/
        v17 = 16; /*0x6a72ff*/
        v12 = dword_886F98; /*0x6a7303*/
        v13 = 16; /*0x6a7307*/
        (*((void (__thiscall **)(DSurface *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x6a7312*/
         + 2))(
          g_DSurface_Primary,
          &v10,
          DSurface_Sidebar,
          &v14,
          0,
          1);
        *((_BYTE *)this + 21416) = 0; /*0x6a7315*/
      }
      v3 = dword_886F98; /*0x6a7332*/
      v17 = g_DSurface_ViewBounds; /*0x6a733e*/
      v14 = 0; /*0x6a7348*/
      v4 = g_DSurface_SidebarBounds + Point.y; /*0x6a734e*/
      v15 = g_DSurface_SidebarBounds; /*0x6a7357*/
      v16 = dword_886F98; /*0x6a735b*/
      v5 = (LOBYTE(stru_A8EB00.ObjectTypeClass[31]) != 0 ? *(_DWORD *)DSurface_ViewBounds.__pad_8 : 0) + Point.x;
      v6 = (*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 32))(DSurface_Sidebar); /*0x6a7363*/
      v10 = v5; /*0x6a7386*/
      y = v4; /*0x6a738a*/
      v12 = v3; /*0x6a738e*/
      v13 = v6 - g_DSurface_SidebarBounds; /*0x6a7392*/
      (*((void (__thiscall **)(DSurface *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x6a739d*/
       + 2))(
        g_DSurface_Primary,
        &v10,
        DSurface_Sidebar,
        &v14,
        0,
        1);
    }
    else if ( g_TooltipActive )
    {
      v7 = (*((int (__thiscall **)(DSurface *, int *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x6a73be*/
             DSurface_Sidebar,
             &v10);
      v14 = 0; /*0x6a73dd*/
      v15 = 0; /*0x6a73e5*/
      v16 = *(_DWORD *)(v7 + 8); /*0x6a73ec*/
      v8 = *(_DWORD *)(v7 + 12); /*0x6a73f0*/
      y = Point.y; /*0x6a73fd*/
      v10 = Point.x + (LOBYTE(stru_A8EB00.ObjectTypeClass[31]) != 0 ? *(_DWORD *)DSurface_ViewBounds.__pad_8 : 0);
      v17 = v8; /*0x6a741b*/
      v12 = v16; /*0x6a741f*/
      v13 = v8; /*0x6a7423*/
      (*((void (__thiscall **)(DSurface *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x6a742e*/
       + 2))(
        g_DSurface_Primary,
        &v10,
        DSurface_Sidebar,
        &v14,
        0,
        1);
    }
    else
    {
      v15 = Point.y + *(_DWORD *)&stru_87F5F0.__pad_E12[1526]; /*0x6a7458*/
      v14 = Point.x
          + *(_DWORD *)&stru_87F5F0.__pad_E12[1522]
          + (LOBYTE(stru_A8EB00.ObjectTypeClass[31]) != 0 ? *(_DWORD *)DSurface_ViewBounds.__pad_8 : 0);
      v16 = *(_DWORD *)&stru_87F5F0.__pad_E12[1530]; /*0x6a746f*/
      v17 = *(_DWORD *)&stru_87F5F0.__pad_E12[1534]; /*0x6a7473*/
      (*((void (__thiscall **)(DSurface *, int *, DSurface *, char *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x6a747e*/
       + 2))(
        g_DSurface_Primary,
        &v14,
        DSurface_Sidebar,
        &stru_87F5F0.__pad_E12[1522],
        0,
        1);
    }
    goto LABEL_24; /*0x6a73a0*/
  }
  if ( *((_BYTE *)this + 21416) )
  {
    (*(void (__thiscall **)(void *, DSurface *, int))(*(_DWORD *)stru_887598.lineTrailer + 60))( /*0x6a71c7*/
      stru_887598.lineTrailer,
      DSurface_Sidebar,
      1);
    v15 = Point.y; /*0x6a71eb*/
    v14 = Point.x + (LOBYTE(stru_A8EB00.ObjectTypeClass[31]) != 0 ? *(_DWORD *)DSurface_ViewBounds.__pad_8 : 0);
    v10 = 0; /*0x6a720d*/
    y = 0; /*0x6a7211*/
    v12 = dword_886F98; /*0x6a7215*/
    v13 = 16; /*0x6a7219*/
    v16 = dword_886F98; /*0x6a721d*/
    v17 = 16; /*0x6a7221*/
    (*((void (__thiscall **)(DSurface *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x6a722c*/
     + 2))(
      g_DSurface_Primary,
      &v14,
      DSurface_Sidebar,
      &v10,
      0,
      1);
    *((_BYTE *)this + 21416) = 0; /*0x6a722f*/
LABEL_24:
    byte_B0B519 = 1; /*0x6a7481*/
  }
LABEL_25:
  g_TooltipActive = 0; /*0x6a7488*/
}



// ==== 0x006A74A0  ObjectClass::method_6A74A0  this=Tactical  sig=csp ====
int __thiscall sub_6A74A0(Tactical *this, int a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebp

  *((_DWORD *)this + 5351) = a2; /*0x6a74b6*/
  GadgetClass::Show((GadgetClass *)(&stru_B07C48 + 8 * a2)); /*0x6a74bc*/
  v3 = (_DWORD *)((char *)this + 3988 * *((_DWORD *)this + 5351) + 5444); /*0x6a74d4*/
  *((_BYTE *)this + 3988 * *((_DWORD *)this + 5351) + 5472) = 1; /*0x6a74db*/
  v4 = 26; /*0x6a74ed*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a74e5*/
    v4 = 18; /*0x6a74f4*/
  v5 = 0; /*0x6a7507*/
  v6 = 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v4 + g_DSurface_SidebarBounds - 7) / 50); /*0x6a7527*/
  if ( v6 > 0 ) /*0x6a752b*/
  {
    do /*0x6a7570*/
    {
      Hash::Reset((LinkClass *)(56 * (v5 + 60 * v3[14]) + 11566720)); /*0x6a7545*/
      Hash::InsertOrdered((GScreenClass *)&stru_87F5F0.__pad_58[416], 56 * (v5 + 60 * v3[14]) + 11566720); /*0x6a7568*/
      ++v5; /*0x6a756d*/
    }
    while ( v5 < v6 ); /*0x6a7570*/
  }
  g_CameoRenderFlag = 1; /*0x6a7574*/
  return Tactical::UpdateUIVisibility(this); /*0x6a7580*/
}



// ==== 0x006A7590  SidebarClass::SwitchTab  this=Tactical  sig=csp ====
int __thiscall SidebarClass::SwitchTab(int this, int a2)
{
  int result; // eax
  int v4; // esi
  int v5; // edi
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // ebx

  result = *(_DWORD *)(this + 21404); /*0x6a7598*/
  if ( a2 != result ) /*0x6a75a0*/
  {
    GadgetClass::Hide((GadgetClass *)(&stru_B07C48 + 8 * result)); /*0x6a75b4*/
    v4 = 0; /*0x6a75c6*/
    v5 = this + 3988 * *(_DWORD *)(this + 21404) + 5444; /*0x6a75ce*/
    *(_BYTE *)(this + 3988 * *(_DWORD *)(this + 21404) + 5472) = 0; /*0x6a75d5*/
    do /*0x6a7600*/
    {
      Tactical::SelectObject( /*0x6a75f7*/
        (GScreenClass *)&stru_87F5F0.__pad_58[416],
        56 * (v4 + 60 * *(_DWORD *)(v5 + 56)) + 11566720);
      ++v4; /*0x6a75fc*/
    }
    while ( v4 < 60 ); /*0x6a7600*/
    *(_DWORD *)(this + 21404) = a2; /*0x6a7605*/
    GadgetClass::Show((GadgetClass *)(&stru_B07C48 + 8 * a2)); /*0x6a7614*/
    v6 = this + 3988 * *(_DWORD *)(this + 21404) + 5444; /*0x6a762c*/
    *(_BYTE *)(this + 3988 * *(_DWORD *)(this + 21404) + 5472) = 1; /*0x6a7633*/
    v7 = 26; /*0x6a7645*/
    if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a763d*/
      v7 = 18; /*0x6a764c*/
    v8 = 0; /*0x6a765f*/
    v9 = 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v7 + g_DSurface_SidebarBounds - 7) / 50); /*0x6a767f*/
    if ( v9 > 0 ) /*0x6a7683*/
    {
      do /*0x6a76c8*/
      {
        Hash::Reset((LinkClass *)(56 * (v8 + 60 * *(_DWORD *)(v6 + 56)) + 11566720)); /*0x6a769d*/
        Hash::InsertOrdered( /*0x6a76c0*/
          (GScreenClass *)&stru_87F5F0.__pad_58[416],
          56 * (v8 + 60 * *(_DWORD *)(v6 + 56)) + 11566720);
        ++v8; /*0x6a76c5*/
      }
      while ( v8 < v9 ); /*0x6a76c8*/
    }
    g_CameoRenderFlag = 1; /*0x6a76cc*/
    result = Tactical::UpdateUIVisibility((Tactical *)this); /*0x6a76d3*/
    *(_BYTE *)(this + 21415) = 1; /*0x6a76d9*/
  }
  return result; /*0x6a76e1*/
}



// ==== 0x006A7780  SidebarClass::UpdateStrips  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::UpdateStrips(SidebarClass *this, int *a2, _DWORD *a3)
{
  int v4; // ecx
  int *p_SidebarClass_field_0x1544; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  char v10; // cl
  char v11; // al
  int v12; // eax
  int v13; // ebp
  int v14; // eax
  int v15; // edi
  char *v16; // ebx
  char *v17; // ebp
  int v18; // eax
  int v19; // edi
  int v20; // ebx
  char v21; // bl
  SidebarClass *v22; // edi
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // edx
  char *v28; // eax
  int v29; // edx
  char *v30; // edi
  int v31; // eax
  int v32; // edx
  int v33; // [esp+14h] [ebp-10h]
  void *NeedsSaveOrLink; // [esp+18h] [ebp-Ch]
  _DWORD v35[2]; // [esp+1Ch] [ebp-8h] BYREF

  v4 = a3[1]; /*0x6a7795*/
  v35[0] = *a3 - DSurface_SidebarBounds; /*0x6a7798*/
  v35[1] = v4; /*0x6a77a4*/
  if ( !stru_A8EB00.?[391] ) /*0x6a77a8*/
  {
    (*((void (__thiscall **)(SidebarClass *, int))this->SidebarClass_field_0x0 + 54))(this, 1); /*0x6a77b0*/
    p_SidebarClass_field_0x1544 = &this->SidebarClass_field_0x1544; /*0x6a77b6*/
    v6 = 4; /*0x6a77bc*/
    do /*0x6a77d9*/
    {
      SidebarClass::UpdateCameos((char *)p_SidebarClass_field_0x1544, (int)a2, (int)v35); /*0x6a77cd*/
      p_SidebarClass_field_0x1544 += 997; /*0x6a77d2*/
      --v6; /*0x6a77d8*/
    }
    while ( v6 ); /*0x6a77d9*/
  }
  if ( *((_BYTE *)this + 21413) ) /*0x6a77db*/
  {
    v7 = this->q14E6; /*0x6a77e9*/
    if ( v7 == 1 ) /*0x6a77f2*/
    {
      v8 = this->q14E5 + 1; /*0x6a77fa*/
      this->q14E5 = v8; /*0x6a77fb*/
      if ( v8 <= *((__int16 *)dword_B0B478 + 3) ) /*0x6a780f*/
        goto LABEL_11; /*0x6a780f*/
    }
    else
    {
      if ( v7 != -1 ) /*0x6a7816*/
        goto LABEL_11; /*0x6a7816*/
      v9 = this->q14E5 - 1; /*0x6a781e*/
      this->q14E5 = v9; /*0x6a781f*/
      if ( v9 >= 0 ) /*0x6a7825*/
        goto LABEL_11; /*0x6a7825*/
    }
    this->q14E6 = 0; /*0x6a7829*/
    this->q14E5 = 0; /*0x6a782f*/
LABEL_11:
    v10 = *((_BYTE *)this + 21780); /*0x6a7835*/
    *((_BYTE *)this + 21780) = *(_DWORD *)&dword_A83D4C[1].__pad_38[24] > 0; /*0x6a7866*/
    if ( v10 != *((_BYTE *)this + 21780) ) /*0x6a7873*/
    {
      (*((void (__thiscall **)(SidebarClass *, _DWORD))this->SidebarClass_field_0x0 + 14))(this, 0); /*0x6a787b*/
      v11 = *((_BYTE *)this + 21780); /*0x6a787e*/
      *((_BYTE *)this + 21414) = 1; /*0x6a7884*/
      if ( !v11 ) /*0x6a788d*/
        (*((void (__thiscall **)(SidebarClass *, _DWORD, _DWORD))this->SidebarClass_field_0x0 + 18))(this, 0, 0); /*0x6a7897*/
    }
    v12 = *a2; /*0x6a789f*/
    if ( *a2 == 32870 ) /*0x6a78a6*/
    {
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 392), 0x2000, 1.0, 0); /*0x6a78bf*/
      BuildingClass::TogglePower((BuildingClass *)this, -1); /*0x6a78c8*/
      goto LABEL_32; /*0x6a78cd*/
    }
    if ( v12 == 32869 ) /*0x6a78d7*/
    {
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 392), 0x2000, 1.0, 0); /*0x6a78f1*/
      BuildingClass::TogglePower2((BuildingClass *)this, -1); /*0x6a78fa*/
      goto LABEL_32; /*0x6a78ff*/
    }
    if ( v12 >= 32971 && v12 < 32975 ) /*0x6a7914*/
    {
      v13 = v12 - 32971; /*0x6a791a*/
      v14 = *((_DWORD *)this + 5351); /*0x6a7920*/
      if ( v13 != v14 ) /*0x6a7928*/
      {
        GadgetClass::Hide((GadgetClass *)(&stru_B07C48 + 8 * v14)); /*0x6a793a*/
        v15 = 0; /*0x6a794c*/
        v16 = &this->__pad_CD2[3988 * *((_DWORD *)this + 5351) + 2162]; /*0x6a7954*/
        *((_BYTE *)this + 3988 * *((_DWORD *)this + 5351) + 5472) = 0; /*0x6a795b*/
        do /*0x6a7986*/
        {
          Tactical::SelectObject( /*0x6a797d*/
            (GScreenClass *)&stru_87F5F0.__pad_58[416],
            56 * (v15 + 60 * *((_DWORD *)v16 + 14)) + 11566720);
          ++v15; /*0x6a7982*/
        }
        while ( v15 < 60 ); /*0x6a7986*/
        *((_DWORD *)this + 5351) = v13; /*0x6a798c*/
        GadgetClass::Show((GadgetClass *)(&stru_B07C48 + 8 * v13)); /*0x6a799b*/
        v17 = &this->__pad_CD2[3988 * *((_DWORD *)this + 5351) + 2162]; /*0x6a79b3*/
        *((_BYTE *)this + 3988 * *((_DWORD *)this + 5351) + 5472) = 1; /*0x6a79ba*/
        v18 = 26; /*0x6a79cc*/
        if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a79c4*/
          v18 = 18; /*0x6a79d3*/
        v19 = 0; /*0x6a79ed*/
        v20 = 2 * ((g_DSurface_ViewBounds - v18 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50); /*0x6a7a06*/
        if ( v20 > 0 ) /*0x6a7a0a*/
        {
          do /*0x6a7a4f*/
          {
            Hash::Reset((LinkClass *)(56 * (v19 + 60 * *((_DWORD *)v17 + 14)) + 11566720)); /*0x6a7a24*/
            Hash::InsertOrdered( /*0x6a7a47*/
              (GScreenClass *)&stru_87F5F0.__pad_58[416],
              56 * (v19 + 60 * *((_DWORD *)v17 + 14)) + 11566720);
            ++v19; /*0x6a7a4c*/
          }
          while ( v19 < v20 ); /*0x6a7a4f*/
        }
        g_CameoRenderFlag = 1; /*0x6a7a53*/
        Tactical::UpdateUIVisibility((Tactical *)this); /*0x6a7a5a*/
        *((_BYTE *)this + 21415) = 1; /*0x6a7a5f*/
      }
      goto LABEL_31; /*0x6a7a5f*/
    }
    v24 = dword_B0B34C; /*0x6a7b18*/
    BYTE1(v12) &= ~0x40u; /*0x6a7b1e*/
    BYTE1(v24) = BYTE1(dword_B0B34C) | 0x80; /*0x6a7b21*/
    if ( v12 == v24 ) /*0x6a7b26*/
    {
      byte_B0B354 = 0; /*0x6a7b2c*/
      NeedsSaveOrLink = dword_A8B230[374].NeedsSaveOrLink; /*0x6a7b5d*/
      v25 = 26; /*0x6a7b63*/
      if ( NeedsSaveOrLink ) /*0x6a7b68*/
        v25 = 18; /*0x6a7b6a*/
      v33 = (g_DSurface_ViewBounds - v25 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50; /*0x6a7ba9*/
      if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a7bad*/
        v33 = 1; /*0x6a7baf*/
      v26 = 26; /*0x6a7bbd*/
      if ( NeedsSaveOrLink ) /*0x6a7bc2*/
        v26 = 18; /*0x6a7bc4*/
      v27 = (g_DSurface_ViewBounds - v26 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50; /*0x6a7be5*/
      if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a7be9*/
      {
        v28 = &this->__pad_CD2[3988 * *((_DWORD *)this + 5351) + 2162]; /*0x6a7bf8*/
        if ( *((_DWORD *)this + 997 * *((_DWORD *)this + 5351) + 1378) + v27 / 2 < dword_884CF8 ) /*0x6a7c03*/
          goto LABEL_56; /*0x6a7c03*/
      }
      else
      {
        v28 = &this->__pad_CD2[3988 * *((_DWORD *)this + 5351) + 2162]; /*0x6a7c07*/
        if ( 2 * (v27 + *((_DWORD *)v28 + 17)) < *((_DWORD *)v28 + 21) ) /*0x6a7c17*/
        {
LABEL_56:
          *((_DWORD *)v28 + 18) += v33; /*0x6a7c19*/
          PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 400), 0x2000, 1.0, 0); /*0x6a7c3d*/
          goto LABEL_32; /*0x6a7c3d*/
        }
      }
    }
    else
    {
      v29 = dword_B0B42C; /*0x6a7c5e*/
      BYTE1(v29) = BYTE1(dword_B0B42C) | 0x80; /*0x6a7c64*/
      if ( v12 != v29 ) /*0x6a7c69*/
        goto LABEL_32; /*0x6a7c69*/
      byte_B0B434 = 0; /*0x6a7c6f*/
      v31 = 26; /*0x6a7c9e*/
      if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a7c96*/
        v31 = 18; /*0x6a7ca5*/
      v32 = (g_DSurface_ViewBounds - v31 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50; /*0x6a7cd7*/
      if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a7ce1*/
        v32 = 1; /*0x6a7ce3*/
      if ( *((_DWORD *)this + 997 * *((_DWORD *)this + 5351) + 1378) ) /*0x6a7ce8*/
      {
        v30 = &this->__pad_CD2[3988 * *((_DWORD *)this + 5351) + 2162]; /*0x6a7c8f*/
        *((_DWORD *)v30 + 18) -= v32; /*0x6a7cef*/
LABEL_31:
        PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 400), 0x2000, 1.0, 0); /*0x6a7a66*/
        goto LABEL_32; /*0x6a7a7d*/
      }
    }
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1792), 0x2000, 1.0, 0); /*0x6a7d0f*/
LABEL_32:
    v21 = 0; /*0x6a7a82*/
    v22 = (SidebarClass *)&stru_B07C48; /*0x6a7a84*/
    do /*0x6a7aa0*/
    {
      if ( SidebarClass::updateFlashTimer(v22) ) /*0x6a7a8c*/
        v21 = 1; /*0x6a7a95*/
      v22 = (SidebarClass *)((char *)v22 + 96); /*0x6a7a97*/
    }
    while ( (int)v22 < (int)&dword_B07DC8 ); /*0x6a7aa0*/
    if ( v21 ) /*0x6a7aa4*/
    {
      *((_BYTE *)this + 21414) = 1; /*0x6a7aa6*/
      g_TooltipActive = 1; /*0x6a7aad*/
      g_CameoRenderFlag = 1; /*0x6a7ab4*/
      (*((void (__thiscall **)(SidebarClass *, _DWORD))this->SidebarClass_field_0x0 + 14))(this, 0); /*0x6a7ac1*/
    }
  }
  if ( !this->__pad_CD2[1247] && byte_B07E25 ) /*0x6a7ad5*/
    GadgetClass::Hide((GadgetClass *)&stru_B07DF8); /*0x6a7adc*/
  if ( !this->__pad_CD2[1246] && byte_B0B3CD ) /*0x6a7af2*/
    GadgetClass::Hide((GadgetClass *)&stru_B0B3A0); /*0x6a7af9*/
  return PowerClass::updatePowerBarAnimation((PowerClass *)this, a2, a3); /*0x6a7b0f*/
}



// ==== 0x006A7D20  HouseClass::UpdateAllProductionTabs  this=HouseClass  sig=csp ====
char __thiscall sub_6A7D20(char *this)
{
  char v2; // bl
  int v3; // esi
  _BYTE *v4; // edi
  char result; // al
  int v6; // eax

  v2 = 0; /*0x6a7d26*/
  v3 = 0; /*0x6a7d28*/
  v4 = this + 5504; /*0x6a7d2a*/
  do /*0x6a7d53*/
  {
    result = SidebarClass::UpdateProduction((int)(v4 - 60)); /*0x6a7d33*/
    if ( result && v3 == this->q14E7 ) /*0x6a7d42*/
    {
      *v4 = 1; /*0x6a7d44*/
      v2 = 1; /*0x6a7d47*/
    }
    ++v3; /*0x6a7d49*/
    v4 += 3988; /*0x6a7d4a*/
  }
  while ( v3 < 4 ); /*0x6a7d53*/
  if ( v2 ) /*0x6a7d57*/
  {
    v6 = *(_DWORD *)this; /*0x6a7d59*/
    this->q53A6 = 1; /*0x6a7d60*/
    return (*(int (__thiscall **)(char *, _DWORD))(v6 + 56))(this, 0); /*0x6a7d67*/
  }
  return result; /*0x6a7d6a*/
}



// ==== 0x006A7D70  SidebarClass::ToggleSidebarDisplay  this=SidebarClass  sig=csp ====
char __userpurge ObjectClass::ToggleSidebarDisplay@<al>(
        SidebarClass *this,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5,
        char a6)
{
  int v6; // ecx
  int v7; // esi
  char result; // al
  char v9; // cl
  char v10; // bl
  ShapeButtonClass *v11; // edi
  GadgetClass *v12; // edi
  int *v13; // ebx
  int v14; // ebp
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  ShapeButtonClass *v18; // edi
  int v19; // edi
  int v20; // ebp
  int v21; // [esp+0h] [ebp-10h]

  v7 = v6; /*0x6a7d71*/
  result = *(_BYTE *)(v6 + 21413); /*0x6a7d79*/
  if ( (dword_A8D5F8 & 2) != 0 && *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 ) /*0x6a7d91*/
    return result; /*0x6a7d91*/
  if ( this == (SidebarClass *)-1 ) /*0x6a7d9e*/
    *(_BYTE *)(v6 + 21413) = result == 0; /*0x6a7db3*/
  else
    *(_BYTE *)(v6 + 21413) = this == (SidebarClass *)1; /*0x6a7da6*/
  v9 = *(_BYTE *)(v6 + 21413); /*0x6a7db9*/
  v10 = v9 != result; /*0x6a7dc2*/
  if ( v9 == result ) /*0x6a7dcb*/
    return v10; /*0x6a8078*/
  ObjectClass::resetObjectState((ObjectClass *)v7, v9); /*0x6a7dd6*/
  if ( !*(_BYTE *)(v7 + 21413) ) /*0x6a7de3*/
  {
    AsyncIO::Shutdown((AsyncIO *)a4); /*0x6a7fc3*/
    (*(void (__thiscall **)(int, ShapeButtonClass *, int, int, int))(*(_DWORD *)v7 + 52))(v7, &stru_B07DF8, v21, a3, a2); /*0x6a7fd1*/
    (*(void (__thiscall **)(int, ShapeButtonClass *))(*(_DWORD *)v7 + 52))(v7, &stru_B0B3A0); /*0x6a7fdd*/
    (*(void (__thiscall **)(int, GadgetClass *))(*(_DWORD *)v7 + 52))(v7, &stru_B07E58); /*0x6a7fe9*/
    v18 = &stru_B07C48; /*0x6a7fec*/
    do /*0x6a8002*/
    {
      (*(void (__thiscall **)(int, ShapeButtonClass *))(*(_DWORD *)v7 + 52))(v7, v18); /*0x6a7ff6*/
      v18 += 8; /*0x6a7ff9*/
    }
    while ( (int)v18 < (int)&dword_B07DC8 ); /*0x6a8002*/
    (*(void (__thiscall **)(int, ShapeButtonClass *))(*(_DWORD *)v7 + 52))(v7, &stru_B0B328); /*0x6a800d*/
    (*(void (__thiscall **)(int, ShapeButtonClass *))(*(_DWORD *)v7 + 52))(v7, &g_SidebarFlag); /*0x6a8019*/
    v19 = 0; /*0x6a8029*/
    v20 = v7 + 3988 * *(_DWORD *)(v7 + 21404) + 5444; /*0x6a8031*/
    do /*0x6a805f*/
    {
      Tactical::SelectObject( /*0x6a8056*/
        (GScreenClass *)&stru_87F5F0.__pad_58[416],
        56 * (v19 + 60 * *(_DWORD *)(v20 + 56)) + 11566720);
      ++v19; /*0x6a805b*/
    }
    while ( v19 < 60 ); /*0x6a805f*/
    (*(void (__thiscall **)(int, GadgetClass *))(*(_DWORD *)v7 + 52))(v7, &stru_B04A10); /*0x6a806a*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 56))(v7, 2); /*0x6a8073*/
    return v10; /*0x6a8073*/
  }
  (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v7 + 136))(v7, a4, a3, a2); /*0x6a7ded*/
  *(_BYTE *)(v7 + 21414) = 1; /*0x6a7df8*/
  Hash::Reset((LinkClass *)&stru_B07DF8); /*0x6a7dff*/
  (*(void (__thiscall **)(int, ShapeButtonClass *))(*(_DWORD *)v7 + 48))(v7, &stru_B07DF8); /*0x6a7e0d*/
  Hash::Reset((LinkClass *)&stru_B0B3A0); /*0x6a7e15*/
  (*(void (__thiscall **)(int, ShapeButtonClass *))(*(_DWORD *)v7 + 48))(v7, &stru_B0B3A0); /*0x6a7e23*/
  v11 = &stru_B07C48; /*0x6a7e26*/
  do /*0x6a7e47*/
  {
    Hash::Reset((LinkClass *)v11); /*0x6a7e2d*/
    LOBYTE(v11[3].ShapeButtonClass_field_0x08) = 0; /*0x6a7e32*/
    (*(void (__thiscall **)(int, ShapeButtonClass *))(*(_DWORD *)v7 + 48))(v7, v11); /*0x6a7e3b*/
    v11 += 8; /*0x6a7e3e*/
  }
  while ( (int)v11 < (int)&dword_B07DC8 ); /*0x6a7e47*/
  Hash::Reset((LinkClass *)&stru_B0B328); /*0x6a7e4e*/
  Hash::InsertOrdered((GScreenClass *)&stru_87F5F0.__pad_58[416], (int)&stru_B0B328); /*0x6a7e5d*/
  Hash::Reset((LinkClass *)&g_SidebarFlag); /*0x6a7e67*/
  Hash::InsertOrdered((GScreenClass *)&stru_87F5F0.__pad_58[416], (int)&g_SidebarFlag); /*0x6a7e76*/
  Hash::Reset((LinkClass *)&stru_B07E58); /*0x6a7e80*/
  (*(void (__thiscall **)(int, GadgetClass *))(*(_DWORD *)v7 + 48))(v7, &stru_B07E58); /*0x6a7e8e*/
  Hash::Reset((LinkClass *)&stru_B04A10); /*0x6a7e96*/
  (*(void (__thiscall **)(int, GadgetClass *))(*(_DWORD *)v7 + 48))(v7, &stru_B04A10); /*0x6a7ea4*/
  v12 = (GadgetClass *)&stru_B07C48; /*0x6a7ea7*/
  v13 = (int *)(v7 + 5528); /*0x6a7eac*/
  do /*0x6a7ed5*/
  {
    *(v13 - 4) = 0; /*0x6a7eb2*/
    if ( *v13 > 0 ) /*0x6a7ebd*/
      DialogControl::Hide(v12); /*0x6a7ec1*/
    v12 = (GadgetClass *)((char *)v12 + 96); /*0x6a7ec6*/
    v13 += 997; /*0x6a7ec9*/
  }
  while ( (int)v12 < (int)&dword_B07DC8 ); /*0x6a7ed5*/
  GadgetClass::Show((GadgetClass *)(&stru_B07C48 + 8 * *(_DWORD *)(v7 + 21404))); /*0x6a7ee9*/
  v14 = v7 + 3988 * *(_DWORD *)(v7 + 21404) + 5444; /*0x6a7f01*/
  *(_BYTE *)(v7 + 3988 * *(_DWORD *)(v7 + 21404) + 5472) = 1; /*0x6a7f08*/
  v15 = 26; /*0x6a7f1a*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a7f12*/
    v15 = 18; /*0x6a7f21*/
  v16 = 0; /*0x6a7f34*/
  v17 = 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v15 + g_DSurface_SidebarBounds - 7) / 50); /*0x6a7f54*/
  if ( v17 > 0 ) /*0x6a7f58*/
  {
    do /*0x6a7f9d*/
    {
      Hash::Reset((LinkClass *)(56 * (v16 + 60 * *(_DWORD *)(v14 + 56)) + 11566720)); /*0x6a7f72*/
      Hash::InsertOrdered( /*0x6a7f95*/
        (GScreenClass *)&stru_87F5F0.__pad_58[416],
        56 * (v16 + 60 * *(_DWORD *)(v14 + 56)) + 11566720);
      ++v16; /*0x6a7f9a*/
    }
    while ( v16 < v17 ); /*0x6a7f9d*/
  }
  g_CameoRenderFlag = 1; /*0x6a7fa1*/
  Tactical::UpdateUIVisibility((Tactical *)v7); /*0x6a7fa8*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 56))(v7, 2); /*0x6a7fb7*/
  return a5; /*0x6a7fbf*/
}



// ==== 0x006A80A0  TabClass::updateTabProduction  this=TabClass  sig=csp ====
_BYTE *__thiscall TabClass::updateTabProduction(TabClass *this, int a2)
{
  _BYTE *result; // eax
  int v3; // ecx
  int v4; // esi
  _BYTE *v5; // ecx
  int v6; // esi
  int v7; // edi
  _DWORD *v8; // ecx
  int v9; // esi

  result = this; /*0x6a80a0*/
  this->TabClass_field_0x0 = 0; /*0x6a80aa*/
  LOBYTE(this->TabClass_field_0x4) = 0; /*0x6a80ac*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6a80af*/
  *((_DWORD *)result + 4) = 0; /*0x6a80b5*/
  *((_DWORD *)result + 2) = v3; /*0x6a80b8*/
  *((_DWORD *)result + 5) = 0; /*0x6a80bc*/
  *((_DWORD *)result + 6) = 1; /*0x6a80bf*/
  *((_DWORD *)result + 8) = 0; /*0x6a80c2*/
  *((_DWORD *)result + 9) = 0; /*0x6a80c5*/
  *((_DWORD *)result + 10) = dword_B07DC8; /*0x6a80d2*/
  *((_DWORD *)result + 11) = dword_B07DCC; /*0x6a80da*/
  *((_DWORD *)result + 12) = dword_B07DD0; /*0x6a80e3*/
  v4 = dword_B07DD4; /*0x6a80e6*/
  *((_DWORD *)result + 14) = 0; /*0x6a80ec*/
  result[60] = 1; /*0x6a80ef*/
  *((_DWORD *)result + 13) = v4; /*0x6a80f2*/
  result[61] = 0; /*0x6a80f5*/
  result[62] = 0; /*0x6a80f8*/
  result[63] = 0; /*0x6a80fb*/
  *((_DWORD *)result + 16) = -1; /*0x6a80fe*/
  *((_DWORD *)result + 17) = 0; /*0x6a8105*/
  *((_DWORD *)result + 18) = 0; /*0x6a8108*/
  *((_DWORD *)result + 19) = 0; /*0x6a810b*/
  *((_DWORD *)result + 20) = 0; /*0x6a810e*/
  *((_DWORD *)result + 21) = 0; /*0x6a8111*/
  v5 = result + 112; /*0x6a8114*/
  v6 = 75; /*0x6a8117*/
  do /*0x6a8137*/
  {
    *((_DWORD *)v5 - 1) = 0; /*0x6a811c*/
    *v5 = 0; /*0x6a811f*/
    v7 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6a8121*/
    *((_DWORD *)v5 + 3) = 0; /*0x6a8127*/
    *((_DWORD *)v5 + 1) = v7; /*0x6a812a*/
    *((_DWORD *)v5 + 4) = 0; /*0x6a812d*/
    *((_DWORD *)v5 + 5) = 1; /*0x6a8130*/
    v5 += 52; /*0x6a8133*/
    --v6; /*0x6a8136*/
  }
  while ( v6 ); /*0x6a8137*/
  v8 = result + 92; /*0x6a8139*/
  v9 = 75; /*0x6a813c*/
  do /*0x6a8150*/
  {
    *(v8 - 1) = 0; /*0x6a8141*/
    *v8 = 0; /*0x6a8144*/
    v8[1] = 0; /*0x6a8146*/
    v8[2] = 0; /*0x6a8149*/
    v8 += 13; /*0x6a814c*/
    --v9; /*0x6a814f*/
  }
  while ( v9 ); /*0x6a8150*/
  return result; /*0x6a8152*/
}



// ==== 0x006A81B0  HouseClass::ClearProductionQueue  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::ClearProductionQueue(HouseClass *this)
{
  _DWORD *result; // eax
  int v2; // esi
  int v3; // ecx
  _DWORD *v4; // ebx
  int v5; // [esp+10h] [ebp-8h]

  BYTE2(this->conYardsCount) = 0; /*0x6a81b5*/
  HIBYTE(this->conYardsCount) = 0; /*0x6a81b8*/
  BYTE1(this->conYardsCount) = 0; /*0x6a81c2*/
  this->conYardsCapacity = -1; /*0x6a81c5*/
  this->buildings[0] = 0; /*0x6a81cc*/
  this->buildingsCapacity = 0; /*0x6a81cf*/
  this->repairStationsCount = 0; /*0x6a81d2*/
  result = this->occupiables; /*0x6a81d5*/
  v2 = 75; /*0x6a81db*/
  do /*0x6a820c*/
  {
    *(result - 10) = 0; /*0x6a81e0*/
    *(result - 9) = 0; /*0x6a81e3*/
    *(result - 8) = 0; /*0x6a81e6*/
    *(result - 7) = 0; /*0x6a81e9*/
    *(result - 6) = 0; /*0x6a81ec*/
    v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6a81ef*/
    v4 = result - 3; /*0x6a81f5*/
    *result = 0; /*0x6a81f8*/
    result += 13; /*0x6a81fa*/
    --v2; /*0x6a81fd*/
    *v4 = v3; /*0x6a81fe*/
    v4[1] = v5; /*0x6a8200*/
    v4[2] = 0; /*0x6a8203*/
    *(result - 18) = 0; /*0x6a8206*/
    *(result - 11) = 0; /*0x6a8209*/
  }
  while ( v2 ); /*0x6a820c*/
  return result; /*0x6a820e*/
}



// ==== 0x006A8220  SidebarClass::InitCameoGrid  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::InitCameoGrid(SidebarClass *this, int a2)
{
  int v2; // eax
  int v3; // edx
  int result; // eax
  int v5; // ebx
  int v6; // esi
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // ebp
  int v10; // edx
  int i; // [esp+4h] [ebp+4h]

  this->SidebarClass_field_0x38 = (void *)a2; /*0x6a8224*/
  v2 = 26; /*0x6a8235*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a822d*/
    v2 = 18; /*0x6a823c*/
  v3 = (g_DSurface_ViewBounds - g_SidebarBounds - v2 + g_DSurface_SidebarBounds - 7) / 50; /*0x6a826b*/
  result = 0; /*0x6a826d*/
  v5 = v3; /*0x6a826f*/
  for ( i = 0; i < v5; ++i ) /*0x6a8277*/
  {
    v6 = 0; /*0x6a827f*/
    v7 = 2 * result; /*0x6a8281*/
    do /*0x6a830e*/
    {
      v8 = (_DWORD *)(56 * (v7 + 60 * (int)this->SidebarClass_field_0x38) + 11566720); /*0x6a8299*/
      v8[9] = 202; /*0x6a82a0*/
      v8[3] = v6 * dword_B0B4FC + *(&stru_880D2C.PlayerClass_field_0x20 + 997 * (int)this->SidebarClass_field_0x38); /*0x6a82c9*/
      v9 = i * dword_B0B500; /*0x6a82e2*/
      v10 = *(&stru_880D2C.PlayerClass_field_0x24 + 997 * (int)this->SidebarClass_field_0x38); /*0x6a82e7*/
      v8[12] = v7; /*0x6a82ee*/
      ++v6; /*0x6a82f1*/
      ++v7; /*0x6a82f2*/
      v8[4] = v10 + v9 + 1; /*0x6a82fa*/
      v8[5] = 60; /*0x6a82fd*/
      v8[6] = 48; /*0x6a8304*/
      v8[11] = this; /*0x6a830b*/
    }
    while ( v6 < 2 ); /*0x6a830e*/
    result = i + 1; /*0x6a8318*/
  }
  return result; /*0x6a8329*/
}



// ==== 0x006A8330  SidebarClass::RefreshCameoGrid  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::RefreshCameoGrid(SidebarClass *this)
{
  int v2; // eax
  int v3; // esi
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ebx

  v2 = 26; /*0x6a8342*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a8338*/
    v2 = 18; /*0x6a8349*/
  v3 = 0; /*0x6a8369*/
  v4 = g_DSurface_ViewBounds - g_SidebarBounds - v2 + g_DSurface_SidebarBounds - 7; /*0x6a836b*/
  v5 = (unsigned int)((unsigned __int64)(1374389535LL * v4) >> 32) >> 31; /*0x6a8376*/
  v6 = 2 * (v4 / 50); /*0x6a837d*/
  if ( v6 > 0 ) /*0x6a8381*/
  {
    do /*0x6a83ce*/
    {
      Hash::Reset((LinkClass *)(56 * (v3 + 60 * (int)this->SidebarClass_field_0x38) + 11566720)); /*0x6a839f*/
      LOBYTE(v5) = Hash::InsertOrdered( /*0x6a83c6*/
                     (GScreenClass *)&stru_87F5F0.__pad_58[416],
                     56 * (v3 + 60 * (int)this->SidebarClass_field_0x38) + 11566720);
      ++v3; /*0x6a83cb*/
    }
    while ( v3 < v6 ); /*0x6a83ce*/
  }
  g_CameoRenderFlag = 1; /*0x6a83d2*/
  return v5; /*0x6a83d0*/
}



// ==== 0x006A83E0  SidebarClass::sortCameoList  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::sortCameoList(SidebarClass *this)
{
  int i; // esi
  char result; // al

  for ( i = 0; i < 60; ++i ) /*0x6a83e4*/
    result = Tactical::SelectObject( /*0x6a8408*/
               (GScreenClass *)&stru_87F5F0.__pad_58[416],
               56 * (i + 60 * (int)this->SidebarClass_field_0x38) + 11566720);
  return result; /*0x6a8413*/
}



// ==== 0x006A8420  RadarClass::GetBlip  this=ObjectClass  sig=csp ====
bool __stdcall CompareFactoryTypePriority(int a1, int a2, int a3, int a4)
{
  int v7; // edx
  bool v9; // al
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // esi
  const wchar_t *v14; // eax
  const wchar_t *v15; // ecx
  int v16; // edi
  int v17; // eax
  bool v18; // cl
  bool v19; // al
  char v20; // al
  char v21; // cl
  char v22; // al
  char v23; // al
  char v24; // dl
  _DWORD *v25; // ebp
  char v26; // cl
  bool v27; // al
  int v28; // eax
  int v29; // ecx
  int v30; // esi
  int v31; // eax
  char v32; // [esp+13h] [ebp-9h]
  int v33; // [esp+14h] [ebp-8h]
  int v34; // [esp+18h] [ebp-4h]
  char v35; // [esp+20h] [ebp+4h]
  bool v36; // [esp+24h] [ebp+8h]
  char v37; // [esp+28h] [ebp+Ch]
  char v38; // [esp+2Ch] [ebp+10h]

  v33 = TechnoTypeClass::GetByTypeAndIndex(a1, a2); /*0x6a8444*/
  v7 = TechnoTypeClass::GetByTypeAndIndex(a3, a4); /*0x6a844d*/
  v34 = v7; /*0x6a8451*/
  if ( !a3 ) /*0x6a8455*/
    return 1; /*0x6a8460*/
  if ( a1 == 31 || a1 == 57 || (v35 = 0, a1 == 32) ) /*0x6a8475*/
    v35 = 1; /*0x6a8477*/
  v9 = a3 == 31 || a3 == 57 || a3 == 32; /*0x6a848f*/
  v36 = v9; /*0x6a8495*/
  if ( v35 ) /*0x6a849b*/
  {
    if ( v9 ) /*0x6a849f*/
    {
      v10 = *((_DWORD *)dword_A8E334 + a2); /*0x6a84ab*/
      v11 = *((_DWORD *)dword_A8E334 + a4); /*0x6a84ae*/
      v12 = *(_DWORD *)(v10 + 176); /*0x6a84b1*/
      v13 = *(_DWORD *)(v11 + 176); /*0x6a84b7*/
      if ( v12 < v13 ) /*0x6a84bf*/
        return 1; /*0x6a84ca*/
      if ( v12 > v13 ) /*0x6a84cd*/
        return 0; /*0x6a84d8*/
      v14 = *(const wchar_t **)(v10 + 96); /*0x6a84db*/
      v15 = *(const wchar_t **)(v11 + 96); /*0x6a84de*/
      return wcscmp(v14, v15) <= 0; /*0x6a84e1*/
    }
    goto LABEL_25; /*0x6a849f*/
  }
  if ( v9 ) /*0x6a84e8*/
  {
LABEL_25:
    v16 = v33; /*0x6a8536*/
    goto LABEL_26; /*0x6a8536*/
  }
  v16 = v33; /*0x6a84ef*/
  v17 = *(_DWORD *)(*((_DWORD *)dword_A83D4C + 13) + 188); /*0x6a84fc*/
  v18 = v17 == *(_DWORD *)(v33 + 1744); /*0x6a850a*/
  v19 = v17 == *(_DWORD *)(v7 + 1744); /*0x6a850f*/
  if ( v18 ) /*0x6a8514*/
  {
    if ( !v19 ) /*0x6a8518*/
      return 1; /*0x6a8523*/
  }
  else if ( v19 ) /*0x6a8528*/
  {
    return 0; /*0x6a8533*/
  }
LABEL_26:
  if ( a1 == 40 || a1 == 3 ) /*0x6a8542*/
  {
    v20 = 1; /*0x6a8564*/
    if ( *(_BYTE *)(v16 + 3478) ) /*0x6a855e*/
    {
      v21 = 1; /*0x6a856a*/
      v37 = 1; /*0x6a856c*/
      goto LABEL_30; /*0x6a8570*/
    }
  }
  else
  {
    v20 = 0; /*0x6a8544*/
  }
  v21 = 0; /*0x6a8546*/
  v37 = 0; /*0x6a854a*/
  if ( !v20 ) /*0x6a854e*/
  {
LABEL_34:
    v22 = 0; /*0x6a8572*/
    goto LABEL_35; /*0x6a8572*/
  }
LABEL_30:
  if ( !*(_BYTE *)(v16 + 3278) ) /*0x6a8558*/
    goto LABEL_34; /*0x6a8558*/
  v22 = 1; /*0x6a855a*/
LABEL_35:
  v32 = v22; /*0x6a8574*/
  if ( v21 || (v38 = 1, v22) ) /*0x6a8583*/
    v38 = 0; /*0x6a8585*/
  if ( a3 == 40 || a3 == 3 ) /*0x6a8592*/
  {
    v23 = 1; /*0x6a85b4*/
    if ( *(_BYTE *)(v7 + 3478) ) /*0x6a85ae*/
    {
      v24 = 1; /*0x6a85ba*/
      goto LABEL_42; /*0x6a85bc*/
    }
  }
  else
  {
    v23 = 0; /*0x6a8594*/
  }
  v24 = 0; /*0x6a8596*/
  if ( !v23 ) /*0x6a859a*/
  {
    v25 = (_DWORD *)v34; /*0x6a85be*/
    goto LABEL_47; /*0x6a85be*/
  }
LABEL_42:
  v25 = (_DWORD *)v34; /*0x6a859c*/
  if ( !*(_BYTE *)(v34 + 3278) ) /*0x6a85a8*/
  {
LABEL_47:
    v26 = 0; /*0x6a85c2*/
    goto LABEL_48; /*0x6a85c2*/
  }
  v26 = 1; /*0x6a85aa*/
LABEL_48:
  v27 = !v24 && !v26; /*0x6a85d0*/
  if ( v35 ) /*0x6a85d8*/
  {
    if ( v24 || v26 || v27 ) /*0x6a85e4*/
      return 1; /*0x6a85f3*/
    goto LABEL_74; /*0x6a85e4*/
  }
  if ( v38 ) /*0x6a85fc*/
  {
    if ( v36 ) /*0x6a8604*/
      return 0; /*0x6a860f*/
    if ( v24 ) /*0x6a8614*/
      return 1; /*0x6a8614*/
  }
  else
  {
    if ( !v37 ) /*0x6a862c*/
    {
      if ( v32 ) /*0x6a8658*/
      {
        if ( v36 ) /*0x6a8660*/
          return 0; /*0x6a866b*/
        if ( v27 || v24 ) /*0x6a8674*/
          return 0; /*0x6a867f*/
      }
      goto LABEL_74; /*0x6a8674*/
    }
    if ( v36 ) /*0x6a8634*/
      return 0; /*0x6a863f*/
    if ( v27 ) /*0x6a8644*/
      return 0; /*0x6a864f*/
  }
  if ( v26 ) /*0x6a8618*/
    return 1; /*0x6a8623*/
LABEL_74:
  v28 = *(_DWORD *)(v16 + 1588); /*0x6a8682*/
  v29 = v25[397]; /*0x6a8688*/
  if ( v28 < v29 ) /*0x6a8690*/
    return 1; /*0x6a869b*/
  if ( v28 > v29 ) /*0x6a869e*/
    return 0; /*0x6a86a9*/
  v30 = (*(int (__thiscall **)(int, #375 *))(*(_DWORD *)v16 + 132))(v16, dword_A83D4C); /*0x6a86bf*/
  v31 = (*(int (__thiscall **)(_DWORD *, #375 *))(*v25 + 132))(v25, dword_A83D4C); /*0x6a86c9*/
  if ( v30 < v31 ) /*0x6a86d1*/
    return 1; /*0x6a86dc*/
  if ( v30 > v31 ) /*0x6a86df*/
    return 0; /*0x6a86ea*/
  v14 = *(const wchar_t **)(v16 + 96); /*0x6a86ed*/
  v15 = (const wchar_t *)v25[24]; /*0x6a86f0*/
  return wcscmp(v14, v15) <= 0; /*0x6a8457*/
}



// ==== 0x006A8710  TabCameoListClass::AddCameo_ReplaceItAll  this=TabCameoListClass  sig=csp ====
int __thiscall TabCameoListClass::AddCameo_ReplaceItAll(TabCameoListClass *this, int a2, int a3)
{
  int v4; // ebp
  int result; // eax
  int *i; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // eax
  TabCameoListClass *v11; // edi
  TabCameoListClass *v12; // esi
  TabCameoListClass v13; // eax
  int v14; // [esp+14h] [ebp-8h]

  v4 = 0; /*0x6a8717*/
  result = *((_DWORD *)this + 21) + 1; /*0x6a871f*/
  *((_DWORD *)this + 21) = result; /*0x6a8721*/
  if ( result > 0 ) /*0x6a8726*/
  {
    for ( i = (int *)(this + 22); ; i += 13 ) /*0x6a872c*/
    {
      v7 = a2; /*0x6a8734*/
      if ( RadarClass::GetBlip(a2, a3, i[1], *i) ) /*0x6a8742*/
        break; /*0x6a8742*/
      result = *((_DWORD *)this + 21); /*0x6a874b*/
      if ( ++v4 >= result ) /*0x6a8754*/
        return result; /*0x6a8754*/
    }
    v8 = *((_DWORD *)this + 21) - 1; /*0x6a8763*/
    if ( v8 > v4 ) /*0x6a8766*/
    {
      v9 = 13 * v8; /*0x6a876b*/
      v10 = v8 - v4; /*0x6a876e*/
      v11 = this + v9 + 22; /*0x6a8770*/
      do /*0x6a8783*/
      {
        --v10; /*0x6a877e*/
        qmemcpy(v11, &v11[-13], 0x34u); /*0x6a877f*/
        v11 -= 13; /*0x6a8781*/
      }
      while ( v10 ); /*0x6a8783*/
      v7 = a2; /*0x6a8785*/
    }
    v12 = this + 13 * v4; /*0x6a8798*/
    v12[23] = (TabCameoListClass)v7; /*0x6a879b*/
    v12[22] = (TabCameoListClass)a3; /*0x6a879e*/
    if ( v7 == 7 ) /*0x6a87a1*/
      v12[24] = (TabCameoListClass)GetHouseTechLevel(7, a3); /*0x6a87aa*/
    v12[25] = 0; /*0x6a87b3*/
    *((_DWORD *)this + 12 * v4 + v4 + 26) = 0; /*0x6a87bd*/
    v12[27] = 0; /*0x6a87c0*/
    v13 = *(TabCameoListClass *)&stru_A8EB00.?[416]; /*0x6a87c3*/
    v12[32] = 0; /*0x6a87c8*/
    v12[29] = v13; /*0x6a87ce*/
    v12[30] = (TabCameoListClass)v14; /*0x6a87d4*/
    v12[31] = 0; /*0x6a87d7*/
    v12[34] = 0; /*0x6a87da*/
    return v14; /*0x6a87d0*/
  }
  return result; /*0x6a8756*/
}



// ==== 0x006A87F0  ObjectClass::method_6A87F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6A87F0(ObjectClass *this, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int *v6; // eax

  v4 = this->customSound_controller[1]; /*0x6a87f5*/
  if ( v4 > 75 ) /*0x6a87fb*/
    return 0; /*0x6a8857*/
  v5 = 0; /*0x6a8805*/
  if ( v4 > 0 ) /*0x6a8809*/
  {
    v6 = &this->customSound_controller[2]; /*0x6a880b*/
    while ( v6[1] != a2 || *v6 != a3 ) /*0x6a8815*/
    {
      ++v5; /*0x6a8817*/
      v6 += 13; /*0x6a8818*/
      if ( v5 >= v4 ) /*0x6a881d*/
        goto LABEL_7; /*0x6a881d*/
    }
    return 0; /*0x6a8815*/
  }
LABEL_7:
  if ( !dword_A8E7AC && a2 != 31 ) /*0x6a882b*/
    VoxClass::FindAndPlay(&stru_83FA64, -1); /*0x6a8837*/
  TabCameoListClass::AddCameo_ReplaceItAll((TabCameoListClass *)this, a2, a3); /*0x6a8840*/
  LOBYTE(this->ambientSoundController[0]) = 1; /*0x6a8848*/
  g_CameoRenderFlag = 1; /*0x6a884c*/
  return 1; /*0x6a8847*/
}



// ==== 0x006A89E0  ObjectClass::method_6A89E0  this=ObjectClass  sig=csp ====
char __thiscall sub_6A89E0(ObjectClass *this, char a2)
{
  int v2; // eax
  int v3; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // kr04_4
  ObjectClass *v8; // eax
  void *NeedsSaveOrLink; // [esp+4h] [ebp-4h]

  NeedsSaveOrLink = dword_A8B230[374].NeedsSaveOrLink; /*0x6a89f2*/
  v2 = 26; /*0x6a89f8*/
  if ( NeedsSaveOrLink ) /*0x6a89fd*/
    v2 = 18; /*0x6a89ff*/
  v3 = (g_DSurface_ViewBounds - g_SidebarBounds - v2 + g_DSurface_SidebarBounds - 7) / 50; /*0x6a8a43*/
  if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a8a45*/
    v3 = 1; /*0x6a8a47*/
  if ( a2 ) /*0x6a8a52*/
  {
    if ( this->ambientSoundController[2] ) /*0x6a8a58*/
    {
      this->ambientSoundController[3] -= v3; /*0x6a8a72*/
      return 1; /*0x6a8a76*/
    }
    else
    {
      return 0; /*0x6a8a62*/
    }
  }
  else
  {
    v5 = 26; /*0x6a8a85*/
    if ( NeedsSaveOrLink ) /*0x6a8a8a*/
      v5 = 18; /*0x6a8a8c*/
    v6 = (g_DSurface_ViewBounds - g_SidebarBounds - v5 + g_DSurface_SidebarBounds - 7) / 50; /*0x6a8aaa*/
    if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a8aac*/
    {
      v7 = v6; /*0x6a8ab7*/
      v8 = this; /*0x6a8ab9*/
      if ( this->ambientSoundController[2] + v7 / 2 >= dword_884CF8 ) /*0x6a8ac4*/
        return 0; /*0x6a8acf*/
    }
    else
    {
      if ( 2 * (v6 + this->ambientSoundController[2]) >= this->customSound_controller[1] ) /*0x6a8ae2*/
        return 0; /*0x6a8aed*/
      v8 = this; /*0x6a8af0*/
    }
    v8->ambientSoundController[3] += v3; /*0x6a8afb*/
    return 1; /*0x6a8aff*/
  }
}



// ==== 0x006A8B30  SidebarClass::UpdateCameos  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::UpdateCameos(char *this, int a2, int a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edx
  _DWORD *v14; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // ebp
  _DWORD *v18; // edi
  _DWORD *v19; // esi
  int Type; // eax
  _DWORD *v21; // ebp
  _DWORD *v22; // esi
  int v23; // esi
  int v24; // eax
  int v25; // eax
  const void *v26; // eax
  char *v27; // esi
  int v28; // edi
  int *v29; // esi
  int v30; // ecx
  wchar_t *v31; // ecx
  int v32; // eax
  int v33; // ecx
  int *v34; // edi
  int v35; // esi
  _DWORD *v36; // eax
  int v37; // eax
  int *v38; // ecx
  int v39; // edx
  int v40; // ebx
  int v41; // edx
  _DWORD *v42; // ecx
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int *v46; // ecx
  int v47; // edx
  int v48; // ebp
  int *v49; // ecx
  int v50; // edx
  int v51; // ebx
  int v52; // eax
  int v53; // eax
  char result; // al
  int v55; // [esp-10h] [ebp-A8h]
  int v56; // [esp-8h] [ebp-A0h]
  char v57; // [esp+13h] [ebp-85h]
  int v58; // [esp+14h] [ebp-84h]
  int v59; // [esp+14h] [ebp-84h]
  int v61; // [esp+20h] [ebp-78h]

  v57 = 0; /*0x6a8b45*/
  if ( this->VisibleRect ) /*0x6a8b3b*/
    goto LABEL_115; /*0x6a8b3b*/
  v4 = this->q048; /*0x6a8b50*/
  if ( v4 ) /*0x6a8b55*/
  {
    v5 = 26; /*0x6a8b66*/
    if ( *((_DWORD *)dword_A8B230 + 3374) ) /*0x6a8b60*/
      v5 = 18; /*0x6a8b6f*/
    v6 = this->q054; /*0x6a8b9f*/
    v7 = (g_DSurface_ViewBounds - v5 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50; /*0x6a8bad*/
    v8 = 2; /*0x6a8baf*/
    v9 = 2 * v7; /*0x6a8bb4*/
    if ( dword_A83D4C == (#375 *)HouseClass_Observer ) /*0x6a8bb7*/
    {
      v6 = dword_884CF8; /*0x6a8bb9*/
      v8 = 1; /*0x6a8bc2*/
      v7 /= 2; /*0x6a8bc7*/
      v9 = v7; /*0x6a8bc9*/
    }
    if ( v6 > v9 ) /*0x6a8bcd*/
    {
      if ( v4 >= 0 ) /*0x6a8bdc*/
      {
        if ( v8 * (v7 + this->q044) < v6 ) /*0x6a8c09*/
        {
          this->q048 = v4 - 1; /*0x6a8c11*/
          this->u32_4C = dword_B0B500; /*0x6a8c1a*/
          this->q0F8 = 1; /*0x6a8c1d*/
          this->VisibleRect = 1; /*0x6a8c21*/
        }
        else
        {
          this->q048 = 0; /*0x6a8c0b*/
        }
      }
      else
      {
        v10 = this->q044; /*0x6a8bde*/
        if ( v10 ) /*0x6a8be3*/
        {
          this->q048 = v4 + 1; /*0x6a8bec*/
          this->q0F8 = 0; /*0x6a8bef*/
          this->VisibleRect = 1; /*0x6a8bf3*/
          this->q044 = v10 - 1; /*0x6a8bf7*/
          this->u32_4C = 0; /*0x6a8bfa*/
        }
        else
        {
          this->q048 = 0; /*0x6a8be5*/
        }
      }
    }
    else
    {
      this->q048 = 0; /*0x6a8bcf*/
    }
  }
  if ( this->VisibleRect ) /*0x6a8c25*/
  {
LABEL_115:
    if ( this->q0F8 ) /*0x6a8c2c*/
    {
      v11 = this->u32_4C - dword_B0B514; /*0x6a8c3e*/
      this->u32_4C = v11; /*0x6a8c40*/
      if ( v11 <= 0 ) /*0x6a8c45*/
      {
        v12 = this->q044; /*0x6a8c47*/
        this->VisibleRect = 0; /*0x6a8c4a*/
        this->u32_4C = 0; /*0x6a8c4f*/
        this->q044 = v12 + 1; /*0x6a8c56*/
      }
    }
    else
    {
      v13 = dword_B0B514 + this->u32_4C; /*0x6a8c63*/
      this->u32_4C = v13; /*0x6a8c65*/
      if ( v13 >= dword_B0B500 ) /*0x6a8c72*/
      {
        this->VisibleRect = 0; /*0x6a8c74*/
        this->u32_4C = 0; /*0x6a8c78*/
      }
    }
    v57 = 1; /*0x6a8c7f*/
  }
  if ( this->q010 != -1 ) /*0x6a8c8c*/
  {
    v14 = this + 8; /*0x6a8c8e*/
    if ( Locomotor::GetSpeed((int *)this + 2) || (v15 = this->q014) == 0 ) /*0x6a8ca5*/
    {
      this->q004 = 0; /*0x6a8d4d*/
    }
    else
    {
      v16 = this->q018 + *(_DWORD *)this; /*0x6a8cb0*/
      this->q004 = 1; /*0x6a8cb2*/
      *(_DWORD *)this = v16; /*0x6a8cb6*/
      v57 = 1; /*0x6a8cc4*/
      *v14 = dword_A8ED84; /*0x6a8cc9*/
      this->q00C = v61; /*0x6a8cd0*/
      this->q004 = v15; /*0x6a8cd3*/
      if ( v16 >= 7 ) /*0x6a8cd6*/
      {
        *v14 = dword_A8ED84; /*0x6a8ce3*/
        this->q00C = v61; /*0x6a8ce5*/
        this->q004 = 0; /*0x6a8ce8*/
        this->q014 = 0; /*0x6a8ceb*/
        *(_DWORD *)this = 0; /*0x6a8cee*/
        this->q010 = -1; /*0x6a8cf0*/
      }
    }
  }
  if ( dword_884B88 > (int)dword_A8ED84 ) /*0x6a8d00*/
    v57 = 1; /*0x6a8d02*/
  if ( this->q038 <= 1u ) /*0x6a8d0c*/
  {
    v17 = 0; /*0x6a8d1a*/
    if ( *((int *)this + 21) > 0 ) /*0x6a8d1e*/
    {
      v18 = this + 88; /*0x6a8d20*/
      do /*0x6a8d23*/
      {
        if ( v18[1] == 31 ) /*0x6a8d27*/
        {
          if ( *(_DWORD *)(*((_DWORD *)dword_A83D4C + 150) + 4 * *v18) && (unsigned __int8)SuperClass::ShouldFlashTab() ) /*0x6a8d3e*/
            goto LABEL_53; /*0x6a8d45*/
        }
        else
        {
          v19 = (_DWORD *)v18[3]; /*0x6a8d53*/
          if ( v19 ) /*0x6a8d58*/
          {
            if ( ObjectClass::IsCliffWall((_DWORD *)v18[3]) ) /*0x6a8d5c*/
            {
              Type = AbstractClass::GetType(v19); /*0x6a8d67*/
              if ( Type ) /*0x6a8d6e*/
              {
                if ( (*(int (__thiscall **)(int))(*(_DWORD *)Type + 44))(Type) == 6 ) /*0x6a8d7a*/
                {
LABEL_53:
                  SidebarClass::startButtonFlash( /*0x6a8e85*/
                    10,
                    10 - (int)dword_A8ED84 % 10,
                    ((int)dword_A8ED84 + 10 - (int)dword_A8ED84 % 10) / 10 % 2 == 0);
                  g_CameoRenderFlag = 1; /*0x6a8ea7*/
                  MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x6a8eae*/
                  goto LABEL_44; /*0x6a8eb3*/
                }
              }
            }
          }
        }
        ++v17; /*0x6a8d83*/
        v18 += 13; /*0x6a8d84*/
      }
      while ( v17 < this->q054 ); /*0x6a8d23*/
    }
    SHA1::Reset((int)&stru_B07C48 + 96 * this->q038); /*0x6a8d8b*/
  }
LABEL_44:
  if ( this->q03D )
  {
    v58 = 0; /*0x6a8dad*/
    if ( *((int *)this + 21) > 0 )
    {
      v21 = this + 104; /*0x6a8dbd*/
      do
      {
        v22 = (_DWORD *)*(v21 - 1); /*0x6a8dc6*/
        if ( v22 )
        {
          if ( (unsigned __int8)FactoryClass::HasProgressChanged(*(v21 - 1)) )
          {
            v57 = 1; /*0x6a8de2*/
            if ( ObjectClass::IsCliffWall(v22) )
            {
              v23 = AbstractClass::GetType(v22); /*0x6a8dfb*/
              if ( v23 )
              {
                switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23) )
                {
                  case 1:
                  case 2:
                  case 15:
                    v56 = *(unsigned __int8 *)((*(int (__thiscall **)(int))(*(_DWORD *)v23 + 132))(v23) + 3278); /*0x6a8ed1*/
                    v55 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23); /*0x6a8ed9*/
                    v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 56))(v23); /*0x6a8ee0*/
                    v26 = (const void *)EventClass::Init(v25, 11, v55, -1, v56, &word_B07DD8); /*0x6a8ee8*/
                    if ( dword_A802C8 < 128 ) /*0x6a8ef7*/
                    {
                      qmemcpy(&byte_A802D4[111 * dword_A802D0], v26, 0x6Fu); /*0x6a8f13*/
                      dword_A83A54[dword_A802D0] = timeGetTime(); /*0x6a8f20*/
                      dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x6a8f37*/
                      ++dword_A802C8; /*0x6a8f3d*/
                    }
                    *v21 = 0; /*0x6a8f42*/
                    break; /*0x6a8f42*/
                  case 6:
                    VoxClass::FindAndPlay(unk_83FA80, -1); /*0x6a8e2f*/
                    v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23); /*0x6a8e38*/
                    SidebarClass::registerBuildingType(v24 == 6 ? v23 : 0);
                    break; /*0x6a8e4d*/
                  default:
                    break;
                }
              }
            }
          }
        }
        v21 += 13; /*0x6a8f49*/
        ++v58; /*0x6a8f58*/
      }
      while ( v58 < this->q054 );
    }
  }
  v27 = this; /*0x6a8f64*/
  v28 = 0; /*0x6a8f6a*/
  if ( *((int *)this + 21) > 0 ) /*0x6a8f6f*/
  {
    v29 = (int *)(this + 116); /*0x6a8f79*/
    do /*0x6a9025*/
    {
      if ( *(v29 - 3) == 1 ) /*0x6a8f80*/
      {
        v30 = *(v29 - 4); /*0x6a8f86*/
        if ( v30 && (!*(_DWORD *)(v30 + 56) || *(_BYTE *)(v30 + 112) || (unsigned __int8)SidebarClass::draw()) ) /*0x6a8f99*/
        {
          v31 = dword_A8ED84; /*0x6a8fa2*/
          v29[3] = 0; /*0x6a8fac*/
          *v29 = (int)v31; /*0x6a8faf*/
          v29[1] = v61; /*0x6a8fb5*/
          v29[2] = 0; /*0x6a8fb8*/
          *(v29 - 2) = 0; /*0x6a8fbb*/
        }
        if ( Locomotor::GetSpeed(v29) || (v32 = v29[3]) == 0 ) /*0x6a8fd2*/
        {
          *((_BYTE *)v29 - 4) = 0; /*0x6a9063*/
        }
        else
        {
          v33 = v29[4] + *(v29 - 2); /*0x6a8fde*/
          *((_BYTE *)v29 - 4) = 1; /*0x6a8fe0*/
          *(v29 - 2) = v33; /*0x6a8fe4*/
          v57 = 1; /*0x6a8fef*/
          *v29 = (int)dword_A8ED84; /*0x6a8ff4*/
          v29[1] = v61; /*0x6a8ffa*/
          v29[2] = v32; /*0x6a8ffd*/
          if ( *(v29 - 2) >= 53 ) /*0x6a9006*/
          {
            *v29 = (int)dword_A8ED84; /*0x6a900f*/
            v29[3] = 0; /*0x6a9011*/
            v29[1] = v61; /*0x6a9014*/
            v29[2] = 0; /*0x6a9017*/
          }
        }
      }
      ++v28; /*0x6a901e*/
      v29 += 13; /*0x6a901f*/
    }
    while ( v28 < this->q054 ); /*0x6a9025*/
    v27 = this; /*0x6a902b*/
  }
  if ( v27[28] && dword_A83D4C == (#375 *)HouseClass_Observer )
  {
    v59 = 0; /*0x6a9050*/
    if ( dword_884CF8 > 0 )
    {
      v34 = Value; /*0x6a905c*/
      do
      {
        v35 = *(v34 - 40); /*0x6a906b*/
        if ( v35 )
        {
          if ( byte_884CF4 ) /*0x6a9080*/
          {
            if ( dword_A8B238[0] == 4 ) /*0x6a9089*/
            {
              v36 = (_DWORD *)SidebarClass::FindProductionData(v35 + 90154); /*0x6a9091*/
              if ( v36 ) /*0x6a9098*/
              {
                *v34 = v36[7]; /*0x6a909e*/
                v34[8] = v36[4]; /*0x6a90a3*/
                v34[16] = v36[2]; /*0x6a90a9*/
                v34[24] = v36[3]; /*0x6a90af*/
                v34[32] = v36[8]; /*0x6a90b5*/
                v34[40] = v36[12]; /*0x6a90be*/
                __3_YAXPAX_Z(v36); /*0x6a90c4*/
                v57 = 1; /*0x6a90cc*/
              }
            }
          }
          v37 = 0; /*0x6a90d7*/
          v38 = (int *)(v35 + 21476); /*0x6a90d9*/
          v39 = 20; /*0x6a90db*/
          do /*0x6a90e8*/
          {
            v40 = *v38++; /*0x6a90e0*/
            v37 += v40; /*0x6a90e5*/
            --v39; /*0x6a90e7*/
          }
          while ( v39 ); /*0x6a90e8*/
          v41 = 20; /*0x6a90f0*/
          v42 = (_DWORD *)(v35 + 21560); /*0x6a90f5*/
          do /*0x6a90fd*/
          {
            v37 += *v42++; /*0x6a90f7*/
            --v41; /*0x6a90fc*/
          }
          while ( v41 ); /*0x6a90fd*/
          if ( *(v34 - 32) != v37 /*0x6a912b*/
            || *(v34 - 24) != *(_DWORD *)(v35 + 744)
                            + *(_DWORD *)(v35 + 752)
                            + *(_DWORD *)(v35 + 756)
                            + *(_DWORD *)(v35 + 760) )
          {
            goto LABEL_97; /*0x6a912b*/
          }
          v43 = (*(int (__stdcall **)(int))(*(_DWORD *)(v35 + 36) + 24))(v35 + 36); /*0x6a9134*/
          if ( v43 < 0 ) /*0x6a9139*/
            v43 = 0; /*0x6a913b*/
          if ( *(v34 - 16) != v43
            || (v35 != HouseClass_Observer
              ? (!*(_BYTE *)(v35 + 501)
               ? (v44 = *((_DWORD *)dword_B054D4 + *(_DWORD *)(v35 + 90196)))
               : (v44 = FindBuildingAnimByName(aGrey, 1)))
              : (v44 = FindBuildingAnimByName(g_INI_Key_LightGrey, 1)),
                *(v34 - 8) != v44) )
          {
LABEL_97:
            v57 = 1; /*0x6a918e*/
            v45 = 0; /*0x6a9193*/
            v46 = (int *)(v35 + 21476); /*0x6a9195*/
            v47 = 20; /*0x6a9197*/
            do /*0x6a91a4*/
            {
              v48 = *v46++; /*0x6a919c*/
              v45 += v48; /*0x6a91a1*/
              --v47; /*0x6a91a3*/
            }
            while ( v47 ); /*0x6a91a4*/
            v49 = (int *)(v35 + 21560); /*0x6a91a6*/
            v50 = 20; /*0x6a91a8*/
            do /*0x6a91b5*/
            {
              v51 = *v49++; /*0x6a91ad*/
              v45 += v51; /*0x6a91b2*/
              --v50; /*0x6a91b4*/
            }
            while ( v50 ); /*0x6a91b5*/
            *(v34 - 32) = v45; /*0x6a91b7*/
            *(v34 - 24) = *(_DWORD *)(v35 + 744) /*0x6a91d8*/
                        + *(_DWORD *)(v35 + 752)
                        + *(_DWORD *)(v35 + 756)
                        + *(_DWORD *)(v35 + 760);
            v52 = (*(int (__stdcall **)(int))(*(_DWORD *)(v35 + 36) + 24))(v35 + 36); /*0x6a91e2*/
            if ( v52 < 0 ) /*0x6a91e7*/
              v52 = 0; /*0x6a91e9*/
            *(v34 - 16) = v52; /*0x6a91eb*/
            if ( v35 == HouseClass_Observer ) /*0x6a91f5*/
            {
              v53 = FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x6a9201*/
            }
            else if ( *(_BYTE *)(v35 + 501) ) /*0x6a9208*/
            {
              v53 = FindBuildingAnimByName(aGrey, 1); /*0x6a921c*/
            }
            else
            {
              v53 = *((_DWORD *)dword_B054D4 + *(_DWORD *)(v35 + 90196)); /*0x6a922f*/
            }
            *(v34 - 8) = v53; /*0x6a9232*/
          }
        }
        ++v34; /*0x6a9240*/
        ++v59; /*0x6a9245*/
      }
      while ( v59 < dword_884CF8 );
    }
    byte_884CF4 = 0; /*0x6a9251*/
  }
  result = v57; /*0x6a9258*/
  if ( v57 ) /*0x6a925e*/
  {
    byte_884B8E = 1; /*0x6a926b*/
    byte_880D68[3988 * dword_884B84] = 1; /*0x6a9283*/
    MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x6a928b*/
    this->q03C = 1; /*0x6a929a*/
    MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x6a929e*/
    g_CameoRenderFlag = 1; /*0x6a92a7*/
    g_TooltipActive = 1; /*0x6a92ae*/
    return v57; /*0x6a92a3*/
  }
  return result; /*0x6a92b5*/
}



// ==== 0x006A92E0  ObjectClass::GetSidebarTooltip  this=ObjectClass  sig=csp ====
wchar_t *__thiscall ObjectClass::GetSidebarTooltip(ObjectClass *this, int a2)
{
  int v2; // eax
  int v3; // edx
  char *v4; // eax
  int v5; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // edx
  wchar_t *StringCSF; // eax
  wchar_t *v11; // eax
  int v12; // eax
  wchar_t *v13; // ecx
  const wchar_t *v14; // [esp-8h] [ebp-Ch]
  const wchar_t *v15; // [esp-4h] [ebp-8h]
  int v16; // [esp-4h] [ebp-8h]

  v2 = a2 + 2 * this->ambientSoundController[2]; /*0x6a92e8*/
  if ( !byte_A8E9A0 ) /*0x6a92f3*/
    return 0; /*0x6a92f3*/
  v3 = this->customSound_controller[1]; /*0x6a92f9*/
  if ( v2 >= v3 || v3 >= 75 ) /*0x6a9307*/
    return 0; /*0x6a9307*/
  v4 = (char *)this + 52 * v2; /*0x6a9313*/
  v5 = *((_DWORD *)v4 + 23); /*0x6a9316*/
  if ( v5 == 31 ) /*0x6a931c*/
    return *(wchar_t **)(*((_DWORD *)dword_A8E334 + *((_DWORD *)v4 + 22)) + 96); /*0x6a932e*/
  v7 = (_DWORD *)TechnoTypeClass::GetByTypeAndIndex(v5, *((_DWORD *)v4 + 22)); /*0x6a9334*/
  v8 = v7; /*0x6a9339*/
  if ( !v7 ) /*0x6a933d*/
    return 0; /*0x6a93e2*/
  v9 = *v7; /*0x6a9348*/
  if ( byte_884B8C ) /*0x6a9354*/
  {
    v15 = (const wchar_t *)(*(int (__thiscall **)(_DWORD *, Object *))(v9 + 132))(v7, dword_A83D4C); /*0x6a935c*/
    StringCSF = GetStringCSF((wchar_t *)stru_83FA64.Type, 0, g_Str_File_Sidebar_CPP, 3180); /*0x6a936e*/
    swprintf(&SidebarClass_TooltipBuffer, (const size_t)StringCSF, v15); /*0x6a9379*/
  }
  else
  {
    v16 = (*(int (__thiscall **)(_DWORD *, Object *))(v9 + 132))(v7, dword_A83D4C); /*0x6a938c*/
    v14 = (const wchar_t *)v8[24]; /*0x6a938d*/
    v11 = GetStringCSF((wchar_t *)&stru_83FA64.RussianVoice[3], 0, g_Str_File_Sidebar_CPP, 3182); /*0x6a939f*/
    swprintf(&SidebarClass_TooltipBuffer, (const size_t)v11, v14, v16); /*0x6a93aa*/
  }
  v12 = wcslen(&SidebarClass_TooltipBuffer); /*0x6a93b7*/
  if ( v12 > 0 ) /*0x6a93c1*/
  {
    v13 = &SidebarClass_TooltipBuffer; /*0x6a93c3*/
    do /*0x6a93d7*/
    {
      if ( *v13 == 32 ) /*0x6a93cc*/
        *v13 = 10; /*0x6a93ce*/
      ++v13; /*0x6a93d3*/
      --v12; /*0x6a93d6*/
    }
    while ( v12 ); /*0x6a93d7*/
  }
  return &SidebarClass_TooltipBuffer; /*0x6a9327*/
}



// ==== 0x006A93F0  ObjectClass::method_6A93F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6A93F0(ObjectClass *this)
{
  int v2; // eax
  int v3; // esi
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ebp

  LOBYTE(this->?) = 1; /*0x6a93f8*/
  v2 = 26; /*0x6a9408*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a9400*/
    v2 = 18; /*0x6a940f*/
  v3 = 0; /*0x6a942f*/
  v4 = g_DSurface_ViewBounds - g_SidebarBounds - v2 + g_DSurface_SidebarBounds - 7; /*0x6a9431*/
  v5 = (unsigned int)((unsigned __int64)(1374389535LL * v4) >> 32) >> 31; /*0x6a943c*/
  v6 = 2 * (v4 / 50); /*0x6a9443*/
  if ( v6 > 0 ) /*0x6a9447*/
  {
    do /*0x6a9494*/
    {
      Hash::Reset((LinkClass *)(56 * (v3 + 60 * (int)this->attachedBomb) + 11566720)); /*0x6a9465*/
      LOBYTE(v5) = Hash::InsertOrdered( /*0x6a948c*/
                     (GScreenClass *)&stru_87F5F0.__pad_58[416],
                     56 * (v3 + 60 * (int)this->attachedBomb) + 11566720);
      ++v3; /*0x6a9491*/
    }
    while ( v3 < v6 ); /*0x6a9494*/
  }
  g_CameoRenderFlag = 1; /*0x6a9498*/
  return v5; /*0x6a9496*/
}



// ==== 0x006A94F0  ObjectClass::SmallFunc_6A94F0  this=ObjectClass  sig=csp ====
int __thiscall SmallFunc_6A94F0(ObjectClass *this, int a2)
{
  int result; // eax
  ObjectClass *v4; // ecx
  int v5; // ebx

  result = 0; /*0x6a94f9*/
  v4 = (ObjectClass *)this->customSound_controller[13 * a2 + 5]; /*0x6a9501*/
  if ( v4 ) /*0x6a950a*/
    result = ObjectClass::GetMember09(v4); /*0x6a950c*/
  if ( *((_DWORD *)&this->bombVisible + 12 * a2 + a2) == 1 ) /*0x6a951d*/
  {
    v5 = *(_DWORD *)&this->alignmentPadding69[52 * a2 + 3]; /*0x6a951f*/
    if ( v5 > result ) /*0x6a9524*/
      return (v5 + result) / 2; /*0x6a952b*/
  }
  return result; /*0x6a952d*/
}



// ==== 0x006A9540  Sidebar::UpdateProductionDisplay  this=Sidebar  sig=csp ====
char __userpurge Sidebar_UpdateProductionDisplay@<al>(int a1@<ecx>, wchar_t a2@<di>, char a3)
{
  char result; // al
  int v5; // eax
  #375 *v6; // ebx
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // ebp
  int v15; // esi
  char v16; // bl
  int v17; // ebp
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  _DWORD *v23; // ebx
  char ShouldDisableCameo; // al
  int Member09; // eax
  _DWORD *v26; // ecx
  int v27; // ecx
  _DWORD *v28; // edi
  int v29; // eax
  int v30; // ecx
  unsigned int v31; // edi
  int v32; // eax
  int v33; // edx
  int v34; // edi
  int v35; // eax
  int v36; // eax
  const wchar_t *v37; // ebx
  int v38; // ecx
  _DWORD *BoundingRect; // eax
  int *v40; // eax
  wchar_t *String; // ebp
  int *v42; // eax
  int *v43; // eax
  int v44; // ebp
  int v45; // ebx
  int v46; // edi
  int v47; // esi
  int v48; // eax
  int v49; // ... [31824 chars total]



// ==== 0x006AA600  SidebarClass::UpdateProduction  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::UpdateProduction(int this)
{
  int v2; // eax
  int v3; // ebx
  int *v4; // eax
  _DWORD *v5; // eax
  SidebarClass *v6; // esi
  int v7; // edx
  int v8; // eax
  int *v9; // esi
  unsigned __int8 *v10; // ebx
  int v11; // eax
  char *v12; // eax
  int v13; // eax
  char *v14; // eax
  char *v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // ecx
  int v20; // eax
  bool v21; // cc
  int v22; // esi
  int *v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  char *v28; // ecx
  int v29; // ecx
  int v30; // edx
  char *v31; // esi
  _DWORD *v32; // ecx
  int v33; // esi
  int v34; // kr04_4
  int v35; // eax
  int v36; // edx
  char v38; // [esp-8h] [ebp-15Ch]
  int v39; // [esp+10h] [ebp-144h]
  char *v40; // [esp+10h] [ebp-144h]
  int *v41; // [esp+10h] [ebp-144h]
  char v42; // [esp+16h] [ebp-13Eh]
  char v43; // [esp+17h] [ebp-13Dh]
  int *v44; // [esp+18h] [ebp-13Ch]
  _DWORD *v45; // [esp+1Ch] [ebp-138h]
  char *v46; // [esp+1Ch] [ebp-138h]
  char *Src; // [esp+20h] [ebp-134h]
  int v48; // [esp+24h] [ebp-130h]
  int v49; // [esp+28h] [ebp-12Ch]
  _DWORD *v50; // [esp+2Ch] [ebp-128h]
  int v51; // [esp+30h] [ebp-124h]
  _DWORD v52[16]; // [esp+34h] [ebp-120h] BYREF
  char v53[112]; // [esp+74h] [ebp-E0h] BYREF
  char v54[112]; // [esp+E4h] [ebp-70h] BYREF

  if ( stru_A8EB00.?[391] || !*(_DWORD *)(this + 84) ) /*0x6aa617*/
    return 0; /*0x6aaca5*/
  v43 = 0; /*0x6aa629*/
  v2 = 26; /*0x6aa634*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6aa62e*/
    v2 = 18; /*0x6aa63d*/
  v3 = 2 * ((g_DSurface_ViewBounds - v2 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50); /*0x6aa670*/
  v51 = v3; /*0x6aa672*/
  v4 = (int *)__2_YAPAXI_Z(104 * ((g_DSurface_ViewBounds - v2 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50) + 4); /*0x6aa684*/
  if ( v4 ) /*0x6aa68e*/
  {
    *v4 = v3; /*0x6aa690*/
    v5 = v4 + 1; /*0x6aa695*/
    v45 = v5; /*0x6aa69a*/
    if ( v3 - 1 >= 0 ) /*0x6aa69e*/
    {
      v6 = (SidebarClass *)(v5 + 5); /*0x6aa6a1*/
      v39 = v3; /*0x6aa6a4*/
      do /*0x6aa6bb*/
      {
        SidebarClass::initButtons(v6); /*0x6aa6aa*/
        v6 = (SidebarClass *)((char *)v6 + 52); /*0x6aa6b3*/
        --v39; /*0x6aa6b7*/
      }
      while ( v39 ); /*0x6aa6bb*/
      v5 = v45; /*0x6aa6bd*/
    }
    v46 = (char *)v5; /*0x6aa6c1*/
  }
  else
  {
    v46 = 0; /*0x6aa6c7*/
  }
  v7 = 0; /*0x6aa6cb*/
  if ( v3 > 0 ) /*0x6aa6cf*/
  {
    v40 = v46; /*0x6aa6d5*/
    do /*0x6aa70f*/
    {
      v8 = v7 + 2 * *(_DWORD *)(this + 68); /*0x6aa6df*/
      if ( v8 < *(_DWORD *)(this + 84) ) /*0x6aa6e4*/
      {
        v3 = v51; /*0x6aa6ed*/
        qmemcpy(v40, (const void *)(this + 52 * v8 + 88), 0x34u); /*0x6aa6fd*/
      }
      ++v7; /*0x6aa705*/
      v40 += 52; /*0x6aa70b*/
    }
    while ( v7 < v3 ); /*0x6aa70f*/
  }
  v42 = 0; /*0x6aa714*/
  v49 = 0; /*0x6aa71b*/
  if ( *(int *)(this + 84) > 0 ) /*0x6aa71f*/
  {
    v9 = (int *)(this + 88); /*0x6aa725*/
    v48 = 52; /*0x6aa734*/
    v41 = (int *)(this + 88); /*0x6aa73c*/
    Src = (char *)(this + 140); /*0x6aa740*/
    v44 = (int *)(this + 92); /*0x6aa744*/
    v50 = (_DWORD *)(this + 100); /*0x6aa748*/
    while ( 1 ) /*0x6aa759*/
    {
      v10 = (unsigned __int8 *)TechnoTypeClass::GetByTypeAndIndex(*v44, *v9); /*0x6aa759*/
      if ( v10 ) /*0x6aa75d*/
      {
        v11 = (*(int (__thiscall **)(unsigned __int8 *, int, _DWORD, _DWORD, Object *))(*(_DWORD *)v10 + 148))( /*0x6aa76d*/
                v10,
                1,
                0,
                0,
                dword_A83D4C);
        if ( !v11 || !HouseClass::CanBuild(*(HouseClass **)(v11 + 540), (int)v10, 0, 1) ) /*0x6aa781*/
          goto LABEL_25; /*0x6aa788*/
      }
      else if ( (unsigned int)*v9 >= *(_DWORD *)&dword_A83D4C->__pad_140[292] /*0x6aa7ab*/
             || !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)&dword_A83D4C->__pad_140[280] + 4 * *v9) + 109) )
      {
LABEL_25:
        if ( *v50 ) /*0x6aa7ba*/
        {
          v12 = EventClass::AddEventEx(v53, (int)dword_A83D4C->Object_field_0x30, 0x10u, *v44, *v9, v10[3278]); /*0x6aa7e7*/
          if ( (int)stru_A80220.lineTrailer < 128 ) /*0x6aa7f6*/
          {
            qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v12, 0x6Fu); /*0x6aa812*/
            v9 = v41; /*0x6aa823*/
            dword_A83A54[dword_A802D0] = timeGetTime(); /*0x6aa827*/
            dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x6aa83e*/
            ++stru_A80220.lineTrailer; /*0x6aa844*/
          }
          if ( *v44 == 7 || *v44 == 6 ) /*0x6aa859*/
          {
            *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x6aa861*/
            *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x6aa867*/
            *(_DWORD *)&stru_87F5F0.__pad_E12[1426] = -1; /*0x6aa86d*/
            Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x6aa877*/
          }
        }
        if ( v10 ) /*0x6aa87e*/
        {
          v38 = v10[3278]; /*0x6aa88d*/
          v13 = (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)v10 + 44))(v10); /*0x6aa890*/
          if ( HouseClass::GetBuildLimit((HouseClass *)dword_A83D4C, v13, v38, 0) ) /*0x6aa89a*/
          {
            v14 = EventClass::AddEventEx(v54, (int)dword_A83D4C->Object_field_0x30, 0x2Eu, *v44, *v9, v10[3278]); /*0x6aa8cd*/
            if ( (int)stru_A80220.lineTrailer < 128 ) /*0x6aa8dc*/
            {
              qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v14, 0x6Fu); /*0x6aa8f8*/
              v9 = v41; /*0x6aa909*/
              dword_A83A54[dword_A802D0] = timeGetTime(); /*0x6aa90d*/
              dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x6aa924*/
              ++stru_A80220.lineTrailer; /*0x6aa92a*/
            }
          }
        }
        if ( v51 > 0 ) /*0x6aa937*/
        {
          v15 = v46; /*0x6aa939*/
          v16 = v51; /*0x6aa93d*/
          do /*0x6aa99b*/
          {
            if ( *(_DWORD *)v15 == *v9 && *((_DWORD *)v15 + 1) == v9[1] ) /*0x6aa94f*/
            {
              memset(v52, 0, 16); /*0x6aa957*/
              v52[5] = 0; /*0x6aa967*/
              v52[7] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6aa96b*/
              v52[9] = 0; /*0x6aa96f*/
              v52[10] = 0; /*0x6aa973*/
              LOBYTE(v52[6]) = 0; /*0x6aa982*/
              v52[11] = 1; /*0x6aa987*/
              qmemcpy(v15, v52, 0x34u); /*0x6aa98f*/
              v9 = v41; /*0x6aa991*/
            }
            v15 += 52; /*0x6aa997*/
            --v16; /*0x6aa99a*/
          }
          while ( v16 ); /*0x6aa99b*/
        }
        v17 = *(_DWORD *)(this + 84); /*0x6aa99d*/
        if ( v17 > 1 && v49 < v17 - 1 ) /*0x6aa9ae*/
          memcpy(v9, Src, 52 * v17 - v48); /*0x6aa9c6*/
        v42 = 1; /*0x6aa9d1*/
        v18 = *(_DWORD *)(this + 84) - 1; /*0x6aa9d6*/
        v43 = 1; /*0x6aa9d7*/
        v19 = (_DWORD *)(this + 52 * v18); /*0x6aa9e2*/
        v19[25] = 0; /*0x6aa9ea*/
        v19[22] = 0; /*0x6aa9ed*/
        v19[23] = 0; /*0x6aa9f4*/
        v19[24] = 0; /*0x6aa9f7*/
        *(_DWORD *)(this + 4 * (v18 + 4 * (3 * v18 + 6) + 2)) = 0; /*0x6aa9fd*/
        v19[27] = 0; /*0x6aaa01*/
        v19[29] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6aaa0b*/
        v20 = v52[14]; /*0x6aaa0d*/
        v19[32] = 0; /*0x6aaa11*/
        v19[30] = v20; /*0x6aaa17*/
        v19[31] = 0; /*0x6aaa1a*/
        v19[34] = 0; /*0x6aaa25*/
        --*(_DWORD *)(this + 84); /*0x6aaa37*/
        --v49; /*0x6aaa3e*/
        v48 -= 52; /*0x6aaa46*/
        *(_BYTE *)(this + 60) = 1; /*0x6aaa54*/
        v50 -= 13; /*0x6aaa58*/
        v44 -= 13; /*0x6aaa5c*/
        Src -= 52; /*0x6aaa60*/
        v9 -= 13; /*0x6aaa64*/
      }
      v48 += 52; /*0x6aaa6d*/
      v50 += 13; /*0x6aaa85*/
      v9 += 13; /*0x6aaa91*/
      v21 = ++v49 < *(_DWORD *)(this + 84); /*0x6aaa97*/
      v44 += 13; /*0x6aaa9d*/
      Src += 52; /*0x6aaaa1*/
      v41 = v9; /*0x6aaaa5*/
      if ( !v21 ) /*0x6aaaa9*/
      {
        v3 = v51; /*0x6aaaaf*/
        break; /*0x6aaaaf*/
      }
    }
  }
  if ( dword_880D80[997 * *(_DWORD *)(this + 56)] <= 0 ) /*0x6aaaca*/
  {
    DialogControl::Show((GadgetClass *)(&stru_B07C48 + 8 * *(_DWORD *)(this + 56))); /*0x6aaae7*/
    v22 = 0; /*0x6aaaec*/
    v23 = dword_880D80; /*0x6aaaee*/
    v24 = 0; /*0x6aaaf3*/
    while ( *v23 <= 0 ) /*0x6aaaf7*/
    {
      v24 += 3988; /*0x6aaaf9*/
      ++v22; /*0x6aaafe*/
      v23 += 997; /*0x6aaaff*/
      if ( v24 >= 15952 ) /*0x6aab0a*/
        goto LABEL_54; /*0x6aab0a*/
    }
    if ( v22 == -1 ) /*0x6aab11*/
    {
LABEL_54:
      Tactical::UpdateUIVisibility((Tactical *)&stru_87F5F0.__pad_58[416]); /*0x6aab13*/
      if ( dword_B0B478 ) /*0x6aab24*/
      {
        dword_884B80 = -1; /*0x6aab2a*/
        dword_884B7C = *((__int16 *)dword_B0B478 + 3); /*0x6aab38*/
      }
      goto LABEL_58; /*0x6aab3e*/
    }
    if ( v22 != dword_884B84 ) /*0x6aab4a*/
    {
      GadgetClass::Hide((GadgetClass *)(&stru_B07C48 + 8 * dword_884B84)); /*0x6aab58*/
      v25 = 3988 * dword_884B84 + 8916268; /*0x6aab6f*/
      *(_BYTE *)(v25 + 28) = 0; /*0x6aab76*/
      SidebarClass::sortCameoList((SidebarClass *)v25); /*0x6aab7a*/
      dword_884B84 = v22; /*0x6aab82*/
      GadgetClass::Show((GadgetClass *)(&stru_B07C48 + 8 * v22)); /*0x6aab91*/
      v26 = 3988 * dword_884B84 + 8916268; /*0x6aaba8*/
      *(_BYTE *)(v26 + 28) = 1; /*0x6aabaf*/
      SidebarClass::RefreshCameoGrid((SidebarClass *)v26); /*0x6aabb3*/
      Tactical::UpdateUIVisibility((Tactical *)&stru_87F5F0.__pad_58[416]); /*0x6aabbd*/
      g_CameoRenderFlag = 1; /*0x6aabc2*/
    }
  }
  else
  {
    Tactical::UpdateUIVisibility((Tactical *)&stru_87F5F0.__pad_58[416]); /*0x6aaad1*/
  }
LABEL_58:
  if ( v43 ) /*0x6aabcf*/
  {
    v27 = 0; /*0x6aabd5*/
    if ( v3 <= 0 ) /*0x6aabd9*/
      goto LABEL_79; /*0x6aabd9*/
    v28 = v46; /*0x6aabe3*/
    while ( !*(_DWORD *)v28 && !*((_DWORD *)v28 + 1) ) /*0x6aabec*/
    {
      ++v27; /*0x6aabee*/
      v28 += 52; /*0x6aabef*/
      if ( v27 >= v3 ) /*0x6aabf4*/
        goto LABEL_79; /*0x6aabf4*/
    }
    v29 = *(_DWORD *)(this + 84); /*0x6aabf8*/
    if ( v29 && (v30 = 0, v29 > 0) ) /*0x6aac03*/
    {
      v31 = &v46[52 * v27]; /*0x6aac0b*/
      v32 = (_DWORD *)(this + 88); /*0x6aac14*/
      while ( *v32 != *(_DWORD *)v31 || v32[1] != *((_DWORD *)v31 + 1) ) /*0x6aac25*/
      {
        ++v30; /*0x6aac2a*/
        v32 += 13; /*0x6aac2b*/
        if ( v30 >= *(_DWORD *)(this + 84) ) /*0x6aac30*/
          goto LABEL_79; /*0x6aac30*/
      }
      v33 = (v27 - v30) / -2 + *(_DWORD *)(this + 68); /*0x6aac44*/
      v34 = *(_DWORD *)(this + 84) - v51; /*0x6aac4e*/
      *(_DWORD *)(this + 68) = v33; /*0x6aac50*/
      v35 = v34 / 2; /*0x6aac53*/
      v36 = v33; /*0x6aac57*/
      if ( v33 >= v34 / 2 ) /*0x6aac59*/
        v36 = v34 / 2; /*0x6aac5b*/
      if ( v36 >= 0 ) /*0x6aac5f*/
      {
        if ( v33 < v35 ) /*0x6aac6a*/
          v35 = v33; /*0x6aac6c*/
        *(_DWORD *)(this + 68) = v35; /*0x6aac6e*/
      }
      else
      {
        *(_DWORD *)(this + 68) = 0; /*0x6aac63*/
      }
    }
    else
    {
LABEL_79:
      *(_DWORD *)(this + 68) = 0; /*0x6aac73*/
    }
    g_CameoRenderFlag = 1; /*0x6aac76*/
  }
  if ( v46 ) /*0x6aac85*/
    __3_YAXPAX_Z(v46 - 4); /*0x6aac8f*/
  return v42; /*0x6aac9b*/
}



// ==== 0x006AACE0  ObjectClass::method_6AACE0  this=ObjectClass  sig=csp ====
int __thiscall sub_6AACE0(_DWORD *this, int a2, int a3)
{
  this->fallRate = a2; /*0x6aace8*/
  this->nextObject = a3; /*0x6aaceb*/
  return a2; /*0x6aacee*/
}



// ==== 0x006AAD00  SelectClass_StripClass_SidebarClass::ProcessInput  this=SelectClass@StripClass@SidebarClass  sig=csp ====
int __thiscall SidebarClass::ProcessInput(SelectClass_StripClass_SidebarClass *this, int a2, _DWORD *a3, char a4)
{
  MapClass *v4; // esi
  int v6; // eax
  int v8; // esi
  int v9; // ebx
  int v10; // ebp
  ObjectClass *v11; // edx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  char *v15; // eax
  char *v16; // eax
  ControlClass *v17; // edx
  _DWORD *v18; // eax
  char *v19; // eax
  FactoryClass *BuildLimit; // eax
  char *v21; // eax
  _DWORD *Type; // esi
  int v23; // edi
  int v24; // eax
  char *v25; // eax
  int v26; // eax
  VoxClass *v27; // ecx
  ControlClass *v28; // edi
  int v29; // eax
  char *v30; // eax
  int Member09; // eax
  int v32; // esi
  int ControlClass_field_0x0C; // ebp
  ObjectClass *v34; // ecx
  int v35; // ebp
  ObjectClass *v36; // ecx
  int BuildTimeFrames; // eax
  int v38; // edx
  _DWORD *v39; // esi
  int v40; // esi
  int v41; // eax
  char v42; // cl
  char *v43; // eax
  ControlClass *v44; // esi
  _BYTE *v45; // esi
  wchar_t *v46;... [22756 chars total]



// ==== 0x006AB990  SelectClass_StripClass_SidebarClass::select  this=SelectClass@StripClass@SidebarClass  sig=csp ====
int __thiscall SidebarClass::select(SelectClass_StripClass_SidebarClass *this)
{
  int v2; // eax
  int result; // eax

  SidebarClass::updateStripVisibility(*(SidebarClass **)&stru_88732C.__pad_1C[32]); /*0x6ab99a*/
  SidebarClass::initializeStrip(*(SidebarClass **)&stru_88732C.__pad_1C[32], 0); /*0x6ab9a7*/
  v2 = *(_DWORD *)&this->__pad_4[40]; /*0x6ab9ac*/
  LOBYTE(this->field_34) = 1; /*0x6ab9b1*/
  *(_BYTE *)(v2 + 60) = 1; /*0x6ab9bb*/
  result = MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x6ab9be*/
  g_CameoRenderFlag = 1; /*0x6ab9c3*/
  g_TooltipActive = 1; /*0x6ab9c9*/
  return result; /*0x6ab9cf*/
}



// ==== 0x006AB9E0  SelectClass_StripClass_SidebarClass::deselect  this=SelectClass@StripClass@SidebarClass  sig=csp ====
int __thiscall SidebarClass::deselect(SelectClass_StripClass_SidebarClass *this)
{
  int v2; // eax
  int result; // eax

  SidebarClass::updateStripPosition(*(SidebarClass **)&stru_88732C.__pad_1C[32]); /*0x6ab9e9*/
  v2 = *(_DWORD *)&this->__pad_4[40]; /*0x6ab9ee*/
  LOBYTE(this->field_34) = 0; /*0x6ab9f1*/
  *(_BYTE *)(v2 + 60) = 1; /*0x6ab9fc*/
  result = MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x6aba00*/
  g_CameoRenderFlag = 1; /*0x6aba05*/
  g_TooltipActive = 1; /*0x6aba0c*/
  return result; /*0x6aba13*/
}



// ==== 0x006ABA40  SBGadgetClass@SidebarClass::checkHealth  this=SBGadgetClass@SidebarClass  sig=csp ====
int __stdcall ObjectClass::sub_6ABA40(int a1, int a2, int a3)
{
  Mouse::SetCursor((int)&dword_87F7E8, 0, 0); /*0x6aba49*/
  return 1; /*0x6aba53*/
}



// ==== 0x006ABA60  ObjectClass::method_6ABA60  this=ObjectClass  sig=csp ====
char __thiscall sub_6ABA60(ObjectClass *this, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  int *i; // edx

  v4 = this->customSound_controller[1]; /*0x6aba62*/
  v5 = 0; /*0x6aba65*/
  if ( v4 <= 0 ) /*0x6aba6a*/
    return 0; /*0x6aba88*/
  for ( i = &this->customSound_controller[2]; i[1] != a3 || *i != a4; i += 13 ) /*0x6aba74*/
  {
    if ( ++v5 >= v4 ) /*0x6aba86*/
      return 0; /*0x6aba86*/
  }
  this->customSound_controller[13 * v5 + 5] = a2; /*0x6aba9e*/
  BYTE1(this->ambientSoundController[0]) = 1; /*0x6abaa2*/
  LOBYTE(this->ambientSoundController[0]) = 1; /*0x6abaa5*/
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x6abaad*/
  return 1; /*0x6aba88*/
}



// ==== 0x006ABAC0  PlayerClass::HasPlayers  this=PlayerClass  sig=csp ====
int __thiscall PlayerClass::HasPlayers(PlayerClass *this)
{
  return *((_DWORD *)this + 21) > 0; /*0x6abaca*/
}



// ==== 0x006ABAD0  HouseClass::RouteFactoryRemoval  this=HouseClass  sig=csp ====
char __thiscall HouseClass::RouteFactoryRemoval(HouseClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax

  switch ( a2 ) /*0x6abadf*/
  {
    case 15: /*0x6abadf*/
    case 16: /*0x6abadf*/
      v5 = 2; /*0x6abb36*/
      break;
    case 1: /*0x6abadf*/
    case 40: /*0x6abadf*/
    case 2: /*0x6abadf*/
    case 3: /*0x6abadf*/
      v5 = 3; /*0x6abb2f*/
      break;
    case 6: /*0x6abadf*/
    case 7: /*0x6abadf*/
      v5 = GetHouseTechLevel(a2, a3) == 5; /*0x6abb2b*/
      break;
    case 57: /*0x6abadf*/
    case 32: /*0x6abadf*/
    case 31: /*0x6abadf*/
      v5 = 1; /*0x6abb13*/
      break;
    default:
      v5 = -1; /*0x6abb0e*/
      break;
  }
  return HouseClass::RemoveFromProductionQueue((int)&this->builtAircraftTypes[997 * v5 + 131], a4); /*0x6abb59*/
}



// ==== 0x006ABB60  HouseClass::RemoveFromProductionQueue  this=HouseClass  sig=csp ====
char __thiscall sub_6ABB60(int this, _DWORD *a2)
{
  int v3; // esi
  int Type; // eax
  int v5; // eax
  char v6; // bl
  int v7; // ebp
  _DWORD *v8; // esi
  char v11; // [esp+18h] [ebp+4h]

  v3 = this; /*0x6abb69*/
  if ( a2 ) /*0x6abb71*/
  {
    if ( AbstractClass::GetType(a2) ) /*0x6abb75*/
    {
      Type = AbstractClass::GetType(a2); /*0x6abb80*/
      if ( Type ) /*0x6abb87*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)Type + 44))(Type) == 6 ) /*0x6abb93*/
        {
          v5 = AbstractClass::GetType(a2); /*0x6abb97*/
          if ( v5 ) /*0x6abba0*/
            v5 &= -((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6); /*0x6abbb2*/
          Selection::ClearGlobals((void *)v5); /*0x6abbb6*/
          v3 = this; /*0x6abbbb*/
        }
      }
    }
  }
  v6 = 0; /*0x6abbc2*/
  v7 = 0; /*0x6abbc4*/
  v11 = 1; /*0x6abbc6*/
  if ( *(int *)(v3 + 84) <= 0 ) /*0x6abbcd*/
    goto LABEL_19; /*0x6abbcd*/
  v8 = (_DWORD *)(v3 + 100); /*0x6abbcf*/
  do /*0x6abc04*/
  {
    if ( (_DWORD *)*v8 == a2 ) /*0x6abbd6*/
    {
      BuildingClass::AbandonProduction((int)a2); /*0x6abbda*/
      *v8 = 0; /*0x6abbdf*/
      v6 = 1; /*0x6abbe5*/
      v8[1] = 0; /*0x6abbe7*/
    }
    else if ( *v8 ) /*0x6abbd2*/
    {
      v11 = 0; /*0x6abbf4*/
    }
    ++v7; /*0x6abbfd*/
    v8 += 13; /*0x6abbfe*/
  }
  while ( v7 < *(_DWORD *)(this + 84) ); /*0x6abc04*/
  if ( v6 ) /*0x6abc08*/
  {
    *(_BYTE *)(this + 60) = 1; /*0x6abc13*/
    MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x6abc17*/
    g_CameoRenderFlag = 1; /*0x6abc1c*/
  }
  if ( v11 ) /*0x6abc29*/
  {
    v3 = this; /*0x6abc2b*/
LABEL_19:
    *(_BYTE *)(v3 + 61) = 0; /*0x6abc2f*/
  }
  return v6; /*0x6abc33*/
}



// ==== 0x006ABC40  Network_Process_6ABC40  this=-  sig=ida-proto ====
int sub_6ABC40()
{
  int result; // eax

  result = dword_A8B238[0]; /*0x6abc40*/
  if ( dword_A8B238[0] ) /*0x6abc47*/
    dword_A8EDA0 = 8; /*0x6abc49*/
  return result; /*0x6abc53*/
}



// ==== 0x006ABC60  HouseClass::GetStatus  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetStatus(HouseClass *this, int a2)
{
  int v2; // edx

  if ( this == (HouseClass *)15 || this == (HouseClass *)16 ) /*0x6abc68*/
    return 2; /*0x6abcbf*/
  if ( this == (HouseClass *)1 || this == (HouseClass *)40 || this == (HouseClass *)2 || this == (HouseClass *)3 ) /*0x6abc7c*/
    return 3; /*0x6abcb7*/
  if ( this == (HouseClass *)6 || this == (HouseClass *)7 ) /*0x6abc86*/
    return GetHouseTechLevel((int)this, v2) == 5; /*0x6abcb2*/
  if ( this == (HouseClass *)57 || this == (HouseClass *)32 || this == (HouseClass *)31 ) /*0x6abc95*/
    return 1; /*0x6abc9d*/
  return -1; /*0x6abc9a*/
}



// ==== 0x006ABCD0  globalHelper_0ABCD0  this=-  sig=csp ====
int __fastcall sub_6ABCD0(int a1, int a2, int a3)
{
  switch ( a1 ) /*0x6abcd3*/
  {
    case 16: /*0x6abcd3*/
      return 2; /*0x6abcd5*/
    case 40: /*0x6abcd3*/
    case 3: /*0x6abcd3*/
      return 3; /*0x6abcfd*/
    case 7: /*0x6abcd3*/
      return a2 == 5; /*0x6abcf1*/
  }
  return -1; /*0x6abcda*/
}



// ==== 0x006ABD30  SidebarClass::LoadResources  this=SidebarClass  sig=csp ====
char SidebarClass::LoadResources(SidebarClass *this)
{
  PowerClass *v1; // ecx
  int v2; // esi
  int v3; // eax
  GadgetClass *v4; // esi
  int v5; // edi
  int v6; // eax
  LinkClass *v7; // esi
  int v8; // ebx
  int v9; // ebp
  int i; // edi
  char result; // al
  int v12; // edi
  int *v13; // esi
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int j; // esi
  int v18; // edi
  int *v19; // esi
  int v20; // edx
  int v21; // ecx
  int v22; // edx
  int v23; // [esp-4h] [ebp-38h]
  int v24; // [esp-4h] [ebp-38h]
  LinkClass *v25; // [esp+10h] [ebp-24h]
  int v26; // [esp+14h] [ebp-20h]
  int v27; // [esp+18h] [ebp-1Ch] BYREF
  int v28; // [esp+1Ch] [ebp-18h]
  int v29; // [esp+20h] [ebp-14h]
  int v30; // [esp+24h] [ebp-10h]
  int v31; // [esp+28h] [ebp-Ch]
  wchar_t *v32; // [esp+2Ch] [ebp-8h]
  char v33; // [esp+30h] [ebp-4h]

  PowerClass::getDrain(v1); /*0x6abd39*/
  SidebarClass::CalcBounds(0); /*0x6abd42*/
  if ( !dword_B0B468 ) /*0x6abd4e*/
  {
    dword_B0B468 = SearchMIXFile(aSidegdi1Shp, 0); /*0x6abd63*/
    dword_B0B46C = SearchMIXFile(aSidegdi2Shp, 0); /*0x6abd74*/
    dword_B0B470 = SearchMIXFile(aSidegdi3Shp, 0); /*0x6abd7e*/
  }
  Rect_Point::Set(&stru_B07E58, DSurface_SidebarBounds + 16, (int)DSurface_ViewBounds.field_4); /*0x6abd98*/
  VectorClass_ptr_ConvertClass::MarkDirty(&stru_B07E58); /*0x6abda2*/
  v2 = stru_B04A10.ID + stru_B04A10.Height; /*0x6abdb2*/
  v23 = stru_B04A10.ID + stru_B04A10.Height; /*0x6abdbc*/
  if ( LOBYTE(stru_A8EB00.ObjectTypeClass[31]) ) /*0x6abdbd*/
    Rect_Point::Set(&stru_B07E58, DSurface_ViewBounds.field_0 + *(_DWORD *)DSurface_ViewBounds.__pad_8, v23); /*0x6abdce*/
  else
    Rect_Point::Set(&stru_B07E58, 0, v23); /*0x6abdd7*/
  v24 = (*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 32))(DSurface_Sidebar) - v2; /*0x6abdf2*/
  v3 = (*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 31))(DSurface_Sidebar); /*0x6abdf5*/
  ObjectClass::SetPositionXY(&stru_B07E58, v3, v24); /*0x6abdfe*/
  Rect_Point::Set((GadgetClass *)&stru_B0B3A0, dword_B0B4DC, dword_B0B4E0); /*0x6abe15*/
  VectorClass_ptr_ConvertClass::MarkDirty((GadgetClass *)&stru_B0B3A0); /*0x6abe1f*/
  dword_B0B3E4 = -DSurface_SidebarBounds; /*0x6abe37*/
  Rect_Point::Set((GadgetClass *)&stru_B07DF8, dword_B0B3AC + dword_B0B4E4, dword_B0B3B0); /*0x6abe4c*/
  VectorClass_ptr_ConvertClass::MarkDirty((GadgetClass *)&stru_B07DF8); /*0x6abe56*/
  v4 = (GadgetClass *)&stru_B07C48; /*0x6abe60*/
  dword_B07E3C = -DSurface_SidebarBounds; /*0x6abe67*/
  v5 = 0; /*0x6abe6c*/
  do /*0x6abea8*/
  {
    Rect_Point::Set(v4, dword_B0B4E8 + v5 * dword_B0B4F0, dword_B0B4EC); /*0x6abe88*/
    VectorClass_ptr_ConvertClass::MarkDirty(v4); /*0x6abe8f*/
    v4 = (GadgetClass *)((char *)v4 + 96); /*0x6abe99*/
    *(_DWORD *)v4[-1].__pad_0 = -DSurface_SidebarBounds; /*0x6abe9e*/
    ++v5; /*0x6abea1*/
  }
  while ( (int)v4 < (int)&dword_B07DC8 ); /*0x6abea8*/
  Rect_Point::Set((GadgetClass *)&stru_B0B328, dword_B0B508, dword_B0B50C); /*0x6abebd*/
  VectorClass_ptr_ConvertClass::MarkDirty((GadgetClass *)&stru_B0B328); /*0x6abec7*/
  dword_B0B36C = -DSurface_SidebarBounds; /*0x6abedf*/
  Rect_Point::Set((GadgetClass *)&g_SidebarFlag, dword_B0B508 + dword_B0B510, dword_B0B50C); /*0x6abef2*/
  VectorClass_ptr_ConvertClass::MarkDirty((GadgetClass *)&g_SidebarFlag); /*0x6abefc*/
  dword_B0B44C = -DSurface_SidebarBounds; /*0x6abf0f*/
  v6 = 26; /*0x6abf1d*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6abf15*/
    v6 = 18; /*0x6abf24*/
  v7 = &stru_B07E80; /*0x6abf44*/
  v25 = &stru_B07E80; /*0x6abf4d*/
  v8 = (g_DSurface_ViewBounds - v6 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50; /*0x6abf5d*/
  v26 = 2 * v8; /*0x6abf62*/
  do /*0x6abfc2*/
  {
    v9 = 0; /*0x6abf66*/
    if ( v8 > 0 ) /*0x6abf6a*/
    {
      do /*0x6abfac*/
      {
        for ( i = 0; i < 2; ++i ) /*0x6abf6c*/
        {
          (*(void (__thiscall **)(LinkClass *, int, int))(*(_DWORD *)v7->__pad_0 + 100))( /*0x6abf96*/
            v7,
            dword_B0B4F4 + i * dword_B0B4FC,
            v9 * dword_B0B500 + g_SidebarBounds + 1);
          (*(void (__thiscall **)(LinkClass *))(*(_DWORD *)v7->__pad_0 + 72))(v7); /*0x6abf9d*/
          v7 = (LinkClass *)((char *)v7 + 56); /*0x6abfa1*/
        }
        ++v9; /*0x6abfa9*/
      }
      while ( v9 < v8 ); /*0x6abfac*/
      v7 = v25; /*0x6abfae*/
    }
    v7 += 210; /*0x6abfb2*/
    v25 = v7; /*0x6abfbe*/
  }
  while ( (int)v7 < (int)&dword_B0B300 ); /*0x6abfc2*/
  result = stru_88732C.__pad_1C[32]; /*0x6abfc4*/
  if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x6abfcd*/
  {
    v33 = 0; /*0x6abfd3*/
    v12 = 203; /*0x6abfd7*/
    v13 = (int *)&unk_B07C58; /*0x6abfdc*/
    do /*0x6ac02d*/
    {
      v14 = *v13; /*0x6abfe4*/
      v15 = v13[1]; /*0x6abfe6*/
      v28 = *(v13 - 1); /*0x6abfe9*/
      v16 = v13[2]; /*0x6abfed*/
      v29 = v14; /*0x6abff0*/
      v27 = v12; /*0x6abffb*/
      v32 = 0; /*0x6abfff*/
      v30 = v15; /*0x6ac003*/
      v31 = v16; /*0x6ac007*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], v12); /*0x6ac00b*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v27); /*0x6ac01b*/
      ++v12; /*0x6ac020*/
      v13 += 24; /*0x6ac021*/
    }
    while ( v12 - 203 < 4 ); /*0x6ac02d*/
    for ( j = 0; j < 60; ++j ) /*0x6ac02f*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], j + 1000); /*0x6ac03e*/
    v18 = 0; /*0x6ac04d*/
    if ( v26 > 0 ) /*0x6ac051*/
    {
      v19 = (int *)&unk_B07E90; /*0x6ac053*/
      do /*0x6ac0a5*/
      {
        v20 = *(v19 - 1); /*0x6ac05c*/
        v29 = *v19; /*0x6ac065*/
        v27 = v18 + 1000; /*0x6ac069*/
        v21 = v19[1]; /*0x6ac06d*/
        v28 = v20; /*0x6ac070*/
        v22 = v19[2]; /*0x6ac074*/
        v30 = v21; /*0x6ac07b*/
        v32 = 0; /*0x6ac086*/
        v31 = v22; /*0x6ac08e*/
        v33 = 1; /*0x6ac092*/
        CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v27); /*0x6ac096*/
        ++v18; /*0x6ac09f*/
        v19 += 14; /*0x6ac0a0*/
      }
      while ( v18 < v26 ); /*0x6ac0a5*/
    }
    v28 = dword_B07E04; /*0x6ac0ba*/
    v31 = dword_B07E10; /*0x6ac0c6*/
    v33 = 0; /*0x6ac0d0*/
    v27 = 102; /*0x6ac0d5*/
    v32 = aTxtSellMode; /*0x6ac0dd*/
    v29 = dword_B07E08; /*0x6ac0e5*/
    v30 = dword_B07E0C; /*0x6ac0e9*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 102); /*0x6ac0ed*/
    CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v27); /*0x6ac0fd*/
    v28 = dword_B0B3AC; /*0x6ac113*/
    v29 = dword_B0B3B0; /*0x6ac11c*/
    v27 = 101; /*0x6ac128*/
    v32 = aTxtRepairMode; /*0x6ac130*/
    v30 = dword_B0B3B4; /*0x6ac138*/
    v31 = dword_B0B3B8; /*0x6ac13c*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 101); /*0x6ac140*/
    CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v27); /*0x6ac150*/
    v28 = dword_B0B414; /*0x6ac166*/
    v30 = dword_B0B41C; /*0x6ac170*/
    v27 = 200; /*0x6ac17f*/
    v32 = 0; /*0x6ac187*/
    v29 = dword_B0B418; /*0x6ac18b*/
    v31 = dword_B0B420; /*0x6ac18f*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 200); /*0x6ac193*/
    CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v27); /*0x6ac1a3*/
    v28 = dword_B0B334; /*0x6ac1b9*/
    v31 = dword_B0B340; /*0x6ac1c8*/
    v27 = 201; /*0x6ac1d2*/
    v32 = 0; /*0x6ac1da*/
    v29 = dword_B0B338; /*0x6ac1de*/
    v30 = dword_B0B33C; /*0x6ac1e2*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 201); /*0x6ac1e6*/
    return CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v27); /*0x6ac1f6*/
  }
  return result; /*0x6ac1fb*/
}



// ==== 0x006AC210  SidebarClass::GetTooltipText  this=SidebarClass  sig=csp ====
wchar_t *__thiscall ObjectClass::GetTooltipText(SidebarClass *this, int a2)
{
  wchar_t *Available; // edi
  ShapeButtonClass *v4; // ecx
  wchar_t *v5; // eax
  wchar_t *StringCSF; // eax
  int v8; // eax

  Available = PowerClass::getAvailable((PowerClass *)this, a2); /*0x6ac21f*/
  if ( !Available ) /*0x6ac223*/
  {
    if ( a2 == 200 ) /*0x6ac22f*/
    {
      Available = GetStringCSF(aTipScrollup, 0, g_Str_File_Sidebar_CPP, 5069); /*0x6ac247*/
      v4 = &g_SidebarFlag; /*0x6ac249*/
      goto LABEL_4; /*0x6ac249*/
    }
    if ( a2 == 201 ) /*0x6ac29b*/
    {
      Available = GetStringCSF(aTipScrolldown, 0, g_Str_File_Sidebar_CPP, 5075); /*0x6ac2b3*/
      v4 = &stru_B0B328; /*0x6ac2b5*/
      goto LABEL_4; /*0x6ac2ba*/
    }
    if ( a2 >= 203 && a2 < 207 ) /*0x6ac2ce*/
    {
      switch ( a2 ) /*0x6ac2d8*/
      {
        case 203: /*0x6ac2d8*/
          StringCSF = GetStringCSF((wchar_t *)aTipTab1, 0, g_Str_File_Sidebar_CPP, 5083); /*0x6ac2eb*/
          break;
        case 204: /*0x6ac2d8*/
          StringCSF = GetStringCSF((wchar_t *)aTipTab2, 0, g_Str_File_Sidebar_CPP, 5085); /*0x6ac303*/
          break;
        case 205: /*0x6ac2d8*/
          StringCSF = GetStringCSF(word_83FBD8, 0, g_Str_File_Sidebar_CPP, 5087); /*0x6ac31b*/
          break;
        default:
          StringCSF = GetStringCSF(&aTipTab4, 0, g_Str_File_Sidebar_CPP, 5089); /*0x6ac333*/
          break;
      }
      Available = StringCSF; /*0x6ac338*/
      v4 = &stru_B07C48 + 8 * a2 - 1624; /*0x6ac340*/
LABEL_4:
      if ( !(unsigned __int8)DialogControl::IsHidden((DialogControl *)v4) ) /*0x6ac24e*/
      {
        v5 = GetStringCSF(aTipDisabled, 0, g_Str_File_Sidebar_CPP, 5108); /*0x6ac271*/
        swprintf(&word_B079B0, (const size_t)aSS_0, Available, v5); /*0x6ac282*/
        return &word_B079B0; /*0x6ac292*/
      }
      return Available; /*0x6ac25a*/
    }
    v8 = 26; /*0x6ac356*/
    if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6ac350*/
      v8 = 18; /*0x6ac35f*/
    if ( a2 >= 1000 /*0x6ac3a0*/
      && a2 < 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v8 + g_DSurface_SidebarBounds - 7) / 50) + 1000 )
    {
      return ObjectClass::GetSidebarTooltip( /*0x6ac3cb*/
               (ObjectClass *)&this->__pad_CD2[3988 * *((_DWORD *)this + 5351) + 2162],
               a2 - 1000);
    }
  }
  return Available; /*0x6ac28f*/
}



// ==== 0x006AC430  ObjectClass::UI_Add_6AC430  this=ObjectClass  sig=csp ====
int UI_Add_6AC430(ObjectClass *this)
{
  int v1; // eax
  unsigned int v2; // eax

  v1 = 26; /*0x6ac43b*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6ac435*/
    v1 = 18; /*0x6ac444*/
  v2 = (int)((unsigned __int64)(1374389535LL /*0x6ac46c*/
                              * (g_DSurface_ViewBounds - g_SidebarBounds - v1 + g_DSurface_SidebarBounds - 7)) >> 32) >> 4;
  return 2 * ((v2 >> 31) + v2); /*0x6ac478*/
}



// ==== 0x006AC480  UI_Update_6AC480  this=-  sig=csp ====
char __fastcall sub_6AC480(int a1, int *a2, _DWORD *a3, int a4)
{
  char result; // al
  int v5; // ebx
  int v6; // edi
  int BuildingAnimByName; // eax
  int v8; // eax
  int v9; // esi
  int v10; // ebp
  int v11; // edx
  int v12; // ecx
  _WORD *v13; // ebp
  _BYTE v14[4]; // [esp+0h] [ebp-30h] BYREF
  int v15; // [esp+4h] [ebp-2Ch]
  int v16; // [esp+8h] [ebp-28h] BYREF
  int v17; // [esp+Ch] [ebp-24h] BYREF
  __int16 v18; // [esp+10h] [ebp-20h]
  unsigned __int8 v19; // [esp+12h] [ebp-1Eh]
  int v20; // [esp+18h] [ebp-18h]
  _DWORD v21[4]; // [esp+20h] [ebp-10h] BYREF

  result = byte_884B8C; /*0x6ac483*/
  v15 = a1; /*0x6ac488*/
  if ( byte_884B8C ) /*0x6ac48e*/
  {
    if ( a1 ) /*0x6ac496*/
    {
      v5 = a2[1]; /*0x6ac49f*/
      v6 = g_FogOfWarState; /*0x6ac4a5*/
      v20 = *a2; /*0x6ac4b5*/
      BuildingAnimByName = FindBuildingAnimByName(aDarkred, 1); /*0x6ac4b9*/
      v8 = Color::ConvertToRGB((unsigned __int8 *)(BuildingAnimByName + 776), (int)v14); /*0x6ac4c9*/
      v18 = *(_WORD *)v8; /*0x6ac4d7*/
      v19 = *(_BYTE *)(v8 + 2); /*0x6ac4e1*/
      v9 = ((unsigned __int8)v18 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6ac52e*/
         | (HIBYTE(v18) >> g_BitMask_Blue << g_BitMask_Green)
         | (v19 >> g_BitMask_Red << g_BitShift_Blue);
      v10 = a3[2]; /*0x6ac536*/
      v11 = a3[1]; /*0x6ac539*/
      v21[0] = *a3; /*0x6ac53c*/
      v12 = a3[3]; /*0x6ac542*/
      v21[1] = v11; /*0x6ac547*/
      v21[3] = v11 + v12; /*0x6ac54b*/
      v21[2] = v21[0] + v10; /*0x6ac551*/
      Char::Swap((_BYTE *)v6, 1); /*0x6ac555*/
      TextGroup::SetRect((_DWORD *)v6, v21); /*0x6ac561*/
      Property::Set((_WORD *)v6, v9); /*0x6ac569*/
      v13 = (_WORD *)v15; /*0x6ac57a*/
      Text::Layout((_DWORD *)v6, (unsigned __int16 *)v15, &v17, &v16, a4); /*0x6ac584*/
      return Font::Print(v6, DSurface_Sidebar, v13, v20, *(_DWORD *)(v6 + 28) - v16 + v5, a4, 0, 0, 0, 0); /*0x6ac5b2*/
    }
  }
  return result; /*0x6ac5bb*/
}



// ==== 0x006AC5D0  SidebarClass::saveLoadPrefix  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::saveLoadPrefix(SidebarClass *this, int a2)
{
  return SidebarClass::Load((RadarClass *)this, a2); /*0x6ac5da*/
}



// ==== 0x006AC5E0  SidebarClass::saveLoadPrefix2  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::saveLoadPrefix2(SidebarClass *this, int a2)
{
  return SidebarClass::Save((RadarClass *)this, a2); /*0x6ac5ea*/
}



// ==== 0x006AC5F0  TActionClass::executeHarvestAction  this=TActionClass  sig=csp ====
_DWORD *__thiscall TActionClass::executeHarvestAction(TActionClass *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v5; // esi
  _DWORD *v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  char *v10; // edx
  _DWORD *v11; // ecx

  result = (_DWORD *)dword_A8E358; /*0x6ac5f0*/
  v5 = 0; /*0x6ac5f9*/
  if ( dword_A8E358 <= 0 ) /*0x6ac601*/
  {
LABEL_5:
    v5 = 0; /*0x6ac615*/
    if ( dword_A83CF0 <= 0 ) /*0x6ac61f*/
    {
LABEL_9:
      v5 = 0; /*0x6ac632*/
      if ( dword_A8B228 <= 0 ) /*0x6ac63c*/
      {
LABEL_13:
        v5 = 0; /*0x6ac64f*/
        if ( dword_A83C78 <= 0 ) /*0x6ac659*/
          return result; /*0x6ac659*/
        result = dword_A83C6C; /*0x6ac65f*/
        while ( a2 != *result ) /*0x6ac666*/
        {
          ++v5; /*0x6ac668*/
          ++result; /*0x6ac669*/
          if ( v5 >= dword_A83C78 ) /*0x6ac66e*/
            return result; /*0x6ac66e*/
        }
      }
      else
      {
        result = dword_A8B21C; /*0x6ac63e*/
        while ( a2 != *result ) /*0x6ac645*/
        {
          ++v5; /*0x6ac647*/
          ++result; /*0x6ac648*/
          if ( v5 >= dword_A8B228 ) /*0x6ac64d*/
            goto LABEL_13; /*0x6ac64d*/
        }
      }
    }
    else
    {
      result = dword_A83CE4; /*0x6ac621*/
      while ( a2 != *result ) /*0x6ac628*/
      {
        ++v5; /*0x6ac62a*/
        ++result; /*0x6ac62b*/
        if ( v5 >= dword_A83CF0 ) /*0x6ac630*/
          goto LABEL_9; /*0x6ac630*/
      }
    }
  }
  else
  {
    v6 = dword_A8E34C; /*0x6ac603*/
    while ( *v6 != a2 ) /*0x6ac60b*/
    {
      ++v5; /*0x6ac60d*/
      ++v6; /*0x6ac60e*/
      if ( v5 >= dword_A8E358 ) /*0x6ac613*/
        goto LABEL_5; /*0x6ac613*/
    }
  }
  result = (_DWORD *)(*(int (**)(void))(*(_DWORD *)a2 + 44))(); /*0x6ac677*/
  if ( result == (_DWORD *)15 || result == (_DWORD *)16 ) /*0x6ac682*/
  {
    v7 = 2; /*0x6ac6d4*/
  }
  else if ( result == (_DWORD *)1 || result == (_DWORD *)40 || result == (_DWORD *)2 || result == (_DWORD *)3 ) /*0x6ac696*/
  {
    v7 = 3; /*0x6ac6cd*/
  }
  else if ( result == (_DWORD *)6 || result == (_DWORD *)7 ) /*0x6ac6a0*/
  {
    v7 = GetHouseTechLevel((int)result, v5) == 5; /*0x6ac6c9*/
  }
  else
  {
    if ( result != (_DWORD *)57 && result != (_DWORD *)32 && result != (_DWORD *)31 ) /*0x6ac6af*/
      return result; /*0x6ac6af*/
    v7 = 1; /*0x6ac6b1*/
  }
  v8 = 997 * v7; /*0x6ac6e3*/
  v9 = 0; /*0x6ac6e6*/
  v10 = (char *)this + 4 * v8 + 5444; /*0x6ac6e8*/
  v11 = v10 + 88; /*0x6ac6ef*/
  while ( *v11 != v5 ) /*0x6ac6f4*/
  {
    ++v9; /*0x6ac6f6*/
    v11 += 13; /*0x6ac6f7*/
    if ( v9 >= 75 ) /*0x6ac6fd*/
      goto LABEL_38; /*0x6ac6fd*/
  }
  *(_DWORD *)&v10[52 * v9 + 136] = a3 + *(_DWORD *)&stru_A8EB00.?[416]; /*0x6ac713*/
LABEL_38:
  result = (_DWORD *)(*(_DWORD *)&stru_A8EB00.?[416] + a3 + 1); /*0x6ac71a*/
  *((_DWORD *)this + 5352) = result; /*0x6ac728*/
  return result; /*0x6ac670*/
}



// ==== 0x006AC780  SelectClass_StripClass_SidebarClass::queryInterface  this=SelectClass@StripClass@SidebarClass  sig=csp ====
_DWORD *__thiscall SidebarClass::queryInterface(SelectClass_StripClass_SidebarClass *this, char a2)
{
  GadgetClass::Dtor((GadgetClass *)this); /*0x6ac783*/
  if ( (a2 & 1) != 0 ) /*0x6ac78d*/
    __3_YAXPAX_Z(this); /*0x6ac790*/
  return &this->field_0; /*0x6ac79a*/
}



// ==== 0x006AC7A0  SBGadgetClass@SidebarClass::updateAnimation  this=SBGadgetClass@SidebarClass  sig=csp ====
_DWORD *__thiscall ObjectClass::sub_6AC7A0(_DWORD *Block, char a2)
{
  GadgetClass::Dtor(Block); /*0x6ac7a3*/
  if ( (a2 & 1) != 0 ) /*0x6ac7ad*/
    __3_YAXPAX_Z(Block); /*0x6ac7b0*/
  return Block; /*0x6ac7ba*/
}



// ==== 0x006AC7C0  TabClass::drawTabBackground  this=TabClass  sig=csp ====
int __thiscall TabClass::drawTabBackground(TabClass *this)
{
  IUnknown *v2; // edx

  this->TabClass_field_0x14 = 0; /*0x6ac7c4*/
  this->__pad_18[0] = 0; /*0x6ac7c7*/
  v2 = *(IUnknown **)&stru_A8EB00.?[416]; /*0x6ac7ca*/
  *(_DWORD *)&this->__pad_20[4] = 0; /*0x6ac7d0*/
  this->TabClass_field_0x1C = v2; /*0x6ac7d3*/
  *(_DWORD *)&this->__pad_20[8] = 0; /*0x6ac7d6*/
  *(_DWORD *)&this->__pad_20[12] = 1; /*0x6ac7d9*/
  return (int)this; /*0x6ac7e0*/
}



// ==== 0x006AC7F0  SidebarClass::DestructWithRadar  this=SidebarClass  sig=csp ====
char *__thiscall ObjectClass::DestructWithRadar(SidebarClass *this, char a2)
{
  int *v3; // esi
  int v4; // edi

  v3 = (int *)((char *)this + 21484); /*0x6ac7f5*/
  v4 = 4; /*0x6ac7fb*/
  do /*0x6ac816*/
  {
    v3 -= 997; /*0x6ac805*/
    Array::ForEachReverse(v3, 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x6ac810*/
    --v4; /*0x6ac815*/
  }
  while ( v4 ); /*0x6ac816*/
  RadarClass::Destruct((RadarClass *)this); /*0x6ac81a*/
  if ( (a2 & 1) != 0 ) /*0x6ac824*/
    __3_YAXPAX_Z(this); /*0x6ac827*/
  return (char *)this; /*0x6ac82f*/
}



// ==== 0x006AC840  DisplayClass::System_Init_6AC840  this=DisplayClass  sig=csp ====
char *__thiscall sub_6AC840(char *this, int a2)
{
  RadarClass::Render(this, a2); /*0x6ac848*/
  this->q11CC = 0; /*0x6ac84f*/
  this->q11CD = 0; /*0x6ac855*/
  this->q11CE = 0; /*0x6ac85b*/
  *(_DWORD *)this = &DisplayClass::`vftable'; /*0x6ac861*/
  return this; /*0x6ac869*/
}



// ==== 0x006AC870  SidebarClass::initButtons  this=SidebarClass  sig=csp ====
_BYTE *__thiscall SidebarClass::initButtons(SidebarClass *this)
{
  void *v2; // edx

  this->SidebarClass_field_0x0 = 0; /*0x6ac874*/
  LOBYTE(this->SidebarClass_field_0x4) = 0; /*0x6ac876*/
  v2 = *(void **)&stru_A8EB00.?[416]; /*0x6ac879*/
  *(_DWORD *)&this->__pad_C[4] = 0; /*0x6ac87f*/
  this->SidebarClass_field_0x8 = v2; /*0x6ac882*/
  this->SidebarClass_field_0x14 = 0; /*0x6ac885*/
  *(_DWORD *)this->__pad_18 = 1; /*0x6ac888*/
  return this; /*0x6ac88f*/
}



// ==== 0x006AC8D0  VectorClass::System_Init_6AC8D0  this=VectorClass  sig=csp ====
_DWORD *__thiscall System_Init_6AC8D0(VectorClass *this, int a2, int a3)
{
  void *v4; // eax

  this->Items = 0; /*0x6ac8da*/
  this->Capacity = a2; /*0x6ac8e1*/
  this->IsInitialized = 1; /*0x6ac8e4*/
  this->IsAllocated = 0; /*0x6ac8e8*/
  this->ptr_0 = &VectorClass<Point2D>::`vftable'; /*0x6ac8ec*/
  if ( a2 ) /*0x6ac8f2*/
  {
    if ( a3 ) /*0x6ac8fa*/
    {
      this->Items = (void *)a3; /*0x6ac8fd*/
    }
    else
    {
      v4 = (void *)__2_YAPAXI_Z(8 * a2); /*0x6ac90e*/
      if ( !v4 ) /*0x6ac918*/
        v4 = 0; /*0x6ac921*/
      this->Items = v4; /*0x6ac923*/
      this->IsAllocated = 1; /*0x6ac926*/
    }
  }
  this->ptr_0 = &DynamicVectorClass<Point2D>::`vftable'; /*0x6ac92a*/
  *((_DWORD *)this + 5) = 10; /*0x6ac930*/
  this->Items = 0; /*0x6ac937*/
  return &this->ptr_0; /*0x6ac940*/
}



// ==== 0x006AC950  sub_6AC950  this=-  sig=ida-proto ====
int sub_6AC950()
{
  dword_B0B528 = 0; /*0x6ac952*/
  dword_B0B52C = 0; /*0x6ac957*/
  dword_B0B530 = 0; /*0x6ac95c*/
  dword_B0B534 = 0; /*0x6ac961*/
  return 0; /*0x6ac966*/
}



// ==== 0x006AC970  sub_6AC970  this=-  sig=ida-proto ====
void sub_6AC970()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6ac97c*/
  dbl_B0B540 = Math::Sqrt(v0 + v0); /*0x6ac98e*/
}



// ==== 0x006AC9A0  sub_6AC9A0  this=-  sig=ida-proto ====
void sub_6AC9A0()
{
  dbl_B0B590 = dbl_B0B540 / 60.0; /*0x6ac9ac*/
}



// ==== 0x006AC9C0  sub_6AC9C0  this=-  sig=ida-proto ====
void sub_6AC9C0()
{
  dbl_B0B578 = 1.0 / dbl_B0B590; /*0x6ac9cc*/
}



// ==== 0x006AC9E0  sub_6AC9E0  this=-  sig=ida-proto ====
void sub_6AC9E0()
{
  dbl_B0B570 = 0.0174532925199433 * 45.0; /*0x6ac9ec*/
}



// ==== 0x006ACA00  sub_6ACA00  this=-  sig=ida-proto ====
void sub_6ACA00()
{
  dbl_B0B548 = 0.0174532925199433 * 60.0; /*0x6aca0c*/
}



// ==== 0x006ACA20  sub_6ACA20  this=-  sig=ida-proto ====
void sub_6ACA20()
{
  dbl_B0B520 = 0.0174532925199433 * 90.0; /*0x6aca2c*/
}



// ==== 0x006ACA40  sub_6ACA40  this=-  sig=ida-proto ====
__int64 sub_6ACA40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0B520 - dbl_B0B548); /*0x6aca52*/
  result = Math::RoundToInt(v0 * dbl_B0B540 * 0.5); /*0x6aca66*/
  dword_B0B598 = result; /*0x6aca6b*/
  return result; /*0x6aca70*/
}



// ==== 0x006ACA80  sub_6ACA80  this=-  sig=ida-proto ====
void sub_6ACA80()
{
  dbl_B0B550 = Math::ArcTan((double)dword_B0B598 * 0.00390625); /*0x6aca97*/
}



// ==== 0x006ACAB0  sub_6ACAB0  this=-  sig=ida-proto ====
void sub_6ACAB0()
{
  dbl_B0B568 = Math::ArcTan((double)(2 * dword_B0B598) / dbl_B0B540); /*0x6acad2*/
}



// ==== 0x006ACAE0  sub_6ACAE0  this=-  sig=ida-proto ====
__int64 sub_6ACAE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B598) + 0.5); /*0x6acafb*/
  dword_B0B58C = result; /*0x6acb00*/
  return result; /*0x6acb06*/
}



// ==== 0x006ACB10  sub_6ACB10  this=-  sig=ida-proto ====
int sub_6ACB10()
{
  word_B0B538 = 0; /*0x6acb12*/
  word_B0B53A = 0; /*0x6acb18*/
  return 0; /*0x6acb1e*/
}



// ==== 0x006ACB20  sub_6ACB20  this=-  sig=ida-proto ====
int sub_6ACB20()
{
  dword_B0B558 = 0; /*0x6acb22*/
  dword_B0B55C = 0; /*0x6acb27*/
  dword_B0B560 = 0; /*0x6acb2c*/
  return 0; /*0x6acb31*/
}



// ==== 0x006ACB40  sub_6ACB40  this=-  sig=ida-proto ====
int sub_6ACB40()
{
  dword_B0B588 = 0; /*0x6acb45*/
  dword_B0B580 = 128; /*0x6acb4f*/
  dword_B0B584 = 128; /*0x6acb54*/
  return 128; /*0x6acb59*/
}



// ==== 0x006ACBAE  ___inc_tmpoff  this=-  sig=ida-proto ====
void __inc_tmpoff()
{
  ++MEMORY[0x51D]; /*0x6acbae*/
}



// ==== 0x006ACCA0  Map_Handle_6ACCA0  this=-  sig=ida-proto ====
char __fastcall sub_6ACCA0(int a1)
{
  HWND v1; // ebp
  int v2; // edi
  int v3; // esi
  LRESULT v4; // eax

  v1 = dword_B0B59C; /*0x6acca2*/
  if ( a1 >= 8 ) /*0x6accad*/
    return 0; /*0x6acd54*/
  v2 = a1 - 1; /*0x6accb9*/
  while ( 1 )
  {
    if ( v2 )
    {
      switch ( v2 )
      {
        case 1:
          v3 = 1294; /*0x6acccc*/
          break;
        case 2:
          v3 = 1302; /*0x6accd8*/
          break;
        case 3:
          v3 = 1306; /*0x6acce4*/
          break;
        case 4:
          v3 = 1307; /*0x6accf0*/
          break;
        default:
          v3 = v2 == 5 ? 1308 : v2 != 6 ? -1 : 1309;
          break;
      }
    }
    else
    {
      v3 = 1291; /*0x6accc0*/
    }
    v4 = SendDlgItemMessageA(v1, v3, 0x147u, 0, 0); /*0x6acd23*/
    if ( (unsigned int)SendDlgItemMessageA(v1, v3, 0x150u, v4, 0) <= 2 ) /*0x6acd33*/
      break; /*0x6acd33*/
    if ( ++v2 + 1 >= 8 ) /*0x6acd46*/
      return 0; /*0x6acd46*/
  }
  return 1; /*0x6acd4d*/
}



// ==== 0x006ACD60  Skirmish::EnableSpawnButtons  this=Skirmish  sig=csp ====
int __thiscall Skirmish::EnableSpawnButtons(Skirmish *this)
{
  Skirmish *v1; // ebp
  int result; // eax
  ObjectClass *v3; // edi
  int v4; // esi
  LRESULT v5; // eax
  LRESULT v6; // esi
  char v7; // [esp+7h] [ebp-1h]

  v1 = this; /*0x6acd62*/
  if ( !this ) /*0x6acd66*/
    v1 = (Skirmish *)Dialog::FindByHandle((Dialog *)0x102); /*0x6acd72*/
  v7 = 0; /*0x6acd79*/
  if ( dword_A8B23C ) /*0x6acd80*/
    v7 = dword_A8B23C->ambientSoundController[0]; /*0x6acd85*/
  result = (int)GetDlgItem((HWND)v1, 1901); /*0x6acd8f*/
  if ( result )
  {
    EnableWindow((HWND)result, v7 != 0); /*0x6acdac*/
    v3 = 0; /*0x6acdbb*/
    do
    {
      if ( v3 )
      {
        if ( v3 == (ObjectClass *)1 )
        {
          v4 = 1294; /*0x6acdcd*/
        }
        else if ( v3 == (ObjectClass *)2 )
        {
          v4 = 1302; /*0x6acdd9*/
        }
        else if ( v3 == (ObjectClass *)3 )
        {
          v4 = 1306; /*0x6acde5*/
        }
        else if ( v3 == (ObjectClass *)4 )
        {
          v4 = 1307; /*0x6acdf1*/
        }
        else if ( v3 == (ObjectClass *)5 )
        {
          v4 = 1308; /*0x6acdfd*/
        }
        else
        {
          v4 = v3 != (ObjectClass *)6 ? -1 : 1309;
        }
      }
      else
      {
        v4 = 1291; /*0x6acdc1*/
      }
      v5 = SendDlgItemMessageA((HWND)v1, v4, 0x147u, 0, 0); /*0x6ace24*/
      v3 = (ObjectClass *)((char *)v3 + 1); /*0x6ace32*/
      v6 = SendDlgItemMessageA((HWND)v1, v4, 0x150u, v5, 0); /*0x6ace33*/
      result = GetResourceID4CSF(v3); /*0x6ace37*/
      if ( result >= 0 ) /*0x6ace3e*/
      {
        result = (int)GetDlgItem((HWND)v1, result); /*0x6ace42*/
        if ( result ) /*0x6ace4a*/
        {
          if ( v6 == -1 ) /*0x6ace4f*/
            result = EnableWindow((HWND)result, 0); /*0x6ace53*/
          else
            result = EnableWindow((HWND)result, v7 != 0); /*0x6ace64*/
        }
      }
    }
    while ( (int)&v3->AbstractClass + 1 < 8 );
  }
  return result; /*0x6ace79*/
}



// ==== 0x006ACE80  sub_6ACE80  this=-  sig=ida-proto ====
void __fastcall sub_6ACE80(HWND hDlg, int a2)
{
  int v3; // eax
  int v4; // ebx
  char *i; // esi
  int ResourceID4CSF; // edx

  if ( hDlg && dword_A8B23C ) /*0x6ace90*/
  {
    v3 = 1; /*0x6ace94*/
    v4 = 8; /*0x6ace99*/
    if ( a2 > 0 && a2 < 8 ) /*0x6acea2*/
    {
      v3 = a2; /*0x6acea4*/
      v4 = a2 + 1; /*0x6acea6*/
    }
    for ( i = (char *)v3; (int)i < v4; ++i ) /*0x6acead*/
    {
      ResourceID4CSF = GetResourceID4CSF(i); /*0x6aceb6*/
      if ( dword_A8B23C && *(_BYTE *)(dword_A8B23C + 60) ) /*0x6acec1*/
        SetupLobbyPlayerSlots(hDlg, ResourceID4CSF, 3); /*0x6aceca*/
      else
        SetupLobbyPlayerSlots(hDlg, ResourceID4CSF, -2); /*0x6aced0*/
    }
  }
}



// ==== 0x006ACEE0  DialogSkirmishFunc_UpdateMultiEngineer  this=-  sig=csp ====
void __fastcall DialogSkirmishFunc_UpdateMultiEngineer(Session *hWnd, int nIDDlgItem, int a3, int a4)
{
  int v6; // edi
  HWND DlgItem; // eax
  int v8; // esi
  LRESULT v9; // eax
  int v10; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v12; // eax
  HWND v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  HWND v16; // eax
  int v17; // edi
  int v18; // esi
  LRESULT v19; // eax
  int ResourceID4CSF; // eax
  int ComboBoxSelectedRaw2; // esi
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  HWND v24; // eax
  ObjectClass *v25; // esi
  int *v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  int ComboBoxSelected; // eax
  ObjectClass *v30; // eax
  ObjectClass *v31; // esi
  int v32; // edi
  int ResourceID2CSF; // ebx
  LRESULT v34; // eax
  LRESULT v35; // eax
  ObjectClass *v36; // edi
  int v37; // esi
  int v38; // ebx
  LRESULT v39; // eax
  LRESULT v40; // esi
  int v41; // ebx
  int ComboBoxSelectedRaw; // eax
  int v43; // edx
  int v44; // esi
  int v45; // edi
  in... [26633 chars total]



// ==== 0x006ADC20  SetupSkirmishSpawnLocationEntry  this=-  sig=csp ====
int __fastcall SetupSkirmishSpawnLocationEntry(HWND hDlg, int nIDDlgItem)
{
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int ResourceIDCSF; // ebx
  int v8; // eax
  int v9; // ebx
  char *i; // edi
  int v11; // eax
  LRESULT v12; // eax
  HWND DlgItem; // ebx
  HWND v14; // ebp
  int nIDDlgItema; // [esp+10h] [ebp-10h]
  HWND hWnd; // [esp+14h] [ebp-Ch]
  HWND hWnda; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  unsigned __int8 v20; // [esp+18h] [ebp-8h]
  HWND ResourceID4CSF; // [esp+1Ch] [ebp-4h]
  HWND v22; // [esp+1Ch] [ebp-4h]

  switch ( nIDDlgItem ) /*0x6adc31*/
  {
    case 1291: /*0x6adc31*/
      v4 = 0; /*0x6adc33*/
      break;
    case 1294: /*0x6adc31*/
      v4 = 1; /*0x6adc3f*/
      break;
    case 1302: /*0x6adc31*/
      v4 = 2; /*0x6adc4e*/
      break;
    case 1306: /*0x6adc31*/
      v4 = 3; /*0x6adc5d*/
      break;
    case 1307: /*0x6adc31*/
      v4 = 4; /*0x6adc6c*/
      break;
    case 1308: /*0x6adc31*/
      v4 = 5; /*0x6adc7b*/
      break;
    default:
      v5 = -(nIDDlgItem != 1309); /*0x6adc8b*/
      LOBYTE(v5) = v5 & 0xF9; /*0x6adc8d*/
      v4 = v5 + 6; /*0x6adc8f*/
      break;
  }
  v6 = v4 + 1; /*0x6adc92*/
  ResourceIDCSF = GetResourceIDCSF((void *)(v4 + 1)); /*0x6adc9c*/
  v19 = ResourceIDCSF; /*0x6adca0*/
  nIDDlgItema = GetResourceID2CSF((void *)v6); /*0x6adcab*/
  hWnd = (HWND)GetResourceID3CSF((void *)v6); /*0x6adcb6*/
  ResourceID4CSF = (HWND)GetResourceID4CSF((void *)v6); /*0x6adcc1*/
  if ( hDlg && dword_A8B23C ) /*0x6adcce*/
  {
    v8 = 1; /*0x6adcd2*/
    v9 = 8; /*0x6adcd7*/
    if ( v6 > 0 && v6 < 8 ) /*0x6adce0*/
    {
      v8 = v6; /*0x6adce2*/
      v9 = v6 + 1; /*0x6adce4*/
    }
    for ( i = (char *)v8; (int)i < v9; ++i ) /*0x6adceb*/
    {
      v11 = GetResourceID4CSF(i); /*0x6adcef*/
      if ( dword_A8B23C && *(_BYTE *)(dword_A8B23C + 60) ) /*0x6adcfe*/
        SetupLobbyPlayerSlots(hDlg, v11, 3); /*0x6add07*/
      else
        SetupLobbyPlayerSlots(hDlg, v11, -2); /*0x6add0f*/
    }
    ResourceIDCSF = v19; /*0x6add19*/
  }
  v12 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0); /*0x6add2e*/
  if ( (unsigned int)SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v12, 0) <= 2 ) /*0x6add3e*/
  {
    v20 = 1; /*0x6addde*/
  }
  else
  {
    v20 = 0; /*0x6add5c*/
    SetupSkirmishSpawnLocations(hDlg, ResourceIDCSF, -2); /*0x6add61*/
    SetupLobbyCountryCombo(hDlg, nIDDlgItema, -2); /*0x6add6e*/
    SetupLobbyFactionSlots(hDlg, (int)hWnd, -2); /*0x6add7b*/
  }
  DlgItem = GetDlgItem(hDlg, ResourceIDCSF); /*0x6add8a*/
  v14 = GetDlgItem(hDlg, nIDDlgItema); /*0x6add94*/
  hWnda = GetDlgItem(hDlg, (int)hWnd); /*0x6adda2*/
  v22 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x6addb4*/
  EnableWindow(DlgItem, v20); /*0x6addc0*/
  EnableWindow(v14, v20); /*0x6addc4*/
  EnableWindow(hWnda, v20); /*0x6addcc*/
  return EnableWindow(v22, v20); /*0x6addd6*/
}



// ==== 0x006ADDF0  Skirmish_Setup_6ADDF0  this=Skirmish  sig=csp ====
void __fastcall sub_6ADDF0(HWND a1, int a2, int a3)
{
  int v5; // ebx
  int v6; // esi
  bool v7; // al
  HWND v8; // edi
  int i; // esi
  int ResourceID4CSF; // edx
  int PlayerCountMap; // [esp+14h] [ebp-4h]
  bool v13; // [esp+1Ch] [ebp+4h]

  if ( a2 == -1 ) /*0x6ade00*/
    PlayerCountMap = 8; /*0x6ade02*/
  else
    PlayerCountMap = ReadPlayerCountMap(a2); /*0x6ade13*/
  v5 = ReadPlayerCountMap(a3); /*0x6ade26*/
  v6 = v5 - PlayerCountMap; /*0x6ade2a*/
  if ( a2 >= 0 /*0x6ade6a*/
    && a3 >= 0
    && a2 < dword_A8B8D8
    && a3 < dword_A8B8D8
    && (v13 = IsRandMap::Sed(*(_DWORD *)(dword_A8B8CC + 4 * a2)),
        v7 = IsRandMap::Sed(*(_DWORD *)(dword_A8B8CC + 4 * a3)),
        v13)
    && v7 )
  {
    v8 = a1; /*0x6ade6c*/
    HideSkirmishSpawnLocations(a1, 1); /*0x6ade77*/
    Skirmish_Setup_6ADDF0_Setup(a1, 1, v5 - 1); /*0x6ade87*/
  }
  else
  {
    v8 = a1; /*0x6ade8e*/
  }
  if ( v6 <= 0 ) /*0x6ade94*/
  {
    if ( v6 < 0 ) /*0x6adea4*/
      HideSkirmishSpawnLocations(v8, v5); /*0x6adeaa*/
  }
  else
  {
    Skirmish_Setup_6ADDF0_Setup(v8, PlayerCountMap, v6); /*0x6ade9d*/
  }
  if ( v8 && dword_A8B23C ) /*0x6adeba*/
  {
    for ( i = 1; i < 8; ++i ) /*0x6adebc*/
    {
      ResourceID4CSF = GetResourceID4CSF((void *)i); /*0x6adec8*/
      if ( dword_A8B23C && *(_BYTE *)(dword_A8B23C + 60) ) /*0x6aded3*/
        SetupLobbyPlayerSlots(v8, ResourceID4CSF, 3); /*0x6adedc*/
      else
        SetupLobbyPlayerSlots(v8, ResourceID4CSF, -2); /*0x6adee2*/
    }
  }
}



// ==== 0x006ADF00  Skirmish_Setup_6ADDF0_Setup  this=-  sig=csp ====
int __fastcall Skirmish_Setup_6ADDF0_Setup(HWND hDlg, int a2, int nIDDlgItem)
{
  int result; // eax
  char *v5; // esi
  HWND ResourceIDHardcodedCSF; // [esp+4h] [ebp-1Ch]
  HWND DlgItem; // [esp+4h] [ebp-1Ch]
  HWND ResourceIDCSF; // [esp+8h] [ebp-18h]
  HWND v9; // [esp+8h] [ebp-18h]
  HWND ResourceID2CSF; // [esp+Ch] [ebp-14h]
  HWND v11; // [esp+Ch] [ebp-14h]
  HWND ResourceID3CSF; // [esp+10h] [ebp-10h]
  HWND v13; // [esp+10h] [ebp-10h]
  HWND ResourceID4CSF; // [esp+14h] [ebp-Ch]
  HWND v15; // [esp+14h] [ebp-Ch]
  HWND hWnd; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]
  int nIDDlgItema; // [esp+24h] [ebp+4h]

  result = a2 + nIDDlgItem; /*0x6adf08*/
  v17 = a2 + nIDDlgItem; /*0x6adf0e*/
  if ( a2 < a2 + nIDDlgItem )
  {
    v5 = (char *)(a2 - 1); /*0x6adf27*/
    do
    {
      if ( v5 )
      {
        if ( v5 == (char *)1 )
        {
          nIDDlgItema = 1294; /*0x6adf3d*/
        }
        else if ( v5 == (char *)2 )
        {
          nIDDlgItema = 1302; /*0x6adf4c*/
        }
        else if ( v5 == (char *)3 )
        {
          nIDDlgItema = 1306; /*0x6adf5b*/
        }
        else if ( v5 == (char *)4 )
        {
          nIDDlgItema = 1307; /*0x6adf6a*/
        }
        else if ( v5 == (char *)5 )
        {
          nIDDlgItema = 1308; /*0x6adf79*/
        }
        else
        {
          nIDDlgItema = v5 != (char *)6 ? -1 : 1309;
        }
      }
      else
      {
        nIDDlgItema = 1291; /*0x6adf2e*/
      }
      ResourceIDHardcodedCSF = (HWND)GetResourceIDHardcodedCSF(++v5); /*0x6adfa4*/
      ResourceIDCSF = (HWND)GetResourceIDCSF(v5); /*0x6adfaf*/
      ResourceID2CSF = (HWND)GetResourceID2CSF(v5); /*0x6adfba*/
      ResourceID3CSF = (HWND)GetResourceID3CSF(v5); /*0x6adfc5*/
      ResourceID4CSF = (HWND)GetResourceID4CSF(v5); /*0x6adfd2*/
      hWnd = GetDlgItem(hDlg, nIDDlgItema); /*0x6adfde*/
      DlgItem = GetDlgItem(hDlg, (int)ResourceIDHardcodedCSF); /*0x6adfe6*/
      v9 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x6adff6*/
      v11 = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x6ae002*/
      v13 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x6ae00a*/
      v15 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x6ae01d*/
      ShowWindow(hWnd, 5); /*0x6ae021*/
      ShowWindow(DlgItem, 5); /*0x6ae02a*/
      ShowWindow(v9, 5); /*0x6ae033*/
      ShowWindow(v11, 5); /*0x6ae03c*/
      ShowWindow(v13, 5); /*0x6ae045*/
      ShowWindow(v15, 5); /*0x6ae04e*/
      SetupSkirmishSpawnLocationEntry(hDlg, nIDDlgItema); /*0x6ae056*/
      result = v17; /*0x6ae05b*/
    }
    while ( (int)(v5 + 1) < v17 );
  }
  return result; /*0x6ae06d*/
}



// ==== 0x006AE080  HideSkirmishSpawnLocations  this=-  sig=csp ====
void __fastcall HideSkirmishSpawnLocations(HWND hDlg, int a2)
{
  int v3; // esi
  int v4; // esi
  LRESULT v5; // ebp
  WPARAM v6; // ebx
  char *v7; // esi
  int nIDDlgItem; // [esp+10h] [ebp-18h]
  int nIDDlgItema; // [esp+10h] [ebp-18h]
  HWND nIDDlgItemb; // [esp+10h] [ebp-18h]
  HWND hWnda; // [esp+14h] [ebp-14h]
  HWND hWndb; // [esp+14h] [ebp-14h]
  HWND ResourceID2CSF; // [esp+18h] [ebp-10h]
  HWND DlgItem; // [esp+18h] [ebp-10h]
  HWND ResourceIDCSF; // [esp+1Ch] [ebp-Ch]
  HWND v17; // [esp+1Ch] [ebp-Ch]
  HWND ResourceID3CSF; // [esp+20h] [ebp-8h]
  HWND v19; // [esp+20h] [ebp-8h]
  HWND ResourceID4CSF; // [esp+24h] [ebp-4h]
  HWND v21; // [esp+24h] [ebp-4h]

  if ( a2 < 8 )
  {
    v3 = a2 - 1; /*0x6ae096*/
    for ( nIDDlgItem = a2 - 1; ; v3 = nIDDlgItem )
    {
      if ( v3 )
      {
        switch ( v3 )
        {
          case 1:
            v4 = 1294; /*0x6ae0b3*/
            break;
          case 2:
            v4 = 1302; /*0x6ae0bf*/
            break;
          case 3:
            v4 = 1306; /*0x6ae0cb*/
            break;
          case 4:
            v4 = 1307; /*0x6ae0d7*/
            break;
          case 5:
            v4 = 1308; /*0x6ae0e3*/
            break;
          default:
            v4 = v3 != 6 ? -1 : 1309;
            break;
        }
      }
      else
      {
        v4 = 1291; /*0x6ae0a7*/
      }
      v5 = SendDlgItemMessageA(hDlg, v4, 0x146u, 0, 0); /*0x6ae10e*/
      v6 = 0; /*0x6ae110*/
      if ( v5 > 0 ) /*0x6ae114*/
      {
        while ( SendDlgItemMessageA(hDlg, v4, 0x150u, v6, 0) != -1 ) /*0x6ae129*/
        {
          if ( (int)++v6 >= v5 ) /*0x6ae12e*/
            goto LABEL_22; /*0x6ae12e*/
        }
        SendDlgItemMessageA(hDlg, v4, 0x14Eu, v6, 0); /*0x6ae13c*/
      }
LABEL_22:
      SetupSkirmishSpawnLocationEntry(hDlg, v4); /*0x6ae146*/
      if ( ++nIDDlgItem + 1 >= 8 ) /*0x6ae158*/
        break; /*0x6ae158*/
    }
    if ( a2 < 8 )
    {
      v7 = (char *)(a2 - 1); /*0x6ae177*/
      do
      {
        if ( v7 )
        {
          if ( v7 == (char *)1 )
          {
            nIDDlgItema = 1294; /*0x6ae18d*/
          }
          else if ( v7 == (char *)2 )
          {
            nIDDlgItema = 1302; /*0x6ae19c*/
          }
          else if ( v7 == (char *)3 )
          {
            nIDDlgItema = 1306; /*0x6ae1ab*/
          }
          else if ( v7 == (char *)4 )
          {
            nIDDlgItema = 1307; /*0x6ae1ba*/
          }
          else if ( v7 == (char *)5 )
          {
            nIDDlgItema = 1308; /*0x6ae1c9*/
          }
          else
          {
            nIDDlgItema = v7 != (char *)6 ? -1 : 1309;
          }
        }
        else
        {
          nIDDlgItema = 1291; /*0x6ae17e*/
        }
        hWnda = (HWND)GetResourceIDHardcodedCSF(++v7); /*0x6ae1f4*/
        ResourceID2CSF = (HWND)GetResourceID2CSF(v7); /*0x6ae1ff*/
        ResourceIDCSF = (HWND)GetResourceIDCSF(v7); /*0x6ae20a*/
        ResourceID3CSF = (HWND)GetResourceID3CSF(v7); /*0x6ae215*/
        ResourceID4CSF = (HWND)GetResourceID4CSF(v7); /*0x6ae21e*/
        nIDDlgItemb = GetDlgItem(hDlg, nIDDlgItema); /*0x6ae22e*/
        hWndb = GetDlgItem(hDlg, (int)hWnda); /*0x6ae23a*/
        DlgItem = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x6ae242*/
        v17 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x6ae252*/
        v19 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x6ae25e*/
        v21 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x6ae266*/
        ShowWindow(nIDDlgItemb, 0); /*0x6ae271*/
        ShowWindow(hWndb, 0); /*0x6ae27a*/
        ShowWindow(DlgItem, 0); /*0x6ae283*/
        ShowWindow(v17, 0); /*0x6ae28c*/
        ShowWindow(v19, 0); /*0x6ae295*/
        ShowWindow(v21, 0); /*0x6ae29e*/
      }
      while ( (int)(v7 + 1) < 8 );
    }
  }
}



// ==== 0x006AE2C0  ObjectClass::ShowSkirmishSetupScreen  this=ObjectClass  sig=csp ====
bool __usercall ShowSkirmishSetupScreen@<al>(ObjectClass *this, int a2@<ebp>)
{
  int v2; // ebx
  ObjectClass *v3; // esi
  int i; // esi
  HWND Dialog; // esi
  LONG j; // eax
  TechnoTypeClass *v7; // ecx
  Skirmish *v8; // esi
  ObjectClass *v10; // [esp+0h] [ebp-8h]
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  v10 = v3; /*0x6ae2cc*/
  dwNewLong = -1; /*0x6ae2ce*/
  RulesClass::LoadCountries(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x6ae2d6*/
  RulesClass::ReadDataList(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x6ae2e8*/
  for ( i = 0; i < dword_A83CA8; ++i ) /*0x6ae2f6*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)dword_A83C9C + i) + 100))( /*0x6ae30a*/
      *((_DWORD *)dword_A83C9C + i),
      *(_DWORD *)&DSurface_ViewBounds.__pad_34[116]);
  LoadingScreen::Init(); /*0x6ae317*/
  Dialog = (HWND)CreateDialog(0x102u, Skirmish::Setup_DlgProc, 0); /*0x6ae32d*/
  if ( Dialog ) /*0x6ae331*/
  {
    dword_B0B59C = Dialog; /*0x6ae337*/
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x6ae341*/
    Dialog::Show((Dialog *)Dialog); /*0x6ae349*/
    for ( j = dwNewLong; dwNewLong != 1559; j = dwNewLong ) /*0x6ae357*/
    {
      if ( j == 1472 ) /*0x6ae35e*/
        break; /*0x6ae35e*/
      if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x6ae367*/
        break; /*0x6ae367*/
      LOBYTE(v7) = 0; /*0x6ae369*/
      ScreenSaver::Process(v7, v10); /*0x6ae36b*/
    }
    Dialog::Destroy((Dialog *)Dialog); /*0x6ae37d*/
    dword_B0B59C = 0; /*0x6ae382*/
  }
  v8 = g_UIControlState; /*0x6ae38c*/
  if ( g_UIControlState ) /*0x6ae394*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x6ae398*/
    __3_YAXPAX_Z(v8); /*0x6ae39e*/
    g_UIControlState = 0; /*0x6ae3a6*/
  }
  CleanupFileTree(v10); /*0x6ae3b0*/
  SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x6ae3ba*/
  if ( dwNewLong == 1472 ) /*0x6ae3c9*/
    Screen::Capture(1, 0, v2, a2); /*0x6ae3cf*/
  return dwNewLong == 1559; /*0x6ae3e0*/
}



// ==== 0x006AE3F0  Skirmish::Setup_DlgProc  this=Skirmish  sig=csp ====
int __stdcall Skirmish_Setup_DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, int a4)
{
  int result; // eax
  HWND DlgItem; // eax
  int DlgCtrlID; // eax
  int v7; // esi
  int v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  wchar_t *v11; // eax
  int v12; // eax
  wchar_t *v13; // eax
  LRESULT v14; // eax
  LRESULT v15; // eax
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax

  result = BaseDialogProc(hDlg, a2, a3, a4); /*0x6ae40a*/
  if ( !result ) /*0x6ae411*/
  {
    if ( a2 > 0x497 ) /*0x6ae41d*/
    {
      if ( a2 != 1257 ) /*0x6ae4a9*/
        return 0; /*0x6ae4b1*/
      WideString::Assign_Alt(0); /*0x6ae4bb*/
      if ( *(_DWORD *)a4 && *(_DWORD *)(a4 + 4) != -1 ) /*0x6ae4ce*/
      {
        DlgCtrlID = GetDlgCtrlID(*(HWND *)a4); /*0x6ae4d5*/
        v7 = DlgCtrlID; /*0x6ae4db*/
        if ( DlgCtrlID == 1291 /*0x6ae52b*/
          || DlgCtrlID == 1294
          || DlgCtrlID == 1302
          || DlgCtrlID == 1306
          || DlgCtrlID == 1307
          || DlgCtrlID == 1308
          || DlgCtrlID == 1309 )
        {
          v14 = *(_DWORD *)(a4 + 4); /*0x6ae5da*/
          if ( v14 == -1 ) /*0x6ae5e6*/
            v14 = SendDlgItemMessageA(hDlg, v7, 0x147u, 0, 0); /*0x6ae5f3*/
          v15 = SendDlgItemMessageA(hDlg, v7, 0x150u, v14, 0); /*0x6ae5ff*/
          switch ( v15 ) /*0x6ae604*/
          {
            case -1: /*0x6ae604*/
              v16 = (wchar_t *)GetStringCSF(aSttPlayernone, (int)g_Str_File_Skirmish_cpp, 135); /*0x6ae617*/
              WideString::Assign_Alt(v16); /*0x6ae61f*/
              return 1; /*0x6ae62d*/
            case 2: /*0x6ae604*/
              v17 = (wchar_t *)GetStringCSF(g_Str_STT_PlayerDumbAI, (int)g_Str_File_Skirmish_cpp, 137); /*0x6ae646*/
              WideString::Assign_Alt(v17); /*0x6ae64e*/
              return 1; /*0x6ae65c*/
            case 1: /*0x6ae604*/
              v18 = (wchar_t *)GetStringCSF(g_Str_STT_PlayerSmartAI, (int)g_Str_File_Skirmish_cpp, 139); /*0x6ae675*/
              WideString::Assign_Alt(v18); /*0x6ae67d*/
              return 1; /*0x6ae68b*/
            case 0: /*0x6ae604*/
              v19 = (wchar_t *)GetStringCSF(g_Str_STT_PlayerGeniusAI, (int)g_Str_File_Skirmish_cpp, 141); /*0x6ae6a3*/
              WideString::Assign_Alt(v19); /*0x6ae6ab*/
              return 1; /*0x6ae6b9*/
          }
          WideString::Assign_Alt(0); /*0x6ae6c1*/
        }
        else if ( CountryCombo::IDToIndex(DlgCtrlID) == -1 ) /*0x6ae53b*/
        {
          if ( StartCombo::IDToIndex(v7) != -1 ) /*0x6ae547*/
          {
            v10 = GetComboBoxSelectedRaw(hDlg, v7, *(_DWORD *)(a4 + 4)); /*0x6ae589*/
            v11 = (wchar_t *)GameSetup::GetColorTooltip(v10); /*0x6ae590*/
            WideString::Assign_Alt(v11); /*0x6ae598*/
            return 1; /*0x6ae5a6*/
          }
          if ( Dialog::SideIDToIndex(v7) != -1 ) /*0x6ae553*/
          {
            v8 = SetComboBoxSelection(hDlg, v7, *(_DWORD *)(a4 + 4)); /*0x6ae561*/
            v9 = (wchar_t *)sub_4E4F30(v8); /*0x6ae568*/
            WideString::Assign_Alt(v9); /*0x6ae570*/
            return 1; /*0x6ae57e*/
          }
        }
        else
        {
          v12 = GetComboBoxSelected(hDlg, v7, *(_DWORD *)(a4 + 4)); /*0x6ae5b1*/
          if ( v12 != -1 ) /*0x6ae5b9*/
          {
            v13 = (wchar_t *)SideClass::GetName(v12); /*0x6ae5c1*/
            WideString::Assign_Alt(v13); /*0x6ae5c9*/
            return 1; /*0x6ae5d7*/
          }
        }
      }
      return 1; /*0x6ae6c6*/
    }
    else
    {
      if ( a2 == 1175 ) /*0x6ae423*/
        return Skirmish::SetupGame(hDlg, a4); /*0x6ae4a0*/
      if ( a2 != 15 ) /*0x6ae428*/
      {
        if ( a2 == 273 ) /*0x6ae430*/
        {
          DialogSkirmishFunc_UpdateMultiEngineer(hDlg, (unsigned __int16)a3, a4, HIWORD(a3)); /*0x6ae443*/
          return 1; /*0x6ae451*/
        }
        return 0; /*0x6ae430*/
      }
      if ( g_UIControlState ) /*0x6ae45b*/
      {
        DlgItem = GetDlgItem(hDlg, 1128); /*0x6ae463*/
        if ( !(unsigned __int8)SkirmishMapGen::LookupDialogHash(DlgItem) ) /*0x6ae46b*/
          Skirmish::RenderPreview(hDlg); /*0x6ae47b*/
      }
      ValidateRect(hDlg, 0); /*0x6ae483*/
      return 0; /*0x6ae48c*/
    }
  }
  return result; /*0x6ae448*/
}



// ==== 0x006AE6E0  Skirmish::SetupGame  this=Skirmish  sig=csp ====
int __thiscall Skirmish::SetupGame(Skirmish *this, int a2)
{
  ObjectClass *v2; // edi
  HWND DlgItem; // eax
  HWND v5; // esi
  char *v6; // eax
  int i; // edi
  int v8; // eax
  HWND v9; // esi
  wchar_t *StringCSF; // eax
  LRESULT v11; // eax
  wchar_t *v12; // eax
  LRESULT v13; // eax
  wchar_t *v14; // eax
  LRESULT v15; // eax
  wchar_t *v16; // eax
  LRESULT v17; // eax
  ObjectClass *v18; // esi
  int v19; // esi
  int v20; // eax
  int v21; // eax
  WPARAM v22; // edi
  int ResourceID2CSF; // esi
  int ResourceIDCSF; // edi
  HWND v25; // edi
  int v26; // eax
  int v27; // ecx
  char *v28; // esi
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int PlayerCountMap; // edi
  void *ptr_8; // ecx
  int j; // edi
  int v35; // eax
  HWND (__stdcall *v36)(HWND, int); // edi
  HWND v37; // eax
  HWND v38; // esi
  LPARAM v39; // edi
  HWND v40; // esi
  HWND v41; // esi
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  HWND v45; // eax
  HWND v46; // eax
  Skirmish *v47; // esi
  ObjectClass *v48; // eax
  Skirmish *v49; // eax
  ObjectClass *v51; // [esp-4h] [ebp-24h]
  ScenarioClass *v52; // [esp+0h] [ebp-20h]
  int hWnd; // [esp+Ch] [ebp-14h]
  HWND hWnda; // [esp+Ch] [ebp-14h]
  int *v55; // [esp+10h] [ebp-10h]
  ObjectClass *v56; // [esp+14h] [ebp-Ch]
  int nIDDlgItem; // [esp+18h] [ebp-8h]
  HWND nIDDlgItemb; // [esp+18h] [ebp-8h]
  int nIDDlgItema; // [esp+18h] [ebp-8h]
  HWND v60; // [esp+1Ch] [ebp-4h]
  HWND ResourceID4CSF; // [esp+1Ch] [ebp-4h]
  HWND v62; // [esp+1Ch] [ebp-4h]
  HWND First; // [esp+1Ch] [ebp-4h]

  Network::processGameEvent((Network *)&stru_A8B250); /*0x6ae6ed*/
  DlgItem = GetDlgItem((HWND)this, 1696); /*0x6ae6f8*/
  v5 = DlgItem; /*0x6ae704*/
  if ( DlgItem ) /*0x6ae708*/
  {
    SendMessageA(DlgItem, 0xC5u, 0x13u, 0); /*0x6ae714*/
    v6 = CharToWideString(unk_A8B380); /*0x6ae71b*/
    SendMessageA(v5, 0x4B2u, 0, (LPARAM)v6); /*0x6ae729*/
    SendMessageA(v5, 0x4D1u, 1u, 0); /*0x6ae735*/
  }
  v51 = v2; /*0x6ae737*/
  for ( i = 0; i < 7; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v8 = 1294; /*0x6ae74a*/
          break;
        case 2:
          v8 = 1302; /*0x6ae756*/
          break;
        case 3:
          v8 = 1306; /*0x6ae762*/
          break;
        case 4:
          v8 = 1307; /*0x6ae76e*/
          break;
        case 5:
          v8 = 1308; /*0x6ae77a*/
          break;
        default:
          v8 = i != 6 ? -1 : 1309;
          break;
      }
    }
    else
    {
      v8 = 1291; /*0x6ae73e*/
    }
    v9 = GetDlgItem((HWND)this, v8); /*0x6ae79c*/
    SendMessageA(v9, 0x14Bu, 0, 0); /*0x6ae7a8*/
    StringCSF = GetStringCSF(aGuiNone, 0, g_Str_File_Skirmish_cpp, 158); /*0x6ae7bb*/
    v11 = SendMessageA(v9, 0x4C2u, 0, (LPARAM)StringCSF); /*0x6ae7c9*/
    SendMessageA(v9, 0x151u, v11, -1); /*0x6ae7d4*/
    v12 = GetStringCSF(g_Str_GUI_AIEasy, 0, g_Str_File_Skirmish_cpp, 161); /*0x6ae7e7*/
    v13 = SendMessageA(v9, 0x4C2u, 0, (LPARAM)v12); /*0x6ae7f5*/
    SendMessageA(v9, 0x151u, v13, 2); /*0x6ae800*/
    v14 = GetStringCSF(g_Str_GUI_AINormal, 0, g_Str_File_Skirmish_cpp, 164); /*0x6ae813*/
    v15 = SendMessageA(v9, 0x4C2u, 0, (LPARAM)v14); /*0x6ae821*/
    SendMessageA(v9, 0x151u, v15, 1); /*0x6ae82c*/
    v16 = GetStringCSF(g_Str_GUI_AIHard, 0, g_Str_File_Skirmish_cpp, 167); /*0x6ae83f*/
    v17 = SendMessageA(v9, 0x4C2u, 0, (LPARAM)v16); /*0x6ae84d*/
    SendMessageA(v9, 0x151u, v17, 0); /*0x6ae858*/
    SendMessageA(v9, 0x14Eu, 0, 0); /*0x6ae864*/
  }
  SkirmishDialog::FillComboBoxes((SkirmishDialog *)this); /*0x6ae872*/
  InitGameDropdownColors(v51); /*0x6ae877*/
  Lobby::FillPlayerFactions((Lobby *)this); /*0x6ae87e*/
  _cfltcvt_init(); /*0x6ae883*/
  Lobby::InvalidateFactionCombos((Lobby *)this); /*0x6ae88a*/
  GDlg::LoadLetterStrings(); /*0x6ae88f*/
  Lobby::InvalidatePlayerSlots((Lobby *)this); /*0x6ae896*/
  SetupSkirmishDialogPlayerSlot((HWND)this, 0); /*0x6ae89f*/
  MapSkirmishDialogPlayerToControl((HWND)this, 0); /*0x6ae8a8*/
  FillLobbyFactionComboBox((HWND)this, 0); /*0x6ae8b1*/
  SetupLobbyPlayerSlotDialog((HWND)this, 0); /*0x6ae8ba*/
  v56 = 0; /*0x6ae8bf*/
  v55 = (int *)&unk_A8B3F0; /*0x6ae8c7*/
  v18 = 0; /*0x6ae8cf*/
  do
  {
    if ( v18 )
    {
      if ( v18 == (ObjectClass *)1 )
      {
        v19 = 1294; /*0x6ae8e3*/
      }
      else if ( v18 == (ObjectClass *)2 )
      {
        v19 = 1302; /*0x6ae8ef*/
      }
      else if ( v18 == (ObjectClass *)3 )
      {
        v19 = 1306; /*0x6ae8fb*/
      }
      else if ( v18 == (ObjectClass *)4 )
      {
        v19 = 1307; /*0x6ae907*/
      }
      else if ( v18 == (ObjectClass *)5 )
      {
        v19 = 1308; /*0x6ae913*/
      }
      else
      {
        v19 = v18 != (ObjectClass *)6 ? -1 : 1309;
      }
    }
    else
    {
      v19 = 1291; /*0x6ae8d7*/
    }
    v20 = *(v55 - 1); /*0x6ae931*/
    switch ( v20 ) /*0x6ae937*/
    {
      case 1: /*0x6ae937*/
        hWnd = -1; /*0x6ae939*/
        break;
      case 4: /*0x6ae937*/
        hWnd = 0; /*0x6ae948*/
        break;
      case 5: /*0x6ae937*/
        hWnd = 1; /*0x6ae957*/
        break;
      default:
        v21 = -(v20 != 6); /*0x6ae966*/
        LOBYTE(v21) = v21 & 0xFD; /*0x6ae968*/
        hWnd = v21 + 2; /*0x6ae96d*/
        break;
    }
    v22 = 0; /*0x6ae982*/
    v60 = (HWND)SendDlgItemMessageA((HWND)this, v19, 0x146u, 0, 0); /*0x6ae986*/
    if ( (int)v60 > 0 ) /*0x6ae98a*/
    {
      while ( SendDlgItemMessageA((HWND)this, v19, 0x150u, v22, 0) != hWnd ) /*0x6ae9a0*/
      {
        if ( (int)++v22 >= (int)v60 ) /*0x6ae9a9*/
          goto LABEL_44; /*0x6ae9a9*/
      }
      SendDlgItemMessageA((HWND)this, v19, 0x14Eu, v22, 0); /*0x6ae9b7*/
    }
LABEL_44:
    v56 = (ObjectClass *)((char *)v56 + 1); /*0x6ae9bd*/
    ResourceID2CSF = GetResourceID2CSF(v56); /*0x6ae9d1*/
    ResourceIDCSF = GetResourceIDCSF(v56); /*0x6ae9dc*/
    nIDDlgItem = GetResourceID3CSF(v56); /*0x6ae9e7*/
    ResourceID4CSF = (HWND)GetResourceID4CSF(v56); /*0x6ae9f0*/
    if ( hWnd == -1 ) /*0x6ae9fb*/
    {
      SetupLobbyCountryCombo((HWND)this, ResourceID2CSF, -2); /*0x6aea07*/
      SetupSkirmishSpawnLocations((HWND)this, ResourceIDCSF, -2); /*0x6aea12*/
      SetupLobbyFactionSlots((HWND)this, nIDDlgItem, -2); /*0x6aea1f*/
      SetupLobbyPlayerSlots((HWND)this, (int)ResourceID4CSF, -2); /*0x6aea2c*/
      hWnda = GetDlgItem((HWND)this, ResourceID2CSF); /*0x6aea3d*/
      v25 = GetDlgItem((HWND)this, ResourceIDCSF); /*0x6aea43*/
      nIDDlgItemb = GetDlgItem((HWND)this, nIDDlgItem); /*0x6aea4d*/
      v62 = GetDlgItem((HWND)this, (int)ResourceID4CSF); /*0x6aea66*/
      EnableWindow(hWnda, 0); /*0x6aea6a*/
      EnableWindow(v25, 0); /*0x6aea6f*/
      EnableWindow(nIDDlgItemb, 0); /*0x6aea78*/
      EnableWindow(v62, 0); /*0x6aea81*/
    }
    else
    {
      SetupLobbyCountryCombo((HWND)this, ResourceID2CSF, *v55); /*0x6aea90*/
      SetupSkirmishSpawnLocations((HWND)this, ResourceIDCSF, v55[1]); /*0x6aeaa1*/
    }
    v18 = v56; /*0x6aeaa6*/
    v55 += 3; /*0x6aeab8*/
  }
  while ( (int)&v56->AbstractClass + 1 < 8 );
  if ( dword_A8B3C4 <= 0 || (v26 = MultiplayerGameMode::ListGet(), v27 = dword_A8B3C4, dword_A8B3C4 > v26) ) /*0x6aeadb*/
  {
    v27 = *(_DWORD *)(MultiplayerGameMode::GetFirst() + 40); /*0x6aeae2*/
    dword_A8B3C4 = v27; /*0x6aeae5*/
  }
  *(_DWORD *)stru_A8B250.__pad_0 = v27; /*0x6aeaeb*/
  v28 = (char *)Skirmish_Setup(); /*0x6aeaf6*/
  First = (HWND)v28; /*0x6aeaf8*/
  dword_A8B3C4 = *((_DWORD *)v28 + 10); /*0x6aeaff*/
  *(_DWORD *)stru_A8B250.__pad_0 = *((_DWORD *)v28 + 10); /*0x6aeb07*/
  GDlg::LoadLetterStrings(); /*0x6aeb0d*/
  Lobby::InvalidatePlayerSlots((Lobby *)this); /*0x6aeb14*/
  SetupLobbyPlayerSlotDialog((HWND)this, 0); /*0x6aeb1d*/
  v29 = dword_A8B3C8; /*0x6aeb22*/
  if ( dword_A8B3C8 < 0 || dword_A8B3C8 >= dword_A8B8D8 ) /*0x6aeb32*/
  {
    v29 = 0; /*0x6aeb34*/
    dword_A8B3C8 = 0; /*0x6aeb36*/
  }
  *(_DWORD *)&stru_A8B250.__pad_0[4] = LoadScenarioClassByIndex(v29) != 0 ? dword_A8B3C8 : 0;
  nIDDlgItema = *(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]); /*0x6aeb5e*/
  if ( !(unsigned __int8)MapPreview::Check(v28, nIDDlgItema) ) /*0x6aeb62*/
  {
    v30 = (*(int (__thiscall **)(char *))(*(_DWORD *)v28 + 68))(v28); /*0x6aeb6f*/
    if ( v30 == -1 ) /*0x6aeb75*/
    {
      First = (HWND)MultiplayerGameMode::GetFirst(); /*0x6aeb7f*/
      dword_A8B3C4 = *((_DWORD *)First + 10); /*0x6aeb83*/
      *(struct HWND__ *)stru_A8B250.__pad_0 = First[10]; /*0x6aeb8c*/
      v30 = (*(int (__thiscall **)(HWND))(*(_DWORD *)First + 68))(First); /*0x6aeb96*/
    }
    v31 = *(_DWORD *)(dword_A8B8CC + 4 * v30); /*0x6aeb9f*/
    dword_A8B3C8 = v30; /*0x6aeba2*/
    nIDDlgItema = v31; /*0x6aeba7*/
    *(_DWORD *)&stru_A8B250.__pad_0[4] = v30; /*0x6aebab*/
    strcpy(byte_A8B8E0, (const char *)(v31 + 88)); /*0x6aebca*/
    v28 = (char *)First; /*0x6aebd3*/
  }
  dword_A8B23C = (ObjectClass *)v28; /*0x6aebdd*/
  PlayerCountMap = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x6aebee*/
  if ( !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C) /*0x6aec07*/
    || (ptr_8 = dword_A8B230[127].ptr_8, (int)ptr_8 > PlayerCountMap) )
  {
    ptr_8 = (void *)PlayerCountMap; /*0x6aec09*/
  }
  ResetLobbyFactionTable((int)ptr_8); /*0x6aec0b*/
  Lobby::InvalidateFactionCombos((Lobby *)this); /*0x6aec12*/
  Lobby::InvalidatePlayerSlots((Lobby *)this); /*0x6aec19*/
  if ( this && dword_A8B23C ) /*0x6aec29*/
  {
    for ( j = 1; j < 8; ++j ) /*0x6aec2b*/
    {
      v35 = GetResourceID4CSF((ObjectClass *)j); /*0x6aec32*/
      if ( dword_A8B23C && LOBYTE(dword_A8B23C->ambientSoundController[0]) ) /*0x6aec41*/
        SetupLobbyPlayerSlots((HWND)this, v35, 3); /*0x6aec4a*/
      else
        SetupLobbyPlayerSlots((HWND)this, v35, -2); /*0x6aec52*/
    }
  }
  Skirmish_Setup_6ADDF0((HWND)this, -1, *(int *)&stru_A8B250.__pad_0[4]); /*0x6aec69*/
  dword_A8B23C = (ObjectClass *)v28; /*0x6aec6e*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)v28 + 32))(v28); /*0x6aec78*/
  Skirmish::EnableSpawnButtons(this); /*0x6aec7d*/
  SetDialogPlayerName((HWND)this, (int)v28); /*0x6aec86*/
  Dialog::ShowPlayerName((Dialog *)this); /*0x6aec8d*/
  PtrVector::Destroy(&stru_A8DA74); /*0x6aec97*/
  v36 = GetDlgItem; /*0x6aecad*/
  *(_DWORD *)&stru_A8B250.__pad_0[24] = dword_A8B3CC; /*0x6aecb9*/
  *(_DWORD *)&stru_A8B250.__pad_0[12] = dword_A8B3D0; /*0x6aecbf*/
  *(_DWORD *)&stru_A8B250.__pad_0[32] = dword_A8B3D4; /*0x6aecc5*/
  v37 = GetDlgItem((HWND)this, 1321); /*0x6aecca*/
  v38 = v37; /*0x6aeccc*/
  if ( v37 ) /*0x6aecd0*/
  {
    v39 = 6 - *(_DWORD *)&stru_A8B250.__pad_0[24]; /*0x6aecea*/
    SendMessageA(v37, 0x406u, 1u, 393216); /*0x6aecec*/
    SendMessageA(v38, 0x405u, 1u, v39); /*0x6aecf7*/
    v36 = GetDlgItem; /*0x6aecf9*/
  }
  v40 = v36((HWND)this, 1297); /*0x6aed07*/
  if ( v40 ) /*0x6aed0b*/
  {
    SendMessageA( /*0x6aed32*/
      v40,
      0x406u,
      1u,
      *(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5248)
    | (*(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5256) << 16));
    SendMessageA(v40, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[12]); /*0x6aed42*/
    SendMessageA(v40, 0x4ABu, 0, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5260)); /*0x6aed59*/
  }
  v41 = v36((HWND)this, 1292); /*0x6aed63*/
  if ( v41 ) /*0x6aed67*/
  {
    SendMessageA( /*0x6aed8e*/
      v41,
      0x406u,
      1u,
      *(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5264)
    | (*(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5272) << 16));
    SendMessageA(v41, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[32]); /*0x6aed9e*/
  }
  stru_A8B250.__pad_0[18] = byte_A8B3D8; /*0x6aedb1*/
  stru_A8B250.__pad_0[19] = byte_A8B3D9; /*0x6aedbd*/
  stru_A8B250.__pad_0[20] = byte_A8B3DA; /*0x6aedcf*/
  dword_A8B320 = byte_A8B3DB; /*0x6aedd4*/
  stru_A8B250.__pad_0[17] = byte_A8B3DC; /*0x6aedda*/
  v42 = v36((HWND)this, 1358); /*0x6aede0*/
  if ( v42 ) /*0x6aede4*/
    SendMessageA(v42, 0xF1u, stru_A8B250.__pad_0[18] != 0, 0); /*0x6aedfc*/
  v43 = v36((HWND)this, 1690); /*0x6aee04*/
  if ( v43 ) /*0x6aee08*/
    SendMessageA(v43, 0xF1u, stru_A8B250.__pad_0[19] != 0, 0); /*0x6aee20*/
  v44 = v36((HWND)this, 1693); /*0x6aee28*/
  if ( v44 ) /*0x6aee2c*/
    SendMessageA(v44, 0xF1u, stru_A8B250.__pad_0[20] != 0, 0); /*0x6aee44*/
  v45 = v36((HWND)this, 1683); /*0x6aee4c*/
  if ( v45 ) /*0x6aee50*/
    SendMessageA(v45, 0xF1u, dword_A8B320 != 0, 0); /*0x6aee68*/
  v46 = v36((HWND)this, 1686); /*0x6aee70*/
  if ( v46 ) /*0x6aee75*/
    SendMessageA(v46, 0xF1u, stru_A8B250.__pad_0[17] != 0, 0); /*0x6aee8d*/
  if ( !(unsigned __int8)IsRandMap::Sed(nIDDlgItema) ) /*0x6aee93*/
    goto LABEL_92; /*0x6aee93*/
  ScenarioClass::CopyStartPositions(v52); /*0x6aee9c*/
  v47 = g_UIControlState; /*0x6aeea1*/
  if ( g_UIControlState ) /*0x6aeea9*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x6aeead*/
    __3_YAXPAX_Z(v47); /*0x6aeeb3*/
  }
  v48 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x6aeebd*/
  v49 = v48 ? (Skirmish *)unknown_libname_27(v48) : 0;
  g_UIControlState = v49; /*0x6aeedb*/
  Surface::LoadToSurfaceSHP((Surface *)v49, ExistingFileName); /*0x6aeee0*/
  if ( !*(_DWORD *)g_UIControlState ) /*0x6aeeeb*/
LABEL_92:
    Session::PrepareGame((Session *)this); /*0x6aeef2*/
  return 0; /*0x6aeef7*/
}



// ==== 0x006AEF10  sub_6AEF10  this=-  sig=ida-proto ====
void sub_6AEF10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6aef1c*/
  dbl_B0B5C0 = Math::Sqrt(v0 + v0); /*0x6aef2e*/
}



// ==== 0x006AEF40  sub_6AEF40  this=-  sig=ida-proto ====
void sub_6AEF40()
{
  dbl_B0B628 = dbl_B0B5C0 / 60.0; /*0x6aef4c*/
}



// ==== 0x006AEF60  sub_6AEF60  this=-  sig=ida-proto ====
void sub_6AEF60()
{
  dbl_B0B610 = 1.0 / dbl_B0B628; /*0x6aef6c*/
}



// ==== 0x006AEF80  sub_6AEF80  this=-  sig=ida-proto ====
void sub_6AEF80()
{
  dbl_B0B608 = 0.0174532925199433 * 45.0; /*0x6aef8c*/
}



// ==== 0x006AEFA0  sub_6AEFA0  this=-  sig=ida-proto ====
void sub_6AEFA0()
{
  dbl_B0B5C8 = 0.0174532925199433 * 60.0; /*0x6aefac*/
}



// ==== 0x006AEFC0  sub_6AEFC0  this=-  sig=ida-proto ====
void sub_6AEFC0()
{
  dbl_B0B5A0 = 0.0174532925199433 * 90.0; /*0x6aefcc*/
}



// ==== 0x006AEFE0  sub_6AEFE0  this=-  sig=ida-proto ====
__int64 sub_6AEFE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0B5A0 - dbl_B0B5C8); /*0x6aeff2*/
  result = Math::RoundToInt(v0 * dbl_B0B5C0 * 0.5); /*0x6af006*/
  dword_B0B630 = result; /*0x6af00b*/
  return result; /*0x6af010*/
}



// ==== 0x006AF020  sub_6AF020  this=-  sig=ida-proto ====
void sub_6AF020()
{
  dbl_B0B5D0 = Math::ArcTan((double)dword_B0B630 * 0.00390625); /*0x6af037*/
}



// ==== 0x006AF050  sub_6AF050  this=-  sig=ida-proto ====
void sub_6AF050()
{
  dbl_B0B5E8 = Math::ArcTan((double)(2 * dword_B0B630) / dbl_B0B5C0); /*0x6af072*/
}



// ==== 0x006AF080  sub_6AF080  this=-  sig=ida-proto ====
__int64 sub_6AF080()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B630) + 0.5); /*0x6af09b*/
  dword_B0B624 = result; /*0x6af0a0*/
  return result; /*0x6af0a6*/
}



// ==== 0x006AF0B0  sub_6AF0B0  this=-  sig=ida-proto ====
int sub_6AF0B0()
{
  dword_B0B5B8 = 0; /*0x6af0b2*/
  return 0; /*0x6af0be*/
}



// ==== 0x006AF0C0  sub_6AF0C0  this=-  sig=ida-proto ====
int sub_6AF0C0()
{
  dword_B0B5D8 = 0; /*0x6af0c2*/
  dword_B0B5DC = 0; /*0x6af0c7*/
  dword_B0B5E0 = 0; /*0x6af0cc*/
  return 0; /*0x6af0d1*/
}



// ==== 0x006AF0E0  sub_6AF0E0  this=-  sig=ida-proto ====
int sub_6AF0E0()
{
  dword_B0B620 = 0; /*0x6af0e5*/
  dword_B0B618 = 128; /*0x6af0ef*/
  dword_B0B61C = 128; /*0x6af0f4*/
  return 128; /*0x6af0f9*/
}



// ==== 0x006AF100  sub_6AF100  this=-  sig=ida-proto ====
int sub_6AF100()
{
  dword_B0B5A8 = 0; /*0x6af102*/
  dword_B0B5AC = 0; /*0x6af107*/
  dword_B0B5B0 = 0; /*0x6af10c*/
  dword_B0B5B4 = 0; /*0x6af111*/
  return 0; /*0x6af116*/
}



// ==== 0x006AF120  sub_6AF120  this=-  sig=ida-proto ====
int sub_6AF120()
{
  dword_B0B5F4 = 0; /*0x6af127*/
  dword_B0B5F8 = 0; /*0x6af12c*/
  byte_B0B5FC = 1; /*0x6af131*/
  byte_B0B5FD = 0; /*0x6af138*/
  SlaveManagerClass_Array = (int)&DynamicVectorClass<SlaveManagerClass *>::`vftable'; /*0x6af13d*/
  dword_B0B604 = 10; /*0x6af147*/
  dword_B0B600 = 0; /*0x6af151*/
  return atexit(sub_6AF160); /*0x6af15c*/
}



// ==== 0x006AF160  sub_6AF160  this=-  sig=ida-proto ====
void __cdecl sub_6AF160()
{
  SlaveManagerClass_Array = (int)&VectorClass<SlaveManagerClass *>::`vftable'; /*0x6af168*/
  if ( dword_B0B5F4 && byte_B0B5FD ) /*0x6af17c*/
  {
    __3_YAXPAX_Z(dword_B0B5F4); /*0x6af17f*/
    dword_B0B5F4 = 0; /*0x6af187*/
  }
  byte_B0B5FD = 0; /*0x6af18d*/
  dword_B0B5F8 = 0; /*0x6af193*/
}



// ==== 0x006AF1A0  SlaveManagerClass::ctor  this=SlaveManagerClass  sig=csp ====
int __thiscall sub_6AF1A0(int this, int a2, int a3, int a4, int a5, int a6)
{
  int *v7; // eax
  wchar_t *v8; // ecx
  int *v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v19; // [esp+10h] [ebp-8h]
  int i; // [esp+1Ch] [ebp+4h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6af1a8*/
  SlaveControlVector::Constructor((_DWORD *)(this + 56), 0, 0); /*0x6af1b6*/
  *(_DWORD *)(this + 56) = &DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6af1c3*/
  *(_DWORD *)(this + 76) = 10; /*0x6af1c9*/
  *(_DWORD *)(this + 72) = 0; /*0x6af1d0*/
  *(_DWORD *)(this + 80) = dword_A8ED84; /*0x6af1d8*/
  *(_DWORD *)(this + 88) = 0; /*0x6af1df*/
  *(_DWORD *)(this + 36) = a2; /*0x6af1e2*/
  *(_DWORD *)(this + 40) = a3; /*0x6af1e9*/
  *(_DWORD *)this = &SlaveManagerClass::`vftable'; /*0x6af1f2*/
  *(_DWORD *)(this + 4) = &SlaveManagerClass::`vftable'; /*0x6af1f8*/
  *(_DWORD *)(this + 8) = &SlaveManagerClass::`vftable'; /*0x6af1ff*/
  *(_DWORD *)(this + 12) = &SlaveManagerClass::`vftable'; /*0x6af206*/
  *(_DWORD *)(this + 44) = a4; /*0x6af20d*/
  *(_DWORD *)(this + 48) = a5; /*0x6af210*/
  *(_DWORD *)(this + 52) = a6; /*0x6af213*/
  for ( i = 0; i < *(_DWORD *)(this + 44); ++i ) /*0x6af21a*/
  {
    v7 = (int *)__2_YAPAXI_Z(0x14u); /*0x6af223*/
    if ( v7 ) /*0x6af22d*/
    {
      v8 = dword_A8ED84; /*0x6af22f*/
      v7[4] = 0; /*0x6af235*/
      v7[2] = (int)v8; /*0x6af238*/
      v9 = v7; /*0x6af23b*/
    }
    else
    {
      v9 = 0; /*0x6af23f*/
    }
    v10 = **(_DWORD **)(this + 40); /*0x6af249*/
    v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 60))(*(_DWORD *)(this + 36)); /*0x6af24b*/
    v12 = (*(int (__thiscall **)(_DWORD, int))(v10 + 140))(*(_DWORD *)(this + 40), v11); /*0x6af252*/
    *v9 = v12; /*0x6af25a*/
    if ( v12 ) /*0x6af25f*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 212))(v12); /*0x6af265*/
      *(_DWORD *)(*v9 + 732) = *(_DWORD *)(this + 36); /*0x6af274*/
      v9[1] = 0; /*0x6af27a*/
      v9[2] = (int)dword_A8ED84; /*0x6af284*/
      v9[3] = v19; /*0x6af28a*/
      v9[4] = 0; /*0x6af28d*/
    }
    v13 = *(_DWORD *)(this + 64); /*0x6af290*/
    if ( *(_DWORD *)(this + 72) >= v13 ) /*0x6af298*/
    {
      if ( !*(_BYTE *)(this + 69) && v13 ) /*0x6af2a1*/
        continue; /*0x6af2a1*/
      v14 = *(_DWORD *)(this + 76); /*0x6af2a3*/
      if ( v14 <= 0 /*0x6af2b2*/
        || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 56) + 8))(this + 56, v13 + v14, 0) )
      {
        continue; /*0x6af2b2*/
      }
    }
    v15 = *(_DWORD *)(this + 72); /*0x6af2b9*/
    v16 = *(_DWORD *)(this + 60); /*0x6af2bc*/
    *(_DWORD *)(this + 72) = v15 + 1; /*0x6af2c2*/
    *(_DWORD *)(v16 + 4 * v15) = v9; /*0x6af2c5*/
  }
  *(_DWORD *)(this + 80) = dword_A8ED84; /*0x6af2e7*/
  *(_DWORD *)(this + 84) = v19; /*0x6af2ee*/
  *(_DWORD *)(this + 88) = 10; /*0x6af2f1*/
  *(_DWORD *)(this + 92) = 0; /*0x6af2f4*/
  *(_DWORD *)(this + 96) = 0; /*0x6af2f7*/
  if ( dword_B0B600 < dword_B0B5F8 /*0x6af32e*/
    || (byte_B0B5FD || !dword_B0B5F8)
    && dword_B0B604 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SlaveManagerClass_Array + 8))(
         &SlaveManagerClass_Array,
         dword_B0B5F8 + dword_B0B604,
         0) )
  {
    v17 = dword_B0B600++; /*0x6af33b*/
    *((_DWORD *)dword_B0B5F4 + v17) = this; /*0x6af34a*/
  }
  return this; /*0x6af34f*/
}



// ==== 0x006AF360  SlaveManagerClass::Constructor  this=SlaveManagerClass  sig=csp ====
int __thiscall SlaveManagerClass::Constructor(SlaveManagerClass *this)
{
  int v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6af366*/
  this->slaveVectorCount = 0; /*0x6af371*/
  this->slaveVectorCapacity = 0; /*0x6af374*/
  LOBYTE(this->creationFrame) = 1; /*0x6af377*/
  BYTE1(this->creationFrame) = 0; /*0x6af37b*/
  this->slaves[0] = (int)&DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6af37e*/
  *(_DWORD *)&this->__pad_48[4] = 10; /*0x6af385*/
  *(_DWORD *)this->__pad_48 = 0; /*0x6af38c*/
  *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af395*/
  this->SlaveManagerClass_field_58 = 0; /*0x6af398*/
  this->AbstractClass = &SlaveManagerClass::`vftable'; /*0x6af39b*/
  this->? = &SlaveManagerClass::`vftable'; /*0x6af3a1*/
  this->? = &SlaveManagerClass::`vftable'; /*0x6af3a8*/
  this->? = &SlaveManagerClass::`vftable'; /*0x6af3af*/
  this->master = 0; /*0x6af3b6*/
  this->house = 0; /*0x6af3b9*/
  this->slaveOwner = 0; /*0x6af3bc*/
  this->slaveType = 0; /*0x6af3bf*/
  this->slaveCount = 0; /*0x6af3c2*/
  *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af3cb*/
  this->SlaveManagerClass_field_54 = v4; /*0x6af3ce*/
  this->SlaveManagerClass_field_58 = 0; /*0x6af3d1*/
  this->SlaveManagerClass_field_5C = 0; /*0x6af3d4*/
  this->SlaveManagerClass_field_60 = 0; /*0x6af3d7*/
  if ( dword_B0B600 < dword_B0B5F8 /*0x6af40c*/
    || (byte_B0B5FD || !dword_B0B5F8)
    && dword_B0B604 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SlaveManagerClass_Array + 8))(
         &SlaveManagerClass_Array,
         dword_B0B5F8 + dword_B0B604,
         0) )
  {
    v2 = dword_B0B600++; /*0x6af419*/
    *((_DWORD *)dword_B0B5F4 + v2) = this; /*0x6af428*/
  }
  return (int)this; /*0x6af42d*/
}



// ==== 0x006AF4A0  SlaveManagerClass::Constructor_SlaveManagerClass  this=SlaveManagerClass  sig=csp ====
void __thiscall SlaveManagerClass::Constructor_SlaveManagerClass(int this)
{
  int i; // esi
  int v3; // ebp
  int v4; // eax
  void *v5; // eax
  int v6; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)this = &SlaveManagerClass::`vftable'; /*0x6af4a5*/
  *(_DWORD *)(this + 4) = &SlaveManagerClass::`vftable'; /*0x6af4ab*/
  *(_DWORD *)(this + 8) = &SlaveManagerClass::`vftable'; /*0x6af4b2*/
  *(_DWORD *)(this + 12) = &SlaveManagerClass::`vftable'; /*0x6af4b9*/
  for ( i = *(_DWORD *)(this + 72) - 1; i >= 0; --i ) /*0x6af4c4*/
  {
    if ( *(_DWORD *)(*(_DWORD *)(this + 60) + 4 * i) ) /*0x6af4c9*/
      __3_YAXPAX_Z(*(void **)(*(_DWORD *)(this + 60) + 4 * i)); /*0x6af4d1*/
  }
  v3 = *(_DWORD *)(this + 64); /*0x6af4e5*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 56) + 12))(this + 56); /*0x6af4e8*/
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 56) + 8))(this + 56, v3, 0); /*0x6af4f2*/
  v6 = this; /*0x6af505*/
  v4 = (*(int (__thiscall **)(int *, int *))(SlaveManagerClass_Array + 16))(&SlaveManagerClass_Array, &v6); /*0x6af509*/
  if ( v4 != -1 && v4 < dword_B0B600 && v4 < --dword_B0B600 ) /*0x6af525*/
  {
    do /*0x6af53d*/
    {
      ++v4; /*0x6af52d*/
      *((_DWORD *)dword_B0B5F4 + v4 - 1) = *((_DWORD *)dword_B0B5F4 + v4); /*0x6af531*/
    }
    while ( v4 < dword_B0B600 ); /*0x6af53d*/
  }
  v5 = *(void **)(this + 60); /*0x6af53f*/
  *(_DWORD *)(this + 56) = &VectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6af542*/
  if ( v5 && *(_BYTE *)(this + 69) ) /*0x6af54c*/
  {
    __3_YAXPAX_Z(v5); /*0x6af554*/
    *(_DWORD *)(this + 60) = 0; /*0x6af55c*/
  }
  *(_BYTE *)(this + 69) = 0; /*0x6af565*/
  *(_DWORD *)(this + 64) = 0; /*0x6af569*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x6af570*/
}



// ==== 0x006AF580  SlaveManagerClass::SetOwner  this=SlaveManagerClass  sig=csp ====
char __thiscall SlaveManagerClass::SetOwner(SlaveManagerClass *this, int a2)
{
  TechnoClass *master; // eax
  TechnoClass *v4; // ecx
  int v5; // ecx
  int i; // ecx

  master = this->master; /*0x6af588*/
  master->slaveManager = 0; /*0x6af58b*/
  this->master = (TechnoClass *)a2; /*0x6af595*/
  v4 = *(TechnoClass **)(a2 + 728); /*0x6af598*/
  if ( v4 ) /*0x6af5a0*/
  {
    LOBYTE(master) = TechnoClass::MutateAll(v4, 0, 0); /*0x6af5a6*/
    v5 = *(_DWORD *)(a2 + 728); /*0x6af5ab*/
    if ( v5 ) /*0x6af5b3*/
      LOBYTE(master) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x6af5b9*/
  }
  *(_DWORD *)(a2 + 728) = this; /*0x6af5bc*/
  for ( i = *(_DWORD *)this->__pad_48 - 1; i >= 0; --i ) /*0x6af5c6*/
  {
    master = **(TechnoClass ***)(this->slaveVectorCount + 4 * i); /*0x6af5ce*/
    if ( master ) /*0x6af5d2*/
      master->slaveOwner = this->master; /*0x6af5d7*/
  }
  return (char)master; /*0x6af5e0*/
}



// ==== 0x006AF5F0  SlaveManagerClass::UpdateSlaves  this=SlaveManagerClass  sig=csp ====
char __thiscall SlaveManagerClass::UpdateSlaves(SlaveManagerClass *this)
{
  int *v2; // edi
  int v3; // edx
  TechnoClass *SlaveManagerClass_field_58; // eax
  SlaveManagerClass *v6; // [esp+0h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-8h]

  v2 = *(int **)&stru_A8EB00.?[416]; /*0x6af5f7*/
  v3 = *(_DWORD *)&this->__pad_48[8]; /*0x6af5fd*/
  SlaveManagerClass_field_58 = (TechnoClass *)this->SlaveManagerClass_field_58; /*0x6af600*/
  if ( v3 == -1 ) /*0x6af606*/
  {
LABEL_4:
    if ( SlaveManagerClass_field_58 ) /*0x6af614*/
      return (char)SlaveManagerClass_field_58; /*0x6af614*/
    goto LABEL_5; /*0x6af614*/
  }
  if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 < (int)SlaveManagerClass_field_58 ) /*0x6af60e*/
  {
    SlaveManagerClass_field_58 = (TechnoClass *)((char *)SlaveManagerClass_field_58 /*0x6af610*/
                                               - (*(_DWORD *)&stru_A8EB00.?[416]
                                                - v3));
    goto LABEL_4; /*0x6af610*/
  }
LABEL_5:
  *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af616*/
  this->SlaveManagerClass_field_54 = v7; /*0x6af622*/
  this->SlaveManagerClass_field_58 = 10; /*0x6af625*/
  SlaveManagerClass_field_58 = this->master; /*0x6af628*/
  if ( SlaveManagerClass_field_58 ) /*0x6af62d*/
  {
    SlaveManagerClass::ProcessSlaves(v6, v2, (int)this); /*0x6af631*/
    LOBYTE(SlaveManagerClass_field_58) = ProcessDeployAction((ObjectClass *)this); /*0x6af638*/
  }
  return (char)SlaveManagerClass_field_58; /*0x6af63d*/
}



// ==== 0x006AF650  SlaveManagerClass::CreateSlave  this=SlaveManagerClass  sig=csp ====
wchar_t *__thiscall SlaveManagerClass::CreateSlave(SlaveManagerClass *this, wchar_t **a2)
{
  int (__thiscall **ptr_0)(HouseClass *, int); // edi
  int v4; // eax
  wchar_t *result; // eax
  wchar_t *v6; // [esp+Ch] [ebp-8h]

  ptr_0 = (int (__thiscall **)(HouseClass *, int))this->house->AbstractClass; /*0x6af65f*/
  v4 = (*((int (__thiscall **)(TechnoClass *))this->master->RadioClass + 15))(this->master); /*0x6af661*/
  result = (wchar_t *)ptr_0[35](this->house, v4); /*0x6af668*/
  *a2 = result; /*0x6af674*/
  if ( result ) /*0x6af676*/
  {
    (*(void (__thiscall **)(wchar_t *))(*(_DWORD *)result + 212))(result); /*0x6af67c*/
    *((_DWORD *)*a2 + 183) = this->master; /*0x6af68b*/
    a2[1] = 0; /*0x6af691*/
    result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x6af698*/
    a2[2] = *(wchar_t **)&stru_A8EB00.?[416]; /*0x6af6a2*/
    a2[3] = v6; /*0x6af6a4*/
    a2[4] = 0; /*0x6af6a7*/
  }
  return result; /*0x6af6aa*/
}



// ==== 0x006AF6C0  SlaveManagerClass::ProcessSlaves  this=SlaveManagerClass  sig=csp ====
int __usercall SlaveManagerClass::ProcessSlaves@<eax>(
        SlaveManagerClass *this,
        int *p_SlaveManagerClass_field_5C@<edi>,
        int a3@<esi>)
{
  int v3; // ecx
  int v4; // ebp
  BuildingTypeClass **v5; // ebx
  int result; // eax
  int v7; // ecx
  int v8; // edi
  wchar_t *v9; // esi
  int v10; // ecx
  void (__thiscall **v11)(wchar_t *); // ebx
  int v12; // ecx
  int v13; // eax
  void *FoundationWidth; // eax
  int *v15; // ecx
  int FoundationHeight; // eax
  int v17; // ebx
  CellStruct *v18; // eax
  HouseClass **v19; // eax
  void (__thiscall **v20)(wchar_t *); // ebx
  Cell *v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // ebx
  __int16 v25; // ax
  int *v26; // ecx
  int v27; // eax
  int v28; // ecx
  CellStruct *v29; // eax
  void (__thiscall **v30)(wchar_t *); // ebx
  Cell *v31; // eax
  int v32; // eax
  int v33; // ecx
  int v34; // ebx
  void *v35; // eax
  int *v36; // ecx
  int v37; // eax
  int v38; // ebx
  CellStruct *v39; // eax
  HouseClass **v40; // eax
  int v41; // ecx
  __int16 slaveOwner; // bx
  _DWORD *v43; // eax
  int v44; // ecx
  int v45; // ebx
  void *v46; // eax
  int *v47; // ecx
  int v48; // eax
  int v49; // ebx
  CellStruct *v50; // eax
  void **v51; // eax
  unsigned __int16 ptr_4; // bx
  int (__thiscall **v53)(wchar_t *); // edx
  _DWORD *v54; // eax
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // ecx
  int v59; // edi
  __int16 v60; // ax
  int *v61; // ecx
  int v62; // eax
  int v63; // ecx
  CellStruct *v64; // eax
  void **v65; // eax
  void (__thiscall **v66)(wchar_t *); // edi
  int v67; // edx
  int v68; // ecx
  int v69; // eax
  int v70; // edx
  int v71; // ecx
  int v72; // ecx
  _WORD *v73; // [esp-6h] [ebp-B0h]
  _WORD *v74; // [esp-6h] [ebp-B0h]
  _WORD *v77; // [esp+2h] [ebp-A8h]
  SlaveManagerClass v78; // [esp+Eh] [ebp-9Ch] BYREF
  char v79[4]; // [esp+76h] [ebp-34h] BYREF
  __int16 v80[2]; // [esp+7Ah] [ebp-30h] BYREF
  char v81[12]; // [esp+7Eh] [ebp-2Ch] BYREF
  int v82; // [esp+8Ah] [ebp-20h] BYREF
  _DWORD v83[3]; // [esp+8Eh] [ebp-1Ch] BYREF
  char v84[8]; // [esp+9Ah] [ebp-10h] BYREF
  _DWORD v85[2]; // [esp+A2h] [ebp-8h] BYREF

  v4 = v3; /*0x6af6c8*/
  v5 = 0; /*0x6af6ca*/
  result = 0; /*0x6af6cc*/
  v7 = *(_DWORD *)(v3 + 72); /*0x6af6ce*/
  v78.? = 0; /*0x6af6d1*/
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(*(_DWORD *)(v4 + 60) + 4 * result); /*0x6af6e6*/
      v9 = *(wchar_t **)v8; /*0x6af6e9*/
      if ( !*(_DWORD *)v8 && *(_DWORD *)(v8 + 4) != 6 ) /*0x6af6f9*/
      {
        *(_DWORD *)v8 = 0; /*0x6af707*/
        *(_DWORD *)(v8 + 4) = 6; /*0x6af709*/
        v10 = *(_DWORD *)(v4 + 48); /*0x6af711*/
        *(_DWORD *)(v8 + 8) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af717*/
        *(_DWORD *)(v8 + 12) = v83[1]; /*0x6af721*/
        *(_DWORD *)(v8 + 16) = v10; /*0x6af724*/
      }
      switch ( *(_DWORD *)(v8 + 4) )
      {
        case 1:
          v78.AbstractClass = *(void **)v9; /*0x6af744*/
          v78.? = *(_DWORD *)(*((int (__thiscall **)(wchar_t *, char *, int, _DWORD, int *, int))v78.AbstractClass + 206))( /*0x6af778*/
                               v9,
                               v84,
                               *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6020) / 256,
                               0,
                               p_SlaveManagerClass_field_5C,
                               a3);
          if ( v78.? == dword_B0B5B8 )
          {
            TechnoClass::SetFocus((TechnoClass *)v9, 0); /*0x6af7c5*/
            v12 = *(_DWORD *)(v4 + 36); /*0x6af7ca*/
            if ( v12 && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) == 6 )
            {
              v78.? = *(void **)(v4 + 36); /*0x6af7e4*/
              if ( v78.? )
              {
                v13 = (*(int (__thiscall **)(void *))(*(_DWORD *)v78.? + 44))(v78.?); /*0x6af7ec*/
                v5 = v13 == 6 ? (BuildingTypeClass **)v78.? : 0;
              }
              FoundationWidth = (void *)BuildingTypeClass::GetFoundationWidth(v5[328]); /*0x6af806*/
              v15 = (int *)v5[328]; /*0x6af80b*/
              v78.? = FoundationWidth; /*0x6af813*/
              FoundationHeight = BuildingTypeClass::GetFoundationHeight(v15, 0); /*0x6af817*/
              v17 = *(_DWORD *)(v4 + 36); /*0x6af81f*/
              v77 = CellStruct::Set((CellStruct *)v83, LOWORD(v78.?) - 1, FoundationHeight / 2); /*0x6af839*/
              v18 = (CellStruct *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v17 + 440))(v17, &v78.creationFrame); /*0x6af849*/
              v19 = (HouseClass **)CellStruct::Add(v18, &v82, v77); /*0x6af851*/
            }
            else
            {
              v19 = (HouseClass **)(*(int (__thiscall **)(_DWORD, __int16 *))(**(_DWORD **)(v4 + 36) + 440))( /*0x6af862*/
                                     *(_DWORD *)(v4 + 36),
                                     v80);
            }
            v20 = *(void (__thiscall ***)(wchar_t *))v9; /*0x6af86a*/
            v78.slaveOwner = *v19; /*0x6af870*/
            a3 = 1; /*0x6af874*/
            p_SlaveManagerClass_field_5C = (int *)CellCoord::To_CellObj( /*0x6af881*/
                                                    (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                    (__int16 *)&v78.slaveOwner);
            v20[288](v9); /*0x6af884*/
            (*(void (__thiscall **)(wchar_t *, int, _DWORD))(*(_DWORD *)v9 + 488))(v9, 2, 0); /*0x6af892*/
            *(_DWORD *)(v8 + 4) = 4; /*0x6af898*/
          }
          else
          {
            v11 = *(void (__thiscall ***)(wchar_t *))v9; /*0x6af78c*/
            a3 = 1; /*0x6af792*/
            p_SlaveManagerClass_field_5C = (int *)CellCoord::To_CellObj( /*0x6af79f*/
                                                    (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                    (__int16 *)&v78.?);
            v11[288](v9); /*0x6af7a2*/
            (*(void (__thiscall **)(wchar_t *, int, _DWORD))(*(_DWORD *)v9 + 488))(v9, 2, 0); /*0x6af7b0*/
            *(_DWORD *)(v8 + 4) = 2; /*0x6af7b6*/
          }
          goto LABEL_62; /*0x6af89f*/
        case 2:
          v21 = (Cell *)(*(int (__thiscall **)(wchar_t *))(*(_DWORD *)v9 + 444))(v9); /*0x6af8a8*/
          if ( (unsigned __int8)Cell::IsBridge2(v21) ) /*0x6af8b0*/
          {
            SlaveManagerClass::Check((SlaveManagerClass *)v9); /*0x6af8bb*/
            *(_DWORD *)(v8 + 4) = 3; /*0x6af8c0*/
          }
          else if ( !*((_DWORD *)v9 + 361) ) /*0x6af8cc*/
          {
            *(_DWORD *)(v8 + 4) = 1; /*0x6af8d8*/
          }
          goto LABEL_62; /*0x6af8c7*/
        case 3:
          if ( SlaveManagerClass::CheckIsOne((SlaveManagerClass *)v9) ) /*0x6af8e6*/
          {
            v22 = (*(int (__thiscall **)(wchar_t *, int *, int))(*(_DWORD *)v9 + 444))( /*0x6af8f7*/
                    v9,
                    p_SlaveManagerClass_field_5C,
                    a3);
            TechnoClass::SetFocus((TechnoClass *)v9, v22); /*0x6af900*/
            v23 = *(_DWORD *)(v4 + 36); /*0x6af905*/
            if ( v23 && (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23) == 6 ) /*0x6af914*/
            {
              v24 = IsObjectTypeBuildingType(*(_DWORD *)(v4 + 36)); /*0x6af91e*/
              v25 = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v24 + 1312)); /*0x6af926*/
              v26 = *(int **)(v24 + 1312); /*0x6af92b*/
              LOWORD(v78.master) = v25 - 1; /*0x6af934*/
              v27 = BuildingTypeClass::GetFoundationHeight(v26, 0); /*0x6af939*/
              v28 = *(_DWORD *)(v4 + 36); /*0x6af93f*/
              HIWORD(v78.master) = v27 / 2; /*0x6af946*/
              v29 = (CellStruct *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v28 + 440))(v28, v78.slaves); /*0x6af95c*/
              v78.? = *CellStruct::Add(v29, &v78.__pad_48[4], &v78.master); /*0x6af96b*/
            }
            else
            {
              v78.? = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v4 + 36) + 440))( /*0x6af983*/
                                   *(_DWORD *)(v4 + 36),
                                   &v78.SlaveManagerClass_field_54);
            }
            v30 = *(void (__thiscall ***)(wchar_t *))v9; /*0x6af987*/
            a3 = 1; /*0x6af98d*/
            p_SlaveManagerClass_field_5C = (int *)CellCoord::To_CellObj( /*0x6af99a*/
                                                    (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                    (__int16 *)&v78.?);
            v30[288](v9); /*0x6af99d*/
            (*(void (__thiscall **)(wchar_t *, int, _DWORD))(*(_DWORD *)v9 + 488))(v9, 2, 0); /*0x6af9ab*/
            *(_DWORD *)(v8 + 4) = 4; /*0x6af9b1*/
          }
          else
          {
            v31 = (Cell *)(*(int (__thiscall **)(wchar_t *))(*(_DWORD *)v9 + 444))(v9); /*0x6af9c1*/
            if ( (unsigned __int8)Cell::IsBridge2(v31) ) /*0x6af9c9*/
            {
              if ( !SlaveManagerClass::IsMasterHarvester((SlaveManagerClass *)v9) ) /*0x6af9e5*/
                *(_DWORD *)(v8 + 4) = 1; /*0x6af9f2*/
            }
            else
            {
              SlaveManagerClass::VtableDispatch((SlaveManagerClass *)v9); /*0x6af9d4*/
              *(_DWORD *)(v8 + 4) = 1; /*0x6af9d9*/
            }
          }
          goto LABEL_62; /*0x6af9b8*/
        case 4:
          v32 = *((_DWORD *)v9 + 361); /*0x6af9fe*/
          HIBYTE(v78.?) = 0; /*0x6afa04*/
          if ( v32 ) /*0x6afa0b*/
          {
            v33 = *(_DWORD *)(v4 + 36); /*0x6afa11*/
            if ( v33 && (*(int (__thiscall **)(int))(*(_DWORD *)v33 + 44))(v33) == 6 ) /*0x6afa20*/
            {
              v34 = IsObjectTypeBuildingType(*(_DWORD *)(v4 + 36)); /*0x6afa2a*/
              v35 = (void *)BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v34 + 1312)); /*0x6afa32*/
              v36 = *(int **)(v34 + 1312); /*0x6afa37*/
              v78.AbstractClass = v35; /*0x6afa3f*/
              v37 = BuildingTypeClass::GetFoundationHeight(v36, 0); /*0x6afa43*/
              v38 = *(_DWORD *)(v4 + 36); /*0x6afa4c*/
              v73 = CellStruct::Set((CellStruct *)v80, LOWORD(v78.AbstractClass) - 1, v37 / 2); /*0x6afa67*/
              v39 = (CellStruct *)(*(int (__thiscall **)(int, int *, int *))(*(_DWORD *)v38 + 440))( /*0x6afa75*/
                                    v38,
                                    &v82,
                                    &v78.SlaveManagerClass_field_54);
              v40 = (HouseClass **)CellStruct::Add(v39, v73, p_SlaveManagerClass_field_5C); /*0x6afa7d*/
            }
            else
            {
              v40 = (HouseClass **)(*(int (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)(v4 + 36) + 440))( /*0x6afa8e*/
                                     *(_DWORD *)(v4 + 36),
                                     &v78.SlaveManagerClass_field_5C,
                                     p_SlaveManagerClass_field_5C);
            }
            v41 = *((_DWORD *)v9 + 361); /*0x6afa94*/
            v78.slaveOwner = *v40; /*0x6afaa3*/
            slaveOwner = (__int16)v78.slaveOwner; /*0x6afa9a*/
            p_SlaveManagerClass_field_5C = v85; /*0x6afaa9*/
            v43 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v41 + 72))(v41); /*0x6afaaa*/
            v83[0] = *(_DWORD *)CellStruct::Set((CellStruct *)&v78.slaveCount, *v43 / 256, v43[1] / 256); /*0x6afad9*/
            LOWORD(v78.?) = LOWORD(v83[0]) - slaveOwner; /*0x6afaef*/
            HIWORD(v78.?) = HIWORD(v83[0]) - HIWORD(v78.house); /*0x6afaf4*/
            v78.AbstractClass = v78.?; /*0x6afb01*/
            if ( (__int16)SlaveManagerClass::Calc2DDistance(&v78) > *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] /*0x6afb19*/
                                                                              + 3576) )
              HIBYTE(v78.?) = 1; /*0x6afb1b*/
          }
          v44 = *(_DWORD *)(v4 + 36); /*0x6afb20*/
          if ( v44 && (*(int (__thiscall **)(int))(*(_DWORD *)v44 + 44))(v44) == 6 ) /*0x6afb2f*/
          {
            v45 = IsObjectTypeBuildingType(*(_DWORD *)(v4 + 36)); /*0x6afb39*/
            v46 = (void *)BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v45 + 1312)); /*0x6afb41*/
            v47 = *(int **)(v45 + 1312); /*0x6afb46*/
            v78.AbstractClass = v46; /*0x6afb4e*/
            v48 = BuildingTypeClass::GetFoundationHeight(v47, 0); /*0x6afb52*/
            v49 = *(_DWORD *)(v4 + 36); /*0x6afb5a*/
            v74 = CellStruct::Set((CellStruct *)v78.slaves, LOWORD(v78.AbstractClass) - 1, v48 / 2); /*0x6afb71*/
            v50 = (CellStruct *)(*(int (__thiscall **)(int, char *, int *))(*(_DWORD *)v49 + 440))( /*0x6afb7e*/
                                  v49,
                                  v78.__pad_48,
                                  &v78.slaveVectorCapacity);
            v51 = (void **)CellStruct::Add(v50, v74, p_SlaveManagerClass_field_5C); /*0x6afb86*/
          }
          else
          {
            v51 = (void **)(*(int (__thiscall **)(_DWORD, char *, int *))(**(_DWORD **)(v4 + 36) + 440))( /*0x6afb97*/
                             *(_DWORD *)(v4 + 36),
                             &v78.__pad_48[8],
                             p_SlaveManagerClass_field_5C);
          }
          v53 = *(int (__thiscall ***)(wchar_t *))v9; /*0x6afb9f*/
          p_SlaveManagerClass_field_5C = &v78.SlaveManagerClass_field_5C; /*0x6afba7*/
          v78.? = *v51; /*0x6afba8*/
          ptr_4 = (unsigned __int16)v78.?; /*0x6afb9d*/
          v54 = (_DWORD *)v53[110](v9); /*0x6afbac*/
          if ( *v54 == __PAIR32__(HIWORD(v78.AbstractClass), ptr_4) ) /*0x6afbb5*/
          {
            if ( !*((_DWORD *)v9 + 361) ) /*0x6afbc2*/
            {
              InfantryClass::SlaveGiveMoney_RecordBalanceBefore((int *)v9, *(_DWORD **)(v4 + 36)); /*0x6afbd2*/
              (*(void (__thiscall **)(wchar_t *))(*(_DWORD *)v9 + 212))(v9); /*0x6afbdb*/
              v55 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6afbe1*/
              v56 = *(_DWORD *)(v4 + 52); /*0x6afbe6*/
              *(_DWORD *)(v8 + 4) = 5; /*0x6afbec*/
              *(_DWORD *)(v8 + 8) = v55; /*0x6afbf3*/
              *(_DWORD *)(v8 + 12) = v85[0]; /*0x6afbfc*/
              *(_DWORD *)(v8 + 16) = v56; /*0x6afbff*/
              goto LABEL_62; /*0x6afc02*/
            }
LABEL_47:
            if ( !HIBYTE(v78.?) ) /*0x6afc17*/
              goto LABEL_62; /*0x6afc17*/
            goto LABEL_48; /*0x6afc17*/
          }
          if ( *((_DWORD *)v9 + 361) ) /*0x6afc07*/
            goto LABEL_47; /*0x6afc0f*/
LABEL_48:
          v57 = IsObjectTypeBuildingType(*(_DWORD *)(v4 + 36)); /*0x6afc1d*/
          v58 = *(_DWORD *)(v4 + 36); /*0x6afc25*/
          if ( v57 ) /*0x6afc2a*/
          {
            v59 = IsObjectTypeBuildingType(v58); /*0x6afc31*/
            v60 = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v59 + 1312)); /*0x6afc39*/
            v61 = *(int **)(v59 + 1312); /*0x6afc3e*/
            LOWORD(v78.?) = v60 - 1; /*0x6afc47*/
            v62 = BuildingTypeClass::GetFoundationHeight(v61, 0); /*0x6afc4c*/
            v63 = *(_DWORD *)(v4 + 36); /*0x6afc52*/
            HIWORD(v78.?) = v62 / 2; /*0x6afc59*/
            v64 = (CellStruct *)(*(int (__thiscall **)(int, char *, int *, int *))(*(_DWORD *)v63 + 440))( /*0x6afc72*/
                                  v63,
                                  v79,
                                  &v78.SlaveManagerClass_field_60,
                                  &v78.?);
            v65 = (void **)CellStruct::Add(v64, &v78.SlaveManagerClass_field_5C, (_WORD *)a3); /*0x6afc7a*/
          }
          else
          {
            v65 = (void **)(*(int (__thiscall **)(int, char *, int *, int))(*(_DWORD *)v58 + 440))( /*0x6afc8b*/
                             v58,
                             v81,
                             &v78.SlaveManagerClass_field_5C,
                             a3);
          }
          v66 = *(void (__thiscall ***)(wchar_t *))v9; /*0x6afc93*/
          v78.? = *v65; /*0x6afc99*/
          a3 = 1; /*0x6afc9d*/
          p_SlaveManagerClass_field_5C = (int *)CellCoord::To_CellObj( /*0x6afcaa*/
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (__int16 *)&v78.?);
          v66[288](v9); /*0x6afcad*/
          (*(void (__thiscall **)(wchar_t *, int, _DWORD))(*(_DWORD *)v9 + 488))(v9, 2, 0); /*0x6afcbb*/
LABEL_62:
          v72 = *(_DWORD *)(v4 + 72); /*0x6afd20*/
          result = (int)++v78.?; /*0x6afd27*/
          if ( (int)v78.? >= v72 ) /*0x6afd2e*/
            return result; /*0x6afd2e*/
          v5 = 0; /*0x6af6e1*/
          break; /*0x6af6e1*/
        case 5:
          v67 = *(_DWORD *)(v8 + 8); /*0x6afcc3*/
          v68 = *(_DWORD *)(v8 + 16); /*0x6afcc6*/
          if ( v67 == -1 ) /*0x6afccc*/
            goto LABEL_55; /*0x6afccc*/
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v67 >= v68 ) /*0x6afcd7*/
            goto LABEL_56; /*0x6afcd7*/
          v68 -= *(_DWORD *)&stru_A8EB00.?[416] - v67; /*0x6afcd9*/
LABEL_55:
          if ( !v68 ) /*0x6afcdd*/
          {
LABEL_56:
            v69 = *((_DWORD *)v9 + 432); /*0x6afcdf*/
            *((_DWORD *)v9 + 27) = *(_DWORD *)(v69 + 160); /*0x6afceb*/
            *((_DWORD *)v9 + 28) = *(_DWORD *)(v69 + 160); /*0x6afcf4*/
            *(_DWORD *)(v8 + 4) = 0; /*0x6afcf7*/
          }
          goto LABEL_62; /*0x6afcfa*/
        case 6:
          v70 = *(_DWORD *)(v8 + 8); /*0x6afcfc*/
          v71 = *(_DWORD *)(v8 + 16); /*0x6afcff*/
          if ( v70 == -1 ) /*0x6afd05*/
            goto LABEL_60; /*0x6afd05*/
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v70 >= v71 ) /*0x6afd10*/
            goto LABEL_61; /*0x6afd10*/
          v71 -= *(_DWORD *)&stru_A8EB00.?[416] - v70; /*0x6afd12*/
LABEL_60:
          if ( !v71 ) /*0x6afd16*/
LABEL_61:
            SlaveManagerClass::CreateSlave((SlaveManagerClass *)v4, (wchar_t **)v8); /*0x6afd1b*/
          goto LABEL_62; /*0x6afd1b*/
        default:
          goto LABEL_62;
      }
    }
  }
  return result; /*0x6afd36*/
}



// ==== 0x006AFD60  ObjectClass::ProcessDeployAction  this=ObjectClass  sig=csp ====
char __thiscall ProcessDeployAction(ObjectClass *this)
{
  double v1; // st7
  int v3; // eax
  _DWORD *occupant; // edi
  int v5; // edi
  _DWORD *v6; // edi
  int v7; // edi
  void *v8; // eax
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // edi
  int v12; // edi
  int v13; // ecx
  int v14; // edi
  int v15; // ecx
  _DWORD *v16; // eax
  int v17; // edx
  int v18; // eax
  __int16 v19; // di
  CellStruct *v20; // eax
  _DWORD *v21; // eax
  int v22; // edx
  __int16 v23; // cx
  int v24; // eax
  double v26; // [esp+1Ch] [ebp-38h]
  double v27; // [esp+1Ch] [ebp-38h]
  TechnoClass *v28; // [esp+24h] [ebp-30h]
  __int16 v29[2]; // [esp+2Ch] [ebp-28h] BYREF
  int v30; // [esp+30h] [ebp-24h] BYREF
  int v31; // [esp+34h] [ebp-20h] BYREF
  int v32; // [esp+38h] [ebp-1Ch] BYREF
  int v33; // [esp+3Ch] [ebp-18h] BYREF
  int v34; // [esp+40h] [ebp-14h] BYREF
  _BYTE v35[8]; // [esp+44h] [ebp-10h] BYREF
  int v36; // [esp+4Ch] [ebp-8h]

  v3 = this->customSound_controller[3]; /*0x6afd67*/
  switch ( v3 )
  {
    case 0:
      occupant = (_DWORD *)this->occupant; /*0x6afd7a*/
      if ( occupant ) /*0x6afd7f*/
      {
        v3 = (*(int (__thiscall **)(int))(*occupant + 44))(this->occupant); /*0x6afd89*/
        if ( v3 == 6 ) /*0x6afd8f*/
        {
          v5 = occupant[43]; /*0x6afd95*/
          if ( v5 != 19 && v5 != 18 ) /*0x6afda7*/
          {
            this->customSound_controller[3] = 5; /*0x6afdad*/
            this->customSound_controller[4] = 0x7FFFFFFF; /*0x6afdb4*/
          }
        }
      }
      break; /*0x6afdc0*/
    case 1:
      v6 = (_DWORD *)this->occupant; /*0x6afdc1*/
      if ( v6 && (*(int (__thiscall **)(int))(*v6 + 44))(this->occupant) == 1 && (v3 = v6[361]) != 0 ) /*0x6afddc*/
      {
        this->customSound_controller[3] = 2; /*0x6afdde*/
        this->customSound_controller[4] = 0x7FFFFFFF; /*0x6afde5*/
      }
      else
      {
        v3 = *(_DWORD *)(*(int (__thiscall **)(int, int *, int, int))(*(_DWORD *)this->occupant + 824))( /*0x6afe1c*/
                          this->occupant,
                          &v31,
                          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6024) / 256,
                          1);
        v30 = v3; /*0x6afe25*/
        *(_DWORD *)v29 = v3; /*0x6afe29*/
        if ( v3 == dword_B0B5B8 /*0x6afe57*/
          || (v3 = *BuildingClass::FindPlacementCells2((BuildingClass *)this, &v32, v3),
              *(_DWORD *)v29 = v3,
              v3 == dword_B0B5B8) )
        {
          this->customSound_controller[3] = 0; /*0x6afe67*/
          this->customSound_controller[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6afe74*/
        }
        else
        {
          v7 = *(_DWORD *)this->occupant; /*0x6afe87*/
          v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x6afe8e*/
          (*(void (__thiscall **)(int, void *, int))(v7 + 1152))(this->occupant, v8, 1); /*0x6afe97*/
          LOBYTE(v3) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this->occupant + 488))(this->occupant, 2, 0); /*0x6afea6*/
          this->customSound_controller[3] = 2; /*0x6afeac*/
          this->customSound_controller[4] = 0x7FFFFFFF; /*0x6afeb3*/
        }
      }
      break; /*0x6afdf1*/
    case 2:
      v9 = (_DWORD *)this->occupant; /*0x6afec0*/
      if ( v9 && (v3 = (*(int (__thiscall **)(int))(*v9 + 44))(this->occupant), v3 == 1) ) /*0x6afed1*/
      {
        v3 = v9[361]; /*0x6afee9*/
        if ( !v3 ) /*0x6afef1*/
        {
          LOBYTE(v3) = TechnoClass::Deploy(v28, v1); /*0x6afef9*/
          if ( (_BYTE)v3 ) /*0x6aff00*/
          {
            this->customSound_controller[3] = 4; /*0x6aff02*/
            this->customSound_controller[4] = 0x7FFFFFFF; /*0x6aff09*/
          }
          else
          {
            v10 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6aff16*/
            this->customSound_controller[3] = 3; /*0x6aff23*/
            this->customSound_controller[0] = v10; /*0x6aff2a*/
            v3 = v36; /*0x6aff2c*/
            this->customSound_controller[4] = 0x7FFFFFFF; /*0x6aff30*/
            this->customSound_controller[1] = v3; /*0x6aff38*/
            this->customSound_controller[2] = 30; /*0x6aff3c*/
          }
        }
      }
      else
      {
        this->customSound_controller[3] = 0; /*0x6afed3*/
        this->customSound_controller[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6afee0*/
      }
      break; /*0x6afee8*/
    case 3:
      v11 = this->occupant; /*0x6aff43*/
      if ( v11 && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(this->occupant) == 1 ) /*0x6aff54*/
      {
        LOBYTE(v3) = TechnoClass::Deploy(v28, v1); /*0x6aff6d*/
        if ( !(_BYTE)v3 ) /*0x6aff74*/
          goto LABEL_51; /*0x6aff74*/
        this->customSound_controller[3] = 4; /*0x6aff7a*/
        this->customSound_controller[4] = 0x7FFFFFFF; /*0x6aff81*/
      }
      else
      {
        this->customSound_controller[3] = 0; /*0x6aff56*/
        LOBYTE(v3) = stru_A8EB00.?[416]; /*0x6aff5d*/
        this->customSound_controller[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6aff62*/
      }
      break; /*0x6aff6a*/
    case 4:
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this->occupant + 44))(this->occupant); /*0x6aff93*/
      if ( v3 == 6
        && ((v12 = this->occupant) != 0
          ? (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(this->occupant) == 6 ? v12 : 0)
          : (v3 = 0),
            *(_DWORD *)(v3 + 1332)) )
      {
        this->customSound_controller[3] = 5; /*0x6affc2*/
        this->customSound_controller[4] = 0x7FFFFFFF; /*0x6affc9*/
      }
      else
      {
        v13 = this->occupant; /*0x6affd6*/
        if ( v13 )
        {
          v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13); /*0x6affe3*/
          if ( v3 == 1 )
          {
            v14 = this->occupant; /*0x6affef*/
            v3 = v14 ? ((*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(this->occupant) == 1 ? v14 : 0) : 0;
            if ( !*(_BYTE *)(v3 + 1676) && *(_DWORD *)(this->occupant + 172) == 5 ) /*0x6b0022*/
            {
              this->customSound_controller[3] = 2; /*0x6b0028*/
              this->customSound_controller[4] = 0x7FFFFFFF; /*0x6b002f*/
            }
          }
        }
      }
      break; /*0x6affd5*/
    case 5:
      v15 = this->occupant; /*0x6b003c*/
      if ( v15 && (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 44))(v15) == 1 ) /*0x6b004b*/
      {
        this->customSound_controller[3] = 0; /*0x6b004d*/
        LOBYTE(v3) = stru_A8EB00.?[416]; /*0x6b0054*/
        this->customSound_controller[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b0059*/
      }
      else
      {
        v3 = *(_DWORD *)(*(int (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)this->occupant + 824))( /*0x6b008d*/
                          this->occupant,
                          &v31,
                          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6016) / 256,
                          0);
        v30 = v3; /*0x6b0096*/
        if ( v3 == dword_B0B5B8 ) /*0x6b009a*/
        {
          *(_DWORD *)v29 = *(_DWORD *)(*(int (__thiscall **)(int, int *, int, int))(*(_DWORD *)this->occupant + 824))( /*0x6b00e7*/
                                        this->occupant,
                                        &v31,
                                        *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6024) / 256,
                                        1);
          v30 = *BuildingClass::FindPlacementCells2((BuildingClass *)this, &v33, *(int *)v29); /*0x6b0100*/
          v16 = CellStruct::Sub((CellStruct *)&v30, &v34, v29); /*0x6b0104*/
          v17 = *((__int16 *)v16 + 1); /*0x6b0109*/
          v18 = *(__int16 *)v16; /*0x6b010d*/
          v31 = v17; /*0x6b0110*/
          __asm { fild [esp+38h+var_20] } /*0x6b0117*/
          v31 = v18; /*0x6b011b*/
          __asm /*0x6b011f*/
          {
            fild [esp+38h+var_20]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fstp [esp+38h+var_38]; double
            fstp st
            fstp st
          }
          Math::Sqrt(v26); /*0x6b0134*/
          v19 = Math::RoundToInt(v1); /*0x6b0144*/
          v20 = (CellStruct *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->occupant + 440))( /*0x6b014d*/
                                this->occupant,
                                v35);
          v21 = CellStruct::Sub(v20, &v34, v29); /*0x6b015f*/
          v22 = *(__int16 *)v21; /*0x6b0168*/
          v31 = *((__int16 *)v21 + 1); /*0x6b016b*/
          __asm { fild [esp+38h+var_20] } /*0x6b0172*/
          v31 = v22; /*0x6b0176*/
          __asm /*0x6b017a*/
          {
            fild [esp+38h+var_20]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fstp [esp+38h+var_38]; double
            fstp st
            fstp st
          }
          Math::Sqrt(v27); /*0x6b018f*/
          v23 = Math::RoundToInt(v1); /*0x6b01b8*/
          v3 = v19 + *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6028) / 256; /*0x6b01bb*/
          if ( v3 < v23 ) /*0x6b01bf*/
          {
            *(_BYTE *)(this->occupant + 1272) = 1; /*0x6b01c4*/
            v24 = (*(int (__thiscall **)(int))(*(_DWORD *)this->occupant + 444))(this->occupant); /*0x6b01d0*/
            TechnoClass::SetFocus((TechnoClass *)this->occupant, v24); /*0x6b01da*/
            LOBYTE(v3) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this->occupant + 488))( /*0x6b01e8*/
                           this->occupant,
                           19,
                           0);
            this->customSound_controller[3] = 6; /*0x6b01ee*/
            this->customSound_controller[4] = 0x7FFFFFFF; /*0x6b01f5*/
          }
        }
        if ( this->customSound_controller[3] != 6 ) /*0x6b0200*/
          LOBYTE(v3) = FactoryClass::PlaceExitUnits((FactoryClass *)this); /*0x6b0204*/
      }
      break; /*0x6b0061*/
    case 6:
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this->occupant + 44))(this->occupant); /*0x6b0214*/
      if ( v3 == 1 ) /*0x6b021a*/
      {
        LOBYTE(v3) = (unsigned __int8)Event_Process_6B0490(this); /*0x6b021e*/
LABEL_51:
        this->customSound_controller[3] = 1; /*0x6b0223*/
        this->customSound_controller[4] = 0x7FFFFFFF; /*0x6b022a*/
      }
      break; /*0x6b022a*/
    default:
      return v3;
  }
  return v3; /*0x6afdbb*/
}



// ==== 0x006A01A0  WalkLocomotion::MoveTo  this=IUnknown  sig=csp ====
char __thiscall WalkLocomotion::MoveTo(int this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  int *v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v18[2]; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+18h] [ebp-Ch] BYREF
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]

  v3 = a2; /*0x6a01a0*/
  if ( *a2 != g_OverlayTypeConfig || a2[1] != (_DWORD)qword_B077FC || (v5 = a2[2], v5 != HIDWORD(qword_B077FC)) ) /*0x6a01ce*/
  {
    LOBYTE(v5) = *(_BYTE *)(this + 96); /*0x6a01d4*/
    v6 = a3; /*0x6a01d7*/
    if ( !(_BYTE)v5 ) /*0x6a01dd*/
    {
      v5 = *(_DWORD *)(this + 88); /*0x6a01e3*/
      if ( v5 != -1 ) /*0x6a01e9*/
      {
        v5 = byte_7F2A40[12 * v5]; /*0x6a01f2*/
        if ( v5 ) /*0x6a01fc*/
        {
          v7 = 4 * v5; /*0x6a0202*/
          v8 = dword_7F2960[v7]; /*0x6a0205*/
          v5 = dword_7F296C[v7]; /*0x6a020b*/
          if ( v5 > -1 ) /*0x6a0214*/
          {
            v9 = (int *)(v8 + 12 * v5); /*0x6a021d*/
            a3 = v9[2]; /*0x6a0223*/
            if ( *(_DWORD *)(this + 92) < v5 ) /*0x6a022c*/
            {
              v10 = v9[1]; /*0x6a0234*/
              v18[0] = *v9; /*0x6a0237*/
              v18[1] = v10; /*0x6a023f*/
              v5 = (int)WalkLocomotion::TransformCoords((WalkLocomotion *)this, &v19, v18, &a3); /*0x6a0250*/
              v11 = *(_DWORD *)v5; /*0x6a0255*/
              v12 = *(_DWORD *)(v5 + 4); /*0x6a0259*/
              if ( !v6 ) /*0x6a025c*/
              {
                v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(*(_DWORD *)(this + 12)); /*0x6a0263*/
                v14 = *(_DWORD *)(this + 12); /*0x6a0269*/
                v19 = v11; /*0x6a026c*/
                v20 = v12; /*0x6a0270*/
                v21 = v13; /*0x6a0274*/
                (*(void (__thiscall **)(int, int *))(*(_DWORD *)v14 + 244))(v14, &v19); /*0x6a027f*/
                LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 12) + 244))( /*0x6a028f*/
                               *(_DWORD *)(this + 12),
                               a2);
                return v5; /*0x6a029c*/
              }
              if ( v6 == 1 || v6 == 3 ) /*0x6a02a7*/
              {
                v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 464))(*(_DWORD *)(this + 12)); /*0x6a02ae*/
                v16 = *(_DWORD *)(this + 12); /*0x6a02b4*/
                v21 = v15; /*0x6a02b7*/
                v19 = v11; /*0x6a02bb*/
                v20 = v12; /*0x6a02bf*/
                LOBYTE(v5) = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v16 + 240))(v16, &v19); /*0x6a02ca*/
              }
              v3 = a2; /*0x6a02d0*/
            }
          }
        }
      }
    }
    if ( v6 ) /*0x6a02d6*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x6a02f6*/
        LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 12) + 240))( /*0x6a02fe*/
                       *(_DWORD *)(this + 12),
                       v3);
    }
    else
    {
      LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 12) + 244))( /*0x6a02de*/
                     *(_DWORD *)(this + 12),
                     v3);
    }
  }
  return v5; /*0x6a0295*/
}



// ==== 0x006A0310  ShipLocomotionClass::SetWaypointTarget  this=ShipLocomotionClass  sig=csp ====
char __stdcall WalkLocomotionClass::SetWaypointTarget(ShipLocomotionClass *this, int a2, unsigned int a3, __int64 a4)
{
  int v4; // eax
  char *v5; // esi
  int *v6; // edi
  int v7; // ecx
  __int64 v8; // kr08_8
  CellClass *v9; // eax
  int v11; // [esp-4h] [ebp-20h]
  unsigned int v12; // [esp+10h] [ebp-Ch] BYREF
  __int64 v13; // [esp+14h] [ebp-8h]

  this->MovementSpeed[1] = a2; /*0x6a0323*/
  this->TrackNumber = 0; /*0x6a0326*/
  v4 = g_OverlayTypeConfig; /*0x6a032d*/
  if ( a3 != g_OverlayTypeConfig || a4 != qword_B077FC ) /*0x6a0340*/
  {
    v5 = (char *)this - 4; /*0x6a0358*/
    v13 = a4; /*0x6a035f*/
    v6 = &this->Dest[2]; /*0x6a0363*/
    v12 = a3; /*0x6a036a*/
    if ( *v6 != g_OverlayTypeConfig || __PAIR64__(this->HeadToCoord[1], this->HeadToCoord[0]) != qword_B077FC ) /*0x6a0375*/
    {
      *v6 = g_OverlayTypeConfig; /*0x6a0386*/
      this->HeadToCoord[0] = qword_B077FC; /*0x6a038d*/
      v7 = HIDWORD(qword_B077FC); /*0x6a0390*/
      v5[99] = 0; /*0x6a0396*/
      this->HeadToCoord[1] = v7; /*0x6a039a*/
      v4 = g_OverlayTypeConfig; /*0x6a039d*/
    }
    if ( __PAIR64__(a4, a3) != __PAIR64__(qword_B077FC, v4) /*0x6a03be*/
      || (LOBYTE(v4) = BYTE4(qword_B077FC), HIDWORD(a4) != HIDWORD(qword_B077FC)) )
    {
      v8 = v13; /*0x6a03c4*/
      v5[99] = 1; /*0x6a03ca*/
      *v6 = a3; /*0x6a03ce*/
      *(_QWORD *)this->HeadToCoord = v8; /*0x6a03d0*/
      v11 = *((_DWORD *)v5 + 3); /*0x6a03dd*/
      v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12); /*0x6a03e4*/
      if ( !(unsigned __int8)CrateClass::ProcessPickup((CrateClass *)v9, v11) || *(_BYTE *)(*((_DWORD *)v5 + 3) + 129) ) /*0x6a03f7*/
      {
        LOBYTE(v4) = *(_BYTE *)(*((_DWORD *)v5 + 3) + 144); /*0x6a043d*/
        if ( (_BYTE)v4 ) /*0x6a0445*/
        {
          LOBYTE(v4) = g_OverlayTypeConfig; /*0x6a0447*/
          *v6 = g_OverlayTypeConfig; /*0x6a044c*/
          *(_QWORD *)this->HeadToCoord = qword_B077FC; /*0x6a0454*/
          v5[99] = 0; /*0x6a0460*/
        }
      }
      else
      {
        WalkLocomotion::MoveTo((int)this - 4, &v12, 1); /*0x6a040a*/
        LOBYTE(v4) = (_BYTE)this + 48; /*0x6a040f*/
        this->SlopeTimer[3] = a3; /*0x6a041a*/
        *(_QWORD *)this->Dest = a4; /*0x6a041c*/
        this->SpeedAccum = 0; /*0x6a0422*/
        this->MovementSpeed[0] = 1072693248; /*0x6a0429*/
      }
    }
  }
  return v4; /*0x6a0430*/
}



// ==== 0x006A04C0  ObjectClass::method_6A04C0  this=ObjectClass  sig=csp ====
char __thiscall sub_6A04C0(ObjectClass *this, _DWORD *a2)
{
  int v2; // eax
  int *v4; // edi
  int v5; // eax
  int v6; // eax
  CellClass *v7; // eax
  void *ptr_C; // [esp-4h] [ebp-10h]

  v2 = g_OverlayTypeConfig; /*0x6a04c1*/
  v4 = &this->ambientSoundController[1]; /*0x6a04cd*/
  if ( this->ambientSoundController[1] != g_OverlayTypeConfig /*0x6a04df*/
    || *(_QWORD *)&this->ambientSoundController[2] != qword_B077FC )
  {
    *v4 = g_OverlayTypeConfig; /*0x6a04f0*/
    this->ambientSoundController[2] = qword_B077FC; /*0x6a04f8*/
    v5 = HIDWORD(qword_B077FC); /*0x6a04fb*/
    HIBYTE(this->customSound_controller[4]) = 0; /*0x6a0500*/
    this->ambientSoundController[3] = v5; /*0x6a0504*/
    v2 = g_OverlayTypeConfig; /*0x6a0507*/
  }
  if ( *a2 != v2 || *(_QWORD *)(a2 + 1) != qword_B077FC ) /*0x6a0520*/
  {
    *v4 = *a2; /*0x6a0535*/
    this->ambientSoundController[2] = a2[1]; /*0x6a053a*/
    v6 = a2[2]; /*0x6a053d*/
    HIBYTE(this->customSound_controller[4]) = 1; /*0x6a0540*/
    this->ambientSoundController[3] = v6; /*0x6a0544*/
    ptr_C = this->?; /*0x6a054a*/
    v7 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x6a0551*/
    if ( (unsigned __int8)CrateClass::ProcessPickup((CrateClass *)v7, (int)ptr_C) && !*((_BYTE *)this->? + 129) ) /*0x6a0564*/
    {
      WalkLocomotion::MoveTo((int)this, a2, 1); /*0x6a0573*/
      return 1; /*0x6a057d*/
    }
    if ( *((_BYTE *)this->? + 144) ) /*0x6a0583*/
    {
      *v4 = g_OverlayTypeConfig; /*0x6a0593*/
      *(_QWORD *)&this->ambientSoundController[2] = qword_B077FC; /*0x6a059b*/
      HIBYTE(this->customSound_controller[4]) = 0; /*0x6a05a6*/
    }
  }
  return 0; /*0x6a0578*/
}



// ==== 0x006A05C0  ShipLocomotionClass::UpdateFacingDirection_2  this=ShipLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::UpdateFacingDirection_2(ShipLocomotionClass *this, int a2)
{
  return FacingClass::Update((char *)this->?->?, &a2); /*0x6a05df*/
}



// ==== 0x006A05F0  WalkLocomotion::ProcessCollision  this=WalkLocomotion  sig=csp ====
char __userpurge WalkLocomotion::ProcessCollision@<al>(int this@<ecx>, double a2@<st0>, char a3)
{
  int v4; // eax
  int v5; // edx
  bool v6; // al
  int v7; // esi
  int v8; // eax
  _DWORD *v9; // esi
  int v10; // edx
  int v11; // esi
  int v12; // eax
  int *v13; // ecx
  int v14; // esi
  char v15; // bl
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // esi
  int v22; // eax
  _DWORD *v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // edx
  _DWORD *v27; // esi
  int v28; // eax
  int v29; // edx
  _DWORD *v30; // ebx
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  CellClass *v34; // eax
  int *Coords; // eax
  int *v36; // ecx
  int *v37; // ecx
  int GroundHeight; // esi
  int v39; // ebx
  char *v41; // esi
  char v42; // dl
  int v43; // edx
  __int16 v44; // cx
  int v45; // eax
  int v46; // esi
  int v47; // ecx
  _DWORD *v48; // ecx
  int v49; // eax
  int v50; // edx
  int v51; // eax
  int v52... [41340 chars total]



// ==== 0x006A1C80  WalkLocomotion::Update  this=WalkLocomotion  sig=csp ====
char __thiscall WalkLocomotion_Update(int this, _BYTE *a2, int a3, int a4)
{
  int v5; // ecx
  unsigned int v6; // ebx
  int v7; // ecx
  char v8; // al
  char result; // al
  int v10; // ecx
  int v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // eax
  wchar_t *v16; // edi
  int v17; // edx
  wchar_t **v18; // esi
  int v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // ecx
  _DWORD *v22; // ebx
  int v23; // ecx
  char v24; // al
  _DWORD *v25; // ecx
  int v26; // ecx
  _DWORD *v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // ecx
  _DWORD *Value; // edi
  _DWORD *v31; // esi
  int v32; // kr0C_4
  unsigned int v33; // edx
  _DWORD *v34; // eax
  _BYTE *v35; // ecx
  int v36; // edi
  unsigned int v37; // esi
  void *v38; // eax
  int v39; // eax
  int v40; // edx
  _DWORD *v41; // edi
  _DWORD *v42; // ecx
  int v43; // esi
  int GroundHeight; // eax
  int ClosestObject; // eax
  _DWORD *v46; // eax
  _DWORD *v47; // eax
  _DWORD *v48; //... [57624 chars total]



// ==== 0x006A3DA0  nullsub_230  this=-  sig=ida-proto ====
void nullsub_230()
{
  ; /*0x6a3da0*/
}



// ==== 0x006A3DB0  WalkLocomotion::TransformCoords  this=WalkLocomotion  sig=csp ====
_DWORD *__thiscall WalkLocomotion::TransformCoords(WalkLocomotion *this, _DWORD *a2, int *a3, int *a4)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  char *WalkLocomotion_field_0x40; // edx
  char *WalkLocomotion_field_0x44; // ecx

  v4 = *a4; /*0x6a3dbd*/
  v5 = dword_7F2A48[3 * (int)this->WalkLocomotion_field_0x58]; /*0x6a3dc1*/
  v6 = *a3; /*0x6a3dcf*/
  v7 = a3[1]; /*0x6a3dd1*/
  if ( (v5 & 1) != 0 ) /*0x6a3dd4*/
  {
    v6 = a3[1]; /*0x6a3dd8*/
    v7 = *a3; /*0x6a3dda*/
    v4 = (unsigned __int8)(-64 - v4); /*0x6a3de9*/
  }
  if ( (v5 & 2) != 0 ) /*0x6a3dee*/
  {
    v6 = -v6; /*0x6a3df2*/
    v4 = (unsigned __int8)-(char)v4; /*0x6a3df4*/
  }
  if ( (v5 & 4) != 0 ) /*0x6a3dfc*/
  {
    v7 = -v7; /*0x6a3e05*/
    v4 = (unsigned __int8)(0x80 - v4); /*0x6a3e0d*/
  }
  *a4 = v4; /*0x6a3e0f*/
  WalkLocomotion_field_0x40 = (char *)this->WalkLocomotion_field_0x40; /*0x6a3e12*/
  WalkLocomotion_field_0x44 = (char *)this->WalkLocomotion_field_0x44; /*0x6a3e15*/
  *a2 = &WalkLocomotion_field_0x40[v6]; /*0x6a3e22*/
  a2[1] = &WalkLocomotion_field_0x44[v7]; /*0x6a3e25*/
  return a2; /*0x6a3e20*/
}



// ==== 0x006A3E50  ShipLocomotionClass::SmallStub_6A3E50  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_6A3E50(ShipLocomotionClass *this)
{
  return 2; /*0x6a3e55*/
}



// ==== 0x006A3E60  ShipLocomotionClass::ddtor  this=ShipLocomotionClass  sig=csp ====
int __stdcall ShipLocomotionClass::ddtor(ShipLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6a3e66*/
    return -2147467261; /*0x6a3e68*/
  *(IID *)a2 = g_CLSID_DriveLocomotion2; /*0x6a3e76*/
  a2[3] = unk_7E9ABC; /*0x6a3e90*/
  return 0; /*0x6a3e6d*/
}



// ==== 0x006A3EA0  ShipLocomotionClass::StubReturnZero_14  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_14(ShipLocomotionClass *this)
{
  return 0; /*0x6a3ea2*/
}



// ==== 0x006A3EB0  ShipLocomotionClass::DispatchCheckState_6A3EB0  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchCheckState_6A3EB0(ShipLocomotionClass *this)
{
  return JumpjetLocomotionClass::CheckState((LocomotionClass *)this); /*0x6a3eba*/
}



// ==== 0x006A3F00  ShipLocomotionClass::MoveToChecked_0  this=ShipLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::MoveToChecked_0(ShipLocomotionClass *this, int a2)
{
  char result; // al

  result = (_BYTE)this + 60; /*0x6a3f0e*/
  if ( this->Dest[2] != g_OverlayTypeConfig || *(_QWORD *)this->HeadToCoord != qword_B077FC ) /*0x6a3f20*/
    return WalkLocomotion::MoveTo((int)this - 4, &this->Dest[2], a2); /*0x6a3f38*/
  return result; /*0x6a3f3d*/
}



// ==== 0x006A3F50  ShipLocomotionClass::IsAtDestination  this=ShipLocomotionClass  sig=csp ====
bool __stdcall WalkLocomotionClass::IsAtDestination(ShipLocomotionClass *this, int a2, int a3, int a4)
{
  ShipLocomotionClass *v4; // esi
  int *v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int *v15; // eax
  int v16; // ebx
  int v17; // ebp
  int *location; // eax
  int v20[2]; // [esp+Ch] [ebp-20h] BYREF
  _DWORD v21[2]; // [esp+14h] [ebp-18h] BYREF
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch]
  int v24; // [esp+24h] [ebp-8h]
  unsigned int v25; // [esp+28h] [ebp-4h]

  v4 = this; /*0x6a3f55*/
  v5 = (int *)(*(int (__stdcall **)(ShipLocomotionClass *, _DWORD *))(*(_DWORD *)this->LocomotionClass + 24))(this, v21); /*0x6a3f62*/
  v6 = *v5; /*0x6a3f65*/
  v7 = v5[1]; /*0x6a3f67*/
  v8 = v5[2]; /*0x6a3f70*/
  v23 = v6; /*0x6a3f75*/
  v24 = v7; /*0x6a3f79*/
  v25 = v8; /*0x6a3f7d*/
  if ( v6 == g_OverlayTypeConfig && __PAIR64__(v8, v7) == qword_B077FC ) /*0x6a3f89*/
    return 0; /*0x6a3f89*/
  if ( !LOBYTE(v4->TrackIndex) ) /*0x6a3f97*/
  {
    v9 = v4->MovementSpeed[1]; /*0x6a3fa2*/
    if ( v9 != -1 ) /*0x6a3fa8*/
    {
      v10 = byte_7F2A40[12 * v9]; /*0x6a3fb1*/
      if ( v10 ) /*0x6a3fbb*/
      {
        v11 = 4 * v10; /*0x6a3fc1*/
        v12 = dword_7F296C[v11]; /*0x6a3fc4*/
        if ( v12 > -1 ) /*0x6a3fd3*/
        {
          v13 = dword_7F2960[v11] + 12 * v12; /*0x6a3fdc*/
          this = *(ShipLocomotionClass **)(v13 + 8); /*0x6a3fe2*/
          if ( v4->TrackNumber < v12 ) /*0x6a3feb*/
          {
            v14 = *(_DWORD *)(v13 + 4); /*0x6a3ff3*/
            v20[0] = *(_DWORD *)v13; /*0x6a3ff6*/
            v20[1] = v14; /*0x6a3fff*/
            v15 = WalkLocomotion::TransformCoords((WalkLocomotion *)&v4[-1].Piggybackee, v21, v20, (int *)&this); /*0x6a4011*/
            v16 = *v15; /*0x6a4016*/
            v17 = v15[1]; /*0x6a4018*/
            location = v4->?->?; /*0x6a401e*/
            v21[0] = *location; /*0x6a4025*/
            v21[1] = location[1]; /*0x6a402c*/
            v22 = location[2]; /*0x6a4033*/
            if ( (unsigned __int16)(v16 / 256) == (unsigned __int16)(a2 / 256) /*0x6a409b*/
              && (unsigned __int16)(v17 / 256) == (unsigned __int16)(a3 / 256)
              && (int)abs32(v22 - a4) <= dword_B07838 )
            {
              return 1; /*0x6a40a5*/
            }
          }
        }
      }
    }
  }
  return (unsigned __int16)(v23 / 256) == (unsigned __int16)(a2 / 256) /*0x6a411e*/
      && (unsigned __int16)(v24 / 256) == (unsigned __int16)(a3 / 256)
      && (int)abs32(v25 - a4) <= dword_B07838;
}



// ==== 0x006A4130  ShipLocomotionClass::StubReturnZero_15  this=ShipLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::StubReturnZero_15(ShipLocomotionClass *this)
{
  ShipLocomotionClass *v1; // edi
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  __int16 v5; // bx
  int TrackNumber; // edx
  __int16 v7; // dx
  char v8; // al

  v1 = this; /*0x6a4132*/
  v2 = this->?->pathDirections[0]; /*0x6a4139*/
  if ( v2 < -1 || v2 > 8 ) /*0x6a414b*/
    return 0; /*0x6a414b*/
  v3 = 12 * this->MovementSpeed[1] + 8333888; /*0x6a415c*/
  v4 = LOBYTE(this->TrackIndex)
     ? (char)algn_7F2A41[12 * this->MovementSpeed[1]]
     : byte_7F2A40[12 * this->MovementSpeed[1]];
  if ( v2 == 8 ) /*0x6a4173*/
    return 0; /*0x6a4173*/
  if ( v2 == -1 ) /*0x6a417c*/
    return 0; /*0x6a417c*/
  LOBYTE(v5) = 0; /*0x6a4183*/
  HIBYTE(v5) = algn_7F2A41[12 * this->MovementSpeed[1] + 3]; /*0x6a4185*/
  LOWORD(this) = v5; /*0x6a4188*/
  if ( (((((unsigned int)this >> 12) + 1) >> 1) & 7) == v2 ) /*0x6a41a8*/
    return 0; /*0x6a41a8*/
  TrackNumber = v1->TrackNumber; /*0x6a41aa*/
  if ( dword_7F2964[4 * v4] == TrackNumber /*0x6a41f1*/
    && TrackNumber
    && (LOBYTE(v7) = 0,
        HIBYTE(v7) = *(_BYTE *)(v3 + 4),
        LOWORD(this) = v7,
        (v8 = byte_7F2A40[96 * (((((unsigned int)this >> 12) + 1) >> 1) & 7) + 12 * v2]) != 0)
    && dword_7F2968[4 * v8] )
  {
    return 1; /*0x6a41fc*/
  }
  else
  {
    return 0; /*0x6a4203*/
  }
}



// ==== 0x006A4210  ShipLocomotionClass::SetByteField_1  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SetByteField_1(ShipLocomotionClass *this)
{
  this->IsTurretLockedDown = 0; /*0x6a4214*/
  return (int)this->LocomotionClass; /*0x6a4218*/
}



// ==== 0x006A4220  ShipLocomotionClass::SetByteField_2  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SetByteField_2(ShipLocomotionClass *this)
{
  this->IsTurretLockedDown = 1; /*0x6a4224*/
  return (int)this->LocomotionClass; /*0x6a4228*/
}



// ==== 0x006A4230  ShipLocomotionClass::SmallStub_6A4230  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_6A4230(ShipLocomotionClass *this)
{
  return this->MovementSpeed[1]; /*0x6a4237*/
}



// ==== 0x006A4240  ShipLocomotionClass::SmallStub_6A4240  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_6A4240(ShipLocomotionClass *this)
{
  return this->TrackNumber; /*0x6a4247*/
}



// ==== 0x006A4250  ShipLocomotionClass::SmallStub_6A4250  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmallStub_6A4250(ShipLocomotionClass *this)
{
  return this->HeadToCoord[2]; /*0x6a4257*/
}



// ==== 0x006A4260  ShipLocomotionClass::AddRef  this=ShipLocomotionClass  sig=csp ====
LONG __stdcall ShipLocomotionClass::AddRef(ShipLocomotionClass *this)
{
  return COM::AddRef((LocomotionClass *)this); /*0x6a426a*/
}



// ==== 0x006A4270  ShipLocomotionClass::Release  this=ShipLocomotionClass  sig=csp ====
LONG __stdcall ShipLocomotionClass::Release(ShipLocomotionClass *this)
{
  return COM::ReleaseRef((LocomotionClass *)this); /*0x6a427a*/
}



// ==== 0x006A4280  JumpjetLocomotionClass::GetLinkedLocomotorPointer_0  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_6A4280(int a1)
{
  return *(_DWORD *)(a1 + 80) != 0; /*0x6a428e*/
}



// ==== 0x006A42A0  ShipLocomotionClass::StubReturn112  this=ShipLocomotionClass  sig=csp ====
int ShipLocomotionClass::StubReturn112(ShipLocomotionClass *this)
{
  return 112; /*0x6a42a5*/
}



// ==== 0x006A42B0  ShipLocomotionClass::ProcessMove  this=ShipLocomotionClass  sig=csp ====
_DWORD *__thiscall ShipLocomotionClass::ProcessMove(ShipLocomotionClass *this, char a2)
{
  ILocomotion *Piggybackee; // eax

  *(_DWORD *)this->LocomotionClass = &ShipLocomotionClass::`vftable'; /*0x6a42b3*/
  *(_DWORD *)&this->LocomotionClass[4] = &ShipLocomotionClass::`vftable'; /*0x6a42b9*/
  *(_DWORD *)this->__pad_18 = &off_7F2D68; /*0x6a42c0*/
  Piggybackee = this->Piggybackee; /*0x6a42c7*/
  if ( Piggybackee ) /*0x6a42cc*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x6a42d1*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x6a42d6*/
  if ( (a2 & 1) != 0 ) /*0x6a42e0*/
    __3_YAXPAX_Z(this); /*0x6a42e3*/
  return this->LocomotionClass; /*0x6a42ed*/
}



// ==== 0x006A4300  JumpjetLocomotionClass::SmallStub_6A4300  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_6A4300(int a1, const void *a2, int *a3)
{
  return ShipLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}



// ==== 0x006A4310  JumpjetLocomotionClass::SmallStub_6A4310  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_6A4310(int a1)
{
  return ShipLocomotionClass::AddRef(a1 - 4);
}



// ==== 0x006A4320  JumpjetLocomotionClass::SmallStub_6A4320  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_6A4320(int a1)
{
  return ShipLocomotionClass::Release((volatile LONG *)(a1 - 4));
}



// ==== 0x006A4330    this=-  sig=? ====
int __stdcall JumpjetLocomotionClass::loc_6A4330(int a1, const void *a2, int *a3)
{
  return ShipLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}


// ==== 0x006A4340    this=-  sig=? ====
LONG __stdcall JumpjetLocomotionClass::loc_6A4340(int a1)
{
  return ShipLocomotionClass::AddRef(a1 - 24);
}


// ==== 0x006A4350    this=-  sig=? ====
LONG __stdcall JumpjetLocomotionClass::loc_6A4350(int a1)
{
  return ShipLocomotionClass::Release((volatile LONG *)(a1 - 24));
}


// ==== 0x006A4360  sub_6A4360  this=-  sig=ida-proto ====
void sub_6A4360()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6a436c*/
  dbl_B07850 = Math::Sqrt(v0 + v0); /*0x6a437e*/
}



// ==== 0x006A4390  sub_6A4390  this=-  sig=ida-proto ====
void sub_6A4390()
{
  dbl_B078A0 = dbl_B07850 / 60.0; /*0x6a439c*/
}



// ==== 0x006A43B0  sub_6A43B0  this=-  sig=ida-proto ====
void sub_6A43B0()
{
  dbl_B07888 = 1.0 / dbl_B078A0; /*0x6a43bc*/
}



// ==== 0x006A43D0  sub_6A43D0  this=-  sig=ida-proto ====
void sub_6A43D0()
{
  dbl_B07880 = 0.0174532925199433 * 45.0; /*0x6a43dc*/
}



// ==== 0x006A43F0  sub_6A43F0  this=-  sig=ida-proto ====
void sub_6A43F0()
{
  dbl_B07858 = 0.0174532925199433 * 60.0; /*0x6a43fc*/
}



// ==== 0x006A4410  sub_6A4410  this=-  sig=ida-proto ====
void sub_6A4410()
{
  dbl_B07840 = 0.0174532925199433 * 90.0; /*0x6a441c*/
}



// ==== 0x006A4430  sub_6A4430  this=-  sig=ida-proto ====
__int64 sub_6A4430()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B07840 - dbl_B07858); /*0x6a4442*/
  result = Math::RoundToInt(v0 * dbl_B07850 * 0.5); /*0x6a4456*/
  dword_B078A8 = result; /*0x6a445b*/
  return result; /*0x6a4460*/
}



// ==== 0x006A4470  sub_6A4470  this=-  sig=ida-proto ====
void sub_6A4470()
{
  dbl_B07860 = Math::ArcTan((double)dword_B078A8 * 0.00390625); /*0x6a4487*/
}



// ==== 0x006A44A0  sub_6A44A0  this=-  sig=ida-proto ====
void sub_6A44A0()
{
  dbl_B07878 = Math::ArcTan((double)(2 * dword_B078A8) / dbl_B07850); /*0x6a44c2*/
}



// ==== 0x006A44D0  sub_6A44D0  this=-  sig=ida-proto ====
__int64 sub_6A44D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B078A8) + 0.5); /*0x6a44eb*/
  dword_B0789C = result; /*0x6a44f0*/
  return result; /*0x6a44f6*/
}



// ==== 0x006A4500  sub_6A4500  this=-  sig=ida-proto ====
int sub_6A4500()
{
  word_B07848 = 0; /*0x6a4502*/
  word_B0784A = 0; /*0x6a4508*/
  return 0; /*0x6a450e*/
}



// ==== 0x006A4510  sub_6A4510  this=-  sig=ida-proto ====
int sub_6A4510()
{
  dword_B07868 = 0; /*0x6a4512*/
  dword_B0786C = 0; /*0x6a4517*/
  dword_B07870 = 0; /*0x6a451c*/
  return 0; /*0x6a4521*/
}



// ==== 0x006A4530  sub_6A4530  this=-  sig=ida-proto ====
int sub_6A4530()
{
  dword_B07898 = 0; /*0x6a4535*/
  dword_B07890 = 128; /*0x6a453f*/
  dword_B07894 = 128; /*0x6a4544*/
  return 128; /*0x6a4549*/
}



// ==== 0x006A4550  SideClass::Construct  this=SideClass  sig=csp ====
_DWORD *__thiscall SideClass::Construct(SideClass *this, char *Source)
{
  int v3; // eax

  AbstractTypeClass::Constructor((int *)this, Source); /*0x6a4559*/
  this->houseTypesCount = 0; /*0x6a4563*/
  this->q028 = 0; /*0x6a4569*/
  *((_BYTE *)this + 164) = 1; /*0x6a456f*/
  *((_BYTE *)this + 165) = 0; /*0x6a4576*/
  this->q02B = 10; /*0x6a457c*/
  *((_DWORD *)this + 42) = 0; /*0x6a4586*/
  this->houseTypes = &TypeList<int>::`vftable'; /*0x6a458c*/
  this->AbstractClass = &SideClass::`vftable'; /*0x6a4597*/
  this->? = &SideClass::`vftable'; /*0x6a459d*/
  this->? = &SideClass::`vftable'; /*0x6a45a3*/
  this->? = &SideClass::`vftable'; /*0x6a45aa*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x6a45b1*/
  if ( FootClass_Array.?[0] < FootClass_Array.?[1] /*0x6a45ea*/
    || (BYTE1(FootClass_Array.?[2]) || !FootClass_Array.?[1])
    && FootClass_Array.?[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.? + 8))(
         &FootClass_Array.?,
         FootClass_Array.?[1] + FootClass_Array.?[1],
         0) )
  {
    v3 = FootClass_Array.?[0]++; /*0x6a45f7*/
    *(_DWORD *)(FootClass_Array.?[0] + 4 * v3) = this; /*0x6a4606*/
  }
  return &this->AbstractClass; /*0x6a460b*/
}



// ==== 0x006A46D0  HouseTypeClass::Find  this=HouseTypeClass  sig=csp ====
int __thiscall HouseTypeClass::Find(HouseTypeClass *this)
{
  int v1; // esi

  v1 = 0; /*0x6a46d6*/
  if ( FootClass_Array.?[0] <= 0 ) /*0x6a46dd*/
    return -1; /*0x6a4702*/
  while ( _strcmpi((char *)(*(_DWORD *)(FootClass_Array.?[0] + 4 * v1) + 36), (char *)this) ) /*0x6a46f6*/
  {
    if ( ++v1 >= FootClass_Array.?[0] ) /*0x6a4700*/
      return -1; /*0x6a4700*/
  }
  return v1; /*0x6a4702*/
}



// ==== 0x006A4710  SideClass::GetCountry  this=SideClass  sig=csp ====
int __thiscall SideClass::GetCountry(SideClass *this, int *a2)
{
  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6a4719*/
  return Power::TimerProcess(*((_DWORD *)this + 42)); /*0x6a472c*/
}



// ==== 0x006A4740  SideClass::ddtor  this=SideClass  sig=csp ====
int __stdcall SideClass::ddtor(SideClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6a4746*/
    return -2147467261; /*0x6a4748*/
  *a2 = -985803918; /*0x6a4756*/
  a2[1] = 298980638; /*0x6a475e*/
  a2[2] = 1610642817; /*0x6a4767*/
  a2[3] = unk_7E991C; /*0x6a4770*/
  return 0; /*0x6a474d*/
}



// ==== 0x006A4780  SideClass::SaveLoad_Prefix  this=SideClass  sig=csp ====
int __stdcall SideClass::SaveLoad_Prefix(SideClass *this, int a2)
{
  SideClass *v2; // esi
  int v3; // edi
  int result; // eax
  void **p_houseTypes; // esi
  int i; // ebp
  void *v7; // eax
  int v8; // ecx
  void *v9; // eax
  _DWORD *v10; // edx

  v2 = this; /*0x6a4782*/
  v3 = a2; /*0x6a4787*/
  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6a478d*/
  if ( result >= 0 ) /*0x6a4796*/
  {
    if ( v2 ) /*0x6a47a4*/
    {
      AbstractTypeClass::Init((int)v2, (int)&a2); /*0x6a47ad*/
      v2->houseTypesCount = 0; /*0x6a47b2*/
      v2[1].AbstractClass = 0; /*0x6a47b8*/
      LOBYTE(v2[1].?) = 1; /*0x6a47be*/
      BYTE1(v2[1].?) = 0; /*0x6a47c5*/
      v2[1].? = (void *)10; /*0x6a47cb*/
      v2[1].? = 0; /*0x6a47d1*/
      v2->houseTypes = &TypeList<int>::`vftable'; /*0x6a47d7*/
      v2->AbstractClass = &SideClass::`vftable'; /*0x6a47e1*/
      v2->? = &SideClass::`vftable'; /*0x6a47e7*/
      v2->? = &SideClass::`vftable'; /*0x6a47ee*/
      v2->? = &SideClass::`vftable'; /*0x6a47f5*/
    }
    p_houseTypes = &v2->houseTypes; /*0x6a47fc*/
    if ( p_houseTypes ) /*0x6a4804*/
    {
      p_houseTypes[1] = 0; /*0x6a4806*/
      p_houseTypes[2] = 0; /*0x6a4809*/
      *((_BYTE *)p_houseTypes + 12) = 1; /*0x6a480c*/
      *((_BYTE *)p_houseTypes + 13) = 0; /*0x6a4810*/
      p_houseTypes[5] = (void *)10; /*0x6a4813*/
      p_houseTypes[4] = 0; /*0x6a4816*/
      *p_houseTypes = &TypeList<int>::`vftable'; /*0x6a4819*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &a2, 4, 0); /*0x6a482a*/
    for ( i = 0; i < a2; ++i ) /*0x6a4833*/
    {
      (*(void (__stdcall **)(int, SideClass **, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &this, 4, 0); /*0x6a4840*/
      v7 = p_houseTypes[2]; /*0x6a4843*/
      if ( (int)p_houseTypes[4] >= (int)v7 ) /*0x6a484b*/
      {
        if ( !*((_BYTE *)p_houseTypes + 13) && v7 ) /*0x6a4854*/
          continue; /*0x6a4854*/
        v8 = (int)p_houseTypes[5]; /*0x6a4856*/
        if ( v8 <= 0 /*0x6a4865*/
          || !(*((unsigned __int8 (__thiscall **)(void **, int, _DWORD))*p_houseTypes + 2))(
                p_houseTypes,
                (int)v7 + v8,
                0) )
        {
          continue; /*0x6a4865*/
        }
      }
      v9 = p_houseTypes[4]; /*0x6a486c*/
      v10 = p_houseTypes[1]; /*0x6a486f*/
      p_houseTypes[4] = (char *)v9 + 1; /*0x6a4875*/
      v10[(_DWORD)v9] = this; /*0x6a487c*/
    }
    return 0; /*0x6a4888*/
  }
  return result; /*0x6a488b*/
}



// ==== 0x006A48A0  SideClass::SaveLoad_Prefix_0  this=SideClass  sig=csp ====
int __stdcall SideClass::SaveLoad_Prefix_0(SideClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int i; // esi

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6a48b1*/
  if ( result >= 0 ) /*0x6a48b8*/
  {
    v4 = *a2; /*0x6a48c0*/
    a3 = *((_DWORD *)this + 42); /*0x6a48cd*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x6a48d1*/
    for ( i = 0; i < a3; ++i ) /*0x6a48dc*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, this->houseTypesCount + 4 * i, 4, 0); /*0x6a48ef*/
    return 0; /*0x6a48f9*/
  }
  return result; /*0x6a48fc*/
}



// ==== 0x006A4910  SideClass::StubReturn180  this=SideClass  sig=csp ====
int SideClass::StubReturn180(SideClass *this)
{
  return 180; /*0x6a4915*/
}



// ==== 0x006A4920  SideClass::StubReturn28  this=SideClass  sig=csp ====
int SideClass::StubReturn28(SideClass *this)
{
  return 28; /*0x6a4925*/
}



// ==== 0x006A4930  SideClass::Init  this=SideClass  sig=csp ====
void **__thiscall SideClass::Init(SideClass *this, char a2)
{
  int v3; // eax
  void *houseTypesCount; // eax
  SideClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &SideClass::`vftable'; /*0x6a4936*/
  this->? = &SideClass::`vftable'; /*0x6a493c*/
  this->? = &SideClass::`vftable'; /*0x6a4943*/
  this->? = &SideClass::`vftable'; /*0x6a494a*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6a4951*/
  v6 = this; /*0x6a4966*/
  v3 = (*(int (__thiscall **)(int *, SideClass **))(FootClass_Array.? + 16))(&FootClass_Array.?, &v6); /*0x6a496a*/
  if ( v3 != -1 && v3 < FootClass_Array.?[0] ) /*0x6a497a*/
  {
    --FootClass_Array.?[0]; /*0x6a497f*/
    for ( ; /*0x6a4985*/
          v3 < FootClass_Array.?[0];
          *(_DWORD *)(FootClass_Array.?[0] + 4 * v3 - 4) = *(_DWORD *)(FootClass_Array.?[0] + 4 * v3) )
    {
      ++v3; /*0x6a498d*/
    }
  }
  houseTypesCount = (void *)this->houseTypesCount; /*0x6a499f*/
  this->houseTypes = &VectorClass<int>::`vftable'; /*0x6a49a5*/
  if ( houseTypesCount && *((_BYTE *)this + 165) ) /*0x6a49b3*/
  {
    __3_YAXPAX_Z(houseTypesCount); /*0x6a49be*/
    this->houseTypesCount = 0; /*0x6a49c6*/
  }
  *((_BYTE *)this + 165) = 0; /*0x6a49d2*/
  this->q028 = 0; /*0x6a49d9*/
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x6a49e3*/
  if ( (a2 & 1) != 0 ) /*0x6a49ed*/
    __3_YAXPAX_Z(this); /*0x6a49f0*/
  return &this->AbstractClass; /*0x6a49fa*/
}



// ==== 0x006A4A00  sub_6A4A00  this=-  sig=ida-proto ====
int sub_6A4A00()
{
  dword_B07DC8 = 0; /*0x6a4a02*/
  dword_B07DCC = 0; /*0x6a4a07*/
  dword_B07DD0 = 0; /*0x6a4a0c*/
  dword_B07DD4 = 0; /*0x6a4a11*/
  return 0; /*0x6a4a16*/
}



// ==== 0x006A4A20  sub_6A4A20  this=-  sig=ida-proto ====
void sub_6A4A20()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6a4a2c*/
  dbl_B07DE0 = Math::Sqrt(v0 + v0); /*0x6a4a3e*/
}



// ==== 0x006A4A50  sub_6A4A50  this=-  sig=ida-proto ====
void sub_6A4A50()
{
  dbl_B0B398 = dbl_B07DE0 / 60.0; /*0x6a4a5c*/
}



// ==== 0x006A4A70  sub_6A4A70  this=-  sig=ida-proto ====
void sub_6A4A70()
{
  dbl_B0B320 = 1.0 / dbl_B0B398; /*0x6a4a7c*/
}



// ==== 0x006A4A90  sub_6A4A90  this=-  sig=ida-proto ====
void sub_6A4A90()
{
  dbl_B0B318 = 0.0174532925199433 * 45.0; /*0x6a4a9c*/
}



// ==== 0x006A4AB0  sub_6A4AB0  this=-  sig=ida-proto ====
void sub_6A4AB0()
{
  dbl_B07DE8 = 0.0174532925199433 * 60.0; /*0x6a4abc*/
}



// ==== 0x006A4AD0  sub_6A4AD0  this=-  sig=ida-proto ====
void sub_6A4AD0()
{
  dbl_B07BB8 = 0.0174532925199433 * 90.0; /*0x6a4adc*/
}



// ==== 0x006A4AF0  sub_6A4AF0  this=-  sig=ida-proto ====
__int64 sub_6A4AF0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B07BB8 - dbl_B07DE8); /*0x6a4b02*/
  result = Math::RoundToInt(v0 * dbl_B07DE0 * 0.5); /*0x6a4b16*/
  dword_B0B400 = result; /*0x6a4b1b*/
  return result; /*0x6a4b20*/
}



// ==== 0x006A4B30  sub_6A4B30  this=-  sig=ida-proto ====
void sub_6A4B30()
{
  dbl_B07DF0 = Math::ArcTan((double)dword_B0B400 * 0.00390625); /*0x6a4b47*/
}



// ==== 0x006A4B60  sub_6A4B60  this=-  sig=ida-proto ====
void sub_6A4B60()
{
  dbl_B0B310 = Math::ArcTan((double)(2 * dword_B0B400) / dbl_B07DE0); /*0x6a4b82*/
}



// ==== 0x006A4B90  sub_6A4B90  this=-  sig=ida-proto ====
__int64 sub_6A4B90()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B400) + 0.5); /*0x6a4bab*/
  dword_B0B394 = result; /*0x6a4bb0*/
  return result; /*0x6a4bb6*/
}



// ==== 0x006A4BC0  sub_6A4BC0  this=-  sig=ida-proto ====
int sub_6A4BC0()
{
  word_B07DD8 = 0; /*0x6a4bc2*/
  word_B07DDA = 0; /*0x6a4bc8*/
  return 0; /*0x6a4bce*/
}



// ==== 0x006A4BD0  sub_6A4BD0  this=-  sig=ida-proto ====
int sub_6A4BD0()
{
  dword_B0B300 = 0; /*0x6a4bd2*/
  dword_B0B304 = 0; /*0x6a4bd7*/
  dword_B0B308 = 0; /*0x6a4bdc*/
  return 0; /*0x6a4be1*/
}



// ==== 0x006A4BF0  sub_6A4BF0  this=-  sig=ida-proto ====
int sub_6A4BF0()
{
  dword_B0B390 = 0; /*0x6a4bf5*/
  dword_B0B388 = 128; /*0x6a4bff*/
  dword_B0B38C = 128; /*0x6a4c04*/
  return 128; /*0x6a4c09*/
}



// ==== 0x006A4C10  sub_6A4C10  this=-  sig=ida-proto ====
int sub_6A4C10()
{
  GadgetClass::Construct(&stru_B07E58, 0, 0, 1, 1, 8, 0); /*0x6a4c21*/
  stru_B07E58 = (int)&SidebarClass::SBGadgetClass::`vftable'; /*0x6a4c2b*/
  return atexit(sub_6A4C40); /*0x6a4c3b*/
}



// ==== 0x006A4C40  sub_6A4C40  this=-  sig=ida-proto ====
void __cdecl sub_6A4C40()
{
  if ( (byte_B07BB0 & 1) == 0 ) /*0x6a4c4a*/
  {
    byte_B07BB0 |= 1u; /*0x6a4c4e*/
    GadgetClass::Dtor(&stru_B07E58); /*0x6a4c59*/
  }
}



// ==== 0x006A4C60  sub_6A4C60  this=-  sig=ida-proto ====
int sub_6A4C60()
{
  ShapeButtonClass::Init(stru_B07DF8); /*0x6a4c65*/
  return atexit(sub_6A4C80); /*0x6a4c75*/
}



// ==== 0x006A4C80  sub_6A4C80  this=-  sig=ida-proto ====
void __cdecl sub_6A4C80()
{
  if ( (byte_B07BB1 & 1) == 0 ) /*0x6a4c8a*/
  {
    byte_B07BB1 |= 1u; /*0x6a4c8e*/
    ShapeButtonClass::Destructor((int)stru_B07DF8); /*0x6a4c99*/
  }
}



// ==== 0x006A4CA0  sub_6A4CA0  this=-  sig=ida-proto ====
int sub_6A4CA0()
{
  ShapeButtonClass::Init(stru_B0B3A0); /*0x6a4ca5*/
  return atexit(sub_6A4CC0); /*0x6a4cb5*/
}



// ==== 0x006A4CC0  sub_6A4CC0  this=-  sig=ida-proto ====
void __cdecl sub_6A4CC0()
{
  if ( (byte_B07BB1 & 2) == 0 ) /*0x6a4cca*/
  {
    byte_B07BB1 |= 2u; /*0x6a4cce*/
    ShapeButtonClass::Destructor((int)stru_B0B3A0); /*0x6a4cd9*/
  }
}



// ==== 0x006A4CE0  sub_6A4CE0  this=-  sig=ida-proto ====
int sub_6A4CE0()
{
  _BYTE *v0; // esi
  int v1; // edi

  v0 = &stru_B07C48; /*0x6a4ce2*/
  v1 = 4; /*0x6a4ce7*/
  do /*0x6a4cf7*/
  {
    ShapeButtonClass::Init(v0); /*0x6a4cee*/
    v0 += 96; /*0x6a4cf3*/
    --v1; /*0x6a4cf6*/
  }
  while ( v1 ); /*0x6a4cf7*/
  return atexit(sub_6A4D10); /*0x6a4d06*/
}



// ==== 0x006A4D10  sub_6A4D10  this=-  sig=ida-proto ====
void __cdecl sub_6A4D10()
{
  int *v0; // esi
  int v1; // edi

  if ( (byte_B07BB1 & 4) == 0 ) /*0x6a4d1d*/
  {
    byte_B07BB1 |= 4u; /*0x6a4d23*/
    v0 = &dword_B07DC8; /*0x6a4d29*/
    v1 = 4; /*0x6a4d2e*/
    do /*0x6a4d3b*/
    {
      v0 -= 24; /*0x6a4d30*/
      ShapeButtonClass::Destructor((int)v0); /*0x6a4d35*/
      --v1; /*0x6a4d3a*/
    }
    while ( v1 ); /*0x6a4d3b*/
  }
}



// ==== 0x006A4D40  sub_6A4D40  this=-  sig=ida-proto ====
int sub_6A4D40()
{
  ShapeButtonClass::Init(stru_B0B328); /*0x6a4d45*/
  return atexit(sub_6A4D60); /*0x6a4d55*/
}



// ==== 0x006A4D60  sub_6A4D60  this=-  sig=ida-proto ====
void __cdecl sub_6A4D60()
{
  if ( (byte_B07BB1 & 8) == 0 ) /*0x6a4d6a*/
  {
    byte_B07BB1 |= 8u; /*0x6a4d6e*/
    ShapeButtonClass::Destructor((int)stru_B0B328); /*0x6a4d79*/
  }
}



// ==== 0x006A4D80  sub_6A4D80  this=-  sig=ida-proto ====
int sub_6A4D80()
{
  ShapeButtonClass::Init(g_SidebarFlag); /*0x6a4d85*/
  return atexit(sub_6A4DA0); /*0x6a4d95*/
}



// ==== 0x006A4DA0  sub_6A4DA0  this=-  sig=ida-proto ====
void __cdecl sub_6A4DA0()
{
  if ( (byte_B07BB1 & 0x10) == 0 ) /*0x6a4daa*/
  {
    byte_B07BB1 |= 0x10u; /*0x6a4dae*/
    ShapeButtonClass::Destructor((int)g_SidebarFlag); /*0x6a4db9*/
  }
}



// ==== 0x006A4DC0  sub_6A4DC0  this=-  sig=ida-proto ====
int sub_6A4DC0()
{
  _DWORD *v0; // esi
  int v1; // ebx

  v0 = &stru_B07E80; /*0x6a4dc3*/
  v1 = 240; /*0x6a4dc8*/
  do /*0x6a4df0*/
  {
    ControlClass::Construct(v0, 0, 0, 0, 60, 48, 25, 0); /*0x6a4ddb*/
    v0[11] = 0; /*0x6a4de0*/
    v0[12] = 0; /*0x6a4de3*/
    *v0 = &SidebarClass::StripClass::SelectClass::`vftable'; /*0x6a4de6*/
    v0 += 14; /*0x6a4dec*/
    --v1; /*0x6a4def*/
  }
  while ( v1 ); /*0x6a4df0*/
  return atexit(sub_6A4E10); /*0x6a4dff*/
}



// ==== 0x006A4E10  sub_6A4E10  this=-  sig=ida-proto ====
void __cdecl sub_6A4E10()
{
  int *v0; // esi
  int v1; // edi

  if ( (byte_B07BB1 & 0x20) == 0 ) /*0x6a4e1a*/
  {
    byte_B07BB1 |= 0x20u; /*0x6a4e20*/
    v0 = &dword_B0B300; /*0x6a4e26*/
    v1 = 240; /*0x6a4e2b*/
    do /*0x6a4e3b*/
    {
      v0 -= 14; /*0x6a4e30*/
      GadgetClass::Dtor(v0); /*0x6a4e35*/
      --v1; /*0x6a4e3a*/
    }
    while ( v1 ); /*0x6a4e3b*/
  }
}



// ==== 0x006A4E60  SidebarClass::initTabData  this=SidebarClass  sig=csp ====
char *__thiscall sub_6A4E60(char *this)
{
  char *v2; // esi
  int v3; // ebp
  _BYTE *v4; // esi
  int v5; // ebp
  char v7; // [esp+13h] [ebp-1h] BYREF

  RadarClass::Create((int)this); /*0x6a4e67*/
  v2 = this + 5444; /*0x6a4e6c*/
  v3 = 4; /*0x6a4e72*/
  do /*0x6a4eac*/
  {
    *(_DWORD *)v2 = 0; /*0x6a4e79*/
    v2[4] = 0; /*0x6a4e7b*/
    *((_DWORD *)v2 + 2) = dword_A8ED84; /*0x6a4e8f*/
    *((_DWORD *)v2 + 4) = 0; /*0x6a4e92*/
    *((_DWORD *)v2 + 5) = 0; /*0x6a4e96*/
    *((_DWORD *)v2 + 6) = 1; /*0x6a4e99*/
    Array::ForEach((int)(v2 + 88), 52, 75, TabClass::drawTabBackground); /*0x6a4ea0*/
    v2 += 3988; /*0x6a4ea5*/
    --v3; /*0x6a4eab*/
  }
  while ( v3 ); /*0x6a4eac*/
  *((_DWORD *)this + 5351) = 0; /*0x6a4eae*/
  this->q14E8 = 0; /*0x6a4eb4*/
  *(this + 21412) = 0; /*0x6a4eba*/
  *(this + 21413) = 0; /*0x6a4ec0*/
  *(this + 21414) = 1; /*0x6a4ec6*/
  *(this + 21416) = 0; /*0x6a4ecd*/
  *(this + 21780) = 0; /*0x6a4ed3*/
  *(this + 21781) = 0; /*0x6a4ed9*/
  *(_DWORD *)this = &SidebarClass::`vftable'; /*0x6a4edf*/
  v4 = this + 5444; /*0x6a4ee5*/
  v5 = 4; /*0x6a4eeb*/
  do /*0x6a4f07*/
  {
    if ( v4 ) /*0x6a4ef2*/
      TabClass::updateTabProduction(v4, (int)&v7); /*0x6a4efb*/
    v4 += 3988; /*0x6a4f00*/
    --v5; /*0x6a4f06*/
  }
  while ( v5 ); /*0x6a4f07*/
  return this; /*0x6a4f0b*/
}



// ==== 0x006A4F20  RadarClass::UI_Init  this=RadarClass  sig=csp ====
int __thiscall sub_6A4F20(int this, int a2)
{
  _DWORD *v3; // esi
  int v4; // ebp
  int v5; // esi
  int v6; // ebp

  System_Init_6AC840((char *)this, a2); /*0x6a4f2b*/
  DynamicVector::Constructor_Cell((_DWORD *)(this + 4644), 0, 0); /*0x6a4f3a*/
  System_Init_6AC8D0((_DWORD *)(this + 4700), 0, 0); /*0x6a4f47*/
  v3 = (_DWORD *)(this + 4728); /*0x6a4f4c*/
  v4 = 22; /*0x6a4f52*/
  do /*0x6a4f64*/
  {
    System_Init_6AC8D0(v3, 0, 0); /*0x6a4f5b*/
    v3 += 6; /*0x6a4f60*/
    --v4; /*0x6a4f63*/
  }
  while ( v4 ); /*0x6a4f64*/
  Timer::Init((DWORD *)(this + 5376), 0); /*0x6a4f6d*/
  *(_DWORD *)this = &RadarClass::`vftable'; /*0x6a4f78*/
  AudioController::Init((_DWORD *)(this + 5312)); /*0x6a4f7e*/
  *(_DWORD *)(this + 5408) = Timer::GetTicks(); /*0x6a4f8e*/
  *(_DWORD *)(this + 5416) = 0; /*0x6a4f94*/
  *(_DWORD *)this = &PowerClass::`vftable'; /*0x6a4f9a*/
  v5 = this + 5444; /*0x6a4fa0*/
  v6 = 4; /*0x6a4fa6*/
  do /*0x6a4fdf*/
  {
    *(_DWORD *)v5 = 0; /*0x6a4fab*/
    *(_BYTE *)(v5 + 4) = 0; /*0x6a4fad*/
    *(_DWORD *)(v5 + 8) = dword_A8ED84; /*0x6a4fc2*/
    *(_DWORD *)(v5 + 16) = 0; /*0x6a4fc5*/
    *(_DWORD *)(v5 + 20) = 0; /*0x6a4fc9*/
    *(_DWORD *)(v5 + 24) = 1; /*0x6a4fcc*/
    Array::ForEach(v5 + 88, 52, 75, TabClass::drawTabBackground); /*0x6a4fd3*/
    v5 += 3988; /*0x6a4fd8*/
    --v6; /*0x6a4fde*/
  }
  while ( v6 ); /*0x6a4fdf*/
  *(_DWORD *)this = &SidebarClass::`vftable'; /*0x6a4fe1*/
  return this; /*0x6a4fe9*/
}



// ==== 0x006A4FF0  nullsub_36  this=-  sig=csp ====
void __stdcall nullsub_36(int a1)
{
  ; /*0x6a4ff0*/
}



// ==== 0x006A5000  SidebarClass::processDamage  this=SidebarClass  sig=csp ====
int __thiscall ObjectClass::processDamage(SidebarClass *this)
{
  int v1; // esi
  int result; // eax
  int v3; // [esp+0h] [ebp-4h]

  PowerClass::Stub((PowerClass *)this, v3); /*0x6a5001*/
  v1 = 4; /*0x6a5006*/
  do /*0x6a501d*/
  {
    result = (int)SearchMIXFile(aDarkenShp, 0); /*0x6a5012*/
    --v1; /*0x6a5017*/
    dword_B07BC0 = result; /*0x6a5018*/
  }
  while ( v1 ); /*0x6a501d*/
  return result; /*0x6a501f*/
}



// ==== 0x006A5030  SidebarClass::InitSubsystems  this=SidebarClass  sig=csp ====
int __thiscall HouseClass::InitSubsystems(SidebarClass *this)
{
  int *p_SidebarClass_field_0x1544; // edi
  int v3; // ebp
  int (__thiscall **SidebarClass_field_0x0)(SidebarClass *, _DWORD); // eax

  PowerClass::updateDrain((PowerClass *)this); /*0x6a5036*/
  *((_BYTE *)this + 21414) = 1; /*0x6a503d*/
  *((_BYTE *)this + 21781) = 0; /*0x6a5044*/
  *((_BYTE *)this + 21780) = 0; /*0x6a504a*/
  p_SidebarClass_field_0x1544 = &this->SidebarClass_field_0x1544; /*0x6a5050*/
  v3 = 4; /*0x6a5056*/
  do /*0x6a5069*/
  {
    HouseClass::ClearProductionQueue((HouseClass *)p_SidebarClass_field_0x1544); /*0x6a505d*/
    p_SidebarClass_field_0x1544 += 997; /*0x6a5062*/
    --v3; /*0x6a5068*/
  }
  while ( v3 ); /*0x6a5069*/
  SidebarClass_field_0x0 = (int (__thiscall **)(SidebarClass *, _DWORD))this->SidebarClass_field_0x0; /*0x6a506b*/
  *((_DWORD *)this + 5351) = 0; /*0x6a5070*/
  this->q14E8 = 0; /*0x6a5076*/
  return SidebarClass_field_0x0[54](this, 0); /*0x6a5082*/
}



// ==== 0x006A5090  SidebarClass::InitPositions  this=SidebarClass  sig=csp ====
int SidebarClass::InitPositions(SidebarClass *this)
{
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a5095*/
  {
    dword_B0B4E0 = g_DSurface_SidebarBounds + 7; /*0x6a50f4*/
    dword_B0B4EC = g_DSurface_SidebarBounds + 39; /*0x6a50fc*/
    dword_B0B4E4 = 52; /*0x6a5104*/
    dword_B0B4F0 = 32; /*0x6a510e*/
    g_SidebarBounds = g_DSurface_SidebarBounds + 69; /*0x6a5118*/
    dword_B0B4FC = 64; /*0x6a511d*/
    return g_DSurface_SidebarBounds + 69; /*0x6a5101*/
  }
  else
  {
    dword_B0B4E4 = 64; /*0x6a50a5*/
    dword_B0B4F0 = 29; /*0x6a50af*/
    dword_B0B4FC = 63; /*0x6a50b9*/
    dword_B0B4E0 = g_DSurface_SidebarBounds + 8; /*0x6a50c6*/
    dword_B0B4EC = g_DSurface_SidebarBounds + 39; /*0x6a50ce*/
    g_SidebarBounds = g_DSurface_SidebarBounds + 69; /*0x6a50d6*/
    return g_DSurface_SidebarBounds + 69; /*0x6a50d3*/
  }
}



// ==== 0x006A5130  SidebarClass::CalcBounds  this=SidebarClass  sig=csp ====
int __stdcall SidebarClass_CalcBounds(char a1)
{
  int v1; // ebx
  int v2; // eax
  _DWORD *v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // esi
  int v7; // ecx
  int result; // eax
  _BYTE v9[16]; // [esp+8h] [ebp-10h] BYREF

  if ( a1 ) /*0x6a513b*/
  {
    v3 = (_DWORD *)SidebarClass::calcSidebarRect(v9); /*0x6a5199*/
    v4 = v3[1]; /*0x6a51a2*/
    v5 = v3[3]; /*0x6a51a8*/
    v1 = v3[2] + *v3; /*0x6a51ab*/
    dword_886F98 = 168; /*0x6a51bb*/
    DSurface_SidebarBounds = v1; /*0x6a51c0*/
    g_DSurface_SidebarBounds = 158; /*0x6a51c6*/
    v2 = v5 + 32 + v4 - 158; /*0x6a51d0*/
    g_DSurface_ViewBounds = v2; /*0x6a51d7*/
  }
  else if ( byte_A8EB7C ) /*0x6a5144*/
  {
    g_DSurface_SidebarBounds = 158; /*0x6a515b*/
    v1 = dword_886FA8 + DSurface_ViewBounds; /*0x6a5165*/
    dword_886F98 = 168; /*0x6a5173*/
    DSurface_SidebarBounds = dword_886FA8 + DSurface_ViewBounds; /*0x6a5181*/
    v2 = dword_886FAC + 32 + dword_886FA4 - 158; /*0x6a5187*/
    g_DSurface_ViewBounds = v2; /*0x6a518e*/
  }
  else
  {
    v2 = g_DSurface_ViewBounds; /*0x6a51de*/
    v1 = DSurface_SidebarBounds; /*0x6a51e3*/
  }
  v6 = *((_DWORD *)dword_A8B230 + 3374); /*0x6a51ef*/
  dword_B0B500 = 50; /*0x6a51f5*/
  v7 = 26; /*0x6a5205*/
  if ( *((_DWORD *)dword_A8B230 + 3374) ) /*0x6a51ff*/
    v7 = 18; /*0x6a520e*/
  result = 50 * ((v2 - g_SidebarBounds - v7 + g_DSurface_SidebarBounds - 7) / 50); /*0x6a523f*/
  dword_B0B504 = result; /*0x6a5243*/
  if ( v6 ) /*0x6a5248*/
  {
    if ( v6 == 1 ) /*0x6a5263*/
    {
      dword_B0B50C = g_SidebarBounds + result + 7; /*0x6a5269*/
    }
    else
    {
      result += g_SidebarBounds + 7; /*0x6a5271*/
      dword_B0B50C = result; /*0x6a5275*/
    }
    dword_B0B510 = 45; /*0x6a527a*/
  }
  else
  {
    dword_B0B510 = 46; /*0x6a524e*/
    dword_B0B50C = g_SidebarBounds + result + 7; /*0x6a5258*/
  }
  dword_B0B514 = 50; /*0x6a5287*/
  dword_B0B4F4 = v1 + 22; /*0x6a5293*/
  if ( v6 ) /*0x6a529a*/
  {
    if ( v6 != 1 ) /*0x6a52c1*/
      result = v1 + 33; /*0x6a52e6*/
    dword_B0B508 = v1 + 39; /*0x6a52cd*/
    dword_B0B4DC = v1 + 33; /*0x6a52d3*/
    dword_B0B4E8 = v1 + 20; /*0x6a52d9*/
  }
  else
  {
    dword_B0B508 = v1 + 39; /*0x6a52a6*/
    dword_B0B4DC = v1 + 20; /*0x6a52ac*/
    dword_B0B4E8 = v1 + 26; /*0x6a52b2*/
    return v1 + 26; /*0x6a529f*/
  }
  return result; /*0x6a52a5*/
}



// ==== 0x006A5310  SidebarClass::Init  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::Init(SidebarClass *this)
{
  int v2; // eax
  int v3; // ebp
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // ebp
  SidebarClass *v11; // esi
  int v12; // eax
  int v13; // ecx
  int *ptr_C; // edx
  int i; // ebx
  int v16; // esi
  int v17; // eax
  _DWORD *v18; // ecx
  int v19; // edx
  _DWORD *v20; // ecx
  int v21; // edx
  int v22; // eax
  int BuildingAnimByName; // eax
  _DWORD *ProductionData; // eax
  int v25; // ecx
  int v26; // ebx
  int v27; // ecx
  int *v28; // esi
  RadarClass *v30; // [esp+4h] [ebp-Ch]
  SidebarClass *v31; // [esp+4h] [ebp-Ch]
  int v32; // [esp+Ch] [ebp-4h]

  SidebarClass::CreateScrollButtons(v30); /*0x6a5315*/
  SidebarClass::InitPositions(v31); /*0x6a531c*/
  SidebarClass::CalcBounds(0); /*0x6a5326*/
  LOBYTE(v2) = stru_A8EB00.?[391]; /*0x6a532b*/
  if ( !stru_A8EB00.?[391] ) /*0x6a5332*/
  {
    dword_B0B3B0 = dword_B0B4E0; /*0x6a534b*/
    byte_B0B3BD = 1; /*0x6a5360*/
    dword_B0B3C4 = 101; /*0x6a5367*/
    dword_B0B3AC = dword_B0B4DC; /*0x6a5371*/
    dword_B0B3E4 = -480; /*0x6a5376*/
    dword_B0B3E8 = 0; /*0x6a537c*/
    byte_B0B3EC = 1; /*0x6a5382*/
    dword_B0B3F0 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a5389*/
    byte_B0B3CD = 0; /*0x6a538f*/
    dword_B0B3D0 = 1; /*0x6a5395*/
    byte_B0B3E0 = 1; /*0x6a539b*/
    SHA1::Reset((int)&stru_B0B3A0); /*0x6a53a2*/
    dword_B07E04 = dword_B0B3AC + dword_B0B4E4; /*0x6a53bf*/
    byte_B07E15 = 1; /*0x6a53ca*/
    dword_B07E1C = 102; /*0x6a53d1*/
    dword_B07E08 = dword_B0B3B0; /*0x6a53db*/
    dword_B07E3C = -480; /*0x6a53e1*/
    dword_B07E40 = 0; /*0x6a53e7*/
    byte_B07E44 = 1; /*0x6a53ed*/
    dword_B07E48 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a53f4*/
    byte_B07E25 = 0; /*0x6a53f9*/
    dword_B07E28 = 1; /*0x6a53ff*/
    byte_B07E38 = 1; /*0x6a5405*/
    SHA1::Reset((int)&stru_B07DF8); /*0x6a540c*/
    v3 = 0; /*0x6a5411*/
    v4 = &unk_B07C6C; /*0x6a5413*/
    do /*0x6a5484*/
    {
      v5 = dword_B0B4E8; /*0x6a5422*/
      v6 = v3 * dword_B0B4F0; /*0x6a5427*/
      *((_BYTE *)v4 - 7) = 1; /*0x6a5430*/
      v7 = v5 + v6; /*0x6a5434*/
      v8 = dword_B0B4EC; /*0x6a5436*/
      *v4 = v3 + 203; /*0x6a543b*/
      v9 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a543d*/
      *(v4 - 6) = v7; /*0x6a5443*/
      *(v4 - 5) = v8; /*0x6a5446*/
      v4[8] = -480; /*0x6a5449*/
      v4[9] = 0; /*0x6a5450*/
      *((_BYTE *)v4 + 40) = 1; /*0x6a5453*/
      v4[11] = v9; /*0x6a5457*/
      *((_BYTE *)v4 + 9) = 0; /*0x6a545d*/
      v4[3] = 2; /*0x6a5461*/
      *((_BYTE *)v4 + 28) = 1; /*0x6a546a*/
      DialogControl::Show((GadgetClass *)(v4 - 9)); /*0x6a546e*/
      SHA1::Reset((int)(v4 - 9)); /*0x6a5475*/
      v4 += 24; /*0x6a547a*/
      ++v3; /*0x6a547d*/
    }
    while ( (int)v4 < (int)((_DWORD *)&dbl_B07DE8 + 1) ); /*0x6a5484*/
    byte_B0B345 = 1; /*0x6a5496*/
    dword_B0B34C = 201; /*0x6a549d*/
    byte_B0B374 = 1; /*0x6a54a7*/
    dword_B0B378 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a54ae*/
    dword_B0B348 = 85; /*0x6a54b4*/
    SHA1::Reset((int)&stru_B0B328); /*0x6a54ba*/
    byte_B0B425 = 1; /*0x6a54c9*/
    dword_B0B42C = 200; /*0x6a54d0*/
    byte_B0B454 = 1; /*0x6a54da*/
    dword_B0B458 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a54e1*/
    dword_B0B428 = 85; /*0x6a54e6*/
    SHA1::Reset((int)&g_SidebarFlag); /*0x6a54ec*/
    v10 = 0; /*0x6a54f1*/
    v11 = (SidebarClass *)((char *)this + 5480); /*0x6a54f5*/
    do /*0x6a553b*/
    {
      v11[-1].SidebarClass_field_0x1544 = dword_B0B4F4; /*0x6a5502*/
      v11->SidebarClass_field_0x0 = (void *)g_SidebarBounds; /*0x6a550e*/
      v12 = dword_B0B504; /*0x6a5510*/
      v11->SidebarClass_field_0x4 = 0; /*0x6a5519*/
      v11->SidebarClass_field_0x8 = 0; /*0x6a551b*/
      *(_DWORD *)v11->__pad_C = 60; /*0x6a5523*/
      *(_DWORD *)&v11->__pad_C[4] = v12; /*0x6a5529*/
      SidebarClass::InitCameoGrid((SidebarClass *)((char *)v11 - 36), v10++); /*0x6a552c*/
      v11 = (SidebarClass *)((char *)v11 + 3988); /*0x6a5532*/
    }
    while ( v10 < 4 ); /*0x6a553b*/
    (*((void (__thiscall **)(SidebarClass *))this->SidebarClass_field_0x0 + 34))(this); /*0x6a5541*/
    SidebarClass::CalcBounds(1); /*0x6a554b*/
    if ( *((_BYTE *)this + 21413) ) /*0x6a5550*/
    {
      (*((void (__thiscall **)(SidebarClass *, _DWORD))this->SidebarClass_field_0x0 + 54))(this, 0); /*0x6a5560*/
      (*((void (__thiscall **)(SidebarClass *, int))this->SidebarClass_field_0x0 + 54))(this, 1); /*0x6a556c*/
    }
    this->q1544 = 0; /*0x6a5574*/
    LOBYTE(v2) = dword_A8B238; /*0x6a557a*/
    if ( *(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4 ) /*0x6a5587*/
    {
      v13 = 0; /*0x6a5595*/
      if ( stru_A80220.? <= 0 ) /*0x6a5599*/
      {
LABEL_17:
        v2 = 0; /*0x6a55d9*/
      }
      else
      {
        ptr_C = (int *)stru_A80220.?; /*0x6a559b*/
        while ( 1 ) /*0x6a55a5*/
        {
          v2 = *ptr_C; /*0x6a55a5*/
          if ( *ptr_C ) /*0x6a55a5*/
          {
            if ( *(_BYTE *)(*(_DWORD *)(v2 + 52) + 422) != 1 && v2 != HouseClass_Observer && *(_BYTE *)(v2 + 492) ) /*0x6a55bf*/
              break; /*0x6a55bf*/
          }
          ++v13; /*0x6a55cf*/
          ++ptr_C; /*0x6a55d0*/
          if ( v13 >= stru_A80220.? ) /*0x6a55d5*/
            goto LABEL_17; /*0x6a55d5*/
        }
      }
      this->q14EB = v2; /*0x6a55db*/
      for ( i = 0; i < 8; i = this->q1544 ) /*0x6a55e1*/
      {
        v16 = *((_DWORD *)this + i + 5355); /*0x6a55e7*/
        if ( !v16 ) /*0x6a55f0*/
          break; /*0x6a55f0*/
        v17 = 0; /*0x6a55fc*/
        v18 = (_DWORD *)(v16 + 21476); /*0x6a55fe*/
        v19 = 20; /*0x6a5604*/
        do /*0x6a560f*/
        {
          v17 += *v18++; /*0x6a5609*/
          --v19; /*0x6a560e*/
        }
        while ( v19 ); /*0x6a560f*/
        v20 = (_DWORD *)(v16 + 21560); /*0x6a5611*/
        v21 = 20; /*0x6a5617*/
        do /*0x6a5622*/
        {
          v17 += *v20++; /*0x6a561c*/
          --v21; /*0x6a5621*/
        }
        while ( v21 ); /*0x6a5622*/
        *((_DWORD *)this + i + 5363) = v17; /*0x6a5626*/
        *((_DWORD *)this + this->q1544 + 5371) = *(_DWORD *)(v16 + 744) /*0x6a5659*/
                                                            + *(_DWORD *)(v16 + 752)
                                                            + *(_DWORD *)(v16 + 756)
                                                            + *(_DWORD *)(v16 + 760);
        v22 = (*(int (__stdcall **)(int))(*(_DWORD *)(v16 + 36) + 24))(v16 + 36); /*0x6a5669*/
        if ( v22 < 0 ) /*0x6a566e*/
          v22 = 0; /*0x6a5670*/
        *((_DWORD *)this + this->q1544 + 5379) = v22; /*0x6a567a*/
        if ( v16 == HouseClass_Observer ) /*0x6a569a*/
        {
          BuildingAnimByName = FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x6a56a6*/
        }
        else if ( *(_BYTE *)(v16 + 501) ) /*0x6a56ad*/
        {
          BuildingAnimByName = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x6a56c1*/
        }
        else
        {
          BuildingAnimByName = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v16 + 90196)); /*0x6a56d3*/
        }
        *((_DWORD *)this + this->q1544 + 5387) = BuildingAnimByName; /*0x6a56dc*/
        *((_DWORD *)this + this->q1544 + 5395) = 0; /*0x6a56e9*/
        *((_DWORD *)this + this->q1544 + 5403) = 0; /*0x6a56f6*/
        *((_DWORD *)this + this->q1544 + 5411) = 0; /*0x6a5703*/
        *((_DWORD *)this + this->q1544 + 5419) = 0; /*0x6a5710*/
        *((_DWORD *)this + this->q1544 + 5427) = 0; /*0x6a571d*/
        *((_DWORD *)this + this->q1544 + 5435) = 0; /*0x6a572a*/
        if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x6a5739*/
        {
          ProductionData = SidebarClass::FindProductionData((SidebarClass *)(v16 + 90154)); /*0x6a5741*/
          if ( ProductionData ) /*0x6a5748*/
          {
            *((_DWORD *)this + this->q1544 + 5395) = ProductionData[7]; /*0x6a5754*/
            *((_DWORD *)this + this->q1544 + 5403) = ProductionData[4]; /*0x6a5764*/
            *((_DWORD *)this + this->q1544 + 5411) = ProductionData[2]; /*0x6a5774*/
            *((_DWORD *)this + this->q1544 + 5419) = ProductionData[3]; /*0x6a5784*/
            *((_DWORD *)this + this->q1544 + 5427) = ProductionData[8]; /*0x6a5794*/
            *((_DWORD *)this + this->q1544 + 5435) = ProductionData[12]; /*0x6a57a4*/
            __3_YAXPAX_Z(ProductionData); /*0x6a57ab*/
          }
        }
        v32 = 0; /*0x6a57b9*/
        v25 = this->q1544 + 1; /*0x6a57bd*/
        this->q1544 = v25; /*0x6a57be*/
        v26 = v25; /*0x6a57ca*/
        v27 = 0; /*0x6a57cc*/
        if ( stru_A80220.? > 0 ) /*0x6a57d0*/
        {
          v28 = (int *)stru_A80220.?; /*0x6a57d2*/
          do /*0x6a5814*/
          {
            v2 = *v28; /*0x6a57dc*/
            if ( *v28 /*0x6a57f6*/
              && *(_BYTE *)(*(_DWORD *)(v2 + 52) + 422) != 1
              && v2 != HouseClass_Observer
              && *(_BYTE *)(v2 + 492) )
            {
              if ( v32 == v26 ) /*0x6a5805*/
                goto LABEL_44; /*0x6a5805*/
              ++v32; /*0x6a580a*/
            }
            ++v27; /*0x6a580e*/
            ++v28; /*0x6a580f*/
          }
          while ( v27 < stru_A80220.? ); /*0x6a5814*/
        }
        v2 = 0; /*0x6a5818*/
LABEL_44:
        *((_DWORD *)this + v26 + 5355) = v2; /*0x6a581a*/
      }
    }
    *((_BYTE *)this + 21772) = 0; /*0x6a5831*/
  }
  return v2; /*0x6a5839*/
}



// ==== 0x006A5840  SidebarClass::LoadAssets  this=SidebarClass  sig=csp ====
void *SidebarClass::LoadAssets(SidebarClass *this)
{
  PowerClass *v1; // ecx
  ConvertClass *v2; // eax
  void *FileSHP; // eax
  void *v4; // eax
  int v5; // edi
  ShapeButtonClass *v6; // esi
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  ConvertClass *v10; // eax
  void *result; // eax
  char v12; // [esp+Ch] [ebp-704h] BYREF
  char Buffer[256]; // [esp+10h] [ebp-700h] BYREF
  int v14[192]; // [esp+110h] [ebp-600h] BYREF
  int v15[192]; // [esp+410h] [ebp-300h] BYREF

  PowerClass::checkBlackout(v1); /*0x6a5849*/
  qmemcpy(v14, UI_Load_72F4A0(), sizeof(v14)); /*0x6a5863*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_58[132] ) /*0x6a586d*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&stru_87F5F0.__pad_58[132])(*(_DWORD *)&stru_87F5F0.__pad_58[132], 1); /*0x6a5873*/
    *(_DWORD *)&stru_87F5F0.__pad_58[132] = 0; /*0x6a5875*/
  }
  v2 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x6a5880*/
  if ( v2 ) /*0x6a588a*/
    *(_DWORD *)&stru_87F5F0.__pad_58[132] = ConvertClass::Construct( /*0x6a58ad*/
                                              v2,
                                              (int)v14,
                                              (int)v14,
                                              (int)g_DSurface_Primary,
                                              1,
                                              0);
  else
    *(_DWORD *)&stru_87F5F0.__pad_58[132] = 0; /*0x6a58b4*/
  dword_B0B484 = LoadFileSHP(aGclock2Shp, (bool *)&byte_B0B48F); /*0x6a58d4*/
  v12 = 0; /*0x6a58d9*/
  FileSHP = LoadFileSHP(aSellShp, (bool *)&v12); /*0x6a58dd*/
  ShapeButton::SetShape(&stru_B07DF8, (int)FileSHP, 0, 0); /*0x6a58e8*/
  ButtonClass::SetState((ButtonClass *)&stru_B07DF8, v12); /*0x6a58f7*/
  dword_B07E48 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a590c*/
  v4 = LoadFileSHP(aRepairShp, (bool *)&v12); /*0x6a5911*/
  ShapeButton::SetShape(&stru_B0B3A0, (int)v4, 0, 0); /*0x6a591c*/
  ButtonClass::SetState((ButtonClass *)&stru_B0B3A0, v12); /*0x6a592b*/
  v5 = 0; /*0x6a5936*/
  dword_B0B3F0 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a5938*/
  v6 = &stru_B07C48; /*0x6a593e*/
  do /*0x6a598c*/
  {
    sprintf(Buffer, "TAB%02d.SHP", v5); /*0x6a594e*/
    v7 = LoadFileSHP(Buffer, (bool *)&v12); /*0x6a5960*/
    ShapeButton::SetShape(v6, (int)v7, 0, 0); /*0x6a5968*/
    ButtonClass::SetState((ButtonClass *)v6, v12); /*0x6a5974*/
    ++v5; /*0x6a597f*/
    v6[6].ShapeButtonClass_field_0x08 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a5980*/
    v6 += 8; /*0x6a5983*/
  }
  while ( (int)v6 < (int)&dword_B07DC8 ); /*0x6a598c*/
  v8 = LoadFileSHP(aRDnShp, (bool *)&v12); /*0x6a5999*/
  ShapeButton::SetShape(&stru_B0B328, (int)v8, 0, 0); /*0x6a59a4*/
  ButtonClass::SetState((ButtonClass *)&stru_B0B328, v12); /*0x6a59b3*/
  dword_B0B378 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a59bf*/
  v9 = LoadFileSHP(aRUpShp, (bool *)&v12); /*0x6a59cf*/
  ShapeButton::SetShape(&g_SidebarFlag, (int)v9, 0, 0); /*0x6a59da*/
  ButtonClass::SetState((ButtonClass *)&g_SidebarFlag, v12); /*0x6a59e9*/
  dword_B0B458 = *(_DWORD *)&stru_87F5F0.__pad_58[132]; /*0x6a59fd*/
  dword_B0B468 = LoadFileSHP(aSide1Shp, (bool *)&byte_B0B488); /*0x6a5a11*/
  dword_B0B46C = LoadFileSHP(aSide2Shp, (bool *)&byte_B0B489); /*0x6a5a25*/
  dword_B0B470 = LoadFileSHP(aSide3Shp, (bool *)&byte_B0B48A); /*0x6a5a39*/
  dword_B0B474 = LoadFileSHP(aAddonShp, (bool *)&byte_B0B48B); /*0x6a5a43*/
  qmemcpy(v15, UI_Load_72F4E0(), sizeof(v15)); /*0x6a5a5b*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_58[136] ) /*0x6a5a65*/
  {
    (***(void (__thiscall ****)(_DWORD, int))&stru_87F5F0.__pad_58[136])(*(_DWORD *)&stru_87F5F0.__pad_58[136], 1); /*0x6a5a6b*/
    *(_DWORD *)&stru_87F5F0.__pad_58[136] = 0; /*0x6a5a6d*/
  }
  v10 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x6a5a78*/
  if ( v10 ) /*0x6a5a82*/
    *(_DWORD *)&stru_87F5F0.__pad_58[136] = ConvertClass::Construct( /*0x6a5aa5*/
                                              v10,
                                              (int)v15,
                                              (int)v15,
                                              (int)g_DSurface_Primary,
                                              1,
                                              0);
  else
    *(_DWORD *)&stru_87F5F0.__pad_58[136] = 0; /*0x6a5aac*/
  dword_B0B490 = LoadFileSHP(aObsalliShp, (bool *)&byte_B0B4CC); /*0x6a5acb*/
  dword_B0B494 = LoadFileSHP(aObssoviShp, (bool *)&byte_B0B4CD); /*0x6a5adf*/
  dword_B0B498 = LoadFileSHP(aObsyuriShp, (bool *)&byte_B0B4CE); /*0x6a5af3*/
  dword_B0B49C = LoadFileSHP(aRaniShp, (bool *)&byte_B0B4CF); /*0x6a5b07*/
  dword_B0B4A0 = LoadFileSHP(aObsiShp, (bool *)&byte_B0B4D0); /*0x6a5b1b*/
  dword_B0B4A4 = LoadFileSHP(aUsaiShp, (bool *)&byte_B0B4D1); /*0x6a5b2f*/
  dword_B0B4A8 = LoadFileSHP(aJapiShp, (bool *)&byte_B0B4D2); /*0x6a5b43*/
  dword_B0B4AC = LoadFileSHP(aFraiShp, (bool *)&byte_B0B4D3); /*0x6a5b57*/
  dword_B0B4B0 = LoadFileSHP(aGeriShp, (bool *)&byte_B0B4D4); /*0x6a5b6b*/
  dword_B0B4B4 = LoadFileSHP(aGbriShp, (bool *)&byte_B0B4D5); /*0x6a5b7f*/
  dword_B0B4B8 = LoadFileSHP(aDjbiShp, (bool *)&byte_B0B4D6); /*0x6a5b93*/
  dword_B0B4BC = LoadFileSHP(aArbiShp, (bool *)&byte_B0B4D7); /*0x6a5ba7*/
  dword_B0B4C0 = LoadFileSHP(aLatiShp, (bool *)&byte_B0B4D8); /*0x6a5bbb*/
  dword_B0B4C4 = LoadFileSHP(aRusiShp, (bool *)&byte_B0B4D9); /*0x6a5bcf*/
  result = LoadFileSHP(aYriiShp, (bool *)&byte_B0B4DA); /*0x6a5bd4*/
  dword_B0B4C8 = result; /*0x6a5bdb*/
  return result; /*0x6a5bd9*/
}



// ==== 0x006A5BF0  SidebarClass::CleanupSidebarResources  this=SidebarClass  sig=csp ====
void ObjectClass::CleanupSidebarResources(SidebarClass *this)
{
  ScenarioClass *v1; // esi
  PowerClass *v2; // [esp+0h] [ebp-8h]

  PowerClass::checkLowPower(v2); /*0x6a5bf2*/
  if ( byte_B0B488 ) /*0x6a5c00*/
  {
    __3_YAXPAX_Z(dword_B0B468); /*0x6a5c08*/
    byte_B0B488 = 0; /*0x6a5c10*/
  }
  if ( byte_B0B489 ) /*0x6a5c1c*/
  {
    __3_YAXPAX_Z(dword_B0B46C); /*0x6a5c25*/
    byte_B0B489 = 0; /*0x6a5c2d*/
  }
  if ( byte_B0B48A ) /*0x6a5c39*/
  {
    __3_YAXPAX_Z(dword_B0B470); /*0x6a5c42*/
    byte_B0B48A = 0; /*0x6a5c4a*/
  }
  if ( byte_B0B48B ) /*0x6a5c56*/
  {
    __3_YAXPAX_Z(dword_B0B474); /*0x6a5c5e*/
    byte_B0B48B = 0; /*0x6a5c66*/
  }
  if ( byte_B0B48C ) /*0x6a5c72*/
  {
    __3_YAXPAX_Z(dword_B0B478); /*0x6a5c7b*/
    byte_B0B48C = 0; /*0x6a5c83*/
  }
  if ( byte_B0B48D ) /*0x6a5c8f*/
  {
    __3_YAXPAX_Z(dword_B0B47C); /*0x6a5c98*/
    byte_B0B48D = 0; /*0x6a5ca0*/
  }
  if ( byte_B0B48E ) /*0x6a5cac*/
  {
    __3_YAXPAX_Z(dword_B0B480); /*0x6a5cb4*/
    byte_B0B48E = 0; /*0x6a5cbc*/
  }
  if ( byte_B0B48F ) /*0x6a5cc8*/
  {
    __3_YAXPAX_Z(dword_B0B484); /*0x6a5cd1*/
    byte_B0B48F = 0; /*0x6a5cd9*/
  }
  if ( byte_B0B4CC ) /*0x6a5ce5*/
  {
    __3_YAXPAX_Z(dword_B0B490); /*0x6a5cee*/
    byte_B0B4CC = 0; /*0x6a5cf6*/
  }
  if ( byte_B0B4CD ) /*0x6a5d02*/
  {
    __3_YAXPAX_Z(dword_B0B494); /*0x6a5d0a*/
    byte_B0B4CD = 0; /*0x6a5d12*/
  }
  if ( byte_B0B4CE ) /*0x6a5d1e*/
  {
    __3_YAXPAX_Z(dword_B0B498); /*0x6a5d27*/
    byte_B0B4CE = 0; /*0x6a5d2f*/
  }
  if ( byte_B0B4CF ) /*0x6a5d3b*/
  {
    __3_YAXPAX_Z(dword_B0B49C); /*0x6a5d44*/
    byte_B0B4CF = 0; /*0x6a5d4c*/
  }
  if ( byte_B0B4D1 ) /*0x6a5d58*/
  {
    __3_YAXPAX_Z(dword_B0B4A4); /*0x6a5d60*/
    byte_B0B4D1 = 0; /*0x6a5d68*/
  }
  if ( byte_B0B4D2 ) /*0x6a5d74*/
  {
    __3_YAXPAX_Z(dword_B0B4A8); /*0x6a5d7d*/
    byte_B0B4D2 = 0; /*0x6a5d85*/
  }
  if ( byte_B0B4D3 ) /*0x6a5d91*/
  {
    __3_YAXPAX_Z(dword_B0B4AC); /*0x6a5d9a*/
    byte_B0B4D3 = 0; /*0x6a5da2*/
  }
  if ( byte_B0B4D4 ) /*0x6a5dae*/
  {
    __3_YAXPAX_Z(dword_B0B4B0); /*0x6a5db6*/
    byte_B0B4D4 = 0; /*0x6a5dbe*/
  }
  if ( byte_B0B4D5 ) /*0x6a5dca*/
  {
    __3_YAXPAX_Z(dword_B0B4B4); /*0x6a5dd3*/
    byte_B0B4D5 = 0; /*0x6a5ddb*/
  }
  if ( byte_B0B4D6 ) /*0x6a5de7*/
  {
    __3_YAXPAX_Z(dword_B0B4B8); /*0x6a5df0*/
    byte_B0B4D6 = 0; /*0x6a5df8*/
  }
  if ( byte_B0B4D7 ) /*0x6a5e04*/
  {
    __3_YAXPAX_Z(dword_B0B4BC); /*0x6a5e0c*/
    byte_B0B4D7 = 0; /*0x6a5e14*/
  }
  if ( byte_B0B4D8 ) /*0x6a5e20*/
  {
    __3_YAXPAX_Z(dword_B0B4C0); /*0x6a5e29*/
    byte_B0B4D8 = 0; /*0x6a5e31*/
  }
  if ( byte_B0B4D9 ) /*0x6a5e3d*/
  {
    __3_YAXPAX_Z(dword_B0B4C4); /*0x6a5e46*/
    byte_B0B4D9 = 0; /*0x6a5e4e*/
  }
  if ( byte_B0B4D0 ) /*0x6a5e5a*/
  {
    __3_YAXPAX_Z(dword_B0B4A0); /*0x6a5e62*/
    byte_B0B4D0 = 0; /*0x6a5e6a*/
  }
  if ( byte_B0B4DA ) /*0x6a5e76*/
  {
    __3_YAXPAX_Z(dword_B0B4C8); /*0x6a5e7f*/
    byte_B0B4DA = 0; /*0x6a5e87*/
  }
  ScenarioClass::FreeConfig((ScenarioClass *)&stru_B07DF8); /*0x6a5e92*/
  ScenarioClass::FreeConfig((ScenarioClass *)&stru_B0B3A0); /*0x6a5e9c*/
  v1 = (ScenarioClass *)&stru_B07C48; /*0x6a5ea1*/
  do /*0x6a5eb6*/
  {
    ScenarioClass::FreeConfig(v1); /*0x6a5ea8*/
    v1 = (ScenarioClass *)((char *)v1 + 96); /*0x6a5ead*/
  }
  while ( (int)v1 < (int)&dword_B07DC8 ); /*0x6a5eb6*/
  ScenarioClass::FreeConfig((ScenarioClass *)&stru_B0B328); /*0x6a5ebd*/
  ScenarioClass::FreeConfig((ScenarioClass *)&g_SidebarFlag); /*0x6a5ec7*/
}



// ==== 0x006A5F20  SidebarClass::UpdateCameoProductionState  this=SidebarClass  sig=csp ====
char __thiscall sub_6A5F20(int this, _DWORD *a2)
{
  int v3; // eax
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v10; // [esp+14h] [ebp+4h]

  LOBYTE(v3) = *(_BYTE *)(this + 21413); /*0x6a5f26*/
  if ( (_BYTE)v3 ) /*0x6a5f2e*/
  {
    if ( a2 ) /*0x6a5f3a*/
    {
      v10 = (*(int (__thiscall **)(_DWORD *))(*a2 + 132))(a2); /*0x6a5f4b*/
      LOBYTE(v3) = (_BYTE)dword_A83D4C; /*0x6a5f4f*/
      if ( dword_A83D4C ) /*0x6a5f56*/
      {
        v5 = (*(int (__thiscall **)(_DWORD *))(*a2 + 44))(a2); /*0x6a5f64*/
        v6 = (*(int (__thiscall **)(_DWORD *))(*a2 + 64))(a2); /*0x6a5f6b*/
        switch ( v5 ) /*0x6a5f7b*/
        {
          case 15: /*0x6a5f7b*/
          case 16: /*0x6a5f7b*/
            v3 = 2; /*0x6a5fce*/
            break;
          case 1: /*0x6a5f7b*/
          case 40: /*0x6a5f7b*/
          case 2: /*0x6a5f7b*/
          case 3: /*0x6a5f7b*/
            v3 = 3; /*0x6a5fc7*/
            break;
          case 6: /*0x6a5f7b*/
          case 7: /*0x6a5f7b*/
            v3 = GetHouseTechLevel(v5, v6) == 5; /*0x6a5fc3*/
            break;
          case 57: /*0x6a5f7b*/
          case 32: /*0x6a5f7b*/
          case 31: /*0x6a5f7b*/
            v3 = 1; /*0x6a5fae*/
            break;
          default:
            v3 = -1; /*0x6a5fa9*/
            break;
        }
        v7 = *(_DWORD *)(this + 21404); /*0x6a5fd3*/
        if ( v3 == v7 ) /*0x6a5fdb*/
        {
          LOBYTE(v3) = HouseClass::ShouldDisableCameo(dword_A83D4C, v10); /*0x6a5fe8*/
          if ( (_BYTE)v3 ) /*0x6a5fef*/
          {
            v8 = *(_DWORD *)(this + 21404); /*0x6a5ff5*/
            *(_BYTE *)(this + 21414) = 1; /*0x6a5ffb*/
            *(_BYTE *)(this + 3988 * v8 + 5504) = 1; /*0x6a6015*/
            MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x6a601c*/
            LOBYTE(v3) = (_BYTE)dword_A8ED84; /*0x6a6021*/
            if ( *(_DWORD *)(this + 21408) <= (int)dword_A8ED84 ) /*0x6a602e*/
            {
              LOBYTE(v3) = (_BYTE)dword_A8ED84 + 2; /*0x6a6030*/
              *(_DWORD *)(this + 21408) = dword_A8ED84 + 1; /*0x6a6033*/
            }
          }
        }
        else if ( v5 == 6 ) /*0x6a6043*/
        {
          LOBYTE(v3) = *(_BYTE *)(a2[328] + 5835); /*0x6a604b*/
          if ( (_BYTE)v3 ) /*0x6a6053*/
          {
            if ( v7 == 3 ) /*0x6a6058*/
            {
              *(_BYTE *)(this + 21414) = 1; /*0x6a605a*/
              *(_BYTE *)(this + 17468) = 1; /*0x6a6067*/
              MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x6a606d*/
              LOBYTE(v3) = (_BYTE)dword_A8ED84; /*0x6a6072*/
              if ( *(_DWORD *)(this + 21408) <= (int)dword_A8ED84 ) /*0x6a607f*/
              {
                LOBYTE(v3) = (_BYTE)dword_A8ED84 + 2; /*0x6a6081*/
                *(_DWORD *)(this + 21408) = dword_A8ED84 + 1; /*0x6a6084*/
              }
            }
          }
        }
      }
    }
  }
  return v3; /*0x6a6039*/
}



// ==== 0x006A60A0  Sidebar::ActivateTab  this=Sidebar  sig=csp ====
int __thiscall Sidebar::ActivateTab(int *this, int a2)
{
  int v2; // esi
  int result; // eax

  result = a2; /*0x6a60a0*/
  if ( a2 == *(this + 5351) ) /*0x6a60ac*/
  {
    *((_BYTE *)this + 21414) = 1; /*0x6a60b8*/
    *((_BYTE *)this + 3988 * a2 + 5504) = 1; /*0x6a60c6*/
    return (int)MapClass::MarkForRedraw(&dword_87F7E8, 0, v2); /*0x6a60d2*/
  }
  return result; /*0x6a60d8*/
}



// ==== 0x006A60E0  SuperWeapon::UpdateTargetRedrawState  this=SuperWeapon  sig=csp ====
wchar_t *__thiscall SuperWeapon::UpdateTargetRedrawState(SuperWeapon *this, wchar_t *a2)
{
  wchar_t *result; // eax

  result = (wchar_t *)this->u32_539C; /*0x6a60e7*/
  if ( a2 == result ) /*0x6a60ef*/
  {
    this->q53A6 = 1; /*0x6a60fa*/
    *((_BYTE *)this + 3988 * (_DWORD)result + 5504) = 1; /*0x6a6108*/
    MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x6a6114*/
    result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x6a6119*/
    if ( this->q53A0 <= *(int *)&stru_A8EB00.?[416] ) /*0x6a6126*/
    {
      result = (wchar_t *)(*(_DWORD *)&stru_A8EB00.?[416] + 2); /*0x6a6128*/
      this->q53A0 = *(_DWORD *)&stru_A8EB00.?[416] + 2; /*0x6a612b*/
    }
  }
  return result; /*0x6a6131*/
}



// ==== 0x006A6140  Sidebar::FindProductionType  this=Sidebar  sig=csp ====
char __thiscall Sidebar::FindProductionType(Sidebar *this, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // edx
  int v7; // eax
  char *v8; // ecx
  int v9; // esi
  _DWORD *i; // edx

  switch ( a3 ) /*0x6a6155*/
  {
    case 15: /*0x6a6155*/
    case 16: /*0x6a6155*/
      v5 = 2; /*0x6a61ac*/
      break;
    case 1: /*0x6a6155*/
    case 40: /*0x6a6155*/
    case 2: /*0x6a6155*/
    case 3: /*0x6a6155*/
      v5 = 3; /*0x6a61a5*/
      break;
    case 6: /*0x6a6155*/
    case 7: /*0x6a6155*/
      v5 = GetHouseTechLevel(a3, a4) == 5; /*0x6a61a1*/
      break;
    case 57: /*0x6a6155*/
    case 32: /*0x6a6155*/
    case 31: /*0x6a6155*/
      v5 = 1; /*0x6a6189*/
      break;
    default:
      v5 = -1; /*0x6a6184*/
      break;
  }
  v6 = 997 * v5; /*0x6a61bb*/
  v7 = 0; /*0x6a61be*/
  v8 = (char *)this + 4 * v6 + 5444; /*0x6a61c0*/
  v9 = *((_DWORD *)this + v6 + 1382); /*0x6a61c7*/
  if ( v9 <= 0 ) /*0x6a61d0*/
    return 0; /*0x6a61e6*/
  for ( i = v8 + 88; i[1] != a3 || *i != a4; i += 13 ) /*0x6a61d2*/
  {
    if ( ++v7 >= v9 ) /*0x6a61e4*/
      return 0; /*0x6a61e4*/
  }
  *(_DWORD *)&v8[52 * v7 + 100] = a2; /*0x6a61fa*/
  v8[61] = 1; /*0x6a61fe*/
  v8[60] = 1; /*0x6a6202*/
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x6a620b*/
  return 1; /*0x6a61e6*/
}



// ==== 0x006A6300  SidebarClass::AddCameo  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::AddCameo(SidebarClass *this, int a2, int a3)
{
  int result; // eax
  int v5; // eax
  int *v6; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int *v12; // ecx
  int v13; // ebp
  int *v14; // eax
  int v15; // eax
  int v16; // esi
  char *v17; // ebp
  char *v18; // edi
  int v19; // ebp
  int i; // esi
  int (__thiscall **SidebarClass_field_0x0)(SidebarClass *, _DWORD); // edx
  ObjectClass *v22; // [esp+0h] [ebp-14h]
  int v23; // [esp+10h] [ebp-4h]
  int v24; // [esp+18h] [ebp+4h]

  if ( stru_A8EB00.?[391] ) /*0x6a630e*/
    goto LABEL_57; /*0x6a630e*/
  v5 = 0; /*0x6a6314*/
  v6 = (int *)((char *)this + 5528); /*0x6a6316*/
  while ( *v6 <= 0 ) /*0x6a631f*/
  {
    ++v5; /*0x6a6321*/
    v6 += 997; /*0x6a6322*/
    if ( v5 >= 4 ) /*0x6a632b*/
    {
      v23 = -1; /*0x6a632d*/
      goto LABEL_6; /*0x6a632d*/
    }
  }
  v23 = v5; /*0x6a637e*/
LABEL_6:
  switch ( a2 )
  {
    case 15:
    case 16:
      v24 = 2; /*0x6a63af*/
      break;
    case 1:
    case 40:
    case 2:
    case 3:
      v24 = 3; /*0x6a63a5*/
      break;
    case 6:
    case 7:
      v24 = GetHouseTechLevel(a2, a3) == 5; /*0x6a639f*/
      break;
    default:
      v24 = a2 == 57 || a2 == 32 || a2 == 31 ? 1 : -1;
      break;
  }
  result = v24; /*0x6a63b7*/
  v8 = *((_DWORD *)this + 997 * v24 + 1382); /*0x6a63cf*/
  if ( v8 > 75 ) /*0x6a63d9*/
    goto LABEL_57; /*0x6a63d9*/
  v9 = 0; /*0x6a63df*/
  if ( v8 > 0 ) /*0x6a63e3*/
  {
    result = (int)this + 3988 * v24 + 5532; /*0x6a63e5*/
    while ( *(_DWORD *)(result + 4) != a2 || *(_DWORD *)result != a3 ) /*0x6a63ef*/
    {
      ++v9; /*0x6a63f5*/
      result += 52; /*0x6a63f6*/
      if ( v9 >= v8 ) /*0x6a63fb*/
        goto LABEL_29; /*0x6a63fb*/
    }
LABEL_57:
    LOBYTE(result) = 0; /*0x6a65ff*/
    return result; /*0x6a6602*/
  }
LABEL_29:
  if ( !dword_A8E7AC && a2 != 31 ) /*0x6a6409*/
    VoxClass::FindAndPlay(&stru_83FA64, -1); /*0x6a6415*/
  TabCameoListClass::AddCameo_ReplaceItAll((TabCameoListClass *)&this->__pad_CD2[3988 * v24 + 2162], a2, a3); /*0x6a641e*/
  *((_BYTE *)this + 3988 * v24 + 5504) = 1; /*0x6a6423*/
  v10 = 0; /*0x6a6427*/
  g_CameoRenderFlag = 1; /*0x6a6429*/
  v11 = 0; /*0x6a6430*/
  v12 = (int *)((char *)this + 5528); /*0x6a6432*/
  while ( *v12 <= 0 ) /*0x6a643a*/
  {
    ++v11; /*0x6a643c*/
    v12 += 997; /*0x6a643d*/
    if ( v11 >= 4 ) /*0x6a6446*/
      goto LABEL_37; /*0x6a6446*/
  }
  if ( v11 != -1 ) /*0x6a644d*/
    goto LABEL_39; /*0x6a644d*/
LABEL_37:
  if ( dword_B0B478 ) /*0x6a6455*/
  {
    this->q14E6 = 1; /*0x6a6457*/
    this->q14E5 = 0; /*0x6a6461*/
  }
LABEL_39:
  v13 = v24; /*0x6a6467*/
  if ( !(unsigned __int8)DialogControl::IsHidden((DialogControl *)&stru_B07C48 + 6 * v24) ) /*0x6a647a*/
    DialogControl::Hide((GadgetClass *)(&stru_B07C48 + 8 * v24)); /*0x6a6485*/
  if ( v24 == *((_DWORD *)this + 5351) ) /*0x6a6490*/
    Tactical::UpdateUIVisibility((Tactical *)this); /*0x6a6494*/
  (*((void (__thiscall **)(SidebarClass *, int))this->SidebarClass_field_0x0 + 54))(this, 1); /*0x6a649f*/
  if ( v23 == -1 ) /*0x6a64aa*/
  {
    v14 = (int *)((char *)this + 5528); /*0x6a64b0*/
    while ( *v14 <= 0 ) /*0x6a64b9*/
    {
      ++v10; /*0x6a64bb*/
      v14 += 997; /*0x6a64bc*/
      if ( v10 >= 4 ) /*0x6a64c4*/
      {
        v10 = -1; /*0x6a64c6*/
        break; /*0x6a64c6*/
      }
    }
    v15 = *((_DWORD *)this + 5351); /*0x6a64c9*/
    if ( v10 != v15 ) /*0x6a64d1*/
    {
      GadgetClass::Hide((GadgetClass *)(&stru_B07C48 + 8 * v15)); /*0x6a64e3*/
      v16 = 0; /*0x6a64f5*/
      v17 = &this->__pad_CD2[3988 * *((_DWORD *)this + 5351) + 2162]; /*0x6a64fd*/
      *((_BYTE *)this + 3988 * *((_DWORD *)this + 5351) + 5472) = 0; /*0x6a6504*/
      do /*0x6a652f*/
      {
        Tactical::SelectObject( /*0x6a6526*/
          (GScreenClass *)&stru_87F5F0.__pad_58[416],
          56 * (v16 + 60 * *((_DWORD *)v17 + 14)) + 11566720);
        ++v16; /*0x6a652b*/
      }
      while ( v16 < 60 ); /*0x6a652f*/
      *((_DWORD *)this + 5351) = v10; /*0x6a6534*/
      GadgetClass::Show((GadgetClass *)(&stru_B07C48 + 8 * v10)); /*0x6a6543*/
      v18 = &this->__pad_CD2[3988 * *((_DWORD *)this + 5351) + 2162]; /*0x6a6560*/
      *((_BYTE *)this + 3988 * *((_DWORD *)this + 5351) + 5472) = 1; /*0x6a6567*/
      v19 = UI_Add_6AC430(v22); /*0x6a6570*/
      for ( i = 0; i < v19; ++i ) /*0x6a6576*/
      {
        Hash::Reset((LinkClass *)(56 * (i + 60 * *((_DWORD *)v18 + 14)) + 11566720)); /*0x6a6590*/
        Hash::InsertOrdered( /*0x6a65b3*/
          (GScreenClass *)&stru_87F5F0.__pad_58[416],
          56 * (i + 60 * *((_DWORD *)v18 + 14)) + 11566720);
      }
      g_CameoRenderFlag = 1; /*0x6a65bf*/
      Tactical::UpdateUIVisibility((Tactical *)this); /*0x6a65c6*/
      v13 = v24; /*0x6a65cb*/
      *((_BYTE *)this + 21415) = 1; /*0x6a65cf*/
    }
  }
  SidebarClass_field_0x0 = (int (__thiscall **)(SidebarClass *, _DWORD))this->SidebarClass_field_0x0; /*0x6a65d6*/
  *((_BYTE *)this + 21414) = 1; /*0x6a65dc*/
  result = SidebarClass_field_0x0[14](this, 0); /*0x6a65e3*/
  if ( v13 == *((_DWORD *)this + 5351) ) /*0x6a65ec*/
    g_TooltipActive = 1; /*0x6a65ee*/
  LOBYTE(result) = 1; /*0x6a65f8*/
  return result; /*0x6a65f5*/
}



// ==== 0x006A6610  Tactical::UpdateUIVisibility  this=Tactical  sig=csp ====
int __thiscall Tactical::UpdateUIVisibility(Tactical *this)
{
  int v1; // eax
  int result; // eax
  int v3; // eax

  if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a661d*/
  {
    v3 = 26; /*0x6a66f8*/
    if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a66f0*/
      v3 = 18; /*0x6a66ff*/
    if ( 4 * dword_884CF8 > 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v3 + g_DSurface_SidebarBounds - 7) / 50) ) /*0x6a6743*/
    {
      if ( !(unsigned __int8)DialogControl::IsHidden((DialogControl *)&stru_B0B328) ) /*0x6a6745*/
        DialogControl::Hide((GadgetClass *)&stru_B0B328); /*0x6a6753*/
      result = DialogControl::IsHidden((DialogControl *)&g_SidebarFlag); /*0x6a675d*/
      if ( !(_BYTE)result ) /*0x6a6764*/
        return DialogControl::Hide((GadgetClass *)&g_SidebarFlag); /*0x6a6764*/
      return result; /*0x6a6764*/
    }
    if ( (unsigned __int8)DialogControl::IsHidden((DialogControl *)&stru_B0B328) ) /*0x6a6770*/
      DialogControl::Show((GadgetClass *)&stru_B0B328); /*0x6a677e*/
    result = DialogControl::IsHidden((DialogControl *)&g_SidebarFlag); /*0x6a6788*/
    if ( !(_BYTE)result ) /*0x6a678f*/
      return result; /*0x6a678f*/
    return DialogControl::Show((GadgetClass *)&g_SidebarFlag); /*0x6a6796*/
  }
  v1 = 26; /*0x6a6631*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a6629*/
    v1 = 18; /*0x6a6638*/
  if ( *((_DWORD *)this + 997 * *((_DWORD *)this + 5351) + 1382) <= 2 /*0x6a668a*/
                                                                  * ((g_DSurface_ViewBounds
                                                                    - g_SidebarBounds
                                                                    - v1
                                                                    + g_DSurface_SidebarBounds
                                                                    - 7)
                                                                   / 50) )
  {
    if ( (unsigned __int8)DialogControl::IsHidden((DialogControl *)&stru_B0B328) ) /*0x6a66bb*/
      DialogControl::Show((GadgetClass *)&stru_B0B328); /*0x6a66c9*/
    result = DialogControl::IsHidden((DialogControl *)&g_SidebarFlag); /*0x6a66d3*/
    if ( !(_BYTE)result ) /*0x6a66da*/
      return result; /*0x6a66da*/
    return DialogControl::Show((GadgetClass *)&g_SidebarFlag); /*0x6a66da*/
  }
  if ( !(unsigned __int8)DialogControl::IsHidden((DialogControl *)&stru_B0B328) ) /*0x6a668c*/
    DialogControl::Hide((GadgetClass *)&stru_B0B328); /*0x6a669a*/
  result = DialogControl::IsHidden((DialogControl *)&g_SidebarFlag); /*0x6a66a4*/
  if ( !(_BYTE)result ) /*0x6a66ab*/
    return DialogControl::Hide((GadgetClass *)&g_SidebarFlag); /*0x6a66b1*/
  return result; /*0x6a679b*/
}



// ==== 0x006A6A00  CreateTeamCommand::performAction_245  this=CreateTeamCommand  sig=csp ====
char __thiscall CreateTeamCommand::performAction_245(CreateTeamCommand *this, char a2, int a3)
{
  int v3; // eax
  CreateTeamCommand *v4; // esi
  int v6; // eax
  int v7; // eax

  if ( !*(_DWORD *)&stru_A8EB00.?[424] ) /*0x6a6a09*/
  {
    v3 = a3; /*0x6a6a0f*/
    if ( a3 == -1 ) /*0x6a6a16*/
      v3 = *((_DWORD *)this + 5351); /*0x6a6a18*/
    v4 = (CreateTeamCommand *)((char *)this + 3988 * v3 + 5444); /*0x6a6a2b*/
    if ( a2 ) /*0x6a6a38*/
    {
      if ( *((_DWORD *)this + 997 * v3 + 1378) ) /*0x6a6a3a*/
      {
        --*((_DWORD *)this + 997 * v3 + 1379); /*0x6a6a4b*/
        (*(void (__thiscall **)(CreateTeamCommand *, _DWORD))(*(_DWORD *)this->__pad_0 + 56))(this, 0); /*0x6a6a50*/
        return 1; /*0x6a6a57*/
      }
      return 0; /*0x6a6a3f*/
    }
    v6 = 26; /*0x6a6a68*/
    if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a6a60*/
      v6 = 18; /*0x6a6a6f*/
    v7 = (g_DSurface_ViewBounds - g_SidebarBounds - v6 + g_DSurface_SidebarBounds - 7) / 50; /*0x6a6aa4*/
    if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a6aae*/
    {
      if ( *(_DWORD *)&v4->__pad_14[48] + v7 / 2 < dword_884CF8 ) /*0x6a6ac2*/
        goto LABEL_13; /*0x6a6ac2*/
    }
    else if ( 2 * (v7 + *(_DWORD *)&v4->__pad_14[48]) < *(_DWORD *)&v4->__pad_14[64] ) /*0x6a6ad2*/
    {
LABEL_13:
      ++*(_DWORD *)&v4->__pad_14[52]; /*0x6a6ad4*/
      (*(void (__thiscall **)(CreateTeamCommand *, _DWORD))(*(_DWORD *)this->__pad_0 + 56))(this, 0); /*0x6a6adf*/
      return 1; /*0x6a6ae6*/
    }
  }
  return 0; /*0x6a6a53*/
}



// ==== 0x006A6AF0  ObjectClass::method_6A6AF0  this=ObjectClass  sig=csp ====
char __thiscall sub_6A6AF0(ObjectClass *this, char a2, int a3)
{
  int v3; // eax
  char *v4; // ecx
  int v5; // eax
  void *NeedsSaveOrLink; // ecx
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // esi
  int v12; // [esp+0h] [ebp-8h]
  _DWORD *v14; // [esp+10h] [ebp+8h]

  v3 = a3; /*0x6a6af3*/
  if ( a3 == -1 ) /*0x6a6afe*/
    v3 = *((_DWORD *)this + 5351); /*0x6a6b00*/
  v4 = (char *)this + 3988 * v3 + 5444; /*0x6a6b19*/
  v5 = 26; /*0x6a6b20*/
  v14 = v4; /*0x6a6b25*/
  NeedsSaveOrLink = dword_A8B230[374].NeedsSaveOrLink; /*0x6a6b29*/
  if ( NeedsSaveOrLink ) /*0x6a6b31*/
    v5 = 18; /*0x6a6b33*/
  v12 = (g_DSurface_ViewBounds - g_SidebarBounds - v5 + g_DSurface_SidebarBounds - 7) / 50; /*0x6a6b77*/
  if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a6b7b*/
    v12 = 1; /*0x6a6b7d*/
  if ( !a2 ) /*0x6a6b8b*/
  {
    v9 = 26; /*0x6a6ba9*/
    if ( NeedsSaveOrLink ) /*0x6a6bae*/
      v9 = 18; /*0x6a6bb0*/
    v10 = g_DSurface_ViewBounds - g_SidebarBounds - v9; /*0x6a6bb5*/
    if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a6bd0*/
    {
      v7 = v14; /*0x6a6bdd*/
      if ( v14[17] + (v10 + g_DSurface_SidebarBounds - 7) / 50 / 2 >= dword_884CF8 ) /*0x6a6be8*/
        return 0; /*0x6a6be8*/
    }
    else
    {
      if ( 2 * ((v10 + g_DSurface_SidebarBounds - 7) / 50 + v14[17]) >= v14[21] ) /*0x6a6bfc*/
        return 0; /*0x6a6bfc*/
      v7 = v14; /*0x6a6bfe*/
    }
    v8 = v12 + v7[18]; /*0x6a6c07*/
    goto LABEL_18; /*0x6a6c07*/
  }
  v7 = v14; /*0x6a6b8d*/
  if ( v14[17] ) /*0x6a6b91*/
  {
    v8 = v14[18] - v12; /*0x6a6ba3*/
LABEL_18:
    v7[18] = v8; /*0x6a6c09*/
    (*((void (__thiscall **)(ObjectClass *, _DWORD))this->AbstractClass + 14))(this, 0); /*0x6a6c14*/
    return 1; /*0x6a6c20*/
  }
  return 0; /*0x6a6c1d*/
}



// ==== 0x006A6C30  SidebarClass::Redraw  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::Redraw(SidebarClass *this, char a2)
{
  SidebarClass *v2; // edi
  int v3; // esi
  int v4; // esi
  void *v5; // ebp
  int i; // edi
  int v7; // eax
  ShapeButtonClass *v8; // esi
  char v9; // al
  char v10; // dl
  _BYTE *v11; // eax
  char v12; // al
  unsigned int v14; // [esp-34h] [ebp-64h]
  unsigned int v15; // [esp-34h] [ebp-64h]
  unsigned int v16; // [esp-34h] [ebp-64h]
  unsigned __int8 v17; // [esp+Ch] [ebp-24h]
  AudioStream *v19; // [esp+14h] [ebp-1Ch]
  int v20; // [esp+18h] [ebp-18h] BYREF
  int v21; // [esp+1Ch] [ebp-14h]
  int v22[4]; // [esp+20h] [ebp-10h] BYREF
  char v23; // [esp+34h] [ebp+4h]

  v2 = this; /*0x6a6c3b*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1522] = dword_B07DC8; /*0x6a6c49*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1526] = dword_B07DCC; /*0x6a6c53*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1530] = dword_B07DD0; /*0x6a6c5f*/
  v19 = g_DSurface_Hidden_2; /*0x6a6c65*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1534] = dword_B07DD4; /*0x6a6c6f*/
  g_DSurface_Hidden_2 = (AudioStream *)DSurface_Sidebar; /*0x6a6c74*/
  v17 = 0; /*0x6a6c82*/
  v3 = (*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 32))(DSurface_Sidebar); /*0x6a6c92*/
  v22[2] = (*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 31))(DSurface_Sidebar); /*0x6a6c99*/
  v22[0] = 0; /*0x6a6ca3*/
  v22[1] = 0; /*0x6a6ca7*/
  v22[3] = v3; /*0x6a6cab*/
  if ( a2 || v2[3].__pad_CD2[1788] || (v23 = 0, v2[3].__pad_CD2[1789]) ) /*0x6a6cb9*/
    v23 = 1; /*0x6a6cc7*/
  if ( v2[3].__pad_CD2[1787] && v23 && !stru_A8EB00.?[391] ) /*0x6a6ce8*/
  {
    if ( v2[3].__pad_CD2[1789] ) /*0x6a6cee*/
    {
      v21 = g_DSurface_SidebarBounds; /*0x6a6d1f*/
      v17 = 1; /*0x6a6d39*/
      v20 = 0; /*0x6a6d3e*/
      DrawToSurfaceSHP( /*0x6a6d42*/
        (int)DSurface_Sidebar,
        *(int *)&stru_87F5F0.__pad_58[132],
        (int)dword_B0B468,
        0,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v4 = g_SidebarBounds; /*0x6a6d47*/
      v5 = dword_B0B46C; /*0x6a6d4d*/
      for ( i = 0; ; ++i ) /*0x6a6d53*/
      {
        v7 = 26; /*0x6a6d63*/
        if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a6d5b*/
          v7 = 18; /*0x6a6d6a*/
        if ( i >= (g_DSurface_ViewBounds - g_SidebarBounds - v7 + g_DSurface_SidebarBounds - 7) / 50 ) /*0x6a6d9c*/
          break; /*0x6a6d9c*/
        v20 = 0; /*0x6a6dcc*/
        v21 = v4; /*0x6a6dd0*/
        DrawToSurfaceSHP( /*0x6a6dd4*/
          (int)DSurface_Sidebar,
          *(int *)&stru_87F5F0.__pad_58[132],
          (int)v5,
          0,
          &v20,
          v22,
          1024,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
        v5 = dword_B0B46C; /*0x6a6dd9*/
        v4 += *((__int16 *)dword_B0B46C + 2); /*0x6a6de3*/
      }
      v20 = 0; /*0x6a6e1c*/
      v21 = v4; /*0x6a6e20*/
      DrawToSurfaceSHP( /*0x6a6e24*/
        (int)DSurface_Sidebar,
        *(int *)&stru_87F5F0.__pad_58[132],
        (int)dword_B0B470,
        0,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v21 = v4 + *((__int16 *)dword_B0B470 + 2); /*0x6a6e48*/
      v20 = 0; /*0x6a6e6b*/
      DrawToSurfaceSHP( /*0x6a6e6f*/
        (int)DSurface_Sidebar,
        *(int *)&stru_87F5F0.__pad_58[132],
        (int)dword_B0B474,
        0,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v2 = this; /*0x6a6e74*/
    }
    ShapeButton::Draw(&stru_B07DF8, v17); /*0x6a6e88*/
    ShapeButton::Draw(&stru_B0B3A0, v17); /*0x6a6e93*/
    v8 = &stru_B07C48; /*0x6a6e98*/
    do /*0x6a6eaf*/
    {
      ShapeButton::Draw(v8, 1); /*0x6a6ea1*/
      v8 += 8; /*0x6a6ea6*/
    }
    while ( (int)v8 < (int)&dword_B07DC8 ); /*0x6a6eaf*/
    ShapeButton::Draw(&stru_B0B328, v17); /*0x6a6eb7*/
    ShapeButton::Draw(&g_SidebarFlag, v17); /*0x6a6ec2*/
    if ( *(_DWORD *)&v2[3].__pad_CD2[1774] ) /*0x6a6ec7*/
    {
      v21 = g_SidebarBounds; /*0x6a6eef*/
      v14 = *(_DWORD *)&v2[3].__pad_CD2[1770]; /*0x6a6f0a*/
      v20 = 0; /*0x6a6f18*/
      DrawToSurfaceSHP( /*0x6a6f1c*/
        (int)DSurface_Sidebar,
        *(int *)&stru_87F5F0.__pad_58[132],
        (int)dword_B0B478,
        v14,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v21 = g_SidebarBounds; /*0x6a6f3a*/
      v15 = *(_DWORD *)&v2[3].__pad_CD2[1770]; /*0x6a6f55*/
      v20 = 0; /*0x6a6f63*/
      DrawToSurfaceSHP( /*0x6a6f67*/
        (int)DSurface_Sidebar,
        *(int *)&stru_87F5F0.__pad_58[132],
        (int)dword_B0B47C,
        v15,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v21 = g_SidebarBounds; /*0x6a6f85*/
      v16 = *(_DWORD *)&v2[3].__pad_CD2[1770]; /*0x6a6fa0*/
      v20 = 0; /*0x6a6fae*/
      DrawToSurfaceSHP( /*0x6a6fb2*/
        (int)DSurface_Sidebar,
        *(int *)&stru_87F5F0.__pad_58[132],
        (int)dword_B0B480,
        v16,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
    }
    g_TooltipActive = 1; /*0x6a6fb7*/
  }
  Sidebar::UpdateProductionDisplay( /*0x6a6fdf*/
    (int)&v2->__pad_CD2[3988 * *(_DWORD *)&v2[3].__pad_CD2[1778] + 2162],
    (wchar_t)v2,
    v2[3].__pad_CD2[1789]);
  v9 = v23 || v17; /*0x6a6ff4*/
  Sidebar::Render((PowerClass *)v2, v9); /*0x6a6ffc*/
  if ( byte_B07E4C ) /*0x6a7007*/
  {
    v10 = 1; /*0x6a7009*/
    byte_B07E4C = 0; /*0x6a700b*/
    g_TooltipActive = 1; /*0x6a7011*/
  }
  else
  {
    v10 = g_TooltipActive; /*0x6a7019*/
  }
  if ( byte_B0B3F4 ) /*0x6a7025*/
  {
    v10 = 1; /*0x6a7027*/
    byte_B0B3F4 = 0; /*0x6a7029*/
    g_TooltipActive = 1; /*0x6a702f*/
  }
  v11 = &unk_B07C9C; /*0x6a7035*/
  do /*0x6a704a*/
  {
    if ( *v11 ) /*0x6a703a*/
    {
      v10 = 1; /*0x6a703e*/
      *v11 = 0; /*0x6a7040*/
    }
    v11 += 96; /*0x6a7042*/
  }
  while ( (int)v11 < (int)&dword_B07E1C ); /*0x6a704a*/
  g_TooltipActive = v10; /*0x6a7051*/
  if ( byte_B0B37C ) /*0x6a7059*/
  {
    v10 = 1; /*0x6a705b*/
    byte_B0B37C = 0; /*0x6a705d*/
    g_TooltipActive = 1; /*0x6a7063*/
  }
  if ( byte_B0B45C ) /*0x6a706f*/
  {
    v10 = 1; /*0x6a7071*/
    byte_B0B45C = 0; /*0x6a7073*/
    g_TooltipActive = 1; /*0x6a7079*/
  }
  if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x6a7087*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_88732C.__pad_1C[32] + 12))( /*0x6a708d*/
      *(_DWORD *)&stru_88732C.__pad_1C[32],
      1);
    v10 = g_TooltipActive; /*0x6a7090*/
  }
  v12 = v10 || v2[3].__pad_CD2[1789]; /*0x6a70a6*/
  Sidebar::FlushSidebarTooltip((Sidebar *)v2, v12); /*0x6a70ae*/
  v2[3].__pad_CD2[1788] = 0; /*0x6a70b7*/
  v2[3].__pad_CD2[1789] = 0; /*0x6a70bd*/
  g_DSurface_Hidden_2 = v19; /*0x6a70c5*/
  return (int)v19->__pad_0; /*0x6a70c3*/
}



// ==== 0x006A70E0  Sidebar::FlushSidebarTooltip  this=Sidebar  sig=csp ====
void __thiscall Sidebar::FlushSidebarTooltip(Sidebar *this, char a2)
{
  int v3; // esi
  int v4; // ebp
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // esi
  struct tagPOINT Point; // [esp+1Ch] [ebp-38h] BYREF
  int v10; // [esp+24h] [ebp-30h] BYREF
  LONG y; // [esp+28h] [ebp-2Ch]
  int v12; // [esp+2Ch] [ebp-28h]
  int v13; // [esp+30h] [ebp-24h]
  int v14; // [esp+34h] [ebp-20h] BYREF
  LONG v15; // [esp+38h] [ebp-1Ch]
  int v16; // [esp+3Ch] [ebp-18h]
  int v17; // [esp+40h] [ebp-14h]
  struct tagRECT Rect; // [esp+44h] [ebp-10h] BYREF

  if ( !*((_BYTE *)this + 21413) || !byte_A8E9A0 || !stru_A8EB00.?[376] ) /*0x6a7109*/
    goto LABEL_25; /*0x6a7109*/
  GetClientRect(g_hWnd, &Rect); /*0x6a711b*/
  Point.x = Rect.left; /*0x6a7129*/
  Point.y = Rect.top; /*0x6a7137*/
  ClientToScreen(g_hWnd, &Point); /*0x6a713d*/
  if ( g_TooltipActive || a2 ) /*0x6a7153*/
  {
    g_TooltipActive = 1; /*0x6a723a*/
    goto LABEL_13; /*0x6a723a*/
  }
  g_TooltipActive = 0; /*0x6a7166*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1522] != dword_B07DC8
    || *(_DWORD *)&stru_87F5F0.__pad_E12[1526] != dword_B07DCC
    || *(_DWORD *)&stru_87F5F0.__pad_E12[1530] != dword_B07DD0
    || *(_DWORD *)&stru_87F5F0.__pad_E12[1534] != dword_B07DD4 )
  {
LABEL_13:
    (*(void (__thiscall **)(void *, DSurface *, int))(*(_DWORD *)stru_887598.lineTrailer + 60))( /*0x6a7241*/
      stru_887598.lineTrailer,
      DSurface_Sidebar,
      1);
    if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1522] == dword_B07DC8
      && *(_DWORD *)&stru_87F5F0.__pad_E12[1526] == dword_B07DCC
      && *(_DWORD *)&stru_87F5F0.__pad_E12[1530] == dword_B07DD0
      && *(_DWORD *)&stru_87F5F0.__pad_E12[1534] == dword_B07DD4
      && !a2 )
    {
      if ( *((_BYTE *)this + 21416) )
      {
        y = Point.y; /*0x6a72d1*/
        v10 = Point.x + (LOBYTE(stru_A8EB00.ObjectTypeClass[31]) != 0 ? *(_DWORD *)DSurface_ViewBounds.__pad_8 : 0);
        v14 = 0; /*0x6a72f3*/
        v15 = 0; /*0x6a72f7*/
        v16 = dword_886F98; /*0x6a72fb*/
        v17 = 16; /*0x6a72ff*/
        v12 = dword_886F98; /*0x6a7303*/
        v13 = 16; /*0x6a7307*/
        (*((void (__thiscall **)(DSurface *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x6a7312*/
         + 2))(
          g_DSurface_Primary,
          &v10,
          DSurface_Sidebar,
          &v14,
          0,
          1);
        *((_BYTE *)this + 21416) = 0; /*0x6a7315*/
      }
      v3 = dword_886F98; /*0x6a7332*/
      v17 = g_DSurface_ViewBounds; /*0x6a733e*/
      v14 = 0; /*0x6a7348*/
      v4 = g_DSurface_SidebarBounds + Point.y; /*0x6a734e*/
      v15 = g_DSurface_SidebarBounds; /*0x6a7357*/
      v16 = dword_886F98; /*0x6a735b*/
      v5 = (LOBYTE(stru_A8EB00.ObjectTypeClass[31]) != 0 ? *(_DWORD *)DSurface_ViewBounds.__pad_8 : 0) + Point.x;
      v6 = (*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 32))(DSurface_Sidebar); /*0x6a7363*/
      v10 = v5; /*0x6a7386*/
      y = v4; /*0x6a738a*/
      v12 = v3; /*0x6a738e*/
      v13 = v6 - g_DSurface_SidebarBounds; /*0x6a7392*/
      (*((void (__thiscall **)(DSurface *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x6a739d*/
       + 2))(
        g_DSurface_Primary,
        &v10,
        DSurface_Sidebar,
        &v14,
        0,
        1);
    }
    else if ( g_TooltipActive )
    {
      v7 = (*((int (__thiscall **)(DSurface *, int *))DSurface_Sidebar->DSurface_field_0x0 + 30))( /*0x6a73be*/
             DSurface_Sidebar,
             &v10);
      v14 = 0; /*0x6a73dd*/
      v15 = 0; /*0x6a73e5*/
      v16 = *(_DWORD *)(v7 + 8); /*0x6a73ec*/
      v8 = *(_DWORD *)(v7 + 12); /*0x6a73f0*/
      y = Point.y; /*0x6a73fd*/
      v10 = Point.x + (LOBYTE(stru_A8EB00.ObjectTypeClass[31]) != 0 ? *(_DWORD *)DSurface_ViewBounds.__pad_8 : 0);
      v17 = v8; /*0x6a741b*/
      v12 = v16; /*0x6a741f*/
      v13 = v8; /*0x6a7423*/
      (*((void (__thiscall **)(DSurface *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x6a742e*/
       + 2))(
        g_DSurface_Primary,
        &v10,
        DSurface_Sidebar,
        &v14,
        0,
        1);
    }
    else
    {
      v15 = Point.y + *(_DWORD *)&stru_87F5F0.__pad_E12[1526]; /*0x6a7458*/
      v14 = Point.x
          + *(_DWORD *)&stru_87F5F0.__pad_E12[1522]
          + (LOBYTE(stru_A8EB00.ObjectTypeClass[31]) != 0 ? *(_DWORD *)DSurface_ViewBounds.__pad_8 : 0);
      v16 = *(_DWORD *)&stru_87F5F0.__pad_E12[1530]; /*0x6a746f*/
      v17 = *(_DWORD *)&stru_87F5F0.__pad_E12[1534]; /*0x6a7473*/
      (*((void (__thiscall **)(DSurface *, int *, DSurface *, char *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x6a747e*/
       + 2))(
        g_DSurface_Primary,
        &v14,
        DSurface_Sidebar,
        &stru_87F5F0.__pad_E12[1522],
        0,
        1);
    }
    goto LABEL_24; /*0x6a73a0*/
  }
  if ( *((_BYTE *)this + 21416) )
  {
    (*(void (__thiscall **)(void *, DSurface *, int))(*(_DWORD *)stru_887598.lineTrailer + 60))( /*0x6a71c7*/
      stru_887598.lineTrailer,
      DSurface_Sidebar,
      1);
    v15 = Point.y; /*0x6a71eb*/
    v14 = Point.x + (LOBYTE(stru_A8EB00.ObjectTypeClass[31]) != 0 ? *(_DWORD *)DSurface_ViewBounds.__pad_8 : 0);
    v10 = 0; /*0x6a720d*/
    y = 0; /*0x6a7211*/
    v12 = dword_886F98; /*0x6a7215*/
    v13 = 16; /*0x6a7219*/
    v16 = dword_886F98; /*0x6a721d*/
    v17 = 16; /*0x6a7221*/
    (*((void (__thiscall **)(DSurface *, int *, DSurface *, int *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x6a722c*/
     + 2))(
      g_DSurface_Primary,
      &v14,
      DSurface_Sidebar,
      &v10,
      0,
      1);
    *((_BYTE *)this + 21416) = 0; /*0x6a722f*/
LABEL_24:
    byte_B0B519 = 1; /*0x6a7481*/
  }
LABEL_25:
  g_TooltipActive = 0; /*0x6a7488*/
}



// ==== 0x006A74A0  ObjectClass::method_6A74A0  this=Tactical  sig=csp ====
int __thiscall sub_6A74A0(Tactical *this, int a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ebp

  *((_DWORD *)this + 5351) = a2; /*0x6a74b6*/
  GadgetClass::Show((GadgetClass *)(&stru_B07C48 + 8 * a2)); /*0x6a74bc*/
  v3 = (_DWORD *)((char *)this + 3988 * *((_DWORD *)this + 5351) + 5444); /*0x6a74d4*/
  *((_BYTE *)this + 3988 * *((_DWORD *)this + 5351) + 5472) = 1; /*0x6a74db*/
  v4 = 26; /*0x6a74ed*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a74e5*/
    v4 = 18; /*0x6a74f4*/
  v5 = 0; /*0x6a7507*/
  v6 = 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v4 + g_DSurface_SidebarBounds - 7) / 50); /*0x6a7527*/
  if ( v6 > 0 ) /*0x6a752b*/
  {
    do /*0x6a7570*/
    {
      Hash::Reset((LinkClass *)(56 * (v5 + 60 * v3[14]) + 11566720)); /*0x6a7545*/
      Hash::InsertOrdered((GScreenClass *)&stru_87F5F0.__pad_58[416], 56 * (v5 + 60 * v3[14]) + 11566720); /*0x6a7568*/
      ++v5; /*0x6a756d*/
    }
    while ( v5 < v6 ); /*0x6a7570*/
  }
  g_CameoRenderFlag = 1; /*0x6a7574*/
  return Tactical::UpdateUIVisibility(this); /*0x6a7580*/
}



// ==== 0x006A7590  SidebarClass::SwitchTab  this=Tactical  sig=csp ====
int __thiscall SidebarClass::SwitchTab(int this, int a2)
{
  int result; // eax
  int v4; // esi
  int v5; // edi
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // ebx

  result = *(_DWORD *)(this + 21404); /*0x6a7598*/
  if ( a2 != result ) /*0x6a75a0*/
  {
    GadgetClass::Hide((GadgetClass *)(&stru_B07C48 + 8 * result)); /*0x6a75b4*/
    v4 = 0; /*0x6a75c6*/
    v5 = this + 3988 * *(_DWORD *)(this + 21404) + 5444; /*0x6a75ce*/
    *(_BYTE *)(this + 3988 * *(_DWORD *)(this + 21404) + 5472) = 0; /*0x6a75d5*/
    do /*0x6a7600*/
    {
      Tactical::SelectObject( /*0x6a75f7*/
        (GScreenClass *)&stru_87F5F0.__pad_58[416],
        56 * (v4 + 60 * *(_DWORD *)(v5 + 56)) + 11566720);
      ++v4; /*0x6a75fc*/
    }
    while ( v4 < 60 ); /*0x6a7600*/
    *(_DWORD *)(this + 21404) = a2; /*0x6a7605*/
    GadgetClass::Show((GadgetClass *)(&stru_B07C48 + 8 * a2)); /*0x6a7614*/
    v6 = this + 3988 * *(_DWORD *)(this + 21404) + 5444; /*0x6a762c*/
    *(_BYTE *)(this + 3988 * *(_DWORD *)(this + 21404) + 5472) = 1; /*0x6a7633*/
    v7 = 26; /*0x6a7645*/
    if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a763d*/
      v7 = 18; /*0x6a764c*/
    v8 = 0; /*0x6a765f*/
    v9 = 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v7 + g_DSurface_SidebarBounds - 7) / 50); /*0x6a767f*/
    if ( v9 > 0 ) /*0x6a7683*/
    {
      do /*0x6a76c8*/
      {
        Hash::Reset((LinkClass *)(56 * (v8 + 60 * *(_DWORD *)(v6 + 56)) + 11566720)); /*0x6a769d*/
        Hash::InsertOrdered( /*0x6a76c0*/
          (GScreenClass *)&stru_87F5F0.__pad_58[416],
          56 * (v8 + 60 * *(_DWORD *)(v6 + 56)) + 11566720);
        ++v8; /*0x6a76c5*/
      }
      while ( v8 < v9 ); /*0x6a76c8*/
    }
    g_CameoRenderFlag = 1; /*0x6a76cc*/
    result = Tactical::UpdateUIVisibility((Tactical *)this); /*0x6a76d3*/
    *(_BYTE *)(this + 21415) = 1; /*0x6a76d9*/
  }
  return result; /*0x6a76e1*/
}



// ==== 0x006A7780  SidebarClass::UpdateStrips  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::UpdateStrips(SidebarClass *this, int *a2, _DWORD *a3)
{
  int v4; // ecx
  int *p_SidebarClass_field_0x1544; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  char v10; // cl
  char v11; // al
  int v12; // eax
  int v13; // ebp
  int v14; // eax
  int v15; // edi
  char *v16; // ebx
  char *v17; // ebp
  int v18; // eax
  int v19; // edi
  int v20; // ebx
  char v21; // bl
  SidebarClass *v22; // edi
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // edx
  char *v28; // eax
  int v29; // edx
  char *v30; // edi
  int v31; // eax
  int v32; // edx
  int v33; // [esp+14h] [ebp-10h]
  void *NeedsSaveOrLink; // [esp+18h] [ebp-Ch]
  _DWORD v35[2]; // [esp+1Ch] [ebp-8h] BYREF

  v4 = a3[1]; /*0x6a7795*/
  v35[0] = *a3 - DSurface_SidebarBounds; /*0x6a7798*/
  v35[1] = v4; /*0x6a77a4*/
  if ( !stru_A8EB00.?[391] ) /*0x6a77a8*/
  {
    (*((void (__thiscall **)(SidebarClass *, int))this->SidebarClass_field_0x0 + 54))(this, 1); /*0x6a77b0*/
    p_SidebarClass_field_0x1544 = &this->SidebarClass_field_0x1544; /*0x6a77b6*/
    v6 = 4; /*0x6a77bc*/
    do /*0x6a77d9*/
    {
      SidebarClass::UpdateCameos((char *)p_SidebarClass_field_0x1544, (int)a2, (int)v35); /*0x6a77cd*/
      p_SidebarClass_field_0x1544 += 997; /*0x6a77d2*/
      --v6; /*0x6a77d8*/
    }
    while ( v6 ); /*0x6a77d9*/
  }
  if ( *((_BYTE *)this + 21413) ) /*0x6a77db*/
  {
    v7 = this->q14E6; /*0x6a77e9*/
    if ( v7 == 1 ) /*0x6a77f2*/
    {
      v8 = this->q14E5 + 1; /*0x6a77fa*/
      this->q14E5 = v8; /*0x6a77fb*/
      if ( v8 <= *((__int16 *)dword_B0B478 + 3) ) /*0x6a780f*/
        goto LABEL_11; /*0x6a780f*/
    }
    else
    {
      if ( v7 != -1 ) /*0x6a7816*/
        goto LABEL_11; /*0x6a7816*/
      v9 = this->q14E5 - 1; /*0x6a781e*/
      this->q14E5 = v9; /*0x6a781f*/
      if ( v9 >= 0 ) /*0x6a7825*/
        goto LABEL_11; /*0x6a7825*/
    }
    this->q14E6 = 0; /*0x6a7829*/
    this->q14E5 = 0; /*0x6a782f*/
LABEL_11:
    v10 = *((_BYTE *)this + 21780); /*0x6a7835*/
    *((_BYTE *)this + 21780) = *(_DWORD *)&dword_A83D4C[1].__pad_38[24] > 0; /*0x6a7866*/
    if ( v10 != *((_BYTE *)this + 21780) ) /*0x6a7873*/
    {
      (*((void (__thiscall **)(SidebarClass *, _DWORD))this->SidebarClass_field_0x0 + 14))(this, 0); /*0x6a787b*/
      v11 = *((_BYTE *)this + 21780); /*0x6a787e*/
      *((_BYTE *)this + 21414) = 1; /*0x6a7884*/
      if ( !v11 ) /*0x6a788d*/
        (*((void (__thiscall **)(SidebarClass *, _DWORD, _DWORD))this->SidebarClass_field_0x0 + 18))(this, 0, 0); /*0x6a7897*/
    }
    v12 = *a2; /*0x6a789f*/
    if ( *a2 == 32870 ) /*0x6a78a6*/
    {
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 392), 0x2000, 1.0, 0); /*0x6a78bf*/
      BuildingClass::TogglePower((BuildingClass *)this, -1); /*0x6a78c8*/
      goto LABEL_32; /*0x6a78cd*/
    }
    if ( v12 == 32869 ) /*0x6a78d7*/
    {
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 392), 0x2000, 1.0, 0); /*0x6a78f1*/
      BuildingClass::TogglePower2((BuildingClass *)this, -1); /*0x6a78fa*/
      goto LABEL_32; /*0x6a78ff*/
    }
    if ( v12 >= 32971 && v12 < 32975 ) /*0x6a7914*/
    {
      v13 = v12 - 32971; /*0x6a791a*/
      v14 = *((_DWORD *)this + 5351); /*0x6a7920*/
      if ( v13 != v14 ) /*0x6a7928*/
      {
        GadgetClass::Hide((GadgetClass *)(&stru_B07C48 + 8 * v14)); /*0x6a793a*/
        v15 = 0; /*0x6a794c*/
        v16 = &this->__pad_CD2[3988 * *((_DWORD *)this + 5351) + 2162]; /*0x6a7954*/
        *((_BYTE *)this + 3988 * *((_DWORD *)this + 5351) + 5472) = 0; /*0x6a795b*/
        do /*0x6a7986*/
        {
          Tactical::SelectObject( /*0x6a797d*/
            (GScreenClass *)&stru_87F5F0.__pad_58[416],
            56 * (v15 + 60 * *((_DWORD *)v16 + 14)) + 11566720);
          ++v15; /*0x6a7982*/
        }
        while ( v15 < 60 ); /*0x6a7986*/
        *((_DWORD *)this + 5351) = v13; /*0x6a798c*/
        GadgetClass::Show((GadgetClass *)(&stru_B07C48 + 8 * v13)); /*0x6a799b*/
        v17 = &this->__pad_CD2[3988 * *((_DWORD *)this + 5351) + 2162]; /*0x6a79b3*/
        *((_BYTE *)this + 3988 * *((_DWORD *)this + 5351) + 5472) = 1; /*0x6a79ba*/
        v18 = 26; /*0x6a79cc*/
        if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a79c4*/
          v18 = 18; /*0x6a79d3*/
        v19 = 0; /*0x6a79ed*/
        v20 = 2 * ((g_DSurface_ViewBounds - v18 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50); /*0x6a7a06*/
        if ( v20 > 0 ) /*0x6a7a0a*/
        {
          do /*0x6a7a4f*/
          {
            Hash::Reset((LinkClass *)(56 * (v19 + 60 * *((_DWORD *)v17 + 14)) + 11566720)); /*0x6a7a24*/
            Hash::InsertOrdered( /*0x6a7a47*/
              (GScreenClass *)&stru_87F5F0.__pad_58[416],
              56 * (v19 + 60 * *((_DWORD *)v17 + 14)) + 11566720);
            ++v19; /*0x6a7a4c*/
          }
          while ( v19 < v20 ); /*0x6a7a4f*/
        }
        g_CameoRenderFlag = 1; /*0x6a7a53*/
        Tactical::UpdateUIVisibility((Tactical *)this); /*0x6a7a5a*/
        *((_BYTE *)this + 21415) = 1; /*0x6a7a5f*/
      }
      goto LABEL_31; /*0x6a7a5f*/
    }
    v24 = dword_B0B34C; /*0x6a7b18*/
    BYTE1(v12) &= ~0x40u; /*0x6a7b1e*/
    BYTE1(v24) = BYTE1(dword_B0B34C) | 0x80; /*0x6a7b21*/
    if ( v12 == v24 ) /*0x6a7b26*/
    {
      byte_B0B354 = 0; /*0x6a7b2c*/
      NeedsSaveOrLink = dword_A8B230[374].NeedsSaveOrLink; /*0x6a7b5d*/
      v25 = 26; /*0x6a7b63*/
      if ( NeedsSaveOrLink ) /*0x6a7b68*/
        v25 = 18; /*0x6a7b6a*/
      v33 = (g_DSurface_ViewBounds - v25 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50; /*0x6a7ba9*/
      if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a7bad*/
        v33 = 1; /*0x6a7baf*/
      v26 = 26; /*0x6a7bbd*/
      if ( NeedsSaveOrLink ) /*0x6a7bc2*/
        v26 = 18; /*0x6a7bc4*/
      v27 = (g_DSurface_ViewBounds - v26 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50; /*0x6a7be5*/
      if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a7be9*/
      {
        v28 = &this->__pad_CD2[3988 * *((_DWORD *)this + 5351) + 2162]; /*0x6a7bf8*/
        if ( *((_DWORD *)this + 997 * *((_DWORD *)this + 5351) + 1378) + v27 / 2 < dword_884CF8 ) /*0x6a7c03*/
          goto LABEL_56; /*0x6a7c03*/
      }
      else
      {
        v28 = &this->__pad_CD2[3988 * *((_DWORD *)this + 5351) + 2162]; /*0x6a7c07*/
        if ( 2 * (v27 + *((_DWORD *)v28 + 17)) < *((_DWORD *)v28 + 21) ) /*0x6a7c17*/
        {
LABEL_56:
          *((_DWORD *)v28 + 18) += v33; /*0x6a7c19*/
          PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 400), 0x2000, 1.0, 0); /*0x6a7c3d*/
          goto LABEL_32; /*0x6a7c3d*/
        }
      }
    }
    else
    {
      v29 = dword_B0B42C; /*0x6a7c5e*/
      BYTE1(v29) = BYTE1(dword_B0B42C) | 0x80; /*0x6a7c64*/
      if ( v12 != v29 ) /*0x6a7c69*/
        goto LABEL_32; /*0x6a7c69*/
      byte_B0B434 = 0; /*0x6a7c6f*/
      v31 = 26; /*0x6a7c9e*/
      if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a7c96*/
        v31 = 18; /*0x6a7ca5*/
      v32 = (g_DSurface_ViewBounds - v31 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50; /*0x6a7cd7*/
      if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a7ce1*/
        v32 = 1; /*0x6a7ce3*/
      if ( *((_DWORD *)this + 997 * *((_DWORD *)this + 5351) + 1378) ) /*0x6a7ce8*/
      {
        v30 = &this->__pad_CD2[3988 * *((_DWORD *)this + 5351) + 2162]; /*0x6a7c8f*/
        *((_DWORD *)v30 + 18) -= v32; /*0x6a7cef*/
LABEL_31:
        PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 400), 0x2000, 1.0, 0); /*0x6a7a66*/
        goto LABEL_32; /*0x6a7a7d*/
      }
    }
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1792), 0x2000, 1.0, 0); /*0x6a7d0f*/
LABEL_32:
    v21 = 0; /*0x6a7a82*/
    v22 = (SidebarClass *)&stru_B07C48; /*0x6a7a84*/
    do /*0x6a7aa0*/
    {
      if ( SidebarClass::updateFlashTimer(v22) ) /*0x6a7a8c*/
        v21 = 1; /*0x6a7a95*/
      v22 = (SidebarClass *)((char *)v22 + 96); /*0x6a7a97*/
    }
    while ( (int)v22 < (int)&dword_B07DC8 ); /*0x6a7aa0*/
    if ( v21 ) /*0x6a7aa4*/
    {
      *((_BYTE *)this + 21414) = 1; /*0x6a7aa6*/
      g_TooltipActive = 1; /*0x6a7aad*/
      g_CameoRenderFlag = 1; /*0x6a7ab4*/
      (*((void (__thiscall **)(SidebarClass *, _DWORD))this->SidebarClass_field_0x0 + 14))(this, 0); /*0x6a7ac1*/
    }
  }
  if ( !this->__pad_CD2[1247] && byte_B07E25 ) /*0x6a7ad5*/
    GadgetClass::Hide((GadgetClass *)&stru_B07DF8); /*0x6a7adc*/
  if ( !this->__pad_CD2[1246] && byte_B0B3CD ) /*0x6a7af2*/
    GadgetClass::Hide((GadgetClass *)&stru_B0B3A0); /*0x6a7af9*/
  return PowerClass::updatePowerBarAnimation((PowerClass *)this, a2, a3); /*0x6a7b0f*/
}



// ==== 0x006A7D20  HouseClass::UpdateAllProductionTabs  this=HouseClass  sig=csp ====
char __thiscall sub_6A7D20(char *this)
{
  char v2; // bl
  int v3; // esi
  _BYTE *v4; // edi
  char result; // al
  int v6; // eax

  v2 = 0; /*0x6a7d26*/
  v3 = 0; /*0x6a7d28*/
  v4 = this + 5504; /*0x6a7d2a*/
  do /*0x6a7d53*/
  {
    result = SidebarClass::UpdateProduction((int)(v4 - 60)); /*0x6a7d33*/
    if ( result && v3 == this->q14E7 ) /*0x6a7d42*/
    {
      *v4 = 1; /*0x6a7d44*/
      v2 = 1; /*0x6a7d47*/
    }
    ++v3; /*0x6a7d49*/
    v4 += 3988; /*0x6a7d4a*/
  }
  while ( v3 < 4 ); /*0x6a7d53*/
  if ( v2 ) /*0x6a7d57*/
  {
    v6 = *(_DWORD *)this; /*0x6a7d59*/
    this->q53A6 = 1; /*0x6a7d60*/
    return (*(int (__thiscall **)(char *, _DWORD))(v6 + 56))(this, 0); /*0x6a7d67*/
  }
  return result; /*0x6a7d6a*/
}



// ==== 0x006A7D70  SidebarClass::ToggleSidebarDisplay  this=SidebarClass  sig=csp ====
char __userpurge ObjectClass::ToggleSidebarDisplay@<al>(
        SidebarClass *this,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5,
        char a6)
{
  int v6; // ecx
  int v7; // esi
  char result; // al
  char v9; // cl
  char v10; // bl
  ShapeButtonClass *v11; // edi
  GadgetClass *v12; // edi
  int *v13; // ebx
  int v14; // ebp
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  ShapeButtonClass *v18; // edi
  int v19; // edi
  int v20; // ebp
  int v21; // [esp+0h] [ebp-10h]

  v7 = v6; /*0x6a7d71*/
  result = *(_BYTE *)(v6 + 21413); /*0x6a7d79*/
  if ( (dword_A8D5F8 & 2) != 0 && *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 ) /*0x6a7d91*/
    return result; /*0x6a7d91*/
  if ( this == (SidebarClass *)-1 ) /*0x6a7d9e*/
    *(_BYTE *)(v6 + 21413) = result == 0; /*0x6a7db3*/
  else
    *(_BYTE *)(v6 + 21413) = this == (SidebarClass *)1; /*0x6a7da6*/
  v9 = *(_BYTE *)(v6 + 21413); /*0x6a7db9*/
  v10 = v9 != result; /*0x6a7dc2*/
  if ( v9 == result ) /*0x6a7dcb*/
    return v10; /*0x6a8078*/
  ObjectClass::resetObjectState((ObjectClass *)v7, v9); /*0x6a7dd6*/
  if ( !*(_BYTE *)(v7 + 21413) ) /*0x6a7de3*/
  {
    AsyncIO::Shutdown((AsyncIO *)a4); /*0x6a7fc3*/
    (*(void (__thiscall **)(int, ShapeButtonClass *, int, int, int))(*(_DWORD *)v7 + 52))(v7, &stru_B07DF8, v21, a3, a2); /*0x6a7fd1*/
    (*(void (__thiscall **)(int, ShapeButtonClass *))(*(_DWORD *)v7 + 52))(v7, &stru_B0B3A0); /*0x6a7fdd*/
    (*(void (__thiscall **)(int, GadgetClass *))(*(_DWORD *)v7 + 52))(v7, &stru_B07E58); /*0x6a7fe9*/
    v18 = &stru_B07C48; /*0x6a7fec*/
    do /*0x6a8002*/
    {
      (*(void (__thiscall **)(int, ShapeButtonClass *))(*(_DWORD *)v7 + 52))(v7, v18); /*0x6a7ff6*/
      v18 += 8; /*0x6a7ff9*/
    }
    while ( (int)v18 < (int)&dword_B07DC8 ); /*0x6a8002*/
    (*(void (__thiscall **)(int, ShapeButtonClass *))(*(_DWORD *)v7 + 52))(v7, &stru_B0B328); /*0x6a800d*/
    (*(void (__thiscall **)(int, ShapeButtonClass *))(*(_DWORD *)v7 + 52))(v7, &g_SidebarFlag); /*0x6a8019*/
    v19 = 0; /*0x6a8029*/
    v20 = v7 + 3988 * *(_DWORD *)(v7 + 21404) + 5444; /*0x6a8031*/
    do /*0x6a805f*/
    {
      Tactical::SelectObject( /*0x6a8056*/
        (GScreenClass *)&stru_87F5F0.__pad_58[416],
        56 * (v19 + 60 * *(_DWORD *)(v20 + 56)) + 11566720);
      ++v19; /*0x6a805b*/
    }
    while ( v19 < 60 ); /*0x6a805f*/
    (*(void (__thiscall **)(int, GadgetClass *))(*(_DWORD *)v7 + 52))(v7, &stru_B04A10); /*0x6a806a*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 56))(v7, 2); /*0x6a8073*/
    return v10; /*0x6a8073*/
  }
  (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v7 + 136))(v7, a4, a3, a2); /*0x6a7ded*/
  *(_BYTE *)(v7 + 21414) = 1; /*0x6a7df8*/
  Hash::Reset((LinkClass *)&stru_B07DF8); /*0x6a7dff*/
  (*(void (__thiscall **)(int, ShapeButtonClass *))(*(_DWORD *)v7 + 48))(v7, &stru_B07DF8); /*0x6a7e0d*/
  Hash::Reset((LinkClass *)&stru_B0B3A0); /*0x6a7e15*/
  (*(void (__thiscall **)(int, ShapeButtonClass *))(*(_DWORD *)v7 + 48))(v7, &stru_B0B3A0); /*0x6a7e23*/
  v11 = &stru_B07C48; /*0x6a7e26*/
  do /*0x6a7e47*/
  {
    Hash::Reset((LinkClass *)v11); /*0x6a7e2d*/
    LOBYTE(v11[3].ShapeButtonClass_field_0x08) = 0; /*0x6a7e32*/
    (*(void (__thiscall **)(int, ShapeButtonClass *))(*(_DWORD *)v7 + 48))(v7, v11); /*0x6a7e3b*/
    v11 += 8; /*0x6a7e3e*/
  }
  while ( (int)v11 < (int)&dword_B07DC8 ); /*0x6a7e47*/
  Hash::Reset((LinkClass *)&stru_B0B328); /*0x6a7e4e*/
  Hash::InsertOrdered((GScreenClass *)&stru_87F5F0.__pad_58[416], (int)&stru_B0B328); /*0x6a7e5d*/
  Hash::Reset((LinkClass *)&g_SidebarFlag); /*0x6a7e67*/
  Hash::InsertOrdered((GScreenClass *)&stru_87F5F0.__pad_58[416], (int)&g_SidebarFlag); /*0x6a7e76*/
  Hash::Reset((LinkClass *)&stru_B07E58); /*0x6a7e80*/
  (*(void (__thiscall **)(int, GadgetClass *))(*(_DWORD *)v7 + 48))(v7, &stru_B07E58); /*0x6a7e8e*/
  Hash::Reset((LinkClass *)&stru_B04A10); /*0x6a7e96*/
  (*(void (__thiscall **)(int, GadgetClass *))(*(_DWORD *)v7 + 48))(v7, &stru_B04A10); /*0x6a7ea4*/
  v12 = (GadgetClass *)&stru_B07C48; /*0x6a7ea7*/
  v13 = (int *)(v7 + 5528); /*0x6a7eac*/
  do /*0x6a7ed5*/
  {
    *(v13 - 4) = 0; /*0x6a7eb2*/
    if ( *v13 > 0 ) /*0x6a7ebd*/
      DialogControl::Hide(v12); /*0x6a7ec1*/
    v12 = (GadgetClass *)((char *)v12 + 96); /*0x6a7ec6*/
    v13 += 997; /*0x6a7ec9*/
  }
  while ( (int)v12 < (int)&dword_B07DC8 ); /*0x6a7ed5*/
  GadgetClass::Show((GadgetClass *)(&stru_B07C48 + 8 * *(_DWORD *)(v7 + 21404))); /*0x6a7ee9*/
  v14 = v7 + 3988 * *(_DWORD *)(v7 + 21404) + 5444; /*0x6a7f01*/
  *(_BYTE *)(v7 + 3988 * *(_DWORD *)(v7 + 21404) + 5472) = 1; /*0x6a7f08*/
  v15 = 26; /*0x6a7f1a*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a7f12*/
    v15 = 18; /*0x6a7f21*/
  v16 = 0; /*0x6a7f34*/
  v17 = 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v15 + g_DSurface_SidebarBounds - 7) / 50); /*0x6a7f54*/
  if ( v17 > 0 ) /*0x6a7f58*/
  {
    do /*0x6a7f9d*/
    {
      Hash::Reset((LinkClass *)(56 * (v16 + 60 * *(_DWORD *)(v14 + 56)) + 11566720)); /*0x6a7f72*/
      Hash::InsertOrdered( /*0x6a7f95*/
        (GScreenClass *)&stru_87F5F0.__pad_58[416],
        56 * (v16 + 60 * *(_DWORD *)(v14 + 56)) + 11566720);
      ++v16; /*0x6a7f9a*/
    }
    while ( v16 < v17 ); /*0x6a7f9d*/
  }
  g_CameoRenderFlag = 1; /*0x6a7fa1*/
  Tactical::UpdateUIVisibility((Tactical *)v7); /*0x6a7fa8*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 56))(v7, 2); /*0x6a7fb7*/
  return a5; /*0x6a7fbf*/
}



// ==== 0x006A80A0  TabClass::updateTabProduction  this=TabClass  sig=csp ====
_BYTE *__thiscall TabClass::updateTabProduction(TabClass *this, int a2)
{
  _BYTE *result; // eax
  int v3; // ecx
  int v4; // esi
  _BYTE *v5; // ecx
  int v6; // esi
  int v7; // edi
  _DWORD *v8; // ecx
  int v9; // esi

  result = this; /*0x6a80a0*/
  this->TabClass_field_0x0 = 0; /*0x6a80aa*/
  LOBYTE(this->TabClass_field_0x4) = 0; /*0x6a80ac*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6a80af*/
  *((_DWORD *)result + 4) = 0; /*0x6a80b5*/
  *((_DWORD *)result + 2) = v3; /*0x6a80b8*/
  *((_DWORD *)result + 5) = 0; /*0x6a80bc*/
  *((_DWORD *)result + 6) = 1; /*0x6a80bf*/
  *((_DWORD *)result + 8) = 0; /*0x6a80c2*/
  *((_DWORD *)result + 9) = 0; /*0x6a80c5*/
  *((_DWORD *)result + 10) = dword_B07DC8; /*0x6a80d2*/
  *((_DWORD *)result + 11) = dword_B07DCC; /*0x6a80da*/
  *((_DWORD *)result + 12) = dword_B07DD0; /*0x6a80e3*/
  v4 = dword_B07DD4; /*0x6a80e6*/
  *((_DWORD *)result + 14) = 0; /*0x6a80ec*/
  result[60] = 1; /*0x6a80ef*/
  *((_DWORD *)result + 13) = v4; /*0x6a80f2*/
  result[61] = 0; /*0x6a80f5*/
  result[62] = 0; /*0x6a80f8*/
  result[63] = 0; /*0x6a80fb*/
  *((_DWORD *)result + 16) = -1; /*0x6a80fe*/
  *((_DWORD *)result + 17) = 0; /*0x6a8105*/
  *((_DWORD *)result + 18) = 0; /*0x6a8108*/
  *((_DWORD *)result + 19) = 0; /*0x6a810b*/
  *((_DWORD *)result + 20) = 0; /*0x6a810e*/
  *((_DWORD *)result + 21) = 0; /*0x6a8111*/
  v5 = result + 112; /*0x6a8114*/
  v6 = 75; /*0x6a8117*/
  do /*0x6a8137*/
  {
    *((_DWORD *)v5 - 1) = 0; /*0x6a811c*/
    *v5 = 0; /*0x6a811f*/
    v7 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6a8121*/
    *((_DWORD *)v5 + 3) = 0; /*0x6a8127*/
    *((_DWORD *)v5 + 1) = v7; /*0x6a812a*/
    *((_DWORD *)v5 + 4) = 0; /*0x6a812d*/
    *((_DWORD *)v5 + 5) = 1; /*0x6a8130*/
    v5 += 52; /*0x6a8133*/
    --v6; /*0x6a8136*/
  }
  while ( v6 ); /*0x6a8137*/
  v8 = result + 92; /*0x6a8139*/
  v9 = 75; /*0x6a813c*/
  do /*0x6a8150*/
  {
    *(v8 - 1) = 0; /*0x6a8141*/
    *v8 = 0; /*0x6a8144*/
    v8[1] = 0; /*0x6a8146*/
    v8[2] = 0; /*0x6a8149*/
    v8 += 13; /*0x6a814c*/
    --v9; /*0x6a814f*/
  }
  while ( v9 ); /*0x6a8150*/
  return result; /*0x6a8152*/
}



// ==== 0x006A81B0  HouseClass::ClearProductionQueue  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::ClearProductionQueue(HouseClass *this)
{
  _DWORD *result; // eax
  int v2; // esi
  int v3; // ecx
  _DWORD *v4; // ebx
  int v5; // [esp+10h] [ebp-8h]

  BYTE2(this->conYardsCount) = 0; /*0x6a81b5*/
  HIBYTE(this->conYardsCount) = 0; /*0x6a81b8*/
  BYTE1(this->conYardsCount) = 0; /*0x6a81c2*/
  this->conYardsCapacity = -1; /*0x6a81c5*/
  this->buildings[0] = 0; /*0x6a81cc*/
  this->buildingsCapacity = 0; /*0x6a81cf*/
  this->repairStationsCount = 0; /*0x6a81d2*/
  result = this->occupiables; /*0x6a81d5*/
  v2 = 75; /*0x6a81db*/
  do /*0x6a820c*/
  {
    *(result - 10) = 0; /*0x6a81e0*/
    *(result - 9) = 0; /*0x6a81e3*/
    *(result - 8) = 0; /*0x6a81e6*/
    *(result - 7) = 0; /*0x6a81e9*/
    *(result - 6) = 0; /*0x6a81ec*/
    v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6a81ef*/
    v4 = result - 3; /*0x6a81f5*/
    *result = 0; /*0x6a81f8*/
    result += 13; /*0x6a81fa*/
    --v2; /*0x6a81fd*/
    *v4 = v3; /*0x6a81fe*/
    v4[1] = v5; /*0x6a8200*/
    v4[2] = 0; /*0x6a8203*/
    *(result - 18) = 0; /*0x6a8206*/
    *(result - 11) = 0; /*0x6a8209*/
  }
  while ( v2 ); /*0x6a820c*/
  return result; /*0x6a820e*/
}



// ==== 0x006A8220  SidebarClass::InitCameoGrid  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::InitCameoGrid(SidebarClass *this, int a2)
{
  int v2; // eax
  int v3; // edx
  int result; // eax
  int v5; // ebx
  int v6; // esi
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // ebp
  int v10; // edx
  int i; // [esp+4h] [ebp+4h]

  this->SidebarClass_field_0x38 = (void *)a2; /*0x6a8224*/
  v2 = 26; /*0x6a8235*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a822d*/
    v2 = 18; /*0x6a823c*/
  v3 = (g_DSurface_ViewBounds - g_SidebarBounds - v2 + g_DSurface_SidebarBounds - 7) / 50; /*0x6a826b*/
  result = 0; /*0x6a826d*/
  v5 = v3; /*0x6a826f*/
  for ( i = 0; i < v5; ++i ) /*0x6a8277*/
  {
    v6 = 0; /*0x6a827f*/
    v7 = 2 * result; /*0x6a8281*/
    do /*0x6a830e*/
    {
      v8 = (_DWORD *)(56 * (v7 + 60 * (int)this->SidebarClass_field_0x38) + 11566720); /*0x6a8299*/
      v8[9] = 202; /*0x6a82a0*/
      v8[3] = v6 * dword_B0B4FC + *(&stru_880D2C.PlayerClass_field_0x20 + 997 * (int)this->SidebarClass_field_0x38); /*0x6a82c9*/
      v9 = i * dword_B0B500; /*0x6a82e2*/
      v10 = *(&stru_880D2C.PlayerClass_field_0x24 + 997 * (int)this->SidebarClass_field_0x38); /*0x6a82e7*/
      v8[12] = v7; /*0x6a82ee*/
      ++v6; /*0x6a82f1*/
      ++v7; /*0x6a82f2*/
      v8[4] = v10 + v9 + 1; /*0x6a82fa*/
      v8[5] = 60; /*0x6a82fd*/
      v8[6] = 48; /*0x6a8304*/
      v8[11] = this; /*0x6a830b*/
    }
    while ( v6 < 2 ); /*0x6a830e*/
    result = i + 1; /*0x6a8318*/
  }
  return result; /*0x6a8329*/
}



// ==== 0x006A8330  SidebarClass::RefreshCameoGrid  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::RefreshCameoGrid(SidebarClass *this)
{
  int v2; // eax
  int v3; // esi
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ebx

  v2 = 26; /*0x6a8342*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a8338*/
    v2 = 18; /*0x6a8349*/
  v3 = 0; /*0x6a8369*/
  v4 = g_DSurface_ViewBounds - g_SidebarBounds - v2 + g_DSurface_SidebarBounds - 7; /*0x6a836b*/
  v5 = (unsigned int)((unsigned __int64)(1374389535LL * v4) >> 32) >> 31; /*0x6a8376*/
  v6 = 2 * (v4 / 50); /*0x6a837d*/
  if ( v6 > 0 ) /*0x6a8381*/
  {
    do /*0x6a83ce*/
    {
      Hash::Reset((LinkClass *)(56 * (v3 + 60 * (int)this->SidebarClass_field_0x38) + 11566720)); /*0x6a839f*/
      LOBYTE(v5) = Hash::InsertOrdered( /*0x6a83c6*/
                     (GScreenClass *)&stru_87F5F0.__pad_58[416],
                     56 * (v3 + 60 * (int)this->SidebarClass_field_0x38) + 11566720);
      ++v3; /*0x6a83cb*/
    }
    while ( v3 < v6 ); /*0x6a83ce*/
  }
  g_CameoRenderFlag = 1; /*0x6a83d2*/
  return v5; /*0x6a83d0*/
}



// ==== 0x006A83E0  SidebarClass::sortCameoList  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::sortCameoList(SidebarClass *this)
{
  int i; // esi
  char result; // al

  for ( i = 0; i < 60; ++i ) /*0x6a83e4*/
    result = Tactical::SelectObject( /*0x6a8408*/
               (GScreenClass *)&stru_87F5F0.__pad_58[416],
               56 * (i + 60 * (int)this->SidebarClass_field_0x38) + 11566720);
  return result; /*0x6a8413*/
}



// ==== 0x006A8420  RadarClass::GetBlip  this=ObjectClass  sig=csp ====
bool __stdcall CompareFactoryTypePriority(int a1, int a2, int a3, int a4)
{
  int v7; // edx
  bool v9; // al
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // esi
  const wchar_t *v14; // eax
  const wchar_t *v15; // ecx
  int v16; // edi
  int v17; // eax
  bool v18; // cl
  bool v19; // al
  char v20; // al
  char v21; // cl
  char v22; // al
  char v23; // al
  char v24; // dl
  _DWORD *v25; // ebp
  char v26; // cl
  bool v27; // al
  int v28; // eax
  int v29; // ecx
  int v30; // esi
  int v31; // eax
  char v32; // [esp+13h] [ebp-9h]
  int v33; // [esp+14h] [ebp-8h]
  int v34; // [esp+18h] [ebp-4h]
  char v35; // [esp+20h] [ebp+4h]
  bool v36; // [esp+24h] [ebp+8h]
  char v37; // [esp+28h] [ebp+Ch]
  char v38; // [esp+2Ch] [ebp+10h]

  v33 = TechnoTypeClass::GetByTypeAndIndex(a1, a2); /*0x6a8444*/
  v7 = TechnoTypeClass::GetByTypeAndIndex(a3, a4); /*0x6a844d*/
  v34 = v7; /*0x6a8451*/
  if ( !a3 ) /*0x6a8455*/
    return 1; /*0x6a8460*/
  if ( a1 == 31 || a1 == 57 || (v35 = 0, a1 == 32) ) /*0x6a8475*/
    v35 = 1; /*0x6a8477*/
  v9 = a3 == 31 || a3 == 57 || a3 == 32; /*0x6a848f*/
  v36 = v9; /*0x6a8495*/
  if ( v35 ) /*0x6a849b*/
  {
    if ( v9 ) /*0x6a849f*/
    {
      v10 = *((_DWORD *)dword_A8E334 + a2); /*0x6a84ab*/
      v11 = *((_DWORD *)dword_A8E334 + a4); /*0x6a84ae*/
      v12 = *(_DWORD *)(v10 + 176); /*0x6a84b1*/
      v13 = *(_DWORD *)(v11 + 176); /*0x6a84b7*/
      if ( v12 < v13 ) /*0x6a84bf*/
        return 1; /*0x6a84ca*/
      if ( v12 > v13 ) /*0x6a84cd*/
        return 0; /*0x6a84d8*/
      v14 = *(const wchar_t **)(v10 + 96); /*0x6a84db*/
      v15 = *(const wchar_t **)(v11 + 96); /*0x6a84de*/
      return wcscmp(v14, v15) <= 0; /*0x6a84e1*/
    }
    goto LABEL_25; /*0x6a849f*/
  }
  if ( v9 ) /*0x6a84e8*/
  {
LABEL_25:
    v16 = v33; /*0x6a8536*/
    goto LABEL_26; /*0x6a8536*/
  }
  v16 = v33; /*0x6a84ef*/
  v17 = *(_DWORD *)(*((_DWORD *)dword_A83D4C + 13) + 188); /*0x6a84fc*/
  v18 = v17 == *(_DWORD *)(v33 + 1744); /*0x6a850a*/
  v19 = v17 == *(_DWORD *)(v7 + 1744); /*0x6a850f*/
  if ( v18 ) /*0x6a8514*/
  {
    if ( !v19 ) /*0x6a8518*/
      return 1; /*0x6a8523*/
  }
  else if ( v19 ) /*0x6a8528*/
  {
    return 0; /*0x6a8533*/
  }
LABEL_26:
  if ( a1 == 40 || a1 == 3 ) /*0x6a8542*/
  {
    v20 = 1; /*0x6a8564*/
    if ( *(_BYTE *)(v16 + 3478) ) /*0x6a855e*/
    {
      v21 = 1; /*0x6a856a*/
      v37 = 1; /*0x6a856c*/
      goto LABEL_30; /*0x6a8570*/
    }
  }
  else
  {
    v20 = 0; /*0x6a8544*/
  }
  v21 = 0; /*0x6a8546*/
  v37 = 0; /*0x6a854a*/
  if ( !v20 ) /*0x6a854e*/
  {
LABEL_34:
    v22 = 0; /*0x6a8572*/
    goto LABEL_35; /*0x6a8572*/
  }
LABEL_30:
  if ( !*(_BYTE *)(v16 + 3278) ) /*0x6a8558*/
    goto LABEL_34; /*0x6a8558*/
  v22 = 1; /*0x6a855a*/
LABEL_35:
  v32 = v22; /*0x6a8574*/
  if ( v21 || (v38 = 1, v22) ) /*0x6a8583*/
    v38 = 0; /*0x6a8585*/
  if ( a3 == 40 || a3 == 3 ) /*0x6a8592*/
  {
    v23 = 1; /*0x6a85b4*/
    if ( *(_BYTE *)(v7 + 3478) ) /*0x6a85ae*/
    {
      v24 = 1; /*0x6a85ba*/
      goto LABEL_42; /*0x6a85bc*/
    }
  }
  else
  {
    v23 = 0; /*0x6a8594*/
  }
  v24 = 0; /*0x6a8596*/
  if ( !v23 ) /*0x6a859a*/
  {
    v25 = (_DWORD *)v34; /*0x6a85be*/
    goto LABEL_47; /*0x6a85be*/
  }
LABEL_42:
  v25 = (_DWORD *)v34; /*0x6a859c*/
  if ( !*(_BYTE *)(v34 + 3278) ) /*0x6a85a8*/
  {
LABEL_47:
    v26 = 0; /*0x6a85c2*/
    goto LABEL_48; /*0x6a85c2*/
  }
  v26 = 1; /*0x6a85aa*/
LABEL_48:
  v27 = !v24 && !v26; /*0x6a85d0*/
  if ( v35 ) /*0x6a85d8*/
  {
    if ( v24 || v26 || v27 ) /*0x6a85e4*/
      return 1; /*0x6a85f3*/
    goto LABEL_74; /*0x6a85e4*/
  }
  if ( v38 ) /*0x6a85fc*/
  {
    if ( v36 ) /*0x6a8604*/
      return 0; /*0x6a860f*/
    if ( v24 ) /*0x6a8614*/
      return 1; /*0x6a8614*/
  }
  else
  {
    if ( !v37 ) /*0x6a862c*/
    {
      if ( v32 ) /*0x6a8658*/
      {
        if ( v36 ) /*0x6a8660*/
          return 0; /*0x6a866b*/
        if ( v27 || v24 ) /*0x6a8674*/
          return 0; /*0x6a867f*/
      }
      goto LABEL_74; /*0x6a8674*/
    }
    if ( v36 ) /*0x6a8634*/
      return 0; /*0x6a863f*/
    if ( v27 ) /*0x6a8644*/
      return 0; /*0x6a864f*/
  }
  if ( v26 ) /*0x6a8618*/
    return 1; /*0x6a8623*/
LABEL_74:
  v28 = *(_DWORD *)(v16 + 1588); /*0x6a8682*/
  v29 = v25[397]; /*0x6a8688*/
  if ( v28 < v29 ) /*0x6a8690*/
    return 1; /*0x6a869b*/
  if ( v28 > v29 ) /*0x6a869e*/
    return 0; /*0x6a86a9*/
  v30 = (*(int (__thiscall **)(int, #375 *))(*(_DWORD *)v16 + 132))(v16, dword_A83D4C); /*0x6a86bf*/
  v31 = (*(int (__thiscall **)(_DWORD *, #375 *))(*v25 + 132))(v25, dword_A83D4C); /*0x6a86c9*/
  if ( v30 < v31 ) /*0x6a86d1*/
    return 1; /*0x6a86dc*/
  if ( v30 > v31 ) /*0x6a86df*/
    return 0; /*0x6a86ea*/
  v14 = *(const wchar_t **)(v16 + 96); /*0x6a86ed*/
  v15 = (const wchar_t *)v25[24]; /*0x6a86f0*/
  return wcscmp(v14, v15) <= 0; /*0x6a8457*/
}



// ==== 0x006A8710  TabCameoListClass::AddCameo_ReplaceItAll  this=TabCameoListClass  sig=csp ====
int __thiscall TabCameoListClass::AddCameo_ReplaceItAll(TabCameoListClass *this, int a2, int a3)
{
  int v4; // ebp
  int result; // eax
  int *i; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // eax
  TabCameoListClass *v11; // edi
  TabCameoListClass *v12; // esi
  TabCameoListClass v13; // eax
  int v14; // [esp+14h] [ebp-8h]

  v4 = 0; /*0x6a8717*/
  result = *((_DWORD *)this + 21) + 1; /*0x6a871f*/
  *((_DWORD *)this + 21) = result; /*0x6a8721*/
  if ( result > 0 ) /*0x6a8726*/
  {
    for ( i = (int *)(this + 22); ; i += 13 ) /*0x6a872c*/
    {
      v7 = a2; /*0x6a8734*/
      if ( RadarClass::GetBlip(a2, a3, i[1], *i) ) /*0x6a8742*/
        break; /*0x6a8742*/
      result = *((_DWORD *)this + 21); /*0x6a874b*/
      if ( ++v4 >= result ) /*0x6a8754*/
        return result; /*0x6a8754*/
    }
    v8 = *((_DWORD *)this + 21) - 1; /*0x6a8763*/
    if ( v8 > v4 ) /*0x6a8766*/
    {
      v9 = 13 * v8; /*0x6a876b*/
      v10 = v8 - v4; /*0x6a876e*/
      v11 = this + v9 + 22; /*0x6a8770*/
      do /*0x6a8783*/
      {
        --v10; /*0x6a877e*/
        qmemcpy(v11, &v11[-13], 0x34u); /*0x6a877f*/
        v11 -= 13; /*0x6a8781*/
      }
      while ( v10 ); /*0x6a8783*/
      v7 = a2; /*0x6a8785*/
    }
    v12 = this + 13 * v4; /*0x6a8798*/
    v12[23] = (TabCameoListClass)v7; /*0x6a879b*/
    v12[22] = (TabCameoListClass)a3; /*0x6a879e*/
    if ( v7 == 7 ) /*0x6a87a1*/
      v12[24] = (TabCameoListClass)GetHouseTechLevel(7, a3); /*0x6a87aa*/
    v12[25] = 0; /*0x6a87b3*/
    *((_DWORD *)this + 12 * v4 + v4 + 26) = 0; /*0x6a87bd*/
    v12[27] = 0; /*0x6a87c0*/
    v13 = *(TabCameoListClass *)&stru_A8EB00.?[416]; /*0x6a87c3*/
    v12[32] = 0; /*0x6a87c8*/
    v12[29] = v13; /*0x6a87ce*/
    v12[30] = (TabCameoListClass)v14; /*0x6a87d4*/
    v12[31] = 0; /*0x6a87d7*/
    v12[34] = 0; /*0x6a87da*/
    return v14; /*0x6a87d0*/
  }
  return result; /*0x6a8756*/
}



// ==== 0x006A87F0  ObjectClass::method_6A87F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6A87F0(ObjectClass *this, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int *v6; // eax

  v4 = this->customSound_controller[1]; /*0x6a87f5*/
  if ( v4 > 75 ) /*0x6a87fb*/
    return 0; /*0x6a8857*/
  v5 = 0; /*0x6a8805*/
  if ( v4 > 0 ) /*0x6a8809*/
  {
    v6 = &this->customSound_controller[2]; /*0x6a880b*/
    while ( v6[1] != a2 || *v6 != a3 ) /*0x6a8815*/
    {
      ++v5; /*0x6a8817*/
      v6 += 13; /*0x6a8818*/
      if ( v5 >= v4 ) /*0x6a881d*/
        goto LABEL_7; /*0x6a881d*/
    }
    return 0; /*0x6a8815*/
  }
LABEL_7:
  if ( !dword_A8E7AC && a2 != 31 ) /*0x6a882b*/
    VoxClass::FindAndPlay(&stru_83FA64, -1); /*0x6a8837*/
  TabCameoListClass::AddCameo_ReplaceItAll((TabCameoListClass *)this, a2, a3); /*0x6a8840*/
  LOBYTE(this->ambientSoundController[0]) = 1; /*0x6a8848*/
  g_CameoRenderFlag = 1; /*0x6a884c*/
  return 1; /*0x6a8847*/
}



// ==== 0x006A89E0  ObjectClass::method_6A89E0  this=ObjectClass  sig=csp ====
char __thiscall sub_6A89E0(ObjectClass *this, char a2)
{
  int v2; // eax
  int v3; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // kr04_4
  ObjectClass *v8; // eax
  void *NeedsSaveOrLink; // [esp+4h] [ebp-4h]

  NeedsSaveOrLink = dword_A8B230[374].NeedsSaveOrLink; /*0x6a89f2*/
  v2 = 26; /*0x6a89f8*/
  if ( NeedsSaveOrLink ) /*0x6a89fd*/
    v2 = 18; /*0x6a89ff*/
  v3 = (g_DSurface_ViewBounds - g_SidebarBounds - v2 + g_DSurface_SidebarBounds - 7) / 50; /*0x6a8a43*/
  if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a8a45*/
    v3 = 1; /*0x6a8a47*/
  if ( a2 ) /*0x6a8a52*/
  {
    if ( this->ambientSoundController[2] ) /*0x6a8a58*/
    {
      this->ambientSoundController[3] -= v3; /*0x6a8a72*/
      return 1; /*0x6a8a76*/
    }
    else
    {
      return 0; /*0x6a8a62*/
    }
  }
  else
  {
    v5 = 26; /*0x6a8a85*/
    if ( NeedsSaveOrLink ) /*0x6a8a8a*/
      v5 = 18; /*0x6a8a8c*/
    v6 = (g_DSurface_ViewBounds - g_SidebarBounds - v5 + g_DSurface_SidebarBounds - 7) / 50; /*0x6a8aaa*/
    if ( dword_A83D4C == (Object *)HouseClass_Observer ) /*0x6a8aac*/
    {
      v7 = v6; /*0x6a8ab7*/
      v8 = this; /*0x6a8ab9*/
      if ( this->ambientSoundController[2] + v7 / 2 >= dword_884CF8 ) /*0x6a8ac4*/
        return 0; /*0x6a8acf*/
    }
    else
    {
      if ( 2 * (v6 + this->ambientSoundController[2]) >= this->customSound_controller[1] ) /*0x6a8ae2*/
        return 0; /*0x6a8aed*/
      v8 = this; /*0x6a8af0*/
    }
    v8->ambientSoundController[3] += v3; /*0x6a8afb*/
    return 1; /*0x6a8aff*/
  }
}



// ==== 0x006A8B30  SidebarClass::UpdateCameos  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::UpdateCameos(char *this, int a2, int a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edx
  _DWORD *v14; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // ebp
  _DWORD *v18; // edi
  _DWORD *v19; // esi
  int Type; // eax
  _DWORD *v21; // ebp
  _DWORD *v22; // esi
  int v23; // esi
  int v24; // eax
  int v25; // eax
  const void *v26; // eax
  char *v27; // esi
  int v28; // edi
  int *v29; // esi
  int v30; // ecx
  wchar_t *v31; // ecx
  int v32; // eax
  int v33; // ecx
  int *v34; // edi
  int v35; // esi
  _DWORD *v36; // eax
  int v37; // eax
  int *v38; // ecx
  int v39; // edx
  int v40; // ebx
  int v41; // edx
  _DWORD *v42; // ecx
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int *v46; // ecx
  int v47; // edx
  int v48; // ebp
  int *v49; // ecx
  int v50; // edx
  int v51; // ebx
  int v52; // eax
  int v53; // eax
  char result; // al
  int v55; // [esp-10h] [ebp-A8h]
  int v56; // [esp-8h] [ebp-A0h]
  char v57; // [esp+13h] [ebp-85h]
  int v58; // [esp+14h] [ebp-84h]
  int v59; // [esp+14h] [ebp-84h]
  int v61; // [esp+20h] [ebp-78h]

  v57 = 0; /*0x6a8b45*/
  if ( this->VisibleRect ) /*0x6a8b3b*/
    goto LABEL_115; /*0x6a8b3b*/
  v4 = this->q048; /*0x6a8b50*/
  if ( v4 ) /*0x6a8b55*/
  {
    v5 = 26; /*0x6a8b66*/
    if ( *((_DWORD *)dword_A8B230 + 3374) ) /*0x6a8b60*/
      v5 = 18; /*0x6a8b6f*/
    v6 = this->q054; /*0x6a8b9f*/
    v7 = (g_DSurface_ViewBounds - v5 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50; /*0x6a8bad*/
    v8 = 2; /*0x6a8baf*/
    v9 = 2 * v7; /*0x6a8bb4*/
    if ( dword_A83D4C == (#375 *)HouseClass_Observer ) /*0x6a8bb7*/
    {
      v6 = dword_884CF8; /*0x6a8bb9*/
      v8 = 1; /*0x6a8bc2*/
      v7 /= 2; /*0x6a8bc7*/
      v9 = v7; /*0x6a8bc9*/
    }
    if ( v6 > v9 ) /*0x6a8bcd*/
    {
      if ( v4 >= 0 ) /*0x6a8bdc*/
      {
        if ( v8 * (v7 + this->q044) < v6 ) /*0x6a8c09*/
        {
          this->q048 = v4 - 1; /*0x6a8c11*/
          this->u32_4C = dword_B0B500; /*0x6a8c1a*/
          this->q0F8 = 1; /*0x6a8c1d*/
          this->VisibleRect = 1; /*0x6a8c21*/
        }
        else
        {
          this->q048 = 0; /*0x6a8c0b*/
        }
      }
      else
      {
        v10 = this->q044; /*0x6a8bde*/
        if ( v10 ) /*0x6a8be3*/
        {
          this->q048 = v4 + 1; /*0x6a8bec*/
          this->q0F8 = 0; /*0x6a8bef*/
          this->VisibleRect = 1; /*0x6a8bf3*/
          this->q044 = v10 - 1; /*0x6a8bf7*/
          this->u32_4C = 0; /*0x6a8bfa*/
        }
        else
        {
          this->q048 = 0; /*0x6a8be5*/
        }
      }
    }
    else
    {
      this->q048 = 0; /*0x6a8bcf*/
    }
  }
  if ( this->VisibleRect ) /*0x6a8c25*/
  {
LABEL_115:
    if ( this->q0F8 ) /*0x6a8c2c*/
    {
      v11 = this->u32_4C - dword_B0B514; /*0x6a8c3e*/
      this->u32_4C = v11; /*0x6a8c40*/
      if ( v11 <= 0 ) /*0x6a8c45*/
      {
        v12 = this->q044; /*0x6a8c47*/
        this->VisibleRect = 0; /*0x6a8c4a*/
        this->u32_4C = 0; /*0x6a8c4f*/
        this->q044 = v12 + 1; /*0x6a8c56*/
      }
    }
    else
    {
      v13 = dword_B0B514 + this->u32_4C; /*0x6a8c63*/
      this->u32_4C = v13; /*0x6a8c65*/
      if ( v13 >= dword_B0B500 ) /*0x6a8c72*/
      {
        this->VisibleRect = 0; /*0x6a8c74*/
        this->u32_4C = 0; /*0x6a8c78*/
      }
    }
    v57 = 1; /*0x6a8c7f*/
  }
  if ( this->q010 != -1 ) /*0x6a8c8c*/
  {
    v14 = this + 8; /*0x6a8c8e*/
    if ( Locomotor::GetSpeed((int *)this + 2) || (v15 = this->q014) == 0 ) /*0x6a8ca5*/
    {
      this->q004 = 0; /*0x6a8d4d*/
    }
    else
    {
      v16 = this->q018 + *(_DWORD *)this; /*0x6a8cb0*/
      this->q004 = 1; /*0x6a8cb2*/
      *(_DWORD *)this = v16; /*0x6a8cb6*/
      v57 = 1; /*0x6a8cc4*/
      *v14 = dword_A8ED84; /*0x6a8cc9*/
      this->q00C = v61; /*0x6a8cd0*/
      this->q004 = v15; /*0x6a8cd3*/
      if ( v16 >= 7 ) /*0x6a8cd6*/
      {
        *v14 = dword_A8ED84; /*0x6a8ce3*/
        this->q00C = v61; /*0x6a8ce5*/
        this->q004 = 0; /*0x6a8ce8*/
        this->q014 = 0; /*0x6a8ceb*/
        *(_DWORD *)this = 0; /*0x6a8cee*/
        this->q010 = -1; /*0x6a8cf0*/
      }
    }
  }
  if ( dword_884B88 > (int)dword_A8ED84 ) /*0x6a8d00*/
    v57 = 1; /*0x6a8d02*/
  if ( this->q038 <= 1u ) /*0x6a8d0c*/
  {
    v17 = 0; /*0x6a8d1a*/
    if ( *((int *)this + 21) > 0 ) /*0x6a8d1e*/
    {
      v18 = this + 88; /*0x6a8d20*/
      do /*0x6a8d23*/
      {
        if ( v18[1] == 31 ) /*0x6a8d27*/
        {
          if ( *(_DWORD *)(*((_DWORD *)dword_A83D4C + 150) + 4 * *v18) && (unsigned __int8)SuperClass::ShouldFlashTab() ) /*0x6a8d3e*/
            goto LABEL_53; /*0x6a8d45*/
        }
        else
        {
          v19 = (_DWORD *)v18[3]; /*0x6a8d53*/
          if ( v19 ) /*0x6a8d58*/
          {
            if ( ObjectClass::IsCliffWall((_DWORD *)v18[3]) ) /*0x6a8d5c*/
            {
              Type = AbstractClass::GetType(v19); /*0x6a8d67*/
              if ( Type ) /*0x6a8d6e*/
              {
                if ( (*(int (__thiscall **)(int))(*(_DWORD *)Type + 44))(Type) == 6 ) /*0x6a8d7a*/
                {
LABEL_53:
                  SidebarClass::startButtonFlash( /*0x6a8e85*/
                    10,
                    10 - (int)dword_A8ED84 % 10,
                    ((int)dword_A8ED84 + 10 - (int)dword_A8ED84 % 10) / 10 % 2 == 0);
                  g_CameoRenderFlag = 1; /*0x6a8ea7*/
                  MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x6a8eae*/
                  goto LABEL_44; /*0x6a8eb3*/
                }
              }
            }
          }
        }
        ++v17; /*0x6a8d83*/
        v18 += 13; /*0x6a8d84*/
      }
      while ( v17 < this->q054 ); /*0x6a8d23*/
    }
    SHA1::Reset((int)&stru_B07C48 + 96 * this->q038); /*0x6a8d8b*/
  }
LABEL_44:
  if ( this->q03D )
  {
    v58 = 0; /*0x6a8dad*/
    if ( *((int *)this + 21) > 0 )
    {
      v21 = this + 104; /*0x6a8dbd*/
      do
      {
        v22 = (_DWORD *)*(v21 - 1); /*0x6a8dc6*/
        if ( v22 )
        {
          if ( (unsigned __int8)FactoryClass::HasProgressChanged(*(v21 - 1)) )
          {
            v57 = 1; /*0x6a8de2*/
            if ( ObjectClass::IsCliffWall(v22) )
            {
              v23 = AbstractClass::GetType(v22); /*0x6a8dfb*/
              if ( v23 )
              {
                switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23) )
                {
                  case 1:
                  case 2:
                  case 15:
                    v56 = *(unsigned __int8 *)((*(int (__thiscall **)(int))(*(_DWORD *)v23 + 132))(v23) + 3278); /*0x6a8ed1*/
                    v55 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23); /*0x6a8ed9*/
                    v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 56))(v23); /*0x6a8ee0*/
                    v26 = (const void *)EventClass::Init(v25, 11, v55, -1, v56, &word_B07DD8); /*0x6a8ee8*/
                    if ( dword_A802C8 < 128 ) /*0x6a8ef7*/
                    {
                      qmemcpy(&byte_A802D4[111 * dword_A802D0], v26, 0x6Fu); /*0x6a8f13*/
                      dword_A83A54[dword_A802D0] = timeGetTime(); /*0x6a8f20*/
                      dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x6a8f37*/
                      ++dword_A802C8; /*0x6a8f3d*/
                    }
                    *v21 = 0; /*0x6a8f42*/
                    break; /*0x6a8f42*/
                  case 6:
                    VoxClass::FindAndPlay(unk_83FA80, -1); /*0x6a8e2f*/
                    v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23); /*0x6a8e38*/
                    SidebarClass::registerBuildingType(v24 == 6 ? v23 : 0);
                    break; /*0x6a8e4d*/
                  default:
                    break;
                }
              }
            }
          }
        }
        v21 += 13; /*0x6a8f49*/
        ++v58; /*0x6a8f58*/
      }
      while ( v58 < this->q054 );
    }
  }
  v27 = this; /*0x6a8f64*/
  v28 = 0; /*0x6a8f6a*/
  if ( *((int *)this + 21) > 0 ) /*0x6a8f6f*/
  {
    v29 = (int *)(this + 116); /*0x6a8f79*/
    do /*0x6a9025*/
    {
      if ( *(v29 - 3) == 1 ) /*0x6a8f80*/
      {
        v30 = *(v29 - 4); /*0x6a8f86*/
        if ( v30 && (!*(_DWORD *)(v30 + 56) || *(_BYTE *)(v30 + 112) || (unsigned __int8)SidebarClass::draw()) ) /*0x6a8f99*/
        {
          v31 = dword_A8ED84; /*0x6a8fa2*/
          v29[3] = 0; /*0x6a8fac*/
          *v29 = (int)v31; /*0x6a8faf*/
          v29[1] = v61; /*0x6a8fb5*/
          v29[2] = 0; /*0x6a8fb8*/
          *(v29 - 2) = 0; /*0x6a8fbb*/
        }
        if ( Locomotor::GetSpeed(v29) || (v32 = v29[3]) == 0 ) /*0x6a8fd2*/
        {
          *((_BYTE *)v29 - 4) = 0; /*0x6a9063*/
        }
        else
        {
          v33 = v29[4] + *(v29 - 2); /*0x6a8fde*/
          *((_BYTE *)v29 - 4) = 1; /*0x6a8fe0*/
          *(v29 - 2) = v33; /*0x6a8fe4*/
          v57 = 1; /*0x6a8fef*/
          *v29 = (int)dword_A8ED84; /*0x6a8ff4*/
          v29[1] = v61; /*0x6a8ffa*/
          v29[2] = v32; /*0x6a8ffd*/
          if ( *(v29 - 2) >= 53 ) /*0x6a9006*/
          {
            *v29 = (int)dword_A8ED84; /*0x6a900f*/
            v29[3] = 0; /*0x6a9011*/
            v29[1] = v61; /*0x6a9014*/
            v29[2] = 0; /*0x6a9017*/
          }
        }
      }
      ++v28; /*0x6a901e*/
      v29 += 13; /*0x6a901f*/
    }
    while ( v28 < this->q054 ); /*0x6a9025*/
    v27 = this; /*0x6a902b*/
  }
  if ( v27[28] && dword_A83D4C == (#375 *)HouseClass_Observer )
  {
    v59 = 0; /*0x6a9050*/
    if ( dword_884CF8 > 0 )
    {
      v34 = Value; /*0x6a905c*/
      do
      {
        v35 = *(v34 - 40); /*0x6a906b*/
        if ( v35 )
        {
          if ( byte_884CF4 ) /*0x6a9080*/
          {
            if ( dword_A8B238[0] == 4 ) /*0x6a9089*/
            {
              v36 = (_DWORD *)SidebarClass::FindProductionData(v35 + 90154); /*0x6a9091*/
              if ( v36 ) /*0x6a9098*/
              {
                *v34 = v36[7]; /*0x6a909e*/
                v34[8] = v36[4]; /*0x6a90a3*/
                v34[16] = v36[2]; /*0x6a90a9*/
                v34[24] = v36[3]; /*0x6a90af*/
                v34[32] = v36[8]; /*0x6a90b5*/
                v34[40] = v36[12]; /*0x6a90be*/
                __3_YAXPAX_Z(v36); /*0x6a90c4*/
                v57 = 1; /*0x6a90cc*/
              }
            }
          }
          v37 = 0; /*0x6a90d7*/
          v38 = (int *)(v35 + 21476); /*0x6a90d9*/
          v39 = 20; /*0x6a90db*/
          do /*0x6a90e8*/
          {
            v40 = *v38++; /*0x6a90e0*/
            v37 += v40; /*0x6a90e5*/
            --v39; /*0x6a90e7*/
          }
          while ( v39 ); /*0x6a90e8*/
          v41 = 20; /*0x6a90f0*/
          v42 = (_DWORD *)(v35 + 21560); /*0x6a90f5*/
          do /*0x6a90fd*/
          {
            v37 += *v42++; /*0x6a90f7*/
            --v41; /*0x6a90fc*/
          }
          while ( v41 ); /*0x6a90fd*/
          if ( *(v34 - 32) != v37 /*0x6a912b*/
            || *(v34 - 24) != *(_DWORD *)(v35 + 744)
                            + *(_DWORD *)(v35 + 752)
                            + *(_DWORD *)(v35 + 756)
                            + *(_DWORD *)(v35 + 760) )
          {
            goto LABEL_97; /*0x6a912b*/
          }
          v43 = (*(int (__stdcall **)(int))(*(_DWORD *)(v35 + 36) + 24))(v35 + 36); /*0x6a9134*/
          if ( v43 < 0 ) /*0x6a9139*/
            v43 = 0; /*0x6a913b*/
          if ( *(v34 - 16) != v43
            || (v35 != HouseClass_Observer
              ? (!*(_BYTE *)(v35 + 501)
               ? (v44 = *((_DWORD *)dword_B054D4 + *(_DWORD *)(v35 + 90196)))
               : (v44 = FindBuildingAnimByName(aGrey, 1)))
              : (v44 = FindBuildingAnimByName(g_INI_Key_LightGrey, 1)),
                *(v34 - 8) != v44) )
          {
LABEL_97:
            v57 = 1; /*0x6a918e*/
            v45 = 0; /*0x6a9193*/
            v46 = (int *)(v35 + 21476); /*0x6a9195*/
            v47 = 20; /*0x6a9197*/
            do /*0x6a91a4*/
            {
              v48 = *v46++; /*0x6a919c*/
              v45 += v48; /*0x6a91a1*/
              --v47; /*0x6a91a3*/
            }
            while ( v47 ); /*0x6a91a4*/
            v49 = (int *)(v35 + 21560); /*0x6a91a6*/
            v50 = 20; /*0x6a91a8*/
            do /*0x6a91b5*/
            {
              v51 = *v49++; /*0x6a91ad*/
              v45 += v51; /*0x6a91b2*/
              --v50; /*0x6a91b4*/
            }
            while ( v50 ); /*0x6a91b5*/
            *(v34 - 32) = v45; /*0x6a91b7*/
            *(v34 - 24) = *(_DWORD *)(v35 + 744) /*0x6a91d8*/
                        + *(_DWORD *)(v35 + 752)
                        + *(_DWORD *)(v35 + 756)
                        + *(_DWORD *)(v35 + 760);
            v52 = (*(int (__stdcall **)(int))(*(_DWORD *)(v35 + 36) + 24))(v35 + 36); /*0x6a91e2*/
            if ( v52 < 0 ) /*0x6a91e7*/
              v52 = 0; /*0x6a91e9*/
            *(v34 - 16) = v52; /*0x6a91eb*/
            if ( v35 == HouseClass_Observer ) /*0x6a91f5*/
            {
              v53 = FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x6a9201*/
            }
            else if ( *(_BYTE *)(v35 + 501) ) /*0x6a9208*/
            {
              v53 = FindBuildingAnimByName(aGrey, 1); /*0x6a921c*/
            }
            else
            {
              v53 = *((_DWORD *)dword_B054D4 + *(_DWORD *)(v35 + 90196)); /*0x6a922f*/
            }
            *(v34 - 8) = v53; /*0x6a9232*/
          }
        }
        ++v34; /*0x6a9240*/
        ++v59; /*0x6a9245*/
      }
      while ( v59 < dword_884CF8 );
    }
    byte_884CF4 = 0; /*0x6a9251*/
  }
  result = v57; /*0x6a9258*/
  if ( v57 ) /*0x6a925e*/
  {
    byte_884B8E = 1; /*0x6a926b*/
    byte_880D68[3988 * dword_884B84] = 1; /*0x6a9283*/
    MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x6a928b*/
    this->q03C = 1; /*0x6a929a*/
    MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x6a929e*/
    g_CameoRenderFlag = 1; /*0x6a92a7*/
    g_TooltipActive = 1; /*0x6a92ae*/
    return v57; /*0x6a92a3*/
  }
  return result; /*0x6a92b5*/
}



// ==== 0x006A92E0  ObjectClass::GetSidebarTooltip  this=ObjectClass  sig=csp ====
wchar_t *__thiscall ObjectClass::GetSidebarTooltip(ObjectClass *this, int a2)
{
  int v2; // eax
  int v3; // edx
  char *v4; // eax
  int v5; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // edx
  wchar_t *StringCSF; // eax
  wchar_t *v11; // eax
  int v12; // eax
  wchar_t *v13; // ecx
  const wchar_t *v14; // [esp-8h] [ebp-Ch]
  const wchar_t *v15; // [esp-4h] [ebp-8h]
  int v16; // [esp-4h] [ebp-8h]

  v2 = a2 + 2 * this->ambientSoundController[2]; /*0x6a92e8*/
  if ( !byte_A8E9A0 ) /*0x6a92f3*/
    return 0; /*0x6a92f3*/
  v3 = this->customSound_controller[1]; /*0x6a92f9*/
  if ( v2 >= v3 || v3 >= 75 ) /*0x6a9307*/
    return 0; /*0x6a9307*/
  v4 = (char *)this + 52 * v2; /*0x6a9313*/
  v5 = *((_DWORD *)v4 + 23); /*0x6a9316*/
  if ( v5 == 31 ) /*0x6a931c*/
    return *(wchar_t **)(*((_DWORD *)dword_A8E334 + *((_DWORD *)v4 + 22)) + 96); /*0x6a932e*/
  v7 = (_DWORD *)TechnoTypeClass::GetByTypeAndIndex(v5, *((_DWORD *)v4 + 22)); /*0x6a9334*/
  v8 = v7; /*0x6a9339*/
  if ( !v7 ) /*0x6a933d*/
    return 0; /*0x6a93e2*/
  v9 = *v7; /*0x6a9348*/
  if ( byte_884B8C ) /*0x6a9354*/
  {
    v15 = (const wchar_t *)(*(int (__thiscall **)(_DWORD *, Object *))(v9 + 132))(v7, dword_A83D4C); /*0x6a935c*/
    StringCSF = GetStringCSF((wchar_t *)stru_83FA64.Type, 0, g_Str_File_Sidebar_CPP, 3180); /*0x6a936e*/
    swprintf(&SidebarClass_TooltipBuffer, (const size_t)StringCSF, v15); /*0x6a9379*/
  }
  else
  {
    v16 = (*(int (__thiscall **)(_DWORD *, Object *))(v9 + 132))(v7, dword_A83D4C); /*0x6a938c*/
    v14 = (const wchar_t *)v8[24]; /*0x6a938d*/
    v11 = GetStringCSF((wchar_t *)&stru_83FA64.RussianVoice[3], 0, g_Str_File_Sidebar_CPP, 3182); /*0x6a939f*/
    swprintf(&SidebarClass_TooltipBuffer, (const size_t)v11, v14, v16); /*0x6a93aa*/
  }
  v12 = wcslen(&SidebarClass_TooltipBuffer); /*0x6a93b7*/
  if ( v12 > 0 ) /*0x6a93c1*/
  {
    v13 = &SidebarClass_TooltipBuffer; /*0x6a93c3*/
    do /*0x6a93d7*/
    {
      if ( *v13 == 32 ) /*0x6a93cc*/
        *v13 = 10; /*0x6a93ce*/
      ++v13; /*0x6a93d3*/
      --v12; /*0x6a93d6*/
    }
    while ( v12 ); /*0x6a93d7*/
  }
  return &SidebarClass_TooltipBuffer; /*0x6a9327*/
}



// ==== 0x006A93F0  ObjectClass::method_6A93F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6A93F0(ObjectClass *this)
{
  int v2; // eax
  int v3; // esi
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ebp

  LOBYTE(this->?) = 1; /*0x6a93f8*/
  v2 = 26; /*0x6a9408*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a9400*/
    v2 = 18; /*0x6a940f*/
  v3 = 0; /*0x6a942f*/
  v4 = g_DSurface_ViewBounds - g_SidebarBounds - v2 + g_DSurface_SidebarBounds - 7; /*0x6a9431*/
  v5 = (unsigned int)((unsigned __int64)(1374389535LL * v4) >> 32) >> 31; /*0x6a943c*/
  v6 = 2 * (v4 / 50); /*0x6a9443*/
  if ( v6 > 0 ) /*0x6a9447*/
  {
    do /*0x6a9494*/
    {
      Hash::Reset((LinkClass *)(56 * (v3 + 60 * (int)this->attachedBomb) + 11566720)); /*0x6a9465*/
      LOBYTE(v5) = Hash::InsertOrdered( /*0x6a948c*/
                     (GScreenClass *)&stru_87F5F0.__pad_58[416],
                     56 * (v3 + 60 * (int)this->attachedBomb) + 11566720);
      ++v3; /*0x6a9491*/
    }
    while ( v3 < v6 ); /*0x6a9494*/
  }
  g_CameoRenderFlag = 1; /*0x6a9498*/
  return v5; /*0x6a9496*/
}



// ==== 0x006A94F0  ObjectClass::SmallFunc_6A94F0  this=ObjectClass  sig=csp ====
int __thiscall SmallFunc_6A94F0(ObjectClass *this, int a2)
{
  int result; // eax
  ObjectClass *v4; // ecx
  int v5; // ebx

  result = 0; /*0x6a94f9*/
  v4 = (ObjectClass *)this->customSound_controller[13 * a2 + 5]; /*0x6a9501*/
  if ( v4 ) /*0x6a950a*/
    result = ObjectClass::GetMember09(v4); /*0x6a950c*/
  if ( *((_DWORD *)&this->bombVisible + 12 * a2 + a2) == 1 ) /*0x6a951d*/
  {
    v5 = *(_DWORD *)&this->alignmentPadding69[52 * a2 + 3]; /*0x6a951f*/
    if ( v5 > result ) /*0x6a9524*/
      return (v5 + result) / 2; /*0x6a952b*/
  }
  return result; /*0x6a952d*/
}



// ==== 0x006A9540  Sidebar::UpdateProductionDisplay  this=Sidebar  sig=csp ====
char __userpurge Sidebar_UpdateProductionDisplay@<al>(int a1@<ecx>, wchar_t a2@<di>, char a3)
{
  char result; // al
  int v5; // eax
  #375 *v6; // ebx
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // ebp
  int v15; // esi
  char v16; // bl
  int v17; // ebp
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  _DWORD *v23; // ebx
  char ShouldDisableCameo; // al
  int Member09; // eax
  _DWORD *v26; // ecx
  int v27; // ecx
  _DWORD *v28; // edi
  int v29; // eax
  int v30; // ecx
  unsigned int v31; // edi
  int v32; // eax
  int v33; // edx
  int v34; // edi
  int v35; // eax
  int v36; // eax
  const wchar_t *v37; // ebx
  int v38; // ecx
  _DWORD *BoundingRect; // eax
  int *v40; // eax
  wchar_t *String; // ebp
  int *v42; // eax
  int *v43; // eax
  int v44; // ebp
  int v45; // ebx
  int v46; // edi
  int v47; // esi
  int v48; // eax
  int v49; // ... [31824 chars total]



// ==== 0x006AA600  SidebarClass::UpdateProduction  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::UpdateProduction(int this)
{
  int v2; // eax
  int v3; // ebx
  int *v4; // eax
  _DWORD *v5; // eax
  SidebarClass *v6; // esi
  int v7; // edx
  int v8; // eax
  int *v9; // esi
  unsigned __int8 *v10; // ebx
  int v11; // eax
  char *v12; // eax
  int v13; // eax
  char *v14; // eax
  char *v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // ecx
  int v20; // eax
  bool v21; // cc
  int v22; // esi
  int *v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  char *v28; // ecx
  int v29; // ecx
  int v30; // edx
  char *v31; // esi
  _DWORD *v32; // ecx
  int v33; // esi
  int v34; // kr04_4
  int v35; // eax
  int v36; // edx
  char v38; // [esp-8h] [ebp-15Ch]
  int v39; // [esp+10h] [ebp-144h]
  char *v40; // [esp+10h] [ebp-144h]
  int *v41; // [esp+10h] [ebp-144h]
  char v42; // [esp+16h] [ebp-13Eh]
  char v43; // [esp+17h] [ebp-13Dh]
  int *v44; // [esp+18h] [ebp-13Ch]
  _DWORD *v45; // [esp+1Ch] [ebp-138h]
  char *v46; // [esp+1Ch] [ebp-138h]
  char *Src; // [esp+20h] [ebp-134h]
  int v48; // [esp+24h] [ebp-130h]
  int v49; // [esp+28h] [ebp-12Ch]
  _DWORD *v50; // [esp+2Ch] [ebp-128h]
  int v51; // [esp+30h] [ebp-124h]
  _DWORD v52[16]; // [esp+34h] [ebp-120h] BYREF
  char v53[112]; // [esp+74h] [ebp-E0h] BYREF
  char v54[112]; // [esp+E4h] [ebp-70h] BYREF

  if ( stru_A8EB00.?[391] || !*(_DWORD *)(this + 84) ) /*0x6aa617*/
    return 0; /*0x6aaca5*/
  v43 = 0; /*0x6aa629*/
  v2 = 26; /*0x6aa634*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6aa62e*/
    v2 = 18; /*0x6aa63d*/
  v3 = 2 * ((g_DSurface_ViewBounds - v2 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50); /*0x6aa670*/
  v51 = v3; /*0x6aa672*/
  v4 = (int *)__2_YAPAXI_Z(104 * ((g_DSurface_ViewBounds - v2 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50) + 4); /*0x6aa684*/
  if ( v4 ) /*0x6aa68e*/
  {
    *v4 = v3; /*0x6aa690*/
    v5 = v4 + 1; /*0x6aa695*/
    v45 = v5; /*0x6aa69a*/
    if ( v3 - 1 >= 0 ) /*0x6aa69e*/
    {
      v6 = (SidebarClass *)(v5 + 5); /*0x6aa6a1*/
      v39 = v3; /*0x6aa6a4*/
      do /*0x6aa6bb*/
      {
        SidebarClass::initButtons(v6); /*0x6aa6aa*/
        v6 = (SidebarClass *)((char *)v6 + 52); /*0x6aa6b3*/
        --v39; /*0x6aa6b7*/
      }
      while ( v39 ); /*0x6aa6bb*/
      v5 = v45; /*0x6aa6bd*/
    }
    v46 = (char *)v5; /*0x6aa6c1*/
  }
  else
  {
    v46 = 0; /*0x6aa6c7*/
  }
  v7 = 0; /*0x6aa6cb*/
  if ( v3 > 0 ) /*0x6aa6cf*/
  {
    v40 = v46; /*0x6aa6d5*/
    do /*0x6aa70f*/
    {
      v8 = v7 + 2 * *(_DWORD *)(this + 68); /*0x6aa6df*/
      if ( v8 < *(_DWORD *)(this + 84) ) /*0x6aa6e4*/
      {
        v3 = v51; /*0x6aa6ed*/
        qmemcpy(v40, (const void *)(this + 52 * v8 + 88), 0x34u); /*0x6aa6fd*/
      }
      ++v7; /*0x6aa705*/
      v40 += 52; /*0x6aa70b*/
    }
    while ( v7 < v3 ); /*0x6aa70f*/
  }
  v42 = 0; /*0x6aa714*/
  v49 = 0; /*0x6aa71b*/
  if ( *(int *)(this + 84) > 0 ) /*0x6aa71f*/
  {
    v9 = (int *)(this + 88); /*0x6aa725*/
    v48 = 52; /*0x6aa734*/
    v41 = (int *)(this + 88); /*0x6aa73c*/
    Src = (char *)(this + 140); /*0x6aa740*/
    v44 = (int *)(this + 92); /*0x6aa744*/
    v50 = (_DWORD *)(this + 100); /*0x6aa748*/
    while ( 1 ) /*0x6aa759*/
    {
      v10 = (unsigned __int8 *)TechnoTypeClass::GetByTypeAndIndex(*v44, *v9); /*0x6aa759*/
      if ( v10 ) /*0x6aa75d*/
      {
        v11 = (*(int (__thiscall **)(unsigned __int8 *, int, _DWORD, _DWORD, Object *))(*(_DWORD *)v10 + 148))( /*0x6aa76d*/
                v10,
                1,
                0,
                0,
                dword_A83D4C);
        if ( !v11 || !HouseClass::CanBuild(*(HouseClass **)(v11 + 540), (int)v10, 0, 1) ) /*0x6aa781*/
          goto LABEL_25; /*0x6aa788*/
      }
      else if ( (unsigned int)*v9 >= *(_DWORD *)&dword_A83D4C->__pad_140[292] /*0x6aa7ab*/
             || !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)&dword_A83D4C->__pad_140[280] + 4 * *v9) + 109) )
      {
LABEL_25:
        if ( *v50 ) /*0x6aa7ba*/
        {
          v12 = EventClass::AddEventEx(v53, (int)dword_A83D4C->Object_field_0x30, 0x10u, *v44, *v9, v10[3278]); /*0x6aa7e7*/
          if ( (int)stru_A80220.lineTrailer < 128 ) /*0x6aa7f6*/
          {
            qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v12, 0x6Fu); /*0x6aa812*/
            v9 = v41; /*0x6aa823*/
            dword_A83A54[dword_A802D0] = timeGetTime(); /*0x6aa827*/
            dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x6aa83e*/
            ++stru_A80220.lineTrailer; /*0x6aa844*/
          }
          if ( *v44 == 7 || *v44 == 6 ) /*0x6aa859*/
          {
            *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x6aa861*/
            *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x6aa867*/
            *(_DWORD *)&stru_87F5F0.__pad_E12[1426] = -1; /*0x6aa86d*/
            Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x6aa877*/
          }
        }
        if ( v10 ) /*0x6aa87e*/
        {
          v38 = v10[3278]; /*0x6aa88d*/
          v13 = (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)v10 + 44))(v10); /*0x6aa890*/
          if ( HouseClass::GetBuildLimit((HouseClass *)dword_A83D4C, v13, v38, 0) ) /*0x6aa89a*/
          {
            v14 = EventClass::AddEventEx(v54, (int)dword_A83D4C->Object_field_0x30, 0x2Eu, *v44, *v9, v10[3278]); /*0x6aa8cd*/
            if ( (int)stru_A80220.lineTrailer < 128 ) /*0x6aa8dc*/
            {
              qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v14, 0x6Fu); /*0x6aa8f8*/
              v9 = v41; /*0x6aa909*/
              dword_A83A54[dword_A802D0] = timeGetTime(); /*0x6aa90d*/
              dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x6aa924*/
              ++stru_A80220.lineTrailer; /*0x6aa92a*/
            }
          }
        }
        if ( v51 > 0 ) /*0x6aa937*/
        {
          v15 = v46; /*0x6aa939*/
          v16 = v51; /*0x6aa93d*/
          do /*0x6aa99b*/
          {
            if ( *(_DWORD *)v15 == *v9 && *((_DWORD *)v15 + 1) == v9[1] ) /*0x6aa94f*/
            {
              memset(v52, 0, 16); /*0x6aa957*/
              v52[5] = 0; /*0x6aa967*/
              v52[7] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6aa96b*/
              v52[9] = 0; /*0x6aa96f*/
              v52[10] = 0; /*0x6aa973*/
              LOBYTE(v52[6]) = 0; /*0x6aa982*/
              v52[11] = 1; /*0x6aa987*/
              qmemcpy(v15, v52, 0x34u); /*0x6aa98f*/
              v9 = v41; /*0x6aa991*/
            }
            v15 += 52; /*0x6aa997*/
            --v16; /*0x6aa99a*/
          }
          while ( v16 ); /*0x6aa99b*/
        }
        v17 = *(_DWORD *)(this + 84); /*0x6aa99d*/
        if ( v17 > 1 && v49 < v17 - 1 ) /*0x6aa9ae*/
          memcpy(v9, Src, 52 * v17 - v48); /*0x6aa9c6*/
        v42 = 1; /*0x6aa9d1*/
        v18 = *(_DWORD *)(this + 84) - 1; /*0x6aa9d6*/
        v43 = 1; /*0x6aa9d7*/
        v19 = (_DWORD *)(this + 52 * v18); /*0x6aa9e2*/
        v19[25] = 0; /*0x6aa9ea*/
        v19[22] = 0; /*0x6aa9ed*/
        v19[23] = 0; /*0x6aa9f4*/
        v19[24] = 0; /*0x6aa9f7*/
        *(_DWORD *)(this + 4 * (v18 + 4 * (3 * v18 + 6) + 2)) = 0; /*0x6aa9fd*/
        v19[27] = 0; /*0x6aaa01*/
        v19[29] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6aaa0b*/
        v20 = v52[14]; /*0x6aaa0d*/
        v19[32] = 0; /*0x6aaa11*/
        v19[30] = v20; /*0x6aaa17*/
        v19[31] = 0; /*0x6aaa1a*/
        v19[34] = 0; /*0x6aaa25*/
        --*(_DWORD *)(this + 84); /*0x6aaa37*/
        --v49; /*0x6aaa3e*/
        v48 -= 52; /*0x6aaa46*/
        *(_BYTE *)(this + 60) = 1; /*0x6aaa54*/
        v50 -= 13; /*0x6aaa58*/
        v44 -= 13; /*0x6aaa5c*/
        Src -= 52; /*0x6aaa60*/
        v9 -= 13; /*0x6aaa64*/
      }
      v48 += 52; /*0x6aaa6d*/
      v50 += 13; /*0x6aaa85*/
      v9 += 13; /*0x6aaa91*/
      v21 = ++v49 < *(_DWORD *)(this + 84); /*0x6aaa97*/
      v44 += 13; /*0x6aaa9d*/
      Src += 52; /*0x6aaaa1*/
      v41 = v9; /*0x6aaaa5*/
      if ( !v21 ) /*0x6aaaa9*/
      {
        v3 = v51; /*0x6aaaaf*/
        break; /*0x6aaaaf*/
      }
    }
  }
  if ( dword_880D80[997 * *(_DWORD *)(this + 56)] <= 0 ) /*0x6aaaca*/
  {
    DialogControl::Show((GadgetClass *)(&stru_B07C48 + 8 * *(_DWORD *)(this + 56))); /*0x6aaae7*/
    v22 = 0; /*0x6aaaec*/
    v23 = dword_880D80; /*0x6aaaee*/
    v24 = 0; /*0x6aaaf3*/
    while ( *v23 <= 0 ) /*0x6aaaf7*/
    {
      v24 += 3988; /*0x6aaaf9*/
      ++v22; /*0x6aaafe*/
      v23 += 997; /*0x6aaaff*/
      if ( v24 >= 15952 ) /*0x6aab0a*/
        goto LABEL_54; /*0x6aab0a*/
    }
    if ( v22 == -1 ) /*0x6aab11*/
    {
LABEL_54:
      Tactical::UpdateUIVisibility((Tactical *)&stru_87F5F0.__pad_58[416]); /*0x6aab13*/
      if ( dword_B0B478 ) /*0x6aab24*/
      {
        dword_884B80 = -1; /*0x6aab2a*/
        dword_884B7C = *((__int16 *)dword_B0B478 + 3); /*0x6aab38*/
      }
      goto LABEL_58; /*0x6aab3e*/
    }
    if ( v22 != dword_884B84 ) /*0x6aab4a*/
    {
      GadgetClass::Hide((GadgetClass *)(&stru_B07C48 + 8 * dword_884B84)); /*0x6aab58*/
      v25 = 3988 * dword_884B84 + 8916268; /*0x6aab6f*/
      *(_BYTE *)(v25 + 28) = 0; /*0x6aab76*/
      SidebarClass::sortCameoList((SidebarClass *)v25); /*0x6aab7a*/
      dword_884B84 = v22; /*0x6aab82*/
      GadgetClass::Show((GadgetClass *)(&stru_B07C48 + 8 * v22)); /*0x6aab91*/
      v26 = 3988 * dword_884B84 + 8916268; /*0x6aaba8*/
      *(_BYTE *)(v26 + 28) = 1; /*0x6aabaf*/
      SidebarClass::RefreshCameoGrid((SidebarClass *)v26); /*0x6aabb3*/
      Tactical::UpdateUIVisibility((Tactical *)&stru_87F5F0.__pad_58[416]); /*0x6aabbd*/
      g_CameoRenderFlag = 1; /*0x6aabc2*/
    }
  }
  else
  {
    Tactical::UpdateUIVisibility((Tactical *)&stru_87F5F0.__pad_58[416]); /*0x6aaad1*/
  }
LABEL_58:
  if ( v43 ) /*0x6aabcf*/
  {
    v27 = 0; /*0x6aabd5*/
    if ( v3 <= 0 ) /*0x6aabd9*/
      goto LABEL_79; /*0x6aabd9*/
    v28 = v46; /*0x6aabe3*/
    while ( !*(_DWORD *)v28 && !*((_DWORD *)v28 + 1) ) /*0x6aabec*/
    {
      ++v27; /*0x6aabee*/
      v28 += 52; /*0x6aabef*/
      if ( v27 >= v3 ) /*0x6aabf4*/
        goto LABEL_79; /*0x6aabf4*/
    }
    v29 = *(_DWORD *)(this + 84); /*0x6aabf8*/
    if ( v29 && (v30 = 0, v29 > 0) ) /*0x6aac03*/
    {
      v31 = &v46[52 * v27]; /*0x6aac0b*/
      v32 = (_DWORD *)(this + 88); /*0x6aac14*/
      while ( *v32 != *(_DWORD *)v31 || v32[1] != *((_DWORD *)v31 + 1) ) /*0x6aac25*/
      {
        ++v30; /*0x6aac2a*/
        v32 += 13; /*0x6aac2b*/
        if ( v30 >= *(_DWORD *)(this + 84) ) /*0x6aac30*/
          goto LABEL_79; /*0x6aac30*/
      }
      v33 = (v27 - v30) / -2 + *(_DWORD *)(this + 68); /*0x6aac44*/
      v34 = *(_DWORD *)(this + 84) - v51; /*0x6aac4e*/
      *(_DWORD *)(this + 68) = v33; /*0x6aac50*/
      v35 = v34 / 2; /*0x6aac53*/
      v36 = v33; /*0x6aac57*/
      if ( v33 >= v34 / 2 ) /*0x6aac59*/
        v36 = v34 / 2; /*0x6aac5b*/
      if ( v36 >= 0 ) /*0x6aac5f*/
      {
        if ( v33 < v35 ) /*0x6aac6a*/
          v35 = v33; /*0x6aac6c*/
        *(_DWORD *)(this + 68) = v35; /*0x6aac6e*/
      }
      else
      {
        *(_DWORD *)(this + 68) = 0; /*0x6aac63*/
      }
    }
    else
    {
LABEL_79:
      *(_DWORD *)(this + 68) = 0; /*0x6aac73*/
    }
    g_CameoRenderFlag = 1; /*0x6aac76*/
  }
  if ( v46 ) /*0x6aac85*/
    __3_YAXPAX_Z(v46 - 4); /*0x6aac8f*/
  return v42; /*0x6aac9b*/
}



// ==== 0x006AACE0  ObjectClass::method_6AACE0  this=ObjectClass  sig=csp ====
int __thiscall sub_6AACE0(_DWORD *this, int a2, int a3)
{
  this->fallRate = a2; /*0x6aace8*/
  this->nextObject = a3; /*0x6aaceb*/
  return a2; /*0x6aacee*/
}



// ==== 0x006AAD00  SelectClass_StripClass_SidebarClass::ProcessInput  this=SelectClass@StripClass@SidebarClass  sig=csp ====
int __thiscall SidebarClass::ProcessInput(SelectClass_StripClass_SidebarClass *this, int a2, _DWORD *a3, char a4)
{
  MapClass *v4; // esi
  int v6; // eax
  int v8; // esi
  int v9; // ebx
  int v10; // ebp
  ObjectClass *v11; // edx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  char *v15; // eax
  char *v16; // eax
  ControlClass *v17; // edx
  _DWORD *v18; // eax
  char *v19; // eax
  FactoryClass *BuildLimit; // eax
  char *v21; // eax
  _DWORD *Type; // esi
  int v23; // edi
  int v24; // eax
  char *v25; // eax
  int v26; // eax
  VoxClass *v27; // ecx
  ControlClass *v28; // edi
  int v29; // eax
  char *v30; // eax
  int Member09; // eax
  int v32; // esi
  int ControlClass_field_0x0C; // ebp
  ObjectClass *v34; // ecx
  int v35; // ebp
  ObjectClass *v36; // ecx
  int BuildTimeFrames; // eax
  int v38; // edx
  _DWORD *v39; // esi
  int v40; // esi
  int v41; // eax
  char v42; // cl
  char *v43; // eax
  ControlClass *v44; // esi
  _BYTE *v45; // esi
  wchar_t *v46;... [22756 chars total]



// ==== 0x006AB990  SelectClass_StripClass_SidebarClass::select  this=SelectClass@StripClass@SidebarClass  sig=csp ====
int __thiscall SidebarClass::select(SelectClass_StripClass_SidebarClass *this)
{
  int v2; // eax
  int result; // eax

  SidebarClass::updateStripVisibility(*(SidebarClass **)&stru_88732C.__pad_1C[32]); /*0x6ab99a*/
  SidebarClass::initializeStrip(*(SidebarClass **)&stru_88732C.__pad_1C[32], 0); /*0x6ab9a7*/
  v2 = *(_DWORD *)&this->__pad_4[40]; /*0x6ab9ac*/
  LOBYTE(this->field_34) = 1; /*0x6ab9b1*/
  *(_BYTE *)(v2 + 60) = 1; /*0x6ab9bb*/
  result = MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x6ab9be*/
  g_CameoRenderFlag = 1; /*0x6ab9c3*/
  g_TooltipActive = 1; /*0x6ab9c9*/
  return result; /*0x6ab9cf*/
}



// ==== 0x006AB9E0  SelectClass_StripClass_SidebarClass::deselect  this=SelectClass@StripClass@SidebarClass  sig=csp ====
int __thiscall SidebarClass::deselect(SelectClass_StripClass_SidebarClass *this)
{
  int v2; // eax
  int result; // eax

  SidebarClass::updateStripPosition(*(SidebarClass **)&stru_88732C.__pad_1C[32]); /*0x6ab9e9*/
  v2 = *(_DWORD *)&this->__pad_4[40]; /*0x6ab9ee*/
  LOBYTE(this->field_34) = 0; /*0x6ab9f1*/
  *(_BYTE *)(v2 + 60) = 1; /*0x6ab9fc*/
  result = MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x6aba00*/
  g_CameoRenderFlag = 1; /*0x6aba05*/
  g_TooltipActive = 1; /*0x6aba0c*/
  return result; /*0x6aba13*/
}



// ==== 0x006ABA40  SBGadgetClass@SidebarClass::checkHealth  this=SBGadgetClass@SidebarClass  sig=csp ====
int __stdcall ObjectClass::sub_6ABA40(int a1, int a2, int a3)
{
  Mouse::SetCursor((int)&dword_87F7E8, 0, 0); /*0x6aba49*/
  return 1; /*0x6aba53*/
}



// ==== 0x006ABA60  ObjectClass::method_6ABA60  this=ObjectClass  sig=csp ====
char __thiscall sub_6ABA60(ObjectClass *this, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  int *i; // edx

  v4 = this->customSound_controller[1]; /*0x6aba62*/
  v5 = 0; /*0x6aba65*/
  if ( v4 <= 0 ) /*0x6aba6a*/
    return 0; /*0x6aba88*/
  for ( i = &this->customSound_controller[2]; i[1] != a3 || *i != a4; i += 13 ) /*0x6aba74*/
  {
    if ( ++v5 >= v4 ) /*0x6aba86*/
      return 0; /*0x6aba86*/
  }
  this->customSound_controller[13 * v5 + 5] = a2; /*0x6aba9e*/
  BYTE1(this->ambientSoundController[0]) = 1; /*0x6abaa2*/
  LOBYTE(this->ambientSoundController[0]) = 1; /*0x6abaa5*/
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x6abaad*/
  return 1; /*0x6aba88*/
}



// ==== 0x006ABAC0  PlayerClass::HasPlayers  this=PlayerClass  sig=csp ====
int __thiscall PlayerClass::HasPlayers(PlayerClass *this)
{
  return *((_DWORD *)this + 21) > 0; /*0x6abaca*/
}



// ==== 0x006ABAD0  HouseClass::RouteFactoryRemoval  this=HouseClass  sig=csp ====
char __thiscall HouseClass::RouteFactoryRemoval(HouseClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax

  switch ( a2 ) /*0x6abadf*/
  {
    case 15: /*0x6abadf*/
    case 16: /*0x6abadf*/
      v5 = 2; /*0x6abb36*/
      break;
    case 1: /*0x6abadf*/
    case 40: /*0x6abadf*/
    case 2: /*0x6abadf*/
    case 3: /*0x6abadf*/
      v5 = 3; /*0x6abb2f*/
      break;
    case 6: /*0x6abadf*/
    case 7: /*0x6abadf*/
      v5 = GetHouseTechLevel(a2, a3) == 5; /*0x6abb2b*/
      break;
    case 57: /*0x6abadf*/
    case 32: /*0x6abadf*/
    case 31: /*0x6abadf*/
      v5 = 1; /*0x6abb13*/
      break;
    default:
      v5 = -1; /*0x6abb0e*/
      break;
  }
  return HouseClass::RemoveFromProductionQueue((int)&this->builtAircraftTypes[997 * v5 + 131], a4); /*0x6abb59*/
}



// ==== 0x006ABB60  HouseClass::RemoveFromProductionQueue  this=HouseClass  sig=csp ====
char __thiscall sub_6ABB60(int this, _DWORD *a2)
{
  int v3; // esi
  int Type; // eax
  int v5; // eax
  char v6; // bl
  int v7; // ebp
  _DWORD *v8; // esi
  char v11; // [esp+18h] [ebp+4h]

  v3 = this; /*0x6abb69*/
  if ( a2 ) /*0x6abb71*/
  {
    if ( AbstractClass::GetType(a2) ) /*0x6abb75*/
    {
      Type = AbstractClass::GetType(a2); /*0x6abb80*/
      if ( Type ) /*0x6abb87*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)Type + 44))(Type) == 6 ) /*0x6abb93*/
        {
          v5 = AbstractClass::GetType(a2); /*0x6abb97*/
          if ( v5 ) /*0x6abba0*/
            v5 &= -((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6); /*0x6abbb2*/
          Selection::ClearGlobals((void *)v5); /*0x6abbb6*/
          v3 = this; /*0x6abbbb*/
        }
      }
    }
  }
  v6 = 0; /*0x6abbc2*/
  v7 = 0; /*0x6abbc4*/
  v11 = 1; /*0x6abbc6*/
  if ( *(int *)(v3 + 84) <= 0 ) /*0x6abbcd*/
    goto LABEL_19; /*0x6abbcd*/
  v8 = (_DWORD *)(v3 + 100); /*0x6abbcf*/
  do /*0x6abc04*/
  {
    if ( (_DWORD *)*v8 == a2 ) /*0x6abbd6*/
    {
      BuildingClass::AbandonProduction((int)a2); /*0x6abbda*/
      *v8 = 0; /*0x6abbdf*/
      v6 = 1; /*0x6abbe5*/
      v8[1] = 0; /*0x6abbe7*/
    }
    else if ( *v8 ) /*0x6abbd2*/
    {
      v11 = 0; /*0x6abbf4*/
    }
    ++v7; /*0x6abbfd*/
    v8 += 13; /*0x6abbfe*/
  }
  while ( v7 < *(_DWORD *)(this + 84) ); /*0x6abc04*/
  if ( v6 ) /*0x6abc08*/
  {
    *(_BYTE *)(this + 60) = 1; /*0x6abc13*/
    MapClass::MarkForRedraw(&dword_87F7E8, 0); /*0x6abc17*/
    g_CameoRenderFlag = 1; /*0x6abc1c*/
  }
  if ( v11 ) /*0x6abc29*/
  {
    v3 = this; /*0x6abc2b*/
LABEL_19:
    *(_BYTE *)(v3 + 61) = 0; /*0x6abc2f*/
  }
  return v6; /*0x6abc33*/
}



// ==== 0x006ABC40  Network_Process_6ABC40  this=-  sig=ida-proto ====
int sub_6ABC40()
{
  int result; // eax

  result = dword_A8B238[0]; /*0x6abc40*/
  if ( dword_A8B238[0] ) /*0x6abc47*/
    dword_A8EDA0 = 8; /*0x6abc49*/
  return result; /*0x6abc53*/
}



// ==== 0x006ABC60  HouseClass::GetStatus  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetStatus(HouseClass *this, int a2)
{
  int v2; // edx

  if ( this == (HouseClass *)15 || this == (HouseClass *)16 ) /*0x6abc68*/
    return 2; /*0x6abcbf*/
  if ( this == (HouseClass *)1 || this == (HouseClass *)40 || this == (HouseClass *)2 || this == (HouseClass *)3 ) /*0x6abc7c*/
    return 3; /*0x6abcb7*/
  if ( this == (HouseClass *)6 || this == (HouseClass *)7 ) /*0x6abc86*/
    return GetHouseTechLevel((int)this, v2) == 5; /*0x6abcb2*/
  if ( this == (HouseClass *)57 || this == (HouseClass *)32 || this == (HouseClass *)31 ) /*0x6abc95*/
    return 1; /*0x6abc9d*/
  return -1; /*0x6abc9a*/
}



// ==== 0x006ABCD0  globalHelper_0ABCD0  this=-  sig=csp ====
int __fastcall sub_6ABCD0(int a1, int a2, int a3)
{
  switch ( a1 ) /*0x6abcd3*/
  {
    case 16: /*0x6abcd3*/
      return 2; /*0x6abcd5*/
    case 40: /*0x6abcd3*/
    case 3: /*0x6abcd3*/
      return 3; /*0x6abcfd*/
    case 7: /*0x6abcd3*/
      return a2 == 5; /*0x6abcf1*/
  }
  return -1; /*0x6abcda*/
}



// ==== 0x006ABD30  SidebarClass::LoadResources  this=SidebarClass  sig=csp ====
char SidebarClass::LoadResources(SidebarClass *this)
{
  PowerClass *v1; // ecx
  int v2; // esi
  int v3; // eax
  GadgetClass *v4; // esi
  int v5; // edi
  int v6; // eax
  LinkClass *v7; // esi
  int v8; // ebx
  int v9; // ebp
  int i; // edi
  char result; // al
  int v12; // edi
  int *v13; // esi
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int j; // esi
  int v18; // edi
  int *v19; // esi
  int v20; // edx
  int v21; // ecx
  int v22; // edx
  int v23; // [esp-4h] [ebp-38h]
  int v24; // [esp-4h] [ebp-38h]
  LinkClass *v25; // [esp+10h] [ebp-24h]
  int v26; // [esp+14h] [ebp-20h]
  int v27; // [esp+18h] [ebp-1Ch] BYREF
  int v28; // [esp+1Ch] [ebp-18h]
  int v29; // [esp+20h] [ebp-14h]
  int v30; // [esp+24h] [ebp-10h]
  int v31; // [esp+28h] [ebp-Ch]
  wchar_t *v32; // [esp+2Ch] [ebp-8h]
  char v33; // [esp+30h] [ebp-4h]

  PowerClass::getDrain(v1); /*0x6abd39*/
  SidebarClass::CalcBounds(0); /*0x6abd42*/
  if ( !dword_B0B468 ) /*0x6abd4e*/
  {
    dword_B0B468 = SearchMIXFile(aSidegdi1Shp, 0); /*0x6abd63*/
    dword_B0B46C = SearchMIXFile(aSidegdi2Shp, 0); /*0x6abd74*/
    dword_B0B470 = SearchMIXFile(aSidegdi3Shp, 0); /*0x6abd7e*/
  }
  Rect_Point::Set(&stru_B07E58, DSurface_SidebarBounds + 16, (int)DSurface_ViewBounds.field_4); /*0x6abd98*/
  VectorClass_ptr_ConvertClass::MarkDirty(&stru_B07E58); /*0x6abda2*/
  v2 = stru_B04A10.ID + stru_B04A10.Height; /*0x6abdb2*/
  v23 = stru_B04A10.ID + stru_B04A10.Height; /*0x6abdbc*/
  if ( LOBYTE(stru_A8EB00.ObjectTypeClass[31]) ) /*0x6abdbd*/
    Rect_Point::Set(&stru_B07E58, DSurface_ViewBounds.field_0 + *(_DWORD *)DSurface_ViewBounds.__pad_8, v23); /*0x6abdce*/
  else
    Rect_Point::Set(&stru_B07E58, 0, v23); /*0x6abdd7*/
  v24 = (*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 32))(DSurface_Sidebar) - v2; /*0x6abdf2*/
  v3 = (*((int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 31))(DSurface_Sidebar); /*0x6abdf5*/
  ObjectClass::SetPositionXY(&stru_B07E58, v3, v24); /*0x6abdfe*/
  Rect_Point::Set((GadgetClass *)&stru_B0B3A0, dword_B0B4DC, dword_B0B4E0); /*0x6abe15*/
  VectorClass_ptr_ConvertClass::MarkDirty((GadgetClass *)&stru_B0B3A0); /*0x6abe1f*/
  dword_B0B3E4 = -DSurface_SidebarBounds; /*0x6abe37*/
  Rect_Point::Set((GadgetClass *)&stru_B07DF8, dword_B0B3AC + dword_B0B4E4, dword_B0B3B0); /*0x6abe4c*/
  VectorClass_ptr_ConvertClass::MarkDirty((GadgetClass *)&stru_B07DF8); /*0x6abe56*/
  v4 = (GadgetClass *)&stru_B07C48; /*0x6abe60*/
  dword_B07E3C = -DSurface_SidebarBounds; /*0x6abe67*/
  v5 = 0; /*0x6abe6c*/
  do /*0x6abea8*/
  {
    Rect_Point::Set(v4, dword_B0B4E8 + v5 * dword_B0B4F0, dword_B0B4EC); /*0x6abe88*/
    VectorClass_ptr_ConvertClass::MarkDirty(v4); /*0x6abe8f*/
    v4 = (GadgetClass *)((char *)v4 + 96); /*0x6abe99*/
    *(_DWORD *)v4[-1].__pad_0 = -DSurface_SidebarBounds; /*0x6abe9e*/
    ++v5; /*0x6abea1*/
  }
  while ( (int)v4 < (int)&dword_B07DC8 ); /*0x6abea8*/
  Rect_Point::Set((GadgetClass *)&stru_B0B328, dword_B0B508, dword_B0B50C); /*0x6abebd*/
  VectorClass_ptr_ConvertClass::MarkDirty((GadgetClass *)&stru_B0B328); /*0x6abec7*/
  dword_B0B36C = -DSurface_SidebarBounds; /*0x6abedf*/
  Rect_Point::Set((GadgetClass *)&g_SidebarFlag, dword_B0B508 + dword_B0B510, dword_B0B50C); /*0x6abef2*/
  VectorClass_ptr_ConvertClass::MarkDirty((GadgetClass *)&g_SidebarFlag); /*0x6abefc*/
  dword_B0B44C = -DSurface_SidebarBounds; /*0x6abf0f*/
  v6 = 26; /*0x6abf1d*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6abf15*/
    v6 = 18; /*0x6abf24*/
  v7 = &stru_B07E80; /*0x6abf44*/
  v25 = &stru_B07E80; /*0x6abf4d*/
  v8 = (g_DSurface_ViewBounds - v6 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50; /*0x6abf5d*/
  v26 = 2 * v8; /*0x6abf62*/
  do /*0x6abfc2*/
  {
    v9 = 0; /*0x6abf66*/
    if ( v8 > 0 ) /*0x6abf6a*/
    {
      do /*0x6abfac*/
      {
        for ( i = 0; i < 2; ++i ) /*0x6abf6c*/
        {
          (*(void (__thiscall **)(LinkClass *, int, int))(*(_DWORD *)v7->__pad_0 + 100))( /*0x6abf96*/
            v7,
            dword_B0B4F4 + i * dword_B0B4FC,
            v9 * dword_B0B500 + g_SidebarBounds + 1);
          (*(void (__thiscall **)(LinkClass *))(*(_DWORD *)v7->__pad_0 + 72))(v7); /*0x6abf9d*/
          v7 = (LinkClass *)((char *)v7 + 56); /*0x6abfa1*/
        }
        ++v9; /*0x6abfa9*/
      }
      while ( v9 < v8 ); /*0x6abfac*/
      v7 = v25; /*0x6abfae*/
    }
    v7 += 210; /*0x6abfb2*/
    v25 = v7; /*0x6abfbe*/
  }
  while ( (int)v7 < (int)&dword_B0B300 ); /*0x6abfc2*/
  result = stru_88732C.__pad_1C[32]; /*0x6abfc4*/
  if ( *(_DWORD *)&stru_88732C.__pad_1C[32] ) /*0x6abfcd*/
  {
    v33 = 0; /*0x6abfd3*/
    v12 = 203; /*0x6abfd7*/
    v13 = (int *)&unk_B07C58; /*0x6abfdc*/
    do /*0x6ac02d*/
    {
      v14 = *v13; /*0x6abfe4*/
      v15 = v13[1]; /*0x6abfe6*/
      v28 = *(v13 - 1); /*0x6abfe9*/
      v16 = v13[2]; /*0x6abfed*/
      v29 = v14; /*0x6abff0*/
      v27 = v12; /*0x6abffb*/
      v32 = 0; /*0x6abfff*/
      v30 = v15; /*0x6ac003*/
      v31 = v16; /*0x6ac007*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], v12); /*0x6ac00b*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v27); /*0x6ac01b*/
      ++v12; /*0x6ac020*/
      v13 += 24; /*0x6ac021*/
    }
    while ( v12 - 203 < 4 ); /*0x6ac02d*/
    for ( j = 0; j < 60; ++j ) /*0x6ac02f*/
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], j + 1000); /*0x6ac03e*/
    v18 = 0; /*0x6ac04d*/
    if ( v26 > 0 ) /*0x6ac051*/
    {
      v19 = (int *)&unk_B07E90; /*0x6ac053*/
      do /*0x6ac0a5*/
      {
        v20 = *(v19 - 1); /*0x6ac05c*/
        v29 = *v19; /*0x6ac065*/
        v27 = v18 + 1000; /*0x6ac069*/
        v21 = v19[1]; /*0x6ac06d*/
        v28 = v20; /*0x6ac070*/
        v22 = v19[2]; /*0x6ac074*/
        v30 = v21; /*0x6ac07b*/
        v32 = 0; /*0x6ac086*/
        v31 = v22; /*0x6ac08e*/
        v33 = 1; /*0x6ac092*/
        CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v27); /*0x6ac096*/
        ++v18; /*0x6ac09f*/
        v19 += 14; /*0x6ac0a0*/
      }
      while ( v18 < v26 ); /*0x6ac0a5*/
    }
    v28 = dword_B07E04; /*0x6ac0ba*/
    v31 = dword_B07E10; /*0x6ac0c6*/
    v33 = 0; /*0x6ac0d0*/
    v27 = 102; /*0x6ac0d5*/
    v32 = aTxtSellMode; /*0x6ac0dd*/
    v29 = dword_B07E08; /*0x6ac0e5*/
    v30 = dword_B07E0C; /*0x6ac0e9*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 102); /*0x6ac0ed*/
    CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v27); /*0x6ac0fd*/
    v28 = dword_B0B3AC; /*0x6ac113*/
    v29 = dword_B0B3B0; /*0x6ac11c*/
    v27 = 101; /*0x6ac128*/
    v32 = aTxtRepairMode; /*0x6ac130*/
    v30 = dword_B0B3B4; /*0x6ac138*/
    v31 = dword_B0B3B8; /*0x6ac13c*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 101); /*0x6ac140*/
    CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v27); /*0x6ac150*/
    v28 = dword_B0B414; /*0x6ac166*/
    v30 = dword_B0B41C; /*0x6ac170*/
    v27 = 200; /*0x6ac17f*/
    v32 = 0; /*0x6ac187*/
    v29 = dword_B0B418; /*0x6ac18b*/
    v31 = dword_B0B420; /*0x6ac18f*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 200); /*0x6ac193*/
    CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v27); /*0x6ac1a3*/
    v28 = dword_B0B334; /*0x6ac1b9*/
    v31 = dword_B0B340; /*0x6ac1c8*/
    v27 = 201; /*0x6ac1d2*/
    v32 = 0; /*0x6ac1da*/
    v29 = dword_B0B338; /*0x6ac1de*/
    v30 = dword_B0B33C; /*0x6ac1e2*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 201); /*0x6ac1e6*/
    return CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)&v27); /*0x6ac1f6*/
  }
  return result; /*0x6ac1fb*/
}



// ==== 0x006AC210  SidebarClass::GetTooltipText  this=SidebarClass  sig=csp ====
wchar_t *__thiscall ObjectClass::GetTooltipText(SidebarClass *this, int a2)
{
  wchar_t *Available; // edi
  ShapeButtonClass *v4; // ecx
  wchar_t *v5; // eax
  wchar_t *StringCSF; // eax
  int v8; // eax

  Available = PowerClass::getAvailable((PowerClass *)this, a2); /*0x6ac21f*/
  if ( !Available ) /*0x6ac223*/
  {
    if ( a2 == 200 ) /*0x6ac22f*/
    {
      Available = GetStringCSF(aTipScrollup, 0, g_Str_File_Sidebar_CPP, 5069); /*0x6ac247*/
      v4 = &g_SidebarFlag; /*0x6ac249*/
      goto LABEL_4; /*0x6ac249*/
    }
    if ( a2 == 201 ) /*0x6ac29b*/
    {
      Available = GetStringCSF(aTipScrolldown, 0, g_Str_File_Sidebar_CPP, 5075); /*0x6ac2b3*/
      v4 = &stru_B0B328; /*0x6ac2b5*/
      goto LABEL_4; /*0x6ac2ba*/
    }
    if ( a2 >= 203 && a2 < 207 ) /*0x6ac2ce*/
    {
      switch ( a2 ) /*0x6ac2d8*/
      {
        case 203: /*0x6ac2d8*/
          StringCSF = GetStringCSF((wchar_t *)aTipTab1, 0, g_Str_File_Sidebar_CPP, 5083); /*0x6ac2eb*/
          break;
        case 204: /*0x6ac2d8*/
          StringCSF = GetStringCSF((wchar_t *)aTipTab2, 0, g_Str_File_Sidebar_CPP, 5085); /*0x6ac303*/
          break;
        case 205: /*0x6ac2d8*/
          StringCSF = GetStringCSF(word_83FBD8, 0, g_Str_File_Sidebar_CPP, 5087); /*0x6ac31b*/
          break;
        default:
          StringCSF = GetStringCSF(&aTipTab4, 0, g_Str_File_Sidebar_CPP, 5089); /*0x6ac333*/
          break;
      }
      Available = StringCSF; /*0x6ac338*/
      v4 = &stru_B07C48 + 8 * a2 - 1624; /*0x6ac340*/
LABEL_4:
      if ( !(unsigned __int8)DialogControl::IsHidden((DialogControl *)v4) ) /*0x6ac24e*/
      {
        v5 = GetStringCSF(aTipDisabled, 0, g_Str_File_Sidebar_CPP, 5108); /*0x6ac271*/
        swprintf(&word_B079B0, (const size_t)aSS_0, Available, v5); /*0x6ac282*/
        return &word_B079B0; /*0x6ac292*/
      }
      return Available; /*0x6ac25a*/
    }
    v8 = 26; /*0x6ac356*/
    if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6ac350*/
      v8 = 18; /*0x6ac35f*/
    if ( a2 >= 1000 /*0x6ac3a0*/
      && a2 < 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v8 + g_DSurface_SidebarBounds - 7) / 50) + 1000 )
    {
      return ObjectClass::GetSidebarTooltip( /*0x6ac3cb*/
               (ObjectClass *)&this->__pad_CD2[3988 * *((_DWORD *)this + 5351) + 2162],
               a2 - 1000);
    }
  }
  return Available; /*0x6ac28f*/
}



// ==== 0x006AC430  ObjectClass::UI_Add_6AC430  this=ObjectClass  sig=csp ====
int UI_Add_6AC430(ObjectClass *this)
{
  int v1; // eax
  unsigned int v2; // eax

  v1 = 26; /*0x6ac43b*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6ac435*/
    v1 = 18; /*0x6ac444*/
  v2 = (int)((unsigned __int64)(1374389535LL /*0x6ac46c*/
                              * (g_DSurface_ViewBounds - g_SidebarBounds - v1 + g_DSurface_SidebarBounds - 7)) >> 32) >> 4;
  return 2 * ((v2 >> 31) + v2); /*0x6ac478*/
}



// ==== 0x006AC480  UI_Update_6AC480  this=-  sig=csp ====
char __fastcall sub_6AC480(int a1, int *a2, _DWORD *a3, int a4)
{
  char result; // al
  int v5; // ebx
  int v6; // edi
  int BuildingAnimByName; // eax
  int v8; // eax
  int v9; // esi
  int v10; // ebp
  int v11; // edx
  int v12; // ecx
  _WORD *v13; // ebp
  _BYTE v14[4]; // [esp+0h] [ebp-30h] BYREF
  int v15; // [esp+4h] [ebp-2Ch]
  int v16; // [esp+8h] [ebp-28h] BYREF
  int v17; // [esp+Ch] [ebp-24h] BYREF
  __int16 v18; // [esp+10h] [ebp-20h]
  unsigned __int8 v19; // [esp+12h] [ebp-1Eh]
  int v20; // [esp+18h] [ebp-18h]
  _DWORD v21[4]; // [esp+20h] [ebp-10h] BYREF

  result = byte_884B8C; /*0x6ac483*/
  v15 = a1; /*0x6ac488*/
  if ( byte_884B8C ) /*0x6ac48e*/
  {
    if ( a1 ) /*0x6ac496*/
    {
      v5 = a2[1]; /*0x6ac49f*/
      v6 = g_FogOfWarState; /*0x6ac4a5*/
      v20 = *a2; /*0x6ac4b5*/
      BuildingAnimByName = FindBuildingAnimByName(aDarkred, 1); /*0x6ac4b9*/
      v8 = Color::ConvertToRGB((unsigned __int8 *)(BuildingAnimByName + 776), (int)v14); /*0x6ac4c9*/
      v18 = *(_WORD *)v8; /*0x6ac4d7*/
      v19 = *(_BYTE *)(v8 + 2); /*0x6ac4e1*/
      v9 = ((unsigned __int8)v18 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6ac52e*/
         | (HIBYTE(v18) >> g_BitMask_Blue << g_BitMask_Green)
         | (v19 >> g_BitMask_Red << g_BitShift_Blue);
      v10 = a3[2]; /*0x6ac536*/
      v11 = a3[1]; /*0x6ac539*/
      v21[0] = *a3; /*0x6ac53c*/
      v12 = a3[3]; /*0x6ac542*/
      v21[1] = v11; /*0x6ac547*/
      v21[3] = v11 + v12; /*0x6ac54b*/
      v21[2] = v21[0] + v10; /*0x6ac551*/
      Char::Swap((_BYTE *)v6, 1); /*0x6ac555*/
      TextGroup::SetRect((_DWORD *)v6, v21); /*0x6ac561*/
      Property::Set((_WORD *)v6, v9); /*0x6ac569*/
      v13 = (_WORD *)v15; /*0x6ac57a*/
      Text::Layout((_DWORD *)v6, (unsigned __int16 *)v15, &v17, &v16, a4); /*0x6ac584*/
      return Font::Print(v6, DSurface_Sidebar, v13, v20, *(_DWORD *)(v6 + 28) - v16 + v5, a4, 0, 0, 0, 0); /*0x6ac5b2*/
    }
  }
  return result; /*0x6ac5bb*/
}



// ==== 0x006AC5D0  SidebarClass::saveLoadPrefix  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::saveLoadPrefix(SidebarClass *this, int a2)
{
  return SidebarClass::Load((RadarClass *)this, a2); /*0x6ac5da*/
}



// ==== 0x006AC5E0  SidebarClass::saveLoadPrefix2  this=SidebarClass  sig=csp ====
int __thiscall SidebarClass::saveLoadPrefix2(SidebarClass *this, int a2)
{
  return SidebarClass::Save((RadarClass *)this, a2); /*0x6ac5ea*/
}



// ==== 0x006AC5F0  TActionClass::executeHarvestAction  this=TActionClass  sig=csp ====
_DWORD *__thiscall TActionClass::executeHarvestAction(TActionClass *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v5; // esi
  _DWORD *v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  char *v10; // edx
  _DWORD *v11; // ecx

  result = (_DWORD *)dword_A8E358; /*0x6ac5f0*/
  v5 = 0; /*0x6ac5f9*/
  if ( dword_A8E358 <= 0 ) /*0x6ac601*/
  {
LABEL_5:
    v5 = 0; /*0x6ac615*/
    if ( dword_A83CF0 <= 0 ) /*0x6ac61f*/
    {
LABEL_9:
      v5 = 0; /*0x6ac632*/
      if ( dword_A8B228 <= 0 ) /*0x6ac63c*/
      {
LABEL_13:
        v5 = 0; /*0x6ac64f*/
        if ( dword_A83C78 <= 0 ) /*0x6ac659*/
          return result; /*0x6ac659*/
        result = dword_A83C6C; /*0x6ac65f*/
        while ( a2 != *result ) /*0x6ac666*/
        {
          ++v5; /*0x6ac668*/
          ++result; /*0x6ac669*/
          if ( v5 >= dword_A83C78 ) /*0x6ac66e*/
            return result; /*0x6ac66e*/
        }
      }
      else
      {
        result = dword_A8B21C; /*0x6ac63e*/
        while ( a2 != *result ) /*0x6ac645*/
        {
          ++v5; /*0x6ac647*/
          ++result; /*0x6ac648*/
          if ( v5 >= dword_A8B228 ) /*0x6ac64d*/
            goto LABEL_13; /*0x6ac64d*/
        }
      }
    }
    else
    {
      result = dword_A83CE4; /*0x6ac621*/
      while ( a2 != *result ) /*0x6ac628*/
      {
        ++v5; /*0x6ac62a*/
        ++result; /*0x6ac62b*/
        if ( v5 >= dword_A83CF0 ) /*0x6ac630*/
          goto LABEL_9; /*0x6ac630*/
      }
    }
  }
  else
  {
    v6 = dword_A8E34C; /*0x6ac603*/
    while ( *v6 != a2 ) /*0x6ac60b*/
    {
      ++v5; /*0x6ac60d*/
      ++v6; /*0x6ac60e*/
      if ( v5 >= dword_A8E358 ) /*0x6ac613*/
        goto LABEL_5; /*0x6ac613*/
    }
  }
  result = (_DWORD *)(*(int (**)(void))(*(_DWORD *)a2 + 44))(); /*0x6ac677*/
  if ( result == (_DWORD *)15 || result == (_DWORD *)16 ) /*0x6ac682*/
  {
    v7 = 2; /*0x6ac6d4*/
  }
  else if ( result == (_DWORD *)1 || result == (_DWORD *)40 || result == (_DWORD *)2 || result == (_DWORD *)3 ) /*0x6ac696*/
  {
    v7 = 3; /*0x6ac6cd*/
  }
  else if ( result == (_DWORD *)6 || result == (_DWORD *)7 ) /*0x6ac6a0*/
  {
    v7 = GetHouseTechLevel((int)result, v5) == 5; /*0x6ac6c9*/
  }
  else
  {
    if ( result != (_DWORD *)57 && result != (_DWORD *)32 && result != (_DWORD *)31 ) /*0x6ac6af*/
      return result; /*0x6ac6af*/
    v7 = 1; /*0x6ac6b1*/
  }
  v8 = 997 * v7; /*0x6ac6e3*/
  v9 = 0; /*0x6ac6e6*/
  v10 = (char *)this + 4 * v8 + 5444; /*0x6ac6e8*/
  v11 = v10 + 88; /*0x6ac6ef*/
  while ( *v11 != v5 ) /*0x6ac6f4*/
  {
    ++v9; /*0x6ac6f6*/
    v11 += 13; /*0x6ac6f7*/
    if ( v9 >= 75 ) /*0x6ac6fd*/
      goto LABEL_38; /*0x6ac6fd*/
  }
  *(_DWORD *)&v10[52 * v9 + 136] = a3 + *(_DWORD *)&stru_A8EB00.?[416]; /*0x6ac713*/
LABEL_38:
  result = (_DWORD *)(*(_DWORD *)&stru_A8EB00.?[416] + a3 + 1); /*0x6ac71a*/
  *((_DWORD *)this + 5352) = result; /*0x6ac728*/
  return result; /*0x6ac670*/
}



// ==== 0x006AC780  SelectClass_StripClass_SidebarClass::queryInterface  this=SelectClass@StripClass@SidebarClass  sig=csp ====
_DWORD *__thiscall SidebarClass::queryInterface(SelectClass_StripClass_SidebarClass *this, char a2)
{
  GadgetClass::Dtor((GadgetClass *)this); /*0x6ac783*/
  if ( (a2 & 1) != 0 ) /*0x6ac78d*/
    __3_YAXPAX_Z(this); /*0x6ac790*/
  return &this->field_0; /*0x6ac79a*/
}



// ==== 0x006AC7A0  SBGadgetClass@SidebarClass::updateAnimation  this=SBGadgetClass@SidebarClass  sig=csp ====
_DWORD *__thiscall ObjectClass::sub_6AC7A0(_DWORD *Block, char a2)
{
  GadgetClass::Dtor(Block); /*0x6ac7a3*/
  if ( (a2 & 1) != 0 ) /*0x6ac7ad*/
    __3_YAXPAX_Z(Block); /*0x6ac7b0*/
  return Block; /*0x6ac7ba*/
}



// ==== 0x006AC7C0  TabClass::drawTabBackground  this=TabClass  sig=csp ====
int __thiscall TabClass::drawTabBackground(TabClass *this)
{
  IUnknown *v2; // edx

  this->TabClass_field_0x14 = 0; /*0x6ac7c4*/
  this->__pad_18[0] = 0; /*0x6ac7c7*/
  v2 = *(IUnknown **)&stru_A8EB00.?[416]; /*0x6ac7ca*/
  *(_DWORD *)&this->__pad_20[4] = 0; /*0x6ac7d0*/
  this->TabClass_field_0x1C = v2; /*0x6ac7d3*/
  *(_DWORD *)&this->__pad_20[8] = 0; /*0x6ac7d6*/
  *(_DWORD *)&this->__pad_20[12] = 1; /*0x6ac7d9*/
  return (int)this; /*0x6ac7e0*/
}



// ==== 0x006AC7F0  SidebarClass::DestructWithRadar  this=SidebarClass  sig=csp ====
char *__thiscall ObjectClass::DestructWithRadar(SidebarClass *this, char a2)
{
  int *v3; // esi
  int v4; // edi

  v3 = (int *)((char *)this + 21484); /*0x6ac7f5*/
  v4 = 4; /*0x6ac7fb*/
  do /*0x6ac816*/
  {
    v3 -= 997; /*0x6ac805*/
    Array::ForEachReverse(v3, 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x6ac810*/
    --v4; /*0x6ac815*/
  }
  while ( v4 ); /*0x6ac816*/
  RadarClass::Destruct((RadarClass *)this); /*0x6ac81a*/
  if ( (a2 & 1) != 0 ) /*0x6ac824*/
    __3_YAXPAX_Z(this); /*0x6ac827*/
  return (char *)this; /*0x6ac82f*/
}



// ==== 0x006AC840  DisplayClass::System_Init_6AC840  this=DisplayClass  sig=csp ====
char *__thiscall sub_6AC840(char *this, int a2)
{
  RadarClass::Render(this, a2); /*0x6ac848*/
  this->q11CC = 0; /*0x6ac84f*/
  this->q11CD = 0; /*0x6ac855*/
  this->q11CE = 0; /*0x6ac85b*/
  *(_DWORD *)this = &DisplayClass::`vftable'; /*0x6ac861*/
  return this; /*0x6ac869*/
}



// ==== 0x006AC870  SidebarClass::initButtons  this=SidebarClass  sig=csp ====
_BYTE *__thiscall SidebarClass::initButtons(SidebarClass *this)
{
  void *v2; // edx

  this->SidebarClass_field_0x0 = 0; /*0x6ac874*/
  LOBYTE(this->SidebarClass_field_0x4) = 0; /*0x6ac876*/
  v2 = *(void **)&stru_A8EB00.?[416]; /*0x6ac879*/
  *(_DWORD *)&this->__pad_C[4] = 0; /*0x6ac87f*/
  this->SidebarClass_field_0x8 = v2; /*0x6ac882*/
  this->SidebarClass_field_0x14 = 0; /*0x6ac885*/
  *(_DWORD *)this->__pad_18 = 1; /*0x6ac888*/
  return this; /*0x6ac88f*/
}



// ==== 0x006AC8D0  VectorClass::System_Init_6AC8D0  this=VectorClass  sig=csp ====
_DWORD *__thiscall System_Init_6AC8D0(VectorClass *this, int a2, int a3)
{
  void *v4; // eax

  this->Items = 0; /*0x6ac8da*/
  this->Capacity = a2; /*0x6ac8e1*/
  this->IsInitialized = 1; /*0x6ac8e4*/
  this->IsAllocated = 0; /*0x6ac8e8*/
  this->ptr_0 = &VectorClass<Point2D>::`vftable'; /*0x6ac8ec*/
  if ( a2 ) /*0x6ac8f2*/
  {
    if ( a3 ) /*0x6ac8fa*/
    {
      this->Items = (void *)a3; /*0x6ac8fd*/
    }
    else
    {
      v4 = (void *)__2_YAPAXI_Z(8 * a2); /*0x6ac90e*/
      if ( !v4 ) /*0x6ac918*/
        v4 = 0; /*0x6ac921*/
      this->Items = v4; /*0x6ac923*/
      this->IsAllocated = 1; /*0x6ac926*/
    }
  }
  this->ptr_0 = &DynamicVectorClass<Point2D>::`vftable'; /*0x6ac92a*/
  *((_DWORD *)this + 5) = 10; /*0x6ac930*/
  this->Items = 0; /*0x6ac937*/
  return &this->ptr_0; /*0x6ac940*/
}



// ==== 0x006AC950  sub_6AC950  this=-  sig=ida-proto ====
int sub_6AC950()
{
  dword_B0B528 = 0; /*0x6ac952*/
  dword_B0B52C = 0; /*0x6ac957*/
  dword_B0B530 = 0; /*0x6ac95c*/
  dword_B0B534 = 0; /*0x6ac961*/
  return 0; /*0x6ac966*/
}



// ==== 0x006AC970  sub_6AC970  this=-  sig=ida-proto ====
void sub_6AC970()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6ac97c*/
  dbl_B0B540 = Math::Sqrt(v0 + v0); /*0x6ac98e*/
}



// ==== 0x006AC9A0  sub_6AC9A0  this=-  sig=ida-proto ====
void sub_6AC9A0()
{
  dbl_B0B590 = dbl_B0B540 / 60.0; /*0x6ac9ac*/
}



// ==== 0x006AC9C0  sub_6AC9C0  this=-  sig=ida-proto ====
void sub_6AC9C0()
{
  dbl_B0B578 = 1.0 / dbl_B0B590; /*0x6ac9cc*/
}



// ==== 0x006AC9E0  sub_6AC9E0  this=-  sig=ida-proto ====
void sub_6AC9E0()
{
  dbl_B0B570 = 0.0174532925199433 * 45.0; /*0x6ac9ec*/
}



// ==== 0x006ACA00  sub_6ACA00  this=-  sig=ida-proto ====
void sub_6ACA00()
{
  dbl_B0B548 = 0.0174532925199433 * 60.0; /*0x6aca0c*/
}



// ==== 0x006ACA20  sub_6ACA20  this=-  sig=ida-proto ====
void sub_6ACA20()
{
  dbl_B0B520 = 0.0174532925199433 * 90.0; /*0x6aca2c*/
}



// ==== 0x006ACA40  sub_6ACA40  this=-  sig=ida-proto ====
__int64 sub_6ACA40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0B520 - dbl_B0B548); /*0x6aca52*/
  result = Math::RoundToInt(v0 * dbl_B0B540 * 0.5); /*0x6aca66*/
  dword_B0B598 = result; /*0x6aca6b*/
  return result; /*0x6aca70*/
}



// ==== 0x006ACA80  sub_6ACA80  this=-  sig=ida-proto ====
void sub_6ACA80()
{
  dbl_B0B550 = Math::ArcTan((double)dword_B0B598 * 0.00390625); /*0x6aca97*/
}



// ==== 0x006ACAB0  sub_6ACAB0  this=-  sig=ida-proto ====
void sub_6ACAB0()
{
  dbl_B0B568 = Math::ArcTan((double)(2 * dword_B0B598) / dbl_B0B540); /*0x6acad2*/
}



// ==== 0x006ACAE0  sub_6ACAE0  this=-  sig=ida-proto ====
__int64 sub_6ACAE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B598) + 0.5); /*0x6acafb*/
  dword_B0B58C = result; /*0x6acb00*/
  return result; /*0x6acb06*/
}



// ==== 0x006ACB10  sub_6ACB10  this=-  sig=ida-proto ====
int sub_6ACB10()
{
  word_B0B538 = 0; /*0x6acb12*/
  word_B0B53A = 0; /*0x6acb18*/
  return 0; /*0x6acb1e*/
}



// ==== 0x006ACB20  sub_6ACB20  this=-  sig=ida-proto ====
int sub_6ACB20()
{
  dword_B0B558 = 0; /*0x6acb22*/
  dword_B0B55C = 0; /*0x6acb27*/
  dword_B0B560 = 0; /*0x6acb2c*/
  return 0; /*0x6acb31*/
}



// ==== 0x006ACB40  sub_6ACB40  this=-  sig=ida-proto ====
int sub_6ACB40()
{
  dword_B0B588 = 0; /*0x6acb45*/
  dword_B0B580 = 128; /*0x6acb4f*/
  dword_B0B584 = 128; /*0x6acb54*/
  return 128; /*0x6acb59*/
}



// ==== 0x006ACBAE  ___inc_tmpoff  this=-  sig=ida-proto ====
void __inc_tmpoff()
{
  ++MEMORY[0x51D]; /*0x6acbae*/
}



// ==== 0x006ACCA0  Map_Handle_6ACCA0  this=-  sig=ida-proto ====
char __fastcall sub_6ACCA0(int a1)
{
  HWND v1; // ebp
  int v2; // edi
  int v3; // esi
  LRESULT v4; // eax

  v1 = dword_B0B59C; /*0x6acca2*/
  if ( a1 >= 8 ) /*0x6accad*/
    return 0; /*0x6acd54*/
  v2 = a1 - 1; /*0x6accb9*/
  while ( 1 )
  {
    if ( v2 )
    {
      switch ( v2 )
      {
        case 1:
          v3 = 1294; /*0x6acccc*/
          break;
        case 2:
          v3 = 1302; /*0x6accd8*/
          break;
        case 3:
          v3 = 1306; /*0x6acce4*/
          break;
        case 4:
          v3 = 1307; /*0x6accf0*/
          break;
        default:
          v3 = v2 == 5 ? 1308 : v2 != 6 ? -1 : 1309;
          break;
      }
    }
    else
    {
      v3 = 1291; /*0x6accc0*/
    }
    v4 = SendDlgItemMessageA(v1, v3, 0x147u, 0, 0); /*0x6acd23*/
    if ( (unsigned int)SendDlgItemMessageA(v1, v3, 0x150u, v4, 0) <= 2 ) /*0x6acd33*/
      break; /*0x6acd33*/
    if ( ++v2 + 1 >= 8 ) /*0x6acd46*/
      return 0; /*0x6acd46*/
  }
  return 1; /*0x6acd4d*/
}



// ==== 0x006ACD60  Skirmish::EnableSpawnButtons  this=Skirmish  sig=csp ====
int __thiscall Skirmish::EnableSpawnButtons(Skirmish *this)
{
  Skirmish *v1; // ebp
  int result; // eax
  ObjectClass *v3; // edi
  int v4; // esi
  LRESULT v5; // eax
  LRESULT v6; // esi
  char v7; // [esp+7h] [ebp-1h]

  v1 = this; /*0x6acd62*/
  if ( !this ) /*0x6acd66*/
    v1 = (Skirmish *)Dialog::FindByHandle((Dialog *)0x102); /*0x6acd72*/
  v7 = 0; /*0x6acd79*/
  if ( dword_A8B23C ) /*0x6acd80*/
    v7 = dword_A8B23C->ambientSoundController[0]; /*0x6acd85*/
  result = (int)GetDlgItem((HWND)v1, 1901); /*0x6acd8f*/
  if ( result )
  {
    EnableWindow((HWND)result, v7 != 0); /*0x6acdac*/
    v3 = 0; /*0x6acdbb*/
    do
    {
      if ( v3 )
      {
        if ( v3 == (ObjectClass *)1 )
        {
          v4 = 1294; /*0x6acdcd*/
        }
        else if ( v3 == (ObjectClass *)2 )
        {
          v4 = 1302; /*0x6acdd9*/
        }
        else if ( v3 == (ObjectClass *)3 )
        {
          v4 = 1306; /*0x6acde5*/
        }
        else if ( v3 == (ObjectClass *)4 )
        {
          v4 = 1307; /*0x6acdf1*/
        }
        else if ( v3 == (ObjectClass *)5 )
        {
          v4 = 1308; /*0x6acdfd*/
        }
        else
        {
          v4 = v3 != (ObjectClass *)6 ? -1 : 1309;
        }
      }
      else
      {
        v4 = 1291; /*0x6acdc1*/
      }
      v5 = SendDlgItemMessageA((HWND)v1, v4, 0x147u, 0, 0); /*0x6ace24*/
      v3 = (ObjectClass *)((char *)v3 + 1); /*0x6ace32*/
      v6 = SendDlgItemMessageA((HWND)v1, v4, 0x150u, v5, 0); /*0x6ace33*/
      result = GetResourceID4CSF(v3); /*0x6ace37*/
      if ( result >= 0 ) /*0x6ace3e*/
      {
        result = (int)GetDlgItem((HWND)v1, result); /*0x6ace42*/
        if ( result ) /*0x6ace4a*/
        {
          if ( v6 == -1 ) /*0x6ace4f*/
            result = EnableWindow((HWND)result, 0); /*0x6ace53*/
          else
            result = EnableWindow((HWND)result, v7 != 0); /*0x6ace64*/
        }
      }
    }
    while ( (int)&v3->AbstractClass + 1 < 8 );
  }
  return result; /*0x6ace79*/
}



// ==== 0x006ACE80  sub_6ACE80  this=-  sig=ida-proto ====
void __fastcall sub_6ACE80(HWND hDlg, int a2)
{
  int v3; // eax
  int v4; // ebx
  char *i; // esi
  int ResourceID4CSF; // edx

  if ( hDlg && dword_A8B23C ) /*0x6ace90*/
  {
    v3 = 1; /*0x6ace94*/
    v4 = 8; /*0x6ace99*/
    if ( a2 > 0 && a2 < 8 ) /*0x6acea2*/
    {
      v3 = a2; /*0x6acea4*/
      v4 = a2 + 1; /*0x6acea6*/
    }
    for ( i = (char *)v3; (int)i < v4; ++i ) /*0x6acead*/
    {
      ResourceID4CSF = GetResourceID4CSF(i); /*0x6aceb6*/
      if ( dword_A8B23C && *(_BYTE *)(dword_A8B23C + 60) ) /*0x6acec1*/
        SetupLobbyPlayerSlots(hDlg, ResourceID4CSF, 3); /*0x6aceca*/
      else
        SetupLobbyPlayerSlots(hDlg, ResourceID4CSF, -2); /*0x6aced0*/
    }
  }
}



// ==== 0x006ACEE0  DialogSkirmishFunc_UpdateMultiEngineer  this=-  sig=csp ====
void __fastcall DialogSkirmishFunc_UpdateMultiEngineer(Session *hWnd, int nIDDlgItem, int a3, int a4)
{
  int v6; // edi
  HWND DlgItem; // eax
  int v8; // esi
  LRESULT v9; // eax
  int v10; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v12; // eax
  HWND v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  HWND v16; // eax
  int v17; // edi
  int v18; // esi
  LRESULT v19; // eax
  int ResourceID4CSF; // eax
  int ComboBoxSelectedRaw2; // esi
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  HWND v24; // eax
  ObjectClass *v25; // esi
  int *v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  int ComboBoxSelected; // eax
  ObjectClass *v30; // eax
  ObjectClass *v31; // esi
  int v32; // edi
  int ResourceID2CSF; // ebx
  LRESULT v34; // eax
  LRESULT v35; // eax
  ObjectClass *v36; // edi
  int v37; // esi
  int v38; // ebx
  LRESULT v39; // eax
  LRESULT v40; // esi
  int v41; // ebx
  int ComboBoxSelectedRaw; // eax
  int v43; // edx
  int v44; // esi
  int v45; // edi
  in... [26633 chars total]



// ==== 0x006ADC20  SetupSkirmishSpawnLocationEntry  this=-  sig=csp ====
int __fastcall SetupSkirmishSpawnLocationEntry(HWND hDlg, int nIDDlgItem)
{
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int ResourceIDCSF; // ebx
  int v8; // eax
  int v9; // ebx
  char *i; // edi
  int v11; // eax
  LRESULT v12; // eax
  HWND DlgItem; // ebx
  HWND v14; // ebp
  int nIDDlgItema; // [esp+10h] [ebp-10h]
  HWND hWnd; // [esp+14h] [ebp-Ch]
  HWND hWnda; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  unsigned __int8 v20; // [esp+18h] [ebp-8h]
  HWND ResourceID4CSF; // [esp+1Ch] [ebp-4h]
  HWND v22; // [esp+1Ch] [ebp-4h]

  switch ( nIDDlgItem ) /*0x6adc31*/
  {
    case 1291: /*0x6adc31*/
      v4 = 0; /*0x6adc33*/
      break;
    case 1294: /*0x6adc31*/
      v4 = 1; /*0x6adc3f*/
      break;
    case 1302: /*0x6adc31*/
      v4 = 2; /*0x6adc4e*/
      break;
    case 1306: /*0x6adc31*/
      v4 = 3; /*0x6adc5d*/
      break;
    case 1307: /*0x6adc31*/
      v4 = 4; /*0x6adc6c*/
      break;
    case 1308: /*0x6adc31*/
      v4 = 5; /*0x6adc7b*/
      break;
    default:
      v5 = -(nIDDlgItem != 1309); /*0x6adc8b*/
      LOBYTE(v5) = v5 & 0xF9; /*0x6adc8d*/
      v4 = v5 + 6; /*0x6adc8f*/
      break;
  }
  v6 = v4 + 1; /*0x6adc92*/
  ResourceIDCSF = GetResourceIDCSF((void *)(v4 + 1)); /*0x6adc9c*/
  v19 = ResourceIDCSF; /*0x6adca0*/
  nIDDlgItema = GetResourceID2CSF((void *)v6); /*0x6adcab*/
  hWnd = (HWND)GetResourceID3CSF((void *)v6); /*0x6adcb6*/
  ResourceID4CSF = (HWND)GetResourceID4CSF((void *)v6); /*0x6adcc1*/
  if ( hDlg && dword_A8B23C ) /*0x6adcce*/
  {
    v8 = 1; /*0x6adcd2*/
    v9 = 8; /*0x6adcd7*/
    if ( v6 > 0 && v6 < 8 ) /*0x6adce0*/
    {
      v8 = v6; /*0x6adce2*/
      v9 = v6 + 1; /*0x6adce4*/
    }
    for ( i = (char *)v8; (int)i < v9; ++i ) /*0x6adceb*/
    {
      v11 = GetResourceID4CSF(i); /*0x6adcef*/
      if ( dword_A8B23C && *(_BYTE *)(dword_A8B23C + 60) ) /*0x6adcfe*/
        SetupLobbyPlayerSlots(hDlg, v11, 3); /*0x6add07*/
      else
        SetupLobbyPlayerSlots(hDlg, v11, -2); /*0x6add0f*/
    }
    ResourceIDCSF = v19; /*0x6add19*/
  }
  v12 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0); /*0x6add2e*/
  if ( (unsigned int)SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v12, 0) <= 2 ) /*0x6add3e*/
  {
    v20 = 1; /*0x6addde*/
  }
  else
  {
    v20 = 0; /*0x6add5c*/
    SetupSkirmishSpawnLocations(hDlg, ResourceIDCSF, -2); /*0x6add61*/
    SetupLobbyCountryCombo(hDlg, nIDDlgItema, -2); /*0x6add6e*/
    SetupLobbyFactionSlots(hDlg, (int)hWnd, -2); /*0x6add7b*/
  }
  DlgItem = GetDlgItem(hDlg, ResourceIDCSF); /*0x6add8a*/
  v14 = GetDlgItem(hDlg, nIDDlgItema); /*0x6add94*/
  hWnda = GetDlgItem(hDlg, (int)hWnd); /*0x6adda2*/
  v22 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x6addb4*/
  EnableWindow(DlgItem, v20); /*0x6addc0*/
  EnableWindow(v14, v20); /*0x6addc4*/
  EnableWindow(hWnda, v20); /*0x6addcc*/
  return EnableWindow(v22, v20); /*0x6addd6*/
}



// ==== 0x006ADDF0  Skirmish_Setup_6ADDF0  this=Skirmish  sig=csp ====
void __fastcall sub_6ADDF0(HWND a1, int a2, int a3)
{
  int v5; // ebx
  int v6; // esi
  bool v7; // al
  HWND v8; // edi
  int i; // esi
  int ResourceID4CSF; // edx
  int PlayerCountMap; // [esp+14h] [ebp-4h]
  bool v13; // [esp+1Ch] [ebp+4h]

  if ( a2 == -1 ) /*0x6ade00*/
    PlayerCountMap = 8; /*0x6ade02*/
  else
    PlayerCountMap = ReadPlayerCountMap(a2); /*0x6ade13*/
  v5 = ReadPlayerCountMap(a3); /*0x6ade26*/
  v6 = v5 - PlayerCountMap; /*0x6ade2a*/
  if ( a2 >= 0 /*0x6ade6a*/
    && a3 >= 0
    && a2 < dword_A8B8D8
    && a3 < dword_A8B8D8
    && (v13 = IsRandMap::Sed(*(_DWORD *)(dword_A8B8CC + 4 * a2)),
        v7 = IsRandMap::Sed(*(_DWORD *)(dword_A8B8CC + 4 * a3)),
        v13)
    && v7 )
  {
    v8 = a1; /*0x6ade6c*/
    HideSkirmishSpawnLocations(a1, 1); /*0x6ade77*/
    Skirmish_Setup_6ADDF0_Setup(a1, 1, v5 - 1); /*0x6ade87*/
  }
  else
  {
    v8 = a1; /*0x6ade8e*/
  }
  if ( v6 <= 0 ) /*0x6ade94*/
  {
    if ( v6 < 0 ) /*0x6adea4*/
      HideSkirmishSpawnLocations(v8, v5); /*0x6adeaa*/
  }
  else
  {
    Skirmish_Setup_6ADDF0_Setup(v8, PlayerCountMap, v6); /*0x6ade9d*/
  }
  if ( v8 && dword_A8B23C ) /*0x6adeba*/
  {
    for ( i = 1; i < 8; ++i ) /*0x6adebc*/
    {
      ResourceID4CSF = GetResourceID4CSF((void *)i); /*0x6adec8*/
      if ( dword_A8B23C && *(_BYTE *)(dword_A8B23C + 60) ) /*0x6aded3*/
        SetupLobbyPlayerSlots(v8, ResourceID4CSF, 3); /*0x6adedc*/
      else
        SetupLobbyPlayerSlots(v8, ResourceID4CSF, -2); /*0x6adee2*/
    }
  }
}



// ==== 0x006ADF00  Skirmish_Setup_6ADDF0_Setup  this=-  sig=csp ====
int __fastcall Skirmish_Setup_6ADDF0_Setup(HWND hDlg, int a2, int nIDDlgItem)
{
  int result; // eax
  char *v5; // esi
  HWND ResourceIDHardcodedCSF; // [esp+4h] [ebp-1Ch]
  HWND DlgItem; // [esp+4h] [ebp-1Ch]
  HWND ResourceIDCSF; // [esp+8h] [ebp-18h]
  HWND v9; // [esp+8h] [ebp-18h]
  HWND ResourceID2CSF; // [esp+Ch] [ebp-14h]
  HWND v11; // [esp+Ch] [ebp-14h]
  HWND ResourceID3CSF; // [esp+10h] [ebp-10h]
  HWND v13; // [esp+10h] [ebp-10h]
  HWND ResourceID4CSF; // [esp+14h] [ebp-Ch]
  HWND v15; // [esp+14h] [ebp-Ch]
  HWND hWnd; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]
  int nIDDlgItema; // [esp+24h] [ebp+4h]

  result = a2 + nIDDlgItem; /*0x6adf08*/
  v17 = a2 + nIDDlgItem; /*0x6adf0e*/
  if ( a2 < a2 + nIDDlgItem )
  {
    v5 = (char *)(a2 - 1); /*0x6adf27*/
    do
    {
      if ( v5 )
      {
        if ( v5 == (char *)1 )
        {
          nIDDlgItema = 1294; /*0x6adf3d*/
        }
        else if ( v5 == (char *)2 )
        {
          nIDDlgItema = 1302; /*0x6adf4c*/
        }
        else if ( v5 == (char *)3 )
        {
          nIDDlgItema = 1306; /*0x6adf5b*/
        }
        else if ( v5 == (char *)4 )
        {
          nIDDlgItema = 1307; /*0x6adf6a*/
        }
        else if ( v5 == (char *)5 )
        {
          nIDDlgItema = 1308; /*0x6adf79*/
        }
        else
        {
          nIDDlgItema = v5 != (char *)6 ? -1 : 1309;
        }
      }
      else
      {
        nIDDlgItema = 1291; /*0x6adf2e*/
      }
      ResourceIDHardcodedCSF = (HWND)GetResourceIDHardcodedCSF(++v5); /*0x6adfa4*/
      ResourceIDCSF = (HWND)GetResourceIDCSF(v5); /*0x6adfaf*/
      ResourceID2CSF = (HWND)GetResourceID2CSF(v5); /*0x6adfba*/
      ResourceID3CSF = (HWND)GetResourceID3CSF(v5); /*0x6adfc5*/
      ResourceID4CSF = (HWND)GetResourceID4CSF(v5); /*0x6adfd2*/
      hWnd = GetDlgItem(hDlg, nIDDlgItema); /*0x6adfde*/
      DlgItem = GetDlgItem(hDlg, (int)ResourceIDHardcodedCSF); /*0x6adfe6*/
      v9 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x6adff6*/
      v11 = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x6ae002*/
      v13 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x6ae00a*/
      v15 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x6ae01d*/
      ShowWindow(hWnd, 5); /*0x6ae021*/
      ShowWindow(DlgItem, 5); /*0x6ae02a*/
      ShowWindow(v9, 5); /*0x6ae033*/
      ShowWindow(v11, 5); /*0x6ae03c*/
      ShowWindow(v13, 5); /*0x6ae045*/
      ShowWindow(v15, 5); /*0x6ae04e*/
      SetupSkirmishSpawnLocationEntry(hDlg, nIDDlgItema); /*0x6ae056*/
      result = v17; /*0x6ae05b*/
    }
    while ( (int)(v5 + 1) < v17 );
  }
  return result; /*0x6ae06d*/
}



// ==== 0x006AE080  HideSkirmishSpawnLocations  this=-  sig=csp ====
void __fastcall HideSkirmishSpawnLocations(HWND hDlg, int a2)
{
  int v3; // esi
  int v4; // esi
  LRESULT v5; // ebp
  WPARAM v6; // ebx
  char *v7; // esi
  int nIDDlgItem; // [esp+10h] [ebp-18h]
  int nIDDlgItema; // [esp+10h] [ebp-18h]
  HWND nIDDlgItemb; // [esp+10h] [ebp-18h]
  HWND hWnda; // [esp+14h] [ebp-14h]
  HWND hWndb; // [esp+14h] [ebp-14h]
  HWND ResourceID2CSF; // [esp+18h] [ebp-10h]
  HWND DlgItem; // [esp+18h] [ebp-10h]
  HWND ResourceIDCSF; // [esp+1Ch] [ebp-Ch]
  HWND v17; // [esp+1Ch] [ebp-Ch]
  HWND ResourceID3CSF; // [esp+20h] [ebp-8h]
  HWND v19; // [esp+20h] [ebp-8h]
  HWND ResourceID4CSF; // [esp+24h] [ebp-4h]
  HWND v21; // [esp+24h] [ebp-4h]

  if ( a2 < 8 )
  {
    v3 = a2 - 1; /*0x6ae096*/
    for ( nIDDlgItem = a2 - 1; ; v3 = nIDDlgItem )
    {
      if ( v3 )
      {
        switch ( v3 )
        {
          case 1:
            v4 = 1294; /*0x6ae0b3*/
            break;
          case 2:
            v4 = 1302; /*0x6ae0bf*/
            break;
          case 3:
            v4 = 1306; /*0x6ae0cb*/
            break;
          case 4:
            v4 = 1307; /*0x6ae0d7*/
            break;
          case 5:
            v4 = 1308; /*0x6ae0e3*/
            break;
          default:
            v4 = v3 != 6 ? -1 : 1309;
            break;
        }
      }
      else
      {
        v4 = 1291; /*0x6ae0a7*/
      }
      v5 = SendDlgItemMessageA(hDlg, v4, 0x146u, 0, 0); /*0x6ae10e*/
      v6 = 0; /*0x6ae110*/
      if ( v5 > 0 ) /*0x6ae114*/
      {
        while ( SendDlgItemMessageA(hDlg, v4, 0x150u, v6, 0) != -1 ) /*0x6ae129*/
        {
          if ( (int)++v6 >= v5 ) /*0x6ae12e*/
            goto LABEL_22; /*0x6ae12e*/
        }
        SendDlgItemMessageA(hDlg, v4, 0x14Eu, v6, 0); /*0x6ae13c*/
      }
LABEL_22:
      SetupSkirmishSpawnLocationEntry(hDlg, v4); /*0x6ae146*/
      if ( ++nIDDlgItem + 1 >= 8 ) /*0x6ae158*/
        break; /*0x6ae158*/
    }
    if ( a2 < 8 )
    {
      v7 = (char *)(a2 - 1); /*0x6ae177*/
      do
      {
        if ( v7 )
        {
          if ( v7 == (char *)1 )
          {
            nIDDlgItema = 1294; /*0x6ae18d*/
          }
          else if ( v7 == (char *)2 )
          {
            nIDDlgItema = 1302; /*0x6ae19c*/
          }
          else if ( v7 == (char *)3 )
          {
            nIDDlgItema = 1306; /*0x6ae1ab*/
          }
          else if ( v7 == (char *)4 )
          {
            nIDDlgItema = 1307; /*0x6ae1ba*/
          }
          else if ( v7 == (char *)5 )
          {
            nIDDlgItema = 1308; /*0x6ae1c9*/
          }
          else
          {
            nIDDlgItema = v7 != (char *)6 ? -1 : 1309;
          }
        }
        else
        {
          nIDDlgItema = 1291; /*0x6ae17e*/
        }
        hWnda = (HWND)GetResourceIDHardcodedCSF(++v7); /*0x6ae1f4*/
        ResourceID2CSF = (HWND)GetResourceID2CSF(v7); /*0x6ae1ff*/
        ResourceIDCSF = (HWND)GetResourceIDCSF(v7); /*0x6ae20a*/
        ResourceID3CSF = (HWND)GetResourceID3CSF(v7); /*0x6ae215*/
        ResourceID4CSF = (HWND)GetResourceID4CSF(v7); /*0x6ae21e*/
        nIDDlgItemb = GetDlgItem(hDlg, nIDDlgItema); /*0x6ae22e*/
        hWndb = GetDlgItem(hDlg, (int)hWnda); /*0x6ae23a*/
        DlgItem = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x6ae242*/
        v17 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x6ae252*/
        v19 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x6ae25e*/
        v21 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x6ae266*/
        ShowWindow(nIDDlgItemb, 0); /*0x6ae271*/
        ShowWindow(hWndb, 0); /*0x6ae27a*/
        ShowWindow(DlgItem, 0); /*0x6ae283*/
        ShowWindow(v17, 0); /*0x6ae28c*/
        ShowWindow(v19, 0); /*0x6ae295*/
        ShowWindow(v21, 0); /*0x6ae29e*/
      }
      while ( (int)(v7 + 1) < 8 );
    }
  }
}



// ==== 0x006AE2C0  ObjectClass::ShowSkirmishSetupScreen  this=ObjectClass  sig=csp ====
bool __usercall ShowSkirmishSetupScreen@<al>(ObjectClass *this, int a2@<ebp>)
{
  int v2; // ebx
  ObjectClass *v3; // esi
  int i; // esi
  HWND Dialog; // esi
  LONG j; // eax
  TechnoTypeClass *v7; // ecx
  Skirmish *v8; // esi
  ObjectClass *v10; // [esp+0h] [ebp-8h]
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  v10 = v3; /*0x6ae2cc*/
  dwNewLong = -1; /*0x6ae2ce*/
  RulesClass::LoadCountries(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x6ae2d6*/
  RulesClass::ReadDataList(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x6ae2e8*/
  for ( i = 0; i < dword_A83CA8; ++i ) /*0x6ae2f6*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)dword_A83C9C + i) + 100))( /*0x6ae30a*/
      *((_DWORD *)dword_A83C9C + i),
      *(_DWORD *)&DSurface_ViewBounds.__pad_34[116]);
  LoadingScreen::Init(); /*0x6ae317*/
  Dialog = (HWND)CreateDialog(0x102u, Skirmish::Setup_DlgProc, 0); /*0x6ae32d*/
  if ( Dialog ) /*0x6ae331*/
  {
    dword_B0B59C = Dialog; /*0x6ae337*/
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x6ae341*/
    Dialog::Show((Dialog *)Dialog); /*0x6ae349*/
    for ( j = dwNewLong; dwNewLong != 1559; j = dwNewLong ) /*0x6ae357*/
    {
      if ( j == 1472 ) /*0x6ae35e*/
        break; /*0x6ae35e*/
      if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x6ae367*/
        break; /*0x6ae367*/
      LOBYTE(v7) = 0; /*0x6ae369*/
      ScreenSaver::Process(v7, v10); /*0x6ae36b*/
    }
    Dialog::Destroy((Dialog *)Dialog); /*0x6ae37d*/
    dword_B0B59C = 0; /*0x6ae382*/
  }
  v8 = g_UIControlState; /*0x6ae38c*/
  if ( g_UIControlState ) /*0x6ae394*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x6ae398*/
    __3_YAXPAX_Z(v8); /*0x6ae39e*/
    g_UIControlState = 0; /*0x6ae3a6*/
  }
  CleanupFileTree(v10); /*0x6ae3b0*/
  SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x6ae3ba*/
  if ( dwNewLong == 1472 ) /*0x6ae3c9*/
    Screen::Capture(1, 0, v2, a2); /*0x6ae3cf*/
  return dwNewLong == 1559; /*0x6ae3e0*/
}



// ==== 0x006AE3F0  Skirmish::Setup_DlgProc  this=Skirmish  sig=csp ====
int __stdcall Skirmish_Setup_DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, int a4)
{
  int result; // eax
  HWND DlgItem; // eax
  int DlgCtrlID; // eax
  int v7; // esi
  int v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  wchar_t *v11; // eax
  int v12; // eax
  wchar_t *v13; // eax
  LRESULT v14; // eax
  LRESULT v15; // eax
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax

  result = BaseDialogProc(hDlg, a2, a3, a4); /*0x6ae40a*/
  if ( !result ) /*0x6ae411*/
  {
    if ( a2 > 0x497 ) /*0x6ae41d*/
    {
      if ( a2 != 1257 ) /*0x6ae4a9*/
        return 0; /*0x6ae4b1*/
      WideString::Assign_Alt(0); /*0x6ae4bb*/
      if ( *(_DWORD *)a4 && *(_DWORD *)(a4 + 4) != -1 ) /*0x6ae4ce*/
      {
        DlgCtrlID = GetDlgCtrlID(*(HWND *)a4); /*0x6ae4d5*/
        v7 = DlgCtrlID; /*0x6ae4db*/
        if ( DlgCtrlID == 1291 /*0x6ae52b*/
          || DlgCtrlID == 1294
          || DlgCtrlID == 1302
          || DlgCtrlID == 1306
          || DlgCtrlID == 1307
          || DlgCtrlID == 1308
          || DlgCtrlID == 1309 )
        {
          v14 = *(_DWORD *)(a4 + 4); /*0x6ae5da*/
          if ( v14 == -1 ) /*0x6ae5e6*/
            v14 = SendDlgItemMessageA(hDlg, v7, 0x147u, 0, 0); /*0x6ae5f3*/
          v15 = SendDlgItemMessageA(hDlg, v7, 0x150u, v14, 0); /*0x6ae5ff*/
          switch ( v15 ) /*0x6ae604*/
          {
            case -1: /*0x6ae604*/
              v16 = (wchar_t *)GetStringCSF(aSttPlayernone, (int)g_Str_File_Skirmish_cpp, 135); /*0x6ae617*/
              WideString::Assign_Alt(v16); /*0x6ae61f*/
              return 1; /*0x6ae62d*/
            case 2: /*0x6ae604*/
              v17 = (wchar_t *)GetStringCSF(g_Str_STT_PlayerDumbAI, (int)g_Str_File_Skirmish_cpp, 137); /*0x6ae646*/
              WideString::Assign_Alt(v17); /*0x6ae64e*/
              return 1; /*0x6ae65c*/
            case 1: /*0x6ae604*/
              v18 = (wchar_t *)GetStringCSF(g_Str_STT_PlayerSmartAI, (int)g_Str_File_Skirmish_cpp, 139); /*0x6ae675*/
              WideString::Assign_Alt(v18); /*0x6ae67d*/
              return 1; /*0x6ae68b*/
            case 0: /*0x6ae604*/
              v19 = (wchar_t *)GetStringCSF(g_Str_STT_PlayerGeniusAI, (int)g_Str_File_Skirmish_cpp, 141); /*0x6ae6a3*/
              WideString::Assign_Alt(v19); /*0x6ae6ab*/
              return 1; /*0x6ae6b9*/
          }
          WideString::Assign_Alt(0); /*0x6ae6c1*/
        }
        else if ( CountryCombo::IDToIndex(DlgCtrlID) == -1 ) /*0x6ae53b*/
        {
          if ( StartCombo::IDToIndex(v7) != -1 ) /*0x6ae547*/
          {
            v10 = GetComboBoxSelectedRaw(hDlg, v7, *(_DWORD *)(a4 + 4)); /*0x6ae589*/
            v11 = (wchar_t *)GameSetup::GetColorTooltip(v10); /*0x6ae590*/
            WideString::Assign_Alt(v11); /*0x6ae598*/
            return 1; /*0x6ae5a6*/
          }
          if ( Dialog::SideIDToIndex(v7) != -1 ) /*0x6ae553*/
          {
            v8 = SetComboBoxSelection(hDlg, v7, *(_DWORD *)(a4 + 4)); /*0x6ae561*/
            v9 = (wchar_t *)sub_4E4F30(v8); /*0x6ae568*/
            WideString::Assign_Alt(v9); /*0x6ae570*/
            return 1; /*0x6ae57e*/
          }
        }
        else
        {
          v12 = GetComboBoxSelected(hDlg, v7, *(_DWORD *)(a4 + 4)); /*0x6ae5b1*/
          if ( v12 != -1 ) /*0x6ae5b9*/
          {
            v13 = (wchar_t *)SideClass::GetName(v12); /*0x6ae5c1*/
            WideString::Assign_Alt(v13); /*0x6ae5c9*/
            return 1; /*0x6ae5d7*/
          }
        }
      }
      return 1; /*0x6ae6c6*/
    }
    else
    {
      if ( a2 == 1175 ) /*0x6ae423*/
        return Skirmish::SetupGame(hDlg, a4); /*0x6ae4a0*/
      if ( a2 != 15 ) /*0x6ae428*/
      {
        if ( a2 == 273 ) /*0x6ae430*/
        {
          DialogSkirmishFunc_UpdateMultiEngineer(hDlg, (unsigned __int16)a3, a4, HIWORD(a3)); /*0x6ae443*/
          return 1; /*0x6ae451*/
        }
        return 0; /*0x6ae430*/
      }
      if ( g_UIControlState ) /*0x6ae45b*/
      {
        DlgItem = GetDlgItem(hDlg, 1128); /*0x6ae463*/
        if ( !(unsigned __int8)SkirmishMapGen::LookupDialogHash(DlgItem) ) /*0x6ae46b*/
          Skirmish::RenderPreview(hDlg); /*0x6ae47b*/
      }
      ValidateRect(hDlg, 0); /*0x6ae483*/
      return 0; /*0x6ae48c*/
    }
  }
  return result; /*0x6ae448*/
}



// ==== 0x006AE6E0  Skirmish::SetupGame  this=Skirmish  sig=csp ====
int __thiscall Skirmish::SetupGame(Skirmish *this, int a2)
{
  ObjectClass *v2; // edi
  HWND DlgItem; // eax
  HWND v5; // esi
  char *v6; // eax
  int i; // edi
  int v8; // eax
  HWND v9; // esi
  wchar_t *StringCSF; // eax
  LRESULT v11; // eax
  wchar_t *v12; // eax
  LRESULT v13; // eax
  wchar_t *v14; // eax
  LRESULT v15; // eax
  wchar_t *v16; // eax
  LRESULT v17; // eax
  ObjectClass *v18; // esi
  int v19; // esi
  int v20; // eax
  int v21; // eax
  WPARAM v22; // edi
  int ResourceID2CSF; // esi
  int ResourceIDCSF; // edi
  HWND v25; // edi
  int v26; // eax
  int v27; // ecx
  char *v28; // esi
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int PlayerCountMap; // edi
  void *ptr_8; // ecx
  int j; // edi
  int v35; // eax
  HWND (__stdcall *v36)(HWND, int); // edi
  HWND v37; // eax
  HWND v38; // esi
  LPARAM v39; // edi
  HWND v40; // esi
  HWND v41; // esi
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  HWND v45; // eax
  HWND v46; // eax
  Skirmish *v47; // esi
  ObjectClass *v48; // eax
  Skirmish *v49; // eax
  ObjectClass *v51; // [esp-4h] [ebp-24h]
  ScenarioClass *v52; // [esp+0h] [ebp-20h]
  int hWnd; // [esp+Ch] [ebp-14h]
  HWND hWnda; // [esp+Ch] [ebp-14h]
  int *v55; // [esp+10h] [ebp-10h]
  ObjectClass *v56; // [esp+14h] [ebp-Ch]
  int nIDDlgItem; // [esp+18h] [ebp-8h]
  HWND nIDDlgItemb; // [esp+18h] [ebp-8h]
  int nIDDlgItema; // [esp+18h] [ebp-8h]
  HWND v60; // [esp+1Ch] [ebp-4h]
  HWND ResourceID4CSF; // [esp+1Ch] [ebp-4h]
  HWND v62; // [esp+1Ch] [ebp-4h]
  HWND First; // [esp+1Ch] [ebp-4h]

  Network::processGameEvent((Network *)&stru_A8B250); /*0x6ae6ed*/
  DlgItem = GetDlgItem((HWND)this, 1696); /*0x6ae6f8*/
  v5 = DlgItem; /*0x6ae704*/
  if ( DlgItem ) /*0x6ae708*/
  {
    SendMessageA(DlgItem, 0xC5u, 0x13u, 0); /*0x6ae714*/
    v6 = CharToWideString(unk_A8B380); /*0x6ae71b*/
    SendMessageA(v5, 0x4B2u, 0, (LPARAM)v6); /*0x6ae729*/
    SendMessageA(v5, 0x4D1u, 1u, 0); /*0x6ae735*/
  }
  v51 = v2; /*0x6ae737*/
  for ( i = 0; i < 7; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v8 = 1294; /*0x6ae74a*/
          break;
        case 2:
          v8 = 1302; /*0x6ae756*/
          break;
        case 3:
          v8 = 1306; /*0x6ae762*/
          break;
        case 4:
          v8 = 1307; /*0x6ae76e*/
          break;
        case 5:
          v8 = 1308; /*0x6ae77a*/
          break;
        default:
          v8 = i != 6 ? -1 : 1309;
          break;
      }
    }
    else
    {
      v8 = 1291; /*0x6ae73e*/
    }
    v9 = GetDlgItem((HWND)this, v8); /*0x6ae79c*/
    SendMessageA(v9, 0x14Bu, 0, 0); /*0x6ae7a8*/
    StringCSF = GetStringCSF(aGuiNone, 0, g_Str_File_Skirmish_cpp, 158); /*0x6ae7bb*/
    v11 = SendMessageA(v9, 0x4C2u, 0, (LPARAM)StringCSF); /*0x6ae7c9*/
    SendMessageA(v9, 0x151u, v11, -1); /*0x6ae7d4*/
    v12 = GetStringCSF(g_Str_GUI_AIEasy, 0, g_Str_File_Skirmish_cpp, 161); /*0x6ae7e7*/
    v13 = SendMessageA(v9, 0x4C2u, 0, (LPARAM)v12); /*0x6ae7f5*/
    SendMessageA(v9, 0x151u, v13, 2); /*0x6ae800*/
    v14 = GetStringCSF(g_Str_GUI_AINormal, 0, g_Str_File_Skirmish_cpp, 164); /*0x6ae813*/
    v15 = SendMessageA(v9, 0x4C2u, 0, (LPARAM)v14); /*0x6ae821*/
    SendMessageA(v9, 0x151u, v15, 1); /*0x6ae82c*/
    v16 = GetStringCSF(g_Str_GUI_AIHard, 0, g_Str_File_Skirmish_cpp, 167); /*0x6ae83f*/
    v17 = SendMessageA(v9, 0x4C2u, 0, (LPARAM)v16); /*0x6ae84d*/
    SendMessageA(v9, 0x151u, v17, 0); /*0x6ae858*/
    SendMessageA(v9, 0x14Eu, 0, 0); /*0x6ae864*/
  }
  SkirmishDialog::FillComboBoxes((SkirmishDialog *)this); /*0x6ae872*/
  InitGameDropdownColors(v51); /*0x6ae877*/
  Lobby::FillPlayerFactions((Lobby *)this); /*0x6ae87e*/
  _cfltcvt_init(); /*0x6ae883*/
  Lobby::InvalidateFactionCombos((Lobby *)this); /*0x6ae88a*/
  GDlg::LoadLetterStrings(); /*0x6ae88f*/
  Lobby::InvalidatePlayerSlots((Lobby *)this); /*0x6ae896*/
  SetupSkirmishDialogPlayerSlot((HWND)this, 0); /*0x6ae89f*/
  MapSkirmishDialogPlayerToControl((HWND)this, 0); /*0x6ae8a8*/
  FillLobbyFactionComboBox((HWND)this, 0); /*0x6ae8b1*/
  SetupLobbyPlayerSlotDialog((HWND)this, 0); /*0x6ae8ba*/
  v56 = 0; /*0x6ae8bf*/
  v55 = (int *)&unk_A8B3F0; /*0x6ae8c7*/
  v18 = 0; /*0x6ae8cf*/
  do
  {
    if ( v18 )
    {
      if ( v18 == (ObjectClass *)1 )
      {
        v19 = 1294; /*0x6ae8e3*/
      }
      else if ( v18 == (ObjectClass *)2 )
      {
        v19 = 1302; /*0x6ae8ef*/
      }
      else if ( v18 == (ObjectClass *)3 )
      {
        v19 = 1306; /*0x6ae8fb*/
      }
      else if ( v18 == (ObjectClass *)4 )
      {
        v19 = 1307; /*0x6ae907*/
      }
      else if ( v18 == (ObjectClass *)5 )
      {
        v19 = 1308; /*0x6ae913*/
      }
      else
      {
        v19 = v18 != (ObjectClass *)6 ? -1 : 1309;
      }
    }
    else
    {
      v19 = 1291; /*0x6ae8d7*/
    }
    v20 = *(v55 - 1); /*0x6ae931*/
    switch ( v20 ) /*0x6ae937*/
    {
      case 1: /*0x6ae937*/
        hWnd = -1; /*0x6ae939*/
        break;
      case 4: /*0x6ae937*/
        hWnd = 0; /*0x6ae948*/
        break;
      case 5: /*0x6ae937*/
        hWnd = 1; /*0x6ae957*/
        break;
      default:
        v21 = -(v20 != 6); /*0x6ae966*/
        LOBYTE(v21) = v21 & 0xFD; /*0x6ae968*/
        hWnd = v21 + 2; /*0x6ae96d*/
        break;
    }
    v22 = 0; /*0x6ae982*/
    v60 = (HWND)SendDlgItemMessageA((HWND)this, v19, 0x146u, 0, 0); /*0x6ae986*/
    if ( (int)v60 > 0 ) /*0x6ae98a*/
    {
      while ( SendDlgItemMessageA((HWND)this, v19, 0x150u, v22, 0) != hWnd ) /*0x6ae9a0*/
      {
        if ( (int)++v22 >= (int)v60 ) /*0x6ae9a9*/
          goto LABEL_44; /*0x6ae9a9*/
      }
      SendDlgItemMessageA((HWND)this, v19, 0x14Eu, v22, 0); /*0x6ae9b7*/
    }
LABEL_44:
    v56 = (ObjectClass *)((char *)v56 + 1); /*0x6ae9bd*/
    ResourceID2CSF = GetResourceID2CSF(v56); /*0x6ae9d1*/
    ResourceIDCSF = GetResourceIDCSF(v56); /*0x6ae9dc*/
    nIDDlgItem = GetResourceID3CSF(v56); /*0x6ae9e7*/
    ResourceID4CSF = (HWND)GetResourceID4CSF(v56); /*0x6ae9f0*/
    if ( hWnd == -1 ) /*0x6ae9fb*/
    {
      SetupLobbyCountryCombo((HWND)this, ResourceID2CSF, -2); /*0x6aea07*/
      SetupSkirmishSpawnLocations((HWND)this, ResourceIDCSF, -2); /*0x6aea12*/
      SetupLobbyFactionSlots((HWND)this, nIDDlgItem, -2); /*0x6aea1f*/
      SetupLobbyPlayerSlots((HWND)this, (int)ResourceID4CSF, -2); /*0x6aea2c*/
      hWnda = GetDlgItem((HWND)this, ResourceID2CSF); /*0x6aea3d*/
      v25 = GetDlgItem((HWND)this, ResourceIDCSF); /*0x6aea43*/
      nIDDlgItemb = GetDlgItem((HWND)this, nIDDlgItem); /*0x6aea4d*/
      v62 = GetDlgItem((HWND)this, (int)ResourceID4CSF); /*0x6aea66*/
      EnableWindow(hWnda, 0); /*0x6aea6a*/
      EnableWindow(v25, 0); /*0x6aea6f*/
      EnableWindow(nIDDlgItemb, 0); /*0x6aea78*/
      EnableWindow(v62, 0); /*0x6aea81*/
    }
    else
    {
      SetupLobbyCountryCombo((HWND)this, ResourceID2CSF, *v55); /*0x6aea90*/
      SetupSkirmishSpawnLocations((HWND)this, ResourceIDCSF, v55[1]); /*0x6aeaa1*/
    }
    v18 = v56; /*0x6aeaa6*/
    v55 += 3; /*0x6aeab8*/
  }
  while ( (int)&v56->AbstractClass + 1 < 8 );
  if ( dword_A8B3C4 <= 0 || (v26 = MultiplayerGameMode::ListGet(), v27 = dword_A8B3C4, dword_A8B3C4 > v26) ) /*0x6aeadb*/
  {
    v27 = *(_DWORD *)(MultiplayerGameMode::GetFirst() + 40); /*0x6aeae2*/
    dword_A8B3C4 = v27; /*0x6aeae5*/
  }
  *(_DWORD *)stru_A8B250.__pad_0 = v27; /*0x6aeaeb*/
  v28 = (char *)Skirmish_Setup(); /*0x6aeaf6*/
  First = (HWND)v28; /*0x6aeaf8*/
  dword_A8B3C4 = *((_DWORD *)v28 + 10); /*0x6aeaff*/
  *(_DWORD *)stru_A8B250.__pad_0 = *((_DWORD *)v28 + 10); /*0x6aeb07*/
  GDlg::LoadLetterStrings(); /*0x6aeb0d*/
  Lobby::InvalidatePlayerSlots((Lobby *)this); /*0x6aeb14*/
  SetupLobbyPlayerSlotDialog((HWND)this, 0); /*0x6aeb1d*/
  v29 = dword_A8B3C8; /*0x6aeb22*/
  if ( dword_A8B3C8 < 0 || dword_A8B3C8 >= dword_A8B8D8 ) /*0x6aeb32*/
  {
    v29 = 0; /*0x6aeb34*/
    dword_A8B3C8 = 0; /*0x6aeb36*/
  }
  *(_DWORD *)&stru_A8B250.__pad_0[4] = LoadScenarioClassByIndex(v29) != 0 ? dword_A8B3C8 : 0;
  nIDDlgItema = *(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]); /*0x6aeb5e*/
  if ( !(unsigned __int8)MapPreview::Check(v28, nIDDlgItema) ) /*0x6aeb62*/
  {
    v30 = (*(int (__thiscall **)(char *))(*(_DWORD *)v28 + 68))(v28); /*0x6aeb6f*/
    if ( v30 == -1 ) /*0x6aeb75*/
    {
      First = (HWND)MultiplayerGameMode::GetFirst(); /*0x6aeb7f*/
      dword_A8B3C4 = *((_DWORD *)First + 10); /*0x6aeb83*/
      *(struct HWND__ *)stru_A8B250.__pad_0 = First[10]; /*0x6aeb8c*/
      v30 = (*(int (__thiscall **)(HWND))(*(_DWORD *)First + 68))(First); /*0x6aeb96*/
    }
    v31 = *(_DWORD *)(dword_A8B8CC + 4 * v30); /*0x6aeb9f*/
    dword_A8B3C8 = v30; /*0x6aeba2*/
    nIDDlgItema = v31; /*0x6aeba7*/
    *(_DWORD *)&stru_A8B250.__pad_0[4] = v30; /*0x6aebab*/
    strcpy(byte_A8B8E0, (const char *)(v31 + 88)); /*0x6aebca*/
    v28 = (char *)First; /*0x6aebd3*/
  }
  dword_A8B23C = (ObjectClass *)v28; /*0x6aebdd*/
  PlayerCountMap = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x6aebee*/
  if ( !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 1))(dword_A8B23C) /*0x6aec07*/
    || (ptr_8 = dword_A8B230[127].ptr_8, (int)ptr_8 > PlayerCountMap) )
  {
    ptr_8 = (void *)PlayerCountMap; /*0x6aec09*/
  }
  ResetLobbyFactionTable((int)ptr_8); /*0x6aec0b*/
  Lobby::InvalidateFactionCombos((Lobby *)this); /*0x6aec12*/
  Lobby::InvalidatePlayerSlots((Lobby *)this); /*0x6aec19*/
  if ( this && dword_A8B23C ) /*0x6aec29*/
  {
    for ( j = 1; j < 8; ++j ) /*0x6aec2b*/
    {
      v35 = GetResourceID4CSF((ObjectClass *)j); /*0x6aec32*/
      if ( dword_A8B23C && LOBYTE(dword_A8B23C->ambientSoundController[0]) ) /*0x6aec41*/
        SetupLobbyPlayerSlots((HWND)this, v35, 3); /*0x6aec4a*/
      else
        SetupLobbyPlayerSlots((HWND)this, v35, -2); /*0x6aec52*/
    }
  }
  Skirmish_Setup_6ADDF0((HWND)this, -1, *(int *)&stru_A8B250.__pad_0[4]); /*0x6aec69*/
  dword_A8B23C = (ObjectClass *)v28; /*0x6aec6e*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)v28 + 32))(v28); /*0x6aec78*/
  Skirmish::EnableSpawnButtons(this); /*0x6aec7d*/
  SetDialogPlayerName((HWND)this, (int)v28); /*0x6aec86*/
  Dialog::ShowPlayerName((Dialog *)this); /*0x6aec8d*/
  PtrVector::Destroy(&stru_A8DA74); /*0x6aec97*/
  v36 = GetDlgItem; /*0x6aecad*/
  *(_DWORD *)&stru_A8B250.__pad_0[24] = dword_A8B3CC; /*0x6aecb9*/
  *(_DWORD *)&stru_A8B250.__pad_0[12] = dword_A8B3D0; /*0x6aecbf*/
  *(_DWORD *)&stru_A8B250.__pad_0[32] = dword_A8B3D4; /*0x6aecc5*/
  v37 = GetDlgItem((HWND)this, 1321); /*0x6aecca*/
  v38 = v37; /*0x6aeccc*/
  if ( v37 ) /*0x6aecd0*/
  {
    v39 = 6 - *(_DWORD *)&stru_A8B250.__pad_0[24]; /*0x6aecea*/
    SendMessageA(v37, 0x406u, 1u, 393216); /*0x6aecec*/
    SendMessageA(v38, 0x405u, 1u, v39); /*0x6aecf7*/
    v36 = GetDlgItem; /*0x6aecf9*/
  }
  v40 = v36((HWND)this, 1297); /*0x6aed07*/
  if ( v40 ) /*0x6aed0b*/
  {
    SendMessageA( /*0x6aed32*/
      v40,
      0x406u,
      1u,
      *(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5248)
    | (*(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5256) << 16));
    SendMessageA(v40, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[12]); /*0x6aed42*/
    SendMessageA(v40, 0x4ABu, 0, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5260)); /*0x6aed59*/
  }
  v41 = v36((HWND)this, 1292); /*0x6aed63*/
  if ( v41 ) /*0x6aed67*/
  {
    SendMessageA( /*0x6aed8e*/
      v41,
      0x406u,
      1u,
      *(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5264)
    | (*(unsigned __int16 *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5272) << 16));
    SendMessageA(v41, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[32]); /*0x6aed9e*/
  }
  stru_A8B250.__pad_0[18] = byte_A8B3D8; /*0x6aedb1*/
  stru_A8B250.__pad_0[19] = byte_A8B3D9; /*0x6aedbd*/
  stru_A8B250.__pad_0[20] = byte_A8B3DA; /*0x6aedcf*/
  dword_A8B320 = byte_A8B3DB; /*0x6aedd4*/
  stru_A8B250.__pad_0[17] = byte_A8B3DC; /*0x6aedda*/
  v42 = v36((HWND)this, 1358); /*0x6aede0*/
  if ( v42 ) /*0x6aede4*/
    SendMessageA(v42, 0xF1u, stru_A8B250.__pad_0[18] != 0, 0); /*0x6aedfc*/
  v43 = v36((HWND)this, 1690); /*0x6aee04*/
  if ( v43 ) /*0x6aee08*/
    SendMessageA(v43, 0xF1u, stru_A8B250.__pad_0[19] != 0, 0); /*0x6aee20*/
  v44 = v36((HWND)this, 1693); /*0x6aee28*/
  if ( v44 ) /*0x6aee2c*/
    SendMessageA(v44, 0xF1u, stru_A8B250.__pad_0[20] != 0, 0); /*0x6aee44*/
  v45 = v36((HWND)this, 1683); /*0x6aee4c*/
  if ( v45 ) /*0x6aee50*/
    SendMessageA(v45, 0xF1u, dword_A8B320 != 0, 0); /*0x6aee68*/
  v46 = v36((HWND)this, 1686); /*0x6aee70*/
  if ( v46 ) /*0x6aee75*/
    SendMessageA(v46, 0xF1u, stru_A8B250.__pad_0[17] != 0, 0); /*0x6aee8d*/
  if ( !(unsigned __int8)IsRandMap::Sed(nIDDlgItema) ) /*0x6aee93*/
    goto LABEL_92; /*0x6aee93*/
  ScenarioClass::CopyStartPositions(v52); /*0x6aee9c*/
  v47 = g_UIControlState; /*0x6aeea1*/
  if ( g_UIControlState ) /*0x6aeea9*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x6aeead*/
    __3_YAXPAX_Z(v47); /*0x6aeeb3*/
  }
  v48 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x6aeebd*/
  v49 = v48 ? (Skirmish *)unknown_libname_27(v48) : 0;
  g_UIControlState = v49; /*0x6aeedb*/
  Surface::LoadToSurfaceSHP((Surface *)v49, ExistingFileName); /*0x6aeee0*/
  if ( !*(_DWORD *)g_UIControlState ) /*0x6aeeeb*/
LABEL_92:
    Session::PrepareGame((Session *)this); /*0x6aeef2*/
  return 0; /*0x6aeef7*/
}



// ==== 0x006AEF10  sub_6AEF10  this=-  sig=ida-proto ====
void sub_6AEF10()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6aef1c*/
  dbl_B0B5C0 = Math::Sqrt(v0 + v0); /*0x6aef2e*/
}



// ==== 0x006AEF40  sub_6AEF40  this=-  sig=ida-proto ====
void sub_6AEF40()
{
  dbl_B0B628 = dbl_B0B5C0 / 60.0; /*0x6aef4c*/
}



// ==== 0x006AEF60  sub_6AEF60  this=-  sig=ida-proto ====
void sub_6AEF60()
{
  dbl_B0B610 = 1.0 / dbl_B0B628; /*0x6aef6c*/
}



// ==== 0x006AEF80  sub_6AEF80  this=-  sig=ida-proto ====
void sub_6AEF80()
{
  dbl_B0B608 = 0.0174532925199433 * 45.0; /*0x6aef8c*/
}



// ==== 0x006AEFA0  sub_6AEFA0  this=-  sig=ida-proto ====
void sub_6AEFA0()
{
  dbl_B0B5C8 = 0.0174532925199433 * 60.0; /*0x6aefac*/
}



// ==== 0x006AEFC0  sub_6AEFC0  this=-  sig=ida-proto ====
void sub_6AEFC0()
{
  dbl_B0B5A0 = 0.0174532925199433 * 90.0; /*0x6aefcc*/
}



// ==== 0x006AEFE0  sub_6AEFE0  this=-  sig=ida-proto ====
__int64 sub_6AEFE0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0B5A0 - dbl_B0B5C8); /*0x6aeff2*/
  result = Math::RoundToInt(v0 * dbl_B0B5C0 * 0.5); /*0x6af006*/
  dword_B0B630 = result; /*0x6af00b*/
  return result; /*0x6af010*/
}



// ==== 0x006AF020  sub_6AF020  this=-  sig=ida-proto ====
void sub_6AF020()
{
  dbl_B0B5D0 = Math::ArcTan((double)dword_B0B630 * 0.00390625); /*0x6af037*/
}



// ==== 0x006AF050  sub_6AF050  this=-  sig=ida-proto ====
void sub_6AF050()
{
  dbl_B0B5E8 = Math::ArcTan((double)(2 * dword_B0B630) / dbl_B0B5C0); /*0x6af072*/
}



// ==== 0x006AF080  sub_6AF080  this=-  sig=ida-proto ====
__int64 sub_6AF080()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B630) + 0.5); /*0x6af09b*/
  dword_B0B624 = result; /*0x6af0a0*/
  return result; /*0x6af0a6*/
}



// ==== 0x006AF0B0  sub_6AF0B0  this=-  sig=ida-proto ====
int sub_6AF0B0()
{
  dword_B0B5B8 = 0; /*0x6af0b2*/
  return 0; /*0x6af0be*/
}



// ==== 0x006AF0C0  sub_6AF0C0  this=-  sig=ida-proto ====
int sub_6AF0C0()
{
  dword_B0B5D8 = 0; /*0x6af0c2*/
  dword_B0B5DC = 0; /*0x6af0c7*/
  dword_B0B5E0 = 0; /*0x6af0cc*/
  return 0; /*0x6af0d1*/
}



// ==== 0x006AF0E0  sub_6AF0E0  this=-  sig=ida-proto ====
int sub_6AF0E0()
{
  dword_B0B620 = 0; /*0x6af0e5*/
  dword_B0B618 = 128; /*0x6af0ef*/
  dword_B0B61C = 128; /*0x6af0f4*/
  return 128; /*0x6af0f9*/
}



// ==== 0x006AF100  sub_6AF100  this=-  sig=ida-proto ====
int sub_6AF100()
{
  dword_B0B5A8 = 0; /*0x6af102*/
  dword_B0B5AC = 0; /*0x6af107*/
  dword_B0B5B0 = 0; /*0x6af10c*/
  dword_B0B5B4 = 0; /*0x6af111*/
  return 0; /*0x6af116*/
}



// ==== 0x006AF120  sub_6AF120  this=-  sig=ida-proto ====
int sub_6AF120()
{
  dword_B0B5F4 = 0; /*0x6af127*/
  dword_B0B5F8 = 0; /*0x6af12c*/
  byte_B0B5FC = 1; /*0x6af131*/
  byte_B0B5FD = 0; /*0x6af138*/
  SlaveManagerClass_Array = (int)&DynamicVectorClass<SlaveManagerClass *>::`vftable'; /*0x6af13d*/
  dword_B0B604 = 10; /*0x6af147*/
  dword_B0B600 = 0; /*0x6af151*/
  return atexit(sub_6AF160); /*0x6af15c*/
}



// ==== 0x006AF160  sub_6AF160  this=-  sig=ida-proto ====
void __cdecl sub_6AF160()
{
  SlaveManagerClass_Array = (int)&VectorClass<SlaveManagerClass *>::`vftable'; /*0x6af168*/
  if ( dword_B0B5F4 && byte_B0B5FD ) /*0x6af17c*/
  {
    __3_YAXPAX_Z(dword_B0B5F4); /*0x6af17f*/
    dword_B0B5F4 = 0; /*0x6af187*/
  }
  byte_B0B5FD = 0; /*0x6af18d*/
  dword_B0B5F8 = 0; /*0x6af193*/
}



// ==== 0x006AF1A0  SlaveManagerClass::ctor  this=SlaveManagerClass  sig=csp ====
int __thiscall sub_6AF1A0(int this, int a2, int a3, int a4, int a5, int a6)
{
  int *v7; // eax
  wchar_t *v8; // ecx
  int *v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v19; // [esp+10h] [ebp-8h]
  int i; // [esp+1Ch] [ebp+4h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6af1a8*/
  SlaveControlVector::Constructor((_DWORD *)(this + 56), 0, 0); /*0x6af1b6*/
  *(_DWORD *)(this + 56) = &DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6af1c3*/
  *(_DWORD *)(this + 76) = 10; /*0x6af1c9*/
  *(_DWORD *)(this + 72) = 0; /*0x6af1d0*/
  *(_DWORD *)(this + 80) = dword_A8ED84; /*0x6af1d8*/
  *(_DWORD *)(this + 88) = 0; /*0x6af1df*/
  *(_DWORD *)(this + 36) = a2; /*0x6af1e2*/
  *(_DWORD *)(this + 40) = a3; /*0x6af1e9*/
  *(_DWORD *)this = &SlaveManagerClass::`vftable'; /*0x6af1f2*/
  *(_DWORD *)(this + 4) = &SlaveManagerClass::`vftable'; /*0x6af1f8*/
  *(_DWORD *)(this + 8) = &SlaveManagerClass::`vftable'; /*0x6af1ff*/
  *(_DWORD *)(this + 12) = &SlaveManagerClass::`vftable'; /*0x6af206*/
  *(_DWORD *)(this + 44) = a4; /*0x6af20d*/
  *(_DWORD *)(this + 48) = a5; /*0x6af210*/
  *(_DWORD *)(this + 52) = a6; /*0x6af213*/
  for ( i = 0; i < *(_DWORD *)(this + 44); ++i ) /*0x6af21a*/
  {
    v7 = (int *)__2_YAPAXI_Z(0x14u); /*0x6af223*/
    if ( v7 ) /*0x6af22d*/
    {
      v8 = dword_A8ED84; /*0x6af22f*/
      v7[4] = 0; /*0x6af235*/
      v7[2] = (int)v8; /*0x6af238*/
      v9 = v7; /*0x6af23b*/
    }
    else
    {
      v9 = 0; /*0x6af23f*/
    }
    v10 = **(_DWORD **)(this + 40); /*0x6af249*/
    v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 60))(*(_DWORD *)(this + 36)); /*0x6af24b*/
    v12 = (*(int (__thiscall **)(_DWORD, int))(v10 + 140))(*(_DWORD *)(this + 40), v11); /*0x6af252*/
    *v9 = v12; /*0x6af25a*/
    if ( v12 ) /*0x6af25f*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 212))(v12); /*0x6af265*/
      *(_DWORD *)(*v9 + 732) = *(_DWORD *)(this + 36); /*0x6af274*/
      v9[1] = 0; /*0x6af27a*/
      v9[2] = (int)dword_A8ED84; /*0x6af284*/
      v9[3] = v19; /*0x6af28a*/
      v9[4] = 0; /*0x6af28d*/
    }
    v13 = *(_DWORD *)(this + 64); /*0x6af290*/
    if ( *(_DWORD *)(this + 72) >= v13 ) /*0x6af298*/
    {
      if ( !*(_BYTE *)(this + 69) && v13 ) /*0x6af2a1*/
        continue; /*0x6af2a1*/
      v14 = *(_DWORD *)(this + 76); /*0x6af2a3*/
      if ( v14 <= 0 /*0x6af2b2*/
        || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 56) + 8))(this + 56, v13 + v14, 0) )
      {
        continue; /*0x6af2b2*/
      }
    }
    v15 = *(_DWORD *)(this + 72); /*0x6af2b9*/
    v16 = *(_DWORD *)(this + 60); /*0x6af2bc*/
    *(_DWORD *)(this + 72) = v15 + 1; /*0x6af2c2*/
    *(_DWORD *)(v16 + 4 * v15) = v9; /*0x6af2c5*/
  }
  *(_DWORD *)(this + 80) = dword_A8ED84; /*0x6af2e7*/
  *(_DWORD *)(this + 84) = v19; /*0x6af2ee*/
  *(_DWORD *)(this + 88) = 10; /*0x6af2f1*/
  *(_DWORD *)(this + 92) = 0; /*0x6af2f4*/
  *(_DWORD *)(this + 96) = 0; /*0x6af2f7*/
  if ( dword_B0B600 < dword_B0B5F8 /*0x6af32e*/
    || (byte_B0B5FD || !dword_B0B5F8)
    && dword_B0B604 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SlaveManagerClass_Array + 8))(
         &SlaveManagerClass_Array,
         dword_B0B5F8 + dword_B0B604,
         0) )
  {
    v17 = dword_B0B600++; /*0x6af33b*/
    *((_DWORD *)dword_B0B5F4 + v17) = this; /*0x6af34a*/
  }
  return this; /*0x6af34f*/
}



// ==== 0x006AF360  SlaveManagerClass::Constructor  this=SlaveManagerClass  sig=csp ====
int __thiscall SlaveManagerClass::Constructor(SlaveManagerClass *this)
{
  int v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6af366*/
  this->slaveVectorCount = 0; /*0x6af371*/
  this->slaveVectorCapacity = 0; /*0x6af374*/
  LOBYTE(this->creationFrame) = 1; /*0x6af377*/
  BYTE1(this->creationFrame) = 0; /*0x6af37b*/
  this->slaves[0] = (int)&DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6af37e*/
  *(_DWORD *)&this->__pad_48[4] = 10; /*0x6af385*/
  *(_DWORD *)this->__pad_48 = 0; /*0x6af38c*/
  *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af395*/
  this->SlaveManagerClass_field_58 = 0; /*0x6af398*/
  this->AbstractClass = &SlaveManagerClass::`vftable'; /*0x6af39b*/
  this->? = &SlaveManagerClass::`vftable'; /*0x6af3a1*/
  this->? = &SlaveManagerClass::`vftable'; /*0x6af3a8*/
  this->? = &SlaveManagerClass::`vftable'; /*0x6af3af*/
  this->master = 0; /*0x6af3b6*/
  this->house = 0; /*0x6af3b9*/
  this->slaveOwner = 0; /*0x6af3bc*/
  this->slaveType = 0; /*0x6af3bf*/
  this->slaveCount = 0; /*0x6af3c2*/
  *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af3cb*/
  this->SlaveManagerClass_field_54 = v4; /*0x6af3ce*/
  this->SlaveManagerClass_field_58 = 0; /*0x6af3d1*/
  this->SlaveManagerClass_field_5C = 0; /*0x6af3d4*/
  this->SlaveManagerClass_field_60 = 0; /*0x6af3d7*/
  if ( dword_B0B600 < dword_B0B5F8 /*0x6af40c*/
    || (byte_B0B5FD || !dword_B0B5F8)
    && dword_B0B604 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SlaveManagerClass_Array + 8))(
         &SlaveManagerClass_Array,
         dword_B0B5F8 + dword_B0B604,
         0) )
  {
    v2 = dword_B0B600++; /*0x6af419*/
    *((_DWORD *)dword_B0B5F4 + v2) = this; /*0x6af428*/
  }
  return (int)this; /*0x6af42d*/
}



// ==== 0x006AF4A0  SlaveManagerClass::Constructor_SlaveManagerClass  this=SlaveManagerClass  sig=csp ====
void __thiscall SlaveManagerClass::Constructor_SlaveManagerClass(int this)
{
  int i; // esi
  int v3; // ebp
  int v4; // eax
  void *v5; // eax
  int v6; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)this = &SlaveManagerClass::`vftable'; /*0x6af4a5*/
  *(_DWORD *)(this + 4) = &SlaveManagerClass::`vftable'; /*0x6af4ab*/
  *(_DWORD *)(this + 8) = &SlaveManagerClass::`vftable'; /*0x6af4b2*/
  *(_DWORD *)(this + 12) = &SlaveManagerClass::`vftable'; /*0x6af4b9*/
  for ( i = *(_DWORD *)(this + 72) - 1; i >= 0; --i ) /*0x6af4c4*/
  {
    if ( *(_DWORD *)(*(_DWORD *)(this + 60) + 4 * i) ) /*0x6af4c9*/
      __3_YAXPAX_Z(*(void **)(*(_DWORD *)(this + 60) + 4 * i)); /*0x6af4d1*/
  }
  v3 = *(_DWORD *)(this + 64); /*0x6af4e5*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 56) + 12))(this + 56); /*0x6af4e8*/
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 56) + 8))(this + 56, v3, 0); /*0x6af4f2*/
  v6 = this; /*0x6af505*/
  v4 = (*(int (__thiscall **)(int *, int *))(SlaveManagerClass_Array + 16))(&SlaveManagerClass_Array, &v6); /*0x6af509*/
  if ( v4 != -1 && v4 < dword_B0B600 && v4 < --dword_B0B600 ) /*0x6af525*/
  {
    do /*0x6af53d*/
    {
      ++v4; /*0x6af52d*/
      *((_DWORD *)dword_B0B5F4 + v4 - 1) = *((_DWORD *)dword_B0B5F4 + v4); /*0x6af531*/
    }
    while ( v4 < dword_B0B600 ); /*0x6af53d*/
  }
  v5 = *(void **)(this + 60); /*0x6af53f*/
  *(_DWORD *)(this + 56) = &VectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6af542*/
  if ( v5 && *(_BYTE *)(this + 69) ) /*0x6af54c*/
  {
    __3_YAXPAX_Z(v5); /*0x6af554*/
    *(_DWORD *)(this + 60) = 0; /*0x6af55c*/
  }
  *(_BYTE *)(this + 69) = 0; /*0x6af565*/
  *(_DWORD *)(this + 64) = 0; /*0x6af569*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x6af570*/
}



// ==== 0x006AF580  SlaveManagerClass::SetOwner  this=SlaveManagerClass  sig=csp ====
char __thiscall SlaveManagerClass::SetOwner(SlaveManagerClass *this, int a2)
{
  TechnoClass *master; // eax
  TechnoClass *v4; // ecx
  int v5; // ecx
  int i; // ecx

  master = this->master; /*0x6af588*/
  master->slaveManager = 0; /*0x6af58b*/
  this->master = (TechnoClass *)a2; /*0x6af595*/
  v4 = *(TechnoClass **)(a2 + 728); /*0x6af598*/
  if ( v4 ) /*0x6af5a0*/
  {
    LOBYTE(master) = TechnoClass::MutateAll(v4, 0, 0); /*0x6af5a6*/
    v5 = *(_DWORD *)(a2 + 728); /*0x6af5ab*/
    if ( v5 ) /*0x6af5b3*/
      LOBYTE(master) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x6af5b9*/
  }
  *(_DWORD *)(a2 + 728) = this; /*0x6af5bc*/
  for ( i = *(_DWORD *)this->__pad_48 - 1; i >= 0; --i ) /*0x6af5c6*/
  {
    master = **(TechnoClass ***)(this->slaveVectorCount + 4 * i); /*0x6af5ce*/
    if ( master ) /*0x6af5d2*/
      master->slaveOwner = this->master; /*0x6af5d7*/
  }
  return (char)master; /*0x6af5e0*/
}



// ==== 0x006AF5F0  SlaveManagerClass::UpdateSlaves  this=SlaveManagerClass  sig=csp ====
char __thiscall SlaveManagerClass::UpdateSlaves(SlaveManagerClass *this)
{
  int *v2; // edi
  int v3; // edx
  TechnoClass *SlaveManagerClass_field_58; // eax
  SlaveManagerClass *v6; // [esp+0h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-8h]

  v2 = *(int **)&stru_A8EB00.?[416]; /*0x6af5f7*/
  v3 = *(_DWORD *)&this->__pad_48[8]; /*0x6af5fd*/
  SlaveManagerClass_field_58 = (TechnoClass *)this->SlaveManagerClass_field_58; /*0x6af600*/
  if ( v3 == -1 ) /*0x6af606*/
  {
LABEL_4:
    if ( SlaveManagerClass_field_58 ) /*0x6af614*/
      return (char)SlaveManagerClass_field_58; /*0x6af614*/
    goto LABEL_5; /*0x6af614*/
  }
  if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 < (int)SlaveManagerClass_field_58 ) /*0x6af60e*/
  {
    SlaveManagerClass_field_58 = (TechnoClass *)((char *)SlaveManagerClass_field_58 /*0x6af610*/
                                               - (*(_DWORD *)&stru_A8EB00.?[416]
                                                - v3));
    goto LABEL_4; /*0x6af610*/
  }
LABEL_5:
  *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af616*/
  this->SlaveManagerClass_field_54 = v7; /*0x6af622*/
  this->SlaveManagerClass_field_58 = 10; /*0x6af625*/
  SlaveManagerClass_field_58 = this->master; /*0x6af628*/
  if ( SlaveManagerClass_field_58 ) /*0x6af62d*/
  {
    SlaveManagerClass::ProcessSlaves(v6, v2, (int)this); /*0x6af631*/
    LOBYTE(SlaveManagerClass_field_58) = ProcessDeployAction((ObjectClass *)this); /*0x6af638*/
  }
  return (char)SlaveManagerClass_field_58; /*0x6af63d*/
}



// ==== 0x006AF650  SlaveManagerClass::CreateSlave  this=SlaveManagerClass  sig=csp ====
wchar_t *__thiscall SlaveManagerClass::CreateSlave(SlaveManagerClass *this, wchar_t **a2)
{
  int (__thiscall **ptr_0)(HouseClass *, int); // edi
  int v4; // eax
  wchar_t *result; // eax
  wchar_t *v6; // [esp+Ch] [ebp-8h]

  ptr_0 = (int (__thiscall **)(HouseClass *, int))this->house->AbstractClass; /*0x6af65f*/
  v4 = (*((int (__thiscall **)(TechnoClass *))this->master->RadioClass + 15))(this->master); /*0x6af661*/
  result = (wchar_t *)ptr_0[35](this->house, v4); /*0x6af668*/
  *a2 = result; /*0x6af674*/
  if ( result ) /*0x6af676*/
  {
    (*(void (__thiscall **)(wchar_t *))(*(_DWORD *)result + 212))(result); /*0x6af67c*/
    *((_DWORD *)*a2 + 183) = this->master; /*0x6af68b*/
    a2[1] = 0; /*0x6af691*/
    result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x6af698*/
    a2[2] = *(wchar_t **)&stru_A8EB00.?[416]; /*0x6af6a2*/
    a2[3] = v6; /*0x6af6a4*/
    a2[4] = 0; /*0x6af6a7*/
  }
  return result; /*0x6af6aa*/
}



// ==== 0x006AF6C0  SlaveManagerClass::ProcessSlaves  this=SlaveManagerClass  sig=csp ====
int __usercall SlaveManagerClass::ProcessSlaves@<eax>(
        SlaveManagerClass *this,
        int *p_SlaveManagerClass_field_5C@<edi>,
        int a3@<esi>)
{
  int v3; // ecx
  int v4; // ebp
  BuildingTypeClass **v5; // ebx
  int result; // eax
  int v7; // ecx
  int v8; // edi
  wchar_t *v9; // esi
  int v10; // ecx
  void (__thiscall **v11)(wchar_t *); // ebx
  int v12; // ecx
  int v13; // eax
  void *FoundationWidth; // eax
  int *v15; // ecx
  int FoundationHeight; // eax
  int v17; // ebx
  CellStruct *v18; // eax
  HouseClass **v19; // eax
  void (__thiscall **v20)(wchar_t *); // ebx
  Cell *v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // ebx
  __int16 v25; // ax
  int *v26; // ecx
  int v27; // eax
  int v28; // ecx
  CellStruct *v29; // eax
  void (__thiscall **v30)(wchar_t *); // ebx
  Cell *v31; // eax
  int v32; // eax
  int v33; // ecx
  int v34; // ebx
  void *v35; // eax
  int *v36; // ecx
  int v37; // eax
  int v38; // ebx
  CellStruct *v39; // eax
  HouseClass **v40; // eax
  int v41; // ecx
  __int16 slaveOwner; // bx
  _DWORD *v43; // eax
  int v44; // ecx
  int v45; // ebx
  void *v46; // eax
  int *v47; // ecx
  int v48; // eax
  int v49; // ebx
  CellStruct *v50; // eax
  void **v51; // eax
  unsigned __int16 ptr_4; // bx
  int (__thiscall **v53)(wchar_t *); // edx
  _DWORD *v54; // eax
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // ecx
  int v59; // edi
  __int16 v60; // ax
  int *v61; // ecx
  int v62; // eax
  int v63; // ecx
  CellStruct *v64; // eax
  void **v65; // eax
  void (__thiscall **v66)(wchar_t *); // edi
  int v67; // edx
  int v68; // ecx
  int v69; // eax
  int v70; // edx
  int v71; // ecx
  int v72; // ecx
  _WORD *v73; // [esp-6h] [ebp-B0h]
  _WORD *v74; // [esp-6h] [ebp-B0h]
  _WORD *v77; // [esp+2h] [ebp-A8h]
  SlaveManagerClass v78; // [esp+Eh] [ebp-9Ch] BYREF
  char v79[4]; // [esp+76h] [ebp-34h] BYREF
  __int16 v80[2]; // [esp+7Ah] [ebp-30h] BYREF
  char v81[12]; // [esp+7Eh] [ebp-2Ch] BYREF
  int v82; // [esp+8Ah] [ebp-20h] BYREF
  _DWORD v83[3]; // [esp+8Eh] [ebp-1Ch] BYREF
  char v84[8]; // [esp+9Ah] [ebp-10h] BYREF
  _DWORD v85[2]; // [esp+A2h] [ebp-8h] BYREF

  v4 = v3; /*0x6af6c8*/
  v5 = 0; /*0x6af6ca*/
  result = 0; /*0x6af6cc*/
  v7 = *(_DWORD *)(v3 + 72); /*0x6af6ce*/
  v78.? = 0; /*0x6af6d1*/
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(*(_DWORD *)(v4 + 60) + 4 * result); /*0x6af6e6*/
      v9 = *(wchar_t **)v8; /*0x6af6e9*/
      if ( !*(_DWORD *)v8 && *(_DWORD *)(v8 + 4) != 6 ) /*0x6af6f9*/
      {
        *(_DWORD *)v8 = 0; /*0x6af707*/
        *(_DWORD *)(v8 + 4) = 6; /*0x6af709*/
        v10 = *(_DWORD *)(v4 + 48); /*0x6af711*/
        *(_DWORD *)(v8 + 8) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af717*/
        *(_DWORD *)(v8 + 12) = v83[1]; /*0x6af721*/
        *(_DWORD *)(v8 + 16) = v10; /*0x6af724*/
      }
      switch ( *(_DWORD *)(v8 + 4) )
      {
        case 1:
          v78.AbstractClass = *(void **)v9; /*0x6af744*/
          v78.? = *(_DWORD *)(*((int (__thiscall **)(wchar_t *, char *, int, _DWORD, int *, int))v78.AbstractClass + 206))( /*0x6af778*/
                               v9,
                               v84,
                               *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6020) / 256,
                               0,
                               p_SlaveManagerClass_field_5C,
                               a3);
          if ( v78.? == dword_B0B5B8 )
          {
            TechnoClass::SetFocus((TechnoClass *)v9, 0); /*0x6af7c5*/
            v12 = *(_DWORD *)(v4 + 36); /*0x6af7ca*/
            if ( v12 && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) == 6 )
            {
              v78.? = *(void **)(v4 + 36); /*0x6af7e4*/
              if ( v78.? )
              {
                v13 = (*(int (__thiscall **)(void *))(*(_DWORD *)v78.? + 44))(v78.?); /*0x6af7ec*/
                v5 = v13 == 6 ? (BuildingTypeClass **)v78.? : 0;
              }
              FoundationWidth = (void *)BuildingTypeClass::GetFoundationWidth(v5[328]); /*0x6af806*/
              v15 = (int *)v5[328]; /*0x6af80b*/
              v78.? = FoundationWidth; /*0x6af813*/
              FoundationHeight = BuildingTypeClass::GetFoundationHeight(v15, 0); /*0x6af817*/
              v17 = *(_DWORD *)(v4 + 36); /*0x6af81f*/
              v77 = CellStruct::Set((CellStruct *)v83, LOWORD(v78.?) - 1, FoundationHeight / 2); /*0x6af839*/
              v18 = (CellStruct *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v17 + 440))(v17, &v78.creationFrame); /*0x6af849*/
              v19 = (HouseClass **)CellStruct::Add(v18, &v82, v77); /*0x6af851*/
            }
            else
            {
              v19 = (HouseClass **)(*(int (__thiscall **)(_DWORD, __int16 *))(**(_DWORD **)(v4 + 36) + 440))( /*0x6af862*/
                                     *(_DWORD *)(v4 + 36),
                                     v80);
            }
            v20 = *(void (__thiscall ***)(wchar_t *))v9; /*0x6af86a*/
            v78.slaveOwner = *v19; /*0x6af870*/
            a3 = 1; /*0x6af874*/
            p_SlaveManagerClass_field_5C = (int *)CellCoord::To_CellObj( /*0x6af881*/
                                                    (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                    (__int16 *)&v78.slaveOwner);
            v20[288](v9); /*0x6af884*/
            (*(void (__thiscall **)(wchar_t *, int, _DWORD))(*(_DWORD *)v9 + 488))(v9, 2, 0); /*0x6af892*/
            *(_DWORD *)(v8 + 4) = 4; /*0x6af898*/
          }
          else
          {
            v11 = *(void (__thiscall ***)(wchar_t *))v9; /*0x6af78c*/
            a3 = 1; /*0x6af792*/
            p_SlaveManagerClass_field_5C = (int *)CellCoord::To_CellObj( /*0x6af79f*/
                                                    (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                    (__int16 *)&v78.?);
            v11[288](v9); /*0x6af7a2*/
            (*(void (__thiscall **)(wchar_t *, int, _DWORD))(*(_DWORD *)v9 + 488))(v9, 2, 0); /*0x6af7b0*/
            *(_DWORD *)(v8 + 4) = 2; /*0x6af7b6*/
          }
          goto LABEL_62; /*0x6af89f*/
        case 2:
          v21 = (Cell *)(*(int (__thiscall **)(wchar_t *))(*(_DWORD *)v9 + 444))(v9); /*0x6af8a8*/
          if ( (unsigned __int8)Cell::IsBridge2(v21) ) /*0x6af8b0*/
          {
            SlaveManagerClass::Check((SlaveManagerClass *)v9); /*0x6af8bb*/
            *(_DWORD *)(v8 + 4) = 3; /*0x6af8c0*/
          }
          else if ( !*((_DWORD *)v9 + 361) ) /*0x6af8cc*/
          {
            *(_DWORD *)(v8 + 4) = 1; /*0x6af8d8*/
          }
          goto LABEL_62; /*0x6af8c7*/
        case 3:
          if ( SlaveManagerClass::CheckIsOne((SlaveManagerClass *)v9) ) /*0x6af8e6*/
          {
            v22 = (*(int (__thiscall **)(wchar_t *, int *, int))(*(_DWORD *)v9 + 444))( /*0x6af8f7*/
                    v9,
                    p_SlaveManagerClass_field_5C,
                    a3);
            TechnoClass::SetFocus((TechnoClass *)v9, v22); /*0x6af900*/
            v23 = *(_DWORD *)(v4 + 36); /*0x6af905*/
            if ( v23 && (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 44))(v23) == 6 ) /*0x6af914*/
            {
              v24 = IsObjectTypeBuildingType(*(_DWORD *)(v4 + 36)); /*0x6af91e*/
              v25 = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v24 + 1312)); /*0x6af926*/
              v26 = *(int **)(v24 + 1312); /*0x6af92b*/
              LOWORD(v78.master) = v25 - 1; /*0x6af934*/
              v27 = BuildingTypeClass::GetFoundationHeight(v26, 0); /*0x6af939*/
              v28 = *(_DWORD *)(v4 + 36); /*0x6af93f*/
              HIWORD(v78.master) = v27 / 2; /*0x6af946*/
              v29 = (CellStruct *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v28 + 440))(v28, v78.slaves); /*0x6af95c*/
              v78.? = *CellStruct::Add(v29, &v78.__pad_48[4], &v78.master); /*0x6af96b*/
            }
            else
            {
              v78.? = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v4 + 36) + 440))( /*0x6af983*/
                                   *(_DWORD *)(v4 + 36),
                                   &v78.SlaveManagerClass_field_54);
            }
            v30 = *(void (__thiscall ***)(wchar_t *))v9; /*0x6af987*/
            a3 = 1; /*0x6af98d*/
            p_SlaveManagerClass_field_5C = (int *)CellCoord::To_CellObj( /*0x6af99a*/
                                                    (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                    (__int16 *)&v78.?);
            v30[288](v9); /*0x6af99d*/
            (*(void (__thiscall **)(wchar_t *, int, _DWORD))(*(_DWORD *)v9 + 488))(v9, 2, 0); /*0x6af9ab*/
            *(_DWORD *)(v8 + 4) = 4; /*0x6af9b1*/
          }
          else
          {
            v31 = (Cell *)(*(int (__thiscall **)(wchar_t *))(*(_DWORD *)v9 + 444))(v9); /*0x6af9c1*/
            if ( (unsigned __int8)Cell::IsBridge2(v31) ) /*0x6af9c9*/
            {
              if ( !SlaveManagerClass::IsMasterHarvester((SlaveManagerClass *)v9) ) /*0x6af9e5*/
                *(_DWORD *)(v8 + 4) = 1; /*0x6af9f2*/
            }
            else
            {
              SlaveManagerClass::VtableDispatch((SlaveManagerClass *)v9); /*0x6af9d4*/
              *(_DWORD *)(v8 + 4) = 1; /*0x6af9d9*/
            }
          }
          goto LABEL_62; /*0x6af9b8*/
        case 4:
          v32 = *((_DWORD *)v9 + 361); /*0x6af9fe*/
          HIBYTE(v78.?) = 0; /*0x6afa04*/
          if ( v32 ) /*0x6afa0b*/
          {
            v33 = *(_DWORD *)(v4 + 36); /*0x6afa11*/
            if ( v33 && (*(int (__thiscall **)(int))(*(_DWORD *)v33 + 44))(v33) == 6 ) /*0x6afa20*/
            {
              v34 = IsObjectTypeBuildingType(*(_DWORD *)(v4 + 36)); /*0x6afa2a*/
              v35 = (void *)BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v34 + 1312)); /*0x6afa32*/
              v36 = *(int **)(v34 + 1312); /*0x6afa37*/
              v78.AbstractClass = v35; /*0x6afa3f*/
              v37 = BuildingTypeClass::GetFoundationHeight(v36, 0); /*0x6afa43*/
              v38 = *(_DWORD *)(v4 + 36); /*0x6afa4c*/
              v73 = CellStruct::Set((CellStruct *)v80, LOWORD(v78.AbstractClass) - 1, v37 / 2); /*0x6afa67*/
              v39 = (CellStruct *)(*(int (__thiscall **)(int, int *, int *))(*(_DWORD *)v38 + 440))( /*0x6afa75*/
                                    v38,
                                    &v82,
                                    &v78.SlaveManagerClass_field_54);
              v40 = (HouseClass **)CellStruct::Add(v39, v73, p_SlaveManagerClass_field_5C); /*0x6afa7d*/
            }
            else
            {
              v40 = (HouseClass **)(*(int (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)(v4 + 36) + 440))( /*0x6afa8e*/
                                     *(_DWORD *)(v4 + 36),
                                     &v78.SlaveManagerClass_field_5C,
                                     p_SlaveManagerClass_field_5C);
            }
            v41 = *((_DWORD *)v9 + 361); /*0x6afa94*/
            v78.slaveOwner = *v40; /*0x6afaa3*/
            slaveOwner = (__int16)v78.slaveOwner; /*0x6afa9a*/
            p_SlaveManagerClass_field_5C = v85; /*0x6afaa9*/
            v43 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v41 + 72))(v41); /*0x6afaaa*/
            v83[0] = *(_DWORD *)CellStruct::Set((CellStruct *)&v78.slaveCount, *v43 / 256, v43[1] / 256); /*0x6afad9*/
            LOWORD(v78.?) = LOWORD(v83[0]) - slaveOwner; /*0x6afaef*/
            HIWORD(v78.?) = HIWORD(v83[0]) - HIWORD(v78.house); /*0x6afaf4*/
            v78.AbstractClass = v78.?; /*0x6afb01*/
            if ( (__int16)SlaveManagerClass::Calc2DDistance(&v78) > *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] /*0x6afb19*/
                                                                              + 3576) )
              HIBYTE(v78.?) = 1; /*0x6afb1b*/
          }
          v44 = *(_DWORD *)(v4 + 36); /*0x6afb20*/
          if ( v44 && (*(int (__thiscall **)(int))(*(_DWORD *)v44 + 44))(v44) == 6 ) /*0x6afb2f*/
          {
            v45 = IsObjectTypeBuildingType(*(_DWORD *)(v4 + 36)); /*0x6afb39*/
            v46 = (void *)BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v45 + 1312)); /*0x6afb41*/
            v47 = *(int **)(v45 + 1312); /*0x6afb46*/
            v78.AbstractClass = v46; /*0x6afb4e*/
            v48 = BuildingTypeClass::GetFoundationHeight(v47, 0); /*0x6afb52*/
            v49 = *(_DWORD *)(v4 + 36); /*0x6afb5a*/
            v74 = CellStruct::Set((CellStruct *)v78.slaves, LOWORD(v78.AbstractClass) - 1, v48 / 2); /*0x6afb71*/
            v50 = (CellStruct *)(*(int (__thiscall **)(int, char *, int *))(*(_DWORD *)v49 + 440))( /*0x6afb7e*/
                                  v49,
                                  v78.__pad_48,
                                  &v78.slaveVectorCapacity);
            v51 = (void **)CellStruct::Add(v50, v74, p_SlaveManagerClass_field_5C); /*0x6afb86*/
          }
          else
          {
            v51 = (void **)(*(int (__thiscall **)(_DWORD, char *, int *))(**(_DWORD **)(v4 + 36) + 440))( /*0x6afb97*/
                             *(_DWORD *)(v4 + 36),
                             &v78.__pad_48[8],
                             p_SlaveManagerClass_field_5C);
          }
          v53 = *(int (__thiscall ***)(wchar_t *))v9; /*0x6afb9f*/
          p_SlaveManagerClass_field_5C = &v78.SlaveManagerClass_field_5C; /*0x6afba7*/
          v78.? = *v51; /*0x6afba8*/
          ptr_4 = (unsigned __int16)v78.?; /*0x6afb9d*/
          v54 = (_DWORD *)v53[110](v9); /*0x6afbac*/
          if ( *v54 == __PAIR32__(HIWORD(v78.AbstractClass), ptr_4) ) /*0x6afbb5*/
          {
            if ( !*((_DWORD *)v9 + 361) ) /*0x6afbc2*/
            {
              InfantryClass::SlaveGiveMoney_RecordBalanceBefore((int *)v9, *(_DWORD **)(v4 + 36)); /*0x6afbd2*/
              (*(void (__thiscall **)(wchar_t *))(*(_DWORD *)v9 + 212))(v9); /*0x6afbdb*/
              v55 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6afbe1*/
              v56 = *(_DWORD *)(v4 + 52); /*0x6afbe6*/
              *(_DWORD *)(v8 + 4) = 5; /*0x6afbec*/
              *(_DWORD *)(v8 + 8) = v55; /*0x6afbf3*/
              *(_DWORD *)(v8 + 12) = v85[0]; /*0x6afbfc*/
              *(_DWORD *)(v8 + 16) = v56; /*0x6afbff*/
              goto LABEL_62; /*0x6afc02*/
            }
LABEL_47:
            if ( !HIBYTE(v78.?) ) /*0x6afc17*/
              goto LABEL_62; /*0x6afc17*/
            goto LABEL_48; /*0x6afc17*/
          }
          if ( *((_DWORD *)v9 + 361) ) /*0x6afc07*/
            goto LABEL_47; /*0x6afc0f*/
LABEL_48:
          v57 = IsObjectTypeBuildingType(*(_DWORD *)(v4 + 36)); /*0x6afc1d*/
          v58 = *(_DWORD *)(v4 + 36); /*0x6afc25*/
          if ( v57 ) /*0x6afc2a*/
          {
            v59 = IsObjectTypeBuildingType(v58); /*0x6afc31*/
            v60 = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v59 + 1312)); /*0x6afc39*/
            v61 = *(int **)(v59 + 1312); /*0x6afc3e*/
            LOWORD(v78.?) = v60 - 1; /*0x6afc47*/
            v62 = BuildingTypeClass::GetFoundationHeight(v61, 0); /*0x6afc4c*/
            v63 = *(_DWORD *)(v4 + 36); /*0x6afc52*/
            HIWORD(v78.?) = v62 / 2; /*0x6afc59*/
            v64 = (CellStruct *)(*(int (__thiscall **)(int, char *, int *, int *))(*(_DWORD *)v63 + 440))( /*0x6afc72*/
                                  v63,
                                  v79,
                                  &v78.SlaveManagerClass_field_60,
                                  &v78.?);
            v65 = (void **)CellStruct::Add(v64, &v78.SlaveManagerClass_field_5C, (_WORD *)a3); /*0x6afc7a*/
          }
          else
          {
            v65 = (void **)(*(int (__thiscall **)(int, char *, int *, int))(*(_DWORD *)v58 + 440))( /*0x6afc8b*/
                             v58,
                             v81,
                             &v78.SlaveManagerClass_field_5C,
                             a3);
          }
          v66 = *(void (__thiscall ***)(wchar_t *))v9; /*0x6afc93*/
          v78.? = *v65; /*0x6afc99*/
          a3 = 1; /*0x6afc9d*/
          p_SlaveManagerClass_field_5C = (int *)CellCoord::To_CellObj( /*0x6afcaa*/
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (__int16 *)&v78.?);
          v66[288](v9); /*0x6afcad*/
          (*(void (__thiscall **)(wchar_t *, int, _DWORD))(*(_DWORD *)v9 + 488))(v9, 2, 0); /*0x6afcbb*/
LABEL_62:
          v72 = *(_DWORD *)(v4 + 72); /*0x6afd20*/
          result = (int)++v78.?; /*0x6afd27*/
          if ( (int)v78.? >= v72 ) /*0x6afd2e*/
            return result; /*0x6afd2e*/
          v5 = 0; /*0x6af6e1*/
          break; /*0x6af6e1*/
        case 5:
          v67 = *(_DWORD *)(v8 + 8); /*0x6afcc3*/
          v68 = *(_DWORD *)(v8 + 16); /*0x6afcc6*/
          if ( v67 == -1 ) /*0x6afccc*/
            goto LABEL_55; /*0x6afccc*/
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v67 >= v68 ) /*0x6afcd7*/
            goto LABEL_56; /*0x6afcd7*/
          v68 -= *(_DWORD *)&stru_A8EB00.?[416] - v67; /*0x6afcd9*/
LABEL_55:
          if ( !v68 ) /*0x6afcdd*/
          {
LABEL_56:
            v69 = *((_DWORD *)v9 + 432); /*0x6afcdf*/
            *((_DWORD *)v9 + 27) = *(_DWORD *)(v69 + 160); /*0x6afceb*/
            *((_DWORD *)v9 + 28) = *(_DWORD *)(v69 + 160); /*0x6afcf4*/
            *(_DWORD *)(v8 + 4) = 0; /*0x6afcf7*/
          }
          goto LABEL_62; /*0x6afcfa*/
        case 6:
          v70 = *(_DWORD *)(v8 + 8); /*0x6afcfc*/
          v71 = *(_DWORD *)(v8 + 16); /*0x6afcff*/
          if ( v70 == -1 ) /*0x6afd05*/
            goto LABEL_60; /*0x6afd05*/
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v70 >= v71 ) /*0x6afd10*/
            goto LABEL_61; /*0x6afd10*/
          v71 -= *(_DWORD *)&stru_A8EB00.?[416] - v70; /*0x6afd12*/
LABEL_60:
          if ( !v71 ) /*0x6afd16*/
LABEL_61:
            SlaveManagerClass::CreateSlave((SlaveManagerClass *)v4, (wchar_t **)v8); /*0x6afd1b*/
          goto LABEL_62; /*0x6afd1b*/
        default:
          goto LABEL_62;
      }
    }
  }
  return result; /*0x6afd36*/
}



// ==== 0x006AFD60  ObjectClass::ProcessDeployAction  this=ObjectClass  sig=csp ====
char __thiscall ProcessDeployAction(ObjectClass *this)
{
  double v1; // st7
  int v3; // eax
  _DWORD *occupant; // edi
  int v5; // edi
  _DWORD *v6; // edi
  int v7; // edi
  void *v8; // eax
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // edi
  int v12; // edi
  int v13; // ecx
  int v14; // edi
  int v15; // ecx
  _DWORD *v16; // eax
  int v17; // edx
  int v18; // eax
  __int16 v19; // di
  CellStruct *v20; // eax
  _DWORD *v21; // eax
  int v22; // edx
  __int16 v23; // cx
  int v24; // eax
  double v26; // [esp+1Ch] [ebp-38h]
  double v27; // [esp+1Ch] [ebp-38h]
  TechnoClass *v28; // [esp+24h] [ebp-30h]
  __int16 v29[2]; // [esp+2Ch] [ebp-28h] BYREF
  int v30; // [esp+30h] [ebp-24h] BYREF
  int v31; // [esp+34h] [ebp-20h] BYREF
  int v32; // [esp+38h] [ebp-1Ch] BYREF
  int v33; // [esp+3Ch] [ebp-18h] BYREF
  int v34; // [esp+40h] [ebp-14h] BYREF
  _BYTE v35[8]; // [esp+44h] [ebp-10h] BYREF
  int v36; // [esp+4Ch] [ebp-8h]

  v3 = this->customSound_controller[3]; /*0x6afd67*/
  switch ( v3 )
  {
    case 0:
      occupant = (_DWORD *)this->occupant; /*0x6afd7a*/
      if ( occupant ) /*0x6afd7f*/
      {
        v3 = (*(int (__thiscall **)(int))(*occupant + 44))(this->occupant); /*0x6afd89*/
        if ( v3 == 6 ) /*0x6afd8f*/
        {
          v5 = occupant[43]; /*0x6afd95*/
          if ( v5 != 19 && v5 != 18 ) /*0x6afda7*/
          {
            this->customSound_controller[3] = 5; /*0x6afdad*/
            this->customSound_controller[4] = 0x7FFFFFFF; /*0x6afdb4*/
          }
        }
      }
      break; /*0x6afdc0*/
    case 1:
      v6 = (_DWORD *)this->occupant; /*0x6afdc1*/
      if ( v6 && (*(int (__thiscall **)(int))(*v6 + 44))(this->occupant) == 1 && (v3 = v6[361]) != 0 ) /*0x6afddc*/
      {
        this->customSound_controller[3] = 2; /*0x6afdde*/
        this->customSound_controller[4] = 0x7FFFFFFF; /*0x6afde5*/
      }
      else
      {
        v3 = *(_DWORD *)(*(int (__thiscall **)(int, int *, int, int))(*(_DWORD *)this->occupant + 824))( /*0x6afe1c*/
                          this->occupant,
                          &v31,
                          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6024) / 256,
                          1);
        v30 = v3; /*0x6afe25*/
        *(_DWORD *)v29 = v3; /*0x6afe29*/
        if ( v3 == dword_B0B5B8 /*0x6afe57*/
          || (v3 = *BuildingClass::FindPlacementCells2((BuildingClass *)this, &v32, v3),
              *(_DWORD *)v29 = v3,
              v3 == dword_B0B5B8) )
        {
          this->customSound_controller[3] = 0; /*0x6afe67*/
          this->customSound_controller[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6afe74*/
        }
        else
        {
          v7 = *(_DWORD *)this->occupant; /*0x6afe87*/
          v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x6afe8e*/
          (*(void (__thiscall **)(int, void *, int))(v7 + 1152))(this->occupant, v8, 1); /*0x6afe97*/
          LOBYTE(v3) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this->occupant + 488))(this->occupant, 2, 0); /*0x6afea6*/
          this->customSound_controller[3] = 2; /*0x6afeac*/
          this->customSound_controller[4] = 0x7FFFFFFF; /*0x6afeb3*/
        }
      }
      break; /*0x6afdf1*/
    case 2:
      v9 = (_DWORD *)this->occupant; /*0x6afec0*/
      if ( v9 && (v3 = (*(int (__thiscall **)(int))(*v9 + 44))(this->occupant), v3 == 1) ) /*0x6afed1*/
      {
        v3 = v9[361]; /*0x6afee9*/
        if ( !v3 ) /*0x6afef1*/
        {
          LOBYTE(v3) = TechnoClass::Deploy(v28, v1); /*0x6afef9*/
          if ( (_BYTE)v3 ) /*0x6aff00*/
          {
            this->customSound_controller[3] = 4; /*0x6aff02*/
            this->customSound_controller[4] = 0x7FFFFFFF; /*0x6aff09*/
          }
          else
          {
            v10 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6aff16*/
            this->customSound_controller[3] = 3; /*0x6aff23*/
            this->customSound_controller[0] = v10; /*0x6aff2a*/
            v3 = v36; /*0x6aff2c*/
            this->customSound_controller[4] = 0x7FFFFFFF; /*0x6aff30*/
            this->customSound_controller[1] = v3; /*0x6aff38*/
            this->customSound_controller[2] = 30; /*0x6aff3c*/
          }
        }
      }
      else
      {
        this->customSound_controller[3] = 0; /*0x6afed3*/
        this->customSound_controller[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6afee0*/
      }
      break; /*0x6afee8*/
    case 3:
      v11 = this->occupant; /*0x6aff43*/
      if ( v11 && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(this->occupant) == 1 ) /*0x6aff54*/
      {
        LOBYTE(v3) = TechnoClass::Deploy(v28, v1); /*0x6aff6d*/
        if ( !(_BYTE)v3 ) /*0x6aff74*/
          goto LABEL_51; /*0x6aff74*/
        this->customSound_controller[3] = 4; /*0x6aff7a*/
        this->customSound_controller[4] = 0x7FFFFFFF; /*0x6aff81*/
      }
      else
      {
        this->customSound_controller[3] = 0; /*0x6aff56*/
        LOBYTE(v3) = stru_A8EB00.?[416]; /*0x6aff5d*/
        this->customSound_controller[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6aff62*/
      }
      break; /*0x6aff6a*/
    case 4:
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this->occupant + 44))(this->occupant); /*0x6aff93*/
      if ( v3 == 6
        && ((v12 = this->occupant) != 0
          ? (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(this->occupant) == 6 ? v12 : 0)
          : (v3 = 0),
            *(_DWORD *)(v3 + 1332)) )
      {
        this->customSound_controller[3] = 5; /*0x6affc2*/
        this->customSound_controller[4] = 0x7FFFFFFF; /*0x6affc9*/
      }
      else
      {
        v13 = this->occupant; /*0x6affd6*/
        if ( v13 )
        {
          v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13); /*0x6affe3*/
          if ( v3 == 1 )
          {
            v14 = this->occupant; /*0x6affef*/
            v3 = v14 ? ((*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(this->occupant) == 1 ? v14 : 0) : 0;
            if ( !*(_BYTE *)(v3 + 1676) && *(_DWORD *)(this->occupant + 172) == 5 ) /*0x6b0022*/
            {
              this->customSound_controller[3] = 2; /*0x6b0028*/
              this->customSound_controller[4] = 0x7FFFFFFF; /*0x6b002f*/
            }
          }
        }
      }
      break; /*0x6affd5*/
    case 5:
      v15 = this->occupant; /*0x6b003c*/
      if ( v15 && (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 44))(v15) == 1 ) /*0x6b004b*/
      {
        this->customSound_controller[3] = 0; /*0x6b004d*/
        LOBYTE(v3) = stru_A8EB00.?[416]; /*0x6b0054*/
        this->customSound_controller[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b0059*/
      }
      else
      {
        v3 = *(_DWORD *)(*(int (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)this->occupant + 824))( /*0x6b008d*/
                          this->occupant,
                          &v31,
                          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6016) / 256,
                          0);
        v30 = v3; /*0x6b0096*/
        if ( v3 == dword_B0B5B8 ) /*0x6b009a*/
        {
          *(_DWORD *)v29 = *(_DWORD *)(*(int (__thiscall **)(int, int *, int, int))(*(_DWORD *)this->occupant + 824))( /*0x6b00e7*/
                                        this->occupant,
                                        &v31,
                                        *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6024) / 256,
                                        1);
          v30 = *BuildingClass::FindPlacementCells2((BuildingClass *)this, &v33, *(int *)v29); /*0x6b0100*/
          v16 = CellStruct::Sub((CellStruct *)&v30, &v34, v29); /*0x6b0104*/
          v17 = *((__int16 *)v16 + 1); /*0x6b0109*/
          v18 = *(__int16 *)v16; /*0x6b010d*/
          v31 = v17; /*0x6b0110*/
          __asm { fild [esp+38h+var_20] } /*0x6b0117*/
          v31 = v18; /*0x6b011b*/
          __asm /*0x6b011f*/
          {
            fild [esp+38h+var_20]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fstp [esp+38h+var_38]; double
            fstp st
            fstp st
          }
          Math::Sqrt(v26); /*0x6b0134*/
          v19 = Math::RoundToInt(v1); /*0x6b0144*/
          v20 = (CellStruct *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->occupant + 440))( /*0x6b014d*/
                                this->occupant,
                                v35);
          v21 = CellStruct::Sub(v20, &v34, v29); /*0x6b015f*/
          v22 = *(__int16 *)v21; /*0x6b0168*/
          v31 = *((__int16 *)v21 + 1); /*0x6b016b*/
          __asm { fild [esp+38h+var_20] } /*0x6b0172*/
          v31 = v22; /*0x6b0176*/
          __asm /*0x6b017a*/
          {
            fild [esp+38h+var_20]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fstp [esp+38h+var_38]; double
            fstp st
            fstp st
          }
          Math::Sqrt(v27); /*0x6b018f*/
          v23 = Math::RoundToInt(v1); /*0x6b01b8*/
          v3 = v19 + *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6028) / 256; /*0x6b01bb*/
          if ( v3 < v23 ) /*0x6b01bf*/
          {
            *(_BYTE *)(this->occupant + 1272) = 1; /*0x6b01c4*/
            v24 = (*(int (__thiscall **)(int))(*(_DWORD *)this->occupant + 444))(this->occupant); /*0x6b01d0*/
            TechnoClass::SetFocus((TechnoClass *)this->occupant, v24); /*0x6b01da*/
            LOBYTE(v3) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this->occupant + 488))( /*0x6b01e8*/
                           this->occupant,
                           19,
                           0);
            this->customSound_controller[3] = 6; /*0x6b01ee*/
            this->customSound_controller[4] = 0x7FFFFFFF; /*0x6b01f5*/
          }
        }
        if ( this->customSound_controller[3] != 6 ) /*0x6b0200*/
          LOBYTE(v3) = FactoryClass::PlaceExitUnits((FactoryClass *)this); /*0x6b0204*/
      }
      break; /*0x6b0061*/
    case 6:
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this->occupant + 44))(this->occupant); /*0x6b0214*/
      if ( v3 == 1 ) /*0x6b021a*/
      {
        LOBYTE(v3) = (unsigned __int8)Event_Process_6B0490(this); /*0x6b021e*/
LABEL_51:
        this->customSound_controller[3] = 1; /*0x6b0223*/
        this->customSound_controller[4] = 0x7FFFFFFF; /*0x6b022a*/
      }
      break; /*0x6b022a*/
    default:
      return v3;
  }
  return v3; /*0x6afdbb*/
}


